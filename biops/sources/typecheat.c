/* $Id: typecheat.c,v 34.2 1995/03/29 13:04:18 ella Exp $ */


/* 
    ************************************************************************
    This Program is the property of the Secretary of State for Defence
    (United Kingdom) acting through the Defence Research Agency (DRA). Use,
    reproduction, production of amended versions and/or transfer of this
    Program is permitted provided that:

  (a)  this legend be preserved on any such reproduction and amended version,
  (b)  any amended version of this Program be clearly marked to show the
       nature of the amendment and of the name of the amending organisation,
  and
  (c)  any recipient  of such reproduction or amended version accept the
       conditions set out in this legend.

                         Crown Copyright, (c)   1993

                             All rights reserved.

    The Secretary of State for Defence (United Kingdom) acting through his
    Defence Research Agency (DRA) gives no warranty that any element of the
    Software is suitable for any purpose and he shall not be liable for any
    loss or damage including loss or damage resulting in injury or death
    howsoever caused which results from the use of the Software, or any
    developments adaptions modifications translations and enhancements
    thereof.

    The original authors may be contacted via email on ella@dra.hmg.gb or by
    writing to ELLA Office, DRA, St Andrews Road, Malvern, Worcs WR14 3PS, UK.
    ************************************************************************

   ------------------------- Change History ---------------------------
30:08:94  33.001  ELLA  NewConFig Install in new configuration management
                                  system old version was 1.9 
29:03:95  34.002  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

/*
  ELLA alien code BIOP for range conversion between integers, enumerations
  and characters, and for packing and unpacking strings and rows.

  The BIOP is polymorphic.
  It implements conversions between all pairs of the following kinds of signals:
    - characters, enumerations(without associated types) and rows thereof
    - integers, and rows thereof
    - strings of two-valued characters (bitstrings)
    - other character strings (bytestrings).

  The BIOP removes all structure from its inputs and outputs, and attempts to
  match up corresponding "primitive" elements in order to determine the conversion(s) to
  be performed.

  Checking of output ranges is done internally, rather than allowing aci_set_output to do it,
  so thatonly those output elements whose corresponding inputs are out of range are set to query.
  (aci_set_output sets the entire output to query, if any element of it is out of range).
*/

static char rcsid[] = "$Id: typecheat.c,v 34.2 1995/03/29 13:04:18 ella Exp $";

#include "alien.h"
#include "bitstring.h"

extern char *malloc();


/*
  Remember input and output type information, so that the cost of finding
  it out is not incurred during evaluation.

  It is set up initially on a per declaration basis, to save space,
  accessed via the instance_id field of the instance data.
  Because it is dynamically allocated, it is not automatically saved and
  restored, therefore it must be reconstituted during a 'restore' action.
  As restoration is done on a per instance basis, the information for 
  instances of a particular function will be replicated for each instance.
  A circuit containing many instances of convertors will therefore occupy
  more memory after it has been restored than it occupied originally!!
*/

/*
  This enumeration is used to index the table of conversion functions.
  Their values are therefore important.
*/

typedef enum
{
  CharsOrEnums = 0,		/* char/enum or []char/enum */
  Integers,			/* int or []int */
  BitString,			/* String of 2-valued char type */
  ByteString			/* String of 3- to 255- valued char type */
}
KindOfType;

/*
  decl_id/instance_id is the root of the Interface list
*/

typedef struct
{
  int lwb;
  int upb;
}
Range;

typedef struct sInterface
{
  struct sInterface *next;
  unsigned elems;		/* Length of row/string involved in conversion */
  Range *outputRange;		/* The permitted range for each output */
  void (*convert)();		/* Conversion function */
}
ConversionSpec;

#define nullConversionSpec ((ConversionSpec *) 0)

/*
  Workspace for evaluation function.
*/
typedef struct
{
  char *ibuf, *obuf;		/* input and output buffers, allocated during initialisation */
}
Workspace;


/*
  Conversion functions and lookup table, indexed by KindOfType
*/

static void
  chars2chars(), chars2ints(), chars2bits(), chars2bytes(),  
  ints2chars(),  ints2ints(), ints2bits(),  ints2bytes(),  
  bits2chars(),  bits2ints(), bits2bits(),  bits2bytes(),  
  bytes2chars(), bytes2ints(), bytes2bits(), bytes2bytes();


static void (*(conversions[][4]))() =
{
/*          To ->  CharsOrEnums  Integers    BitString   ByteString  */
/* From:        */		           
/* CharsOrEnums */  chars2chars, chars2ints, chars2bits, chars2bytes,
/* Integers     */  ints2chars,  ints2ints,  ints2bits,  ints2bytes,
/* BitString    */  bits2chars,  bits2ints,  bits2bits,  bits2bytes,
/* ByteString   */  bytes2chars, bytes2ints, bytes2bits, bytes2bytes
};


/*
  Other functions defined in this module are ...
*/

static ConversionSpec *mkConversionSpec();
static void freeConversionSpec();
static unsigned flattenAciType();
static unsigned countFlattenedTypes();
static int hasAssocTypes();
static KindOfType typeOf();


/*
  flattenAciType returns the primitive types that constitute the 
  supplied ACI_TYPE
  It writes to an array of ACI_TYPEs in space that is allocated by the caller.
  It returns the number of ACI_TYPE slots consumed.
*/

static unsigned flattenAciType(aciType,flattenedTypes)
ACI_TYPE aciType;		/* The type to be flattened */
ACI_TYPE *flattenedTypes;	/* space for result */
{
  switch( aciType->class )
  {
  case Struct:
    {
      int i, total;
      ACI_TYPE *nextFlatType;
      
      for(
	  i=0, total=0, nextFlatType=flattenedTypes;
	  i < aciType->type_info.struct_type.elems;
	  i++)
      {
	int increment = flattenAciType(aciType->type_info.struct_type.subtypes[i],nextFlatType);
	nextFlatType += increment;
	total += increment;
      }
      
      return total;
    }

  case Row:
    {
      int i, total;
      ACI_TYPE *nextFlatType;
      
      for(
	  i=0, total=0, nextFlatType=flattenedTypes;
	  i < aciType->type_info.row_type.length;
	  i++)
      {
	int increment = flattenAciType(aciType->type_info.row_type.subtype,nextFlatType);
	nextFlatType += increment;
	total += increment;
      }
      
      return total;
    }
    
  default:
    *flattenedTypes = aciType;
    return 1;
  }
}

/*
  Count the number of elements in a flattened type.
*/
static unsigned countFlattenedTypes(aciType)
ACI_TYPE aciType;
{
  switch( aciType->class )
  {
  case Struct:
    {
      int i;
      int total;
      for(
	  i=0, total=0;
	  i < aciType->type_info.struct_type.elems;
	  i++)
	total += countFlattenedTypes(aciType->type_info.struct_type.subtypes[i]);
      return total;
    }
    
  case Row:
    return aciType->type_info.row_type.length *
      countFlattenedTypes(aciType->type_info.row_type.subtype);
    
  default:
    return 1;
  }
}

static KindOfType typeOf(aciType)
ACI_TYPE aciType;
{
  switch( aciType->class )
  {
  case Enum:
  case Char:
    return CharsOrEnums;
  case Int:
    return Integers;
  case String:
    return strlen((aciType->type_info.string_type.subtype)->type_info.char_type.repr) <= 2 ? BitString : ByteString;
  }
}

/*
  Is the supplied type an enumeration with associated types?
*/
static int hasAssocTypes(t)
ACI_TYPE t;
{
  int i;
  
  if( t->class != Enum )
    return 0;

  for(i=0; i < t->type_info.enum_type.elems; i++)
    if( (t->type_info.enum_type.subtypes[i])->class != Null )
      return 1;

  return 0;
}


/*
  mkConversionSpec constructs an ConversionSpec description.
  It may be called either from the finder, or from the evaluation function.
  It matches input types with corresponding elements of the output in
  accordance with the spec.
  If the types cannot be matched, a null pointer is returned.
*/

static ConversionSpec *mkConversionSpec(instance,finderInputs,finderUpbInputs,finderOutput)
ACI_EVAL_INST instance;
ACI_TYPE_HANDLE *finderInputs;
unsigned finderUpbInputs;
ACI_TYPE_HANDLE finderOutput;
{
  int i;

  ACI_TYPE *inputs, *outputs;	  /* flattened types */
  unsigned upbInputs, upbOutputs; /* how many flattened types */
  ConversionSpec *conversionSpec = nullConversionSpec;
  ConversionSpec **thisConversionSpec = &conversionSpec; /* place marker */

# define badConversionSpec (freeConversionSpec(conversionSpec),nullConversionSpec)  
# define lengthMismatchMsg "Input and output widths do not match"
# define noAssocTypesMsg "Associated types are not supported by this BIOP"

  ACI_TYPE *thisInput, *thisOutput; /* loop variable */
    
  /* Find ACI types of inputs and flattened output */

  upbInputs =
    instance == 0 ? finderUpbInputs : aci_inputs_upb(instance);
    
  upbOutputs =
    countFlattenedTypes( instance == 0 ? aci_decode_type(finderOutput) : aci_output_type(instance));
  
  for(
      thisInput = inputs = (ACI_TYPE *) malloc(sizeof(ACI_TYPE)*upbInputs), i=1;
      i <= upbInputs;
      i++, thisInput++
      )
    *thisInput =
      instance == 0 ? aci_decode_type(finderInputs[i-1]) : aci_input_type(instance,i);
  
  flattenAciType(
		 instance == 0 ? aci_decode_type(finderOutput) : aci_output_type(instance),
		 outputs=(ACI_TYPE *)malloc(sizeof(ACI_TYPE)*upbOutputs)
		 );

  /* Match flattened types and construct ConversionSpec description */
  for(
      thisConversionSpec = &conversionSpec, thisInput = inputs, thisOutput = outputs;
      (thisInput < inputs+upbInputs) && (thisOutput < outputs+upbOutputs);
      thisConversionSpec = &((*thisConversionSpec)->next), thisInput++, thisOutput++
      )
  {
    KindOfType baseType;
    unsigned length;		/* of string or row  */
    
    /* Create new ConversionSpec on end of list ... */
    
    *thisConversionSpec = (ConversionSpec *) malloc(sizeof(ConversionSpec));
    (*thisConversionSpec)->next = nullConversionSpec;
    
    /* ... and fill it in */
    
    switch( (*thisInput)->class )
    {
    case Enum:
      if( hasAssocTypes(*thisInput) )
      {
	aci_log(noAssocTypesMsg,0);
	return badConversionSpec;
      }
      /* fallthrough */
    case Char:
    case Int:
      /* charenum-1 -> charenum-2 */
      /* charenum -> STRING [1] char */
      /* [n] charenum -> STRING [n] char */
      /* charenum -> integer */
      /* integer -> charenum */
      /* integer -> STRING[1] char */
      /* [n] integer -> STRING [n] char */
      /* integer-1 -> integer-2 */

      (*thisConversionSpec)->outputRange = (Range *)malloc(sizeof(Range));
      
      switch( (*thisOutput)->class )
      {
      case Char:
	(*thisConversionSpec)->outputRange->lwb = 1;
	(*thisConversionSpec)->outputRange->upb = strlen((*thisOutput)->type_info.char_type.repr);
	length = 1;
	break;
	
      case Enum:
	if( hasAssocTypes(*thisOutput) )
	{
	  aci_log(noAssocTypesMsg,0);
	  return badConversionSpec;
	}

	(*thisConversionSpec)->outputRange->lwb = 1;
	(*thisConversionSpec)->outputRange->upb = (*thisOutput)->type_info.enum_type.elems;
	length = 1;
	break;
	
      case Int:
	(*thisConversionSpec)->outputRange->lwb = (*thisOutput)->type_info.int_type.lwb;
	(*thisConversionSpec)->outputRange->upb = (*thisOutput)->type_info.int_type.upb;
	length = 1;
	break;
	
      case String:
	(*thisConversionSpec)->outputRange->lwb = 1;
	(*thisConversionSpec)->outputRange->upb =
	  strlen(((*thisOutput)->type_info.string_type.subtype)->type_info.char_type.repr);
	length = (*thisOutput)->type_info.string_type.length;
	baseType = typeOf(*thisInput);
	
	/* swallow up n similar items from input */
	for( i=1, thisInput--; i <= length; i++)
	{
	  if( ++thisInput >= inputs+upbInputs )
	  {
	    aci_log(lengthMismatchMsg,0);
	    return badConversionSpec;
	  }
	  
	  switch( (*thisInput)->class )
	  {
	  case Char:
	  case Enum:
	  case Int:
	    if( baseType != typeOf(*thisInput) )
	      return badConversionSpec;
	    break;
	    
	  default:
	    return badConversionSpec;
	  }
	}
	
	break;
	
      default:
	return badConversionSpec;
      }
      break;
      
    case String:
      /* STRING [n] char -> [n] charenum */
      /* STRING [n] char -> [n] integer */
      /* STRING [n] char-1 -> STRING [n] char-2 */

      length = (*thisInput)->type_info.string_type.length;
      
      switch( (*thisOutput)->class )
      {
	Range *range;
	
      case Char:
      case Enum:
      case Int:
	(*thisConversionSpec)->outputRange = (Range *)malloc(length*sizeof(Range));
	baseType = typeOf(*thisOutput);
	
	/* swallow up n similar items from output */
	for(
	    i=1, thisOutput--, range = (*thisConversionSpec)->outputRange;
	    i <= length;
	    i++, range++
	    )
	{
	  if( ++thisOutput >= outputs+upbOutputs )
	  {
	    aci_log(lengthMismatchMsg,0);
	    return badConversionSpec;
	  }
	  
	  switch( (*thisOutput)->class )
	  {
	  case Char:
	    range->lwb = 1;
	    range->upb = strlen((*thisOutput)->type_info.char_type.repr);
	    if( baseType != CharsOrEnums )
	      return badConversionSpec;
	    break;
	    
	  case Enum:
	    if( hasAssocTypes(*thisOutput) )
	    {
	      aci_log(noAssocTypesMsg,0);
	      return badConversionSpec;
	    }

	    range->lwb = 1;
	    range->upb = (*thisOutput)->type_info.enum_type.elems;
	    if( baseType != CharsOrEnums )
	      return badConversionSpec;
	    break;
	    
	  case Int:
	    range->lwb = (*thisOutput)->type_info.int_type.lwb;
	    range->upb = (*thisOutput)->type_info.int_type.upb;
	    if( baseType != Integers )
	      return badConversionSpec;
	    break;
	    
	  default:
	      return badConversionSpec;
	  }
	}
	
	break;
	
      case String:
	/* input and output strings must be same length */
	if( (*thisOutput)->type_info.string_type.length != length )
	  return badConversionSpec;
	
	(*thisConversionSpec)->outputRange = (Range *)malloc(sizeof(Range));
	(*thisConversionSpec)->outputRange->lwb = 1;
	(*thisConversionSpec)->outputRange->upb =
	  strlen(((*thisOutput)->type_info.string_type.subtype)->type_info.char_type.repr);
	break;
	
      default:
	return badConversionSpec;
      }
      break;
      
    default:
      return badConversionSpec;
    }

    (*thisConversionSpec)->elems = length;
    (*thisConversionSpec)->convert = conversions[typeOf(*thisInput)][typeOf(*thisOutput)];
  }

  /* Check that all inputs and outputs have been "consumed" */
  if( thisInput != inputs+upbInputs || thisOutput != outputs+upbOutputs )
  {
    aci_log(lengthMismatchMsg,0);
    return badConversionSpec;
  }
  
  return conversionSpec;
# undef badConversionSpec
}


static void freeConversionSpec(conversionSpec)
ConversionSpec *conversionSpec;
{
  if( conversionSpec == nullConversionSpec )
    return;
  
  freeConversionSpec(conversionSpec->next);
  free(conversionSpec);
}


/*
  The evaluation function.
*/

static void typecheat(action,instance)
ACI_EVAL_ACTION action;
ACI_EVAL_INST instance;
{
  Workspace *workspace = (Workspace *)aci_workspace(instance);
  
  switch( action )
  {
  case restore:
  case initialise:
    {
      /* Allocate input and output buffers */
      unsigned totalisize=0, isize;
      int i=0;

      /* add up input sizes */
      while( (isize=aci_input_size(instance,++i)) != 0 )
	totalisize += isize;

      workspace->ibuf = malloc(totalisize);
      workspace->obuf = malloc(aci_output_size(instance));
      
      /* construct the ConversionSpec description ... */
      aci_set_instance_id(instance,(unsigned)mkConversionSpec(instance,0,0,0));

      break;
    }
    
  case evaluate:
    {
      ConversionSpec *conversionSpec;
      int i;
      char *ibuf, *obuf;

      /* Read the inputs */

      for(
	  ibuf = workspace->ibuf, i=1;
	  i <= aci_inputs_upb(instance);
	  ibuf += aci_input_size(instance,i), i++
	  )
	aci_input(instance,i,ibuf);
      
      /* Do the conversion */

      for(
	  conversionSpec = (ConversionSpec *)aci_instance_id(instance), 
	    ibuf = workspace->ibuf, obuf = workspace->obuf;
	  conversionSpec != nullConversionSpec;
	  conversionSpec = conversionSpec->next
	  )
	(*(conversionSpec->convert))(&ibuf,&obuf,conversionSpec);

      /* Set the output */
      aci_set_output(instance,workspace->obuf);
  
      break;
    }
    
  case save:
    /* Nothing to do */
    break;
    
  case terminate:
    /* Free dynamic data */
    freeConversionSpec((ConversionSpec *)aci_instance_id(instance));
    free(workspace->ibuf);
    free(workspace->obuf);
    break;
  }
}


/*
  The finder.
*/

/* mkfinder: typecheatFinder */
ACI_EVAL_FN typecheatFinder(name,upb_name,inputs,upb_inputs,output,
		    macparams,upb_macparams,workspaceSize,history,decl_id)
char *name;
unsigned upb_name;
ACI_TYPE *inputs;
unsigned upb_inputs;
ACI_TYPE output;
int *macparams;
unsigned upb_macparams;
unsigned *workspaceSize;
unsigned *history;
unsigned *decl_id;
{
  ConversionSpec *spec;
  int ok = 0;

  /* The name of the alien code function is _CAST -- reject others */
  if( strncmp(name,"_CAST",upb_name) != 0 )
    return 0;

  /* We're not expecting any macro parameters */
  if( upb_macparams != 0 )
    return 0;

  /* Check that conversion is possible */
  ok = ( spec = mkConversionSpec(0,inputs,upb_inputs,output)) != nullConversionSpec;

  freeConversionSpec(spec);
  
  *workspaceSize = sizeof(Workspace);
  
  return ok ? typecheat : 0;
}  


/*
  Representation of ELLA signals.
*/

typedef union
{
  unsigned not_query;
  unsigned value;
}
CharSignal;			/* or enumeration */

typedef struct
{
  unsigned not_query;
  int value;
}
IntegerSignal;

/* The value field of the following signals is only the first word of */
/* the actual signal value */
typedef IntegerSignal BitstringSignal;
typedef IntegerSignal BytestringSignal;


/*
  Conversion functions.
  All have the same interface:
    ibuf, obuf : pointers to variables holding the start of the current input and output buffers
                 the function must increment these by the size read from / written to.
    spec       : the ConversionSpec for the current conversion
*/

/* Support macros for portability across platforms */
/* Uses the bitstring manipulation package in bitstring.h */
#if vax
#define BYTE(n,x,l) (((char *)(x))[(l)-1-(n)])	  /* nth (counting from 0) byte of x (total length is l bytes) */
#else
#define BYTE(n,x,l) (((char *)(x))[n])		  /* nth (counting from 0) byte of x (total length is l bytes) */
#endif
#define BIT(n,x,l) bit_test((unsigned *)x,n,l)	  /* value of the nth bit (MSB is bit 0) of x (length l bits)*/
#define SET_BIT(n,x,l) bit_set((unsigned *)x,n,l)	  /* set the nth bit (MSB is bit 0) of x */
#define RESET_BIT(n,x,l) bit_clear((unsigned *)x,n,l) /* reset the nth bit (MSB is bit 0) of x */

#define BITSPERBYTE 8
/* size in words of a bytestring, including padding */
#define SIZE_BYTESTRING(elems) (1+((elems+sizeof(unsigned)-1)/sizeof(unsigned)))

/* size in words of a bitstring, including padding */
#define SIZE_BITSTRING(elems) (1+((elems+BITSPERBYTE*sizeof(unsigned)-1)/(BITSPERBYTE*sizeof(unsigned))))

/*
  Characters to characters.

  No conversion is necessary -- just check range.
*/

static void chars2chars(ibuf,obuf,spec)
CharSignal **ibuf;
CharSignal **obuf;
ConversionSpec *spec;
{
  register unsigned i;
  Range *range;
  
  for(
      i = 1, range = spec->outputRange;
      i <= spec->elems;
      i++, (*ibuf)++, (*obuf)++, range++
      )
    if( (*ibuf)->not_query && ((*ibuf)->value <= range->upb) )
      (*obuf)->value = (*ibuf)->value;
    else
      (*obuf)->not_query = 0;
}
  
/*
  Characters to integers.

  As for char->char, except that not_query and value are not overlaid.
*/

static void chars2ints(ibuf,obuf,spec)
CharSignal **ibuf;
IntegerSignal **obuf;
ConversionSpec *spec;
{
  register unsigned i;
  Range *range;
  
  for(
      i = 1, range = spec->outputRange;
      i <= spec->elems;
      i++, (*ibuf)++, (*obuf)++, range++
      )
    if( (((*ibuf)->not_query) && ((*ibuf)->value <= range->upb)) && ((int)((*ibuf)->value) >= range->lwb) )
    {
      (*obuf)->not_query = 1;
      (*obuf)->value = (*ibuf)->value;
    }
    else
      (*obuf)->not_query = 0;
}

/*
  Characters to bitstring.

  Set output bit if input = 1 (bit<-0) or 2 (bit<-1).
  Output is query if
    - any input is query
    - any input > 2
*/

static void chars2bits(ibuf,obuf,spec)
CharSignal **ibuf;
BitstringSignal **obuf;
ConversionSpec *spec;
{
  register unsigned i;

  (*obuf)->not_query = 1;	/* innocent until proven guilty */

  for(
      i = 1;
      i <= spec->elems;
      i++, (*ibuf)++
      )
    switch( (*ibuf)->value )
    {
    case 1:
      RESET_BIT(i-1,&((*obuf)->value),spec->elems);
      break;
    case 2:
      SET_BIT(i-1,&((*obuf)->value),spec->elems);
      break;
    default:			/* query or out of range */
      (*obuf)->not_query = 0;	/* guilty! */
      goto endLoop;
    }
 endLoop:
  (CharSignal *)(*ibuf) += spec->elems-i+1;
  (unsigned *)(*obuf) += SIZE_BITSTRING(spec->elems);
}

/*
  Characters to bytestring.

  Copy characters to corresponding byte of output.
  Output is query if any input is query, or out of range.
*/

static void chars2bytes(ibuf,obuf,spec)
CharSignal **ibuf;
BytestringSignal **obuf;
ConversionSpec *spec;
{
  register unsigned i;
  register unsigned sizeInBytes = (SIZE_BYTESTRING(spec->elems)-1) * sizeof(unsigned);

  (*obuf)->not_query = 1;	/* innocent until proven guilty */

  for(
      i = 1;
      i <= spec->elems;
      i++, (*ibuf)++
      )
    if( (*ibuf)->not_query && ((*ibuf)->value <= spec->outputRange->upb))
      BYTE(i-1,&((*obuf)->value),sizeInBytes) = (*ibuf)->value;
    else
    {
      (*obuf)->not_query = 0;	/* guilty! */
      break;
    }

  (*ibuf) += spec->elems-i+1;
  (unsigned *)(*obuf) += SIZE_BYTESTRING(spec->elems);
}

/*
  Integers to characters.

  Copy integer value if not query, or out of range.
*/

static void ints2chars(ibuf,obuf,spec)
IntegerSignal **ibuf;
CharSignal **obuf;
ConversionSpec *spec;
{
  register unsigned i;
  register Range *range;
  
  for(
      i = 1, range = spec->outputRange;
      i <= spec->elems;
      i++, (*ibuf)++, (*obuf)++, range++
      )
    if( (*ibuf)->not_query && ((*ibuf)->value <= range->upb) && ((*ibuf)->value >= 1))
      (*obuf)->value = (*ibuf)->value;
    else
      (*obuf)->not_query = 0;
}

/*
  Integers to integers.

  No conversion necessary -- just check range.
*/

static void ints2ints(ibuf,obuf,spec)
IntegerSignal **ibuf;
IntegerSignal **obuf;
ConversionSpec *spec;
{
  register unsigned i;
  Range *range;
  
  for(
      i = 1, range = spec->outputRange;
      i <= spec->elems;
      i++, (*ibuf)++, (*obuf)++, range++
      )
    if( (*ibuf)->not_query && ((*ibuf)->value <= range->upb) && ((*ibuf)->value >= range->lwb) )
    {
      (*obuf)->not_query = 1;
      (*obuf)->value = (*ibuf)->value;
    }
    else
      (*obuf)->not_query = 0;
}

/*
  Integers to bitstring.

  Set output bit if input = 1 (bit<-0) or 2 (bit<-1).
  Output is query if
    - any input is query
    - any input > 2
*/

static void ints2bits(ibuf,obuf,spec)
IntegerSignal **ibuf;
BitstringSignal **obuf;
ConversionSpec *spec;
{
  register unsigned i;

  (*obuf)->not_query = 1;	/* innocent until proven guilty */

  for(
      i = 1;
      i <= spec->elems;
      i++, (*ibuf)++
      )
    if( (*ibuf)->not_query )
      switch( (*ibuf)->value )
      {
      case 1:
	RESET_BIT(i-1,&((*obuf)->value),spec->elems);
	break;
      case 2:
	SET_BIT(i-1,&((*obuf)->value),spec->elems);
	break;
      default:			/* query or out of range */
	(*obuf)->not_query = 0;	/* guilty! */
	goto endLoop;
      }
    else
    {
      (*obuf)->not_query = 0;	/* guilty! */
      goto endLoop;
    }
  
 endLoop:
  (IntegerSignal *)(*ibuf) += spec->elems-i+1;
  (unsigned *)(*obuf) += SIZE_BITSTRING(spec->elems);
}

/*
  Integers to bytestring.

  Copy characters to corresponding byte of output.
  Output is query if any input is query, or if any input out of range.
*/

static void ints2bytes(ibuf,obuf,spec)
IntegerSignal **ibuf;
BytestringSignal **obuf;
ConversionSpec *spec;
{
  register unsigned i;
  register unsigned sizeInBytes = (SIZE_BYTESTRING(spec->elems)-1) * sizeof(unsigned);

  (*obuf)->not_query = 1;	/* innocent until proven guilty */

  for(
      i = 1;
      i <= spec->elems;
      i++, (*ibuf)++
      )
    if( (*ibuf)->not_query && ((*ibuf)->value <= spec->outputRange->upb) && ((*ibuf)->value >= 1))
      BYTE(i-1,&((*obuf)->value),sizeInBytes) = (*ibuf)->value;
    else
    {
      (*obuf)->not_query = 0;	/* guilty! */
      break;
    }

  (*ibuf) += spec->elems-i+1;
  (unsigned *)(*obuf) += SIZE_BYTESTRING(spec->elems);
}

/*
  Bitstring to characters.

  Set output to 1 or 2 depending on bit setting.
  If input is query, so are all the outputs.
*/

static void bits2chars(ibuf,obuf,spec)
BitstringSignal **ibuf;
CharSignal **obuf;
ConversionSpec *spec;
{
  register unsigned i;

  for(
      i = 1;
      i <= spec->elems;
      i++, (*obuf)++
      )
    if( (*ibuf)->not_query )
    {
      (*obuf)->value = BIT(i-1,&((*ibuf)->value),spec->elems) ? 2 : 1;
    }
    else
      (*obuf)->not_query = 0;

  (unsigned *)(*ibuf) += SIZE_BITSTRING(spec->elems);
}
  
/*
  Bitstring to integers.

  Set output to 1 or 2 depending on bit setting.
  If input is query, so are all the outputs.
*/

static void bits2ints(ibuf,obuf,spec)
BitstringSignal **ibuf;
IntegerSignal **obuf;
ConversionSpec *spec;
{
  register unsigned i;
  Range *range;
  int sigval;

  for(
      i = 1, range = spec->outputRange;
      i <= spec->elems;
      i++, (*obuf)++, range++
      )
    if( (*ibuf)->not_query && (sigval = BIT(i-1,&((*ibuf)->value),spec->elems) ? 2 : 1, sigval <= range->upb && sigval >= range->lwb ) )
    {
	(*obuf)->value = sigval;
	(*obuf)->not_query = 1;
    }
    else
      (*obuf)->not_query = 0;

  (unsigned *)(*ibuf) += SIZE_BITSTRING(spec->elems);
}

/*
  Bitstring to bitstring.

  No conversion necessary -- just copy the right number of words.
*/

static void bits2bits(ibuf,obuf,spec)
char **ibuf, **obuf;
ConversionSpec *spec;
{
  memcpy(*obuf,*ibuf,SIZE_BITSTRING(spec->elems)*sizeof(unsigned));
  (unsigned *)(*ibuf) += SIZE_BITSTRING(spec->elems);
  (unsigned *)(*obuf) += SIZE_BITSTRING(spec->elems);
}

/*
  Bitstring to bytestring.

  Set output to 1 or 2 depending on bit setting.
*/

static void bits2bytes(ibuf,obuf,spec)
BitstringSignal **ibuf;
BytestringSignal **obuf;
ConversionSpec *spec;
{
  register unsigned i;
  register unsigned sizeInBytes = (SIZE_BYTESTRING(spec->elems)-1) * sizeof(unsigned);

  if( (*ibuf)->not_query )
  {
    (*obuf)->not_query = 1;
    for(i = 1; i <= spec->elems; i++)
      BYTE(i-1,&((*obuf)->value),sizeInBytes) = BIT(i-1,&((*ibuf)->value),spec->elems) ? 2 : 1;
  }
  else
    (*obuf)->not_query = 0;

  (unsigned *)(*ibuf) += SIZE_BITSTRING(spec->elems);
  (unsigned *)(*obuf) += SIZE_BYTESTRING(spec->elems);
}

/*
  Bytestring to characters.

  Copy corresponding bytes.
  If input is query, so are all the outputs.
*/

static void bytes2chars(ibuf,obuf,spec)
BytestringSignal **ibuf;
CharSignal **obuf;
ConversionSpec *spec;
{
  register unsigned i;
  Range *range;
  int sigval;
  register unsigned sizeInBytes = (SIZE_BYTESTRING(spec->elems)-1) * sizeof(unsigned);

  for(
      i = 1, range = spec->outputRange;
      i <= spec->elems;
      i++, (*obuf)++, range++
      )
    if( (*ibuf)->not_query && ( sigval = BYTE(i-1,&((*ibuf)->value),sizeInBytes), sigval <= range->upb ) )
    {
      (*obuf)->value = sigval;
    }
    else
      (*obuf)->not_query = 0;

  (unsigned *)(*ibuf) += SIZE_BYTESTRING(spec->elems);
}
  
/*
  Bytestring to integers.

  Copy corresponding bytes.
  If input is query, so are all the outputs.
*/

static void bytes2ints(ibuf,obuf,spec)
BytestringSignal **ibuf;
IntegerSignal **obuf;
ConversionSpec *spec;
{
  register unsigned i;
  Range *range;
  int sigval;
  register unsigned sizeInBytes = (SIZE_BYTESTRING(spec->elems)-1) * sizeof(unsigned);

  for(
      i = 1, range = spec->outputRange;
      i <= spec->elems;
      i++, (*obuf)++, range++
      )
    if( (*ibuf)->not_query  && ( sigval = BYTE(i-1,&((*ibuf)->value),sizeInBytes), sigval <= range->upb && sigval >= range->lwb ) )
    {
      (*obuf)->value = sigval;
      (*obuf)->not_query = 1;
    }
    else
      (*obuf)->not_query = 0;

  (unsigned *)(*ibuf) += SIZE_BYTESTRING(spec->elems);
}

/*
  Bytestring to bitstring.

  Set output bit depending on input = 1 or 2.
  If any input byte > 2, output is query.
*/

static void bytes2bits(ibuf,obuf,spec)
BytestringSignal **ibuf;
BitstringSignal **obuf;
ConversionSpec *spec;
{
  register unsigned i;
  register unsigned sizeInBytes = (SIZE_BYTESTRING(spec->elems)-1) * sizeof(unsigned);

  if( (*ibuf)->not_query )
  {
    (*obuf)->not_query = 1;
    for(i = 1; i <= spec->elems; i++)
      switch( BYTE(i-1,&((*ibuf)->value),sizeInBytes) )
      {
      case 1:
	RESET_BIT(i-1,&((*obuf)->value),spec->elems);
	break;
      case 2:
	SET_BIT(i-1,&((*obuf)->value),spec->elems);
	break;
      default:
	(*obuf)->not_query = 0;
	goto endLoop;
      }
  }
  else
    (*obuf)->not_query = 0;

 endLoop:
  (unsigned *)(*ibuf) += SIZE_BYTESTRING(spec->elems);
  (unsigned *)(*obuf) += SIZE_BITSTRING(spec->elems);
}

/*
  Bytestring to bytestring.

  No conversion necessary -- just check the range.
*/

static void bytes2bytes(ibuf,obuf,spec)
BytestringSignal **ibuf, **obuf;
ConversionSpec *spec;
{
  register unsigned i;
  int sigval;
  register unsigned sizeInBytes = (SIZE_BYTESTRING(spec->elems)-1) * sizeof(unsigned);

  if( (*ibuf)->not_query )
  {
    (*obuf)->not_query = 1;
    for(i = 1; i <= spec->elems; i++)
      if( ( sigval = BYTE(i-1,&((*ibuf)->value),sizeInBytes) ) <= spec->outputRange->upb )
	BYTE(i-1,&((*obuf)->value),sizeInBytes) = sigval;
      else
      {
	(*obuf)->not_query = 0;
	break;
      }
  }
  else
    (*obuf)->not_query = 0;

  (unsigned *)(*ibuf) += SIZE_BYTESTRING(spec->elems);
  (unsigned *)(*obuf) += SIZE_BYTESTRING(spec->elems);
}
  

/*
Local Variables:
compile-command: "gmake -f alien_code.gmk BUILD_OPTS=debug"
End:
*/  
 
