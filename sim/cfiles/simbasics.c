
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
/* UNAME:EQAASIM */
#include "Asupport.h"

A_PROCEDURE(A68_VOID ,A68t31,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t31  A68_31 ;    /* PROC(BOOL) MODE26 */
A_VECTOR(A68_INT ,A68t32);
typedef struct A68t32  A68_32 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t33,(A68_BOOL ,struct A68t32 *),(A68_BOOL ,struct A68t32 *,void *));
typedef struct A68t33  A68_33 ;    /* PROC(BOOL) MODE32 */
struct A68t35{
A68_INT  Status;
A_PAD_INT(PAD_1)
};
typedef struct A68t35  A68_35 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_VOID ,A68t36,(A68_VC ),(A68_VC ,void *));
typedef struct A68t36  A68_36 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t37,(A68_VC ,A68_INT *,struct A68t35 *),(A68_VC ,A68_INT *,struct A68t35 *,void *));
typedef struct A68t37  A68_37 ;    /* PROC(REF MODE26,REF INT) MODE35 */
struct A68t34{
A68_INT  Charnumber;
A_PAD_INT(PAD_2)
A68_INT  Linenumber;
A_PAD_INT(PAD_3)
A68_INT  Indent;
A_PAD_INT(PAD_4)
A68_INT  Width;
A_PAD_INT(PAD_5)
A68_INT  Sizeincr;
A_PAD_INT(PAD_6)
struct A68t35  Status;
A68_VC  Buffer;
A68_BOOL  Buffered;
A_PAD_BOOL(PAD_7)
A68_BOOL  Separate;
A_PAD_BOOL(PAD_8)
A68_BOOL  Input;
A_PAD_BOOL(PAD_9)
struct A68t36  Putbuffer;
struct A68t37  Getbuffer;
};
typedef struct A68t34  A68_34 ;    /* STRUCT(INT,INT,INT,INT,INT,MODE35,REF MODE26,BOOL,BOOL,BOOL,MODE36,MODE37)  */

A_PROCEDURE(A68_VOID ,A68t38,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t38  A68_38 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t39,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t39  A68_39 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t40,(A68_CHAR ,A68_VC *),(A68_CHAR ,A68_VC *,void *));
typedef struct A68t40  A68_40 ;    /* PROC(CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t41,(struct A68t32 ,struct A68t32 *),(struct A68t32 ,struct A68t32 *,void *));
typedef struct A68t41  A68_41 ;    /* PROC(MODE32) REF MODE32 */

A_PROCEDURE(A68_VOID ,A68t42,(A68_INT ,struct A68t32 *),(A68_INT ,struct A68t32 *,void *));
typedef struct A68t42  A68_42 ;    /* PROC(INT) REF MODE32 */

A_PROCEDURE(A68_VOID ,A68t43,(A68_VC ),(A68_VC ,void *));
typedef struct A68t43  A68_43 ;    /* PROC(REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t44,(struct A68t32 ),(struct A68t32 ,void *));
typedef struct A68t44  A68_44 ;    /* PROC(REF MODE32) VOID */
struct A68t46 ;

A_PROCEDURE(A68_VOID ,A68t45,(struct A68t46 ,A68_VC *),(struct A68t46 ,A68_VC *,void *));
typedef struct A68t45  A68_45 ;    /* PROC(MODE46) REF MODE26 */
A_VECTOR(A68_VC ,A68t46);
typedef struct A68t46  A68_46 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_VOID ,A68t47,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t47  A68_47 ;    /* PROC(MODE26,INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t48,(A68_CHAR ,A68_INT ,A68_VC *),(A68_CHAR ,A68_INT ,A68_VC *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(CHAR,INT) MODE26 */
struct A68t50 ;

A_PROCEDURE(A68_VOID ,A68t49,(struct A68t50 ,A68_VC *),(struct A68t50 ,A68_VC *,void *));
typedef struct A68t49  A68_49 ;    /* PROC(MODE50) MODE26 */
struct A68t50 { A68_INT mode; union {
A68_BITS  mode1;
A68_INT  mode2;
A68_SBITS  mode3;
A68_SINT  mode4;
A68_CHAR  mode5;
} data; };
typedef struct A68t50  A68_50 ;    /* UNION(BITS,INT,SHORT BITS,SHORT INT,CHAR)  */

A_PROCEDURE(A68_VOID ,A68t51,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t51  A68_51 ;    /* PROC(INT) MODE26 */
A_VECTOR(A68_BITS ,A68t53);
typedef struct A68t53  A68_53 ;    /* VECTOR [] BITS */
A_VECTOR(A68_BOOL ,A68t54);
typedef struct A68t54  A68_54 ;    /* VECTOR [] BOOL */
A_VECTOR(A68_REAL ,A68t55);
typedef struct A68t55  A68_55 ;    /* VECTOR [] REAL */

A_PROCEDURE(A68_VOID ,A68t56,(struct A68t34 *),(struct A68t34 *,void *));
typedef struct A68t56  A68_56 ;    /* PROC(REF MODE34) VOID */
struct A68t57{
A68_INT  Int;
A_PAD_INT(PAD_10)
A68_INT  Width;
A_PAD_INT(PAD_11)
};
typedef struct A68t57  A68_57 ;    /* STRUCT(INT,INT)  */
struct A68t58{
A68_VC  Str;
A68_INT  Width;
A_PAD_INT(PAD_12)
};
typedef struct A68t58  A68_58 ;    /* STRUCT(MODE26,INT)  */
struct A68t59{
A68_VC  Str;
A68_INT  Justify;
A_PAD_INT(PAD_13)
};
typedef struct A68t59  A68_59 ;    /* STRUCT(MODE26,INT)  */
struct A68t60{
A68_INT  Tab;
A_PAD_INT(PAD_14)
};
typedef struct A68t60  A68_60 ;    /* STRUCT(INT)  */
struct A68t61{
A68_INT  Pos;
A_PAD_INT(PAD_15)
};
typedef struct A68t61  A68_61 ;    /* STRUCT(INT)  */
struct A68t62{
A68_INT  After;
A_PAD_INT(PAD_16)
};
typedef struct A68t62  A68_62 ;    /* STRUCT(INT)  */
struct A68t63{
A68_INT  Spaces;
A_PAD_INT(PAD_17)
};
typedef struct A68t63  A68_63 ;    /* STRUCT(INT)  */
struct A68t64{
A68_INT  Lines;
A_PAD_INT(PAD_18)
};
typedef struct A68t64  A68_64 ;    /* STRUCT(INT)  */
struct A68t65{
A68_INT  Indent;
A_PAD_INT(PAD_19)
};
typedef struct A68t65  A68_65 ;    /* STRUCT(INT)  */
A_STRAIGHT(A68_VOID,A68t66);
typedef struct A68t66  A68_66 ;    /* STRAIGHT MODE52 */
struct A68t52 { A68_INT mode; union {
A68_INT  mode1;
struct A68t32  mode2;
A68_BITS  mode3;
struct A68t53  mode4;
A68_SBITS  mode5;
A68_CHAR  mode6;
A68_VC  mode7;
A68_BOOL  mode8;
struct A68t54  mode9;
A68_REAL  mode10;
struct A68t55  mode11;
struct A68t56  mode12;
struct A68t57  mode13;
struct A68t58  mode14;
struct A68t59  mode15;
struct A68t60  mode16;
struct A68t61  mode17;
struct A68t62  mode18;
struct A68t63  mode19;
struct A68t64  mode20;
struct A68t65  mode21;
struct A68t66  mode22;
} data; };
typedef struct A68t52  A68_52 ;    /* UNION(INT,MODE32,BITS,MODE53,SHORT BITS,CHAR,MODE26,BOOL,MODE54,REAL,MODE55,MODE56,MODE57,MODE58,MODE59,MODE60,MODE61,MODE62,MODE63,MODE64,MODE65,MODE66)  */

A_PROCEDURE(A68_VOID ,A68t67,(A68_BOOL ,struct A68t58 *),(A68_BOOL ,struct A68t58 *,void *));
typedef struct A68t67  A68_67 ;    /* PROC(BOOL) MODE58 */

A_PROCEDURE(A68_VOID ,A68t68,(A68_BOOL ,struct A68t59 *),(A68_BOOL ,struct A68t59 *,void *));
typedef struct A68t68  A68_68 ;    /* PROC(BOOL) MODE59 */

A_PROCEDURE(A68_INT ,A68t69,(struct A68t34 *),(struct A68t34 *,void *));
typedef struct A68t69  A68_69 ;    /* PROC(REF MODE34) INT */

A_PROCEDURE(A68_INT ,A68t70,(struct A68t34 *,A68_INT ),(struct A68t34 *,A68_INT ,void *));
typedef struct A68t70  A68_70 ;    /* PROC(REF MODE34,INT) INT */

A_PROCEDURE(A68_VOID ,A68t71,(A68_INT ,A68_INT ,struct A68t57 *),(A68_INT ,A68_INT ,struct A68t57 *,void *));
typedef struct A68t71  A68_71 ;    /* PROC(INT,INT) MODE57 */

A_PROCEDURE(A68_VOID ,A68t72,(A68_VC ,A68_INT ,struct A68t58 *),(A68_VC ,A68_INT ,struct A68t58 *,void *));
typedef struct A68t72  A68_72 ;    /* PROC(MODE26,INT) MODE58 */

A_PROCEDURE(A68_VOID ,A68t73,(A68_VC ,A68_INT ,struct A68t59 *),(A68_VC ,A68_INT ,struct A68t59 *,void *));
typedef struct A68t73  A68_73 ;    /* PROC(MODE26,INT) MODE59 */

A_PROCEDURE(A68_VOID ,A68t74,(A68_INT ,struct A68t60 *),(A68_INT ,struct A68t60 *,void *));
typedef struct A68t74  A68_74 ;    /* PROC(INT) MODE60 */

A_PROCEDURE(A68_VOID ,A68t75,(A68_INT ,struct A68t61 *),(A68_INT ,struct A68t61 *,void *));
typedef struct A68t75  A68_75 ;    /* PROC(INT) MODE61 */

A_PROCEDURE(A68_VOID ,A68t76,(A68_INT ,struct A68t62 *),(A68_INT ,struct A68t62 *,void *));
typedef struct A68t76  A68_76 ;    /* PROC(INT) MODE62 */

A_PROCEDURE(A68_VOID ,A68t77,(A68_INT ,struct A68t63 *),(A68_INT ,struct A68t63 *,void *));
typedef struct A68t77  A68_77 ;    /* PROC(INT) MODE63 */

A_PROCEDURE(A68_VOID ,A68t78,(A68_INT ,struct A68t64 *),(A68_INT ,struct A68t64 *,void *));
typedef struct A68t78  A68_78 ;    /* PROC(INT) MODE64 */

A_PROCEDURE(A68_VOID ,A68t79,(A68_INT ,struct A68t65 *),(A68_INT ,struct A68t65 *,void *));
typedef struct A68t79  A68_79 ;    /* PROC(INT) MODE65 */

A_PROCEDURE(A68_VOID ,A68t80,(struct A68t34 *,A68_VC ),(struct A68t34 *,A68_VC ,void *));
typedef struct A68t80  A68_80 ;    /* PROC(REF MODE34,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t81,(struct A68t34 *,A68_INT ,A68_INT ),(struct A68t34 *,A68_INT ,A68_INT ,void *));
typedef struct A68t81  A68_81 ;    /* PROC(REF MODE34,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t82,(struct A68t34 *,A68_BITS ,A68_INT ),(struct A68t34 *,A68_BITS ,A68_INT ,void *));
typedef struct A68t82  A68_82 ;    /* PROC(REF MODE34,BITS,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t83,(struct A68t34 *,A68_REAL ,A68_INT ,A68_INT ),(struct A68t34 *,A68_REAL ,A68_INT ,A68_INT ,void *));
typedef struct A68t83  A68_83 ;    /* PROC(REF MODE34,REAL,INT,INT) VOID */
struct A68t85 ;

A_PROCEDURE(A68_VOID ,A68t84,(struct A68t34 *,struct A68t85 ),(struct A68t34 *,struct A68t85 ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(REF MODE34,MODE85) VOID */
A_VECTOR(struct A68t52 ,A68t85);
typedef struct A68t85  A68_85 ;    /* VECTOR [] MODE52 */
struct A68t87 ;
struct A68t88 ;

A_PROCEDURE(struct A68t34 *,A68t86,(struct A68t87 ,struct A68t88 ),(struct A68t87 ,struct A68t88 ,void *));
typedef struct A68t86  A68_86 ;    /* PROC(MODE87,MODE88) REF MODE34 */
struct A68t87 { A68_INT mode; union {
A68_INT  mode1;
A68_VC  mode2;
} data; };
typedef struct A68t87  A68_87 ;    /* UNION(INT,REF MODE26)  */
struct A68t88 { A68_INT mode; union {
struct A68t36  mode1;
struct A68t37  mode2;
} data; };
typedef struct A68t88  A68_88 ;    /* UNION(MODE36,MODE37)  */

A_PROCEDURE(A68_VOID ,A68t89,(A68_VC ,struct A68t85 ,A68_VC *),(A68_VC ,struct A68t85 ,A68_VC *,void *));
typedef struct A68t89  A68_89 ;    /* PROC(REF MODE26,MODE85) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t90,(struct A68t34 *,A68_VC *),(struct A68t34 *,A68_VC *,void *));
typedef struct A68t90  A68_90 ;    /* PROC(REF MODE34) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t91,(struct A68t85 ,A68_VC *),(struct A68t85 ,A68_VC *,void *));
typedef struct A68t91  A68_91 ;    /* PROC(MODE85) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t92,(void),(void *));
typedef struct A68t92  A68_92 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t93,(struct A68t92 ),(struct A68t92 ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(MODE92) VOID */

A_PROCEDURE(A68_VOID ,A68t94,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t94  A68_94 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t95,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t95  A68_95 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,56,A68t96);
typedef struct A68t96  A68_96 ;    /* STRUCT 56 CHAR */

A_PROCEDURE(A68_INT ,A68t97,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_INT ,A68t98,(A68_INT ),(A68_INT ,void *));
typedef struct A68t98  A68_98 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t99,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t99  A68_99 ;    /* PROC(INT,INT) REF MODE26 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from putstrings --- */
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_96   IQAASIM = {"$Id: simbasics.a68,v 34.2 1995/03/29 13:04:58 ella Exp $"}; 
A_GISVEC(A68_VC ,JQAASIM,IQAASIM,56)
typedef struct   /* env of non-global proc */
{
A68_INT  ARAASIM_w;
A_PAD_INT(PAD_20)
} ERAASIM_generator;

A68_INT  MQAASIM_max(A68_INT  A, A68_INT  B);

A68_INT  QQAASIM_min(A68_INT  A, A68_INT  B);

A68_INT  TQAASIM_digits(A68_INT  N);

A68_VOID  ZQAASIM_whole(A68_INT  N, A68_INT  Width, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  DRAASIM_generator(A68_BOOL  BRAASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DRAASIM_generator(A68_BOOL  BRAASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ERAASIM_generator *)NonLocals)->x)
{ 
A68_VC  FRAASIM;  /* clause result */
A68_VC  GRAASIM;  /* OPERATORS - dynamic generator */
{ 
GRAASIM.upb = NL(ARAASIM_w) ;
( BRAASIM_anonymous? A_VLOC(A68_CHAR ,GRAASIM): A_VHEAP(A68_CHAR ,GRAASIM) );
FRAASIM = GRAASIM;
} 
*ReturnedValue = (FRAASIM);
return;
} 
#undef NL

A68_INT  MQAASIM_max(A68_INT  A, A68_INT  B)
{ 
A68_INT  NQAASIM;  /* clause result */
A_PROC_ENTRY(max);
if ( (A>B) )
{ 
NQAASIM = A;
} 
else
{ 
NQAASIM = B;
} 
A_PROC_EXIT(max);
return( NQAASIM );
} 
#undef NL

A68_INT  QQAASIM_min(A68_INT  A, A68_INT  B)
{ 
A68_INT  RQAASIM;  /* clause result */
A_PROC_ENTRY(min);
if ( (A<B) )
{ 
RQAASIM = A;
} 
else
{ 
RQAASIM = B;
} 
A_PROC_EXIT(min);
return( RQAASIM );
} 
#undef NL

A68_INT  TQAASIM_digits(A68_INT  N)
{ 
A68_INT  UQAASIM_width;
A68_INT  VQAASIM_nn;
A68_INT  WQAASIM;  /* clause result */
A_PROC_ENTRY(digits);
 /* line 57: */
 /* line 58: */
{ 
UQAASIM_width = 1;
 /* line 59: */
VQAASIM_nn = N;
 /* line 60: */
for ( ;; )
{ 
 /* line 62: */
if ( !(((VQAASIM_nn>=10)|(VQAASIM_nn<=(-10)))) ) break;
VQAASIM_nn = (VQAASIM_nn/10);
 /* line 63: */
 /* line 64: */
UQAASIM_width+=1;
}
 /* line 65: */
if ( (N<0) )
{ 
WQAASIM = (UQAASIM_width+1);
} 
else
{ 
 /* line 66: */
WQAASIM = UQAASIM_width;
} 
} 
A_PROC_EXIT(digits);
return( WQAASIM );
} 
#undef NL

A68_VOID  ZQAASIM_whole(A68_INT  N, A68_INT  Width, A68_VC  *ReturnedValue)
{ 
A68_INT  ARAASIM_w;
A68_31  CRAASIM_generator;   /* proc value of non-global proc */
A68_VC  HRAASIM;  /* avoid structure result */
A68_VC  IRAASIM_ans;
A68_INT  JRAASIM_sig;
A68_BOOL  KRAASIM;  /* optbool result */
A68_INT  LRAASIM_i;
A68_INT  MRAASIM;  /* to part of loop */
A68_CHAR * NRAASIM;  /* YIELD */
A68_INT  ORAASIM_i;
A68_INT  QRAASIM;  /* ADICOPS - MOD */
A68_INT  RRAASIM;  /* ADICOPS - MOD */
A68_INT  PRAASIM_r;
A68_INT  TRAASIM;  /* ADICOPS - ABS INT */
A68_INT  SRAASIM_q;
A68_INT  URAASIM;  /* ADICOPS - MOD */
A68_INT  VRAASIM;  /* ADICOPS - MOD */
A68_INT  WRAASIM;  /* ADICOPS - MOD */
A68_CHAR * XRAASIM;  /* YIELD */
A68_INT  YRAASIM;  /* ADICOPS - MOD */
A68_INT  ZRAASIM;  /* ADICOPS - MOD */
A68_INT  ASAASIM;  /* YIELD */
A68_CHAR * BSAASIM;  /* YIELD */
A68_INT  CSAASIM;  /* YIELD */
A68_CHAR * DSAASIM;  /* YIELD */
A68_INT  ESAASIM;  /* YIELD */
A68_CHAR * FSAASIM;  /* YIELD */
A68_INT  GSAASIM;  /* YIELD */
A68_CHAR * HSAASIM;  /* YIELD */
A68_VC  ISAASIM;  /* clause result */
A_PROC_ENTRY(whole);
 /* line 76: */
 /* line 77: */
{ 
ARAASIM_w = A_ABS(Width);
 /* line 78: */
A_CLOSURE( CRAASIM_generator, DRAASIM_generator, ERAASIM_generator );
(( ERAASIM_generator * ) ( CRAASIM_generator.nonlocals )) -> ARAASIM_w = ARAASIM_w;
A_CALLPROC(CRAASIM_generator,(A68_FALSE, &HRAASIM),(A68_FALSE, &HRAASIM,(CRAASIM_generator).nonlocals));
IRAASIM_ans = HRAASIM;
 /* line 79: */
JRAASIM_sig = TQAASIM_digits(N);
 /* line 80: */
KRAASIM = (Width>0);
if ( KRAASIM )
{KRAASIM = (N>=0);
}
if ( KRAASIM )
{ 
JRAASIM_sig+=1;
} 
 /* line 81: */
if ( (JRAASIM_sig>ARAASIM_w) )
{ 
MRAASIM = ARAASIM_w;
for ( LRAASIM_i = 1;
LRAASIM_i <= MRAASIM;
LRAASIM_i += 1 )
{ 
NRAASIM = (&A_VINDEX(IRAASIM_ans,LRAASIM_i)) ;
(*NRAASIM) = '*';
}
 /* line 82: */
 /* line 83: */
} 
else
{ 
ORAASIM_i = ARAASIM_w;
 /* line 84: */
RRAASIM = 10 ;
PRAASIM_r = A_MOD(N,RRAASIM,QRAASIM);
 /* line 85: */
TRAASIM = (N/10) ;
SRAASIM_q = A_ABS(TRAASIM);
 /* line 86: */
if ( (N<0) )
{ 
VRAASIM = (10-PRAASIM_r) ;
WRAASIM = 10 ;
PRAASIM_r = A_MOD(VRAASIM,WRAASIM,URAASIM);
} 
 /* line 87: */
XRAASIM = (&A_VINDEX(IRAASIM_ans,ORAASIM_i)) ;
(*XRAASIM) = (A68_CHAR)((A68_INT)(unsigned char)'0'+PRAASIM_r);
 /* line 88: */
for ( ;; )
{ 
 /* line 89: */
if ( !((SRAASIM_q!=0)) ) break;
ZRAASIM = 10 ;
PRAASIM_r = A_MOD(SRAASIM_q,ZRAASIM,YRAASIM);
 /* line 90: */
SRAASIM_q = (SRAASIM_q/10);
 /* line 91: */
 /* line 92: */
ASAASIM = ORAASIM_i-=1 ;
BSAASIM = (&A_VINDEX(IRAASIM_ans,ASAASIM)) ;
(*BSAASIM) = (A68_CHAR)((A68_INT)(unsigned char)'0'+PRAASIM_r);
}
 /* line 93: */
if ( (N<0) )
{ 
 /* line 94: */
CSAASIM = ORAASIM_i-=1 ;
DSAASIM = (&A_VINDEX(IRAASIM_ans,CSAASIM)) ;
(*DSAASIM) = '-';
} 
else
{ 
if ( (Width>0) )
{ 
 /* line 95: */
ESAASIM = ORAASIM_i-=1 ;
FSAASIM = (&A_VINDEX(IRAASIM_ans,ESAASIM)) ;
(*FSAASIM) = '+';
} 
} 
 /* line 96: */
for ( ;; )
{ 
if ( !((ORAASIM_i>1)) ) break;
GSAASIM = ORAASIM_i-=1 ;
HSAASIM = (&A_VINDEX(IRAASIM_ans,GSAASIM)) ;
(*HSAASIM) = ' ';
}
 /* line 97: */
} 
 /* line 98: */
 /* line 99: */
ISAASIM = IRAASIM_ans;
} 
A_PROC_EXIT(whole);
*ReturnedValue = (ISAASIM);
return;
} 
#undef NL
 /* line 1: */
 /* line 4: */
void FQAASIM(void)   /* initialise DECS simbasics */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/simbasics.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/simbasics.a68";
A_config.translation_time = "Tue Apr  4 11:05:41 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "EQAASIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:05:41 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS simbasics);
UEAALIB_a68config(LGAALIB_configinfo, JQAASIM);
 /* line 50: */
 /* line 53: */
 /* line 56: */
 /* line 75: */
 /* line 101: */
 /* line 103: */
 /* line 106: */
/*SKIP*/;
A_PROC_EXIT(DECS simbasics);
} 
#undef NL
/* end of translation of ./a68files/simbasics.a68 */
