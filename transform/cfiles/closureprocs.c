
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
/* UNAME:RKCATRN */
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

A_PROCEDURE(A68_VOID ,A68t273,(void),(void *));
typedef struct A68t273  A68_273 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t274,(struct A68t273 ),(struct A68t273 ,void *));
typedef struct A68t274  A68_274 ;    /* PROC(MODE273) VOID */

A_PROCEDURE(A68_VOID ,A68t275,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t275  A68_275 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t276,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t276  A68_276 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,59,A68t277);
typedef struct A68t277  A68_277 ;    /* STRUCT 59 CHAR */

A_PROCEDURE(A68_INT ,A68t278,(struct A68t250 *),(struct A68t250 *,void *));
typedef struct A68t278  A68_278 ;    /* PROC(REF MODE250) INT */

A_PROCEDURE(struct A68t247 *,A68t279,(A68_INT ,struct A68t250 *,struct A68t97 ),(A68_INT ,struct A68t250 *,struct A68t97 ,void *));
typedef struct A68t279  A68_279 ;    /* PROC(INT,REF MODE250,MODE97) REF MODE247 */
A_ISTRUCT(A68_CHAR ,24,A68t280);
typedef struct A68t280  A68_280 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t281);
typedef struct A68t281  A68_281 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t282);
typedef struct A68t282  A68_282 ;    /* STRUCT 4 MODE52 */

A_PROCEDURE(struct A68t247 *,A68t283,(struct A68t250 *),(struct A68t250 *,void *));
typedef struct A68t283  A68_283 ;    /* PROC(REF MODE250) REF MODE247 */

A_PROCEDURE(A68_VOID ,A68t284,(A68_BOOL ,struct A68t249 *),(A68_BOOL ,struct A68t249 *,void *));
typedef struct A68t284  A68_284 ;    /* PROC(BOOL) MODE249 */

A_PROCEDURE(struct A68t247 **,A68t285,(struct A68t246 ,struct A68t247 **,struct A68t250 *,struct A68t97 ),(struct A68t246 ,struct A68t247 **,struct A68t250 *,struct A68t97 ,void *));
typedef struct A68t285  A68_285 ;    /* PROC(MODE246,REF REF MODE247,REF MODE250,MODE97) REF REF MODE247 */

A_PROCEDURE(A68_VOID ,A68t286,(struct A68t247 **,struct A68t250 *,struct A68t97 ),(struct A68t247 **,struct A68t250 *,struct A68t97 ,void *));
typedef struct A68t286  A68_286 ;    /* PROC(REF REF MODE247,REF MODE250,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,29,A68t287);
typedef struct A68t287  A68_287 ;    /* STRUCT 29 CHAR */

A_PROCEDURE(struct A68t250 *,A68t288,(void),(void *));
typedef struct A68t288  A68_288 ;    /* PROC REF MODE250 */

A_PROCEDURE(A68_INT ,A68t289,(struct A68t250 *,struct A68t97 ),(struct A68t250 *,struct A68t97 ,void *));
typedef struct A68t289  A68_289 ;    /* PROC(REF MODE250,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t290,(A68_BOOL ,struct A68t54 *),(A68_BOOL ,struct A68t54 *,void *));
typedef struct A68t290  A68_290 ;    /* PROC(BOOL) MODE54 */

A_PROCEDURE(struct A68t250 *,A68t291,(struct A68t250 *,struct A68t97 ),(struct A68t250 *,struct A68t97 ,void *));
typedef struct A68t291  A68_291 ;    /* PROC(REF MODE250,MODE97) REF MODE250 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from assmodes --- */
extern A68_247 * HBAATRN_nilouters;
extern A68_248 * IBAATRN_nilouterslist;
extern A68_246  SDAATRN_nullouter;
/* --- End of imports from assmodes --- */


/* --- Imports from messageproc --- */
extern A68_92  SHAAOSI_system;
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VOID  UJBAOSL_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void BAAATRN(void);   /* assmodes */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_277   VKCATRN = {"$Id: closureprocs.a68,v 34.2 1995/03/29 13:02:53 ella Exp $"}; 
A_GISVEC(A68_VC ,WKCATRN,VKCATRN,59)
#define XKCATRN_n_outers 512
static A68_280   HLCATRN = {"find_outers:  closureno "}; 
A_GISVEC(A68_VC ,ILCATRN,HLCATRN,24)
static A68_281   MLCATRN = {" out of range "}; 
A_GISVEC(A68_VC ,NLCATRN,MLCATRN,14)
static A68_287   SNCATRN = {"remove_outer:  no OUTERS left"}; 
A_GISVEC(A68_VC ,TNCATRN,SNCATRN,29)
typedef struct   /* env of non-global proc */
{
int dummy;
} OMCATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_250 * Closure;
} KOCATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_248 ** FPCATRN_optr;
} LPCATRN_generator;

A68_INT  ZKCATRN_maxclosureno(A68_250 * Closure);

A68_247 * ELCATRN_find_outers(A68_INT  Closureno, A68_250 * Closure, A68_97  Msg);

A68_247 * GMCATRN_new_outers(A68_250 * Closure);

A_STATIC A68_VOID  NMCATRN_generator(A68_BOOL  LMCATRN_anonymous, A68_249  *ReturnedValue, void *NonLocals);

A68_INT  ENCATRN_reserve_next_closureno(A68_250 * Closure);

A68_247 ** KNCATRN_insert_outer(A68_246  New, A68_247 ** Ptr, A68_250 * Closure, A68_97  Msg);

A68_VOID  RNCATRN_free_outers(A68_247 ** Ptr, A68_250 * Closure, A68_97  Msg);

A68_250 * AOCATRN_make_closure(void);

A68_INT  GOCATRN_garbage_collect_closure(A68_250 * Closure, A68_97  Msg);

A_STATIC A68_VOID  JOCATRN_generator(A68_BOOL  HOCATRN_anonymous, A68_54  *ReturnedValue, void *NonLocals);

A68_250 * DPCATRN_copy_closure(A68_250 * Old, A68_97  Msg);

A_STATIC A68_VOID  KPCATRN_generator(A68_BOOL  IPCATRN_anonymous, A68_249  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NMCATRN_generator(A68_BOOL  LMCATRN_anonymous, A68_249  *ReturnedValue, void *NonLocals)
#define NL(x) (((OMCATRN_generator *)NonLocals)->x)
{ 
A68_249  PMCATRN;  /* clause result */
A68_249  QMCATRN;  /* OPERATORS - dynamic generator */
{ 
QMCATRN.upb = XKCATRN_n_outers ;
( LMCATRN_anonymous? A_VLOC(A68_247 ,QMCATRN): A_VHEAP(A68_247 ,QMCATRN) );
PMCATRN = QMCATRN;
} 
*ReturnedValue = (PMCATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  JOCATRN_generator(A68_BOOL  HOCATRN_anonymous, A68_54  *ReturnedValue, void *NonLocals)
#define NL(x) (((KOCATRN_generator *)NonLocals)->x)
{ 
A68_54  LOCATRN;  /* clause result */
A68_54  MOCATRN;  /* OPERATORS - dynamic generator */
{ 
MOCATRN.upb = (*(&(NL(Closure)->Max_closureno))) ;
( HOCATRN_anonymous? A_VLOC(A68_BOOL ,MOCATRN): A_VHEAP(A68_BOOL ,MOCATRN) );
LOCATRN = MOCATRN;
} 
*ReturnedValue = (LOCATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  KPCATRN_generator(A68_BOOL  IPCATRN_anonymous, A68_249  *ReturnedValue, void *NonLocals)
#define NL(x) (((LPCATRN_generator *)NonLocals)->x)
{ 
A68_249  MPCATRN;  /* clause result */
A68_249  NPCATRN;  /* OPERATORS - dynamic generator */
{ 
NPCATRN.upb = (*(&((*NL(FPCATRN_optr))->Outers))).upb ;
( IPCATRN_anonymous? A_VLOC(A68_247 ,NPCATRN): A_VHEAP(A68_247 ,NPCATRN) );
MPCATRN = NPCATRN;
} 
*ReturnedValue = (MPCATRN);
return;
} 
#undef NL

A68_INT  ZKCATRN_maxclosureno(A68_250 * Closure)
{ 
A68_INT  ALCATRN;  /* clause result */
A_PROC_ENTRY(maxclosureno);
ALCATRN = (*(&(Closure->Max_closureno)));
A_PROC_EXIT(maxclosureno);
return( ALCATRN );
} 
#undef NL
 /* line 68: */

A68_247 * ELCATRN_find_outers(A68_INT  Closureno, A68_250 * Closure, A68_97  Msg)
{ 
A68_BOOL  FLCATRN;  /* optbool result */
A68_282  GLCATRN;  /* collateral clause result */
A68_52  JLCATRN;  /* OPERATORS - mode -> union mode */
A68_VC  KLCATRN;  /* YIELD */
A68_52  LLCATRN;  /* OPERATORS - mode -> union mode */
A68_52  OLCATRN;  /* OPERATORS - mode -> union mode */
A68_VC  PLCATRN;  /* YIELD */
A68_52  QLCATRN;  /* OPERATORS - mode -> union mode */
A68_INT  RLCATRN;  /* YIELD */
A68_85  SLCATRN;  /* OPERATORS - istruct -> vector */
A68_VC  TLCATRN;  /* avoid structure result */
A68_46  ULCATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_247 * VLCATRN;  /* clause result */
A68_247 * WLCATRN;  /* OPERATORS - skip to mode */
A68_INT  XLCATRN;  /* ADICOPS - MOD */
A68_INT  YLCATRN;  /* ADICOPS - MOD */
A68_INT  ZLCATRN_index;
A68_INT  AMCATRN_pos;
A68_248 * BMCATRN_optr;
A68_INT  CMCATRN;  /* to part of loop */
A68_INT  DMCATRN;  /* loop control */
A68_249  EMCATRN;  /* OPERATORS - simple index */
A_PROC_ENTRY(find_outers);
 /* line 69: */
FLCATRN = (Closureno<=0);
if ( ! FLCATRN )
{ /* line 70: */
FLCATRN = (Closureno>(*(&(Closure->Max_closureno))));
}
if ( FLCATRN )
{ 
KLCATRN = ILCATRN ;
GLCATRN.data[0] = A_UNITE(JLCATRN,mode7,7,KLCATRN);
 /* line 71: */
GLCATRN.data[1] = A_UNITE(LLCATRN,mode1,1,Closureno);
PLCATRN = NLCATRN ;
GLCATRN.data[2] = A_UNITE(OLCATRN,mode7,7,PLCATRN);
RLCATRN = (*(&(Closure->Max_closureno))) ;
GLCATRN.data[3] = A_UNITE(QLCATRN,mode1,1,RLCATRN);
UJBAOSL_oneline( A_HISVEC(SLCATRN,GLCATRN,4,A68_52 ), &TLCATRN );
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(ULCATRN,TLCATRN,A68_VC )),(SHAAOSI_system, A_HVEC(ULCATRN,TLCATRN,A68_VC ),(Msg).nonlocals));
 /* line 72: */
 /* line 73: */
VLCATRN = WLCATRN;
} 
else
{ 
YLCATRN = (Closureno-1) ;
ZLCATRN_index = (A_MOD(YLCATRN,XKCATRN_n_outers,XLCATRN)+1);
 /* line 74: */
AMCATRN_pos = ((Closureno-1)/XKCATRN_n_outers);
 /* line 75: */
BMCATRN_optr = (*(&(Closure->Outerslist)));
 /* line 76: */
CMCATRN = AMCATRN_pos;
for ( DMCATRN = 1;
DMCATRN <= CMCATRN;
DMCATRN += 1 )
{ 
BMCATRN_optr = (*(&(BMCATRN_optr->Rest)));
}
 /* line 77: */
 /* line 78: */
EMCATRN = (*(&(BMCATRN_optr->Outers))) ;
VLCATRN = (&A_VINDEX(EMCATRN,ZLCATRN_index));
} 
A_PROC_EXIT(find_outers);
return( VLCATRN );
} 
#undef NL

A68_247 * GMCATRN_new_outers(A68_250 * Closure)
{ 
A68_INT * IMCATRN;  /* YIELD */
A68_INT  HMCATRN_n;
A68_248 ** JMCATRN_ptr;
A68_248  KMCATRN;  /* collateral clause result */
A68_284  MMCATRN_generator;   /* proc value of non-global proc */
A68_249  RMCATRN;  /* avoid structure result */
A68_248 * SMCATRN;  /* YIELD */
A68_247 * TMCATRN_outers;
A68_249  UMCATRN;  /* forall yield */
A68_INT  VMCATRN;  /* forall loop counter */
A68_247  WMCATRN;  /* collateral clause result */
A68_249  XMCATRN;  /* OPERATORS - simple index */
A68_247 * YMCATRN_new;
A68_INT * ZMCATRN;  /* YIELD */
A68_247 * ANCATRN;  /* clause result */
A68_247 * BNCATRN_recycled;
A68_247 ** CNCATRN;  /* YIELD */
A_PROC_ENTRY(new_outers);
 /* line 82: */
 /* line 83: */
 /* line 84: */
if ( ((*(&(Closure->Freelist)))==HBAATRN_nilouters) )
{ 
IMCATRN = (&(Closure->Max_closureno)) ;
HMCATRN_n = ((*IMCATRN)+=1);
 /* line 85: */
JMCATRN_ptr = (&(Closure->Outerslist));
 /* line 86: */
for ( ;; )
{ 
 /* line 87: */
if ( !((HMCATRN_n>XKCATRN_n_outers)) ) break;
JMCATRN_ptr = (&((*JMCATRN_ptr)->Rest));
HMCATRN_n-=XKCATRN_n_outers;
}
 /* line 88: */
 /* line 89: */
 /* line 90: */
if ( (HMCATRN_n==1) )
{ 
 /* line 91: */
A_CLOSURE( MMCATRN_generator, NMCATRN_generator, OMCATRN_generator );
A_CALLPROC(MMCATRN_generator,(A68_FALSE, &RMCATRN),(A68_FALSE, &RMCATRN,(MMCATRN_generator).nonlocals));
KMCATRN.Outers = RMCATRN;
KMCATRN.Rest = IBAATRN_nilouterslist;
SMCATRN = A_HEAP(A68_248 ) ;
(*SMCATRN) = KMCATRN ;
(*JMCATRN_ptr) = SMCATRN;
 /* line 92: */
 /* line 93: */
UMCATRN = (*(&((*JMCATRN_ptr)->Outers))) ;
VMCATRN = UMCATRN.upb -1;
TMCATRN_outers = UMCATRN.data;
for (;VMCATRN-- >= 0;
(TMCATRN_outers++
) )
{
WMCATRN.Outer = SDAATRN_nullouter;
WMCATRN.Rest = HBAATRN_nilouters;
(*TMCATRN_outers) = WMCATRN;
}
 /* line 94: */
} 
 /* line 95: */
XMCATRN = (*(&((*JMCATRN_ptr)->Outers))) ;
YMCATRN_new = (&A_VINDEX(XMCATRN,HMCATRN_n));
 /* line 98: */
ZMCATRN = (&((&(YMCATRN_new->Outer))->Closureno)) ;
(*ZMCATRN) = (*(&(Closure->Max_closureno)));
 /* line 99: */
 /* line 100: */
ANCATRN = YMCATRN_new;
} 
else
{ 
BNCATRN_recycled = (*(&(Closure->Freelist)));
 /* line 101: */
CNCATRN = (&(Closure->Freelist)) ;
(*CNCATRN) = (*(&((*(&(Closure->Freelist)))->Rest)));
 /* line 102: */
 /* line 103: */
ANCATRN = BNCATRN_recycled;
} 
A_PROC_EXIT(new_outers);
return( ANCATRN );
} 
#undef NL

A68_INT  ENCATRN_reserve_next_closureno(A68_250 * Closure)
{ 
A68_INT  FNCATRN;  /* clause result */
A_PROC_ENTRY(reserve_next_closureno);
 /* line 109: */
FNCATRN = (*(&((&(GMCATRN_new_outers(Closure)->Outer))->Closureno)));
A_PROC_EXIT(reserve_next_closureno);
return( FNCATRN );
} 
#undef NL
 /* line 113: */

A68_247 ** KNCATRN_insert_outer(A68_246  New, A68_247 ** Ptr, A68_250 * Closure, A68_97  Msg)
{ 
A68_247 * LNCATRN_outers;
A68_247  MNCATRN;  /* collateral clause result */
A68_247 ** NNCATRN;  /* clause result */
A_PROC_ENTRY(insert_outer);
 /* line 114: */
 /* line 117: */
{ 
LNCATRN_outers = ELCATRN_find_outers(New.Closureno, Closure, Msg);
 /* line 118: */
MNCATRN.Outer = New;
MNCATRN.Rest = (*Ptr);
(*LNCATRN_outers) = MNCATRN ;
(*Ptr) = LNCATRN_outers;
 /* line 119: */
 /* line 120: */
NNCATRN = (&(LNCATRN_outers->Rest));
} 
A_PROC_EXIT(insert_outer);
return( NNCATRN );
} 
#undef NL
 /* line 124: */

A68_VOID  RNCATRN_free_outers(A68_247 ** Ptr, A68_250 * Closure, A68_97  Msg)
{ 
A68_46  UNCATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_247 * VNCATRN_free;
A68_INT * WNCATRN;  /* YIELD */
A68_240 ** XNCATRN;  /* YIELD */
A68_247 ** YNCATRN;  /* YIELD */
A68_247 ** ZNCATRN;  /* YIELD */
A_PROC_ENTRY(free_outers);
 /* line 125: */
 /* line 126: */
{ 
 /* line 127: */
if ( ((*Ptr)==HBAATRN_nilouters) )
{ 
 /* line 128: */
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(UNCATRN,TNCATRN,A68_VC )),(SHAAOSI_system, A_HVEC(UNCATRN,TNCATRN,A68_VC ),(Msg).nonlocals));
} 
 /* line 129: */
VNCATRN_free = (*Ptr);
 /* line 130: */
(*Ptr) = (*(&((*Ptr)->Rest)));
 /* line 131: */
WNCATRN = (&((&(VNCATRN_free->Outer))->Sort)) ;
(*WNCATRN) = 0;
 /* line 132: */
XNCATRN = (&((&(VNCATRN_free->Outer))->Environ)) ;
(*XNCATRN) = (A68_240 *)A68_NIL;
 /* line 133: */
YNCATRN = (&(VNCATRN_free->Rest)) ;
(*YNCATRN) = (*(&(Closure->Freelist)));
 /* line 134: */
 /* line 135: */
ZNCATRN = (&(Closure->Freelist)) ;
(*ZNCATRN) = VNCATRN_free;
} 
A_PROC_EXIT(free_outers);
return;
} 
#undef NL

A68_250 * AOCATRN_make_closure(void)
{ 
A68_250  BOCATRN;  /* collateral clause result */
A68_250 * COCATRN;  /* clause result */
A68_250 * DOCATRN;  /* YIELD */
A_PROC_ENTRY(make_closure);
BOCATRN.Max_closureno = 0;
BOCATRN.Outers = HBAATRN_nilouters;
BOCATRN.Freelist = HBAATRN_nilouters;
BOCATRN.Outerslist = IBAATRN_nilouterslist;
DOCATRN = A_HEAP(A68_250 ) ;
(*DOCATRN) = BOCATRN ;
COCATRN = DOCATRN;
A_PROC_EXIT(make_closure);
return( COCATRN );
} 
#undef NL

A68_INT  GOCATRN_garbage_collect_closure(A68_250 * Closure, A68_97  Msg)
{ 
A68_290  IOCATRN_generator;   /* proc value of non-global proc */
A68_54  OOCATRN;  /* avoid structure result */
A68_54  NOCATRN_free;
A68_BOOL * POCATRN_f;
A68_INT  QOCATRN;  /* forall loop counter */
A68_247 * ROCATRN_ptr;
A68_INT  SOCATRN;  /* YIELD */
A68_BOOL * TOCATRN;  /* YIELD */
A68_INT  UOCATRN_rec;
A68_247 ** VOCATRN_freelist;
A68_INT  WOCATRN_i;
A68_INT  XOCATRN;  /* to part of loop */
A68_247 * YOCATRN_unused;
A68_247  ZOCATRN;  /* collateral clause result */
A68_INT  APCATRN;  /* clause result */
A_PROC_ENTRY(garbage_collect_closure);
 /* line 146: */
 /* line 147: */
{ 
A_CLOSURE( IOCATRN_generator, JOCATRN_generator, KOCATRN_generator );
(( KOCATRN_generator * ) ( IOCATRN_generator.nonlocals )) -> Closure = Closure;
A_CALLPROC(IOCATRN_generator,(A68_TRUE, &OOCATRN),(A68_TRUE, &OOCATRN,(IOCATRN_generator).nonlocals));
NOCATRN_free = OOCATRN;
 /* line 148: */
QOCATRN = NOCATRN_free.upb -1;
POCATRN_f = NOCATRN_free.data;
for (;QOCATRN-- >= 0;
(POCATRN_f++
) )
{
(*POCATRN_f) = A68_TRUE;
}
 /* line 151: */
ROCATRN_ptr = (*(&(Closure->Outers)));
 /* line 152: */
for ( ;; )
{ 
 /* line 153: */
if ( !((ROCATRN_ptr!=HBAATRN_nilouters)) ) break;
SOCATRN = (*(&((&(ROCATRN_ptr->Outer))->Closureno))) ;
TOCATRN = (&A_VINDEX(NOCATRN_free,SOCATRN)) ;
(*TOCATRN) = A68_FALSE;
 /* line 154: */
 /* line 155: */
ROCATRN_ptr = (*(&(ROCATRN_ptr->Rest)));
}
 /* line 158: */
UOCATRN_rec = 0;
 /* line 159: */
VOCATRN_freelist = (&(Closure->Freelist));
 /* line 160: */
 /* line 161: */
XOCATRN = NOCATRN_free.upb;
for ( WOCATRN_i = 1;
WOCATRN_i <= XOCATRN;
WOCATRN_i += 1 )
{ 
 /* line 162: */
if ( (*(&A_VINDEX(NOCATRN_free,WOCATRN_i))) )
{ 
UOCATRN_rec+=1;
 /* line 163: */
YOCATRN_unused = ELCATRN_find_outers(WOCATRN_i, Closure, Msg);
 /* line 164: */
ZOCATRN.Outer.Closureno = WOCATRN_i;
ZOCATRN.Outer.Sort = 0;
ZOCATRN.Outer.Environ = (A68_240 *)A68_NIL;
ZOCATRN.Rest = HBAATRN_nilouters;
(*YOCATRN_unused) = ZOCATRN;
 /* line 165: */
 /* line 166: */
 /* line 167: */
VOCATRN_freelist = (&(((*VOCATRN_freelist) = YOCATRN_unused)->Rest));
} 
}
 /* line 169: */
 /* line 170: */
APCATRN = UOCATRN_rec;
} 
A_PROC_EXIT(garbage_collect_closure);
return( APCATRN );
} 
#undef NL

A68_250 * DPCATRN_copy_closure(A68_250 * Old, A68_97  Msg)
{ 
A68_250 * EPCATRN_new;
A68_248 * FPCATRN_optr;
A68_248 ** GPCATRN_nptr;
A68_248  HPCATRN;  /* collateral clause result */
A68_284  JPCATRN_generator;   /* proc value of non-global proc */
A68_249  OPCATRN;  /* avoid structure result */
A68_249  PPCATRN;  /* OPERATORS - assign op */
A68_248 * QPCATRN;  /* YIELD */
A68_247 ** RPCATRN_ptr;
A68_250 * SPCATRN;  /* clause result */
A_PROC_ENTRY(copy_closure);
 /* line 200: */
 /* line 201: */
{ 
EPCATRN_new = (A_HEAP(A68_250 ));
(*EPCATRN_new) = (*Old);
 /* line 205: */
FPCATRN_optr = (*(&(Old->Outerslist)));
 /* line 206: */
GPCATRN_nptr = (&(EPCATRN_new->Outerslist));
 /* line 207: */
for ( ;; )
{ 
 /* line 208: */
if ( !((FPCATRN_optr!=IBAATRN_nilouterslist)) ) break;
 /* line 209: */
A_CLOSURE( JPCATRN_generator, KPCATRN_generator, LPCATRN_generator );
(( LPCATRN_generator * ) ( JPCATRN_generator.nonlocals )) -> FPCATRN_optr = (&FPCATRN_optr);
 /* line 210: */
A_CALLPROC(JPCATRN_generator,(A68_FALSE, &OPCATRN),(A68_FALSE, &OPCATRN,(JPCATRN_generator).nonlocals));
PPCATRN = (*(&(FPCATRN_optr->Outers))) ;
A_VASSIGN2(PPCATRN,OPCATRN,A68_247 ) ;
HPCATRN.Outers = OPCATRN;
HPCATRN.Rest = IBAATRN_nilouterslist;
QPCATRN = A_HEAP(A68_248 ) ;
(*QPCATRN) = HPCATRN ;
GPCATRN_nptr = (&(((*GPCATRN_nptr) = QPCATRN)->Rest));
 /* line 212: */
 /* line 213: */
FPCATRN_optr = (*(&(FPCATRN_optr->Rest)));
}
 /* line 217: */
RPCATRN_ptr = (&(EPCATRN_new->Outers));
 /* line 218: */
for ( ;; )
{ 
 /* line 219: */
if ( !(((*RPCATRN_ptr)!=HBAATRN_nilouters)) ) break;
(*RPCATRN_ptr) = ELCATRN_find_outers((*(&((&((*RPCATRN_ptr)->Outer))->Closureno))), EPCATRN_new, Msg);
 /* line 220: */
 /* line 221: */
RPCATRN_ptr = (&((*RPCATRN_ptr)->Rest));
}
 /* line 225: */
GOCATRN_garbage_collect_closure(EPCATRN_new, Msg);
 /* line 227: */
 /* line 228: */
 /* line 230: */
SPCATRN = EPCATRN_new;
} 
A_PROC_EXIT(copy_closure);
return( SPCATRN );
} 
#undef NL
 /* line 1: */
 /* line 4: */
void SKCATRN(void)   /* initialise DECS closureprocs */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/closureprocs.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/assmodes.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
BAAATRN();   /* USE assmodes */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/transform/assoc/./a68files/closureprocs.a68";
A_config.translation_time = "Tue Apr  4 09:58:39 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "RKCATRN (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:58:39 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS closureprocs);
UEAALIB_a68config(LGAALIB_configinfo, WKCATRN);
 /* line 59: */
 /* line 64: */
 /* line 67: */
 /* line 81: */
 /* line 108: */
 /* line 112: */
 /* line 123: */
 /* line 141: */
 /* line 142: */
 /* line 145: */
 /* line 199: */
 /* line 233: */
A_PROC_EXIT(DECS closureprocs);
} 
#undef NL
/* end of translation of ./a68files/closureprocs.a68 */
