
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
/* UNAME:STYATRN */
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

A_PROCEDURE(A68_INT ,A68t273,(struct A68t250 *),(struct A68t250 *,void *));
typedef struct A68t273  A68_273 ;    /* PROC(REF MODE250) INT */

A_PROCEDURE(struct A68t247 *,A68t274,(A68_INT ,struct A68t250 *,struct A68t97 ),(A68_INT ,struct A68t250 *,struct A68t97 ,void *));
typedef struct A68t274  A68_274 ;    /* PROC(INT,REF MODE250,MODE97) REF MODE247 */

A_PROCEDURE(struct A68t247 *,A68t275,(struct A68t250 *),(struct A68t250 *,void *));
typedef struct A68t275  A68_275 ;    /* PROC(REF MODE250) REF MODE247 */

A_PROCEDURE(struct A68t247 **,A68t276,(struct A68t246 ,struct A68t247 **,struct A68t250 *,struct A68t97 ),(struct A68t246 ,struct A68t247 **,struct A68t250 *,struct A68t97 ,void *));
typedef struct A68t276  A68_276 ;    /* PROC(MODE246,REF REF MODE247,REF MODE250,MODE97) REF REF MODE247 */

A_PROCEDURE(A68_VOID ,A68t277,(struct A68t247 **,struct A68t250 *,struct A68t97 ),(struct A68t247 **,struct A68t250 *,struct A68t97 ,void *));
typedef struct A68t277  A68_277 ;    /* PROC(REF REF MODE247,REF MODE250,MODE97) VOID */

A_PROCEDURE(struct A68t250 *,A68t278,(void),(void *));
typedef struct A68t278  A68_278 ;    /* PROC REF MODE250 */

A_PROCEDURE(A68_INT ,A68t279,(struct A68t250 *,struct A68t97 ),(struct A68t250 *,struct A68t97 ,void *));
typedef struct A68t279  A68_279 ;    /* PROC(REF MODE250,MODE97) INT */

A_PROCEDURE(struct A68t250 *,A68t280,(struct A68t250 *,struct A68t97 ),(struct A68t250 *,struct A68t97 ,void *));
typedef struct A68t280  A68_280 ;    /* PROC(REF MODE250,MODE97) REF MODE250 */

A_PROCEDURE(struct A68t124 *,A68t281,(A68_INT ),(A68_INT ,void *));
typedef struct A68t281  A68_281 ;    /* PROC(INT) REF MODE124 */

A_PROCEDURE(A68_INT ,A68t282,(struct A68t123 ,struct A68t97 ),(struct A68t123 ,struct A68t97 ,void *));
typedef struct A68t282  A68_282 ;    /* PROC(MODE123,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t283,(struct A68t123 ),(struct A68t123 ,void *));
typedef struct A68t283  A68_283 ;    /* PROC(MODE123) INT */

A_PROCEDURE(A68_VOID ,A68t284,(struct A68t123 ,struct A68t123 *),(struct A68t123 ,struct A68t123 *,void *));
typedef struct A68t284  A68_284 ;    /* PROC(MODE123) MODE123 */

A_PROCEDURE(struct A68t120 *,A68t285,(struct A68t246 ),(struct A68t246 ,void *));
typedef struct A68t285  A68_285 ;    /* PROC(MODE246) REF MODE120 */

A_PROCEDURE(struct A68t136 *,A68t286,(struct A68t246 ),(struct A68t246 ,void *));
typedef struct A68t286  A68_286 ;    /* PROC(MODE246) REF MODE136 */

A_PROCEDURE(struct A68t154 *,A68t287,(struct A68t246 ),(struct A68t246 ,void *));
typedef struct A68t287  A68_287 ;    /* PROC(MODE246) REF MODE154 */

A_PROCEDURE(struct A68t160 *,A68t288,(struct A68t246 ),(struct A68t246 ,void *));
typedef struct A68t288  A68_288 ;    /* PROC(MODE246) REF MODE160 */

A_PROCEDURE(struct A68t237 *,A68t289,(struct A68t246 ),(struct A68t246 ,void *));
typedef struct A68t289  A68_289 ;    /* PROC(MODE246) REF MODE237 */

A_PROCEDURE(A68_INT ,A68t290,(struct A68t121 *,struct A68t241 ),(struct A68t121 *,struct A68t241 ,void *));
typedef struct A68t290  A68_290 ;    /* PROC(REF MODE121,REF MODE241) INT */

A_PROCEDURE(A68_INT ,A68t291,(struct A68t121 *,struct A68t242 ),(struct A68t121 *,struct A68t242 ,void *));
typedef struct A68t291  A68_291 ;    /* PROC(REF MODE121,REF MODE242) INT */

A_PROCEDURE(A68_INT ,A68t292,(struct A68t121 *,struct A68t243 ),(struct A68t121 *,struct A68t243 ,void *));
typedef struct A68t292  A68_292 ;    /* PROC(REF MODE121,REF MODE243) INT */

A_PROCEDURE(A68_INT ,A68t293,(struct A68t121 *,struct A68t244 ),(struct A68t121 *,struct A68t244 ,void *));
typedef struct A68t293  A68_293 ;    /* PROC(REF MODE121,REF MODE244) INT */

A_PROCEDURE(A68_INT ,A68t294,(struct A68t121 *,struct A68t245 ),(struct A68t121 *,struct A68t245 ,void *));
typedef struct A68t294  A68_294 ;    /* PROC(REF MODE121,REF MODE245) INT */

A_PROCEDURE(struct A68t120 *,A68t295,(struct A68t115 ,struct A68t250 *,struct A68t240 *),(struct A68t115 ,struct A68t250 *,struct A68t240 *,void *));
typedef struct A68t295  A68_295 ;    /* PROC(MODE115,REF MODE250,REF MODE240) REF MODE120 */

A_PROCEDURE(struct A68t136 *,A68t296,(struct A68t127 ,struct A68t250 *,struct A68t240 *),(struct A68t127 ,struct A68t250 *,struct A68t240 *,void *));
typedef struct A68t296  A68_296 ;    /* PROC(MODE127,REF MODE250,REF MODE240) REF MODE136 */

A_PROCEDURE(struct A68t154 *,A68t297,(struct A68t140 ,struct A68t250 *,struct A68t240 *),(struct A68t140 ,struct A68t250 *,struct A68t240 *,void *));
typedef struct A68t297  A68_297 ;    /* PROC(MODE140,REF MODE250,REF MODE240) REF MODE154 */

A_PROCEDURE(struct A68t160 *,A68t298,(struct A68t155 ,struct A68t250 *,struct A68t240 *),(struct A68t155 ,struct A68t250 *,struct A68t240 *,void *));
typedef struct A68t298  A68_298 ;    /* PROC(MODE155,REF MODE250,REF MODE240) REF MODE160 */

A_PROCEDURE(struct A68t237 *,A68t299,(struct A68t192 ,struct A68t250 *,struct A68t240 *),(struct A68t192 ,struct A68t250 *,struct A68t240 *,void *));
typedef struct A68t299  A68_299 ;    /* PROC(MODE192,REF MODE250,REF MODE240) REF MODE237 */

A_PROCEDURE(struct A68t143 *,A68t300,(struct A68t237 *),(struct A68t237 *,void *));
typedef struct A68t300  A68_300 ;    /* PROC(REF MODE237) REF MODE143 */

A_PROCEDURE(A68_VOID ,A68t301,(struct A68t142 *,struct A68t123 *),(struct A68t142 *,struct A68t123 *,void *));
typedef struct A68t301  A68_301 ;    /* PROC(REF MODE142) MODE123 */

A_PROCEDURE(A68_VOID ,A68t302,(struct A68t139 ,struct A68t240 *,struct A68t123 *),(struct A68t139 ,struct A68t240 *,struct A68t123 *,void *));
typedef struct A68t302  A68_302 ;    /* PROC(MODE139,REF MODE240) MODE123 */

A_PROCEDURE(struct A68t237 *,A68t303,(struct A68t237 *,struct A68t240 *,struct A68t240 *),(struct A68t237 *,struct A68t240 *,struct A68t240 *,void *));
typedef struct A68t303  A68_303 ;    /* PROC(REF MODE237,REF MODE240,REF MODE240) REF MODE237 */

A_PROCEDURE(A68_VOID ,A68t304,(struct A68t202 *,struct A68t237 *,struct A68t139 *),(struct A68t202 *,struct A68t237 *,struct A68t139 *,void *));
typedef struct A68t304  A68_304 ;    /* PROC(REF MODE202,REF MODE237) MODE139 */

A_PROCEDURE(A68_INT ,A68t305,(struct A68t202 *),(struct A68t202 *,void *));
typedef struct A68t305  A68_305 ;    /* PROC(REF MODE202) INT */

A_PROCEDURE(A68_INT ,A68t306,(struct A68t202 *,A68_INT ),(struct A68t202 *,A68_INT ,void *));
typedef struct A68t306  A68_306 ;    /* PROC(REF MODE202,INT) INT */

A_PROCEDURE(A68_VOID ,A68t307,(struct A68t161 ,struct A68t237 *,struct A68t240 *,struct A68t139 *),(struct A68t161 ,struct A68t237 *,struct A68t240 *,struct A68t139 *,void *));
typedef struct A68t307  A68_307 ;    /* PROC(MODE161,REF MODE237,REF MODE240) MODE139 */

A_PROCEDURE(A68_VOID ,A68t308,(struct A68t139 ,struct A68t240 *,struct A68t139 *),(struct A68t139 ,struct A68t240 *,struct A68t139 *,void *));
typedef struct A68t308  A68_308 ;    /* PROC(MODE139,REF MODE240) MODE139 */

A_PROCEDURE(A68_BOOL ,A68t309,(struct A68t139 ,struct A68t139 ,struct A68t240 *,struct A68t240 *,A68_BOOL ),(struct A68t139 ,struct A68t139 ,struct A68t240 *,struct A68t240 *,A68_BOOL ,void *));
typedef struct A68t309  A68_309 ;    /* PROC(MODE139,MODE139,REF MODE240,REF MODE240,BOOL) BOOL */

A_PROCEDURE(A68_INT ,A68t310,(struct A68t170 *,struct A68t240 *),(struct A68t170 *,struct A68t240 *,void *));
typedef struct A68t310  A68_310 ;    /* PROC(REF MODE170,REF MODE240) INT */
struct A68t311{
struct A68t114  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_94)
};
typedef struct A68t311  A68_311 ;    /* STRUCT(MODE114,BOOL)  */
struct A68t312{
struct A68t117 * A;
A68_BOOL  C;
A_PAD_BOOL(PAD_95)
};
typedef struct A68t312  A68_312 ;    /* STRUCT(REF MODE117,BOOL)  */
struct A68t313{
struct A68t120 * A;
A68_BOOL  C;
A_PAD_BOOL(PAD_96)
};
typedef struct A68t313  A68_313 ;    /* STRUCT(REF MODE120,BOOL)  */
struct A68t314{
struct A68t123  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_97)
};
typedef struct A68t314  A68_314 ;    /* STRUCT(MODE123,BOOL)  */
struct A68t315{
struct A68t135 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_98)
};
typedef struct A68t315  A68_315 ;    /* STRUCT(REF MODE135,BOOL)  */
struct A68t316{
struct A68t136 * I;
A68_BOOL  C;
A_PAD_BOOL(PAD_99)
};
typedef struct A68t316  A68_316 ;    /* STRUCT(REF MODE136,BOOL)  */
struct A68t317{
struct A68t138  R;
A68_BOOL  C;
A_PAD_BOOL(PAD_100)
};
typedef struct A68t317  A68_317 ;    /* STRUCT(MODE138,BOOL)  */
struct A68t318{
struct A68t137  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_101)
};
typedef struct A68t318  A68_318 ;    /* STRUCT(MODE137,BOOL)  */
struct A68t319{
struct A68t142 * T;
A68_BOOL  C;
A_PAD_BOOL(PAD_102)
};
typedef struct A68t319  A68_319 ;    /* STRUCT(REF MODE142,BOOL)  */
struct A68t320{
struct A68t139  T;
A68_BOOL  C;
A_PAD_BOOL(PAD_103)
};
typedef struct A68t320  A68_320 ;    /* STRUCT(MODE139,BOOL)  */
struct A68t321{
struct A68t150  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_104)
};
typedef struct A68t321  A68_321 ;    /* STRUCT(MODE150,BOOL)  */
struct A68t322{
struct A68t153  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_105)
};
typedef struct A68t322  A68_322 ;    /* STRUCT(REF MODE153,BOOL)  */
struct A68t323{
struct A68t152  T;
A68_BOOL  C;
A_PAD_BOOL(PAD_106)
};
typedef struct A68t323  A68_323 ;    /* STRUCT(MODE152,BOOL)  */
struct A68t324{
struct A68t154 * T;
A68_BOOL  C;
A_PAD_BOOL(PAD_107)
};
typedef struct A68t324  A68_324 ;    /* STRUCT(REF MODE154,BOOL)  */
struct A68t325{
struct A68t160 * Co;
A68_BOOL  C;
A_PAD_BOOL(PAD_108)
};
typedef struct A68t325  A68_325 ;    /* STRUCT(REF MODE160,BOOL)  */
struct A68t326{
struct A68t165 * Ua;
A68_BOOL  C;
A_PAD_BOOL(PAD_109)
};
typedef struct A68t326  A68_326 ;    /* STRUCT(REF MODE165,BOOL)  */
struct A68t327{
struct A68t176 * U;
A68_BOOL  C;
A_PAD_BOOL(PAD_110)
};
typedef struct A68t327  A68_327 ;    /* STRUCT(REF MODE176,BOOL)  */
struct A68t328{
struct A68t221 * U;
A68_BOOL  C;
A_PAD_BOOL(PAD_111)
};
typedef struct A68t328  A68_328 ;    /* STRUCT(REF MODE221,BOOL)  */
struct A68t329{
struct A68t161  U;
A68_BOOL  C;
A_PAD_BOOL(PAD_112)
};
typedef struct A68t329  A68_329 ;    /* STRUCT(MODE161,BOOL)  */
struct A68t330{
struct A68t205  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_113)
};
typedef struct A68t330  A68_330 ;    /* STRUCT(MODE205,BOOL)  */
struct A68t331{
struct A68t203  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_114)
};
typedef struct A68t331  A68_331 ;    /* STRUCT(REF MODE203,BOOL)  */
struct A68t332{
struct A68t201  I;
A68_BOOL  C;
A_PAD_BOOL(PAD_115)
};
typedef struct A68t332  A68_332 ;    /* STRUCT(MODE201,BOOL)  */
struct A68t333{
struct A68t222  D;
A68_BOOL  C;
A_PAD_BOOL(PAD_116)
};
typedef struct A68t333  A68_333 ;    /* STRUCT(MODE222,BOOL)  */
struct A68t334{
struct A68t207 * P;
A68_BOOL  C;
A_PAD_BOOL(PAD_117)
};
typedef struct A68t334  A68_334 ;    /* STRUCT(REF MODE207,BOOL)  */
struct A68t335{
struct A68t193 * P;
A68_BOOL  C;
A_PAD_BOOL(PAD_118)
};
typedef struct A68t335  A68_335 ;    /* STRUCT(REF MODE193,BOOL)  */
struct A68t336{
struct A68t194 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_119)
};
typedef struct A68t336  A68_336 ;    /* STRUCT(REF MODE194,BOOL)  */
struct A68t337{
struct A68t202 * N;
A68_BOOL  C;
A_PAD_BOOL(PAD_120)
};
typedef struct A68t337  A68_337 ;    /* STRUCT(REF MODE202,BOOL)  */
struct A68t338{
struct A68t195 * L;
A68_BOOL  C;
A_PAD_BOOL(PAD_121)
};
typedef struct A68t338  A68_338 ;    /* STRUCT(REF MODE195,BOOL)  */
struct A68t339{
struct A68t220 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_122)
};
typedef struct A68t339  A68_339 ;    /* STRUCT(REF MODE220,BOOL)  */
struct A68t340{
struct A68t210  S;
A68_BOOL  C;
A_PAD_BOOL(PAD_123)
};
typedef struct A68t340  A68_340 ;    /* STRUCT(MODE210,BOOL)  */
struct A68t341{
struct A68t209 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_124)
};
typedef struct A68t341  A68_341 ;    /* STRUCT(REF MODE209,BOOL)  */
struct A68t342{
struct A68t196 * M;
A68_BOOL  C;
A_PAD_BOOL(PAD_125)
};
typedef struct A68t342  A68_342 ;    /* STRUCT(REF MODE196,BOOL)  */
struct A68t343{
struct A68t197 * J;
A68_BOOL  C;
A_PAD_BOOL(PAD_126)
};
typedef struct A68t343  A68_343 ;    /* STRUCT(REF MODE197,BOOL)  */
struct A68t344{
struct A68t200 * J;
A68_BOOL  C;
A_PAD_BOOL(PAD_127)
};
typedef struct A68t344  A68_344 ;    /* STRUCT(REF MODE200,BOOL)  */
struct A68t345{
struct A68t191  S;
A68_BOOL  C;
A_PAD_BOOL(PAD_128)
};
typedef struct A68t345  A68_345 ;    /* STRUCT(MODE191,BOOL)  */
struct A68t346{
struct A68t190 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_129)
};
typedef struct A68t346  A68_346 ;    /* STRUCT(REF MODE190,BOOL)  */
struct A68t347{
struct A68t233  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_130)
};
typedef struct A68t347  A68_347 ;    /* STRUCT(MODE233,BOOL)  */
struct A68t348{
struct A68t235  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_131)
};
typedef struct A68t348  A68_348 ;    /* STRUCT(MODE235,BOOL)  */
struct A68t349{
struct A68t238  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_132)
};
typedef struct A68t349  A68_349 ;    /* STRUCT(REF MODE238,BOOL)  */
struct A68t350{
struct A68t237 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_133)
};
typedef struct A68t350  A68_350 ;    /* STRUCT(REF MODE237,BOOL)  */
struct A68t351{
struct A68t246  O;
A68_BOOL  C;
A_PAD_BOOL(PAD_134)
};
typedef struct A68t351  A68_351 ;    /* STRUCT(MODE246,BOOL)  */
struct A68t352{
struct A68t250 * Cl;
A68_BOOL  C;
A_PAD_BOOL(PAD_135)
};
typedef struct A68t352  A68_352 ;    /* STRUCT(REF MODE250,BOOL)  */
struct A68t353 ;

A_PROCEDURE(A68_VOID ,A68t354,(struct A68t114 ,struct A68t353 *,struct A68t311 *),(struct A68t114 ,struct A68t353 *,struct A68t311 *,void *));
typedef struct A68t354  A68_354 ;    /* PROC(MODE114,REF MODE353) MODE311 */

A_PROCEDURE(A68_VOID ,A68t355,(struct A68t117 *,struct A68t353 *,struct A68t312 *),(struct A68t117 *,struct A68t353 *,struct A68t312 *,void *));
typedef struct A68t355  A68_355 ;    /* PROC(REF MODE117,REF MODE353) MODE312 */

A_PROCEDURE(A68_VOID ,A68t356,(struct A68t120 *,struct A68t353 *,struct A68t313 *),(struct A68t120 *,struct A68t353 *,struct A68t313 *,void *));
typedef struct A68t356  A68_356 ;    /* PROC(REF MODE120,REF MODE353) MODE313 */

A_PROCEDURE(A68_VOID ,A68t357,(struct A68t123 ,struct A68t353 *,struct A68t314 *),(struct A68t123 ,struct A68t353 *,struct A68t314 *,void *));
typedef struct A68t357  A68_357 ;    /* PROC(MODE123,REF MODE353) MODE314 */

A_PROCEDURE(A68_VOID ,A68t358,(struct A68t135 *,struct A68t353 *,struct A68t315 *),(struct A68t135 *,struct A68t353 *,struct A68t315 *,void *));
typedef struct A68t358  A68_358 ;    /* PROC(REF MODE135,REF MODE353) MODE315 */

A_PROCEDURE(A68_VOID ,A68t359,(struct A68t136 *,struct A68t353 *,struct A68t316 *),(struct A68t136 *,struct A68t353 *,struct A68t316 *,void *));
typedef struct A68t359  A68_359 ;    /* PROC(REF MODE136,REF MODE353) MODE316 */

A_PROCEDURE(A68_VOID ,A68t360,(struct A68t138 ,struct A68t353 *,struct A68t317 *),(struct A68t138 ,struct A68t353 *,struct A68t317 *,void *));
typedef struct A68t360  A68_360 ;    /* PROC(MODE138,REF MODE353) MODE317 */

A_PROCEDURE(A68_VOID ,A68t361,(struct A68t137 ,struct A68t353 *,struct A68t318 *),(struct A68t137 ,struct A68t353 *,struct A68t318 *,void *));
typedef struct A68t361  A68_361 ;    /* PROC(MODE137,REF MODE353) MODE318 */

A_PROCEDURE(A68_VOID ,A68t362,(struct A68t142 *,struct A68t353 *,struct A68t319 *),(struct A68t142 *,struct A68t353 *,struct A68t319 *,void *));
typedef struct A68t362  A68_362 ;    /* PROC(REF MODE142,REF MODE353) MODE319 */

A_PROCEDURE(A68_VOID ,A68t363,(struct A68t139 ,struct A68t353 *,struct A68t320 *),(struct A68t139 ,struct A68t353 *,struct A68t320 *,void *));
typedef struct A68t363  A68_363 ;    /* PROC(MODE139,REF MODE353) MODE320 */

A_PROCEDURE(A68_VOID ,A68t364,(struct A68t150 ,struct A68t353 *,struct A68t321 *),(struct A68t150 ,struct A68t353 *,struct A68t321 *,void *));
typedef struct A68t364  A68_364 ;    /* PROC(MODE150,REF MODE353) MODE321 */

A_PROCEDURE(A68_VOID ,A68t365,(struct A68t153 ,struct A68t353 *,struct A68t322 *),(struct A68t153 ,struct A68t353 *,struct A68t322 *,void *));
typedef struct A68t365  A68_365 ;    /* PROC(REF MODE153,REF MODE353) MODE322 */

A_PROCEDURE(A68_VOID ,A68t366,(struct A68t152 ,struct A68t353 *,struct A68t323 *),(struct A68t152 ,struct A68t353 *,struct A68t323 *,void *));
typedef struct A68t366  A68_366 ;    /* PROC(MODE152,REF MODE353) MODE323 */

A_PROCEDURE(A68_VOID ,A68t367,(struct A68t154 *,struct A68t353 *,struct A68t324 *),(struct A68t154 *,struct A68t353 *,struct A68t324 *,void *));
typedef struct A68t367  A68_367 ;    /* PROC(REF MODE154,REF MODE353) MODE324 */

A_PROCEDURE(A68_VOID ,A68t368,(struct A68t160 *,struct A68t353 *,struct A68t325 *),(struct A68t160 *,struct A68t353 *,struct A68t325 *,void *));
typedef struct A68t368  A68_368 ;    /* PROC(REF MODE160,REF MODE353) MODE325 */

A_PROCEDURE(A68_VOID ,A68t369,(struct A68t165 *,struct A68t353 *,struct A68t326 *),(struct A68t165 *,struct A68t353 *,struct A68t326 *,void *));
typedef struct A68t369  A68_369 ;    /* PROC(REF MODE165,REF MODE353) MODE326 */

A_PROCEDURE(A68_VOID ,A68t370,(struct A68t176 *,struct A68t353 *,struct A68t327 *),(struct A68t176 *,struct A68t353 *,struct A68t327 *,void *));
typedef struct A68t370  A68_370 ;    /* PROC(REF MODE176,REF MODE353) MODE327 */

A_PROCEDURE(A68_VOID ,A68t371,(struct A68t221 *,struct A68t353 *,struct A68t328 *),(struct A68t221 *,struct A68t353 *,struct A68t328 *,void *));
typedef struct A68t371  A68_371 ;    /* PROC(REF MODE221,REF MODE353) MODE328 */

A_PROCEDURE(A68_VOID ,A68t372,(struct A68t161 ,struct A68t353 *,struct A68t329 *),(struct A68t161 ,struct A68t353 *,struct A68t329 *,void *));
typedef struct A68t372  A68_372 ;    /* PROC(MODE161,REF MODE353) MODE329 */

A_PROCEDURE(A68_VOID ,A68t373,(struct A68t205 ,struct A68t353 *,struct A68t330 *),(struct A68t205 ,struct A68t353 *,struct A68t330 *,void *));
typedef struct A68t373  A68_373 ;    /* PROC(MODE205,REF MODE353) MODE330 */

A_PROCEDURE(A68_VOID ,A68t374,(struct A68t203 ,struct A68t353 *,struct A68t331 *),(struct A68t203 ,struct A68t353 *,struct A68t331 *,void *));
typedef struct A68t374  A68_374 ;    /* PROC(REF MODE203,REF MODE353) MODE331 */

A_PROCEDURE(A68_VOID ,A68t375,(struct A68t201 ,struct A68t353 *,struct A68t332 *),(struct A68t201 ,struct A68t353 *,struct A68t332 *,void *));
typedef struct A68t375  A68_375 ;    /* PROC(MODE201,REF MODE353) MODE332 */

A_PROCEDURE(A68_VOID ,A68t376,(struct A68t222 ,struct A68t353 *,struct A68t333 *),(struct A68t222 ,struct A68t353 *,struct A68t333 *,void *));
typedef struct A68t376  A68_376 ;    /* PROC(MODE222,REF MODE353) MODE333 */

A_PROCEDURE(A68_VOID ,A68t377,(struct A68t207 *,struct A68t353 *,struct A68t334 *),(struct A68t207 *,struct A68t353 *,struct A68t334 *,void *));
typedef struct A68t377  A68_377 ;    /* PROC(REF MODE207,REF MODE353) MODE334 */

A_PROCEDURE(A68_VOID ,A68t378,(struct A68t193 *,struct A68t353 *,struct A68t335 *),(struct A68t193 *,struct A68t353 *,struct A68t335 *,void *));
typedef struct A68t378  A68_378 ;    /* PROC(REF MODE193,REF MODE353) MODE335 */

A_PROCEDURE(A68_VOID ,A68t379,(struct A68t194 *,struct A68t353 *,struct A68t336 *),(struct A68t194 *,struct A68t353 *,struct A68t336 *,void *));
typedef struct A68t379  A68_379 ;    /* PROC(REF MODE194,REF MODE353) MODE336 */

A_PROCEDURE(A68_VOID ,A68t380,(struct A68t202 *,struct A68t353 *,struct A68t337 *),(struct A68t202 *,struct A68t353 *,struct A68t337 *,void *));
typedef struct A68t380  A68_380 ;    /* PROC(REF MODE202,REF MODE353) MODE337 */

A_PROCEDURE(A68_VOID ,A68t381,(struct A68t195 *,struct A68t353 *,struct A68t338 *),(struct A68t195 *,struct A68t353 *,struct A68t338 *,void *));
typedef struct A68t381  A68_381 ;    /* PROC(REF MODE195,REF MODE353) MODE338 */

A_PROCEDURE(A68_VOID ,A68t382,(struct A68t220 *,struct A68t353 *,struct A68t339 *),(struct A68t220 *,struct A68t353 *,struct A68t339 *,void *));
typedef struct A68t382  A68_382 ;    /* PROC(REF MODE220,REF MODE353) MODE339 */

A_PROCEDURE(A68_VOID ,A68t383,(struct A68t210 ,struct A68t353 *,struct A68t340 *),(struct A68t210 ,struct A68t353 *,struct A68t340 *,void *));
typedef struct A68t383  A68_383 ;    /* PROC(MODE210,REF MODE353) MODE340 */

A_PROCEDURE(A68_VOID ,A68t384,(struct A68t209 *,struct A68t353 *,struct A68t341 *),(struct A68t209 *,struct A68t353 *,struct A68t341 *,void *));
typedef struct A68t384  A68_384 ;    /* PROC(REF MODE209,REF MODE353) MODE341 */

A_PROCEDURE(A68_VOID ,A68t385,(struct A68t196 *,struct A68t353 *,struct A68t342 *),(struct A68t196 *,struct A68t353 *,struct A68t342 *,void *));
typedef struct A68t385  A68_385 ;    /* PROC(REF MODE196,REF MODE353) MODE342 */

A_PROCEDURE(A68_VOID ,A68t386,(struct A68t197 *,struct A68t353 *,struct A68t343 *),(struct A68t197 *,struct A68t353 *,struct A68t343 *,void *));
typedef struct A68t386  A68_386 ;    /* PROC(REF MODE197,REF MODE353) MODE343 */

A_PROCEDURE(A68_VOID ,A68t387,(struct A68t200 *,struct A68t353 *,struct A68t344 *),(struct A68t200 *,struct A68t353 *,struct A68t344 *,void *));
typedef struct A68t387  A68_387 ;    /* PROC(REF MODE200,REF MODE353) MODE344 */

A_PROCEDURE(A68_VOID ,A68t388,(struct A68t191 ,struct A68t353 *,struct A68t345 *),(struct A68t191 ,struct A68t353 *,struct A68t345 *,void *));
typedef struct A68t388  A68_388 ;    /* PROC(MODE191,REF MODE353) MODE345 */

A_PROCEDURE(A68_VOID ,A68t389,(struct A68t190 *,struct A68t353 *,struct A68t346 *),(struct A68t190 *,struct A68t353 *,struct A68t346 *,void *));
typedef struct A68t389  A68_389 ;    /* PROC(REF MODE190,REF MODE353) MODE346 */

A_PROCEDURE(A68_VOID ,A68t390,(struct A68t233 ,struct A68t353 *,struct A68t347 *),(struct A68t233 ,struct A68t353 *,struct A68t347 *,void *));
typedef struct A68t390  A68_390 ;    /* PROC(MODE233,REF MODE353) MODE347 */

A_PROCEDURE(A68_VOID ,A68t391,(struct A68t235 ,struct A68t353 *,struct A68t348 *),(struct A68t235 ,struct A68t353 *,struct A68t348 *,void *));
typedef struct A68t391  A68_391 ;    /* PROC(MODE235,REF MODE353) MODE348 */

A_PROCEDURE(A68_VOID ,A68t392,(struct A68t238 ,struct A68t353 *,struct A68t349 *),(struct A68t238 ,struct A68t353 *,struct A68t349 *,void *));
typedef struct A68t392  A68_392 ;    /* PROC(REF MODE238,REF MODE353) MODE349 */

A_PROCEDURE(A68_VOID ,A68t393,(struct A68t237 *,struct A68t353 *,struct A68t350 *),(struct A68t237 *,struct A68t353 *,struct A68t350 *,void *));
typedef struct A68t393  A68_393 ;    /* PROC(REF MODE237,REF MODE353) MODE350 */

A_PROCEDURE(A68_VOID ,A68t394,(struct A68t246 ,struct A68t353 *,struct A68t351 *),(struct A68t246 ,struct A68t353 *,struct A68t351 *,void *));
typedef struct A68t394  A68_394 ;    /* PROC(MODE246,REF MODE353) MODE351 */

A_PROCEDURE(A68_VOID ,A68t395,(struct A68t250 *,struct A68t353 *,struct A68t97 ,struct A68t352 *),(struct A68t250 *,struct A68t353 *,struct A68t97 ,struct A68t352 *,void *));
typedef struct A68t395  A68_395 ;    /* PROC(REF MODE250,REF MODE353,MODE97) MODE352 */
struct A68t353{
struct A68t354  Attr;
struct A68t355  Attrstr;
struct A68t356  Attrdec;
struct A68t357  Formula;
struct A68t358  Formulas;
struct A68t359  Intdec;
struct A68t360  Range;
struct A68t361  Formularange;
struct A68t362  Tstr;
struct A68t363  Type;
struct A68t364  Alternative;
struct A68t365  Alternatives;
struct A68t366  Typebody;
struct A68t367  Typedec;
struct A68t368  Constdec;
struct A68t369  Ualts;
struct A68t370  Ustr;
struct A68t371  Uchoices;
struct A68t372  Unit;
struct A68t373  Mparam;
struct A68t374  Macparams;
struct A68t375  Instance;
struct A68t376  Declaration;
struct A68t377  Printitems;
struct A68t378  Print;
struct A68t379  Fault;
struct A68t380  Names;
struct A68t381  Let;
struct A68t382  Seqchoices;
struct A68t383  Seqstep;
struct A68t384  Sequence;
struct A68t385  Make;
struct A68t386  Join;
struct A68t387  Joins;
struct A68t388  Step;
struct A68t389  Series;
struct A68t390  Fnbody;
struct A68t391  Macspec;
struct A68t392  Macspecs;
struct A68t393  Fndec;
struct A68t394  Outer;
struct A68t395  Closure;
struct A68t353 * Rest;
};
typedef struct A68t353  A68_353 ;    /* STRUCT(MODE354,MODE355,MODE356,MODE357,MODE358,MODE359,MODE360,MODE361,MODE362,MODE363,MODE364,MODE365,MODE366,MODE367,MODE368,MODE369,MODE370,MODE371,MODE372,MODE373,MODE374,MODE375,MODE376,MODE377,MODE378,MODE379,MODE380,MODE381,MODE382,MODE383,MODE384,MODE385,MODE386,MODE387,MODE388,MODE389,MODE390,MODE391,MODE392,MODE393,MODE394,MODE395,REF MODE353)  */
struct A68t397 ;

A_PROCEDURE(struct A68t353 *,A68t396,(struct A68t353 *,struct A68t397 ),(struct A68t353 *,struct A68t397 ,void *));
typedef struct A68t396  A68_396 ;    /* PROC(REF MODE353,MODE397) REF MODE353 */
A_VECTOR(struct A68t398 ,A68t397);
typedef struct A68t397  A68_397 ;    /* VECTOR [] MODE398 */
struct A68t398 { A68_INT mode; union {
struct A68t354  mode1;
struct A68t355  mode2;
struct A68t356  mode3;
struct A68t357  mode4;
struct A68t358  mode5;
struct A68t359  mode6;
struct A68t360  mode7;
struct A68t361  mode8;
struct A68t362  mode9;
struct A68t363  mode10;
struct A68t364  mode11;
struct A68t365  mode12;
struct A68t366  mode13;
struct A68t367  mode14;
struct A68t368  mode15;
struct A68t369  mode16;
struct A68t370  mode17;
struct A68t371  mode18;
struct A68t372  mode19;
struct A68t373  mode20;
struct A68t374  mode21;
struct A68t375  mode22;
struct A68t376  mode23;
struct A68t377  mode24;
struct A68t378  mode25;
struct A68t379  mode26;
struct A68t380  mode27;
struct A68t381  mode28;
struct A68t382  mode29;
struct A68t383  mode30;
struct A68t384  mode31;
struct A68t385  mode32;
struct A68t386  mode33;
struct A68t387  mode34;
struct A68t388  mode35;
struct A68t389  mode36;
struct A68t390  mode37;
struct A68t391  mode38;
struct A68t392  mode39;
struct A68t393  mode40;
struct A68t394  mode41;
struct A68t395  mode42;
} data; };
typedef struct A68t398  A68_398 ;    /* UNION(MODE354,MODE355,MODE356,MODE357,MODE358,MODE359,MODE360,MODE361,MODE362,MODE363,MODE364,MODE365,MODE366,MODE367,MODE368,MODE369,MODE370,MODE371,MODE372,MODE373,MODE374,MODE375,MODE376,MODE377,MODE378,MODE379,MODE380,MODE381,MODE382,MODE383,MODE384,MODE385,MODE386,MODE387,MODE388,MODE389,MODE390,MODE391,MODE392,MODE393,MODE394,MODE395)  */

A_PROCEDURE(A68_VOID ,A68t399,(struct A68t353 *),(struct A68t353 *,void *));
typedef struct A68t399  A68_399 ;    /* PROC(REF MODE353) VOID */

A_PROCEDURE(A68_VOID ,A68t400,(void),(void *));
typedef struct A68t400  A68_400 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t401,(struct A68t400 ),(struct A68t400 ,void *));
typedef struct A68t401  A68_401 ;    /* PROC(MODE400) VOID */

A_PROCEDURE(A68_VOID ,A68t402,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t402  A68_402 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t403,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t403  A68_403 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,55,A68t404);
typedef struct A68t404  A68_404 ;    /* STRUCT 55 CHAR */

A_PROCEDURE(A68_VOID ,A68t405,(struct A68t250 *,struct A68t97 ,struct A68t352 *),(struct A68t250 *,struct A68t97 ,struct A68t352 *,void *));
typedef struct A68t405  A68_405 ;    /* PROC(REF MODE250,MODE97) MODE352 */
struct A68t406{
struct A68t237 * Fdec;
struct A68t240 * Env;
};
typedef struct A68t406  A68_406 ;    /* STRUCT(REF MODE237,REF MODE240)  */
struct A68t407{
A68_INT  Oldnameno;
A_PAD_INT(PAD_136)
A68_INT  Nameno;
A_PAD_INT(PAD_137)
struct A68t407 * Rest;
};
typedef struct A68t407  A68_407 ;    /* STRUCT(INT,INT,REF MODE407)  */
struct A68t408{
A68_INT  Oldnameno;
A_PAD_INT(PAD_138)
A68_INT  Newnameno;
A_PAD_INT(PAD_139)
struct A68t408 * Rest;
};
typedef struct A68t408  A68_408 ;    /* STRUCT(INT,INT,REF MODE408)  */

A_PROCEDURE(A68_VOID ,A68t409,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t409  A68_409 ;    /* PROC(REF MODE26,INT) REF MODE26 */
A_ISTRUCT(A68_CHAR ,2,A68t410);
typedef struct A68t410  A68_410 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t411);
typedef struct A68t411  A68_411 ;    /* STRUCT 3 MODE52 */
A_ISTRUCT(A68_CHAR ,6,A68t412);
typedef struct A68t412  A68_412 ;    /* STRUCT 6 CHAR */

A_PROCEDURE(A68_VOID ,A68t413,(A68_INT ,struct A68t246 *),(A68_INT ,struct A68t246 *,void *));
typedef struct A68t413  A68_413 ;    /* PROC(INT) MODE246 */

A_PROCEDURE(A68_VOID ,A68t414,(A68_BOOL ,struct A68t238 *),(A68_BOOL ,struct A68t238 *,void *));
typedef struct A68t414  A68_414 ;    /* PROC(BOOL) MODE238 */

A_PROCEDURE(A68_VOID ,A68t415,(A68_BOOL ,struct A68t239 *),(A68_BOOL ,struct A68t239 *,void *));
typedef struct A68t415  A68_415 ;    /* PROC(BOOL) MODE239 */

A_PROCEDURE(A68_VOID ,A68t416,(A68_BOOL ,struct A68t243 *),(A68_BOOL ,struct A68t243 *,void *));
typedef struct A68t416  A68_416 ;    /* PROC(BOOL) MODE243 */

A_PROCEDURE(A68_VOID ,A68t417,(A68_BOOL ,struct A68t244 *),(A68_BOOL ,struct A68t244 *,void *));
typedef struct A68t417  A68_417 ;    /* PROC(BOOL) MODE244 */
A_ISTRUCT(A68_CHAR ,4,A68t418);
typedef struct A68t418  A68_418 ;    /* STRUCT 4 CHAR */

A_PROCEDURE(A68_VOID ,A68t419,(A68_BOOL ,struct A68t245 *),(A68_BOOL ,struct A68t245 *,void *));
typedef struct A68t419  A68_419 ;    /* PROC(BOOL) MODE245 */

A_PROCEDURE(struct A68t237 *,A68t420,(A68_INT ),(A68_INT ,void *));
typedef struct A68t420  A68_420 ;    /* PROC(INT) REF MODE237 */

A_PROCEDURE(A68_VOID ,A68t421,(struct A68t161 ,struct A68t240 *,struct A68t161 *),(struct A68t161 ,struct A68t240 *,struct A68t161 *,void *));
typedef struct A68t421  A68_421 ;    /* PROC(MODE161,REF MODE240) MODE161 */

A_PROCEDURE(A68_VOID ,A68t422,(struct A68t139 ,A68_INT ,struct A68t240 *,struct A68t139 *),(struct A68t139 ,A68_INT ,struct A68t240 *,struct A68t139 *,void *));
typedef struct A68t422  A68_422 ;    /* PROC(MODE139,INT,REF MODE240) MODE139 */
A_ISTRUCT(A68_CHAR ,10,A68t423);
typedef struct A68t423  A68_423 ;    /* STRUCT 10 CHAR */

A_PROCEDURE(A68_VOID ,A68t424,(struct A68t161 ,A68_INT ,struct A68t240 *,struct A68t161 *),(struct A68t161 ,A68_INT ,struct A68t240 *,struct A68t161 *,void *));
typedef struct A68t424  A68_424 ;    /* PROC(MODE161,INT,REF MODE240) MODE161 */

A_PROCEDURE(A68_VOID ,A68t425,(struct A68t161 ,A68_BOOL *,struct A68t240 *,struct A68t161 *),(struct A68t161 ,A68_BOOL *,struct A68t240 *,struct A68t161 *,void *));
typedef struct A68t425  A68_425 ;    /* PROC(MODE161,REF BOOL,REF MODE240) MODE161 */

A_PROCEDURE(A68_INT ,A68t426,(struct A68t139 ,struct A68t240 *),(struct A68t139 ,struct A68t240 *,void *));
typedef struct A68t426  A68_426 ;    /* PROC(MODE139,REF MODE240) INT */
A_ISTRUCT(A68_CHAR ,9,A68t427);
typedef struct A68t427  A68_427 ;    /* STRUCT 9 CHAR */

A_PROCEDURE(A68_VOID ,A68t428,(struct A68t161 ,struct A68t161 ,A68_INT ,A68_INT ,A68_INT ,struct A68t353 *,struct A68t161 *),(struct A68t161 ,struct A68t161 ,A68_INT ,A68_INT ,A68_INT ,struct A68t353 *,struct A68t161 *,void *));
typedef struct A68t428  A68_428 ;    /* PROC(MODE161,MODE161,INT,INT,INT,REF MODE353) MODE161 */

A_PROCEDURE(A68_VOID ,A68t429,(struct A68t161 ),(struct A68t161 ,void *));
typedef struct A68t429  A68_429 ;    /* PROC(MODE161) VOID */

A_PROCEDURE(A68_VOID ,A68t430,(A68_BOOL ,struct A68t161 ,struct A68t161 ,struct A68t138 ,struct A68t406 ,struct A68t353 *,struct A68t161 *),(A68_BOOL ,struct A68t161 ,struct A68t161 ,struct A68t138 ,struct A68t406 ,struct A68t353 *,struct A68t161 *,void *));
typedef struct A68t430  A68_430 ;    /* PROC(BOOL,MODE161,MODE161,MODE138,MODE406,REF MODE353) MODE161 */

A_PROCEDURE(A68_INT ,A68t431,(A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t161 *),(A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t161 *,void *));
typedef struct A68t431  A68_431 ;    /* PROC(BOOL,BOOL,BOOL,BOOL,REF MODE161) INT */

A_PROCEDURE(A68_VOID ,A68t432,(struct A68t161 ,struct A68t161 ,struct A68t406 ,struct A68t353 *,struct A68t161 *),(struct A68t161 ,struct A68t161 ,struct A68t406 ,struct A68t353 *,struct A68t161 *,void *));
typedef struct A68t432  A68_432 ;    /* PROC(MODE161,MODE161,MODE406,REF MODE353) MODE161 */
A_ISTRUCT(A68_CHAR ,11,A68t433);
typedef struct A68t433  A68_433 ;    /* STRUCT 11 CHAR */

A_PROCEDURE(A68_INT ,A68t434,(struct A68t161 ),(struct A68t161 ,void *));
typedef struct A68t434  A68_434 ;    /* PROC(MODE161) INT */

A_PROCEDURE(A68_BOOL ,A68t435,(struct A68t161 ),(struct A68t161 ,void *));
typedef struct A68t435  A68_435 ;    /* PROC(MODE161) BOOL */

A_PROCEDURE(A68_VOID ,A68t436,(struct A68t237 *,struct A68t353 *,A68_BOOL *,struct A68t240 *,struct A68t350 *),(struct A68t237 *,struct A68t353 *,A68_BOOL *,struct A68t240 *,struct A68t350 *,void *));
typedef struct A68t436  A68_436 ;    /* PROC(REF MODE237,REF MODE353,REF BOOL,REF MODE240) MODE350 */

A_PROCEDURE(A68_VOID ,A68t437,(struct A68t408 *,struct A68t32 ),(struct A68t408 *,struct A68t32 ,void *));
typedef struct A68t437  A68_437 ;    /* PROC(REF MODE408,REF MODE32) VOID */

A_PROCEDURE(A68_INT ,A68t438,(A68_INT ,A68_BOOL ,struct A68t236 ,struct A68t320 ),(A68_INT ,A68_BOOL ,struct A68t236 ,struct A68t320 ,void *));
typedef struct A68t438  A68_438 ;    /* PROC(INT,BOOL,MODE236,MODE320) INT */

A_PROCEDURE(A68_VOID ,A68t439,(struct A68t202 *,struct A68t32 ,A68_INT ,struct A68t337 *),(struct A68t202 *,struct A68t32 ,A68_INT ,struct A68t337 *,void *));
typedef struct A68t439  A68_439 ;    /* PROC(REF MODE202,REF MODE32,INT) MODE337 */

A_PROCEDURE(struct A68t202 *,A68t440,(struct A68t161 ,struct A68t139 ,struct A68t408 **),(struct A68t161 ,struct A68t139 ,struct A68t408 **,void *));
typedef struct A68t440  A68_440 ;    /* PROC(MODE161,MODE139,REF REF MODE408) REF MODE202 */

A_PROCEDURE(struct A68t202 *,A68t441,(struct A68t161 ,A68_INT ),(struct A68t161 ,A68_INT ,void *));
typedef struct A68t441  A68_441 ;    /* PROC(MODE161,INT) REF MODE202 */

A_PROCEDURE(struct A68t190 *,A68t442,(struct A68t209 *,struct A68t353 *,struct A68t407 **,struct A68t32 ),(struct A68t209 *,struct A68t353 *,struct A68t407 **,struct A68t32 ,void *));
typedef struct A68t442  A68_442 ;    /* PROC(REF MODE209,REF MODE353,REF REF MODE407,REF MODE32) REF MODE190 */

A_PROCEDURE(A68_VOID ,A68t443,(struct A68t210 ,struct A68t353 *,struct A68t32 ,struct A68t161 *),(struct A68t210 ,struct A68t353 *,struct A68t32 ,struct A68t161 *,void *));
typedef struct A68t443  A68_443 ;    /* PROC(MODE210,REF MODE353,REF MODE32) MODE161 */

A_PROCEDURE(A68_VOID ,A68t444,(struct A68t183 *,struct A68t353 *,struct A68t32 ,struct A68t329 *),(struct A68t183 *,struct A68t353 *,struct A68t32 ,struct A68t329 *,void *));
typedef struct A68t444  A68_444 ;    /* PROC(REF MODE183,REF MODE353,REF MODE32) MODE329 */

A_PROCEDURE(A68_VOID ,A68t445,(struct A68t161 ,struct A68t353 *,struct A68t32 ,struct A68t329 *),(struct A68t161 ,struct A68t353 *,struct A68t32 ,struct A68t329 *,void *));
typedef struct A68t445  A68_445 ;    /* PROC(MODE161,REF MODE353,REF MODE32) MODE329 */

A_PROCEDURE(struct A68t195 *,A68t446,(struct A68t215 *,struct A68t353 *,struct A68t32 ),(struct A68t215 *,struct A68t353 *,struct A68t32 ,void *));
typedef struct A68t446  A68_446 ;    /* PROC(REF MODE215,REF MODE353,REF MODE32) REF MODE195 */
A_ISTRUCT(struct A68t398 ,2,A68t447);
typedef struct A68t447  A68_447 ;    /* STRUCT 2 MODE398 */

A_PROCEDURE(struct A68t195 *,A68t448,(struct A68t216 *,struct A68t353 *,struct A68t32 ),(struct A68t216 *,struct A68t353 *,struct A68t32 ,void *));
typedef struct A68t448  A68_448 ;    /* PROC(REF MODE216,REF MODE353,REF MODE32) REF MODE195 */

A_PROCEDURE(struct A68t195 *,A68t449,(struct A68t217 *,struct A68t353 *,struct A68t32 ),(struct A68t217 *,struct A68t353 *,struct A68t32 ,void *));
typedef struct A68t449  A68_449 ;    /* PROC(REF MODE217,REF MODE353,REF MODE32) REF MODE195 */

A_PROCEDURE(struct A68t195 *,A68t450,(struct A68t219 *,struct A68t353 *,struct A68t32 ),(struct A68t219 *,struct A68t353 *,struct A68t32 ,void *));
typedef struct A68t450  A68_450 ;    /* PROC(REF MODE219,REF MODE353,REF MODE32) REF MODE195 */

A_PROCEDURE(struct A68t196 *,A68t451,(struct A68t161 ,struct A68t202 *,struct A68t407 **,struct A68t32 ),(struct A68t161 ,struct A68t202 *,struct A68t407 **,struct A68t32 ,void *));
typedef struct A68t451  A68_451 ;    /* PROC(MODE161,REF MODE202,REF REF MODE407,REF MODE32) REF MODE196 */

A_PROCEDURE(A68_VOID ,A68t452,(A68_BOOL ,struct A68t203 *),(A68_BOOL ,struct A68t203 *,void *));
typedef struct A68t452  A68_452 ;    /* PROC(BOOL) MODE203 */

A_PROCEDURE(A68_VOID ,A68t453,(struct A68t191 ),(struct A68t191 ,void *));
typedef struct A68t453  A68_453 ;    /* PROC(MODE191) VOID */

A_PROCEDURE(A68_VOID ,A68t454,(struct A68t213 *),(struct A68t213 *,void *));
typedef struct A68t454  A68_454 ;    /* PROC(REF MODE213) VOID */

A_PROCEDURE(struct A68t195 *,A68t455,(struct A68t214 *,struct A68t353 *,struct A68t32 ),(struct A68t214 *,struct A68t353 *,struct A68t32 ,void *));
typedef struct A68t455  A68_455 ;    /* PROC(REF MODE214,REF MODE353,REF MODE32) REF MODE195 */
A_ISTRUCT(A68_CHAR ,15,A68t456);
typedef struct A68t456  A68_456 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(struct A68t398 ,5,A68t457);
typedef struct A68t457  A68_457 ;    /* STRUCT 5 MODE398 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from transformprocs --- */
extern A68_353 * THJATRN_make_newtprocs(struct A68t353 *,struct A68t397 );
extern A68_VOID  MLJATRN_discard_tprocs(struct A68t353 *);
extern A68_353 * AWLATRN_nulltprocs;
extern A68_VOID  DWLATRN_null_attr(struct A68t114 ,struct A68t353 *,A68_311 *);
extern A68_VOID  IWLATRN_null_formula(struct A68t123 ,struct A68t353 *,A68_314 *);
extern A68_VOID  NWLATRN_null_type(struct A68t139 ,struct A68t353 *,A68_320 *);
/* --- End of imports from transformprocs --- */


/* --- Imports from modeprocs --- */
extern A68_INT  XOMATRN_int(struct A68t123 );
extern A68_VOID  ISNATRN_type_size(struct A68t139 ,struct A68t240 *,A68_123 *);
extern A68_VOID  VUNATRN_unit_type(struct A68t161 ,struct A68t237 *,struct A68t240 *,A68_139 *);
/* --- End of imports from modeprocs --- */


/* --- Imports from closureprocs --- */
extern A68_INT  ENCATRN_reserve_next_closureno(struct A68t250 *);
extern A68_247 ** KNCATRN_insert_outer(struct A68t246 ,struct A68t247 **,struct A68t250 *,struct A68t97 );
extern A68_250 * DPCATRN_copy_closure(struct A68t250 *,struct A68t97 );
/* --- End of imports from closureprocs --- */


/* --- Imports from assmodes --- */
extern A68_VC  TTCAOST_nullid;
extern A68_176 * IAAATRN_nilustr;
extern A68_221 * JAAATRN_niluchoices;
extern A68_202 * NAAATRN_nilnames;
extern A68_220 * PAAATRN_nilseqchoices;
extern A68_209 * QAAATRN_nilsequence;
extern A68_190 * SAAATRN_nilseries;
extern A68_135 * BBAATRN_nilformulas;
extern A68_121 * CBAATRN_nilusage;
extern A68_247 * HBAATRN_nilouters;
extern A68_238  GCAATRN_nullmacspecs;
extern A68_241  MCAATRN_nullattrdecs;
extern A68_242  SCAATRN_nullintdecs;
extern A68_140 * IFAATRN_maketname(A68_INT );
extern A68_148 * XFAATRN_maketypetag(struct A68t139 );
extern A68_155 * CGAATRN_makecname(A68_INT );
extern A68_144 * HGAATRN_makectype(struct A68t139 );
extern A68_159 * MGAATRN_makecquery(struct A68t139 );
extern A68_206 * WGAATRN_makeunittag(struct A68t161 );
extern A68_132 * NFAATRN_maketmacpar(A68_INT );
extern A68_119  ZHAATRN_attrnull;
extern A68_147  DIAATRN_tnull;
extern A68_189  FIAATRN_unull;
extern A68_234  LIAATRN_bodynull;
#define TIAATRN_flattenleft 1
#define UIAATRN_flattenright 2
#define VIAATRN_flattenboth 3
#define YIAATRN_elsechoice 3
#define ZIAATRN_noelsechoice 4
#define AJAATRN_explicitmacpar 0
#define DKAATRN_constint 1
#define KKAATRN_usource 1
#define LKAATRN_usink 2
#define OKAATRN_outerdec 1
#define QKAATRN_macpardec 3
#define VKAATRN_outerfn 5
extern A68_38  ZLAATRN_makeid;
/* --- End of imports from assmodes --- */


/* --- Imports from messageproc --- */
extern A68_92  SHAAOSI_system;
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VOID  UJBAOSL_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void IHJATRN(void);   /* transformprocs */
extern void HNMATRN(void);   /* modeprocs */
extern void SKCATRN(void);   /* closureprocs */
extern void BAAATRN(void);   /* assmodes */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_404   WTYATRN = {"$Id: sequence.a68,v 34.2 1995/03/29 13:03:05 ella Exp $"}; 
A_GISVEC(A68_VC ,XTYATRN,WTYATRN,55)
#define VUYATRN_nilpvars (A68_407 *)A68_NIL
#define WUYATRN_nilnamenos (A68_408 *)A68_NIL
static A68_410   GVYATRN = {"_s"}; 
A_GISVEC(A68_VC ,HVYATRN,GVYATRN,2)
static A68_412   VVYATRN = {"_DELAY"}; 
A_GISVEC(A68_VC ,XVYATRN,VVYATRN,6)
static A68_410   DZYATRN = {"ty"}; 
A_GISVEC(A68_VC ,EZYATRN,DZYATRN,2)
static A68_418   WZYATRN = {"init"}; 
A_GISVEC(A68_VC ,XZYATRN,WZYATRN,4)
static A68_423   VDZATRN = {"type_index"}; 
A_GISVEC(A68_VC ,WDZATRN,VDZATRN,10)
static A68_412   GFZATRN = {"cquery"}; 
A_GISVEC(A68_VC ,HFZATRN,GFZATRN,6)
static A68_423   QFZATRN = {"unit_index"}; 
A_GISVEC(A68_VC ,RFZATRN,QFZATRN,10)
#define OGZATRN_trow 1
#define PGZATRN_tstring 2
#define QGZATRN_tstr 3
static A68_427   DHZATRN = {"type_sort"}; 
A_GISVEC(A68_VC ,EHZATRN,DHZATRN,9)
static A68_427   KHZATRN = {"type_sort"}; 
A_GISVEC(A68_VC ,LHZATRN,KHZATRN,9)
static A68_433   COZATRN = {"assign_unit"}; 
A_GISVEC(A68_VC ,DOZATRN,COZATRN,11)
static A68_433   POZATRN = {"unit_nameno"}; 
A_GISVEC(A68_VC ,QOZATRN,POZATRN,11)
#define KPZATRN_unused 0
#define LPZATRN_local 1
#define MPZATRN_assigned 2
#define ORZATRN_var 1
#define PRZATRN_pvar 2
#define QRZATRN_other 3
static A68_423   XAABTRN = {"seqchoices"}; 
A_GISVEC(A68_VC ,YAABTRN,XAABTRN,10)
static A68_456   DKABTRN = {"sequence_series"}; 
A_GISVEC(A68_VC ,EKABTRN,DKABTRN,15)
typedef struct   /* env of non-global proc */
{
A68_BOOL * GUYATRN_changed;
A68_250 ** FUYATRN_newclosure;
A68_97  Msg;
A68_247 *** HUYATRN_newptr;
} KUYATRN_check_closure;
typedef struct   /* env of non-global proc */
{
A68_INT * MUYATRN_delayclosureno;
A68_400  IUYATRN_check_closure;
A68_250 ** FUYATRN_newclosure;
} PUYATRN_exists_pvar;
typedef struct   /* env of non-global proc */
{
A68_97  Msg;
} TUYATRN_sysfault;
typedef struct   /* env of non-global proc */
{
int dummy;
} SVYATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  ZVYATRN_pvarname;
} PWYATRN_delay_outer;
typedef struct   /* env of non-global proc */
{
A68_VC  ZVYATRN_pvarname;
} WAZATRN_delay_usage;
typedef struct   /* env of non-global proc */
{
A68_308  ECZATRN_type_simplify;
} GCZATRN_type_simplify;
typedef struct   /* env of non-global proc */
{
A68_421  TCZATRN_const_simplify;
} VCZATRN_const_simplify;
typedef struct   /* env of non-global proc */
{
A68_308  ECZATRN_type_simplify;
A68_36  RUYATRN_sysfault;
} KDZATRN_type_index;
typedef struct   /* env of non-global proc */
{
A68_308  ECZATRN_type_simplify;
A68_36  RUYATRN_sysfault;
A68_424  BEZATRN_unit_index;
} DEZATRN_unit_index;
typedef struct   /* env of non-global proc */
{
A68_421  TCZATRN_const_simplify;
A68_308  ECZATRN_type_simplify;
} YFZATRN_const_elem;
typedef struct   /* env of non-global proc */
{
A68_426  TGZATRN_type_sort;
A68_36  RUYATRN_sysfault;
} VGZATRN_type_sort;
typedef struct   /* env of non-global proc */
{
int dummy;
} VHZATRN_make_ustr;
typedef struct   /* env of non-global proc */
{
A68_426  TGZATRN_type_sort;
A68_428  THZATRN_make_ustr;
} PJZATRN_make_newunit;
typedef struct   /* env of non-global proc */
{
A68_430  NJZATRN_make_newunit;
A68_432  CNZATRN_assign_unit;
A68_36  RUYATRN_sysfault;
} ENZATRN_assign_unit;
typedef struct   /* env of non-global proc */
{
A68_434  GOZATRN_unit_nameno;
A68_36  RUYATRN_sysfault;
} IOZATRN_unit_nameno;
typedef struct   /* env of non-global proc */
{
A68_435  SOZATRN_simple_unit;
} UOZATRN_simple_unit;
typedef struct   /* env of non-global proc */
{
A68_434  GOZATRN_unit_nameno;
A68_422  IDZATRN_type_index;
A68_36  RUYATRN_sysfault;
A68_236  EUYATRN_nullnametype;
A68_421  TCZATRN_const_simplify;
A68_425  WFZATRN_const_elem;
A68_424  BEZATRN_unit_index;
A68_435  SOZATRN_simple_unit;
A68_432  CNZATRN_assign_unit;
A68_400  NUYATRN_exists_pvar;
} IPZATRN_fndec_seq;
typedef struct   /* env of non-global proc */
{
A68_436  GPZATRN_fndec_seq;
A68_420  UAZATRN_delay_usage;
A68_INT * MUYATRN_delayclosureno;
} QMABTRN_outerfn_seq;
typedef struct   /* env of non-global proc */
{
A68_394  OMABTRN_outerfn_seq;
} LOABTRN_anonymous;
typedef struct   /* env of non-global proc */
{
int dummy;
} ZWYATRN_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} VXYATRN_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} XYYATRN_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} QZYATRN_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} IAZATRN_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} EBZATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_176 *** CIZATRN_newptr;
A68_INT * AIZATRN_oldindex;
} GIZATRN_add_elem;
typedef struct   /* env of non-global proc */
{
int dummy;
} YJZATRN_sort;
typedef struct   /* env of non-global proc */
{
A68_INT  JPZATRN_n_nametypes;
A_PAD_INT(PAD_140)
} QPZATRN_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} CQZATRN_update_tables;
typedef struct   /* env of non-global proc */
{
A68_INT * WPZATRN_nametypeno;
A68_237 * XPZATRN_newfdec;
A68_BOOL * VPZATRN_nametypechange;
} MQZATRN_add_nametype;
typedef struct   /* env of non-global proc */
{
A68_237 * Fdec;
A68_438  KQZATRN_add_nametype;
A68_439  URZATRN_names_nameno;
} WRZATRN_names_nameno;
typedef struct   /* env of non-global proc */
{
A68_434  GOZATRN_unit_nameno;
A68_422  IDZATRN_type_index;
A68_240 * Env;
A68_237 * Fdec;
A68_438  KQZATRN_add_nametype;
} VSZATRN_unit_names;
typedef struct   /* env of non-global proc */
{
A68_442 * WTZATRN_sequence_series;
} CUZATRN_seqstep_unit;
typedef struct   /* env of non-global proc */
{
A68_442 * WTZATRN_sequence_series;
} VUZATRN_usequence_unit;
typedef struct   /* env of non-global proc */
{
A68_444  TUZATRN_usequence_unit;
} YVZATRN_unit_seq;
typedef struct   /* env of non-global proc */
{
A68_32  TPZATRN_vars;
A68_434  GOZATRN_unit_nameno;
} RWZATRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_32  TPZATRN_vars;
A68_353 * RXZATRN_scan_seqcase;
A68_237 * Fdec;
A68_438  KQZATRN_add_nametype;
A68_439  URZATRN_names_nameno;
A68_445  WVZATRN_unit_seq;
A68_443  AUZATRN_seqstep_unit;
A68_36  RUYATRN_sysfault;
A68_437  AQZATRN_update_tables;
A68_240 * Env;
A68_236  EUYATRN_nullnametype;
} XXZATRN_seqcase_let;
typedef struct   /* env of non-global proc */
{
A68_443  AUZATRN_seqstep_unit;
} YBABTRN_seqcond_let;
typedef struct   /* env of non-global proc */
{
A68_443  AUZATRN_seqstep_unit;
} OCABTRN_seqrepl_let;
typedef struct   /* env of non-global proc */
{
A68_443  AUZATRN_seqstep_unit;
} CDABTRN_seqrow_let;
typedef struct   /* env of non-global proc */
{
A68_240 * Env;
A68_237 * Fdec;
A68_439  URZATRN_names_nameno;
} RDABTRN_seqpvar_make;
typedef struct   /* env of non-global proc */
{
A68_421  TCZATRN_const_simplify;
A68_240 * Env;
A68_425  WFZATRN_const_elem;
A68_451  PDABTRN_seqpvar_make;
A68_424  BEZATRN_unit_index;
A68_435  SOZATRN_simple_unit;
A68_237 * Fdec;
A68_438  KQZATRN_add_nametype;
A68_236  EUYATRN_nullnametype;
A68_440  TSZATRN_unit_names;
A68_432  CNZATRN_assign_unit;
A68_437  AQZATRN_update_tables;
A68_439  URZATRN_names_nameno;
A68_BOOL * With_pvar;
A68_400  NUYATRN_exists_pvar;
A68_446  VXZATRN_seqcase_let;
A68_448  WBABTRN_seqcond_let;
A68_449  MCABTRN_seqrepl_let;
A68_450  ADABTRN_seqrow_let;
A68_442 * WTZATRN_sequence_series;
A68_36  RUYATRN_sysfault;
} DFABTRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_INT  JPZATRN_n_nametypes;
A_PAD_INT(PAD_143)
} JKABTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_439  URZATRN_names_nameno;
A68_32  MKABTRN_namenos;
} WKABTRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_445  WVZATRN_unit_seq;
A68_32  MKABTRN_namenos;
} FLABTRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_436  GPZATRN_fndec_seq;
A68_BOOL * RMABTRN_with_pvar;
A68_246  Ofn;
} WMABTRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_INT  HNABTRN_newfnno;
A_PAD_INT(PAD_144)
} LNABTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  OQZATRN_max;
A_PAD_INT(PAD_141)
} UQZATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  OQZATRN_max;
A_PAD_INT(PAD_142)
} BRZATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_434  GOZATRN_unit_nameno;
A68_422  IDZATRN_type_index;
A68_139  Rhs;
A68_240 * Env;
A68_237 * Fdec;
A68_438  KQZATRN_add_nametype;
A68_408 ** Translation;
} BTZATRN_elem_names;
typedef struct   /* env of non-global proc */
{
A68_32  Namenos;
} ZYZATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_439  URZATRN_names_nameno;
A68_32  CZZATRN_newnamenos;
} JZZATRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_445  WVZATRN_unit_seq;
A68_32  CZZATRN_newnamenos;
} SZZATRN_anonymous;
typedef struct   /* env of non-global proc */
{
int dummy;
} YDABTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_190 *** FFABTRN_nextstep;
} JFABTRN_addstep;
typedef struct   /* env of non-global proc */
{
A68_421  TCZATRN_const_simplify;
A68_240 * Env;
A68_425  WFZATRN_const_elem;
A68_453  HFABTRN_addstep;
A68_451  PDABTRN_seqpvar_make;
A68_407 ** Pvars;
A68_32  Namenos;
A68_424  BEZATRN_unit_index;
} PFABTRN_seqpvar_delay;
typedef struct   /* env of non-global proc */
{
A68_435  SOZATRN_simple_unit;
A68_237 * Fdec;
A68_240 * Env;
A68_438  KQZATRN_add_nametype;
A68_236  EUYATRN_nullnametype;
A68_453  HFABTRN_addstep;
A68_440  TSZATRN_unit_names;
A68_432  CNZATRN_assign_unit;
A68_424  BEZATRN_unit_index;
A68_437  AQZATRN_update_tables;
} LGABTRN_seqassign_let;

A68_VOID  AUYATRN_transform_sequences(A68_250 * Closure, A68_97  Msg, A68_352  *ReturnedValue);

A_STATIC A68_VOID  JUYATRN_check_closure(void *NonLocals);

A_STATIC A68_VOID  OUYATRN_exists_pvar(void *NonLocals);

A_STATIC A68_VOID  SUYATRN_sysfault(A68_VC  S, void *NonLocals);

A_STATIC A68_124 * YUYATRN_makefint(A68_INT  I);

A_STATIC A68_VOID  EVYATRN_varid(A68_VC  Name, A68_INT  No, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  RVYATRN_generator(A68_BOOL  PVYATRN_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CWYATRN_fnbody_seq(A68_233  Fbody, A68_353 * Tprocs, A68_347  *ReturnedValue);

A_STATIC A68_VOID  OWYATRN_delay_outer(A68_INT  Closureno, A68_246  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  YWYATRN_generator(A68_BOOL  WWYATRN_anonymous, A68_238  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  UXYATRN_generator(A68_BOOL  SXYATRN_anonymous, A68_239  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WYYATRN_generator(A68_BOOL  UYYATRN_anonymous, A68_243  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PZYATRN_generator(A68_BOOL  NZYATRN_anonymous, A68_244  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HAZATRN_generator(A68_BOOL  FAZATRN_anonymous, A68_245  *ReturnedValue, void *NonLocals);

A_STATIC A68_237 * VAZATRN_delay_usage(A68_INT  Closureno, void *NonLocals);

A_STATIC A68_VOID  DBZATRN_generator(A68_BOOL  BBZATRN_anonymous, A68_239  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FCZATRN_type_simplify(A68_139  T, A68_240 * Env, A68_139  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  UCZATRN_const_simplify(A68_161  C, A68_240 * Env, A68_161  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JDZATRN_type_index(A68_139  Ty, A68_INT  Index, A68_240 * Env, A68_139  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CEZATRN_unit_index(A68_161  Unit, A68_INT  Index, A68_240 * Env, A68_161  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XFZATRN_const_elem(A68_161  Cs, A68_BOOL * Simple, A68_240 * Env, A68_161  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  UGZATRN_type_sort(A68_139  T, A68_240 * Env, void *NonLocals);

A_STATIC A68_VOID  UHZATRN_make_ustr(A68_161  Oldval, A68_161  Newval, A68_INT  Size, A68_INT  Lwb, A68_INT  Upb, A68_353 * Tprocs, A68_161  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FIZATRN_add_elem(A68_161  U, void *NonLocals);

A_STATIC A68_VOID  OJZATRN_make_newunit(A68_BOOL  Trim, A68_161  Oldval, A68_161  Newval, A68_138  Index1, A68_406  Cl, A68_353 * Tprocs, A68_161  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  XJZATRN_sort(A68_BOOL  String, A68_BOOL  Lhs, A68_BOOL  Lrow, A68_BOOL  Rrow, A68_161 * Val, void *NonLocals);

A_STATIC A68_VOID  DNZATRN_assign_unit(A68_161  To, A68_161  From, A68_406  Close, A68_353 * Tprocs, A68_161  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  HOZATRN_unit_nameno(A68_161  Unit, void *NonLocals);

A_STATIC A68_BOOL  TOZATRN_simple_unit(A68_161  U, void *NonLocals);

A_STATIC A68_VOID  HPZATRN_fndec_seq(A68_237 * Fdec, A68_353 * Tprocs, A68_BOOL * With_pvar, A68_240 * Env, A68_350  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PPZATRN_generator(A68_BOOL  NPZATRN_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BQZATRN_update_tables(A68_408 * List, A68_32  Namenos, void *NonLocals);

A_STATIC A68_INT  LQZATRN_add_nametype(A68_INT  Oldindex, A68_BOOL  Newname, A68_236  Oldnt, A68_320  Tc, void *NonLocals);

A_STATIC A68_VOID  TQZATRN_generator(A68_BOOL  RQZATRN_anonymous, A68_239  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ARZATRN_generator(A68_BOOL  YQZATRN_anonymous, A68_239  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VRZATRN_names_nameno(A68_202 * Namelist, A68_32  Namenos, A68_INT  Sort, A68_337  *ReturnedValue, void *NonLocals);

A_STATIC A68_202 * USZATRN_unit_names(A68_161  Unit, A68_139  Rhs, A68_408 ** Translation, void *NonLocals);

A_STATIC A68_202 * ATZATRN_elem_names(A68_161  U, A68_INT  Index, void *NonLocals);

A_STATIC A68_VOID  BUZATRN_seqstep_unit(A68_210  Step, A68_353 * Tprocs, A68_32  Namenos, A68_161  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  UUZATRN_usequence_unit(A68_183 * Useq, A68_353 * Tprocs, A68_32  Namenos, A68_329  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XVZATRN_unit_seq(A68_161  U, A68_353 * Tprocs, A68_32  Namenos, A68_329  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QWZATRN_anonymous(A68_210  S, A68_353 * Tprocs, A68_340  *ReturnedValue, void *NonLocals);

A_STATIC A68_195 * WXZATRN_seqcase_let(A68_215 * Scase, A68_353 * Tprocs, A68_32  Namenos, void *NonLocals);

A_STATIC A68_VOID  YYZATRN_generator(A68_BOOL  WYZATRN_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IZZATRN_anonymous(A68_202 * N, A68_353 * Tp, A68_337  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RZZATRN_anonymous(A68_161  U, A68_353 * Tp, A68_329  *ReturnedValue, void *NonLocals);

A_STATIC A68_195 * XBABTRN_seqcond_let(A68_216 * Scond, A68_353 * Tprocs, A68_32  Namenos, void *NonLocals);

A_STATIC A68_195 * NCABTRN_seqrepl_let(A68_217 * Srepl, A68_353 * Tprocs, A68_32  Namenos, void *NonLocals);

A_STATIC A68_195 * BDABTRN_seqrow_let(A68_219 * Srow, A68_353 * Tprocs, A68_32  Namenos, void *NonLocals);

A_STATIC A68_196 * QDABTRN_seqpvar_make(A68_161  Init, A68_202 * Nms, A68_407 ** Pvars, A68_32  Namenos, void *NonLocals);

A_STATIC A68_VOID  XDABTRN_generator(A68_BOOL  VDABTRN_anonymous, A68_203  *ReturnedValue, void *NonLocals);

A_STATIC A68_190 * CFABTRN_anonymous(A68_209 * Seq, A68_353 * Tprocs, A68_407 ** Pvars, A68_32  Namenos, void *NonLocals);

A_STATIC A68_VOID  IFABTRN_addstep(A68_191  S, void *NonLocals);

A_STATIC A68_VOID  OFABTRN_seqpvar_delay(A68_213 * Spvar, void *NonLocals);

A_STATIC A68_195 * KGABTRN_seqassign_let(A68_214 * Osa, A68_353 * Tprocs, A68_32  Namenos, void *NonLocals);

A_STATIC A68_VOID  IKABTRN_generator(A68_BOOL  GKABTRN_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VKABTRN_anonymous(A68_202 * N, A68_353 * Tp, A68_337  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ELABTRN_anonymous(A68_161  U, A68_353 * Tp, A68_329  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PMABTRN_outerfn_seq(A68_246  Ofn, A68_353 * Tprocs, A68_351  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VMABTRN_anonymous(A68_237 * Fd, A68_353 * Tprocs, A68_350  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KNABTRN_generator(A68_BOOL  INABTRN_anonymous, A68_245  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KOABTRN_anonymous(A68_246  O, A68_353 * Tprocs, A68_351  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  TQZATRN_generator(A68_BOOL  RQZATRN_anonymous, A68_239  *ReturnedValue, void *NonLocals)
#define NL(x) (((UQZATRN_generator *)NonLocals)->x)
{ 
A68_239  VQZATRN;  /* clause result */
A68_239  WQZATRN;  /* OPERATORS - dynamic generator */
{ 
WQZATRN.upb = NL(OQZATRN_max) ;
( RQZATRN_anonymous? A_VLOC(A68_236 ,WQZATRN): A_VHEAP(A68_236 ,WQZATRN) );
VQZATRN = WQZATRN;
} 
*ReturnedValue = (VQZATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ARZATRN_generator(A68_BOOL  YQZATRN_anonymous, A68_239  *ReturnedValue, void *NonLocals)
#define NL(x) (((BRZATRN_generator *)NonLocals)->x)
{ 
A68_239  CRZATRN;  /* clause result */
A68_239  DRZATRN;  /* OPERATORS - dynamic generator */
{ 
DRZATRN.upb = (NL(OQZATRN_max)+10) ;
( YQZATRN_anonymous? A_VLOC(A68_236 ,DRZATRN): A_VHEAP(A68_236 ,DRZATRN) );
CRZATRN = DRZATRN;
} 
*ReturnedValue = (CRZATRN);
return;
} 
#undef NL

A_STATIC A68_202 * ATZATRN_elem_names(A68_161  U, A68_INT  Index, void *NonLocals)
#define NL(x) (((BTZATRN_elem_names *)NonLocals)->x)
{ 
A68_INT  CTZATRN_oldno;
A68_236  DTZATRN;  /* collateral clause result */
A68_139  ETZATRN;  /* avoid structure result */
A68_114  FTZATRN;  /* OPERATORS - mode -> union mode */
A68_239  GTZATRN;  /* OPERATORS - simple index */
A68_236  HTZATRN_nt;
A68_320  ITZATRN;  /* collateral clause result */
A68_INT  JTZATRN_newno;
A68_408  KTZATRN;  /* collateral clause result */
A68_408 * LTZATRN;  /* YIELD */
A68_202  MTZATRN;  /* collateral clause result */
A68_202 * NTZATRN;  /* clause result */
A68_202 * OTZATRN;  /* YIELD */
A_PROC_ENTRY(elem_names);
 /* line 493: */
{ 
CTZATRN_oldno = A_CALLPROC(NL(GOZATRN_unit_nameno),(U),(U,(NL(GOZATRN_unit_nameno)).nonlocals));
 /* line 494: */
 /* line 495: */
 /* line 496: */
if ( (CTZATRN_oldno==0) )
{ 
DTZATRN.Name = TTCAOST_nullid;
A_CALLPROC(NL(IDZATRN_type_index),(NL(Rhs), Index, NL(Env), &ETZATRN),(NL(Rhs), Index, NL(Env), &ETZATRN,(NL(IDZATRN_type_index)).nonlocals));
DTZATRN.Type = ETZATRN;
 /* line 497: */
DTZATRN.Attr = A_UNITE(FTZATRN,mode5,5,(&ZHAATRN_attrnull));
} 
else
{ 
 /* line 498: */
GTZATRN = (*(&(NL(Fdec)->Nametypes))) ;
DTZATRN = (*(&A_VINDEX(GTZATRN,CTZATRN_oldno)));
} 
HTZATRN_nt = DTZATRN;
 /* line 499: */
ITZATRN.T = HTZATRN_nt.Type;
ITZATRN.C = (CTZATRN_oldno==0);
JTZATRN_newno = A_CALLPROC(NL(KQZATRN_add_nametype),(CTZATRN_oldno, A68_TRUE, HTZATRN_nt, ITZATRN),(CTZATRN_oldno, A68_TRUE, HTZATRN_nt, ITZATRN,(NL(KQZATRN_add_nametype)).nonlocals));
 /* line 500: */
KTZATRN.Oldnameno = CTZATRN_oldno;
KTZATRN.Newnameno = JTZATRN_newno;
KTZATRN.Rest = (*NL(Translation));
LTZATRN = A_HEAP(A68_408 ) ;
(*LTZATRN) = KTZATRN ;
(*NL(Translation)) = LTZATRN;
 /* line 501: */
MTZATRN.Nameno = JTZATRN_newno;
 /* line 502: */
MTZATRN.Rest = NAAATRN_nilnames;
OTZATRN = A_HEAP(A68_202 ) ;
(*OTZATRN) = MTZATRN ;
NTZATRN = OTZATRN;
} 
A_PROC_EXIT(elem_names);
return( NTZATRN );
} 
#undef NL

A_STATIC A68_VOID  YYZATRN_generator(A68_BOOL  WYZATRN_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZYZATRN_generator *)NonLocals)->x)
{ 
A68_32  AZZATRN;  /* clause result */
A68_32  BZZATRN;  /* OPERATORS - dynamic generator */
{ 
BZZATRN.upb = NL(Namenos).upb ;
( WYZATRN_anonymous? A_VLOC(A68_INT ,BZZATRN): A_VHEAP(A68_INT ,BZZATRN) );
AZZATRN = BZZATRN;
} 
*ReturnedValue = (AZZATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  IZZATRN_anonymous(A68_202 * N, A68_353 * Tp, A68_337  *ReturnedValue, void *NonLocals)
#define NL(x) (((JZZATRN_anonymous *)NonLocals)->x)
{ 
A68_337  KZZATRN;  /* clause result */
A68_337  LZZATRN;  /* avoid structure result */
 /* line 646: */
A_CALLPROC(NL(URZATRN_names_nameno),(N, NL(CZZATRN_newnamenos), QRZATRN_other, &LZZATRN),(N, NL(CZZATRN_newnamenos), QRZATRN_other, &LZZATRN,(NL(URZATRN_names_nameno)).nonlocals));
KZZATRN = LZZATRN;
*ReturnedValue = (KZZATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  RZZATRN_anonymous(A68_161  U, A68_353 * Tp, A68_329  *ReturnedValue, void *NonLocals)
#define NL(x) (((SZZATRN_anonymous *)NonLocals)->x)
{ 
A68_329  TZZATRN;  /* clause result */
A68_329  UZZATRN;  /* avoid structure result */
 /* line 648: */
A_CALLPROC(NL(WVZATRN_unit_seq),(U, Tp, NL(CZZATRN_newnamenos), &UZZATRN),(U, Tp, NL(CZZATRN_newnamenos), &UZZATRN,(NL(WVZATRN_unit_seq)).nonlocals));
TZZATRN = UZZATRN;
*ReturnedValue = (TZZATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  XDABTRN_generator(A68_BOOL  VDABTRN_anonymous, A68_203  *ReturnedValue, void *NonLocals)
#define NL(x) (((YDABTRN_generator *)NonLocals)->x)
{ 
A68_203  ZDABTRN;  /* clause result */
A68_203  AEABTRN;  /* OPERATORS - dynamic generator */
{ 
AEABTRN.upb = 2 ;
( VDABTRN_anonymous? A_VLOC(A68_204 ,AEABTRN): A_VHEAP(A68_204 ,AEABTRN) );
ZDABTRN = AEABTRN;
} 
*ReturnedValue = (ZDABTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  IFABTRN_addstep(A68_191  S, void *NonLocals)
#define NL(x) (((JFABTRN_addstep *)NonLocals)->x)
{ 
A68_190  KFABTRN;  /* collateral clause result */
A68_190 * LFABTRN;  /* YIELD */
A_PROC_ENTRY(addstep);
 /* line 747: */
{ 
KFABTRN.Step = S;
KFABTRN.Rest = SAAATRN_nilseries;
LFABTRN = A_HEAP(A68_190 ) ;
(*LFABTRN) = KFABTRN ;
(**NL(FFABTRN_nextstep)) = LFABTRN;
 /* line 748: */
 /* line 749: */
(*NL(FFABTRN_nextstep)) = (&((**NL(FFABTRN_nextstep))->Rest));
} 
A_PROC_EXIT(addstep);
return;
} 
#undef NL

A_STATIC A68_VOID  OFABTRN_seqpvar_delay(A68_213 * Spvar, void *NonLocals)
#define NL(x) (((PFABTRN_seqpvar_delay *)NonLocals)->x)
{ 
A68_202 * QFABTRN_names;
A68_BOOL  RFABTRN_simple;
A68_161  SFABTRN;  /* clause result */
A68_161  TFABTRN;  /* avoid structure result */
A68_161  UFABTRN_cs;
A68_161  VFABTRN;  /* avoid structure result */
A68_161  WFABTRN_c;
A68_191  XFABTRN;  /* OPERATORS - mode -> union mode */
A68_196 * YFABTRN;  /* YIELD */
A68_INT  ZFABTRN_index;
A68_161  AGABTRN;  /* avoid structure result */
A68_161  BGABTRN_init;
A68_202 * CGABTRN_ns;
A68_202  DGABTRN;  /* collateral clause result */
A68_191  EGABTRN;  /* OPERATORS - mode -> union mode */
A68_196 * FGABTRN;  /* YIELD */
A_PROC_ENTRY(seqpvar_delay);
 /* line 754: */
 /* line 760: */
{ 
QFABTRN_names = (*(&(Spvar->Pvarnames)));
 /* line 761: */
RFABTRN_simple = ((*(&(QFABTRN_names->Rest)))==NAAATRN_nilnames);
 /* line 762: */
 /* line 763: */
 /* line 764: */
if ( RFABTRN_simple )
{ 
SFABTRN = (*(&(Spvar->Init)));
} 
else
{ 
A_CALLPROC(NL(TCZATRN_const_simplify),((*(&(Spvar->Init))), NL(Env), &TFABTRN),((*(&(Spvar->Init))), NL(Env), &TFABTRN,(NL(TCZATRN_const_simplify)).nonlocals));
UFABTRN_cs = TFABTRN;
 /* line 765: */
 /* line 766: */
A_CALLPROC(NL(WFZATRN_const_elem),(UFABTRN_cs, (&RFABTRN_simple), NL(Env), &VFABTRN),(UFABTRN_cs, (&RFABTRN_simple), NL(Env), &VFABTRN,(NL(WFZATRN_const_elem)).nonlocals));
SFABTRN = VFABTRN;
} 
WFABTRN_c = SFABTRN;
 /* line 767: */
 /* line 768: */
if ( RFABTRN_simple )
{ 
 /* line 769: */
YFABTRN = A_CALLPROC(NL(PDABTRN_seqpvar_make),(WFABTRN_c, QFABTRN_names, NL(Pvars), NL(Namenos)),(WFABTRN_c, QFABTRN_names, NL(Pvars), NL(Namenos),(NL(PDABTRN_seqpvar_make)).nonlocals)) ;
A_CALLPROC(NL(HFABTRN_addstep),(A_UNITE(XFABTRN,mode9,9,YFABTRN)),(A_UNITE(XFABTRN,mode9,9,YFABTRN),(NL(HFABTRN_addstep)).nonlocals));
} 
else
{ 
for ( ZFABTRN_index = 1;;
ZFABTRN_index += 1 ) 
{ 
 /* line 770: */
if ( !((QFABTRN_names!=NAAATRN_nilnames)) ) break;
A_CALLPROC(NL(BEZATRN_unit_index),(WFABTRN_c, ZFABTRN_index, NL(Env), &AGABTRN),(WFABTRN_c, ZFABTRN_index, NL(Env), &AGABTRN,(NL(BEZATRN_unit_index)).nonlocals));
BGABTRN_init = AGABTRN;
 /* line 771: */
CGABTRN_ns = (A_HEAP(A68_202 ));
DGABTRN.Nameno = (*(&(QFABTRN_names->Nameno)));
DGABTRN.Rest = NAAATRN_nilnames;
(*CGABTRN_ns) = DGABTRN;
 /* line 772: */
FGABTRN = A_CALLPROC(NL(PDABTRN_seqpvar_make),(BGABTRN_init, CGABTRN_ns, NL(Pvars), NL(Namenos)),(BGABTRN_init, CGABTRN_ns, NL(Pvars), NL(Namenos),(NL(PDABTRN_seqpvar_make)).nonlocals)) ;
A_CALLPROC(NL(HFABTRN_addstep),(A_UNITE(EGABTRN,mode9,9,FGABTRN)),(A_UNITE(EGABTRN,mode9,9,FGABTRN),(NL(HFABTRN_addstep)).nonlocals));
 /* line 773: */
 /* line 774: */
QFABTRN_names = (*(&(QFABTRN_names->Rest)));
}
 /* line 775: */
 /* line 776: */
} 
} 
A_PROC_EXIT(seqpvar_delay);
return;
} 
#undef NL
 /* line 779: */

A_STATIC A68_195 * KGABTRN_seqassign_let(A68_214 * Osa, A68_353 * Tprocs, A68_32  Namenos, void *NonLocals)
#define NL(x) (((LGABTRN_seqassign_let *)NonLocals)->x)
{ 
A68_BOOL  MGABTRN_simple;
A68_408 * NGABTRN_translation;
A68_INT  OGABTRN_letno;
A68_161  PGABTRN;  /* united object - for case conformity */
A68_176 * QGABTRN_ust;
A68_139  RGABTRN;  /* avoid structure result */
A68_139  SGABTRN_t;
A68_161  TGABTRN;  /* united object - for case conformity */
A68_320  UGABTRN;  /* collateral clause result */
A68_372  VGABTRN;  /* CALL */
A68_329  WGABTRN;  /* avoid structure result */
A68_161  XGABTRN_from;
A68_195  YGABTRN;  /* collateral clause result */
A68_202  ZGABTRN;  /* collateral clause result */
A68_202 * AHABTRN;  /* YIELD */
A68_195 * BHABTRN;  /* YIELD */
A68_191  CHABTRN;  /* OPERATORS - mode -> union mode */
A68_202 * DHABTRN;  /* clause result */
A68_161  EHABTRN;  /* OPERATORS - mode -> union mode */
A68_139  FHABTRN;  /* OPERATORS - mode -> union mode */
A68_202 * GHABTRN_letnames;
A68_166  HHABTRN;  /* collateral clause result */
A68_161  IHABTRN;  /* clause result */
A68_166 * JHABTRN;  /* YIELD */
A68_161  KHABTRN;  /* OPERATORS - mode -> union mode */
A68_372  LHABTRN;  /* CALL */
A68_329  MHABTRN;  /* avoid structure result */
A68_161  NHABTRN_from;
A68_161  OHABTRN;  /* clause result */
A68_161  PHABTRN;  /* united object - for case conformity */
A68_176 * QHABTRN_us;
A68_176 * RHABTRN_val;
A68_176 ** SHABTRN_nextval;
A68_176 * THABTRN_to;
A68_INT  UHABTRN_i;
A68_406  VHABTRN;  /* collateral clause result */
A68_161  WHABTRN;  /* avoid structure result */
A68_161  XHABTRN;  /* avoid structure result */
A68_161  YHABTRN_u;
A68_176  ZHABTRN;  /* collateral clause result */
A68_176 * AIABTRN;  /* YIELD */
A68_161  BIABTRN;  /* OPERATORS - mode -> union mode */
A68_406  CIABTRN;  /* collateral clause result */
A68_161  DIABTRN;  /* avoid structure result */
A68_161  EIABTRN_letval;
A68_195  FIABTRN;  /* collateral clause result */
A68_195 * GIABTRN;  /* clause result */
A68_195 * HIABTRN;  /* YIELD */
A_PROC_ENTRY(seqassign_let);
 /* line 780: */
 /* line 781: */
{ 
MGABTRN_simple = A_CALLPROC(NL(SOZATRN_simple_unit),((*(&(Osa->To)))),((*(&(Osa->To))),(NL(SOZATRN_simple_unit)).nonlocals));
 /* line 784: */
NGABTRN_translation = WUYATRN_nilnamenos;
 /* line 785: */
OGABTRN_letno = 0;
 /* line 786: */
 /* line 787: */
 /* line 788: */
PGABTRN = (*(&(Osa->To))) ;
switch ( PGABTRN.mode )
{ 
case 21: /* REF STRUCT(MODE161,REF MODE176)  */
QGABTRN_ust = (PGABTRN.data.mode21);
 /* line 789: */
{ 
VUNATRN_unit_type( (*(&(Osa->From))), NL(Fdec), NL(Env), &RGABTRN );
SGABTRN_t = RGABTRN;
 /* line 790: */
 /* line 791: */
if ( !MGABTRN_simple )
{ 
 /* line 792: */
TGABTRN = (*(&(Osa->From))) ;
switch ( TGABTRN.mode )
{ 
case 11: /* REF STRUCT(INT,INT)  */
 /* line 793: */
/*SKIP*/;
break;
case 20: /* REF STRUCT(MODE123,MODE161)  */
 /* line 794: */
/*SKIP*/;
break;
case 21: /* REF STRUCT(MODE161,REF MODE176)  */
 /* line 795: */
/*SKIP*/;
break;
default: 
 /* line 796: */
UGABTRN.T = SGABTRN_t;
UGABTRN.C = A68_TRUE;
OGABTRN_letno = A_CALLPROC(NL(KQZATRN_add_nametype),(0, A68_TRUE, NL(EUYATRN_nullnametype), UGABTRN),(0, A68_TRUE, NL(EUYATRN_nullnametype), UGABTRN,(NL(KQZATRN_add_nametype)).nonlocals));
 /* line 797: */
VGABTRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(VGABTRN,((*(&(Osa->From))), Tprocs, &WGABTRN),((*(&(Osa->From))), Tprocs, &WGABTRN,(VGABTRN).nonlocals));
XGABTRN_from = WGABTRN.U;
 /* line 798: */
 /* line 799: */
ZGABTRN.Nameno = OGABTRN_letno;
ZGABTRN.Rest = NAAATRN_nilnames;
AHABTRN = A_HEAP(A68_202 ) ;
(*AHABTRN) = ZGABTRN ;
YGABTRN.Letnames = AHABTRN;
YGABTRN.Unit = XGABTRN_from;
 /* line 800: */
 /* line 801: */
BHABTRN = A_HEAP(A68_195 ) ;
(*BHABTRN) = YGABTRN ;
A_CALLPROC(NL(HFABTRN_addstep),(A_UNITE(CHABTRN,mode8,8,BHABTRN)),(A_UNITE(CHABTRN,mode8,8,BHABTRN),(NL(HFABTRN_addstep)).nonlocals));
break;
} 
} 
 /* line 802: */
 /* line 803: */
 /* line 804: */
DHABTRN = A_CALLPROC(NL(TSZATRN_unit_names),(A_UNITE(EHABTRN,mode21,21,QGABTRN_ust), SGABTRN_t, (&NGABTRN_translation)),(A_UNITE(EHABTRN,mode21,21,QGABTRN_ust), SGABTRN_t, (&NGABTRN_translation),(NL(TSZATRN_unit_names)).nonlocals));
} 
break;
default: 
 /* line 805: */
DHABTRN = A_CALLPROC(NL(TSZATRN_unit_names),((*(&(Osa->To))), A_UNITE(FHABTRN,mode9,9,(&DIAATRN_tnull)), (&NGABTRN_translation)),((*(&(Osa->To))), A_UNITE(FHABTRN,mode9,9,(&DIAATRN_tnull)), (&NGABTRN_translation),(NL(TSZATRN_unit_names)).nonlocals));
break;
} 
GHABTRN_letnames = DHABTRN;
 /* line 807: */
if ( (OGABTRN_letno!=0) )
{ 
HHABTRN.Sort = KKAATRN_usource;
 /* line 808: */
HHABTRN.Nameno = OGABTRN_letno;
JHABTRN = A_HEAP(A68_166 ) ;
(*JHABTRN) = HHABTRN ;
IHABTRN = A_UNITE(KHABTRN,mode11,11,JHABTRN);
} 
else
{ 
 /* line 809: */
LHABTRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(LHABTRN,((*(&(Osa->From))), Tprocs, &MHABTRN),((*(&(Osa->From))), Tprocs, &MHABTRN,(LHABTRN).nonlocals));
IHABTRN = MHABTRN.U;
} 
NHABTRN_from = IHABTRN;
 /* line 810: */
 /* line 811: */
 /* line 812: */
 /* line 813: */
if ( MGABTRN_simple )
{ 
OHABTRN = NHABTRN_from;
} 
else
{ 
 /* line 814: */
PHABTRN = (*(&(Osa->To))) ;
switch ( PHABTRN.mode )
{ 
case 21: /* REF STRUCT(MODE161,REF MODE176)  */
QHABTRN_us = (PHABTRN.data.mode21);
 /* line 815: */
{ 
RHABTRN_val = IAAATRN_nilustr;
 /* line 816: */
SHABTRN_nextval = (&RHABTRN_val);
 /* line 817: */
THABTRN_to = QHABTRN_us;
 /* line 818: */
for ( UHABTRN_i = 1;;
UHABTRN_i += 1 ) 
{ 
 /* line 819: */
if ( !((THABTRN_to!=IAAATRN_nilustr)) ) break;
 /* line 820: */
 /* line 821: */
VHABTRN.Fdec = NL(Fdec);
VHABTRN.Env = NL(Env);
A_CALLPROC(NL(BEZATRN_unit_index),(NHABTRN_from, UHABTRN_i, NL(Env), &WHABTRN),(NHABTRN_from, UHABTRN_i, NL(Env), &WHABTRN,(NL(BEZATRN_unit_index)).nonlocals));
A_CALLPROC(NL(CNZATRN_assign_unit),((*(&(THABTRN_to->Elem))), WHABTRN, VHABTRN, Tprocs, &XHABTRN),((*(&(THABTRN_to->Elem))), WHABTRN, VHABTRN, Tprocs, &XHABTRN,(NL(CNZATRN_assign_unit)).nonlocals));
YHABTRN_u = XHABTRN;
 /* line 822: */
ZHABTRN.Elem = YHABTRN_u;
ZHABTRN.Rest = IAAATRN_nilustr;
AIABTRN = A_HEAP(A68_176 ) ;
(*AIABTRN) = ZHABTRN ;
(*SHABTRN_nextval) = AIABTRN;
 /* line 823: */
SHABTRN_nextval = (&((*SHABTRN_nextval)->Rest));
 /* line 824: */
 /* line 825: */
THABTRN_to = (*(&(THABTRN_to->Rest)));
}
 /* line 826: */
 /* line 827: */
 /* line 828: */
OHABTRN = A_UNITE(BIABTRN,mode21,21,RHABTRN_val);
} 
break;
default: 
CIABTRN.Fdec = NL(Fdec);
CIABTRN.Env = NL(Env);
 /* line 829: */
 /* line 830: */
A_CALLPROC(NL(CNZATRN_assign_unit),((*(&(Osa->To))), NHABTRN_from, CIABTRN, Tprocs, &DIABTRN),((*(&(Osa->To))), NHABTRN_from, CIABTRN, Tprocs, &DIABTRN,(NL(CNZATRN_assign_unit)).nonlocals));
OHABTRN = DIABTRN;
break;
} 
} 
EIABTRN_letval = OHABTRN;
 /* line 834: */
A_CALLPROC(NL(AQZATRN_update_tables),(NGABTRN_translation, Namenos),(NGABTRN_translation, Namenos,(NL(AQZATRN_update_tables)).nonlocals));
 /* line 835: */
FIABTRN.Letnames = GHABTRN_letnames;
 /* line 836: */
FIABTRN.Unit = EIABTRN_letval;
HIABTRN = A_HEAP(A68_195 ) ;
(*HIABTRN) = FIABTRN ;
GIABTRN = HIABTRN;
} 
A_PROC_EXIT(seqassign_let);
return( GIABTRN );
} 
#undef NL

A_STATIC A68_VOID  YWYATRN_generator(A68_BOOL  WWYATRN_anonymous, A68_238  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZWYATRN_generator *)NonLocals)->x)
{ 
A68_238  AXYATRN;  /* clause result */
A68_238  BXYATRN;  /* OPERATORS - dynamic generator */
{ 
BXYATRN.upb = 2 ;
( WWYATRN_anonymous? A_VLOC(A68_235 ,BXYATRN): A_VHEAP(A68_235 ,BXYATRN) );
AXYATRN = BXYATRN;
} 
*ReturnedValue = (AXYATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  UXYATRN_generator(A68_BOOL  SXYATRN_anonymous, A68_239  *ReturnedValue, void *NonLocals)
#define NL(x) (((VXYATRN_generator *)NonLocals)->x)
{ 
A68_239  WXYATRN;  /* clause result */
A68_239  XXYATRN;  /* OPERATORS - dynamic generator */
{ 
XXYATRN.upb = 2 ;
( SXYATRN_anonymous? A_VLOC(A68_236 ,XXYATRN): A_VHEAP(A68_236 ,XXYATRN) );
WXYATRN = XXYATRN;
} 
*ReturnedValue = (WXYATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  WYYATRN_generator(A68_BOOL  UYYATRN_anonymous, A68_243  *ReturnedValue, void *NonLocals)
#define NL(x) (((XYYATRN_generator *)NonLocals)->x)
{ 
A68_243  YYYATRN;  /* clause result */
A68_243  ZYYATRN;  /* OPERATORS - dynamic generator */
{ 
ZYYATRN.upb = 1 ;
( UYYATRN_anonymous? A_VLOC(A68_154 *,ZYYATRN): A_VHEAP(A68_154 *,ZYYATRN) );
YYYATRN = ZYYATRN;
} 
*ReturnedValue = (YYYATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  PZYATRN_generator(A68_BOOL  NZYATRN_anonymous, A68_244  *ReturnedValue, void *NonLocals)
#define NL(x) (((QZYATRN_generator *)NonLocals)->x)
{ 
A68_244  RZYATRN;  /* clause result */
A68_244  SZYATRN;  /* OPERATORS - dynamic generator */
{ 
SZYATRN.upb = 1 ;
( NZYATRN_anonymous? A_VLOC(A68_160 *,SZYATRN): A_VHEAP(A68_160 *,SZYATRN) );
RZYATRN = SZYATRN;
} 
*ReturnedValue = (RZYATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  HAZATRN_generator(A68_BOOL  FAZATRN_anonymous, A68_245  *ReturnedValue, void *NonLocals)
#define NL(x) (((IAZATRN_generator *)NonLocals)->x)
{ 
A68_245  JAZATRN;  /* clause result */
A68_245  KAZATRN;  /* OPERATORS - dynamic generator */
{ 
KAZATRN.upb = 1 ;
( FAZATRN_anonymous? A_VLOC(A68_237 *,KAZATRN): A_VHEAP(A68_237 *,KAZATRN) );
JAZATRN = KAZATRN;
} 
*ReturnedValue = (JAZATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  DBZATRN_generator(A68_BOOL  BBZATRN_anonymous, A68_239  *ReturnedValue, void *NonLocals)
#define NL(x) (((EBZATRN_generator *)NonLocals)->x)
{ 
A68_239  FBZATRN;  /* clause result */
A68_239  GBZATRN;  /* OPERATORS - dynamic generator */
{ 
GBZATRN.upb = 2 ;
( BBZATRN_anonymous? A_VLOC(A68_236 ,GBZATRN): A_VHEAP(A68_236 ,GBZATRN) );
FBZATRN = GBZATRN;
} 
*ReturnedValue = (FBZATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  FIZATRN_add_elem(A68_161  U, void *NonLocals)
#define NL(x) (((GIZATRN_add_elem *)NonLocals)->x)
{ 
A68_176  HIZATRN;  /* collateral clause result */
A68_176 * IIZATRN;  /* YIELD */
A_PROC_ENTRY(add_elem);
 /* line 282: */
{ 
HIZATRN.Elem = U;
HIZATRN.Rest = IAAATRN_nilustr;
IIZATRN = A_HEAP(A68_176 ) ;
(*IIZATRN) = HIZATRN ;
(*NL(CIZATRN_newptr)) = (&(((**NL(CIZATRN_newptr)) = IIZATRN)->Rest));
 /* line 283: */
 /* line 284: */
(*NL(AIZATRN_oldindex))+=1;
} 
A_PROC_EXIT(add_elem);
return;
} 
#undef NL

A_STATIC A68_INT  XJZATRN_sort(A68_BOOL  String, A68_BOOL  Lhs, A68_BOOL  Lrow, A68_BOOL  Rrow, A68_161 * Val, void *NonLocals)
#define NL(x) (((YJZATRN_sort *)NonLocals)->x)
{ 
A68_INT  ZJZATRN;  /* clause result */
A68_188  AKZATRN;  /* collateral clause result */
A68_123  BKZATRN;  /* OPERATORS - mode -> union mode */
A68_124 * CKZATRN;  /* YIELD */
A68_161  DKZATRN;  /* clause result */
A68_188 * EKZATRN;  /* YIELD */
A68_161  FKZATRN;  /* OPERATORS - mode -> union mode */
A68_175  GKZATRN;  /* collateral clause result */
A68_123  HKZATRN;  /* OPERATORS - mode -> union mode */
A68_124 * IKZATRN;  /* YIELD */
A68_175 * JKZATRN;  /* YIELD */
A68_161  KKZATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(sort);
 /* line 307: */
 /* line 308: */
if ( Lrow )
{ 
if ( Rrow )
{ 
ZJZATRN = VIAATRN_flattenboth;
} 
else
{ 
 /* line 309: */
ZJZATRN = TIAATRN_flattenleft;
} 
} 
else
{ 
 /* line 310: */
if ( Rrow )
{ 
ZJZATRN = UIAATRN_flattenright;
} 
else
{ 
 /* line 311: */
if ( String )
{ 
CKZATRN = YUYATRN_makefint(1) ;
AKZATRN.Size = A_UNITE(BKZATRN,mode1,1,CKZATRN);
 /* line 312: */
AKZATRN.Char = (*Val);
EKZATRN = A_HEAP(A68_188 ) ;
(*EKZATRN) = AKZATRN ;
DKZATRN = A_UNITE(FKZATRN,mode33,33,EKZATRN);
} 
else
{ 
IKZATRN = YUYATRN_makefint(1) ;
GKZATRN.Size = A_UNITE(HKZATRN,mode1,1,IKZATRN);
 /* line 313: */
GKZATRN.Elem = (*Val);
JKZATRN = A_HEAP(A68_175 ) ;
(*JKZATRN) = GKZATRN ;
DKZATRN = A_UNITE(KKZATRN,mode20,20,JKZATRN);
} 
(*Val) = DKZATRN;
 /* line 314: */
if ( Lhs )
{ 
ZJZATRN = UIAATRN_flattenright;
} 
else
{ 
 /* line 315: */
 /* line 316: */
ZJZATRN = TIAATRN_flattenleft;
} 
} 
} 
A_PROC_EXIT(sort);
return( ZJZATRN );
} 
#undef NL

A_STATIC A68_VOID  PPZATRN_generator(A68_BOOL  NPZATRN_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((QPZATRN_generator *)NonLocals)->x)
{ 
A68_32  RPZATRN;  /* clause result */
A68_32  SPZATRN;  /* OPERATORS - dynamic generator */
{ 
SPZATRN.upb = NL(JPZATRN_n_nametypes) ;
( NPZATRN_anonymous? A_VLOC(A68_INT ,SPZATRN): A_VHEAP(A68_INT ,SPZATRN) );
RPZATRN = SPZATRN;
} 
*ReturnedValue = (RPZATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  BQZATRN_update_tables(A68_408 * List, A68_32  Namenos, void *NonLocals)
#define NL(x) (((CQZATRN_update_tables *)NonLocals)->x)
{ 
A68_408 * DQZATRN_nlist;
A68_INT  EQZATRN;  /* YIELD */
A68_INT * FQZATRN;  /* YIELD */
A_PROC_ENTRY(update_tables);
 /* line 429: */
 /* line 430: */
{ 
DQZATRN_nlist = List;
 /* line 431: */
for ( ;; )
{ 
 /* line 432: */
if ( !((DQZATRN_nlist!=WUYATRN_nilnamenos)) ) break;
 /* line 433: */
if ( ((*(&(DQZATRN_nlist->Oldnameno)))!=0) )
{ 
 /* line 434: */
EQZATRN = (*(&(DQZATRN_nlist->Oldnameno))) ;
FQZATRN = (&A_VINDEX(Namenos,EQZATRN)) ;
(*FQZATRN) = (*(&(DQZATRN_nlist->Newnameno)));
} 
 /* line 435: */
 /* line 436: */
DQZATRN_nlist = (*(&(DQZATRN_nlist->Rest)));
}
 /* line 437: */
} 
A_PROC_EXIT(update_tables);
return;
} 
#undef NL
 /* line 440: */

A_STATIC A68_INT  LQZATRN_add_nametype(A68_INT  Oldindex, A68_BOOL  Newname, A68_236  Oldnt, A68_320  Tc, void *NonLocals)
#define NL(x) (((MQZATRN_add_nametype *)NonLocals)->x)
{ 
A68_239 * NQZATRN_nametypes;
A68_INT  OQZATRN_max;
A68_BOOL  PQZATRN;  /* optbool result */
A68_BOOL  QQZATRN;  /* optbool result */
A68_415  SQZATRN_generator;   /* proc value of non-global proc */
A68_239  XQZATRN;  /* avoid structure result */
A68_415  ZQZATRN_generator;   /* proc value of non-global proc */
A68_239  ERZATRN;  /* avoid structure result */
A68_239  FRZATRN_newtypes;
A68_239  GRZATRN;  /* OPERATORS - trim index */
A68_239  HRZATRN;  /* YIELD */
A68_VC  IRZATRN;  /* clause result */
A68_VC  JRZATRN;  /* avoid structure result */
A68_VC  KRZATRN_name;
A68_236  LRZATRN;  /* collateral clause result */
A68_236 * MRZATRN;  /* YIELD */
A68_INT  NRZATRN;  /* clause result */
A_PROC_ENTRY(add_nametype);
 /* line 441: */
 /* line 442: */
{ 
(*NL(WPZATRN_nametypeno))+=1;
 /* line 443: */
NQZATRN_nametypes = (&(NL(XPZATRN_newfdec)->Nametypes));
 /* line 444: */
OQZATRN_max = (*NQZATRN_nametypes).upb;
 /* line 445: */
 /* line 446: */
PQZATRN = !(*NL(VPZATRN_nametypechange));
if ( PQZATRN )
{QQZATRN = Newname;
if ( ! QQZATRN )
{QQZATRN = Tc.C;
}
if ( ! QQZATRN )
{QQZATRN = ((*NL(WPZATRN_nametypeno))!=Oldindex);
}
 /* line 447: */
PQZATRN = QQZATRN;
}
if ( PQZATRN )
{ 
(*NL(VPZATRN_nametypechange)) = A68_TRUE;
 /* line 448: */
A_CLOSURE( SQZATRN_generator, TQZATRN_generator, UQZATRN_generator );
(( UQZATRN_generator * ) ( SQZATRN_generator.nonlocals )) -> OQZATRN_max = OQZATRN_max;
 /* line 449: */
A_CALLPROC(SQZATRN_generator,(A68_FALSE, &XQZATRN),(A68_FALSE, &XQZATRN,(SQZATRN_generator).nonlocals));
A_VASSIGN2((*NQZATRN_nametypes),XQZATRN,A68_236 ) ;
(*NQZATRN_nametypes) = XQZATRN;
} 
 /* line 450: */
 /* line 451: */
if ( ((*NL(WPZATRN_nametypeno))>OQZATRN_max) )
{ 
A_CLOSURE( ZQZATRN_generator, ARZATRN_generator, BRZATRN_generator );
(( BRZATRN_generator * ) ( ZQZATRN_generator.nonlocals )) -> OQZATRN_max = OQZATRN_max;
A_CALLPROC(ZQZATRN_generator,(A68_FALSE, &ERZATRN),(A68_FALSE, &ERZATRN,(ZQZATRN_generator).nonlocals));
FRZATRN_newtypes = ERZATRN;
 /* line 452: */
HRZATRN = A_VTRIM(GRZATRN,(FRZATRN_newtypes),A_VTSCRIPT(&(GRZATRN.upb),(FRZATRN_newtypes).upb,1,OQZATRN_max)) ;
A_VASSIGN2((*NQZATRN_nametypes),HRZATRN,A68_236 );
 /* line 453: */
 /* line 454: */
(*NQZATRN_nametypes) = FRZATRN_newtypes;
} 
 /* line 455: */
 /* line 456: */
if ( Newname )
{ 
EVYATRN_varid( Oldnt.Name, (*NL(WPZATRN_nametypeno)), &JRZATRN );
IRZATRN = JRZATRN;
} 
else
{ 
IRZATRN = Oldnt.Name;
} 
KRZATRN_name = IRZATRN;
 /* line 457: */
 /* line 458: */
if ( (*NL(VPZATRN_nametypechange)) )
{ 
LRZATRN.Name = KRZATRN_name;
LRZATRN.Type = Tc.T;
 /* line 459: */
LRZATRN.Attr = Oldnt.Attr;
MRZATRN = (&A_VINDEX((*NQZATRN_nametypes),(*NL(WPZATRN_nametypeno)))) ;
(*MRZATRN) = LRZATRN;
} 
 /* line 460: */
 /* line 461: */
NRZATRN = (*NL(WPZATRN_nametypeno));
} 
A_PROC_EXIT(add_nametype);
return( NRZATRN );
} 
#undef NL
 /* line 467: */

A_STATIC A68_VOID  VRZATRN_names_nameno(A68_202 * Namelist, A68_32  Namenos, A68_INT  Sort, A68_337  *ReturnedValue, void *NonLocals)
#define NL(x) (((WRZATRN_names_nameno *)NonLocals)->x)
{ 
A68_337  XRZATRN;  /* collateral clause result */
A68_337  YRZATRN;  /* clause result */
A68_INT  ZRZATRN_nameno;
A68_239  ASZATRN;  /* OPERATORS - simple index */
A68_236  BSZATRN_nt;
A68_320  CSZATRN;  /* collateral clause result */
A68_143  DSZATRN;  /* collateral clause result */
A68_143 * ESZATRN;  /* YIELD */
A68_139  FSZATRN;  /* OPERATORS - mode -> union mode */
A68_320  GSZATRN_tc;
A68_INT  HSZATRN_newnameno;
A68_INT * ISZATRN;  /* YIELD */
A68_337  JSZATRN;  /* avoid structure result */
A68_337  KSZATRN_rest;
A68_BOOL  LSZATRN;  /* optbool result */
A68_337  MSZATRN;  /* collateral clause result */
A68_202  NSZATRN;  /* collateral clause result */
A68_202 * OSZATRN;  /* YIELD */
A68_337  PSZATRN;  /* collateral clause result */
A_PROC_ENTRY(names_nameno);
 /* line 468: */
 /* line 469: */
{ 
 /* line 470: */
if ( (Namelist==NAAATRN_nilnames) )
{ 
XRZATRN.N = NAAATRN_nilnames;
 /* line 471: */
XRZATRN.C = A68_FALSE;
YRZATRN = XRZATRN;
} 
else
{ 
ZRZATRN_nameno = (*(&(Namelist->Nameno)));
 /* line 472: */
ASZATRN = (*(&(NL(Fdec)->Nametypes))) ;
BSZATRN_nt = (*(&A_VINDEX(ASZATRN,ZRZATRN_nameno)));
 /* line 473: */
 /* line 474: */
if ( (Sort==PRZATRN_pvar) )
{ 
DSZATRN.From = BSZATRN_nt.Type;
DSZATRN.To = BSZATRN_nt.Type;
ESZATRN = A_HEAP(A68_143 ) ;
(*ESZATRN) = DSZATRN ;
CSZATRN.T = A_UNITE(FSZATRN,mode4,4,ESZATRN);
 /* line 475: */
CSZATRN.C = A68_TRUE;
} 
else
{ 
CSZATRN.T = BSZATRN_nt.Type;
 /* line 476: */
CSZATRN.C = A68_FALSE;
} 
GSZATRN_tc = CSZATRN;
 /* line 477: */
HSZATRN_newnameno = A_CALLPROC(NL(KQZATRN_add_nametype),(ZRZATRN_nameno, (Sort!=QRZATRN_other), BSZATRN_nt, GSZATRN_tc),(ZRZATRN_nameno, (Sort!=QRZATRN_other), BSZATRN_nt, GSZATRN_tc,(NL(KQZATRN_add_nametype)).nonlocals));
 /* line 478: */
ISZATRN = (&A_VINDEX(Namenos,ZRZATRN_nameno)) ;
(*ISZATRN) = HSZATRN_newnameno;
 /* line 480: */
A_CALLPROC(NL(URZATRN_names_nameno),((*(&(Namelist->Rest))), Namenos, Sort, &JSZATRN),((*(&(Namelist->Rest))), Namenos, Sort, &JSZATRN,(NL(URZATRN_names_nameno)).nonlocals));
KSZATRN_rest = JSZATRN;
 /* line 481: */
LSZATRN = KSZATRN_rest.C;
if ( ! LSZATRN )
{ /* line 482: */
LSZATRN = (HSZATRN_newnameno!=ZRZATRN_nameno);
}
if ( LSZATRN )
{ 
NSZATRN.Nameno = HSZATRN_newnameno;
NSZATRN.Rest = KSZATRN_rest.N;
OSZATRN = A_HEAP(A68_202 ) ;
(*OSZATRN) = NSZATRN ;
MSZATRN.N = OSZATRN;
 /* line 483: */
MSZATRN.C = A68_TRUE;
YRZATRN = MSZATRN;
} 
else
{ 
PSZATRN.N = Namelist;
 /* line 484: */
 /* line 485: */
 /* line 486: */
PSZATRN.C = A68_FALSE;
YRZATRN = PSZATRN;
} 
} 
} 
A_PROC_EXIT(names_nameno);
*ReturnedValue = (YRZATRN);
return;
} 
#undef NL

A_STATIC A68_202 * USZATRN_unit_names(A68_161  Unit, A68_139  Rhs, A68_408 ** Translation, void *NonLocals)
#define NL(x) (((VSZATRN_unit_names *)NonLocals)->x)
{ 
A68_441  ZSZATRN_elem_names;   /* proc value of non-global proc */
A68_161  PTZATRN;  /* united object - for case conformity */
A68_176 * QTZATRN_ust;
A68_202 * RTZATRN_ns;
A68_202 ** STZATRN_nameptr;
A68_176 * TTZATRN_ustr;
A68_INT  UTZATRN_index;
A68_202 * VTZATRN;  /* clause result */
A_PROC_ENTRY(unit_names);
 /* line 491: */
 /* line 492: */
{ 
A_CLOSURE( ZSZATRN_elem_names, ATZATRN_elem_names, BTZATRN_elem_names );
(( BTZATRN_elem_names * ) ( ZSZATRN_elem_names.nonlocals )) -> GOZATRN_unit_nameno = NL(GOZATRN_unit_nameno);
(( BTZATRN_elem_names * ) ( ZSZATRN_elem_names.nonlocals )) -> IDZATRN_type_index = NL(IDZATRN_type_index);
(( BTZATRN_elem_names * ) ( ZSZATRN_elem_names.nonlocals )) -> Rhs = Rhs;
(( BTZATRN_elem_names * ) ( ZSZATRN_elem_names.nonlocals )) -> Env = NL(Env);
(( BTZATRN_elem_names * ) ( ZSZATRN_elem_names.nonlocals )) -> Fdec = NL(Fdec);
(( BTZATRN_elem_names * ) ( ZSZATRN_elem_names.nonlocals )) -> KQZATRN_add_nametype = NL(KQZATRN_add_nametype);
(( BTZATRN_elem_names * ) ( ZSZATRN_elem_names.nonlocals )) -> Translation = Translation;
 /* line 504: */
 /* line 505: */
PTZATRN = Unit ;
switch ( PTZATRN.mode )
{ 
case 21: /* REF STRUCT(MODE161,REF MODE176)  */
QTZATRN_ust = (PTZATRN.data.mode21);
 /* line 506: */
{ 
RTZATRN_ns = NAAATRN_nilnames;
 /* line 507: */
STZATRN_nameptr = (&RTZATRN_ns);
 /* line 508: */
TTZATRN_ustr = QTZATRN_ust;
 /* line 509: */
for ( UTZATRN_index = 1;;
UTZATRN_index += 1 ) 
{ 
 /* line 510: */
if ( !((TTZATRN_ustr!=IAAATRN_nilustr)) ) break;
(*STZATRN_nameptr) = A_CALLPROC(ZSZATRN_elem_names,((*(&(TTZATRN_ustr->Elem))), UTZATRN_index),((*(&(TTZATRN_ustr->Elem))), UTZATRN_index,(ZSZATRN_elem_names).nonlocals));
 /* line 511: */
STZATRN_nameptr = (&((*STZATRN_nameptr)->Rest));
 /* line 512: */
 /* line 513: */
TTZATRN_ustr = (*(&(TTZATRN_ustr->Rest)));
}
 /* line 514: */
 /* line 515: */
 /* line 516: */
VTZATRN = RTZATRN_ns;
} 
break;
default: 
 /* line 517: */
 /* line 518: */
VTZATRN = A_CALLPROC(ZSZATRN_elem_names,(Unit, 0),(Unit, 0,(ZSZATRN_elem_names).nonlocals));
break;
} 
} 
A_PROC_EXIT(unit_names);
return( VTZATRN );
} 
#undef NL
 /* line 525: */

A_STATIC A68_VOID  BUZATRN_seqstep_unit(A68_210  Step, A68_353 * Tprocs, A68_32  Namenos, A68_161  *ReturnedValue, void *NonLocals)
#define NL(x) (((CUZATRN_seqstep_unit *)NonLocals)->x)
{ 
A68_210  DUZATRN;  /* united object - for case conformity */
A68_209 * EUZATRN_seq;
A68_190 * FUZATRN;  /* clause result */
A68_209  GUZATRN;  /* collateral clause result */
A68_209 * IUZATRN;  /* YIELD */
A68_209 * HUZATRN_sq;
A68_190 * JUZATRN_series;
A68_161  KUZATRN;  /* clause result */
A68_161  LUZATRN;  /* OPERATORS - mode -> union mode */
A68_184  MUZATRN;  /* collateral clause result */
A68_161  NUZATRN;  /* OPERATORS - mode -> union mode */
A68_184 * OUZATRN;  /* YIELD */
A68_161  PUZATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(seqstep_unit);
 /* line 526: */
 /* line 527: */
{ 
 /* line 528: */
DUZATRN = Step ;
switch ( DUZATRN.mode )
{ 
case 16: /* REF STRUCT(MODE210,REF MODE209)  */
EUZATRN_seq = (DUZATRN.data.mode16);
 /* line 529: */
FUZATRN = A_CALLPROC((*NL(WTZATRN_sequence_series)),(EUZATRN_seq, Tprocs, (A68_407 **)A68_NIL, Namenos),(EUZATRN_seq, Tprocs, (A68_407 **)A68_NIL, Namenos,((*NL(WTZATRN_sequence_series))).nonlocals));
break;
default: 
GUZATRN.Step = Step;
GUZATRN.Rest = QAAATRN_nilsequence;
IUZATRN = A_HEAP(A68_209 ) ;
(*IUZATRN) = GUZATRN ;
HUZATRN_sq = IUZATRN;
 /* line 530: */
 /* line 531: */
FUZATRN = A_CALLPROC((*NL(WTZATRN_sequence_series)),(HUZATRN_sq, Tprocs, (A68_407 **)A68_NIL, Namenos),(HUZATRN_sq, Tprocs, (A68_407 **)A68_NIL, Namenos,((*NL(WTZATRN_sequence_series))).nonlocals));
break;
} 
JUZATRN_series = FUZATRN;
 /* line 532: */
 /* line 533: */
 /* line 534: */
if ( (JUZATRN_series==SAAATRN_nilseries) )
{ 
KUZATRN = A_UNITE(LUZATRN,mode34,34,(&FIAATRN_unull));
} 
else
{ 
MUZATRN.Body = JUZATRN_series;
 /* line 535: */
MUZATRN.Output = A_UNITE(NUZATRN,mode34,34,(&FIAATRN_unull));
 /* line 536: */
OUZATRN = A_HEAP(A68_184 ) ;
(*OUZATRN) = MUZATRN ;
KUZATRN = A_UNITE(PUZATRN,mode29,29,OUZATRN);
} 
} 
A_PROC_EXIT(seqstep_unit);
*ReturnedValue = (KUZATRN);
return;
} 
#undef NL
 /* line 539: */

A_STATIC A68_VOID  UUZATRN_usequence_unit(A68_183 * Useq, A68_353 * Tprocs, A68_32  Namenos, A68_329  *ReturnedValue, void *NonLocals)
#define NL(x) (((VUZATRN_usequence_unit *)NonLocals)->x)
{ 
A68_407 * WUZATRN_pvars;
A68_190 * XUZATRN_series;
A68_190 ** YUZATRN_ptr;
A68_166 * ZUZATRN_lhs;
A68_166  AVZATRN;  /* collateral clause result */
A68_INT  BVZATRN;  /* YIELD */
A68_166 * CVZATRN_rhs;
A68_166  DVZATRN;  /* collateral clause result */
A68_197 * EVZATRN_join;
A68_197  FVZATRN;  /* collateral clause result */
A68_161  GVZATRN;  /* OPERATORS - mode -> union mode */
A68_161  HVZATRN;  /* OPERATORS - mode -> union mode */
A68_190  IVZATRN;  /* collateral clause result */
A68_191  JVZATRN;  /* OPERATORS - mode -> union mode */
A68_190 * KVZATRN;  /* YIELD */
A68_372  LVZATRN;  /* CALL */
A68_329  MVZATRN;  /* avoid structure result */
A68_329  NVZATRN_uc;
A68_329  OVZATRN;  /* collateral clause result */
A68_184  PVZATRN;  /* collateral clause result */
A68_184 * QVZATRN;  /* YIELD */
A68_161  RVZATRN;  /* OPERATORS - mode -> union mode */
A68_329  SVZATRN;  /* clause result */
A_PROC_ENTRY(usequence_unit);
 /* line 540: */
 /* line 541: */
{ 
WUZATRN_pvars = VUYATRN_nilpvars;
 /* line 542: */
XUZATRN_series = A_CALLPROC((*NL(WTZATRN_sequence_series)),((*(&(Useq->Body))), Tprocs, (&WUZATRN_pvars), Namenos),((*(&(Useq->Body))), Tprocs, (&WUZATRN_pvars), Namenos,((*NL(WTZATRN_sequence_series))).nonlocals));
 /* line 543: */
YUZATRN_ptr = (&XUZATRN_series);
 /* line 544: */
for ( ;; )
{ 
if ( !(((*YUZATRN_ptr)!=SAAATRN_nilseries)) ) break;
YUZATRN_ptr = (&((*YUZATRN_ptr)->Rest));
}
 /* line 545: */
for ( ;; )
{ 
 /* line 546: */
if ( !((WUZATRN_pvars!=VUYATRN_nilpvars)) ) break;
ZUZATRN_lhs = (A_HEAP(A68_166 ));
AVZATRN.Sort = KKAATRN_usource;
BVZATRN = (*(&(WUZATRN_pvars->Oldnameno))) ;
AVZATRN.Nameno = (*(&A_VINDEX(Namenos,BVZATRN)));
(*ZUZATRN_lhs) = AVZATRN;
 /* line 547: */
CVZATRN_rhs = (A_HEAP(A68_166 ));
DVZATRN.Sort = LKAATRN_usink;
DVZATRN.Nameno = (*(&(WUZATRN_pvars->Nameno)));
(*CVZATRN_rhs) = DVZATRN;
 /* line 548: */
EVZATRN_join = (A_HEAP(A68_197 ));
FVZATRN.From = A_UNITE(GVZATRN,mode11,11,ZUZATRN_lhs);
FVZATRN.To = A_UNITE(HVZATRN,mode11,11,CVZATRN_rhs);
(*EVZATRN_join) = FVZATRN;
 /* line 549: */
IVZATRN.Step = A_UNITE(JVZATRN,mode10,10,EVZATRN_join);
IVZATRN.Rest = SAAATRN_nilseries;
KVZATRN = A_HEAP(A68_190 ) ;
(*KVZATRN) = IVZATRN ;
(*YUZATRN_ptr) = KVZATRN;
 /* line 550: */
YUZATRN_ptr = (&((*YUZATRN_ptr)->Rest));
 /* line 551: */
 /* line 552: */
WUZATRN_pvars = (*(&(WUZATRN_pvars->Rest)));
}
 /* line 553: */
LVZATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(LVZATRN,((*(&(Useq->Output))), Tprocs, &MVZATRN),((*(&(Useq->Output))), Tprocs, &MVZATRN,(LVZATRN).nonlocals));
NVZATRN_uc = MVZATRN;
 /* line 554: */
PVZATRN.Body = XUZATRN_series;
PVZATRN.Output = NVZATRN_uc.U;
QVZATRN = A_HEAP(A68_184 ) ;
(*QVZATRN) = PVZATRN ;
OVZATRN.U = A_UNITE(RVZATRN,mode29,29,QVZATRN);
 /* line 555: */
OVZATRN.C = A68_TRUE;
SVZATRN = OVZATRN;
} 
A_PROC_EXIT(usequence_unit);
*ReturnedValue = (SVZATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  XVZATRN_unit_seq(A68_161  U, A68_353 * Tprocs, A68_32  Namenos, A68_329  *ReturnedValue, void *NonLocals)
#define NL(x) (((YVZATRN_unit_seq *)NonLocals)->x)
{ 
A68_161  ZVZATRN;  /* united object - for case conformity */
A68_166 * AWZATRN_un;
A68_INT  BWZATRN;  /* YIELD */
A68_INT  CWZATRN_newnameno;
A68_329  DWZATRN;  /* collateral clause result */
A68_166  EWZATRN;  /* collateral clause result */
A68_166 * FWZATRN;  /* YIELD */
A68_161  GWZATRN;  /* OPERATORS - mode -> union mode */
A68_329  HWZATRN;  /* clause result */
A68_329  IWZATRN;  /* collateral clause result */
A68_183 * JWZATRN_us;
A68_329  KWZATRN;  /* avoid structure result */
A68_372  LWZATRN;  /* CALL */
A68_329  MWZATRN;  /* avoid structure result */
A_PROC_ENTRY(unit_seq);
 /* line 560: */
 /* line 561: */
{ 
 /* line 562: */
ZVZATRN = U ;
switch ( ZVZATRN.mode )
{ 
case 11: /* REF STRUCT(INT,INT)  */
AWZATRN_un = (ZVZATRN.data.mode11);
 /* line 563: */
{ 
BWZATRN = (*(&(AWZATRN_un->Nameno))) ;
CWZATRN_newnameno = (*(&A_VINDEX(Namenos,BWZATRN)));
 /* line 564: */
 /* line 565: */
if ( (CWZATRN_newnameno!=(*(&(AWZATRN_un->Nameno)))) )
{ 
EWZATRN.Sort = (*(&(AWZATRN_un->Sort)));
EWZATRN.Nameno = CWZATRN_newnameno;
FWZATRN = A_HEAP(A68_166 ) ;
(*FWZATRN) = EWZATRN ;
DWZATRN.U = A_UNITE(GWZATRN,mode11,11,FWZATRN);
 /* line 566: */
DWZATRN.C = A68_TRUE;
HWZATRN = DWZATRN;
} 
else
{ 
IWZATRN.U = U;
 /* line 567: */
 /* line 568: */
 /* line 569: */
IWZATRN.C = A68_FALSE;
HWZATRN = IWZATRN;
} 
} 
break;
case 28: /* REF STRUCT(REF MODE209,MODE161)  */
JWZATRN_us = (ZVZATRN.data.mode28);
 /* line 570: */
A_CALLPROC(NL(TUZATRN_usequence_unit),(JWZATRN_us, Tprocs, Namenos, &KWZATRN),(JWZATRN_us, Tprocs, Namenos, &KWZATRN,(NL(TUZATRN_usequence_unit)).nonlocals));
HWZATRN = KWZATRN;
break;
default: 
 /* line 571: */
 /* line 572: */
LWZATRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(LWZATRN,(U, Tprocs, &MWZATRN),(U, Tprocs, &MWZATRN,(LWZATRN).nonlocals));
HWZATRN = MWZATRN;
break;
} 
} 
A_PROC_EXIT(unit_seq);
*ReturnedValue = (HWZATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  QWZATRN_anonymous(A68_210  S, A68_353 * Tprocs, A68_340  *ReturnedValue, void *NonLocals)
#define NL(x) (((RWZATRN_anonymous *)NonLocals)->x)
{ 
A68_210  SWZATRN;  /* united object - for case conformity */
A68_212 * TWZATRN_sv;
A68_202 * UWZATRN_vs;
A68_INT  VWZATRN;  /* YIELD */
A68_INT * WWZATRN;  /* YIELD */
A68_213 * XWZATRN_pv;
A68_202 * YWZATRN_ps;
A68_INT  ZWZATRN;  /* YIELD */
A68_INT * AXZATRN;  /* YIELD */
A68_214 * BXZATRN_sa;
A68_161  CXZATRN;  /* united object - for case conformity */
A68_176 * DXZATRN_us;
A68_176 * EXZATRN_ust;
A68_INT  FXZATRN_nameno;
A68_BOOL  GXZATRN;  /* optbool result */
A68_INT * HXZATRN;  /* YIELD */
A68_INT  IXZATRN_nameno;
A68_INT * JXZATRN;  /* YIELD */
A68_383  KXZATRN;  /* CALL */
A68_340  LXZATRN;  /* avoid structure result */
A68_340  MXZATRN;  /* collateral clause result */
A68_340  NXZATRN;  /* clause result */
 /* line 577: */
{ 
 /* line 578: */
SWZATRN = S ;
switch ( SWZATRN.mode )
{ 
case 9: /* REF STRUCT(MODE195)  */
TWZATRN_sv = (SWZATRN.data.mode9);
 /* line 579: */
{ 
UWZATRN_vs = (*(&((&(TWZATRN_sv->Seqvar))->Letnames)));
 /* line 580: */
for ( ;; )
{ 
 /* line 581: */
if ( !((UWZATRN_vs!=NAAATRN_nilnames)) ) break;
VWZATRN = (*(&(UWZATRN_vs->Nameno))) ;
WWZATRN = (&A_VINDEX(NL(TPZATRN_vars),VWZATRN)) ;
(*WWZATRN) = LPZATRN_local;
 /* line 582: */
 /* line 583: */
UWZATRN_vs = (*(&(UWZATRN_vs->Rest)));
}
 /* line 584: */
 /* line 585: */
} 
break;
case 10: /* REF STRUCT(REF MODE202,MODE161)  */
XWZATRN_pv = (SWZATRN.data.mode10);
 /* line 586: */
{ 
YWZATRN_ps = (*(&(XWZATRN_pv->Pvarnames)));
 /* line 587: */
for ( ;; )
{ 
 /* line 588: */
if ( !((YWZATRN_ps!=NAAATRN_nilnames)) ) break;
ZWZATRN = (*(&(YWZATRN_ps->Nameno))) ;
AXZATRN = (&A_VINDEX(NL(TPZATRN_vars),ZWZATRN)) ;
(*AXZATRN) = LPZATRN_local;
 /* line 589: */
 /* line 590: */
YWZATRN_ps = (*(&(YWZATRN_ps->Rest)));
}
 /* line 591: */
 /* line 592: */
} 
break;
case 11: /* REF STRUCT(MODE161,MODE161)  */
BXZATRN_sa = (SWZATRN.data.mode11);
 /* line 593: */
 /* line 594: */
CXZATRN = (*(&(BXZATRN_sa->To))) ;
switch ( CXZATRN.mode )
{ 
case 21: /* REF STRUCT(MODE161,REF MODE176)  */
DXZATRN_us = (CXZATRN.data.mode21);
 /* line 595: */
{ 
EXZATRN_ust = DXZATRN_us;
 /* line 596: */
for ( ;; )
{ 
 /* line 597: */
if ( !((EXZATRN_ust!=IAAATRN_nilustr)) ) break;
FXZATRN_nameno = A_CALLPROC(NL(GOZATRN_unit_nameno),((*(&(EXZATRN_ust->Elem)))),((*(&(EXZATRN_ust->Elem))),(NL(GOZATRN_unit_nameno)).nonlocals));
 /* line 598: */
GXZATRN = (FXZATRN_nameno>0);
if ( GXZATRN )
{ /* line 599: */
GXZATRN = ((*(&A_VINDEX(NL(TPZATRN_vars),FXZATRN_nameno)))==KPZATRN_unused);
}
if ( GXZATRN )
{ 
 /* line 600: */
HXZATRN = (&A_VINDEX(NL(TPZATRN_vars),FXZATRN_nameno)) ;
(*HXZATRN) = MPZATRN_assigned;
} 
 /* line 601: */
 /* line 602: */
EXZATRN_ust = (*(&(EXZATRN_ust->Rest)));
}
 /* line 603: */
 /* line 604: */
} 
break;
default: 
IXZATRN_nameno = A_CALLPROC(NL(GOZATRN_unit_nameno),((*(&(BXZATRN_sa->To)))),((*(&(BXZATRN_sa->To))),(NL(GOZATRN_unit_nameno)).nonlocals));
 /* line 605: */
if ( ((*(&A_VINDEX(NL(TPZATRN_vars),IXZATRN_nameno)))==KPZATRN_unused) )
{ 
 /* line 606: */
 /* line 607: */
JXZATRN = (&A_VINDEX(NL(TPZATRN_vars),IXZATRN_nameno)) ;
(*JXZATRN) = MPZATRN_assigned;
} 
break;
} 
break;
default: 
 /* line 608: */
KXZATRN = (*(&(AWLATRN_nulltprocs->Seqstep))) ;
A_CALLPROC(KXZATRN,(S, Tprocs, &LXZATRN),(S, Tprocs, &LXZATRN,(KXZATRN).nonlocals));
LXZATRN;
break;
} 
 /* line 609: */
MXZATRN.S = S;
 /* line 610: */
 /* line 611: */
MXZATRN.C = A68_FALSE;
NXZATRN = MXZATRN;
} 
*ReturnedValue = (NXZATRN);
return;
} 
#undef NL
 /* line 614: */

A_STATIC A68_195 * WXZATRN_seqcase_let(A68_215 * Scase, A68_353 * Tprocs, A68_32  Namenos, void *NonLocals)
#define NL(x) (((XXZATRN_seqcase_let *)NonLocals)->x)
{ 
A68_INT * YXZATRN_elem;
A68_INT  ZXZATRN;  /* forall loop counter */
A68_383  AYZATRN;  /* CALL */
A68_210  BYZATRN;  /* OPERATORS - mode -> union mode */
A68_340  CYZATRN;  /* avoid structure result */
A68_408 * DYZATRN_translation;
A68_202 * EYZATRN_letnames;
A68_202 ** FYZATRN_ptr;
A68_INT  GYZATRN_nameno;
A68_INT  HYZATRN;  /* to part of loop */
A68_239  IYZATRN;  /* OPERATORS - simple index */
A68_236  JYZATRN_nametype;
A68_320  KYZATRN;  /* collateral clause result */
A68_INT  LYZATRN_newnameno;
A68_408  MYZATRN;  /* collateral clause result */
A68_408 * NYZATRN;  /* YIELD */
A68_202  OYZATRN;  /* collateral clause result */
A68_202 * PYZATRN;  /* YIELD */
A68_372  QYZATRN;  /* CALL */
A68_329  RYZATRN;  /* avoid structure result */
A68_161  SYZATRN_input;
A68_221 * TYZATRN_uc;
A68_221 ** UYZATRN_ucptr;
A68_220 * VYZATRN_sc;
A68_33  XYZATRN_generator;   /* proc value of non-global proc */
A68_32  DZZATRN;  /* avoid structure result */
A68_32  CZZATRN_newnamenos;
A68_447  EZZATRN;  /* collateral clause result */
A68_380  HZZATRN_anonymous;   /* proc value of non-global proc */
A68_398  MZZATRN;  /* OPERATORS - mode -> union mode */
A68_380  NZZATRN;  /* YIELD */
A68_372  QZZATRN_anonymous;   /* proc value of non-global proc */
A68_398  VZZATRN;  /* OPERATORS - mode -> union mode */
A68_372  WZZATRN;  /* YIELD */
A68_397  XZZATRN;  /* OPERATORS - istruct -> vector */
A68_353 * YZZATRN_newtprocs;
A68_161  ZZZATRN;  /* avoid structure result */
A68_161  AAABTRN_arm;
A68_161  BAABTRN;  /* clause result */
A68_161  CAABTRN;  /* OPERATORS - mode -> union mode */
A68_166  DAABTRN;  /* collateral clause result */
A68_INT  EAABTRN;  /* YIELD */
A68_166 * FAABTRN;  /* YIELD */
A68_161  GAABTRN;  /* OPERATORS - mode -> union mode */
A68_176 * HAABTRN_us;
A68_408 * IAABTRN_nlist;
A68_176  JAABTRN;  /* collateral clause result */
A68_166  KAABTRN;  /* collateral clause result */
A68_INT  LAABTRN;  /* YIELD */
A68_166 * MAABTRN;  /* YIELD */
A68_161  NAABTRN;  /* OPERATORS - mode -> union mode */
A68_176 * OAABTRN;  /* YIELD */
A68_161  PAABTRN;  /* OPERATORS - mode -> union mode */
A68_161  QAABTRN_output;
A68_161  RAABTRN;  /* united object - for case conformity */
A68_184 * SAABTRN_us;
A68_161 * TAABTRN;  /* YIELD */
A68_161  UAABTRN;  /* clause result */
A68_161  VAABTRN;  /* OPERATORS - mode -> union mode */
A68_189 * WAABTRN_un;
A68_161  ZAABTRN;  /* OPERATORS - skip to mode */
A68_161  ABABTRN_armoutput;
A68_INT  BBABTRN;  /* clause result */
A68_INT  CBABTRN_sort;
A68_221  DBABTRN;  /* collateral clause result */
A68_221 * EBABTRN;  /* YIELD */
A68_139  FBABTRN;  /* avoid structure result */
A68_139  GBABTRN_lt;
A68_320  HBABTRN;  /* collateral clause result */
A68_INT  IBABTRN_letno;
A68_195  JBABTRN;  /* collateral clause result */
A68_202  KBABTRN;  /* collateral clause result */
A68_202 * LBABTRN;  /* YIELD */
A68_195 * MBABTRN;  /* clause result */
A68_195 * NBABTRN;  /* YIELD */
A68_195  OBABTRN;  /* collateral clause result */
A68_180  PBABTRN;  /* collateral clause result */
A68_180 * QBABTRN;  /* YIELD */
A68_161  RBABTRN;  /* OPERATORS - mode -> union mode */
A68_195 * SBABTRN;  /* YIELD */
A_PROC_ENTRY(seqcase_let);
 /* line 615: */
 /* line 617: */
{ 
ZXZATRN = NL(TPZATRN_vars).upb -1;
YXZATRN_elem = NL(TPZATRN_vars).data;
for (;ZXZATRN-- >= 0;
(YXZATRN_elem++
) )
{
(*YXZATRN_elem) = KPZATRN_unused;
}
 /* line 618: */
AYZATRN = (*(&(NL(RXZATRN_scan_seqcase)->Seqstep))) ;
A_CALLPROC(AYZATRN,(A_UNITE(BYZATRN,mode12,12,Scase), NL(RXZATRN_scan_seqcase), &CYZATRN),(A_UNITE(BYZATRN,mode12,12,Scase), NL(RXZATRN_scan_seqcase), &CYZATRN,(AYZATRN).nonlocals));
CYZATRN;
 /* line 621: */
DYZATRN_translation = WUYATRN_nilnamenos;
 /* line 622: */
EYZATRN_letnames = NAAATRN_nilnames;
 /* line 623: */
FYZATRN_ptr = (&EYZATRN_letnames);
 /* line 624: */
 /* line 625: */
HYZATRN = NL(TPZATRN_vars).upb;
for ( GYZATRN_nameno = 1;
GYZATRN_nameno <= HYZATRN;
GYZATRN_nameno += 1 )
{ 
 /* line 626: */
if ( ((*(&A_VINDEX(NL(TPZATRN_vars),GYZATRN_nameno)))==MPZATRN_assigned) )
{ 
IYZATRN = (*(&(NL(Fdec)->Nametypes))) ;
JYZATRN_nametype = (*(&A_VINDEX(IYZATRN,GYZATRN_nameno)));
 /* line 627: */
 /* line 628: */
KYZATRN.T = JYZATRN_nametype.Type;
KYZATRN.C = A68_FALSE;
LYZATRN_newnameno = A_CALLPROC(NL(KQZATRN_add_nametype),(GYZATRN_nameno, A68_TRUE, JYZATRN_nametype, KYZATRN),(GYZATRN_nameno, A68_TRUE, JYZATRN_nametype, KYZATRN,(NL(KQZATRN_add_nametype)).nonlocals));
 /* line 629: */
 /* line 630: */
MYZATRN.Oldnameno = GYZATRN_nameno;
MYZATRN.Newnameno = LYZATRN_newnameno;
MYZATRN.Rest = DYZATRN_translation;
NYZATRN = A_HEAP(A68_408 ) ;
(*NYZATRN) = MYZATRN ;
DYZATRN_translation = NYZATRN;
 /* line 631: */
OYZATRN.Nameno = LYZATRN_newnameno;
OYZATRN.Rest = NAAATRN_nilnames;
PYZATRN = A_HEAP(A68_202 ) ;
(*PYZATRN) = OYZATRN ;
(*FYZATRN_ptr) = PYZATRN;
 /* line 632: */
 /* line 633: */
 /* line 634: */
FYZATRN_ptr = (&((*FYZATRN_ptr)->Rest));
} 
}
 /* line 636: */
QYZATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(QYZATRN,((*(&(Scase->Input))), Tprocs, &RYZATRN),((*(&(Scase->Input))), Tprocs, &RYZATRN,(QYZATRN).nonlocals));
SYZATRN_input = RYZATRN.U;
 /* line 638: */
TYZATRN_uc = JAAATRN_niluchoices;
 /* line 639: */
UYZATRN_ucptr = (&TYZATRN_uc);
 /* line 640: */
VYZATRN_sc = (*(&(Scase->Choices)));
 /* line 642: */
A_CLOSURE( XYZATRN_generator, YYZATRN_generator, ZYZATRN_generator );
(( ZYZATRN_generator * ) ( XYZATRN_generator.nonlocals )) -> Namenos = Namenos;
A_CALLPROC(XYZATRN_generator,(A68_TRUE, &DZZATRN),(A68_TRUE, &DZZATRN,(XYZATRN_generator).nonlocals));
CZZATRN_newnamenos = DZZATRN;
 /* line 644: */
 /* line 645: */
A_CLOSURE( HZZATRN_anonymous, IZZATRN_anonymous, JZZATRN_anonymous );
(( JZZATRN_anonymous * ) ( HZZATRN_anonymous.nonlocals )) -> URZATRN_names_nameno = NL(URZATRN_names_nameno);
(( JZZATRN_anonymous * ) ( HZZATRN_anonymous.nonlocals )) -> CZZATRN_newnamenos = CZZATRN_newnamenos;
 /* line 647: */
NZZATRN = HZZATRN_anonymous ;
EZZATRN.data[0] = A_UNITE(MZZATRN,mode27,27,NZZATRN);
A_CLOSURE( QZZATRN_anonymous, RZZATRN_anonymous, SZZATRN_anonymous );
(( SZZATRN_anonymous * ) ( QZZATRN_anonymous.nonlocals )) -> WVZATRN_unit_seq = NL(WVZATRN_unit_seq);
(( SZZATRN_anonymous * ) ( QZZATRN_anonymous.nonlocals )) -> CZZATRN_newnamenos = CZZATRN_newnamenos;
WZZATRN = QZZATRN_anonymous ;
EZZATRN.data[1] = A_UNITE(VZZATRN,mode19,19,WZZATRN);
YZZATRN_newtprocs = THJATRN_make_newtprocs(Tprocs, A_HISVEC(XZZATRN,EZZATRN,2,A68_398 ));
 /* line 650: */
for ( ;; )
{ 
 /* line 651: */
if ( !((VYZATRN_sc!=PAAATRN_nilseqchoices)) ) break;
A_VASSIGN2(Namenos,CZZATRN_newnamenos,A68_INT );
 /* line 653: */
A_CALLPROC(NL(AUZATRN_seqstep_unit),((*(&(VYZATRN_sc->Output))), YZZATRN_newtprocs, CZZATRN_newnamenos, &ZZZATRN),((*(&(VYZATRN_sc->Output))), YZZATRN_newtprocs, CZZATRN_newnamenos, &ZZZATRN,(NL(AUZATRN_seqstep_unit)).nonlocals));
AAABTRN_arm = ZZZATRN;
 /* line 654: */
 /* line 655: */
 /* line 656: */
 /* line 657: */
if ( (DYZATRN_translation==WUYATRN_nilnamenos) )
{ 
BAABTRN = A_UNITE(CAABTRN,mode34,34,(&FIAATRN_unull));
} 
else
{ 
 /* line 658: */
if ( ((*(&(DYZATRN_translation->Rest)))==WUYATRN_nilnamenos) )
{ 
 /* line 659: */
DAABTRN.Sort = KKAATRN_usource;
 /* line 660: */
EAABTRN = (*(&(DYZATRN_translation->Oldnameno))) ;
DAABTRN.Nameno = (*(&A_VINDEX(CZZATRN_newnamenos,EAABTRN)));
FAABTRN = A_HEAP(A68_166 ) ;
(*FAABTRN) = DAABTRN ;
BAABTRN = A_UNITE(GAABTRN,mode11,11,FAABTRN);
} 
else
{ 
HAABTRN_us = IAAATRN_nilustr;
 /* line 661: */
IAABTRN_nlist = DYZATRN_translation;
 /* line 662: */
for ( ;; )
{ 
 /* line 663: */
if ( !((IAABTRN_nlist!=WUYATRN_nilnamenos)) ) break;
 /* line 664: */
KAABTRN.Sort = KKAATRN_usource;
LAABTRN = (*(&(IAABTRN_nlist->Oldnameno))) ;
KAABTRN.Nameno = (*(&A_VINDEX(CZZATRN_newnamenos,LAABTRN)));
MAABTRN = A_HEAP(A68_166 ) ;
(*MAABTRN) = KAABTRN ;
JAABTRN.Elem = A_UNITE(NAABTRN,mode11,11,MAABTRN);
JAABTRN.Rest = HAABTRN_us;
OAABTRN = A_HEAP(A68_176 ) ;
(*OAABTRN) = JAABTRN ;
HAABTRN_us = OAABTRN;
 /* line 665: */
 /* line 666: */
IAABTRN_nlist = (*(&(IAABTRN_nlist->Rest)));
}
 /* line 667: */
 /* line 668: */
BAABTRN = A_UNITE(PAABTRN,mode21,21,HAABTRN_us);
} 
} 
QAABTRN_output = BAABTRN;
 /* line 669: */
 /* line 670: */
 /* line 671: */
RAABTRN = AAABTRN_arm ;
switch ( RAABTRN.mode )
{ 
case 29: /* REF STRUCT(REF MODE190,MODE161)  */
SAABTRN_us = (RAABTRN.data.mode29);
{ 
TAABTRN = (&(SAABTRN_us->Output)) ;
(*TAABTRN) = QAABTRN_output;
 /* line 672: */
UAABTRN = A_UNITE(VAABTRN,mode29,29,SAABTRN_us);
} 
break;
case 34: /* REF STRUCT(INT)  */
WAABTRN_un = (RAABTRN.data.mode34);
 /* line 673: */
UAABTRN = QAABTRN_output;
break;
default: 
A_CALLPROC(NL(RUYATRN_sysfault),(YAABTRN),(YAABTRN,(NL(RUYATRN_sysfault)).nonlocals));
 /* line 674: */
UAABTRN = ZAABTRN;
break;
} 
ABABTRN_armoutput = UAABTRN;
 /* line 675: */
if ( ((*(&(VYZATRN_sc->Sort)))==ZIAATRN_noelsechoice) )
{ 
BBABTRN = YIAATRN_elsechoice;
} 
else
{ 
BBABTRN = (*(&(VYZATRN_sc->Sort)));
} 
CBABTRN_sort = BBABTRN;
 /* line 676: */
 /* line 677: */
DBABTRN.Check = (*(&(VYZATRN_sc->Check)));
DBABTRN.Sort = CBABTRN_sort;
DBABTRN.Test = (*(&(VYZATRN_sc->Test)));
DBABTRN.Output = ABABTRN_armoutput;
DBABTRN.Rest = JAAATRN_niluchoices;
EBABTRN = A_HEAP(A68_221 ) ;
(*EBABTRN) = DBABTRN ;
(*UYZATRN_ucptr) = EBABTRN;
 /* line 679: */
UYZATRN_ucptr = (&((*UYZATRN_ucptr)->Rest));
 /* line 680: */
 /* line 681: */
VYZATRN_sc = (*(&(VYZATRN_sc->Rest)));
}
 /* line 685: */
A_CALLPROC(NL(AQZATRN_update_tables),(DYZATRN_translation, Namenos),(DYZATRN_translation, Namenos,(NL(AQZATRN_update_tables)).nonlocals));
 /* line 687: */
MLJATRN_discard_tprocs(YZZATRN_newtprocs);
 /* line 689: */
 /* line 690: */
if ( (EYZATRN_letnames==NAAATRN_nilnames) )
{ 
VUNATRN_unit_type( SYZATRN_input, NL(Fdec), NL(Env), &FBABTRN );
GBABTRN_lt = FBABTRN;
 /* line 691: */
HBABTRN.T = GBABTRN_lt;
HBABTRN.C = A68_TRUE;
IBABTRN_letno = A_CALLPROC(NL(KQZATRN_add_nametype),(0, A68_TRUE, NL(EUYATRN_nullnametype), HBABTRN),(0, A68_TRUE, NL(EUYATRN_nullnametype), HBABTRN,(NL(KQZATRN_add_nametype)).nonlocals));
 /* line 692: */
KBABTRN.Nameno = IBABTRN_letno;
KBABTRN.Rest = NAAATRN_nilnames;
LBABTRN = A_HEAP(A68_202 ) ;
(*LBABTRN) = KBABTRN ;
JBABTRN.Letnames = LBABTRN;
 /* line 693: */
JBABTRN.Unit = SYZATRN_input;
NBABTRN = A_HEAP(A68_195 ) ;
(*NBABTRN) = JBABTRN ;
MBABTRN = NBABTRN;
} 
else
{ 
OBABTRN.Letnames = EYZATRN_letnames;
PBABTRN.Input = SYZATRN_input;
PBABTRN.Choices = TYZATRN_uc;
 /* line 694: */
QBABTRN = A_HEAP(A68_180 ) ;
(*QBABTRN) = PBABTRN ;
OBABTRN.Unit = A_UNITE(RBABTRN,mode25,25,QBABTRN);
 /* line 695: */
SBABTRN = A_HEAP(A68_195 ) ;
(*SBABTRN) = OBABTRN ;
MBABTRN = SBABTRN;
} 
} 
A_PROC_EXIT(seqcase_let);
return( MBABTRN );
} 
#undef NL
 /* line 699: */

A_STATIC A68_195 * XBABTRN_seqcond_let(A68_216 * Scond, A68_353 * Tprocs, A68_32  Namenos, void *NonLocals)
#define NL(x) (((YBABTRN_seqcond_let *)NonLocals)->x)
{ 
A68_161  ZBABTRN;  /* avoid structure result */
A68_161  ACABTRN_true;
A68_161  BCABTRN;  /* avoid structure result */
A68_161  CCABTRN_false;
A68_181 * DCABTRN_ucond;
A68_181  ECABTRN;  /* collateral clause result */
A68_195  FCABTRN;  /* collateral clause result */
A68_161  GCABTRN;  /* OPERATORS - mode -> union mode */
A68_195 * HCABTRN;  /* clause result */
A68_195 * ICABTRN;  /* YIELD */
A_PROC_ENTRY(seqcond_let);
 /* line 700: */
 /* line 701: */
{ 
A_CALLPROC(NL(AUZATRN_seqstep_unit),((*(&(Scond->True))), Tprocs, Namenos, &ZBABTRN),((*(&(Scond->True))), Tprocs, Namenos, &ZBABTRN,(NL(AUZATRN_seqstep_unit)).nonlocals));
ACABTRN_true = ZBABTRN;
 /* line 702: */
A_CALLPROC(NL(AUZATRN_seqstep_unit),((*(&(Scond->False))), Tprocs, Namenos, &BCABTRN),((*(&(Scond->False))), Tprocs, Namenos, &BCABTRN,(NL(AUZATRN_seqstep_unit)).nonlocals));
CCABTRN_false = BCABTRN;
 /* line 703: */
DCABTRN_ucond = (A_HEAP(A68_181 ));
ECABTRN.Cond = (*(&(Scond->Cond)));
ECABTRN.True = ACABTRN_true;
ECABTRN.False = CCABTRN_false;
(*DCABTRN_ucond) = ECABTRN;
 /* line 704: */
FCABTRN.Letnames = NAAATRN_nilnames;
 /* line 705: */
FCABTRN.Unit = A_UNITE(GCABTRN,mode26,26,DCABTRN_ucond);
ICABTRN = A_HEAP(A68_195 ) ;
(*ICABTRN) = FCABTRN ;
HCABTRN = ICABTRN;
} 
A_PROC_EXIT(seqcond_let);
return( HCABTRN );
} 
#undef NL
 /* line 708: */

A_STATIC A68_195 * NCABTRN_seqrepl_let(A68_217 * Srepl, A68_353 * Tprocs, A68_32  Namenos, void *NonLocals)
#define NL(x) (((OCABTRN_seqrepl_let *)NonLocals)->x)
{ 
A68_161  PCABTRN;  /* avoid structure result */
A68_161  QCABTRN_body;
A68_195  RCABTRN;  /* collateral clause result */
A68_182  SCABTRN;  /* collateral clause result */
A68_182 * TCABTRN;  /* YIELD */
A68_161  UCABTRN;  /* OPERATORS - mode -> union mode */
A68_195 * VCABTRN;  /* clause result */
A68_195 * WCABTRN;  /* YIELD */
A_PROC_ENTRY(seqrepl_let);
 /* line 709: */
 /* line 710: */
{ 
A_CALLPROC(NL(AUZATRN_seqstep_unit),((*(&(Srepl->Body))), Tprocs, Namenos, &PCABTRN),((*(&(Srepl->Body))), Tprocs, Namenos, &PCABTRN,(NL(AUZATRN_seqstep_unit)).nonlocals));
QCABTRN_body = PCABTRN;
 /* line 711: */
RCABTRN.Letnames = NAAATRN_nilnames;
SCABTRN.Repl = (*(&(Srepl->Repl)));
SCABTRN.Body = QCABTRN_body;
 /* line 712: */
TCABTRN = A_HEAP(A68_182 ) ;
(*TCABTRN) = SCABTRN ;
RCABTRN.Unit = A_UNITE(UCABTRN,mode27,27,TCABTRN);
WCABTRN = A_HEAP(A68_195 ) ;
(*WCABTRN) = RCABTRN ;
VCABTRN = WCABTRN;
} 
A_PROC_EXIT(seqrepl_let);
return( VCABTRN );
} 
#undef NL
 /* line 715: */

A_STATIC A68_195 * BDABTRN_seqrow_let(A68_219 * Srow, A68_353 * Tprocs, A68_32  Namenos, void *NonLocals)
#define NL(x) (((CDABTRN_seqrow_let *)NonLocals)->x)
{ 
A68_161  DDABTRN;  /* avoid structure result */
A68_161  EDABTRN_body;
A68_195  FDABTRN;  /* collateral clause result */
A68_175  GDABTRN;  /* collateral clause result */
A68_175 * HDABTRN;  /* YIELD */
A68_161  IDABTRN;  /* OPERATORS - mode -> union mode */
A68_195 * JDABTRN;  /* clause result */
A68_195 * KDABTRN;  /* YIELD */
A_PROC_ENTRY(seqrow_let);
 /* line 716: */
 /* line 717: */
{ 
A_CALLPROC(NL(AUZATRN_seqstep_unit),((*(&(Srow->Elem))), Tprocs, Namenos, &DDABTRN),((*(&(Srow->Elem))), Tprocs, Namenos, &DDABTRN,(NL(AUZATRN_seqstep_unit)).nonlocals));
EDABTRN_body = DDABTRN;
 /* line 718: */
FDABTRN.Letnames = NAAATRN_nilnames;
GDABTRN.Size = (*(&(Srow->Size)));
GDABTRN.Elem = EDABTRN_body;
 /* line 719: */
HDABTRN = A_HEAP(A68_175 ) ;
(*HDABTRN) = GDABTRN ;
FDABTRN.Unit = A_UNITE(IDABTRN,mode20,20,HDABTRN);
KDABTRN = A_HEAP(A68_195 ) ;
(*KDABTRN) = FDABTRN ;
JDABTRN = KDABTRN;
} 
A_PROC_EXIT(seqrow_let);
return( JDABTRN );
} 
#undef NL
 /* line 722: */

A_STATIC A68_196 * QDABTRN_seqpvar_make(A68_161  Init, A68_202 * Nms, A68_407 ** Pvars, A68_32  Namenos, void *NonLocals)
#define NL(x) (((RDABTRN_seqpvar_make *)NonLocals)->x)
{ 
A68_INT  SDABTRN_fnno;
A68_139  TDABTRN;  /* avoid structure result */
A68_139  UDABTRN_t;
A68_452  WDABTRN_generator;   /* proc value of non-global proc */
A68_203  BEABTRN;  /* avoid structure result */
A68_203  CEABTRN_params;
A68_204  DEABTRN;  /* collateral clause result */
A68_205  EEABTRN;  /* OPERATORS - mode -> union mode */
A68_148  FEABTRN;  /* YIELD */
A68_INT  GEABTRN;  /* YIELD */
A68_204 * HEABTRN;  /* YIELD */
A68_204  IEABTRN;  /* collateral clause result */
A68_205  JEABTRN;  /* OPERATORS - mode -> union mode */
A68_206  KEABTRN;  /* YIELD */
A68_INT  LEABTRN;  /* YIELD */
A68_204 * MEABTRN;  /* YIELD */
A68_337  OEABTRN;  /* avoid structure result */
A68_202 * NEABTRN_newnames;
A68_202 * PEABTRN_onames;
A68_202 * QEABTRN_nnames;
A68_407  REABTRN;  /* collateral clause result */
A68_407 * SEABTRN;  /* YIELD */
A68_196  TEABTRN;  /* collateral clause result */
A68_114  UEABTRN;  /* OPERATORS - mode -> union mode */
A68_196 * VEABTRN;  /* clause result */
A68_196 * WEABTRN;  /* YIELD */
A_PROC_ENTRY(seqpvar_make);
 /* line 723: */
 /* line 725: */
{ 
SDABTRN_fnno = ((*(&(NL(Env)->Fns))).upb+1);
 /* line 726: */
VUNATRN_unit_type( Init, NL(Fdec), NL(Env), &TDABTRN );
UDABTRN_t = TDABTRN;
 /* line 727: */
A_CLOSURE( WDABTRN_generator, XDABTRN_generator, YDABTRN_generator );
A_CALLPROC(WDABTRN_generator,(A68_FALSE, &BEABTRN),(A68_FALSE, &BEABTRN,(WDABTRN_generator).nonlocals));
CEABTRN_params = BEABTRN;
 /* line 728: */
DEABTRN.Sort = AJAATRN_explicitmacpar;
FEABTRN = (*XFAATRN_maketypetag(UDABTRN_t)) ;
DEABTRN.Param = A_UNITE(EEABTRN,mode3,3,FEABTRN);
GEABTRN = 1 ;
HEABTRN = (&A_VINDEX(CEABTRN_params,GEABTRN)) ;
(*HEABTRN) = DEABTRN;
 /* line 729: */
IEABTRN.Sort = AJAATRN_explicitmacpar;
KEABTRN = (*WGAATRN_makeunittag(Init)) ;
IEABTRN.Param = A_UNITE(JEABTRN,mode4,4,KEABTRN);
LEABTRN = 2 ;
MEABTRN = (&A_VINDEX(CEABTRN_params,LEABTRN)) ;
(*MEABTRN) = IEABTRN;
 /* line 730: */
A_CALLPROC(NL(URZATRN_names_nameno),(Nms, Namenos, PRZATRN_pvar, &OEABTRN),(Nms, Namenos, PRZATRN_pvar, &OEABTRN,(NL(URZATRN_names_nameno)).nonlocals));
NEABTRN_newnames = OEABTRN.N;
 /* line 731: */
PEABTRN_onames = Nms;
 /* line 732: */
QEABTRN_nnames = NEABTRN_newnames;
 /* line 733: */
for ( ;; )
{ 
 /* line 734: */
if ( !((PEABTRN_onames!=NAAATRN_nilnames)) ) break;
REABTRN.Oldnameno = (*(&(PEABTRN_onames->Nameno)));
REABTRN.Nameno = (*(&(QEABTRN_nnames->Nameno)));
REABTRN.Rest = (*Pvars);
SEABTRN = A_HEAP(A68_407 ) ;
(*SEABTRN) = REABTRN ;
(*Pvars) = SEABTRN;
 /* line 735: */
PEABTRN_onames = (*(&(PEABTRN_onames->Rest)));
 /* line 736: */
 /* line 737: */
QEABTRN_nnames = (*(&(QEABTRN_nnames->Rest)));
}
 /* line 738: */
TEABTRN.Sizes = BBAATRN_nilformulas;
TEABTRN.Inst.Fnno = SDABTRN_fnno;
TEABTRN.Inst.Macparams = CEABTRN_params;
TEABTRN.Inst.Attr = A_UNITE(UEABTRN,mode5,5,(&ZHAATRN_attrnull));
 /* line 739: */
TEABTRN.Makenames = NEABTRN_newnames;
WEABTRN = A_HEAP(A68_196 ) ;
(*WEABTRN) = TEABTRN ;
VEABTRN = WEABTRN;
} 
A_PROC_EXIT(seqpvar_make);
return( VEABTRN );
} 
#undef NL
 /* line 742: */

A_STATIC A68_190 * CFABTRN_anonymous(A68_209 * Seq, A68_353 * Tprocs, A68_407 ** Pvars, A68_32  Namenos, void *NonLocals)
#define NL(x) (((DFABTRN_anonymous *)NonLocals)->x)
{ 
A68_190 * EFABTRN_series;
A68_190 ** FFABTRN_nextstep;
A68_453  HFABTRN_addstep;   /* proc value of non-global proc */
A68_454  NFABTRN_seqpvar_delay;   /* proc value of non-global proc */
A68_455  JGABTRN_seqassign_let;   /* proc value of non-global proc */
A68_209 * IIABTRN_sq;
A68_210  JIABTRN;  /* united object - for case conformity */
A68_222  KIABTRN_decl;
A68_376  LIABTRN;  /* CALL */
A68_333  MIABTRN;  /* avoid structure result */
A68_191  NIABTRN;  /* OPERATORS - unite union */
A68_193 * OIABTRN_pt;
A68_191  PIABTRN;  /* OPERATORS - mode -> union mode */
A68_194 * QIABTRN_ft;
A68_191  RIABTRN;  /* OPERATORS - mode -> union mode */
A68_211 * SIABTRN_slet;
A68_380  TIABTRN;  /* CALL */
A68_337  UIABTRN;  /* avoid structure result */
A68_337  VIABTRN_lc;
A68_372  WIABTRN;  /* CALL */
A68_329  XIABTRN;  /* avoid structure result */
A68_329  YIABTRN_luc;
A68_195  ZIABTRN;  /* collateral clause result */
A68_195 * AJABTRN;  /* YIELD */
A68_191  BJABTRN;  /* OPERATORS - mode -> union mode */
A68_212 * CJABTRN_svar;
A68_337  DJABTRN;  /* avoid structure result */
A68_337  EJABTRN_vc;
A68_372  FJABTRN;  /* CALL */
A68_329  GJABTRN;  /* avoid structure result */
A68_329  HJABTRN_vuc;
A68_195  IJABTRN;  /* collateral clause result */
A68_195 * JJABTRN;  /* YIELD */
A68_191  KJABTRN;  /* OPERATORS - mode -> union mode */
A68_213 * LJABTRN_spvar;
A68_214 * MJABTRN_sa;
A68_195 * NJABTRN_assignlet;
A68_191  OJABTRN;  /* OPERATORS - mode -> union mode */
A68_215 * PJABTRN_sc;
A68_195 * QJABTRN_caselet;
A68_191  RJABTRN;  /* OPERATORS - mode -> union mode */
A68_216 * SJABTRN_scond;
A68_195 * TJABTRN_condlet;
A68_191  UJABTRN;  /* OPERATORS - mode -> union mode */
A68_217 * VJABTRN_srepl;
A68_195 * WJABTRN_repllet;
A68_191  XJABTRN;  /* OPERATORS - mode -> union mode */
A68_219 * YJABTRN_srow;
A68_195 * ZJABTRN_rowlet;
A68_191  AKABTRN;  /* OPERATORS - mode -> union mode */
A68_218 * BKABTRN_snull;
A68_209 * CKABTRN_s;
A68_190 * FKABTRN;  /* clause result */
 /* line 743: */
 /* line 744: */
{ 
EFABTRN_series = SAAATRN_nilseries;
 /* line 745: */
FFABTRN_nextstep = (&EFABTRN_series);
 /* line 746: */
A_CLOSURE( HFABTRN_addstep, IFABTRN_addstep, JFABTRN_addstep );
(( JFABTRN_addstep * ) ( HFABTRN_addstep.nonlocals )) -> FFABTRN_nextstep = (&FFABTRN_nextstep);
 /* line 753: */
A_CLOSURE( NFABTRN_seqpvar_delay, OFABTRN_seqpvar_delay, PFABTRN_seqpvar_delay );
(( PFABTRN_seqpvar_delay * ) ( NFABTRN_seqpvar_delay.nonlocals )) -> TCZATRN_const_simplify = NL(TCZATRN_const_simplify);
(( PFABTRN_seqpvar_delay * ) ( NFABTRN_seqpvar_delay.nonlocals )) -> Env = NL(Env);
(( PFABTRN_seqpvar_delay * ) ( NFABTRN_seqpvar_delay.nonlocals )) -> WFZATRN_const_elem = NL(WFZATRN_const_elem);
(( PFABTRN_seqpvar_delay * ) ( NFABTRN_seqpvar_delay.nonlocals )) -> HFABTRN_addstep = HFABTRN_addstep;
(( PFABTRN_seqpvar_delay * ) ( NFABTRN_seqpvar_delay.nonlocals )) -> PDABTRN_seqpvar_make = NL(PDABTRN_seqpvar_make);
(( PFABTRN_seqpvar_delay * ) ( NFABTRN_seqpvar_delay.nonlocals )) -> Pvars = Pvars;
(( PFABTRN_seqpvar_delay * ) ( NFABTRN_seqpvar_delay.nonlocals )) -> Namenos = Namenos;
(( PFABTRN_seqpvar_delay * ) ( NFABTRN_seqpvar_delay.nonlocals )) -> BEZATRN_unit_index = NL(BEZATRN_unit_index);
 /* line 778: */
A_CLOSURE( JGABTRN_seqassign_let, KGABTRN_seqassign_let, LGABTRN_seqassign_let );
(( LGABTRN_seqassign_let * ) ( JGABTRN_seqassign_let.nonlocals )) -> SOZATRN_simple_unit = NL(SOZATRN_simple_unit);
(( LGABTRN_seqassign_let * ) ( JGABTRN_seqassign_let.nonlocals )) -> Fdec = NL(Fdec);
(( LGABTRN_seqassign_let * ) ( JGABTRN_seqassign_let.nonlocals )) -> Env = NL(Env);
(( LGABTRN_seqassign_let * ) ( JGABTRN_seqassign_let.nonlocals )) -> KQZATRN_add_nametype = NL(KQZATRN_add_nametype);
(( LGABTRN_seqassign_let * ) ( JGABTRN_seqassign_let.nonlocals )) -> EUYATRN_nullnametype = NL(EUYATRN_nullnametype);
(( LGABTRN_seqassign_let * ) ( JGABTRN_seqassign_let.nonlocals )) -> HFABTRN_addstep = HFABTRN_addstep;
(( LGABTRN_seqassign_let * ) ( JGABTRN_seqassign_let.nonlocals )) -> TSZATRN_unit_names = NL(TSZATRN_unit_names);
(( LGABTRN_seqassign_let * ) ( JGABTRN_seqassign_let.nonlocals )) -> CNZATRN_assign_unit = NL(CNZATRN_assign_unit);
(( LGABTRN_seqassign_let * ) ( JGABTRN_seqassign_let.nonlocals )) -> BEZATRN_unit_index = NL(BEZATRN_unit_index);
(( LGABTRN_seqassign_let * ) ( JGABTRN_seqassign_let.nonlocals )) -> AQZATRN_update_tables = NL(AQZATRN_update_tables);
 /* line 838: */
IIABTRN_sq = Seq;
 /* line 839: */
for ( ;; )
{ 
 /* line 840: */
if ( !((IIABTRN_sq!=QAAATRN_nilsequence)) ) break;
 /* line 841: */
JIABTRN = (*(&(IIABTRN_sq->Step))) ;
switch ( JIABTRN.mode )
{ 
case 1: /* STRUCT(INT)  */
case 2: /* STRUCT(INT)  */
case 3: /* STRUCT(INT)  */
case 4: /* STRUCT(INT)  */
case 5: /* STRUCT(INT)  */
A_UNCPY(KIABTRN_decl,JIABTRN);
 /* line 842: */
{ 
LIABTRN = (*(&(Tprocs->Declaration))) ;
A_CALLPROC(LIABTRN,(KIABTRN_decl, Tprocs, &MIABTRN),(KIABTRN_decl, Tprocs, &MIABTRN,(LIABTRN).nonlocals));
MIABTRN;
 /* line 843: */
 /* line 844: */
 /* line 845: */
A_CALLPROC(HFABTRN_addstep,(A_UUNITE(NIABTRN,0,KIABTRN_decl)),(A_UUNITE(NIABTRN,0,KIABTRN_decl),(HFABTRN_addstep).nonlocals));
} 
break;
case 6: /* REF STRUCT(MODE123,REF MODE207)  */
OIABTRN_pt = (JIABTRN.data.mode6);
 /* line 846: */
A_CALLPROC(HFABTRN_addstep,(A_UNITE(PIABTRN,mode6,6,OIABTRN_pt)),(A_UNITE(PIABTRN,mode6,6,OIABTRN_pt),(HFABTRN_addstep).nonlocals));
break;
case 7: /* REF STRUCT(MODE123,REF MODE207)  */
QIABTRN_ft = (JIABTRN.data.mode7);
 /* line 847: */
A_CALLPROC(HFABTRN_addstep,(A_UNITE(RIABTRN,mode7,7,QIABTRN_ft)),(A_UNITE(RIABTRN,mode7,7,QIABTRN_ft),(HFABTRN_addstep).nonlocals));
break;
case 8: /* REF STRUCT(MODE195)  */
SIABTRN_slet = (JIABTRN.data.mode8);
 /* line 848: */
{ 
TIABTRN = (*(&(Tprocs->Names))) ;
A_CALLPROC(TIABTRN,((*(&((&(SIABTRN_slet->Seqlet))->Letnames))), Tprocs, &UIABTRN),((*(&((&(SIABTRN_slet->Seqlet))->Letnames))), Tprocs, &UIABTRN,(TIABTRN).nonlocals));
VIABTRN_lc = UIABTRN;
 /* line 849: */
WIABTRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(WIABTRN,((*(&((&(SIABTRN_slet->Seqlet))->Unit))), Tprocs, &XIABTRN),((*(&((&(SIABTRN_slet->Seqlet))->Unit))), Tprocs, &XIABTRN,(WIABTRN).nonlocals));
YIABTRN_luc = XIABTRN;
 /* line 850: */
ZIABTRN.Letnames = VIABTRN_lc.N;
ZIABTRN.Unit = YIABTRN_luc.U;
 /* line 851: */
 /* line 852: */
AJABTRN = A_HEAP(A68_195 ) ;
(*AJABTRN) = ZIABTRN ;
A_CALLPROC(HFABTRN_addstep,(A_UNITE(BJABTRN,mode8,8,AJABTRN)),(A_UNITE(BJABTRN,mode8,8,AJABTRN),(HFABTRN_addstep).nonlocals));
} 
break;
case 9: /* REF STRUCT(MODE195)  */
CJABTRN_svar = (JIABTRN.data.mode9);
 /* line 853: */
 /* line 854: */
{ 
A_CALLPROC(NL(URZATRN_names_nameno),((*(&((&(CJABTRN_svar->Seqvar))->Letnames))), Namenos, ORZATRN_var, &DJABTRN),((*(&((&(CJABTRN_svar->Seqvar))->Letnames))), Namenos, ORZATRN_var, &DJABTRN,(NL(URZATRN_names_nameno)).nonlocals));
EJABTRN_vc = DJABTRN;
 /* line 855: */
FJABTRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(FJABTRN,((*(&((&(CJABTRN_svar->Seqvar))->Unit))), Tprocs, &GJABTRN),((*(&((&(CJABTRN_svar->Seqvar))->Unit))), Tprocs, &GJABTRN,(FJABTRN).nonlocals));
HJABTRN_vuc = GJABTRN;
 /* line 856: */
IJABTRN.Letnames = EJABTRN_vc.N;
IJABTRN.Unit = HJABTRN_vuc.U;
 /* line 857: */
 /* line 858: */
JJABTRN = A_HEAP(A68_195 ) ;
(*JJABTRN) = IJABTRN ;
A_CALLPROC(HFABTRN_addstep,(A_UNITE(KJABTRN,mode8,8,JJABTRN)),(A_UNITE(KJABTRN,mode8,8,JJABTRN),(HFABTRN_addstep).nonlocals));
} 
break;
case 10: /* REF STRUCT(REF MODE202,MODE161)  */
LJABTRN_spvar = (JIABTRN.data.mode10);
 /* line 859: */
{ 
(*NL(With_pvar)) = A68_TRUE;
 /* line 860: */
A_CALLPROC(NL(NUYATRN_exists_pvar),(),((NL(NUYATRN_exists_pvar)).nonlocals));
 /* line 861: */
 /* line 862: */
 /* line 863: */
A_CALLPROC(NFABTRN_seqpvar_delay,(LJABTRN_spvar),(LJABTRN_spvar,(NFABTRN_seqpvar_delay).nonlocals));
} 
break;
case 11: /* REF STRUCT(MODE161,MODE161)  */
MJABTRN_sa = (JIABTRN.data.mode11);
 /* line 864: */
{ 
NJABTRN_assignlet = A_CALLPROC(JGABTRN_seqassign_let,(MJABTRN_sa, Tprocs, Namenos),(MJABTRN_sa, Tprocs, Namenos,(JGABTRN_seqassign_let).nonlocals));
 /* line 865: */
 /* line 866: */
 /* line 867: */
A_CALLPROC(HFABTRN_addstep,(A_UNITE(OJABTRN,mode8,8,NJABTRN_assignlet)),(A_UNITE(OJABTRN,mode8,8,NJABTRN_assignlet),(HFABTRN_addstep).nonlocals));
} 
break;
case 12: /* REF STRUCT(MODE161,REF MODE220)  */
PJABTRN_sc = (JIABTRN.data.mode12);
 /* line 868: */
{ 
QJABTRN_caselet = A_CALLPROC(NL(VXZATRN_seqcase_let),(PJABTRN_sc, Tprocs, Namenos),(PJABTRN_sc, Tprocs, Namenos,(NL(VXZATRN_seqcase_let)).nonlocals));
 /* line 869: */
 /* line 870: */
 /* line 871: */
A_CALLPROC(HFABTRN_addstep,(A_UNITE(RJABTRN,mode8,8,QJABTRN_caselet)),(A_UNITE(RJABTRN,mode8,8,QJABTRN_caselet),(HFABTRN_addstep).nonlocals));
} 
break;
case 13: /* REF STRUCT(MODE123,MODE210,MODE210)  */
SJABTRN_scond = (JIABTRN.data.mode13);
 /* line 872: */
{ 
TJABTRN_condlet = A_CALLPROC(NL(WBABTRN_seqcond_let),(SJABTRN_scond, Tprocs, Namenos),(SJABTRN_scond, Tprocs, Namenos,(NL(WBABTRN_seqcond_let)).nonlocals));
 /* line 873: */
 /* line 874: */
 /* line 875: */
A_CALLPROC(HFABTRN_addstep,(A_UNITE(UJABTRN,mode8,8,TJABTRN_condlet)),(A_UNITE(UJABTRN,mode8,8,TJABTRN_condlet),(HFABTRN_addstep).nonlocals));
} 
break;
case 14: /* REF STRUCT(MODE123,MODE210)  */
VJABTRN_srepl = (JIABTRN.data.mode14);
 /* line 876: */
{ 
WJABTRN_repllet = A_CALLPROC(NL(MCABTRN_seqrepl_let),(VJABTRN_srepl, Tprocs, Namenos),(VJABTRN_srepl, Tprocs, Namenos,(NL(MCABTRN_seqrepl_let)).nonlocals));
 /* line 877: */
 /* line 878: */
 /* line 879: */
A_CALLPROC(HFABTRN_addstep,(A_UNITE(XJABTRN,mode8,8,WJABTRN_repllet)),(A_UNITE(XJABTRN,mode8,8,WJABTRN_repllet),(HFABTRN_addstep).nonlocals));
} 
break;
case 17: /* REF STRUCT(MODE123,MODE210)  */
YJABTRN_srow = (JIABTRN.data.mode17);
 /* line 880: */
{ 
ZJABTRN_rowlet = A_CALLPROC(NL(ADABTRN_seqrow_let),(YJABTRN_srow, Tprocs, Namenos),(YJABTRN_srow, Tprocs, Namenos,(NL(ADABTRN_seqrow_let)).nonlocals));
 /* line 881: */
 /* line 882: */
 /* line 883: */
A_CALLPROC(HFABTRN_addstep,(A_UNITE(AKABTRN,mode8,8,ZJABTRN_rowlet)),(A_UNITE(AKABTRN,mode8,8,ZJABTRN_rowlet),(HFABTRN_addstep).nonlocals));
} 
break;
case 15: /* REF STRUCT(INT)  */
BKABTRN_snull = (JIABTRN.data.mode15);
 /* line 884: */
/*SKIP*/;
break;
case 16: /* REF STRUCT(MODE210,REF MODE209)  */
CKABTRN_s = (JIABTRN.data.mode16);
 /* line 885: */
{ 
 /* line 886: */
(*FFABTRN_nextstep) = A_CALLPROC((*NL(WTZATRN_sequence_series)),(CKABTRN_s, Tprocs, Pvars, Namenos),(CKABTRN_s, Tprocs, Pvars, Namenos,((*NL(WTZATRN_sequence_series))).nonlocals));
 /* line 887: */
for ( ;; )
{ 
if ( !(((*FFABTRN_nextstep)!=SAAATRN_nilseries)) ) break;
FFABTRN_nextstep = (&((*FFABTRN_nextstep)->Rest));
}
 /* line 888: */
 /* line 889: */
} 
break;
default: 
 /* line 890: */
A_CALLPROC(NL(RUYATRN_sysfault),(EKABTRN),(EKABTRN,(NL(RUYATRN_sysfault)).nonlocals));
break;
} 
 /* line 891: */
 /* line 892: */
IIABTRN_sq = (*(&(IIABTRN_sq->Rest)));
}
 /* line 893: */
 /* line 894: */
FKABTRN = EFABTRN_series;
} 
return( FKABTRN );
} 
#undef NL

A_STATIC A68_VOID  IKABTRN_generator(A68_BOOL  GKABTRN_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((JKABTRN_generator *)NonLocals)->x)
{ 
A68_32  KKABTRN;  /* clause result */
A68_32  LKABTRN;  /* OPERATORS - dynamic generator */
{ 
LKABTRN.upb = NL(JPZATRN_n_nametypes) ;
( GKABTRN_anonymous? A_VLOC(A68_INT ,LKABTRN): A_VHEAP(A68_INT ,LKABTRN) );
KKABTRN = LKABTRN;
} 
*ReturnedValue = (KKABTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  VKABTRN_anonymous(A68_202 * N, A68_353 * Tp, A68_337  *ReturnedValue, void *NonLocals)
#define NL(x) (((WKABTRN_anonymous *)NonLocals)->x)
{ 
A68_337  XKABTRN;  /* clause result */
A68_337  YKABTRN;  /* avoid structure result */
A_CALLPROC(NL(URZATRN_names_nameno),(N, NL(MKABTRN_namenos), QRZATRN_other, &YKABTRN),(N, NL(MKABTRN_namenos), QRZATRN_other, &YKABTRN,(NL(URZATRN_names_nameno)).nonlocals));
XKABTRN = YKABTRN;
*ReturnedValue = (XKABTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ELABTRN_anonymous(A68_161  U, A68_353 * Tp, A68_329  *ReturnedValue, void *NonLocals)
#define NL(x) (((FLABTRN_anonymous *)NonLocals)->x)
{ 
A68_329  GLABTRN;  /* clause result */
A68_329  HLABTRN;  /* avoid structure result */
 /* line 906: */
A_CALLPROC(NL(WVZATRN_unit_seq),(U, Tp, NL(MKABTRN_namenos), &HLABTRN),(U, Tp, NL(MKABTRN_namenos), &HLABTRN,(NL(WVZATRN_unit_seq)).nonlocals));
GLABTRN = HLABTRN;
*ReturnedValue = (GLABTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  VMABTRN_anonymous(A68_237 * Fd, A68_353 * Tprocs, A68_350  *ReturnedValue, void *NonLocals)
#define NL(x) (((WMABTRN_anonymous *)NonLocals)->x)
{ 
A68_350  XMABTRN;  /* clause result */
A68_350  YMABTRN;  /* avoid structure result */
 /* line 942: */
 /* line 943: */
A_CALLPROC(NL(GPZATRN_fndec_seq),(Fd, Tprocs, NL(RMABTRN_with_pvar), NL(Ofn).Environ, &YMABTRN),(Fd, Tprocs, NL(RMABTRN_with_pvar), NL(Ofn).Environ, &YMABTRN,(NL(GPZATRN_fndec_seq)).nonlocals));
XMABTRN = YMABTRN;
*ReturnedValue = (XMABTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  KNABTRN_generator(A68_BOOL  INABTRN_anonymous, A68_245  *ReturnedValue, void *NonLocals)
#define NL(x) (((LNABTRN_generator *)NonLocals)->x)
{ 
A68_245  MNABTRN;  /* clause result */
A68_245  NNABTRN;  /* OPERATORS - dynamic generator */
{ 
NNABTRN.upb = NL(HNABTRN_newfnno) ;
( INABTRN_anonymous? A_VLOC(A68_237 *,NNABTRN): A_VHEAP(A68_237 *,NNABTRN) );
MNABTRN = NNABTRN;
} 
*ReturnedValue = (MNABTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  JUYATRN_check_closure(void *NonLocals)
#define NL(x) (((KUYATRN_check_closure *)NonLocals)->x)
{ 
A68_INT  LUYATRN_place;
A_PROC_ENTRY(check_closure);
if ( !(*NL(GUYATRN_changed)) )
{ 
(*NL(GUYATRN_changed)) = A68_TRUE;
 /* line 91: */
(*NL(FUYATRN_newclosure)) = DPCATRN_copy_closure((*NL(FUYATRN_newclosure)), NL(Msg));
 /* line 93: */
LUYATRN_place = (*(&((&((**NL(HUYATRN_newptr))->Outer))->Closureno)));
 /* line 94: */
(*NL(HUYATRN_newptr)) = (&((*NL(FUYATRN_newclosure))->Outers));
 /* line 95: */
for ( ;; )
{ 
 /* line 96: */
if ( !(((*(&((&((**NL(HUYATRN_newptr))->Outer))->Closureno)))!=LUYATRN_place)) ) break;
(*NL(HUYATRN_newptr)) = (&((**NL(HUYATRN_newptr))->Rest));
}
 /* line 97: */
} 
A_PROC_EXIT(check_closure);
return;
} 
#undef NL

A_STATIC A68_VOID  OUYATRN_exists_pvar(void *NonLocals)
#define NL(x) (((PUYATRN_exists_pvar *)NonLocals)->x)
{ 
A_PROC_ENTRY(exists_pvar);
{ 
 /* line 103: */
if ( ((*NL(MUYATRN_delayclosureno))==(-1)) )
{ 
A_CALLPROC(NL(IUYATRN_check_closure),(),((NL(IUYATRN_check_closure)).nonlocals));
 /* line 104: */
 /* line 105: */
 /* line 106: */
(*NL(MUYATRN_delayclosureno)) = ENCATRN_reserve_next_closureno((*NL(FUYATRN_newclosure)));
} 
} 
A_PROC_EXIT(exists_pvar);
return;
} 
#undef NL

A_STATIC A68_VOID  SUYATRN_sysfault(A68_VC  S, void *NonLocals)
#define NL(x) (((TUYATRN_sysfault *)NonLocals)->x)
{ 
A68_46  UUYATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(sysfault);
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(UUYATRN,S,A68_VC )),(SHAAOSI_system, A_HVEC(UUYATRN,S,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(sysfault);
return;
} 
#undef NL

A_STATIC A68_124 * YUYATRN_makefint(A68_INT  I)
{ 
A68_124  ZUYATRN;  /* collateral clause result */
A68_124 * AVYATRN;  /* clause result */
A68_124 * BVYATRN;  /* YIELD */
A_PROC_ENTRY(makefint);
ZUYATRN.Int = I;
ZUYATRN.Text = TTCAOST_nullid;
BVYATRN = A_HEAP(A68_124 ) ;
(*BVYATRN) = ZUYATRN ;
AVYATRN = BVYATRN;
A_PROC_EXIT(makefint);
return( AVYATRN );
} 
#undef NL

A_STATIC A68_VOID  EVYATRN_varid(A68_VC  Name, A68_INT  No, A68_VC  *ReturnedValue)
{ 
A68_411  FVYATRN;  /* collateral clause result */
A68_52  IVYATRN;  /* OPERATORS - mode -> union mode */
A68_VC  JVYATRN;  /* YIELD */
A68_52  KVYATRN;  /* OPERATORS - mode -> union mode */
A68_52  LVYATRN;  /* OPERATORS - mode -> union mode */
A68_VC  MVYATRN;  /* clause result */
A68_85  NVYATRN;  /* OPERATORS - istruct -> vector */
A68_VC  OVYATRN;  /* avoid structure result */
A_PROC_ENTRY(varid);
JVYATRN = HVYATRN ;
FVYATRN.data[0] = A_UNITE(IVYATRN,mode7,7,JVYATRN);
FVYATRN.data[1] = A_UNITE(KVYATRN,mode1,1,No);
FVYATRN.data[2] = A_UNITE(LVYATRN,mode7,7,Name);
UJBAOSL_oneline( A_HISVEC(NVYATRN,FVYATRN,3,A68_52 ), &OVYATRN );
MVYATRN = OVYATRN;
A_PROC_EXIT(varid);
*ReturnedValue = (MVYATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  RVYATRN_generator(A68_BOOL  PVYATRN_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((SVYATRN_generator *)NonLocals)->x)
{ 
A68_VC  TVYATRN;  /* clause result */
A68_VC  UVYATRN;  /* OPERATORS - dynamic generator */
{ 
UVYATRN.upb = 6 ;
( PVYATRN_anonymous? A_VLOC(A68_CHAR ,UVYATRN): A_VHEAP(A68_CHAR ,UVYATRN) );
TVYATRN = UVYATRN;
} 
*ReturnedValue = (TVYATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  CWYATRN_fnbody_seq(A68_233  Fbody, A68_353 * Tprocs, A68_347  *ReturnedValue)
{ 
A68_233  DWYATRN;  /* united object - for case conformity */
A68_206 * EWYATRN_ut;
A68_347  FWYATRN;  /* clause result */
A68_390  GWYATRN;  /* CALL */
A68_347  HWYATRN;  /* avoid structure result */
A68_232 * IWYATRN_bc;
A68_390  JWYATRN;  /* CALL */
A68_347  KWYATRN;  /* avoid structure result */
A68_347  LWYATRN;  /* collateral clause result */
A_PROC_ENTRY(fnbody_seq);
 /* line 127: */
 /* line 128: */
DWYATRN = Fbody ;
switch ( DWYATRN.mode )
{ 
case 1: /* REF STRUCT(MODE161)  */
EWYATRN_ut = (DWYATRN.data.mode1);
 /* line 129: */
GWYATRN = (*(&(AWLATRN_nulltprocs->Fnbody))) ;
A_CALLPROC(GWYATRN,(Fbody, Tprocs, &HWYATRN),(Fbody, Tprocs, &HWYATRN,(GWYATRN).nonlocals));
FWYATRN = HWYATRN;
break;
case 11: /* REF STRUCT(REF MODE113,BOOL,MODE233)  */
IWYATRN_bc = (DWYATRN.data.mode11);
 /* line 130: */
JWYATRN = (*(&(AWLATRN_nulltprocs->Fnbody))) ;
A_CALLPROC(JWYATRN,(Fbody, Tprocs, &KWYATRN),(Fbody, Tprocs, &KWYATRN,(JWYATRN).nonlocals));
FWYATRN = KWYATRN;
break;
default: 
LWYATRN.F = Fbody;
 /* line 131: */
LWYATRN.C = A68_FALSE;
FWYATRN = LWYATRN;
break;
} 
A_PROC_EXIT(fnbody_seq);
*ReturnedValue = (FWYATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  OWYATRN_delay_outer(A68_INT  Closureno, A68_246  *ReturnedValue, void *NonLocals)
#define NL(x) (((PWYATRN_delay_outer *)NonLocals)->x)
{ 
A68_139  QWYATRN;  /* OPERATORS - mode -> union mode */
A68_140 * RWYATRN;  /* YIELD */
A68_139  SWYATRN_type;
A68_161  TWYATRN;  /* OPERATORS - mode -> union mode */
A68_155 * UWYATRN;  /* YIELD */
A68_161  VWYATRN_const;
A68_414  XWYATRN_generator;   /* proc value of non-global proc */
A68_238  CXYATRN;  /* avoid structure result */
A68_238  DXYATRN_macspecs;
A68_235  EXYATRN;  /* collateral clause result */
A68_222  FXYATRN;  /* OPERATORS - mode -> union mode */
A68_140  GXYATRN;  /* YIELD */
A68_INT  HXYATRN;  /* YIELD */
A68_235 * IXYATRN;  /* YIELD */
A68_235  JXYATRN;  /* collateral clause result */
A68_222  KXYATRN;  /* OPERATORS - mode -> union mode */
A68_155  LXYATRN;  /* YIELD */
A68_INT  MXYATRN;  /* YIELD */
A68_235 * NXYATRN;  /* YIELD */
A68_202 * OXYATRN_inputs;
A68_202  PXYATRN;  /* collateral clause result */
A68_202 * QXYATRN_outputs;
A68_202  RXYATRN;  /* collateral clause result */
A68_415  TXYATRN_generator;   /* proc value of non-global proc */
A68_239  YXYATRN;  /* avoid structure result */
A68_239  ZXYATRN_nametypes;
A68_236  AYYATRN;  /* collateral clause result */
A68_114  BYYATRN;  /* OPERATORS - mode -> union mode */
A68_INT  CYYATRN;  /* YIELD */
A68_236 * DYYATRN;  /* YIELD */
A68_236  EYYATRN;  /* collateral clause result */
A68_114  FYYATRN;  /* OPERATORS - mode -> union mode */
A68_INT  GYYATRN;  /* YIELD */
A68_236 * HYYATRN;  /* YIELD */
A68_227 * IYYATRN_adelay;
A68_227  JYYATRN;  /* collateral clause result */
A68_123  KYYATRN;  /* OPERATORS - mode -> union mode */
A68_124 * LYYATRN;  /* YIELD */
A68_123  MYYATRN;  /* OPERATORS - mode -> union mode */
A68_124 * NYYATRN;  /* YIELD */
A68_237 * OYYATRN_fdec;
A68_237  PYYATRN;  /* collateral clause result */
A68_114  QYYATRN;  /* OPERATORS - mode -> union mode */
A68_233  RYYATRN;  /* OPERATORS - mode -> union mode */
A68_121  SYYATRN;  /* collateral clause result */
A68_121 * TYYATRN;  /* YIELD */
A68_416  VYYATRN_generator;   /* proc value of non-global proc */
A68_243  AZYATRN;  /* avoid structure result */
A68_243  BZYATRN_newtypes;
A68_154  CZYATRN;  /* collateral clause result */
A68_VC  FZYATRN;  /* avoid structure result */
A68_114  GZYATRN;  /* OPERATORS - mode -> union mode */
A68_139  HZYATRN;  /* OPERATORS - mode -> union mode */
A68_152  IZYATRN;  /* OPERATORS - mode -> union mode */
A68_148 * JZYATRN;  /* YIELD */
A68_INT  KZYATRN;  /* YIELD */
A68_154 * LZYATRN;  /* YIELD */
A68_154 ** MZYATRN;  /* YIELD */
A68_417  OZYATRN_generator;   /* proc value of non-global proc */
A68_244  TZYATRN;  /* avoid structure result */
A68_244  UZYATRN_newconsts;
A68_160  VZYATRN;  /* collateral clause result */
A68_VC  YZYATRN;  /* avoid structure result */
A68_114  ZZYATRN;  /* OPERATORS - mode -> union mode */
A68_161  AAZATRN;  /* OPERATORS - mode -> union mode */
A68_144 * BAZATRN;  /* YIELD */
A68_INT  CAZATRN;  /* YIELD */
A68_160 * DAZATRN;  /* YIELD */
A68_160 ** EAZATRN;  /* YIELD */
A68_419  GAZATRN_generator;   /* proc value of non-global proc */
A68_245  LAZATRN;  /* avoid structure result */
A68_245  MAZATRN_newfns;
A68_INT  NAZATRN;  /* YIELD */
A68_237 ** OAZATRN;  /* YIELD */
A68_246  PAZATRN;  /* collateral clause result */
A68_240  QAZATRN;  /* collateral clause result */
A68_240 * RAZATRN;  /* YIELD */
A68_246  SAZATRN;  /* clause result */
A_PROC_ENTRY(delay_outer);
 /* line 136: */
 /* line 140: */
{ 
RWYATRN = IFAATRN_maketname(1) ;
SWYATRN_type = A_UNITE(QWYATRN,mode1,1,RWYATRN);
 /* line 141: */
UWYATRN = CGAATRN_makecname(1) ;
VWYATRN_const = A_UNITE(TWYATRN,mode1,1,UWYATRN);
 /* line 142: */
A_CLOSURE( XWYATRN_generator, YWYATRN_generator, ZWYATRN_generator );
A_CALLPROC(XWYATRN_generator,(A68_FALSE, &CXYATRN),(A68_FALSE, &CXYATRN,(XWYATRN_generator).nonlocals));
DXYATRN_macspecs = CXYATRN;
 /* line 143: */
EXYATRN.Sort = AJAATRN_explicitmacpar;
GXYATRN = (*IFAATRN_maketname(1)) ;
EXYATRN.Spec = A_UNITE(FXYATRN,mode3,3,GXYATRN);
HXYATRN = 1 ;
IXYATRN = (&A_VINDEX(DXYATRN_macspecs,HXYATRN)) ;
(*IXYATRN) = EXYATRN;
 /* line 144: */
JXYATRN.Sort = AJAATRN_explicitmacpar;
LXYATRN = (*CGAATRN_makecname(1)) ;
JXYATRN.Spec = A_UNITE(KXYATRN,mode4,4,LXYATRN);
MXYATRN = 2 ;
NXYATRN = (&A_VINDEX(DXYATRN_macspecs,MXYATRN)) ;
(*NXYATRN) = JXYATRN;
 /* line 145: */
OXYATRN_inputs = (A_HEAP(A68_202 ));
PXYATRN.Nameno = 1;
PXYATRN.Rest = NAAATRN_nilnames;
(*OXYATRN_inputs) = PXYATRN;
 /* line 146: */
QXYATRN_outputs = (A_HEAP(A68_202 ));
RXYATRN.Nameno = 2;
RXYATRN.Rest = NAAATRN_nilnames;
(*QXYATRN_outputs) = RXYATRN;
 /* line 147: */
A_CLOSURE( TXYATRN_generator, UXYATRN_generator, VXYATRN_generator );
A_CALLPROC(TXYATRN_generator,(A68_FALSE, &YXYATRN),(A68_FALSE, &YXYATRN,(TXYATRN_generator).nonlocals));
ZXYATRN_nametypes = YXYATRN;
 /* line 148: */
AYYATRN.Name = TTCAOST_nullid;
AYYATRN.Type = SWYATRN_type;
AYYATRN.Attr = A_UNITE(BYYATRN,mode5,5,(&ZHAATRN_attrnull));
CYYATRN = 1 ;
DYYATRN = (&A_VINDEX(ZXYATRN_nametypes,CYYATRN)) ;
(*DYYATRN) = AYYATRN;
 /* line 149: */
EYYATRN.Name = TTCAOST_nullid;
EYYATRN.Type = SWYATRN_type;
EYYATRN.Attr = A_UNITE(FYYATRN,mode5,5,(&ZHAATRN_attrnull));
GYYATRN = 2 ;
HYYATRN = (&A_VINDEX(ZXYATRN_nametypes,GYYATRN)) ;
(*HYYATRN) = EYYATRN;
 /* line 150: */
IYYATRN_adelay = (A_HEAP(A68_227 ));
JYYATRN.Sort = DKAATRN_constint;
JYYATRN.Init = VWYATRN_const;
LYYATRN = YUYATRN_makefint(1) ;
JYYATRN.Ambigtime = A_UNITE(KYYATRN,mode1,1,LYYATRN);
JYYATRN.Ambig = VWYATRN_const;
NYYATRN = YUYATRN_makefint(1) ;
JYYATRN.Delaytime = A_UNITE(MYYATRN,mode1,1,NYYATRN);
(*IYYATRN_adelay) = JYYATRN;
 /* line 151: */
 /* line 152: */
OYYATRN_fdec = (A_HEAP(A68_237 ));
PYYATRN.Sort = OKAATRN_outerdec;
PYYATRN.Macro = A68_TRUE;
PYYATRN.Fnname = NL(ZVYATRN_pvarname);
PYYATRN.Macspecs = DXYATRN_macspecs;
 /* line 153: */
PYYATRN.Attr = A_UNITE(QYYATRN,mode5,5,(&ZHAATRN_attrnull));
PYYATRN.Inputs = OXYATRN_inputs;
PYYATRN.Outputs = QXYATRN_outputs;
PYYATRN.Nametypes = ZXYATRN_nametypes;
 /* line 154: */
PYYATRN.Fnbody = A_UNITE(RYYATRN,mode6,6,IYYATRN_adelay);
SYYATRN.Contextno = 0;
SYYATRN.Closureno = Closureno;
SYYATRN.Libv_spec = 0;
SYYATRN.Libv_body = 0;
SYYATRN.Import = A68_FALSE;
SYYATRN.Export = A68_FALSE;
TYYATRN = A_HEAP(A68_121 ) ;
(*TYYATRN) = SYYATRN ;
PYYATRN.Usage = TYYATRN;
(*OYYATRN_fdec) = PYYATRN;
 /* line 156: */
A_CLOSURE( VYYATRN_generator, WYYATRN_generator, XYYATRN_generator );
A_CALLPROC(VYYATRN_generator,(A68_FALSE, &AZYATRN),(A68_FALSE, &AZYATRN,(VYYATRN_generator).nonlocals));
BZYATRN_newtypes = AZYATRN;
 /* line 157: */
 /* line 158: */
CZYATRN.Sort = QKAATRN_macpardec;
A_CALLPROC(ZLAATRN_makeid,(EZYATRN, &FZYATRN),(EZYATRN, &FZYATRN,(ZLAATRN_makeid).nonlocals));
CZYATRN.Typename = FZYATRN;
CZYATRN.Attr = A_UNITE(GZYATRN,mode5,5,(&ZHAATRN_attrnull));
JZYATRN = XFAATRN_maketypetag(A_UNITE(HZYATRN,mode9,9,(&DIAATRN_tnull))) ;
CZYATRN.Body = A_UNITE(IZYATRN,mode3,3,JZYATRN);
CZYATRN.Usage = CBAATRN_nilusage;
KZYATRN = 1 ;
LZYATRN = A_HEAP(A68_154 ) ;
(*LZYATRN) = CZYATRN ;
MZYATRN = (&A_VINDEX(BZYATRN_newtypes,KZYATRN)) ;
(*MZYATRN) = LZYATRN;
 /* line 159: */
A_CLOSURE( OZYATRN_generator, PZYATRN_generator, QZYATRN_generator );
A_CALLPROC(OZYATRN_generator,(A68_FALSE, &TZYATRN),(A68_FALSE, &TZYATRN,(OZYATRN_generator).nonlocals));
UZYATRN_newconsts = TZYATRN;
 /* line 160: */
 /* line 161: */
VZYATRN.Sort = QKAATRN_macpardec;
A_CALLPROC(ZLAATRN_makeid,(XZYATRN, &YZYATRN),(XZYATRN, &YZYATRN,(ZLAATRN_makeid).nonlocals));
VZYATRN.Constname = YZYATRN;
VZYATRN.Attr = A_UNITE(ZZYATRN,mode5,5,(&ZHAATRN_attrnull));
BAZATRN = HGAATRN_makectype(SWYATRN_type) ;
VZYATRN.Value = A_UNITE(AAZATRN,mode7,7,BAZATRN);
VZYATRN.Usage = CBAATRN_nilusage;
CAZATRN = 1 ;
DAZATRN = A_HEAP(A68_160 ) ;
(*DAZATRN) = VZYATRN ;
EAZATRN = (&A_VINDEX(UZYATRN_newconsts,CAZATRN)) ;
(*EAZATRN) = DAZATRN;
 /* line 162: */
A_CLOSURE( GAZATRN_generator, HAZATRN_generator, IAZATRN_generator );
A_CALLPROC(GAZATRN_generator,(A68_FALSE, &LAZATRN),(A68_FALSE, &LAZATRN,(GAZATRN_generator).nonlocals));
MAZATRN_newfns = LAZATRN;
 /* line 163: */
NAZATRN = 1 ;
OAZATRN = (&A_VINDEX(MAZATRN_newfns,NAZATRN)) ;
(*OAZATRN) = OYYATRN_fdec;
 /* line 164: */
PAZATRN.Closureno = Closureno;
 /* line 165: */
PAZATRN.Sort = VKAATRN_outerfn;
QAZATRN.Attrs = MCAATRN_nullattrdecs;
QAZATRN.Ints = SCAATRN_nullintdecs;
QAZATRN.Types = BZYATRN_newtypes;
QAZATRN.Consts = UZYATRN_newconsts;
QAZATRN.Fns = MAZATRN_newfns;
 /* line 166: */
RAZATRN = A_HEAP(A68_240 ) ;
(*RAZATRN) = QAZATRN ;
PAZATRN.Environ = RAZATRN;
SAZATRN = PAZATRN;
} 
A_PROC_EXIT(delay_outer);
*ReturnedValue = (SAZATRN);
return;
} 
#undef NL

A_STATIC A68_237 * VAZATRN_delay_usage(A68_INT  Closureno, void *NonLocals)
#define NL(x) (((WAZATRN_delay_usage *)NonLocals)->x)
{ 
A68_202 * XAZATRN_inputs;
A68_202  YAZATRN;  /* collateral clause result */
A68_202 * ZAZATRN_outputs;
A68_202  ABZATRN;  /* collateral clause result */
A68_415  CBZATRN_generator;   /* proc value of non-global proc */
A68_239  HBZATRN;  /* avoid structure result */
A68_239  IBZATRN_nametypes;
A68_236  JBZATRN;  /* collateral clause result */
A68_139  KBZATRN;  /* OPERATORS - mode -> union mode */
A68_132 * LBZATRN;  /* YIELD */
A68_114  MBZATRN;  /* OPERATORS - mode -> union mode */
A68_INT  NBZATRN;  /* YIELD */
A68_236 * OBZATRN;  /* YIELD */
A68_236  PBZATRN;  /* collateral clause result */
A68_139  QBZATRN;  /* OPERATORS - mode -> union mode */
A68_132 * RBZATRN;  /* YIELD */
A68_114  SBZATRN;  /* OPERATORS - mode -> union mode */
A68_INT  TBZATRN;  /* YIELD */
A68_236 * UBZATRN;  /* YIELD */
A68_237  VBZATRN;  /* collateral clause result */
A68_114  WBZATRN;  /* OPERATORS - mode -> union mode */
A68_233  XBZATRN;  /* OPERATORS - mode -> union mode */
A68_121  YBZATRN;  /* collateral clause result */
A68_121 * ZBZATRN;  /* YIELD */
A68_237 * ACZATRN;  /* clause result */
A68_237 * BCZATRN;  /* YIELD */
A_PROC_ENTRY(delay_usage);
 /* line 169: */
 /* line 172: */
{ 
XAZATRN_inputs = (A_HEAP(A68_202 ));
YAZATRN.Nameno = 1;
YAZATRN.Rest = NAAATRN_nilnames;
(*XAZATRN_inputs) = YAZATRN;
 /* line 173: */
ZAZATRN_outputs = (A_HEAP(A68_202 ));
ABZATRN.Nameno = 2;
ABZATRN.Rest = NAAATRN_nilnames;
(*ZAZATRN_outputs) = ABZATRN;
 /* line 174: */
A_CLOSURE( CBZATRN_generator, DBZATRN_generator, EBZATRN_generator );
A_CALLPROC(CBZATRN_generator,(A68_FALSE, &HBZATRN),(A68_FALSE, &HBZATRN,(CBZATRN_generator).nonlocals));
IBZATRN_nametypes = HBZATRN;
 /* line 175: */
JBZATRN.Name = TTCAOST_nullid;
LBZATRN = NFAATRN_maketmacpar(1) ;
JBZATRN.Type = A_UNITE(KBZATRN,mode8,8,LBZATRN);
JBZATRN.Attr = A_UNITE(MBZATRN,mode5,5,(&ZHAATRN_attrnull));
NBZATRN = 1 ;
OBZATRN = (&A_VINDEX(IBZATRN_nametypes,NBZATRN)) ;
(*OBZATRN) = JBZATRN;
 /* line 176: */
PBZATRN.Name = TTCAOST_nullid;
RBZATRN = NFAATRN_maketmacpar(1) ;
PBZATRN.Type = A_UNITE(QBZATRN,mode8,8,RBZATRN);
PBZATRN.Attr = A_UNITE(SBZATRN,mode5,5,(&ZHAATRN_attrnull));
TBZATRN = 2 ;
UBZATRN = (&A_VINDEX(IBZATRN_nametypes,TBZATRN)) ;
(*UBZATRN) = PBZATRN;
 /* line 177: */
VBZATRN.Sort = OKAATRN_outerdec;
VBZATRN.Macro = A68_TRUE;
VBZATRN.Fnname = NL(ZVYATRN_pvarname);
VBZATRN.Macspecs = GCAATRN_nullmacspecs;
 /* line 178: */
VBZATRN.Attr = A_UNITE(WBZATRN,mode5,5,(&ZHAATRN_attrnull));
VBZATRN.Inputs = XAZATRN_inputs;
VBZATRN.Outputs = ZAZATRN_outputs;
VBZATRN.Nametypes = IBZATRN_nametypes;
 /* line 179: */
VBZATRN.Fnbody = A_UNITE(XBZATRN,mode12,12,(&LIAATRN_bodynull));
YBZATRN.Contextno = 0;
YBZATRN.Closureno = Closureno;
YBZATRN.Libv_spec = 0;
YBZATRN.Libv_body = 0;
YBZATRN.Import = A68_FALSE;
YBZATRN.Export = A68_FALSE;
 /* line 180: */
ZBZATRN = A_HEAP(A68_121 ) ;
(*ZBZATRN) = YBZATRN ;
VBZATRN.Usage = ZBZATRN;
BCZATRN = A_HEAP(A68_237 ) ;
(*BCZATRN) = VBZATRN ;
ACZATRN = BCZATRN;
} 
A_PROC_EXIT(delay_usage);
return( ACZATRN );
} 
#undef NL

A_STATIC A68_VOID  FCZATRN_type_simplify(A68_139  T, A68_240 * Env, A68_139  *ReturnedValue, void *NonLocals)
#define NL(x) (((GCZATRN_type_simplify *)NonLocals)->x)
{ 
A68_139  HCZATRN;  /* united object - for case conformity */
A68_140 * ICZATRN_tn;
A68_243  JCZATRN;  /* OPERATORS - simple index */
A68_INT  KCZATRN;  /* YIELD */
A68_152  LCZATRN;  /* united object - for case conformity */
A68_148 * MCZATRN_tv;
A68_139  NCZATRN;  /* clause result */
A68_139  OCZATRN;  /* avoid structure result */
A68_144 * PCZATRN_tb;
A68_139  QCZATRN;  /* avoid structure result */
A_PROC_ENTRY(type_simplify);
 /* line 184: */
 /* line 185: */
HCZATRN = T ;
switch ( HCZATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
ICZATRN_tn = (HCZATRN.data.mode1);
 /* line 186: */
JCZATRN = (*(&(Env->Types))) ;
KCZATRN = (*(&(ICZATRN_tn->Typeno))) ;
LCZATRN = (*(&((*(&A_VINDEX(JCZATRN,KCZATRN)))->Body))) ;
switch ( LCZATRN.mode )
{ 
case 3: /* REF STRUCT(MODE139)  */
MCZATRN_tv = (LCZATRN.data.mode3);
 /* line 187: */
 /* line 188: */
A_CALLPROC(NL(ECZATRN_type_simplify),((*(&(MCZATRN_tv->Tag))), Env, &OCZATRN),((*(&(MCZATRN_tv->Tag))), Env, &OCZATRN,(NL(ECZATRN_type_simplify)).nonlocals));
NCZATRN = OCZATRN;
break;
default: 
 /* line 189: */
NCZATRN = T;
break;
} 
break;
case 5: /* REF STRUCT(MODE139)  */
PCZATRN_tb = (HCZATRN.data.mode5);
 /* line 190: */
 /* line 191: */
A_CALLPROC(NL(ECZATRN_type_simplify),((*(&(PCZATRN_tb->Type))), Env, &QCZATRN),((*(&(PCZATRN_tb->Type))), Env, &QCZATRN,(NL(ECZATRN_type_simplify)).nonlocals));
NCZATRN = QCZATRN;
break;
default: 
NCZATRN = T;
break;
} 
A_PROC_EXIT(type_simplify);
*ReturnedValue = (NCZATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  UCZATRN_const_simplify(A68_161  C, A68_240 * Env, A68_161  *ReturnedValue, void *NonLocals)
#define NL(x) (((VCZATRN_const_simplify *)NonLocals)->x)
{ 
A68_161  WCZATRN;  /* united object - for case conformity */
A68_155 * XCZATRN_cn;
A68_244  YCZATRN;  /* OPERATORS - simple index */
A68_INT  ZCZATRN;  /* YIELD */
A68_161  ADZATRN_const;
A68_161  BDZATRN;  /* clause result */
A68_161  CDZATRN;  /* avoid structure result */
A68_187 * DDZATRN_cb;
A68_161  EDZATRN;  /* avoid structure result */
A_PROC_ENTRY(const_simplify);
 /* line 194: */
 /* line 195: */
WCZATRN = C ;
switch ( WCZATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
XCZATRN_cn = (WCZATRN.data.mode1);
{ 
YCZATRN = (*(&(Env->Consts))) ;
ZCZATRN = (*(&(XCZATRN_cn->Constno))) ;
ADZATRN_const = (*(&((*(&A_VINDEX(YCZATRN,ZCZATRN)))->Value)));
 /* line 196: */
 /* line 197: */
 /* line 198: */
A_CALLPROC(NL(TCZATRN_const_simplify),(ADZATRN_const, Env, &CDZATRN),(ADZATRN_const, Env, &CDZATRN,(NL(TCZATRN_const_simplify)).nonlocals));
BDZATRN = CDZATRN;
} 
break;
case 32: /* REF STRUCT(MODE161)  */
DDZATRN_cb = (WCZATRN.data.mode32);
 /* line 199: */
 /* line 200: */
A_CALLPROC(NL(TCZATRN_const_simplify),((*(&(DDZATRN_cb->Unit))), Env, &EDZATRN),((*(&(DDZATRN_cb->Unit))), Env, &EDZATRN,(NL(TCZATRN_const_simplify)).nonlocals));
BDZATRN = EDZATRN;
break;
default: 
BDZATRN = C;
break;
} 
A_PROC_EXIT(const_simplify);
*ReturnedValue = (BDZATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  JDZATRN_type_index(A68_139  Ty, A68_INT  Index, A68_240 * Env, A68_139  *ReturnedValue, void *NonLocals)
#define NL(x) (((KDZATRN_type_index *)NonLocals)->x)
{ 
A68_139  LDZATRN;  /* avoid structure result */
A68_139  MDZATRN_type;
A68_139  NDZATRN;  /* united object - for case conformity */
A68_141 * ODZATRN_tr;
A68_139  PDZATRN;  /* clause result */
A68_142 * QDZATRN_ts;
A68_142 * RDZATRN_tst;
A68_INT  SDZATRN;  /* to part of loop */
A68_INT  TDZATRN;  /* loop control */
A68_145 * UDZATRN_tg;
A68_139  XDZATRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(type_index);
 /* line 203: */
 /* line 204: */
{ 
A_CALLPROC(NL(ECZATRN_type_simplify),(Ty, Env, &LDZATRN),(Ty, Env, &LDZATRN,(NL(ECZATRN_type_simplify)).nonlocals));
MDZATRN_type = LDZATRN;
 /* line 205: */
 /* line 206: */
NDZATRN = MDZATRN_type ;
switch ( NDZATRN.mode )
{ 
case 2: /* REF STRUCT(MODE123,MODE139)  */
ODZATRN_tr = (NDZATRN.data.mode2);
 /* line 207: */
PDZATRN = (*(&(ODZATRN_tr->Elem)));
break;
case 3: /* REF STRUCT(MODE139,REF MODE142)  */
QDZATRN_ts = (NDZATRN.data.mode3);
{ 
RDZATRN_tst = QDZATRN_ts;
 /* line 208: */
SDZATRN = (Index-1);
for ( TDZATRN = 1;
TDZATRN <= SDZATRN;
TDZATRN += 1 )
{ 
RDZATRN_tst = (*(&(RDZATRN_tst->Rest)));
}
 /* line 209: */
 /* line 210: */
 /* line 211: */
PDZATRN = (*(&(RDZATRN_tst->Elem)));
} 
break;
case 6: /* REF STRUCT(MODE123,MODE139)  */
UDZATRN_tg = (NDZATRN.data.mode6);
 /* line 212: */
PDZATRN = (*(&(UDZATRN_tg->Char)));
break;
default: 
A_CALLPROC(NL(RUYATRN_sysfault),(WDZATRN),(WDZATRN,(NL(RUYATRN_sysfault)).nonlocals));
 /* line 213: */
 /* line 214: */
PDZATRN = XDZATRN;
break;
} 
} 
A_PROC_EXIT(type_index);
*ReturnedValue = (PDZATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  CEZATRN_unit_index(A68_161  Unit, A68_INT  Index, A68_240 * Env, A68_161  *ReturnedValue, void *NonLocals)
#define NL(x) (((DEZATRN_unit_index *)NonLocals)->x)
{ 
A68_161  EEZATRN;  /* united object - for case conformity */
A68_175 * FEZATRN_ur;
A68_161  GEZATRN;  /* clause result */
A68_176 * HEZATRN_us;
A68_176 * IEZATRN_ust;
A68_INT  JEZATRN;  /* to part of loop */
A68_INT  KEZATRN;  /* loop control */
A68_166 * LEZATRN_un;
A68_171  MEZATRN;  /* collateral clause result */
A68_123  NEZATRN;  /* OPERATORS - mode -> union mode */
A68_124 * OEZATRN;  /* YIELD */
A68_171 * PEZATRN;  /* YIELD */
A68_161  QEZATRN;  /* OPERATORS - mode -> union mode */
A68_155 * REZATRN_cn;
A68_171  SEZATRN;  /* collateral clause result */
A68_123  TEZATRN;  /* OPERATORS - mode -> union mode */
A68_124 * UEZATRN;  /* YIELD */
A68_171 * VEZATRN;  /* YIELD */
A68_161  WEZATRN;  /* OPERATORS - mode -> union mode */
A68_159 * XEZATRN_cy;
A68_139  YEZATRN;  /* avoid structure result */
A68_139  ZEZATRN;  /* united object - for case conformity */
A68_142 * AFZATRN_cts;
A68_142 * BFZATRN_tst;
A68_INT  CFZATRN;  /* to part of loop */
A68_INT  DFZATRN;  /* loop control */
A68_161  EFZATRN;  /* OPERATORS - mode -> union mode */
A68_159 * FFZATRN;  /* YIELD */
A68_161  IFZATRN;  /* OPERATORS - skip to mode */
A68_162 * JFZATRN_cq;
A68_156  KFZATRN;  /* collateral clause result */
A68_32  LFZATRN;  /* OPERATORS - simple index */
A68_156 * MFZATRN;  /* YIELD */
A68_161  NFZATRN;  /* OPERATORS - mode -> union mode */
A68_187 * OFZATRN_ub;
A68_161  PFZATRN;  /* avoid structure result */
A68_161  SFZATRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(unit_index);
 /* line 217: */
 /* line 218: */
EEZATRN = Unit ;
switch ( EEZATRN.mode )
{ 
case 20: /* REF STRUCT(MODE123,MODE161)  */
FEZATRN_ur = (EEZATRN.data.mode20);
 /* line 219: */
GEZATRN = (*(&(FEZATRN_ur->Elem)));
break;
case 21: /* REF STRUCT(MODE161,REF MODE176)  */
HEZATRN_us = (EEZATRN.data.mode21);
{ 
IEZATRN_ust = HEZATRN_us;
 /* line 220: */
JEZATRN = (Index-1);
for ( KEZATRN = 1;
KEZATRN <= JEZATRN;
KEZATRN += 1 )
{ 
IEZATRN_ust = (*(&(IEZATRN_ust->Rest)));
}
 /* line 221: */
 /* line 222: */
 /* line 223: */
GEZATRN = (*(&(IEZATRN_ust->Elem)));
} 
break;
case 11: /* REF STRUCT(INT,INT)  */
LEZATRN_un = (EEZATRN.data.mode11);
MEZATRN.Unit = Unit;
OEZATRN = YUYATRN_makefint(Index) ;
MEZATRN.Index = A_UNITE(NEZATRN,mode1,1,OEZATRN);
 /* line 224: */
PEZATRN = A_HEAP(A68_171 ) ;
(*PEZATRN) = MEZATRN ;
GEZATRN = A_UNITE(QEZATRN,mode16,16,PEZATRN);
break;
case 1: /* REF STRUCT(INT)  */
REZATRN_cn = (EEZATRN.data.mode1);
SEZATRN.Unit = Unit;
UEZATRN = YUYATRN_makefint(Index) ;
SEZATRN.Index = A_UNITE(TEZATRN,mode1,1,UEZATRN);
 /* line 225: */
VEZATRN = A_HEAP(A68_171 ) ;
(*VEZATRN) = SEZATRN ;
GEZATRN = A_UNITE(WEZATRN,mode16,16,VEZATRN);
break;
case 4: /* REF STRUCT(MODE139)  */
XEZATRN_cy = (EEZATRN.data.mode4);
 /* line 226: */
A_CALLPROC(NL(ECZATRN_type_simplify),((*(&(XEZATRN_cy->Querytype))), Env, &YEZATRN),((*(&(XEZATRN_cy->Querytype))), Env, &YEZATRN,(NL(ECZATRN_type_simplify)).nonlocals));
ZEZATRN = YEZATRN ;
switch ( ZEZATRN.mode )
{ 
case 3: /* REF STRUCT(MODE139,REF MODE142)  */
AFZATRN_cts = (ZEZATRN.data.mode3);
 /* line 227: */
{ 
BFZATRN_tst = AFZATRN_cts;
 /* line 228: */
CFZATRN = (Index-1);
for ( DFZATRN = 1;
DFZATRN <= CFZATRN;
DFZATRN += 1 )
{ 
BFZATRN_tst = (*(&(BFZATRN_tst->Rest)));
}
 /* line 229: */
 /* line 230: */
 /* line 231: */
FFZATRN = MGAATRN_makecquery((*(&(BFZATRN_tst->Elem)))) ;
GEZATRN = A_UNITE(EFZATRN,mode4,4,FFZATRN);
} 
break;
default: 
A_CALLPROC(NL(RUYATRN_sysfault),(HFZATRN),(HFZATRN,(NL(RUYATRN_sysfault)).nonlocals));
 /* line 232: */
 /* line 233: */
GEZATRN = IFZATRN;
break;
} 
break;
case 5: /* REF STRUCT(INT,REF MODE32)  */
JFZATRN_cq = (EEZATRN.data.mode5);
KFZATRN.Typeno = (*(&(JFZATRN_cq->Typeno)));
LFZATRN = (*(&(JFZATRN_cq->String))) ;
KFZATRN.Primno = (*(&A_VINDEX(LFZATRN,Index)));
 /* line 234: */
MFZATRN = A_HEAP(A68_156 ) ;
(*MFZATRN) = KFZATRN ;
GEZATRN = A_UNITE(NFZATRN,mode2,2,MFZATRN);
break;
case 32: /* REF STRUCT(MODE161)  */
OFZATRN_ub = (EEZATRN.data.mode32);
 /* line 235: */
A_CALLPROC(NL(BEZATRN_unit_index),((*(&(OFZATRN_ub->Unit))), Index, Env, &PFZATRN),((*(&(OFZATRN_ub->Unit))), Index, Env, &PFZATRN,(NL(BEZATRN_unit_index)).nonlocals));
GEZATRN = PFZATRN;
break;
default: 
A_CALLPROC(NL(RUYATRN_sysfault),(RFZATRN),(RFZATRN,(NL(RUYATRN_sysfault)).nonlocals));
 /* line 236: */
GEZATRN = SFZATRN;
break;
} 
A_PROC_EXIT(unit_index);
*ReturnedValue = (GEZATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  XFZATRN_const_elem(A68_161  Cs, A68_BOOL * Simple, A68_240 * Env, A68_161  *ReturnedValue, void *NonLocals)
#define NL(x) (((YFZATRN_const_elem *)NonLocals)->x)
{ 
A68_161  ZFZATRN;  /* avoid structure result */
A68_161  AGZATRN_c;
A68_161  BGZATRN;  /* united object - for case conformity */
A68_175 * CGZATRN_cr;
A68_161  DGZATRN;  /* clause result */
A68_188 * EGZATRN_cg;
A68_159 * FGZATRN_cy;
A68_139  GGZATRN;  /* avoid structure result */
A68_139  HGZATRN;  /* united object - for case conformity */
A68_141 * IGZATRN_ctr;
A68_161  JGZATRN;  /* OPERATORS - mode -> union mode */
A68_159 * KGZATRN;  /* YIELD */
A68_145 * LGZATRN_ctg;
A68_161  MGZATRN;  /* OPERATORS - mode -> union mode */
A68_159 * NGZATRN;  /* YIELD */
A_PROC_ENTRY(const_elem);
 /* line 240: */
 /* line 241: */
{ 
A_CALLPROC(NL(TCZATRN_const_simplify),(Cs, Env, &ZFZATRN),(Cs, Env, &ZFZATRN,(NL(TCZATRN_const_simplify)).nonlocals));
AGZATRN_c = ZFZATRN;
 /* line 242: */
 /* line 243: */
BGZATRN = AGZATRN_c ;
switch ( BGZATRN.mode )
{ 
case 20: /* REF STRUCT(MODE123,MODE161)  */
CGZATRN_cr = (BGZATRN.data.mode20);
{ 
(*Simple) = A68_TRUE;
 /* line 244: */
DGZATRN = (*(&(CGZATRN_cr->Elem)));
} 
break;
case 33: /* REF STRUCT(MODE123,MODE161)  */
EGZATRN_cg = (BGZATRN.data.mode33);
{ 
(*Simple) = A68_TRUE;
 /* line 245: */
DGZATRN = (*(&(EGZATRN_cg->Char)));
} 
break;
case 4: /* REF STRUCT(MODE139)  */
FGZATRN_cy = (BGZATRN.data.mode4);
 /* line 246: */
A_CALLPROC(NL(ECZATRN_type_simplify),((*(&(FGZATRN_cy->Querytype))), Env, &GGZATRN),((*(&(FGZATRN_cy->Querytype))), Env, &GGZATRN,(NL(ECZATRN_type_simplify)).nonlocals));
HGZATRN = GGZATRN ;
switch ( HGZATRN.mode )
{ 
case 2: /* REF STRUCT(MODE123,MODE139)  */
IGZATRN_ctr = (HGZATRN.data.mode2);
 /* line 247: */
{ 
(*Simple) = A68_TRUE;
 /* line 248: */
KGZATRN = MGAATRN_makecquery((*(&(IGZATRN_ctr->Elem)))) ;
DGZATRN = A_UNITE(JGZATRN,mode4,4,KGZATRN);
} 
break;
case 6: /* REF STRUCT(MODE123,MODE139)  */
LGZATRN_ctg = (HGZATRN.data.mode6);
 /* line 249: */
{ 
(*Simple) = A68_TRUE;
 /* line 250: */
NGZATRN = MGAATRN_makecquery((*(&(LGZATRN_ctg->Char)))) ;
DGZATRN = A_UNITE(MGZATRN,mode4,4,NGZATRN);
} 
break;
default: 
{ 
(*Simple) = A68_FALSE;
 /* line 251: */
 /* line 252: */
DGZATRN = AGZATRN_c;
} 
break;
} 
break;
default: 
{ 
(*Simple) = A68_FALSE;
 /* line 253: */
 /* line 254: */
DGZATRN = AGZATRN_c;
} 
break;
} 
} 
A_PROC_EXIT(const_elem);
*ReturnedValue = (DGZATRN);
return;
} 
#undef NL

A_STATIC A68_INT  UGZATRN_type_sort(A68_139  T, A68_240 * Env, void *NonLocals)
#define NL(x) (((VGZATRN_type_sort *)NonLocals)->x)
{ 
A68_139  WGZATRN;  /* united object - for case conformity */
A68_140 * XGZATRN_tn;
A68_243  YGZATRN;  /* OPERATORS - simple index */
A68_INT  ZGZATRN;  /* YIELD */
A68_152  AHZATRN;  /* united object - for case conformity */
A68_148 * BHZATRN_tv;
A68_INT  CHZATRN;  /* clause result */
A68_INT  FHZATRN;  /* OPERATORS - skip to mode */
A68_141 * GHZATRN_tr;
A68_142 * HHZATRN_tst;
A68_144 * IHZATRN_tb;
A68_145 * JHZATRN_tg;
A68_INT  MHZATRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(type_sort);
 /* line 260: */
 /* line 261: */
WGZATRN = T ;
switch ( WGZATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
XGZATRN_tn = (WGZATRN.data.mode1);
 /* line 262: */
YGZATRN = (*(&(Env->Types))) ;
ZGZATRN = (*(&(XGZATRN_tn->Typeno))) ;
AHZATRN = (*(&((*(&A_VINDEX(YGZATRN,ZGZATRN)))->Body))) ;
switch ( AHZATRN.mode )
{ 
case 3: /* REF STRUCT(MODE139)  */
BHZATRN_tv = (AHZATRN.data.mode3);
 /* line 263: */
CHZATRN = A_CALLPROC(NL(TGZATRN_type_sort),((*(&(BHZATRN_tv->Tag))), Env),((*(&(BHZATRN_tv->Tag))), Env,(NL(TGZATRN_type_sort)).nonlocals));
break;
default: 
A_CALLPROC(NL(RUYATRN_sysfault),(EHZATRN),(EHZATRN,(NL(RUYATRN_sysfault)).nonlocals));
 /* line 264: */
 /* line 265: */
CHZATRN = FHZATRN;
break;
} 
break;
case 2: /* REF STRUCT(MODE123,MODE139)  */
GHZATRN_tr = (WGZATRN.data.mode2);
 /* line 266: */
CHZATRN = OGZATRN_trow;
break;
case 3: /* REF STRUCT(MODE139,REF MODE142)  */
HHZATRN_tst = (WGZATRN.data.mode3);
 /* line 267: */
CHZATRN = QGZATRN_tstr;
break;
case 5: /* REF STRUCT(MODE139)  */
IHZATRN_tb = (WGZATRN.data.mode5);
 /* line 268: */
CHZATRN = A_CALLPROC(NL(TGZATRN_type_sort),((*(&(IHZATRN_tb->Type))), Env),((*(&(IHZATRN_tb->Type))), Env,(NL(TGZATRN_type_sort)).nonlocals));
break;
case 6: /* REF STRUCT(MODE123,MODE139)  */
JHZATRN_tg = (WGZATRN.data.mode6);
 /* line 269: */
CHZATRN = PGZATRN_tstring;
break;
default: 
A_CALLPROC(NL(RUYATRN_sysfault),(LHZATRN),(LHZATRN,(NL(RUYATRN_sysfault)).nonlocals));
 /* line 270: */
CHZATRN = MHZATRN;
break;
} 
A_PROC_EXIT(type_sort);
return( CHZATRN );
} 
#undef NL
 /* line 274: */

A_STATIC A68_VOID  UHZATRN_make_ustr(A68_161  Oldval, A68_161  Newval, A68_INT  Size, A68_INT  Lwb, A68_INT  Upb, A68_353 * Tprocs, A68_161  *ReturnedValue, void *NonLocals)
#define NL(x) (((VHZATRN_make_ustr *)NonLocals)->x)
{ 
A68_161  WHZATRN;  /* united object - for case conformity */
A68_176 * XHZATRN_u1;
A68_176 * YHZATRN;  /* clause result */
A68_176 * ZHZATRN_newv;
A68_INT  AIZATRN_oldindex;
A68_176 * BIZATRN_new;
A68_176 ** CIZATRN_newptr;
A68_429  EIZATRN_add_elem;   /* proc value of non-global proc */
A68_372  JIZATRN;  /* CALL */
A68_329  KIZATRN;  /* avoid structure result */
A68_161  LIZATRN_newelem;
A68_INT  MIZATRN;  /* to part of loop */
A68_INT  NIZATRN;  /* loop control */
A68_171  OIZATRN;  /* collateral clause result */
A68_123  PIZATRN;  /* OPERATORS - mode -> union mode */
A68_124 * QIZATRN;  /* YIELD */
A68_171 * RIZATRN;  /* YIELD */
A68_161  SIZATRN;  /* OPERATORS - mode -> union mode */
A68_INT  TIZATRN_index;
A68_INT  UIZATRN;  /* to part of loop */
A68_171  VIZATRN;  /* collateral clause result */
A68_123  WIZATRN;  /* OPERATORS - mode -> union mode */
A68_124 * XIZATRN;  /* YIELD */
A68_171 * YIZATRN;  /* YIELD */
A68_161  ZIZATRN;  /* OPERATORS - mode -> union mode */
A68_171  AJZATRN;  /* collateral clause result */
A68_123  BJZATRN;  /* OPERATORS - mode -> union mode */
A68_124 * CJZATRN;  /* YIELD */
A68_171 * DJZATRN;  /* YIELD */
A68_161  EJZATRN;  /* OPERATORS - mode -> union mode */
A68_161  FJZATRN;  /* clause result */
A68_161  GJZATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(make_ustr);
 /* line 275: */
 /* line 276: */
{ 
WHZATRN = Newval ;
switch ( WHZATRN.mode )
{ 
case 21: /* REF STRUCT(MODE161,REF MODE176)  */
XHZATRN_u1 = (WHZATRN.data.mode21);
YHZATRN = XHZATRN_u1;
break;
default: 
YHZATRN = IAAATRN_nilustr;
break;
} 
ZHZATRN_newv = YHZATRN;
 /* line 277: */
AIZATRN_oldindex = 1;
 /* line 278: */
BIZATRN_new = IAAATRN_nilustr;
 /* line 279: */
CIZATRN_newptr = (&BIZATRN_new);
 /* line 281: */
A_CLOSURE( EIZATRN_add_elem, FIZATRN_add_elem, GIZATRN_add_elem );
(( GIZATRN_add_elem * ) ( EIZATRN_add_elem.nonlocals )) -> CIZATRN_newptr = (&CIZATRN_newptr);
(( GIZATRN_add_elem * ) ( EIZATRN_add_elem.nonlocals )) -> AIZATRN_oldindex = (&AIZATRN_oldindex);
 /* line 286: */
JIZATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(JIZATRN,(Oldval, Tprocs, &KIZATRN),(Oldval, Tprocs, &KIZATRN,(JIZATRN).nonlocals));
LIZATRN_newelem = KIZATRN.U;
 /* line 287: */
 /* line 288: */
MIZATRN = (Lwb-1);
for ( NIZATRN = 1;
NIZATRN <= MIZATRN;
NIZATRN += 1 )
{ 
OIZATRN.Unit = LIZATRN_newelem;
QIZATRN = YUYATRN_makefint(AIZATRN_oldindex) ;
OIZATRN.Index = A_UNITE(PIZATRN,mode1,1,QIZATRN);
RIZATRN = A_HEAP(A68_171 ) ;
(*RIZATRN) = OIZATRN ;
A_CALLPROC(EIZATRN_add_elem,(A_UNITE(SIZATRN,mode16,16,RIZATRN)),(A_UNITE(SIZATRN,mode16,16,RIZATRN),(EIZATRN_add_elem).nonlocals));
}
 /* line 289: */
 /* line 290: */
UIZATRN = ((Upb-Lwb)+1);
for ( TIZATRN_index = 1;
TIZATRN_index <= UIZATRN;
TIZATRN_index += 1 )
{ 
 /* line 291: */
if ( (Lwb==Upb) )
{ 
 /* line 292: */
A_CALLPROC(EIZATRN_add_elem,(Newval),(Newval,(EIZATRN_add_elem).nonlocals));
} 
else
{ 
 /* line 293: */
if ( (ZHZATRN_newv!=IAAATRN_nilustr) )
{ 
A_CALLPROC(EIZATRN_add_elem,((*(&(ZHZATRN_newv->Elem)))),((*(&(ZHZATRN_newv->Elem))),(EIZATRN_add_elem).nonlocals));
 /* line 294: */
ZHZATRN_newv = (*(&(ZHZATRN_newv->Rest)));
} 
else
{ 
VIZATRN.Unit = Newval;
XIZATRN = YUYATRN_makefint(TIZATRN_index) ;
VIZATRN.Index = A_UNITE(WIZATRN,mode1,1,XIZATRN);
 /* line 295: */
 /* line 296: */
YIZATRN = A_HEAP(A68_171 ) ;
(*YIZATRN) = VIZATRN ;
A_CALLPROC(EIZATRN_add_elem,(A_UNITE(ZIZATRN,mode16,16,YIZATRN)),(A_UNITE(ZIZATRN,mode16,16,YIZATRN),(EIZATRN_add_elem).nonlocals));
} 
} 
}
 /* line 297: */
for ( ;; )
{ 
 /* line 298: */
if ( !((AIZATRN_oldindex<=Size)) ) break;
AJZATRN.Unit = LIZATRN_newelem;
CJZATRN = YUYATRN_makefint(AIZATRN_oldindex) ;
AJZATRN.Index = A_UNITE(BJZATRN,mode1,1,CJZATRN);
DJZATRN = A_HEAP(A68_171 ) ;
(*DJZATRN) = AJZATRN ;
A_CALLPROC(EIZATRN_add_elem,(A_UNITE(EJZATRN,mode16,16,DJZATRN)),(A_UNITE(EJZATRN,mode16,16,DJZATRN),(EIZATRN_add_elem).nonlocals));
}
 /* line 299: */
 /* line 300: */
FJZATRN = A_UNITE(GJZATRN,mode21,21,BIZATRN_new);
} 
A_PROC_EXIT(make_ustr);
*ReturnedValue = (FJZATRN);
return;
} 
#undef NL
 /* line 304: */

A_STATIC A68_VOID  OJZATRN_make_newunit(A68_BOOL  Trim, A68_161  Oldval, A68_161  Newval, A68_138  Index1, A68_406  Cl, A68_353 * Tprocs, A68_161  *ReturnedValue, void *NonLocals)
#define NL(x) (((PJZATRN_make_newunit *)NonLocals)->x)
{ 
A68_431  WJZATRN_sort;   /* proc value of non-global proc */
A68_139  LKZATRN;  /* avoid structure result */
A68_139  MKZATRN_t;
A68_INT  NKZATRN_typesort;
A68_123  OKZATRN;  /* avoid structure result */
A68_123  PKZATRN_size1;
A68_INT  QKZATRN_size;
A68_INT  RKZATRN_lwb;
A68_INT  SKZATRN_upb;
A68_BOOL  TKZATRN_string;
A68_161  UKZATRN;  /* clause result */
A68_188  VKZATRN;  /* collateral clause result */
A68_123  WKZATRN;  /* OPERATORS - mode -> union mode */
A68_124 * XKZATRN;  /* YIELD */
A68_188 * YKZATRN;  /* YIELD */
A68_161  ZKZATRN;  /* OPERATORS - mode -> union mode */
A68_175  ALZATRN;  /* collateral clause result */
A68_123  BLZATRN;  /* OPERATORS - mode -> union mode */
A68_124 * CLZATRN;  /* YIELD */
A68_175 * DLZATRN;  /* YIELD */
A68_161  ELZATRN;  /* OPERATORS - mode -> union mode */
A68_161  FLZATRN;  /* avoid structure result */
A68_BOOL  GLZATRN_lhsrow;
A68_INT  HLZATRN_flatsort;
A68_161  ILZATRN_val;
A68_372  JLZATRN;  /* CALL */
A68_329  KLZATRN;  /* avoid structure result */
A68_161  LLZATRN_updatedval;
A68_161  MLZATRN;  /* clause result */
A68_177  NLZATRN;  /* collateral clause result */
A68_171  OLZATRN;  /* collateral clause result */
A68_123  PLZATRN;  /* OPERATORS - mode -> union mode */
A68_124 * QLZATRN;  /* YIELD */
A68_171 * RLZATRN;  /* YIELD */
A68_161  SLZATRN;  /* OPERATORS - mode -> union mode */
A68_177 * TLZATRN;  /* YIELD */
A68_161  ULZATRN;  /* OPERATORS - mode -> union mode */
A68_172 * VLZATRN_utrim;
A68_172  WLZATRN;  /* collateral clause result */
A68_123  XLZATRN;  /* OPERATORS - mode -> union mode */
A68_124 * YLZATRN;  /* YIELD */
A68_123  ZLZATRN;  /* OPERATORS - mode -> union mode */
A68_124 * AMZATRN;  /* YIELD */
A68_177  BMZATRN;  /* collateral clause result */
A68_161  CMZATRN;  /* OPERATORS - mode -> union mode */
A68_177 * DMZATRN;  /* YIELD */
A68_161  EMZATRN;  /* OPERATORS - mode -> union mode */
A68_161  FMZATRN_lhs;
A68_177  GMZATRN;  /* collateral clause result */
A68_171  HMZATRN;  /* collateral clause result */
A68_123  IMZATRN;  /* OPERATORS - mode -> union mode */
A68_124 * JMZATRN;  /* YIELD */
A68_171 * KMZATRN;  /* YIELD */
A68_161  LMZATRN;  /* OPERATORS - mode -> union mode */
A68_177 * MMZATRN;  /* YIELD */
A68_161  NMZATRN;  /* OPERATORS - mode -> union mode */
A68_172 * OMZATRN_utrim;
A68_172  PMZATRN;  /* collateral clause result */
A68_123  QMZATRN;  /* OPERATORS - mode -> union mode */
A68_124 * RMZATRN;  /* YIELD */
A68_123  SMZATRN;  /* OPERATORS - mode -> union mode */
A68_124 * TMZATRN;  /* YIELD */
A68_177  UMZATRN;  /* collateral clause result */
A68_161  VMZATRN;  /* OPERATORS - mode -> union mode */
A68_177 * WMZATRN;  /* YIELD */
A68_161  XMZATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(make_newunit);
 /* line 305: */
 /* line 306: */
{ 
A_CLOSURE( WJZATRN_sort, XJZATRN_sort, YJZATRN_sort );
 /* line 318: */
VUNATRN_unit_type( Oldval, Cl.Fdec, Cl.Env, &LKZATRN );
MKZATRN_t = LKZATRN;
 /* line 319: */
NKZATRN_typesort = A_CALLPROC(NL(TGZATRN_type_sort),(MKZATRN_t, Cl.Env),(MKZATRN_t, Cl.Env,(NL(TGZATRN_type_sort)).nonlocals));
 /* line 320: */
ISNATRN_type_size( MKZATRN_t, Cl.Env, &OKZATRN );
PKZATRN_size1 = OKZATRN;
 /* line 322: */
QKZATRN_size = XOMATRN_int(PKZATRN_size1);
 /* line 323: */
RKZATRN_lwb = XOMATRN_int(Index1.Lwb);
 /* line 324: */
SKZATRN_upb = XOMATRN_int(Index1.Upb);
 /* line 325: */
TKZATRN_string = (NKZATRN_typesort==PGZATRN_tstring);
 /* line 327: */
 /* line 328: */
if ( (QKZATRN_size==1) )
{ 
 /* line 329: */
 /* line 330: */
if ( Trim )
{ 
 /* line 331: */
UKZATRN = Newval;
} 
else
{ 
if ( TKZATRN_string )
{ 
XKZATRN = YUYATRN_makefint(1) ;
VKZATRN.Size = A_UNITE(WKZATRN,mode1,1,XKZATRN);
 /* line 332: */
VKZATRN.Char = Newval;
YKZATRN = A_HEAP(A68_188 ) ;
(*YKZATRN) = VKZATRN ;
UKZATRN = A_UNITE(ZKZATRN,mode33,33,YKZATRN);
} 
else
{ 
CLZATRN = YUYATRN_makefint(1) ;
ALZATRN.Size = A_UNITE(BLZATRN,mode1,1,CLZATRN);
 /* line 333: */
ALZATRN.Elem = Newval;
 /* line 334: */
DLZATRN = A_HEAP(A68_175 ) ;
(*DLZATRN) = ALZATRN ;
UKZATRN = A_UNITE(ELZATRN,mode20,20,DLZATRN);
} 
} 
} 
else
{ 
 /* line 335: */
if ( (NKZATRN_typesort==QGZATRN_tstr) )
{ 
 /* line 336: */
A_CALLPROC(NL(THZATRN_make_ustr),(Oldval, Newval, QKZATRN_size, RKZATRN_lwb, SKZATRN_upb, Tprocs, &FLZATRN),(Oldval, Newval, QKZATRN_size, RKZATRN_lwb, SKZATRN_upb, Tprocs, &FLZATRN,(NL(THZATRN_make_ustr)).nonlocals));
UKZATRN = FLZATRN;
} 
else
{ 
GLZATRN_lhsrow = A68_TRUE;
 /* line 337: */
 /* line 338: */
ILZATRN_val = Newval;
 /* line 339: */
JLZATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(JLZATRN,(Oldval, Tprocs, &KLZATRN),(Oldval, Tprocs, &KLZATRN,(JLZATRN).nonlocals));
LLZATRN_updatedval = KLZATRN.U;
 /* line 340: */
 /* line 341: */
 /* line 342: */
switch ( RKZATRN_lwb )
{ 
case 1: 
{ 
GLZATRN_lhsrow = Trim;
 /* line 343: */
MLZATRN = ILZATRN_val;
} 
break;
case 2: 
{ 
HLZATRN_flatsort = A_CALLPROC(WJZATRN_sort,(TKZATRN_string, A68_TRUE, A68_FALSE, Trim, (&ILZATRN_val)),(TKZATRN_string, A68_TRUE, A68_FALSE, Trim, (&ILZATRN_val),(WJZATRN_sort).nonlocals));
 /* line 344: */
NLZATRN.String = TKZATRN_string;
 /* line 345: */
NLZATRN.Sort = HLZATRN_flatsort;
OLZATRN.Unit = LLZATRN_updatedval;
QLZATRN = YUYATRN_makefint(1) ;
OLZATRN.Index = A_UNITE(PLZATRN,mode1,1,QLZATRN);
RLZATRN = A_HEAP(A68_171 ) ;
(*RLZATRN) = OLZATRN ;
NLZATRN.Left = A_UNITE(SLZATRN,mode16,16,RLZATRN);
 /* line 346: */
NLZATRN.Right = ILZATRN_val;
 /* line 347: */
TLZATRN = A_HEAP(A68_177 ) ;
(*TLZATRN) = NLZATRN ;
MLZATRN = A_UNITE(ULZATRN,mode22,22,TLZATRN);
} 
break;
default: 
{ 
HLZATRN_flatsort = A_CALLPROC(WJZATRN_sort,(TKZATRN_string, A68_TRUE, A68_TRUE, Trim, (&ILZATRN_val)),(TKZATRN_string, A68_TRUE, A68_TRUE, Trim, (&ILZATRN_val),(WJZATRN_sort).nonlocals));
 /* line 348: */
VLZATRN_utrim = (A_HEAP(A68_172 ));
 /* line 349: */
WLZATRN.Unit = LLZATRN_updatedval;
YLZATRN = YUYATRN_makefint(1) ;
WLZATRN.Range.Lwb = A_UNITE(XLZATRN,mode1,1,YLZATRN);
AMZATRN = YUYATRN_makefint((RKZATRN_lwb-1)) ;
WLZATRN.Range.Upb = A_UNITE(ZLZATRN,mode1,1,AMZATRN);
(*VLZATRN_utrim) = WLZATRN;
 /* line 350: */
BMZATRN.String = TKZATRN_string;
BMZATRN.Sort = HLZATRN_flatsort;
BMZATRN.Left = A_UNITE(CMZATRN,mode17,17,VLZATRN_utrim);
 /* line 351: */
BMZATRN.Right = ILZATRN_val;
 /* line 352: */
DMZATRN = A_HEAP(A68_177 ) ;
(*DMZATRN) = BMZATRN ;
MLZATRN = A_UNITE(EMZATRN,mode22,22,DMZATRN);
} 
break;
} 
FMZATRN_lhs = MLZATRN;
 /* line 353: */
ILZATRN_val = FMZATRN_lhs;
 /* line 354: */
 /* line 355: */
switch ( ((QKZATRN_size-SKZATRN_upb)+1) )
{ 
case 1: 
 /* line 356: */
UKZATRN = ILZATRN_val;
break;
case 2: 
{ 
HLZATRN_flatsort = A_CALLPROC(WJZATRN_sort,(TKZATRN_string, A68_FALSE, GLZATRN_lhsrow, A68_FALSE, (&ILZATRN_val)),(TKZATRN_string, A68_FALSE, GLZATRN_lhsrow, A68_FALSE, (&ILZATRN_val),(WJZATRN_sort).nonlocals));
 /* line 357: */
GMZATRN.String = TKZATRN_string;
GMZATRN.Sort = HLZATRN_flatsort;
 /* line 358: */
GMZATRN.Left = ILZATRN_val;
HMZATRN.Unit = LLZATRN_updatedval;
JMZATRN = YUYATRN_makefint(QKZATRN_size) ;
HMZATRN.Index = A_UNITE(IMZATRN,mode1,1,JMZATRN);
 /* line 359: */
KMZATRN = A_HEAP(A68_171 ) ;
(*KMZATRN) = HMZATRN ;
GMZATRN.Right = A_UNITE(LMZATRN,mode16,16,KMZATRN);
 /* line 360: */
MMZATRN = A_HEAP(A68_177 ) ;
(*MMZATRN) = GMZATRN ;
UKZATRN = A_UNITE(NMZATRN,mode22,22,MMZATRN);
} 
break;
default: 
{ 
HLZATRN_flatsort = A_CALLPROC(WJZATRN_sort,(TKZATRN_string, A68_FALSE, GLZATRN_lhsrow, A68_TRUE, (&ILZATRN_val)),(TKZATRN_string, A68_FALSE, GLZATRN_lhsrow, A68_TRUE, (&ILZATRN_val),(WJZATRN_sort).nonlocals));
 /* line 361: */
OMZATRN_utrim = (A_HEAP(A68_172 ));
 /* line 362: */
PMZATRN.Unit = LLZATRN_updatedval;
RMZATRN = YUYATRN_makefint((SKZATRN_upb+1)) ;
PMZATRN.Range.Lwb = A_UNITE(QMZATRN,mode1,1,RMZATRN);
TMZATRN = YUYATRN_makefint(QKZATRN_size) ;
PMZATRN.Range.Upb = A_UNITE(SMZATRN,mode1,1,TMZATRN);
(*OMZATRN_utrim) = PMZATRN;
 /* line 363: */
UMZATRN.String = TKZATRN_string;
UMZATRN.Sort = HLZATRN_flatsort;
UMZATRN.Left = ILZATRN_val;
 /* line 364: */
UMZATRN.Right = A_UNITE(VMZATRN,mode17,17,OMZATRN_utrim);
 /* line 365: */
 /* line 366: */
 /* line 367: */
WMZATRN = A_HEAP(A68_177 ) ;
(*WMZATRN) = UMZATRN ;
UKZATRN = A_UNITE(XMZATRN,mode22,22,WMZATRN);
} 
break;
} 
} 
} 
} 
A_PROC_EXIT(make_newunit);
*ReturnedValue = (UKZATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  DNZATRN_assign_unit(A68_161  To, A68_161  From, A68_406  Close, A68_353 * Tprocs, A68_161  *ReturnedValue, void *NonLocals)
#define NL(x) (((ENZATRN_assign_unit *)NonLocals)->x)
{ 
A68_161  FNZATRN;  /* united object - for case conformity */
A68_161  GNZATRN;  /* clause result */
A68_171 * HNZATRN_ui;
A68_138  INZATRN;  /* collateral clause result */
A68_161  JNZATRN;  /* avoid structure result */
A68_161  KNZATRN_newval1;
A68_161  LNZATRN;  /* avoid structure result */
A68_172 * MNZATRN_ut;
A68_161  NNZATRN;  /* avoid structure result */
A68_161  ONZATRN_newval2;
A68_161  PNZATRN;  /* avoid structure result */
A68_173 * QNZATRN_ud;
A68_372  RNZATRN;  /* CALL */
A68_329  SNZATRN;  /* avoid structure result */
A68_161  TNZATRN_updatedval;
A68_372  UNZATRN;  /* CALL */
A68_329  VNZATRN;  /* avoid structure result */
A68_161  WNZATRN_updateindex;
A68_174  XNZATRN;  /* collateral clause result */
A68_174 * YNZATRN;  /* YIELD */
A68_161  ZNZATRN;  /* OPERATORS - mode -> union mode */
A68_161  AOZATRN_newval3;
A68_161  BOZATRN;  /* avoid structure result */
A68_161  EOZATRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(assign_unit);
 /* line 370: */
 /* line 371: */
FNZATRN = To ;
switch ( FNZATRN.mode )
{ 
case 34: /* REF STRUCT(INT)  */
 /* line 372: */
GNZATRN = From;
break;
case 11: /* REF STRUCT(INT,INT)  */
 /* line 373: */
GNZATRN = From;
break;
case 16: /* REF STRUCT(MODE161,MODE123)  */
HNZATRN_ui = (FNZATRN.data.mode16);
 /* line 374: */
{ 
 /* line 375: */
INZATRN.Lwb = (*(&(HNZATRN_ui->Index)));
INZATRN.Upb = (*(&(HNZATRN_ui->Index)));
A_CALLPROC(NL(NJZATRN_make_newunit),(A68_FALSE, (*(&(HNZATRN_ui->Unit))), From, INZATRN, Close, Tprocs, &JNZATRN),(A68_FALSE, (*(&(HNZATRN_ui->Unit))), From, INZATRN, Close, Tprocs, &JNZATRN,(NL(NJZATRN_make_newunit)).nonlocals));
KNZATRN_newval1 = JNZATRN;
 /* line 376: */
 /* line 377: */
 /* line 378: */
A_CALLPROC(NL(CNZATRN_assign_unit),((*(&(HNZATRN_ui->Unit))), KNZATRN_newval1, Close, Tprocs, &LNZATRN),((*(&(HNZATRN_ui->Unit))), KNZATRN_newval1, Close, Tprocs, &LNZATRN,(NL(CNZATRN_assign_unit)).nonlocals));
GNZATRN = LNZATRN;
} 
break;
case 17: /* REF STRUCT(MODE161,MODE138)  */
MNZATRN_ut = (FNZATRN.data.mode17);
 /* line 379: */
 /* line 380: */
{ 
A_CALLPROC(NL(NJZATRN_make_newunit),(A68_TRUE, (*(&(MNZATRN_ut->Unit))), From, (*(&(MNZATRN_ut->Range))), Close, Tprocs, &NNZATRN),(A68_TRUE, (*(&(MNZATRN_ut->Unit))), From, (*(&(MNZATRN_ut->Range))), Close, Tprocs, &NNZATRN,(NL(NJZATRN_make_newunit)).nonlocals));
ONZATRN_newval2 = NNZATRN;
 /* line 381: */
 /* line 382: */
 /* line 383: */
A_CALLPROC(NL(CNZATRN_assign_unit),((*(&(MNZATRN_ut->Unit))), ONZATRN_newval2, Close, Tprocs, &PNZATRN),((*(&(MNZATRN_ut->Unit))), ONZATRN_newval2, Close, Tprocs, &PNZATRN,(NL(CNZATRN_assign_unit)).nonlocals));
GNZATRN = PNZATRN;
} 
break;
case 18: /* REF STRUCT(MODE161,MODE161)  */
QNZATRN_ud = (FNZATRN.data.mode18);
 /* line 384: */
{ 
RNZATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(RNZATRN,((*(&(QNZATRN_ud->Unit))), Tprocs, &SNZATRN),((*(&(QNZATRN_ud->Unit))), Tprocs, &SNZATRN,(RNZATRN).nonlocals));
TNZATRN_updatedval = SNZATRN.U;
 /* line 385: */
UNZATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(UNZATRN,((*(&(QNZATRN_ud->Index))), Tprocs, &VNZATRN),((*(&(QNZATRN_ud->Index))), Tprocs, &VNZATRN,(UNZATRN).nonlocals));
WNZATRN_updateindex = VNZATRN.U;
 /* line 386: */
XNZATRN.Unit = TNZATRN_updatedval;
XNZATRN.Index = WNZATRN_updateindex;
XNZATRN.From = From;
YNZATRN = A_HEAP(A68_174 ) ;
(*YNZATRN) = XNZATRN ;
AOZATRN_newval3 = A_UNITE(ZNZATRN,mode19,19,YNZATRN);
 /* line 387: */
 /* line 388: */
 /* line 389: */
A_CALLPROC(NL(CNZATRN_assign_unit),((*(&(QNZATRN_ud->Unit))), AOZATRN_newval3, Close, Tprocs, &BOZATRN),((*(&(QNZATRN_ud->Unit))), AOZATRN_newval3, Close, Tprocs, &BOZATRN,(NL(CNZATRN_assign_unit)).nonlocals));
GNZATRN = BOZATRN;
} 
break;
default: 
A_CALLPROC(NL(RUYATRN_sysfault),(DOZATRN),(DOZATRN,(NL(RUYATRN_sysfault)).nonlocals));
 /* line 390: */
GNZATRN = EOZATRN;
break;
} 
A_PROC_EXIT(assign_unit);
*ReturnedValue = (GNZATRN);
return;
} 
#undef NL

A_STATIC A68_INT  HOZATRN_unit_nameno(A68_161  Unit, void *NonLocals)
#define NL(x) (((IOZATRN_unit_nameno *)NonLocals)->x)
{ 
A68_161  JOZATRN;  /* united object - for case conformity */
A68_166 * KOZATRN_un;
A68_INT  LOZATRN;  /* clause result */
A68_171 * MOZATRN_ui;
A68_172 * NOZATRN_ut;
A68_173 * OOZATRN_ud;
A_PROC_ENTRY(unit_nameno);
 /* line 393: */
 /* line 394: */
JOZATRN = Unit ;
switch ( JOZATRN.mode )
{ 
case 11: /* REF STRUCT(INT,INT)  */
KOZATRN_un = (JOZATRN.data.mode11);
 /* line 395: */
LOZATRN = (*(&(KOZATRN_un->Nameno)));
break;
case 16: /* REF STRUCT(MODE161,MODE123)  */
MOZATRN_ui = (JOZATRN.data.mode16);
 /* line 396: */
LOZATRN = A_CALLPROC(NL(GOZATRN_unit_nameno),((*(&(MOZATRN_ui->Unit)))),((*(&(MOZATRN_ui->Unit))),(NL(GOZATRN_unit_nameno)).nonlocals));
break;
case 17: /* REF STRUCT(MODE161,MODE138)  */
NOZATRN_ut = (JOZATRN.data.mode17);
 /* line 397: */
LOZATRN = A_CALLPROC(NL(GOZATRN_unit_nameno),((*(&(NOZATRN_ut->Unit)))),((*(&(NOZATRN_ut->Unit))),(NL(GOZATRN_unit_nameno)).nonlocals));
break;
case 18: /* REF STRUCT(MODE161,MODE161)  */
OOZATRN_ud = (JOZATRN.data.mode18);
 /* line 398: */
LOZATRN = A_CALLPROC(NL(GOZATRN_unit_nameno),((*(&(OOZATRN_ud->Unit)))),((*(&(OOZATRN_ud->Unit))),(NL(GOZATRN_unit_nameno)).nonlocals));
break;
case 34: /* REF STRUCT(INT)  */
 /* line 399: */
LOZATRN = 0;
break;
default: 
A_CALLPROC(NL(RUYATRN_sysfault),(QOZATRN),(QOZATRN,(NL(RUYATRN_sysfault)).nonlocals));
 /* line 400: */
LOZATRN = 0;
break;
} 
A_PROC_EXIT(unit_nameno);
return( LOZATRN );
} 
#undef NL

A_STATIC A68_BOOL  TOZATRN_simple_unit(A68_161  U, void *NonLocals)
#define NL(x) (((UOZATRN_simple_unit *)NonLocals)->x)
{ 
A68_161  VOZATRN;  /* united object - for case conformity */
A68_BOOL  WOZATRN;  /* clause result */
A68_176 * XOZATRN_us;
A68_BOOL  YOZATRN;  /* optbool result */
A68_BOOL  ZOZATRN;  /* clause result */
A68_161  APZATRN;  /* OPERATORS - mode -> union mode */
A68_176 * BPZATRN;  /* YIELD */
A_PROC_ENTRY(simple_unit);
 /* line 404: */
 /* line 405: */
VOZATRN = U ;
switch ( VOZATRN.mode )
{ 
case 16: /* REF STRUCT(MODE161,MODE123)  */
WOZATRN = A68_FALSE;
break;
case 17: /* REF STRUCT(MODE161,MODE138)  */
WOZATRN = A68_FALSE;
break;
case 18: /* REF STRUCT(MODE161,MODE161)  */
 /* line 406: */
WOZATRN = A68_FALSE;
break;
case 21: /* REF STRUCT(MODE161,REF MODE176)  */
XOZATRN_us = (VOZATRN.data.mode21);
 /* line 407: */
YOZATRN = A_CALLPROC(NL(SOZATRN_simple_unit),((*(&(XOZATRN_us->Elem)))),((*(&(XOZATRN_us->Elem))),(NL(SOZATRN_simple_unit)).nonlocals));
if ( YOZATRN )
{if ( ((*(&(XOZATRN_us->Rest)))==IAAATRN_nilustr) )
{ 
 /* line 408: */
ZOZATRN = A68_TRUE;
} 
else
{ 
 /* line 409: */
 /* line 410: */
BPZATRN = (*(&(XOZATRN_us->Rest))) ;
ZOZATRN = A_CALLPROC(NL(SOZATRN_simple_unit),(A_UNITE(APZATRN,mode21,21,BPZATRN)),(A_UNITE(APZATRN,mode21,21,BPZATRN),(NL(SOZATRN_simple_unit)).nonlocals));
} 
YOZATRN = ZOZATRN;
}
WOZATRN = YOZATRN;
break;
default: 
 /* line 411: */
WOZATRN = A68_TRUE;
break;
} 
A_PROC_EXIT(simple_unit);
return( WOZATRN );
} 
#undef NL
 /* line 415: */

A_STATIC A68_VOID  HPZATRN_fndec_seq(A68_237 * Fdec, A68_353 * Tprocs, A68_BOOL * With_pvar, A68_240 * Env, A68_350  *ReturnedValue, void *NonLocals)
#define NL(x) (((IPZATRN_fndec_seq *)NonLocals)->x)
{ 
A68_INT  JPZATRN_n_nametypes;
A68_33  OPZATRN_generator;   /* proc value of non-global proc */
A68_32  UPZATRN;  /* avoid structure result */
A68_32  TPZATRN_vars;
A68_BOOL  VPZATRN_nametypechange;
A68_INT  WPZATRN_nametypeno;
A68_237 * XPZATRN_newfdec;
A68_437  AQZATRN_update_tables;   /* proc value of non-global proc */
A68_438  KQZATRN_add_nametype;   /* proc value of non-global proc */
A68_439  URZATRN_names_nameno;   /* proc value of non-global proc */
A68_440  TSZATRN_unit_names;   /* proc value of non-global proc */
A68_442  WTZATRN_sequence_series;
A68_443  AUZATRN_seqstep_unit;   /* proc value of non-global proc */
A68_444  TUZATRN_usequence_unit;   /* proc value of non-global proc */
A68_445  WVZATRN_unit_seq;   /* proc value of non-global proc */
A68_383  PWZATRN_anonymous;   /* proc value of non-global proc */
A68_398  OXZATRN;  /* OPERATORS - mode -> union mode */
A68_383  PXZATRN;  /* YIELD */
A68_397  QXZATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_353 * RXZATRN_scan_seqcase;
A68_446  VXZATRN_seqcase_let;   /* proc value of non-global proc */
A68_448  WBABTRN_seqcond_let;   /* proc value of non-global proc */
A68_449  MCABTRN_seqrepl_let;   /* proc value of non-global proc */
A68_450  ADABTRN_seqrow_let;   /* proc value of non-global proc */
A68_451  PDABTRN_seqpvar_make;   /* proc value of non-global proc */
A68_442  BFABTRN_anonymous;   /* proc value of non-global proc */
A68_33  HKABTRN_generator;   /* proc value of non-global proc */
A68_32  NKABTRN;  /* avoid structure result */
A68_32  MKABTRN_namenos;
A68_INT  OKABTRN_no;
A68_INT  PKABTRN;  /* to part of loop */
A68_INT * QKABTRN;  /* YIELD */
A68_447  RKABTRN;  /* collateral clause result */
A68_380  UKABTRN_anonymous;   /* proc value of non-global proc */
A68_398  ZKABTRN;  /* OPERATORS - mode -> union mode */
A68_380  ALABTRN;  /* YIELD */
A68_372  DLABTRN_anonymous;   /* proc value of non-global proc */
A68_398  ILABTRN;  /* OPERATORS - mode -> union mode */
A68_372  JLABTRN;  /* YIELD */
A68_397  KLABTRN;  /* OPERATORS - istruct -> vector */
A68_353 * LLABTRN_newtprocs;
A68_380  MLABTRN;  /* CALL */
A68_337  NLABTRN;  /* avoid structure result */
A68_337  OLABTRN_ic;
A68_380  PLABTRN;  /* CALL */
A68_337  QLABTRN;  /* avoid structure result */
A68_337  RLABTRN_oc;
A68_390  SLABTRN;  /* CALL */
A68_347  TLABTRN;  /* avoid structure result */
A68_347  ULABTRN_fc;
A68_INT * VLABTRN_newno;
A68_236 * WLABTRN_nt;
A68_239  XLABTRN;  /* forall yield */
A68_INT  YLABTRN;  /* forall loop counter */
A68_BOOL  ZLABTRN;  /* optbool result */
A68_239  AMABTRN;  /* OPERATORS - simple index */
A68_VC * BMABTRN;  /* YIELD */
A68_239  CMABTRN;  /* OPERATORS - trim index */
A68_239  DMABTRN;  /* OPERATORS - trim index */
A68_239 * EMABTRN;  /* YIELD */
A68_BOOL  FMABTRN;  /* optbool result */
A68_202 ** GMABTRN;  /* YIELD */
A68_202 ** HMABTRN;  /* YIELD */
A68_233 * IMABTRN;  /* YIELD */
A68_350  JMABTRN;  /* collateral clause result */
A68_350  KMABTRN;  /* clause result */
A68_350  LMABTRN;  /* collateral clause result */
A_PROC_ENTRY(fndec_seq);
 /* line 416: */
 /* line 417: */
{ 
JPZATRN_n_nametypes = (*(&(Fdec->Nametypes))).upb;
 /* line 420: */
 /* line 421: */
A_CLOSURE( OPZATRN_generator, PPZATRN_generator, QPZATRN_generator );
(( QPZATRN_generator * ) ( OPZATRN_generator.nonlocals )) -> JPZATRN_n_nametypes = JPZATRN_n_nametypes;
A_CALLPROC(OPZATRN_generator,(A68_TRUE, &UPZATRN),(A68_TRUE, &UPZATRN,(OPZATRN_generator).nonlocals));
TPZATRN_vars = UPZATRN;
 /* line 423: */
VPZATRN_nametypechange = A68_FALSE;
 /* line 424: */
WPZATRN_nametypeno = 0;
 /* line 426: */
XPZATRN_newfdec = (A_HEAP(A68_237 ));
(*XPZATRN_newfdec) = (*Fdec);
 /* line 428: */
A_CLOSURE( AQZATRN_update_tables, BQZATRN_update_tables, CQZATRN_update_tables );
 /* line 439: */
A_CLOSURE( KQZATRN_add_nametype, LQZATRN_add_nametype, MQZATRN_add_nametype );
(( MQZATRN_add_nametype * ) ( KQZATRN_add_nametype.nonlocals )) -> WPZATRN_nametypeno = (&WPZATRN_nametypeno);
(( MQZATRN_add_nametype * ) ( KQZATRN_add_nametype.nonlocals )) -> XPZATRN_newfdec = XPZATRN_newfdec;
(( MQZATRN_add_nametype * ) ( KQZATRN_add_nametype.nonlocals )) -> VPZATRN_nametypechange = (&VPZATRN_nametypechange);
 /* line 464: */
 /* line 466: */
A_CLOSURE( URZATRN_names_nameno, VRZATRN_names_nameno, WRZATRN_names_nameno );
(( WRZATRN_names_nameno * ) ( URZATRN_names_nameno.nonlocals )) -> Fdec = Fdec;
(( WRZATRN_names_nameno * ) ( URZATRN_names_nameno.nonlocals )) -> KQZATRN_add_nametype = KQZATRN_add_nametype;
(( WRZATRN_names_nameno * ) ( URZATRN_names_nameno.nonlocals )) -> URZATRN_names_nameno = URZATRN_names_nameno;
 /* line 489: */
A_CLOSURE( TSZATRN_unit_names, USZATRN_unit_names, VSZATRN_unit_names );
(( VSZATRN_unit_names * ) ( TSZATRN_unit_names.nonlocals )) -> GOZATRN_unit_nameno = NL(GOZATRN_unit_nameno);
(( VSZATRN_unit_names * ) ( TSZATRN_unit_names.nonlocals )) -> IDZATRN_type_index = NL(IDZATRN_type_index);
(( VSZATRN_unit_names * ) ( TSZATRN_unit_names.nonlocals )) -> Env = Env;
(( VSZATRN_unit_names * ) ( TSZATRN_unit_names.nonlocals )) -> Fdec = Fdec;
(( VSZATRN_unit_names * ) ( TSZATRN_unit_names.nonlocals )) -> KQZATRN_add_nametype = KQZATRN_add_nametype;
 /* line 521: */
 /* line 522: */
 /* line 524: */
A_CLOSURE( AUZATRN_seqstep_unit, BUZATRN_seqstep_unit, CUZATRN_seqstep_unit );
(( CUZATRN_seqstep_unit * ) ( AUZATRN_seqstep_unit.nonlocals )) -> WTZATRN_sequence_series = (&WTZATRN_sequence_series);
 /* line 538: */
A_CLOSURE( TUZATRN_usequence_unit, UUZATRN_usequence_unit, VUZATRN_usequence_unit );
(( VUZATRN_usequence_unit * ) ( TUZATRN_usequence_unit.nonlocals )) -> WTZATRN_sequence_series = (&WTZATRN_sequence_series);
 /* line 558: */
A_CLOSURE( WVZATRN_unit_seq, XVZATRN_unit_seq, YVZATRN_unit_seq );
(( YVZATRN_unit_seq * ) ( WVZATRN_unit_seq.nonlocals )) -> TUZATRN_usequence_unit = TUZATRN_usequence_unit;
 /* line 575: */
 /* line 576: */
A_CLOSURE( PWZATRN_anonymous, QWZATRN_anonymous, RWZATRN_anonymous );
(( RWZATRN_anonymous * ) ( PWZATRN_anonymous.nonlocals )) -> TPZATRN_vars = TPZATRN_vars;
(( RWZATRN_anonymous * ) ( PWZATRN_anonymous.nonlocals )) -> GOZATRN_unit_nameno = NL(GOZATRN_unit_nameno);
PXZATRN = PWZATRN_anonymous ;
RXZATRN_scan_seqcase = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HVEC(QXZATRN,A_UNITE(OXZATRN,mode30,30,PXZATRN),A68_398 ));
 /* line 613: */
A_CLOSURE( VXZATRN_seqcase_let, WXZATRN_seqcase_let, XXZATRN_seqcase_let );
(( XXZATRN_seqcase_let * ) ( VXZATRN_seqcase_let.nonlocals )) -> TPZATRN_vars = TPZATRN_vars;
(( XXZATRN_seqcase_let * ) ( VXZATRN_seqcase_let.nonlocals )) -> RXZATRN_scan_seqcase = RXZATRN_scan_seqcase;
(( XXZATRN_seqcase_let * ) ( VXZATRN_seqcase_let.nonlocals )) -> Fdec = Fdec;
(( XXZATRN_seqcase_let * ) ( VXZATRN_seqcase_let.nonlocals )) -> KQZATRN_add_nametype = KQZATRN_add_nametype;
(( XXZATRN_seqcase_let * ) ( VXZATRN_seqcase_let.nonlocals )) -> URZATRN_names_nameno = URZATRN_names_nameno;
(( XXZATRN_seqcase_let * ) ( VXZATRN_seqcase_let.nonlocals )) -> WVZATRN_unit_seq = WVZATRN_unit_seq;
(( XXZATRN_seqcase_let * ) ( VXZATRN_seqcase_let.nonlocals )) -> AUZATRN_seqstep_unit = AUZATRN_seqstep_unit;
(( XXZATRN_seqcase_let * ) ( VXZATRN_seqcase_let.nonlocals )) -> RUYATRN_sysfault = NL(RUYATRN_sysfault);
(( XXZATRN_seqcase_let * ) ( VXZATRN_seqcase_let.nonlocals )) -> AQZATRN_update_tables = AQZATRN_update_tables;
(( XXZATRN_seqcase_let * ) ( VXZATRN_seqcase_let.nonlocals )) -> Env = Env;
(( XXZATRN_seqcase_let * ) ( VXZATRN_seqcase_let.nonlocals )) -> EUYATRN_nullnametype = NL(EUYATRN_nullnametype);
 /* line 698: */
A_CLOSURE( WBABTRN_seqcond_let, XBABTRN_seqcond_let, YBABTRN_seqcond_let );
(( YBABTRN_seqcond_let * ) ( WBABTRN_seqcond_let.nonlocals )) -> AUZATRN_seqstep_unit = AUZATRN_seqstep_unit;
 /* line 707: */
A_CLOSURE( MCABTRN_seqrepl_let, NCABTRN_seqrepl_let, OCABTRN_seqrepl_let );
(( OCABTRN_seqrepl_let * ) ( MCABTRN_seqrepl_let.nonlocals )) -> AUZATRN_seqstep_unit = AUZATRN_seqstep_unit;
 /* line 714: */
A_CLOSURE( ADABTRN_seqrow_let, BDABTRN_seqrow_let, CDABTRN_seqrow_let );
(( CDABTRN_seqrow_let * ) ( ADABTRN_seqrow_let.nonlocals )) -> AUZATRN_seqstep_unit = AUZATRN_seqstep_unit;
 /* line 721: */
A_CLOSURE( PDABTRN_seqpvar_make, QDABTRN_seqpvar_make, RDABTRN_seqpvar_make );
(( RDABTRN_seqpvar_make * ) ( PDABTRN_seqpvar_make.nonlocals )) -> Env = Env;
(( RDABTRN_seqpvar_make * ) ( PDABTRN_seqpvar_make.nonlocals )) -> Fdec = Fdec;
(( RDABTRN_seqpvar_make * ) ( PDABTRN_seqpvar_make.nonlocals )) -> URZATRN_names_nameno = URZATRN_names_nameno;
 /* line 741: */
A_CLOSURE( BFABTRN_anonymous, CFABTRN_anonymous, DFABTRN_anonymous );
(( DFABTRN_anonymous * ) ( BFABTRN_anonymous.nonlocals )) -> TCZATRN_const_simplify = NL(TCZATRN_const_simplify);
(( DFABTRN_anonymous * ) ( BFABTRN_anonymous.nonlocals )) -> Env = Env;
(( DFABTRN_anonymous * ) ( BFABTRN_anonymous.nonlocals )) -> WFZATRN_const_elem = NL(WFZATRN_const_elem);
(( DFABTRN_anonymous * ) ( BFABTRN_anonymous.nonlocals )) -> PDABTRN_seqpvar_make = PDABTRN_seqpvar_make;
(( DFABTRN_anonymous * ) ( BFABTRN_anonymous.nonlocals )) -> BEZATRN_unit_index = NL(BEZATRN_unit_index);
(( DFABTRN_anonymous * ) ( BFABTRN_anonymous.nonlocals )) -> SOZATRN_simple_unit = NL(SOZATRN_simple_unit);
(( DFABTRN_anonymous * ) ( BFABTRN_anonymous.nonlocals )) -> Fdec = Fdec;
(( DFABTRN_anonymous * ) ( BFABTRN_anonymous.nonlocals )) -> KQZATRN_add_nametype = KQZATRN_add_nametype;
(( DFABTRN_anonymous * ) ( BFABTRN_anonymous.nonlocals )) -> EUYATRN_nullnametype = NL(EUYATRN_nullnametype);
(( DFABTRN_anonymous * ) ( BFABTRN_anonymous.nonlocals )) -> TSZATRN_unit_names = TSZATRN_unit_names;
(( DFABTRN_anonymous * ) ( BFABTRN_anonymous.nonlocals )) -> CNZATRN_assign_unit = NL(CNZATRN_assign_unit);
(( DFABTRN_anonymous * ) ( BFABTRN_anonymous.nonlocals )) -> AQZATRN_update_tables = AQZATRN_update_tables;
(( DFABTRN_anonymous * ) ( BFABTRN_anonymous.nonlocals )) -> URZATRN_names_nameno = URZATRN_names_nameno;
(( DFABTRN_anonymous * ) ( BFABTRN_anonymous.nonlocals )) -> With_pvar = With_pvar;
(( DFABTRN_anonymous * ) ( BFABTRN_anonymous.nonlocals )) -> NUYATRN_exists_pvar = NL(NUYATRN_exists_pvar);
(( DFABTRN_anonymous * ) ( BFABTRN_anonymous.nonlocals )) -> VXZATRN_seqcase_let = VXZATRN_seqcase_let;
(( DFABTRN_anonymous * ) ( BFABTRN_anonymous.nonlocals )) -> WBABTRN_seqcond_let = WBABTRN_seqcond_let;
(( DFABTRN_anonymous * ) ( BFABTRN_anonymous.nonlocals )) -> MCABTRN_seqrepl_let = MCABTRN_seqrepl_let;
(( DFABTRN_anonymous * ) ( BFABTRN_anonymous.nonlocals )) -> ADABTRN_seqrow_let = ADABTRN_seqrow_let;
(( DFABTRN_anonymous * ) ( BFABTRN_anonymous.nonlocals )) -> WTZATRN_sequence_series = (&WTZATRN_sequence_series);
(( DFABTRN_anonymous * ) ( BFABTRN_anonymous.nonlocals )) -> RUYATRN_sysfault = NL(RUYATRN_sysfault);
WTZATRN_sequence_series = BFABTRN_anonymous;
 /* line 900: */
A_CLOSURE( HKABTRN_generator, IKABTRN_generator, JKABTRN_generator );
(( JKABTRN_generator * ) ( HKABTRN_generator.nonlocals )) -> JPZATRN_n_nametypes = JPZATRN_n_nametypes;
A_CALLPROC(HKABTRN_generator,(A68_TRUE, &NKABTRN),(A68_TRUE, &NKABTRN,(HKABTRN_generator).nonlocals));
MKABTRN_namenos = NKABTRN;
 /* line 901: */
PKABTRN = JPZATRN_n_nametypes;
for ( OKABTRN_no = 1;
OKABTRN_no <= PKABTRN;
OKABTRN_no += 1 )
{ 
QKABTRN = (&A_VINDEX(MKABTRN_namenos,OKABTRN_no)) ;
(*QKABTRN) = (-1);
}
 /* line 903: */
 /* line 904: */
A_CLOSURE( UKABTRN_anonymous, VKABTRN_anonymous, WKABTRN_anonymous );
(( WKABTRN_anonymous * ) ( UKABTRN_anonymous.nonlocals )) -> URZATRN_names_nameno = URZATRN_names_nameno;
(( WKABTRN_anonymous * ) ( UKABTRN_anonymous.nonlocals )) -> MKABTRN_namenos = MKABTRN_namenos;
 /* line 905: */
ALABTRN = UKABTRN_anonymous ;
RKABTRN.data[0] = A_UNITE(ZKABTRN,mode27,27,ALABTRN);
A_CLOSURE( DLABTRN_anonymous, ELABTRN_anonymous, FLABTRN_anonymous );
(( FLABTRN_anonymous * ) ( DLABTRN_anonymous.nonlocals )) -> WVZATRN_unit_seq = WVZATRN_unit_seq;
(( FLABTRN_anonymous * ) ( DLABTRN_anonymous.nonlocals )) -> MKABTRN_namenos = MKABTRN_namenos;
JLABTRN = DLABTRN_anonymous ;
RKABTRN.data[1] = A_UNITE(ILABTRN,mode19,19,JLABTRN);
LLABTRN_newtprocs = THJATRN_make_newtprocs(Tprocs, A_HISVEC(KLABTRN,RKABTRN,2,A68_398 ));
 /* line 909: */
MLABTRN = (*(&(LLABTRN_newtprocs->Names))) ;
A_CALLPROC(MLABTRN,((*(&(Fdec->Inputs))), LLABTRN_newtprocs, &NLABTRN),((*(&(Fdec->Inputs))), LLABTRN_newtprocs, &NLABTRN,(MLABTRN).nonlocals));
OLABTRN_ic = NLABTRN;
 /* line 910: */
PLABTRN = (*(&(LLABTRN_newtprocs->Names))) ;
A_CALLPROC(PLABTRN,((*(&(Fdec->Outputs))), LLABTRN_newtprocs, &QLABTRN),((*(&(Fdec->Outputs))), LLABTRN_newtprocs, &QLABTRN,(PLABTRN).nonlocals));
RLABTRN_oc = QLABTRN;
 /* line 912: */
SLABTRN = (*(&(Tprocs->Fnbody))) ;
A_CALLPROC(SLABTRN,((*(&(Fdec->Fnbody))), LLABTRN_newtprocs, &TLABTRN),((*(&(Fdec->Fnbody))), LLABTRN_newtprocs, &TLABTRN,(SLABTRN).nonlocals));
ULABTRN_fc = TLABTRN;
 /* line 914: */
MLJATRN_discard_tprocs(RXZATRN_scan_seqcase);
 /* line 915: */
MLJATRN_discard_tprocs(LLABTRN_newtprocs);
 /* line 918: */
 /* line 919: */
XLABTRN = (*(&(Fdec->Nametypes))) ;
YLABTRN = MKABTRN_namenos.upb -1;
if ( YLABTRN != XLABTRN.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
VLABTRN_newno = MKABTRN_namenos.data;
WLABTRN_nt = XLABTRN.data;
for (;YLABTRN-- >= 0;
(VLABTRN_newno++
,WLABTRN_nt++
) )
{
ZLABTRN = !A_VC_EQ((*(&(WLABTRN_nt->Name))),TTCAOST_nullid);
if ( ZLABTRN )
{ /* line 920: */
ZLABTRN = ((*VLABTRN_newno)!=(-1));
}
if ( ZLABTRN )
{ 
 /* line 921: */
 /* line 922: */
AMABTRN = (*(&(XPZATRN_newfdec->Nametypes))) ;
BMABTRN = (&((&A_VINDEX(AMABTRN,(*VLABTRN_newno)))->Name)) ;
(*BMABTRN) = (*(&(WLABTRN_nt->Name)));
} 
}
 /* line 924: */
CMABTRN = (*(&(XPZATRN_newfdec->Nametypes))) ;
EMABTRN = (&(XPZATRN_newfdec->Nametypes)) ;
(*EMABTRN) = A_VTRIM(DMABTRN,(CMABTRN),A_VTSCRIPT(&(DMABTRN.upb),(CMABTRN).upb,1,WPZATRN_nametypeno));
 /* line 925: */
FMABTRN = VPZATRN_nametypechange;
if ( ! FMABTRN )
{FMABTRN = ULABTRN_fc.C;
}
if ( ! FMABTRN )
{FMABTRN = OLABTRN_ic.C;
}
 /* line 926: */
if ( ! FMABTRN )
{FMABTRN = RLABTRN_oc.C;
}
if ( FMABTRN )
{ 
GMABTRN = (&(XPZATRN_newfdec->Inputs)) ;
(*GMABTRN) = OLABTRN_ic.N;
 /* line 927: */
HMABTRN = (&(XPZATRN_newfdec->Outputs)) ;
(*HMABTRN) = RLABTRN_oc.N;
 /* line 928: */
IMABTRN = (&(XPZATRN_newfdec->Fnbody)) ;
(*IMABTRN) = ULABTRN_fc.F;
 /* line 929: */
JMABTRN.F = XPZATRN_newfdec;
 /* line 930: */
JMABTRN.C = A68_TRUE;
KMABTRN = JMABTRN;
} 
else
{ 
LMABTRN.F = Fdec;
 /* line 931: */
 /* line 932: */
LMABTRN.C = A68_FALSE;
KMABTRN = LMABTRN;
} 
} 
A_PROC_EXIT(fndec_seq);
*ReturnedValue = (KMABTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  PMABTRN_outerfn_seq(A68_246  Ofn, A68_353 * Tprocs, A68_351  *ReturnedValue, void *NonLocals)
#define NL(x) (((QMABTRN_outerfn_seq *)NonLocals)->x)
{ 
A68_BOOL  RMABTRN_with_pvar;
A68_393  UMABTRN_anonymous;   /* proc value of non-global proc */
A68_398  ZMABTRN;  /* OPERATORS - mode -> union mode */
A68_393  ANABTRN;  /* YIELD */
A68_397  BNABTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_353 * CNABTRN_newtprocs;
A68_394  DNABTRN;  /* CALL */
A68_351  ENABTRN;  /* avoid structure result */
A68_351  FNABTRN_ofc;
A68_240 * GNABTRN_newenv;
A68_INT  HNABTRN_newfnno;
A68_419  JNABTRN_generator;   /* proc value of non-global proc */
A68_245  ONABTRN;  /* avoid structure result */
A68_245  PNABTRN_newfns;
A68_245  QNABTRN;  /* OPERATORS - trim index */
A68_245  RNABTRN;  /* YIELD */
A68_245  SNABTRN;  /* OPERATORS - assign op */
A68_237 ** TNABTRN;  /* YIELD */
A68_245 * UNABTRN;  /* YIELD */
A68_351  VNABTRN;  /* collateral clause result */
A68_351  WNABTRN;  /* clause result */
A_PROC_ENTRY(outerfn_seq);
 /* line 937: */
 /* line 938: */
{ 
RMABTRN_with_pvar = A68_FALSE;
 /* line 940: */
 /* line 941: */
A_CLOSURE( UMABTRN_anonymous, VMABTRN_anonymous, WMABTRN_anonymous );
(( WMABTRN_anonymous * ) ( UMABTRN_anonymous.nonlocals )) -> GPZATRN_fndec_seq = NL(GPZATRN_fndec_seq);
(( WMABTRN_anonymous * ) ( UMABTRN_anonymous.nonlocals )) -> RMABTRN_with_pvar = (&RMABTRN_with_pvar);
(( WMABTRN_anonymous * ) ( UMABTRN_anonymous.nonlocals )) -> Ofn = Ofn;
ANABTRN = UMABTRN_anonymous ;
CNABTRN_newtprocs = THJATRN_make_newtprocs(Tprocs, A_HVEC(BNABTRN,A_UNITE(ZMABTRN,mode40,40,ANABTRN),A68_398 ));
 /* line 944: */
DNABTRN = (*(&(AWLATRN_nulltprocs->Outer))) ;
A_CALLPROC(DNABTRN,(Ofn, CNABTRN_newtprocs, &ENABTRN),(Ofn, CNABTRN_newtprocs, &ENABTRN,(DNABTRN).nonlocals));
FNABTRN_ofc = ENABTRN;
 /* line 946: */
MLJATRN_discard_tprocs(CNABTRN_newtprocs);
 /* line 948: */
 /* line 949: */
 /* line 950: */
if ( RMABTRN_with_pvar )
{ 
GNABTRN_newenv = (A_HEAP(A68_240 ));
(*GNABTRN_newenv) = (*FNABTRN_ofc.O.Environ);
 /* line 951: */
HNABTRN_newfnno = ((*(&(GNABTRN_newenv->Fns))).upb+1);
 /* line 952: */
A_CLOSURE( JNABTRN_generator, KNABTRN_generator, LNABTRN_generator );
(( LNABTRN_generator * ) ( JNABTRN_generator.nonlocals )) -> HNABTRN_newfnno = HNABTRN_newfnno;
A_CALLPROC(JNABTRN_generator,(A68_FALSE, &ONABTRN),(A68_FALSE, &ONABTRN,(JNABTRN_generator).nonlocals));
PNABTRN_newfns = ONABTRN;
 /* line 953: */
RNABTRN = A_VTRIM(QNABTRN,(PNABTRN_newfns),A_VTSCRIPT(&(QNABTRN.upb),(PNABTRN_newfns).upb,1,(HNABTRN_newfnno-1))) ;
SNABTRN = (*(&(FNABTRN_ofc.O.Environ->Fns))) ;
A_VASSIGN2(SNABTRN,RNABTRN,A68_237 *);
 /* line 954: */
TNABTRN = (&A_VINDEX(PNABTRN_newfns,HNABTRN_newfnno)) ;
(*TNABTRN) = A_CALLPROC(NL(UAZATRN_delay_usage),((*NL(MUYATRN_delayclosureno))),((*NL(MUYATRN_delayclosureno)),(NL(UAZATRN_delay_usage)).nonlocals));
 /* line 955: */
UNABTRN = (&(GNABTRN_newenv->Fns)) ;
(*UNABTRN) = PNABTRN_newfns;
 /* line 956: */
VNABTRN.O.Closureno = FNABTRN_ofc.O.Closureno;
VNABTRN.O.Sort = FNABTRN_ofc.O.Sort;
VNABTRN.O.Environ = GNABTRN_newenv;
 /* line 957: */
 /* line 958: */
VNABTRN.C = A68_TRUE;
WNABTRN = VNABTRN;
} 
else
{ 
 /* line 959: */
WNABTRN = FNABTRN_ofc;
} 
} 
A_PROC_EXIT(outerfn_seq);
*ReturnedValue = (WNABTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  KOABTRN_anonymous(A68_246  O, A68_353 * Tprocs, A68_351  *ReturnedValue, void *NonLocals)
#define NL(x) (((LOABTRN_anonymous *)NonLocals)->x)
{ 
A68_351  MOABTRN;  /* clause result */
A68_351  NOABTRN;  /* avoid structure result */
A68_351  OOABTRN;  /* collateral clause result */
 /* line 970: */
 /* line 971: */
if ( (O.Sort==VKAATRN_outerfn) )
{ 
 /* line 972: */
A_CALLPROC(NL(OMABTRN_outerfn_seq),(O, Tprocs, &NOABTRN),(O, Tprocs, &NOABTRN,(NL(OMABTRN_outerfn_seq)).nonlocals));
MOABTRN = NOABTRN;
} 
else
{ 
OOABTRN.O = O;
 /* line 973: */
 /* line 974: */
OOABTRN.C = A68_FALSE;
MOABTRN = OOABTRN;
} 
*ReturnedValue = (MOABTRN);
return;
} 
#undef NL

A68_VOID  AUYATRN_transform_sequences(A68_250 * Closure, A68_97  Msg, A68_352  *ReturnedValue)
{ 
A68_236  BUYATRN;  /* collateral clause result */
A68_139  CUYATRN;  /* OPERATORS - mode -> union mode */
A68_114  DUYATRN;  /* OPERATORS - mode -> union mode */
A68_236  EUYATRN_nullnametype;
A68_250 * FUYATRN_newclosure;
A68_BOOL  GUYATRN_changed;
A68_247 ** HUYATRN_newptr;
A68_400  IUYATRN_check_closure;   /* proc value of non-global proc */
A68_INT  MUYATRN_delayclosureno;
A68_400  NUYATRN_exists_pvar;   /* proc value of non-global proc */
A68_36  RUYATRN_sysfault;   /* proc value of non-global proc */
A68_31  QVYATRN_generator;   /* proc value of non-global proc */
A68_VC  WVYATRN;  /* avoid structure result */
A68_VC  YVYATRN;  /* OPERATORS - assign op */
A68_VC  ZVYATRN_pvarname;
A68_413  NWYATRN_delay_outer;   /* proc value of non-global proc */
A68_420  UAZATRN_delay_usage;   /* proc value of non-global proc */
A68_308  ECZATRN_type_simplify;   /* proc value of non-global proc */
A68_421  TCZATRN_const_simplify;   /* proc value of non-global proc */
A68_422  IDZATRN_type_index;   /* proc value of non-global proc */
A68_424  BEZATRN_unit_index;   /* proc value of non-global proc */
A68_425  WFZATRN_const_elem;   /* proc value of non-global proc */
A68_426  TGZATRN_type_sort;   /* proc value of non-global proc */
A68_428  THZATRN_make_ustr;   /* proc value of non-global proc */
A68_430  NJZATRN_make_newunit;   /* proc value of non-global proc */
A68_432  CNZATRN_assign_unit;   /* proc value of non-global proc */
A68_434  GOZATRN_unit_nameno;   /* proc value of non-global proc */
A68_435  SOZATRN_simple_unit;   /* proc value of non-global proc */
A68_436  GPZATRN_fndec_seq;   /* proc value of non-global proc */
A68_394  OMABTRN_outerfn_seq;   /* proc value of non-global proc */
A68_457  XNABTRN;  /* collateral clause result */
A68_398  YNABTRN;  /* OPERATORS - mode -> union mode */
A68_354  ZNABTRN;  /* procedure value */
A68_398  AOABTRN;  /* OPERATORS - mode -> union mode */
A68_357  BOABTRN;  /* procedure value */
A68_398  COABTRN;  /* OPERATORS - mode -> union mode */
A68_363  DOABTRN;  /* procedure value */
A68_398  EOABTRN;  /* OPERATORS - mode -> union mode */
A68_390  FOABTRN;  /* YIELD */
A68_390  GOABTRN;  /* procedure value */
A68_394  JOABTRN_anonymous;   /* proc value of non-global proc */
A68_398  POABTRN;  /* OPERATORS - mode -> union mode */
A68_394  QOABTRN;  /* YIELD */
A68_397  ROABTRN;  /* OPERATORS - istruct -> vector */
A68_353 * SOABTRN_newtprocs;
A68_394  TOABTRN;  /* CALL */
A68_351  UOABTRN;  /* avoid structure result */
A68_351  VOABTRN_oc;
A68_246 * WOABTRN;  /* YIELD */
A68_247 ** XOABTRN_ptr;
A68_246  YOABTRN;  /* avoid structure result */
A68_352  ZOABTRN;  /* collateral clause result */
A68_352  APABTRN;  /* clause result */
A68_352  BPABTRN;  /* collateral clause result */
A_PROC_ENTRY(transform_sequences);
 /* line 80: */
 /* line 82: */
{ 
BUYATRN.Name = TTCAOST_nullid;
BUYATRN.Type = A_UNITE(CUYATRN,mode9,9,(&DIAATRN_tnull));
BUYATRN.Attr = A_UNITE(DUYATRN,mode5,5,(&ZHAATRN_attrnull));
EUYATRN_nullnametype = BUYATRN;
 /* line 84: */
FUYATRN_newclosure = Closure;
 /* line 85: */
GUYATRN_changed = A68_FALSE;
 /* line 86: */
HUYATRN_newptr = (&(FUYATRN_newclosure->Outers));
 /* line 88: */
 /* line 89: */
 /* line 90: */
A_CLOSURE( IUYATRN_check_closure, JUYATRN_check_closure, KUYATRN_check_closure );
(( KUYATRN_check_closure * ) ( IUYATRN_check_closure.nonlocals )) -> GUYATRN_changed = (&GUYATRN_changed);
(( KUYATRN_check_closure * ) ( IUYATRN_check_closure.nonlocals )) -> FUYATRN_newclosure = (&FUYATRN_newclosure);
(( KUYATRN_check_closure * ) ( IUYATRN_check_closure.nonlocals )) -> Msg = Msg;
(( KUYATRN_check_closure * ) ( IUYATRN_check_closure.nonlocals )) -> HUYATRN_newptr = (&HUYATRN_newptr);
 /* line 99: */
MUYATRN_delayclosureno = (-1);
 /* line 101: */
 /* line 102: */
A_CLOSURE( NUYATRN_exists_pvar, OUYATRN_exists_pvar, PUYATRN_exists_pvar );
(( PUYATRN_exists_pvar * ) ( NUYATRN_exists_pvar.nonlocals )) -> MUYATRN_delayclosureno = (&MUYATRN_delayclosureno);
(( PUYATRN_exists_pvar * ) ( NUYATRN_exists_pvar.nonlocals )) -> IUYATRN_check_closure = IUYATRN_check_closure;
(( PUYATRN_exists_pvar * ) ( NUYATRN_exists_pvar.nonlocals )) -> FUYATRN_newclosure = (&FUYATRN_newclosure);
 /* line 108: */
A_CLOSURE( RUYATRN_sysfault, SUYATRN_sysfault, TUYATRN_sysfault );
(( TUYATRN_sysfault * ) ( RUYATRN_sysfault.nonlocals )) -> Msg = Msg;
 /* line 110: */
 /* line 112: */
 /* line 113: */
 /* line 115: */
 /* line 116: */
 /* line 119: */
 /* line 121: */
 /* line 122: */
A_CLOSURE( QVYATRN_generator, RVYATRN_generator, SVYATRN_generator );
A_CALLPROC(QVYATRN_generator,(A68_FALSE, &WVYATRN),(A68_FALSE, &WVYATRN,(QVYATRN_generator).nonlocals));
YVYATRN = XVYATRN ;
A_VASSIGN2(YVYATRN,WVYATRN,A68_CHAR ) ;
ZVYATRN_pvarname = WVYATRN;
 /* line 126: */
 /* line 135: */
A_CLOSURE( NWYATRN_delay_outer, OWYATRN_delay_outer, PWYATRN_delay_outer );
(( PWYATRN_delay_outer * ) ( NWYATRN_delay_outer.nonlocals )) -> ZVYATRN_pvarname = ZVYATRN_pvarname;
 /* line 168: */
A_CLOSURE( UAZATRN_delay_usage, VAZATRN_delay_usage, WAZATRN_delay_usage );
(( WAZATRN_delay_usage * ) ( UAZATRN_delay_usage.nonlocals )) -> ZVYATRN_pvarname = ZVYATRN_pvarname;
 /* line 182: */
A_CLOSURE( ECZATRN_type_simplify, FCZATRN_type_simplify, GCZATRN_type_simplify );
(( GCZATRN_type_simplify * ) ( ECZATRN_type_simplify.nonlocals )) -> ECZATRN_type_simplify = ECZATRN_type_simplify;
 /* line 193: */
A_CLOSURE( TCZATRN_const_simplify, UCZATRN_const_simplify, VCZATRN_const_simplify );
(( VCZATRN_const_simplify * ) ( TCZATRN_const_simplify.nonlocals )) -> TCZATRN_const_simplify = TCZATRN_const_simplify;
 /* line 202: */
A_CLOSURE( IDZATRN_type_index, JDZATRN_type_index, KDZATRN_type_index );
(( KDZATRN_type_index * ) ( IDZATRN_type_index.nonlocals )) -> ECZATRN_type_simplify = ECZATRN_type_simplify;
(( KDZATRN_type_index * ) ( IDZATRN_type_index.nonlocals )) -> RUYATRN_sysfault = RUYATRN_sysfault;
 /* line 216: */
A_CLOSURE( BEZATRN_unit_index, CEZATRN_unit_index, DEZATRN_unit_index );
(( DEZATRN_unit_index * ) ( BEZATRN_unit_index.nonlocals )) -> ECZATRN_type_simplify = ECZATRN_type_simplify;
(( DEZATRN_unit_index * ) ( BEZATRN_unit_index.nonlocals )) -> RUYATRN_sysfault = RUYATRN_sysfault;
(( DEZATRN_unit_index * ) ( BEZATRN_unit_index.nonlocals )) -> BEZATRN_unit_index = BEZATRN_unit_index;
 /* line 239: */
A_CLOSURE( WFZATRN_const_elem, XFZATRN_const_elem, YFZATRN_const_elem );
(( YFZATRN_const_elem * ) ( WFZATRN_const_elem.nonlocals )) -> TCZATRN_const_simplify = TCZATRN_const_simplify;
(( YFZATRN_const_elem * ) ( WFZATRN_const_elem.nonlocals )) -> ECZATRN_type_simplify = ECZATRN_type_simplify;
 /* line 257: */
 /* line 259: */
A_CLOSURE( TGZATRN_type_sort, UGZATRN_type_sort, VGZATRN_type_sort );
(( VGZATRN_type_sort * ) ( TGZATRN_type_sort.nonlocals )) -> TGZATRN_type_sort = TGZATRN_type_sort;
(( VGZATRN_type_sort * ) ( TGZATRN_type_sort.nonlocals )) -> RUYATRN_sysfault = RUYATRN_sysfault;
 /* line 273: */
A_CLOSURE( THZATRN_make_ustr, UHZATRN_make_ustr, VHZATRN_make_ustr );
 /* line 303: */
A_CLOSURE( NJZATRN_make_newunit, OJZATRN_make_newunit, PJZATRN_make_newunit );
(( PJZATRN_make_newunit * ) ( NJZATRN_make_newunit.nonlocals )) -> TGZATRN_type_sort = TGZATRN_type_sort;
(( PJZATRN_make_newunit * ) ( NJZATRN_make_newunit.nonlocals )) -> THZATRN_make_ustr = THZATRN_make_ustr;
 /* line 369: */
A_CLOSURE( CNZATRN_assign_unit, DNZATRN_assign_unit, ENZATRN_assign_unit );
(( ENZATRN_assign_unit * ) ( CNZATRN_assign_unit.nonlocals )) -> NJZATRN_make_newunit = NJZATRN_make_newunit;
(( ENZATRN_assign_unit * ) ( CNZATRN_assign_unit.nonlocals )) -> CNZATRN_assign_unit = CNZATRN_assign_unit;
(( ENZATRN_assign_unit * ) ( CNZATRN_assign_unit.nonlocals )) -> RUYATRN_sysfault = RUYATRN_sysfault;
 /* line 392: */
A_CLOSURE( GOZATRN_unit_nameno, HOZATRN_unit_nameno, IOZATRN_unit_nameno );
(( IOZATRN_unit_nameno * ) ( GOZATRN_unit_nameno.nonlocals )) -> GOZATRN_unit_nameno = GOZATRN_unit_nameno;
(( IOZATRN_unit_nameno * ) ( GOZATRN_unit_nameno.nonlocals )) -> RUYATRN_sysfault = RUYATRN_sysfault;
 /* line 403: */
A_CLOSURE( SOZATRN_simple_unit, TOZATRN_simple_unit, UOZATRN_simple_unit );
(( UOZATRN_simple_unit * ) ( SOZATRN_simple_unit.nonlocals )) -> SOZATRN_simple_unit = SOZATRN_simple_unit;
 /* line 414: */
A_CLOSURE( GPZATRN_fndec_seq, HPZATRN_fndec_seq, IPZATRN_fndec_seq );
(( IPZATRN_fndec_seq * ) ( GPZATRN_fndec_seq.nonlocals )) -> GOZATRN_unit_nameno = GOZATRN_unit_nameno;
(( IPZATRN_fndec_seq * ) ( GPZATRN_fndec_seq.nonlocals )) -> IDZATRN_type_index = IDZATRN_type_index;
(( IPZATRN_fndec_seq * ) ( GPZATRN_fndec_seq.nonlocals )) -> RUYATRN_sysfault = RUYATRN_sysfault;
(( IPZATRN_fndec_seq * ) ( GPZATRN_fndec_seq.nonlocals )) -> EUYATRN_nullnametype = EUYATRN_nullnametype;
(( IPZATRN_fndec_seq * ) ( GPZATRN_fndec_seq.nonlocals )) -> TCZATRN_const_simplify = TCZATRN_const_simplify;
(( IPZATRN_fndec_seq * ) ( GPZATRN_fndec_seq.nonlocals )) -> WFZATRN_const_elem = WFZATRN_const_elem;
(( IPZATRN_fndec_seq * ) ( GPZATRN_fndec_seq.nonlocals )) -> BEZATRN_unit_index = BEZATRN_unit_index;
(( IPZATRN_fndec_seq * ) ( GPZATRN_fndec_seq.nonlocals )) -> SOZATRN_simple_unit = SOZATRN_simple_unit;
(( IPZATRN_fndec_seq * ) ( GPZATRN_fndec_seq.nonlocals )) -> CNZATRN_assign_unit = CNZATRN_assign_unit;
(( IPZATRN_fndec_seq * ) ( GPZATRN_fndec_seq.nonlocals )) -> NUYATRN_exists_pvar = NUYATRN_exists_pvar;
 /* line 936: */
A_CLOSURE( OMABTRN_outerfn_seq, PMABTRN_outerfn_seq, QMABTRN_outerfn_seq );
(( QMABTRN_outerfn_seq * ) ( OMABTRN_outerfn_seq.nonlocals )) -> GPZATRN_fndec_seq = GPZATRN_fndec_seq;
(( QMABTRN_outerfn_seq * ) ( OMABTRN_outerfn_seq.nonlocals )) -> UAZATRN_delay_usage = UAZATRN_delay_usage;
(( QMABTRN_outerfn_seq * ) ( OMABTRN_outerfn_seq.nonlocals )) -> MUYATRN_delayclosureno = (&MUYATRN_delayclosureno);
 /* line 965: */
 /* line 966: */
 /* line 967: */
ZNABTRN.fn.fn_global = DWLATRN_null_attr;
ZNABTRN.nonlocals = A68_NIL;
XNABTRN.data[0] = A_UNITE(YNABTRN,mode1,1,ZNABTRN);
BOABTRN.fn.fn_global = IWLATRN_null_formula;
BOABTRN.nonlocals = A68_NIL;
XNABTRN.data[1] = A_UNITE(AOABTRN,mode4,4,BOABTRN);
 /* line 968: */
DOABTRN.fn.fn_global = NWLATRN_null_type;
DOABTRN.nonlocals = A68_NIL;
XNABTRN.data[2] = A_UNITE(COABTRN,mode10,10,DOABTRN);
 /* line 969: */
GOABTRN.fn.fn_global = CWYATRN_fnbody_seq;
GOABTRN.nonlocals = A68_NIL;
FOABTRN = GOABTRN ;
XNABTRN.data[3] = A_UNITE(EOABTRN,mode37,37,FOABTRN);
A_CLOSURE( JOABTRN_anonymous, KOABTRN_anonymous, LOABTRN_anonymous );
(( LOABTRN_anonymous * ) ( JOABTRN_anonymous.nonlocals )) -> OMABTRN_outerfn_seq = OMABTRN_outerfn_seq;
QOABTRN = JOABTRN_anonymous ;
XNABTRN.data[4] = A_UNITE(POABTRN,mode41,41,QOABTRN);
SOABTRN_newtprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HISVEC(ROABTRN,XNABTRN,5,A68_398 ));
 /* line 976: */
for ( ;; )
{ 
 /* line 977: */
if ( !(((*HUYATRN_newptr)!=HBAATRN_nilouters)) ) break;
TOABTRN = (*(&(SOABTRN_newtprocs->Outer))) ;
A_CALLPROC(TOABTRN,((*(&((*HUYATRN_newptr)->Outer))), SOABTRN_newtprocs, &UOABTRN),((*(&((*HUYATRN_newptr)->Outer))), SOABTRN_newtprocs, &UOABTRN,(TOABTRN).nonlocals));
VOABTRN_oc = UOABTRN;
 /* line 978: */
 /* line 979: */
if ( VOABTRN_oc.C )
{ 
A_CALLPROC(IUYATRN_check_closure,(),((IUYATRN_check_closure).nonlocals));
 /* line 980: */
 /* line 981: */
WOABTRN = (&((*HUYATRN_newptr)->Outer)) ;
(*WOABTRN) = VOABTRN_oc.O;
} 
 /* line 982: */
 /* line 983: */
HUYATRN_newptr = (&((*HUYATRN_newptr)->Rest));
}
 /* line 985: */
MLJATRN_discard_tprocs(SOABTRN_newtprocs);
 /* line 987: */
 /* line 988: */
if ( (MUYATRN_delayclosureno!=(-1)) )
{ 
XOABTRN_ptr = (&(FUYATRN_newclosure->Outers));
 /* line 989: */
A_CALLPROC(NWYATRN_delay_outer,(MUYATRN_delayclosureno, &YOABTRN),(MUYATRN_delayclosureno, &YOABTRN,(NWYATRN_delay_outer).nonlocals));
KNCATRN_insert_outer(YOABTRN, XOABTRN_ptr, FUYATRN_newclosure, Msg);
 /* line 990: */
ZOABTRN.Cl = FUYATRN_newclosure;
 /* line 991: */
ZOABTRN.C = A68_TRUE;
APABTRN = ZOABTRN;
} 
else
{ 
BPABTRN.Cl = FUYATRN_newclosure;
 /* line 992: */
 /* line 993: */
BPABTRN.C = GUYATRN_changed;
APABTRN = BPABTRN;
} 
} 
A_PROC_EXIT(transform_sequences);
*ReturnedValue = (APABTRN);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void TTYATRN(void)   /* initialise DECS sequence */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/sequence.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/transformprocs.m","./mfiles/modeprocs.m","./mfiles/closureprocs.m","./mfiles/assmodes.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
IHJATRN();   /* USE transformprocs */
HNMATRN();   /* USE modeprocs */
SKCATRN();   /* USE closureprocs */
BAAATRN();   /* USE assmodes */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/transform/assoc/./a68files/sequence.a68";
A_config.translation_time = "Tue Apr  4 10:04:09 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "STYATRN (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:04:09 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS sequence);
UEAALIB_a68config(LGAALIB_configinfo, XTYATRN);
 /* line 79: */
 /* line 995: */
 /* line 996: */
 /* line 997: */
/*SKIP*/;
A_PROC_EXIT(DECS sequence);
} 
#undef NL
/* end of translation of ./a68files/sequence.a68 */
