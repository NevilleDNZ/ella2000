
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
/* UNAME:XDXASIM */
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
struct A68t274 ;

A_PROCEDURE(A68_VOID ,A68t273,(struct A68t274 ),(struct A68t274 ,void *));
typedef struct A68t273  A68_273 ;    /* PROC(MODE274) VOID */
struct A68t274 { A68_INT mode; union {
A68_VC  mode1;
struct A68t32  mode2;
struct A68t54  mode3;
struct A68t53  mode4;
} data; };
typedef struct A68t274  A68_274 ;    /* UNION(REF MODE26,REF MODE32,REF MODE54,REF MODE53)  */

A_PROCEDURE(A68_INT ,A68t275,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t275  A68_275 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t276,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t276  A68_276 ;    /* PROC(BITS,BITS) BITS */
struct A68t278 ;

A_PROCEDURE(A68_VOID ,A68t277,(struct A68t278 ,A68_INT ),(struct A68t278 ,A68_INT ,void *));
typedef struct A68t277  A68_277 ;    /* PROC(MODE278,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t278,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t278  A68_278 ;    /* PROC(CHAR) VOID */
struct A68t280 ;

A_PROCEDURE(A68_INT ,A68t279,(struct A68t280 ),(struct A68t280 ,void *));
typedef struct A68t279  A68_279 ;    /* PROC(MODE280) INT */

A_PROCEDURE(A68_CHAR ,A68t280,(void),(void *));
typedef struct A68t280  A68_280 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t281,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t281  A68_281 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_INT ,A68t282,(void),(void *));
typedef struct A68t282  A68_282 ;    /* PROC INT */

A_PROCEDURE(A68_INT ,A68t283,(A68_INT ),(A68_INT ,void *));
typedef struct A68t283  A68_283 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t284,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t284  A68_284 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t285,(A68_VC *),(A68_VC *,void *));
typedef struct A68t285  A68_285 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_INT ,A68t286,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t286  A68_286 ;    /* PROC(INT,INT,REF BOOL) INT */

A_PROCEDURE(A68_BOOL ,A68t287,(A68_VC ,A68_INT *,struct A68t97 ),(A68_VC ,A68_INT *,struct A68t97 ,void *));
typedef struct A68t287  A68_287 ;    /* PROC(MODE26,REF INT,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t288,(void),(void *));
typedef struct A68t288  A68_288 ;    /* PROC VOID */
struct A68t290 ;
struct A68t291 ;

A_PROCEDURE(A68_INT ,A68t289,(struct A68t290 ,struct A68t291 ),(struct A68t290 ,struct A68t291 ,void *));
typedef struct A68t289  A68_289 ;    /* PROC(MODE290,MODE291) INT */
struct A68t299{
A68_INT  Svoid;
A_PAD_INT(PAD_94)
};
typedef struct A68t299  A68_299 ;    /* STRUCT(INT)  */
struct A68t300{
A68_INT  Snull;
A_PAD_INT(PAD_95)
};
typedef struct A68t300  A68_300 ;    /* STRUCT(INT)  */
struct A68t290 { A68_INT mode; union {
struct A68t292 * mode1;
struct A68t293 * mode2;
struct A68t294 * mode3;
struct A68t295 * mode4;
struct A68t296 * mode5;
struct A68t297 * mode6;
struct A68t298 * mode7;
struct A68t299  mode8;
struct A68t300  mode9;
} data; };
typedef struct A68t290  A68_290 ;    /* UNION(REF MODE292,REF MODE293,REF MODE294,REF MODE295,REF MODE296,REF MODE297,REF MODE298,MODE299,MODE300)  */

A_PROCEDURE(A68_INT ,A68t291,(struct A68t290 ),(struct A68t290 ,void *));
typedef struct A68t291  A68_291 ;    /* PROC(MODE290) INT */
struct A68t292{
A68_VC  Id;
struct A68t290  T;
struct A68t292 * Rest;
};
typedef struct A68t292  A68_292 ;    /* STRUCT(REF MODE26,MODE290,REF MODE292)  */
struct A68t293{
A68_VC  Id;
A68_INT  Lwb;
A_PAD_INT(PAD_96)
A68_INT  Upb;
A_PAD_INT(PAD_97)
};
typedef struct A68t293  A68_293 ;    /* STRUCT(REF MODE26,INT,INT)  */
struct A68t294{
A68_VC  Id;
A68_VC  Char;
};
typedef struct A68t294  A68_294 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t295{
A68_INT  No;
A_PAD_INT(PAD_98)
struct A68t290  Type;
};
typedef struct A68t295  A68_295 ;    /* STRUCT(INT,MODE290)  */
struct A68t296{
A68_INT  No;
A_PAD_INT(PAD_99)
struct A68t294  T;
};
typedef struct A68t296  A68_296 ;    /* STRUCT(INT,MODE294)  */
struct A68t297{
struct A68t290  From;
struct A68t290  To;
};
typedef struct A68t297  A68_297 ;    /* STRUCT(MODE290,MODE290)  */
struct A68t298{
struct A68t290  T;
struct A68t298 * Rest;
};
typedef struct A68t298  A68_298 ;    /* STRUCT(MODE290,REF MODE298)  */

A_PROCEDURE(A68_VOID ,A68t301,(A68_INT ,struct A68t290 *),(A68_INT ,struct A68t290 *,void *));
typedef struct A68t301  A68_301 ;    /* PROC(INT) MODE290 */
struct A68t303 ;
struct A68t304 ;
struct A68t305 ;
struct A68t306 ;

A_PROCEDURE(A68_INT ,A68t302,(A68_VC ,A68_INT ,A68_INT ,A68_INT ,struct A68t303 ,struct A68t303 ,struct A68t304 *,struct A68t305 ,struct A68t306 ),(A68_VC ,A68_INT ,A68_INT ,A68_INT ,struct A68t303 ,struct A68t303 ,struct A68t304 *,struct A68t305 ,struct A68t306 ,void *));
typedef struct A68t302  A68_302 ;    /* PROC(REF MODE26,INT,INT,INT,MODE303,MODE303,REF MODE304,MODE305,MODE306) INT */
A_VECTOR(struct A68t308 ,A68t307);
typedef struct A68t307  A68_307 ;    /* VECTOR [] MODE308 */
struct A68t308{
A68_INT  Instoffset;
A_PAD_INT(PAD_100)
A68_INT  Offset;
A_PAD_INT(PAD_101)
A68_INT  Size;
A_PAD_INT(PAD_102)
};
typedef struct A68t308  A68_308 ;    /* STRUCT(INT,INT,INT)  */
struct A68t303{
struct A68t290  Type;
struct A68t307  Blocks;
};
typedef struct A68t303  A68_303 ;    /* STRUCT(MODE290,REF MODE307)  */
struct A68t304{
struct A68t303  Firstcell;
A68_INT  Lwb;
A_PAD_INT(PAD_103)
A68_INT  Ramsize;
A_PAD_INT(PAD_104)
A68_INT  Step;
A_PAD_INT(PAD_105)
};
typedef struct A68t304  A68_304 ;    /* STRUCT(MODE303,INT,INT,INT)  */
struct A68t305{
A68_INT  Size;
A_PAD_INT(PAD_106)
A68_INT  Offset;
A_PAD_INT(PAD_107)
A68_BITS  Sort;
A_PAD_BITS(PAD_108)
};
typedef struct A68t305  A68_305 ;    /* STRUCT(INT,INT,BITS)  */
struct A68t306{
A68_INT  Workspace;
A_PAD_INT(PAD_109)
A68_INT  History;
A_PAD_INT(PAD_110)
A68_INT  Declid;
A_PAD_INT(PAD_111)
};
typedef struct A68t306  A68_306 ;    /* STRUCT(INT,INT,INT)  */
struct A68t310 ;

A_PROCEDURE(A68_VOID ,A68t309,(A68_INT ,A68_VC ,A68_VC ,struct A68t310 ),(A68_INT ,A68_VC ,A68_VC ,struct A68t310 ,void *));
typedef struct A68t309  A68_309 ;    /* PROC(INT,REF MODE26,REF MODE26,MODE310) VOID */
struct A68t311{
A68_INT  Fn;
A_PAD_INT(PAD_112)
A68_INT  Instance;
A_PAD_INT(PAD_113)
};
typedef struct A68t311  A68_311 ;    /* STRUCT(INT,INT)  */
struct A68t310 { A68_INT mode; union {
struct A68t311  mode1;
struct A68t303  mode2;
} data; };
typedef struct A68t310  A68_310 ;    /* UNION(MODE311,MODE303)  */

A_PROCEDURE(A68_VOID ,A68t312,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t312  A68_312 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t313,(A68_INT ,struct A68t32 ),(A68_INT ,struct A68t32 ,void *));
typedef struct A68t313  A68_313 ;    /* PROC(INT,REF MODE32) VOID */

A_PROCEDURE(A68_VOID ,A68t314,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t314  A68_314 ;    /* PROC(INT,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t315,(A68_INT ,struct A68t305 ),(A68_INT ,struct A68t305 ,void *));
typedef struct A68t315  A68_315 ;    /* PROC(INT,MODE305) VOID */

A_PROCEDURE(A68_VOID ,A68t316,(A68_INT ,struct A68t307 ,struct A68t307 ),(A68_INT ,struct A68t307 ,struct A68t307 ,void *));
typedef struct A68t316  A68_316 ;    /* PROC(INT,REF MODE307,REF MODE307) VOID */

A_PROCEDURE(A68_VOID ,A68t317,(A68_VC ,A68_INT ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t317  A68_317 ;    /* PROC(REF MODE26,INT,INT) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t318,(A68_VC ,A68_INT ,A68_INT ),(A68_VC ,A68_INT ,A68_INT ,void *));
typedef struct A68t318  A68_318 ;    /* PROC(REF MODE26,INT,INT) INT */
struct A68t320 ;

A_PROCEDURE(A68_VOID ,A68t319,(A68_INT ,struct A68t320 *),(A68_INT ,struct A68t320 *,void *));
typedef struct A68t319  A68_319 ;    /* PROC(INT) MODE320 */
A_VECTOR(struct A68t322 ,A68t321);
typedef struct A68t321  A68_321 ;    /* VECTOR [] MODE322 */
struct A68t322{
A68_VC  Uname;
A68_VC  Lname;
A68_INT  Node;
A_PAD_INT(PAD_114)
};
typedef struct A68t322  A68_322 ;    /* STRUCT(REF MODE26,REF MODE26,INT)  */
struct A68t320{
struct A68t304 * Ram;
struct A68t303  Outputs;
A68_INT  Noinputs;
A_PAD_INT(PAD_115)
struct A68t321  Body;
};
typedef struct A68t320  A68_320 ;    /* STRUCT(REF MODE304,MODE303,INT,REF MODE321)  */

A_PROCEDURE(A68_VOID ,A68t323,(A68_INT ,struct A68t310 *),(A68_INT ,struct A68t310 *,void *));
typedef struct A68t323  A68_323 ;    /* PROC(INT) MODE310 */
struct A68t325 ;

A_PROCEDURE(A68_VOID ,A68t324,(A68_INT ,A68_INT ,struct A68t325 *),(A68_INT ,A68_INT ,struct A68t325 *,void *));
typedef struct A68t324  A68_324 ;    /* PROC(INT,INT) MODE325 */
struct A68t325{
A68_INT  Lwb;
A_PAD_INT(PAD_116)
A68_INT  Upb;
A_PAD_INT(PAD_117)
};
typedef struct A68t325  A68_325 ;    /* STRUCT(INT,INT)  */
struct A68t327 ;

A_PROCEDURE(A68_VOID ,A68t326,(A68_INT ,A68_INT ,struct A68t327 *),(A68_INT ,A68_INT ,struct A68t327 *,void *));
typedef struct A68t326  A68_326 ;    /* PROC(INT,INT) REF MODE327 */
A_VECTOR(struct A68t328 ,A68t327);
typedef struct A68t327  A68_327 ;    /* VECTOR [] MODE328 */
struct A68t328{
A68_INT  Instoffset;
A_PAD_INT(PAD_118)
A68_INT  Ipno;
A_PAD_INT(PAD_119)
};
typedef struct A68t328  A68_328 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t329,(A68_INT ,struct A68t303 *),(A68_INT ,struct A68t303 *,void *));
typedef struct A68t329  A68_329 ;    /* PROC(INT) MODE303 */

A_PROCEDURE(A68_VOID ,A68t330,(A68_INT ,struct A68t305 *),(A68_INT ,struct A68t305 *,void *));
typedef struct A68t330  A68_330 ;    /* PROC(INT) MODE305 */

A_PROCEDURE(A68_VOID ,A68t331,(A68_INT ,struct A68t306 *),(A68_INT ,struct A68t306 *,void *));
typedef struct A68t331  A68_331 ;    /* PROC(INT) MODE306 */

A_PROCEDURE(A68_VOID ,A68t332,(struct A68t320 ,struct A68t303 *),(struct A68t320 ,struct A68t303 *,void *));
typedef struct A68t332  A68_332 ;    /* PROC(MODE320) MODE303 */
struct A68t334 ;

A_PROCEDURE(A68_VOID ,A68t333,(struct A68t334 ),(struct A68t334 ,void *));
typedef struct A68t333  A68_333 ;    /* PROC(MODE334) VOID */

A_PROCEDURE(A68_BOOL ,A68t334,(A68_VC ),(A68_VC ,void *));
typedef struct A68t334  A68_334 ;    /* PROC(REF MODE26) BOOL */
struct A68t336 ;

A_PROCEDURE(A68_VOID ,A68t335,(struct A68t336 ,struct A68t36 ),(struct A68t336 ,struct A68t36 ,void *));
typedef struct A68t335  A68_335 ;    /* PROC(MODE336,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t336,(A68_VC ,struct A68t36 ),(A68_VC ,struct A68t36 ,void *));
typedef struct A68t336  A68_336 ;    /* PROC(REF MODE26,MODE36) VOID */
struct A68t337{
A68_INT  Sort;
A_PAD_INT(PAD_120)
A68_INT  Size;
A_PAD_INT(PAD_121)
};
typedef struct A68t337  A68_337 ;    /* STRUCT(INT,INT)  */
struct A68t338{
struct A68t337  Head;
struct A68t338 * Tail;
};
typedef struct A68t338  A68_338 ;    /* STRUCT(MODE337,REF MODE338)  */
struct A68t340{
A68_INT  Lab;
A_PAD_INT(PAD_122)
A68_VC  Tag;
};
typedef struct A68t340  A68_340 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t339{
struct A68t340  Labelint;
struct A68t340  Labelcallinst;
A68_INT  Workspacesize;
A_PAD_INT(PAD_123)
A68_INT  Evalfn;
A_PAD_INT(PAD_124)
A68_INT  History;
A_PAD_INT(PAD_125)
A68_INT  Declid;
A_PAD_INT(PAD_126)
};
typedef struct A68t339  A68_339 ;    /* STRUCT(MODE340,MODE340,INT,INT,INT,INT)  */

A_PROCEDURE(struct A68t339 *,A68t341,(A68_VC ,struct A68t32 ,A68_INT ,struct A68t32 ,struct A68t36 ),(A68_VC ,struct A68t32 ,A68_INT ,struct A68t32 ,struct A68t36 ,void *));
typedef struct A68t341  A68_341 ;    /* PROC(MODE26,MODE32,INT,MODE32,MODE36) REF MODE339 */
struct A68t342 { A68_INT mode; union {
A68_INT  mode1;
struct A68t340  mode2;
} data; };
typedef struct A68t342  A68_342 ;    /* UNION(INT,MODE340,VOID)  */

A_PROCEDURE(A68_VOID ,A68t343,(A68_VC ,struct A68t340 *),(A68_VC ,struct A68t340 *,void *));
typedef struct A68t343  A68_343 ;    /* PROC(MODE26) MODE340 */

A_PROCEDURE(A68_VOID ,A68t344,(struct A68t340 *),(struct A68t340 *,void *));
typedef struct A68t344  A68_344 ;    /* PROC MODE340 */

A_PROCEDURE(A68_VOID ,A68t345,(struct A68t43 ,A68_INT ,struct A68t36 ),(struct A68t43 ,A68_INT ,struct A68t36 ,void *));
typedef struct A68t345  A68_345 ;    /* PROC(MODE43,INT,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t346,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t346  A68_346 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_INT ,A68t347,(A68_INT ,A68_INT *),(A68_INT ,A68_INT *,void *));
typedef struct A68t347  A68_347 ;    /* PROC(INT,REF INT) INT */

A_PROCEDURE(A68_VC *,A68t348,(A68_VC ),(A68_VC ,void *));
typedef struct A68t348  A68_348 ;    /* PROC(REF MODE26) REF REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t349,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t349  A68_349 ;    /* PROC(INT,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t350,(A68_INT ),(A68_INT ,void *));
typedef struct A68t350  A68_350 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t351,(A68_INT ,struct A68t342 ),(A68_INT ,struct A68t342 ,void *));
typedef struct A68t351  A68_351 ;    /* PROC(INT,MODE342) VOID */

A_PROCEDURE(A68_VOID ,A68t352,(A68_INT ,A68_INT ,struct A68t342 ),(A68_INT ,A68_INT ,struct A68t342 ,void *));
typedef struct A68t352  A68_352 ;    /* PROC(INT,INT,MODE342) VOID */

A_PROCEDURE(A68_VOID ,A68t353,(struct A68t340 ),(struct A68t340 ,void *));
typedef struct A68t353  A68_353 ;    /* PROC(MODE340) VOID */

A_PROCEDURE(A68_VOID ,A68t354,(A68_INT ,struct A68t340 ),(A68_INT ,struct A68t340 ,void *));
typedef struct A68t354  A68_354 ;    /* PROC(INT,MODE340) VOID */

A_PROCEDURE(A68_VOID ,A68t355,(struct A68t342 ,struct A68t340 ),(struct A68t342 ,struct A68t340 ,void *));
typedef struct A68t355  A68_355 ;    /* PROC(MODE342,MODE340) VOID */

A_PROCEDURE(A68_VOID ,A68t356,(struct A68t340 ,struct A68t338 *,struct A68t338 *),(struct A68t340 ,struct A68t338 *,struct A68t338 *,void *));
typedef struct A68t356  A68_356 ;    /* PROC(MODE340,REF MODE338,REF MODE338) VOID */

A_PROCEDURE(A68_VOID ,A68t357,(struct A68t340 ,A68_INT ),(struct A68t340 ,A68_INT ,void *));
typedef struct A68t357  A68_357 ;    /* PROC(MODE340,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t358,(A68_INT ,struct A68t36 ,A68_VC *),(A68_INT ,struct A68t36 ,A68_VC *,void *));
typedef struct A68t358  A68_358 ;    /* PROC(INT,MODE36) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t359,(A68_INT ,struct A68t36 ),(A68_INT ,struct A68t36 ,void *));
typedef struct A68t359  A68_359 ;    /* PROC(INT,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t360,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t360  A68_360 ;    /* PROC(REF MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t361,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t361  A68_361 ;    /* PROC(INT,INT) REF MODE26 */
struct A68t363 ;

A_PROCEDURE(A68_VOID ,A68t362,(A68_INT ,struct A68t363 *),(A68_INT ,struct A68t363 *,void *));
typedef struct A68t362  A68_362 ;    /* PROC(INT) MODE363 */
struct A68t363{
A68_INT  Lasttime;
A_PAD_INT(PAD_127)
A68_INT  Interrupted;
A_PAD_INT(PAD_128)
};
typedef struct A68t363  A68_363 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t364,(struct A68t336 ,struct A68t336 ,struct A68t36 ),(struct A68t336 ,struct A68t336 ,struct A68t36 ,void *));
typedef struct A68t364  A68_364 ;    /* PROC(MODE336,MODE336,MODE36) VOID */
struct A68t366 ;

A_PROCEDURE(A68_VOID ,A68t365,(struct A68t366 *),(struct A68t366 *,void *));
typedef struct A68t365  A68_365 ;    /* PROC MODE366 */
struct A68t366{
A68_INT  Codesize;
A_PAD_INT(PAD_129)
A68_INT  Datasize;
A_PAD_INT(PAD_130)
A68_INT  Dynamicstacksize;
A_PAD_INT(PAD_131)
A68_INT  Staticstacksize;
A_PAD_INT(PAD_132)
};
typedef struct A68t366  A68_366 ;    /* STRUCT(INT,INT,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t367,(A68_INT ,A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t367  A68_367 ;    /* PROC(INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t368,(struct A68t32 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t32 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t368  A68_368 ;    /* PROC(MODE32,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t369,(struct A68t32 ,struct A68t290 ),(struct A68t32 ,struct A68t290 ,void *));
typedef struct A68t369  A68_369 ;    /* PROC(REF MODE32,MODE290) VOID */

A_PROCEDURE(A68_VOID ,A68t370,(struct A68t32 ,A68_INT ,struct A68t290 ,A68_INT ,A68_INT ,A68_INT ),(struct A68t32 ,A68_INT ,struct A68t290 ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t370  A68_370 ;    /* PROC(MODE32,INT,MODE290,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t371,(struct A68t32 ,struct A68t32 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t32 ,struct A68t32 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t371  A68_371 ;    /* PROC(MODE32,MODE32,INT,INT,INT,INT) VOID */
struct A68t373 ;

A_PROCEDURE(A68_VOID ,A68t372,(struct A68t373 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t373 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t372  A68_372 ;    /* PROC(MODE373,INT,INT,INT,INT) VOID */
struct A68t381{
A68_INT  Svvoid;
A_PAD_INT(PAD_133)
};
typedef struct A68t381  A68_381 ;    /* STRUCT(INT)  */
struct A68t382{
A68_INT  Svnull;
A_PAD_INT(PAD_134)
};
typedef struct A68t382  A68_382 ;    /* STRUCT(INT)  */
struct A68t373 { A68_INT mode; union {
struct A68t374 * mode1;
struct A68t375 * mode2;
struct A68t376 * mode3;
struct A68t377 * mode4;
struct A68t378 * mode5;
struct A68t379 * mode6;
struct A68t380 * mode7;
struct A68t381  mode8;
struct A68t382  mode9;
} data; };
typedef struct A68t373  A68_373 ;    /* UNION(REF MODE374,REF MODE375,REF MODE376,REF MODE377,REF MODE378,REF MODE379,REF MODE380,MODE381,MODE382)  */
struct A68t374{
struct A68t290  Type;
};
typedef struct A68t374  A68_374 ;    /* STRUCT(MODE290)  */
struct A68t375{
struct A68t293 * Type;
A68_INT  Value;
A_PAD_INT(PAD_135)
};
typedef struct A68t375  A68_375 ;    /* STRUCT(REF MODE293,INT)  */
struct A68t376{
struct A68t294 * Type;
A68_CHAR  Value;
A_PAD_CHAR(PAD_136)
};
typedef struct A68t376  A68_376 ;    /* STRUCT(REF MODE294,CHAR)  */
struct A68t377{
struct A68t296 * Type;
A68_VC  Value;
};
typedef struct A68t377  A68_377 ;    /* STRUCT(REF MODE296,REF MODE26)  */
struct A68t378{
struct A68t292 * Type;
A68_INT  Tag;
A_PAD_INT(PAD_137)
struct A68t373  Assoc;
};
typedef struct A68t378  A68_378 ;    /* STRUCT(REF MODE292,INT,MODE373)  */
struct A68t379{
struct A68t373  Head;
struct A68t379 * Tail;
};
typedef struct A68t379  A68_379 ;    /* STRUCT(MODE373,REF MODE379)  */
struct A68t380{
struct A68t373  From;
struct A68t373  To;
};
typedef struct A68t380  A68_380 ;    /* STRUCT(MODE373,MODE373)  */

A_PROCEDURE(A68_VOID ,A68t383,(struct A68t373 ,struct A68t290 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t373 ,struct A68t290 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t383  A68_383 ;    /* PROC(MODE373,MODE290,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t384,(A68_INT ,A68_VC ,struct A68t305 *),(A68_INT ,A68_VC ,struct A68t305 *,void *));
typedef struct A68t384  A68_384 ;    /* PROC(INT,REF MODE26) MODE305 */

A_PROCEDURE(A68_VOID ,A68t385,(struct A68t32 ,A68_VC ,struct A68t305 *),(struct A68t32 ,A68_VC ,struct A68t305 *,void *));
typedef struct A68t385  A68_385 ;    /* PROC(MODE32,MODE26) MODE305 */

A_PROCEDURE(struct A68t124 *,A68t386,(A68_INT ),(A68_INT ,void *));
typedef struct A68t386  A68_386 ;    /* PROC(INT) REF MODE124 */

A_PROCEDURE(A68_INT ,A68t387,(struct A68t123 ,struct A68t97 ),(struct A68t123 ,struct A68t97 ,void *));
typedef struct A68t387  A68_387 ;    /* PROC(MODE123,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t388,(struct A68t123 ),(struct A68t123 ,void *));
typedef struct A68t388  A68_388 ;    /* PROC(MODE123) INT */

A_PROCEDURE(A68_VOID ,A68t389,(struct A68t123 ,struct A68t123 *),(struct A68t123 ,struct A68t123 *,void *));
typedef struct A68t389  A68_389 ;    /* PROC(MODE123) MODE123 */

A_PROCEDURE(struct A68t120 *,A68t390,(struct A68t246 ),(struct A68t246 ,void *));
typedef struct A68t390  A68_390 ;    /* PROC(MODE246) REF MODE120 */

A_PROCEDURE(struct A68t136 *,A68t391,(struct A68t246 ),(struct A68t246 ,void *));
typedef struct A68t391  A68_391 ;    /* PROC(MODE246) REF MODE136 */

A_PROCEDURE(struct A68t154 *,A68t392,(struct A68t246 ),(struct A68t246 ,void *));
typedef struct A68t392  A68_392 ;    /* PROC(MODE246) REF MODE154 */

A_PROCEDURE(struct A68t160 *,A68t393,(struct A68t246 ),(struct A68t246 ,void *));
typedef struct A68t393  A68_393 ;    /* PROC(MODE246) REF MODE160 */

A_PROCEDURE(struct A68t237 *,A68t394,(struct A68t246 ),(struct A68t246 ,void *));
typedef struct A68t394  A68_394 ;    /* PROC(MODE246) REF MODE237 */

A_PROCEDURE(A68_INT ,A68t395,(struct A68t121 *,struct A68t241 ),(struct A68t121 *,struct A68t241 ,void *));
typedef struct A68t395  A68_395 ;    /* PROC(REF MODE121,REF MODE241) INT */

A_PROCEDURE(A68_INT ,A68t396,(struct A68t121 *,struct A68t242 ),(struct A68t121 *,struct A68t242 ,void *));
typedef struct A68t396  A68_396 ;    /* PROC(REF MODE121,REF MODE242) INT */

A_PROCEDURE(A68_INT ,A68t397,(struct A68t121 *,struct A68t243 ),(struct A68t121 *,struct A68t243 ,void *));
typedef struct A68t397  A68_397 ;    /* PROC(REF MODE121,REF MODE243) INT */

A_PROCEDURE(A68_INT ,A68t398,(struct A68t121 *,struct A68t244 ),(struct A68t121 *,struct A68t244 ,void *));
typedef struct A68t398  A68_398 ;    /* PROC(REF MODE121,REF MODE244) INT */

A_PROCEDURE(A68_INT ,A68t399,(struct A68t121 *,struct A68t245 ),(struct A68t121 *,struct A68t245 ,void *));
typedef struct A68t399  A68_399 ;    /* PROC(REF MODE121,REF MODE245) INT */

A_PROCEDURE(struct A68t120 *,A68t400,(struct A68t115 ,struct A68t250 *,struct A68t240 *),(struct A68t115 ,struct A68t250 *,struct A68t240 *,void *));
typedef struct A68t400  A68_400 ;    /* PROC(MODE115,REF MODE250,REF MODE240) REF MODE120 */

A_PROCEDURE(struct A68t136 *,A68t401,(struct A68t127 ,struct A68t250 *,struct A68t240 *),(struct A68t127 ,struct A68t250 *,struct A68t240 *,void *));
typedef struct A68t401  A68_401 ;    /* PROC(MODE127,REF MODE250,REF MODE240) REF MODE136 */

A_PROCEDURE(struct A68t154 *,A68t402,(struct A68t140 ,struct A68t250 *,struct A68t240 *),(struct A68t140 ,struct A68t250 *,struct A68t240 *,void *));
typedef struct A68t402  A68_402 ;    /* PROC(MODE140,REF MODE250,REF MODE240) REF MODE154 */

A_PROCEDURE(struct A68t160 *,A68t403,(struct A68t155 ,struct A68t250 *,struct A68t240 *),(struct A68t155 ,struct A68t250 *,struct A68t240 *,void *));
typedef struct A68t403  A68_403 ;    /* PROC(MODE155,REF MODE250,REF MODE240) REF MODE160 */

A_PROCEDURE(struct A68t237 *,A68t404,(struct A68t192 ,struct A68t250 *,struct A68t240 *),(struct A68t192 ,struct A68t250 *,struct A68t240 *,void *));
typedef struct A68t404  A68_404 ;    /* PROC(MODE192,REF MODE250,REF MODE240) REF MODE237 */

A_PROCEDURE(struct A68t143 *,A68t405,(struct A68t237 *),(struct A68t237 *,void *));
typedef struct A68t405  A68_405 ;    /* PROC(REF MODE237) REF MODE143 */

A_PROCEDURE(A68_VOID ,A68t406,(struct A68t142 *,struct A68t123 *),(struct A68t142 *,struct A68t123 *,void *));
typedef struct A68t406  A68_406 ;    /* PROC(REF MODE142) MODE123 */

A_PROCEDURE(A68_VOID ,A68t407,(struct A68t139 ,struct A68t240 *,struct A68t123 *),(struct A68t139 ,struct A68t240 *,struct A68t123 *,void *));
typedef struct A68t407  A68_407 ;    /* PROC(MODE139,REF MODE240) MODE123 */

A_PROCEDURE(struct A68t237 *,A68t408,(struct A68t237 *,struct A68t240 *,struct A68t240 *),(struct A68t237 *,struct A68t240 *,struct A68t240 *,void *));
typedef struct A68t408  A68_408 ;    /* PROC(REF MODE237,REF MODE240,REF MODE240) REF MODE237 */

A_PROCEDURE(A68_VOID ,A68t409,(struct A68t202 *,struct A68t237 *,struct A68t139 *),(struct A68t202 *,struct A68t237 *,struct A68t139 *,void *));
typedef struct A68t409  A68_409 ;    /* PROC(REF MODE202,REF MODE237) MODE139 */

A_PROCEDURE(A68_INT ,A68t410,(struct A68t202 *),(struct A68t202 *,void *));
typedef struct A68t410  A68_410 ;    /* PROC(REF MODE202) INT */

A_PROCEDURE(A68_INT ,A68t411,(struct A68t202 *,A68_INT ),(struct A68t202 *,A68_INT ,void *));
typedef struct A68t411  A68_411 ;    /* PROC(REF MODE202,INT) INT */

A_PROCEDURE(A68_VOID ,A68t412,(struct A68t161 ,struct A68t237 *,struct A68t240 *,struct A68t139 *),(struct A68t161 ,struct A68t237 *,struct A68t240 *,struct A68t139 *,void *));
typedef struct A68t412  A68_412 ;    /* PROC(MODE161,REF MODE237,REF MODE240) MODE139 */

A_PROCEDURE(A68_VOID ,A68t413,(struct A68t139 ,struct A68t240 *,struct A68t139 *),(struct A68t139 ,struct A68t240 *,struct A68t139 *,void *));
typedef struct A68t413  A68_413 ;    /* PROC(MODE139,REF MODE240) MODE139 */

A_PROCEDURE(A68_BOOL ,A68t414,(struct A68t139 ,struct A68t139 ,struct A68t240 *,struct A68t240 *,A68_BOOL ),(struct A68t139 ,struct A68t139 ,struct A68t240 *,struct A68t240 *,A68_BOOL ,void *));
typedef struct A68t414  A68_414 ;    /* PROC(MODE139,MODE139,REF MODE240,REF MODE240,BOOL) BOOL */

A_PROCEDURE(A68_INT ,A68t415,(struct A68t170 *,struct A68t240 *),(struct A68t170 *,struct A68t240 *,void *));
typedef struct A68t415  A68_415 ;    /* PROC(REF MODE170,REF MODE240) INT */

A_PROCEDURE(A68_VOID ,A68t416,(struct A68t139 ,struct A68t240 ,struct A68t250 *,struct A68t290 *),(struct A68t139 ,struct A68t240 ,struct A68t250 *,struct A68t290 *,void *));
typedef struct A68t416  A68_416 ;    /* PROC(MODE139,MODE240,REF MODE250) MODE290 */

A_PROCEDURE(A68_VOID ,A68t417,(struct A68t161 ,struct A68t240 ,struct A68t250 *,struct A68t373 *),(struct A68t161 ,struct A68t240 ,struct A68t250 *,struct A68t373 *,void *));
typedef struct A68t417  A68_417 ;    /* PROC(MODE161,MODE240,REF MODE250) MODE373 */
struct A68t418 { A68_INT mode; union {
struct A68t292 * mode1;
struct A68t293 * mode2;
struct A68t294 * mode3;
} data; };
typedef struct A68t418  A68_418 ;    /* UNION(REF MODE292,REF MODE293,REF MODE294)  */
struct A68t419{
struct A68t303 * Wire;
A68_INT  Instance;
A_PAD_INT(PAD_138)
};
typedef struct A68t419  A68_419 ;    /* STRUCT(REF MODE303,INT)  */
struct A68t420 { A68_INT mode; union {
struct A68t311  mode1;
struct A68t419  mode2;
} data; };
typedef struct A68t420  A68_420 ;    /* UNION(MODE311,MODE419)  */
struct A68t421{
struct A68t420  Node;
A68_INT  Circuit;
A_PAD_INT(PAD_139)
A68_INT  Base;
A_PAD_INT(PAD_140)
};
typedef struct A68t421  A68_421 ;    /* STRUCT(MODE420,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t422,(struct A68t373 ,struct A68t290 *),(struct A68t373 ,struct A68t290 *,void *));
typedef struct A68t422  A68_422 ;    /* PROC(MODE373) MODE290 */

A_PROCEDURE(A68_BOOL ,A68t423,(struct A68t290 ,struct A68t290 ),(struct A68t290 ,struct A68t290 ,void *));
typedef struct A68t423  A68_423 ;    /* PROC(MODE290,MODE290) BOOL */

A_PROCEDURE(A68_BOOL ,A68t424,(struct A68t373 ,struct A68t373 ),(struct A68t373 ,struct A68t373 ,void *));
typedef struct A68t424  A68_424 ;    /* PROC(MODE373,MODE373) BOOL */

A_PROCEDURE(A68_BOOL ,A68t425,(struct A68t303 ,struct A68t303 ),(struct A68t303 ,struct A68t303 ,void *));
typedef struct A68t425  A68_425 ;    /* PROC(MODE303,MODE303) BOOL */

A_PROCEDURE(A68_BOOL ,A68t426,(struct A68t311 ,struct A68t311 ),(struct A68t311 ,struct A68t311 ,void *));
typedef struct A68t426  A68_426 ;    /* PROC(MODE311,MODE311) BOOL */

A_PROCEDURE(A68_BOOL ,A68t427,(struct A68t419 ,struct A68t419 ),(struct A68t419 ,struct A68t419 ,void *));
typedef struct A68t427  A68_427 ;    /* PROC(MODE419,MODE419) BOOL */

A_PROCEDURE(A68_BOOL ,A68t428,(struct A68t420 ,struct A68t420 ),(struct A68t420 ,struct A68t420 ,void *));
typedef struct A68t428  A68_428 ;    /* PROC(MODE420,MODE420) BOOL */

A_PROCEDURE(A68_BOOL ,A68t429,(struct A68t421 ,struct A68t421 ),(struct A68t421 ,struct A68t421 ,void *));
typedef struct A68t429  A68_429 ;    /* PROC(MODE421,MODE421) BOOL */

A_PROCEDURE(struct A68t298 *,A68t430,(struct A68t298 *,struct A68t298 *),(struct A68t298 *,struct A68t298 *,void *));
typedef struct A68t430  A68_430 ;    /* PROC(REF MODE298,REF MODE298) REF MODE298 */

A_PROCEDURE(A68_VOID ,A68t431,(struct A68t307 ,struct A68t307 ,struct A68t307 *),(struct A68t307 ,struct A68t307 ,struct A68t307 *,void *));
typedef struct A68t431  A68_431 ;    /* PROC(REF MODE307,REF MODE307) REF MODE307 */

A_PROCEDURE(A68_INT ,A68t432,(A68_VC ),(A68_VC ,void *));
typedef struct A68t432  A68_432 ;    /* PROC(REF MODE26) INT */

A_PROCEDURE(struct A68t298 *,A68t433,(struct A68t290 ),(struct A68t290 ,void *));
typedef struct A68t433  A68_433 ;    /* PROC(MODE290) REF MODE298 */

A_PROCEDURE(struct A68t298 *,A68t434,(struct A68t290 ,A68_INT ,A68_INT ),(struct A68t290 ,A68_INT ,A68_INT ,void *));
typedef struct A68t434  A68_434 ;    /* PROC(MODE290,INT,INT) REF MODE298 */

A_PROCEDURE(A68_VOID ,A68t435,(struct A68t303 ,A68_INT ,A68_INT ,struct A68t303 *),(struct A68t303 ,A68_INT ,A68_INT ,struct A68t303 *,void *));
typedef struct A68t435  A68_435 ;    /* PROC(MODE303,INT,INT) MODE303 */

A_PROCEDURE(A68_VOID ,A68t436,(struct A68t304 *,A68_INT ,A68_INT ,struct A68t303 *),(struct A68t304 *,A68_INT ,A68_INT ,struct A68t303 *,void *));
typedef struct A68t436  A68_436 ;    /* PROC(REF MODE304,INT,INT) MODE303 */

A_PROCEDURE(A68_VC *,A68t437,(struct A68t373 ,struct A68t290 ),(struct A68t373 ,struct A68t290 ,void *));
typedef struct A68t437  A68_437 ;    /* PROC(MODE373,MODE290) REF REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t438,(A68_VC ,struct A68t290 ,struct A68t373 *),(A68_VC ,struct A68t290 ,struct A68t373 *,void *));
typedef struct A68t438  A68_438 ;    /* PROC(REF MODE26,MODE290) MODE373 */

A_PROCEDURE(A68_VOID ,A68t439,(struct A68t288 ),(struct A68t288 ,void *));
typedef struct A68t439  A68_439 ;    /* PROC(MODE288) VOID */

A_PROCEDURE(A68_VOID ,A68t440,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t440  A68_440 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,55,A68t441);
typedef struct A68t441  A68_441 ;    /* STRUCT 55 CHAR */

A_PROCEDURE(A68_INT ,A68t442,(struct A68t123 ,A68_VC ),(struct A68t123 ,A68_VC ,void *));
typedef struct A68t442  A68_442 ;    /* PROC(MODE123,MODE26) INT */
A_ISTRUCT(A68_CHAR ,3,A68t443);
typedef struct A68t443  A68_443 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t444);
typedef struct A68t444  A68_444 ;    /* STRUCT 3 MODE52 */

A_PROCEDURE(A68_VOID ,A68t445,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t445  A68_445 ;    /* PROC(INT,INT,INT,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t446,(struct A68t172 ,A68_VC ,struct A68t237 ,struct A68t32 ,A68_INT ,struct A68t240 ,struct A68t250 *,struct A68t36 ,struct A68t305 *),(struct A68t172 ,A68_VC ,struct A68t237 ,struct A68t32 ,A68_INT ,struct A68t240 ,struct A68t250 *,struct A68t36 ,struct A68t305 *,void *));
typedef struct A68t446  A68_446 ;    /* PROC(MODE172,REF MODE26,MODE237,MODE32,INT,MODE240,REF MODE250,MODE36) MODE305 */
A_ISTRUCT(A68_CHAR ,33,A68t447);
typedef struct A68t447  A68_447 ;    /* STRUCT 33 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t448);
typedef struct A68t448  A68_448 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t449);
typedef struct A68t449  A68_449 ;    /* STRUCT 12 CHAR */

A_PROCEDURE(A68_VOID ,A68t450,(struct A68t171 ,A68_VC ,struct A68t237 ,struct A68t32 ,A68_INT ,struct A68t240 ,struct A68t250 *,struct A68t36 ,struct A68t305 *),(struct A68t171 ,A68_VC ,struct A68t237 ,struct A68t32 ,A68_INT ,struct A68t240 ,struct A68t250 *,struct A68t36 ,struct A68t305 *,void *));
typedef struct A68t450  A68_450 ;    /* PROC(MODE171,REF MODE26,MODE237,MODE32,INT,MODE240,REF MODE250,MODE36) MODE305 */
A_ISTRUCT(A68_CHAR ,34,A68t451);
typedef struct A68t451  A68_451 ;    /* STRUCT 34 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t452);
typedef struct A68t452  A68_452 ;    /* STRUCT 15 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from kesignals --- */
/* --- End of imports from kesignals --- */


/* --- Imports from kebasics --- */
extern A68_VOID  NKDAOST_sysfault(A68_VC );
/* --- End of imports from kebasics --- */


/* --- Imports from keconv --- */
extern A68_INT  TNMATRN_formula_int(struct A68t123 ,struct A68t97 );
/* --- End of imports from keconv --- */


/* --- Imports from keamstandard --- */
extern A68_VOID  DOPASIM_translatestartfunction(A68_VC );
extern A68_VOID  ZOPASIM_translateendfunction(A68_INT ,A68_INT );
extern A68_VOID  NPPASIM_translatecompareandsetflag(A68_INT ,A68_INT ,A68_INT ,A68_INT );
#define IPPASIM_resetflag 2
/* --- End of imports from keamstandard --- */


/* --- Imports from keambasics --- */
extern A68_342  ONFASIM_indirect;
extern A68_VOID  YLFASIM_label(A68_VC ,A68_340 *);
extern A68_VOID  YFNASIM_newlabel(A68_340 *);
#define CENASIM_bitsperbyte 8
extern A68_INT  DENASIM_ws;
extern A68_INT  GENASIM_sizeunit;
extern A68_VOID  SSNASIM_amadd(void);
extern A68_VOID  QTNASIM_amtest(void);
extern A68_VOID  UTNASIM_amneq(void);
extern A68_VOID  IUNASIM_amnot(void);
extern A68_VOID  QUNASIM_ampushint(A68_INT );
extern A68_VOID  TUNASIM_amdrop(A68_INT );
extern A68_VOID  WUNASIM_amlocal(A68_INT );
extern A68_VOID  AVNASIM_amglobal(A68_INT ,struct A68t342 );
extern A68_VOID  FVNASIM_amstore(A68_INT ,struct A68t342 );
extern A68_VOID  LVNASIM_ambstring(A68_INT ,A68_INT ,struct A68t342 );
extern A68_VOID  QVNASIM_ambstore(A68_INT ,struct A68t342 );
extern A68_VOID  BWNASIM_amstou(void);
extern A68_VOID  EWNASIM_amjump(struct A68t340 );
extern A68_VOID  IWNASIM_amjumpno(A68_INT ,struct A68t340 );
extern A68_VOID  NWNASIM_amlabel(A68_INT ,struct A68t340 );
extern A68_VOID  BXNASIM_amcall(A68_INT ,struct A68t340 );
/* --- End of imports from keambasics --- */


/* --- Imports from kesymbols --- */
extern A68_VOID  VGCASIM_lookuptype(A68_INT ,A68_290 *);
extern A68_INT  YGCASIM_lookuptypesize(A68_INT );
#define IHCASIM_combinatorial 0X1U
/* --- End of imports from kesymbols --- */


/* --- Imports from basics --- */
/* --- End of imports from basics --- */


/* --- Imports from assmodes --- */
/* --- End of imports from assmodes --- */


/* --- Imports from messageproc --- */
extern A68_BOOL  TKAAOSI_error_msg(struct A68t106 );
extern A68_VOID  ONAAOSI_translate_msg(struct A68t92 ,struct A68t46 ,A68_95 *);
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VOID  UJBAOSL_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void NYNASIM(void);   /* kesignals */
extern void JSAASIM(void);   /* kebasics */
extern void KUBASIM(void);   /* keconv */
extern void HYOASIM(void);   /* keamstandard */
extern void XDNASIM(void);   /* keambasics */
extern void TCCASIM(void);   /* kesymbols */
extern void JSCAOST(void);   /* basics */
extern void BAAATRN(void);   /* assmodes */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_441   BEXASIM = {"$Id: keamtrim.a68,v 34.2 1995/03/29 13:04:40 ella Exp $"}; 
A_GISVEC(A68_VC ,CEXASIM,BEXASIM,55)
static A68_443   OEXASIM = {":  "}; 
A_GISVEC(A68_VC ,PEXASIM,OEXASIM,3)
static A68_447   QFXASIM = {"translate trim: wrong input count"}; 
A_GISVEC(A68_VC ,RFXASIM,QFXASIM,33)
static A68_447   WFXASIM = {"translate trim: wrong output sort"}; 
A_GISVEC(A68_VC ,XFXASIM,WFXASIM,33)
static A68_448   CGXASIM = {"translate trim"}; 
A_GISVEC(A68_VC ,DGXASIM,CGXASIM,14)
static A68_449   TGXASIM = {"Genericquery"}; 
A_GISVEC(A68_VC ,UGXASIM,TGXASIM,12)
static A68_451   HHXASIM = {"translate index: wrong input count"}; 
A_GISVEC(A68_VC ,IHXASIM,HHXASIM,34)
static A68_451   NHXASIM = {"translate index: wrong output sort"}; 
A_GISVEC(A68_VC ,OHXASIM,NHXASIM,34)
static A68_452   THXASIM = {"translate index"}; 
A_GISVEC(A68_VC ,UHXASIM,THXASIM,15)
static A68_449   DIXASIM = {"Genericquery"}; 
A_GISVEC(A68_VC ,EIXASIM,DIXASIM,12)
typedef struct   /* env of non-global proc */
{
A68_VC  Where;
} KEXASIM_anonymous;

A_STATIC A68_INT  FEXASIM_f_int(A68_123  F, A68_VC  Where);

A_STATIC A68_VOID  JEXASIM_anonymous(A68_92  No, A68_46  Params, void *NonLocals);

A_STATIC A68_VOID  FFXASIM_copytrimmedinput(A68_INT  Inputtype, A68_INT  Inputpostoffset, A68_INT  Trimsize, A68_INT  Inoffset, A68_INT  Outoffset, A68_INT  Flagadjust, A68_INT  D);

A68_VOID  PFXASIM_translatetrim(A68_172  Body, A68_VC  Name, A68_237  Declaration, A68_32  Inputtypes, A68_INT  Outputtype, A68_240  Environ, A68_250 * Closure, A68_36  Flt, A68_305  *ReturnedValue);

A68_VOID  GHXASIM_translateindex(A68_171  Body, A68_VC  Name, A68_237  Declaration, A68_32  Inputtypes, A68_INT  Outputtype, A68_240  Environ, A68_250 * Closure, A68_36  Flt, A68_305  *ReturnedValue);

A_STATIC A68_VOID  JEXASIM_anonymous(A68_92  No, A68_46  Params, void *NonLocals)
#define NL(x) (((KEXASIM_anonymous *)NonLocals)->x)
{ 
A68_106  LEXASIM;  /* OPERATORS - mode -> union mode */
A68_444  MEXASIM;  /* collateral clause result */
A68_52  NEXASIM;  /* OPERATORS - mode -> union mode */
A68_52  QEXASIM;  /* OPERATORS - mode -> union mode */
A68_VC  REXASIM;  /* YIELD */
A68_95  SEXASIM;  /* avoid structure result */
A68_52  TEXASIM;  /* OPERATORS - mode -> union mode */
A68_VC  UEXASIM;  /* YIELD */
A68_85  VEXASIM;  /* OPERATORS - istruct -> vector */
A68_VC  WEXASIM;  /* avoid structure result */
 /* line 75: */
 /* line 76: */
if ( TKAAOSI_error_msg(A_UNITE(LEXASIM,mode1,1,No)) )
{ 
MEXASIM.data[0] = A_UNITE(NEXASIM,mode7,7,NL(Where));
 /* line 77: */
REXASIM = PEXASIM ;
MEXASIM.data[1] = A_UNITE(QEXASIM,mode7,7,REXASIM);
ONAAOSI_translate_msg( No, Params, &SEXASIM );
UEXASIM = SEXASIM.Text ;
MEXASIM.data[2] = A_UNITE(TEXASIM,mode7,7,UEXASIM);
 /* line 78: */
UJBAOSL_oneline( A_HISVEC(VEXASIM,MEXASIM,3,A68_52 ), &WEXASIM );
NKDAOST_sysfault(WEXASIM);
} 
return;
} 
#undef NL

A_STATIC A68_INT  FEXASIM_f_int(A68_123  F, A68_VC  Where)
{ 
A68_97  IEXASIM_anonymous;   /* proc value of non-global proc */
A68_INT  XEXASIM;  /* clause result */
A_PROC_ENTRY(f_int);
 /* line 74: */
A_CLOSURE( IEXASIM_anonymous, JEXASIM_anonymous, KEXASIM_anonymous );
(( KEXASIM_anonymous * ) ( IEXASIM_anonymous.nonlocals )) -> Where = Where;
XEXASIM = TNMATRN_formula_int(F, IEXASIM_anonymous);
A_PROC_EXIT(f_int);
return( XEXASIM );
} 
#undef NL
 /* line 90: */
 /* line 91: */

A_STATIC A68_VOID  FFXASIM_copytrimmedinput(A68_INT  Inputtype, A68_INT  Inputpostoffset, A68_INT  Trimsize, A68_INT  Inoffset, A68_INT  Outoffset, A68_INT  Flagadjust, A68_INT  D)
{ 
A68_INT  GFXASIM_dd;
A_PROC_ENTRY(copytrimmedinput);
 /* line 92: */
 /* line 94: */
{ 
WUNASIM_amlocal((D-1));
 /* line 95: */
QUNASIM_ampushint((Outoffset+GENASIM_sizeunit));
 /* line 96: */
SSNASIM_amadd();
 /* line 97: */
GFXASIM_dd = (D+1);
 /* line 102: */
QUNASIM_ampushint((Inputpostoffset*CENASIM_bitsperbyte));
 /* line 104: */
GFXASIM_dd+=1;
 /* line 106: */
WUNASIM_amlocal((GFXASIM_dd-1));
 /* line 107: */
QUNASIM_ampushint(Inoffset);
 /* line 108: */
SSNASIM_amadd();
 /* line 109: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 112: */
QUNASIM_ampushint(GENASIM_sizeunit);
 /* line 113: */
SSNASIM_amadd();
 /* line 115: */
 /* line 116: */
 /* line 117: */
LVNASIM_ambstring((CENASIM_bitsperbyte*Trimsize), ((YGCASIM_lookuptypesize(Inputtype)-GENASIM_sizeunit)*CENASIM_bitsperbyte), ONFASIM_indirect);
 /* line 118: */
NPPASIM_translatecompareandsetflag(Trimsize, 1, Flagadjust, (D+2));
 /* line 119: */
 /* line 122: */
QVNASIM_ambstore((CENASIM_bitsperbyte*Trimsize), ONFASIM_indirect);
} 
A_PROC_EXIT(copytrimmedinput);
return;
} 
#undef NL
 /* line 133: */
 /* line 134: */
 /* line 135: */

A68_VOID  PFXASIM_translatetrim(A68_172  Body, A68_VC  Name, A68_237  Declaration, A68_32  Inputtypes, A68_INT  Outputtype, A68_240  Environ, A68_250 * Closure, A68_36  Flt, A68_305  *ReturnedValue)
{ 
A68_290  SFXASIM;  /* avoid structure result */
A68_290  TFXASIM;  /* united object - for case conformity */
A68_296 * UFXASIM_s;
A68_BOOL  VFXASIM;  /* clause result */
A68_BOOL  YFXASIM_bitstring;
A68_INT  ZFXASIM_inputoffset;
A68_INT  AGXASIM_outputoffset;
A68_INT  BGXASIM_fixedpartsize;
A68_VC  EGXASIM_tt;
A68_INT  FGXASIM_lwb;
A68_INT  GGXASIM_upb;
A68_340  HGXASIM;  /* avoid structure result */
A68_340  IGXASIM_outputquery;
A68_340  JGXASIM;  /* avoid structure result */
A68_340  KGXASIM_end;
A68_340  LGXASIM;  /* avoid structure result */
A68_340  MGXASIM_samelabel;
A68_INT  NGXASIM_slicebitsize;
A68_INT  OGXASIM;  /* YIELD */
A68_340  PGXASIM;  /* avoid structure result */
A68_340  QGXASIM_samelabel;
A68_INT  RGXASIM;  /* YIELD */
A68_INT  SGXASIM_datasize;
A68_340  VGXASIM;  /* avoid structure result */
A68_305  WGXASIM;  /* collateral clause result */
A68_305  XGXASIM;  /* clause result */
A_PROC_ENTRY(translatetrim);
 /* line 136: */
 /* line 137: */
{ 
 /* line 138: */
if ( (Inputtypes.upb!=1) )
{ 
 /* line 139: */
NKDAOST_sysfault(RFXASIM);
} 
 /* line 140: */
 /* line 141: */
 /* line 142: */
VGCASIM_lookuptype( Outputtype, &SFXASIM );
TFXASIM = SFXASIM ;
switch ( TFXASIM.mode )
{ 
case 5: /* REF STRUCT(INT,MODE294)  */
UFXASIM_s = (TFXASIM.data.mode5);
 /* line 143: */
VFXASIM = ((*(&((&(UFXASIM_s->T))->Char))).upb==2);
break;
default: 
NKDAOST_sysfault(XFXASIM);
 /* line 144: */
VFXASIM = A68_FALSE;
break;
} 
YFXASIM_bitstring = VFXASIM;
 /* line 146: */
ZFXASIM_inputoffset = (GENASIM_sizeunit+DENASIM_ws);
 /* line 147: */
AGXASIM_outputoffset = (ZFXASIM_inputoffset+DENASIM_ws);
 /* line 148: */
BGXASIM_fixedpartsize = (AGXASIM_outputoffset+YGCASIM_lookuptypesize(Outputtype));
 /* line 150: */
EGXASIM_tt = DGXASIM;
 /* line 151: */
FGXASIM_lwb = FEXASIM_f_int(Body.Range.Lwb, EGXASIM_tt);
 /* line 152: */
GGXASIM_upb = FEXASIM_f_int(Body.Range.Upb, EGXASIM_tt);
 /* line 154: */
YFNASIM_newlabel(  &HGXASIM );
IGXASIM_outputquery = HGXASIM;
 /* line 155: */
YFNASIM_newlabel(  &JGXASIM );
KGXASIM_end = JGXASIM;
 /* line 157: */
DOPASIM_translatestartfunction(Name);
 /* line 161: */
WUNASIM_amlocal(0);
 /* line 162: */
QUNASIM_ampushint(ZFXASIM_inputoffset);
 /* line 163: */
SSNASIM_amadd();
 /* line 164: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 165: */
AVNASIM_amglobal(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 166: */
QTNASIM_amtest();
 /* line 167: */
IWNASIM_amjumpno(0, IGXASIM_outputquery);
 /* line 178: */
WUNASIM_amlocal(0);
 /* line 179: */
QUNASIM_ampushint(AGXASIM_outputoffset);
 /* line 180: */
SSNASIM_amadd();
 /* line 181: */
 /* line 182: */
if ( YFXASIM_bitstring )
{ 
WUNASIM_amlocal(0);
 /* line 183: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 184: */
QTNASIM_amtest();
 /* line 185: */
IUNASIM_amnot();
 /* line 186: */
YFNASIM_newlabel(  &LGXASIM );
MGXASIM_samelabel = LGXASIM;
 /* line 187: */
IWNASIM_amjumpno(0, MGXASIM_samelabel);
 /* line 188: */
WUNASIM_amlocal(1);
 /* line 189: */
QUNASIM_ampushint(0);
 /* line 190: */
FVNASIM_amstore(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 191: */
 /* line 192: */
NWNASIM_amlabel(2, MGXASIM_samelabel);
} 
 /* line 193: */
QUNASIM_ampushint(1);
 /* line 194: */
FVNASIM_amstore(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 197: */
 /* line 198: */
if ( YFXASIM_bitstring )
{ 
NGXASIM_slicebitsize = ((GGXASIM_upb-FGXASIM_lwb)+1);
 /* line 201: */
WUNASIM_amlocal(0);
 /* line 202: */
QUNASIM_ampushint((AGXASIM_outputoffset+GENASIM_sizeunit));
 /* line 203: */
SSNASIM_amadd();
 /* line 206: */
QUNASIM_ampushint((FGXASIM_lwb-1));
 /* line 207: */
WUNASIM_amlocal(2);
 /* line 208: */
QUNASIM_ampushint(ZFXASIM_inputoffset);
 /* line 209: */
SSNASIM_amadd();
 /* line 210: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 211: */
QUNASIM_ampushint(GENASIM_sizeunit);
 /* line 212: */
SSNASIM_amadd();
 /* line 213: */
 /* line 214: */
 /* line 215: */
OGXASIM = 1 ;
LVNASIM_ambstring(NGXASIM_slicebitsize, ((YGCASIM_lookuptypesize(A_VINDEX(Inputtypes,OGXASIM))-GENASIM_sizeunit)*CENASIM_bitsperbyte), ONFASIM_indirect);
 /* line 219: */
YFNASIM_newlabel(  &PGXASIM );
QGXASIM_samelabel = PGXASIM;
 /* line 220: */
QUNASIM_ampushint(0);
 /* line 221: */
WUNASIM_amlocal(2);
 /* line 222: */
LVNASIM_ambstring(NGXASIM_slicebitsize, NGXASIM_slicebitsize, ONFASIM_indirect);
 /* line 224: */
WUNASIM_amlocal(1);
 /* line 225: */
UTNASIM_amneq();
 /* line 226: */
IWNASIM_amjumpno(0, QGXASIM_samelabel);
 /* line 227: */
WUNASIM_amlocal(2);
 /* line 228: */
QUNASIM_ampushint(0);
 /* line 229: */
FVNASIM_amstore(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 230: */
NWNASIM_amlabel(3, QGXASIM_samelabel);
 /* line 231: */
 /* line 232: */
 /* line 233: */
QVNASIM_ambstore(NGXASIM_slicebitsize, ONFASIM_indirect);
} 
else
{ 
 /* line 234: */
 /* line 235: */
 /* line 236: */
RGXASIM = 1 ;
FFXASIM_copytrimmedinput(A_VINDEX(Inputtypes,RGXASIM), (FGXASIM_lwb-1), ((GGXASIM_upb-FGXASIM_lwb)+1), ZFXASIM_inputoffset, AGXASIM_outputoffset, IPPASIM_resetflag, 1);
} 
 /* line 237: */
EWNASIM_amjump(KGXASIM_end);
 /* line 240: */
NWNASIM_amlabel(1, IGXASIM_outputquery);
 /* line 241: */
SGXASIM_datasize = YGCASIM_lookuptypesize(Outputtype);
 /* line 242: */
QUNASIM_ampushint(AGXASIM_outputoffset);
 /* line 243: */
QUNASIM_ampushint(SGXASIM_datasize);
 /* line 244: */
YLFASIM_label( UGXASIM, &VGXASIM );
BXNASIM_amcall(3, VGXASIM);
 /* line 245: */
TUNASIM_amdrop(2);
 /* line 248: */
NWNASIM_amlabel(1, KGXASIM_end);
 /* line 249: */
ZOPASIM_translateendfunction(BGXASIM_fixedpartsize, 1);
 /* line 251: */
WGXASIM.Size = BGXASIM_fixedpartsize;
WGXASIM.Offset = AGXASIM_outputoffset;
 /* line 252: */
WGXASIM.Sort = IHCASIM_combinatorial;
XGXASIM = WGXASIM;
} 
A_PROC_EXIT(translatetrim);
*ReturnedValue = (XGXASIM);
return;
} 
#undef NL
 /* line 262: */
 /* line 263: */
 /* line 264: */

A68_VOID  GHXASIM_translateindex(A68_171  Body, A68_VC  Name, A68_237  Declaration, A68_32  Inputtypes, A68_INT  Outputtype, A68_240  Environ, A68_250 * Closure, A68_36  Flt, A68_305  *ReturnedValue)
{ 
A68_290  JHXASIM;  /* avoid structure result */
A68_290  KHXASIM;  /* united object - for case conformity */
A68_294 * LHXASIM_c;
A68_BOOL  MHXASIM;  /* clause result */
A68_BOOL  PHXASIM_bitstring;
A68_INT  QHXASIM_inputoffset;
A68_INT  RHXASIM_outputoffset;
A68_INT  SHXASIM_fixedpartsize;
A68_INT  VHXASIM_ix;
A68_340  WHXASIM;  /* avoid structure result */
A68_340  XHXASIM_outputquery;
A68_340  YHXASIM;  /* avoid structure result */
A68_340  ZHXASIM_end;
A68_INT  AIXASIM;  /* YIELD */
A68_INT  BIXASIM;  /* YIELD */
A68_INT  CIXASIM_datasize;
A68_340  FIXASIM;  /* avoid structure result */
A68_305  GIXASIM;  /* collateral clause result */
A68_305  HIXASIM;  /* clause result */
A_PROC_ENTRY(translateindex);
 /* line 265: */
 /* line 266: */
{ 
 /* line 267: */
if ( (Inputtypes.upb!=1) )
{ 
 /* line 268: */
NKDAOST_sysfault(IHXASIM);
} 
 /* line 269: */
 /* line 270: */
 /* line 271: */
VGCASIM_lookuptype( Outputtype, &JHXASIM );
KHXASIM = JHXASIM ;
switch ( KHXASIM.mode )
{ 
case 3: /* REF STRUCT(REF MODE26,REF MODE26)  */
LHXASIM_c = (KHXASIM.data.mode3);
 /* line 272: */
MHXASIM = ((*(&(LHXASIM_c->Char))).upb==2);
break;
default: 
NKDAOST_sysfault(OHXASIM);
 /* line 273: */
MHXASIM = A68_FALSE;
break;
} 
PHXASIM_bitstring = MHXASIM;
 /* line 275: */
QHXASIM_inputoffset = (GENASIM_sizeunit+DENASIM_ws);
 /* line 276: */
RHXASIM_outputoffset = (QHXASIM_inputoffset+DENASIM_ws);
 /* line 277: */
SHXASIM_fixedpartsize = (RHXASIM_outputoffset+YGCASIM_lookuptypesize(Outputtype));
 /* line 279: */
VHXASIM_ix = FEXASIM_f_int(Body.Index, UHXASIM);
 /* line 281: */
YFNASIM_newlabel(  &WHXASIM );
XHXASIM_outputquery = WHXASIM;
 /* line 282: */
YFNASIM_newlabel(  &YHXASIM );
ZHXASIM_end = YHXASIM;
 /* line 284: */
DOPASIM_translatestartfunction(Name);
 /* line 288: */
WUNASIM_amlocal(0);
 /* line 289: */
QUNASIM_ampushint(QHXASIM_inputoffset);
 /* line 290: */
SSNASIM_amadd();
 /* line 291: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 292: */
AVNASIM_amglobal(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 293: */
QTNASIM_amtest();
 /* line 294: */
IWNASIM_amjumpno(0, XHXASIM_outputquery);
 /* line 298: */
 /* line 300: */
if ( PHXASIM_bitstring )
{ 
WUNASIM_amlocal(0);
 /* line 301: */
QUNASIM_ampushint(RHXASIM_outputoffset);
 /* line 302: */
SSNASIM_amadd();
 /* line 305: */
QUNASIM_ampushint((VHXASIM_ix-1));
 /* line 306: */
WUNASIM_amlocal(2);
 /* line 307: */
QUNASIM_ampushint(QHXASIM_inputoffset);
 /* line 308: */
SSNASIM_amadd();
 /* line 309: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 310: */
QUNASIM_ampushint(GENASIM_sizeunit);
 /* line 311: */
SSNASIM_amadd();
 /* line 312: */
 /* line 313: */
 /* line 314: */
AIXASIM = 1 ;
LVNASIM_ambstring(1, ((YGCASIM_lookuptypesize(A_VINDEX(Inputtypes,AIXASIM))-GENASIM_sizeunit)*CENASIM_bitsperbyte), ONFASIM_indirect);
 /* line 317: */
BWNASIM_amstou();
 /* line 318: */
QUNASIM_ampushint(1);
 /* line 319: */
SSNASIM_amadd();
 /* line 322: */
NPPASIM_translatecompareandsetflag(GENASIM_sizeunit, 1, IPPASIM_resetflag, 3);
 /* line 323: */
 /* line 325: */
 /* line 327: */
FVNASIM_amstore(GENASIM_sizeunit, ONFASIM_indirect);
} 
else
{ 
WUNASIM_amlocal(0);
 /* line 328: */
QUNASIM_ampushint(RHXASIM_outputoffset);
 /* line 329: */
SSNASIM_amadd();
 /* line 332: */
QUNASIM_ampushint(((VHXASIM_ix-1)*CENASIM_bitsperbyte));
 /* line 333: */
WUNASIM_amlocal(2);
 /* line 334: */
QUNASIM_ampushint(QHXASIM_inputoffset);
 /* line 335: */
SSNASIM_amadd();
 /* line 336: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 337: */
QUNASIM_ampushint(GENASIM_sizeunit);
 /* line 338: */
SSNASIM_amadd();
 /* line 339: */
 /* line 340: */
 /* line 341: */
BIXASIM = 1 ;
LVNASIM_ambstring(CENASIM_bitsperbyte, ((YGCASIM_lookuptypesize(A_VINDEX(Inputtypes,BIXASIM))-GENASIM_sizeunit)*CENASIM_bitsperbyte), ONFASIM_indirect);
 /* line 345: */
BWNASIM_amstou();
 /* line 348: */
NPPASIM_translatecompareandsetflag(GENASIM_sizeunit, 1, IPPASIM_resetflag, 3);
 /* line 349: */
 /* line 351: */
FVNASIM_amstore(GENASIM_sizeunit, ONFASIM_indirect);
} 
 /* line 352: */
EWNASIM_amjump(ZHXASIM_end);
 /* line 355: */
NWNASIM_amlabel(1, XHXASIM_outputquery);
 /* line 356: */
CIXASIM_datasize = YGCASIM_lookuptypesize(Outputtype);
 /* line 357: */
QUNASIM_ampushint(RHXASIM_outputoffset);
 /* line 358: */
QUNASIM_ampushint(CIXASIM_datasize);
 /* line 359: */
YLFASIM_label( EIXASIM, &FIXASIM );
BXNASIM_amcall(3, FIXASIM);
 /* line 360: */
TUNASIM_amdrop(2);
 /* line 363: */
NWNASIM_amlabel(1, ZHXASIM_end);
 /* line 364: */
ZOPASIM_translateendfunction(SHXASIM_fixedpartsize, 1);
 /* line 366: */
GIXASIM.Size = SHXASIM_fixedpartsize;
GIXASIM.Offset = RHXASIM_outputoffset;
 /* line 367: */
GIXASIM.Sort = IHCASIM_combinatorial;
HIXASIM = GIXASIM;
} 
A_PROC_EXIT(translateindex);
*ReturnedValue = (HIXASIM);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void YDXASIM(void)   /* initialise DECS keamtrim */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/keamtrim.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/kesignals.m","./mfiles/kebasics.m","./mfiles/keconv.m","./mfiles/keamstandard.m","./mfiles/keambasics.m","./mfiles/kesymbols.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/transform/assoc/mfiles/assmodes.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
NYNASIM();   /* USE kesignals */
JSAASIM();   /* USE kebasics */
KUBASIM();   /* USE keconv */
HYOASIM();   /* USE keamstandard */
XDNASIM();   /* USE keambasics */
TCCASIM();   /* USE kesymbols */
JSCAOST();   /* USE basics */
BAAATRN();   /* USE assmodes */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/keamtrim.a68";
A_config.translation_time = "Tue Apr  4 11:12:10 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "XDXASIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:12:10 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS keamtrim);
UEAALIB_a68config(LGAALIB_configinfo, CEXASIM);
 /* line 73: */
 /* line 89: */
 /* line 132: */
 /* line 261: */
 /* line 369: */
 /* line 371: */
 /* line 374: */
/*SKIP*/;
A_PROC_EXIT(DECS keamtrim);
} 
#undef NL
/* end of translation of ./a68files/keamtrim.a68 */
