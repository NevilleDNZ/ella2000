
          /*          VHDL layout program       */

#include "config.h"

CF_MODULE( vif_layout_init, \
    "$Id: vif_layout.c,v 2.4 1995/03/29 13:05:24 ella Exp $" )


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
12:01:95   1.002  DJS    Re-programed where there was a vector declaration with
                        a variable size. 
21:03:95   1.003  EVW   Various corrections 
29:03:95   2.004  ELLA  Change copyright header
??:??:??   ?.???  ????
*/

#include <stdio.h>
#include <stdlib.h>

#include "heap.h"
#include "cmodes.h"
#include "layprocs.h"
#include "vif_layout.h"

#define input MakeScalar(1, tprocs)


static int eq_sort (Node *value, int sort)
{
   return ( ScalarInt(value) == sort );
}

static Node *layout_string (Node *string, Transformer *tprocs)
{
  char *str = IdValue( String_valueHas_str_rep(string) );
  int len = strlen(str);
  char *buff = HEAPN( char, len + 3 );
  Node *result;

  sprintf( buff, "\"%s\"", str);
  result = MakeId( buff, tprocs);
  free( buff );  /* MakeId heaps buff ( not very efficient but that`s C
                                        for you ) */
  return result;
}

static int eq_id (char *a, char *b)
{ 
   return strcmp(a, b) == 0; 
}

static Node* Make_bracket (Node *l_body)
{
   return lbracket(lstring("("), l_body, lstring(")") );
}

static Node * layout_secid (Node *N, Transformer *tprocs);

/* ---------------- Integer expressions -----------------------------*/

static Node* layout_int32 (Node *int32, Transformer *tprocs)
{
  return int_id(Int_32_valueHas_int_32(int32));
}

static Node* layout_range (Node *range, Transformer *tprocs)
{
   Node *left = Ascending_range_constraintHas_left_bound(range);
   Node *right = Ascending_range_constraintHas_right_bound(range);
   return hlist3(left, lstring("TO"), right);
}

static int mop_precedence ( Node *opid )
{
   char * op = IdValue(opid);
   if ( eq_id(op, "ABS") ||  eq_id(op, "NOT") )
          return 1; 
   else if ( eq_id(op, "+") ||  eq_id(op, "-") ) 
          return 3; 
   else  return 0;
}

static int dop_precedence ( Node *opid )
{
   char * op = IdValue(opid);
   if ( eq_id(op, "**") )
      return 1; 
  else if ( eq_id(op, "*") ||  eq_id(op, "/") ||  eq_id(op, "MOD") ||
           eq_id(op, "REM") )
      return 2;
  else if ( eq_id(op, "+") ||  eq_id(op, "-") ||  eq_id(op, "&") )
      return 4; 
  else if ( eq_id(op, "SLL") ||  eq_id(op, "SRL") ||  eq_id(op, "SLA") || 
           eq_id(op, "SRA") ||  eq_id(op, "ROL") ||  eq_id(op,"ROR") )
      return 5; 
  else if ( eq_id(op, "=") ||  eq_id(op, "/=") ||  eq_id(op, "<") ||
           eq_id(op, "<=") ||  eq_id(op, ">") ||  eq_id(op, ">=") ) 
      return 6;
 else if (  eq_id(op, "NAND") ||
          eq_id(op, "NOR") ||  eq_id(op, "XOR") ||  eq_id(op,"XNOR") )
      return 7; 
 else if ( eq_id(op, "OR") ) 
   /* for some reason VHDL sometimes wants order of AND/OR bracketed */
      return 8; 
 else if ( eq_id(op, "AND") ) 
   /* for some reason VHDL sometimes wants order of AND/OR bracketed */
      return 9; 
 else  return 0; 
}

static int Get_precedence (Node *l_binary)
{
   int tok = Type(l_binary);
   if ( tok == LAY_HLIST )
     if ( VecSize(HlistList(l_binary)) == 2 ) /* monadic */
          return mop_precedence(*IndexVector(HlistList(l_binary), 1));
     else return dop_precedence(*IndexVector(HlistList(l_binary), 2));
   else return 0;
}

 
static Node* layout_unary (Node * unary, Transformer *tprocs)
{
   Node *op = Unary_operationHas_func_name(unary);
   Node *opid = Implicit_operator_declHas_id(op);
   Node *l_opid = Transform(opid, tprocs);

   Node *right = Unary_operationHas_right_exp(unary);
   int op_prec = mop_precedence(l_opid);
   int right_prec = Get_precedence(right);   
   if ( op_prec < right_prec )  right = Make_bracket(right);

   return hlist2( l_opid, right );
}

static int need_bracket (int op_prec, int exp_prec)
{
   return ( ( op_prec == 9 &&  exp_prec == 8 ) || /* copes with AND/OR */
            ( op_prec < exp_prec )
          );
}

static Node* layout_binary (Node * binary, Transformer *tprocs)
{
   Node *op = Binary_operationHas_func_name(binary);
   Node *opid = Implicit_operator_declHas_id(op);
   Node *l_opid = Transform(opid, tprocs);

   Node *left = Binary_operationHas_left_exp(binary);        
   Node *right = Binary_operationHas_right_exp(binary);
   int op_prec = dop_precedence(l_opid);
   int left_prec = Get_precedence(left);
   int right_prec = Get_precedence(right);

   if ( need_bracket(op_prec, left_prec) ) left = Make_bracket(left);
   if ( need_bracket(op_prec, right_prec) ) right = Make_bracket(right);
   return hlist3( left, l_opid, right );
}

/*----------- VHDL name options ---------------------------------------*/

static Node* layout_selected (Node *selected, Transformer *tprocs)
{
   Node *prefix = Selected_elementHas_prefix(selected);
   Node *suffix = layout_secid(Selected_elementHas_suffix(selected), tprocs);
   return hlist3(prefix, lstring("."), suffix);
}

static Node* layout_indexed (Node *indexed, Transformer *tprocs)
{
   Node *base = IndexedHas_prefix(indexed);
   Node *index = hvec(IndexedHas_index_exp_s(indexed), lstring(""), lstring(""));
   return hlist4(base, lstring("("), index, lstring(")"));
}

static Node* layout_slice (Node *slice, Transformer *tprocs)
{
   Node *base = SliceHas_prefix(slice);
   Node *range = Transform(SliceHas_index_range(slice), tprocs);
   return hlist4(base, lstring("("), range, lstring(")"));
}

static Node* layout_convert (Node *, Transformer *);

static Node * layout_nonconstraint (Node *, Transformer *);

/* --------------- Predefined attributes -------------------------- */

static Node * layout_predefined ( Node *pre, Transformer *tprocs)
{
  Node *attid =  Pre_defined_att_declHas_id(pre);
  Node *l_attid = Transform(attid, tprocs);
  return l_attid;
}

static Node * layout_simpleattr ( Node *att, Transformer *tprocs)
{
 Node *leftid = Transform(Simple_attribute_refHas_attribute(att), tprocs);
 return hlist3(Simple_attribute_refHas_attribute_prefix(att),
                lstring("'"), leftid );

}

static Node * layout_indexedattr ( Node *att, Transformer *tprocs)
{
 Node *attrid = Transform(Indexed_attribute_refHas_attribute(att), tprocs);
 return hlist4( Indexed_attribute_refHas_attribute_prefix(att),
                lstring("'"), attrid,
                lbracket(lstring("("), Indexed_attribute_refHas_index(att),
                         lstring(")") )
              );

}

/*----------------------- Uses of Identifiers ------------------------ */

static Node* layout_symbolentry (Node * entry, Transformer *tprocs)
{ 
   return lstring(IdValue(Symbol_entry_in_tableHas_simple_name(entry)));
  
}


static Node* sec_entitydecl (Node *objdef, Transformer *tprocs)
{
  Node *entityid = Entity_declHas_id(objdef);
  Node *l_entityid = Transform(entityid, tprocs);
  return l_entityid;
}

static Node*  sec_phyunit (Node *objdef, Transformer *tprocs)
{
  Node *phyunit = Phy_unit_declHas_id(objdef);
  Node *l_phyunit = Transform(phyunit, tprocs);
  return l_phyunit;
}


static Node* sec_portdecl (Node * objdef, Transformer *tprocs)
{
   Node *name = Port_declHas_id(objdef);
   Node *l_name = Transform(name, tprocs);
   return l_name;   
}

static Node* sec_constdecl (Node *objdef, Transformer *tprocs)
{
  Node *name = Constant_declHas_id(objdef);
  Node *l_name = Transform(name, tprocs);
  return l_name;
}

static Node* sec_charlit (Node *objdef, Transformer *tprocs)
{
  Node *charid =  Char_literal_declHas_id(objdef);
  char *l_charid = IdValue(Transform(charid, tprocs));
  char buff[3];
  buff[0] = '\'';
  buff[1] = l_charid[0];
  buff[2] = '\'';
  buff[3] = NULL;
  return MakeId(buff, tprocs);
}

static Node* sec_enumlit (Node *objdef, Transformer *tprocs)
{
  Node *enumid =  Enum_literal_declHas_id(objdef);
  Node *l_enumid = Transform(enumid, tprocs);
  return l_enumid;
}

static Node* sec_enumtype (Node *objdef, Transformer *tprocs)
{
  Node *enumtype =  Enum_type_declHas_id(objdef);
  Node *l_enumtype = Transform(enumtype, tprocs);
  return l_enumtype;
}

static Node* sec_inttype (Node *objdef, Transformer *tprocs)
{
  Node *inttype =  Integer_type_declHas_id(objdef);
  Node *l_inttype = Transform(inttype, tprocs);
  return l_inttype;
}

static Node* sec_elemdecl (Node *objdef, Transformer *tprocs)
{
  Node *elemdecl =  Element_declHas_id(objdef);
  Node *l_elemdecl = Transform(elemdecl, tprocs);
  return l_elemdecl;
}

static Node* sec_array (Node *objdef, Transformer *tprocs)
{
  Node *arraytype =  General_subtype_declHas_id(objdef);
  Node *l_arraytype = Transform(arraytype, tprocs);
  return l_arraytype;
}

static Node* sec_uncon (Node *objdef, Transformer *tprocs)
{
  Node *arraytype =  Unconstrained_array_type_declHas_id(objdef);
  Node *l_arraytype = Transform(arraytype, tprocs);
  return l_arraytype;
}

static Node* sec_record (Node *objdef, Transformer *tprocs)
{
  Node *recordtype =  Record_type_declHas_id(objdef);
  Node *l_recordtype = Transform(recordtype, tprocs);
  return l_recordtype;
}

static Node* sec_phytype (Node *objdef, Transformer *tprocs)
{
  Node *phytype =  Physical_type_declHas_id(objdef);
  Node * l_phytype = Transform(phytype, tprocs);
  return l_phytype;
}


static Node* sec_sigdecl (Node *objdef, Transformer *tprocs)
{
  Node *sigid = Signal_declHas_id(objdef);
  Node *l_sigid = Transform(sigid, tprocs);
  return l_sigid;
}

static Node* sec_vardecl (Node *objdef, Transformer *tprocs)
{
  Node *varid = Variable_declHas_id(objdef);
  Node *l_varid = Transform(varid, tprocs);
  return l_varid;
}

static Node* sec_aliasdecl (Node *objdef, Transformer *tprocs)
{
  Node *aliasid = Alias_declHas_id(objdef);
  Node *l_aliasid = Transform(aliasid, tprocs);
  return l_aliasid;
}

static Node* sec_used (Node *used, Transformer *tprocs)
{
   Node *usedid =  General_used_objectHas_obj_def(used);
   Node *l_used = Transform(usedid, tprocs);
   return l_used;
}


static Transformer* make_secondary_procs (Transformer * primary)
{
  NewConstructproc(VIF_CHAR_LITERAL_DECL, sec_charlit, primary);
  NewConstructproc(VIF_ENUM_LITERAL_DECL, sec_enumlit, primary);
  NewConstructproc(VIF_ENUM_TYPE_DECL, sec_enumtype, primary);
  NewConstructproc(VIF_ELEMENT_DECL, sec_elemdecl, primary);
  NewConstructproc(VIF_INTEGER_TYPE_DECL, sec_inttype, primary);
  NewConstructproc(VIF_GENERAL_SUBTYPE_DECL, sec_array, primary);
  NewConstructproc(VIF_UNCONSTRAINED_ARRAY_TYPE_DECL, sec_uncon, primary);
  NewConstructproc(VIF_RECORD_TYPE_DECL, sec_record, primary);
  NewConstructproc(VIF_PHY_UNIT_DECL, sec_phyunit, primary);
  NewConstructproc(VIF_PHYSICAL_TYPE_DECL, sec_phytype, primary);
  NewConstructproc(VIF_PORT_DECL, sec_portdecl, primary); 
  NewConstructproc(VIF_CONSTANT_DECL, sec_constdecl, primary); 
  NewConstructproc(VIF_SIGNAL_DECL, sec_sigdecl, primary); 
  NewConstructproc(VIF_VARIABLE_DECL, sec_vardecl, primary); 
  NewConstructproc(VIF_ALIAS_DECL, sec_aliasdecl, primary); 
  NewConstructproc(VIF_ENTITY_DECL, sec_entitydecl, primary); 
  NewConstructproc(VIF_GENERAL_USED_OBJECT, sec_used, primary);
  return primary;
}

/*  primary and secondary procs assigned in make_vif_layout */
static Transformer * primary_procs;
static Transformer * secondary_procs;
static Transformer * current_procs;

static void setup_procs (Transformer * procs)
{
  setuplayout(procs);

  current_procs = procs;
}

 
static Node * layout_secid (Node *N, Transformer *tprocs)
{
   Node *l_N;
   setup_procs(secondary_procs);
   l_N = Transform(N, current_procs);
   setup_procs(primary_procs);
   return l_N;
}

static Node* layout_usedobject (Node * usedobject, Transformer *tprocs)
{
   Node *objdef = General_used_objectHas_obj_def(usedobject);
   Node *used = layout_secid(objdef, tprocs);
   return used;
}

static Node * layout_nonconstraint (Node * nonconstraint, Transformer *tprocs)
{
   Node *typedec = Non_constraintIs_type(nonconstraint);
   return layout_secid(typedec, tprocs);
 }


static Node* layout_named (Node *named, Transformer *tprocs)
{
  Node *item = General_named_entityHas_named_entity_def(named);
  return layout_secid(item, tprocs);
}
   


/* ---------------- Physical time ------------------------------- */


static Node* layout_phyvalue (Node *phyvalue, Transformer *tprocs)
{
  Node *base = layout_secid(Physical_valueHas_base(phyvalue), tprocs);
  return hlist2(Physical_valueHas_value(phyvalue), base);
}

static Node* layout_numeric (Node *numeric, Transformer *tprocs)
{
  return Numeric_valueHas_value(numeric);
}

/* --------------- Constant declaration ------------------------ */

static Node* layout_constdecl (Node *constdecl, Transformer *tprocs)
{
   return hlist6(lstring("CONSTANT"),
                 Constant_declHas_id(constdecl),
                 lstring(":"),
                 Constant_declHas_constraint(constdecl),
                 lstring(":="),
                 Constant_declHas_value_exp(constdecl)
                );
}

/* ---------------- Type declarations ------------------------------- */

static Node* layout_enumdecl (Node * enumdecl, Transformer *tprocs)
{
   return Enum_literal_declHas_id(enumdecl);
}

static Node* layout_chardecl (Node * chardecl, Transformer *tprocs)
{
   Node *charid = Char_literal_declHas_id(chardecl);
   char *l_charid = IdValue(Transform(charid, tprocs));
   char buff[3];
   buff[0] = '\'';
   buff[1] = l_charid[0];
   buff[2] = '\'';
   buff[3] = NULL;
   return MakeId(buff, tprocs);
}


static Node* layout_typedecl (Node * typedec, Transformer *tprocs)
{       
   Node *id =  Enum_type_declHas_id(typedec);
   Node *enumerals =
         lbracket ( lstring("("), 
                    hvec( Enum_type_declHas_enumeral_s(typedec),
                                  lstring(","), lstring("")),
                    lstring(")") );

   return
      lpair ( hlist3(lstring("TYPE"), id, lstring("IS")), enumerals  );
}

static Node* layout_inttype (Node * inttype, Transformer *tprocs)
{
   Node *id = Integer_type_declHas_id(inttype);
   Node *range = Integer_type_declHas_constraint(inttype);

   return hlist4(lstring("TYPE"), id, lstring("IS RANGE"), range);
}


static Node* layout_subtypedecl (Node * subtype, Transformer *tprocs)
{
   Node *id = General_subtype_declHas_id(subtype);
   Node *uncon = General_subtype_declHas_constraint(subtype);
   return hlist4(lstring("SUBTYPE"), id, lstring("IS"), uncon );
}

static Node* layout_uncon (Node * arraytype, Transformer *tprocs)
{
   Node *id = Unconstrained_array_type_declHas_id(arraytype);
   Node *subtype = Unconstrained_array_type_declHas_elem_subtype(arraytype);

   return hlist4(lstring("TYPE"), id, 
                 lstring("IS ARRAY ( INTEGER RANGE <> ) OF"),
                 subtype );
}

static Node* layout_elemdecl (Node * elemdecl, Transformer *tprocs)
{
  return hlist3( Element_declHas_id(elemdecl), lstring(":"),
                 Element_declHas_constraint(elemdecl)
                );
}

static Node* layout_record (Node * recordtype, Transformer *tprocs)
{
  Node *id = Record_type_declHas_id(recordtype);
  Node *elems = vvec(Record_type_declHas_element_s(recordtype),
                     lstring(";"), lstring(";"));
  return hlist4(lstring("TYPE"), id, lstring("IS"),
                lbracket(lstring("RECORD"), elems,lstring("END RECORD"))
               );
}
     
static Node* layout_subtype (Node *subtype, Transformer *tprocs)
{
  return Subtype_indicatorHas_constraint(subtype);
}

static Node *layout_indexconstraint (Node *index, Transformer *tprocs)
{
  return hlist4( layout_secid(Index_constraintIs_type(index), tprocs),
                 lstring("("),
                 Index_constraintHas_index_range_s(index),
                 lstring(")")
               );
}
            
/* --------------------      ------------------- */
                    
static Node* layout_portdecl (Node * portdecl, Transformer *tprocs)
{
  Node *constraint = Port_declHas_constraint(portdecl);
  
  Node *signalkind = ( eq_sort(Port_declHas_mode(portdecl), 1) 
                             ? lstring("IN") : lstring("OUT") );

  Node *defvalue
      = ( IsNil(Port_declHas_default(portdecl)) 
          ?  constraint
          :  hlist3(constraint, lstring(":="), 
                         Port_declHas_default(portdecl))
        );
   return hlist4(Port_declHas_id(portdecl), lstring(":"),
                       signalkind, defvalue);
} 


static Node* layout_labeldecl (Node * labeldecl, Transformer *tprocs)
{
  return Label_declHas_id(labeldecl);
}

static Node* layout_waveform (Node * waveform, Transformer *tprocs)
{
   Node * time = Waveform_elementHas_time_exp(waveform);
   Node *exp = Waveform_elementHas_waveform_value_exp(waveform);
   if ( IsNil(time) )
      return exp;
   else
      return hlist3(exp, lstring("AFTER"), time);
}

static Node* layout_actual  (Node *actual, Transformer *tprocs)
{
   return Complete_association_of_formalHas_actual(actual);
}

static Node* layout_arrayagg (Node *arrayagg, Transformer *tprocs)
{
  Node *array = hvec(Positional_array_aggHas_assoc_s(arrayagg),
                     lstring(","), lstring(""));
  return lbracket(lstring("("), array, lstring(")"));
}

static Node *layout_aggassoc (Node *aggassoc, Transformer *tprocs)
{
  return Positional_agg_assocHas_associated_exp(aggassoc);
}

static Node* layout_namedarray (Node *namedarray, Transformer *tprocs)
{
  Node *array = hvec(Named_array_aggHas_assoc_s(namedarray),
                     lstring(","), lstring(""));
  return lbracket(lstring("("), array, lstring(")"));
}

static Node *layout_namedagg (Node *namedagg, Transformer *tprocs)
{
  return hlist4( lstring("1 to"),
                 Named_agg_assocIs_associated_up_to(namedagg),
                 lstring("=>"),
                 Named_agg_assocHas_associated_exp(namedagg)
               );
}

static Node* layout_convert (Node *convert, Transformer *tprocs)
{
   Node *typemark =
        layout_secid(Type_conversionHas_constraint(convert), tprocs);
   Node *exp = Type_conversionHas_converted_exp(convert);
     return hlist4(typemark, lstring("("), exp, lstring(")"));
}


/*************** CONCURRENT_STM *****************************************/

static Node* layout_signalassign (Node * signalassign, Transformer *tprocs)
{ 
   Node *waveforms = Signal_assign_stmHas_waveform_s(signalassign);
   Node * layoutwaveforms = vvec(waveforms, lstring(","), lstring(""));
   Int inertial = ScalarInt(Signal_assign_stmHas_transport(signalassign));
  
   Node * inertialstr = 
     ( inertial ? lstring("<= INERTIAL") : lstring("<=") );

   return ( hlist3(Signal_assign_stmHas_signal_name(signalassign),
                   inertialstr, 
                   layoutwaveforms
                   )         
          );
}

static Node* layout_inst (Node *inst, Transformer *tprocs)
{
   Node *entity = Entity_instantiate_stmHas_bound_entity(inst);
   Node *l_entityname = layout_secid(entity, tprocs);
   Node *ports = Entity_instantiate_stmHas_port_assoc_s(inst);
   Node *l_ports = hvec(ports, lstring(","), lstring("") );

   return lpair( hlist3( Entity_instantiate_stmHas_label(inst),
                         lstring(": ENTITY WORK."),
                         l_entityname
                       ),
                 hlist2( lstring("PORT MAP"),
                         lbracket( lstring("("), l_ports, lstring(")") )
                       )       
               );
}

static Node* layout_wait (Node *wait, Transformer *tprocs)
{
  return hlist2(lstring("WAIT FOR"),
                layout_secid(Wait_stmHas_time_limit(wait), tprocs)
               );
}

static Node* layout_if (Node * if_stm, Transformer *tprocs)
{
   Node *alts = If_stmHas_alternative_s(if_stm);
   int upb = VecSize(alts);
   Node *veclay = MakeVector(LAY_LAYOUT, upb, tprocs);
   Node *l_if;   
   int i;
   for (i = 1; i <= upb; i++)
   {
     Node *alt = *IndexVector(alts, i);
     Node *cond = Cond_alternativeHas_condition(alt);
     Node *output = vvec(Cond_alternativeHas_stm_s(alt),
                         lstring(";"), lstring(";"));

     if (i==1)
       { l_if = hlist2(lstring("IF"), cond);
         *IndexVector(veclay, i) = hlist2( lstring("THEN"), output );
       }
     
     else if (i == upb)
       *IndexVector(veclay, i) = hlist2(lstring("ELSE"), output);

     else
        {
          Node *laycond = hlist2(lstring("ELSIF"), cond);
          *IndexVector(veclay, i) = 
               vlist2( laycond, 
                       hlist2( lstring("THEN"), output )
                      );
        }
   }
   return lbracket (l_if, vlist(veclay), lstring("END IF"));
}

static Node* layout_sigdecl (Node *sigdecl, Transformer *tprocs)
{
  return
   hlist4( lstring("SIGNAL"),
           Signal_declHas_id(sigdecl),
           lstring(":"),
           Signal_declHas_constraint(sigdecl)
          );
}

static Node* layout_aliasdecl (Node *aliasdecl, Transformer *tprocs)
{
  return
   hlist4( lstring("ALIAS"),
           Alias_declHas_id(aliasdecl),
           lstring("IS"),
           Alias_declHas_aliased_object(aliasdecl)
          );
}


static Node* layout_vardecl (Node *vardecl, Transformer *tprocs)
{
 return
   hlist4( lstring("VARIABLE"),
           Variable_declHas_id(vardecl),
           lstring(":"),
           Variable_declHas_constraint(vardecl)
          );
}
 
static Node* layout_varassign (Node *varassign, Transformer *tprocs)
{
  return
     hlist3(Variable_assign_stmHas_variable_name(varassign),
            lstring(":="),
            Variable_assign_stmHas_assigned_exp(varassign)
           );
}

static Node* layout_process (Node *process, Transformer *tprocs)
{
  Node * sensitivity = 
    lbracket(lstring("("),
              hvec(Process_stmHas_sensitivity_s(process), lstring(","),
                   lstring("")),
             lstring(")")
            );
  Node * stms = vvec(Process_stmHas_stm_s(process), lstring(";"),
                     lstring(";") );   
  if ( IsNil(Process_stmHas_decl_s(process)) )                 
     return vlist2( hlist2(lstring("PROCESS"), sensitivity),
                    lbracket(lstring("BEGIN"), stms, lstring("END PROCESS"))
                  );
  else
     return vlist3( hlist2(lstring("PROCESS"), sensitivity),
                    vvec(Process_stmHas_decl_s(process), lstring(";"),
                         lstring(";")),
                    lbracket(lstring("BEGIN"), stms, lstring("END PROCESS"))
                  );

}

/* ---------------- ELLA RAM equivalent ------------------------------- */
/* A bit of a fix here to save generating all the internal Nodes for a ram */

static Node* port_type (Node *used_port, Transformer *tprocs)
{
   Node* portdecl = General_used_objectHas_obj_def(used_port);
   Node *constraint = Port_declHas_constraint(portdecl);
   return layout_nonconstraint(constraint, tprocs);
}

static Node* setup_ram  (Node *ram, Transformer *tprocs)
{
   NewEnv(VIF_GENERATE_STM, (Node*)(Generate_stmHas_decl_s(ram)), tprocs);
   return NullTransform(ram, tprocs);
}

static Node * layout_ram (Node *ram, Transformer *tprocs)
{
   /* Note use of generate stm to hold ram info - could be any node */
   /* with vector as one of its children                            */
   Node *vecdata = Generate_stmHas_decl_s(ram);
   Node *ram_in = *IndexVector(vecdata, 1);
   Node *writeaddr = *IndexVector(vecdata, 2);
   Node *readaddr = *IndexVector(vecdata, 3);
   Node *enabled = *IndexVector(vecdata, 4);
   Node *output = *IndexVector(vecdata, 5);
   Node *initial = *IndexVector(vecdata, 6);

   Node *original = (Node *)GetEnv(VIF_GENERATE_STM, tprocs);
   Node *addr = port_type(*IndexVector(original, 2), tprocs);
   Node *data = port_type(*IndexVector(original, 1), tprocs);
   Node *enable = port_type(*IndexVector(original, 4), tprocs);

   Node *comma = lstring(",");
   Node *semi = lstring(";");
   Node *sensitivity = 
     hlist7(ram_in, comma, writeaddr, comma, readaddr, comma, enabled); 

   Node *then_stm =
     vlist2(
       lbracket( hlist4( lstring("IF"), readaddr, lstring("="), writeaddr ),
                 vlist2( hlist5(lstring("THEN"), output,
                                lstring("<="), ram_in, semi),
                         hlist5(lstring("ELSE"), output, 
                                lstring("<= mem ("), readaddr, lstring(") ;") )
                       ),
                 lstring("END IF ;")
               ),
        hlist5( lstring("mem ("), writeaddr, lstring(") :="), ram_in, semi)
            );
                          
  Node * if_stm =
    lbracket( hlist4( lstring("IF"), enabled, lstring("="), 
                      hlist2 ( enable, lstring("'LEFT")) 
                   ),
               vlist2( hlist2(lstring("THEN"), then_stm),
                       hlist5(lstring("ELSE"), output, 
                              lstring("<= mem ("), readaddr, lstring(") ;") )
                     ),
               lstring("END IF ;")
            );
                       
   return
     vlist4( lbracket( lstring("PROCESS ("), sensitivity, lstring(")") ),
             hlist5( lstring("TYPE mem_array IS ARRAY ("),
                     addr, lstring(") OF"), data, semi),
             hlist4( lstring("VARIABLE mem : mem_array := ( OTHERS =>"),
                     initial, lstring(")"), semi),
             lbracket(lstring("BEGIN"), if_stm, lstring("END PROCESS") )
           );
}


/* ---------------- Design units ----------------------------------------- */

static Node* layout_package (Node* package, Transformer *tprocs)
{
   return vlist2(lstring(""),
                 lbracket( lstring("PACKAGE ELLATYPES IS"),
                           vvec(Package_declHas_decl_s(package),
                                 lstring(";"), lstring(";") ),
                           lstring("END ELLATYPES")
                 ));
}

static Node* layout_entity (Node * entity, Transformer *tprocs)
{
  Node *ports = Entity_declHas_port_s(entity);


  Node *layoutports =
      ( VecSize(ports)   
        ? lpair ( lstring("PORT"),
                  lbracket(lstring("("),
                           vvec(ports, lstring(";"), lstring("")), lstring(");")
                          )
                 )
        : lstring(" ")
      );

   Node *use = lstring("USE WORK.ELLATYPES.ALL;");

   Node *entitydecl =
    lbracket( hlist3( lstring("ENTITY"),
                      Entity_declHas_id(entity), lstring("IS")),
                layoutports,
                lstring("END")
              );

   return vlist3(lstring(""), use, entitydecl);
}

static Node* layout_architecture (Node * arch, Transformer *tprocs)
{
   Node *entitydecl = Architecture_bodyHas_entity_name(arch);
   Node * entityname = Entity_declHas_id(entitydecl);
   Node *l_entityname = Transform(entityname, tprocs);
   Node *decls = ( (VecSize(Architecture_bodyHas_decl_s(arch)) == 0)
                   ? lstring("")                
                   : vvec(Architecture_bodyHas_decl_s(arch), 
                          lstring(";"), lstring(";"))
                 );

   return
       vlist4( lstring(""),
                hlist5( lstring("ARCHITECTURE"), 
                        Architecture_bodyHas_id(arch),
                        lstring("OF"), l_entityname, lstring("IS")
                      ),
                decls,
                lbracket(lstring("BEGIN"),
                        vvec(Architecture_bodyHas_stm_s(arch),         
                              lstring(";"), lstring(";")),
                        lstring("END")
                       )
             ); 

} 

static Node* layout_designunit (Node * designunit, Transformer *tprocs)
{
   return vlist2(lstring(" $$"),  Design_unitHas_unit(designunit) );
}

static Node* layout_vifclosure (Node * closure, Transformer *tprocs)
{  
   return vvec(ClosureHas_design_unit_s(closure),
                        lstring(";"), lstring(";") );
}


Transformer* make_primary_procs (Transformer *layouttprocs)
{  
  NewConstructproc(VIF_STRING_VALUE, layout_string, layouttprocs);

  NewConstructproc(VIF_PHYSICAL_VALUE, layout_phyvalue, layouttprocs);
  NewConstructproc(VIF_NUMERIC_VALUE, layout_numeric, layouttprocs);
  NewConstructproc(VIF_CONSTANT_DECL, layout_constdecl, layouttprocs);

  NewConstructproc(VIF_PRE_DEFINED_ATT_DECL, layout_predefined, layouttprocs);
  NewConstructproc(VIF_SIMPLE_ATTRIBUTE_REF, layout_simpleattr, layouttprocs);
  NewConstructproc(VIF_INDEXED_ATTRIBUTE_REF, layout_indexedattr, layouttprocs);
  NewConstructproc(VIF_GENERAL_NAMED_ENTITY, layout_named, layouttprocs);

  NewConstructproc(VIF_INT_32_VALUE, layout_int32, layouttprocs);
  NewConstructproc(VIF_ASCENDING_RANGE_CONSTRAINT, layout_range, layouttprocs);
  NewConstructproc(VIF_UNARY_OPERATION, layout_unary, layouttprocs);
  NewConstructproc(VIF_BINARY_OPERATION, layout_binary, layouttprocs);

  NewConstructproc(VIF_ENUM_LITERAL_DECL, layout_enumdecl, layouttprocs);
   NewConstructproc(VIF_CHAR_LITERAL_DECL, layout_chardecl, layouttprocs); 
  NewConstructproc(VIF_ENUM_TYPE_DECL, layout_typedecl, layouttprocs);
  NewConstructproc(VIF_INTEGER_TYPE_DECL, layout_inttype, layouttprocs);
  NewConstructproc(VIF_GENERAL_SUBTYPE_DECL, layout_subtypedecl, layouttprocs);
  NewConstructproc(VIF_UNCONSTRAINED_ARRAY_TYPE_DECL, layout_uncon,
                   layouttprocs);
  NewConstructproc(VIF_SUBTYPE_INDICATOR, layout_subtype, layouttprocs);
  NewConstructproc(VIF_INDEX_CONSTRAINT, layout_indexconstraint, layouttprocs);
  NewConstructproc(VIF_ELEMENT_DECL, layout_elemdecl, layouttprocs);
  NewConstructproc(VIF_RECORD_TYPE_DECL, layout_record, layouttprocs);
  
   
   NewConstructproc(VIF_GENERAL_NAMED_ENTITY, layout_named, layouttprocs);
  NewConstructproc(VIF_SYMBOL_ENTRY_IN_TABLE, layout_symbolentry, layouttprocs);
  NewConstructproc(VIF_GENERAL_USED_OBJECT, layout_usedobject, layouttprocs);
  NewConstructproc(VIF_COMPLETE_ASSOCIATION_OF_FORMAL, layout_actual,
                   layouttprocs);
  NewConstructproc(VIF_NON_CONSTRAINT, layout_nonconstraint, layouttprocs);
  NewConstructproc(VIF_POSITIONAL_ARRAY_AGG, layout_arrayagg, layouttprocs);
  NewConstructproc(VIF_POSITIONAL_AGG_ASSOC, layout_aggassoc, layouttprocs);
   NewConstructproc(VIF_NAMED_ARRAY_AGG, layout_namedarray, layouttprocs);
  NewConstructproc(VIF_NAMED_AGG_ASSOC, layout_namedagg, layouttprocs);
  NewConstructproc(VIF_SELECTED_ELEMENT, layout_selected, layouttprocs);
  NewConstructproc(VIF_INDEXED, layout_indexed, layouttprocs);
  NewConstructproc(VIF_SLICE, layout_slice, layouttprocs);
  NewConstructproc(VIF_TYPE_CONVERSION, layout_convert, layouttprocs);

  NewConstructproc(VIF_PORT_DECL, layout_portdecl, layouttprocs);
  NewConstructproc(VIF_LABEL_DECL, layout_labeldecl, layouttprocs);
  NewConstructproc(VIF_WAVEFORM_ELEMENT, layout_waveform, layouttprocs);
  NewConstructproc(VIF_SIGNAL_ASSIGN_STM, layout_signalassign, layouttprocs);
  NewConstructproc(VIF_ENTITY_INSTANTIATE_STM, layout_inst, layouttprocs);
  NewConstructproc(VIF_IF_STM, layout_if, layouttprocs);
  NewConstructproc(VIF_WAIT_STM, layout_wait, layouttprocs);
  NewConstructproc(VIF_SIGNAL_DECL, layout_sigdecl, layouttprocs);
  NewConstructproc(VIF_ALIAS_DECL, layout_aliasdecl, layouttprocs);
  NewConstructproc(VIF_VARIABLE_DECL, layout_vardecl, layouttprocs);
  NewConstructproc(VIF_VARIABLE_ASSIGN_STM, layout_varassign, layouttprocs);
  NewConstructproc(VIF_PROCESS_STM, layout_process, layouttprocs);

  NewConstructproc(VIF_GENERATE_STM, layout_ram, layouttprocs);
  NewConstructproc(VIF_PACKAGE_DECL, layout_package, layouttprocs);
  NewConstructproc(VIF_ENTITY_DECL, layout_entity, layouttprocs);
  NewConstructproc(VIF_ARCHITECTURE_BODY, layout_architecture, layouttprocs);
  NewConstructproc(VIF_DESIGN_UNIT, layout_designunit, layouttprocs);
  NewConstructproc(VIF_CLOSURE, layout_vifclosure, layouttprocs);

  NewTransformproc(VIF_GENERATE_STM, setup_ram, layouttprocs);

  return layouttprocs;
}


Transformer* make_vif_layout (Transformer *layouttprocs)
{
  Transformer *nullprocs =
        MakeNullTransformer(TransformerObjtable(layouttprocs),
                            TransformerImgtable(layouttprocs));
  Transformer *primary = make_primary_procs(nullprocs);
  secondary_procs  = make_secondary_procs(primary);

  primary_procs = make_primary_procs(layouttprocs);
  
  setup_procs(primary_procs);

  return layouttprocs;

}

