
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
/* UNAME:VPAAOSI */
#include "Asupport.h"
A_ISTRUCT(A68_CHAR ,16000000,A68t31);
typedef struct A68t31  A68_31 ;    /* STRUCT 16000000 CHAR */
A_ISTRUCT(struct A68t31 *,16000000,A68t32);
typedef struct A68t32  A68_32 ;    /* STRUCT 16000000 REF MODE31 */

A_PROCEDURE(A68_VOID ,A68t33,(struct A68t31 *,A68_VC *),(struct A68t31 *,A68_VC *,void *));
typedef struct A68t33  A68_33 ;    /* PROC(REF MODE31) REF MODE26 */

A_PROCEDURE(A68_CHAR *,A68t34,(A68_VC ),(A68_VC ,void *));
typedef struct A68t34  A68_34 ;    /* PROC(MODE26) REF CHAR */
A_VECTOR(A68_INT ,A68t35);
typedef struct A68t35  A68_35 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_INT *,A68t36,(struct A68t35 ),(struct A68t35 ,void *));
typedef struct A68t36  A68_36 ;    /* PROC(MODE35) REF INT */

A_PROCEDURE(A68_CHAR *,A68t37,(struct A68t31 *),(struct A68t31 *,void *));
typedef struct A68t37  A68_37 ;    /* PROC(REF MODE31) REF CHAR */

A_PROCEDURE(struct A68t31 *,A68t38,(A68_CHAR *),(A68_CHAR *,void *));
typedef struct A68t38  A68_38 ;    /* PROC(REF CHAR) REF MODE31 */

A_PROCEDURE(A68_VOID ,A68t39,(void),(void *));
typedef struct A68t39  A68_39 ;    /* PROC VOID */
struct A68t40{
A68_BITS * Cp;
struct A68t31 * Env;
};
typedef struct A68t40  A68_40 ;    /* STRUCT(REF BITS,REF MODE31)  */

A_PROCEDURE(struct A68t40 *,A68t41,(struct A68t39 *),(struct A68t39 *,void *));
typedef struct A68t41  A68_41 ;    /* PROC(REF MODE39) REF MODE40 */

A_PROCEDURE(A68_VOID ,A68t42,(struct A68t39 ,struct A68t40 *),(struct A68t39 ,struct A68t40 *,void *));
typedef struct A68t42  A68_42 ;    /* PROC(MODE39) MODE40 */

A_PROCEDURE(A68_VOID ,A68t43,(A68_INT ),(A68_INT ,void *));
typedef struct A68t43  A68_43 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t44,(struct A68t43 ,struct A68t40 *),(struct A68t43 ,struct A68t40 *,void *));
typedef struct A68t44  A68_44 ;    /* PROC(MODE43) MODE40 */

A_PROCEDURE(A68_VOID ,A68t45,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t45  A68_45 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t46,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t46  A68_46 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t47,(A68_CHAR ,A68_VC *),(A68_CHAR ,A68_VC *,void *));
typedef struct A68t47  A68_47 ;    /* PROC(CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t48,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(MODE26) REF MODE26 */
struct A68t50 ;

A_PROCEDURE(A68_VOID ,A68t49,(struct A68t50 ,A68_VC *),(struct A68t50 ,A68_VC *,void *));
typedef struct A68t49  A68_49 ;    /* PROC(MODE50) REF MODE26 */
A_VECTOR(A68_VC ,A68t50);
typedef struct A68t50  A68_50 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_VOID ,A68t51,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t51  A68_51 ;    /* PROC(INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t52,(struct A68t39 ),(struct A68t39 ,void *));
typedef struct A68t52  A68_52 ;    /* PROC(MODE39) VOID */

A_PROCEDURE(A68_VOID ,A68t53,(A68_VC ),(A68_VC ,void *));
typedef struct A68t53  A68_53 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t54,(struct A68t53 ),(struct A68t53 ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(MODE53) VOID */

A_PROCEDURE(A68_VOID ,A68t55,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t55  A68_55 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,56,A68t56);
typedef struct A68t56  A68_56 ;    /* STRUCT 56 CHAR */
A_ISTRUCT(A68_CHAR ,4,A68t57);
typedef struct A68t57  A68_57 ;    /* STRUCT 4 CHAR */

A_PROCEDURE(A68_INT ,A68t58,(struct A68t57 ),(struct A68t57 ,void *));
typedef struct A68t58  A68_58 ;    /* PROC(MODE57) INT */

A_PROCEDURE(struct A68t57 ,A68t59,(A68_INT ),(A68_INT ,void *));
typedef struct A68t59  A68_59 ;    /* PROC(INT) MODE57 */

A_PROCEDURE(A68_VOID ,A68t60,(struct A68t35 ,A68_VC *),(struct A68t35 ,A68_VC *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(REF MODE35) REF MODE26 */

A_PROCEDURE(A68_BITS *,A68t61,(A68_BITS *,A68_BITS ),(A68_BITS *,A68_BITS ,void *));
typedef struct A68t61  A68_61 ;    /* PROC(REF BITS,BITS) REF BITS */

A_PROCEDURE(A68_INT *,A68t62,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t62  A68_62 ;    /* PROC(REF INT,MODE26) REF INT */

A_PROCEDURE(A68_VOID ,A68t63,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t63  A68_63 ;    /* PROC(REF MODE26,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t64,(A68_VC ,A68_CHAR ),(A68_VC ,A68_CHAR ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(REF MODE26,CHAR) VOID */

A_PROCEDURE(A68_INT ,A68t65,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t65  A68_65 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t66,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t66  A68_66 ;    /* PROC(BITS,BITS) BITS */

A_PROCEDURE(A68_LBITS ,A68t67,(A68_LBITS ,A68_LBITS ),(A68_LBITS ,A68_LBITS ,void *));
typedef struct A68t67  A68_67 ;    /* PROC(LONG BITS,LONG BITS) LONG BITS */

A_PROCEDURE(A68_INT ,A68t68,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t68  A68_68 ;    /* PROC(CHAR,MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t69,(A68_CHAR ,A68_VC ,A68_VC *),(A68_CHAR ,A68_VC ,A68_VC *,void *));
typedef struct A68t69  A68_69 ;    /* PROC(CHAR,REF MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t70,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t70  A68_70 ;    /* PROC(REF MODE26,CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t71,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t71  A68_71 ;    /* PROC(MODE26,CHAR) MODE26 */

A_PROCEDURE(A68_INT ,A68t72,(A68_VC ),(A68_VC ,void *));
typedef struct A68t72  A68_72 ;    /* PROC(MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t73,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t73  A68_73 ;    /* PROC(INT,INT) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t74,(A68_VC ,A68_VC ,A68_INT ,A68_INT ),(A68_VC ,A68_VC ,A68_INT ,A68_INT ,void *));
typedef struct A68t74  A68_74 ;    /* PROC(REF MODE26,MODE26,INT,INT) INT */

A_PROCEDURE(A68_VOID ,A68t75,(A68_LINT ,A68_INT ,A68_VC *),(A68_LINT ,A68_INT ,A68_VC *,void *));
typedef struct A68t75  A68_75 ;    /* PROC(LONG INT,INT) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t76,(A68_VC ,A68_VC ,A68_INT ,A68_LINT ),(A68_VC ,A68_VC ,A68_INT ,A68_LINT ,void *));
typedef struct A68t76  A68_76 ;    /* PROC(REF MODE26,MODE26,INT,LONG INT) INT */
A_ISTRUCT(A68_CHAR ,5,A68t77);
typedef struct A68t77  A68_77 ;    /* STRUCT 5 CHAR */

A_PROCEDURE(A68_VOID ,A68t78,(A68_LBITS ,A68_INT ,A68_VC *),(A68_LBITS ,A68_INT ,A68_VC *,void *));
typedef struct A68t78  A68_78 ;    /* PROC(LONG BITS,INT) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t79,(A68_VC ,A68_VC ,A68_INT ,A68_LBITS ),(A68_VC ,A68_VC ,A68_INT ,A68_LBITS ,void *));
typedef struct A68t79  A68_79 ;    /* PROC(REF MODE26,MODE26,INT,LONG BITS) INT */
A_ISTRUCT(A68_CHAR ,6,A68t80);
typedef struct A68t80  A68_80 ;    /* STRUCT 6 CHAR */

A_PROCEDURE(A68_BOOL ,A68t81,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t81  A68_81 ;    /* PROC(REF INT,MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t82,(A68_CHAR ,A68_INT *,A68_VC ),(A68_CHAR ,A68_INT *,A68_VC ,void *));
typedef struct A68t82  A68_82 ;    /* PROC(CHAR,REF INT,MODE26) BOOL */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from strops --- */
/* --- End of imports from strops --- */


/* --- Imports from cif --- */
#include <stdio.h>

#define QDAAOSI_nullccharptr NULL
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
extern A68_VOID  UDAAOSI_cstringtorvc(struct A68t31 *,A68_VC *);
extern A68_CHAR * CEAAOSI_vctocharptr(A68_VC );
/* --- End of imports from cif --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void BAAAOSI(void);   /* strops */
extern void JDAAOSI(void);   /* cif */
/* --- end of DECS initialisation functions --- */
static A68_56   ZPAAOSI = {"$Id: usefulops.a68,v 34.3 1995/03/29 13:01:38 ella Exp $"}; 
A_GISVEC(A68_VC ,AQAAOSI,ZPAAOSI,56)
#include <stdio.h>
#define SPRINTF(s,format,p1,p2) \
  A_int_INT(sprintf(A_VC_charptr(s),A_VC_charptr(format),A_INT_int(p1),A_INT_int(p2)))

#define GUAAOSI_sprintf SPRINTF
static A68_57   QUAAOSI = {"%*d\000"}; 
A_GISVEC(A68_VC ,RUAAOSI,QUAAOSI,4)
#include <stdio.h>
#define SPRINTF2(s,format,p1,p2) \
  A_int_INT(sprintf(A_VC_charptr(s),A_VC_charptr(format),A_INT_int(p1),A_LINT_long(p2)))

#define YUAAOSI_sprintf SPRINTF2
static A68_77   IVAAOSI = {"%*ld\000"}; 
A_GISVEC(A68_VC ,JVAAOSI,IVAAOSI,5)
#include <stdio.h>
#define SPRINTF3(s,format,p1,p2) \
  A_int_INT(sprintf(A_VC_charptr(s),A_VC_charptr(format),A_INT_int(p1),A_LBITS_ulong(p2)))

#define QVAAOSI_sprintf SPRINTF3
static A68_80   AWAAOSI = {"%.*lx\000"}; 
A_GISVEC(A68_VC ,BWAAOSI,AWAAOSI,6)
typedef struct   /* env of non-global proc */
{
A68_VC  String;
} XSAAOSI_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  String;
} KTAAOSI_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  Width;
A_PAD_INT(PAD_1)
} KUAAOSI_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  Width;
A_PAD_INT(PAD_2)
} CVAAOSI_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  Width;
A_PAD_INT(PAD_3)
} UVAAOSI_generator;

A68_BITS * DQAAOSI_orab(A68_BITS * L, A68_BITS  R);

A68_INT * HQAAOSI_becomes(A68_INT * I, A68_VC  Slice);

A68_VOID  OQAAOSI_becomes(A68_VC  Slice, A68_INT  I, A68_VC  *ReturnedValue);

A68_VOID  YQAAOSI_fill(A68_VC  Dest, A68_CHAR  Source);

A68_INT  DRAAOSI_max(A68_INT  A, A68_INT  B);

A68_BITS  HRAAOSI_xor(A68_BITS  A, A68_BITS  B);

A68_LBITS  LRAAOSI_xor(A68_LBITS  A, A68_LBITS  B);

A68_INT  PRAAOSI_charinvec(A68_CHAR  C, A68_VC  S);

A68_INT  YRAAOSI_truncate(A68_CHAR  C, A68_VC  S);

A68_VOID  FSAAOSI_scanto(A68_CHAR  C, A68_VC  S, A68_VC  *ReturnedValue);

A68_VOID  KSAAOSI_before(A68_VC  S, A68_CHAR  C, A68_VC  *ReturnedValue);

A68_VOID  PSAAOSI_before(A68_VC  S, A68_CHAR  C, A68_VC  *ReturnedValue);

A68_VOID  TSAAOSI_uppercased(A68_VC  String, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  WSAAOSI_generator(A68_BOOL  USAAOSI_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  GTAAOSI_capitalised(A68_VC  String, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  JTAAOSI_generator(A68_BOOL  HTAAOSI_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_INT  UTAAOSI_stringvalue(A68_VC  String);

A68_VOID  FUAAOSI_whole(A68_INT  Val, A68_INT  Width, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  JUAAOSI_generator(A68_BOOL  HUAAOSI_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  XUAAOSI_lwhole(A68_LINT  Val, A68_INT  Width, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  BVAAOSI_generator(A68_BOOL  ZUAAOSI_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  PVAAOSI_hex(A68_LBITS  B, A68_INT  Width, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  TVAAOSI_generator(A68_BOOL  RVAAOSI_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_BOOL  HWAAOSI_vcdectoint(A68_INT * Ri, A68_VC  Num);

A68_BOOL  EXAAOSI_charinstring(A68_CHAR  C, A68_INT * I, A68_VC  S);

A68_VOID  KXAAOSI_xc(A68_INT  I, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  WSAAOSI_generator(A68_BOOL  USAAOSI_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((XSAAOSI_generator *)NonLocals)->x)
{ 
A68_VC  YSAAOSI;  /* clause result */
A68_VC  ZSAAOSI;  /* OPERATORS - dynamic generator */
{ 
ZSAAOSI.upb = NL(String).upb ;
( USAAOSI_anonymous? A_VLOC(A68_CHAR ,ZSAAOSI): A_VHEAP(A68_CHAR ,ZSAAOSI) );
YSAAOSI = ZSAAOSI;
} 
*ReturnedValue = (YSAAOSI);
return;
} 
#undef NL

A_STATIC A68_VOID  JTAAOSI_generator(A68_BOOL  HTAAOSI_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((KTAAOSI_generator *)NonLocals)->x)
{ 
A68_VC  LTAAOSI;  /* clause result */
A68_VC  MTAAOSI;  /* OPERATORS - dynamic generator */
{ 
MTAAOSI.upb = NL(String).upb ;
( HTAAOSI_anonymous? A_VLOC(A68_CHAR ,MTAAOSI): A_VHEAP(A68_CHAR ,MTAAOSI) );
LTAAOSI = MTAAOSI;
} 
*ReturnedValue = (LTAAOSI);
return;
} 
#undef NL

A_STATIC A68_VOID  JUAAOSI_generator(A68_BOOL  HUAAOSI_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((KUAAOSI_generator *)NonLocals)->x)
{ 
A68_INT  LUAAOSI;  /* clause result */
A68_VC  MUAAOSI;  /* clause result */
A68_VC  NUAAOSI;  /* OPERATORS - dynamic generator */
{ 
if ( (NL(Width)<=0) )
{ 
LUAAOSI = 25;
} 
else
{ 
LUAAOSI = (NL(Width)+10);
} 
NUAAOSI.upb = LUAAOSI ;
( HUAAOSI_anonymous? A_VLOC(A68_CHAR ,NUAAOSI): A_VHEAP(A68_CHAR ,NUAAOSI) );
MUAAOSI = NUAAOSI;
} 
*ReturnedValue = (MUAAOSI);
return;
} 
#undef NL

A_STATIC A68_VOID  BVAAOSI_generator(A68_BOOL  ZUAAOSI_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((CVAAOSI_generator *)NonLocals)->x)
{ 
A68_INT  DVAAOSI;  /* clause result */
A68_VC  EVAAOSI;  /* clause result */
A68_VC  FVAAOSI;  /* OPERATORS - dynamic generator */
{ 
if ( (NL(Width)<=0) )
{ 
DVAAOSI = 25;
} 
else
{ 
DVAAOSI = (NL(Width)+10);
} 
FVAAOSI.upb = DVAAOSI ;
( ZUAAOSI_anonymous? A_VLOC(A68_CHAR ,FVAAOSI): A_VHEAP(A68_CHAR ,FVAAOSI) );
EVAAOSI = FVAAOSI;
} 
*ReturnedValue = (EVAAOSI);
return;
} 
#undef NL

A_STATIC A68_VOID  TVAAOSI_generator(A68_BOOL  RVAAOSI_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((UVAAOSI_generator *)NonLocals)->x)
{ 
A68_INT  VVAAOSI;  /* clause result */
A68_VC  WVAAOSI;  /* clause result */
A68_VC  XVAAOSI;  /* OPERATORS - dynamic generator */
{ 
if ( (NL(Width)<=0) )
{ 
VVAAOSI = 25;
} 
else
{ 
VVAAOSI = (NL(Width)+10);
} 
XVAAOSI.upb = VVAAOSI ;
( RVAAOSI_anonymous? A_VLOC(A68_CHAR ,XVAAOSI): A_VHEAP(A68_CHAR ,XVAAOSI) );
WVAAOSI = XVAAOSI;
} 
*ReturnedValue = (WVAAOSI);
return;
} 
#undef NL

A68_BITS * DQAAOSI_orab(A68_BITS * L, A68_BITS  R)
{ 
A68_BITS * EQAAOSI;  /* clause result */
A_PROC_ENTRY(orab);
(*L) = (A68_BITS )((*L)|R) ;
EQAAOSI = L;
A_PROC_EXIT(orab);
return( EQAAOSI );
} 
#undef NL

A68_INT * HQAAOSI_becomes(A68_INT * I, A68_VC  Slice)
{ 
A68_35  IQAAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
union {  /* BIOP 99 */
A68_35   source;
A68_VC   destination;
} JQAAOSI; 
A68_VC  KQAAOSI;  /* YIELD */
A68_INT * LQAAOSI;  /* clause result */
A_PROC_ENTRY(becomes);
 /* line 61: */
{ 
JQAAOSI.source = A_VEC(IQAAOSI,I,A68_INT *) ;
KQAAOSI = (JQAAOSI.destination) ;
A_VASSIGN2(Slice,KQAAOSI,A68_CHAR );
LQAAOSI = I;
} 
A_PROC_EXIT(becomes);
return( LQAAOSI );
} 
#undef NL

A68_VOID  OQAAOSI_becomes(A68_VC  Slice, A68_INT  I, A68_VC  *ReturnedValue)
{ 
A68_VC  PQAAOSI;  /* clause result */
union {  /* BIOP 99 */
A68_INT   source;
A68_57   destination;
} QQAAOSI; 
A68_VC  RQAAOSI;  /* OPERATORS - istruct -> vector */
A68_57  SQAAOSI;  /* OPERATORS - istruct -> vector */
A68_VC  TQAAOSI;  /* OPERATORS - trim index */
A68_VC  UQAAOSI;  /* OPERATORS - trim index */
A68_VC  VQAAOSI;  /* OPERATORS - assign op */
A_PROC_ENTRY(becomes);
 /* line 65: */
 /* line 66: */
 /* line 67: */
QQAAOSI.source = I ;
SQAAOSI = (QQAAOSI.destination) ;
TQAAOSI = A_HISVEC(RQAAOSI,SQAAOSI,4,A68_CHAR ) ;
VQAAOSI = A_VTRIM(UQAAOSI,(TQAAOSI),A_VTSCRIPT(&(UQAAOSI.upb),(TQAAOSI).upb,(5-Slice.upb),(TQAAOSI).upb)) ;
A_VASSIGN2(VQAAOSI,Slice,A68_CHAR ) ;
PQAAOSI = Slice;
A_PROC_EXIT(becomes);
*ReturnedValue = (PQAAOSI);
return;
} 
#undef NL

A68_VOID  YQAAOSI_fill(A68_VC  Dest, A68_CHAR  Source)
{ 
A68_CHAR * ZQAAOSI_c;
A68_INT  ARAAOSI;  /* forall loop counter */
A_PROC_ENTRY(fill);
 /* line 81: */
ARAAOSI = Dest.upb -1;
ZQAAOSI_c = Dest.data;
for (;ARAAOSI-- >= 0;
(ZQAAOSI_c++
) )
{
(*ZQAAOSI_c) = Source;
}
A_PROC_EXIT(fill);
return;
} 
#undef NL

A68_INT  DRAAOSI_max(A68_INT  A, A68_INT  B)
{ 
A68_INT  ERAAOSI;  /* clause result */
A_PROC_ENTRY(max);
if ( (A>B) )
{ 
ERAAOSI = A;
} 
else
{ 
ERAAOSI = B;
} 
A_PROC_EXIT(max);
return( ERAAOSI );
} 
#undef NL

A68_BITS  HRAAOSI_xor(A68_BITS  A, A68_BITS  B)
{ 
A68_BITS  IRAAOSI;  /* clause result */
A_PROC_ENTRY(xor);
IRAAOSI = (A68_BITS )((A68_BITS )(A&~B)|(A68_BITS )(~A&B));
A_PROC_EXIT(xor);
return( IRAAOSI );
} 
#undef NL

A68_LBITS  LRAAOSI_xor(A68_LBITS  A, A68_LBITS  B)
{ 
A68_LBITS  MRAAOSI;  /* clause result */
A_PROC_ENTRY(xor);
MRAAOSI = (A68_LBITS )((A68_LBITS )(A&~B)|(A68_LBITS )(~A&B));
A_PROC_EXIT(xor);
return( MRAAOSI );
} 
#undef NL

A68_INT  PRAAOSI_charinvec(A68_CHAR  C, A68_VC  S)
{ 
A68_INT  QRAAOSI_position;
A68_INT  RRAAOSI_i;
A68_INT  SRAAOSI;  /* to part of loop */
A68_BOOL  TRAAOSI;  /* clause result */
A68_BOOL  URAAOSI;  /* clause result */
A68_INT  VRAAOSI;  /* clause result */
A_PROC_ENTRY(charinvec);
 /* line 95: */
 /* line 96: */
{ 
QRAAOSI_position = 0;
 /* line 97: */
 /* line 98: */
SRAAOSI = S.upb;
for ( RRAAOSI_i = 1;
RRAAOSI_i <= SRAAOSI;
RRAAOSI_i += 1 )
{ 
 /* line 99: */
 /* line 100: */
if ( (C==A_VINDEX(S,RRAAOSI_i)) )
{ 
QRAAOSI_position = RRAAOSI_i;
 /* line 101: */
TRAAOSI = A68_FALSE;
} 
else
{ 
 /* line 102: */
 /* line 103: */
TRAAOSI = A68_TRUE;
} 
 /* line 105: */
URAAOSI = TRAAOSI;
if ( !URAAOSI ) break;
/*SKIP*/;
}
 /* line 106: */
 /* line 107: */
VRAAOSI = QRAAOSI_position;
} 
A_PROC_EXIT(charinvec);
return( VRAAOSI );
} 
#undef NL

A68_INT  YRAAOSI_truncate(A68_CHAR  C, A68_VC  S)
{ 
A68_INT  ZRAAOSI_i;
A68_INT  ASAAOSI;  /* by part of loop */
A68_INT  BSAAOSI;  /* loop control */
A68_INT  CSAAOSI;  /* clause result */
A_PROC_ENTRY(truncate);
 /* line 110: */
{ 
ZRAAOSI_i = S.upb;
ASAAOSI = (-1);
for ( BSAAOSI = ZRAAOSI_i;
( ASAAOSI > 0 && BSAAOSI <= 1) ||
( ASAAOSI < 0 && BSAAOSI >= 1) ||
( ASAAOSI == 0 ) ;
BSAAOSI += ASAAOSI )
{ 
if ( !((A_VINDEX(S,ZRAAOSI_i)==C)) ) break;
ZRAAOSI_i-=1;
}
CSAAOSI = ZRAAOSI_i;
} 
A_PROC_EXIT(truncate);
return( CSAAOSI );
} 
#undef NL

A68_VOID  FSAAOSI_scanto(A68_CHAR  C, A68_VC  S, A68_VC  *ReturnedValue)
{ 
A68_VC  GSAAOSI;  /* clause result */
A68_VC  HSAAOSI;  /* OPERATORS - trim index */
A_PROC_ENTRY(scanto);
 /* line 113: */
GSAAOSI = A_VTRIM(HSAAOSI,(S),A_VTSCRIPT(&(HSAAOSI.upb),(S).upb,1,YRAAOSI_truncate(C, S)));
A_PROC_EXIT(scanto);
*ReturnedValue = (GSAAOSI);
return;
} 
#undef NL

A68_VOID  KSAAOSI_before(A68_VC  S, A68_CHAR  C, A68_VC  *ReturnedValue)
{ 
A68_VC  LSAAOSI;  /* clause result */
A68_VC  MSAAOSI;  /* OPERATORS - trim index */
A_PROC_ENTRY(before);
 /* line 116: */
LSAAOSI = A_VTRIM(MSAAOSI,(S),A_VTSCRIPT(&(MSAAOSI.upb),(S).upb,1,YRAAOSI_truncate(C, S)));
A_PROC_EXIT(before);
*ReturnedValue = (LSAAOSI);
return;
} 
#undef NL

A68_VOID  PSAAOSI_before(A68_VC  S, A68_CHAR  C, A68_VC  *ReturnedValue)
{ 
A68_VC  QSAAOSI;  /* clause result */
A68_VC  RSAAOSI;  /* OPERATORS - trim index */
A_PROC_ENTRY(before);
 /* line 118: */
QSAAOSI = A_VTRIM(RSAAOSI,(S),A_VTSCRIPT(&(RSAAOSI.upb),(S).upb,1,YRAAOSI_truncate(C, S)));
A_PROC_EXIT(before);
*ReturnedValue = (QSAAOSI);
return;
} 
#undef NL

A68_VOID  TSAAOSI_uppercased(A68_VC  String, A68_VC  *ReturnedValue)
{ 
A68_46  VSAAOSI_generator;   /* proc value of non-global proc */
A68_VC  ATAAOSI;  /* avoid structure result */
A68_VC  BTAAOSI_uppercasedstring;
A68_CHAR * CTAAOSI_c;
A68_INT  DTAAOSI;  /* forall loop counter */
A68_VC  ETAAOSI;  /* clause result */
A_PROC_ENTRY(uppercased);
 /* line 127: */
 /* line 128: */
{ 
A_CLOSURE( VSAAOSI_generator, WSAAOSI_generator, XSAAOSI_generator );
(( XSAAOSI_generator * ) ( VSAAOSI_generator.nonlocals )) -> String = String;
A_CALLPROC(VSAAOSI_generator,(A68_FALSE, &ATAAOSI),(A68_FALSE, &ATAAOSI,(VSAAOSI_generator).nonlocals));
BTAAOSI_uppercasedstring = ATAAOSI;
A_VASSIGN2(String,BTAAOSI_uppercasedstring,A68_CHAR );
 /* line 129: */
 /* line 130: */
DTAAOSI = BTAAOSI_uppercasedstring.upb -1;
CTAAOSI_c = BTAAOSI_uppercasedstring.data;
for (;DTAAOSI-- >= 0;
(CTAAOSI_c++
) )
{
 /* line 131: */
 /* line 132: */
 /* line 133: */
if ( (((*CTAAOSI_c)>='a')&((*CTAAOSI_c)<='z')) )
{ 
 /* line 134: */
 /* line 135: */
(*CTAAOSI_c) = (A68_CHAR)((A68_INT)(unsigned char)(*CTAAOSI_c)-(A68_INT )040U);
} 
}
 /* line 136: */
 /* line 137: */
ETAAOSI = BTAAOSI_uppercasedstring;
} 
A_PROC_EXIT(uppercased);
*ReturnedValue = (ETAAOSI);
return;
} 
#undef NL

A68_VOID  GTAAOSI_capitalised(A68_VC  String, A68_VC  *ReturnedValue)
{ 
A68_46  ITAAOSI_generator;   /* proc value of non-global proc */
A68_VC  NTAAOSI;  /* avoid structure result */
A68_VC  OTAAOSI_capitalisedstring;
A68_INT  PTAAOSI;  /* YIELD */
A68_CHAR * QTAAOSI_c;
A68_BOOL  RTAAOSI;  /* clause result */
A68_VC  STAAOSI;  /* clause result */
A_PROC_ENTRY(capitalised);
 /* line 143: */
 /* line 144: */
{ 
A_CLOSURE( ITAAOSI_generator, JTAAOSI_generator, KTAAOSI_generator );
(( KTAAOSI_generator * ) ( ITAAOSI_generator.nonlocals )) -> String = String;
A_CALLPROC(ITAAOSI_generator,(A68_FALSE, &NTAAOSI),(A68_FALSE, &NTAAOSI,(ITAAOSI_generator).nonlocals));
OTAAOSI_capitalisedstring = NTAAOSI;
A_VASSIGN2(String,OTAAOSI_capitalisedstring,A68_CHAR );
 /* line 145: */
 /* line 146: */
{ 
PTAAOSI = 1 ;
QTAAOSI_c = (&A_VINDEX(OTAAOSI_capitalisedstring,PTAAOSI));
 /* line 147: */
 /* line 148: */
 /* line 149: */
RTAAOSI = (((*QTAAOSI_c)>='a')&((*QTAAOSI_c)<='z'));
if ( RTAAOSI )
{ 
 /* line 150: */
(*QTAAOSI_c) = (A68_CHAR)((A68_INT)(unsigned char)(*QTAAOSI_c)-(A68_INT )040U);
} 
} 
 /* line 151: */
 /* line 152: */
STAAOSI = OTAAOSI_capitalisedstring;
} 
A_PROC_EXIT(capitalised);
*ReturnedValue = (STAAOSI);
return;
} 
#undef NL

A68_INT  UTAAOSI_stringvalue(A68_VC  String)
{ 
union {  /* BIOP 99 */
A68_INT   source;
A68_57   destination;
} WTAAOSI; 
A68_57  VTAAOSI_value;
A68_VC  XTAAOSI;  /* OPERATORS - istruct -> vector */
A68_VC  YTAAOSI;  /* OPERATORS - trim index */
A68_VC  ZTAAOSI;  /* OPERATORS - trim index */
A68_VC  AUAAOSI;  /* YIELD */
A68_INT  BUAAOSI;  /* clause result */
union {  /* BIOP 99 */
A68_57   source;
A68_INT   destination;
} CUAAOSI; 
A_PROC_ENTRY(stringvalue);
 /* line 155: */
 /* line 156: */
{ 
WTAAOSI.source = 0 ;
VTAAOSI_value = (WTAAOSI.destination);
 /* line 157: */
YTAAOSI = A_ISVEC(XTAAOSI,(&VTAAOSI_value),4,A68_CHAR ) ;
AUAAOSI = A_VTRIM(ZTAAOSI,(YTAAOSI),A_VTSCRIPT(&(ZTAAOSI.upb),(YTAAOSI).upb,(5-String.upb),(YTAAOSI).upb)) ;
A_VASSIGN2(String,AUAAOSI,A68_CHAR );
 /* line 158: */
 /* line 159: */
CUAAOSI.source = VTAAOSI_value ;
BUAAOSI = (CUAAOSI.destination);
} 
A_PROC_EXIT(stringvalue);
return( BUAAOSI );
} 
#undef NL

A68_VOID  FUAAOSI_whole(A68_INT  Val, A68_INT  Width, A68_VC  *ReturnedValue)
{ 
A68_46  IUAAOSI_generator;   /* proc value of non-global proc */
A68_VC  OUAAOSI;  /* avoid structure result */
A68_VC  PUAAOSI_result;
A68_VC  SUAAOSI;  /* clause result */
union {  /* BIOP 99 */
A68_CHAR *  source;
A68_31 *  destination;
} TUAAOSI; 
A68_VC  UUAAOSI;  /* avoid structure result */
A_PROC_ENTRY(whole);
 /* line 165: */
 /* line 167: */
{ 
 /* line 168: */
 /* line 169: */
 /* line 170: */
 /* line 172: */
A_CLOSURE( IUAAOSI_generator, JUAAOSI_generator, KUAAOSI_generator );
(( KUAAOSI_generator * ) ( IUAAOSI_generator.nonlocals )) -> Width = Width;
A_CALLPROC(IUAAOSI_generator,(A68_FALSE, &OUAAOSI),(A68_FALSE, &OUAAOSI,(IUAAOSI_generator).nonlocals));
PUAAOSI_result = OUAAOSI;
 /* line 173: */
GUAAOSI_sprintf(PUAAOSI_result, RUAAOSI, Width, Val);
 /* line 174: */
 /* line 175: */
TUAAOSI.source = CEAAOSI_vctocharptr(PUAAOSI_result) ;
UDAAOSI_cstringtorvc( (TUAAOSI.destination), &UUAAOSI );
SUAAOSI = UUAAOSI;
} 
A_PROC_EXIT(whole);
*ReturnedValue = (SUAAOSI);
return;
} 
#undef NL

A68_VOID  XUAAOSI_lwhole(A68_LINT  Val, A68_INT  Width, A68_VC  *ReturnedValue)
{ 
A68_46  AVAAOSI_generator;   /* proc value of non-global proc */
A68_VC  GVAAOSI;  /* avoid structure result */
A68_VC  HVAAOSI_result;
A68_VC  KVAAOSI;  /* clause result */
union {  /* BIOP 99 */
A68_CHAR *  source;
A68_31 *  destination;
} LVAAOSI; 
A68_VC  MVAAOSI;  /* avoid structure result */
A_PROC_ENTRY(lwhole);
 /* line 178: */
 /* line 180: */
{ 
 /* line 181: */
 /* line 182: */
 /* line 183: */
 /* line 185: */
A_CLOSURE( AVAAOSI_generator, BVAAOSI_generator, CVAAOSI_generator );
(( CVAAOSI_generator * ) ( AVAAOSI_generator.nonlocals )) -> Width = Width;
A_CALLPROC(AVAAOSI_generator,(A68_FALSE, &GVAAOSI),(A68_FALSE, &GVAAOSI,(AVAAOSI_generator).nonlocals));
HVAAOSI_result = GVAAOSI;
 /* line 186: */
YUAAOSI_sprintf(HVAAOSI_result, JVAAOSI, Width, Val);
 /* line 187: */
 /* line 188: */
LVAAOSI.source = CEAAOSI_vctocharptr(HVAAOSI_result) ;
UDAAOSI_cstringtorvc( (LVAAOSI.destination), &MVAAOSI );
KVAAOSI = MVAAOSI;
} 
A_PROC_EXIT(lwhole);
*ReturnedValue = (KVAAOSI);
return;
} 
#undef NL

A68_VOID  PVAAOSI_hex(A68_LBITS  B, A68_INT  Width, A68_VC  *ReturnedValue)
{ 
A68_46  SVAAOSI_generator;   /* proc value of non-global proc */
A68_VC  YVAAOSI;  /* avoid structure result */
A68_VC  ZVAAOSI_result;
A68_VC  CWAAOSI;  /* clause result */
union {  /* BIOP 99 */
A68_CHAR *  source;
A68_31 *  destination;
} DWAAOSI; 
A68_VC  EWAAOSI;  /* avoid structure result */
A_PROC_ENTRY(hex);
 /* line 191: */
 /* line 193: */
{ 
 /* line 194: */
 /* line 195: */
 /* line 196: */
 /* line 198: */
A_CLOSURE( SVAAOSI_generator, TVAAOSI_generator, UVAAOSI_generator );
(( UVAAOSI_generator * ) ( SVAAOSI_generator.nonlocals )) -> Width = Width;
A_CALLPROC(SVAAOSI_generator,(A68_FALSE, &YVAAOSI),(A68_FALSE, &YVAAOSI,(SVAAOSI_generator).nonlocals));
ZVAAOSI_result = YVAAOSI;
 /* line 199: */
QVAAOSI_sprintf(ZVAAOSI_result, BWAAOSI, Width, B);
 /* line 201: */
 /* line 202: */
DWAAOSI.source = CEAAOSI_vctocharptr(ZVAAOSI_result) ;
UDAAOSI_cstringtorvc( (DWAAOSI.destination), &EWAAOSI );
CWAAOSI = EWAAOSI;
} 
A_PROC_EXIT(hex);
*ReturnedValue = (CWAAOSI);
return;
} 
#undef NL

A68_BOOL  HWAAOSI_vcdectoint(A68_INT * Ri, A68_VC  Num)
{ 
A68_INT  LWAAOSI_result;
A68_INT  MWAAOSI_sign;
A68_INT  NWAAOSI_i;
A68_INT  OWAAOSI_length;
A68_BOOL  PWAAOSI;  /* optbool result */
A68_CHAR  QWAAOSI_c;
A68_BOOL  RWAAOSI;  /* clause result */
A68_BOOL  SWAAOSI;  /* optbool result */
A68_CHAR  TWAAOSI_c;
A68_BOOL  UWAAOSI;  /* optbool result */
A68_CHAR  VWAAOSI_c;
A68_VC  WWAAOSI;  /* OPERATORS - trim index */
A68_VC  XWAAOSI;  /* forall yield */
A68_CHAR * YWAAOSI;  /* forall control - []x */
A68_INT  ZWAAOSI;  /* forall loop counter */
A68_BOOL  AXAAOSI;  /* clause result */
A_PROC_ENTRY(vcdectoint);
 /* line 213: */
 /* line 214: */
{ 
LWAAOSI_result = 0;
MWAAOSI_sign = 1;
 /* line 216: */
 /* line 217: */
 /* line 218: */
if ( (Num.upb==0) )
{ 
 /* line 219: */
 /* line 220: */
goto KWAAOSI_error;
} 
else
{ 
NWAAOSI_i = 1;
 /* line 221: */
OWAAOSI_length = Num.upb;
 /* line 224: */
for ( ;; )
{ 
PWAAOSI = (NWAAOSI_i<=OWAAOSI_length);
if ( PWAAOSI )
{PWAAOSI = (A_VINDEX(Num,NWAAOSI_i)==' ');
}
if ( !(PWAAOSI) ) break;
NWAAOSI_i+=1;
}
 /* line 225: */
if ( (NWAAOSI_i>OWAAOSI_length) )
{ 
goto KWAAOSI_error;
} 
 /* line 228: */
{ 
QWAAOSI_c = A_VINDEX(Num,NWAAOSI_i);
 /* line 229: */
RWAAOSI = (QWAAOSI_c=='-');
if ( RWAAOSI )
{ 
MWAAOSI_sign = (-1);
 /* line 230: */
NWAAOSI_i+=1;
} 
else
{ 
 /* line 231: */
if ( (QWAAOSI_c=='+') )
{ 
 /* line 232: */
NWAAOSI_i+=1;
} 
} 
} 
 /* line 233: */
if ( (NWAAOSI_i>OWAAOSI_length) )
{ 
goto KWAAOSI_error;
} 
 /* line 237: */
for ( ;; )
{ 
 /* line 238: */
SWAAOSI = (NWAAOSI_i<=OWAAOSI_length);
if ( SWAAOSI )
{ /* line 239: */
SWAAOSI = (A_VINDEX(Num,NWAAOSI_i)!=' ');
}
 /* line 240: */
if ( !(SWAAOSI) ) break;
TWAAOSI_c = A_VINDEX(Num,NWAAOSI_i);
 /* line 241: */
UWAAOSI = (TWAAOSI_c>='0');
if ( UWAAOSI )
{ /* line 242: */
UWAAOSI = (TWAAOSI_c<='9');
}
 /* line 243: */
if ( UWAAOSI )
{ 
LWAAOSI_result = (((10*LWAAOSI_result)+(A68_INT)(unsigned char)TWAAOSI_c)-(A68_INT)(unsigned char)'0');
 /* line 244: */
 /* line 245: */
NWAAOSI_i+=1;
} 
else
{ 
 /* line 246: */
 /* line 247: */
goto KWAAOSI_error;
} 
}
 /* line 250: */
XWAAOSI = A_VTRIM(WWAAOSI,(Num),A_VTSCRIPT(&(WWAAOSI.upb),(Num).upb,NWAAOSI_i,(Num).upb)) ;
ZWAAOSI = XWAAOSI.upb -1;
YWAAOSI = XWAAOSI.data;
for (;ZWAAOSI-- >= 0;
(YWAAOSI++
) )
{
VWAAOSI_c = *YWAAOSI;
if ( (VWAAOSI_c!=' ') )
{ 
goto KWAAOSI_error;
} 
}
 /* line 251: */
} 
 /* line 252: */
(*Ri) = (LWAAOSI_result*MWAAOSI_sign);
 /* line 253: */
 /* line 254: */
 /* line 255: */
AXAAOSI = A68_TRUE;
goto IWAAOSI;
KWAAOSI_error:
 /* line 256: */
 /* line 257: */
AXAAOSI = A68_FALSE;
IWAAOSI: ;
} 
A_PROC_EXIT(vcdectoint);
return( AXAAOSI );
} 
#undef NL

A68_BOOL  EXAAOSI_charinstring(A68_CHAR  C, A68_INT * I, A68_VC  S)
{ 
A68_BOOL  FXAAOSI_found;
A68_INT  GXAAOSI_k;
A68_INT  HXAAOSI;  /* to part of loop */
A68_BOOL  IXAAOSI;  /* clause result */
A_PROC_ENTRY(charinstring);
 /* line 260: */
 /* line 261: */
{ 
FXAAOSI_found = A68_FALSE;
(*I) = 0;
 /* line 262: */
 /* line 263: */
HXAAOSI = S.upb;
for ( GXAAOSI_k =  1;
GXAAOSI_k <= HXAAOSI;
GXAAOSI_k += 1 )
{ 
 /* line 264: */
if ( !(!FXAAOSI_found) ) break;
if ( (C==A_VINDEX(S,GXAAOSI_k)) )
{ 
(*I) = GXAAOSI_k;
FXAAOSI_found = A68_TRUE;
} 
}
 /* line 265: */
 /* line 266: */
IXAAOSI = FXAAOSI_found;
} 
A_PROC_EXIT(charinstring);
return( IXAAOSI );
} 
#undef NL

A68_VOID  KXAAOSI_xc(A68_INT  I, A68_VC  *ReturnedValue)
{ 
A68_VC  LXAAOSI;  /* clause result */
A68_VC  MXAAOSI;  /* avoid structure result */
A_PROC_ENTRY(xc);
FUAAOSI_whole( I, 0, &MXAAOSI );
LXAAOSI = MXAAOSI;
A_PROC_EXIT(xc);
*ReturnedValue = (LXAAOSI);
return;
} 
#undef NL
 /* line 1: */
 /* line 4: */
void WPAAOSI(void)   /* initialise DECS usefulops */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","./mfiles","-staredit","259","./a68files/usefulops.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/strops.m","./mfiles/cif.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
BAAAOSI();   /* USE strops */
JDAAOSI();   /* USE cif */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/osif/assoc/./a68files/usefulops.a68";
A_config.translation_time = "Tue Apr  4 09:24:31 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "VPAAOSI (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:24:31 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS usefulops);
UEAALIB_a68config(LGAALIB_configinfo, AQAAOSI);
 /* line 50: */
 /* line 52: */
 /* line 54: */
 /* line 56: */
 /* line 58: */
 /* line 60: */
 /* line 63: */
 /* line 77: */
 /* line 79: */
 /* line 80: */
 /* line 83: */
 /* line 84: */
 /* line 86: */
 /* line 87: */
 /* line 88: */
 /* line 90: */
 /* line 91: */
 /* line 109: */
 /* line 112: */
 /* line 115: */
 /* line 117: */
 /* line 123: */
 /* line 139: */
 /* line 154: */
 /* line 164: */
 /* line 177: */
 /* line 190: */
 /* line 208: */
 /* line 259: */
 /* line 269: */
 /* line 271: */
 /* line 273: */
 /* line 294: */
/*SKIP*/;
A_PROC_EXIT(DECS usefulops);
} 
#undef NL
/* end of translation of ./a68files/usefulops.a68 */
