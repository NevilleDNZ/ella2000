
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
/* UNAME:UWLATRN */
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
struct A68t111{
A68_BITS  Options;
A_PAD_BITS(PAD_24)
};
typedef struct A68t111  A68_111 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t112,(struct A68t111 ,struct A68t111 ,struct A68t111 *),(struct A68t111 ,struct A68t111 ,struct A68t111 *,void *));
typedef struct A68t112  A68_112 ;    /* PROC(MODE111,MODE111) MODE111 */

A_PROCEDURE(struct A68t111 *,A68t113,(struct A68t111 *,struct A68t111 ),(struct A68t111 *,struct A68t111 ,void *));
typedef struct A68t113  A68_113 ;    /* PROC(REF MODE111,MODE111) REF MODE111 */

A_PROCEDURE(A68_BOOL ,A68t114,(struct A68t111 ,struct A68t111 ),(struct A68t111 ,struct A68t111 ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(MODE111,MODE111) BOOL */

A_PROCEDURE(A68_BOOL ,A68t115,(struct A68t111 ,A68_INT ),(struct A68t111 ,A68_INT ,void *));
typedef struct A68t115  A68_115 ;    /* PROC(MODE111,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t116,(A68_INT ,struct A68t111 *),(A68_INT ,struct A68t111 *,void *));
typedef struct A68t116  A68_116 ;    /* PROC(INT) MODE111 */
struct A68t117{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t117  A68_117 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t118{
A68_VC  Id;
struct A68t118 * Rest;
};
typedef struct A68t118  A68_118 ;    /* STRUCT(REF MODE26,REF MODE118)  */
struct A68t119{
A68_INT  Int;
A_PAD_INT(PAD_25)
struct A68t119 * Rest;
};
typedef struct A68t119  A68_119 ;    /* STRUCT(INT,REF MODE119)  */
struct A68t120 { A68_INT mode; union {
struct A68t121 * mode1;
struct A68t122 * mode2;
struct A68t123 * mode3;
struct A68t124 * mode4;
struct A68t125 * mode5;
} data; };
typedef struct A68t120  A68_120 ;    /* UNION(REF MODE121,REF MODE122,REF MODE123,REF MODE124,REF MODE125)  */
struct A68t121{
A68_INT  Attrno;
A_PAD_INT(PAD_26)
};
typedef struct A68t121  A68_121 ;    /* STRUCT(INT)  */
struct A68t122{
A68_VC  Classname;
struct A68t118 * Strings;
};
typedef struct A68t122  A68_122 ;    /* STRUCT(REF MODE26,REF MODE118)  */
struct A68t123{
struct A68t120  Elem;
struct A68t123 * Rest;
};
typedef struct A68t123  A68_123 ;    /* STRUCT(MODE120,REF MODE123)  */
struct A68t124{
struct A68t120  Attr;
};
typedef struct A68t124  A68_124 ;    /* STRUCT(MODE120)  */
struct A68t125{
A68_INT  Attrnull;
A_PAD_INT(PAD_27)
};
typedef struct A68t125  A68_125 ;    /* STRUCT(INT)  */
struct A68t126{
A68_INT  Sort;
A_PAD_INT(PAD_28)
A68_VC  Attrname;
struct A68t120  Value;
struct A68t127 * Usage;
};
typedef struct A68t126  A68_126 ;    /* STRUCT(INT,REF MODE26,MODE120,REF MODE127)  */
struct A68t127{
A68_INT  Contextno;
A_PAD_INT(PAD_29)
A68_INT  Closureno;
A_PAD_INT(PAD_30)
A68_INT  Libv_spec;
A_PAD_INT(PAD_31)
A68_INT  Libv_body;
A_PAD_INT(PAD_32)
A68_BOOL  Import;
A_PAD_BOOL(PAD_33)
A68_BOOL  Export;
A_PAD_BOOL(PAD_34)
};
typedef struct A68t127  A68_127 ;    /* STRUCT(INT,INT,INT,INT,BOOL,BOOL)  */
struct A68t128{
struct A68t120  Tag;
};
typedef struct A68t128  A68_128 ;    /* STRUCT(MODE120)  */
struct A68t129 { A68_INT mode; union {
struct A68t130 * mode1;
struct A68t131 * mode2;
struct A68t132 * mode3;
struct A68t133 * mode4;
struct A68t134 * mode5;
struct A68t135 * mode6;
struct A68t136 * mode7;
struct A68t137 * mode8;
struct A68t138 * mode9;
struct A68t139 * mode10;
} data; };
typedef struct A68t129  A68_129 ;    /* UNION(REF MODE130,REF MODE131,REF MODE132,REF MODE133,REF MODE134,REF MODE135,REF MODE136,REF MODE137,REF MODE138,REF MODE139)  */
struct A68t130{
A68_INT  Int;
A_PAD_INT(PAD_35)
A68_VC  Text;
};
typedef struct A68t130  A68_130 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t131{
A68_INT  Sort;
A_PAD_INT(PAD_36)
struct A68t129  Test;
struct A68t129  Standard;
};
typedef struct A68t131  A68_131 ;    /* STRUCT(INT,MODE129,MODE129)  */
struct A68t132{
A68_INT  Nameno;
A_PAD_INT(PAD_37)
};
typedef struct A68t132  A68_132 ;    /* STRUCT(INT)  */
struct A68t133{
A68_INT  Intno;
A_PAD_INT(PAD_38)
};
typedef struct A68t133  A68_133 ;    /* STRUCT(INT)  */
struct A68t134{
struct A68t129  Left;
A68_INT  Sort;
A_PAD_INT(PAD_39)
struct A68t129  Right;
};
typedef struct A68t134  A68_134 ;    /* STRUCT(MODE129,INT,MODE129)  */
struct A68t135{
A68_INT  Sort;
A_PAD_INT(PAD_40)
struct A68t129  Right;
};
typedef struct A68t135  A68_135 ;    /* STRUCT(INT,MODE129)  */
struct A68t136{
struct A68t129  Cond;
struct A68t129  True;
struct A68t129  False;
};
typedef struct A68t136  A68_136 ;    /* STRUCT(MODE129,MODE129,MODE129)  */
struct A68t137{
struct A68t129  Formula;
};
typedef struct A68t137  A68_137 ;    /* STRUCT(MODE129)  */
struct A68t138{
A68_INT  Macparno;
A_PAD_INT(PAD_41)
};
typedef struct A68t138  A68_138 ;    /* STRUCT(INT)  */
struct A68t139{
A68_INT  Fnull;
A_PAD_INT(PAD_42)
};
typedef struct A68t139  A68_139 ;    /* STRUCT(INT)  */
struct A68t140{
struct A68t129  Tag;
};
typedef struct A68t140  A68_140 ;    /* STRUCT(MODE129)  */
struct A68t141{
struct A68t129  Formula;
struct A68t141 * Rest;
};
typedef struct A68t141  A68_141 ;    /* STRUCT(MODE129,REF MODE141)  */
struct A68t144{
struct A68t129  Lwb;
struct A68t129  Upb;
};
typedef struct A68t144  A68_144 ;    /* STRUCT(MODE129,MODE129)  */
struct A68t143 { A68_INT mode; union {
struct A68t130 * mode1;
struct A68t131 * mode2;
struct A68t132 * mode3;
struct A68t133 * mode4;
struct A68t134 * mode5;
struct A68t135 * mode6;
struct A68t136 * mode7;
struct A68t137 * mode8;
struct A68t138 * mode9;
struct A68t139 * mode10;
struct A68t144  mode11;
} data; };
typedef struct A68t143  A68_143 ;    /* UNION(REF MODE130,REF MODE131,REF MODE132,REF MODE133,REF MODE134,REF MODE135,REF MODE136,REF MODE137,REF MODE138,REF MODE139,MODE144)  */
struct A68t142{
A68_INT  Sort;
A_PAD_INT(PAD_43)
A68_VC  Intname;
struct A68t120  Attr;
struct A68t143  Value;
struct A68t127 * Usage;
};
typedef struct A68t142  A68_142 ;    /* STRUCT(INT,REF MODE26,MODE120,MODE143,REF MODE127)  */
struct A68t145 { A68_INT mode; union {
struct A68t146 * mode1;
struct A68t147 * mode2;
struct A68t148 * mode3;
struct A68t149 * mode4;
struct A68t150 * mode5;
struct A68t151 * mode6;
struct A68t152 * mode7;
struct A68t138 * mode8;
struct A68t153 * mode9;
} data; };
typedef struct A68t145  A68_145 ;    /* UNION(REF MODE146,REF MODE147,REF MODE148,REF MODE149,REF MODE150,REF MODE151,REF MODE152,REF MODE138,REF MODE153)  */
struct A68t146{
A68_INT  Typeno;
A_PAD_INT(PAD_44)
};
typedef struct A68t146  A68_146 ;    /* STRUCT(INT)  */
struct A68t147{
struct A68t129  Size;
struct A68t145  Elem;
};
typedef struct A68t147  A68_147 ;    /* STRUCT(MODE129,MODE145)  */
struct A68t148{
struct A68t145  Elem;
struct A68t148 * Rest;
};
typedef struct A68t148  A68_148 ;    /* STRUCT(MODE145,REF MODE148)  */
struct A68t149{
struct A68t145  From;
struct A68t145  To;
};
typedef struct A68t149  A68_149 ;    /* STRUCT(MODE145,MODE145)  */
struct A68t150{
struct A68t145  Type;
};
typedef struct A68t150  A68_150 ;    /* STRUCT(MODE145)  */
struct A68t151{
struct A68t129  Size;
struct A68t145  Char;
};
typedef struct A68t151  A68_151 ;    /* STRUCT(MODE129,MODE145)  */
struct A68t152{
A68_INT  Tvoid;
A_PAD_INT(PAD_45)
};
typedef struct A68t152  A68_152 ;    /* STRUCT(INT)  */
struct A68t153{
A68_INT  Tnull;
A_PAD_INT(PAD_46)
};
typedef struct A68t153  A68_153 ;    /* STRUCT(INT)  */
struct A68t154{
struct A68t145  Tag;
};
typedef struct A68t154  A68_154 ;    /* STRUCT(MODE145)  */
struct A68t155{
A68_VC  Tagname;
A68_VC  Chars;
};
typedef struct A68t155  A68_155 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t156{
A68_VC  Altname;
struct A68t145  Assoc;
};
typedef struct A68t156  A68_156 ;    /* STRUCT(REF MODE26,MODE145)  */
struct A68t157{
A68_VC  Tagname;
struct A68t144  Range;
};
typedef struct A68t157  A68_157 ;    /* STRUCT(REF MODE26,MODE144)  */
A_VECTOR(struct A68t156 ,A68t159);
typedef struct A68t159  A68_159 ;    /* VECTOR [] MODE156 */
struct A68t158 { A68_INT mode; union {
struct A68t159  mode1;
struct A68t157 * mode2;
struct A68t154 * mode3;
struct A68t155 * mode4;
} data; };
typedef struct A68t158  A68_158 ;    /* UNION(REF MODE159,REF MODE157,REF MODE154,REF MODE155)  */
struct A68t160{
A68_INT  Sort;
A_PAD_INT(PAD_47)
A68_VC  Typename;
struct A68t120  Attr;
struct A68t158  Body;
struct A68t127 * Usage;
};
typedef struct A68t160  A68_160 ;    /* STRUCT(INT,REF MODE26,MODE120,MODE158,REF MODE127)  */
struct A68t161{
A68_INT  Constno;
A_PAD_INT(PAD_48)
};
typedef struct A68t161  A68_161 ;    /* STRUCT(INT)  */
struct A68t162{
A68_INT  Typeno;
A_PAD_INT(PAD_49)
A68_INT  Primno;
A_PAD_INT(PAD_50)
};
typedef struct A68t162  A68_162 ;    /* STRUCT(INT,INT)  */
struct A68t163{
A68_INT  Typeno;
A_PAD_INT(PAD_51)
struct A68t129  Index;
};
typedef struct A68t163  A68_163 ;    /* STRUCT(INT,MODE129)  */
struct A68t164{
A68_INT  Typeno;
A_PAD_INT(PAD_52)
struct A68t144  Range;
};
typedef struct A68t164  A68_164 ;    /* STRUCT(INT,MODE144)  */
struct A68t165{
struct A68t145  Querytype;
};
typedef struct A68t165  A68_165 ;    /* STRUCT(MODE145)  */
struct A68t167 { A68_INT mode; union {
struct A68t161 * mode1;
struct A68t162 * mode2;
struct A68t163 * mode3;
struct A68t165 * mode4;
struct A68t168 * mode5;
struct A68t169 * mode6;
struct A68t150 * mode7;
struct A68t164 * mode8;
struct A68t170 * mode9;
struct A68t171 * mode10;
struct A68t172 * mode11;
struct A68t173 * mode12;
struct A68t174 * mode13;
struct A68t175 * mode14;
struct A68t176 * mode15;
struct A68t177 * mode16;
struct A68t178 * mode17;
struct A68t179 * mode18;
struct A68t180 * mode19;
struct A68t181 * mode20;
struct A68t182 * mode21;
struct A68t183 * mode22;
struct A68t184 * mode23;
struct A68t185 * mode24;
struct A68t186 * mode25;
struct A68t187 * mode26;
struct A68t188 * mode27;
struct A68t189 * mode28;
struct A68t190 * mode29;
struct A68t191 * mode30;
struct A68t192 * mode31;
struct A68t193 * mode32;
struct A68t194 * mode33;
struct A68t195 * mode34;
} data; };
typedef struct A68t167  A68_167 ;    /* UNION(REF MODE161,REF MODE162,REF MODE163,REF MODE165,REF MODE168,REF MODE169,REF MODE150,REF MODE164,REF MODE170,REF MODE171,REF MODE172,REF MODE173,REF MODE174,REF MODE175,REF MODE176,REF MODE177,REF MODE178,REF MODE179,REF MODE180,REF MODE181,REF MODE182,REF MODE183,REF MODE184,REF MODE185,REF MODE186,REF MODE187,REF MODE188,REF MODE189,REF MODE190,REF MODE191,REF MODE192,REF MODE193,REF MODE194,REF MODE195)  */
struct A68t166{
A68_INT  Sort;
A_PAD_INT(PAD_53)
A68_VC  Constname;
struct A68t120  Attr;
struct A68t167  Value;
struct A68t127 * Usage;
};
typedef struct A68t166  A68_166 ;    /* STRUCT(INT,REF MODE26,MODE120,MODE167,REF MODE127)  */
struct A68t168{
A68_INT  Typeno;
A_PAD_INT(PAD_54)
struct A68t32  String;
};
typedef struct A68t168  A68_168 ;    /* STRUCT(INT,REF MODE32)  */
struct A68t169{
A68_INT  Cvoid;
A_PAD_INT(PAD_55)
};
typedef struct A68t169  A68_169 ;    /* STRUCT(INT)  */
struct A68t170{
A68_INT  Typeno;
A_PAD_INT(PAD_56)
A68_INT  Firstno;
A_PAD_INT(PAD_57)
A68_INT  Lastno;
A_PAD_INT(PAD_58)
};
typedef struct A68t170  A68_170 ;    /* STRUCT(INT,INT,INT)  */
struct A68t171{
struct A68t167  Alt;
struct A68t171 * Rest;
};
typedef struct A68t171  A68_171 ;    /* STRUCT(MODE167,REF MODE171)  */
struct A68t172{
A68_INT  Sort;
A_PAD_INT(PAD_59)
A68_INT  Nameno;
A_PAD_INT(PAD_60)
};
typedef struct A68t172  A68_172 ;    /* STRUCT(INT,INT)  */
struct A68t173{
struct A68t167  Sink;
struct A68t167  Source;
};
typedef struct A68t173  A68_173 ;    /* STRUCT(MODE167,MODE167)  */
struct A68t174{
A68_INT  Typeno;
A_PAD_INT(PAD_61)
A68_INT  Altno;
A_PAD_INT(PAD_62)
struct A68t167  Assoc;
};
typedef struct A68t174  A68_174 ;    /* STRUCT(INT,INT,MODE167)  */
struct A68t175{
struct A68t167  Extract;
A68_INT  Typeno;
A_PAD_INT(PAD_63)
A68_INT  Altno;
A_PAD_INT(PAD_64)
};
typedef struct A68t175  A68_175 ;    /* STRUCT(MODE167,INT,INT)  */
struct A68t176{
struct A68t167  Unit;
A68_INT  Fnno;
A_PAD_INT(PAD_65)
A68_INT  Nameno;
A_PAD_INT(PAD_66)
};
typedef struct A68t176  A68_176 ;    /* STRUCT(MODE167,INT,INT)  */
struct A68t177{
struct A68t167  Unit;
struct A68t129  Index;
};
typedef struct A68t177  A68_177 ;    /* STRUCT(MODE167,MODE129)  */
struct A68t178{
struct A68t167  Unit;
struct A68t144  Range;
};
typedef struct A68t178  A68_178 ;    /* STRUCT(MODE167,MODE144)  */
struct A68t179{
struct A68t167  Unit;
struct A68t167  Index;
};
typedef struct A68t179  A68_179 ;    /* STRUCT(MODE167,MODE167)  */
struct A68t180{
struct A68t167  Unit;
struct A68t167  Index;
struct A68t167  From;
};
typedef struct A68t180  A68_180 ;    /* STRUCT(MODE167,MODE167,MODE167)  */
struct A68t181{
struct A68t129  Size;
struct A68t167  Elem;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(MODE129,MODE167)  */
struct A68t182{
struct A68t167  Elem;
struct A68t182 * Rest;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(MODE167,REF MODE182)  */
struct A68t183{
A68_BOOL  String;
A_PAD_BOOL(PAD_67)
A68_INT  Sort;
A_PAD_INT(PAD_68)
struct A68t167  Left;
struct A68t167  Right;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(BOOL,INT,MODE167,MODE167)  */
A_VECTOR(struct A68t210 ,A68t209);
typedef struct A68t209  A68_209 ;    /* VECTOR [] MODE210 */
struct A68t212{
struct A68t167  Tag;
};
typedef struct A68t212  A68_212 ;    /* STRUCT(MODE167)  */
struct A68t207{
A68_INT  Fnno;
A_PAD_INT(PAD_69)
struct A68t209  Macparams;
struct A68t120  Attr;
};
typedef struct A68t207  A68_207 ;    /* STRUCT(INT,REF MODE209,MODE120)  */
struct A68t211 { A68_INT mode; union {
struct A68t128  mode1;
struct A68t140  mode2;
struct A68t154  mode3;
struct A68t212  mode4;
struct A68t207  mode5;
} data; };
typedef struct A68t211  A68_211 ;    /* UNION(MODE128,MODE140,MODE154,MODE212,MODE207)  */
struct A68t210{
A68_INT  Sort;
A_PAD_INT(PAD_70)
struct A68t211  Param;
};
typedef struct A68t210  A68_210 ;    /* STRUCT(INT,MODE211)  */
struct A68t184{
struct A68t207  Inst;
struct A68t167  Right;
};
typedef struct A68t184  A68_184 ;    /* STRUCT(MODE207,MODE167)  */
struct A68t185{
struct A68t167  Left;
struct A68t207  Inst;
struct A68t167  Right;
};
typedef struct A68t185  A68_185 ;    /* STRUCT(MODE167,MODE207,MODE167)  */
struct A68t186{
struct A68t167  Input;
struct A68t227 * Choices;
};
typedef struct A68t186  A68_186 ;    /* STRUCT(MODE167,REF MODE227)  */
struct A68t187{
struct A68t129  Cond;
struct A68t167  True;
struct A68t167  False;
};
typedef struct A68t187  A68_187 ;    /* STRUCT(MODE129,MODE167,MODE167)  */
struct A68t188{
struct A68t129  Repl;
struct A68t167  Body;
};
typedef struct A68t188  A68_188 ;    /* STRUCT(MODE129,MODE167)  */
struct A68t189{
struct A68t215 * Body;
struct A68t167  Output;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(REF MODE215,MODE167)  */
struct A68t190{
struct A68t196 * Body;
struct A68t167  Output;
};
typedef struct A68t190  A68_190 ;    /* STRUCT(REF MODE196,MODE167)  */
struct A68t191{
struct A68t167  Unit;
struct A68t120  Attr;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(MODE167,MODE120)  */
struct A68t192{
struct A68t167  Unit;
struct A68t131  Check;
};
typedef struct A68t192  A68_192 ;    /* STRUCT(MODE167,MODE131)  */
struct A68t193{
struct A68t167  Unit;
};
typedef struct A68t193  A68_193 ;    /* STRUCT(MODE167)  */
struct A68t194{
struct A68t129  Size;
struct A68t167  Char;
};
typedef struct A68t194  A68_194 ;    /* STRUCT(MODE129,MODE167)  */
struct A68t195{
A68_INT  Unull;
A_PAD_INT(PAD_71)
};
typedef struct A68t195  A68_195 ;    /* STRUCT(INT)  */
struct A68t198{
A68_INT  Fnno;
A_PAD_INT(PAD_72)
};
typedef struct A68t198  A68_198 ;    /* STRUCT(INT)  */
struct A68t197 { A68_INT mode; union {
struct A68t121  mode1;
struct A68t133  mode2;
struct A68t146  mode3;
struct A68t161  mode4;
struct A68t198  mode5;
struct A68t199 * mode6;
struct A68t200 * mode7;
struct A68t201 * mode8;
struct A68t202 * mode9;
struct A68t203 * mode10;
struct A68t204 * mode11;
struct A68t205 * mode12;
} data; };
typedef struct A68t197  A68_197 ;    /* UNION(MODE121,MODE133,MODE146,MODE161,MODE198,REF MODE199,REF MODE200,REF MODE201,REF MODE202,REF MODE203,REF MODE204,REF MODE205)  */
struct A68t196{
struct A68t197  Step;
struct A68t196 * Rest;
};
typedef struct A68t196  A68_196 ;    /* STRUCT(MODE197,REF MODE196)  */
struct A68t199{
struct A68t129  Cond;
struct A68t213 * Print;
};
typedef struct A68t199  A68_199 ;    /* STRUCT(MODE129,REF MODE213)  */
struct A68t200{
struct A68t129  Cond;
struct A68t213 * Fault;
};
typedef struct A68t200  A68_200 ;    /* STRUCT(MODE129,REF MODE213)  */
struct A68t201{
struct A68t208 * Letnames;
struct A68t167  Unit;
};
typedef struct A68t201  A68_201 ;    /* STRUCT(REF MODE208,MODE167)  */
struct A68t202{
struct A68t141 * Sizes;
struct A68t207  Inst;
struct A68t208 * Makenames;
};
typedef struct A68t202  A68_202 ;    /* STRUCT(REF MODE141,MODE207,REF MODE208)  */
struct A68t203{
struct A68t167  From;
struct A68t167  To;
};
typedef struct A68t203  A68_203 ;    /* STRUCT(MODE167,MODE167)  */
struct A68t204{
struct A68t141 * Repls;
struct A68t206 * Joins;
};
typedef struct A68t204  A68_204 ;    /* STRUCT(REF MODE141,REF MODE206)  */
struct A68t205{
A68_INT  Stepnull;
A_PAD_INT(PAD_73)
};
typedef struct A68t205  A68_205 ;    /* STRUCT(INT)  */
struct A68t206{
struct A68t203  Join;
struct A68t206 * Rest;
};
typedef struct A68t206  A68_206 ;    /* STRUCT(MODE203,REF MODE206)  */
struct A68t208{
A68_INT  Nameno;
A_PAD_INT(PAD_74)
struct A68t208 * Rest;
};
typedef struct A68t208  A68_208 ;    /* STRUCT(INT,REF MODE208)  */
struct A68t214 { A68_INT mode; union {
A68_VC  mode1;
struct A68t140 * mode2;
} data; };
typedef struct A68t214  A68_214 ;    /* UNION(REF MODE26,REF MODE140)  */
struct A68t213{
struct A68t214  Item;
struct A68t213 * Rest;
};
typedef struct A68t213  A68_213 ;    /* STRUCT(MODE214,REF MODE213)  */
struct A68t216 { A68_INT mode; union {
struct A68t121  mode1;
struct A68t133  mode2;
struct A68t146  mode3;
struct A68t161  mode4;
struct A68t198  mode5;
struct A68t199 * mode6;
struct A68t200 * mode7;
struct A68t217 * mode8;
struct A68t218 * mode9;
struct A68t219 * mode10;
struct A68t220 * mode11;
struct A68t221 * mode12;
struct A68t222 * mode13;
struct A68t223 * mode14;
struct A68t224 * mode15;
struct A68t215 * mode16;
struct A68t225 * mode17;
} data; };
typedef struct A68t216  A68_216 ;    /* UNION(MODE121,MODE133,MODE146,MODE161,MODE198,REF MODE199,REF MODE200,REF MODE217,REF MODE218,REF MODE219,REF MODE220,REF MODE221,REF MODE222,REF MODE223,REF MODE224,REF MODE215,REF MODE225)  */
struct A68t215{
struct A68t216  Step;
struct A68t215 * Rest;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(MODE216,REF MODE215)  */
struct A68t217{
struct A68t201  Seqlet;
};
typedef struct A68t217  A68_217 ;    /* STRUCT(MODE201)  */
struct A68t218{
struct A68t201  Seqvar;
};
typedef struct A68t218  A68_218 ;    /* STRUCT(MODE201)  */
struct A68t219{
struct A68t208 * Pvarnames;
struct A68t167  Init;
};
typedef struct A68t219  A68_219 ;    /* STRUCT(REF MODE208,MODE167)  */
struct A68t220{
struct A68t167  To;
struct A68t167  From;
};
typedef struct A68t220  A68_220 ;    /* STRUCT(MODE167,MODE167)  */
struct A68t221{
struct A68t167  Input;
struct A68t226 * Choices;
};
typedef struct A68t221  A68_221 ;    /* STRUCT(MODE167,REF MODE226)  */
struct A68t222{
struct A68t129  Cond;
struct A68t216  True;
struct A68t216  False;
};
typedef struct A68t222  A68_222 ;    /* STRUCT(MODE129,MODE216,MODE216)  */
struct A68t223{
struct A68t129  Repl;
struct A68t216  Body;
};
typedef struct A68t223  A68_223 ;    /* STRUCT(MODE129,MODE216)  */
struct A68t224{
A68_INT  Seqnull;
A_PAD_INT(PAD_75)
};
typedef struct A68t224  A68_224 ;    /* STRUCT(INT)  */
struct A68t225{
struct A68t129  Size;
struct A68t216  Elem;
};
typedef struct A68t225  A68_225 ;    /* STRUCT(MODE129,MODE216)  */
struct A68t226{
A68_BOOL  Check;
A_PAD_BOOL(PAD_76)
A68_INT  Sort;
A_PAD_INT(PAD_77)
struct A68t167  Test;
struct A68t216  Output;
struct A68t226 * Rest;
};
typedef struct A68t226  A68_226 ;    /* STRUCT(BOOL,INT,MODE167,MODE216,REF MODE226)  */
struct A68t227{
A68_BOOL  Check;
A_PAD_BOOL(PAD_78)
A68_INT  Sort;
A_PAD_INT(PAD_79)
struct A68t167  Test;
struct A68t167  Output;
struct A68t227 * Rest;
};
typedef struct A68t227  A68_227 ;    /* STRUCT(BOOL,INT,MODE167,MODE167,REF MODE227)  */
struct A68t228 { A68_INT mode; union {
struct A68t121  mode1;
struct A68t133  mode2;
struct A68t146  mode3;
struct A68t161  mode4;
struct A68t198  mode5;
} data; };
typedef struct A68t228  A68_228 ;    /* UNION(MODE121,MODE133,MODE146,MODE161,MODE198)  */
struct A68t229{
A68_BOOL  Biop;
A_PAD_BOOL(PAD_80)
A68_VC  Name;
struct A68t209  Macparams;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(BOOL,REF MODE26,REF MODE209)  */
struct A68t230{
struct A68t129  Output;
};
typedef struct A68t230  A68_230 ;    /* STRUCT(MODE129)  */
struct A68t231{
A68_INT  Reform;
A_PAD_INT(PAD_81)
};
typedef struct A68t231  A68_231 ;    /* STRUCT(INT)  */
struct A68t232{
A68_VC  Name;
A68_INT  Contextno;
A_PAD_INT(PAD_82)
struct A68t117  Ctname;
};
typedef struct A68t232  A68_232 ;    /* STRUCT(REF MODE26,INT,MODE117)  */
struct A68t233{
A68_INT  Sort;
A_PAD_INT(PAD_83)
struct A68t167  Init;
struct A68t129  Ambigtime;
struct A68t167  Ambig;
struct A68t129  Delaytime;
};
typedef struct A68t233  A68_233 ;    /* STRUCT(INT,MODE167,MODE129,MODE167,MODE129)  */
struct A68t234{
struct A68t167  Init;
struct A68t129  Delaytime;
};
typedef struct A68t234  A68_234 ;    /* STRUCT(MODE167,MODE129)  */
struct A68t235{
struct A68t167  Init;
};
typedef struct A68t235  A68_235 ;    /* STRUCT(MODE167)  */
struct A68t236{
A68_INT  Sort;
A_PAD_INT(PAD_84)
struct A68t129  Interval;
struct A68t167  Init;
struct A68t129  Skew;
};
typedef struct A68t236  A68_236 ;    /* STRUCT(INT,MODE129,MODE167,MODE129)  */
struct A68t237{
A68_BOOL  Faster;
A_PAD_BOOL(PAD_85)
A68_INT  Sort;
A_PAD_INT(PAD_86)
struct A68t207  Inst;
struct A68t129  Scale;
struct A68t167  Init;
struct A68t129  Skew;
};
typedef struct A68t237  A68_237 ;    /* STRUCT(BOOL,INT,MODE207,MODE129,MODE167,MODE129)  */
struct A68t239 { A68_INT mode; union {
struct A68t212 * mode1;
struct A68t229 * mode2;
struct A68t230 * mode3;
struct A68t231 * mode4;
struct A68t232 * mode5;
struct A68t233 * mode6;
struct A68t234 * mode7;
struct A68t235 * mode8;
struct A68t236 * mode9;
struct A68t237 * mode10;
struct A68t238 * mode11;
struct A68t240 * mode12;
} data; };
typedef struct A68t239  A68_239 ;    /* UNION(REF MODE212,REF MODE229,REF MODE230,REF MODE231,REF MODE232,REF MODE233,REF MODE234,REF MODE235,REF MODE236,REF MODE237,REF MODE238,REF MODE240)  */
struct A68t238{
struct A68t119 * Joincheck;
A68_BOOL  Check;
A_PAD_BOOL(PAD_87)
struct A68t239  Fnbody;
};
typedef struct A68t238  A68_238 ;    /* STRUCT(REF MODE119,BOOL,MODE239)  */
struct A68t240{
A68_INT  Bodynull;
A_PAD_INT(PAD_88)
};
typedef struct A68t240  A68_240 ;    /* STRUCT(INT)  */
struct A68t241{
A68_INT  Sort;
A_PAD_INT(PAD_89)
struct A68t228  Spec;
};
typedef struct A68t241  A68_241 ;    /* STRUCT(INT,MODE228)  */
struct A68t242{
A68_VC  Name;
struct A68t145  Type;
struct A68t120  Attr;
};
typedef struct A68t242  A68_242 ;    /* STRUCT(REF MODE26,MODE145,MODE120)  */
A_VECTOR(struct A68t241 ,A68t244);
typedef struct A68t244  A68_244 ;    /* VECTOR [] MODE241 */
A_VECTOR(struct A68t242 ,A68t245);
typedef struct A68t245  A68_245 ;    /* VECTOR [] MODE242 */
struct A68t243{
A68_INT  Sort;
A_PAD_INT(PAD_90)
A68_BOOL  Macro;
A_PAD_BOOL(PAD_91)
A68_VC  Fnname;
struct A68t244  Macspecs;
struct A68t120  Attr;
struct A68t208 * Inputs;
struct A68t208 * Outputs;
struct A68t245  Nametypes;
struct A68t239  Fnbody;
struct A68t127 * Usage;
};
typedef struct A68t243  A68_243 ;    /* STRUCT(INT,BOOL,REF MODE26,REF MODE244,MODE120,REF MODE208,REF MODE208,REF MODE245,MODE239,REF MODE127)  */
A_VECTOR(struct A68t126 *,A68t247);
typedef struct A68t247  A68_247 ;    /* VECTOR [] REF MODE126 */
A_VECTOR(struct A68t142 *,A68t248);
typedef struct A68t248  A68_248 ;    /* VECTOR [] REF MODE142 */
A_VECTOR(struct A68t160 *,A68t249);
typedef struct A68t249  A68_249 ;    /* VECTOR [] REF MODE160 */
A_VECTOR(struct A68t166 *,A68t250);
typedef struct A68t250  A68_250 ;    /* VECTOR [] REF MODE166 */
A_VECTOR(struct A68t243 *,A68t251);
typedef struct A68t251  A68_251 ;    /* VECTOR [] REF MODE243 */
struct A68t246{
struct A68t247  Attrs;
struct A68t248  Ints;
struct A68t249  Types;
struct A68t250  Consts;
struct A68t251  Fns;
};
typedef struct A68t246  A68_246 ;    /* STRUCT(REF MODE247,REF MODE248,REF MODE249,REF MODE250,REF MODE251)  */
struct A68t252{
A68_INT  Closureno;
A_PAD_INT(PAD_92)
A68_INT  Sort;
A_PAD_INT(PAD_93)
struct A68t246 * Environ;
};
typedef struct A68t252  A68_252 ;    /* STRUCT(INT,INT,REF MODE246)  */
struct A68t253{
struct A68t252  Outer;
struct A68t253 * Rest;
};
typedef struct A68t253  A68_253 ;    /* STRUCT(MODE252,REF MODE253)  */
A_VECTOR(struct A68t253 ,A68t255);
typedef struct A68t255  A68_255 ;    /* VECTOR [] MODE253 */
struct A68t254{
struct A68t255  Outers;
struct A68t254 * Rest;
};
typedef struct A68t254  A68_254 ;    /* STRUCT(REF MODE255,REF MODE254)  */
struct A68t256{
A68_INT  Max_closureno;
A_PAD_INT(PAD_94)
struct A68t253 * Outers;
struct A68t253 * Freelist;
struct A68t254 * Outerslist;
};
typedef struct A68t256  A68_256 ;    /* STRUCT(INT,REF MODE253,REF MODE253,REF MODE254)  */
A_VECTOR(struct A68t253 *,A68t257);
typedef struct A68t257  A68_257 ;    /* VECTOR [] REF MODE253 */

A_PROCEDURE(struct A68t132 *,A68t258,(A68_INT ),(A68_INT ,void *));
typedef struct A68t258  A68_258 ;    /* PROC(INT) REF MODE132 */

A_PROCEDURE(struct A68t133 *,A68t259,(A68_INT ),(A68_INT ,void *));
typedef struct A68t259  A68_259 ;    /* PROC(INT) REF MODE133 */

A_PROCEDURE(struct A68t137 *,A68t260,(struct A68t129 ),(struct A68t129 ,void *));
typedef struct A68t260  A68_260 ;    /* PROC(MODE129) REF MODE137 */

A_PROCEDURE(struct A68t140 *,A68t261,(struct A68t129 ),(struct A68t129 ,void *));
typedef struct A68t261  A68_261 ;    /* PROC(MODE129) REF MODE140 */

A_PROCEDURE(struct A68t146 *,A68t262,(A68_INT ),(A68_INT ,void *));
typedef struct A68t262  A68_262 ;    /* PROC(INT) REF MODE146 */

A_PROCEDURE(struct A68t150 *,A68t263,(struct A68t145 ),(struct A68t145 ,void *));
typedef struct A68t263  A68_263 ;    /* PROC(MODE145) REF MODE150 */

A_PROCEDURE(struct A68t154 *,A68t264,(struct A68t145 ),(struct A68t145 ,void *));
typedef struct A68t264  A68_264 ;    /* PROC(MODE145) REF MODE154 */

A_PROCEDURE(struct A68t161 *,A68t265,(A68_INT ),(A68_INT ,void *));
typedef struct A68t265  A68_265 ;    /* PROC(INT) REF MODE161 */

A_PROCEDURE(struct A68t165 *,A68t266,(struct A68t145 ),(struct A68t145 ,void *));
typedef struct A68t266  A68_266 ;    /* PROC(MODE145) REF MODE165 */

A_PROCEDURE(struct A68t217 *,A68t267,(struct A68t201 ),(struct A68t201 ,void *));
typedef struct A68t267  A68_267 ;    /* PROC(MODE201) REF MODE217 */

A_PROCEDURE(struct A68t218 *,A68t268,(struct A68t201 ),(struct A68t201 ,void *));
typedef struct A68t268  A68_268 ;    /* PROC(MODE201) REF MODE218 */

A_PROCEDURE(struct A68t193 *,A68t269,(struct A68t167 ),(struct A68t167 ,void *));
typedef struct A68t269  A68_269 ;    /* PROC(MODE167) REF MODE193 */

A_PROCEDURE(struct A68t212 *,A68t270,(struct A68t167 ),(struct A68t167 ,void *));
typedef struct A68t270  A68_270 ;    /* PROC(MODE167) REF MODE212 */

A_PROCEDURE(struct A68t198 *,A68t271,(A68_INT ),(A68_INT ,void *));
typedef struct A68t271  A68_271 ;    /* PROC(INT) REF MODE198 */

A_PROCEDURE(struct A68t230 *,A68t272,(struct A68t129 ),(struct A68t129 ,void *));
typedef struct A68t272  A68_272 ;    /* PROC(MODE129) REF MODE230 */

A_PROCEDURE(struct A68t235 *,A68t273,(struct A68t167 ),(struct A68t167 ,void *));
typedef struct A68t273  A68_273 ;    /* PROC(MODE167) REF MODE235 */

A_PROCEDURE(struct A68t138 *,A68t274,(A68_INT ),(A68_INT ,void *));
typedef struct A68t274  A68_274 ;    /* PROC(INT) REF MODE138 */

A_PROCEDURE(struct A68t121 *,A68t275,(A68_INT ),(A68_INT ,void *));
typedef struct A68t275  A68_275 ;    /* PROC(INT) REF MODE121 */

A_PROCEDURE(struct A68t128 *,A68t276,(struct A68t120 ),(struct A68t120 ,void *));
typedef struct A68t276  A68_276 ;    /* PROC(MODE120) REF MODE128 */

A_PROCEDURE(struct A68t124 *,A68t277,(struct A68t120 ),(struct A68t120 ,void *));
typedef struct A68t277  A68_277 ;    /* PROC(MODE120) REF MODE124 */
A_VECTOR(struct A68t118 *,A68t278);
typedef struct A68t278  A68_278 ;    /* VECTOR [] REF MODE118 */
struct A68t279{
struct A68t120  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_95)
};
typedef struct A68t279  A68_279 ;    /* STRUCT(MODE120,BOOL)  */
struct A68t280{
struct A68t123 * A;
A68_BOOL  C;
A_PAD_BOOL(PAD_96)
};
typedef struct A68t280  A68_280 ;    /* STRUCT(REF MODE123,BOOL)  */
struct A68t281{
struct A68t126 * A;
A68_BOOL  C;
A_PAD_BOOL(PAD_97)
};
typedef struct A68t281  A68_281 ;    /* STRUCT(REF MODE126,BOOL)  */
struct A68t282{
struct A68t129  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_98)
};
typedef struct A68t282  A68_282 ;    /* STRUCT(MODE129,BOOL)  */
struct A68t283{
struct A68t141 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_99)
};
typedef struct A68t283  A68_283 ;    /* STRUCT(REF MODE141,BOOL)  */
struct A68t284{
struct A68t142 * I;
A68_BOOL  C;
A_PAD_BOOL(PAD_100)
};
typedef struct A68t284  A68_284 ;    /* STRUCT(REF MODE142,BOOL)  */
struct A68t285{
struct A68t144  R;
A68_BOOL  C;
A_PAD_BOOL(PAD_101)
};
typedef struct A68t285  A68_285 ;    /* STRUCT(MODE144,BOOL)  */
struct A68t286{
struct A68t143  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_102)
};
typedef struct A68t286  A68_286 ;    /* STRUCT(MODE143,BOOL)  */
struct A68t287{
struct A68t148 * T;
A68_BOOL  C;
A_PAD_BOOL(PAD_103)
};
typedef struct A68t287  A68_287 ;    /* STRUCT(REF MODE148,BOOL)  */
struct A68t288{
struct A68t145  T;
A68_BOOL  C;
A_PAD_BOOL(PAD_104)
};
typedef struct A68t288  A68_288 ;    /* STRUCT(MODE145,BOOL)  */
struct A68t289{
struct A68t156  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_105)
};
typedef struct A68t289  A68_289 ;    /* STRUCT(MODE156,BOOL)  */
struct A68t290{
struct A68t159  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_106)
};
typedef struct A68t290  A68_290 ;    /* STRUCT(REF MODE159,BOOL)  */
struct A68t291{
struct A68t158  T;
A68_BOOL  C;
A_PAD_BOOL(PAD_107)
};
typedef struct A68t291  A68_291 ;    /* STRUCT(MODE158,BOOL)  */
struct A68t292{
struct A68t160 * T;
A68_BOOL  C;
A_PAD_BOOL(PAD_108)
};
typedef struct A68t292  A68_292 ;    /* STRUCT(REF MODE160,BOOL)  */
struct A68t293{
struct A68t166 * Co;
A68_BOOL  C;
A_PAD_BOOL(PAD_109)
};
typedef struct A68t293  A68_293 ;    /* STRUCT(REF MODE166,BOOL)  */
struct A68t294{
struct A68t171 * Ua;
A68_BOOL  C;
A_PAD_BOOL(PAD_110)
};
typedef struct A68t294  A68_294 ;    /* STRUCT(REF MODE171,BOOL)  */
struct A68t295{
struct A68t182 * U;
A68_BOOL  C;
A_PAD_BOOL(PAD_111)
};
typedef struct A68t295  A68_295 ;    /* STRUCT(REF MODE182,BOOL)  */
struct A68t296{
struct A68t227 * U;
A68_BOOL  C;
A_PAD_BOOL(PAD_112)
};
typedef struct A68t296  A68_296 ;    /* STRUCT(REF MODE227,BOOL)  */
struct A68t297{
struct A68t167  U;
A68_BOOL  C;
A_PAD_BOOL(PAD_113)
};
typedef struct A68t297  A68_297 ;    /* STRUCT(MODE167,BOOL)  */
struct A68t298{
struct A68t211  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_114)
};
typedef struct A68t298  A68_298 ;    /* STRUCT(MODE211,BOOL)  */
struct A68t299{
struct A68t209  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_115)
};
typedef struct A68t299  A68_299 ;    /* STRUCT(REF MODE209,BOOL)  */
struct A68t300{
struct A68t207  I;
A68_BOOL  C;
A_PAD_BOOL(PAD_116)
};
typedef struct A68t300  A68_300 ;    /* STRUCT(MODE207,BOOL)  */
struct A68t301{
struct A68t228  D;
A68_BOOL  C;
A_PAD_BOOL(PAD_117)
};
typedef struct A68t301  A68_301 ;    /* STRUCT(MODE228,BOOL)  */
struct A68t302{
struct A68t213 * P;
A68_BOOL  C;
A_PAD_BOOL(PAD_118)
};
typedef struct A68t302  A68_302 ;    /* STRUCT(REF MODE213,BOOL)  */
struct A68t303{
struct A68t199 * P;
A68_BOOL  C;
A_PAD_BOOL(PAD_119)
};
typedef struct A68t303  A68_303 ;    /* STRUCT(REF MODE199,BOOL)  */
struct A68t304{
struct A68t200 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_120)
};
typedef struct A68t304  A68_304 ;    /* STRUCT(REF MODE200,BOOL)  */
struct A68t305{
struct A68t208 * N;
A68_BOOL  C;
A_PAD_BOOL(PAD_121)
};
typedef struct A68t305  A68_305 ;    /* STRUCT(REF MODE208,BOOL)  */
struct A68t306{
struct A68t201 * L;
A68_BOOL  C;
A_PAD_BOOL(PAD_122)
};
typedef struct A68t306  A68_306 ;    /* STRUCT(REF MODE201,BOOL)  */
struct A68t307{
struct A68t226 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_123)
};
typedef struct A68t307  A68_307 ;    /* STRUCT(REF MODE226,BOOL)  */
struct A68t308{
struct A68t216  S;
A68_BOOL  C;
A_PAD_BOOL(PAD_124)
};
typedef struct A68t308  A68_308 ;    /* STRUCT(MODE216,BOOL)  */
struct A68t309{
struct A68t215 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_125)
};
typedef struct A68t309  A68_309 ;    /* STRUCT(REF MODE215,BOOL)  */
struct A68t310{
struct A68t202 * M;
A68_BOOL  C;
A_PAD_BOOL(PAD_126)
};
typedef struct A68t310  A68_310 ;    /* STRUCT(REF MODE202,BOOL)  */
struct A68t311{
struct A68t203 * J;
A68_BOOL  C;
A_PAD_BOOL(PAD_127)
};
typedef struct A68t311  A68_311 ;    /* STRUCT(REF MODE203,BOOL)  */
struct A68t312{
struct A68t206 * J;
A68_BOOL  C;
A_PAD_BOOL(PAD_128)
};
typedef struct A68t312  A68_312 ;    /* STRUCT(REF MODE206,BOOL)  */
struct A68t313{
struct A68t197  S;
A68_BOOL  C;
A_PAD_BOOL(PAD_129)
};
typedef struct A68t313  A68_313 ;    /* STRUCT(MODE197,BOOL)  */
struct A68t314{
struct A68t196 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_130)
};
typedef struct A68t314  A68_314 ;    /* STRUCT(REF MODE196,BOOL)  */
struct A68t315{
struct A68t239  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_131)
};
typedef struct A68t315  A68_315 ;    /* STRUCT(MODE239,BOOL)  */
struct A68t316{
struct A68t241  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_132)
};
typedef struct A68t316  A68_316 ;    /* STRUCT(MODE241,BOOL)  */
struct A68t317{
struct A68t244  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_133)
};
typedef struct A68t317  A68_317 ;    /* STRUCT(REF MODE244,BOOL)  */
struct A68t318{
struct A68t243 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_134)
};
typedef struct A68t318  A68_318 ;    /* STRUCT(REF MODE243,BOOL)  */
struct A68t319{
struct A68t252  O;
A68_BOOL  C;
A_PAD_BOOL(PAD_135)
};
typedef struct A68t319  A68_319 ;    /* STRUCT(MODE252,BOOL)  */
struct A68t320{
struct A68t256 * Cl;
A68_BOOL  C;
A_PAD_BOOL(PAD_136)
};
typedef struct A68t320  A68_320 ;    /* STRUCT(REF MODE256,BOOL)  */
struct A68t321 ;

A_PROCEDURE(A68_VOID ,A68t322,(struct A68t120 ,struct A68t321 *,struct A68t279 *),(struct A68t120 ,struct A68t321 *,struct A68t279 *,void *));
typedef struct A68t322  A68_322 ;    /* PROC(MODE120,REF MODE321) MODE279 */

A_PROCEDURE(A68_VOID ,A68t323,(struct A68t123 *,struct A68t321 *,struct A68t280 *),(struct A68t123 *,struct A68t321 *,struct A68t280 *,void *));
typedef struct A68t323  A68_323 ;    /* PROC(REF MODE123,REF MODE321) MODE280 */

A_PROCEDURE(A68_VOID ,A68t324,(struct A68t126 *,struct A68t321 *,struct A68t281 *),(struct A68t126 *,struct A68t321 *,struct A68t281 *,void *));
typedef struct A68t324  A68_324 ;    /* PROC(REF MODE126,REF MODE321) MODE281 */

A_PROCEDURE(A68_VOID ,A68t325,(struct A68t129 ,struct A68t321 *,struct A68t282 *),(struct A68t129 ,struct A68t321 *,struct A68t282 *,void *));
typedef struct A68t325  A68_325 ;    /* PROC(MODE129,REF MODE321) MODE282 */

A_PROCEDURE(A68_VOID ,A68t326,(struct A68t141 *,struct A68t321 *,struct A68t283 *),(struct A68t141 *,struct A68t321 *,struct A68t283 *,void *));
typedef struct A68t326  A68_326 ;    /* PROC(REF MODE141,REF MODE321) MODE283 */

A_PROCEDURE(A68_VOID ,A68t327,(struct A68t142 *,struct A68t321 *,struct A68t284 *),(struct A68t142 *,struct A68t321 *,struct A68t284 *,void *));
typedef struct A68t327  A68_327 ;    /* PROC(REF MODE142,REF MODE321) MODE284 */

A_PROCEDURE(A68_VOID ,A68t328,(struct A68t144 ,struct A68t321 *,struct A68t285 *),(struct A68t144 ,struct A68t321 *,struct A68t285 *,void *));
typedef struct A68t328  A68_328 ;    /* PROC(MODE144,REF MODE321) MODE285 */

A_PROCEDURE(A68_VOID ,A68t329,(struct A68t143 ,struct A68t321 *,struct A68t286 *),(struct A68t143 ,struct A68t321 *,struct A68t286 *,void *));
typedef struct A68t329  A68_329 ;    /* PROC(MODE143,REF MODE321) MODE286 */

A_PROCEDURE(A68_VOID ,A68t330,(struct A68t148 *,struct A68t321 *,struct A68t287 *),(struct A68t148 *,struct A68t321 *,struct A68t287 *,void *));
typedef struct A68t330  A68_330 ;    /* PROC(REF MODE148,REF MODE321) MODE287 */

A_PROCEDURE(A68_VOID ,A68t331,(struct A68t145 ,struct A68t321 *,struct A68t288 *),(struct A68t145 ,struct A68t321 *,struct A68t288 *,void *));
typedef struct A68t331  A68_331 ;    /* PROC(MODE145,REF MODE321) MODE288 */

A_PROCEDURE(A68_VOID ,A68t332,(struct A68t156 ,struct A68t321 *,struct A68t289 *),(struct A68t156 ,struct A68t321 *,struct A68t289 *,void *));
typedef struct A68t332  A68_332 ;    /* PROC(MODE156,REF MODE321) MODE289 */

A_PROCEDURE(A68_VOID ,A68t333,(struct A68t159 ,struct A68t321 *,struct A68t290 *),(struct A68t159 ,struct A68t321 *,struct A68t290 *,void *));
typedef struct A68t333  A68_333 ;    /* PROC(REF MODE159,REF MODE321) MODE290 */

A_PROCEDURE(A68_VOID ,A68t334,(struct A68t158 ,struct A68t321 *,struct A68t291 *),(struct A68t158 ,struct A68t321 *,struct A68t291 *,void *));
typedef struct A68t334  A68_334 ;    /* PROC(MODE158,REF MODE321) MODE291 */

A_PROCEDURE(A68_VOID ,A68t335,(struct A68t160 *,struct A68t321 *,struct A68t292 *),(struct A68t160 *,struct A68t321 *,struct A68t292 *,void *));
typedef struct A68t335  A68_335 ;    /* PROC(REF MODE160,REF MODE321) MODE292 */

A_PROCEDURE(A68_VOID ,A68t336,(struct A68t166 *,struct A68t321 *,struct A68t293 *),(struct A68t166 *,struct A68t321 *,struct A68t293 *,void *));
typedef struct A68t336  A68_336 ;    /* PROC(REF MODE166,REF MODE321) MODE293 */

A_PROCEDURE(A68_VOID ,A68t337,(struct A68t171 *,struct A68t321 *,struct A68t294 *),(struct A68t171 *,struct A68t321 *,struct A68t294 *,void *));
typedef struct A68t337  A68_337 ;    /* PROC(REF MODE171,REF MODE321) MODE294 */

A_PROCEDURE(A68_VOID ,A68t338,(struct A68t182 *,struct A68t321 *,struct A68t295 *),(struct A68t182 *,struct A68t321 *,struct A68t295 *,void *));
typedef struct A68t338  A68_338 ;    /* PROC(REF MODE182,REF MODE321) MODE295 */

A_PROCEDURE(A68_VOID ,A68t339,(struct A68t227 *,struct A68t321 *,struct A68t296 *),(struct A68t227 *,struct A68t321 *,struct A68t296 *,void *));
typedef struct A68t339  A68_339 ;    /* PROC(REF MODE227,REF MODE321) MODE296 */

A_PROCEDURE(A68_VOID ,A68t340,(struct A68t167 ,struct A68t321 *,struct A68t297 *),(struct A68t167 ,struct A68t321 *,struct A68t297 *,void *));
typedef struct A68t340  A68_340 ;    /* PROC(MODE167,REF MODE321) MODE297 */

A_PROCEDURE(A68_VOID ,A68t341,(struct A68t211 ,struct A68t321 *,struct A68t298 *),(struct A68t211 ,struct A68t321 *,struct A68t298 *,void *));
typedef struct A68t341  A68_341 ;    /* PROC(MODE211,REF MODE321) MODE298 */

A_PROCEDURE(A68_VOID ,A68t342,(struct A68t209 ,struct A68t321 *,struct A68t299 *),(struct A68t209 ,struct A68t321 *,struct A68t299 *,void *));
typedef struct A68t342  A68_342 ;    /* PROC(REF MODE209,REF MODE321) MODE299 */

A_PROCEDURE(A68_VOID ,A68t343,(struct A68t207 ,struct A68t321 *,struct A68t300 *),(struct A68t207 ,struct A68t321 *,struct A68t300 *,void *));
typedef struct A68t343  A68_343 ;    /* PROC(MODE207,REF MODE321) MODE300 */

A_PROCEDURE(A68_VOID ,A68t344,(struct A68t228 ,struct A68t321 *,struct A68t301 *),(struct A68t228 ,struct A68t321 *,struct A68t301 *,void *));
typedef struct A68t344  A68_344 ;    /* PROC(MODE228,REF MODE321) MODE301 */

A_PROCEDURE(A68_VOID ,A68t345,(struct A68t213 *,struct A68t321 *,struct A68t302 *),(struct A68t213 *,struct A68t321 *,struct A68t302 *,void *));
typedef struct A68t345  A68_345 ;    /* PROC(REF MODE213,REF MODE321) MODE302 */

A_PROCEDURE(A68_VOID ,A68t346,(struct A68t199 *,struct A68t321 *,struct A68t303 *),(struct A68t199 *,struct A68t321 *,struct A68t303 *,void *));
typedef struct A68t346  A68_346 ;    /* PROC(REF MODE199,REF MODE321) MODE303 */

A_PROCEDURE(A68_VOID ,A68t347,(struct A68t200 *,struct A68t321 *,struct A68t304 *),(struct A68t200 *,struct A68t321 *,struct A68t304 *,void *));
typedef struct A68t347  A68_347 ;    /* PROC(REF MODE200,REF MODE321) MODE304 */

A_PROCEDURE(A68_VOID ,A68t348,(struct A68t208 *,struct A68t321 *,struct A68t305 *),(struct A68t208 *,struct A68t321 *,struct A68t305 *,void *));
typedef struct A68t348  A68_348 ;    /* PROC(REF MODE208,REF MODE321) MODE305 */

A_PROCEDURE(A68_VOID ,A68t349,(struct A68t201 *,struct A68t321 *,struct A68t306 *),(struct A68t201 *,struct A68t321 *,struct A68t306 *,void *));
typedef struct A68t349  A68_349 ;    /* PROC(REF MODE201,REF MODE321) MODE306 */

A_PROCEDURE(A68_VOID ,A68t350,(struct A68t226 *,struct A68t321 *,struct A68t307 *),(struct A68t226 *,struct A68t321 *,struct A68t307 *,void *));
typedef struct A68t350  A68_350 ;    /* PROC(REF MODE226,REF MODE321) MODE307 */

A_PROCEDURE(A68_VOID ,A68t351,(struct A68t216 ,struct A68t321 *,struct A68t308 *),(struct A68t216 ,struct A68t321 *,struct A68t308 *,void *));
typedef struct A68t351  A68_351 ;    /* PROC(MODE216,REF MODE321) MODE308 */

A_PROCEDURE(A68_VOID ,A68t352,(struct A68t215 *,struct A68t321 *,struct A68t309 *),(struct A68t215 *,struct A68t321 *,struct A68t309 *,void *));
typedef struct A68t352  A68_352 ;    /* PROC(REF MODE215,REF MODE321) MODE309 */

A_PROCEDURE(A68_VOID ,A68t353,(struct A68t202 *,struct A68t321 *,struct A68t310 *),(struct A68t202 *,struct A68t321 *,struct A68t310 *,void *));
typedef struct A68t353  A68_353 ;    /* PROC(REF MODE202,REF MODE321) MODE310 */

A_PROCEDURE(A68_VOID ,A68t354,(struct A68t203 *,struct A68t321 *,struct A68t311 *),(struct A68t203 *,struct A68t321 *,struct A68t311 *,void *));
typedef struct A68t354  A68_354 ;    /* PROC(REF MODE203,REF MODE321) MODE311 */

A_PROCEDURE(A68_VOID ,A68t355,(struct A68t206 *,struct A68t321 *,struct A68t312 *),(struct A68t206 *,struct A68t321 *,struct A68t312 *,void *));
typedef struct A68t355  A68_355 ;    /* PROC(REF MODE206,REF MODE321) MODE312 */

A_PROCEDURE(A68_VOID ,A68t356,(struct A68t197 ,struct A68t321 *,struct A68t313 *),(struct A68t197 ,struct A68t321 *,struct A68t313 *,void *));
typedef struct A68t356  A68_356 ;    /* PROC(MODE197,REF MODE321) MODE313 */

A_PROCEDURE(A68_VOID ,A68t357,(struct A68t196 *,struct A68t321 *,struct A68t314 *),(struct A68t196 *,struct A68t321 *,struct A68t314 *,void *));
typedef struct A68t357  A68_357 ;    /* PROC(REF MODE196,REF MODE321) MODE314 */

A_PROCEDURE(A68_VOID ,A68t358,(struct A68t239 ,struct A68t321 *,struct A68t315 *),(struct A68t239 ,struct A68t321 *,struct A68t315 *,void *));
typedef struct A68t358  A68_358 ;    /* PROC(MODE239,REF MODE321) MODE315 */

A_PROCEDURE(A68_VOID ,A68t359,(struct A68t241 ,struct A68t321 *,struct A68t316 *),(struct A68t241 ,struct A68t321 *,struct A68t316 *,void *));
typedef struct A68t359  A68_359 ;    /* PROC(MODE241,REF MODE321) MODE316 */

A_PROCEDURE(A68_VOID ,A68t360,(struct A68t244 ,struct A68t321 *,struct A68t317 *),(struct A68t244 ,struct A68t321 *,struct A68t317 *,void *));
typedef struct A68t360  A68_360 ;    /* PROC(REF MODE244,REF MODE321) MODE317 */

A_PROCEDURE(A68_VOID ,A68t361,(struct A68t243 *,struct A68t321 *,struct A68t318 *),(struct A68t243 *,struct A68t321 *,struct A68t318 *,void *));
typedef struct A68t361  A68_361 ;    /* PROC(REF MODE243,REF MODE321) MODE318 */

A_PROCEDURE(A68_VOID ,A68t362,(struct A68t252 ,struct A68t321 *,struct A68t319 *),(struct A68t252 ,struct A68t321 *,struct A68t319 *,void *));
typedef struct A68t362  A68_362 ;    /* PROC(MODE252,REF MODE321) MODE319 */

A_PROCEDURE(A68_VOID ,A68t363,(struct A68t256 *,struct A68t321 *,struct A68t97 ,struct A68t320 *),(struct A68t256 *,struct A68t321 *,struct A68t97 ,struct A68t320 *,void *));
typedef struct A68t363  A68_363 ;    /* PROC(REF MODE256,REF MODE321,MODE97) MODE320 */
struct A68t321{
struct A68t322  Attr;
struct A68t323  Attrstr;
struct A68t324  Attrdec;
struct A68t325  Formula;
struct A68t326  Formulas;
struct A68t327  Intdec;
struct A68t328  Range;
struct A68t329  Formularange;
struct A68t330  Tstr;
struct A68t331  Type;
struct A68t332  Alternative;
struct A68t333  Alternatives;
struct A68t334  Typebody;
struct A68t335  Typedec;
struct A68t336  Constdec;
struct A68t337  Ualts;
struct A68t338  Ustr;
struct A68t339  Uchoices;
struct A68t340  Unit;
struct A68t341  Mparam;
struct A68t342  Macparams;
struct A68t343  Instance;
struct A68t344  Declaration;
struct A68t345  Printitems;
struct A68t346  Print;
struct A68t347  Fault;
struct A68t348  Names;
struct A68t349  Let;
struct A68t350  Seqchoices;
struct A68t351  Seqstep;
struct A68t352  Sequence;
struct A68t353  Make;
struct A68t354  Join;
struct A68t355  Joins;
struct A68t356  Step;
struct A68t357  Series;
struct A68t358  Fnbody;
struct A68t359  Macspec;
struct A68t360  Macspecs;
struct A68t361  Fndec;
struct A68t362  Outer;
struct A68t363  Closure;
struct A68t321 * Rest;
};
typedef struct A68t321  A68_321 ;    /* STRUCT(MODE322,MODE323,MODE324,MODE325,MODE326,MODE327,MODE328,MODE329,MODE330,MODE331,MODE332,MODE333,MODE334,MODE335,MODE336,MODE337,MODE338,MODE339,MODE340,MODE341,MODE342,MODE343,MODE344,MODE345,MODE346,MODE347,MODE348,MODE349,MODE350,MODE351,MODE352,MODE353,MODE354,MODE355,MODE356,MODE357,MODE358,MODE359,MODE360,MODE361,MODE362,MODE363,REF MODE321)  */
struct A68t365 ;

A_PROCEDURE(struct A68t321 *,A68t364,(struct A68t321 *,struct A68t365 ),(struct A68t321 *,struct A68t365 ,void *));
typedef struct A68t364  A68_364 ;    /* PROC(REF MODE321,MODE365) REF MODE321 */
A_VECTOR(struct A68t366 ,A68t365);
typedef struct A68t365  A68_365 ;    /* VECTOR [] MODE366 */
struct A68t366 { A68_INT mode; union {
struct A68t322  mode1;
struct A68t323  mode2;
struct A68t324  mode3;
struct A68t325  mode4;
struct A68t326  mode5;
struct A68t327  mode6;
struct A68t328  mode7;
struct A68t329  mode8;
struct A68t330  mode9;
struct A68t331  mode10;
struct A68t332  mode11;
struct A68t333  mode12;
struct A68t334  mode13;
struct A68t335  mode14;
struct A68t336  mode15;
struct A68t337  mode16;
struct A68t338  mode17;
struct A68t339  mode18;
struct A68t340  mode19;
struct A68t341  mode20;
struct A68t342  mode21;
struct A68t343  mode22;
struct A68t344  mode23;
struct A68t345  mode24;
struct A68t346  mode25;
struct A68t347  mode26;
struct A68t348  mode27;
struct A68t349  mode28;
struct A68t350  mode29;
struct A68t351  mode30;
struct A68t352  mode31;
struct A68t353  mode32;
struct A68t354  mode33;
struct A68t355  mode34;
struct A68t356  mode35;
struct A68t357  mode36;
struct A68t358  mode37;
struct A68t359  mode38;
struct A68t360  mode39;
struct A68t361  mode40;
struct A68t362  mode41;
struct A68t363  mode42;
} data; };
typedef struct A68t366  A68_366 ;    /* UNION(MODE322,MODE323,MODE324,MODE325,MODE326,MODE327,MODE328,MODE329,MODE330,MODE331,MODE332,MODE333,MODE334,MODE335,MODE336,MODE337,MODE338,MODE339,MODE340,MODE341,MODE342,MODE343,MODE344,MODE345,MODE346,MODE347,MODE348,MODE349,MODE350,MODE351,MODE352,MODE353,MODE354,MODE355,MODE356,MODE357,MODE358,MODE359,MODE360,MODE361,MODE362,MODE363)  */

A_PROCEDURE(A68_VOID ,A68t367,(struct A68t321 *),(struct A68t321 *,void *));
typedef struct A68t367  A68_367 ;    /* PROC(REF MODE321) VOID */

A_PROCEDURE(A68_VOID ,A68t368,(void),(void *));
typedef struct A68t368  A68_368 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t369,(struct A68t368 ),(struct A68t368 ,void *));
typedef struct A68t369  A68_369 ;    /* PROC(MODE368) VOID */

A_PROCEDURE(A68_VOID ,A68t370,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t370  A68_370 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t371,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t371  A68_371 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,65,A68t372);
typedef struct A68t372  A68_372 ;    /* STRUCT 65 CHAR */
#define A68_373  A68_VC 
#define A68t373 A68t26            /* FLEX VECTOR [] CHAR */
#define A68_374  A68_46 
#define A68t374 A68t46            /* FLEX VECTOR [] MODE373 */

A_PROCEDURE(A68_VOID ,A68t375,(struct A68t256 *,struct A68t111 ,struct A68t97 ,struct A68t320 *),(struct A68t256 *,struct A68t111 ,struct A68t97 ,struct A68t320 *,void *));
typedef struct A68t375  A68_375 ;    /* PROC(REF MODE256,MODE111,MODE97) MODE320 */

A_PROCEDURE(A68_VOID ,A68t376,(struct A68t129 ,struct A68t282 *),(struct A68t129 ,struct A68t282 *,void *));
typedef struct A68t376  A68_376 ;    /* PROC(MODE129) MODE282 */

A_PROCEDURE(A68_BOOL ,A68t377,(struct A68t167 ),(struct A68t167 ,void *));
typedef struct A68t377  A68_377 ;    /* PROC(MODE167) BOOL */

A_PROCEDURE(A68_VOID ,A68t378,(struct A68t167 ,struct A68t377 ,struct A68t321 *,struct A68t297 *),(struct A68t167 ,struct A68t377 ,struct A68t321 *,struct A68t297 *,void *));
typedef struct A68t378  A68_378 ;    /* PROC(MODE167,MODE377,REF MODE321) MODE297 */
A_ISTRUCT(struct A68t366 ,5,A68t379);
typedef struct A68t379  A68_379 ;    /* STRUCT 5 MODE366 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from transformprocs --- */
extern A68_321 * THJATRN_make_newtprocs(struct A68t321 *,struct A68t365 );
extern A68_321 * AWLATRN_nulltprocs;
/* --- End of imports from transformprocs --- */


/* --- Imports from assmodes --- */
extern A68_171 * HAAATRN_nilualts;
extern A68_137 * YEAATRN_makefbracket(struct A68t129 );
extern A68_150 * SFAATRN_maketbracket(struct A68t145 );
extern A68_165 * MGAATRN_makecquery(struct A68t145 );
extern A68_193 * RGAATRN_makeubracket(struct A68t167 );
extern A68_124 * ZDAATRN_makeattrbracket(struct A68t120 );
/* --- End of imports from assmodes --- */


/* --- Imports from options --- */
/* --- End of imports from options --- */


/* --- Imports from messageproc --- */
extern A68_31  OFAAOSI_anonymous;
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void IHJATRN(void);   /* transformprocs */
extern void BAAATRN(void);   /* assmodes */
extern void BAAAOST(void);   /* options */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_372   YWLATRN = {"$Id: brackets_transform.a68,v 34.3 1995/03/29 13:02:52 ella Exp $"}; 
A_GISVEC(A68_VC ,ZWLATRN,YWLATRN,65)
A68_46  JXLATRN_brackets_options;
#define OXLATRN_oldtprocs AWLATRN_nulltprocs
typedef struct   /* env of non-global proc */
{
A68_325  CYLATRN_formula;
} EYLATRN_formula;
typedef struct   /* env of non-global proc */
{
A68_331  BBMATRN_type;
} DBMATRN_type;
typedef struct   /* env of non-global proc */
{
int dummy;
} KDMATRN_ualts;
typedef struct   /* env of non-global proc */
{
A68_340  HFMATRN_unit;
} JFMATRN_unit;
typedef struct   /* env of non-global proc */
{
A68_325  CYLATRN_formula;
A68_321 * Tprocs;
} JYLATRN_bracket_formula;

A_STATIC A68_VOID  BXLATRN_generator(A68_BOOL  AXLATRN_anonymous, A68_46  *ReturnedValue);

A68_VOID  NXLATRN_brackets_transform(A68_256 * Closure, A68_111  Options, A68_97  Msg, A68_320  *ReturnedValue);

A_STATIC A68_VOID  RXLATRN_attr(A68_120  A, A68_321 * Tprocs, A68_279  *ReturnedValue);

A_STATIC A68_VOID  DYLATRN_formula(A68_129  F, A68_321 * Tprocs, A68_282  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IYLATRN_bracket_formula(A68_129  Form, A68_282  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DAMATRN_bracket_type(A68_145  Type, A68_321 * Tprocs, A68_288  *ReturnedValue);

A_STATIC A68_VOID  CBMATRN_type(A68_145  Ty, A68_321 * Tprocs, A68_288  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KCMATRN_bracket_const(A68_167  Const, A68_321 * Tprocs, A68_297  *ReturnedValue);

A_STATIC A68_VOID  JDMATRN_ualts(A68_171 * Ca, A68_321 * Tprocs, A68_294  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  YDMATRN_udiadic(A68_167  Unit);

A_STATIC A68_BOOL  CEMATRN_uright(A68_167  Unit);

A_STATIC A68_BOOL  GEMATRN_uleft(A68_167  Unit);

A_STATIC A68_VOID  MEMATRN_bracket_unit(A68_167  Unit, A68_377  Test, A68_321 * Tprocs, A68_297  *ReturnedValue);

A_STATIC A68_VOID  IFMATRN_unit(A68_167  Un, A68_321 * Tprocs, A68_297  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IYLATRN_bracket_formula(A68_129  Form, A68_282  *ReturnedValue, void *NonLocals)
#define NL(x) (((JYLATRN_bracket_formula *)NonLocals)->x)
{ 
A68_129  KYLATRN;  /* united object - for case conformity */
A68_134 * LYLATRN_fd;
A68_282  MYLATRN;  /* collateral clause result */
A68_282  NYLATRN;  /* avoid structure result */
A68_129  OYLATRN;  /* OPERATORS - mode -> union mode */
A68_137 * PYLATRN;  /* YIELD */
A68_282  QYLATRN;  /* clause result */
A68_137 * RYLATRN_fb;
A68_282  SYLATRN;  /* avoid structure result */
A68_282  TYLATRN_body;
A68_129  UYLATRN;  /* united object - for case conformity */
A68_282  VYLATRN;  /* collateral clause result */
A68_129  WYLATRN;  /* OPERATORS - mode -> union mode */
A68_137 * XYLATRN;  /* YIELD */
A68_282  YYLATRN;  /* collateral clause result */
A68_282  ZYLATRN;  /* collateral clause result */
A68_282  AZLATRN;  /* avoid structure result */
A_PROC_ENTRY(bracket_formula);
 /* line 78: */
 /* line 79: */
KYLATRN = Form ;
switch ( KYLATRN.mode )
{ 
case 5: /* REF STRUCT(MODE129,INT,MODE129)  */
LYLATRN_fd = (KYLATRN.data.mode5);
 /* line 80: */
A_CALLPROC(NL(CYLATRN_formula),(Form, NL(Tprocs), &NYLATRN),(Form, NL(Tprocs), &NYLATRN,(NL(CYLATRN_formula)).nonlocals));
PYLATRN = YEAATRN_makefbracket(NYLATRN.F) ;
MYLATRN.F = A_UNITE(OYLATRN,mode8,8,PYLATRN);
 /* line 81: */
MYLATRN.C = A68_TRUE;
QYLATRN = MYLATRN;
break;
case 8: /* REF STRUCT(MODE129)  */
RYLATRN_fb = (KYLATRN.data.mode8);
 /* line 82: */
 /* line 83: */
{ 
A_CALLPROC(NL(CYLATRN_formula),((*(&(RYLATRN_fb->Formula))), NL(Tprocs), &SYLATRN),((*(&(RYLATRN_fb->Formula))), NL(Tprocs), &SYLATRN,(NL(CYLATRN_formula)).nonlocals));
TYLATRN_body = SYLATRN;
 /* line 84: */
 /* line 85: */
UYLATRN = TYLATRN_body.F ;
switch ( UYLATRN.mode )
{ 
case 5: /* REF STRUCT(MODE129,INT,MODE129)  */
 /* line 87: */
 /* line 88: */
if ( TYLATRN_body.C )
{ 
XYLATRN = YEAATRN_makefbracket(TYLATRN_body.F) ;
VYLATRN.F = A_UNITE(WYLATRN,mode8,8,XYLATRN);
 /* line 89: */
VYLATRN.C = A68_TRUE;
QYLATRN = VYLATRN;
} 
else
{ 
YYLATRN.F = Form;
 /* line 90: */
 /* line 91: */
YYLATRN.C = A68_FALSE;
QYLATRN = YYLATRN;
} 
break;
default: 
ZYLATRN.F = TYLATRN_body.F;
 /* line 92: */
 /* line 93: */
 /* line 94: */
ZYLATRN.C = A68_TRUE;
QYLATRN = ZYLATRN;
break;
} 
} 
break;
default: 
 /* line 95: */
A_CALLPROC(NL(CYLATRN_formula),(Form, NL(Tprocs), &AZLATRN),(Form, NL(Tprocs), &AZLATRN,(NL(CYLATRN_formula)).nonlocals));
QYLATRN = AZLATRN;
break;
} 
A_PROC_EXIT(bracket_formula);
*ReturnedValue = (QYLATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  RXLATRN_attr(A68_120  A, A68_321 * Tprocs, A68_279  *ReturnedValue)
{ 
A68_120  SXLATRN;  /* united object - for case conformity */
A68_122 * TXLATRN_ad;
A68_279  UXLATRN;  /* collateral clause result */
A68_120  VXLATRN;  /* OPERATORS - mode -> union mode */
A68_124 * WXLATRN;  /* YIELD */
A68_279  XXLATRN;  /* clause result */
A68_279  YXLATRN;  /* collateral clause result */
A68_279  ZXLATRN;  /* collateral clause result */
A_PROC_ENTRY(attr);
 /* line 66: */
 /* line 67: */
SXLATRN = A ;
switch ( SXLATRN.mode )
{ 
case 2: /* REF STRUCT(REF MODE26,REF MODE118)  */
TXLATRN_ad = (SXLATRN.data.mode2);
 /* line 68: */
 /* line 69: */
if ( ((*(&(TXLATRN_ad->Classname))).upb>0) )
{ 
WXLATRN = ZDAATRN_makeattrbracket(A) ;
UXLATRN.A = A_UNITE(VXLATRN,mode4,4,WXLATRN);
 /* line 70: */
UXLATRN.C = A68_TRUE;
XXLATRN = UXLATRN;
} 
else
{ 
YXLATRN.A = A;
 /* line 71: */
 /* line 72: */
YXLATRN.C = A68_FALSE;
XXLATRN = YXLATRN;
} 
break;
default: 
ZXLATRN.A = A;
 /* line 73: */
ZXLATRN.C = A68_FALSE;
XXLATRN = ZXLATRN;
break;
} 
A_PROC_EXIT(attr);
*ReturnedValue = (XXLATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  DYLATRN_formula(A68_129  F, A68_321 * Tprocs, A68_282  *ReturnedValue, void *NonLocals)
#define NL(x) (((EYLATRN_formula *)NonLocals)->x)
{ 
A68_376  HYLATRN_bracket_formula;   /* proc value of non-global proc */
A68_129  BZLATRN;  /* united object - for case conformity */
A68_134 * CZLATRN_fd;
A68_282  DZLATRN;  /* avoid structure result */
A68_282  EZLATRN_l;
A68_282  FZLATRN;  /* avoid structure result */
A68_282  GZLATRN_r;
A68_BOOL  HZLATRN;  /* optbool result */
A68_282  IZLATRN;  /* collateral clause result */
A68_134  JZLATRN;  /* collateral clause result */
A68_134 * KZLATRN;  /* YIELD */
A68_129  LZLATRN;  /* OPERATORS - mode -> union mode */
A68_282  MZLATRN;  /* clause result */
A68_282  NZLATRN;  /* collateral clause result */
A68_135 * OZLATRN_fm;
A68_282  PZLATRN;  /* avoid structure result */
A68_282  QZLATRN_r;
A68_282  RZLATRN;  /* collateral clause result */
A68_135  SZLATRN;  /* collateral clause result */
A68_135 * TZLATRN;  /* YIELD */
A68_129  UZLATRN;  /* OPERATORS - mode -> union mode */
A68_282  VZLATRN;  /* collateral clause result */
A68_137 * WZLATRN_fb;
A68_282  XZLATRN;  /* collateral clause result */
A68_282  YZLATRN;  /* avoid structure result */
A68_325  ZZLATRN;  /* CALL */
A68_282  AAMATRN;  /* avoid structure result */
A_PROC_ENTRY(formula);
 /* line 76: */
 /* line 77: */
{ 
A_CLOSURE( HYLATRN_bracket_formula, IYLATRN_bracket_formula, JYLATRN_bracket_formula );
(( JYLATRN_bracket_formula * ) ( HYLATRN_bracket_formula.nonlocals )) -> CYLATRN_formula = NL(CYLATRN_formula);
(( JYLATRN_bracket_formula * ) ( HYLATRN_bracket_formula.nonlocals )) -> Tprocs = Tprocs;
 /* line 97: */
 /* line 98: */
BZLATRN = F ;
switch ( BZLATRN.mode )
{ 
case 5: /* REF STRUCT(MODE129,INT,MODE129)  */
CZLATRN_fd = (BZLATRN.data.mode5);
 /* line 99: */
{ 
A_CALLPROC(HYLATRN_bracket_formula,((*(&(CZLATRN_fd->Left))), &DZLATRN),((*(&(CZLATRN_fd->Left))), &DZLATRN,(HYLATRN_bracket_formula).nonlocals));
EZLATRN_l = DZLATRN;
 /* line 100: */
A_CALLPROC(HYLATRN_bracket_formula,((*(&(CZLATRN_fd->Right))), &FZLATRN),((*(&(CZLATRN_fd->Right))), &FZLATRN,(HYLATRN_bracket_formula).nonlocals));
GZLATRN_r = FZLATRN;
 /* line 101: */
 /* line 102: */
HZLATRN = EZLATRN_l.C;
if ( ! HZLATRN )
{HZLATRN = GZLATRN_r.C;
}
if ( HZLATRN )
{ 
JZLATRN.Left = EZLATRN_l.F;
JZLATRN.Sort = (*(&(CZLATRN_fd->Sort)));
JZLATRN.Right = GZLATRN_r.F;
KZLATRN = A_HEAP(A68_134 ) ;
(*KZLATRN) = JZLATRN ;
IZLATRN.F = A_UNITE(LZLATRN,mode5,5,KZLATRN);
 /* line 103: */
IZLATRN.C = A68_TRUE;
MZLATRN = IZLATRN;
} 
else
{ 
NZLATRN.F = F;
 /* line 104: */
 /* line 105: */
 /* line 106: */
NZLATRN.C = A68_FALSE;
MZLATRN = NZLATRN;
} 
} 
break;
case 6: /* REF STRUCT(INT,MODE129)  */
OZLATRN_fm = (BZLATRN.data.mode6);
 /* line 107: */
{ 
A_CALLPROC(HYLATRN_bracket_formula,((*(&(OZLATRN_fm->Right))), &PZLATRN),((*(&(OZLATRN_fm->Right))), &PZLATRN,(HYLATRN_bracket_formula).nonlocals));
QZLATRN_r = PZLATRN;
 /* line 108: */
 /* line 109: */
if ( QZLATRN_r.C )
{ 
SZLATRN.Sort = (*(&(OZLATRN_fm->Sort)));
SZLATRN.Right = QZLATRN_r.F;
TZLATRN = A_HEAP(A68_135 ) ;
(*TZLATRN) = SZLATRN ;
RZLATRN.F = A_UNITE(UZLATRN,mode6,6,TZLATRN);
 /* line 110: */
RZLATRN.C = A68_TRUE;
MZLATRN = RZLATRN;
} 
else
{ 
VZLATRN.F = F;
 /* line 111: */
 /* line 112: */
 /* line 113: */
VZLATRN.C = A68_FALSE;
MZLATRN = VZLATRN;
} 
} 
break;
case 8: /* REF STRUCT(MODE129)  */
WZLATRN_fb = (BZLATRN.data.mode8);
 /* line 114: */
A_CALLPROC(NL(CYLATRN_formula),((*(&(WZLATRN_fb->Formula))), Tprocs, &YZLATRN),((*(&(WZLATRN_fb->Formula))), Tprocs, &YZLATRN,(NL(CYLATRN_formula)).nonlocals));
XZLATRN.F = YZLATRN.F;
 /* line 115: */
XZLATRN.C = A68_TRUE;
MZLATRN = XZLATRN;
break;
default: 
 /* line 116: */
 /* line 117: */
ZZLATRN = (*(&(OXLATRN_oldtprocs->Formula))) ;
A_CALLPROC(ZZLATRN,(F, Tprocs, &AAMATRN),(F, Tprocs, &AAMATRN,(ZZLATRN).nonlocals));
MZLATRN = AAMATRN;
break;
} 
} 
A_PROC_EXIT(formula);
*ReturnedValue = (MZLATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  DAMATRN_bracket_type(A68_145  Type, A68_321 * Tprocs, A68_288  *ReturnedValue)
{ 
A68_145  EAMATRN;  /* united object - for case conformity */
A68_149 * FAMATRN_tfn;
A68_288  GAMATRN;  /* collateral clause result */
A68_331  HAMATRN;  /* CALL */
A68_145  IAMATRN;  /* OPERATORS - mode -> union mode */
A68_288  JAMATRN;  /* avoid structure result */
A68_145  KAMATRN;  /* OPERATORS - mode -> union mode */
A68_150 * LAMATRN;  /* YIELD */
A68_288  MAMATRN;  /* clause result */
A68_150 * NAMATRN_tb;
A68_331  OAMATRN;  /* CALL */
A68_288  PAMATRN;  /* avoid structure result */
A68_288  QAMATRN_body;
A68_145  RAMATRN;  /* united object - for case conformity */
A68_288  SAMATRN;  /* collateral clause result */
A68_145  TAMATRN;  /* OPERATORS - mode -> union mode */
A68_150 * UAMATRN;  /* YIELD */
A68_288  VAMATRN;  /* collateral clause result */
A68_288  WAMATRN;  /* collateral clause result */
A68_331  XAMATRN;  /* CALL */
A68_288  YAMATRN;  /* avoid structure result */
A_PROC_ENTRY(bracket_type);
 /* line 122: */
 /* line 123: */
EAMATRN = Type ;
switch ( EAMATRN.mode )
{ 
case 4: /* REF STRUCT(MODE145,MODE145)  */
FAMATRN_tfn = (EAMATRN.data.mode4);
 /* line 124: */
HAMATRN = (*(&(Tprocs->Type))) ;
A_CALLPROC(HAMATRN,(A_UNITE(IAMATRN,mode4,4,FAMATRN_tfn), Tprocs, &JAMATRN),(A_UNITE(IAMATRN,mode4,4,FAMATRN_tfn), Tprocs, &JAMATRN,(HAMATRN).nonlocals));
LAMATRN = SFAATRN_maketbracket(JAMATRN.T) ;
GAMATRN.T = A_UNITE(KAMATRN,mode5,5,LAMATRN);
 /* line 125: */
GAMATRN.C = A68_TRUE;
MAMATRN = GAMATRN;
break;
case 5: /* REF STRUCT(MODE145)  */
NAMATRN_tb = (EAMATRN.data.mode5);
 /* line 126: */
 /* line 127: */
{ 
OAMATRN = (*(&(Tprocs->Type))) ;
A_CALLPROC(OAMATRN,((*(&(NAMATRN_tb->Type))), Tprocs, &PAMATRN),((*(&(NAMATRN_tb->Type))), Tprocs, &PAMATRN,(OAMATRN).nonlocals));
QAMATRN_body = PAMATRN;
 /* line 128: */
 /* line 129: */
RAMATRN = QAMATRN_body.T ;
switch ( RAMATRN.mode )
{ 
case 4: /* REF STRUCT(MODE145,MODE145)  */
 /* line 131: */
 /* line 132: */
if ( QAMATRN_body.C )
{ 
UAMATRN = SFAATRN_maketbracket(QAMATRN_body.T) ;
SAMATRN.T = A_UNITE(TAMATRN,mode5,5,UAMATRN);
 /* line 133: */
SAMATRN.C = A68_TRUE;
MAMATRN = SAMATRN;
} 
else
{ 
VAMATRN.T = Type;
 /* line 134: */
 /* line 135: */
VAMATRN.C = A68_FALSE;
MAMATRN = VAMATRN;
} 
break;
default: 
WAMATRN.T = QAMATRN_body.T;
 /* line 136: */
 /* line 137: */
 /* line 138: */
WAMATRN.C = A68_TRUE;
MAMATRN = WAMATRN;
break;
} 
} 
break;
default: 
 /* line 139: */
XAMATRN = (*(&(Tprocs->Type))) ;
A_CALLPROC(XAMATRN,(Type, Tprocs, &YAMATRN),(Type, Tprocs, &YAMATRN,(XAMATRN).nonlocals));
MAMATRN = YAMATRN;
break;
} 
A_PROC_EXIT(bracket_type);
*ReturnedValue = (MAMATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  CBMATRN_type(A68_145  Ty, A68_321 * Tprocs, A68_288  *ReturnedValue, void *NonLocals)
#define NL(x) (((DBMATRN_type *)NonLocals)->x)
{ 
A68_145  EBMATRN;  /* united object - for case conformity */
A68_147 * FBMATRN_tr;
A68_325  GBMATRN;  /* CALL */
A68_282  HBMATRN;  /* avoid structure result */
A68_282  IBMATRN_size;
A68_288  JBMATRN;  /* avoid structure result */
A68_288  KBMATRN_t;
A68_BOOL  LBMATRN;  /* optbool result */
A68_288  MBMATRN;  /* collateral clause result */
A68_147  NBMATRN;  /* collateral clause result */
A68_147 * OBMATRN;  /* YIELD */
A68_145  PBMATRN;  /* OPERATORS - mode -> union mode */
A68_288  QBMATRN;  /* clause result */
A68_288  RBMATRN;  /* collateral clause result */
A68_149 * SBMATRN_tfn;
A68_288  TBMATRN;  /* avoid structure result */
A68_288  UBMATRN_f;
A68_288  VBMATRN;  /* avoid structure result */
A68_288  WBMATRN_t;
A68_BOOL  XBMATRN;  /* optbool result */
A68_288  YBMATRN;  /* collateral clause result */
A68_149  ZBMATRN;  /* collateral clause result */
A68_149 * ACMATRN;  /* YIELD */
A68_145  BCMATRN;  /* OPERATORS - mode -> union mode */
A68_288  CCMATRN;  /* collateral clause result */
A68_150 * DCMATRN_tb;
A68_288  ECMATRN;  /* collateral clause result */
A68_288  FCMATRN;  /* avoid structure result */
A68_331  GCMATRN;  /* CALL */
A68_288  HCMATRN;  /* avoid structure result */
A_PROC_ENTRY(type);
 /* line 143: */
 /* line 144: */
EBMATRN = Ty ;
switch ( EBMATRN.mode )
{ 
case 2: /* REF STRUCT(MODE129,MODE145)  */
FBMATRN_tr = (EBMATRN.data.mode2);
 /* line 145: */
{ 
GBMATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(GBMATRN,((*(&(FBMATRN_tr->Size))), Tprocs, &HBMATRN),((*(&(FBMATRN_tr->Size))), Tprocs, &HBMATRN,(GBMATRN).nonlocals));
IBMATRN_size = HBMATRN;
 /* line 146: */
DAMATRN_bracket_type( (*(&(FBMATRN_tr->Elem))), Tprocs, &JBMATRN );
KBMATRN_t = JBMATRN;
 /* line 147: */
 /* line 148: */
LBMATRN = IBMATRN_size.C;
if ( ! LBMATRN )
{LBMATRN = KBMATRN_t.C;
}
if ( LBMATRN )
{ 
NBMATRN.Size = IBMATRN_size.F;
NBMATRN.Elem = KBMATRN_t.T;
OBMATRN = A_HEAP(A68_147 ) ;
(*OBMATRN) = NBMATRN ;
MBMATRN.T = A_UNITE(PBMATRN,mode2,2,OBMATRN);
 /* line 149: */
MBMATRN.C = A68_TRUE;
QBMATRN = MBMATRN;
} 
else
{ 
RBMATRN.T = Ty;
 /* line 150: */
 /* line 151: */
 /* line 152: */
RBMATRN.C = A68_FALSE;
QBMATRN = RBMATRN;
} 
} 
break;
case 4: /* REF STRUCT(MODE145,MODE145)  */
SBMATRN_tfn = (EBMATRN.data.mode4);
 /* line 153: */
{ 
DAMATRN_bracket_type( (*(&(SBMATRN_tfn->From))), Tprocs, &TBMATRN );
UBMATRN_f = TBMATRN;
 /* line 154: */
DAMATRN_bracket_type( (*(&(SBMATRN_tfn->To))), Tprocs, &VBMATRN );
WBMATRN_t = VBMATRN;
 /* line 155: */
 /* line 156: */
XBMATRN = UBMATRN_f.C;
if ( ! XBMATRN )
{XBMATRN = WBMATRN_t.C;
}
if ( XBMATRN )
{ 
ZBMATRN.From = UBMATRN_f.T;
ZBMATRN.To = WBMATRN_t.T;
ACMATRN = A_HEAP(A68_149 ) ;
(*ACMATRN) = ZBMATRN ;
YBMATRN.T = A_UNITE(BCMATRN,mode4,4,ACMATRN);
 /* line 157: */
YBMATRN.C = A68_TRUE;
QBMATRN = YBMATRN;
} 
else
{ 
CCMATRN.T = Ty;
 /* line 158: */
 /* line 159: */
 /* line 160: */
CCMATRN.C = A68_FALSE;
QBMATRN = CCMATRN;
} 
} 
break;
case 5: /* REF STRUCT(MODE145)  */
DCMATRN_tb = (EBMATRN.data.mode5);
 /* line 161: */
A_CALLPROC(NL(BBMATRN_type),((*(&(DCMATRN_tb->Type))), Tprocs, &FCMATRN),((*(&(DCMATRN_tb->Type))), Tprocs, &FCMATRN,(NL(BBMATRN_type)).nonlocals));
ECMATRN.T = FCMATRN.T;
 /* line 162: */
ECMATRN.C = A68_TRUE;
QBMATRN = ECMATRN;
break;
default: 
 /* line 163: */
GCMATRN = (*(&(OXLATRN_oldtprocs->Type))) ;
A_CALLPROC(GCMATRN,(Ty, Tprocs, &HCMATRN),(Ty, Tprocs, &HCMATRN,(GCMATRN).nonlocals));
QBMATRN = HCMATRN;
break;
} 
A_PROC_EXIT(type);
*ReturnedValue = (QBMATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  KCMATRN_bracket_const(A68_167  Const, A68_321 * Tprocs, A68_297  *ReturnedValue)
{ 
A68_167  LCMATRN;  /* united object - for case conformity */
A68_171 * MCMATRN_ca;
A68_297  NCMATRN;  /* collateral clause result */
A68_340  OCMATRN;  /* CALL */
A68_167  PCMATRN;  /* OPERATORS - mode -> union mode */
A68_297  QCMATRN;  /* avoid structure result */
A68_167  RCMATRN;  /* OPERATORS - mode -> union mode */
A68_193 * SCMATRN;  /* YIELD */
A68_297  TCMATRN;  /* clause result */
A68_193 * UCMATRN_cb;
A68_340  VCMATRN;  /* CALL */
A68_297  WCMATRN;  /* avoid structure result */
A68_297  XCMATRN_body;
A68_167  YCMATRN;  /* united object - for case conformity */
A68_297  ZCMATRN;  /* collateral clause result */
A68_167  ADMATRN;  /* OPERATORS - mode -> union mode */
A68_193 * BDMATRN;  /* YIELD */
A68_297  CDMATRN;  /* collateral clause result */
A68_297  DDMATRN;  /* collateral clause result */
A68_340  EDMATRN;  /* CALL */
A68_297  FDMATRN;  /* avoid structure result */
A_PROC_ENTRY(bracket_const);
 /* line 168: */
 /* line 169: */
LCMATRN = Const ;
switch ( LCMATRN.mode )
{ 
case 10: /* REF STRUCT(MODE167,REF MODE171)  */
MCMATRN_ca = (LCMATRN.data.mode10);
 /* line 170: */
OCMATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(OCMATRN,(A_UNITE(PCMATRN,mode10,10,MCMATRN_ca), Tprocs, &QCMATRN),(A_UNITE(PCMATRN,mode10,10,MCMATRN_ca), Tprocs, &QCMATRN,(OCMATRN).nonlocals));
SCMATRN = RGAATRN_makeubracket(QCMATRN.U) ;
NCMATRN.U = A_UNITE(RCMATRN,mode32,32,SCMATRN);
 /* line 171: */
NCMATRN.C = A68_TRUE;
TCMATRN = NCMATRN;
break;
case 32: /* REF STRUCT(MODE167)  */
UCMATRN_cb = (LCMATRN.data.mode32);
 /* line 172: */
 /* line 173: */
{ 
VCMATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(VCMATRN,((*(&(UCMATRN_cb->Unit))), Tprocs, &WCMATRN),((*(&(UCMATRN_cb->Unit))), Tprocs, &WCMATRN,(VCMATRN).nonlocals));
XCMATRN_body = WCMATRN;
 /* line 174: */
 /* line 175: */
YCMATRN = XCMATRN_body.U ;
switch ( YCMATRN.mode )
{ 
case 10: /* REF STRUCT(MODE167,REF MODE171)  */
 /* line 177: */
 /* line 178: */
if ( XCMATRN_body.C )
{ 
BDMATRN = RGAATRN_makeubracket(XCMATRN_body.U) ;
ZCMATRN.U = A_UNITE(ADMATRN,mode32,32,BDMATRN);
 /* line 179: */
ZCMATRN.C = A68_TRUE;
TCMATRN = ZCMATRN;
} 
else
{ 
CDMATRN.U = Const;
 /* line 180: */
 /* line 181: */
CDMATRN.C = A68_FALSE;
TCMATRN = CDMATRN;
} 
break;
default: 
DDMATRN.U = XCMATRN_body.U;
 /* line 182: */
 /* line 183: */
 /* line 184: */
DDMATRN.C = A68_TRUE;
TCMATRN = DDMATRN;
break;
} 
} 
break;
default: 
 /* line 185: */
EDMATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(EDMATRN,(Const, Tprocs, &FDMATRN),(Const, Tprocs, &FDMATRN,(EDMATRN).nonlocals));
TCMATRN = FDMATRN;
break;
} 
A_PROC_EXIT(bracket_const);
*ReturnedValue = (TCMATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  JDMATRN_ualts(A68_171 * Ca, A68_321 * Tprocs, A68_294  *ReturnedValue, void *NonLocals)
#define NL(x) (((KDMATRN_ualts *)NonLocals)->x)
{ 
A68_294  LDMATRN;  /* collateral clause result */
A68_294  MDMATRN;  /* clause result */
A68_297  NDMATRN;  /* avoid structure result */
A68_297  ODMATRN_c;
A68_337  PDMATRN;  /* CALL */
A68_294  QDMATRN;  /* avoid structure result */
A68_294  RDMATRN_cac;
A68_BOOL  SDMATRN;  /* optbool result */
A68_294  TDMATRN;  /* collateral clause result */
A68_171  UDMATRN;  /* collateral clause result */
A68_171 * VDMATRN;  /* YIELD */
A68_294  WDMATRN;  /* collateral clause result */
A_PROC_ENTRY(ualts);
 /* line 189: */
 /* line 190: */
if ( (Ca==HAAATRN_nilualts) )
{ 
LDMATRN.Ua = Ca;
 /* line 191: */
LDMATRN.C = A68_FALSE;
MDMATRN = LDMATRN;
} 
else
{ 
KCMATRN_bracket_const( (*(&(Ca->Alt))), Tprocs, &NDMATRN );
ODMATRN_c = NDMATRN;
 /* line 192: */
PDMATRN = (*(&(Tprocs->Ualts))) ;
A_CALLPROC(PDMATRN,((*(&(Ca->Rest))), Tprocs, &QDMATRN),((*(&(Ca->Rest))), Tprocs, &QDMATRN,(PDMATRN).nonlocals));
RDMATRN_cac = QDMATRN;
 /* line 193: */
 /* line 194: */
SDMATRN = ODMATRN_c.C;
if ( ! SDMATRN )
{SDMATRN = RDMATRN_cac.C;
}
if ( SDMATRN )
{ 
UDMATRN.Alt = ODMATRN_c.U;
UDMATRN.Rest = RDMATRN_cac.Ua;
VDMATRN = A_HEAP(A68_171 ) ;
(*VDMATRN) = UDMATRN ;
TDMATRN.Ua = VDMATRN;
 /* line 195: */
TDMATRN.C = A68_TRUE;
MDMATRN = TDMATRN;
} 
else
{ 
WDMATRN.Ua = Ca;
 /* line 196: */
 /* line 197: */
WDMATRN.C = A68_FALSE;
MDMATRN = WDMATRN;
} 
} 
A_PROC_EXIT(ualts);
*ReturnedValue = (MDMATRN);
return;
} 
#undef NL

A_STATIC A68_BOOL  YDMATRN_udiadic(A68_167  Unit)
{ 
A68_167  ZDMATRN;  /* united object - for case conformity */
A68_BOOL  AEMATRN;  /* clause result */
A_PROC_ENTRY(udiadic);
 /* line 201: */
 /* line 202: */
ZDMATRN = Unit ;
switch ( ZDMATRN.mode )
{ 
case 22: /* REF STRUCT(BOOL,INT,MODE167,MODE167)  */
 /* line 203: */
AEMATRN = A68_TRUE;
break;
case 24: /* REF STRUCT(MODE167,MODE207,MODE167)  */
 /* line 204: */
AEMATRN = A68_TRUE;
break;
case 12: /* REF STRUCT(MODE167,MODE167)  */
 /* line 205: */
AEMATRN = A68_TRUE;
break;
default: 
 /* line 206: */
AEMATRN = A68_FALSE;
break;
} 
A_PROC_EXIT(udiadic);
return( AEMATRN );
} 
#undef NL

A_STATIC A68_BOOL  CEMATRN_uright(A68_167  Unit)
{ 
A68_167  DEMATRN;  /* united object - for case conformity */
A68_BOOL  EEMATRN;  /* clause result */
A_PROC_ENTRY(uright);
 /* line 210: */
 /* line 211: */
DEMATRN = Unit ;
switch ( DEMATRN.mode )
{ 
case 10: /* REF STRUCT(MODE167,REF MODE171)  */
 /* line 212: */
EEMATRN = A68_TRUE;
break;
case 14: /* REF STRUCT(MODE167,INT,INT)  */
 /* line 213: */
EEMATRN = A68_TRUE;
break;
case 15: /* REF STRUCT(MODE167,INT,INT)  */
 /* line 214: */
EEMATRN = A68_TRUE;
break;
case 16: /* REF STRUCT(MODE167,MODE129)  */
 /* line 215: */
EEMATRN = A68_TRUE;
break;
case 17: /* REF STRUCT(MODE167,MODE144)  */
 /* line 216: */
EEMATRN = A68_TRUE;
break;
case 18: /* REF STRUCT(MODE167,MODE167)  */
 /* line 217: */
EEMATRN = A68_TRUE;
break;
case 22: /* REF STRUCT(BOOL,INT,MODE167,MODE167)  */
 /* line 218: */
EEMATRN = A68_TRUE;
break;
case 24: /* REF STRUCT(MODE167,MODE207,MODE167)  */
 /* line 219: */
EEMATRN = A68_TRUE;
break;
case 30: /* REF STRUCT(MODE167,MODE120)  */
 /* line 220: */
EEMATRN = A68_TRUE;
break;
default: 
 /* line 221: */
EEMATRN = A68_FALSE;
break;
} 
A_PROC_EXIT(uright);
return( EEMATRN );
} 
#undef NL

A_STATIC A68_BOOL  GEMATRN_uleft(A68_167  Unit)
{ 
A68_167  HEMATRN;  /* united object - for case conformity */
A68_BOOL  IEMATRN;  /* clause result */
A_PROC_ENTRY(uleft);
 /* line 225: */
 /* line 226: */
HEMATRN = Unit ;
switch ( HEMATRN.mode )
{ 
case 13: /* REF STRUCT(INT,INT,MODE167)  */
 /* line 227: */
IEMATRN = A68_TRUE;
break;
case 14: /* REF STRUCT(MODE167,INT,INT)  */
 /* line 228: */
IEMATRN = A68_TRUE;
break;
case 20: /* REF STRUCT(MODE129,MODE167)  */
 /* line 229: */
IEMATRN = A68_TRUE;
break;
case 22: /* REF STRUCT(BOOL,INT,MODE167,MODE167)  */
 /* line 230: */
IEMATRN = A68_TRUE;
break;
case 23: /* REF STRUCT(MODE207,MODE167)  */
 /* line 231: */
IEMATRN = A68_TRUE;
break;
case 24: /* REF STRUCT(MODE167,MODE207,MODE167)  */
 /* line 232: */
IEMATRN = A68_TRUE;
break;
case 27: /* REF STRUCT(MODE129,MODE167)  */
 /* line 233: */
IEMATRN = A68_TRUE;
break;
case 33: /* REF STRUCT(MODE129,MODE167)  */
 /* line 234: */
IEMATRN = A68_TRUE;
break;
default: 
 /* line 235: */
IEMATRN = A68_FALSE;
break;
} 
A_PROC_EXIT(uleft);
return( IEMATRN );
} 
#undef NL
 /* line 239: */

A_STATIC A68_VOID  MEMATRN_bracket_unit(A68_167  Unit, A68_377  Test, A68_321 * Tprocs, A68_297  *ReturnedValue)
{ 
A68_297  NEMATRN;  /* collateral clause result */
A68_340  OEMATRN;  /* CALL */
A68_297  PEMATRN;  /* avoid structure result */
A68_167  QEMATRN;  /* OPERATORS - mode -> union mode */
A68_193 * REMATRN;  /* YIELD */
A68_297  SEMATRN;  /* clause result */
A68_167  TEMATRN;  /* united object - for case conformity */
A68_193 * UEMATRN_ub;
A68_340  VEMATRN;  /* CALL */
A68_297  WEMATRN;  /* avoid structure result */
A68_297  XEMATRN_body;
A68_297  YEMATRN;  /* collateral clause result */
A68_167  ZEMATRN;  /* OPERATORS - mode -> union mode */
A68_193 * AFMATRN;  /* YIELD */
A68_297  BFMATRN;  /* collateral clause result */
A68_297  CFMATRN;  /* collateral clause result */
A68_340  DFMATRN;  /* CALL */
A68_297  EFMATRN;  /* avoid structure result */
A_PROC_ENTRY(bracket_unit);
 /* line 240: */
 /* line 241: */
if ( A_CALLPROC(Test,(Unit),(Unit,(Test).nonlocals)) )
{ 
OEMATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(OEMATRN,(Unit, Tprocs, &PEMATRN),(Unit, Tprocs, &PEMATRN,(OEMATRN).nonlocals));
REMATRN = RGAATRN_makeubracket(PEMATRN.U) ;
NEMATRN.U = A_UNITE(QEMATRN,mode32,32,REMATRN);
 /* line 242: */
NEMATRN.C = A68_TRUE;
SEMATRN = NEMATRN;
} 
else
{ 
 /* line 243: */
TEMATRN = Unit ;
switch ( TEMATRN.mode )
{ 
case 32: /* REF STRUCT(MODE167)  */
UEMATRN_ub = (TEMATRN.data.mode32);
 /* line 244: */
{ 
VEMATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(VEMATRN,((*(&(UEMATRN_ub->Unit))), Tprocs, &WEMATRN),((*(&(UEMATRN_ub->Unit))), Tprocs, &WEMATRN,(VEMATRN).nonlocals));
XEMATRN_body = WEMATRN;
 /* line 245: */
 /* line 246: */
if ( A_CALLPROC(Test,(XEMATRN_body.U),(XEMATRN_body.U,(Test).nonlocals)) )
{ 
 /* line 247: */
if ( XEMATRN_body.C )
{ 
AFMATRN = RGAATRN_makeubracket(XEMATRN_body.U) ;
YEMATRN.U = A_UNITE(ZEMATRN,mode32,32,AFMATRN);
 /* line 248: */
YEMATRN.C = A68_TRUE;
SEMATRN = YEMATRN;
} 
else
{ 
BFMATRN.U = Unit;
 /* line 249: */
 /* line 250: */
BFMATRN.C = A68_FALSE;
SEMATRN = BFMATRN;
} 
} 
else
{ 
CFMATRN.U = XEMATRN_body.U;
 /* line 251: */
 /* line 252: */
 /* line 253: */
CFMATRN.C = A68_TRUE;
SEMATRN = CFMATRN;
} 
} 
break;
default: 
 /* line 254: */
 /* line 255: */
DFMATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(DFMATRN,(Unit, Tprocs, &EFMATRN),(Unit, Tprocs, &EFMATRN,(DFMATRN).nonlocals));
SEMATRN = EFMATRN;
break;
} 
} 
A_PROC_EXIT(bracket_unit);
*ReturnedValue = (SEMATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  IFMATRN_unit(A68_167  Un, A68_321 * Tprocs, A68_297  *ReturnedValue, void *NonLocals)
#define NL(x) (((JFMATRN_unit *)NonLocals)->x)
{ 
A68_167  KFMATRN;  /* united object - for case conformity */
A68_173 * LFMATRN_ufn;
A68_377  MFMATRN;  /* procedure value */
A68_297  NFMATRN;  /* avoid structure result */
A68_297  OFMATRN_u1;
A68_377  PFMATRN;  /* procedure value */
A68_297  QFMATRN;  /* avoid structure result */
A68_297  RFMATRN_u2;
A68_BOOL  SFMATRN;  /* optbool result */
A68_297  TFMATRN;  /* collateral clause result */
A68_173  UFMATRN;  /* collateral clause result */
A68_173 * VFMATRN;  /* YIELD */
A68_167  WFMATRN;  /* OPERATORS - mode -> union mode */
A68_297  XFMATRN;  /* clause result */
A68_297  YFMATRN;  /* collateral clause result */
A68_174 * ZFMATRN_ua;
A68_377  AGMATRN;  /* procedure value */
A68_297  BGMATRN;  /* avoid structure result */
A68_297  CGMATRN_u;
A68_297  DGMATRN;  /* collateral clause result */
A68_174  EGMATRN;  /* collateral clause result */
A68_174 * FGMATRN;  /* YIELD */
A68_167  GGMATRN;  /* OPERATORS - mode -> union mode */
A68_297  HGMATRN;  /* collateral clause result */
A68_175 * IGMATRN_ue;
A68_377  JGMATRN;  /* procedure value */
A68_297  KGMATRN;  /* avoid structure result */
A68_297  LGMATRN_u;
A68_297  MGMATRN;  /* collateral clause result */
A68_175  NGMATRN;  /* collateral clause result */
A68_175 * OGMATRN;  /* YIELD */
A68_167  PGMATRN;  /* OPERATORS - mode -> union mode */
A68_297  QGMATRN;  /* collateral clause result */
A68_176 * RGMATRN_ut;
A68_377  SGMATRN;  /* procedure value */
A68_297  TGMATRN;  /* avoid structure result */
A68_297  UGMATRN_u;
A68_297  VGMATRN;  /* collateral clause result */
A68_176  WGMATRN;  /* collateral clause result */
A68_176 * XGMATRN;  /* YIELD */
A68_167  YGMATRN;  /* OPERATORS - mode -> union mode */
A68_297  ZGMATRN;  /* collateral clause result */
A68_167  AHMATRN;  /* OPERATORS - mode -> union mode */
A68_177 * BHMATRN_ui;
A68_377  CHMATRN;  /* procedure value */
A68_297  DHMATRN;  /* avoid structure result */
A68_297  EHMATRN_u;
A68_325  FHMATRN;  /* CALL */
A68_282  GHMATRN;  /* avoid structure result */
A68_282  HHMATRN_index;
A68_BOOL  IHMATRN;  /* optbool result */
A68_297  JHMATRN;  /* collateral clause result */
A68_177  KHMATRN;  /* collateral clause result */
A68_177 * LHMATRN;  /* YIELD */
A68_167  MHMATRN;  /* OPERATORS - mode -> union mode */
A68_297  NHMATRN;  /* collateral clause result */
A68_178 * OHMATRN_ut;
A68_377  PHMATRN;  /* procedure value */
A68_297  QHMATRN;  /* avoid structure result */
A68_297  RHMATRN_u;
A68_328  SHMATRN;  /* CALL */
A68_285  THMATRN;  /* avoid structure result */
A68_285  UHMATRN_rc;
A68_BOOL  VHMATRN;  /* optbool result */
A68_297  WHMATRN;  /* collateral clause result */
A68_178  XHMATRN;  /* collateral clause result */
A68_178 * YHMATRN;  /* YIELD */
A68_167  ZHMATRN;  /* OPERATORS - mode -> union mode */
A68_297  AIMATRN;  /* collateral clause result */
A68_179 * BIMATRN_udy;
A68_377  CIMATRN;  /* procedure value */
A68_297  DIMATRN;  /* avoid structure result */
A68_297  EIMATRN_u;
A68_340  FIMATRN;  /* CALL */
A68_297  GIMATRN;  /* avoid structure result */
A68_297  HIMATRN_index;
A68_BOOL  IIMATRN;  /* optbool result */
A68_297  JIMATRN;  /* collateral clause result */
A68_179  KIMATRN;  /* collateral clause result */
A68_179 * LIMATRN;  /* YIELD */
A68_167  MIMATRN;  /* OPERATORS - mode -> union mode */
A68_297  NIMATRN;  /* collateral clause result */
A68_181 * OIMATRN_ur;
A68_325  PIMATRN;  /* CALL */
A68_282  QIMATRN;  /* avoid structure result */
A68_282  RIMATRN_size;
A68_377  SIMATRN;  /* procedure value */
A68_297  TIMATRN;  /* avoid structure result */
A68_297  UIMATRN_u;
A68_BOOL  VIMATRN;  /* optbool result */
A68_297  WIMATRN;  /* collateral clause result */
A68_181  XIMATRN;  /* collateral clause result */
A68_181 * YIMATRN;  /* YIELD */
A68_167  ZIMATRN;  /* OPERATORS - mode -> union mode */
A68_297  AJMATRN;  /* collateral clause result */
A68_183 * BJMATRN_ucon;
A68_377  CJMATRN;  /* procedure value */
A68_297  DJMATRN;  /* avoid structure result */
A68_297  EJMATRN_l;
A68_377  FJMATRN;  /* procedure value */
A68_297  GJMATRN;  /* avoid structure result */
A68_297  HJMATRN_r;
A68_BOOL  IJMATRN;  /* optbool result */
A68_297  JJMATRN;  /* collateral clause result */
A68_183  KJMATRN;  /* collateral clause result */
A68_183 * LJMATRN;  /* YIELD */
A68_167  MJMATRN;  /* OPERATORS - mode -> union mode */
A68_297  NJMATRN;  /* collateral clause result */
A68_184 * OJMATRN_um;
A68_343  PJMATRN;  /* CALL */
A68_300  QJMATRN;  /* avoid structure result */
A68_300  RJMATRN_ic;
A68_377  SJMATRN;  /* procedure value */
A68_297  TJMATRN;  /* avoid structure result */
A68_297  UJMATRN_u;
A68_BOOL  VJMATRN;  /* optbool result */
A68_297  WJMATRN;  /* collateral clause result */
A68_184  XJMATRN;  /* collateral clause result */
A68_184 * YJMATRN;  /* YIELD */
A68_167  ZJMATRN;  /* OPERATORS - mode -> union mode */
A68_297  AKMATRN;  /* collateral clause result */
A68_185 * BKMATRN_ud;
A68_377  CKMATRN;  /* procedure value */
A68_297  DKMATRN;  /* avoid structure result */
A68_297  EKMATRN_l;
A68_343  FKMATRN;  /* CALL */
A68_300  GKMATRN;  /* avoid structure result */
A68_300  HKMATRN_ic;
A68_377  IKMATRN;  /* procedure value */
A68_297  JKMATRN;  /* avoid structure result */
A68_297  KKMATRN_r;
A68_BOOL  LKMATRN;  /* optbool result */
A68_297  MKMATRN;  /* collateral clause result */
A68_185  NKMATRN;  /* collateral clause result */
A68_185 * OKMATRN;  /* YIELD */
A68_167  PKMATRN;  /* OPERATORS - mode -> union mode */
A68_297  QKMATRN;  /* collateral clause result */
A68_188 * RKMATRN_url;
A68_325  SKMATRN;  /* CALL */
A68_282  TKMATRN;  /* avoid structure result */
A68_282  UKMATRN_replc;
A68_377  VKMATRN;  /* procedure value */
A68_297  WKMATRN;  /* avoid structure result */
A68_297  XKMATRN_u;
A68_BOOL  YKMATRN;  /* optbool result */
A68_297  ZKMATRN;  /* collateral clause result */
A68_188  ALMATRN;  /* collateral clause result */
A68_188 * BLMATRN;  /* YIELD */
A68_167  CLMATRN;  /* OPERATORS - mode -> union mode */
A68_297  DLMATRN;  /* collateral clause result */
A68_191 * ELMATRN_uat;
A68_377  FLMATRN;  /* procedure value */
A68_297  GLMATRN;  /* avoid structure result */
A68_297  HLMATRN_u;
A68_322  ILMATRN;  /* CALL */
A68_279  JLMATRN;  /* avoid structure result */
A68_279  KLMATRN_ac;
A68_BOOL  LLMATRN;  /* optbool result */
A68_297  MLMATRN;  /* collateral clause result */
A68_191  NLMATRN;  /* collateral clause result */
A68_191 * OLMATRN;  /* YIELD */
A68_167  PLMATRN;  /* OPERATORS - mode -> union mode */
A68_297  QLMATRN;  /* collateral clause result */
A68_194 * RLMATRN_ug;
A68_325  SLMATRN;  /* CALL */
A68_282  TLMATRN;  /* avoid structure result */
A68_282  ULMATRN_size;
A68_377  VLMATRN;  /* procedure value */
A68_297  WLMATRN;  /* avoid structure result */
A68_297  XLMATRN_u;
A68_BOOL  YLMATRN;  /* optbool result */
A68_297  ZLMATRN;  /* collateral clause result */
A68_194  AMMATRN;  /* collateral clause result */
A68_194 * BMMATRN;  /* YIELD */
A68_167  CMMATRN;  /* OPERATORS - mode -> union mode */
A68_297  DMMATRN;  /* collateral clause result */
A68_165 * EMMATRN_cq;
A68_288  FMMATRN;  /* avoid structure result */
A68_288  GMMATRN_t;
A68_297  HMMATRN;  /* collateral clause result */
A68_167  IMMATRN;  /* OPERATORS - mode -> union mode */
A68_165 * JMMATRN;  /* YIELD */
A68_297  KMMATRN;  /* collateral clause result */
A68_193 * LMMATRN_ub;
A68_297  MMMATRN;  /* collateral clause result */
A68_297  NMMATRN;  /* avoid structure result */
A68_340  OMMATRN;  /* CALL */
A68_297  PMMATRN;  /* avoid structure result */
A_PROC_ENTRY(unit);
 /* line 259: */
 /* line 260: */
KFMATRN = Un ;
switch ( KFMATRN.mode )
{ 
case 12: /* REF STRUCT(MODE167,MODE167)  */
LFMATRN_ufn = (KFMATRN.data.mode12);
 /* line 261: */
{ 
MFMATRN.fn.fn_global = YDMATRN_udiadic;
MFMATRN.nonlocals = A68_NIL;
MEMATRN_bracket_unit( (*(&(LFMATRN_ufn->Source))), MFMATRN, Tprocs, &NFMATRN );
OFMATRN_u1 = NFMATRN;
 /* line 262: */
PFMATRN.fn.fn_global = YDMATRN_udiadic;
PFMATRN.nonlocals = A68_NIL;
MEMATRN_bracket_unit( (*(&(LFMATRN_ufn->Sink))), PFMATRN, Tprocs, &QFMATRN );
RFMATRN_u2 = QFMATRN;
 /* line 263: */
 /* line 264: */
SFMATRN = OFMATRN_u1.C;
if ( ! SFMATRN )
{SFMATRN = RFMATRN_u2.C;
}
if ( SFMATRN )
{ 
UFMATRN.Sink = OFMATRN_u1.U;
UFMATRN.Source = RFMATRN_u2.U;
VFMATRN = A_HEAP(A68_173 ) ;
(*VFMATRN) = UFMATRN ;
TFMATRN.U = A_UNITE(WFMATRN,mode12,12,VFMATRN);
 /* line 265: */
TFMATRN.C = A68_TRUE;
XFMATRN = TFMATRN;
} 
else
{ 
YFMATRN.U = Un;
 /* line 266: */
 /* line 267: */
 /* line 268: */
YFMATRN.C = A68_FALSE;
XFMATRN = YFMATRN;
} 
} 
break;
case 13: /* REF STRUCT(INT,INT,MODE167)  */
ZFMATRN_ua = (KFMATRN.data.mode13);
 /* line 269: */
{ 
AGMATRN.fn.fn_global = CEMATRN_uright;
AGMATRN.nonlocals = A68_NIL;
MEMATRN_bracket_unit( (*(&(ZFMATRN_ua->Assoc))), AGMATRN, Tprocs, &BGMATRN );
CGMATRN_u = BGMATRN;
 /* line 270: */
 /* line 271: */
if ( CGMATRN_u.C )
{ 
EGMATRN.Typeno = (*(&(ZFMATRN_ua->Typeno)));
EGMATRN.Altno = (*(&(ZFMATRN_ua->Altno)));
EGMATRN.Assoc = CGMATRN_u.U;
FGMATRN = A_HEAP(A68_174 ) ;
(*FGMATRN) = EGMATRN ;
DGMATRN.U = A_UNITE(GGMATRN,mode13,13,FGMATRN);
 /* line 272: */
DGMATRN.C = A68_TRUE;
XFMATRN = DGMATRN;
} 
else
{ 
HGMATRN.U = Un;
 /* line 273: */
 /* line 274: */
 /* line 275: */
HGMATRN.C = A68_FALSE;
XFMATRN = HGMATRN;
} 
} 
break;
case 14: /* REF STRUCT(MODE167,INT,INT)  */
IGMATRN_ue = (KFMATRN.data.mode14);
 /* line 276: */
{ 
JGMATRN.fn.fn_global = GEMATRN_uleft;
JGMATRN.nonlocals = A68_NIL;
MEMATRN_bracket_unit( (*(&(IGMATRN_ue->Extract))), JGMATRN, Tprocs, &KGMATRN );
LGMATRN_u = KGMATRN;
 /* line 277: */
 /* line 278: */
if ( LGMATRN_u.C )
{ 
NGMATRN.Extract = LGMATRN_u.U;
NGMATRN.Typeno = (*(&(IGMATRN_ue->Typeno)));
NGMATRN.Altno = (*(&(IGMATRN_ue->Altno)));
OGMATRN = A_HEAP(A68_175 ) ;
(*OGMATRN) = NGMATRN ;
MGMATRN.U = A_UNITE(PGMATRN,mode14,14,OGMATRN);
 /* line 279: */
MGMATRN.C = A68_TRUE;
XFMATRN = MGMATRN;
} 
else
{ 
QGMATRN.U = Un;
 /* line 280: */
 /* line 281: */
 /* line 282: */
QGMATRN.C = A68_FALSE;
XFMATRN = QGMATRN;
} 
} 
break;
case 15: /* REF STRUCT(MODE167,INT,INT)  */
RGMATRN_ut = (KFMATRN.data.mode15);
 /* line 283: */
{ 
SGMATRN.fn.fn_global = GEMATRN_uleft;
SGMATRN.nonlocals = A68_NIL;
MEMATRN_bracket_unit( (*(&(RGMATRN_ut->Unit))), SGMATRN, Tprocs, &TGMATRN );
UGMATRN_u = TGMATRN;
 /* line 284: */
 /* line 285: */
if ( UGMATRN_u.C )
{ 
WGMATRN.Unit = UGMATRN_u.U;
WGMATRN.Fnno = (*(&(RGMATRN_ut->Fnno)));
WGMATRN.Nameno = (*(&(RGMATRN_ut->Nameno)));
XGMATRN = A_HEAP(A68_176 ) ;
(*XGMATRN) = WGMATRN ;
VGMATRN.U = A_UNITE(YGMATRN,mode15,15,XGMATRN);
 /* line 286: */
VGMATRN.C = A68_TRUE;
XFMATRN = VGMATRN;
} 
else
{ 
ZGMATRN.U = A_UNITE(AHMATRN,mode15,15,RGMATRN_ut);
 /* line 287: */
 /* line 288: */
 /* line 289: */
ZGMATRN.C = A68_FALSE;
XFMATRN = ZGMATRN;
} 
} 
break;
case 16: /* REF STRUCT(MODE167,MODE129)  */
BHMATRN_ui = (KFMATRN.data.mode16);
 /* line 290: */
{ 
CHMATRN.fn.fn_global = GEMATRN_uleft;
CHMATRN.nonlocals = A68_NIL;
MEMATRN_bracket_unit( (*(&(BHMATRN_ui->Unit))), CHMATRN, Tprocs, &DHMATRN );
EHMATRN_u = DHMATRN;
 /* line 291: */
FHMATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(FHMATRN,((*(&(BHMATRN_ui->Index))), Tprocs, &GHMATRN),((*(&(BHMATRN_ui->Index))), Tprocs, &GHMATRN,(FHMATRN).nonlocals));
HHMATRN_index = GHMATRN;
 /* line 292: */
 /* line 293: */
IHMATRN = EHMATRN_u.C;
if ( ! IHMATRN )
{IHMATRN = HHMATRN_index.C;
}
if ( IHMATRN )
{ 
KHMATRN.Unit = EHMATRN_u.U;
KHMATRN.Index = HHMATRN_index.F;
LHMATRN = A_HEAP(A68_177 ) ;
(*LHMATRN) = KHMATRN ;
JHMATRN.U = A_UNITE(MHMATRN,mode16,16,LHMATRN);
 /* line 294: */
JHMATRN.C = A68_TRUE;
XFMATRN = JHMATRN;
} 
else
{ 
NHMATRN.U = Un;
 /* line 295: */
 /* line 296: */
 /* line 297: */
NHMATRN.C = A68_FALSE;
XFMATRN = NHMATRN;
} 
} 
break;
case 17: /* REF STRUCT(MODE167,MODE144)  */
OHMATRN_ut = (KFMATRN.data.mode17);
 /* line 298: */
{ 
PHMATRN.fn.fn_global = GEMATRN_uleft;
PHMATRN.nonlocals = A68_NIL;
MEMATRN_bracket_unit( (*(&(OHMATRN_ut->Unit))), PHMATRN, Tprocs, &QHMATRN );
RHMATRN_u = QHMATRN;
 /* line 299: */
SHMATRN = (*(&(Tprocs->Range))) ;
A_CALLPROC(SHMATRN,((*(&(OHMATRN_ut->Range))), Tprocs, &THMATRN),((*(&(OHMATRN_ut->Range))), Tprocs, &THMATRN,(SHMATRN).nonlocals));
UHMATRN_rc = THMATRN;
 /* line 300: */
 /* line 301: */
VHMATRN = RHMATRN_u.C;
if ( ! VHMATRN )
{VHMATRN = UHMATRN_rc.C;
}
if ( VHMATRN )
{ 
XHMATRN.Unit = RHMATRN_u.U;
XHMATRN.Range = UHMATRN_rc.R;
YHMATRN = A_HEAP(A68_178 ) ;
(*YHMATRN) = XHMATRN ;
WHMATRN.U = A_UNITE(ZHMATRN,mode17,17,YHMATRN);
 /* line 302: */
WHMATRN.C = A68_TRUE;
XFMATRN = WHMATRN;
} 
else
{ 
AIMATRN.U = Un;
 /* line 303: */
 /* line 304: */
 /* line 305: */
AIMATRN.C = A68_FALSE;
XFMATRN = AIMATRN;
} 
} 
break;
case 18: /* REF STRUCT(MODE167,MODE167)  */
BIMATRN_udy = (KFMATRN.data.mode18);
 /* line 306: */
{ 
CIMATRN.fn.fn_global = GEMATRN_uleft;
CIMATRN.nonlocals = A68_NIL;
MEMATRN_bracket_unit( (*(&(BIMATRN_udy->Unit))), CIMATRN, Tprocs, &DIMATRN );
EIMATRN_u = DIMATRN;
 /* line 307: */
FIMATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(FIMATRN,((*(&(BIMATRN_udy->Index))), Tprocs, &GIMATRN),((*(&(BIMATRN_udy->Index))), Tprocs, &GIMATRN,(FIMATRN).nonlocals));
HIMATRN_index = GIMATRN;
 /* line 308: */
 /* line 309: */
IIMATRN = EIMATRN_u.C;
if ( ! IIMATRN )
{IIMATRN = HIMATRN_index.C;
}
if ( IIMATRN )
{ 
KIMATRN.Unit = EIMATRN_u.U;
KIMATRN.Index = HIMATRN_index.U;
LIMATRN = A_HEAP(A68_179 ) ;
(*LIMATRN) = KIMATRN ;
JIMATRN.U = A_UNITE(MIMATRN,mode18,18,LIMATRN);
 /* line 310: */
JIMATRN.C = A68_TRUE;
XFMATRN = JIMATRN;
} 
else
{ 
NIMATRN.U = Un;
 /* line 311: */
 /* line 312: */
 /* line 313: */
NIMATRN.C = A68_FALSE;
XFMATRN = NIMATRN;
} 
} 
break;
case 20: /* REF STRUCT(MODE129,MODE167)  */
OIMATRN_ur = (KFMATRN.data.mode20);
 /* line 314: */
{ 
PIMATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(PIMATRN,((*(&(OIMATRN_ur->Size))), Tprocs, &QIMATRN),((*(&(OIMATRN_ur->Size))), Tprocs, &QIMATRN,(PIMATRN).nonlocals));
RIMATRN_size = QIMATRN;
 /* line 315: */
SIMATRN.fn.fn_global = CEMATRN_uright;
SIMATRN.nonlocals = A68_NIL;
MEMATRN_bracket_unit( (*(&(OIMATRN_ur->Elem))), SIMATRN, Tprocs, &TIMATRN );
UIMATRN_u = TIMATRN;
 /* line 316: */
 /* line 317: */
VIMATRN = RIMATRN_size.C;
if ( ! VIMATRN )
{VIMATRN = UIMATRN_u.C;
}
if ( VIMATRN )
{ 
XIMATRN.Size = RIMATRN_size.F;
XIMATRN.Elem = UIMATRN_u.U;
YIMATRN = A_HEAP(A68_181 ) ;
(*YIMATRN) = XIMATRN ;
WIMATRN.U = A_UNITE(ZIMATRN,mode20,20,YIMATRN);
 /* line 318: */
WIMATRN.C = A68_TRUE;
XFMATRN = WIMATRN;
} 
else
{ 
AJMATRN.U = Un;
 /* line 319: */
 /* line 320: */
 /* line 321: */
AJMATRN.C = A68_FALSE;
XFMATRN = AJMATRN;
} 
} 
break;
case 22: /* REF STRUCT(BOOL,INT,MODE167,MODE167)  */
BJMATRN_ucon = (KFMATRN.data.mode22);
 /* line 322: */
{ 
CJMATRN.fn.fn_global = YDMATRN_udiadic;
CJMATRN.nonlocals = A68_NIL;
MEMATRN_bracket_unit( (*(&(BJMATRN_ucon->Left))), CJMATRN, Tprocs, &DJMATRN );
EJMATRN_l = DJMATRN;
 /* line 323: */
FJMATRN.fn.fn_global = YDMATRN_udiadic;
FJMATRN.nonlocals = A68_NIL;
MEMATRN_bracket_unit( (*(&(BJMATRN_ucon->Right))), FJMATRN, Tprocs, &GJMATRN );
HJMATRN_r = GJMATRN;
 /* line 324: */
 /* line 325: */
IJMATRN = EJMATRN_l.C;
if ( ! IJMATRN )
{IJMATRN = HJMATRN_r.C;
}
if ( IJMATRN )
{ 
KJMATRN.String = (*(&(BJMATRN_ucon->String)));
 /* line 326: */
KJMATRN.Sort = (*(&(BJMATRN_ucon->Sort)));
KJMATRN.Left = EJMATRN_l.U;
KJMATRN.Right = HJMATRN_r.U;
LJMATRN = A_HEAP(A68_183 ) ;
(*LJMATRN) = KJMATRN ;
JJMATRN.U = A_UNITE(MJMATRN,mode22,22,LJMATRN);
 /* line 327: */
JJMATRN.C = A68_TRUE;
XFMATRN = JJMATRN;
} 
else
{ 
NJMATRN.U = Un;
 /* line 328: */
 /* line 329: */
 /* line 330: */
NJMATRN.C = A68_FALSE;
XFMATRN = NJMATRN;
} 
} 
break;
case 23: /* REF STRUCT(MODE207,MODE167)  */
OJMATRN_um = (KFMATRN.data.mode23);
 /* line 331: */
{ 
PJMATRN = (*(&(Tprocs->Instance))) ;
A_CALLPROC(PJMATRN,((*(&(OJMATRN_um->Inst))), Tprocs, &QJMATRN),((*(&(OJMATRN_um->Inst))), Tprocs, &QJMATRN,(PJMATRN).nonlocals));
RJMATRN_ic = QJMATRN;
 /* line 332: */
SJMATRN.fn.fn_global = CEMATRN_uright;
SJMATRN.nonlocals = A68_NIL;
MEMATRN_bracket_unit( (*(&(OJMATRN_um->Right))), SJMATRN, Tprocs, &TJMATRN );
UJMATRN_u = TJMATRN;
 /* line 333: */
 /* line 334: */
VJMATRN = UJMATRN_u.C;
if ( ! VJMATRN )
{VJMATRN = RJMATRN_ic.C;
}
if ( VJMATRN )
{ 
XJMATRN.Inst = RJMATRN_ic.I;
XJMATRN.Right = UJMATRN_u.U;
YJMATRN = A_HEAP(A68_184 ) ;
(*YJMATRN) = XJMATRN ;
WJMATRN.U = A_UNITE(ZJMATRN,mode23,23,YJMATRN);
 /* line 335: */
WJMATRN.C = A68_TRUE;
XFMATRN = WJMATRN;
} 
else
{ 
AKMATRN.U = Un;
 /* line 336: */
 /* line 337: */
 /* line 338: */
AKMATRN.C = A68_FALSE;
XFMATRN = AKMATRN;
} 
} 
break;
case 24: /* REF STRUCT(MODE167,MODE207,MODE167)  */
BKMATRN_ud = (KFMATRN.data.mode24);
 /* line 339: */
{ 
CKMATRN.fn.fn_global = YDMATRN_udiadic;
CKMATRN.nonlocals = A68_NIL;
MEMATRN_bracket_unit( (*(&(BKMATRN_ud->Left))), CKMATRN, Tprocs, &DKMATRN );
EKMATRN_l = DKMATRN;
 /* line 340: */
FKMATRN = (*(&(Tprocs->Instance))) ;
A_CALLPROC(FKMATRN,((*(&(BKMATRN_ud->Inst))), Tprocs, &GKMATRN),((*(&(BKMATRN_ud->Inst))), Tprocs, &GKMATRN,(FKMATRN).nonlocals));
HKMATRN_ic = GKMATRN;
 /* line 341: */
IKMATRN.fn.fn_global = YDMATRN_udiadic;
IKMATRN.nonlocals = A68_NIL;
MEMATRN_bracket_unit( (*(&(BKMATRN_ud->Right))), IKMATRN, Tprocs, &JKMATRN );
KKMATRN_r = JKMATRN;
 /* line 342: */
LKMATRN = EKMATRN_l.C;
if ( ! LKMATRN )
{LKMATRN = KKMATRN_r.C;
}
 /* line 343: */
if ( ! LKMATRN )
{LKMATRN = HKMATRN_ic.C;
}
if ( LKMATRN )
{ 
NKMATRN.Left = EKMATRN_l.U;
NKMATRN.Inst = HKMATRN_ic.I;
NKMATRN.Right = KKMATRN_r.U;
OKMATRN = A_HEAP(A68_185 ) ;
(*OKMATRN) = NKMATRN ;
MKMATRN.U = A_UNITE(PKMATRN,mode24,24,OKMATRN);
 /* line 344: */
MKMATRN.C = A68_TRUE;
XFMATRN = MKMATRN;
} 
else
{ 
QKMATRN.U = Un;
 /* line 345: */
 /* line 346: */
 /* line 347: */
QKMATRN.C = A68_FALSE;
XFMATRN = QKMATRN;
} 
} 
break;
case 27: /* REF STRUCT(MODE129,MODE167)  */
RKMATRN_url = (KFMATRN.data.mode27);
 /* line 348: */
{ 
SKMATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(SKMATRN,((*(&(RKMATRN_url->Repl))), Tprocs, &TKMATRN),((*(&(RKMATRN_url->Repl))), Tprocs, &TKMATRN,(SKMATRN).nonlocals));
UKMATRN_replc = TKMATRN;
 /* line 349: */
VKMATRN.fn.fn_global = CEMATRN_uright;
VKMATRN.nonlocals = A68_NIL;
MEMATRN_bracket_unit( (*(&(RKMATRN_url->Body))), VKMATRN, Tprocs, &WKMATRN );
XKMATRN_u = WKMATRN;
 /* line 350: */
 /* line 351: */
YKMATRN = UKMATRN_replc.C;
if ( ! YKMATRN )
{YKMATRN = XKMATRN_u.C;
}
if ( YKMATRN )
{ 
ALMATRN.Repl = UKMATRN_replc.F;
ALMATRN.Body = XKMATRN_u.U;
BLMATRN = A_HEAP(A68_188 ) ;
(*BLMATRN) = ALMATRN ;
ZKMATRN.U = A_UNITE(CLMATRN,mode27,27,BLMATRN);
 /* line 352: */
ZKMATRN.C = A68_TRUE;
XFMATRN = ZKMATRN;
} 
else
{ 
DLMATRN.U = Un;
 /* line 353: */
 /* line 354: */
 /* line 355: */
DLMATRN.C = A68_FALSE;
XFMATRN = DLMATRN;
} 
} 
break;
case 30: /* REF STRUCT(MODE167,MODE120)  */
ELMATRN_uat = (KFMATRN.data.mode30);
 /* line 356: */
{ 
FLMATRN.fn.fn_global = GEMATRN_uleft;
FLMATRN.nonlocals = A68_NIL;
MEMATRN_bracket_unit( (*(&(ELMATRN_uat->Unit))), FLMATRN, Tprocs, &GLMATRN );
HLMATRN_u = GLMATRN;
 /* line 357: */
ILMATRN = (*(&(Tprocs->Attr))) ;
A_CALLPROC(ILMATRN,((*(&(ELMATRN_uat->Attr))), Tprocs, &JLMATRN),((*(&(ELMATRN_uat->Attr))), Tprocs, &JLMATRN,(ILMATRN).nonlocals));
KLMATRN_ac = JLMATRN;
 /* line 358: */
 /* line 359: */
LLMATRN = HLMATRN_u.C;
if ( ! LLMATRN )
{LLMATRN = KLMATRN_ac.C;
}
if ( LLMATRN )
{ 
NLMATRN.Unit = HLMATRN_u.U;
NLMATRN.Attr = KLMATRN_ac.A;
OLMATRN = A_HEAP(A68_191 ) ;
(*OLMATRN) = NLMATRN ;
MLMATRN.U = A_UNITE(PLMATRN,mode30,30,OLMATRN);
 /* line 360: */
MLMATRN.C = A68_TRUE;
XFMATRN = MLMATRN;
} 
else
{ 
QLMATRN.U = Un;
 /* line 361: */
 /* line 362: */
 /* line 363: */
QLMATRN.C = A68_FALSE;
XFMATRN = QLMATRN;
} 
} 
break;
case 33: /* REF STRUCT(MODE129,MODE167)  */
RLMATRN_ug = (KFMATRN.data.mode33);
 /* line 364: */
{ 
SLMATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(SLMATRN,((*(&(RLMATRN_ug->Size))), Tprocs, &TLMATRN),((*(&(RLMATRN_ug->Size))), Tprocs, &TLMATRN,(SLMATRN).nonlocals));
ULMATRN_size = TLMATRN;
 /* line 365: */
VLMATRN.fn.fn_global = CEMATRN_uright;
VLMATRN.nonlocals = A68_NIL;
MEMATRN_bracket_unit( (*(&(RLMATRN_ug->Char))), VLMATRN, Tprocs, &WLMATRN );
XLMATRN_u = WLMATRN;
 /* line 366: */
 /* line 367: */
YLMATRN = ULMATRN_size.C;
if ( ! YLMATRN )
{YLMATRN = XLMATRN_u.C;
}
if ( YLMATRN )
{ 
AMMATRN.Size = ULMATRN_size.F;
AMMATRN.Char = XLMATRN_u.U;
BMMATRN = A_HEAP(A68_194 ) ;
(*BMMATRN) = AMMATRN ;
ZLMATRN.U = A_UNITE(CMMATRN,mode33,33,BMMATRN);
 /* line 368: */
ZLMATRN.C = A68_TRUE;
XFMATRN = ZLMATRN;
} 
else
{ 
DMMATRN.U = Un;
 /* line 369: */
 /* line 370: */
 /* line 371: */
DMMATRN.C = A68_FALSE;
XFMATRN = DMMATRN;
} 
} 
break;
case 4: /* REF STRUCT(MODE145)  */
EMMATRN_cq = (KFMATRN.data.mode4);
 /* line 372: */
{ 
DAMATRN_bracket_type( (*(&(EMMATRN_cq->Querytype))), Tprocs, &FMMATRN );
GMMATRN_t = FMMATRN;
 /* line 373: */
 /* line 374: */
if ( GMMATRN_t.C )
{ 
JMMATRN = MGAATRN_makecquery(GMMATRN_t.T) ;
HMMATRN.U = A_UNITE(IMMATRN,mode4,4,JMMATRN);
 /* line 375: */
HMMATRN.C = A68_TRUE;
XFMATRN = HMMATRN;
} 
else
{ 
KMMATRN.U = Un;
 /* line 376: */
 /* line 377: */
 /* line 378: */
KMMATRN.C = A68_FALSE;
XFMATRN = KMMATRN;
} 
} 
break;
case 32: /* REF STRUCT(MODE167)  */
LMMATRN_ub = (KFMATRN.data.mode32);
 /* line 379: */
A_CALLPROC(NL(HFMATRN_unit),((*(&(LMMATRN_ub->Unit))), Tprocs, &NMMATRN),((*(&(LMMATRN_ub->Unit))), Tprocs, &NMMATRN,(NL(HFMATRN_unit)).nonlocals));
MMMATRN.U = NMMATRN.U;
 /* line 380: */
MMMATRN.C = A68_TRUE;
XFMATRN = MMMATRN;
break;
default: 
 /* line 381: */
OMMATRN = (*(&(OXLATRN_oldtprocs->Unit))) ;
A_CALLPROC(OMMATRN,(Un, Tprocs, &PMMATRN),(Un, Tprocs, &PMMATRN,(OMMATRN).nonlocals));
XFMATRN = PMMATRN;
break;
} 
A_PROC_EXIT(unit);
*ReturnedValue = (XFMATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  BXLATRN_generator(A68_BOOL  AXLATRN_anonymous, A68_46  *ReturnedValue)
{ 
A68_46  DXLATRN;  /* OPERATORS - dynamic generator */
A68_374  CXLATRN_anonymous;
A68_373 * EXLATRN_anonymous;
A68_INT  FXLATRN;  /* forall loop counter */
A68_VC  GXLATRN;  /* avoid structure result */
A68_46  HXLATRN;  /* clause result */
{ 
DXLATRN.upb = 0 ;
( AXLATRN_anonymous? A_VLOC(A68_VC ,DXLATRN): A_VHEAP(A68_VC ,DXLATRN) );
CXLATRN_anonymous = DXLATRN;
FXLATRN = (*(&CXLATRN_anonymous)).upb -1;
EXLATRN_anonymous = (*(&CXLATRN_anonymous)).data;
for (;FXLATRN-- >= 0;
(EXLATRN_anonymous++
) )
{
A_CALLPROC(OFAAOSI_anonymous,(AXLATRN_anonymous, &GXLATRN),(AXLATRN_anonymous, &GXLATRN,(OFAAOSI_anonymous).nonlocals));
(*EXLATRN_anonymous) = GXLATRN;
}
HXLATRN = CXLATRN_anonymous;
} 
*ReturnedValue = (HXLATRN);
return;
} 
#undef NL
 /* line 60: */

A68_VOID  NXLATRN_brackets_transform(A68_256 * Closure, A68_111  Options, A68_97  Msg, A68_320  *ReturnedValue)
{ 
A68_325  CYLATRN_formula;   /* proc value of non-global proc */
A68_331  BBMATRN_type;   /* proc value of non-global proc */
A68_337  IDMATRN_ualts;   /* proc value of non-global proc */
A68_340  HFMATRN_unit;   /* proc value of non-global proc */
A68_379  QMMATRN;  /* collateral clause result */
A68_366  RMMATRN;  /* OPERATORS - mode -> union mode */
A68_322  SMMATRN;  /* YIELD */
A68_322  TMMATRN;  /* procedure value */
A68_366  UMMATRN;  /* OPERATORS - mode -> union mode */
A68_325  VMMATRN;  /* YIELD */
A68_366  WMMATRN;  /* OPERATORS - mode -> union mode */
A68_331  XMMATRN;  /* YIELD */
A68_366  YMMATRN;  /* OPERATORS - mode -> union mode */
A68_337  ZMMATRN;  /* YIELD */
A68_366  ANMATRN;  /* OPERATORS - mode -> union mode */
A68_340  BNMATRN;  /* YIELD */
A68_365  CNMATRN;  /* OPERATORS - istruct -> vector */
A68_321 * DNMATRN_newtprocs;
A68_320  ENMATRN;  /* clause result */
A68_363  FNMATRN;  /* CALL */
A68_320  GNMATRN;  /* avoid structure result */
A_PROC_ENTRY(brackets_transform);
 /* line 61: */
 /* line 62: */
{ 
 /* line 65: */
 /* line 75: */
A_CLOSURE( CYLATRN_formula, DYLATRN_formula, EYLATRN_formula );
(( EYLATRN_formula * ) ( CYLATRN_formula.nonlocals )) -> CYLATRN_formula = CYLATRN_formula;
 /* line 121: */
 /* line 142: */
A_CLOSURE( BBMATRN_type, CBMATRN_type, DBMATRN_type );
(( DBMATRN_type * ) ( BBMATRN_type.nonlocals )) -> BBMATRN_type = BBMATRN_type;
 /* line 167: */
 /* line 188: */
A_CLOSURE( IDMATRN_ualts, JDMATRN_ualts, KDMATRN_ualts );
 /* line 200: */
 /* line 209: */
 /* line 224: */
 /* line 238: */
 /* line 258: */
A_CLOSURE( HFMATRN_unit, IFMATRN_unit, JFMATRN_unit );
(( JFMATRN_unit * ) ( HFMATRN_unit.nonlocals )) -> HFMATRN_unit = HFMATRN_unit;
 /* line 384: */
 /* line 385: */
 /* line 386: */
TMMATRN.fn.fn_global = RXLATRN_attr;
TMMATRN.nonlocals = A68_NIL;
SMMATRN = TMMATRN ;
QMMATRN.data[0] = A_UNITE(RMMATRN,mode1,1,SMMATRN);
VMMATRN = CYLATRN_formula ;
QMMATRN.data[1] = A_UNITE(UMMATRN,mode4,4,VMMATRN);
XMMATRN = BBMATRN_type ;
QMMATRN.data[2] = A_UNITE(WMMATRN,mode10,10,XMMATRN);
ZMMATRN = IDMATRN_ualts ;
QMMATRN.data[3] = A_UNITE(YMMATRN,mode16,16,ZMMATRN);
BNMATRN = HFMATRN_unit ;
QMMATRN.data[4] = A_UNITE(ANMATRN,mode19,19,BNMATRN);
DNMATRN_newtprocs = THJATRN_make_newtprocs(OXLATRN_oldtprocs, A_HISVEC(CNMATRN,QMMATRN,5,A68_366 ));
 /* line 388: */
 /* line 389: */
 /* line 392: */
FNMATRN = (*(&(DNMATRN_newtprocs->Closure))) ;
A_CALLPROC(FNMATRN,(Closure, DNMATRN_newtprocs, Msg, &GNMATRN),(Closure, DNMATRN_newtprocs, Msg, &GNMATRN,(FNMATRN).nonlocals));
ENMATRN = GNMATRN;
} 
A_PROC_EXIT(brackets_transform);
*ReturnedValue = (ENMATRN);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void VWLATRN(void)   /* initialise DECS brackets_transform */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/brackets_transform.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/transformprocs.m","./mfiles/assmodes.m","/u/model/ella/ostools/assoc/mfiles/options.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_46  IXLATRN;  /* avoid structure result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
IHJATRN();   /* USE transformprocs */
BAAATRN();   /* USE assmodes */
BAAAOST();   /* USE options */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/transform/assoc/./a68files/brackets_transform.a68";
A_config.translation_time = "Tue Apr  4 10:00:32 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "UWLATRN (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:00:32 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS brackets_transform);
UEAALIB_a68config(LGAALIB_configinfo, ZWLATRN);
 /* line 57: */
BXLATRN_generator( A68_TRUE, &IXLATRN );
JXLATRN_brackets_options = IXLATRN;
 /* line 59: */
 /* line 393: */
A_PROC_EXIT(DECS brackets_transform);
} 
#undef NL
/* end of translation of ./a68files/brackets_transform.a68 */
