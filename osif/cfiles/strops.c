
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
/* UNAME:AAAAOSI */
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
A_ISTRUCT(A68_CHAR ,53,A68t38);
typedef struct A68t38  A68_38 ;    /* STRUCT 53 CHAR */

A_PROCEDURE(A68_VOID ,A68t39,(A68_CHAR ,A68_VC *),(A68_CHAR ,A68_VC *,void *));
typedef struct A68t39  A68_39 ;    /* PROC(CHAR) REF MODE26 */
A_VECTOR(A68_VC ,A68t40);
typedef struct A68t40  A68_40 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_VOID ,A68t41,(struct A68t40 ,A68_VC *),(struct A68t40 ,A68_VC *,void *));
typedef struct A68t41  A68_41 ;    /* PROC(MODE40) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t42,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t42  A68_42 ;    /* PROC(INT) MODE26 */
A_ISTRUCT(A68_CHAR ,10,A68t43);
typedef struct A68t43  A68_43 ;    /* STRUCT 10 CHAR */

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
static A68_38   EAAAOSI = {"$Id: strops.a68,v 34.2 1995/03/29 13:01:40 ella Exp $"}; 
A_GISVEC(A68_VC ,FAAAOSI,EAAAOSI,53)
A68_31  GAAAOSI_anonymous;
static A68_43   GCAAOSI = {"0987654321"}; 
static A68_43   ICAAOSI = {"0123456789"}; 
typedef struct   /* env of non-global proc */
{
int dummy;
} RAAAOSI_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  S;
} DBAAOSI_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * KBAAOSI_l;
} RBAAOSI_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * LCAAOSI_l;
A68_INT  NCAAOSI_e;
A_PAD_INT(PAD_1)
} TCAAOSI_generator;

A_STATIC A68_VOID  IAAAOSI_generator(A68_BOOL  HAAAOSI_anonymous, A68_VC  *ReturnedValue);

A68_VOID  NAAAOSI_makervc(A68_CHAR  C, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  QAAAOSI_generator(A68_BOOL  OAAAOSI_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  ZAAAOSI_makervc(A68_VC  S, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  CBAAOSI_generator(A68_BOOL  ABAAOSI_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  JBAAOSI_concat(A68_40  Strs, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  QBAAOSI_generator(A68_BOOL  OBAAOSI_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  FCAAOSI_intchars(A68_INT  I, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  SCAAOSI_generator(A68_BOOL  QCAAOSI_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QAAAOSI_generator(A68_BOOL  OAAAOSI_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((RAAAOSI_generator *)NonLocals)->x)
{ 
A68_VC  SAAAOSI;  /* clause result */
A68_VC  TAAAOSI;  /* OPERATORS - dynamic generator */
{ 
TAAAOSI.upb = 1 ;
( OAAAOSI_anonymous? A_VLOC(A68_CHAR ,TAAAOSI): A_VHEAP(A68_CHAR ,TAAAOSI) );
SAAAOSI = TAAAOSI;
} 
*ReturnedValue = (SAAAOSI);
return;
} 
#undef NL

A_STATIC A68_VOID  CBAAOSI_generator(A68_BOOL  ABAAOSI_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((DBAAOSI_generator *)NonLocals)->x)
{ 
A68_VC  EBAAOSI;  /* clause result */
A68_VC  FBAAOSI;  /* OPERATORS - dynamic generator */
{ 
FBAAOSI.upb = NL(S).upb ;
( ABAAOSI_anonymous? A_VLOC(A68_CHAR ,FBAAOSI): A_VHEAP(A68_CHAR ,FBAAOSI) );
EBAAOSI = FBAAOSI;
} 
*ReturnedValue = (EBAAOSI);
return;
} 
#undef NL

A_STATIC A68_VOID  QBAAOSI_generator(A68_BOOL  OBAAOSI_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((RBAAOSI_generator *)NonLocals)->x)
{ 
A68_VC  SBAAOSI;  /* clause result */
A68_VC  TBAAOSI;  /* OPERATORS - dynamic generator */
{ 
TBAAOSI.upb = (*NL(KBAAOSI_l)) ;
( OBAAOSI_anonymous? A_VLOC(A68_CHAR ,TBAAOSI): A_VHEAP(A68_CHAR ,TBAAOSI) );
SBAAOSI = TBAAOSI;
} 
*ReturnedValue = (SBAAOSI);
return;
} 
#undef NL

A_STATIC A68_VOID  SCAAOSI_generator(A68_BOOL  QCAAOSI_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((TCAAOSI_generator *)NonLocals)->x)
{ 
A68_VC  UCAAOSI;  /* clause result */
A68_VC  VCAAOSI;  /* OPERATORS - dynamic generator */
{ 
VCAAOSI.upb = ((*NL(LCAAOSI_l))+NL(NCAAOSI_e)) ;
( QCAAOSI_anonymous? A_VLOC(A68_CHAR ,VCAAOSI): A_VHEAP(A68_CHAR ,VCAAOSI) );
UCAAOSI = VCAAOSI;
} 
*ReturnedValue = (UCAAOSI);
return;
} 
#undef NL

A_STATIC A68_VOID  IAAAOSI_generator(A68_BOOL  HAAAOSI_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  JAAAOSI;  /* clause result */
A68_VC  KAAAOSI;  /* OPERATORS - dynamic generator */
{ 
 /* line 49: */
KAAAOSI.upb = 0 ;
( HAAAOSI_anonymous? A_VLOC(A68_CHAR ,KAAAOSI): A_VHEAP(A68_CHAR ,KAAAOSI) );
JAAAOSI = KAAAOSI;
} 
*ReturnedValue = (JAAAOSI);
return;
} 
#undef NL

A68_VOID  NAAAOSI_makervc(A68_CHAR  C, A68_VC  *ReturnedValue)
{ 
A68_31  PAAAOSI_generator;   /* proc value of non-global proc */
A68_VC  UAAAOSI;  /* clause result */
A68_VC  VAAAOSI;  /* avoid structure result */
A68_VC  WAAAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XAAAOSI;  /* OPERATORS - assign op */
A_PROC_ENTRY(makervc);
A_CLOSURE( PAAAOSI_generator, QAAAOSI_generator, RAAAOSI_generator );
A_CALLPROC(PAAAOSI_generator,(A68_FALSE, &VAAAOSI),(A68_FALSE, &VAAAOSI,(PAAAOSI_generator).nonlocals));
XAAAOSI = A_HVEC(WAAAOSI,C,A68_CHAR ) ;
A_VASSIGN2(XAAAOSI,VAAAOSI,A68_CHAR ) ;
UAAAOSI = VAAAOSI;
A_PROC_EXIT(makervc);
*ReturnedValue = (UAAAOSI);
return;
} 
#undef NL

A68_VOID  ZAAAOSI_makervc(A68_VC  S, A68_VC  *ReturnedValue)
{ 
A68_31  BBAAOSI_generator;   /* proc value of non-global proc */
A68_VC  GBAAOSI;  /* clause result */
A68_VC  HBAAOSI;  /* avoid structure result */
A_PROC_ENTRY(makervc);
A_CLOSURE( BBAAOSI_generator, CBAAOSI_generator, DBAAOSI_generator );
(( DBAAOSI_generator * ) ( BBAAOSI_generator.nonlocals )) -> S = S;
A_CALLPROC(BBAAOSI_generator,(A68_FALSE, &HBAAOSI),(A68_FALSE, &HBAAOSI,(BBAAOSI_generator).nonlocals));
A_VASSIGN2(S,HBAAOSI,A68_CHAR ) ;
GBAAOSI = HBAAOSI;
A_PROC_EXIT(makervc);
*ReturnedValue = (GBAAOSI);
return;
} 
#undef NL

A68_VOID  JBAAOSI_concat(A68_40  Strs, A68_VC  *ReturnedValue)
{ 
A68_INT  KBAAOSI_l;
A68_VC  LBAAOSI_st;
A68_VC * MBAAOSI;  /* forall control - []x */
A68_INT  NBAAOSI;  /* forall loop counter */
A68_31  PBAAOSI_generator;   /* proc value of non-global proc */
A68_VC  UBAAOSI;  /* avoid structure result */
A68_VC  VBAAOSI_ans;
A68_VC  WBAAOSI_str;
A68_VC * XBAAOSI;  /* forall control - []x */
A68_INT  YBAAOSI;  /* forall loop counter */
A68_INT  ZBAAOSI_lwb;
A68_INT  ACAAOSI_upb;
A68_VC  BCAAOSI;  /* OPERATORS - trim index */
A68_VC  CCAAOSI;  /* YIELD */
A68_VC  DCAAOSI;  /* clause result */
A_PROC_ENTRY(concat);
 /* line 56: */
 /* line 57: */
{ 
KBAAOSI_l = 0;
 /* line 58: */
NBAAOSI = Strs.upb -1;
MBAAOSI = Strs.data;
for (;NBAAOSI-- >= 0;
(MBAAOSI++
) )
{
LBAAOSI_st = *MBAAOSI;
KBAAOSI_l+=LBAAOSI_st.upb;
}
 /* line 59: */
A_CLOSURE( PBAAOSI_generator, QBAAOSI_generator, RBAAOSI_generator );
(( RBAAOSI_generator * ) ( PBAAOSI_generator.nonlocals )) -> KBAAOSI_l = (&KBAAOSI_l);
A_CALLPROC(PBAAOSI_generator,(A68_FALSE, &UBAAOSI),(A68_FALSE, &UBAAOSI,(PBAAOSI_generator).nonlocals));
VBAAOSI_ans = UBAAOSI;
 /* line 60: */
KBAAOSI_l = 0;
 /* line 61: */
 /* line 62: */
YBAAOSI = Strs.upb -1;
XBAAOSI = Strs.data;
for (;YBAAOSI-- >= 0;
(XBAAOSI++
) )
{
WBAAOSI_str = *XBAAOSI;
ZBAAOSI_lwb = (KBAAOSI_l+1);
ACAAOSI_upb = (KBAAOSI_l+=WBAAOSI_str.upb);
 /* line 63: */
 /* line 64: */
CCAAOSI = A_VTRIM(BCAAOSI,(VBAAOSI_ans),A_VTSCRIPT(&(BCAAOSI.upb),(VBAAOSI_ans).upb,ZBAAOSI_lwb,ACAAOSI_upb)) ;
A_VASSIGN2(WBAAOSI_str,CCAAOSI,A68_CHAR );
}
 /* line 65: */
 /* line 66: */
DCAAOSI = VBAAOSI_ans;
} 
A_PROC_EXIT(concat);
*ReturnedValue = (DCAAOSI);
return;
} 
#undef NL

A68_VOID  FCAAOSI_intchars(A68_INT  I, A68_VC  *ReturnedValue)
{ 
A68_43  HCAAOSI;  /* clause result */
A68_43  JCAAOSI_chars;
A68_INT  KCAAOSI_n;
A68_INT  LCAAOSI_l;
A68_INT  MCAAOSI;  /* clause result */
A68_INT  NCAAOSI_e;
A68_VC  OCAAOSI;  /* clause result */
A68_VC  PCAAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_31  RCAAOSI_generator;   /* proc value of non-global proc */
A68_VC  XCAAOSI;  /* avoid structure result */
A68_VC  WCAAOSI_line;
A68_INT  YCAAOSI_i;
A68_INT  ZCAAOSI;  /* to part of loop */
A68_INT  ADAAOSI;  /* by part of loop */
A68_VC  BDAAOSI;  /* OPERATORS - istruct -> vector */
A68_VC  CDAAOSI;  /* OPERATORS - simple index */
A68_INT  DDAAOSI;  /* ADICOPS - MOD */
A68_INT  EDAAOSI;  /* ADICOPS - MOD */
A68_INT  FDAAOSI;  /* YIELD */
A68_CHAR * GDAAOSI;  /* YIELD */
A68_INT  HDAAOSI;  /* YIELD */
A68_CHAR * IDAAOSI;  /* YIELD */
A_PROC_ENTRY(intchars);
 /* line 70: */
 /* line 71: */
{ 
if ( (I<0) )
{ 
HCAAOSI = GCAAOSI;
} 
else
{ 
HCAAOSI = ICAAOSI;
} 
JCAAOSI_chars = HCAAOSI;
 /* line 72: */
KCAAOSI_n = I;
LCAAOSI_l = 0;
 /* line 73: */
if ( (I<0) )
{ 
MCAAOSI = 1;
} 
else
{ 
MCAAOSI = 0;
} 
NCAAOSI_e = MCAAOSI;
 /* line 74: */
for ( ;; )
{ 
if ( !((KCAAOSI_n!=0)) ) break;
KCAAOSI_n/=10;
LCAAOSI_l+=1;
}
 /* line 75: */
 /* line 76: */
 /* line 77: */
if ( (LCAAOSI_l==0) )
{ 
OCAAOSI = A_HVEC(PCAAOSI,'0',A68_CHAR );
} 
else
{ 
A_CLOSURE( RCAAOSI_generator, SCAAOSI_generator, TCAAOSI_generator );
(( TCAAOSI_generator * ) ( RCAAOSI_generator.nonlocals )) -> LCAAOSI_l = (&LCAAOSI_l);
(( TCAAOSI_generator * ) ( RCAAOSI_generator.nonlocals )) -> NCAAOSI_e = NCAAOSI_e;
A_CALLPROC(RCAAOSI_generator,(A68_TRUE, &XCAAOSI),(A68_TRUE, &XCAAOSI,(RCAAOSI_generator).nonlocals));
WCAAOSI_line = XCAAOSI;
 /* line 78: */
KCAAOSI_n = I;
 /* line 79: */
 /* line 80: */
ZCAAOSI = (NCAAOSI_e+1);
ADAAOSI = (-1);
for ( YCAAOSI_i = (LCAAOSI_l+NCAAOSI_e);
( ADAAOSI > 0 && YCAAOSI_i <= ZCAAOSI) ||
( ADAAOSI < 0 && YCAAOSI_i >= ZCAAOSI) ||
( ADAAOSI == 0 ) ;
YCAAOSI_i += ADAAOSI )
{ 
CDAAOSI = A_HISVEC(BDAAOSI,JCAAOSI_chars,10,A68_CHAR ) ;
EDAAOSI = 10 ;
FDAAOSI = (A_MOD(KCAAOSI_n,EDAAOSI,DDAAOSI)+1) ;
GDAAOSI = (&A_VINDEX(WCAAOSI_line,YCAAOSI_i)) ;
(*GDAAOSI) = A_VINDEX(CDAAOSI,FDAAOSI);
 /* line 81: */
 /* line 82: */
KCAAOSI_n/=10;
}
 /* line 83: */
if ( (NCAAOSI_e==1) )
{ 
HDAAOSI = 1 ;
IDAAOSI = (&A_VINDEX(WCAAOSI_line,HDAAOSI)) ;
(*IDAAOSI) = '-';
} 
 /* line 84: */
 /* line 85: */
 /* line 86: */
 /* line 89: */
OCAAOSI = WCAAOSI_line;
} 
} 
A_PROC_EXIT(intchars);
*ReturnedValue = (OCAAOSI);
return;
} 
#undef NL
 /* line 1: */
 /* line 4: */
void BAAAOSI(void)   /* initialise DECS strops */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","./mfiles","-staredit","259","./a68files/strops.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_31  LAAAOSI;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/osif/assoc/./a68files/strops.a68";
A_config.translation_time = "Tue Apr  4 09:24:24 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "AAAAOSI (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:24:24 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS strops);
UEAALIB_a68config(LGAALIB_configinfo, FAAAOSI);
 /* line 48: */
LAAAOSI.fn.fn_global = IAAAOSI_generator;
LAAAOSI.nonlocals = A68_NIL;
GAAAOSI_anonymous = LAAAOSI;
 /* line 51: */
 /* line 52: */
 /* line 55: */
 /* line 69: */
 /* line 90: */
A_PROC_EXIT(DECS strops);
} 
#undef NL
/* end of translation of ./a68files/strops.a68 */
