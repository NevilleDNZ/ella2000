
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
/* UNAME:KRAAOST */
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
A68_INT  Number;
A_PAD_INT(PAD_20)
struct A68t93 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_21)
};
typedef struct A68t92  A68_92 ;    /* STRUCT(INT,REF MODE93,BITS)  */
A_VECTOR(struct A68t95 ,A68t94);
typedef struct A68t94  A68_94 ;    /* VECTOR [] MODE95 */
struct A68t95{
struct A68t92  Msgno;
A68_VC  Text;
};
typedef struct A68t95  A68_95 ;    /* STRUCT(MODE92,REF MODE26)  */
struct A68t93{
A68_VC  Name;
struct A68t94  Messages;
};
typedef struct A68t93  A68_93 ;    /* STRUCT(REF MODE26,REF MODE94)  */

A_PROCEDURE(A68_VOID ,A68t96,(A68_BOOL ,struct A68t46 *),(A68_BOOL ,struct A68t46 *,void *));
typedef struct A68t96  A68_96 ;    /* PROC(BOOL) MODE46 */

A_PROCEDURE(A68_VOID ,A68t97,(struct A68t92 ,struct A68t46 ),(struct A68t92 ,struct A68t46 ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(MODE92,MODE46) VOID */
A_VECTOR(struct A68t100 ,A68t99);
typedef struct A68t99  A68_99 ;    /* VECTOR [] MODE100 */
struct A68t100{
A68_INT  Number;
A_PAD_INT(PAD_22)
A68_BITS  Class;
A_PAD_BITS(PAD_23)
A68_VC  Text;
};
typedef struct A68t100  A68_100 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t98{
A68_VC  Name;
struct A68t94  Messages;
A68_BOOL * Initialised;
struct A68t99  Setup;
};
typedef struct A68t98  A68_98 ;    /* STRUCT(MODE26,REF MODE94,REF BOOL,MODE99)  */

A_PROCEDURE(A68_VOID ,A68t101,(A68_BOOL ,struct A68t98 *),(A68_BOOL ,struct A68t98 *,void *));
typedef struct A68t101  A68_101 ;    /* PROC(BOOL) MODE98 */
A_VECTOR(A68_VC ,A68t102);
typedef struct A68t102  A68_102 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t103,(struct A68t46 ,struct A68t102 *),(struct A68t46 ,struct A68t102 *,void *));
typedef struct A68t103  A68_103 ;    /* PROC(MODE46) MODE102 */

A_PROCEDURE(A68_VOID ,A68t104,(struct A68t102 ,struct A68t46 *),(struct A68t102 ,struct A68t46 *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(MODE102) MODE46 */
struct A68t106 ;

A_PROCEDURE(A68_BOOL ,A68t105,(struct A68t106 ),(struct A68t106 ,void *));
typedef struct A68t105  A68_105 ;    /* PROC(MODE106) BOOL */
struct A68t106 { A68_INT mode; union {
struct A68t92  mode1;
struct A68t95  mode2;
} data; };
typedef struct A68t106  A68_106 ;    /* UNION(MODE92,MODE95)  */

A_PROCEDURE(A68_INT ,A68t107,(struct A68t92 ),(struct A68t92 ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(MODE92) INT */

A_PROCEDURE(A68_VOID ,A68t108,(A68_INT ,struct A68t98 ,struct A68t92 *),(A68_INT ,struct A68t98 ,struct A68t92 *,void *));
typedef struct A68t108  A68_108 ;    /* PROC(INT,MODE98) MODE92 */

A_PROCEDURE(A68_BOOL ,A68t109,(struct A68t92 ,struct A68t98 ),(struct A68t92 ,struct A68t98 ,void *));
typedef struct A68t109  A68_109 ;    /* PROC(MODE92,MODE98) BOOL */

A_PROCEDURE(A68_VOID ,A68t110,(struct A68t92 ,struct A68t46 ,struct A68t95 *),(struct A68t92 ,struct A68t46 ,struct A68t95 *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(MODE92,MODE46) MODE95 */

A_PROCEDURE(A68_VOID ,A68t111,(void),(void *));
typedef struct A68t111  A68_111 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t112,(struct A68t111 ),(struct A68t111 ,void *));
typedef struct A68t112  A68_112 ;    /* PROC(MODE111) VOID */

A_PROCEDURE(A68_VOID ,A68t113,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t113  A68_113 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t114,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,60,A68t115);
typedef struct A68t115  A68_115 ;    /* STRUCT 60 CHAR */
A_VECTOR(struct A68t119 ,A68t118);
typedef struct A68t118  A68_118 ;    /* VECTOR [] MODE119 */
struct A68t117{
A68_BITS  Type;
A_PAD_BITS(PAD_24)
struct A68t118  Elements;
};
typedef struct A68t117  A68_117 ;    /* STRUCT(BITS,REF MODE118)  */
struct A68t119 { A68_INT mode; union {
A68_INT * mode1;
struct A68t117  mode2;
} data; };
typedef struct A68t119  A68_119 ;    /* UNION(REF INT,MODE117)  */
struct A68t120{
A68_INT  Sort;
A_PAD_INT(PAD_25)
A68_VC  Value;
};
typedef struct A68t120  A68_120 ;    /* STRUCT(INT,REF MODE26)  */
A_VECTOR(struct A68t120 ,A68t122);
typedef struct A68t122  A68_122 ;    /* VECTOR [] MODE120 */
A_VECTOR(struct A68t126 ,A68t125);
typedef struct A68t125  A68_125 ;    /* VECTOR [] MODE126 */
struct A68t124{
A68_INT  Choice;
A_PAD_INT(PAD_26)
struct A68t125  Params;
};
typedef struct A68t124  A68_124 ;    /* STRUCT(INT,REF MODE125)  */
struct A68t126 { A68_INT mode; union {
struct A68t124  mode1;
struct A68t120  mode2;
} data; };
typedef struct A68t126  A68_126 ;    /* UNION(MODE124,MODE120)  */

A_PROCEDURE(A68_VOID ,A68t128,(struct A68t97 ,A68_VC *),(struct A68t97 ,A68_VC *,void *));
typedef struct A68t128  A68_128 ;    /* PROC(MODE97) REF MODE26 */
struct A68t127 { A68_INT mode; union {
struct A68t128  mode1;
A68_INT * mode2;
struct A68t117  mode3;
} data; };
typedef struct A68t127  A68_127 ;    /* UNION(MODE128,REF INT,MODE117)  */
struct A68t129{
A68_INT * Sort;
struct A68t127  Reader;
A68_VC  Description;
A68_VC  Help;
};
typedef struct A68t129  A68_129 ;    /* STRUCT(REF INT,MODE127,REF MODE26,REF MODE26)  */
struct A68t130{
struct A68t129  Rule;
struct A68t130 * Rest;
};
typedef struct A68t130  A68_130 ;    /* STRUCT(MODE129,REF MODE130)  */

A_PROCEDURE(A68_BOOL ,A68t131,(struct A68t117 ),(struct A68t117 ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(MODE117) BOOL */

A_PROCEDURE(A68_VOID ,A68t132,(struct A68t118 ,struct A68t117 *),(struct A68t118 ,struct A68t117 *,void *));
typedef struct A68t132  A68_132 ;    /* PROC(MODE118) MODE117 */

A_PROCEDURE(A68_VOID ,A68t133,(A68_BOOL ,struct A68t118 *),(A68_BOOL ,struct A68t118 *,void *));
typedef struct A68t133  A68_133 ;    /* PROC(BOOL) MODE118 */

A_PROCEDURE(A68_VOID ,A68t134,(struct A68t119 ,struct A68t117 *),(struct A68t119 ,struct A68t117 *,void *));
typedef struct A68t134  A68_134 ;    /* PROC(MODE119) MODE117 */
A_VECTOR(struct A68t129 ,A68t135);
typedef struct A68t135  A68_135 ;    /* VECTOR [] MODE129 */

A_PROCEDURE(A68_VOID ,A68t136,(struct A68t119 ,struct A68t135 ,A68_VC *),(struct A68t119 ,struct A68t135 ,A68_VC *,void *));
typedef struct A68t136  A68_136 ;    /* PROC(MODE119,REF MODE135) REF MODE26 */
A_ISTRUCT(A68_CHAR ,7,A68t137);
typedef struct A68t137  A68_137 ;    /* STRUCT 7 CHAR */

A_PROCEDURE(A68_BOOL ,A68t138,(A68_VC ),(A68_VC ,void *));
typedef struct A68t138  A68_138 ;    /* PROC(REF MODE26) BOOL */
A_ISTRUCT(A68_CHAR ,3,A68t139);
typedef struct A68t139  A68_139 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t140);
typedef struct A68t140  A68_140 ;    /* STRUCT 3 MODE52 */
A_ISTRUCT(struct A68t52 ,2,A68t141);
typedef struct A68t141  A68_141 ;    /* STRUCT 2 MODE52 */

A_PROCEDURE(A68_VOID ,A68t142,(struct A68t34 *,struct A68t135 ),(struct A68t34 *,struct A68t135 ,void *));
typedef struct A68t142  A68_142 ;    /* PROC(REF MODE34,REF MODE135) VOID */
A_ISTRUCT(A68_CHAR ,4,A68t143);
typedef struct A68t143  A68_143 ;    /* STRUCT 4 CHAR */
struct A68t144{
A68_INT * No;
struct A68t127  New;
A68_VC  Name;
A68_VC  Help;
};
typedef struct A68t144  A68_144 ;    /* STRUCT(REF INT,MODE127,MODE26,MODE26)  */
A_VECTOR(struct A68t144 ,A68t145);
typedef struct A68t145  A68_145 ;    /* VECTOR [] MODE144 */

A_PROCEDURE(struct A68t130 *,A68t146,(struct A68t130 *,struct A68t145 ),(struct A68t130 *,struct A68t145 ,void *));
typedef struct A68t146  A68_146 ;    /* PROC(REF MODE130,MODE145) REF MODE130 */

A_PROCEDURE(A68_VOID ,A68t147,(struct A68t126 ,struct A68t122 *),(struct A68t126 ,struct A68t122 *,void *));
typedef struct A68t147  A68_147 ;    /* PROC(MODE126) REF MODE122 */

A_PROCEDURE(A68_VOID ,A68t148,(A68_BOOL ,struct A68t122 *),(A68_BOOL ,struct A68t122 *,void *));
typedef struct A68t148  A68_148 ;    /* PROC(BOOL) MODE122 */

A_PROCEDURE(A68_VOID ,A68t149,(struct A68t120 ),(struct A68t120 ,void *));
typedef struct A68t149  A68_149 ;    /* PROC(MODE120) VOID */

A_PROCEDURE(A68_VOID ,A68t150,(struct A68t126 ),(struct A68t126 ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(MODE126) VOID */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from messageproc --- */
extern A68_VOID  ZAAAOSI_makervc(A68_VC ,A68_VC *);
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VC  YNAAOSL_nilstr;
extern A68_VC  EOAAOSL_nullstr;
extern A68_VOID  NYAAOSL_tab(A68_INT ,A68_60 *);
extern A68_VOID  HZAAOSL_lines(A68_INT ,A68_64 *);
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
extern A68_VOID  UJBAOSL_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_115   ORAAOST = {"$Id: commandsyntax.a68,v 34.2 1995/03/29 13:02:25 ella Exp $"}; 
A_GISVEC(A68_VC ,PRAAOST,ORAAOST,60)
A68_119  SRAAOST_noparameters;
A68_126  ASAAOST_no_parameters;
#define BSAAOST_prod_syn 0X0U
#define CSAAOST_alt_syn 0X8U
#define DSAAOST_opt_syn 0X2U
#define ESAAOST_star_syn 0X4U
static A68_137   BVAAOST = {"illegal"}; 
A_GISVEC(A68_VC ,CVAAOST,BVAAOST,7)
static A68_139   RVAAOST = {" | "}; 
A_GISVEC(A68_VC ,TVAAOST,RVAAOST,3)
static A68_143   LYAAOST = {"::= "}; 
A_GISVEC(A68_VC ,MYAAOST,LYAAOST,4)
typedef struct   /* env of non-global proc */
{
A68_118  Cs;
} USAAOST_generator;
typedef struct   /* env of non-global proc */
{
A68_118  Cs;
} FTAAOST_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} VTAAOST_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} NUAAOST_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} UZAAOST_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * ZZAAOST_n;
A68_122 * XZAAOST_ans;
} DABAOST_add;
typedef struct   /* env of non-global proc */
{
A68_149  BABAOST_add;
A68_150  RABAOST_simplify;
} TABAOST_simplify;
typedef struct   /* env of non-global proc */
{
int dummy;
} FBBAOST_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} PBBAOST_generator;
typedef struct   /* env of non-global proc */
{
A68_122 * XZAAOST_ans;
} HABAOST_generator;

A_STATIC A68_VOID  VRAAOST_generator(A68_BOOL  URAAOST_anonymous, A68_VC  *ReturnedValue);

A68_BOOL  GSAAOST_is_alt(A68_117  Rule);

A68_BOOL  JSAAOST_is_opt(A68_117  Rule);

A68_BOOL  MSAAOST_is_star(A68_117  Rule);

A68_VOID  PSAAOST_alt(A68_118  Cs, A68_117  *ReturnedValue);

A_STATIC A68_VOID  TSAAOST_generator(A68_BOOL  RSAAOST_anonymous, A68_118  *ReturnedValue, void *NonLocals);

A68_VOID  ATAAOST_prod(A68_118  Cs, A68_117  *ReturnedValue);

A_STATIC A68_VOID  ETAAOST_generator(A68_BOOL  CTAAOST_anonymous, A68_118  *ReturnedValue, void *NonLocals);

A68_VOID  LTAAOST_opt(A68_119  Cs, A68_117  *ReturnedValue);

A_STATIC A68_VOID  UTAAOST_generator(A68_BOOL  STAAOST_anonymous, A68_118  *ReturnedValue, void *NonLocals);

A68_VOID  DUAAOST_star(A68_119  Cs, A68_117  *ReturnedValue);

A_STATIC A68_VOID  MUAAOST_generator(A68_BOOL  KUAAOST_anonymous, A68_118  *ReturnedValue, void *NonLocals);

A68_VOID  WUAAOST_show_syntax(A68_119  Syntax, A68_135  Analysers, A68_VC  *ReturnedValue);

A_STATIC A68_BOOL  HVAAOST_needs_brackets(A68_VC  Line);

A68_VOID  ZXAAOST_show_readers(A68_34 * Out, A68_135  Readers);

A68_130 * EZAAOST_add_readers(A68_130 * Readers, A68_145  New_rules);

A68_VOID  QZAAOST_simplify_params(A68_126  Param, A68_122  *ReturnedValue);

A_STATIC A68_VOID  TZAAOST_generator(A68_BOOL  RZAAOST_anonymous, A68_122  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CABAOST_add(A68_120  V, void *NonLocals);

A_STATIC A68_VOID  GABAOST_generator(A68_BOOL  EABAOST_anonymous, A68_122  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SABAOST_simplify(A68_126  Param, void *NonLocals);

A_STATIC A68_VOID  EBBAOST_generator(A68_BOOL  CBBAOST_anonymous, A68_122  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OBBAOST_generator(A68_BOOL  MBBAOST_anonymous, A68_122  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GABAOST_generator(A68_BOOL  EABAOST_anonymous, A68_122  *ReturnedValue, void *NonLocals)
#define NL(x) (((HABAOST_generator *)NonLocals)->x)
{ 
A68_122  IABAOST;  /* clause result */
A68_122  JABAOST;  /* OPERATORS - dynamic generator */
{ 
JABAOST.upb = ((*NL(XZAAOST_ans)).upb+10) ;
( EABAOST_anonymous? A_VLOC(A68_120 ,JABAOST): A_VHEAP(A68_120 ,JABAOST) );
IABAOST = JABAOST;
} 
*ReturnedValue = (IABAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  TSAAOST_generator(A68_BOOL  RSAAOST_anonymous, A68_118  *ReturnedValue, void *NonLocals)
#define NL(x) (((USAAOST_generator *)NonLocals)->x)
{ 
A68_118  VSAAOST;  /* clause result */
A68_118  WSAAOST;  /* OPERATORS - dynamic generator */
{ 
WSAAOST.upb = NL(Cs).upb ;
( RSAAOST_anonymous? A_VLOC(A68_119 ,WSAAOST): A_VHEAP(A68_119 ,WSAAOST) );
VSAAOST = WSAAOST;
} 
*ReturnedValue = (VSAAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  ETAAOST_generator(A68_BOOL  CTAAOST_anonymous, A68_118  *ReturnedValue, void *NonLocals)
#define NL(x) (((FTAAOST_generator *)NonLocals)->x)
{ 
A68_118  GTAAOST;  /* clause result */
A68_118  HTAAOST;  /* OPERATORS - dynamic generator */
{ 
HTAAOST.upb = NL(Cs).upb ;
( CTAAOST_anonymous? A_VLOC(A68_119 ,HTAAOST): A_VHEAP(A68_119 ,HTAAOST) );
GTAAOST = HTAAOST;
} 
*ReturnedValue = (GTAAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  UTAAOST_generator(A68_BOOL  STAAOST_anonymous, A68_118  *ReturnedValue, void *NonLocals)
#define NL(x) (((VTAAOST_generator *)NonLocals)->x)
{ 
A68_118  WTAAOST;  /* clause result */
A68_118  XTAAOST;  /* OPERATORS - dynamic generator */
{ 
XTAAOST.upb = 1 ;
( STAAOST_anonymous? A_VLOC(A68_119 ,XTAAOST): A_VHEAP(A68_119 ,XTAAOST) );
WTAAOST = XTAAOST;
} 
*ReturnedValue = (WTAAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  MUAAOST_generator(A68_BOOL  KUAAOST_anonymous, A68_118  *ReturnedValue, void *NonLocals)
#define NL(x) (((NUAAOST_generator *)NonLocals)->x)
{ 
A68_118  OUAAOST;  /* clause result */
A68_118  PUAAOST;  /* OPERATORS - dynamic generator */
{ 
PUAAOST.upb = 1 ;
( KUAAOST_anonymous? A_VLOC(A68_119 ,PUAAOST): A_VHEAP(A68_119 ,PUAAOST) );
OUAAOST = PUAAOST;
} 
*ReturnedValue = (OUAAOST);
return;
} 
#undef NL

A_STATIC A68_BOOL  HVAAOST_needs_brackets(A68_VC  Line)
{ 
A68_INT  IVAAOST_n;
A68_BOOL  JVAAOST_ans;
A68_CHAR * KVAAOST_c;
A68_INT  LVAAOST;  /* forall loop counter */
A68_BOOL  MVAAOST;  /* optbool result */
A68_BOOL  NVAAOST;  /* optbool result */
A68_BOOL  OVAAOST;  /* optbool result */
A68_BOOL  PVAAOST;  /* clause result */
A_PROC_ENTRY(needs_brackets);
 /* line 122: */
 /* line 123: */
{ 
IVAAOST_n = 0;
JVAAOST_ans = A68_FALSE;
 /* line 124: */
LVAAOST = Line.upb -1;
KVAAOST_c = Line.data;
for (;LVAAOST-- >= 0;
(KVAAOST_c++
) )
{
 /* line 125: */
if ( !(!JVAAOST_ans) ) break;
MVAAOST = ((*KVAAOST_c)=='{');
if ( ! MVAAOST )
{ /* line 126: */
MVAAOST = ((*KVAAOST_c)=='[');
}
if ( MVAAOST )
{ 
 /* line 127: */
IVAAOST_n+=1;
} 
else
{ 
NVAAOST = ((*KVAAOST_c)=='}');
if ( ! NVAAOST )
{ /* line 128: */
NVAAOST = ((*KVAAOST_c)==']');
}
if ( NVAAOST )
{ 
 /* line 129: */
IVAAOST_n-=1;
} 
else
{ 
OVAAOST = ((*KVAAOST_c)==' ');
if ( OVAAOST )
{ /* line 130: */
OVAAOST = (IVAAOST_n==0);
}
if ( OVAAOST )
{ 
 /* line 131: */
 /* line 132: */
JVAAOST_ans = A68_TRUE;
} 
} 
} 
}
 /* line 133: */
 /* line 134: */
PVAAOST = JVAAOST_ans;
} 
A_PROC_EXIT(needs_brackets);
return( PVAAOST );
} 
#undef NL

A_STATIC A68_VOID  TZAAOST_generator(A68_BOOL  RZAAOST_anonymous, A68_122  *ReturnedValue, void *NonLocals)
#define NL(x) (((UZAAOST_generator *)NonLocals)->x)
{ 
A68_122  VZAAOST;  /* clause result */
A68_122  WZAAOST;  /* OPERATORS - dynamic generator */
{ 
WZAAOST.upb = 0 ;
( RZAAOST_anonymous? A_VLOC(A68_120 ,WZAAOST): A_VHEAP(A68_120 ,WZAAOST) );
VZAAOST = WZAAOST;
} 
*ReturnedValue = (VZAAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  CABAOST_add(A68_120  V, void *NonLocals)
#define NL(x) (((DABAOST_add *)NonLocals)->x)
{ 
A68_148  FABAOST_generator;   /* proc value of non-global proc */
A68_122  KABAOST;  /* avoid structure result */
A68_122  LABAOST_new;
A68_122  MABAOST;  /* OPERATORS - trim index */
A68_122  NABAOST;  /* YIELD */
A68_INT  OABAOST;  /* YIELD */
A68_120 * PABAOST;  /* YIELD */
A_PROC_ENTRY(add);
 /* line 204: */
 /* line 205: */
{ 
 /* line 206: */
if ( ((*NL(ZZAAOST_n))==(*NL(XZAAOST_ans)).upb) )
{ 
A_CLOSURE( FABAOST_generator, GABAOST_generator, HABAOST_generator );
(( HABAOST_generator * ) ( FABAOST_generator.nonlocals )) -> XZAAOST_ans = NL(XZAAOST_ans);
A_CALLPROC(FABAOST_generator,(A68_FALSE, &KABAOST),(A68_FALSE, &KABAOST,(FABAOST_generator).nonlocals));
LABAOST_new = KABAOST;
 /* line 207: */
NABAOST = A_VTRIM(MABAOST,(LABAOST_new),A_VTSCRIPT(&(MABAOST.upb),(LABAOST_new).upb,1,(*NL(ZZAAOST_n)))) ;
A_VASSIGN2((*NL(XZAAOST_ans)),NABAOST,A68_120 );
 /* line 208: */
 /* line 209: */
(*NL(XZAAOST_ans)) = LABAOST_new;
} 
 /* line 210: */
 /* line 211: */
OABAOST = (*NL(ZZAAOST_n))+=1 ;
PABAOST = (&A_VINDEX((*NL(XZAAOST_ans)),OABAOST)) ;
(*PABAOST) = V;
} 
A_PROC_EXIT(add);
return;
} 
#undef NL

A_STATIC A68_VOID  SABAOST_simplify(A68_126  Param, void *NonLocals)
#define NL(x) (((TABAOST_simplify *)NonLocals)->x)
{ 
A68_126  UABAOST;  /* united object - for case conformity */
A68_120  VABAOST_value;
A68_124  WABAOST_choice;
A68_126 * XABAOST_p;
A68_125  YABAOST;  /* forall yield */
A68_INT  ZABAOST;  /* forall loop counter */
A_PROC_ENTRY(simplify);
 /* line 214: */
 /* line 215: */
UABAOST = Param ;
switch ( UABAOST.mode )
{ 
case 2: /* STRUCT(INT,REF MODE26)  */
VABAOST_value = (UABAOST.data.mode2);
 /* line 216: */
if ( (VABAOST_value.Sort>0) )
{ 
 /* line 217: */
A_CALLPROC(NL(BABAOST_add),(VABAOST_value),(VABAOST_value,(NL(BABAOST_add)).nonlocals));
} 
break;
case 1: /* STRUCT(INT,REF MODE125)  */
WABAOST_choice = (UABAOST.data.mode1);
 /* line 218: */
YABAOST = WABAOST_choice.Params ;
ZABAOST = YABAOST.upb -1;
XABAOST_p = YABAOST.data;
for (;ZABAOST-- >= 0;
(XABAOST_p++
) )
{
A_CALLPROC(NL(RABAOST_simplify),((*XABAOST_p)),((*XABAOST_p),(NL(RABAOST_simplify)).nonlocals));
}
 /* line 219: */
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(simplify);
return;
} 
#undef NL

A_STATIC A68_VOID  EBBAOST_generator(A68_BOOL  CBBAOST_anonymous, A68_122  *ReturnedValue, void *NonLocals)
#define NL(x) (((FBBAOST_generator *)NonLocals)->x)
{ 
A68_122  GBBAOST;  /* clause result */
A68_122  HBBAOST;  /* OPERATORS - dynamic generator */
{ 
HBBAOST.upb = 1 ;
( CBBAOST_anonymous? A_VLOC(A68_120 ,HBBAOST): A_VHEAP(A68_120 ,HBBAOST) );
GBBAOST = HBBAOST;
} 
*ReturnedValue = (GBBAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  OBBAOST_generator(A68_BOOL  MBBAOST_anonymous, A68_122  *ReturnedValue, void *NonLocals)
#define NL(x) (((PBBAOST_generator *)NonLocals)->x)
{ 
A68_122  QBBAOST;  /* clause result */
A68_122  RBBAOST;  /* OPERATORS - dynamic generator */
{ 
RBBAOST.upb = 1 ;
( MBBAOST_anonymous? A_VLOC(A68_120 ,RBBAOST): A_VHEAP(A68_120 ,RBBAOST) );
QBBAOST = RBBAOST;
} 
*ReturnedValue = (QBBAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  VRAAOST_generator(A68_BOOL  URAAOST_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  WRAAOST;  /* clause result */
A68_VC  XRAAOST;  /* OPERATORS - dynamic generator */
{ 
XRAAOST.upb = 0 ;
( URAAOST_anonymous? A_VLOC(A68_CHAR ,XRAAOST): A_VHEAP(A68_CHAR ,XRAAOST) );
WRAAOST = XRAAOST;
} 
*ReturnedValue = (WRAAOST);
return;
} 
#undef NL

A68_BOOL  GSAAOST_is_alt(A68_117  Rule)
{ 
A68_BOOL  HSAAOST;  /* clause result */
A_PROC_ENTRY(is_alt);
HSAAOST = ((A68_BITS )(Rule.Type&CSAAOST_alt_syn)==CSAAOST_alt_syn);
A_PROC_EXIT(is_alt);
return( HSAAOST );
} 
#undef NL

A68_BOOL  JSAAOST_is_opt(A68_117  Rule)
{ 
A68_BOOL  KSAAOST;  /* clause result */
A_PROC_ENTRY(is_opt);
KSAAOST = ((A68_BITS )(Rule.Type&DSAAOST_opt_syn)==DSAAOST_opt_syn);
A_PROC_EXIT(is_opt);
return( KSAAOST );
} 
#undef NL

A68_BOOL  MSAAOST_is_star(A68_117  Rule)
{ 
A68_BOOL  NSAAOST;  /* clause result */
A_PROC_ENTRY(is_star);
NSAAOST = ((A68_BITS )(Rule.Type&ESAAOST_star_syn)==ESAAOST_star_syn);
A_PROC_EXIT(is_star);
return( NSAAOST );
} 
#undef NL

A68_VOID  PSAAOST_alt(A68_118  Cs, A68_117  *ReturnedValue)
{ 
A68_117  QSAAOST;  /* collateral clause result */
A68_133  SSAAOST_generator;   /* proc value of non-global proc */
A68_118  XSAAOST;  /* avoid structure result */
A68_117  YSAAOST;  /* clause result */
A_PROC_ENTRY(alt);
 /* line 88: */
QSAAOST.Type = 0X8U;
A_CLOSURE( SSAAOST_generator, TSAAOST_generator, USAAOST_generator );
(( USAAOST_generator * ) ( SSAAOST_generator.nonlocals )) -> Cs = Cs;
A_CALLPROC(SSAAOST_generator,(A68_FALSE, &XSAAOST),(A68_FALSE, &XSAAOST,(SSAAOST_generator).nonlocals));
A_VASSIGN2(Cs,XSAAOST,A68_119 ) ;
QSAAOST.Elements = XSAAOST;
YSAAOST = QSAAOST;
A_PROC_EXIT(alt);
*ReturnedValue = (YSAAOST);
return;
} 
#undef NL

A68_VOID  ATAAOST_prod(A68_118  Cs, A68_117  *ReturnedValue)
{ 
A68_117  BTAAOST;  /* collateral clause result */
A68_133  DTAAOST_generator;   /* proc value of non-global proc */
A68_118  ITAAOST;  /* avoid structure result */
A68_117  JTAAOST;  /* clause result */
A_PROC_ENTRY(prod);
 /* line 91: */
BTAAOST.Type = 0X0U;
A_CLOSURE( DTAAOST_generator, ETAAOST_generator, FTAAOST_generator );
(( FTAAOST_generator * ) ( DTAAOST_generator.nonlocals )) -> Cs = Cs;
A_CALLPROC(DTAAOST_generator,(A68_FALSE, &ITAAOST),(A68_FALSE, &ITAAOST,(DTAAOST_generator).nonlocals));
A_VASSIGN2(Cs,ITAAOST,A68_119 ) ;
BTAAOST.Elements = ITAAOST;
JTAAOST = BTAAOST;
A_PROC_EXIT(prod);
*ReturnedValue = (JTAAOST);
return;
} 
#undef NL

A68_VOID  LTAAOST_opt(A68_119  Cs, A68_117  *ReturnedValue)
{ 
A68_119  MTAAOST;  /* united object - for case conformity */
A68_117  NTAAOST_rule;
A68_117  OTAAOST;  /* collateral clause result */
A68_117  PTAAOST;  /* clause result */
A68_INT * QTAAOST_terminal_symbol;
A68_117  RTAAOST;  /* collateral clause result */
A68_133  TTAAOST_generator;   /* proc value of non-global proc */
A68_118  YTAAOST;  /* avoid structure result */
A68_119  ZTAAOST;  /* OPERATORS - mode -> union mode */
A68_118  AUAAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_118  BUAAOST;  /* OPERATORS - assign op */
A_PROC_ENTRY(opt);
 /* line 94: */
 /* line 95: */
MTAAOST = Cs ;
switch ( MTAAOST.mode )
{ 
case 2: /* STRUCT(BITS,REF MODE118)  */
NTAAOST_rule = (MTAAOST.data.mode2);
 /* line 96: */
OTAAOST.Type = (A68_BITS )(NTAAOST_rule.Type|0X2U);
 /* line 97: */
OTAAOST.Elements = NTAAOST_rule.Elements;
PTAAOST = OTAAOST;
break;
case 1: /* REF INT */
QTAAOST_terminal_symbol = (MTAAOST.data.mode1);
 /* line 98: */
RTAAOST.Type = 0X2U;
A_CLOSURE( TTAAOST_generator, UTAAOST_generator, VTAAOST_generator );
 /* line 99: */
A_CALLPROC(TTAAOST_generator,(A68_FALSE, &YTAAOST),(A68_FALSE, &YTAAOST,(TTAAOST_generator).nonlocals));
BUAAOST = A_HVEC(AUAAOST,A_UNITE(ZTAAOST,mode1,1,QTAAOST_terminal_symbol),A68_119 ) ;
A_VASSIGN2(BUAAOST,YTAAOST,A68_119 ) ;
RTAAOST.Elements = YTAAOST;
PTAAOST = RTAAOST;
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(opt);
*ReturnedValue = (PTAAOST);
return;
} 
#undef NL

A68_VOID  DUAAOST_star(A68_119  Cs, A68_117  *ReturnedValue)
{ 
A68_119  EUAAOST;  /* united object - for case conformity */
A68_117  FUAAOST_rule;
A68_117  GUAAOST;  /* collateral clause result */
A68_117  HUAAOST;  /* clause result */
A68_INT * IUAAOST_terminal_symbol;
A68_117  JUAAOST;  /* collateral clause result */
A68_133  LUAAOST_generator;   /* proc value of non-global proc */
A68_118  QUAAOST;  /* avoid structure result */
A68_119  RUAAOST;  /* OPERATORS - mode -> union mode */
A68_118  SUAAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_118  TUAAOST;  /* OPERATORS - assign op */
A_PROC_ENTRY(star);
 /* line 102: */
 /* line 103: */
EUAAOST = Cs ;
switch ( EUAAOST.mode )
{ 
case 2: /* STRUCT(BITS,REF MODE118)  */
FUAAOST_rule = (EUAAOST.data.mode2);
 /* line 104: */
GUAAOST.Type = (A68_BITS )(FUAAOST_rule.Type|0X4U);
 /* line 105: */
GUAAOST.Elements = FUAAOST_rule.Elements;
HUAAOST = GUAAOST;
break;
case 1: /* REF INT */
IUAAOST_terminal_symbol = (EUAAOST.data.mode1);
 /* line 106: */
JUAAOST.Type = 0X4U;
A_CLOSURE( LUAAOST_generator, MUAAOST_generator, NUAAOST_generator );
 /* line 107: */
A_CALLPROC(LUAAOST_generator,(A68_FALSE, &QUAAOST),(A68_FALSE, &QUAAOST,(LUAAOST_generator).nonlocals));
TUAAOST = A_HVEC(SUAAOST,A_UNITE(RUAAOST,mode1,1,IUAAOST_terminal_symbol),A68_119 ) ;
A_VASSIGN2(TUAAOST,QUAAOST,A68_119 ) ;
JUAAOST.Elements = QUAAOST;
HUAAOST = JUAAOST;
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(star);
*ReturnedValue = (HUAAOST);
return;
} 
#undef NL
 /* line 111: */

A68_VOID  WUAAOST_show_syntax(A68_119  Syntax, A68_135  Analysers, A68_VC  *ReturnedValue)
{ 
A68_119  XUAAOST;  /* united object - for case conformity */
A68_INT * YUAAOST_symbol_number;
A68_VC  ZUAAOST;  /* clause result */
A68_BOOL  AVAAOST;  /* optbool result */
A68_VC  DVAAOST;  /* avoid structure result */
A68_117  EVAAOST_rule;
A68_VC  QVAAOST_ans;
A68_VC  SVAAOST;  /* clause result */
A68_VC  UVAAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  VVAAOST_alt;
A68_INT  WVAAOST_n;
A68_INT  XVAAOST_l;
A68_119 * YVAAOST_r;
A68_118  ZVAAOST;  /* forall yield */
A68_INT  AWAAOST;  /* forall loop counter */
A68_VC  BWAAOST;  /* avoid structure result */
A68_VC  CWAAOST_phrase;
A68_BOOL  DWAAOST;  /* optbool result */
A68_140  EWAAOST;  /* collateral clause result */
A68_52  FWAAOST;  /* OPERATORS - mode -> union mode */
A68_CHAR  GWAAOST;  /* YIELD */
A68_52  HWAAOST;  /* OPERATORS - mode -> union mode */
A68_52  IWAAOST;  /* OPERATORS - mode -> union mode */
A68_CHAR  JWAAOST;  /* YIELD */
A68_VC  KWAAOST;  /* clause result */
A68_85  LWAAOST;  /* OPERATORS - istruct -> vector */
A68_VC  MWAAOST;  /* avoid structure result */
A68_VC  NWAAOST_brk;
A68_141  OWAAOST;  /* collateral clause result */
A68_52  PWAAOST;  /* OPERATORS - mode -> union mode */
A68_52  QWAAOST;  /* OPERATORS - mode -> union mode */
A68_VC  RWAAOST;  /* clause result */
A68_85  SWAAOST;  /* OPERATORS - istruct -> vector */
A68_VC  TWAAOST;  /* avoid structure result */
A68_140  UWAAOST;  /* collateral clause result */
A68_52  VWAAOST;  /* OPERATORS - mode -> union mode */
A68_52  WWAAOST;  /* OPERATORS - mode -> union mode */
A68_52  XWAAOST;  /* OPERATORS - mode -> union mode */
A68_85  YWAAOST;  /* OPERATORS - istruct -> vector */
A68_VC  ZWAAOST;  /* avoid structure result */
A68_140  AXAAOST;  /* collateral clause result */
A68_52  BXAAOST;  /* OPERATORS - mode -> union mode */
A68_CHAR  CXAAOST;  /* YIELD */
A68_52  DXAAOST;  /* OPERATORS - mode -> union mode */
A68_52  EXAAOST;  /* OPERATORS - mode -> union mode */
A68_CHAR  FXAAOST;  /* YIELD */
A68_85  GXAAOST;  /* OPERATORS - istruct -> vector */
A68_VC  HXAAOST;  /* avoid structure result */
A68_BOOL  IXAAOST;  /* optbool result */
A68_140  JXAAOST;  /* collateral clause result */
A68_52  KXAAOST;  /* OPERATORS - mode -> union mode */
A68_CHAR  LXAAOST;  /* YIELD */
A68_52  MXAAOST;  /* OPERATORS - mode -> union mode */
A68_52  NXAAOST;  /* OPERATORS - mode -> union mode */
A68_CHAR  OXAAOST;  /* YIELD */
A68_85  PXAAOST;  /* OPERATORS - istruct -> vector */
A68_VC  QXAAOST;  /* avoid structure result */
A68_141  RXAAOST;  /* collateral clause result */
A68_52  SXAAOST;  /* OPERATORS - mode -> union mode */
A68_52  TXAAOST;  /* OPERATORS - mode -> union mode */
A68_CHAR  UXAAOST;  /* YIELD */
A68_85  VXAAOST;  /* OPERATORS - istruct -> vector */
A68_VC  WXAAOST;  /* avoid structure result */
A_PROC_ENTRY(show_syntax);
 /* line 112: */
 /* line 113: */
XUAAOST = Syntax ;
switch ( XUAAOST.mode )
{ 
case 1: /* REF INT */
YUAAOST_symbol_number = (XUAAOST.data.mode1);
 /* line 114: */
 /* line 115: */
 /* line 116: */
if ( ((*YUAAOST_symbol_number)==0) )
{ 
ZUAAOST = EOAAOSL_nullstr;
} 
else
{ 
AVAAOST = ((*YUAAOST_symbol_number)<0);
if ( ! AVAAOST )
{ /* line 117: */
AVAAOST = ((*YUAAOST_symbol_number)>Analysers.upb);
}
 /* line 118: */
if ( AVAAOST )
{ 
ZAAAOSI_makervc( CVAAOST, &DVAAOST );
ZUAAOST = DVAAOST;
} 
else
{ 
 /* line 119: */
 /* line 120: */
ZUAAOST = (*(&((&A_VINDEX(Analysers,(*YUAAOST_symbol_number)))->Description)));
} 
} 
break;
case 2: /* STRUCT(BITS,REF MODE118)  */
EVAAOST_rule = (XUAAOST.data.mode2);
 /* line 121: */
{ 
 /* line 136: */
QVAAOST_ans = EOAAOSL_nullstr;
 /* line 137: */
if ( GSAAOST_is_alt(EVAAOST_rule) )
{ 
SVAAOST = TVAAOST;
} 
else
{ 
SVAAOST = A_HVEC(UVAAOST,' ',A68_CHAR );
} 
VVAAOST_alt = SVAAOST;
 /* line 138: */
WVAAOST_n = 0;
XVAAOST_l = EVAAOST_rule.Elements.upb;
 /* line 139: */
 /* line 140: */
ZVAAOST = EVAAOST_rule.Elements ;
AWAAOST = ZVAAOST.upb -1;
YVAAOST_r = ZVAAOST.data;
for (;AWAAOST-- >= 0;
(YVAAOST_r++
) )
{
WUAAOST_show_syntax( (*YVAAOST_r), Analysers, &BWAAOST );
CWAAOST_phrase = BWAAOST;
 /* line 141: */
DWAAOST = (XVAAOST_l>1);
if ( DWAAOST )
{ /* line 142: */
DWAAOST = HVAAOST_needs_brackets(CWAAOST_phrase);
}
if ( DWAAOST )
{ 
GWAAOST = '{' ;
EWAAOST.data[0] = A_UNITE(FWAAOST,mode6,6,GWAAOST);
EWAAOST.data[1] = A_UNITE(HWAAOST,mode7,7,CWAAOST_phrase);
JWAAOST = '}' ;
EWAAOST.data[2] = A_UNITE(IWAAOST,mode6,6,JWAAOST);
 /* line 143: */
 /* line 144: */
UJBAOSL_oneline( A_HISVEC(LWAAOST,EWAAOST,3,A68_52 ), &MWAAOST );
KWAAOST = MWAAOST;
} 
else
{ 
KWAAOST = CWAAOST_phrase;
} 
NWAAOST_brk = KWAAOST;
 /* line 145: */
 /* line 146: */
if ( ((WVAAOST_n+=1)==XVAAOST_l) )
{ 
OWAAOST.data[0] = A_UNITE(PWAAOST,mode7,7,QVAAOST_ans);
OWAAOST.data[1] = A_UNITE(QWAAOST,mode7,7,NWAAOST_brk);
 /* line 147: */
UJBAOSL_oneline( A_HISVEC(SWAAOST,OWAAOST,2,A68_52 ), &TWAAOST );
RWAAOST = TWAAOST;
} 
else
{ 
UWAAOST.data[0] = A_UNITE(VWAAOST,mode7,7,QVAAOST_ans);
UWAAOST.data[1] = A_UNITE(WWAAOST,mode7,7,NWAAOST_brk);
UWAAOST.data[2] = A_UNITE(XWAAOST,mode7,7,VVAAOST_alt);
 /* line 148: */
 /* line 149: */
UJBAOSL_oneline( A_HISVEC(YWAAOST,UWAAOST,3,A68_52 ), &ZWAAOST );
RWAAOST = ZWAAOST;
} 
QVAAOST_ans = RWAAOST;
}
 /* line 151: */
 /* line 152: */
if ( JSAAOST_is_opt(EVAAOST_rule) )
{ 
CXAAOST = '[' ;
AXAAOST.data[0] = A_UNITE(BXAAOST,mode6,6,CXAAOST);
AXAAOST.data[1] = A_UNITE(DXAAOST,mode7,7,QVAAOST_ans);
FXAAOST = ']' ;
AXAAOST.data[2] = A_UNITE(EXAAOST,mode6,6,FXAAOST);
 /* line 153: */
UJBAOSL_oneline( A_HISVEC(GXAAOST,AXAAOST,3,A68_52 ), &HXAAOST );
QVAAOST_ans = HXAAOST;
} 
else
{ 
IXAAOST = MSAAOST_is_star(EVAAOST_rule);
if ( IXAAOST )
{ /* line 154: */
IXAAOST = HVAAOST_needs_brackets(QVAAOST_ans);
}
if ( IXAAOST )
{ 
LXAAOST = '{' ;
JXAAOST.data[0] = A_UNITE(KXAAOST,mode6,6,LXAAOST);
JXAAOST.data[1] = A_UNITE(MXAAOST,mode7,7,QVAAOST_ans);
OXAAOST = '}' ;
JXAAOST.data[2] = A_UNITE(NXAAOST,mode6,6,OXAAOST);
 /* line 155: */
UJBAOSL_oneline( A_HISVEC(PXAAOST,JXAAOST,3,A68_52 ), &QXAAOST );
QVAAOST_ans = QXAAOST;
} 
} 
 /* line 157: */
if ( MSAAOST_is_star(EVAAOST_rule) )
{ 
RXAAOST.data[0] = A_UNITE(SXAAOST,mode7,7,QVAAOST_ans);
UXAAOST = '*' ;
RXAAOST.data[1] = A_UNITE(TXAAOST,mode6,6,UXAAOST);
UJBAOSL_oneline( A_HISVEC(VXAAOST,RXAAOST,2,A68_52 ), &WXAAOST );
ZUAAOST = WXAAOST;
} 
else
{ 
 /* line 158: */
 /* line 159: */
ZUAAOST = QVAAOST_ans;
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(show_syntax);
*ReturnedValue = (ZUAAOST);
return;
} 
#undef NL

A68_VOID  ZXAAOST_show_readers(A68_34 * Out, A68_135  Readers)
{ 
A68_129 * AYAAOST_reader;
A68_INT  BYAAOST;  /* forall loop counter */
A68_52  CYAAOST;  /* OPERATORS - mode -> union mode */
A68_VC  DYAAOST;  /* YIELD */
A68_85  EYAAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_127  FYAAOST;  /* united object - for case conformity */
A68_119  GYAAOST_syntax;
A68_119  HYAAOST;  /* united object - for case conformity */
A68_140  IYAAOST;  /* collateral clause result */
A68_60  JYAAOST;  /* avoid structure result */
A68_52  KYAAOST;  /* OPERATORS - mode -> union mode */
A68_52  NYAAOST;  /* OPERATORS - mode -> union mode */
A68_VC  OYAAOST;  /* YIELD */
A68_VC  PYAAOST;  /* avoid structure result */
A68_52  QYAAOST;  /* OPERATORS - mode -> union mode */
A68_85  RYAAOST;  /* OPERATORS - istruct -> vector */
A68_VC  SYAAOST;  /* == */
A68_BOOL  TYAAOST;  /* optbool result */
A68_140  UYAAOST;  /* collateral clause result */
A68_52  VYAAOST;  /* OPERATORS - mode -> union mode */
A68_56  WYAAOST;  /* procedure value */
A68_52  XYAAOST;  /* OPERATORS - mode -> union mode */
A68_VC  YYAAOST;  /* YIELD */
A68_64  ZYAAOST;  /* avoid structure result */
A68_52  AZAAOST;  /* OPERATORS - mode -> union mode */
A68_85  BZAAOST;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(show_readers);
 /* line 164: */
 /* line 165: */
BYAAOST = Readers.upb -1;
AYAAOST_reader = Readers.data;
for (;BYAAOST-- >= 0;
(AYAAOST_reader++
) )
{
DYAAOST = (*(&(AYAAOST_reader->Description))) ;
GFBAOSL_put(Out, A_HVEC(EYAAOST,A_UNITE(CYAAOST,mode7,7,DYAAOST),A68_52 ));
 /* line 166: */
 /* line 167: */
FYAAOST = (*(&(AYAAOST_reader->Reader))) ;
switch ( FYAAOST.mode )
{ 
case 2: /* REF INT */
case 3: /* STRUCT(BITS,REF MODE118)  */
A_UNCPY(GYAAOST_syntax,FYAAOST);
GYAAOST_syntax.mode -= 1;
 /* line 168: */
 /* line 169: */
HYAAOST = GYAAOST_syntax ;
switch ( HYAAOST.mode )
{ 
case 2: /* STRUCT(BITS,REF MODE118)  */
NYAAOSL_tab( 12, &JYAAOST );
IYAAOST.data[0] = A_UNITE(KYAAOST,mode16,16,JYAAOST);
OYAAOST = MYAAOST ;
IYAAOST.data[1] = A_UNITE(NYAAOST,mode7,7,OYAAOST);
WUAAOST_show_syntax( GYAAOST_syntax, Readers, &PYAAOST );
IYAAOST.data[2] = A_UNITE(QYAAOST,mode7,7,PYAAOST);
 /* line 170: */
 /* line 171: */
GFBAOSL_put(Out, A_HISVEC(RYAAOST,IYAAOST,3,A68_52 ));
break;
default: 
 /* line 172: */
 /* line 173: */
/*SKIP*/;
break;
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 174: */
SYAAOST = (*(&(AYAAOST_reader->Help))) ;
TYAAOST = A_VSTRUCTCOMP(SYAAOST,YNAAOSL_nilstr);
if ( ! TYAAOST )
{ /* line 175: */
TYAAOST = ((*(&(AYAAOST_reader->Help))).upb==0);
}
if ( TYAAOST )
{ 
 /* line 176: */
LRAAOSL_newline(Out);
} 
else
{ 
WYAAOST.fn.fn_global = LRAAOSL_newline;
WYAAOST.nonlocals = A68_NIL;
UYAAOST.data[0] = A_UNITE(VYAAOST,mode12,12,WYAAOST);
YYAAOST = (*(&(AYAAOST_reader->Help))) ;
UYAAOST.data[1] = A_UNITE(XYAAOST,mode7,7,YYAAOST);
HZAAOSL_lines( 2, &ZYAAOST );
UYAAOST.data[2] = A_UNITE(AZAAOST,mode20,20,ZYAAOST);
 /* line 177: */
 /* line 178: */
GFBAOSL_put(Out, A_HISVEC(BZAAOST,UYAAOST,3,A68_52 ));
} 
}
A_PROC_EXIT(show_readers);
return;
} 
#undef NL
 /* line 186: */

A68_130 * EZAAOST_add_readers(A68_130 * Readers, A68_145  New_rules)
{ 
A68_130 * FZAAOST_rptr;
A68_144  GZAAOST_rule;
A68_144 * HZAAOST;  /* forall control - []x */
A68_INT  IZAAOST;  /* forall loop counter */
A68_INT * JZAAOST;  /* YIELD */
A68_130  KZAAOST;  /* collateral clause result */
A68_VC  LZAAOST;  /* avoid structure result */
A68_VC  MZAAOST;  /* avoid structure result */
A68_130 * NZAAOST;  /* YIELD */
A68_130 * OZAAOST;  /* clause result */
A_PROC_ENTRY(add_readers);
 /* line 187: */
 /* line 188: */
{ 
FZAAOST_rptr = Readers;
 /* line 189: */
 /* line 190: */
IZAAOST = New_rules.upb -1;
HZAAOST = New_rules.data;
for (;IZAAOST-- >= 0;
(HZAAOST++
) )
{
GZAAOST_rule = *HZAAOST;
JZAAOST = GZAAOST_rule.No ;
(*JZAAOST) = ((*(*(&((&(FZAAOST_rptr->Rule))->Sort))))+1);
 /* line 191: */
KZAAOST.Rule.Sort = GZAAOST_rule.No;
KZAAOST.Rule.Reader = GZAAOST_rule.New;
 /* line 192: */
ZAAAOSI_makervc( GZAAOST_rule.Name, &LZAAOST );
KZAAOST.Rule.Description = LZAAOST;
ZAAAOSI_makervc( GZAAOST_rule.Help, &MZAAOST );
KZAAOST.Rule.Help = MZAAOST;
 /* line 193: */
KZAAOST.Rest = FZAAOST_rptr;
NZAAOST = A_HEAP(A68_130 ) ;
(*NZAAOST) = KZAAOST ;
FZAAOST_rptr = NZAAOST;
}
 /* line 194: */
 /* line 195: */
OZAAOST = FZAAOST_rptr;
} 
A_PROC_EXIT(add_readers);
return( OZAAOST );
} 
#undef NL

A68_VOID  QZAAOST_simplify_params(A68_126  Param, A68_122  *ReturnedValue)
{ 
A68_148  SZAAOST_generator;   /* proc value of non-global proc */
A68_122  YZAAOST;  /* avoid structure result */
A68_122  XZAAOST_ans;
A68_INT  ZZAAOST_n;
A68_149  BABAOST_add;   /* proc value of non-global proc */
A68_150  RABAOST_simplify;   /* proc value of non-global proc */
A68_126  ABBAOST;  /* united object - for case conformity */
A68_120  BBBAOST_v;
A68_148  DBBAOST_generator;   /* proc value of non-global proc */
A68_122  IBBAOST;  /* clause result */
A68_122  JBBAOST;  /* avoid structure result */
A68_122  KBBAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_122  LBBAOST;  /* OPERATORS - assign op */
A68_148  NBBAOST_generator;   /* proc value of non-global proc */
A68_120  SBBAOST;  /* collateral clause result */
A68_122  TBBAOST;  /* avoid structure result */
A68_122  UBBAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_122  VBBAOST;  /* OPERATORS - assign op */
A68_122  WBBAOST;  /* OPERATORS - trim index */
A_PROC_ENTRY(simplify_params);
 /* line 199: */
 /* line 200: */
{ 
A_CLOSURE( SZAAOST_generator, TZAAOST_generator, UZAAOST_generator );
A_CALLPROC(SZAAOST_generator,(A68_FALSE, &YZAAOST),(A68_FALSE, &YZAAOST,(SZAAOST_generator).nonlocals));
XZAAOST_ans = YZAAOST;
 /* line 201: */
ZZAAOST_n = 0;
 /* line 203: */
A_CLOSURE( BABAOST_add, CABAOST_add, DABAOST_add );
(( DABAOST_add * ) ( BABAOST_add.nonlocals )) -> ZZAAOST_n = (&ZZAAOST_n);
(( DABAOST_add * ) ( BABAOST_add.nonlocals )) -> XZAAOST_ans = (&XZAAOST_ans);
 /* line 213: */
A_CLOSURE( RABAOST_simplify, SABAOST_simplify, TABAOST_simplify );
(( TABAOST_simplify * ) ( RABAOST_simplify.nonlocals )) -> BABAOST_add = BABAOST_add;
(( TABAOST_simplify * ) ( RABAOST_simplify.nonlocals )) -> RABAOST_simplify = RABAOST_simplify;
 /* line 221: */
 /* line 222: */
ABBAOST = Param ;
switch ( ABBAOST.mode )
{ 
case 2: /* STRUCT(INT,REF MODE26)  */
BBBAOST_v = (ABBAOST.data.mode2);
 /* line 224: */
A_CLOSURE( DBBAOST_generator, EBBAOST_generator, FBBAOST_generator );
 /* line 225: */
A_CALLPROC(DBBAOST_generator,(A68_FALSE, &JBBAOST),(A68_FALSE, &JBBAOST,(DBBAOST_generator).nonlocals));
LBBAOST = A_HVEC(KBBAOST,BBBAOST_v,A68_120 ) ;
A_VASSIGN2(LBBAOST,JBBAOST,A68_120 ) ;
IBBAOST = JBBAOST;
break;
case 1: /* STRUCT(INT,REF MODE125)  */
 /* line 226: */
{ 
A_CALLPROC(RABAOST_simplify,(Param),(Param,(RABAOST_simplify).nonlocals));
 /* line 227: */
 /* line 228: */
if ( (ZZAAOST_n==0) )
{ 
A_CLOSURE( NBBAOST_generator, OBBAOST_generator, PBBAOST_generator );
SBBAOST.Sort = 0;
 /* line 229: */
SBBAOST.Value = EOAAOSL_nullstr;
A_CALLPROC(NBBAOST_generator,(A68_FALSE, &TBBAOST),(A68_FALSE, &TBBAOST,(NBBAOST_generator).nonlocals));
VBBAOST = A_HVEC(UBBAOST,SBBAOST,A68_120 ) ;
A_VASSIGN2(VBBAOST,TBBAOST,A68_120 ) ;
IBBAOST = TBBAOST;
} 
else
{ 
 /* line 230: */
 /* line 231: */
 /* line 232: */
 /* line 233: */
 /* line 237: */
IBBAOST = A_VTRIM(WBBAOST,(XZAAOST_ans),A_VTSCRIPT(&(WBBAOST.upb),(XZAAOST_ans).upb,1,ZZAAOST_n));
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(simplify_params);
*ReturnedValue = (IBBAOST);
return;
} 
#undef NL
 /* line 1: */
 /* line 4: */
void LRAAOST(void)   /* initialise DECS commandsyntax */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/commandsyntax.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_INT * QRAAOST;  /* YIELD */
A68_119  RRAAOST;  /* OPERATORS - mode -> union mode */
A68_120  TRAAOST;  /* collateral clause result */
A68_VC  YRAAOST;  /* avoid structure result */
A68_126  ZRAAOST;  /* OPERATORS - mode -> union mode */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ostools/assoc/./a68files/commandsyntax.a68";
A_config.translation_time = "Tue Apr  4 09:49:13 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "KRAAOST (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:49:13 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS commandsyntax);
UEAALIB_a68config(LGAALIB_configinfo, PRAAOST);
 /* line 47: */
 /* line 73: */
 /* line 75: */
QRAAOST = A_HEAP(A68_INT ) ;
(*QRAAOST) = 0 ;
SRAAOST_noparameters = A_UNITE(RRAAOST,mode1,1,QRAAOST);
 /* line 76: */
TRAAOST.Sort = 0;
VRAAOST_generator( A68_FALSE, &YRAAOST );
TRAAOST.Value = YRAAOST;
ASAAOST_no_parameters = A_UNITE(ZRAAOST,mode2,2,TRAAOST);
 /* line 81: */
 /* line 83: */
 /* line 84: */
 /* line 85: */
 /* line 87: */
 /* line 90: */
 /* line 93: */
 /* line 101: */
 /* line 110: */
 /* line 163: */
 /* line 182: */
 /* line 198: */
 /* line 242: */
A_PROC_EXIT(DECS commandsyntax);
} 
#undef NL
/* end of translation of ./a68files/commandsyntax.a68 */
