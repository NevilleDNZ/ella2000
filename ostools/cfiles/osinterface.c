
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
/* UNAME:OCAAOST */
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
A_ISTRUCT(A68_CHAR ,16000000,A68t111);
typedef struct A68t111  A68_111 ;    /* STRUCT 16000000 CHAR */
A_ISTRUCT(struct A68t111 *,16000000,A68t112);
typedef struct A68t112  A68_112 ;    /* STRUCT 16000000 REF MODE111 */

A_PROCEDURE(A68_VOID ,A68t113,(struct A68t111 *,A68_VC *),(struct A68t111 *,A68_VC *,void *));
typedef struct A68t113  A68_113 ;    /* PROC(REF MODE111) REF MODE26 */

A_PROCEDURE(A68_CHAR *,A68t114,(A68_VC ),(A68_VC ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(MODE26) REF CHAR */

A_PROCEDURE(A68_INT *,A68t115,(struct A68t32 ),(struct A68t32 ,void *));
typedef struct A68t115  A68_115 ;    /* PROC(MODE32) REF INT */

A_PROCEDURE(A68_CHAR *,A68t116,(struct A68t111 *),(struct A68t111 *,void *));
typedef struct A68t116  A68_116 ;    /* PROC(REF MODE111) REF CHAR */

A_PROCEDURE(struct A68t111 *,A68t117,(A68_CHAR *),(A68_CHAR *,void *));
typedef struct A68t117  A68_117 ;    /* PROC(REF CHAR) REF MODE111 */

A_PROCEDURE(A68_VOID ,A68t118,(void),(void *));
typedef struct A68t118  A68_118 ;    /* PROC VOID */
struct A68t119{
A68_BITS * Cp;
struct A68t111 * Env;
};
typedef struct A68t119  A68_119 ;    /* STRUCT(REF BITS,REF MODE111)  */

A_PROCEDURE(struct A68t119 *,A68t120,(struct A68t118 *),(struct A68t118 *,void *));
typedef struct A68t120  A68_120 ;    /* PROC(REF MODE118) REF MODE119 */

A_PROCEDURE(A68_VOID ,A68t121,(struct A68t118 ,struct A68t119 *),(struct A68t118 ,struct A68t119 *,void *));
typedef struct A68t121  A68_121 ;    /* PROC(MODE118) MODE119 */

A_PROCEDURE(A68_VOID ,A68t122,(A68_INT ),(A68_INT ,void *));
typedef struct A68t122  A68_122 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t123,(struct A68t122 ,struct A68t119 *),(struct A68t122 ,struct A68t119 *,void *));
typedef struct A68t123  A68_123 ;    /* PROC(MODE122) MODE119 */

A_PROCEDURE(A68_VOID ,A68t124,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(MODE26) MODE26 */
struct A68t125{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t125  A68_125 ;    /* STRUCT(REF MODE26,REF BITS)  */

A_PROCEDURE(A68_BOOL ,A68t126,(struct A68t35 ,struct A68t35 ),(struct A68t35 ,struct A68t35 ,void *));
typedef struct A68t126  A68_126 ;    /* PROC(MODE35,MODE35) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t128);
typedef struct A68t128  A68_128 ;    /* STRUCT 4 CHAR */
struct A68t127{
struct A68t128  Access;
A_PAD_ISTRUCT(A68_128 ,PAD_24)
};
typedef struct A68t127  A68_127 ;    /* STRUCT(MODE128)  */

A_PROCEDURE(A68_VOID ,A68t129,(struct A68t125 *,A68_VC *),(struct A68t125 *,A68_VC *,void *));
typedef struct A68t129  A68_129 ;    /* PROC(REF MODE125) MODE26 */

A_PROCEDURE(struct A68t125 *,A68t130,(A68_VC ,struct A68t127 ,struct A68t97 ),(A68_VC ,struct A68t127 ,struct A68t97 ,void *));
typedef struct A68t130  A68_130 ;    /* PROC(MODE26,MODE127,MODE97) REF MODE125 */

A_PROCEDURE(A68_VOID ,A68t131,(struct A68t125 *,struct A68t97 ),(struct A68t125 *,struct A68t97 ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(REF MODE125,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t132,(struct A68t125 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *),(struct A68t125 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t132  A68_132 ;    /* PROC(REF MODE125,REF MODE26,REF INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t133,(struct A68t125 *,A68_VC ,struct A68t97 ,struct A68t35 *),(struct A68t125 *,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t133  A68_133 ;    /* PROC(REF MODE125,MODE26,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t134,(struct A68t125 *,A68_LINT ,struct A68t97 ,struct A68t35 *),(struct A68t125 *,A68_LINT ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t134  A68_134 ;    /* PROC(REF MODE125,LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t135,(struct A68t125 *,A68_LINT *,struct A68t97 ,struct A68t35 *),(struct A68t125 *,A68_LINT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t135  A68_135 ;    /* PROC(REF MODE125,REF LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t136,(struct A68t125 *,struct A68t97 ,struct A68t35 *),(struct A68t125 *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t136  A68_136 ;    /* PROC(REF MODE125,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t137,(A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t137  A68_137 ;    /* PROC(MODE26,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t138,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t138  A68_138 ;    /* PROC(MODE26,MODE26,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t139,(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t139  A68_139 ;    /* PROC(MODE26,MODE26,MODE97) MODE26 */
struct A68t140{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_25)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_26)
A68_SINT  Device;
A_PAD_SINT(PAD_27)
A68_SINT  Links;
A_PAD_SINT(PAD_28)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_29)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_30)
A68_LINT  Size;
A_PAD_LINT(PAD_31)
A68_LINT  Accessed;
A_PAD_LINT(PAD_32)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_33)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_34)
};
typedef struct A68t140  A68_140 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t142 ;

A_PROCEDURE(struct A68t140 *,A68t141,(struct A68t142 ,struct A68t97 ),(struct A68t142 ,struct A68t97 ,void *));
typedef struct A68t141  A68_141 ;    /* PROC(MODE142,MODE97) REF MODE140 */
struct A68t142 { A68_INT mode; union {
struct A68t125 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t142  A68_142 ;    /* UNION(REF MODE125,MODE26)  */

A_PROCEDURE(A68_BOOL ,A68t143,(struct A68t125 *),(struct A68t125 *,void *));
typedef struct A68t143  A68_143 ;    /* PROC(REF MODE125) BOOL */

A_PROCEDURE(A68_BITS *,A68t144,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t144  A68_144 ;    /* PROC(MODE26,MODE97) REF BITS */

A_PROCEDURE(A68_VOID ,A68t145,(A68_BITS *,struct A68t97 ),(A68_BITS *,struct A68t97 ,void *));
typedef struct A68t145  A68_145 ;    /* PROC(REF BITS,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t146,(A68_BITS *,struct A68t97 ,A68_VC *),(A68_BITS *,struct A68t97 ,A68_VC *,void *));
typedef struct A68t146  A68_146 ;    /* PROC(REF BITS,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t147,(A68_VC *),(A68_VC *,void *));
typedef struct A68t147  A68_147 ;    /* PROC MODE26 */

A_PROCEDURE(A68_LINT ,A68t148,(void),(void *));
typedef struct A68t148  A68_148 ;    /* PROC LONG INT */

A_PROCEDURE(A68_VOID ,A68t149,(A68_LINT ,A68_VC *),(A68_LINT ,A68_VC *,void *));
typedef struct A68t149  A68_149 ;    /* PROC(LONG INT) MODE26 */

A_PROCEDURE(A68_INT ,A68t150,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(MODE26,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t151,(void),(void *));
typedef struct A68t151  A68_151 ;    /* PROC INT */
struct A68t152{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t152  A68_152 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t153,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t152 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t152 *,void *));
typedef struct A68t153  A68_153 ;    /* PROC(MODE26,MODE26,MODE97) MODE152 */

A_PROCEDURE(A68_VOID ,A68t154,(struct A68t46 *),(struct A68t46 *,void *));
typedef struct A68t154  A68_154 ;    /* PROC MODE46 */

A_PROCEDURE(A68_VOID ,A68t155,(A68_VC ,struct A68t97 ,struct A68t46 *),(A68_VC ,struct A68t97 ,struct A68t46 *,void *));
typedef struct A68t155  A68_155 ;    /* PROC(MODE26,MODE97) MODE46 */

A_PROCEDURE(A68_VOID ,A68t156,(struct A68t32 ,struct A68t97 ,struct A68t97 ),(struct A68t32 ,struct A68t97 ,struct A68t97 ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(MODE32,MODE97,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t157,(struct A68t32 ,struct A68t97 ),(struct A68t32 ,struct A68t97 ,void *));
typedef struct A68t157  A68_157 ;    /* PROC(MODE32,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t158,(A68_INT ,struct A68t97 ,struct A68t97 *),(A68_INT ,struct A68t97 ,struct A68t97 *,void *));
typedef struct A68t158  A68_158 ;    /* PROC(INT,MODE97) MODE97 */

A_PROCEDURE(A68_VOID ,A68t159,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t160,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t160  A68_160 ;    /* PROC(MODE36) VOID */
struct A68t161{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_35)
};
typedef struct A68t161  A68_161 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t162,(A68_BOOL ,struct A68t161 *),(A68_BOOL ,struct A68t161 *,void *));
typedef struct A68t162  A68_162 ;    /* PROC(BOOL) MODE161 */
struct A68t164 ;

A_PROCEDURE(A68_VOID ,A68t163,(struct A68t164 ,struct A68t97 ),(struct A68t164 ,struct A68t97 ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(MODE164,MODE97) VOID */
A_VECTOR(struct A68t161 ,A68t164);
typedef struct A68t164  A68_164 ;    /* VECTOR [] MODE161 */

A_PROCEDURE(A68_VOID ,A68t165,(A68_INT ,struct A68t92 *),(A68_INT ,struct A68t92 *,void *));
typedef struct A68t165  A68_165 ;    /* PROC(INT) MODE92 */

A_PROCEDURE(A68_BOOL ,A68t166,(struct A68t92 ),(struct A68t92 ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(MODE92) BOOL */

A_PROCEDURE(A68_VOID ,A68t167,(struct A68t118 ),(struct A68t118 ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(MODE118) VOID */

A_PROCEDURE(A68_VOID ,A68t168,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,58,A68t169);
typedef struct A68t169  A68_169 ;    /* STRUCT 58 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t170);
typedef struct A68t170  A68_170 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_VC ,2,A68t171);
typedef struct A68t171  A68_171 ;    /* STRUCT 2 MODE26 */

A_PROCEDURE(A68_INT ,A68t172,(A68_BITS *),(A68_BITS *,void *));
typedef struct A68t172  A68_172 ;    /* PROC(REF BITS) INT */
struct A68t173{
A68_VC  Name;
A68_VC  Version;
A68_VC  Date;
A68_VC  Msg;
A68_VC  Sys_fault;
};
typedef struct A68t173  A68_173 ;    /* STRUCT(MODE26,MODE26,MODE26,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t174,(A68_BOOL ,struct A68t173 *),(A68_BOOL ,struct A68t173 *,void *));
typedef struct A68t174  A68_174 ;    /* PROC(BOOL) MODE173 */
#define A68_175  A68_VC 
#define A68t175 A68t26            /* FLEX VECTOR [] CHAR */
#define A68_176  A68_173 
#define A68t176 A68t173            /* STRUCT(MODE175,MODE175,MODE175,MODE175,MODE175)  */
A_ISTRUCT(A68_CHAR ,13,A68t177);
typedef struct A68t177  A68_177 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t178);
typedef struct A68t178  A68_178 ;    /* STRUCT 3 CHAR */

A_PROCEDURE(A68_VOID ,A68t179,(struct A68t173 ,A68_BOOL ),(struct A68t173 ,A68_BOOL ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(MODE173,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t180,(struct A68t173 *),(struct A68t173 *,void *));
typedef struct A68t180  A68_180 ;    /* PROC MODE173 */
A_ISTRUCT(A68_CHAR ,12,A68t181);
typedef struct A68t181  A68_181 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t182);
typedef struct A68t182  A68_182 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_VC ,5,A68t183);
typedef struct A68t183  A68_183 ;    /* STRUCT 5 MODE26 */
A_ISTRUCT(A68_CHAR ,1,A68t184);
typedef struct A68t184  A68_184 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t185);
typedef struct A68t185  A68_185 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t186);
typedef struct A68t186  A68_186 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t52 ,13,A68t187);
typedef struct A68t187  A68_187 ;    /* STRUCT 13 MODE52 */
A_ISTRUCT(A68_CHAR ,17,A68t188);
typedef struct A68t188  A68_188 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(struct A68t52 ,7,A68t189);
typedef struct A68t189  A68_189 ;    /* STRUCT 7 MODE52 */

A_PROCEDURE(A68_BOOL ,A68t190,(void),(void *));
typedef struct A68t190  A68_190 ;    /* PROC BOOL */

A_PROCEDURE(A68_VOID ,A68t191,(A68_VC *),(A68_VC *,void *));
typedef struct A68t191  A68_191 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t192,(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ),(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(MODE26,MODE26,MODE26,REF REF MODE26,BOOL) BOOL */
A_ISTRUCT(A68_CHAR ,28,A68t193);
typedef struct A68t193  A68_193 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t194);
typedef struct A68t194  A68_194 ;    /* STRUCT 3 MODE52 */
A_ISTRUCT(A68_CHAR ,37,A68t195);
typedef struct A68t195  A68_195 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(struct A68t52 ,5,A68t196);
typedef struct A68t196  A68_196 ;    /* STRUCT 5 MODE52 */
A_ISTRUCT(A68_CHAR ,9,A68t197);
typedef struct A68t197  A68_197 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t198);
typedef struct A68t198  A68_198 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t199);
typedef struct A68t199  A68_199 ;    /* STRUCT 4 MODE52 */
A_ISTRUCT(A68_CHAR ,15,A68t200);
typedef struct A68t200  A68_200 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t201);
typedef struct A68t201  A68_201 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,25,A68t202);
typedef struct A68t202  A68_202 ;    /* STRUCT 25 CHAR */

A_PROCEDURE(A68_BOOL ,A68t203,(A68_VC ,struct A68t147 ),(A68_VC ,struct A68t147 ,void *));
typedef struct A68t203  A68_203 ;    /* PROC(MODE26,MODE147) BOOL */

A_PROCEDURE(A68_BOOL ,A68t204,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t205,(A68_VC ,struct A68t118 ,struct A68t203 ,struct A68t204 ),(A68_VC ,struct A68t118 ,struct A68t203 ,struct A68t204 ,void *));
typedef struct A68t205  A68_205 ;    /* PROC(MODE26,MODE118,MODE203,MODE204) VOID */
A_ISTRUCT(A68_CHAR ,35,A68t206);
typedef struct A68t206  A68_206 ;    /* STRUCT 35 CHAR */
A_ISTRUCT(A68_CHAR ,132,A68t207);
typedef struct A68t207  A68_207 ;    /* STRUCT 132 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t208);
typedef struct A68t208  A68_208 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,115,A68t209);
typedef struct A68t209  A68_209 ;    /* STRUCT 115 CHAR */
A_ISTRUCT(A68_INT ,5,A68t210);
typedef struct A68t210  A68_210 ;    /* STRUCT 5 INT */

A_PROCEDURE(A68_VOID ,A68t211,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t211  A68_211 ;    /* PROC(MODE97) VOID */
A_ISTRUCT(A68_CHAR ,38,A68t212);
typedef struct A68t212  A68_212 ;    /* STRUCT 38 CHAR */

A_PROCEDURE(A68_VOID ,A68t213,(struct A68t211 ,struct A68t97 ),(struct A68t211 ,struct A68t97 ,void *));
typedef struct A68t213  A68_213 ;    /* PROC(MODE211,MODE97) VOID */
A_VECTOR(struct A68t97 ,A68t214);
typedef struct A68t214  A68_214 ;    /* VECTOR [] MODE97 */

A_PROCEDURE(A68_VOID ,A68t215,(A68_BOOL ,struct A68t214 *),(A68_BOOL ,struct A68t214 *,void *));
typedef struct A68t215  A68_215 ;    /* PROC(BOOL) MODE214 */
A_ISTRUCT(A68_CHAR ,30,A68t216);
typedef struct A68t216  A68_216 ;    /* STRUCT 30 CHAR */

A_PROCEDURE(A68_REAL ,A68t217,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(REAL) REAL */

A_PROCEDURE(A68_VOID ,A68t218,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t218  A68_218 ;    /* PROC(REF MODE26) REF MODE26 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from osmessages --- */
/* --- End of imports from osmessages --- */


/* --- Imports from osif --- */
#include <errno.h>

#define XFBAOSI_errno errno
extern A68_97  XLBAOSI_ignore_msg;
extern A68_97  ZLBAOSI_global_msg;
extern A68_125 * INBAOSI_stdin;
extern A68_125 * JNBAOSI_stdout;
extern A68_125 * KNBAOSI_stderr;
extern A68_BOOL  PPBAOSI_(struct A68t35 ,struct A68t35 );
extern A68_35  JPBAOSI_io_error;
extern A68_35  MPBAOSI_io_no_newline;
extern A68_VOID  YPBAOSI_file_name(struct A68t125 *,A68_VC *);
extern A68_125 * FQBAOSI_open_file(A68_VC ,struct A68t127 ,struct A68t97 );
extern A68_VOID  XQBAOSI_close_file(struct A68t125 *,struct A68t97 );
extern A68_VOID  SRBAOSI_read_line(struct A68t125 *,A68_VC ,A68_INT *,struct A68t97 ,A68_35 *);
extern A68_VOID  JSBAOSI_write_buffer(struct A68t125 *,A68_VC ,struct A68t97 ,A68_35 *);
extern A68_127  PNBAOSI_read_access;
extern A68_127  BOBAOSI_update_access;
extern A68_127  FOBAOSI_update_truncate_access;
extern A68_BOOL  RWBAOSI_is_terminal(struct A68t125 *);
#include <stdlib.h>
#define EXIT(status) exit(A_INT_int(status))

#define BZBAOSI_exit EXIT
extern A68_VOID  TNCAOSI_parse_filename(A68_VC ,A68_VC ,struct A68t97 ,A68_152 *);
extern int A_argc;
extern char **A_argv;
#define A_prelude(argc,argv) A_argc=argc; A_argv = argv

#define VPCAOSI_prelude A_prelude
extern A68_VOID  JQCAOSI_get_args(A68_46 *);
extern A68_VOID  LSCAOSI_prompt_args(A68_VC ,struct A68t97 ,A68_46 *);
#include <signal.h>

#define TECAOSI_sighup SIGHUP
#include <signal.h>

#define UECAOSI_sigint SIGINT
#include <signal.h>

#define VECAOSI_sigquit SIGQUIT
#include <signal.h>

#define WECAOSI_sigill SIGILL
#include <signal.h>

#define XECAOSI_sigtrap 5
#include <signal.h>

#define YECAOSI_sigabrt SIGABRT
#include <signal.h>

#define ZECAOSI_sigemt 7
#include <signal.h>

#define AFCAOSI_sigfpe SIGFPE
#include <signal.h>

#define BFCAOSI_sigkill SIGKILL
#include <signal.h>

#define CFCAOSI_sigbus 10
#include <signal.h>

#define DFCAOSI_sigsegv SIGSEGV
#include <signal.h>

#define EFCAOSI_sigsys 12
#include <signal.h>

#define FFCAOSI_sigpipe SIGPIPE
#include <signal.h>

#define GFCAOSI_sigalrm SIGALRM
#include <signal.h>

#define HFCAOSI_sigterm SIGTERM
#include <signal.h>

#define IFCAOSI_sigurg 16
#include <signal.h>

#define JFCAOSI_sigstop SIGSTOP
#include <signal.h>

#define KFCAOSI_sigtstp SIGTSTP
#include <signal.h>

#define LFCAOSI_sigcont SIGCONT
#include <signal.h>

#define MFCAOSI_sigchld SIGCHLD
#include <signal.h>

#define NFCAOSI_sigttin SIGTTIN
#include <signal.h>

#define OFCAOSI_sigttou SIGTTOU
#include <signal.h>

#define PFCAOSI_sigio 23
#include <signal.h>

#define QFCAOSI_sigxcpu 24
#include <signal.h>

#define RFCAOSI_sigxfsz 25
#include <signal.h>

#define SFCAOSI_sigvtalrm 26
#include <signal.h>

#define TFCAOSI_sigprof 27
#include <signal.h>

#define UFCAOSI_sigwinch 28
#include <signal.h>

#define VFCAOSI_siglost 29
#include <signal.h>

#define WFCAOSI_sigusr1 SIGUSR1
#include <signal.h>

#define XFCAOSI_sigusr2 SIGUSR2
extern A68_VOID  YJCAOSI_set_sigmsgproc(struct A68t32 ,struct A68t97 ,struct A68t97 );
extern A68_VOID  PLCAOSI_get_sigmsgproc(A68_INT ,struct A68t97 ,A68_97 *);
#include "Alibrary.h"

#define PBCAOSI_garbage_collect Agc_collect
#include "Alibrary.h"

#define KDCAOSI_alwayscollect A_ALWAYS_COLLECT
#include "Alibrary.h"

#define LDCAOSI_alwaysgrowheap A_ALWAYS_GROW_HEAP
#include "Alibrary.h"

#define MDCAOSI_defaultpolicy A_DEFAULT_POLICY
/* --- End of imports from osif --- */


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
/* --- End of imports from cif --- */


/* --- Imports from messageproc --- */
extern A68_31  OFAAOSI_anonymous;
extern A68_VOID  ZAAAOSI_makervc(A68_VC ,A68_VC *);
extern A68_92  SHAAOSI_system;
extern A68_92  UHAAOSI_fatal;
extern A68_92  WHAAOSI_user;
extern A68_92  CIAAOSI_log;
extern A68_BOOL  PKAAOSI_sysfault_msg(struct A68t106 );
extern A68_BOOL  TKAAOSI_error_msg(struct A68t106 );
extern A68_BOOL  ZKAAOSI_abort_msg(struct A68t106 );
extern A68_BOOL  ELAAOSI_cli_msg(struct A68t106 );
extern A68_BOOL  JLAAOSI_log_msg(struct A68t106 );
extern A68_BOOL  OLAAOSI_out_msg(struct A68t106 );
extern A68_BOOL  TLAAOSI_newline_msg(struct A68t106 );
extern A68_VOID  ONAAOSI_translate_msg(struct A68t92 ,struct A68t46 ,A68_95 *);
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VC  EOAAOSL_nullstr;
extern A68_VOID  JBAAOSI_concat(struct A68t46 ,A68_VC *);
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GABAOSL_putstr(struct A68t34 *,A68_VC );
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
extern A68_34 * XPAAOSL_make_channel(struct A68t87 ,struct A68t88 );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void MCBAOSI(void);   /* osmessages */
extern void VSCAOSI(void);   /* osif */
extern void JDAAOSI(void);   /* cif */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_169   SCAAOST = {"$Id: osinterface.a68,v 34.3 1995/03/29 13:02:22 ella Exp $"}; 
A_GISVEC(A68_VC ,TCAAOST,SCAAOST,58)
static A68_170   YCAAOST = {":  not yet implemented"}; 
A_GISVEC(A68_VC ,ZCAAOST,YCAAOST,22)
#define EDAAOST_int_size 4
#define FDAAOST_word_size 32
A68_35  GDAAOST_io_partline;
#define HDAAOST_block_update_access BOBAOSI_update_access
#define IDAAOST_block_update_truncate_access FOBAOSI_update_truncate_access
#include <stdio.h>
#define FFLUSH(file) A_int_INT(fflush(A_FILEPTR_fileptr(file)))

#define MDAAOST_fflush FFLUSH
static A68_VC  ODAAOST_nilstr;
static A68_VC  PDAAOST_osfacility;
static A68_VC  QDAAOST_version_str;
static A68_VC  RDAAOST_version_date;
static A68_VC  SDAAOST_version_msg;
static A68_VC  TDAAOST_sys_fault_message;
A68_174  UDAAOST_anonymous;
A68_34 * KEAAOST_screen;
A68_34 * LEAAOST_out;
A68_34 * MEAAOST_err;
static A68_177   NEAAOST = {"Message is: \""}; 
A_GISVEC(A68_VC ,OEAAOST,NEAAOST,13)
static A68_VC  PEAAOST_message_is;
static A68_178   QEAAOST = {"\007\007\007"}; 
A_GISVEC(A68_VC ,REAAOST,QEAAOST,3)
static A68_VC  SEAAOST_bell_str;
A68_179  TEAAOST_initialise_osinterface;
static A68_181   BFAAOST = {":  Version  "}; 
A_GISVEC(A68_VC ,CFAAOST,BFAAOST,12)
static A68_182   DFAAOST = {"  -  "}; 
A_GISVEC(A68_VC ,EFAAOST,DFAAOST,5)
static A68_128   MFAAOST = {"ANON"}; 
A_GISVEC(A68_VC ,NFAAOST,MFAAOST,4)
static A68_184   OFAAOST = {""}; 
A_GISVEC(A68_VC ,PFAAOST,OFAAOST,0)
static A68_184   QFAAOST = {""}; 
A_GISVEC(A68_VC ,RFAAOST,QFAAOST,0)
static A68_184   SFAAOST = {""}; 
A_GISVEC(A68_VC ,TFAAOST,SFAAOST,0)
static A68_177   UFAAOST = {"Please report"}; 
A_GISVEC(A68_VC ,VFAAOST,UFAAOST,13)
static A68_185   GGAAOST = {"A System error has occurred in "}; 
A_GISVEC(A68_VC ,HGAAOST,GGAAOST,31)
static A68_186   MGAAOST = {" ("}; 
A_GISVEC(A68_VC ,NGAAOST,MGAAOST,2)
static A68_188   OHAAOST = {" has been aborted"}; 
A_GISVEC(A68_VC ,PHAAOST,OHAAOST,17)
static A68_128   CIAAOST = {"UNIX"}; 
A_GISVEC(A68_VC ,DIAAOST,CIAAOST,4)
A68_VC  EIAAOST_os_string;
static A68_193   OJAAOST = {" file name argument expected"}; 
A_GISVEC(A68_VC ,PJAAOST,OJAAOST,28)
static A68_182   YJAAOST = {" ? - "}; 
A_GISVEC(A68_VC ,ZJAAOST,YJAAOST,5)
static A68_195   DKAAOST = {" file name has already been specified"}; 
A_GISVEC(A68_VC ,EKAAOST,DKAAOST,37)
static A68_197   UKAAOST = {"Error in "}; 
A_GISVEC(A68_VC ,VKAAOST,UKAAOST,9)
static A68_198   ZKAAOST = {" file name"}; 
A_GISVEC(A68_VC ,ALAAOST,ZKAAOST,10)
static A68_200   ILAAOST = {"Could not open "}; 
A_GISVEC(A68_VC ,JLAAOST,ILAAOST,15)
static A68_201   NLAAOST = {" file "}; 
A_GISVEC(A68_VC ,OLAAOST,NLAAOST,6)
static A68_182   YLAAOST = {" ? - "}; 
A_GISVEC(A68_VC ,ZLAAOST,YLAAOST,5)
static A68_202   DMAAOST = {" file name already exists"}; 
A_GISVEC(A68_VC ,EMAAOST,DMAAOST,25)
static A68_195   KNAAOST = {"given up trying to read the arguments"}; 
A_GISVEC(A68_VC ,LNAAOST,KNAAOST,37)
#define ONAAOST_user_bored_threshold 3
A68_INT  PNAAOST_n_interrupts;
static A68_206   WNAAOST = {"***** Received user interrupt *****"}; 
A_GISVEC(A68_VC ,XNAAOST,WNAAOST,35)
static A68_207   ZNAAOST = {"***** A hard user interrupt has occurred - the current operation has possibly been left in an unsafe state - consider aborting *****"}; 
A_GISVEC(A68_VC ,AOAAOST,ZNAAOST,132)
static A68_208   DOAAOST = {"Received signal:  "}; 
A_GISVEC(A68_VC ,EOAAOST,DOAAOST,18)
static A68_209   JOAAOST = {"***** The current operation has been aborted and has possibly been left in an unsafe state - consider quiting *****"}; 
A_GISVEC(A68_VC ,KOAAOST,JOAAOST,115)
static A68_97  MOAAOST_sig_msg;
static A68_32  QOAAOST_trap_signals;
static A68_212   TOAAOST = {"Operation aborted after user interrupt"}; 
A_GISVEC(A68_VC ,UOAAOST,TOAAOST,38)
static A68_216   DQAAOST = {"No memory statistics available"}; 
A_GISVEC(A68_VC ,EQAAOST,DQAAOST,30)
A68_BOOL  FQAAOST_os_debug;
#include <math.h>

#define GQAAOST_sqrt sqrt
static A68_200   JQAAOST = {"No host details"}; 
A_GISVEC(A68_VC ,LQAAOST,JQAAOST,15)
typedef struct   /* env of non-global proc */
{
A68_191  KIAAOST_read;
} MIAAOST_read;
typedef struct   /* env of non-global proc */
{
A68_BOOL * LKAAOST_failed;
} QKAAOST_msg;
typedef struct   /* env of non-global proc */
{
A68_BOOL * SMAAOST_failed;
} XMAAOST_msg;
typedef struct   /* env of non-global proc */
{
A68_INT * ZMAAOST_argc;
A68_46  RMAAOST_args;
} CNAAOST_next;
typedef struct   /* env of non-global proc */
{
int dummy;
} DPAAOST_generator;
typedef struct   /* env of non-global proc */
{
A68_97  ZOAAOST_old_global;
A68_214  GPAAOST_old_sigs;
A68_97  Msg;
} PPAAOST_reset_sigmsg;
typedef struct   /* env of non-global proc */
{
A68_118  NPAAOST_reset_sigmsg;
A68_97  Msg;
} ZPAAOST_anonymous;
typedef struct   /* env of non-global proc */
{
int dummy;
} QIAAOST_generator;

A_STATIC A68_VOID  WCAAOST_fail(A68_VC  Name, A68_97  Msg, A68_35  *ReturnedValue);

A68_VOID  KDAAOST_write_stdout(A68_VC  Buffer);

A_STATIC A68_VOID  WDAAOST_generator(A68_BOOL  VDAAOST_anonymous, A68_173  *ReturnedValue);

A68_VOID  UEAAOST_facility(A68_VC  *ReturnedValue);

A68_VOID  WEAAOST_version(A68_173  *ReturnedValue);

A68_VOID  ZEAAOST_give_version(A68_VC  *ReturnedValue);

A68_VOID  KFAAOST_default_msg(A68_92  Msgno, A68_46  Params);

A68_BOOL  FIAAOST_interactive(void);

A68_VOID  IIAAOST_prompt(A68_VC  Str, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  LIAAOST_read(A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PIAAOST_generator(A68_BOOL  NIAAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_BOOL  LJAAOST_filename_arg(A68_VC  Name, A68_VC  Sort, A68_VC  Type, A68_VC * Ans, A68_BOOL  Should_exist);

A_STATIC A68_VOID  PKAAOST_msg(A68_92  No, A68_46  Params, void *NonLocals);

A68_VOID  OMAAOST_parse_arguments(A68_VC  Prompt, A68_118  Reset, A68_203  Check_arg, A68_204  No_more);

A_STATIC A68_VOID  WMAAOST_msg(A68_92  No, A68_46  Params, void *NonLocals);

A_STATIC A68_VOID  BNAAOST_next(A68_VC  *ReturnedValue, void *NonLocals);

A68_BOOL  QNAAOST_interrupted(void);

A68_VOID  SNAAOST_clear_interrupt(void);

A_STATIC A68_VOID  VNAAOST_anonymous(A68_92  No, A68_46  Params);

A68_VOID  SOAAOST_flt_if_interrupted(A68_97  Msg);

A68_VOID  YOAAOST_trap_errors(A68_211  Action, A68_97  Msg);

A_STATIC A68_VOID  CPAAOST_generator(A68_BOOL  APAAOST_anonymous, A68_214  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OPAAOST_reset_sigmsg(void *NonLocals);

A_STATIC A68_VOID  YPAAOST_anonymous(A68_92  No, A68_46  Params, void *NonLocals);

A68_VOID  CQAAOST_mem_statistics(A68_36  P);

A68_VOID  IQAAOST_check_host_data(A68_VC  Input, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  PQAAOST_anonymous(A68_173  Version, A68_BOOL  Trap_user_interrupts);

A_STATIC A68_VOID  CRAAOST_anonymous(A68_VC  S);

A_STATIC A68_VOID  PIAAOST_generator(A68_BOOL  NIAAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((QIAAOST_generator *)NonLocals)->x)
{ 
A68_VC  RIAAOST;  /* clause result */
A68_VC  SIAAOST;  /* OPERATORS - dynamic generator */
{ 
SIAAOST.upb = 80 ;
( NIAAOST_anonymous? A_VLOC(A68_CHAR ,SIAAOST): A_VHEAP(A68_CHAR ,SIAAOST) );
RIAAOST = SIAAOST;
} 
*ReturnedValue = (RIAAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  LIAAOST_read(A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((MIAAOST_read *)NonLocals)->x)
{ 
A68_31  OIAAOST_generator;   /* proc value of non-global proc */
A68_VC  TIAAOST;  /* avoid structure result */
A68_VC  UIAAOST_ans;
A68_INT  VIAAOST_l;
A68_35  WIAAOST;  /* avoid structure result */
A68_171  XIAAOST;  /* collateral clause result */
A68_VC  YIAAOST;  /* OPERATORS - trim index */
A68_VC  ZIAAOST;  /* avoid structure result */
A68_VC  AJAAOST;  /* clause result */
A68_46  BJAAOST;  /* OPERATORS - istruct -> vector */
A68_VC  CJAAOST;  /* avoid structure result */
A68_VC  DJAAOST;  /* OPERATORS - trim index */
A_PROC_ENTRY(read);
{ 
A_CLOSURE( OIAAOST_generator, PIAAOST_generator, QIAAOST_generator );
A_CALLPROC(OIAAOST_generator,(A68_FALSE, &TIAAOST),(A68_FALSE, &TIAAOST,(OIAAOST_generator).nonlocals));
UIAAOST_ans = TIAAOST;
 /* line 174: */
VIAAOST_l = 0;
 /* line 175: */
 /* line 176: */
SRBAOSI_read_line( INBAOSI_stdin, UIAAOST_ans, (&VIAAOST_l), ZLBAOSI_global_msg, &WIAAOST );
if ( PPBAOSI_(WIAAOST, GDAAOST_io_partline) )
{ 
XIAAOST.data[0] = A_VTRIM(YIAAOST,(UIAAOST_ans),A_VTSCRIPT(&(YIAAOST.upb),(UIAAOST_ans).upb,1,VIAAOST_l));
A_CALLPROC(NL(KIAAOST_read),( &ZIAAOST),( &ZIAAOST,(NL(KIAAOST_read)).nonlocals));
XIAAOST.data[1] = ZIAAOST;
 /* line 177: */
JBAAOSI_concat( A_HISVEC(BJAAOST,XIAAOST,2,A68_VC ), &CJAAOST );
AJAAOST = CJAAOST;
} 
else
{ 
 /* line 178: */
 /* line 179: */
AJAAOST = A_VTRIM(DJAAOST,(UIAAOST_ans),A_VTSCRIPT(&(DJAAOST.upb),(UIAAOST_ans).upb,1,VIAAOST_l));
} 
} 
A_PROC_EXIT(read);
*ReturnedValue = (AJAAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  PKAAOST_msg(A68_92  No, A68_46  Params, void *NonLocals)
#define NL(x) (((QKAAOST_msg *)NonLocals)->x)
{ 
A68_106  RKAAOST;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(msg);
 /* line 203: */
if ( TKAAOSI_error_msg(A_UNITE(RKAAOST,mode1,1,No)) )
{ 
(*NL(LKAAOST_failed)) = A68_TRUE;
} 
A_PROC_EXIT(msg);
return;
} 
#undef NL

A_STATIC A68_VOID  WMAAOST_msg(A68_92  No, A68_46  Params, void *NonLocals)
#define NL(x) (((XMAAOST_msg *)NonLocals)->x)
{ 
A68_106  YMAAOST;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(msg);
 /* line 245: */
if ( TKAAOSI_error_msg(A_UNITE(YMAAOST,mode1,1,No)) )
{ 
(*NL(SMAAOST_failed)) = A68_TRUE;
} 
A_PROC_EXIT(msg);
return;
} 
#undef NL

A_STATIC A68_VOID  BNAAOST_next(A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((CNAAOST_next *)NonLocals)->x)
{ 
A68_VC  DNAAOST;  /* clause result */
A_PROC_ENTRY(next);
if ( (((*NL(ZMAAOST_argc))+=1)<=NL(RMAAOST_args).upb) )
{ 
DNAAOST = A_VINDEX(NL(RMAAOST_args),(*NL(ZMAAOST_argc)));
} 
else
{ 
DNAAOST = EOAAOSL_nullstr;
} 
A_PROC_EXIT(next);
*ReturnedValue = (DNAAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  CPAAOST_generator(A68_BOOL  APAAOST_anonymous, A68_214  *ReturnedValue, void *NonLocals)
#define NL(x) (((DPAAOST_generator *)NonLocals)->x)
{ 
A68_214  EPAAOST;  /* clause result */
A68_214  FPAAOST;  /* OPERATORS - dynamic generator */
{ 
FPAAOST.upb = QOAAOST_trap_signals.upb ;
( APAAOST_anonymous? A_VLOC(A68_97 ,FPAAOST): A_VHEAP(A68_97 ,FPAAOST) );
EPAAOST = FPAAOST;
} 
*ReturnedValue = (EPAAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  OPAAOST_reset_sigmsg(void *NonLocals)
#define NL(x) (((PPAAOST_reset_sigmsg *)NonLocals)->x)
{ 
A68_97 * QPAAOST_old;
A68_INT  RPAAOST_sig;
A68_INT * SPAAOST;  /* forall control - []x */
A68_INT  TPAAOST;  /* forall loop counter */
A68_32  UPAAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(reset_sigmsg);
{ 
ZLBAOSI_global_msg = NL(ZOAAOST_old_global);
 /* line 330: */
 /* line 331: */
TPAAOST = NL(GPAAOST_old_sigs).upb -1;
if ( TPAAOST != QOAAOST_trap_signals.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
QPAAOST_old = NL(GPAAOST_old_sigs).data;
SPAAOST = QOAAOST_trap_signals.data;
for (;TPAAOST-- >= 0;
(QPAAOST_old++
,SPAAOST++
) )
{
RPAAOST_sig = *SPAAOST;
YJCAOSI_set_sigmsgproc(A_HVEC(UPAAOST,RPAAOST_sig,A68_INT ), (*QPAAOST_old), NL(Msg));
}
 /* line 332: */
 /* line 333: */
/*SKIP*/;
} 
A_PROC_EXIT(reset_sigmsg);
return;
} 
#undef NL

A_STATIC A68_VOID  YPAAOST_anonymous(A68_92  No, A68_46  Params, void *NonLocals)
#define NL(x) (((ZPAAOST_anonymous *)NonLocals)->x)
{ 
A68_106  AQAAOST;  /* OPERATORS - mode -> union mode */
 /* line 338: */
 /* line 339: */
{ 
if ( TKAAOSI_error_msg(A_UNITE(AQAAOST,mode1,1,No)) )
{ 
A_CALLPROC(NL(NPAAOST_reset_sigmsg),(),((NL(NPAAOST_reset_sigmsg)).nonlocals));
} 
 /* line 340: */
 /* line 341: */
A_CALLPROC(NL(Msg),(No, Params),(No, Params,(NL(Msg)).nonlocals));
} 
return;
} 
#undef NL

A_STATIC A68_VOID  CRAAOST_anonymous(A68_VC  S)
{ 
A68_35  DRAAOST;  /* avoid structure result */
 /* line 388: */
JSBAOSI_write_buffer( KNBAOSI_stderr, S, XLBAOSI_ignore_msg, &DRAAOST );
DRAAOST;
return;
} 
#undef NL

A_STATIC A68_VOID  WCAAOST_fail(A68_VC  Name, A68_97  Msg, A68_35  *ReturnedValue)
{ 
A68_171  XCAAOST;  /* collateral clause result */
A68_46  ADAAOST;  /* OPERATORS - istruct -> vector */
A68_VC  BDAAOST;  /* avoid structure result */
A68_46  CDAAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_35  DDAAOST;  /* clause result */
A_PROC_ENTRY(fail);
 /* line 65: */
{ 
XCAAOST.data[0] = Name;
XCAAOST.data[1] = ZCAAOST;
JBAAOSI_concat( A_HISVEC(ADAAOST,XCAAOST,2,A68_VC ), &BDAAOST );
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(CDAAOST,BDAAOST,A68_VC )),(SHAAOSI_system, A_HVEC(CDAAOST,BDAAOST,A68_VC ),(Msg).nonlocals));
DDAAOST = JPBAOSI_io_error;
} 
A_PROC_EXIT(fail);
*ReturnedValue = (DDAAOST);
return;
} 
#undef NL

A68_VOID  KDAAOST_write_stdout(A68_VC  Buffer)
{ 
A68_35  LDAAOST;  /* avoid structure result */
A_PROC_ENTRY(write_stdout);
 /* line 77: */
 /* line 78: */
{ 
JSBAOSI_write_buffer( JNBAOSI_stdout, Buffer, XLBAOSI_ignore_msg, &LDAAOST );
LDAAOST;
 /* line 79: */
 /* line 80: */
 /* line 81: */
 /* line 82: */
 /* line 83: */
 /* line 84: */
MDAAOST_fflush((*(&(JNBAOSI_stdout->Stdiofile))));
} 
A_PROC_EXIT(write_stdout);
return;
} 
#undef NL

A_STATIC A68_VOID  WDAAOST_generator(A68_BOOL  VDAAOST_anonymous, A68_173  *ReturnedValue)
{ 
A68_176  XDAAOST_anonymous;
A68_VC  YDAAOST;  /* avoid structure result */
A68_175 * ZDAAOST;  /* YIELD */
A68_VC  AEAAOST;  /* avoid structure result */
A68_175 * BEAAOST;  /* YIELD */
A68_VC  CEAAOST;  /* avoid structure result */
A68_175 * DEAAOST;  /* YIELD */
A68_VC  EEAAOST;  /* avoid structure result */
A68_175 * FEAAOST;  /* YIELD */
A68_VC  GEAAOST;  /* avoid structure result */
A68_175 * HEAAOST;  /* YIELD */
A68_173  IEAAOST;  /* clause result */
{ 
A_CALLPROC(OFAAOSI_anonymous,(VDAAOST_anonymous, &YDAAOST),(VDAAOST_anonymous, &YDAAOST,(OFAAOSI_anonymous).nonlocals));
ZDAAOST = (&((&XDAAOST_anonymous)->Name)) ;
(*ZDAAOST) = YDAAOST;
A_CALLPROC(OFAAOSI_anonymous,(VDAAOST_anonymous, &AEAAOST),(VDAAOST_anonymous, &AEAAOST,(OFAAOSI_anonymous).nonlocals));
BEAAOST = (&((&XDAAOST_anonymous)->Version)) ;
(*BEAAOST) = AEAAOST;
A_CALLPROC(OFAAOSI_anonymous,(VDAAOST_anonymous, &CEAAOST),(VDAAOST_anonymous, &CEAAOST,(OFAAOSI_anonymous).nonlocals));
DEAAOST = (&((&XDAAOST_anonymous)->Date)) ;
(*DEAAOST) = CEAAOST;
A_CALLPROC(OFAAOSI_anonymous,(VDAAOST_anonymous, &EEAAOST),(VDAAOST_anonymous, &EEAAOST,(OFAAOSI_anonymous).nonlocals));
FEAAOST = (&((&XDAAOST_anonymous)->Msg)) ;
(*FEAAOST) = EEAAOST;
A_CALLPROC(OFAAOSI_anonymous,(VDAAOST_anonymous, &GEAAOST),(VDAAOST_anonymous, &GEAAOST,(OFAAOSI_anonymous).nonlocals));
HEAAOST = (&((&XDAAOST_anonymous)->Sys_fault)) ;
(*HEAAOST) = GEAAOST;
IEAAOST = XDAAOST_anonymous;
} 
*ReturnedValue = (IEAAOST);
return;
} 
#undef NL

A68_VOID  UEAAOST_facility(A68_VC  *ReturnedValue)
{ 
A68_VC  VEAAOST;  /* clause result */
A_PROC_ENTRY(facility);
VEAAOST = PDAAOST_osfacility;
A_PROC_EXIT(facility);
*ReturnedValue = (VEAAOST);
return;
} 
#undef NL

A68_VOID  WEAAOST_version(A68_173  *ReturnedValue)
{ 
A68_173  XEAAOST;  /* collateral clause result */
A68_173  YEAAOST;  /* clause result */
A_PROC_ENTRY(version);
XEAAOST.Name = PDAAOST_osfacility;
XEAAOST.Version = QDAAOST_version_str;
XEAAOST.Date = RDAAOST_version_date;
XEAAOST.Msg = SDAAOST_version_msg;
XEAAOST.Sys_fault = TDAAOST_sys_fault_message;
YEAAOST = XEAAOST;
A_PROC_EXIT(version);
*ReturnedValue = (YEAAOST);
return;
} 
#undef NL

A68_VOID  ZEAAOST_give_version(A68_VC  *ReturnedValue)
{ 
A68_183  AFAAOST;  /* collateral clause result */
A68_VC  FFAAOST;  /* clause result */
A68_46  GFAAOST;  /* OPERATORS - istruct -> vector */
A68_VC  HFAAOST;  /* avoid structure result */
A_PROC_ENTRY(give_version);
AFAAOST.data[0] = PDAAOST_osfacility;
AFAAOST.data[1] = CFAAOST;
 /* line 123: */
AFAAOST.data[2] = QDAAOST_version_str;
AFAAOST.data[3] = EFAAOST;
AFAAOST.data[4] = RDAAOST_version_date;
JBAAOSI_concat( A_HISVEC(GFAAOST,AFAAOST,5,A68_VC ), &HFAAOST );
FFAAOST = HFAAOST;
A_PROC_EXIT(give_version);
*ReturnedValue = (FFAAOST);
return;
} 
#undef NL

A68_VOID  KFAAOST_default_msg(A68_92  Msgno, A68_46  Params)
{ 
A68_173  LFAAOST;  /* collateral clause result */
A68_95  WFAAOST;  /* avoid structure result */
A68_95  XFAAOST_message;
A68_106  YFAAOST;  /* OPERATORS - mode -> union mode */
A68_106  ZFAAOST;  /* OPERATORS - mode -> union mode */
A68_106  AGAAOST;  /* OPERATORS - mode -> union mode */
A68_106  BGAAOST;  /* OPERATORS - mode -> union mode */
A68_106  CGAAOST;  /* OPERATORS - mode -> union mode */
A68_106  DGAAOST;  /* OPERATORS - mode -> union mode */
A68_106  EGAAOST;  /* OPERATORS - mode -> union mode */
A68_187  FGAAOST;  /* collateral clause result */
A68_52  IGAAOST;  /* OPERATORS - mode -> union mode */
A68_VC  JGAAOST;  /* YIELD */
A68_VC  KGAAOST;  /* avoid structure result */
A68_52  LGAAOST;  /* OPERATORS - mode -> union mode */
A68_52  OGAAOST;  /* OPERATORS - mode -> union mode */
A68_VC  PGAAOST;  /* YIELD */
A68_52  QGAAOST;  /* OPERATORS - mode -> union mode */
A68_VC  RGAAOST;  /* YIELD */
A68_52  SGAAOST;  /* OPERATORS - mode -> union mode */
A68_CHAR  TGAAOST;  /* YIELD */
A68_52  UGAAOST;  /* OPERATORS - mode -> union mode */
A68_56  VGAAOST;  /* procedure value */
A68_52  WGAAOST;  /* OPERATORS - mode -> union mode */
A68_52  XGAAOST;  /* OPERATORS - mode -> union mode */
A68_VC  YGAAOST;  /* YIELD */
A68_52  ZGAAOST;  /* OPERATORS - mode -> union mode */
A68_CHAR  AHAAOST;  /* YIELD */
A68_52  BHAAOST;  /* OPERATORS - mode -> union mode */
A68_56  CHAAOST;  /* procedure value */
A68_52  DHAAOST;  /* OPERATORS - mode -> union mode */
A68_52  EHAAOST;  /* OPERATORS - mode -> union mode */
A68_52  FHAAOST;  /* OPERATORS - mode -> union mode */
A68_56  GHAAOST;  /* procedure value */
A68_85  HHAAOST;  /* OPERATORS - istruct -> vector */
A68_106  IHAAOST;  /* OPERATORS - mode -> union mode */
A68_BOOL  JHAAOST;  /* optbool result */
A68_106  KHAAOST;  /* OPERATORS - mode -> union mode */
A68_189  LHAAOST;  /* collateral clause result */
A68_VC  MHAAOST;  /* avoid structure result */
A68_52  NHAAOST;  /* OPERATORS - mode -> union mode */
A68_52  QHAAOST;  /* OPERATORS - mode -> union mode */
A68_VC  RHAAOST;  /* YIELD */
A68_52  SHAAOST;  /* OPERATORS - mode -> union mode */
A68_56  THAAOST;  /* procedure value */
A68_52  UHAAOST;  /* OPERATORS - mode -> union mode */
A68_52  VHAAOST;  /* OPERATORS - mode -> union mode */
A68_VC  WHAAOST;  /* YIELD */
A68_52  XHAAOST;  /* OPERATORS - mode -> union mode */
A68_CHAR  YHAAOST;  /* YIELD */
A68_52  ZHAAOST;  /* OPERATORS - mode -> union mode */
A68_56  AIAAOST;  /* procedure value */
A68_85  BIAAOST;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(default_msg);
 /* line 127: */
 /* line 128: */
{ 
 /* line 129: */
if ( A_VSTRUCTCOMP(PDAAOST_osfacility,ODAAOST_nilstr) )
{ 
LFAAOST.Name = NFAAOST;
LFAAOST.Version = PFAAOST;
LFAAOST.Date = RFAAOST;
LFAAOST.Msg = TFAAOST;
LFAAOST.Sys_fault = VFAAOST;
 /* line 130: */
 /* line 131: */
A_CALLPROC(TEAAOST_initialise_osinterface,(LFAAOST, A68_FALSE),(LFAAOST, A68_FALSE,(TEAAOST_initialise_osinterface).nonlocals));
} 
 /* line 132: */
ONAAOSI_translate_msg( Msgno, Params, &WFAAOST );
XFAAOST_message = WFAAOST;
 /* line 133: */
 /* line 134: */
if ( JLAAOSI_log_msg(A_UNITE(YFAAOST,mode2,2,XFAAOST_message)) )
{ 
 /* line 135: */
if ( TKAAOSI_error_msg(A_UNITE(ZFAAOST,mode2,2,XFAAOST_message)) )
{ 
GABAOSL_putstr(MEAAOST_err, XFAAOST_message.Text);
 /* line 136: */
if ( TLAAOSI_newline_msg(A_UNITE(AGAAOST,mode2,2,XFAAOST_message)) )
{ 
 /* line 137: */
LRAAOSL_newline(MEAAOST_err);
} 
} 
else
{ 
GABAOSL_putstr(KEAAOST_screen, XFAAOST_message.Text);
 /* line 138: */
if ( TLAAOSI_newline_msg(A_UNITE(BGAAOST,mode2,2,XFAAOST_message)) )
{ 
 /* line 139: */
 /* line 140: */
LRAAOSL_newline(KEAAOST_screen);
} 
} 
} 
 /* line 141: */
 /* line 142: */
if ( OLAAOSI_out_msg(A_UNITE(CGAAOST,mode2,2,XFAAOST_message)) )
{ 
GABAOSL_putstr(LEAAOST_out, XFAAOST_message.Text);
 /* line 143: */
if ( TLAAOSI_newline_msg(A_UNITE(DGAAOST,mode2,2,XFAAOST_message)) )
{ 
 /* line 144: */
LRAAOSL_newline(LEAAOST_out);
} 
} 
 /* line 145: */
 /* line 146: */
if ( PKAAOSI_sysfault_msg(A_UNITE(EGAAOST,mode2,2,XFAAOST_message)) )
{ 
JGAAOST = HGAAOST ;
FGAAOST.data[0] = A_UNITE(IGAAOST,mode7,7,JGAAOST);
UEAAOST_facility(  &KGAAOST );
FGAAOST.data[1] = A_UNITE(LGAAOST,mode7,7,KGAAOST);
 /* line 147: */
PGAAOST = NGAAOST ;
FGAAOST.data[2] = A_UNITE(OGAAOST,mode7,7,PGAAOST);
RGAAOST = (*(&(XFAAOST_message.Msgno.Facility->Name))) ;
FGAAOST.data[3] = A_UNITE(QGAAOST,mode7,7,RGAAOST);
TGAAOST = ')' ;
FGAAOST.data[4] = A_UNITE(SGAAOST,mode6,6,TGAAOST);
 /* line 148: */
VGAAOST.fn.fn_global = LRAAOSL_newline;
VGAAOST.nonlocals = A68_NIL;
FGAAOST.data[5] = A_UNITE(UGAAOST,mode12,12,VGAAOST);
FGAAOST.data[6] = A_UNITE(WGAAOST,mode7,7,PEAAOST_message_is);
YGAAOST = XFAAOST_message.Text ;
FGAAOST.data[7] = A_UNITE(XGAAOST,mode7,7,YGAAOST);
AHAAOST = '\"' ;
FGAAOST.data[8] = A_UNITE(ZGAAOST,mode6,6,AHAAOST);
 /* line 149: */
CHAAOST.fn.fn_global = LRAAOSL_newline;
CHAAOST.nonlocals = A68_NIL;
FGAAOST.data[9] = A_UNITE(BHAAOST,mode12,12,CHAAOST);
FGAAOST.data[10] = A_UNITE(DHAAOST,mode7,7,TDAAOST_sys_fault_message);
FGAAOST.data[11] = A_UNITE(EHAAOST,mode7,7,SEAAOST_bell_str);
GHAAOST.fn.fn_global = LRAAOSL_newline;
GHAAOST.nonlocals = A68_NIL;
FGAAOST.data[12] = A_UNITE(FHAAOST,mode12,12,GHAAOST);
GFBAOSL_put(MEAAOST_err, A_HISVEC(HHAAOST,FGAAOST,13,A68_52 ));
 /* line 150: */
 /* line 151: */
BZBAOSI_exit((-1));
} 
else
{ 
JHAAOST = ELAAOSI_cli_msg(A_UNITE(IHAAOST,mode2,2,XFAAOST_message));
if ( ! JHAAOST )
{ /* line 152: */
JHAAOST = ZKAAOSI_abort_msg(A_UNITE(KHAAOST,mode2,2,XFAAOST_message));
}
 /* line 153: */
if ( JHAAOST )
{ 
UEAAOST_facility(  &MHAAOST );
LHAAOST.data[0] = A_UNITE(NHAAOST,mode7,7,MHAAOST);
RHAAOST = PHAAOST ;
LHAAOST.data[1] = A_UNITE(QHAAOST,mode7,7,RHAAOST);
 /* line 154: */
THAAOST.fn.fn_global = LRAAOSL_newline;
THAAOST.nonlocals = A68_NIL;
LHAAOST.data[2] = A_UNITE(SHAAOST,mode12,12,THAAOST);
LHAAOST.data[3] = A_UNITE(UHAAOST,mode7,7,PEAAOST_message_is);
WHAAOST = XFAAOST_message.Text ;
LHAAOST.data[4] = A_UNITE(VHAAOST,mode7,7,WHAAOST);
YHAAOST = '\"' ;
LHAAOST.data[5] = A_UNITE(XHAAOST,mode6,6,YHAAOST);
AIAAOST.fn.fn_global = LRAAOSL_newline;
AIAAOST.nonlocals = A68_NIL;
LHAAOST.data[6] = A_UNITE(ZHAAOST,mode12,12,AIAAOST);
GFBAOSL_put(MEAAOST_err, A_HISVEC(BIAAOST,LHAAOST,7,A68_52 ));
 /* line 155: */
 /* line 156: */
 /* line 157: */
BZBAOSI_exit((-2));
} 
} 
} 
A_PROC_EXIT(default_msg);
return;
} 
#undef NL

A68_BOOL  FIAAOST_interactive(void)
{ 
A68_BOOL  GIAAOST;  /* clause result */
A_PROC_ENTRY(interactive);
GIAAOST = RWBAOSI_is_terminal(INBAOSI_stdin);
A_PROC_EXIT(interactive);
return( GIAAOST );
} 
#undef NL

A68_VOID  IIAAOST_prompt(A68_VC  Str, A68_VC  *ReturnedValue)
{ 
A68_191  KIAAOST_read;   /* proc value of non-global proc */
A68_VC  EJAAOST;  /* clause result */
A68_VC  FJAAOST;  /* avoid structure result */
A_PROC_ENTRY(prompt);
 /* line 170: */
 /* line 171: */
{ 
 /* line 172: */
 /* line 173: */
A_CLOSURE( KIAAOST_read, LIAAOST_read, MIAAOST_read );
(( MIAAOST_read * ) ( KIAAOST_read.nonlocals )) -> KIAAOST_read = KIAAOST_read;
 /* line 181: */
KDAAOST_write_stdout(Str);
 /* line 182: */
 /* line 183: */
A_CALLPROC(KIAAOST_read,( &FJAAOST),( &FJAAOST,(KIAAOST_read).nonlocals));
EJAAOST = FJAAOST;
} 
A_PROC_EXIT(prompt);
*ReturnedValue = (EJAAOST);
return;
} 
#undef NL
 /* line 189: */
 /* line 190: */
 /* line 191: */
 /* line 193: */

A68_BOOL  LJAAOST_filename_arg(A68_VC  Name, A68_VC  Sort, A68_VC  Type, A68_VC * Ans, A68_BOOL  Should_exist)
{ 
A68_194  MJAAOST;  /* collateral clause result */
A68_52  NJAAOST;  /* OPERATORS - mode -> union mode */
A68_52  QJAAOST;  /* OPERATORS - mode -> union mode */
A68_VC  RJAAOST;  /* YIELD */
A68_52  SJAAOST;  /* OPERATORS - mode -> union mode */
A68_56  TJAAOST;  /* procedure value */
A68_85  UJAAOST;  /* OPERATORS - istruct -> vector */
A68_BOOL  VJAAOST;  /* clause result */
A68_196  WJAAOST;  /* collateral clause result */
A68_52  XJAAOST;  /* OPERATORS - mode -> union mode */
A68_52  AKAAOST;  /* OPERATORS - mode -> union mode */
A68_VC  BKAAOST;  /* YIELD */
A68_52  CKAAOST;  /* OPERATORS - mode -> union mode */
A68_52  FKAAOST;  /* OPERATORS - mode -> union mode */
A68_VC  GKAAOST;  /* YIELD */
A68_52  HKAAOST;  /* OPERATORS - mode -> union mode */
A68_56  IKAAOST;  /* procedure value */
A68_85  JKAAOST;  /* clause result */
A68_85  KKAAOST;  /* OPERATORS - istruct -> vector */
A68_BOOL  LKAAOST_failed;
A68_97  OKAAOST_msg;   /* proc value of non-global proc */
A68_152  SKAAOST;  /* avoid structure result */
A68_199  TKAAOST;  /* collateral clause result */
A68_52  WKAAOST;  /* OPERATORS - mode -> union mode */
A68_VC  XKAAOST;  /* YIELD */
A68_52  YKAAOST;  /* OPERATORS - mode -> union mode */
A68_52  BLAAOST;  /* OPERATORS - mode -> union mode */
A68_VC  CLAAOST;  /* YIELD */
A68_52  DLAAOST;  /* OPERATORS - mode -> union mode */
A68_56  ELAAOST;  /* procedure value */
A68_85  FLAAOST;  /* OPERATORS - istruct -> vector */
A68_125 * GLAAOST_f;
A68_196  HLAAOST;  /* collateral clause result */
A68_52  KLAAOST;  /* OPERATORS - mode -> union mode */
A68_VC  LLAAOST;  /* YIELD */
A68_52  MLAAOST;  /* OPERATORS - mode -> union mode */
A68_52  PLAAOST;  /* OPERATORS - mode -> union mode */
A68_VC  QLAAOST;  /* YIELD */
A68_52  RLAAOST;  /* OPERATORS - mode -> union mode */
A68_52  SLAAOST;  /* OPERATORS - mode -> union mode */
A68_56  TLAAOST;  /* procedure value */
A68_85  ULAAOST;  /* OPERATORS - istruct -> vector */
A68_196  VLAAOST;  /* collateral clause result */
A68_VC  WLAAOST;  /* avoid structure result */
A68_52  XLAAOST;  /* OPERATORS - mode -> union mode */
A68_52  AMAAOST;  /* OPERATORS - mode -> union mode */
A68_VC  BMAAOST;  /* YIELD */
A68_52  CMAAOST;  /* OPERATORS - mode -> union mode */
A68_52  FMAAOST;  /* OPERATORS - mode -> union mode */
A68_VC  GMAAOST;  /* YIELD */
A68_52  HMAAOST;  /* OPERATORS - mode -> union mode */
A68_56  IMAAOST;  /* procedure value */
A68_85  JMAAOST;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(filename_arg);
 /* line 194: */
 /* line 195: */
if ( (Name.upb==0) )
{ 
MJAAOST.data[0] = A_UNITE(NJAAOST,mode7,7,Sort);
RJAAOST = PJAAOST ;
MJAAOST.data[1] = A_UNITE(QJAAOST,mode7,7,RJAAOST);
TJAAOST.fn.fn_global = LRAAOSL_newline;
TJAAOST.nonlocals = A68_NIL;
MJAAOST.data[2] = A_UNITE(SJAAOST,mode12,12,TJAAOST);
GFBAOSL_put(MEAAOST_err, A_HISVEC(UJAAOST,MJAAOST,3,A68_52 ));
 /* line 196: */
 /* line 197: */
VJAAOST = A68_FALSE;
} 
else
{ 
 /* line 198: */
if ( ((*Ans).upb>0) )
{ 
{ 
WJAAOST.data[0] = A_UNITE(XJAAOST,mode7,7,Name);
BKAAOST = ZJAAOST ;
WJAAOST.data[1] = A_UNITE(AKAAOST,mode7,7,BKAAOST);
 /* line 199: */
WJAAOST.data[2] = A_UNITE(CKAAOST,mode7,7,Sort);
GKAAOST = EKAAOST ;
WJAAOST.data[3] = A_UNITE(FKAAOST,mode7,7,GKAAOST);
IKAAOST.fn.fn_global = LRAAOSL_newline;
IKAAOST.nonlocals = A68_NIL;
WJAAOST.data[4] = A_UNITE(HKAAOST,mode12,12,IKAAOST);
JKAAOST = A_HISVEC(KKAAOST,WJAAOST,5,A68_52 );
} 
GFBAOSL_put(MEAAOST_err, JKAAOST);
 /* line 200: */
 /* line 201: */
VJAAOST = A68_FALSE;
} 
else
{ 
LKAAOST_failed = A68_FALSE;
 /* line 202: */
A_CLOSURE( OKAAOST_msg, PKAAOST_msg, QKAAOST_msg );
(( QKAAOST_msg * ) ( OKAAOST_msg.nonlocals )) -> LKAAOST_failed = (&LKAAOST_failed);
 /* line 205: */
TNCAOSI_parse_filename( Name, Type, OKAAOST_msg, &SKAAOST );
(*Ans) = SKAAOST.Filename;
 /* line 206: */
 /* line 207: */
if ( LKAAOST_failed )
{ 
XKAAOST = VKAAOST ;
TKAAOST.data[0] = A_UNITE(WKAAOST,mode7,7,XKAAOST);
TKAAOST.data[1] = A_UNITE(YKAAOST,mode7,7,Sort);
CLAAOST = ALAAOST ;
TKAAOST.data[2] = A_UNITE(BLAAOST,mode7,7,CLAAOST);
ELAAOST.fn.fn_global = LRAAOSL_newline;
ELAAOST.nonlocals = A68_NIL;
TKAAOST.data[3] = A_UNITE(DLAAOST,mode12,12,ELAAOST);
 /* line 208: */
 /* line 209: */
GFBAOSL_put(MEAAOST_err, A_HISVEC(FLAAOST,TKAAOST,4,A68_52 ));
} 
else
{ 
GLAAOST_f = FQBAOSI_open_file((*Ans), PNBAOSI_read_access, OKAAOST_msg);
 /* line 210: */
 /* line 211: */
if ( LKAAOST_failed )
{ 
 /* line 212: */
if ( Should_exist )
{ 
LLAAOST = JLAAOST ;
HLAAOST.data[0] = A_UNITE(KLAAOST,mode7,7,LLAAOST);
HLAAOST.data[1] = A_UNITE(MLAAOST,mode7,7,Sort);
 /* line 213: */
QLAAOST = OLAAOST ;
HLAAOST.data[2] = A_UNITE(PLAAOST,mode7,7,QLAAOST);
HLAAOST.data[3] = A_UNITE(RLAAOST,mode7,7,(*Ans));
TLAAOST.fn.fn_global = LRAAOSL_newline;
TLAAOST.nonlocals = A68_NIL;
HLAAOST.data[4] = A_UNITE(SLAAOST,mode12,12,TLAAOST);
GFBAOSL_put(MEAAOST_err, A_HISVEC(ULAAOST,HLAAOST,5,A68_52 ));
 /* line 214: */
 /* line 215: */
(*Ans) = EOAAOSL_nullstr;
} 
else
{ 
 /* line 216: */
 /* line 217: */
LKAAOST_failed = A68_FALSE;
} 
} 
else
{ 
 /* line 218: */
if ( !Should_exist )
{ 
LKAAOST_failed = A68_TRUE;
 /* line 219: */
YPBAOSI_file_name( GLAAOST_f, &WLAAOST );
VLAAOST.data[0] = A_UNITE(XLAAOST,mode7,7,WLAAOST);
BMAAOST = ZLAAOST ;
VLAAOST.data[1] = A_UNITE(AMAAOST,mode7,7,BMAAOST);
 /* line 220: */
VLAAOST.data[2] = A_UNITE(CMAAOST,mode7,7,Sort);
GMAAOST = EMAAOST ;
VLAAOST.data[3] = A_UNITE(FMAAOST,mode7,7,GMAAOST);
IMAAOST.fn.fn_global = LRAAOSL_newline;
IMAAOST.nonlocals = A68_NIL;
VLAAOST.data[4] = A_UNITE(HMAAOST,mode12,12,IMAAOST);
GFBAOSL_put(MEAAOST_err, A_HISVEC(JMAAOST,VLAAOST,5,A68_52 ));
 /* line 221: */
 /* line 222: */
(*Ans) = EOAAOSL_nullstr;
} 
 /* line 223: */
 /* line 224: */
 /* line 225: */
XQBAOSI_close_file(GLAAOST_f, XLBAOSI_ignore_msg);
} 
} 
 /* line 226: */
 /* line 227: */
VJAAOST = !LKAAOST_failed;
} 
} 
A_PROC_EXIT(filename_arg);
return( VJAAOST );
} 
#undef NL
 /* line 232: */
 /* line 233: */
 /* line 236: */

A68_VOID  OMAAOST_parse_arguments(A68_VC  Prompt, A68_118  Reset, A68_203  Check_arg, A68_204  No_more)
{ 
A68_INT  PMAAOST_attempts;
A68_46  QMAAOST;  /* avoid structure result */
A68_46  RMAAOST_args;
A68_BOOL  SMAAOST_failed;
A68_97  VMAAOST_msg;   /* proc value of non-global proc */
A68_INT  ZMAAOST_argc;
A68_147  ANAAOST_next;   /* proc value of non-global proc */
A68_BOOL  ENAAOST;  /* optbool result */
A68_VC  FNAAOST;  /* avoid structure result */
A68_VC  GNAAOST_arg;
A68_BOOL  HNAAOST;  /* optbool result */
A68_BOOL  INAAOST;  /* clause result */
A68_BOOL  JNAAOST;  /* optbool result */
A68_46  MNAAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  NNAAOST;  /* avoid structure result */
A_PROC_ENTRY(parse_arguments);
 /* line 237: */
 /* line 238: */
{ 
PMAAOST_attempts = 0;
 /* line 239: */
for ( ;; )
{ 
 /* line 240: */
PMAAOST_attempts+=1;
 /* line 241: */
JQCAOSI_get_args(  &QMAAOST );
RMAAOST_args = QMAAOST;
 /* line 242: */
A_CALLPROC(Reset,(),((Reset).nonlocals));
 /* line 243: */
SMAAOST_failed = (RMAAOST_args.upb<=1);
 /* line 244: */
A_CLOSURE( VMAAOST_msg, WMAAOST_msg, XMAAOST_msg );
(( XMAAOST_msg * ) ( VMAAOST_msg.nonlocals )) -> SMAAOST_failed = (&SMAAOST_failed);
 /* line 247: */
ZMAAOST_argc = 1;
 /* line 248: */
 /* line 249: */
A_CLOSURE( ANAAOST_next, BNAAOST_next, CNAAOST_next );
(( CNAAOST_next * ) ( ANAAOST_next.nonlocals )) -> ZMAAOST_argc = (&ZMAAOST_argc);
(( CNAAOST_next * ) ( ANAAOST_next.nonlocals )) -> RMAAOST_args = RMAAOST_args;
 /* line 251: */
for ( ;; )
{ 
 /* line 252: */
ENAAOST = (ZMAAOST_argc<RMAAOST_args.upb);
if ( ENAAOST )
{ENAAOST = !SMAAOST_failed;
}
if ( !(ENAAOST) ) break;
A_CALLPROC(ANAAOST_next,( &FNAAOST),( &FNAAOST,(ANAAOST_next).nonlocals));
GNAAOST_arg = FNAAOST;
 /* line 253: */
if ( !A_CALLPROC(Check_arg,(GNAAOST_arg, ANAAOST_next),(GNAAOST_arg, ANAAOST_next,(Check_arg).nonlocals)) )
{ 
 /* line 254: */
SMAAOST_failed = A68_TRUE;
} 
}
 /* line 256: */
 /* line 257: */
HNAAOST = !A_CALLPROC(No_more,(!SMAAOST_failed),(!SMAAOST_failed,(No_more).nonlocals));
if ( ! HNAAOST )
{HNAAOST = SMAAOST_failed;
}
INAAOST = HNAAOST;
if ( !INAAOST ) break;
 /* line 258: */
JNAAOST = (PMAAOST_attempts==3);
if ( ! JNAAOST )
{JNAAOST = !FIAAOST_interactive();
}
if ( JNAAOST )
{ 
 /* line 259: */
A_CALLPROC(ZLBAOSI_global_msg,(UHAAOSI_fatal, A_HVEC(MNAAOST,LNAAOST,A68_VC )),(UHAAOSI_fatal, A_HVEC(MNAAOST,LNAAOST,A68_VC ),(ZLBAOSI_global_msg).nonlocals));
} 
else
{ 
 /* line 260: */
 /* line 261: */
LSCAOSI_prompt_args( Prompt, ZLBAOSI_global_msg, &NNAAOST );
NNAAOST;
} 
}
 /* line 262: */
} 
A_PROC_EXIT(parse_arguments);
return;
} 
#undef NL

A68_BOOL  QNAAOST_interrupted(void)
{ 
A68_BOOL  RNAAOST;  /* clause result */
A_PROC_ENTRY(interrupted);
if ( (PNAAOST_n_interrupts>0) )
{ 
PNAAOST_n_interrupts = 0;
RNAAOST = A68_TRUE;
} 
else
{ 
RNAAOST = A68_FALSE;
} 
A_PROC_EXIT(interrupted);
return( RNAAOST );
} 
#undef NL

A68_VOID  SNAAOST_clear_interrupt(void)
{ 
A_PROC_ENTRY(clear_interrupt);
PNAAOST_n_interrupts = 0;
A_PROC_EXIT(clear_interrupt);
return;
} 
#undef NL

A_STATIC A68_VOID  VNAAOST_anonymous(A68_92  No, A68_46  Params)
{ 
A68_46  YNAAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  BOAAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_171  COAAOST;  /* collateral clause result */
A68_95  FOAAOST;  /* avoid structure result */
A68_46  GOAAOST;  /* OPERATORS - istruct -> vector */
A68_VC  HOAAOST;  /* avoid structure result */
A68_46  IOAAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  LOAAOST;  /* OPERATORS - scalar -> [] or VEC[] */
 /* line 286: */
 /* line 287: */
if ( (No.Number==UECAOSI_sigint) )
{ 
A_CALLPROC(ZLBAOSI_global_msg,(CIAAOSI_log, A_HVEC(YNAAOST,XNAAOST,A68_VC )),(CIAAOSI_log, A_HVEC(YNAAOST,XNAAOST,A68_VC ),(ZLBAOSI_global_msg).nonlocals));
 /* line 288: */
 /* line 289: */
if ( ((PNAAOST_n_interrupts+=1)>=ONAAOST_user_bored_threshold) )
{ 
 /* line 290: */
 /* line 291: */
 /* line 292: */
 /* line 293: */
A_CALLPROC(ZLBAOSI_global_msg,(WHAAOSI_user, A_HVEC(BOAAOST,AOAAOST,A68_VC )),(WHAAOSI_user, A_HVEC(BOAAOST,AOAAOST,A68_VC ),(ZLBAOSI_global_msg).nonlocals));
} 
} 
else
{ 
 /* line 294: */
COAAOST.data[0] = EOAAOST;
ONAAOSI_translate_msg( No, Params, &FOAAOST );
COAAOST.data[1] = FOAAOST.Text;
JBAAOSI_concat( A_HISVEC(GOAAOST,COAAOST,2,A68_VC ), &HOAAOST );
A_CALLPROC(ZLBAOSI_global_msg,(CIAAOSI_log, A_HVEC(IOAAOST,HOAAOST,A68_VC )),(CIAAOSI_log, A_HVEC(IOAAOST,HOAAOST,A68_VC ),(ZLBAOSI_global_msg).nonlocals));
 /* line 295: */
 /* line 296: */
 /* line 297: */
 /* line 298: */
A_CALLPROC(ZLBAOSI_global_msg,(WHAAOSI_user, A_HVEC(LOAAOST,KOAAOST,A68_VC )),(WHAAOSI_user, A_HVEC(LOAAOST,KOAAOST,A68_VC ),(ZLBAOSI_global_msg).nonlocals));
} 
return;
} 
#undef NL

A68_VOID  SOAAOST_flt_if_interrupted(A68_97  Msg)
{ 
A68_46  VOAAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(flt_if_interrupted);
 /* line 310: */
 /* line 311: */
if ( (PNAAOST_n_interrupts>0) )
{ 
SNAAOST_clear_interrupt();
 /* line 313: */
 /* line 314: */
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(VOAAOST,UOAAOST,A68_VC )),(WHAAOSI_user, A_HVEC(VOAAOST,UOAAOST,A68_VC ),(Msg).nonlocals));
} 
A_PROC_EXIT(flt_if_interrupted);
return;
} 
#undef NL

A68_VOID  YOAAOST_trap_errors(A68_211  Action, A68_97  Msg)
{ 
A68_97  ZOAAOST_old_global;
A68_215  BPAAOST_generator;   /* proc value of non-global proc */
A68_214  HPAAOST;  /* avoid structure result */
A68_214  GPAAOST_old_sigs;
A68_97 * IPAAOST_old;
A68_INT  JPAAOST_sig;
A68_INT * KPAAOST;  /* forall control - []x */
A68_INT  LPAAOST;  /* forall loop counter */
A68_97  MPAAOST;  /* avoid structure result */
A68_118  NPAAOST_reset_sigmsg;   /* proc value of non-global proc */
A68_97  XPAAOST_anonymous;   /* proc value of non-global proc */
A_PROC_ENTRY(trap_errors);
 /* line 318: */
 /* line 321: */
{ 
ZOAAOST_old_global = ZLBAOSI_global_msg;
 /* line 322: */
A_CLOSURE( BPAAOST_generator, CPAAOST_generator, DPAAOST_generator );
A_CALLPROC(BPAAOST_generator,(A68_TRUE, &HPAAOST),(A68_TRUE, &HPAAOST,(BPAAOST_generator).nonlocals));
GPAAOST_old_sigs = HPAAOST;
 /* line 323: */
 /* line 324: */
LPAAOST = GPAAOST_old_sigs.upb -1;
if ( LPAAOST != QOAAOST_trap_signals.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
IPAAOST_old = GPAAOST_old_sigs.data;
KPAAOST = QOAAOST_trap_signals.data;
for (;LPAAOST-- >= 0;
(IPAAOST_old++
,KPAAOST++
) )
{
JPAAOST_sig = *KPAAOST;
PLCAOSI_get_sigmsgproc( JPAAOST_sig, Msg, &MPAAOST );
(*IPAAOST_old) = MPAAOST;
}
 /* line 326: */
 /* line 327: */
 /* line 329: */
A_CLOSURE( NPAAOST_reset_sigmsg, OPAAOST_reset_sigmsg, PPAAOST_reset_sigmsg );
(( PPAAOST_reset_sigmsg * ) ( NPAAOST_reset_sigmsg.nonlocals )) -> ZOAAOST_old_global = ZOAAOST_old_global;
(( PPAAOST_reset_sigmsg * ) ( NPAAOST_reset_sigmsg.nonlocals )) -> GPAAOST_old_sigs = GPAAOST_old_sigs;
(( PPAAOST_reset_sigmsg * ) ( NPAAOST_reset_sigmsg.nonlocals )) -> Msg = Msg;
 /* line 335: */
YJCAOSI_set_sigmsgproc(QOAAOST_trap_signals, MOAAOST_sig_msg, Msg);
 /* line 337: */
A_CLOSURE( XPAAOST_anonymous, YPAAOST_anonymous, ZPAAOST_anonymous );
(( ZPAAOST_anonymous * ) ( XPAAOST_anonymous.nonlocals )) -> NPAAOST_reset_sigmsg = NPAAOST_reset_sigmsg;
(( ZPAAOST_anonymous * ) ( XPAAOST_anonymous.nonlocals )) -> Msg = Msg;
ZLBAOSI_global_msg = XPAAOST_anonymous;
 /* line 343: */
A_CALLPROC(Action,(ZLBAOSI_global_msg),(ZLBAOSI_global_msg,(Action).nonlocals));
 /* line 346: */
 /* line 347: */
A_CALLPROC(NPAAOST_reset_sigmsg,(),((NPAAOST_reset_sigmsg).nonlocals));
} 
A_PROC_EXIT(trap_errors);
return;
} 
#undef NL

A68_VOID  CQAAOST_mem_statistics(A68_36  P)
{ 
A_PROC_ENTRY(mem_statistics);
 /* line 353: */
A_CALLPROC(P,(EQAAOST),(EQAAOST,(P).nonlocals));
A_PROC_EXIT(mem_statistics);
return;
} 
#undef NL

A68_VOID  IQAAOST_check_host_data(A68_VC  Input, A68_VC  *ReturnedValue)
{ 
A68_VC  KQAAOST;  /* clause result */
A68_VC  MQAAOST;  /* avoid structure result */
A_PROC_ENTRY(check_host_data);
ZAAAOSI_makervc( LQAAOST, &MQAAOST );
KQAAOST = MQAAOST;
A_PROC_EXIT(check_host_data);
*ReturnedValue = (KQAAOST);
return;
} 
#undef NL
 /* line 376: */

A_STATIC A68_VOID  PQAAOST_anonymous(A68_173  Version, A68_BOOL  Trap_user_interrupts)
{ 
A68_VC  QQAAOST;  /* avoid structure result */
A68_VC  RQAAOST;  /* avoid structure result */
A68_VC  SQAAOST;  /* avoid structure result */
A68_VC  TQAAOST;  /* avoid structure result */
A68_VC  UQAAOST;  /* avoid structure result */
A68_97  VQAAOST;  /* procedure value */
A68_88  WQAAOST;  /* OPERATORS - mode -> union mode */
A68_36  XQAAOST;  /* YIELD */
A68_36  YQAAOST;  /* procedure value */
A68_87  ZQAAOST;  /* OPERATORS - mode -> union mode */
A68_INT  ARAAOST;  /* YIELD */
A68_88  ERAAOST;  /* OPERATORS - mode -> union mode */
A68_36  FRAAOST;  /* YIELD */
A68_36  GRAAOST;  /* procedure value */
A68_87  HRAAOST;  /* OPERATORS - mode -> union mode */
A68_INT  IRAAOST;  /* YIELD */
A68_32  JRAAOST;  /* OPERATORS - scalar -> [] or VEC[] */
 /* line 377: */
 /* line 378: */
{ 
ZAAAOSI_makervc( Version.Name, &QQAAOST );
PDAAOST_osfacility = QQAAOST;
 /* line 379: */
ZAAAOSI_makervc( Version.Version, &RQAAOST );
QDAAOST_version_str = RQAAOST;
 /* line 380: */
ZAAAOSI_makervc( Version.Date, &SQAAOST );
RDAAOST_version_date = SQAAOST;
 /* line 381: */
ZAAAOSI_makervc( Version.Msg, &TQAAOST );
SDAAOST_version_msg = TQAAOST;
 /* line 382: */
ZAAAOSI_makervc( Version.Sys_fault, &UQAAOST );
TDAAOST_sys_fault_message = UQAAOST;
 /* line 383: */
VQAAOST.fn.fn_global = KFAAOST_default_msg;
VQAAOST.nonlocals = A68_NIL;
ZLBAOSI_global_msg = VQAAOST;
 /* line 385: */
YQAAOST.fn.fn_global = KDAAOST_write_stdout;
YQAAOST.nonlocals = A68_NIL;
XQAAOST = YQAAOST ;
ARAAOST = 80 ;
LEAAOST_out = KEAAOST_screen = XPAAOSL_make_channel(A_UNITE(ZQAAOST,mode1,1,ARAAOST), A_UNITE(WQAAOST,mode1,1,XQAAOST));
 /* line 387: */
GRAAOST.fn.fn_global = CRAAOST_anonymous;
GRAAOST.nonlocals = A68_NIL;
FRAAOST = GRAAOST ;
IRAAOST = 80 ;
MEAAOST_err = XPAAOSL_make_channel(A_UNITE(HRAAOST,mode1,1,IRAAOST), A_UNITE(ERAAOST,mode1,1,FRAAOST));
 /* line 389: */
 /* line 390: */
if ( Trap_user_interrupts )
{ 
 /* line 392: */
 /* line 393: */
 /* line 395: */
YJCAOSI_set_sigmsgproc(A_HVEC(JRAAOST,UECAOSI_sigint,A68_INT ), MOAAOST_sig_msg, XLBAOSI_ignore_msg);
} 
} 
return;
} 
#undef NL
 /* line 1: */
 /* line 3: */
 /* line 4: */
 /* line 7: */
void PCAAOST(void)   /* initialise DECS osinterface */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/osinterface.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/osif/assoc/mfiles/osmessages.m","/u/model/ella/osif/assoc/mfiles/osif.m","/u/model/ella/osif/assoc/mfiles/cif.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_VC  NDAAOST;  /* OPERATORS - nil -> mode */
A68_174  JEAAOST;  /* procedure value */
A68_97  NOAAOST;  /* procedure value */
A68_210  OOAAOST;  /* collateral clause result */
A68_32  POAAOST;  /* OPERATORS - istruct -> vector */
A68_179  KRAAOST;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
MCBAOSI();   /* USE osmessages */
VSCAOSI();   /* USE osif */
JDAAOSI();   /* USE cif */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ostools/assoc/./a68files/osinterface.a68";
A_config.translation_time = "Tue Apr  4 09:49:07 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "OCAAOST (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:49:07 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS osinterface);
UEAALIB_a68config(LGAALIB_configinfo, TCAAOST);
 /* line 64: */
 /* line 69: */
 /* line 71: */
GDAAOST_io_partline = MPBAOSI_io_no_newline;
 /* line 73: */
 /* line 74: */
 /* line 76: */
 /* line 95: */
ODAAOST_nilstr = (A_VVAC(NDAAOST));
 /* line 96: */
PDAAOST_osfacility = ODAAOST_nilstr;
QDAAOST_version_str = ODAAOST_nilstr;
RDAAOST_version_date = ODAAOST_nilstr;
 /* line 97: */
SDAAOST_version_msg = ODAAOST_nilstr;
TDAAOST_sys_fault_message = ODAAOST_nilstr;
 /* line 99: */
 /* line 104: */
JEAAOST.fn.fn_global = WDAAOST_generator;
JEAAOST.nonlocals = A68_NIL;
UDAAOST_anonymous = JEAAOST;
 /* line 106: */
KEAAOST_screen = (A68_34 *)A68_NIL;
 /* line 107: */
LEAAOST_out = (A68_34 *)A68_NIL;
 /* line 108: */
MEAAOST_err = (A68_34 *)A68_NIL;
 /* line 113: */
PEAAOST_message_is = OEAAOST;
SEAAOST_bell_str = REAAOST;
 /* line 115: */
 /* line 117: */
 /* line 119: */
 /* line 120: */
 /* line 122: */
 /* line 126: */
 /* line 161: */
EIAAOST_os_string = DIAAOST;
 /* line 166: */
 /* line 169: */
 /* line 188: */
 /* line 230: */
 /* line 231: */
 /* line 276: */
 /* line 277: */
PNAAOST_n_interrupts = 0;
 /* line 279: */
 /* line 280: */
 /* line 282: */
 /* line 284: */
NOAAOST.fn.fn_global = VNAAOST_anonymous;
NOAAOST.nonlocals = A68_NIL;
MOAAOST_sig_msg = (NOAAOST);
 /* line 304: */
OOAAOST.data[0] = AFCAOSI_sigfpe;
OOAAOST.data[1] = CFCAOSI_sigbus;
OOAAOST.data[2] = DFCAOSI_sigsegv;
OOAAOST.data[3] = WECAOSI_sigill;
OOAAOST.data[4] = XECAOSI_sigtrap;
QOAAOST_trap_signals = A_HISVEC(POAAOST,OOAAOST,5,A68_INT );
 /* line 309: */
 /* line 317: */
 /* line 352: */
 /* line 362: */
FQAAOST_os_debug = A68_FALSE;
 /* line 366: */
 /* line 369: */
 /* line 374: */
 /* line 375: */
 /* line 660: */
KRAAOST.fn.fn_global = PQAAOST_anonymous;
KRAAOST.nonlocals = A68_NIL;
TEAAOST_initialise_osinterface = KRAAOST;
A_PROC_EXIT(DECS osinterface);
} 
#undef NL
/* end of translation of ./a68files/osinterface.a68 */
