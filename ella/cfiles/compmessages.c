
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
/* UNAME:BFAAELA */
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
A_ISTRUCT(A68_CHAR ,59,A68t115);
typedef struct A68t115  A68_115 ;    /* STRUCT 59 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t116);
typedef struct A68t116  A68_116 ;    /* STRUCT 8 CHAR */

A_PROCEDURE(A68_VOID ,A68t117,(A68_BOOL ,struct A68t94 *),(A68_BOOL ,struct A68t94 *,void *));
typedef struct A68t117  A68_117 ;    /* PROC(BOOL) MODE94 */
A_ISTRUCT(A68_CHAR ,24,A68t118);
typedef struct A68t118  A68_118 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(A68_CHAR ,33,A68t119);
typedef struct A68t119  A68_119 ;    /* STRUCT 33 CHAR */
A_ISTRUCT(A68_CHAR ,35,A68t120);
typedef struct A68t120  A68_120 ;    /* STRUCT 35 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t121);
typedef struct A68t121  A68_121 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,17,A68t122);
typedef struct A68t122  A68_122 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t123);
typedef struct A68t123  A68_123 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,57,A68t124);
typedef struct A68t124  A68_124 ;    /* STRUCT 57 CHAR */
A_ISTRUCT(A68_CHAR ,42,A68t125);
typedef struct A68t125  A68_125 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t126);
typedef struct A68t126  A68_126 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(A68_CHAR ,56,A68t127);
typedef struct A68t127  A68_127 ;    /* STRUCT 56 CHAR */
A_ISTRUCT(A68_CHAR ,37,A68t128);
typedef struct A68t128  A68_128 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(A68_CHAR ,26,A68t129);
typedef struct A68t129  A68_129 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t130);
typedef struct A68t130  A68_130 ;    /* STRUCT 30 CHAR */
A_ISTRUCT(A68_CHAR ,49,A68t131);
typedef struct A68t131  A68_131 ;    /* STRUCT 49 CHAR */
A_ISTRUCT(A68_CHAR ,45,A68t132);
typedef struct A68t132  A68_132 ;    /* STRUCT 45 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t133);
typedef struct A68t133  A68_133 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,25,A68t134);
typedef struct A68t134  A68_134 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(A68_CHAR ,41,A68t135);
typedef struct A68t135  A68_135 ;    /* STRUCT 41 CHAR */
A_ISTRUCT(A68_CHAR ,43,A68t136);
typedef struct A68t136  A68_136 ;    /* STRUCT 43 CHAR */
A_ISTRUCT(A68_CHAR ,27,A68t137);
typedef struct A68t137  A68_137 ;    /* STRUCT 27 CHAR */
A_ISTRUCT(A68_CHAR ,34,A68t138);
typedef struct A68t138  A68_138 ;    /* STRUCT 34 CHAR */
A_ISTRUCT(A68_CHAR ,48,A68t139);
typedef struct A68t139  A68_139 ;    /* STRUCT 48 CHAR */
A_ISTRUCT(A68_CHAR ,47,A68t140);
typedef struct A68t140  A68_140 ;    /* STRUCT 47 CHAR */
A_ISTRUCT(A68_CHAR ,73,A68t141);
typedef struct A68t141  A68_141 ;    /* STRUCT 73 CHAR */
A_ISTRUCT(A68_CHAR ,38,A68t142);
typedef struct A68t142  A68_142 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(A68_CHAR ,36,A68t143);
typedef struct A68t143  A68_143 ;    /* STRUCT 36 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t144);
typedef struct A68t144  A68_144 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_CHAR ,46,A68t145);
typedef struct A68t145  A68_145 ;    /* STRUCT 46 CHAR */
A_ISTRUCT(A68_CHAR ,53,A68t146);
typedef struct A68t146  A68_146 ;    /* STRUCT 53 CHAR */
A_ISTRUCT(A68_CHAR ,79,A68t147);
typedef struct A68t147  A68_147 ;    /* STRUCT 79 CHAR */
A_ISTRUCT(A68_CHAR ,68,A68t148);
typedef struct A68t148  A68_148 ;    /* STRUCT 68 CHAR */
A_ISTRUCT(A68_CHAR ,69,A68t149);
typedef struct A68t149  A68_149 ;    /* STRUCT 69 CHAR */
A_ISTRUCT(A68_CHAR ,58,A68t150);
typedef struct A68t150  A68_150 ;    /* STRUCT 58 CHAR */
A_ISTRUCT(A68_CHAR ,62,A68t151);
typedef struct A68t151  A68_151 ;    /* STRUCT 62 CHAR */
A_ISTRUCT(A68_CHAR ,55,A68t152);
typedef struct A68t152  A68_152 ;    /* STRUCT 55 CHAR */
A_ISTRUCT(A68_CHAR ,77,A68t153);
typedef struct A68t153  A68_153 ;    /* STRUCT 77 CHAR */
A_ISTRUCT(A68_CHAR ,72,A68t154);
typedef struct A68t154  A68_154 ;    /* STRUCT 72 CHAR */
A_ISTRUCT(A68_CHAR ,52,A68t155);
typedef struct A68t155  A68_155 ;    /* STRUCT 52 CHAR */
A_ISTRUCT(A68_CHAR ,71,A68t156);
typedef struct A68t156  A68_156 ;    /* STRUCT 71 CHAR */
A_ISTRUCT(A68_CHAR ,28,A68t157);
typedef struct A68t157  A68_157 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(A68_CHAR ,32,A68t158);
typedef struct A68t158  A68_158 ;    /* STRUCT 32 CHAR */
A_ISTRUCT(A68_CHAR ,61,A68t159);
typedef struct A68t159  A68_159 ;    /* STRUCT 61 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t160);
typedef struct A68t160  A68_160 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,70,A68t161);
typedef struct A68t161  A68_161 ;    /* STRUCT 70 CHAR */
A_ISTRUCT(A68_CHAR ,54,A68t162);
typedef struct A68t162  A68_162 ;    /* STRUCT 54 CHAR */
A_ISTRUCT(A68_CHAR ,50,A68t163);
typedef struct A68t163  A68_163 ;    /* STRUCT 50 CHAR */
A_ISTRUCT(A68_CHAR ,44,A68t164);
typedef struct A68t164  A68_164 ;    /* STRUCT 44 CHAR */
A_ISTRUCT(A68_CHAR ,75,A68t165);
typedef struct A68t165  A68_165 ;    /* STRUCT 75 CHAR */
A_ISTRUCT(A68_CHAR ,95,A68t166);
typedef struct A68t166  A68_166 ;    /* STRUCT 95 CHAR */
A_ISTRUCT(A68_CHAR ,84,A68t167);
typedef struct A68t167  A68_167 ;    /* STRUCT 84 CHAR */
A_ISTRUCT(A68_CHAR ,67,A68t168);
typedef struct A68t168  A68_168 ;    /* STRUCT 67 CHAR */
A_ISTRUCT(A68_CHAR ,64,A68t169);
typedef struct A68t169  A68_169 ;    /* STRUCT 64 CHAR */
A_ISTRUCT(A68_CHAR ,81,A68t170);
typedef struct A68t170  A68_170 ;    /* STRUCT 81 CHAR */
A_ISTRUCT(A68_CHAR ,63,A68t171);
typedef struct A68t171  A68_171 ;    /* STRUCT 63 CHAR */
A_ISTRUCT(A68_CHAR ,39,A68t172);
typedef struct A68t172  A68_172 ;    /* STRUCT 39 CHAR */
A_ISTRUCT(A68_CHAR ,40,A68t173);
typedef struct A68t173  A68_173 ;    /* STRUCT 40 CHAR */
A_ISTRUCT(A68_CHAR ,85,A68t174);
typedef struct A68t174  A68_174 ;    /* STRUCT 85 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t175);
typedef struct A68t175  A68_175 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t176);
typedef struct A68t176  A68_176 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,51,A68t177);
typedef struct A68t177  A68_177 ;    /* STRUCT 51 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t178);
typedef struct A68t178  A68_178 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t179);
typedef struct A68t179  A68_179 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(struct A68t100 ,250,A68t180);
typedef struct A68t180  A68_180 ;    /* STRUCT 250 MODE100 */

A_PROCEDURE(A68_VOID ,A68t181,(A68_INT ,struct A68t92 *),(A68_INT ,struct A68t92 *,void *));
typedef struct A68t181  A68_181 ;    /* PROC(INT) MODE92 */

A_PROCEDURE(A68_BOOL ,A68t182,(struct A68t92 ),(struct A68t92 ,void *));
typedef struct A68t182  A68_182 ;    /* PROC(MODE92) BOOL */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from messageproc --- */
extern A68_BITS  XIAAOSI_outerr_class;
extern A68_BITS  YIAAOSI_log_class;
extern A68_BITS  ZIAAOSI_output_class;
extern A68_BITS  BJAAOSI_outpart_class;
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
static A68_115   FFAAELA = {"$Id: compmessages.a68,v 34.2 1995/03/29 13:03:22 ella Exp $"}; 
A_GISVEC(A68_VC ,GFAAELA,FFAAELA,59)
#define HFAAELA_max_comp_messages 250
static A68_116   JFAAELA = {"compiler"}; 
A_GISVEC(A68_VC ,KFAAELA,JFAAELA,8)
static A68_118   SFAAELA = {"*: * *  * won't fit here"}; 
A_GISVEC(A68_VC ,TFAAELA,SFAAELA,24)
static A68_119   UFAAELA = {"*: * *  * won't fit here  * would"}; 
A_GISVEC(A68_VC ,VFAAELA,UFAAELA,33)
static A68_120   WFAAELA = {"*: * *  * and * are different types"}; 
A_GISVEC(A68_VC ,XFAAELA,WFAAELA,35)
static A68_121   YFAAELA = {"*: * *  INDEXIO"}; 
A_GISVEC(A68_VC ,ZFAAELA,YFAAELA,15)
static A68_122   AGAAELA = {"*: * *  PRIMSETNO"}; 
A_GISVEC(A68_VC ,BGAAELA,AGAAELA,17)
static A68_123   CGAAELA = {"*: * *"}; 
A_GISVEC(A68_VC ,DGAAELA,CGAAELA,6)
static A68_123   EGAAELA = {"*: * *"}; 
A_GISVEC(A68_VC ,FGAAELA,EGAAELA,6)
static A68_124   GGAAELA = {"*: * *  You can't use a visible space in a symbolic name "}; 
A_GISVEC(A68_VC ,HGAAELA,GGAAELA,57)
static A68_125   IGAAELA = {"*: * *  You are using * for something else"}; 
A_GISVEC(A68_VC ,JGAAELA,IGAAELA,42)
static A68_126   KGAAELA = {"*: * *  You haven't defined *"}; 
A_GISVEC(A68_VC ,LGAAELA,KGAAELA,29)
static A68_127   MGAAELA = {"*: * *  * can't be used until its definition is complete"}; 
A_GISVEC(A68_VC ,NGAAELA,MGAAELA,56)
static A68_128   OGAAELA = {"*: * *  * can't be accessed from here"}; 
A_GISVEC(A68_VC ,PGAAELA,OGAAELA,37)
static A68_126   QGAAELA = {"*: * *  Boolean expected here"}; 
A_GISVEC(A68_VC ,RGAAELA,QGAAELA,29)
static A68_126   SGAAELA = {"*: * *  Integer expected here"}; 
A_GISVEC(A68_VC ,TGAAELA,SGAAELA,29)
static A68_129   UGAAELA = {"*: * *  Type expected here"}; 
A_GISVEC(A68_VC ,VGAAELA,UGAAELA,26)
static A68_130   WGAAELA = {"*: * *  Constant expected here"}; 
A_GISVEC(A68_VC ,XGAAELA,WGAAELA,30)
static A68_131   YGAAELA = {"*: * *  Type, constant or attribute expected here"}; 
A_GISVEC(A68_VC ,ZGAAELA,YGAAELA,49)
static A68_132   AHAAELA = {"*: * *  Parameter can only be an ELLA integer"}; 
A_GISVEC(A68_VC ,BHAAELA,AHAAELA,45)
static A68_124   CHAAELA = {"*: * *  You are using * for something else in the context"}; 
A_GISVEC(A68_VC ,DHAAELA,CHAAELA,57)
static A68_126   EHAAELA = {"*: * *  / integer needed here"}; 
A_GISVEC(A68_VC ,FHAAELA,EHAAELA,29)
static A68_133   GHAAELA = {"*: * *  & needed here"}; 
A_GISVEC(A68_VC ,HHAAELA,GHAAELA,21)
static A68_134   IHAAELA = {"*: * *  / not needed here"}; 
A_GISVEC(A68_VC ,JHAAELA,IHAAELA,25)
static A68_134   KHAAELA = {"*: * *  & not needed here"}; 
A_GISVEC(A68_VC ,LHAAELA,KHAAELA,25)
static A68_135   MHAAELA = {"*: * *  Wrong sort of element in multiple"}; 
A_GISVEC(A68_VC ,NHAAELA,MHAAELA,41)
static A68_136   OHAAELA = {"*: * *  You can't have a function_type here"}; 
A_GISVEC(A68_VC ,PHAAELA,OHAAELA,43)
static A68_130   QHAAELA = {"*: * *  * needs two parameters"}; 
A_GISVEC(A68_VC ,RHAAELA,QHAAELA,30)
static A68_137   SHAAELA = {"*: * *  * is not recognised"}; 
A_GISVEC(A68_VC ,THAAELA,SHAAELA,27)
static A68_135   UHAAELA = {"*: * *  Parameter of * should be *, not *"}; 
A_GISVEC(A68_VC ,VHAAELA,UHAAELA,41)
static A68_138   WHAAELA = {"*: * *  * needs only one parameter"}; 
A_GISVEC(A68_VC ,XHAAELA,WHAAELA,34)
static A68_139   YHAAELA = {"*: * *  Second parameter of * should be *, not *"}; 
A_GISVEC(A68_VC ,ZHAAELA,YHAAELA,48)
static A68_140   AIAAELA = {"*: * *  First parameter of * should be *, not *"}; 
A_GISVEC(A68_VC ,BIAAELA,AIAAELA,47)
static A68_141   CIAAELA = {"*: * *  Alternatives should have the same type, but here you have * and *"}; 
A_GISVEC(A68_VC ,DIAAELA,CIAAELA,73)
static A68_137   EIAAELA = {"*: * *  * is not an integer"}; 
A_GISVEC(A68_VC ,FIAAELA,EIAAELA,27)
static A68_142   GIAAELA = {"*: * *  You can't have a function here"}; 
A_GISVEC(A68_VC ,HIAAELA,GIAAELA,38)
static A68_142   IIAAELA = {"*: * *  [*] ?  this index is too small"}; 
A_GISVEC(A68_VC ,JIAAELA,IIAAELA,38)
static A68_123   KIAAELA = {"*: * *"}; 
A_GISVEC(A68_VC ,LIAAELA,KIAAELA,6)
static A68_123   MIAAELA = {"*: * *"}; 
A_GISVEC(A68_VC ,NIAAELA,MIAAELA,6)
static A68_123   OIAAELA = {"*: * *"}; 
A_GISVEC(A68_VC ,PIAAELA,OIAAELA,6)
static A68_123   QIAAELA = {"*: * *"}; 
A_GISVEC(A68_VC ,RIAAELA,QIAAELA,6)
static A68_123   SIAAELA = {"*: * *"}; 
A_GISVEC(A68_VC ,TIAAELA,SIAAELA,6)
static A68_135   UIAAELA = {"*: * *  [*] ?  This index can't exceed  *"}; 
A_GISVEC(A68_VC ,VIAAELA,UIAAELA,41)
static A68_123   WIAAELA = {"*: * *"}; 
A_GISVEC(A68_VC ,XIAAELA,WIAAELA,6)
static A68_123   YIAAELA = {"*: * *"}; 
A_GISVEC(A68_VC ,ZIAAELA,YIAAELA,6)
static A68_123   AJAAELA = {"*: * *"}; 
A_GISVEC(A68_VC ,BJAAELA,AJAAELA,6)
static A68_123   CJAAELA = {"*: * *"}; 
A_GISVEC(A68_VC ,DJAAELA,CJAAELA,6)
static A68_143   EJAAELA = {"*: * *  There isn't anything after *"}; 
A_GISVEC(A68_VC ,FJAAELA,EJAAELA,36)
static A68_142   GJAAELA = {"*: * *  You can't assign to VAR * here"}; 
A_GISVEC(A68_VC ,HJAAELA,GJAAELA,38)
static A68_138   IJAAELA = {"*: * *  You have already defined *"}; 
A_GISVEC(A68_VC ,JJAAELA,IJAAELA,34)
static A68_129   KJAAELA = {"*: * *  * needs parameters"}; 
A_GISVEC(A68_VC ,LJAAELA,KJAAELA,26)
static A68_128   MJAAELA = {"*: * *  * hasn't this many parameters"}; 
A_GISVEC(A68_VC ,NJAAELA,MJAAELA,37)
static A68_137   OJAAELA = {"*: * *  Integer needed here"}; 
A_GISVEC(A68_VC ,PJAAELA,OJAAELA,27)
static A68_142   QJAAELA = {"*: * *  You can't have a function here"}; 
A_GISVEC(A68_VC ,RJAAELA,QJAAELA,38)
static A68_144   SJAAELA = {"*: * *  * needs more parameters"}; 
A_GISVEC(A68_VC ,TJAAELA,SJAAELA,31)
static A68_143   UJAAELA = {"*: * *  * needs a * parameter, not *"}; 
A_GISVEC(A68_VC ,VJAAELA,UJAAELA,36)
static A68_123   WJAAELA = {"*: * *"}; 
A_GISVEC(A68_VC ,XJAAELA,WJAAELA,6)
static A68_135   YJAAELA = {"*: * *  Index can only be an ELLA integer"}; 
A_GISVEC(A68_VC ,ZJAAELA,YJAAELA,41)
static A68_142   AKAAELA = {"*: * *  Indexing gives an unknown type"}; 
A_GISVEC(A68_VC ,BKAAELA,AKAAELA,38)
static A68_137   CKAAELA = {"*: * *  * cannot be indexed"}; 
A_GISVEC(A68_VC ,DKAAELA,CKAAELA,27)
static A68_145   EKAAELA = {"*: * *  [*..*] ?  The lower limit is too small"}; 
A_GISVEC(A68_VC ,FKAAELA,EKAAELA,46)
static A68_131   GKAAELA = {"*: * *  [*..*] ?  The upper limit can't exceed  *"}; 
A_GISVEC(A68_VC ,HKAAELA,GKAAELA,49)
static A68_131   IKAAELA = {"*: * *  [*..*] ?  You must trim at least one item"}; 
A_GISVEC(A68_VC ,JKAAELA,IKAAELA,49)
static A68_146   KKAAELA = {"*: * *  Input of * can't be supplied inside IF.... FI"}; 
A_GISVEC(A68_VC ,LKAAELA,KKAAELA,53)
static A68_142   MKAAELA = {"*: * *  Trimming gives an unknown type"}; 
A_GISVEC(A68_VC ,NKAAELA,MKAAELA,38)
static A68_129   OKAAELA = {"*: * *  * can't be trimmed"}; 
A_GISVEC(A68_VC ,PKAAELA,OKAAELA,26)
static A68_128   QKAAELA = {"*: * *  * and * can't be concatenated"}; 
A_GISVEC(A68_VC ,RKAAELA,QKAAELA,37)
static A68_126   SKAAELA = {"*: * *  You can't JOIN * to *"}; 
A_GISVEC(A68_VC ,TKAAELA,SKAAELA,29)
static A68_145   UKAAELA = {"*: * *  [*] ?  You must have at least one item"}; 
A_GISVEC(A68_VC ,VKAAELA,UKAAELA,46)
static A68_136   WKAAELA = {"*: * *  The test should be of type *, not *"}; 
A_GISVEC(A68_VC ,XKAAELA,WKAAELA,43)
static A68_146   YKAAELA = {"*: * *  * and * are incompatible alternatives of CASE"}; 
A_GISVEC(A68_VC ,ZKAAELA,YKAAELA,53)
static A68_147   ALAAELA = {"*: * *  THEN delivers type * and ELSE delivers type *, these should be the same"}; 
A_GISVEC(A68_VC ,BLAAELA,ALAAELA,79)
static A68_124   CLAAELA = {"*: * *  Parameter and result of DELAY must have same type"}; 
A_GISVEC(A68_VC ,DLAAELA,CLAAELA,57)
static A68_140   ELAAELA = {"*: * *  DELAY initialisation should be *, not *"}; 
A_GISVEC(A68_VC ,FLAAELA,ELAAELA,47)
static A68_148   GLAAELA = {"*: * *  * ?  Time to intermediate value of DELAY mustn't be negative"}; 
A_GISVEC(A68_VC ,HLAAELA,GLAAELA,68)
static A68_149   ILAAELA = {"*: * *  * ?  Second integer of DELAY mustn't be smaller than first: *"}; 
A_GISVEC(A68_VC ,JLAAELA,ILAAELA,69)
static A68_150   KLAAELA = {"*: * *  * ?  Parameter of IDELAY must be greater than zero"}; 
A_GISVEC(A68_VC ,LLAAELA,KLAAELA,58)
static A68_151   MLAAELA = {"*: * *  * ?  Time to output of DELAY must be greater than zero"}; 
A_GISVEC(A68_VC ,NLAAELA,MLAAELA,62)
static A68_152   OLAAELA = {"*: * *  Input and output of RAM must have the same type"}; 
A_GISVEC(A68_VC ,PLAAELA,OLAAELA,55)
static A68_132   QLAAELA = {"*: * *  RAM initialisation should be *, not *"}; 
A_GISVEC(A68_VC ,RLAAELA,QLAAELA,45)
static A68_153   SLAAELA = {"*: * *  You can't have a locally declared type in OUTPUT, but here you have *"}; 
A_GISVEC(A68_VC ,TLAAELA,SLAAELA,77)
static A68_154   ULAAELA = {"*: * *  Second parameter of RAM is not of correct type for write address"}; 
A_GISVEC(A68_VC ,VLAAELA,ULAAELA,72)
static A68_128   WLAAELA = {"*: * *  Not enough parameters for RAM"}; 
A_GISVEC(A68_VC ,XLAAELA,WLAAELA,37)
static A68_123   YLAAELA = {"*: * *"}; 
A_GISVEC(A68_VC ,ZLAAELA,YLAAELA,6)
static A68_125   AMAAELA = {"*: * *  Wrong type for write enable of RAM"}; 
A_GISVEC(A68_VC ,BMAAELA,AMAAELA,42)
static A68_155   CMAAELA = {"*: * *  Only one alternative for write enable of RAM"}; 
A_GISVEC(A68_VC ,DMAAELA,CMAAELA,52)
static A68_146   EMAAELA = {"*: * *  Too many alternatives for write enable of RAM"}; 
A_GISVEC(A68_VC ,FMAAELA,EMAAELA,53)
static A68_156   GMAAELA = {"*: * *  Fourth parameter of RAM is not of correct type for write enable"}; 
A_GISVEC(A68_VC ,HMAAELA,GMAAELA,71)
static A68_120   IMAAELA = {"*: * *  Too many parameters for RAM"}; 
A_GISVEC(A68_VC ,JMAAELA,IMAAELA,35)
static A68_142   KMAAELA = {"*: * *  Not enough parameters for RAM?"}; 
A_GISVEC(A68_VC ,LMAAELA,KMAAELA,38)
static A68_123   MMAAELA = {"*: * *"}; 
A_GISVEC(A68_VC ,NMAAELA,MMAAELA,6)
static A68_123   OMAAELA = {"*: * *"}; 
A_GISVEC(A68_VC ,PMAAELA,OMAAELA,6)
static A68_123   QMAAELA = {"*: * *"}; 
A_GISVEC(A68_VC ,RMAAELA,QMAAELA,6)
static A68_123   SMAAELA = {"*: * *"}; 
A_GISVEC(A68_VC ,TMAAELA,SMAAELA,6)
static A68_157   UMAAELA = {"*: * *  You can't have * * *"}; 
A_GISVEC(A68_VC ,VMAAELA,UMAAELA,28)
static A68_123   WMAAELA = {"*: * *"}; 
A_GISVEC(A68_VC ,XMAAELA,WMAAELA,6)
static A68_147   YMAAELA = {"*: * *  The type of the repeated part mustn't depend on the multiplier variable"}; 
A_GISVEC(A68_VC ,ZMAAELA,YMAAELA,79)
static A68_150   ANAAELA = {"*: * *  * is exported and this would change it from * to *"}; 
A_GISVEC(A68_VC ,BNAAELA,ANAAELA,58)
static A68_120   CNAAELA = {"*: * *  I can't find * in context *"}; 
A_GISVEC(A68_VC ,DNAAELA,CNAAELA,35)
static A68_134   ENAAELA = {"*: * *  ; not needed here"}; 
A_GISVEC(A68_VC ,FNAAELA,ENAAELA,25)
static A68_158   GNAAELA = {"*: * *  * doesn't need importing"}; 
A_GISVEC(A68_VC ,HNAAELA,GNAAELA,32)
static A68_130   INAAELA = {"*: * *  * hasn't been exported"}; 
A_GISVEC(A68_VC ,JNAAELA,INAAELA,30)
static A68_142   KNAAELA = {"*: * *  * is * but you are importing *"}; 
A_GISVEC(A68_VC ,LNAAELA,KNAAELA,38)
static A68_130   MNAAELA = {"*: * *  I can't find context *"}; 
A_GISVEC(A68_VC ,NNAAELA,MNAAELA,30)
static A68_140   ONAAELA = {"*: * *  I can't find * in the importing context"}; 
A_GISVEC(A68_VC ,PNAAELA,ONAAELA,47)
static A68_159   QNAAELA = {"*: * *  A FN / MAC declared inside another can't be an IMPORT"}; 
A_GISVEC(A68_VC ,RNAAELA,QNAAELA,61)
static A68_160   SNAAELA = {"*: * *  *"}; 
A_GISVEC(A68_VC ,TNAAELA,SNAAELA,9)
static A68_125   UNAAELA = {"*: * *  Ambiguity value should be *, not *"}; 
A_GISVEC(A68_VC ,VNAAELA,UNAAELA,42)
static A68_141   WNAAELA = {"*: * *  RAM read range */(*..*) and write range */(*..*) must be the same"}; 
A_GISVEC(A68_VC ,XNAAELA,WNAAELA,73)
static A68_161   YNAAELA = {"*: * *  Third parameter of RAM is not of correct type for read address"}; 
A_GISVEC(A68_VC ,ZNAAELA,YNAAELA,70)
static A68_162   AOAAELA = {"*: * *  This expression will cause arithmetic overflow"}; 
A_GISVEC(A68_VC ,BOAAELA,AOAAELA,54)
static A68_151   COAAELA = {"*: * *  INT  * = *..* ?  You must have a range of at least one"}; 
A_GISVEC(A68_VC ,DOAAELA,COAAELA,62)
static A68_152   EOAAELA = {"*: * *  (*..*) ?  You must have a range of at least one"}; 
A_GISVEC(A68_VC ,FOAAELA,EOAAELA,55)
static A68_163   GOAAELA = {"*: * *  */* ?  This is outside the range  */(*..*)"}; 
A_GISVEC(A68_VC ,HOAAELA,GOAAELA,50)
static A68_152   IOAAELA = {"*: * *  */(*..*) ?  This is outside the range  */(*..*)"}; 
A_GISVEC(A68_VC ,JOAAELA,IOAAELA,55)
static A68_164   KOAAELA = {"*: * *  */(*..*) ?  This isn't a valid range"}; 
A_GISVEC(A68_VC ,LOAAELA,KOAAELA,44)
static A68_119   MOAAELA = {"*: * *  You need a VAR name here."}; 
A_GISVEC(A68_VC ,NOAAELA,MOAAELA,33)
static A68_144   OOAAELA = {"*: * *  You can't REFORM * to *"}; 
A_GISVEC(A68_VC ,POAAELA,OOAAELA,31)
static A68_165   QOAAELA = {"*: * *  You must show the order of the calculation of * and * by bracketing"}; 
A_GISVEC(A68_VC ,ROAAELA,QOAAELA,75)
static A68_136   SOAAELA = {"*: * *  You can't have * overlapping with *"}; 
A_GISVEC(A68_VC ,TOAAELA,SOAAELA,43)
static A68_130   UOAAELA = {"*: * *  * is a MAC parameter.."}; 
A_GISVEC(A68_VC ,VOAAELA,UOAAELA,30)
static A68_130   WOAAELA = {"*: * *  * is a named integer.."}; 
A_GISVEC(A68_VC ,XOAAELA,WOAAELA,30)
static A68_129   YOAAELA = {"*: * *  * is a type name.."}; 
A_GISVEC(A68_VC ,ZOAAELA,YOAAELA,26)
static A68_143   APAAELA = {"*: * *  * is a name defined by LET.."}; 
A_GISVEC(A68_VC ,BPAAELA,APAAELA,36)
static A68_119   CPAAELA = {"*: * *  * is a formal parameter.."}; 
A_GISVEC(A68_VC ,DPAAELA,CPAAELA,33)
static A68_128   EPAAELA = {"*: * *  * is a name defined by MAKE.."}; 
A_GISVEC(A68_VC ,FPAAELA,EPAAELA,37)
static A68_166   GPAAELA = {"*: * *  You need a basic value, type name, named integer, attribute name or MAC parameter here."}; 
A_GISVEC(A68_VC ,HPAAELA,GPAAELA,95)
static A68_136   IPAAELA = {"*: * *  You can't use it to form an ELLA * "}; 
A_GISVEC(A68_VC ,JPAAELA,IPAAELA,43)
static A68_146   KPAAELA = {"*: * *  You can't use it to form an associated value."}; 
A_GISVEC(A68_VC ,LPAAELA,KPAAELA,53)
static A68_153   MPAAELA = {"*: * *  You need a basic value, formal parameter, LET, MAKE or VAR name here."}; 
A_GISVEC(A68_VC ,NPAAELA,MPAAELA,77)
static A68_127   OPAAELA = {"*: * *  You can't use it to recover an associated value."}; 
A_GISVEC(A68_VC ,PPAAELA,OPAAELA,56)
static A68_157   QPAAELA = {"*: * *  * is a basic value.."}; 
A_GISVEC(A68_VC ,RPAAELA,QPAAELA,28)
static A68_155   SPAAELA = {"*: * *  You can't start a word with a visible space."}; 
A_GISVEC(A68_VC ,TPAAELA,SPAAELA,52)
static A68_136   UPAAELA = {"*: * *  The two versions of * are different"}; 
A_GISVEC(A68_VC ,VPAAELA,UPAAELA,43)
static A68_123   WPAAELA = {"*: * *"}; 
A_GISVEC(A68_VC ,XPAAELA,WPAAELA,6)
static A68_123   YPAAELA = {"*: * *"}; 
A_GISVEC(A68_VC ,ZPAAELA,YPAAELA,6)
static A68_158   AQAAELA = {"*: * *  * is an attribute name.."}; 
A_GISVEC(A68_VC ,BQAAELA,AQAAELA,32)
static A68_143   CQAAELA = {"*: * *  * is a name defined by VAR.."}; 
A_GISVEC(A68_VC ,DQAAELA,CQAAELA,36)
static A68_146   EQAAELA = {"*: * *  This expression gives a negative square root."}; 
A_GISVEC(A68_VC ,FQAAELA,EQAAELA,53)
static A68_124   GQAAELA = {"*: * *  You can only use this constant in a CASE chooser."}; 
A_GISVEC(A68_VC ,HQAAELA,GQAAELA,57)
static A68_167   IQAAELA = {"*: * *  Output can only be ELLA integer, character or non-associated enumerated type"}; 
A_GISVEC(A68_VC ,JQAAELA,IQAAELA,84)
static A68_123   KQAAELA = {"*: * *"}; 
A_GISVEC(A68_VC ,LQAAELA,KQAAELA,6)
static A68_123   MQAAELA = {"*: * *"}; 
A_GISVEC(A68_VC ,NQAAELA,MQAAELA,6)
static A68_120   OQAAELA = {"*: * *  Character * already defined"}; 
A_GISVEC(A68_VC ,PQAAELA,OQAAELA,35)
static A68_155   QQAAELA = {"*: * *  Character range must be defined sequentially"}; 
A_GISVEC(A68_VC ,RQAAELA,QQAAELA,52)
static A68_120   SQAAELA = {"*: * *  You can't have * in a range"}; 
A_GISVEC(A68_VC ,TQAAELA,SQAAELA,35)
static A68_134   UQAAELA = {"*: * *  ' not needed here"}; 
A_GISVEC(A68_VC ,VQAAELA,UQAAELA,25)
static A68_134   WQAAELA = {"*: * *  \" not needed here"}; 
A_GISVEC(A68_VC ,XQAAELA,WQAAELA,25)
static A68_137   YQAAELA = {"*: * *  * not defined for *"}; 
A_GISVEC(A68_VC ,ZQAAELA,YQAAELA,27)
static A68_144   ARAAELA = {"*: * *  ' character needed here"}; 
A_GISVEC(A68_VC ,BRAAELA,ARAAELA,31)
static A68_124   CRAAELA = {"*: * *  STRING must be composed of single ELLA characters"}; 
A_GISVEC(A68_VC ,DRAAELA,CRAAELA,57)
static A68_139   ERAAELA = {"*: * *  You must have a printable character here"}; 
A_GISVEC(A68_VC ,FRAAELA,ERAAELA,48)
static A68_144   GRAAELA = {"*: * *  Tab cannot be used here"}; 
A_GISVEC(A68_VC ,HRAAELA,GRAAELA,31)
static A68_145   IRAAELA = {"*: * *  Input incompatible with macro function"}; 
A_GISVEC(A68_VC ,JRAAELA,IRAAELA,46)
static A68_148   KRAAELA = {"*: * *  Implicit parameter only allowed in input OF MAC declarations"}; 
A_GISVEC(A68_VC ,LRAAELA,KRAAELA,68)
static A68_115   MRAAELA = {"*: * *  Implicit parameters of * must be supplied in a MAKE"}; 
A_GISVEC(A68_VC ,NRAAELA,MRAAELA,59)
static A68_157   ORAAELA = {"*: * *  * is a constant name"}; 
A_GISVEC(A68_VC ,PRAAELA,ORAAELA,28)
static A68_120   QRAAELA = {"*: * *  You can't have a ?type here"}; 
A_GISVEC(A68_VC ,RRAAELA,QRAAELA,35)
static A68_158   SRAAELA = {"*: * *  * is not a subrange of *"}; 
A_GISVEC(A68_VC ,TRAAELA,SRAAELA,32)
static A68_132   URAAELA = {"*: * *  Left hand side should have * elements"}; 
A_GISVEC(A68_VC ,VRAAELA,URAAELA,45)
static A68_168   WRAAELA = {"*: * *  * can only appear once in any multiple assignment statement"}; 
A_GISVEC(A68_VC ,XRAAELA,WRAAELA,67)
static A68_127   YRAAELA = {"*: * *  You cannot have all null names in left hand side"}; 
A_GISVEC(A68_VC ,ZRAAELA,YRAAELA,56)
static A68_131   ASAAELA = {"*: * *  You can only have a row or structure here"}; 
A_GISVEC(A68_VC ,BSAAELA,ASAAELA,49)
static A68_124   CSAAELA = {"*: * *  * ?  interval of SAMPLE must be greater than zero"}; 
A_GISVEC(A68_VC ,DSAAELA,CSAAELA,57)
static A68_162   ESAAELA = {"*: * *  * ?  skew of SAMPLE must be between -(*) and *"}; 
A_GISVEC(A68_VC ,FSAAELA,ESAAELA,54)
static A68_150   GSAAELA = {"*: * *  Parameter and result of SAMPLE must have same type"}; 
A_GISVEC(A68_VC ,HSAAELA,GSAAELA,58)
static A68_139   ISAAELA = {"*: * *  SAMPLE initialisation should be *, not *"}; 
A_GISVEC(A68_VC ,JSAAELA,ISAAELA,48)
static A68_115   KSAAELA = {"*: * *  * ?  scale of timescaling must be greater than zero"}; 
A_GISVEC(A68_VC ,LSAAELA,KSAAELA,59)
static A68_115   MSAAELA = {"*: * *  * ?  skew of timescaling must be between -(*) and *"}; 
A_GISVEC(A68_VC ,NSAAELA,MSAAELA,59)
static A68_169   OSAAELA = {"*: * *  Implicit parameters of * must be supplied in timescaling"}; 
A_GISVEC(A68_VC ,PSAAELA,OSAAELA,64)
static A68_170   QSAAELA = {"*: * *  Specification and body of * must have the same type, but you have * and *"}; 
A_GISVEC(A68_VC ,RSAAELA,QSAAELA,81)
static A68_146   SSAAELA = {"*: * *  Timescaling initialisation should be *, not *"}; 
A_GISVEC(A68_VC ,TSAAELA,SSAAELA,53)
static A68_123   USAAELA = {"*: * *"}; 
A_GISVEC(A68_VC ,VSAAELA,USAAELA,6)
static A68_123   WSAAELA = {"*: * *"}; 
A_GISVEC(A68_VC ,XSAAELA,WSAAELA,6)
static A68_123   YSAAELA = {"*: * *"}; 
A_GISVEC(A68_VC ,ZSAAELA,YSAAELA,6)
static A68_162   ATAAELA = {"*: * *  You have already joined to parts of the output"}; 
A_GISVEC(A68_VC ,BTAAELA,ATAAELA,54)
static A68_143   CTAAELA = {"*: * *  OUTPUT statement needed here"}; 
A_GISVEC(A68_VC ,DTAAELA,CTAAELA,36)
static A68_123   ETAAELA = {"*: * *"}; 
A_GISVEC(A68_VC ,FTAAELA,ETAAELA,6)
static A68_136   GTAAELA = {"*: * *  An input to * needs to be joined to"}; 
A_GISVEC(A68_VC ,HTAAELA,GTAAELA,43)
static A68_143   ITAAELA = {"*: * *  An output of * needs joining"}; 
A_GISVEC(A68_VC ,JTAAELA,ITAAELA,36)
static A68_163   KTAAELA = {"*: * *  Both an input and output of * need joining"}; 
A_GISVEC(A68_VC ,LTAAELA,KTAAELA,50)
static A68_163   MTAAELA = {"*: * *  You have already joined to an element here"}; 
A_GISVEC(A68_VC ,NTAAELA,MTAAELA,50)
static A68_152   OTAAELA = {"*: * *  You have already joined to a function-type here"}; 
A_GISVEC(A68_VC ,PTAAELA,OTAAELA,55)
static A68_171   QTAAELA = {"*: * *  You have already supplied part or all of the input here"}; 
A_GISVEC(A68_VC ,RTAAELA,QTAAELA,63)
static A68_123   STAAELA = {"*: * *"}; 
A_GISVEC(A68_VC ,TTAAELA,STAAELA,6)
static A68_161   UTAAELA = {"*: * *  Implicit parameters of * must be supplied in a macro parameter"}; 
A_GISVEC(A68_VC ,VTAAELA,UTAAELA,70)
static A68_124   WTAAELA = {"*: * *  Specification of * is *, but parameter requires *"}; 
A_GISVEC(A68_VC ,XTAAELA,WTAAELA,57)
static A68_158   YTAAELA = {"*: * *  FN parameter needed here"}; 
A_GISVEC(A68_VC ,ZTAAELA,YTAAELA,32)
static A68_172   AUAAELA = {"*: * *  * does not need parameters here"}; 
A_GISVEC(A68_VC ,BUAAELA,AUAAELA,39)
static A68_119   CUAAELA = {"*: * *  MAC parameter needed here"}; 
A_GISVEC(A68_VC ,DUAAELA,CUAAELA,33)
static A68_172   EUAAELA = {"*: * *  * is * but parameter requires *"}; 
A_GISVEC(A68_VC ,FUAAELA,EUAAELA,39)
static A68_153   GUAAELA = {"*: * *  * is * and parameter requires * but the macro parameters do not match"}; 
A_GISVEC(A68_VC ,HUAAELA,GUAAELA,77)
static A68_146   IUAAELA = {"*: * *  Parameter and result of SAMPLE cannot be void"}; 
A_GISVEC(A68_VC ,JUAAELA,IUAAELA,53)
static A68_173   KUAAELA = {"*: * *  Result for FASTER cannot be void"}; 
A_GISVEC(A68_VC ,LUAAELA,KUAAELA,40)
static A68_136   MUAAELA = {"*: * *  Parameter for SLOWER cannot be void"}; 
A_GISVEC(A68_VC ,NUAAELA,MUAAELA,43)
static A68_123   OUAAELA = {"*: * *"}; 
A_GISVEC(A68_VC ,PUAAELA,OUAAELA,6)
static A68_123   QUAAELA = {"*: * *"}; 
A_GISVEC(A68_VC ,RUAAELA,QUAAELA,6)
static A68_123   SUAAELA = {"*: * *"}; 
A_GISVEC(A68_VC ,TUAAELA,SUAAELA,6)
static A68_123   UUAAELA = {"*: * *"}; 
A_GISVEC(A68_VC ,VUAAELA,UUAAELA,6)
static A68_140   WUAAELA = {"*: * *  Compilation abandoned - too many errors"}; 
A_GISVEC(A68_VC ,XUAAELA,WUAAELA,47)
static A68_158   YUAAELA = {"*: * *  Character not recognised"}; 
A_GISVEC(A68_VC ,ZUAAELA,YUAAELA,32)
static A68_133   AVAAELA = {"*: * *  Illegal radix"}; 
A_GISVEC(A68_VC ,BVAAELA,AVAAELA,21)
static A68_134   CVAAELA = {"*: * *  Integer too large"}; 
A_GISVEC(A68_VC ,DVAAELA,CVAAELA,25)
static A68_130   EVAAELA = {"*: * *  Illegal symbol after r"}; 
A_GISVEC(A68_VC ,FVAAELA,EVAAELA,30)
static A68_158   GVAAELA = {"*: * *  String goes over newline"}; 
A_GISVEC(A68_VC ,HVAAELA,GVAAELA,32)
static A68_123   IVAAELA = {"*: * *"}; 
A_GISVEC(A68_VC ,JVAAELA,IVAAELA,6)
static A68_125   KVAAELA = {"*: * *  You can't start a comment with MOC"}; 
A_GISVEC(A68_VC ,LVAAELA,KVAAELA,42)
static A68_159   MVAAELA = {"*: * *  This sort of comment can't go over more than one line"}; 
A_GISVEC(A68_VC ,NVAAELA,MVAAELA,61)
static A68_162   OVAAELA = {"*: * *  Reached end of file while still inside comment"}; 
A_GISVEC(A68_VC ,PVAAELA,OVAAELA,54)
static A68_164   QVAAELA = {"*: * *  Wrong sort of terminator for comment"}; 
A_GISVEC(A68_VC ,RVAAELA,QVAAELA,44)
static A68_142   SVAAELA = {"*: * *  You cannot index this function"}; 
A_GISVEC(A68_VC ,TVAAELA,SVAAELA,38)
static A68_164   UVAAELA = {"*: * *  You cannot replicate a function type"}; 
A_GISVEC(A68_VC ,VVAAELA,UVAAELA,44)
static A68_138   WVAAELA = {"*: * *  You cannot replicate an IO"}; 
A_GISVEC(A68_VC ,XVAAELA,WVAAELA,34)
static A68_123   YVAAELA = {"*: * *"}; 
A_GISVEC(A68_VC ,ZVAAELA,YVAAELA,6)
static A68_163   AWAAELA = {"*: * *  A function cannot be equivalent to a macro"}; 
A_GISVEC(A68_VC ,BWAAELA,AWAAELA,50)
static A68_123   CWAAELA = {"*: * *"}; 
A_GISVEC(A68_VC ,DWAAELA,CWAAELA,6)
static A68_144   EWAAELA = {"*: * *  The inputs do not match"}; 
A_GISVEC(A68_VC ,FWAAELA,EWAAELA,31)
static A68_158   GWAAELA = {"*: * *  The outputs do not match"}; 
A_GISVEC(A68_VC ,HWAAELA,GWAAELA,32)
static A68_155   IWAAELA = {"*: * *  The numbers of macro parameters do not match"}; 
A_GISVEC(A68_VC ,JWAAELA,IWAAELA,52)
static A68_159   KWAAELA = {"*: * *  There is a mis-match in the sorts of macro parameters"}; 
A_GISVEC(A68_VC ,LWAAELA,KWAAELA,61)
static A68_171   MWAAELA = {"*: * *  There is an implicit/explicit macro parameter mis-match"}; 
A_GISVEC(A68_VC ,NWAAELA,MWAAELA,63)
static A68_148   OWAAELA = {"*: * *  The details of the macro parameter declarations do not match"}; 
A_GISVEC(A68_VC ,PWAAELA,OWAAELA,68)
static A68_159   QWAAELA = {"*: * *  The macro parameters of macro parameters do not match"}; 
A_GISVEC(A68_VC ,RWAAELA,QWAAELA,61)
static A68_124   SWAAELA = {"*: * *  * cannot be substituted for the macro parameter *"}; 
A_GISVEC(A68_VC ,TWAAELA,SWAAELA,57)
static A68_139   UWAAELA = {"*: * *  First parameter of REPLACE must be a row"}; 
A_GISVEC(A68_VC ,VWAAELA,UWAAELA,48)
static A68_115   WWAAELA = {"*: * *  Second parameter of REPLACE must be an ELLA integer"}; 
A_GISVEC(A68_VC ,XWAAELA,WWAAELA,59)
static A68_174   YWAAELA = {"*: * *  Third parameter of REPLACE must match the element TYPE of the first parameter"}; 
A_GISVEC(A68_VC ,ZWAAELA,YWAAELA,85)
static A68_168   AXAAELA = {"*: * *  Lower bound of ELLA integer used for the index must be >= *"}; 
A_GISVEC(A68_VC ,BXAAELA,AXAAELA,67)
static A68_168   CXAAELA = {"*: * *  Upper bound of ELLA integer used for the index must be <= *"}; 
A_GISVEC(A68_VC ,DXAAELA,CXAAELA,67)
static A68_153   EXAAELA = {"*: * *  Implicit parameter must be supplied separately to explicit parameters"}; 
A_GISVEC(A68_VC ,FXAAELA,EXAAELA,77)
static A68_172   GXAAELA = {"*: * *  You need an attribute name here"}; 
A_GISVEC(A68_VC ,HXAAELA,GXAAELA,39)
static A68_160   IXAAELA = {"*: * *  *"}; 
A_GISVEC(A68_VC ,JXAAELA,IXAAELA,9)
static A68_175   NXAAELA = {"...................."}; 
A_GISVEC(A68_VC ,OXAAELA,NXAAELA,20)
static A68_176   PXAAELA = {"Compilation has failed"}; 
A_GISVEC(A68_VC ,QXAAELA,PXAAELA,22)
static A68_158   RXAAELA = {"Current context has been updated"}; 
A_GISVEC(A68_VC ,SXAAELA,RXAAELA,32)
static A68_157   TXAAELA = {"Compilation has been ignored"}; 
A_GISVEC(A68_VC ,UXAAELA,TXAAELA,28)
static A68_158   VXAAELA = {"Current context has been updated"}; 
A_GISVEC(A68_VC ,WXAAELA,VXAAELA,32)
static A68_177   XXAAELA = {"*: * *  Incorrect use of bracketing in an attribute"}; 
A_GISVEC(A68_VC ,YXAAELA,XXAAELA,51)
static A68_126   ZXAAELA = {"*: * *  Attribute needed here"}; 
A_GISVEC(A68_VC ,AYAAELA,ZXAAELA,29)
static A68_157   BYAAELA = {"*: * *  Brackets needed here"}; 
A_GISVEC(A68_VC ,CYAAELA,BYAAELA,28)
static A68_126   DYAAELA = {"Attribute class names used:  "}; 
A_GISVEC(A68_VC ,EYAAELA,DYAAELA,29)
static A68_178   FYAAELA = {",  "}; 
A_GISVEC(A68_VC ,GYAAELA,FYAAELA,3)
static A68_179   IYAAELA = {""}; 
A_GISVEC(A68_VC ,JYAAELA,IYAAELA,0)
static A68_140   KYAAELA = {"*: * * Portname * cannot be accessed from here "}; 
A_GISVEC(A68_VC ,LYAAELA,KYAAELA,47)
static A68_142   MYAAELA = {"*: * * You cannot use a portname here "}; 
A_GISVEC(A68_VC ,NYAAELA,MYAAELA,38)
static A68_143   OYAAELA = {"*: * * You cannot have IO of * here "}; 
A_GISVEC(A68_VC ,PYAAELA,OYAAELA,36)
static A68_150   QYAAELA = {"*: * * You cannot have a row of a function type in REPLACE"}; 
A_GISVEC(A68_VC ,RYAAELA,QYAAELA,58)
static A68_122   SYAAELA = {"Compiling from  *"}; 
A_GISVEC(A68_VC ,TYAAELA,SYAAELA,17)
static A68_98  VYAAELA_comp_facility;
static A68_95 * DZAAELA_message;

A_STATIC A68_VOID  MFAAELA_generator(A68_BOOL  LFAAELA_anonymous, A68_94  *ReturnedValue);

A68_VOID  XYAAELA_comp_msg(A68_INT  Number, A68_92  *ReturnedValue);

A68_BOOL  BZAAELA_is_comp_msg(A68_92  Msgno);

A_STATIC A68_VOID  MFAAELA_generator(A68_BOOL  LFAAELA_anonymous, A68_94  *ReturnedValue)
{ 
A68_94  NFAAELA;  /* clause result */
A68_94  OFAAELA;  /* OPERATORS - dynamic generator */
{ 
OFAAELA.upb = HFAAELA_max_comp_messages ;
( LFAAELA_anonymous? A_VLOC(A68_95 ,OFAAELA): A_VHEAP(A68_95 ,OFAAELA) );
NFAAELA = OFAAELA;
} 
*ReturnedValue = (NFAAELA);
return;
} 
#undef NL

A68_VOID  XYAAELA_comp_msg(A68_INT  Number, A68_92  *ReturnedValue)
{ 
A68_92  YYAAELA;  /* clause result */
A68_92  ZYAAELA;  /* avoid structure result */
A_PROC_ENTRY(comp_msg);
HMAAOSI_make_msgno( Number, VYAAELA_comp_facility, &ZYAAELA );
YYAAELA = ZYAAELA;
A_PROC_EXIT(comp_msg);
*ReturnedValue = (YYAAELA);
return;
} 
#undef NL

A68_BOOL  BZAAELA_is_comp_msg(A68_92  Msgno)
{ 
A68_BOOL  CZAAELA;  /* clause result */
A_PROC_ENTRY(is_comp_msg);
CZAAELA = INAAOSI_is_facility_msg(Msgno, VYAAELA_comp_facility);
A_PROC_EXIT(is_comp_msg);
return( CZAAELA );
} 
#undef NL
 /* line 1: */
 /* line 3: */
void CFAAELA(void)   /* initialise DECS compmessages */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/compmessages.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_98  IFAAELA;  /* collateral clause result */
A68_94  PFAAELA;  /* avoid structure result */
A68_BOOL * QFAAELA;  /* YIELD */
A68_180  RFAAELA;  /* collateral clause result */
A68_VC  KXAAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  LXAAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  MXAAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  HYAAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_99  UYAAELA;  /* OPERATORS - istruct -> vector */
A68_94  EZAAELA;  /* forall yield */
A68_INT  FZAAELA;  /* forall loop counter */
A68_95  GZAAELA;  /* collateral clause result */
A68_VC  HZAAELA;  /* OPERATORS - nil -> mode */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ella/assoc/./a68files/compmessages.a68";
A_config.translation_time = "Tue Apr  4 10:32:27 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "BFAAELA (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:32:27 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS compmessages);
UEAALIB_a68config(LGAALIB_configinfo, GFAAELA);
 /* line 72: */
 /* line 74: */
 /* line 75: */
IFAAELA.Name = KFAAELA;
 /* line 76: */
MFAAELA_generator( A68_TRUE, &PFAAELA );
IFAAELA.Messages = PFAAELA;
 /* line 77: */
QFAAELA = A_LOC(A68_BOOL ) ;
(*QFAAELA) = A68_FALSE ;
IFAAELA.Initialised = QFAAELA;
 /* line 78: */
RFAAELA.data[0].Number = 1;
RFAAELA.data[0].Class = XIAAOSI_outerr_class;
 /* line 79: */
RFAAELA.data[0].Text = TFAAELA;
RFAAELA.data[1].Number = 2;
RFAAELA.data[1].Class = XIAAOSI_outerr_class;
 /* line 80: */
RFAAELA.data[1].Text = VFAAELA;
RFAAELA.data[2].Number = 3;
RFAAELA.data[2].Class = XIAAOSI_outerr_class;
 /* line 81: */
RFAAELA.data[2].Text = XFAAELA;
RFAAELA.data[3].Number = 4;
RFAAELA.data[3].Class = XIAAOSI_outerr_class;
 /* line 82: */
RFAAELA.data[3].Text = ZFAAELA;
RFAAELA.data[4].Number = 5;
RFAAELA.data[4].Class = XIAAOSI_outerr_class;
 /* line 83: */
RFAAELA.data[4].Text = BGAAELA;
RFAAELA.data[5].Number = 6;
RFAAELA.data[5].Class = XIAAOSI_outerr_class;
 /* line 84: */
RFAAELA.data[5].Text = DGAAELA;
RFAAELA.data[6].Number = 7;
RFAAELA.data[6].Class = XIAAOSI_outerr_class;
 /* line 85: */
RFAAELA.data[6].Text = FGAAELA;
RFAAELA.data[7].Number = 8;
 /* line 86: */
RFAAELA.data[7].Class = XIAAOSI_outerr_class;
 /* line 87: */
RFAAELA.data[7].Text = HGAAELA;
RFAAELA.data[8].Number = 9;
RFAAELA.data[8].Class = XIAAOSI_outerr_class;
 /* line 88: */
RFAAELA.data[8].Text = JGAAELA;
RFAAELA.data[9].Number = 10;
RFAAELA.data[9].Class = XIAAOSI_outerr_class;
 /* line 89: */
RFAAELA.data[9].Text = LGAAELA;
RFAAELA.data[10].Number = 11;
 /* line 90: */
RFAAELA.data[10].Class = XIAAOSI_outerr_class;
 /* line 91: */
RFAAELA.data[10].Text = NGAAELA;
RFAAELA.data[11].Number = 12;
RFAAELA.data[11].Class = XIAAOSI_outerr_class;
 /* line 92: */
RFAAELA.data[11].Text = PGAAELA;
RFAAELA.data[12].Number = 13;
RFAAELA.data[12].Class = XIAAOSI_outerr_class;
 /* line 93: */
RFAAELA.data[12].Text = RGAAELA;
RFAAELA.data[13].Number = 14;
RFAAELA.data[13].Class = XIAAOSI_outerr_class;
 /* line 94: */
RFAAELA.data[13].Text = TGAAELA;
RFAAELA.data[14].Number = 15;
RFAAELA.data[14].Class = XIAAOSI_outerr_class;
 /* line 95: */
RFAAELA.data[14].Text = VGAAELA;
RFAAELA.data[15].Number = 16;
RFAAELA.data[15].Class = XIAAOSI_outerr_class;
 /* line 96: */
RFAAELA.data[15].Text = XGAAELA;
RFAAELA.data[16].Number = 17;
RFAAELA.data[16].Class = XIAAOSI_outerr_class;
 /* line 97: */
RFAAELA.data[16].Text = ZGAAELA;
RFAAELA.data[17].Number = 18;
RFAAELA.data[17].Class = XIAAOSI_outerr_class;
 /* line 98: */
RFAAELA.data[17].Text = BHAAELA;
RFAAELA.data[18].Number = 19;
 /* line 99: */
RFAAELA.data[18].Class = XIAAOSI_outerr_class;
 /* line 100: */
RFAAELA.data[18].Text = DHAAELA;
RFAAELA.data[19].Number = 20;
RFAAELA.data[19].Class = XIAAOSI_outerr_class;
 /* line 101: */
RFAAELA.data[19].Text = FHAAELA;
RFAAELA.data[20].Number = 21;
RFAAELA.data[20].Class = XIAAOSI_outerr_class;
 /* line 102: */
RFAAELA.data[20].Text = HHAAELA;
RFAAELA.data[21].Number = 22;
RFAAELA.data[21].Class = XIAAOSI_outerr_class;
 /* line 103: */
RFAAELA.data[21].Text = JHAAELA;
RFAAELA.data[22].Number = 23;
RFAAELA.data[22].Class = XIAAOSI_outerr_class;
 /* line 104: */
RFAAELA.data[22].Text = LHAAELA;
RFAAELA.data[23].Number = 24;
RFAAELA.data[23].Class = XIAAOSI_outerr_class;
 /* line 105: */
RFAAELA.data[23].Text = NHAAELA;
RFAAELA.data[24].Number = 25;
RFAAELA.data[24].Class = XIAAOSI_outerr_class;
 /* line 106: */
RFAAELA.data[24].Text = PHAAELA;
RFAAELA.data[25].Number = 26;
RFAAELA.data[25].Class = XIAAOSI_outerr_class;
 /* line 107: */
RFAAELA.data[25].Text = RHAAELA;
RFAAELA.data[26].Number = 27;
RFAAELA.data[26].Class = XIAAOSI_outerr_class;
 /* line 108: */
RFAAELA.data[26].Text = THAAELA;
RFAAELA.data[27].Number = 28;
RFAAELA.data[27].Class = XIAAOSI_outerr_class;
 /* line 109: */
RFAAELA.data[27].Text = VHAAELA;
RFAAELA.data[28].Number = 29;
RFAAELA.data[28].Class = XIAAOSI_outerr_class;
 /* line 110: */
RFAAELA.data[28].Text = XHAAELA;
RFAAELA.data[29].Number = 30;
RFAAELA.data[29].Class = XIAAOSI_outerr_class;
 /* line 111: */
RFAAELA.data[29].Text = ZHAAELA;
RFAAELA.data[30].Number = 31;
RFAAELA.data[30].Class = XIAAOSI_outerr_class;
 /* line 112: */
RFAAELA.data[30].Text = BIAAELA;
RFAAELA.data[31].Number = 32;
 /* line 113: */
RFAAELA.data[31].Class = XIAAOSI_outerr_class;
 /* line 114: */
RFAAELA.data[31].Text = DIAAELA;
RFAAELA.data[32].Number = 33;
RFAAELA.data[32].Class = XIAAOSI_outerr_class;
 /* line 115: */
RFAAELA.data[32].Text = FIAAELA;
RFAAELA.data[33].Number = 34;
RFAAELA.data[33].Class = XIAAOSI_outerr_class;
 /* line 116: */
RFAAELA.data[33].Text = HIAAELA;
RFAAELA.data[34].Number = 35;
RFAAELA.data[34].Class = XIAAOSI_outerr_class;
 /* line 117: */
RFAAELA.data[34].Text = JIAAELA;
RFAAELA.data[35].Number = 36;
RFAAELA.data[35].Class = XIAAOSI_outerr_class;
 /* line 118: */
RFAAELA.data[35].Text = LIAAELA;
RFAAELA.data[36].Number = 37;
RFAAELA.data[36].Class = XIAAOSI_outerr_class;
 /* line 119: */
RFAAELA.data[36].Text = NIAAELA;
RFAAELA.data[37].Number = 38;
RFAAELA.data[37].Class = XIAAOSI_outerr_class;
 /* line 120: */
RFAAELA.data[37].Text = PIAAELA;
RFAAELA.data[38].Number = 39;
RFAAELA.data[38].Class = XIAAOSI_outerr_class;
 /* line 121: */
RFAAELA.data[38].Text = RIAAELA;
RFAAELA.data[39].Number = 40;
RFAAELA.data[39].Class = XIAAOSI_outerr_class;
 /* line 122: */
RFAAELA.data[39].Text = TIAAELA;
RFAAELA.data[40].Number = 41;
RFAAELA.data[40].Class = XIAAOSI_outerr_class;
 /* line 123: */
RFAAELA.data[40].Text = VIAAELA;
RFAAELA.data[41].Number = 42;
RFAAELA.data[41].Class = XIAAOSI_outerr_class;
 /* line 124: */
RFAAELA.data[41].Text = XIAAELA;
RFAAELA.data[42].Number = 43;
RFAAELA.data[42].Class = XIAAOSI_outerr_class;
 /* line 125: */
RFAAELA.data[42].Text = ZIAAELA;
RFAAELA.data[43].Number = 44;
RFAAELA.data[43].Class = XIAAOSI_outerr_class;
 /* line 126: */
RFAAELA.data[43].Text = BJAAELA;
RFAAELA.data[44].Number = 45;
RFAAELA.data[44].Class = XIAAOSI_outerr_class;
 /* line 127: */
RFAAELA.data[44].Text = DJAAELA;
RFAAELA.data[45].Number = 46;
RFAAELA.data[45].Class = XIAAOSI_outerr_class;
 /* line 128: */
RFAAELA.data[45].Text = FJAAELA;
RFAAELA.data[46].Number = 47;
RFAAELA.data[46].Class = XIAAOSI_outerr_class;
 /* line 129: */
RFAAELA.data[46].Text = HJAAELA;
RFAAELA.data[47].Number = 48;
RFAAELA.data[47].Class = XIAAOSI_outerr_class;
 /* line 130: */
RFAAELA.data[47].Text = JJAAELA;
RFAAELA.data[48].Number = 49;
RFAAELA.data[48].Class = XIAAOSI_outerr_class;
 /* line 131: */
RFAAELA.data[48].Text = LJAAELA;
RFAAELA.data[49].Number = 50;
RFAAELA.data[49].Class = XIAAOSI_outerr_class;
 /* line 132: */
RFAAELA.data[49].Text = NJAAELA;
RFAAELA.data[50].Number = 51;
RFAAELA.data[50].Class = XIAAOSI_outerr_class;
 /* line 133: */
RFAAELA.data[50].Text = PJAAELA;
RFAAELA.data[51].Number = 52;
RFAAELA.data[51].Class = XIAAOSI_outerr_class;
 /* line 134: */
RFAAELA.data[51].Text = RJAAELA;
RFAAELA.data[52].Number = 53;
RFAAELA.data[52].Class = XIAAOSI_outerr_class;
 /* line 135: */
RFAAELA.data[52].Text = TJAAELA;
RFAAELA.data[53].Number = 54;
RFAAELA.data[53].Class = XIAAOSI_outerr_class;
 /* line 136: */
RFAAELA.data[53].Text = VJAAELA;
RFAAELA.data[54].Number = 55;
RFAAELA.data[54].Class = XIAAOSI_outerr_class;
 /* line 137: */
RFAAELA.data[54].Text = XJAAELA;
RFAAELA.data[55].Number = 56;
RFAAELA.data[55].Class = XIAAOSI_outerr_class;
 /* line 138: */
RFAAELA.data[55].Text = ZJAAELA;
RFAAELA.data[56].Number = 57;
RFAAELA.data[56].Class = XIAAOSI_outerr_class;
 /* line 139: */
RFAAELA.data[56].Text = BKAAELA;
RFAAELA.data[57].Number = 58;
RFAAELA.data[57].Class = XIAAOSI_outerr_class;
 /* line 140: */
RFAAELA.data[57].Text = DKAAELA;
RFAAELA.data[58].Number = 59;
RFAAELA.data[58].Class = XIAAOSI_outerr_class;
 /* line 141: */
RFAAELA.data[58].Text = FKAAELA;
RFAAELA.data[59].Number = 60;
RFAAELA.data[59].Class = XIAAOSI_outerr_class;
 /* line 142: */
RFAAELA.data[59].Text = HKAAELA;
RFAAELA.data[60].Number = 61;
RFAAELA.data[60].Class = XIAAOSI_outerr_class;
 /* line 143: */
RFAAELA.data[60].Text = JKAAELA;
RFAAELA.data[61].Number = 62;
RFAAELA.data[61].Class = XIAAOSI_outerr_class;
 /* line 144: */
RFAAELA.data[61].Text = LKAAELA;
RFAAELA.data[62].Number = 63;
RFAAELA.data[62].Class = XIAAOSI_outerr_class;
 /* line 145: */
RFAAELA.data[62].Text = NKAAELA;
RFAAELA.data[63].Number = 64;
RFAAELA.data[63].Class = XIAAOSI_outerr_class;
 /* line 146: */
RFAAELA.data[63].Text = PKAAELA;
RFAAELA.data[64].Number = 65;
RFAAELA.data[64].Class = XIAAOSI_outerr_class;
 /* line 147: */
RFAAELA.data[64].Text = RKAAELA;
RFAAELA.data[65].Number = 66;
RFAAELA.data[65].Class = XIAAOSI_outerr_class;
 /* line 148: */
RFAAELA.data[65].Text = TKAAELA;
RFAAELA.data[66].Number = 67;
RFAAELA.data[66].Class = XIAAOSI_outerr_class;
 /* line 149: */
RFAAELA.data[66].Text = VKAAELA;
RFAAELA.data[67].Number = 68;
RFAAELA.data[67].Class = XIAAOSI_outerr_class;
 /* line 150: */
RFAAELA.data[67].Text = XKAAELA;
RFAAELA.data[68].Number = 69;
RFAAELA.data[68].Class = XIAAOSI_outerr_class;
 /* line 151: */
RFAAELA.data[68].Text = ZKAAELA;
RFAAELA.data[69].Number = 70;
 /* line 152: */
RFAAELA.data[69].Class = XIAAOSI_outerr_class;
 /* line 153: */
RFAAELA.data[69].Text = BLAAELA;
RFAAELA.data[70].Number = 71;
 /* line 154: */
RFAAELA.data[70].Class = XIAAOSI_outerr_class;
 /* line 155: */
RFAAELA.data[70].Text = DLAAELA;
RFAAELA.data[71].Number = 72;
RFAAELA.data[71].Class = XIAAOSI_outerr_class;
 /* line 156: */
RFAAELA.data[71].Text = FLAAELA;
RFAAELA.data[72].Number = 73;
 /* line 157: */
RFAAELA.data[72].Class = XIAAOSI_outerr_class;
 /* line 158: */
RFAAELA.data[72].Text = HLAAELA;
RFAAELA.data[73].Number = 74;
 /* line 159: */
RFAAELA.data[73].Class = XIAAOSI_outerr_class;
 /* line 160: */
RFAAELA.data[73].Text = JLAAELA;
RFAAELA.data[74].Number = 75;
 /* line 161: */
RFAAELA.data[74].Class = XIAAOSI_outerr_class;
 /* line 162: */
RFAAELA.data[74].Text = LLAAELA;
RFAAELA.data[75].Number = 76;
 /* line 163: */
RFAAELA.data[75].Class = XIAAOSI_outerr_class;
 /* line 164: */
RFAAELA.data[75].Text = NLAAELA;
RFAAELA.data[76].Number = 77;
RFAAELA.data[76].Class = XIAAOSI_outerr_class;
 /* line 165: */
RFAAELA.data[76].Text = PLAAELA;
RFAAELA.data[77].Number = 78;
RFAAELA.data[77].Class = XIAAOSI_outerr_class;
 /* line 166: */
RFAAELA.data[77].Text = RLAAELA;
RFAAELA.data[78].Number = 79;
 /* line 167: */
RFAAELA.data[78].Class = XIAAOSI_outerr_class;
 /* line 168: */
RFAAELA.data[78].Text = TLAAELA;
RFAAELA.data[79].Number = 80;
 /* line 169: */
RFAAELA.data[79].Class = XIAAOSI_outerr_class;
 /* line 170: */
RFAAELA.data[79].Text = VLAAELA;
RFAAELA.data[80].Number = 81;
RFAAELA.data[80].Class = XIAAOSI_outerr_class;
 /* line 171: */
RFAAELA.data[80].Text = XLAAELA;
RFAAELA.data[81].Number = 82;
RFAAELA.data[81].Class = XIAAOSI_outerr_class;
 /* line 172: */
RFAAELA.data[81].Text = ZLAAELA;
RFAAELA.data[82].Number = 83;
RFAAELA.data[82].Class = XIAAOSI_outerr_class;
 /* line 173: */
RFAAELA.data[82].Text = BMAAELA;
RFAAELA.data[83].Number = 84;
RFAAELA.data[83].Class = XIAAOSI_outerr_class;
 /* line 174: */
RFAAELA.data[83].Text = DMAAELA;
RFAAELA.data[84].Number = 85;
RFAAELA.data[84].Class = XIAAOSI_outerr_class;
 /* line 175: */
RFAAELA.data[84].Text = FMAAELA;
RFAAELA.data[85].Number = 86;
 /* line 176: */
RFAAELA.data[85].Class = XIAAOSI_outerr_class;
 /* line 177: */
RFAAELA.data[85].Text = HMAAELA;
RFAAELA.data[86].Number = 87;
RFAAELA.data[86].Class = XIAAOSI_outerr_class;
 /* line 178: */
RFAAELA.data[86].Text = JMAAELA;
RFAAELA.data[87].Number = 88;
RFAAELA.data[87].Class = XIAAOSI_outerr_class;
 /* line 179: */
RFAAELA.data[87].Text = LMAAELA;
RFAAELA.data[88].Number = 89;
RFAAELA.data[88].Class = XIAAOSI_outerr_class;
 /* line 180: */
RFAAELA.data[88].Text = NMAAELA;
RFAAELA.data[89].Number = 90;
RFAAELA.data[89].Class = XIAAOSI_outerr_class;
 /* line 181: */
RFAAELA.data[89].Text = PMAAELA;
RFAAELA.data[90].Number = 91;
RFAAELA.data[90].Class = XIAAOSI_outerr_class;
 /* line 182: */
RFAAELA.data[90].Text = RMAAELA;
RFAAELA.data[91].Number = 92;
RFAAELA.data[91].Class = XIAAOSI_outerr_class;
 /* line 183: */
RFAAELA.data[91].Text = TMAAELA;
RFAAELA.data[92].Number = 93;
RFAAELA.data[92].Class = XIAAOSI_outerr_class;
 /* line 184: */
RFAAELA.data[92].Text = VMAAELA;
RFAAELA.data[93].Number = 94;
RFAAELA.data[93].Class = XIAAOSI_outerr_class;
 /* line 185: */
RFAAELA.data[93].Text = XMAAELA;
RFAAELA.data[94].Number = 95;
 /* line 186: */
RFAAELA.data[94].Class = XIAAOSI_outerr_class;
 /* line 187: */
RFAAELA.data[94].Text = ZMAAELA;
RFAAELA.data[95].Number = 96;
 /* line 188: */
RFAAELA.data[95].Class = XIAAOSI_outerr_class;
 /* line 189: */
RFAAELA.data[95].Text = BNAAELA;
RFAAELA.data[96].Number = 97;
RFAAELA.data[96].Class = XIAAOSI_outerr_class;
 /* line 190: */
RFAAELA.data[96].Text = DNAAELA;
RFAAELA.data[97].Number = 98;
RFAAELA.data[97].Class = XIAAOSI_outerr_class;
 /* line 191: */
RFAAELA.data[97].Text = FNAAELA;
RFAAELA.data[98].Number = 99;
RFAAELA.data[98].Class = XIAAOSI_outerr_class;
 /* line 192: */
RFAAELA.data[98].Text = HNAAELA;
RFAAELA.data[99].Number = 100;
RFAAELA.data[99].Class = XIAAOSI_outerr_class;
 /* line 193: */
RFAAELA.data[99].Text = JNAAELA;
RFAAELA.data[100].Number = 101;
RFAAELA.data[100].Class = XIAAOSI_outerr_class;
 /* line 194: */
RFAAELA.data[100].Text = LNAAELA;
RFAAELA.data[101].Number = 102;
RFAAELA.data[101].Class = XIAAOSI_outerr_class;
 /* line 195: */
RFAAELA.data[101].Text = NNAAELA;
RFAAELA.data[102].Number = 103;
RFAAELA.data[102].Class = XIAAOSI_outerr_class;
 /* line 196: */
RFAAELA.data[102].Text = PNAAELA;
RFAAELA.data[103].Number = 104;
 /* line 197: */
RFAAELA.data[103].Class = XIAAOSI_outerr_class;
 /* line 198: */
RFAAELA.data[103].Text = RNAAELA;
RFAAELA.data[104].Number = 105;
RFAAELA.data[104].Class = XIAAOSI_outerr_class;
 /* line 199: */
RFAAELA.data[104].Text = TNAAELA;
RFAAELA.data[105].Number = 106;
RFAAELA.data[105].Class = XIAAOSI_outerr_class;
 /* line 200: */
RFAAELA.data[105].Text = VNAAELA;
RFAAELA.data[106].Number = 107;
 /* line 201: */
RFAAELA.data[106].Class = XIAAOSI_outerr_class;
 /* line 202: */
RFAAELA.data[106].Text = XNAAELA;
RFAAELA.data[107].Number = 108;
 /* line 203: */
RFAAELA.data[107].Class = XIAAOSI_outerr_class;
 /* line 204: */
RFAAELA.data[107].Text = ZNAAELA;
RFAAELA.data[108].Number = 109;
RFAAELA.data[108].Class = XIAAOSI_outerr_class;
 /* line 205: */
RFAAELA.data[108].Text = BOAAELA;
RFAAELA.data[109].Number = 110;
 /* line 206: */
RFAAELA.data[109].Class = XIAAOSI_outerr_class;
 /* line 207: */
RFAAELA.data[109].Text = DOAAELA;
RFAAELA.data[110].Number = 111;
RFAAELA.data[110].Class = XIAAOSI_outerr_class;
 /* line 208: */
RFAAELA.data[110].Text = FOAAELA;
RFAAELA.data[111].Number = 112;
RFAAELA.data[111].Class = XIAAOSI_outerr_class;
 /* line 209: */
RFAAELA.data[111].Text = HOAAELA;
RFAAELA.data[112].Number = 113;
RFAAELA.data[112].Class = XIAAOSI_outerr_class;
 /* line 210: */
RFAAELA.data[112].Text = JOAAELA;
RFAAELA.data[113].Number = 114;
RFAAELA.data[113].Class = XIAAOSI_outerr_class;
 /* line 211: */
RFAAELA.data[113].Text = LOAAELA;
RFAAELA.data[114].Number = 115;
RFAAELA.data[114].Class = XIAAOSI_outerr_class;
 /* line 212: */
RFAAELA.data[114].Text = NOAAELA;
RFAAELA.data[115].Number = 116;
RFAAELA.data[115].Class = XIAAOSI_outerr_class;
 /* line 213: */
RFAAELA.data[115].Text = POAAELA;
RFAAELA.data[116].Number = 117;
 /* line 214: */
RFAAELA.data[116].Class = XIAAOSI_outerr_class;
 /* line 215: */
RFAAELA.data[116].Text = ROAAELA;
RFAAELA.data[117].Number = 118;
RFAAELA.data[117].Class = XIAAOSI_outerr_class;
 /* line 216: */
RFAAELA.data[117].Text = TOAAELA;
RFAAELA.data[118].Number = 119;
RFAAELA.data[118].Class = XIAAOSI_outerr_class;
 /* line 217: */
RFAAELA.data[118].Text = VOAAELA;
RFAAELA.data[119].Number = 120;
RFAAELA.data[119].Class = XIAAOSI_outerr_class;
 /* line 218: */
RFAAELA.data[119].Text = XOAAELA;
RFAAELA.data[120].Number = 121;
RFAAELA.data[120].Class = XIAAOSI_outerr_class;
 /* line 219: */
RFAAELA.data[120].Text = ZOAAELA;
RFAAELA.data[121].Number = 122;
RFAAELA.data[121].Class = XIAAOSI_outerr_class;
 /* line 220: */
RFAAELA.data[121].Text = BPAAELA;
RFAAELA.data[122].Number = 123;
RFAAELA.data[122].Class = XIAAOSI_outerr_class;
 /* line 221: */
RFAAELA.data[122].Text = DPAAELA;
RFAAELA.data[123].Number = 124;
RFAAELA.data[123].Class = XIAAOSI_outerr_class;
 /* line 222: */
RFAAELA.data[123].Text = FPAAELA;
RFAAELA.data[124].Number = 125;
 /* line 223: */
RFAAELA.data[124].Class = XIAAOSI_outerr_class;
 /* line 224: */
RFAAELA.data[124].Text = HPAAELA;
RFAAELA.data[125].Number = 126;
RFAAELA.data[125].Class = XIAAOSI_outerr_class;
 /* line 225: */
RFAAELA.data[125].Text = JPAAELA;
RFAAELA.data[126].Number = 127;
RFAAELA.data[126].Class = XIAAOSI_outerr_class;
 /* line 226: */
RFAAELA.data[126].Text = LPAAELA;
RFAAELA.data[127].Number = 128;
 /* line 227: */
RFAAELA.data[127].Class = XIAAOSI_outerr_class;
 /* line 228: */
RFAAELA.data[127].Text = NPAAELA;
RFAAELA.data[128].Number = 129;
 /* line 229: */
RFAAELA.data[128].Class = XIAAOSI_outerr_class;
 /* line 230: */
RFAAELA.data[128].Text = PPAAELA;
RFAAELA.data[129].Number = 130;
RFAAELA.data[129].Class = XIAAOSI_outerr_class;
 /* line 231: */
RFAAELA.data[129].Text = RPAAELA;
RFAAELA.data[130].Number = 131;
RFAAELA.data[130].Class = XIAAOSI_outerr_class;
 /* line 232: */
RFAAELA.data[130].Text = TPAAELA;
RFAAELA.data[131].Number = 132;
RFAAELA.data[131].Class = XIAAOSI_outerr_class;
 /* line 233: */
RFAAELA.data[131].Text = VPAAELA;
RFAAELA.data[132].Number = 133;
RFAAELA.data[132].Class = XIAAOSI_outerr_class;
 /* line 234: */
RFAAELA.data[132].Text = XPAAELA;
RFAAELA.data[133].Number = 134;
RFAAELA.data[133].Class = XIAAOSI_outerr_class;
 /* line 235: */
RFAAELA.data[133].Text = ZPAAELA;
RFAAELA.data[134].Number = 135;
RFAAELA.data[134].Class = XIAAOSI_outerr_class;
 /* line 236: */
RFAAELA.data[134].Text = BQAAELA;
RFAAELA.data[135].Number = 136;
RFAAELA.data[135].Class = XIAAOSI_outerr_class;
 /* line 237: */
RFAAELA.data[135].Text = DQAAELA;
RFAAELA.data[136].Number = 137;
RFAAELA.data[136].Class = XIAAOSI_outerr_class;
 /* line 238: */
RFAAELA.data[136].Text = FQAAELA;
RFAAELA.data[137].Number = 138;
 /* line 239: */
RFAAELA.data[137].Class = XIAAOSI_outerr_class;
 /* line 240: */
RFAAELA.data[137].Text = HQAAELA;
RFAAELA.data[138].Number = 139;
 /* line 241: */
RFAAELA.data[138].Class = XIAAOSI_outerr_class;
 /* line 242: */
RFAAELA.data[138].Text = JQAAELA;
RFAAELA.data[139].Number = 140;
RFAAELA.data[139].Class = XIAAOSI_outerr_class;
 /* line 243: */
RFAAELA.data[139].Text = LQAAELA;
RFAAELA.data[140].Number = 141;
RFAAELA.data[140].Class = XIAAOSI_outerr_class;
 /* line 244: */
RFAAELA.data[140].Text = NQAAELA;
RFAAELA.data[141].Number = 142;
RFAAELA.data[141].Class = XIAAOSI_outerr_class;
 /* line 245: */
RFAAELA.data[141].Text = PQAAELA;
RFAAELA.data[142].Number = 143;
RFAAELA.data[142].Class = XIAAOSI_outerr_class;
 /* line 246: */
RFAAELA.data[142].Text = RQAAELA;
RFAAELA.data[143].Number = 144;
RFAAELA.data[143].Class = XIAAOSI_outerr_class;
 /* line 247: */
RFAAELA.data[143].Text = TQAAELA;
RFAAELA.data[144].Number = 145;
RFAAELA.data[144].Class = XIAAOSI_outerr_class;
 /* line 248: */
RFAAELA.data[144].Text = VQAAELA;
RFAAELA.data[145].Number = 146;
RFAAELA.data[145].Class = XIAAOSI_outerr_class;
 /* line 249: */
RFAAELA.data[145].Text = XQAAELA;
RFAAELA.data[146].Number = 147;
RFAAELA.data[146].Class = XIAAOSI_outerr_class;
 /* line 250: */
RFAAELA.data[146].Text = ZQAAELA;
RFAAELA.data[147].Number = 148;
RFAAELA.data[147].Class = XIAAOSI_outerr_class;
 /* line 251: */
RFAAELA.data[147].Text = BRAAELA;
RFAAELA.data[148].Number = 149;
 /* line 252: */
RFAAELA.data[148].Class = XIAAOSI_outerr_class;
 /* line 253: */
RFAAELA.data[148].Text = DRAAELA;
RFAAELA.data[149].Number = 150;
RFAAELA.data[149].Class = XIAAOSI_outerr_class;
 /* line 254: */
RFAAELA.data[149].Text = FRAAELA;
RFAAELA.data[150].Number = 151;
RFAAELA.data[150].Class = XIAAOSI_outerr_class;
 /* line 255: */
RFAAELA.data[150].Text = HRAAELA;
RFAAELA.data[151].Number = 152;
RFAAELA.data[151].Class = XIAAOSI_outerr_class;
 /* line 256: */
RFAAELA.data[151].Text = JRAAELA;
RFAAELA.data[152].Number = 153;
 /* line 257: */
RFAAELA.data[152].Class = XIAAOSI_outerr_class;
 /* line 258: */
RFAAELA.data[152].Text = LRAAELA;
RFAAELA.data[153].Number = 154;
 /* line 259: */
RFAAELA.data[153].Class = XIAAOSI_outerr_class;
 /* line 260: */
RFAAELA.data[153].Text = NRAAELA;
RFAAELA.data[154].Number = 155;
RFAAELA.data[154].Class = XIAAOSI_outerr_class;
 /* line 261: */
RFAAELA.data[154].Text = PRAAELA;
RFAAELA.data[155].Number = 156;
RFAAELA.data[155].Class = XIAAOSI_outerr_class;
 /* line 262: */
RFAAELA.data[155].Text = RRAAELA;
RFAAELA.data[156].Number = 157;
RFAAELA.data[156].Class = XIAAOSI_outerr_class;
 /* line 263: */
RFAAELA.data[156].Text = TRAAELA;
RFAAELA.data[157].Number = 158;
RFAAELA.data[157].Class = XIAAOSI_outerr_class;
 /* line 264: */
RFAAELA.data[157].Text = VRAAELA;
RFAAELA.data[158].Number = 159;
 /* line 265: */
RFAAELA.data[158].Class = XIAAOSI_outerr_class;
 /* line 266: */
RFAAELA.data[158].Text = XRAAELA;
RFAAELA.data[159].Number = 160;
 /* line 267: */
RFAAELA.data[159].Class = XIAAOSI_outerr_class;
 /* line 268: */
RFAAELA.data[159].Text = ZRAAELA;
RFAAELA.data[160].Number = 161;
RFAAELA.data[160].Class = XIAAOSI_outerr_class;
 /* line 269: */
RFAAELA.data[160].Text = BSAAELA;
RFAAELA.data[161].Number = 162;
 /* line 270: */
RFAAELA.data[161].Class = XIAAOSI_outerr_class;
 /* line 271: */
RFAAELA.data[161].Text = DSAAELA;
RFAAELA.data[162].Number = 163;
RFAAELA.data[162].Class = XIAAOSI_outerr_class;
 /* line 272: */
RFAAELA.data[162].Text = FSAAELA;
RFAAELA.data[163].Number = 164;
 /* line 273: */
RFAAELA.data[163].Class = XIAAOSI_outerr_class;
 /* line 274: */
RFAAELA.data[163].Text = HSAAELA;
RFAAELA.data[164].Number = 165;
RFAAELA.data[164].Class = XIAAOSI_outerr_class;
 /* line 275: */
RFAAELA.data[164].Text = JSAAELA;
RFAAELA.data[165].Number = 166;
 /* line 276: */
RFAAELA.data[165].Class = XIAAOSI_outerr_class;
 /* line 277: */
RFAAELA.data[165].Text = LSAAELA;
RFAAELA.data[166].Number = 167;
 /* line 278: */
RFAAELA.data[166].Class = XIAAOSI_outerr_class;
 /* line 279: */
RFAAELA.data[166].Text = NSAAELA;
RFAAELA.data[167].Number = 168;
 /* line 280: */
RFAAELA.data[167].Class = XIAAOSI_outerr_class;
 /* line 281: */
RFAAELA.data[167].Text = PSAAELA;
RFAAELA.data[168].Number = 169;
 /* line 282: */
RFAAELA.data[168].Class = XIAAOSI_outerr_class;
 /* line 283: */
RFAAELA.data[168].Text = RSAAELA;
RFAAELA.data[169].Number = 170;
RFAAELA.data[169].Class = XIAAOSI_outerr_class;
 /* line 284: */
RFAAELA.data[169].Text = TSAAELA;
RFAAELA.data[170].Number = 171;
RFAAELA.data[170].Class = XIAAOSI_outerr_class;
 /* line 285: */
RFAAELA.data[170].Text = VSAAELA;
RFAAELA.data[171].Number = 172;
RFAAELA.data[171].Class = XIAAOSI_outerr_class;
 /* line 286: */
RFAAELA.data[171].Text = XSAAELA;
RFAAELA.data[172].Number = 173;
RFAAELA.data[172].Class = XIAAOSI_outerr_class;
 /* line 287: */
RFAAELA.data[172].Text = ZSAAELA;
RFAAELA.data[173].Number = 174;
RFAAELA.data[173].Class = XIAAOSI_outerr_class;
 /* line 288: */
RFAAELA.data[173].Text = BTAAELA;
RFAAELA.data[174].Number = 175;
RFAAELA.data[174].Class = XIAAOSI_outerr_class;
 /* line 289: */
RFAAELA.data[174].Text = DTAAELA;
RFAAELA.data[175].Number = 176;
RFAAELA.data[175].Class = XIAAOSI_outerr_class;
 /* line 290: */
RFAAELA.data[175].Text = FTAAELA;
RFAAELA.data[176].Number = 177;
RFAAELA.data[176].Class = XIAAOSI_outerr_class;
 /* line 291: */
RFAAELA.data[176].Text = HTAAELA;
RFAAELA.data[177].Number = 178;
RFAAELA.data[177].Class = XIAAOSI_outerr_class;
 /* line 292: */
RFAAELA.data[177].Text = JTAAELA;
RFAAELA.data[178].Number = 179;
RFAAELA.data[178].Class = XIAAOSI_outerr_class;
 /* line 293: */
RFAAELA.data[178].Text = LTAAELA;
RFAAELA.data[179].Number = 180;
RFAAELA.data[179].Class = XIAAOSI_outerr_class;
 /* line 294: */
RFAAELA.data[179].Text = NTAAELA;
RFAAELA.data[180].Number = 181;
RFAAELA.data[180].Class = XIAAOSI_outerr_class;
 /* line 295: */
RFAAELA.data[180].Text = PTAAELA;
RFAAELA.data[181].Number = 182;
 /* line 296: */
RFAAELA.data[181].Class = XIAAOSI_outerr_class;
 /* line 297: */
RFAAELA.data[181].Text = RTAAELA;
RFAAELA.data[182].Number = 183;
RFAAELA.data[182].Class = XIAAOSI_outerr_class;
 /* line 298: */
RFAAELA.data[182].Text = TTAAELA;
RFAAELA.data[183].Number = 184;
 /* line 299: */
RFAAELA.data[183].Class = XIAAOSI_outerr_class;
 /* line 300: */
RFAAELA.data[183].Text = VTAAELA;
RFAAELA.data[184].Number = 185;
 /* line 301: */
RFAAELA.data[184].Class = XIAAOSI_outerr_class;
 /* line 302: */
RFAAELA.data[184].Text = XTAAELA;
RFAAELA.data[185].Number = 186;
RFAAELA.data[185].Class = XIAAOSI_outerr_class;
 /* line 303: */
RFAAELA.data[185].Text = ZTAAELA;
RFAAELA.data[186].Number = 187;
RFAAELA.data[186].Class = XIAAOSI_outerr_class;
 /* line 304: */
RFAAELA.data[186].Text = BUAAELA;
RFAAELA.data[187].Number = 188;
RFAAELA.data[187].Class = XIAAOSI_outerr_class;
 /* line 305: */
RFAAELA.data[187].Text = DUAAELA;
RFAAELA.data[188].Number = 189;
RFAAELA.data[188].Class = XIAAOSI_outerr_class;
 /* line 306: */
RFAAELA.data[188].Text = FUAAELA;
RFAAELA.data[189].Number = 190;
 /* line 307: */
RFAAELA.data[189].Class = XIAAOSI_outerr_class;
 /* line 308: */
RFAAELA.data[189].Text = HUAAELA;
RFAAELA.data[190].Number = 191;
RFAAELA.data[190].Class = XIAAOSI_outerr_class;
 /* line 309: */
RFAAELA.data[190].Text = JUAAELA;
RFAAELA.data[191].Number = 192;
RFAAELA.data[191].Class = XIAAOSI_outerr_class;
 /* line 310: */
RFAAELA.data[191].Text = LUAAELA;
RFAAELA.data[192].Number = 193;
RFAAELA.data[192].Class = XIAAOSI_outerr_class;
 /* line 311: */
RFAAELA.data[192].Text = NUAAELA;
RFAAELA.data[193].Number = 194;
RFAAELA.data[193].Class = XIAAOSI_outerr_class;
 /* line 312: */
RFAAELA.data[193].Text = PUAAELA;
RFAAELA.data[194].Number = 195;
RFAAELA.data[194].Class = XIAAOSI_outerr_class;
 /* line 313: */
RFAAELA.data[194].Text = RUAAELA;
RFAAELA.data[195].Number = 196;
RFAAELA.data[195].Class = XIAAOSI_outerr_class;
 /* line 314: */
RFAAELA.data[195].Text = TUAAELA;
RFAAELA.data[196].Number = 197;
RFAAELA.data[196].Class = XIAAOSI_outerr_class;
 /* line 315: */
RFAAELA.data[196].Text = VUAAELA;
RFAAELA.data[197].Number = 198;
RFAAELA.data[197].Class = XIAAOSI_outerr_class;
 /* line 316: */
RFAAELA.data[197].Text = XUAAELA;
RFAAELA.data[198].Number = 199;
RFAAELA.data[198].Class = XIAAOSI_outerr_class;
 /* line 317: */
RFAAELA.data[198].Text = ZUAAELA;
RFAAELA.data[199].Number = 200;
RFAAELA.data[199].Class = XIAAOSI_outerr_class;
 /* line 318: */
RFAAELA.data[199].Text = BVAAELA;
RFAAELA.data[200].Number = 201;
RFAAELA.data[200].Class = XIAAOSI_outerr_class;
 /* line 319: */
RFAAELA.data[200].Text = DVAAELA;
RFAAELA.data[201].Number = 202;
RFAAELA.data[201].Class = XIAAOSI_outerr_class;
 /* line 320: */
RFAAELA.data[201].Text = FVAAELA;
RFAAELA.data[202].Number = 203;
RFAAELA.data[202].Class = XIAAOSI_outerr_class;
 /* line 321: */
RFAAELA.data[202].Text = HVAAELA;
RFAAELA.data[203].Number = 204;
RFAAELA.data[203].Class = XIAAOSI_outerr_class;
 /* line 322: */
RFAAELA.data[203].Text = JVAAELA;
RFAAELA.data[204].Number = 205;
RFAAELA.data[204].Class = XIAAOSI_outerr_class;
 /* line 323: */
RFAAELA.data[204].Text = LVAAELA;
RFAAELA.data[205].Number = 206;
 /* line 324: */
RFAAELA.data[205].Class = XIAAOSI_outerr_class;
 /* line 325: */
RFAAELA.data[205].Text = NVAAELA;
RFAAELA.data[206].Number = 207;
RFAAELA.data[206].Class = XIAAOSI_outerr_class;
 /* line 326: */
RFAAELA.data[206].Text = PVAAELA;
RFAAELA.data[207].Number = 208;
RFAAELA.data[207].Class = XIAAOSI_outerr_class;
 /* line 327: */
RFAAELA.data[207].Text = RVAAELA;
RFAAELA.data[208].Number = 209;
RFAAELA.data[208].Class = XIAAOSI_outerr_class;
 /* line 328: */
RFAAELA.data[208].Text = TVAAELA;
RFAAELA.data[209].Number = 210;
RFAAELA.data[209].Class = XIAAOSI_outerr_class;
 /* line 329: */
RFAAELA.data[209].Text = VVAAELA;
RFAAELA.data[210].Number = 211;
RFAAELA.data[210].Class = XIAAOSI_outerr_class;
 /* line 330: */
RFAAELA.data[210].Text = XVAAELA;
RFAAELA.data[211].Number = 212;
RFAAELA.data[211].Class = XIAAOSI_outerr_class;
 /* line 331: */
RFAAELA.data[211].Text = ZVAAELA;
RFAAELA.data[212].Number = 213;
RFAAELA.data[212].Class = XIAAOSI_outerr_class;
 /* line 332: */
RFAAELA.data[212].Text = BWAAELA;
RFAAELA.data[213].Number = 214;
RFAAELA.data[213].Class = XIAAOSI_outerr_class;
 /* line 333: */
RFAAELA.data[213].Text = DWAAELA;
RFAAELA.data[214].Number = 215;
RFAAELA.data[214].Class = XIAAOSI_outerr_class;
 /* line 334: */
RFAAELA.data[214].Text = FWAAELA;
RFAAELA.data[215].Number = 216;
RFAAELA.data[215].Class = XIAAOSI_outerr_class;
 /* line 335: */
RFAAELA.data[215].Text = HWAAELA;
RFAAELA.data[216].Number = 217;
RFAAELA.data[216].Class = XIAAOSI_outerr_class;
 /* line 336: */
RFAAELA.data[216].Text = JWAAELA;
RFAAELA.data[217].Number = 218;
 /* line 337: */
RFAAELA.data[217].Class = XIAAOSI_outerr_class;
 /* line 338: */
RFAAELA.data[217].Text = LWAAELA;
RFAAELA.data[218].Number = 219;
 /* line 339: */
RFAAELA.data[218].Class = XIAAOSI_outerr_class;
 /* line 340: */
RFAAELA.data[218].Text = NWAAELA;
RFAAELA.data[219].Number = 220;
 /* line 341: */
RFAAELA.data[219].Class = XIAAOSI_outerr_class;
 /* line 342: */
RFAAELA.data[219].Text = PWAAELA;
RFAAELA.data[220].Number = 221;
 /* line 343: */
RFAAELA.data[220].Class = XIAAOSI_outerr_class;
 /* line 344: */
RFAAELA.data[220].Text = RWAAELA;
RFAAELA.data[221].Number = 222;
 /* line 345: */
RFAAELA.data[221].Class = XIAAOSI_outerr_class;
 /* line 346: */
RFAAELA.data[221].Text = TWAAELA;
RFAAELA.data[222].Number = 223;
RFAAELA.data[222].Class = XIAAOSI_outerr_class;
 /* line 347: */
RFAAELA.data[222].Text = VWAAELA;
RFAAELA.data[223].Number = 224;
 /* line 348: */
RFAAELA.data[223].Class = XIAAOSI_outerr_class;
 /* line 349: */
RFAAELA.data[223].Text = XWAAELA;
RFAAELA.data[224].Number = 225;
 /* line 350: */
RFAAELA.data[224].Class = XIAAOSI_outerr_class;
 /* line 351: */
 /* line 352: */
RFAAELA.data[224].Text = ZWAAELA;
RFAAELA.data[225].Number = 226;
 /* line 353: */
RFAAELA.data[225].Class = XIAAOSI_outerr_class;
 /* line 354: */
RFAAELA.data[225].Text = BXAAELA;
RFAAELA.data[226].Number = 227;
 /* line 355: */
RFAAELA.data[226].Class = XIAAOSI_outerr_class;
 /* line 356: */
RFAAELA.data[226].Text = DXAAELA;
RFAAELA.data[227].Number = 228;
 /* line 357: */
RFAAELA.data[227].Class = XIAAOSI_outerr_class;
 /* line 358: */
RFAAELA.data[227].Text = FXAAELA;
RFAAELA.data[228].Number = 229;
RFAAELA.data[228].Class = XIAAOSI_outerr_class;
 /* line 360: */
RFAAELA.data[228].Text = HXAAELA;
RFAAELA.data[229].Number = 230;
RFAAELA.data[229].Class = XIAAOSI_outerr_class;
 /* line 366: */
RFAAELA.data[229].Text = JXAAELA;
RFAAELA.data[230].Number = 231;
RFAAELA.data[230].Class = XIAAOSI_outerr_class;
 /* line 367: */
RFAAELA.data[230].Text = A_HVEC(KXAAELA,'*',A68_CHAR );
RFAAELA.data[231].Number = 232;
RFAAELA.data[231].Class = XIAAOSI_outerr_class;
 /* line 368: */
RFAAELA.data[231].Text = A_HVEC(LXAAELA,'*',A68_CHAR );
RFAAELA.data[232].Number = 233;
RFAAELA.data[232].Class = XIAAOSI_outerr_class;
 /* line 369: */
RFAAELA.data[232].Text = A_HVEC(MXAAELA,'*',A68_CHAR );
RFAAELA.data[233].Number = 234;
RFAAELA.data[233].Class = XIAAOSI_outerr_class;
 /* line 373: */
RFAAELA.data[233].Text = OXAAELA;
RFAAELA.data[234].Number = 235;
RFAAELA.data[234].Class = XIAAOSI_outerr_class;
 /* line 374: */
RFAAELA.data[234].Text = QXAAELA;
RFAAELA.data[235].Number = 236;
RFAAELA.data[235].Class = XIAAOSI_outerr_class;
 /* line 375: */
RFAAELA.data[235].Text = SXAAELA;
RFAAELA.data[236].Number = 237;
RFAAELA.data[236].Class = XIAAOSI_outerr_class;
 /* line 376: */
RFAAELA.data[236].Text = UXAAELA;
RFAAELA.data[237].Number = 238;
RFAAELA.data[237].Class = XIAAOSI_outerr_class;
 /* line 378: */
RFAAELA.data[237].Text = WXAAELA;
RFAAELA.data[238].Number = 239;
RFAAELA.data[238].Class = XIAAOSI_outerr_class;
 /* line 379: */
RFAAELA.data[238].Text = YXAAELA;
RFAAELA.data[239].Number = 240;
RFAAELA.data[239].Class = XIAAOSI_outerr_class;
 /* line 380: */
RFAAELA.data[239].Text = AYAAELA;
RFAAELA.data[240].Number = 241;
RFAAELA.data[240].Class = XIAAOSI_outerr_class;
 /* line 387: */
RFAAELA.data[240].Text = CYAAELA;
RFAAELA.data[241].Number = 242;
RFAAELA.data[241].Class = BJAAOSI_outpart_class;
 /* line 388: */
RFAAELA.data[241].Text = EYAAELA;
RFAAELA.data[242].Number = 243;
RFAAELA.data[242].Class = BJAAOSI_outpart_class;
 /* line 389: */
RFAAELA.data[242].Text = GYAAELA;
RFAAELA.data[243].Number = 244;
RFAAELA.data[243].Class = BJAAOSI_outpart_class;
 /* line 390: */
RFAAELA.data[243].Text = A_HVEC(HYAAELA,'*',A68_CHAR );
RFAAELA.data[244].Number = 245;
RFAAELA.data[244].Class = ZIAAOSI_output_class;
 /* line 392: */
RFAAELA.data[244].Text = JYAAELA;
RFAAELA.data[245].Number = 246;
RFAAELA.data[245].Class = XIAAOSI_outerr_class;
 /* line 393: */
RFAAELA.data[245].Text = LYAAELA;
RFAAELA.data[246].Number = 247;
RFAAELA.data[246].Class = XIAAOSI_outerr_class;
 /* line 394: */
RFAAELA.data[246].Text = NYAAELA;
RFAAELA.data[247].Number = 248;
RFAAELA.data[247].Class = XIAAOSI_outerr_class;
 /* line 395: */
RFAAELA.data[247].Text = PYAAELA;
RFAAELA.data[248].Number = 249;
 /* line 396: */
RFAAELA.data[248].Class = XIAAOSI_outerr_class;
 /* line 397: */
RFAAELA.data[248].Text = RYAAELA;
RFAAELA.data[249].Number = 250;
RFAAELA.data[249].Class = YIAAOSI_log_class;
 /* line 400: */
RFAAELA.data[249].Text = TYAAELA;
IFAAELA.Setup = A_HISVEC(UYAAELA,RFAAELA,250,A68_100 );
VYAAELA_comp_facility = IFAAELA;
 /* line 402: */
 /* line 403: */
 /* line 405: */
 /* line 406: */
EZAAELA = VYAAELA_comp_facility.Messages ;
FZAAELA = EZAAELA.upb -1;
DZAAELA_message = EZAAELA.data;
for (;FZAAELA-- >= 0;
(DZAAELA_message++
) )
{
GZAAELA.Msgno.Number = 0;
GZAAELA.Msgno.Facility = (A68_93 *)A68_NIL;
GZAAELA.Msgno.Class = 0X0U;
GZAAELA.Text = A_VVAC(HZAAELA);
(*DZAAELA_message) = GZAAELA;
}
 /* line 409: */
 /* line 410: */
A_PROC_EXIT(DECS compmessages);
} 
#undef NL
/* end of translation of ./a68files/compmessages.a68 */
