
                 /*  ELLA cmodes definition module  */

#include "config.h"

CF_MODULE( ELLA_init_init, \
    "$Id: ELLA_init.c,v 2.4 1995/03/29 13:05:17 ella Exp $" )


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
12:01:95   1.002  DJS    Add IDTAG to schema
21:03:95   1.003  DJS   Add enumerateds and unions in unions to schema.
29:03:95   2.004  ELLA  Change copyright header
??:??:??   ?.???  ????
*/

#include "ELLA_init.h"

extern Table *ELLA_InitTable()
{  Table *ELLA_table = CreateTable( "ELLA", ELLA_NSTRUCTS, ELLA_NUNIONS );

   AddElement( ELLA_ATTRLOCDEC,
               "Attrlocdec",
               Sort2( ELLA_SEQSTEP, ELLA_STEP),
               Sort1( INT),
               Sort1( "locattrno"),
               ELLA_table );

   AddElement( ELLA_ATTRMACSPEC,
               "Attrmacspec",
               Sort1( ELLA_MACSPECBODY),
               Sort1( INT),
               Sort1( "specattrno"),
               ELLA_table );

   AddElement( ELLA_ATTRNAME,
               "Attrname",
               Sort1( ELLA_ATTR),
               Sort1( INT),
               Sort1( "attrno"),
               ELLA_table );

   AddElement( ELLA_ATTRDATA,
               "Attrdata",
               Sort1( ELLA_ATTR),
               Sort2( ID, ELLA_VECID),
               Sort2( "classname", "strings"),
               ELLA_table );

   AddElement( ELLA_ATTRSTR,
               "Attrstr",
               Sort1( ELLA_ATTR),
               Sort1( ELLA_VECATTR),
               Sort1( "attrs"),
               ELLA_table );

   AddElement( ELLA_ATTRBRACKET,
               "Attrbracket",
               Sort1( ELLA_ATTR),
               Sort1( ELLA_ATTR),
               Sort1( "attr"),
               ELLA_table );

   AddElement( ELLA_ATTRNULL,
               "Attrnull",
               Sort1( ELLA_ATTR),
               Sort0(),
               Sort0(),
               ELLA_table );

   AddElement( ELLA_ATTRTAG,
               "Attrtag",
               Sort1( ELLA_MPARAM),
               Sort1( ELLA_ATTR),
               Sort1( "tag"),
               ELLA_table );

   AddElement( ELLA_FINT,
               "Fint",
               Sort2( ELLA_FORMULA, ELLA_FORMULARANGE),
               Sort2( INT, ID),
               Sort2( "int", "text"),
               ELLA_table );

   AddElement( ELLA_FCHECK,
               "Fcheck",
               Sort2( ELLA_FORMULA, ELLA_FORMULARANGE),
               Sort3( INT, ELLA_FORMULA, ELLA_FORMULA),
               Sort3( "sort", "test", "standard"),
               ELLA_table );

   AddElement( ELLA_FARITH,
               "Farith",
               Sort2( ELLA_FORMULA, ELLA_FORMULARANGE),
               Sort1( INT),
               Sort1( "nameno"),
               ELLA_table );

   AddElement( ELLA_FLOCDEC,
               "Flocdec",
               Sort2( ELLA_SEQSTEP, ELLA_STEP),
               Sort1( INT),
               Sort1( "locintno"),
               ELLA_table );

   AddElement( ELLA_FMACSPEC,
               "Fmacspec",
               Sort1( ELLA_MACSPECBODY),
               Sort1( INT),
               Sort1( "specintno"),
               ELLA_table );

   AddElement( ELLA_FNAME,
               "Fname",
               Sort2( ELLA_FORMULA, ELLA_FORMULARANGE),
               Sort1( INT),
               Sort1( "intno"),
               ELLA_table );

   AddElement( ELLA_FDOP,
               "Fdop",
               Sort2( ELLA_FORMULA, ELLA_FORMULARANGE),
               Sort3( ELLA_FORMULA, INT, ELLA_FORMULA),
               Sort3( "left", "sort", "right"),
               ELLA_table );

   AddElement( ELLA_FMOP,
               "Fmop",
               Sort2( ELLA_FORMULA, ELLA_FORMULARANGE),
               Sort2( INT, ELLA_FORMULA),
               Sort2( "sort", "right"),
               ELLA_table );

   AddElement( ELLA_FCOND,
               "Fcond",
               Sort2( ELLA_FORMULA, ELLA_FORMULARANGE),
               Sort3( ELLA_FORMULA, ELLA_FORMULA, ELLA_FORMULA),
               Sort3( "cond", "true", "false"),
               ELLA_table );

   AddElement( ELLA_FBRACKET,
               "Fbracket",
               Sort2( ELLA_FORMULA, ELLA_FORMULARANGE),
               Sort1( ELLA_FORMULA),
               Sort1( "formula"),
               ELLA_table );

   AddElement( ELLA_FMACPAR,
               "Fmacpar",
               Sort2( ELLA_FORMULA, ELLA_FORMULARANGE),
               Sort1( INT),
               Sort1( "macparno"),
               ELLA_table );

   AddElement( ELLA_FNULL,
               "Fnull",
               Sort2( ELLA_FORMULA, ELLA_FORMULARANGE),
               Sort0(),
               Sort0(),
               ELLA_table );

   AddElement( ELLA_FORMULATAG,
               "Formulatag",
               Sort2( ELLA_MPARAM, ELLA_PRINTITEMS),
               Sort1( ELLA_FORMULA),
               Sort1( "tag"),
               ELLA_table );

   AddElement( ELLA_RANGE,
               "Range",
               Sort1( ELLA_FORMULARANGE),
               Sort2( ELLA_FORMULA, ELLA_FORMULA),
               Sort2( "lwb", "upb"),
               ELLA_table );

   AddElement( ELLA_TLOCDEC,
               "Tlocdec",
               Sort2( ELLA_SEQSTEP, ELLA_STEP),
               Sort1( INT),
               Sort1( "loctypeno"),
               ELLA_table );

   AddElement( ELLA_TMACSPEC,
               "Tmacspec",
               Sort1( ELLA_MACSPECBODY),
               Sort1( INT),
               Sort1( "spectypeno"),
               ELLA_table );

   AddElement( ELLA_TNAME,
               "Tname",
               Sort1( ELLA_TYPE),
               Sort1( INT),
               Sort1( "typeno"),
               ELLA_table );

   AddElement( ELLA_TROW,
               "Trow",
               Sort1( ELLA_TYPE),
               Sort2( ELLA_FORMULA, ELLA_TYPE),
               Sort2( "size", "elem"),
               ELLA_table );

   AddElement( ELLA_TSTR,
               "Tstr",
               Sort1( ELLA_TYPE),
               Sort1( ELLA_VECTYPE),
               Sort1( "types"),
               ELLA_table );

   AddElement( ELLA_TFN,
               "Tfn",
               Sort1( ELLA_TYPE),
               Sort2( ELLA_TYPE, ELLA_TYPE),
               Sort2( "to", "from"),
               ELLA_table );

   AddElement( ELLA_TBRACKET,
               "Tbracket",
               Sort1( ELLA_TYPE),
               Sort1( ELLA_TYPE),
               Sort1( "type"),
               ELLA_table );

   AddElement( ELLA_TSTRING,
               "Tstring",
               Sort1( ELLA_TYPE),
               Sort2( ELLA_FORMULA, ELLA_TYPE),
               Sort2( "size", "char"),
               ELLA_table );

   AddElement( ELLA_TVOID,
               "Tvoid",
               Sort1( ELLA_TYPE),
               Sort0(),
               Sort0(),
               ELLA_table );

   AddElement( ELLA_TMACPAR,
               "Tmacpar",
               Sort1( ELLA_TYPE),
               Sort1( INT),
               Sort1( "macparno"),
               ELLA_table );

   AddElement( ELLA_TNULL,
               "Tnull",
               Sort1( ELLA_TYPE),
               Sort0(),
               Sort0(),
               ELLA_table );

   AddElement( ELLA_TYPETAG,
               "Typetag",
               Sort2( ELLA_TYPEBODY, ELLA_MPARAM),
               Sort1( ELLA_TYPE),
               Sort1( "tag"),
               ELLA_table );

   AddElement( ELLA_NEWCHARS,
               "Newchars",
               Sort1( ELLA_TYPEBODY),
               Sort2( ID, ID),
               Sort2( "tagname", "chars"),
               ELLA_table );

   AddElement( ELLA_ALTERNATIVE,
               "Alternative",
               Sort0(),
               Sort2( ID, ELLA_TYPE),
               Sort2( "altname", "assoc"),
               ELLA_table );

   AddElement( ELLA_RVALTERNATIVE,
               "Rvalternative",
               Sort1( ELLA_TYPEBODY),
               Sort1( ELLA_VECALTERNATIVE),
               Sort1( "alternatives"),
               ELLA_table );

   AddElement( ELLA_NEWINTS,
               "Newints",
               Sort1( ELLA_TYPEBODY),
               Sort2( ID, ELLA_RANGE),
               Sort2( "tagname", "range"),
               ELLA_table );

   AddElement( ELLA_CLOCDEC,
               "Clocdec",
               Sort2( ELLA_SEQSTEP, ELLA_STEP),
               Sort1( INT),
               Sort1( "locconstno"),
               ELLA_table );

   AddElement( ELLA_CMACSPEC,
               "Cmacspec",
               Sort1( ELLA_MACSPECBODY),
               Sort1( INT),
               Sort1( "specconstno"),
               ELLA_table );

   AddElement( ELLA_CNAME,
               "Cname",
               Sort1( ELLA_UNIT),
               Sort1( INT),
               Sort1( "constno"),
               ELLA_table );

   AddElement( ELLA_CPRIM,
               "Cprim",
               Sort1( ELLA_UNIT),
               Sort2( INT, INT),
               Sort2( "typeno", "primno"),
               ELLA_table );

   AddElement( ELLA_CINT,
               "Cint",
               Sort1( ELLA_UNIT),
               Sort2( INT, ELLA_FORMULA),
               Sort2( "typeno", "index"),
               ELLA_table );

   AddElement( ELLA_CQUERY,
               "Cquery",
               Sort1( ELLA_UNIT),
               Sort1( ELLA_TYPE),
               Sort1( "querytype"),
               ELLA_table );

   AddElement( ELLA_CQUOTE,
               "Cquote",
               Sort1( ELLA_UNIT),
               Sort2( INT, ELLA_VECINT),
               Sort2( "typeno", "string"),
               ELLA_table );

   AddElement( ELLA_CVOID,
               "Cvoid",
               Sort1( ELLA_UNIT),
               Sort0(),
               Sort0(),
               ELLA_table );

   AddElement( ELLA_CTYPE,
               "Ctype",
               Sort1( ELLA_UNIT),
               Sort1( ELLA_TYPE),
               Sort1( "type"),
               ELLA_table );

   AddElement( ELLA_CRANGE,
               "Crange",
               Sort1( ELLA_UNIT),
               Sort2( INT, ELLA_RANGE),
               Sort2( "typeno", "range"),
               ELLA_table );

   AddElement( ELLA_CPRIMRANGE,
               "Cprimrange",
               Sort1( ELLA_UNIT),
               Sort3( INT, INT, INT),
               Sort3( "typeno", "firstno", "lastno"),
               ELLA_table );

   AddElement( ELLA_UALTS,
               "Ualts",
               Sort1( ELLA_UNIT),
               Sort1( ELLA_VECUNIT),
               Sort1( "alts"),
               ELLA_table );

   AddElement( ELLA_UNAME,
               "Uname",
               Sort1( ELLA_UNIT),
               Sort2( INT, INT),
               Sort2( "sort", "nameno"),
               ELLA_table );

   AddElement( ELLA_UFN,
               "Ufn",
               Sort1( ELLA_UNIT),
               Sort2( ELLA_UNIT, ELLA_UNIT),
               Sort2( "sink", "source"),
               ELLA_table );

   AddElement( ELLA_UASSOC,
               "Uassoc",
               Sort1( ELLA_UNIT),
               Sort3( INT, INT, ELLA_UNIT),
               Sort3( "typeno", "altno", "assoc"),
               ELLA_table );

   AddElement( ELLA_UEXTRACT,
               "Uextract",
               Sort1( ELLA_UNIT),
               Sort3( ELLA_UNIT, INT, INT),
               Sort3( "extract", "typeno", "altno"),
               ELLA_table );

   AddElement( ELLA_UPORTNAME,
               "Uportname",
               Sort1( ELLA_UNIT),
               Sort3( ELLA_UNIT, INT, INT),
               Sort3( "unit", "fnno", "nameno"),
               ELLA_table );

   AddElement( ELLA_UINDEX,
               "Uindex",
               Sort1( ELLA_UNIT),
               Sort2( ELLA_UNIT, ELLA_FORMULA),
               Sort2( "unit", "index"),
               ELLA_table );

   AddElement( ELLA_UTRIM,
               "Utrim",
               Sort1( ELLA_UNIT),
               Sort2( ELLA_UNIT, ELLA_RANGE),
               Sort2( "unit", "range"),
               ELLA_table );

   AddElement( ELLA_UDYINDEX,
               "Udyindex",
               Sort1( ELLA_UNIT),
               Sort2( ELLA_UNIT, ELLA_UNIT),
               Sort2( "unit", "index"),
               ELLA_table );

   AddElement( ELLA_UREPLACE,
               "Ureplace",
               Sort1( ELLA_UNIT),
               Sort3( ELLA_UNIT, ELLA_UNIT, ELLA_UNIT),
               Sort3( "unit", "index", "from"),
               ELLA_table );

   AddElement( ELLA_UROW,
               "Urow",
               Sort1( ELLA_UNIT),
               Sort2( ELLA_FORMULA, ELLA_UNIT),
               Sort2( "size", "elem"),
               ELLA_table );

   AddElement( ELLA_USTR,
               "Ustr",
               Sort1( ELLA_UNIT),
               Sort1( ELLA_VECUNIT),
               Sort1( "elems"),
               ELLA_table );

   AddElement( ELLA_UCONC,
               "Uconc",
               Sort1( ELLA_UNIT),
               Sort4( INT, INT, ELLA_UNIT, ELLA_UNIT),
               Sort4( "string", "sort", "left", "right"),
               ELLA_table );

   AddElement( ELLA_UMINST,
               "Uminst",
               Sort1( ELLA_UNIT),
               Sort2( ELLA_INSTANCE, ELLA_UNIT),
               Sort2( "inst", "right"),
               ELLA_table );

   AddElement( ELLA_UDINST,
               "Udinst",
               Sort1( ELLA_UNIT),
               Sort3( ELLA_UNIT, ELLA_INSTANCE, ELLA_UNIT),
               Sort3( "left", "inst", "right"),
               ELLA_table );

   AddElement( ELLA_UCHOICES,
               "Uchoices",
               Sort0(),
               Sort4( INT, INT, ELLA_UNIT, ELLA_UNIT),
               Sort4( "check", "sort", "test", "output"),
               ELLA_table );

   AddElement( ELLA_UCASE,
               "Ucase",
               Sort1( ELLA_UNIT),
               Sort2( ELLA_UNIT, ELLA_VECUCHOICES),
               Sort2( "input", "choices"),
               ELLA_table );

   AddElement( ELLA_UCOND,
               "Ucond",
               Sort1( ELLA_UNIT),
               Sort3( ELLA_FORMULA, ELLA_UNIT, ELLA_UNIT),
               Sort3( "cond", "true", "false"),
               ELLA_table );

   AddElement( ELLA_UREPL,
               "Urepl",
               Sort1( ELLA_UNIT),
               Sort2( ELLA_FORMULA, ELLA_UNIT),
               Sort2( "repl", "body"),
               ELLA_table );

   AddElement( ELLA_USEQUENCE,
               "Usequence",
               Sort1( ELLA_UNIT),
               Sort2( ELLA_VECSEQUENCE, ELLA_UNIT),
               Sort2( "body", "output"),
               ELLA_table );

   AddElement( ELLA_USERIES,
               "Useries",
               Sort1( ELLA_UNIT),
               Sort2( ELLA_VECSTEP, ELLA_UNIT),
               Sort2( "body", "output"),
               ELLA_table );

   AddElement( ELLA_UATTR,
               "Uattr",
               Sort1( ELLA_UNIT),
               Sort2( ELLA_UNIT, ELLA_ATTR),
               Sort2( "unit", "attr"),
               ELLA_table );

   AddElement( ELLA_UCHECK,
               "Ucheck",
               Sort1( ELLA_UNIT),
               Sort2( ELLA_UNIT, ELLA_FCHECK),
               Sort2( "unit", "fcheck"),
               ELLA_table );

   AddElement( ELLA_UBRACKET,
               "Ubracket",
               Sort1( ELLA_UNIT),
               Sort1( ELLA_UNIT),
               Sort1( "unit"),
               ELLA_table );

   AddElement( ELLA_USTRING,
               "Ustring",
               Sort1( ELLA_UNIT),
               Sort2( ELLA_FORMULA, ELLA_UNIT),
               Sort2( "size", "char"),
               ELLA_table );

   AddElement( ELLA_UNULL,
               "Unull",
               Sort1( ELLA_UNIT),
               Sort0(),
               Sort0(),
               ELLA_table );

   AddElement( ELLA_UNITTAG,
               "Unittag",
               Sort2( ELLA_MPARAM, ELLA_FNBODY),
               Sort1( ELLA_UNIT),
               Sort1( "tag"),
               ELLA_table );

   AddElement( ELLA_FNLOCDEC,
               "Fnlocdec",
               Sort2( ELLA_SEQSTEP, ELLA_STEP),
               Sort1( INT),
               Sort1( "locfnno"),
               ELLA_table );

   AddElement( ELLA_FNMACSPEC,
               "Fnmacspec",
               Sort1( ELLA_MACSPECBODY),
               Sort1( INT),
               Sort1( "specfnno"),
               ELLA_table );

   AddElement( ELLA_MACPARAM,
               "Macparam",
               Sort0(),
               Sort2( INT, ELLA_MPARAM),
               Sort2( "sort", "param"),
               ELLA_table );

   AddElement( ELLA_INSTANCE,
               "Instance",
               Sort1( ELLA_MPARAM),
               Sort3( INT, ELLA_VECMACPARAM, ELLA_ATTR),
               Sort3( "fnno", "macparams", "attr"),
               ELLA_table );

   AddElement( ELLA_IDTAG,
               "Idtag",
               Sort1( ELLA_PRINTITEMS),
               Sort1( ID),
               Sort1( "tag"),
               ELLA_table );

   AddElement( ELLA_PRINT,
               "Print",
               Sort2( ELLA_SEQSTEP, ELLA_STEP),
               Sort2( ELLA_FORMULA, ELLA_VECPRINTITEMS),
               Sort2( "cond", "print"),
               ELLA_table );

   AddElement( ELLA_FAULT,
               "Fault",
               Sort2( ELLA_SEQSTEP, ELLA_STEP),
               Sort2( ELLA_FORMULA, ELLA_VECPRINTITEMS),
               Sort2( "cond", "fault"),
               ELLA_table );

   AddElement( ELLA_LET,
               "Let",
               Sort1( ELLA_STEP),
               Sort2( ELLA_VECINT, ELLA_UNIT),
               Sort2( "letnames", "unit"),
               ELLA_table );

   AddElement( ELLA_SEQLET,
               "Seqlet",
               Sort1( ELLA_SEQSTEP),
               Sort1( ELLA_LET),
               Sort1( "seqlet"),
               ELLA_table );

   AddElement( ELLA_SEQVAR,
               "Seqvar",
               Sort1( ELLA_SEQSTEP),
               Sort1( ELLA_LET),
               Sort1( "seqvar"),
               ELLA_table );

   AddElement( ELLA_SEQPVAR,
               "Seqpvar",
               Sort1( ELLA_SEQSTEP),
               Sort1( ELLA_LET),
               Sort1( "seqpvar"),
               ELLA_table );

   AddElement( ELLA_SEQASSIGN,
               "Seqassign",
               Sort1( ELLA_SEQSTEP),
               Sort2( ELLA_UNIT, ELLA_UNIT),
               Sort2( "to", "from"),
               ELLA_table );

   AddElement( ELLA_SEQCHOICES,
               "Seqchoices",
               Sort0(),
               Sort4( INT, INT, ELLA_UNIT, ELLA_SEQSTEP),
               Sort4( "check", "sort", "test", "output"),
               ELLA_table );

   AddElement( ELLA_SEQCASE,
               "Seqcase",
               Sort1( ELLA_SEQSTEP),
               Sort2( ELLA_UNIT, ELLA_VECSEQCHOICES),
               Sort2( "input", "choices"),
               ELLA_table );

   AddElement( ELLA_SEQCOND,
               "Seqcond",
               Sort1( ELLA_SEQSTEP),
               Sort3( ELLA_FORMULA, ELLA_SEQSTEP, ELLA_SEQSTEP),
               Sort3( "cond", "true", "false"),
               ELLA_table );

   AddElement( ELLA_SEQREPL,
               "Seqrepl",
               Sort1( ELLA_SEQSTEP),
               Sort2( ELLA_FORMULA, ELLA_SEQSTEP),
               Sort2( "repl", "body"),
               ELLA_table );

   AddElement( ELLA_SEQROW,
               "Seqrow",
               Sort1( ELLA_SEQSTEP),
               Sort2( ELLA_FORMULA, ELLA_SEQSTEP),
               Sort2( "size", "body"),
               ELLA_table );

   AddElement( ELLA_SEQNULL,
               "Seqnull",
               Sort1( ELLA_SEQSTEP),
               Sort0(),
               Sort0(),
               ELLA_table );

   AddElement( ELLA_SEQUENCE,
               "Sequence",
               Sort1( ELLA_SEQSTEP),
               Sort1( ELLA_VECSEQSTEP),
               Sort1( "step"),
               ELLA_table );

   AddElement( ELLA_MAKE,
               "Make",
               Sort1( ELLA_STEP),
               Sort3( ELLA_VECFORMULA, ELLA_INSTANCE, ELLA_VECINT),
               Sort3( "sizes", "inst", "makenames"),
               ELLA_table );

   AddElement( ELLA_JOIN,
               "Join",
               Sort1( ELLA_STEP),
               Sort2( ELLA_UNIT, ELLA_UNIT),
               Sort2( "from", "to"),
               ELLA_table );

   AddElement( ELLA_REPLJOIN,
               "Repljoin",
               Sort1( ELLA_STEP),
               Sort2( ELLA_VECFORMULA, ELLA_VECJOIN),
               Sort2( "repls", "joins"),
               ELLA_table );

   AddElement( ELLA_STEPNULL,
               "Stepnull",
               Sort1( ELLA_STEP),
               Sort0(),
               Sort0(),
               ELLA_table );

   AddElement( ELLA_ALIENCODE,
               "Aliencode",
               Sort1( ELLA_FNBODY),
               Sort3( INT, ID, ELLA_VECMACPARAM),
               Sort3( "biop", "name", "macparams"),
               ELLA_table );

   AddElement( ELLA_ARITH,
               "Arith",
               Sort1( ELLA_FNBODY),
               Sort1( ELLA_FORMULA),
               Sort1( "output"),
               ELLA_table );

   AddElement( ELLA_REFORM,
               "Reform",
               Sort1( ELLA_FNBODY),
               Sort0(),
               Sort0(),
               ELLA_table );

   AddElement( ELLA_CTNAME,
               "Ctname",
               Sort0(),
               Sort2( ID, ID),
               Sort2( "contextno", "import"),
               ELLA_table );

   AddElement( ELLA_IMPORT,
               "Import",
               Sort1( ELLA_FNBODY),
               Sort3( ID, INT, ELLA_CTNAME),
               Sort3( "name", "contextno", "ctname"),
               ELLA_table );

   AddElement( ELLA_ADELAY,
               "Adelay",
               Sort1( ELLA_FNBODY),
               Sort5( INT, ELLA_UNIT, ELLA_FORMULA, ELLA_UNIT, ELLA_FORMULA),
               Sort5( "sort", "init", "ambigtime", "ambig", "delaytime"),
               ELLA_table );

   AddElement( ELLA_IDELAY,
               "Idelay",
               Sort1( ELLA_FNBODY),
               Sort2( ELLA_UNIT, ELLA_FORMULA),
               Sort2( "init", "delaytime"),
               ELLA_table );

   AddElement( ELLA_RAM,
               "Ram",
               Sort1( ELLA_FNBODY),
               Sort1( ELLA_UNIT),
               Sort1( "init"),
               ELLA_table );

   AddElement( ELLA_SAMPLE,
               "Sample",
               Sort1( ELLA_FNBODY),
               Sort4( INT, ELLA_FORMULA, ELLA_UNIT, ELLA_FORMULA),
               Sort4( "sort", "interval", "init", "skew"),
               ELLA_table );

   AddElement( ELLA_TIMESCALE,
               "Timescale",
               Sort1( ELLA_FNBODY),
               Sort6( INT, INT, ELLA_INSTANCE, ELLA_FORMULA, ELLA_UNIT, 
                      ELLA_FORMULA),
               Sort6( "faster", "sort", "inst", "scale", "init", "skew"),
               ELLA_table );

   AddElement( ELLA_BODYCHECK,
               "Bodycheck",
               Sort1( ELLA_FNBODY),
               Sort3( ELLA_VECINT, INT, ELLA_FNBODY),
               Sort3( "joincheck", "check", "fnbody"),
               ELLA_table );

   AddElement( ELLA_BODYNULL,
               "Bodynull",
               Sort1( ELLA_FNBODY),
               Sort0(),
               Sort0(),
               ELLA_table );

   AddElement( ELLA_MACSPEC,
               "Macspec",
               Sort0(),
               Sort2( INT, ELLA_MACSPECBODY),
               Sort2( "sort", "spec"),
               ELLA_table );

   AddElement( ELLA_NAMETYPE,
               "Nametype",
               Sort0(),
               Sort3( ID, ELLA_TYPE, ELLA_ATTR),
               Sort3( "name", "type", "attr"),
               ELLA_table );

   AddElement( ELLA_USAGE,
               "Usage",
               Sort0(),
               Sort6( INT, INT, INT, INT, INT, INT),
               Sort6( "contextno", "closureno", "libv_spec", "libv_body", 
                      "import", "export"),
               ELLA_table );

   AddElement( ELLA_ATTRDEC,
               "Attrdec",
               Sort0(),
               Sort4( INT, ID, ELLA_ATTR, ELLA_USAGE),
               Sort4( "sort", "attrname", "value", "usage"),
               ELLA_table );

   AddElement( ELLA_INTDEC,
               "Intdec",
               Sort0(),
               Sort5( INT, ID, ELLA_ATTR, ELLA_FORMULARANGE, ELLA_USAGE),
               Sort5( "sort", "intname", "attr", "value", "usage"),
               ELLA_table );

   AddElement( ELLA_TYPEDEC,
               "Typedec",
               Sort0(),
               Sort5( INT, ID, ELLA_ATTR, ELLA_TYPEBODY, ELLA_USAGE),
               Sort5( "sort", "typename", "attr", "body", "usage"),
               ELLA_table );

   AddElement( ELLA_CONSTDEC,
               "Constdec",
               Sort0(),
               Sort5( INT, ID, ELLA_ATTR, ELLA_UNIT, ELLA_USAGE),
               Sort5( "sort", "constname", "attr", "value", "usage"),
               ELLA_table );

   AddElement( ELLA_FNDEC,
               "Fndec",
               Sort0(),
               Sort10( INT, INT, ID, ELLA_VECMACSPEC, ELLA_ATTR, ELLA_VECINT, 
                       ELLA_VECINT, ELLA_VECNAMETYPE, ELLA_FNBODY, 
                       ELLA_USAGE),
               Sort10( "sort", "macro", "fnname", "macspecs", "attr", 
                       "inputs", "outputs", "nametypes", "fnbody", "usage"),
               ELLA_table );

   AddElement( ELLA_ENVIRON,
               "Environ",
               Sort0(),
               Sort5( ELLA_VECATTRDEC, ELLA_VECINTDEC, ELLA_VECTYPEDEC, 
                      ELLA_VECCONSTDEC, ELLA_VECFNDEC),
               Sort5( "attrs", "ints", "types", "consts", "fns"),
               ELLA_table );

   AddElement( ELLA_OUTER,
               "Outer",
               Sort0(),
               Sort3( INT, INT, ELLA_ENVIRON),
               Sort3( "closureno", "sort", "environ"),
               ELLA_table );

   AddElement( ELLA_CLOSURE,
               "Closure",
               Sort0(),
               Sort1( ELLA_VECOUTER),
               Sort1( "outers"),
               ELLA_table );

   AddSort( ELLA_ATTR, "Attr", ELLA_table);

   AddSort( ELLA_FORMULA, "Formula", ELLA_table);

   AddSort( ELLA_FORMULARANGE, "Formularange", ELLA_table);

   AddSort( ELLA_TYPE, "Type", ELLA_table);

   AddSort( ELLA_TYPEBODY, "Typebody", ELLA_table);

   AddSort( ELLA_UNIT, "Unit", ELLA_table);

   AddSort( ELLA_MPARAM, "Mparam", ELLA_table);

   AddSort( ELLA_PRINTITEMS, "Printitems", ELLA_table);

   AddSort( ELLA_SEQSTEP, "Seqstep", ELLA_table);

   AddSort( ELLA_STEP, "Step", ELLA_table);

   AddSort( ELLA_FNBODY, "Fnbody", ELLA_table);

   AddSort( ELLA_MACSPECBODY, "Macspecbody", ELLA_table);

   return( ELLA_table);
}
