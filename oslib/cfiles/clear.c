
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
/* UNAME:YEAAOSL */
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
A_ISTRUCT(A68_CHAR ,52,A68t38);
typedef struct A68t38  A68_38 ;    /* STRUCT 52 CHAR */
A_VECTOR(A68_INT ,A68t40);
typedef struct A68t40  A68_40 ;    /* VECTOR [] INT */
A_VECTOR(A68_REAL ,A68t42);
typedef struct A68t42  A68_42 ;    /* VECTOR [] REAL */
A_STRAIGHT(A68_VOID,A68t43);
typedef struct A68t43  A68_43 ;    /* STRAIGHT MODE41 */
struct A68t41 { A68_INT mode; union {
A68_CHAR * mode1;
A68_VC  mode2;
A68_INT * mode3;
struct A68t40  mode4;
A68_REAL * mode5;
struct A68t42  mode6;
A68_BOOL * mode7;
struct A68t43  mode8;
} data; };
typedef struct A68t41  A68_41 ;    /* UNION(REF CHAR,REF MODE26,REF INT,REF MODE40,REF REAL,REF MODE42,REF BOOL,MODE43)  */

A_PROCEDURE(A68_VOID ,A68t44,(struct A68t41 ),(struct A68t41 ,void *));
typedef struct A68t44  A68_44 ;    /* PROC(MODE41) VOID */

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
static A68_38   CFAAOSL = {"$Id: clear.a68,v 34.2 1995/03/29 13:02:15 ella Exp $"}; 
A_GISVEC(A68_VC ,DFAAOSL,CFAAOSL,52)

A68_VOID  FFAAOSL_clear(A68_41  Any);

A68_VOID  FFAAOSL_clear(A68_41  Any)
{ 
A68_41  GFAAOSL;  /* united object - for case conformity */
A68_CHAR * HFAAOSL_c;
A68_VC  IFAAOSL_str;
A68_CHAR * JFAAOSL_c;
A68_INT  KFAAOSL;  /* forall loop counter */
A68_INT * LFAAOSL_i;
A68_40  MFAAOSL_vi;
A68_INT * NFAAOSL_i;
A68_INT  OFAAOSL;  /* forall loop counter */
A68_REAL * PFAAOSL_r;
A68_42  QFAAOSL_vr;
A68_REAL * RFAAOSL_r;
A68_INT  SFAAOSL;  /* forall loop counter */
A68_BOOL * TFAAOSL_b;
A68_43  UFAAOSL_ct;
A68_INT  VFAAOSL_i;
A68_INT  WFAAOSL;  /* to part of loop */
A68_43  XFAAOSL;  /* OPERATORS - straight index */
A68_41  YFAAOSL;  /* OPERATORS - straight index result */
A_PROC_ENTRY(clear);
 /* line 49: */
 /* line 50: */
GFAAOSL = Any ;
switch ( GFAAOSL.mode )
{ 
case 1: /* REF CHAR */
HFAAOSL_c = (GFAAOSL.data.mode1);
 /* line 51: */
(*HFAAOSL_c) = ' ';
break;
case 2: /* REF VECTOR [] CHAR */
IFAAOSL_str = (GFAAOSL.data.mode2);
KFAAOSL = IFAAOSL_str.upb -1;
JFAAOSL_c = IFAAOSL_str.data;
for (;KFAAOSL-- >= 0;
(JFAAOSL_c++
) )
{
(*JFAAOSL_c) = ' ';
}
 /* line 52: */
break;
case 3: /* REF INT */
LFAAOSL_i = (GFAAOSL.data.mode3);
 /* line 53: */
(*LFAAOSL_i) = 0;
break;
case 4: /* REF VECTOR [] INT */
MFAAOSL_vi = (GFAAOSL.data.mode4);
OFAAOSL = MFAAOSL_vi.upb -1;
NFAAOSL_i = MFAAOSL_vi.data;
for (;OFAAOSL-- >= 0;
(NFAAOSL_i++
) )
{
(*NFAAOSL_i) = 0;
}
 /* line 54: */
break;
case 5: /* REF REAL */
PFAAOSL_r = (GFAAOSL.data.mode5);
 /* line 55: */
(*PFAAOSL_r) = 0.0;
break;
case 6: /* REF VECTOR [] REAL */
QFAAOSL_vr = (GFAAOSL.data.mode6);
SFAAOSL = QFAAOSL_vr.upb -1;
RFAAOSL_r = QFAAOSL_vr.data;
for (;SFAAOSL-- >= 0;
(RFAAOSL_r++
) )
{
(*RFAAOSL_r) = 0.0;
}
 /* line 56: */
break;
case 7: /* REF BOOL */
TFAAOSL_b = (GFAAOSL.data.mode7);
 /* line 57: */
(*TFAAOSL_b) = A68_FALSE;
break;
case 8: /* STRAIGHT MODE41 */
UFAAOSL_ct = (GFAAOSL.data.mode8);
WFAAOSL = UFAAOSL_ct.upb;
for ( VFAAOSL_i = 1;
VFAAOSL_i <= WFAAOSL;
VFAAOSL_i += 1 )
{ 
FFAAOSL_clear(A_STRINDEX_RTN(UFAAOSL_ct,VFAAOSL_i,XFAAOSL,YFAAOSL));
}
 /* line 58: */
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(clear);
return;
} 
#undef NL
 /* line 1: */
 /* line 3: */
void ZEAAOSL(void)   /* initialise DECS clear */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/clear.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/oslib/assoc/./a68files/clear.a68";
A_config.translation_time = "Tue Apr  4 09:46:55 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "YEAAOSL (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:46:55 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS clear);
UEAALIB_a68config(LGAALIB_configinfo, DFAAOSL);
 /* line 41: */
 /* line 45: */
 /* line 47: */
 /* line 60: */
 /* line 62: */
 /* line 63: */
/*SKIP*/;
A_PROC_EXIT(DECS clear);
} 
#undef NL
/* end of translation of ./a68files/clear.a68 */
