
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
/* UNAME:OCBASIM */
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
struct A68t92{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t92  A68_92 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t94 ;

A_PROCEDURE(A68_VOID ,A68t93,(struct A68t94 ),(struct A68t94 ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(MODE94) VOID */
struct A68t94 { A68_INT mode; union {
A68_VC  mode1;
struct A68t32  mode2;
struct A68t54  mode3;
struct A68t53  mode4;
} data; };
typedef struct A68t94  A68_94 ;    /* UNION(REF MODE26,REF MODE32,REF MODE54,REF MODE53)  */

A_PROCEDURE(A68_INT ,A68t95,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t95  A68_95 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t96,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t96  A68_96 ;    /* PROC(BITS,BITS) BITS */
struct A68t98 ;

A_PROCEDURE(A68_VOID ,A68t97,(struct A68t98 ,A68_INT ),(struct A68t98 ,A68_INT ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(MODE98,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t98,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t98  A68_98 ;    /* PROC(CHAR) VOID */
struct A68t100 ;

A_PROCEDURE(A68_INT ,A68t99,(struct A68t100 ),(struct A68t100 ,void *));
typedef struct A68t99  A68_99 ;    /* PROC(MODE100) INT */

A_PROCEDURE(A68_CHAR ,A68t100,(void),(void *));
typedef struct A68t100  A68_100 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t101,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t101  A68_101 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_INT ,A68t102,(void),(void *));
typedef struct A68t102  A68_102 ;    /* PROC INT */

A_PROCEDURE(A68_INT ,A68t103,(A68_INT ),(A68_INT ,void *));
typedef struct A68t103  A68_103 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t104,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t105,(A68_VC *),(A68_VC *,void *));
typedef struct A68t105  A68_105 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_INT ,A68t106,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t106  A68_106 ;    /* PROC(INT,INT,REF BOOL) INT */
struct A68t108 ;

A_PROCEDURE(A68_BOOL ,A68t107,(A68_VC ,A68_INT *,struct A68t108 ),(A68_VC ,A68_INT *,struct A68t108 ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(MODE26,REF INT,MODE108) BOOL */
struct A68t109 ;

A_PROCEDURE(A68_VOID ,A68t108,(struct A68t109 ,struct A68t46 ),(struct A68t109 ,struct A68t46 ,void *));
typedef struct A68t108  A68_108 ;    /* PROC(MODE109,MODE46) VOID */
struct A68t109{
A68_INT  Number;
A_PAD_INT(PAD_20)
struct A68t110 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_21)
};
typedef struct A68t109  A68_109 ;    /* STRUCT(INT,REF MODE110,BITS)  */
A_VECTOR(struct A68t112 ,A68t111);
typedef struct A68t111  A68_111 ;    /* VECTOR [] MODE112 */
struct A68t112{
struct A68t109  Msgno;
A68_VC  Text;
};
typedef struct A68t112  A68_112 ;    /* STRUCT(MODE109,REF MODE26)  */
struct A68t110{
A68_VC  Name;
struct A68t111  Messages;
};
typedef struct A68t110  A68_110 ;    /* STRUCT(REF MODE26,REF MODE111)  */

A_PROCEDURE(A68_VOID ,A68t113,(void),(void *));
typedef struct A68t113  A68_113 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t114,(struct A68t113 ),(struct A68t113 ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(MODE113) VOID */

A_PROCEDURE(A68_VOID ,A68t115,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t115  A68_115 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t116,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t116  A68_116 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,53,A68t117);
typedef struct A68t117  A68_117 ;    /* STRUCT 53 CHAR */
struct A68t118{
A68_INT  Predecessors;
A_PAD_INT(PAD_22)
A68_INT  Truepredecessors;
A_PAD_INT(PAD_23)
A68_INT  Loop;
A_PAD_INT(PAD_24)
struct A68t32  Successors;
};
typedef struct A68t118  A68_118 ;    /* STRUCT(INT,INT,INT,REF MODE32)  */
A_VECTOR(struct A68t118 ,A68t119);
typedef struct A68t119  A68_119 ;    /* VECTOR [] MODE118 */

A_PROCEDURE(A68_VOID ,A68t120,(struct A68t119 ,struct A68t32 *),(struct A68t119 ,struct A68t32 *,void *));
typedef struct A68t120  A68_120 ;    /* PROC(REF MODE119) REF MODE32 */

A_PROCEDURE(A68_VOID ,A68t121,(A68_INT ),(A68_INT ,void *));
typedef struct A68t121  A68_121 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_INT ,A68t122,(struct A68t32 ),(struct A68t32 ,void *));
typedef struct A68t122  A68_122 ;    /* PROC(REF MODE32) INT */

A_PROCEDURE(A68_VOID ,A68t123,(struct A68t119 ,struct A68t121 ,struct A68t122 ),(struct A68t119 ,struct A68t121 ,struct A68t122 ,void *));
typedef struct A68t123  A68_123 ;    /* PROC(REF MODE119,MODE121,MODE122) VOID */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from basics --- */
extern A68_INT  AJDAOST_maxint;
/* --- End of imports from basics --- */


/* --- Imports from putstrings --- */
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void JSCAOST(void);   /* basics */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_117   SCBASIM = {"$Id: kesort.a68,v 34.2 1995/03/29 13:04:56 ella Exp $"}; 
A_GISVEC(A68_VC ,TCBASIM,SCBASIM,53)
A68_32  ZCBASIM_nosuccessors;
static A68_INT  ADBASIM_gone;
typedef struct   /* env of non-global proc */
{
A68_INT * QDBASIM_length;
} WDBASIM_generator;

A_STATIC A68_VOID  VCBASIM_generator(A68_BOOL  UCBASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_VOID  CDBASIM_findaloop(A68_119  Nodes, A68_32  *ReturnedValue);

A_STATIC A68_VOID  VDBASIM_generator(A68_BOOL  TDBASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A68_VOID  IEBASIM_topsort(A68_119  Nodes, A68_121  Putnode, A68_122  Breakloop);

A_STATIC A68_VOID  VDBASIM_generator(A68_BOOL  TDBASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((WDBASIM_generator *)NonLocals)->x)
{ 
A68_32  XDBASIM;  /* clause result */
A68_32  YDBASIM;  /* OPERATORS - dynamic generator */
{ 
YDBASIM.upb = (*NL(QDBASIM_length)) ;
( TDBASIM_anonymous? A_VLOC(A68_INT ,YDBASIM): A_VHEAP(A68_INT ,YDBASIM) );
XDBASIM = YDBASIM;
} 
*ReturnedValue = (XDBASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  VCBASIM_generator(A68_BOOL  UCBASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  WCBASIM;  /* clause result */
A68_32  XCBASIM;  /* OPERATORS - dynamic generator */
{ 
XCBASIM.upb = 0 ;
( UCBASIM_anonymous? A_VLOC(A68_INT ,XCBASIM): A_VHEAP(A68_INT ,XCBASIM) );
WCBASIM = XCBASIM;
} 
*ReturnedValue = (WCBASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  CDBASIM_findaloop(A68_119  Nodes, A68_32  *ReturnedValue)
{ 
A68_INT  DDBASIM_start;
A68_INT  EDBASIM_k;
A68_INT  FDBASIM;  /* to part of loop */
A68_INT * GDBASIM;  /* YIELD */
A68_INT  HDBASIM_k;
A68_INT  IDBASIM;  /* to part of loop */
A68_INT  JDBASIM_j;
A68_INT  KDBASIM;  /* to part of loop */
A68_32  LDBASIM;  /* OPERATORS - simple index */
A68_INT  MDBASIM;  /* YIELD */
A68_INT * NDBASIM;  /* YIELD */
A68_118 * ODBASIM_this;
A68_INT * PDBASIM;  /* YIELD */
A68_INT  QDBASIM_length;
A68_INT  RDBASIM_scan;
A68_BOOL  SDBASIM;  /* clause result */
A68_33  UDBASIM_generator;   /* proc value of non-global proc */
A68_32  ZDBASIM;  /* avoid structure result */
A68_32  AEBASIM_loop;
A68_INT  BEBASIM;  /* YIELD */
A68_INT * CEBASIM;  /* YIELD */
A68_BOOL  DEBASIM;  /* clause result */
A68_32  EEBASIM;  /* clause result */
A_PROC_ENTRY(findaloop);
 /* line 180: */
 /* line 181: */
{ 
DDBASIM_start = 0;
 /* line 183: */
FDBASIM = Nodes.upb;
for ( EDBASIM_k = 1;
EDBASIM_k <= FDBASIM;
EDBASIM_k += 1 )
{ 
 /* line 184: */
 /* line 185: */
GDBASIM = (&((&A_VINDEX(Nodes,EDBASIM_k))->Loop)) ;
(*GDBASIM) = 0;
}
 /* line 186: */
IDBASIM = Nodes.upb;
for ( HDBASIM_k = 1;
HDBASIM_k <= IDBASIM;
HDBASIM_k += 1 )
{ 
 /* line 187: */
 /* line 188: */
if ( ((*(&((&A_VINDEX(Nodes,HDBASIM_k))->Predecessors)))!=ADBASIM_gone) )
{ 
KDBASIM = (*(&((&A_VINDEX(Nodes,HDBASIM_k))->Successors))).upb;
for ( JDBASIM_j = 1;
JDBASIM_j <= KDBASIM;
JDBASIM_j += 1 )
{ 
 /* line 189: */
 /* line 190: */
LDBASIM = (*(&((&A_VINDEX(Nodes,HDBASIM_k))->Successors))) ;
MDBASIM = (*(&A_VINDEX(LDBASIM,JDBASIM_j))) ;
NDBASIM = (&((&A_VINDEX(Nodes,MDBASIM))->Loop)) ;
(*NDBASIM) = DDBASIM_start = HDBASIM_k;
}
 /* line 191: */
 /* line 192: */
} 
}
 /* line 201: */
for ( ;; )
{ 
 /* line 202: */
if ( !(((*(&((&A_VINDEX(Nodes,DDBASIM_start))->Loop)))>0)) ) break;
ODBASIM_this = (&A_VINDEX(Nodes,DDBASIM_start));
 /* line 203: */
DDBASIM_start = (*(&(ODBASIM_this->Loop)));
 /* line 204: */
 /* line 205: */
PDBASIM = (&(ODBASIM_this->Loop)) ;
(*PDBASIM) = (-(*(&(ODBASIM_this->Loop))));
}
 /* line 213: */
QDBASIM_length = 0;
 /* line 214: */
RDBASIM_scan = (-(*(&((&A_VINDEX(Nodes,DDBASIM_start))->Loop))));
 /* line 216: */
for ( ;; )
{ 
 /* line 217: */
QDBASIM_length+=1;
 /* line 218: */
 /* line 219: */
 /* line 220: */
SDBASIM = (RDBASIM_scan!=DDBASIM_start);
if ( !SDBASIM ) break;
 /* line 221: */
RDBASIM_scan = (-(*(&((&A_VINDEX(Nodes,RDBASIM_scan))->Loop))));
}
 /* line 228: */
A_CLOSURE( UDBASIM_generator, VDBASIM_generator, WDBASIM_generator );
(( WDBASIM_generator * ) ( UDBASIM_generator.nonlocals )) -> QDBASIM_length = (&QDBASIM_length);
A_CALLPROC(UDBASIM_generator,(A68_FALSE, &ZDBASIM),(A68_FALSE, &ZDBASIM,(UDBASIM_generator).nonlocals));
AEBASIM_loop = ZDBASIM;
 /* line 230: */
RDBASIM_scan = (-(*(&((&A_VINDEX(Nodes,DDBASIM_start))->Loop))));
 /* line 231: */
QDBASIM_length+=1;
 /* line 232: */
for ( ;; )
{ 
 /* line 233: */
BEBASIM = QDBASIM_length-=1 ;
CEBASIM = (&A_VINDEX(AEBASIM_loop,BEBASIM)) ;
(*CEBASIM) = RDBASIM_scan;
 /* line 234: */
 /* line 235: */
 /* line 236: */
DEBASIM = (RDBASIM_scan!=DDBASIM_start);
if ( !DEBASIM ) break;
 /* line 237: */
RDBASIM_scan = (-(*(&((&A_VINDEX(Nodes,RDBASIM_scan))->Loop))));
}
 /* line 239: */
 /* line 240: */
EEBASIM = AEBASIM_loop;
} 
A_PROC_EXIT(findaloop);
*ReturnedValue = (EEBASIM);
return;
} 
#undef NL
 /* line 278: */
 /* line 279: */

A68_VOID  IEBASIM_topsort(A68_119  Nodes, A68_121  Putnode, A68_122  Breakloop)
{ 
A68_INT  JEBASIM_n;
A68_INT  KEBASIM_first;
A68_INT  LEBASIM_k;
A68_INT  MEBASIM;  /* to part of loop */
A68_INT * NEBASIM;  /* YIELD */
A68_32  OEBASIM_succ;
A68_INT  PEBASIM_next;
A68_INT * QEBASIM;  /* YIELD */
A68_32  REBASIM;  /* avoid structure result */
A68_32  SEBASIM_loop;
A68_INT  TEBASIM_newnode;
A68_INT  UEBASIM;  /* YIELD */
A68_INT  VEBASIM;  /* YIELD */
A68_INT  WEBASIM;  /* YIELD */
A68_INT  XEBASIM;  /* YIELD */
A68_32 * YEBASIM;  /* YIELD */
A68_INT  ZEBASIM_i;
A68_INT  AFBASIM;  /* to part of loop */
A68_INT  BFBASIM_successor;
A68_INT * CFBASIM_predofsucc;
A68_BOOL  DFBASIM;  /* optbool result */
A_PROC_ENTRY(topsort);
 /* line 280: */
 /* line 281: */
{ 
JEBASIM_n = Nodes.upb;
 /* line 284: */
KEBASIM_first = 0;
 /* line 285: */
MEBASIM = JEBASIM_n;
for ( LEBASIM_k = 1;
LEBASIM_k <= MEBASIM;
LEBASIM_k += 1 )
{ 
 /* line 286: */
 /* line 287: */
if ( ((*(&((&A_VINDEX(Nodes,LEBASIM_k))->Predecessors)))==0) )
{ 
NEBASIM = (&((&A_VINDEX(Nodes,LEBASIM_k))->Predecessors)) ;
(*NEBASIM) = (-KEBASIM_first);
 /* line 288: */
 /* line 289: */
 /* line 290: */
KEBASIM_first = LEBASIM_k;
} 
}
 /* line 296: */
for ( ;; )
{ 
 /* line 297: */
if ( !((JEBASIM_n>0)) ) break;
 /* line 298: */
 /* line 301: */
if ( (KEBASIM_first!=0) )
{ 
A_CALLPROC(Putnode,(KEBASIM_first),(KEBASIM_first,(Putnode).nonlocals));
 /* line 302: */
OEBASIM_succ = (*(&((&A_VINDEX(Nodes,KEBASIM_first))->Successors)));
 /* line 303: */
PEBASIM_next = (-(*(&((&A_VINDEX(Nodes,KEBASIM_first))->Predecessors))));
 /* line 304: */
QEBASIM = (&((&A_VINDEX(Nodes,KEBASIM_first))->Predecessors)) ;
(*QEBASIM) = ADBASIM_gone;
 /* line 305: */
KEBASIM_first = PEBASIM_next;
 /* line 306: */
 /* line 307: */
 /* line 312: */
JEBASIM_n-=1;
} 
else
{ 
CDBASIM_findaloop( Nodes, &REBASIM );
SEBASIM_loop = REBASIM;
 /* line 320: */
TEBASIM_newnode = A_CALLPROC(Breakloop,(SEBASIM_loop),(SEBASIM_loop,(Breakloop).nonlocals));
 /* line 322: */
A_CALLPROC(Putnode,(TEBASIM_newnode),(TEBASIM_newnode,(Putnode).nonlocals));
 /* line 324: */
UEBASIM = 1 ;
VEBASIM = (*(&A_VINDEX(SEBASIM_loop,UEBASIM))) ;
OEBASIM_succ = (*(&((&A_VINDEX(Nodes,VEBASIM))->Successors)));
 /* line 325: */
 /* line 326: */
WEBASIM = 1 ;
XEBASIM = (*(&A_VINDEX(SEBASIM_loop,WEBASIM))) ;
YEBASIM = (&((&A_VINDEX(Nodes,XEBASIM))->Successors)) ;
(*YEBASIM) = ZCBASIM_nosuccessors;
} 
 /* line 331: */
AFBASIM = OEBASIM_succ.upb;
for ( ZEBASIM_i = 1;
ZEBASIM_i <= AFBASIM;
ZEBASIM_i += 1 )
{ 
 /* line 332: */
BFBASIM_successor = (*(&A_VINDEX(OEBASIM_succ,ZEBASIM_i)));
 /* line 333: */
CFBASIM_predofsucc = (&((&A_VINDEX(Nodes,BFBASIM_successor))->Predecessors));
 /* line 334: */
DFBASIM = ((*CFBASIM_predofsucc)>0);
if ( DFBASIM )
{DFBASIM = (((*CFBASIM_predofsucc)-=1)==0);
}
 /* line 337: */
if ( DFBASIM )
{ 
(*CFBASIM_predofsucc) = (-KEBASIM_first);
 /* line 338: */
 /* line 339: */
 /* line 340: */
KEBASIM_first = BFBASIM_successor;
} 
}
 /* line 342: */
}
 /* line 344: */
 /* line 347: */
} 
A_PROC_EXIT(topsort);
return;
} 
#undef NL
 /* line 1: */
 /* line 4: */
void PCBASIM(void)   /* initialise DECS kesort */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/kesort.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_32  YCBASIM;  /* avoid structure result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
JSCAOST();   /* USE basics */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/kesort.a68";
A_config.translation_time = "Tue Apr  4 11:05:47 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "OCBASIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:05:47 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS kesort);
UEAALIB_a68config(LGAALIB_configinfo, TCBASIM);
 /* line 154: */
 /* line 155: */
 /* line 157: */
VCBASIM_generator( A68_FALSE, &YCBASIM );
ZCBASIM_nosuccessors = YCBASIM;
 /* line 162: */
ADBASIM_gone = (-AJDAOST_maxint);
 /* line 179: */
 /* line 277: */
 /* line 349: */
A_PROC_EXIT(DECS kesort);
} 
#undef NL
/* end of translation of ./a68files/kesort.a68 */
