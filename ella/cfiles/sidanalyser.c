
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
/* UNAME:AAAAELA */
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
A_ISTRUCT(A68_CHAR ,58,A68t38);
typedef struct A68t38  A68_38 ;    /* STRUCT 58 CHAR */
struct A68t39 { A68_INT mode; union {
A68_INT  mode1;
} data; };
typedef struct A68t39  A68_39 ;    /* UNION(INT,VOID)  */
struct A68t40{
A68_INT  Type;
A_PAD_INT(PAD_1)
struct A68t39  Val;
};
typedef struct A68t40  A68_40 ;    /* STRUCT(INT,MODE39)  */
A_VECTOR(A68_SBITS ,A68t42);
typedef struct A68t42  A68_42 ;    /* VECTOR [] SHORT BITS */
A_VECTOR(A68_BITS ,A68t44);
typedef struct A68t44  A68_44 ;    /* VECTOR [] BITS */
struct A68t41{
A68_INT  Test_index;
A_PAD_INT(PAD_2)
struct A68t42  Sid_code;
A68_INT * Index;
A68_INT * Stind;
struct A68t40 * Lex;
struct A68t43 * Sidstack;
struct A68t44  Sid_blwds;
A68_INT  Sid_mult;
A_PAD_INT(PAD_3)
};
typedef struct A68t41  A68_41 ;    /* STRUCT(INT,MODE42,REF INT,REF INT,REF MODE40,REF REF MODE43,MODE44,INT)  */
A_VECTOR(A68_INT ,A68t43);
typedef struct A68t43  A68_43 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t45,(A68_BOOL ,struct A68t41 *),(A68_BOOL ,struct A68t41 *,void *));
typedef struct A68t45  A68_45 ;    /* PROC(BOOL) MODE41 */

A_PROCEDURE(A68_VOID ,A68t46,(A68_BOOL ,struct A68t42 *),(A68_BOOL ,struct A68t42 *,void *));
typedef struct A68t46  A68_46 ;    /* PROC(BOOL) MODE42 */

A_PROCEDURE(A68_VOID ,A68t47,(A68_BOOL ,struct A68t44 *),(A68_BOOL ,struct A68t44 *,void *));
typedef struct A68t47  A68_47 ;    /* PROC(BOOL) MODE44 */
#define A68_48  A68_42 
#define A68t48 A68t42            /* FLEX VECTOR [] SHORT BITS */
#define A68_49  A68_44 
#define A68t49 A68t44            /* FLEX VECTOR [] BITS */
#define A68_50  A68_41 
#define A68t50 A68t41            /* STRUCT(INT,MODE48,REF INT,REF INT,REF MODE40,REF REF MODE43,MODE49,INT)  */

A_PROCEDURE(A68_VOID ,A68t51,(struct A68t40 *),(struct A68t40 *,void *));
typedef struct A68t51  A68_51 ;    /* PROC MODE40 */

A_PROCEDURE(A68_VOID ,A68t52,(struct A68t41 ),(struct A68t41 ,void *));
typedef struct A68t52  A68_52 ;    /* PROC(MODE41) VOID */

A_PROCEDURE(A68_VOID ,A68t53,(A68_INT ,A68_INT ,struct A68t39 ,A68_INT ),(A68_INT ,A68_INT ,struct A68t39 ,A68_INT ,void *));
typedef struct A68t53  A68_53 ;    /* PROC(INT,INT,MODE39,INT) VOID */

A_PROCEDURE(A68_INT ,A68t54,(A68_INT ,A68_INT ,struct A68t39 ,A68_INT ),(A68_INT ,A68_INT ,struct A68t39 ,A68_INT ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(INT,INT,MODE39,INT) INT */
struct A68t55 { A68_INT mode; union {
A68_INT  mode2;
} data; };
typedef struct A68t55  A68_55 ;    /* UNION(VOID,INT)  */

A_PROCEDURE(A68_VOID ,A68t56,(A68_INT ,struct A68t42 ,struct A68t44 ,struct A68t33 ,struct A68t51 ,struct A68t52 ,struct A68t53 ,struct A68t54 ,struct A68t55 *),(A68_INT ,struct A68t42 ,struct A68t44 ,struct A68t33 ,struct A68t51 ,struct A68t52 ,struct A68t53 ,struct A68t54 ,struct A68t55 *,void *));
typedef struct A68t56  A68_56 ;    /* PROC(INT,MODE42,MODE44,MODE33,MODE51,MODE52,MODE53,MODE54) MODE55 */

A_PROCEDURE(A68_VOID ,A68t57,(A68_BOOL ,struct A68t43 *),(A68_BOOL ,struct A68t43 *,void *));
typedef struct A68t57  A68_57 ;    /* PROC(BOOL) MODE43 */

A_PROCEDURE(A68_BOOL ,A68t58,(A68_INT ,struct A68t41 ),(A68_INT ,struct A68t41 ,void *));
typedef struct A68t58  A68_58 ;    /* PROC(INT,MODE41) BOOL */

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
static A68_38   EAAAELA = {"$Id: sidanalyser.a68,v 34.2 1995/03/29 13:03:32 ella Exp $"}; 
A_GISVEC(A68_VC ,FAAAELA,EAAAELA,58)
A68_45  GAAAELA_anonymous;
typedef struct   /* env of non-global proc */
{
int dummy;
} KBAAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_43 * NBAAELA_sidstack;
} CCAAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_43 * DDAAELA_sidstack;
} RDAAELA_generator;

A_STATIC A68_VOID  IAAAELA_generator(A68_BOOL  HAAAELA_anonymous, A68_41  *ReturnedValue);

A_STATIC A68_VOID  KAAAELA_generator(A68_BOOL  JAAAELA_anonymous, A68_42  *ReturnedValue);

A_STATIC A68_VOID  OAAAELA_generator(A68_BOOL  NAAAELA_anonymous, A68_44  *ReturnedValue);

A68_VOID  GBAAELA_analyser(A68_INT  Sid_mult, A68_42  Sid_code, A68_44  Sid_blwds, A68_33  Sid_initstacks, A68_51  Reader, A68_52  Syntax_error, A68_53  Sid_actions, A68_54  Sid_returns, A68_55  *ReturnedValue);

A_STATIC A68_VOID  JBAAELA_generator(A68_BOOL  HBAAELA_anonymous, A68_43  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BCAAELA_generator(A68_BOOL  ZBAAELA_anonymous, A68_43  *ReturnedValue, void *NonLocals);

A68_BOOL  YCAAELA_checkinsert(A68_INT  T1, A68_41  Error);

A_STATIC A68_VOID  QDAAELA_generator(A68_BOOL  ODAAELA_anonymous, A68_43  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KAAAELA_generator(A68_BOOL  JAAAELA_anonymous, A68_42  *ReturnedValue)
{ 
A68_42  LAAAELA;  /* clause result */
A68_42  MAAAELA;  /* OPERATORS - dynamic generator */
{ 
 /* line 65: */
MAAAELA.upb = 0 ;
( JAAAELA_anonymous? A_VLOC(A68_SBITS ,MAAAELA): A_VHEAP(A68_SBITS ,MAAAELA) );
LAAAELA = MAAAELA;
} 
*ReturnedValue = (LAAAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  OAAAELA_generator(A68_BOOL  NAAAELA_anonymous, A68_44  *ReturnedValue)
{ 
A68_44  PAAAELA;  /* clause result */
A68_44  QAAAELA;  /* OPERATORS - dynamic generator */
{ 
 /* line 66: */
QAAAELA.upb = 0 ;
( NAAAELA_anonymous? A_VLOC(A68_BITS ,QAAAELA): A_VHEAP(A68_BITS ,QAAAELA) );
PAAAELA = QAAAELA;
} 
*ReturnedValue = (PAAAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  JBAAELA_generator(A68_BOOL  HBAAELA_anonymous, A68_43  *ReturnedValue, void *NonLocals)
#define NL(x) (((KBAAELA_generator *)NonLocals)->x)
{ 
A68_43  LBAAELA;  /* clause result */
A68_43  MBAAELA;  /* OPERATORS - dynamic generator */
{ 
MBAAELA.upb = 100 ;
( HBAAELA_anonymous? A_VLOC(A68_INT ,MBAAELA): A_VHEAP(A68_INT ,MBAAELA) );
LBAAELA = MBAAELA;
} 
*ReturnedValue = (LBAAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  BCAAELA_generator(A68_BOOL  ZBAAELA_anonymous, A68_43  *ReturnedValue, void *NonLocals)
#define NL(x) (((CCAAELA_generator *)NonLocals)->x)
{ 
A68_43  DCAAELA;  /* clause result */
A68_43  ECAAELA;  /* OPERATORS - dynamic generator */
{ 
ECAAELA.upb = ((*NL(NBAAELA_sidstack)).upb+100) ;
( ZBAAELA_anonymous? A_VLOC(A68_INT ,ECAAELA): A_VHEAP(A68_INT ,ECAAELA) );
DCAAELA = ECAAELA;
} 
*ReturnedValue = (DCAAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  QDAAELA_generator(A68_BOOL  ODAAELA_anonymous, A68_43  *ReturnedValue, void *NonLocals)
#define NL(x) (((RDAAELA_generator *)NonLocals)->x)
{ 
A68_43  SDAAELA;  /* clause result */
A68_43  TDAAELA;  /* OPERATORS - dynamic generator */
{ 
TDAAELA.upb = ((*NL(DDAAELA_sidstack)).upb+10) ;
( ODAAELA_anonymous? A_VLOC(A68_INT ,TDAAELA): A_VHEAP(A68_INT ,TDAAELA) );
SDAAELA = TDAAELA;
} 
*ReturnedValue = (SDAAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  IAAAELA_generator(A68_BOOL  HAAAELA_anonymous, A68_41  *ReturnedValue)
{ 
A68_50  RAAAELA_anonymous;
A68_42  SAAAELA;  /* avoid structure result */
A68_48 * TAAAELA;  /* YIELD */
A68_44  UAAAELA;  /* avoid structure result */
A68_49 * VAAAELA;  /* YIELD */
A68_41  WAAAELA;  /* clause result */
{ 
KAAAELA_generator( HAAAELA_anonymous, &SAAAELA );
TAAAELA = (&((&RAAAELA_anonymous)->Sid_code)) ;
(*TAAAELA) = SAAAELA;
OAAAELA_generator( HAAAELA_anonymous, &UAAAELA );
VAAAELA = (&((&RAAAELA_anonymous)->Sid_blwds)) ;
(*VAAAELA) = UAAAELA;
WAAAELA = RAAAELA_anonymous;
} 
*ReturnedValue = (WAAAELA);
return;
} 
#undef NL
 /* line 70: */
 /* line 71: */
 /* line 72: */
 /* line 73: */
 /* line 74: */
 /* line 75: */
 /* line 77: */

A68_VOID  GBAAELA_analyser(A68_INT  Sid_mult, A68_42  Sid_code, A68_44  Sid_blwds, A68_33  Sid_initstacks, A68_51  Reader, A68_52  Syntax_error, A68_53  Sid_actions, A68_54  Sid_returns, A68_55  *ReturnedValue)
{ 
A68_57  IBAAELA_generator;   /* proc value of non-global proc */
A68_43  OBAAELA;  /* avoid structure result */
A68_43  NBAAELA_sidstack;
A68_INT  PBAAELA_stind;
A68_INT  QBAAELA_index;
A68_40  RBAAELA_lex;
A68_55  TBAAELA;  /* OPERATORS - mode -> union mode */
A68_55  SBAAELA_result;
A68_BOOL  UBAAELA_continue;
A68_INT  VBAAELA_arg;
A68_INT  WBAAELA_cb;
A68_BITS  XBAAELA_val;
A68_INT  YBAAELA;  /* SHR */
A68_57  ACAAELA_generator;   /* proc value of non-global proc */
A68_43  FCAAELA;  /* avoid structure result */
A68_43  GCAAELA_x;
A68_43  HCAAELA;  /* OPERATORS - trim index */
A68_43  ICAAELA;  /* YIELD */
A68_INT  JCAAELA;  /* YIELD */
A68_INT * KCAAELA;  /* YIELD */
A68_BOOL  LCAAELA;  /* clause result */
A68_INT  MCAAELA;  /* YIELD */
A68_INT  NCAAELA;  /* ADICOPS - MOD */
A68_INT  OCAAELA;  /* ADICOPS - MOD */
A68_BITS  PCAAELA;  /* SHL */
A68_INT  QCAAELA;  /* SHL */
A68_55  RCAAELA;  /* OPERATORS - mode -> union mode */
A68_INT  SCAAELA;  /* YIELD */
A68_41  TCAAELA;  /* collateral clause result */
A68_40  UCAAELA;  /* avoid structure result */
A68_55  VCAAELA;  /* clause result */
A_PROC_ENTRY(analyser);
 /* line 78: */
 /* line 79: */
{ 
A_CLOSURE( IBAAELA_generator, JBAAELA_generator, KBAAELA_generator );
A_CALLPROC(IBAAELA_generator,(A68_FALSE, &OBAAELA),(A68_FALSE, &OBAAELA,(IBAAELA_generator).nonlocals));
NBAAELA_sidstack = OBAAELA;
 /* line 80: */
PBAAELA_stind = 1;
QBAAELA_index = 1;
 /* line 81: */
 /* line 82: */
SBAAELA_result = A_EMPTY(TBAAELA,1);
 /* line 84: */
A_CALLPROC(Sid_initstacks,(),((Sid_initstacks).nonlocals));
 /* line 86: */
UBAAELA_continue = A68_TRUE;
 /* line 87: */
 /* line 88: */
 /* line 90: */
for ( ;; )
{ 
 /* line 91: */
 /* line 92: */
if ( !(UBAAELA_continue) ) break;
XBAAELA_val = (A68_BITS )A_VINDEX(Sid_code,QBAAELA_index);
 /* line 93: */
YBAAELA = 3 ;
VBAAELA_arg = (A68_INT )A_SHR(XBAAELA_val,YBAAELA);
 /* line 94: */
 /* line 95: */
 /* line 97: */
switch ( ((A68_INT )(A68_BITS )(XBAAELA_val&0X7U)+1) )
{ 
case 1: 
{ 
 /* line 98: */
if ( (PBAAELA_stind==NBAAELA_sidstack.upb) )
{ 
A_CLOSURE( ACAAELA_generator, BCAAELA_generator, CCAAELA_generator );
(( CCAAELA_generator * ) ( ACAAELA_generator.nonlocals )) -> NBAAELA_sidstack = (&NBAAELA_sidstack);
A_CALLPROC(ACAAELA_generator,(A68_FALSE, &FCAAELA),(A68_FALSE, &FCAAELA,(ACAAELA_generator).nonlocals));
GCAAELA_x = FCAAELA;
 /* line 99: */
ICAAELA = A_VTRIM(HCAAELA,(GCAAELA_x),A_VTSCRIPT(&(HCAAELA.upb),(GCAAELA_x).upb,1,NBAAELA_sidstack.upb)) ;
A_VASSIGN2(NBAAELA_sidstack,ICAAELA,A68_INT );
 /* line 100: */
 /* line 101: */
NBAAELA_sidstack = GCAAELA_x;
} 
 /* line 102: */
JCAAELA = PBAAELA_stind+=1 ;
KCAAELA = (&A_VINDEX(NBAAELA_sidstack,JCAAELA)) ;
(*KCAAELA) = (QBAAELA_index+1);
 /* line 103: */
 /* line 104: */
 /* line 107: */
QBAAELA_index = VBAAELA_arg;
} 
break;
case 2: 
 /* line 110: */
QBAAELA_index = VBAAELA_arg;
break;
case 3: 
 /* line 111: */
if ( (((*(&((&RBAAELA_lex)->Type)))+1)==VBAAELA_arg) )
{ 
 /* line 112: */
QBAAELA_index+=2;
} 
else
{ 
 /* line 113: */
 /* line 116: */
QBAAELA_index+=1;
} 
break;
case 4: 
WBAAELA_cb = ((VBAAELA_arg*Sid_mult)+(*(&((&RBAAELA_lex)->Type))));
 /* line 117: */
 /* line 118: */
MCAAELA = ((WBAAELA_cb/32)+1) ;
OCAAELA = 32 ;
PCAAELA = A_VINDEX(Sid_blwds,MCAAELA) ;
QCAAELA = A_MOD(WBAAELA_cb,OCAAELA,NCAAELA) ;
LCAAELA = ((A68_INT )A_SHL(PCAAELA,QCAAELA)<0);
if ( LCAAELA )
{ 
 /* line 119: */
QBAAELA_index+=2;
} 
else
{ 
 /* line 120: */
 /* line 123: */
QBAAELA_index+=1;
} 
break;
case 5: 
 /* line 124: */
 /* line 125: */
 /* line 128: */
A_CALLPROC(Sid_actions,(VBAAELA_arg, QBAAELA_index+=1, (*(&((&RBAAELA_lex)->Val))), PBAAELA_stind),(VBAAELA_arg, QBAAELA_index+=1, (*(&((&RBAAELA_lex)->Val))), PBAAELA_stind,(Sid_actions).nonlocals));
break;
case 6: 
 /* line 129: */
{ 
 /* line 130: */
 /* line 131: */
SCAAELA = A_CALLPROC(Sid_returns,(VBAAELA_arg, QBAAELA_index+=1, (*(&((&RBAAELA_lex)->Val))), PBAAELA_stind),(VBAAELA_arg, QBAAELA_index+=1, (*(&((&RBAAELA_lex)->Val))), PBAAELA_stind,(Sid_returns).nonlocals)) ;
SBAAELA_result = A_UNITE(RCAAELA,mode2,2,SCAAELA);
 /* line 132: */
 /* line 133: */
 /* line 136: */
UBAAELA_continue = A68_FALSE;
} 
break;
case 7: 
{ 
TCAAELA.Test_index = VBAAELA_arg;
TCAAELA.Sid_code = Sid_code;
TCAAELA.Index = (&QBAAELA_index);
TCAAELA.Stind = (&PBAAELA_stind);
TCAAELA.Lex = (&RBAAELA_lex);
 /* line 137: */
TCAAELA.Sidstack = (&NBAAELA_sidstack);
TCAAELA.Sid_blwds = Sid_blwds;
TCAAELA.Sid_mult = Sid_mult;
A_CALLPROC(Syntax_error,(TCAAELA),(TCAAELA,(Syntax_error).nonlocals));
 /* line 138: */
 /* line 139: */
 /* line 142: */
UBAAELA_continue = A68_FALSE;
} 
break;
case 8: 
{ 
 /* line 143: */
if ( (VBAAELA_arg==0) )
{ 
A_CALLPROC(Reader,( &UCAAELA),( &UCAAELA,(Reader).nonlocals));
RBAAELA_lex = UCAAELA;
 /* line 144: */
 /* line 145: */
 /* line 147: */
QBAAELA_index+=1;
} 
else
{ 
QBAAELA_index = (*(&A_VINDEX(NBAAELA_sidstack,PBAAELA_stind)));
 /* line 148: */
 /* line 149: */
 /* line 151: */
 /* line 153: */
PBAAELA_stind-=1;
} 
} 
break;
default: 
 /* line 154: */
/*SKIP*/;
break;
} 
}
 /* line 156: */
 /* line 157: */
VCAAELA = SBAAELA_result;
} 
A_PROC_EXIT(analyser);
*ReturnedValue = (VCAAELA);
return;
} 
#undef NL

A68_BOOL  YCAAELA_checkinsert(A68_INT  T1, A68_41  Error)
{ 
A68_40  ZCAAELA;  /* collateral clause result */
A68_39  ADAAELA;  /* OPERATORS - mode -> union mode */
A68_40  BDAAELA_lex;
A68_BOOL  CDAAELA_result;
A68_43  DDAAELA_sidstack;
A68_44  EDAAELA_sid_blwds;
A68_42  FDAAELA_sid_code;
A68_INT  GDAAELA_stind;
A68_INT  HDAAELA_index;
A68_INT  IDAAELA_sid_mult;
A68_BOOL  JDAAELA_continue;
A68_INT  KDAAELA_arg;
A68_INT  LDAAELA_cb;
A68_BITS  MDAAELA_val;
A68_INT  NDAAELA;  /* SHR */
A68_57  PDAAELA_generator;   /* proc value of non-global proc */
A68_43  UDAAELA;  /* avoid structure result */
A68_43  VDAAELA_x;
A68_43  WDAAELA;  /* OPERATORS - trim index */
A68_43  XDAAELA;  /* YIELD */
A68_INT  YDAAELA;  /* YIELD */
A68_INT * ZDAAELA;  /* YIELD */
A68_BOOL  AEAAELA;  /* clause result */
A68_INT  BEAAELA;  /* YIELD */
A68_INT  CEAAELA;  /* ADICOPS - MOD */
A68_INT  DEAAELA;  /* ADICOPS - MOD */
A68_BITS  EEAAELA;  /* SHL */
A68_INT  FEAAELA;  /* SHL */
A68_BOOL  GEAAELA;  /* clause result */
A_PROC_ENTRY(checkinsert);
 /* line 162: */
 /* line 163: */
{ 
ZCAAELA.Type = T1;
ZCAAELA.Val = A_EMPTY(ADAAELA,2);
BDAAELA_lex = ZCAAELA;
 /* line 164: */
CDAAELA_result = A68_FALSE;
 /* line 165: */
DDAAELA_sidstack = (*Error.Sidstack);
 /* line 166: */
EDAAELA_sid_blwds = Error.Sid_blwds;
 /* line 167: */
FDAAELA_sid_code = Error.Sid_code;
 /* line 168: */
GDAAELA_stind = (*Error.Stind);
HDAAELA_index = Error.Test_index;
 /* line 169: */
IDAAELA_sid_mult = Error.Sid_mult;
 /* line 171: */
JDAAELA_continue = A68_TRUE;
 /* line 172: */
 /* line 173: */
 /* line 174: */
for ( ;; )
{ 
 /* line 175: */
 /* line 176: */
if ( !(JDAAELA_continue) ) break;
MDAAELA_val = (A68_BITS )A_VINDEX(FDAAELA_sid_code,HDAAELA_index);
 /* line 177: */
NDAAELA = 3 ;
KDAAELA_arg = (A68_INT )A_SHR(MDAAELA_val,NDAAELA);
 /* line 178: */
 /* line 179: */
 /* line 181: */
switch ( ((A68_INT )(A68_BITS )(MDAAELA_val&0X7U)+1) )
{ 
case 1: 
{ 
 /* line 182: */
if ( (GDAAELA_stind==DDAAELA_sidstack.upb) )
{ 
A_CLOSURE( PDAAELA_generator, QDAAELA_generator, RDAAELA_generator );
(( RDAAELA_generator * ) ( PDAAELA_generator.nonlocals )) -> DDAAELA_sidstack = (&DDAAELA_sidstack);
A_CALLPROC(PDAAELA_generator,(A68_FALSE, &UDAAELA),(A68_FALSE, &UDAAELA,(PDAAELA_generator).nonlocals));
VDAAELA_x = UDAAELA;
 /* line 183: */
XDAAELA = A_VTRIM(WDAAELA,(VDAAELA_x),A_VTSCRIPT(&(WDAAELA.upb),(VDAAELA_x).upb,1,DDAAELA_sidstack.upb)) ;
A_VASSIGN2(DDAAELA_sidstack,XDAAELA,A68_INT );
 /* line 184: */
 /* line 185: */
DDAAELA_sidstack = VDAAELA_x;
} 
 /* line 186: */
YDAAELA = GDAAELA_stind+=1 ;
ZDAAELA = (&A_VINDEX(DDAAELA_sidstack,YDAAELA)) ;
(*ZDAAELA) = (HDAAELA_index+1);
 /* line 187: */
 /* line 188: */
 /* line 191: */
HDAAELA_index = KDAAELA_arg;
} 
break;
case 2: 
 /* line 194: */
HDAAELA_index = KDAAELA_arg;
break;
case 3: 
 /* line 195: */
if ( (((*(&((&BDAAELA_lex)->Type)))+1)==KDAAELA_arg) )
{ 
 /* line 196: */
HDAAELA_index+=2;
} 
else
{ 
 /* line 197: */
 /* line 200: */
HDAAELA_index+=1;
} 
break;
case 4: 
LDAAELA_cb = ((KDAAELA_arg*IDAAELA_sid_mult)+(*(&((&BDAAELA_lex)->Type))));
 /* line 201: */
 /* line 202: */
BEAAELA = ((LDAAELA_cb/32)+1) ;
DEAAELA = 32 ;
EEAAELA = A_VINDEX(EDAAELA_sid_blwds,BEAAELA) ;
FEAAELA = A_MOD(LDAAELA_cb,DEAAELA,CEAAELA) ;
AEAAELA = ((A68_INT )A_SHL(EEAAELA,FEAAELA)<0);
if ( AEAAELA )
{ 
 /* line 203: */
HDAAELA_index+=2;
} 
else
{ 
 /* line 204: */
 /* line 207: */
HDAAELA_index+=1;
} 
break;
case 5: 
 /* line 210: */
HDAAELA_index+=1;
break;
case 6: 
 /* line 213: */
JDAAELA_continue = A68_FALSE;
break;
case 7: 
 /* line 214: */
{ 
CDAAELA_result = A68_FALSE;
 /* line 215: */
 /* line 217: */
JDAAELA_continue = A68_FALSE;
} 
break;
case 8: 
{ 
 /* line 218: */
if ( (KDAAELA_arg==0) )
{ 
CDAAELA_result = A68_TRUE;
 /* line 219: */
 /* line 220: */
 /* line 222: */
JDAAELA_continue = A68_FALSE;
} 
else
{ 
HDAAELA_index = (*(&A_VINDEX(DDAAELA_sidstack,GDAAELA_stind)));
 /* line 223: */
if ( (GDAAELA_stind!=1) )
{ 
 /* line 224: */
 /* line 226: */
 /* line 228: */
GDAAELA_stind-=1;
} 
} 
} 
break;
default: 
 /* line 229: */
/*SKIP*/;
break;
} 
}
 /* line 231: */
 /* line 232: */
 /* line 235: */
GEAAELA = CDAAELA_result;
} 
A_PROC_EXIT(checkinsert);
return( GEAAELA );
} 
#undef NL
 /* line 1: */
 /* line 4: */
void BAAAELA(void)   /* initialise DECS sidanalyser */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/sidanalyser.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_45  XAAAELA;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ella/assoc/./a68files/sidanalyser.a68";
A_config.translation_time = "Tue Apr  4 10:32:21 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "AAAAELA (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:32:21 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS sidanalyser);
UEAALIB_a68config(LGAALIB_configinfo, FAAAELA);
 /* line 56: */
 /* line 58: */
 /* line 60: */
 /* line 61: */
XAAAELA.fn.fn_global = IAAAELA_generator;
XAAAELA.nonlocals = A68_NIL;
GAAAELA_anonymous = XAAAELA;
 /* line 69: */
 /* line 161: */
 /* line 236: */
A_PROC_EXIT(DECS sidanalyser);
} 
#undef NL
/* end of translation of ./a68files/sidanalyser.a68 */
