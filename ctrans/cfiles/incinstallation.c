
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
/* UNAME:NDAACTR */
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
A_ISTRUCT(A68_CHAR ,62,A68t38);
typedef struct A68t38  A68_38 ;    /* STRUCT 62 CHAR */
A_ISTRUCT(A68_CHAR ,32,A68t39);
typedef struct A68t39  A68_39 ;    /* STRUCT 32 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t40);
typedef struct A68t40  A68_40 ;    /* STRUCT 7 CHAR */
struct A68t41{
struct A68t40  Prefix;
A_PAD_ISTRUCT(A68_40 ,PAD_1)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_2)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_3)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_4)
A68_BOOL  Keptgenproc;
A_PAD_BOOL(PAD_5)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_6)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t41  A68_41 ;    /* STRUCT(MODE40,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26)  */
A_VECTOR(struct A68t43 ,A68t44);
typedef struct A68t44  A68_44 ;    /* VECTOR [] MODE43 */
struct A68t43{
struct A68t39  N;
A_PAD_ISTRUCT(A68_39 ,PAD_7)
struct A68t39  F;
A_PAD_ISTRUCT(A68_39 ,PAD_8)
A68_INT  Level;
A_PAD_INT(PAD_9)
};
typedef struct A68t43  A68_43 ;    /* STRUCT(MODE39,MODE39,INT)  */
struct A68t45 { A68_INT mode; union {
A68_VC  mode1;
struct A68t44  mode2;
} data; };
typedef struct A68t45  A68_45 ;    /* UNION(REF MODE26,REF MODE44)  */
struct A68t46{
struct A68t39  F;
A_PAD_ISTRUCT(A68_39 ,PAD_10)
A68_INT  No;
A_PAD_INT(PAD_11)
A68_INT  Nl;
A_PAD_INT(PAD_12)
A68_INT  Ng;
A_PAD_INT(PAD_13)
struct A68t45  U;
};
typedef struct A68t46  A68_46 ;    /* STRUCT(MODE39,INT,INT,INT,MODE45)  */
A_VECTOR(struct A68t41 ,A68t47);
typedef struct A68t47  A68_47 ;    /* VECTOR [] MODE41 */
A_VECTOR(struct A68t40 ,A68t48);
typedef struct A68t48  A68_48 ;    /* VECTOR [] MODE40 */
struct A68t42{
struct A68t46  Xs;
struct A68t40  Ys;
A_PAD_ISTRUCT(A68_40 ,PAD_14)
A68_LINT  Timeoflastchange;
A_PAD_LINT(PAD_15)
struct A68t47  Keptinfo;
struct A68t48  Cnames;
};
typedef struct A68t42  A68_42 ;    /* STRUCT(MODE46,MODE40,LONG INT,REF MODE47,REF MODE48)  */
A_VECTOR(struct A68t42 ,A68t50);
typedef struct A68t50  A68_50 ;    /* VECTOR [] MODE42 */
struct A68t49{
struct A68t40  Uname;
A_PAD_ISTRUCT(A68_40 ,PAD_16)
struct A68t40  Lname;
A_PAD_ISTRUCT(A68_40 ,PAD_17)
struct A68t40  Gname;
A_PAD_ISTRUCT(A68_40 ,PAD_18)
struct A68t50  Specs;
};
typedef struct A68t49  A68_49 ;    /* STRUCT(MODE40,MODE40,MODE40,REF MODE50)  */

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
static A68_38   RDAACTR = {"$Id: incinstallation.a68,v 34.2 1995/03/29 13:01:58 ella Exp $"}; 
A_GISVEC(A68_VC ,SDAACTR,RDAACTR,62)
#define TDAACTR_upbofmodes 1023
#define UDAACTR_upbofsidstack 999
#define VDAACTR_maxid 32
#define WDAACTR_maxuname 7
#define XDAACTR_maxchar 256
#define YDAACTR_maxistruct 16777215
 /* line 1: */
 /* line 3: */
void ODAACTR(void)   /* initialise DECS incinstallation */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","./mfiles","-staredit","59LR","./a68files/incinstallation.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ctrans/assoc/./a68files/incinstallation.a68";
A_config.translation_time = "Tue Apr  4 09:26:51 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "NDAACTR (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:26:51 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS incinstallation);
UEAALIB_a68config(LGAALIB_configinfo, SDAACTR);
 /* line 66: */
 /* line 99: */
 /* line 101: */
 /* line 102: */
 /* line 103: */
 /* line 104: */
 /* line 105: */
 /* line 106: */
 /* line 109: */
 /* line 113: */
A_PROC_EXIT(DECS incinstallation);
} 
#undef NL
/* end of translation of ./a68files/incinstallation.a68 */