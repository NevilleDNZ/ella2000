
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
/* UNAME:IDAAOSI */
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
A_ISTRUCT(A68_CHAR ,50,A68t38);
typedef struct A68t38  A68_38 ;    /* STRUCT 50 CHAR */
A_ISTRUCT(A68_CHAR ,16000000,A68t40);
typedef struct A68t40  A68_40 ;    /* STRUCT 16000000 CHAR */
A_ISTRUCT(struct A68t40 *,16000000,A68t42);
typedef struct A68t42  A68_42 ;    /* STRUCT 16000000 REF MODE40 */

A_PROCEDURE(A68_BITS *,A68t43,(A68_INT ),(A68_INT ,void *));
typedef struct A68t43  A68_43 ;    /* PROC(INT) REF BITS */
struct A68t44{
A68_CHAR * Ptr;
A68_BITS  Gcmark;
A_PAD_BITS(PAD_1)
A68_INT  Upb;
A_PAD_INT(PAD_2)
};
typedef struct A68t44  A68_44 ;    /* STRUCT(REF CHAR,BITS,INT)  */
struct A68t45{
A68_INT * Ptr;
A68_BITS  Gcmark;
A_PAD_BITS(PAD_3)
A68_INT  Upb;
A_PAD_INT(PAD_4)
};
typedef struct A68t45  A68_45 ;    /* STRUCT(REF INT,BITS,INT)  */

A_PROCEDURE(A68_VOID ,A68t46,(A68_VC ,struct A68t44 *),(A68_VC ,struct A68t44 *,void *));
typedef struct A68t46  A68_46 ;    /* PROC(MODE26) MODE44 */
A_VECTOR(A68_INT ,A68t47);
typedef struct A68t47  A68_47 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t48,(struct A68t47 ,struct A68t45 *),(struct A68t47 ,struct A68t45 *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(MODE47) MODE45 */
struct A68t49{
A68_BITS * Cp;
struct A68t40 * Env;
};
typedef struct A68t49  A68_49 ;    /* STRUCT(REF BITS,REF MODE40)  */

A_PROCEDURE(struct A68t49 *,A68t50,(struct A68t33 *),(struct A68t33 *,void *));
typedef struct A68t50  A68_50 ;    /* PROC(REF MODE33) REF MODE49 */

A_PROCEDURE(A68_VOID ,A68t51,(struct A68t33 ,struct A68t49 *),(struct A68t33 ,struct A68t49 *,void *));
typedef struct A68t51  A68_51 ;    /* PROC(MODE33) MODE49 */

A_PROCEDURE(A68_VOID ,A68t52,(A68_INT ),(A68_INT ,void *));
typedef struct A68t52  A68_52 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t53,(struct A68t52 ,struct A68t49 *),(struct A68t52 ,struct A68t49 *,void *));
typedef struct A68t53  A68_53 ;    /* PROC(MODE52) MODE49 */

A_PROCEDURE(A68_VOID ,A68t54,(struct A68t40 *,A68_VC *),(struct A68t40 *,A68_VC *,void *));
typedef struct A68t54  A68_54 ;    /* PROC(REF MODE40) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t55,(struct A68t40 *),(struct A68t40 *,void *));
typedef struct A68t55  A68_55 ;    /* PROC(REF MODE40) INT */

A_PROCEDURE(A68_CHAR *,A68t56,(A68_VC ),(A68_VC ,void *));
typedef struct A68t56  A68_56 ;    /* PROC(MODE26) REF CHAR */

A_PROCEDURE(A68_INT *,A68t57,(struct A68t47 ),(struct A68t47 ,void *));
typedef struct A68t57  A68_57 ;    /* PROC(MODE47) REF INT */

A_PROCEDURE(A68_CHAR *,A68t58,(struct A68t40 *),(struct A68t40 *,void *));
typedef struct A68t58  A68_58 ;    /* PROC(REF MODE40) REF CHAR */

A_PROCEDURE(struct A68t40 *,A68t59,(A68_CHAR *),(A68_CHAR *,void *));
typedef struct A68t59  A68_59 ;    /* PROC(REF CHAR) REF MODE40 */

A_PROCEDURE(A68_VOID ,A68t60,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(MODE26) MODE26 */

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
static A68_38   MDAAOSI = {"$Id: cif.a68,v 34.2 1995/03/29 13:01:39 ella Exp $"}; 
A_GISVEC(A68_VC ,NDAAOSI,MDAAOSI,50)
#define ODAAOSI_newline_char '\012'
#define PDAAOSI_null_char '\000'
#include <stdio.h>

#define QDAAOSI_nullccharptr NULL
A68_BITS * SDAAOSI_nilfuncptr;
#include <string.h>
#define STRLEN(s) strlen((char *)s)

#define VDAAOSI_strlen STRLEN
/**/

#define DFAAOSI_shortshortmaxint (A68_SSINT)A68_MAX_SSINT
/**/

#define EFAAOSI_shortmaxint (A68_SINT)A68_MAX_SINT
/**/

#define FFAAOSI_maxint (A68_INT)A68_MAX_INT
/**/

#define GFAAOSI_longmaxint (A68_LINT)A68_MAX_LINT
/**/

#define HFAAOSI_maxabschar (A68_INT)A68_MAX_CHAR
/**/

#define IFAAOSI_bitswidth A_SZ_BITS
typedef struct   /* env of non-global proc */
{
A68_VC  Str;
} UEAAOSI_generator;

A68_VOID  UDAAOSI_cstringtorvc(A68_40 * S, A68_VC  *ReturnedValue);

A68_CHAR * CEAAOSI_vctocharptr(A68_VC  Buf);

A68_INT * GEAAOSI_vitointptr(A68_47  Buf);

A68_VOID  KEAAOSI_nullstr(A68_VC  Str, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  TEAAOSI_generator(A68_BOOL  REAAOSI_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  TEAAOSI_generator(A68_BOOL  REAAOSI_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((UEAAOSI_generator *)NonLocals)->x)
{ 
A68_VC  VEAAOSI;  /* clause result */
A68_VC  WEAAOSI;  /* OPERATORS - dynamic generator */
{ 
WEAAOSI.upb = (NL(Str).upb+1) ;
( REAAOSI_anonymous? A_VLOC(A68_CHAR ,WEAAOSI): A_VHEAP(A68_CHAR ,WEAAOSI) );
VEAAOSI = WEAAOSI;
} 
*ReturnedValue = (VEAAOSI);
return;
} 
#undef NL

A68_VOID  UDAAOSI_cstringtorvc(A68_40 * S, A68_VC  *ReturnedValue)
{ 
A68_VC  WDAAOSI;  /* clause result */
A68_VC  XDAAOSI;  /* OPERATORS - nil -> mode */
A68_VC  YDAAOSI;  /* OPERATORS - istruct -> vector */
A68_VC  ZDAAOSI;  /* OPERATORS - trim index */
A68_VC  AEAAOSI;  /* OPERATORS - trim index */
A_PROC_ENTRY(cstringtorvc);
 /* line 109: */
 /* line 111: */
{ 
 /* line 112: */
 /* line 113: */
 /* line 114: */
 /* line 115: */
if ( (S==(A68_40 *)A68_NIL) )
{ 
WDAAOSI = A_VVAC(XDAAOSI);
} 
else
{ 
 /* line 116: */
ZDAAOSI = A_ISVEC(YDAAOSI,S,16000000,A68_CHAR ) ;
WDAAOSI = A_VTRIM(AEAAOSI,(ZDAAOSI),A_VTSCRIPT(&(AEAAOSI.upb),(ZDAAOSI).upb,1,VDAAOSI_strlen(S)));
} 
} 
A_PROC_EXIT(cstringtorvc);
*ReturnedValue = (WDAAOSI);
return;
} 
#undef NL

A68_CHAR * CEAAOSI_vctocharptr(A68_VC  Buf)
{ 
A68_CHAR * DEAAOSI;  /* clause result */
union {  /* BIOP 99 */
A68_VC   source;
A68_44   destination;
} EEAAOSI; 
A_PROC_ENTRY(vctocharptr);
 /* line 129: */
EEAAOSI.source = Buf ;
DEAAOSI = (EEAAOSI.destination).Ptr;
A_PROC_EXIT(vctocharptr);
return( DEAAOSI );
} 
#undef NL

A68_INT * GEAAOSI_vitointptr(A68_47  Buf)
{ 
A68_INT * HEAAOSI;  /* clause result */
union {  /* BIOP 99 */
A68_47   source;
A68_45   destination;
} IEAAOSI; 
A_PROC_ENTRY(vitointptr);
 /* line 132: */
IEAAOSI.source = Buf ;
HEAAOSI = (IEAAOSI.destination).Ptr;
A_PROC_EXIT(vitointptr);
return( HEAAOSI );
} 
#undef NL

A68_VOID  KEAAOSI_nullstr(A68_VC  Str, A68_VC  *ReturnedValue)
{ 
union {  /* BIOP 99 */
A68_CHAR *  source;
A68_40 *  destination;
} LEAAOSI; 
A68_40 * MEAAOSI_ptr;
A68_VC  NEAAOSI;  /* OPERATORS - istruct -> vector */
A68_VC  OEAAOSI;  /* OPERATORS - simple index */
A68_INT  PEAAOSI;  /* YIELD */
A68_VC  QEAAOSI;  /* clause result */
A68_31  SEAAOSI_generator;   /* proc value of non-global proc */
A68_VC  YEAAOSI;  /* avoid structure result */
A68_VC  XEAAOSI_ans;
A68_VC  ZEAAOSI;  /* OPERATORS - trim index */
A68_VC  AFAAOSI;  /* YIELD */
A68_INT  BFAAOSI;  /* YIELD */
A68_CHAR * CFAAOSI;  /* YIELD */
A_PROC_ENTRY(nullstr);
 /* line 138: */
 /* line 147: */
{ 
LEAAOSI.source = CEAAOSI_vctocharptr(Str) ;
MEAAOSI_ptr = (LEAAOSI.destination);
 /* line 148: */
 /* line 149: */
 /* line 150: */
OEAAOSI = A_ISVEC(NEAAOSI,MEAAOSI_ptr,16000000,A68_CHAR ) ;
PEAAOSI = (Str.upb+1) ;
if ( ((*(&A_VINDEX(OEAAOSI,PEAAOSI)))==PDAAOSI_null_char) )
{ 
QEAAOSI = Str;
} 
else
{ 
A_CLOSURE( SEAAOSI_generator, TEAAOSI_generator, UEAAOSI_generator );
(( UEAAOSI_generator * ) ( SEAAOSI_generator.nonlocals )) -> Str = Str;
A_CALLPROC(SEAAOSI_generator,(A68_TRUE, &YEAAOSI),(A68_TRUE, &YEAAOSI,(SEAAOSI_generator).nonlocals));
XEAAOSI_ans = YEAAOSI;
 /* line 151: */
AFAAOSI = A_VTRIM(ZEAAOSI,(XEAAOSI_ans),A_VTSCRIPT(&(ZEAAOSI.upb),(XEAAOSI_ans).upb,1,Str.upb)) ;
A_VASSIGN2(Str,AFAAOSI,A68_CHAR );
 /* line 152: */
BFAAOSI = XEAAOSI_ans.upb ;
CFAAOSI = (&A_VINDEX(XEAAOSI_ans,BFAAOSI)) ;
(*CFAAOSI) = PDAAOSI_null_char;
 /* line 153: */
 /* line 154: */
 /* line 155: */
QEAAOSI = XEAAOSI_ans;
} 
} 
A_PROC_EXIT(nullstr);
*ReturnedValue = (QEAAOSI);
return;
} 
#undef NL
 /* line 1: */
 /* line 5: */
void JDAAOSI(void)   /* initialise DECS cif */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","./mfiles","-staredit","259","./a68files/cif.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
union {  /* BIOP 99 */
A68_INT   source;
A68_BITS *  destination;
} RDAAOSI; 
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/osif/assoc/./a68files/cif.a68";
A_config.translation_time = "Tue Apr  4 09:24:26 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "IDAAOSI (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:24:26 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS cif);
UEAALIB_a68config(LGAALIB_configinfo, NDAAOSI);
 /* line 60: */
 /* line 66: */
 /* line 75: */
 /* line 76: */
 /* line 78: */
 /* line 80: */
 /* line 83: */
RDAAOSI.source = (-1) ;
SDAAOSI_nilfuncptr = (RDAAOSI.destination);
 /* line 84: */
 /* line 87: */
 /* line 89: */
 /* line 92: */
 /* line 93: */
 /* line 95: */
 /* line 98: */
 /* line 99: */
 /* line 100: */
 /* line 102: */
 /* line 118: */
 /* line 131: */
 /* line 134: */
 /* line 135: */
 /* line 137: */
 /* line 157: */
 /* line 159: */
 /* line 161: */
 /* line 163: */
 /* line 166: */
 /* line 169: */
 /* line 172: */
 /* line 174: */
 /* line 203: */
/*SKIP*/;
A_PROC_EXIT(DECS cif);
} 
#undef NL
/* end of translation of ./a68files/cif.a68 */
