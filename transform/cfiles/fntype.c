
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
/* UNAME:RUVATRN */
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

A_PROCEDURE(struct A68t124 *,A68t273,(A68_INT ),(A68_INT ,void *));
typedef struct A68t273  A68_273 ;    /* PROC(INT) REF MODE124 */

A_PROCEDURE(A68_INT ,A68t274,(struct A68t123 ,struct A68t97 ),(struct A68t123 ,struct A68t97 ,void *));
typedef struct A68t274  A68_274 ;    /* PROC(MODE123,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t275,(struct A68t123 ),(struct A68t123 ,void *));
typedef struct A68t275  A68_275 ;    /* PROC(MODE123) INT */

A_PROCEDURE(A68_VOID ,A68t276,(struct A68t123 ,struct A68t123 *),(struct A68t123 ,struct A68t123 *,void *));
typedef struct A68t276  A68_276 ;    /* PROC(MODE123) MODE123 */

A_PROCEDURE(struct A68t120 *,A68t277,(struct A68t246 ),(struct A68t246 ,void *));
typedef struct A68t277  A68_277 ;    /* PROC(MODE246) REF MODE120 */

A_PROCEDURE(struct A68t136 *,A68t278,(struct A68t246 ),(struct A68t246 ,void *));
typedef struct A68t278  A68_278 ;    /* PROC(MODE246) REF MODE136 */

A_PROCEDURE(struct A68t154 *,A68t279,(struct A68t246 ),(struct A68t246 ,void *));
typedef struct A68t279  A68_279 ;    /* PROC(MODE246) REF MODE154 */

A_PROCEDURE(struct A68t160 *,A68t280,(struct A68t246 ),(struct A68t246 ,void *));
typedef struct A68t280  A68_280 ;    /* PROC(MODE246) REF MODE160 */

A_PROCEDURE(struct A68t237 *,A68t281,(struct A68t246 ),(struct A68t246 ,void *));
typedef struct A68t281  A68_281 ;    /* PROC(MODE246) REF MODE237 */

A_PROCEDURE(A68_INT ,A68t282,(struct A68t121 *,struct A68t241 ),(struct A68t121 *,struct A68t241 ,void *));
typedef struct A68t282  A68_282 ;    /* PROC(REF MODE121,REF MODE241) INT */

A_PROCEDURE(A68_INT ,A68t283,(struct A68t121 *,struct A68t242 ),(struct A68t121 *,struct A68t242 ,void *));
typedef struct A68t283  A68_283 ;    /* PROC(REF MODE121,REF MODE242) INT */

A_PROCEDURE(A68_INT ,A68t284,(struct A68t121 *,struct A68t243 ),(struct A68t121 *,struct A68t243 ,void *));
typedef struct A68t284  A68_284 ;    /* PROC(REF MODE121,REF MODE243) INT */

A_PROCEDURE(A68_INT ,A68t285,(struct A68t121 *,struct A68t244 ),(struct A68t121 *,struct A68t244 ,void *));
typedef struct A68t285  A68_285 ;    /* PROC(REF MODE121,REF MODE244) INT */

A_PROCEDURE(A68_INT ,A68t286,(struct A68t121 *,struct A68t245 ),(struct A68t121 *,struct A68t245 ,void *));
typedef struct A68t286  A68_286 ;    /* PROC(REF MODE121,REF MODE245) INT */

A_PROCEDURE(struct A68t120 *,A68t287,(struct A68t115 ,struct A68t250 *,struct A68t240 *),(struct A68t115 ,struct A68t250 *,struct A68t240 *,void *));
typedef struct A68t287  A68_287 ;    /* PROC(MODE115,REF MODE250,REF MODE240) REF MODE120 */

A_PROCEDURE(struct A68t136 *,A68t288,(struct A68t127 ,struct A68t250 *,struct A68t240 *),(struct A68t127 ,struct A68t250 *,struct A68t240 *,void *));
typedef struct A68t288  A68_288 ;    /* PROC(MODE127,REF MODE250,REF MODE240) REF MODE136 */

A_PROCEDURE(struct A68t154 *,A68t289,(struct A68t140 ,struct A68t250 *,struct A68t240 *),(struct A68t140 ,struct A68t250 *,struct A68t240 *,void *));
typedef struct A68t289  A68_289 ;    /* PROC(MODE140,REF MODE250,REF MODE240) REF MODE154 */

A_PROCEDURE(struct A68t160 *,A68t290,(struct A68t155 ,struct A68t250 *,struct A68t240 *),(struct A68t155 ,struct A68t250 *,struct A68t240 *,void *));
typedef struct A68t290  A68_290 ;    /* PROC(MODE155,REF MODE250,REF MODE240) REF MODE160 */

A_PROCEDURE(struct A68t237 *,A68t291,(struct A68t192 ,struct A68t250 *,struct A68t240 *),(struct A68t192 ,struct A68t250 *,struct A68t240 *,void *));
typedef struct A68t291  A68_291 ;    /* PROC(MODE192,REF MODE250,REF MODE240) REF MODE237 */

A_PROCEDURE(struct A68t143 *,A68t292,(struct A68t237 *),(struct A68t237 *,void *));
typedef struct A68t292  A68_292 ;    /* PROC(REF MODE237) REF MODE143 */

A_PROCEDURE(A68_VOID ,A68t293,(struct A68t142 *,struct A68t123 *),(struct A68t142 *,struct A68t123 *,void *));
typedef struct A68t293  A68_293 ;    /* PROC(REF MODE142) MODE123 */

A_PROCEDURE(A68_VOID ,A68t294,(struct A68t139 ,struct A68t240 *,struct A68t123 *),(struct A68t139 ,struct A68t240 *,struct A68t123 *,void *));
typedef struct A68t294  A68_294 ;    /* PROC(MODE139,REF MODE240) MODE123 */

A_PROCEDURE(struct A68t237 *,A68t295,(struct A68t237 *,struct A68t240 *,struct A68t240 *),(struct A68t237 *,struct A68t240 *,struct A68t240 *,void *));
typedef struct A68t295  A68_295 ;    /* PROC(REF MODE237,REF MODE240,REF MODE240) REF MODE237 */

A_PROCEDURE(A68_VOID ,A68t296,(struct A68t202 *,struct A68t237 *,struct A68t139 *),(struct A68t202 *,struct A68t237 *,struct A68t139 *,void *));
typedef struct A68t296  A68_296 ;    /* PROC(REF MODE202,REF MODE237) MODE139 */

A_PROCEDURE(A68_INT ,A68t297,(struct A68t202 *),(struct A68t202 *,void *));
typedef struct A68t297  A68_297 ;    /* PROC(REF MODE202) INT */

A_PROCEDURE(A68_INT ,A68t298,(struct A68t202 *,A68_INT ),(struct A68t202 *,A68_INT ,void *));
typedef struct A68t298  A68_298 ;    /* PROC(REF MODE202,INT) INT */

A_PROCEDURE(A68_VOID ,A68t299,(struct A68t161 ,struct A68t237 *,struct A68t240 *,struct A68t139 *),(struct A68t161 ,struct A68t237 *,struct A68t240 *,struct A68t139 *,void *));
typedef struct A68t299  A68_299 ;    /* PROC(MODE161,REF MODE237,REF MODE240) MODE139 */

A_PROCEDURE(A68_VOID ,A68t300,(struct A68t139 ,struct A68t240 *,struct A68t139 *),(struct A68t139 ,struct A68t240 *,struct A68t139 *,void *));
typedef struct A68t300  A68_300 ;    /* PROC(MODE139,REF MODE240) MODE139 */

A_PROCEDURE(A68_BOOL ,A68t301,(struct A68t139 ,struct A68t139 ,struct A68t240 *,struct A68t240 *,A68_BOOL ),(struct A68t139 ,struct A68t139 ,struct A68t240 *,struct A68t240 *,A68_BOOL ,void *));
typedef struct A68t301  A68_301 ;    /* PROC(MODE139,MODE139,REF MODE240,REF MODE240,BOOL) BOOL */

A_PROCEDURE(A68_INT ,A68t302,(struct A68t170 *,struct A68t240 *),(struct A68t170 *,struct A68t240 *,void *));
typedef struct A68t302  A68_302 ;    /* PROC(REF MODE170,REF MODE240) INT */

A_PROCEDURE(A68_INT ,A68t303,(struct A68t250 *),(struct A68t250 *,void *));
typedef struct A68t303  A68_303 ;    /* PROC(REF MODE250) INT */

A_PROCEDURE(struct A68t247 *,A68t304,(A68_INT ,struct A68t250 *,struct A68t97 ),(A68_INT ,struct A68t250 *,struct A68t97 ,void *));
typedef struct A68t304  A68_304 ;    /* PROC(INT,REF MODE250,MODE97) REF MODE247 */

A_PROCEDURE(struct A68t247 *,A68t305,(struct A68t250 *),(struct A68t250 *,void *));
typedef struct A68t305  A68_305 ;    /* PROC(REF MODE250) REF MODE247 */

A_PROCEDURE(struct A68t247 **,A68t306,(struct A68t246 ,struct A68t247 **,struct A68t250 *,struct A68t97 ),(struct A68t246 ,struct A68t247 **,struct A68t250 *,struct A68t97 ,void *));
typedef struct A68t306  A68_306 ;    /* PROC(MODE246,REF REF MODE247,REF MODE250,MODE97) REF REF MODE247 */

A_PROCEDURE(A68_VOID ,A68t307,(struct A68t247 **,struct A68t250 *,struct A68t97 ),(struct A68t247 **,struct A68t250 *,struct A68t97 ,void *));
typedef struct A68t307  A68_307 ;    /* PROC(REF REF MODE247,REF MODE250,MODE97) VOID */

A_PROCEDURE(struct A68t250 *,A68t308,(void),(void *));
typedef struct A68t308  A68_308 ;    /* PROC REF MODE250 */

A_PROCEDURE(A68_INT ,A68t309,(struct A68t250 *,struct A68t97 ),(struct A68t250 *,struct A68t97 ,void *));
typedef struct A68t309  A68_309 ;    /* PROC(REF MODE250,MODE97) INT */

A_PROCEDURE(struct A68t250 *,A68t310,(struct A68t250 *,struct A68t97 ),(struct A68t250 *,struct A68t97 ,void *));
typedef struct A68t310  A68_310 ;    /* PROC(REF MODE250,MODE97) REF MODE250 */
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
struct A68t401{
A68_BITS  Options;
A_PAD_BITS(PAD_136)
};
typedef struct A68t401  A68_401 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t402,(struct A68t401 ,struct A68t401 ,struct A68t401 *),(struct A68t401 ,struct A68t401 ,struct A68t401 *,void *));
typedef struct A68t402  A68_402 ;    /* PROC(MODE401,MODE401) MODE401 */

A_PROCEDURE(struct A68t401 *,A68t403,(struct A68t401 *,struct A68t401 ),(struct A68t401 *,struct A68t401 ,void *));
typedef struct A68t403  A68_403 ;    /* PROC(REF MODE401,MODE401) REF MODE401 */

A_PROCEDURE(A68_BOOL ,A68t404,(struct A68t401 ,struct A68t401 ),(struct A68t401 ,struct A68t401 ,void *));
typedef struct A68t404  A68_404 ;    /* PROC(MODE401,MODE401) BOOL */

A_PROCEDURE(A68_BOOL ,A68t405,(struct A68t401 ,A68_INT ),(struct A68t401 ,A68_INT ,void *));
typedef struct A68t405  A68_405 ;    /* PROC(MODE401,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t406,(A68_INT ,struct A68t401 *),(A68_INT ,struct A68t401 *,void *));
typedef struct A68t406  A68_406 ;    /* PROC(INT) MODE401 */

A_PROCEDURE(A68_VOID ,A68t407,(struct A68t400 ),(struct A68t400 ,void *));
typedef struct A68t407  A68_407 ;    /* PROC(MODE400) VOID */

A_PROCEDURE(A68_VOID ,A68t408,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t408  A68_408 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t409,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t409  A68_409 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,53,A68t410);
typedef struct A68t410  A68_410 ;    /* STRUCT 53 CHAR */

A_PROCEDURE(A68_VOID ,A68t411,(struct A68t401 *),(struct A68t401 *,void *));
typedef struct A68t411  A68_411 ;    /* PROC MODE401 */
A_ISTRUCT(A68_CHAR ,26,A68t412);
typedef struct A68t412  A68_412 ;    /* STRUCT 26 CHAR */

A_PROCEDURE(A68_VOID ,A68t413,(struct A68t250 *,struct A68t401 ,struct A68t97 ,struct A68t352 *),(struct A68t250 *,struct A68t401 ,struct A68t97 ,struct A68t352 *,void *));
typedef struct A68t413  A68_413 ;    /* PROC(REF MODE250,MODE401,MODE97) MODE352 */
A_ISTRUCT(struct A68t398 ,4,A68t414);
typedef struct A68t414  A68_414 ;    /* STRUCT 4 MODE398 */

A_PROCEDURE(A68_VOID ,A68t415,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t415  A68_415 ;    /* PROC(REF MODE26,INT) REF MODE26 */
A_ISTRUCT(A68_CHAR ,2,A68t416);
typedef struct A68t416  A68_416 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t417);
typedef struct A68t417  A68_417 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(A68_CHAR ,3,A68t418);
typedef struct A68t418  A68_418 ;    /* STRUCT 3 CHAR */

A_PROCEDURE(A68_BOOL ,A68t419,(struct A68t139 ),(struct A68t139 ,void *));
typedef struct A68t419  A68_419 ;    /* PROC(MODE139) BOOL */

A_PROCEDURE(A68_VOID ,A68t420,(A68_BOOL ,struct A68t54 *),(A68_BOOL ,struct A68t54 *,void *));
typedef struct A68t420  A68_420 ;    /* PROC(BOOL) MODE54 */

A_PROCEDURE(A68_BOOL ,A68t421,(struct A68t246 ),(struct A68t246 ,void *));
typedef struct A68t421  A68_421 ;    /* PROC(MODE246) BOOL */
struct A68t422 { A68_INT mode; union {
struct A68t180 * mode1;
struct A68t178 * mode2;
struct A68t179 * mode3;
struct A68t184 * mode4;
struct A68t183 * mode5;
} data; };
typedef struct A68t422  A68_422 ;    /* UNION(REF MODE180,REF MODE178,REF MODE179,REF MODE184,REF MODE183)  */

A_PROCEDURE(A68_BOOL ,A68t423,(struct A68t161 ),(struct A68t161 ,void *));
typedef struct A68t423  A68_423 ;    /* PROC(MODE161) BOOL */
struct A68t424 { A68_INT mode; union {
struct A68t176 * mode1;
struct A68t175 * mode2;
struct A68t187 * mode3;
struct A68t185 * mode4;
struct A68t186 * mode5;
} data; };
typedef struct A68t424  A68_424 ;    /* UNION(REF MODE176,REF MODE175,REF MODE187,REF MODE185,REF MODE186)  */
struct A68t425 { A68_INT mode; union {
struct A68t140 * mode1;
struct A68t145 * mode2;
struct A68t147 * mode3;
struct A68t146 * mode4;
} data; };
typedef struct A68t425  A68_425 ;    /* UNION(REF MODE140,REF MODE145,REF MODE147,REF MODE146)  */

A_PROCEDURE(A68_VOID ,A68t426,(struct A68t329 ,struct A68t123 ,struct A68t123 ,struct A68t329 *),(struct A68t329 ,struct A68t123 ,struct A68t123 ,struct A68t329 *,void *));
typedef struct A68t426  A68_426 ;    /* PROC(MODE329,MODE123,MODE123) MODE329 */

A_PROCEDURE(A68_VOID ,A68t427,(struct A68t161 ,struct A68t161 *),(struct A68t161 ,struct A68t161 *,void *));
typedef struct A68t427  A68_427 ;    /* PROC(MODE161) MODE161 */
A_ISTRUCT(struct A68t161 ,2,A68t428);
typedef struct A68t428  A68_428 ;    /* STRUCT 2 MODE161 */

A_PROCEDURE(struct A68t428 ,A68t429,(struct A68t161 ,struct A68t161 ),(struct A68t161 ,struct A68t161 ,void *));
typedef struct A68t429  A68_429 ;    /* PROC(MODE161,MODE161) MODE428 */

A_PROCEDURE(struct A68t166 *,A68t430,(struct A68t161 ),(struct A68t161 ,void *));
typedef struct A68t430  A68_430 ;    /* PROC(MODE161) REF MODE166 */

A_PROCEDURE(A68_INT ,A68t431,(struct A68t161 ),(struct A68t161 ,void *));
typedef struct A68t431  A68_431 ;    /* PROC(MODE161) INT */
A_ISTRUCT(A68_CHAR ,11,A68t432);
typedef struct A68t432  A68_432 ;    /* STRUCT 11 CHAR */

A_PROCEDURE(A68_INT ,A68t433,(struct A68t143 *,struct A68t240 *),(struct A68t143 *,struct A68t240 *,void *));
typedef struct A68t433  A68_433 ;    /* PROC(REF MODE143,REF MODE240) INT */

A_PROCEDURE(A68_VOID ,A68t434,(A68_BOOL ,struct A68t239 *),(A68_BOOL ,struct A68t239 *,void *));
typedef struct A68t434  A68_434 ;    /* PROC(BOOL) MODE239 */

A_PROCEDURE(A68_VOID ,A68t435,(A68_BOOL ,struct A68t245 *),(A68_BOOL ,struct A68t245 *,void *));
typedef struct A68t435  A68_435 ;    /* PROC(BOOL) MODE245 */

A_PROCEDURE(struct A68t143 *,A68t436,(struct A68t139 ,A68_BOOL ),(struct A68t139 ,A68_BOOL ,void *));
typedef struct A68t436  A68_436 ;    /* PROC(MODE139,BOOL) REF MODE143 */

A_PROCEDURE(A68_VOID ,A68t437,(struct A68t142 *,struct A68t139 *),(struct A68t142 *,struct A68t139 *,void *));
typedef struct A68t437  A68_437 ;    /* PROC(REF MODE142) MODE139 */

A_PROCEDURE(struct A68t142 *,A68t438,(struct A68t139 ),(struct A68t139 ,void *));
typedef struct A68t438  A68_438 ;    /* PROC(MODE139) REF MODE142 */

A_PROCEDURE(A68_VOID ,A68t439,(struct A68t139 ,struct A68t139 ,struct A68t139 *),(struct A68t139 ,struct A68t139 ,struct A68t139 *,void *));
typedef struct A68t439  A68_439 ;    /* PROC(MODE139,MODE139) MODE139 */

A_PROCEDURE(struct A68t143 *,A68t440,(struct A68t139 ),(struct A68t139 ,void *));
typedef struct A68t440  A68_440 ;    /* PROC(MODE139) REF MODE143 */

A_PROCEDURE(struct A68t167 *,A68t441,(struct A68t161 ,A68_BOOL ),(struct A68t161 ,A68_BOOL ,void *));
typedef struct A68t441  A68_441 ;    /* PROC(MODE161,BOOL) REF MODE167 */

A_PROCEDURE(A68_VOID ,A68t442,(struct A68t176 *,struct A68t161 *),(struct A68t176 *,struct A68t161 *,void *));
typedef struct A68t442  A68_442 ;    /* PROC(REF MODE176) MODE161 */

A_PROCEDURE(struct A68t176 *,A68t443,(struct A68t161 ),(struct A68t161 ,void *));
typedef struct A68t443  A68_443 ;    /* PROC(MODE161) REF MODE176 */

A_PROCEDURE(A68_VOID ,A68t444,(struct A68t161 ,struct A68t161 ,struct A68t161 *),(struct A68t161 ,struct A68t161 ,struct A68t161 *,void *));
typedef struct A68t444  A68_444 ;    /* PROC(MODE161,MODE161) MODE161 */
A_ISTRUCT(A68_CHAR ,62,A68t445);
typedef struct A68t445  A68_445 ;    /* STRUCT 62 CHAR */

A_PROCEDURE(struct A68t167 *,A68t446,(struct A68t161 ),(struct A68t161 ,void *));
typedef struct A68t446  A68_446 ;    /* PROC(MODE161) REF MODE167 */
A_ISTRUCT(struct A68t398 ,3,A68t447);
typedef struct A68t447  A68_447 ;    /* STRUCT 3 MODE398 */

A_PROCEDURE(A68_VOID ,A68t448,(struct A68t161 ,struct A68t329 *),(struct A68t161 ,struct A68t329 *,void *));
typedef struct A68t448  A68_448 ;    /* PROC(MODE161) MODE329 */

A_PROCEDURE(A68_VOID ,A68t449,(struct A68t139 ,struct A68t320 *),(struct A68t139 ,struct A68t320 *,void *));
typedef struct A68t449  A68_449 ;    /* PROC(MODE139) MODE320 */

A_PROCEDURE(A68_VOID ,A68t450,(struct A68t139 ,struct A68t161 ,struct A68t161 ,struct A68t161 *),(struct A68t139 ,struct A68t161 ,struct A68t161 ,struct A68t161 *,void *));
typedef struct A68t450  A68_450 ;    /* PROC(MODE139,MODE161,MODE161) MODE161 */

A_PROCEDURE(A68_BOOL ,A68t451,(struct A68t139 ,A68_BOOL ),(struct A68t139 ,A68_BOOL ,void *));
typedef struct A68t451  A68_451 ;    /* PROC(MODE139,BOOL) BOOL */

A_PROCEDURE(struct A68t135 *,A68t452,(A68_INT *,struct A68t135 *,A68_BOOL ),(A68_INT *,struct A68t135 *,A68_BOOL ,void *));
typedef struct A68t452  A68_452 ;    /* PROC(REF INT,REF MODE135,BOOL) REF MODE135 */

A_PROCEDURE(A68_VOID ,A68t453,(A68_BOOL ,struct A68t135 *,struct A68t161 *),(A68_BOOL ,struct A68t135 *,struct A68t161 *,void *));
typedef struct A68t453  A68_453 ;    /* PROC(BOOL,REF MODE135) MODE161 */

A_PROCEDURE(A68_VOID ,A68t454,(struct A68t139 ,A68_BOOL ,struct A68t135 *,struct A68t135 *,struct A68t161 *),(struct A68t139 ,A68_BOOL ,struct A68t135 *,struct A68t135 *,struct A68t161 *,void *));
typedef struct A68t454  A68_454 ;    /* PROC(MODE139,BOOL,REF MODE135,REF MODE135) MODE161 */

A_PROCEDURE(A68_VOID ,A68t455,(struct A68t161 ,A68_INT ,struct A68t329 *),(struct A68t161 ,A68_INT ,struct A68t329 *,void *));
typedef struct A68t455  A68_455 ;    /* PROC(MODE161,INT) MODE329 */

A_PROCEDURE(A68_VOID ,A68t456,(struct A68t237 *,struct A68t353 *,A68_INT ,struct A68t240 *,struct A68t350 *),(struct A68t237 *,struct A68t353 *,A68_INT ,struct A68t240 *,struct A68t350 *,void *));
typedef struct A68t456  A68_456 ;    /* PROC(REF MODE237,REF MODE353,INT,REF MODE240) MODE350 */
A_VECTOR(struct A68t161 ,A68t457);
typedef struct A68t457  A68_457 ;    /* VECTOR [] MODE161 */

A_PROCEDURE(A68_VOID ,A68t458,(A68_BOOL ,struct A68t457 *),(A68_BOOL ,struct A68t457 *,void *));
typedef struct A68t458  A68_458 ;    /* PROC(BOOL) MODE457 */

A_PROCEDURE(A68_VOID ,A68t459,(struct A68t341 *),(struct A68t341 *,void *));
typedef struct A68t459  A68_459 ;    /* PROC MODE341 */

A_PROCEDURE(A68_VOID ,A68t460,(struct A68t340 ),(struct A68t340 ,void *));
typedef struct A68t460  A68_460 ;    /* PROC(MODE340) VOID */

A_PROCEDURE(A68_VOID ,A68t461,(struct A68t341 ),(struct A68t341 ,void *));
typedef struct A68t461  A68_461 ;    /* PROC(MODE341) VOID */
struct A68t462{
struct A68t190 * Series;
struct A68t190 ** Sptr;
A68_BOOL  Changed;
A_PAD_BOOL(PAD_137)
struct A68t462 * Rest;
};
typedef struct A68t462  A68_462 ;    /* STRUCT(REF MODE190,REF REF MODE190,BOOL,REF MODE462)  */

A_PROCEDURE(A68_VOID ,A68t463,(struct A68t346 *),(struct A68t346 *,void *));
typedef struct A68t463  A68_463 ;    /* PROC MODE346 */

A_PROCEDURE(A68_VOID ,A68t464,(struct A68t345 ),(struct A68t345 ,void *));
typedef struct A68t464  A68_464 ;    /* PROC(MODE345) VOID */

A_PROCEDURE(A68_VOID ,A68t465,(struct A68t346 ),(struct A68t346 ,void *));
typedef struct A68t465  A68_465 ;    /* PROC(MODE346) VOID */

A_PROCEDURE(A68_VOID ,A68t466,(struct A68t161 ,struct A68t161 ,A68_BOOL ),(struct A68t161 ,struct A68t161 ,A68_BOOL ,void *));
typedef struct A68t466  A68_466 ;    /* PROC(MODE161,MODE161,BOOL) VOID */

A_PROCEDURE(A68_INT ,A68t467,(A68_INT ,A68_BOOL ,struct A68t236 ,struct A68t320 ),(A68_INT ,A68_BOOL ,struct A68t236 ,struct A68t320 ,void *));
typedef struct A68t467  A68_467 ;    /* PROC(INT,BOOL,MODE236,MODE320) INT */

A_PROCEDURE(A68_VOID ,A68t468,(struct A68t202 *,struct A68t161 ,struct A68t161 *),(struct A68t202 *,struct A68t161 ,struct A68t161 *,void *));
typedef struct A68t468  A68_468 ;    /* PROC(REF MODE202,MODE161) MODE161 */

A_PROCEDURE(struct A68t195 *,A68t469,(struct A68t236 ,struct A68t161 ,struct A68t139 ),(struct A68t236 ,struct A68t161 ,struct A68t139 ,void *));
typedef struct A68t469  A68_469 ;    /* PROC(MODE236,MODE161,MODE139) REF MODE195 */

A_PROCEDURE(A68_VOID ,A68t470,(struct A68t202 *,struct A68t353 *,A68_BOOL ,struct A68t337 *),(struct A68t202 *,struct A68t353 *,A68_BOOL ,struct A68t337 *,void *));
typedef struct A68t470  A68_470 ;    /* PROC(REF MODE202,REF MODE353,BOOL) MODE337 */

A_PROCEDURE(A68_VOID ,A68t471,(struct A68t202 *,struct A68t161 ),(struct A68t202 *,struct A68t161 ,void *));
typedef struct A68t471  A68_471 ;    /* PROC(REF MODE202,MODE161) VOID */

A_PROCEDURE(A68_VOID ,A68t472,(struct A68t195 *,struct A68t353 *),(struct A68t195 *,struct A68t353 *,void *));
typedef struct A68t472  A68_472 ;    /* PROC(REF MODE195,REF MODE353) VOID */

A_PROCEDURE(A68_VOID ,A68t473,(struct A68t197 *,struct A68t353 *),(struct A68t197 *,struct A68t353 *,void *));
typedef struct A68t473  A68_473 ;    /* PROC(REF MODE197,REF MODE353) VOID */

A_PROCEDURE(A68_VOID ,A68t474,(struct A68t198 *,struct A68t353 *),(struct A68t198 *,struct A68t353 *,void *));
typedef struct A68t474  A68_474 ;    /* PROC(REF MODE198,REF MODE353) VOID */
A_ISTRUCT(A68_CHAR ,39,A68t475);
typedef struct A68t475  A68_475 ;    /* STRUCT 39 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t476);
typedef struct A68t476  A68_476 ;    /* STRUCT 20 CHAR */

A_PROCEDURE(A68_VOID ,A68t477,(struct A68t196 *,struct A68t353 *),(struct A68t196 *,struct A68t353 *,void *));
typedef struct A68t477  A68_477 ;    /* PROC(REF MODE196,REF MODE353) VOID */

A_PROCEDURE(A68_VOID ,A68t478,(struct A68t202 *,struct A68t320 ,struct A68t337 *),(struct A68t202 *,struct A68t320 ,struct A68t337 *,void *));
typedef struct A68t478  A68_478 ;    /* PROC(REF MODE202,MODE320) MODE337 */

A_PROCEDURE(A68_VOID ,A68t479,(struct A68t190 *,struct A68t353 *),(struct A68t190 *,struct A68t353 *,void *));
typedef struct A68t479  A68_479 ;    /* PROC(REF MODE190,REF MODE353) VOID */

A_PROCEDURE(A68_VOID ,A68t480,(struct A68t166 *,struct A68t329 *),(struct A68t166 *,struct A68t329 *,void *));
typedef struct A68t480  A68_480 ;    /* PROC(REF MODE166) MODE329 */
A_ISTRUCT(A68_CHAR ,5,A68t481);
typedef struct A68t481  A68_481 ;    /* STRUCT 5 CHAR */

A_PROCEDURE(struct A68t202 *,A68t482,(struct A68t202 *,struct A68t353 *,A68_BOOL ,struct A68t320 ),(struct A68t202 *,struct A68t353 *,A68_BOOL ,struct A68t320 ,void *));
typedef struct A68t482  A68_482 ;    /* PROC(REF MODE202,REF MODE353,BOOL,MODE320) REF MODE202 */

A_PROCEDURE(A68_VOID ,A68t483,(struct A68t161 ,struct A68t353 *,struct A68t161 ,A68_BOOL ,struct A68t329 *),(struct A68t161 ,struct A68t353 *,struct A68t161 ,A68_BOOL ,struct A68t329 *,void *));
typedef struct A68t483  A68_483 ;    /* PROC(MODE161,REF MODE353,MODE161,BOOL) MODE329 */

A_PROCEDURE(A68_VOID ,A68t484,(struct A68t202 *,struct A68t353 *,struct A68t161 ,A68_BOOL ,A68_BOOL ),(struct A68t202 *,struct A68t353 *,struct A68t161 ,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t484  A68_484 ;    /* PROC(REF MODE202,REF MODE353,MODE161,BOOL,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t485,(struct A68t233 ,struct A68t353 *,A68_BOOL ,struct A68t161 ,struct A68t143 *,struct A68t240 *,struct A68t347 *),(struct A68t233 ,struct A68t353 *,A68_BOOL ,struct A68t161 ,struct A68t143 *,struct A68t240 *,struct A68t347 *,void *));
typedef struct A68t485  A68_485 ;    /* PROC(MODE233,REF MODE353,BOOL,MODE161,REF MODE143,REF MODE240) MODE347 */

A_PROCEDURE(A68_VOID ,A68t486,(struct A68t154 *,struct A68t324 *),(struct A68t154 *,struct A68t324 *,void *));
typedef struct A68t486  A68_486 ;    /* PROC(REF MODE154) MODE324 */

A_PROCEDURE(A68_VOID ,A68t487,(A68_BOOL ,struct A68t243 *),(A68_BOOL ,struct A68t243 *,void *));
typedef struct A68t487  A68_487 ;    /* PROC(BOOL) MODE243 */
A_ISTRUCT(struct A68t398 ,2,A68t488);
typedef struct A68t488  A68_488 ;    /* STRUCT 2 MODE398 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from options --- */
extern A68_BOOL  MBAAOST_includes(struct A68t401 ,struct A68t401 );
extern A68_VOID  FCAAOST_makeoptions(A68_INT ,A68_401 *);
/* --- End of imports from options --- */


/* --- Imports from transformprocs --- */
extern A68_353 * THJATRN_make_newtprocs(struct A68t353 *,struct A68t397 );
extern A68_VOID  MLJATRN_discard_tprocs(struct A68t353 *);
extern A68_353 * AWLATRN_nulltprocs;
extern A68_VOID  DWLATRN_null_attr(struct A68t114 ,struct A68t353 *,A68_311 *);
extern A68_VOID  IWLATRN_null_formula(struct A68t123 ,struct A68t353 *,A68_314 *);
extern A68_VOID  NWLATRN_null_type(struct A68t139 ,struct A68t353 *,A68_320 *);
/* --- End of imports from transformprocs --- */


/* --- Imports from closureprocs --- */
extern A68_INT  ZKCATRN_maxclosureno(struct A68t250 *);
extern A68_VOID  RNCATRN_free_outers(struct A68t247 **,struct A68t250 *,struct A68t97 );
extern A68_250 * DPCATRN_copy_closure(struct A68t250 *,struct A68t97 );
/* --- End of imports from closureprocs --- */


/* --- Imports from modeprocs --- */
extern A68_124 * NNMATRN_makefint(A68_INT );
extern A68_INT  XOMATRN_int(struct A68t123 );
extern A68_154 * OPMATRN_get_outertype(struct A68t246 );
extern A68_237 * CQMATRN_get_outerfn(struct A68t246 );
extern A68_143 * MUNATRN_fndec_tfn(struct A68t237 *);
extern A68_VOID  VUNATRN_unit_type(struct A68t161 ,struct A68t237 *,struct A68t240 *,A68_139 *);
/* --- End of imports from modeprocs --- */


/* --- Imports from assmodes --- */
extern A68_VC  TTCAOST_nullid;
extern A68_142 * GAAATRN_niltstr;
extern A68_176 * IAAATRN_nilustr;
extern A68_221 * JAAATRN_niluchoices;
extern A68_202 * NAAATRN_nilnames;
extern A68_220 * PAAATRN_nilseqchoices;
extern A68_209 * QAAATRN_nilsequence;
extern A68_200 * RAAATRN_niljoins;
extern A68_190 * SAAATRN_nilseries;
extern A68_154 * WAAATRN_niltypedec;
extern A68_203  ABAATRN_nilmacparams;
extern A68_135 * BBAATRN_nilformulas;
extern A68_121 * CBAATRN_nilusage;
extern A68_247 * HBAATRN_nilouters;
extern A68_238  GCAATRN_nullmacspecs;
extern A68_206 * WGAATRN_makeunittag(struct A68t161 );
extern A68_192 * LHAATRN_makefnname(A68_INT );
extern A68_119  ZHAATRN_attrnull;
extern A68_147  DIAATRN_tnull;
extern A68_189  FIAATRN_unull;
extern A68_225  NIAATRN_reform;
extern A68_146  PIAATRN_tvoid;
extern A68_163  RIAATRN_cvoid;
#define KKAATRN_usource 1
#define LKAATRN_usink 2
#define MKAATRN_uiosource 3
#define NKAATRN_uiosink 4
#define OKAATRN_outerdec 1
#define PKAATRN_localdec 2
#define TKAATRN_outertype 3
#define VKAATRN_outerfn 5
/* --- End of imports from assmodes --- */


/* --- Imports from messageproc --- */
extern A68_92  SHAAOSI_system;
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VOID  UJBAOSL_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void BAAAOST(void);   /* options */
extern void IHJATRN(void);   /* transformprocs */
extern void SKCATRN(void);   /* closureprocs */
extern void HNMATRN(void);   /* modeprocs */
extern void BAAATRN(void);   /* assmodes */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_410   VUVATRN = {"$Id: fntype.a68,v 34.2 1995/03/29 13:02:54 ella Exp $"}; 
A_GISVEC(A68_VC ,WUVATRN,VUVATRN,53)
static A68_412   AVVATRN = {"Retains occurances of UFN."}; 
A_GISVEC(A68_VC ,BVVATRN,AVVATRN,26)
A68_46  DVVATRN_fntype_options;
static A68_416   NWVATRN = {"_f"}; 
A_GISVEC(A68_VC ,OWVATRN,NWVATRN,2)
static A68_418   WWVATRN = {"_f_"}; 
A_GISVEC(A68_VC ,XWVATRN,WWVATRN,3)
static A68_432   JIWATRN = {"unit_nameno"}; 
A_GISVEC(A68_VC ,KIWATRN,JIWATRN,11)
static A68_416   QKWATRN = {"_F"}; 
A_GISVEC(A68_VC ,RKWATRN,QKWATRN,2)
static A68_445   BVWATRN = {"portnames must be transformed out before fntype transformation"}; 
A_GISVEC(A68_VC ,CVWATRN,BVWATRN,62)
#define GJXATRN_nilserieslist (A68_462 *)A68_NIL
static A68_475   BRXATRN = {"Generated steps not allowed in REPLJOIN"}; 
A_GISVEC(A68_VC ,CRXATRN,BRXATRN,39)
static A68_476   LRXATRN = {"Non JOIN in REPLJOIN"}; 
A_GISVEC(A68_VC ,MRXATRN,LRXATRN,20)
static A68_481   WAYATRN = {"uinst"}; 
A_GISVEC(A68_VC ,XAYATRN,WAYATRN,5)
typedef struct   /* env of non-global proc */
{
A68_97  Msg;
} HWVATRN_sysfault;
typedef struct   /* env of non-global proc */
{
A68_240 ** DXVATRN_environ;
A68_419  GXVATRN_has_type_fntype;
} IXVATRN_has_type_fntype;
typedef struct   /* env of non-global proc */
{
A68_250 * Oldclosure;
} BYVATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_BOOL * IYVATRN_expand;
} NYVATRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_240 ** DXVATRN_environ;
A68_419  GXVATRN_has_type_fntype;
A68_54  EYVATRN_closure_specs;
A68_BOOL * IYVATRN_expand;
A68_353 * YYVATRN_search_unit;
} CZVATRN_pre_pass_outerfn;
typedef struct   /* env of non-global proc */
{
A68_BOOL * AAWATRN_with_monitor;
} FAWATRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_BOOL * AAWATRN_with_monitor;
A68_353 * OAWATRN_contains_diagnosticprocs;
} SAWATRN_contains_diagnostics;
typedef struct   /* env of non-global proc */
{
A68_423  PCWATRN_has_unit_null;
} RCWATRN_has_unit_null;
typedef struct   /* env of non-global proc */
{
A68_427  SEWATRN_remove_null_elem;
} UEWATRN_remove_null_elem;
typedef struct   /* env of non-global proc */
{
A68_423  PCWATRN_has_unit_null;
A68_427  SEWATRN_remove_null_elem;
} UFWATRN_remove_null_void;
typedef struct   /* env of non-global proc */
{
A68_54 * EXVATRN_environ_specs;
A68_BOOL * PGWATRN_extra;
} UGWATRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_BOOL * PGWATRN_extra;
A68_353 * HHWATRN_extra_stepprocs;
} LHWATRN_extra_step;
typedef struct   /* env of non-global proc */
{
A68_430  QHWATRN_unit_uname;
} SHWATRN_unit_uname;
typedef struct   /* env of non-global proc */
{
A68_430  QHWATRN_unit_uname;
A68_36  FWVATRN_sysfault;
} HIWATRN_unit_nameno;
typedef struct   /* env of non-global proc */
{
A68_240 ** DXVATRN_environ;
A68_419  GXVATRN_has_type_fntype;
} QIWATRN_remove_named_fntype;
typedef struct   /* env of non-global proc */
{
A68_240 ** DXVATRN_environ;
A68_419  GXVATRN_has_type_fntype;
A68_436  HLWATRN_trans_type;
} JLWATRN_trans_type;
typedef struct   /* env of non-global proc */
{
A68_436  HLWATRN_trans_type;
} BPWATRN_transform_type;
typedef struct   /* env of non-global proc */
{
A68_441  FPWATRN_trans_unit;
A68_36  FWVATRN_sysfault;
} HPWATRN_trans_unit;
typedef struct   /* env of non-global proc */
{
A68_441  FPWATRN_trans_unit;
} LVWATRN_transform_unit;
typedef struct   /* env of non-global proc */
{
A68_446  JVWATRN_transform_unit;
} RVWATRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_353 * CWWATRN_remove_ufnprocs;
A68_353 * DYWATRN_unull_procs;
} HYWATRN_remove_ufn;
typedef struct   /* env of non-global proc */
{
A68_440  ZOWATRN_transform_type;
} VYWATRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_353 * GZWATRN_remove_tfnprocs;
A68_353 * UZWATRN_tnull_procs;
} YZWATRN_remove_tfn;
typedef struct   /* env of non-global proc */
{
A68_240 ** DXVATRN_environ;
A68_419  GXVATRN_has_type_fntype;
} NAXATRN_make_unitlink;
typedef struct   /* env of non-global proc */
{
A68_INT * TFXATRN_sort;
} YFXATRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_INT * TFXATRN_sort;
A68_353 * UGXATRN_coerce_ufn_procs;
} ZGXATRN_coerce_ufn;
typedef struct   /* env of non-global proc */
{
A68_455  XGXATRN_coerce_ufn;
} GHXATRN_unitlink_source;
typedef struct   /* env of non-global proc */
{
A68_455  XGXATRN_coerce_ufn;
} MHXATRN_unitlink_sink;
typedef struct   /* env of non-global proc */
{
A68_429  SFWATRN_remove_null_void;
A68_401  Options;
A68_448  FYWATRN_remove_ufn;
A68_449  WZWATRN_remove_tfn;
A68_419  GXVATRN_has_type_fntype;
A68_446  JVWATRN_transform_unit;
A68_423  JHWATRN_extra_step;
A68_36  FWVATRN_sysfault;
A68_54 * EXVATRN_environ_specs;
A68_440  ZOWATRN_transform_type;
A68_450  LAXATRN_make_unitlink;
A68_455  XGXATRN_coerce_ufn;
A68_240 ** DXVATRN_environ;
A68_423  QAWATRN_contains_diagnostics;
A68_236  DWVATRN_nullnametype;
A68_427  EHXATRN_unitlink_source;
A68_427  KHXATRN_unitlink_sink;
A68_353 * NCWATRN_swap_tfn;
A68_353 * RBWATRN_swap_ufn;
} VHXATRN_fndec_fntype;
typedef struct   /* env of non-global proc */
{
A68_419  GXVATRN_has_type_fntype;
} NOYATRN_typedec_fntype;
typedef struct   /* env of non-global proc */
{
A68_54 * EXVATRN_environ_specs;
A68_54  EYVATRN_closure_specs;
A68_486  LOYATRN_typedec_fntype;
A68_456  THXATRN_fndec_fntype;
A68_363  OIWATRN_remove_named_fntype;
} ZOYATRN_outerfn_fntype;
typedef struct   /* env of non-global proc */
{
int dummy;
} QJWATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * EKWATRN_max;
} IKWATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_240 ** DXVATRN_environ;
A68_451  RAXATRN_is_same_sort;
} TAXATRN_is_same_sort;
typedef struct   /* env of non-global proc */
{
A68_161  Source;
A68_161  Sink;
A68_453  VBXATRN_make_uindex;
} XBXATRN_make_uindex;
typedef struct   /* env of non-global proc */
{
A68_240 ** DXVATRN_environ;
A68_419  GXVATRN_has_type_fntype;
A68_454  HCXATRN_type_unit;
A68_453  VBXATRN_make_uindex;
A68_451  RAXATRN_is_same_sort;
} JCXATRN_type_unit;
typedef struct   /* env of non-global proc */
{
A68_INT  WHXATRN_upb;
A_PAD_INT(PAD_138)
} AIXATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_BOOL * IIXATRN_sequencechanged;
A68_209 ** JIXATRN_newsequence;
A68_209 *** KIXATRN_sequenceptr;
} NIXATRN_start_sequence;
typedef struct   /* env of non-global proc */
{
A68_209 ** JIXATRN_newsequence;
A68_BOOL * IIXATRN_sequencechanged;
} QIXATRN_finish_sequence;
typedef struct   /* env of non-global proc */
{
A68_BOOL * IIXATRN_sequencechanged;
A68_209 *** KIXATRN_sequenceptr;
} WIXATRN_add_seqstep;
typedef struct   /* env of non-global proc */
{
A68_BOOL * IIXATRN_sequencechanged;
A68_209 *** KIXATRN_sequenceptr;
} CJXATRN_add_sequence;
typedef struct   /* env of non-global proc */
{
A68_462 ** HJXATRN_serieslist;
A68_190 ** EJXATRN_newseries;
A68_190 *** FJXATRN_seriesptr;
A68_BOOL * DJXATRN_serieschanged;
} KJXATRN_start_series;
typedef struct   /* env of non-global proc */
{
A68_190 ** EJXATRN_newseries;
A68_BOOL * DJXATRN_serieschanged;
A68_462 ** HJXATRN_serieslist;
A68_190 *** FJXATRN_seriesptr;
} PJXATRN_finish_series;
typedef struct   /* env of non-global proc */
{
A68_BOOL * DJXATRN_serieschanged;
A68_190 *** FJXATRN_seriesptr;
} WJXATRN_add_step;
typedef struct   /* env of non-global proc */
{
A68_BOOL * DJXATRN_serieschanged;
A68_190 *** FJXATRN_seriesptr;
} CKXATRN_add_series;
typedef struct   /* env of non-global proc */
{
A68_429  SFWATRN_remove_null_void;
A68_464  UJXATRN_add_step;
} IKXATRN_add_join;
typedef struct   /* env of non-global proc */
{
A68_INT * GIXATRN_nametypeno;
A68_237 * HIXATRN_newfdec;
A68_BOOL * FIXATRN_nametypechange;
} HLXATRN_add_nametype;
typedef struct   /* env of non-global proc */
{
A68_401  Options;
A68_448  FYWATRN_remove_ufn;
A68_237 * HIXATRN_newfdec;
A68_449  WZWATRN_remove_tfn;
} NMXATRN_remove_let_ufn;
typedef struct   /* env of non-global proc */
{
A68_467  FLXATRN_add_nametype;
A68_468  LMXATRN_remove_let_ufn;
} DNXATRN_make_let;
typedef struct   /* env of non-global proc */
{
A68_237 * Fdec;
A68_467  FLXATRN_add_nametype;
A68_457  DIXATRN_unitlink;
A68_470  RNXATRN_names_nameno;
} TNXATRN_names_nameno;
typedef struct   /* env of non-global proc */
{
A68_419  GXVATRN_has_type_fntype;
A68_237 * Fdec;
A68_457  DIXATRN_unitlink;
} APXATRN_let_unitlink;
typedef struct   /* env of non-global proc */
{
A68_470  RNXATRN_names_nameno;
A68_471  YOXATRN_let_unitlink;
A68_468  LMXATRN_remove_let_ufn;
A68_464  UJXATRN_add_step;
} TPXATRN_let_fntype;
typedef struct   /* env of non-global proc */
{
A68_446  JVWATRN_transform_unit;
A68_466  GKXATRN_add_join;
} MQXATRN_join_fntype;
typedef struct   /* env of non-global proc */
{
A68_400  IJXATRN_start_series;
A68_423  JHWATRN_extra_step;
A68_36  FWVATRN_sysfault;
A68_473  KQXATRN_join_fntype;
A68_463  NJXATRN_finish_series;
A68_464  UJXATRN_add_step;
} ZQXATRN_repljoin_fntype;
typedef struct   /* env of non-global proc */
{
A68_237 * Fdec;
A68_467  FLXATRN_add_nametype;
A68_54 * EXVATRN_environ_specs;
A68_440  ZOWATRN_transform_type;
A68_464  UJXATRN_add_step;
A68_450  LAXATRN_make_unitlink;
A68_457  DIXATRN_unitlink;
A68_469  BNXATRN_make_let;
} XRXATRN_make_fntype;
typedef struct   /* env of non-global proc */
{
A68_472  RPXATRN_let_fntype;
A68_473  KQXATRN_join_fntype;
A68_474  XQXATRN_repljoin_fntype;
A68_477  VRXATRN_make_fntype;
A68_464  UJXATRN_add_step;
} HVXATRN_series_fntype;
typedef struct   /* env of non-global proc */
{
A68_400  IJXATRN_start_series;
A68_463  NJXATRN_finish_series;
} AWXATRN_seq_unit;
typedef struct   /* env of non-global proc */
{
A68_372  YVXATRN_seq_unit;
A68_471  YOXATRN_let_unitlink;
A68_468  LMXATRN_remove_let_ufn;
} PWXATRN_seqstep_fntype;
typedef struct   /* env of non-global proc */
{
A68_457  DIXATRN_unitlink;
A68_455  XGXATRN_coerce_ufn;
} UZXATRN_uname_fntype;
typedef struct   /* env of non-global proc */
{
A68_36  FWVATRN_sysfault;
A68_54 * EXVATRN_environ_specs;
A68_240 ** DXVATRN_environ;
A68_240 * Newenv;
A68_423  QAWATRN_contains_diagnostics;
A68_237 * Fdec;
A68_469  BNXATRN_make_let;
A68_236  DWVATRN_nullnametype;
A68_464  UJXATRN_add_step;
A68_467  FLXATRN_add_nametype;
A68_450  LAXATRN_make_unitlink;
A68_427  EHXATRN_unitlink_source;
A68_427  KHXATRN_unitlink_sink;
A68_446  JVWATRN_transform_unit;
A68_466  GKXATRN_add_join;
} OAYATRN_uinst_fntype;
typedef struct   /* env of non-global proc */
{
A68_480  SZXATRN_uname_fntype;
A68_372  MAYATRN_uinst_fntype;
A68_372  QDYATRN_unit_fntype;
A68_423  QAWATRN_contains_diagnostics;
A68_237 * Fdec;
A68_240 ** DXVATRN_environ;
A68_419  GXVATRN_has_type_fntype;
A68_400  IJXATRN_start_series;
A68_479  FVXATRN_series_fntype;
A68_446  JVWATRN_transform_unit;
A68_463  NJXATRN_finish_series;
} SDYATRN_unit_fntype;
typedef struct   /* env of non-global proc */
{
A68_467  FLXATRN_add_nametype;
A68_236  DWVATRN_nullnametype;
A68_470  RNXATRN_names_nameno;
} WFYATRN_terminals_fntype;
typedef struct   /* env of non-global proc */
{
A68_446  JVWATRN_transform_unit;
A68_466  GKXATRN_add_join;
} JGYATRN_output_fntype;
typedef struct   /* env of non-global proc */
{
A68_457  DIXATRN_unitlink;
A68_237 * Fdec;
A68_353 * NCWATRN_swap_tfn;
A68_469  BNXATRN_make_let;
A68_460  UIXATRN_add_seqstep;
A68_464  UJXATRN_add_step;
} DHYATRN_add_terminal_names;
typedef struct   /* env of non-global proc */
{
A68_427  EHXATRN_unitlink_source;
A68_427  KHXATRN_unitlink_sink;
A68_353 * RBWATRN_swap_ufn;
A68_400  IJXATRN_start_series;
A68_484  BHYATRN_add_terminal_names;
A68_237 * Fdec;
A68_479  FVXATRN_series_fntype;
A68_483  HGYATRN_output_fntype;
A68_463  NJXATRN_finish_series;
A68_400  LIXATRN_start_sequence;
A68_461  AJXATRN_add_sequence;
A68_469  BNXATRN_make_let;
A68_236  DWVATRN_nullnametype;
A68_460  UIXATRN_add_seqstep;
A68_459  OIXATRN_finish_sequence;
A68_446  JVWATRN_transform_unit;
A68_BOOL * DJXATRN_serieschanged;
A68_464  UJXATRN_add_step;
} LIYATRN_fnbody_fntype;
typedef struct   /* env of non-global proc */
{
A68_470  RNXATRN_names_nameno;
} PMYATRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_240 * APYATRN_newenv;
} EPYATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_240 * APYATRN_newenv;
} LPYATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_243 * ZPYATRN_types;
A68_486  LOYATRN_typedec_fntype;
A68_BOOL * XPYATRN_tc;
A68_54  OPYATRN_updated;
A68_245 * AQYATRN_fns;
A68_456  THXATRN_fndec_fntype;
A68_240 * APYATRN_newenv;
A68_BOOL * YPYATRN_fc;
} FQYATRN_declaration;
typedef struct   /* env of non-global proc */
{
A68_245 * AQYATRN_fns;
} ISYATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_243 * ZPYATRN_types;
} WSYATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  JLXATRN_max;
A_PAD_INT(PAD_139)
} PLXATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  JLXATRN_max;
A_PAD_INT(PAD_140)
} WLXATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_237 * Fdec;
A68_467  FLXATRN_add_nametype;
A68_478  BSXATRN_make_names;
} DSXATRN_make_names;
typedef struct   /* env of non-global proc */
{
A68_243 * ZPYATRN_types;
} SQYATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_245 * AQYATRN_fns;
} JRYATRN_generator;

A68_VOID  XUVATRN_fntype_keep_ufn(A68_401  *ReturnedValue);

A68_VOID  HVVATRN_transform_fntypes(A68_250 * Oldclosure, A68_401  Options, A68_97  Msg, A68_352  *ReturnedValue);

A_STATIC A68_VOID  LVVATRN_null_formulas(A68_135 * F, A68_353 * Tprocs, A68_315  *ReturnedValue);

A_STATIC A68_VOID  GWVATRN_sysfault(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  LWVATRN_make_name(A68_VC  Name, A68_INT  No, A68_VC  *ReturnedValue);

A_STATIC A68_BOOL  HXVATRN_has_type_fntype(A68_139  T, void *NonLocals);

A_STATIC A68_VOID  AYVATRN_generator(A68_BOOL  YXVATRN_anonymous, A68_54  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MYVATRN_anonymous(A68_161  U, A68_353 * Tp, A68_329  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  BZVATRN_pre_pass_outerfn(A68_246  O, void *NonLocals);

A_STATIC A68_VOID  EAWATRN_anonymous(A68_161  Unit, A68_353 * Tprocs, A68_329  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  RAWATRN_contains_diagnostics(A68_161  U, void *NonLocals);

A_STATIC A68_VOID  YAWATRN_anonymous(A68_161  Unit, A68_353 * Tprocs, A68_329  *ReturnedValue);

A_STATIC A68_VOID  UBWATRN_anonymous(A68_139  Type, A68_353 * Tprocs, A68_320  *ReturnedValue);

A_STATIC A68_BOOL  QCWATRN_has_unit_null(A68_161  U, void *NonLocals);

A_STATIC A68_VOID  CDWATRN_unit_trim(A68_329  Unitc, A68_123  Flwb, A68_123  Fupb, A68_329  *ReturnedValue);

A_STATIC A68_BOOL  OEWATRN_is_null_void(A68_161  U);

A_STATIC A68_VOID  TEWATRN_remove_null_elem(A68_161  U, A68_161  *ReturnedValue, void *NonLocals);

A_STATIC A68_428  TFWATRN_remove_null_void(A68_161  A, A68_161  B, void *NonLocals);

A_STATIC A68_VOID  TGWATRN_anonymous(A68_161  Unit, A68_353 * Tprocs, A68_329  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  KHWATRN_extra_step(A68_161  U, void *NonLocals);

A_STATIC A68_166 * RHWATRN_unit_uname(A68_161  U, void *NonLocals);

A_STATIC A68_INT  GIWATRN_unit_nameno(A68_161  U, void *NonLocals);

A_STATIC A68_VOID  PIWATRN_remove_named_fntype(A68_139  Type, A68_353 * Tprocs, A68_320  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  IJWATRN_add_reform(A68_143 * Tfn, A68_240 * Newenv);

A_STATIC A68_VOID  PJWATRN_generator(A68_BOOL  NJWATRN_anonymous, A68_239  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HKWATRN_generator(A68_BOOL  FKWATRN_anonymous, A68_245  *ReturnedValue, void *NonLocals);

A_STATIC A68_143 * ILWATRN_trans_type(A68_139  T, A68_BOOL  Source, void *NonLocals);

A_STATIC A68_VOID  MLWATRN_tstr_type(A68_142 * Tst, A68_139  *ReturnedValue);

A_STATIC A68_142 * RLWATRN_make_tstr(A68_139  Ty);

A_STATIC A68_VOID  ZLWATRN_append_tstr(A68_139  A, A68_139  B, A68_139  *ReturnedValue);

A_STATIC A68_143 * APWATRN_transform_type(A68_139  T, void *NonLocals);

A_STATIC A68_167 * GPWATRN_trans_unit(A68_161  U, A68_BOOL  Issource, void *NonLocals);

A_STATIC A68_VOID  KPWATRN_ustr_unit(A68_176 * Ust, A68_161  *ReturnedValue);

A_STATIC A68_176 * PPWATRN_make_ustr(A68_161  U);

A_STATIC A68_VOID  XPWATRN_append_ustr(A68_161  A, A68_161  B, A68_161  *ReturnedValue);

A_STATIC A68_167 * KVWATRN_transform_unit(A68_161  U, void *NonLocals);

A_STATIC A68_VOID  QVWATRN_anonymous(A68_161  Unit, A68_353 * Tp, A68_329  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FWWATRN_uchoices(A68_221 * U, A68_353 * Tprocs, A68_328  *ReturnedValue);

A_STATIC A68_VOID  VWWATRN_seqchoices(A68_220 * Sc, A68_353 * Tprocs, A68_339  *ReturnedValue);

A_STATIC A68_VOID  MXWATRN_anonymous(A68_161  Unit, A68_353 * Tp, A68_329  *ReturnedValue);

A_STATIC A68_VOID  GYWATRN_remove_ufn(A68_161  U, A68_329  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  UYWATRN_anonymous(A68_139  Type, A68_353 * Tp, A68_320  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JZWATRN_anonymous(A68_139  Type, A68_353 * Tp, A68_320  *ReturnedValue);

A_STATIC A68_VOID  XZWATRN_remove_tfn(A68_139  T, A68_320  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MAXATRN_make_unitlink(A68_139  Ty, A68_161  Source, A68_161  Sink, A68_161  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  SAXATRN_is_same_sort(A68_139  Ty, A68_BOOL  Sort, void *NonLocals);

A_STATIC A68_135 * NBXATRN_add_ind(A68_INT * Ind, A68_135 * Inds, A68_BOOL  Add);

A_STATIC A68_VOID  WBXATRN_make_uindex(A68_BOOL  Issource, A68_135 * Inds, A68_161  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ICXATRN_type_unit(A68_139  T, A68_BOOL  Issource, A68_135 * So_inds, A68_135 * Si_inds, A68_161  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XFXATRN_anonymous(A68_161  Unit, A68_353 * Tprocs, A68_329  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  YGXATRN_coerce_ufn(A68_161  U, A68_INT  Seed_sort, A68_329  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FHXATRN_unitlink_source(A68_161  U, A68_161  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  LHXATRN_unitlink_sink(A68_161  U, A68_161  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  UHXATRN_fndec_fntype(A68_237 * Fdec, A68_353 * Tprocs, A68_INT  Fnno, A68_240 * Newenv, A68_350  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZHXATRN_generator(A68_BOOL  XHXATRN_anonymous, A68_457  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MIXATRN_start_sequence(void *NonLocals);

A_STATIC A68_VOID  PIXATRN_finish_sequence(A68_341  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VIXATRN_add_seqstep(A68_340  Sc, void *NonLocals);

A_STATIC A68_VOID  BJXATRN_add_sequence(A68_341  Sc, void *NonLocals);

A_STATIC A68_VOID  JJXATRN_start_series(void *NonLocals);

A_STATIC A68_VOID  OJXATRN_finish_series(A68_346  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VJXATRN_add_step(A68_345  Sc, void *NonLocals);

A_STATIC A68_VOID  BKXATRN_add_series(A68_346  Sc, void *NonLocals);

A_STATIC A68_VOID  HKXATRN_add_join(A68_161  Lhs, A68_161  Rhs, A68_BOOL  Changed, void *NonLocals);

A_STATIC A68_INT  GLXATRN_add_nametype(A68_INT  Oldindex, A68_BOOL  Newname, A68_236  Oldnt, A68_320  Tc, void *NonLocals);

A_STATIC A68_VOID  OLXATRN_generator(A68_BOOL  MLXATRN_anonymous, A68_239  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VLXATRN_generator(A68_BOOL  TLXATRN_anonymous, A68_239  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MMXATRN_remove_let_ufn(A68_202 * Ns, A68_161  U, A68_161  *ReturnedValue, void *NonLocals);

A_STATIC A68_195 * CNXATRN_make_let(A68_236  Nt, A68_161  Value, A68_139  T, void *NonLocals);

A_STATIC A68_VOID  SNXATRN_names_nameno(A68_202 * Namelist, A68_353 * Tprocs, A68_BOOL  Source, A68_337  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZOXATRN_let_unitlink(A68_202 * Names, A68_161  U, void *NonLocals);

A_STATIC A68_VOID  SPXATRN_let_fntype(A68_195 * L, A68_353 * Tprocs, void *NonLocals);

A_STATIC A68_VOID  LQXATRN_join_fntype(A68_197 * Jn, A68_353 * Tprocs, void *NonLocals);

A_STATIC A68_VOID  YQXATRN_repljoin_fntype(A68_198 * Rj, A68_353 * Tprocs, void *NonLocals);

A_STATIC A68_VOID  WRXATRN_make_fntype(A68_196 * Make, A68_353 * Tprocs, void *NonLocals);

A_STATIC A68_VOID  CSXATRN_make_names(A68_202 * Nlist, A68_320  Tc, A68_337  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GVXATRN_series_fntype(A68_190 * Ser, A68_353 * Tprocs, void *NonLocals);

A_STATIC A68_VOID  ZVXATRN_seq_unit(A68_161  U, A68_353 * Tprocs, A68_329  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OWXATRN_seqstep_fntype(A68_210  Ss, A68_353 * Tprocs, A68_340  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  AZXATRN_sequence_fntype(A68_209 * Ss, A68_353 * Tprocs, A68_341  *ReturnedValue);

A_STATIC A68_VOID  TZXATRN_uname_fntype(A68_166 * Un, A68_329  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NAYATRN_uinst_fntype(A68_161  Uinst, A68_353 * Tprocs, A68_329  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RDYATRN_unit_fntype(A68_161  Unit, A68_353 * Tprocs, A68_329  *ReturnedValue, void *NonLocals);

A_STATIC A68_202 * VFYATRN_terminals_fntype(A68_202 * Terminals, A68_353 * Tprocs, A68_BOOL  Input, A68_320  Tc, void *NonLocals);

A_STATIC A68_VOID  IGYATRN_output_fntype(A68_161  Output, A68_353 * Tprocs, A68_161  Outputlink, A68_BOOL  Specchanged, A68_329  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CHYATRN_add_terminal_names(A68_202 * Ts, A68_353 * Tprocs, A68_161  Link, A68_BOOL  Input, A68_BOOL  Seq, void *NonLocals);

A_STATIC A68_VOID  KIYATRN_fnbody_fntype(A68_233  Fnbody, A68_353 * Tprocs, A68_BOOL  Specchanged, A68_161  Link, A68_143 * Spectype, A68_240 * Newenv, A68_347  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OMYATRN_anonymous(A68_202 * N, A68_353 * Tp, A68_337  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MOYATRN_typedec_fntype(A68_154 * Tdec, A68_324  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  YOYATRN_outerfn_fntype(A68_246  Ofn, A68_353 * Tprocs, A68_351  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DPYATRN_generator(A68_BOOL  BPYATRN_anonymous, A68_54  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KPYATRN_generator(A68_BOOL  IPYATRN_anonymous, A68_54  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  EQYATRN_declaration(A68_222  Dec, A68_353 * Tprocs, A68_333  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RQYATRN_generator(A68_BOOL  PQYATRN_anonymous, A68_243  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IRYATRN_generator(A68_BOOL  GRYATRN_anonymous, A68_245  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HSYATRN_generator(A68_BOOL  FSYATRN_anonymous, A68_245  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VSYATRN_generator(A68_BOOL  TSYATRN_anonymous, A68_243  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OLXATRN_generator(A68_BOOL  MLXATRN_anonymous, A68_239  *ReturnedValue, void *NonLocals)
#define NL(x) (((PLXATRN_generator *)NonLocals)->x)
{ 
A68_239  QLXATRN;  /* clause result */
A68_239  RLXATRN;  /* OPERATORS - dynamic generator */
{ 
RLXATRN.upb = NL(JLXATRN_max) ;
( MLXATRN_anonymous? A_VLOC(A68_236 ,RLXATRN): A_VHEAP(A68_236 ,RLXATRN) );
QLXATRN = RLXATRN;
} 
*ReturnedValue = (QLXATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  VLXATRN_generator(A68_BOOL  TLXATRN_anonymous, A68_239  *ReturnedValue, void *NonLocals)
#define NL(x) (((WLXATRN_generator *)NonLocals)->x)
{ 
A68_239  XLXATRN;  /* clause result */
A68_239  YLXATRN;  /* OPERATORS - dynamic generator */
{ 
YLXATRN.upb = (NL(JLXATRN_max)+10) ;
( TLXATRN_anonymous? A_VLOC(A68_236 ,YLXATRN): A_VHEAP(A68_236 ,YLXATRN) );
XLXATRN = YLXATRN;
} 
*ReturnedValue = (XLXATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  CSXATRN_make_names(A68_202 * Nlist, A68_320  Tc, A68_337  *ReturnedValue, void *NonLocals)
#define NL(x) (((DSXATRN_make_names *)NonLocals)->x)
{ 
A68_337  ESXATRN;  /* collateral clause result */
A68_337  FSXATRN;  /* clause result */
A68_239  GSXATRN;  /* OPERATORS - simple index */
A68_INT  HSXATRN;  /* YIELD */
A68_236  ISXATRN_nt;
A68_INT  JSXATRN_newnameno;
A68_337  KSXATRN;  /* avoid structure result */
A68_337  LSXATRN_rest;
A68_BOOL  MSXATRN;  /* optbool result */
A68_337  NSXATRN;  /* collateral clause result */
A68_202  OSXATRN;  /* collateral clause result */
A68_202 * PSXATRN;  /* YIELD */
A68_337  QSXATRN;  /* collateral clause result */
A_PROC_ENTRY(make_names);
 /* line 1149: */
{ 
 /* line 1150: */
if ( (Nlist==NAAATRN_nilnames) )
{ 
ESXATRN.N = NAAATRN_nilnames;
 /* line 1151: */
ESXATRN.C = A68_FALSE;
FSXATRN = ESXATRN;
} 
else
{ 
GSXATRN = (*(&(NL(Fdec)->Nametypes))) ;
HSXATRN = (*(&(Nlist->Nameno))) ;
ISXATRN_nt = (*(&A_VINDEX(GSXATRN,HSXATRN)));
 /* line 1152: */
JSXATRN_newnameno = A_CALLPROC(NL(FLXATRN_add_nametype),((*(&(Nlist->Nameno))), A68_FALSE, ISXATRN_nt, Tc),((*(&(Nlist->Nameno))), A68_FALSE, ISXATRN_nt, Tc,(NL(FLXATRN_add_nametype)).nonlocals));
 /* line 1153: */
A_CALLPROC(NL(BSXATRN_make_names),((*(&(Nlist->Rest))), Tc, &KSXATRN),((*(&(Nlist->Rest))), Tc, &KSXATRN,(NL(BSXATRN_make_names)).nonlocals));
LSXATRN_rest = KSXATRN;
 /* line 1154: */
MSXATRN = LSXATRN_rest.C;
if ( ! MSXATRN )
{ /* line 1155: */
MSXATRN = ((*(&(Nlist->Nameno)))!=JSXATRN_newnameno);
}
if ( MSXATRN )
{ 
OSXATRN.Nameno = JSXATRN_newnameno;
OSXATRN.Rest = LSXATRN_rest.N;
PSXATRN = A_HEAP(A68_202 ) ;
(*PSXATRN) = OSXATRN ;
NSXATRN.N = PSXATRN;
 /* line 1156: */
NSXATRN.C = A68_TRUE;
FSXATRN = NSXATRN;
} 
else
{ 
QSXATRN.N = Nlist;
 /* line 1157: */
 /* line 1158: */
 /* line 1159: */
QSXATRN.C = A68_FALSE;
FSXATRN = QSXATRN;
} 
} 
} 
A_PROC_EXIT(make_names);
*ReturnedValue = (FSXATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  RQYATRN_generator(A68_BOOL  PQYATRN_anonymous, A68_243  *ReturnedValue, void *NonLocals)
#define NL(x) (((SQYATRN_generator *)NonLocals)->x)
{ 
A68_243  TQYATRN;  /* clause result */
A68_243  UQYATRN;  /* OPERATORS - dynamic generator */
{ 
UQYATRN.upb = (*NL(ZPYATRN_types)).upb ;
( PQYATRN_anonymous? A_VLOC(A68_154 *,UQYATRN): A_VHEAP(A68_154 *,UQYATRN) );
TQYATRN = UQYATRN;
} 
*ReturnedValue = (TQYATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  IRYATRN_generator(A68_BOOL  GRYATRN_anonymous, A68_245  *ReturnedValue, void *NonLocals)
#define NL(x) (((JRYATRN_generator *)NonLocals)->x)
{ 
A68_245  KRYATRN;  /* clause result */
A68_245  LRYATRN;  /* OPERATORS - dynamic generator */
{ 
LRYATRN.upb = (*NL(AQYATRN_fns)).upb ;
( GRYATRN_anonymous? A_VLOC(A68_237 *,LRYATRN): A_VHEAP(A68_237 *,LRYATRN) );
KRYATRN = LRYATRN;
} 
*ReturnedValue = (KRYATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  PJWATRN_generator(A68_BOOL  NJWATRN_anonymous, A68_239  *ReturnedValue, void *NonLocals)
#define NL(x) (((QJWATRN_generator *)NonLocals)->x)
{ 
A68_239  RJWATRN;  /* clause result */
A68_239  SJWATRN;  /* OPERATORS - dynamic generator */
{ 
SJWATRN.upb = 2 ;
( NJWATRN_anonymous? A_VLOC(A68_236 ,SJWATRN): A_VHEAP(A68_236 ,SJWATRN) );
RJWATRN = SJWATRN;
} 
*ReturnedValue = (RJWATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  HKWATRN_generator(A68_BOOL  FKWATRN_anonymous, A68_245  *ReturnedValue, void *NonLocals)
#define NL(x) (((IKWATRN_generator *)NonLocals)->x)
{ 
A68_245  JKWATRN;  /* clause result */
A68_245  KKWATRN;  /* OPERATORS - dynamic generator */
{ 
KKWATRN.upb = ((*NL(EKWATRN_max))+1) ;
( FKWATRN_anonymous? A_VLOC(A68_237 *,KKWATRN): A_VHEAP(A68_237 *,KKWATRN) );
JKWATRN = KKWATRN;
} 
*ReturnedValue = (JKWATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  MLWATRN_tstr_type(A68_142 * Tst, A68_139  *ReturnedValue)
{ 
A68_139  NLWATRN;  /* clause result */
A68_139  OLWATRN;  /* OPERATORS - mode -> union mode */
A68_139  PLWATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(tstr_type);
 /* line 444: */
 /* line 445: */
if ( (Tst==GAAATRN_niltstr) )
{ 
NLWATRN = A_UNITE(OLWATRN,mode9,9,(&DIAATRN_tnull));
} 
else
{ 
 /* line 446: */
if ( ((*(&(Tst->Rest)))==GAAATRN_niltstr) )
{ 
 /* line 447: */
NLWATRN = (*(&(Tst->Elem)));
} 
else
{ 
NLWATRN = A_UNITE(PLWATRN,mode3,3,Tst);
} 
} 
A_PROC_EXIT(tstr_type);
*ReturnedValue = (NLWATRN);
return;
} 
#undef NL

A_STATIC A68_142 * RLWATRN_make_tstr(A68_139  Ty)
{ 
A68_139  SLWATRN;  /* united object - for case conformity */
A68_142 * TLWATRN_ts;
A68_142 * ULWATRN;  /* clause result */
A68_142  VLWATRN;  /* collateral clause result */
A68_142 * WLWATRN;  /* YIELD */
A_PROC_ENTRY(make_tstr);
 /* line 450: */
SLWATRN = Ty ;
switch ( SLWATRN.mode )
{ 
case 3: /* REF STRUCT(MODE139,REF MODE142)  */
TLWATRN_ts = (SLWATRN.data.mode3);
ULWATRN = TLWATRN_ts;
break;
default: 
VLWATRN.Elem = Ty;
VLWATRN.Rest = GAAATRN_niltstr;
WLWATRN = A_HEAP(A68_142 ) ;
(*WLWATRN) = VLWATRN ;
ULWATRN = WLWATRN;
break;
} 
A_PROC_EXIT(make_tstr);
return( ULWATRN );
} 
#undef NL

A_STATIC A68_VOID  ZLWATRN_append_tstr(A68_139  A, A68_139  B, A68_139  *ReturnedValue)
{ 
A68_139  AMWATRN;  /* united object - for case conformity */
A68_139  BMWATRN;  /* clause result */
A68_139  CMWATRN;  /* united object - for case conformity */
A68_142  DMWATRN;  /* collateral clause result */
A68_142  EMWATRN;  /* collateral clause result */
A68_142 * FMWATRN;  /* YIELD */
A68_142 * GMWATRN;  /* YIELD */
A68_139  HMWATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(append_tstr);
 /* line 453: */
AMWATRN = B ;
switch ( AMWATRN.mode )
{ 
case 9: /* REF STRUCT(INT)  */
 /* line 454: */
BMWATRN = A;
break;
default: 
CMWATRN = A ;
switch ( CMWATRN.mode )
{ 
case 9: /* REF STRUCT(INT)  */
 /* line 455: */
BMWATRN = B;
break;
default: 
DMWATRN.Elem = A;
EMWATRN.Elem = B;
EMWATRN.Rest = GAAATRN_niltstr;
 /* line 456: */
FMWATRN = A_HEAP(A68_142 ) ;
(*FMWATRN) = EMWATRN ;
DMWATRN.Rest = FMWATRN;
GMWATRN = A_HEAP(A68_142 ) ;
(*GMWATRN) = DMWATRN ;
BMWATRN = A_UNITE(HMWATRN,mode3,3,GMWATRN);
break;
} 
break;
} 
A_PROC_EXIT(append_tstr);
*ReturnedValue = (BMWATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  KPWATRN_ustr_unit(A68_176 * Ust, A68_161  *ReturnedValue)
{ 
A68_161  LPWATRN;  /* clause result */
A68_161  MPWATRN;  /* OPERATORS - mode -> union mode */
A68_161  NPWATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(ustr_unit);
 /* line 534: */
 /* line 535: */
if ( (Ust==IAAATRN_nilustr) )
{ 
LPWATRN = A_UNITE(MPWATRN,mode34,34,(&FIAATRN_unull));
} 
else
{ 
 /* line 536: */
if ( ((*(&(Ust->Rest)))==IAAATRN_nilustr) )
{ 
 /* line 537: */
LPWATRN = (*(&(Ust->Elem)));
} 
else
{ 
LPWATRN = A_UNITE(NPWATRN,mode21,21,Ust);
} 
} 
A_PROC_EXIT(ustr_unit);
*ReturnedValue = (LPWATRN);
return;
} 
#undef NL

A_STATIC A68_176 * PPWATRN_make_ustr(A68_161  U)
{ 
A68_161  QPWATRN;  /* united object - for case conformity */
A68_176 * RPWATRN_us;
A68_176 * SPWATRN;  /* clause result */
A68_176  TPWATRN;  /* collateral clause result */
A68_176 * UPWATRN;  /* YIELD */
A_PROC_ENTRY(make_ustr);
 /* line 540: */
QPWATRN = U ;
switch ( QPWATRN.mode )
{ 
case 21: /* REF STRUCT(MODE161,REF MODE176)  */
RPWATRN_us = (QPWATRN.data.mode21);
SPWATRN = RPWATRN_us;
break;
default: 
TPWATRN.Elem = U;
TPWATRN.Rest = IAAATRN_nilustr;
UPWATRN = A_HEAP(A68_176 ) ;
(*UPWATRN) = TPWATRN ;
SPWATRN = UPWATRN;
break;
} 
A_PROC_EXIT(make_ustr);
return( SPWATRN );
} 
#undef NL

A_STATIC A68_VOID  XPWATRN_append_ustr(A68_161  A, A68_161  B, A68_161  *ReturnedValue)
{ 
A68_161  YPWATRN;  /* united object - for case conformity */
A68_161  ZPWATRN;  /* clause result */
A68_161  AQWATRN;  /* united object - for case conformity */
A68_176  BQWATRN;  /* collateral clause result */
A68_176  CQWATRN;  /* collateral clause result */
A68_176 * DQWATRN;  /* YIELD */
A68_176 * EQWATRN;  /* YIELD */
A68_161  FQWATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(append_ustr);
 /* line 543: */
YPWATRN = B ;
switch ( YPWATRN.mode )
{ 
case 34: /* REF STRUCT(INT)  */
 /* line 544: */
ZPWATRN = A;
break;
default: 
AQWATRN = A ;
switch ( AQWATRN.mode )
{ 
case 34: /* REF STRUCT(INT)  */
 /* line 545: */
ZPWATRN = B;
break;
default: 
BQWATRN.Elem = A;
CQWATRN.Elem = B;
CQWATRN.Rest = IAAATRN_nilustr;
 /* line 546: */
DQWATRN = A_HEAP(A68_176 ) ;
(*DQWATRN) = CQWATRN ;
BQWATRN.Rest = DQWATRN;
EQWATRN = A_HEAP(A68_176 ) ;
(*EQWATRN) = BQWATRN ;
ZPWATRN = A_UNITE(FQWATRN,mode21,21,EQWATRN);
break;
} 
break;
} 
A_PROC_EXIT(append_ustr);
*ReturnedValue = (ZPWATRN);
return;
} 
#undef NL

A_STATIC A68_BOOL  SAXATRN_is_same_sort(A68_139  Ty, A68_BOOL  Sort, void *NonLocals)
#define NL(x) (((TAXATRN_is_same_sort *)NonLocals)->x)
{ 
A68_139  UAXATRN;  /* united object - for case conformity */
A68_140 * VAXATRN_tn;
A68_243  WAXATRN;  /* OPERATORS - simple index */
A68_INT  XAXATRN;  /* YIELD */
A68_152  YAXATRN;  /* united object - for case conformity */
A68_148 * ZAXATRN_tg;
A68_BOOL  ABXATRN;  /* clause result */
A68_143 * BBXATRN_tf;
A68_BOOL  CBXATRN;  /* optbool result */
A68_142 * DBXATRN_ts;
A68_BOOL  EBXATRN;  /* optbool result */
A68_BOOL  FBXATRN;  /* optbool result */
A68_139  GBXATRN;  /* OPERATORS - mode -> union mode */
A68_142 * HBXATRN;  /* YIELD */
A68_141 * IBXATRN_tr;
A68_144 * JBXATRN_tb;
A_PROC_ENTRY(is_same_sort);
 /* line 748: */
 /* line 749: */
UAXATRN = Ty ;
switch ( UAXATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
VAXATRN_tn = (UAXATRN.data.mode1);
 /* line 750: */
{ 
 /* line 751: */
WAXATRN = (*(&((*NL(DXVATRN_environ))->Types))) ;
XAXATRN = (*(&(VAXATRN_tn->Typeno))) ;
YAXATRN = (*(&((*(&A_VINDEX(WAXATRN,XAXATRN)))->Body))) ;
switch ( YAXATRN.mode )
{ 
case 3: /* REF STRUCT(MODE139)  */
ZAXATRN_tg = (YAXATRN.data.mode3);
 /* line 752: */
 /* line 753: */
ABXATRN = A_CALLPROC(NL(RAXATRN_is_same_sort),((*(&(ZAXATRN_tg->Tag))), Sort),((*(&(ZAXATRN_tg->Tag))), Sort,(NL(RAXATRN_is_same_sort)).nonlocals));
break;
default: 
 /* line 754: */
 /* line 755: */
ABXATRN = Sort;
break;
} 
} 
break;
case 4: /* REF STRUCT(MODE139,MODE139)  */
BBXATRN_tf = (UAXATRN.data.mode4);
 /* line 756: */
CBXATRN = A_CALLPROC(NL(RAXATRN_is_same_sort),((*(&(BBXATRN_tf->To))), Sort),((*(&(BBXATRN_tf->To))), Sort,(NL(RAXATRN_is_same_sort)).nonlocals));
if ( ! CBXATRN )
{CBXATRN = A_CALLPROC(NL(RAXATRN_is_same_sort),((*(&(BBXATRN_tf->From))), !Sort),((*(&(BBXATRN_tf->From))), !Sort,(NL(RAXATRN_is_same_sort)).nonlocals));
}
 /* line 757: */
ABXATRN = CBXATRN;
break;
case 3: /* REF STRUCT(MODE139,REF MODE142)  */
DBXATRN_ts = (UAXATRN.data.mode3);
 /* line 758: */
 /* line 759: */
EBXATRN = (DBXATRN_ts!=GAAATRN_niltstr);
if ( EBXATRN )
{FBXATRN = A_CALLPROC(NL(RAXATRN_is_same_sort),((*(&(DBXATRN_ts->Elem))), Sort),((*(&(DBXATRN_ts->Elem))), Sort,(NL(RAXATRN_is_same_sort)).nonlocals));
if ( ! FBXATRN )
{HBXATRN = (*(&(DBXATRN_ts->Rest))) ;
FBXATRN = A_CALLPROC(NL(RAXATRN_is_same_sort),(A_UNITE(GBXATRN,mode3,3,HBXATRN), Sort),(A_UNITE(GBXATRN,mode3,3,HBXATRN), Sort,(NL(RAXATRN_is_same_sort)).nonlocals));
}
EBXATRN = FBXATRN;
}
 /* line 760: */
ABXATRN = EBXATRN;
break;
case 2: /* REF STRUCT(MODE123,MODE139)  */
IBXATRN_tr = (UAXATRN.data.mode2);
 /* line 761: */
ABXATRN = A_CALLPROC(NL(RAXATRN_is_same_sort),((*(&(IBXATRN_tr->Elem))), Sort),((*(&(IBXATRN_tr->Elem))), Sort,(NL(RAXATRN_is_same_sort)).nonlocals));
break;
case 5: /* REF STRUCT(MODE139)  */
JBXATRN_tb = (UAXATRN.data.mode5);
 /* line 762: */
 /* line 763: */
ABXATRN = A_CALLPROC(NL(RAXATRN_is_same_sort),((*(&(JBXATRN_tb->Type))), Sort),((*(&(JBXATRN_tb->Type))), Sort,(NL(RAXATRN_is_same_sort)).nonlocals));
break;
default: 
ABXATRN = Sort;
break;
} 
A_PROC_EXIT(is_same_sort);
return( ABXATRN );
} 
#undef NL

A_STATIC A68_135 * NBXATRN_add_ind(A68_INT * Ind, A68_135 * Inds, A68_BOOL  Add)
{ 
A68_135  OBXATRN;  /* collateral clause result */
A68_123  PBXATRN;  /* OPERATORS - mode -> union mode */
A68_124 * QBXATRN;  /* YIELD */
A68_135 * RBXATRN;  /* clause result */
A68_135 * SBXATRN;  /* YIELD */
A_PROC_ENTRY(add_ind);
 /* line 766: */
 /* line 767: */
if ( Add )
{ 
QBXATRN = NNMATRN_makefint((*Ind)+=1) ;
OBXATRN.Formula = A_UNITE(PBXATRN,mode1,1,QBXATRN);
 /* line 768: */
OBXATRN.Rest = Inds;
 /* line 769: */
SBXATRN = A_HEAP(A68_135 ) ;
(*SBXATRN) = OBXATRN ;
RBXATRN = SBXATRN;
} 
else
{ 
RBXATRN = Inds;
} 
A_PROC_EXIT(add_ind);
return( RBXATRN );
} 
#undef NL

A_STATIC A68_VOID  WBXATRN_make_uindex(A68_BOOL  Issource, A68_135 * Inds, A68_161  *ReturnedValue, void *NonLocals)
#define NL(x) (((XBXATRN_make_uindex *)NonLocals)->x)
{ 
A68_161  YBXATRN;  /* clause result */
A68_171  ZBXATRN;  /* collateral clause result */
A68_161  ACXATRN;  /* avoid structure result */
A68_171 * BCXATRN;  /* YIELD */
A68_161  CCXATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(make_uindex);
 /* line 772: */
 /* line 773: */
if ( (Inds==BBAATRN_nilformulas) )
{ 
if ( Issource )
{ 
YBXATRN = NL(Source);
} 
else
{ 
 /* line 774: */
YBXATRN = NL(Sink);
} 
} 
else
{ 
A_CALLPROC(NL(VBXATRN_make_uindex),(Issource, (*(&(Inds->Rest))), &ACXATRN),(Issource, (*(&(Inds->Rest))), &ACXATRN,(NL(VBXATRN_make_uindex)).nonlocals));
ZBXATRN.Unit = ACXATRN;
 /* line 775: */
ZBXATRN.Index = (*(&(Inds->Formula)));
BCXATRN = A_HEAP(A68_171 ) ;
(*BCXATRN) = ZBXATRN ;
YBXATRN = A_UNITE(CCXATRN,mode16,16,BCXATRN);
} 
A_PROC_EXIT(make_uindex);
*ReturnedValue = (YBXATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ICXATRN_type_unit(A68_139  T, A68_BOOL  Issource, A68_135 * So_inds, A68_135 * Si_inds, A68_161  *ReturnedValue, void *NonLocals)
#define NL(x) (((JCXATRN_type_unit *)NonLocals)->x)
{ 
A68_139  KCXATRN;  /* united object - for case conformity */
A68_140 * LCXATRN_tn;
A68_243  MCXATRN;  /* OPERATORS - simple index */
A68_INT  NCXATRN;  /* YIELD */
A68_152  OCXATRN;  /* united object - for case conformity */
A68_148 * PCXATRN_tg;
A68_161  QCXATRN;  /* clause result */
A68_161  RCXATRN;  /* avoid structure result */
A68_135 * SCXATRN;  /* clause result */
A68_161  TCXATRN;  /* avoid structure result */
A68_135 * UCXATRN;  /* clause result */
A68_161  VCXATRN;  /* avoid structure result */
A68_143 * WCXATRN_tf;
A68_INT  XCXATRN_f_so;
A68_INT  YCXATRN_f_si;
A68_BOOL  ZCXATRN;  /* optbool result */
A68_BOOL  ADXATRN_index_so;
A68_BOOL  BDXATRN;  /* optbool result */
A68_BOOL  CDXATRN_index_si;
A68_135 * DDXATRN_so_1;
A68_135 * EDXATRN_so_2;
A68_135 * FDXATRN_si_1;
A68_135 * GDXATRN_si_2;
A68_135 * HDXATRN;  /* clause result */
A68_135 * IDXATRN_to_so;
A68_135 * JDXATRN;  /* clause result */
A68_135 * KDXATRN_from_so;
A68_135 * LDXATRN;  /* clause result */
A68_135 * MDXATRN_from_si;
A68_135 * NDXATRN;  /* clause result */
A68_135 * ODXATRN_to_si;
A68_161  PDXATRN;  /* avoid structure result */
A68_161  QDXATRN_from;
A68_161  RDXATRN;  /* avoid structure result */
A68_161  SDXATRN_to;
A68_167  TDXATRN;  /* collateral clause result */
A68_167 * UDXATRN;  /* YIELD */
A68_161  VDXATRN;  /* OPERATORS - mode -> union mode */
A68_141 * WDXATRN_tr;
A68_176 * XDXATRN_ans;
A68_176 ** YDXATRN_nextans;
A68_INT  ZDXATRN_trsize;
A68_INT  AEXATRN_r_so;
A68_INT  BEXATRN_r_si;
A68_BOOL  CEXATRN_index_rso;
A68_BOOL  DEXATRN_index_rsi;
A68_INT  EEXATRN;  /* to part of loop */
A68_INT  FEXATRN;  /* loop control */
A68_135 * GEXATRN_row_so;
A68_135 * HEXATRN_row_si;
A68_161  IEXATRN;  /* avoid structure result */
A68_161  JEXATRN_elem;
A68_176  KEXATRN;  /* collateral clause result */
A68_176 * LEXATRN;  /* YIELD */
A68_175  MEXATRN;  /* collateral clause result */
A68_175 * NEXATRN;  /* YIELD */
A68_161  OEXATRN;  /* OPERATORS - mode -> union mode */
A68_161  PEXATRN;  /* OPERATORS - mode -> union mode */
A68_142 * QEXATRN_ts;
A68_142 * REXATRN_tst;
A68_176 * SEXATRN_ust;
A68_176 ** TEXATRN_nextitem;
A68_INT  UEXATRN_t_so;
A68_INT  VEXATRN_t_si;
A68_BOOL  WEXATRN;  /* optbool result */
A68_BOOL  XEXATRN;  /* optbool result */
A68_139  YEXATRN;  /* OPERATORS - mode -> union mode */
A68_142 * ZEXATRN;  /* YIELD */
A68_135 * AFXATRN_tst_so;
A68_BOOL  BFXATRN;  /* optbool result */
A68_BOOL  CFXATRN;  /* optbool result */
A68_139  DFXATRN;  /* OPERATORS - mode -> union mode */
A68_142 * EFXATRN;  /* YIELD */
A68_135 * FFXATRN_tst_si;
A68_161  GFXATRN;  /* avoid structure result */
A68_161  HFXATRN_elem;
A68_176  IFXATRN;  /* collateral clause result */
A68_176 * JFXATRN;  /* YIELD */
A68_161  KFXATRN;  /* OPERATORS - mode -> union mode */
A68_144 * LFXATRN_tb;
A68_161  MFXATRN;  /* avoid structure result */
A68_147 * NFXATRN_tn;
A68_161  OFXATRN;  /* OPERATORS - mode -> union mode */
A68_135 * PFXATRN;  /* clause result */
A68_161  QFXATRN;  /* avoid structure result */
A_PROC_ENTRY(type_unit);
 /* line 778: */
 /* line 779: */
{ 
 /* line 780: */
KCXATRN = T ;
switch ( KCXATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
LCXATRN_tn = (KCXATRN.data.mode1);
 /* line 781: */
{ 
 /* line 782: */
MCXATRN = (*(&((*NL(DXVATRN_environ))->Types))) ;
NCXATRN = (*(&(LCXATRN_tn->Typeno))) ;
OCXATRN = (*(&((*(&A_VINDEX(MCXATRN,NCXATRN)))->Body))) ;
switch ( OCXATRN.mode )
{ 
case 3: /* REF STRUCT(MODE139)  */
PCXATRN_tg = (OCXATRN.data.mode3);
 /* line 783: */
 /* line 784: */
if ( A_CALLPROC(NL(GXVATRN_has_type_fntype),((*(&(PCXATRN_tg->Tag)))),((*(&(PCXATRN_tg->Tag))),(NL(GXVATRN_has_type_fntype)).nonlocals)) )
{ 
 /* line 785: */
A_CALLPROC(NL(HCXATRN_type_unit),((*(&(PCXATRN_tg->Tag))), Issource, So_inds, Si_inds, &RCXATRN),((*(&(PCXATRN_tg->Tag))), Issource, So_inds, Si_inds, &RCXATRN,(NL(HCXATRN_type_unit)).nonlocals));
QCXATRN = RCXATRN;
} 
else
{ 
if ( Issource )
{ 
SCXATRN = So_inds;
} 
else
{ 
SCXATRN = Si_inds;
} 
 /* line 786: */
 /* line 787: */
A_CALLPROC(NL(VBXATRN_make_uindex),(Issource, SCXATRN, &TCXATRN),(Issource, SCXATRN, &TCXATRN,(NL(VBXATRN_make_uindex)).nonlocals));
QCXATRN = TCXATRN;
} 
break;
default: 
if ( Issource )
{ 
UCXATRN = So_inds;
} 
else
{ 
UCXATRN = Si_inds;
} 
 /* line 788: */
 /* line 789: */
 /* line 790: */
A_CALLPROC(NL(VBXATRN_make_uindex),(Issource, UCXATRN, &VCXATRN),(Issource, UCXATRN, &VCXATRN,(NL(VBXATRN_make_uindex)).nonlocals));
QCXATRN = VCXATRN;
break;
} 
} 
break;
case 4: /* REF STRUCT(MODE139,MODE139)  */
WCXATRN_tf = (KCXATRN.data.mode4);
 /* line 791: */
{ 
XCXATRN_f_so = 0;
YCXATRN_f_si = 0;
 /* line 792: */
 /* line 793: */
ZCXATRN = A_CALLPROC(NL(RAXATRN_is_same_sort),((*(&(WCXATRN_tf->From))), !Issource),((*(&(WCXATRN_tf->From))), !Issource,(NL(RAXATRN_is_same_sort)).nonlocals));
if ( ZCXATRN )
{ZCXATRN = A_CALLPROC(NL(RAXATRN_is_same_sort),((*(&(WCXATRN_tf->To))), Issource),((*(&(WCXATRN_tf->To))), Issource,(NL(RAXATRN_is_same_sort)).nonlocals));
}
ADXATRN_index_so = ZCXATRN;
 /* line 794: */
 /* line 795: */
BDXATRN = A_CALLPROC(NL(RAXATRN_is_same_sort),((*(&(WCXATRN_tf->From))), Issource),((*(&(WCXATRN_tf->From))), Issource,(NL(RAXATRN_is_same_sort)).nonlocals));
if ( BDXATRN )
{BDXATRN = A_CALLPROC(NL(RAXATRN_is_same_sort),((*(&(WCXATRN_tf->To))), !Issource),((*(&(WCXATRN_tf->To))), !Issource,(NL(RAXATRN_is_same_sort)).nonlocals));
}
CDXATRN_index_si = BDXATRN;
 /* line 798: */
 /* line 799: */
DDXATRN_so_1 = NBXATRN_add_ind((&XCXATRN_f_so), So_inds, ADXATRN_index_so);
 /* line 800: */
EDXATRN_so_2 = NBXATRN_add_ind((&XCXATRN_f_so), So_inds, ADXATRN_index_so);
 /* line 801: */
FDXATRN_si_1 = NBXATRN_add_ind((&YCXATRN_f_si), Si_inds, CDXATRN_index_si);
 /* line 802: */
GDXATRN_si_2 = NBXATRN_add_ind((&YCXATRN_f_si), Si_inds, CDXATRN_index_si);
 /* line 804: */
 /* line 805: */
if ( Issource )
{ 
HDXATRN = DDXATRN_so_1;
} 
else
{ 
HDXATRN = EDXATRN_so_2;
} 
IDXATRN_to_so = HDXATRN;
 /* line 806: */
if ( Issource )
{ 
JDXATRN = EDXATRN_so_2;
} 
else
{ 
JDXATRN = DDXATRN_so_1;
} 
KDXATRN_from_so = JDXATRN;
 /* line 807: */
if ( Issource )
{ 
LDXATRN = FDXATRN_si_1;
} 
else
{ 
LDXATRN = GDXATRN_si_2;
} 
MDXATRN_from_si = LDXATRN;
 /* line 808: */
if ( Issource )
{ 
NDXATRN = GDXATRN_si_2;
} 
else
{ 
NDXATRN = FDXATRN_si_1;
} 
ODXATRN_to_si = NDXATRN;
 /* line 810: */
 /* line 811: */
A_CALLPROC(NL(HCXATRN_type_unit),((*(&(WCXATRN_tf->From))), !Issource, KDXATRN_from_so, MDXATRN_from_si, &PDXATRN),((*(&(WCXATRN_tf->From))), !Issource, KDXATRN_from_so, MDXATRN_from_si, &PDXATRN,(NL(HCXATRN_type_unit)).nonlocals));
QDXATRN_from = PDXATRN;
 /* line 812: */
A_CALLPROC(NL(HCXATRN_type_unit),((*(&(WCXATRN_tf->To))), Issource, IDXATRN_to_so, ODXATRN_to_si, &RDXATRN),((*(&(WCXATRN_tf->To))), Issource, IDXATRN_to_so, ODXATRN_to_si, &RDXATRN,(NL(HCXATRN_type_unit)).nonlocals));
SDXATRN_to = RDXATRN;
 /* line 813: */
TDXATRN.Sink = QDXATRN_from;
 /* line 814: */
TDXATRN.Source = SDXATRN_to;
 /* line 815: */
UDXATRN = A_HEAP(A68_167 ) ;
(*UDXATRN) = TDXATRN ;
QCXATRN = A_UNITE(VDXATRN,mode12,12,UDXATRN);
} 
break;
case 2: /* REF STRUCT(MODE123,MODE139)  */
WDXATRN_tr = (KCXATRN.data.mode2);
 /* line 816: */
{ 
XDXATRN_ans = IAAATRN_nilustr;
YDXATRN_nextans = (&XDXATRN_ans);
 /* line 817: */
ZDXATRN_trsize = XOMATRN_int((*(&(WDXATRN_tr->Size))));
 /* line 818: */
AEXATRN_r_so = 0;
BEXATRN_r_si = 0;
 /* line 819: */
CEXATRN_index_rso = A_CALLPROC(NL(RAXATRN_is_same_sort),((*(&(WDXATRN_tr->Elem))), Issource),((*(&(WDXATRN_tr->Elem))), Issource,(NL(RAXATRN_is_same_sort)).nonlocals));
 /* line 820: */
DEXATRN_index_rsi = A_CALLPROC(NL(RAXATRN_is_same_sort),((*(&(WDXATRN_tr->Elem))), !Issource),((*(&(WDXATRN_tr->Elem))), !Issource,(NL(RAXATRN_is_same_sort)).nonlocals));
 /* line 822: */
 /* line 823: */
EEXATRN = ZDXATRN_trsize;
for ( FEXATRN = 1;
FEXATRN <= EEXATRN;
FEXATRN += 1 )
{ 
 /* line 824: */
GEXATRN_row_so = NBXATRN_add_ind((&AEXATRN_r_so), So_inds, CEXATRN_index_rso);
 /* line 825: */
HEXATRN_row_si = NBXATRN_add_ind((&BEXATRN_r_si), Si_inds, DEXATRN_index_rsi);
 /* line 826: */
A_CALLPROC(NL(HCXATRN_type_unit),((*(&(WDXATRN_tr->Elem))), Issource, GEXATRN_row_so, HEXATRN_row_si, &IEXATRN),((*(&(WDXATRN_tr->Elem))), Issource, GEXATRN_row_so, HEXATRN_row_si, &IEXATRN,(NL(HCXATRN_type_unit)).nonlocals));
JEXATRN_elem = IEXATRN;
 /* line 827: */
KEXATRN.Elem = JEXATRN_elem;
KEXATRN.Rest = IAAATRN_nilustr;
LEXATRN = A_HEAP(A68_176 ) ;
(*LEXATRN) = KEXATRN ;
(*YDXATRN_nextans) = LEXATRN;
 /* line 828: */
 /* line 829: */
YDXATRN_nextans = (&((*YDXATRN_nextans)->Rest));
}
 /* line 830: */
 /* line 831: */
if ( (ZDXATRN_trsize==1) )
{ 
MEXATRN.Size = (*(&(WDXATRN_tr->Size)));
 /* line 832: */
MEXATRN.Elem = (*(&(XDXATRN_ans->Elem)));
 /* line 833: */
NEXATRN = A_HEAP(A68_175 ) ;
(*NEXATRN) = MEXATRN ;
QCXATRN = A_UNITE(OEXATRN,mode20,20,NEXATRN);
} 
else
{ 
 /* line 834: */
 /* line 835: */
QCXATRN = A_UNITE(PEXATRN,mode21,21,XDXATRN_ans);
} 
} 
break;
case 3: /* REF STRUCT(MODE139,REF MODE142)  */
QEXATRN_ts = (KCXATRN.data.mode3);
 /* line 836: */
{ 
REXATRN_tst = QEXATRN_ts;
 /* line 837: */
SEXATRN_ust = IAAATRN_nilustr;
TEXATRN_nextitem = (&SEXATRN_ust);
 /* line 838: */
UEXATRN_t_so = 0;
VEXATRN_t_si = 0;
 /* line 839: */
for ( ;; )
{ 
 /* line 840: */
 /* line 841: */
if ( !((REXATRN_tst!=GAAATRN_niltstr)) ) break;
 /* line 842: */
 /* line 843: */
WEXATRN = A_CALLPROC(NL(RAXATRN_is_same_sort),((*(&(REXATRN_tst->Elem))), Issource),((*(&(REXATRN_tst->Elem))), Issource,(NL(RAXATRN_is_same_sort)).nonlocals));
if ( WEXATRN )
{ /* line 844: */
XEXATRN = (UEXATRN_t_so>0);
if ( ! XEXATRN )
{ZEXATRN = (*(&(REXATRN_tst->Rest))) ;
XEXATRN = A_CALLPROC(NL(RAXATRN_is_same_sort),(A_UNITE(YEXATRN,mode3,3,ZEXATRN), Issource),(A_UNITE(YEXATRN,mode3,3,ZEXATRN), Issource,(NL(RAXATRN_is_same_sort)).nonlocals));
}
WEXATRN = XEXATRN;
}
AFXATRN_tst_so = NBXATRN_add_ind((&UEXATRN_t_so), So_inds, WEXATRN);
 /* line 845: */
 /* line 846: */
 /* line 847: */
BFXATRN = A_CALLPROC(NL(RAXATRN_is_same_sort),((*(&(REXATRN_tst->Elem))), !Issource),((*(&(REXATRN_tst->Elem))), !Issource,(NL(RAXATRN_is_same_sort)).nonlocals));
if ( BFXATRN )
{ /* line 848: */
CFXATRN = (VEXATRN_t_si>0);
if ( ! CFXATRN )
{EFXATRN = (*(&(REXATRN_tst->Rest))) ;
CFXATRN = A_CALLPROC(NL(RAXATRN_is_same_sort),(A_UNITE(DFXATRN,mode3,3,EFXATRN), !Issource),(A_UNITE(DFXATRN,mode3,3,EFXATRN), !Issource,(NL(RAXATRN_is_same_sort)).nonlocals));
}
BFXATRN = CFXATRN;
}
FFXATRN_tst_si = NBXATRN_add_ind((&VEXATRN_t_si), Si_inds, BFXATRN);
 /* line 850: */
 /* line 851: */
A_CALLPROC(NL(HCXATRN_type_unit),((*(&(REXATRN_tst->Elem))), Issource, AFXATRN_tst_so, FFXATRN_tst_si, &GFXATRN),((*(&(REXATRN_tst->Elem))), Issource, AFXATRN_tst_so, FFXATRN_tst_si, &GFXATRN,(NL(HCXATRN_type_unit)).nonlocals));
HFXATRN_elem = GFXATRN;
 /* line 852: */
IFXATRN.Elem = HFXATRN_elem;
IFXATRN.Rest = IAAATRN_nilustr;
JFXATRN = A_HEAP(A68_176 ) ;
(*JFXATRN) = IFXATRN ;
(*TEXATRN_nextitem) = JFXATRN;
 /* line 853: */
TEXATRN_nextitem = (&((*TEXATRN_nextitem)->Rest));
 /* line 854: */
 /* line 855: */
REXATRN_tst = (*(&(REXATRN_tst->Rest)));
}
 /* line 856: */
 /* line 857: */
 /* line 858: */
QCXATRN = A_UNITE(KFXATRN,mode21,21,SEXATRN_ust);
} 
break;
case 5: /* REF STRUCT(MODE139)  */
LFXATRN_tb = (KCXATRN.data.mode5);
 /* line 859: */
A_CALLPROC(NL(HCXATRN_type_unit),((*(&(LFXATRN_tb->Type))), Issource, So_inds, Si_inds, &MFXATRN),((*(&(LFXATRN_tb->Type))), Issource, So_inds, Si_inds, &MFXATRN,(NL(HCXATRN_type_unit)).nonlocals));
QCXATRN = MFXATRN;
break;
case 9: /* REF STRUCT(INT)  */
NFXATRN_tn = (KCXATRN.data.mode9);
 /* line 860: */
 /* line 861: */
QCXATRN = A_UNITE(OFXATRN,mode34,34,(&FIAATRN_unull));
break;
default: 
if ( Issource )
{ 
PFXATRN = So_inds;
} 
else
{ 
PFXATRN = Si_inds;
} 
 /* line 862: */
 /* line 863: */
A_CALLPROC(NL(VBXATRN_make_uindex),(Issource, PFXATRN, &QFXATRN),(Issource, PFXATRN, &QFXATRN,(NL(VBXATRN_make_uindex)).nonlocals));
QCXATRN = QFXATRN;
break;
} 
} 
A_PROC_EXIT(type_unit);
*ReturnedValue = (QCXATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ZHXATRN_generator(A68_BOOL  XHXATRN_anonymous, A68_457  *ReturnedValue, void *NonLocals)
#define NL(x) (((AIXATRN_generator *)NonLocals)->x)
{ 
A68_457  BIXATRN;  /* clause result */
A68_457  CIXATRN;  /* OPERATORS - dynamic generator */
{ 
CIXATRN.upb = NL(WHXATRN_upb) ;
( XHXATRN_anonymous? A_VLOC(A68_161 ,CIXATRN): A_VHEAP(A68_161 ,CIXATRN) );
BIXATRN = CIXATRN;
} 
*ReturnedValue = (BIXATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  MIXATRN_start_sequence(void *NonLocals)
#define NL(x) (((NIXATRN_start_sequence *)NonLocals)->x)
{ 
A_PROC_ENTRY(start_sequence);
{ 
(*NL(IIXATRN_sequencechanged)) = A68_FALSE;
 /* line 922: */
(*NL(JIXATRN_newsequence)) = QAAATRN_nilsequence;
 /* line 923: */
 /* line 924: */
(*NL(KIXATRN_sequenceptr)) = NL(JIXATRN_newsequence);
} 
A_PROC_EXIT(start_sequence);
return;
} 
#undef NL

A_STATIC A68_VOID  PIXATRN_finish_sequence(A68_341  *ReturnedValue, void *NonLocals)
#define NL(x) (((QIXATRN_finish_sequence *)NonLocals)->x)
{ 
A68_341  RIXATRN;  /* collateral clause result */
A68_341  SIXATRN;  /* clause result */
A_PROC_ENTRY(finish_sequence);
RIXATRN.S = (*NL(JIXATRN_newsequence));
RIXATRN.C = (*NL(IIXATRN_sequencechanged));
SIXATRN = RIXATRN;
A_PROC_EXIT(finish_sequence);
*ReturnedValue = (SIXATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  VIXATRN_add_seqstep(A68_340  Sc, void *NonLocals)
#define NL(x) (((WIXATRN_add_seqstep *)NonLocals)->x)
{ 
A68_209  XIXATRN;  /* collateral clause result */
A68_209 * YIXATRN;  /* YIELD */
A_PROC_ENTRY(add_seqstep);
 /* line 929: */
{ 
if ( Sc.C )
{ 
(*NL(IIXATRN_sequencechanged)) = A68_TRUE;
} 
 /* line 930: */
 /* line 931: */
XIXATRN.Step = Sc.S;
XIXATRN.Rest = QAAATRN_nilsequence;
YIXATRN = A_HEAP(A68_209 ) ;
(*YIXATRN) = XIXATRN ;
(**NL(KIXATRN_sequenceptr)) = YIXATRN;
 /* line 932: */
 /* line 933: */
(*NL(KIXATRN_sequenceptr)) = (&((**NL(KIXATRN_sequenceptr))->Rest));
} 
A_PROC_EXIT(add_seqstep);
return;
} 
#undef NL

A_STATIC A68_VOID  BJXATRN_add_sequence(A68_341  Sc, void *NonLocals)
#define NL(x) (((CJXATRN_add_sequence *)NonLocals)->x)
{ 
A_PROC_ENTRY(add_sequence);
 /* line 936: */
{ 
if ( Sc.C )
{ 
(*NL(IIXATRN_sequencechanged)) = A68_TRUE;
} 
 /* line 937: */
(**NL(KIXATRN_sequenceptr)) = Sc.S;
 /* line 938: */
for ( ;; )
{ 
if ( !(((**NL(KIXATRN_sequenceptr))!=QAAATRN_nilsequence)) ) break;
(*NL(KIXATRN_sequenceptr)) = (&((**NL(KIXATRN_sequenceptr))->Rest));
}
 /* line 939: */
} 
A_PROC_EXIT(add_sequence);
return;
} 
#undef NL

A_STATIC A68_VOID  JJXATRN_start_series(void *NonLocals)
#define NL(x) (((KJXATRN_start_series *)NonLocals)->x)
{ 
A68_462  LJXATRN;  /* collateral clause result */
A68_462 * MJXATRN;  /* YIELD */
A_PROC_ENTRY(start_series);
{ 
 /* line 953: */
LJXATRN.Series = (*NL(EJXATRN_newseries));
LJXATRN.Sptr = (*NL(FJXATRN_seriesptr));
LJXATRN.Changed = (*NL(DJXATRN_serieschanged));
LJXATRN.Rest = (*NL(HJXATRN_serieslist));
MJXATRN = A_HEAP(A68_462 ) ;
(*MJXATRN) = LJXATRN ;
(*NL(HJXATRN_serieslist)) = MJXATRN;
 /* line 954: */
(*NL(DJXATRN_serieschanged)) = A68_FALSE;
 /* line 955: */
(*NL(EJXATRN_newseries)) = SAAATRN_nilseries;
 /* line 956: */
 /* line 957: */
(*NL(FJXATRN_seriesptr)) = NL(EJXATRN_newseries);
} 
A_PROC_EXIT(start_series);
return;
} 
#undef NL

A_STATIC A68_VOID  OJXATRN_finish_series(A68_346  *ReturnedValue, void *NonLocals)
#define NL(x) (((PJXATRN_finish_series *)NonLocals)->x)
{ 
A68_346  QJXATRN;  /* collateral clause result */
A68_346  RJXATRN_sc;
A68_346  SJXATRN;  /* clause result */
A_PROC_ENTRY(finish_series);
{ 
QJXATRN.S = (*NL(EJXATRN_newseries));
QJXATRN.C = (*NL(DJXATRN_serieschanged));
RJXATRN_sc = QJXATRN;
 /* line 961: */
(*NL(EJXATRN_newseries)) = (*(&((*NL(HJXATRN_serieslist))->Series)));
 /* line 962: */
(*NL(FJXATRN_seriesptr)) = (*(&((*NL(HJXATRN_serieslist))->Sptr)));
 /* line 963: */
(*NL(DJXATRN_serieschanged)) = (*(&((*NL(HJXATRN_serieslist))->Changed)));
 /* line 964: */
(*NL(HJXATRN_serieslist)) = (*(&((*NL(HJXATRN_serieslist))->Rest)));
 /* line 965: */
 /* line 966: */
SJXATRN = RJXATRN_sc;
} 
A_PROC_EXIT(finish_series);
*ReturnedValue = (SJXATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  VJXATRN_add_step(A68_345  Sc, void *NonLocals)
#define NL(x) (((WJXATRN_add_step *)NonLocals)->x)
{ 
A68_190  XJXATRN;  /* collateral clause result */
A68_190 * YJXATRN;  /* YIELD */
A_PROC_ENTRY(add_step);
 /* line 969: */
{ 
if ( Sc.C )
{ 
(*NL(DJXATRN_serieschanged)) = A68_TRUE;
} 
 /* line 970: */
XJXATRN.Step = Sc.S;
XJXATRN.Rest = SAAATRN_nilseries;
YJXATRN = A_HEAP(A68_190 ) ;
(*YJXATRN) = XJXATRN ;
(**NL(FJXATRN_seriesptr)) = YJXATRN;
 /* line 971: */
 /* line 972: */
(*NL(FJXATRN_seriesptr)) = (&((**NL(FJXATRN_seriesptr))->Rest));
} 
A_PROC_EXIT(add_step);
return;
} 
#undef NL

A_STATIC A68_VOID  BKXATRN_add_series(A68_346  Sc, void *NonLocals)
#define NL(x) (((CKXATRN_add_series *)NonLocals)->x)
{ 
A_PROC_ENTRY(add_series);
 /* line 975: */
{ 
if ( Sc.C )
{ 
(*NL(DJXATRN_serieschanged)) = A68_TRUE;
} 
 /* line 976: */
(**NL(FJXATRN_seriesptr)) = Sc.S;
 /* line 977: */
for ( ;; )
{ 
if ( !(((**NL(FJXATRN_seriesptr))!=SAAATRN_nilseries)) ) break;
(*NL(FJXATRN_seriesptr)) = (&((**NL(FJXATRN_seriesptr))->Rest));
}
 /* line 978: */
} 
A_PROC_EXIT(add_series);
return;
} 
#undef NL

A_STATIC A68_VOID  HKXATRN_add_join(A68_161  Lhs, A68_161  Rhs, A68_BOOL  Changed, void *NonLocals)
#define NL(x) (((IKXATRN_add_join *)NonLocals)->x)
{ 
A68_428  JKXATRN_lr;
A68_457  KKXATRN;  /* OPERATORS - istruct -> vector */
A68_457  LKXATRN;  /* OPERATORS - simple index */
A68_INT  MKXATRN;  /* YIELD */
A68_BOOL  NKXATRN;  /* optbool result */
A68_457  OKXATRN;  /* OPERATORS - istruct -> vector */
A68_457  PKXATRN;  /* OPERATORS - simple index */
A68_INT  QKXATRN;  /* YIELD */
A68_345  RKXATRN;  /* collateral clause result */
A68_197  SKXATRN;  /* collateral clause result */
A68_457  TKXATRN;  /* OPERATORS - istruct -> vector */
A68_457  UKXATRN;  /* OPERATORS - simple index */
A68_INT  VKXATRN;  /* YIELD */
A68_457  WKXATRN;  /* OPERATORS - istruct -> vector */
A68_457  XKXATRN;  /* OPERATORS - simple index */
A68_INT  YKXATRN;  /* YIELD */
A68_197 * ZKXATRN;  /* YIELD */
A68_191  ALXATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(add_join);
 /* line 981: */
{ 
JKXATRN_lr = A_CALLPROC(NL(SFWATRN_remove_null_void),(Lhs, Rhs),(Lhs, Rhs,(NL(SFWATRN_remove_null_void)).nonlocals));
 /* line 982: */
LKXATRN = A_HISVEC(KKXATRN,JKXATRN_lr,2,A68_161 ) ;
MKXATRN = 1 ;
NKXATRN = OEWATRN_is_null_void(A_VINDEX(LKXATRN,MKXATRN));
if ( ! NKXATRN )
{ /* line 983: */
PKXATRN = A_HISVEC(OKXATRN,JKXATRN_lr,2,A68_161 ) ;
QKXATRN = 2 ;
NKXATRN = OEWATRN_is_null_void(A_VINDEX(PKXATRN,QKXATRN));
}
 /* line 984: */
if ( NKXATRN )
{ 
/*SKIP*/;
} 
else
{ 
UKXATRN = A_HISVEC(TKXATRN,JKXATRN_lr,2,A68_161 ) ;
VKXATRN = 1 ;
SKXATRN.From = A_VINDEX(UKXATRN,VKXATRN);
XKXATRN = A_HISVEC(WKXATRN,JKXATRN_lr,2,A68_161 ) ;
YKXATRN = 2 ;
SKXATRN.To = A_VINDEX(XKXATRN,YKXATRN);
ZKXATRN = A_HEAP(A68_197 ) ;
(*ZKXATRN) = SKXATRN ;
RKXATRN.S = A_UNITE(ALXATRN,mode10,10,ZKXATRN);
RKXATRN.C = Changed;
 /* line 985: */
 /* line 986: */
A_CALLPROC(NL(UJXATRN_add_step),(RKXATRN),(RKXATRN,(NL(UJXATRN_add_step)).nonlocals));
} 
} 
A_PROC_EXIT(add_join);
return;
} 
#undef NL

A_STATIC A68_INT  GLXATRN_add_nametype(A68_INT  Oldindex, A68_BOOL  Newname, A68_236  Oldnt, A68_320  Tc, void *NonLocals)
#define NL(x) (((HLXATRN_add_nametype *)NonLocals)->x)
{ 
A68_239 * ILXATRN_nametypes;
A68_INT  JLXATRN_max;
A68_BOOL  KLXATRN;  /* optbool result */
A68_BOOL  LLXATRN;  /* optbool result */
A68_434  NLXATRN_generator;   /* proc value of non-global proc */
A68_239  SLXATRN;  /* avoid structure result */
A68_434  ULXATRN_generator;   /* proc value of non-global proc */
A68_239  ZLXATRN;  /* avoid structure result */
A68_239  AMXATRN_newtypes;
A68_239  BMXATRN;  /* OPERATORS - trim index */
A68_239  CMXATRN;  /* YIELD */
A68_VC  DMXATRN;  /* clause result */
A68_VC  EMXATRN;  /* avoid structure result */
A68_VC  FMXATRN_name;
A68_236  GMXATRN;  /* collateral clause result */
A68_236 * HMXATRN;  /* YIELD */
A68_INT  IMXATRN;  /* clause result */
A_PROC_ENTRY(add_nametype);
 /* line 990: */
 /* line 991: */
{ 
(*NL(GIXATRN_nametypeno))+=1;
 /* line 992: */
ILXATRN_nametypes = (&(NL(HIXATRN_newfdec)->Nametypes));
 /* line 993: */
JLXATRN_max = (*ILXATRN_nametypes).upb;
 /* line 994: */
 /* line 995: */
KLXATRN = !(*NL(FIXATRN_nametypechange));
if ( KLXATRN )
{LLXATRN = Tc.C;
if ( ! LLXATRN )
{LLXATRN = Newname;
}
if ( ! LLXATRN )
{LLXATRN = ((*NL(GIXATRN_nametypeno))!=Oldindex);
}
 /* line 996: */
KLXATRN = LLXATRN;
}
if ( KLXATRN )
{ 
(*NL(FIXATRN_nametypechange)) = A68_TRUE;
 /* line 997: */
A_CLOSURE( NLXATRN_generator, OLXATRN_generator, PLXATRN_generator );
(( PLXATRN_generator * ) ( NLXATRN_generator.nonlocals )) -> JLXATRN_max = JLXATRN_max;
 /* line 998: */
A_CALLPROC(NLXATRN_generator,(A68_FALSE, &SLXATRN),(A68_FALSE, &SLXATRN,(NLXATRN_generator).nonlocals));
A_VASSIGN2((*ILXATRN_nametypes),SLXATRN,A68_236 ) ;
(*ILXATRN_nametypes) = SLXATRN;
} 
 /* line 999: */
 /* line 1000: */
if ( ((*NL(GIXATRN_nametypeno))>JLXATRN_max) )
{ 
A_CLOSURE( ULXATRN_generator, VLXATRN_generator, WLXATRN_generator );
(( WLXATRN_generator * ) ( ULXATRN_generator.nonlocals )) -> JLXATRN_max = JLXATRN_max;
A_CALLPROC(ULXATRN_generator,(A68_FALSE, &ZLXATRN),(A68_FALSE, &ZLXATRN,(ULXATRN_generator).nonlocals));
AMXATRN_newtypes = ZLXATRN;
 /* line 1001: */
CMXATRN = A_VTRIM(BMXATRN,(AMXATRN_newtypes),A_VTSCRIPT(&(BMXATRN.upb),(AMXATRN_newtypes).upb,1,JLXATRN_max)) ;
A_VASSIGN2((*ILXATRN_nametypes),CMXATRN,A68_236 );
 /* line 1002: */
 /* line 1003: */
(*ILXATRN_nametypes) = AMXATRN_newtypes;
} 
 /* line 1004: */
 /* line 1005: */
if ( Newname )
{ 
 /* line 1006: */
 /* line 1007: */
LWVATRN_make_name( TTCAOST_nullid, (*NL(GIXATRN_nametypeno)), &EMXATRN );
DMXATRN = EMXATRN;
} 
else
{ 
DMXATRN = Oldnt.Name;
} 
FMXATRN_name = DMXATRN;
 /* line 1008: */
 /* line 1009: */
if ( (*NL(FIXATRN_nametypechange)) )
{ 
GMXATRN.Name = FMXATRN_name;
GMXATRN.Type = Tc.T;
 /* line 1010: */
GMXATRN.Attr = Oldnt.Attr;
HMXATRN = (&A_VINDEX((*ILXATRN_nametypes),(*NL(GIXATRN_nametypeno)))) ;
(*HMXATRN) = GMXATRN;
} 
 /* line 1011: */
 /* line 1012: */
IMXATRN = (*NL(GIXATRN_nametypeno));
} 
A_PROC_EXIT(add_nametype);
return( IMXATRN );
} 
#undef NL

A_STATIC A68_VOID  MMXATRN_remove_let_ufn(A68_202 * Ns, A68_161  U, A68_161  *ReturnedValue, void *NonLocals)
#define NL(x) (((NMXATRN_remove_let_ufn *)NonLocals)->x)
{ 
A68_401  OMXATRN;  /* avoid structure result */
A68_329  PMXATRN;  /* avoid structure result */
A68_329  QMXATRN_ufc;
A68_239  RMXATRN_nametypes;
A68_202 * SMXATRN_n;
A68_INT  TMXATRN_nameno;
A68_320  UMXATRN;  /* avoid structure result */
A68_320  VMXATRN_tc;
A68_139 * WMXATRN;  /* YIELD */
A68_161  XMXATRN;  /* clause result */
A_PROC_ENTRY(remove_let_ufn);
 /* line 1015: */
 /* line 1016: */
{ 
 /* line 1017: */
 /* line 1018: */
XUVATRN_fntype_keep_ufn(  &OMXATRN );
if ( !MBAAOST_includes(NL(Options), OMXATRN) )
{ 
A_CALLPROC(NL(FYWATRN_remove_ufn),(U, &PMXATRN),(U, &PMXATRN,(NL(FYWATRN_remove_ufn)).nonlocals));
QMXATRN_ufc = PMXATRN;
 /* line 1019: */
 /* line 1020: */
if ( QMXATRN_ufc.C )
{ 
RMXATRN_nametypes = (*(&(NL(HIXATRN_newfdec)->Nametypes)));
 /* line 1021: */
SMXATRN_n = Ns;
 /* line 1022: */
for ( ;; )
{ 
 /* line 1023: */
if ( !((SMXATRN_n!=NAAATRN_nilnames)) ) break;
TMXATRN_nameno = (*(&(SMXATRN_n->Nameno)));
 /* line 1024: */
A_CALLPROC(NL(WZWATRN_remove_tfn),((*(&((&A_VINDEX(RMXATRN_nametypes,TMXATRN_nameno))->Type))), &UMXATRN),((*(&((&A_VINDEX(RMXATRN_nametypes,TMXATRN_nameno))->Type))), &UMXATRN,(NL(WZWATRN_remove_tfn)).nonlocals));
VMXATRN_tc = UMXATRN;
 /* line 1025: */
if ( VMXATRN_tc.C )
{ 
WMXATRN = (&((&A_VINDEX(RMXATRN_nametypes,TMXATRN_nameno))->Type)) ;
(*WMXATRN) = VMXATRN_tc.T;
} 
 /* line 1026: */
 /* line 1027: */
SMXATRN_n = (*(&(SMXATRN_n->Rest)));
}
 /* line 1028: */
} 
 /* line 1029: */
 /* line 1030: */
 /* line 1031: */
XMXATRN = QMXATRN_ufc.U;
} 
else
{ 
 /* line 1032: */
XMXATRN = U;
} 
} 
A_PROC_EXIT(remove_let_ufn);
*ReturnedValue = (XMXATRN);
return;
} 
#undef NL

A_STATIC A68_195 * CNXATRN_make_let(A68_236  Nt, A68_161  Value, A68_139  T, void *NonLocals)
#define NL(x) (((DNXATRN_make_let *)NonLocals)->x)
{ 
A68_320  ENXATRN;  /* collateral clause result */
A68_INT  FNXATRN_nameno;
A68_202  GNXATRN;  /* collateral clause result */
A68_202 * INXATRN;  /* YIELD */
A68_202 * HNXATRN_names;
A68_161  JNXATRN;  /* avoid structure result */
A68_161  KNXATRN_u;
A68_195  LNXATRN;  /* collateral clause result */
A68_195 * MNXATRN;  /* clause result */
A68_195 * NNXATRN;  /* YIELD */
A_PROC_ENTRY(make_let);
 /* line 1036: */
 /* line 1037: */
{ 
ENXATRN.T = T;
ENXATRN.C = A68_TRUE;
FNXATRN_nameno = A_CALLPROC(NL(FLXATRN_add_nametype),(0, (Nt.Name.upb==0), Nt, ENXATRN),(0, (Nt.Name.upb==0), Nt, ENXATRN,(NL(FLXATRN_add_nametype)).nonlocals));
 /* line 1038: */
GNXATRN.Nameno = FNXATRN_nameno;
GNXATRN.Rest = NAAATRN_nilnames;
INXATRN = A_HEAP(A68_202 ) ;
(*INXATRN) = GNXATRN ;
HNXATRN_names = INXATRN;
 /* line 1039: */
A_CALLPROC(NL(LMXATRN_remove_let_ufn),(HNXATRN_names, Value, &JNXATRN),(HNXATRN_names, Value, &JNXATRN,(NL(LMXATRN_remove_let_ufn)).nonlocals));
KNXATRN_u = JNXATRN;
 /* line 1040: */
LNXATRN.Letnames = HNXATRN_names;
 /* line 1041: */
LNXATRN.Unit = KNXATRN_u;
NNXATRN = A_HEAP(A68_195 ) ;
(*NNXATRN) = LNXATRN ;
MNXATRN = NNXATRN;
} 
A_PROC_EXIT(make_let);
return( MNXATRN );
} 
#undef NL

A_STATIC A68_VOID  SNXATRN_names_nameno(A68_202 * Namelist, A68_353 * Tprocs, A68_BOOL  Source, A68_337  *ReturnedValue, void *NonLocals)
#define NL(x) (((TNXATRN_names_nameno *)NonLocals)->x)
{ 
A68_337  UNXATRN;  /* collateral clause result */
A68_337  VNXATRN;  /* clause result */
A68_INT  WNXATRN_nameno;
A68_239  XNXATRN;  /* OPERATORS - simple index */
A68_236  YNXATRN_nametype;
A68_363  ZNXATRN;  /* CALL */
A68_320  AOXATRN;  /* avoid structure result */
A68_320  BOXATRN_tc;
A68_INT  COXATRN_newnameno;
A68_166  DOXATRN;  /* collateral clause result */
A68_161  EOXATRN;  /* clause result */
A68_166 * FOXATRN;  /* YIELD */
A68_161  GOXATRN;  /* OPERATORS - mode -> union mode */
A68_167  HOXATRN;  /* collateral clause result */
A68_166  IOXATRN;  /* collateral clause result */
A68_166 * JOXATRN;  /* YIELD */
A68_161  KOXATRN;  /* OPERATORS - mode -> union mode */
A68_161  LOXATRN;  /* OPERATORS - mode -> union mode */
A68_167 * MOXATRN;  /* YIELD */
A68_161  NOXATRN;  /* OPERATORS - mode -> union mode */
A68_161 * OOXATRN;  /* YIELD */
A68_337  POXATRN;  /* avoid structure result */
A68_337  QOXATRN_rest;
A68_BOOL  ROXATRN;  /* optbool result */
A68_337  SOXATRN;  /* collateral clause result */
A68_202  TOXATRN;  /* collateral clause result */
A68_202 * UOXATRN;  /* YIELD */
A68_337  VOXATRN;  /* collateral clause result */
A_PROC_ENTRY(names_nameno);
 /* line 1045: */
 /* line 1046: */
{ 
 /* line 1047: */
if ( (Namelist==NAAATRN_nilnames) )
{ 
UNXATRN.N = NAAATRN_nilnames;
 /* line 1048: */
UNXATRN.C = A68_FALSE;
VNXATRN = UNXATRN;
} 
else
{ 
WNXATRN_nameno = (*(&(Namelist->Nameno)));
 /* line 1049: */
XNXATRN = (*(&(NL(Fdec)->Nametypes))) ;
YNXATRN_nametype = (*(&A_VINDEX(XNXATRN,WNXATRN_nameno)));
 /* line 1050: */
ZNXATRN = (*(&(Tprocs->Type))) ;
A_CALLPROC(ZNXATRN,(YNXATRN_nametype.Type, Tprocs, &AOXATRN),(YNXATRN_nametype.Type, Tprocs, &AOXATRN,(ZNXATRN).nonlocals));
BOXATRN_tc = AOXATRN;
 /* line 1051: */
COXATRN_newnameno = A_CALLPROC(NL(FLXATRN_add_nametype),(WNXATRN_nameno, A68_FALSE, YNXATRN_nametype, BOXATRN_tc),(WNXATRN_nameno, A68_FALSE, YNXATRN_nametype, BOXATRN_tc,(NL(FLXATRN_add_nametype)).nonlocals));
 /* line 1052: */
 /* line 1053: */
 /* line 1054: */
if ( Source )
{ 
DOXATRN.Sort = KKAATRN_usource;
 /* line 1055: */
DOXATRN.Nameno = COXATRN_newnameno;
FOXATRN = A_HEAP(A68_166 ) ;
(*FOXATRN) = DOXATRN ;
EOXATRN = A_UNITE(GOXATRN,mode11,11,FOXATRN);
} 
else
{ 
IOXATRN.Sort = LKAATRN_usink;
IOXATRN.Nameno = COXATRN_newnameno;
JOXATRN = A_HEAP(A68_166 ) ;
(*JOXATRN) = IOXATRN ;
HOXATRN.Sink = A_UNITE(KOXATRN,mode11,11,JOXATRN);
 /* line 1056: */
HOXATRN.Source = A_UNITE(LOXATRN,mode34,34,(&FIAATRN_unull));
MOXATRN = A_HEAP(A68_167 ) ;
(*MOXATRN) = HOXATRN ;
EOXATRN = A_UNITE(NOXATRN,mode12,12,MOXATRN);
} 
OOXATRN = (&A_VINDEX(NL(DIXATRN_unitlink),WNXATRN_nameno)) ;
(*OOXATRN) = EOXATRN;
 /* line 1057: */
A_CALLPROC(NL(RNXATRN_names_nameno),((*(&(Namelist->Rest))), Tprocs, Source, &POXATRN),((*(&(Namelist->Rest))), Tprocs, Source, &POXATRN,(NL(RNXATRN_names_nameno)).nonlocals));
QOXATRN_rest = POXATRN;
 /* line 1058: */
ROXATRN = QOXATRN_rest.C;
if ( ! ROXATRN )
{ /* line 1059: */
ROXATRN = (COXATRN_newnameno!=WNXATRN_nameno);
}
if ( ROXATRN )
{ 
TOXATRN.Nameno = COXATRN_newnameno;
TOXATRN.Rest = QOXATRN_rest.N;
UOXATRN = A_HEAP(A68_202 ) ;
(*UOXATRN) = TOXATRN ;
SOXATRN.N = UOXATRN;
 /* line 1060: */
SOXATRN.C = A68_TRUE;
VNXATRN = SOXATRN;
} 
else
{ 
VOXATRN.N = Namelist;
 /* line 1061: */
 /* line 1062: */
 /* line 1063: */
VOXATRN.C = A68_FALSE;
VNXATRN = VOXATRN;
} 
} 
} 
A_PROC_EXIT(names_nameno);
*ReturnedValue = (VNXATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ZOXATRN_let_unitlink(A68_202 * Names, A68_161  U, void *NonLocals)
#define NL(x) (((APXATRN_let_unitlink *)NonLocals)->x)
{ 
A68_239  BPXATRN;  /* OPERATORS - simple index */
A68_INT  CPXATRN;  /* YIELD */
A68_INT  DPXATRN;  /* YIELD */
A68_161 * EPXATRN;  /* YIELD */
A68_161  FPXATRN;  /* united object - for case conformity */
A68_176 * GPXATRN_us;
A68_176 * HPXATRN;  /* clause result */
A68_176 * IPXATRN_rhs;
A68_202 * JPXATRN_ns;
A68_239  KPXATRN;  /* OPERATORS - simple index */
A68_INT  LPXATRN;  /* YIELD */
A68_236  MPXATRN_nametype;
A68_INT  NPXATRN;  /* YIELD */
A68_161 * OPXATRN;  /* YIELD */
A_PROC_ENTRY(let_unitlink);
 /* line 1066: */
 /* line 1067: */
{ 
 /* line 1068: */
 /* line 1069: */
if ( (Names==NAAATRN_nilnames) )
{ 
/*SKIP*/;
} 
else
{ 
 /* line 1070: */
if ( ((*(&(Names->Rest)))==NAAATRN_nilnames) )
{ 
 /* line 1071: */
BPXATRN = (*(&(NL(Fdec)->Nametypes))) ;
CPXATRN = (*(&(Names->Nameno))) ;
if ( A_CALLPROC(NL(GXVATRN_has_type_fntype),((*(&((&A_VINDEX(BPXATRN,CPXATRN))->Type)))),((*(&((&A_VINDEX(BPXATRN,CPXATRN))->Type))),(NL(GXVATRN_has_type_fntype)).nonlocals)) )
{ 
 /* line 1072: */
 /* line 1073: */
 /* line 1074: */
DPXATRN = (*(&(Names->Nameno))) ;
EPXATRN = (&A_VINDEX(NL(DIXATRN_unitlink),DPXATRN)) ;
(*EPXATRN) = U;
} 
} 
else
{ 
FPXATRN = U ;
switch ( FPXATRN.mode )
{ 
case 21: /* REF STRUCT(MODE161,REF MODE176)  */
GPXATRN_us = (FPXATRN.data.mode21);
HPXATRN = GPXATRN_us;
break;
default: 
HPXATRN = IAAATRN_nilustr;
break;
} 
IPXATRN_rhs = HPXATRN;
 /* line 1075: */
JPXATRN_ns = Names;
 /* line 1076: */
for ( ;; )
{ 
 /* line 1077: */
if ( !((JPXATRN_ns!=NAAATRN_nilnames)) ) break;
KPXATRN = (*(&(NL(Fdec)->Nametypes))) ;
LPXATRN = (*(&(JPXATRN_ns->Nameno))) ;
MPXATRN_nametype = (*(&A_VINDEX(KPXATRN,LPXATRN)));
 /* line 1078: */
 /* line 1079: */
if ( A_CALLPROC(NL(GXVATRN_has_type_fntype),(MPXATRN_nametype.Type),(MPXATRN_nametype.Type,(NL(GXVATRN_has_type_fntype)).nonlocals)) )
{ 
 /* line 1080: */
NPXATRN = (*(&(JPXATRN_ns->Nameno))) ;
OPXATRN = (&A_VINDEX(NL(DIXATRN_unitlink),NPXATRN)) ;
(*OPXATRN) = (*(&(IPXATRN_rhs->Elem)));
} 
 /* line 1081: */
JPXATRN_ns = (*(&(JPXATRN_ns->Rest)));
 /* line 1082: */
if ( (IPXATRN_rhs!=IAAATRN_nilustr) )
{ 
 /* line 1084: */
IPXATRN_rhs = (*(&(IPXATRN_rhs->Rest)));
} 
}
 /* line 1085: */
 /* line 1086: */
} 
} 
} 
A_PROC_EXIT(let_unitlink);
return;
} 
#undef NL

A_STATIC A68_VOID  SPXATRN_let_fntype(A68_195 * L, A68_353 * Tprocs, void *NonLocals)
#define NL(x) (((TPXATRN_let_fntype *)NonLocals)->x)
{ 
A68_337  UPXATRN;  /* avoid structure result */
A68_337  VPXATRN_nc;
A68_372  XPXATRN;  /* CALL */
A68_329  YPXATRN;  /* avoid structure result */
A68_329  WPXATRN_uc;
A68_161  ZPXATRN;  /* avoid structure result */
A68_161 * AQXATRN;  /* YIELD */
A68_BOOL  BQXATRN;  /* optbool result */
A68_345  CQXATRN;  /* collateral clause result */
A68_195  DQXATRN;  /* collateral clause result */
A68_195 * EQXATRN;  /* YIELD */
A68_191  FQXATRN;  /* OPERATORS - mode -> union mode */
A68_345  GQXATRN;  /* collateral clause result */
A68_191  HQXATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(let_fntype);
 /* line 1089: */
 /* line 1090: */
{ 
A_CALLPROC(NL(RNXATRN_names_nameno),((*(&(L->Letnames))), Tprocs, A68_TRUE, &UPXATRN),((*(&(L->Letnames))), Tprocs, A68_TRUE, &UPXATRN,(NL(RNXATRN_names_nameno)).nonlocals));
VPXATRN_nc = UPXATRN;
 /* line 1091: */
XPXATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(XPXATRN,((*(&(L->Unit))), Tprocs, &YPXATRN),((*(&(L->Unit))), Tprocs, &YPXATRN,(XPXATRN).nonlocals));
WPXATRN_uc = YPXATRN;
 /* line 1092: */
A_CALLPROC(NL(YOXATRN_let_unitlink),((*(&(L->Letnames))), (*(&((&WPXATRN_uc)->U)))),((*(&(L->Letnames))), (*(&((&WPXATRN_uc)->U))),(NL(YOXATRN_let_unitlink)).nonlocals));
 /* line 1093: */
A_CALLPROC(NL(LMXATRN_remove_let_ufn),(VPXATRN_nc.N, (*(&((&WPXATRN_uc)->U))), &ZPXATRN),(VPXATRN_nc.N, (*(&((&WPXATRN_uc)->U))), &ZPXATRN,(NL(LMXATRN_remove_let_ufn)).nonlocals));
AQXATRN = (&((&WPXATRN_uc)->U)) ;
(*AQXATRN) = ZPXATRN;
 /* line 1094: */
 /* line 1095: */
BQXATRN = VPXATRN_nc.C;
if ( ! BQXATRN )
{BQXATRN = (*(&((&WPXATRN_uc)->C)));
}
if ( BQXATRN )
{ 
DQXATRN.Letnames = VPXATRN_nc.N;
DQXATRN.Unit = (*(&((&WPXATRN_uc)->U)));
EQXATRN = A_HEAP(A68_195 ) ;
(*EQXATRN) = DQXATRN ;
CQXATRN.S = A_UNITE(FQXATRN,mode8,8,EQXATRN);
CQXATRN.C = A68_TRUE;
 /* line 1096: */
A_CALLPROC(NL(UJXATRN_add_step),(CQXATRN),(CQXATRN,(NL(UJXATRN_add_step)).nonlocals));
} 
else
{ 
GQXATRN.S = A_UNITE(HQXATRN,mode8,8,L);
GQXATRN.C = A68_FALSE;
 /* line 1097: */
 /* line 1098: */
A_CALLPROC(NL(UJXATRN_add_step),(GQXATRN),(GQXATRN,(NL(UJXATRN_add_step)).nonlocals));
} 
} 
A_PROC_EXIT(let_fntype);
return;
} 
#undef NL

A_STATIC A68_VOID  LQXATRN_join_fntype(A68_197 * Jn, A68_353 * Tprocs, void *NonLocals)
#define NL(x) (((MQXATRN_join_fntype *)NonLocals)->x)
{ 
A68_372  NQXATRN;  /* CALL */
A68_329  OQXATRN;  /* avoid structure result */
A68_329  PQXATRN_fromc;
A68_372  QQXATRN;  /* CALL */
A68_329  RQXATRN;  /* avoid structure result */
A68_329  SQXATRN_toc;
A68_167 * TQXATRN_from;
A68_167 * UQXATRN_to;
A_PROC_ENTRY(join_fntype);
 /* line 1101: */
 /* line 1102: */
{ 
NQXATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(NQXATRN,((*(&(Jn->From))), Tprocs, &OQXATRN),((*(&(Jn->From))), Tprocs, &OQXATRN,(NQXATRN).nonlocals));
PQXATRN_fromc = OQXATRN;
 /* line 1103: */
QQXATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(QQXATRN,((*(&(Jn->To))), Tprocs, &RQXATRN),((*(&(Jn->To))), Tprocs, &RQXATRN,(QQXATRN).nonlocals));
SQXATRN_toc = RQXATRN;
 /* line 1105: */
TQXATRN_from = A_CALLPROC(NL(JVWATRN_transform_unit),(PQXATRN_fromc.U),(PQXATRN_fromc.U,(NL(JVWATRN_transform_unit)).nonlocals));
 /* line 1106: */
UQXATRN_to = A_CALLPROC(NL(JVWATRN_transform_unit),(SQXATRN_toc.U),(SQXATRN_toc.U,(NL(JVWATRN_transform_unit)).nonlocals));
 /* line 1109: */
A_CALLPROC(NL(GKXATRN_add_join),((*(&(TQXATRN_from->Source))), (*(&(UQXATRN_to->Source))), A68_FALSE),((*(&(TQXATRN_from->Source))), (*(&(UQXATRN_to->Source))), A68_FALSE,(NL(GKXATRN_add_join)).nonlocals));
 /* line 1111: */
 /* line 1112: */
A_CALLPROC(NL(GKXATRN_add_join),((*(&(UQXATRN_to->Sink))), (*(&(TQXATRN_from->Sink))), A68_TRUE),((*(&(UQXATRN_to->Sink))), (*(&(TQXATRN_from->Sink))), A68_TRUE,(NL(GKXATRN_add_join)).nonlocals));
} 
A_PROC_EXIT(join_fntype);
return;
} 
#undef NL

A_STATIC A68_VOID  YQXATRN_repljoin_fntype(A68_198 * Rj, A68_353 * Tprocs, void *NonLocals)
#define NL(x) (((ZQXATRN_repljoin_fntype *)NonLocals)->x)
{ 
A68_200 * ARXATRN_js;
A68_346  ERXATRN;  /* avoid structure result */
A68_346  DRXATRN_sc;
A68_190 * FRXATRN_ser;
A68_200 ** GRXATRN_jsptr;
A68_191  HRXATRN;  /* united object - for case conformity */
A68_197 * IRXATRN_j;
A68_200  JRXATRN;  /* collateral clause result */
A68_200 * KRXATRN;  /* YIELD */
A68_345  NRXATRN;  /* collateral clause result */
A68_198  ORXATRN;  /* collateral clause result */
A68_198 * PRXATRN;  /* YIELD */
A68_191  QRXATRN;  /* OPERATORS - mode -> union mode */
A68_345  RRXATRN;  /* collateral clause result */
A68_191  SRXATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(repljoin_fntype);
 /* line 1115: */
 /* line 1116: */
{ 
A_CALLPROC(NL(IJXATRN_start_series),(),((NL(IJXATRN_start_series)).nonlocals));
 /* line 1117: */
ARXATRN_js = (*(&(Rj->Joins)));
 /* line 1118: */
for ( ;; )
{ 
 /* line 1119: */
if ( !((ARXATRN_js!=RAAATRN_niljoins)) ) break;
 /* line 1120: */
if ( A_CALLPROC(NL(JHWATRN_extra_step),((*(&((&(ARXATRN_js->Join))->From)))),((*(&((&(ARXATRN_js->Join))->From))),(NL(JHWATRN_extra_step)).nonlocals)) )
{ 
 /* line 1121: */
A_CALLPROC(NL(FWVATRN_sysfault),(CRXATRN),(CRXATRN,(NL(FWVATRN_sysfault)).nonlocals));
} 
 /* line 1122: */
A_CALLPROC(NL(KQXATRN_join_fntype),((&(ARXATRN_js->Join)), Tprocs),((&(ARXATRN_js->Join)), Tprocs,(NL(KQXATRN_join_fntype)).nonlocals));
 /* line 1123: */
 /* line 1124: */
ARXATRN_js = (*(&(ARXATRN_js->Rest)));
}
 /* line 1125: */
A_CALLPROC(NL(NJXATRN_finish_series),( &ERXATRN),( &ERXATRN,(NL(NJXATRN_finish_series)).nonlocals));
DRXATRN_sc = ERXATRN;
 /* line 1126: */
 /* line 1127: */
if ( (*(&((&DRXATRN_sc)->C))) )
{ 
FRXATRN_ser = (*(&((&DRXATRN_sc)->S)));
 /* line 1128: */
ARXATRN_js = RAAATRN_niljoins;
 /* line 1129: */
GRXATRN_jsptr = (&ARXATRN_js);
 /* line 1130: */
for ( ;; )
{ 
 /* line 1131: */
if ( !((FRXATRN_ser!=SAAATRN_nilseries)) ) break;
 /* line 1132: */
HRXATRN = (*(&(FRXATRN_ser->Step))) ;
switch ( HRXATRN.mode )
{ 
case 10: /* REF STRUCT(MODE161,MODE161)  */
IRXATRN_j = (HRXATRN.data.mode10);
 /* line 1133: */
{ 
JRXATRN.Join = (*IRXATRN_j);
JRXATRN.Rest = RAAATRN_niljoins;
KRXATRN = A_HEAP(A68_200 ) ;
(*KRXATRN) = JRXATRN ;
(*GRXATRN_jsptr) = KRXATRN;
 /* line 1134: */
 /* line 1135: */
 /* line 1136: */
GRXATRN_jsptr = (&((*GRXATRN_jsptr)->Rest));
} 
break;
default: 
 /* line 1137: */
A_CALLPROC(NL(FWVATRN_sysfault),(MRXATRN),(MRXATRN,(NL(FWVATRN_sysfault)).nonlocals));
break;
} 
 /* line 1138: */
 /* line 1139: */
FRXATRN_ser = (*(&(FRXATRN_ser->Rest)));
}
 /* line 1141: */
ORXATRN.Repls = (*(&(Rj->Repls)));
ORXATRN.Joins = ARXATRN_js;
PRXATRN = A_HEAP(A68_198 ) ;
(*PRXATRN) = ORXATRN ;
NRXATRN.S = A_UNITE(QRXATRN,mode11,11,PRXATRN);
NRXATRN.C = A68_TRUE;
 /* line 1142: */
A_CALLPROC(NL(UJXATRN_add_step),(NRXATRN),(NRXATRN,(NL(UJXATRN_add_step)).nonlocals));
} 
else
{ 
RRXATRN.S = A_UNITE(SRXATRN,mode11,11,Rj);
RRXATRN.C = A68_FALSE;
 /* line 1143: */
 /* line 1144: */
A_CALLPROC(NL(UJXATRN_add_step),(RRXATRN),(RRXATRN,(NL(UJXATRN_add_step)).nonlocals));
} 
} 
A_PROC_EXIT(repljoin_fntype);
return;
} 
#undef NL

A_STATIC A68_VOID  WRXATRN_make_fntype(A68_196 * Make, A68_353 * Tprocs, void *NonLocals)
#define NL(x) (((XRXATRN_make_fntype *)NonLocals)->x)
{ 
A68_478  BSXATRN_make_names;   /* proc value of non-global proc */
A68_358  RSXATRN;  /* CALL */
A68_315  SSXATRN;  /* avoid structure result */
A68_315  TSXATRN_fc;
A68_375  USXATRN;  /* CALL */
A68_332  VSXATRN;  /* avoid structure result */
A68_332  WSXATRN_ic;
A68_202 * XSXATRN_oldnames;
A68_INT  YSXATRN;  /* YIELD */
A68_BOOL  ZSXATRN_specchanged;
A68_376  ATXATRN;  /* CALL */
A68_222  BTXATRN;  /* OPERATORS - mode -> union mode */
A68_192  CTXATRN;  /* YIELD */
A68_333  DTXATRN;  /* avoid structure result */
A68_239  ETXATRN;  /* OPERATORS - simple index */
A68_INT  FTXATRN;  /* YIELD */
A68_139  GTXATRN_oldtype;
A68_363  HTXATRN;  /* CALL */
A68_320  ITXATRN;  /* avoid structure result */
A68_139  JTXATRN_oldmaketype;
A68_139  KTXATRN;  /* clause result */
A68_139  LTXATRN;  /* OPERATORS - mode -> union mode */
A68_143 * MTXATRN;  /* YIELD */
A68_139  NTXATRN_newmaketype;
A68_320  OTXATRN;  /* collateral clause result */
A68_337  PTXATRN;  /* avoid structure result */
A68_337  QTXATRN_nc;
A68_BOOL  RTXATRN;  /* optbool result */
A68_345  STXATRN;  /* collateral clause result */
A68_196  TTXATRN;  /* collateral clause result */
A68_196 * UTXATRN;  /* YIELD */
A68_191  VTXATRN;  /* OPERATORS - mode -> union mode */
A68_191  WTXATRN;  /* OPERATORS - mode -> union mode */
A68_345  XTXATRN_mc;
A68_202 * YTXATRN_newnames;
A68_INT  ZTXATRN_oldnameno;
A68_INT  AUXATRN_newnameno;
A68_166  BUXATRN;  /* collateral clause result */
A68_166  CUXATRN;  /* collateral clause result */
A68_166 * DUXATRN;  /* YIELD */
A68_161  EUXATRN;  /* OPERATORS - mode -> union mode */
A68_166 * FUXATRN;  /* YIELD */
A68_161  GUXATRN;  /* OPERATORS - mode -> union mode */
A68_161  HUXATRN;  /* avoid structure result */
A68_161  IUXATRN_link;
A68_161 * JUXATRN;  /* YIELD */
A68_239  KUXATRN;  /* OPERATORS - simple index */
A68_236  LUXATRN_nametype;
A68_VC  MUXATRN;  /* avoid structure result */
A68_VC  NUXATRN_newname;
A68_236  OUXATRN;  /* collateral clause result */
A68_139  PUXATRN;  /* OPERATORS - mode -> union mode */
A68_195 * QUXATRN_let;
A68_345  RUXATRN;  /* collateral clause result */
A68_191  SUXATRN;  /* OPERATORS - mode -> union mode */
A68_167  TUXATRN;  /* collateral clause result */
A68_166  UUXATRN;  /* collateral clause result */
A68_166 * VUXATRN;  /* YIELD */
A68_161  WUXATRN;  /* OPERATORS - mode -> union mode */
A68_166  XUXATRN;  /* collateral clause result */
A68_166 * YUXATRN;  /* YIELD */
A68_161  ZUXATRN;  /* OPERATORS - mode -> union mode */
A68_167 * AVXATRN;  /* YIELD */
A68_161  BVXATRN;  /* OPERATORS - mode -> union mode */
A68_161 * CVXATRN;  /* YIELD */
A_PROC_ENTRY(make_fntype);
 /* line 1147: */
 /* line 1148: */
{ 
A_CLOSURE( BSXATRN_make_names, CSXATRN_make_names, DSXATRN_make_names );
(( DSXATRN_make_names * ) ( BSXATRN_make_names.nonlocals )) -> Fdec = NL(Fdec);
(( DSXATRN_make_names * ) ( BSXATRN_make_names.nonlocals )) -> FLXATRN_add_nametype = NL(FLXATRN_add_nametype);
(( DSXATRN_make_names * ) ( BSXATRN_make_names.nonlocals )) -> BSXATRN_make_names = BSXATRN_make_names;
 /* line 1161: */
RSXATRN = (*(&(Tprocs->Formulas))) ;
A_CALLPROC(RSXATRN,((*(&(Make->Sizes))), Tprocs, &SSXATRN),((*(&(Make->Sizes))), Tprocs, &SSXATRN,(RSXATRN).nonlocals));
TSXATRN_fc = SSXATRN;
 /* line 1162: */
USXATRN = (*(&(Tprocs->Instance))) ;
A_CALLPROC(USXATRN,((*(&(Make->Inst))), Tprocs, &VSXATRN),((*(&(Make->Inst))), Tprocs, &VSXATRN,(USXATRN).nonlocals));
WSXATRN_ic = VSXATRN;
 /* line 1164: */
XSXATRN_oldnames = (*(&(Make->Makenames)));
 /* line 1165: */
YSXATRN = (*(&((&(Make->Inst))->Fnno))) ;
ZSXATRN_specchanged = (*(&A_VINDEX((*NL(EXVATRN_environ_specs)),YSXATRN)));
 /* line 1167: */
 /* line 1168: */
if ( ZSXATRN_specchanged )
{ 
 /* line 1170: */
ATXATRN = (*(&(Tprocs->Declaration))) ;
CTXATRN = (*LHAATRN_makefnname(WSXATRN_ic.I.Fnno)) ;
A_CALLPROC(ATXATRN,(A_UNITE(BTXATRN,mode5,5,CTXATRN), Tprocs, &DTXATRN),(A_UNITE(BTXATRN,mode5,5,CTXATRN), Tprocs, &DTXATRN,(ATXATRN).nonlocals));
DTXATRN;
} 
 /* line 1172: */
ETXATRN = (*(&(NL(Fdec)->Nametypes))) ;
FTXATRN = (*(&(XSXATRN_oldnames->Nameno))) ;
GTXATRN_oldtype = (*(&((&A_VINDEX(ETXATRN,FTXATRN))->Type)));
 /* line 1173: */
HTXATRN = (*(&(Tprocs->Type))) ;
A_CALLPROC(HTXATRN,(GTXATRN_oldtype, Tprocs, &ITXATRN),(GTXATRN_oldtype, Tprocs, &ITXATRN,(HTXATRN).nonlocals));
JTXATRN_oldmaketype = ITXATRN.T;
 /* line 1174: */
 /* line 1175: */
 /* line 1176: */
if ( ZSXATRN_specchanged )
{ 
 /* line 1177: */
 /* line 1178: */
MTXATRN = A_CALLPROC(NL(ZOWATRN_transform_type),(JTXATRN_oldmaketype),(JTXATRN_oldmaketype,(NL(ZOWATRN_transform_type)).nonlocals)) ;
KTXATRN = A_UNITE(LTXATRN,mode4,4,MTXATRN);
} 
else
{ 
KTXATRN = JTXATRN_oldmaketype;
} 
NTXATRN_newmaketype = KTXATRN;
 /* line 1180: */
OTXATRN.T = NTXATRN_newmaketype;
OTXATRN.C = ZSXATRN_specchanged;
A_CALLPROC(BSXATRN_make_names,(XSXATRN_oldnames, OTXATRN, &PTXATRN),(XSXATRN_oldnames, OTXATRN, &PTXATRN,(BSXATRN_make_names).nonlocals));
QTXATRN_nc = PTXATRN;
 /* line 1182: */
 /* line 1183: */
RTXATRN = ZSXATRN_specchanged;
if ( ! RTXATRN )
{RTXATRN = QTXATRN_nc.C;
}
if ( ! RTXATRN )
{RTXATRN = TSXATRN_fc.C;
}
 /* line 1184: */
if ( ! RTXATRN )
{RTXATRN = WSXATRN_ic.C;
}
if ( RTXATRN )
{ 
TTXATRN.Sizes = TSXATRN_fc.F;
TTXATRN.Inst = WSXATRN_ic.I;
TTXATRN.Makenames = QTXATRN_nc.N;
UTXATRN = A_HEAP(A68_196 ) ;
(*UTXATRN) = TTXATRN ;
STXATRN.S = A_UNITE(VTXATRN,mode9,9,UTXATRN);
 /* line 1185: */
STXATRN.C = A68_TRUE;
} 
else
{ 
STXATRN.S = A_UNITE(WTXATRN,mode9,9,Make);
 /* line 1186: */
STXATRN.C = A68_FALSE;
} 
XTXATRN_mc = STXATRN;
 /* line 1187: */
A_CALLPROC(NL(UJXATRN_add_step),(XTXATRN_mc),(XTXATRN_mc,(NL(UJXATRN_add_step)).nonlocals));
 /* line 1189: */
YTXATRN_newnames = QTXATRN_nc.N;
 /* line 1190: */
for ( ;; )
{ 
 /* line 1191: */
if ( !((YTXATRN_newnames!=NAAATRN_nilnames)) ) break;
ZTXATRN_oldnameno = (*(&(XSXATRN_oldnames->Nameno)));
 /* line 1192: */
AUXATRN_newnameno = (*(&(YTXATRN_newnames->Nameno)));
 /* line 1193: */
 /* line 1194: */
 /* line 1195: */
if ( ZSXATRN_specchanged )
{ 
BUXATRN.Sort = KKAATRN_usource;
BUXATRN.Nameno = AUXATRN_newnameno;
 /* line 1196: */
CUXATRN.Sort = LKAATRN_usink;
CUXATRN.Nameno = AUXATRN_newnameno;
DUXATRN = A_HEAP(A68_166 ) ;
(*DUXATRN) = CUXATRN ;
FUXATRN = A_HEAP(A68_166 ) ;
(*FUXATRN) = BUXATRN ;
A_CALLPROC(NL(LAXATRN_make_unitlink),(JTXATRN_oldmaketype, A_UNITE(GUXATRN,mode11,11,FUXATRN), A_UNITE(EUXATRN,mode11,11,DUXATRN), &HUXATRN),(JTXATRN_oldmaketype, A_UNITE(GUXATRN,mode11,11,FUXATRN), A_UNITE(EUXATRN,mode11,11,DUXATRN), &HUXATRN,(NL(LAXATRN_make_unitlink)).nonlocals));
IUXATRN_link = HUXATRN;
 /* line 1197: */
JUXATRN = (&A_VINDEX(NL(DIXATRN_unitlink),ZTXATRN_oldnameno)) ;
(*JUXATRN) = IUXATRN_link;
 /* line 1198: */
KUXATRN = (*(&(NL(Fdec)->Nametypes))) ;
LUXATRN_nametype = (*(&A_VINDEX(KUXATRN,ZTXATRN_oldnameno)));
 /* line 1199: */
LWVATRN_make_name( LUXATRN_nametype.Name, 0, &MUXATRN );
NUXATRN_newname = MUXATRN;
 /* line 1200: */
OUXATRN.Name = NUXATRN_newname;
OUXATRN.Type = A_UNITE(PUXATRN,mode9,9,(&DIAATRN_tnull));
OUXATRN.Attr = LUXATRN_nametype.Attr;
 /* line 1201: */
QUXATRN_let = A_CALLPROC(NL(BNXATRN_make_let),(OUXATRN, IUXATRN_link, JTXATRN_oldmaketype),(OUXATRN, IUXATRN_link, JTXATRN_oldmaketype,(NL(BNXATRN_make_let)).nonlocals));
 /* line 1202: */
RUXATRN.S = A_UNITE(SUXATRN,mode8,8,QUXATRN_let);
RUXATRN.C = A68_TRUE;
 /* line 1203: */
A_CALLPROC(NL(UJXATRN_add_step),(RUXATRN),(RUXATRN,(NL(UJXATRN_add_step)).nonlocals));
} 
else
{ 
 /* line 1204: */
UUXATRN.Sort = LKAATRN_usink;
UUXATRN.Nameno = AUXATRN_newnameno;
 /* line 1205: */
VUXATRN = A_HEAP(A68_166 ) ;
(*VUXATRN) = UUXATRN ;
TUXATRN.Sink = A_UNITE(WUXATRN,mode11,11,VUXATRN);
XUXATRN.Sort = KKAATRN_usource;
 /* line 1206: */
XUXATRN.Nameno = AUXATRN_newnameno;
 /* line 1207: */
YUXATRN = A_HEAP(A68_166 ) ;
(*YUXATRN) = XUXATRN ;
TUXATRN.Source = A_UNITE(ZUXATRN,mode11,11,YUXATRN);
AVXATRN = A_HEAP(A68_167 ) ;
(*AVXATRN) = TUXATRN ;
CVXATRN = (&A_VINDEX(NL(DIXATRN_unitlink),ZTXATRN_oldnameno)) ;
(*CVXATRN) = A_UNITE(BVXATRN,mode12,12,AVXATRN);
} 
 /* line 1208: */
YTXATRN_newnames = (*(&(YTXATRN_newnames->Rest)));
 /* line 1209: */
 /* line 1210: */
XSXATRN_oldnames = (*(&(XSXATRN_oldnames->Rest)));
}
 /* line 1211: */
} 
A_PROC_EXIT(make_fntype);
return;
} 
#undef NL

A_STATIC A68_VOID  GVXATRN_series_fntype(A68_190 * Ser, A68_353 * Tprocs, void *NonLocals)
#define NL(x) (((HVXATRN_series_fntype *)NonLocals)->x)
{ 
A68_190 * IVXATRN_s;
A68_191  JVXATRN;  /* united object - for case conformity */
A68_195 * KVXATRN_l;
A68_197 * LVXATRN_jn;
A68_198 * MVXATRN_rj;
A68_196 * NVXATRN_mk;
A68_140  OVXATRN_tdecl;
A68_388  PVXATRN;  /* CALL */
A68_191  QVXATRN;  /* OPERATORS - mode -> union mode */
A68_345  RVXATRN;  /* avoid structure result */
A68_345  SVXATRN_tdc;
A68_388  TVXATRN;  /* CALL */
A68_345  UVXATRN;  /* avoid structure result */
A68_345  VVXATRN_sc;
A_PROC_ENTRY(series_fntype);
 /* line 1214: */
 /* line 1215: */
{ 
IVXATRN_s = Ser;
 /* line 1216: */
for ( ;; )
{ 
 /* line 1217: */
if ( !((IVXATRN_s!=SAAATRN_nilseries)) ) break;
 /* line 1218: */
JVXATRN = (*(&(IVXATRN_s->Step))) ;
switch ( JVXATRN.mode )
{ 
case 8: /* REF STRUCT(REF MODE202,MODE161)  */
KVXATRN_l = (JVXATRN.data.mode8);
 /* line 1219: */
A_CALLPROC(NL(RPXATRN_let_fntype),(KVXATRN_l, Tprocs),(KVXATRN_l, Tprocs,(NL(RPXATRN_let_fntype)).nonlocals));
break;
case 10: /* REF STRUCT(MODE161,MODE161)  */
LVXATRN_jn = (JVXATRN.data.mode10);
 /* line 1220: */
A_CALLPROC(NL(KQXATRN_join_fntype),(LVXATRN_jn, Tprocs),(LVXATRN_jn, Tprocs,(NL(KQXATRN_join_fntype)).nonlocals));
break;
case 11: /* REF STRUCT(REF MODE135,REF MODE200)  */
MVXATRN_rj = (JVXATRN.data.mode11);
 /* line 1221: */
A_CALLPROC(NL(XQXATRN_repljoin_fntype),(MVXATRN_rj, Tprocs),(MVXATRN_rj, Tprocs,(NL(XQXATRN_repljoin_fntype)).nonlocals));
break;
case 9: /* REF STRUCT(REF MODE135,MODE201,REF MODE202)  */
NVXATRN_mk = (JVXATRN.data.mode9);
 /* line 1222: */
A_CALLPROC(NL(VRXATRN_make_fntype),(NVXATRN_mk, Tprocs),(NVXATRN_mk, Tprocs,(NL(VRXATRN_make_fntype)).nonlocals));
break;
case 3: /* STRUCT(INT)  */
OVXATRN_tdecl = (JVXATRN.data.mode3);
{ 
PVXATRN = (*(&(AWLATRN_nulltprocs->Step))) ;
A_CALLPROC(PVXATRN,(A_UNITE(QVXATRN,mode3,3,OVXATRN_tdecl), Tprocs, &RVXATRN),(A_UNITE(QVXATRN,mode3,3,OVXATRN_tdecl), Tprocs, &RVXATRN,(PVXATRN).nonlocals));
SVXATRN_tdc = RVXATRN;
 /* line 1223: */
if ( !SVXATRN_tdc.C )
{ 
 /* line 1224: */
 /* line 1225: */
A_CALLPROC(NL(UJXATRN_add_step),(SVXATRN_tdc),(SVXATRN_tdc,(NL(UJXATRN_add_step)).nonlocals));
} 
} 
break;
default: 
{ 
TVXATRN = (*(&(AWLATRN_nulltprocs->Step))) ;
A_CALLPROC(TVXATRN,((*(&(IVXATRN_s->Step))), Tprocs, &UVXATRN),((*(&(IVXATRN_s->Step))), Tprocs, &UVXATRN,(TVXATRN).nonlocals));
VVXATRN_sc = UVXATRN;
 /* line 1226: */
 /* line 1227: */
 /* line 1228: */
A_CALLPROC(NL(UJXATRN_add_step),(VVXATRN_sc),(VVXATRN_sc,(NL(UJXATRN_add_step)).nonlocals));
} 
break;
} 
 /* line 1229: */
 /* line 1230: */
IVXATRN_s = (*(&(IVXATRN_s->Rest)));
}
 /* line 1231: */
} 
A_PROC_EXIT(series_fntype);
return;
} 
#undef NL

A_STATIC A68_VOID  ZVXATRN_seq_unit(A68_161  U, A68_353 * Tprocs, A68_329  *ReturnedValue, void *NonLocals)
#define NL(x) (((AWXATRN_seq_unit *)NonLocals)->x)
{ 
A68_372  BWXATRN;  /* CALL */
A68_329  CWXATRN;  /* avoid structure result */
A68_329  DWXATRN_uc;
A68_346  EWXATRN;  /* avoid structure result */
A68_346  FWXATRN_sc;
A68_329  GWXATRN;  /* collateral clause result */
A68_184  HWXATRN;  /* collateral clause result */
A68_184 * IWXATRN;  /* YIELD */
A68_161  JWXATRN;  /* OPERATORS - mode -> union mode */
A68_329  KWXATRN;  /* clause result */
A_PROC_ENTRY(seq_unit);
 /* line 1235: */
 /* line 1236: */
{ 
A_CALLPROC(NL(IJXATRN_start_series),(),((NL(IJXATRN_start_series)).nonlocals));
 /* line 1237: */
BWXATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(BWXATRN,(U, Tprocs, &CWXATRN),(U, Tprocs, &CWXATRN,(BWXATRN).nonlocals));
DWXATRN_uc = CWXATRN;
 /* line 1238: */
A_CALLPROC(NL(NJXATRN_finish_series),( &EWXATRN),( &EWXATRN,(NL(NJXATRN_finish_series)).nonlocals));
FWXATRN_sc = EWXATRN;
 /* line 1239: */
 /* line 1240: */
if ( FWXATRN_sc.C )
{ 
HWXATRN.Body = FWXATRN_sc.S;
HWXATRN.Output = DWXATRN_uc.U;
IWXATRN = A_HEAP(A68_184 ) ;
(*IWXATRN) = HWXATRN ;
GWXATRN.U = A_UNITE(JWXATRN,mode29,29,IWXATRN);
 /* line 1241: */
 /* line 1242: */
GWXATRN.C = A68_TRUE;
KWXATRN = GWXATRN;
} 
else
{ 
 /* line 1243: */
KWXATRN = DWXATRN_uc;
} 
} 
A_PROC_EXIT(seq_unit);
*ReturnedValue = (KWXATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  OWXATRN_seqstep_fntype(A68_210  Ss, A68_353 * Tprocs, A68_340  *ReturnedValue, void *NonLocals)
#define NL(x) (((PWXATRN_seqstep_fntype *)NonLocals)->x)
{ 
A68_210  QWXATRN;  /* united object - for case conformity */
A68_211 * RWXATRN_sl;
A68_380  SWXATRN;  /* CALL */
A68_337  TWXATRN;  /* avoid structure result */
A68_337  UWXATRN_nlc;
A68_329  WWXATRN;  /* avoid structure result */
A68_329  VWXATRN_ulc;
A68_161  XWXATRN;  /* avoid structure result */
A68_161 * YWXATRN;  /* YIELD */
A68_BOOL  ZWXATRN;  /* optbool result */
A68_211 * AXXATRN_s;
A68_195  BXXATRN;  /* collateral clause result */
A68_195 * CXXATRN;  /* YIELD */
A68_195 * DXXATRN;  /* YIELD */
A68_340  EXXATRN;  /* collateral clause result */
A68_210  FXXATRN;  /* OPERATORS - mode -> union mode */
A68_340  GXXATRN;  /* clause result */
A68_340  HXXATRN;  /* collateral clause result */
A68_210  IXXATRN;  /* OPERATORS - mode -> union mode */
A68_212 * JXXATRN_sv;
A68_380  KXXATRN;  /* CALL */
A68_337  LXXATRN;  /* avoid structure result */
A68_337  MXXATRN_nvc;
A68_329  NXXATRN;  /* avoid structure result */
A68_329  OXXATRN_uvc;
A68_BOOL  PXXATRN;  /* optbool result */
A68_212 * QXXATRN_v;
A68_195  RXXATRN;  /* collateral clause result */
A68_195 * SXXATRN;  /* YIELD */
A68_195 * TXXATRN;  /* YIELD */
A68_340  UXXATRN;  /* collateral clause result */
A68_210  VXXATRN;  /* OPERATORS - mode -> union mode */
A68_340  WXXATRN;  /* collateral clause result */
A68_210  XXXATRN;  /* OPERATORS - mode -> union mode */
A68_214 * YXXATRN_sa;
A68_372  ZXXATRN;  /* CALL */
A68_329  AYXATRN;  /* avoid structure result */
A68_329  BYXATRN_to;
A68_329  CYXATRN;  /* avoid structure result */
A68_329  DYXATRN_from;
A68_BOOL  EYXATRN;  /* optbool result */
A68_340  FYXATRN;  /* collateral clause result */
A68_214  GYXATRN;  /* collateral clause result */
A68_214 * HYXATRN;  /* YIELD */
A68_210  IYXATRN;  /* OPERATORS - mode -> union mode */
A68_340  JYXATRN;  /* collateral clause result */
A68_215 * KYXATRN_sc;
A68_329  LYXATRN;  /* avoid structure result */
A68_329  MYXATRN_input;
A68_382  NYXATRN;  /* CALL */
A68_339  OYXATRN;  /* avoid structure result */
A68_339  PYXATRN_choices;
A68_BOOL  QYXATRN;  /* optbool result */
A68_340  RYXATRN;  /* collateral clause result */
A68_215  SYXATRN;  /* collateral clause result */
A68_215 * TYXATRN;  /* YIELD */
A68_210  UYXATRN;  /* OPERATORS - mode -> union mode */
A68_340  VYXATRN;  /* collateral clause result */
A68_383  WYXATRN;  /* CALL */
A68_340  XYXATRN;  /* avoid structure result */
A_PROC_ENTRY(seqstep_fntype);
 /* line 1246: */
 /* line 1247: */
{ 
 /* line 1248: */
QWXATRN = Ss ;
switch ( QWXATRN.mode )
{ 
case 8: /* REF STRUCT(MODE195)  */
RWXATRN_sl = (QWXATRN.data.mode8);
 /* line 1249: */
{ 
SWXATRN = (*(&(Tprocs->Names))) ;
A_CALLPROC(SWXATRN,((*(&((&(RWXATRN_sl->Seqlet))->Letnames))), Tprocs, &TWXATRN),((*(&((&(RWXATRN_sl->Seqlet))->Letnames))), Tprocs, &TWXATRN,(SWXATRN).nonlocals));
UWXATRN_nlc = TWXATRN;
 /* line 1250: */
A_CALLPROC(NL(YVXATRN_seq_unit),((*(&((&(RWXATRN_sl->Seqlet))->Unit))), Tprocs, &WWXATRN),((*(&((&(RWXATRN_sl->Seqlet))->Unit))), Tprocs, &WWXATRN,(NL(YVXATRN_seq_unit)).nonlocals));
VWXATRN_ulc = WWXATRN;
 /* line 1251: */
A_CALLPROC(NL(YOXATRN_let_unitlink),((*(&((&(RWXATRN_sl->Seqlet))->Letnames))), (*(&((&VWXATRN_ulc)->U)))),((*(&((&(RWXATRN_sl->Seqlet))->Letnames))), (*(&((&VWXATRN_ulc)->U))),(NL(YOXATRN_let_unitlink)).nonlocals));
 /* line 1252: */
A_CALLPROC(NL(LMXATRN_remove_let_ufn),(UWXATRN_nlc.N, (*(&((&VWXATRN_ulc)->U))), &XWXATRN),(UWXATRN_nlc.N, (*(&((&VWXATRN_ulc)->U))), &XWXATRN,(NL(LMXATRN_remove_let_ufn)).nonlocals));
YWXATRN = (&((&VWXATRN_ulc)->U)) ;
(*YWXATRN) = XWXATRN;
 /* line 1253: */
 /* line 1254: */
ZWXATRN = UWXATRN_nlc.C;
if ( ! ZWXATRN )
{ZWXATRN = (*(&((&VWXATRN_ulc)->C)));
}
if ( ZWXATRN )
{ 
AXXATRN_s = (A_HEAP(A68_211 ));
 /* line 1255: */
BXXATRN.Letnames = UWXATRN_nlc.N;
BXXATRN.Unit = (*(&((&VWXATRN_ulc)->U)));
CXXATRN = A_HEAP(A68_195 ) ;
DXXATRN = (&(AXXATRN_s->Seqlet)) ;
(*DXXATRN) = (*CXXATRN) = BXXATRN;
 /* line 1256: */
EXXATRN.S = A_UNITE(FXXATRN,mode8,8,AXXATRN_s);
 /* line 1257: */
EXXATRN.C = A68_TRUE;
GXXATRN = EXXATRN;
} 
else
{ 
HXXATRN.S = A_UNITE(IXXATRN,mode8,8,RWXATRN_sl);
 /* line 1258: */
 /* line 1259: */
 /* line 1260: */
HXXATRN.C = A68_FALSE;
GXXATRN = HXXATRN;
} 
} 
break;
case 9: /* REF STRUCT(MODE195)  */
JXXATRN_sv = (QWXATRN.data.mode9);
 /* line 1261: */
{ 
KXXATRN = (*(&(Tprocs->Names))) ;
A_CALLPROC(KXXATRN,((*(&((&(JXXATRN_sv->Seqvar))->Letnames))), Tprocs, &LXXATRN),((*(&((&(JXXATRN_sv->Seqvar))->Letnames))), Tprocs, &LXXATRN,(KXXATRN).nonlocals));
MXXATRN_nvc = LXXATRN;
 /* line 1262: */
A_CALLPROC(NL(YVXATRN_seq_unit),((*(&((&(JXXATRN_sv->Seqvar))->Unit))), Tprocs, &NXXATRN),((*(&((&(JXXATRN_sv->Seqvar))->Unit))), Tprocs, &NXXATRN,(NL(YVXATRN_seq_unit)).nonlocals));
OXXATRN_uvc = NXXATRN;
 /* line 1263: */
A_CALLPROC(NL(YOXATRN_let_unitlink),((*(&((&(JXXATRN_sv->Seqvar))->Letnames))), OXXATRN_uvc.U),((*(&((&(JXXATRN_sv->Seqvar))->Letnames))), OXXATRN_uvc.U,(NL(YOXATRN_let_unitlink)).nonlocals));
 /* line 1264: */
 /* line 1265: */
PXXATRN = MXXATRN_nvc.C;
if ( ! PXXATRN )
{PXXATRN = OXXATRN_uvc.C;
}
if ( PXXATRN )
{ 
QXXATRN_v = (A_HEAP(A68_212 ));
 /* line 1266: */
RXXATRN.Letnames = MXXATRN_nvc.N;
RXXATRN.Unit = OXXATRN_uvc.U;
SXXATRN = A_HEAP(A68_195 ) ;
TXXATRN = (&(QXXATRN_v->Seqvar)) ;
(*TXXATRN) = (*SXXATRN) = RXXATRN;
 /* line 1267: */
UXXATRN.S = A_UNITE(VXXATRN,mode9,9,QXXATRN_v);
 /* line 1268: */
UXXATRN.C = A68_TRUE;
GXXATRN = UXXATRN;
} 
else
{ 
WXXATRN.S = A_UNITE(XXXATRN,mode9,9,JXXATRN_sv);
 /* line 1269: */
 /* line 1270: */
 /* line 1271: */
WXXATRN.C = A68_FALSE;
GXXATRN = WXXATRN;
} 
} 
break;
case 11: /* REF STRUCT(MODE161,MODE161)  */
YXXATRN_sa = (QWXATRN.data.mode11);
 /* line 1272: */
{ 
ZXXATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(ZXXATRN,((*(&(YXXATRN_sa->To))), Tprocs, &AYXATRN),((*(&(YXXATRN_sa->To))), Tprocs, &AYXATRN,(ZXXATRN).nonlocals));
BYXATRN_to = AYXATRN;
 /* line 1273: */
A_CALLPROC(NL(YVXATRN_seq_unit),((*(&(YXXATRN_sa->From))), Tprocs, &CYXATRN),((*(&(YXXATRN_sa->From))), Tprocs, &CYXATRN,(NL(YVXATRN_seq_unit)).nonlocals));
DYXATRN_from = CYXATRN;
 /* line 1274: */
 /* line 1275: */
EYXATRN = BYXATRN_to.C;
if ( ! EYXATRN )
{EYXATRN = DYXATRN_from.C;
}
if ( EYXATRN )
{ 
GYXATRN.To = BYXATRN_to.U;
GYXATRN.From = DYXATRN_from.U;
HYXATRN = A_HEAP(A68_214 ) ;
(*HYXATRN) = GYXATRN ;
FYXATRN.S = A_UNITE(IYXATRN,mode11,11,HYXATRN);
 /* line 1276: */
FYXATRN.C = A68_TRUE;
GXXATRN = FYXATRN;
} 
else
{ 
JYXATRN.S = Ss;
 /* line 1277: */
 /* line 1278: */
 /* line 1279: */
JYXATRN.C = A68_FALSE;
GXXATRN = JYXATRN;
} 
} 
break;
case 12: /* REF STRUCT(MODE161,REF MODE220)  */
KYXATRN_sc = (QWXATRN.data.mode12);
 /* line 1280: */
{ 
A_CALLPROC(NL(YVXATRN_seq_unit),((*(&(KYXATRN_sc->Input))), Tprocs, &LYXATRN),((*(&(KYXATRN_sc->Input))), Tprocs, &LYXATRN,(NL(YVXATRN_seq_unit)).nonlocals));
MYXATRN_input = LYXATRN;
 /* line 1281: */
NYXATRN = (*(&(Tprocs->Seqchoices))) ;
A_CALLPROC(NYXATRN,((*(&(KYXATRN_sc->Choices))), Tprocs, &OYXATRN),((*(&(KYXATRN_sc->Choices))), Tprocs, &OYXATRN,(NYXATRN).nonlocals));
PYXATRN_choices = OYXATRN;
 /* line 1282: */
 /* line 1283: */
QYXATRN = MYXATRN_input.C;
if ( ! QYXATRN )
{QYXATRN = PYXATRN_choices.C;
}
if ( QYXATRN )
{ 
SYXATRN.Input = MYXATRN_input.U;
SYXATRN.Choices = PYXATRN_choices.S;
TYXATRN = A_HEAP(A68_215 ) ;
(*TYXATRN) = SYXATRN ;
RYXATRN.S = A_UNITE(UYXATRN,mode12,12,TYXATRN);
 /* line 1284: */
RYXATRN.C = A68_TRUE;
GXXATRN = RYXATRN;
} 
else
{ 
VYXATRN.S = Ss;
 /* line 1285: */
 /* line 1286: */
 /* line 1287: */
VYXATRN.C = A68_FALSE;
GXXATRN = VYXATRN;
} 
} 
break;
default: 
 /* line 1288: */
 /* line 1289: */
WYXATRN = (*(&(AWLATRN_nulltprocs->Seqstep))) ;
A_CALLPROC(WYXATRN,(Ss, Tprocs, &XYXATRN),(Ss, Tprocs, &XYXATRN,(WYXATRN).nonlocals));
GXXATRN = XYXATRN;
break;
} 
} 
A_PROC_EXIT(seqstep_fntype);
*ReturnedValue = (GXXATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  AZXATRN_sequence_fntype(A68_209 * Ss, A68_353 * Tprocs, A68_341  *ReturnedValue)
{ 
A68_341  BZXATRN;  /* collateral clause result */
A68_341  CZXATRN;  /* clause result */
A68_BOOL  DZXATRN_remove;
A68_383  EZXATRN;  /* CALL */
A68_340  FZXATRN;  /* avoid structure result */
A68_340  GZXATRN_sc;
A68_210  HZXATRN;  /* united object - for case conformity */
A68_140  IZXATRN_tn;
A68_384  JZXATRN;  /* CALL */
A68_341  KZXATRN;  /* avoid structure result */
A68_341  LZXATRN_seq;
A68_BOOL  MZXATRN;  /* optbool result */
A68_341  NZXATRN;  /* collateral clause result */
A68_209  OZXATRN;  /* collateral clause result */
A68_209 * PZXATRN;  /* YIELD */
A68_341  QZXATRN;  /* collateral clause result */
A_PROC_ENTRY(sequence_fntype);
 /* line 1292: */
 /* line 1293: */
{ 
 /* line 1294: */
if ( (Ss==QAAATRN_nilsequence) )
{ 
BZXATRN.S = Ss;
 /* line 1295: */
BZXATRN.C = A68_FALSE;
CZXATRN = BZXATRN;
} 
else
{ 
DZXATRN_remove = A68_FALSE;
 /* line 1296: */
EZXATRN = (*(&(Tprocs->Seqstep))) ;
A_CALLPROC(EZXATRN,((*(&(Ss->Step))), Tprocs, &FZXATRN),((*(&(Ss->Step))), Tprocs, &FZXATRN,(EZXATRN).nonlocals));
GZXATRN_sc = FZXATRN;
 /* line 1297: */
 /* line 1298: */
HZXATRN = GZXATRN_sc.S ;
switch ( HZXATRN.mode )
{ 
case 3: /* STRUCT(INT)  */
IZXATRN_tn = (HZXATRN.data.mode3);
 /* line 1299: */
 /* line 1300: */
DZXATRN_remove = GZXATRN_sc.C;
break;
default: 
/*SKIP*/;
break;
} 
 /* line 1301: */
JZXATRN = (*(&(Tprocs->Sequence))) ;
A_CALLPROC(JZXATRN,((*(&(Ss->Rest))), Tprocs, &KZXATRN),((*(&(Ss->Rest))), Tprocs, &KZXATRN,(JZXATRN).nonlocals));
LZXATRN_seq = KZXATRN;
 /* line 1302: */
 /* line 1303: */
 /* line 1304: */
if ( DZXATRN_remove )
{ 
CZXATRN = LZXATRN_seq;
} 
else
{ 
 /* line 1305: */
MZXATRN = LZXATRN_seq.C;
if ( ! MZXATRN )
{MZXATRN = GZXATRN_sc.C;
}
if ( MZXATRN )
{ 
OZXATRN.Step = GZXATRN_sc.S;
OZXATRN.Rest = LZXATRN_seq.S;
PZXATRN = A_HEAP(A68_209 ) ;
(*PZXATRN) = OZXATRN ;
NZXATRN.S = PZXATRN;
 /* line 1306: */
NZXATRN.C = A68_TRUE;
CZXATRN = NZXATRN;
} 
else
{ 
QZXATRN.S = Ss;
 /* line 1307: */
 /* line 1308: */
 /* line 1309: */
QZXATRN.C = A68_FALSE;
CZXATRN = QZXATRN;
} 
} 
} 
} 
A_PROC_EXIT(sequence_fntype);
*ReturnedValue = (CZXATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  TZXATRN_uname_fntype(A68_166 * Un, A68_329  *ReturnedValue, void *NonLocals)
#define NL(x) (((UZXATRN_uname_fntype *)NonLocals)->x)
{ 
A68_INT  VZXATRN;  /* YIELD */
A68_161  WZXATRN_ul;
A68_161  XZXATRN;  /* united object - for case conformity */
A68_166 * YZXATRN_new;
A68_BOOL  ZZXATRN;  /* clause result */
A68_167 * AAYATRN_uf;
A68_161  BAYATRN;  /* united object - for case conformity */
A68_161  CAYATRN;  /* united object - for case conformity */
A68_166 * DAYATRN_n;
A68_BOOL  EAYATRN_changed;
A68_329  FAYATRN;  /* avoid structure result */
A68_329  GAYATRN_uc;
A68_329  HAYATRN;  /* collateral clause result */
A68_BOOL  IAYATRN;  /* optbool result */
A68_329  JAYATRN;  /* clause result */
A_PROC_ENTRY(uname_fntype);
 /* line 1318: */
 /* line 1319: */
{ 
VZXATRN = (*(&(Un->Nameno))) ;
WZXATRN_ul = (*(&A_VINDEX(NL(DIXATRN_unitlink),VZXATRN)));
 /* line 1320: */
 /* line 1321: */
 /* line 1322: */
XZXATRN = WZXATRN_ul ;
switch ( XZXATRN.mode )
{ 
case 11: /* REF STRUCT(INT,INT)  */
YZXATRN_new = (XZXATRN.data.mode11);
 /* line 1323: */
ZZXATRN = ((*(&(Un->Nameno)))!=(*(&(YZXATRN_new->Nameno))));
break;
case 12: /* REF STRUCT(MODE161,MODE161)  */
AAYATRN_uf = (XZXATRN.data.mode12);
 /* line 1324: */
 /* line 1325: */
BAYATRN = (*(&(AAYATRN_uf->Source))) ;
switch ( BAYATRN.mode )
{ 
case 34: /* REF STRUCT(INT)  */
 /* line 1326: */
CAYATRN = (*(&(AAYATRN_uf->Sink))) ;
switch ( CAYATRN.mode )
{ 
case 11: /* REF STRUCT(INT,INT)  */
DAYATRN_n = (CAYATRN.data.mode11);
 /* line 1327: */
ZZXATRN = ((*(&(Un->Nameno)))!=(*(&(DAYATRN_n->Nameno))));
break;
default: 
 /* line 1328: */
 /* line 1329: */
ZZXATRN = A68_TRUE;
break;
} 
break;
default: 
 /* line 1330: */
 /* line 1331: */
ZZXATRN = A68_TRUE;
break;
} 
break;
default: 
 /* line 1332: */
ZZXATRN = A68_TRUE;
break;
} 
EAYATRN_changed = ZZXATRN;
 /* line 1333: */
A_CALLPROC(NL(XGXATRN_coerce_ufn),(WZXATRN_ul, (*(&(Un->Sort))), &FAYATRN),(WZXATRN_ul, (*(&(Un->Sort))), &FAYATRN,(NL(XGXATRN_coerce_ufn)).nonlocals));
GAYATRN_uc = FAYATRN;
 /* line 1334: */
HAYATRN.U = GAYATRN_uc.U;
IAYATRN = EAYATRN_changed;
if ( ! IAYATRN )
{IAYATRN = GAYATRN_uc.C;
}
 /* line 1335: */
HAYATRN.C = IAYATRN;
JAYATRN = HAYATRN;
} 
A_PROC_EXIT(uname_fntype);
*ReturnedValue = (JAYATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  NAYATRN_uinst_fntype(A68_161  Uinst, A68_353 * Tprocs, A68_329  *ReturnedValue, void *NonLocals)
#define NL(x) (((OAYATRN_uinst_fntype *)NonLocals)->x)
{ 
A68_201  PAYATRN_inst;
A68_161  QAYATRN_left;
A68_161  RAYATRN_right;
A68_161  SAYATRN;  /* united object - for case conformity */
A68_178 * TAYATRN_um;
A68_161  UAYATRN;  /* OPERATORS - mode -> union mode */
A68_179 * VAYATRN_ud;
A68_INT  YAYATRN;  /* YIELD */
A68_BOOL  ZAYATRN_specchanged;
A68_376  ABYATRN;  /* CALL */
A68_222  BBYATRN;  /* OPERATORS - mode -> union mode */
A68_192  CBYATRN;  /* YIELD */
A68_333  DBYATRN;  /* avoid structure result */
A68_333  EBYATRN_dc;
A68_245  FBYATRN;  /* OPERATORS - simple index */
A68_INT  GBYATRN;  /* YIELD */
A68_237 * HBYATRN_olddec;
A68_245  IBYATRN;  /* OPERATORS - simple index */
A68_INT  JBYATRN;  /* YIELD */
A68_237 * KBYATRN_newdec;
A68_139  LBYATRN;  /* OPERATORS - mode -> union mode */
A68_143 * MBYATRN;  /* YIELD */
A68_139  NBYATRN_oldtype;
A68_139  OBYATRN;  /* OPERATORS - mode -> union mode */
A68_143 * PBYATRN;  /* YIELD */
A68_139  QBYATRN_newtype;
A68_372  SBYATRN;  /* CALL */
A68_329  TBYATRN;  /* avoid structure result */
A68_329  RBYATRN_leftc;
A68_139  UBYATRN;  /* avoid structure result */
A68_139  VBYATRN_ltype;
A68_195 * WBYATRN_llet;
A68_345  XBYATRN;  /* collateral clause result */
A68_191  YBYATRN;  /* OPERATORS - mode -> union mode */
A68_166 * ZBYATRN_luname;
A68_166  ACYATRN;  /* collateral clause result */
A68_329  BCYATRN;  /* collateral clause result */
A68_161  CCYATRN;  /* OPERATORS - mode -> union mode */
A68_320  DCYATRN;  /* collateral clause result */
A68_INT  ECYATRN_nameno;
A68_202 * FCYATRN_makename;
A68_202  GCYATRN;  /* collateral clause result */
A68_196 * HCYATRN_make;
A68_196  ICYATRN;  /* collateral clause result */
A68_345  JCYATRN;  /* collateral clause result */
A68_191  KCYATRN;  /* OPERATORS - mode -> union mode */
A68_372  LCYATRN;  /* CALL */
A68_329  MCYATRN;  /* avoid structure result */
A68_329  NCYATRN_rightc;
A68_161  OCYATRN;  /* united object - for case conformity */
A68_161  PCYATRN;  /* clause result */
A68_176  QCYATRN;  /* collateral clause result */
A68_176  RCYATRN;  /* collateral clause result */
A68_176 * SCYATRN;  /* YIELD */
A68_176 * TCYATRN;  /* YIELD */
A68_161  UCYATRN;  /* OPERATORS - mode -> union mode */
A68_161  VCYATRN_joinlhs;
A68_166  WCYATRN;  /* collateral clause result */
A68_166  XCYATRN;  /* collateral clause result */
A68_166 * YCYATRN;  /* YIELD */
A68_161  ZCYATRN;  /* OPERATORS - mode -> union mode */
A68_166 * ADYATRN;  /* YIELD */
A68_161  BDYATRN;  /* OPERATORS - mode -> union mode */
A68_161  CDYATRN;  /* avoid structure result */
A68_161  DDYATRN_unitrhs;
A68_161  EDYATRN;  /* avoid structure result */
A68_161  FDYATRN_rhssource;
A68_161  GDYATRN;  /* avoid structure result */
A68_161  HDYATRN_rhssink;
A68_167 * IDYATRN_from;
A68_167 * JDYATRN_to;
A68_329  KDYATRN;  /* collateral clause result */
A68_329  LDYATRN;  /* clause result */
A68_372  MDYATRN;  /* CALL */
A68_329  NDYATRN;  /* avoid structure result */
A_PROC_ENTRY(uinst_fntype);
 /* line 1339: */
 /* line 1340: */
{ 
 /* line 1341: */
 /* line 1342: */
SAYATRN = Uinst ;
switch ( SAYATRN.mode )
{ 
case 23: /* REF STRUCT(MODE201,MODE161)  */
TAYATRN_um = (SAYATRN.data.mode23);
 /* line 1343: */
{ 
PAYATRN_inst = (*(&(TAYATRN_um->Inst)));
 /* line 1344: */
QAYATRN_left = A_UNITE(UAYATRN,mode34,34,(&FIAATRN_unull));
 /* line 1345: */
 /* line 1346: */
RAYATRN_right = (*(&(TAYATRN_um->Right)));
} 
break;
case 24: /* REF STRUCT(MODE161,MODE201,MODE161)  */
VAYATRN_ud = (SAYATRN.data.mode24);
 /* line 1347: */
{ 
PAYATRN_inst = (*(&(VAYATRN_ud->Inst)));
 /* line 1348: */
QAYATRN_left = (*(&(VAYATRN_ud->Left)));
 /* line 1349: */
 /* line 1350: */
RAYATRN_right = (*(&(VAYATRN_ud->Right)));
} 
break;
default: 
 /* line 1351: */
A_CALLPROC(NL(FWVATRN_sysfault),(XAYATRN),(XAYATRN,(NL(FWVATRN_sysfault)).nonlocals));
break;
} 
 /* line 1353: */
YAYATRN = (*(&((&PAYATRN_inst)->Fnno))) ;
ZAYATRN_specchanged = (*(&A_VINDEX((*NL(EXVATRN_environ_specs)),YAYATRN)));
 /* line 1355: */
 /* line 1356: */
 /* line 1358: */
if ( ZAYATRN_specchanged )
{ 
ABYATRN = (*(&(Tprocs->Declaration))) ;
CBYATRN = (*LHAATRN_makefnname((*(&((&PAYATRN_inst)->Fnno))))) ;
A_CALLPROC(ABYATRN,(A_UNITE(BBYATRN,mode5,5,CBYATRN), Tprocs, &DBYATRN),(A_UNITE(BBYATRN,mode5,5,CBYATRN), Tprocs, &DBYATRN,(ABYATRN).nonlocals));
EBYATRN_dc = DBYATRN;
 /* line 1359: */
FBYATRN = (*(&((*NL(DXVATRN_environ))->Fns))) ;
GBYATRN = (*(&((&PAYATRN_inst)->Fnno))) ;
HBYATRN_olddec = (*(&A_VINDEX(FBYATRN,GBYATRN)));
 /* line 1360: */
IBYATRN = (*(&(NL(Newenv)->Fns))) ;
JBYATRN = (*(&((&PAYATRN_inst)->Fnno))) ;
KBYATRN_newdec = (*(&A_VINDEX(IBYATRN,JBYATRN)));
 /* line 1361: */
MBYATRN = MUNATRN_fndec_tfn(HBYATRN_olddec) ;
NBYATRN_oldtype = A_UNITE(LBYATRN,mode4,4,MBYATRN);
 /* line 1362: */
PBYATRN = MUNATRN_fndec_tfn(KBYATRN_newdec) ;
QBYATRN_newtype = A_UNITE(OBYATRN,mode4,4,PBYATRN);
 /* line 1364: */
SBYATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(SBYATRN,(QAYATRN_left, Tprocs, &TBYATRN),(QAYATRN_left, Tprocs, &TBYATRN,(SBYATRN).nonlocals));
RBYATRN_leftc = TBYATRN;
 /* line 1365: */
 /* line 1366: */
if ( A_CALLPROC(NL(QAWATRN_contains_diagnostics),((*(&((&RBYATRN_leftc)->U)))),((*(&((&RBYATRN_leftc)->U))),(NL(QAWATRN_contains_diagnostics)).nonlocals)) )
{ 
VUNATRN_unit_type( (*(&((&RBYATRN_leftc)->U))), NL(Fdec), (*NL(DXVATRN_environ)), &UBYATRN );
VBYATRN_ltype = UBYATRN;
 /* line 1367: */
WBYATRN_llet = A_CALLPROC(NL(BNXATRN_make_let),(NL(DWVATRN_nullnametype), (*(&((&RBYATRN_leftc)->U))), VBYATRN_ltype),(NL(DWVATRN_nullnametype), (*(&((&RBYATRN_leftc)->U))), VBYATRN_ltype,(NL(BNXATRN_make_let)).nonlocals));
 /* line 1368: */
XBYATRN.S = A_UNITE(YBYATRN,mode8,8,WBYATRN_llet);
XBYATRN.C = A68_TRUE;
A_CALLPROC(NL(UJXATRN_add_step),(XBYATRN),(XBYATRN,(NL(UJXATRN_add_step)).nonlocals));
 /* line 1369: */
ZBYATRN_luname = (A_HEAP(A68_166 ));
ACYATRN.Sort = KKAATRN_usource;
ACYATRN.Nameno = (*(&((*(&(WBYATRN_llet->Letnames)))->Nameno)));
(*ZBYATRN_luname) = ACYATRN;
 /* line 1370: */
BCYATRN.U = A_UNITE(CCYATRN,mode11,11,ZBYATRN_luname);
 /* line 1371: */
BCYATRN.C = A68_TRUE;
RBYATRN_leftc = BCYATRN;
} 
 /* line 1373: */
DCYATRN.T = QBYATRN_newtype;
DCYATRN.C = A68_TRUE;
ECYATRN_nameno = A_CALLPROC(NL(FLXATRN_add_nametype),(0, A68_TRUE, NL(DWVATRN_nullnametype), DCYATRN),(0, A68_TRUE, NL(DWVATRN_nullnametype), DCYATRN,(NL(FLXATRN_add_nametype)).nonlocals));
 /* line 1374: */
FCYATRN_makename = (A_HEAP(A68_202 ));
GCYATRN.Nameno = ECYATRN_nameno;
GCYATRN.Rest = NAAATRN_nilnames;
(*FCYATRN_makename) = GCYATRN;
 /* line 1375: */
HCYATRN_make = (A_HEAP(A68_196 ));
ICYATRN.Sizes = BBAATRN_nilformulas;
ICYATRN.Inst = PAYATRN_inst;
ICYATRN.Makenames = FCYATRN_makename;
(*HCYATRN_make) = ICYATRN;
 /* line 1376: */
JCYATRN.S = A_UNITE(KCYATRN,mode9,9,HCYATRN_make);
JCYATRN.C = A68_TRUE;
A_CALLPROC(NL(UJXATRN_add_step),(JCYATRN),(JCYATRN,(NL(UJXATRN_add_step)).nonlocals));
 /* line 1378: */
LCYATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(LCYATRN,(RAYATRN_right, Tprocs, &MCYATRN),(RAYATRN_right, Tprocs, &MCYATRN,(LCYATRN).nonlocals));
NCYATRN_rightc = MCYATRN;
 /* line 1380: */
 /* line 1381: */
 /* line 1382: */
OCYATRN = (*(&((&RBYATRN_leftc)->U))) ;
switch ( OCYATRN.mode )
{ 
case 34: /* REF STRUCT(INT)  */
 /* line 1383: */
PCYATRN = NCYATRN_rightc.U;
break;
default: 
QCYATRN.Elem = (*(&((&RBYATRN_leftc)->U)));
RCYATRN.Elem = NCYATRN_rightc.U;
RCYATRN.Rest = IAAATRN_nilustr;
 /* line 1384: */
SCYATRN = A_HEAP(A68_176 ) ;
(*SCYATRN) = RCYATRN ;
QCYATRN.Rest = SCYATRN;
TCYATRN = A_HEAP(A68_176 ) ;
(*TCYATRN) = QCYATRN ;
PCYATRN = A_UNITE(UCYATRN,mode21,21,TCYATRN);
break;
} 
VCYATRN_joinlhs = PCYATRN;
 /* line 1386: */
 /* line 1387: */
WCYATRN.Sort = KKAATRN_usource;
WCYATRN.Nameno = ECYATRN_nameno;
 /* line 1388: */
XCYATRN.Sort = LKAATRN_usink;
XCYATRN.Nameno = ECYATRN_nameno;
YCYATRN = A_HEAP(A68_166 ) ;
(*YCYATRN) = XCYATRN ;
ADYATRN = A_HEAP(A68_166 ) ;
(*ADYATRN) = WCYATRN ;
A_CALLPROC(NL(LAXATRN_make_unitlink),(NBYATRN_oldtype, A_UNITE(BDYATRN,mode11,11,ADYATRN), A_UNITE(ZCYATRN,mode11,11,YCYATRN), &CDYATRN),(NBYATRN_oldtype, A_UNITE(BDYATRN,mode11,11,ADYATRN), A_UNITE(ZCYATRN,mode11,11,YCYATRN), &CDYATRN,(NL(LAXATRN_make_unitlink)).nonlocals));
DDYATRN_unitrhs = CDYATRN;
 /* line 1389: */
A_CALLPROC(NL(EHXATRN_unitlink_source),(DDYATRN_unitrhs, &EDYATRN),(DDYATRN_unitrhs, &EDYATRN,(NL(EHXATRN_unitlink_source)).nonlocals));
FDYATRN_rhssource = EDYATRN;
 /* line 1390: */
A_CALLPROC(NL(KHXATRN_unitlink_sink),(DDYATRN_unitrhs, &GDYATRN),(DDYATRN_unitrhs, &GDYATRN,(NL(KHXATRN_unitlink_sink)).nonlocals));
HDYATRN_rhssink = GDYATRN;
 /* line 1393: */
IDYATRN_from = A_CALLPROC(NL(JVWATRN_transform_unit),(VCYATRN_joinlhs),(VCYATRN_joinlhs,(NL(JVWATRN_transform_unit)).nonlocals));
 /* line 1394: */
JDYATRN_to = A_CALLPROC(NL(JVWATRN_transform_unit),(HDYATRN_rhssink),(HDYATRN_rhssink,(NL(JVWATRN_transform_unit)).nonlocals));
 /* line 1397: */
A_CALLPROC(NL(GKXATRN_add_join),((*(&(IDYATRN_from->Source))), (*(&(JDYATRN_to->Source))), A68_TRUE),((*(&(IDYATRN_from->Source))), (*(&(JDYATRN_to->Source))), A68_TRUE,(NL(GKXATRN_add_join)).nonlocals));
 /* line 1399: */
A_CALLPROC(NL(GKXATRN_add_join),((*(&(JDYATRN_to->Sink))), (*(&(IDYATRN_from->Sink))), A68_TRUE),((*(&(JDYATRN_to->Sink))), (*(&(IDYATRN_from->Sink))), A68_TRUE,(NL(GKXATRN_add_join)).nonlocals));
 /* line 1401: */
KDYATRN.U = FDYATRN_rhssource;
 /* line 1403: */
KDYATRN.C = A68_TRUE;
LDYATRN = KDYATRN;
} 
else
{ 
 /* line 1404: */
 /* line 1405: */
MDYATRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(MDYATRN,(Uinst, Tprocs, &NDYATRN),(Uinst, Tprocs, &NDYATRN,(MDYATRN).nonlocals));
LDYATRN = NDYATRN;
} 
} 
A_PROC_EXIT(uinst_fntype);
*ReturnedValue = (LDYATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  RDYATRN_unit_fntype(A68_161  Unit, A68_353 * Tprocs, A68_329  *ReturnedValue, void *NonLocals)
#define NL(x) (((SDYATRN_unit_fntype *)NonLocals)->x)
{ 
A68_161  TDYATRN;  /* united object - for case conformity */
A68_166 * UDYATRN_un;
A68_329  VDYATRN;  /* clause result */
A68_329  WDYATRN;  /* avoid structure result */
A68_178 * XDYATRN_um;
A68_161  YDYATRN;  /* OPERATORS - mode -> union mode */
A68_329  ZDYATRN;  /* avoid structure result */
A68_179 * AEYATRN_ud;
A68_161  BEYATRN;  /* OPERATORS - mode -> union mode */
A68_329  CEYATRN;  /* avoid structure result */
A68_171 * DEYATRN_ui;
A68_329  EEYATRN;  /* avoid structure result */
A68_329  FEYATRN_uic;
A68_329  GEYATRN;  /* collateral clause result */
A68_171  HEYATRN;  /* collateral clause result */
A68_171 * IEYATRN;  /* YIELD */
A68_161  JEYATRN;  /* OPERATORS - mode -> union mode */
A68_329  KEYATRN;  /* collateral clause result */
A68_161  LEYATRN;  /* OPERATORS - mode -> union mode */
A68_123  MEYATRN;  /* OPERATORS - mode -> union mode */
A68_124 * NEYATRN;  /* YIELD */
A68_329  OEYATRN;  /* avoid structure result */
A68_172 * PEYATRN_ut;
A68_329  QEYATRN;  /* avoid structure result */
A68_329  REYATRN_utc;
A68_329  SEYATRN;  /* collateral clause result */
A68_172  TEYATRN;  /* collateral clause result */
A68_172 * UEYATRN;  /* YIELD */
A68_161  VEYATRN;  /* OPERATORS - mode -> union mode */
A68_329  WEYATRN;  /* collateral clause result */
A68_161  XEYATRN;  /* OPERATORS - mode -> union mode */
A68_329  YEYATRN;  /* avoid structure result */
A68_184 * ZEYATRN_us;
A68_139  AFYATRN;  /* avoid structure result */
A68_139  BFYATRN_t;
A68_BOOL  CFYATRN_output_tfn;
A68_372  DFYATRN;  /* CALL */
A68_329  EFYATRN;  /* avoid structure result */
A68_329  FFYATRN_urc;
A68_161  GFYATRN_out;
A68_346  HFYATRN;  /* avoid structure result */
A68_346  IFYATRN_src;
A68_329  JFYATRN;  /* collateral clause result */
A68_184  KFYATRN;  /* collateral clause result */
A68_184 * LFYATRN;  /* YIELD */
A68_161  MFYATRN;  /* OPERATORS - mode -> union mode */
A68_BOOL  NFYATRN;  /* optbool result */
A68_372  OFYATRN;  /* CALL */
A68_329  PFYATRN;  /* avoid structure result */
A_PROC_ENTRY(unit_fntype);
 /* line 1409: */
 /* line 1410: */
TDYATRN = Unit ;
switch ( TDYATRN.mode )
{ 
case 11: /* REF STRUCT(INT,INT)  */
UDYATRN_un = (TDYATRN.data.mode11);
 /* line 1411: */
A_CALLPROC(NL(SZXATRN_uname_fntype),(UDYATRN_un, &WDYATRN),(UDYATRN_un, &WDYATRN,(NL(SZXATRN_uname_fntype)).nonlocals));
VDYATRN = WDYATRN;
break;
case 23: /* REF STRUCT(MODE201,MODE161)  */
XDYATRN_um = (TDYATRN.data.mode23);
 /* line 1412: */
A_CALLPROC(NL(MAYATRN_uinst_fntype),(A_UNITE(YDYATRN,mode23,23,XDYATRN_um), Tprocs, &ZDYATRN),(A_UNITE(YDYATRN,mode23,23,XDYATRN_um), Tprocs, &ZDYATRN,(NL(MAYATRN_uinst_fntype)).nonlocals));
VDYATRN = ZDYATRN;
break;
case 24: /* REF STRUCT(MODE161,MODE201,MODE161)  */
AEYATRN_ud = (TDYATRN.data.mode24);
 /* line 1413: */
A_CALLPROC(NL(MAYATRN_uinst_fntype),(A_UNITE(BEYATRN,mode24,24,AEYATRN_ud), Tprocs, &CEYATRN),(A_UNITE(BEYATRN,mode24,24,AEYATRN_ud), Tprocs, &CEYATRN,(NL(MAYATRN_uinst_fntype)).nonlocals));
VDYATRN = CEYATRN;
break;
case 16: /* REF STRUCT(MODE161,MODE123)  */
DEYATRN_ui = (TDYATRN.data.mode16);
 /* line 1414: */
{ 
A_CALLPROC(NL(QDYATRN_unit_fntype),((*(&(DEYATRN_ui->Unit))), Tprocs, &EEYATRN),((*(&(DEYATRN_ui->Unit))), Tprocs, &EEYATRN,(NL(QDYATRN_unit_fntype)).nonlocals));
FEYATRN_uic = EEYATRN;
 /* line 1415: */
 /* line 1416: */
if ( A_CALLPROC(NL(QAWATRN_contains_diagnostics),(FEYATRN_uic.U),(FEYATRN_uic.U,(NL(QAWATRN_contains_diagnostics)).nonlocals)) )
{ 
 /* line 1417: */
if ( FEYATRN_uic.C )
{ 
HEYATRN.Unit = FEYATRN_uic.U;
HEYATRN.Index = (*(&(DEYATRN_ui->Index)));
IEYATRN = A_HEAP(A68_171 ) ;
(*IEYATRN) = HEYATRN ;
GEYATRN.U = A_UNITE(JEYATRN,mode16,16,IEYATRN);
 /* line 1418: */
GEYATRN.C = A68_TRUE;
VDYATRN = GEYATRN;
} 
else
{ 
KEYATRN.U = A_UNITE(LEYATRN,mode16,16,DEYATRN_ui);
 /* line 1419: */
 /* line 1420: */
KEYATRN.C = A68_FALSE;
VDYATRN = KEYATRN;
} 
} 
else
{ 
 /* line 1421: */
 /* line 1422: */
 /* line 1423: */
NEYATRN = NNMATRN_makefint(0) ;
CDWATRN_unit_trim( FEYATRN_uic, (*(&(DEYATRN_ui->Index))), A_UNITE(MEYATRN,mode1,1,NEYATRN), &OEYATRN );
VDYATRN = OEYATRN;
} 
} 
break;
case 17: /* REF STRUCT(MODE161,MODE138)  */
PEYATRN_ut = (TDYATRN.data.mode17);
 /* line 1424: */
{ 
A_CALLPROC(NL(QDYATRN_unit_fntype),((*(&(PEYATRN_ut->Unit))), Tprocs, &QEYATRN),((*(&(PEYATRN_ut->Unit))), Tprocs, &QEYATRN,(NL(QDYATRN_unit_fntype)).nonlocals));
REYATRN_utc = QEYATRN;
 /* line 1425: */
 /* line 1426: */
if ( A_CALLPROC(NL(QAWATRN_contains_diagnostics),(REYATRN_utc.U),(REYATRN_utc.U,(NL(QAWATRN_contains_diagnostics)).nonlocals)) )
{ 
 /* line 1427: */
if ( REYATRN_utc.C )
{ 
TEYATRN.Unit = REYATRN_utc.U;
TEYATRN.Range = (*(&(PEYATRN_ut->Range)));
UEYATRN = A_HEAP(A68_172 ) ;
(*UEYATRN) = TEYATRN ;
SEYATRN.U = A_UNITE(VEYATRN,mode17,17,UEYATRN);
 /* line 1428: */
SEYATRN.C = A68_TRUE;
VDYATRN = SEYATRN;
} 
else
{ 
WEYATRN.U = A_UNITE(XEYATRN,mode17,17,PEYATRN_ut);
 /* line 1429: */
 /* line 1430: */
WEYATRN.C = A68_FALSE;
VDYATRN = WEYATRN;
} 
} 
else
{ 
 /* line 1431: */
 /* line 1432: */
 /* line 1433: */
CDWATRN_unit_trim( REYATRN_utc, (*(&((&(PEYATRN_ut->Range))->Lwb))), (*(&((&(PEYATRN_ut->Range))->Upb))), &YEYATRN );
VDYATRN = YEYATRN;
} 
} 
break;
case 29: /* REF STRUCT(REF MODE190,MODE161)  */
ZEYATRN_us = (TDYATRN.data.mode29);
 /* line 1434: */
{ 
VUNATRN_unit_type( (*(&(ZEYATRN_us->Output))), NL(Fdec), (*NL(DXVATRN_environ)), &AFYATRN );
BFYATRN_t = AFYATRN;
 /* line 1435: */
CFYATRN_output_tfn = A_CALLPROC(NL(GXVATRN_has_type_fntype),(BFYATRN_t),(BFYATRN_t,(NL(GXVATRN_has_type_fntype)).nonlocals));
 /* line 1436: */
if ( !CFYATRN_output_tfn )
{ 
A_CALLPROC(NL(IJXATRN_start_series),(),((NL(IJXATRN_start_series)).nonlocals));
} 
 /* line 1437: */
A_CALLPROC(NL(FVXATRN_series_fntype),((*(&(ZEYATRN_us->Body))), Tprocs),((*(&(ZEYATRN_us->Body))), Tprocs,(NL(FVXATRN_series_fntype)).nonlocals));
 /* line 1438: */
DFYATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(DFYATRN,((*(&(ZEYATRN_us->Output))), Tprocs, &EFYATRN),((*(&(ZEYATRN_us->Output))), Tprocs, &EFYATRN,(DFYATRN).nonlocals));
FFYATRN_urc = EFYATRN;
 /* line 1439: */
 /* line 1440: */
if ( !CFYATRN_output_tfn )
{ 
GFYATRN_out = (*(&(A_CALLPROC(NL(JVWATRN_transform_unit),(FFYATRN_urc.U),(FFYATRN_urc.U,(NL(JVWATRN_transform_unit)).nonlocals))->Source)));
 /* line 1441: */
A_CALLPROC(NL(NJXATRN_finish_series),( &HFYATRN),( &HFYATRN,(NL(NJXATRN_finish_series)).nonlocals));
IFYATRN_src = HFYATRN;
 /* line 1442: */
KFYATRN.Body = IFYATRN_src.S;
KFYATRN.Output = GFYATRN_out;
LFYATRN = A_HEAP(A68_184 ) ;
(*LFYATRN) = KFYATRN ;
JFYATRN.U = A_UNITE(MFYATRN,mode29,29,LFYATRN);
NFYATRN = FFYATRN_urc.C;
if ( ! NFYATRN )
{NFYATRN = IFYATRN_src.C;
}
 /* line 1443: */
JFYATRN.C = NFYATRN;
VDYATRN = JFYATRN;
} 
else
{ 
 /* line 1444: */
 /* line 1445: */
 /* line 1446: */
VDYATRN = FFYATRN_urc;
} 
} 
break;
default: 
 /* line 1447: */
OFYATRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(OFYATRN,(Unit, Tprocs, &PFYATRN),(Unit, Tprocs, &PFYATRN,(OFYATRN).nonlocals));
VDYATRN = PFYATRN;
break;
} 
A_PROC_EXIT(unit_fntype);
*ReturnedValue = (VDYATRN);
return;
} 
#undef NL
 /* line 1453: */

A_STATIC A68_202 * VFYATRN_terminals_fntype(A68_202 * Terminals, A68_353 * Tprocs, A68_BOOL  Input, A68_320  Tc, void *NonLocals)
#define NL(x) (((WFYATRN_terminals_fntype *)NonLocals)->x)
{ 
A68_320  XFYATRN;  /* collateral clause result */
A68_INT  YFYATRN_newnameno;
A68_202  ZFYATRN;  /* collateral clause result */
A68_202 * AGYATRN;  /* clause result */
A68_202 * BGYATRN;  /* YIELD */
A68_337  CGYATRN;  /* avoid structure result */
A_PROC_ENTRY(terminals_fntype);
 /* line 1454: */
 /* line 1455: */
{ 
 /* line 1456: */
 /* line 1457: */
if ( Tc.C )
{ 
XFYATRN.T = Tc.T;
XFYATRN.C = A68_TRUE;
YFYATRN_newnameno = A_CALLPROC(NL(FLXATRN_add_nametype),(0, A68_FALSE, NL(DWVATRN_nullnametype), XFYATRN),(0, A68_FALSE, NL(DWVATRN_nullnametype), XFYATRN,(NL(FLXATRN_add_nametype)).nonlocals));
 /* line 1458: */
ZFYATRN.Nameno = YFYATRN_newnameno;
 /* line 1459: */
ZFYATRN.Rest = NAAATRN_nilnames;
BGYATRN = A_HEAP(A68_202 ) ;
(*BGYATRN) = ZFYATRN ;
AGYATRN = BGYATRN;
} 
else
{ 
 /* line 1460: */
 /* line 1461: */
A_CALLPROC(NL(RNXATRN_names_nameno),(Terminals, Tprocs, Input, &CGYATRN),(Terminals, Tprocs, Input, &CGYATRN,(NL(RNXATRN_names_nameno)).nonlocals));
AGYATRN = CGYATRN.N;
} 
} 
A_PROC_EXIT(terminals_fntype);
return( AGYATRN );
} 
#undef NL
 /* line 1464: */

A_STATIC A68_VOID  IGYATRN_output_fntype(A68_161  Output, A68_353 * Tprocs, A68_161  Outputlink, A68_BOOL  Specchanged, A68_329  *ReturnedValue, void *NonLocals)
#define NL(x) (((JGYATRN_output_fntype *)NonLocals)->x)
{ 
A68_372  KGYATRN;  /* CALL */
A68_329  LGYATRN;  /* avoid structure result */
A68_329  MGYATRN_uc;
A68_BOOL  NGYATRN;  /* optbool result */
A68_161  OGYATRN;  /* united object - for case conformity */
A68_BOOL  PGYATRN;  /* clause result */
A68_167 * QGYATRN_spec;
A68_167 * RGYATRN_out;
A68_329  SGYATRN;  /* collateral clause result */
A68_161  TGYATRN;  /* OPERATORS - mode -> union mode */
A68_329  UGYATRN;  /* clause result */
A68_329  VGYATRN;  /* collateral clause result */
A_PROC_ENTRY(output_fntype);
 /* line 1465: */
 /* line 1466: */
{ 
KGYATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(KGYATRN,(Output, Tprocs, &LGYATRN),(Output, Tprocs, &LGYATRN,(KGYATRN).nonlocals));
MGYATRN_uc = LGYATRN;
 /* line 1467: */
 /* line 1468: */
NGYATRN = Specchanged;
if ( NGYATRN )
{OGYATRN = MGYATRN_uc.U ;
switch ( OGYATRN.mode )
{ 
case 34: /* REF STRUCT(INT)  */
PGYATRN = A68_FALSE;
break;
default: 
 /* line 1469: */
PGYATRN = A68_TRUE;
break;
} 
NGYATRN = PGYATRN;
}
if ( NGYATRN )
{ 
QGYATRN_spec = A_CALLPROC(NL(JVWATRN_transform_unit),(Outputlink),(Outputlink,(NL(JVWATRN_transform_unit)).nonlocals));
 /* line 1470: */
RGYATRN_out = A_CALLPROC(NL(JVWATRN_transform_unit),(MGYATRN_uc.U),(MGYATRN_uc.U,(NL(JVWATRN_transform_unit)).nonlocals));
 /* line 1471: */
A_CALLPROC(NL(GKXATRN_add_join),((*(&(RGYATRN_out->Source))), (*(&(QGYATRN_spec->Sink))), A68_TRUE),((*(&(RGYATRN_out->Source))), (*(&(QGYATRN_spec->Sink))), A68_TRUE,(NL(GKXATRN_add_join)).nonlocals));
 /* line 1472: */
A_CALLPROC(NL(GKXATRN_add_join),((*(&(QGYATRN_spec->Source))), (*(&(RGYATRN_out->Sink))), A68_TRUE),((*(&(QGYATRN_spec->Source))), (*(&(RGYATRN_out->Sink))), A68_TRUE,(NL(GKXATRN_add_join)).nonlocals));
 /* line 1473: */
SGYATRN.U = A_UNITE(TGYATRN,mode34,34,(&FIAATRN_unull));
 /* line 1474: */
SGYATRN.C = A68_TRUE;
UGYATRN = SGYATRN;
} 
else
{ 
VGYATRN.U = (*(&(A_CALLPROC(NL(JVWATRN_transform_unit),(MGYATRN_uc.U),(MGYATRN_uc.U,(NL(JVWATRN_transform_unit)).nonlocals))->Source)));
 /* line 1475: */
 /* line 1476: */
VGYATRN.C = MGYATRN_uc.C;
UGYATRN = VGYATRN;
} 
} 
A_PROC_EXIT(output_fntype);
*ReturnedValue = (UGYATRN);
return;
} 
#undef NL
 /* line 1479: */

A_STATIC A68_VOID  CHYATRN_add_terminal_names(A68_202 * Ts, A68_353 * Tprocs, A68_161  Link, A68_BOOL  Input, A68_BOOL  Seq, void *NonLocals)
#define NL(x) (((DHYATRN_add_terminal_names *)NonLocals)->x)
{ 
A68_202 * EHYATRN_terms;
A68_176  FHYATRN;  /* collateral clause result */
A68_176 * GHYATRN;  /* clause result */
A68_176 * HHYATRN;  /* YIELD */
A68_161  IHYATRN;  /* united object - for case conformity */
A68_176 * JHYATRN_ust;
A68_176 * KHYATRN_namelink;
A68_INT  LHYATRN_nameno;
A68_161 * MHYATRN;  /* YIELD */
A68_239  NHYATRN;  /* OPERATORS - simple index */
A68_236  OHYATRN_nametype;
A68_363  PHYATRN;  /* CALL */
A68_320  QHYATRN;  /* avoid structure result */
A68_320  RHYATRN_tyc;
A68_139  SHYATRN;  /* clause result */
A68_363  THYATRN;  /* CALL */
A68_320  UHYATRN;  /* avoid structure result */
A68_139  VHYATRN_t;
A68_195 * WHYATRN_let;
A68_211 * XHYATRN_sl;
A68_195 * YHYATRN;  /* YIELD */
A68_340  ZHYATRN;  /* collateral clause result */
A68_210  AIYATRN;  /* OPERATORS - mode -> union mode */
A68_345  BIYATRN;  /* collateral clause result */
A68_191  CIYATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(add_terminal_names);
 /* line 1480: */
 /* line 1481: */
{ 
EHYATRN_terms = Ts;
 /* line 1482: */
 /* line 1483: */
 /* line 1484: */
if ( ((*(&(EHYATRN_terms->Rest)))==NAAATRN_nilnames) )
{ 
FHYATRN.Elem = Link;
 /* line 1485: */
FHYATRN.Rest = IAAATRN_nilustr;
HHYATRN = A_HEAP(A68_176 ) ;
(*HHYATRN) = FHYATRN ;
GHYATRN = HHYATRN;
} 
else
{ 
IHYATRN = Link ;
switch ( IHYATRN.mode )
{ 
case 21: /* REF STRUCT(MODE161,REF MODE176)  */
JHYATRN_ust = (IHYATRN.data.mode21);
GHYATRN = JHYATRN_ust;
break;
default: 
 /* line 1486: */
GHYATRN = IAAATRN_nilustr;
break;
} 
} 
KHYATRN_namelink = GHYATRN;
 /* line 1488: */
for ( ;; )
{ 
 /* line 1489: */
if ( !((EHYATRN_terms!=NAAATRN_nilnames)) ) break;
LHYATRN_nameno = (*(&(EHYATRN_terms->Nameno)));
 /* line 1490: */
MHYATRN = (&A_VINDEX(NL(DIXATRN_unitlink),LHYATRN_nameno)) ;
(*MHYATRN) = (*(&(KHYATRN_namelink->Elem)));
 /* line 1491: */
NHYATRN = (*(&(NL(Fdec)->Nametypes))) ;
OHYATRN_nametype = (*(&A_VINDEX(NHYATRN,LHYATRN_nameno)));
 /* line 1492: */
PHYATRN = (*(&(Tprocs->Type))) ;
A_CALLPROC(PHYATRN,(OHYATRN_nametype.Type, Tprocs, &QHYATRN),(OHYATRN_nametype.Type, Tprocs, &QHYATRN,(PHYATRN).nonlocals));
RHYATRN_tyc = QHYATRN;
 /* line 1493: */
 /* line 1494: */
 /* line 1495: */
if ( Input )
{ 
SHYATRN = RHYATRN_tyc.T;
} 
else
{ 
 /* line 1496: */
THYATRN = (*(&(NL(NCWATRN_swap_tfn)->Type))) ;
A_CALLPROC(THYATRN,(RHYATRN_tyc.T, NL(NCWATRN_swap_tfn), &UHYATRN),(RHYATRN_tyc.T, NL(NCWATRN_swap_tfn), &UHYATRN,(THYATRN).nonlocals));
SHYATRN = UHYATRN.T;
} 
VHYATRN_t = SHYATRN;
 /* line 1497: */
WHYATRN_let = A_CALLPROC(NL(BNXATRN_make_let),(OHYATRN_nametype, (*(&(KHYATRN_namelink->Elem))), VHYATRN_t),(OHYATRN_nametype, (*(&(KHYATRN_namelink->Elem))), VHYATRN_t,(NL(BNXATRN_make_let)).nonlocals));
 /* line 1498: */
 /* line 1499: */
if ( Seq )
{ 
XHYATRN_sl = (A_HEAP(A68_211 ));
YHYATRN = (&(XHYATRN_sl->Seqlet)) ;
(*YHYATRN) = (*WHYATRN_let);
 /* line 1500: */
ZHYATRN.S = A_UNITE(AIYATRN,mode8,8,XHYATRN_sl);
ZHYATRN.C = A68_TRUE;
 /* line 1501: */
A_CALLPROC(NL(UIXATRN_add_seqstep),(ZHYATRN),(ZHYATRN,(NL(UIXATRN_add_seqstep)).nonlocals));
} 
else
{ 
BIYATRN.S = A_UNITE(CIYATRN,mode8,8,WHYATRN_let);
BIYATRN.C = A68_TRUE;
 /* line 1502: */
A_CALLPROC(NL(UJXATRN_add_step),(BIYATRN),(BIYATRN,(NL(UJXATRN_add_step)).nonlocals));
} 
 /* line 1503: */
KHYATRN_namelink = (*(&(KHYATRN_namelink->Rest)));
 /* line 1504: */
 /* line 1505: */
EHYATRN_terms = (*(&(EHYATRN_terms->Rest)));
}
 /* line 1506: */
} 
A_PROC_EXIT(add_terminal_names);
return;
} 
#undef NL
 /* line 1509: */

A_STATIC A68_VOID  KIYATRN_fnbody_fntype(A68_233  Fnbody, A68_353 * Tprocs, A68_BOOL  Specchanged, A68_161  Link, A68_143 * Spectype, A68_240 * Newenv, A68_347  *ReturnedValue, void *NonLocals)
#define NL(x) (((LIYATRN_fnbody_fntype *)NonLocals)->x)
{ 
A68_161  MIYATRN;  /* avoid structure result */
A68_161  NIYATRN_outputlink;
A68_161  OIYATRN;  /* avoid structure result */
A68_161  PIYATRN_linkso;
A68_372  QIYATRN;  /* CALL */
A68_329  RIYATRN;  /* avoid structure result */
A68_161  SIYATRN_linksi;
A68_233  TIYATRN;  /* united object - for case conformity */
A68_206 * UIYATRN_tag;
A68_161  VIYATRN;  /* united object - for case conformity */
A68_184 * WIYATRN_us;
A68_329  XIYATRN;  /* avoid structure result */
A68_329  YIYATRN_urc;
A68_346  ZIYATRN;  /* avoid structure result */
A68_346  AJYATRN_src;
A68_BOOL  BJYATRN;  /* optbool result */
A68_184 * CJYATRN_ser;
A68_184  DJYATRN;  /* collateral clause result */
A68_347  EJYATRN;  /* collateral clause result */
A68_161  FJYATRN;  /* OPERATORS - mode -> union mode */
A68_233  GJYATRN;  /* OPERATORS - mode -> union mode */
A68_206 * HJYATRN;  /* YIELD */
A68_347  IJYATRN;  /* clause result */
A68_347  JJYATRN;  /* collateral clause result */
A68_233  KJYATRN;  /* OPERATORS - mode -> union mode */
A68_183 * LJYATRN_uq;
A68_384  MJYATRN;  /* CALL */
A68_341  NJYATRN;  /* avoid structure result */
A68_341  OJYATRN_sqc;
A68_329  PJYATRN;  /* avoid structure result */
A68_329  QJYATRN_qc;
A68_346  RJYATRN;  /* avoid structure result */
A68_346  SJYATRN_sqrc;
A68_184 * TJYATRN_outputser;
A68_184  UJYATRN;  /* collateral clause result */
A68_161  VJYATRN;  /* OPERATORS - mode -> union mode */
A68_211 * WJYATRN_sl;
A68_139  XJYATRN;  /* OPERATORS - mode -> union mode */
A68_161  YJYATRN;  /* OPERATORS - mode -> union mode */
A68_195 * ZJYATRN;  /* YIELD */
A68_340  AKYATRN;  /* collateral clause result */
A68_210  BKYATRN;  /* OPERATORS - mode -> union mode */
A68_341  CKYATRN;  /* avoid structure result */
A68_341  DKYATRN_seqc;
A68_BOOL  EKYATRN;  /* optbool result */
A68_183 * FKYATRN_seq;
A68_183  GKYATRN;  /* collateral clause result */
A68_347  HKYATRN;  /* collateral clause result */
A68_161  IKYATRN;  /* OPERATORS - mode -> union mode */
A68_233  JKYATRN;  /* OPERATORS - mode -> union mode */
A68_206 * KKYATRN;  /* YIELD */
A68_347  LKYATRN;  /* collateral clause result */
A68_233  MKYATRN;  /* OPERATORS - mode -> union mode */
A68_329  NKYATRN;  /* avoid structure result */
A68_329  OKYATRN_uc;
A68_161  PKYATRN_out;
A68_346  QKYATRN;  /* avoid structure result */
A68_346  RKYATRN_sc;
A68_184  SKYATRN;  /* collateral clause result */
A68_161  TKYATRN;  /* clause result */
A68_184 * UKYATRN;  /* YIELD */
A68_161  VKYATRN;  /* OPERATORS - mode -> union mode */
A68_161  WKYATRN_result;
A68_BOOL  XKYATRN;  /* optbool result */
A68_347  YKYATRN;  /* collateral clause result */
A68_233  ZKYATRN;  /* OPERATORS - mode -> union mode */
A68_206 * ALYATRN;  /* YIELD */
A68_347  BLYATRN;  /* collateral clause result */
A68_233  CLYATRN;  /* OPERATORS - mode -> union mode */
A68_225 * DLYATRN_rf;
A68_INT  ELYATRN_fnno;
A68_345  FLYATRN;  /* collateral clause result */
A68_191  GLYATRN;  /* OPERATORS - mode -> union mode */
A68_192  HLYATRN;  /* YIELD */
A68_346  ILYATRN;  /* avoid structure result */
A68_346  JLYATRN_rc;
A68_201  KLYATRN;  /* collateral clause result */
A68_114  LLYATRN;  /* OPERATORS - mode -> union mode */
A68_201  MLYATRN_inst;
A68_178 * NLYATRN_rout;
A68_178  OLYATRN;  /* collateral clause result */
A68_166  PLYATRN;  /* collateral clause result */
A68_166 * QLYATRN;  /* YIELD */
A68_161  RLYATRN;  /* OPERATORS - mode -> union mode */
A68_347  SLYATRN;  /* collateral clause result */
A68_184  TLYATRN;  /* collateral clause result */
A68_161  ULYATRN;  /* OPERATORS - mode -> union mode */
A68_184 * VLYATRN;  /* YIELD */
A68_161  WLYATRN;  /* OPERATORS - mode -> union mode */
A68_233  XLYATRN;  /* OPERATORS - mode -> union mode */
A68_206 * YLYATRN;  /* YIELD */
A68_346  ZLYATRN;  /* avoid structure result */
A68_347  AMYATRN;  /* collateral clause result */
A68_347  BMYATRN;  /* collateral clause result */
A68_347  CMYATRN;  /* collateral clause result */
A_PROC_ENTRY(fnbody_fntype);
 /* line 1511: */
 /* line 1512: */
{ 
A_CALLPROC(NL(EHXATRN_unitlink_source),(Link, &MIYATRN),(Link, &MIYATRN,(NL(EHXATRN_unitlink_source)).nonlocals));
NIYATRN_outputlink = MIYATRN;
 /* line 1513: */
A_CALLPROC(NL(KHXATRN_unitlink_sink),(Link, &OIYATRN),(Link, &OIYATRN,(NL(KHXATRN_unitlink_sink)).nonlocals));
PIYATRN_linkso = OIYATRN;
 /* line 1514: */
QIYATRN = (*(&(NL(RBWATRN_swap_ufn)->Unit))) ;
A_CALLPROC(QIYATRN,(NIYATRN_outputlink, NL(RBWATRN_swap_ufn), &RIYATRN),(NIYATRN_outputlink, NL(RBWATRN_swap_ufn), &RIYATRN,(QIYATRN).nonlocals));
SIYATRN_linksi = RIYATRN.U;
 /* line 1516: */
 /* line 1517: */
TIYATRN = Fnbody ;
switch ( TIYATRN.mode )
{ 
case 1: /* REF STRUCT(MODE161)  */
UIYATRN_tag = (TIYATRN.data.mode1);
 /* line 1518: */
 /* line 1519: */
VIYATRN = (*(&(UIYATRN_tag->Tag))) ;
switch ( VIYATRN.mode )
{ 
case 29: /* REF STRUCT(REF MODE190,MODE161)  */
WIYATRN_us = (VIYATRN.data.mode29);
 /* line 1520: */
{ 
A_CALLPROC(NL(IJXATRN_start_series),(),((NL(IJXATRN_start_series)).nonlocals));
 /* line 1521: */
 /* line 1522: */
if ( Specchanged )
{ 
 /* line 1523: */
A_CALLPROC(NL(BHYATRN_add_terminal_names),((*(&(NL(Fdec)->Inputs))), Tprocs, PIYATRN_linkso, A68_TRUE, A68_FALSE),((*(&(NL(Fdec)->Inputs))), Tprocs, PIYATRN_linkso, A68_TRUE, A68_FALSE,(NL(BHYATRN_add_terminal_names)).nonlocals));
 /* line 1524: */
 /* line 1525: */
 /* line 1526: */
A_CALLPROC(NL(BHYATRN_add_terminal_names),((*(&(NL(Fdec)->Outputs))), Tprocs, SIYATRN_linksi, A68_FALSE, A68_FALSE),((*(&(NL(Fdec)->Outputs))), Tprocs, SIYATRN_linksi, A68_FALSE, A68_FALSE,(NL(BHYATRN_add_terminal_names)).nonlocals));
} 
 /* line 1527: */
A_CALLPROC(NL(FVXATRN_series_fntype),((*(&(WIYATRN_us->Body))), Tprocs),((*(&(WIYATRN_us->Body))), Tprocs,(NL(FVXATRN_series_fntype)).nonlocals));
 /* line 1528: */
 /* line 1529: */
A_CALLPROC(NL(HGYATRN_output_fntype),((*(&(WIYATRN_us->Output))), Tprocs, SIYATRN_linksi, Specchanged, &XIYATRN),((*(&(WIYATRN_us->Output))), Tprocs, SIYATRN_linksi, Specchanged, &XIYATRN,(NL(HGYATRN_output_fntype)).nonlocals));
YIYATRN_urc = XIYATRN;
 /* line 1530: */
A_CALLPROC(NL(NJXATRN_finish_series),( &ZIYATRN),( &ZIYATRN,(NL(NJXATRN_finish_series)).nonlocals));
AJYATRN_src = ZIYATRN;
 /* line 1531: */
 /* line 1532: */
BJYATRN = AJYATRN_src.C;
if ( ! BJYATRN )
{BJYATRN = YIYATRN_urc.C;
}
if ( BJYATRN )
{ 
CJYATRN_ser = (A_HEAP(A68_184 ));
DJYATRN.Body = AJYATRN_src.S;
DJYATRN.Output = YIYATRN_urc.U;
(*CJYATRN_ser) = DJYATRN;
 /* line 1533: */
HJYATRN = WGAATRN_makeunittag(A_UNITE(FJYATRN,mode29,29,CJYATRN_ser)) ;
EJYATRN.F = A_UNITE(GJYATRN,mode1,1,HJYATRN);
 /* line 1534: */
EJYATRN.C = A68_TRUE;
IJYATRN = EJYATRN;
} 
else
{ 
JJYATRN.F = A_UNITE(KJYATRN,mode1,1,UIYATRN_tag);
 /* line 1535: */
 /* line 1536: */
 /* line 1537: */
JJYATRN.C = A68_FALSE;
IJYATRN = JJYATRN;
} 
} 
break;
case 28: /* REF STRUCT(REF MODE209,MODE161)  */
LJYATRN_uq = (VIYATRN.data.mode28);
 /* line 1538: */
{ 
A_CALLPROC(NL(LIXATRN_start_sequence),(),((NL(LIXATRN_start_sequence)).nonlocals));
 /* line 1539: */
 /* line 1540: */
if ( Specchanged )
{ 
 /* line 1541: */
A_CALLPROC(NL(BHYATRN_add_terminal_names),((*(&(NL(Fdec)->Inputs))), Tprocs, PIYATRN_linkso, A68_TRUE, A68_TRUE),((*(&(NL(Fdec)->Inputs))), Tprocs, PIYATRN_linkso, A68_TRUE, A68_TRUE,(NL(BHYATRN_add_terminal_names)).nonlocals));
 /* line 1542: */
 /* line 1543: */
 /* line 1544: */
A_CALLPROC(NL(BHYATRN_add_terminal_names),((*(&(NL(Fdec)->Outputs))), Tprocs, SIYATRN_linksi, A68_FALSE, A68_TRUE),((*(&(NL(Fdec)->Outputs))), Tprocs, SIYATRN_linksi, A68_FALSE, A68_TRUE,(NL(BHYATRN_add_terminal_names)).nonlocals));
} 
 /* line 1545: */
MJYATRN = (*(&(Tprocs->Sequence))) ;
A_CALLPROC(MJYATRN,((*(&(LJYATRN_uq->Body))), Tprocs, &NJYATRN),((*(&(LJYATRN_uq->Body))), Tprocs, &NJYATRN,(MJYATRN).nonlocals));
OJYATRN_sqc = NJYATRN;
 /* line 1546: */
A_CALLPROC(NL(AJXATRN_add_sequence),(OJYATRN_sqc),(OJYATRN_sqc,(NL(AJXATRN_add_sequence)).nonlocals));
 /* line 1547: */
A_CALLPROC(NL(IJXATRN_start_series),(),((NL(IJXATRN_start_series)).nonlocals));
 /* line 1548: */
 /* line 1549: */
A_CALLPROC(NL(HGYATRN_output_fntype),((*(&(LJYATRN_uq->Output))), Tprocs, SIYATRN_linksi, Specchanged, &PJYATRN),((*(&(LJYATRN_uq->Output))), Tprocs, SIYATRN_linksi, Specchanged, &PJYATRN,(NL(HGYATRN_output_fntype)).nonlocals));
QJYATRN_qc = PJYATRN;
 /* line 1550: */
A_CALLPROC(NL(NJXATRN_finish_series),( &RJYATRN),( &RJYATRN,(NL(NJXATRN_finish_series)).nonlocals));
SJYATRN_sqrc = RJYATRN;
 /* line 1551: */
 /* line 1552: */
if ( SJYATRN_sqrc.C )
{ 
TJYATRN_outputser = (A_HEAP(A68_184 ));
UJYATRN.Body = SJYATRN_sqrc.S;
UJYATRN.Output = A_UNITE(VJYATRN,mode6,6,(&RIAATRN_cvoid));
(*TJYATRN_outputser) = UJYATRN;
 /* line 1553: */
WJYATRN_sl = (A_HEAP(A68_211 ));
 /* line 1554: */
ZJYATRN = (&(WJYATRN_sl->Seqlet)) ;
(*ZJYATRN) = (*A_CALLPROC(NL(BNXATRN_make_let),(NL(DWVATRN_nullnametype), A_UNITE(YJYATRN,mode29,29,TJYATRN_outputser), A_UNITE(XJYATRN,mode7,7,(&PIAATRN_tvoid))),(NL(DWVATRN_nullnametype), A_UNITE(YJYATRN,mode29,29,TJYATRN_outputser), A_UNITE(XJYATRN,mode7,7,(&PIAATRN_tvoid)),(NL(BNXATRN_make_let)).nonlocals)));
 /* line 1555: */
AKYATRN.S = A_UNITE(BKYATRN,mode8,8,WJYATRN_sl);
AKYATRN.C = A68_TRUE;
 /* line 1556: */
A_CALLPROC(NL(UIXATRN_add_seqstep),(AKYATRN),(AKYATRN,(NL(UIXATRN_add_seqstep)).nonlocals));
} 
 /* line 1557: */
A_CALLPROC(NL(OIXATRN_finish_sequence),( &CKYATRN),( &CKYATRN,(NL(OIXATRN_finish_sequence)).nonlocals));
DKYATRN_seqc = CKYATRN;
 /* line 1558: */
 /* line 1559: */
EKYATRN = DKYATRN_seqc.C;
if ( ! EKYATRN )
{EKYATRN = QJYATRN_qc.C;
}
if ( EKYATRN )
{ 
FKYATRN_seq = (A_HEAP(A68_183 ));
GKYATRN.Body = DKYATRN_seqc.S;
GKYATRN.Output = QJYATRN_qc.U;
(*FKYATRN_seq) = GKYATRN;
 /* line 1560: */
KKYATRN = WGAATRN_makeunittag(A_UNITE(IKYATRN,mode28,28,FKYATRN_seq)) ;
HKYATRN.F = A_UNITE(JKYATRN,mode1,1,KKYATRN);
 /* line 1561: */
HKYATRN.C = A68_TRUE;
IJYATRN = HKYATRN;
} 
else
{ 
LKYATRN.F = A_UNITE(MKYATRN,mode1,1,UIYATRN_tag);
 /* line 1562: */
 /* line 1563: */
 /* line 1564: */
LKYATRN.C = A68_FALSE;
IJYATRN = LKYATRN;
} 
} 
break;
default: 
A_CALLPROC(NL(IJXATRN_start_series),(),((NL(IJXATRN_start_series)).nonlocals));
 /* line 1565: */
 /* line 1566: */
if ( Specchanged )
{ 
 /* line 1567: */
A_CALLPROC(NL(BHYATRN_add_terminal_names),((*(&(NL(Fdec)->Inputs))), Tprocs, PIYATRN_linkso, A68_TRUE, A68_FALSE),((*(&(NL(Fdec)->Inputs))), Tprocs, PIYATRN_linkso, A68_TRUE, A68_FALSE,(NL(BHYATRN_add_terminal_names)).nonlocals));
 /* line 1568: */
 /* line 1569: */
 /* line 1570: */
A_CALLPROC(NL(BHYATRN_add_terminal_names),((*(&(NL(Fdec)->Outputs))), Tprocs, SIYATRN_linksi, A68_FALSE, A68_FALSE),((*(&(NL(Fdec)->Outputs))), Tprocs, SIYATRN_linksi, A68_FALSE, A68_FALSE,(NL(BHYATRN_add_terminal_names)).nonlocals));
} 
 /* line 1571: */
 /* line 1572: */
A_CALLPROC(NL(HGYATRN_output_fntype),((*(&(UIYATRN_tag->Tag))), Tprocs, SIYATRN_linksi, Specchanged, &NKYATRN),((*(&(UIYATRN_tag->Tag))), Tprocs, SIYATRN_linksi, Specchanged, &NKYATRN,(NL(HGYATRN_output_fntype)).nonlocals));
OKYATRN_uc = NKYATRN;
 /* line 1573: */
PKYATRN_out = (*(&(A_CALLPROC(NL(JVWATRN_transform_unit),(OKYATRN_uc.U),(OKYATRN_uc.U,(NL(JVWATRN_transform_unit)).nonlocals))->Source)));
 /* line 1574: */
A_CALLPROC(NL(NJXATRN_finish_series),( &QKYATRN),( &QKYATRN,(NL(NJXATRN_finish_series)).nonlocals));
RKYATRN_sc = QKYATRN;
 /* line 1575: */
 /* line 1576: */
 /* line 1577: */
if ( RKYATRN_sc.C )
{ 
SKYATRN.Body = RKYATRN_sc.S;
 /* line 1578: */
SKYATRN.Output = PKYATRN_out;
 /* line 1579: */
UKYATRN = A_HEAP(A68_184 ) ;
(*UKYATRN) = SKYATRN ;
TKYATRN = A_UNITE(VKYATRN,mode29,29,UKYATRN);
} 
else
{ 
TKYATRN = PKYATRN_out;
} 
WKYATRN_result = TKYATRN;
 /* line 1580: */
 /* line 1581: */
XKYATRN = OKYATRN_uc.C;
if ( ! XKYATRN )
{XKYATRN = RKYATRN_sc.C;
}
if ( XKYATRN )
{ 
ALYATRN = WGAATRN_makeunittag(WKYATRN_result) ;
YKYATRN.F = A_UNITE(ZKYATRN,mode1,1,ALYATRN);
 /* line 1582: */
YKYATRN.C = A68_TRUE;
IJYATRN = YKYATRN;
} 
else
{ 
BLYATRN.F = A_UNITE(CLYATRN,mode1,1,UIYATRN_tag);
 /* line 1583: */
 /* line 1584: */
 /* line 1586: */
BLYATRN.C = A68_FALSE;
IJYATRN = BLYATRN;
} 
break;
} 
break;
case 4: /* REF STRUCT(INT)  */
DLYATRN_rf = (TIYATRN.data.mode4);
 /* line 1587: */
 /* line 1588: */
if ( Specchanged )
{ 
A_CALLPROC(NL(IJXATRN_start_series),(),((NL(IJXATRN_start_series)).nonlocals));
 /* line 1589: */
 /* line 1590: */
if ( Specchanged )
{ 
 /* line 1591: */
A_CALLPROC(NL(BHYATRN_add_terminal_names),((*(&(NL(Fdec)->Inputs))), Tprocs, PIYATRN_linkso, A68_TRUE, A68_FALSE),((*(&(NL(Fdec)->Inputs))), Tprocs, PIYATRN_linkso, A68_TRUE, A68_FALSE,(NL(BHYATRN_add_terminal_names)).nonlocals));
 /* line 1592: */
 /* line 1593: */
 /* line 1594: */
A_CALLPROC(NL(BHYATRN_add_terminal_names),((*(&(NL(Fdec)->Outputs))), Tprocs, SIYATRN_linksi, A68_FALSE, A68_FALSE),((*(&(NL(Fdec)->Outputs))), Tprocs, SIYATRN_linksi, A68_FALSE, A68_FALSE,(NL(BHYATRN_add_terminal_names)).nonlocals));
} 
 /* line 1595: */
 /* line 1596: */
if ( (*NL(DJXATRN_serieschanged)) )
{ 
ELYATRN_fnno = IJWATRN_add_reform(Spectype, Newenv);
 /* line 1597: */
HLYATRN = (*LHAATRN_makefnname(ELYATRN_fnno)) ;
FLYATRN.S = A_UNITE(GLYATRN,mode5,5,HLYATRN);
FLYATRN.C = A68_TRUE;
A_CALLPROC(NL(UJXATRN_add_step),(FLYATRN),(FLYATRN,(NL(UJXATRN_add_step)).nonlocals));
 /* line 1598: */
A_CALLPROC(NL(NJXATRN_finish_series),( &ILYATRN),( &ILYATRN,(NL(NJXATRN_finish_series)).nonlocals));
JLYATRN_rc = ILYATRN;
 /* line 1599: */
KLYATRN.Fnno = ELYATRN_fnno;
KLYATRN.Macparams = ABAATRN_nilmacparams;
KLYATRN.Attr = A_UNITE(LLYATRN,mode5,5,(&ZHAATRN_attrnull));
MLYATRN_inst = KLYATRN;
 /* line 1600: */
NLYATRN_rout = (A_HEAP(A68_178 ));
OLYATRN.Inst = MLYATRN_inst;
PLYATRN.Sort = KKAATRN_usource;
PLYATRN.Nameno = 1;
QLYATRN = A_HEAP(A68_166 ) ;
(*QLYATRN) = PLYATRN ;
OLYATRN.Right = A_UNITE(RLYATRN,mode11,11,QLYATRN);
(*NLYATRN_rout) = OLYATRN;
 /* line 1601: */
TLYATRN.Body = JLYATRN_rc.S;
TLYATRN.Output = A_UNITE(ULYATRN,mode23,23,NLYATRN_rout);
VLYATRN = A_HEAP(A68_184 ) ;
(*VLYATRN) = TLYATRN ;
YLYATRN = WGAATRN_makeunittag(A_UNITE(WLYATRN,mode29,29,VLYATRN)) ;
SLYATRN.F = A_UNITE(XLYATRN,mode1,1,YLYATRN);
 /* line 1602: */
SLYATRN.C = A68_TRUE;
IJYATRN = SLYATRN;
} 
else
{ 
A_CALLPROC(NL(NJXATRN_finish_series),( &ZLYATRN),( &ZLYATRN,(NL(NJXATRN_finish_series)).nonlocals));
ZLYATRN;
 /* line 1603: */
AMYATRN.F = Fnbody;
 /* line 1604: */
 /* line 1605: */
AMYATRN.C = A68_FALSE;
IJYATRN = AMYATRN;
} 
} 
else
{ 
BMYATRN.F = Fnbody;
 /* line 1606: */
 /* line 1607: */
BMYATRN.C = A68_FALSE;
IJYATRN = BMYATRN;
} 
break;
default: 
CMYATRN.F = Fnbody;
 /* line 1608: */
 /* line 1609: */
CMYATRN.C = A68_FALSE;
IJYATRN = CMYATRN;
break;
} 
} 
A_PROC_EXIT(fnbody_fntype);
*ReturnedValue = (IJYATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  OMYATRN_anonymous(A68_202 * N, A68_353 * Tp, A68_337  *ReturnedValue, void *NonLocals)
#define NL(x) (((PMYATRN_anonymous *)NonLocals)->x)
{ 
A68_337  QMYATRN;  /* clause result */
A68_337  RMYATRN;  /* avoid structure result */
 /* line 1617: */
A_CALLPROC(NL(RNXATRN_names_nameno),(N, Tp, A68_TRUE, &RMYATRN),(N, Tp, A68_TRUE, &RMYATRN,(NL(RNXATRN_names_nameno)).nonlocals));
QMYATRN = RMYATRN;
*ReturnedValue = (QMYATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  DPYATRN_generator(A68_BOOL  BPYATRN_anonymous, A68_54  *ReturnedValue, void *NonLocals)
#define NL(x) (((EPYATRN_generator *)NonLocals)->x)
{ 
A68_54  FPYATRN;  /* clause result */
A68_54  GPYATRN;  /* OPERATORS - dynamic generator */
{ 
GPYATRN.upb = (*(&(NL(APYATRN_newenv)->Fns))).upb ;
( BPYATRN_anonymous? A_VLOC(A68_BOOL ,GPYATRN): A_VHEAP(A68_BOOL ,GPYATRN) );
FPYATRN = GPYATRN;
} 
*ReturnedValue = (FPYATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  KPYATRN_generator(A68_BOOL  IPYATRN_anonymous, A68_54  *ReturnedValue, void *NonLocals)
#define NL(x) (((LPYATRN_generator *)NonLocals)->x)
{ 
A68_54  MPYATRN;  /* clause result */
A68_54  NPYATRN;  /* OPERATORS - dynamic generator */
{ 
NPYATRN.upb = (*(&(NL(APYATRN_newenv)->Fns))).upb ;
( IPYATRN_anonymous? A_VLOC(A68_BOOL ,NPYATRN): A_VHEAP(A68_BOOL ,NPYATRN) );
MPYATRN = NPYATRN;
} 
*ReturnedValue = (MPYATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  EQYATRN_declaration(A68_222  Dec, A68_353 * Tprocs, A68_333  *ReturnedValue, void *NonLocals)
#define NL(x) (((FQYATRN_declaration *)NonLocals)->x)
{ 
A68_BOOL  GQYATRN_decchange;
A68_222  HQYATRN;  /* united object - for case conformity */
A68_140  IQYATRN_tno;
A68_INT  JQYATRN;  /* YIELD */
A68_154 * KQYATRN_tdec;
A68_324  LQYATRN;  /* avoid structure result */
A68_324  MQYATRN_tdecc;
A68_INT  NQYATRN;  /* YIELD */
A68_154 ** OQYATRN;  /* YIELD */
A68_487  QQYATRN_generator;   /* proc value of non-global proc */
A68_243  VQYATRN;  /* avoid structure result */
A68_INT  WQYATRN;  /* YIELD */
A68_154 ** XQYATRN;  /* YIELD */
A68_192  YQYATRN_fno;
A68_INT  ZQYATRN;  /* YIELD */
A68_INT  ARYATRN;  /* YIELD */
A68_237 * BRYATRN_fdec;
A68_350  CRYATRN;  /* avoid structure result */
A68_350  DRYATRN_fdecc;
A68_INT  ERYATRN;  /* YIELD */
A68_237 ** FRYATRN;  /* YIELD */
A68_435  HRYATRN_generator;   /* proc value of non-global proc */
A68_245  MRYATRN;  /* avoid structure result */
A68_INT  NRYATRN;  /* YIELD */
A68_237 ** ORYATRN;  /* YIELD */
A68_INT  PRYATRN;  /* YIELD */
A68_BOOL * QRYATRN;  /* YIELD */
A68_333  RRYATRN;  /* collateral clause result */
A68_333  SRYATRN;  /* clause result */
A_PROC_ENTRY(declaration);
 /* line 1692: */
 /* line 1693: */
{ 
GQYATRN_decchange = A68_FALSE;
 /* line 1694: */
 /* line 1695: */
HQYATRN = Dec ;
switch ( HQYATRN.mode )
{ 
case 3: /* STRUCT(INT)  */
IQYATRN_tno = (HQYATRN.data.mode3);
 /* line 1696: */
{ 
JQYATRN = IQYATRN_tno.Typeno ;
KQYATRN_tdec = (*(&A_VINDEX((*NL(ZPYATRN_types)),JQYATRN)));
 /* line 1697: */
A_CALLPROC(NL(LOYATRN_typedec_fntype),(KQYATRN_tdec, &LQYATRN),(KQYATRN_tdec, &LQYATRN,(NL(LOYATRN_typedec_fntype)).nonlocals));
MQYATRN_tdecc = LQYATRN;
 /* line 1698: */
 /* line 1699: */
if ( MQYATRN_tdecc.C )
{ 
GQYATRN_decchange = A68_TRUE;
 /* line 1700: */
 /* line 1701: */
if ( (*NL(XPYATRN_tc)) )
{ 
 /* line 1702: */
NQYATRN = IQYATRN_tno.Typeno ;
OQYATRN = (&A_VINDEX((*NL(ZPYATRN_types)),NQYATRN)) ;
(*OQYATRN) = MQYATRN_tdecc.T;
} 
else
{ 
(*NL(XPYATRN_tc)) = A68_TRUE;
 /* line 1703: */
A_CLOSURE( QQYATRN_generator, RQYATRN_generator, SQYATRN_generator );
(( SQYATRN_generator * ) ( QQYATRN_generator.nonlocals )) -> ZPYATRN_types = NL(ZPYATRN_types);
A_CALLPROC(QQYATRN_generator,(A68_FALSE, &VQYATRN),(A68_FALSE, &VQYATRN,(QQYATRN_generator).nonlocals));
A_VASSIGN2((*NL(ZPYATRN_types)),VQYATRN,A68_154 *) ;
(*NL(ZPYATRN_types)) = VQYATRN;
 /* line 1704: */
 /* line 1705: */
 /* line 1706: */
 /* line 1707: */
 /* line 1708: */
WQYATRN = IQYATRN_tno.Typeno ;
XQYATRN = (&A_VINDEX((*NL(ZPYATRN_types)),WQYATRN)) ;
(*XQYATRN) = MQYATRN_tdecc.T;
} 
} 
} 
break;
case 5: /* STRUCT(INT)  */
YQYATRN_fno = (HQYATRN.data.mode5);
 /* line 1709: */
{ 
 /* line 1710: */
ZQYATRN = YQYATRN_fno.Fnno ;
if ( !(*(&A_VINDEX(NL(OPYATRN_updated),ZQYATRN))) )
{ 
ARYATRN = YQYATRN_fno.Fnno ;
BRYATRN_fdec = (*(&A_VINDEX((*NL(AQYATRN_fns)),ARYATRN)));
 /* line 1711: */
A_CALLPROC(NL(THXATRN_fndec_fntype),(BRYATRN_fdec, Tprocs, YQYATRN_fno.Fnno, NL(APYATRN_newenv), &CRYATRN),(BRYATRN_fdec, Tprocs, YQYATRN_fno.Fnno, NL(APYATRN_newenv), &CRYATRN,(NL(THXATRN_fndec_fntype)).nonlocals));
DRYATRN_fdecc = CRYATRN;
 /* line 1712: */
 /* line 1713: */
if ( DRYATRN_fdecc.C )
{ 
GQYATRN_decchange = A68_TRUE;
 /* line 1714: */
 /* line 1715: */
if ( (*NL(YPYATRN_fc)) )
{ 
 /* line 1716: */
ERYATRN = YQYATRN_fno.Fnno ;
FRYATRN = (&A_VINDEX((*NL(AQYATRN_fns)),ERYATRN)) ;
(*FRYATRN) = DRYATRN_fdecc.F;
} 
else
{ 
(*NL(YPYATRN_fc)) = A68_TRUE;
 /* line 1717: */
A_CLOSURE( HRYATRN_generator, IRYATRN_generator, JRYATRN_generator );
(( JRYATRN_generator * ) ( HRYATRN_generator.nonlocals )) -> AQYATRN_fns = NL(AQYATRN_fns);
A_CALLPROC(HRYATRN_generator,(A68_FALSE, &MRYATRN),(A68_FALSE, &MRYATRN,(HRYATRN_generator).nonlocals));
A_VASSIGN2((*NL(AQYATRN_fns)),MRYATRN,A68_237 *) ;
(*NL(AQYATRN_fns)) = MRYATRN;
 /* line 1718: */
 /* line 1719: */
 /* line 1720: */
NRYATRN = YQYATRN_fno.Fnno ;
ORYATRN = (&A_VINDEX((*NL(AQYATRN_fns)),NRYATRN)) ;
(*ORYATRN) = DRYATRN_fdecc.F;
} 
} 
 /* line 1721: */
 /* line 1722: */
 /* line 1723: */
 /* line 1724: */
 /* line 1725: */
PRYATRN = YQYATRN_fno.Fnno ;
QRYATRN = (&A_VINDEX(NL(OPYATRN_updated),PRYATRN)) ;
(*QRYATRN) = A68_TRUE;
} 
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 1726: */
RRYATRN.D = Dec;
 /* line 1727: */
RRYATRN.C = GQYATRN_decchange;
SRYATRN = RRYATRN;
} 
A_PROC_EXIT(declaration);
*ReturnedValue = (SRYATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  HSYATRN_generator(A68_BOOL  FSYATRN_anonymous, A68_245  *ReturnedValue, void *NonLocals)
#define NL(x) (((ISYATRN_generator *)NonLocals)->x)
{ 
A68_245  JSYATRN;  /* clause result */
A68_245  KSYATRN;  /* OPERATORS - dynamic generator */
{ 
KSYATRN.upb = (*NL(AQYATRN_fns)).upb ;
( FSYATRN_anonymous? A_VLOC(A68_237 *,KSYATRN): A_VHEAP(A68_237 *,KSYATRN) );
JSYATRN = KSYATRN;
} 
*ReturnedValue = (JSYATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  VSYATRN_generator(A68_BOOL  TSYATRN_anonymous, A68_243  *ReturnedValue, void *NonLocals)
#define NL(x) (((WSYATRN_generator *)NonLocals)->x)
{ 
A68_243  XSYATRN;  /* clause result */
A68_243  YSYATRN;  /* OPERATORS - dynamic generator */
{ 
YSYATRN.upb = (*NL(ZPYATRN_types)).upb ;
( TSYATRN_anonymous? A_VLOC(A68_154 *,YSYATRN): A_VHEAP(A68_154 *,YSYATRN) );
XSYATRN = YSYATRN;
} 
*ReturnedValue = (XSYATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  LVVATRN_null_formulas(A68_135 * F, A68_353 * Tprocs, A68_315  *ReturnedValue)
{ 
A68_315  MVVATRN;  /* collateral clause result */
A68_315  NVVATRN;  /* clause result */
A_PROC_ENTRY(null_formulas);
 /* line 90: */
MVVATRN.F = F;
MVVATRN.C = A68_FALSE;
NVVATRN = MVVATRN;
A_PROC_EXIT(null_formulas);
*ReturnedValue = (NVVATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  GWVATRN_sysfault(A68_VC  S, void *NonLocals)
#define NL(x) (((HWVATRN_sysfault *)NonLocals)->x)
{ 
A68_46  IWVATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(sysfault);
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(IWVATRN,S,A68_VC )),(SHAAOSI_system, A_HVEC(IWVATRN,S,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(sysfault);
return;
} 
#undef NL

A_STATIC A68_VOID  LWVATRN_make_name(A68_VC  Name, A68_INT  No, A68_VC  *ReturnedValue)
{ 
A68_417  MWVATRN;  /* collateral clause result */
A68_52  PWVATRN;  /* OPERATORS - mode -> union mode */
A68_VC  QWVATRN;  /* YIELD */
A68_52  RWVATRN;  /* OPERATORS - mode -> union mode */
A68_VC  SWVATRN;  /* clause result */
A68_85  TWVATRN;  /* OPERATORS - istruct -> vector */
A68_VC  UWVATRN;  /* avoid structure result */
A68_417  VWVATRN;  /* collateral clause result */
A68_52  YWVATRN;  /* OPERATORS - mode -> union mode */
A68_VC  ZWVATRN;  /* YIELD */
A68_52  AXVATRN;  /* OPERATORS - mode -> union mode */
A68_85  BXVATRN;  /* OPERATORS - istruct -> vector */
A68_VC  CXVATRN;  /* avoid structure result */
A_PROC_ENTRY(make_name);
 /* line 101: */
if ( (Name.upb==0) )
{ 
QWVATRN = OWVATRN ;
MWVATRN.data[0] = A_UNITE(PWVATRN,mode7,7,QWVATRN);
MWVATRN.data[1] = A_UNITE(RWVATRN,mode1,1,No);
UJBAOSL_oneline( A_HISVEC(TWVATRN,MWVATRN,2,A68_52 ), &UWVATRN );
SWVATRN = UWVATRN;
} 
else
{ 
ZWVATRN = XWVATRN ;
VWVATRN.data[0] = A_UNITE(YWVATRN,mode7,7,ZWVATRN);
VWVATRN.data[1] = A_UNITE(AXVATRN,mode7,7,Name);
UJBAOSL_oneline( A_HISVEC(BXVATRN,VWVATRN,2,A68_52 ), &CXVATRN );
SWVATRN = CXVATRN;
} 
A_PROC_EXIT(make_name);
*ReturnedValue = (SWVATRN);
return;
} 
#undef NL

A_STATIC A68_BOOL  HXVATRN_has_type_fntype(A68_139  T, void *NonLocals)
#define NL(x) (((IXVATRN_has_type_fntype *)NonLocals)->x)
{ 
A68_139  JXVATRN;  /* united object - for case conformity */
A68_140 * KXVATRN_tn;
A68_243  LXVATRN;  /* OPERATORS - simple index */
A68_INT  MXVATRN;  /* YIELD */
A68_152  NXVATRN;  /* united object - for case conformity */
A68_148 * OXVATRN_tg;
A68_BOOL  PXVATRN;  /* clause result */
A68_141 * QXVATRN_tr;
A68_142 * RXVATRN_ts;
A68_BOOL  SXVATRN;  /* optbool result */
A68_BOOL  TXVATRN;  /* optbool result */
A68_139  UXVATRN;  /* OPERATORS - mode -> union mode */
A68_142 * VXVATRN;  /* YIELD */
A68_143 * WXVATRN_tfn;
A68_144 * XXVATRN_tb;
A_PROC_ENTRY(has_type_fntype);
 /* line 107: */
 /* line 108: */
JXVATRN = T ;
switch ( JXVATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
KXVATRN_tn = (JXVATRN.data.mode1);
 /* line 109: */
{ 
 /* line 110: */
LXVATRN = (*(&((*NL(DXVATRN_environ))->Types))) ;
MXVATRN = (*(&(KXVATRN_tn->Typeno))) ;
NXVATRN = (*(&((*(&A_VINDEX(LXVATRN,MXVATRN)))->Body))) ;
switch ( NXVATRN.mode )
{ 
case 3: /* REF STRUCT(MODE139)  */
OXVATRN_tg = (NXVATRN.data.mode3);
 /* line 111: */
PXVATRN = A_CALLPROC(NL(GXVATRN_has_type_fntype),((*(&(OXVATRN_tg->Tag)))),((*(&(OXVATRN_tg->Tag))),(NL(GXVATRN_has_type_fntype)).nonlocals));
break;
default: 
 /* line 112: */
 /* line 113: */
 /* line 114: */
PXVATRN = A68_FALSE;
break;
} 
} 
break;
case 2: /* REF STRUCT(MODE123,MODE139)  */
QXVATRN_tr = (JXVATRN.data.mode2);
 /* line 115: */
PXVATRN = A_CALLPROC(NL(GXVATRN_has_type_fntype),((*(&(QXVATRN_tr->Elem)))),((*(&(QXVATRN_tr->Elem))),(NL(GXVATRN_has_type_fntype)).nonlocals));
break;
case 3: /* REF STRUCT(MODE139,REF MODE142)  */
RXVATRN_ts = (JXVATRN.data.mode3);
 /* line 116: */
SXVATRN = (RXVATRN_ts!=GAAATRN_niltstr);
if ( SXVATRN )
{ /* line 117: */
TXVATRN = A_CALLPROC(NL(GXVATRN_has_type_fntype),((*(&(RXVATRN_ts->Elem)))),((*(&(RXVATRN_ts->Elem))),(NL(GXVATRN_has_type_fntype)).nonlocals));
if ( ! TXVATRN )
{VXVATRN = (*(&(RXVATRN_ts->Rest))) ;
TXVATRN = A_CALLPROC(NL(GXVATRN_has_type_fntype),(A_UNITE(UXVATRN,mode3,3,VXVATRN)),(A_UNITE(UXVATRN,mode3,3,VXVATRN),(NL(GXVATRN_has_type_fntype)).nonlocals));
}
SXVATRN = TXVATRN;
}
 /* line 118: */
PXVATRN = SXVATRN;
break;
case 4: /* REF STRUCT(MODE139,MODE139)  */
WXVATRN_tfn = (JXVATRN.data.mode4);
 /* line 119: */
PXVATRN = A68_TRUE;
break;
case 5: /* REF STRUCT(MODE139)  */
XXVATRN_tb = (JXVATRN.data.mode5);
 /* line 120: */
PXVATRN = A_CALLPROC(NL(GXVATRN_has_type_fntype),((*(&(XXVATRN_tb->Type)))),((*(&(XXVATRN_tb->Type))),(NL(GXVATRN_has_type_fntype)).nonlocals));
break;
default: 
 /* line 121: */
PXVATRN = A68_FALSE;
break;
} 
A_PROC_EXIT(has_type_fntype);
return( PXVATRN );
} 
#undef NL

A_STATIC A68_VOID  AYVATRN_generator(A68_BOOL  YXVATRN_anonymous, A68_54  *ReturnedValue, void *NonLocals)
#define NL(x) (((BYVATRN_generator *)NonLocals)->x)
{ 
A68_54  CYVATRN;  /* clause result */
A68_54  DYVATRN;  /* OPERATORS - dynamic generator */
{ 
DYVATRN.upb = ZKCATRN_maxclosureno(NL(Oldclosure)) ;
( YXVATRN_anonymous? A_VLOC(A68_BOOL ,DYVATRN): A_VHEAP(A68_BOOL ,DYVATRN) );
CYVATRN = DYVATRN;
} 
*ReturnedValue = (CYVATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  MYVATRN_anonymous(A68_161  U, A68_353 * Tp, A68_329  *ReturnedValue, void *NonLocals)
#define NL(x) (((NYVATRN_anonymous *)NonLocals)->x)
{ 
A68_161  OYVATRN;  /* united object - for case conformity */
A68_166 * PYVATRN_un;
A68_BOOL  QYVATRN;  /* optbool result */
A68_372  RYVATRN;  /* CALL */
A68_329  SYVATRN;  /* avoid structure result */
A68_329  TYVATRN;  /* collateral clause result */
A68_329  UYVATRN;  /* clause result */
 /* line 131: */
{ 
 /* line 132: */
OYVATRN = U ;
switch ( OYVATRN.mode )
{ 
case 11: /* REF STRUCT(INT,INT)  */
PYVATRN_un = (OYVATRN.data.mode11);
QYVATRN = ((*(&(PYVATRN_un->Sort)))==MKAATRN_uiosource);
if ( ! QYVATRN )
{ /* line 133: */
QYVATRN = ((*(&(PYVATRN_un->Sort)))==NKAATRN_uiosink);
}
if ( QYVATRN )
{ 
 /* line 134: */
 /* line 135: */
(*NL(IYVATRN_expand)) = A68_TRUE;
} 
break;
default: 
 /* line 136: */
RYVATRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(RYVATRN,(U, Tp, &SYVATRN),(U, Tp, &SYVATRN,(RYVATRN).nonlocals));
SYVATRN;
break;
} 
 /* line 137: */
TYVATRN.U = U;
 /* line 138: */
 /* line 139: */
TYVATRN.C = A68_FALSE;
UYVATRN = TYVATRN;
} 
*ReturnedValue = (UYVATRN);
return;
} 
#undef NL

A_STATIC A68_BOOL  BZVATRN_pre_pass_outerfn(A68_246  O, void *NonLocals)
#define NL(x) (((CZVATRN_pre_pass_outerfn *)NonLocals)->x)
{ 
A68_BOOL  DZVATRN_expandfn;
A68_154 ** EZVATRN_type;
A68_243  FZVATRN;  /* forall yield */
A68_INT  GZVATRN;  /* forall loop counter */
A68_152  HZVATRN;  /* united object - for case conformity */
A68_148 * IZVATRN_tg;
A68_245  JZVATRN;  /* OPERATORS - simple index */
A68_INT  KZVATRN;  /* YIELD */
A68_237 * LZVATRN_fdec;
A68_143 * MZVATRN_tf;
A68_BOOL  NZVATRN;  /* optbool result */
A68_BOOL  OZVATRN_specchange;
A68_INT  PZVATRN;  /* YIELD */
A68_BOOL * QZVATRN;  /* YIELD */
A68_237 ** RZVATRN_f;
A68_245  SZVATRN;  /* forall yield */
A68_INT  TZVATRN;  /* forall loop counter */
A68_INT  UZVATRN;  /* YIELD */
A68_143 * VZVATRN_tfn;
A68_BOOL  WZVATRN;  /* optbool result */
A68_394  XZVATRN;  /* CALL */
A68_351  YZVATRN;  /* avoid structure result */
A68_BOOL  ZZVATRN;  /* clause result */
A_PROC_ENTRY(pre_pass_outerfn);
 /* line 142: */
 /* line 143: */
{ 
DZVATRN_expandfn = A68_FALSE;
 /* line 144: */
(*NL(DXVATRN_environ)) = O.Environ;
 /* line 145: */
FZVATRN = (*(&((*NL(DXVATRN_environ))->Types))) ;
GZVATRN = FZVATRN.upb -1;
EZVATRN_type = FZVATRN.data;
for (;GZVATRN-- >= 0;
(EZVATRN_type++
) )
{
 /* line 146: */
if ( !(!DZVATRN_expandfn) ) break;
 /* line 147: */
HZVATRN = (*(&((*EZVATRN_type)->Body))) ;
switch ( HZVATRN.mode )
{ 
case 3: /* REF STRUCT(MODE139)  */
IZVATRN_tg = (HZVATRN.data.mode3);
 /* line 148: */
 /* line 149: */
DZVATRN_expandfn = A_CALLPROC(NL(GXVATRN_has_type_fntype),((*(&(IZVATRN_tg->Tag)))),((*(&(IZVATRN_tg->Tag))),(NL(GXVATRN_has_type_fntype)).nonlocals));
break;
default: 
 /* line 150: */
/*SKIP*/;
break;
} 
}
 /* line 152: */
JZVATRN = (*(&((*NL(DXVATRN_environ))->Fns))) ;
KZVATRN = 1 ;
LZVATRN_fdec = (*(&A_VINDEX(JZVATRN,KZVATRN)));
 /* line 153: */
MZVATRN_tf = MUNATRN_fndec_tfn(LZVATRN_fdec);
 /* line 154: */
 /* line 155: */
NZVATRN = A_CALLPROC(NL(GXVATRN_has_type_fntype),((*(&(MZVATRN_tf->From)))),((*(&(MZVATRN_tf->From))),(NL(GXVATRN_has_type_fntype)).nonlocals));
if ( ! NZVATRN )
{NZVATRN = A_CALLPROC(NL(GXVATRN_has_type_fntype),((*(&(MZVATRN_tf->To)))),((*(&(MZVATRN_tf->To))),(NL(GXVATRN_has_type_fntype)).nonlocals));
}
OZVATRN_specchange = NZVATRN;
 /* line 156: */
PZVATRN = (*(&((*(&(LZVATRN_fdec->Usage)))->Closureno))) ;
QZVATRN = (&A_VINDEX(NL(EYVATRN_closure_specs),PZVATRN)) ;
(*QZVATRN) = OZVATRN_specchange;
 /* line 157: */
if ( OZVATRN_specchange )
{ 
DZVATRN_expandfn = A68_TRUE;
} 
 /* line 159: */
SZVATRN = (*(&((*NL(DXVATRN_environ))->Fns))) ;
TZVATRN = SZVATRN.upb -1;
RZVATRN_f = SZVATRN.data;
for (;TZVATRN-- >= 0;
(RZVATRN_f++
) )
{
 /* line 160: */
if ( !(!DZVATRN_expandfn) ) break;
 /* line 161: */
if ( ((*(&((*RZVATRN_f)->Sort)))==OKAATRN_outerdec) )
{ 
 /* line 162: */
UZVATRN = (*(&((*(&((*RZVATRN_f)->Usage)))->Closureno))) ;
DZVATRN_expandfn = (*(&A_VINDEX(NL(EYVATRN_closure_specs),UZVATRN)));
} 
else
{ 
 /* line 163: */
if ( ((*(&((*RZVATRN_f)->Sort)))==PKAATRN_localdec) )
{ 
VZVATRN_tfn = MUNATRN_fndec_tfn((*RZVATRN_f));
 /* line 164: */
 /* line 165: */
WZVATRN = A_CALLPROC(NL(GXVATRN_has_type_fntype),((*(&(VZVATRN_tfn->From)))),((*(&(VZVATRN_tfn->From))),(NL(GXVATRN_has_type_fntype)).nonlocals));
if ( ! WZVATRN )
{ /* line 166: */
WZVATRN = A_CALLPROC(NL(GXVATRN_has_type_fntype),((*(&(VZVATRN_tfn->To)))),((*(&(VZVATRN_tfn->To))),(NL(GXVATRN_has_type_fntype)).nonlocals));
}
 /* line 167: */
DZVATRN_expandfn = WZVATRN;
} 
} 
}
 /* line 168: */
 /* line 169: */
if ( !DZVATRN_expandfn )
{ 
(*NL(IYVATRN_expand)) = A68_FALSE;
 /* line 170: */
XZVATRN = (*(&(AWLATRN_nulltprocs->Outer))) ;
A_CALLPROC(XZVATRN,(O, NL(YYVATRN_search_unit), &YZVATRN),(O, NL(YYVATRN_search_unit), &YZVATRN,(XZVATRN).nonlocals));
YZVATRN;
 /* line 171: */
if ( (*NL(IYVATRN_expand)) )
{ 
 /* line 172: */
DZVATRN_expandfn = A68_TRUE;
} 
} 
 /* line 173: */
 /* line 174: */
ZZVATRN = DZVATRN_expandfn;
} 
A_PROC_EXIT(pre_pass_outerfn);
return( ZZVATRN );
} 
#undef NL

A_STATIC A68_VOID  EAWATRN_anonymous(A68_161  Unit, A68_353 * Tprocs, A68_329  *ReturnedValue, void *NonLocals)
#define NL(x) (((FAWATRN_anonymous *)NonLocals)->x)
{ 
A68_161  GAWATRN;  /* united object - for case conformity */
A68_372  HAWATRN;  /* CALL */
A68_329  IAWATRN;  /* avoid structure result */
A68_329  JAWATRN;  /* collateral clause result */
A68_329  KAWATRN;  /* clause result */
 /* line 182: */
{ 
 /* line 183: */
GAWATRN = Unit ;
switch ( GAWATRN.mode )
{ 
case 23: /* REF STRUCT(MODE201,MODE161)  */
case 24: /* REF STRUCT(MODE161,MODE201,MODE161)  */
case 25: /* REF STRUCT(MODE161,REF MODE221)  */
case 28: /* REF STRUCT(REF MODE209,MODE161)  */
case 29: /* REF STRUCT(REF MODE190,MODE161)  */
 /* line 184: */
 /* line 185: */
(*NL(AAWATRN_with_monitor)) = A68_TRUE;
break;
default: 
 /* line 186: */
HAWATRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(HAWATRN,(Unit, Tprocs, &IAWATRN),(Unit, Tprocs, &IAWATRN,(HAWATRN).nonlocals));
IAWATRN;
break;
} 
 /* line 187: */
JAWATRN.U = Unit;
 /* line 188: */
 /* line 189: */
JAWATRN.C = A68_FALSE;
KAWATRN = JAWATRN;
} 
*ReturnedValue = (KAWATRN);
return;
} 
#undef NL

A_STATIC A68_BOOL  RAWATRN_contains_diagnostics(A68_161  U, void *NonLocals)
#define NL(x) (((SAWATRN_contains_diagnostics *)NonLocals)->x)
{ 
A68_372  TAWATRN;  /* CALL */
A68_329  UAWATRN;  /* avoid structure result */
A68_BOOL  VAWATRN;  /* clause result */
A_PROC_ENTRY(contains_diagnostics);
 /* line 192: */
{ 
(*NL(AAWATRN_with_monitor)) = A68_FALSE;
 /* line 193: */
TAWATRN = (*(&(NL(OAWATRN_contains_diagnosticprocs)->Unit))) ;
A_CALLPROC(TAWATRN,(U, NL(OAWATRN_contains_diagnosticprocs), &UAWATRN),(U, NL(OAWATRN_contains_diagnosticprocs), &UAWATRN,(TAWATRN).nonlocals));
UAWATRN;
 /* line 194: */
 /* line 195: */
VAWATRN = (*NL(AAWATRN_with_monitor));
} 
A_PROC_EXIT(contains_diagnostics);
return( VAWATRN );
} 
#undef NL

A_STATIC A68_VOID  YAWATRN_anonymous(A68_161  Unit, A68_353 * Tprocs, A68_329  *ReturnedValue)
{ 
A68_161  ZAWATRN;  /* united object - for case conformity */
A68_167 * ABWATRN_uf;
A68_329  BBWATRN;  /* collateral clause result */
A68_167  CBWATRN;  /* collateral clause result */
A68_167 * DBWATRN;  /* YIELD */
A68_161  EBWATRN;  /* OPERATORS - mode -> union mode */
A68_329  FBWATRN;  /* clause result */
A68_372  GBWATRN;  /* CALL */
A68_329  HBWATRN;  /* avoid structure result */
A68_329  IBWATRN;  /* collateral clause result */
A68_167  JBWATRN;  /* collateral clause result */
A68_161  KBWATRN;  /* OPERATORS - mode -> union mode */
A68_167 * LBWATRN;  /* YIELD */
A68_161  MBWATRN;  /* OPERATORS - mode -> union mode */
 /* line 202: */
 /* line 203: */
ZAWATRN = Unit ;
switch ( ZAWATRN.mode )
{ 
case 12: /* REF STRUCT(MODE161,MODE161)  */
ABWATRN_uf = (ZAWATRN.data.mode12);
 /* line 204: */
CBWATRN.Sink = (*(&(ABWATRN_uf->Source)));
CBWATRN.Source = (*(&(ABWATRN_uf->Sink)));
DBWATRN = A_HEAP(A68_167 ) ;
(*DBWATRN) = CBWATRN ;
BBWATRN.U = A_UNITE(EBWATRN,mode12,12,DBWATRN);
 /* line 205: */
BBWATRN.C = A68_TRUE;
FBWATRN = BBWATRN;
break;
case 20: /* REF STRUCT(MODE123,MODE161)  */
case 21: /* REF STRUCT(MODE161,REF MODE176)  */
case 30: /* REF STRUCT(MODE161,MODE114)  */
case 31: /* REF STRUCT(MODE161,MODE125)  */
case 32: /* REF STRUCT(MODE161)  */
 /* line 206: */
 /* line 207: */
GBWATRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(GBWATRN,(Unit, Tprocs, &HBWATRN),(Unit, Tprocs, &HBWATRN,(GBWATRN).nonlocals));
FBWATRN = HBWATRN;
break;
default: 
JBWATRN.Sink = Unit;
JBWATRN.Source = A_UNITE(KBWATRN,mode34,34,(&FIAATRN_unull));
LBWATRN = A_HEAP(A68_167 ) ;
(*LBWATRN) = JBWATRN ;
IBWATRN.U = A_UNITE(MBWATRN,mode12,12,LBWATRN);
 /* line 208: */
 /* line 209: */
IBWATRN.C = A68_TRUE;
FBWATRN = IBWATRN;
break;
} 
*ReturnedValue = (FBWATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  UBWATRN_anonymous(A68_139  Type, A68_353 * Tprocs, A68_320  *ReturnedValue)
{ 
A68_139  VBWATRN;  /* united object - for case conformity */
A68_143 * WBWATRN_tf;
A68_320  XBWATRN;  /* collateral clause result */
A68_143  YBWATRN;  /* collateral clause result */
A68_143 * ZBWATRN;  /* YIELD */
A68_139  ACWATRN;  /* OPERATORS - mode -> union mode */
A68_320  BCWATRN;  /* clause result */
A68_320  CCWATRN;  /* collateral clause result */
A68_143  DCWATRN;  /* collateral clause result */
A68_139  ECWATRN;  /* OPERATORS - mode -> union mode */
A68_143 * FCWATRN;  /* YIELD */
A68_139  GCWATRN;  /* OPERATORS - mode -> union mode */
A68_363  HCWATRN;  /* CALL */
A68_320  ICWATRN;  /* avoid structure result */
 /* line 216: */
 /* line 217: */
VBWATRN = Type ;
switch ( VBWATRN.mode )
{ 
case 4: /* REF STRUCT(MODE139,MODE139)  */
WBWATRN_tf = (VBWATRN.data.mode4);
 /* line 218: */
YBWATRN.From = (*(&(WBWATRN_tf->To)));
YBWATRN.To = (*(&(WBWATRN_tf->From)));
ZBWATRN = A_HEAP(A68_143 ) ;
(*ZBWATRN) = YBWATRN ;
XBWATRN.T = A_UNITE(ACWATRN,mode4,4,ZBWATRN);
 /* line 219: */
XBWATRN.C = A68_TRUE;
BCWATRN = XBWATRN;
break;
case 1: /* REF STRUCT(INT)  */
case 6: /* REF STRUCT(MODE123,MODE139)  */
case 7: /* REF STRUCT(INT)  */
case 9: /* REF STRUCT(INT)  */
 /* line 220: */
DCWATRN.From = Type;
DCWATRN.To = A_UNITE(ECWATRN,mode9,9,(&DIAATRN_tnull));
FCWATRN = A_HEAP(A68_143 ) ;
(*FCWATRN) = DCWATRN ;
CCWATRN.T = A_UNITE(GCWATRN,mode4,4,FCWATRN);
 /* line 221: */
CCWATRN.C = A68_TRUE;
BCWATRN = CCWATRN;
break;
default: 
 /* line 222: */
 /* line 223: */
HCWATRN = (*(&(AWLATRN_nulltprocs->Type))) ;
A_CALLPROC(HCWATRN,(Type, Tprocs, &ICWATRN),(Type, Tprocs, &ICWATRN,(HCWATRN).nonlocals));
BCWATRN = ICWATRN;
break;
} 
*ReturnedValue = (BCWATRN);
return;
} 
#undef NL

A_STATIC A68_BOOL  QCWATRN_has_unit_null(A68_161  U, void *NonLocals)
#define NL(x) (((RCWATRN_has_unit_null *)NonLocals)->x)
{ 
A68_161  SCWATRN;  /* united object - for case conformity */
A68_BOOL  TCWATRN;  /* clause result */
A68_175 * UCWATRN_ur;
A68_176 * VCWATRN_us;
A68_BOOL  WCWATRN;  /* optbool result */
A68_161  XCWATRN;  /* OPERATORS - mode -> union mode */
A68_176 * YCWATRN;  /* YIELD */
A_PROC_ENTRY(has_unit_null);
 /* line 228: */
 /* line 229: */
{ 
 /* line 230: */
SCWATRN = U ;
switch ( SCWATRN.mode )
{ 
case 34: /* REF STRUCT(INT)  */
 /* line 231: */
TCWATRN = A68_TRUE;
break;
case 20: /* REF STRUCT(MODE123,MODE161)  */
UCWATRN_ur = (SCWATRN.data.mode20);
 /* line 232: */
TCWATRN = A_CALLPROC(NL(PCWATRN_has_unit_null),((*(&(UCWATRN_ur->Elem)))),((*(&(UCWATRN_ur->Elem))),(NL(PCWATRN_has_unit_null)).nonlocals));
break;
case 21: /* REF STRUCT(MODE161,REF MODE176)  */
VCWATRN_us = (SCWATRN.data.mode21);
if ( (VCWATRN_us==IAAATRN_nilustr) )
{ 
 /* line 233: */
TCWATRN = A68_FALSE;
} 
else
{ 
WCWATRN = A_CALLPROC(NL(PCWATRN_has_unit_null),((*(&(VCWATRN_us->Elem)))),((*(&(VCWATRN_us->Elem))),(NL(PCWATRN_has_unit_null)).nonlocals));
if ( ! WCWATRN )
{ /* line 234: */
YCWATRN = (*(&(VCWATRN_us->Rest))) ;
WCWATRN = A_CALLPROC(NL(PCWATRN_has_unit_null),(A_UNITE(XCWATRN,mode21,21,YCWATRN)),(A_UNITE(XCWATRN,mode21,21,YCWATRN),(NL(PCWATRN_has_unit_null)).nonlocals));
}
 /* line 235: */
TCWATRN = WCWATRN;
} 
break;
default: 
 /* line 236: */
 /* line 237: */
TCWATRN = A68_FALSE;
break;
} 
} 
A_PROC_EXIT(has_unit_null);
return( TCWATRN );
} 
#undef NL

A_STATIC A68_VOID  CDWATRN_unit_trim(A68_329  Unitc, A68_123  Flwb, A68_123  Fupb, A68_329  *ReturnedValue)
{ 
A68_INT  DDWATRN_lwb;
A68_INT  EDWATRN_upb;
A68_BOOL  FDWATRN_trim;
A68_161  GDWATRN;  /* united object - for case conformity */
A68_329  HDWATRN;  /* collateral clause result */
A68_161  IDWATRN;  /* OPERATORS - mode -> union mode */
A68_329  JDWATRN;  /* clause result */
A68_175 * KDWATRN_ur;
A68_329  LDWATRN;  /* collateral clause result */
A68_175  MDWATRN;  /* collateral clause result */
A68_123  NDWATRN;  /* OPERATORS - mode -> union mode */
A68_124 * ODWATRN;  /* YIELD */
A68_175 * PDWATRN;  /* YIELD */
A68_161  QDWATRN;  /* OPERATORS - mode -> union mode */
A68_329  RDWATRN;  /* collateral clause result */
A68_176 * SDWATRN_us;
A68_176 * TDWATRN_ust;
A68_INT  UDWATRN;  /* to part of loop */
A68_INT  VDWATRN;  /* loop control */
A68_176 * WDWATRN_newust;
A68_176 ** XDWATRN_newptr;
A68_INT  YDWATRN;  /* to part of loop */
A68_INT  ZDWATRN;  /* loop control */
A68_176  AEWATRN;  /* collateral clause result */
A68_176 * BEWATRN;  /* YIELD */
A68_329  CEWATRN;  /* collateral clause result */
A68_161  DEWATRN;  /* OPERATORS - mode -> union mode */
A68_329  EEWATRN;  /* collateral clause result */
A68_329  FEWATRN;  /* collateral clause result */
A68_172  GEWATRN;  /* collateral clause result */
A68_172 * HEWATRN;  /* YIELD */
A68_161  IEWATRN;  /* OPERATORS - mode -> union mode */
A68_329  JEWATRN;  /* collateral clause result */
A68_171  KEWATRN;  /* collateral clause result */
A68_171 * LEWATRN;  /* YIELD */
A68_161  MEWATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(unit_trim);
 /* line 240: */
 /* line 242: */
{ 
DDWATRN_lwb = XOMATRN_int(Flwb);
 /* line 243: */
EDWATRN_upb = XOMATRN_int(Fupb);
 /* line 244: */
FDWATRN_trim = (EDWATRN_upb!=0);
 /* line 245: */
 /* line 246: */
GDWATRN = Unitc.U ;
switch ( GDWATRN.mode )
{ 
case 34: /* REF STRUCT(INT)  */
HDWATRN.U = A_UNITE(IDWATRN,mode34,34,(&FIAATRN_unull));
 /* line 247: */
HDWATRN.C = A68_TRUE;
JDWATRN = HDWATRN;
break;
case 20: /* REF STRUCT(MODE123,MODE161)  */
KDWATRN_ur = (GDWATRN.data.mode20);
 /* line 248: */
if ( FDWATRN_trim )
{ 
ODWATRN = NNMATRN_makefint(((EDWATRN_upb-DDWATRN_lwb)+1)) ;
MDWATRN.Size = A_UNITE(NDWATRN,mode1,1,ODWATRN);
MDWATRN.Elem = (*(&(KDWATRN_ur->Elem)));
PDWATRN = A_HEAP(A68_175 ) ;
(*PDWATRN) = MDWATRN ;
LDWATRN.U = A_UNITE(QDWATRN,mode20,20,PDWATRN);
 /* line 249: */
LDWATRN.C = A68_TRUE;
JDWATRN = LDWATRN;
} 
else
{ 
RDWATRN.U = (*(&(KDWATRN_ur->Elem)));
 /* line 250: */
 /* line 251: */
RDWATRN.C = A68_TRUE;
JDWATRN = RDWATRN;
} 
break;
case 21: /* REF STRUCT(MODE161,REF MODE176)  */
SDWATRN_us = (GDWATRN.data.mode21);
{ 
TDWATRN_ust = SDWATRN_us;
 /* line 252: */
UDWATRN = (DDWATRN_lwb-1);
for ( VDWATRN = 1;
VDWATRN <= UDWATRN;
VDWATRN += 1 )
{ 
TDWATRN_ust = (*(&(TDWATRN_ust->Rest)));
}
 /* line 253: */
 /* line 254: */
if ( FDWATRN_trim )
{ 
WDWATRN_newust = IAAATRN_nilustr;
 /* line 255: */
XDWATRN_newptr = (&WDWATRN_newust);
 /* line 256: */
 /* line 257: */
YDWATRN = ((EDWATRN_upb-DDWATRN_lwb)+1);
for ( ZDWATRN = 1;
ZDWATRN <= YDWATRN;
ZDWATRN += 1 )
{ 
 /* line 258: */
AEWATRN.Elem = (*(&(TDWATRN_ust->Elem)));
AEWATRN.Rest = IAAATRN_nilustr;
BEWATRN = A_HEAP(A68_176 ) ;
(*BEWATRN) = AEWATRN ;
(*XDWATRN_newptr) = BEWATRN;
 /* line 259: */
XDWATRN_newptr = (&((*XDWATRN_newptr)->Rest));
 /* line 260: */
 /* line 261: */
TDWATRN_ust = (*(&(TDWATRN_ust->Rest)));
}
 /* line 262: */
CEWATRN.U = A_UNITE(DEWATRN,mode21,21,WDWATRN_newust);
 /* line 263: */
CEWATRN.C = A68_TRUE;
JDWATRN = CEWATRN;
} 
else
{ 
EEWATRN.U = (*(&(TDWATRN_ust->Elem)));
 /* line 264: */
 /* line 265: */
 /* line 266: */
EEWATRN.C = A68_TRUE;
JDWATRN = EEWATRN;
} 
} 
break;
default: 
 /* line 267: */
if ( FDWATRN_trim )
{ 
GEWATRN.Unit = Unitc.U;
GEWATRN.Range.Lwb = Flwb;
GEWATRN.Range.Upb = Fupb;
HEWATRN = A_HEAP(A68_172 ) ;
(*HEWATRN) = GEWATRN ;
FEWATRN.U = A_UNITE(IEWATRN,mode17,17,HEWATRN);
 /* line 268: */
FEWATRN.C = Unitc.C;
JDWATRN = FEWATRN;
} 
else
{ 
KEWATRN.Unit = Unitc.U;
KEWATRN.Index = Flwb;
LEWATRN = A_HEAP(A68_171 ) ;
(*LEWATRN) = KEWATRN ;
JEWATRN.U = A_UNITE(MEWATRN,mode16,16,LEWATRN);
 /* line 269: */
 /* line 270: */
 /* line 271: */
JEWATRN.C = Unitc.C;
JDWATRN = JEWATRN;
} 
break;
} 
} 
A_PROC_EXIT(unit_trim);
*ReturnedValue = (JDWATRN);
return;
} 
#undef NL

A_STATIC A68_BOOL  OEWATRN_is_null_void(A68_161  U)
{ 
A68_161  PEWATRN;  /* united object - for case conformity */
A68_BOOL  QEWATRN;  /* clause result */
A_PROC_ENTRY(is_null_void);
 /* line 274: */
PEWATRN = U ;
switch ( PEWATRN.mode )
{ 
case 34: /* REF STRUCT(INT)  */
QEWATRN = A68_TRUE;
break;
case 6: /* REF STRUCT(INT)  */
QEWATRN = A68_TRUE;
break;
default: 
QEWATRN = A68_FALSE;
break;
} 
A_PROC_EXIT(is_null_void);
return( QEWATRN );
} 
#undef NL

A_STATIC A68_VOID  TEWATRN_remove_null_elem(A68_161  U, A68_161  *ReturnedValue, void *NonLocals)
#define NL(x) (((UEWATRN_remove_null_elem *)NonLocals)->x)
{ 
A68_161  VEWATRN;  /* united object - for case conformity */
A68_161  WEWATRN;  /* clause result */
A68_175 * XEWATRN_ur;
A68_161  YEWATRN;  /* avoid structure result */
A68_161  ZEWATRN_r;
A68_161  AFWATRN;  /* united object - for case conformity */
A68_161  BFWATRN;  /* OPERATORS - mode -> union mode */
A68_175  CFWATRN;  /* collateral clause result */
A68_175 * DFWATRN;  /* YIELD */
A68_161  EFWATRN;  /* OPERATORS - mode -> union mode */
A68_176 * FFWATRN_us;
A68_176 * GFWATRN_ust;
A68_176 * HFWATRN_newust;
A68_176 ** IFWATRN_newptr;
A68_161  JFWATRN;  /* avoid structure result */
A68_161  KFWATRN_elem;
A68_161  LFWATRN;  /* united object - for case conformity */
A68_176  MFWATRN;  /* collateral clause result */
A68_176 * NFWATRN;  /* YIELD */
A68_161  OFWATRN;  /* OPERATORS - mode -> union mode */
A68_161  PFWATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(remove_null_elem);
 /* line 277: */
 /* line 279: */
{ 
 /* line 280: */
VEWATRN = U ;
switch ( VEWATRN.mode )
{ 
case 34: /* REF STRUCT(INT)  */
 /* line 281: */
WEWATRN = U;
break;
case 20: /* REF STRUCT(MODE123,MODE161)  */
XEWATRN_ur = (VEWATRN.data.mode20);
 /* line 282: */
{ 
A_CALLPROC(NL(SEWATRN_remove_null_elem),((*(&(XEWATRN_ur->Elem))), &YEWATRN),((*(&(XEWATRN_ur->Elem))), &YEWATRN,(NL(SEWATRN_remove_null_elem)).nonlocals));
ZEWATRN_r = YEWATRN;
 /* line 283: */
 /* line 284: */
AFWATRN = ZEWATRN_r ;
switch ( AFWATRN.mode )
{ 
case 34: /* REF STRUCT(INT)  */
 /* line 285: */
WEWATRN = A_UNITE(BFWATRN,mode34,34,(&FIAATRN_unull));
break;
default: 
CFWATRN.Size = (*(&(XEWATRN_ur->Size)));
 /* line 286: */
CFWATRN.Elem = ZEWATRN_r;
 /* line 287: */
 /* line 288: */
DFWATRN = A_HEAP(A68_175 ) ;
(*DFWATRN) = CFWATRN ;
WEWATRN = A_UNITE(EFWATRN,mode20,20,DFWATRN);
break;
} 
} 
break;
case 21: /* REF STRUCT(MODE161,REF MODE176)  */
FFWATRN_us = (VEWATRN.data.mode21);
 /* line 289: */
{ 
GFWATRN_ust = FFWATRN_us;
 /* line 290: */
HFWATRN_newust = IAAATRN_nilustr;
 /* line 291: */
IFWATRN_newptr = (&HFWATRN_newust);
 /* line 292: */
for ( ;; )
{ 
 /* line 293: */
if ( !((GFWATRN_ust!=IAAATRN_nilustr)) ) break;
A_CALLPROC(NL(SEWATRN_remove_null_elem),((*(&(GFWATRN_ust->Elem))), &JFWATRN),((*(&(GFWATRN_ust->Elem))), &JFWATRN,(NL(SEWATRN_remove_null_elem)).nonlocals));
KFWATRN_elem = JFWATRN;
 /* line 294: */
 /* line 295: */
LFWATRN = KFWATRN_elem ;
switch ( LFWATRN.mode )
{ 
case 34: /* REF STRUCT(INT)  */
 /* line 296: */
/*SKIP*/;
break;
default: 
MFWATRN.Elem = KFWATRN_elem;
MFWATRN.Rest = IAAATRN_nilustr;
NFWATRN = A_HEAP(A68_176 ) ;
(*NFWATRN) = MFWATRN ;
(*IFWATRN_newptr) = NFWATRN;
 /* line 297: */
 /* line 298: */
IFWATRN_newptr = (&((*IFWATRN_newptr)->Rest));
break;
} 
 /* line 299: */
 /* line 300: */
GFWATRN_ust = (*(&(GFWATRN_ust->Rest)));
}
 /* line 301: */
 /* line 302: */
 /* line 303: */
if ( (HFWATRN_newust==IAAATRN_nilustr) )
{ 
WEWATRN = A_UNITE(OFWATRN,mode34,34,(&FIAATRN_unull));
} 
else
{ 
 /* line 304: */
 /* line 305: */
if ( ((*(&(HFWATRN_newust->Rest)))==IAAATRN_nilustr) )
{ 
 /* line 306: */
WEWATRN = (*(&(HFWATRN_newust->Elem)));
} 
else
{ 
 /* line 307: */
 /* line 308: */
 /* line 309: */
WEWATRN = A_UNITE(PFWATRN,mode21,21,HFWATRN_newust);
} 
} 
} 
break;
default: 
 /* line 310: */
WEWATRN = U;
break;
} 
} 
A_PROC_EXIT(remove_null_elem);
*ReturnedValue = (WEWATRN);
return;
} 
#undef NL

A_STATIC A68_428  TFWATRN_remove_null_void(A68_161  A, A68_161  B, void *NonLocals)
#define NL(x) (((UFWATRN_remove_null_void *)NonLocals)->x)
{ 
A68_BOOL  VFWATRN_all_null_void;
A68_BOOL  WFWATRN_remove;
A68_161  XFWATRN;  /* united object - for case conformity */
A68_176 * YFWATRN_ua;
A68_161  ZFWATRN;  /* united object - for case conformity */
A68_176 * AGWATRN_ub;
A68_176 * BGWATRN_usa;
A68_BOOL  CGWATRN;  /* optbool result */
A68_175 * DGWATRN_br;
A68_161  EGWATRN;  /* united object - for case conformity */
A68_175 * FGWATRN_ar;
A68_161  GGWATRN;  /* united object - for case conformity */
A68_428  HGWATRN;  /* collateral clause result */
A68_161  IGWATRN;  /* OPERATORS - mode -> union mode */
A68_161  JGWATRN;  /* OPERATORS - mode -> union mode */
A68_428  KGWATRN;  /* clause result */
A68_428  LGWATRN;  /* collateral clause result */
A68_161  MGWATRN;  /* avoid structure result */
A68_161  NGWATRN;  /* avoid structure result */
A68_428  OGWATRN;  /* collateral clause result */
A_PROC_ENTRY(remove_null_void);
 /* line 313: */
 /* line 314: */
{ 
VFWATRN_all_null_void = A68_FALSE;
 /* line 315: */
WFWATRN_remove = A68_FALSE;
 /* line 316: */
 /* line 317: */
XFWATRN = A ;
switch ( XFWATRN.mode )
{ 
case 21: /* REF STRUCT(MODE161,REF MODE176)  */
YFWATRN_ua = (XFWATRN.data.mode21);
 /* line 318: */
{ 
 /* line 319: */
ZFWATRN = B ;
switch ( ZFWATRN.mode )
{ 
case 21: /* REF STRUCT(MODE161,REF MODE176)  */
AGWATRN_ub = (ZFWATRN.data.mode21);
 /* line 320: */
{ 
BGWATRN_usa = YFWATRN_ua;
 /* line 321: */
for ( ;; )
{ 
 /* line 322: */
CGWATRN = (BGWATRN_usa!=IAAATRN_nilustr);
if ( CGWATRN )
{CGWATRN = !WFWATRN_remove;
}
if ( !(CGWATRN) ) break;
if ( A_CALLPROC(NL(PCWATRN_has_unit_null),((*(&(BGWATRN_usa->Elem)))),((*(&(BGWATRN_usa->Elem))),(NL(PCWATRN_has_unit_null)).nonlocals)) )
{ 
WFWATRN_remove = A68_TRUE;
} 
 /* line 323: */
 /* line 324: */
BGWATRN_usa = (*(&(BGWATRN_usa->Rest)));
}
 /* line 325: */
 /* line 326: */
} 
break;
case 20: /* REF STRUCT(MODE123,MODE161)  */
DGWATRN_br = (ZFWATRN.data.mode20);
 /* line 327: */
 /* line 328: */
EGWATRN = (*(&(DGWATRN_br->Elem))) ;
switch ( EGWATRN.mode )
{ 
case 34: /* REF STRUCT(INT)  */
 /* line 329: */
VFWATRN_all_null_void = A68_TRUE;
break;
default: 
if ( A_CALLPROC(NL(PCWATRN_has_unit_null),((*(&(DGWATRN_br->Elem)))),((*(&(DGWATRN_br->Elem))),(NL(PCWATRN_has_unit_null)).nonlocals)) )
{ 
 /* line 330: */
 /* line 331: */
 /* line 332: */
WFWATRN_remove = A68_TRUE;
} 
break;
} 
break;
default: 
 /* line 333: */
 /* line 334: */
/*SKIP*/;
break;
} 
} 
break;
case 20: /* REF STRUCT(MODE123,MODE161)  */
FGWATRN_ar = (XFWATRN.data.mode20);
 /* line 335: */
 /* line 336: */
GGWATRN = (*(&(FGWATRN_ar->Elem))) ;
switch ( GGWATRN.mode )
{ 
case 34: /* REF STRUCT(INT)  */
 /* line 337: */
VFWATRN_all_null_void = A68_TRUE;
break;
default: 
if ( A_CALLPROC(NL(PCWATRN_has_unit_null),((*(&(FGWATRN_ar->Elem)))),((*(&(FGWATRN_ar->Elem))),(NL(PCWATRN_has_unit_null)).nonlocals)) )
{ 
 /* line 338: */
 /* line 339: */
 /* line 340: */
WFWATRN_remove = A68_TRUE;
} 
break;
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 342: */
 /* line 343: */
if ( VFWATRN_all_null_void )
{ 
HGWATRN.data[0] = A_UNITE(IGWATRN,mode34,34,(&FIAATRN_unull));
 /* line 344: */
 /* line 345: */
HGWATRN.data[1] = A_UNITE(JGWATRN,mode34,34,(&FIAATRN_unull));
KGWATRN = HGWATRN;
} 
else
{ 
if ( WFWATRN_remove )
{ 
A_CALLPROC(NL(SEWATRN_remove_null_elem),(A, &MGWATRN),(A, &MGWATRN,(NL(SEWATRN_remove_null_elem)).nonlocals));
LGWATRN.data[0] = MGWATRN;
 /* line 346: */
A_CALLPROC(NL(SEWATRN_remove_null_elem),(B, &NGWATRN),(B, &NGWATRN,(NL(SEWATRN_remove_null_elem)).nonlocals));
LGWATRN.data[1] = NGWATRN;
KGWATRN = LGWATRN;
} 
else
{ 
OGWATRN.data[0] = A;
 /* line 347: */
 /* line 348: */
OGWATRN.data[1] = B;
KGWATRN = OGWATRN;
} 
} 
} 
A_PROC_EXIT(remove_null_void);
return( KGWATRN );
} 
#undef NL

A_STATIC A68_VOID  TGWATRN_anonymous(A68_161  Unit, A68_353 * Tprocs, A68_329  *ReturnedValue, void *NonLocals)
#define NL(x) (((UGWATRN_anonymous *)NonLocals)->x)
{ 
A68_161  VGWATRN;  /* united object - for case conformity */
A68_178 * WGWATRN_um;
A68_INT  XGWATRN;  /* YIELD */
A68_179 * YGWATRN_ud;
A68_INT  ZGWATRN;  /* YIELD */
A68_372  AHWATRN;  /* CALL */
A68_329  BHWATRN;  /* avoid structure result */
A68_329  CHWATRN;  /* collateral clause result */
A68_329  DHWATRN;  /* clause result */
 /* line 356: */
{ 
 /* line 357: */
VGWATRN = Unit ;
switch ( VGWATRN.mode )
{ 
case 23: /* REF STRUCT(MODE201,MODE161)  */
WGWATRN_um = (VGWATRN.data.mode23);
 /* line 358: */
XGWATRN = (*(&((&(WGWATRN_um->Inst))->Fnno))) ;
if ( (*(&A_VINDEX((*NL(EXVATRN_environ_specs)),XGWATRN))) )
{ 
 /* line 359: */
(*NL(PGWATRN_extra)) = A68_TRUE;
} 
break;
case 24: /* REF STRUCT(MODE161,MODE201,MODE161)  */
YGWATRN_ud = (VGWATRN.data.mode24);
 /* line 360: */
ZGWATRN = (*(&((&(YGWATRN_ud->Inst))->Fnno))) ;
if ( (*(&A_VINDEX((*NL(EXVATRN_environ_specs)),ZGWATRN))) )
{ 
 /* line 361: */
 /* line 362: */
(*NL(PGWATRN_extra)) = A68_TRUE;
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 363: */
if ( !(*NL(PGWATRN_extra)) )
{ 
AHWATRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(AHWATRN,(Unit, Tprocs, &BHWATRN),(Unit, Tprocs, &BHWATRN,(AHWATRN).nonlocals));
BHWATRN;
} 
 /* line 364: */
CHWATRN.U = Unit;
 /* line 365: */
 /* line 366: */
CHWATRN.C = A68_FALSE;
DHWATRN = CHWATRN;
} 
*ReturnedValue = (DHWATRN);
return;
} 
#undef NL

A_STATIC A68_BOOL  KHWATRN_extra_step(A68_161  U, void *NonLocals)
#define NL(x) (((LHWATRN_extra_step *)NonLocals)->x)
{ 
A68_372  MHWATRN;  /* CALL */
A68_329  NHWATRN;  /* avoid structure result */
A68_BOOL  OHWATRN;  /* clause result */
A_PROC_ENTRY(extra_step);
 /* line 369: */
 /* line 370: */
{ 
(*NL(PGWATRN_extra)) = A68_FALSE;
 /* line 371: */
MHWATRN = (*(&(NL(HHWATRN_extra_stepprocs)->Unit))) ;
A_CALLPROC(MHWATRN,(U, NL(HHWATRN_extra_stepprocs), &NHWATRN),(U, NL(HHWATRN_extra_stepprocs), &NHWATRN,(MHWATRN).nonlocals));
NHWATRN;
 /* line 372: */
 /* line 373: */
OHWATRN = (*NL(PGWATRN_extra));
} 
A_PROC_EXIT(extra_step);
return( OHWATRN );
} 
#undef NL

A_STATIC A68_166 * RHWATRN_unit_uname(A68_161  U, void *NonLocals)
#define NL(x) (((SHWATRN_unit_uname *)NonLocals)->x)
{ 
A68_161  THWATRN;  /* united object - for case conformity */
A68_166 * UHWATRN_un;
A68_166 * VHWATRN;  /* clause result */
A68_170 * WHWATRN_ut;
A68_171 * XHWATRN_ui;
A68_172 * YHWATRN_ut;
A68_187 * ZHWATRN_ub;
A68_186 * AIWATRN_uc;
A68_185 * BIWATRN_ua;
A68_166  CIWATRN;  /* collateral clause result */
A68_166 * DIWATRN;  /* YIELD */
A_PROC_ENTRY(unit_uname);
 /* line 376: */
 /* line 377: */
THWATRN = U ;
switch ( THWATRN.mode )
{ 
case 11: /* REF STRUCT(INT,INT)  */
UHWATRN_un = (THWATRN.data.mode11);
 /* line 378: */
VHWATRN = UHWATRN_un;
break;
case 15: /* REF STRUCT(MODE161,INT,INT)  */
WHWATRN_ut = (THWATRN.data.mode15);
 /* line 379: */
VHWATRN = A_CALLPROC(NL(QHWATRN_unit_uname),((*(&(WHWATRN_ut->Unit)))),((*(&(WHWATRN_ut->Unit))),(NL(QHWATRN_unit_uname)).nonlocals));
break;
case 16: /* REF STRUCT(MODE161,MODE123)  */
XHWATRN_ui = (THWATRN.data.mode16);
 /* line 380: */
VHWATRN = A_CALLPROC(NL(QHWATRN_unit_uname),((*(&(XHWATRN_ui->Unit)))),((*(&(XHWATRN_ui->Unit))),(NL(QHWATRN_unit_uname)).nonlocals));
break;
case 17: /* REF STRUCT(MODE161,MODE138)  */
YHWATRN_ut = (THWATRN.data.mode17);
 /* line 381: */
VHWATRN = A_CALLPROC(NL(QHWATRN_unit_uname),((*(&(YHWATRN_ut->Unit)))),((*(&(YHWATRN_ut->Unit))),(NL(QHWATRN_unit_uname)).nonlocals));
break;
case 32: /* REF STRUCT(MODE161)  */
ZHWATRN_ub = (THWATRN.data.mode32);
 /* line 382: */
VHWATRN = A_CALLPROC(NL(QHWATRN_unit_uname),((*(&(ZHWATRN_ub->Unit)))),((*(&(ZHWATRN_ub->Unit))),(NL(QHWATRN_unit_uname)).nonlocals));
break;
case 31: /* REF STRUCT(MODE161,MODE125)  */
AIWATRN_uc = (THWATRN.data.mode31);
 /* line 383: */
VHWATRN = A_CALLPROC(NL(QHWATRN_unit_uname),((*(&(AIWATRN_uc->Unit)))),((*(&(AIWATRN_uc->Unit))),(NL(QHWATRN_unit_uname)).nonlocals));
break;
case 30: /* REF STRUCT(MODE161,MODE114)  */
BIWATRN_ua = (THWATRN.data.mode30);
 /* line 384: */
VHWATRN = A_CALLPROC(NL(QHWATRN_unit_uname),((*(&(BIWATRN_ua->Unit)))),((*(&(BIWATRN_ua->Unit))),(NL(QHWATRN_unit_uname)).nonlocals));
break;
default: 
CIWATRN.Sort = 0;
 /* line 385: */
CIWATRN.Nameno = 0;
DIWATRN = A_HEAP(A68_166 ) ;
(*DIWATRN) = CIWATRN ;
VHWATRN = DIWATRN;
break;
} 
A_PROC_EXIT(unit_uname);
return( VHWATRN );
} 
#undef NL

A_STATIC A68_INT  GIWATRN_unit_nameno(A68_161  U, void *NonLocals)
#define NL(x) (((HIWATRN_unit_nameno *)NonLocals)->x)
{ 
A68_INT  IIWATRN_nameno;
A68_INT  LIWATRN;  /* clause result */
A_PROC_ENTRY(unit_nameno);
 /* line 388: */
{ 
IIWATRN_nameno = (*(&(A_CALLPROC(NL(QHWATRN_unit_uname),(U),(U,(NL(QHWATRN_unit_uname)).nonlocals))->Nameno)));
 /* line 389: */
if ( (IIWATRN_nameno==0) )
{ 
A_CALLPROC(NL(FWVATRN_sysfault),(KIWATRN),(KIWATRN,(NL(FWVATRN_sysfault)).nonlocals));
} 
 /* line 390: */
 /* line 391: */
LIWATRN = IIWATRN_nameno;
} 
A_PROC_EXIT(unit_nameno);
return( LIWATRN );
} 
#undef NL

A_STATIC A68_VOID  PIWATRN_remove_named_fntype(A68_139  Type, A68_353 * Tprocs, A68_320  *ReturnedValue, void *NonLocals)
#define NL(x) (((QIWATRN_remove_named_fntype *)NonLocals)->x)
{ 
A68_139  RIWATRN;  /* united object - for case conformity */
A68_140 * SIWATRN_tn;
A68_243  TIWATRN;  /* OPERATORS - simple index */
A68_INT  UIWATRN;  /* YIELD */
A68_152  VIWATRN;  /* united object - for case conformity */
A68_148 * WIWATRN_tg;
A68_363  XIWATRN;  /* CALL */
A68_320  YIWATRN;  /* avoid structure result */
A68_320  ZIWATRN_tc;
A68_320  AJWATRN;  /* collateral clause result */
A68_320  BJWATRN;  /* clause result */
A68_320  CJWATRN;  /* collateral clause result */
A68_320  DJWATRN;  /* collateral clause result */
A68_363  EJWATRN;  /* CALL */
A68_320  FJWATRN;  /* avoid structure result */
A_PROC_ENTRY(remove_named_fntype);
 /* line 398: */
 /* line 399: */
RIWATRN = Type ;
switch ( RIWATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
SIWATRN_tn = (RIWATRN.data.mode1);
 /* line 400: */
 /* line 401: */
TIWATRN = (*(&((*NL(DXVATRN_environ))->Types))) ;
UIWATRN = (*(&(SIWATRN_tn->Typeno))) ;
VIWATRN = (*(&((*(&A_VINDEX(TIWATRN,UIWATRN)))->Body))) ;
switch ( VIWATRN.mode )
{ 
case 3: /* REF STRUCT(MODE139)  */
WIWATRN_tg = (VIWATRN.data.mode3);
 /* line 402: */
 /* line 403: */
if ( A_CALLPROC(NL(GXVATRN_has_type_fntype),((*(&(WIWATRN_tg->Tag)))),((*(&(WIWATRN_tg->Tag))),(NL(GXVATRN_has_type_fntype)).nonlocals)) )
{ 
XIWATRN = (*(&(AWLATRN_nulltprocs->Type))) ;
A_CALLPROC(XIWATRN,((*(&(WIWATRN_tg->Tag))), Tprocs, &YIWATRN),((*(&(WIWATRN_tg->Tag))), Tprocs, &YIWATRN,(XIWATRN).nonlocals));
ZIWATRN_tc = YIWATRN;
 /* line 404: */
AJWATRN.T = ZIWATRN_tc.T;
 /* line 405: */
AJWATRN.C = A68_TRUE;
BJWATRN = AJWATRN;
} 
else
{ 
CJWATRN.T = Type;
 /* line 406: */
 /* line 407: */
CJWATRN.C = A68_FALSE;
BJWATRN = CJWATRN;
} 
break;
default: 
DJWATRN.T = Type;
 /* line 408: */
 /* line 409: */
DJWATRN.C = A68_FALSE;
BJWATRN = DJWATRN;
break;
} 
break;
default: 
 /* line 410: */
EJWATRN = (*(&(AWLATRN_nulltprocs->Type))) ;
A_CALLPROC(EJWATRN,(Type, Tprocs, &FJWATRN),(Type, Tprocs, &FJWATRN,(EJWATRN).nonlocals));
BJWATRN = FJWATRN;
break;
} 
A_PROC_EXIT(remove_named_fntype);
*ReturnedValue = (BJWATRN);
return;
} 
#undef NL

A_STATIC A68_INT  IJWATRN_add_reform(A68_143 * Tfn, A68_240 * Newenv)
{ 
A68_202 * JJWATRN_inputs;
A68_202  KJWATRN;  /* collateral clause result */
A68_202 * LJWATRN_outputs;
A68_202  MJWATRN;  /* collateral clause result */
A68_434  OJWATRN_generator;   /* proc value of non-global proc */
A68_239  TJWATRN;  /* avoid structure result */
A68_239  UJWATRN_nametypes;
A68_236  VJWATRN;  /* collateral clause result */
A68_114  WJWATRN;  /* OPERATORS - mode -> union mode */
A68_INT  XJWATRN;  /* YIELD */
A68_236 * YJWATRN;  /* YIELD */
A68_236  ZJWATRN;  /* collateral clause result */
A68_114  AKWATRN;  /* OPERATORS - mode -> union mode */
A68_INT  BKWATRN;  /* YIELD */
A68_236 * CKWATRN;  /* YIELD */
A68_245 * DKWATRN_fns;
A68_INT  EKWATRN_max;
A68_435  GKWATRN_generator;   /* proc value of non-global proc */
A68_245  LKWATRN;  /* avoid structure result */
A68_245  MKWATRN_newfns;
A68_245  NKWATRN;  /* OPERATORS - trim index */
A68_245  OKWATRN;  /* YIELD */
A68_417  PKWATRN;  /* collateral clause result */
A68_52  SKWATRN;  /* OPERATORS - mode -> union mode */
A68_VC  TKWATRN;  /* YIELD */
A68_52  UKWATRN;  /* OPERATORS - mode -> union mode */
A68_INT  VKWATRN;  /* YIELD */
A68_85  WKWATRN;  /* OPERATORS - istruct -> vector */
A68_VC  XKWATRN;  /* avoid structure result */
A68_VC  YKWATRN_newname;
A68_237 * ZKWATRN_fdec;
A68_237  ALWATRN;  /* collateral clause result */
A68_114  BLWATRN;  /* OPERATORS - mode -> union mode */
A68_233  CLWATRN;  /* OPERATORS - mode -> union mode */
A68_237 ** DLWATRN;  /* YIELD */
A68_INT  ELWATRN;  /* clause result */
A_PROC_ENTRY(add_reform);
 /* line 414: */
 /* line 416: */
{ 
JJWATRN_inputs = (A_HEAP(A68_202 ));
KJWATRN.Nameno = 1;
KJWATRN.Rest = NAAATRN_nilnames;
(*JJWATRN_inputs) = KJWATRN;
 /* line 417: */
LJWATRN_outputs = (A_HEAP(A68_202 ));
MJWATRN.Nameno = 2;
MJWATRN.Rest = NAAATRN_nilnames;
(*LJWATRN_outputs) = MJWATRN;
 /* line 418: */
A_CLOSURE( OJWATRN_generator, PJWATRN_generator, QJWATRN_generator );
A_CALLPROC(OJWATRN_generator,(A68_FALSE, &TJWATRN),(A68_FALSE, &TJWATRN,(OJWATRN_generator).nonlocals));
UJWATRN_nametypes = TJWATRN;
 /* line 419: */
VJWATRN.Name = TTCAOST_nullid;
VJWATRN.Type = (*(&(Tfn->From)));
VJWATRN.Attr = A_UNITE(WJWATRN,mode5,5,(&ZHAATRN_attrnull));
XJWATRN = 1 ;
YJWATRN = (&A_VINDEX(UJWATRN_nametypes,XJWATRN)) ;
(*YJWATRN) = VJWATRN;
 /* line 420: */
ZJWATRN.Name = TTCAOST_nullid;
ZJWATRN.Type = (*(&(Tfn->To)));
ZJWATRN.Attr = A_UNITE(AKWATRN,mode5,5,(&ZHAATRN_attrnull));
BKWATRN = 2 ;
CKWATRN = (&A_VINDEX(UJWATRN_nametypes,BKWATRN)) ;
(*CKWATRN) = ZJWATRN;
 /* line 422: */
DKWATRN_fns = (&(Newenv->Fns));
 /* line 423: */
EKWATRN_max = (*DKWATRN_fns).upb;
 /* line 424: */
A_CLOSURE( GKWATRN_generator, HKWATRN_generator, IKWATRN_generator );
(( IKWATRN_generator * ) ( GKWATRN_generator.nonlocals )) -> EKWATRN_max = (&EKWATRN_max);
A_CALLPROC(GKWATRN_generator,(A68_FALSE, &LKWATRN),(A68_FALSE, &LKWATRN,(GKWATRN_generator).nonlocals));
MKWATRN_newfns = LKWATRN;
 /* line 425: */
OKWATRN = A_VTRIM(NKWATRN,(MKWATRN_newfns),A_VTSCRIPT(&(NKWATRN.upb),(MKWATRN_newfns).upb,1,EKWATRN_max)) ;
A_VASSIGN2((*DKWATRN_fns),OKWATRN,A68_237 *);
 /* line 426: */
(*DKWATRN_fns) = MKWATRN_newfns;
 /* line 428: */
TKWATRN = RKWATRN ;
PKWATRN.data[0] = A_UNITE(SKWATRN,mode7,7,TKWATRN);
VKWATRN = EKWATRN_max+=1 ;
PKWATRN.data[1] = A_UNITE(UKWATRN,mode1,1,VKWATRN);
UJBAOSL_oneline( A_HISVEC(WKWATRN,PKWATRN,2,A68_52 ), &XKWATRN );
YKWATRN_newname = XKWATRN;
 /* line 429: */
ZKWATRN_fdec = (A_HEAP(A68_237 ));
ALWATRN.Sort = PKAATRN_localdec;
ALWATRN.Macro = A68_FALSE;
ALWATRN.Fnname = YKWATRN_newname;
ALWATRN.Macspecs = GCAATRN_nullmacspecs;
 /* line 430: */
ALWATRN.Attr = A_UNITE(BLWATRN,mode5,5,(&ZHAATRN_attrnull));
ALWATRN.Inputs = JJWATRN_inputs;
ALWATRN.Outputs = LJWATRN_outputs;
ALWATRN.Nametypes = UJWATRN_nametypes;
ALWATRN.Fnbody = A_UNITE(CLWATRN,mode4,4,(&NIAATRN_reform));
ALWATRN.Usage = CBAATRN_nilusage;
(*ZKWATRN_fdec) = ALWATRN;
 /* line 431: */
DLWATRN = (&A_VINDEX((*DKWATRN_fns),EKWATRN_max)) ;
(*DLWATRN) = ZKWATRN_fdec;
 /* line 432: */
 /* line 433: */
ELWATRN = EKWATRN_max;
} 
A_PROC_EXIT(add_reform);
return( ELWATRN );
} 
#undef NL

A_STATIC A68_143 * ILWATRN_trans_type(A68_139  T, A68_BOOL  Source, void *NonLocals)
#define NL(x) (((JLWATRN_trans_type *)NonLocals)->x)
{ 
A68_139  IMWATRN;  /* united object - for case conformity */
A68_140 * JMWATRN_tn;
A68_243  KMWATRN;  /* OPERATORS - simple index */
A68_INT  LMWATRN;  /* YIELD */
A68_152  MMWATRN;  /* united object - for case conformity */
A68_148 * NMWATRN_tg;
A68_143 * OMWATRN;  /* clause result */
A68_143  PMWATRN;  /* collateral clause result */
A68_139  QMWATRN;  /* OPERATORS - mode -> union mode */
A68_139  RMWATRN;  /* OPERATORS - mode -> union mode */
A68_143 * SMWATRN;  /* YIELD */
A68_143  TMWATRN;  /* collateral clause result */
A68_139  UMWATRN;  /* OPERATORS - mode -> union mode */
A68_139  VMWATRN;  /* OPERATORS - mode -> union mode */
A68_143 * WMWATRN;  /* YIELD */
A68_141 * XMWATRN_tr;
A68_143 * YMWATRN_tfn;
A68_139  ZMWATRN;  /* united object - for case conformity */
A68_139  ANWATRN;  /* clause result */
A68_139  BNWATRN;  /* OPERATORS - mode -> union mode */
A68_141  CNWATRN;  /* collateral clause result */
A68_141 * DNWATRN;  /* YIELD */
A68_139  ENWATRN;  /* OPERATORS - mode -> union mode */
A68_139  FNWATRN_from;
A68_139  GNWATRN;  /* united object - for case conformity */
A68_139  HNWATRN;  /* clause result */
A68_139  INWATRN;  /* OPERATORS - mode -> union mode */
A68_141  JNWATRN;  /* collateral clause result */
A68_141 * KNWATRN;  /* YIELD */
A68_139  LNWATRN;  /* OPERATORS - mode -> union mode */
A68_139  MNWATRN_to;
A68_143  NNWATRN;  /* collateral clause result */
A68_143 * ONWATRN;  /* YIELD */
A68_142 * PNWATRN_ts;
A68_142 * QNWATRN_tst;
A68_142 * RNWATRN_tfrom;
A68_142 ** SNWATRN_fromptr;
A68_142 * TNWATRN_tto;
A68_142 ** UNWATRN_toptr;
A68_143 * VNWATRN_tfn;
A68_139  WNWATRN;  /* united object - for case conformity */
A68_142  XNWATRN;  /* collateral clause result */
A68_142 * YNWATRN;  /* YIELD */
A68_139  ZNWATRN;  /* united object - for case conformity */
A68_142  AOWATRN;  /* collateral clause result */
A68_142 * BOWATRN;  /* YIELD */
A68_143  COWATRN;  /* collateral clause result */
A68_139  DOWATRN;  /* avoid structure result */
A68_139  EOWATRN;  /* avoid structure result */
A68_143 * FOWATRN;  /* YIELD */
A68_143 * GOWATRN_tf;
A68_143 * HOWATRN_from;
A68_143 * IOWATRN_to;
A68_139  JOWATRN;  /* clause result */
A68_139  KOWATRN;  /* avoid structure result */
A68_139  LOWATRN;  /* avoid structure result */
A68_139  MOWATRN_nfrom;
A68_139  NOWATRN;  /* clause result */
A68_139  OOWATRN;  /* avoid structure result */
A68_139  POWATRN;  /* avoid structure result */
A68_139  QOWATRN_nto;
A68_143  ROWATRN;  /* collateral clause result */
A68_143 * SOWATRN;  /* YIELD */
A68_144 * TOWATRN_tb;
A68_143  UOWATRN;  /* collateral clause result */
A68_139  VOWATRN;  /* OPERATORS - mode -> union mode */
A68_139  WOWATRN;  /* OPERATORS - mode -> union mode */
A68_143 * XOWATRN;  /* YIELD */
A_PROC_ENTRY(trans_type);
 /* line 438: */
 /* line 443: */
{ 
 /* line 449: */
 /* line 452: */
 /* line 459: */
 /* line 460: */
IMWATRN = T ;
switch ( IMWATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
JMWATRN_tn = (IMWATRN.data.mode1);
 /* line 461: */
{ 
 /* line 462: */
KMWATRN = (*(&((*NL(DXVATRN_environ))->Types))) ;
LMWATRN = (*(&(JMWATRN_tn->Typeno))) ;
MMWATRN = (*(&((*(&A_VINDEX(KMWATRN,LMWATRN)))->Body))) ;
switch ( MMWATRN.mode )
{ 
case 3: /* REF STRUCT(MODE139)  */
NMWATRN_tg = (MMWATRN.data.mode3);
 /* line 463: */
 /* line 464: */
if ( A_CALLPROC(NL(GXVATRN_has_type_fntype),((*(&(NMWATRN_tg->Tag)))),((*(&(NMWATRN_tg->Tag))),(NL(GXVATRN_has_type_fntype)).nonlocals)) )
{ 
 /* line 465: */
OMWATRN = A_CALLPROC(NL(HLWATRN_trans_type),((*(&(NMWATRN_tg->Tag))), Source),((*(&(NMWATRN_tg->Tag))), Source,(NL(HLWATRN_trans_type)).nonlocals));
} 
else
{ 
if ( Source )
{ 
PMWATRN.From = A_UNITE(QMWATRN,mode9,9,(&DIAATRN_tnull));
PMWATRN.To = T;
} 
else
{ 
PMWATRN.From = T;
 /* line 466: */
PMWATRN.To = A_UNITE(RMWATRN,mode9,9,(&DIAATRN_tnull));
} 
 /* line 467: */
SMWATRN = A_HEAP(A68_143 ) ;
(*SMWATRN) = PMWATRN ;
OMWATRN = SMWATRN;
} 
break;
default: 
if ( Source )
{ 
TMWATRN.From = A_UNITE(UMWATRN,mode9,9,(&DIAATRN_tnull));
TMWATRN.To = T;
} 
else
{ 
TMWATRN.From = T;
 /* line 468: */
TMWATRN.To = A_UNITE(VMWATRN,mode9,9,(&DIAATRN_tnull));
} 
 /* line 469: */
 /* line 470: */
WMWATRN = A_HEAP(A68_143 ) ;
(*WMWATRN) = TMWATRN ;
OMWATRN = WMWATRN;
break;
} 
} 
break;
case 2: /* REF STRUCT(MODE123,MODE139)  */
XMWATRN_tr = (IMWATRN.data.mode2);
 /* line 471: */
{ 
YMWATRN_tfn = A_CALLPROC(NL(HLWATRN_trans_type),((*(&(XMWATRN_tr->Elem))), Source),((*(&(XMWATRN_tr->Elem))), Source,(NL(HLWATRN_trans_type)).nonlocals));
 /* line 472: */
 /* line 473: */
ZMWATRN = (*(&(YMWATRN_tfn->From))) ;
switch ( ZMWATRN.mode )
{ 
case 9: /* REF STRUCT(INT)  */
 /* line 474: */
ANWATRN = A_UNITE(BNWATRN,mode9,9,(&DIAATRN_tnull));
break;
default: 
CNWATRN.Size = (*(&(XMWATRN_tr->Size)));
 /* line 475: */
CNWATRN.Elem = (*(&(YMWATRN_tfn->From)));
DNWATRN = A_HEAP(A68_141 ) ;
(*DNWATRN) = CNWATRN ;
ANWATRN = A_UNITE(ENWATRN,mode2,2,DNWATRN);
break;
} 
FNWATRN_from = ANWATRN;
 /* line 476: */
 /* line 477: */
GNWATRN = (*(&(YMWATRN_tfn->To))) ;
switch ( GNWATRN.mode )
{ 
case 9: /* REF STRUCT(INT)  */
 /* line 478: */
HNWATRN = A_UNITE(INWATRN,mode9,9,(&DIAATRN_tnull));
break;
default: 
JNWATRN.Size = (*(&(XMWATRN_tr->Size)));
 /* line 479: */
JNWATRN.Elem = (*(&(YMWATRN_tfn->To)));
KNWATRN = A_HEAP(A68_141 ) ;
(*KNWATRN) = JNWATRN ;
HNWATRN = A_UNITE(LNWATRN,mode2,2,KNWATRN);
break;
} 
MNWATRN_to = HNWATRN;
 /* line 480: */
NNWATRN.From = FNWATRN_from;
 /* line 481: */
NNWATRN.To = MNWATRN_to;
 /* line 482: */
ONWATRN = A_HEAP(A68_143 ) ;
(*ONWATRN) = NNWATRN ;
OMWATRN = ONWATRN;
} 
break;
case 3: /* REF STRUCT(MODE139,REF MODE142)  */
PNWATRN_ts = (IMWATRN.data.mode3);
 /* line 483: */
{ 
QNWATRN_tst = PNWATRN_ts;
 /* line 484: */
RNWATRN_tfrom = GAAATRN_niltstr;
SNWATRN_fromptr = (&RNWATRN_tfrom);
 /* line 485: */
TNWATRN_tto = GAAATRN_niltstr;
UNWATRN_toptr = (&TNWATRN_tto);
 /* line 486: */
for ( ;; )
{ 
 /* line 487: */
if ( !((QNWATRN_tst!=GAAATRN_niltstr)) ) break;
VNWATRN_tfn = A_CALLPROC(NL(HLWATRN_trans_type),((*(&(QNWATRN_tst->Elem))), Source),((*(&(QNWATRN_tst->Elem))), Source,(NL(HLWATRN_trans_type)).nonlocals));
 /* line 488: */
 /* line 489: */
WNWATRN = (*(&(VNWATRN_tfn->From))) ;
switch ( WNWATRN.mode )
{ 
case 9: /* REF STRUCT(INT)  */
 /* line 490: */
/*SKIP*/;
break;
default: 
XNWATRN.Elem = (*(&(VNWATRN_tfn->From)));
XNWATRN.Rest = GAAATRN_niltstr;
YNWATRN = A_HEAP(A68_142 ) ;
(*YNWATRN) = XNWATRN ;
(*SNWATRN_fromptr) = YNWATRN;
 /* line 491: */
 /* line 492: */
SNWATRN_fromptr = (&((*SNWATRN_fromptr)->Rest));
break;
} 
 /* line 493: */
 /* line 494: */
ZNWATRN = (*(&(VNWATRN_tfn->To))) ;
switch ( ZNWATRN.mode )
{ 
case 9: /* REF STRUCT(INT)  */
 /* line 495: */
/*SKIP*/;
break;
default: 
AOWATRN.Elem = (*(&(VNWATRN_tfn->To)));
AOWATRN.Rest = GAAATRN_niltstr;
BOWATRN = A_HEAP(A68_142 ) ;
(*BOWATRN) = AOWATRN ;
(*UNWATRN_toptr) = BOWATRN;
 /* line 496: */
 /* line 497: */
UNWATRN_toptr = (&((*UNWATRN_toptr)->Rest));
break;
} 
 /* line 498: */
 /* line 499: */
QNWATRN_tst = (*(&(QNWATRN_tst->Rest)));
}
 /* line 500: */
MLWATRN_tstr_type( RNWATRN_tfrom, &DOWATRN );
COWATRN.From = DOWATRN;
 /* line 501: */
MLWATRN_tstr_type( TNWATRN_tto, &EOWATRN );
COWATRN.To = EOWATRN;
 /* line 502: */
FOWATRN = A_HEAP(A68_143 ) ;
(*FOWATRN) = COWATRN ;
OMWATRN = FOWATRN;
} 
break;
case 4: /* REF STRUCT(MODE139,MODE139)  */
GOWATRN_tf = (IMWATRN.data.mode4);
 /* line 503: */
{ 
HOWATRN_from = A_CALLPROC(NL(HLWATRN_trans_type),((*(&(GOWATRN_tf->From))), !Source),((*(&(GOWATRN_tf->From))), !Source,(NL(HLWATRN_trans_type)).nonlocals));
 /* line 504: */
IOWATRN_to = A_CALLPROC(NL(HLWATRN_trans_type),((*(&(GOWATRN_tf->To))), Source),((*(&(GOWATRN_tf->To))), Source,(NL(HLWATRN_trans_type)).nonlocals));
 /* line 505: */
 /* line 506: */
if ( Source )
{ 
 /* line 507: */
ZLWATRN_append_tstr( (*(&(HOWATRN_from->From))), (*(&(IOWATRN_to->From))), &KOWATRN );
JOWATRN = KOWATRN;
} 
else
{ 
 /* line 508: */
ZLWATRN_append_tstr( (*(&(IOWATRN_to->From))), (*(&(HOWATRN_from->From))), &LOWATRN );
JOWATRN = LOWATRN;
} 
MOWATRN_nfrom = JOWATRN;
 /* line 509: */
 /* line 510: */
if ( Source )
{ 
 /* line 511: */
ZLWATRN_append_tstr( (*(&(IOWATRN_to->To))), (*(&(HOWATRN_from->To))), &OOWATRN );
NOWATRN = OOWATRN;
} 
else
{ 
 /* line 512: */
ZLWATRN_append_tstr( (*(&(HOWATRN_from->To))), (*(&(IOWATRN_to->To))), &POWATRN );
NOWATRN = POWATRN;
} 
QOWATRN_nto = NOWATRN;
 /* line 513: */
ROWATRN.From = MOWATRN_nfrom;
 /* line 514: */
ROWATRN.To = QOWATRN_nto;
 /* line 515: */
SOWATRN = A_HEAP(A68_143 ) ;
(*SOWATRN) = ROWATRN ;
OMWATRN = SOWATRN;
} 
break;
case 5: /* REF STRUCT(MODE139)  */
TOWATRN_tb = (IMWATRN.data.mode5);
 /* line 516: */
 /* line 517: */
OMWATRN = A_CALLPROC(NL(HLWATRN_trans_type),((*(&(TOWATRN_tb->Type))), Source),((*(&(TOWATRN_tb->Type))), Source,(NL(HLWATRN_trans_type)).nonlocals));
break;
default: 
if ( Source )
{ 
UOWATRN.From = A_UNITE(VOWATRN,mode9,9,(&DIAATRN_tnull));
UOWATRN.To = T;
} 
else
{ 
UOWATRN.From = T;
 /* line 518: */
UOWATRN.To = A_UNITE(WOWATRN,mode9,9,(&DIAATRN_tnull));
} 
 /* line 519: */
XOWATRN = A_HEAP(A68_143 ) ;
(*XOWATRN) = UOWATRN ;
OMWATRN = XOWATRN;
break;
} 
} 
A_PROC_EXIT(trans_type);
return( OMWATRN );
} 
#undef NL

A_STATIC A68_143 * APWATRN_transform_type(A68_139  T, void *NonLocals)
#define NL(x) (((BPWATRN_transform_type *)NonLocals)->x)
{ 
A68_143 * CPWATRN;  /* clause result */
A_PROC_ENTRY(transform_type);
CPWATRN = A_CALLPROC(NL(HLWATRN_trans_type),(T, A68_TRUE),(T, A68_TRUE,(NL(HLWATRN_trans_type)).nonlocals));
A_PROC_EXIT(transform_type);
return( CPWATRN );
} 
#undef NL

A_STATIC A68_167 * GPWATRN_trans_unit(A68_161  U, A68_BOOL  Issource, void *NonLocals)
#define NL(x) (((HPWATRN_trans_unit *)NonLocals)->x)
{ 
A68_161  GQWATRN;  /* united object - for case conformity */
A68_175 * HQWATRN_ur;
A68_167 * IQWATRN_ufn;
A68_161  JQWATRN;  /* united object - for case conformity */
A68_161  KQWATRN;  /* clause result */
A68_161  LQWATRN;  /* OPERATORS - mode -> union mode */
A68_175  MQWATRN;  /* collateral clause result */
A68_175 * NQWATRN;  /* YIELD */
A68_161  OQWATRN;  /* OPERATORS - mode -> union mode */
A68_161  PQWATRN_usink;
A68_161  QQWATRN;  /* united object - for case conformity */
A68_161  RQWATRN;  /* clause result */
A68_161  SQWATRN;  /* OPERATORS - mode -> union mode */
A68_175  TQWATRN;  /* collateral clause result */
A68_175 * UQWATRN;  /* YIELD */
A68_161  VQWATRN;  /* OPERATORS - mode -> union mode */
A68_161  WQWATRN_usource;
A68_167  XQWATRN;  /* collateral clause result */
A68_167 * YQWATRN;  /* clause result */
A68_167 * ZQWATRN;  /* YIELD */
A68_176 * ARWATRN_us;
A68_176 * BRWATRN_ust;
A68_176 * CRWATRN_ssink;
A68_176 ** DRWATRN_siptr;
A68_176 * ERWATRN_ssource;
A68_176 ** FRWATRN_soptr;
A68_167 * GRWATRN_ufn;
A68_161  HRWATRN;  /* united object - for case conformity */
A68_176  IRWATRN;  /* collateral clause result */
A68_176 * JRWATRN;  /* YIELD */
A68_161  KRWATRN;  /* united object - for case conformity */
A68_176  LRWATRN;  /* collateral clause result */
A68_176 * MRWATRN;  /* YIELD */
A68_167  NRWATRN;  /* collateral clause result */
A68_161  ORWATRN;  /* avoid structure result */
A68_161  PRWATRN;  /* avoid structure result */
A68_167 * QRWATRN;  /* YIELD */
A68_167 * RRWATRN_uf;
A68_167 * SRWATRN_fsink;
A68_167 * TRWATRN_fsource;
A68_161  URWATRN;  /* clause result */
A68_161  VRWATRN;  /* avoid structure result */
A68_161  WRWATRN;  /* avoid structure result */
A68_161  XRWATRN_usink;
A68_161  YRWATRN;  /* clause result */
A68_161  ZRWATRN;  /* avoid structure result */
A68_161  ASWATRN;  /* avoid structure result */
A68_161  BSWATRN_usource;
A68_167  CSWATRN;  /* collateral clause result */
A68_167 * DSWATRN;  /* YIELD */
A68_171 * ESWATRN_ui;
A68_167 * FSWATRN_ufi;
A68_161  GSWATRN;  /* united object - for case conformity */
A68_161  HSWATRN;  /* clause result */
A68_161  ISWATRN;  /* OPERATORS - mode -> union mode */
A68_171  JSWATRN;  /* collateral clause result */
A68_171 * KSWATRN;  /* YIELD */
A68_161  LSWATRN;  /* OPERATORS - mode -> union mode */
A68_161  MSWATRN_siindex;
A68_161  NSWATRN;  /* united object - for case conformity */
A68_161  OSWATRN;  /* clause result */
A68_161  PSWATRN;  /* OPERATORS - mode -> union mode */
A68_171  QSWATRN;  /* collateral clause result */
A68_171 * RSWATRN;  /* YIELD */
A68_161  SSWATRN;  /* OPERATORS - mode -> union mode */
A68_161  TSWATRN_soindex;
A68_167  USWATRN;  /* collateral clause result */
A68_167 * VSWATRN;  /* YIELD */
A68_172 * WSWATRN_ut;
A68_167 * XSWATRN_uft;
A68_161  YSWATRN;  /* united object - for case conformity */
A68_161  ZSWATRN;  /* clause result */
A68_161  ATWATRN;  /* OPERATORS - mode -> union mode */
A68_172  BTWATRN;  /* collateral clause result */
A68_172 * CTWATRN;  /* YIELD */
A68_161  DTWATRN;  /* OPERATORS - mode -> union mode */
A68_161  ETWATRN_sitrim;
A68_161  FTWATRN;  /* united object - for case conformity */
A68_161  GTWATRN;  /* clause result */
A68_161  HTWATRN;  /* OPERATORS - mode -> union mode */
A68_172  ITWATRN;  /* collateral clause result */
A68_172 * JTWATRN;  /* YIELD */
A68_161  KTWATRN;  /* OPERATORS - mode -> union mode */
A68_161  LTWATRN_sotrim;
A68_167  MTWATRN;  /* collateral clause result */
A68_167 * NTWATRN;  /* YIELD */
A68_177 * OTWATRN_uc;
A68_167 * PTWATRN_lhs;
A68_167 * QTWATRN_rhs;
A68_161  RTWATRN;  /* united object - for case conformity */
A68_161  STWATRN;  /* clause result */
A68_161  TTWATRN;  /* OPERATORS - mode -> union mode */
A68_177  UTWATRN;  /* collateral clause result */
A68_177 * VTWATRN;  /* YIELD */
A68_161  WTWATRN;  /* OPERATORS - mode -> union mode */
A68_161  XTWATRN_siconc;
A68_161  YTWATRN;  /* united object - for case conformity */
A68_161  ZTWATRN;  /* clause result */
A68_161  AUWATRN;  /* OPERATORS - mode -> union mode */
A68_177  BUWATRN;  /* collateral clause result */
A68_177 * CUWATRN;  /* YIELD */
A68_161  DUWATRN;  /* OPERATORS - mode -> union mode */
A68_161  EUWATRN_soconc;
A68_167  FUWATRN;  /* collateral clause result */
A68_167 * GUWATRN;  /* YIELD */
A68_185 * HUWATRN_ua;
A68_167 * IUWATRN_ufa;
A68_161  JUWATRN;  /* united object - for case conformity */
A68_161  KUWATRN;  /* clause result */
A68_161  LUWATRN;  /* OPERATORS - mode -> union mode */
A68_185  MUWATRN;  /* collateral clause result */
A68_185 * NUWATRN;  /* YIELD */
A68_161  OUWATRN;  /* OPERATORS - mode -> union mode */
A68_161  PUWATRN_siattr;
A68_161  QUWATRN;  /* united object - for case conformity */
A68_161  RUWATRN;  /* clause result */
A68_161  SUWATRN;  /* OPERATORS - mode -> union mode */
A68_185  TUWATRN;  /* collateral clause result */
A68_185 * UUWATRN;  /* YIELD */
A68_161  VUWATRN;  /* OPERATORS - mode -> union mode */
A68_161  WUWATRN_soattr;
A68_167  XUWATRN;  /* collateral clause result */
A68_167 * YUWATRN;  /* YIELD */
A68_187 * ZUWATRN_ub;
A68_170 * AVWATRN_up;
A68_167 * DVWATRN;  /* OPERATORS - skip to mode */
A68_167  EVWATRN;  /* collateral clause result */
A68_161  FVWATRN;  /* OPERATORS - mode -> union mode */
A68_161  GVWATRN;  /* OPERATORS - mode -> union mode */
A68_167 * HVWATRN;  /* YIELD */
A_PROC_ENTRY(trans_unit);
 /* line 527: */
 /* line 533: */
{ 
 /* line 539: */
 /* line 542: */
 /* line 549: */
 /* line 550: */
GQWATRN = U ;
switch ( GQWATRN.mode )
{ 
case 20: /* REF STRUCT(MODE123,MODE161)  */
HQWATRN_ur = (GQWATRN.data.mode20);
 /* line 551: */
{ 
IQWATRN_ufn = A_CALLPROC(NL(FPWATRN_trans_unit),((*(&(HQWATRN_ur->Elem))), Issource),((*(&(HQWATRN_ur->Elem))), Issource,(NL(FPWATRN_trans_unit)).nonlocals));
 /* line 552: */
 /* line 553: */
JQWATRN = (*(&(IQWATRN_ufn->Sink))) ;
switch ( JQWATRN.mode )
{ 
case 34: /* REF STRUCT(INT)  */
 /* line 554: */
KQWATRN = A_UNITE(LQWATRN,mode34,34,(&FIAATRN_unull));
break;
default: 
MQWATRN.Size = (*(&(HQWATRN_ur->Size)));
 /* line 555: */
MQWATRN.Elem = (*(&(IQWATRN_ufn->Sink)));
NQWATRN = A_HEAP(A68_175 ) ;
(*NQWATRN) = MQWATRN ;
KQWATRN = A_UNITE(OQWATRN,mode20,20,NQWATRN);
break;
} 
PQWATRN_usink = KQWATRN;
 /* line 556: */
 /* line 557: */
QQWATRN = (*(&(IQWATRN_ufn->Source))) ;
switch ( QQWATRN.mode )
{ 
case 34: /* REF STRUCT(INT)  */
 /* line 558: */
RQWATRN = A_UNITE(SQWATRN,mode34,34,(&FIAATRN_unull));
break;
default: 
TQWATRN.Size = (*(&(HQWATRN_ur->Size)));
 /* line 559: */
TQWATRN.Elem = (*(&(IQWATRN_ufn->Source)));
UQWATRN = A_HEAP(A68_175 ) ;
(*UQWATRN) = TQWATRN ;
RQWATRN = A_UNITE(VQWATRN,mode20,20,UQWATRN);
break;
} 
WQWATRN_usource = RQWATRN;
 /* line 560: */
XQWATRN.Sink = PQWATRN_usink;
 /* line 561: */
XQWATRN.Source = WQWATRN_usource;
 /* line 562: */
ZQWATRN = A_HEAP(A68_167 ) ;
(*ZQWATRN) = XQWATRN ;
YQWATRN = ZQWATRN;
} 
break;
case 21: /* REF STRUCT(MODE161,REF MODE176)  */
ARWATRN_us = (GQWATRN.data.mode21);
 /* line 563: */
{ 
BRWATRN_ust = ARWATRN_us;
 /* line 564: */
CRWATRN_ssink = IAAATRN_nilustr;
DRWATRN_siptr = (&CRWATRN_ssink);
 /* line 565: */
ERWATRN_ssource = IAAATRN_nilustr;
FRWATRN_soptr = (&ERWATRN_ssource);
 /* line 566: */
for ( ;; )
{ 
 /* line 567: */
if ( !((BRWATRN_ust!=IAAATRN_nilustr)) ) break;
GRWATRN_ufn = A_CALLPROC(NL(FPWATRN_trans_unit),((*(&(BRWATRN_ust->Elem))), Issource),((*(&(BRWATRN_ust->Elem))), Issource,(NL(FPWATRN_trans_unit)).nonlocals));
 /* line 568: */
 /* line 569: */
HRWATRN = (*(&(GRWATRN_ufn->Sink))) ;
switch ( HRWATRN.mode )
{ 
case 34: /* REF STRUCT(INT)  */
 /* line 570: */
/*SKIP*/;
break;
default: 
IRWATRN.Elem = (*(&(GRWATRN_ufn->Sink)));
IRWATRN.Rest = IAAATRN_nilustr;
JRWATRN = A_HEAP(A68_176 ) ;
(*JRWATRN) = IRWATRN ;
(*DRWATRN_siptr) = JRWATRN;
 /* line 571: */
 /* line 572: */
DRWATRN_siptr = (&((*DRWATRN_siptr)->Rest));
break;
} 
 /* line 573: */
 /* line 574: */
KRWATRN = (*(&(GRWATRN_ufn->Source))) ;
switch ( KRWATRN.mode )
{ 
case 34: /* REF STRUCT(INT)  */
 /* line 575: */
/*SKIP*/;
break;
default: 
LRWATRN.Elem = (*(&(GRWATRN_ufn->Source)));
LRWATRN.Rest = IAAATRN_nilustr;
MRWATRN = A_HEAP(A68_176 ) ;
(*MRWATRN) = LRWATRN ;
(*FRWATRN_soptr) = MRWATRN;
 /* line 576: */
 /* line 577: */
FRWATRN_soptr = (&((*FRWATRN_soptr)->Rest));
break;
} 
 /* line 578: */
 /* line 579: */
BRWATRN_ust = (*(&(BRWATRN_ust->Rest)));
}
 /* line 580: */
KPWATRN_ustr_unit( CRWATRN_ssink, &ORWATRN );
NRWATRN.Sink = ORWATRN;
 /* line 581: */
KPWATRN_ustr_unit( ERWATRN_ssource, &PRWATRN );
NRWATRN.Source = PRWATRN;
 /* line 582: */
QRWATRN = A_HEAP(A68_167 ) ;
(*QRWATRN) = NRWATRN ;
YQWATRN = QRWATRN;
} 
break;
case 12: /* REF STRUCT(MODE161,MODE161)  */
RRWATRN_uf = (GQWATRN.data.mode12);
 /* line 583: */
{ 
SRWATRN_fsink = A_CALLPROC(NL(FPWATRN_trans_unit),((*(&(RRWATRN_uf->Sink))), !Issource),((*(&(RRWATRN_uf->Sink))), !Issource,(NL(FPWATRN_trans_unit)).nonlocals));
 /* line 584: */
TRWATRN_fsource = A_CALLPROC(NL(FPWATRN_trans_unit),((*(&(RRWATRN_uf->Source))), Issource),((*(&(RRWATRN_uf->Source))), Issource,(NL(FPWATRN_trans_unit)).nonlocals));
 /* line 585: */
 /* line 586: */
if ( Issource )
{ 
 /* line 587: */
XPWATRN_append_ustr( (*(&(SRWATRN_fsink->Sink))), (*(&(TRWATRN_fsource->Sink))), &VRWATRN );
URWATRN = VRWATRN;
} 
else
{ 
 /* line 588: */
XPWATRN_append_ustr( (*(&(TRWATRN_fsource->Sink))), (*(&(SRWATRN_fsink->Sink))), &WRWATRN );
URWATRN = WRWATRN;
} 
XRWATRN_usink = URWATRN;
 /* line 589: */
 /* line 590: */
if ( Issource )
{ 
 /* line 591: */
XPWATRN_append_ustr( (*(&(TRWATRN_fsource->Source))), (*(&(SRWATRN_fsink->Source))), &ZRWATRN );
YRWATRN = ZRWATRN;
} 
else
{ 
 /* line 592: */
XPWATRN_append_ustr( (*(&(SRWATRN_fsink->Source))), (*(&(TRWATRN_fsource->Source))), &ASWATRN );
YRWATRN = ASWATRN;
} 
BSWATRN_usource = YRWATRN;
 /* line 593: */
CSWATRN.Sink = XRWATRN_usink;
 /* line 594: */
CSWATRN.Source = BSWATRN_usource;
 /* line 595: */
DSWATRN = A_HEAP(A68_167 ) ;
(*DSWATRN) = CSWATRN ;
YQWATRN = DSWATRN;
} 
break;
case 16: /* REF STRUCT(MODE161,MODE123)  */
ESWATRN_ui = (GQWATRN.data.mode16);
 /* line 596: */
{ 
FSWATRN_ufi = A_CALLPROC(NL(FPWATRN_trans_unit),((*(&(ESWATRN_ui->Unit))), Issource),((*(&(ESWATRN_ui->Unit))), Issource,(NL(FPWATRN_trans_unit)).nonlocals));
 /* line 597: */
 /* line 598: */
GSWATRN = (*(&(FSWATRN_ufi->Sink))) ;
switch ( GSWATRN.mode )
{ 
case 34: /* REF STRUCT(INT)  */
 /* line 599: */
HSWATRN = A_UNITE(ISWATRN,mode34,34,(&FIAATRN_unull));
break;
default: 
JSWATRN.Unit = (*(&(FSWATRN_ufi->Sink)));
 /* line 600: */
JSWATRN.Index = (*(&(ESWATRN_ui->Index)));
KSWATRN = A_HEAP(A68_171 ) ;
(*KSWATRN) = JSWATRN ;
HSWATRN = A_UNITE(LSWATRN,mode16,16,KSWATRN);
break;
} 
MSWATRN_siindex = HSWATRN;
 /* line 601: */
 /* line 602: */
NSWATRN = (*(&(FSWATRN_ufi->Source))) ;
switch ( NSWATRN.mode )
{ 
case 34: /* REF STRUCT(INT)  */
 /* line 603: */
OSWATRN = A_UNITE(PSWATRN,mode34,34,(&FIAATRN_unull));
break;
default: 
QSWATRN.Unit = (*(&(FSWATRN_ufi->Source)));
 /* line 604: */
QSWATRN.Index = (*(&(ESWATRN_ui->Index)));
RSWATRN = A_HEAP(A68_171 ) ;
(*RSWATRN) = QSWATRN ;
OSWATRN = A_UNITE(SSWATRN,mode16,16,RSWATRN);
break;
} 
TSWATRN_soindex = OSWATRN;
 /* line 605: */
USWATRN.Sink = MSWATRN_siindex;
 /* line 606: */
USWATRN.Source = TSWATRN_soindex;
 /* line 607: */
VSWATRN = A_HEAP(A68_167 ) ;
(*VSWATRN) = USWATRN ;
YQWATRN = VSWATRN;
} 
break;
case 17: /* REF STRUCT(MODE161,MODE138)  */
WSWATRN_ut = (GQWATRN.data.mode17);
 /* line 608: */
{ 
XSWATRN_uft = A_CALLPROC(NL(FPWATRN_trans_unit),((*(&(WSWATRN_ut->Unit))), Issource),((*(&(WSWATRN_ut->Unit))), Issource,(NL(FPWATRN_trans_unit)).nonlocals));
 /* line 609: */
 /* line 610: */
YSWATRN = (*(&(XSWATRN_uft->Sink))) ;
switch ( YSWATRN.mode )
{ 
case 34: /* REF STRUCT(INT)  */
 /* line 611: */
ZSWATRN = A_UNITE(ATWATRN,mode34,34,(&FIAATRN_unull));
break;
default: 
BTWATRN.Unit = (*(&(XSWATRN_uft->Sink)));
 /* line 612: */
BTWATRN.Range = (*(&(WSWATRN_ut->Range)));
CTWATRN = A_HEAP(A68_172 ) ;
(*CTWATRN) = BTWATRN ;
ZSWATRN = A_UNITE(DTWATRN,mode17,17,CTWATRN);
break;
} 
ETWATRN_sitrim = ZSWATRN;
 /* line 613: */
 /* line 614: */
FTWATRN = (*(&(XSWATRN_uft->Source))) ;
switch ( FTWATRN.mode )
{ 
case 34: /* REF STRUCT(INT)  */
 /* line 615: */
GTWATRN = A_UNITE(HTWATRN,mode34,34,(&FIAATRN_unull));
break;
default: 
ITWATRN.Unit = (*(&(XSWATRN_uft->Source)));
 /* line 616: */
ITWATRN.Range = (*(&(WSWATRN_ut->Range)));
JTWATRN = A_HEAP(A68_172 ) ;
(*JTWATRN) = ITWATRN ;
GTWATRN = A_UNITE(KTWATRN,mode17,17,JTWATRN);
break;
} 
LTWATRN_sotrim = GTWATRN;
 /* line 617: */
MTWATRN.Sink = ETWATRN_sitrim;
 /* line 618: */
MTWATRN.Source = LTWATRN_sotrim;
 /* line 619: */
NTWATRN = A_HEAP(A68_167 ) ;
(*NTWATRN) = MTWATRN ;
YQWATRN = NTWATRN;
} 
break;
case 22: /* REF STRUCT(BOOL,INT,MODE161,MODE161)  */
OTWATRN_uc = (GQWATRN.data.mode22);
 /* line 620: */
{ 
PTWATRN_lhs = A_CALLPROC(NL(FPWATRN_trans_unit),((*(&(OTWATRN_uc->Left))), Issource),((*(&(OTWATRN_uc->Left))), Issource,(NL(FPWATRN_trans_unit)).nonlocals));
 /* line 621: */
QTWATRN_rhs = A_CALLPROC(NL(FPWATRN_trans_unit),((*(&(OTWATRN_uc->Right))), Issource),((*(&(OTWATRN_uc->Right))), Issource,(NL(FPWATRN_trans_unit)).nonlocals));
 /* line 622: */
 /* line 623: */
RTWATRN = (*(&(PTWATRN_lhs->Sink))) ;
switch ( RTWATRN.mode )
{ 
case 34: /* REF STRUCT(INT)  */
 /* line 624: */
STWATRN = A_UNITE(TTWATRN,mode34,34,(&FIAATRN_unull));
break;
default: 
UTWATRN.String = (*(&(OTWATRN_uc->String)));
 /* line 625: */
UTWATRN.Sort = (*(&(OTWATRN_uc->Sort)));
UTWATRN.Left = (*(&(PTWATRN_lhs->Sink)));
 /* line 626: */
UTWATRN.Right = (*(&(QTWATRN_rhs->Sink)));
VTWATRN = A_HEAP(A68_177 ) ;
(*VTWATRN) = UTWATRN ;
STWATRN = A_UNITE(WTWATRN,mode22,22,VTWATRN);
break;
} 
XTWATRN_siconc = STWATRN;
 /* line 627: */
 /* line 628: */
YTWATRN = (*(&(PTWATRN_lhs->Source))) ;
switch ( YTWATRN.mode )
{ 
case 34: /* REF STRUCT(INT)  */
 /* line 629: */
ZTWATRN = A_UNITE(AUWATRN,mode34,34,(&FIAATRN_unull));
break;
default: 
BUWATRN.String = (*(&(OTWATRN_uc->String)));
 /* line 630: */
BUWATRN.Sort = (*(&(OTWATRN_uc->Sort)));
BUWATRN.Left = (*(&(PTWATRN_lhs->Source)));
 /* line 631: */
BUWATRN.Right = (*(&(QTWATRN_rhs->Source)));
CUWATRN = A_HEAP(A68_177 ) ;
(*CUWATRN) = BUWATRN ;
ZTWATRN = A_UNITE(DUWATRN,mode22,22,CUWATRN);
break;
} 
EUWATRN_soconc = ZTWATRN;
 /* line 632: */
FUWATRN.Sink = XTWATRN_siconc;
 /* line 633: */
FUWATRN.Source = EUWATRN_soconc;
 /* line 634: */
GUWATRN = A_HEAP(A68_167 ) ;
(*GUWATRN) = FUWATRN ;
YQWATRN = GUWATRN;
} 
break;
case 30: /* REF STRUCT(MODE161,MODE114)  */
HUWATRN_ua = (GQWATRN.data.mode30);
 /* line 635: */
{ 
IUWATRN_ufa = A_CALLPROC(NL(FPWATRN_trans_unit),((*(&(HUWATRN_ua->Unit))), Issource),((*(&(HUWATRN_ua->Unit))), Issource,(NL(FPWATRN_trans_unit)).nonlocals));
 /* line 636: */
 /* line 637: */
JUWATRN = (*(&(IUWATRN_ufa->Sink))) ;
switch ( JUWATRN.mode )
{ 
case 34: /* REF STRUCT(INT)  */
 /* line 638: */
KUWATRN = A_UNITE(LUWATRN,mode34,34,(&FIAATRN_unull));
break;
default: 
MUWATRN.Unit = (*(&(IUWATRN_ufa->Sink)));
 /* line 639: */
MUWATRN.Attr = (*(&(HUWATRN_ua->Attr)));
NUWATRN = A_HEAP(A68_185 ) ;
(*NUWATRN) = MUWATRN ;
KUWATRN = A_UNITE(OUWATRN,mode30,30,NUWATRN);
break;
} 
PUWATRN_siattr = KUWATRN;
 /* line 640: */
 /* line 641: */
QUWATRN = (*(&(IUWATRN_ufa->Source))) ;
switch ( QUWATRN.mode )
{ 
case 34: /* REF STRUCT(INT)  */
 /* line 642: */
RUWATRN = A_UNITE(SUWATRN,mode34,34,(&FIAATRN_unull));
break;
default: 
TUWATRN.Unit = (*(&(IUWATRN_ufa->Source)));
 /* line 643: */
TUWATRN.Attr = (*(&(HUWATRN_ua->Attr)));
UUWATRN = A_HEAP(A68_185 ) ;
(*UUWATRN) = TUWATRN ;
RUWATRN = A_UNITE(VUWATRN,mode30,30,UUWATRN);
break;
} 
WUWATRN_soattr = RUWATRN;
 /* line 644: */
XUWATRN.Sink = PUWATRN_siattr;
 /* line 645: */
XUWATRN.Source = WUWATRN_soattr;
 /* line 646: */
YUWATRN = A_HEAP(A68_167 ) ;
(*YUWATRN) = XUWATRN ;
YQWATRN = YUWATRN;
} 
break;
case 32: /* REF STRUCT(MODE161)  */
ZUWATRN_ub = (GQWATRN.data.mode32);
 /* line 647: */
YQWATRN = A_CALLPROC(NL(FPWATRN_trans_unit),((*(&(ZUWATRN_ub->Unit))), Issource),((*(&(ZUWATRN_ub->Unit))), Issource,(NL(FPWATRN_trans_unit)).nonlocals));
break;
case 15: /* REF STRUCT(MODE161,INT,INT)  */
AVWATRN_up = (GQWATRN.data.mode15);
 /* line 648: */
 /* line 649: */
{ 
A_CALLPROC(NL(FWVATRN_sysfault),(CVWATRN),(CVWATRN,(NL(FWVATRN_sysfault)).nonlocals));
 /* line 650: */
 /* line 651: */
 /* line 652: */
YQWATRN = DVWATRN;
} 
break;
default: 
if ( Issource )
{ 
EVWATRN.Sink = A_UNITE(FVWATRN,mode34,34,(&FIAATRN_unull));
EVWATRN.Source = U;
} 
else
{ 
EVWATRN.Sink = U;
 /* line 653: */
EVWATRN.Source = A_UNITE(GVWATRN,mode34,34,(&FIAATRN_unull));
} 
 /* line 654: */
HVWATRN = A_HEAP(A68_167 ) ;
(*HVWATRN) = EVWATRN ;
YQWATRN = HVWATRN;
break;
} 
} 
A_PROC_EXIT(trans_unit);
return( YQWATRN );
} 
#undef NL

A_STATIC A68_167 * KVWATRN_transform_unit(A68_161  U, void *NonLocals)
#define NL(x) (((LVWATRN_transform_unit *)NonLocals)->x)
{ 
A68_167 * MVWATRN;  /* clause result */
A_PROC_ENTRY(transform_unit);
MVWATRN = A_CALLPROC(NL(FPWATRN_trans_unit),(U, A68_TRUE),(U, A68_TRUE,(NL(FPWATRN_trans_unit)).nonlocals));
A_PROC_EXIT(transform_unit);
return( MVWATRN );
} 
#undef NL

A_STATIC A68_VOID  QVWATRN_anonymous(A68_161  Unit, A68_353 * Tp, A68_329  *ReturnedValue, void *NonLocals)
#define NL(x) (((RVWATRN_anonymous *)NonLocals)->x)
{ 
A68_161  SVWATRN;  /* united object - for case conformity */
A68_167 * TVWATRN_uf;
A68_329  UVWATRN;  /* collateral clause result */
A68_161  VVWATRN;  /* OPERATORS - mode -> union mode */
A68_329  WVWATRN;  /* clause result */
A68_372  XVWATRN;  /* CALL */
A68_329  YVWATRN;  /* avoid structure result */
 /* line 665: */
{ 
 /* line 666: */
SVWATRN = Unit ;
switch ( SVWATRN.mode )
{ 
case 12: /* REF STRUCT(MODE161,MODE161)  */
TVWATRN_uf = (SVWATRN.data.mode12);
UVWATRN.U = (*(&(A_CALLPROC(NL(JVWATRN_transform_unit),(A_UNITE(VVWATRN,mode12,12,TVWATRN_uf)),(A_UNITE(VVWATRN,mode12,12,TVWATRN_uf),(NL(JVWATRN_transform_unit)).nonlocals))->Source)));
 /* line 667: */
UVWATRN.C = A68_TRUE;
WVWATRN = UVWATRN;
break;
default: 
 /* line 668: */
 /* line 669: */
 /* line 670: */
XVWATRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(XVWATRN,(Unit, Tp, &YVWATRN),(Unit, Tp, &YVWATRN,(XVWATRN).nonlocals));
WVWATRN = YVWATRN;
break;
} 
} 
*ReturnedValue = (WVWATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  FWWATRN_uchoices(A68_221 * U, A68_353 * Tprocs, A68_328  *ReturnedValue)
{ 
A68_328  GWWATRN;  /* collateral clause result */
A68_328  HWWATRN;  /* clause result */
A68_372  IWWATRN;  /* CALL */
A68_329  JWWATRN;  /* avoid structure result */
A68_329  KWWATRN_ans;
A68_371  LWWATRN;  /* CALL */
A68_328  MWWATRN;  /* avoid structure result */
A68_328  NWWATRN_rest;
A68_BOOL  OWWATRN;  /* optbool result */
A68_328  PWWATRN;  /* collateral clause result */
A68_221  QWWATRN;  /* collateral clause result */
A68_221 * RWWATRN;  /* YIELD */
A68_328  SWWATRN;  /* collateral clause result */
A_PROC_ENTRY(uchoices);
 /* line 677: */
 /* line 678: */
if ( (U==JAAATRN_niluchoices) )
{ 
GWWATRN.U = U;
 /* line 679: */
GWWATRN.C = A68_FALSE;
HWWATRN = GWWATRN;
} 
else
{ 
IWWATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(IWWATRN,((*(&(U->Output))), Tprocs, &JWWATRN),((*(&(U->Output))), Tprocs, &JWWATRN,(IWWATRN).nonlocals));
KWWATRN_ans = JWWATRN;
 /* line 680: */
LWWATRN = (*(&(Tprocs->Uchoices))) ;
A_CALLPROC(LWWATRN,((*(&(U->Rest))), Tprocs, &MWWATRN),((*(&(U->Rest))), Tprocs, &MWWATRN,(LWWATRN).nonlocals));
NWWATRN_rest = MWWATRN;
 /* line 681: */
 /* line 682: */
OWWATRN = NWWATRN_rest.C;
if ( ! OWWATRN )
{OWWATRN = KWWATRN_ans.C;
}
if ( OWWATRN )
{ 
QWWATRN.Check = (*(&(U->Check)));
QWWATRN.Sort = (*(&(U->Sort)));
QWWATRN.Test = (*(&(U->Test)));
 /* line 683: */
QWWATRN.Output = KWWATRN_ans.U;
QWWATRN.Rest = NWWATRN_rest.U;
RWWATRN = A_HEAP(A68_221 ) ;
(*RWWATRN) = QWWATRN ;
PWWATRN.U = RWWATRN;
 /* line 684: */
PWWATRN.C = A68_TRUE;
HWWATRN = PWWATRN;
} 
else
{ 
SWWATRN.U = U;
 /* line 685: */
 /* line 686: */
SWWATRN.C = A68_FALSE;
HWWATRN = SWWATRN;
} 
} 
A_PROC_EXIT(uchoices);
*ReturnedValue = (HWWATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  VWWATRN_seqchoices(A68_220 * Sc, A68_353 * Tprocs, A68_339  *ReturnedValue)
{ 
A68_339  WWWATRN;  /* collateral clause result */
A68_339  XWWATRN;  /* clause result */
A68_383  YWWATRN;  /* CALL */
A68_340  ZWWATRN;  /* avoid structure result */
A68_340  AXWATRN_out;
A68_382  BXWATRN;  /* CALL */
A68_339  CXWATRN;  /* avoid structure result */
A68_339  DXWATRN_rest;
A68_BOOL  EXWATRN;  /* optbool result */
A68_339  FXWATRN;  /* collateral clause result */
A68_220  GXWATRN;  /* collateral clause result */
A68_220 * HXWATRN;  /* YIELD */
A68_339  IXWATRN;  /* collateral clause result */
A_PROC_ENTRY(seqchoices);
 /* line 689: */
 /* line 690: */
if ( (Sc==PAAATRN_nilseqchoices) )
{ 
WWWATRN.S = Sc;
 /* line 691: */
WWWATRN.C = A68_FALSE;
XWWATRN = WWWATRN;
} 
else
{ 
YWWATRN = (*(&(Tprocs->Seqstep))) ;
A_CALLPROC(YWWATRN,((*(&(Sc->Output))), Tprocs, &ZWWATRN),((*(&(Sc->Output))), Tprocs, &ZWWATRN,(YWWATRN).nonlocals));
AXWATRN_out = ZWWATRN;
 /* line 692: */
BXWATRN = (*(&(Tprocs->Seqchoices))) ;
A_CALLPROC(BXWATRN,((*(&(Sc->Rest))), Tprocs, &CXWATRN),((*(&(Sc->Rest))), Tprocs, &CXWATRN,(BXWATRN).nonlocals));
DXWATRN_rest = CXWATRN;
 /* line 693: */
 /* line 694: */
EXWATRN = AXWATRN_out.C;
if ( ! EXWATRN )
{EXWATRN = DXWATRN_rest.C;
}
if ( EXWATRN )
{ 
GXWATRN.Check = (*(&(Sc->Check)));
GXWATRN.Sort = (*(&(Sc->Sort)));
 /* line 695: */
GXWATRN.Test = (*(&(Sc->Test)));
GXWATRN.Output = AXWATRN_out.S;
GXWATRN.Rest = DXWATRN_rest.S;
HXWATRN = A_HEAP(A68_220 ) ;
(*HXWATRN) = GXWATRN ;
FXWATRN.S = HXWATRN;
 /* line 696: */
FXWATRN.C = A68_TRUE;
XWWATRN = FXWATRN;
} 
else
{ 
IXWATRN.S = Sc;
 /* line 697: */
 /* line 698: */
IXWATRN.C = A68_FALSE;
XWWATRN = IXWATRN;
} 
} 
A_PROC_EXIT(seqchoices);
*ReturnedValue = (XWWATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  MXWATRN_anonymous(A68_161  Unit, A68_353 * Tp, A68_329  *ReturnedValue)
{ 
A68_161  NXWATRN;  /* united object - for case conformity */
A68_329  OXWATRN;  /* collateral clause result */
A68_161  PXWATRN;  /* OPERATORS - mode -> union mode */
A68_329  QXWATRN;  /* clause result */
A68_372  RXWATRN;  /* CALL */
A68_329  SXWATRN;  /* avoid structure result */
 /* line 702: */
{ 
 /* line 703: */
NXWATRN = Unit ;
switch ( NXWATRN.mode )
{ 
case 34: /* REF STRUCT(INT)  */
OXWATRN.U = A_UNITE(PXWATRN,mode6,6,(&RIAATRN_cvoid));
 /* line 704: */
OXWATRN.C = A68_TRUE;
QXWATRN = OXWATRN;
break;
default: 
 /* line 705: */
 /* line 706: */
RXWATRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(RXWATRN,(Unit, Tp, &SXWATRN),(Unit, Tp, &SXWATRN,(RXWATRN).nonlocals));
QXWATRN = SXWATRN;
break;
} 
} 
*ReturnedValue = (QXWATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  GYWATRN_remove_ufn(A68_161  U, A68_329  *ReturnedValue, void *NonLocals)
#define NL(x) (((HYWATRN_remove_ufn *)NonLocals)->x)
{ 
A68_372  IYWATRN;  /* CALL */
A68_329  JYWATRN;  /* avoid structure result */
A68_329  KYWATRN_uc;
A68_372  LYWATRN;  /* CALL */
A68_329  MYWATRN;  /* avoid structure result */
A68_329  NYWATRN_rc;
A68_329  OYWATRN;  /* collateral clause result */
A68_BOOL  PYWATRN;  /* optbool result */
A68_329  QYWATRN;  /* clause result */
A_PROC_ENTRY(remove_ufn);
 /* line 710: */
 /* line 711: */
{ 
IYWATRN = (*(&(NL(CWWATRN_remove_ufnprocs)->Unit))) ;
A_CALLPROC(IYWATRN,(U, NL(CWWATRN_remove_ufnprocs), &JYWATRN),(U, NL(CWWATRN_remove_ufnprocs), &JYWATRN,(IYWATRN).nonlocals));
KYWATRN_uc = JYWATRN;
 /* line 712: */
LYWATRN = (*(&(NL(DYWATRN_unull_procs)->Unit))) ;
A_CALLPROC(LYWATRN,(KYWATRN_uc.U, NL(DYWATRN_unull_procs), &MYWATRN),(KYWATRN_uc.U, NL(DYWATRN_unull_procs), &MYWATRN,(LYWATRN).nonlocals));
NYWATRN_rc = MYWATRN;
 /* line 713: */
OYWATRN.U = NYWATRN_rc.U;
PYWATRN = KYWATRN_uc.C;
if ( ! PYWATRN )
{PYWATRN = NYWATRN_rc.C;
}
 /* line 714: */
OYWATRN.C = PYWATRN;
QYWATRN = OYWATRN;
} 
A_PROC_EXIT(remove_ufn);
*ReturnedValue = (QYWATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  UYWATRN_anonymous(A68_139  Type, A68_353 * Tp, A68_320  *ReturnedValue, void *NonLocals)
#define NL(x) (((VYWATRN_anonymous *)NonLocals)->x)
{ 
A68_139  WYWATRN;  /* united object - for case conformity */
A68_143 * XYWATRN_tf;
A68_320  YYWATRN;  /* collateral clause result */
A68_139  ZYWATRN;  /* OPERATORS - mode -> union mode */
A68_320  AZWATRN;  /* clause result */
A68_363  BZWATRN;  /* CALL */
A68_320  CZWATRN;  /* avoid structure result */
 /* line 718: */
{ 
 /* line 719: */
WYWATRN = Type ;
switch ( WYWATRN.mode )
{ 
case 4: /* REF STRUCT(MODE139,MODE139)  */
XYWATRN_tf = (WYWATRN.data.mode4);
YYWATRN.T = (*(&(A_CALLPROC(NL(ZOWATRN_transform_type),(A_UNITE(ZYWATRN,mode4,4,XYWATRN_tf)),(A_UNITE(ZYWATRN,mode4,4,XYWATRN_tf),(NL(ZOWATRN_transform_type)).nonlocals))->To)));
 /* line 720: */
YYWATRN.C = A68_TRUE;
AZWATRN = YYWATRN;
break;
default: 
 /* line 721: */
 /* line 722: */
 /* line 723: */
BZWATRN = (*(&(AWLATRN_nulltprocs->Type))) ;
A_CALLPROC(BZWATRN,(Type, Tp, &CZWATRN),(Type, Tp, &CZWATRN,(BZWATRN).nonlocals));
AZWATRN = CZWATRN;
break;
} 
} 
*ReturnedValue = (AZWATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  JZWATRN_anonymous(A68_139  Type, A68_353 * Tp, A68_320  *ReturnedValue)
{ 
A68_139  KZWATRN;  /* united object - for case conformity */
A68_320  LZWATRN;  /* collateral clause result */
A68_139  MZWATRN;  /* OPERATORS - mode -> union mode */
A68_320  NZWATRN;  /* clause result */
A68_363  OZWATRN;  /* CALL */
A68_320  PZWATRN;  /* avoid structure result */
 /* line 727: */
{ 
 /* line 728: */
KZWATRN = Type ;
switch ( KZWATRN.mode )
{ 
case 9: /* REF STRUCT(INT)  */
LZWATRN.T = A_UNITE(MZWATRN,mode7,7,(&PIAATRN_tvoid));
 /* line 729: */
LZWATRN.C = A68_TRUE;
NZWATRN = LZWATRN;
break;
default: 
 /* line 730: */
 /* line 731: */
 /* line 732: */
OZWATRN = (*(&(AWLATRN_nulltprocs->Type))) ;
A_CALLPROC(OZWATRN,(Type, Tp, &PZWATRN),(Type, Tp, &PZWATRN,(OZWATRN).nonlocals));
NZWATRN = PZWATRN;
break;
} 
} 
*ReturnedValue = (NZWATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  XZWATRN_remove_tfn(A68_139  T, A68_320  *ReturnedValue, void *NonLocals)
#define NL(x) (((YZWATRN_remove_tfn *)NonLocals)->x)
{ 
A68_363  ZZWATRN;  /* CALL */
A68_320  AAXATRN;  /* avoid structure result */
A68_320  BAXATRN_tc;
A68_363  CAXATRN;  /* CALL */
A68_320  DAXATRN;  /* avoid structure result */
A68_320  EAXATRN_rc;
A68_320  FAXATRN;  /* collateral clause result */
A68_BOOL  GAXATRN;  /* optbool result */
A68_320  HAXATRN;  /* clause result */
A_PROC_ENTRY(remove_tfn);
 /* line 735: */
 /* line 736: */
{ 
ZZWATRN = (*(&(NL(GZWATRN_remove_tfnprocs)->Type))) ;
A_CALLPROC(ZZWATRN,(T, NL(GZWATRN_remove_tfnprocs), &AAXATRN),(T, NL(GZWATRN_remove_tfnprocs), &AAXATRN,(ZZWATRN).nonlocals));
BAXATRN_tc = AAXATRN;
 /* line 737: */
CAXATRN = (*(&(NL(UZWATRN_tnull_procs)->Type))) ;
A_CALLPROC(CAXATRN,(BAXATRN_tc.T, NL(UZWATRN_tnull_procs), &DAXATRN),(BAXATRN_tc.T, NL(UZWATRN_tnull_procs), &DAXATRN,(CAXATRN).nonlocals));
EAXATRN_rc = DAXATRN;
 /* line 738: */
FAXATRN.T = EAXATRN_rc.T;
GAXATRN = BAXATRN_tc.C;
if ( ! GAXATRN )
{GAXATRN = EAXATRN_rc.C;
}
 /* line 739: */
FAXATRN.C = GAXATRN;
HAXATRN = FAXATRN;
} 
A_PROC_EXIT(remove_tfn);
*ReturnedValue = (HAXATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  MAXATRN_make_unitlink(A68_139  Ty, A68_161  Source, A68_161  Sink, A68_161  *ReturnedValue, void *NonLocals)
#define NL(x) (((NAXATRN_make_unitlink *)NonLocals)->x)
{ 
A68_451  RAXATRN_is_same_sort;   /* proc value of non-global proc */
A68_453  VBXATRN_make_uindex;   /* proc value of non-global proc */
A68_454  HCXATRN_type_unit;   /* proc value of non-global proc */
A68_161  RFXATRN;  /* clause result */
A68_161  SFXATRN;  /* avoid structure result */
A_PROC_ENTRY(make_unitlink);
 /* line 746: */
 /* line 747: */
{ 
A_CLOSURE( RAXATRN_is_same_sort, SAXATRN_is_same_sort, TAXATRN_is_same_sort );
(( TAXATRN_is_same_sort * ) ( RAXATRN_is_same_sort.nonlocals )) -> DXVATRN_environ = NL(DXVATRN_environ);
(( TAXATRN_is_same_sort * ) ( RAXATRN_is_same_sort.nonlocals )) -> RAXATRN_is_same_sort = RAXATRN_is_same_sort;
 /* line 765: */
 /* line 771: */
A_CLOSURE( VBXATRN_make_uindex, WBXATRN_make_uindex, XBXATRN_make_uindex );
(( XBXATRN_make_uindex * ) ( VBXATRN_make_uindex.nonlocals )) -> Source = Source;
(( XBXATRN_make_uindex * ) ( VBXATRN_make_uindex.nonlocals )) -> Sink = Sink;
(( XBXATRN_make_uindex * ) ( VBXATRN_make_uindex.nonlocals )) -> VBXATRN_make_uindex = VBXATRN_make_uindex;
 /* line 777: */
A_CLOSURE( HCXATRN_type_unit, ICXATRN_type_unit, JCXATRN_type_unit );
(( JCXATRN_type_unit * ) ( HCXATRN_type_unit.nonlocals )) -> DXVATRN_environ = NL(DXVATRN_environ);
(( JCXATRN_type_unit * ) ( HCXATRN_type_unit.nonlocals )) -> GXVATRN_has_type_fntype = NL(GXVATRN_has_type_fntype);
(( JCXATRN_type_unit * ) ( HCXATRN_type_unit.nonlocals )) -> HCXATRN_type_unit = HCXATRN_type_unit;
(( JCXATRN_type_unit * ) ( HCXATRN_type_unit.nonlocals )) -> VBXATRN_make_uindex = VBXATRN_make_uindex;
(( JCXATRN_type_unit * ) ( HCXATRN_type_unit.nonlocals )) -> RAXATRN_is_same_sort = RAXATRN_is_same_sort;
 /* line 865: */
 /* line 866: */
A_CALLPROC(HCXATRN_type_unit,(Ty, A68_TRUE, BBAATRN_nilformulas, BBAATRN_nilformulas, &SFXATRN),(Ty, A68_TRUE, BBAATRN_nilformulas, BBAATRN_nilformulas, &SFXATRN,(HCXATRN_type_unit).nonlocals));
RFXATRN = SFXATRN;
} 
A_PROC_EXIT(make_unitlink);
*ReturnedValue = (RFXATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  XFXATRN_anonymous(A68_161  Unit, A68_353 * Tprocs, A68_329  *ReturnedValue, void *NonLocals)
#define NL(x) (((YFXATRN_anonymous *)NonLocals)->x)
{ 
A68_161  ZFXATRN;  /* united object - for case conformity */
A68_166 * AGXATRN_un;
A68_BOOL  BGXATRN;  /* optbool result */
A68_329  CGXATRN;  /* collateral clause result */
A68_161  DGXATRN;  /* OPERATORS - mode -> union mode */
A68_329  EGXATRN;  /* clause result */
A68_329  FGXATRN;  /* collateral clause result */
A68_161  GGXATRN;  /* OPERATORS - mode -> union mode */
A68_167 * HGXATRN_uf;
A68_329  IGXATRN;  /* collateral clause result */
A68_329  JGXATRN;  /* collateral clause result */
A68_329  KGXATRN;  /* collateral clause result */
A68_167  LGXATRN;  /* collateral clause result */
A68_167 * MGXATRN;  /* YIELD */
A68_161  NGXATRN;  /* OPERATORS - mode -> union mode */
A68_329  OGXATRN;  /* collateral clause result */
A68_372  PGXATRN;  /* CALL */
A68_329  QGXATRN;  /* avoid structure result */
 /* line 874: */
 /* line 875: */
ZFXATRN = Unit ;
switch ( ZFXATRN.mode )
{ 
case 11: /* REF STRUCT(INT,INT)  */
AGXATRN_un = (ZFXATRN.data.mode11);
 /* line 876: */
BGXATRN = ((*NL(TFXATRN_sort))==KKAATRN_usource);
if ( ! BGXATRN )
{BGXATRN = ((*NL(TFXATRN_sort))==MKAATRN_uiosource);
}
 /* line 877: */
if ( BGXATRN )
{ 
CGXATRN.U = A_UNITE(DGXATRN,mode11,11,AGXATRN_un);
 /* line 878: */
CGXATRN.C = A68_FALSE;
EGXATRN = CGXATRN;
} 
else
{ 
FGXATRN.U = A_UNITE(GGXATRN,mode34,34,(&FIAATRN_unull));
 /* line 879: */
 /* line 880: */
FGXATRN.C = A68_TRUE;
EGXATRN = FGXATRN;
} 
break;
case 12: /* REF STRUCT(MODE161,MODE161)  */
HGXATRN_uf = (ZFXATRN.data.mode12);
 /* line 881: */
if ( ((*NL(TFXATRN_sort))==KKAATRN_usource) )
{ 
IGXATRN.U = (*(&(HGXATRN_uf->Source)));
 /* line 882: */
IGXATRN.C = A68_TRUE;
EGXATRN = IGXATRN;
} 
else
{ 
if ( ((*NL(TFXATRN_sort))==LKAATRN_usink) )
{ 
JGXATRN.U = (*(&(HGXATRN_uf->Sink)));
 /* line 883: */
JGXATRN.C = A68_TRUE;
EGXATRN = JGXATRN;
} 
else
{ 
 /* line 884: */
if ( ((*NL(TFXATRN_sort))==NKAATRN_uiosink) )
{ 
LGXATRN.Sink = (*(&(HGXATRN_uf->Source)));
LGXATRN.Source = (*(&(HGXATRN_uf->Sink)));
MGXATRN = A_HEAP(A68_167 ) ;
(*MGXATRN) = LGXATRN ;
KGXATRN.U = A_UNITE(NGXATRN,mode12,12,MGXATRN);
 /* line 885: */
KGXATRN.C = A68_TRUE;
EGXATRN = KGXATRN;
} 
else
{ 
OGXATRN.U = Unit;
 /* line 886: */
 /* line 887: */
OGXATRN.C = A68_FALSE;
EGXATRN = OGXATRN;
} 
} 
} 
break;
default: 
 /* line 888: */
 /* line 889: */
PGXATRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(PGXATRN,(Unit, Tprocs, &QGXATRN),(Unit, Tprocs, &QGXATRN,(PGXATRN).nonlocals));
EGXATRN = QGXATRN;
break;
} 
*ReturnedValue = (EGXATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  YGXATRN_coerce_ufn(A68_161  U, A68_INT  Seed_sort, A68_329  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZGXATRN_coerce_ufn *)NonLocals)->x)
{ 
A68_329  AHXATRN;  /* clause result */
A68_372  BHXATRN;  /* CALL */
A68_329  CHXATRN;  /* avoid structure result */
A_PROC_ENTRY(coerce_ufn);
 /* line 892: */
 /* line 893: */
{ 
(*NL(TFXATRN_sort)) = Seed_sort;
 /* line 894: */
 /* line 895: */
BHXATRN = (*(&(NL(UGXATRN_coerce_ufn_procs)->Unit))) ;
A_CALLPROC(BHXATRN,(U, NL(UGXATRN_coerce_ufn_procs), &CHXATRN),(U, NL(UGXATRN_coerce_ufn_procs), &CHXATRN,(BHXATRN).nonlocals));
AHXATRN = CHXATRN;
} 
A_PROC_EXIT(coerce_ufn);
*ReturnedValue = (AHXATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  FHXATRN_unitlink_source(A68_161  U, A68_161  *ReturnedValue, void *NonLocals)
#define NL(x) (((GHXATRN_unitlink_source *)NonLocals)->x)
{ 
A68_161  HHXATRN;  /* clause result */
A68_329  IHXATRN;  /* avoid structure result */
A_PROC_ENTRY(unitlink_source);
A_CALLPROC(NL(XGXATRN_coerce_ufn),(U, KKAATRN_usource, &IHXATRN),(U, KKAATRN_usource, &IHXATRN,(NL(XGXATRN_coerce_ufn)).nonlocals));
HHXATRN = IHXATRN.U;
A_PROC_EXIT(unitlink_source);
*ReturnedValue = (HHXATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  LHXATRN_unitlink_sink(A68_161  U, A68_161  *ReturnedValue, void *NonLocals)
#define NL(x) (((MHXATRN_unitlink_sink *)NonLocals)->x)
{ 
A68_161  NHXATRN;  /* clause result */
A68_329  OHXATRN;  /* avoid structure result */
A_PROC_ENTRY(unitlink_sink);
A_CALLPROC(NL(XGXATRN_coerce_ufn),(U, LKAATRN_usink, &OHXATRN),(U, LKAATRN_usink, &OHXATRN,(NL(XGXATRN_coerce_ufn)).nonlocals));
NHXATRN = OHXATRN.U;
A_PROC_EXIT(unitlink_sink);
*ReturnedValue = (NHXATRN);
return;
} 
#undef NL
 /* line 906: */

A_STATIC A68_VOID  UHXATRN_fndec_fntype(A68_237 * Fdec, A68_353 * Tprocs, A68_INT  Fnno, A68_240 * Newenv, A68_350  *ReturnedValue, void *NonLocals)
#define NL(x) (((VHXATRN_fndec_fntype *)NonLocals)->x)
{ 
A68_INT  WHXATRN_upb;
A68_458  YHXATRN_generator;   /* proc value of non-global proc */
A68_457  EIXATRN;  /* avoid structure result */
A68_457  DIXATRN_unitlink;
A68_BOOL  FIXATRN_nametypechange;
A68_INT  GIXATRN_nametypeno;
A68_237 * HIXATRN_newfdec;
A68_BOOL  IIXATRN_sequencechanged;
A68_209 * JIXATRN_newsequence;
A68_209 ** KIXATRN_sequenceptr;
A68_400  LIXATRN_start_sequence;   /* proc value of non-global proc */
A68_459  OIXATRN_finish_sequence;   /* proc value of non-global proc */
A68_460  UIXATRN_add_seqstep;   /* proc value of non-global proc */
A68_461  AJXATRN_add_sequence;   /* proc value of non-global proc */
A68_BOOL  DJXATRN_serieschanged;
A68_190 * EJXATRN_newseries;
A68_190 ** FJXATRN_seriesptr;
A68_462 * HJXATRN_serieslist;
A68_400  IJXATRN_start_series;   /* proc value of non-global proc */
A68_463  NJXATRN_finish_series;   /* proc value of non-global proc */
A68_464  UJXATRN_add_step;   /* proc value of non-global proc */
A68_465  AKXATRN_add_series;   /* proc value of non-global proc */
A68_466  GKXATRN_add_join;   /* proc value of non-global proc */
A68_467  FLXATRN_add_nametype;   /* proc value of non-global proc */
A68_468  LMXATRN_remove_let_ufn;   /* proc value of non-global proc */
A68_469  BNXATRN_make_let;   /* proc value of non-global proc */
A68_470  RNXATRN_names_nameno;   /* proc value of non-global proc */
A68_471  YOXATRN_let_unitlink;   /* proc value of non-global proc */
A68_472  RPXATRN_let_fntype;   /* proc value of non-global proc */
A68_473  KQXATRN_join_fntype;   /* proc value of non-global proc */
A68_474  XQXATRN_repljoin_fntype;   /* proc value of non-global proc */
A68_477  VRXATRN_make_fntype;   /* proc value of non-global proc */
A68_479  FVXATRN_series_fntype;   /* proc value of non-global proc */
A68_372  YVXATRN_seq_unit;   /* proc value of non-global proc */
A68_383  NWXATRN_seqstep_fntype;   /* proc value of non-global proc */
A68_480  SZXATRN_uname_fntype;   /* proc value of non-global proc */
A68_372  MAYATRN_uinst_fntype;   /* proc value of non-global proc */
A68_372  QDYATRN_unit_fntype;   /* proc value of non-global proc */
A68_482  UFYATRN_terminals_fntype;   /* proc value of non-global proc */
A68_483  HGYATRN_output_fntype;   /* proc value of non-global proc */
A68_484  BHYATRN_add_terminal_names;   /* proc value of non-global proc */
A68_485  JIYATRN_fnbody_fntype;   /* proc value of non-global proc */
A68_414  DMYATRN;  /* collateral clause result */
A68_398  EMYATRN;  /* OPERATORS - mode -> union mode */
A68_383  FMYATRN;  /* YIELD */
A68_398  GMYATRN;  /* OPERATORS - mode -> union mode */
A68_384  HMYATRN;  /* YIELD */
A68_384  IMYATRN;  /* procedure value */
A68_398  JMYATRN;  /* OPERATORS - mode -> union mode */
A68_372  KMYATRN;  /* YIELD */
A68_380  NMYATRN_anonymous;   /* proc value of non-global proc */
A68_398  SMYATRN;  /* OPERATORS - mode -> union mode */
A68_380  TMYATRN;  /* YIELD */
A68_397  UMYATRN;  /* OPERATORS - istruct -> vector */
A68_353 * VMYATRN_newtprocs;
A68_143 * WMYATRN_iotype;
A68_BOOL  XMYATRN;  /* optbool result */
A68_BOOL  YMYATRN_specchanged;
A68_BOOL * ZMYATRN;  /* YIELD */
A68_166  ANYATRN;  /* collateral clause result */
A68_166  BNYATRN;  /* collateral clause result */
A68_161  CNYATRN;  /* clause result */
A68_166 * DNYATRN;  /* YIELD */
A68_161  ENYATRN;  /* OPERATORS - mode -> union mode */
A68_166 * FNYATRN;  /* YIELD */
A68_161  GNYATRN;  /* OPERATORS - mode -> union mode */
A68_139  HNYATRN;  /* OPERATORS - mode -> union mode */
A68_161  INYATRN;  /* avoid structure result */
A68_167  JNYATRN;  /* collateral clause result */
A68_161  KNYATRN;  /* OPERATORS - mode -> union mode */
A68_161  LNYATRN;  /* OPERATORS - mode -> union mode */
A68_167 * MNYATRN;  /* YIELD */
A68_161  NNYATRN;  /* OPERATORS - mode -> union mode */
A68_161  ONYATRN_link;
A68_143 * PNYATRN;  /* clause result */
A68_139  QNYATRN;  /* OPERATORS - mode -> union mode */
A68_143  RNYATRN;  /* collateral clause result */
A68_139  SNYATRN;  /* OPERATORS - mode -> union mode */
A68_139  TNYATRN;  /* OPERATORS - mode -> union mode */
A68_143 * UNYATRN;  /* YIELD */
A68_143 * VNYATRN_spectype;
A68_320  WNYATRN;  /* collateral clause result */
A68_202 ** XNYATRN;  /* YIELD */
A68_320  YNYATRN;  /* collateral clause result */
A68_202 ** ZNYATRN;  /* YIELD */
A68_347  AOYATRN;  /* avoid structure result */
A68_347  BOYATRN_fc;
A68_BOOL  COYATRN;  /* optbool result */
A68_239  DOYATRN;  /* OPERATORS - trim index */
A68_239  EOYATRN;  /* OPERATORS - trim index */
A68_239 * FOYATRN;  /* YIELD */
A68_233 * GOYATRN;  /* YIELD */
A68_350  HOYATRN;  /* collateral clause result */
A68_350  IOYATRN;  /* clause result */
A68_350  JOYATRN;  /* collateral clause result */
A_PROC_ENTRY(fndec_fntype);
 /* line 907: */
 /* line 908: */
{ 
WHXATRN_upb = (*(&(Fdec->Nametypes))).upb;
 /* line 909: */
A_CLOSURE( YHXATRN_generator, ZHXATRN_generator, AIXATRN_generator );
(( AIXATRN_generator * ) ( YHXATRN_generator.nonlocals )) -> WHXATRN_upb = WHXATRN_upb;
A_CALLPROC(YHXATRN_generator,(A68_TRUE, &EIXATRN),(A68_TRUE, &EIXATRN,(YHXATRN_generator).nonlocals));
DIXATRN_unitlink = EIXATRN;
 /* line 911: */
FIXATRN_nametypechange = A68_FALSE;
 /* line 912: */
GIXATRN_nametypeno = 0;
 /* line 914: */
HIXATRN_newfdec = (A_HEAP(A68_237 ));
(*HIXATRN_newfdec) = (*Fdec);
 /* line 916: */
IIXATRN_sequencechanged = A68_FALSE;
 /* line 917: */
JIXATRN_newsequence = QAAATRN_nilsequence;
 /* line 918: */
 /* line 920: */
 /* line 921: */
A_CLOSURE( LIXATRN_start_sequence, MIXATRN_start_sequence, NIXATRN_start_sequence );
(( NIXATRN_start_sequence * ) ( LIXATRN_start_sequence.nonlocals )) -> IIXATRN_sequencechanged = (&IIXATRN_sequencechanged);
(( NIXATRN_start_sequence * ) ( LIXATRN_start_sequence.nonlocals )) -> JIXATRN_newsequence = (&JIXATRN_newsequence);
(( NIXATRN_start_sequence * ) ( LIXATRN_start_sequence.nonlocals )) -> KIXATRN_sequenceptr = (&KIXATRN_sequenceptr);
 /* line 926: */
A_CLOSURE( OIXATRN_finish_sequence, PIXATRN_finish_sequence, QIXATRN_finish_sequence );
(( QIXATRN_finish_sequence * ) ( OIXATRN_finish_sequence.nonlocals )) -> JIXATRN_newsequence = (&JIXATRN_newsequence);
(( QIXATRN_finish_sequence * ) ( OIXATRN_finish_sequence.nonlocals )) -> IIXATRN_sequencechanged = (&IIXATRN_sequencechanged);
 /* line 928: */
A_CLOSURE( UIXATRN_add_seqstep, VIXATRN_add_seqstep, WIXATRN_add_seqstep );
(( WIXATRN_add_seqstep * ) ( UIXATRN_add_seqstep.nonlocals )) -> IIXATRN_sequencechanged = (&IIXATRN_sequencechanged);
(( WIXATRN_add_seqstep * ) ( UIXATRN_add_seqstep.nonlocals )) -> KIXATRN_sequenceptr = (&KIXATRN_sequenceptr);
 /* line 935: */
A_CLOSURE( AJXATRN_add_sequence, BJXATRN_add_sequence, CJXATRN_add_sequence );
(( CJXATRN_add_sequence * ) ( AJXATRN_add_sequence.nonlocals )) -> IIXATRN_sequencechanged = (&IIXATRN_sequencechanged);
(( CJXATRN_add_sequence * ) ( AJXATRN_add_sequence.nonlocals )) -> KIXATRN_sequenceptr = (&KIXATRN_sequenceptr);
 /* line 942: */
DJXATRN_serieschanged = A68_FALSE;
 /* line 943: */
EJXATRN_newseries = SAAATRN_nilseries;
 /* line 944: */
 /* line 946: */
 /* line 947: */
 /* line 948: */
 /* line 949: */
HJXATRN_serieslist = GJXATRN_nilserieslist;
 /* line 951: */
 /* line 952: */
A_CLOSURE( IJXATRN_start_series, JJXATRN_start_series, KJXATRN_start_series );
(( KJXATRN_start_series * ) ( IJXATRN_start_series.nonlocals )) -> HJXATRN_serieslist = (&HJXATRN_serieslist);
(( KJXATRN_start_series * ) ( IJXATRN_start_series.nonlocals )) -> EJXATRN_newseries = (&EJXATRN_newseries);
(( KJXATRN_start_series * ) ( IJXATRN_start_series.nonlocals )) -> FJXATRN_seriesptr = (&FJXATRN_seriesptr);
(( KJXATRN_start_series * ) ( IJXATRN_start_series.nonlocals )) -> DJXATRN_serieschanged = (&DJXATRN_serieschanged);
 /* line 959: */
 /* line 960: */
A_CLOSURE( NJXATRN_finish_series, OJXATRN_finish_series, PJXATRN_finish_series );
(( PJXATRN_finish_series * ) ( NJXATRN_finish_series.nonlocals )) -> EJXATRN_newseries = (&EJXATRN_newseries);
(( PJXATRN_finish_series * ) ( NJXATRN_finish_series.nonlocals )) -> DJXATRN_serieschanged = (&DJXATRN_serieschanged);
(( PJXATRN_finish_series * ) ( NJXATRN_finish_series.nonlocals )) -> HJXATRN_serieslist = (&HJXATRN_serieslist);
(( PJXATRN_finish_series * ) ( NJXATRN_finish_series.nonlocals )) -> FJXATRN_seriesptr = (&FJXATRN_seriesptr);
 /* line 968: */
A_CLOSURE( UJXATRN_add_step, VJXATRN_add_step, WJXATRN_add_step );
(( WJXATRN_add_step * ) ( UJXATRN_add_step.nonlocals )) -> DJXATRN_serieschanged = (&DJXATRN_serieschanged);
(( WJXATRN_add_step * ) ( UJXATRN_add_step.nonlocals )) -> FJXATRN_seriesptr = (&FJXATRN_seriesptr);
 /* line 974: */
A_CLOSURE( AKXATRN_add_series, BKXATRN_add_series, CKXATRN_add_series );
(( CKXATRN_add_series * ) ( AKXATRN_add_series.nonlocals )) -> DJXATRN_serieschanged = (&DJXATRN_serieschanged);
(( CKXATRN_add_series * ) ( AKXATRN_add_series.nonlocals )) -> FJXATRN_seriesptr = (&FJXATRN_seriesptr);
 /* line 980: */
A_CLOSURE( GKXATRN_add_join, HKXATRN_add_join, IKXATRN_add_join );
(( IKXATRN_add_join * ) ( GKXATRN_add_join.nonlocals )) -> SFWATRN_remove_null_void = NL(SFWATRN_remove_null_void);
(( IKXATRN_add_join * ) ( GKXATRN_add_join.nonlocals )) -> UJXATRN_add_step = UJXATRN_add_step;
 /* line 988: */
A_CLOSURE( FLXATRN_add_nametype, GLXATRN_add_nametype, HLXATRN_add_nametype );
(( HLXATRN_add_nametype * ) ( FLXATRN_add_nametype.nonlocals )) -> GIXATRN_nametypeno = (&GIXATRN_nametypeno);
(( HLXATRN_add_nametype * ) ( FLXATRN_add_nametype.nonlocals )) -> HIXATRN_newfdec = HIXATRN_newfdec;
(( HLXATRN_add_nametype * ) ( FLXATRN_add_nametype.nonlocals )) -> FIXATRN_nametypechange = (&FIXATRN_nametypechange);
 /* line 1014: */
A_CLOSURE( LMXATRN_remove_let_ufn, MMXATRN_remove_let_ufn, NMXATRN_remove_let_ufn );
(( NMXATRN_remove_let_ufn * ) ( LMXATRN_remove_let_ufn.nonlocals )) -> Options = NL(Options);
(( NMXATRN_remove_let_ufn * ) ( LMXATRN_remove_let_ufn.nonlocals )) -> FYWATRN_remove_ufn = NL(FYWATRN_remove_ufn);
(( NMXATRN_remove_let_ufn * ) ( LMXATRN_remove_let_ufn.nonlocals )) -> HIXATRN_newfdec = HIXATRN_newfdec;
(( NMXATRN_remove_let_ufn * ) ( LMXATRN_remove_let_ufn.nonlocals )) -> WZWATRN_remove_tfn = NL(WZWATRN_remove_tfn);
 /* line 1035: */
A_CLOSURE( BNXATRN_make_let, CNXATRN_make_let, DNXATRN_make_let );
(( DNXATRN_make_let * ) ( BNXATRN_make_let.nonlocals )) -> FLXATRN_add_nametype = FLXATRN_add_nametype;
(( DNXATRN_make_let * ) ( BNXATRN_make_let.nonlocals )) -> LMXATRN_remove_let_ufn = LMXATRN_remove_let_ufn;
 /* line 1043: */
A_CLOSURE( RNXATRN_names_nameno, SNXATRN_names_nameno, TNXATRN_names_nameno );
(( TNXATRN_names_nameno * ) ( RNXATRN_names_nameno.nonlocals )) -> Fdec = Fdec;
(( TNXATRN_names_nameno * ) ( RNXATRN_names_nameno.nonlocals )) -> FLXATRN_add_nametype = FLXATRN_add_nametype;
(( TNXATRN_names_nameno * ) ( RNXATRN_names_nameno.nonlocals )) -> DIXATRN_unitlink = DIXATRN_unitlink;
(( TNXATRN_names_nameno * ) ( RNXATRN_names_nameno.nonlocals )) -> RNXATRN_names_nameno = RNXATRN_names_nameno;
 /* line 1065: */
A_CLOSURE( YOXATRN_let_unitlink, ZOXATRN_let_unitlink, APXATRN_let_unitlink );
(( APXATRN_let_unitlink * ) ( YOXATRN_let_unitlink.nonlocals )) -> GXVATRN_has_type_fntype = NL(GXVATRN_has_type_fntype);
(( APXATRN_let_unitlink * ) ( YOXATRN_let_unitlink.nonlocals )) -> Fdec = Fdec;
(( APXATRN_let_unitlink * ) ( YOXATRN_let_unitlink.nonlocals )) -> DIXATRN_unitlink = DIXATRN_unitlink;
 /* line 1088: */
A_CLOSURE( RPXATRN_let_fntype, SPXATRN_let_fntype, TPXATRN_let_fntype );
(( TPXATRN_let_fntype * ) ( RPXATRN_let_fntype.nonlocals )) -> RNXATRN_names_nameno = RNXATRN_names_nameno;
(( TPXATRN_let_fntype * ) ( RPXATRN_let_fntype.nonlocals )) -> YOXATRN_let_unitlink = YOXATRN_let_unitlink;
(( TPXATRN_let_fntype * ) ( RPXATRN_let_fntype.nonlocals )) -> LMXATRN_remove_let_ufn = LMXATRN_remove_let_ufn;
(( TPXATRN_let_fntype * ) ( RPXATRN_let_fntype.nonlocals )) -> UJXATRN_add_step = UJXATRN_add_step;
 /* line 1100: */
A_CLOSURE( KQXATRN_join_fntype, LQXATRN_join_fntype, MQXATRN_join_fntype );
(( MQXATRN_join_fntype * ) ( KQXATRN_join_fntype.nonlocals )) -> JVWATRN_transform_unit = NL(JVWATRN_transform_unit);
(( MQXATRN_join_fntype * ) ( KQXATRN_join_fntype.nonlocals )) -> GKXATRN_add_join = GKXATRN_add_join;
 /* line 1114: */
A_CLOSURE( XQXATRN_repljoin_fntype, YQXATRN_repljoin_fntype, ZQXATRN_repljoin_fntype );
(( ZQXATRN_repljoin_fntype * ) ( XQXATRN_repljoin_fntype.nonlocals )) -> IJXATRN_start_series = IJXATRN_start_series;
(( ZQXATRN_repljoin_fntype * ) ( XQXATRN_repljoin_fntype.nonlocals )) -> JHWATRN_extra_step = NL(JHWATRN_extra_step);
(( ZQXATRN_repljoin_fntype * ) ( XQXATRN_repljoin_fntype.nonlocals )) -> FWVATRN_sysfault = NL(FWVATRN_sysfault);
(( ZQXATRN_repljoin_fntype * ) ( XQXATRN_repljoin_fntype.nonlocals )) -> KQXATRN_join_fntype = KQXATRN_join_fntype;
(( ZQXATRN_repljoin_fntype * ) ( XQXATRN_repljoin_fntype.nonlocals )) -> NJXATRN_finish_series = NJXATRN_finish_series;
(( ZQXATRN_repljoin_fntype * ) ( XQXATRN_repljoin_fntype.nonlocals )) -> UJXATRN_add_step = UJXATRN_add_step;
 /* line 1146: */
A_CLOSURE( VRXATRN_make_fntype, WRXATRN_make_fntype, XRXATRN_make_fntype );
(( XRXATRN_make_fntype * ) ( VRXATRN_make_fntype.nonlocals )) -> Fdec = Fdec;
(( XRXATRN_make_fntype * ) ( VRXATRN_make_fntype.nonlocals )) -> FLXATRN_add_nametype = FLXATRN_add_nametype;
(( XRXATRN_make_fntype * ) ( VRXATRN_make_fntype.nonlocals )) -> EXVATRN_environ_specs = NL(EXVATRN_environ_specs);
(( XRXATRN_make_fntype * ) ( VRXATRN_make_fntype.nonlocals )) -> ZOWATRN_transform_type = NL(ZOWATRN_transform_type);
(( XRXATRN_make_fntype * ) ( VRXATRN_make_fntype.nonlocals )) -> UJXATRN_add_step = UJXATRN_add_step;
(( XRXATRN_make_fntype * ) ( VRXATRN_make_fntype.nonlocals )) -> LAXATRN_make_unitlink = NL(LAXATRN_make_unitlink);
(( XRXATRN_make_fntype * ) ( VRXATRN_make_fntype.nonlocals )) -> DIXATRN_unitlink = DIXATRN_unitlink;
(( XRXATRN_make_fntype * ) ( VRXATRN_make_fntype.nonlocals )) -> BNXATRN_make_let = BNXATRN_make_let;
 /* line 1213: */
A_CLOSURE( FVXATRN_series_fntype, GVXATRN_series_fntype, HVXATRN_series_fntype );
(( HVXATRN_series_fntype * ) ( FVXATRN_series_fntype.nonlocals )) -> RPXATRN_let_fntype = RPXATRN_let_fntype;
(( HVXATRN_series_fntype * ) ( FVXATRN_series_fntype.nonlocals )) -> KQXATRN_join_fntype = KQXATRN_join_fntype;
(( HVXATRN_series_fntype * ) ( FVXATRN_series_fntype.nonlocals )) -> XQXATRN_repljoin_fntype = XQXATRN_repljoin_fntype;
(( HVXATRN_series_fntype * ) ( FVXATRN_series_fntype.nonlocals )) -> VRXATRN_make_fntype = VRXATRN_make_fntype;
(( HVXATRN_series_fntype * ) ( FVXATRN_series_fntype.nonlocals )) -> UJXATRN_add_step = UJXATRN_add_step;
 /* line 1234: */
A_CLOSURE( YVXATRN_seq_unit, ZVXATRN_seq_unit, AWXATRN_seq_unit );
(( AWXATRN_seq_unit * ) ( YVXATRN_seq_unit.nonlocals )) -> IJXATRN_start_series = IJXATRN_start_series;
(( AWXATRN_seq_unit * ) ( YVXATRN_seq_unit.nonlocals )) -> NJXATRN_finish_series = NJXATRN_finish_series;
 /* line 1245: */
A_CLOSURE( NWXATRN_seqstep_fntype, OWXATRN_seqstep_fntype, PWXATRN_seqstep_fntype );
(( PWXATRN_seqstep_fntype * ) ( NWXATRN_seqstep_fntype.nonlocals )) -> YVXATRN_seq_unit = YVXATRN_seq_unit;
(( PWXATRN_seqstep_fntype * ) ( NWXATRN_seqstep_fntype.nonlocals )) -> YOXATRN_let_unitlink = YOXATRN_let_unitlink;
(( PWXATRN_seqstep_fntype * ) ( NWXATRN_seqstep_fntype.nonlocals )) -> LMXATRN_remove_let_ufn = LMXATRN_remove_let_ufn;
 /* line 1291: */
 /* line 1317: */
A_CLOSURE( SZXATRN_uname_fntype, TZXATRN_uname_fntype, UZXATRN_uname_fntype );
(( UZXATRN_uname_fntype * ) ( SZXATRN_uname_fntype.nonlocals )) -> DIXATRN_unitlink = DIXATRN_unitlink;
(( UZXATRN_uname_fntype * ) ( SZXATRN_uname_fntype.nonlocals )) -> XGXATRN_coerce_ufn = NL(XGXATRN_coerce_ufn);
 /* line 1338: */
A_CLOSURE( MAYATRN_uinst_fntype, NAYATRN_uinst_fntype, OAYATRN_uinst_fntype );
(( OAYATRN_uinst_fntype * ) ( MAYATRN_uinst_fntype.nonlocals )) -> FWVATRN_sysfault = NL(FWVATRN_sysfault);
(( OAYATRN_uinst_fntype * ) ( MAYATRN_uinst_fntype.nonlocals )) -> EXVATRN_environ_specs = NL(EXVATRN_environ_specs);
(( OAYATRN_uinst_fntype * ) ( MAYATRN_uinst_fntype.nonlocals )) -> DXVATRN_environ = NL(DXVATRN_environ);
(( OAYATRN_uinst_fntype * ) ( MAYATRN_uinst_fntype.nonlocals )) -> Newenv = Newenv;
(( OAYATRN_uinst_fntype * ) ( MAYATRN_uinst_fntype.nonlocals )) -> QAWATRN_contains_diagnostics = NL(QAWATRN_contains_diagnostics);
(( OAYATRN_uinst_fntype * ) ( MAYATRN_uinst_fntype.nonlocals )) -> Fdec = Fdec;
(( OAYATRN_uinst_fntype * ) ( MAYATRN_uinst_fntype.nonlocals )) -> BNXATRN_make_let = BNXATRN_make_let;
(( OAYATRN_uinst_fntype * ) ( MAYATRN_uinst_fntype.nonlocals )) -> DWVATRN_nullnametype = NL(DWVATRN_nullnametype);
(( OAYATRN_uinst_fntype * ) ( MAYATRN_uinst_fntype.nonlocals )) -> UJXATRN_add_step = UJXATRN_add_step;
(( OAYATRN_uinst_fntype * ) ( MAYATRN_uinst_fntype.nonlocals )) -> FLXATRN_add_nametype = FLXATRN_add_nametype;
(( OAYATRN_uinst_fntype * ) ( MAYATRN_uinst_fntype.nonlocals )) -> LAXATRN_make_unitlink = NL(LAXATRN_make_unitlink);
(( OAYATRN_uinst_fntype * ) ( MAYATRN_uinst_fntype.nonlocals )) -> EHXATRN_unitlink_source = NL(EHXATRN_unitlink_source);
(( OAYATRN_uinst_fntype * ) ( MAYATRN_uinst_fntype.nonlocals )) -> KHXATRN_unitlink_sink = NL(KHXATRN_unitlink_sink);
(( OAYATRN_uinst_fntype * ) ( MAYATRN_uinst_fntype.nonlocals )) -> JVWATRN_transform_unit = NL(JVWATRN_transform_unit);
(( OAYATRN_uinst_fntype * ) ( MAYATRN_uinst_fntype.nonlocals )) -> GKXATRN_add_join = GKXATRN_add_join;
 /* line 1408: */
A_CLOSURE( QDYATRN_unit_fntype, RDYATRN_unit_fntype, SDYATRN_unit_fntype );
(( SDYATRN_unit_fntype * ) ( QDYATRN_unit_fntype.nonlocals )) -> SZXATRN_uname_fntype = SZXATRN_uname_fntype;
(( SDYATRN_unit_fntype * ) ( QDYATRN_unit_fntype.nonlocals )) -> MAYATRN_uinst_fntype = MAYATRN_uinst_fntype;
(( SDYATRN_unit_fntype * ) ( QDYATRN_unit_fntype.nonlocals )) -> QDYATRN_unit_fntype = QDYATRN_unit_fntype;
(( SDYATRN_unit_fntype * ) ( QDYATRN_unit_fntype.nonlocals )) -> QAWATRN_contains_diagnostics = NL(QAWATRN_contains_diagnostics);
(( SDYATRN_unit_fntype * ) ( QDYATRN_unit_fntype.nonlocals )) -> Fdec = Fdec;
(( SDYATRN_unit_fntype * ) ( QDYATRN_unit_fntype.nonlocals )) -> DXVATRN_environ = NL(DXVATRN_environ);
(( SDYATRN_unit_fntype * ) ( QDYATRN_unit_fntype.nonlocals )) -> GXVATRN_has_type_fntype = NL(GXVATRN_has_type_fntype);
(( SDYATRN_unit_fntype * ) ( QDYATRN_unit_fntype.nonlocals )) -> IJXATRN_start_series = IJXATRN_start_series;
(( SDYATRN_unit_fntype * ) ( QDYATRN_unit_fntype.nonlocals )) -> FVXATRN_series_fntype = FVXATRN_series_fntype;
(( SDYATRN_unit_fntype * ) ( QDYATRN_unit_fntype.nonlocals )) -> JVWATRN_transform_unit = NL(JVWATRN_transform_unit);
(( SDYATRN_unit_fntype * ) ( QDYATRN_unit_fntype.nonlocals )) -> NJXATRN_finish_series = NJXATRN_finish_series;
 /* line 1452: */
A_CLOSURE( UFYATRN_terminals_fntype, VFYATRN_terminals_fntype, WFYATRN_terminals_fntype );
(( WFYATRN_terminals_fntype * ) ( UFYATRN_terminals_fntype.nonlocals )) -> FLXATRN_add_nametype = FLXATRN_add_nametype;
(( WFYATRN_terminals_fntype * ) ( UFYATRN_terminals_fntype.nonlocals )) -> DWVATRN_nullnametype = NL(DWVATRN_nullnametype);
(( WFYATRN_terminals_fntype * ) ( UFYATRN_terminals_fntype.nonlocals )) -> RNXATRN_names_nameno = RNXATRN_names_nameno;
 /* line 1463: */
A_CLOSURE( HGYATRN_output_fntype, IGYATRN_output_fntype, JGYATRN_output_fntype );
(( JGYATRN_output_fntype * ) ( HGYATRN_output_fntype.nonlocals )) -> JVWATRN_transform_unit = NL(JVWATRN_transform_unit);
(( JGYATRN_output_fntype * ) ( HGYATRN_output_fntype.nonlocals )) -> GKXATRN_add_join = GKXATRN_add_join;
 /* line 1478: */
A_CLOSURE( BHYATRN_add_terminal_names, CHYATRN_add_terminal_names, DHYATRN_add_terminal_names );
(( DHYATRN_add_terminal_names * ) ( BHYATRN_add_terminal_names.nonlocals )) -> DIXATRN_unitlink = DIXATRN_unitlink;
(( DHYATRN_add_terminal_names * ) ( BHYATRN_add_terminal_names.nonlocals )) -> Fdec = Fdec;
(( DHYATRN_add_terminal_names * ) ( BHYATRN_add_terminal_names.nonlocals )) -> NCWATRN_swap_tfn = NL(NCWATRN_swap_tfn);
(( DHYATRN_add_terminal_names * ) ( BHYATRN_add_terminal_names.nonlocals )) -> BNXATRN_make_let = BNXATRN_make_let;
(( DHYATRN_add_terminal_names * ) ( BHYATRN_add_terminal_names.nonlocals )) -> UIXATRN_add_seqstep = UIXATRN_add_seqstep;
(( DHYATRN_add_terminal_names * ) ( BHYATRN_add_terminal_names.nonlocals )) -> UJXATRN_add_step = UJXATRN_add_step;
 /* line 1508: */
A_CLOSURE( JIYATRN_fnbody_fntype, KIYATRN_fnbody_fntype, LIYATRN_fnbody_fntype );
(( LIYATRN_fnbody_fntype * ) ( JIYATRN_fnbody_fntype.nonlocals )) -> EHXATRN_unitlink_source = NL(EHXATRN_unitlink_source);
(( LIYATRN_fnbody_fntype * ) ( JIYATRN_fnbody_fntype.nonlocals )) -> KHXATRN_unitlink_sink = NL(KHXATRN_unitlink_sink);
(( LIYATRN_fnbody_fntype * ) ( JIYATRN_fnbody_fntype.nonlocals )) -> RBWATRN_swap_ufn = NL(RBWATRN_swap_ufn);
(( LIYATRN_fnbody_fntype * ) ( JIYATRN_fnbody_fntype.nonlocals )) -> IJXATRN_start_series = IJXATRN_start_series;
(( LIYATRN_fnbody_fntype * ) ( JIYATRN_fnbody_fntype.nonlocals )) -> BHYATRN_add_terminal_names = BHYATRN_add_terminal_names;
(( LIYATRN_fnbody_fntype * ) ( JIYATRN_fnbody_fntype.nonlocals )) -> Fdec = Fdec;
(( LIYATRN_fnbody_fntype * ) ( JIYATRN_fnbody_fntype.nonlocals )) -> FVXATRN_series_fntype = FVXATRN_series_fntype;
(( LIYATRN_fnbody_fntype * ) ( JIYATRN_fnbody_fntype.nonlocals )) -> HGYATRN_output_fntype = HGYATRN_output_fntype;
(( LIYATRN_fnbody_fntype * ) ( JIYATRN_fnbody_fntype.nonlocals )) -> NJXATRN_finish_series = NJXATRN_finish_series;
(( LIYATRN_fnbody_fntype * ) ( JIYATRN_fnbody_fntype.nonlocals )) -> LIXATRN_start_sequence = LIXATRN_start_sequence;
(( LIYATRN_fnbody_fntype * ) ( JIYATRN_fnbody_fntype.nonlocals )) -> AJXATRN_add_sequence = AJXATRN_add_sequence;
(( LIYATRN_fnbody_fntype * ) ( JIYATRN_fnbody_fntype.nonlocals )) -> BNXATRN_make_let = BNXATRN_make_let;
(( LIYATRN_fnbody_fntype * ) ( JIYATRN_fnbody_fntype.nonlocals )) -> DWVATRN_nullnametype = NL(DWVATRN_nullnametype);
(( LIYATRN_fnbody_fntype * ) ( JIYATRN_fnbody_fntype.nonlocals )) -> UIXATRN_add_seqstep = UIXATRN_add_seqstep;
(( LIYATRN_fnbody_fntype * ) ( JIYATRN_fnbody_fntype.nonlocals )) -> OIXATRN_finish_sequence = OIXATRN_finish_sequence;
(( LIYATRN_fnbody_fntype * ) ( JIYATRN_fnbody_fntype.nonlocals )) -> JVWATRN_transform_unit = NL(JVWATRN_transform_unit);
(( LIYATRN_fnbody_fntype * ) ( JIYATRN_fnbody_fntype.nonlocals )) -> DJXATRN_serieschanged = (&DJXATRN_serieschanged);
(( LIYATRN_fnbody_fntype * ) ( JIYATRN_fnbody_fntype.nonlocals )) -> UJXATRN_add_step = UJXATRN_add_step;
 /* line 1612: */
 /* line 1613: */
 /* line 1614: */
FMYATRN = NWXATRN_seqstep_fntype ;
DMYATRN.data[0] = A_UNITE(EMYATRN,mode30,30,FMYATRN);
 /* line 1615: */
IMYATRN.fn.fn_global = AZXATRN_sequence_fntype;
IMYATRN.nonlocals = A68_NIL;
HMYATRN = IMYATRN ;
DMYATRN.data[1] = A_UNITE(GMYATRN,mode31,31,HMYATRN);
 /* line 1616: */
KMYATRN = QDYATRN_unit_fntype ;
DMYATRN.data[2] = A_UNITE(JMYATRN,mode19,19,KMYATRN);
A_CLOSURE( NMYATRN_anonymous, OMYATRN_anonymous, PMYATRN_anonymous );
(( PMYATRN_anonymous * ) ( NMYATRN_anonymous.nonlocals )) -> RNXATRN_names_nameno = RNXATRN_names_nameno;
TMYATRN = NMYATRN_anonymous ;
DMYATRN.data[3] = A_UNITE(SMYATRN,mode27,27,TMYATRN);
VMYATRN_newtprocs = THJATRN_make_newtprocs(Tprocs, A_HISVEC(UMYATRN,DMYATRN,4,A68_398 ));
 /* line 1620: */
WMYATRN_iotype = MUNATRN_fndec_tfn(Fdec);
 /* line 1621: */
 /* line 1622: */
XMYATRN = A_CALLPROC(NL(GXVATRN_has_type_fntype),((*(&(WMYATRN_iotype->From)))),((*(&(WMYATRN_iotype->From))),(NL(GXVATRN_has_type_fntype)).nonlocals));
if ( ! XMYATRN )
{XMYATRN = A_CALLPROC(NL(GXVATRN_has_type_fntype),((*(&(WMYATRN_iotype->To)))),((*(&(WMYATRN_iotype->To))),(NL(GXVATRN_has_type_fntype)).nonlocals));
}
YMYATRN_specchanged = XMYATRN;
 /* line 1623: */
ZMYATRN = (&A_VINDEX((*NL(EXVATRN_environ_specs)),Fnno)) ;
(*ZMYATRN) = YMYATRN_specchanged;
 /* line 1625: */
 /* line 1626: */
 /* line 1627: */
if ( YMYATRN_specchanged )
{ 
ANYATRN.Sort = LKAATRN_usink;
ANYATRN.Nameno = 2;
 /* line 1628: */
BNYATRN.Sort = KKAATRN_usource;
BNYATRN.Nameno = 1;
 /* line 1629: */
DNYATRN = A_HEAP(A68_166 ) ;
(*DNYATRN) = BNYATRN ;
FNYATRN = A_HEAP(A68_166 ) ;
(*FNYATRN) = ANYATRN ;
A_CALLPROC(NL(LAXATRN_make_unitlink),(A_UNITE(HNYATRN,mode4,4,WMYATRN_iotype), A_UNITE(GNYATRN,mode11,11,FNYATRN), A_UNITE(ENYATRN,mode11,11,DNYATRN), &INYATRN),(A_UNITE(HNYATRN,mode4,4,WMYATRN_iotype), A_UNITE(GNYATRN,mode11,11,FNYATRN), A_UNITE(ENYATRN,mode11,11,DNYATRN), &INYATRN,(NL(LAXATRN_make_unitlink)).nonlocals));
CNYATRN = INYATRN;
} 
else
{ 
JNYATRN.Sink = A_UNITE(KNYATRN,mode34,34,(&FIAATRN_unull));
 /* line 1630: */
JNYATRN.Source = A_UNITE(LNYATRN,mode34,34,(&FIAATRN_unull));
MNYATRN = A_HEAP(A68_167 ) ;
(*MNYATRN) = JNYATRN ;
CNYATRN = A_UNITE(NNYATRN,mode12,12,MNYATRN);
} 
ONYATRN_link = CNYATRN;
 /* line 1631: */
 /* line 1632: */
 /* line 1633: */
if ( YMYATRN_specchanged )
{ 
 /* line 1634: */
PNYATRN = A_CALLPROC(NL(ZOWATRN_transform_type),(A_UNITE(QNYATRN,mode4,4,WMYATRN_iotype)),(A_UNITE(QNYATRN,mode4,4,WMYATRN_iotype),(NL(ZOWATRN_transform_type)).nonlocals));
} 
else
{ 
RNYATRN.From = A_UNITE(SNYATRN,mode9,9,(&DIAATRN_tnull));
 /* line 1635: */
RNYATRN.To = A_UNITE(TNYATRN,mode9,9,(&DIAATRN_tnull));
UNYATRN = A_HEAP(A68_143 ) ;
(*UNYATRN) = RNYATRN ;
PNYATRN = UNYATRN;
} 
VNYATRN_spectype = PNYATRN;
 /* line 1637: */
 /* line 1638: */
WNYATRN.T = (*(&(VNYATRN_spectype->From)));
WNYATRN.C = YMYATRN_specchanged;
XNYATRN = (&(HIXATRN_newfdec->Inputs)) ;
(*XNYATRN) = A_CALLPROC(UFYATRN_terminals_fntype,((*(&(Fdec->Inputs))), VMYATRN_newtprocs, A68_TRUE, WNYATRN),((*(&(Fdec->Inputs))), VMYATRN_newtprocs, A68_TRUE, WNYATRN,(UFYATRN_terminals_fntype).nonlocals));
 /* line 1639: */
 /* line 1640: */
YNYATRN.T = (*(&(VNYATRN_spectype->To)));
YNYATRN.C = YMYATRN_specchanged;
ZNYATRN = (&(HIXATRN_newfdec->Outputs)) ;
(*ZNYATRN) = A_CALLPROC(UFYATRN_terminals_fntype,((*(&(Fdec->Outputs))), VMYATRN_newtprocs, A68_FALSE, YNYATRN),((*(&(Fdec->Outputs))), VMYATRN_newtprocs, A68_FALSE, YNYATRN,(UFYATRN_terminals_fntype).nonlocals));
 /* line 1642: */
 /* line 1643: */
A_CALLPROC(JIYATRN_fnbody_fntype,((*(&(Fdec->Fnbody))), VMYATRN_newtprocs, YMYATRN_specchanged, ONYATRN_link, VNYATRN_spectype, Newenv, &AOYATRN),((*(&(Fdec->Fnbody))), VMYATRN_newtprocs, YMYATRN_specchanged, ONYATRN_link, VNYATRN_spectype, Newenv, &AOYATRN,(JIYATRN_fnbody_fntype).nonlocals));
BOYATRN_fc = AOYATRN;
 /* line 1645: */
MLJATRN_discard_tprocs(VMYATRN_newtprocs);
 /* line 1647: */
 /* line 1648: */
COYATRN = YMYATRN_specchanged;
if ( ! COYATRN )
{COYATRN = BOYATRN_fc.C;
}
if ( COYATRN )
{ 
 /* line 1649: */
if ( (GIXATRN_nametypeno<(*(&(HIXATRN_newfdec->Nametypes))).upb) )
{ 
 /* line 1650: */
DOYATRN = (*(&(HIXATRN_newfdec->Nametypes))) ;
FOYATRN = (&(HIXATRN_newfdec->Nametypes)) ;
(*FOYATRN) = A_VTRIM(EOYATRN,(DOYATRN),A_VTSCRIPT(&(EOYATRN.upb),(DOYATRN).upb,1,GIXATRN_nametypeno));
} 
 /* line 1651: */
GOYATRN = (&(HIXATRN_newfdec->Fnbody)) ;
(*GOYATRN) = BOYATRN_fc.F;
 /* line 1652: */
HOYATRN.F = HIXATRN_newfdec;
 /* line 1653: */
HOYATRN.C = A68_TRUE;
IOYATRN = HOYATRN;
} 
else
{ 
JOYATRN.F = Fdec;
 /* line 1654: */
 /* line 1655: */
JOYATRN.C = A68_FALSE;
IOYATRN = JOYATRN;
} 
} 
A_PROC_EXIT(fndec_fntype);
*ReturnedValue = (IOYATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  MOYATRN_typedec_fntype(A68_154 * Tdec, A68_324  *ReturnedValue, void *NonLocals)
#define NL(x) (((NOYATRN_typedec_fntype *)NonLocals)->x)
{ 
A68_152  OOYATRN;  /* united object - for case conformity */
A68_148 * POYATRN_tg;
A68_324  QOYATRN;  /* collateral clause result */
A68_324  ROYATRN;  /* clause result */
A68_324  SOYATRN;  /* collateral clause result */
A68_324  TOYATRN;  /* collateral clause result */
A68_324  UOYATRN;  /* collateral clause result */
A_PROC_ENTRY(typedec_fntype);
 /* line 1659: */
 /* line 1660: */
{ 
 /* line 1661: */
if ( (Tdec!=WAAATRN_niltypedec) )
{ 
 /* line 1662: */
OOYATRN = (*(&(Tdec->Body))) ;
switch ( OOYATRN.mode )
{ 
case 3: /* REF STRUCT(MODE139)  */
POYATRN_tg = (OOYATRN.data.mode3);
 /* line 1663: */
if ( A_CALLPROC(NL(GXVATRN_has_type_fntype),((*(&(POYATRN_tg->Tag)))),((*(&(POYATRN_tg->Tag))),(NL(GXVATRN_has_type_fntype)).nonlocals)) )
{ 
QOYATRN.T = WAAATRN_niltypedec;
 /* line 1664: */
QOYATRN.C = A68_TRUE;
ROYATRN = QOYATRN;
} 
else
{ 
SOYATRN.T = Tdec;
 /* line 1665: */
 /* line 1666: */
SOYATRN.C = A68_FALSE;
ROYATRN = SOYATRN;
} 
break;
default: 
TOYATRN.T = Tdec;
 /* line 1667: */
 /* line 1668: */
TOYATRN.C = A68_FALSE;
ROYATRN = TOYATRN;
break;
} 
} 
else
{ 
UOYATRN.T = Tdec;
 /* line 1669: */
 /* line 1670: */
UOYATRN.C = A68_FALSE;
ROYATRN = UOYATRN;
} 
} 
A_PROC_EXIT(typedec_fntype);
*ReturnedValue = (ROYATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  YOYATRN_outerfn_fntype(A68_246  Ofn, A68_353 * Tprocs, A68_351  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZOYATRN_outerfn_fntype *)NonLocals)->x)
{ 
A68_240 * APYATRN_newenv;
A68_420  CPYATRN_generator;   /* proc value of non-global proc */
A68_54  HPYATRN;  /* avoid structure result */
A68_420  JPYATRN_generator;   /* proc value of non-global proc */
A68_54  PPYATRN;  /* avoid structure result */
A68_54  OPYATRN_updated;
A68_BOOL * QPYATRN_u;
A68_237 ** RPYATRN_fns;
A68_BOOL * SPYATRN_specs;
A68_245  TPYATRN;  /* forall yield */
A68_INT  UPYATRN;  /* forall loop counter */
A68_BOOL  VPYATRN;  /* clause result */
A68_INT  WPYATRN;  /* YIELD */
A68_BOOL  XPYATRN_tc;
A68_BOOL  YPYATRN_fc;
A68_243 * ZPYATRN_types;
A68_245 * AQYATRN_fns;
A68_376  DQYATRN_declaration;   /* proc value of non-global proc */
A68_237 * TRYATRN_fdec;
A68_488  URYATRN;  /* collateral clause result */
A68_398  VRYATRN;  /* OPERATORS - mode -> union mode */
A68_363  WRYATRN;  /* YIELD */
A68_398  XRYATRN;  /* OPERATORS - mode -> union mode */
A68_376  YRYATRN;  /* YIELD */
A68_397  ZRYATRN;  /* OPERATORS - istruct -> vector */
A68_353 * ASYATRN_newtprocs;
A68_350  BSYATRN;  /* avoid structure result */
A68_350  CSYATRN_fdecc;
A68_INT  DSYATRN;  /* YIELD */
A68_237 ** ESYATRN;  /* YIELD */
A68_435  GSYATRN_generator;   /* proc value of non-global proc */
A68_245  LSYATRN;  /* avoid structure result */
A68_INT  MSYATRN;  /* YIELD */
A68_237 ** NSYATRN;  /* YIELD */
A68_INT  OSYATRN_tno;
A68_INT  PSYATRN;  /* to part of loop */
A68_324  QSYATRN;  /* avoid structure result */
A68_324  RSYATRN_tdecc;
A68_154 ** SSYATRN;  /* YIELD */
A68_487  USYATRN_generator;   /* proc value of non-global proc */
A68_243  ZSYATRN;  /* avoid structure result */
A68_154 ** ATYATRN;  /* YIELD */
A68_BOOL  BTYATRN;  /* optbool result */
A68_351  CTYATRN;  /* collateral clause result */
A68_351  DTYATRN;  /* clause result */
A68_351  ETYATRN;  /* collateral clause result */
A_PROC_ENTRY(outerfn_fntype);
 /* line 1674: */
 /* line 1675: */
{ 
APYATRN_newenv = (A_HEAP(A68_240 ));
(*APYATRN_newenv) = (*Ofn.Environ);
 /* line 1676: */
A_CLOSURE( CPYATRN_generator, DPYATRN_generator, EPYATRN_generator );
(( EPYATRN_generator * ) ( CPYATRN_generator.nonlocals )) -> APYATRN_newenv = APYATRN_newenv;
A_CALLPROC(CPYATRN_generator,(A68_FALSE, &HPYATRN),(A68_FALSE, &HPYATRN,(CPYATRN_generator).nonlocals));
(*NL(EXVATRN_environ_specs)) = HPYATRN;
 /* line 1677: */
A_CLOSURE( JPYATRN_generator, KPYATRN_generator, LPYATRN_generator );
(( LPYATRN_generator * ) ( JPYATRN_generator.nonlocals )) -> APYATRN_newenv = APYATRN_newenv;
A_CALLPROC(JPYATRN_generator,(A68_TRUE, &PPYATRN),(A68_TRUE, &PPYATRN,(JPYATRN_generator).nonlocals));
OPYATRN_updated = PPYATRN;
 /* line 1679: */
 /* line 1680: */
TPYATRN = (*(&(APYATRN_newenv->Fns))) ;
UPYATRN = OPYATRN_updated.upb -1;
if ( UPYATRN != TPYATRN.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
if ( UPYATRN != (*NL(EXVATRN_environ_specs)).upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 3"); }
QPYATRN_u = OPYATRN_updated.data;
RPYATRN_fns = TPYATRN.data;
SPYATRN_specs = (*NL(EXVATRN_environ_specs)).data;
for (;UPYATRN-- >= 0;
(QPYATRN_u++
,RPYATRN_fns++
,SPYATRN_specs++
) )
{
(*QPYATRN_u) = A68_FALSE;
 /* line 1681: */
 /* line 1682: */
if ( ((*(&((*RPYATRN_fns)->Sort)))==OKAATRN_outerdec) )
{ 
 /* line 1683: */
WPYATRN = (*(&((*(&((*RPYATRN_fns)->Usage)))->Closureno))) ;
VPYATRN = (*(&A_VINDEX(NL(EYVATRN_closure_specs),WPYATRN)));
} 
else
{ 
 /* line 1684: */
 /* line 1685: */
VPYATRN = A68_FALSE;
} 
(*SPYATRN_specs) = VPYATRN;
}
 /* line 1687: */
XPYATRN_tc = A68_FALSE;
YPYATRN_fc = A68_FALSE;
 /* line 1688: */
ZPYATRN_types = (&(APYATRN_newenv->Types));
 /* line 1689: */
AQYATRN_fns = (&(APYATRN_newenv->Fns));
 /* line 1691: */
A_CLOSURE( DQYATRN_declaration, EQYATRN_declaration, FQYATRN_declaration );
(( FQYATRN_declaration * ) ( DQYATRN_declaration.nonlocals )) -> ZPYATRN_types = ZPYATRN_types;
(( FQYATRN_declaration * ) ( DQYATRN_declaration.nonlocals )) -> LOYATRN_typedec_fntype = NL(LOYATRN_typedec_fntype);
(( FQYATRN_declaration * ) ( DQYATRN_declaration.nonlocals )) -> XPYATRN_tc = (&XPYATRN_tc);
(( FQYATRN_declaration * ) ( DQYATRN_declaration.nonlocals )) -> OPYATRN_updated = OPYATRN_updated;
(( FQYATRN_declaration * ) ( DQYATRN_declaration.nonlocals )) -> AQYATRN_fns = AQYATRN_fns;
(( FQYATRN_declaration * ) ( DQYATRN_declaration.nonlocals )) -> THXATRN_fndec_fntype = NL(THXATRN_fndec_fntype);
(( FQYATRN_declaration * ) ( DQYATRN_declaration.nonlocals )) -> APYATRN_newenv = APYATRN_newenv;
(( FQYATRN_declaration * ) ( DQYATRN_declaration.nonlocals )) -> YPYATRN_fc = (&YPYATRN_fc);
 /* line 1729: */
TRYATRN_fdec = CQMATRN_get_outerfn(Ofn);
 /* line 1731: */
 /* line 1732: */
 /* line 1734: */
WRYATRN = NL(OIWATRN_remove_named_fntype) ;
URYATRN.data[0] = A_UNITE(VRYATRN,mode10,10,WRYATRN);
YRYATRN = DQYATRN_declaration ;
URYATRN.data[1] = A_UNITE(XRYATRN,mode23,23,YRYATRN);
ASYATRN_newtprocs = THJATRN_make_newtprocs(Tprocs, A_HISVEC(ZRYATRN,URYATRN,2,A68_398 ));
 /* line 1736: */
A_CALLPROC(NL(THXATRN_fndec_fntype),(TRYATRN_fdec, ASYATRN_newtprocs, 1, APYATRN_newenv, &BSYATRN),(TRYATRN_fdec, ASYATRN_newtprocs, 1, APYATRN_newenv, &BSYATRN,(NL(THXATRN_fndec_fntype)).nonlocals));
CSYATRN_fdecc = BSYATRN;
 /* line 1737: */
 /* line 1738: */
if ( CSYATRN_fdecc.C )
{ 
 /* line 1739: */
if ( YPYATRN_fc )
{ 
 /* line 1740: */
DSYATRN = 1 ;
ESYATRN = (&A_VINDEX((*AQYATRN_fns),DSYATRN)) ;
(*ESYATRN) = CSYATRN_fdecc.F;
} 
else
{ 
YPYATRN_fc = A68_TRUE;
 /* line 1741: */
A_CLOSURE( GSYATRN_generator, HSYATRN_generator, ISYATRN_generator );
(( ISYATRN_generator * ) ( GSYATRN_generator.nonlocals )) -> AQYATRN_fns = AQYATRN_fns;
A_CALLPROC(GSYATRN_generator,(A68_FALSE, &LSYATRN),(A68_FALSE, &LSYATRN,(GSYATRN_generator).nonlocals));
A_VASSIGN2((*AQYATRN_fns),LSYATRN,A68_237 *) ;
(*AQYATRN_fns) = LSYATRN;
 /* line 1742: */
 /* line 1743: */
 /* line 1744: */
MSYATRN = 1 ;
NSYATRN = (&A_VINDEX((*AQYATRN_fns),MSYATRN)) ;
(*NSYATRN) = CSYATRN_fdecc.F;
} 
} 
 /* line 1746: */
 /* line 1747: */
PSYATRN = (*ZPYATRN_types).upb;
for ( OSYATRN_tno = 1;
OSYATRN_tno <= PSYATRN;
OSYATRN_tno += 1 )
{ 
A_CALLPROC(NL(LOYATRN_typedec_fntype),((*(&A_VINDEX((*ZPYATRN_types),OSYATRN_tno))), &QSYATRN),((*(&A_VINDEX((*ZPYATRN_types),OSYATRN_tno))), &QSYATRN,(NL(LOYATRN_typedec_fntype)).nonlocals));
RSYATRN_tdecc = QSYATRN;
 /* line 1748: */
 /* line 1749: */
if ( RSYATRN_tdecc.C )
{ 
 /* line 1750: */
if ( XPYATRN_tc )
{ 
 /* line 1751: */
SSYATRN = (&A_VINDEX((*ZPYATRN_types),OSYATRN_tno)) ;
(*SSYATRN) = WAAATRN_niltypedec;
} 
else
{ 
XPYATRN_tc = A68_TRUE;
 /* line 1752: */
A_CLOSURE( USYATRN_generator, VSYATRN_generator, WSYATRN_generator );
(( WSYATRN_generator * ) ( USYATRN_generator.nonlocals )) -> ZPYATRN_types = ZPYATRN_types;
A_CALLPROC(USYATRN_generator,(A68_FALSE, &ZSYATRN),(A68_FALSE, &ZSYATRN,(USYATRN_generator).nonlocals));
A_VASSIGN2((*ZPYATRN_types),ZSYATRN,A68_154 *) ;
(*ZPYATRN_types) = ZSYATRN;
 /* line 1753: */
 /* line 1754: */
 /* line 1755: */
 /* line 1756: */
ATYATRN = (&A_VINDEX((*ZPYATRN_types),OSYATRN_tno)) ;
(*ATYATRN) = WAAATRN_niltypedec;
} 
} 
}
 /* line 1758: */
MLJATRN_discard_tprocs(ASYATRN_newtprocs);
 /* line 1760: */
 /* line 1761: */
BTYATRN = XPYATRN_tc;
if ( ! BTYATRN )
{BTYATRN = YPYATRN_fc;
}
if ( BTYATRN )
{ 
CTYATRN.O.Closureno = Ofn.Closureno;
CTYATRN.O.Sort = VKAATRN_outerfn;
CTYATRN.O.Environ = APYATRN_newenv;
 /* line 1762: */
CTYATRN.C = A68_TRUE;
DTYATRN = CTYATRN;
} 
else
{ 
ETYATRN.O = Ofn;
 /* line 1763: */
 /* line 1764: */
ETYATRN.C = A68_FALSE;
DTYATRN = ETYATRN;
} 
} 
A_PROC_EXIT(outerfn_fntype);
*ReturnedValue = (DTYATRN);
return;
} 
#undef NL

A68_VOID  XUVATRN_fntype_keep_ufn(A68_401  *ReturnedValue)
{ 
A68_401  YUVATRN;  /* clause result */
A68_401  ZUVATRN;  /* avoid structure result */
A_PROC_ENTRY(fntype_keep_ufn);
FCAAOST_makeoptions( 1, &ZUVATRN );
YUVATRN = ZUVATRN;
A_PROC_EXIT(fntype_keep_ufn);
*ReturnedValue = (YUVATRN);
return;
} 
#undef NL

A68_VOID  HVVATRN_transform_fntypes(A68_250 * Oldclosure, A68_401  Options, A68_97  Msg, A68_352  *ReturnedValue)
{ 
A68_414  OVVATRN;  /* collateral clause result */
A68_398  PVVATRN;  /* OPERATORS - mode -> union mode */
A68_354  QVVATRN;  /* procedure value */
A68_398  RVVATRN;  /* OPERATORS - mode -> union mode */
A68_357  SVVATRN;  /* procedure value */
A68_398  TVVATRN;  /* OPERATORS - mode -> union mode */
A68_358  UVVATRN;  /* YIELD */
A68_358  VVVATRN;  /* procedure value */
A68_398  WVVATRN;  /* OPERATORS - mode -> union mode */
A68_363  XVVATRN;  /* procedure value */
A68_397  YVVATRN;  /* OPERATORS - istruct -> vector */
A68_353 * ZVVATRN_defaulttprocs;
A68_236  AWVATRN;  /* collateral clause result */
A68_139  BWVATRN;  /* OPERATORS - mode -> union mode */
A68_114  CWVATRN;  /* OPERATORS - mode -> union mode */
A68_236  DWVATRN_nullnametype;
A68_36  FWVATRN_sysfault;   /* proc value of non-global proc */
A68_240 * DXVATRN_environ;
A68_54  EXVATRN_environ_specs;
A68_419  GXVATRN_has_type_fntype;   /* proc value of non-global proc */
A68_420  ZXVATRN_generator;   /* proc value of non-global proc */
A68_54  FYVATRN;  /* avoid structure result */
A68_54  EYVATRN_closure_specs;
A68_BOOL * GYVATRN_c;
A68_INT  HYVATRN;  /* forall loop counter */
A68_BOOL  IYVATRN_expand;
A68_372  LYVATRN_anonymous;   /* proc value of non-global proc */
A68_398  VYVATRN;  /* OPERATORS - mode -> union mode */
A68_372  WYVATRN;  /* YIELD */
A68_397  XYVATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_353 * YYVATRN_search_unit;
A68_421  AZVATRN_pre_pass_outerfn;   /* proc value of non-global proc */
A68_BOOL  AAWATRN_with_monitor;
A68_372  DAWATRN_anonymous;   /* proc value of non-global proc */
A68_398  LAWATRN;  /* OPERATORS - mode -> union mode */
A68_372  MAWATRN;  /* YIELD */
A68_397  NAWATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_353 * OAWATRN_contains_diagnosticprocs;
A68_423  QAWATRN_contains_diagnostics;   /* proc value of non-global proc */
A68_398  NBWATRN;  /* OPERATORS - mode -> union mode */
A68_372  OBWATRN;  /* YIELD */
A68_372  PBWATRN;  /* procedure value */
A68_397  QBWATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_353 * RBWATRN_swap_ufn;
A68_398  JCWATRN;  /* OPERATORS - mode -> union mode */
A68_363  KCWATRN;  /* YIELD */
A68_363  LCWATRN;  /* procedure value */
A68_397  MCWATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_353 * NCWATRN_swap_tfn;
A68_423  PCWATRN_has_unit_null;   /* proc value of non-global proc */
A68_427  SEWATRN_remove_null_elem;   /* proc value of non-global proc */
A68_429  SFWATRN_remove_null_void;   /* proc value of non-global proc */
A68_BOOL  PGWATRN_extra;
A68_372  SGWATRN_anonymous;   /* proc value of non-global proc */
A68_398  EHWATRN;  /* OPERATORS - mode -> union mode */
A68_372  FHWATRN;  /* YIELD */
A68_397  GHWATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_353 * HHWATRN_extra_stepprocs;
A68_423  JHWATRN_extra_step;   /* proc value of non-global proc */
A68_430  QHWATRN_unit_uname;   /* proc value of non-global proc */
A68_431  FIWATRN_unit_nameno;   /* proc value of non-global proc */
A68_363  OIWATRN_remove_named_fntype;   /* proc value of non-global proc */
A68_436  HLWATRN_trans_type;   /* proc value of non-global proc */
A68_440  ZOWATRN_transform_type;   /* proc value of non-global proc */
A68_441  FPWATRN_trans_unit;   /* proc value of non-global proc */
A68_446  JVWATRN_transform_unit;   /* proc value of non-global proc */
A68_372  PVWATRN_anonymous;   /* proc value of non-global proc */
A68_398  ZVWATRN;  /* OPERATORS - mode -> union mode */
A68_372  AWWATRN;  /* YIELD */
A68_397  BWWATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_353 * CWWATRN_remove_ufnprocs;
A68_447  JXWATRN;  /* collateral clause result */
A68_398  TXWATRN;  /* OPERATORS - mode -> union mode */
A68_372  UXWATRN;  /* YIELD */
A68_372  VXWATRN;  /* procedure value */
A68_398  WXWATRN;  /* OPERATORS - mode -> union mode */
A68_371  XXWATRN;  /* YIELD */
A68_371  YXWATRN;  /* procedure value */
A68_398  ZXWATRN;  /* OPERATORS - mode -> union mode */
A68_382  AYWATRN;  /* YIELD */
A68_382  BYWATRN;  /* procedure value */
A68_397  CYWATRN;  /* OPERATORS - istruct -> vector */
A68_353 * DYWATRN_unull_procs;
A68_448  FYWATRN_remove_ufn;   /* proc value of non-global proc */
A68_363  TYWATRN_anonymous;   /* proc value of non-global proc */
A68_398  DZWATRN;  /* OPERATORS - mode -> union mode */
A68_363  EZWATRN;  /* YIELD */
A68_397  FZWATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_353 * GZWATRN_remove_tfnprocs;
A68_398  QZWATRN;  /* OPERATORS - mode -> union mode */
A68_363  RZWATRN;  /* YIELD */
A68_363  SZWATRN;  /* procedure value */
A68_397  TZWATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_353 * UZWATRN_tnull_procs;
A68_449  WZWATRN_remove_tfn;   /* proc value of non-global proc */
A68_450  LAXATRN_make_unitlink;   /* proc value of non-global proc */
A68_INT  TFXATRN_sort;
A68_372  WFXATRN_anonymous;   /* proc value of non-global proc */
A68_398  RGXATRN;  /* OPERATORS - mode -> union mode */
A68_372  SGXATRN;  /* YIELD */
A68_397  TGXATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_353 * UGXATRN_coerce_ufn_procs;
A68_455  XGXATRN_coerce_ufn;   /* proc value of non-global proc */
A68_427  EHXATRN_unitlink_source;   /* proc value of non-global proc */
A68_427  KHXATRN_unitlink_sink;   /* proc value of non-global proc */
A68_456  THXATRN_fndec_fntype;   /* proc value of non-global proc */
A68_486  LOYATRN_typedec_fntype;   /* proc value of non-global proc */
A68_394  XOYATRN_outerfn_fntype;   /* proc value of non-global proc */
A68_BOOL  FTYATRN_changed;
A68_250 * GTYATRN_newclosure;
A68_247 ** HTYATRN_newptr;
A68_246  ITYATRN_o;
A68_154 * JTYATRN_tdec;
A68_324  KTYATRN;  /* avoid structure result */
A68_324  LTYATRN_tdc;
A68_351  MTYATRN;  /* collateral clause result */
A68_351  NTYATRN;  /* avoid structure result */
A68_351  OTYATRN_oc;
A68_INT  PTYATRN_place;
A68_246 * QTYATRN;  /* YIELD */
A68_352  RTYATRN;  /* collateral clause result */
A68_352  STYATRN;  /* clause result */
A_PROC_ENTRY(transform_fntypes);
 /* line 86: */
 /* line 89: */
{ 
 /* line 92: */
 /* line 93: */
QVVATRN.fn.fn_global = DWLATRN_null_attr;
QVVATRN.nonlocals = A68_NIL;
OVVATRN.data[0] = A_UNITE(PVVATRN,mode1,1,QVVATRN);
SVVATRN.fn.fn_global = IWLATRN_null_formula;
SVVATRN.nonlocals = A68_NIL;
OVVATRN.data[1] = A_UNITE(RVVATRN,mode4,4,SVVATRN);
VVVATRN.fn.fn_global = LVVATRN_null_formulas;
VVVATRN.nonlocals = A68_NIL;
UVVATRN = VVVATRN ;
OVVATRN.data[2] = A_UNITE(TVVATRN,mode5,5,UVVATRN);
XVVATRN.fn.fn_global = NWLATRN_null_type;
XVVATRN.nonlocals = A68_NIL;
OVVATRN.data[3] = A_UNITE(WVVATRN,mode10,10,XVVATRN);
ZVVATRN_defaulttprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HISVEC(YVVATRN,OVVATRN,4,A68_398 ));
 /* line 96: */
AWVATRN.Name = TTCAOST_nullid;
AWVATRN.Type = A_UNITE(BWVATRN,mode9,9,(&DIAATRN_tnull));
AWVATRN.Attr = A_UNITE(CWVATRN,mode5,5,(&ZHAATRN_attrnull));
DWVATRN_nullnametype = AWVATRN;
 /* line 98: */
A_CLOSURE( FWVATRN_sysfault, GWVATRN_sysfault, HWVATRN_sysfault );
(( HWVATRN_sysfault * ) ( FWVATRN_sysfault.nonlocals )) -> Msg = Msg;
 /* line 100: */
 /* line 103: */
 /* line 104: */
 /* line 106: */
A_CLOSURE( GXVATRN_has_type_fntype, HXVATRN_has_type_fntype, IXVATRN_has_type_fntype );
(( IXVATRN_has_type_fntype * ) ( GXVATRN_has_type_fntype.nonlocals )) -> DXVATRN_environ = (&DXVATRN_environ);
(( IXVATRN_has_type_fntype * ) ( GXVATRN_has_type_fntype.nonlocals )) -> GXVATRN_has_type_fntype = GXVATRN_has_type_fntype;
 /* line 124: */
A_CLOSURE( ZXVATRN_generator, AYVATRN_generator, BYVATRN_generator );
(( BYVATRN_generator * ) ( ZXVATRN_generator.nonlocals )) -> Oldclosure = Oldclosure;
A_CALLPROC(ZXVATRN_generator,(A68_TRUE, &FYVATRN),(A68_TRUE, &FYVATRN,(ZXVATRN_generator).nonlocals));
EYVATRN_closure_specs = FYVATRN;
 /* line 125: */
HYVATRN = EYVATRN_closure_specs.upb -1;
GYVATRN_c = EYVATRN_closure_specs.data;
for (;HYVATRN-- >= 0;
(GYVATRN_c++
) )
{
(*GYVATRN_c) = A68_FALSE;
}
 /* line 127: */
IYVATRN_expand = A68_FALSE;
 /* line 129: */
 /* line 130: */
A_CLOSURE( LYVATRN_anonymous, MYVATRN_anonymous, NYVATRN_anonymous );
(( NYVATRN_anonymous * ) ( LYVATRN_anonymous.nonlocals )) -> IYVATRN_expand = (&IYVATRN_expand);
WYVATRN = LYVATRN_anonymous ;
YYVATRN_search_unit = THJATRN_make_newtprocs(ZVVATRN_defaulttprocs, A_HVEC(XYVATRN,A_UNITE(VYVATRN,mode19,19,WYVATRN),A68_398 ));
 /* line 141: */
A_CLOSURE( AZVATRN_pre_pass_outerfn, BZVATRN_pre_pass_outerfn, CZVATRN_pre_pass_outerfn );
(( CZVATRN_pre_pass_outerfn * ) ( AZVATRN_pre_pass_outerfn.nonlocals )) -> DXVATRN_environ = (&DXVATRN_environ);
(( CZVATRN_pre_pass_outerfn * ) ( AZVATRN_pre_pass_outerfn.nonlocals )) -> GXVATRN_has_type_fntype = GXVATRN_has_type_fntype;
(( CZVATRN_pre_pass_outerfn * ) ( AZVATRN_pre_pass_outerfn.nonlocals )) -> EYVATRN_closure_specs = EYVATRN_closure_specs;
(( CZVATRN_pre_pass_outerfn * ) ( AZVATRN_pre_pass_outerfn.nonlocals )) -> IYVATRN_expand = (&IYVATRN_expand);
(( CZVATRN_pre_pass_outerfn * ) ( AZVATRN_pre_pass_outerfn.nonlocals )) -> YYVATRN_search_unit = YYVATRN_search_unit;
 /* line 178: */
AAWATRN_with_monitor = A68_FALSE;
 /* line 180: */
 /* line 181: */
A_CLOSURE( DAWATRN_anonymous, EAWATRN_anonymous, FAWATRN_anonymous );
(( FAWATRN_anonymous * ) ( DAWATRN_anonymous.nonlocals )) -> AAWATRN_with_monitor = (&AAWATRN_with_monitor);
MAWATRN = DAWATRN_anonymous ;
OAWATRN_contains_diagnosticprocs = THJATRN_make_newtprocs(ZVVATRN_defaulttprocs, A_HVEC(NAWATRN,A_UNITE(LAWATRN,mode19,19,MAWATRN),A68_398 ));
 /* line 191: */
A_CLOSURE( QAWATRN_contains_diagnostics, RAWATRN_contains_diagnostics, SAWATRN_contains_diagnostics );
(( SAWATRN_contains_diagnostics * ) ( QAWATRN_contains_diagnostics.nonlocals )) -> AAWATRN_with_monitor = (&AAWATRN_with_monitor);
(( SAWATRN_contains_diagnostics * ) ( QAWATRN_contains_diagnostics.nonlocals )) -> OAWATRN_contains_diagnosticprocs = OAWATRN_contains_diagnosticprocs;
 /* line 200: */
 /* line 201: */
PBWATRN.fn.fn_global = YAWATRN_anonymous;
PBWATRN.nonlocals = A68_NIL;
OBWATRN = PBWATRN ;
RBWATRN_swap_ufn = THJATRN_make_newtprocs(ZVVATRN_defaulttprocs, A_HVEC(QBWATRN,A_UNITE(NBWATRN,mode19,19,OBWATRN),A68_398 ));
 /* line 214: */
 /* line 215: */
LCWATRN.fn.fn_global = UBWATRN_anonymous;
LCWATRN.nonlocals = A68_NIL;
KCWATRN = LCWATRN ;
NCWATRN_swap_tfn = THJATRN_make_newtprocs(ZVVATRN_defaulttprocs, A_HVEC(MCWATRN,A_UNITE(JCWATRN,mode10,10,KCWATRN),A68_398 ));
 /* line 227: */
A_CLOSURE( PCWATRN_has_unit_null, QCWATRN_has_unit_null, RCWATRN_has_unit_null );
(( RCWATRN_has_unit_null * ) ( PCWATRN_has_unit_null.nonlocals )) -> PCWATRN_has_unit_null = PCWATRN_has_unit_null;
 /* line 239: */
 /* line 273: */
 /* line 276: */
A_CLOSURE( SEWATRN_remove_null_elem, TEWATRN_remove_null_elem, UEWATRN_remove_null_elem );
(( UEWATRN_remove_null_elem * ) ( SEWATRN_remove_null_elem.nonlocals )) -> SEWATRN_remove_null_elem = SEWATRN_remove_null_elem;
 /* line 312: */
A_CLOSURE( SFWATRN_remove_null_void, TFWATRN_remove_null_void, UFWATRN_remove_null_void );
(( UFWATRN_remove_null_void * ) ( SFWATRN_remove_null_void.nonlocals )) -> PCWATRN_has_unit_null = PCWATRN_has_unit_null;
(( UFWATRN_remove_null_void * ) ( SFWATRN_remove_null_void.nonlocals )) -> SEWATRN_remove_null_elem = SEWATRN_remove_null_elem;
 /* line 352: */
PGWATRN_extra = A68_FALSE;
 /* line 354: */
 /* line 355: */
A_CLOSURE( SGWATRN_anonymous, TGWATRN_anonymous, UGWATRN_anonymous );
(( UGWATRN_anonymous * ) ( SGWATRN_anonymous.nonlocals )) -> EXVATRN_environ_specs = (&EXVATRN_environ_specs);
(( UGWATRN_anonymous * ) ( SGWATRN_anonymous.nonlocals )) -> PGWATRN_extra = (&PGWATRN_extra);
FHWATRN = SGWATRN_anonymous ;
HHWATRN_extra_stepprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HVEC(GHWATRN,A_UNITE(EHWATRN,mode19,19,FHWATRN),A68_398 ));
 /* line 368: */
A_CLOSURE( JHWATRN_extra_step, KHWATRN_extra_step, LHWATRN_extra_step );
(( LHWATRN_extra_step * ) ( JHWATRN_extra_step.nonlocals )) -> PGWATRN_extra = (&PGWATRN_extra);
(( LHWATRN_extra_step * ) ( JHWATRN_extra_step.nonlocals )) -> HHWATRN_extra_stepprocs = HHWATRN_extra_stepprocs;
 /* line 375: */
A_CLOSURE( QHWATRN_unit_uname, RHWATRN_unit_uname, SHWATRN_unit_uname );
(( SHWATRN_unit_uname * ) ( QHWATRN_unit_uname.nonlocals )) -> QHWATRN_unit_uname = QHWATRN_unit_uname;
 /* line 387: */
A_CLOSURE( FIWATRN_unit_nameno, GIWATRN_unit_nameno, HIWATRN_unit_nameno );
(( HIWATRN_unit_nameno * ) ( FIWATRN_unit_nameno.nonlocals )) -> QHWATRN_unit_uname = QHWATRN_unit_uname;
(( HIWATRN_unit_nameno * ) ( FIWATRN_unit_nameno.nonlocals )) -> FWVATRN_sysfault = FWVATRN_sysfault;
 /* line 397: */
A_CLOSURE( OIWATRN_remove_named_fntype, PIWATRN_remove_named_fntype, QIWATRN_remove_named_fntype );
(( QIWATRN_remove_named_fntype * ) ( OIWATRN_remove_named_fntype.nonlocals )) -> DXVATRN_environ = (&DXVATRN_environ);
(( QIWATRN_remove_named_fntype * ) ( OIWATRN_remove_named_fntype.nonlocals )) -> GXVATRN_has_type_fntype = GXVATRN_has_type_fntype;
 /* line 413: */
 /* line 437: */
A_CLOSURE( HLWATRN_trans_type, ILWATRN_trans_type, JLWATRN_trans_type );
(( JLWATRN_trans_type * ) ( HLWATRN_trans_type.nonlocals )) -> DXVATRN_environ = (&DXVATRN_environ);
(( JLWATRN_trans_type * ) ( HLWATRN_trans_type.nonlocals )) -> GXVATRN_has_type_fntype = GXVATRN_has_type_fntype;
(( JLWATRN_trans_type * ) ( HLWATRN_trans_type.nonlocals )) -> HLWATRN_trans_type = HLWATRN_trans_type;
 /* line 521: */
A_CLOSURE( ZOWATRN_transform_type, APWATRN_transform_type, BPWATRN_transform_type );
(( BPWATRN_transform_type * ) ( ZOWATRN_transform_type.nonlocals )) -> HLWATRN_trans_type = HLWATRN_trans_type;
 /* line 526: */
A_CLOSURE( FPWATRN_trans_unit, GPWATRN_trans_unit, HPWATRN_trans_unit );
(( HPWATRN_trans_unit * ) ( FPWATRN_trans_unit.nonlocals )) -> FPWATRN_trans_unit = FPWATRN_trans_unit;
(( HPWATRN_trans_unit * ) ( FPWATRN_trans_unit.nonlocals )) -> FWVATRN_sysfault = FWVATRN_sysfault;
 /* line 656: */
A_CLOSURE( JVWATRN_transform_unit, KVWATRN_transform_unit, LVWATRN_transform_unit );
(( LVWATRN_transform_unit * ) ( JVWATRN_transform_unit.nonlocals )) -> FPWATRN_trans_unit = FPWATRN_trans_unit;
 /* line 663: */
 /* line 664: */
A_CLOSURE( PVWATRN_anonymous, QVWATRN_anonymous, RVWATRN_anonymous );
(( RVWATRN_anonymous * ) ( PVWATRN_anonymous.nonlocals )) -> JVWATRN_transform_unit = JVWATRN_transform_unit;
AWWATRN = PVWATRN_anonymous ;
CWWATRN_remove_ufnprocs = THJATRN_make_newtprocs(ZVVATRN_defaulttprocs, A_HVEC(BWWATRN,A_UNITE(ZVWATRN,mode19,19,AWWATRN),A68_398 ));
 /* line 676: */
 /* line 688: */
 /* line 700: */
 /* line 701: */
VXWATRN.fn.fn_global = MXWATRN_anonymous;
VXWATRN.nonlocals = A68_NIL;
UXWATRN = VXWATRN ;
JXWATRN.data[0] = A_UNITE(TXWATRN,mode19,19,UXWATRN);
 /* line 707: */
YXWATRN.fn.fn_global = FWWATRN_uchoices;
YXWATRN.nonlocals = A68_NIL;
XXWATRN = YXWATRN ;
JXWATRN.data[1] = A_UNITE(WXWATRN,mode18,18,XXWATRN);
BYWATRN.fn.fn_global = VWWATRN_seqchoices;
BYWATRN.nonlocals = A68_NIL;
AYWATRN = BYWATRN ;
JXWATRN.data[2] = A_UNITE(ZXWATRN,mode29,29,AYWATRN);
DYWATRN_unull_procs = THJATRN_make_newtprocs(ZVVATRN_defaulttprocs, A_HISVEC(CYWATRN,JXWATRN,3,A68_398 ));
 /* line 709: */
A_CLOSURE( FYWATRN_remove_ufn, GYWATRN_remove_ufn, HYWATRN_remove_ufn );
(( HYWATRN_remove_ufn * ) ( FYWATRN_remove_ufn.nonlocals )) -> CWWATRN_remove_ufnprocs = CWWATRN_remove_ufnprocs;
(( HYWATRN_remove_ufn * ) ( FYWATRN_remove_ufn.nonlocals )) -> DYWATRN_unull_procs = DYWATRN_unull_procs;
 /* line 716: */
 /* line 717: */
A_CLOSURE( TYWATRN_anonymous, UYWATRN_anonymous, VYWATRN_anonymous );
(( VYWATRN_anonymous * ) ( TYWATRN_anonymous.nonlocals )) -> ZOWATRN_transform_type = ZOWATRN_transform_type;
EZWATRN = TYWATRN_anonymous ;
GZWATRN_remove_tfnprocs = THJATRN_make_newtprocs(ZVVATRN_defaulttprocs, A_HVEC(FZWATRN,A_UNITE(DZWATRN,mode10,10,EZWATRN),A68_398 ));
 /* line 725: */
 /* line 726: */
SZWATRN.fn.fn_global = JZWATRN_anonymous;
SZWATRN.nonlocals = A68_NIL;
RZWATRN = SZWATRN ;
UZWATRN_tnull_procs = THJATRN_make_newtprocs(ZVVATRN_defaulttprocs, A_HVEC(TZWATRN,A_UNITE(QZWATRN,mode10,10,RZWATRN),A68_398 ));
 /* line 734: */
A_CLOSURE( WZWATRN_remove_tfn, XZWATRN_remove_tfn, YZWATRN_remove_tfn );
(( YZWATRN_remove_tfn * ) ( WZWATRN_remove_tfn.nonlocals )) -> GZWATRN_remove_tfnprocs = GZWATRN_remove_tfnprocs;
(( YZWATRN_remove_tfn * ) ( WZWATRN_remove_tfn.nonlocals )) -> UZWATRN_tnull_procs = UZWATRN_tnull_procs;
 /* line 745: */
A_CLOSURE( LAXATRN_make_unitlink, MAXATRN_make_unitlink, NAXATRN_make_unitlink );
(( NAXATRN_make_unitlink * ) ( LAXATRN_make_unitlink.nonlocals )) -> DXVATRN_environ = (&DXVATRN_environ);
(( NAXATRN_make_unitlink * ) ( LAXATRN_make_unitlink.nonlocals )) -> GXVATRN_has_type_fntype = GXVATRN_has_type_fntype;
 /* line 870: */
TFXATRN_sort = 0;
 /* line 872: */
 /* line 873: */
A_CLOSURE( WFXATRN_anonymous, XFXATRN_anonymous, YFXATRN_anonymous );
(( YFXATRN_anonymous * ) ( WFXATRN_anonymous.nonlocals )) -> TFXATRN_sort = (&TFXATRN_sort);
SGXATRN = WFXATRN_anonymous ;
UGXATRN_coerce_ufn_procs = THJATRN_make_newtprocs(ZVVATRN_defaulttprocs, A_HVEC(TGXATRN,A_UNITE(RGXATRN,mode19,19,SGXATRN),A68_398 ));
 /* line 891: */
A_CLOSURE( XGXATRN_coerce_ufn, YGXATRN_coerce_ufn, ZGXATRN_coerce_ufn );
(( ZGXATRN_coerce_ufn * ) ( XGXATRN_coerce_ufn.nonlocals )) -> TFXATRN_sort = (&TFXATRN_sort);
(( ZGXATRN_coerce_ufn * ) ( XGXATRN_coerce_ufn.nonlocals )) -> UGXATRN_coerce_ufn_procs = UGXATRN_coerce_ufn_procs;
 /* line 897: */
A_CLOSURE( EHXATRN_unitlink_source, FHXATRN_unitlink_source, GHXATRN_unitlink_source );
(( GHXATRN_unitlink_source * ) ( EHXATRN_unitlink_source.nonlocals )) -> XGXATRN_coerce_ufn = XGXATRN_coerce_ufn;
 /* line 899: */
A_CLOSURE( KHXATRN_unitlink_sink, LHXATRN_unitlink_sink, MHXATRN_unitlink_sink );
(( MHXATRN_unitlink_sink * ) ( KHXATRN_unitlink_sink.nonlocals )) -> XGXATRN_coerce_ufn = XGXATRN_coerce_ufn;
 /* line 905: */
A_CLOSURE( THXATRN_fndec_fntype, UHXATRN_fndec_fntype, VHXATRN_fndec_fntype );
(( VHXATRN_fndec_fntype * ) ( THXATRN_fndec_fntype.nonlocals )) -> SFWATRN_remove_null_void = SFWATRN_remove_null_void;
(( VHXATRN_fndec_fntype * ) ( THXATRN_fndec_fntype.nonlocals )) -> Options = Options;
(( VHXATRN_fndec_fntype * ) ( THXATRN_fndec_fntype.nonlocals )) -> FYWATRN_remove_ufn = FYWATRN_remove_ufn;
(( VHXATRN_fndec_fntype * ) ( THXATRN_fndec_fntype.nonlocals )) -> WZWATRN_remove_tfn = WZWATRN_remove_tfn;
(( VHXATRN_fndec_fntype * ) ( THXATRN_fndec_fntype.nonlocals )) -> GXVATRN_has_type_fntype = GXVATRN_has_type_fntype;
(( VHXATRN_fndec_fntype * ) ( THXATRN_fndec_fntype.nonlocals )) -> JVWATRN_transform_unit = JVWATRN_transform_unit;
(( VHXATRN_fndec_fntype * ) ( THXATRN_fndec_fntype.nonlocals )) -> JHWATRN_extra_step = JHWATRN_extra_step;
(( VHXATRN_fndec_fntype * ) ( THXATRN_fndec_fntype.nonlocals )) -> FWVATRN_sysfault = FWVATRN_sysfault;
(( VHXATRN_fndec_fntype * ) ( THXATRN_fndec_fntype.nonlocals )) -> EXVATRN_environ_specs = (&EXVATRN_environ_specs);
(( VHXATRN_fndec_fntype * ) ( THXATRN_fndec_fntype.nonlocals )) -> ZOWATRN_transform_type = ZOWATRN_transform_type;
(( VHXATRN_fndec_fntype * ) ( THXATRN_fndec_fntype.nonlocals )) -> LAXATRN_make_unitlink = LAXATRN_make_unitlink;
(( VHXATRN_fndec_fntype * ) ( THXATRN_fndec_fntype.nonlocals )) -> XGXATRN_coerce_ufn = XGXATRN_coerce_ufn;
(( VHXATRN_fndec_fntype * ) ( THXATRN_fndec_fntype.nonlocals )) -> DXVATRN_environ = (&DXVATRN_environ);
(( VHXATRN_fndec_fntype * ) ( THXATRN_fndec_fntype.nonlocals )) -> QAWATRN_contains_diagnostics = QAWATRN_contains_diagnostics;
(( VHXATRN_fndec_fntype * ) ( THXATRN_fndec_fntype.nonlocals )) -> DWVATRN_nullnametype = DWVATRN_nullnametype;
(( VHXATRN_fndec_fntype * ) ( THXATRN_fndec_fntype.nonlocals )) -> EHXATRN_unitlink_source = EHXATRN_unitlink_source;
(( VHXATRN_fndec_fntype * ) ( THXATRN_fndec_fntype.nonlocals )) -> KHXATRN_unitlink_sink = KHXATRN_unitlink_sink;
(( VHXATRN_fndec_fntype * ) ( THXATRN_fndec_fntype.nonlocals )) -> NCWATRN_swap_tfn = NCWATRN_swap_tfn;
(( VHXATRN_fndec_fntype * ) ( THXATRN_fndec_fntype.nonlocals )) -> RBWATRN_swap_ufn = RBWATRN_swap_ufn;
 /* line 1658: */
A_CLOSURE( LOYATRN_typedec_fntype, MOYATRN_typedec_fntype, NOYATRN_typedec_fntype );
(( NOYATRN_typedec_fntype * ) ( LOYATRN_typedec_fntype.nonlocals )) -> GXVATRN_has_type_fntype = GXVATRN_has_type_fntype;
 /* line 1673: */
A_CLOSURE( XOYATRN_outerfn_fntype, YOYATRN_outerfn_fntype, ZOYATRN_outerfn_fntype );
(( ZOYATRN_outerfn_fntype * ) ( XOYATRN_outerfn_fntype.nonlocals )) -> EXVATRN_environ_specs = (&EXVATRN_environ_specs);
(( ZOYATRN_outerfn_fntype * ) ( XOYATRN_outerfn_fntype.nonlocals )) -> EYVATRN_closure_specs = EYVATRN_closure_specs;
(( ZOYATRN_outerfn_fntype * ) ( XOYATRN_outerfn_fntype.nonlocals )) -> LOYATRN_typedec_fntype = LOYATRN_typedec_fntype;
(( ZOYATRN_outerfn_fntype * ) ( XOYATRN_outerfn_fntype.nonlocals )) -> THXATRN_fndec_fntype = THXATRN_fndec_fntype;
(( ZOYATRN_outerfn_fntype * ) ( XOYATRN_outerfn_fntype.nonlocals )) -> OIWATRN_remove_named_fntype = OIWATRN_remove_named_fntype;
 /* line 1771: */
FTYATRN_changed = A68_FALSE;
 /* line 1772: */
GTYATRN_newclosure = Oldclosure;
 /* line 1773: */
HTYATRN_newptr = (&(GTYATRN_newclosure->Outers));
 /* line 1775: */
for ( ;; )
{ 
 /* line 1776: */
if ( !(((*HTYATRN_newptr)!=HBAATRN_nilouters)) ) break;
ITYATRN_o = (*(&((*HTYATRN_newptr)->Outer)));
 /* line 1777: */
DXVATRN_environ = ITYATRN_o.Environ;
 /* line 1778: */
 /* line 1779: */
 /* line 1780: */
if ( (ITYATRN_o.Sort==TKAATRN_outertype) )
{ 
JTYATRN_tdec = OPMATRN_get_outertype(ITYATRN_o);
 /* line 1781: */
A_CALLPROC(LOYATRN_typedec_fntype,(JTYATRN_tdec, &KTYATRN),(JTYATRN_tdec, &KTYATRN,(LOYATRN_typedec_fntype).nonlocals));
LTYATRN_tdc = KTYATRN;
 /* line 1782: */
MTYATRN.O = ITYATRN_o;
 /* line 1783: */
MTYATRN.C = LTYATRN_tdc.C;
} 
else
{ 
 /* line 1784: */
if ( (ITYATRN_o.Sort==VKAATRN_outerfn) )
{ 
 /* line 1785: */
if ( A_CALLPROC(AZVATRN_pre_pass_outerfn,(ITYATRN_o),(ITYATRN_o,(AZVATRN_pre_pass_outerfn).nonlocals)) )
{ 
 /* line 1786: */
A_CALLPROC(XOYATRN_outerfn_fntype,(ITYATRN_o, ZVVATRN_defaulttprocs, &NTYATRN),(ITYATRN_o, ZVVATRN_defaulttprocs, &NTYATRN,(XOYATRN_outerfn_fntype).nonlocals));
MTYATRN = NTYATRN;
} 
else
{ 
MTYATRN.O = ITYATRN_o;
 /* line 1787: */
 /* line 1788: */
MTYATRN.C = A68_FALSE;
} 
} 
else
{ 
MTYATRN.O = ITYATRN_o;
 /* line 1789: */
MTYATRN.C = A68_FALSE;
} 
} 
OTYATRN_oc = MTYATRN;
 /* line 1790: */
 /* line 1791: */
if ( OTYATRN_oc.C )
{ 
 /* line 1792: */
if ( !FTYATRN_changed )
{ 
FTYATRN_changed = A68_TRUE;
 /* line 1793: */
GTYATRN_newclosure = DPCATRN_copy_closure(GTYATRN_newclosure, Msg);
 /* line 1795: */
PTYATRN_place = (*(&((&((*HTYATRN_newptr)->Outer))->Closureno)));
 /* line 1796: */
HTYATRN_newptr = (&(GTYATRN_newclosure->Outers));
 /* line 1797: */
for ( ;; )
{ 
 /* line 1798: */
if ( !(((*(&((&((*HTYATRN_newptr)->Outer))->Closureno)))!=PTYATRN_place)) ) break;
HTYATRN_newptr = (&((*HTYATRN_newptr)->Rest));
}
 /* line 1799: */
} 
 /* line 1800: */
 /* line 1801: */
if ( (OTYATRN_oc.O.Sort==TKAATRN_outertype) )
{ 
 /* line 1803: */
RNCATRN_free_outers(HTYATRN_newptr, GTYATRN_newclosure, Msg);
} 
else
{ 
QTYATRN = (&((*HTYATRN_newptr)->Outer)) ;
(*QTYATRN) = OTYATRN_oc.O;
 /* line 1804: */
 /* line 1805: */
 /* line 1806: */
HTYATRN_newptr = (&((*HTYATRN_newptr)->Rest));
} 
} 
else
{ 
 /* line 1807: */
 /* line 1808: */
HTYATRN_newptr = (&((*HTYATRN_newptr)->Rest));
} 
}
 /* line 1809: */
RTYATRN.Cl = GTYATRN_newclosure;
 /* line 1810: */
RTYATRN.C = FTYATRN_changed;
STYATRN = RTYATRN;
} 
A_PROC_EXIT(transform_fntypes);
*ReturnedValue = (STYATRN);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void SUVATRN(void)   /* initialise DECS fntype */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/fntype.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/ostools/assoc/mfiles/options.m","./mfiles/transformprocs.m","./mfiles/closureprocs.m","./mfiles/modeprocs.m","./mfiles/assmodes.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_46  CVVATRN;  /* OPERATORS - scalar -> [] or VEC[] */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
BAAAOST();   /* USE options */
IHJATRN();   /* USE transformprocs */
SKCATRN();   /* USE closureprocs */
HNMATRN();   /* USE modeprocs */
BAAATRN();   /* USE assmodes */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/transform/assoc/./a68files/fntype.a68";
A_config.translation_time = "Tue Apr  4 10:03:24 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "RUVATRN (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:03:24 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS fntype);
UEAALIB_a68config(LGAALIB_configinfo, WUVATRN);
 /* line 78: */
 /* line 80: */
 /* line 81: */
DVVATRN_fntype_options = A_HVEC(CVVATRN,BVVATRN,A68_VC );
 /* line 84: */
 /* line 1813: */
 /* line 1814: */
 /* line 1815: */
/*SKIP*/;
A_PROC_EXIT(DECS fntype);
} 
#undef NL
/* end of translation of ./a68files/fntype.a68 */
