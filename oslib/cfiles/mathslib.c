
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
/* UNAME:AAAAOSL */
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
A_ISTRUCT(A68_CHAR ,55,A68t38);
typedef struct A68t38  A68_38 ;    /* STRUCT 55 CHAR */

A_PROCEDURE(A68_REAL ,A68t39,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t39  A68_39 ;    /* PROC(REAL) REAL */

/* --- Imports from a68config --- */
extern A68_VOID  ABAALIB_a68init(struct A68t33 );
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
static A68_38   EAAAOSL = {"$Id: mathslib.a68,v 34.2 1995/03/29 13:02:17 ella Exp $"}; 
A_GISVEC(A68_VC ,FAAAOSL,EAAAOSL,55)
#include <math.h>

#define GAAAOSL_sqrt sqrt
#include <math.h>

#define HAAAOSL_exp exp
#include <math.h>

#define IAAAOSL_ln log
#include <math.h>

#define JAAAOSL_cos cos
#include <math.h>

#define KAAAOSL_sin sin
#include <math.h>

#define LAAAOSL_tan tan
#include <math.h>

#define MAAAOSL_arccos acos
#include <math.h>

#define NAAAOSL_arcsin asin
#include <math.h>

#define OAAAOSL_arctan atan
static A68_REAL  PAAAOSL_hp;
A68_REAL  SAAAOSL_halfpi;
A68_REAL  TAAAOSL_pi;
A68_REAL  UAAAOSL_twopi;

A_STATIC A68_VOID  QAAAOSL_anonymous(void);

A_STATIC A68_VOID  QAAAOSL_anonymous(void)
{ 
PAAAOSL_hp = (2.0*OAAAOSL_arctan(1.0));
return;
} 
#undef NL
 /* line 1: */
 /* line 3: */
void BAAAOSL(void)   /* initialise DECS mathslib */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/mathslib.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_33  RAAAOSL;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/oslib/assoc/./a68files/mathslib.a68";
A_config.translation_time = "Tue Apr  4 09:46:52 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "AAAAOSL (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:46:52 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS mathslib);
UEAALIB_a68config(LGAALIB_configinfo, FAAAOSL);
 /* line 42: */
 /* line 43: */
 /* line 44: */
 /* line 45: */
 /* line 46: */
 /* line 47: */
 /* line 48: */
 /* line 49: */
 /* line 50: */
 /* line 52: */
RAAAOSL.fn.fn_global = QAAAOSL_anonymous;
RAAAOSL.nonlocals = A68_NIL;
ABAALIB_a68init(RAAAOSL);
 /* line 54: */
SAAAOSL_halfpi = PAAAOSL_hp;
TAAAOSL_pi = (2.0*SAAAOSL_halfpi);
 /* line 56: */
UAAAOSL_twopi = (2.0*TAAAOSL_pi);
 /* line 58: */
A_PROC_EXIT(DECS mathslib);
} 
#undef NL
/* end of translation of ./a68files/mathslib.a68 */
