
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
/* UNAME:VPDBSIM */
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

A_PROCEDURE(A68_VOID ,A68t47,(A68_BOOL ,struct A68t35 *),(A68_BOOL ,struct A68t35 *,void *));
typedef struct A68t47  A68_47 ;    /* PROC(BOOL) MODE35 */
struct A68t49{
A68_INT  Status;
A_PAD_INT(PAD_1)
};
typedef struct A68t49  A68_49 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_VOID ,A68t50,(A68_VC ),(A68_VC ,void *));
typedef struct A68t50  A68_50 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t51,(A68_VC ,A68_INT *,struct A68t49 *),(A68_VC ,A68_INT *,struct A68t49 *,void *));
typedef struct A68t51  A68_51 ;    /* PROC(REF MODE26,REF INT) MODE49 */
struct A68t48{
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
struct A68t49  Status;
A68_VC  Buffer;
A68_BOOL  Buffered;
A_PAD_BOOL(PAD_7)
A68_BOOL  Separate;
A_PAD_BOOL(PAD_8)
A68_BOOL  Input;
A_PAD_BOOL(PAD_9)
struct A68t50  Putbuffer;
struct A68t51  Getbuffer;
};
typedef struct A68t48  A68_48 ;    /* STRUCT(INT,INT,INT,INT,INT,MODE49,REF MODE26,BOOL,BOOL,BOOL,MODE50,MODE51)  */

A_PROCEDURE(A68_VOID ,A68t52,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t52  A68_52 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t53,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t53  A68_53 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t54,(A68_CHAR ,A68_VC *),(A68_CHAR ,A68_VC *,void *));
typedef struct A68t54  A68_54 ;    /* PROC(CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t55,(struct A68t35 ,struct A68t35 *),(struct A68t35 ,struct A68t35 *,void *));
typedef struct A68t55  A68_55 ;    /* PROC(MODE35) REF MODE35 */

A_PROCEDURE(A68_VOID ,A68t56,(A68_INT ,struct A68t35 *),(A68_INT ,struct A68t35 *,void *));
typedef struct A68t56  A68_56 ;    /* PROC(INT) REF MODE35 */

A_PROCEDURE(A68_VOID ,A68t57,(A68_VC ),(A68_VC ,void *));
typedef struct A68t57  A68_57 ;    /* PROC(REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t58,(struct A68t35 ),(struct A68t35 ,void *));
typedef struct A68t58  A68_58 ;    /* PROC(REF MODE35) VOID */
struct A68t60 ;

A_PROCEDURE(A68_VOID ,A68t59,(struct A68t60 ,A68_VC *),(struct A68t60 ,A68_VC *,void *));
typedef struct A68t59  A68_59 ;    /* PROC(MODE60) REF MODE26 */
A_VECTOR(A68_VC ,A68t60);
typedef struct A68t60  A68_60 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_VOID ,A68t61,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t61  A68_61 ;    /* PROC(MODE26,INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t62,(A68_CHAR ,A68_INT ,A68_VC *),(A68_CHAR ,A68_INT ,A68_VC *,void *));
typedef struct A68t62  A68_62 ;    /* PROC(CHAR,INT) MODE26 */
struct A68t64 ;

A_PROCEDURE(A68_VOID ,A68t63,(struct A68t64 ,A68_VC *),(struct A68t64 ,A68_VC *,void *));
typedef struct A68t63  A68_63 ;    /* PROC(MODE64) MODE26 */
struct A68t64 { A68_INT mode; union {
A68_BITS  mode1;
A68_INT  mode2;
A68_SBITS  mode3;
A68_SINT  mode4;
A68_CHAR  mode5;
} data; };
typedef struct A68t64  A68_64 ;    /* UNION(BITS,INT,SHORT BITS,SHORT INT,CHAR)  */

A_PROCEDURE(A68_VOID ,A68t65,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t65  A68_65 ;    /* PROC(INT) MODE26 */
A_VECTOR(A68_BITS ,A68t67);
typedef struct A68t67  A68_67 ;    /* VECTOR [] BITS */
A_VECTOR(A68_BOOL ,A68t68);
typedef struct A68t68  A68_68 ;    /* VECTOR [] BOOL */
A_VECTOR(A68_REAL ,A68t69);
typedef struct A68t69  A68_69 ;    /* VECTOR [] REAL */

A_PROCEDURE(A68_VOID ,A68t70,(struct A68t48 *),(struct A68t48 *,void *));
typedef struct A68t70  A68_70 ;    /* PROC(REF MODE48) VOID */
struct A68t71{
A68_INT  Int;
A_PAD_INT(PAD_10)
A68_INT  Width;
A_PAD_INT(PAD_11)
};
typedef struct A68t71  A68_71 ;    /* STRUCT(INT,INT)  */
struct A68t72{
A68_VC  Str;
A68_INT  Width;
A_PAD_INT(PAD_12)
};
typedef struct A68t72  A68_72 ;    /* STRUCT(MODE26,INT)  */
struct A68t73{
A68_VC  Str;
A68_INT  Justify;
A_PAD_INT(PAD_13)
};
typedef struct A68t73  A68_73 ;    /* STRUCT(MODE26,INT)  */
struct A68t74{
A68_INT  Tab;
A_PAD_INT(PAD_14)
};
typedef struct A68t74  A68_74 ;    /* STRUCT(INT)  */
struct A68t75{
A68_INT  Pos;
A_PAD_INT(PAD_15)
};
typedef struct A68t75  A68_75 ;    /* STRUCT(INT)  */
struct A68t76{
A68_INT  After;
A_PAD_INT(PAD_16)
};
typedef struct A68t76  A68_76 ;    /* STRUCT(INT)  */
struct A68t77{
A68_INT  Spaces;
A_PAD_INT(PAD_17)
};
typedef struct A68t77  A68_77 ;    /* STRUCT(INT)  */
struct A68t78{
A68_INT  Lines;
A_PAD_INT(PAD_18)
};
typedef struct A68t78  A68_78 ;    /* STRUCT(INT)  */
struct A68t79{
A68_INT  Indent;
A_PAD_INT(PAD_19)
};
typedef struct A68t79  A68_79 ;    /* STRUCT(INT)  */
A_STRAIGHT(A68_VOID,A68t80);
typedef struct A68t80  A68_80 ;    /* STRAIGHT MODE66 */
struct A68t66 { A68_INT mode; union {
A68_INT  mode1;
struct A68t35  mode2;
A68_BITS  mode3;
struct A68t67  mode4;
A68_SBITS  mode5;
A68_CHAR  mode6;
A68_VC  mode7;
A68_BOOL  mode8;
struct A68t68  mode9;
A68_REAL  mode10;
struct A68t69  mode11;
struct A68t70  mode12;
struct A68t71  mode13;
struct A68t72  mode14;
struct A68t73  mode15;
struct A68t74  mode16;
struct A68t75  mode17;
struct A68t76  mode18;
struct A68t77  mode19;
struct A68t78  mode20;
struct A68t79  mode21;
struct A68t80  mode22;
} data; };
typedef struct A68t66  A68_66 ;    /* UNION(INT,MODE35,BITS,MODE67,SHORT BITS,CHAR,MODE26,BOOL,MODE68,REAL,MODE69,MODE70,MODE71,MODE72,MODE73,MODE74,MODE75,MODE76,MODE77,MODE78,MODE79,MODE80)  */

A_PROCEDURE(A68_VOID ,A68t81,(A68_BOOL ,struct A68t72 *),(A68_BOOL ,struct A68t72 *,void *));
typedef struct A68t81  A68_81 ;    /* PROC(BOOL) MODE72 */

A_PROCEDURE(A68_VOID ,A68t82,(A68_BOOL ,struct A68t73 *),(A68_BOOL ,struct A68t73 *,void *));
typedef struct A68t82  A68_82 ;    /* PROC(BOOL) MODE73 */

A_PROCEDURE(A68_INT ,A68t83,(struct A68t48 *),(struct A68t48 *,void *));
typedef struct A68t83  A68_83 ;    /* PROC(REF MODE48) INT */

A_PROCEDURE(A68_INT ,A68t84,(struct A68t48 *,A68_INT ),(struct A68t48 *,A68_INT ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(REF MODE48,INT) INT */

A_PROCEDURE(A68_VOID ,A68t85,(A68_INT ,A68_INT ,struct A68t71 *),(A68_INT ,A68_INT ,struct A68t71 *,void *));
typedef struct A68t85  A68_85 ;    /* PROC(INT,INT) MODE71 */

A_PROCEDURE(A68_VOID ,A68t86,(A68_VC ,A68_INT ,struct A68t72 *),(A68_VC ,A68_INT ,struct A68t72 *,void *));
typedef struct A68t86  A68_86 ;    /* PROC(MODE26,INT) MODE72 */

A_PROCEDURE(A68_VOID ,A68t87,(A68_VC ,A68_INT ,struct A68t73 *),(A68_VC ,A68_INT ,struct A68t73 *,void *));
typedef struct A68t87  A68_87 ;    /* PROC(MODE26,INT) MODE73 */

A_PROCEDURE(A68_VOID ,A68t88,(A68_INT ,struct A68t74 *),(A68_INT ,struct A68t74 *,void *));
typedef struct A68t88  A68_88 ;    /* PROC(INT) MODE74 */

A_PROCEDURE(A68_VOID ,A68t89,(A68_INT ,struct A68t75 *),(A68_INT ,struct A68t75 *,void *));
typedef struct A68t89  A68_89 ;    /* PROC(INT) MODE75 */

A_PROCEDURE(A68_VOID ,A68t90,(A68_INT ,struct A68t76 *),(A68_INT ,struct A68t76 *,void *));
typedef struct A68t90  A68_90 ;    /* PROC(INT) MODE76 */

A_PROCEDURE(A68_VOID ,A68t91,(A68_INT ,struct A68t77 *),(A68_INT ,struct A68t77 *,void *));
typedef struct A68t91  A68_91 ;    /* PROC(INT) MODE77 */

A_PROCEDURE(A68_VOID ,A68t92,(A68_INT ,struct A68t78 *),(A68_INT ,struct A68t78 *,void *));
typedef struct A68t92  A68_92 ;    /* PROC(INT) MODE78 */

A_PROCEDURE(A68_VOID ,A68t93,(A68_INT ,struct A68t79 *),(A68_INT ,struct A68t79 *,void *));
typedef struct A68t93  A68_93 ;    /* PROC(INT) MODE79 */

A_PROCEDURE(A68_VOID ,A68t94,(struct A68t48 *,A68_VC ),(struct A68t48 *,A68_VC ,void *));
typedef struct A68t94  A68_94 ;    /* PROC(REF MODE48,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t95,(struct A68t48 *,A68_INT ,A68_INT ),(struct A68t48 *,A68_INT ,A68_INT ,void *));
typedef struct A68t95  A68_95 ;    /* PROC(REF MODE48,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t96,(struct A68t48 *,A68_BITS ,A68_INT ),(struct A68t48 *,A68_BITS ,A68_INT ,void *));
typedef struct A68t96  A68_96 ;    /* PROC(REF MODE48,BITS,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t97,(struct A68t48 *,A68_REAL ,A68_INT ,A68_INT ),(struct A68t48 *,A68_REAL ,A68_INT ,A68_INT ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(REF MODE48,REAL,INT,INT) VOID */
struct A68t99 ;

A_PROCEDURE(A68_VOID ,A68t98,(struct A68t48 *,struct A68t99 ),(struct A68t48 *,struct A68t99 ,void *));
typedef struct A68t98  A68_98 ;    /* PROC(REF MODE48,MODE99) VOID */
A_VECTOR(struct A68t66 ,A68t99);
typedef struct A68t99  A68_99 ;    /* VECTOR [] MODE66 */
struct A68t101 ;
struct A68t102 ;

A_PROCEDURE(struct A68t48 *,A68t100,(struct A68t101 ,struct A68t102 ),(struct A68t101 ,struct A68t102 ,void *));
typedef struct A68t100  A68_100 ;    /* PROC(MODE101,MODE102) REF MODE48 */
struct A68t101 { A68_INT mode; union {
A68_INT  mode1;
A68_VC  mode2;
} data; };
typedef struct A68t101  A68_101 ;    /* UNION(INT,REF MODE26)  */
struct A68t102 { A68_INT mode; union {
struct A68t50  mode1;
struct A68t51  mode2;
} data; };
typedef struct A68t102  A68_102 ;    /* UNION(MODE50,MODE51)  */

A_PROCEDURE(A68_VOID ,A68t103,(A68_VC ,struct A68t99 ,A68_VC *),(A68_VC ,struct A68t99 ,A68_VC *,void *));
typedef struct A68t103  A68_103 ;    /* PROC(REF MODE26,MODE99) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t104,(struct A68t48 *,A68_VC *),(struct A68t48 *,A68_VC *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(REF MODE48) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t105,(struct A68t99 ,A68_VC *),(struct A68t99 ,A68_VC *,void *));
typedef struct A68t105  A68_105 ;    /* PROC(MODE99) REF MODE26 */
struct A68t106{
A68_INT  Number;
A_PAD_INT(PAD_20)
struct A68t107 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_21)
};
typedef struct A68t106  A68_106 ;    /* STRUCT(INT,REF MODE107,BITS)  */
A_VECTOR(struct A68t109 ,A68t108);
typedef struct A68t108  A68_108 ;    /* VECTOR [] MODE109 */
struct A68t109{
struct A68t106  Msgno;
A68_VC  Text;
};
typedef struct A68t109  A68_109 ;    /* STRUCT(MODE106,REF MODE26)  */
struct A68t107{
A68_VC  Name;
struct A68t108  Messages;
};
typedef struct A68t107  A68_107 ;    /* STRUCT(REF MODE26,REF MODE108)  */

A_PROCEDURE(A68_VOID ,A68t110,(A68_BOOL ,struct A68t60 *),(A68_BOOL ,struct A68t60 *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(BOOL) MODE60 */

A_PROCEDURE(A68_VOID ,A68t111,(struct A68t106 ,struct A68t60 ),(struct A68t106 ,struct A68t60 ,void *));
typedef struct A68t111  A68_111 ;    /* PROC(MODE106,MODE60) VOID */
A_VECTOR(struct A68t114 ,A68t113);
typedef struct A68t113  A68_113 ;    /* VECTOR [] MODE114 */
struct A68t114{
A68_INT  Number;
A_PAD_INT(PAD_22)
A68_BITS  Class;
A_PAD_BITS(PAD_23)
A68_VC  Text;
};
typedef struct A68t114  A68_114 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t112{
A68_VC  Name;
struct A68t108  Messages;
A68_BOOL * Initialised;
struct A68t113  Setup;
};
typedef struct A68t112  A68_112 ;    /* STRUCT(MODE26,REF MODE108,REF BOOL,MODE113)  */

A_PROCEDURE(A68_VOID ,A68t115,(A68_BOOL ,struct A68t112 *),(A68_BOOL ,struct A68t112 *,void *));
typedef struct A68t115  A68_115 ;    /* PROC(BOOL) MODE112 */
A_VECTOR(A68_VC ,A68t116);
typedef struct A68t116  A68_116 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t117,(struct A68t60 ,struct A68t116 *),(struct A68t60 ,struct A68t116 *,void *));
typedef struct A68t117  A68_117 ;    /* PROC(MODE60) MODE116 */

A_PROCEDURE(A68_VOID ,A68t118,(struct A68t116 ,struct A68t60 *),(struct A68t116 ,struct A68t60 *,void *));
typedef struct A68t118  A68_118 ;    /* PROC(MODE116) MODE60 */
struct A68t120 ;

A_PROCEDURE(A68_BOOL ,A68t119,(struct A68t120 ),(struct A68t120 ,void *));
typedef struct A68t119  A68_119 ;    /* PROC(MODE120) BOOL */
struct A68t120 { A68_INT mode; union {
struct A68t106  mode1;
struct A68t109  mode2;
} data; };
typedef struct A68t120  A68_120 ;    /* UNION(MODE106,MODE109)  */

A_PROCEDURE(A68_INT ,A68t121,(struct A68t106 ),(struct A68t106 ,void *));
typedef struct A68t121  A68_121 ;    /* PROC(MODE106) INT */

A_PROCEDURE(A68_VOID ,A68t122,(A68_INT ,struct A68t112 ,struct A68t106 *),(A68_INT ,struct A68t112 ,struct A68t106 *,void *));
typedef struct A68t122  A68_122 ;    /* PROC(INT,MODE112) MODE106 */

A_PROCEDURE(A68_BOOL ,A68t123,(struct A68t106 ,struct A68t112 ),(struct A68t106 ,struct A68t112 ,void *));
typedef struct A68t123  A68_123 ;    /* PROC(MODE106,MODE112) BOOL */

A_PROCEDURE(A68_VOID ,A68t124,(struct A68t106 ,struct A68t60 ,struct A68t109 *),(struct A68t106 ,struct A68t60 ,struct A68t109 *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(MODE106,MODE60) MODE109 */
struct A68t125{
A68_INT  Svoid;
A_PAD_INT(PAD_24)
};
typedef struct A68t125  A68_125 ;    /* STRUCT(INT)  */
struct A68t126{
A68_INT  Snull;
A_PAD_INT(PAD_25)
};
typedef struct A68t126  A68_126 ;    /* STRUCT(INT)  */
struct A68t127{
A68_VC  Id;
A68_INT  Lwb;
A_PAD_INT(PAD_26)
A68_INT  Upb;
A_PAD_INT(PAD_27)
};
typedef struct A68t127  A68_127 ;    /* STRUCT(REF MODE26,INT,INT)  */
struct A68t128{
A68_VC  Id;
A68_VC  Char;
};
typedef struct A68t128  A68_128 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t129{
A68_INT  No;
A_PAD_INT(PAD_28)
struct A68t128  T;
};
typedef struct A68t129  A68_129 ;    /* STRUCT(INT,MODE128)  */
struct A68t131 { A68_INT mode; union {
struct A68t130 * mode1;
struct A68t127 * mode2;
struct A68t128 * mode3;
struct A68t132 * mode4;
struct A68t129 * mode5;
struct A68t133 * mode6;
struct A68t134 * mode7;
struct A68t125  mode8;
struct A68t126  mode9;
} data; };
typedef struct A68t131  A68_131 ;    /* UNION(REF MODE130,REF MODE127,REF MODE128,REF MODE132,REF MODE129,REF MODE133,REF MODE134,MODE125,MODE126)  */
struct A68t130{
A68_VC  Id;
struct A68t131  T;
struct A68t130 * Rest;
};
typedef struct A68t130  A68_130 ;    /* STRUCT(REF MODE26,MODE131,REF MODE130)  */
struct A68t132{
A68_INT  No;
A_PAD_INT(PAD_29)
struct A68t131  Type;
};
typedef struct A68t132  A68_132 ;    /* STRUCT(INT,MODE131)  */
struct A68t133{
struct A68t131  From;
struct A68t131  To;
};
typedef struct A68t133  A68_133 ;    /* STRUCT(MODE131,MODE131)  */
struct A68t134{
struct A68t131  T;
struct A68t134 * Rest;
};
typedef struct A68t134  A68_134 ;    /* STRUCT(MODE131,REF MODE134)  */
struct A68t135 { A68_INT mode; union {
struct A68t130 * mode1;
struct A68t127 * mode2;
struct A68t128 * mode3;
} data; };
typedef struct A68t135  A68_135 ;    /* UNION(REF MODE130,REF MODE127,REF MODE128)  */
struct A68t136{
A68_INT  Svvoid;
A_PAD_INT(PAD_30)
};
typedef struct A68t136  A68_136 ;    /* STRUCT(INT)  */
struct A68t137{
A68_INT  Svnull;
A_PAD_INT(PAD_31)
};
typedef struct A68t137  A68_137 ;    /* STRUCT(INT)  */
struct A68t138{
struct A68t131  Type;
};
typedef struct A68t138  A68_138 ;    /* STRUCT(MODE131)  */
struct A68t139{
struct A68t127 * Type;
A68_INT  Value;
A_PAD_INT(PAD_32)
};
typedef struct A68t139  A68_139 ;    /* STRUCT(REF MODE127,INT)  */
struct A68t140{
struct A68t128 * Type;
A68_CHAR  Value;
A_PAD_CHAR(PAD_33)
};
typedef struct A68t140  A68_140 ;    /* STRUCT(REF MODE128,CHAR)  */
struct A68t141{
struct A68t129 * Type;
A68_VC  Value;
};
typedef struct A68t141  A68_141 ;    /* STRUCT(REF MODE129,REF MODE26)  */
struct A68t143 { A68_INT mode; union {
struct A68t138 * mode1;
struct A68t139 * mode2;
struct A68t140 * mode3;
struct A68t141 * mode4;
struct A68t142 * mode5;
struct A68t144 * mode6;
struct A68t145 * mode7;
struct A68t136  mode8;
struct A68t137  mode9;
} data; };
typedef struct A68t143  A68_143 ;    /* UNION(REF MODE138,REF MODE139,REF MODE140,REF MODE141,REF MODE142,REF MODE144,REF MODE145,MODE136,MODE137)  */
struct A68t142{
struct A68t130 * Type;
A68_INT  Tag;
A_PAD_INT(PAD_34)
struct A68t143  Assoc;
};
typedef struct A68t142  A68_142 ;    /* STRUCT(REF MODE130,INT,MODE143)  */
struct A68t144{
struct A68t143  Head;
struct A68t144 * Tail;
};
typedef struct A68t144  A68_144 ;    /* STRUCT(MODE143,REF MODE144)  */
struct A68t145{
struct A68t143  From;
struct A68t143  To;
};
typedef struct A68t145  A68_145 ;    /* STRUCT(MODE143,MODE143)  */
struct A68t146{
A68_INT  Instoffset;
A_PAD_INT(PAD_35)
A68_INT  Offset;
A_PAD_INT(PAD_36)
A68_INT  Size;
A_PAD_INT(PAD_37)
};
typedef struct A68t146  A68_146 ;    /* STRUCT(INT,INT,INT)  */
A_VECTOR(struct A68t146 ,A68t148);
typedef struct A68t148  A68_148 ;    /* VECTOR [] MODE146 */
struct A68t147{
struct A68t131  Type;
struct A68t148  Blocks;
};
typedef struct A68t147  A68_147 ;    /* STRUCT(MODE131,REF MODE148)  */
struct A68t149{
struct A68t147  Firstcell;
A68_INT  Lwb;
A_PAD_INT(PAD_38)
A68_INT  Ramsize;
A_PAD_INT(PAD_39)
A68_INT  Step;
A_PAD_INT(PAD_40)
};
typedef struct A68t149  A68_149 ;    /* STRUCT(MODE147,INT,INT,INT)  */
struct A68t150{
A68_VC  Uname;
A68_VC  Lname;
A68_INT  Node;
A_PAD_INT(PAD_41)
};
typedef struct A68t150  A68_150 ;    /* STRUCT(REF MODE26,REF MODE26,INT)  */
A_VECTOR(struct A68t150 ,A68t152);
typedef struct A68t152  A68_152 ;    /* VECTOR [] MODE150 */
struct A68t151{
struct A68t149 * Ram;
struct A68t147  Outputs;
A68_INT  Noinputs;
A_PAD_INT(PAD_42)
struct A68t152  Body;
};
typedef struct A68t151  A68_151 ;    /* STRUCT(REF MODE149,MODE147,INT,REF MODE152)  */
struct A68t153{
A68_INT  Fn;
A_PAD_INT(PAD_43)
A68_INT  Instance;
A_PAD_INT(PAD_44)
};
typedef struct A68t153  A68_153 ;    /* STRUCT(INT,INT)  */
struct A68t154{
struct A68t147 * Wire;
A68_INT  Instance;
A_PAD_INT(PAD_45)
};
typedef struct A68t154  A68_154 ;    /* STRUCT(REF MODE147,INT)  */
struct A68t155 { A68_INT mode; union {
struct A68t153  mode1;
struct A68t154  mode2;
} data; };
typedef struct A68t155  A68_155 ;    /* UNION(MODE153,MODE154)  */
struct A68t156 { A68_INT mode; union {
struct A68t153  mode1;
struct A68t147  mode2;
} data; };
typedef struct A68t156  A68_156 ;    /* UNION(MODE153,MODE147)  */
struct A68t157{
struct A68t155  Node;
A68_INT  Circuit;
A_PAD_INT(PAD_46)
A68_INT  Base;
A_PAD_INT(PAD_47)
};
typedef struct A68t157  A68_157 ;    /* STRUCT(MODE155,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t158,(struct A68t143 ,struct A68t131 *),(struct A68t143 ,struct A68t131 *,void *));
typedef struct A68t158  A68_158 ;    /* PROC(MODE143) MODE131 */

A_PROCEDURE(A68_BOOL ,A68t159,(struct A68t131 ,struct A68t131 ),(struct A68t131 ,struct A68t131 ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(MODE131,MODE131) BOOL */

A_PROCEDURE(A68_BOOL ,A68t160,(struct A68t143 ,struct A68t143 ),(struct A68t143 ,struct A68t143 ,void *));
typedef struct A68t160  A68_160 ;    /* PROC(MODE143,MODE143) BOOL */

A_PROCEDURE(A68_BOOL ,A68t161,(struct A68t147 ,struct A68t147 ),(struct A68t147 ,struct A68t147 ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(MODE147,MODE147) BOOL */

A_PROCEDURE(A68_BOOL ,A68t162,(struct A68t153 ,struct A68t153 ),(struct A68t153 ,struct A68t153 ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(MODE153,MODE153) BOOL */

A_PROCEDURE(A68_BOOL ,A68t163,(struct A68t154 ,struct A68t154 ),(struct A68t154 ,struct A68t154 ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(MODE154,MODE154) BOOL */

A_PROCEDURE(A68_BOOL ,A68t164,(struct A68t155 ,struct A68t155 ),(struct A68t155 ,struct A68t155 ,void *));
typedef struct A68t164  A68_164 ;    /* PROC(MODE155,MODE155) BOOL */

A_PROCEDURE(A68_BOOL ,A68t165,(struct A68t157 ,struct A68t157 ),(struct A68t157 ,struct A68t157 ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(MODE157,MODE157) BOOL */

A_PROCEDURE(struct A68t134 *,A68t166,(struct A68t134 *,struct A68t134 *),(struct A68t134 *,struct A68t134 *,void *));
typedef struct A68t166  A68_166 ;    /* PROC(REF MODE134,REF MODE134) REF MODE134 */

A_PROCEDURE(A68_VOID ,A68t167,(struct A68t148 ,struct A68t148 ,struct A68t148 *),(struct A68t148 ,struct A68t148 ,struct A68t148 *,void *));
typedef struct A68t167  A68_167 ;    /* PROC(REF MODE148,REF MODE148) REF MODE148 */

A_PROCEDURE(A68_VOID ,A68t168,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(INT,REF MODE26) VOID */

A_PROCEDURE(A68_INT ,A68t169,(A68_VC ),(A68_VC ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(REF MODE26) INT */

A_PROCEDURE(A68_INT ,A68t170,(struct A68t131 ),(struct A68t131 ,void *));
typedef struct A68t170  A68_170 ;    /* PROC(MODE131) INT */

A_PROCEDURE(struct A68t134 *,A68t171,(struct A68t131 ,A68_INT ,A68_INT ),(struct A68t131 ,A68_INT ,A68_INT ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(MODE131,INT,INT) REF MODE134 */

A_PROCEDURE(A68_VOID ,A68t172,(struct A68t147 ,A68_INT ,A68_INT ,struct A68t147 *),(struct A68t147 ,A68_INT ,A68_INT ,struct A68t147 *,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE147,INT,INT) MODE147 */

A_PROCEDURE(A68_VOID ,A68t173,(struct A68t149 *,A68_INT ,A68_INT ,struct A68t147 *),(struct A68t149 *,A68_INT ,A68_INT ,struct A68t147 *,void *));
typedef struct A68t173  A68_173 ;    /* PROC(REF MODE149,INT,INT) MODE147 */

A_PROCEDURE(A68_VC *,A68t174,(struct A68t143 ,struct A68t131 ),(struct A68t143 ,struct A68t131 ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE143,MODE131) REF REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t175,(A68_VC ,struct A68t131 ,struct A68t143 *),(A68_VC ,struct A68t131 ,struct A68t143 *,void *));
typedef struct A68t175  A68_175 ;    /* PROC(REF MODE26,MODE131) MODE143 */

A_PROCEDURE(A68_INT ,A68t176,(struct A68t157 ),(struct A68t157 ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(MODE157) INT */

A_PROCEDURE(A68_VOID ,A68t177,(struct A68t157 ,A68_INT ),(struct A68t157 ,A68_INT ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(MODE157,INT) VOID */

A_PROCEDURE(A68_INT ,A68t178,(A68_INT ),(A68_INT ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t179,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(INT,INT) VOID */
struct A68t181 ;

A_PROCEDURE(A68_VOID ,A68t180,(struct A68t181 *,A68_INT ,struct A68t57 ,struct A68t50 ,struct A68t155 *),(struct A68t181 *,A68_INT ,struct A68t57 ,struct A68t50 ,struct A68t155 *,void *));
typedef struct A68t180  A68_180 ;    /* PROC(REF MODE181,INT,MODE57,MODE50) MODE155 */
struct A68t181{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(REF MODE26,REF BITS)  */

A_PROCEDURE(A68_VOID ,A68t182,(A68_VC ,struct A68t50 ,struct A68t155 *),(A68_VC ,struct A68t50 ,struct A68t155 *,void *));
typedef struct A68t182  A68_182 ;    /* PROC(REF MODE26,MODE50) MODE155 */

A_PROCEDURE(A68_VOID ,A68t183,(A68_INT *,A68_BOOL *,struct A68t50 ),(A68_INT *,A68_BOOL *,struct A68t50 ,void *));
typedef struct A68t183  A68_183 ;    /* PROC(REF INT,REF BOOL,MODE50) VOID */

A_PROCEDURE(A68_VOID ,A68t184,(struct A68t157 ,A68_VC ),(struct A68t157 ,A68_VC ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(MODE157,REF MODE26) VOID */
struct A68t186 ;

A_PROCEDURE(A68_VOID ,A68t185,(A68_INT *,A68_VC *,struct A68t186 ,struct A68t186 ,struct A68t50 ),(A68_INT *,A68_VC *,struct A68t186 ,struct A68t186 ,struct A68t50 ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(REF INT,REF REF MODE26,MODE186,MODE186,MODE50) VOID */

A_PROCEDURE(A68_VOID ,A68t186,(A68_VC ,struct A68t50 ),(A68_VC ,struct A68t50 ,void *));
typedef struct A68t186  A68_186 ;    /* PROC(REF MODE26,MODE50) VOID */

A_PROCEDURE(A68_VOID ,A68t187,(A68_INT ,A68_INT ,A68_VC ,struct A68t186 ,struct A68t186 ,struct A68t57 ,struct A68t50 ,struct A68t155 *),(A68_INT ,A68_INT ,A68_VC ,struct A68t186 ,struct A68t186 ,struct A68t57 ,struct A68t50 ,struct A68t155 *,void *));
typedef struct A68t187  A68_187 ;    /* PROC(INT,INT,REF MODE26,MODE186,MODE186,MODE57,MODE50) MODE155 */

A_PROCEDURE(A68_VOID ,A68t188,(struct A68t50 ),(struct A68t50 ,void *));
typedef struct A68t188  A68_188 ;    /* PROC(MODE50) VOID */

A_PROCEDURE(A68_VOID ,A68t189,(A68_VC ,struct A68t50 ,struct A68t157 *),(A68_VC ,struct A68t50 ,struct A68t157 *,void *));
typedef struct A68t189  A68_189 ;    /* PROC(REF MODE26,MODE50) MODE157 */

A_PROCEDURE(A68_VOID ,A68t190,(struct A68t157 ),(struct A68t157 ,void *));
typedef struct A68t190  A68_190 ;    /* PROC(MODE157) VOID */

A_PROCEDURE(A68_VOID ,A68t191,(struct A68t157 ,struct A68t157 *),(struct A68t157 ,struct A68t157 *,void *));
typedef struct A68t191  A68_191 ;    /* PROC(MODE157) MODE157 */

A_PROCEDURE(A68_VOID ,A68t192,(struct A68t157 ,struct A68t157 ),(struct A68t157 ,struct A68t157 ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(MODE157,MODE157) VOID */

A_PROCEDURE(A68_BOOL ,A68t193,(struct A68t157 ),(struct A68t157 ,void *));
typedef struct A68t193  A68_193 ;    /* PROC(MODE157) BOOL */

A_PROCEDURE(A68_VOID ,A68t194,(A68_INT ,struct A68t151 *),(A68_INT ,struct A68t151 *,void *));
typedef struct A68t194  A68_194 ;    /* PROC(INT) MODE151 */

A_PROCEDURE(A68_VOID ,A68t195,(A68_INT ,struct A68t156 *),(A68_INT ,struct A68t156 *,void *));
typedef struct A68t195  A68_195 ;    /* PROC(INT) MODE156 */

A_PROCEDURE(A68_VOID ,A68t196,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t196  A68_196 ;    /* PROC(INT) REF MODE26 */
struct A68t198 ;

A_PROCEDURE(A68_VOID ,A68t197,(struct A68t198 ),(struct A68t198 ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(MODE198) VOID */

A_PROCEDURE(A68_BOOL ,A68t198,(A68_VC ),(A68_VC ,void *));
typedef struct A68t198  A68_198 ;    /* PROC(REF MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t199,(struct A68t151 ,struct A68t147 *),(struct A68t151 ,struct A68t147 *,void *));
typedef struct A68t199  A68_199 ;    /* PROC(MODE151) MODE147 */

A_PROCEDURE(A68_VOID ,A68t200,(A68_INT ,struct A68t147 *),(A68_INT ,struct A68t147 *,void *));
typedef struct A68t200  A68_200 ;    /* PROC(INT) MODE147 */

A_PROCEDURE(struct A68t134 *,A68t201,(struct A68t131 ),(struct A68t131 ,void *));
typedef struct A68t201  A68_201 ;    /* PROC(MODE131) REF MODE134 */

A_PROCEDURE(A68_INT ,A68t202,(struct A68t131 ,struct A68t170 ),(struct A68t131 ,struct A68t170 ,void *));
typedef struct A68t202  A68_202 ;    /* PROC(MODE131,MODE170) INT */

A_PROCEDURE(A68_VOID ,A68t203,(A68_INT ,struct A68t131 *),(A68_INT ,struct A68t131 *,void *));
typedef struct A68t203  A68_203 ;    /* PROC(INT) MODE131 */
struct A68t205 ;
struct A68t206 ;

A_PROCEDURE(A68_INT ,A68t204,(A68_VC ,A68_INT ,A68_INT ,A68_INT ,struct A68t147 ,struct A68t147 ,struct A68t149 *,struct A68t205 ,struct A68t206 ),(A68_VC ,A68_INT ,A68_INT ,A68_INT ,struct A68t147 ,struct A68t147 ,struct A68t149 *,struct A68t205 ,struct A68t206 ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(REF MODE26,INT,INT,INT,MODE147,MODE147,REF MODE149,MODE205,MODE206) INT */
struct A68t205{
A68_INT  Size;
A_PAD_INT(PAD_48)
A68_INT  Offset;
A_PAD_INT(PAD_49)
A68_BITS  Sort;
A_PAD_BITS(PAD_50)
};
typedef struct A68t205  A68_205 ;    /* STRUCT(INT,INT,BITS)  */
struct A68t206{
A68_INT  Workspace;
A_PAD_INT(PAD_51)
A68_INT  History;
A_PAD_INT(PAD_52)
A68_INT  Declid;
A_PAD_INT(PAD_53)
};
typedef struct A68t206  A68_206 ;    /* STRUCT(INT,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t207,(A68_INT ,A68_VC ,A68_VC ,struct A68t156 ),(A68_INT ,A68_VC ,A68_VC ,struct A68t156 ,void *));
typedef struct A68t207  A68_207 ;    /* PROC(INT,REF MODE26,REF MODE26,MODE156) VOID */

A_PROCEDURE(A68_INT ,A68t208,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t208  A68_208 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_VOID ,A68t209,(A68_INT ,struct A68t35 ),(A68_INT ,struct A68t35 ,void *));
typedef struct A68t209  A68_209 ;    /* PROC(INT,REF MODE35) VOID */

A_PROCEDURE(A68_VOID ,A68t210,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t210  A68_210 ;    /* PROC(INT,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t211,(A68_INT ,struct A68t205 ),(A68_INT ,struct A68t205 ,void *));
typedef struct A68t211  A68_211 ;    /* PROC(INT,MODE205) VOID */

A_PROCEDURE(A68_VOID ,A68t212,(A68_INT ,struct A68t148 ,struct A68t148 ),(A68_INT ,struct A68t148 ,struct A68t148 ,void *));
typedef struct A68t212  A68_212 ;    /* PROC(INT,REF MODE148,REF MODE148) VOID */

A_PROCEDURE(A68_VOID ,A68t213,(A68_VC ,A68_INT ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t213  A68_213 ;    /* PROC(REF MODE26,INT,INT) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t214,(A68_VC ,A68_INT ,A68_INT ),(A68_VC ,A68_INT ,A68_INT ,void *));
typedef struct A68t214  A68_214 ;    /* PROC(REF MODE26,INT,INT) INT */
struct A68t216 ;

A_PROCEDURE(A68_VOID ,A68t215,(A68_INT ,A68_INT ,struct A68t216 *),(A68_INT ,A68_INT ,struct A68t216 *,void *));
typedef struct A68t215  A68_215 ;    /* PROC(INT,INT) MODE216 */
struct A68t216{
A68_INT  Lwb;
A_PAD_INT(PAD_54)
A68_INT  Upb;
A_PAD_INT(PAD_55)
};
typedef struct A68t216  A68_216 ;    /* STRUCT(INT,INT)  */
struct A68t218 ;

A_PROCEDURE(A68_VOID ,A68t217,(A68_INT ,A68_INT ,struct A68t218 *),(A68_INT ,A68_INT ,struct A68t218 *,void *));
typedef struct A68t217  A68_217 ;    /* PROC(INT,INT) REF MODE218 */
A_VECTOR(struct A68t219 ,A68t218);
typedef struct A68t218  A68_218 ;    /* VECTOR [] MODE219 */
struct A68t219{
A68_INT  Instoffset;
A_PAD_INT(PAD_56)
A68_INT  Ipno;
A_PAD_INT(PAD_57)
};
typedef struct A68t219  A68_219 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t220,(A68_INT ,struct A68t205 *),(A68_INT ,struct A68t205 *,void *));
typedef struct A68t220  A68_220 ;    /* PROC(INT) MODE205 */

A_PROCEDURE(A68_VOID ,A68t221,(A68_INT ,struct A68t206 *),(A68_INT ,struct A68t206 *,void *));
typedef struct A68t221  A68_221 ;    /* PROC(INT) MODE206 */

A_PROCEDURE(A68_VOID ,A68t222,(struct A68t186 ,struct A68t50 ),(struct A68t186 ,struct A68t50 ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(MODE186,MODE50) VOID */

A_PROCEDURE(A68_BOOL ,A68t223,(struct A68t49 ,struct A68t49 ),(struct A68t49 ,struct A68t49 ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(MODE49,MODE49) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t225);
typedef struct A68t225  A68_225 ;    /* STRUCT 4 CHAR */
struct A68t224{
struct A68t225  Access;
A_PAD_ISTRUCT(A68_225 ,PAD_58)
};
typedef struct A68t224  A68_224 ;    /* STRUCT(MODE225)  */

A_PROCEDURE(struct A68t181 *,A68t226,(A68_VC ,struct A68t224 ,struct A68t111 ),(A68_VC ,struct A68t224 ,struct A68t111 ,void *));
typedef struct A68t226  A68_226 ;    /* PROC(MODE26,MODE224,MODE111) REF MODE181 */

A_PROCEDURE(A68_VOID ,A68t227,(struct A68t181 *,struct A68t111 ),(struct A68t181 *,struct A68t111 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(REF MODE181,MODE111) VOID */

A_PROCEDURE(A68_VOID ,A68t228,(struct A68t181 *,A68_VC *),(struct A68t181 *,A68_VC *,void *));
typedef struct A68t228  A68_228 ;    /* PROC(REF MODE181) MODE26 */

A_PROCEDURE(A68_VOID ,A68t229,(struct A68t181 *,A68_VC ,A68_INT *,struct A68t111 ,struct A68t49 *),(struct A68t181 *,A68_VC ,A68_INT *,struct A68t111 ,struct A68t49 *,void *));
typedef struct A68t229  A68_229 ;    /* PROC(REF MODE181,REF MODE26,REF INT,MODE111) MODE49 */

A_PROCEDURE(A68_VOID ,A68t230,(struct A68t181 *,A68_VC ,struct A68t111 ,struct A68t49 *),(struct A68t181 *,A68_VC ,struct A68t111 ,struct A68t49 *,void *));
typedef struct A68t230  A68_230 ;    /* PROC(REF MODE181,MODE26,MODE111) MODE49 */
struct A68t231{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_59)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_60)
A68_SINT  Device;
A_PAD_SINT(PAD_61)
A68_SINT  Links;
A_PAD_SINT(PAD_62)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_63)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_64)
A68_LINT  Size;
A_PAD_LINT(PAD_65)
A68_LINT  Accessed;
A_PAD_LINT(PAD_66)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_67)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_68)
};
typedef struct A68t231  A68_231 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t233 ;

A_PROCEDURE(struct A68t231 *,A68t232,(struct A68t233 ,struct A68t111 ),(struct A68t233 ,struct A68t111 ,void *));
typedef struct A68t232  A68_232 ;    /* PROC(MODE233,MODE111) REF MODE231 */
struct A68t233 { A68_INT mode; union {
struct A68t181 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t233  A68_233 ;    /* UNION(REF MODE181,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t234,(struct A68t181 *,A68_LINT *,struct A68t111 ,struct A68t49 *),(struct A68t181 *,A68_LINT *,struct A68t111 ,struct A68t49 *,void *));
typedef struct A68t234  A68_234 ;    /* PROC(REF MODE181,REF LONG INT,MODE111) MODE49 */

A_PROCEDURE(A68_VOID ,A68t235,(struct A68t181 *,A68_LINT ,struct A68t111 ,struct A68t49 *),(struct A68t181 *,A68_LINT ,struct A68t111 ,struct A68t49 *,void *));
typedef struct A68t235  A68_235 ;    /* PROC(REF MODE181,LONG INT,MODE111) MODE49 */

A_PROCEDURE(A68_VOID ,A68t236,(struct A68t181 *,struct A68t111 ,struct A68t49 *),(struct A68t181 *,struct A68t111 ,struct A68t49 *,void *));
typedef struct A68t236  A68_236 ;    /* PROC(REF MODE181,MODE111) MODE49 */

A_PROCEDURE(A68_VOID ,A68t237,(A68_VC ,struct A68t111 ,struct A68t49 *),(A68_VC ,struct A68t111 ,struct A68t49 *,void *));
typedef struct A68t237  A68_237 ;    /* PROC(MODE26,MODE111) MODE49 */

A_PROCEDURE(A68_LINT ,A68t238,(void),(void *));
typedef struct A68t238  A68_238 ;    /* PROC LONG INT */

A_PROCEDURE(A68_INT ,A68t239,(A68_VC ,struct A68t111 ),(A68_VC ,struct A68t111 ,void *));
typedef struct A68t239  A68_239 ;    /* PROC(MODE26,MODE111) INT */

A_PROCEDURE(A68_INT ,A68t240,(void),(void *));
typedef struct A68t240  A68_240 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t241,(A68_VC ,A68_VC ,struct A68t111 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t111 ,A68_VC *,void *));
typedef struct A68t241  A68_241 ;    /* PROC(MODE26,MODE26,MODE111) MODE26 */

A_PROCEDURE(A68_VOID ,A68t242,(A68_VC ,A68_VC ,struct A68t111 ,struct A68t49 *),(A68_VC ,A68_VC ,struct A68t111 ,struct A68t49 *,void *));
typedef struct A68t242  A68_242 ;    /* PROC(MODE26,MODE26,MODE111) MODE49 */
struct A68t243{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t243  A68_243 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t244,(A68_VC ,A68_VC ,struct A68t111 ,struct A68t243 *),(A68_VC ,A68_VC ,struct A68t111 ,struct A68t243 *,void *));
typedef struct A68t244  A68_244 ;    /* PROC(MODE26,MODE26,MODE111) MODE243 */

A_PROCEDURE(A68_VOID ,A68t245,(A68_VC *),(A68_VC *,void *));
typedef struct A68t245  A68_245 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t246,(struct A68t60 *),(struct A68t60 *,void *));
typedef struct A68t246  A68_246 ;    /* PROC MODE60 */

A_PROCEDURE(A68_VOID ,A68t247,(A68_VC ,struct A68t111 ,struct A68t60 *),(A68_VC ,struct A68t111 ,struct A68t60 *,void *));
typedef struct A68t247  A68_247 ;    /* PROC(MODE26,MODE111) MODE60 */

A_PROCEDURE(A68_BOOL ,A68t248,(void),(void *));
typedef struct A68t248  A68_248 ;    /* PROC BOOL */
struct A68t250 ;

A_PROCEDURE(A68_VOID ,A68t249,(struct A68t250 ,struct A68t111 ),(struct A68t250 ,struct A68t111 ,void *));
typedef struct A68t249  A68_249 ;    /* PROC(MODE250,MODE111) VOID */
A_VECTOR(struct A68t251 ,A68t250);
typedef struct A68t250  A68_250 ;    /* VECTOR [] MODE251 */
struct A68t251{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_69)
};
typedef struct A68t251  A68_251 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t252,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t252  A68_252 ;    /* PROC(BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t253,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t253  A68_253 ;    /* PROC(REF MODE26) REF MODE26 */

A_PROCEDURE(A68_REAL ,A68t254,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t254  A68_254 ;    /* PROC(REAL) REAL */
struct A68t255{
A68_VC  Name;
A68_VC  Version;
A68_VC  Date;
A68_VC  Msg;
A68_VC  Sys_fault;
};
typedef struct A68t255  A68_255 ;    /* STRUCT(MODE26,MODE26,MODE26,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t256,(A68_BOOL ,struct A68t255 *),(A68_BOOL ,struct A68t255 *,void *));
typedef struct A68t256  A68_256 ;    /* PROC(BOOL) MODE255 */

A_PROCEDURE(A68_VOID ,A68t257,(struct A68t255 ,A68_BOOL ),(struct A68t255 ,A68_BOOL ,void *));
typedef struct A68t257  A68_257 ;    /* PROC(MODE255,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t258,(struct A68t255 *),(struct A68t255 *,void *));
typedef struct A68t258  A68_258 ;    /* PROC MODE255 */

A_PROCEDURE(A68_BOOL ,A68t259,(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ),(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ,void *));
typedef struct A68t259  A68_259 ;    /* PROC(MODE26,MODE26,MODE26,REF REF MODE26,BOOL) BOOL */
struct A68t261 ;
struct A68t262 ;

A_PROCEDURE(A68_VOID ,A68t260,(A68_VC ,struct A68t39 ,struct A68t261 ,struct A68t262 ),(A68_VC ,struct A68t39 ,struct A68t261 ,struct A68t262 ,void *));
typedef struct A68t260  A68_260 ;    /* PROC(MODE26,MODE39,MODE261,MODE262) VOID */

A_PROCEDURE(A68_BOOL ,A68t261,(A68_VC ,struct A68t245 ),(A68_VC ,struct A68t245 ,void *));
typedef struct A68t261  A68_261 ;    /* PROC(MODE26,MODE245) BOOL */

A_PROCEDURE(A68_BOOL ,A68t262,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t262  A68_262 ;    /* PROC(BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t263,(struct A68t111 ),(struct A68t111 ,void *));
typedef struct A68t263  A68_263 ;    /* PROC(MODE111) VOID */

A_PROCEDURE(A68_VOID ,A68t264,(struct A68t263 ,struct A68t111 ),(struct A68t263 ,struct A68t111 ,void *));
typedef struct A68t264  A68_264 ;    /* PROC(MODE263,MODE111) VOID */

A_PROCEDURE(A68_VOID ,A68t268,(A68_VC *),(A68_VC *,void *));
typedef struct A68t268  A68_268 ;    /* PROC REF MODE26 */
struct A68t265{
A68_BOOL  Logging;
A_PAD_BOOL(PAD_70)
A68_BOOL  Outputing;
A_PAD_BOOL(PAD_71)
A68_BOOL  Seeing_in;
A_PAD_BOOL(PAD_72)
A68_BOOL  Seeing_out;
A_PAD_BOOL(PAD_73)
A68_BOOL  Paging;
A_PAD_BOOL(PAD_74)
A68_BOOL  Clock;
A_PAD_BOOL(PAD_75)
A68_BOOL  Screen_output;
A_PAD_BOOL(PAD_76)
A68_INT  Width;
A_PAD_INT(PAD_77)
A68_INT  Page_count;
A_PAD_INT(PAD_78)
A68_INT  Page_length;
A_PAD_INT(PAD_79)
A68_INT  Eof_count;
A_PAD_INT(PAD_80)
struct A68t266 * Standard_reader;
struct A68t267 * Infile;
struct A68t268  Prompt;
struct A68t181 * Logfile;
struct A68t181 * Outfile;
};
typedef struct A68t265  A68_265 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,INT,INT,REF MODE266,REF MODE267,MODE268,REF MODE181,REF MODE181)  */

A_PROCEDURE(A68_INT ,A68t269,(A68_VC *,struct A68t111 ),(A68_VC *,struct A68t111 ,void *));
typedef struct A68t269  A68_269 ;    /* PROC(REF REF MODE26,MODE111) INT */
struct A68t266{
A68_VC  Rdbuffer;
struct A68t269  Rdline;
A68_INT  Rdcharend;
A_PAD_INT(PAD_81)
A68_INT  Rdcharno;
A_PAD_INT(PAD_82)
A68_INT  Start_of_word;
A_PAD_INT(PAD_83)
struct A68t270 * Stack;
};
typedef struct A68t266  A68_266 ;    /* STRUCT(REF MODE26,MODE269,INT,INT,INT,REF MODE270)  */
struct A68t267{
struct A68t181 * File;
A68_BOOL  Suspended;
A_PAD_BOOL(PAD_84)
A68_INT  Number;
A_PAD_INT(PAD_85)
A68_VC  Name;
struct A68t266 * Reader;
struct A68t267 * Previous;
};
typedef struct A68t267  A68_267 ;    /* STRUCT(REF MODE181,BOOL,INT,REF MODE26,REF MODE266,REF MODE267)  */
struct A68t270{
A68_VC  Line;
struct A68t270 * Rest;
};
typedef struct A68t270  A68_270 ;    /* STRUCT(REF MODE26,REF MODE270)  */

A_PROCEDURE(struct A68t265 *,A68t271,(void),(void *));
typedef struct A68t271  A68_271 ;    /* PROC REF MODE265 */

A_PROCEDURE(A68_VOID ,A68t272,(A68_VC ,struct A68t111 ),(A68_VC ,struct A68t111 ,void *));
typedef struct A68t272  A68_272 ;    /* PROC(REF MODE26,MODE111) VOID */

A_PROCEDURE(A68_VOID ,A68t273,(A68_VC ,struct A68t111 ),(A68_VC ,struct A68t111 ,void *));
typedef struct A68t273  A68_273 ;    /* PROC(MODE26,MODE111) VOID */

A_PROCEDURE(A68_VOID ,A68t274,(A68_INT ,struct A68t111 ),(A68_INT ,struct A68t111 ,void *));
typedef struct A68t274  A68_274 ;    /* PROC(INT,MODE111) VOID */

A_PROCEDURE(A68_VOID ,A68t275,(struct A68t268 ),(struct A68t268 ,void *));
typedef struct A68t275  A68_275 ;    /* PROC(MODE268) VOID */

A_PROCEDURE(A68_VOID ,A68t276,(struct A68t39 ),(struct A68t39 ,void *));
typedef struct A68t276  A68_276 ;    /* PROC(MODE39) VOID */

A_PROCEDURE(A68_VOID ,A68t277,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t277  A68_277 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,61,A68t278);
typedef struct A68t278  A68_278 ;    /* STRUCT 61 CHAR */
struct A68t279{
A68_BITS  Ident;
A_PAD_BITS(PAD_86)
struct A68t35  Value;
};
typedef struct A68t279  A68_279 ;    /* STRUCT(BITS,REF MODE35)  */
struct A68t281{
A68_VC  Tag;
A68_INT  Lwb;
A_PAD_INT(PAD_87)
A68_INT  Upb;
A_PAD_INT(PAD_88)
};
typedef struct A68t281  A68_281 ;    /* STRUCT(REF MODE26,INT,INT)  */
struct A68t282{
A68_VC  Tag;
A68_VC  Char_repr;
};
typedef struct A68t282  A68_282 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t283{
A68_BITS  Length;
A_PAD_BITS(PAD_89)
struct A68t293 * Subtype;
};
typedef struct A68t283  A68_283 ;    /* STRUCT(BITS,REF MODE293)  */
struct A68t284{
A68_BITS  Row_elems;
A_PAD_BITS(PAD_90)
struct A68t293 * Subtype;
};
typedef struct A68t284  A68_284 ;    /* STRUCT(BITS,REF MODE293)  */
A_VECTOR(struct A68t293 *,A68t286);
typedef struct A68t286  A68_286 ;    /* VECTOR [] REF MODE293 */
struct A68t287{
struct A68t293 * Input;
struct A68t293 * Output;
};
typedef struct A68t287  A68_287 ;    /* STRUCT(REF MODE293,REF MODE293)  */
struct A68t288{
A68_VC  Tag;
struct A68t293 * Subtype;
};
typedef struct A68t288  A68_288 ;    /* STRUCT(REF MODE26,REF MODE293)  */
A_VECTOR(struct A68t288 ,A68t290);
typedef struct A68t290  A68_290 ;    /* VECTOR [] MODE288 */
struct A68t291{
A68_BITS  Void;
A_PAD_BITS(PAD_91)
};
typedef struct A68t291  A68_291 ;    /* STRUCT(BITS)  */
struct A68t292 { A68_INT mode; union {
struct A68t281  mode1;
struct A68t282  mode2;
struct A68t283  mode3;
struct A68t284  mode4;
struct A68t286  mode5;
struct A68t287  mode6;
struct A68t290  mode7;
struct A68t291  mode8;
} data; };
typedef struct A68t292  A68_292 ;    /* UNION(MODE281,MODE282,MODE283,MODE284,REF MODE286,MODE287,REF MODE290,MODE291,VOID)  */
struct A68t293{
A68_BITS  Ident;
A_PAD_BITS(PAD_92)
A68_BITS  Class;
A_PAD_BITS(PAD_93)
struct A68t292  Type;
};
typedef struct A68t293  A68_293 ;    /* STRUCT(BITS,BITS,MODE292)  */

A_PROCEDURE(A68_VOID ,A68t294,(A68_BITS ,A68_VC ),(A68_BITS ,A68_VC ,void *));
typedef struct A68t294  A68_294 ;    /* PROC(BITS,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,37,A68t295);
typedef struct A68t295  A68_295 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(A68_VC ,2,A68t296);
typedef struct A68t296  A68_296 ;    /* STRUCT 2 MODE26 */

A_PROCEDURE(A68_VOID ,A68t297,(A68_BITS ,struct A68t292 ,struct A68t293 *),(A68_BITS ,struct A68t292 ,struct A68t293 *,void *));
typedef struct A68t297  A68_297 ;    /* PROC(BITS,MODE292) MODE293 */

A_PROCEDURE(A68_VOID ,A68t298,(struct A68t291 *),(struct A68t291 *,void *));
typedef struct A68t298  A68_298 ;    /* PROC MODE291 */

A_PROCEDURE(A68_VOID ,A68t299,(struct A68t131 ,struct A68t293 *),(struct A68t131 ,struct A68t293 *,void *));
typedef struct A68t299  A68_299 ;    /* PROC(MODE131) MODE293 */

A_PROCEDURE(A68_BITS ,A68t300,(struct A68t131 ),(struct A68t131 ,void *));
typedef struct A68t300  A68_300 ;    /* PROC(MODE131) BITS */

A_PROCEDURE(A68_VOID ,A68t301,(struct A68t130 *,struct A68t290 *),(struct A68t130 *,struct A68t290 *,void *));
typedef struct A68t301  A68_301 ;    /* PROC(REF MODE130) REF MODE290 */

A_PROCEDURE(A68_VOID ,A68t302,(A68_BOOL ,struct A68t290 *),(A68_BOOL ,struct A68t290 *,void *));
typedef struct A68t302  A68_302 ;    /* PROC(BOOL) MODE290 */

A_PROCEDURE(A68_VOID ,A68t303,(struct A68t134 *,struct A68t286 *),(struct A68t134 *,struct A68t286 *,void *));
typedef struct A68t303  A68_303 ;    /* PROC(REF MODE134) REF MODE286 */

A_PROCEDURE(A68_VOID ,A68t304,(A68_BOOL ,struct A68t286 *),(A68_BOOL ,struct A68t286 *,void *));
typedef struct A68t304  A68_304 ;    /* PROC(BOOL) MODE286 */

A_PROCEDURE(A68_VOID ,A68t305,(struct A68t131 ,struct A68t292 *),(struct A68t131 ,struct A68t292 *,void *));
typedef struct A68t305  A68_305 ;    /* PROC(MODE131) MODE292 */

A_PROCEDURE(struct A68t143 *,A68t306,(struct A68t279 ,struct A68t131 ),(struct A68t279 ,struct A68t131 ,void *));
typedef struct A68t306  A68_306 ;    /* PROC(MODE279,MODE131) REF MODE143 */

A_PROCEDURE(struct A68t143 *,A68t307,(struct A68t35 *,struct A68t131 ),(struct A68t35 *,struct A68t131 ,void *));
typedef struct A68t307  A68_307 ;    /* PROC(REF REF MODE35,MODE131) REF MODE143 */

A_PROCEDURE(struct A68t144 *,A68t308,(struct A68t35 *,struct A68t132 ),(struct A68t35 *,struct A68t132 ,void *));
typedef struct A68t308  A68_308 ;    /* PROC(REF REF MODE35,MODE132) REF MODE144 */

A_PROCEDURE(struct A68t144 *,A68t309,(struct A68t35 *,struct A68t134 *),(struct A68t35 *,struct A68t134 *,void *));
typedef struct A68t309  A68_309 ;    /* PROC(REF REF MODE35,REF MODE134) REF MODE144 */
A_ISTRUCT(A68_CHAR ,46,A68t310);
typedef struct A68t310  A68_310 ;    /* STRUCT 46 CHAR */
A_ISTRUCT(A68_CHAR ,36,A68t311);
typedef struct A68t311  A68_311 ;    /* STRUCT 36 CHAR */
A_ISTRUCT(A68_CHAR ,33,A68t312);
typedef struct A68t312  A68_312 ;    /* STRUCT 33 CHAR */
A_ISTRUCT(A68_CHAR ,35,A68t313);
typedef struct A68t313  A68_313 ;    /* STRUCT 35 CHAR */
A_ISTRUCT(A68_CHAR ,44,A68t314);
typedef struct A68t314  A68_314 ;    /* STRUCT 44 CHAR */

A_PROCEDURE(struct A68t293 *,A68t315,(A68_INT ),(A68_INT ,void *));
typedef struct A68t315  A68_315 ;    /* PROC(INT) REF MODE293 */
A_ISTRUCT(A68_CHAR ,60,A68t316);
typedef struct A68t316  A68_316 ;    /* STRUCT 60 CHAR */

A_PROCEDURE(struct A68t293 *,A68t317,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t317  A68_317 ;    /* PROC(INT,INT) REF MODE293 */

A_PROCEDURE(A68_VOID ,A68t318,(struct A68t31 *,A68_INT ),(struct A68t31 *,A68_INT ,void *));
typedef struct A68t318  A68_318 ;    /* PROC(REF MODE31,INT) VOID */
A_ISTRUCT(struct A68t66 ,2,A68t319);
typedef struct A68t319  A68_319 ;    /* STRUCT 2 MODE66 */

A_PROCEDURE(A68_CHAR *,A68t320,(struct A68t279 ,A68_INT ),(struct A68t279 ,A68_INT ,void *));
typedef struct A68t320  A68_320 ;    /* PROC(MODE279,INT) REF CHAR */

A_PROCEDURE(A68_VOID ,A68t321,(struct A68t315 ,struct A68t317 ,struct A68t315 ,struct A68t208 ,struct A68t178 ,struct A68t318 ,struct A68t320 ),(struct A68t315 ,struct A68t317 ,struct A68t315 ,struct A68t208 ,struct A68t178 ,struct A68t318 ,struct A68t320 ,void *));
typedef struct A68t321  A68_321 ;    /* PROC(MODE315,MODE317,MODE315,MODE208,MODE178,MODE318,MODE320) VOID */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from ioprocs --- */
/* --- End of imports from ioprocs --- */


/* --- Imports from osinterface --- */
extern A68_224  BOBAOSI_update_access;
extern A68_224  FOBAOSI_update_truncate_access;
#define HDAAOST_block_update_access BOBAOSI_update_access
#define IDAAOST_block_update_truncate_access FOBAOSI_update_truncate_access
#include <stdlib.h>
#define EXIT(status) exit(A_INT_int(status))

#define BZBAOSI_exit EXIT
extern int A_argc;
extern char **A_argv;
#define A_prelude(argc,argv) A_argc=argc; A_argv = argv

#define VPCAOSI_prelude A_prelude
#include "Alibrary.h"

#define PBCAOSI_garbage_collect Agc_collect
#include <math.h>

#define GQAAOST_sqrt sqrt
extern A68_111  ZLBAOSI_global_msg;
extern A68_48 * LEAAOST_out;
/* --- End of imports from osinterface --- */


/* --- Imports from kesymbols --- */
extern A68_VOID  VGCASIM_lookuptype(A68_INT ,A68_131 *);
extern A68_VOID  GSCASIM_rawlookupfunction(A68_INT ,A68_151 *);
extern A68_VOID  ITCASIM_rawlookuprnode(A68_INT ,A68_156 *);
extern A68_VOID  QUCASIM_lookupinputsizes(A68_INT ,A68_35 *);
extern A68_VOID  MWCASIM_lookupoutputs(A68_INT ,A68_147 *);
/* --- End of imports from kesymbols --- */


/* --- Imports from kesignals --- */
extern A68_134 * ABOASIM_flattentype(struct A68t131 );
/* --- End of imports from kesignals --- */


/* --- Imports from kernel --- */
extern A68_130 * VSAASIM_nilsenum;
extern A68_134 * WSAASIM_nilsst;
extern A68_144 * DTAASIM_nilsvst;
extern A68_143  GTAASIM_nullsvalue;
extern A68_143  JTAASIM_voidsvalue;
extern A68_VC * AEDBSIM_encode(struct A68t143 ,struct A68t131 );
/* --- End of imports from kernel --- */


/* --- Imports from kebasics --- */
extern A68_VOID  NKDAOST_sysfault(A68_VC );
/* --- End of imports from kebasics --- */


/* --- Imports from messageproc --- */
extern A68_106  UHAAOSI_fatal;
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VOID  JBAAOSI_concat(struct A68t60 ,A68_VC *);
extern A68_VOID  LRAAOSL_newline(struct A68t48 *);
extern A68_VOID  GFBAOSL_put(struct A68t48 *,struct A68t99 );
/* --- End of imports from putstrings --- */


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
extern void TIGAOST(void);   /* ioprocs */
extern void PCAAOST(void);   /* osinterface */
extern void TCCASIM(void);   /* kesymbols */
extern void NYNASIM(void);   /* kesignals */
extern void XWBBSIM(void);   /* kernel */
extern void JSAASIM(void);   /* kebasics */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
extern void JDAAOSI(void);   /* cif */
/* --- end of DECS initialisation functions --- */
static A68_278   ZPDBSIM = {"$Id: kealientoolkit.a68,v 34.2 1995/03/29 13:04:31 ella Exp $"}; 
A_GISVEC(A68_VC ,AQDBSIM,ZPDBSIM,61)
extern unsigned m_epi_c_type_char;

#define BQDBSIM_m_epi_c_type_char m_epi_c_type_char
extern unsigned m_epi_c_type_enum;

#define CQDBSIM_m_epi_c_type_enum m_epi_c_type_enum
extern unsigned m_epi_c_type_fntype;

#define DQDBSIM_m_epi_c_type_fntype m_epi_c_type_fntype
extern unsigned m_epi_c_type_int;

#define EQDBSIM_m_epi_c_type_int m_epi_c_type_int
extern unsigned m_epi_c_type_invalid;

#define FQDBSIM_m_epi_c_type_invalid m_epi_c_type_invalid
extern unsigned m_epi_c_type_null;

#define GQDBSIM_m_epi_c_type_null m_epi_c_type_null
extern unsigned m_epi_c_type_row;

#define HQDBSIM_m_epi_c_type_row m_epi_c_type_row
extern unsigned m_epi_c_type_string;

#define IQDBSIM_m_epi_c_type_string m_epi_c_type_string
extern unsigned m_epi_c_type_struct;

#define JQDBSIM_m_epi_c_type_struct m_epi_c_type_struct
extern unsigned m_epi_c_type_void;

#define KQDBSIM_m_epi_c_type_void m_epi_c_type_void
static A68_BITS  LQDBSIM_m_epi_s_bad_signal;
static A68_295   QQDBSIM = {"In ALIEN code finder:  illegal use - "}; 
A_GISVEC(A68_VC ,RQDBSIM,QQDBSIM,37)
extern unsigned m_epi_o_null_type;

#define VQDBSIM_m_epi_o_null_type m_epi_o_null_type
extern unsigned m_epi_o_type;

#define WQDBSIM_m_epi_o_type m_epi_o_type
static A68_35  JRDBSIM_emptyvi;
static A68_310   MXDBSIM = {"epi_sim_signal: not enough data for given type"}; 
A_GISVEC(A68_VC ,NXDBSIM,MXDBSIM,46)
static A68_311   WXDBSIM = {"epi_sim_signal: bad enumerated value"}; 
A_GISVEC(A68_VC ,XXDBSIM,WXDBSIM,36)
static A68_311   CYDBSIM = {"epi_sim_signal: bad enumerated value"}; 
A_GISVEC(A68_VC ,DYDBSIM,CYDBSIM,36)
static A68_312   NYDBSIM = {"epi_sim_signal: bad integer value"}; 
A_GISVEC(A68_VC ,OYDBSIM,NYDBSIM,33)
static A68_313   ZYDBSIM = {"epi_sim_signal: bad character value"}; 
A_GISVEC(A68_VC ,AZDBSIM,ZYDBSIM,35)
static A68_313   ZZDBSIM = {"epi_sim_signal: bad character value"}; 
A_GISVEC(A68_VC ,AAEBSIM,ZZDBSIM,35)
static A68_314   ZAEBSIM = {"epi_sim_signal: too much data for given type"}; 
A_GISVEC(A68_VC ,ABEBSIM,ZAEBSIM,44)
static A68_134 * CBEBSIM_savedtypelist;
static A68_INT  DBEBSIM_lasttableindex;
static A68_VC * EBEBSIM_outputbuffer;
static A68_293  FBEBSIM_result;
static A68_316   YBEBSIM = {"kealientoolkit get_output_size - Error in signal output size"}; 
A_GISVEC(A68_VC ,ZBEBSIM,YBEBSIM,60)
extern void aci_initialise_procs();

#define XEEBSIM_c_init aci_initialise_procs
typedef struct   /* env of non-global proc */
{
int dummy;
} DUDBSIM_encode_epi_type;
typedef struct   /* env of non-global proc */
{
A68_307  ZVDBSIM_decodesignal;
} BWDBSIM_decodesignal;
typedef struct   /* env of non-global proc */
{
A68_INT * SSDBSIM_upb;
} WSDBSIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * LTDBSIM_upb;
} PTDBSIM_generator;
typedef struct   /* env of non-global proc */
{
A68_307  ZVDBSIM_decodesignal;
} HWDBSIM_decoderow;
typedef struct   /* env of non-global proc */
{
A68_307  ZVDBSIM_decodesignal;
} VWDBSIM_decodestructure;
typedef struct   /* env of non-global proc */
{
A68_129 * KZDBSIM_s;
} OZDBSIM_generator;

A_STATIC A68_VOID  OQDBSIM_epi_notify(A68_BITS  Dummy, A68_VC  Error);

A_STATIC A68_VOID  ZQDBSIM_make_epi_type(A68_BITS  Class, A68_292  Type, A68_293  *ReturnedValue);

A_STATIC A68_VOID  GRDBSIM_generator(A68_BOOL  FRDBSIM_anonymous, A68_35  *ReturnedValue);

A_STATIC A68_INT  NRDBSIM_max(A68_INT  A, A68_INT  B);

A_STATIC A68_INT  QRDBSIM_size_epi_query_signal(A68_131  Type);

A_STATIC A68_VOID  ESDBSIM_makevoidepitype(A68_291  *ReturnedValue);

A_STATIC A68_VOID  JSDBSIM_sim_epi_type(A68_131  Type, A68_293  *ReturnedValue);

A_STATIC A68_BITS  MSDBSIM_classify_epi_type(A68_131  Type);

A_STATIC A68_VOID  QSDBSIM_encode_enum_epi_type(A68_130 * E, A68_290  *ReturnedValue);

A_STATIC A68_VOID  VSDBSIM_generator(A68_BOOL  TSDBSIM_anonymous, A68_290  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JTDBSIM_encode_struct_epi_type(A68_134 * S, A68_286  *ReturnedValue);

A_STATIC A68_VOID  OTDBSIM_generator(A68_BOOL  MTDBSIM_anonymous, A68_286  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CUDBSIM_encode_epi_type(A68_131  Type, A68_292  *ReturnedValue, void *NonLocals);

A_STATIC A68_143 * VVDBSIM_epi_sim_signal(A68_279  Signal, A68_131  Type);

A_STATIC A68_143 * AWDBSIM_decodesignal(A68_35 * Rep, A68_131  Type, void *NonLocals);

A_STATIC A68_144 * GWDBSIM_decoderow(A68_35 * Rep, A68_132  R, void *NonLocals);

A_STATIC A68_144 * UWDBSIM_decodestructure(A68_35 * Rep, A68_134 * S, void *NonLocals);

A_STATIC A68_VOID  NZDBSIM_generator(A68_BOOL  LZDBSIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_293 * HBEBSIM_aci_to_epi_type(A68_INT  Aci_type);

A_STATIC A68_INT  VBEBSIM_get_output_size(A68_INT  Tableindex);

A_STATIC A68_293 * FCEBSIM_get_epi_input_type(A68_INT  Tableindex, A68_INT  Nthinput);

A_STATIC A68_293 * HDEBSIM_get_epi_output_type(A68_INT  Tableindex);

A_STATIC A68_INT  ODEBSIM_get_input_size(A68_INT  Tableindex, A68_INT  N);

A_STATIC A68_VOID  UDEBSIM_output(A68_31 * Buffer, A68_INT  Length);

A_STATIC A68_CHAR * REEBSIM_get_encoded_output(A68_279  Outputsignal, A68_INT  Tableindex);

A68_VOID  WEEBSIM_aci_initialise_procs(void);

A_STATIC A68_VOID  VSDBSIM_generator(A68_BOOL  TSDBSIM_anonymous, A68_290  *ReturnedValue, void *NonLocals)
#define NL(x) (((WSDBSIM_generator *)NonLocals)->x)
{ 
A68_290  XSDBSIM;  /* clause result */
A68_290  YSDBSIM;  /* OPERATORS - dynamic generator */
{ 
YSDBSIM.upb = (*NL(SSDBSIM_upb)) ;
( TSDBSIM_anonymous? A_VLOC(A68_288 ,YSDBSIM): A_VHEAP(A68_288 ,YSDBSIM) );
XSDBSIM = YSDBSIM;
} 
*ReturnedValue = (XSDBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  OTDBSIM_generator(A68_BOOL  MTDBSIM_anonymous, A68_286  *ReturnedValue, void *NonLocals)
#define NL(x) (((PTDBSIM_generator *)NonLocals)->x)
{ 
A68_286  QTDBSIM;  /* clause result */
A68_286  RTDBSIM;  /* OPERATORS - dynamic generator */
{ 
RTDBSIM.upb = (*NL(LTDBSIM_upb)) ;
( MTDBSIM_anonymous? A_VLOC(A68_293 *,RTDBSIM): A_VHEAP(A68_293 *,RTDBSIM) );
QTDBSIM = RTDBSIM;
} 
*ReturnedValue = (QTDBSIM);
return;
} 
#undef NL

A_STATIC A68_144 * GWDBSIM_decoderow(A68_35 * Rep, A68_132  R, void *NonLocals)
#define NL(x) (((HWDBSIM_decoderow *)NonLocals)->x)
{ 
A68_BOOL  IWDBSIM_ok;
A68_144 * JWDBSIM_ans;
A68_144 ** KWDBSIM_p;
A68_INT  LWDBSIM_i;
A68_INT  MWDBSIM;  /* to part of loop */
A68_143 * NWDBSIM_element;
A68_144  OWDBSIM;  /* collateral clause result */
A68_144 * PWDBSIM;  /* YIELD */
A68_144 * QWDBSIM;  /* clause result */
A_PROC_ENTRY(decoderow);
 /* line 344: */
 /* line 345: */
{ 
IWDBSIM_ok = A68_TRUE;
 /* line 346: */
JWDBSIM_ans = DTAASIM_nilsvst;
 /* line 347: */
KWDBSIM_p = (&JWDBSIM_ans);
 /* line 348: */
MWDBSIM = R.No;
for ( LWDBSIM_i = 1;
LWDBSIM_i <= MWDBSIM;
LWDBSIM_i += 1 )
{ 
 /* line 349: */
if ( !(IWDBSIM_ok) ) break;
NWDBSIM_element = A_CALLPROC(NL(ZVDBSIM_decodesignal),(Rep, R.Type),(Rep, R.Type,(NL(ZVDBSIM_decodesignal)).nonlocals));
 /* line 350: */
 /* line 351: */
if ( (NWDBSIM_element==(A68_143 *)A68_NIL) )
{ 
 /* line 352: */
 /* line 353: */
IWDBSIM_ok = A68_FALSE;
} 
else
{ 
OWDBSIM.Head = (*NWDBSIM_element);
OWDBSIM.Tail = DTAASIM_nilsvst;
PWDBSIM = A_HEAP(A68_144 ) ;
(*PWDBSIM) = OWDBSIM ;
(*KWDBSIM_p) = PWDBSIM;
 /* line 354: */
 /* line 355: */
 /* line 356: */
KWDBSIM_p = (&((*KWDBSIM_p)->Tail));
} 
}
 /* line 357: */
 /* line 358: */
if ( IWDBSIM_ok )
{ 
 /* line 359: */
QWDBSIM = JWDBSIM_ans;
} 
else
{ 
 /* line 360: */
QWDBSIM = DTAASIM_nilsvst;
} 
} 
A_PROC_EXIT(decoderow);
return( QWDBSIM );
} 
#undef NL

A_STATIC A68_144 * UWDBSIM_decodestructure(A68_35 * Rep, A68_134 * S, void *NonLocals)
#define NL(x) (((VWDBSIM_decodestructure *)NonLocals)->x)
{ 
A68_BOOL  WWDBSIM_ok;
A68_144 * XWDBSIM_ans;
A68_144 ** YWDBSIM_p;
A68_134 * ZWDBSIM_q;
A68_BOOL  AXDBSIM;  /* optbool result */
A68_143 * BXDBSIM_element;
A68_144  CXDBSIM;  /* collateral clause result */
A68_144 * DXDBSIM;  /* YIELD */
A68_144 * EXDBSIM;  /* clause result */
A_PROC_ENTRY(decodestructure);
 /* line 363: */
 /* line 364: */
{ 
WWDBSIM_ok = A68_TRUE;
 /* line 365: */
XWDBSIM_ans = DTAASIM_nilsvst;
 /* line 366: */
YWDBSIM_p = (&XWDBSIM_ans);
 /* line 367: */
ZWDBSIM_q = S;
 /* line 368: */
for ( ;; )
{ 
AXDBSIM = WWDBSIM_ok;
if ( AXDBSIM )
{AXDBSIM = (ZWDBSIM_q!=WSAASIM_nilsst);
}
 /* line 369: */
if ( !(AXDBSIM) ) break;
BXDBSIM_element = A_CALLPROC(NL(ZVDBSIM_decodesignal),(Rep, (*(&(ZWDBSIM_q->T)))),(Rep, (*(&(ZWDBSIM_q->T))),(NL(ZVDBSIM_decodesignal)).nonlocals));
 /* line 370: */
 /* line 371: */
if ( (BXDBSIM_element==(A68_143 *)A68_NIL) )
{ 
 /* line 372: */
 /* line 373: */
WWDBSIM_ok = A68_FALSE;
} 
else
{ 
CXDBSIM.Head = (*BXDBSIM_element);
CXDBSIM.Tail = DTAASIM_nilsvst;
DXDBSIM = A_HEAP(A68_144 ) ;
(*DXDBSIM) = CXDBSIM ;
(*YWDBSIM_p) = DXDBSIM;
 /* line 374: */
 /* line 375: */
YWDBSIM_p = (&((*YWDBSIM_p)->Tail));
} 
 /* line 376: */
 /* line 377: */
ZWDBSIM_q = (*(&(ZWDBSIM_q->Rest)));
}
 /* line 378: */
 /* line 379: */
if ( WWDBSIM_ok )
{ 
 /* line 380: */
EXDBSIM = XWDBSIM_ans;
} 
else
{ 
 /* line 381: */
EXDBSIM = DTAASIM_nilsvst;
} 
} 
A_PROC_EXIT(decodestructure);
return( EXDBSIM );
} 
#undef NL

A_STATIC A68_VOID  NZDBSIM_generator(A68_BOOL  LZDBSIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((OZDBSIM_generator *)NonLocals)->x)
{ 
A68_VC  PZDBSIM;  /* clause result */
A68_VC  QZDBSIM;  /* OPERATORS - dynamic generator */
{ 
QZDBSIM.upb = (*(&(NL(KZDBSIM_s)->No))) ;
( LZDBSIM_anonymous? A_VLOC(A68_CHAR ,QZDBSIM): A_VHEAP(A68_CHAR ,QZDBSIM) );
PZDBSIM = QZDBSIM;
} 
*ReturnedValue = (PZDBSIM);
return;
} 
#undef NL

A_STATIC A68_BITS  MSDBSIM_classify_epi_type(A68_131  Type)
{ 
A68_131  NSDBSIM;  /* united object - for case conformity */
A68_BITS  OSDBSIM;  /* clause result */
A_PROC_ENTRY(classify_epi_type);
 /* line 264: */
 /* line 265: */
NSDBSIM = Type ;
switch ( NSDBSIM.mode )
{ 
case 9: /* STRUCT(INT)  */
 /* line 266: */
OSDBSIM = GQDBSIM_m_epi_c_type_null;
break;
case 8: /* STRUCT(INT)  */
 /* line 267: */
OSDBSIM = KQDBSIM_m_epi_c_type_void;
break;
case 2: /* REF STRUCT(REF MODE26,INT,INT)  */
 /* line 268: */
OSDBSIM = EQDBSIM_m_epi_c_type_int;
break;
case 3: /* REF STRUCT(REF MODE26,REF MODE26)  */
 /* line 269: */
OSDBSIM = BQDBSIM_m_epi_c_type_char;
break;
case 5: /* REF STRUCT(INT,MODE128)  */
 /* line 270: */
OSDBSIM = IQDBSIM_m_epi_c_type_string;
break;
case 1: /* REF STRUCT(REF MODE26,MODE131,REF MODE130)  */
 /* line 271: */
OSDBSIM = CQDBSIM_m_epi_c_type_enum;
break;
case 7: /* REF STRUCT(MODE131,REF MODE134)  */
 /* line 272: */
OSDBSIM = JQDBSIM_m_epi_c_type_struct;
break;
case 4: /* REF STRUCT(INT,MODE131)  */
 /* line 273: */
OSDBSIM = HQDBSIM_m_epi_c_type_row;
break;
case 6: /* REF STRUCT(MODE131,MODE131)  */
 /* line 274: */
OSDBSIM = DQDBSIM_m_epi_c_type_fntype;
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(classify_epi_type);
return( OSDBSIM );
} 
#undef NL

A_STATIC A68_VOID  QSDBSIM_encode_enum_epi_type(A68_130 * E, A68_290  *ReturnedValue)
{ 
A68_130 * RSDBSIM_p;
A68_INT  SSDBSIM_upb;
A68_302  USDBSIM_generator;   /* proc value of non-global proc */
A68_290  ZSDBSIM;  /* avoid structure result */
A68_290  ATDBSIM_ans;
A68_INT  BTDBSIM_ix;
A68_INT  CTDBSIM;  /* to part of loop */
A68_288  DTDBSIM;  /* collateral clause result */
A68_293  ETDBSIM;  /* avoid structure result */
A68_293 * FTDBSIM;  /* YIELD */
A68_288 * GTDBSIM;  /* YIELD */
A68_290  HTDBSIM;  /* clause result */
A_PROC_ENTRY(encode_enum_epi_type);
 /* line 277: */
 /* line 278: */
{ 
RSDBSIM_p = E;
 /* line 279: */
SSDBSIM_upb = 0;
 /* line 280: */
for ( ;; )
{ 
if ( !((RSDBSIM_p!=VSAASIM_nilsenum)) ) break;
SSDBSIM_upb+=1;
RSDBSIM_p = (*(&(RSDBSIM_p->Rest)));
}
 /* line 281: */
A_CLOSURE( USDBSIM_generator, VSDBSIM_generator, WSDBSIM_generator );
(( WSDBSIM_generator * ) ( USDBSIM_generator.nonlocals )) -> SSDBSIM_upb = (&SSDBSIM_upb);
A_CALLPROC(USDBSIM_generator,(A68_FALSE, &ZSDBSIM),(A68_FALSE, &ZSDBSIM,(USDBSIM_generator).nonlocals));
ATDBSIM_ans = ZSDBSIM;
 /* line 282: */
RSDBSIM_p = E;
 /* line 283: */
CTDBSIM = SSDBSIM_upb;
for ( BTDBSIM_ix = 1;
BTDBSIM_ix <= CTDBSIM;
BTDBSIM_ix += 1 )
{ 
 /* line 284: */
DTDBSIM.Tag = (*(&(RSDBSIM_p->Id)));
JSDBSIM_sim_epi_type( (*(&(RSDBSIM_p->T))), &ETDBSIM );
FTDBSIM = A_HEAP(A68_293 ) ;
(*FTDBSIM) = ETDBSIM ;
DTDBSIM.Subtype = FTDBSIM;
GTDBSIM = (&A_VINDEX(ATDBSIM_ans,BTDBSIM_ix)) ;
(*GTDBSIM) = DTDBSIM;
 /* line 285: */
 /* line 286: */
RSDBSIM_p = (*(&(RSDBSIM_p->Rest)));
}
 /* line 287: */
 /* line 288: */
HTDBSIM = ATDBSIM_ans;
} 
A_PROC_EXIT(encode_enum_epi_type);
*ReturnedValue = (HTDBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  JTDBSIM_encode_struct_epi_type(A68_134 * S, A68_286  *ReturnedValue)
{ 
A68_134 * KTDBSIM_p;
A68_INT  LTDBSIM_upb;
A68_304  NTDBSIM_generator;   /* proc value of non-global proc */
A68_286  STDBSIM;  /* avoid structure result */
A68_286  TTDBSIM_ans;
A68_INT  UTDBSIM_ix;
A68_INT  VTDBSIM;  /* to part of loop */
A68_293  WTDBSIM;  /* avoid structure result */
A68_293 * XTDBSIM;  /* YIELD */
A68_293 ** YTDBSIM;  /* YIELD */
A68_286  ZTDBSIM;  /* clause result */
A_PROC_ENTRY(encode_struct_epi_type);
 /* line 291: */
 /* line 292: */
{ 
KTDBSIM_p = S;
 /* line 293: */
LTDBSIM_upb = 0;
 /* line 294: */
for ( ;; )
{ 
if ( !((KTDBSIM_p!=WSAASIM_nilsst)) ) break;
LTDBSIM_upb+=1;
KTDBSIM_p = (*(&(KTDBSIM_p->Rest)));
}
 /* line 295: */
A_CLOSURE( NTDBSIM_generator, OTDBSIM_generator, PTDBSIM_generator );
(( PTDBSIM_generator * ) ( NTDBSIM_generator.nonlocals )) -> LTDBSIM_upb = (&LTDBSIM_upb);
A_CALLPROC(NTDBSIM_generator,(A68_FALSE, &STDBSIM),(A68_FALSE, &STDBSIM,(NTDBSIM_generator).nonlocals));
TTDBSIM_ans = STDBSIM;
 /* line 296: */
KTDBSIM_p = S;
 /* line 297: */
VTDBSIM = LTDBSIM_upb;
for ( UTDBSIM_ix = 1;
UTDBSIM_ix <= VTDBSIM;
UTDBSIM_ix += 1 )
{ 
 /* line 298: */
JSDBSIM_sim_epi_type( (*(&(KTDBSIM_p->T))), &WTDBSIM );
XTDBSIM = A_HEAP(A68_293 ) ;
(*XTDBSIM) = WTDBSIM ;
YTDBSIM = (&A_VINDEX(TTDBSIM_ans,UTDBSIM_ix)) ;
(*YTDBSIM) = XTDBSIM;
 /* line 299: */
 /* line 300: */
KTDBSIM_p = (*(&(KTDBSIM_p->Rest)));
}
 /* line 301: */
 /* line 302: */
ZTDBSIM = TTDBSIM_ans;
} 
A_PROC_EXIT(encode_struct_epi_type);
*ReturnedValue = (ZTDBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  CUDBSIM_encode_epi_type(A68_131  Type, A68_292  *ReturnedValue, void *NonLocals)
#define NL(x) (((DUDBSIM_encode_epi_type *)NonLocals)->x)
{ 
A68_131  EUDBSIM;  /* united object - for case conformity */
A68_126  FUDBSIM_n;
A68_292  GUDBSIM;  /* clause result */
A68_292  HUDBSIM;  /* OPERATORS - mode -> union mode */
A68_125  IUDBSIM_v;
A68_291  JUDBSIM;  /* avoid structure result */
A68_292  KUDBSIM;  /* OPERATORS - mode -> union mode */
A68_127 * LUDBSIM_i;
A68_281  MUDBSIM;  /* collateral clause result */
A68_292  NUDBSIM;  /* OPERATORS - mode -> union mode */
A68_128 * OUDBSIM_c;
A68_282  PUDBSIM;  /* collateral clause result */
A68_292  QUDBSIM;  /* OPERATORS - mode -> union mode */
A68_129 * RUDBSIM_s;
A68_283  SUDBSIM;  /* collateral clause result */
A68_131  TUDBSIM;  /* OPERATORS - mode -> union mode */
A68_128 * UUDBSIM;  /* YIELD */
A68_293  VUDBSIM;  /* avoid structure result */
A68_293 * WUDBSIM;  /* YIELD */
A68_292  XUDBSIM;  /* OPERATORS - mode -> union mode */
A68_130 * YUDBSIM_e;
A68_290  ZUDBSIM;  /* avoid structure result */
A68_292  AVDBSIM;  /* OPERATORS - mode -> union mode */
A68_134 * BVDBSIM_s;
A68_286  CVDBSIM;  /* avoid structure result */
A68_292  DVDBSIM;  /* OPERATORS - mode -> union mode */
A68_132 * EVDBSIM_r;
A68_284  FVDBSIM;  /* collateral clause result */
A68_293  GVDBSIM;  /* avoid structure result */
A68_293 * HVDBSIM;  /* YIELD */
A68_292  IVDBSIM;  /* OPERATORS - mode -> union mode */
A68_133 * JVDBSIM_f;
A68_287  KVDBSIM;  /* collateral clause result */
A68_293  LVDBSIM;  /* avoid structure result */
A68_293 * MVDBSIM;  /* YIELD */
A68_293  NVDBSIM;  /* avoid structure result */
A68_293 * OVDBSIM;  /* YIELD */
A68_292  PVDBSIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(encode_epi_type);
 /* line 305: */
 /* line 306: */
EUDBSIM = Type ;
switch ( EUDBSIM.mode )
{ 
case 9: /* STRUCT(INT)  */
FUDBSIM_n = (EUDBSIM.data.mode9);
 /* line 307: */
GUDBSIM = A_EMPTY(HUDBSIM,9);
break;
case 8: /* STRUCT(INT)  */
IUDBSIM_v = (EUDBSIM.data.mode8);
 /* line 308: */
ESDBSIM_makevoidepitype(  &JUDBSIM );
GUDBSIM = A_UNITE(KUDBSIM,mode8,8,JUDBSIM);
break;
case 2: /* REF STRUCT(REF MODE26,INT,INT)  */
LUDBSIM_i = (EUDBSIM.data.mode2);
MUDBSIM.Tag = (*(&(LUDBSIM_i->Id)));
MUDBSIM.Lwb = (*(&(LUDBSIM_i->Lwb)));
MUDBSIM.Upb = (*(&(LUDBSIM_i->Upb)));
 /* line 309: */
GUDBSIM = A_UNITE(NUDBSIM,mode1,1,MUDBSIM);
break;
case 3: /* REF STRUCT(REF MODE26,REF MODE26)  */
OUDBSIM_c = (EUDBSIM.data.mode3);
PUDBSIM.Tag = (*(&(OUDBSIM_c->Id)));
PUDBSIM.Char_repr = (*(&(OUDBSIM_c->Char)));
 /* line 310: */
GUDBSIM = A_UNITE(QUDBSIM,mode2,2,PUDBSIM);
break;
case 5: /* REF STRUCT(INT,MODE128)  */
RUDBSIM_s = (EUDBSIM.data.mode5);
 /* line 311: */
SUDBSIM.Length = (A68_BITS )(*(&(RUDBSIM_s->No)));
UUDBSIM = (&(RUDBSIM_s->T)) ;
JSDBSIM_sim_epi_type( A_UNITE(TUDBSIM,mode3,3,UUDBSIM), &VUDBSIM );
WUDBSIM = A_HEAP(A68_293 ) ;
(*WUDBSIM) = VUDBSIM ;
SUDBSIM.Subtype = WUDBSIM;
 /* line 312: */
GUDBSIM = A_UNITE(XUDBSIM,mode3,3,SUDBSIM);
break;
case 1: /* REF STRUCT(REF MODE26,MODE131,REF MODE130)  */
YUDBSIM_e = (EUDBSIM.data.mode1);
 /* line 313: */
QSDBSIM_encode_enum_epi_type( YUDBSIM_e, &ZUDBSIM );
GUDBSIM = A_UNITE(AVDBSIM,mode7,7,ZUDBSIM);
break;
case 7: /* REF STRUCT(MODE131,REF MODE134)  */
BVDBSIM_s = (EUDBSIM.data.mode7);
 /* line 314: */
JTDBSIM_encode_struct_epi_type( BVDBSIM_s, &CVDBSIM );
GUDBSIM = A_UNITE(DVDBSIM,mode5,5,CVDBSIM);
break;
case 4: /* REF STRUCT(INT,MODE131)  */
EVDBSIM_r = (EUDBSIM.data.mode4);
 /* line 315: */
FVDBSIM.Row_elems = (A68_BITS )(*(&(EVDBSIM_r->No)));
JSDBSIM_sim_epi_type( (*(&(EVDBSIM_r->Type))), &GVDBSIM );
HVDBSIM = A_HEAP(A68_293 ) ;
(*HVDBSIM) = GVDBSIM ;
FVDBSIM.Subtype = HVDBSIM;
 /* line 316: */
GUDBSIM = A_UNITE(IVDBSIM,mode4,4,FVDBSIM);
break;
case 6: /* REF STRUCT(MODE131,MODE131)  */
JVDBSIM_f = (EUDBSIM.data.mode6);
 /* line 317: */
JSDBSIM_sim_epi_type( (*(&(JVDBSIM_f->From))), &LVDBSIM );
MVDBSIM = A_HEAP(A68_293 ) ;
(*MVDBSIM) = LVDBSIM ;
KVDBSIM.Input = MVDBSIM;
 /* line 318: */
JSDBSIM_sim_epi_type( (*(&(JVDBSIM_f->To))), &NVDBSIM );
OVDBSIM = A_HEAP(A68_293 ) ;
(*OVDBSIM) = NVDBSIM ;
KVDBSIM.Output = OVDBSIM;
GUDBSIM = A_UNITE(PVDBSIM,mode6,6,KVDBSIM);
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(encode_epi_type);
*ReturnedValue = (GUDBSIM);
return;
} 
#undef NL

A_STATIC A68_143 * AWDBSIM_decodesignal(A68_35 * Rep, A68_131  Type, void *NonLocals)
#define NL(x) (((BWDBSIM_decodesignal *)NonLocals)->x)
{ 
A68_308  FWDBSIM_decoderow;   /* proc value of non-global proc */
A68_309  TWDBSIM_decodestructure;   /* proc value of non-global proc */
A68_131  FXDBSIM;  /* united object - for case conformity */
A68_BOOL  GXDBSIM;  /* clause result */
A68_INT  HXDBSIM;  /* YIELD */
A68_BOOL  IXDBSIM;  /* clause result */
A68_138 * JXDBSIM_q;
A68_131 * KXDBSIM;  /* YIELD */
A68_INT  LXDBSIM_size;
A68_143 * OXDBSIM;  /* clause result */
A68_35  PXDBSIM;  /* OPERATORS - trim index */
A68_143  QXDBSIM;  /* OPERATORS - mode -> union mode */
A68_143 * RXDBSIM;  /* YIELD */
A68_131  SXDBSIM;  /* united object - for case conformity */
A68_130 * TXDBSIM_e;
A68_INT  UXDBSIM;  /* YIELD */
A68_INT  VXDBSIM_val;
A68_130 * YXDBSIM_p;
A68_BOOL  ZXDBSIM_ok;
A68_INT  AYDBSIM_i;
A68_INT  BYDBSIM;  /* to part of loop */
A68_35  EYDBSIM;  /* OPERATORS - trim index */
A68_142  FYDBSIM;  /* collateral clause result */
A68_142 * GYDBSIM;  /* YIELD */
A68_143  HYDBSIM;  /* OPERATORS - mode -> union mode */
A68_143 * IYDBSIM;  /* YIELD */
A68_127 * JYDBSIM_i;
A68_INT  KYDBSIM;  /* YIELD */
A68_INT  LYDBSIM_val;
A68_BOOL  MYDBSIM;  /* optbool result */
A68_35  PYDBSIM;  /* OPERATORS - trim index */
A68_139  QYDBSIM;  /* collateral clause result */
A68_139 * RYDBSIM;  /* YIELD */
A68_143  SYDBSIM;  /* OPERATORS - mode -> union mode */
A68_143 * TYDBSIM;  /* YIELD */
A68_128 * UYDBSIM_c;
A68_INT  VYDBSIM;  /* YIELD */
A68_INT  WYDBSIM_val;
A68_VC  XYDBSIM_charlist;
A68_BOOL  YYDBSIM;  /* optbool result */
A68_35  BZDBSIM;  /* OPERATORS - trim index */
A68_140  CZDBSIM;  /* collateral clause result */
A68_140 * DZDBSIM;  /* YIELD */
A68_143  EZDBSIM;  /* OPERATORS - mode -> union mode */
A68_143 * FZDBSIM;  /* YIELD */
A68_132 * GZDBSIM_r;
A68_144 * HZDBSIM_svst;
A68_143  IZDBSIM;  /* OPERATORS - mode -> union mode */
A68_143 * JZDBSIM;  /* YIELD */
A68_129 * KZDBSIM_s;
A68_46  MZDBSIM_generator;   /* proc value of non-global proc */
A68_VC  RZDBSIM;  /* avoid structure result */
A68_VC  SZDBSIM_value;
A68_VC  TZDBSIM_charlist;
A68_BOOL  UZDBSIM_ok;
A68_INT  VZDBSIM_i;
A68_INT  WZDBSIM;  /* to part of loop */
A68_INT  XZDBSIM_val;
A68_BOOL  YZDBSIM;  /* optbool result */
A68_CHAR * BAEBSIM;  /* YIELD */
A68_35  CAEBSIM;  /* OPERATORS - trim index */
A68_141  DAEBSIM;  /* collateral clause result */
A68_141 * EAEBSIM;  /* YIELD */
A68_143  FAEBSIM;  /* OPERATORS - mode -> union mode */
A68_143 * GAEBSIM;  /* YIELD */
A68_133 * HAEBSIM_f;
A68_143 * IAEBSIM_from;
A68_143 * JAEBSIM_to;
A68_BOOL  KAEBSIM;  /* optbool result */
A68_145  LAEBSIM;  /* collateral clause result */
A68_145 * MAEBSIM;  /* YIELD */
A68_143  NAEBSIM;  /* OPERATORS - mode -> union mode */
A68_143 * OAEBSIM;  /* YIELD */
A68_134 * PAEBSIM_s;
A68_144 * QAEBSIM_svst;
A68_143  RAEBSIM;  /* OPERATORS - mode -> union mode */
A68_143 * SAEBSIM;  /* YIELD */
A68_126  TAEBSIM_v;
A68_143 * UAEBSIM;  /* YIELD */
A68_125  VAEBSIM_v;
A68_143 * WAEBSIM;  /* YIELD */
A_PROC_ENTRY(decodesignal);
 /* line 341: */
 /* line 343: */
{ 
A_CLOSURE( FWDBSIM_decoderow, GWDBSIM_decoderow, HWDBSIM_decoderow );
(( HWDBSIM_decoderow * ) ( FWDBSIM_decoderow.nonlocals )) -> ZVDBSIM_decodesignal = NL(ZVDBSIM_decodesignal);
 /* line 362: */
A_CLOSURE( TWDBSIM_decodestructure, UWDBSIM_decodestructure, VWDBSIM_decodestructure );
(( VWDBSIM_decodestructure * ) ( TWDBSIM_decodestructure.nonlocals )) -> ZVDBSIM_decodesignal = NL(ZVDBSIM_decodesignal);
 /* line 383: */
FXDBSIM = Type ;
switch ( FXDBSIM.mode )
{ 
case 4: /* REF STRUCT(INT,MODE131)  */
GXDBSIM = A68_FALSE;
break;
case 7: /* REF STRUCT(MODE131,REF MODE134)  */
GXDBSIM = A68_FALSE;
break;
case 8: /* STRUCT(INT)  */
 /* line 384: */
GXDBSIM = A68_FALSE;
break;
case 6: /* REF STRUCT(MODE131,MODE131)  */
GXDBSIM = A68_FALSE;
break;
case 9: /* STRUCT(INT)  */
GXDBSIM = A68_FALSE;
break;
default: 
GXDBSIM = A68_TRUE;
break;
} 
if ( GXDBSIM )
{HXDBSIM = 1 ;
GXDBSIM = ((*(&A_VINDEX((*Rep),HXDBSIM)))==0);
}
 /* line 385: */
IXDBSIM = GXDBSIM;
if ( IXDBSIM )
{ 
JXDBSIM_q = (A_HEAP(A68_138 ));
 /* line 386: */
KXDBSIM = (&(JXDBSIM_q->Type)) ;
(*KXDBSIM) = Type;
 /* line 387: */
LXDBSIM_size = QRDBSIM_size_epi_query_signal(Type);
 /* line 388: */
 /* line 389: */
if ( (LXDBSIM_size>(*Rep).upb) )
{ 
 /* line 390: */
OQDBSIM_epi_notify(LQDBSIM_m_epi_s_bad_signal, NXDBSIM);
 /* line 391: */
 /* line 392: */
 /* line 393: */
OXDBSIM = (A68_143 *)A68_NIL;
} 
else
{ 
(*Rep) = A_VTRIM(PXDBSIM,((*Rep)),A_VTSCRIPT(&(PXDBSIM.upb),((*Rep)).upb,(LXDBSIM_size+1),((*Rep)).upb));
 /* line 394: */
 /* line 395: */
 /* line 396: */
 /* line 397: */
RXDBSIM = A_HEAP(A68_143 ) ;
(*RXDBSIM) = A_UNITE(QXDBSIM,mode1,1,JXDBSIM_q) ;
OXDBSIM = RXDBSIM;
} 
} 
else
{ 
 /* line 398: */
SXDBSIM = Type ;
switch ( SXDBSIM.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,MODE131,REF MODE130)  */
TXDBSIM_e = (SXDBSIM.data.mode1);
 /* line 399: */
 /* line 400: */
{ 
UXDBSIM = 1 ;
VXDBSIM_val = (*(&A_VINDEX((*Rep),UXDBSIM)));
 /* line 401: */
 /* line 402: */
if ( (VXDBSIM_val<=0) )
{ 
 /* line 403: */
OQDBSIM_epi_notify(LQDBSIM_m_epi_s_bad_signal, XXDBSIM);
 /* line 404: */
 /* line 405: */
 /* line 406: */
OXDBSIM = (A68_143 *)A68_NIL;
} 
else
{ 
YXDBSIM_p = TXDBSIM_e;
 /* line 407: */
ZXDBSIM_ok = A68_TRUE;
 /* line 408: */
BYDBSIM = (VXDBSIM_val-1);
for ( AYDBSIM_i = 1;
AYDBSIM_i <= BYDBSIM;
AYDBSIM_i += 1 )
{ 
 /* line 409: */
if ( !(ZXDBSIM_ok) ) break;
 /* line 410: */
if ( ((*(&(YXDBSIM_p->Rest)))==VSAASIM_nilsenum) )
{ 
 /* line 411: */
OQDBSIM_epi_notify(LQDBSIM_m_epi_s_bad_signal, DYDBSIM);
 /* line 412: */
 /* line 413: */
ZXDBSIM_ok = A68_FALSE;
} 
 /* line 414: */
 /* line 415: */
YXDBSIM_p = (*(&(YXDBSIM_p->Rest)));
}
 /* line 416: */
 /* line 417: */
if ( ZXDBSIM_ok )
{ 
(*Rep) = A_VTRIM(EYDBSIM,((*Rep)),A_VTSCRIPT(&(EYDBSIM.upb),((*Rep)).upb,2,((*Rep)).upb));
 /* line 418: */
 /* line 419: */
FYDBSIM.Type = TXDBSIM_e;
FYDBSIM.Tag = VXDBSIM_val;
 /* line 420: */
FYDBSIM.Assoc = (*A_CALLPROC(NL(ZVDBSIM_decodesignal),(Rep, (*(&(YXDBSIM_p->T)))),(Rep, (*(&(YXDBSIM_p->T))),(NL(ZVDBSIM_decodesignal)).nonlocals)));
 /* line 422: */
GYDBSIM = A_HEAP(A68_142 ) ;
(*GYDBSIM) = FYDBSIM ;
IYDBSIM = A_HEAP(A68_143 ) ;
(*IYDBSIM) = A_UNITE(HYDBSIM,mode5,5,GYDBSIM) ;
OXDBSIM = IYDBSIM;
} 
else
{ 
 /* line 423: */
 /* line 424: */
 /* line 425: */
OXDBSIM = (A68_143 *)A68_NIL;
} 
} 
} 
break;
case 2: /* REF STRUCT(REF MODE26,INT,INT)  */
JYDBSIM_i = (SXDBSIM.data.mode2);
 /* line 426: */
 /* line 427: */
{ 
KYDBSIM = 2 ;
LYDBSIM_val = (*(&A_VINDEX((*Rep),KYDBSIM)));
 /* line 428: */
MYDBSIM = (LYDBSIM_val<(*(&(JYDBSIM_i->Lwb))));
if ( ! MYDBSIM )
{MYDBSIM = (LYDBSIM_val>(*(&(JYDBSIM_i->Upb))));
}
 /* line 429: */
if ( MYDBSIM )
{ 
 /* line 430: */
OQDBSIM_epi_notify(LQDBSIM_m_epi_s_bad_signal, OYDBSIM);
 /* line 431: */
 /* line 432: */
 /* line 433: */
OXDBSIM = (A68_143 *)A68_NIL;
} 
else
{ 
(*Rep) = A_VTRIM(PYDBSIM,((*Rep)),A_VTSCRIPT(&(PYDBSIM.upb),((*Rep)).upb,3,((*Rep)).upb));
 /* line 434: */
QYDBSIM.Type = JYDBSIM_i;
 /* line 435: */
QYDBSIM.Value = LYDBSIM_val;
 /* line 436: */
 /* line 437: */
RYDBSIM = A_HEAP(A68_139 ) ;
(*RYDBSIM) = QYDBSIM ;
TYDBSIM = A_HEAP(A68_143 ) ;
(*TYDBSIM) = A_UNITE(SYDBSIM,mode2,2,RYDBSIM) ;
OXDBSIM = TYDBSIM;
} 
} 
break;
case 3: /* REF STRUCT(REF MODE26,REF MODE26)  */
UYDBSIM_c = (SXDBSIM.data.mode3);
 /* line 438: */
 /* line 439: */
{ 
VYDBSIM = 1 ;
WYDBSIM_val = (*(&A_VINDEX((*Rep),VYDBSIM)));
 /* line 440: */
XYDBSIM_charlist = (*(&(UYDBSIM_c->Char)));
 /* line 441: */
YYDBSIM = (WYDBSIM_val<1);
if ( ! YYDBSIM )
{YYDBSIM = (WYDBSIM_val>XYDBSIM_charlist.upb);
}
 /* line 442: */
if ( YYDBSIM )
{ 
 /* line 443: */
OQDBSIM_epi_notify(LQDBSIM_m_epi_s_bad_signal, AZDBSIM);
 /* line 444: */
 /* line 445: */
 /* line 446: */
OXDBSIM = (A68_143 *)A68_NIL;
} 
else
{ 
(*Rep) = A_VTRIM(BZDBSIM,((*Rep)),A_VTSCRIPT(&(BZDBSIM.upb),((*Rep)).upb,2,((*Rep)).upb));
 /* line 447: */
CZDBSIM.Type = UYDBSIM_c;
 /* line 448: */
CZDBSIM.Value = (*(&A_VINDEX(XYDBSIM_charlist,WYDBSIM_val)));
 /* line 449: */
 /* line 450: */
DZDBSIM = A_HEAP(A68_140 ) ;
(*DZDBSIM) = CZDBSIM ;
FZDBSIM = A_HEAP(A68_143 ) ;
(*FZDBSIM) = A_UNITE(EZDBSIM,mode3,3,DZDBSIM) ;
OXDBSIM = FZDBSIM;
} 
} 
break;
case 4: /* REF STRUCT(INT,MODE131)  */
GZDBSIM_r = (SXDBSIM.data.mode4);
 /* line 451: */
 /* line 452: */
{ 
HZDBSIM_svst = A_CALLPROC(FWDBSIM_decoderow,(Rep, (*GZDBSIM_r)),(Rep, (*GZDBSIM_r),(FWDBSIM_decoderow).nonlocals));
 /* line 453: */
if ( (HZDBSIM_svst==DTAASIM_nilsvst) )
{ 
OXDBSIM = (A68_143 *)A68_NIL;
} 
else
{ 
 /* line 454: */
 /* line 455: */
JZDBSIM = A_HEAP(A68_143 ) ;
(*JZDBSIM) = A_UNITE(IZDBSIM,mode6,6,HZDBSIM_svst) ;
OXDBSIM = JZDBSIM;
} 
} 
break;
case 5: /* REF STRUCT(INT,MODE128)  */
KZDBSIM_s = (SXDBSIM.data.mode5);
 /* line 456: */
 /* line 457: */
{ 
A_CLOSURE( MZDBSIM_generator, NZDBSIM_generator, OZDBSIM_generator );
(( OZDBSIM_generator * ) ( MZDBSIM_generator.nonlocals )) -> KZDBSIM_s = KZDBSIM_s;
A_CALLPROC(MZDBSIM_generator,(A68_FALSE, &RZDBSIM),(A68_FALSE, &RZDBSIM,(MZDBSIM_generator).nonlocals));
SZDBSIM_value = RZDBSIM;
 /* line 458: */
TZDBSIM_charlist = (*(&((&(KZDBSIM_s->T))->Char)));
 /* line 459: */
UZDBSIM_ok = A68_TRUE;
 /* line 460: */
WZDBSIM = (*(&(KZDBSIM_s->No)));
for ( VZDBSIM_i = 1;
VZDBSIM_i <= WZDBSIM;
VZDBSIM_i += 1 )
{ 
 /* line 461: */
if ( !(UZDBSIM_ok) ) break;
XZDBSIM_val = (*(&A_VINDEX((*Rep),VZDBSIM_i)));
 /* line 462: */
YZDBSIM = (XZDBSIM_val<1);
if ( ! YZDBSIM )
{YZDBSIM = (XZDBSIM_val>TZDBSIM_charlist.upb);
}
 /* line 463: */
if ( YZDBSIM )
{ 
 /* line 464: */
OQDBSIM_epi_notify(LQDBSIM_m_epi_s_bad_signal, AAEBSIM);
 /* line 465: */
 /* line 466: */
UZDBSIM_ok = A68_FALSE;
} 
 /* line 467: */
 /* line 468: */
BAEBSIM = (&A_VINDEX(SZDBSIM_value,VZDBSIM_i)) ;
(*BAEBSIM) = (*(&A_VINDEX(TZDBSIM_charlist,XZDBSIM_val)));
}
 /* line 469: */
 /* line 470: */
if ( UZDBSIM_ok )
{ 
(*Rep) = A_VTRIM(CAEBSIM,((*Rep)),A_VTSCRIPT(&(CAEBSIM.upb),((*Rep)).upb,((*(&(KZDBSIM_s->No)))+1),((*Rep)).upb));
 /* line 471: */
DAEBSIM.Type = KZDBSIM_s;
 /* line 472: */
DAEBSIM.Value = SZDBSIM_value;
 /* line 474: */
EAEBSIM = A_HEAP(A68_141 ) ;
(*EAEBSIM) = DAEBSIM ;
GAEBSIM = A_HEAP(A68_143 ) ;
(*GAEBSIM) = A_UNITE(FAEBSIM,mode4,4,EAEBSIM) ;
OXDBSIM = GAEBSIM;
} 
else
{ 
 /* line 475: */
 /* line 476: */
OXDBSIM = (A68_143 *)A68_NIL;
} 
} 
break;
case 6: /* REF STRUCT(MODE131,MODE131)  */
HAEBSIM_f = (SXDBSIM.data.mode6);
 /* line 477: */
 /* line 478: */
{ 
IAEBSIM_from = A_CALLPROC(NL(ZVDBSIM_decodesignal),(Rep, (*(&(HAEBSIM_f->From)))),(Rep, (*(&(HAEBSIM_f->From))),(NL(ZVDBSIM_decodesignal)).nonlocals));
 /* line 479: */
JAEBSIM_to = A_CALLPROC(NL(ZVDBSIM_decodesignal),(Rep, (*(&(HAEBSIM_f->To)))),(Rep, (*(&(HAEBSIM_f->To))),(NL(ZVDBSIM_decodesignal)).nonlocals));
 /* line 480: */
KAEBSIM = (IAEBSIM_from==(A68_143 *)A68_NIL);
if ( ! KAEBSIM )
{ /* line 481: */
KAEBSIM = (JAEBSIM_to==(A68_143 *)A68_NIL);
}
 /* line 482: */
if ( KAEBSIM )
{ 
OXDBSIM = (A68_143 *)A68_NIL;
} 
else
{ 
LAEBSIM.From = (*IAEBSIM_from);
 /* line 483: */
LAEBSIM.To = (*JAEBSIM_to);
 /* line 484: */
 /* line 485: */
MAEBSIM = A_HEAP(A68_145 ) ;
(*MAEBSIM) = LAEBSIM ;
OAEBSIM = A_HEAP(A68_143 ) ;
(*OAEBSIM) = A_UNITE(NAEBSIM,mode7,7,MAEBSIM) ;
OXDBSIM = OAEBSIM;
} 
} 
break;
case 7: /* REF STRUCT(MODE131,REF MODE134)  */
PAEBSIM_s = (SXDBSIM.data.mode7);
 /* line 486: */
 /* line 487: */
{ 
QAEBSIM_svst = A_CALLPROC(TWDBSIM_decodestructure,(Rep, PAEBSIM_s),(Rep, PAEBSIM_s,(TWDBSIM_decodestructure).nonlocals));
 /* line 488: */
if ( (QAEBSIM_svst==DTAASIM_nilsvst) )
{ 
OXDBSIM = (A68_143 *)A68_NIL;
} 
else
{ 
 /* line 489: */
 /* line 490: */
SAEBSIM = A_HEAP(A68_143 ) ;
(*SAEBSIM) = A_UNITE(RAEBSIM,mode6,6,QAEBSIM_svst) ;
OXDBSIM = SAEBSIM;
} 
} 
break;
case 9: /* STRUCT(INT)  */
TAEBSIM_v = (SXDBSIM.data.mode9);
 /* line 491: */
UAEBSIM = A_HEAP(A68_143 ) ;
(*UAEBSIM) = GTAASIM_nullsvalue ;
OXDBSIM = UAEBSIM;
break;
case 8: /* STRUCT(INT)  */
VAEBSIM_v = (SXDBSIM.data.mode8);
 /* line 492: */
 /* line 493: */
 /* line 494: */
WAEBSIM = A_HEAP(A68_143 ) ;
(*WAEBSIM) = JTAASIM_voidsvalue ;
OXDBSIM = WAEBSIM;
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
} 
A_PROC_EXIT(decodesignal);
return( OXDBSIM );
} 
#undef NL

A_STATIC A68_VOID  OQDBSIM_epi_notify(A68_BITS  Dummy, A68_VC  Error)
{ 
A68_296  PQDBSIM;  /* collateral clause result */
A68_60  SQDBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  TQDBSIM;  /* avoid structure result */
A68_60  UQDBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(epi_notify);
 /* line 174: */
PQDBSIM.data[0] = RQDBSIM;
PQDBSIM.data[1] = Error;
JBAAOSI_concat( A_HISVEC(SQDBSIM,PQDBSIM,2,A68_VC ), &TQDBSIM );
A_CALLPROC(ZLBAOSI_global_msg,(UHAAOSI_fatal, A_HVEC(UQDBSIM,TQDBSIM,A68_VC )),(UHAAOSI_fatal, A_HVEC(UQDBSIM,TQDBSIM,A68_VC ),(ZLBAOSI_global_msg).nonlocals));
A_PROC_EXIT(epi_notify);
return;
} 
#undef NL

A_STATIC A68_VOID  ZQDBSIM_make_epi_type(A68_BITS  Class, A68_292  Type, A68_293  *ReturnedValue)
{ 
A68_293  ARDBSIM_epi_type;
A68_BITS * BRDBSIM;  /* YIELD */
A68_BITS * CRDBSIM;  /* YIELD */
A68_292 * DRDBSIM;  /* YIELD */
A68_293  ERDBSIM;  /* clause result */
A_PROC_ENTRY(make_epi_type);
 /* line 185: */
 /* line 186: */
{ 
 /* line 187: */
BRDBSIM = (&((&ARDBSIM_epi_type)->Ident)) ;
(*BRDBSIM) = WQDBSIM_m_epi_o_type;
 /* line 188: */
CRDBSIM = (&((&ARDBSIM_epi_type)->Class)) ;
(*CRDBSIM) = Class;
 /* line 189: */
DRDBSIM = (&((&ARDBSIM_epi_type)->Type)) ;
(*DRDBSIM) = Type;
 /* line 190: */
 /* line 191: */
ERDBSIM = ARDBSIM_epi_type;
} 
A_PROC_EXIT(make_epi_type);
*ReturnedValue = (ERDBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  GRDBSIM_generator(A68_BOOL  FRDBSIM_anonymous, A68_35  *ReturnedValue)
{ 
A68_35  HRDBSIM;  /* clause result */
A68_35  IRDBSIM;  /* OPERATORS - dynamic generator */
{ 
IRDBSIM.upb = 0 ;
( FRDBSIM_anonymous? A_VLOC(A68_INT ,IRDBSIM): A_VHEAP(A68_INT ,IRDBSIM) );
HRDBSIM = IRDBSIM;
} 
*ReturnedValue = (HRDBSIM);
return;
} 
#undef NL

A_STATIC A68_INT  NRDBSIM_max(A68_INT  A, A68_INT  B)
{ 
A68_INT  ORDBSIM;  /* clause result */
A_PROC_ENTRY(max);
if ( (A>B) )
{ 
ORDBSIM = A;
} 
else
{ 
ORDBSIM = B;
} 
A_PROC_EXIT(max);
return( ORDBSIM );
} 
#undef NL

A_STATIC A68_INT  QRDBSIM_size_epi_query_signal(A68_131  Type)
{ 
A68_131  RRDBSIM;  /* united object - for case conformity */
A68_126  SRDBSIM_n;
A68_INT  TRDBSIM;  /* clause result */
A68_125  URDBSIM_v;
A68_127 * VRDBSIM_i;
A68_128 * WRDBSIM_c;
A68_129 * XRDBSIM_s;
A68_130 * YRDBSIM_e;
A68_134 * ZRDBSIM_s;
A68_131  ASDBSIM;  /* OPERATORS - mode -> union mode */
A68_134 * BSDBSIM;  /* YIELD */
A68_132 * CSDBSIM_r;
A68_133 * DSDBSIM_f;
A_PROC_ENTRY(size_epi_query_signal);
 /* line 241: */
 /* line 242: */
RRDBSIM = Type ;
switch ( RRDBSIM.mode )
{ 
case 9: /* STRUCT(INT)  */
SRDBSIM_n = (RRDBSIM.data.mode9);
 /* line 243: */
TRDBSIM = 0;
break;
case 8: /* STRUCT(INT)  */
URDBSIM_v = (RRDBSIM.data.mode8);
 /* line 244: */
TRDBSIM = 0;
break;
case 2: /* REF STRUCT(REF MODE26,INT,INT)  */
VRDBSIM_i = (RRDBSIM.data.mode2);
 /* line 245: */
TRDBSIM = 2;
break;
case 3: /* REF STRUCT(REF MODE26,REF MODE26)  */
WRDBSIM_c = (RRDBSIM.data.mode3);
 /* line 246: */
TRDBSIM = 1;
break;
case 5: /* REF STRUCT(INT,MODE128)  */
XRDBSIM_s = (RRDBSIM.data.mode5);
 /* line 247: */
TRDBSIM = (*(&(XRDBSIM_s->No)));
break;
case 1: /* REF STRUCT(REF MODE26,MODE131,REF MODE130)  */
YRDBSIM_e = (RRDBSIM.data.mode1);
 /* line 248: */
TRDBSIM = 1;
break;
case 7: /* REF STRUCT(MODE131,REF MODE134)  */
ZRDBSIM_s = (RRDBSIM.data.mode7);
 /* line 249: */
 /* line 250: */
if ( (ZRDBSIM_s==WSAASIM_nilsst) )
{ 
TRDBSIM = 0;
} 
else
{ 
 /* line 251: */
 /* line 252: */
BSDBSIM = (*(&(ZRDBSIM_s->Rest))) ;
TRDBSIM = (QRDBSIM_size_epi_query_signal((*(&(ZRDBSIM_s->T))))+QRDBSIM_size_epi_query_signal(A_UNITE(ASDBSIM,mode7,7,BSDBSIM)));
} 
break;
case 4: /* REF STRUCT(INT,MODE131)  */
CSDBSIM_r = (RRDBSIM.data.mode4);
 /* line 253: */
TRDBSIM = ((*(&(CSDBSIM_r->No)))*QRDBSIM_size_epi_query_signal((*(&(CSDBSIM_r->Type)))));
break;
case 6: /* REF STRUCT(MODE131,MODE131)  */
DSDBSIM_f = (RRDBSIM.data.mode6);
 /* line 254: */
 /* line 255: */
TRDBSIM = (QRDBSIM_size_epi_query_signal((*(&(DSDBSIM_f->From))))+QRDBSIM_size_epi_query_signal((*(&(DSDBSIM_f->To)))));
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(size_epi_query_signal);
return( TRDBSIM );
} 
#undef NL

A_STATIC A68_VOID  ESDBSIM_makevoidepitype(A68_291  *ReturnedValue)
{ 
A68_291  FSDBSIM_vet;
A68_BITS * GSDBSIM;  /* YIELD */
A68_291  HSDBSIM;  /* clause result */
A_PROC_ENTRY(makevoidepitype);
{ 
GSDBSIM = (&((&FSDBSIM_vet)->Void)) ;
(*GSDBSIM) = (A68_BITS )1;
HSDBSIM = FSDBSIM_vet;
} 
A_PROC_EXIT(makevoidepitype);
*ReturnedValue = (HSDBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  JSDBSIM_sim_epi_type(A68_131  Type, A68_293  *ReturnedValue)
{ 
A68_305  BUDBSIM_encode_epi_type;   /* proc value of non-global proc */
A68_293  QVDBSIM;  /* clause result */
A68_292  RVDBSIM;  /* avoid structure result */
A68_293  SVDBSIM;  /* avoid structure result */
A_PROC_ENTRY(sim_epi_type);
 /* line 261: */
 /* line 263: */
{ 
 /* line 276: */
 /* line 290: */
 /* line 304: */
A_CLOSURE( BUDBSIM_encode_epi_type, CUDBSIM_encode_epi_type, DUDBSIM_encode_epi_type );
 /* line 320: */
 /* line 321: */
A_CALLPROC(BUDBSIM_encode_epi_type,(Type, &RVDBSIM),(Type, &RVDBSIM,(BUDBSIM_encode_epi_type).nonlocals));
ZQDBSIM_make_epi_type( MSDBSIM_classify_epi_type(Type), RVDBSIM, &SVDBSIM );
QVDBSIM = SVDBSIM;
} 
A_PROC_EXIT(sim_epi_type);
*ReturnedValue = (QVDBSIM);
return;
} 
#undef NL

A_STATIC A68_143 * VVDBSIM_epi_sim_signal(A68_279  Signal, A68_131  Type)
{ 
A68_307  ZVDBSIM_decodesignal;   /* proc value of non-global proc */
A68_35  XAEBSIM_rep;
A68_143 * YAEBSIM_ans;
A68_143 * BBEBSIM;  /* clause result */
A_PROC_ENTRY(epi_sim_signal);
 /* line 338: */
 /* line 340: */
{ 
A_CLOSURE( ZVDBSIM_decodesignal, AWDBSIM_decodesignal, BWDBSIM_decodesignal );
(( BWDBSIM_decodesignal * ) ( ZVDBSIM_decodesignal.nonlocals )) -> ZVDBSIM_decodesignal = ZVDBSIM_decodesignal;
 /* line 496: */
XAEBSIM_rep = Signal.Value;
 /* line 497: */
YAEBSIM_ans = A_CALLPROC(ZVDBSIM_decodesignal,((&XAEBSIM_rep), Type),((&XAEBSIM_rep), Type,(ZVDBSIM_decodesignal).nonlocals));
 /* line 498: */
 /* line 499: */
if ( (XAEBSIM_rep.upb!=0) )
{ 
 /* line 500: */
OQDBSIM_epi_notify(LQDBSIM_m_epi_s_bad_signal, ABEBSIM);
 /* line 501: */
 /* line 502: */
 /* line 504: */
BBEBSIM = (A68_143 *)A68_NIL;
} 
else
{ 
 /* line 505: */
BBEBSIM = YAEBSIM_ans;
} 
} 
A_PROC_EXIT(epi_sim_signal);
return( BBEBSIM );
} 
#undef NL

A_STATIC A68_293 * HBEBSIM_aci_to_epi_type(A68_INT  Aci_type)
{ 
A68_131  IBEBSIM;  /* avoid structure result */
A68_131  JBEBSIM_type;
A68_131  KBEBSIM;  /* united object - for case conformity */
A68_293  LBEBSIM;  /* avoid structure result */
A68_293  MBEBSIM;  /* avoid structure result */
A68_293  NBEBSIM;  /* avoid structure result */
A68_293  OBEBSIM;  /* avoid structure result */
A68_293  PBEBSIM;  /* avoid structure result */
A68_293  QBEBSIM;  /* avoid structure result */
A68_293  RBEBSIM;  /* avoid structure result */
A68_BITS * SBEBSIM;  /* YIELD */
A68_293 * TBEBSIM;  /* clause result */
A_PROC_ENTRY(aci_to_epi_type);
 /* line 538: */
 /* line 540: */
{ 
VGCASIM_lookuptype( Aci_type, &IBEBSIM );
JBEBSIM_type = IBEBSIM;
 /* line 542: */
 /* line 543: */
KBEBSIM = JBEBSIM_type ;
switch ( KBEBSIM.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,MODE131,REF MODE130)  */
case 2: /* REF STRUCT(REF MODE26,INT,INT)  */
case 3: /* REF STRUCT(REF MODE26,REF MODE26)  */
 /* line 544: */
JSDBSIM_sim_epi_type( JBEBSIM_type, &LBEBSIM );
FBEBSIM_result = LBEBSIM;
break;
case 4: /* REF STRUCT(INT,MODE131)  */
 /* line 545: */
JSDBSIM_sim_epi_type( JBEBSIM_type, &MBEBSIM );
FBEBSIM_result = MBEBSIM;
break;
case 5: /* REF STRUCT(INT,MODE128)  */
 /* line 546: */
JSDBSIM_sim_epi_type( JBEBSIM_type, &NBEBSIM );
FBEBSIM_result = NBEBSIM;
break;
case 6: /* REF STRUCT(MODE131,MODE131)  */
 /* line 547: */
JSDBSIM_sim_epi_type( JBEBSIM_type, &OBEBSIM );
FBEBSIM_result = OBEBSIM;
break;
case 7: /* REF STRUCT(MODE131,REF MODE134)  */
 /* line 548: */
JSDBSIM_sim_epi_type( JBEBSIM_type, &PBEBSIM );
FBEBSIM_result = PBEBSIM;
break;
case 9: /* STRUCT(INT)  */
 /* line 549: */
JSDBSIM_sim_epi_type( JBEBSIM_type, &QBEBSIM );
FBEBSIM_result = QBEBSIM;
break;
case 8: /* STRUCT(INT)  */
 /* line 550: */
 /* line 551: */
JSDBSIM_sim_epi_type( JBEBSIM_type, &RBEBSIM );
FBEBSIM_result = RBEBSIM;
break;
default: 
 /* line 552: */
SBEBSIM = (&((&FBEBSIM_result)->Ident)) ;
(*SBEBSIM) = VQDBSIM_m_epi_o_null_type;
break;
} 
 /* line 554: */
 /* line 555: */
TBEBSIM = (&FBEBSIM_result);
} 
A_PROC_EXIT(aci_to_epi_type);
return( TBEBSIM );
} 
#undef NL

A_STATIC A68_INT  VBEBSIM_get_output_size(A68_INT  Tableindex)
{ 
A68_147  WBEBSIM;  /* avoid structure result */
A68_147  XBEBSIM_output;
A68_INT  ACEBSIM;  /* clause result */
A68_148  BCEBSIM;  /* OPERATORS - simple index */
A68_INT  CCEBSIM;  /* YIELD */
A_PROC_ENTRY(get_output_size);
 /* line 566: */
 /* line 568: */
{ 
MWCASIM_lookupoutputs( Tableindex, &WBEBSIM );
XBEBSIM_output = WBEBSIM;
 /* line 570: */
 /* line 571: */
if ( (XBEBSIM_output.Blocks.upb!=1) )
{ 
NKDAOST_sysfault(ZBEBSIM);
 /* line 572: */
 /* line 573: */
 /* line 574: */
ACEBSIM = 0;
} 
else
{ 
 /* line 575: */
 /* line 577: */
BCEBSIM = XBEBSIM_output.Blocks ;
CCEBSIM = 1 ;
ACEBSIM = (*(&((&A_VINDEX(BCEBSIM,CCEBSIM))->Size)));
} 
} 
A_PROC_EXIT(get_output_size);
return( ACEBSIM );
} 
#undef NL

A_STATIC A68_293 * FCEBSIM_get_epi_input_type(A68_INT  Tableindex, A68_INT  Nthinput)
{ 
A68_INT  JCEBSIM_count;
A68_134 * KCEBSIM_rawtypelist;
A68_151  LCEBSIM;  /* avoid structure result */
A68_151  MCEBSIM_thisfunction;
A68_152  NCEBSIM_rawinputrow;
A68_INT  OCEBSIM_rawnoinputs;
A68_134 ** PCEBSIM_listhead;
A68_150 * QCEBSIM_binding;
A68_152  RCEBSIM;  /* OPERATORS - trim index */
A68_152  SCEBSIM;  /* forall yield */
A68_INT  TCEBSIM;  /* forall loop counter */
A68_156  UCEBSIM;  /* avoid structure result */
A68_156  VCEBSIM;  /* united object - for case conformity */
A68_147  WCEBSIM_w;
A68_134  XCEBSIM;  /* collateral clause result */
A68_131  YCEBSIM;  /* united object - for case conformity */
A68_133 * ZCEBSIM_fn;
A68_134 * ADEBSIM;  /* YIELD */
A68_131  BDEBSIM;  /* OPERATORS - mode -> union mode */
A68_134 * CDEBSIM_typelist;
A68_293  DDEBSIM;  /* avoid structure result */
A68_293 * EDEBSIM;  /* clause result */
A68_BITS * FDEBSIM;  /* YIELD */
A_PROC_ENTRY(get_epi_input_type);
 /* line 594: */
 /* line 596: */
{ 
JCEBSIM_count = 1;
 /* line 598: */
 /* line 604: */
 /* line 606: */
if ( (Tableindex!=DBEBSIM_lasttableindex) )
{ 
GSCASIM_rawlookupfunction( Tableindex, &LCEBSIM );
MCEBSIM_thisfunction = LCEBSIM;
 /* line 607: */
NCEBSIM_rawinputrow = MCEBSIM_thisfunction.Body;
 /* line 608: */
OCEBSIM_rawnoinputs = MCEBSIM_thisfunction.Noinputs;
 /* line 612: */
PCEBSIM_listhead = (&KCEBSIM_rawtypelist);
 /* line 617: */
SCEBSIM = A_VTRIM(RCEBSIM,(NCEBSIM_rawinputrow),A_VTSCRIPT(&(RCEBSIM.upb),(NCEBSIM_rawinputrow).upb,1,OCEBSIM_rawnoinputs)) ;
TCEBSIM = SCEBSIM.upb -1;
QCEBSIM_binding = SCEBSIM.data;
for (;TCEBSIM-- >= 0;
(QCEBSIM_binding++
) )
{
 /* line 619: */
 /* line 621: */
ITCASIM_rawlookuprnode( (*(&(QCEBSIM_binding->Node))), &UCEBSIM );
VCEBSIM = UCEBSIM ;
switch ( VCEBSIM.mode )
{ 
case 2: /* STRUCT(MODE131,REF MODE148)  */
WCEBSIM_w = (VCEBSIM.data.mode2);
 /* line 622: */
{ 
 /* line 623: */
{ 
 /* line 624: */
YCEBSIM = WCEBSIM_w.Type ;
switch ( YCEBSIM.mode )
{ 
case 6: /* REF STRUCT(MODE131,MODE131)  */
ZCEBSIM_fn = (YCEBSIM.data.mode6);
 /* line 625: */
 /* line 626: */
XCEBSIM.T = (*(&(ZCEBSIM_fn->To)));
break;
default: 
 /* line 627: */
XCEBSIM.T = WCEBSIM_w.Type;
break;
} 
} 
XCEBSIM.Rest = (A68_134 *)A68_NIL;
ADEBSIM = A_HEAP(A68_134 ) ;
(*ADEBSIM) = XCEBSIM ;
(*PCEBSIM_listhead) = ADEBSIM;
 /* line 628: */
 /* line 629: */
 /* line 631: */
PCEBSIM_listhead = (&((*PCEBSIM_listhead)->Rest));
} 
break;
default: 
 /* line 633: */
 /* line 635: */
goto ICEBSIM_error;
break;
} 
}
 /* line 637: */
CBEBSIM_savedtypelist = ABOASIM_flattentype(A_UNITE(BDEBSIM,mode7,7,KCEBSIM_rawtypelist));
 /* line 638: */
 /* line 640: */
DBEBSIM_lasttableindex = Tableindex;
} 
 /* line 645: */
CDEBSIM_typelist = CBEBSIM_savedtypelist;
 /* line 647: */
for ( ;; )
{ 
 /* line 649: */
if ( !(((CDEBSIM_typelist!=(A68_134 *)A68_NIL)&(JCEBSIM_count<Nthinput))) ) break;
CDEBSIM_typelist = (*(&(CDEBSIM_typelist->Rest)));
 /* line 650: */
 /* line 652: */
JCEBSIM_count+=1;
}
 /* line 654: */
 /* line 655: */
if ( (JCEBSIM_count==Nthinput) )
{ 
 /* line 656: */
 /* line 657: */
JSDBSIM_sim_epi_type( (*(&(CDEBSIM_typelist->T))), &DDEBSIM );
FBEBSIM_result = DDEBSIM;
} 
else
{ 
 /* line 658: */
goto ICEBSIM_error;
} 
 /* line 660: */
 /* line 662: */
 /* line 664: */
EDEBSIM = (&FBEBSIM_result);
goto GCEBSIM;
ICEBSIM_error:
FDEBSIM = (&((&FBEBSIM_result)->Ident)) ;
(*FDEBSIM) = VQDBSIM_m_epi_o_null_type;
 /* line 666: */
 /* line 668: */
EDEBSIM = (&FBEBSIM_result);
GCEBSIM: ;
} 
A_PROC_EXIT(get_epi_input_type);
return( EDEBSIM );
} 
#undef NL

A_STATIC A68_293 * HDEBSIM_get_epi_output_type(A68_INT  Tableindex)
{ 
A68_147  IDEBSIM;  /* avoid structure result */
A68_147  JDEBSIM_output;
A68_293 * KDEBSIM;  /* clause result */
A68_293  LDEBSIM;  /* avoid structure result */
A_PROC_ENTRY(get_epi_output_type);
 /* line 680: */
 /* line 681: */
{ 
MWCASIM_lookupoutputs( Tableindex, &IDEBSIM );
JDEBSIM_output = IDEBSIM;
 /* line 682: */
 /* line 683: */
JSDBSIM_sim_epi_type( JDEBSIM_output.Type, &LDEBSIM );
FBEBSIM_result = LDEBSIM ;
KDEBSIM = (&FBEBSIM_result);
} 
A_PROC_EXIT(get_epi_output_type);
return( KDEBSIM );
} 
#undef NL

A_STATIC A68_INT  ODEBSIM_get_input_size(A68_INT  Tableindex, A68_INT  N)
{ 
A68_35  PDEBSIM;  /* avoid structure result */
A68_35  QDEBSIM_sizes;
A68_INT  RDEBSIM;  /* clause result */
A_PROC_ENTRY(get_input_size);
 /* line 695: */
 /* line 697: */
{ 
QUCASIM_lookupinputsizes( Tableindex, &PDEBSIM );
QDEBSIM_sizes = PDEBSIM;
 /* line 699: */
 /* line 701: */
if ( (QDEBSIM_sizes.upb<N) )
{ 
 /* line 702: */
RDEBSIM = 0;
} 
else
{ 
 /* line 703: */
 /* line 705: */
RDEBSIM = (*(&A_VINDEX(QDEBSIM_sizes,N)));
} 
} 
A_PROC_EXIT(get_input_size);
return( RDEBSIM );
} 
#undef NL

A_STATIC A68_VOID  UDEBSIM_output(A68_31 * Buffer, A68_INT  Length)
{ 
A68_319  VDEBSIM;  /* collateral clause result */
A68_VC  WDEBSIM;  /* avoid structure result */
A68_66  XDEBSIM;  /* OPERATORS - mode -> union mode */
A68_66  YDEBSIM;  /* OPERATORS - mode -> union mode */
A68_70  ZDEBSIM;  /* procedure value */
A68_99  AEEBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  BEEBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  CEEBSIM;  /* OPERATORS - trim index */
A68_VC  DEEBSIM;  /* OPERATORS - trim index */
A68_VC  EEEBSIM_buff;
A68_INT  FEEBSIM_null;
A68_INT  GEEBSIM_i;
A68_INT  HEEBSIM;  /* to part of loop */
A68_319  IEEBSIM;  /* collateral clause result */
A68_VC  JEEBSIM;  /* OPERATORS - trim index */
A68_66  KEEBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  LEEBSIM;  /* YIELD */
A68_66  MEEBSIM;  /* OPERATORS - mode -> union mode */
A68_70  NEEBSIM;  /* procedure value */
A68_99  OEEBSIM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(output);
 /* line 721: */
 /* line 723: */
{ 
 /* line 724: */
if ( (Length==0) )
{ 
UDAAOSI_cstringtorvc( Buffer, &WDEBSIM );
VDEBSIM.data[0] = A_UNITE(XDEBSIM,mode7,7,WDEBSIM);
ZDEBSIM.fn.fn_global = LRAAOSL_newline;
ZDEBSIM.nonlocals = A68_NIL;
VDEBSIM.data[1] = A_UNITE(YDEBSIM,mode12,12,ZDEBSIM);
 /* line 725: */
 /* line 726: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(AEEBSIM,VDEBSIM,2,A68_66 ));
} 
else
{ 
CEEBSIM = A_ISVEC(BEEBSIM,Buffer,16000000,A68_CHAR ) ;
EEEBSIM_buff = A_VTRIM(DEEBSIM,(CEEBSIM),A_VTSCRIPT(&(DEEBSIM.upb),(CEEBSIM).upb,1,Length));
 /* line 727: */
FEEBSIM_null = (Length+1);
 /* line 729: */
 /* line 730: */
HEEBSIM = Length;
for ( GEEBSIM_i = 1;
GEEBSIM_i <= HEEBSIM;
GEEBSIM_i += 1 )
{ 
 /* line 731: */
if ( !((FEEBSIM_null==(Length+1))) ) break;
 /* line 732: */
if ( ((*(&A_VINDEX(EEEBSIM_buff,GEEBSIM_i)))=='\000') )
{ 
 /* line 733: */
 /* line 734: */
FEEBSIM_null = GEEBSIM_i;
} 
}
 /* line 736: */
LEEBSIM = A_VTRIM(JEEBSIM,(EEEBSIM_buff),A_VTSCRIPT(&(JEEBSIM.upb),(EEEBSIM_buff).upb,1,(FEEBSIM_null-1))) ;
IEEBSIM.data[0] = A_UNITE(KEEBSIM,mode7,7,LEEBSIM);
NEEBSIM.fn.fn_global = LRAAOSL_newline;
NEEBSIM.nonlocals = A68_NIL;
IEEBSIM.data[1] = A_UNITE(MEEBSIM,mode12,12,NEEBSIM);
 /* line 738: */
 /* line 740: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(OEEBSIM,IEEBSIM,2,A68_66 ));
} 
} 
A_PROC_EXIT(output);
return;
} 
#undef NL

A_STATIC A68_CHAR * REEBSIM_get_encoded_output(A68_279  Outputsignal, A68_INT  Tableindex)
{ 
A68_147  SEEBSIM;  /* avoid structure result */
A68_131  TEEBSIM_outputstype;
A68_143 * UEEBSIM_outputsvalue;
A68_CHAR * VEEBSIM;  /* clause result */
A_PROC_ENTRY(get_encoded_output);
 /* line 753: */
 /* line 755: */
{ 
MWCASIM_lookupoutputs( Tableindex, &SEEBSIM );
TEEBSIM_outputstype = SEEBSIM.Type;
 /* line 757: */
UEEBSIM_outputsvalue = VVDBSIM_epi_sim_signal(Outputsignal, TEEBSIM_outputstype);
 /* line 759: */
 /* line 760: */
if ( (UEEBSIM_outputsvalue!=(A68_143 *)A68_NIL) )
{ 
 /* line 761: */
 /* line 762: */
EBEBSIM_outputbuffer = AEDBSIM_encode((*UEEBSIM_outputsvalue), TEEBSIM_outputstype);
} 
else
{ 
 /* line 763: */
EBEBSIM_outputbuffer = (A68_VC *)A68_NIL;
} 
 /* line 765: */
 /* line 767: */
VEEBSIM = CEAAOSI_vctocharptr((*EBEBSIM_outputbuffer));
} 
A_PROC_EXIT(get_encoded_output);
return( VEEBSIM );
} 
#undef NL

A68_VOID  WEEBSIM_aci_initialise_procs(void)
{ 
A68_315  YEEBSIM;  /* procedure value */
A68_317  ZEEBSIM;  /* procedure value */
A68_315  AFEBSIM;  /* procedure value */
A68_208  BFEBSIM;  /* procedure value */
A68_178  CFEBSIM;  /* procedure value */
A68_318  DFEBSIM;  /* procedure value */
A68_320  EFEBSIM;  /* procedure value */
A_PROC_ENTRY(aci_initialise_procs);
{ 
 /* line 788: */
 /* line 789: */
 /* line 790: */
 /* line 791: */
 /* line 792: */
 /* line 795: */
YEEBSIM.fn.fn_global = HBEBSIM_aci_to_epi_type;
YEEBSIM.nonlocals = A68_NIL;
ZEEBSIM.fn.fn_global = FCEBSIM_get_epi_input_type;
ZEEBSIM.nonlocals = A68_NIL;
AFEBSIM.fn.fn_global = HDEBSIM_get_epi_output_type;
AFEBSIM.nonlocals = A68_NIL;
BFEBSIM.fn.fn_global = ODEBSIM_get_input_size;
BFEBSIM.nonlocals = A68_NIL;
CFEBSIM.fn.fn_global = VBEBSIM_get_output_size;
CFEBSIM.nonlocals = A68_NIL;
DFEBSIM.fn.fn_global = UDEBSIM_output;
DFEBSIM.nonlocals = A68_NIL;
EFEBSIM.fn.fn_global = REEBSIM_get_encoded_output;
EFEBSIM.nonlocals = A68_NIL;
XEEBSIM_c_init(YEEBSIM, ZEEBSIM, AFEBSIM, BFEBSIM, CFEBSIM, DFEBSIM, EFEBSIM);
} 
A_PROC_EXIT(aci_initialise_procs);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void WPDBSIM(void)   /* initialise DECS kealientoolkit */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/kealientoolkit.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/ostools/assoc/mfiles/ioprocs.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","./mfiles/kesymbols.m","./mfiles/kesignals.m","./mfiles/kernel.m","./mfiles/kebasics.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m","/u/model/ella/osif/assoc/mfiles/cif.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_35  KRDBSIM;  /* avoid structure result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
TIGAOST();   /* USE ioprocs */
PCAAOST();   /* USE osinterface */
TCCASIM();   /* USE kesymbols */
NYNASIM();   /* USE kesignals */
XWBBSIM();   /* USE kernel */
JSAASIM();   /* USE kebasics */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
JDAAOSI();   /* USE cif */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/kealientoolkit.a68";
A_config.translation_time = "Tue Apr  4 11:14:12 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "VPDBSIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:14:12 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS kealientoolkit);
UEAALIB_a68config(LGAALIB_configinfo, AQDBSIM);
 /* line 85: */
 /* line 86: */
 /* line 87: */
 /* line 88: */
 /* line 89: */
 /* line 93: */
 /* line 94: */
 /* line 95: */
 /* line 123: */
 /* line 128: */
 /* line 129: */
 /* line 132: */
 /* line 133: */
 /* line 136: */
 /* line 137: */
 /* line 140: */
 /* line 141: */
 /* line 144: */
 /* line 145: */
 /* line 148: */
 /* line 149: */
 /* line 152: */
 /* line 153: */
 /* line 156: */
 /* line 157: */
 /* line 160: */
 /* line 161: */
 /* line 164: */
 /* line 165: */
 /* line 171: */
LQDBSIM_m_epi_s_bad_signal = (A68_BITS )0;
 /* line 173: */
 /* line 176: */
 /* line 177: */
 /* line 180: */
 /* line 181: */
 /* line 184: */
 /* line 233: */
GRDBSIM_generator( A68_TRUE, &KRDBSIM );
JRDBSIM_emptyvi = KRDBSIM;
 /* line 237: */
 /* line 240: */
 /* line 257: */
 /* line 258: */
 /* line 260: */
 /* line 337: */
 /* line 515: */
CBEBSIM_savedtypelist = (A68_134 *)A68_NIL;
 /* line 516: */
 /* line 521: */
 /* line 528: */
 /* line 530: */
 /* line 559: */
 /* line 581: */
 /* line 673: */
 /* line 688: */
 /* line 712: */
 /* line 744: */
 /* line 771: */
 /* line 776: */
 /* line 785: */
 /* line 797: */
A_PROC_EXIT(DECS kealientoolkit);
} 
#undef NL
/* end of translation of ./a68files/kealientoolkit.a68 */
