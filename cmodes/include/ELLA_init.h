
                 /* Header file for ELLA cmodes definition module */

#ifndef _ELLA_init_h
#define _ELLA_init_h

#include "config.h"

CF_HEADER( ELLA_init_h_init, \
    "$Id: ELLA_init.h,v 2.4 1995/03/29 13:05:25 ella Exp $" )

/* #define Config_ELLA_init "DRA ELLA_init 0.1 22-Dec-1993 16:15" */


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
22:12:93  Module created - initially without tests for NULL Nodes.  DCT
06:01:95   1.001  ELLA    Install in config manage system. 
12:01:95   1.002  DJS    Add IDTAG to schemer 
21:03:95   1.003  DJS   Add enumerateds and unions in unions to schema.
29:03:95   2.004  ELLA  Change copyright header
??:??:??   ?.???  ????
*/

#include "cmodes.h"

#define ELLA_SIGNATURE "V06_ELLA_AssDmp"

#define INT 1
#define ID 2
#define VEC 3

#define ELLA_NSTRUCTS 122
#define ELLA_ATTRLOCDEC 20
#define ELLA_ATTRMACSPEC 21
#define ELLA_ATTRNAME 22
#define ELLA_ATTRDATA 23
#define ELLA_ATTRSTR 24
#define ELLA_ATTRBRACKET 25
#define ELLA_ATTRNULL 26
#define ELLA_ATTRTAG 27
#define ELLA_FINT 28
#define ELLA_FCHECK 29
#define ELLA_FARITH 30
#define ELLA_FLOCDEC 31
#define ELLA_FMACSPEC 32
#define ELLA_FNAME 33
#define ELLA_FDOP 34
#define ELLA_FMOP 35
#define ELLA_FCOND 36
#define ELLA_FBRACKET 37
#define ELLA_FMACPAR 38
#define ELLA_FNULL 39
#define ELLA_FORMULATAG 40
#define ELLA_RANGE 41
#define ELLA_TLOCDEC 42
#define ELLA_TMACSPEC 43
#define ELLA_TNAME 44
#define ELLA_TROW 45
#define ELLA_TSTR 46
#define ELLA_TFN 47
#define ELLA_TBRACKET 48
#define ELLA_TSTRING 49
#define ELLA_TVOID 50
#define ELLA_TMACPAR 51
#define ELLA_TNULL 52
#define ELLA_TYPETAG 53
#define ELLA_NEWCHARS 54
#define ELLA_ALTERNATIVE 55
#define ELLA_RVALTERNATIVE 56
#define ELLA_NEWINTS 57
#define ELLA_CLOCDEC 58
#define ELLA_CMACSPEC 59
#define ELLA_CNAME 60
#define ELLA_CPRIM 61
#define ELLA_CINT 62
#define ELLA_CQUERY 63
#define ELLA_CQUOTE 64
#define ELLA_CVOID 65
#define ELLA_CTYPE 66
#define ELLA_CRANGE 67
#define ELLA_CPRIMRANGE 68
#define ELLA_UALTS 69
#define ELLA_UNAME 70
#define ELLA_UFN 71
#define ELLA_UASSOC 72
#define ELLA_UEXTRACT 73
#define ELLA_UPORTNAME 74
#define ELLA_UINDEX 75
#define ELLA_UTRIM 76
#define ELLA_UDYINDEX 77
#define ELLA_UREPLACE 78
#define ELLA_UROW 79
#define ELLA_USTR 80
#define ELLA_UCONC 81
#define ELLA_UMINST 82
#define ELLA_UDINST 83
#define ELLA_UCHOICES 84
#define ELLA_UCASE 85
#define ELLA_UCOND 86
#define ELLA_UREPL 87
#define ELLA_USEQUENCE 88
#define ELLA_USERIES 89
#define ELLA_UATTR 90
#define ELLA_UCHECK 91
#define ELLA_UBRACKET 92
#define ELLA_USTRING 93
#define ELLA_UNULL 94
#define ELLA_UNITTAG 95
#define ELLA_FNLOCDEC 96
#define ELLA_FNMACSPEC 97
#define ELLA_MACPARAM 98
#define ELLA_INSTANCE 99
#define ELLA_IDTAG 100
#define ELLA_PRINT 101
#define ELLA_FAULT 102
#define ELLA_LET 103
#define ELLA_SEQLET 104
#define ELLA_SEQVAR 105
#define ELLA_SEQPVAR 106
#define ELLA_SEQASSIGN 107
#define ELLA_SEQCHOICES 108
#define ELLA_SEQCASE 109
#define ELLA_SEQCOND 110
#define ELLA_SEQREPL 111
#define ELLA_SEQROW 112
#define ELLA_SEQNULL 113
#define ELLA_SEQUENCE 114
#define ELLA_MAKE 115
#define ELLA_JOIN 116
#define ELLA_REPLJOIN 117
#define ELLA_STEPNULL 118
#define ELLA_ALIENCODE 119
#define ELLA_ARITH 120
#define ELLA_REFORM 121
#define ELLA_CTNAME 122
#define ELLA_IMPORT 123
#define ELLA_ADELAY 124
#define ELLA_IDELAY 125
#define ELLA_RAM 126
#define ELLA_SAMPLE 127
#define ELLA_TIMESCALE 128
#define ELLA_BODYCHECK 129
#define ELLA_BODYNULL 130
#define ELLA_MACSPEC 131
#define ELLA_NAMETYPE 132
#define ELLA_USAGE 133
#define ELLA_ATTRDEC 134
#define ELLA_INTDEC 135
#define ELLA_TYPEDEC 136
#define ELLA_CONSTDEC 137
#define ELLA_FNDEC 138
#define ELLA_ENVIRON 139
#define ELLA_OUTER 140
#define ELLA_CLOSURE 141

#define ELLA_NUNIONS 12
#define ELLA_ATTR 200
#define ELLA_FORMULA 201
#define ELLA_FORMULARANGE 202
#define ELLA_TYPE 203
#define ELLA_TYPEBODY 204
#define ELLA_UNIT 205
#define ELLA_MPARAM 206
#define ELLA_PRINTITEMS 207
#define ELLA_SEQSTEP 208
#define ELLA_STEP 209
#define ELLA_FNBODY 210
#define ELLA_MACSPECBODY 211

#define ELLA_VECID Vec(ID)
#define ELLA_VECATTR Vec(ELLA_ATTR)
#define ELLA_VECTYPE Vec(ELLA_TYPE)
#define ELLA_VECALTERNATIVE Vec(ELLA_ALTERNATIVE)
#define ELLA_VECINT Vec(INT)
#define ELLA_VECUNIT Vec(ELLA_UNIT)
#define ELLA_VECUCHOICES Vec(ELLA_UCHOICES)
#define ELLA_VECSEQUENCE Vec(ELLA_SEQUENCE)
#define ELLA_VECSTEP Vec(ELLA_STEP)
#define ELLA_VECMACPARAM Vec(ELLA_MACPARAM)
#define ELLA_VECPRINTITEMS Vec(ELLA_PRINTITEMS)
#define ELLA_VECSEQCHOICES Vec(ELLA_SEQCHOICES)
#define ELLA_VECSEQSTEP Vec(ELLA_SEQSTEP)
#define ELLA_VECFORMULA Vec(ELLA_FORMULA)
#define ELLA_VECJOIN Vec(ELLA_JOIN)
#define ELLA_VECMACSPEC Vec(ELLA_MACSPEC)
#define ELLA_VECNAMETYPE Vec(ELLA_NAMETYPE)
#define ELLA_VECATTRDEC Vec(ELLA_ATTRDEC)
#define ELLA_VECINTDEC Vec(ELLA_INTDEC)
#define ELLA_VECTYPEDEC Vec(ELLA_TYPEDEC)
#define ELLA_VECCONSTDEC Vec(ELLA_CONSTDEC)
#define ELLA_VECFNDEC Vec(ELLA_FNDEC)
#define ELLA_VECOUTER Vec(ELLA_OUTER)

#define AttrlocdecLocattrno(x) Index(Children(x),1)
#define AttrmacspecSpecattrno(x) Index(Children(x),1)
#define AttrnameAttrno(x) Index(Children(x),1)
#define AttrdataClassname(x) Index(Children(x),1)
#define AttrdataStrings(x) Index(Children(x),2)
#define AttrstrAttrs(x) Index(Children(x),1)
#define AttrbracketAttr(x) Index(Children(x),1)
#define AttrtagTag(x) Index(Children(x),1)
#define FintInt(x) Index(Children(x),1)
#define FintText(x) Index(Children(x),2)
#define FcheckSort(x) Index(Children(x),1)
#define FcheckTest(x) Index(Children(x),2)
#define FcheckStandard(x) Index(Children(x),3)
#define FarithNameno(x) Index(Children(x),1)
#define FlocdecLocintno(x) Index(Children(x),1)
#define FmacspecSpecintno(x) Index(Children(x),1)
#define FnameIntno(x) Index(Children(x),1)
#define FdopLeft(x) Index(Children(x),1)
#define FdopSort(x) Index(Children(x),2)
#define FdopRight(x) Index(Children(x),3)
#define FmopSort(x) Index(Children(x),1)
#define FmopRight(x) Index(Children(x),2)
#define FcondCond(x) Index(Children(x),1)
#define FcondTrue(x) Index(Children(x),2)
#define FcondFalse(x) Index(Children(x),3)
#define FbracketFormula(x) Index(Children(x),1)
#define FmacparMacparno(x) Index(Children(x),1)
#define FormulatagTag(x) Index(Children(x),1)
#define RangeLwb(x) Index(Children(x),1)
#define RangeUpb(x) Index(Children(x),2)
#define TlocdecLoctypeno(x) Index(Children(x),1)
#define TmacspecSpectypeno(x) Index(Children(x),1)
#define TnameTypeno(x) Index(Children(x),1)
#define TrowSize(x) Index(Children(x),1)
#define TrowElem(x) Index(Children(x),2)
#define TstrTypes(x) Index(Children(x),1)
#define TfnTo(x) Index(Children(x),1)
#define TfnFrom(x) Index(Children(x),2)
#define TbracketType(x) Index(Children(x),1)
#define TstringSize(x) Index(Children(x),1)
#define TstringChar(x) Index(Children(x),2)
#define TmacparMacparno(x) Index(Children(x),1)
#define TypetagTag(x) Index(Children(x),1)
#define NewcharsTagname(x) Index(Children(x),1)
#define NewcharsChars(x) Index(Children(x),2)
#define AlternativeAltname(x) Index(Children(x),1)
#define AlternativeAssoc(x) Index(Children(x),2)
#define RvalternativeAlternatives(x) Index(Children(x),1)
#define NewintsTagname(x) Index(Children(x),1)
#define NewintsRange(x) Index(Children(x),2)
#define ClocdecLocconstno(x) Index(Children(x),1)
#define CmacspecSpecconstno(x) Index(Children(x),1)
#define CnameConstno(x) Index(Children(x),1)
#define CprimTypeno(x) Index(Children(x),1)
#define CprimPrimno(x) Index(Children(x),2)
#define CintTypeno(x) Index(Children(x),1)
#define CintIndex(x) Index(Children(x),2)
#define CqueryQuerytype(x) Index(Children(x),1)
#define CquoteTypeno(x) Index(Children(x),1)
#define CquoteString(x) Index(Children(x),2)
#define CtypeType(x) Index(Children(x),1)
#define CrangeTypeno(x) Index(Children(x),1)
#define CrangeRange(x) Index(Children(x),2)
#define CprimrangeTypeno(x) Index(Children(x),1)
#define CprimrangeFirstno(x) Index(Children(x),2)
#define CprimrangeLastno(x) Index(Children(x),3)
#define UaltsAlts(x) Index(Children(x),1)
#define UnameSort(x) Index(Children(x),1)
#define UnameNameno(x) Index(Children(x),2)
#define UfnSink(x) Index(Children(x),1)
#define UfnSource(x) Index(Children(x),2)
#define UassocTypeno(x) Index(Children(x),1)
#define UassocAltno(x) Index(Children(x),2)
#define UassocAssoc(x) Index(Children(x),3)
#define UextractExtract(x) Index(Children(x),1)
#define UextractTypeno(x) Index(Children(x),2)
#define UextractAltno(x) Index(Children(x),3)
#define UportnameUnit(x) Index(Children(x),1)
#define UportnameFnno(x) Index(Children(x),2)
#define UportnameNameno(x) Index(Children(x),3)
#define UindexUnit(x) Index(Children(x),1)
#define UindexIndex(x) Index(Children(x),2)
#define UtrimUnit(x) Index(Children(x),1)
#define UtrimRange(x) Index(Children(x),2)
#define UdyindexUnit(x) Index(Children(x),1)
#define UdyindexIndex(x) Index(Children(x),2)
#define UreplaceUnit(x) Index(Children(x),1)
#define UreplaceIndex(x) Index(Children(x),2)
#define UreplaceFrom(x) Index(Children(x),3)
#define UrowSize(x) Index(Children(x),1)
#define UrowElem(x) Index(Children(x),2)
#define UstrElems(x) Index(Children(x),1)
#define UconcString(x) Index(Children(x),1)
#define UconcSort(x) Index(Children(x),2)
#define UconcLeft(x) Index(Children(x),3)
#define UconcRight(x) Index(Children(x),4)
#define UminstInst(x) Index(Children(x),1)
#define UminstRight(x) Index(Children(x),2)
#define UdinstLeft(x) Index(Children(x),1)
#define UdinstInst(x) Index(Children(x),2)
#define UdinstRight(x) Index(Children(x),3)
#define UchoicesCheck(x) Index(Children(x),1)
#define UchoicesSort(x) Index(Children(x),2)
#define UchoicesTest(x) Index(Children(x),3)
#define UchoicesOutput(x) Index(Children(x),4)
#define UcaseInput(x) Index(Children(x),1)
#define UcaseChoices(x) Index(Children(x),2)
#define UcondCond(x) Index(Children(x),1)
#define UcondTrue(x) Index(Children(x),2)
#define UcondFalse(x) Index(Children(x),3)
#define UreplRepl(x) Index(Children(x),1)
#define UreplBody(x) Index(Children(x),2)
#define UsequenceBody(x) Index(Children(x),1)
#define UsequenceOutput(x) Index(Children(x),2)
#define UseriesBody(x) Index(Children(x),1)
#define UseriesOutput(x) Index(Children(x),2)
#define UattrUnit(x) Index(Children(x),1)
#define UattrAttr(x) Index(Children(x),2)
#define UcheckUnit(x) Index(Children(x),1)
#define UcheckFcheck(x) Index(Children(x),2)
#define UbracketUnit(x) Index(Children(x),1)
#define UstringSize(x) Index(Children(x),1)
#define UstringChar(x) Index(Children(x),2)
#define UnittagTag(x) Index(Children(x),1)
#define FnlocdecLocfnno(x) Index(Children(x),1)
#define FnmacspecSpecfnno(x) Index(Children(x),1)
#define MacparamSort(x) Index(Children(x),1)
#define MacparamParam(x) Index(Children(x),2)
#define InstanceFnno(x) Index(Children(x),1)
#define InstanceMacparams(x) Index(Children(x),2)
#define InstanceAttr(x) Index(Children(x),3)
#define IdtagTag(x) Index(Children(x),1)
#define PrintCond(x) Index(Children(x),1)
#define PrintPrint(x) Index(Children(x),2)
#define FaultCond(x) Index(Children(x),1)
#define FaultFault(x) Index(Children(x),2)
#define LetLetnames(x) Index(Children(x),1)
#define LetUnit(x) Index(Children(x),2)
#define SeqletSeqlet(x) Index(Children(x),1)
#define SeqvarSeqvar(x) Index(Children(x),1)
#define SeqpvarSeqpvar(x) Index(Children(x),1)
#define SeqassignTo(x) Index(Children(x),1)
#define SeqassignFrom(x) Index(Children(x),2)
#define SeqchoicesCheck(x) Index(Children(x),1)
#define SeqchoicesSort(x) Index(Children(x),2)
#define SeqchoicesTest(x) Index(Children(x),3)
#define SeqchoicesOutput(x) Index(Children(x),4)
#define SeqcaseInput(x) Index(Children(x),1)
#define SeqcaseChoices(x) Index(Children(x),2)
#define SeqcondCond(x) Index(Children(x),1)
#define SeqcondTrue(x) Index(Children(x),2)
#define SeqcondFalse(x) Index(Children(x),3)
#define SeqreplRepl(x) Index(Children(x),1)
#define SeqreplBody(x) Index(Children(x),2)
#define SeqrowSize(x) Index(Children(x),1)
#define SeqrowBody(x) Index(Children(x),2)
#define SequenceStep(x) Index(Children(x),1)
#define MakeSizes(x) Index(Children(x),1)
#define MakeInst(x) Index(Children(x),2)
#define MakeMakenames(x) Index(Children(x),3)
#define JoinFrom(x) Index(Children(x),1)
#define JoinTo(x) Index(Children(x),2)
#define RepljoinRepls(x) Index(Children(x),1)
#define RepljoinJoins(x) Index(Children(x),2)
#define AliencodeBiop(x) Index(Children(x),1)
#define AliencodeName(x) Index(Children(x),2)
#define AliencodeMacparams(x) Index(Children(x),3)
#define ArithOutput(x) Index(Children(x),1)
#define CtnameContextno(x) Index(Children(x),1)
#define CtnameImport(x) Index(Children(x),2)
#define ImportName(x) Index(Children(x),1)
#define ImportContextno(x) Index(Children(x),2)
#define ImportCtname(x) Index(Children(x),3)
#define AdelaySort(x) Index(Children(x),1)
#define AdelayInit(x) Index(Children(x),2)
#define AdelayAmbigtime(x) Index(Children(x),3)
#define AdelayAmbig(x) Index(Children(x),4)
#define AdelayDelaytime(x) Index(Children(x),5)
#define IdelayInit(x) Index(Children(x),1)
#define IdelayDelaytime(x) Index(Children(x),2)
#define RamInit(x) Index(Children(x),1)
#define SampleSort(x) Index(Children(x),1)
#define SampleInterval(x) Index(Children(x),2)
#define SampleInit(x) Index(Children(x),3)
#define SampleSkew(x) Index(Children(x),4)
#define TimescaleFaster(x) Index(Children(x),1)
#define TimescaleSort(x) Index(Children(x),2)
#define TimescaleInst(x) Index(Children(x),3)
#define TimescaleScale(x) Index(Children(x),4)
#define TimescaleInit(x) Index(Children(x),5)
#define TimescaleSkew(x) Index(Children(x),6)
#define BodycheckJoincheck(x) Index(Children(x),1)
#define BodycheckCheck(x) Index(Children(x),2)
#define BodycheckFnbody(x) Index(Children(x),3)
#define MacspecSort(x) Index(Children(x),1)
#define MacspecSpec(x) Index(Children(x),2)
#define NametypeName(x) Index(Children(x),1)
#define NametypeType(x) Index(Children(x),2)
#define NametypeAttr(x) Index(Children(x),3)
#define UsageContextno(x) Index(Children(x),1)
#define UsageClosureno(x) Index(Children(x),2)
#define UsageLibv_spec(x) Index(Children(x),3)
#define UsageLibv_body(x) Index(Children(x),4)
#define UsageImport(x) Index(Children(x),5)
#define UsageExport(x) Index(Children(x),6)
#define AttrdecSort(x) Index(Children(x),1)
#define AttrdecAttrname(x) Index(Children(x),2)
#define AttrdecValue(x) Index(Children(x),3)
#define AttrdecUsage(x) Index(Children(x),4)
#define IntdecSort(x) Index(Children(x),1)
#define IntdecIntname(x) Index(Children(x),2)
#define IntdecAttr(x) Index(Children(x),3)
#define IntdecValue(x) Index(Children(x),4)
#define IntdecUsage(x) Index(Children(x),5)
#define TypedecSort(x) Index(Children(x),1)
#define TypedecTypename(x) Index(Children(x),2)
#define TypedecAttr(x) Index(Children(x),3)
#define TypedecBody(x) Index(Children(x),4)
#define TypedecUsage(x) Index(Children(x),5)
#define ConstdecSort(x) Index(Children(x),1)
#define ConstdecConstname(x) Index(Children(x),2)
#define ConstdecAttr(x) Index(Children(x),3)
#define ConstdecValue(x) Index(Children(x),4)
#define ConstdecUsage(x) Index(Children(x),5)
#define FndecSort(x) Index(Children(x),1)
#define FndecMacro(x) Index(Children(x),2)
#define FndecFnname(x) Index(Children(x),3)
#define FndecMacspecs(x) Index(Children(x),4)
#define FndecAttr(x) Index(Children(x),5)
#define FndecInputs(x) Index(Children(x),6)
#define FndecOutputs(x) Index(Children(x),7)
#define FndecNametypes(x) Index(Children(x),8)
#define FndecFnbody(x) Index(Children(x),9)
#define FndecUsage(x) Index(Children(x),10)
#define EnvironAttrs(x) Index(Children(x),1)
#define EnvironInts(x) Index(Children(x),2)
#define EnvironTypes(x) Index(Children(x),3)
#define EnvironConsts(x) Index(Children(x),4)
#define EnvironFns(x) Index(Children(x),5)
#define OuterClosureno(x) Index(Children(x),1)
#define OuterSort(x) Index(Children(x),2)
#define OuterEnviron(x) Index(Children(x),3)
#define ClosureOuters(x) Index(Children(x),1)

#define BoolsortFalse 0
#define BoolsortTrue 1
#define FchecksortTypeoutput -1
#define FchecksortReserverd0 0
#define FchecksortType 1
#define FchecksortLe 2
#define FchecksortGe 3
#define FchecksortEq 4
#define FchecksortNe 5
#define FdopsortPlus 1
#define FdopsortMinus 2
#define FdopsortMult 3
#define FdopsortIdiv 4
#define FdopsortEq 5
#define FdopsortNe 6
#define FdopsortLe 7
#define FdopsortGe 8
#define FdopsortLth 9
#define FdopsortGth 10
#define FdopsortAnd 11
#define FdopsortOr 12
#define FdopsortReserved13 13
#define FdopsortSl 14
#define FdopsortSr 15
#define FdopsortIand 16
#define FdopsortIor 17
#define FdopsortMod 18
#define FmopsortPlus 1
#define FmopsortMinus 2
#define FmopsortNot 3
#define FmopsortReserved4 4
#define FmopsortInot 5
#define FmopsortSqrt 6
#define FmopsortAbs 7
#define UnamesortSource 1
#define UnamesortSink 2
#define UnamesortIosource 3
#define UnamesortIosink 4
#define UconcsortFlattenleft 1
#define UconcsortFlattenright 2
#define UconcsortFlattenboth 3
#define ChoicessortNormal 1
#define ChoicessortElseof 2
#define ChoicessortElse 3
#define ChoicessortNoelse 4
#define MacparamsortExplicit 0
#define MacparamsortImplicit 1
#define DelaysortConstint 1
#define DelaysortConstint2 2
#define DelaysortConst2int 3
#define DelaysortConst2int2 4
#define SamplesortInt1 1
#define SamplesortInt2 2
#define DecsortOuter 1
#define DecsortLocal 2
#define DecsortMacpar 3
#define OutersortAttr 1
#define OutersortInt 2
#define OutersortType 3
#define OutersortConst 4
#define OutersortFn 5

extern Table *ELLA_InitTable();

#endif

