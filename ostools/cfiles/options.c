
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
/* UNAME:AAAAOST */
#include "Asupport.h"

A_PROCEDURE(A68_VOID ,A68t31,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t31  A68_31 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t32,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t32  A68_32 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t33,(void),(void *));
typedef struct A68t33  A68_33 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t34,(struct A68t33 ),(struct A68t33 ,void *));
typedef struct A68t34  A68_34 ;    /* PROC(MODE33) VOID */

A_PROCEDURE(A68_VOID ,A68t35,(A68_VC ),(A68_VC ,void *));
typedef struct A68t35  A68_35 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t36,(struct A68t35 ),(struct A68t35 ,void *));
typedef struct A68t36  A68_36 ;    /* PROC(MODE35) VOID */

A_PROCEDURE(A68_VOID ,A68t37,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t37  A68_37 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,54,A68t38);
typedef struct A68t38  A68_38 ;    /* STRUCT 54 CHAR */
struct A68t39{
A68_BITS  Options;
A_PAD_BITS(PAD_1)
};
typedef struct A68t39  A68_39 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t40,(struct A68t39 ,struct A68t39 ,struct A68t39 *),(struct A68t39 ,struct A68t39 ,struct A68t39 *,void *));
typedef struct A68t40  A68_40 ;    /* PROC(MODE39,MODE39) MODE39 */

A_PROCEDURE(struct A68t39 *,A68t41,(struct A68t39 *,struct A68t39 ),(struct A68t39 *,struct A68t39 ,void *));
typedef struct A68t41  A68_41 ;    /* PROC(REF MODE39,MODE39) REF MODE39 */

A_PROCEDURE(A68_BOOL ,A68t42,(struct A68t39 ,struct A68t39 ),(struct A68t39 ,struct A68t39 ,void *));
typedef struct A68t42  A68_42 ;    /* PROC(MODE39,MODE39) BOOL */

A_PROCEDURE(A68_BOOL ,A68t43,(struct A68t39 ,A68_INT ),(struct A68t39 ,A68_INT ,void *));
typedef struct A68t43  A68_43 ;    /* PROC(MODE39,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t44,(A68_INT ,struct A68t39 *),(A68_INT ,struct A68t39 *,void *));
typedef struct A68t44  A68_44 ;    /* PROC(INT) MODE39 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
/* --- end of DECS initialisation functions --- */
static A68_38   EAAAOST = {"$Id: options.a68,v 34.2 1995/03/29 13:02:28 ella Exp $"}; 
A_GISVEC(A68_VC ,FAAAOST,EAAAOST,54)
A68_39  LCAAOST_ans;
A68_39  OCAAOST_null_options;

A68_VOID  IAAAOST_(A68_39  A, A68_39  B, A68_39  *ReturnedValue);

A68_39 * OAAAOST_plusab(A68_39 * A, A68_39  B);

A68_VOID  TAAAOST_(A68_39  A, A68_39  B, A68_39  *ReturnedValue);

A68_39 * ZAAAOST_minusab(A68_39 * A, A68_39  B);

A68_BOOL  EBAAOST_(A68_39  A, A68_39  B);

A68_BOOL  IBAAOST_(A68_39  A, A68_39  B);

A68_BOOL  MBAAOST_includes(A68_39  Options, A68_39  Option);

A68_BOOL  QBAAOST_includes(A68_39  Options, A68_INT  Nth);

A68_BOOL  WBAAOST_excludes(A68_39  Options, A68_39  Option);

A68_BOOL  ACAAOST_excludes(A68_39  Options, A68_INT  Nth);

A68_VOID  FCAAOST_makeoptions(A68_INT  Nth, A68_39  *ReturnedValue);

A68_VOID  IAAAOST_(A68_39  A, A68_39  B, A68_39  *ReturnedValue)
{ 
A68_39  JAAAOST_ans;
A68_BITS * KAAAOST;  /* YIELD */
A68_39  LAAAOST;  /* clause result */
A_PROC_ENTRY(+);
 /* line 58: */
 /* line 59: */
{ 
JAAAOST_ans = A;
 /* line 60: */
KAAAOST = (&((&JAAAOST_ans)->Options)) ;
(*KAAAOST) = (A68_BITS )((*(&((&JAAAOST_ans)->Options)))|B.Options);
 /* line 61: */
 /* line 62: */
LAAAOST = JAAAOST_ans;
} 
A_PROC_EXIT(+);
*ReturnedValue = (LAAAOST);
return;
} 
#undef NL

A68_39 * OAAAOST_plusab(A68_39 * A, A68_39  B)
{ 
A68_BITS * PAAAOST;  /* YIELD */
A68_39 * QAAAOST;  /* clause result */
A_PROC_ENTRY(plusab);
 /* line 65: */
 /* line 66: */
{ 
PAAAOST = (&(A->Options)) ;
(*PAAAOST) = (A68_BITS )((*(&(A->Options)))|B.Options);
 /* line 67: */
 /* line 68: */
QAAAOST = A;
} 
A_PROC_EXIT(plusab);
return( QAAAOST );
} 
#undef NL

A68_VOID  TAAAOST_(A68_39  A, A68_39  B, A68_39  *ReturnedValue)
{ 
A68_39  UAAAOST_ans;
A68_BITS * VAAAOST;  /* YIELD */
A68_39  WAAAOST;  /* clause result */
A_PROC_ENTRY(-);
 /* line 71: */
 /* line 72: */
{ 
UAAAOST_ans = A;
 /* line 73: */
VAAAOST = (&((&UAAAOST_ans)->Options)) ;
(*VAAAOST) = (A68_BITS )((*(&((&UAAAOST_ans)->Options)))&~B.Options);
 /* line 74: */
 /* line 75: */
WAAAOST = UAAAOST_ans;
} 
A_PROC_EXIT(-);
*ReturnedValue = (WAAAOST);
return;
} 
#undef NL

A68_39 * ZAAAOST_minusab(A68_39 * A, A68_39  B)
{ 
A68_BITS * ABAAOST;  /* YIELD */
A68_39 * BBAAOST;  /* clause result */
A_PROC_ENTRY(minusab);
 /* line 78: */
 /* line 79: */
{ 
ABAAOST = (&(A->Options)) ;
(*ABAAOST) = (A68_BITS )((*(&(A->Options)))&~B.Options);
 /* line 80: */
 /* line 81: */
BBAAOST = A;
} 
A_PROC_EXIT(minusab);
return( BBAAOST );
} 
#undef NL

A68_BOOL  EBAAOST_(A68_39  A, A68_39  B)
{ 
A68_BOOL  FBAAOST;  /* clause result */
A_PROC_ENTRY(=);
FBAAOST = (A.Options==B.Options);
A_PROC_EXIT(=);
return( FBAAOST );
} 
#undef NL

A68_BOOL  IBAAOST_(A68_39  A, A68_39  B)
{ 
A68_BOOL  JBAAOST;  /* clause result */
A_PROC_ENTRY(/=);
JBAAOST = (A.Options!=B.Options);
A_PROC_EXIT(/=);
return( JBAAOST );
} 
#undef NL

A68_BOOL  MBAAOST_includes(A68_39  Options, A68_39  Option)
{ 
A68_BOOL  NBAAOST;  /* clause result */
A_PROC_ENTRY(includes);
 /* line 92: */
NBAAOST = ((A68_BITS )(Options.Options&Option.Options)!=0X0U);
A_PROC_EXIT(includes);
return( NBAAOST );
} 
#undef NL

A68_BOOL  QBAAOST_includes(A68_39  Options, A68_INT  Nth)
{ 
A68_BOOL  RBAAOST;  /* clause result */
A68_BITS  SBAAOST;  /* SHL */
A68_INT  TBAAOST;  /* SHL */
A_PROC_ENTRY(includes);
 /* line 95: */
SBAAOST = 0X1U ;
TBAAOST = (Nth-1) ;
RBAAOST = ((A68_BITS )(Options.Options&A_SHL(SBAAOST,TBAAOST))!=0X0U);
A_PROC_EXIT(includes);
return( RBAAOST );
} 
#undef NL

A68_BOOL  WBAAOST_excludes(A68_39  Options, A68_39  Option)
{ 
A68_BOOL  XBAAOST;  /* clause result */
A_PROC_ENTRY(excludes);
 /* line 98: */
XBAAOST = ((A68_BITS )(Options.Options&Option.Options)==0X0U);
A_PROC_EXIT(excludes);
return( XBAAOST );
} 
#undef NL

A68_BOOL  ACAAOST_excludes(A68_39  Options, A68_INT  Nth)
{ 
A68_BOOL  BCAAOST;  /* clause result */
A68_BITS  CCAAOST;  /* SHL */
A68_INT  DCAAOST;  /* SHL */
A_PROC_ENTRY(excludes);
 /* line 101: */
CCAAOST = 0X1U ;
DCAAOST = (Nth-1) ;
BCAAOST = ((A68_BITS )(Options.Options&A_SHL(CCAAOST,DCAAOST))==0X0U);
A_PROC_EXIT(excludes);
return( BCAAOST );
} 
#undef NL

A68_VOID  FCAAOST_makeoptions(A68_INT  Nth, A68_39  *ReturnedValue)
{ 
A68_39  GCAAOST_ans;
A68_BITS  HCAAOST;  /* SHL */
A68_INT  ICAAOST;  /* SHL */
A68_BITS * JCAAOST;  /* YIELD */
A68_39  KCAAOST;  /* clause result */
A_PROC_ENTRY(makeoptions);
 /* line 107: */
 /* line 108: */
{ 
 /* line 109: */
HCAAOST = 0X1U ;
ICAAOST = (Nth-1) ;
JCAAOST = (&((&GCAAOST_ans)->Options)) ;
(*JCAAOST) = A_SHL(HCAAOST,ICAAOST);
 /* line 110: */
 /* line 111: */
KCAAOST = GCAAOST_ans;
} 
A_PROC_EXIT(makeoptions);
*ReturnedValue = (KCAAOST);
return;
} 
#undef NL
 /* line 1: */
 /* line 4: */
void BAAAOST(void)   /* initialise DECS options */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/options.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_BITS * MCAAOST;  /* YIELD */
A68_39  NCAAOST;  /* clause result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ostools/assoc/./a68files/options.a68";
A_config.translation_time = "Tue Apr  4 09:49:06 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "AAAAOST (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:49:06 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS options);
UEAALIB_a68config(LGAALIB_configinfo, FAAAOST);
 /* line 53: */
 /* line 57: */
 /* line 64: */
 /* line 70: */
 /* line 77: */
 /* line 84: */
 /* line 85: */
 /* line 91: */
 /* line 94: */
 /* line 97: */
 /* line 100: */
 /* line 106: */
 /* line 115: */
{ 
MCAAOST = (&((&LCAAOST_ans)->Options)) ;
(*MCAAOST) = 0X0U;
 /* line 117: */
NCAAOST = LCAAOST_ans;
} 
OCAAOST_null_options = NCAAOST;
 /* line 123: */
A_PROC_EXIT(DECS options);
} 
#undef NL
/* end of translation of ./a68files/options.a68 */
