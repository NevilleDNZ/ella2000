
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
/* UNAME:HZAAELA */
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
A_ISTRUCT(A68_CHAR ,58,A68t115);
typedef struct A68t115  A68_115 ;    /* STRUCT 58 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t116);
typedef struct A68t116  A68_116 ;    /* STRUCT 7 CHAR */

A_PROCEDURE(A68_VOID ,A68t117,(A68_BOOL ,struct A68t94 *),(A68_BOOL ,struct A68t94 *,void *));
typedef struct A68t117  A68_117 ;    /* PROC(BOOL) MODE94 */
A_ISTRUCT(A68_CHAR ,4,A68t118);
typedef struct A68t118  A68_118 ;    /* STRUCT 4 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t119);
typedef struct A68t119  A68_119 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(A68_CHAR ,40,A68t120);
typedef struct A68t120  A68_120 ;    /* STRUCT 40 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t121);
typedef struct A68t121  A68_121 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(A68_CHAR ,103,A68t122);
typedef struct A68t122  A68_122 ;    /* STRUCT 103 CHAR */
A_ISTRUCT(A68_CHAR ,26,A68t123);
typedef struct A68t123  A68_123 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,36,A68t124);
typedef struct A68t124  A68_124 ;    /* STRUCT 36 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t125);
typedef struct A68t125  A68_125 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t126);
typedef struct A68t126  A68_126 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_CHAR ,53,A68t127);
typedef struct A68t127  A68_127 ;    /* STRUCT 53 CHAR */
A_ISTRUCT(A68_CHAR ,48,A68t128);
typedef struct A68t128  A68_128 ;    /* STRUCT 48 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t129);
typedef struct A68t129  A68_129 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,25,A68t130);
typedef struct A68t130  A68_130 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(A68_CHAR ,27,A68t131);
typedef struct A68t131  A68_131 ;    /* STRUCT 27 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t132);
typedef struct A68t132  A68_132 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,32,A68t133);
typedef struct A68t133  A68_133 ;    /* STRUCT 32 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t134);
typedef struct A68t134  A68_134 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,39,A68t135);
typedef struct A68t135  A68_135 ;    /* STRUCT 39 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t136);
typedef struct A68t136  A68_136 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,51,A68t137);
typedef struct A68t137  A68_137 ;    /* STRUCT 51 CHAR */
A_ISTRUCT(A68_CHAR ,37,A68t138);
typedef struct A68t138  A68_138 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(A68_CHAR ,41,A68t139);
typedef struct A68t139  A68_139 ;    /* STRUCT 41 CHAR */
A_ISTRUCT(A68_CHAR ,35,A68t140);
typedef struct A68t140  A68_140 ;    /* STRUCT 35 CHAR */
A_ISTRUCT(A68_CHAR ,28,A68t141);
typedef struct A68t141  A68_141 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(A68_CHAR ,38,A68t142);
typedef struct A68t142  A68_142 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(A68_CHAR ,54,A68t143);
typedef struct A68t143  A68_143 ;    /* STRUCT 54 CHAR */
A_ISTRUCT(A68_CHAR ,43,A68t144);
typedef struct A68t144  A68_144 ;    /* STRUCT 43 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t145);
typedef struct A68t145  A68_145 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t146);
typedef struct A68t146  A68_146 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t147);
typedef struct A68t147  A68_147 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,91,A68t148);
typedef struct A68t148  A68_148 ;    /* STRUCT 91 CHAR */
A_ISTRUCT(A68_CHAR ,72,A68t149);
typedef struct A68t149  A68_149 ;    /* STRUCT 72 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t150);
typedef struct A68t150  A68_150 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t151);
typedef struct A68t151  A68_151 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t152);
typedef struct A68t152  A68_152 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t153);
typedef struct A68t153  A68_153 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,17,A68t154);
typedef struct A68t154  A68_154 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,44,A68t155);
typedef struct A68t155  A68_155 ;    /* STRUCT 44 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t156);
typedef struct A68t156  A68_156 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t157);
typedef struct A68t157  A68_157 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,34,A68t158);
typedef struct A68t158  A68_158 ;    /* STRUCT 34 CHAR */
A_ISTRUCT(A68_CHAR ,42,A68t159);
typedef struct A68t159  A68_159 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(A68_CHAR ,33,A68t160);
typedef struct A68t160  A68_160 ;    /* STRUCT 33 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t161);
typedef struct A68t161  A68_161 ;    /* STRUCT 30 CHAR */
A_ISTRUCT(A68_CHAR ,49,A68t162);
typedef struct A68t162  A68_162 ;    /* STRUCT 49 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t163);
typedef struct A68t163  A68_163 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(struct A68t100 ,110,A68t164);
typedef struct A68t164  A68_164 ;    /* STRUCT 110 MODE100 */

A_PROCEDURE(A68_VOID ,A68t165,(A68_INT ,struct A68t92 *),(A68_INT ,struct A68t92 *,void *));
typedef struct A68t165  A68_165 ;    /* PROC(INT) MODE92 */

A_PROCEDURE(A68_BOOL ,A68t166,(struct A68t92 ),(struct A68t92 ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(MODE92) BOOL */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from messageproc --- */
extern A68_BITS  UIAAOSI_fatal_class;
extern A68_BITS  VIAAOSI_user_class;
extern A68_BITS  WIAAOSI_error_class;
extern A68_BITS  YIAAOSI_log_class;
extern A68_BITS  ZIAAOSI_output_class;
extern A68_BITS  BJAAOSI_outpart_class;
extern A68_BITS  EJAAOSI_diag2_class;
extern A68_VOID  HMAAOSI_make_msgno(A68_INT ,struct A68t98 ,A68_92 *);
extern A68_BOOL  INAAOSI_is_facility_msg(struct A68t92 ,struct A68t98 );
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_115   LZAAELA = {"$Id: libmessages.a68,v 34.2 1995/03/29 13:03:28 ella Exp $"}; 
A_GISVEC(A68_VC ,MZAAELA,LZAAELA,58)
#define NZAAELA_max_lib_messages 134
static A68_116   PZAAELA = {"library"}; 
A_GISVEC(A68_VC ,QZAAELA,PZAAELA,7)
static A68_118   YZAAELA = {",   "}; 
A_GISVEC(A68_VC ,ZZAAELA,YZAAELA,4)
static A68_119   AABAELA = {""}; 
A_GISVEC(A68_VC ,BABAELA,AABAELA,0)
static A68_120   CABAELA = {"There is not enough space in the * file."}; 
A_GISVEC(A68_VC ,DABAELA,CABAELA,40)
static A68_121   EABAELA = {"* is too big to increase"}; 
A_GISVEC(A68_VC ,FABAELA,EABAELA,24)
static A68_122   GABAELA = {"An attempt to increase the * file size has failed with the message: \"*\".  Please check your file store."}; 
A_GISVEC(A68_VC ,HABAELA,GABAELA,103)
static A68_123   IABAELA = {"Not enough space available"}; 
A_GISVEC(A68_VC ,JABAELA,IABAELA,26)
static A68_120   KABAELA = {"The * file has been increased to * bytes"}; 
A_GISVEC(A68_VC ,LABAELA,KABAELA,40)
static A68_124   MABAELA = {"There is no space left in the * file"}; 
A_GISVEC(A68_VC ,NABAELA,MABAELA,36)
static A68_125   OABAELA = {"Context * is empty"}; 
A_GISVEC(A68_VC ,PABAELA,OABAELA,18)
static A68_126   QABAELA = {"I can't find a context called *"}; 
A_GISVEC(A68_VC ,RABAELA,QABAELA,31)
static A68_127   SABAELA = {"I can't find an imports region called /* in context *"}; 
A_GISVEC(A68_VC ,TABAELA,SABAELA,53)
static A68_128   UABAELA = {"No imports region has been selected in context *"}; 
A_GISVEC(A68_VC ,VABAELA,UABAELA,48)
static A68_129   WABAELA = {"I can't find *"}; 
A_GISVEC(A68_VC ,XABAELA,WABAELA,14)
static A68_126   YABAELA = {"I can't find an import called *"}; 
A_GISVEC(A68_VC ,ZABAELA,YABAELA,31)
static A68_130   ABBAELA = {"* is not a simple context"}; 
A_GISVEC(A68_VC ,BBBAELA,ABBAELA,25)
static A68_131   CBBAELA = {"* is not a compound context"}; 
A_GISVEC(A68_VC ,DBBAELA,CBBAELA,27)
static A68_132   EBBAELA = {"Context *"}; 
A_GISVEC(A68_VC ,FBBAELA,EBBAELA,9)
static A68_132   GBBAELA = {"Version *"}; 
A_GISVEC(A68_VC ,HBBAELA,GBBAELA,9)
static A68_133   IBBAELA = {"Change state of library is now *"}; 
A_GISVEC(A68_VC ,JBBAELA,IBBAELA,32)
static A68_134   KBBAELA = {"ELLA library not opened"}; 
A_GISVEC(A68_VC ,LBBAELA,KBBAELA,23)
static A68_135   MBBAELA = {"Library size = * bytes,  free = * bytes"}; 
A_GISVEC(A68_VC ,NBBAELA,MBBAELA,39)
static A68_135   OBBAELA = {"    *  Ella library:  *,  Version: *  *"}; 
A_GISVEC(A68_VC ,PBBAELA,OBBAELA,39)
static A68_131   QBBAELA = {"Your library is out of date"}; 
A_GISVEC(A68_VC ,RBBAELA,QBBAELA,27)
static A68_136   SBBAELA = {"Database inconsistency"}; 
A_GISVEC(A68_VC ,TBBAELA,SBBAELA,22)
static A68_123   UBBAELA = {"This isn't an ELLA library"}; 
A_GISVEC(A68_VC ,VBBAELA,UBBAELA,26)
static A68_137   WBBAELA = {"ELLA mark no currently = *, the library mark no = *"}; 
A_GISVEC(A68_VC ,XBBAELA,WBBAELA,51)
static A68_121   YBBAELA = {"Library has been cleared"}; 
A_GISVEC(A68_VC ,ZBBAELA,YBBAELA,24)
static A68_126   BCBAELA = {"The minimum increase is * bytes"}; 
A_GISVEC(A68_VC ,CCBAELA,BCBAELA,31)
static A68_138   DCBAELA = {"This would make the library too large"}; 
A_GISVEC(A68_VC ,ECBAELA,DCBAELA,37)
static A68_139   FCBAELA = {"The library has been increased by * bytes"}; 
A_GISVEC(A68_VC ,GCBAELA,FCBAELA,41)
static A68_136   HCBAELA = {"Gone back to version *"}; 
A_GISVEC(A68_VC ,ICBAELA,HCBAELA,22)
static A68_140   JCBAELA = {"Nothing has changed since version *"}; 
A_GISVEC(A68_VC ,KCBAELA,JCBAELA,35)
static A68_141   LCBAELA = {"There are no changes to save"}; 
A_GISVEC(A68_VC ,MCBAELA,LCBAELA,28)
static A68_142   NCBAELA = {"File \"*\" created as a new ELLA library"}; 
A_GISVEC(A68_VC ,OCBAELA,NCBAELA,38)
static A68_143   QCBAELA = {"File \"*\" already exists - you should supply a new name"}; 
A_GISVEC(A68_VC ,RCBAELA,QCBAELA,54)
static A68_141   SCBAELA = {"New library file, *, created"}; 
A_GISVEC(A68_VC ,TCBAELA,SCBAELA,28)
static A68_144   UCBAELA = {"The old library file, *, may now be deleted"}; 
A_GISVEC(A68_VC ,VCBAELA,UCBAELA,43)
static A68_136   WCBAELA = {"You need to reimport  "}; 
A_GISVEC(A68_VC ,XCBAELA,WCBAELA,22)
static A68_128   YCBAELA = {"You need to reimport into the imports region /*:"}; 
A_GISVEC(A68_VC ,ZCBAELA,YCBAELA,48)
static A68_145   ADBAELA = {"* *"}; 
A_GISVEC(A68_VC ,BDBAELA,ADBAELA,3)
static A68_130   CDBAELA = {"Context * is imported by:"}; 
A_GISVEC(A68_VC ,DDBAELA,CDBAELA,25)
static A68_146   EDBAELA = {"* * is imported by:"}; 
A_GISVEC(A68_VC ,FDBAELA,EDBAELA,19)
static A68_147   GDBAELA = {"    *"}; 
A_GISVEC(A68_VC ,HDBAELA,GDBAELA,5)
static A68_145   IDBAELA = {"* *"}; 
A_GISVEC(A68_VC ,JDBAELA,IDBAELA,3)
static A68_134   KDBAELA = {"You need to recompile  "}; 
A_GISVEC(A68_VC ,LDBAELA,KDBAELA,23)
static A68_145   MDBAELA = {"* *"}; 
A_GISVEC(A68_VC ,NDBAELA,MDBAELA,3)
static A68_135   ODBAELA = {"      * * uses old specification of * *"}; 
A_GISVEC(A68_VC ,PDBAELA,ODBAELA,39)
static A68_148   QDBAELA = {"You can't import * from context * into context * since this would make the closure circular"}; 
A_GISVEC(A68_VC ,RDBAELA,QDBAELA,91)
static A68_149   SDBAELA = {"You can't import * from * into the imports region /* of the same context"}; 
A_GISVEC(A68_VC ,TDBAELA,SDBAELA,72)
static A68_150   UDBAELA = {"      from *"}; 
A_GISVEC(A68_VC ,VDBAELA,UDBAELA,12)
static A68_151   WDBAELA = {"  written *"}; 
A_GISVEC(A68_VC ,XDBAELA,WDBAELA,11)
static A68_132   YDBAELA = {"   * *(*)"}; 
A_GISVEC(A68_VC ,ZDBAELA,YDBAELA,9)
static A68_152   AEBAELA = {"      uses:    "}; 
A_GISVEC(A68_VC ,BEBAELA,AEBAELA,15)
static A68_145   CEBAELA = {"* *"}; 
A_GISVEC(A68_VC ,DEBAELA,CEBAELA,3)
static A68_153   EEBAELA = {"(*, old specication)"}; 
A_GISVEC(A68_VC ,FEBAELA,EEBAELA,20)
static A68_152   GEBAELA = {"      used by: "}; 
A_GISVEC(A68_VC ,HEBAELA,GEBAELA,15)
static A68_145   IEBAELA = {"* *"}; 
A_GISVEC(A68_VC ,JEBAELA,IEBAELA,3)
static A68_124   KEBAELA = {"The following contain a circularity:"}; 
A_GISVEC(A68_VC ,LEBAELA,KEBAELA,36)
static A68_154   MEBAELA = {"Failed to compile"}; 
A_GISVEC(A68_VC ,NEBAELA,MEBAELA,17)
static A68_133   OEBAELA = {"Current context has been updated"}; 
A_GISVEC(A68_VC ,PEBAELA,OEBAELA,32)
static A68_141   QEBAELA = {"Compilation has been ignored"}; 
A_GISVEC(A68_VC ,REBAELA,QEBAELA,28)
static A68_133   SEBAELA = {"Current context has been updated"}; 
A_GISVEC(A68_VC ,TEBAELA,SEBAELA,32)
static A68_136   UEBAELA = {"* is already a context"}; 
A_GISVEC(A68_VC ,VEBAELA,UEBAELA,22)
static A68_125   WEBAELA = {"* is now a context"}; 
A_GISVEC(A68_VC ,XEBAELA,WEBAELA,18)
static A68_137   YEBAELA = {"You can't clear context * since it contains exports"}; 
A_GISVEC(A68_VC ,ZEBAELA,YEBAELA,51)
static A68_123   AFBAELA = {"Context * has been cleared"}; 
A_GISVEC(A68_VC ,BFBAELA,AFBAELA,26)
static A68_155   CFBAELA = {"* is a special context which can't be erased"}; 
A_GISVEC(A68_VC ,DFBAELA,CFBAELA,44)
static A68_144   EFBAELA = {"You can't erase * since it contains exports"}; 
A_GISVEC(A68_VC ,FFBAELA,EFBAELA,43)
static A68_121   GFBAELA = {"* is no longer a context"}; 
A_GISVEC(A68_VC ,HFBAELA,GFBAELA,24)
static A68_156   IFBAELA = {"* doesn't contain any imports"}; 
A_GISVEC(A68_VC ,JFBAELA,IFBAELA,29)
static A68_157   KFBAELA = {"In context *:"}; 
A_GISVEC(A68_VC ,LFBAELA,KFBAELA,13)
static A68_130   MFBAELA = {"* * is no longer imported"}; 
A_GISVEC(A68_VC ,NFBAELA,MFBAELA,25)
static A68_158   OFBAELA = {"All imports of * have been cleared"}; 
A_GISVEC(A68_VC ,PFBAELA,OFBAELA,34)
static A68_139   QFBAELA = {"You must have at least one imports region"}; 
A_GISVEC(A68_VC ,RFBAELA,QFBAELA,41)
static A68_159   SFBAELA = {"You can't erase * since it is still needed"}; 
A_GISVEC(A68_VC ,TFBAELA,SFBAELA,42)
static A68_160   UFBAELA = {"/* is no longer an imports region"}; 
A_GISVEC(A68_VC ,VFBAELA,UFBAELA,33)
static A68_155   WFBAELA = {"/* is already an imports region in context *"}; 
A_GISVEC(A68_VC ,XFBAELA,WFBAELA,44)
static A68_131   YFBAELA = {"/* is now an imports region"}; 
A_GISVEC(A68_VC ,ZFBAELA,YFBAELA,27)
static A68_131   AGBAELA = {"You can't convert context *"}; 
A_GISVEC(A68_VC ,BGBAELA,AGBAELA,27)
static A68_115   CGBAELA = {"Context * is now a compound context with imports region /*"}; 
A_GISVEC(A68_VC ,DGBAELA,CGBAELA,58)
static A68_159   EGBAELA = {"Context * has more than one imports region"}; 
A_GISVEC(A68_VC ,FGBAELA,EGBAELA,42)
static A68_160   GGBAELA = {"Context * is now a simple context"}; 
A_GISVEC(A68_VC ,HGBAELA,GGBAELA,33)
static A68_136   IGBAELA = {"* hasn't been imported"}; 
A_GISVEC(A68_VC ,JGBAELA,IGBAELA,22)
static A68_134   KGBAELA = {"* is no longer imported"}; 
A_GISVEC(A68_VC ,LGBAELA,KGBAELA,23)
static A68_152   MGBAELA = {"* * is exported"}; 
A_GISVEC(A68_VC ,NGBAELA,MGBAELA,15)
static A68_146   OGBAELA = {"* * is still needed"}; 
A_GISVEC(A68_VC ,PGBAELA,OGBAELA,19)
static A68_146   QGBAELA = {"* * has been erased"}; 
A_GISVEC(A68_VC ,RGBAELA,QGBAELA,19)
static A68_146   SGBAELA = {"* * isn't an export"}; 
A_GISVEC(A68_VC ,TGBAELA,SGBAELA,19)
static A68_130   UGBAELA = {"* * is no longer exported"}; 
A_GISVEC(A68_VC ,VGBAELA,UGBAELA,25)
static A68_146   WGBAELA = {"* * is still needed"}; 
A_GISVEC(A68_VC ,XGBAELA,WGBAELA,19)
static A68_134   YGBAELA = {"* * is already exported"}; 
A_GISVEC(A68_VC ,ZGBAELA,YGBAELA,23)
static A68_161   AHBAELA = {"* can't be exported as it is *"}; 
A_GISVEC(A68_VC ,BHBAELA,AHBAELA,30)
static A68_146   CHBAELA = {"* * is now exported"}; 
A_GISVEC(A68_VC ,DHBAELA,CHBAELA,19)
static A68_157   EHBAELA = {"In context *:"}; 
A_GISVEC(A68_VC ,FHBAELA,EHBAELA,13)
static A68_131   GHBAELA = {"   * * was already exported"}; 
A_GISVEC(A68_VC ,HHBAELA,GHBAELA,27)
static A68_121   IHBAELA = {"   * * has been exported"}; 
A_GISVEC(A68_VC ,JHBAELA,IHBAELA,24)
static A68_160   KHBAELA = {"There is nothing*to export from *"}; 
A_GISVEC(A68_VC ,LHBAELA,KHBAELA,33)
static A68_156   MHBAELA = {"* doesn't contain any exports"}; 
A_GISVEC(A68_VC ,NHBAELA,MHBAELA,29)
static A68_157   OHBAELA = {"In context *:"}; 
A_GISVEC(A68_VC ,PHBAELA,OHBAELA,13)
static A68_130   QHBAELA = {"* * is no longer exported"}; 
A_GISVEC(A68_VC ,RHBAELA,QHBAELA,25)
static A68_158   SHBAELA = {"All exports of * have been cleared"}; 
A_GISVEC(A68_VC ,THBAELA,SHBAELA,34)
static A68_162   UHBAELA = {"Context * can't be assembled - try \"checkclosure\""}; 
A_GISVEC(A68_VC ,VHBAELA,UHBAELA,49)
static A68_130   WHBAELA = {"      * * needs importing"}; 
A_GISVEC(A68_VC ,XHBAELA,WHBAELA,25)
static A68_136   YHBAELA = {"Closure of * contains:"}; 
A_GISVEC(A68_VC ,ZHBAELA,YHBAELA,22)
static A68_150   AIBAELA = {"   context *"}; 
A_GISVEC(A68_VC ,BIBAELA,AIBAELA,12)
static A68_151   CIBAELA = {"      empty"}; 
A_GISVEC(A68_VC ,DIBAELA,CIBAELA,11)
static A68_163   EIBAELA = {"      ok"}; 
A_GISVEC(A68_VC ,FIBAELA,EIBAELA,8)
static A68_129   GIBAELA = {"End of closure"}; 
A_GISVEC(A68_VC ,HIBAELA,GIBAELA,14)
static A68_98  JIBAELA_lib_facility;
static A68_95 * RIBAELA_message;

A_STATIC A68_VOID  SZAAELA_generator(A68_BOOL  RZAAELA_anonymous, A68_94  *ReturnedValue);

A68_VOID  LIBAELA_lib_msg(A68_INT  Number, A68_92  *ReturnedValue);

A68_BOOL  PIBAELA_is_lib_msg(A68_92  Msgno);

A_STATIC A68_VOID  SZAAELA_generator(A68_BOOL  RZAAELA_anonymous, A68_94  *ReturnedValue)
{ 
A68_94  TZAAELA;  /* clause result */
A68_94  UZAAELA;  /* OPERATORS - dynamic generator */
{ 
UZAAELA.upb = NZAAELA_max_lib_messages ;
( RZAAELA_anonymous? A_VLOC(A68_95 ,UZAAELA): A_VHEAP(A68_95 ,UZAAELA) );
TZAAELA = UZAAELA;
} 
*ReturnedValue = (TZAAELA);
return;
} 
#undef NL

A68_VOID  LIBAELA_lib_msg(A68_INT  Number, A68_92  *ReturnedValue)
{ 
A68_92  MIBAELA;  /* clause result */
A68_92  NIBAELA;  /* avoid structure result */
A_PROC_ENTRY(lib_msg);
HMAAOSI_make_msgno( Number, JIBAELA_lib_facility, &NIBAELA );
MIBAELA = NIBAELA;
A_PROC_EXIT(lib_msg);
*ReturnedValue = (MIBAELA);
return;
} 
#undef NL

A68_BOOL  PIBAELA_is_lib_msg(A68_92  Msgno)
{ 
A68_BOOL  QIBAELA;  /* clause result */
A_PROC_ENTRY(is_lib_msg);
QIBAELA = INAAOSI_is_facility_msg(Msgno, JIBAELA_lib_facility);
A_PROC_EXIT(is_lib_msg);
return( QIBAELA );
} 
#undef NL
 /* line 1: */
 /* line 4: */
void IZAAELA(void)   /* initialise DECS libmessages */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/libmessages.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_98  OZAAELA;  /* collateral clause result */
A68_94  VZAAELA;  /* avoid structure result */
A68_BOOL * WZAAELA;  /* YIELD */
A68_164  XZAAELA;  /* collateral clause result */
A68_VC  ACBAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  PCBAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_99  IIBAELA;  /* OPERATORS - istruct -> vector */
A68_94  SIBAELA;  /* forall yield */
A68_INT  TIBAELA;  /* forall loop counter */
A68_95  UIBAELA;  /* collateral clause result */
A68_VC  VIBAELA;  /* OPERATORS - nil -> mode */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ella/assoc/./a68files/libmessages.a68";
A_config.translation_time = "Tue Apr  4 10:32:34 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "HZAAELA (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:32:34 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS libmessages);
UEAALIB_a68config(LGAALIB_configinfo, MZAAELA);
 /* line 57: */
 /* line 59: */
 /* line 60: */
OZAAELA.Name = QZAAELA;
 /* line 61: */
SZAAELA_generator( A68_TRUE, &VZAAELA );
OZAAELA.Messages = VZAAELA;
 /* line 62: */
WZAAELA = A_LOC(A68_BOOL ) ;
(*WZAAELA) = A68_FALSE ;
OZAAELA.Initialised = WZAAELA;
 /* line 64: */
XZAAELA.data[0].Number = 1;
XZAAELA.data[0].Class = BJAAOSI_outpart_class;
 /* line 65: */
XZAAELA.data[0].Text = ZZAAELA;
XZAAELA.data[1].Number = 2;
XZAAELA.data[1].Class = ZIAAOSI_output_class;
 /* line 70: */
XZAAELA.data[1].Text = BABAELA;
XZAAELA.data[2].Number = 4;
XZAAELA.data[2].Class = VIAAOSI_user_class;
 /* line 71: */
XZAAELA.data[2].Text = DABAELA;
XZAAELA.data[3].Number = 5;
XZAAELA.data[3].Class = VIAAOSI_user_class;
 /* line 72: */
XZAAELA.data[3].Text = FABAELA;
XZAAELA.data[4].Number = 6;
 /* line 73: */
XZAAELA.data[4].Class = WIAAOSI_error_class;
 /* line 74: */
XZAAELA.data[4].Text = HABAELA;
XZAAELA.data[5].Number = 7;
XZAAELA.data[5].Class = VIAAOSI_user_class;
 /* line 75: */
XZAAELA.data[5].Text = JABAELA;
XZAAELA.data[6].Number = 8;
XZAAELA.data[6].Class = ZIAAOSI_output_class;
 /* line 76: */
XZAAELA.data[6].Text = LABAELA;
XZAAELA.data[7].Number = 9;
XZAAELA.data[7].Class = VIAAOSI_user_class;
 /* line 82: */
XZAAELA.data[7].Text = NABAELA;
XZAAELA.data[8].Number = 14;
XZAAELA.data[8].Class = VIAAOSI_user_class;
 /* line 83: */
XZAAELA.data[8].Text = PABAELA;
XZAAELA.data[9].Number = 15;
XZAAELA.data[9].Class = VIAAOSI_user_class;
 /* line 84: */
XZAAELA.data[9].Text = RABAELA;
XZAAELA.data[10].Number = 16;
XZAAELA.data[10].Class = VIAAOSI_user_class;
 /* line 85: */
XZAAELA.data[10].Text = TABAELA;
XZAAELA.data[11].Number = 17;
XZAAELA.data[11].Class = VIAAOSI_user_class;
 /* line 86: */
XZAAELA.data[11].Text = VABAELA;
XZAAELA.data[12].Number = 18;
XZAAELA.data[12].Class = VIAAOSI_user_class;
 /* line 87: */
XZAAELA.data[12].Text = XABAELA;
XZAAELA.data[13].Number = 19;
XZAAELA.data[13].Class = VIAAOSI_user_class;
 /* line 88: */
XZAAELA.data[13].Text = ZABAELA;
XZAAELA.data[14].Number = 20;
XZAAELA.data[14].Class = VIAAOSI_user_class;
 /* line 89: */
XZAAELA.data[14].Text = BBBAELA;
XZAAELA.data[15].Number = 21;
XZAAELA.data[15].Class = VIAAOSI_user_class;
 /* line 93: */
XZAAELA.data[15].Text = DBBAELA;
XZAAELA.data[16].Number = 23;
XZAAELA.data[16].Class = EJAAOSI_diag2_class;
 /* line 94: */
XZAAELA.data[16].Text = FBBAELA;
XZAAELA.data[17].Number = 24;
XZAAELA.data[17].Class = EJAAOSI_diag2_class;
 /* line 95: */
XZAAELA.data[17].Text = HBBAELA;
XZAAELA.data[18].Number = 25;
XZAAELA.data[18].Class = EJAAOSI_diag2_class;
 /* line 96: */
XZAAELA.data[18].Text = JBBAELA;
XZAAELA.data[19].Number = 28;
XZAAELA.data[19].Class = VIAAOSI_user_class;
 /* line 97: */
XZAAELA.data[19].Text = LBBAELA;
XZAAELA.data[20].Number = 29;
XZAAELA.data[20].Class = ZIAAOSI_output_class;
 /* line 98: */
XZAAELA.data[20].Text = NBBAELA;
XZAAELA.data[21].Number = 30;
XZAAELA.data[21].Class = ZIAAOSI_output_class;
 /* line 103: */
XZAAELA.data[21].Text = PBBAELA;
XZAAELA.data[22].Number = 31;
XZAAELA.data[22].Class = VIAAOSI_user_class;
 /* line 104: */
XZAAELA.data[22].Text = RBBAELA;
XZAAELA.data[23].Number = 32;
XZAAELA.data[23].Class = UIAAOSI_fatal_class;
 /* line 105: */
XZAAELA.data[23].Text = TBBAELA;
XZAAELA.data[24].Number = 33;
XZAAELA.data[24].Class = UIAAOSI_fatal_class;
 /* line 106: */
XZAAELA.data[24].Text = VBBAELA;
XZAAELA.data[25].Number = 34;
XZAAELA.data[25].Class = EJAAOSI_diag2_class;
 /* line 109: */
XZAAELA.data[25].Text = XBBAELA;
XZAAELA.data[26].Number = 35;
XZAAELA.data[26].Class = ZIAAOSI_output_class;
 /* line 112: */
XZAAELA.data[26].Text = ZBBAELA;
XZAAELA.data[27].Number = 36;
XZAAELA.data[27].Class = VIAAOSI_user_class;
 /* line 113: */
XZAAELA.data[27].Text = A_HVEC(ACBAELA,'*',A68_CHAR );
XZAAELA.data[28].Number = 37;
XZAAELA.data[28].Class = VIAAOSI_user_class;
 /* line 114: */
XZAAELA.data[28].Text = CCBAELA;
XZAAELA.data[29].Number = 38;
XZAAELA.data[29].Class = VIAAOSI_user_class;
 /* line 115: */
XZAAELA.data[29].Text = ECBAELA;
XZAAELA.data[30].Number = 39;
XZAAELA.data[30].Class = ZIAAOSI_output_class;
 /* line 118: */
XZAAELA.data[30].Text = GCBAELA;
XZAAELA.data[31].Number = 40;
XZAAELA.data[31].Class = ZIAAOSI_output_class;
 /* line 119: */
XZAAELA.data[31].Text = ICBAELA;
XZAAELA.data[32].Number = 41;
XZAAELA.data[32].Class = VIAAOSI_user_class;
 /* line 122: */
XZAAELA.data[32].Text = KCBAELA;
XZAAELA.data[33].Number = 42;
XZAAELA.data[33].Class = VIAAOSI_user_class;
 /* line 125: */
XZAAELA.data[33].Text = MCBAELA;
XZAAELA.data[34].Number = 43;
XZAAELA.data[34].Class = YIAAOSI_log_class;
 /* line 126: */
XZAAELA.data[34].Text = OCBAELA;
XZAAELA.data[35].Number = 44;
XZAAELA.data[35].Class = UIAAOSI_fatal_class;
 /* line 129: */
XZAAELA.data[35].Text = A_HVEC(PCBAELA,'*',A68_CHAR );
XZAAELA.data[36].Number = 45;
 /* line 130: */
XZAAELA.data[36].Class = VIAAOSI_user_class;
 /* line 131: */
XZAAELA.data[36].Text = RCBAELA;
XZAAELA.data[37].Number = 46;
XZAAELA.data[37].Class = YIAAOSI_log_class;
 /* line 132: */
XZAAELA.data[37].Text = TCBAELA;
XZAAELA.data[38].Number = 47;
XZAAELA.data[38].Class = YIAAOSI_log_class;
 /* line 138: */
XZAAELA.data[38].Text = VCBAELA;
XZAAELA.data[39].Number = 50;
XZAAELA.data[39].Class = BJAAOSI_outpart_class;
 /* line 139: */
XZAAELA.data[39].Text = XCBAELA;
XZAAELA.data[40].Number = 51;
XZAAELA.data[40].Class = ZIAAOSI_output_class;
 /* line 140: */
XZAAELA.data[40].Text = ZCBAELA;
XZAAELA.data[41].Number = 52;
XZAAELA.data[41].Class = BJAAOSI_outpart_class;
 /* line 143: */
XZAAELA.data[41].Text = BDBAELA;
XZAAELA.data[42].Number = 53;
XZAAELA.data[42].Class = ZIAAOSI_output_class;
 /* line 144: */
XZAAELA.data[42].Text = DDBAELA;
XZAAELA.data[43].Number = 54;
XZAAELA.data[43].Class = ZIAAOSI_output_class;
 /* line 145: */
XZAAELA.data[43].Text = FDBAELA;
XZAAELA.data[44].Number = 55;
XZAAELA.data[44].Class = BJAAOSI_outpart_class;
 /* line 146: */
XZAAELA.data[44].Text = HDBAELA;
XZAAELA.data[45].Number = 56;
XZAAELA.data[45].Class = EJAAOSI_diag2_class;
 /* line 149: */
XZAAELA.data[45].Text = JDBAELA;
XZAAELA.data[46].Number = 57;
XZAAELA.data[46].Class = BJAAOSI_outpart_class;
 /* line 150: */
XZAAELA.data[46].Text = LDBAELA;
XZAAELA.data[47].Number = 58;
XZAAELA.data[47].Class = BJAAOSI_outpart_class;
 /* line 151: */
XZAAELA.data[47].Text = NDBAELA;
XZAAELA.data[48].Number = 59;
XZAAELA.data[48].Class = ZIAAOSI_output_class;
 /* line 154: */
XZAAELA.data[48].Text = PDBAELA;
XZAAELA.data[49].Number = 60;
 /* line 155: */
XZAAELA.data[49].Class = ZIAAOSI_output_class;
 /* line 156: */
XZAAELA.data[49].Text = RDBAELA;
XZAAELA.data[50].Number = 61;
 /* line 157: */
XZAAELA.data[50].Class = ZIAAOSI_output_class;
 /* line 160: */
XZAAELA.data[50].Text = TDBAELA;
XZAAELA.data[51].Number = 62;
XZAAELA.data[51].Class = BJAAOSI_outpart_class;
 /* line 161: */
XZAAELA.data[51].Text = VDBAELA;
XZAAELA.data[52].Number = 63;
XZAAELA.data[52].Class = ZIAAOSI_output_class;
 /* line 164: */
XZAAELA.data[52].Text = XDBAELA;
XZAAELA.data[53].Number = 64;
XZAAELA.data[53].Class = ZIAAOSI_output_class;
 /* line 165: */
XZAAELA.data[53].Text = ZDBAELA;
XZAAELA.data[54].Number = 65;
XZAAELA.data[54].Class = BJAAOSI_outpart_class;
 /* line 166: */
XZAAELA.data[54].Text = BEBAELA;
XZAAELA.data[55].Number = 66;
XZAAELA.data[55].Class = BJAAOSI_outpart_class;
 /* line 167: */
XZAAELA.data[55].Text = DEBAELA;
XZAAELA.data[56].Number = 67;
XZAAELA.data[56].Class = BJAAOSI_outpart_class;
 /* line 168: */
XZAAELA.data[56].Text = FEBAELA;
XZAAELA.data[57].Number = 68;
XZAAELA.data[57].Class = BJAAOSI_outpart_class;
 /* line 169: */
XZAAELA.data[57].Text = HEBAELA;
XZAAELA.data[58].Number = 69;
XZAAELA.data[58].Class = BJAAOSI_outpart_class;
 /* line 172: */
XZAAELA.data[58].Text = JEBAELA;
XZAAELA.data[59].Number = 70;
XZAAELA.data[59].Class = ZIAAOSI_output_class;
 /* line 175: */
XZAAELA.data[59].Text = LEBAELA;
XZAAELA.data[60].Number = 71;
XZAAELA.data[60].Class = VIAAOSI_user_class;
 /* line 176: */
XZAAELA.data[60].Text = NEBAELA;
XZAAELA.data[61].Number = 72;
XZAAELA.data[61].Class = ZIAAOSI_output_class;
 /* line 177: */
XZAAELA.data[61].Text = PEBAELA;
XZAAELA.data[62].Number = 73;
XZAAELA.data[62].Class = ZIAAOSI_output_class;
 /* line 178: */
XZAAELA.data[62].Text = REBAELA;
XZAAELA.data[63].Number = 74;
XZAAELA.data[63].Class = ZIAAOSI_output_class;
 /* line 184: */
XZAAELA.data[63].Text = TEBAELA;
XZAAELA.data[64].Number = 79;
XZAAELA.data[64].Class = VIAAOSI_user_class;
 /* line 185: */
XZAAELA.data[64].Text = VEBAELA;
XZAAELA.data[65].Number = 80;
XZAAELA.data[65].Class = ZIAAOSI_output_class;
 /* line 188: */
XZAAELA.data[65].Text = XEBAELA;
XZAAELA.data[66].Number = 81;
XZAAELA.data[66].Class = VIAAOSI_user_class;
 /* line 189: */
XZAAELA.data[66].Text = ZEBAELA;
XZAAELA.data[67].Number = 82;
XZAAELA.data[67].Class = ZIAAOSI_output_class;
 /* line 192: */
XZAAELA.data[67].Text = BFBAELA;
XZAAELA.data[68].Number = 83;
XZAAELA.data[68].Class = VIAAOSI_user_class;
 /* line 193: */
XZAAELA.data[68].Text = DFBAELA;
XZAAELA.data[69].Number = 84;
XZAAELA.data[69].Class = VIAAOSI_user_class;
 /* line 194: */
XZAAELA.data[69].Text = FFBAELA;
XZAAELA.data[70].Number = 85;
XZAAELA.data[70].Class = ZIAAOSI_output_class;
 /* line 200: */
XZAAELA.data[70].Text = HFBAELA;
XZAAELA.data[71].Number = 90;
XZAAELA.data[71].Class = ZIAAOSI_output_class;
 /* line 201: */
XZAAELA.data[71].Text = JFBAELA;
XZAAELA.data[72].Number = 91;
XZAAELA.data[72].Class = ZIAAOSI_output_class;
 /* line 202: */
XZAAELA.data[72].Text = LFBAELA;
XZAAELA.data[73].Number = 92;
XZAAELA.data[73].Class = ZIAAOSI_output_class;
 /* line 203: */
XZAAELA.data[73].Text = NFBAELA;
XZAAELA.data[74].Number = 93;
XZAAELA.data[74].Class = ZIAAOSI_output_class;
 /* line 206: */
XZAAELA.data[74].Text = PFBAELA;
XZAAELA.data[75].Number = 94;
XZAAELA.data[75].Class = VIAAOSI_user_class;
 /* line 207: */
XZAAELA.data[75].Text = RFBAELA;
XZAAELA.data[76].Number = 95;
XZAAELA.data[76].Class = VIAAOSI_user_class;
 /* line 208: */
XZAAELA.data[76].Text = TFBAELA;
XZAAELA.data[77].Number = 96;
XZAAELA.data[77].Class = ZIAAOSI_output_class;
 /* line 211: */
XZAAELA.data[77].Text = VFBAELA;
XZAAELA.data[78].Number = 97;
XZAAELA.data[78].Class = VIAAOSI_user_class;
 /* line 212: */
XZAAELA.data[78].Text = XFBAELA;
XZAAELA.data[79].Number = 98;
XZAAELA.data[79].Class = ZIAAOSI_output_class;
 /* line 215: */
XZAAELA.data[79].Text = ZFBAELA;
XZAAELA.data[80].Number = 99;
XZAAELA.data[80].Class = VIAAOSI_user_class;
 /* line 216: */
XZAAELA.data[80].Text = BGBAELA;
XZAAELA.data[81].Number = 100;
 /* line 217: */
XZAAELA.data[81].Class = ZIAAOSI_output_class;
 /* line 220: */
XZAAELA.data[81].Text = DGBAELA;
XZAAELA.data[82].Number = 101;
XZAAELA.data[82].Class = VIAAOSI_user_class;
 /* line 221: */
XZAAELA.data[82].Text = FGBAELA;
XZAAELA.data[83].Number = 102;
XZAAELA.data[83].Class = ZIAAOSI_output_class;
 /* line 227: */
XZAAELA.data[83].Text = HGBAELA;
XZAAELA.data[84].Number = 106;
XZAAELA.data[84].Class = ZIAAOSI_output_class;
 /* line 228: */
XZAAELA.data[84].Text = JGBAELA;
XZAAELA.data[85].Number = 107;
XZAAELA.data[85].Class = ZIAAOSI_output_class;
 /* line 231: */
XZAAELA.data[85].Text = LGBAELA;
XZAAELA.data[86].Number = 108;
XZAAELA.data[86].Class = VIAAOSI_user_class;
 /* line 232: */
XZAAELA.data[86].Text = NGBAELA;
XZAAELA.data[87].Number = 109;
XZAAELA.data[87].Class = VIAAOSI_user_class;
 /* line 233: */
XZAAELA.data[87].Text = PGBAELA;
XZAAELA.data[88].Number = 110;
XZAAELA.data[88].Class = ZIAAOSI_output_class;
 /* line 236: */
XZAAELA.data[88].Text = RGBAELA;
XZAAELA.data[89].Number = 111;
XZAAELA.data[89].Class = ZIAAOSI_output_class;
 /* line 237: */
XZAAELA.data[89].Text = TGBAELA;
XZAAELA.data[90].Number = 112;
XZAAELA.data[90].Class = ZIAAOSI_output_class;
 /* line 238: */
XZAAELA.data[90].Text = VGBAELA;
XZAAELA.data[91].Number = 113;
XZAAELA.data[91].Class = EJAAOSI_diag2_class;
 /* line 241: */
XZAAELA.data[91].Text = XGBAELA;
XZAAELA.data[92].Number = 115;
XZAAELA.data[92].Class = ZIAAOSI_output_class;
 /* line 242: */
XZAAELA.data[92].Text = ZGBAELA;
XZAAELA.data[93].Number = 116;
XZAAELA.data[93].Class = VIAAOSI_user_class;
 /* line 243: */
XZAAELA.data[93].Text = BHBAELA;
XZAAELA.data[94].Number = 117;
XZAAELA.data[94].Class = ZIAAOSI_output_class;
 /* line 246: */
XZAAELA.data[94].Text = DHBAELA;
XZAAELA.data[95].Number = 118;
XZAAELA.data[95].Class = ZIAAOSI_output_class;
 /* line 247: */
XZAAELA.data[95].Text = FHBAELA;
XZAAELA.data[96].Number = 119;
XZAAELA.data[96].Class = ZIAAOSI_output_class;
 /* line 248: */
XZAAELA.data[96].Text = HHBAELA;
XZAAELA.data[97].Number = 120;
XZAAELA.data[97].Class = ZIAAOSI_output_class;
 /* line 249: */
XZAAELA.data[97].Text = JHBAELA;
XZAAELA.data[98].Number = 121;
XZAAELA.data[98].Class = ZIAAOSI_output_class;
 /* line 252: */
XZAAELA.data[98].Text = LHBAELA;
XZAAELA.data[99].Number = 122;
XZAAELA.data[99].Class = ZIAAOSI_output_class;
 /* line 253: */
XZAAELA.data[99].Text = NHBAELA;
XZAAELA.data[100].Number = 123;
XZAAELA.data[100].Class = ZIAAOSI_output_class;
 /* line 254: */
XZAAELA.data[100].Text = PHBAELA;
XZAAELA.data[101].Number = 124;
XZAAELA.data[101].Class = ZIAAOSI_output_class;
 /* line 255: */
XZAAELA.data[101].Text = RHBAELA;
XZAAELA.data[102].Number = 125;
XZAAELA.data[102].Class = EJAAOSI_diag2_class;
 /* line 261: */
XZAAELA.data[102].Text = THBAELA;
XZAAELA.data[103].Number = 128;
XZAAELA.data[103].Class = VIAAOSI_user_class;
 /* line 264: */
XZAAELA.data[103].Text = VHBAELA;
XZAAELA.data[104].Number = 129;
XZAAELA.data[104].Class = ZIAAOSI_output_class;
 /* line 265: */
XZAAELA.data[104].Text = XHBAELA;
XZAAELA.data[105].Number = 130;
XZAAELA.data[105].Class = ZIAAOSI_output_class;
 /* line 266: */
XZAAELA.data[105].Text = ZHBAELA;
XZAAELA.data[106].Number = 131;
XZAAELA.data[106].Class = ZIAAOSI_output_class;
 /* line 267: */
XZAAELA.data[106].Text = BIBAELA;
XZAAELA.data[107].Number = 132;
XZAAELA.data[107].Class = ZIAAOSI_output_class;
 /* line 268: */
XZAAELA.data[107].Text = DIBAELA;
XZAAELA.data[108].Number = 133;
XZAAELA.data[108].Class = ZIAAOSI_output_class;
 /* line 269: */
XZAAELA.data[108].Text = FIBAELA;
XZAAELA.data[109].Number = 134;
XZAAELA.data[109].Class = ZIAAOSI_output_class;
 /* line 270: */
XZAAELA.data[109].Text = HIBAELA;
OZAAELA.Setup = A_HISVEC(IIBAELA,XZAAELA,110,A68_100 );
JIBAELA_lib_facility = OZAAELA;
 /* line 272: */
 /* line 274: */
 /* line 276: */
 /* line 277: */
SIBAELA = JIBAELA_lib_facility.Messages ;
TIBAELA = SIBAELA.upb -1;
RIBAELA_message = SIBAELA.data;
for (;TIBAELA-- >= 0;
(RIBAELA_message++
) )
{
UIBAELA.Msgno.Number = 0;
UIBAELA.Msgno.Facility = (A68_93 *)A68_NIL;
UIBAELA.Msgno.Class = 0X0U;
UIBAELA.Text = A_VVAC(VIBAELA);
(*RIBAELA_message) = UIBAELA;
}
 /* line 279: */
 /* line 280: */
A_PROC_EXIT(DECS libmessages);
} 
#undef NL
/* end of translation of ./a68files/libmessages.a68 */
