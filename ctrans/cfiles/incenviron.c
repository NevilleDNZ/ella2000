
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
/* UNAME:ZGAACTR */
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
struct A68t39{
A68_INT  Decno;
A_PAD_INT(PAD_1)
struct A68t39 * Rest;
};
typedef struct A68t39  A68_39 ;    /* STRUCT(INT,REF MODE39)  */
struct A68t40{
A68_INT  Level;
A_PAD_INT(PAD_2)
A68_INT  Block;
A_PAD_INT(PAD_3)
A68_INT  Rdenno;
A_PAD_INT(PAD_4)
struct A68t39 * Nonlocals;
};
typedef struct A68t40  A68_40 ;    /* STRUCT(INT,INT,INT,REF MODE39)  */
struct A68t41{
struct A68t40  Env;
struct A68t41 * Rest;
};
typedef struct A68t41  A68_41 ;    /* STRUCT(MODE40,REF MODE41)  */
struct A68t42{
A68_INT  Level;
A_PAD_INT(PAD_5)
A68_INT  Block;
A_PAD_INT(PAD_6)
};
typedef struct A68t42  A68_42 ;    /* STRUCT(INT,INT)  */

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
static A68_38   DHAACTR = {"$Id: incenviron.a68,v 34.2 1995/03/29 13:01:55 ella Exp $"}; 
A_GISVEC(A68_VC ,EHAACTR,DHAACTR,57)
A68_39 * FHAACTR_emptynonloclist;
A68_41 * GHAACTR_emptyenvironstack;
A68_42  IHAACTR_nullenviron;
static A68_40  KHAACTR_globalenviron;
 /* line 1: */
 /* line 3: */
void AHAACTR(void)   /* initialise DECS incenviron */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","./mfiles","-staredit","59LR","./a68files/incenviron.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_42  HHAACTR;  /* collateral clause result */
A68_40  JHAACTR;  /* collateral clause result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ctrans/assoc/./a68files/incenviron.a68";
A_config.translation_time = "Tue Apr  4 09:26:54 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "ZGAACTR (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:26:54 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS incenviron);
UEAALIB_a68config(LGAALIB_configinfo, EHAACTR);
 /* line 42: */
 /* line 50: */
 /* line 52: */
FHAACTR_emptynonloclist = (A68_39 *)A68_NIL;
 /* line 53: */
GHAACTR_emptyenvironstack = (A68_41 *)A68_NIL;
 /* line 54: */
HHAACTR.Level = 0;
HHAACTR.Block = 0;
IHAACTR_nullenviron = HHAACTR;
 /* line 55: */
JHAACTR.Level = 0;
JHAACTR.Block = 0;
JHAACTR.Rdenno = 0;
JHAACTR.Nonlocals = (A68_39 *)A68_NIL;
KHAACTR_globalenviron = JHAACTR;
 /* line 56: */
 /* line 58: */
 /* line 60: */
/*SKIP*/;
A_PROC_EXIT(DECS incenviron);
} 
#undef NL
/* end of translation of ./a68files/incenviron.a68 */
