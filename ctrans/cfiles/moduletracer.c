
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

                         Crown Copyright, (c)   1995

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

*/
/* UNAME:ACHACTR */
#include "Asupport.h"

A_PROCEDURE(A68_INT *,A68t31,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t31  A68_31 ;    /* PROC(REF INT,MODE26) REF INT */

A_PROCEDURE(A68_VOID ,A68t32,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t32  A68_32 ;    /* PROC(REF MODE26,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t33,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t33  A68_33 ;    /* PROC(REF MODE26,CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t34,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t34  A68_34 ;    /* PROC(MODE26,CHAR) MODE26 */
struct A68t36 ;

A_PROCEDURE(A68_VOID ,A68t35,(struct A68t36 ,A68_VC *),(struct A68t36 ,A68_VC *,void *));
typedef struct A68t35  A68_35 ;    /* PROC(MODE36) REF MODE26 */
A_VECTOR(A68_VC ,A68t36);
typedef struct A68t36  A68_36 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_INT ,A68t37,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t37  A68_37 ;    /* PROC(CHAR,MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t38,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t38  A68_38 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t39,(A68_VC ,A68_CHAR ),(A68_VC ,A68_CHAR ,void *));
typedef struct A68t39  A68_39 ;    /* PROC(REF MODE26,CHAR) VOID */
A_ISTRUCT(A68_CHAR ,4,A68t40);
typedef struct A68t40  A68_40 ;    /* STRUCT 4 CHAR */

A_PROCEDURE(struct A68t40 ,A68t41,(A68_INT ),(A68_INT ,void *));
typedef struct A68t41  A68_41 ;    /* PROC(INT) MODE40 */

A_PROCEDURE(A68_INT ,A68t42,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t42  A68_42 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_VOID ,A68t43,(A68_CHAR ,A68_VC ,A68_VC *),(A68_CHAR ,A68_VC ,A68_VC *,void *));
typedef struct A68t43  A68_43 ;    /* PROC(CHAR,REF MODE26) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t44,(A68_VC ),(A68_VC ,void *));
typedef struct A68t44  A68_44 ;    /* PROC(MODE26) INT */

A_PROCEDURE(A68_BITS ,A68t45,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t45  A68_45 ;    /* PROC(BITS,BITS) BITS */

A_PROCEDURE(A68_LBITS ,A68t46,(A68_LBITS ,A68_LBITS ),(A68_LBITS ,A68_LBITS ,void *));
typedef struct A68t46  A68_46 ;    /* PROC(LONG BITS,LONG BITS) LONG BITS */

A_PROCEDURE(A68_BITS *,A68t47,(A68_BITS *,A68_BITS ),(A68_BITS *,A68_BITS ,void *));
typedef struct A68t47  A68_47 ;    /* PROC(REF BITS,BITS) REF BITS */

A_PROCEDURE(A68_VOID ,A68t48,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t49,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t49  A68_49 ;    /* PROC(INT,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t50,(A68_LINT ,A68_INT ,A68_VC *),(A68_LINT ,A68_INT ,A68_VC *,void *));
typedef struct A68t50  A68_50 ;    /* PROC(LONG INT,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t51,(A68_CHAR ,A68_INT *,A68_VC ),(A68_CHAR ,A68_INT *,A68_VC ,void *));
typedef struct A68t51  A68_51 ;    /* PROC(CHAR,REF INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t52,(A68_LBITS ,A68_INT ,A68_VC *),(A68_LBITS ,A68_INT ,A68_VC *,void *));
typedef struct A68t52  A68_52 ;    /* PROC(LONG BITS,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t53,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t53  A68_53 ;    /* PROC(REF INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t54,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t54  A68_54 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t55,(void),(void *));
typedef struct A68t55  A68_55 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t56,(struct A68t55 ),(struct A68t55 ,void *));
typedef struct A68t56  A68_56 ;    /* PROC(MODE55) VOID */

A_PROCEDURE(A68_VOID ,A68t57,(A68_VC ),(A68_VC ,void *));
typedef struct A68t57  A68_57 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t58,(struct A68t57 ),(struct A68t57 ,void *));
typedef struct A68t58  A68_58 ;    /* PROC(MODE57) VOID */

A_PROCEDURE(A68_VOID ,A68t59,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t59  A68_59 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,59,A68t60);
typedef struct A68t60  A68_60 ;    /* STRUCT 59 CHAR */
struct A68t61{
A68_VC  Name;
A68_INT  Tracelevel;
A_PAD_INT(PAD_1)
struct A68t61 * Next;
};
typedef struct A68t61  A68_61 ;    /* STRUCT(REF MODE26,INT,REF MODE61)  */

A_PROCEDURE(struct A68t61 *,A68t62,(A68_VC ),(A68_VC ,void *));
typedef struct A68t62  A68_62 ;    /* PROC(MODE26) REF MODE61 */
A_ISTRUCT(A68_CHAR ,3,A68t63);
typedef struct A68t63  A68_63 ;    /* STRUCT 3 CHAR */

A_PROCEDURE(A68_BOOL ,A68t64,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(INT,MODE26) BOOL */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from usefulops --- */
extern A68_VOID  ZAAAOSI_makervc(A68_VC ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void WPAAOSI(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_60   ECHACTR = {"$Id: moduletracer.a68,v 34.2 1995/03/29 13:02:04 ella Exp $"}; 
A_GISVEC(A68_VC ,FCHACTR,ECHACTR,59)
#define GCHACTR_niltraceinfo (A68_61 *)A68_NIL
static A68_61 * HCHACTR_traceinfo;
static A68_63   OCHACTR = {"all"}; 
A_GISVEC(A68_VC ,PCHACTR,OCHACTR,3)

A_STATIC A68_61 * JCHACTR_findtraceinfo(A68_VC  Keyword);

A68_BOOL  TCHACTR_settracelevel(A68_INT  Level, A68_VC  Keyword);

A68_INT  ZCHACTR_tracelevel(A68_VC  Keyword);

A_STATIC A68_61 * JCHACTR_findtraceinfo(A68_VC  Keyword)
{ 
A68_61 * KCHACTR_t;
A68_BOOL  LCHACTR_found;
A68_BOOL  MCHACTR;  /* optbool result */
A68_BOOL  NCHACTR;  /* optbool result */
A68_61 * QCHACTR;  /* clause result */
A_PROC_ENTRY(findtraceinfo);
 /* line 57: */
 /* line 58: */
{ 
KCHACTR_t = HCHACTR_traceinfo;
 /* line 59: */
LCHACTR_found = A68_FALSE;
 /* line 61: */
for ( ;; )
{ 
 /* line 62: */
MCHACTR = (KCHACTR_t!=GCHACTR_niltraceinfo);
if ( MCHACTR )
{MCHACTR = !LCHACTR_found;
}
 /* line 63: */
if ( !(MCHACTR) ) break;
NCHACTR = A_VC_EQ((*(&(KCHACTR_t->Name))),Keyword);
if ( ! NCHACTR )
{ /* line 64: */
NCHACTR = A_VC_EQ((*(&(KCHACTR_t->Name))),PCHACTR);
}
if ( NCHACTR )
{ 
 /* line 65: */
LCHACTR_found = A68_TRUE;
} 
else
{ 
 /* line 66: */
 /* line 67: */
KCHACTR_t = (*(&(KCHACTR_t->Next)));
} 
}
 /* line 69: */
 /* line 70: */
QCHACTR = KCHACTR_t;
} 
A_PROC_EXIT(findtraceinfo);
return( QCHACTR );
} 
#undef NL

A68_BOOL  TCHACTR_settracelevel(A68_INT  Level, A68_VC  Keyword)
{ 
A68_61  UCHACTR;  /* collateral clause result */
A68_VC  VCHACTR;  /* avoid structure result */
A68_61 * WCHACTR;  /* YIELD */
A68_BOOL  XCHACTR;  /* clause result */
A_PROC_ENTRY(settracelevel);
 /* line 73: */
 /* line 74: */
{ 
ZAAAOSI_makervc( Keyword, &VCHACTR );
UCHACTR.Name = VCHACTR;
UCHACTR.Tracelevel = Level;
UCHACTR.Next = HCHACTR_traceinfo;
WCHACTR = A_HEAP(A68_61 ) ;
(*WCHACTR) = UCHACTR ;
HCHACTR_traceinfo = WCHACTR;
 /* line 75: */
 /* line 76: */
XCHACTR = A68_TRUE;
} 
A_PROC_EXIT(settracelevel);
return( XCHACTR );
} 
#undef NL

A68_INT  ZCHACTR_tracelevel(A68_VC  Keyword)
{ 
A68_61 * ADHACTR_t;
A68_BOOL  BDHACTR;  /* clause result */
A68_INT  CDHACTR;  /* clause result */
A_PROC_ENTRY(tracelevel);
 /* line 79: */
 /* line 80: */
{ 
ADHACTR_t = JCHACTR_findtraceinfo(Keyword);
 /* line 81: */
 /* line 82: */
 /* line 83: */
BDHACTR = (ADHACTR_t==GCHACTR_niltraceinfo);
if ( BDHACTR )
{ 
 /* line 84: */
CDHACTR = 0;
} 
else
{ 
CDHACTR = (*(&(ADHACTR_t->Tracelevel)));
} 
} 
A_PROC_EXIT(tracelevel);
return( CDHACTR );
} 
#undef NL
 /* line 2: */
 /* line 5: */
void BCHACTR(void)   /* initialise DECS moduletracer */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","./mfiles","-staredit","59LR","./a68files/moduletracer.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/osif/assoc/mfiles/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
WPAAOSI();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ctrans/assoc/./a68files/moduletracer.a68";
A_config.translation_time = "Tue Apr  4 09:29:38 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "ACHACTR (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:29:38 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS moduletracer);
UEAALIB_a68config(LGAALIB_configinfo, FCHACTR);
 /* line 44: */
 /* line 49: */
 /* line 51: */
 /* line 53: */
HCHACTR_traceinfo = GCHACTR_niltraceinfo;
 /* line 55: */
 /* line 72: */
 /* line 78: */
 /* line 86: */
 /* line 88: */
 /* line 91: */
/*SKIP*/;
A_PROC_EXIT(DECS moduletracer);
} 
#undef NL
/* end of translation of ./a68files/moduletracer.a68 */
