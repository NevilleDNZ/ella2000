
          /*          ELLA layout program       */

#include "config.h"

CF_MODULE( ella_layout_init, \
    "$Id: ella_layout.c,v 2.3 1995/03/29 13:05:20 ella Exp $" )


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
21:03:95   1.002  DJS   Use enumerated constants
29:03:95   2.003  ELLA  Change copyright header
??:??:??   ?.???  ????
*/

#include <stdio.h>
#include "cmodes.h"
#include "layprocs.h"
#include "ella_layout.h"

static Node* environ;
static Node* setupenviron (Node* outer, Transformer *tprocs)
{
   environ = OuterEnviron(outer);
   return NullTransform(outer, tprocs);
}


static Node* setupnametypes (Node* fndec, Transformer *tprocs)
{
   Node *nametypes = FndecNametypes(fndec);
   NewEnv(ELLA_FNDEC, (Node*)(nametypes), tprocs);
   return NullTransform(fndec, tprocs);
}


static Node* layout_alternative ( Node* N ,Transformer *tprocs)
{
return hlist2(AlternativeAltname(N), AlternativeAssoc(N));
}


static Node* layout_rvalternative ( Node* N ,Transformer *tprocs)
{
return  lbracket(lstring("NEW ( "), hlist( newvec(RvalternativeAlternatives(N), lstring(" | "), lstring( "" ))), lstring(" ) "));
} 


static Node* layout_typedec ( Node* typedec ,Transformer *tprocs)
{
return  lpair(hlist3 (lstring("TYPE"), TypedecTypename(typedec), lstring("=")), TypedecBody(typedec));
}

static Node* layout_intdec ( Node* intdec ,Transformer *tprocs)
{
return hlist3(lstring("INT"), IntdecIntname(intdec), IntdecValue(intdec));
}

static Node* layout_constdec ( Node* constdec ,Transformer *tprocs)
{
return  hlist3(lstring("CONST"), ConstdecConstname(constdec), ConstdecValue(constdec));
}

static Node* layout_outer ( Node* N ,Transformer *tprocs)
{
    Node* env = OuterEnviron(N);
 	if  (ScalarInt(OuterSort(N)) == OutersortAttr)
          { Node* attrs = EnvironAttrs(env);
	    Node* attrdec = *IndexVector( attrs, 1);
	    return (attrdec);
          }	
        else
         if  (ScalarInt(OuterSort(N)) == OutersortInt)
          { Node* ints = EnvironInts(env);
	    Node* intdec = *IndexVector( ints, 1);
	    return (intdec);
          }	
        else
         if  (ScalarInt(OuterSort(N)) == OutersortType)
          { Node* types = EnvironTypes(env);
	    Node* typedec = *IndexVector( types, 1);
	    return (typedec);
          }	
        else
	 if  (ScalarInt(OuterSort(N)) == OutersortConst)
          { Node* consts = EnvironConsts(env);
	    Node* constdec = *IndexVector( consts, 1);
	    return (constdec);
          }	
        else
         if  (ScalarInt(OuterSort(N)) == OutersortFn)
          { Node* fns = EnvironFns(env);
	    Node* fndec = *IndexVector( fns, 1);
	    return (fndec);	
  	  }

}

static Node* layout_closure ( Node* closure ,Transformer *tprocs)
{
return lpair (vlist(newvec(ClosureOuters(closure), lstring("."), lstring("."))), lstring(" "));
}

static Node* layout_fint ( Node* fint , Transformer *tprocs)
{
return int_id(FintInt(fint));
}

static Node* layout_newints (Node* N,Transformer *tprocs)
{
return hlist5(lstring("NEW"), NewintsTagname(N), lstring("/("), NewintsRange(N), lstring(")"));
}

static Node* layout_newchars (Node* N,Transformer *tprocs)
{
return hlist4(lstring("NEW"), lstring("("), newvec(hlist2( NewcharsTagname(N), NewcharsChars(N)),lstring("|"), lstring("")), lstring(")"));
}

static Node* newchars_id  (Node *typeno)
{
   Int index = ScalarInt(typeno);
   Node* typedec = *IndexVector(EnvironTypes(environ), index);
   Node* typebody = TypedecBody(typedec);
   if ( Type(typebody) == ELLA_NEWCHARS )
     return NewcharsTagname(typebody);
}

static Node* layout_range ( Node* N ,Transformer *tprocs)
{
return hlist3(RangeLwb(N),lstring(".."),RangeUpb(N));
}

static Node* layout_ports (Node* ports, Node* nametypes, Transformer *tprocs)
{
   int i;
   int noname = 0;
   int upb =  VecSize(ports);
   Node *l_ports = MakeVector(LAY_LAYOUT, upb, tprocs);

   for (i=1; i<=upb; i++)
     {
      Node* port = *IndexVector(ports, i);
      Node* nametype = *IndexVector(nametypes, ScalarInt(port));
      Node* name = NametypeName(nametype);
 
        Node* spec = ((IsNil(name)) 
                    ? (NametypeType(nametype))
                    : hlist3( NametypeType(nametype), lstring(":"),
                              NametypeName(nametype))
                   );
           
          if (i< upb)
             spec = hlist2(spec,lstring(","));
         
        noname = IsNil(name);  
        *IndexVector(l_ports, i) = spec;
      }
     if ((upb==1) && noname)
        return hlist(l_ports);
     else
        return lbracket(lstring("("), hlist(l_ports), lstring(")"));     
}

static Node* layout_fndec (Node* N, Transformer *tprocs)
{
   Node* inputs = layout_ports(FndecInputs(N),FndecNametypes(N), tprocs);
   Node* outputs = layout_ports(FndecOutputs(N),FndecNametypes(N), tprocs);
   Node* spec = hlist4(inputs,lstring(" -> "),outputs,lstring(":"));
   Node* dec  = hlist4(lstring("FN"),FndecFnname(N),lstring(" = "),spec);
   return lpair(dec, FndecFnbody(N));
}

static Node* layout_tnull (Node* N, Transformer *tprocs)
{
   return lstring("");
}

static Node* layout_tname (Node* N, Transformer *tprocs)
{
   Int index = ScalarInt(TnameTypeno(N));
   Node* typedec = *IndexVector(EnvironTypes(environ), index);
   return (TypedecTypename(typedec));
}

static Node* newints_id  (Node *typeno)
{
   Int index = ScalarInt(typeno);
   Node* typedec = *IndexVector(EnvironTypes(environ), index);
   Node* typebody = TypedecBody(typedec);
   if ( Type(typebody) == ELLA_NEWINTS )
     return NewintsTagname(typebody);
}


static Node* layout_unittag (Node* N, Transformer *tprocs)
{
   return UnittagTag(N);
}

static Node* layout_ureplace (Node* N, Transformer *tprocs)
{
   return hlist7(lstring("REPLACE ("), UreplaceUnit(N), lstring(","), UreplaceIndex(N), 
                 lstring(","), UreplaceFrom(N), lstring(")"));
}

static Node* layout_utrim (Node* N, Transformer *tprocs)
{
   return hlist4(UtrimUnit(N), lstring("["), UtrimRange(N), lstring("]"));
}

static Node* layout_useries (Node* N, Transformer *tprocs)
{
   Node *l_body = ( IsNil(UseriesBody(N) )
                   ? lstring("")
                   : vlist(newvec(UseriesBody(N), lstring("."), lstring(".")))
                  );
   Node *output = UseriesOutput(N);
   Node *l_output = ( IsNil(output) 
                     ? lstring("")
                     : hlist( llist2( lstring("OUTPUT"), output))
                    );

   return lbracket(lstring("BEGIN"),
                   l_body, vlist2(l_output, lstring("END") ));
}

static Node* layout_join (Node* N, Transformer *tprocs)
{
   return hlist4(lstring("JOIN"), JoinFrom(N),lstring("->"), JoinTo(N));
}

static Node* layout_arith (Node* N, Transformer *tprocs)
{
   return hlist2(lstring("ARITH"),ArithOutput(N));
}

static Node* layout_reform (Node* N, Transformer *tprocs)
{
   return lstring("REFORM");
}

static Node* layout_uname (Node* N, Transformer *tprocs)
{
   Node *nametypes = (Node*) GetEnv(ELLA_FNDEC, tprocs);
   Int index = ScalarInt(UnameNameno(N));
   Node* nametype = *IndexVector(nametypes, index);
   return NametypeName(nametype);
}

static Node* layout_unull (Node* N, Transformer *tprocs)
{
   return lstring("");
}

static Node* layout_uattr (Node* N, Transformer *tprocs)
{
   return hlist2(UattrUnit(N), UattrAttr(N));
}

static Node* layout_uindex (Node* N, Transformer *tprocs)
{
   return hlist4(UindexUnit(N), lstring("["), UindexIndex(N), lstring("]"));
}

static Node* layout_crange (Node* N, Transformer *tprocs)
{
   return hlist4(CrangeTypeno(N), lstring("/("), CrangeRange(N), lstring(")"));
}

static Node* layout_cint (Node* N, Transformer *tprocs)
{
   return hlist3(newints_id(CintTypeno(N)), lstring("/"), CintIndex(N));
}

static Node* layout_cname (Node* N, Transformer *tprocs)
{
   Int index = ScalarInt(CnameConstno(N));
   Node* constdec = *IndexVector(EnvironConsts(environ), index);
   return (ConstdecConstname(constdec));
}

static Node* layout_primid (Node* typeno, Node* primno)
{
   Int index = ScalarInt(typeno);
   Node* typedec = *IndexVector(EnvironTypes(environ), index);
   Node* typebody = TypedecBody(typedec);
     if ( Type(typebody) == ELLA_RVALTERNATIVE);
     {
      Node* vec = RvalternativeAlternatives(typebody);
      Node* alternative  = *IndexVector(vec, ScalarInt(primno));
      return AlternativeAltname(alternative);
     }
}

static Node* layout_cprim (Node* N, Transformer *tprocs)
{
    return layout_primid(CprimTypeno(N), CprimPrimno(N));
}

   
static Node* layout_uchoices (Node* N, Transformer *tprocs)
{
   Node* test = UchoicesTest(N);
   Node *output = UchoicesOutput(N);
   Int sort = ScalarInt(UchoicesSort(N));

   if (sort==ChoicessortNormal) /* normal */
      return  hlist3( test, lstring(":"), output);

   else if (sort==ChoicessortElseof) /* ELSEOF */
      return  hlist4(lstring("ELSEOF"), test, lstring(":"), output);

   else if (sort==ChoicessortElse) /* ELSE */
      return  hlist2(lstring("ELSE"), output);
    
   else if (sort==ChoicessortNoelse) /*no else */
      return lstring("");
}

static Node* layout_ucase (Node* N, Transformer *tprocs)
{
    Node* spec;
    Node* choices = UcaseChoices(N);
    int i;
    int upb =  VecSize(choices); 
    Node *l_choices = MakeVector(LAY_LAYOUT, upb, tprocs);
   
    for (i=1; i<=upb; i++)
      {
       Node* choice = *IndexVector(choices, i);
       if ( i == upb )
           spec =  choice; 
       else
         {
           Node* next = *IndexVector(choices, i+1);
           if (Type(next)== LAY_HLIST && (VecSize(HlistList(next))==3))
             spec = vlist2(choice, lstring(",")); 
           else
             spec = choice; 
         }
       *IndexVector(l_choices, i) = spec;
      }
    return lbracket(hlist3(lstring("CASE"),UcaseInput(N),lstring("OF")),
                    l_choices,
                    lstring("ESAC")
                  ); 
}
 

static Node* layout_idelay (Node* N, Transformer *tprocs)
{
   return hlist2(lstring("IDELAY"),
                 lbracket(lstring("("), 
                          hlist3(IdelayInit(N), lstring(","), 
                          IdelayDelaytime(N)),
                          lstring(")")
               ));

}

static Node* layout_adelay (Node* N, Transformer *tprocs)
{
   return hlist2(lstring("DELAY"),
                 lbracket(lstring("("), 
                          hlist7( AdelayInit(N), lstring(","), 
                                  AdelayAmbigtime(N), lstring(","),
                                  AdelayAmbig(N), lstring(","), 
                                  AdelayDelaytime(N)),
                         lstring(")")
               ));
}

static Node* layout_uminst (Node* N, Transformer *tprocs)
{
   return hlist2(UminstInst(N), UminstRight(N));
}

static Node* layout_udinst (Node* N, Transformer *tprocs)
{
   return hlist3(UdinstLeft(N), UdinstInst(N), UdinstRight(N));
}

static Node* ints_name (Node* vecint, Transformer *tprocs)
{
   Node *nametypes = (Node*) GetEnv(ELLA_FNDEC, tprocs);
   Node *spec;
   int i;
   int upb =  VecSize(vecint);
   Node *l_names = MakeVector(LAY_LAYOUT, upb, tprocs);
    for (i=1; i<=upb; i++)
     {
       Node* nameno = *IndexVector(vecint, i);
       Node* nametype = *IndexVector(nametypes, ScalarInt(nameno));
       spec = NametypeName(nametype);
       *IndexVector(l_names, i) = spec;
     }  
    return lbracket(lstring(""), hlist(l_names), lstring(""));
}

static Node* layout_make (Node* N, Transformer *tprocs)
{
   Node* makenames = ints_name(MakeMakenames(N), tprocs);
   return hlist5(lstring("MAKE"), MakeSizes(N), MakeInst(N), lstring(":"), makenames);
}

static Node* layout_let (Node* N, Transformer *tprocs)
{   
   Node* letnames = ints_name(LetLetnames(N), tprocs);
   return hlist4(lstring("LET"), letnames, lstring("="), LetUnit(N));
}

static Node* layout_instance (Node* N, Transformer *tprocs)
{
   Int fnno = ScalarInt(InstanceFnno(N));
   Node* fndec = *IndexVector(EnvironFns(environ), fnno);
   return FndecFnname(fndec);
}

static Node* layout_aliencode (Node* N, Transformer *tprocs)
{
    Node *l_alien = (ScalarInt(AliencodeBiop(N))
                   ? lstring("BIOP")
                   : lstring("ALIEN")
                  );
return hlist2(l_alien, AliencodeName(N));
}

static Node* layout_macparam (Node* N, Transformer *tprocs)
{
   return hlist2(MacparamSort(N),MacparamParam(N));
}

static Node* layout_formulatag (Node* N, Transformer *tprocs)
{
   return FormulatagTag(N);
}

static Node* layout_typetag (Node* N, Transformer *tprocs)
{
   return TypetagTag(N);
}

static Node* layout_attrdec ( Node* N ,Transformer *tprocs)
{
return  hlist4(lstring("ATTR"), AttrdecAttrname(N), lstring("="), AttrdecValue(N));
}

static Node* layout_attrtag (Node* N, Transformer *tprocs)
{
   return hlist2(lstring("@!!"),AttrtagTag(N));
}

static Node* layout_attrname (Node* N, Transformer *tprocs)
{
  Int index = ScalarInt(AttrnameAttrno(N));
  Node* attrdec = *IndexVector(EnvironAttrs(environ), index);
  return hlist2(lstring("@"), AttrdecAttrname(attrdec));
}

static Node* layout_attrbracket (Node* N, Transformer *tprocs)
{
   return hlist3(lstring("("), AttrbracketAttr(N), lstring(")"));
}

static Node* layout_attrstr (Node* N, Transformer *tprocs)
{
   return lbracket(lstring("("), newvec(AttrstrAttrs(N), lstring(","), lstring("")), lstring(")"));
}

static Node* layout_attrdata (Node* N, Transformer *tprocs)
{
   return hlist2(AttrdataClassname(N), hvec(AttrdataStrings(N), lstring(":"), lstring("")));
}

static Node* layout_attrnull (Node* N, Transformer *tprocs)
{
   return lstring("");
}

static Node* layout_sample (Node* N, Transformer *tprocs)
{
   return hlist2(lstring("SAMPLE"), 
                 lbracket(lstring("("), 
                          hlist5(SampleInterval(N), lstring(","),
                                 SampleInit(N), lstring(","),
                                 SampleSkew(N)),  
                          lstring(")")
               ));
}

static Node* layout_ram (Node* N, Transformer *tprocs)
{
   return hlist2(lstring("RAM"),
                 lbracket(lstring("("),RamInit(N), lstring(")")
               ));
}

static Node* layout_ustr (Node* N, Transformer *tprocs)
{
   return lbracket(lstring("("),
                   newvec(UstrElems(N), lstring(","), lstring("")), 
                   lstring(")"));
}

static Node* layout_urow (Node* N, Transformer *tprocs)
{
   return hlist4(lstring("["), UrowSize(N), lstring("]"), UrowElem(N));
}

static Node* layout_ualts (Node* N, Transformer *tprocs)
{
   return  newvec(UaltsAlts(N), lstring("|"), lstring(""));
}

static Node* layout_ustring (Node* N, Transformer *tprocs)
{
   return hlist4(lstring("STRING ["), UstringSize(N), lstring("]"),  UstringChar(N));
}

static Node* layout_ucond (Node* N, Transformer *tprocs)
{
   return vlist4(hlist2(lstring("IF"),   UcondCond(N)), 
                 hlist2(lstring("THEN"), UcondTrue(N)),
                 hlist2(lstring("ELSE"), UcondFalse(N)), 
                 lstring("FI"));
}

static Node* layout_ubracket (Node* N, Transformer *tprocs)
{
   return hlist3(lstring("("), UbracketUnit(N), lstring(")"));
}

static Node* layout_uconc (Node* N, Transformer *tprocs)
{
   return hlist3(UconcLeft(N), lstring("CONC"), UconcRight(N)); 
}

static Node* layout_udyindex (Node* N, Transformer *tprocs)
{
   return  hlist4(UdyindexUnit(N), lstring("[["), UdyindexIndex(N), lstring("]]"));
}

static Node* layout_uassoc (Node* N, Transformer *tprocs)
{
   return hlist3(layout_primid(UassocTypeno(N), UassocAltno(N)), lstring("&"), UassocAssoc(N));
}

static Node* layout_uextract (Node* N, Transformer *tprocs)
{
   return hlist3(UextractExtract(N), lstring("\\"), 
                 layout_primid(UextractTypeno(N), UextractAltno(N)));
}

static Node* layout_ctype (Node* N, Transformer *tprocs)
{
   return CtypeType(N);
}

static Node* layout_tstr (Node* N, Transformer *tprocs)
{
   return lbracket(lstring("("), newvec(TstrTypes(N),lstring(","), lstring("")), lstring(")"));
}

static Node* layout_tvoid (Node* N, Transformer *tprocs)
{
   return lstring("()");
}

static Node* layout_cvoid (Node* N, Transformer *tprocs)
{
   return lstring("()");
}

static Node* layout_tbracket (Node* N, Transformer *tprocs)
{
   return hlist3(lstring("("),TbracketType(N),lstring(")"));
}

static Node* layout_tstring (Node* N, Transformer *tprocs)
{
   return hlist4(lstring("STRING ["), TstringSize(N), lstring("]"), TstringChar(N));
}

static Node* layout_trow (Node* N, Transformer *tprocs)
{
   return hlist4(lstring("["), TrowSize(N), lstring("]"), TrowElem(N));
}

static Node* layout_cprimrange (Node* N, Transformer *tprocs)
{
   return hlist2(CprimrangeTypeno(N), 
          lbracket(lstring("("),     
          hlist3(CprimrangeFirstno(N), lstring(".."), CprimrangeLastno(N)), 
                   lstring(")")
           ));
}

static Node* layout_cquery (Node* N, Transformer *tprocs)
{
   return hlist2(lstring("?"),CqueryQuerytype(N));
}

static Node* layout_cquote (Node* N, Transformer *tprocs)
{
   return hlist3(CquoteTypeno(N), lstring(""""), CquoteString(N));
}

static Node* layout_fnull (Node* N, Transformer *tprocs)
{
   return lstring("");
}

static Node* layout_fmacpar (Node* N, Transformer *tprocs)
{
     return FmacparMacparno(N);
}

static Node* layout_farith (Node* N, Transformer *tprocs)
{
   Node *nametypes = (Node*) GetEnv(ELLA_FNDEC, tprocs);
   Int index = ScalarInt(FarithNameno(N));
   Node* nametype = *IndexVector(nametypes, index);
   return FarithNameno(nametype);
}

static Node* layout_fname (Node* N, Transformer *tprocs)
{
   Int index = ScalarInt(FnameIntno(N));
   Node* intdec = *IndexVector(EnvironInts(environ), index);
   return (IntdecIntname(intdec));
}

static Node* layout_fbracket (Node* N, Transformer *tprocs)
{
   return hlist3(lstring("("), FbracketFormula(N), lstring(")"));
}

static Node* layout_fcond (Node* N, Transformer *tprocs)
{
   return vlist4(hlist2(lstring("IF"),   FcondCond(N)), 
                 hlist2(lstring("THEN"), FcondTrue(N)),
                 hlist2(lstring("ELSE"), FcondFalse(N)), 
                 lstring("FI"));
}


static char *dopnames[] = {"+", "-", "*", "IDIV", "=", "!=", "<=", ">=", "<", ">", "AND", "OR", NULL, "SL", "SR", "IAND", "IOR", "MOD"};
  
static Node* layout_fdop (Node* N, Transformer *tprocs)
{
    int sort = ScalarInt(FdopSort(N));
    char *opstr = dopnames[sort-1];
    return hlist3(FdopLeft(N), lstring(opstr), FdopRight(N));
}

static char *mopnames[] = {"+", "-", "NOT", NULL, "INOT", "SQRT", "ABS"};

static Node* layout_fmop (Node* N, Transformer *tprocs)
{
    int sort = ScalarInt(FmopSort(N));
    char *opstr = mopnames[sort-1];
    return hlist2(lstring(opstr), FmopRight(N));
}


static Node* layout_attrlocdec (Node* N, Transformer *tprocs)
{
   Int index = ScalarInt(AttrnameAttrno(N));
   Node* attrdec = Transform( *IndexVector( EnvironAttrs(environ), index),
                              tprocs );
   return attrdec;
}

static Node* layout_flocdec (Node* N, Transformer *tprocs)
{
   Int index = ScalarInt(FnameIntno(N));
   Node* intdec = Transform( *IndexVector( EnvironInts(environ), index),
                             tprocs );
   return intdec;
}

static Node* layout_tlocdec (Node* N, Transformer *tprocs)
{
   Int index = ScalarInt(TnameTypeno(N));
   Node* typedec = Transform( *IndexVector( EnvironTypes(environ), index),
                              tprocs );
   return typedec;
}

static Node* layout_clocdec (Node* N, Transformer *tprocs)
{
   Int index = ScalarInt(CnameConstno(N));
   Node* constdec = Transform( *IndexVector( EnvironConsts(environ), index),
                               tprocs );
   return constdec;
}

static Node* layout_fnlocdec (Node* N, Transformer *tprocs)
{
   Node *fndec = Transform( *IndexVector( EnvironFns(environ),
                                          ScalarInt(FnmacspecSpecfnno(N))),
                            tprocs );
   return fndec;
}

static Node* layout_attrmacspec (Node* N, Transformer *tprocs)
{
  Int index = ScalarInt(AttrnameAttrno(N));
  Node* attrdec = *IndexVector(EnvironAttrs(environ), index);
  return AttrdecAttrname(attrdec);
}

static Node* layout_fmacspec (Node* N, Transformer *tprocs)
{
   return layout_fname(N, tprocs); /* The form happens to be the same as
                                      for ELLA_FNAME DJS */
}

static Node* layout_tmacspec (Node* N, Transformer *tprocs)
{
   return layout_tname(N, tprocs); /* The form happens to be the same as
                                      for ELLA_TNAME DJS */
}

static Node* layout_cmacspec (Node* N, Transformer *tprocs)
{
   Int index = ScalarInt(CnameConstno(N));
   Node* constdec = *IndexVector(EnvironConsts(environ), index);
   return (hlist2( lstring("<type>:"),ConstdecConstname(constdec)));
}

static Node* layout_fnmacspec (Node* N, Transformer *tprocs)
{
   Node *fndec = *IndexVector(EnvironFns(environ),
                              ScalarInt(FnmacspecSpecfnno(N)));
   Node* inputs = layout_ports(FndecInputs(fndec),
                               FndecNametypes(fndec), tprocs);
   Node* outputs = layout_ports(FndecOutputs(fndec),
                                FndecNametypes(fndec), tprocs);
   Node* spec = hlist3(inputs,lstring(" -> "),outputs);
   Node* dec  = hlist4(lstring("FN"),FndecFnname(fndec),lstring(" = "),spec);
   return dec;
}

Transformer* make_ella_layout (Transformer* layouttprocs)
{
NewTransformproc (ELLA_OUTER, setupenviron, layouttprocs);

NewTransformproc (ELLA_FNDEC, setupnametypes, layouttprocs);

NewConstructproc (ELLA_FMOP, layout_fmop, layouttprocs);

NewConstructproc (ELLA_FDOP, layout_fdop, layouttprocs);

NewConstructproc (ELLA_FCOND, layout_fcond, layouttprocs);

NewConstructproc (ELLA_FBRACKET, layout_fbracket, layouttprocs);

NewConstructproc (ELLA_FNAME, layout_fname, layouttprocs);

NewConstructproc (ELLA_FARITH, layout_farith, layouttprocs);

NewConstructproc (ELLA_FMACPAR, layout_fmacpar, layouttprocs);

NewConstructproc (ELLA_FNULL, layout_fnull, layouttprocs);

NewConstructproc (ELLA_CQUERY, layout_cquery, layouttprocs);

NewConstructproc (ELLA_CQUOTE, layout_cquote, layouttprocs);

NewConstructproc (ELLA_CPRIMRANGE, layout_cprimrange, layouttprocs);

NewConstructproc (ELLA_TROW, layout_trow, layouttprocs);

NewConstructproc (ELLA_TSTRING, layout_tstring, layouttprocs);

NewConstructproc (ELLA_TBRACKET, layout_tbracket, layouttprocs);

NewConstructproc (ELLA_TVOID, layout_tvoid, layouttprocs);

NewConstructproc (ELLA_CVOID, layout_cvoid, layouttprocs);

NewConstructproc (ELLA_TSTR, layout_tstr, layouttprocs);

NewConstructproc (ELLA_CTYPE, layout_ctype, layouttprocs);

NewConstructproc (ELLA_UEXTRACT, layout_uextract, layouttprocs);

NewConstructproc (ELLA_UASSOC, layout_uassoc, layouttprocs);

NewConstructproc (ELLA_UDYINDEX, layout_udyindex, layouttprocs);

NewConstructproc (ELLA_UCONC, layout_uconc, layouttprocs);

NewConstructproc (ELLA_UBRACKET, layout_ubracket, layouttprocs);

NewConstructproc (ELLA_UCOND, layout_ucond, layouttprocs);

NewConstructproc (ELLA_USTRING, layout_ustring, layouttprocs);

NewConstructproc (ELLA_UALTS, layout_ualts, layouttprocs);

NewConstructproc (ELLA_UROW, layout_urow, layouttprocs);

NewConstructproc (ELLA_USTR, layout_ustr, layouttprocs);

NewConstructproc (ELLA_RAM, layout_ram, layouttprocs);

NewConstructproc (ELLA_SAMPLE, layout_sample, layouttprocs);

NewConstructproc (ELLA_ATTRNULL, layout_attrnull, layouttprocs);

NewConstructproc (ELLA_ATTRDATA, layout_attrdata, layouttprocs);

NewConstructproc (ELLA_ATTRSTR, layout_attrstr, layouttprocs);

NewConstructproc (ELLA_ATTRBRACKET, layout_attrbracket, layouttprocs);

NewConstructproc (ELLA_ATTRNAME, layout_attrname, layouttprocs);

NewConstructproc (ELLA_ATTRTAG, layout_attrtag, layouttprocs);

NewConstructproc (ELLA_ATTRDEC, layout_attrdec, layouttprocs);

NewConstructproc (ELLA_FORMULATAG, layout_formulatag, layouttprocs);

NewConstructproc (ELLA_TYPETAG, layout_typetag, layouttprocs);

NewConstructproc (ELLA_MACPARAM, layout_macparam, layouttprocs);

NewConstructproc (ELLA_ALIENCODE, layout_aliencode, layouttprocs);

NewConstructproc (ELLA_INSTANCE, layout_instance, layouttprocs);

NewConstructproc (ELLA_MAKE, layout_make, layouttprocs);

NewConstructproc (ELLA_LET, layout_let, layouttprocs);

NewConstructproc (ELLA_UDINST, layout_udinst, layouttprocs);

NewConstructproc (ELLA_UMINST, layout_uminst, layouttprocs);

NewConstructproc (ELLA_IDELAY, layout_idelay, layouttprocs);

NewConstructproc (ELLA_ADELAY, layout_adelay, layouttprocs);

NewConstructproc (ELLA_UCHOICES, layout_uchoices, layouttprocs);

NewConstructproc (ELLA_UCASE, layout_ucase, layouttprocs);

NewConstructproc (ELLA_CPRIM, layout_cprim, layouttprocs);

NewConstructproc (ELLA_CNAME, layout_cname, layouttprocs);

NewConstructproc (ELLA_CINT, layout_cint, layouttprocs);

NewConstructproc (ELLA_CRANGE, layout_crange, layouttprocs);

NewConstructproc (ELLA_UINDEX, layout_uindex, layouttprocs);

NewConstructproc (ELLA_UATTR, layout_uattr, layouttprocs);

NewConstructproc (ELLA_UNULL, layout_unull, layouttprocs);

NewConstructproc (ELLA_UNAME, layout_uname, layouttprocs);

NewConstructproc (ELLA_REFORM, layout_reform, layouttprocs);

NewConstructproc (ELLA_ARITH, layout_arith, layouttprocs);

NewConstructproc (ELLA_JOIN, layout_join, layouttprocs);

NewConstructproc (ELLA_USERIES, layout_useries, layouttprocs);

NewConstructproc (ELLA_UREPLACE, layout_ureplace, layouttprocs);

NewConstructproc (ELLA_UTRIM, layout_utrim, layouttprocs);

NewConstructproc (ELLA_UNITTAG, layout_unittag, layouttprocs);

NewConstructproc (ELLA_TNAME, layout_tname, layouttprocs);

NewConstructproc (ELLA_TNULL, layout_tnull, layouttprocs);

NewConstructproc (ELLA_FNDEC, layout_fndec, layouttprocs);

NewConstructproc (ELLA_RANGE, layout_range, layouttprocs);

NewConstructproc (ELLA_NEWCHARS, layout_newchars, layouttprocs);

NewConstructproc (ELLA_NEWINTS, layout_newints, layouttprocs);

NewConstructproc (ELLA_FINT, layout_fint, layouttprocs);

NewConstructproc (ELLA_CLOSURE, layout_closure, layouttprocs);

NewConstructproc (ELLA_OUTER, layout_outer, layouttprocs);

NewConstructproc (ELLA_CONSTDEC, layout_constdec, layouttprocs);

NewConstructproc (ELLA_INTDEC, layout_intdec, layouttprocs);

NewConstructproc (ELLA_TYPEDEC, layout_typedec, layouttprocs);

NewConstructproc (ELLA_RVALTERNATIVE,  layout_rvalternative, layouttprocs);

NewConstructproc (ELLA_ALTERNATIVE,  layout_alternative, layouttprocs);

NewConstructproc (ELLA_ATTRLOCDEC, layout_attrlocdec, layouttprocs);

NewConstructproc (ELLA_FLOCDEC, layout_flocdec, layouttprocs);

NewConstructproc (ELLA_TLOCDEC, layout_tlocdec, layouttprocs);

NewConstructproc (ELLA_CLOCDEC, layout_clocdec, layouttprocs);

NewConstructproc (ELLA_FNLOCDEC, layout_fnlocdec, layouttprocs);

NewConstructproc (ELLA_ATTRMACSPEC, layout_attrmacspec, layouttprocs);

NewConstructproc (ELLA_FMACSPEC, layout_fmacspec, layouttprocs);

NewConstructproc (ELLA_TMACSPEC, layout_tmacspec, layouttprocs);

NewConstructproc (ELLA_CMACSPEC, layout_cmacspec, layouttprocs);

NewConstructproc (ELLA_FNMACSPEC, layout_fnmacspec, layouttprocs);

setuplayout(layouttprocs);
return layouttprocs;
}







