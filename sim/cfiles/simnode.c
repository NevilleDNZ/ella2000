
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
/* UNAME:QZEBSIM */
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

A_PROCEDURE(A68_BOOL ,A68t149,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t149  A68_149 ;    /* PROC(CHAR) BOOL */

A_PROCEDURE(A68_VOID ,A68t150,(A68_INT ,A68_VC ,struct A68t108 ),(A68_INT ,A68_VC ,struct A68t108 ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(INT,MODE26,MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t151,(A68_VC ,A68_VC ,struct A68t149 ,struct A68t108 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t149 ,struct A68t108 ,A68_VC *,void *));
typedef struct A68t151  A68_151 ;    /* PROC(REF MODE26,MODE26,MODE149,MODE108) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t152,(A68_VC ),(A68_VC ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(REF MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t153,(A68_INT *,struct A68t108 ),(A68_INT *,struct A68t108 ,void *));
typedef struct A68t153  A68_153 ;    /* PROC(REF INT,MODE108) BOOL */
struct A68t155 ;

A_PROCEDURE(A68_VOID ,A68t154,(struct A68t155 ,struct A68t108 ,A68_VC *),(struct A68t155 ,struct A68t108 ,A68_VC *,void *));
typedef struct A68t154  A68_154 ;    /* PROC(MODE155,MODE108) REF MODE26 */
struct A68t155{
A68_BOOL  Get_first;
A_PAD_BOOL(PAD_27)
A68_BOOL  Check;
A_PAD_BOOL(PAD_28)
};
typedef struct A68t155  A68_155 ;    /* STRUCT(BOOL,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t156,(struct A68t155 ,A68_VC ,struct A68t108 ,A68_VC *),(struct A68t155 ,A68_VC ,struct A68t108 ,A68_VC *,void *));
typedef struct A68t156  A68_156 ;    /* PROC(MODE155,MODE26,MODE108) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t157,(A68_BOOL ,struct A68t108 ,A68_VC *),(A68_BOOL ,struct A68t108 ,A68_VC *,void *));
typedef struct A68t157  A68_157 ;    /* PROC(BOOL,MODE108) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t158,(struct A68t130 ),(struct A68t130 ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(MODE130) BOOL */

A_PROCEDURE(A68_INT ,A68t159,(struct A68t130 ,struct A68t108 ),(struct A68t130 ,struct A68t108 ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(MODE130,MODE108) INT */

A_PROCEDURE(A68_VOID ,A68t160,(struct A68t130 ,struct A68t108 ,A68_VC *),(struct A68t130 ,struct A68t108 ,A68_VC *,void *));
typedef struct A68t160  A68_160 ;    /* PROC(MODE130,MODE108) REF MODE26 */
struct A68t162 ;

A_PROCEDURE(A68_VOID ,A68t161,(struct A68t130 ,A68_VC ,struct A68t108 ,struct A68t162 *),(struct A68t130 ,A68_VC ,struct A68t108 ,struct A68t162 *,void *));
typedef struct A68t161  A68_161 ;    /* PROC(MODE130,MODE26,MODE108) MODE162 */
struct A68t162{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t162  A68_162 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t163,(struct A68t131 ,A68_INT *,A68_VC ,struct A68t108 ,struct A68t92 *),(struct A68t131 ,A68_INT *,A68_VC ,struct A68t108 ,struct A68t92 *,void *));
typedef struct A68t163  A68_163 ;    /* PROC(REF MODE131,REF INT,REF MODE26,MODE108) MODE92 */

A_PROCEDURE(A68_VOID ,A68t164,(struct A68t130 ,A68_BOOL *,A68_VC ,struct A68t108 ,A68_VC *),(struct A68t130 ,A68_BOOL *,A68_VC ,struct A68t108 ,A68_VC *,void *));
typedef struct A68t164  A68_164 ;    /* PROC(MODE130,REF BOOL,MODE26,MODE108) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t165,(struct A68t130 ,struct A68t108 ,struct A68t46 ),(struct A68t130 ,struct A68t108 ,struct A68t46 ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(MODE130,MODE108,MODE46) INT */
struct A68t166{
A68_INT  Lwb;
A_PAD_INT(PAD_29)
A68_INT  Upb;
A_PAD_INT(PAD_30)
};
typedef struct A68t166  A68_166 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t167,(struct A68t130 ,struct A68t166 ,struct A68t108 ,struct A68t166 *),(struct A68t130 ,struct A68t166 ,struct A68t108 ,struct A68t166 *,void *));
typedef struct A68t167  A68_167 ;    /* PROC(MODE130,MODE166,MODE108) MODE166 */

A_PROCEDURE(A68_VOID ,A68t168,(A68_CHAR ,A68_VC ,struct A68t108 ,A68_VC *),(A68_CHAR ,A68_VC ,struct A68t108 ,A68_VC *,void *));
typedef struct A68t168  A68_168 ;    /* PROC(CHAR,MODE26,MODE108) REF MODE26 */

A_PROCEDURE(A68_CHAR ,A68t169,(struct A68t130 ,struct A68t108 ),(struct A68t130 ,struct A68t108 ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(MODE130,MODE108) CHAR */

A_PROCEDURE(struct A68t138 *,A68t170,(void),(void *));
typedef struct A68t170  A68_170 ;    /* PROC REF MODE138 */

A_PROCEDURE(struct A68t138 *,A68t171,(struct A68t138 *),(struct A68t138 *,void *));
typedef struct A68t171  A68_171 ;    /* PROC(REF MODE138) REF MODE138 */

A_PROCEDURE(A68_BOOL ,A68t172,(void),(void *));
typedef struct A68t172  A68_172 ;    /* PROC BOOL */
struct A68t173{
A68_BOOL  Logging;
A_PAD_BOOL(PAD_31)
A68_BOOL  Outputing;
A_PAD_BOOL(PAD_32)
A68_BOOL  Seeing_in;
A_PAD_BOOL(PAD_33)
A68_BOOL  Seeing_out;
A_PAD_BOOL(PAD_34)
A68_BOOL  Paging;
A_PAD_BOOL(PAD_35)
A68_BOOL  Clock;
A_PAD_BOOL(PAD_36)
A68_BOOL  Screen_output;
A_PAD_BOOL(PAD_37)
A68_INT  Width;
A_PAD_INT(PAD_38)
A68_INT  Page_count;
A_PAD_INT(PAD_39)
A68_INT  Page_length;
A_PAD_INT(PAD_40)
A68_INT  Eof_count;
A_PAD_INT(PAD_41)
struct A68t174 * Standard_reader;
struct A68t175 * Infile;
struct A68t105  Prompt;
struct A68t176 * Logfile;
struct A68t176 * Outfile;
};
typedef struct A68t173  A68_173 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,INT,INT,REF MODE174,REF MODE175,MODE105,REF MODE176,REF MODE176)  */

A_PROCEDURE(A68_INT ,A68t177,(A68_VC *,struct A68t108 ),(A68_VC *,struct A68t108 ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(REF REF MODE26,MODE108) INT */
struct A68t174{
A68_VC  Rdbuffer;
struct A68t177  Rdline;
A68_INT  Rdcharend;
A_PAD_INT(PAD_42)
A68_INT  Rdcharno;
A_PAD_INT(PAD_43)
A68_INT  Start_of_word;
A_PAD_INT(PAD_44)
struct A68t178 * Stack;
};
typedef struct A68t174  A68_174 ;    /* STRUCT(REF MODE26,MODE177,INT,INT,INT,REF MODE178)  */
struct A68t175{
struct A68t176 * File;
A68_BOOL  Suspended;
A_PAD_BOOL(PAD_45)
A68_INT  Number;
A_PAD_INT(PAD_46)
A68_VC  Name;
struct A68t174 * Reader;
struct A68t175 * Previous;
};
typedef struct A68t175  A68_175 ;    /* STRUCT(REF MODE176,BOOL,INT,REF MODE26,REF MODE174,REF MODE175)  */
struct A68t176{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t176  A68_176 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t178{
A68_VC  Line;
struct A68t178 * Rest;
};
typedef struct A68t178  A68_178 ;    /* STRUCT(REF MODE26,REF MODE178)  */

A_PROCEDURE(struct A68t173 *,A68t179,(void),(void *));
typedef struct A68t179  A68_179 ;    /* PROC REF MODE173 */

A_PROCEDURE(A68_VOID ,A68t180,(struct A68t108 ),(struct A68t108 ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t181,(A68_VC ,struct A68t108 ),(A68_VC ,struct A68t108 ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(REF MODE26,MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t182,(A68_VC ,struct A68t108 ),(A68_VC ,struct A68t108 ,void *));
typedef struct A68t182  A68_182 ;    /* PROC(MODE26,MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t183,(A68_INT ,struct A68t108 ),(A68_INT ,struct A68t108 ,void *));
typedef struct A68t183  A68_183 ;    /* PROC(INT,MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t184,(struct A68t105 ),(struct A68t105 ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(MODE105) VOID */
struct A68t185{
A68_INT  Svoid;
A_PAD_INT(PAD_47)
};
typedef struct A68t185  A68_185 ;    /* STRUCT(INT)  */
struct A68t186{
A68_INT  Snull;
A_PAD_INT(PAD_48)
};
typedef struct A68t186  A68_186 ;    /* STRUCT(INT)  */
struct A68t187{
A68_VC  Id;
A68_INT  Lwb;
A_PAD_INT(PAD_49)
A68_INT  Upb;
A_PAD_INT(PAD_50)
};
typedef struct A68t187  A68_187 ;    /* STRUCT(REF MODE26,INT,INT)  */
struct A68t188{
A68_VC  Id;
A68_VC  Char;
};
typedef struct A68t188  A68_188 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t189{
A68_INT  No;
A_PAD_INT(PAD_51)
struct A68t188  T;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(INT,MODE188)  */
struct A68t191 { A68_INT mode; union {
struct A68t190 * mode1;
struct A68t187 * mode2;
struct A68t188 * mode3;
struct A68t192 * mode4;
struct A68t189 * mode5;
struct A68t193 * mode6;
struct A68t194 * mode7;
struct A68t185  mode8;
struct A68t186  mode9;
} data; };
typedef struct A68t191  A68_191 ;    /* UNION(REF MODE190,REF MODE187,REF MODE188,REF MODE192,REF MODE189,REF MODE193,REF MODE194,MODE185,MODE186)  */
struct A68t190{
A68_VC  Id;
struct A68t191  T;
struct A68t190 * Rest;
};
typedef struct A68t190  A68_190 ;    /* STRUCT(REF MODE26,MODE191,REF MODE190)  */
struct A68t192{
A68_INT  No;
A_PAD_INT(PAD_52)
struct A68t191  Type;
};
typedef struct A68t192  A68_192 ;    /* STRUCT(INT,MODE191)  */
struct A68t193{
struct A68t191  From;
struct A68t191  To;
};
typedef struct A68t193  A68_193 ;    /* STRUCT(MODE191,MODE191)  */
struct A68t194{
struct A68t191  T;
struct A68t194 * Rest;
};
typedef struct A68t194  A68_194 ;    /* STRUCT(MODE191,REF MODE194)  */
struct A68t195 { A68_INT mode; union {
struct A68t190 * mode1;
struct A68t187 * mode2;
struct A68t188 * mode3;
} data; };
typedef struct A68t195  A68_195 ;    /* UNION(REF MODE190,REF MODE187,REF MODE188)  */
struct A68t196{
A68_INT  Svvoid;
A_PAD_INT(PAD_53)
};
typedef struct A68t196  A68_196 ;    /* STRUCT(INT)  */
struct A68t197{
A68_INT  Svnull;
A_PAD_INT(PAD_54)
};
typedef struct A68t197  A68_197 ;    /* STRUCT(INT)  */
struct A68t198{
struct A68t191  Type;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(MODE191)  */
struct A68t199{
struct A68t187 * Type;
A68_INT  Value;
A_PAD_INT(PAD_55)
};
typedef struct A68t199  A68_199 ;    /* STRUCT(REF MODE187,INT)  */
struct A68t200{
struct A68t188 * Type;
A68_CHAR  Value;
A_PAD_CHAR(PAD_56)
};
typedef struct A68t200  A68_200 ;    /* STRUCT(REF MODE188,CHAR)  */
struct A68t201{
struct A68t189 * Type;
A68_VC  Value;
};
typedef struct A68t201  A68_201 ;    /* STRUCT(REF MODE189,REF MODE26)  */
struct A68t203 { A68_INT mode; union {
struct A68t198 * mode1;
struct A68t199 * mode2;
struct A68t200 * mode3;
struct A68t201 * mode4;
struct A68t202 * mode5;
struct A68t204 * mode6;
struct A68t205 * mode7;
struct A68t196  mode8;
struct A68t197  mode9;
} data; };
typedef struct A68t203  A68_203 ;    /* UNION(REF MODE198,REF MODE199,REF MODE200,REF MODE201,REF MODE202,REF MODE204,REF MODE205,MODE196,MODE197)  */
struct A68t202{
struct A68t190 * Type;
A68_INT  Tag;
A_PAD_INT(PAD_57)
struct A68t203  Assoc;
};
typedef struct A68t202  A68_202 ;    /* STRUCT(REF MODE190,INT,MODE203)  */
struct A68t204{
struct A68t203  Head;
struct A68t204 * Tail;
};
typedef struct A68t204  A68_204 ;    /* STRUCT(MODE203,REF MODE204)  */
struct A68t205{
struct A68t203  From;
struct A68t203  To;
};
typedef struct A68t205  A68_205 ;    /* STRUCT(MODE203,MODE203)  */
struct A68t206{
A68_INT  Instoffset;
A_PAD_INT(PAD_58)
A68_INT  Offset;
A_PAD_INT(PAD_59)
A68_INT  Size;
A_PAD_INT(PAD_60)
};
typedef struct A68t206  A68_206 ;    /* STRUCT(INT,INT,INT)  */
A_VECTOR(struct A68t206 ,A68t208);
typedef struct A68t208  A68_208 ;    /* VECTOR [] MODE206 */
struct A68t207{
struct A68t191  Type;
struct A68t208  Blocks;
};
typedef struct A68t207  A68_207 ;    /* STRUCT(MODE191,REF MODE208)  */
struct A68t209{
struct A68t207  Firstcell;
A68_INT  Lwb;
A_PAD_INT(PAD_61)
A68_INT  Ramsize;
A_PAD_INT(PAD_62)
A68_INT  Step;
A_PAD_INT(PAD_63)
};
typedef struct A68t209  A68_209 ;    /* STRUCT(MODE207,INT,INT,INT)  */
struct A68t210{
A68_VC  Uname;
A68_VC  Lname;
A68_INT  Node;
A_PAD_INT(PAD_64)
};
typedef struct A68t210  A68_210 ;    /* STRUCT(REF MODE26,REF MODE26,INT)  */
A_VECTOR(struct A68t210 ,A68t212);
typedef struct A68t212  A68_212 ;    /* VECTOR [] MODE210 */
struct A68t211{
struct A68t209 * Ram;
struct A68t207  Outputs;
A68_INT  Noinputs;
A_PAD_INT(PAD_65)
struct A68t212  Body;
};
typedef struct A68t211  A68_211 ;    /* STRUCT(REF MODE209,MODE207,INT,REF MODE212)  */
struct A68t213{
A68_INT  Fn;
A_PAD_INT(PAD_66)
A68_INT  Instance;
A_PAD_INT(PAD_67)
};
typedef struct A68t213  A68_213 ;    /* STRUCT(INT,INT)  */
struct A68t214{
struct A68t207 * Wire;
A68_INT  Instance;
A_PAD_INT(PAD_68)
};
typedef struct A68t214  A68_214 ;    /* STRUCT(REF MODE207,INT)  */
struct A68t215 { A68_INT mode; union {
struct A68t213  mode1;
struct A68t214  mode2;
} data; };
typedef struct A68t215  A68_215 ;    /* UNION(MODE213,MODE214)  */
struct A68t216 { A68_INT mode; union {
struct A68t213  mode1;
struct A68t207  mode2;
} data; };
typedef struct A68t216  A68_216 ;    /* UNION(MODE213,MODE207)  */
struct A68t217{
struct A68t215  Node;
A68_INT  Circuit;
A_PAD_INT(PAD_69)
A68_INT  Base;
A_PAD_INT(PAD_70)
};
typedef struct A68t217  A68_217 ;    /* STRUCT(MODE215,INT,INT)  */

A_PROCEDURE(A68_BOOL ,A68t218,(struct A68t207 ,struct A68t207 ),(struct A68t207 ,struct A68t207 ,void *));
typedef struct A68t218  A68_218 ;    /* PROC(MODE207,MODE207) BOOL */

A_PROCEDURE(A68_BOOL ,A68t219,(struct A68t213 ,struct A68t213 ),(struct A68t213 ,struct A68t213 ,void *));
typedef struct A68t219  A68_219 ;    /* PROC(MODE213,MODE213) BOOL */

A_PROCEDURE(A68_BOOL ,A68t220,(struct A68t214 ,struct A68t214 ),(struct A68t214 ,struct A68t214 ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(MODE214,MODE214) BOOL */

A_PROCEDURE(A68_BOOL ,A68t221,(struct A68t215 ,struct A68t215 ),(struct A68t215 ,struct A68t215 ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(MODE215,MODE215) BOOL */

A_PROCEDURE(A68_BOOL ,A68t222,(struct A68t217 ,struct A68t217 ),(struct A68t217 ,struct A68t217 ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(MODE217,MODE217) BOOL */

A_PROCEDURE(A68_BOOL ,A68t223,(struct A68t191 ,struct A68t191 ),(struct A68t191 ,struct A68t191 ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(MODE191,MODE191) BOOL */

A_PROCEDURE(A68_BOOL ,A68t224,(struct A68t203 ,struct A68t203 ),(struct A68t203 ,struct A68t203 ,void *));
typedef struct A68t224  A68_224 ;    /* PROC(MODE203,MODE203) BOOL */

A_PROCEDURE(A68_VOID ,A68t225,(struct A68t208 ,struct A68t208 ,struct A68t208 *),(struct A68t208 ,struct A68t208 ,struct A68t208 *,void *));
typedef struct A68t225  A68_225 ;    /* PROC(REF MODE208,REF MODE208) REF MODE208 */

A_PROCEDURE(A68_INT ,A68t226,(struct A68t191 ),(struct A68t191 ,void *));
typedef struct A68t226  A68_226 ;    /* PROC(MODE191) INT */

A_PROCEDURE(struct A68t194 *,A68t227,(struct A68t191 ,A68_INT ,A68_INT ),(struct A68t191 ,A68_INT ,A68_INT ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(MODE191,INT,INT) REF MODE194 */

A_PROCEDURE(A68_VOID ,A68t228,(struct A68t207 ,A68_INT ,A68_INT ,struct A68t207 *),(struct A68t207 ,A68_INT ,A68_INT ,struct A68t207 *,void *));
typedef struct A68t228  A68_228 ;    /* PROC(MODE207,INT,INT) MODE207 */

A_PROCEDURE(A68_VOID ,A68t229,(struct A68t209 *,A68_INT ,A68_INT ,struct A68t207 *),(struct A68t209 *,A68_INT ,A68_INT ,struct A68t207 *,void *));
typedef struct A68t229  A68_229 ;    /* PROC(REF MODE209,INT,INT) MODE207 */

A_PROCEDURE(A68_VC *,A68t230,(struct A68t203 ,struct A68t191 ),(struct A68t203 ,struct A68t191 ,void *));
typedef struct A68t230  A68_230 ;    /* PROC(MODE203,MODE191) REF REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t231,(A68_VC ,struct A68t191 ,struct A68t203 *),(A68_VC ,struct A68t191 ,struct A68t203 *,void *));
typedef struct A68t231  A68_231 ;    /* PROC(REF MODE26,MODE191) MODE203 */

A_PROCEDURE(A68_INT ,A68t232,(struct A68t217 ),(struct A68t217 ,void *));
typedef struct A68t232  A68_232 ;    /* PROC(MODE217) INT */

A_PROCEDURE(A68_VOID ,A68t233,(struct A68t217 ,A68_INT ),(struct A68t217 ,A68_INT ,void *));
typedef struct A68t233  A68_233 ;    /* PROC(MODE217,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t234,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t234  A68_234 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t235,(struct A68t176 *,A68_INT ,struct A68t43 ,struct A68t36 ,struct A68t215 *),(struct A68t176 *,A68_INT ,struct A68t43 ,struct A68t36 ,struct A68t215 *,void *));
typedef struct A68t235  A68_235 ;    /* PROC(REF MODE176,INT,MODE43,MODE36) MODE215 */

A_PROCEDURE(A68_VOID ,A68t236,(A68_VC ,struct A68t36 ,struct A68t215 *),(A68_VC ,struct A68t36 ,struct A68t215 *,void *));
typedef struct A68t236  A68_236 ;    /* PROC(REF MODE26,MODE36) MODE215 */

A_PROCEDURE(A68_VOID ,A68t237,(A68_INT *,A68_BOOL *,struct A68t36 ),(A68_INT *,A68_BOOL *,struct A68t36 ,void *));
typedef struct A68t237  A68_237 ;    /* PROC(REF INT,REF BOOL,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t238,(struct A68t217 ,A68_VC ),(struct A68t217 ,A68_VC ,void *));
typedef struct A68t238  A68_238 ;    /* PROC(MODE217,REF MODE26) VOID */
struct A68t240 ;

A_PROCEDURE(A68_VOID ,A68t239,(A68_INT *,A68_VC *,struct A68t240 ,struct A68t240 ,struct A68t36 ),(A68_INT *,A68_VC *,struct A68t240 ,struct A68t240 ,struct A68t36 ,void *));
typedef struct A68t239  A68_239 ;    /* PROC(REF INT,REF REF MODE26,MODE240,MODE240,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t240,(A68_VC ,struct A68t36 ),(A68_VC ,struct A68t36 ,void *));
typedef struct A68t240  A68_240 ;    /* PROC(REF MODE26,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t241,(A68_INT ,A68_INT ,A68_VC ,struct A68t240 ,struct A68t240 ,struct A68t43 ,struct A68t36 ,struct A68t215 *),(A68_INT ,A68_INT ,A68_VC ,struct A68t240 ,struct A68t240 ,struct A68t43 ,struct A68t36 ,struct A68t215 *,void *));
typedef struct A68t241  A68_241 ;    /* PROC(INT,INT,REF MODE26,MODE240,MODE240,MODE43,MODE36) MODE215 */

A_PROCEDURE(A68_VOID ,A68t242,(void),(void *));
typedef struct A68t242  A68_242 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t243,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t243  A68_243 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t244,(A68_VC ,struct A68t36 ,struct A68t217 *),(A68_VC ,struct A68t36 ,struct A68t217 *,void *));
typedef struct A68t244  A68_244 ;    /* PROC(REF MODE26,MODE36) MODE217 */

A_PROCEDURE(A68_VOID ,A68t245,(struct A68t217 ),(struct A68t217 ,void *));
typedef struct A68t245  A68_245 ;    /* PROC(MODE217) VOID */

A_PROCEDURE(A68_VOID ,A68t246,(struct A68t217 ,struct A68t217 *),(struct A68t217 ,struct A68t217 *,void *));
typedef struct A68t246  A68_246 ;    /* PROC(MODE217) MODE217 */

A_PROCEDURE(A68_VOID ,A68t247,(struct A68t217 ,struct A68t217 ),(struct A68t217 ,struct A68t217 ,void *));
typedef struct A68t247  A68_247 ;    /* PROC(MODE217,MODE217) VOID */

A_PROCEDURE(A68_BOOL ,A68t248,(struct A68t217 ),(struct A68t217 ,void *));
typedef struct A68t248  A68_248 ;    /* PROC(MODE217) BOOL */

A_PROCEDURE(A68_VOID ,A68t249,(A68_INT ,struct A68t211 *),(A68_INT ,struct A68t211 *,void *));
typedef struct A68t249  A68_249 ;    /* PROC(INT) MODE211 */

A_PROCEDURE(A68_VOID ,A68t250,(A68_INT ,struct A68t216 *),(A68_INT ,struct A68t216 *,void *));
typedef struct A68t250  A68_250 ;    /* PROC(INT) MODE216 */

A_PROCEDURE(A68_VOID ,A68t251,(struct A68t152 ),(struct A68t152 ,void *));
typedef struct A68t251  A68_251 ;    /* PROC(MODE152) VOID */

A_PROCEDURE(A68_VOID ,A68t252,(struct A68t211 ,struct A68t207 *),(struct A68t211 ,struct A68t207 *,void *));
typedef struct A68t252  A68_252 ;    /* PROC(MODE211) MODE207 */

A_PROCEDURE(A68_VOID ,A68t253,(A68_INT ,struct A68t207 *),(A68_INT ,struct A68t207 *,void *));
typedef struct A68t253  A68_253 ;    /* PROC(INT) MODE207 */
struct A68t254{
A68_INT  Repeat;
A_PAD_INT(PAD_71)
A68_VC  Name;
A68_VC  Aliasname;
A68_CHAR  Op;
A_PAD_CHAR(PAD_72)
struct A68t255 * Bind;
struct A68t254 * Rest;
};
typedef struct A68t254  A68_254 ;    /* STRUCT(INT,REF MODE26,REF MODE26,CHAR,REF MODE255,REF MODE254)  */
struct A68t255{
A68_VC  Uname;
A68_VC  Lname;
struct A68t217 * Node;
};
typedef struct A68t255  A68_255 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE217)  */
struct A68t257 ;

A_PROCEDURE(A68_BOOL ,A68t256,(A68_VC ,A68_INT ,struct A68t257 ),(A68_VC ,A68_INT ,struct A68t257 ,void *));
typedef struct A68t256  A68_256 ;    /* PROC(REF MODE26,INT,MODE257) BOOL */
struct A68t257 { A68_INT mode; union {
struct A68t254 * mode1;
A68_INT  mode2;
struct A68t198 * mode3;
struct A68t199 * mode4;
struct A68t200 * mode5;
struct A68t201 * mode6;
struct A68t202 * mode7;
struct A68t204 * mode8;
struct A68t205 * mode9;
struct A68t196  mode10;
struct A68t197  mode11;
} data; };
typedef struct A68t257  A68_257 ;    /* UNION(REF MODE254,INT,REF MODE198,REF MODE199,REF MODE200,REF MODE201,REF MODE202,REF MODE204,REF MODE205,MODE196,MODE197)  */

A_PROCEDURE(A68_BOOL ,A68t258,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t258  A68_258 ;    /* PROC(REF MODE26,INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t259,(A68_INT ),(A68_INT ,void *));
typedef struct A68t259  A68_259 ;    /* PROC(INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t260,(A68_VC ,A68_INT ,struct A68t254 **),(A68_VC ,A68_INT ,struct A68t254 **,void *));
typedef struct A68t260  A68_260 ;    /* PROC(REF MODE26,INT,REF REF MODE254) BOOL */

A_PROCEDURE(A68_BOOL ,A68t261,(A68_INT ,A68_INT *),(A68_INT ,A68_INT *,void *));
typedef struct A68t261  A68_261 ;    /* PROC(INT,REF INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t262,(A68_INT ,A68_INT ,struct A68t254 **),(A68_INT ,A68_INT ,struct A68t254 **,void *));
typedef struct A68t262  A68_262 ;    /* PROC(INT,INT,REF REF MODE254) BOOL */

A_PROCEDURE(A68_BOOL ,A68t263,(A68_VC ,A68_INT ,struct A68t203 *),(A68_VC ,A68_INT ,struct A68t203 *,void *));
typedef struct A68t263  A68_263 ;    /* PROC(REF MODE26,INT,REF MODE203) BOOL */

A_PROCEDURE(A68_BOOL ,A68t264,(A68_VC ,A68_INT ,A68_INT *),(A68_VC ,A68_INT ,A68_INT *,void *));
typedef struct A68t264  A68_264 ;    /* PROC(REF MODE26,INT,REF INT) BOOL */

A_PROCEDURE(struct A68t254 *,A68t265,(void),(void *));
typedef struct A68t265  A68_265 ;    /* PROC REF MODE254 */
struct A68t267 ;
struct A68t268 ;
struct A68t269 ;

A_PROCEDURE(A68_VOID ,A68t266,(struct A68t267 ,struct A68t43 ,struct A68t268 ,struct A68t269 ),(struct A68t267 ,struct A68t43 ,struct A68t268 ,struct A68t269 ,void *));
typedef struct A68t266  A68_266 ;    /* PROC(MODE267,MODE43,MODE268,MODE269) VOID */

A_PROCEDURE(A68_VOID ,A68t267,(struct A68t254 *),(struct A68t254 *,void *));
typedef struct A68t267  A68_267 ;    /* PROC(REF MODE254) VOID */

A_PROCEDURE(A68_VOID ,A68t268,(A68_INT ),(A68_INT ,void *));
typedef struct A68t268  A68_268 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t269,(struct A68t203 ),(struct A68t203 ,void *));
typedef struct A68t269  A68_269 ;    /* PROC(MODE203) VOID */
struct A68t271 ;

A_PROCEDURE(A68_VOID ,A68t270,(struct A68t265 ,struct A68t105 ,struct A68t102 ,struct A68t271 ),(struct A68t265 ,struct A68t105 ,struct A68t102 ,struct A68t271 ,void *));
typedef struct A68t270  A68_270 ;    /* PROC(MODE265,MODE105,MODE102,MODE271) VOID */

A_PROCEDURE(A68_VOID ,A68t271,(struct A68t203 *),(struct A68t203 *,void *));
typedef struct A68t271  A68_271 ;    /* PROC MODE203 */

A_PROCEDURE(A68_VOID ,A68t272,(struct A68t242 ),(struct A68t242 ,void *));
typedef struct A68t272  A68_272 ;    /* PROC(MODE242) VOID */

A_PROCEDURE(A68_VOID ,A68t273,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t273  A68_273 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,54,A68t274);
typedef struct A68t274  A68_274 ;    /* STRUCT 54 CHAR */

A_PROCEDURE(A68_VOID ,A68t275,(A68_CHAR ,A68_VC ,A68_VC *),(A68_CHAR ,A68_VC ,A68_VC *,void *));
typedef struct A68t275  A68_275 ;    /* PROC(CHAR,MODE26) MODE26 */
A_ISTRUCT(A68_CHAR ,1,A68t276);
typedef struct A68t276  A68_276 ;    /* STRUCT 0 CHAR */

A_PROCEDURE(A68_VOID ,A68t277,(struct A68t254 *,A68_VC *),(struct A68t254 *,A68_VC *,void *));
typedef struct A68t277  A68_277 ;    /* PROC(REF MODE254) MODE26 */

A_PROCEDURE(struct A68t254 *,A68t278,(A68_INT ,A68_VC ,struct A68t255 *),(A68_INT ,A68_VC ,struct A68t255 *,void *));
typedef struct A68t278  A68_278 ;    /* PROC(INT,REF MODE26,REF MODE255) REF MODE254 */

A_PROCEDURE(struct A68t254 *,A68t279,(struct A68t254 *,A68_CHAR ,struct A68t254 *),(struct A68t254 *,A68_CHAR ,struct A68t254 *,void *));
typedef struct A68t279  A68_279 ;    /* PROC(REF MODE254,CHAR,REF MODE254) REF MODE254 */

A_PROCEDURE(A68_BOOL ,A68t280,(A68_INT *,struct A68t36 ),(A68_INT *,struct A68t36 ,void *));
typedef struct A68t280  A68_280 ;    /* PROC(REF INT,MODE36) BOOL */

A_PROCEDURE(A68_VOID ,A68t281,(struct A68t36 ,A68_VC *),(struct A68t36 ,A68_VC *,void *));
typedef struct A68t281  A68_281 ;    /* PROC(MODE36) REF MODE26 */

A_PROCEDURE(A68_CHAR ,A68t282,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t282  A68_282 ;    /* PROC(MODE36) CHAR */

A_PROCEDURE(struct A68t254 *,A68t283,(struct A68t280 ,struct A68t281 ,struct A68t282 ,struct A68t242 ,struct A68t36 ),(struct A68t280 ,struct A68t281 ,struct A68t282 ,struct A68t242 ,struct A68t36 ,void *));
typedef struct A68t283  A68_283 ;    /* PROC(MODE280,MODE281,MODE282,MODE242,MODE36) REF MODE254 */
A_ISTRUCT(A68_CHAR ,37,A68t284);
typedef struct A68t284  A68_284 ;    /* STRUCT 37 CHAR */

A_PROCEDURE(struct A68t254 *,A68t285,(struct A68t131 ,A68_INT *,struct A68t108 ),(struct A68t131 ,A68_INT *,struct A68t108 ,void *));
typedef struct A68t285  A68_285 ;    /* PROC(REF MODE131,REF INT,MODE108) REF MODE254 */
A_ISTRUCT(A68_CHAR ,16,A68t286);
typedef struct A68t286  A68_286 ;    /* STRUCT 16 CHAR */

A_PROCEDURE(struct A68t254 *,A68t287,(A68_VC ,struct A68t36 ),(A68_VC ,struct A68t36 ,void *));
typedef struct A68t287  A68_287 ;    /* PROC(REF MODE26,MODE36) REF MODE254 */

A_PROCEDURE(A68_INT ,A68t288,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t288  A68_288 ;    /* PROC(CHAR,MODE26) INT */
A_ISTRUCT(A68_CHAR ,6,A68t289);
typedef struct A68t289  A68_289 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t290);
typedef struct A68t290  A68_290 ;    /* STRUCT 12 CHAR */

A_PROCEDURE(A68_CHAR ,A68t291,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t291  A68_291 ;    /* PROC(CHAR) CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t292);
typedef struct A68t292  A68_292 ;    /* STRUCT 19 CHAR */

A_PROCEDURE(A68_INT ,A68t293,(A68_INT ,A68_BOOL ,struct A68t36 ),(A68_INT ,A68_BOOL ,struct A68t36 ,void *));
typedef struct A68t293  A68_293 ;    /* PROC(INT,BOOL,MODE36) INT */
A_ISTRUCT(A68_CHAR ,18,A68t294);
typedef struct A68t294  A68_294 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,25,A68t295);
typedef struct A68t295  A68_295 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t296);
typedef struct A68t296  A68_296 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,17,A68t297);
typedef struct A68t297  A68_297 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t298);
typedef struct A68t298  A68_298 ;    /* STRUCT 10 CHAR */

A_PROCEDURE(struct A68t254 *,A68t299,(struct A68t254 *),(struct A68t254 *,void *));
typedef struct A68t299  A68_299 ;    /* PROC(REF MODE254) REF MODE254 */

A_PROCEDURE(struct A68t254 *,A68t300,(struct A68t254 *,struct A68t254 *),(struct A68t254 *,struct A68t254 *,void *));
typedef struct A68t300  A68_300 ;    /* PROC(REF MODE254,REF MODE254) REF MODE254 */

A_PROCEDURE(struct A68t254 *,A68t301,(A68_VC ,struct A68t254 *),(A68_VC ,struct A68t254 *,void *));
typedef struct A68t301  A68_301 ;    /* PROC(REF MODE26,REF MODE254) REF MODE254 */

A_PROCEDURE(A68_VOID ,A68t302,(struct A68t254 *,A68_VC *),(struct A68t254 *,A68_VC *,void *));
typedef struct A68t302  A68_302 ;    /* PROC(REF MODE254) REF MODE26 */

A_PROCEDURE(struct A68t254 *,A68t303,(struct A68t254 *,A68_VC ),(struct A68t254 *,A68_VC ,void *));
typedef struct A68t303  A68_303 ;    /* PROC(REF MODE254,REF MODE26) REF MODE254 */

A_PROCEDURE(A68_VOID ,A68t304,(A68_BOOL ,struct A68t212 *),(A68_BOOL ,struct A68t212 *,void *));
typedef struct A68t304  A68_304 ;    /* PROC(BOOL) MODE212 */

A_PROCEDURE(A68_VOID ,A68t305,(A68_INT ,A68_VC ,struct A68t212 ,struct A68t212 *),(A68_INT ,A68_VC ,struct A68t212 ,struct A68t212 *,void *));
typedef struct A68t305  A68_305 ;    /* PROC(INT,REF MODE26,REF MODE212) REF MODE212 */

A_PROCEDURE(struct A68t217 *,A68t306,(struct A68t254 *,struct A68t36 ),(struct A68t254 *,struct A68t36 ,void *));
typedef struct A68t306  A68_306 ;    /* PROC(REF MODE254,MODE36) REF MODE217 */
A_ISTRUCT(A68_CHAR ,48,A68t307);
typedef struct A68t307  A68_307 ;    /* STRUCT 48 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t308);
typedef struct A68t308  A68_308 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t309);
typedef struct A68t309  A68_309 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t310);
typedef struct A68t310  A68_310 ;    /* STRUCT 15 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from simtable --- */
extern A68_254 * HGDBSIM_nilpath;
#define FGDBSIM_goin '.'
#define EGDBSIM_gopast ';'
#define GGDBSIM_noop ' '
extern A68_255 * IGDBSIM_nilbind;
#define MGDBSIM_any 0
#define NGDBSIM_probename 1
extern A68_VC  JGDBSIM_monitoringpointername;
extern A68_VC  KGDBSIM_simulatedfunctionname;
extern A68_BOOL  UKDBSIM_simtablelookuppath(A68_VC ,A68_INT ,struct A68t254 **);
/* --- End of imports from simtable --- */


/* --- Imports from kernel --- */
extern A68_VOID  MWCBSIM_lookupfunction(A68_INT ,A68_211 *);
extern A68_VOID  FXCBSIM_lookuprnode(A68_INT ,A68_216 *);
/* --- End of imports from kernel --- */


/* --- Imports from ioprocs --- */
/* --- End of imports from ioprocs --- */


/* --- Imports from simreader --- */
extern A68_BOOL  EFAASIM_is_simname(struct A68t130 );
/* --- End of imports from simreader --- */


/* --- Imports from kernelreader --- */
extern A68_BOOL  GHFAOST_is_int(struct A68t130 );
extern A68_INT  KHFAOST_get_int(struct A68t130 ,struct A68t108 );
/* --- End of imports from kernelreader --- */


/* --- Imports from commandsyntax --- */
/* --- End of imports from commandsyntax --- */


/* --- Imports from messageproc --- */
extern A68_109  SHAAOSI_system;
extern A68_109  WHAAOSI_user;
/* --- End of imports from messageproc --- */


/* --- Imports from basics --- */
extern A68_VOID  RSCAOST_makeid(A68_VC ,A68_VC *);
extern A68_VC  NTCAOST_nilid;
extern A68_INT  AJDAOST_maxint;
extern A68_INT  IJDAOST_minint;
/* --- End of imports from basics --- */


/* --- Imports from putstrings --- */
extern A68_VC  EOAAOSL_nullstr;
extern A68_VOID  FCAAOSI_intchars(A68_INT ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void ZFDBSIM(void);   /* simtable */
extern void XWBBSIM(void);   /* kernel */
extern void TIGAOST(void);   /* ioprocs */
extern void WAAASIM(void);   /* simreader */
extern void TXEAOST(void);   /* kernelreader */
extern void LRAAOST(void);   /* commandsyntax */
extern void JFAAOSI(void);   /* messageproc */
extern void JSCAOST(void);   /* basics */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_274   UZEBSIM = {"$Id: simnode.a68,v 34.2 1995/03/29 13:05:00 ella Exp $"}; 
A_GISVEC(A68_VC ,VZEBSIM,UZEBSIM,54)
static A68_276   MAFBSIM = {""}; 
A_GISVEC(A68_VC ,NAFBSIM,MAFBSIM,0)
#define KBFBSIM_openbracketchar '('
#define LBFBSIM_closebracketchar ')'
#define MBFBSIM_thispointerchar '_'
#define NBFBSIM_gopastchar ';'
#define OBFBSIM_goinchar '.'
static A68_CHAR  PBFBSIM_eofchar;
static A68_276   VBFBSIM = {""}; 
A_GISVEC(A68_VC ,WBFBSIM,VBFBSIM,0)
static A68_276   YBFBSIM = {""}; 
A_GISVEC(A68_VC ,ZBFBSIM,YBFBSIM,0)
static A68_276   DCFBSIM = {""}; 
A_GISVEC(A68_VC ,ECFBSIM,DCFBSIM,0)
static A68_276   GCFBSIM = {""}; 
A_GISVEC(A68_VC ,HCFBSIM,GCFBSIM,0)
static A68_284   IEFBSIM = {"Node name should have closing bracket"}; 
A_GISVEC(A68_VC ,JEFBSIM,IEFBSIM,37)
static A68_286   IFFBSIM = {"simname expected"}; 
A_GISVEC(A68_VC ,JFFBSIM,IFFBSIM,16)
static A68_284   CHFBSIM = {"abcdefghijklmnopqrstuvwxyz0123456789_"}; 
A_GISVEC(A68_VC ,DHFBSIM,CHFBSIM,37)
static A68_284   HHFBSIM = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_"}; 
A_GISVEC(A68_VC ,IHFBSIM,HHFBSIM,37)
static A68_290   OHFBSIM = {"+-*/%<>=:.^|"}; 
A_GISVEC(A68_VC ,PHFBSIM,OHFBSIM,12)
static A68_292   NIFBSIM = {" ? - unexpected EOS"}; 
A_GISVEC(A68_VC ,PIFBSIM,NIFBSIM,19)
static A68_286   BJFBSIM = {"0123456789ABCDEF"}; 
A_GISVEC(A68_VC ,CJFBSIM,BJFBSIM,16)
static A68_294   FJFBSIM = {" ? - invalid radix"}; 
A_GISVEC(A68_VC ,HJFBSIM,FJFBSIM,18)
static A68_295   OJFBSIM = {" ? - integer out of range"}; 
A_GISVEC(A68_VC ,QJFBSIM,OJFBSIM,25)
static A68_295   RJFBSIM = {" ? - integer out of range"}; 
A_GISVEC(A68_VC ,TJFBSIM,RJFBSIM,25)
static A68_296   UJFBSIM = {" ? - integer expected"}; 
A_GISVEC(A68_VC ,WJFBSIM,UJFBSIM,21)
static A68_292   DLFBSIM = {" ? - ident expected"}; 
A_GISVEC(A68_VC ,FLFBSIM,DLFBSIM,19)
static A68_297   KLFBSIM = {" ? - EOS expected"}; 
A_GISVEC(A68_VC ,MLFBSIM,KLFBSIM,17)
static A68_298   ZLFBSIM = {"Path root "}; 
static A68_298   AMFBSIM = {" not found"}; 
A_GISVEC(A68_VC ,BMFBSIM,ZLFBSIM,10)
A_GISVEC(A68_VC ,CMFBSIM,AMFBSIM,10)
static A68_212  ZOFBSIM_nullbinding;
static A68_307   ZPFBSIM = {"Repeat count in node name should be at least one"}; 
A_GISVEC(A68_VC ,AQFBSIM,ZPFBSIM,48)
static A68_308   DQFBSIM = {"Component \""}; 
static A68_309   EQFBSIM = {"\" of node name not found"}; 
A_GISVEC(A68_VC ,FQFBSIM,DQFBSIM,11)
A_GISVEC(A68_VC ,GQFBSIM,EQFBSIM,24)
static A68_292   DRFBSIM = {"\" is not a function"}; 
A_GISVEC(A68_VC ,FRFBSIM,DRFBSIM,19)
static A68_292   KRFBSIM = {"\" is not a function"}; 
A_GISVEC(A68_VC ,MRFBSIM,KRFBSIM,19)
static A68_310   QRFBSIM = {"Cannot go past "}; 
A_GISVEC(A68_VC ,RRFBSIM,QRFBSIM,15)
typedef struct   /* env of non-global proc */
{
A68_VC  Str;
} TAFBSIM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} DBFBSIM_generator;
typedef struct   /* env of non-global proc */
{
A68_280  Ifrdint;
A68_36  Flt;
A68_281  Rdname;
A68_282  Firstchar;
A68_242  Putbackchar;
A68_265  DDFBSIM_nodenamebase;
} FDFBSIM_nodenamebase;
typedef struct   /* env of non-global proc */
{
A68_131  Vs;
A68_INT * Index;
A68_108  Msg;
} YEFBSIM_ifrdint;
typedef struct   /* env of non-global proc */
{
A68_131  Vs;
A68_INT * Index;
A68_108  Msg;
} FFFBSIM_rdname;
typedef struct   /* env of non-global proc */
{
A68_INT * Index;
A68_131  Vs;
} OFFBSIM_firstchar;
typedef struct   /* env of non-global proc */
{
A68_INT * Index;
} VFFBSIM_putbackchar;
typedef struct   /* env of non-global proc */
{
A68_108  Msg;
} ZFFBSIM_anonymous;
typedef struct   /* env of non-global proc */
{
A68_VC  Oldstring;
} IGFBSIM_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  BHFBSIM_whitespace;
} UHFBSIM_iswhitespace;
typedef struct   /* env of non-global proc */
{
A68_VC  NHFBSIM_decdigits;
} ZHFBSIM_isdecdigit;
typedef struct   /* env of non-global proc */
{
A68_VC  GHFBSIM_lowercaseletters;
A68_VC  LHFBSIM_uppercaseletters;
} EIFBSIM_uppercase;
typedef struct   /* env of non-global proc */
{
A68_INT * RGFBSIM_ix;
A68_VC  MGFBSIM_string;
A68_149  SHFBSIM_iswhitespace;
} LIFBSIM_firstchar;
typedef struct   /* env of non-global proc */
{
A68_INT * RGFBSIM_ix;
} UIFBSIM_putbackchar;
typedef struct   /* env of non-global proc */
{
A68_VC  MGFBSIM_string;
A68_INT * RGFBSIM_ix;
} AJFBSIM_rdintbasic;
typedef struct   /* env of non-global proc */
{
A68_INT * RGFBSIM_ix;
A68_VC  MGFBSIM_string;
A68_149  SHFBSIM_iswhitespace;
A68_149  XHFBSIM_isdecdigit;
A68_293  YIFBSIM_rdintbasic;
} CKFBSIM_ifrdint;
typedef struct   /* env of non-global proc */
{
A68_282  JIFBSIM_firstchar;
A68_INT * RGFBSIM_ix;
A68_VC  GHFBSIM_lowercaseletters;
A68_VC  MGFBSIM_string;
A68_VC  EHFBSIM_lcorddorvs;
A68_VC  LHFBSIM_uppercaseletters;
A68_VC  JHFBSIM_ucorddorvs;
A68_VC  QHFBSIM_opsymbols;
} RKFBSIM_rdname;
typedef struct   /* env of non-global proc */
{
A68_280  Ifrdint;
A68_36  Flt;
A68_281  Rdname;
A68_282  Firstchar;
A68_242  Putbackchar;
} JDFBSIM_rootornearbyname;
typedef struct   /* env of non-global proc */
{
A68_280  Ifrdint;
A68_36  Flt;
A68_281  Rdname;
} TDFBSIM_nearbynodename;
typedef struct   /* env of non-global proc */
{
A68_265  RDFBSIM_nearbynodename;
A68_282  Firstchar;
A68_36  Flt;
A68_265  ZDFBSIM_fullnodename;
A68_242  Putbackchar;
} BEFBSIM_fullnodename;

A_STATIC A68_VOID  YZEBSIM_before(A68_CHAR  C, A68_VC  String, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  GAFBSIM_after(A68_CHAR  C, A68_VC  String, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  PAFBSIM_new(A68_VC  Str, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  SAFBSIM_generator(A68_BOOL  QAFBSIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZAFBSIM_new(A68_CHAR  Str, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  CBFBSIM_generator(A68_BOOL  ABFBSIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  RBFBSIM_nodename(A68_254 * Pointer, A68_VC  *ReturnedValue);

A68_254 * LCFBSIM_makepath(A68_INT  Repeat, A68_VC  Name, A68_255 * Bind);

A_STATIC A68_254 * SCFBSIM_continuepath(A68_254 * This, A68_CHAR  Op, A68_254 * Rest);

A_STATIC A68_254 * BDFBSIM_nodenamecommon(A68_280  Ifrdint, A68_281  Rdname, A68_282  Firstchar, A68_242  Putbackchar, A68_36  Flt);

A_STATIC A68_254 * EDFBSIM_nodenamebase(void *NonLocals);

A_STATIC A68_254 * IDFBSIM_rootornearbyname(void *NonLocals);

A_STATIC A68_254 * SDFBSIM_nearbynodename(void *NonLocals);

A_STATIC A68_254 * AEFBSIM_fullnodename(void *NonLocals);

A68_254 * SEFBSIM_get_nodename(A68_131  Vs, A68_INT * Index, A68_108  Msg);

A_STATIC A68_BOOL  XEFBSIM_ifrdint(A68_INT * Int, A68_36  Flt, void *NonLocals);

A_STATIC A68_VOID  EFFBSIM_rdname(A68_36  Flt, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_CHAR  NFFBSIM_firstchar(A68_36  Flt, void *NonLocals);

A_STATIC A68_VOID  UFFBSIM_putbackchar(void *NonLocals);

A_STATIC A68_VOID  YFFBSIM_anonymous(A68_VC  Str, void *NonLocals);

A68_254 * EGFBSIM_stringnodename(A68_VC  Oldstring, A68_36  Flt);

A_STATIC A68_VOID  HGFBSIM_generator(A68_BOOL  FGFBSIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  UGFBSIM_instring(A68_CHAR  C, A68_VC  String);

A_STATIC A68_BOOL  THFBSIM_iswhitespace(A68_CHAR  C, void *NonLocals);

A_STATIC A68_BOOL  YHFBSIM_isdecdigit(A68_CHAR  C, void *NonLocals);

A_STATIC A68_CHAR  DIFBSIM_uppercase(A68_CHAR  C, void *NonLocals);

A_STATIC A68_CHAR  KIFBSIM_firstchar(A68_36  Flt, void *NonLocals);

A_STATIC A68_VOID  TIFBSIM_putbackchar(void *NonLocals);

A_STATIC A68_INT  ZIFBSIM_rdintbasic(A68_INT  Radix, A68_BOOL  Negative, A68_36  Flt, void *NonLocals);

A_STATIC A68_BOOL  BKFBSIM_ifrdint(A68_INT * Int, A68_36  Flt, void *NonLocals);

A_STATIC A68_VOID  QKFBSIM_rdname(A68_36  Flt, A68_VC  *ReturnedValue, void *NonLocals);

A68_254 * QLFBSIM_absolutenodename(A68_VC  String, A68_36  Flt);

A68_254 * GMFBSIM_new(A68_254 * Path);

A_STATIC A68_254 * OMFBSIM_clear(A68_254 * Path);

A_STATIC A68_254 * TMFBSIM_ending(A68_254 * Path);

A_STATIC A68_254 * YMFBSIM_append(A68_254 * Left, A68_254 * Right);

A68_254 * DNFBSIM_goin(A68_254 * Path);

A_STATIC A68_254 * JNFBSIM_gopast(A68_254 * Path);

A68_254 * PNFBSIM_goout(A68_254 * Path);

A68_254 * YNFBSIM_goout(A68_VC  Name, A68_254 * Path);

A68_VOID  FOFBSIM_smallname(A68_254 * Path, A68_VC  *ReturnedValue);

A68_254 * MOFBSIM_newalias(A68_254 * Path, A68_VC  Alias);

A68_254 * QOFBSIM_expandroot(A68_254 * Path);

A_STATIC A68_VOID  WOFBSIM_generator(A68_BOOL  VOFBSIM_anonymous, A68_212  *ReturnedValue);

A_STATIC A68_VOID  EPFBSIM_searchright(A68_INT  Repeat, A68_VC  Name, A68_212  Context, A68_212  *ReturnedValue);

A68_217 * SPFBSIM_node(A68_254 * Path, A68_36  Flt);

A_STATIC A68_254 * IDFBSIM_rootornearbyname(void *NonLocals)
#define NL(x) (((JDFBSIM_rootornearbyname *)NonLocals)->x)
{ 
A68_INT  KDFBSIM_j;
A68_BOOL  LDFBSIM;  /* clause result */
A68_254 * MDFBSIM;  /* clause result */
A68_VC  NDFBSIM;  /* avoid structure result */
A68_VC  ODFBSIM;  /* clause result */
A68_VC  PDFBSIM;  /* avoid structure result */
A68_VC  QDFBSIM_name;
A_PROC_ENTRY(rootornearbyname);
{ 
 /* line 247: */
LDFBSIM = A_CALLPROC(NL(Ifrdint),((&KDFBSIM_j), NL(Flt)),((&KDFBSIM_j), NL(Flt),(NL(Ifrdint)).nonlocals));
if ( LDFBSIM )
{ 
 /* line 248: */
 /* line 251: */
A_CALLPROC(NL(Rdname),(NL(Flt), &NDFBSIM),(NL(Flt), &NDFBSIM,(NL(Rdname)).nonlocals));
MDFBSIM = LCFBSIM_makepath(KDFBSIM_j, NDFBSIM, IGDBSIM_nilbind);
} 
else
{ 
 /* line 253: */
if ( (A_CALLPROC(NL(Firstchar),(NL(Flt)),(NL(Flt),(NL(Firstchar)).nonlocals))==MBFBSIM_thispointerchar) )
{ 
 /* line 254: */
ODFBSIM = JGDBSIM_monitoringpointername;
} 
else
{ 
A_CALLPROC(NL(Putbackchar),(),((NL(Putbackchar)).nonlocals));
 /* line 255: */
 /* line 256: */
A_CALLPROC(NL(Rdname),(NL(Flt), &PDFBSIM),(NL(Flt), &PDFBSIM,(NL(Rdname)).nonlocals));
ODFBSIM = PDFBSIM;
} 
QDFBSIM_name = ODFBSIM;
 /* line 257: */
 /* line 258: */
MDFBSIM = LCFBSIM_makepath(1, QDFBSIM_name, IGDBSIM_nilbind);
} 
} 
A_PROC_EXIT(rootornearbyname);
return( MDFBSIM );
} 
#undef NL

A_STATIC A68_254 * SDFBSIM_nearbynodename(void *NonLocals)
#define NL(x) (((TDFBSIM_nearbynodename *)NonLocals)->x)
{ 
A68_INT  UDFBSIM_j;
A68_BOOL  VDFBSIM;  /* clause result */
A68_254 * WDFBSIM;  /* clause result */
A68_VC  XDFBSIM;  /* avoid structure result */
A68_VC  YDFBSIM;  /* avoid structure result */
A_PROC_ENTRY(nearbynodename);
{ 
 /* line 266: */
VDFBSIM = A_CALLPROC(NL(Ifrdint),((&UDFBSIM_j), NL(Flt)),((&UDFBSIM_j), NL(Flt),(NL(Ifrdint)).nonlocals));
if ( VDFBSIM )
{ 
 /* line 267: */
 /* line 268: */
A_CALLPROC(NL(Rdname),(NL(Flt), &XDFBSIM),(NL(Flt), &XDFBSIM,(NL(Rdname)).nonlocals));
WDFBSIM = LCFBSIM_makepath(UDFBSIM_j, XDFBSIM, IGDBSIM_nilbind);
} 
else
{ 
 /* line 269: */
A_CALLPROC(NL(Rdname),(NL(Flt), &YDFBSIM),(NL(Flt), &YDFBSIM,(NL(Rdname)).nonlocals));
WDFBSIM = LCFBSIM_makepath(1, YDFBSIM, IGDBSIM_nilbind);
} 
} 
A_PROC_EXIT(nearbynodename);
return( WDFBSIM );
} 
#undef NL

A_STATIC A68_254 * AEFBSIM_fullnodename(void *NonLocals)
#define NL(x) (((BEFBSIM_fullnodename *)NonLocals)->x)
{ 
A68_254 * CEFBSIM_left;
A68_CHAR  DEFBSIM_next;
A68_254 * EEFBSIM;  /* clause result */
A_PROC_ENTRY(fullnodename);
{ 
CEFBSIM_left = A_CALLPROC(NL(RDFBSIM_nearbynodename),(),((NL(RDFBSIM_nearbynodename)).nonlocals));
 /* line 280: */
DEFBSIM_next = A_CALLPROC(NL(Firstchar),(NL(Flt)),(NL(Flt),(NL(Firstchar)).nonlocals));
 /* line 281: */
 /* line 282: */
if ( (DEFBSIM_next==NBFBSIM_gopastchar) )
{ 
 /* line 283: */
EEFBSIM = SCFBSIM_continuepath(CEFBSIM_left, EGDBSIM_gopast, A_CALLPROC(NL(ZDFBSIM_fullnodename),(),((NL(ZDFBSIM_fullnodename)).nonlocals)));
} 
else
{ 
 /* line 284: */
if ( (DEFBSIM_next==OBFBSIM_goinchar) )
{ 
 /* line 285: */
 /* line 286: */
EEFBSIM = SCFBSIM_continuepath(CEFBSIM_left, FGDBSIM_goin, A_CALLPROC(NL(ZDFBSIM_fullnodename),(),((NL(ZDFBSIM_fullnodename)).nonlocals)));
} 
else
{ 
A_CALLPROC(NL(Putbackchar),(),((NL(Putbackchar)).nonlocals));
 /* line 287: */
 /* line 288: */
 /* line 289: */
EEFBSIM = CEFBSIM_left;
} 
} 
} 
A_PROC_EXIT(fullnodename);
return( EEFBSIM );
} 
#undef NL

A_STATIC A68_VOID  SAFBSIM_generator(A68_BOOL  QAFBSIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((TAFBSIM_generator *)NonLocals)->x)
{ 
A68_VC  UAFBSIM;  /* clause result */
A68_VC  VAFBSIM;  /* OPERATORS - dynamic generator */
{ 
VAFBSIM.upb = NL(Str).upb ;
( QAFBSIM_anonymous? A_VLOC(A68_CHAR ,VAFBSIM): A_VHEAP(A68_CHAR ,VAFBSIM) );
UAFBSIM = VAFBSIM;
} 
*ReturnedValue = (UAFBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  CBFBSIM_generator(A68_BOOL  ABFBSIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((DBFBSIM_generator *)NonLocals)->x)
{ 
A68_VC  EBFBSIM;  /* clause result */
A68_VC  FBFBSIM;  /* OPERATORS - dynamic generator */
{ 
FBFBSIM.upb = 1 ;
( ABFBSIM_anonymous? A_VLOC(A68_CHAR ,FBFBSIM): A_VHEAP(A68_CHAR ,FBFBSIM) );
EBFBSIM = FBFBSIM;
} 
*ReturnedValue = (EBFBSIM);
return;
} 
#undef NL

A_STATIC A68_254 * EDFBSIM_nodenamebase(void *NonLocals)
#define NL(x) (((FDFBSIM_nodenamebase *)NonLocals)->x)
{ 
A68_265  HDFBSIM_rootornearbyname;   /* proc value of non-global proc */
A68_265  RDFBSIM_nearbynodename;   /* proc value of non-global proc */
A68_265  ZDFBSIM_fullnodename;   /* proc value of non-global proc */
A68_CHAR  FEFBSIM_start;
A68_254 * GEFBSIM_name;
A68_CHAR  HEFBSIM_next;
A68_254 * KEFBSIM;  /* clause result */
A68_254 * LEFBSIM_rootpath;
A68_CHAR  MEFBSIM_next;
A68_BOOL  NEFBSIM;  /* optbool result */
A_PROC_ENTRY(nodenamebase);
{ 
 /* line 245: */
A_CLOSURE( HDFBSIM_rootornearbyname, IDFBSIM_rootornearbyname, JDFBSIM_rootornearbyname );
(( JDFBSIM_rootornearbyname * ) ( HDFBSIM_rootornearbyname.nonlocals )) -> Ifrdint = NL(Ifrdint);
(( JDFBSIM_rootornearbyname * ) ( HDFBSIM_rootornearbyname.nonlocals )) -> Flt = NL(Flt);
(( JDFBSIM_rootornearbyname * ) ( HDFBSIM_rootornearbyname.nonlocals )) -> Rdname = NL(Rdname);
(( JDFBSIM_rootornearbyname * ) ( HDFBSIM_rootornearbyname.nonlocals )) -> Firstchar = NL(Firstchar);
(( JDFBSIM_rootornearbyname * ) ( HDFBSIM_rootornearbyname.nonlocals )) -> Putbackchar = NL(Putbackchar);
 /* line 264: */
 /* line 265: */
A_CLOSURE( RDFBSIM_nearbynodename, SDFBSIM_nearbynodename, TDFBSIM_nearbynodename );
(( TDFBSIM_nearbynodename * ) ( RDFBSIM_nearbynodename.nonlocals )) -> Ifrdint = NL(Ifrdint);
(( TDFBSIM_nearbynodename * ) ( RDFBSIM_nearbynodename.nonlocals )) -> Flt = NL(Flt);
(( TDFBSIM_nearbynodename * ) ( RDFBSIM_nearbynodename.nonlocals )) -> Rdname = NL(Rdname);
 /* line 277: */
 /* line 278: */
 /* line 279: */
A_CLOSURE( ZDFBSIM_fullnodename, AEFBSIM_fullnodename, BEFBSIM_fullnodename );
(( BEFBSIM_fullnodename * ) ( ZDFBSIM_fullnodename.nonlocals )) -> RDFBSIM_nearbynodename = RDFBSIM_nearbynodename;
(( BEFBSIM_fullnodename * ) ( ZDFBSIM_fullnodename.nonlocals )) -> Firstchar = NL(Firstchar);
(( BEFBSIM_fullnodename * ) ( ZDFBSIM_fullnodename.nonlocals )) -> Flt = NL(Flt);
(( BEFBSIM_fullnodename * ) ( ZDFBSIM_fullnodename.nonlocals )) -> ZDFBSIM_fullnodename = ZDFBSIM_fullnodename;
(( BEFBSIM_fullnodename * ) ( ZDFBSIM_fullnodename.nonlocals )) -> Putbackchar = NL(Putbackchar);
 /* line 292: */
FEFBSIM_start = A_CALLPROC(NL(Firstchar),(NL(Flt)),(NL(Flt),(NL(Firstchar)).nonlocals));
 /* line 293: */
 /* line 294: */
if ( (FEFBSIM_start==KBFBSIM_openbracketchar) )
{ 
GEFBSIM_name = A_CALLPROC(NL(DDFBSIM_nodenamebase),(),((NL(DDFBSIM_nodenamebase)).nonlocals));
 /* line 295: */
HEFBSIM_next = A_CALLPROC(NL(Firstchar),(NL(Flt)),(NL(Flt),(NL(Firstchar)).nonlocals));
 /* line 296: */
 /* line 297: */
if ( (HEFBSIM_next!=LBFBSIM_closebracketchar) )
{ 
A_CALLPROC(NL(Flt),(JEFBSIM),(JEFBSIM,(NL(Flt)).nonlocals));
 /* line 298: */
 /* line 299: */
 /* line 301: */
KEFBSIM = HGDBSIM_nilpath;
} 
else
{ 
 /* line 302: */
 /* line 303: */
KEFBSIM = GEFBSIM_name;
} 
} 
else
{ 
A_CALLPROC(NL(Putbackchar),(),((NL(Putbackchar)).nonlocals));
 /* line 304: */
LEFBSIM_rootpath = A_CALLPROC(HDFBSIM_rootornearbyname,(),((HDFBSIM_rootornearbyname).nonlocals));
 /* line 305: */
MEFBSIM_next = A_CALLPROC(NL(Firstchar),(NL(Flt)),(NL(Flt),(NL(Firstchar)).nonlocals));
 /* line 306: */
NEFBSIM = (MEFBSIM_next==OBFBSIM_goinchar);
if ( ! NEFBSIM )
{NEFBSIM = (MEFBSIM_next==EGDBSIM_gopast);
}
 /* line 307: */
if ( NEFBSIM )
{ 
 /* line 308: */
 /* line 310: */
SCFBSIM_continuepath(LEFBSIM_rootpath, MEFBSIM_next, A_CALLPROC(ZDFBSIM_fullnodename,(),((ZDFBSIM_fullnodename).nonlocals)));
} 
else
{ 
A_CALLPROC(NL(Putbackchar),(),((NL(Putbackchar)).nonlocals));
} 
 /* line 311: */
 /* line 312: */
 /* line 313: */
KEFBSIM = LEFBSIM_rootpath;
} 
} 
A_PROC_EXIT(nodenamebase);
return( KEFBSIM );
} 
#undef NL

A_STATIC A68_BOOL  XEFBSIM_ifrdint(A68_INT * Int, A68_36  Flt, void *NonLocals)
#define NL(x) (((YEFBSIM_ifrdint *)NonLocals)->x)
{ 
A68_INT  ZEFBSIM;  /* YIELD */
A68_INT  AFFBSIM;  /* YIELD */
A68_BOOL  BFFBSIM;  /* clause result */
A_PROC_ENTRY(ifrdint);
 /* line 334: */
 /* line 335: */
ZEFBSIM = ((*NL(Index))+1) ;
if ( GHFAOST_is_int((*(&A_VINDEX(NL(Vs),ZEFBSIM)))) )
{ 
AFFBSIM = (*NL(Index))+=1 ;
(*Int) = KHFAOST_get_int((*(&A_VINDEX(NL(Vs),AFFBSIM))), NL(Msg));
 /* line 336: */
 /* line 337: */
BFFBSIM = A68_TRUE;
} 
else
{ 
 /* line 338: */
BFFBSIM = A68_FALSE;
} 
A_PROC_EXIT(ifrdint);
return( BFFBSIM );
} 
#undef NL

A_STATIC A68_VOID  EFFBSIM_rdname(A68_36  Flt, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((FFFBSIM_rdname *)NonLocals)->x)
{ 
A68_INT  GFFBSIM;  /* YIELD */
A68_VC  HFFBSIM;  /* clause result */
A68_46  KFFBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(rdname);
 /* line 341: */
 /* line 342: */
GFFBSIM = (*NL(Index))+=1 ;
if ( EFAASIM_is_simname((*(&A_VINDEX(NL(Vs),GFFBSIM)))) )
{ 
 /* line 343: */
HFFBSIM = (*(&((&A_VINDEX(NL(Vs),(*NL(Index))))->Value)));
} 
else
{ 
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(KFFBSIM,JFFBSIM,A68_VC )),(SHAAOSI_system, A_HVEC(KFFBSIM,JFFBSIM,A68_VC ),(NL(Msg)).nonlocals));
 /* line 344: */
HFFBSIM = EOAAOSL_nullstr;
} 
A_PROC_EXIT(rdname);
*ReturnedValue = (HFFBSIM);
return;
} 
#undef NL

A_STATIC A68_CHAR  NFFBSIM_firstchar(A68_36  Flt, void *NonLocals)
#define NL(x) (((OFFBSIM_firstchar *)NonLocals)->x)
{ 
A68_CHAR  PFFBSIM;  /* clause result */
A68_130  QFFBSIM_v;
A68_VC  RFFBSIM;  /* OPERATORS - simple index */
A68_INT  SFFBSIM;  /* YIELD */
A_PROC_ENTRY(firstchar);
 /* line 347: */
 /* line 348: */
 /* line 349: */
if ( (((*NL(Index))+=1)>NL(Vs).upb) )
{ 
PFFBSIM = ' ';
} 
else
{ 
QFFBSIM_v = (*(&A_VINDEX(NL(Vs),(*NL(Index)))));
 /* line 350: */
 /* line 351: */
if ( (QFFBSIM_v.Value.upb>0) )
{ 
 /* line 352: */
 /* line 353: */
RFFBSIM = QFFBSIM_v.Value ;
SFFBSIM = 1 ;
PFFBSIM = (*(&A_VINDEX(RFFBSIM,SFFBSIM)));
} 
else
{ 
 /* line 354: */
PFFBSIM = ' ';
} 
} 
A_PROC_EXIT(firstchar);
return( PFFBSIM );
} 
#undef NL

A_STATIC A68_VOID  UFFBSIM_putbackchar(void *NonLocals)
#define NL(x) (((VFFBSIM_putbackchar *)NonLocals)->x)
{ 
A_PROC_ENTRY(putbackchar);
(*NL(Index))-=1;
A_PROC_EXIT(putbackchar);
return;
} 
#undef NL

A_STATIC A68_VOID  YFFBSIM_anonymous(A68_VC  Str, void *NonLocals)
#define NL(x) (((ZFFBSIM_anonymous *)NonLocals)->x)
{ 
A68_46  AGFBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
 /* line 360: */
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(AGFBSIM,Str,A68_VC )),(WHAAOSI_user, A_HVEC(AGFBSIM,Str,A68_VC ),(NL(Msg)).nonlocals));
return;
} 
#undef NL

A_STATIC A68_VOID  HGFBSIM_generator(A68_BOOL  FGFBSIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((IGFBSIM_generator *)NonLocals)->x)
{ 
A68_VC  JGFBSIM;  /* clause result */
A68_VC  KGFBSIM;  /* OPERATORS - dynamic generator */
{ 
KGFBSIM.upb = (NL(Oldstring).upb+1) ;
( FGFBSIM_anonymous? A_VLOC(A68_CHAR ,KGFBSIM): A_VHEAP(A68_CHAR ,KGFBSIM) );
JGFBSIM = KGFBSIM;
} 
*ReturnedValue = (JGFBSIM);
return;
} 
#undef NL

A_STATIC A68_INT  UGFBSIM_instring(A68_CHAR  C, A68_VC  String)
{ 
A68_INT  VGFBSIM_ans;
A68_INT  WGFBSIM_i;
A68_INT  XGFBSIM;  /* to part of loop */
A68_INT  YGFBSIM;  /* clause result */
A_PROC_ENTRY(instring);
 /* line 389: */
 /* line 390: */
{ 
VGFBSIM_ans = 0;
 /* line 391: */
XGFBSIM = String.upb;
for ( WGFBSIM_i = 1;
WGFBSIM_i <= XGFBSIM;
WGFBSIM_i += 1 )
{ 
if ( (C==A_VINDEX(String,WGFBSIM_i)) )
{ 
VGFBSIM_ans = WGFBSIM_i;
} 
}
 /* line 392: */
 /* line 393: */
YGFBSIM = VGFBSIM_ans;
} 
A_PROC_EXIT(instring);
return( YGFBSIM );
} 
#undef NL

A_STATIC A68_BOOL  THFBSIM_iswhitespace(A68_CHAR  C, void *NonLocals)
#define NL(x) (((UHFBSIM_iswhitespace *)NonLocals)->x)
{ 
A68_BOOL  VHFBSIM;  /* clause result */
A_PROC_ENTRY(iswhitespace);
VHFBSIM = (UGFBSIM_instring(C, NL(BHFBSIM_whitespace))!=0);
A_PROC_EXIT(iswhitespace);
return( VHFBSIM );
} 
#undef NL

A_STATIC A68_BOOL  YHFBSIM_isdecdigit(A68_CHAR  C, void *NonLocals)
#define NL(x) (((ZHFBSIM_isdecdigit *)NonLocals)->x)
{ 
A68_BOOL  AIFBSIM;  /* clause result */
A_PROC_ENTRY(isdecdigit);
AIFBSIM = (UGFBSIM_instring(C, NL(NHFBSIM_decdigits))!=0);
A_PROC_EXIT(isdecdigit);
return( AIFBSIM );
} 
#undef NL

A_STATIC A68_CHAR  DIFBSIM_uppercase(A68_CHAR  C, void *NonLocals)
#define NL(x) (((EIFBSIM_uppercase *)NonLocals)->x)
{ 
A68_INT  FIFBSIM_i;
A68_BOOL  GIFBSIM;  /* clause result */
A68_CHAR  HIFBSIM;  /* clause result */
A_PROC_ENTRY(uppercase);
 /* line 410: */
{ 
FIFBSIM_i = UGFBSIM_instring(C, NL(GHFBSIM_lowercaseletters));
 /* line 411: */
GIFBSIM = (FIFBSIM_i!=0);
if ( GIFBSIM )
{ 
 /* line 412: */
 /* line 414: */
HIFBSIM = A_VINDEX(NL(LHFBSIM_uppercaseletters),FIFBSIM_i);
} 
else
{ 
HIFBSIM = C;
} 
} 
A_PROC_EXIT(uppercase);
return( HIFBSIM );
} 
#undef NL

A_STATIC A68_CHAR  KIFBSIM_firstchar(A68_36  Flt, void *NonLocals)
#define NL(x) (((LIFBSIM_firstchar *)NonLocals)->x)
{ 
A68_BOOL  MIFBSIM;  /* optbool result */
A68_VC  OIFBSIM;  /* OPERATORS - trim index */
A68_CHAR  QIFBSIM_ans;
A68_CHAR  RIFBSIM;  /* clause result */
A_PROC_ENTRY(firstchar);
 /* line 417: */
 /* line 418: */
{ 
for ( ;; )
{ 
MIFBSIM = ((*NL(RGFBSIM_ix))<=NL(MGFBSIM_string).upb);
if ( MIFBSIM )
{MIFBSIM = A_CALLPROC(NL(SHFBSIM_iswhitespace),((*(&A_VINDEX(NL(MGFBSIM_string),(*NL(RGFBSIM_ix)))))),((*(&A_VINDEX(NL(MGFBSIM_string),(*NL(RGFBSIM_ix))))),(NL(SHFBSIM_iswhitespace)).nonlocals));
}
if ( !(MIFBSIM) ) break;
(*NL(RGFBSIM_ix))+=1;
}
 /* line 419: */
 /* line 420: */
if ( ((*NL(RGFBSIM_ix))>NL(MGFBSIM_string).upb) )
{ 
 /* line 421: */
A_CALLPROC(Flt,(A_VC_PLUS(A_VTRIM(OIFBSIM,(NL(MGFBSIM_string)),A_VTSCRIPT(&(OIFBSIM.upb),(NL(MGFBSIM_string)).upb,1,((*NL(RGFBSIM_ix))-1))),PIFBSIM)),(A_VC_PLUS(A_VTRIM(OIFBSIM,(NL(MGFBSIM_string)),A_VTSCRIPT(&(OIFBSIM.upb),(NL(MGFBSIM_string)).upb,1,((*NL(RGFBSIM_ix))-1))),PIFBSIM),(Flt).nonlocals));
} 
 /* line 422: */
QIFBSIM_ans = (*(&A_VINDEX(NL(MGFBSIM_string),(*NL(RGFBSIM_ix)))));
 /* line 423: */
(*NL(RGFBSIM_ix))+=1;
 /* line 424: */
 /* line 425: */
RIFBSIM = QIFBSIM_ans;
} 
A_PROC_EXIT(firstchar);
return( RIFBSIM );
} 
#undef NL

A_STATIC A68_VOID  TIFBSIM_putbackchar(void *NonLocals)
#define NL(x) (((UIFBSIM_putbackchar *)NonLocals)->x)
{ 
A_PROC_ENTRY(putbackchar);
(*NL(RGFBSIM_ix))-=1;
A_PROC_EXIT(putbackchar);
return;
} 
#undef NL

A_STATIC A68_INT  ZIFBSIM_rdintbasic(A68_INT  Radix, A68_BOOL  Negative, A68_36  Flt, void *NonLocals)
#define NL(x) (((AJFBSIM_rdintbasic *)NonLocals)->x)
{ 
A68_VC  DJFBSIM_hexdigits;
A68_BOOL  EJFBSIM;  /* optbool result */
A68_VC  GJFBSIM;  /* OPERATORS - trim index */
A68_INT  IJFBSIM_ans;
A68_BOOL  JJFBSIM_ok;
A68_INT  KJFBSIM_digitvalue;
A68_VC  LJFBSIM;  /* OPERATORS - trim index */
A68_BOOL  MJFBSIM;  /* optbool result */
A68_BOOL  NJFBSIM;  /* clause result */
A68_VC  PJFBSIM;  /* OPERATORS - trim index */
A68_VC  SJFBSIM;  /* OPERATORS - trim index */
A68_VC  VJFBSIM;  /* OPERATORS - trim index */
A68_INT  XJFBSIM;  /* clause result */
A_PROC_ENTRY(rdintbasic);
 /* line 430: */
 /* line 431: */
{ 
DJFBSIM_hexdigits = CJFBSIM;
 /* line 432: */
EJFBSIM = (Radix!=2);
if ( EJFBSIM )
{EJFBSIM = (Radix!=8);
}
if ( EJFBSIM )
{EJFBSIM = (Radix!=10);
}
if ( EJFBSIM )
{EJFBSIM = (Radix!=16);
}
 /* line 433: */
if ( EJFBSIM )
{ 
 /* line 434: */
A_CALLPROC(Flt,(A_VC_PLUS(A_VTRIM(GJFBSIM,(NL(MGFBSIM_string)),A_VTSCRIPT(&(GJFBSIM.upb),(NL(MGFBSIM_string)).upb,1,(*NL(RGFBSIM_ix)))),HJFBSIM)),(A_VC_PLUS(A_VTRIM(GJFBSIM,(NL(MGFBSIM_string)),A_VTSCRIPT(&(GJFBSIM.upb),(NL(MGFBSIM_string)).upb,1,(*NL(RGFBSIM_ix)))),HJFBSIM),(Flt).nonlocals));
} 
 /* line 435: */
IJFBSIM_ans = 0;
 /* line 436: */
JJFBSIM_ok = A68_FALSE;
 /* line 437: */
 /* line 438: */
for ( ;; )
{ 
 /* line 439: */
KJFBSIM_digitvalue = (UGFBSIM_instring((*(&A_VINDEX(NL(MGFBSIM_string),(*NL(RGFBSIM_ix))))), A_VTRIM(LJFBSIM,(DJFBSIM_hexdigits),A_VTSCRIPT(&(LJFBSIM.upb),(DJFBSIM_hexdigits).upb,1,Radix)))-1);
 /* line 440: */
MJFBSIM = (KJFBSIM_digitvalue!=(-1));
if ( MJFBSIM )
{ /* line 441: */
MJFBSIM = (KJFBSIM_digitvalue<Radix);
}
 /* line 442: */
NJFBSIM = MJFBSIM;
if ( !NJFBSIM ) break;
JJFBSIM_ok = A68_TRUE;
 /* line 443: */
 /* line 444: */
if ( Negative )
{ 
 /* line 445: */
if ( (IJFBSIM_ans<((IJDAOST_minint+KJFBSIM_digitvalue)/Radix)) )
{ 
 /* line 446: */
A_CALLPROC(Flt,(A_VC_PLUS(A_VTRIM(PJFBSIM,(NL(MGFBSIM_string)),A_VTSCRIPT(&(PJFBSIM.upb),(NL(MGFBSIM_string)).upb,1,(*NL(RGFBSIM_ix)))),QJFBSIM)),(A_VC_PLUS(A_VTRIM(PJFBSIM,(NL(MGFBSIM_string)),A_VTSCRIPT(&(PJFBSIM.upb),(NL(MGFBSIM_string)).upb,1,(*NL(RGFBSIM_ix)))),QJFBSIM),(Flt).nonlocals));
} 
 /* line 447: */
 /* line 448: */
 /* line 449: */
IJFBSIM_ans = ((IJFBSIM_ans*Radix)-KJFBSIM_digitvalue);
} 
else
{ 
 /* line 450: */
if ( (IJFBSIM_ans>((AJDAOST_maxint-KJFBSIM_digitvalue)/Radix)) )
{ 
 /* line 451: */
A_CALLPROC(Flt,(A_VC_PLUS(A_VTRIM(SJFBSIM,(NL(MGFBSIM_string)),A_VTSCRIPT(&(SJFBSIM.upb),(NL(MGFBSIM_string)).upb,1,(*NL(RGFBSIM_ix)))),TJFBSIM)),(A_VC_PLUS(A_VTRIM(SJFBSIM,(NL(MGFBSIM_string)),A_VTSCRIPT(&(SJFBSIM.upb),(NL(MGFBSIM_string)).upb,1,(*NL(RGFBSIM_ix)))),TJFBSIM),(Flt).nonlocals));
} 
 /* line 452: */
 /* line 453: */
IJFBSIM_ans = ((IJFBSIM_ans*Radix)+KJFBSIM_digitvalue);
} 
 /* line 454: */
 /* line 455: */
(*NL(RGFBSIM_ix))+=1;
}
 /* line 456: */
 /* line 457: */
if ( !JJFBSIM_ok )
{ 
 /* line 458: */
A_CALLPROC(Flt,(A_VC_PLUS(A_VTRIM(VJFBSIM,(NL(MGFBSIM_string)),A_VTSCRIPT(&(VJFBSIM.upb),(NL(MGFBSIM_string)).upb,1,(*NL(RGFBSIM_ix)))),WJFBSIM)),(A_VC_PLUS(A_VTRIM(VJFBSIM,(NL(MGFBSIM_string)),A_VTSCRIPT(&(VJFBSIM.upb),(NL(MGFBSIM_string)).upb,1,(*NL(RGFBSIM_ix)))),WJFBSIM),(Flt).nonlocals));
} 
 /* line 459: */
 /* line 460: */
XJFBSIM = IJFBSIM_ans;
} 
A_PROC_EXIT(rdintbasic);
return( XJFBSIM );
} 
#undef NL

A_STATIC A68_BOOL  BKFBSIM_ifrdint(A68_INT * Int, A68_36  Flt, void *NonLocals)
#define NL(x) (((CKFBSIM_ifrdint *)NonLocals)->x)
{ 
A68_BOOL  DKFBSIM_negative;
A68_BOOL  EKFBSIM;  /* optbool result */
A68_BOOL  FKFBSIM;  /* clause result */
A68_CHAR  GKFBSIM_c;
A68_BOOL  HKFBSIM;  /* optbool result */
A68_BOOL  IKFBSIM;  /* optbool result */
A68_INT  JKFBSIM;  /* YIELD */
A68_BOOL  KKFBSIM;  /* clause result */
A68_INT  LKFBSIM_int1;
A68_INT  MKFBSIM;  /* clause result */
A68_INT  NKFBSIM_radix;
A_PROC_ENTRY(ifrdint);
 /* line 463: */
 /* line 464: */
{ 
DKFBSIM_negative = A68_FALSE;
 /* line 465: */
for ( ;; )
{ 
EKFBSIM = ((*NL(RGFBSIM_ix))<=NL(MGFBSIM_string).upb);
if ( EKFBSIM )
{EKFBSIM = A_CALLPROC(NL(SHFBSIM_iswhitespace),((*(&A_VINDEX(NL(MGFBSIM_string),(*NL(RGFBSIM_ix)))))),((*(&A_VINDEX(NL(MGFBSIM_string),(*NL(RGFBSIM_ix))))),(NL(SHFBSIM_iswhitespace)).nonlocals));
}
if ( !(EKFBSIM) ) break;
(*NL(RGFBSIM_ix))+=1;
}
 /* line 466: */
 /* line 467: */
if ( ((*NL(RGFBSIM_ix))>NL(MGFBSIM_string).upb) )
{ 
 /* line 468: */
 /* line 469: */
FKFBSIM = A68_FALSE;
} 
else
{ 
{ 
GKFBSIM_c = (*(&A_VINDEX(NL(MGFBSIM_string),(*NL(RGFBSIM_ix)))));
 /* line 470: */
 /* line 471: */
HKFBSIM = A_CALLPROC(NL(XHFBSIM_isdecdigit),(GKFBSIM_c),(GKFBSIM_c,(NL(XHFBSIM_isdecdigit)).nonlocals));
if ( ! HKFBSIM )
{IKFBSIM = (GKFBSIM_c=='+');
if ( ! IKFBSIM )
{IKFBSIM = (GKFBSIM_c=='-');
}
if ( IKFBSIM )
{ /* line 472: */
IKFBSIM = ((*NL(RGFBSIM_ix))<NL(MGFBSIM_string).upb);
}
if ( IKFBSIM )
{JKFBSIM = ((*NL(RGFBSIM_ix))+1) ;
IKFBSIM = A_CALLPROC(NL(XHFBSIM_isdecdigit),((*(&A_VINDEX(NL(MGFBSIM_string),JKFBSIM)))),((*(&A_VINDEX(NL(MGFBSIM_string),JKFBSIM))),(NL(XHFBSIM_isdecdigit)).nonlocals));
}
 /* line 473: */
HKFBSIM = IKFBSIM;
}
 /* line 474: */
KKFBSIM = HKFBSIM;
if ( KKFBSIM )
{ 
if ( (GKFBSIM_c=='+') )
{ 
 /* line 475: */
(*NL(RGFBSIM_ix))+=1;
} 
else
{ 
if ( (GKFBSIM_c=='-') )
{ 
DKFBSIM_negative = A68_TRUE;
 /* line 476: */
(*NL(RGFBSIM_ix))+=1;
} 
} 
 /* line 477: */
LKFBSIM_int1 = A_CALLPROC(NL(YIFBSIM_rdintbasic),(10, DKFBSIM_negative, Flt),(10, DKFBSIM_negative, Flt,(NL(YIFBSIM_rdintbasic)).nonlocals));
 /* line 478: */
 /* line 479: */
if ( (((*(&A_VINDEX(NL(MGFBSIM_string),(*NL(RGFBSIM_ix)))))=='r')|((*(&A_VINDEX(NL(MGFBSIM_string),(*NL(RGFBSIM_ix)))))=='R')) )
{ 
(*NL(RGFBSIM_ix))+=1;
 /* line 480: */
if ( DKFBSIM_negative )
{ 
MKFBSIM = (-LKFBSIM_int1);
} 
else
{ 
MKFBSIM = LKFBSIM_int1;
} 
NKFBSIM_radix = MKFBSIM;
 /* line 481: */
 /* line 482: */
 /* line 483: */
(*Int) = A_CALLPROC(NL(YIFBSIM_rdintbasic),(NKFBSIM_radix, DKFBSIM_negative, Flt),(NKFBSIM_radix, DKFBSIM_negative, Flt,(NL(YIFBSIM_rdintbasic)).nonlocals));
} 
else
{ 
 /* line 484: */
(*Int) = LKFBSIM_int1;
} 
 /* line 485: */
 /* line 486: */
 /* line 487: */
FKFBSIM = A68_TRUE;
} 
else
{ 
 /* line 488: */
FKFBSIM = A68_FALSE;
} 
} 
} 
} 
A_PROC_EXIT(ifrdint);
return( FKFBSIM );
} 
#undef NL

A_STATIC A68_VOID  QKFBSIM_rdname(A68_36  Flt, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((RKFBSIM_rdname *)NonLocals)->x)
{ 
A68_CHAR  SKFBSIM_c1;
A68_INT  TKFBSIM_start;
A68_CHAR  UKFBSIM_c;
A68_BOOL  VKFBSIM;  /* optbool result */
A68_BOOL  WKFBSIM;  /* clause result */
A68_CHAR  XKFBSIM_c;
A68_BOOL  YKFBSIM;  /* optbool result */
A68_BOOL  ZKFBSIM;  /* clause result */
A68_CHAR  ALFBSIM_c;
A68_BOOL  BLFBSIM;  /* optbool result */
A68_BOOL  CLFBSIM;  /* clause result */
A68_VC  ELFBSIM;  /* OPERATORS - trim index */
A68_VC  GLFBSIM;  /* clause result */
A68_VC  HLFBSIM;  /* OPERATORS - trim index */
A68_VC  ILFBSIM;  /* avoid structure result */
A_PROC_ENTRY(rdname);
 /* line 492: */
 /* line 493: */
{ 
SKFBSIM_c1 = A_CALLPROC(NL(JIFBSIM_firstchar),(Flt),(Flt,(NL(JIFBSIM_firstchar)).nonlocals));
 /* line 494: */
 /* line 489: */
TKFBSIM_start = ((*NL(RGFBSIM_ix))-1);
 /* line 495: */
 /* line 496: */
if ( (UGFBSIM_instring(SKFBSIM_c1, NL(GHFBSIM_lowercaseletters))!=0) )
{ 
for ( ;; )
{ 
 /* line 497: */
UKFBSIM_c = (*(&A_VINDEX(NL(MGFBSIM_string),(*NL(RGFBSIM_ix)))));
 /* line 498: */
 /* line 499: */
VKFBSIM = ((*NL(RGFBSIM_ix))<=NL(MGFBSIM_string).upb);
if ( VKFBSIM )
{ /* line 500: */
VKFBSIM = (UGFBSIM_instring(UKFBSIM_c, NL(EHFBSIM_lcorddorvs))!=0);
}
WKFBSIM = VKFBSIM;
if ( !WKFBSIM ) break;
(*NL(RGFBSIM_ix))+=1;
}
 /* line 501: */
} 
else
{ 
 /* line 502: */
if ( (UGFBSIM_instring(SKFBSIM_c1, NL(LHFBSIM_uppercaseletters))!=0) )
{ 
for ( ;; )
{ 
 /* line 503: */
XKFBSIM_c = (*(&A_VINDEX(NL(MGFBSIM_string),(*NL(RGFBSIM_ix)))));
 /* line 504: */
 /* line 505: */
YKFBSIM = ((*NL(RGFBSIM_ix))<=NL(MGFBSIM_string).upb);
if ( YKFBSIM )
{ /* line 506: */
YKFBSIM = (UGFBSIM_instring(XKFBSIM_c, NL(JHFBSIM_ucorddorvs))!=0);
}
ZKFBSIM = YKFBSIM;
if ( !ZKFBSIM ) break;
(*NL(RGFBSIM_ix))+=1;
}
 /* line 507: */
} 
else
{ 
 /* line 508: */
if ( (UGFBSIM_instring(SKFBSIM_c1, NL(QHFBSIM_opsymbols))!=0) )
{ 
for ( ;; )
{ 
 /* line 509: */
ALFBSIM_c = (*(&A_VINDEX(NL(MGFBSIM_string),(*NL(RGFBSIM_ix)))));
 /* line 510: */
 /* line 511: */
BLFBSIM = ((*NL(RGFBSIM_ix))<=NL(MGFBSIM_string).upb);
if ( BLFBSIM )
{ /* line 512: */
BLFBSIM = (UGFBSIM_instring(ALFBSIM_c, NL(QHFBSIM_opsymbols))!=0);
}
CLFBSIM = BLFBSIM;
if ( !CLFBSIM ) break;
(*NL(RGFBSIM_ix))+=1;
}
 /* line 513: */
 /* line 514: */
} 
else
{ 
 /* line 515: */
A_CALLPROC(Flt,(A_VC_PLUS(A_VTRIM(ELFBSIM,(NL(MGFBSIM_string)),A_VTSCRIPT(&(ELFBSIM.upb),(NL(MGFBSIM_string)).upb,1,((*NL(RGFBSIM_ix))-1))),FLFBSIM)),(A_VC_PLUS(A_VTRIM(ELFBSIM,(NL(MGFBSIM_string)),A_VTSCRIPT(&(ELFBSIM.upb),(NL(MGFBSIM_string)).upb,1,((*NL(RGFBSIM_ix))-1))),FLFBSIM),(Flt).nonlocals));
} 
} 
} 
 /* line 516: */
 /* line 517: */
RSCAOST_makeid( A_VTRIM(HLFBSIM,(NL(MGFBSIM_string)),A_VTSCRIPT(&(HLFBSIM.upb),(NL(MGFBSIM_string)).upb,TKFBSIM_start,((*NL(RGFBSIM_ix))-1))), &ILFBSIM );
GLFBSIM = ILFBSIM;
} 
A_PROC_EXIT(rdname);
*ReturnedValue = (GLFBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  YZEBSIM_before(A68_CHAR  C, A68_VC  String, A68_VC  *ReturnedValue)
{ 
A68_INT  ZZEBSIM_index;
A68_INT  AAFBSIM_upb;
A68_BOOL  BAFBSIM;  /* optbool result */
A68_VC  CAFBSIM;  /* clause result */
A68_VC  DAFBSIM;  /* OPERATORS - trim index */
A_PROC_ENTRY(before);
 /* line 96: */
 /* line 97: */
{ 
ZZEBSIM_index =  1;
 /* line 98: */
AAFBSIM_upb = String.upb;
 /* line 99: */
for ( ;; )
{ 
BAFBSIM = (ZZEBSIM_index<=AAFBSIM_upb);
if ( BAFBSIM )
{BAFBSIM = (A_VINDEX(String,ZZEBSIM_index)!=C);
}
 /* line 100: */
if ( !(BAFBSIM) ) break;
 /* line 101: */
ZZEBSIM_index+=1;
}
 /* line 102: */
 /* line 103: */
CAFBSIM = A_VTRIM(DAFBSIM,(String),A_VTSCRIPT(&(DAFBSIM.upb),(String).upb,1,(ZZEBSIM_index-1)));
} 
A_PROC_EXIT(before);
*ReturnedValue = (CAFBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  GAFBSIM_after(A68_CHAR  C, A68_VC  String, A68_VC  *ReturnedValue)
{ 
A68_INT  HAFBSIM_index;
A68_INT  IAFBSIM_upb;
A68_BOOL  JAFBSIM;  /* optbool result */
A68_VC  KAFBSIM;  /* clause result */
A68_VC  LAFBSIM;  /* OPERATORS - trim index */
A_PROC_ENTRY(after);
 /* line 110: */
 /* line 111: */
{ 
HAFBSIM_index =  1;
 /* line 112: */
IAFBSIM_upb = String.upb;
 /* line 113: */
for ( ;; )
{ 
JAFBSIM = (HAFBSIM_index<=IAFBSIM_upb);
if ( JAFBSIM )
{JAFBSIM = (A_VINDEX(String,HAFBSIM_index)!=C);
}
 /* line 114: */
if ( !(JAFBSIM) ) break;
 /* line 115: */
HAFBSIM_index+=1;
}
 /* line 116: */
 /* line 117: */
if ( (HAFBSIM_index<IAFBSIM_upb) )
{ 
 /* line 118: */
 /* line 120: */
KAFBSIM = A_VTRIM(LAFBSIM,(String),A_VTSCRIPT(&(LAFBSIM.upb),(String).upb,(HAFBSIM_index+1),(String).upb));
} 
else
{ 
 /* line 121: */
KAFBSIM = NAFBSIM;
} 
} 
A_PROC_EXIT(after);
*ReturnedValue = (KAFBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  PAFBSIM_new(A68_VC  Str, A68_VC  *ReturnedValue)
{ 
A68_31  RAFBSIM_generator;   /* proc value of non-global proc */
A68_VC  WAFBSIM;  /* clause result */
A68_VC  XAFBSIM;  /* avoid structure result */
A_PROC_ENTRY(new);
 /* line 128: */
A_CLOSURE( RAFBSIM_generator, SAFBSIM_generator, TAFBSIM_generator );
(( TAFBSIM_generator * ) ( RAFBSIM_generator.nonlocals )) -> Str = Str;
A_CALLPROC(RAFBSIM_generator,(A68_FALSE, &XAFBSIM),(A68_FALSE, &XAFBSIM,(RAFBSIM_generator).nonlocals));
A_VASSIGN2(Str,XAFBSIM,A68_CHAR ) ;
WAFBSIM = XAFBSIM;
A_PROC_EXIT(new);
*ReturnedValue = (WAFBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  ZAFBSIM_new(A68_CHAR  Str, A68_VC  *ReturnedValue)
{ 
A68_31  BBFBSIM_generator;   /* proc value of non-global proc */
A68_VC  GBFBSIM;  /* clause result */
A68_VC  HBFBSIM;  /* avoid structure result */
A68_VC  IBFBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  JBFBSIM;  /* OPERATORS - assign op */
A_PROC_ENTRY(new);
 /* line 132: */
A_CLOSURE( BBFBSIM_generator, CBFBSIM_generator, DBFBSIM_generator );
A_CALLPROC(BBFBSIM_generator,(A68_FALSE, &HBFBSIM),(A68_FALSE, &HBFBSIM,(BBFBSIM_generator).nonlocals));
JBFBSIM = A_HVEC(IBFBSIM,Str,A68_CHAR ) ;
A_VASSIGN2(JBFBSIM,HBFBSIM,A68_CHAR ) ;
GBFBSIM = HBFBSIM;
A_PROC_EXIT(new);
*ReturnedValue = (GBFBSIM);
return;
} 
#undef NL

A68_VOID  RBFBSIM_nodename(A68_254 * Pointer, A68_VC  *ReturnedValue)
{ 
A68_VC  SBFBSIM;  /* clause result */
A68_VC  TBFBSIM;  /* avoid structure result */
A68_VC  UBFBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XBFBSIM;  /* clause result */
A68_VC  ACFBSIM;  /* clause result */
A68_VC  BCFBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  CCFBSIM;  /* avoid structure result */
A68_VC  FCFBSIM;  /* clause result */
A_PROC_ENTRY(nodename);
 /* line 157: */
 /* line 158: */
if ( (Pointer!=HGDBSIM_nilpath) )
{ 
if ( ((*(&(Pointer->Repeat)))!=1) )
{ 
 /* line 159: */
 /* line 160: */
FCAAOSI_intchars( (*(&(Pointer->Repeat))), &TBFBSIM );
SBFBSIM = A_VC_PLUS(TBFBSIM,A_HVEC(UBFBSIM,' ',A68_CHAR ));
} 
else
{ 
 /* line 163: */
SBFBSIM = WBFBSIM;
} 
 /* line 164: */
if ( ((*(&(Pointer->Op)))==FGDBSIM_goin) )
{ 
 /* line 165: */
XBFBSIM = A_C_PLUS(' ',OBFBSIM_goinchar);
} 
else
{ 
if ( ((*(&(Pointer->Rest)))!=HGDBSIM_nilpath) )
{ 
 /* line 166: */
 /* line 167: */
XBFBSIM = A_C_PLUS(' ',NBFBSIM_gopastchar);
} 
else
{ 
 /* line 168: */
XBFBSIM = ZBFBSIM;
} 
} 
 /* line 169: */
if ( ((*(&(Pointer->Rest)))!=HGDBSIM_nilpath) )
{ 
 /* line 170: */
 /* line 171: */
RBFBSIM_nodename( (*(&(Pointer->Rest))), &CCFBSIM );
ACFBSIM = A_VC_PLUS(A_HVEC(BCFBSIM,' ',A68_CHAR ),CCFBSIM);
} 
else
{ 
 /* line 172: */
ACFBSIM = ECFBSIM;
} 
 /* line 174: */
FCFBSIM = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(SBFBSIM,(*(&(Pointer->Name)))),XBFBSIM),ACFBSIM);
} 
else
{ 
FCFBSIM = HCFBSIM;
} 
A_PROC_EXIT(nodename);
*ReturnedValue = (FCFBSIM);
return;
} 
#undef NL

A68_254 * LCFBSIM_makepath(A68_INT  Repeat, A68_VC  Name, A68_255 * Bind)
{ 
A68_254  MCFBSIM;  /* collateral clause result */
A68_254 * NCFBSIM;  /* clause result */
A68_254 * OCFBSIM;  /* YIELD */
A_PROC_ENTRY(makepath);
 /* line 190: */
MCFBSIM.Repeat = Repeat;
MCFBSIM.Name = Name;
MCFBSIM.Aliasname = NTCAOST_nilid;
MCFBSIM.Op = GGDBSIM_noop;
MCFBSIM.Bind = Bind;
MCFBSIM.Rest = HGDBSIM_nilpath;
OCFBSIM = A_HEAP(A68_254 ) ;
(*OCFBSIM) = MCFBSIM ;
NCFBSIM = OCFBSIM;
A_PROC_EXIT(makepath);
return( NCFBSIM );
} 
#undef NL

A_STATIC A68_254 * SCFBSIM_continuepath(A68_254 * This, A68_CHAR  Op, A68_254 * Rest)
{ 
A68_CHAR * TCFBSIM;  /* YIELD */
A68_254 ** UCFBSIM;  /* YIELD */
A68_254 * VCFBSIM;  /* clause result */
A_PROC_ENTRY(continuepath);
 /* line 197: */
 /* line 198: */
{ 
TCFBSIM = (&(This->Op)) ;
(*TCFBSIM) = Op;
 /* line 199: */
UCFBSIM = (&(This->Rest)) ;
(*UCFBSIM) = Rest;
 /* line 200: */
 /* line 201: */
VCFBSIM = This;
} 
A_PROC_EXIT(continuepath);
return( VCFBSIM );
} 
#undef NL
 /* line 215: */
 /* line 216: */
 /* line 217: */
 /* line 219: */

A_STATIC A68_254 * BDFBSIM_nodenamecommon(A68_280  Ifrdint, A68_281  Rdname, A68_282  Firstchar, A68_242  Putbackchar, A68_36  Flt)
{ 
A68_265  DDFBSIM_nodenamebase;   /* proc value of non-global proc */
A68_254 * OEFBSIM;  /* clause result */
A_PROC_ENTRY(nodenamecommon);
 /* line 220: */
 /* line 237: */
{ 
 /* line 238: */
 /* line 244: */
A_CLOSURE( DDFBSIM_nodenamebase, EDFBSIM_nodenamebase, FDFBSIM_nodenamebase );
(( FDFBSIM_nodenamebase * ) ( DDFBSIM_nodenamebase.nonlocals )) -> Ifrdint = Ifrdint;
(( FDFBSIM_nodenamebase * ) ( DDFBSIM_nodenamebase.nonlocals )) -> Flt = Flt;
(( FDFBSIM_nodenamebase * ) ( DDFBSIM_nodenamebase.nonlocals )) -> Rdname = Rdname;
(( FDFBSIM_nodenamebase * ) ( DDFBSIM_nodenamebase.nonlocals )) -> Firstchar = Firstchar;
(( FDFBSIM_nodenamebase * ) ( DDFBSIM_nodenamebase.nonlocals )) -> Putbackchar = Putbackchar;
(( FDFBSIM_nodenamebase * ) ( DDFBSIM_nodenamebase.nonlocals )) -> DDFBSIM_nodenamebase = DDFBSIM_nodenamebase;
 /* line 315: */
 /* line 316: */
OEFBSIM = A_CALLPROC(DDFBSIM_nodenamebase,(),((DDFBSIM_nodenamebase).nonlocals));
} 
A_PROC_EXIT(nodenamecommon);
return( OEFBSIM );
} 
#undef NL

A68_254 * SEFBSIM_get_nodename(A68_131  Vs, A68_INT * Index, A68_108  Msg)
{ 
A68_280  WEFBSIM_ifrdint;   /* proc value of non-global proc */
A68_281  DFFBSIM_rdname;   /* proc value of non-global proc */
A68_282  MFFBSIM_firstchar;   /* proc value of non-global proc */
A68_242  TFFBSIM_putbackchar;   /* proc value of non-global proc */
A68_36  XFFBSIM_anonymous;   /* proc value of non-global proc */
A68_254 * BGFBSIM;  /* clause result */
A_PROC_ENTRY(get_nodename);
 /* line 331: */
 /* line 333: */
{ 
A_CLOSURE( WEFBSIM_ifrdint, XEFBSIM_ifrdint, YEFBSIM_ifrdint );
(( YEFBSIM_ifrdint * ) ( WEFBSIM_ifrdint.nonlocals )) -> Vs = Vs;
(( YEFBSIM_ifrdint * ) ( WEFBSIM_ifrdint.nonlocals )) -> Index = Index;
(( YEFBSIM_ifrdint * ) ( WEFBSIM_ifrdint.nonlocals )) -> Msg = Msg;
 /* line 340: */
A_CLOSURE( DFFBSIM_rdname, EFFBSIM_rdname, FFFBSIM_rdname );
(( FFFBSIM_rdname * ) ( DFFBSIM_rdname.nonlocals )) -> Vs = Vs;
(( FFFBSIM_rdname * ) ( DFFBSIM_rdname.nonlocals )) -> Index = Index;
(( FFFBSIM_rdname * ) ( DFFBSIM_rdname.nonlocals )) -> Msg = Msg;
 /* line 346: */
A_CLOSURE( MFFBSIM_firstchar, NFFBSIM_firstchar, OFFBSIM_firstchar );
(( OFFBSIM_firstchar * ) ( MFFBSIM_firstchar.nonlocals )) -> Index = Index;
(( OFFBSIM_firstchar * ) ( MFFBSIM_firstchar.nonlocals )) -> Vs = Vs;
 /* line 356: */
A_CLOSURE( TFFBSIM_putbackchar, UFFBSIM_putbackchar, VFFBSIM_putbackchar );
(( VFFBSIM_putbackchar * ) ( TFFBSIM_putbackchar.nonlocals )) -> Index = Index;
 /* line 358: */
 /* line 359: */
A_CLOSURE( XFFBSIM_anonymous, YFFBSIM_anonymous, ZFFBSIM_anonymous );
(( ZFFBSIM_anonymous * ) ( XFFBSIM_anonymous.nonlocals )) -> Msg = Msg;
 /* line 361: */
BGFBSIM = BDFBSIM_nodenamecommon(WEFBSIM_ifrdint, DFFBSIM_rdname, MFFBSIM_firstchar, TFFBSIM_putbackchar, XFFBSIM_anonymous);
} 
A_PROC_EXIT(get_nodename);
return( BGFBSIM );
} 
#undef NL

A68_254 * EGFBSIM_stringnodename(A68_VC  Oldstring, A68_36  Flt)
{ 
A68_31  GGFBSIM_generator;   /* proc value of non-global proc */
A68_VC  LGFBSIM;  /* avoid structure result */
A68_VC  MGFBSIM_string;
A68_VC  NGFBSIM;  /* OPERATORS - trim index */
A68_VC  OGFBSIM;  /* YIELD */
A68_INT  PGFBSIM;  /* YIELD */
A68_CHAR * QGFBSIM;  /* YIELD */
A68_INT  RGFBSIM_ix;
A68_289  ZGFBSIM;  /* collateral clause result */
A68_VC  AHFBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  BHFBSIM_whitespace;
A68_VC  EHFBSIM_lcorddorvs;
A68_VC  FHFBSIM;  /* OPERATORS - trim index */
A68_VC  GHFBSIM_lowercaseletters;
A68_VC  JHFBSIM_ucorddorvs;
A68_VC  KHFBSIM;  /* OPERATORS - trim index */
A68_VC  LHFBSIM_uppercaseletters;
A68_VC  MHFBSIM;  /* OPERATORS - trim index */
A68_VC  NHFBSIM_decdigits;
A68_VC  QHFBSIM_opsymbols;
A68_149  SHFBSIM_iswhitespace;   /* proc value of non-global proc */
A68_149  XHFBSIM_isdecdigit;   /* proc value of non-global proc */
A68_291  CIFBSIM_uppercase;   /* proc value of non-global proc */
A68_282  JIFBSIM_firstchar;   /* proc value of non-global proc */
A68_242  SIFBSIM_putbackchar;   /* proc value of non-global proc */
A68_293  YIFBSIM_rdintbasic;   /* proc value of non-global proc */
A68_280  AKFBSIM_ifrdint;   /* proc value of non-global proc */
A68_281  PKFBSIM_rdname;   /* proc value of non-global proc */
A68_254 * JLFBSIM_answer;
A68_VC  LLFBSIM;  /* OPERATORS - trim index */
A68_254 * NLFBSIM;  /* clause result */
A_PROC_ENTRY(stringnodename);
 /* line 380: */
 /* line 381: */
{ 
A_CLOSURE( GGFBSIM_generator, HGFBSIM_generator, IGFBSIM_generator );
(( IGFBSIM_generator * ) ( GGFBSIM_generator.nonlocals )) -> Oldstring = Oldstring;
A_CALLPROC(GGFBSIM_generator,(A68_FALSE, &LGFBSIM),(A68_FALSE, &LGFBSIM,(GGFBSIM_generator).nonlocals));
MGFBSIM_string = LGFBSIM;
 /* line 382: */
OGFBSIM = A_VTRIM(NGFBSIM,(MGFBSIM_string),A_VTSCRIPT(&(NGFBSIM.upb),(MGFBSIM_string).upb,1,Oldstring.upb)) ;
A_VASSIGN2(Oldstring,OGFBSIM,A68_CHAR );
 /* line 383: */
PGFBSIM = (Oldstring.upb+1) ;
QGFBSIM = (&A_VINDEX(MGFBSIM_string,PGFBSIM)) ;
(*QGFBSIM) = (A68_CHAR)0;
 /* line 386: */
RGFBSIM_ix = 1;
 /* line 388: */
 /* line 396: */
 /* line 397: */
ZGFBSIM.data[0] = (A68_CHAR)9;
ZGFBSIM.data[1] = (A68_CHAR)10;
ZGFBSIM.data[2] = (A68_CHAR)11;
ZGFBSIM.data[3] = (A68_CHAR)12;
ZGFBSIM.data[4] = (A68_CHAR)13;
ZGFBSIM.data[5] = ' ';
BHFBSIM_whitespace = A_HISVEC(AHFBSIM,ZGFBSIM,6,A68_CHAR );
 /* line 398: */
EHFBSIM_lcorddorvs = DHFBSIM;
 /* line 399: */
GHFBSIM_lowercaseletters = A_VTRIM(FHFBSIM,(EHFBSIM_lcorddorvs),A_VTSCRIPT(&(FHFBSIM.upb),(EHFBSIM_lcorddorvs).upb,1,26));
 /* line 400: */
JHFBSIM_ucorddorvs = IHFBSIM;
 /* line 401: */
LHFBSIM_uppercaseletters = A_VTRIM(KHFBSIM,(JHFBSIM_ucorddorvs),A_VTSCRIPT(&(KHFBSIM.upb),(JHFBSIM_ucorddorvs).upb,1,26));
 /* line 402: */
NHFBSIM_decdigits = A_VTRIM(MHFBSIM,(EHFBSIM_lcorddorvs),A_VTSCRIPT(&(MHFBSIM.upb),(EHFBSIM_lcorddorvs).upb,27,36));
 /* line 403: */
QHFBSIM_opsymbols = PHFBSIM;
 /* line 405: */
A_CLOSURE( SHFBSIM_iswhitespace, THFBSIM_iswhitespace, UHFBSIM_iswhitespace );
(( UHFBSIM_iswhitespace * ) ( SHFBSIM_iswhitespace.nonlocals )) -> BHFBSIM_whitespace = BHFBSIM_whitespace;
 /* line 407: */
A_CLOSURE( XHFBSIM_isdecdigit, YHFBSIM_isdecdigit, ZHFBSIM_isdecdigit );
(( ZHFBSIM_isdecdigit * ) ( XHFBSIM_isdecdigit.nonlocals )) -> NHFBSIM_decdigits = NHFBSIM_decdigits;
 /* line 409: */
A_CLOSURE( CIFBSIM_uppercase, DIFBSIM_uppercase, EIFBSIM_uppercase );
(( EIFBSIM_uppercase * ) ( CIFBSIM_uppercase.nonlocals )) -> GHFBSIM_lowercaseletters = GHFBSIM_lowercaseletters;
(( EIFBSIM_uppercase * ) ( CIFBSIM_uppercase.nonlocals )) -> LHFBSIM_uppercaseletters = LHFBSIM_uppercaseletters;
 /* line 416: */
A_CLOSURE( JIFBSIM_firstchar, KIFBSIM_firstchar, LIFBSIM_firstchar );
(( LIFBSIM_firstchar * ) ( JIFBSIM_firstchar.nonlocals )) -> RGFBSIM_ix = (&RGFBSIM_ix);
(( LIFBSIM_firstchar * ) ( JIFBSIM_firstchar.nonlocals )) -> MGFBSIM_string = MGFBSIM_string;
(( LIFBSIM_firstchar * ) ( JIFBSIM_firstchar.nonlocals )) -> SHFBSIM_iswhitespace = SHFBSIM_iswhitespace;
 /* line 427: */
A_CLOSURE( SIFBSIM_putbackchar, TIFBSIM_putbackchar, UIFBSIM_putbackchar );
(( UIFBSIM_putbackchar * ) ( SIFBSIM_putbackchar.nonlocals )) -> RGFBSIM_ix = (&RGFBSIM_ix);
 /* line 429: */
A_CLOSURE( YIFBSIM_rdintbasic, ZIFBSIM_rdintbasic, AJFBSIM_rdintbasic );
(( AJFBSIM_rdintbasic * ) ( YIFBSIM_rdintbasic.nonlocals )) -> MGFBSIM_string = MGFBSIM_string;
(( AJFBSIM_rdintbasic * ) ( YIFBSIM_rdintbasic.nonlocals )) -> RGFBSIM_ix = (&RGFBSIM_ix);
 /* line 462: */
A_CLOSURE( AKFBSIM_ifrdint, BKFBSIM_ifrdint, CKFBSIM_ifrdint );
(( CKFBSIM_ifrdint * ) ( AKFBSIM_ifrdint.nonlocals )) -> RGFBSIM_ix = (&RGFBSIM_ix);
(( CKFBSIM_ifrdint * ) ( AKFBSIM_ifrdint.nonlocals )) -> MGFBSIM_string = MGFBSIM_string;
(( CKFBSIM_ifrdint * ) ( AKFBSIM_ifrdint.nonlocals )) -> SHFBSIM_iswhitespace = SHFBSIM_iswhitespace;
(( CKFBSIM_ifrdint * ) ( AKFBSIM_ifrdint.nonlocals )) -> XHFBSIM_isdecdigit = XHFBSIM_isdecdigit;
(( CKFBSIM_ifrdint * ) ( AKFBSIM_ifrdint.nonlocals )) -> YIFBSIM_rdintbasic = YIFBSIM_rdintbasic;
 /* line 491: */
A_CLOSURE( PKFBSIM_rdname, QKFBSIM_rdname, RKFBSIM_rdname );
(( RKFBSIM_rdname * ) ( PKFBSIM_rdname.nonlocals )) -> JIFBSIM_firstchar = JIFBSIM_firstchar;
(( RKFBSIM_rdname * ) ( PKFBSIM_rdname.nonlocals )) -> RGFBSIM_ix = (&RGFBSIM_ix);
(( RKFBSIM_rdname * ) ( PKFBSIM_rdname.nonlocals )) -> GHFBSIM_lowercaseletters = GHFBSIM_lowercaseletters;
(( RKFBSIM_rdname * ) ( PKFBSIM_rdname.nonlocals )) -> MGFBSIM_string = MGFBSIM_string;
(( RKFBSIM_rdname * ) ( PKFBSIM_rdname.nonlocals )) -> EHFBSIM_lcorddorvs = EHFBSIM_lcorddorvs;
(( RKFBSIM_rdname * ) ( PKFBSIM_rdname.nonlocals )) -> LHFBSIM_uppercaseletters = LHFBSIM_uppercaseletters;
(( RKFBSIM_rdname * ) ( PKFBSIM_rdname.nonlocals )) -> JHFBSIM_ucorddorvs = JHFBSIM_ucorddorvs;
(( RKFBSIM_rdname * ) ( PKFBSIM_rdname.nonlocals )) -> QHFBSIM_opsymbols = QHFBSIM_opsymbols;
 /* line 519: */
 /* line 520: */
JLFBSIM_answer = BDFBSIM_nodenamecommon(AKFBSIM_ifrdint, PKFBSIM_rdname, JIFBSIM_firstchar, SIFBSIM_putbackchar, Flt);
 /* line 521: */
 /* line 522: */
if ( (A_CALLPROC(JIFBSIM_firstchar,(Flt),(Flt,(JIFBSIM_firstchar).nonlocals))!=(A68_CHAR)0) )
{ 
 /* line 523: */
A_CALLPROC(Flt,(A_VC_PLUS(A_VTRIM(LLFBSIM,(MGFBSIM_string),A_VTSCRIPT(&(LLFBSIM.upb),(MGFBSIM_string).upb,1,(RGFBSIM_ix-1))),MLFBSIM)),(A_VC_PLUS(A_VTRIM(LLFBSIM,(MGFBSIM_string),A_VTSCRIPT(&(LLFBSIM.upb),(MGFBSIM_string).upb,1,(RGFBSIM_ix-1))),MLFBSIM),(Flt).nonlocals));
} 
 /* line 524: */
 /* line 525: */
NLFBSIM = JLFBSIM_answer;
} 
A_PROC_EXIT(stringnodename);
return( NLFBSIM );
} 
#undef NL

A68_254 * QLFBSIM_absolutenodename(A68_VC  String, A68_36  Flt)
{ 
A68_BOOL  RLFBSIM;  /* optbool result */
A68_INT  SLFBSIM;  /* YIELD */
A68_INT  TLFBSIM;  /* YIELD */
A68_VC  ULFBSIM;  /* clause result */
A68_VC  VLFBSIM;  /* OPERATORS - trim index */
A68_VC  WLFBSIM_trimmed;
A68_254 * XLFBSIM_path;
A68_254 * YLFBSIM_rootpath;
A68_255 ** DMFBSIM;  /* YIELD */
A68_254 * EMFBSIM;  /* clause result */
A_PROC_ENTRY(absolutenodename);
 /* line 531: */
 /* line 533: */
{ 
 /* line 534: */
RLFBSIM = (String.upb>=2);
if ( RLFBSIM )
{SLFBSIM = (String.upb-1) ;
RLFBSIM = ((*(&A_VINDEX(String,SLFBSIM)))==' ');
}
 /* line 535: */
if ( RLFBSIM )
{ /* line 536: */
TLFBSIM = String.upb ;
RLFBSIM = ((*(&A_VINDEX(String,TLFBSIM)))==OBFBSIM_goinchar);
}
 /* line 537: */
if ( RLFBSIM )
{ 
 /* line 538: */
 /* line 539: */
ULFBSIM = A_VTRIM(VLFBSIM,(String),A_VTSCRIPT(&(VLFBSIM.upb),(String).upb,1,(String.upb-2)));
} 
else
{ 
ULFBSIM = String;
} 
WLFBSIM_trimmed = ULFBSIM;
 /* line 540: */
XLFBSIM_path = EGFBSIM_stringnodename(WLFBSIM_trimmed, Flt);
 /* line 541: */
 /* line 542: */
UKDBSIM_simtablelookuppath(KGDBSIM_simulatedfunctionname, MGDBSIM_any, (&YLFBSIM_rootpath));
 /* line 543: */
 /* line 544: */
if ( A_VC_NE((*(&(YLFBSIM_rootpath->Name))),(*(&(XLFBSIM_path->Name)))) )
{ 
 /* line 545: */
if ( !UKDBSIM_simtablelookuppath((*(&(XLFBSIM_path->Name))), NGDBSIM_probename, (&YLFBSIM_rootpath)) )
{ 
 /* line 546: */
 /* line 547: */
A_CALLPROC(Flt,(A_VC_PLUS(A_VC_PLUS(BMFBSIM,(*(&(XLFBSIM_path->Name)))),CMFBSIM)),(A_VC_PLUS(A_VC_PLUS(BMFBSIM,(*(&(XLFBSIM_path->Name)))),CMFBSIM),(Flt).nonlocals));
} 
} 
 /* line 548: */
DMFBSIM = (&(XLFBSIM_path->Bind)) ;
(*DMFBSIM) = (*(&(YLFBSIM_rootpath->Bind)));
 /* line 549: */
 /* line 550: */
EMFBSIM = XLFBSIM_path;
} 
A_PROC_EXIT(absolutenodename);
return( EMFBSIM );
} 
#undef NL

A68_254 * GMFBSIM_new(A68_254 * Path)
{ 
A68_254 * HMFBSIM_result;
A68_254 * IMFBSIM_scan;
A68_254 ** JMFBSIM_last;
A68_254 * KMFBSIM;  /* YIELD */
A68_254 * LMFBSIM_new;
A68_254 * MMFBSIM;  /* clause result */
A_PROC_ENTRY(new);
 /* line 572: */
 /* line 573: */
{ 
HMFBSIM_result = HGDBSIM_nilpath;
 /* line 574: */
IMFBSIM_scan = Path;
 /* line 575: */
JMFBSIM_last = (&HMFBSIM_result);
 /* line 576: */
for ( ;; )
{ 
 /* line 577: */
if ( !((IMFBSIM_scan!=HGDBSIM_nilpath)) ) break;
KMFBSIM = A_HEAP(A68_254 ) ;
(*KMFBSIM) = (*IMFBSIM_scan) ;
LMFBSIM_new = KMFBSIM;
 /* line 578: */
(*JMFBSIM_last) = LMFBSIM_new;
 /* line 579: */
JMFBSIM_last = (&(LMFBSIM_new->Rest));
 /* line 580: */
 /* line 581: */
IMFBSIM_scan = (*(&(IMFBSIM_scan->Rest)));
}
 /* line 582: */
 /* line 583: */
MMFBSIM = HMFBSIM_result;
} 
A_PROC_EXIT(new);
return( MMFBSIM );
} 
#undef NL

A_STATIC A68_254 * OMFBSIM_clear(A68_254 * Path)
{ 
A68_254 * PMFBSIM_scan;
A68_255 ** QMFBSIM;  /* YIELD */
A68_254 * RMFBSIM;  /* clause result */
A_PROC_ENTRY(clear);
 /* line 592: */
 /* line 593: */
{ 
PMFBSIM_scan = Path;
 /* line 594: */
for ( ;; )
{ 
 /* line 595: */
if ( !((PMFBSIM_scan!=HGDBSIM_nilpath)) ) break;
QMFBSIM = (&(PMFBSIM_scan->Bind)) ;
(*QMFBSIM) = IGDBSIM_nilbind;
 /* line 596: */
 /* line 597: */
PMFBSIM_scan = (*(&(PMFBSIM_scan->Rest)));
}
 /* line 598: */
 /* line 599: */
RMFBSIM = Path;
} 
A_PROC_EXIT(clear);
return( RMFBSIM );
} 
#undef NL

A_STATIC A68_254 * TMFBSIM_ending(A68_254 * Path)
{ 
A68_254 * UMFBSIM;  /* clause result */
A68_254 * VMFBSIM_scan;
A_PROC_ENTRY(ending);
 /* line 606: */
 /* line 608: */
if ( (Path==HGDBSIM_nilpath) )
{ 
 /* line 609: */
UMFBSIM = HGDBSIM_nilpath;
} 
else
{ 
VMFBSIM_scan = Path;
 /* line 610: */
for ( ;; )
{ 
 /* line 611: */
if ( !(((*(&(VMFBSIM_scan->Rest)))!=HGDBSIM_nilpath)) ) break;
 /* line 612: */
VMFBSIM_scan = (*(&(VMFBSIM_scan->Rest)));
}
 /* line 613: */
 /* line 614: */
UMFBSIM = VMFBSIM_scan;
} 
A_PROC_EXIT(ending);
return( UMFBSIM );
} 
#undef NL

A_STATIC A68_254 * YMFBSIM_append(A68_254 * Left, A68_254 * Right)
{ 
A68_254 * ZMFBSIM;  /* clause result */
A68_254 * ANFBSIM_result;
A68_254 ** BNFBSIM;  /* YIELD */
A_PROC_ENTRY(append);
 /* line 623: */
 /* line 625: */
if ( (Left==HGDBSIM_nilpath) )
{ 
 /* line 626: */
ZMFBSIM = HGDBSIM_nilpath;
} 
else
{ 
ANFBSIM_result = GMFBSIM_new(Left);
 /* line 627: */
BNFBSIM = (&(TMFBSIM_ending(ANFBSIM_result)->Rest)) ;
(*BNFBSIM) = Right;
 /* line 628: */
 /* line 629: */
ZMFBSIM = ANFBSIM_result;
} 
A_PROC_EXIT(append);
return( ZMFBSIM );
} 
#undef NL

A68_254 * DNFBSIM_goin(A68_254 * Path)
{ 
A68_254 * ENFBSIM;  /* clause result */
A68_254 * FNFBSIM_result;
A68_254 * GNFBSIM_ending;
A68_CHAR * HNFBSIM;  /* YIELD */
A_PROC_ENTRY(goin);
 /* line 648: */
 /* line 650: */
if ( (Path==HGDBSIM_nilpath) )
{ 
 /* line 651: */
ENFBSIM = HGDBSIM_nilpath;
} 
else
{ 
FNFBSIM_result = GMFBSIM_new(Path);
 /* line 652: */
GNFBSIM_ending = TMFBSIM_ending(FNFBSIM_result);
 /* line 653: */
 /* line 656: */
if ( ((*(&(GNFBSIM_ending->Op)))!=GGDBSIM_noop) )
{ 
 /* line 657: */
ENFBSIM = HGDBSIM_nilpath;
} 
else
{ 
HNFBSIM = (&(GNFBSIM_ending->Op)) ;
(*HNFBSIM) = FGDBSIM_goin;
 /* line 658: */
 /* line 659: */
 /* line 660: */
ENFBSIM = FNFBSIM_result;
} 
} 
A_PROC_EXIT(goin);
return( ENFBSIM );
} 
#undef NL

A_STATIC A68_254 * JNFBSIM_gopast(A68_254 * Path)
{ 
A68_254 * KNFBSIM;  /* clause result */
A68_254 * LNFBSIM_result;
A68_254 * MNFBSIM_ending;
A68_CHAR * NNFBSIM;  /* YIELD */
A_PROC_ENTRY(gopast);
 /* line 669: */
 /* line 671: */
if ( (Path==HGDBSIM_nilpath) )
{ 
 /* line 672: */
KNFBSIM = HGDBSIM_nilpath;
} 
else
{ 
LNFBSIM_result = GMFBSIM_new(Path);
 /* line 673: */
MNFBSIM_ending = TMFBSIM_ending(LNFBSIM_result);
 /* line 674: */
 /* line 676: */
if ( ((*(&(MNFBSIM_ending->Op)))==GGDBSIM_noop) )
{ 
NNFBSIM = (&(MNFBSIM_ending->Op)) ;
(*NNFBSIM) = EGDBSIM_gopast;
 /* line 677: */
 /* line 678: */
 /* line 681: */
KNFBSIM = LNFBSIM_result;
} 
else
{ 
 /* line 682: */
KNFBSIM = LNFBSIM_result;
} 
} 
A_PROC_EXIT(gopast);
return( KNFBSIM );
} 
#undef NL

A68_254 * PNFBSIM_goout(A68_254 * Path)
{ 
A68_254 * QNFBSIM;  /* clause result */
A68_254 * RNFBSIM_result;
A68_254 * SNFBSIM_scan;
A68_254 * TNFBSIM_lastgoin;
A68_CHAR * UNFBSIM;  /* YIELD */
A68_254 ** VNFBSIM;  /* YIELD */
A_PROC_ENTRY(goout);
 /* line 691: */
 /* line 693: */
if ( (Path==HGDBSIM_nilpath) )
{ 
 /* line 694: */
QNFBSIM = HGDBSIM_nilpath;
} 
else
{ 
RNFBSIM_result = GMFBSIM_new(Path);
 /* line 695: */
SNFBSIM_scan = RNFBSIM_result;
 /* line 696: */
TNFBSIM_lastgoin = HGDBSIM_nilpath;
 /* line 697: */
for ( ;; )
{ 
 /* line 698: */
if ( !((SNFBSIM_scan!=HGDBSIM_nilpath)) ) break;
 /* line 699: */
if ( ((*(&(SNFBSIM_scan->Op)))==FGDBSIM_goin) )
{ 
 /* line 700: */
TNFBSIM_lastgoin = SNFBSIM_scan;
} 
 /* line 701: */
 /* line 702: */
SNFBSIM_scan = (*(&(SNFBSIM_scan->Rest)));
}
 /* line 703: */
 /* line 706: */
if ( (TNFBSIM_lastgoin==HGDBSIM_nilpath) )
{ 
 /* line 708: */
QNFBSIM = HGDBSIM_nilpath;
} 
else
{ 
UNFBSIM = (&(TNFBSIM_lastgoin->Op)) ;
(*UNFBSIM) = GGDBSIM_noop;
 /* line 709: */
VNFBSIM = (&(TNFBSIM_lastgoin->Rest)) ;
(*VNFBSIM) = HGDBSIM_nilpath;
 /* line 710: */
 /* line 711: */
 /* line 712: */
QNFBSIM = RNFBSIM_result;
} 
} 
A_PROC_EXIT(goout);
return( QNFBSIM );
} 
#undef NL

A68_254 * YNFBSIM_goout(A68_VC  Name, A68_254 * Path)
{ 
A68_254 * ZNFBSIM_result;
A68_254 * AOFBSIM_ending;
A68_BOOL  BOFBSIM;  /* optbool result */
A68_BOOL  COFBSIM;  /* clause result */
A68_254 * DOFBSIM;  /* clause result */
A_PROC_ENTRY(goout);
 /* line 721: */
 /* line 722: */
{ 
ZNFBSIM_result = PNFBSIM_goout(Path);
 /* line 723: */
for ( ;; )
{ 
 /* line 724: */
AOFBSIM_ending = TMFBSIM_ending(ZNFBSIM_result);
 /* line 725: */
BOFBSIM = (AOFBSIM_ending!=HGDBSIM_nilpath);
if ( BOFBSIM )
{ /* line 726: */
BOFBSIM = A_VC_NE((*(&(AOFBSIM_ending->Name))),Name);
}
 /* line 727: */
COFBSIM = BOFBSIM;
if ( !COFBSIM ) break;
 /* line 728: */
ZNFBSIM_result = PNFBSIM_goout(ZNFBSIM_result);
}
 /* line 729: */
 /* line 730: */
DOFBSIM = ZNFBSIM_result;
} 
A_PROC_EXIT(goout);
return( DOFBSIM );
} 
#undef NL

A68_VOID  FOFBSIM_smallname(A68_254 * Path, A68_VC  *ReturnedValue)
{ 
A68_254 * GOFBSIM_end;
A68_BOOL  HOFBSIM;  /* clause result */
A68_VC  IOFBSIM;  /* != */
A68_VC  JOFBSIM;  /* clause result */
A_PROC_ENTRY(smallname);
 /* line 736: */
{ 
GOFBSIM_end = TMFBSIM_ending(Path);
 /* line 737: */
 /* line 738: */
 /* line 739: */
IOFBSIM = (*(&(GOFBSIM_end->Aliasname))) ;
HOFBSIM = ! A_VSTRUCTCOMP(IOFBSIM,NTCAOST_nilid);
if ( HOFBSIM )
{ 
 /* line 740: */
JOFBSIM = (*(&(GOFBSIM_end->Aliasname)));
} 
else
{ 
JOFBSIM = (*(&(GOFBSIM_end->Name)));
} 
} 
A_PROC_EXIT(smallname);
*ReturnedValue = (JOFBSIM);
return;
} 
#undef NL

A68_254 * MOFBSIM_newalias(A68_254 * Path, A68_VC  Alias)
{ 
A68_VC * NOFBSIM;  /* YIELD */
A68_254 * OOFBSIM;  /* clause result */
A_PROC_ENTRY(newalias);
 /* line 743: */
{ 
NOFBSIM = (&(TMFBSIM_ending(Path)->Aliasname)) ;
(*NOFBSIM) = Alias;
OOFBSIM = Path;
} 
A_PROC_EXIT(newalias);
return( OOFBSIM );
} 
#undef NL

A68_254 * QOFBSIM_expandroot(A68_254 * Path)
{ 
A68_254 * ROFBSIM_rootpath;
A68_BOOL  SOFBSIM;  /* optbool result */
A68_BOOL  TOFBSIM;  /* clause result */
A68_254 * UOFBSIM;  /* clause result */
A_PROC_ENTRY(expandroot);
 /* line 753: */
{ 
 /* line 754: */
 /* line 755: */
SOFBSIM = ((*(&(Path->Repeat)))==1);
if ( SOFBSIM )
{ /* line 756: */
SOFBSIM = UKDBSIM_simtablelookuppath((*(&(Path->Name))), MGDBSIM_any, (&ROFBSIM_rootpath));
}
 /* line 757: */
TOFBSIM = SOFBSIM;
if ( TOFBSIM )
{ 
 /* line 758: */
if ( ((*(&(Path->Op)))==FGDBSIM_goin) )
{ 
 /* line 759: */
UOFBSIM = YMFBSIM_append(DNFBSIM_goin(ROFBSIM_rootpath), OMFBSIM_clear((*(&(Path->Rest)))));
} 
else
{ 
 /* line 760: */
if ( ((*(&(Path->Op)))==EGDBSIM_gopast) )
{ 
 /* line 761: */
 /* line 763: */
UOFBSIM = YMFBSIM_append(JNFBSIM_gopast(ROFBSIM_rootpath), OMFBSIM_clear((*(&(Path->Rest)))));
} 
else
{ 
 /* line 764: */
 /* line 765: */
UOFBSIM = ROFBSIM_rootpath;
} 
} 
} 
else
{ 
UKDBSIM_simtablelookuppath(JGDBSIM_monitoringpointername, MGDBSIM_any, (&ROFBSIM_rootpath));
 /* line 766: */
 /* line 767: */
UOFBSIM = YMFBSIM_append(JNFBSIM_gopast(ROFBSIM_rootpath), OMFBSIM_clear(Path));
} 
} 
A_PROC_EXIT(expandroot);
return( UOFBSIM );
} 
#undef NL

A_STATIC A68_VOID  WOFBSIM_generator(A68_BOOL  VOFBSIM_anonymous, A68_212  *ReturnedValue)
{ 
A68_212  XOFBSIM;  /* clause result */
A68_212  YOFBSIM;  /* OPERATORS - dynamic generator */
{ 
YOFBSIM.upb = 0 ;
( VOFBSIM_anonymous? A_VLOC(A68_210 ,YOFBSIM): A_VHEAP(A68_210 ,YOFBSIM) );
XOFBSIM = YOFBSIM;
} 
*ReturnedValue = (XOFBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  EPFBSIM_searchright(A68_INT  Repeat, A68_VC  Name, A68_212  Context, A68_212  *ReturnedValue)
{ 
A68_INT  FPFBSIM_i;
A68_INT  GPFBSIM_remainder;
A68_BOOL  HPFBSIM;  /* optbool result */
A68_210  IPFBSIM_binding;
A68_VC  JPFBSIM;  /* != */
A68_BOOL  KPFBSIM;  /* optbool result */
A68_VC  LPFBSIM;  /* != */
A68_BOOL  MPFBSIM;  /* optbool result */
A68_BOOL  NPFBSIM;  /* clause result */
A68_212  OPFBSIM;  /* clause result */
A68_212  PPFBSIM;  /* OPERATORS - trim index */
A_PROC_ENTRY(searchright);
 /* line 788: */
 /* line 789: */
{ 
FPFBSIM_i = 1;
 /* line 790: */
GPFBSIM_remainder = Repeat;
 /* line 791: */
for ( ;; )
{ 
 /* line 792: */
 /* line 794: */
HPFBSIM = (FPFBSIM_i<=Context.upb);
if ( HPFBSIM )
{{ 
IPFBSIM_binding = (*(&A_VINDEX(Context,FPFBSIM_i)));
 /* line 795: */
 /* line 796: */
JPFBSIM = IPFBSIM_binding.Lname ;
KPFBSIM = ! A_VSTRUCTCOMP(JPFBSIM,NTCAOST_nilid);
if ( KPFBSIM )
{KPFBSIM = A_VC_EQ(Name,IPFBSIM_binding.Lname);
}
 /* line 797: */
if ( ! KPFBSIM )
{LPFBSIM = IPFBSIM_binding.Uname ;
MPFBSIM = ! A_VSTRUCTCOMP(LPFBSIM,NTCAOST_nilid);
if ( MPFBSIM )
{MPFBSIM = A_VC_EQ(Name,IPFBSIM_binding.Uname);
}
 /* line 798: */
KPFBSIM = MPFBSIM;
}
if ( KPFBSIM )
{ 
GPFBSIM_remainder-=1;
} 
 /* line 799: */
 /* line 800: */
 /* line 801: */
NPFBSIM = (GPFBSIM_remainder!=0);
} 
HPFBSIM = NPFBSIM;
}
if ( !(HPFBSIM) ) break;
FPFBSIM_i+=1;
}
 /* line 802: */
 /* line 803: */
OPFBSIM = A_VTRIM(PPFBSIM,(Context),A_VTSCRIPT(&(PPFBSIM.upb),(Context).upb,FPFBSIM_i,(Context).upb));
} 
A_PROC_EXIT(searchright);
*ReturnedValue = (OPFBSIM);
return;
} 
#undef NL

A68_217 * SPFBSIM_node(A68_254 * Path, A68_36  Flt)
{ 
A68_212  TPFBSIM_context;
A68_217 * UPFBSIM_ans;
A68_254 * VPFBSIM_scan;
A68_INT  WPFBSIM_instance;
A68_INT  XPFBSIM_circuit;
A68_INT  YPFBSIM_base;
A68_212  BQFBSIM;  /* avoid structure result */
A68_212  CQFBSIM_tail;
A68_255  HQFBSIM;  /* collateral clause result */
A68_INT  IQFBSIM;  /* YIELD */
A68_INT  JQFBSIM;  /* YIELD */
A68_217  KQFBSIM;  /* collateral clause result */
A68_INT  LQFBSIM;  /* YIELD */
A68_216  MQFBSIM;  /* avoid structure result */
A68_216  NQFBSIM;  /* united object - for case conformity */
A68_213  OQFBSIM_b;
A68_213  PQFBSIM;  /* collateral clause result */
A68_215  QQFBSIM;  /* clause result */
A68_215  RQFBSIM;  /* OPERATORS - mode -> union mode */
A68_207  SQFBSIM_w;
A68_214  TQFBSIM;  /* collateral clause result */
A68_207 * UQFBSIM;  /* YIELD */
A68_215  VQFBSIM;  /* OPERATORS - mode -> union mode */
A68_215 * WQFBSIM;  /* YIELD */
A68_217 * XQFBSIM;  /* YIELD */
A68_255 * YQFBSIM;  /* YIELD */
A68_255 ** ZQFBSIM;  /* YIELD */
A68_215  ARFBSIM;  /* united object - for case conformity */
A68_213  BRFBSIM_b;
A68_211  CRFBSIM;  /* avoid structure result */
A68_VC  ERFBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_212  GRFBSIM;  /* OPERATORS - trim index */
A68_215  HRFBSIM;  /* united object - for case conformity */
A68_213  IRFBSIM_b;
A68_211  JRFBSIM;  /* avoid structure result */
A68_VC  LRFBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_212  NRFBSIM;  /* avoid structure result */
A68_212  ORFBSIM_tail;
A68_212  PRFBSIM;  /* OPERATORS - trim index */
A68_217 * SRFBSIM;  /* clause result */
A_PROC_ENTRY(node);
 /* line 806: */
 /* line 807: */
{ 
TPFBSIM_context = ZOFBSIM_nullbinding;
 /* line 808: */
 /* line 809: */
VPFBSIM_scan = Path;
 /* line 810: */
 /* line 812: */
for ( ;; )
{ 
 /* line 813: */
if ( !((VPFBSIM_scan!=HGDBSIM_nilpath)) ) break;
 /* line 814: */
if ( ((*(&(VPFBSIM_scan->Bind)))==IGDBSIM_nilbind) )
{ 
 /* line 815: */
if ( ((*(&(VPFBSIM_scan->Repeat)))<1) )
{ 
 /* line 816: */
A_CALLPROC(Flt,(AQFBSIM),(AQFBSIM,(Flt).nonlocals));
} 
 /* line 817: */
 /* line 818: */
EPFBSIM_searchright( (*(&(VPFBSIM_scan->Repeat))), (*(&(VPFBSIM_scan->Name))), TPFBSIM_context, &BQFBSIM );
CQFBSIM_tail = BQFBSIM;
 /* line 819: */
 /* line 820: */
if ( (CQFBSIM_tail.upb==0) )
{ 
 /* line 821: */
A_CALLPROC(Flt,(A_VC_PLUS(A_VC_PLUS(FQFBSIM,(*(&(VPFBSIM_scan->Name)))),GQFBSIM)),(A_VC_PLUS(A_VC_PLUS(FQFBSIM,(*(&(VPFBSIM_scan->Name)))),GQFBSIM),(Flt).nonlocals));
} 
 /* line 822: */
 /* line 823: */
 /* line 824: */
IQFBSIM = 1 ;
HQFBSIM.Uname = (*(&((&A_VINDEX(CQFBSIM_tail,IQFBSIM))->Uname)));
 /* line 825: */
JQFBSIM = 1 ;
HQFBSIM.Lname = (*(&((&A_VINDEX(CQFBSIM_tail,JQFBSIM))->Lname)));
 /* line 826: */
 /* line 827: */
 /* line 828: */
 /* line 829: */
LQFBSIM = 1 ;
FXCBSIM_lookuprnode( (*(&((&A_VINDEX(CQFBSIM_tail,LQFBSIM))->Node))), &MQFBSIM );
NQFBSIM = MQFBSIM ;
switch ( NQFBSIM.mode )
{ 
case 1: /* STRUCT(INT,INT)  */
OQFBSIM_b = (NQFBSIM.data.mode1);
PQFBSIM.Fn = OQFBSIM_b.Fn;
PQFBSIM.Instance = (OQFBSIM_b.Instance+WPFBSIM_instance);
 /* line 830: */
QQFBSIM = A_UNITE(RQFBSIM,mode1,1,PQFBSIM);
break;
case 2: /* STRUCT(MODE191,REF MODE208)  */
SQFBSIM_w = (NQFBSIM.data.mode2);
UQFBSIM = A_HEAP(A68_207 ) ;
(*UQFBSIM) = SQFBSIM_w ;
TQFBSIM.Wire = UQFBSIM;
 /* line 831: */
TQFBSIM.Instance = WPFBSIM_instance;
QQFBSIM = A_UNITE(VQFBSIM,mode2,2,TQFBSIM);
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 832: */
WQFBSIM = A_HEAP(A68_215 ) ;
KQFBSIM.Node = (*WQFBSIM) = QQFBSIM;
 /* line 833: */
KQFBSIM.Circuit = XPFBSIM_circuit;
 /* line 834: */
KQFBSIM.Base = YPFBSIM_base;
XQFBSIM = A_HEAP(A68_217 ) ;
(*XQFBSIM) = KQFBSIM ;
HQFBSIM.Node = XQFBSIM;
YQFBSIM = A_HEAP(A68_255 ) ;
(*YQFBSIM) = HQFBSIM ;
ZQFBSIM = (&(VPFBSIM_scan->Bind)) ;
(*ZQFBSIM) = YQFBSIM;
 /* line 835: */
 /* line 836: */
if ( ((*(&(VPFBSIM_scan->Op)))==FGDBSIM_goin) )
{ 
 /* line 837: */
ARFBSIM = (*(&((*(&((*(&(VPFBSIM_scan->Bind)))->Node)))->Node))) ;
switch ( ARFBSIM.mode )
{ 
case 1: /* STRUCT(INT,INT)  */
BRFBSIM_b = (ARFBSIM.data.mode1);
 /* line 838: */
 /* line 839: */
{ 
MWCBSIM_lookupfunction( BRFBSIM_b.Fn, &CRFBSIM );
TPFBSIM_context = CRFBSIM.Body;
 /* line 840: */
 /* line 841: */
 /* line 842: */
WPFBSIM_instance = BRFBSIM_b.Instance;
} 
break;
default: 
 /* line 843: */
 /* line 844: */
A_CALLPROC(Flt,(A_VC_PLUS(A_VC_PLUS(A_HVEC(ERFBSIM,'\"',A68_CHAR ),(*(&(VPFBSIM_scan->Name)))),FRFBSIM)),(A_VC_PLUS(A_VC_PLUS(A_HVEC(ERFBSIM,'\"',A68_CHAR ),(*(&(VPFBSIM_scan->Name)))),FRFBSIM),(Flt).nonlocals));
break;
} 
} 
else
{ 
 /* line 845: */
if ( ((*(&(VPFBSIM_scan->Op)))==EGDBSIM_gopast) )
{ 
if ( (TPFBSIM_context.upb!=0) )
{ 
 /* line 846: */
 /* line 847: */
 /* line 848: */
TPFBSIM_context = A_VTRIM(GRFBSIM,(CQFBSIM_tail),A_VTSCRIPT(&(GRFBSIM.upb),(CQFBSIM_tail).upb,2,(CQFBSIM_tail).upb));
} 
} 
} 
} 
else
{ 
 /* line 849: */
if ( ((*(&(VPFBSIM_scan->Op)))==FGDBSIM_goin) )
{ 
 /* line 850: */
HRFBSIM = (*(&((*(&((*(&(VPFBSIM_scan->Bind)))->Node)))->Node))) ;
switch ( HRFBSIM.mode )
{ 
case 1: /* STRUCT(INT,INT)  */
IRFBSIM_b = (HRFBSIM.data.mode1);
 /* line 851: */
 /* line 852: */
{ 
MWCBSIM_lookupfunction( IRFBSIM_b.Fn, &JRFBSIM );
TPFBSIM_context = JRFBSIM.Body;
 /* line 853: */
WPFBSIM_instance = IRFBSIM_b.Instance;
 /* line 854: */
XPFBSIM_circuit = (*(&((*(&((*(&(VPFBSIM_scan->Bind)))->Node)))->Circuit)));
 /* line 855: */
 /* line 856: */
 /* line 857: */
YPFBSIM_base = (*(&((*(&((*(&(VPFBSIM_scan->Bind)))->Node)))->Base)));
} 
break;
default: 
 /* line 858: */
 /* line 859: */
A_CALLPROC(Flt,(A_VC_PLUS(A_VC_PLUS(A_HVEC(LRFBSIM,'\"',A68_CHAR ),(*(&(VPFBSIM_scan->Name)))),MRFBSIM)),(A_VC_PLUS(A_VC_PLUS(A_HVEC(LRFBSIM,'\"',A68_CHAR ),(*(&(VPFBSIM_scan->Name)))),MRFBSIM),(Flt).nonlocals));
break;
} 
} 
else
{ 
 /* line 860: */
if ( ((*(&(VPFBSIM_scan->Op)))==EGDBSIM_gopast) )
{ 
 /* line 862: */
if ( (TPFBSIM_context.upb!=0) )
{ 
EPFBSIM_searchright( (*(&(VPFBSIM_scan->Repeat))), (*(&(VPFBSIM_scan->Name))), TPFBSIM_context, &NRFBSIM );
ORFBSIM_tail = NRFBSIM;
 /* line 863: */
 /* line 864: */
 /* line 866: */
TPFBSIM_context = A_VTRIM(PRFBSIM,(ORFBSIM_tail),A_VTSCRIPT(&(PRFBSIM.upb),(ORFBSIM_tail).upb,2,(ORFBSIM_tail).upb));
} 
else
{ 
 /* line 867: */
 /* line 868: */
 /* line 869: */
A_CALLPROC(Flt,(A_VC_PLUS(RRFBSIM,(*(&(VPFBSIM_scan->Name))))),(A_VC_PLUS(RRFBSIM,(*(&(VPFBSIM_scan->Name)))),(Flt).nonlocals));
} 
} 
} 
} 
 /* line 870: */
UPFBSIM_ans = (*(&((*(&(VPFBSIM_scan->Bind)))->Node)));
 /* line 871: */
 /* line 872: */
VPFBSIM_scan = (*(&(VPFBSIM_scan->Rest)));
}
 /* line 873: */
 /* line 874: */
SRFBSIM = UPFBSIM_ans;
} 
A_PROC_EXIT(node);
return( SRFBSIM );
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void RZEBSIM(void)   /* initialise DECS simnode */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/simnode.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/simtable.m","./mfiles/kernel.m","/u/model/ella/ostools/assoc/mfiles/ioprocs.m","./mfiles/simreader.m","/u/model/ella/ostools/assoc/mfiles/kernelreader.m","/u/model/ella/ostools/assoc/mfiles/commandsyntax.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_212  APFBSIM;  /* avoid structure result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
ZFDBSIM();   /* USE simtable */
XWBBSIM();   /* USE kernel */
TIGAOST();   /* USE ioprocs */
WAAASIM();   /* USE simreader */
TXEAOST();   /* USE kernelreader */
LRAAOST();   /* USE commandsyntax */
JFAAOSI();   /* USE messageproc */
JSCAOST();   /* USE basics */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/simnode.a68";
A_config.translation_time = "Tue Apr  4 11:14:36 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "QZEBSIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:14:36 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS simnode);
UEAALIB_a68config(LGAALIB_configinfo, VZEBSIM);
 /* line 95: */
 /* line 109: */
 /* line 127: */
 /* line 131: */
 /* line 140: */
 /* line 141: */
 /* line 142: */
 /* line 143: */
 /* line 144: */
 /* line 145: */
PBFBSIM_eofchar = (A68_CHAR)3;
 /* line 156: */
 /* line 189: */
 /* line 196: */
 /* line 213: */
 /* line 214: */
 /* line 330: */
 /* line 379: */
 /* line 530: */
 /* line 571: */
 /* line 591: */
 /* line 605: */
 /* line 621: */
 /* line 622: */
 /* line 647: */
 /* line 668: */
 /* line 690: */
 /* line 719: */
 /* line 720: */
 /* line 735: */
 /* line 742: */
 /* line 751: */
 /* line 752: */
 /* line 784: */
WOFBSIM_generator( A68_TRUE, &APFBSIM );
ZOFBSIM_nullbinding = APFBSIM;
 /* line 786: */
 /* line 805: */
 /* line 877: */
 /* line 879: */
 /* line 896: */
/*SKIP*/;
A_PROC_EXIT(DECS simnode);
} 
#undef NL
/* end of translation of ./a68files/simnode.a68 */
