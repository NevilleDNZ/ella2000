
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
/* UNAME:YDAACTR */
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
static A68_38   CEAACTR = {"$Id: incmode.a68,v 34.2 1995/03/29 13:01:58 ella Exp $"}; 
A_GISVEC(A68_VC ,DEAACTR,CEAACTR,54)
#define EEAACTR_primitive 1
#define FEAACTR_proc 2
#define GEAACTR_procp 3
#define HEAACTR_union 4
#define IEAACTR_struct 5
#define JEAACTR_istruct 6
#define KEAACTR_row 7
#define LEAACTR_vector 8
#define MEAACTR_flexrow 9
#define NEAACTR_flexvector 10
#define OEAACTR_straight 11
#define PEAACTR_nomode 0
#define QEAACTR_vacmode 1
#define REAACTR_skipmode 2
#define SEAACTR_nilmode 3
#define TEAACTR_gotomode 4
#define UEAACTR_voidmode 5
#define VEAACTR_faultmode 6
#define WEAACTR_boolmode 7
#define XEAACTR_charmode 8
#define YEAACTR_formatmode 9
#define ZEAACTR_shortbitsmode 10
#define AFAACTR_bitsmode 11
#define BFAACTR_longbitsmode 12
#define CFAACTR_longlongbitsmode 13
#define DFAACTR_shortintmode 14
#define EFAACTR_intmode 15
#define FFAACTR_longintmode 16
#define GFAACTR_longlongintmode 17
#define HFAACTR_shortrealmode 18
#define IFAACTR_realmode 19
#define JFAACTR_longrealmode 20
#define KFAACTR_longlongrealmode 21
#define LFAACTR_shortcomplmode 22
#define MFAACTR_complmode 23
#define NFAACTR_longcomplmode 24
#define OFAACTR_longlongcomplmode 25
#define PFAACTR_vectorrowofcharmode 26
#define QFAACTR_rowofcharmode 27
#define RFAACTR_collatmode 28
#define SFAACTR_xtypemode 29
#define TFAACTR_ytypemode 30
#define UFAACTR_firstnonfixedmode 31
#define VFAACTR_refmark 1024
A68_INT  WFAACTR_refrefmark;
 /* line 1: */
 /* line 3: */
void ZDAACTR(void)   /* initialise DECS incmode */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","./mfiles","-staredit","59LR","./a68files/incmode.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ctrans/assoc/./a68files/incmode.a68";
A_config.translation_time = "Tue Apr  4 09:26:52 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "YDAACTR (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:26:52 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS incmode);
UEAALIB_a68config(LGAALIB_configinfo, DEAACTR);
 /* line 42: */
 /* line 43: */
 /* line 44: */
 /* line 45: */
 /* line 46: */
 /* line 47: */
 /* line 48: */
 /* line 49: */
 /* line 50: */
 /* line 51: */
 /* line 52: */
 /* line 54: */
 /* line 55: */
 /* line 56: */
 /* line 57: */
 /* line 58: */
 /* line 59: */
 /* line 60: */
 /* line 63: */
 /* line 64: */
 /* line 65: */
 /* line 66: */
 /* line 67: */
 /* line 68: */
 /* line 69: */
 /* line 70: */
 /* line 71: */
 /* line 72: */
 /* line 73: */
 /* line 74: */
 /* line 75: */
 /* line 76: */
 /* line 77: */
 /* line 78: */
 /* line 79: */
 /* line 80: */
 /* line 81: */
 /* line 82: */
 /* line 83: */
 /* line 84: */
 /* line 85: */
 /* line 86: */
 /* line 88: */
 /* line 90: */
 /* line 91: */
 /* line 93: */
WFAACTR_refrefmark = (VFAACTR_refmark+VFAACTR_refmark);
 /* line 106: */
A_PROC_EXIT(DECS incmode);
} 
#undef NL
/* end of translation of ./a68files/incmode.a68 */
