
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
/* UNAME:UAAAOSL */
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
A_ISTRUCT(A68_CHAR ,56,A68t38);
typedef struct A68t38  A68_38 ;    /* STRUCT 56 CHAR */
struct A68t39 { A68_INT mode; union {
A68_SINT  mode1;
A68_INT  mode2;
A68_LINT  mode3;
A68_REAL  mode4;
} data; };
typedef struct A68t39  A68_39 ;    /* UNION(SHORT INT,INT,LONG INT,REAL)  */

A_PROCEDURE(A68_INT ,A68t40,(A68_VC ),(A68_VC ,void *));
typedef struct A68t40  A68_40 ;    /* PROC(MODE26) INT */

A_PROCEDURE(A68_INT ,A68t41,(A68_VC ,A68_VC ,A68_INT ,A68_LINT ),(A68_VC ,A68_VC ,A68_INT ,A68_LINT ,void *));
typedef struct A68t41  A68_41 ;    /* PROC(REF MODE26,MODE26,INT,LONG INT) INT */

A_PROCEDURE(A68_INT ,A68t42,(A68_VC ,A68_VC ,A68_INT ,A68_INT ,A68_REAL ),(A68_VC ,A68_VC ,A68_INT ,A68_INT ,A68_REAL ,void *));
typedef struct A68t42  A68_42 ;    /* PROC(REF MODE26,MODE26,INT,INT,REAL) INT */

A_PROCEDURE(A68_VOID ,A68t43,(struct A68t39 ,A68_INT ,A68_VC *),(struct A68t39 ,A68_INT ,A68_VC *,void *));
typedef struct A68t43  A68_43 ;    /* PROC(MODE39,INT) REF MODE26 */
A_ISTRUCT(A68_CHAR ,100,A68t44);
typedef struct A68t44  A68_44 ;    /* STRUCT 100 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t45);
typedef struct A68t45  A68_45 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t46);
typedef struct A68t46  A68_46 ;    /* STRUCT 6 CHAR */

A_PROCEDURE(A68_VOID ,A68t47,(struct A68t39 ,A68_INT ,A68_INT ,A68_VC *),(struct A68t39 ,A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t47  A68_47 ;    /* PROC(MODE39,INT,INT) REF MODE26 */
A_ISTRUCT(A68_CHAR ,7,A68t48);
typedef struct A68t48  A68_48 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t49);
typedef struct A68t49  A68_49 ;    /* STRUCT 8 CHAR */

A_PROCEDURE(A68_VOID ,A68t50,(struct A68t39 ,A68_INT ,A68_INT ,A68_INT ,A68_VC *),(struct A68t39 ,A68_INT ,A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t50  A68_50 ;    /* PROC(MODE39,INT,INT,INT) REF MODE26 */

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
static A68_38   YAAAOSL = {"$Id: numberstr.a68,v 34.3 1995/03/29 13:02:17 ella Exp $"}; 
A_GISVEC(A68_VC ,ZAAAOSL,YAAAOSL,56)
static A68_31  ABAAOSL_anonymous;
#include <string.h>
#define STRLEN(s) A_int_INT(strlen(A_VC_charptr(s)))

#define GBAAOSL_leng STRLEN
#include <stdio.h>
#define SPRINTFW(s,f,p1,p2) \
   A_int_INT(sprintf( A_VC_charptr(s), A_VC_charptr(f), \
                      A_INT_int(p1), A_LINT_long(p2) ))

#define HBAAOSL_sprintfw SPRINTFW
#include <stdio.h>
#define SPRINTFF(s,f,p1,p2,p3) \
   A_int_INT(sprintf( A_VC_charptr(s), A_VC_charptr(f), \
                      A_INT_int(p1), A_INT_int(p2), (double)(p3) ))

#define IBAAOSL_sprintff SPRINTFF
static A68_45   XBAAOSL = {"%*ld\000"}; 
A_GISVEC(A68_VC ,YBAAOSL,XBAAOSL,5)
static A68_45   ZBAAOSL = {"%*ld\000"}; 
A_GISVEC(A68_VC ,ACAAOSL,ZBAAOSL,5)
static A68_46   BCAAOSL = {"%+*ld\000"}; 
A_GISVEC(A68_VC ,CCAAOSL,BCAAOSL,6)
static A68_48   CDAAOSL = {"%#*.*f\000"}; 
A_GISVEC(A68_VC ,DDAAOSL,CDAAOSL,7)
static A68_48   EDAAOSL = {"%#*.*f\000"}; 
A_GISVEC(A68_VC ,FDAAOSL,EDAAOSL,7)
static A68_49   GDAAOSL = {"%#+*.*f\000"}; 
A_GISVEC(A68_VC ,HDAAOSL,GDAAOSL,8)
static A68_49   IEAAOSL = {"%# *.*e\000"}; 
A_GISVEC(A68_VC ,JEAAOSL,IEAAOSL,8)
static A68_49   KEAAOSL = {"%# *.*e\000"}; 
A_GISVEC(A68_VC ,LEAAOSL,KEAAOSL,8)
static A68_49   MEAAOSL = {"%#+*.*e\000"}; 
A_GISVEC(A68_VC ,NEAAOSL,MEAAOSL,8)
typedef struct   /* env of non-global proc */
{
A68_INT  DCAAOSL_l;
A_PAD_INT(PAD_1)
} HCAAOSL_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  IDAAOSL_l;
A_PAD_INT(PAD_2)
} MDAAOSL_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  OEAAOSL_l;
A_PAD_INT(PAD_3)
} SEAAOSL_generator;

A_STATIC A68_VOID  CBAAOSL_generator(A68_BOOL  BBAAOSL_anonymous, A68_VC  *ReturnedValue);

A68_VOID  LBAAOSL_whole(A68_39  Number, A68_INT  Width, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  GCAAOSL_generator(A68_BOOL  ECAAOSL_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  RCAAOSL_fixed(A68_39  Number, A68_INT  Width, A68_INT  Digits, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  LDAAOSL_generator(A68_BOOL  JDAAOSL_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  XDAAOSL_float(A68_39  Number, A68_INT  Width, A68_INT  Digits, A68_INT  Expdigits, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  REAAOSL_generator(A68_BOOL  PEAAOSL_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GCAAOSL_generator(A68_BOOL  ECAAOSL_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((HCAAOSL_generator *)NonLocals)->x)
{ 
A68_VC  ICAAOSL;  /* clause result */
A68_VC  JCAAOSL;  /* OPERATORS - dynamic generator */
{ 
JCAAOSL.upb = NL(DCAAOSL_l) ;
( ECAAOSL_anonymous? A_VLOC(A68_CHAR ,JCAAOSL): A_VHEAP(A68_CHAR ,JCAAOSL) );
ICAAOSL = JCAAOSL;
} 
*ReturnedValue = (ICAAOSL);
return;
} 
#undef NL

A_STATIC A68_VOID  LDAAOSL_generator(A68_BOOL  JDAAOSL_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((MDAAOSL_generator *)NonLocals)->x)
{ 
A68_VC  NDAAOSL;  /* clause result */
A68_VC  ODAAOSL;  /* OPERATORS - dynamic generator */
{ 
ODAAOSL.upb = NL(IDAAOSL_l) ;
( JDAAOSL_anonymous? A_VLOC(A68_CHAR ,ODAAOSL): A_VHEAP(A68_CHAR ,ODAAOSL) );
NDAAOSL = ODAAOSL;
} 
*ReturnedValue = (NDAAOSL);
return;
} 
#undef NL

A_STATIC A68_VOID  REAAOSL_generator(A68_BOOL  PEAAOSL_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((SEAAOSL_generator *)NonLocals)->x)
{ 
A68_VC  TEAAOSL;  /* clause result */
A68_VC  UEAAOSL;  /* OPERATORS - dynamic generator */
{ 
UEAAOSL.upb = NL(OEAAOSL_l) ;
( PEAAOSL_anonymous? A_VLOC(A68_CHAR ,UEAAOSL): A_VHEAP(A68_CHAR ,UEAAOSL) );
TEAAOSL = UEAAOSL;
} 
*ReturnedValue = (TEAAOSL);
return;
} 
#undef NL

A_STATIC A68_VOID  CBAAOSL_generator(A68_BOOL  BBAAOSL_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  DBAAOSL;  /* clause result */
A68_VC  EBAAOSL;  /* OPERATORS - dynamic generator */
{ 
 /* line 87: */
EBAAOSL.upb = 0 ;
( BBAAOSL_anonymous? A_VLOC(A68_CHAR ,EBAAOSL): A_VHEAP(A68_CHAR ,EBAAOSL) );
DBAAOSL = EBAAOSL;
} 
*ReturnedValue = (DBAAOSL);
return;
} 
#undef NL

A68_VOID  LBAAOSL_whole(A68_39  Number, A68_INT  Width, A68_VC  *ReturnedValue)
{ 
A68_39  MBAAOSL;  /* united object - for case conformity */
A68_SINT  NBAAOSL_s;
A68_LINT  OBAAOSL;  /* clause result */
A68_INT  PBAAOSL_i;
A68_LINT  QBAAOSL_l;
A68_REAL  RBAAOSL_r;
double SBAAOSL;/*ADICOPS - ROUND*/
A68_LINT  TBAAOSL_value;
A68_44  UBAAOSL_stackbuff;
A68_VC  VBAAOSL;  /* OPERATORS - istruct -> vector */
A68_VC  WBAAOSL_buffer;
A68_INT  DCAAOSL_l;
A68_31  FCAAOSL_generator;   /* proc value of non-global proc */
A68_VC  KCAAOSL;  /* clause result */
A68_VC  LCAAOSL;  /* avoid structure result */
A68_VC  MCAAOSL;  /* OPERATORS - trim index */
A68_VC  NCAAOSL;  /* OPERATORS - assign op */
A_PROC_ENTRY(whole);
 /* line 108: */
 /* line 109: */
{ 
 /* line 110: */
MBAAOSL = Number ;
switch ( MBAAOSL.mode )
{ 
case 1: /* SHORT INT */
NBAAOSL_s = (MBAAOSL.data.mode1);
 /* line 111: */
OBAAOSL = (A68_LINT )(A68_INT )NBAAOSL_s;
break;
case 2: /* INT */
PBAAOSL_i = (MBAAOSL.data.mode2);
 /* line 112: */
OBAAOSL = (A68_LINT )PBAAOSL_i;
break;
case 3: /* LONG INT */
QBAAOSL_l = (MBAAOSL.data.mode3);
 /* line 113: */
OBAAOSL = QBAAOSL_l;
break;
case 4: /* REAL */
RBAAOSL_r = (MBAAOSL.data.mode4);
 /* line 114: */
OBAAOSL = (A68_LINT )A_ROUND(SBAAOSL,RBAAOSL_r,(A68_INT ));
break;
default: 
A_IMP_SKIP ;
break;
} 
TBAAOSL_value = OBAAOSL;
 /* line 115: */
 /* line 116: */
WBAAOSL_buffer = A_ISVEC(VBAAOSL,(&UBAAOSL_stackbuff),100,A68_CHAR );
 /* line 117: */
if ( (Width==0) )
{ 
 /* line 118: */
HBAAOSL_sprintfw(WBAAOSL_buffer, YBAAOSL, 1, TBAAOSL_value);
} 
else
{ 
if ( (Width<0) )
{ 
 /* line 119: */
HBAAOSL_sprintfw(WBAAOSL_buffer, ACAAOSL, (-Width), TBAAOSL_value);
} 
else
{ 
 /* line 120: */
HBAAOSL_sprintfw(WBAAOSL_buffer, CCAAOSL, Width, TBAAOSL_value);
} 
} 
 /* line 121: */
DCAAOSL_l = GBAAOSL_leng(WBAAOSL_buffer);
 /* line 122: */
A_CLOSURE( FCAAOSL_generator, GCAAOSL_generator, HCAAOSL_generator );
(( HCAAOSL_generator * ) ( FCAAOSL_generator.nonlocals )) -> DCAAOSL_l = DCAAOSL_l;
 /* line 123: */
A_CALLPROC(FCAAOSL_generator,(A68_FALSE, &LCAAOSL),(A68_FALSE, &LCAAOSL,(FCAAOSL_generator).nonlocals));
NCAAOSL = A_VTRIM(MCAAOSL,(WBAAOSL_buffer),A_VTSCRIPT(&(MCAAOSL.upb),(WBAAOSL_buffer).upb,1,DCAAOSL_l)) ;
A_VASSIGN2(NCAAOSL,LCAAOSL,A68_CHAR ) ;
KCAAOSL = LCAAOSL;
} 
A_PROC_EXIT(whole);
*ReturnedValue = (KCAAOSL);
return;
} 
#undef NL

A68_VOID  RCAAOSL_fixed(A68_39  Number, A68_INT  Width, A68_INT  Digits, A68_VC  *ReturnedValue)
{ 
A68_39  SCAAOSL;  /* united object - for case conformity */
A68_SINT  TCAAOSL_s;
A68_REAL  UCAAOSL;  /* clause result */
A68_INT  VCAAOSL_i;
A68_LINT  WCAAOSL_l;
A68_REAL  XCAAOSL_r;
A68_REAL  YCAAOSL_value;
A68_44  ZCAAOSL_stackbuff;
A68_VC  ADAAOSL;  /* OPERATORS - istruct -> vector */
A68_VC  BDAAOSL_buffer;
A68_INT  IDAAOSL_l;
A68_31  KDAAOSL_generator;   /* proc value of non-global proc */
A68_VC  PDAAOSL;  /* clause result */
A68_VC  QDAAOSL;  /* avoid structure result */
A68_VC  RDAAOSL;  /* OPERATORS - trim index */
A68_VC  SDAAOSL;  /* OPERATORS - assign op */
A_PROC_ENTRY(fixed);
 /* line 127: */
 /* line 128: */
{ 
 /* line 129: */
SCAAOSL = Number ;
switch ( SCAAOSL.mode )
{ 
case 1: /* SHORT INT */
TCAAOSL_s = (SCAAOSL.data.mode1);
 /* line 130: */
UCAAOSL = (A68_REAL )(A68_INT )TCAAOSL_s;
break;
case 2: /* INT */
VCAAOSL_i = (SCAAOSL.data.mode2);
 /* line 131: */
UCAAOSL = (A68_REAL )VCAAOSL_i;
break;
case 3: /* LONG INT */
WCAAOSL_l = (SCAAOSL.data.mode3);
 /* line 132: */
UCAAOSL = (A68_REAL )((A68_LREAL )WCAAOSL_l);
break;
case 4: /* REAL */
XCAAOSL_r = (SCAAOSL.data.mode4);
 /* line 133: */
UCAAOSL = XCAAOSL_r;
break;
default: 
A_IMP_SKIP ;
break;
} 
YCAAOSL_value = UCAAOSL;
 /* line 134: */
 /* line 135: */
BDAAOSL_buffer = A_ISVEC(ADAAOSL,(&ZCAAOSL_stackbuff),100,A68_CHAR );
 /* line 136: */
if ( (Width==0) )
{ 
 /* line 137: */
IBAAOSL_sprintff(BDAAOSL_buffer, DDAAOSL, 1, Digits, YCAAOSL_value);
} 
else
{ 
if ( (Width<0) )
{ 
 /* line 138: */
IBAAOSL_sprintff(BDAAOSL_buffer, FDAAOSL, (-Width), Digits, YCAAOSL_value);
} 
else
{ 
 /* line 139: */
IBAAOSL_sprintff(BDAAOSL_buffer, HDAAOSL, Width, Digits, YCAAOSL_value);
} 
} 
 /* line 140: */
IDAAOSL_l = GBAAOSL_leng(BDAAOSL_buffer);
 /* line 141: */
A_CLOSURE( KDAAOSL_generator, LDAAOSL_generator, MDAAOSL_generator );
(( MDAAOSL_generator * ) ( KDAAOSL_generator.nonlocals )) -> IDAAOSL_l = IDAAOSL_l;
 /* line 142: */
A_CALLPROC(KDAAOSL_generator,(A68_FALSE, &QDAAOSL),(A68_FALSE, &QDAAOSL,(KDAAOSL_generator).nonlocals));
SDAAOSL = A_VTRIM(RDAAOSL,(BDAAOSL_buffer),A_VTSCRIPT(&(RDAAOSL.upb),(BDAAOSL_buffer).upb,1,IDAAOSL_l)) ;
A_VASSIGN2(SDAAOSL,QDAAOSL,A68_CHAR ) ;
PDAAOSL = QDAAOSL;
} 
A_PROC_EXIT(fixed);
*ReturnedValue = (PDAAOSL);
return;
} 
#undef NL

A68_VOID  XDAAOSL_float(A68_39  Number, A68_INT  Width, A68_INT  Digits, A68_INT  Expdigits, A68_VC  *ReturnedValue)
{ 
A68_39  YDAAOSL;  /* united object - for case conformity */
A68_SINT  ZDAAOSL_s;
A68_REAL  AEAAOSL;  /* clause result */
A68_INT  BEAAOSL_i;
A68_LINT  CEAAOSL_l;
A68_REAL  DEAAOSL_r;
A68_REAL  EEAAOSL_value;
A68_44  FEAAOSL_stackbuff;
A68_VC  GEAAOSL;  /* OPERATORS - istruct -> vector */
A68_VC  HEAAOSL_buffer;
A68_INT  OEAAOSL_l;
A68_31  QEAAOSL_generator;   /* proc value of non-global proc */
A68_VC  VEAAOSL;  /* clause result */
A68_VC  WEAAOSL;  /* avoid structure result */
A68_VC  XEAAOSL;  /* OPERATORS - trim index */
A68_VC  YEAAOSL;  /* OPERATORS - assign op */
A_PROC_ENTRY(float);
 /* line 146: */
 /* line 151: */
{ 
 /* line 152: */
YDAAOSL = Number ;
switch ( YDAAOSL.mode )
{ 
case 1: /* SHORT INT */
ZDAAOSL_s = (YDAAOSL.data.mode1);
 /* line 153: */
AEAAOSL = (A68_REAL )(A68_INT )ZDAAOSL_s;
break;
case 2: /* INT */
BEAAOSL_i = (YDAAOSL.data.mode2);
 /* line 154: */
AEAAOSL = (A68_REAL )BEAAOSL_i;
break;
case 3: /* LONG INT */
CEAAOSL_l = (YDAAOSL.data.mode3);
 /* line 155: */
AEAAOSL = (A68_REAL )((A68_LREAL )CEAAOSL_l);
break;
case 4: /* REAL */
DEAAOSL_r = (YDAAOSL.data.mode4);
 /* line 156: */
AEAAOSL = DEAAOSL_r;
break;
default: 
A_IMP_SKIP ;
break;
} 
EEAAOSL_value = AEAAOSL;
 /* line 157: */
 /* line 158: */
HEAAOSL_buffer = A_ISVEC(GEAAOSL,(&FEAAOSL_stackbuff),100,A68_CHAR );
 /* line 159: */
if ( (Width==0) )
{ 
 /* line 160: */
IBAAOSL_sprintff(HEAAOSL_buffer, JEAAOSL, 1, Digits, EEAAOSL_value);
} 
else
{ 
if ( (Width<0) )
{ 
 /* line 161: */
IBAAOSL_sprintff(HEAAOSL_buffer, LEAAOSL, (-Width), Digits, EEAAOSL_value);
} 
else
{ 
 /* line 162: */
IBAAOSL_sprintff(HEAAOSL_buffer, NEAAOSL, Width, Digits, EEAAOSL_value);
} 
} 
 /* line 163: */
OEAAOSL_l = GBAAOSL_leng(HEAAOSL_buffer);
 /* line 164: */
A_CLOSURE( QEAAOSL_generator, REAAOSL_generator, SEAAOSL_generator );
(( SEAAOSL_generator * ) ( QEAAOSL_generator.nonlocals )) -> OEAAOSL_l = OEAAOSL_l;
 /* line 165: */
 /* line 168: */
A_CALLPROC(QEAAOSL_generator,(A68_FALSE, &WEAAOSL),(A68_FALSE, &WEAAOSL,(QEAAOSL_generator).nonlocals));
YEAAOSL = A_VTRIM(XEAAOSL,(HEAAOSL_buffer),A_VTSCRIPT(&(XEAAOSL.upb),(HEAAOSL_buffer).upb,1,OEAAOSL_l)) ;
A_VASSIGN2(YEAAOSL,WEAAOSL,A68_CHAR ) ;
VEAAOSL = WEAAOSL;
} 
A_PROC_EXIT(float);
*ReturnedValue = (VEAAOSL);
return;
} 
#undef NL
 /* line 1: */
 /* line 3: */
void VAAAOSL(void)   /* initialise DECS numberstr */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/numberstr.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_31  FBAAOSL;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/oslib/assoc/./a68files/numberstr.a68";
A_config.translation_time = "Tue Apr  4 09:46:53 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "UAAAOSL (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:46:53 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS numberstr);
UEAALIB_a68config(LGAALIB_configinfo, ZAAAOSL);
 /* line 86: */
FBAAOSL.fn.fn_global = CBAAOSL_generator;
FBAAOSL.nonlocals = A68_NIL;
ABAAOSL_anonymous = FBAAOSL;
 /* line 89: */
 /* line 90: */
 /* line 91: */
 /* line 94: */
 /* line 95: */
 /* line 96: */
 /* line 97: */
 /* line 98: */
 /* line 100: */
 /* line 101: */
 /* line 102: */
 /* line 103: */
 /* line 104: */
 /* line 107: */
 /* line 126: */
 /* line 145: */
 /* line 169: */
A_PROC_EXIT(DECS numberstr);
} 
#undef NL
/* end of translation of ./a68files/numberstr.a68 */
