
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
/* UNAME:VAAASIM */
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

A_PROCEDURE(A68_VOID ,A68t113,(A68_BOOL ,struct A68t46 *),(A68_BOOL ,struct A68t46 *,void *));
typedef struct A68t113  A68_113 ;    /* PROC(BOOL) MODE46 */
A_VECTOR(struct A68t116 ,A68t115);
typedef struct A68t115  A68_115 ;    /* VECTOR [] MODE116 */
struct A68t116{
A68_INT  Number;
A_PAD_INT(PAD_22)
A68_BITS  Class;
A_PAD_BITS(PAD_23)
A68_VC  Text;
};
typedef struct A68t116  A68_116 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t114{
A68_VC  Name;
struct A68t111  Messages;
A68_BOOL * Initialised;
struct A68t115  Setup;
};
typedef struct A68t114  A68_114 ;    /* STRUCT(MODE26,REF MODE111,REF BOOL,MODE115)  */

A_PROCEDURE(A68_VOID ,A68t117,(A68_BOOL ,struct A68t114 *),(A68_BOOL ,struct A68t114 *,void *));
typedef struct A68t117  A68_117 ;    /* PROC(BOOL) MODE114 */
A_VECTOR(A68_VC ,A68t118);
typedef struct A68t118  A68_118 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t119,(struct A68t46 ,struct A68t118 *),(struct A68t46 ,struct A68t118 *,void *));
typedef struct A68t119  A68_119 ;    /* PROC(MODE46) MODE118 */

A_PROCEDURE(A68_VOID ,A68t120,(struct A68t118 ,struct A68t46 *),(struct A68t118 ,struct A68t46 *,void *));
typedef struct A68t120  A68_120 ;    /* PROC(MODE118) MODE46 */
struct A68t122 ;

A_PROCEDURE(A68_BOOL ,A68t121,(struct A68t122 ),(struct A68t122 ,void *));
typedef struct A68t121  A68_121 ;    /* PROC(MODE122) BOOL */
struct A68t122 { A68_INT mode; union {
struct A68t109  mode1;
struct A68t112  mode2;
} data; };
typedef struct A68t122  A68_122 ;    /* UNION(MODE109,MODE112)  */

A_PROCEDURE(A68_INT ,A68t123,(struct A68t109 ),(struct A68t109 ,void *));
typedef struct A68t123  A68_123 ;    /* PROC(MODE109) INT */

A_PROCEDURE(A68_VOID ,A68t124,(A68_INT ,struct A68t114 ,struct A68t109 *),(A68_INT ,struct A68t114 ,struct A68t109 *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(INT,MODE114) MODE109 */

A_PROCEDURE(A68_BOOL ,A68t125,(struct A68t109 ,struct A68t114 ),(struct A68t109 ,struct A68t114 ,void *));
typedef struct A68t125  A68_125 ;    /* PROC(MODE109,MODE114) BOOL */

A_PROCEDURE(A68_VOID ,A68t126,(struct A68t109 ,struct A68t46 ,struct A68t112 *),(struct A68t109 ,struct A68t46 ,struct A68t112 *,void *));
typedef struct A68t126  A68_126 ;    /* PROC(MODE109,MODE46) MODE112 */
A_VECTOR(struct A68t129 ,A68t128);
typedef struct A68t128  A68_128 ;    /* VECTOR [] MODE129 */
struct A68t127{
A68_BITS  Type;
A_PAD_BITS(PAD_24)
struct A68t128  Elements;
};
typedef struct A68t127  A68_127 ;    /* STRUCT(BITS,REF MODE128)  */
struct A68t129 { A68_INT mode; union {
A68_INT * mode1;
struct A68t127  mode2;
} data; };
typedef struct A68t129  A68_129 ;    /* UNION(REF INT,MODE127)  */
struct A68t130{
A68_INT  Sort;
A_PAD_INT(PAD_25)
A68_VC  Value;
};
typedef struct A68t130  A68_130 ;    /* STRUCT(INT,REF MODE26)  */
A_VECTOR(struct A68t130 ,A68t131);
typedef struct A68t131  A68_131 ;    /* VECTOR [] MODE130 */
A_VECTOR(struct A68t132 ,A68t134);
typedef struct A68t134  A68_134 ;    /* VECTOR [] MODE132 */
struct A68t133{
A68_INT  Choice;
A_PAD_INT(PAD_26)
struct A68t134  Params;
};
typedef struct A68t133  A68_133 ;    /* STRUCT(INT,REF MODE134)  */
struct A68t132 { A68_INT mode; union {
struct A68t133  mode1;
struct A68t130  mode2;
} data; };
typedef struct A68t132  A68_132 ;    /* UNION(MODE133,MODE130)  */

A_PROCEDURE(A68_VOID ,A68t136,(struct A68t108 ,A68_VC *),(struct A68t108 ,A68_VC *,void *));
typedef struct A68t136  A68_136 ;    /* PROC(MODE108) REF MODE26 */
struct A68t135 { A68_INT mode; union {
struct A68t136  mode1;
A68_INT * mode2;
struct A68t127  mode3;
} data; };
typedef struct A68t135  A68_135 ;    /* UNION(MODE136,REF INT,MODE127)  */
struct A68t137{
A68_INT * Sort;
struct A68t135  Reader;
A68_VC  Description;
A68_VC  Help;
};
typedef struct A68t137  A68_137 ;    /* STRUCT(REF INT,MODE135,REF MODE26,REF MODE26)  */
struct A68t138{
struct A68t137  Rule;
struct A68t138 * Rest;
};
typedef struct A68t138  A68_138 ;    /* STRUCT(MODE137,REF MODE138)  */

A_PROCEDURE(A68_BOOL ,A68t139,(struct A68t127 ),(struct A68t127 ,void *));
typedef struct A68t139  A68_139 ;    /* PROC(MODE127) BOOL */

A_PROCEDURE(A68_VOID ,A68t140,(struct A68t128 ,struct A68t127 *),(struct A68t128 ,struct A68t127 *,void *));
typedef struct A68t140  A68_140 ;    /* PROC(MODE128) MODE127 */

A_PROCEDURE(A68_VOID ,A68t141,(struct A68t129 ,struct A68t127 *),(struct A68t129 ,struct A68t127 *,void *));
typedef struct A68t141  A68_141 ;    /* PROC(MODE129) MODE127 */
struct A68t143 ;

A_PROCEDURE(A68_VOID ,A68t142,(struct A68t129 ,struct A68t143 ,A68_VC *),(struct A68t129 ,struct A68t143 ,A68_VC *,void *));
typedef struct A68t142  A68_142 ;    /* PROC(MODE129,REF MODE143) REF MODE26 */
A_VECTOR(struct A68t137 ,A68t143);
typedef struct A68t143  A68_143 ;    /* VECTOR [] MODE137 */

A_PROCEDURE(A68_VOID ,A68t144,(struct A68t34 *,struct A68t143 ),(struct A68t34 *,struct A68t143 ,void *));
typedef struct A68t144  A68_144 ;    /* PROC(REF MODE34,REF MODE143) VOID */
struct A68t146 ;

A_PROCEDURE(struct A68t138 *,A68t145,(struct A68t138 *,struct A68t146 ),(struct A68t138 *,struct A68t146 ,void *));
typedef struct A68t145  A68_145 ;    /* PROC(REF MODE138,MODE146) REF MODE138 */
A_VECTOR(struct A68t147 ,A68t146);
typedef struct A68t146  A68_146 ;    /* VECTOR [] MODE147 */
struct A68t147{
A68_INT * No;
struct A68t135  New;
A68_VC  Name;
A68_VC  Help;
};
typedef struct A68t147  A68_147 ;    /* STRUCT(REF INT,MODE135,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t148,(struct A68t132 ,struct A68t131 *),(struct A68t132 ,struct A68t131 *,void *));
typedef struct A68t148  A68_148 ;    /* PROC(MODE132) REF MODE131 */

A_PROCEDURE(A68_BOOL ,A68t149,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t149  A68_149 ;    /* PROC(CHAR,MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t150,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(CHAR) BOOL */

A_PROCEDURE(A68_CHAR ,A68t151,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t151  A68_151 ;    /* PROC(CHAR) CHAR */

A_PROCEDURE(A68_INT ,A68t153,(A68_VC *,struct A68t108 ),(A68_VC *,struct A68t108 ,void *));
typedef struct A68t153  A68_153 ;    /* PROC(REF REF MODE26,MODE108) INT */
struct A68t152{
A68_VC  Rdbuffer;
struct A68t153  Rdline;
A68_INT  Rdcharend;
A_PAD_INT(PAD_27)
A68_INT  Rdcharno;
A_PAD_INT(PAD_28)
A68_INT  Start_of_word;
A_PAD_INT(PAD_29)
struct A68t154 * Stack;
};
typedef struct A68t152  A68_152 ;    /* STRUCT(REF MODE26,MODE153,INT,INT,INT,REF MODE154)  */
struct A68t154{
A68_VC  Line;
struct A68t154 * Rest;
};
typedef struct A68t154  A68_154 ;    /* STRUCT(REF MODE26,REF MODE154)  */

A_PROCEDURE(struct A68t152 *,A68t155,(A68_VC ,struct A68t153 ),(A68_VC ,struct A68t153 ,void *));
typedef struct A68t155  A68_155 ;    /* PROC(REF MODE26,MODE153) REF MODE152 */

A_PROCEDURE(A68_VOID ,A68t156,(struct A68t152 ),(struct A68t152 ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(MODE152) VOID */

A_PROCEDURE(A68_VOID ,A68t157,(struct A68t118 *),(struct A68t118 *,void *));
typedef struct A68t157  A68_157 ;    /* PROC REF MODE118 */

A_PROCEDURE(A68_VOID ,A68t158,(void),(void *));
typedef struct A68t158  A68_158 ;    /* PROC VOID */

A_PROCEDURE(A68_BOOL ,A68t159,(struct A68t108 ),(struct A68t108 ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(MODE108) BOOL */

A_PROCEDURE(A68_VOID ,A68t160,(struct A68t108 ),(struct A68t108 ,void *));
typedef struct A68t160  A68_160 ;    /* PROC(MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t161,(struct A68t143 ,struct A68t129 ,struct A68t108 ,struct A68t132 *),(struct A68t143 ,struct A68t129 ,struct A68t108 ,struct A68t132 *,void *));
typedef struct A68t161  A68_161 ;    /* PROC(REF MODE143,MODE129,MODE108) MODE132 */

A_PROCEDURE(A68_CHAR ,A68t162,(struct A68t108 ),(struct A68t108 ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(MODE108) CHAR */

A_PROCEDURE(A68_VOID ,A68t163,(A68_VC ,A68_VC ,struct A68t108 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t108 ,A68_VC *,void *));
typedef struct A68t163  A68_163 ;    /* PROC(REF MODE26,MODE26,MODE108) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t164,(struct A68t130 ,A68_INT ,struct A68t108 ),(struct A68t130 ,A68_INT ,struct A68t108 ,void *));
typedef struct A68t164  A68_164 ;    /* PROC(MODE130,INT,MODE108) VOID */
struct A68t165{
A68_BOOL  Get_first;
A_PAD_BOOL(PAD_30)
A68_BOOL  Check;
A_PAD_BOOL(PAD_31)
};
typedef struct A68t165  A68_165 ;    /* STRUCT(BOOL,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t166,(struct A68t165 ,A68_VC ,struct A68t108 ,A68_VC *),(struct A68t165 ,A68_VC ,struct A68t108 ,A68_VC *,void *));
typedef struct A68t166  A68_166 ;    /* PROC(MODE165,MODE26,MODE108) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t167,(A68_CHAR ,struct A68t108 ,A68_VC *),(A68_CHAR ,struct A68t108 ,A68_VC *,void *));
typedef struct A68t167  A68_167 ;    /* PROC(CHAR,MODE108) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t168,(struct A68t130 ),(struct A68t130 ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(MODE130) BOOL */

A_PROCEDURE(A68_VOID ,A68t169,(struct A68t130 ,struct A68t108 ,A68_VC *),(struct A68t130 ,struct A68t108 ,A68_VC *,void *));
typedef struct A68t169  A68_169 ;    /* PROC(MODE130,MODE108) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t170,(A68_INT ,A68_VC ,struct A68t108 ),(A68_INT ,A68_VC ,struct A68t108 ,void *));
typedef struct A68t170  A68_170 ;    /* PROC(INT,MODE26,MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t171,(A68_VC ,A68_VC ,struct A68t150 ,struct A68t108 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t150 ,struct A68t108 ,A68_VC *,void *));
typedef struct A68t171  A68_171 ;    /* PROC(REF MODE26,MODE26,MODE150,MODE108) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t172,(A68_VC ),(A68_VC ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(REF MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t173,(A68_INT *,struct A68t108 ),(A68_INT *,struct A68t108 ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(REF INT,MODE108) BOOL */

A_PROCEDURE(A68_VOID ,A68t174,(struct A68t165 ,struct A68t108 ,A68_VC *),(struct A68t165 ,struct A68t108 ,A68_VC *,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE165,MODE108) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t175,(A68_BOOL ,struct A68t108 ,A68_VC *),(A68_BOOL ,struct A68t108 ,A68_VC *,void *));
typedef struct A68t175  A68_175 ;    /* PROC(BOOL,MODE108) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t176,(struct A68t130 ,struct A68t108 ),(struct A68t130 ,struct A68t108 ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(MODE130,MODE108) INT */
struct A68t178 ;

A_PROCEDURE(A68_VOID ,A68t177,(struct A68t130 ,A68_VC ,struct A68t108 ,struct A68t178 *),(struct A68t130 ,A68_VC ,struct A68t108 ,struct A68t178 *,void *));
typedef struct A68t177  A68_177 ;    /* PROC(MODE130,MODE26,MODE108) MODE178 */
struct A68t178{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t178  A68_178 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t179,(struct A68t131 ,A68_INT *,A68_VC ,struct A68t108 ,struct A68t92 *),(struct A68t131 ,A68_INT *,A68_VC ,struct A68t108 ,struct A68t92 *,void *));
typedef struct A68t179  A68_179 ;    /* PROC(REF MODE131,REF INT,REF MODE26,MODE108) MODE92 */

A_PROCEDURE(A68_VOID ,A68t180,(struct A68t130 ,A68_BOOL *,A68_VC ,struct A68t108 ,A68_VC *),(struct A68t130 ,A68_BOOL *,A68_VC ,struct A68t108 ,A68_VC *,void *));
typedef struct A68t180  A68_180 ;    /* PROC(MODE130,REF BOOL,MODE26,MODE108) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t181,(struct A68t130 ,struct A68t108 ,struct A68t46 ),(struct A68t130 ,struct A68t108 ,struct A68t46 ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(MODE130,MODE108,MODE46) INT */
struct A68t182{
A68_INT  Lwb;
A_PAD_INT(PAD_32)
A68_INT  Upb;
A_PAD_INT(PAD_33)
};
typedef struct A68t182  A68_182 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t183,(struct A68t130 ,struct A68t182 ,struct A68t108 ,struct A68t182 *),(struct A68t130 ,struct A68t182 ,struct A68t108 ,struct A68t182 *,void *));
typedef struct A68t183  A68_183 ;    /* PROC(MODE130,MODE182,MODE108) MODE182 */

A_PROCEDURE(A68_VOID ,A68t184,(A68_CHAR ,A68_VC ,struct A68t108 ,A68_VC *),(A68_CHAR ,A68_VC ,struct A68t108 ,A68_VC *,void *));
typedef struct A68t184  A68_184 ;    /* PROC(CHAR,MODE26,MODE108) REF MODE26 */

A_PROCEDURE(A68_CHAR ,A68t185,(struct A68t130 ,struct A68t108 ),(struct A68t130 ,struct A68t108 ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(MODE130,MODE108) CHAR */

A_PROCEDURE(struct A68t138 *,A68t186,(void),(void *));
typedef struct A68t186  A68_186 ;    /* PROC REF MODE138 */

A_PROCEDURE(A68_VOID ,A68t187,(struct A68t158 ),(struct A68t158 ,void *));
typedef struct A68t187  A68_187 ;    /* PROC(MODE158) VOID */

A_PROCEDURE(A68_VOID ,A68t188,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t188  A68_188 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t189,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t189  A68_189 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,56,A68t190);
typedef struct A68t190  A68_190 ;    /* STRUCT 56 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t191);
typedef struct A68t191  A68_191 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t192);
typedef struct A68t192  A68_192 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t193);
typedef struct A68t193  A68_193 ;    /* STRUCT 30 CHAR */
A_ISTRUCT(A68_CHAR ,25,A68t194);
typedef struct A68t194  A68_194 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(A68_CHAR ,55,A68t195);
typedef struct A68t195  A68_195 ;    /* STRUCT 55 CHAR */
A_ISTRUCT(A68_CHAR ,45,A68t196);
typedef struct A68t196  A68_196 ;    /* STRUCT 45 CHAR */
A_ISTRUCT(A68_CHAR ,36,A68t197);
typedef struct A68t197  A68_197 ;    /* STRUCT 36 CHAR */
A_ISTRUCT(A68_CHAR ,125,A68t198);
typedef struct A68t198  A68_198 ;    /* STRUCT 125 CHAR */
A_ISTRUCT(A68_CHAR ,48,A68t199);
typedef struct A68t199  A68_199 ;    /* STRUCT 48 CHAR */

A_PROCEDURE(A68_VOID ,A68t200,(A68_BOOL ,struct A68t128 *),(A68_BOOL ,struct A68t128 *,void *));
typedef struct A68t200  A68_200 ;    /* PROC(BOOL) MODE128 */
A_ISTRUCT(A68_CHAR ,7,A68t201);
typedef struct A68t201  A68_201 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t202);
typedef struct A68t202  A68_202 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t203);
typedef struct A68t203  A68_203 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t204);
typedef struct A68t204  A68_204 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t205);
typedef struct A68t205  A68_205 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,39,A68t206);
typedef struct A68t206  A68_206 ;    /* STRUCT 39 CHAR */

A_PROCEDURE(struct A68t138 *,A68t207,(struct A68t138 *),(struct A68t138 *,void *));
typedef struct A68t207  A68_207 ;    /* PROC(REF MODE138) REF MODE138 */
A_ISTRUCT(struct A68t129 ,2,A68t208);
typedef struct A68t208  A68_208 ;    /* STRUCT 2 MODE129 */
A_ISTRUCT(struct A68t129 ,3,A68t209);
typedef struct A68t209  A68_209 ;    /* STRUCT 3 MODE129 */
A_ISTRUCT(struct A68t147 ,16,A68t210);
typedef struct A68t210  A68_210 ;    /* STRUCT 16 MODE147 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from kernelreader --- */
extern A68_VOID  EZEAOST_check_separator(A68_VC ,A68_VC ,struct A68t150 ,struct A68t108 ,A68_VC *);
extern A68_BOOL  JZEAOST_legal_read(A68_VC );
extern A68_VOID  PGFAOST_read_int_basic(struct A68t165 ,struct A68t108 ,A68_VC *);
extern A68_VOID  PHFAOST_read_ident_basic(struct A68t165 ,A68_VC ,struct A68t108 ,A68_VC *);
extern A68_VOID  FJFAOST_read_fnname_basic(struct A68t165 ,struct A68t108 ,A68_VC *);
extern A68_VC  UZEAOST_period_str;
extern A68_129  SAFAOST_period_syntax;
extern A68_VC  JDFAOST_int_str;
extern A68_129  AHFAOST_int_syntax;
extern A68_BOOL  GHFAOST_is_int(struct A68t130 );
extern A68_VC  CIFAOST_ident_str;
extern A68_129  ADGAOST_quoted_string_syntax;
/* --- End of imports from kernelreader --- */


/* --- Imports from commandreader --- */
extern A68_CHAR  YMBAOST_next_char(struct A68t108 );
extern A68_CHAR  BNBAOST_first_char(struct A68t108 );
extern A68_CHAR  FNBAOST_next_first_char(struct A68t108 );
extern A68_VOID  ZACAOST_nothing_read(A68_VC *);
extern A68_VOID  GBCAOST_check_read(A68_VC ,A68_VC ,struct A68t108 ,A68_VC *);
extern A68_VOID  BCCAOST_check_value(struct A68t130 ,A68_INT ,struct A68t108 );
extern A68_165  NCCAOST_first_and_check;
extern A68_165  PCCAOST_get_first;
extern A68_165  RCCAOST_check_end;
extern A68_VOID  PDCAOST_read_char(A68_CHAR ,struct A68t108 ,A68_VC *);
/* --- End of imports from commandreader --- */


/* --- Imports from commandsyntax --- */
#define ESAAOST_star_syn 0X4U
extern A68_VOID  PSAAOST_alt(struct A68t128 ,A68_127 *);
extern A68_VOID  ATAAOST_prod(struct A68t128 ,A68_127 *);
extern A68_VOID  LTAAOST_opt(struct A68t129 ,A68_127 *);
extern A68_138 * EZAAOST_add_readers(struct A68t138 *,struct A68t146 );
/* --- End of imports from commandsyntax --- */


/* --- Imports from messageproc --- */
extern A68_VOID  ZAAAOSI_makervc(A68_VC ,A68_VC *);
extern A68_109  WHAAOSI_user;
/* --- End of imports from messageproc --- */


/* --- Imports from basics --- */
extern A68_INT  XVCAOST_charstoint(A68_VC ,A68_BOOL *);
/* --- End of imports from basics --- */


/* --- Imports from putstrings --- */
extern A68_VC  EOAAOSL_nullstr;
extern A68_VOID  NAAAOSI_makervc(A68_CHAR ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void TXEAOST(void);   /* kernelreader */
extern void YIBAOST(void);   /* commandreader */
extern void LRAAOST(void);   /* commandsyntax */
extern void JFAAOSI(void);   /* messageproc */
extern void JSCAOST(void);   /* basics */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_190   ZAAASIM = {"$Id: simreader.a68,v 34.2 1995/03/29 13:05:02 ella Exp $"}; 
A_GISVEC(A68_VC ,ABAASIM,ZAAASIM,56)
static A68_INT  BBAASIM_semicolon_no;
static A68_INT  CBAASIM_openrnd_no;
static A68_INT  DBAASIM_closernd_no;
static A68_INT  EBAASIM_simname_no;
static A68_INT  FBAASIM_vspace_no;
static A68_INT  GBAASIM_fullnode_no;
static A68_INT  HBAASIM_nodename_no;
A68_129  JBAASIM_semicolon_syntax;
A68_129  LBAASIM_openrnd_syntax;
A68_129  NBAASIM_closernd_syntax;
A68_129  PBAASIM_vspace_syntax;
A68_129  RBAASIM_simname_syntax;
A68_129  TBAASIM_nodename_syntax;
A68_VC  VBAASIM_semicolon_str;
A68_VC  XBAASIM_openrnd_str;
A68_VC  ZBAASIM_closernd_str;
A68_VC  BCAASIM_vspace_str;
static A68_191   CCAASIM = {"<name>"}; 
A_GISVEC(A68_VC ,DCAASIM,CCAASIM,6)
A68_VC  ECAASIM_simname_str;
static A68_192   FCAASIM = {"<fullnode>"}; 
A_GISVEC(A68_VC ,GCAASIM,FCAASIM,10)
static A68_VC  HCAASIM_fullnode_str;
static A68_192   ICAASIM = {"<nodename>"}; 
A_GISVEC(A68_VC ,JCAASIM,ICAASIM,10)
A68_VC  KCAASIM_nodename_str;
static A68_193   LCAASIM = {"Semicolon signifies \"go past\"."}; 
A_GISVEC(A68_VC ,MCAASIM,LCAASIM,30)
static A68_VC  NCAASIM_semicolon_help;
static A68_194   OCAASIM = {"Period signifies \"go in\"."}; 
A_GISVEC(A68_VC ,PCAASIM,OCAASIM,25)
static A68_VC  QCAASIM_period_help;
static A68_195   RCAASIM = {"Use round brackets to separate to different node names."}; 
A_GISVEC(A68_VC ,SCAASIM,RCAASIM,55)
static A68_VC  TCAASIM_rndbrk_help;
static A68_196   UCAASIM = {"Visible space signifies the current position."}; 
A_GISVEC(A68_VC ,VCAASIM,UCAASIM,45)
static A68_VC  WCAASIM_vspace_help;
static A68_197   XCAASIM = {"An ELLA function or identifier name."}; 
A_GISVEC(A68_VC ,YCAASIM,XCAASIM,36)
static A68_VC  ZCAASIM_simname_help;
static A68_198   ADAASIM = {"A fullnode gives the path to an instance where <name> is an instance name and <number> may be used to select the nth version."}; 
A_GISVEC(A68_VC ,BDAASIM,ADAASIM,125)
static A68_VC  CDAASIM_fullnode_help;
static A68_199   DDAASIM = {"The complete specification of a particular node."}; 
A_GISVEC(A68_VC ,EDAASIM,DDAASIM,48)
static A68_VC  FDAASIM_nodename_help;
static A68_INT  KFAASIM_value_no;
static A68_INT  LFAASIM_val_id_no;
static A68_INT  MFAASIM_fn_arrow_no;
static A68_INT  NFAASIM_query_no;
static A68_INT  OFAASIM_void_no;
static A68_INT  PFAASIM_slash_int_no;
static A68_INT  QFAASIM_prime_char_no;
static A68_129  SFAASIM_value_syntax;
static A68_129  UFAASIM_fn_arrow_syntax;
A68_129  WFAASIM_query_syntax;
A68_129  YFAASIM_void_syntax;
A68_129  AGAASIM_val_id_syntax;
A68_129  CGAASIM_slash_int_syntax;
static A68_129  EGAASIM_prime_char_syntax;
A68_129  PGAASIM_values_syntax;
static A68_201   QGAASIM = {"<value>"}; 
A_GISVEC(A68_VC ,RGAASIM,QGAASIM,7)
A68_VC  SGAASIM_value_str;
A68_VC  TGAASIM_val_id_str;
static A68_202   UGAASIM = {"->"}; 
A_GISVEC(A68_VC ,VGAASIM,UGAASIM,2)
A68_VC  WGAASIM_fn_arrow_str;
A68_VC  YGAASIM_query_str;
static A68_202   ZGAASIM = {"()"}; 
A_GISVEC(A68_VC ,AHAASIM,ZGAASIM,2)
A68_VC  BHAASIM_void_str;
A68_VC  GHAASIM_str;
A68_VC  NHAASIM_slash_int_str;
static A68_203   OHAASIM = {"'<character>"}; 
A_GISVEC(A68_VC ,PHAASIM,OHAASIM,12)
A68_VC  QHAASIM_prime_char_str;
static A68_204   RHAASIM = {"An ELLA signal value."}; 
A_GISVEC(A68_VC ,SHAASIM,RHAASIM,21)
static A68_VC  THAASIM_value_help;
static A68_202   WHAASIM = {"->"}; 
A_GISVEC(A68_VC ,YHAASIM,WHAASIM,2)
static A68_202   EIAASIM = {"()"}; 
A_GISVEC(A68_VC ,GIAASIM,EIAASIM,2)
static A68_205   DJAASIM = {" expected after \"/\" in "}; 
A_GISVEC(A68_VC ,EJAASIM,DJAASIM,23)
static A68_INT  PKAASIM_time_no;
A68_129  RKAASIM_time_syntax;
static A68_191   SKAASIM = {"<time>"}; 
A_GISVEC(A68_VC ,TKAASIM,SKAASIM,6)
A68_VC  UKAASIM_time_str;
static A68_206   VKAASIM = {"An integer number - this may be signed."}; 
A_GISVEC(A68_VC ,WKAASIM,VKAASIM,39)
static A68_VC  XKAASIM_time_help;

A_STATIC A68_BOOL  HDAASIM_check(A68_CHAR  C);

A_STATIC A68_VOID  LDAASIM_read_simname(A68_108  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  YDAASIM_read_semicolon(A68_108  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  DEAASIM_read_openrnd(A68_108  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  IEAASIM_read_closernd(A68_108  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  NEAASIM_read_vspace(A68_108  Msg, A68_VC  *ReturnedValue);

A68_BOOL  SEAASIM_is_semicolon(A68_130  V);

A68_BOOL  VEAASIM_is_openrnd(A68_130  V);

A68_BOOL  YEAASIM_is_closernd(A68_130  V);

A68_BOOL  BFAASIM_is_vspace(A68_130  V);

A68_BOOL  EFAASIM_is_simname(A68_130  V);

A68_BOOL  HFAASIM_is_nodename(A68_130  V);

A_STATIC A68_VOID  HGAASIM_generator(A68_BOOL  GGAASIM_anonymous, A68_128  *ReturnedValue);

A_STATIC A68_VOID  DHAASIM_generator(A68_BOOL  CHAASIM_anonymous, A68_VC  *ReturnedValue);

A68_VOID  VHAASIM_read_fn_arrow(A68_108  Msg, A68_VC  *ReturnedValue);

A68_VOID  DIAASIM_read_void(A68_108  Msg, A68_VC  *ReturnedValue);

A68_VOID  LIAASIM_read_query(A68_108  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  QIAASIM_read_val_id(A68_108  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_BOOL  SIAASIM_anonymous(A68_CHAR  C);

A_STATIC A68_VOID  AJAASIM_read_slash_int(A68_108  Msg, A68_VC  *ReturnedValue);

A68_VOID  JJAASIM_read_prime_char(A68_108  Msg, A68_VC  *ReturnedValue);

A68_BOOL  QJAASIM_is_query(A68_130  V);

A68_BOOL  TJAASIM_is_void(A68_130  V);

A68_BOOL  WJAASIM_is_fn_arrow(A68_130  V);

A68_BOOL  ZJAASIM_is_val_id(A68_130  V);

A68_BOOL  CKAASIM_is_slash_int(A68_130  V);

A68_BOOL  FKAASIM_is_prime_char(A68_130  V);

A68_BOOL  IKAASIM_is_value(A68_130  V);

A_STATIC A68_INT  NKAASIM_get_slash_int(A68_130  V, A68_108  Msg);

A_STATIC A68_VOID  ZKAASIM_read_time(A68_108  Msg, A68_VC  *ReturnedValue);

A68_BOOL  DLAASIM_is_time(A68_130  V);

A68_INT  HLAASIM_get_time(A68_130  V, A68_108  Msg);

A68_138 * KLAASIM_add_simulator_readers(A68_138 * Readers);

A_STATIC A68_BOOL  SIAASIM_anonymous(A68_CHAR  C)
{ 
A68_BOOL  TIAASIM;  /* optbool result */
A68_BOOL  UIAASIM;  /* clause result */
 /* line 207: */
TIAASIM = (C=='/');
if ( ! TIAASIM )
{TIAASIM = (C=='\'');
}
if ( ! TIAASIM )
{TIAASIM = (C=='\"');
}
UIAASIM = TIAASIM;
return( UIAASIM );
} 
#undef NL

A_STATIC A68_BOOL  HDAASIM_check(A68_CHAR  C)
{ 
A68_BOOL  IDAASIM;  /* optbool result */
A68_BOOL  JDAASIM;  /* clause result */
A_PROC_ENTRY(check);
 /* line 111: */
IDAASIM = (C==')');
if ( ! IDAASIM )
{IDAASIM = (C=='.');
}
if ( ! IDAASIM )
{IDAASIM = (C==';');
}
JDAASIM = IDAASIM;
A_PROC_EXIT(check);
return( JDAASIM );
} 
#undef NL

A_STATIC A68_VOID  LDAASIM_read_simname(A68_108  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  MDAASIM;  /* avoid structure result */
A68_VC  NDAASIM_ident;
A68_BOOL  ODAASIM;  /* clause result */
A68_VC  PDAASIM;  /* clause result */
A68_150  QDAASIM;  /* procedure value */
A68_VC  RDAASIM;  /* avoid structure result */
A68_VC  SDAASIM;  /* avoid structure result */
A68_VC  TDAASIM_fnname;
A68_BOOL  UDAASIM;  /* clause result */
A68_150  VDAASIM;  /* procedure value */
A68_VC  WDAASIM;  /* avoid structure result */
A_PROC_ENTRY(read_simname);
 /* line 114: */
{ 
PHFAOST_read_ident_basic( PCCAOST_get_first, ECAASIM_simname_str, Msg, &MDAASIM );
NDAASIM_ident = MDAASIM;
 /* line 115: */
 /* line 116: */
ODAASIM = JZEAOST_legal_read(NDAASIM_ident);
if ( ODAASIM )
{ 
 /* line 117: */
QDAASIM.fn.fn_global = HDAASIM_check;
QDAASIM.nonlocals = A68_NIL;
EZEAOST_check_separator( NDAASIM_ident, ECAASIM_simname_str, QDAASIM, Msg, &RDAASIM );
PDAASIM = RDAASIM;
} 
else
{ 
{ 
FJFAOST_read_fnname_basic( PCCAOST_get_first, Msg, &SDAASIM );
TDAASIM_fnname = SDAASIM;
 /* line 118: */
 /* line 119: */
UDAASIM = JZEAOST_legal_read(TDAASIM_fnname);
if ( UDAASIM )
{ 
 /* line 120: */
 /* line 121: */
VDAASIM.fn.fn_global = HDAASIM_check;
VDAASIM.nonlocals = A68_NIL;
EZEAOST_check_separator( TDAASIM_fnname, ECAASIM_simname_str, VDAASIM, Msg, &WDAASIM );
PDAASIM = WDAASIM;
} 
else
{ 
PDAASIM = TDAASIM_fnname;
} 
} 
} 
} 
A_PROC_EXIT(read_simname);
*ReturnedValue = (PDAASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  YDAASIM_read_semicolon(A68_108  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  ZDAASIM;  /* clause result */
A68_INT  AEAASIM;  /* YIELD */
A68_VC  BEAASIM;  /* avoid structure result */
A_PROC_ENTRY(read_semicolon);
AEAASIM = 1 ;
PDCAOST_read_char( A_VINDEX(VBAASIM_semicolon_str,AEAASIM), Msg, &BEAASIM );
ZDAASIM = BEAASIM;
A_PROC_EXIT(read_semicolon);
*ReturnedValue = (ZDAASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  DEAASIM_read_openrnd(A68_108  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  EEAASIM;  /* clause result */
A68_INT  FEAASIM;  /* YIELD */
A68_VC  GEAASIM;  /* avoid structure result */
A_PROC_ENTRY(read_openrnd);
FEAASIM = 1 ;
PDCAOST_read_char( A_VINDEX(XBAASIM_openrnd_str,FEAASIM), Msg, &GEAASIM );
EEAASIM = GEAASIM;
A_PROC_EXIT(read_openrnd);
*ReturnedValue = (EEAASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  IEAASIM_read_closernd(A68_108  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  JEAASIM;  /* clause result */
A68_INT  KEAASIM;  /* YIELD */
A68_VC  LEAASIM;  /* avoid structure result */
A_PROC_ENTRY(read_closernd);
KEAASIM = 1 ;
PDCAOST_read_char( A_VINDEX(ZBAASIM_closernd_str,KEAASIM), Msg, &LEAASIM );
JEAASIM = LEAASIM;
A_PROC_EXIT(read_closernd);
*ReturnedValue = (JEAASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  NEAASIM_read_vspace(A68_108  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  OEAASIM;  /* clause result */
A68_INT  PEAASIM;  /* YIELD */
A68_VC  QEAASIM;  /* avoid structure result */
A_PROC_ENTRY(read_vspace);
PEAASIM = 1 ;
PDCAOST_read_char( A_VINDEX(BCAASIM_vspace_str,PEAASIM), Msg, &QEAASIM );
OEAASIM = QEAASIM;
A_PROC_EXIT(read_vspace);
*ReturnedValue = (OEAASIM);
return;
} 
#undef NL

A68_BOOL  SEAASIM_is_semicolon(A68_130  V)
{ 
A68_BOOL  TEAASIM;  /* clause result */
A_PROC_ENTRY(is_semicolon);
TEAASIM = (V.Sort==BBAASIM_semicolon_no);
A_PROC_EXIT(is_semicolon);
return( TEAASIM );
} 
#undef NL

A68_BOOL  VEAASIM_is_openrnd(A68_130  V)
{ 
A68_BOOL  WEAASIM;  /* clause result */
A_PROC_ENTRY(is_openrnd);
WEAASIM = (V.Sort==CBAASIM_openrnd_no);
A_PROC_EXIT(is_openrnd);
return( WEAASIM );
} 
#undef NL

A68_BOOL  YEAASIM_is_closernd(A68_130  V)
{ 
A68_BOOL  ZEAASIM;  /* clause result */
A_PROC_ENTRY(is_closernd);
ZEAASIM = (V.Sort==DBAASIM_closernd_no);
A_PROC_EXIT(is_closernd);
return( ZEAASIM );
} 
#undef NL

A68_BOOL  BFAASIM_is_vspace(A68_130  V)
{ 
A68_BOOL  CFAASIM;  /* clause result */
A_PROC_ENTRY(is_vspace);
CFAASIM = (V.Sort==FBAASIM_vspace_no);
A_PROC_EXIT(is_vspace);
return( CFAASIM );
} 
#undef NL

A68_BOOL  EFAASIM_is_simname(A68_130  V)
{ 
A68_BOOL  FFAASIM;  /* clause result */
A_PROC_ENTRY(is_simname);
FFAASIM = (V.Sort==EBAASIM_simname_no);
A_PROC_EXIT(is_simname);
return( FFAASIM );
} 
#undef NL

A68_BOOL  HFAASIM_is_nodename(A68_130  V)
{ 
A68_BOOL  IFAASIM;  /* optbool result */
A68_BOOL  JFAASIM;  /* clause result */
A_PROC_ENTRY(is_nodename);
 /* line 136: */
IFAASIM = (V.Sort==CBAASIM_openrnd_no);
if ( ! IFAASIM )
{IFAASIM = (V.Sort==FBAASIM_vspace_no);
}
 /* line 137: */
if ( ! IFAASIM )
{IFAASIM = GHFAOST_is_int(V);
}
if ( ! IFAASIM )
{IFAASIM = EFAASIM_is_simname(V);
}
JFAASIM = IFAASIM;
A_PROC_EXIT(is_nodename);
return( JFAASIM );
} 
#undef NL

A_STATIC A68_VOID  HGAASIM_generator(A68_BOOL  GGAASIM_anonymous, A68_128  *ReturnedValue)
{ 
A68_128  IGAASIM;  /* clause result */
A68_128  JGAASIM;  /* OPERATORS - dynamic generator */
{ 
JGAASIM.upb = 1 ;
( GGAASIM_anonymous? A_VLOC(A68_129 ,JGAASIM): A_VHEAP(A68_129 ,JGAASIM) );
IGAASIM = JGAASIM;
} 
*ReturnedValue = (IGAASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  DHAASIM_generator(A68_BOOL  CHAASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  EHAASIM;  /* clause result */
A68_VC  FHAASIM;  /* OPERATORS - dynamic generator */
{ 
FHAASIM.upb = (JDFAOST_int_str.upb+1) ;
( CHAASIM_anonymous? A_VLOC(A68_CHAR ,FHAASIM): A_VHEAP(A68_CHAR ,FHAASIM) );
EHAASIM = FHAASIM;
} 
*ReturnedValue = (EHAASIM);
return;
} 
#undef NL

A68_VOID  VHAASIM_read_fn_arrow(A68_108  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  XHAASIM;  /* clause result */
A68_VC  ZHAASIM;  /* avoid structure result */
A68_VC  AIAASIM;  /* avoid structure result */
A68_VC  BIAASIM;  /* avoid structure result */
A_PROC_ENTRY(read_fn_arrow);
 /* line 189: */
 /* line 190: */
if ( (BNBAOST_first_char(Msg)=='-') )
{ 
if ( (YMBAOST_next_char(Msg)=='>') )
{ 
YMBAOST_next_char(Msg);
} 
 /* line 191: */
 /* line 192: */
 /* line 193: */
ZAAAOSI_makervc( YHAASIM, &ZHAASIM );
GBCAOST_check_read( ZHAASIM, WGAASIM_fn_arrow_str, Msg, &AIAASIM );
XHAASIM = AIAASIM;
} 
else
{ 
ZACAOST_nothing_read(  &BIAASIM );
XHAASIM = BIAASIM;
} 
A_PROC_EXIT(read_fn_arrow);
*ReturnedValue = (XHAASIM);
return;
} 
#undef NL

A68_VOID  DIAASIM_read_void(A68_108  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  FIAASIM;  /* clause result */
A68_VC  HIAASIM;  /* avoid structure result */
A68_VC  IIAASIM;  /* avoid structure result */
A68_VC  JIAASIM;  /* avoid structure result */
A_PROC_ENTRY(read_void);
 /* line 196: */
 /* line 197: */
if ( (BNBAOST_first_char(Msg)=='(') )
{ 
if ( (YMBAOST_next_char(Msg)==')') )
{ 
YMBAOST_next_char(Msg);
} 
 /* line 198: */
 /* line 199: */
 /* line 200: */
ZAAAOSI_makervc( GIAASIM, &HIAASIM );
GBCAOST_check_read( HIAASIM, BHAASIM_void_str, Msg, &IIAASIM );
FIAASIM = IIAASIM;
} 
else
{ 
ZACAOST_nothing_read(  &JIAASIM );
FIAASIM = JIAASIM;
} 
A_PROC_EXIT(read_void);
*ReturnedValue = (FIAASIM);
return;
} 
#undef NL

A68_VOID  LIAASIM_read_query(A68_108  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  MIAASIM;  /* clause result */
A68_INT  NIAASIM;  /* YIELD */
A68_VC  OIAASIM;  /* avoid structure result */
A_PROC_ENTRY(read_query);
NIAASIM = 1 ;
PDCAOST_read_char( A_VINDEX(YGAASIM_query_str,NIAASIM), Msg, &OIAASIM );
MIAASIM = OIAASIM;
A_PROC_EXIT(read_query);
*ReturnedValue = (MIAASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  QIAASIM_read_val_id(A68_108  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  VIAASIM;  /* clause result */
A68_VC  WIAASIM;  /* avoid structure result */
A68_150  XIAASIM;  /* procedure value */
A68_VC  YIAASIM;  /* avoid structure result */
A_PROC_ENTRY(read_val_id);
 /* line 205: */
 /* line 206: */
 /* line 208: */
PHFAOST_read_ident_basic( PCCAOST_get_first, TGAASIM_val_id_str, Msg, &WIAASIM );
XIAASIM.fn.fn_global = SIAASIM_anonymous;
XIAASIM.nonlocals = A68_NIL;
EZEAOST_check_separator( WIAASIM, TGAASIM_val_id_str, XIAASIM, Msg, &YIAASIM );
VIAASIM = YIAASIM;
A_PROC_EXIT(read_val_id);
*ReturnedValue = (VIAASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  AJAASIM_read_slash_int(A68_108  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  BJAASIM;  /* avoid structure result */
A68_VC  CJAASIM_int;
A68_46  FJAASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  GJAASIM;  /* clause result */
A68_VC  HJAASIM;  /* avoid structure result */
A_PROC_ENTRY(read_slash_int);
 /* line 211: */
 /* line 212: */
if ( (FNBAOST_next_first_char(Msg)=='/') )
{ 
PGFAOST_read_int_basic( RCCAOST_check_end, Msg, &BJAASIM );
CJAASIM_int = BJAASIM;
 /* line 213: */
 /* line 214: */
if ( !JZEAOST_legal_read(CJAASIM_int) )
{ 
 /* line 215: */
 /* line 216: */
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(FJAASIM,A_VC_PLUS(A_VC_PLUS(JDFAOST_int_str,EJAASIM),NHAASIM_slash_int_str),A68_VC )),(WHAAOSI_user, A_HVEC(FJAASIM,A_VC_PLUS(A_VC_PLUS(JDFAOST_int_str,EJAASIM),NHAASIM_slash_int_str),A68_VC ),(Msg).nonlocals));
} 
 /* line 217: */
 /* line 218: */
 /* line 219: */
GJAASIM = CJAASIM_int;
} 
else
{ 
ZACAOST_nothing_read(  &HJAASIM );
GJAASIM = HJAASIM;
} 
A_PROC_EXIT(read_slash_int);
*ReturnedValue = (GJAASIM);
return;
} 
#undef NL

A68_VOID  JJAASIM_read_prime_char(A68_108  Msg, A68_VC  *ReturnedValue)
{ 
A68_CHAR  KJAASIM_c;
A68_VC  LJAASIM;  /* clause result */
A68_VC  MJAASIM;  /* avoid structure result */
A68_VC  NJAASIM;  /* avoid structure result */
A68_VC  OJAASIM;  /* avoid structure result */
A_PROC_ENTRY(read_prime_char);
 /* line 222: */
 /* line 223: */
if ( (FNBAOST_next_first_char(Msg)=='\'') )
{ 
KJAASIM_c = YMBAOST_next_char(Msg);
 /* line 224: */
YMBAOST_next_char(Msg);
 /* line 225: */
 /* line 226: */
 /* line 227: */
NAAAOSI_makervc( KJAASIM_c, &MJAASIM );
GBCAOST_check_read( MJAASIM, QHAASIM_prime_char_str, Msg, &NJAASIM );
LJAASIM = NJAASIM;
} 
else
{ 
ZACAOST_nothing_read(  &OJAASIM );
LJAASIM = OJAASIM;
} 
A_PROC_EXIT(read_prime_char);
*ReturnedValue = (LJAASIM);
return;
} 
#undef NL

A68_BOOL  QJAASIM_is_query(A68_130  V)
{ 
A68_BOOL  RJAASIM;  /* clause result */
A_PROC_ENTRY(is_query);
RJAASIM = (V.Sort==NFAASIM_query_no);
A_PROC_EXIT(is_query);
return( RJAASIM );
} 
#undef NL

A68_BOOL  TJAASIM_is_void(A68_130  V)
{ 
A68_BOOL  UJAASIM;  /* clause result */
A_PROC_ENTRY(is_void);
UJAASIM = (V.Sort==OFAASIM_void_no);
A_PROC_EXIT(is_void);
return( UJAASIM );
} 
#undef NL

A68_BOOL  WJAASIM_is_fn_arrow(A68_130  V)
{ 
A68_BOOL  XJAASIM;  /* clause result */
A_PROC_ENTRY(is_fn_arrow);
XJAASIM = (V.Sort==MFAASIM_fn_arrow_no);
A_PROC_EXIT(is_fn_arrow);
return( XJAASIM );
} 
#undef NL

A68_BOOL  ZJAASIM_is_val_id(A68_130  V)
{ 
A68_BOOL  AKAASIM;  /* clause result */
A_PROC_ENTRY(is_val_id);
AKAASIM = (V.Sort==LFAASIM_val_id_no);
A_PROC_EXIT(is_val_id);
return( AKAASIM );
} 
#undef NL

A68_BOOL  CKAASIM_is_slash_int(A68_130  V)
{ 
A68_BOOL  DKAASIM;  /* clause result */
A_PROC_ENTRY(is_slash_int);
DKAASIM = (V.Sort==PFAASIM_slash_int_no);
A_PROC_EXIT(is_slash_int);
return( DKAASIM );
} 
#undef NL

A68_BOOL  FKAASIM_is_prime_char(A68_130  V)
{ 
A68_BOOL  GKAASIM;  /* clause result */
A_PROC_ENTRY(is_prime_char);
GKAASIM = (V.Sort==QFAASIM_prime_char_no);
A_PROC_EXIT(is_prime_char);
return( GKAASIM );
} 
#undef NL

A68_BOOL  IKAASIM_is_value(A68_130  V)
{ 
A68_BOOL  JKAASIM;  /* optbool result */
A68_BOOL  KKAASIM;  /* clause result */
A_PROC_ENTRY(is_value);
 /* line 237: */
JKAASIM = WJAASIM_is_fn_arrow(V);
if ( ! JKAASIM )
{JKAASIM = QJAASIM_is_query(V);
}
if ( ! JKAASIM )
{JKAASIM = ZJAASIM_is_val_id(V);
}
if ( ! JKAASIM )
{JKAASIM = TJAASIM_is_void(V);
}
KKAASIM = JKAASIM;
A_PROC_EXIT(is_value);
return( KKAASIM );
} 
#undef NL

A_STATIC A68_INT  NKAASIM_get_slash_int(A68_130  V, A68_108  Msg)
{ 
A68_INT  OKAASIM;  /* clause result */
A_PROC_ENTRY(get_slash_int);
 /* line 244: */
 /* line 245: */
{ 
BCCAOST_check_value(V, PFAASIM_slash_int_no, Msg);
 /* line 246: */
 /* line 247: */
OKAASIM = XVCAOST_charstoint(V.Value, A_HEAP(A68_BOOL ));
} 
A_PROC_EXIT(get_slash_int);
return( OKAASIM );
} 
#undef NL

A_STATIC A68_VOID  ZKAASIM_read_time(A68_108  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  ALAASIM;  /* clause result */
A68_VC  BLAASIM;  /* avoid structure result */
A_PROC_ENTRY(read_time);
PGFAOST_read_int_basic( NCCAOST_first_and_check, Msg, &BLAASIM );
ALAASIM = BLAASIM;
A_PROC_EXIT(read_time);
*ReturnedValue = (ALAASIM);
return;
} 
#undef NL

A68_BOOL  DLAASIM_is_time(A68_130  V)
{ 
A68_BOOL  ELAASIM;  /* clause result */
A_PROC_ENTRY(is_time);
ELAASIM = (V.Sort==PKAASIM_time_no);
A_PROC_EXIT(is_time);
return( ELAASIM );
} 
#undef NL

A68_INT  HLAASIM_get_time(A68_130  V, A68_108  Msg)
{ 
A68_INT  ILAASIM;  /* clause result */
A_PROC_ENTRY(get_time);
 /* line 266: */
 /* line 267: */
{ 
BCCAOST_check_value(V, PKAASIM_time_no, Msg);
 /* line 268: */
 /* line 269: */
ILAASIM = XVCAOST_charstoint(V.Value, A_HEAP(A68_BOOL ));
} 
A_PROC_EXIT(get_time);
return( ILAASIM );
} 
#undef NL

A68_138 * KLAASIM_add_simulator_readers(A68_138 * Readers)
{ 
A68_209  LLAASIM;  /* collateral clause result */
A68_127  MLAASIM;  /* avoid structure result */
A68_129  NLAASIM;  /* OPERATORS - mode -> union mode */
A68_208  OLAASIM;  /* collateral clause result */
A68_208  PLAASIM;  /* collateral clause result */
A68_128  QLAASIM;  /* OPERATORS - istruct -> vector */
A68_127  RLAASIM;  /* avoid structure result */
A68_129  SLAASIM;  /* OPERATORS - mode -> union mode */
A68_129  TLAASIM;  /* OPERATORS - mode -> union mode */
A68_128  ULAASIM;  /* OPERATORS - istruct -> vector */
A68_127  VLAASIM;  /* avoid structure result */
A68_129  WLAASIM;  /* OPERATORS - mode -> union mode */
A68_127  XLAASIM;  /* avoid structure result */
A68_129  YLAASIM;  /* OPERATORS - mode -> union mode */
A68_128  ZLAASIM;  /* OPERATORS - istruct -> vector */
A68_127  AMAASIM;  /* avoid structure result */
A68_129  BMAASIM;  /* OPERATORS - mode -> union mode */
A68_129  CMAASIM_fullnode_syntax;
A68_209  DMAASIM;  /* collateral clause result */
A68_209  EMAASIM;  /* collateral clause result */
A68_129  FMAASIM;  /* OPERATORS - mode -> union mode */
A68_128  GMAASIM;  /* OPERATORS - istruct -> vector */
A68_127  HMAASIM;  /* avoid structure result */
A68_129  IMAASIM;  /* OPERATORS - mode -> union mode */
A68_208  JMAASIM;  /* collateral clause result */
A68_208  KMAASIM;  /* collateral clause result */
A68_129  LMAASIM;  /* OPERATORS - mode -> union mode */
A68_128  MMAASIM;  /* OPERATORS - istruct -> vector */
A68_127  NMAASIM;  /* avoid structure result */
A68_129  OMAASIM;  /* OPERATORS - mode -> union mode */
A68_127  PMAASIM;  /* avoid structure result */
A68_129  QMAASIM;  /* OPERATORS - mode -> union mode */
A68_128  RMAASIM;  /* OPERATORS - istruct -> vector */
A68_127  SMAASIM;  /* avoid structure result */
A68_129  TMAASIM;  /* OPERATORS - mode -> union mode */
A68_129  UMAASIM;  /* OPERATORS - mode -> union mode */
A68_128  VMAASIM;  /* OPERATORS - istruct -> vector */
A68_127  WMAASIM;  /* avoid structure result */
A68_129  XMAASIM;  /* OPERATORS - mode -> union mode */
A68_129  YMAASIM_nodename_syntax;
A68_208  ZMAASIM;  /* collateral clause result */
A68_127  ANAASIM;  /* avoid structure result */
A68_129  BNAASIM;  /* OPERATORS - mode -> union mode */
A68_209  CNAASIM;  /* collateral clause result */
A68_208  DNAASIM;  /* collateral clause result */
A68_209  ENAASIM;  /* collateral clause result */
A68_128  FNAASIM;  /* OPERATORS - istruct -> vector */
A68_127  GNAASIM;  /* avoid structure result */
A68_129  HNAASIM;  /* OPERATORS - mode -> union mode */
A68_127  INAASIM;  /* avoid structure result */
A68_129  JNAASIM;  /* OPERATORS - mode -> union mode */
A68_128  KNAASIM;  /* OPERATORS - istruct -> vector */
A68_127  LNAASIM;  /* avoid structure result */
A68_129  MNAASIM;  /* OPERATORS - mode -> union mode */
A68_128  NNAASIM;  /* OPERATORS - istruct -> vector */
A68_127  ONAASIM;  /* avoid structure result */
A68_129  PNAASIM;  /* OPERATORS - mode -> union mode */
A68_128  QNAASIM;  /* OPERATORS - istruct -> vector */
A68_127  RNAASIM;  /* avoid structure result */
A68_129  SNAASIM;  /* OPERATORS - mode -> union mode */
A68_129  TNAASIM_value_syntax;
A68_210  UNAASIM;  /* collateral clause result */
A68_135  VNAASIM;  /* OPERATORS - mode -> union mode */
A68_136  WNAASIM;  /* YIELD */
A68_136  XNAASIM;  /* procedure value */
A68_135  YNAASIM;  /* OPERATORS - unite union */
A68_135  ZNAASIM;  /* OPERATORS - mode -> union mode */
A68_136  AOAASIM;  /* YIELD */
A68_136  BOAASIM;  /* procedure value */
A68_135  COAASIM;  /* OPERATORS - mode -> union mode */
A68_136  DOAASIM;  /* YIELD */
A68_136  EOAASIM;  /* procedure value */
A68_135  FOAASIM;  /* OPERATORS - mode -> union mode */
A68_136  GOAASIM;  /* YIELD */
A68_136  HOAASIM;  /* procedure value */
A68_135  IOAASIM;  /* OPERATORS - mode -> union mode */
A68_136  JOAASIM;  /* YIELD */
A68_136  KOAASIM;  /* procedure value */
A68_135  LOAASIM;  /* OPERATORS - unite union */
A68_135  MOAASIM;  /* OPERATORS - unite union */
A68_135  NOAASIM;  /* OPERATORS - mode -> union mode */
A68_136  OOAASIM;  /* YIELD */
A68_136  POAASIM;  /* procedure value */
A68_135  QOAASIM;  /* OPERATORS - mode -> union mode */
A68_136  ROAASIM;  /* YIELD */
A68_136  SOAASIM;  /* procedure value */
A68_135  TOAASIM;  /* OPERATORS - mode -> union mode */
A68_136  UOAASIM;  /* YIELD */
A68_136  VOAASIM;  /* procedure value */
A68_135  WOAASIM;  /* OPERATORS - mode -> union mode */
A68_136  XOAASIM;  /* YIELD */
A68_136  YOAASIM;  /* procedure value */
A68_135  ZOAASIM;  /* OPERATORS - mode -> union mode */
A68_136  APAASIM;  /* YIELD */
A68_136  BPAASIM;  /* procedure value */
A68_135  CPAASIM;  /* OPERATORS - mode -> union mode */
A68_136  DPAASIM;  /* YIELD */
A68_136  EPAASIM;  /* procedure value */
A68_135  FPAASIM;  /* OPERATORS - unite union */
A68_135  GPAASIM;  /* OPERATORS - mode -> union mode */
A68_136  HPAASIM;  /* YIELD */
A68_136  IPAASIM;  /* procedure value */
A68_138 * JPAASIM;  /* clause result */
A68_146  KPAASIM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(add_simulator_readers);
 /* line 277: */
 /* line 284: */
{ 
 /* line 285: */
LTAAOST_opt( AHFAOST_int_syntax, &MLAASIM );
LLAASIM.data[0] = A_UNITE(NLAASIM,mode2,2,MLAASIM);
 /* line 286: */
LLAASIM.data[1] = RBAASIM_simname_syntax;
PLAASIM.data[0] = SAFAOST_period_syntax;
PLAASIM.data[1] = JBAASIM_semicolon_syntax;
 /* line 288: */
PSAAOST_alt( A_HISVEC(QLAASIM,PLAASIM,2,A68_129 ), &RLAASIM );
OLAASIM.data[0] = A_UNITE(SLAASIM,mode2,2,RLAASIM);
OLAASIM.data[1] = A_UNITE(TLAASIM,mode1,1,(&GBAASIM_fullnode_no));
 /* line 289: */
 /* line 290: */
ATAAOST_prod( A_HISVEC(ULAASIM,OLAASIM,2,A68_129 ), &VLAASIM );
LTAAOST_opt( A_UNITE(WLAASIM,mode2,2,VLAASIM), &XLAASIM );
LLAASIM.data[2] = A_UNITE(YLAASIM,mode2,2,XLAASIM);
ATAAOST_prod( A_HISVEC(ZLAASIM,LLAASIM,3,A68_129 ), &AMAASIM );
CMAASIM_fullnode_syntax = A_UNITE(BMAASIM,mode2,2,AMAASIM);
 /* line 292: */
EMAASIM.data[0] = LBAASIM_openrnd_syntax;
EMAASIM.data[1] = A_UNITE(FMAASIM,mode1,1,(&HBAASIM_nodename_no));
EMAASIM.data[2] = NBAASIM_closernd_syntax;
 /* line 293: */
ATAAOST_prod( A_HISVEC(GMAASIM,EMAASIM,3,A68_129 ), &HMAASIM );
DMAASIM.data[0] = A_UNITE(IMAASIM,mode2,2,HMAASIM);
JMAASIM.data[0] = PBAASIM_vspace_syntax;
KMAASIM.data[0] = SAFAOST_period_syntax;
KMAASIM.data[1] = A_UNITE(LMAASIM,mode1,1,(&GBAASIM_fullnode_no));
 /* line 294: */
ATAAOST_prod( A_HISVEC(MMAASIM,KMAASIM,2,A68_129 ), &NMAASIM );
LTAAOST_opt( A_UNITE(OMAASIM,mode2,2,NMAASIM), &PMAASIM );
JMAASIM.data[1] = A_UNITE(QMAASIM,mode2,2,PMAASIM);
 /* line 296: */
ATAAOST_prod( A_HISVEC(RMAASIM,JMAASIM,2,A68_129 ), &SMAASIM );
DMAASIM.data[1] = A_UNITE(TMAASIM,mode2,2,SMAASIM);
DMAASIM.data[2] = A_UNITE(UMAASIM,mode1,1,(&GBAASIM_fullnode_no));
PSAAOST_alt( A_HISVEC(VMAASIM,DMAASIM,3,A68_129 ), &WMAASIM );
YMAASIM_nodename_syntax = A_UNITE(XMAASIM,mode2,2,WMAASIM);
 /* line 298: */
 /* line 299: */
LTAAOST_opt( UFAASIM_fn_arrow_syntax, &ANAASIM );
ZMAASIM.data[0] = A_UNITE(BNAASIM,mode2,2,ANAASIM);
CNAASIM.data[0] = WFAASIM_query_syntax;
 /* line 300: */
CNAASIM.data[1] = YFAASIM_void_syntax;
 /* line 301: */
DNAASIM.data[0] = AGAASIM_val_id_syntax;
ENAASIM.data[0] = CGAASIM_slash_int_syntax;
 /* line 302: */
ENAASIM.data[1] = EGAASIM_prime_char_syntax;
ENAASIM.data[2] = ADGAOST_quoted_string_syntax;
 /* line 303: */
PSAAOST_alt( A_HISVEC(FNAASIM,ENAASIM,3,A68_129 ), &GNAASIM );
LTAAOST_opt( A_UNITE(HNAASIM,mode2,2,GNAASIM), &INAASIM );
DNAASIM.data[1] = A_UNITE(JNAASIM,mode2,2,INAASIM);
 /* line 304: */
ATAAOST_prod( A_HISVEC(KNAASIM,DNAASIM,2,A68_129 ), &LNAASIM );
CNAASIM.data[2] = A_UNITE(MNAASIM,mode2,2,LNAASIM);
 /* line 305: */
PSAAOST_alt( A_HISVEC(NNAASIM,CNAASIM,3,A68_129 ), &ONAASIM );
ZMAASIM.data[1] = A_UNITE(PNAASIM,mode2,2,ONAASIM);
ATAAOST_prod( A_HISVEC(QNAASIM,ZMAASIM,2,A68_129 ), &RNAASIM );
TNAASIM_value_syntax = A_UNITE(SNAASIM,mode2,2,RNAASIM);
 /* line 306: */
 /* line 307: */
UNAASIM.data[0].No = (&BBAASIM_semicolon_no);
XNAASIM.fn.fn_global = YDAASIM_read_semicolon;
XNAASIM.nonlocals = A68_NIL;
WNAASIM = XNAASIM ;
UNAASIM.data[0].New = A_UNITE(VNAASIM,mode1,1,WNAASIM);
 /* line 308: */
UNAASIM.data[0].Name = VBAASIM_semicolon_str;
 /* line 309: */
UNAASIM.data[0].Help = NCAASIM_semicolon_help;
UNAASIM.data[1].No = A_HEAP(A68_INT );
UNAASIM.data[1].New = A_UUNITE(YNAASIM,1,SAFAOST_period_syntax);
 /* line 310: */
UNAASIM.data[1].Name = UZEAOST_period_str;
 /* line 311: */
UNAASIM.data[1].Help = QCAASIM_period_help;
UNAASIM.data[2].No = (&CBAASIM_openrnd_no);
BOAASIM.fn.fn_global = DEAASIM_read_openrnd;
BOAASIM.nonlocals = A68_NIL;
AOAASIM = BOAASIM ;
UNAASIM.data[2].New = A_UNITE(ZNAASIM,mode1,1,AOAASIM);
UNAASIM.data[2].Name = XBAASIM_openrnd_str;
 /* line 312: */
UNAASIM.data[2].Help = TCAASIM_rndbrk_help;
UNAASIM.data[3].No = (&DBAASIM_closernd_no);
EOAASIM.fn.fn_global = IEAASIM_read_closernd;
EOAASIM.nonlocals = A68_NIL;
DOAASIM = EOAASIM ;
UNAASIM.data[3].New = A_UNITE(COAASIM,mode1,1,DOAASIM);
UNAASIM.data[3].Name = ZBAASIM_closernd_str;
 /* line 313: */
UNAASIM.data[3].Help = TCAASIM_rndbrk_help;
UNAASIM.data[4].No = (&FBAASIM_vspace_no);
HOAASIM.fn.fn_global = NEAASIM_read_vspace;
HOAASIM.nonlocals = A68_NIL;
GOAASIM = HOAASIM ;
UNAASIM.data[4].New = A_UNITE(FOAASIM,mode1,1,GOAASIM);
UNAASIM.data[4].Name = BCAASIM_vspace_str;
 /* line 314: */
UNAASIM.data[4].Help = WCAASIM_vspace_help;
UNAASIM.data[5].No = (&EBAASIM_simname_no);
KOAASIM.fn.fn_global = LDAASIM_read_simname;
KOAASIM.nonlocals = A68_NIL;
JOAASIM = KOAASIM ;
UNAASIM.data[5].New = A_UNITE(IOAASIM,mode1,1,JOAASIM);
UNAASIM.data[5].Name = ECAASIM_simname_str;
 /* line 315: */
UNAASIM.data[5].Help = ZCAASIM_simname_help;
UNAASIM.data[6].No = (&GBAASIM_fullnode_no);
UNAASIM.data[6].New = A_UUNITE(LOAASIM,1,CMAASIM_fullnode_syntax);
UNAASIM.data[6].Name = HCAASIM_fullnode_str;
 /* line 316: */
UNAASIM.data[6].Help = CDAASIM_fullnode_help;
UNAASIM.data[7].No = (&HBAASIM_nodename_no);
UNAASIM.data[7].New = A_UUNITE(MOAASIM,1,YMAASIM_nodename_syntax);
UNAASIM.data[7].Name = KCAASIM_nodename_str;
 /* line 317: */
UNAASIM.data[7].Help = FDAASIM_nodename_help;
UNAASIM.data[8].No = (&MFAASIM_fn_arrow_no);
POAASIM.fn.fn_global = VHAASIM_read_fn_arrow;
POAASIM.nonlocals = A68_NIL;
OOAASIM = POAASIM ;
UNAASIM.data[8].New = A_UNITE(NOAASIM,mode1,1,OOAASIM);
UNAASIM.data[8].Name = WGAASIM_fn_arrow_str;
 /* line 318: */
UNAASIM.data[8].Help = EOAAOSL_nullstr;
UNAASIM.data[9].No = (&NFAASIM_query_no);
SOAASIM.fn.fn_global = LIAASIM_read_query;
SOAASIM.nonlocals = A68_NIL;
ROAASIM = SOAASIM ;
UNAASIM.data[9].New = A_UNITE(QOAASIM,mode1,1,ROAASIM);
UNAASIM.data[9].Name = YGAASIM_query_str;
 /* line 319: */
UNAASIM.data[9].Help = EOAAOSL_nullstr;
UNAASIM.data[10].No = (&OFAASIM_void_no);
VOAASIM.fn.fn_global = DIAASIM_read_void;
VOAASIM.nonlocals = A68_NIL;
UOAASIM = VOAASIM ;
UNAASIM.data[10].New = A_UNITE(TOAASIM,mode1,1,UOAASIM);
UNAASIM.data[10].Name = BHAASIM_void_str;
 /* line 320: */
UNAASIM.data[10].Help = EOAAOSL_nullstr;
UNAASIM.data[11].No = (&LFAASIM_val_id_no);
YOAASIM.fn.fn_global = QIAASIM_read_val_id;
YOAASIM.nonlocals = A68_NIL;
XOAASIM = YOAASIM ;
UNAASIM.data[11].New = A_UNITE(WOAASIM,mode1,1,XOAASIM);
UNAASIM.data[11].Name = TGAASIM_val_id_str;
 /* line 321: */
UNAASIM.data[11].Help = EOAAOSL_nullstr;
UNAASIM.data[12].No = (&PFAASIM_slash_int_no);
BPAASIM.fn.fn_global = AJAASIM_read_slash_int;
BPAASIM.nonlocals = A68_NIL;
APAASIM = BPAASIM ;
UNAASIM.data[12].New = A_UNITE(ZOAASIM,mode1,1,APAASIM);
UNAASIM.data[12].Name = NHAASIM_slash_int_str;
 /* line 322: */
UNAASIM.data[12].Help = EOAAOSL_nullstr;
UNAASIM.data[13].No = (&QFAASIM_prime_char_no);
EPAASIM.fn.fn_global = JJAASIM_read_prime_char;
EPAASIM.nonlocals = A68_NIL;
DPAASIM = EPAASIM ;
UNAASIM.data[13].New = A_UNITE(CPAASIM,mode1,1,DPAASIM);
UNAASIM.data[13].Name = QHAASIM_prime_char_str;
 /* line 323: */
UNAASIM.data[13].Help = EOAAOSL_nullstr;
UNAASIM.data[14].No = (&KFAASIM_value_no);
UNAASIM.data[14].New = A_UUNITE(FPAASIM,1,TNAASIM_value_syntax);
UNAASIM.data[14].Name = SGAASIM_value_str;
 /* line 324: */
UNAASIM.data[14].Help = THAASIM_value_help;
UNAASIM.data[15].No = (&PKAASIM_time_no);
IPAASIM.fn.fn_global = ZKAASIM_read_time;
IPAASIM.nonlocals = A68_NIL;
HPAASIM = IPAASIM ;
UNAASIM.data[15].New = A_UNITE(GPAASIM,mode1,1,HPAASIM);
UNAASIM.data[15].Name = UKAASIM_time_str;
 /* line 325: */
 /* line 326: */
UNAASIM.data[15].Help = XKAASIM_time_help;
 /* line 327: */
 /* line 331: */
JPAASIM = EZAAOST_add_readers(Readers, A_HISVEC(KPAASIM,UNAASIM,16,A68_147 ));
} 
A_PROC_EXIT(add_simulator_readers);
return( JPAASIM );
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void WAAASIM(void)   /* initialise DECS simreader */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/simreader.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/ostools/assoc/mfiles/kernelreader.m","/u/model/ella/ostools/assoc/mfiles/commandreader.m","/u/model/ella/ostools/assoc/mfiles/commandsyntax.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_129  IBAASIM;  /* OPERATORS - mode -> union mode */
A68_129  KBAASIM;  /* OPERATORS - mode -> union mode */
A68_129  MBAASIM;  /* OPERATORS - mode -> union mode */
A68_129  OBAASIM;  /* OPERATORS - mode -> union mode */
A68_129  QBAASIM;  /* OPERATORS - mode -> union mode */
A68_129  SBAASIM;  /* OPERATORS - mode -> union mode */
A68_VC  UBAASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  WBAASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  YBAASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ACAASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_129  RFAASIM;  /* OPERATORS - mode -> union mode */
A68_129  TFAASIM;  /* OPERATORS - mode -> union mode */
A68_129  VFAASIM;  /* OPERATORS - mode -> union mode */
A68_129  XFAASIM;  /* OPERATORS - mode -> union mode */
A68_129  ZFAASIM;  /* OPERATORS - mode -> union mode */
A68_129  BGAASIM;  /* OPERATORS - mode -> union mode */
A68_129  DGAASIM;  /* OPERATORS - mode -> union mode */
A68_127  FGAASIM;  /* collateral clause result */
A68_128  KGAASIM;  /* avoid structure result */
A68_129  LGAASIM;  /* OPERATORS - mode -> union mode */
A68_128  MGAASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_128  NGAASIM;  /* OPERATORS - assign op */
A68_129  OGAASIM;  /* OPERATORS - mode -> union mode */
A68_VC  XGAASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  HHAASIM;  /* avoid structure result */
A68_INT  IHAASIM;  /* YIELD */
A68_CHAR * JHAASIM;  /* YIELD */
A68_VC  KHAASIM;  /* OPERATORS - trim index */
A68_VC  LHAASIM;  /* YIELD */
A68_VC  MHAASIM;  /* clause result */
A68_129  QKAASIM;  /* OPERATORS - mode -> union mode */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
TXEAOST();   /* USE kernelreader */
YIBAOST();   /* USE commandreader */
LRAAOST();   /* USE commandsyntax */
JFAAOSI();   /* USE messageproc */
JSCAOST();   /* USE basics */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/simreader.a68";
A_config.translation_time = "Tue Apr  4 11:05:32 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "VAAASIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:05:32 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS simreader);
UEAALIB_a68config(LGAALIB_configinfo, ABAASIM);
 /* line 81: */
 /* line 82: */
 /* line 84: */
JBAASIM_semicolon_syntax = A_UNITE(IBAASIM,mode1,1,(&BBAASIM_semicolon_no));
 /* line 85: */
LBAASIM_openrnd_syntax = A_UNITE(KBAASIM,mode1,1,(&CBAASIM_openrnd_no));
 /* line 86: */
NBAASIM_closernd_syntax = A_UNITE(MBAASIM,mode1,1,(&DBAASIM_closernd_no));
 /* line 87: */
PBAASIM_vspace_syntax = A_UNITE(OBAASIM,mode1,1,(&FBAASIM_vspace_no));
 /* line 88: */
RBAASIM_simname_syntax = A_UNITE(QBAASIM,mode1,1,(&EBAASIM_simname_no));
 /* line 89: */
TBAASIM_nodename_syntax = A_UNITE(SBAASIM,mode1,1,(&HBAASIM_nodename_no));
 /* line 91: */
VBAASIM_semicolon_str = A_HVEC(UBAASIM,';',A68_CHAR );
 /* line 92: */
XBAASIM_openrnd_str = A_HVEC(WBAASIM,'(',A68_CHAR );
 /* line 93: */
ZBAASIM_closernd_str = A_HVEC(YBAASIM,')',A68_CHAR );
 /* line 94: */
BCAASIM_vspace_str = A_HVEC(ACAASIM,'_',A68_CHAR );
 /* line 95: */
ECAASIM_simname_str = DCAASIM;
 /* line 96: */
HCAASIM_fullnode_str = GCAASIM;
 /* line 97: */
KCAASIM_nodename_str = JCAASIM;
 /* line 98: */
NCAASIM_semicolon_help = MCAASIM;
 /* line 99: */
QCAASIM_period_help = PCAASIM;
 /* line 100: */
TCAASIM_rndbrk_help = SCAASIM;
 /* line 101: */
WCAASIM_vspace_help = VCAASIM;
 /* line 102: */
ZCAASIM_simname_help = YCAASIM;
 /* line 104: */
 /* line 105: */
CDAASIM_fullnode_help = BDAASIM;
 /* line 106: */
FDAASIM_nodename_help = EDAASIM;
 /* line 109: */
 /* line 113: */
 /* line 124: */
 /* line 125: */
 /* line 126: */
 /* line 127: */
 /* line 130: */
 /* line 131: */
 /* line 132: */
 /* line 133: */
 /* line 134: */
 /* line 135: */
 /* line 159: */
 /* line 160: */
 /* line 162: */
 /* line 163: */
SFAASIM_value_syntax = A_UNITE(RFAASIM,mode1,1,(&KFAASIM_value_no));
 /* line 164: */
UFAASIM_fn_arrow_syntax = A_UNITE(TFAASIM,mode1,1,(&MFAASIM_fn_arrow_no));
 /* line 165: */
WFAASIM_query_syntax = A_UNITE(VFAASIM,mode1,1,(&NFAASIM_query_no));
 /* line 166: */
YFAASIM_void_syntax = A_UNITE(XFAASIM,mode1,1,(&OFAASIM_void_no));
 /* line 167: */
AGAASIM_val_id_syntax = A_UNITE(ZFAASIM,mode1,1,(&LFAASIM_val_id_no));
 /* line 168: */
CGAASIM_slash_int_syntax = A_UNITE(BGAASIM,mode1,1,(&PFAASIM_slash_int_no));
 /* line 169: */
EGAASIM_prime_char_syntax = A_UNITE(DGAASIM,mode1,1,(&QFAASIM_prime_char_no));
 /* line 171: */
FGAASIM.Type = ESAAOST_star_syn;
HGAASIM_generator( A68_FALSE, &KGAASIM );
NGAASIM = A_HVEC(MGAASIM,A_UNITE(LGAASIM,mode1,1,(&KFAASIM_value_no)),A68_129 ) ;
A_VASSIGN2(NGAASIM,KGAASIM,A68_129 ) ;
FGAASIM.Elements = KGAASIM;
PGAASIM_values_syntax = A_UNITE(OGAASIM,mode2,2,FGAASIM);
 /* line 173: */
SGAASIM_value_str = RGAASIM;
 /* line 174: */
TGAASIM_val_id_str = CIFAOST_ident_str;
 /* line 175: */
WGAASIM_fn_arrow_str = VGAASIM;
 /* line 176: */
YGAASIM_query_str = A_HVEC(XGAASIM,'?',A68_CHAR );
 /* line 177: */
BHAASIM_void_str = AHAASIM;
 /* line 178: */
{ 
DHAASIM_generator( A68_TRUE, &HHAASIM );
GHAASIM_str = HHAASIM;
 /* line 179: */
IHAASIM = 1 ;
JHAASIM = (&A_VINDEX(GHAASIM_str,IHAASIM)) ;
(*JHAASIM) = '/';
LHAASIM = A_VTRIM(KHAASIM,(GHAASIM_str),A_VTSCRIPT(&(KHAASIM.upb),(GHAASIM_str).upb,2,(GHAASIM_str).upb)) ;
A_VASSIGN2(JDFAOST_int_str,LHAASIM,A68_CHAR );
 /* line 180: */
 /* line 181: */
MHAASIM = GHAASIM_str;
} 
NHAASIM_slash_int_str = MHAASIM;
 /* line 182: */
QHAASIM_prime_char_str = PHAASIM;
 /* line 183: */
THAASIM_value_help = SHAASIM;
 /* line 188: */
 /* line 195: */
 /* line 202: */
 /* line 204: */
 /* line 210: */
 /* line 221: */
 /* line 230: */
 /* line 231: */
 /* line 232: */
 /* line 233: */
 /* line 234: */
 /* line 235: */
 /* line 236: */
 /* line 243: */
 /* line 256: */
 /* line 257: */
RKAASIM_time_syntax = A_UNITE(QKAASIM,mode1,1,(&PKAASIM_time_no));
 /* line 258: */
UKAASIM_time_str = TKAASIM;
 /* line 259: */
XKAASIM_time_help = WKAASIM;
 /* line 261: */
 /* line 263: */
 /* line 265: */
 /* line 276: */
 /* line 347: */
A_PROC_EXIT(DECS simreader);
} 
#undef NL
/* end of translation of ./a68files/simreader.a68 */
