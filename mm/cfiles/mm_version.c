
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
/* UNAME:AAAAAMM */
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
A_ISTRUCT(A68_CHAR ,57,A68t38);
typedef struct A68t38  A68_38 ;    /* STRUCT 57 CHAR */
A_ISTRUCT(A68_CHAR ,17,A68t39);
typedef struct A68t39  A68_39 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,25,A68t40);
typedef struct A68t40  A68_40 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t41);
typedef struct A68t41  A68_41 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,35,A68t42);
typedef struct A68t42  A68_42 ;    /* STRUCT 35 CHAR */

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
static A68_38   EAAAAMM = {"$Id: mm_version.a68,v 34.4 1995/03/29 13:02:36 ella Exp $"}; 
A_GISVEC(A68_VC ,FAAAAMM,EAAAAMM,57)
static A68_39   GAAAAMM = {" 9 Dec 1994 16:27"}; 
A_GISVEC(A68_VC ,HAAAAMM,GAAAAMM,17)
A68_VC  IAAAAMM_mm_date;
static A68_40   JAAAAMM = {"Correct remove module bug"}; 
A_GISVEC(A68_VC ,KAAAAMM,JAAAAMM,25)
A68_VC  LAAAAMM_mm_string;
static A68_41   MAAAAMM = {"58"}; 
A_GISVEC(A68_VC ,NAAAAMM,MAAAAMM,2)
A68_VC  OAAAAMM_mm_number;
static A68_42   PAAAAMM = {"/u/snell/develop/mm -   9 Dec 15:27"}; 
A_GISVEC(A68_VC ,QAAAAMM,PAAAAMM,35)
A68_VC  RAAAAMM_mm_created;
 /* line 1: */
 /* line 3: */
void BAAAAMM(void)   /* initialise DECS mm_version */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259U","./a68files/mm_version.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/mm/assoc/./a68files/mm_version.a68";
A_config.translation_time = "Tue Apr  4 09:54:18 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "AAAAAMM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:54:18 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS mm_version);
UEAALIB_a68config(LGAALIB_configinfo, FAAAAMM);
 /* line 45: */
 /* line 46: */
IAAAAMM_mm_date = HAAAAMM;
 /* line 47: */
LAAAAMM_mm_string = KAAAAMM;
 /* line 48: */
OAAAAMM_mm_number = NAAAAMM;
 /* line 49: */
RAAAAMM_mm_created = QAAAAMM;
 /* line 50: */
 /* line 51: */
 /* line 52: */
/*SKIP*/;
A_PROC_EXIT(DECS mm_version);
} 
#undef NL
/* end of translation of ./a68files/mm_version.a68 */
