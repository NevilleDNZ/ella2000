                  /*  ELLA to VIF transformation   */

#include "config.h"

CF_MODULE( ella_vif_init, \
    "$Id: ella_vif.c,v 2.5 1995/03/29 13:05:21 ella Exp $" )


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

                         Crown Copyright, (c)   1994

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
06:01:95   1.001  ELLA    Install in config manage system. 
12:01:95   1.002  DJS    Declaration of arrays with variable size re-programed.
25:01:95   1.003  EVW    Trimming of TSTR corrected 
21:03:95   1.003  EVW   Various corrections
28:03:95   1.004  DJS   Move CreateNilNode and CopyTree to cmodes.c
29:03:95   2.005  ELLA  Change copyright header
??:??:??   ?.???  ????
*/

#include <stdio.h>
#include <stdlib.h>

#include "fault.h"
#include "cmodes.h"
#include "ella_vif.h"

static Node * outerenv;
static int *typetable; /* holds mapping of closureno -> packnum
                                                        (note not ellanum) */
static int *unconstrained; /* holds unconstrained arrays */
static int unnamed_no = 0; /* used to create names for unnamed ports */
static Node * tvoid;       /* used to represent ELLA void type */

static int vifnum = 0; /* number within VHDL closure */
static int packnum = 0; /* number within VHDL package */
static int ellanum = 0; /* number within ELLA closure */
static Node * vifclosure;
static Node * packitems;

static void Add_packitem (Node *node)
{
    packnum = packnum + 1;
   *IndexVector(packitems, packnum) = node;
}

static void Add_vifitem (Node *node)
{
   vifnum = vifnum + 1;
   *IndexVector(vifclosure, vifnum) = node;
}


typedef struct { Node *nametypes,
                      *decltable;
                 int *sensitive;
                 int voidinput;
                 int voidoutput;
                 Node *environ;
               } Fndecinfo;

typedef struct { int signal;
                 Node *letnames;
               } Letinfo;

typedef struct { int isinteger;
                 Node *output,
                      *outputtype;
               } Arithinfo;


#define bsize 1024
static char buffer[ bsize ];


static Node* makeVIFid (Node *nodeid, Transformer *tprocs)
{
  Node * symbolentry = CreateNilNode(VIF_SYMBOL_ENTRY_IN_TABLE, tprocs);
  Symbol_entry_in_tableHas_simple_name(symbolentry) = nodeid;
  return symbolentry;
}

static Node* chars_id (char *word, Transformer *tprocs)
{  
/*   char *newid; 
   sprintf (buffer, "%s", word);
   newid = (char*)malloc(sizeof(char) * (strlen(buffer)+1) );
   newid = strcpy(newid, buffer);
*/
   return makeVIFid( MakeId( word, tprocs), tprocs);  /* MakeId heaps word */
} 

static Node * conc_words ( char *word1, char *word2, Transformer *tprocs )
{  sprintf( buffer, "%s_%s", word1, word2);
   return makeVIFid( MakeId( buffer, tprocs), tprocs); /* MakeId heaps buffer */
}

static Node * post_num ( char *word, int num, Transformer *tprocs )
{  sprintf( buffer, "%s_%d", word, num);
   return makeVIFid( MakeId( buffer, tprocs), tprocs); /* MakeId heaps buffer */
}

static Node* Make_label_decl ( char *word, int num, Transformer *tprocs )
{  
   Node * labeldecl = CreateNilNode(VIF_LABEL_DECL, tprocs);
   Label_declHas_id(labeldecl) = post_num(word, num, tprocs);
   return labeldecl;
}
  

static Node* Make_used (Node *N, Transformer *tprocs)
{  
  Node * used = CreateNilNode(VIF_GENERAL_USED_OBJECT, tprocs);
  General_used_objectHas_obj_def(used) = N;
  return used;
}

static Node * Make_constraint (Node* type, Transformer *tprocs)
{
   Node *constraint = CreateNilNode(VIF_NON_CONSTRAINT, tprocs);
   Non_constraintIs_type(constraint) = type;
   return constraint;
}



/****************** FORMULA *****************************************/

static Node *make_int (Int intval, Transformer *tprocs)
{  
    Node *value = CreateNilNode(VIF_INT_32_VALUE, tprocs);
    Int_32_valueHas_int_32(value) = MakeScalar(intval, tprocs);
    return value;
}


static Node* fint_int (Node *fint, Transformer *tprocs)
{
    Node *value = CreateNilNode(VIF_INT_32_VALUE, tprocs);
    Int_32_valueHas_int_32(value) = FintInt(fint);
    return value;
}
 
static Node* range_ascend (Node * range, Transformer *tprocs)
{
   Node *v_range = CreateNilNode(VIF_ASCENDING_RANGE_CONSTRAINT, tprocs);
   Ascending_range_constraintHas_left_bound(v_range) = RangeLwb(range);
   Ascending_range_constraintHas_right_bound(v_range) = RangeUpb(range);
   return v_range;
}

/******************* Type declarations *******************************/

static Node * Make_voidtype (Transformer *tprocs)
{
   Node *voidtype =  CreateNilNode(VIF_ENUM_TYPE_DECL, tprocs);
   Node *vecenum = MakeVector(VIF_ENUMERATION_LITERAL, 1, tprocs); 
   Node *literal = CreateNilNode(VIF_ENUM_LITERAL_DECL, tprocs);
  
   Enum_literal_declHas_id(literal) = chars_id("void", tprocs);
   *IndexVector(vecenum, 1) = literal;
   Enum_type_declHas_id(voidtype) = chars_id("ELLA_VOID", tprocs);
   Enum_type_declHas_enumeral_s(voidtype) = vecenum;
   return voidtype;
}

static Node*  rvalternative_enum_literals (Node * rvalt, Transformer *tprocs)
{ 
    Node *vecalt = RvalternativeAlternatives(rvalt);
    Size size = VecSize(vecalt);
    Node *vecenum = MakeVector(VIF_ENUMERATION_LITERAL, size, tprocs); 
 
    int i;
    for (  i = 1; i <= size; i++ )
      { 
         Node *literal = CreateNilNode(VIF_ENUM_LITERAL_DECL, tprocs);
         Node *alt = *IndexVector(vecalt, i);
         Node *enumid = makeVIFid(AlternativeAltname(alt), tprocs);

         Enum_literal_declHas_id(literal) = enumid;
         *IndexVector(vecenum, i) = literal;
       }

    return vecenum;
}

static Node* newchars_enum_literals (Node *newchars, Transformer *tprocs)
{
   Node *chars = NewcharsChars(newchars); /* ID e.g "abcdef" */
   char *alts = IdValue(chars);
   Int  num = strlen(alts);
   Node *vecenum = MakeVector(VIF_ENUMERATION_LITERAL, num, tprocs);

   char buff[2];
   int i;
   for ( i=0; i < num; i++)
    {
       Node *literal = CreateNilNode(VIF_CHAR_LITERAL_DECL, tprocs);
       buff[0] = alts[i];
       buff[1] = NULL;
       Char_literal_declHas_id(literal) = chars_id(buff, tprocs);
       *IndexVector(vecenum, i+1) = literal;
    }
   return vecenum;
} 

static Node* newints_constraint (Node *newints, Transformer *tprocs)
{
   return NewintsRange(newints);
}


static void Transform_typedec (Node * typedec, Node * outer,
                               Transformer *tprocs) 
{ 
   Node *body = Transform(TypedecBody(typedec), tprocs);
   Node *name = makeVIFid(TypedecTypename(typedec), tprocs);
   Int closureno = ScalarInt(OuterClosureno(outer));
   Int sort = Type(body);
   Node *viftype;

   if (sort == VIF_VECENUMERATION_LITERAL ) /* RVALTERNATIVES, NEWCHARS */
    {
      Node *enum_type =  CreateNilNode(VIF_ENUM_TYPE_DECL, tprocs);
      Enum_type_declHas_id(enum_type) = name;
      Enum_type_declHas_enumeral_s(enum_type) = body;
      viftype = enum_type;
    }
   else if (sort == VIF_ASCENDING_RANGE_CONSTRAINT) /* NEWINTS */
    {
      Node *int_type = CreateNilNode(VIF_INTEGER_TYPE_DECL, tprocs);
      Integer_type_declHas_id(int_type) = name;
      Integer_type_declHas_constraint(int_type) = body;
      viftype = int_type;
    }
   else if (sort == VIF_GENERAL_SUBTYPE_DECL) /* TROW, TSTRING */
    {
      int uncon_index = abs(unconstrained[closureno]);
      General_subtype_declHas_id(body) = name;
      Index_constraintIs_type(General_subtype_declHas_constraint(body)) = 
         *IndexVector(packitems, unconstrained[uncon_index]);
      viftype = body;
    }         
   else if (sort == VIF_VECELEMENT_DECL ) /* TSTR */
    {
      Node *record = CreateNilNode(VIF_RECORD_TYPE_DECL, tprocs);
      Record_type_declHas_element_s(record) = body;
      Record_type_declHas_id(record) = name;
      viftype = record;      
    }
    else /* TYPE fred = eric */
    {
      Node *alias = CreateNilNode(VIF_GENERAL_SUBTYPE_DECL, tprocs);
      Node *constraint = Make_constraint(body, tprocs);
      General_subtype_declHas_id(alias) = name;
      General_subtype_declHas_constraint(alias) = constraint;
      viftype = alias;
   }


   Add_packitem(viftype);
   typetable[closureno] = packnum;
   if ( unconstrained[closureno] <0 )
    {   Node *uncon_name =
            conc_words("UNCON", IdValue(TypedecTypename(typedec)), tprocs);
        Node *uncon = CreateNilNode(VIF_UNCONSTRAINED_ARRAY_TYPE_DECL, tprocs);
        Node *subtype = CreateNilNode(VIF_SUBTYPE_INDICATOR, tprocs);
        Unconstrained_array_type_declHas_id(uncon) = uncon_name;
        Subtype_indicatorHas_constraint(subtype) = 
                            Make_constraint(viftype, tprocs);
        Unconstrained_array_type_declHas_elem_subtype(uncon) = subtype;
        Add_packitem(uncon);
        unconstrained[closureno] = packnum;
    }
}

static Node* typetag_type (Node *typetag, Transformer *tprocs)
{
   return TypetagTag(typetag);
}

static Node* tvoid_enumtype (Node * tvoid, Transformer *tprocs)
{  int vifpacknum = typetable[0];
   return *IndexVector(packitems, vifpacknum);
}

   

static Node* tname_enumtype (Node * tname, Transformer *tprocs)
{
   Node *types = EnvironTypes(outerenv);
   Int typeno = ScalarInt(TnameTypeno(tname));
   Node *local_type = *IndexVector(types, typeno);
   Node *usage = TypedecUsage(local_type);
   int vifpacknum = typetable[ScalarInt(UsageClosureno(usage))];
   return *IndexVector(packitems, vifpacknum);
}

static Node* typeno_enumtype (Node * typenum, Transformer *tprocs)
{
   Node *types = EnvironTypes(outerenv);
   Int typeno = ScalarInt(typenum);
   Node *local_type = *IndexVector(types, typeno);
   Node *usage = TypedecUsage(local_type);
   int vifpacknum = typetable[ScalarInt(UsageClosureno(usage))];
   return *IndexVector(packitems, vifpacknum);
}

static Node* make_array (Node *size, Node *type, Transformer *tprocs)
{
  Node *array = CreateNilNode(VIF_GENERAL_SUBTYPE_DECL, tprocs);
  Node *index = CreateNilNode(VIF_INDEX_CONSTRAINT, tprocs); 
  Node *range = CreateNilNode(VIF_ASCENDING_RANGE_CONSTRAINT, tprocs);

  Ascending_range_constraintHas_left_bound(range) = make_int(1, tprocs);
  Ascending_range_constraintHas_right_bound(range) = size;
  Index_constraintHas_index_range_s(index) = range;
  /* cheat this since Has_index_range should be a list of subtypeindicators */ 
  Index_constraintIs_type(index) = type; 

  General_subtype_declHas_constraint(array) = index;

return array;
}


static Node * tstring_array (Node *tstring, Transformer *tprocs)
{
  return make_array(TstringSize(tstring), TstringChar(tstring), tprocs);
}

static Node * trow_array (Node *trow, Transformer *tprocs)
{
  return make_array(TrowSize(trow), TrowElem(trow), tprocs);
}

static Node * tstr_elems (Node *tstr, Transformer *tprocs)
{
   Node *elems = TstrTypes(tstr);
   Int num = VecSize(elems);
   Node *recordvec = MakeVector(VIF_ELEMENT_DECL, num, tprocs);
  
   Int i;
   for (i = 1; i<= num; i++)
   {
      Node *elem = CreateNilNode(VIF_ELEMENT_DECL, tprocs);
      Element_declHas_constraint(elem) =
           Make_constraint(*IndexVector(elems, i), tprocs);
      Element_declHas_id(elem) = post_num("field", i, tprocs);
      *IndexVector(recordvec, i) = elem;
   }
   return recordvec;
}    

static Node * index_constraint (Node *constraint, Node *ind)
{
   Int tok = Type(constraint);
   if ( tok == VIF_GENERAL_SUBTYPE_DECL )/* TROW, TSTRING */
   {  
      Node *type = General_subtype_declHas_constraint(constraint); 
      Node *index = Index_constraintIs_type(type);
      Node *subtype = Unconstrained_array_type_declHas_elem_subtype(index);
      return Subtype_indicatorHas_constraint(subtype);
   }  

   else /* VIF_RECORD_TYPE_DECL = TSTR */
   {
     Int intvalue = ScalarInt(Int_32_valueHas_int_32(ind));
     Node *vec = Record_type_declHas_element_s(constraint);
     Node *element = *IndexVector(vec, intvalue); 
     return Element_declHas_constraint(element);  
   }
}   
   
 
static Node * slice_constraint (Node *constraint, Node *range, Transformer *tprocs)
{
   Int tok = Type(constraint);
   if ( tok == VIF_GENERAL_SUBTYPE_DECL )/* TROW, TSTRING */
   {  
      Node *type = General_subtype_declHas_constraint(constraint); 
      Index_constraintHas_index_range_s(type) = range;
  /* cheat this since Has_index_range should be a list of subtypeindicators */
       return type; 
   }  

   else /* VIF_RECORD_TYPE_DECL = TSTR */
   {
/* Only allow one slice per LET statement - otherwose trouble with types */ 
/* then resultant type of slice is the LET type                          */
/* deliver nilconstraint since no further work will be done on it        */
    Node *nilconstraint = CreateNilNode(VIF_NON_CONSTRAINT, tprocs);
   return nilconstraint ;  
   }
}   

/******************** Constant primitives *******************************/

static Node* cvoid_usedobject  (Node *cvoid, Transformer *tprocs)
{
  int vifpacknum = typetable[0];
  Node *voidtype = *IndexVector(packitems, vifpacknum);
  Node *enumerals = Enum_type_declHas_enumeral_s(voidtype);
  Node *enumlit = *IndexVector(enumerals, 1);
 return Make_used(enumlit, tprocs);
}      

static Node* cprim_usedobject  (Node *cprim, Transformer *tprocs)
{
  Node *enum_type = typeno_enumtype(CprimTypeno(cprim), tprocs);
  Node *enumerals = Enum_type_declHas_enumeral_s(enum_type);
  Node *enumlit = *IndexVector(enumerals, ScalarInt(CprimPrimno(cprim)) );
 return Make_used(enumlit, tprocs);
}            
 
static Node* cint_usedobject (Node *cint, Transformer *tprocs)
{
  return Make_used(CintIndex(cint), tprocs);
}

static char literal_char (Node *literal)
{
   Node *charval = Char_literal_declHas_id(literal);
   char *chars = IdValue(Symbol_entry_in_tableHas_simple_name(charval));
   return chars[0];
}

static Node* cquote_str (Node *cquote, Transformer *tprocs)
{
  Node *str = CreateNilNode(VIF_STRING_VALUE, tprocs);
  Node *enum_type = typeno_enumtype(CquoteTypeno(cquote), tprocs);
  Node *enumerals = Enum_type_declHas_enumeral_s(enum_type);
 
  Node *vec = CquoteString(cquote); /* VEC INT of indices into char vec */
  Int num = VecSize(vec);
  int i;

  if( num + 1 >= bsize )
  {  fprintf( stderr, "cquote_str:  Buffer too small\n" );
     exit( EXIT_FAILURE );
  }

  for ( i=0; i < num; i++)
    {
      Node *index = *IndexVector(vec, i+1);
      Node *literal = *IndexVector(enumerals, ScalarInt(index));
      buffer[i] = literal_char(literal);
    }
  buffer[num] = NULL;
  String_valueHas_str_rep(str) = MakeId( buffer, tprocs);
                                                       /* MakeId heaps buffer */
  return str;
}

static Node* cprimrange_range (Node *cprimrange, Transformer *tprocs)
{
  Node *range = CreateNilNode(VIF_ASCENDING_RANGE_CONSTRAINT, tprocs);
  Node *enum_type = typeno_enumtype(CprimrangeTypeno(cprimrange), tprocs);
  Node *enumerals = Enum_type_declHas_enumeral_s(enum_type);
  
  Node *firstno = CprimrangeFirstno(cprimrange);
  Node *lastno = CprimrangeLastno(cprimrange);
  Node *first = *IndexVector(enumerals, ScalarInt(firstno)); 
  Node *last = *IndexVector(enumerals, ScalarInt(lastno)); 

  Ascending_range_constraintHas_left_bound(range) = first;
  Ascending_range_constraintHas_right_bound(range) = last;
  return range;
}

static Node * cquery_left (Node *cquery, Transformer *tprocs)
{
  Node *attref = CreateNilNode(VIF_SIMPLE_ATTRIBUTE_REF, tprocs);
  Node *attval = CreateNilNode(VIF_PRE_DEFINED_ATT_DECL, tprocs);
  Node *named = CreateNilNode(VIF_GENERAL_NAMED_ENTITY, tprocs);

  General_named_entityHas_named_entity_def(named) = CqueryQuerytype(cquery);
  Pre_defined_att_declHas_id(attval) = chars_id("LEFT", tprocs);

  Simple_attribute_refHas_attribute(attref) = attval;
  Simple_attribute_refHas_attribute_prefix(attref) = named;  
  return attref;
}

static Node * crange_range (Node *crange, Transformer *tprocs)
{
  return CrangeRange(crange);
}

/************************* general procedures ***************************/

static Node* exp_constraint (Node *exp)
{ /* used to find types in UINDEX */
  Int tok = Type(exp);

  if (tok == VIF_GENERAL_USED_OBJECT)
     return General_used_objectHas_constraint(exp);
  else if (tok == VIF_PORT_DECL)
     return Port_declHas_constraint(exp);
  else if ( tok == VIF_SIGNAL_DECL)
     return Signal_declHas_constraint(exp);
  else if (tok == VIF_INDEXED)
    return  IndexedHas_constraint(exp);
  else if (tok == VIF_SELECTED_ELEMENT)
    return  Selected_elementHas_constraint(exp);
  else if (tok == VIF_ALIAS_DECL)
    return Alias_declHas_constraint(exp);
  else
    { printf("fault in exp_constraint/n"); return NULL;}
}
  

static Node* get_namesconstraint (Int index, Transformer *tprocs)
{
  Fndecinfo *info = (Fndecinfo*) GetEnv(ELLA_FNDEC, tprocs);
  Node *decltable = info->decltable;
  Node *decl = *IndexVector(decltable, index);
  if (Type(decl) == VIF_SIGNAL_DECL )
    return Signal_declHas_constraint(decl);
  else if ( Type(decl) == VIF_PORT_DECL )
    return Port_declHas_constraint(decl);
}

static Node* nameno_usedobject (Int nameno, Transformer *tprocs)
{  
  Fndecinfo *info = (Fndecinfo*) GetEnv(ELLA_FNDEC, tprocs);
  Node *decltable = info->decltable;
  Node *decl = *IndexVector(decltable, nameno);
  Node *used = Make_used(decl, tprocs);
  Node *type = CopyTree(exp_constraint(decl), tprocs);
  General_used_objectHas_constraint(used) = type;
  return used;
}   

static Node* names_exp (Node *names, Transformer *tprocs)
{
   /* assume one name */
   Node *nameno = *IndexVector(names, 1);
   return nameno_usedobject(ScalarInt(nameno), tprocs);
}


static Node* Make_waveform (Node * ambig, Node *ambigtime, 
                            Node *exp, Node *time, Transformer *tprocs)
{
   Int size = ( ( ambigtime == NULL ) ? 1 : 2  );
   Node * waveformelem = CreateNilNode(VIF_WAVEFORM_ELEMENT, tprocs);
   Node* waveforms = MakeVector(VIF_WAVEFORM_ELEMENT, size, tprocs);

   Waveform_elementHas_waveform_value_exp(waveformelem) = exp;
   if (time != NULL)
      Waveform_elementHas_time_exp(waveformelem) = time;
   *IndexVector(waveforms, size) = waveformelem;

   if ( size == 2 )
   { 
     Node *ambigelem = CreateNilNode(VIF_WAVEFORM_ELEMENT, tprocs);
     Waveform_elementHas_waveform_value_exp(ambigelem) = ambig;
     Waveform_elementHas_time_exp(ambigelem) = ambigtime;
     *IndexVector(waveforms, 1) = ambigelem;
   } 
    
   return waveforms;
}
 
static Node*  Make_signalassign (Node * target, Node * exp, Node * waveform,
                                 Transformer *tprocs)
{
  /* using signal_assign where concurrent_signal_assign should be used
     since data structure much simpler
  */
  Node *signalassign = CreateNilNode(VIF_SIGNAL_ASSIGN_STM, tprocs);

  Signal_assign_stmHas_signal_name(signalassign) = target; 
  Signal_assign_stmHas_transport(signalassign) = MakeScalar(0, tprocs);

  Signal_assign_stmHas_waveform_s(signalassign) =
    ( waveform == NULL
      ?  Make_waveform(NULL, NULL, exp, NULL, tprocs)
      :  waveform
    );

  return signalassign;
}


static Node* Make_unary (char * op, Node * right, Transformer *tprocs)
{
   Node * unary = CreateNilNode(VIF_UNARY_OPERATION, tprocs);
   Node *implicit_op = CreateNilNode(VIF_IMPLICIT_OPERATOR_DECL, tprocs);

   Implicit_operator_declHas_id(implicit_op) = chars_id(op, tprocs);
   Unary_operationHas_func_name(unary) = implicit_op;
   Unary_operationHas_right_exp(unary) = right;
   return unary;
}
 

static Node* Make_binary (Node * left, char * op, Node * right,
                           Transformer *tprocs)
{
   Node * binary = CreateNilNode(VIF_BINARY_OPERATION, tprocs);
   Node *implicit_op = CreateNilNode(VIF_IMPLICIT_OPERATOR_DECL, tprocs);

   Implicit_operator_declHas_id(implicit_op) = chars_id(op, tprocs);
   Binary_operationHas_func_name(binary) = implicit_op;
   Binary_operationHas_left_exp(binary) = left;
   Binary_operationHas_right_exp(binary) = right;
   return binary;
}
 
static Node* Make_seqstms  (Node *stm, Transformer *tprocs)
{
  Node *stms = MakeVector(VIF_SEQUENTIAL_STM, 1, tprocs);
  *IndexVector(stms, 1) = stm;
  return stms;
}


static Node* make_condalt (Node *cond, Node *target, Node *exp,
                           Transformer *tprocs)
{
  Node *alt = CreateNilNode(VIF_COND_ALTERNATIVE, tprocs);
  Node *waveform =
     ( ( Type(exp) == VIF_IF_STM )
       ? exp
       : Make_signalassign(target, exp, NULL, tprocs)
     );
  if (cond != NULL) Cond_alternativeHas_condition(alt) = cond;
  Cond_alternativeHas_stm_s(alt) = Make_seqstms(waveform, tprocs);
  return alt;
}


/***************** DELAY *****************************************/

/* mapping does not pass on ambiguity value for short pulses */

static Node * timestep;

static Node* Make_delaytime (Transformer *tprocs)
{
   Node *base = CreateNilNode(VIF_PHY_UNIT_DECL, tprocs);
   Node *value = CreateNilNode(VIF_PHYSICAL_VALUE, tprocs);
   Node *time = make_int(10, tprocs); 
   Node *num = CreateNilNode(VIF_NUMERIC_VALUE, tprocs);
   Node *phytype = CreateNilNode(VIF_PHYSICAL_TYPE_DECL, tprocs);
   Node *constdecl = CreateNilNode(VIF_CONSTANT_DECL, tprocs);

   Phy_unit_declHas_id(base) = chars_id("NS", tprocs);
   Physical_valueHas_base(value) = base;
   Physical_valueHas_value(value) = time;
   Numeric_valueHas_value(num) = value;

   Physical_type_declHas_id(phytype) = chars_id("TIME", tprocs);

   Constant_declHas_id(constdecl) = chars_id("delaytime", tprocs);
   Constant_declHas_constraint(constdecl) = Make_constraint(phytype, tprocs);
   Constant_declHas_value_exp(constdecl) = num;  

   return constdecl;
}

static Node* Make_wait (Transformer *tprocs)
{
  Node *wait = CreateNilNode(VIF_WAIT_STM, tprocs);
  Wait_stmHas_time_limit(wait) = Make_used(timestep, tprocs);
  return wait;
}

static Node* delay_after (Node *delay, Transformer *tprocs)
{
  Node *usedtime = Make_used(timestep, tprocs);
  Node *atime = Int_32_valueHas_int_32(AdelayAmbigtime(delay));
  Node *dtime = Int_32_valueHas_int_32(AdelayDelaytime(delay));
  Node *ambigtime = Make_binary(AdelayAmbigtime(delay), "*", usedtime, tprocs);
  Node *delaytime = Make_binary(AdelayDelaytime(delay), "*", usedtime, tprocs);
  Node * input = nameno_usedobject(1, tprocs);
  Node *output = nameno_usedobject(2, tprocs);
  Node *outputport = General_used_objectHas_obj_def(output);
  Port_declHas_default(outputport) = AdelayInit(delay);

  {  Node *waveform =
        ( (ScalarInt(atime) == ScalarInt(dtime)) 
           ?  Make_waveform(NULL, NULL, input, delaytime, tprocs)
           :  Make_waveform(AdelayAmbig(delay), ambigtime, input, delaytime,
                            tprocs)
        );
     Node *assign = Make_signalassign(output, NULL, waveform, tprocs);
     Node* vif_stms = MakeVector(VIF_ITEM, 1, tprocs);
     *IndexVector(vif_stms, 1) = assign;
     return vif_stms;
  }
}

static Node* idelay_after (Node *idelay, Transformer *tprocs)
{
  Node *usedtime = Make_used(timestep, tprocs);
  Node *delaytime = Make_binary(IdelayDelaytime(idelay), "*", usedtime, tprocs);
  Node * input = nameno_usedobject(1, tprocs);
  Node *output = nameno_usedobject(2, tprocs);
  Node *outputport = General_used_objectHas_obj_def(output);
  Port_declHas_default(outputport) = IdelayInit(idelay);

  {  Node* vif_stms = MakeVector(VIF_ITEM, 1, tprocs);
     Node *waveform = Make_waveform(NULL, NULL, input, delaytime, tprocs);
     Node *assign = Make_signalassign(output, NULL, waveform, tprocs);
     Signal_assign_stmHas_transport(assign) = MakeScalar(1, tprocs);
     *IndexVector(vif_stms, 1) = assign;
     return vif_stms;
  }
}

static Node* make_sensitivity (Transformer *tprocs)
{
  Fndecinfo *info = (Fndecinfo*) GetEnv(ELLA_FNDEC, tprocs);
  int *sensitive = info->sensitive;
  int upb = VecSize(info -> decltable);
  int num = 0;
  int i;
  for (i=1; i <= upb; ++i)
    if ( sensitive[i] ) ++num;
  {
    Node *sensitivity_vec = MakeVector(VIF_NAME_EXP, num, tprocs);
    num = 0;
    for (i=1; i <= upb; ++i)
      if (sensitive[i] )  
        *IndexVector(sensitivity_vec, ++num) = nameno_usedobject(i, tprocs);

    return sensitivity_vec;
  }
}

static Node* make_process (Node *unit, Transformer *tprocs)
{  Node *process = CreateNilNode(VIF_PROCESS_STM, tprocs);
   Node *stms = MakeVector(VIF_SEQUENTIAL_STM, 1, tprocs);
   *IndexVector(stms, 1) = unit;  
   Process_stmHas_stm_s(process) = stms;
   Process_stmHas_sensitivity_s(process) = make_sensitivity(tprocs);
   return process;
}


/***************** ARITH **************************************/

static char *mopnames[] = {NULL, "+", "-", "NOT", "NOT", "SQRT", "ABS"};

static char *dopnames[] = {NULL, "+", "-", "*", "/", "=", "/=", "<=", ">=",
                         "<", ">", "AND", "OR", NULL, "SL", "SR", "IAND",
                         "IOR", "MOD"};

static Node *Make_conversion (Node *node, Node *type, Transformer *tprocs)
{
   Node *convert = CreateNilNode(VIF_TYPE_CONVERSION, tprocs);
   Type_conversionHas_constraint(convert) = type;
   Type_conversionHas_converted_exp(convert) = node;
   return convert;
}

static Node *Make_integer (Node *node, Transformer *tprocs)
{
  Node *int_type = CreateNilNode(VIF_INTEGER_TYPE_DECL, tprocs);
  Integer_type_declHas_id(int_type) = chars_id("INTEGER", tprocs);
  return Make_conversion(node, int_type, tprocs);
}

static Node* fmop_exp (Node *fmop, Transformer *tprocs)
{  
   Int index = ScalarInt(FmopSort(fmop));
   char *op = mopnames[index];
   return Make_unary(op, FmopRight(fmop), tprocs);
}

static Node* fdop_exp (Node *fdop, Transformer *tprocs)
{
  Int index = ScalarInt(FdopSort(fdop));
  char *op = dopnames[index];
   return Make_binary(FdopLeft(fdop), op, FdopRight(fdop), tprocs);
}

static Node* farith_exp (Node *farith, Transformer *tprocs)
{
  /* used to record names used within ARITH clauses so as to set up */
  /* sensitivity list */
  Fndecinfo *info = (Fndecinfo*) GetEnv(ELLA_FNDEC, tprocs);
  int *sensitive = info->sensitive;
  int index = ScalarInt(FarithNameno(farith));
  sensitive[index] = 1;
  return Make_integer( nameno_usedobject(index, tprocs), tprocs);
}

static Node* arith_enum (Node *exp, Node *type, Transformer *tprocs)
{
  /* handles arith output which is an enumerated type */
  Arithinfo *info = (Arithinfo*) GetEnv(ELLA_ARITH, tprocs);
  if (info -> isinteger)
       return Make_conversion(exp, type, tprocs);
  else 
     {  Node *attref = CreateNilNode(VIF_INDEXED_ATTRIBUTE_REF, tprocs);
        Node *attval = CreateNilNode(VIF_PRE_DEFINED_ATT_DECL, tprocs);
        Node *named = CreateNilNode(VIF_GENERAL_NAMED_ENTITY, tprocs);

       General_named_entityHas_named_entity_def(named) =
                      General_used_objectHas_obj_def(info -> outputtype);
       Pre_defined_att_declHas_id(attval) = chars_id("VAL", tprocs);

       Indexed_attribute_refHas_attribute(attref) = attval;
       Indexed_attribute_refHas_attribute_prefix(attref) = named;
       Indexed_attribute_refHas_index(attref) = 
             Make_binary(exp, "-",  make_int(1, tprocs), tprocs);
       return attref;
     }
} 
       
static Node* fcond_exp (Node *fcond, Transformer *tprocs)
{
   Arithinfo *info = (Arithinfo *) GetEnv(ELLA_ARITH, tprocs);
   Node *output = info -> output;
   Node *type = info -> outputtype;

   Node* vif_if = CreateNilNode(VIF_IF_STM, tprocs);
   Node* cond_alts = MakeVector(VIF_COND_ALTERNATIVE, 2, tprocs);
   Node *cond_t = arith_enum(FcondTrue(fcond), type,  tprocs);
   Node *cond_f = arith_enum(FcondFalse(fcond), type, tprocs);

   *IndexVector(cond_alts, 1) = 
          make_condalt(FcondCond(fcond), output, cond_t, tprocs);
   *IndexVector(cond_alts, 2) = 
          make_condalt(NULL, output, cond_f, tprocs);

   If_stmHas_alternative_s(vif_if) = cond_alts;
   return vif_if;
}


static Node* setup_arith  (Node *arith, Transformer *tprocs)
{
  Arithinfo *arithinfo = (Arithinfo*)malloc(sizeof(Arithinfo));
  Fndecinfo *info = (Fndecinfo*) GetEnv(ELLA_FNDEC, tprocs);
  Node *fns = EnvironFns(info -> environ);
  Node *fndec = *IndexVector(fns, 1);
  int outputno = VecSize(FndecInputs(fndec)) + 1;
  Node *output = nameno_usedobject(outputno, tprocs);
  Node *outputtype = 
     Non_constraintIs_type(get_namesconstraint(outputno, tprocs));

  int *sensitive = info->sensitive;
  int i;
  for (i=1; i<=VecSize(info->decltable); ++i) sensitive[i] = 0;

  arithinfo -> output = output;
  arithinfo -> outputtype = outputtype;
  arithinfo -> isinteger = ( Type(outputtype) == VIF_INTEGER_TYPE_DECL );
  NewEnv(ELLA_ARITH, (Arithinfo*)(arithinfo), tprocs);
  return NullTransform(arith, tprocs);
}

static Node* arith_exp (Node *arith, Transformer *tprocs)
{
   Arithinfo *info = (Arithinfo *) GetEnv(ELLA_ARITH, tprocs);
   Node *exp = ArithOutput(arith);
   
   Node* vif_stms = MakeVector(VIF_ITEM, 1, tprocs);
   *IndexVector(vif_stms, 1) = 
     ( ( Type(exp) == VIF_IF_STM )
       ? make_process(exp, tprocs)
       : Make_signalassign(info -> output, 
                           arith_enum(exp, info->outputtype, tprocs),
                           NULL, tprocs)
     );
   return vif_stms;
}

/***************** Ports ***********************************************/


static Node* Make_port_decl (Node *portname, Node *kind, Node *type,
                      Transformer *tprocs)
{
   Node * portdecl = CreateNilNode(VIF_PORT_DECL, tprocs);
   char *portstr = IdValue(portname);
   Node *portid =
     ( *portstr == NULL ? post_num("unnamed", ++unnamed_no, tprocs)
                        : makeVIFid(portname, tprocs)                    
     );
   Port_declHas_constraint(portdecl) = Make_constraint(type, tprocs); 
   Port_declHas_id(portdecl) = portid;
   Port_declHas_mode(portdecl) = kind;
   return portdecl;                
}

static Node * names_vecportdecl (int num_inputs, int num_outputs,
                                 Transformer *tprocs, Fndecinfo *info)
{
   /* assumes ports are the first entries in the ELLA nametypes table */
   Node *decltable = info->decltable;
   Node *nametypes = info->nametypes;
 
   int numports = num_inputs + num_outputs;
   int act_inputs = num_inputs;
   int act_outputs = num_outputs;

   if ( num_inputs == 1 )   
    {
        Node * inputtype = *IndexVector(nametypes, 1);
        if ( Type(NametypeType(inputtype)) == ELLA_TVOID ) 
          { info -> voidinput = 1;  -- act_inputs; }
    }
   if ( num_outputs == 1 )   
    {
        Node * outputtype = *IndexVector(nametypes, numports);
        if ( Type(NametypeType(outputtype)) == ELLA_TVOID ) 
          { info -> voidoutput = 1; -- act_outputs; } 
    }
   {
     int act_ports = act_inputs + act_outputs;
     Node *ports = MakeVector(VIF_PORT_DECL, act_ports, tprocs);
     int portindex = 0;

     int j;
     for ( j = 1; j <= 2; j++ )
     {
       Node *kind = ( j==1 ? MakeScalar(1, tprocs) : MakeScalar(2, tprocs) );
       int start = ( j==1 ? 1 : num_inputs + 1 );
       int finish = ( j==1 ? act_inputs : num_inputs + act_outputs );
       int i;
       for ( i=start; i <= finish; i++ )
       {
          Node * nametype = *IndexVector(nametypes, i);
          Node *ellatype = NametypeType(nametype);
          Node *type = Transform(ellatype, tprocs);

          Node *portdecl = 
            Make_port_decl(NametypeName(nametype), kind, type, tprocs);
          *IndexVector(ports, ++portindex) = portdecl;
          *IndexVector(decltable, i) = portdecl;
        }
      }
      return ports;
    }
}

/******************** UNITS *******************************/


static Node* uname_usedobject (Node * uname, Transformer *tprocs)
{  
  /* used to record uname used within CASE clauses so as to set up */
  /* sensitivity list */
  Fndecinfo *info = (Fndecinfo*) GetEnv(ELLA_FNDEC, tprocs);
  int *sensitive = info->sensitive;
  int index = ScalarInt(UnameNameno(uname));

  sensitive[index] = 1;
  return nameno_usedobject(index, tprocs);
}            


static Node* ustring_aggregate (Node *ustring, Transformer *tprocs)
{
  Node *named_array = CreateNilNode(VIF_NAMED_ARRAY_AGG, tprocs);
  Node *named_agg = CreateNilNode(VIF_NAMED_AGG_ASSOC, tprocs);
  Node *agg_s = MakeVector(VIF_NAMED_AGG_ASSOC, 1, tprocs);

  Named_agg_assocIs_associated_up_to(named_agg) = UstringSize(ustring);
  Named_agg_assocHas_associated_exp(named_agg) = UstringChar(ustring);
  
  *IndexVector(agg_s, 1) = named_agg;
  Named_array_aggHas_assoc_s(named_array) = agg_s;
  return named_array;
}

static Node* urow_aggregate (Node *urow, Transformer *tprocs)
{
  Node *named_array = CreateNilNode(VIF_NAMED_ARRAY_AGG, tprocs);
  Node *named_agg = CreateNilNode(VIF_NAMED_AGG_ASSOC, tprocs);
  Node *agg_s = MakeVector(VIF_NAMED_AGG_ASSOC, 1, tprocs);

  Named_agg_assocIs_associated_up_to(named_agg) = UrowSize(urow);
  Named_agg_assocHas_associated_exp(named_agg) = UrowElem(urow);
  
  *IndexVector(agg_s, 1) = named_agg;
  Named_array_aggHas_assoc_s(named_array) = agg_s;
  return named_array;
}

static Node* ustr_aggregate (Node *ustr, Transformer *tprocs)
{
  Node *array_agg = CreateNilNode(VIF_POSITIONAL_ARRAY_AGG, tprocs);
  Node *elems = UstrElems(ustr);
  Int size = VecSize(elems);
  Node *exps = MakeVector(VIF_AGG_ASSOC, size, tprocs);
  int i;
  for ( i = 1; i<= size; i++)
  {
    Node *agg = CreateNilNode(VIF_POSITIONAL_AGG_ASSOC, tprocs);
    Positional_agg_assocHas_associated_exp(agg) =  *IndexVector(elems, i);
    *IndexVector(exps, i) = agg;
  }
  Positional_array_aggHas_assoc_s(array_agg) = exps; 
  return array_agg;
}

static Node *ualts_choices (Node *ualts, Transformer *tprocs)
{
  Node *alts = UaltsAlts(ualts);
  Int size = VecSize(alts);
  Node *choices = MakeVector(VIF_CHOICE, size, tprocs);
  int i;
  for ( i= 1; i<= size; i++)
  {
    *IndexVector(choices, i) = *IndexVector(alts, i);
  }
  return choices;
}

static Node *Make_dynindex (Node *unit, Node *uindex, Transformer *tprocs)
{
   Node *index = CreateNilNode(VIF_INDEXED, tprocs); 
   Node *inds = MakeVector(VIF_NAME_EXP, 1, tprocs);
   *IndexVector(inds, 1) = Make_integer(uindex, tprocs);  
   IndexedHas_index_exp_s(index) = inds;
   IndexedHas_prefix(index) = unit;
   return index;
} 

static Node *udyindex_index (Node *udyindex, Transformer *tprocs)
{
  return Make_dynindex(UdyindexUnit(udyindex), UdyindexIndex(udyindex), tprocs);
}

static Node *unit_index (Node *exp, Node *ind, Transformer *tprocs)
{
  Node *type = exp_constraint(exp); 
  Node *constraint = type;
  Int tok = Type(type);

  if ( tok == VIF_NON_CONSTRAINT )
   { type = Non_constraintIs_type(type);
     tok = Type(type);
   }
  constraint = index_constraint(type, ind);
 
  if ( tok == VIF_GENERAL_SUBTYPE_DECL )
   {   
       Node *index = CreateNilNode(VIF_INDEXED, tprocs);
       Node *inds = MakeVector(VIF_NAME_EXP, 1, tprocs);

       *IndexVector(inds, 1) = ind;
       IndexedHas_constraint(index) = constraint;
       IndexedHas_index_exp_s(index) = inds;
       IndexedHas_prefix(index) = exp;
       return index;
   }
  else if ( tok == VIF_RECORD_TYPE_DECL )
   { 
      Node *select = CreateNilNode(VIF_SELECTED_ELEMENT, tprocs);
      Node *vec = Record_type_declHas_element_s(type);
      Node *intvalue = Int_32_valueHas_int_32(ind);
      Node * element = *IndexVector(vec, ScalarInt(intvalue) ); 

      Selected_elementHas_constraint(select) = constraint;
      Selected_elementHas_prefix(select) = exp;
      Selected_elementHas_suffix(select) = element; 
      return select;
   }
}

static Node *uindex_index (Node *uindex, Transformer *tprocs)
{
  return unit_index(UindexUnit(uindex), UindexIndex(uindex), tprocs);
}


static Node *utrim_slice (Node *utrim, Transformer *tprocs)
{
  Node *range = UtrimRange(utrim);
  Node *exp = UtrimUnit(utrim);
  Node *type = exp_constraint(exp); 
  Node *constraint = type;
  Int tok = Type(type);

  if ( tok == VIF_NON_CONSTRAINT )
   { type = Non_constraintIs_type(type);
     tok = Type(type);
   }
  constraint = slice_constraint(type, range, tprocs);
 
  if ( tok == VIF_GENERAL_SUBTYPE_DECL )
   {   
     Node *slice = CreateNilNode(VIF_SLICE, tprocs);
     SliceHas_constraint(slice) = constraint;
     SliceHas_index_range(slice) = range;
     SliceHas_prefix(slice) = exp;
     return slice;
   }
  else if ( tok == VIF_RECORD_TYPE_DECL )
   { 
     Node *vec = Record_type_declHas_element_s(type);
     Node *lwb = Ascending_range_constraintHas_left_bound(range);
     Node *upb = Ascending_range_constraintHas_right_bound(range);
     int lwb_value = ScalarInt(Int_32_valueHas_int_32(lwb) );
     int upb_value = ScalarInt(Int_32_valueHas_int_32(upb) );

     Node *array_agg = CreateNilNode(VIF_POSITIONAL_ARRAY_AGG, tprocs);
     Int size = upb_value - lwb_value + 1;
     Node *exps = MakeVector(VIF_AGG_ASSOC, size, tprocs);
     int i;
     for ( i = lwb_value; i<= upb_value; i++)
     {
       Node *agg = CreateNilNode(VIF_POSITIONAL_AGG_ASSOC, tprocs);

       Node *select = CreateNilNode(VIF_SELECTED_ELEMENT, tprocs);
       Node * element = *IndexVector(vec, i ); 
       Selected_elementHas_constraint(select) = constraint;
       Selected_elementHas_prefix(select) = exp;
       Selected_elementHas_suffix(select) = element; 

       Positional_agg_assocHas_associated_exp(agg) =  select;
       *IndexVector(exps, i) = agg;
     }
     Positional_array_aggHas_assoc_s(array_agg) = exps; 
     return array_agg;
   }
}


static Node *ureplace_process (Node *ureplace, Transformer *tprocs)
{
   Node *process = CreateNilNode(VIF_PROCESS_STM, tprocs);
   Node *decls = MakeVector(VIF_ITEM, 1, tprocs);
   Node *stms = MakeVector(VIF_SEQUENTIAL_STM, 3, tprocs);
   Node *var = CreateNilNode(VIF_VARIABLE_DECL, tprocs);
   Node *init = CreateNilNode(VIF_VARIABLE_ASSIGN_STM, tprocs);
   Node *assign = CreateNilNode(VIF_VARIABLE_ASSIGN_STM, tprocs);

   Letinfo *letinfo = (Letinfo *)GetEnv(ELLA_LET, tprocs); 
   Node *letnames = letinfo -> letnames;
   Node *name = *IndexVector(letnames, 1);

   Variable_declHas_constraint(var) = 
          get_namesconstraint(ScalarInt(name), tprocs); 
   Variable_declHas_id(var) = chars_id("tempvar", tprocs);

   Variable_assign_stmHas_variable_name(init) = Make_used(var, tprocs);
   Variable_assign_stmHas_assigned_exp(init) = 
        Make_used(UreplaceUnit(ureplace), tprocs);

   Variable_assign_stmHas_variable_name(assign) =
        Make_dynindex(Make_used(var, tprocs), UreplaceIndex(ureplace), tprocs);
   Variable_assign_stmHas_assigned_exp(assign) = 
        Make_used(UreplaceFrom(ureplace), tprocs);

   *IndexVector(decls, 1) = var;
   *IndexVector(stms, 1) = init;
   *IndexVector(stms, 2) = assign;  
   *IndexVector(stms, 3) = Make_signalassign( names_exp(letnames, tprocs), 
                                         Make_used(var, tprocs), NULL, tprocs);

   Process_stmHas_decl_s(process) = decls; 
   Process_stmHas_stm_s(process) = stms;
   Process_stmHas_sensitivity_s(process) = make_sensitivity(tprocs);
   return process;
}
  
static Node *uconc_conc (Node *uconc, Transformer *tprocs)
{
  return Make_binary(UconcLeft(uconc), "&", UconcRight(uconc), tprocs);
}

static Node *unull_null (Node *unull, Transformer *tprocs)
{
  return CreateNilNode(VIF_NULL_LITERAL, tprocs);
}

/****************** *************************/

static Node* Make_entity_decl (Node *fndec, Transformer *tprocs)
{
   Node * entity =  CreateNilNode(VIF_ENTITY_DECL, tprocs);
   int size = Upb(Children(FndecNametypes(fndec)));
   Node* decltable = MakeVector(VIF_ITEM, size, tprocs);
   Fndecinfo *info = (Fndecinfo*)malloc(sizeof(Fndecinfo));
 
   info->nametypes = FndecNametypes(fndec);
   info->decltable = decltable;
   info->sensitive = NULL;
   info ->environ = outerenv;

   { Int num_inputs = VecSize(FndecInputs(fndec));
     Int num_outputs = VecSize(FndecOutputs(fndec));
     Node *ports = names_vecportdecl(num_inputs, num_outputs, tprocs, info);

     Entity_declHas_id(entity) = makeVIFid(FndecFnname(fndec), tprocs);
     Entity_declHas_port_s(entity) = ports;
   }
   return entity;
}


static Node* uminst_inst (Node *uminst, Transformer *tprocs)
{
   Node *inst = CreateNilNode(VIF_ENTITY_INSTANTIATE_STM, tprocs);
   Fndecinfo *info = (Fndecinfo*) GetEnv(ELLA_FNDEC, tprocs);

   Node *fns = EnvironFns(info -> environ);
   Int fnno = ScalarInt(InstanceFnno(UminstInst(uminst)));
   Node *fndec = *IndexVector(fns, fnno);
   Node *entity_decl = Make_entity_decl(fndec, tprocs);
   Entity_instantiate_stmHas_bound_entity(inst) = entity_decl;

   { Int num_inputs = VecSize(FndecInputs(fndec));
     Int num_outputs = VecSize(FndecOutputs(fndec));
     Node *port_assocs = MakeVector(VIF_COMPLETE_ASSOCIATION_OF_FORMAL,
                                    num_inputs + num_outputs, tprocs);
     Node *inputs = UminstRight(uminst);
     Node *assoc;
     int i;

     if ( num_inputs == 1 )
        {
           assoc = CreateNilNode(VIF_COMPLETE_ASSOCIATION_OF_FORMAL, tprocs);
           Complete_association_of_formalHas_actual(assoc) = inputs;
           *IndexVector(port_assocs, 1) = assoc;
         }
     else if (Type(inputs) == VIF_NAMED_ARRAY_AGG) /* UROW */
         {
           Node *vecvalue = Named_array_aggHas_assoc_s(inputs);
           Node *agg_assoc = *IndexVector(vecvalue, 1);
           Node *val = Named_agg_assocHas_associated_exp(agg_assoc);
           for ( i = 1; i<= num_inputs; i ++)
           {
              assoc = CreateNilNode(VIF_COMPLETE_ASSOCIATION_OF_FORMAL, tprocs);
              Complete_association_of_formalHas_actual(assoc) = val;
              *IndexVector(port_assocs, i) = assoc;
           }
          }
      else if (Type(inputs) == VIF_POSITIONAL_ARRAY_AGG)
        { 
         Node *exps = Positional_array_aggHas_assoc_s(inputs);
         for ( i = 1; i<= num_inputs; i ++)
         {
           Node *exp = *IndexVector(exps, i);
           assoc = CreateNilNode(VIF_COMPLETE_ASSOCIATION_OF_FORMAL, tprocs);
           Complete_association_of_formalHas_actual(assoc) =
                            Positional_agg_assocHas_associated_exp(exp);
           *IndexVector(port_assocs, i) = assoc;
          }
        }

      for (i = num_inputs + 1; i <= num_inputs + num_outputs; i ++)
         *IndexVector(port_assocs, i) = MakeNilNode(VIF_PORT_DECL, tprocs);

       Entity_instantiate_stmHas_port_assoc_s(inst) = port_assocs;
    }
  
  return inst;
}
     
static  Make_sig_decl (Node *let, Transformer *tprocs)
{
    /* assumes LETs have been simplified to a single name */
   Fndecinfo *info = (Fndecinfo*) GetEnv(ELLA_FNDEC, tprocs);
   Node *decltable = info->decltable;
   Node *nametypes = info->nametypes;

   Node * sigdecl = CreateNilNode(VIF_SIGNAL_DECL, tprocs);

   Node * nameno = *IndexVector(LetLetnames(let), 1);
   Int index = ScalarInt(nameno);
   Node *nametype = *IndexVector(nametypes, index);
   Node *type = Transform(NametypeType(nametype), tprocs);

   Signal_declHas_constraint(sigdecl) = Make_constraint(type, tprocs);
   Signal_declHas_id(sigdecl) = makeVIFid(NametypeName(nametype), tprocs);
   *IndexVector(decltable, index) = sigdecl;
            
}

static  Make_alias_decl (Node *let, Transformer *tprocs)
{
    /* assumes LETs have been simplified to a single name */
   Fndecinfo *info = (Fndecinfo*) GetEnv(ELLA_FNDEC, tprocs);
   Node *decltable = info->decltable;
   Node *nametypes = info->nametypes;

   Node * aliasdecl = CreateNilNode(VIF_ALIAS_DECL, tprocs);

   Node * nameno = *IndexVector(LetLetnames(let), 1);
   Int index = ScalarInt(nameno);
   Node *nametype = *IndexVector(nametypes, index);
   Node *type = Transform(NametypeType(nametype), tprocs);

   Alias_declHas_constraint(aliasdecl) = Make_constraint(type, tprocs);
   Alias_declHas_id(aliasdecl) = makeVIFid(NametypeName(nametype), tprocs);
   *IndexVector(decltable, index) = aliasdecl;              
}

static int Is_signal (Node *unit)
{
/* make all units signals
  Int tok = Type(unit);
  return ( tok == ELLA_UCASE || tok == ELLA_UMINST || tok == ELLA_UTRIM ||
           tok == ELLA_UROW || tok == ELLA_USTR || tok == ELLA_CQUERY ||
           tok == ELLA_UDYINDEX || tok == ELLA_UREPLACE || 
           tok == ELLA_USTRING || tok == ELLA_UCONC );
*/
 return 1;
}

static Node* setup_let  (Node *let, Transformer *tprocs)
{
  Letinfo *letinfo = (Letinfo*)malloc(sizeof(Letinfo));
  letinfo->signal =  Is_signal(LetUnit(let));
  letinfo -> letnames = LetLetnames(let);
  NewEnv(ELLA_LET, (Letinfo*)(letinfo), tprocs);

  { Fndecinfo *info = (Fndecinfo*) GetEnv(ELLA_FNDEC, tprocs);
    int *sensitive = info->sensitive;
    int i;
    for (i=1; i<=VecSize(info->decltable); ++i) sensitive[i] = 0;
    return NullTransform(let, tprocs);
  }
}

static Node* let_vif (Node *let, Transformer *tprocs)
{
   Letinfo *letinfo = (Letinfo *)GetEnv(ELLA_LET, tprocs); 
   int signal = letinfo -> signal;
   Node *unit = LetUnit(let);
   Int unittype = Type(unit);

   if ( unittype == VIF_ENTITY_INSTANTIATE_STM)
     {
        /* assume ELLA of form LET singlename = UMINST .... */

        Node *portassocs = Entity_instantiate_stmHas_port_assoc_s(unit);
        Node *exp = names_exp(LetLetnames(let), tprocs); 
        Int upb = VecSize(portassocs);
        int firstoutput = 0;
        int i, j;
        for ( i = 1; firstoutput == 0 ; i++ )
        {
           Node *port = *IndexVector(portassocs, i);
           if ( IsNil(port) ) firstoutput = i;
        }
        for ( i = firstoutput, j = 1; i<= upb; i++, j++)
        {
          Node *assoc = CreateNilNode(VIF_COMPLETE_ASSOCIATION_OF_FORMAL, 
                                      tprocs);
          if ( firstoutput != upb )
          {
             Node *index = CreateNilNode(VIF_INDEXED, tprocs);
             Node *inds = MakeVector(VIF_NAME_EXP, 1, tprocs);
             *IndexVector(inds, 1) = make_int(j, tprocs);
             IndexedHas_index_exp_s(index) = inds;
             IndexedHas_base_obj_def(index) = exp;
             Complete_association_of_formalHas_actual(assoc) = index;
           }
           else Complete_association_of_formalHas_actual(assoc) = exp;
                     
           *IndexVector(portassocs, i) = assoc;
        }  
        return unit;     
     }

   else if ( unittype == VIF_IF_STM ) /* UCASE */
     return make_process(unit, tprocs);

   else if ( unittype == VIF_PROCESS_STM ) /* UREPLACE */
     return unit;

   else if ( unittype == VIF_SLICE ) /* UTRIM */
     {
       Node *target = names_exp(LetLetnames(let), tprocs);
       Node *name = *IndexVector(LetLetnames(let), 1);
       Node *constraint = get_namesconstraint(ScalarInt(name), tprocs); 
       Node *convert = Make_conversion(unit, Non_constraintIs_type(constraint),
                                       tprocs); 
       return Make_signalassign(target, convert, NULL, tprocs);
     }

   else if ( signal ) /* USTR, UROW, USTRING, CQUERY, UDYINDEX, UCONC */
     {
       Node *target = names_exp(LetLetnames(let), tprocs);
       return Make_signalassign(target, unit, NULL, tprocs);
     }
  else /* UINDEX,  UNAME */
    {
      Fndecinfo *info = (Fndecinfo*) GetEnv(ELLA_FNDEC, tprocs);
      Node *decltable = info->decltable;

      Node * nameno = *IndexVector(LetLetnames(let), 1);
      Int index = ScalarInt(nameno);
      Node *aliasdecl = *IndexVector(decltable, index);
      Alias_declHas_aliased_object(aliasdecl) = Make_used(unit, tprocs);
      return aliasdecl; /* held temporarily - removed in useries_vecstm */
    } 
 }

static Node* make_exp (Node *, Node *, Transformer *);

static Node* make_eq (Node *left, Node *right, Transformer *tprocs)
{
  if (Type(right) == ELLA_CTYPE)
    {  Node *true_const = CreateNilNode(VIF_ENUM_LITERAL_DECL, tprocs);
       Enum_literal_declHas_id(true_const) = chars_id("TRUE", tprocs);
       return Make_used(true_const, tprocs);
    }

  else if ( Type(right) == VIF_ASCENDING_RANGE_CONSTRAINT ) 
               /* CRANGE, CPRIMRANGE */
    {
      Node *lwb = Make_binary(left, ">=", 
                              Ascending_range_constraintHas_left_bound(right),
                              tprocs);
      Node *upb = Make_binary(left, "<=", 
                              Ascending_range_constraintHas_right_bound(right),
                              tprocs);
      return Make_binary(lwb, "AND", upb, tprocs);
    }

  else return Make_binary(left, "=", right, tprocs);
}

static Node* make_orexp (Node* left, Node *right, Transformer *tprocs)
{
   if ( Type(right) == Vec(VIF_CHOICE) ) /* dealing with ualts */
    {
      Int upb = VecSize(right);
      Node *alt = *IndexVector(right, 1);
      Node *exp = make_exp(left, alt, tprocs);
      Node *next;
      int i;
      for ( i = 2; i <= upb; i++ )
      {
         alt = *IndexVector(right, i);
         next = make_exp(left, alt, tprocs);
         exp = Make_binary(exp, "OR", next, tprocs);
      }
      return exp;       
    }

    else return make_eq(left, right, tprocs);
}

static Node* make_andexp (Node* leftnode, Node *rightnode, Transformer *tprocs)
{
   Node *leftvec = Positional_array_aggHas_assoc_s(leftnode);
   Node *rightvec = Positional_array_aggHas_assoc_s(rightnode);
   Int upb = VecSize(rightvec);
   Node *left = 
           Positional_agg_assocHas_associated_exp(*IndexVector(leftvec, 1));
   Node *right = 
           Positional_agg_assocHas_associated_exp(*IndexVector(rightvec, 1));
   Node *exp = make_orexp(left, right, tprocs);

   Node *next;
   int i;
   for ( i = 2; i <= upb; i++ )
   {
     left = Positional_agg_assocHas_associated_exp(*IndexVector(leftvec, i));
     right = Positional_agg_assocHas_associated_exp(*IndexVector(rightvec, i));
     next = make_orexp(left, right, tprocs);
     exp = Make_binary(exp, "AND", next, tprocs);
   }

  return exp;       
}
    
static Node* make_exp (Node *input, Node *chooser, Transformer *tprocs)
{
 /* ?? still got to deal with UROW */
  if ( Type(input) == VIF_POSITIONAL_ARRAY_AGG ) /* more than one chooser*/
     if ( Type(chooser) == VIF_POSITIONAL_ARRAY_AGG ) /* ustr */
        return make_andexp(input, chooser, tprocs);
     else /* ualts */
        return make_orexp(input, chooser, tprocs);
   else return make_orexp(input, chooser, tprocs);
}

static Node* uchoice_alt (Node *uchoice, Transformer *tprocs)
{
   Letinfo *letinfo = (Letinfo *)GetEnv(ELLA_LET, tprocs); 
   Node *letnames = letinfo -> letnames;
   Node *target = names_exp(letnames, tprocs);
   Node *output = UchoicesOutput(uchoice);
   Node *input = (Node *)GetEnv(ELLA_UCASE, tprocs);   
   Int sort = ScalarInt(UchoicesSort(uchoice));

   Node *cond =
      ( (sort ==1 || sort ==2 ) /* normal or elseof */
        ?  make_exp(input, UchoicesTest(uchoice), tprocs)
        :  NULL
      );
   Node *alt = make_condalt(cond, target, output, tprocs);
   return alt;
}  

static Node* setup_ucase  (Node *ucase, Transformer *tprocs)
{
   Node * input = Transform(UcaseInput(ucase), tprocs);
   NewEnv(ELLA_UCASE, (Node*)(input), tprocs);
   return NullTransform(ucase, tprocs);
}

static Node* ucase_if  (Node *ucase, Transformer *tprocs)
{
   Node* vif_if = CreateNilNode(VIF_IF_STM, tprocs);
   Node* uchoices = UcaseChoices(ucase);
   Size size = VecSize(uchoices);

   Node* cond_alts = MakeVector(VIF_COND_ALTERNATIVE, size, tprocs);

   int i;
   for (i=1; i <= size; ++i)
   { 
      Node *alt = *IndexVector(uchoices, i);
      *IndexVector(cond_alts, i) = alt;
    }

   If_stmHas_alternative_s(vif_if) = cond_alts;

   return( vif_if );   
}
 

static Node* vecoutput (Transformer *tprocs)
{
  Fndecinfo *info = (Fndecinfo*) GetEnv(ELLA_FNDEC, tprocs);
  if (! (info -> voidoutput))
  {  
    Node *fns = EnvironFns(info -> environ);
    Node *fndec = *IndexVector(fns, 1);
    int inputno = VecSize(FndecInputs(fndec));
    int outputno = VecSize(FndecOutputs(fndec));
    Node *vecused = MakeVector(VIF_GENERAL_USED_OBJECT, outputno, tprocs);
    int i;
    for ( i= 1; i <= outputno; i++ )
      *IndexVector(vecused, i) = nameno_usedobject(i + inputno, tprocs);
    return vecused;
  }
  else return  MakeVector(VIF_GENERAL_USED_OBJECT, 0, tprocs);
}

static Node* setup_useries (Node *useries, Transformer *tprocs)
{
   /* do prepass to set up decltable for LET names as use of LET names */
   /* before decl can occur in ELLA if MAKEs have been transformed to LETs  */
   Int *vifno = (Int*)malloc(sizeof(int));
   Node *output = UseriesOutput(useries);
   Node *vecoutputs = vecoutput(tprocs);   /* outputs of fndec */
   int num_outputs = VecSize(vecoutputs);

   Node *vecstatements = UseriesBody(useries);
   Int size = VecSize(vecstatements);
   int i;
   *vifno = 0; /* number of resulting VIF statements */
   for ( i=1; i <= size; ++i)
   {
     Node *step = *IndexVector(vecstatements, i);
     Fndecinfo *info = (Fndecinfo*) GetEnv(ELLA_FNDEC, tprocs);
     if ( Is_signal(LetUnit(step)) )
       { *vifno = *vifno + 1;
         Make_sig_decl(step, tprocs);
       }
     else
       Make_alias_decl(step, tprocs);
   }
   if ( Type(output) != ELLA_CVOID && Type(output) != ELLA_UNULL )
      *vifno = *vifno + num_outputs; /* ie not a void output */
 
    NewEnv(ELLA_USERIES, (Int*)(vifno), tprocs);
    return NullTransform(useries, tprocs);
}

static Node*  useries_vecstm (Node * useries, Transformer *tprocs)
{ 
   Int *item_num = (Int*)GetEnv(ELLA_USERIES, tprocs);
   Node* vif_stms;
   Node *vecstatements = UseriesBody(useries);
   Node *vecoutputs = vecoutput(tprocs);   /* outputs of fndec */
   int num_outputs = VecSize(vecoutputs);
   Node * output = UseriesOutput(useries); /* output of series */
   Int size = VecSize(vecstatements);
   int postfix = 0;
   int i; int j;

   vif_stms = MakeVector(VIF_ITEM, *item_num, tprocs); 

   for (i=1, j=0; i <= size; ++i)
   { 
      Node *step = *IndexVector(vecstatements, i);
      Int type = Type(step);

      if ( type == VIF_ENTITY_INSTANTIATE_STM )
        { 
          Node *label = Make_label_decl("comp", ++postfix, tprocs);
          Entity_instantiate_stmHas_label(step) = label;
        }
      if ( type != VIF_ALIAS_DECL )
         *IndexVector(vif_stms, ++j) = step;
    }

   /* Now deal with OUTPUT statement */
   if ( j != *item_num ) /* no OUTPUT statement because VOID */
   {
     if ( num_outputs == 1 )
        *IndexVector(vif_stms, ++j) =
           Make_signalassign(*IndexVector(vecoutputs, 1), output, NULL, tprocs);
     else
       if ( Type(output) == VIF_POSITIONAL_ARRAY_AGG ) /* USTR */
       {
          Node *vecvalue = Positional_array_aggHas_assoc_s(output); 
          for ( i=1; i<= num_outputs ; ++i)
          { Node *elem = *IndexVector(vecvalue, i);
            *IndexVector(vif_stms, ++ j) = 
                  Make_signalassign(*IndexVector(vecoutputs, i), 
                         Positional_agg_assocHas_associated_exp(elem),
                         NULL, tprocs);
          }
        }
      else
        if ( Type(output) == VIF_NAMED_ARRAY_AGG ) /* UROW, USTRING */
        {
           Node *vecvalue = Named_array_aggHas_assoc_s(output);
           Node *agg_assoc = *IndexVector(vecvalue, 1);
           Node *elem = Named_agg_assocHas_associated_exp(agg_assoc);
           for ( i=1; i<= num_outputs ; ++i)
           { 
             *IndexVector(vif_stms, ++ j) = 
                  Make_signalassign(*IndexVector(vecoutputs, i),
                                     elem,  NULL, tprocs);
           }
          }
      else  /* UCONC, UNAME, UINDEX, UDYINDEX */
        { 
          Node *ind = CreateNilNode(VIF_INT_32_VALUE, tprocs);
          Node *elem;
           for ( i=1; i<= num_outputs ; ++i)
           {
             Int_32_valueHas_int_32(ind) = MakeScalar(i, tprocs);
             elem = unit_index(output, ind, tprocs);
             *IndexVector(vif_stms, ++ j) = 
                  Make_signalassign(*IndexVector(vecoutputs, i),
                                     elem,  NULL, tprocs);
           }                  
        }
   }

   return( vif_stms );
}

static Node* unittag_vecstm (Node * unittag, Transformer *tprocs)
{ 
   Node *body = UnittagTag(unittag); 
   if ( Type(body) == VIF_VECITEM )
        return body;
   else  
      { Node* vif_stms = MakeVector(VIF_ITEM, 1, tprocs);
        *IndexVector(vif_stms, 1) = body;
        return vif_stms;
      }
}


/****************** FN declaration ***************************************/

static void Transform_fndec (Node *fndec, Transformer *tprocs)
{ 
   int size = Upb(Children(FndecNametypes(fndec)));
   Node* decltable = MakeVector(VIF_ITEM, size, tprocs);
   int* sensitive = (int *)malloc(sizeof(int) * (size+1));
   Fndecinfo *info = (Fndecinfo*)malloc(sizeof(Fndecinfo));

   info->nametypes = FndecNametypes(fndec);
   info->decltable = decltable;
   info->sensitive = sensitive;
   info ->environ = outerenv;
   info -> voidinput = 0;
   info -> voidoutput  = 0;
   NewEnv(ELLA_FNDEC, (Fndecinfo*)(info), tprocs);
 
   unnamed_no = 0; /* resets numbering of unnamed ports */   

   { 
     Int bodytype = Type(FndecFnbody(fndec));
     Node * entity =  CreateNilNode(VIF_ENTITY_DECL, tprocs);
     Int num_inputs = VecSize(FndecInputs(fndec));
     Int num_outputs = VecSize(FndecOutputs(fndec));
     Node *ports = names_vecportdecl(num_inputs, num_outputs, tprocs, info);

     Entity_declHas_id(entity) = makeVIFid(FndecFnname(fndec), tprocs);
     Entity_declHas_port_s(entity) = ports;

     Add_vifitem(entity);

     if ( bodytype != ELLA_ALIENCODE && bodytype != ELLA_SAMPLE )

     { Node * arch =  CreateNilNode(VIF_ARCHITECTURE_BODY, tprocs);
       Node *statements = Transform(FndecFnbody(fndec), tprocs);
       Int num_ports = num_inputs + num_outputs;
     Node *decls = MakeVector(VIF_ITEM, size - num_ports, tprocs);
      int i;
       for ( i = 1; i <= (size - num_ports); i++)
       {  
          *IndexVector(decls, i) = *IndexVector(decltable, i + num_ports);
       }

       Architecture_bodyHas_entity_name(arch) = entity;
       Architecture_bodyHas_id(arch) = makeVIFid(FndecFnname(fndec), tprocs);
       Architecture_bodyHas_decl_s(arch) = decls;
       Architecture_bodyHas_stm_s(arch) = statements;
       Add_vifitem(arch);
     }

   }
}

/*************** OUTERs and CLOSURE ***********************************/

static Node * Make_designunit (Node * unit, Transformer * tprocs)
{
   Node * design = CreateNilNode(VIF_DESIGN_UNIT, tprocs);
   Design_unitHas_unit(design) = unit;
   return design;
}

static int base_typeno  (Node * row, Node *types)
{ /* assumes all rows and strings are of the form []typename */
   int local_ind = 0;
   if ( Type(row) == ELLA_TROW )
     local_ind = ScalarInt(TnameTypeno(TrowElem(row)));
   else if ( Type(row) == ELLA_TSTRING )
     local_ind = ScalarInt(TnameTypeno(TstringChar(row)));
 
   if ( local_ind > 0 )
   { Node *local_type = *IndexVector(types, local_ind);
     Node *usage = TypedecUsage(local_type);
     return ScalarInt(UsageClosureno(usage)); 
   }
   else return 0;
}
   
static void Transform_outer (Node * outer, Transformer *tprocs)
{
  Int ellasort = ScalarInt(OuterSort(outer));
  Node * environ = OuterEnviron(outer);
  outerenv = environ;

  if (ellasort == 3)
     { 
        Node * typedec = *IndexVector(EnvironTypes(environ), 1);
        Transform_typedec(typedec, outer, tprocs);
     }

  else if (ellasort == 5)
     {
       Node * fndec = *IndexVector(EnvironFns(environ), 1);
       Transform_fndec(fndec, tprocs);
     } 
}

static Node* transform_closure (Node *ellaclosure, Transformer *tprocs)
{
   Node *outers = ClosureOuters(ellaclosure);
   Size upb = VecSize(outers);
   int closureno;
   int maxclosureno = 0;
   Node *package = CreateNilNode(VIF_PACKAGE_DECL, tprocs);
 
   for (ellanum = 1; ellanum <= upb; ellanum ++)
   { 
     Node *outer = * IndexVector(outers, ellanum);
     closureno = ScalarInt(OuterClosureno(outer));
     if (closureno > maxclosureno) maxclosureno = closureno;
   }

   unconstrained = (int *)malloc(sizeof(int) * (maxclosureno+1));
   for (closureno = 1; closureno <= maxclosureno; closureno ++)
        unconstrained[closureno] = 1;
   typetable = (int *)malloc(sizeof(int) * (maxclosureno+1));
   for (closureno = 1; closureno <= maxclosureno; closureno ++)
        typetable[closureno] = 0;

   vifnum = 1;
   packnum  = 2; /* delaytime and voidtype */
   for (ellanum = 1; ellanum <= upb; ellanum ++)
   { 
     Node *outer = * IndexVector(outers, ellanum);
     Node *typevec = EnvironTypes(OuterEnviron(outer));

     int ellasort = ScalarInt(OuterSort(outer));
    closureno = ScalarInt(OuterClosureno(outer));
    if (ellasort == 3) 
       {  Node *type = *IndexVector(typevec, 1);
          Node *typebody = TypedecBody(type);
          if ( Type(typebody) == ELLA_TYPETAG )
          { Int base_closno = base_typeno(TypetagTag(typebody), typevec);
            if ( base_closno > 0) 
              { unconstrained[base_closno] = - abs(unconstrained[base_closno]);
                unconstrained[closureno] = base_closno;
              }
          }
          packnum ++;
        }
     if (ellasort == 5)
       { Node *fn = *IndexVector(EnvironFns(OuterEnviron(outer)), 1);
         Int bodytype = Type(FndecFnbody(fn));
         if (bodytype == ELLA_SAMPLE || bodytype == ELLA_ALIENCODE )
              vifnum = (vifnum +1);
         else vifnum = (vifnum +2);
       }
   }
   /* now add number of unconstrained type declarations to package */
   for (closureno = 1; closureno <= maxclosureno; closureno ++)
      if ( unconstrained[closureno] < 0 ) packnum ++;

   packitems = MakeVector(VIF_ITEM, packnum, tprocs);
   vifclosure = MakeVector(VIF_DESIGN_UNIT, vifnum, tprocs);
   vifnum = 1;
   packnum = 0;

   timestep = Make_delaytime(tprocs);
   Add_packitem(timestep);

   tvoid = Make_voidtype(tprocs);
   Add_packitem(tvoid);
   typetable[0] = packnum;
   
   for (ellanum = 1; ellanum <= upb; ellanum ++)
   { 
     Node *outer = * IndexVector(outers, ellanum);
     Transform_outer(outer, tprocs);
   }
   
   Package_declHas_decl_s(package) = packitems;
   *IndexVector(vifclosure, 1) = package;
   return MakeNode(VIF_CLOSURE, Node1(vifclosure), tprocs);
}

/******************* RAM *********************************************/

static Node* ram_info (Node *ram, Transformer *tprocs)
{
  /* generate node used as a way of passing info to layout program */
  Node* vif_stms = MakeVector(VIF_ITEM, 1, tprocs);
  Node *generate = CreateNilNode(VIF_GENERATE_STM, tprocs);
  Node *info = MakeVector(VIF_ITEM, 6, tprocs);
  int portindex;
  for ( portindex =1; portindex <= 5; ++portindex)
     *IndexVector(info, portindex) = nameno_usedobject(portindex, tprocs);
  *IndexVector(info, 6) = RamInit(ram);
  Generate_stmHas_decl_s(generate) = info;
  *IndexVector(vif_stms, 1) = generate;
  return vif_stms;
}

/****************** Bringing it all together ******************************/

extern Transformer* make_ella_vif (Transformer *ellatprocs)
{
   NewTransformproc(ELLA_UCASE, setup_ucase, ellatprocs);
   NewTransformproc(ELLA_LET, setup_let, ellatprocs);
   NewTransformproc(ELLA_ARITH, setup_arith, ellatprocs);
   NewTransformproc(ELLA_USERIES, setup_useries, ellatprocs);

   NewConstructproc(ELLA_FINT, fint_int, ellatprocs);
   NewConstructproc(ELLA_RANGE, range_ascend, ellatprocs);

   NewConstructproc(ELLA_RVALTERNATIVE, rvalternative_enum_literals,ellatprocs);
   NewConstructproc(ELLA_NEWCHARS, newchars_enum_literals, ellatprocs);
   NewConstructproc(ELLA_NEWINTS, newints_constraint, ellatprocs);
   NewConstructproc(ELLA_TYPETAG, typetag_type, ellatprocs);

   NewConstructproc(ELLA_TNAME, tname_enumtype, ellatprocs);
   NewConstructproc(ELLA_TVOID, tvoid_enumtype, ellatprocs);
   NewConstructproc(ELLA_TSTRING, tstring_array, ellatprocs);
   NewConstructproc(ELLA_TROW, trow_array, ellatprocs);
   NewConstructproc(ELLA_TSTR, tstr_elems, ellatprocs);

   NewConstructproc(ELLA_CPRIM, cprim_usedobject, ellatprocs);
   NewConstructproc(ELLA_CINT, cint_usedobject, ellatprocs);
   NewConstructproc(ELLA_CQUOTE, cquote_str, ellatprocs);
   NewConstructproc(ELLA_CPRIMRANGE, cprimrange_range, ellatprocs);
   NewConstructproc(ELLA_CQUERY, cquery_left, ellatprocs);
   NewConstructproc(ELLA_CRANGE, crange_range, ellatprocs);
   NewConstructproc(ELLA_CVOID, cvoid_usedobject, ellatprocs);  

   NewConstructproc(ELLA_UNAME, uname_usedobject, ellatprocs );
   NewConstructproc(ELLA_UCHOICES, uchoice_alt, ellatprocs);
   NewConstructproc(ELLA_UCASE, ucase_if, ellatprocs);
   NewConstructproc(ELLA_USTRING, ustring_aggregate, ellatprocs);
   NewConstructproc(ELLA_UROW, urow_aggregate, ellatprocs);
   NewConstructproc(ELLA_USTR, ustr_aggregate, ellatprocs);
    NewConstructproc(ELLA_UALTS, ualts_choices, ellatprocs);
   NewConstructproc(ELLA_UDYINDEX, udyindex_index, ellatprocs); 
   NewConstructproc(ELLA_UREPLACE, ureplace_process, ellatprocs); 
   NewConstructproc(ELLA_UINDEX, uindex_index, ellatprocs); 
   NewConstructproc(ELLA_UTRIM, utrim_slice, ellatprocs); 
   NewConstructproc(ELLA_UMINST, uminst_inst, ellatprocs);
   NewConstructproc(ELLA_USERIES, useries_vecstm, ellatprocs);
   NewConstructproc(ELLA_UCONC, uconc_conc, ellatprocs);
   NewConstructproc(ELLA_UNULL, unull_null, ellatprocs);

   NewConstructproc(ELLA_LET, let_vif, ellatprocs);

   NewConstructproc(ELLA_ADELAY, delay_after, ellatprocs);
   NewConstructproc(ELLA_IDELAY, idelay_after, ellatprocs);
   NewConstructproc(ELLA_RAM, ram_info, ellatprocs);
   NewConstructproc(ELLA_UNITTAG, unittag_vecstm, ellatprocs);

   NewConstructproc(ELLA_FMOP, fmop_exp, ellatprocs);
   NewConstructproc(ELLA_FDOP, fdop_exp, ellatprocs);
   NewConstructproc(ELLA_FCOND, fcond_exp, ellatprocs);
   NewConstructproc(ELLA_FARITH, farith_exp, ellatprocs);
   NewConstructproc(ELLA_ARITH, arith_exp, ellatprocs);
             
   NewTransformproc(ELLA_CLOSURE, transform_closure, ellatprocs);
   return ellatprocs;
}
 
