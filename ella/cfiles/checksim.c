
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
/* UNAME:VIBAELA */
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
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t111  A68_111 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t112{
A68_VC  Id;
struct A68t112 * Rest;
};
typedef struct A68t112  A68_112 ;    /* STRUCT(REF MODE26,REF MODE112)  */
struct A68t113{
A68_INT  Int;
A_PAD_INT(PAD_24)
struct A68t113 * Rest;
};
typedef struct A68t113  A68_113 ;    /* STRUCT(INT,REF MODE113)  */
struct A68t114 { A68_INT mode; union {
struct A68t115 * mode1;
struct A68t116 * mode2;
struct A68t117 * mode3;
struct A68t118 * mode4;
struct A68t119 * mode5;
} data; };
typedef struct A68t114  A68_114 ;    /* UNION(REF MODE115,REF MODE116,REF MODE117,REF MODE118,REF MODE119)  */
struct A68t115{
A68_INT  Attrno;
A_PAD_INT(PAD_25)
};
typedef struct A68t115  A68_115 ;    /* STRUCT(INT)  */
struct A68t116{
A68_VC  Classname;
struct A68t112 * Strings;
};
typedef struct A68t116  A68_116 ;    /* STRUCT(REF MODE26,REF MODE112)  */
struct A68t117{
struct A68t114  Elem;
struct A68t117 * Rest;
};
typedef struct A68t117  A68_117 ;    /* STRUCT(MODE114,REF MODE117)  */
struct A68t118{
struct A68t114  Attr;
};
typedef struct A68t118  A68_118 ;    /* STRUCT(MODE114)  */
struct A68t119{
A68_INT  Attrnull;
A_PAD_INT(PAD_26)
};
typedef struct A68t119  A68_119 ;    /* STRUCT(INT)  */
struct A68t120{
A68_INT  Sort;
A_PAD_INT(PAD_27)
A68_VC  Attrname;
struct A68t114  Value;
struct A68t121 * Usage;
};
typedef struct A68t120  A68_120 ;    /* STRUCT(INT,REF MODE26,MODE114,REF MODE121)  */
struct A68t121{
A68_INT  Contextno;
A_PAD_INT(PAD_28)
A68_INT  Closureno;
A_PAD_INT(PAD_29)
A68_INT  Libv_spec;
A_PAD_INT(PAD_30)
A68_INT  Libv_body;
A_PAD_INT(PAD_31)
A68_BOOL  Import;
A_PAD_BOOL(PAD_32)
A68_BOOL  Export;
A_PAD_BOOL(PAD_33)
};
typedef struct A68t121  A68_121 ;    /* STRUCT(INT,INT,INT,INT,BOOL,BOOL)  */
struct A68t122{
struct A68t114  Tag;
};
typedef struct A68t122  A68_122 ;    /* STRUCT(MODE114)  */
struct A68t123 { A68_INT mode; union {
struct A68t124 * mode1;
struct A68t125 * mode2;
struct A68t126 * mode3;
struct A68t127 * mode4;
struct A68t128 * mode5;
struct A68t129 * mode6;
struct A68t130 * mode7;
struct A68t131 * mode8;
struct A68t132 * mode9;
struct A68t133 * mode10;
} data; };
typedef struct A68t123  A68_123 ;    /* UNION(REF MODE124,REF MODE125,REF MODE126,REF MODE127,REF MODE128,REF MODE129,REF MODE130,REF MODE131,REF MODE132,REF MODE133)  */
struct A68t124{
A68_INT  Int;
A_PAD_INT(PAD_34)
A68_VC  Text;
};
typedef struct A68t124  A68_124 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t125{
A68_INT  Sort;
A_PAD_INT(PAD_35)
struct A68t123  Test;
struct A68t123  Standard;
};
typedef struct A68t125  A68_125 ;    /* STRUCT(INT,MODE123,MODE123)  */
struct A68t126{
A68_INT  Nameno;
A_PAD_INT(PAD_36)
};
typedef struct A68t126  A68_126 ;    /* STRUCT(INT)  */
struct A68t127{
A68_INT  Intno;
A_PAD_INT(PAD_37)
};
typedef struct A68t127  A68_127 ;    /* STRUCT(INT)  */
struct A68t128{
struct A68t123  Left;
A68_INT  Sort;
A_PAD_INT(PAD_38)
struct A68t123  Right;
};
typedef struct A68t128  A68_128 ;    /* STRUCT(MODE123,INT,MODE123)  */
struct A68t129{
A68_INT  Sort;
A_PAD_INT(PAD_39)
struct A68t123  Right;
};
typedef struct A68t129  A68_129 ;    /* STRUCT(INT,MODE123)  */
struct A68t130{
struct A68t123  Cond;
struct A68t123  True;
struct A68t123  False;
};
typedef struct A68t130  A68_130 ;    /* STRUCT(MODE123,MODE123,MODE123)  */
struct A68t131{
struct A68t123  Formula;
};
typedef struct A68t131  A68_131 ;    /* STRUCT(MODE123)  */
struct A68t132{
A68_INT  Macparno;
A_PAD_INT(PAD_40)
};
typedef struct A68t132  A68_132 ;    /* STRUCT(INT)  */
struct A68t133{
A68_INT  Fnull;
A_PAD_INT(PAD_41)
};
typedef struct A68t133  A68_133 ;    /* STRUCT(INT)  */
struct A68t134{
struct A68t123  Tag;
};
typedef struct A68t134  A68_134 ;    /* STRUCT(MODE123)  */
struct A68t135{
struct A68t123  Formula;
struct A68t135 * Rest;
};
typedef struct A68t135  A68_135 ;    /* STRUCT(MODE123,REF MODE135)  */
struct A68t138{
struct A68t123  Lwb;
struct A68t123  Upb;
};
typedef struct A68t138  A68_138 ;    /* STRUCT(MODE123,MODE123)  */
struct A68t137 { A68_INT mode; union {
struct A68t124 * mode1;
struct A68t125 * mode2;
struct A68t126 * mode3;
struct A68t127 * mode4;
struct A68t128 * mode5;
struct A68t129 * mode6;
struct A68t130 * mode7;
struct A68t131 * mode8;
struct A68t132 * mode9;
struct A68t133 * mode10;
struct A68t138  mode11;
} data; };
typedef struct A68t137  A68_137 ;    /* UNION(REF MODE124,REF MODE125,REF MODE126,REF MODE127,REF MODE128,REF MODE129,REF MODE130,REF MODE131,REF MODE132,REF MODE133,MODE138)  */
struct A68t136{
A68_INT  Sort;
A_PAD_INT(PAD_42)
A68_VC  Intname;
struct A68t114  Attr;
struct A68t137  Value;
struct A68t121 * Usage;
};
typedef struct A68t136  A68_136 ;    /* STRUCT(INT,REF MODE26,MODE114,MODE137,REF MODE121)  */
struct A68t139 { A68_INT mode; union {
struct A68t140 * mode1;
struct A68t141 * mode2;
struct A68t142 * mode3;
struct A68t143 * mode4;
struct A68t144 * mode5;
struct A68t145 * mode6;
struct A68t146 * mode7;
struct A68t132 * mode8;
struct A68t147 * mode9;
} data; };
typedef struct A68t139  A68_139 ;    /* UNION(REF MODE140,REF MODE141,REF MODE142,REF MODE143,REF MODE144,REF MODE145,REF MODE146,REF MODE132,REF MODE147)  */
struct A68t140{
A68_INT  Typeno;
A_PAD_INT(PAD_43)
};
typedef struct A68t140  A68_140 ;    /* STRUCT(INT)  */
struct A68t141{
struct A68t123  Size;
struct A68t139  Elem;
};
typedef struct A68t141  A68_141 ;    /* STRUCT(MODE123,MODE139)  */
struct A68t142{
struct A68t139  Elem;
struct A68t142 * Rest;
};
typedef struct A68t142  A68_142 ;    /* STRUCT(MODE139,REF MODE142)  */
struct A68t143{
struct A68t139  From;
struct A68t139  To;
};
typedef struct A68t143  A68_143 ;    /* STRUCT(MODE139,MODE139)  */
struct A68t144{
struct A68t139  Type;
};
typedef struct A68t144  A68_144 ;    /* STRUCT(MODE139)  */
struct A68t145{
struct A68t123  Size;
struct A68t139  Char;
};
typedef struct A68t145  A68_145 ;    /* STRUCT(MODE123,MODE139)  */
struct A68t146{
A68_INT  Tvoid;
A_PAD_INT(PAD_44)
};
typedef struct A68t146  A68_146 ;    /* STRUCT(INT)  */
struct A68t147{
A68_INT  Tnull;
A_PAD_INT(PAD_45)
};
typedef struct A68t147  A68_147 ;    /* STRUCT(INT)  */
struct A68t148{
struct A68t139  Tag;
};
typedef struct A68t148  A68_148 ;    /* STRUCT(MODE139)  */
struct A68t149{
A68_VC  Tagname;
A68_VC  Chars;
};
typedef struct A68t149  A68_149 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t150{
A68_VC  Altname;
struct A68t139  Assoc;
};
typedef struct A68t150  A68_150 ;    /* STRUCT(REF MODE26,MODE139)  */
struct A68t151{
A68_VC  Tagname;
struct A68t138  Range;
};
typedef struct A68t151  A68_151 ;    /* STRUCT(REF MODE26,MODE138)  */
A_VECTOR(struct A68t150 ,A68t153);
typedef struct A68t153  A68_153 ;    /* VECTOR [] MODE150 */
struct A68t152 { A68_INT mode; union {
struct A68t153  mode1;
struct A68t151 * mode2;
struct A68t148 * mode3;
struct A68t149 * mode4;
} data; };
typedef struct A68t152  A68_152 ;    /* UNION(REF MODE153,REF MODE151,REF MODE148,REF MODE149)  */
struct A68t154{
A68_INT  Sort;
A_PAD_INT(PAD_46)
A68_VC  Typename;
struct A68t114  Attr;
struct A68t152  Body;
struct A68t121 * Usage;
};
typedef struct A68t154  A68_154 ;    /* STRUCT(INT,REF MODE26,MODE114,MODE152,REF MODE121)  */
struct A68t155{
A68_INT  Constno;
A_PAD_INT(PAD_47)
};
typedef struct A68t155  A68_155 ;    /* STRUCT(INT)  */
struct A68t156{
A68_INT  Typeno;
A_PAD_INT(PAD_48)
A68_INT  Primno;
A_PAD_INT(PAD_49)
};
typedef struct A68t156  A68_156 ;    /* STRUCT(INT,INT)  */
struct A68t157{
A68_INT  Typeno;
A_PAD_INT(PAD_50)
struct A68t123  Index;
};
typedef struct A68t157  A68_157 ;    /* STRUCT(INT,MODE123)  */
struct A68t158{
A68_INT  Typeno;
A_PAD_INT(PAD_51)
struct A68t138  Range;
};
typedef struct A68t158  A68_158 ;    /* STRUCT(INT,MODE138)  */
struct A68t159{
struct A68t139  Querytype;
};
typedef struct A68t159  A68_159 ;    /* STRUCT(MODE139)  */
struct A68t161 { A68_INT mode; union {
struct A68t155 * mode1;
struct A68t156 * mode2;
struct A68t157 * mode3;
struct A68t159 * mode4;
struct A68t162 * mode5;
struct A68t163 * mode6;
struct A68t144 * mode7;
struct A68t158 * mode8;
struct A68t164 * mode9;
struct A68t165 * mode10;
struct A68t166 * mode11;
struct A68t167 * mode12;
struct A68t168 * mode13;
struct A68t169 * mode14;
struct A68t170 * mode15;
struct A68t171 * mode16;
struct A68t172 * mode17;
struct A68t173 * mode18;
struct A68t174 * mode19;
struct A68t175 * mode20;
struct A68t176 * mode21;
struct A68t177 * mode22;
struct A68t178 * mode23;
struct A68t179 * mode24;
struct A68t180 * mode25;
struct A68t181 * mode26;
struct A68t182 * mode27;
struct A68t183 * mode28;
struct A68t184 * mode29;
struct A68t185 * mode30;
struct A68t186 * mode31;
struct A68t187 * mode32;
struct A68t188 * mode33;
struct A68t189 * mode34;
} data; };
typedef struct A68t161  A68_161 ;    /* UNION(REF MODE155,REF MODE156,REF MODE157,REF MODE159,REF MODE162,REF MODE163,REF MODE144,REF MODE158,REF MODE164,REF MODE165,REF MODE166,REF MODE167,REF MODE168,REF MODE169,REF MODE170,REF MODE171,REF MODE172,REF MODE173,REF MODE174,REF MODE175,REF MODE176,REF MODE177,REF MODE178,REF MODE179,REF MODE180,REF MODE181,REF MODE182,REF MODE183,REF MODE184,REF MODE185,REF MODE186,REF MODE187,REF MODE188,REF MODE189)  */
struct A68t160{
A68_INT  Sort;
A_PAD_INT(PAD_52)
A68_VC  Constname;
struct A68t114  Attr;
struct A68t161  Value;
struct A68t121 * Usage;
};
typedef struct A68t160  A68_160 ;    /* STRUCT(INT,REF MODE26,MODE114,MODE161,REF MODE121)  */
struct A68t162{
A68_INT  Typeno;
A_PAD_INT(PAD_53)
struct A68t32  String;
};
typedef struct A68t162  A68_162 ;    /* STRUCT(INT,REF MODE32)  */
struct A68t163{
A68_INT  Cvoid;
A_PAD_INT(PAD_54)
};
typedef struct A68t163  A68_163 ;    /* STRUCT(INT)  */
struct A68t164{
A68_INT  Typeno;
A_PAD_INT(PAD_55)
A68_INT  Firstno;
A_PAD_INT(PAD_56)
A68_INT  Lastno;
A_PAD_INT(PAD_57)
};
typedef struct A68t164  A68_164 ;    /* STRUCT(INT,INT,INT)  */
struct A68t165{
struct A68t161  Alt;
struct A68t165 * Rest;
};
typedef struct A68t165  A68_165 ;    /* STRUCT(MODE161,REF MODE165)  */
struct A68t166{
A68_INT  Sort;
A_PAD_INT(PAD_58)
A68_INT  Nameno;
A_PAD_INT(PAD_59)
};
typedef struct A68t166  A68_166 ;    /* STRUCT(INT,INT)  */
struct A68t167{
struct A68t161  Sink;
struct A68t161  Source;
};
typedef struct A68t167  A68_167 ;    /* STRUCT(MODE161,MODE161)  */
struct A68t168{
A68_INT  Typeno;
A_PAD_INT(PAD_60)
A68_INT  Altno;
A_PAD_INT(PAD_61)
struct A68t161  Assoc;
};
typedef struct A68t168  A68_168 ;    /* STRUCT(INT,INT,MODE161)  */
struct A68t169{
struct A68t161  Extract;
A68_INT  Typeno;
A_PAD_INT(PAD_62)
A68_INT  Altno;
A_PAD_INT(PAD_63)
};
typedef struct A68t169  A68_169 ;    /* STRUCT(MODE161,INT,INT)  */
struct A68t170{
struct A68t161  Unit;
A68_INT  Fnno;
A_PAD_INT(PAD_64)
A68_INT  Nameno;
A_PAD_INT(PAD_65)
};
typedef struct A68t170  A68_170 ;    /* STRUCT(MODE161,INT,INT)  */
struct A68t171{
struct A68t161  Unit;
struct A68t123  Index;
};
typedef struct A68t171  A68_171 ;    /* STRUCT(MODE161,MODE123)  */
struct A68t172{
struct A68t161  Unit;
struct A68t138  Range;
};
typedef struct A68t172  A68_172 ;    /* STRUCT(MODE161,MODE138)  */
struct A68t173{
struct A68t161  Unit;
struct A68t161  Index;
};
typedef struct A68t173  A68_173 ;    /* STRUCT(MODE161,MODE161)  */
struct A68t174{
struct A68t161  Unit;
struct A68t161  Index;
struct A68t161  From;
};
typedef struct A68t174  A68_174 ;    /* STRUCT(MODE161,MODE161,MODE161)  */
struct A68t175{
struct A68t123  Size;
struct A68t161  Elem;
};
typedef struct A68t175  A68_175 ;    /* STRUCT(MODE123,MODE161)  */
struct A68t176{
struct A68t161  Elem;
struct A68t176 * Rest;
};
typedef struct A68t176  A68_176 ;    /* STRUCT(MODE161,REF MODE176)  */
struct A68t177{
A68_BOOL  String;
A_PAD_BOOL(PAD_66)
A68_INT  Sort;
A_PAD_INT(PAD_67)
struct A68t161  Left;
struct A68t161  Right;
};
typedef struct A68t177  A68_177 ;    /* STRUCT(BOOL,INT,MODE161,MODE161)  */
A_VECTOR(struct A68t204 ,A68t203);
typedef struct A68t203  A68_203 ;    /* VECTOR [] MODE204 */
struct A68t206{
struct A68t161  Tag;
};
typedef struct A68t206  A68_206 ;    /* STRUCT(MODE161)  */
struct A68t201{
A68_INT  Fnno;
A_PAD_INT(PAD_68)
struct A68t203  Macparams;
struct A68t114  Attr;
};
typedef struct A68t201  A68_201 ;    /* STRUCT(INT,REF MODE203,MODE114)  */
struct A68t205 { A68_INT mode; union {
struct A68t122  mode1;
struct A68t134  mode2;
struct A68t148  mode3;
struct A68t206  mode4;
struct A68t201  mode5;
} data; };
typedef struct A68t205  A68_205 ;    /* UNION(MODE122,MODE134,MODE148,MODE206,MODE201)  */
struct A68t204{
A68_INT  Sort;
A_PAD_INT(PAD_69)
struct A68t205  Param;
};
typedef struct A68t204  A68_204 ;    /* STRUCT(INT,MODE205)  */
struct A68t178{
struct A68t201  Inst;
struct A68t161  Right;
};
typedef struct A68t178  A68_178 ;    /* STRUCT(MODE201,MODE161)  */
struct A68t179{
struct A68t161  Left;
struct A68t201  Inst;
struct A68t161  Right;
};
typedef struct A68t179  A68_179 ;    /* STRUCT(MODE161,MODE201,MODE161)  */
struct A68t180{
struct A68t161  Input;
struct A68t221 * Choices;
};
typedef struct A68t180  A68_180 ;    /* STRUCT(MODE161,REF MODE221)  */
struct A68t181{
struct A68t123  Cond;
struct A68t161  True;
struct A68t161  False;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(MODE123,MODE161,MODE161)  */
struct A68t182{
struct A68t123  Repl;
struct A68t161  Body;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(MODE123,MODE161)  */
struct A68t183{
struct A68t209 * Body;
struct A68t161  Output;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(REF MODE209,MODE161)  */
struct A68t184{
struct A68t190 * Body;
struct A68t161  Output;
};
typedef struct A68t184  A68_184 ;    /* STRUCT(REF MODE190,MODE161)  */
struct A68t185{
struct A68t161  Unit;
struct A68t114  Attr;
};
typedef struct A68t185  A68_185 ;    /* STRUCT(MODE161,MODE114)  */
struct A68t186{
struct A68t161  Unit;
struct A68t125  Check;
};
typedef struct A68t186  A68_186 ;    /* STRUCT(MODE161,MODE125)  */
struct A68t187{
struct A68t161  Unit;
};
typedef struct A68t187  A68_187 ;    /* STRUCT(MODE161)  */
struct A68t188{
struct A68t123  Size;
struct A68t161  Char;
};
typedef struct A68t188  A68_188 ;    /* STRUCT(MODE123,MODE161)  */
struct A68t189{
A68_INT  Unull;
A_PAD_INT(PAD_70)
};
typedef struct A68t189  A68_189 ;    /* STRUCT(INT)  */
struct A68t192{
A68_INT  Fnno;
A_PAD_INT(PAD_71)
};
typedef struct A68t192  A68_192 ;    /* STRUCT(INT)  */
struct A68t191 { A68_INT mode; union {
struct A68t115  mode1;
struct A68t127  mode2;
struct A68t140  mode3;
struct A68t155  mode4;
struct A68t192  mode5;
struct A68t193 * mode6;
struct A68t194 * mode7;
struct A68t195 * mode8;
struct A68t196 * mode9;
struct A68t197 * mode10;
struct A68t198 * mode11;
struct A68t199 * mode12;
} data; };
typedef struct A68t191  A68_191 ;    /* UNION(MODE115,MODE127,MODE140,MODE155,MODE192,REF MODE193,REF MODE194,REF MODE195,REF MODE196,REF MODE197,REF MODE198,REF MODE199)  */
struct A68t190{
struct A68t191  Step;
struct A68t190 * Rest;
};
typedef struct A68t190  A68_190 ;    /* STRUCT(MODE191,REF MODE190)  */
struct A68t193{
struct A68t123  Cond;
struct A68t207 * Print;
};
typedef struct A68t193  A68_193 ;    /* STRUCT(MODE123,REF MODE207)  */
struct A68t194{
struct A68t123  Cond;
struct A68t207 * Fault;
};
typedef struct A68t194  A68_194 ;    /* STRUCT(MODE123,REF MODE207)  */
struct A68t195{
struct A68t202 * Letnames;
struct A68t161  Unit;
};
typedef struct A68t195  A68_195 ;    /* STRUCT(REF MODE202,MODE161)  */
struct A68t196{
struct A68t135 * Sizes;
struct A68t201  Inst;
struct A68t202 * Makenames;
};
typedef struct A68t196  A68_196 ;    /* STRUCT(REF MODE135,MODE201,REF MODE202)  */
struct A68t197{
struct A68t161  From;
struct A68t161  To;
};
typedef struct A68t197  A68_197 ;    /* STRUCT(MODE161,MODE161)  */
struct A68t198{
struct A68t135 * Repls;
struct A68t200 * Joins;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(REF MODE135,REF MODE200)  */
struct A68t199{
A68_INT  Stepnull;
A_PAD_INT(PAD_72)
};
typedef struct A68t199  A68_199 ;    /* STRUCT(INT)  */
struct A68t200{
struct A68t197  Join;
struct A68t200 * Rest;
};
typedef struct A68t200  A68_200 ;    /* STRUCT(MODE197,REF MODE200)  */
struct A68t202{
A68_INT  Nameno;
A_PAD_INT(PAD_73)
struct A68t202 * Rest;
};
typedef struct A68t202  A68_202 ;    /* STRUCT(INT,REF MODE202)  */
struct A68t208 { A68_INT mode; union {
A68_VC  mode1;
struct A68t134 * mode2;
} data; };
typedef struct A68t208  A68_208 ;    /* UNION(REF MODE26,REF MODE134)  */
struct A68t207{
struct A68t208  Item;
struct A68t207 * Rest;
};
typedef struct A68t207  A68_207 ;    /* STRUCT(MODE208,REF MODE207)  */
struct A68t210 { A68_INT mode; union {
struct A68t115  mode1;
struct A68t127  mode2;
struct A68t140  mode3;
struct A68t155  mode4;
struct A68t192  mode5;
struct A68t193 * mode6;
struct A68t194 * mode7;
struct A68t211 * mode8;
struct A68t212 * mode9;
struct A68t213 * mode10;
struct A68t214 * mode11;
struct A68t215 * mode12;
struct A68t216 * mode13;
struct A68t217 * mode14;
struct A68t218 * mode15;
struct A68t209 * mode16;
struct A68t219 * mode17;
} data; };
typedef struct A68t210  A68_210 ;    /* UNION(MODE115,MODE127,MODE140,MODE155,MODE192,REF MODE193,REF MODE194,REF MODE211,REF MODE212,REF MODE213,REF MODE214,REF MODE215,REF MODE216,REF MODE217,REF MODE218,REF MODE209,REF MODE219)  */
struct A68t209{
struct A68t210  Step;
struct A68t209 * Rest;
};
typedef struct A68t209  A68_209 ;    /* STRUCT(MODE210,REF MODE209)  */
struct A68t211{
struct A68t195  Seqlet;
};
typedef struct A68t211  A68_211 ;    /* STRUCT(MODE195)  */
struct A68t212{
struct A68t195  Seqvar;
};
typedef struct A68t212  A68_212 ;    /* STRUCT(MODE195)  */
struct A68t213{
struct A68t202 * Pvarnames;
struct A68t161  Init;
};
typedef struct A68t213  A68_213 ;    /* STRUCT(REF MODE202,MODE161)  */
struct A68t214{
struct A68t161  To;
struct A68t161  From;
};
typedef struct A68t214  A68_214 ;    /* STRUCT(MODE161,MODE161)  */
struct A68t215{
struct A68t161  Input;
struct A68t220 * Choices;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(MODE161,REF MODE220)  */
struct A68t216{
struct A68t123  Cond;
struct A68t210  True;
struct A68t210  False;
};
typedef struct A68t216  A68_216 ;    /* STRUCT(MODE123,MODE210,MODE210)  */
struct A68t217{
struct A68t123  Repl;
struct A68t210  Body;
};
typedef struct A68t217  A68_217 ;    /* STRUCT(MODE123,MODE210)  */
struct A68t218{
A68_INT  Seqnull;
A_PAD_INT(PAD_74)
};
typedef struct A68t218  A68_218 ;    /* STRUCT(INT)  */
struct A68t219{
struct A68t123  Size;
struct A68t210  Elem;
};
typedef struct A68t219  A68_219 ;    /* STRUCT(MODE123,MODE210)  */
struct A68t220{
A68_BOOL  Check;
A_PAD_BOOL(PAD_75)
A68_INT  Sort;
A_PAD_INT(PAD_76)
struct A68t161  Test;
struct A68t210  Output;
struct A68t220 * Rest;
};
typedef struct A68t220  A68_220 ;    /* STRUCT(BOOL,INT,MODE161,MODE210,REF MODE220)  */
struct A68t221{
A68_BOOL  Check;
A_PAD_BOOL(PAD_77)
A68_INT  Sort;
A_PAD_INT(PAD_78)
struct A68t161  Test;
struct A68t161  Output;
struct A68t221 * Rest;
};
typedef struct A68t221  A68_221 ;    /* STRUCT(BOOL,INT,MODE161,MODE161,REF MODE221)  */
struct A68t222 { A68_INT mode; union {
struct A68t115  mode1;
struct A68t127  mode2;
struct A68t140  mode3;
struct A68t155  mode4;
struct A68t192  mode5;
} data; };
typedef struct A68t222  A68_222 ;    /* UNION(MODE115,MODE127,MODE140,MODE155,MODE192)  */
struct A68t223{
A68_BOOL  Biop;
A_PAD_BOOL(PAD_79)
A68_VC  Name;
struct A68t203  Macparams;
};
typedef struct A68t223  A68_223 ;    /* STRUCT(BOOL,REF MODE26,REF MODE203)  */
struct A68t224{
struct A68t123  Output;
};
typedef struct A68t224  A68_224 ;    /* STRUCT(MODE123)  */
struct A68t225{
A68_INT  Reform;
A_PAD_INT(PAD_80)
};
typedef struct A68t225  A68_225 ;    /* STRUCT(INT)  */
struct A68t226{
A68_VC  Name;
A68_INT  Contextno;
A_PAD_INT(PAD_81)
struct A68t111  Ctname;
};
typedef struct A68t226  A68_226 ;    /* STRUCT(REF MODE26,INT,MODE111)  */
struct A68t227{
A68_INT  Sort;
A_PAD_INT(PAD_82)
struct A68t161  Init;
struct A68t123  Ambigtime;
struct A68t161  Ambig;
struct A68t123  Delaytime;
};
typedef struct A68t227  A68_227 ;    /* STRUCT(INT,MODE161,MODE123,MODE161,MODE123)  */
struct A68t228{
struct A68t161  Init;
struct A68t123  Delaytime;
};
typedef struct A68t228  A68_228 ;    /* STRUCT(MODE161,MODE123)  */
struct A68t229{
struct A68t161  Init;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(MODE161)  */
struct A68t230{
A68_INT  Sort;
A_PAD_INT(PAD_83)
struct A68t123  Interval;
struct A68t161  Init;
struct A68t123  Skew;
};
typedef struct A68t230  A68_230 ;    /* STRUCT(INT,MODE123,MODE161,MODE123)  */
struct A68t231{
A68_BOOL  Faster;
A_PAD_BOOL(PAD_84)
A68_INT  Sort;
A_PAD_INT(PAD_85)
struct A68t201  Inst;
struct A68t123  Scale;
struct A68t161  Init;
struct A68t123  Skew;
};
typedef struct A68t231  A68_231 ;    /* STRUCT(BOOL,INT,MODE201,MODE123,MODE161,MODE123)  */
struct A68t233 { A68_INT mode; union {
struct A68t206 * mode1;
struct A68t223 * mode2;
struct A68t224 * mode3;
struct A68t225 * mode4;
struct A68t226 * mode5;
struct A68t227 * mode6;
struct A68t228 * mode7;
struct A68t229 * mode8;
struct A68t230 * mode9;
struct A68t231 * mode10;
struct A68t232 * mode11;
struct A68t234 * mode12;
} data; };
typedef struct A68t233  A68_233 ;    /* UNION(REF MODE206,REF MODE223,REF MODE224,REF MODE225,REF MODE226,REF MODE227,REF MODE228,REF MODE229,REF MODE230,REF MODE231,REF MODE232,REF MODE234)  */
struct A68t232{
struct A68t113 * Joincheck;
A68_BOOL  Check;
A_PAD_BOOL(PAD_86)
struct A68t233  Fnbody;
};
typedef struct A68t232  A68_232 ;    /* STRUCT(REF MODE113,BOOL,MODE233)  */
struct A68t234{
A68_INT  Bodynull;
A_PAD_INT(PAD_87)
};
typedef struct A68t234  A68_234 ;    /* STRUCT(INT)  */
struct A68t235{
A68_INT  Sort;
A_PAD_INT(PAD_88)
struct A68t222  Spec;
};
typedef struct A68t235  A68_235 ;    /* STRUCT(INT,MODE222)  */
struct A68t236{
A68_VC  Name;
struct A68t139  Type;
struct A68t114  Attr;
};
typedef struct A68t236  A68_236 ;    /* STRUCT(REF MODE26,MODE139,MODE114)  */
A_VECTOR(struct A68t235 ,A68t238);
typedef struct A68t238  A68_238 ;    /* VECTOR [] MODE235 */
A_VECTOR(struct A68t236 ,A68t239);
typedef struct A68t239  A68_239 ;    /* VECTOR [] MODE236 */
struct A68t237{
A68_INT  Sort;
A_PAD_INT(PAD_89)
A68_BOOL  Macro;
A_PAD_BOOL(PAD_90)
A68_VC  Fnname;
struct A68t238  Macspecs;
struct A68t114  Attr;
struct A68t202 * Inputs;
struct A68t202 * Outputs;
struct A68t239  Nametypes;
struct A68t233  Fnbody;
struct A68t121 * Usage;
};
typedef struct A68t237  A68_237 ;    /* STRUCT(INT,BOOL,REF MODE26,REF MODE238,MODE114,REF MODE202,REF MODE202,REF MODE239,MODE233,REF MODE121)  */
A_VECTOR(struct A68t120 *,A68t241);
typedef struct A68t241  A68_241 ;    /* VECTOR [] REF MODE120 */
A_VECTOR(struct A68t136 *,A68t242);
typedef struct A68t242  A68_242 ;    /* VECTOR [] REF MODE136 */
A_VECTOR(struct A68t154 *,A68t243);
typedef struct A68t243  A68_243 ;    /* VECTOR [] REF MODE154 */
A_VECTOR(struct A68t160 *,A68t244);
typedef struct A68t244  A68_244 ;    /* VECTOR [] REF MODE160 */
A_VECTOR(struct A68t237 *,A68t245);
typedef struct A68t245  A68_245 ;    /* VECTOR [] REF MODE237 */
struct A68t240{
struct A68t241  Attrs;
struct A68t242  Ints;
struct A68t243  Types;
struct A68t244  Consts;
struct A68t245  Fns;
};
typedef struct A68t240  A68_240 ;    /* STRUCT(REF MODE241,REF MODE242,REF MODE243,REF MODE244,REF MODE245)  */
struct A68t246{
A68_INT  Closureno;
A_PAD_INT(PAD_91)
A68_INT  Sort;
A_PAD_INT(PAD_92)
struct A68t240 * Environ;
};
typedef struct A68t246  A68_246 ;    /* STRUCT(INT,INT,REF MODE240)  */
struct A68t247{
struct A68t246  Outer;
struct A68t247 * Rest;
};
typedef struct A68t247  A68_247 ;    /* STRUCT(MODE246,REF MODE247)  */
A_VECTOR(struct A68t247 ,A68t249);
typedef struct A68t249  A68_249 ;    /* VECTOR [] MODE247 */
struct A68t248{
struct A68t249  Outers;
struct A68t248 * Rest;
};
typedef struct A68t248  A68_248 ;    /* STRUCT(REF MODE249,REF MODE248)  */
struct A68t250{
A68_INT  Max_closureno;
A_PAD_INT(PAD_93)
struct A68t247 * Outers;
struct A68t247 * Freelist;
struct A68t248 * Outerslist;
};
typedef struct A68t250  A68_250 ;    /* STRUCT(INT,REF MODE247,REF MODE247,REF MODE248)  */
A_VECTOR(struct A68t247 *,A68t251);
typedef struct A68t251  A68_251 ;    /* VECTOR [] REF MODE247 */

A_PROCEDURE(struct A68t126 *,A68t252,(A68_INT ),(A68_INT ,void *));
typedef struct A68t252  A68_252 ;    /* PROC(INT) REF MODE126 */

A_PROCEDURE(struct A68t127 *,A68t253,(A68_INT ),(A68_INT ,void *));
typedef struct A68t253  A68_253 ;    /* PROC(INT) REF MODE127 */

A_PROCEDURE(struct A68t131 *,A68t254,(struct A68t123 ),(struct A68t123 ,void *));
typedef struct A68t254  A68_254 ;    /* PROC(MODE123) REF MODE131 */

A_PROCEDURE(struct A68t134 *,A68t255,(struct A68t123 ),(struct A68t123 ,void *));
typedef struct A68t255  A68_255 ;    /* PROC(MODE123) REF MODE134 */

A_PROCEDURE(struct A68t140 *,A68t256,(A68_INT ),(A68_INT ,void *));
typedef struct A68t256  A68_256 ;    /* PROC(INT) REF MODE140 */

A_PROCEDURE(struct A68t144 *,A68t257,(struct A68t139 ),(struct A68t139 ,void *));
typedef struct A68t257  A68_257 ;    /* PROC(MODE139) REF MODE144 */

A_PROCEDURE(struct A68t148 *,A68t258,(struct A68t139 ),(struct A68t139 ,void *));
typedef struct A68t258  A68_258 ;    /* PROC(MODE139) REF MODE148 */

A_PROCEDURE(struct A68t155 *,A68t259,(A68_INT ),(A68_INT ,void *));
typedef struct A68t259  A68_259 ;    /* PROC(INT) REF MODE155 */

A_PROCEDURE(struct A68t159 *,A68t260,(struct A68t139 ),(struct A68t139 ,void *));
typedef struct A68t260  A68_260 ;    /* PROC(MODE139) REF MODE159 */

A_PROCEDURE(struct A68t211 *,A68t261,(struct A68t195 ),(struct A68t195 ,void *));
typedef struct A68t261  A68_261 ;    /* PROC(MODE195) REF MODE211 */

A_PROCEDURE(struct A68t212 *,A68t262,(struct A68t195 ),(struct A68t195 ,void *));
typedef struct A68t262  A68_262 ;    /* PROC(MODE195) REF MODE212 */

A_PROCEDURE(struct A68t187 *,A68t263,(struct A68t161 ),(struct A68t161 ,void *));
typedef struct A68t263  A68_263 ;    /* PROC(MODE161) REF MODE187 */

A_PROCEDURE(struct A68t206 *,A68t264,(struct A68t161 ),(struct A68t161 ,void *));
typedef struct A68t264  A68_264 ;    /* PROC(MODE161) REF MODE206 */

A_PROCEDURE(struct A68t192 *,A68t265,(A68_INT ),(A68_INT ,void *));
typedef struct A68t265  A68_265 ;    /* PROC(INT) REF MODE192 */

A_PROCEDURE(struct A68t224 *,A68t266,(struct A68t123 ),(struct A68t123 ,void *));
typedef struct A68t266  A68_266 ;    /* PROC(MODE123) REF MODE224 */

A_PROCEDURE(struct A68t229 *,A68t267,(struct A68t161 ),(struct A68t161 ,void *));
typedef struct A68t267  A68_267 ;    /* PROC(MODE161) REF MODE229 */

A_PROCEDURE(struct A68t132 *,A68t268,(A68_INT ),(A68_INT ,void *));
typedef struct A68t268  A68_268 ;    /* PROC(INT) REF MODE132 */

A_PROCEDURE(struct A68t115 *,A68t269,(A68_INT ),(A68_INT ,void *));
typedef struct A68t269  A68_269 ;    /* PROC(INT) REF MODE115 */

A_PROCEDURE(struct A68t122 *,A68t270,(struct A68t114 ),(struct A68t114 ,void *));
typedef struct A68t270  A68_270 ;    /* PROC(MODE114) REF MODE122 */

A_PROCEDURE(struct A68t118 *,A68t271,(struct A68t114 ),(struct A68t114 ,void *));
typedef struct A68t271  A68_271 ;    /* PROC(MODE114) REF MODE118 */
A_VECTOR(struct A68t112 *,A68t272);
typedef struct A68t272  A68_272 ;    /* VECTOR [] REF MODE112 */
struct A68t273{
struct A68t114  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_94)
};
typedef struct A68t273  A68_273 ;    /* STRUCT(MODE114,BOOL)  */
struct A68t274{
struct A68t117 * A;
A68_BOOL  C;
A_PAD_BOOL(PAD_95)
};
typedef struct A68t274  A68_274 ;    /* STRUCT(REF MODE117,BOOL)  */
struct A68t275{
struct A68t120 * A;
A68_BOOL  C;
A_PAD_BOOL(PAD_96)
};
typedef struct A68t275  A68_275 ;    /* STRUCT(REF MODE120,BOOL)  */
struct A68t276{
struct A68t123  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_97)
};
typedef struct A68t276  A68_276 ;    /* STRUCT(MODE123,BOOL)  */
struct A68t277{
struct A68t135 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_98)
};
typedef struct A68t277  A68_277 ;    /* STRUCT(REF MODE135,BOOL)  */
struct A68t278{
struct A68t136 * I;
A68_BOOL  C;
A_PAD_BOOL(PAD_99)
};
typedef struct A68t278  A68_278 ;    /* STRUCT(REF MODE136,BOOL)  */
struct A68t279{
struct A68t138  R;
A68_BOOL  C;
A_PAD_BOOL(PAD_100)
};
typedef struct A68t279  A68_279 ;    /* STRUCT(MODE138,BOOL)  */
struct A68t280{
struct A68t137  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_101)
};
typedef struct A68t280  A68_280 ;    /* STRUCT(MODE137,BOOL)  */
struct A68t281{
struct A68t142 * T;
A68_BOOL  C;
A_PAD_BOOL(PAD_102)
};
typedef struct A68t281  A68_281 ;    /* STRUCT(REF MODE142,BOOL)  */
struct A68t282{
struct A68t139  T;
A68_BOOL  C;
A_PAD_BOOL(PAD_103)
};
typedef struct A68t282  A68_282 ;    /* STRUCT(MODE139,BOOL)  */
struct A68t283{
struct A68t150  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_104)
};
typedef struct A68t283  A68_283 ;    /* STRUCT(MODE150,BOOL)  */
struct A68t284{
struct A68t153  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_105)
};
typedef struct A68t284  A68_284 ;    /* STRUCT(REF MODE153,BOOL)  */
struct A68t285{
struct A68t152  T;
A68_BOOL  C;
A_PAD_BOOL(PAD_106)
};
typedef struct A68t285  A68_285 ;    /* STRUCT(MODE152,BOOL)  */
struct A68t286{
struct A68t154 * T;
A68_BOOL  C;
A_PAD_BOOL(PAD_107)
};
typedef struct A68t286  A68_286 ;    /* STRUCT(REF MODE154,BOOL)  */
struct A68t287{
struct A68t160 * Co;
A68_BOOL  C;
A_PAD_BOOL(PAD_108)
};
typedef struct A68t287  A68_287 ;    /* STRUCT(REF MODE160,BOOL)  */
struct A68t288{
struct A68t165 * Ua;
A68_BOOL  C;
A_PAD_BOOL(PAD_109)
};
typedef struct A68t288  A68_288 ;    /* STRUCT(REF MODE165,BOOL)  */
struct A68t289{
struct A68t176 * U;
A68_BOOL  C;
A_PAD_BOOL(PAD_110)
};
typedef struct A68t289  A68_289 ;    /* STRUCT(REF MODE176,BOOL)  */
struct A68t290{
struct A68t221 * U;
A68_BOOL  C;
A_PAD_BOOL(PAD_111)
};
typedef struct A68t290  A68_290 ;    /* STRUCT(REF MODE221,BOOL)  */
struct A68t291{
struct A68t161  U;
A68_BOOL  C;
A_PAD_BOOL(PAD_112)
};
typedef struct A68t291  A68_291 ;    /* STRUCT(MODE161,BOOL)  */
struct A68t292{
struct A68t205  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_113)
};
typedef struct A68t292  A68_292 ;    /* STRUCT(MODE205,BOOL)  */
struct A68t293{
struct A68t203  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_114)
};
typedef struct A68t293  A68_293 ;    /* STRUCT(REF MODE203,BOOL)  */
struct A68t294{
struct A68t201  I;
A68_BOOL  C;
A_PAD_BOOL(PAD_115)
};
typedef struct A68t294  A68_294 ;    /* STRUCT(MODE201,BOOL)  */
struct A68t295{
struct A68t222  D;
A68_BOOL  C;
A_PAD_BOOL(PAD_116)
};
typedef struct A68t295  A68_295 ;    /* STRUCT(MODE222,BOOL)  */
struct A68t296{
struct A68t207 * P;
A68_BOOL  C;
A_PAD_BOOL(PAD_117)
};
typedef struct A68t296  A68_296 ;    /* STRUCT(REF MODE207,BOOL)  */
struct A68t297{
struct A68t193 * P;
A68_BOOL  C;
A_PAD_BOOL(PAD_118)
};
typedef struct A68t297  A68_297 ;    /* STRUCT(REF MODE193,BOOL)  */
struct A68t298{
struct A68t194 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_119)
};
typedef struct A68t298  A68_298 ;    /* STRUCT(REF MODE194,BOOL)  */
struct A68t299{
struct A68t202 * N;
A68_BOOL  C;
A_PAD_BOOL(PAD_120)
};
typedef struct A68t299  A68_299 ;    /* STRUCT(REF MODE202,BOOL)  */
struct A68t300{
struct A68t195 * L;
A68_BOOL  C;
A_PAD_BOOL(PAD_121)
};
typedef struct A68t300  A68_300 ;    /* STRUCT(REF MODE195,BOOL)  */
struct A68t301{
struct A68t220 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_122)
};
typedef struct A68t301  A68_301 ;    /* STRUCT(REF MODE220,BOOL)  */
struct A68t302{
struct A68t210  S;
A68_BOOL  C;
A_PAD_BOOL(PAD_123)
};
typedef struct A68t302  A68_302 ;    /* STRUCT(MODE210,BOOL)  */
struct A68t303{
struct A68t209 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_124)
};
typedef struct A68t303  A68_303 ;    /* STRUCT(REF MODE209,BOOL)  */
struct A68t304{
struct A68t196 * M;
A68_BOOL  C;
A_PAD_BOOL(PAD_125)
};
typedef struct A68t304  A68_304 ;    /* STRUCT(REF MODE196,BOOL)  */
struct A68t305{
struct A68t197 * J;
A68_BOOL  C;
A_PAD_BOOL(PAD_126)
};
typedef struct A68t305  A68_305 ;    /* STRUCT(REF MODE197,BOOL)  */
struct A68t306{
struct A68t200 * J;
A68_BOOL  C;
A_PAD_BOOL(PAD_127)
};
typedef struct A68t306  A68_306 ;    /* STRUCT(REF MODE200,BOOL)  */
struct A68t307{
struct A68t191  S;
A68_BOOL  C;
A_PAD_BOOL(PAD_128)
};
typedef struct A68t307  A68_307 ;    /* STRUCT(MODE191,BOOL)  */
struct A68t308{
struct A68t190 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_129)
};
typedef struct A68t308  A68_308 ;    /* STRUCT(REF MODE190,BOOL)  */
struct A68t309{
struct A68t233  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_130)
};
typedef struct A68t309  A68_309 ;    /* STRUCT(MODE233,BOOL)  */
struct A68t310{
struct A68t235  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_131)
};
typedef struct A68t310  A68_310 ;    /* STRUCT(MODE235,BOOL)  */
struct A68t311{
struct A68t238  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_132)
};
typedef struct A68t311  A68_311 ;    /* STRUCT(REF MODE238,BOOL)  */
struct A68t312{
struct A68t237 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_133)
};
typedef struct A68t312  A68_312 ;    /* STRUCT(REF MODE237,BOOL)  */
struct A68t313{
struct A68t246  O;
A68_BOOL  C;
A_PAD_BOOL(PAD_134)
};
typedef struct A68t313  A68_313 ;    /* STRUCT(MODE246,BOOL)  */
struct A68t314{
struct A68t250 * Cl;
A68_BOOL  C;
A_PAD_BOOL(PAD_135)
};
typedef struct A68t314  A68_314 ;    /* STRUCT(REF MODE250,BOOL)  */
struct A68t315 ;

A_PROCEDURE(A68_VOID ,A68t316,(struct A68t114 ,struct A68t315 *,struct A68t273 *),(struct A68t114 ,struct A68t315 *,struct A68t273 *,void *));
typedef struct A68t316  A68_316 ;    /* PROC(MODE114,REF MODE315) MODE273 */

A_PROCEDURE(A68_VOID ,A68t317,(struct A68t117 *,struct A68t315 *,struct A68t274 *),(struct A68t117 *,struct A68t315 *,struct A68t274 *,void *));
typedef struct A68t317  A68_317 ;    /* PROC(REF MODE117,REF MODE315) MODE274 */

A_PROCEDURE(A68_VOID ,A68t318,(struct A68t120 *,struct A68t315 *,struct A68t275 *),(struct A68t120 *,struct A68t315 *,struct A68t275 *,void *));
typedef struct A68t318  A68_318 ;    /* PROC(REF MODE120,REF MODE315) MODE275 */

A_PROCEDURE(A68_VOID ,A68t319,(struct A68t123 ,struct A68t315 *,struct A68t276 *),(struct A68t123 ,struct A68t315 *,struct A68t276 *,void *));
typedef struct A68t319  A68_319 ;    /* PROC(MODE123,REF MODE315) MODE276 */

A_PROCEDURE(A68_VOID ,A68t320,(struct A68t135 *,struct A68t315 *,struct A68t277 *),(struct A68t135 *,struct A68t315 *,struct A68t277 *,void *));
typedef struct A68t320  A68_320 ;    /* PROC(REF MODE135,REF MODE315) MODE277 */

A_PROCEDURE(A68_VOID ,A68t321,(struct A68t136 *,struct A68t315 *,struct A68t278 *),(struct A68t136 *,struct A68t315 *,struct A68t278 *,void *));
typedef struct A68t321  A68_321 ;    /* PROC(REF MODE136,REF MODE315) MODE278 */

A_PROCEDURE(A68_VOID ,A68t322,(struct A68t138 ,struct A68t315 *,struct A68t279 *),(struct A68t138 ,struct A68t315 *,struct A68t279 *,void *));
typedef struct A68t322  A68_322 ;    /* PROC(MODE138,REF MODE315) MODE279 */

A_PROCEDURE(A68_VOID ,A68t323,(struct A68t137 ,struct A68t315 *,struct A68t280 *),(struct A68t137 ,struct A68t315 *,struct A68t280 *,void *));
typedef struct A68t323  A68_323 ;    /* PROC(MODE137,REF MODE315) MODE280 */

A_PROCEDURE(A68_VOID ,A68t324,(struct A68t142 *,struct A68t315 *,struct A68t281 *),(struct A68t142 *,struct A68t315 *,struct A68t281 *,void *));
typedef struct A68t324  A68_324 ;    /* PROC(REF MODE142,REF MODE315) MODE281 */

A_PROCEDURE(A68_VOID ,A68t325,(struct A68t139 ,struct A68t315 *,struct A68t282 *),(struct A68t139 ,struct A68t315 *,struct A68t282 *,void *));
typedef struct A68t325  A68_325 ;    /* PROC(MODE139,REF MODE315) MODE282 */

A_PROCEDURE(A68_VOID ,A68t326,(struct A68t150 ,struct A68t315 *,struct A68t283 *),(struct A68t150 ,struct A68t315 *,struct A68t283 *,void *));
typedef struct A68t326  A68_326 ;    /* PROC(MODE150,REF MODE315) MODE283 */

A_PROCEDURE(A68_VOID ,A68t327,(struct A68t153 ,struct A68t315 *,struct A68t284 *),(struct A68t153 ,struct A68t315 *,struct A68t284 *,void *));
typedef struct A68t327  A68_327 ;    /* PROC(REF MODE153,REF MODE315) MODE284 */

A_PROCEDURE(A68_VOID ,A68t328,(struct A68t152 ,struct A68t315 *,struct A68t285 *),(struct A68t152 ,struct A68t315 *,struct A68t285 *,void *));
typedef struct A68t328  A68_328 ;    /* PROC(MODE152,REF MODE315) MODE285 */

A_PROCEDURE(A68_VOID ,A68t329,(struct A68t154 *,struct A68t315 *,struct A68t286 *),(struct A68t154 *,struct A68t315 *,struct A68t286 *,void *));
typedef struct A68t329  A68_329 ;    /* PROC(REF MODE154,REF MODE315) MODE286 */

A_PROCEDURE(A68_VOID ,A68t330,(struct A68t160 *,struct A68t315 *,struct A68t287 *),(struct A68t160 *,struct A68t315 *,struct A68t287 *,void *));
typedef struct A68t330  A68_330 ;    /* PROC(REF MODE160,REF MODE315) MODE287 */

A_PROCEDURE(A68_VOID ,A68t331,(struct A68t165 *,struct A68t315 *,struct A68t288 *),(struct A68t165 *,struct A68t315 *,struct A68t288 *,void *));
typedef struct A68t331  A68_331 ;    /* PROC(REF MODE165,REF MODE315) MODE288 */

A_PROCEDURE(A68_VOID ,A68t332,(struct A68t176 *,struct A68t315 *,struct A68t289 *),(struct A68t176 *,struct A68t315 *,struct A68t289 *,void *));
typedef struct A68t332  A68_332 ;    /* PROC(REF MODE176,REF MODE315) MODE289 */

A_PROCEDURE(A68_VOID ,A68t333,(struct A68t221 *,struct A68t315 *,struct A68t290 *),(struct A68t221 *,struct A68t315 *,struct A68t290 *,void *));
typedef struct A68t333  A68_333 ;    /* PROC(REF MODE221,REF MODE315) MODE290 */

A_PROCEDURE(A68_VOID ,A68t334,(struct A68t161 ,struct A68t315 *,struct A68t291 *),(struct A68t161 ,struct A68t315 *,struct A68t291 *,void *));
typedef struct A68t334  A68_334 ;    /* PROC(MODE161,REF MODE315) MODE291 */

A_PROCEDURE(A68_VOID ,A68t335,(struct A68t205 ,struct A68t315 *,struct A68t292 *),(struct A68t205 ,struct A68t315 *,struct A68t292 *,void *));
typedef struct A68t335  A68_335 ;    /* PROC(MODE205,REF MODE315) MODE292 */

A_PROCEDURE(A68_VOID ,A68t336,(struct A68t203 ,struct A68t315 *,struct A68t293 *),(struct A68t203 ,struct A68t315 *,struct A68t293 *,void *));
typedef struct A68t336  A68_336 ;    /* PROC(REF MODE203,REF MODE315) MODE293 */

A_PROCEDURE(A68_VOID ,A68t337,(struct A68t201 ,struct A68t315 *,struct A68t294 *),(struct A68t201 ,struct A68t315 *,struct A68t294 *,void *));
typedef struct A68t337  A68_337 ;    /* PROC(MODE201,REF MODE315) MODE294 */

A_PROCEDURE(A68_VOID ,A68t338,(struct A68t222 ,struct A68t315 *,struct A68t295 *),(struct A68t222 ,struct A68t315 *,struct A68t295 *,void *));
typedef struct A68t338  A68_338 ;    /* PROC(MODE222,REF MODE315) MODE295 */

A_PROCEDURE(A68_VOID ,A68t339,(struct A68t207 *,struct A68t315 *,struct A68t296 *),(struct A68t207 *,struct A68t315 *,struct A68t296 *,void *));
typedef struct A68t339  A68_339 ;    /* PROC(REF MODE207,REF MODE315) MODE296 */

A_PROCEDURE(A68_VOID ,A68t340,(struct A68t193 *,struct A68t315 *,struct A68t297 *),(struct A68t193 *,struct A68t315 *,struct A68t297 *,void *));
typedef struct A68t340  A68_340 ;    /* PROC(REF MODE193,REF MODE315) MODE297 */

A_PROCEDURE(A68_VOID ,A68t341,(struct A68t194 *,struct A68t315 *,struct A68t298 *),(struct A68t194 *,struct A68t315 *,struct A68t298 *,void *));
typedef struct A68t341  A68_341 ;    /* PROC(REF MODE194,REF MODE315) MODE298 */

A_PROCEDURE(A68_VOID ,A68t342,(struct A68t202 *,struct A68t315 *,struct A68t299 *),(struct A68t202 *,struct A68t315 *,struct A68t299 *,void *));
typedef struct A68t342  A68_342 ;    /* PROC(REF MODE202,REF MODE315) MODE299 */

A_PROCEDURE(A68_VOID ,A68t343,(struct A68t195 *,struct A68t315 *,struct A68t300 *),(struct A68t195 *,struct A68t315 *,struct A68t300 *,void *));
typedef struct A68t343  A68_343 ;    /* PROC(REF MODE195,REF MODE315) MODE300 */

A_PROCEDURE(A68_VOID ,A68t344,(struct A68t220 *,struct A68t315 *,struct A68t301 *),(struct A68t220 *,struct A68t315 *,struct A68t301 *,void *));
typedef struct A68t344  A68_344 ;    /* PROC(REF MODE220,REF MODE315) MODE301 */

A_PROCEDURE(A68_VOID ,A68t345,(struct A68t210 ,struct A68t315 *,struct A68t302 *),(struct A68t210 ,struct A68t315 *,struct A68t302 *,void *));
typedef struct A68t345  A68_345 ;    /* PROC(MODE210,REF MODE315) MODE302 */

A_PROCEDURE(A68_VOID ,A68t346,(struct A68t209 *,struct A68t315 *,struct A68t303 *),(struct A68t209 *,struct A68t315 *,struct A68t303 *,void *));
typedef struct A68t346  A68_346 ;    /* PROC(REF MODE209,REF MODE315) MODE303 */

A_PROCEDURE(A68_VOID ,A68t347,(struct A68t196 *,struct A68t315 *,struct A68t304 *),(struct A68t196 *,struct A68t315 *,struct A68t304 *,void *));
typedef struct A68t347  A68_347 ;    /* PROC(REF MODE196,REF MODE315) MODE304 */

A_PROCEDURE(A68_VOID ,A68t348,(struct A68t197 *,struct A68t315 *,struct A68t305 *),(struct A68t197 *,struct A68t315 *,struct A68t305 *,void *));
typedef struct A68t348  A68_348 ;    /* PROC(REF MODE197,REF MODE315) MODE305 */

A_PROCEDURE(A68_VOID ,A68t349,(struct A68t200 *,struct A68t315 *,struct A68t306 *),(struct A68t200 *,struct A68t315 *,struct A68t306 *,void *));
typedef struct A68t349  A68_349 ;    /* PROC(REF MODE200,REF MODE315) MODE306 */

A_PROCEDURE(A68_VOID ,A68t350,(struct A68t191 ,struct A68t315 *,struct A68t307 *),(struct A68t191 ,struct A68t315 *,struct A68t307 *,void *));
typedef struct A68t350  A68_350 ;    /* PROC(MODE191,REF MODE315) MODE307 */

A_PROCEDURE(A68_VOID ,A68t351,(struct A68t190 *,struct A68t315 *,struct A68t308 *),(struct A68t190 *,struct A68t315 *,struct A68t308 *,void *));
typedef struct A68t351  A68_351 ;    /* PROC(REF MODE190,REF MODE315) MODE308 */

A_PROCEDURE(A68_VOID ,A68t352,(struct A68t233 ,struct A68t315 *,struct A68t309 *),(struct A68t233 ,struct A68t315 *,struct A68t309 *,void *));
typedef struct A68t352  A68_352 ;    /* PROC(MODE233,REF MODE315) MODE309 */

A_PROCEDURE(A68_VOID ,A68t353,(struct A68t235 ,struct A68t315 *,struct A68t310 *),(struct A68t235 ,struct A68t315 *,struct A68t310 *,void *));
typedef struct A68t353  A68_353 ;    /* PROC(MODE235,REF MODE315) MODE310 */

A_PROCEDURE(A68_VOID ,A68t354,(struct A68t238 ,struct A68t315 *,struct A68t311 *),(struct A68t238 ,struct A68t315 *,struct A68t311 *,void *));
typedef struct A68t354  A68_354 ;    /* PROC(REF MODE238,REF MODE315) MODE311 */

A_PROCEDURE(A68_VOID ,A68t355,(struct A68t237 *,struct A68t315 *,struct A68t312 *),(struct A68t237 *,struct A68t315 *,struct A68t312 *,void *));
typedef struct A68t355  A68_355 ;    /* PROC(REF MODE237,REF MODE315) MODE312 */

A_PROCEDURE(A68_VOID ,A68t356,(struct A68t246 ,struct A68t315 *,struct A68t313 *),(struct A68t246 ,struct A68t315 *,struct A68t313 *,void *));
typedef struct A68t356  A68_356 ;    /* PROC(MODE246,REF MODE315) MODE313 */

A_PROCEDURE(A68_VOID ,A68t357,(struct A68t250 *,struct A68t315 *,struct A68t97 ,struct A68t314 *),(struct A68t250 *,struct A68t315 *,struct A68t97 ,struct A68t314 *,void *));
typedef struct A68t357  A68_357 ;    /* PROC(REF MODE250,REF MODE315,MODE97) MODE314 */
struct A68t315{
struct A68t316  Attr;
struct A68t317  Attrstr;
struct A68t318  Attrdec;
struct A68t319  Formula;
struct A68t320  Formulas;
struct A68t321  Intdec;
struct A68t322  Range;
struct A68t323  Formularange;
struct A68t324  Tstr;
struct A68t325  Type;
struct A68t326  Alternative;
struct A68t327  Alternatives;
struct A68t328  Typebody;
struct A68t329  Typedec;
struct A68t330  Constdec;
struct A68t331  Ualts;
struct A68t332  Ustr;
struct A68t333  Uchoices;
struct A68t334  Unit;
struct A68t335  Mparam;
struct A68t336  Macparams;
struct A68t337  Instance;
struct A68t338  Declaration;
struct A68t339  Printitems;
struct A68t340  Print;
struct A68t341  Fault;
struct A68t342  Names;
struct A68t343  Let;
struct A68t344  Seqchoices;
struct A68t345  Seqstep;
struct A68t346  Sequence;
struct A68t347  Make;
struct A68t348  Join;
struct A68t349  Joins;
struct A68t350  Step;
struct A68t351  Series;
struct A68t352  Fnbody;
struct A68t353  Macspec;
struct A68t354  Macspecs;
struct A68t355  Fndec;
struct A68t356  Outer;
struct A68t357  Closure;
struct A68t315 * Rest;
};
typedef struct A68t315  A68_315 ;    /* STRUCT(MODE316,MODE317,MODE318,MODE319,MODE320,MODE321,MODE322,MODE323,MODE324,MODE325,MODE326,MODE327,MODE328,MODE329,MODE330,MODE331,MODE332,MODE333,MODE334,MODE335,MODE336,MODE337,MODE338,MODE339,MODE340,MODE341,MODE342,MODE343,MODE344,MODE345,MODE346,MODE347,MODE348,MODE349,MODE350,MODE351,MODE352,MODE353,MODE354,MODE355,MODE356,MODE357,REF MODE315)  */
struct A68t359 ;

A_PROCEDURE(struct A68t315 *,A68t358,(struct A68t315 *,struct A68t359 ),(struct A68t315 *,struct A68t359 ,void *));
typedef struct A68t358  A68_358 ;    /* PROC(REF MODE315,MODE359) REF MODE315 */
A_VECTOR(struct A68t360 ,A68t359);
typedef struct A68t359  A68_359 ;    /* VECTOR [] MODE360 */
struct A68t360 { A68_INT mode; union {
struct A68t316  mode1;
struct A68t317  mode2;
struct A68t318  mode3;
struct A68t319  mode4;
struct A68t320  mode5;
struct A68t321  mode6;
struct A68t322  mode7;
struct A68t323  mode8;
struct A68t324  mode9;
struct A68t325  mode10;
struct A68t326  mode11;
struct A68t327  mode12;
struct A68t328  mode13;
struct A68t329  mode14;
struct A68t330  mode15;
struct A68t331  mode16;
struct A68t332  mode17;
struct A68t333  mode18;
struct A68t334  mode19;
struct A68t335  mode20;
struct A68t336  mode21;
struct A68t337  mode22;
struct A68t338  mode23;
struct A68t339  mode24;
struct A68t340  mode25;
struct A68t341  mode26;
struct A68t342  mode27;
struct A68t343  mode28;
struct A68t344  mode29;
struct A68t345  mode30;
struct A68t346  mode31;
struct A68t347  mode32;
struct A68t348  mode33;
struct A68t349  mode34;
struct A68t350  mode35;
struct A68t351  mode36;
struct A68t352  mode37;
struct A68t353  mode38;
struct A68t354  mode39;
struct A68t355  mode40;
struct A68t356  mode41;
struct A68t357  mode42;
} data; };
typedef struct A68t360  A68_360 ;    /* UNION(MODE316,MODE317,MODE318,MODE319,MODE320,MODE321,MODE322,MODE323,MODE324,MODE325,MODE326,MODE327,MODE328,MODE329,MODE330,MODE331,MODE332,MODE333,MODE334,MODE335,MODE336,MODE337,MODE338,MODE339,MODE340,MODE341,MODE342,MODE343,MODE344,MODE345,MODE346,MODE347,MODE348,MODE349,MODE350,MODE351,MODE352,MODE353,MODE354,MODE355,MODE356,MODE357)  */

A_PROCEDURE(A68_VOID ,A68t361,(struct A68t315 *),(struct A68t315 *,void *));
typedef struct A68t361  A68_361 ;    /* PROC(REF MODE315) VOID */

A_PROCEDURE(A68_VOID ,A68t362,(void),(void *));
typedef struct A68t362  A68_362 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t363,(struct A68t362 ),(struct A68t362 ,void *));
typedef struct A68t363  A68_363 ;    /* PROC(MODE362) VOID */

A_PROCEDURE(A68_VOID ,A68t364,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t364  A68_364 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t365,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t365  A68_365 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,55,A68t366);
typedef struct A68t366  A68_366 ;    /* STRUCT 55 CHAR */

A_PROCEDURE(A68_BOOL ,A68t367,(struct A68t250 *,struct A68t97 ),(struct A68t250 *,struct A68t97 ,void *));
typedef struct A68t367  A68_367 ;    /* PROC(REF MODE250,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t368,(A68_BOOL *,A68_VC ),(A68_BOOL *,A68_VC ,void *));
typedef struct A68t368  A68_368 ;    /* PROC(REF BOOL,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,22,A68t369);
typedef struct A68t369  A68_369 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t370);
typedef struct A68t370  A68_370 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_VC ,3,A68t371);
typedef struct A68t371  A68_371 ;    /* STRUCT 3 MODE26 */
A_ISTRUCT(A68_CHAR ,5,A68t372);
typedef struct A68t372  A68_372 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t373);
typedef struct A68t373  A68_373 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t374);
typedef struct A68t374  A68_374 ;    /* STRUCT 8 CHAR */
struct A68t375 { A68_INT mode; union {
struct A68t186 * mode1;
struct A68t181 * mode2;
struct A68t182 * mode3;
} data; };
typedef struct A68t375  A68_375 ;    /* UNION(REF MODE186,REF MODE181,REF MODE182)  */
A_ISTRUCT(A68_CHAR ,9,A68t376);
typedef struct A68t376  A68_376 ;    /* STRUCT 9 CHAR */
struct A68t377 { A68_INT mode; union {
struct A68t224 * mode1;
struct A68t223 * mode2;
} data; };
typedef struct A68t377  A68_377 ;    /* UNION(REF MODE224,REF MODE223)  */
A_ISTRUCT(struct A68t360 ,3,A68t378);
typedef struct A68t378  A68_378 ;    /* STRUCT 3 MODE360 */
A_ISTRUCT(A68_CHAR ,59,A68t379);
typedef struct A68t379  A68_379 ;    /* STRUCT 59 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from transformprocs --- */
extern A68_315 * THJATRN_make_newtprocs(struct A68t315 *,struct A68t359 );
extern A68_315 * AWLATRN_nulltprocs;
/* --- End of imports from transformprocs --- */


/* --- Imports from assmodes --- */
#define MKAATRN_uiosource 3
#define NKAATRN_uiosink 4
/* --- End of imports from assmodes --- */


/* --- Imports from messageproc --- */
extern A68_92  WHAAOSI_user;
extern A68_92  YHAAOSI_error;
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VOID  JBAAOSI_concat(struct A68t46 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void IHJATRN(void);   /* transformprocs */
extern void BAAATRN(void);   /* assmodes */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_366   ZIBAELA = {"$Id: checksim.a68,v 34.2 1995/03/29 13:03:11 ella Exp $"}; 
A_GISVEC(A68_VC ,AJBAELA,ZIBAELA,55)
static A68_369   TJBAELA = {"You need to call the \""}; 
A_GISVEC(A68_VC ,UJBAELA,TJBAELA,22)
static A68_370   VJBAELA = {"\" transform"}; 
A_GISVEC(A68_VC ,WJBAELA,VJBAELA,11)
static A68_372   KKBAELA = {"macro"}; 
A_GISVEC(A68_VC ,LKBAELA,KKBAELA,5)
static A68_373   WKBAELA = {"fntype"}; 
A_GISVEC(A68_VC ,XKBAELA,WKBAELA,6)
static A68_374   YKBAELA = {"portname"}; 
A_GISVEC(A68_VC ,ZKBAELA,YKBAELA,8)
static A68_374   ALBAELA = {"sequence"}; 
A_GISVEC(A68_VC ,BLBAELA,ALBAELA,8)
static A68_372   CLBAELA = {"macro"}; 
A_GISVEC(A68_VC ,DLBAELA,CLBAELA,5)
static A68_373   NLBAELA = {"import"}; 
A_GISVEC(A68_VC ,OLBAELA,NLBAELA,6)
static A68_376   PLBAELA = {"timescale"}; 
A_GISVEC(A68_VC ,QLBAELA,PLBAELA,9)
static A68_379   HMBAELA = {"Closure can not be simulated by the standard ELLA simulator"}; 
A_GISVEC(A68_VC ,IMBAELA,HMBAELA,59)
typedef struct   /* env of non-global proc */
{
A68_BOOL * MJBAELA_err;
A68_97  Msg;
} RJBAELA_report;
typedef struct   /* env of non-global proc */
{
A68_319  CKBAELA_formula;
A68_368  PJBAELA_report;
A68_BOOL * EJBAELA_fmacro;
} EKBAELA_formula;
typedef struct   /* env of non-global proc */
{
A68_368  PJBAELA_report;
A68_BOOL * IJBAELA_ffntype;
A68_BOOL * LJBAELA_fportname;
A68_BOOL * GJBAELA_fsequence;
A68_BOOL * EJBAELA_fmacro;
} SKBAELA_unit;
typedef struct   /* env of non-global proc */
{
A68_368  PJBAELA_report;
A68_BOOL * FJBAELA_fimport;
A68_BOOL * HJBAELA_ftime;
} LLBAELA_fnbody;

A68_BOOL  DJBAELA_check_sim_closure(A68_250 * Closure, A68_97  Msg);

A_STATIC A68_VOID  QJBAELA_report(A68_BOOL * Flag, A68_VC  Name, void *NonLocals);

A_STATIC A68_VOID  DKBAELA_formula(A68_123  F, A68_315 * Tprocs, A68_276  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RKBAELA_unit(A68_161  U, A68_315 * Tprocs, A68_291  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KLBAELA_fnbody(A68_233  Body, A68_315 * Tprocs, A68_309  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QJBAELA_report(A68_BOOL * Flag, A68_VC  Name, void *NonLocals)
#define NL(x) (((RJBAELA_report *)NonLocals)->x)
{ 
A68_371  SJBAELA;  /* collateral clause result */
A68_46  XJBAELA;  /* OPERATORS - istruct -> vector */
A68_VC  YJBAELA;  /* avoid structure result */
A68_46  ZJBAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(report);
 /* line 55: */
 /* line 56: */
if ( (*Flag) )
{ 
(*NL(MJBAELA_err)) = A68_TRUE;
(*Flag) = A68_FALSE;
 /* line 57: */
SJBAELA.data[0] = UJBAELA;
 /* line 58: */
SJBAELA.data[1] = Name;
SJBAELA.data[2] = WJBAELA;
 /* line 59: */
JBAAOSI_concat( A_HISVEC(XJBAELA,SJBAELA,3,A68_VC ), &YJBAELA );
A_CALLPROC(NL(Msg),(YHAAOSI_error, A_HVEC(ZJBAELA,YJBAELA,A68_VC )),(YHAAOSI_error, A_HVEC(ZJBAELA,YJBAELA,A68_VC ),(NL(Msg)).nonlocals));
} 
A_PROC_EXIT(report);
return;
} 
#undef NL

A_STATIC A68_VOID  DKBAELA_formula(A68_123  F, A68_315 * Tprocs, A68_276  *ReturnedValue, void *NonLocals)
#define NL(x) (((EKBAELA_formula *)NonLocals)->x)
{ 
A68_123  FKBAELA;  /* united object - for case conformity */
A68_276  GKBAELA;  /* collateral clause result */
A68_276  HKBAELA;  /* clause result */
A68_131 * IKBAELA_b;
A68_276  JKBAELA;  /* avoid structure result */
A68_319  MKBAELA;  /* CALL */
A68_276  NKBAELA;  /* avoid structure result */
A_PROC_ENTRY(formula);
 /* line 62: */
 /* line 63: */
FKBAELA = F ;
switch ( FKBAELA.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26)  */
GKBAELA.F = F;
 /* line 64: */
GKBAELA.C = A68_FALSE;
HKBAELA = GKBAELA;
break;
case 8: /* REF STRUCT(MODE123)  */
IKBAELA_b = (FKBAELA.data.mode8);
 /* line 65: */
A_CALLPROC(NL(CKBAELA_formula),((*(&(IKBAELA_b->Formula))), Tprocs, &JKBAELA),((*(&(IKBAELA_b->Formula))), Tprocs, &JKBAELA,(NL(CKBAELA_formula)).nonlocals));
HKBAELA = JKBAELA;
break;
default: 
A_CALLPROC(NL(PJBAELA_report),(NL(EJBAELA_fmacro), LKBAELA),(NL(EJBAELA_fmacro), LKBAELA,(NL(PJBAELA_report)).nonlocals));
 /* line 66: */
 /* line 67: */
MKBAELA = (*(&(AWLATRN_nulltprocs->Formula))) ;
A_CALLPROC(MKBAELA,(F, Tprocs, &NKBAELA),(F, Tprocs, &NKBAELA,(MKBAELA).nonlocals));
HKBAELA = NKBAELA;
break;
} 
A_PROC_EXIT(formula);
*ReturnedValue = (HKBAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  RKBAELA_unit(A68_161  U, A68_315 * Tprocs, A68_291  *ReturnedValue, void *NonLocals)
#define NL(x) (((SKBAELA_unit *)NonLocals)->x)
{ 
A68_161  TKBAELA;  /* united object - for case conformity */
A68_166 * UKBAELA_n;
A68_BOOL  VKBAELA;  /* optbool result */
A68_291  ELBAELA;  /* clause result */
A68_334  FLBAELA;  /* CALL */
A68_291  GLBAELA;  /* avoid structure result */
A_PROC_ENTRY(unit);
 /* line 70: */
 /* line 71: */
{ 
 /* line 72: */
TKBAELA = U ;
switch ( TKBAELA.mode )
{ 
case 11: /* REF STRUCT(INT,INT)  */
UKBAELA_n = (TKBAELA.data.mode11);
 /* line 73: */
VKBAELA = ((*(&(UKBAELA_n->Sort)))==MKAATRN_uiosource);
if ( ! VKBAELA )
{ /* line 74: */
VKBAELA = ((*(&(UKBAELA_n->Sort)))==NKAATRN_uiosink);
}
if ( VKBAELA )
{ 
 /* line 75: */
 /* line 76: */
A_CALLPROC(NL(PJBAELA_report),(NL(IJBAELA_ffntype), XKBAELA),(NL(IJBAELA_ffntype), XKBAELA,(NL(PJBAELA_report)).nonlocals));
} 
break;
case 15: /* REF STRUCT(MODE161,INT,INT)  */
 /* line 77: */
A_CALLPROC(NL(PJBAELA_report),(NL(LJBAELA_fportname), ZKBAELA),(NL(LJBAELA_fportname), ZKBAELA,(NL(PJBAELA_report)).nonlocals));
break;
case 28: /* REF STRUCT(REF MODE209,MODE161)  */
 /* line 78: */
A_CALLPROC(NL(PJBAELA_report),(NL(GJBAELA_fsequence), BLBAELA),(NL(GJBAELA_fsequence), BLBAELA,(NL(PJBAELA_report)).nonlocals));
break;
case 26: /* REF STRUCT(MODE123,MODE161,MODE161)  */
case 27: /* REF STRUCT(MODE123,MODE161)  */
case 31: /* REF STRUCT(MODE161,MODE125)  */
 /* line 79: */
 /* line 81: */
 /* line 82: */
A_CALLPROC(NL(PJBAELA_report),(NL(EJBAELA_fmacro), DLBAELA),(NL(EJBAELA_fmacro), DLBAELA,(NL(PJBAELA_report)).nonlocals));
break;
default: 
/*SKIP*/;
break;
} 
 /* line 83: */
 /* line 84: */
FLBAELA = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(FLBAELA,(U, Tprocs, &GLBAELA),(U, Tprocs, &GLBAELA,(FLBAELA).nonlocals));
ELBAELA = GLBAELA;
} 
A_PROC_EXIT(unit);
*ReturnedValue = (ELBAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  KLBAELA_fnbody(A68_233  Body, A68_315 * Tprocs, A68_309  *ReturnedValue, void *NonLocals)
#define NL(x) (((LLBAELA_fnbody *)NonLocals)->x)
{ 
A68_233  MLBAELA;  /* united object - for case conformity */
A68_233  RLBAELA;  /* united object - for case conformity */
A68_309  SLBAELA;  /* collateral clause result */
A68_309  TLBAELA;  /* clause result */
A68_352  ULBAELA;  /* CALL */
A68_309  VLBAELA;  /* avoid structure result */
A_PROC_ENTRY(fnbody);
 /* line 87: */
 /* line 88: */
{ 
 /* line 89: */
MLBAELA = Body ;
switch ( MLBAELA.mode )
{ 
case 5: /* REF STRUCT(REF MODE26,INT,MODE111)  */
 /* line 90: */
A_CALLPROC(NL(PJBAELA_report),(NL(FJBAELA_fimport), OLBAELA),(NL(FJBAELA_fimport), OLBAELA,(NL(PJBAELA_report)).nonlocals));
break;
case 10: /* REF STRUCT(BOOL,INT,MODE201,MODE123,MODE161,MODE123)  */
 /* line 91: */
 /* line 92: */
A_CALLPROC(NL(PJBAELA_report),(NL(HJBAELA_ftime), QLBAELA),(NL(HJBAELA_ftime), QLBAELA,(NL(PJBAELA_report)).nonlocals));
break;
default: 
/*SKIP*/;
break;
} 
 /* line 93: */
 /* line 94: */
RLBAELA = Body ;
switch ( RLBAELA.mode )
{ 
case 2: /* REF STRUCT(BOOL,REF MODE26,REF MODE203)  */
case 3: /* REF STRUCT(MODE123)  */
SLBAELA.F = Body;
 /* line 95: */
SLBAELA.C = A68_FALSE;
TLBAELA = SLBAELA;
break;
default: 
 /* line 96: */
 /* line 97: */
ULBAELA = (*(&(AWLATRN_nulltprocs->Fnbody))) ;
A_CALLPROC(ULBAELA,(Body, Tprocs, &VLBAELA),(Body, Tprocs, &VLBAELA,(ULBAELA).nonlocals));
TLBAELA = VLBAELA;
break;
} 
} 
A_PROC_EXIT(fnbody);
*ReturnedValue = (TLBAELA);
return;
} 
#undef NL

A68_BOOL  DJBAELA_check_sim_closure(A68_250 * Closure, A68_97  Msg)
{ 
A68_BOOL  EJBAELA_fmacro;
A68_BOOL  FJBAELA_fimport;
A68_BOOL  GJBAELA_fsequence;
A68_BOOL  HJBAELA_ftime;
A68_BOOL  IJBAELA_ffntype;
A68_BOOL  JJBAELA_fmake;
A68_BOOL  KJBAELA_fjoin;
A68_BOOL  LJBAELA_fportname;
A68_BOOL  MJBAELA_err;
A68_368  PJBAELA_report;   /* proc value of non-global proc */
A68_319  CKBAELA_formula;   /* proc value of non-global proc */
A68_334  QKBAELA_unit;   /* proc value of non-global proc */
A68_352  JLBAELA_fnbody;   /* proc value of non-global proc */
A68_378  WLBAELA;  /* collateral clause result */
A68_360  XLBAELA;  /* OPERATORS - mode -> union mode */
A68_319  YLBAELA;  /* YIELD */
A68_360  ZLBAELA;  /* OPERATORS - mode -> union mode */
A68_334  AMBAELA;  /* YIELD */
A68_360  BMBAELA;  /* OPERATORS - mode -> union mode */
A68_352  CMBAELA;  /* YIELD */
A68_359  DMBAELA;  /* OPERATORS - istruct -> vector */
A68_315 * EMBAELA_newtprocs;
A68_357  FMBAELA;  /* CALL */
A68_314  GMBAELA;  /* avoid structure result */
A68_46  JMBAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  KMBAELA;  /* clause result */
A_PROC_ENTRY(check_sim_closure);
 /* line 49: */
 /* line 50: */
{ 
EJBAELA_fmacro = A68_TRUE;
FJBAELA_fimport = A68_TRUE;
GJBAELA_fsequence = A68_TRUE;
HJBAELA_ftime = A68_TRUE;
 /* line 51: */
IJBAELA_ffntype = A68_TRUE;
JJBAELA_fmake = A68_TRUE;
KJBAELA_fjoin = A68_TRUE;
LJBAELA_fportname = A68_TRUE;
 /* line 52: */
MJBAELA_err = A68_FALSE;
 /* line 54: */
A_CLOSURE( PJBAELA_report, QJBAELA_report, RJBAELA_report );
(( RJBAELA_report * ) ( PJBAELA_report.nonlocals )) -> MJBAELA_err = (&MJBAELA_err);
(( RJBAELA_report * ) ( PJBAELA_report.nonlocals )) -> Msg = Msg;
 /* line 61: */
A_CLOSURE( CKBAELA_formula, DKBAELA_formula, EKBAELA_formula );
(( EKBAELA_formula * ) ( CKBAELA_formula.nonlocals )) -> CKBAELA_formula = CKBAELA_formula;
(( EKBAELA_formula * ) ( CKBAELA_formula.nonlocals )) -> PJBAELA_report = PJBAELA_report;
(( EKBAELA_formula * ) ( CKBAELA_formula.nonlocals )) -> EJBAELA_fmacro = (&EJBAELA_fmacro);
 /* line 69: */
A_CLOSURE( QKBAELA_unit, RKBAELA_unit, SKBAELA_unit );
(( SKBAELA_unit * ) ( QKBAELA_unit.nonlocals )) -> PJBAELA_report = PJBAELA_report;
(( SKBAELA_unit * ) ( QKBAELA_unit.nonlocals )) -> IJBAELA_ffntype = (&IJBAELA_ffntype);
(( SKBAELA_unit * ) ( QKBAELA_unit.nonlocals )) -> LJBAELA_fportname = (&LJBAELA_fportname);
(( SKBAELA_unit * ) ( QKBAELA_unit.nonlocals )) -> GJBAELA_fsequence = (&GJBAELA_fsequence);
(( SKBAELA_unit * ) ( QKBAELA_unit.nonlocals )) -> EJBAELA_fmacro = (&EJBAELA_fmacro);
 /* line 86: */
A_CLOSURE( JLBAELA_fnbody, KLBAELA_fnbody, LLBAELA_fnbody );
(( LLBAELA_fnbody * ) ( JLBAELA_fnbody.nonlocals )) -> PJBAELA_report = PJBAELA_report;
(( LLBAELA_fnbody * ) ( JLBAELA_fnbody.nonlocals )) -> FJBAELA_fimport = (&FJBAELA_fimport);
(( LLBAELA_fnbody * ) ( JLBAELA_fnbody.nonlocals )) -> HJBAELA_ftime = (&HJBAELA_ftime);
 /* line 100: */
 /* line 101: */
YLBAELA = CKBAELA_formula ;
WLBAELA.data[0] = A_UNITE(XLBAELA,mode4,4,YLBAELA);
AMBAELA = QKBAELA_unit ;
WLBAELA.data[1] = A_UNITE(ZLBAELA,mode19,19,AMBAELA);
CMBAELA = JLBAELA_fnbody ;
WLBAELA.data[2] = A_UNITE(BMBAELA,mode37,37,CMBAELA);
EMBAELA_newtprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HISVEC(DMBAELA,WLBAELA,3,A68_360 ));
 /* line 103: */
FMBAELA = (*(&(EMBAELA_newtprocs->Closure))) ;
A_CALLPROC(FMBAELA,(Closure, EMBAELA_newtprocs, Msg, &GMBAELA),(Closure, EMBAELA_newtprocs, Msg, &GMBAELA,(FMBAELA).nonlocals));
GMBAELA;
 /* line 105: */
 /* line 106: */
if ( MJBAELA_err )
{ 
 /* line 107: */
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(JMBAELA,IMBAELA,A68_VC )),(WHAAOSI_user, A_HVEC(JMBAELA,IMBAELA,A68_VC ),(Msg).nonlocals));
 /* line 108: */
 /* line 109: */
KMBAELA = A68_FALSE;
} 
else
{ 
 /* line 110: */
 /* line 111: */
 /* line 114: */
KMBAELA = A68_TRUE;
} 
} 
A_PROC_EXIT(check_sim_closure);
return( KMBAELA );
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 4: */
void WIBAELA(void)   /* initialise DECS checksim */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/checksim.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/transform/assoc/mfiles/transformprocs.m","/u/model/ella/transform/assoc/mfiles/assmodes.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
IHJATRN();   /* USE transformprocs */
BAAATRN();   /* USE assmodes */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ella/assoc/./a68files/checksim.a68";
A_config.translation_time = "Tue Apr  4 10:32:38 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "VIBAELA (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:32:38 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS checksim);
UEAALIB_a68config(LGAALIB_configinfo, AJBAELA);
 /* line 48: */
 /* line 115: */
A_PROC_EXIT(DECS checksim);
} 
#undef NL
/* end of translation of ./a68files/checksim.a68 */
