/* $Id: compare.c,v 34.2 1995/03/29 13:03:45 ella Exp $ */



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
                                  system old version was 1.5 
29:03:95  34.002  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

/*
  This file is supplied, unsupported, as an example of the use of the
  ELLA Alien Code Interface.
  
  Alien code function for comparing two inputs of arbitrary type.
  Output is a single boolean (f|t), t => inputs equal.
  ?  inputs are treated as valid signals -- ie there must be corresponding
  ?s in both inputs.

  If the comparison fails (output is f), a message is written to the ELLA
  output stream using aci_log, and also to the Unix stderr stream.

  Restrictions on use:
    Does not understand about associated types.
*/

static char rcsid[] = "$Id: compare.c,v 34.2 1995/03/29 13:03:45 ella Exp $";

#include <stdio.h>

#include "alien.h"
#include "bitstring.h"

extern char *malloc();


/*
  Remember input type information, so that the cost of finding
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
  This enumeration is used to index the table of comparison functions.
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

typedef struct sComparisonSpec
{
  struct sComparisonSpec *next;
  unsigned elems;		/* Length of string involved in comparison */
  int (*compare)();		/* Comparison function */
}
ComparisonSpec;

#define nullComparisonSpec ((ComparisonSpec *) 0)

/*
  Workspace for evaluation function.
*/
typedef struct
{
  char *ibuf1, *ibuf2;		/* input buffers, allocated during initialisation */
}
Workspace;

/*
  Comparison functions and lookup table, indexed by KindOfType
*/

static int
  compareChars(), compareInts(), compareBits(), compareBytes();

static int (*(comparisons[]))() =
{
  compareChars, compareInts, compareBits, compareBytes
};


/*
  Other functions defined in this module are ...
*/

static ComparisonSpec *mkComparisonSpec();
static void freeComparisonSpec();
static KindOfType typeOf();


static KindOfType typeOf(t)
ACI_TYPE t;
{
  switch( t->class )
  {
  case Enum:
  case Char:
    return CharsOrEnums;
  case Int:
    return Integers;
  case String:
    return strlen((t->type_info.string_type.subtype)->type_info.char_type.repr) <= 2 ? BitString : ByteString;
  }
}


/*
  mkComparisonSpec constructs an ComparisonSpec description.
  It may be called either from the finder, or from the evaluation function.
  It matches corresponding input types in
  accordance with the spec.
  If the types cannot be matched, a null pointer is returned.
*/

static ComparisonSpec *mkComparisonSpec(instance,finderInputs,finderUpbInputs)
ACI_EVAL_INST instance;
ACI_TYPE_HANDLE *finderInputs;
unsigned finderUpbInputs;
{
  int i;

  ACI_TYPE *firstInputs, *secondInputs;	  /* flattened types */
  unsigned upbInputs, upbOutputs; /* how many flattened types */
  ComparisonSpec *comparisonSpec = nullComparisonSpec;
  ComparisonSpec **thisComparisonSpec = &comparisonSpec; /* place marker */

# define badComparisonSpec (freeComparisonSpec(comparisonSpec),nullComparisonSpec)  
# define lengthMismatchMsg "Input and output widths do not match"	  

  ACI_TYPE *thisFirstInput, *thisSecondInput; /* loop variable */
    
  /* Find types of inputs  */

  upbInputs =
    instance == 0 ? finderUpbInputs : aci_inputs_upb(instance);

  /* There must be an even number of flattened inputs */
  if( upbInputs%2 != 0 )
    return nullComparisonSpec;
  
  for(
      thisFirstInput = firstInputs = (ACI_TYPE *) malloc(sizeof(ACI_TYPE)*(upbInputs/2)), i=1;
      i <= upbInputs/2;
      i++, thisFirstInput++
      )
    *thisFirstInput =
      instance == 0 ? aci_decode_type(finderInputs[i-1]) : aci_input_type(instance,i);
  
  for(
      thisSecondInput = secondInputs = (ACI_TYPE *) malloc(sizeof(ACI_TYPE)*(upbInputs/2)), i=(upbInputs/2)+1;
      i <= upbInputs;
      i++, thisSecondInput++
      )
    *thisSecondInput =
      instance == 0 ? aci_decode_type(finderInputs[i-1]) : aci_input_type(instance,i);
  
  /* Match flattened types and construct ComparisonSpec description */
  for(
      thisComparisonSpec = &comparisonSpec, thisFirstInput = firstInputs, thisSecondInput = secondInputs;
      (thisFirstInput < firstInputs+(upbInputs/2));
      thisComparisonSpec = &((*thisComparisonSpec)->next), thisFirstInput++, thisSecondInput++
      )
  {
    KindOfType baseType;
    unsigned length;		/* of string */
    
    /* Create new ComparisonSpec on end of list ... */
    
    *thisComparisonSpec = (ComparisonSpec *) malloc(sizeof(ComparisonSpec));
    (*thisComparisonSpec)->next = nullComparisonSpec;
    
    /* ... and fill it in */

    if( !aci_same_type(*thisFirstInput,*thisSecondInput) )
      return badComparisonSpec;

    switch( (*thisFirstInput)->class )
    {
    case String:
      length = (*thisFirstInput)->type_info.string_type.length;
      break;
      
    default:
      length = 1;
      break;
    }

    (*thisComparisonSpec)->elems = length;
    (*thisComparisonSpec)->compare = comparisons[typeOf(*thisFirstInput)];
  }

  return comparisonSpec;
# undef badComparisonSpec
}


static void freeComparisonSpec(comparisonSpec)
ComparisonSpec *comparisonSpec;
{
  if( comparisonSpec == nullComparisonSpec )
    return;
  
  freeComparisonSpec(comparisonSpec->next);
  free(comparisonSpec);
}


/*
  The evaluation function.
*/

static void compare(action,instance)
ACI_EVAL_ACTION action;
ACI_EVAL_INST instance;
{
  Workspace *workspace = (Workspace *)aci_workspace(instance);
  
  switch( action )
  {
  case restore:
  case initialise:
    {
      /* Allocate input buffers */
      unsigned totalisize=0, isize;
      int i=0;

      /* add up input sizes */
      while( (isize=aci_input_size(instance,++i)) != 0 )
	totalisize += isize;

      workspace->ibuf1 = malloc(totalisize/2);
      workspace->ibuf2 = malloc(totalisize/2);
      
      /* construct the ComparisonSpec description ... */
      aci_set_instance_id(instance,(unsigned)mkComparisonSpec(instance,0,0,0));

      break;
    }
    
  case evaluate:
    {
      ComparisonSpec *comparisonSpec;
      int inputsEqual = 1;
      int i;
      int upbInputs = aci_inputs_upb(instance);
      char *ibuf1, *ibuf2;

      /* Read the inputs */

      for(
	  ibuf1 = workspace->ibuf1, i=1;
	  i <= upbInputs/2;
	  ibuf1 += aci_input_size(instance,i), i++
	  )
	aci_input(instance,i,ibuf1);
      
      for(
	  ibuf2 = workspace->ibuf2, i=(upbInputs/2) + 1;
	  i <= upbInputs;
	  ibuf2 += aci_input_size(instance,i), i++
	  )
	aci_input(instance,i,ibuf2);
      
      /* Do the comparison */

      for(
	  comparisonSpec = (ComparisonSpec *)aci_instance_id(instance), i=1,
	    ibuf1 = workspace->ibuf1, ibuf2 = workspace->ibuf2;
	  inputsEqual && (comparisonSpec != nullComparisonSpec);
	  comparisonSpec = comparisonSpec->next,
	    ibuf1 += aci_input_size(instance,i), ibuf2 += aci_input_size(instance,i)
	  )
	inputsEqual = (*(comparisonSpec->compare))(ibuf1,ibuf2,comparisonSpec->elems);

      /* Set the output */
      if( inputsEqual )
      {
	int true = 2;
	aci_set_output(instance,&true);
      }
      else
      {
	int false = 1;
	char msg[100];
	
	aci_set_output(instance,&false);

	sprintf(msg,"*** comparison failed at time = %u ***\n",aci_time());
	aci_log(msg,strlen(msg)-1);
	fputs(msg,stderr);
      }
  
      break;
    }
    
  case save:
    /* Nothing to do */
    break;
    
  case terminate:
    /* Free dynamic data */
    freeComparisonSpec((ComparisonSpec *)aci_instance_id(instance));
    free(workspace->ibuf1);
    free(workspace->ibuf2);
    break;
  }
}


/*
  The finder.
*/

/* mkfinder: compareFinder */
ACI_EVAL_FN compareFinder(name,upb_name,inputs,upb_inputs,output,
		    macparams,upb_macparams,workspaceSize,history,decl_id)
char *name;
unsigned upb_name;
ACI_TYPE_HANDLE *inputs;
unsigned upb_inputs;
ACI_TYPE_HANDLE output;
int *macparams;
unsigned upb_macparams;
unsigned *workspaceSize;
unsigned *history;
unsigned *decl_id;
{
  ComparisonSpec *spec;
  int ok = 0;
  
  /* The name of the alien code function is COMPARE -- reject others */
  if( strncmp(name,"COMPARE",upb_name) != 0 )
    return 0;

  /* We're not expecting any macro parameters */
  if( upb_macparams != 0 )
    return 0;

  /* Check that comparison is possible */
  ok = (spec = mkComparisonSpec(0,inputs,upb_inputs)) != nullComparisonSpec;
  
  freeComparisonSpec(spec);

  *workspaceSize = sizeof(Workspace);
  
  return ok ? compare : 0;
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
  Comparison functions.
  All have the same interface:
    ibuf1, ibuf2 : the start of the current input buffers
    elems      : length of string involved in comparison, or 1 for scalar
  Return true if comparison succeeds, false otherwise.
*/

/* Support macros for portability across platforms */
/* Uses the bitstring manipulation package in bitstring.h */
#if vax
#define BYTE(n,x,l) (((char *)(x))[(l)-1-(n)])	  /* nth (counting from 0) byte of x (total length is l bytes) */
#else
#define BYTE(n,x,l) (((char *)(x))[n])		  /* nth (counting from 0) byte of x (total length is l bytes) */
#endif
#define BIT(n,x,l) bit_test((unsigned *)x,n,l)	  /* value of the nth bit (MSB is bit 0) of x (length l bits) */
#define SET_BIT(n,x,l) bit_set((unsigned *)x,n,l)	  /* set the nth bit (MSB is bit 0) of x */
#define RESET_BIT(n,x,l) bit_clear((unsigned *)x,n,l) /* reset the nth bit (MSB is bit 0) of x */

#define BITSPERBYTE 8
/* size in words of a bytestring, including padding */
#define SIZE_BYTESTRING(elems) (1+((elems+sizeof(unsigned)-1)/sizeof(unsigned)))

/* size in words of a bitstring, including padding */
#define SIZE_BITSTRING(elems) (1+((elems+BITSPERBYTE*sizeof(unsigned)-1)/(BITSPERBYTE*sizeof(unsigned))))

static int compareChars(ibuf1,ibuf2,elems)
CharSignal *ibuf1;
CharSignal *ibuf2;
unsigned elems;			/* not used */
{
  return ibuf1->value == ibuf2->value;
}

static int compareInts(ibuf1,ibuf2,elems)
IntegerSignal *ibuf1;
IntegerSignal *ibuf2;
unsigned elems;			/* not used */
{
  /* either both query, or values the same */
  return
    ( !ibuf1->not_query && !ibuf2->not_query ) ||
    ibuf1->value == ibuf2->value;
}

static int compareBits(ibuf1,ibuf2,elems)
BitstringSignal *ibuf1;
BitstringSignal *ibuf2;
unsigned elems;
{
  /* either both query, or values the same */
  if( !ibuf1->not_query )
    return !ibuf2->not_query;
  else
  {
    /* This is incredibly ineffcient. */
    /* One day it will be optimised to compare wordwise where possible. */
    int equal = 1;
    int i;
    for(i=0; equal && i<elems; i++)
      equal = BIT(i,&(ibuf1->value),elems) == BIT(i,&(ibuf2->value),elems);
    return equal;
  }
}

static int compareBytes(ibuf1,ibuf2,elems)
BytestringSignal *ibuf1;
BytestringSignal *ibuf2;
unsigned elems;
{
  /* either both query, or values the same */
  if( !ibuf1->not_query )
    return !ibuf2->not_query;
  else
  {
    /* This is incredibly inefficient. */
    /* One day it will be optimised to compare wordwise where possible. */
    int equal = 1;
    register unsigned sizeInBytes = (SIZE_BYTESTRING(elems)-1) * sizeof(unsigned);
    int i;

    for(i=0; equal && i<elems; i++)
      equal = BYTE(i,&(ibuf1->value),sizeInBytes) == BYTE(i,&(ibuf2->value),sizeInBytes);
    return equal;
  }
}

/*
Local Variables:
compile-command: "gmake -f alien_code.gmk CFLAGS=-g"
End:
*/  
 
