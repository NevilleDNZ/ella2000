
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
/* UNAME:KFPBTRN */
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
struct A68t113 ;

A_PROCEDURE(A68_VOID ,A68t112,(struct A68t113 ),(struct A68t113 ,void *));
typedef struct A68t112  A68_112 ;    /* PROC(MODE113) VOID */
struct A68t113 { A68_INT mode; union {
A68_VC  mode1;
struct A68t32  mode2;
struct A68t54  mode3;
struct A68t53  mode4;
} data; };
typedef struct A68t113  A68_113 ;    /* UNION(REF MODE26,REF MODE32,REF MODE54,REF MODE53)  */

A_PROCEDURE(A68_INT ,A68t114,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t115,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t115  A68_115 ;    /* PROC(BITS,BITS) BITS */
struct A68t117 ;

A_PROCEDURE(A68_VOID ,A68t116,(struct A68t117 ,A68_INT ),(struct A68t117 ,A68_INT ,void *));
typedef struct A68t116  A68_116 ;    /* PROC(MODE117,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t117,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t117  A68_117 ;    /* PROC(CHAR) VOID */
struct A68t119 ;

A_PROCEDURE(A68_INT ,A68t118,(struct A68t119 ),(struct A68t119 ,void *));
typedef struct A68t118  A68_118 ;    /* PROC(MODE119) INT */

A_PROCEDURE(A68_CHAR ,A68t119,(void),(void *));
typedef struct A68t119  A68_119 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t120,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t120  A68_120 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_INT ,A68t121,(void),(void *));
typedef struct A68t121  A68_121 ;    /* PROC INT */

A_PROCEDURE(A68_INT ,A68t122,(A68_INT ),(A68_INT ,void *));
typedef struct A68t122  A68_122 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t123,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t123  A68_123 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t124,(A68_VC *),(A68_VC *,void *));
typedef struct A68t124  A68_124 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_INT ,A68t125,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t125  A68_125 ;    /* PROC(INT,INT,REF BOOL) INT */

A_PROCEDURE(A68_BOOL ,A68t126,(A68_VC ,A68_INT *,struct A68t97 ),(A68_VC ,A68_INT *,struct A68t97 ,void *));
typedef struct A68t126  A68_126 ;    /* PROC(MODE26,REF INT,MODE97) BOOL */
struct A68t127{
A68_VC  Id;
struct A68t127 * Rest;
};
typedef struct A68t127  A68_127 ;    /* STRUCT(REF MODE26,REF MODE127)  */
struct A68t128{
A68_INT  Int;
A_PAD_INT(PAD_24)
struct A68t128 * Rest;
};
typedef struct A68t128  A68_128 ;    /* STRUCT(INT,REF MODE128)  */
struct A68t129 { A68_INT mode; union {
struct A68t130 * mode1;
struct A68t131 * mode2;
struct A68t132 * mode3;
struct A68t133 * mode4;
struct A68t134 * mode5;
} data; };
typedef struct A68t129  A68_129 ;    /* UNION(REF MODE130,REF MODE131,REF MODE132,REF MODE133,REF MODE134)  */
struct A68t130{
A68_INT  Attrno;
A_PAD_INT(PAD_25)
};
typedef struct A68t130  A68_130 ;    /* STRUCT(INT)  */
struct A68t131{
A68_VC  Classname;
struct A68t127 * Strings;
};
typedef struct A68t131  A68_131 ;    /* STRUCT(REF MODE26,REF MODE127)  */
struct A68t132{
struct A68t129  Elem;
struct A68t132 * Rest;
};
typedef struct A68t132  A68_132 ;    /* STRUCT(MODE129,REF MODE132)  */
struct A68t133{
struct A68t129  Attr;
};
typedef struct A68t133  A68_133 ;    /* STRUCT(MODE129)  */
struct A68t134{
A68_INT  Attrnull;
A_PAD_INT(PAD_26)
};
typedef struct A68t134  A68_134 ;    /* STRUCT(INT)  */
struct A68t135{
A68_INT  Sort;
A_PAD_INT(PAD_27)
A68_VC  Attrname;
struct A68t129  Value;
struct A68t136 * Usage;
};
typedef struct A68t135  A68_135 ;    /* STRUCT(INT,REF MODE26,MODE129,REF MODE136)  */
struct A68t136{
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
typedef struct A68t136  A68_136 ;    /* STRUCT(INT,INT,INT,INT,BOOL,BOOL)  */
struct A68t137{
struct A68t129  Tag;
};
typedef struct A68t137  A68_137 ;    /* STRUCT(MODE129)  */
struct A68t138 { A68_INT mode; union {
struct A68t139 * mode1;
struct A68t140 * mode2;
struct A68t141 * mode3;
struct A68t142 * mode4;
struct A68t143 * mode5;
struct A68t144 * mode6;
struct A68t145 * mode7;
struct A68t146 * mode8;
struct A68t147 * mode9;
struct A68t148 * mode10;
} data; };
typedef struct A68t138  A68_138 ;    /* UNION(REF MODE139,REF MODE140,REF MODE141,REF MODE142,REF MODE143,REF MODE144,REF MODE145,REF MODE146,REF MODE147,REF MODE148)  */
struct A68t139{
A68_INT  Int;
A_PAD_INT(PAD_34)
A68_VC  Text;
};
typedef struct A68t139  A68_139 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t140{
A68_INT  Sort;
A_PAD_INT(PAD_35)
struct A68t138  Test;
struct A68t138  Standard;
};
typedef struct A68t140  A68_140 ;    /* STRUCT(INT,MODE138,MODE138)  */
struct A68t141{
A68_INT  Nameno;
A_PAD_INT(PAD_36)
};
typedef struct A68t141  A68_141 ;    /* STRUCT(INT)  */
struct A68t142{
A68_INT  Intno;
A_PAD_INT(PAD_37)
};
typedef struct A68t142  A68_142 ;    /* STRUCT(INT)  */
struct A68t143{
struct A68t138  Left;
A68_INT  Sort;
A_PAD_INT(PAD_38)
struct A68t138  Right;
};
typedef struct A68t143  A68_143 ;    /* STRUCT(MODE138,INT,MODE138)  */
struct A68t144{
A68_INT  Sort;
A_PAD_INT(PAD_39)
struct A68t138  Right;
};
typedef struct A68t144  A68_144 ;    /* STRUCT(INT,MODE138)  */
struct A68t145{
struct A68t138  Cond;
struct A68t138  True;
struct A68t138  False;
};
typedef struct A68t145  A68_145 ;    /* STRUCT(MODE138,MODE138,MODE138)  */
struct A68t146{
struct A68t138  Formula;
};
typedef struct A68t146  A68_146 ;    /* STRUCT(MODE138)  */
struct A68t147{
A68_INT  Macparno;
A_PAD_INT(PAD_40)
};
typedef struct A68t147  A68_147 ;    /* STRUCT(INT)  */
struct A68t148{
A68_INT  Fnull;
A_PAD_INT(PAD_41)
};
typedef struct A68t148  A68_148 ;    /* STRUCT(INT)  */
struct A68t149{
struct A68t138  Tag;
};
typedef struct A68t149  A68_149 ;    /* STRUCT(MODE138)  */
struct A68t150{
struct A68t138  Formula;
struct A68t150 * Rest;
};
typedef struct A68t150  A68_150 ;    /* STRUCT(MODE138,REF MODE150)  */
struct A68t153{
struct A68t138  Lwb;
struct A68t138  Upb;
};
typedef struct A68t153  A68_153 ;    /* STRUCT(MODE138,MODE138)  */
struct A68t152 { A68_INT mode; union {
struct A68t139 * mode1;
struct A68t140 * mode2;
struct A68t141 * mode3;
struct A68t142 * mode4;
struct A68t143 * mode5;
struct A68t144 * mode6;
struct A68t145 * mode7;
struct A68t146 * mode8;
struct A68t147 * mode9;
struct A68t148 * mode10;
struct A68t153  mode11;
} data; };
typedef struct A68t152  A68_152 ;    /* UNION(REF MODE139,REF MODE140,REF MODE141,REF MODE142,REF MODE143,REF MODE144,REF MODE145,REF MODE146,REF MODE147,REF MODE148,MODE153)  */
struct A68t151{
A68_INT  Sort;
A_PAD_INT(PAD_42)
A68_VC  Intname;
struct A68t129  Attr;
struct A68t152  Value;
struct A68t136 * Usage;
};
typedef struct A68t151  A68_151 ;    /* STRUCT(INT,REF MODE26,MODE129,MODE152,REF MODE136)  */
struct A68t154 { A68_INT mode; union {
struct A68t155 * mode1;
struct A68t156 * mode2;
struct A68t157 * mode3;
struct A68t158 * mode4;
struct A68t159 * mode5;
struct A68t160 * mode6;
struct A68t161 * mode7;
struct A68t147 * mode8;
struct A68t162 * mode9;
} data; };
typedef struct A68t154  A68_154 ;    /* UNION(REF MODE155,REF MODE156,REF MODE157,REF MODE158,REF MODE159,REF MODE160,REF MODE161,REF MODE147,REF MODE162)  */
struct A68t155{
A68_INT  Typeno;
A_PAD_INT(PAD_43)
};
typedef struct A68t155  A68_155 ;    /* STRUCT(INT)  */
struct A68t156{
struct A68t138  Size;
struct A68t154  Elem;
};
typedef struct A68t156  A68_156 ;    /* STRUCT(MODE138,MODE154)  */
struct A68t157{
struct A68t154  Elem;
struct A68t157 * Rest;
};
typedef struct A68t157  A68_157 ;    /* STRUCT(MODE154,REF MODE157)  */
struct A68t158{
struct A68t154  From;
struct A68t154  To;
};
typedef struct A68t158  A68_158 ;    /* STRUCT(MODE154,MODE154)  */
struct A68t159{
struct A68t154  Type;
};
typedef struct A68t159  A68_159 ;    /* STRUCT(MODE154)  */
struct A68t160{
struct A68t138  Size;
struct A68t154  Char;
};
typedef struct A68t160  A68_160 ;    /* STRUCT(MODE138,MODE154)  */
struct A68t161{
A68_INT  Tvoid;
A_PAD_INT(PAD_44)
};
typedef struct A68t161  A68_161 ;    /* STRUCT(INT)  */
struct A68t162{
A68_INT  Tnull;
A_PAD_INT(PAD_45)
};
typedef struct A68t162  A68_162 ;    /* STRUCT(INT)  */
struct A68t163{
struct A68t154  Tag;
};
typedef struct A68t163  A68_163 ;    /* STRUCT(MODE154)  */
struct A68t164{
A68_VC  Tagname;
A68_VC  Chars;
};
typedef struct A68t164  A68_164 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t165{
A68_VC  Altname;
struct A68t154  Assoc;
};
typedef struct A68t165  A68_165 ;    /* STRUCT(REF MODE26,MODE154)  */
struct A68t166{
A68_VC  Tagname;
struct A68t153  Range;
};
typedef struct A68t166  A68_166 ;    /* STRUCT(REF MODE26,MODE153)  */
A_VECTOR(struct A68t165 ,A68t168);
typedef struct A68t168  A68_168 ;    /* VECTOR [] MODE165 */
struct A68t167 { A68_INT mode; union {
struct A68t168  mode1;
struct A68t166 * mode2;
struct A68t163 * mode3;
struct A68t164 * mode4;
} data; };
typedef struct A68t167  A68_167 ;    /* UNION(REF MODE168,REF MODE166,REF MODE163,REF MODE164)  */
struct A68t169{
A68_INT  Sort;
A_PAD_INT(PAD_46)
A68_VC  Typename;
struct A68t129  Attr;
struct A68t167  Body;
struct A68t136 * Usage;
};
typedef struct A68t169  A68_169 ;    /* STRUCT(INT,REF MODE26,MODE129,MODE167,REF MODE136)  */
struct A68t170{
A68_INT  Constno;
A_PAD_INT(PAD_47)
};
typedef struct A68t170  A68_170 ;    /* STRUCT(INT)  */
struct A68t171{
A68_INT  Typeno;
A_PAD_INT(PAD_48)
A68_INT  Primno;
A_PAD_INT(PAD_49)
};
typedef struct A68t171  A68_171 ;    /* STRUCT(INT,INT)  */
struct A68t172{
A68_INT  Typeno;
A_PAD_INT(PAD_50)
struct A68t138  Index;
};
typedef struct A68t172  A68_172 ;    /* STRUCT(INT,MODE138)  */
struct A68t173{
A68_INT  Typeno;
A_PAD_INT(PAD_51)
struct A68t153  Range;
};
typedef struct A68t173  A68_173 ;    /* STRUCT(INT,MODE153)  */
struct A68t174{
struct A68t154  Querytype;
};
typedef struct A68t174  A68_174 ;    /* STRUCT(MODE154)  */
struct A68t176 { A68_INT mode; union {
struct A68t170 * mode1;
struct A68t171 * mode2;
struct A68t172 * mode3;
struct A68t174 * mode4;
struct A68t177 * mode5;
struct A68t178 * mode6;
struct A68t159 * mode7;
struct A68t173 * mode8;
struct A68t179 * mode9;
struct A68t180 * mode10;
struct A68t181 * mode11;
struct A68t182 * mode12;
struct A68t183 * mode13;
struct A68t184 * mode14;
struct A68t185 * mode15;
struct A68t186 * mode16;
struct A68t187 * mode17;
struct A68t188 * mode18;
struct A68t189 * mode19;
struct A68t190 * mode20;
struct A68t191 * mode21;
struct A68t192 * mode22;
struct A68t193 * mode23;
struct A68t194 * mode24;
struct A68t195 * mode25;
struct A68t196 * mode26;
struct A68t197 * mode27;
struct A68t198 * mode28;
struct A68t199 * mode29;
struct A68t200 * mode30;
struct A68t201 * mode31;
struct A68t202 * mode32;
struct A68t203 * mode33;
struct A68t204 * mode34;
} data; };
typedef struct A68t176  A68_176 ;    /* UNION(REF MODE170,REF MODE171,REF MODE172,REF MODE174,REF MODE177,REF MODE178,REF MODE159,REF MODE173,REF MODE179,REF MODE180,REF MODE181,REF MODE182,REF MODE183,REF MODE184,REF MODE185,REF MODE186,REF MODE187,REF MODE188,REF MODE189,REF MODE190,REF MODE191,REF MODE192,REF MODE193,REF MODE194,REF MODE195,REF MODE196,REF MODE197,REF MODE198,REF MODE199,REF MODE200,REF MODE201,REF MODE202,REF MODE203,REF MODE204)  */
struct A68t175{
A68_INT  Sort;
A_PAD_INT(PAD_52)
A68_VC  Constname;
struct A68t129  Attr;
struct A68t176  Value;
struct A68t136 * Usage;
};
typedef struct A68t175  A68_175 ;    /* STRUCT(INT,REF MODE26,MODE129,MODE176,REF MODE136)  */
struct A68t177{
A68_INT  Typeno;
A_PAD_INT(PAD_53)
struct A68t32  String;
};
typedef struct A68t177  A68_177 ;    /* STRUCT(INT,REF MODE32)  */
struct A68t178{
A68_INT  Cvoid;
A_PAD_INT(PAD_54)
};
typedef struct A68t178  A68_178 ;    /* STRUCT(INT)  */
struct A68t179{
A68_INT  Typeno;
A_PAD_INT(PAD_55)
A68_INT  Firstno;
A_PAD_INT(PAD_56)
A68_INT  Lastno;
A_PAD_INT(PAD_57)
};
typedef struct A68t179  A68_179 ;    /* STRUCT(INT,INT,INT)  */
struct A68t180{
struct A68t176  Alt;
struct A68t180 * Rest;
};
typedef struct A68t180  A68_180 ;    /* STRUCT(MODE176,REF MODE180)  */
struct A68t181{
A68_INT  Sort;
A_PAD_INT(PAD_58)
A68_INT  Nameno;
A_PAD_INT(PAD_59)
};
typedef struct A68t181  A68_181 ;    /* STRUCT(INT,INT)  */
struct A68t182{
struct A68t176  Sink;
struct A68t176  Source;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(MODE176,MODE176)  */
struct A68t183{
A68_INT  Typeno;
A_PAD_INT(PAD_60)
A68_INT  Altno;
A_PAD_INT(PAD_61)
struct A68t176  Assoc;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(INT,INT,MODE176)  */
struct A68t184{
struct A68t176  Extract;
A68_INT  Typeno;
A_PAD_INT(PAD_62)
A68_INT  Altno;
A_PAD_INT(PAD_63)
};
typedef struct A68t184  A68_184 ;    /* STRUCT(MODE176,INT,INT)  */
struct A68t185{
struct A68t176  Unit;
A68_INT  Fnno;
A_PAD_INT(PAD_64)
A68_INT  Nameno;
A_PAD_INT(PAD_65)
};
typedef struct A68t185  A68_185 ;    /* STRUCT(MODE176,INT,INT)  */
struct A68t186{
struct A68t176  Unit;
struct A68t138  Index;
};
typedef struct A68t186  A68_186 ;    /* STRUCT(MODE176,MODE138)  */
struct A68t187{
struct A68t176  Unit;
struct A68t153  Range;
};
typedef struct A68t187  A68_187 ;    /* STRUCT(MODE176,MODE153)  */
struct A68t188{
struct A68t176  Unit;
struct A68t176  Index;
};
typedef struct A68t188  A68_188 ;    /* STRUCT(MODE176,MODE176)  */
struct A68t189{
struct A68t176  Unit;
struct A68t176  Index;
struct A68t176  From;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(MODE176,MODE176,MODE176)  */
struct A68t190{
struct A68t138  Size;
struct A68t176  Elem;
};
typedef struct A68t190  A68_190 ;    /* STRUCT(MODE138,MODE176)  */
struct A68t191{
struct A68t176  Elem;
struct A68t191 * Rest;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(MODE176,REF MODE191)  */
struct A68t192{
A68_BOOL  String;
A_PAD_BOOL(PAD_66)
A68_INT  Sort;
A_PAD_INT(PAD_67)
struct A68t176  Left;
struct A68t176  Right;
};
typedef struct A68t192  A68_192 ;    /* STRUCT(BOOL,INT,MODE176,MODE176)  */
A_VECTOR(struct A68t219 ,A68t218);
typedef struct A68t218  A68_218 ;    /* VECTOR [] MODE219 */
struct A68t221{
struct A68t176  Tag;
};
typedef struct A68t221  A68_221 ;    /* STRUCT(MODE176)  */
struct A68t216{
A68_INT  Fnno;
A_PAD_INT(PAD_68)
struct A68t218  Macparams;
struct A68t129  Attr;
};
typedef struct A68t216  A68_216 ;    /* STRUCT(INT,REF MODE218,MODE129)  */
struct A68t220 { A68_INT mode; union {
struct A68t137  mode1;
struct A68t149  mode2;
struct A68t163  mode3;
struct A68t221  mode4;
struct A68t216  mode5;
} data; };
typedef struct A68t220  A68_220 ;    /* UNION(MODE137,MODE149,MODE163,MODE221,MODE216)  */
struct A68t219{
A68_INT  Sort;
A_PAD_INT(PAD_69)
struct A68t220  Param;
};
typedef struct A68t219  A68_219 ;    /* STRUCT(INT,MODE220)  */
struct A68t193{
struct A68t216  Inst;
struct A68t176  Right;
};
typedef struct A68t193  A68_193 ;    /* STRUCT(MODE216,MODE176)  */
struct A68t194{
struct A68t176  Left;
struct A68t216  Inst;
struct A68t176  Right;
};
typedef struct A68t194  A68_194 ;    /* STRUCT(MODE176,MODE216,MODE176)  */
struct A68t195{
struct A68t176  Input;
struct A68t236 * Choices;
};
typedef struct A68t195  A68_195 ;    /* STRUCT(MODE176,REF MODE236)  */
struct A68t196{
struct A68t138  Cond;
struct A68t176  True;
struct A68t176  False;
};
typedef struct A68t196  A68_196 ;    /* STRUCT(MODE138,MODE176,MODE176)  */
struct A68t197{
struct A68t138  Repl;
struct A68t176  Body;
};
typedef struct A68t197  A68_197 ;    /* STRUCT(MODE138,MODE176)  */
struct A68t198{
struct A68t224 * Body;
struct A68t176  Output;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(REF MODE224,MODE176)  */
struct A68t199{
struct A68t205 * Body;
struct A68t176  Output;
};
typedef struct A68t199  A68_199 ;    /* STRUCT(REF MODE205,MODE176)  */
struct A68t200{
struct A68t176  Unit;
struct A68t129  Attr;
};
typedef struct A68t200  A68_200 ;    /* STRUCT(MODE176,MODE129)  */
struct A68t201{
struct A68t176  Unit;
struct A68t140  Check;
};
typedef struct A68t201  A68_201 ;    /* STRUCT(MODE176,MODE140)  */
struct A68t202{
struct A68t176  Unit;
};
typedef struct A68t202  A68_202 ;    /* STRUCT(MODE176)  */
struct A68t203{
struct A68t138  Size;
struct A68t176  Char;
};
typedef struct A68t203  A68_203 ;    /* STRUCT(MODE138,MODE176)  */
struct A68t204{
A68_INT  Unull;
A_PAD_INT(PAD_70)
};
typedef struct A68t204  A68_204 ;    /* STRUCT(INT)  */
struct A68t207{
A68_INT  Fnno;
A_PAD_INT(PAD_71)
};
typedef struct A68t207  A68_207 ;    /* STRUCT(INT)  */
struct A68t206 { A68_INT mode; union {
struct A68t130  mode1;
struct A68t142  mode2;
struct A68t155  mode3;
struct A68t170  mode4;
struct A68t207  mode5;
struct A68t208 * mode6;
struct A68t209 * mode7;
struct A68t210 * mode8;
struct A68t211 * mode9;
struct A68t212 * mode10;
struct A68t213 * mode11;
struct A68t214 * mode12;
} data; };
typedef struct A68t206  A68_206 ;    /* UNION(MODE130,MODE142,MODE155,MODE170,MODE207,REF MODE208,REF MODE209,REF MODE210,REF MODE211,REF MODE212,REF MODE213,REF MODE214)  */
struct A68t205{
struct A68t206  Step;
struct A68t205 * Rest;
};
typedef struct A68t205  A68_205 ;    /* STRUCT(MODE206,REF MODE205)  */
struct A68t208{
struct A68t138  Cond;
struct A68t222 * Print;
};
typedef struct A68t208  A68_208 ;    /* STRUCT(MODE138,REF MODE222)  */
struct A68t209{
struct A68t138  Cond;
struct A68t222 * Fault;
};
typedef struct A68t209  A68_209 ;    /* STRUCT(MODE138,REF MODE222)  */
struct A68t210{
struct A68t217 * Letnames;
struct A68t176  Unit;
};
typedef struct A68t210  A68_210 ;    /* STRUCT(REF MODE217,MODE176)  */
struct A68t211{
struct A68t150 * Sizes;
struct A68t216  Inst;
struct A68t217 * Makenames;
};
typedef struct A68t211  A68_211 ;    /* STRUCT(REF MODE150,MODE216,REF MODE217)  */
struct A68t212{
struct A68t176  From;
struct A68t176  To;
};
typedef struct A68t212  A68_212 ;    /* STRUCT(MODE176,MODE176)  */
struct A68t213{
struct A68t150 * Repls;
struct A68t215 * Joins;
};
typedef struct A68t213  A68_213 ;    /* STRUCT(REF MODE150,REF MODE215)  */
struct A68t214{
A68_INT  Stepnull;
A_PAD_INT(PAD_72)
};
typedef struct A68t214  A68_214 ;    /* STRUCT(INT)  */
struct A68t215{
struct A68t212  Join;
struct A68t215 * Rest;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(MODE212,REF MODE215)  */
struct A68t217{
A68_INT  Nameno;
A_PAD_INT(PAD_73)
struct A68t217 * Rest;
};
typedef struct A68t217  A68_217 ;    /* STRUCT(INT,REF MODE217)  */
struct A68t223 { A68_INT mode; union {
A68_VC  mode1;
struct A68t149 * mode2;
} data; };
typedef struct A68t223  A68_223 ;    /* UNION(REF MODE26,REF MODE149)  */
struct A68t222{
struct A68t223  Item;
struct A68t222 * Rest;
};
typedef struct A68t222  A68_222 ;    /* STRUCT(MODE223,REF MODE222)  */
struct A68t225 { A68_INT mode; union {
struct A68t130  mode1;
struct A68t142  mode2;
struct A68t155  mode3;
struct A68t170  mode4;
struct A68t207  mode5;
struct A68t208 * mode6;
struct A68t209 * mode7;
struct A68t226 * mode8;
struct A68t227 * mode9;
struct A68t228 * mode10;
struct A68t229 * mode11;
struct A68t230 * mode12;
struct A68t231 * mode13;
struct A68t232 * mode14;
struct A68t233 * mode15;
struct A68t224 * mode16;
struct A68t234 * mode17;
} data; };
typedef struct A68t225  A68_225 ;    /* UNION(MODE130,MODE142,MODE155,MODE170,MODE207,REF MODE208,REF MODE209,REF MODE226,REF MODE227,REF MODE228,REF MODE229,REF MODE230,REF MODE231,REF MODE232,REF MODE233,REF MODE224,REF MODE234)  */
struct A68t224{
struct A68t225  Step;
struct A68t224 * Rest;
};
typedef struct A68t224  A68_224 ;    /* STRUCT(MODE225,REF MODE224)  */
struct A68t226{
struct A68t210  Seqlet;
};
typedef struct A68t226  A68_226 ;    /* STRUCT(MODE210)  */
struct A68t227{
struct A68t210  Seqvar;
};
typedef struct A68t227  A68_227 ;    /* STRUCT(MODE210)  */
struct A68t228{
struct A68t217 * Pvarnames;
struct A68t176  Init;
};
typedef struct A68t228  A68_228 ;    /* STRUCT(REF MODE217,MODE176)  */
struct A68t229{
struct A68t176  To;
struct A68t176  From;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(MODE176,MODE176)  */
struct A68t230{
struct A68t176  Input;
struct A68t235 * Choices;
};
typedef struct A68t230  A68_230 ;    /* STRUCT(MODE176,REF MODE235)  */
struct A68t231{
struct A68t138  Cond;
struct A68t225  True;
struct A68t225  False;
};
typedef struct A68t231  A68_231 ;    /* STRUCT(MODE138,MODE225,MODE225)  */
struct A68t232{
struct A68t138  Repl;
struct A68t225  Body;
};
typedef struct A68t232  A68_232 ;    /* STRUCT(MODE138,MODE225)  */
struct A68t233{
A68_INT  Seqnull;
A_PAD_INT(PAD_74)
};
typedef struct A68t233  A68_233 ;    /* STRUCT(INT)  */
struct A68t234{
struct A68t138  Size;
struct A68t225  Elem;
};
typedef struct A68t234  A68_234 ;    /* STRUCT(MODE138,MODE225)  */
struct A68t235{
A68_BOOL  Check;
A_PAD_BOOL(PAD_75)
A68_INT  Sort;
A_PAD_INT(PAD_76)
struct A68t176  Test;
struct A68t225  Output;
struct A68t235 * Rest;
};
typedef struct A68t235  A68_235 ;    /* STRUCT(BOOL,INT,MODE176,MODE225,REF MODE235)  */
struct A68t236{
A68_BOOL  Check;
A_PAD_BOOL(PAD_77)
A68_INT  Sort;
A_PAD_INT(PAD_78)
struct A68t176  Test;
struct A68t176  Output;
struct A68t236 * Rest;
};
typedef struct A68t236  A68_236 ;    /* STRUCT(BOOL,INT,MODE176,MODE176,REF MODE236)  */
struct A68t237 { A68_INT mode; union {
struct A68t130  mode1;
struct A68t142  mode2;
struct A68t155  mode3;
struct A68t170  mode4;
struct A68t207  mode5;
} data; };
typedef struct A68t237  A68_237 ;    /* UNION(MODE130,MODE142,MODE155,MODE170,MODE207)  */
struct A68t238{
A68_BOOL  Biop;
A_PAD_BOOL(PAD_79)
A68_VC  Name;
struct A68t218  Macparams;
};
typedef struct A68t238  A68_238 ;    /* STRUCT(BOOL,REF MODE26,REF MODE218)  */
struct A68t239{
struct A68t138  Output;
};
typedef struct A68t239  A68_239 ;    /* STRUCT(MODE138)  */
struct A68t240{
A68_INT  Reform;
A_PAD_INT(PAD_80)
};
typedef struct A68t240  A68_240 ;    /* STRUCT(INT)  */
struct A68t241{
A68_VC  Name;
A68_INT  Contextno;
A_PAD_INT(PAD_81)
struct A68t111  Ctname;
};
typedef struct A68t241  A68_241 ;    /* STRUCT(REF MODE26,INT,MODE111)  */
struct A68t242{
A68_INT  Sort;
A_PAD_INT(PAD_82)
struct A68t176  Init;
struct A68t138  Ambigtime;
struct A68t176  Ambig;
struct A68t138  Delaytime;
};
typedef struct A68t242  A68_242 ;    /* STRUCT(INT,MODE176,MODE138,MODE176,MODE138)  */
struct A68t243{
struct A68t176  Init;
struct A68t138  Delaytime;
};
typedef struct A68t243  A68_243 ;    /* STRUCT(MODE176,MODE138)  */
struct A68t244{
struct A68t176  Init;
};
typedef struct A68t244  A68_244 ;    /* STRUCT(MODE176)  */
struct A68t245{
A68_INT  Sort;
A_PAD_INT(PAD_83)
struct A68t138  Interval;
struct A68t176  Init;
struct A68t138  Skew;
};
typedef struct A68t245  A68_245 ;    /* STRUCT(INT,MODE138,MODE176,MODE138)  */
struct A68t246{
A68_BOOL  Faster;
A_PAD_BOOL(PAD_84)
A68_INT  Sort;
A_PAD_INT(PAD_85)
struct A68t216  Inst;
struct A68t138  Scale;
struct A68t176  Init;
struct A68t138  Skew;
};
typedef struct A68t246  A68_246 ;    /* STRUCT(BOOL,INT,MODE216,MODE138,MODE176,MODE138)  */
struct A68t248 { A68_INT mode; union {
struct A68t221 * mode1;
struct A68t238 * mode2;
struct A68t239 * mode3;
struct A68t240 * mode4;
struct A68t241 * mode5;
struct A68t242 * mode6;
struct A68t243 * mode7;
struct A68t244 * mode8;
struct A68t245 * mode9;
struct A68t246 * mode10;
struct A68t247 * mode11;
struct A68t249 * mode12;
} data; };
typedef struct A68t248  A68_248 ;    /* UNION(REF MODE221,REF MODE238,REF MODE239,REF MODE240,REF MODE241,REF MODE242,REF MODE243,REF MODE244,REF MODE245,REF MODE246,REF MODE247,REF MODE249)  */
struct A68t247{
struct A68t128 * Joincheck;
A68_BOOL  Check;
A_PAD_BOOL(PAD_86)
struct A68t248  Fnbody;
};
typedef struct A68t247  A68_247 ;    /* STRUCT(REF MODE128,BOOL,MODE248)  */
struct A68t249{
A68_INT  Bodynull;
A_PAD_INT(PAD_87)
};
typedef struct A68t249  A68_249 ;    /* STRUCT(INT)  */
struct A68t250{
A68_INT  Sort;
A_PAD_INT(PAD_88)
struct A68t237  Spec;
};
typedef struct A68t250  A68_250 ;    /* STRUCT(INT,MODE237)  */
struct A68t251{
A68_VC  Name;
struct A68t154  Type;
struct A68t129  Attr;
};
typedef struct A68t251  A68_251 ;    /* STRUCT(REF MODE26,MODE154,MODE129)  */
A_VECTOR(struct A68t250 ,A68t253);
typedef struct A68t253  A68_253 ;    /* VECTOR [] MODE250 */
A_VECTOR(struct A68t251 ,A68t254);
typedef struct A68t254  A68_254 ;    /* VECTOR [] MODE251 */
struct A68t252{
A68_INT  Sort;
A_PAD_INT(PAD_89)
A68_BOOL  Macro;
A_PAD_BOOL(PAD_90)
A68_VC  Fnname;
struct A68t253  Macspecs;
struct A68t129  Attr;
struct A68t217 * Inputs;
struct A68t217 * Outputs;
struct A68t254  Nametypes;
struct A68t248  Fnbody;
struct A68t136 * Usage;
};
typedef struct A68t252  A68_252 ;    /* STRUCT(INT,BOOL,REF MODE26,REF MODE253,MODE129,REF MODE217,REF MODE217,REF MODE254,MODE248,REF MODE136)  */
A_VECTOR(struct A68t135 *,A68t256);
typedef struct A68t256  A68_256 ;    /* VECTOR [] REF MODE135 */
A_VECTOR(struct A68t151 *,A68t257);
typedef struct A68t257  A68_257 ;    /* VECTOR [] REF MODE151 */
A_VECTOR(struct A68t169 *,A68t258);
typedef struct A68t258  A68_258 ;    /* VECTOR [] REF MODE169 */
A_VECTOR(struct A68t175 *,A68t259);
typedef struct A68t259  A68_259 ;    /* VECTOR [] REF MODE175 */
A_VECTOR(struct A68t252 *,A68t260);
typedef struct A68t260  A68_260 ;    /* VECTOR [] REF MODE252 */
struct A68t255{
struct A68t256  Attrs;
struct A68t257  Ints;
struct A68t258  Types;
struct A68t259  Consts;
struct A68t260  Fns;
};
typedef struct A68t255  A68_255 ;    /* STRUCT(REF MODE256,REF MODE257,REF MODE258,REF MODE259,REF MODE260)  */
struct A68t261{
A68_INT  Closureno;
A_PAD_INT(PAD_91)
A68_INT  Sort;
A_PAD_INT(PAD_92)
struct A68t255 * Environ;
};
typedef struct A68t261  A68_261 ;    /* STRUCT(INT,INT,REF MODE255)  */
struct A68t262{
struct A68t261  Outer;
struct A68t262 * Rest;
};
typedef struct A68t262  A68_262 ;    /* STRUCT(MODE261,REF MODE262)  */
A_VECTOR(struct A68t262 ,A68t264);
typedef struct A68t264  A68_264 ;    /* VECTOR [] MODE262 */
struct A68t263{
struct A68t264  Outers;
struct A68t263 * Rest;
};
typedef struct A68t263  A68_263 ;    /* STRUCT(REF MODE264,REF MODE263)  */
struct A68t265{
A68_INT  Max_closureno;
A_PAD_INT(PAD_93)
struct A68t262 * Outers;
struct A68t262 * Freelist;
struct A68t263 * Outerslist;
};
typedef struct A68t265  A68_265 ;    /* STRUCT(INT,REF MODE262,REF MODE262,REF MODE263)  */
A_VECTOR(struct A68t262 *,A68t266);
typedef struct A68t266  A68_266 ;    /* VECTOR [] REF MODE262 */

A_PROCEDURE(struct A68t141 *,A68t267,(A68_INT ),(A68_INT ,void *));
typedef struct A68t267  A68_267 ;    /* PROC(INT) REF MODE141 */

A_PROCEDURE(struct A68t142 *,A68t268,(A68_INT ),(A68_INT ,void *));
typedef struct A68t268  A68_268 ;    /* PROC(INT) REF MODE142 */

A_PROCEDURE(struct A68t146 *,A68t269,(struct A68t138 ),(struct A68t138 ,void *));
typedef struct A68t269  A68_269 ;    /* PROC(MODE138) REF MODE146 */

A_PROCEDURE(struct A68t149 *,A68t270,(struct A68t138 ),(struct A68t138 ,void *));
typedef struct A68t270  A68_270 ;    /* PROC(MODE138) REF MODE149 */

A_PROCEDURE(struct A68t155 *,A68t271,(A68_INT ),(A68_INT ,void *));
typedef struct A68t271  A68_271 ;    /* PROC(INT) REF MODE155 */

A_PROCEDURE(struct A68t159 *,A68t272,(struct A68t154 ),(struct A68t154 ,void *));
typedef struct A68t272  A68_272 ;    /* PROC(MODE154) REF MODE159 */

A_PROCEDURE(struct A68t163 *,A68t273,(struct A68t154 ),(struct A68t154 ,void *));
typedef struct A68t273  A68_273 ;    /* PROC(MODE154) REF MODE163 */

A_PROCEDURE(struct A68t170 *,A68t274,(A68_INT ),(A68_INT ,void *));
typedef struct A68t274  A68_274 ;    /* PROC(INT) REF MODE170 */

A_PROCEDURE(struct A68t174 *,A68t275,(struct A68t154 ),(struct A68t154 ,void *));
typedef struct A68t275  A68_275 ;    /* PROC(MODE154) REF MODE174 */

A_PROCEDURE(struct A68t226 *,A68t276,(struct A68t210 ),(struct A68t210 ,void *));
typedef struct A68t276  A68_276 ;    /* PROC(MODE210) REF MODE226 */

A_PROCEDURE(struct A68t227 *,A68t277,(struct A68t210 ),(struct A68t210 ,void *));
typedef struct A68t277  A68_277 ;    /* PROC(MODE210) REF MODE227 */

A_PROCEDURE(struct A68t202 *,A68t278,(struct A68t176 ),(struct A68t176 ,void *));
typedef struct A68t278  A68_278 ;    /* PROC(MODE176) REF MODE202 */

A_PROCEDURE(struct A68t221 *,A68t279,(struct A68t176 ),(struct A68t176 ,void *));
typedef struct A68t279  A68_279 ;    /* PROC(MODE176) REF MODE221 */

A_PROCEDURE(struct A68t207 *,A68t280,(A68_INT ),(A68_INT ,void *));
typedef struct A68t280  A68_280 ;    /* PROC(INT) REF MODE207 */

A_PROCEDURE(struct A68t239 *,A68t281,(struct A68t138 ),(struct A68t138 ,void *));
typedef struct A68t281  A68_281 ;    /* PROC(MODE138) REF MODE239 */

A_PROCEDURE(struct A68t244 *,A68t282,(struct A68t176 ),(struct A68t176 ,void *));
typedef struct A68t282  A68_282 ;    /* PROC(MODE176) REF MODE244 */

A_PROCEDURE(struct A68t147 *,A68t283,(A68_INT ),(A68_INT ,void *));
typedef struct A68t283  A68_283 ;    /* PROC(INT) REF MODE147 */

A_PROCEDURE(struct A68t130 *,A68t284,(A68_INT ),(A68_INT ,void *));
typedef struct A68t284  A68_284 ;    /* PROC(INT) REF MODE130 */

A_PROCEDURE(struct A68t137 *,A68t285,(struct A68t129 ),(struct A68t129 ,void *));
typedef struct A68t285  A68_285 ;    /* PROC(MODE129) REF MODE137 */

A_PROCEDURE(struct A68t133 *,A68t286,(struct A68t129 ),(struct A68t129 ,void *));
typedef struct A68t286  A68_286 ;    /* PROC(MODE129) REF MODE133 */
A_VECTOR(struct A68t127 *,A68t287);
typedef struct A68t287  A68_287 ;    /* VECTOR [] REF MODE127 */
struct A68t288{
struct A68t129  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_94)
};
typedef struct A68t288  A68_288 ;    /* STRUCT(MODE129,BOOL)  */
struct A68t289{
struct A68t132 * A;
A68_BOOL  C;
A_PAD_BOOL(PAD_95)
};
typedef struct A68t289  A68_289 ;    /* STRUCT(REF MODE132,BOOL)  */
struct A68t290{
struct A68t135 * A;
A68_BOOL  C;
A_PAD_BOOL(PAD_96)
};
typedef struct A68t290  A68_290 ;    /* STRUCT(REF MODE135,BOOL)  */
struct A68t291{
struct A68t138  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_97)
};
typedef struct A68t291  A68_291 ;    /* STRUCT(MODE138,BOOL)  */
struct A68t292{
struct A68t150 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_98)
};
typedef struct A68t292  A68_292 ;    /* STRUCT(REF MODE150,BOOL)  */
struct A68t293{
struct A68t151 * I;
A68_BOOL  C;
A_PAD_BOOL(PAD_99)
};
typedef struct A68t293  A68_293 ;    /* STRUCT(REF MODE151,BOOL)  */
struct A68t294{
struct A68t153  R;
A68_BOOL  C;
A_PAD_BOOL(PAD_100)
};
typedef struct A68t294  A68_294 ;    /* STRUCT(MODE153,BOOL)  */
struct A68t295{
struct A68t152  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_101)
};
typedef struct A68t295  A68_295 ;    /* STRUCT(MODE152,BOOL)  */
struct A68t296{
struct A68t157 * T;
A68_BOOL  C;
A_PAD_BOOL(PAD_102)
};
typedef struct A68t296  A68_296 ;    /* STRUCT(REF MODE157,BOOL)  */
struct A68t297{
struct A68t154  T;
A68_BOOL  C;
A_PAD_BOOL(PAD_103)
};
typedef struct A68t297  A68_297 ;    /* STRUCT(MODE154,BOOL)  */
struct A68t298{
struct A68t165  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_104)
};
typedef struct A68t298  A68_298 ;    /* STRUCT(MODE165,BOOL)  */
struct A68t299{
struct A68t168  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_105)
};
typedef struct A68t299  A68_299 ;    /* STRUCT(REF MODE168,BOOL)  */
struct A68t300{
struct A68t167  T;
A68_BOOL  C;
A_PAD_BOOL(PAD_106)
};
typedef struct A68t300  A68_300 ;    /* STRUCT(MODE167,BOOL)  */
struct A68t301{
struct A68t169 * T;
A68_BOOL  C;
A_PAD_BOOL(PAD_107)
};
typedef struct A68t301  A68_301 ;    /* STRUCT(REF MODE169,BOOL)  */
struct A68t302{
struct A68t175 * Co;
A68_BOOL  C;
A_PAD_BOOL(PAD_108)
};
typedef struct A68t302  A68_302 ;    /* STRUCT(REF MODE175,BOOL)  */
struct A68t303{
struct A68t180 * Ua;
A68_BOOL  C;
A_PAD_BOOL(PAD_109)
};
typedef struct A68t303  A68_303 ;    /* STRUCT(REF MODE180,BOOL)  */
struct A68t304{
struct A68t191 * U;
A68_BOOL  C;
A_PAD_BOOL(PAD_110)
};
typedef struct A68t304  A68_304 ;    /* STRUCT(REF MODE191,BOOL)  */
struct A68t305{
struct A68t236 * U;
A68_BOOL  C;
A_PAD_BOOL(PAD_111)
};
typedef struct A68t305  A68_305 ;    /* STRUCT(REF MODE236,BOOL)  */
struct A68t306{
struct A68t176  U;
A68_BOOL  C;
A_PAD_BOOL(PAD_112)
};
typedef struct A68t306  A68_306 ;    /* STRUCT(MODE176,BOOL)  */
struct A68t307{
struct A68t220  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_113)
};
typedef struct A68t307  A68_307 ;    /* STRUCT(MODE220,BOOL)  */
struct A68t308{
struct A68t218  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_114)
};
typedef struct A68t308  A68_308 ;    /* STRUCT(REF MODE218,BOOL)  */
struct A68t309{
struct A68t216  I;
A68_BOOL  C;
A_PAD_BOOL(PAD_115)
};
typedef struct A68t309  A68_309 ;    /* STRUCT(MODE216,BOOL)  */
struct A68t310{
struct A68t237  D;
A68_BOOL  C;
A_PAD_BOOL(PAD_116)
};
typedef struct A68t310  A68_310 ;    /* STRUCT(MODE237,BOOL)  */
struct A68t311{
struct A68t222 * P;
A68_BOOL  C;
A_PAD_BOOL(PAD_117)
};
typedef struct A68t311  A68_311 ;    /* STRUCT(REF MODE222,BOOL)  */
struct A68t312{
struct A68t208 * P;
A68_BOOL  C;
A_PAD_BOOL(PAD_118)
};
typedef struct A68t312  A68_312 ;    /* STRUCT(REF MODE208,BOOL)  */
struct A68t313{
struct A68t209 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_119)
};
typedef struct A68t313  A68_313 ;    /* STRUCT(REF MODE209,BOOL)  */
struct A68t314{
struct A68t217 * N;
A68_BOOL  C;
A_PAD_BOOL(PAD_120)
};
typedef struct A68t314  A68_314 ;    /* STRUCT(REF MODE217,BOOL)  */
struct A68t315{
struct A68t210 * L;
A68_BOOL  C;
A_PAD_BOOL(PAD_121)
};
typedef struct A68t315  A68_315 ;    /* STRUCT(REF MODE210,BOOL)  */
struct A68t316{
struct A68t235 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_122)
};
typedef struct A68t316  A68_316 ;    /* STRUCT(REF MODE235,BOOL)  */
struct A68t317{
struct A68t225  S;
A68_BOOL  C;
A_PAD_BOOL(PAD_123)
};
typedef struct A68t317  A68_317 ;    /* STRUCT(MODE225,BOOL)  */
struct A68t318{
struct A68t224 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_124)
};
typedef struct A68t318  A68_318 ;    /* STRUCT(REF MODE224,BOOL)  */
struct A68t319{
struct A68t211 * M;
A68_BOOL  C;
A_PAD_BOOL(PAD_125)
};
typedef struct A68t319  A68_319 ;    /* STRUCT(REF MODE211,BOOL)  */
struct A68t320{
struct A68t212 * J;
A68_BOOL  C;
A_PAD_BOOL(PAD_126)
};
typedef struct A68t320  A68_320 ;    /* STRUCT(REF MODE212,BOOL)  */
struct A68t321{
struct A68t215 * J;
A68_BOOL  C;
A_PAD_BOOL(PAD_127)
};
typedef struct A68t321  A68_321 ;    /* STRUCT(REF MODE215,BOOL)  */
struct A68t322{
struct A68t206  S;
A68_BOOL  C;
A_PAD_BOOL(PAD_128)
};
typedef struct A68t322  A68_322 ;    /* STRUCT(MODE206,BOOL)  */
struct A68t323{
struct A68t205 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_129)
};
typedef struct A68t323  A68_323 ;    /* STRUCT(REF MODE205,BOOL)  */
struct A68t324{
struct A68t248  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_130)
};
typedef struct A68t324  A68_324 ;    /* STRUCT(MODE248,BOOL)  */
struct A68t325{
struct A68t250  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_131)
};
typedef struct A68t325  A68_325 ;    /* STRUCT(MODE250,BOOL)  */
struct A68t326{
struct A68t253  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_132)
};
typedef struct A68t326  A68_326 ;    /* STRUCT(REF MODE253,BOOL)  */
struct A68t327{
struct A68t252 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_133)
};
typedef struct A68t327  A68_327 ;    /* STRUCT(REF MODE252,BOOL)  */
struct A68t328{
struct A68t261  O;
A68_BOOL  C;
A_PAD_BOOL(PAD_134)
};
typedef struct A68t328  A68_328 ;    /* STRUCT(MODE261,BOOL)  */
struct A68t329{
struct A68t265 * Cl;
A68_BOOL  C;
A_PAD_BOOL(PAD_135)
};
typedef struct A68t329  A68_329 ;    /* STRUCT(REF MODE265,BOOL)  */
struct A68t330 ;

A_PROCEDURE(A68_VOID ,A68t331,(struct A68t129 ,struct A68t330 *,struct A68t288 *),(struct A68t129 ,struct A68t330 *,struct A68t288 *,void *));
typedef struct A68t331  A68_331 ;    /* PROC(MODE129,REF MODE330) MODE288 */

A_PROCEDURE(A68_VOID ,A68t332,(struct A68t132 *,struct A68t330 *,struct A68t289 *),(struct A68t132 *,struct A68t330 *,struct A68t289 *,void *));
typedef struct A68t332  A68_332 ;    /* PROC(REF MODE132,REF MODE330) MODE289 */

A_PROCEDURE(A68_VOID ,A68t333,(struct A68t135 *,struct A68t330 *,struct A68t290 *),(struct A68t135 *,struct A68t330 *,struct A68t290 *,void *));
typedef struct A68t333  A68_333 ;    /* PROC(REF MODE135,REF MODE330) MODE290 */

A_PROCEDURE(A68_VOID ,A68t334,(struct A68t138 ,struct A68t330 *,struct A68t291 *),(struct A68t138 ,struct A68t330 *,struct A68t291 *,void *));
typedef struct A68t334  A68_334 ;    /* PROC(MODE138,REF MODE330) MODE291 */

A_PROCEDURE(A68_VOID ,A68t335,(struct A68t150 *,struct A68t330 *,struct A68t292 *),(struct A68t150 *,struct A68t330 *,struct A68t292 *,void *));
typedef struct A68t335  A68_335 ;    /* PROC(REF MODE150,REF MODE330) MODE292 */

A_PROCEDURE(A68_VOID ,A68t336,(struct A68t151 *,struct A68t330 *,struct A68t293 *),(struct A68t151 *,struct A68t330 *,struct A68t293 *,void *));
typedef struct A68t336  A68_336 ;    /* PROC(REF MODE151,REF MODE330) MODE293 */

A_PROCEDURE(A68_VOID ,A68t337,(struct A68t153 ,struct A68t330 *,struct A68t294 *),(struct A68t153 ,struct A68t330 *,struct A68t294 *,void *));
typedef struct A68t337  A68_337 ;    /* PROC(MODE153,REF MODE330) MODE294 */

A_PROCEDURE(A68_VOID ,A68t338,(struct A68t152 ,struct A68t330 *,struct A68t295 *),(struct A68t152 ,struct A68t330 *,struct A68t295 *,void *));
typedef struct A68t338  A68_338 ;    /* PROC(MODE152,REF MODE330) MODE295 */

A_PROCEDURE(A68_VOID ,A68t339,(struct A68t157 *,struct A68t330 *,struct A68t296 *),(struct A68t157 *,struct A68t330 *,struct A68t296 *,void *));
typedef struct A68t339  A68_339 ;    /* PROC(REF MODE157,REF MODE330) MODE296 */

A_PROCEDURE(A68_VOID ,A68t340,(struct A68t154 ,struct A68t330 *,struct A68t297 *),(struct A68t154 ,struct A68t330 *,struct A68t297 *,void *));
typedef struct A68t340  A68_340 ;    /* PROC(MODE154,REF MODE330) MODE297 */

A_PROCEDURE(A68_VOID ,A68t341,(struct A68t165 ,struct A68t330 *,struct A68t298 *),(struct A68t165 ,struct A68t330 *,struct A68t298 *,void *));
typedef struct A68t341  A68_341 ;    /* PROC(MODE165,REF MODE330) MODE298 */

A_PROCEDURE(A68_VOID ,A68t342,(struct A68t168 ,struct A68t330 *,struct A68t299 *),(struct A68t168 ,struct A68t330 *,struct A68t299 *,void *));
typedef struct A68t342  A68_342 ;    /* PROC(REF MODE168,REF MODE330) MODE299 */

A_PROCEDURE(A68_VOID ,A68t343,(struct A68t167 ,struct A68t330 *,struct A68t300 *),(struct A68t167 ,struct A68t330 *,struct A68t300 *,void *));
typedef struct A68t343  A68_343 ;    /* PROC(MODE167,REF MODE330) MODE300 */

A_PROCEDURE(A68_VOID ,A68t344,(struct A68t169 *,struct A68t330 *,struct A68t301 *),(struct A68t169 *,struct A68t330 *,struct A68t301 *,void *));
typedef struct A68t344  A68_344 ;    /* PROC(REF MODE169,REF MODE330) MODE301 */

A_PROCEDURE(A68_VOID ,A68t345,(struct A68t175 *,struct A68t330 *,struct A68t302 *),(struct A68t175 *,struct A68t330 *,struct A68t302 *,void *));
typedef struct A68t345  A68_345 ;    /* PROC(REF MODE175,REF MODE330) MODE302 */

A_PROCEDURE(A68_VOID ,A68t346,(struct A68t180 *,struct A68t330 *,struct A68t303 *),(struct A68t180 *,struct A68t330 *,struct A68t303 *,void *));
typedef struct A68t346  A68_346 ;    /* PROC(REF MODE180,REF MODE330) MODE303 */

A_PROCEDURE(A68_VOID ,A68t347,(struct A68t191 *,struct A68t330 *,struct A68t304 *),(struct A68t191 *,struct A68t330 *,struct A68t304 *,void *));
typedef struct A68t347  A68_347 ;    /* PROC(REF MODE191,REF MODE330) MODE304 */

A_PROCEDURE(A68_VOID ,A68t348,(struct A68t236 *,struct A68t330 *,struct A68t305 *),(struct A68t236 *,struct A68t330 *,struct A68t305 *,void *));
typedef struct A68t348  A68_348 ;    /* PROC(REF MODE236,REF MODE330) MODE305 */

A_PROCEDURE(A68_VOID ,A68t349,(struct A68t176 ,struct A68t330 *,struct A68t306 *),(struct A68t176 ,struct A68t330 *,struct A68t306 *,void *));
typedef struct A68t349  A68_349 ;    /* PROC(MODE176,REF MODE330) MODE306 */

A_PROCEDURE(A68_VOID ,A68t350,(struct A68t220 ,struct A68t330 *,struct A68t307 *),(struct A68t220 ,struct A68t330 *,struct A68t307 *,void *));
typedef struct A68t350  A68_350 ;    /* PROC(MODE220,REF MODE330) MODE307 */

A_PROCEDURE(A68_VOID ,A68t351,(struct A68t218 ,struct A68t330 *,struct A68t308 *),(struct A68t218 ,struct A68t330 *,struct A68t308 *,void *));
typedef struct A68t351  A68_351 ;    /* PROC(REF MODE218,REF MODE330) MODE308 */

A_PROCEDURE(A68_VOID ,A68t352,(struct A68t216 ,struct A68t330 *,struct A68t309 *),(struct A68t216 ,struct A68t330 *,struct A68t309 *,void *));
typedef struct A68t352  A68_352 ;    /* PROC(MODE216,REF MODE330) MODE309 */

A_PROCEDURE(A68_VOID ,A68t353,(struct A68t237 ,struct A68t330 *,struct A68t310 *),(struct A68t237 ,struct A68t330 *,struct A68t310 *,void *));
typedef struct A68t353  A68_353 ;    /* PROC(MODE237,REF MODE330) MODE310 */

A_PROCEDURE(A68_VOID ,A68t354,(struct A68t222 *,struct A68t330 *,struct A68t311 *),(struct A68t222 *,struct A68t330 *,struct A68t311 *,void *));
typedef struct A68t354  A68_354 ;    /* PROC(REF MODE222,REF MODE330) MODE311 */

A_PROCEDURE(A68_VOID ,A68t355,(struct A68t208 *,struct A68t330 *,struct A68t312 *),(struct A68t208 *,struct A68t330 *,struct A68t312 *,void *));
typedef struct A68t355  A68_355 ;    /* PROC(REF MODE208,REF MODE330) MODE312 */

A_PROCEDURE(A68_VOID ,A68t356,(struct A68t209 *,struct A68t330 *,struct A68t313 *),(struct A68t209 *,struct A68t330 *,struct A68t313 *,void *));
typedef struct A68t356  A68_356 ;    /* PROC(REF MODE209,REF MODE330) MODE313 */

A_PROCEDURE(A68_VOID ,A68t357,(struct A68t217 *,struct A68t330 *,struct A68t314 *),(struct A68t217 *,struct A68t330 *,struct A68t314 *,void *));
typedef struct A68t357  A68_357 ;    /* PROC(REF MODE217,REF MODE330) MODE314 */

A_PROCEDURE(A68_VOID ,A68t358,(struct A68t210 *,struct A68t330 *,struct A68t315 *),(struct A68t210 *,struct A68t330 *,struct A68t315 *,void *));
typedef struct A68t358  A68_358 ;    /* PROC(REF MODE210,REF MODE330) MODE315 */

A_PROCEDURE(A68_VOID ,A68t359,(struct A68t235 *,struct A68t330 *,struct A68t316 *),(struct A68t235 *,struct A68t330 *,struct A68t316 *,void *));
typedef struct A68t359  A68_359 ;    /* PROC(REF MODE235,REF MODE330) MODE316 */

A_PROCEDURE(A68_VOID ,A68t360,(struct A68t225 ,struct A68t330 *,struct A68t317 *),(struct A68t225 ,struct A68t330 *,struct A68t317 *,void *));
typedef struct A68t360  A68_360 ;    /* PROC(MODE225,REF MODE330) MODE317 */

A_PROCEDURE(A68_VOID ,A68t361,(struct A68t224 *,struct A68t330 *,struct A68t318 *),(struct A68t224 *,struct A68t330 *,struct A68t318 *,void *));
typedef struct A68t361  A68_361 ;    /* PROC(REF MODE224,REF MODE330) MODE318 */

A_PROCEDURE(A68_VOID ,A68t362,(struct A68t211 *,struct A68t330 *,struct A68t319 *),(struct A68t211 *,struct A68t330 *,struct A68t319 *,void *));
typedef struct A68t362  A68_362 ;    /* PROC(REF MODE211,REF MODE330) MODE319 */

A_PROCEDURE(A68_VOID ,A68t363,(struct A68t212 *,struct A68t330 *,struct A68t320 *),(struct A68t212 *,struct A68t330 *,struct A68t320 *,void *));
typedef struct A68t363  A68_363 ;    /* PROC(REF MODE212,REF MODE330) MODE320 */

A_PROCEDURE(A68_VOID ,A68t364,(struct A68t215 *,struct A68t330 *,struct A68t321 *),(struct A68t215 *,struct A68t330 *,struct A68t321 *,void *));
typedef struct A68t364  A68_364 ;    /* PROC(REF MODE215,REF MODE330) MODE321 */

A_PROCEDURE(A68_VOID ,A68t365,(struct A68t206 ,struct A68t330 *,struct A68t322 *),(struct A68t206 ,struct A68t330 *,struct A68t322 *,void *));
typedef struct A68t365  A68_365 ;    /* PROC(MODE206,REF MODE330) MODE322 */

A_PROCEDURE(A68_VOID ,A68t366,(struct A68t205 *,struct A68t330 *,struct A68t323 *),(struct A68t205 *,struct A68t330 *,struct A68t323 *,void *));
typedef struct A68t366  A68_366 ;    /* PROC(REF MODE205,REF MODE330) MODE323 */

A_PROCEDURE(A68_VOID ,A68t367,(struct A68t248 ,struct A68t330 *,struct A68t324 *),(struct A68t248 ,struct A68t330 *,struct A68t324 *,void *));
typedef struct A68t367  A68_367 ;    /* PROC(MODE248,REF MODE330) MODE324 */

A_PROCEDURE(A68_VOID ,A68t368,(struct A68t250 ,struct A68t330 *,struct A68t325 *),(struct A68t250 ,struct A68t330 *,struct A68t325 *,void *));
typedef struct A68t368  A68_368 ;    /* PROC(MODE250,REF MODE330) MODE325 */

A_PROCEDURE(A68_VOID ,A68t369,(struct A68t253 ,struct A68t330 *,struct A68t326 *),(struct A68t253 ,struct A68t330 *,struct A68t326 *,void *));
typedef struct A68t369  A68_369 ;    /* PROC(REF MODE253,REF MODE330) MODE326 */

A_PROCEDURE(A68_VOID ,A68t370,(struct A68t252 *,struct A68t330 *,struct A68t327 *),(struct A68t252 *,struct A68t330 *,struct A68t327 *,void *));
typedef struct A68t370  A68_370 ;    /* PROC(REF MODE252,REF MODE330) MODE327 */

A_PROCEDURE(A68_VOID ,A68t371,(struct A68t261 ,struct A68t330 *,struct A68t328 *),(struct A68t261 ,struct A68t330 *,struct A68t328 *,void *));
typedef struct A68t371  A68_371 ;    /* PROC(MODE261,REF MODE330) MODE328 */

A_PROCEDURE(A68_VOID ,A68t372,(struct A68t265 *,struct A68t330 *,struct A68t97 ,struct A68t329 *),(struct A68t265 *,struct A68t330 *,struct A68t97 ,struct A68t329 *,void *));
typedef struct A68t372  A68_372 ;    /* PROC(REF MODE265,REF MODE330,MODE97) MODE329 */
struct A68t330{
struct A68t331  Attr;
struct A68t332  Attrstr;
struct A68t333  Attrdec;
struct A68t334  Formula;
struct A68t335  Formulas;
struct A68t336  Intdec;
struct A68t337  Range;
struct A68t338  Formularange;
struct A68t339  Tstr;
struct A68t340  Type;
struct A68t341  Alternative;
struct A68t342  Alternatives;
struct A68t343  Typebody;
struct A68t344  Typedec;
struct A68t345  Constdec;
struct A68t346  Ualts;
struct A68t347  Ustr;
struct A68t348  Uchoices;
struct A68t349  Unit;
struct A68t350  Mparam;
struct A68t351  Macparams;
struct A68t352  Instance;
struct A68t353  Declaration;
struct A68t354  Printitems;
struct A68t355  Print;
struct A68t356  Fault;
struct A68t357  Names;
struct A68t358  Let;
struct A68t359  Seqchoices;
struct A68t360  Seqstep;
struct A68t361  Sequence;
struct A68t362  Make;
struct A68t363  Join;
struct A68t364  Joins;
struct A68t365  Step;
struct A68t366  Series;
struct A68t367  Fnbody;
struct A68t368  Macspec;
struct A68t369  Macspecs;
struct A68t370  Fndec;
struct A68t371  Outer;
struct A68t372  Closure;
struct A68t330 * Rest;
};
typedef struct A68t330  A68_330 ;    /* STRUCT(MODE331,MODE332,MODE333,MODE334,MODE335,MODE336,MODE337,MODE338,MODE339,MODE340,MODE341,MODE342,MODE343,MODE344,MODE345,MODE346,MODE347,MODE348,MODE349,MODE350,MODE351,MODE352,MODE353,MODE354,MODE355,MODE356,MODE357,MODE358,MODE359,MODE360,MODE361,MODE362,MODE363,MODE364,MODE365,MODE366,MODE367,MODE368,MODE369,MODE370,MODE371,MODE372,REF MODE330)  */
struct A68t374 ;

A_PROCEDURE(struct A68t330 *,A68t373,(struct A68t330 *,struct A68t374 ),(struct A68t330 *,struct A68t374 ,void *));
typedef struct A68t373  A68_373 ;    /* PROC(REF MODE330,MODE374) REF MODE330 */
A_VECTOR(struct A68t375 ,A68t374);
typedef struct A68t374  A68_374 ;    /* VECTOR [] MODE375 */
struct A68t375 { A68_INT mode; union {
struct A68t331  mode1;
struct A68t332  mode2;
struct A68t333  mode3;
struct A68t334  mode4;
struct A68t335  mode5;
struct A68t336  mode6;
struct A68t337  mode7;
struct A68t338  mode8;
struct A68t339  mode9;
struct A68t340  mode10;
struct A68t341  mode11;
struct A68t342  mode12;
struct A68t343  mode13;
struct A68t344  mode14;
struct A68t345  mode15;
struct A68t346  mode16;
struct A68t347  mode17;
struct A68t348  mode18;
struct A68t349  mode19;
struct A68t350  mode20;
struct A68t351  mode21;
struct A68t352  mode22;
struct A68t353  mode23;
struct A68t354  mode24;
struct A68t355  mode25;
struct A68t356  mode26;
struct A68t357  mode27;
struct A68t358  mode28;
struct A68t359  mode29;
struct A68t360  mode30;
struct A68t361  mode31;
struct A68t362  mode32;
struct A68t363  mode33;
struct A68t364  mode34;
struct A68t365  mode35;
struct A68t366  mode36;
struct A68t367  mode37;
struct A68t368  mode38;
struct A68t369  mode39;
struct A68t370  mode40;
struct A68t371  mode41;
struct A68t372  mode42;
} data; };
typedef struct A68t375  A68_375 ;    /* UNION(MODE331,MODE332,MODE333,MODE334,MODE335,MODE336,MODE337,MODE338,MODE339,MODE340,MODE341,MODE342,MODE343,MODE344,MODE345,MODE346,MODE347,MODE348,MODE349,MODE350,MODE351,MODE352,MODE353,MODE354,MODE355,MODE356,MODE357,MODE358,MODE359,MODE360,MODE361,MODE362,MODE363,MODE364,MODE365,MODE366,MODE367,MODE368,MODE369,MODE370,MODE371,MODE372)  */

A_PROCEDURE(A68_VOID ,A68t376,(struct A68t330 *),(struct A68t330 *,void *));
typedef struct A68t376  A68_376 ;    /* PROC(REF MODE330) VOID */

A_PROCEDURE(A68_VOID ,A68t377,(void),(void *));
typedef struct A68t377  A68_377 ;    /* PROC VOID */

A_PROCEDURE(struct A68t139 *,A68t378,(A68_INT ),(A68_INT ,void *));
typedef struct A68t378  A68_378 ;    /* PROC(INT) REF MODE139 */

A_PROCEDURE(A68_INT ,A68t379,(struct A68t138 ,struct A68t97 ),(struct A68t138 ,struct A68t97 ,void *));
typedef struct A68t379  A68_379 ;    /* PROC(MODE138,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t380,(struct A68t138 ),(struct A68t138 ,void *));
typedef struct A68t380  A68_380 ;    /* PROC(MODE138) INT */

A_PROCEDURE(A68_VOID ,A68t381,(struct A68t138 ,struct A68t138 *),(struct A68t138 ,struct A68t138 *,void *));
typedef struct A68t381  A68_381 ;    /* PROC(MODE138) MODE138 */

A_PROCEDURE(struct A68t135 *,A68t382,(struct A68t261 ),(struct A68t261 ,void *));
typedef struct A68t382  A68_382 ;    /* PROC(MODE261) REF MODE135 */

A_PROCEDURE(struct A68t151 *,A68t383,(struct A68t261 ),(struct A68t261 ,void *));
typedef struct A68t383  A68_383 ;    /* PROC(MODE261) REF MODE151 */

A_PROCEDURE(struct A68t169 *,A68t384,(struct A68t261 ),(struct A68t261 ,void *));
typedef struct A68t384  A68_384 ;    /* PROC(MODE261) REF MODE169 */

A_PROCEDURE(struct A68t175 *,A68t385,(struct A68t261 ),(struct A68t261 ,void *));
typedef struct A68t385  A68_385 ;    /* PROC(MODE261) REF MODE175 */

A_PROCEDURE(struct A68t252 *,A68t386,(struct A68t261 ),(struct A68t261 ,void *));
typedef struct A68t386  A68_386 ;    /* PROC(MODE261) REF MODE252 */

A_PROCEDURE(A68_INT ,A68t387,(struct A68t136 *,struct A68t256 ),(struct A68t136 *,struct A68t256 ,void *));
typedef struct A68t387  A68_387 ;    /* PROC(REF MODE136,REF MODE256) INT */

A_PROCEDURE(A68_INT ,A68t388,(struct A68t136 *,struct A68t257 ),(struct A68t136 *,struct A68t257 ,void *));
typedef struct A68t388  A68_388 ;    /* PROC(REF MODE136,REF MODE257) INT */

A_PROCEDURE(A68_INT ,A68t389,(struct A68t136 *,struct A68t258 ),(struct A68t136 *,struct A68t258 ,void *));
typedef struct A68t389  A68_389 ;    /* PROC(REF MODE136,REF MODE258) INT */

A_PROCEDURE(A68_INT ,A68t390,(struct A68t136 *,struct A68t259 ),(struct A68t136 *,struct A68t259 ,void *));
typedef struct A68t390  A68_390 ;    /* PROC(REF MODE136,REF MODE259) INT */

A_PROCEDURE(A68_INT ,A68t391,(struct A68t136 *,struct A68t260 ),(struct A68t136 *,struct A68t260 ,void *));
typedef struct A68t391  A68_391 ;    /* PROC(REF MODE136,REF MODE260) INT */

A_PROCEDURE(struct A68t135 *,A68t392,(struct A68t130 ,struct A68t265 *,struct A68t255 *),(struct A68t130 ,struct A68t265 *,struct A68t255 *,void *));
typedef struct A68t392  A68_392 ;    /* PROC(MODE130,REF MODE265,REF MODE255) REF MODE135 */

A_PROCEDURE(struct A68t151 *,A68t393,(struct A68t142 ,struct A68t265 *,struct A68t255 *),(struct A68t142 ,struct A68t265 *,struct A68t255 *,void *));
typedef struct A68t393  A68_393 ;    /* PROC(MODE142,REF MODE265,REF MODE255) REF MODE151 */

A_PROCEDURE(struct A68t169 *,A68t394,(struct A68t155 ,struct A68t265 *,struct A68t255 *),(struct A68t155 ,struct A68t265 *,struct A68t255 *,void *));
typedef struct A68t394  A68_394 ;    /* PROC(MODE155,REF MODE265,REF MODE255) REF MODE169 */

A_PROCEDURE(struct A68t175 *,A68t395,(struct A68t170 ,struct A68t265 *,struct A68t255 *),(struct A68t170 ,struct A68t265 *,struct A68t255 *,void *));
typedef struct A68t395  A68_395 ;    /* PROC(MODE170,REF MODE265,REF MODE255) REF MODE175 */

A_PROCEDURE(struct A68t252 *,A68t396,(struct A68t207 ,struct A68t265 *,struct A68t255 *),(struct A68t207 ,struct A68t265 *,struct A68t255 *,void *));
typedef struct A68t396  A68_396 ;    /* PROC(MODE207,REF MODE265,REF MODE255) REF MODE252 */

A_PROCEDURE(struct A68t158 *,A68t397,(struct A68t252 *),(struct A68t252 *,void *));
typedef struct A68t397  A68_397 ;    /* PROC(REF MODE252) REF MODE158 */

A_PROCEDURE(A68_VOID ,A68t398,(struct A68t157 *,struct A68t138 *),(struct A68t157 *,struct A68t138 *,void *));
typedef struct A68t398  A68_398 ;    /* PROC(REF MODE157) MODE138 */

A_PROCEDURE(A68_VOID ,A68t399,(struct A68t154 ,struct A68t255 *,struct A68t138 *),(struct A68t154 ,struct A68t255 *,struct A68t138 *,void *));
typedef struct A68t399  A68_399 ;    /* PROC(MODE154,REF MODE255) MODE138 */

A_PROCEDURE(struct A68t252 *,A68t400,(struct A68t252 *,struct A68t255 *,struct A68t255 *),(struct A68t252 *,struct A68t255 *,struct A68t255 *,void *));
typedef struct A68t400  A68_400 ;    /* PROC(REF MODE252,REF MODE255,REF MODE255) REF MODE252 */

A_PROCEDURE(A68_VOID ,A68t401,(struct A68t217 *,struct A68t252 *,struct A68t154 *),(struct A68t217 *,struct A68t252 *,struct A68t154 *,void *));
typedef struct A68t401  A68_401 ;    /* PROC(REF MODE217,REF MODE252) MODE154 */

A_PROCEDURE(A68_INT ,A68t402,(struct A68t217 *),(struct A68t217 *,void *));
typedef struct A68t402  A68_402 ;    /* PROC(REF MODE217) INT */

A_PROCEDURE(A68_INT ,A68t403,(struct A68t217 *,A68_INT ),(struct A68t217 *,A68_INT ,void *));
typedef struct A68t403  A68_403 ;    /* PROC(REF MODE217,INT) INT */

A_PROCEDURE(A68_VOID ,A68t404,(struct A68t176 ,struct A68t252 *,struct A68t255 *,struct A68t154 *),(struct A68t176 ,struct A68t252 *,struct A68t255 *,struct A68t154 *,void *));
typedef struct A68t404  A68_404 ;    /* PROC(MODE176,REF MODE252,REF MODE255) MODE154 */

A_PROCEDURE(A68_VOID ,A68t405,(struct A68t154 ,struct A68t255 *,struct A68t154 *),(struct A68t154 ,struct A68t255 *,struct A68t154 *,void *));
typedef struct A68t405  A68_405 ;    /* PROC(MODE154,REF MODE255) MODE154 */

A_PROCEDURE(A68_BOOL ,A68t406,(struct A68t154 ,struct A68t154 ,struct A68t255 *,struct A68t255 *,A68_BOOL ),(struct A68t154 ,struct A68t154 ,struct A68t255 *,struct A68t255 *,A68_BOOL ,void *));
typedef struct A68t406  A68_406 ;    /* PROC(MODE154,MODE154,REF MODE255,REF MODE255,BOOL) BOOL */

A_PROCEDURE(A68_INT ,A68t407,(struct A68t185 *,struct A68t255 *),(struct A68t185 *,struct A68t255 *,void *));
typedef struct A68t407  A68_407 ;    /* PROC(REF MODE185,REF MODE255) INT */
struct A68t408{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t408  A68_408 ;    /* STRUCT(REF MODE26,REF BITS)  */

A_PROCEDURE(A68_BOOL ,A68t409,(struct A68t35 ,struct A68t35 ),(struct A68t35 ,struct A68t35 ,void *));
typedef struct A68t409  A68_409 ;    /* PROC(MODE35,MODE35) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t411);
typedef struct A68t411  A68_411 ;    /* STRUCT 4 CHAR */
struct A68t410{
struct A68t411  Access;
A_PAD_ISTRUCT(A68_411 ,PAD_136)
};
typedef struct A68t410  A68_410 ;    /* STRUCT(MODE411)  */

A_PROCEDURE(struct A68t408 *,A68t412,(A68_VC ,struct A68t410 ,struct A68t97 ),(A68_VC ,struct A68t410 ,struct A68t97 ,void *));
typedef struct A68t412  A68_412 ;    /* PROC(MODE26,MODE410,MODE97) REF MODE408 */

A_PROCEDURE(A68_VOID ,A68t413,(struct A68t408 *,struct A68t97 ),(struct A68t408 *,struct A68t97 ,void *));
typedef struct A68t413  A68_413 ;    /* PROC(REF MODE408,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t414,(struct A68t408 *,A68_VC *),(struct A68t408 *,A68_VC *,void *));
typedef struct A68t414  A68_414 ;    /* PROC(REF MODE408) MODE26 */

A_PROCEDURE(A68_VOID ,A68t415,(struct A68t408 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *),(struct A68t408 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t415  A68_415 ;    /* PROC(REF MODE408,REF MODE26,REF INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t416,(struct A68t408 *,A68_VC ,struct A68t97 ,struct A68t35 *),(struct A68t408 *,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t416  A68_416 ;    /* PROC(REF MODE408,MODE26,MODE97) MODE35 */
struct A68t417{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_137)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_138)
A68_SINT  Device;
A_PAD_SINT(PAD_139)
A68_SINT  Links;
A_PAD_SINT(PAD_140)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_141)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_142)
A68_LINT  Size;
A_PAD_LINT(PAD_143)
A68_LINT  Accessed;
A_PAD_LINT(PAD_144)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_145)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_146)
};
typedef struct A68t417  A68_417 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t419 ;

A_PROCEDURE(struct A68t417 *,A68t418,(struct A68t419 ,struct A68t97 ),(struct A68t419 ,struct A68t97 ,void *));
typedef struct A68t418  A68_418 ;    /* PROC(MODE419,MODE97) REF MODE417 */
struct A68t419 { A68_INT mode; union {
struct A68t408 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t419  A68_419 ;    /* UNION(REF MODE408,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t420,(struct A68t408 *,A68_LINT *,struct A68t97 ,struct A68t35 *),(struct A68t408 *,A68_LINT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t420  A68_420 ;    /* PROC(REF MODE408,REF LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t421,(struct A68t408 *,A68_LINT ,struct A68t97 ,struct A68t35 *),(struct A68t408 *,A68_LINT ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t421  A68_421 ;    /* PROC(REF MODE408,LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t422,(struct A68t408 *,struct A68t97 ,struct A68t35 *),(struct A68t408 *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t422  A68_422 ;    /* PROC(REF MODE408,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t423,(A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t423  A68_423 ;    /* PROC(MODE26,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t424,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t424  A68_424 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t425,(A68_INT ),(A68_INT ,void *));
typedef struct A68t425  A68_425 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_LINT ,A68t426,(void),(void *));
typedef struct A68t426  A68_426 ;    /* PROC LONG INT */

A_PROCEDURE(A68_INT ,A68t427,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t427  A68_427 ;    /* PROC(MODE26,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t428,(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t428  A68_428 ;    /* PROC(MODE26,MODE26,MODE97) MODE26 */

A_PROCEDURE(A68_VOID ,A68t429,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t429  A68_429 ;    /* PROC(MODE26,MODE26,MODE97) MODE35 */
struct A68t430{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t430  A68_430 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t431,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t430 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t430 *,void *));
typedef struct A68t431  A68_431 ;    /* PROC(MODE26,MODE26,MODE97) MODE430 */

A_PROCEDURE(A68_VOID ,A68t432,(A68_VC *),(A68_VC *,void *));
typedef struct A68t432  A68_432 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t433,(struct A68t46 *),(struct A68t46 *,void *));
typedef struct A68t433  A68_433 ;    /* PROC MODE46 */

A_PROCEDURE(A68_VOID ,A68t434,(A68_VC ,struct A68t97 ,struct A68t46 *),(A68_VC ,struct A68t97 ,struct A68t46 *,void *));
typedef struct A68t434  A68_434 ;    /* PROC(MODE26,MODE97) MODE46 */

A_PROCEDURE(A68_BOOL ,A68t435,(void),(void *));
typedef struct A68t435  A68_435 ;    /* PROC BOOL */
struct A68t437 ;

A_PROCEDURE(A68_VOID ,A68t436,(struct A68t437 ,struct A68t97 ),(struct A68t437 ,struct A68t97 ,void *));
typedef struct A68t436  A68_436 ;    /* PROC(MODE437,MODE97) VOID */
A_VECTOR(struct A68t438 ,A68t437);
typedef struct A68t437  A68_437 ;    /* VECTOR [] MODE438 */
struct A68t438{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_147)
};
typedef struct A68t438  A68_438 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t439,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t439  A68_439 ;    /* PROC(BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t440,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t440  A68_440 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t441,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t441  A68_441 ;    /* PROC(REF MODE26) REF MODE26 */

A_PROCEDURE(A68_REAL ,A68t442,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t442  A68_442 ;    /* PROC(REAL) REAL */
struct A68t443{
A68_VC  Name;
A68_VC  Version;
A68_VC  Date;
A68_VC  Msg;
A68_VC  Sys_fault;
};
typedef struct A68t443  A68_443 ;    /* STRUCT(MODE26,MODE26,MODE26,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t444,(A68_BOOL ,struct A68t443 *),(A68_BOOL ,struct A68t443 *,void *));
typedef struct A68t444  A68_444 ;    /* PROC(BOOL) MODE443 */

A_PROCEDURE(A68_VOID ,A68t445,(struct A68t443 ,A68_BOOL ),(struct A68t443 ,A68_BOOL ,void *));
typedef struct A68t445  A68_445 ;    /* PROC(MODE443,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t446,(struct A68t443 *),(struct A68t443 *,void *));
typedef struct A68t446  A68_446 ;    /* PROC MODE443 */

A_PROCEDURE(A68_BOOL ,A68t447,(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ),(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ,void *));
typedef struct A68t447  A68_447 ;    /* PROC(MODE26,MODE26,MODE26,REF REF MODE26,BOOL) BOOL */
struct A68t449 ;
struct A68t450 ;

A_PROCEDURE(A68_VOID ,A68t448,(A68_VC ,struct A68t377 ,struct A68t449 ,struct A68t450 ),(A68_VC ,struct A68t377 ,struct A68t449 ,struct A68t450 ,void *));
typedef struct A68t448  A68_448 ;    /* PROC(MODE26,MODE377,MODE449,MODE450) VOID */

A_PROCEDURE(A68_BOOL ,A68t449,(A68_VC ,struct A68t432 ),(A68_VC ,struct A68t432 ,void *));
typedef struct A68t449  A68_449 ;    /* PROC(MODE26,MODE432) BOOL */

A_PROCEDURE(A68_BOOL ,A68t450,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t450  A68_450 ;    /* PROC(BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t451,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t451  A68_451 ;    /* PROC(MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t452,(struct A68t451 ,struct A68t97 ),(struct A68t451 ,struct A68t97 ,void *));
typedef struct A68t452  A68_452 ;    /* PROC(MODE451,MODE97) VOID */

A_PROCEDURE(A68_INT ,A68t453,(struct A68t265 *),(struct A68t265 *,void *));
typedef struct A68t453  A68_453 ;    /* PROC(REF MODE265) INT */

A_PROCEDURE(struct A68t262 *,A68t454,(A68_INT ,struct A68t265 *,struct A68t97 ),(A68_INT ,struct A68t265 *,struct A68t97 ,void *));
typedef struct A68t454  A68_454 ;    /* PROC(INT,REF MODE265,MODE97) REF MODE262 */

A_PROCEDURE(struct A68t262 *,A68t455,(struct A68t265 *),(struct A68t265 *,void *));
typedef struct A68t455  A68_455 ;    /* PROC(REF MODE265) REF MODE262 */

A_PROCEDURE(struct A68t262 **,A68t456,(struct A68t261 ,struct A68t262 **,struct A68t265 *,struct A68t97 ),(struct A68t261 ,struct A68t262 **,struct A68t265 *,struct A68t97 ,void *));
typedef struct A68t456  A68_456 ;    /* PROC(MODE261,REF REF MODE262,REF MODE265,MODE97) REF REF MODE262 */

A_PROCEDURE(A68_VOID ,A68t457,(struct A68t262 **,struct A68t265 *,struct A68t97 ),(struct A68t262 **,struct A68t265 *,struct A68t97 ,void *));
typedef struct A68t457  A68_457 ;    /* PROC(REF REF MODE262,REF MODE265,MODE97) VOID */

A_PROCEDURE(struct A68t265 *,A68t458,(void),(void *));
typedef struct A68t458  A68_458 ;    /* PROC REF MODE265 */

A_PROCEDURE(A68_INT ,A68t459,(struct A68t265 *,struct A68t97 ),(struct A68t265 *,struct A68t97 ,void *));
typedef struct A68t459  A68_459 ;    /* PROC(REF MODE265,MODE97) INT */

A_PROCEDURE(struct A68t265 *,A68t460,(struct A68t265 *,struct A68t97 ),(struct A68t265 *,struct A68t97 ,void *));
typedef struct A68t460  A68_460 ;    /* PROC(REF MODE265,MODE97) REF MODE265 */
struct A68t461{
struct A68t255 * E;
A68_BOOL  C;
A_PAD_BOOL(PAD_148)
A68_BOOL  Ac;
A_PAD_BOOL(PAD_149)
A68_BOOL  Ic;
A_PAD_BOOL(PAD_150)
A68_BOOL  Tc;
A_PAD_BOOL(PAD_151)
A68_BOOL  Cc;
A_PAD_BOOL(PAD_152)
A68_BOOL  Fc;
A_PAD_BOOL(PAD_153)
};
typedef struct A68t461  A68_461 ;    /* STRUCT(REF MODE255,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t462,(struct A68t255 *,struct A68t461 *),(struct A68t255 *,struct A68t461 *,void *));
typedef struct A68t462  A68_462 ;    /* PROC(REF MODE255) MODE461 */

A_PROCEDURE(struct A68t255 *,A68t463,(struct A68t461 *),(struct A68t461 *,void *));
typedef struct A68t463  A68_463 ;    /* PROC(REF MODE461) REF MODE255 */

A_PROCEDURE(A68_VOID ,A68t464,(struct A68t461 *,struct A68t256 *),(struct A68t461 *,struct A68t256 *,void *));
typedef struct A68t464  A68_464 ;    /* PROC(REF MODE461) REF MODE256 */

A_PROCEDURE(A68_VOID ,A68t465,(struct A68t461 *,struct A68t257 *),(struct A68t461 *,struct A68t257 *,void *));
typedef struct A68t465  A68_465 ;    /* PROC(REF MODE461) REF MODE257 */

A_PROCEDURE(A68_VOID ,A68t466,(struct A68t461 *,struct A68t258 *),(struct A68t461 *,struct A68t258 *,void *));
typedef struct A68t466  A68_466 ;    /* PROC(REF MODE461) REF MODE258 */

A_PROCEDURE(A68_VOID ,A68t467,(struct A68t461 *,struct A68t259 *),(struct A68t461 *,struct A68t259 *,void *));
typedef struct A68t467  A68_467 ;    /* PROC(REF MODE461) REF MODE259 */

A_PROCEDURE(A68_VOID ,A68t468,(struct A68t461 *,struct A68t260 *),(struct A68t461 *,struct A68t260 *,void *));
typedef struct A68t468  A68_468 ;    /* PROC(REF MODE461) REF MODE260 */

A_PROCEDURE(A68_VOID ,A68t469,(struct A68t461 *,A68_INT ,struct A68t256 *),(struct A68t461 *,A68_INT ,struct A68t256 *,void *));
typedef struct A68t469  A68_469 ;    /* PROC(REF MODE461,INT) REF MODE256 */

A_PROCEDURE(A68_VOID ,A68t470,(struct A68t461 *,A68_INT ,struct A68t257 *),(struct A68t461 *,A68_INT ,struct A68t257 *,void *));
typedef struct A68t470  A68_470 ;    /* PROC(REF MODE461,INT) REF MODE257 */

A_PROCEDURE(A68_VOID ,A68t471,(struct A68t461 *,A68_INT ,struct A68t258 *),(struct A68t461 *,A68_INT ,struct A68t258 *,void *));
typedef struct A68t471  A68_471 ;    /* PROC(REF MODE461,INT) REF MODE258 */

A_PROCEDURE(A68_VOID ,A68t472,(struct A68t461 *,A68_INT ,struct A68t259 *),(struct A68t461 *,A68_INT ,struct A68t259 *,void *));
typedef struct A68t472  A68_472 ;    /* PROC(REF MODE461,INT) REF MODE259 */

A_PROCEDURE(A68_VOID ,A68t473,(struct A68t461 *,A68_INT ,struct A68t260 *),(struct A68t461 *,A68_INT ,struct A68t260 *,void *));
typedef struct A68t473  A68_473 ;    /* PROC(REF MODE461,INT) REF MODE260 */
struct A68t475 ;

A_PROCEDURE(A68_VOID ,A68t474,(struct A68t255 *,struct A68t265 *,struct A68t475 ,struct A68t97 ,struct A68t461 *),(struct A68t255 *,struct A68t265 *,struct A68t475 ,struct A68t97 ,struct A68t461 *,void *));
typedef struct A68t474  A68_474 ;    /* PROC(REF MODE255,REF MODE265,MODE475,MODE97) MODE461 */

A_PROCEDURE(A68_BOOL ,A68t475,(A68_INT ),(A68_INT ,void *));
typedef struct A68t475  A68_475 ;    /* PROC(INT) BOOL */
struct A68t477 ;

A_PROCEDURE(A68_VOID ,A68t476,(struct A68t477 ),(struct A68t477 ,void *));
typedef struct A68t476  A68_476 ;    /* PROC(MODE477) VOID */
A_STRAIGHT(A68_VOID,A68t478);
typedef struct A68t478  A68_478 ;    /* STRAIGHT MODE477 */
struct A68t477 { A68_INT mode; union {
A68_CHAR * mode1;
A68_VC  mode2;
A68_INT * mode3;
struct A68t32  mode4;
A68_REAL * mode5;
struct A68t55  mode6;
A68_BOOL * mode7;
struct A68t478  mode8;
} data; };
typedef struct A68t477  A68_477 ;    /* UNION(REF CHAR,REF MODE26,REF INT,REF MODE32,REF REAL,REF MODE55,REF BOOL,MODE478)  */

A_PROCEDURE(A68_VOID ,A68t479,(struct A68t377 ),(struct A68t377 ,void *));
typedef struct A68t479  A68_479 ;    /* PROC(MODE377) VOID */

A_PROCEDURE(A68_VOID ,A68t480,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t480  A68_480 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,52,A68t481);
typedef struct A68t481  A68_481 ;    /* STRUCT 52 CHAR */
struct A68t482{
A68_INT  Oldtonew;
A_PAD_INT(PAD_154)
A68_INT  Newtoold;
A_PAD_INT(PAD_155)
};
typedef struct A68t482  A68_482 ;    /* STRUCT(INT,INT)  */
struct A68t483 { A68_INT mode; union {
struct A68t135 * mode1;
struct A68t169 * mode2;
struct A68t252 * mode3;
} data; };
typedef struct A68t483  A68_483 ;    /* UNION(REF MODE135,REF MODE169,REF MODE252)  */

A_PROCEDURE(A68_VOID ,A68t484,(struct A68t483 ,A68_INT ,struct A68t461 *,A68_BOOL ,struct A68t261 *),(struct A68t483 ,A68_INT ,struct A68t461 *,A68_BOOL ,struct A68t261 *,void *));
typedef struct A68t484  A68_484 ;    /* PROC(MODE483,INT,REF MODE461,BOOL) MODE261 */
A_VECTOR(struct A68t482 ,A68t485);
typedef struct A68t485  A68_485 ;    /* VECTOR [] MODE482 */

A_PROCEDURE(A68_VOID ,A68t486,(A68_BOOL ,struct A68t485 *),(A68_BOOL ,struct A68t485 *,void *));
typedef struct A68t486  A68_486 ;    /* PROC(BOOL) MODE485 */

A_PROCEDURE(A68_VOID ,A68t487,(A68_BOOL ,struct A68t256 *),(A68_BOOL ,struct A68t256 *,void *));
typedef struct A68t487  A68_487 ;    /* PROC(BOOL) MODE256 */

A_PROCEDURE(A68_VOID ,A68t488,(A68_BOOL ,struct A68t258 *),(A68_BOOL ,struct A68t258 *,void *));
typedef struct A68t488  A68_488 ;    /* PROC(BOOL) MODE258 */

A_PROCEDURE(A68_VOID ,A68t489,(A68_BOOL ,struct A68t260 *),(A68_BOOL ,struct A68t260 *,void *));
typedef struct A68t489  A68_489 ;    /* PROC(BOOL) MODE260 */
#define A68_490  A68_485 
#define A68t490 A68t485            /* FLEX VECTOR [] MODE482 */

A_PROCEDURE(A68_VOID ,A68t491,(A68_INT ,struct A68t490 *,struct A68t477 *),(A68_INT ,struct A68t490 *,struct A68t477 *,void *));
typedef struct A68t491  A68_491 ;    /* PROC(INT,REF MODE490) MODE477 */

A_PROCEDURE(A68_VOID ,A68t492,(A68_INT ,struct A68t482 *,struct A68t477 *),(A68_INT ,struct A68t482 *,struct A68t477 *,void *));
typedef struct A68t492  A68_492 ;    /* PROC(INT,REF MODE482) MODE477 */

A_PROCEDURE(A68_BOOL ,A68t493,(A68_INT ,A68_INT *),(A68_INT ,A68_INT *,void *));
typedef struct A68t493  A68_493 ;    /* PROC(INT,REF INT) BOOL */
A_ISTRUCT(struct A68t375 ,5,A68t494);
typedef struct A68t494  A68_494 ;    /* STRUCT 5 MODE375 */

A_PROCEDURE(A68_VOID ,A68t495,(struct A68t265 *,struct A68t97 ,struct A68t329 *),(struct A68t265 *,struct A68t97 ,struct A68t329 *,void *));
typedef struct A68t495  A68_495 ;    /* PROC(REF MODE265,MODE97) MODE329 */

A_PROCEDURE(struct A68t265 **,A68t496,(void),(void *));
typedef struct A68t496  A68_496 ;    /* PROC REF REF MODE265 */

A_PROCEDURE(A68_VOID ,A68t497,(struct A68t261 ,A68_INT ),(struct A68t261 ,A68_INT ,void *));
typedef struct A68t497  A68_497 ;    /* PROC(MODE261,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t498,(struct A68t237 ,struct A68t330 *),(struct A68t237 ,struct A68t330 *,void *));
typedef struct A68t498  A68_498 ;    /* PROC(MODE237,REF MODE330) BOOL */
A_ISTRUCT(struct A68t52 ,3,A68t499);
typedef struct A68t499  A68_499 ;    /* STRUCT 3 MODE52 */
A_ISTRUCT(struct A68t375 ,4,A68t500);
typedef struct A68t500  A68_500 ;    /* STRUCT 4 MODE375 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from clear --- */
extern A68_VOID  FFAAOSL_clear(struct A68t477 );
/* --- End of imports from clear --- */


/* --- Imports from environprocs --- */
extern A68_VOID  QGMBTRN_makeenvironc(struct A68t255 *,A68_461 *);
extern A68_VOID  AHMBTRN_newattrs(struct A68t461 *,A68_256 *);
extern A68_VOID  AIMBTRN_newtypes(struct A68t461 *,A68_258 *);
extern A68_VOID  AJMBTRN_newfns(struct A68t461 *,A68_260 *);
/* --- End of imports from environprocs --- */


/* --- Imports from closureprocs --- */
extern A68_262 * ELCATRN_find_outers(A68_INT ,struct A68t265 *,struct A68t97 );
extern A68_INT  ENCATRN_reserve_next_closureno(struct A68t265 *);
extern A68_262 ** KNCATRN_insert_outer(struct A68t261 ,struct A68t262 **,struct A68t265 *,struct A68t97 );
extern A68_265 * DPCATRN_copy_closure(struct A68t265 *,struct A68t97 );
/* --- End of imports from closureprocs --- */


/* --- Imports from osinterface --- */
extern A68_410  BOBAOSI_update_access;
extern A68_410  FOBAOSI_update_truncate_access;
#define HDAAOST_block_update_access BOBAOSI_update_access
#define IDAAOST_block_update_truncate_access FOBAOSI_update_truncate_access
#include <stdlib.h>
#define EXIT(status) exit(A_INT_int(status))

#define BZBAOSI_exit EXIT
extern int A_argc;
extern char **A_argv;
#define A_prelude(argc,argv) A_argc=argc; A_argv = argv

#define VPCAOSI_prelude A_prelude
#include "Alibrary.h"

#define PBCAOSI_garbage_collect Agc_collect
#include <math.h>

#define GQAAOST_sqrt sqrt
extern A68_VOID  SOAAOST_flt_if_interrupted(struct A68t97 );
/* --- End of imports from osinterface --- */


/* --- Imports from modeprocs --- */
/* --- End of imports from modeprocs --- */


/* --- Imports from transformprocs --- */
extern A68_330 * THJATRN_make_newtprocs(struct A68t330 *,struct A68t374 );
extern A68_VOID  MLJATRN_discard_tprocs(struct A68t330 *);
extern A68_330 * AWLATRN_nulltprocs;
/* --- End of imports from transformprocs --- */


/* --- Imports from assmodes --- */
extern A68_224 * QAAATRN_nilsequence;
extern A68_205 * SAAATRN_nilseries;
extern A68_262 * HBAATRN_nilouters;
extern A68_155 * IFAATRN_maketname(A68_INT );
extern A68_130 * UDAATRN_makeattrname(A68_INT );
extern A68_134  ZHAATRN_attrnull;
extern A68_233  HIAATRN_seqnull;
extern A68_214  JIAATRN_stepnull;
extern A68_249  LIAATRN_bodynull;
#define OKAATRN_outerdec 1
#define RKAATRN_outerattr 1
#define TKAATRN_outertype 3
#define VKAATRN_outerfn 5
/* --- End of imports from assmodes --- */


/* --- Imports from basics --- */
/* --- End of imports from basics --- */


/* --- Imports from messageproc --- */
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VOID  UJBAOSL_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void ZEAAOSL(void);   /* clear */
extern void KGMBTRN(void);   /* environprocs */
extern void SKCATRN(void);   /* closureprocs */
extern void PCAAOST(void);   /* osinterface */
extern void HNMATRN(void);   /* modeprocs */
extern void IHJATRN(void);   /* transformprocs */
extern void BAAATRN(void);   /* assmodes */
extern void JSCAOST(void);   /* basics */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_481   OFPBTRN = {"$Id: local.a68,v 34.2 1995/03/29 13:02:42 ella Exp $"}; 
A_GISVEC(A68_VC ,PFPBTRN,OFPBTRN,52)
typedef struct   /* env of non-global proc */
{
A68_INT  VFPBTRN_nattrs;
A_PAD_INT(PAD_156)
} BGPBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  WFPBTRN_ntypes;
A_PAD_INT(PAD_157)
} JGPBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  XFPBTRN_nfns;
A_PAD_INT(PAD_158)
} RGPBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  VFPBTRN_nattrs;
A_PAD_INT(PAD_159)
} ZGPBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  WFPBTRN_ntypes;
A_PAD_INT(PAD_160)
} HHPBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  XFPBTRN_nfns;
A_PAD_INT(PAD_161)
} PHPBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_485  EGPBTRN_attrmap;
A68_INT * UHPBTRN_newattrno;
} IJPBTRN_update_attrno;
typedef struct   /* env of non-global proc */
{
A68_485  MGPBTRN_typemap;
A68_INT * VHPBTRN_newtypeno;
} RJPBTRN_update_typeno;
typedef struct   /* env of non-global proc */
{
A68_485  UGPBTRN_fnmap;
A68_INT * WHPBTRN_newfnno;
} AKPBTRN_update_fnno;
typedef struct   /* env of non-global proc */
{
A68_493  GJPBTRN_update_attrno;
} JKPBTRN_attr;
typedef struct   /* env of non-global proc */
{
A68_493  PJPBTRN_update_typeno;
} YKPBTRN_type;
typedef struct   /* env of non-global proc */
{
A68_493  PJPBTRN_update_typeno;
A68_493  YJPBTRN_update_fnno;
} OLPBTRN_unit;
typedef struct   /* env of non-global proc */
{
A68_493  YJPBTRN_update_fnno;
} TOPBTRN_instance;
typedef struct   /* env of non-global proc */
{
A68_INT * UHPBTRN_newattrno;
} ORPBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * VHPBTRN_newtypeno;
} ZRPBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * WHPBTRN_newfnno;
} KSPBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_BOOL * ZSPBTRN_closure_changed;
A68_265 ** YSPBTRN_thisclosure;
A68_97  Msg;
A68_262 ** ATPBTRN_closureptr;
} DTPBTRN_newclosure;
typedef struct   /* env of non-global proc */
{
A68_496  BTPBTRN_newclosure;
A68_265 ** YSPBTRN_thisclosure;
A68_97  Msg;
} JTPBTRN_insert_newouter;
typedef struct   /* env of non-global proc */
{
A68_496  BTPBTRN_newclosure;
A68_497  HTPBTRN_insert_newouter;
} PTPBTRN_outerfn_local;
typedef struct   /* env of non-global proc */
{
A68_371  NTPBTRN_outerfn_local;
} ABQBTRN_outer;
typedef struct   /* env of non-global proc */
{
A68_461 * QTPBTRN_ec;
A68_INT * WTPBTRN_newclosureno;
A68_496  BTPBTRN_newclosure;
A68_136 * VTPBTRN_newusage;
A68_497  HTPBTRN_insert_newouter;
A68_261  Ofn;
} BUPBTRN_create_outer;
typedef struct   /* env of non-global proc */
{
A68_498  ZTPBTRN_create_outer;
A68_330 * Outertprocs;
} MXPBTRN_step;
typedef struct   /* env of non-global proc */
{
A68_498  ZTPBTRN_create_outer;
A68_330 * Outertprocs;
} AYPBTRN_seqstep;

A_STATIC A68_VOID  UFPBTRN_make_outer(A68_483  Dec, A68_INT  Decno, A68_461 * Ec, A68_BOOL  Create_new_environ, A68_261  *ReturnedValue);

A_STATIC A68_VOID  AGPBTRN_generator(A68_BOOL  YFPBTRN_anonymous, A68_485  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IGPBTRN_generator(A68_BOOL  GGPBTRN_anonymous, A68_485  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QGPBTRN_generator(A68_BOOL  OGPBTRN_anonymous, A68_485  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  YGPBTRN_generator(A68_BOOL  WGPBTRN_anonymous, A68_256  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GHPBTRN_generator(A68_BOOL  EHPBTRN_anonymous, A68_258  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OHPBTRN_generator(A68_BOOL  MHPBTRN_anonymous, A68_260  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZHPBTRN_straight(A68_INT  XHPBTRN_anonymous, A68_490 * YHPBTRN_anonymous, A68_477  *ReturnedValue);

A_STATIC A68_VOID  CIPBTRN_straight(A68_INT  AIPBTRN_anonymous, A68_482 * BIPBTRN_anonymous, A68_477  *ReturnedValue);

A_STATIC A68_BOOL  HJPBTRN_update_attrno(A68_INT  Attrno, A68_INT * Mapped, void *NonLocals);

A_STATIC A68_BOOL  QJPBTRN_update_typeno(A68_INT  Typeno, A68_INT * Mapped, void *NonLocals);

A_STATIC A68_BOOL  ZJPBTRN_update_fnno(A68_INT  Fnno, A68_INT * Mapped, void *NonLocals);

A_STATIC A68_VOID  IKPBTRN_attr(A68_129  Attr, A68_330 * Tprocs, A68_288  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XKPBTRN_type(A68_154  Type, A68_330 * Tprocs, A68_297  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NLPBTRN_unit(A68_176  Unit, A68_330 * Tprocs, A68_306  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SOPBTRN_instance(A68_216  Inst, A68_330 * Tprocs, A68_309  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FPPBTRN_macspecs(A68_253  Mss, A68_330 * Tprocs, A68_326  *ReturnedValue);

A_STATIC A68_VOID  NRPBTRN_generator(A68_BOOL  LRPBTRN_anonymous, A68_256  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  YRPBTRN_generator(A68_BOOL  WRPBTRN_anonymous, A68_258  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JSPBTRN_generator(A68_BOOL  HSPBTRN_anonymous, A68_260  *ReturnedValue, void *NonLocals);

A68_VOID  VSPBTRN_transform_local(A68_265 * Outerclosure, A68_97  Msg, A68_329  *ReturnedValue);

A_STATIC A68_265 ** CTPBTRN_newclosure(void *NonLocals);

A_STATIC A68_VOID  ITPBTRN_insert_newouter(A68_261  Newouter, A68_INT  Closureno, void *NonLocals);

A_STATIC A68_VOID  OTPBTRN_outerfn_local(A68_261  Ofn, A68_330 * Outertprocs, A68_328  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  AUPBTRN_create_outer(A68_237  Dec, A68_330 * Tprocs, void *NonLocals);

A_STATIC A68_VOID  LXPBTRN_step(A68_206  Step, A68_330 * Tprocs, A68_322  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZXPBTRN_seqstep(A68_225  Step, A68_330 * Tprocs, A68_317  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MYPBTRN_series(A68_205 * Ser, A68_330 * Tprocs, A68_323  *ReturnedValue);

A_STATIC A68_VOID  EZPBTRN_sequence(A68_224 * Seq, A68_330 * Tprocs, A68_318  *ReturnedValue);

A_STATIC A68_VOID  ZAQBTRN_outer(A68_261  Outeritem, A68_330 * Tprocs, A68_328  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CIPBTRN_straight(A68_INT  AIPBTRN_anonymous, A68_482 * BIPBTRN_anonymous, A68_477  *ReturnedValue)
{ 
A68_477  DIPBTRN;  /* clause result */
A68_477  EIPBTRN;  /* OPERATORS - mode -> union mode */
A68_INT * FIPBTRN;  /* YIELD */
A68_477  GIPBTRN;  /* OPERATORS - mode -> union mode */
A68_INT * HIPBTRN;  /* YIELD */
A68_477  IIPBTRN;  /* clause result */
switch ( AIPBTRN_anonymous )
{ 
case 1: 
FIPBTRN = (&(BIPBTRN_anonymous->Oldtonew)) ;
DIPBTRN = A_UNITE(EIPBTRN,mode3,3,FIPBTRN);
break;
case 2: 
HIPBTRN = (&(BIPBTRN_anonymous->Newtoold)) ;
DIPBTRN = A_UNITE(GIPBTRN,mode3,3,HIPBTRN);
break;
default: 
A_IMP_SKIP ;
break;
} 
IIPBTRN = DIPBTRN;
*ReturnedValue = (IIPBTRN);
return;
} 
#undef NL

A_STATIC A68_BOOL  AUPBTRN_create_outer(A68_237  Dec, A68_330 * Tprocs, void *NonLocals)
#define NL(x) (((BUPBTRN_create_outer *)NonLocals)->x)
{ 
A68_237  CUPBTRN;  /* united object - for case conformity */
A68_130  DUPBTRN_atn;
A68_INT  EUPBTRN_attrno;
A68_256  FUPBTRN;  /* OPERATORS - simple index */
A68_135 * GUPBTRN;  /* YIELD */
A68_135 * HUPBTRN_ad;
A68_INT * IUPBTRN;  /* YIELD */
A68_499  JUPBTRN;  /* collateral clause result */
A68_52  KUPBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  LUPBTRN;  /* YIELD */
A68_52  MUPBTRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  NUPBTRN;  /* YIELD */
A68_52  OUPBTRN;  /* OPERATORS - mode -> union mode */
A68_85  PUPBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  QUPBTRN;  /* avoid structure result */
A68_VC * RUPBTRN;  /* YIELD */
A68_136 * SUPBTRN;  /* YIELD */
A68_136 ** TUPBTRN;  /* YIELD */
A68_135 * VUPBTRN;  /* YIELD */
A68_135 * UUPBTRN_innerad;
A68_129  WUPBTRN;  /* OPERATORS - mode -> union mode */
A68_129 * XUPBTRN;  /* YIELD */
A68_256  YUPBTRN;  /* avoid structure result */
A68_135 ** ZUPBTRN;  /* YIELD */
A68_483  AVPBTRN;  /* OPERATORS - mode -> union mode */
A68_261  BVPBTRN;  /* avoid structure result */
A68_155  CVPBTRN_tyn;
A68_INT  DVPBTRN_typeno;
A68_258  EVPBTRN;  /* OPERATORS - simple index */
A68_169 * FVPBTRN;  /* YIELD */
A68_169 * GVPBTRN_td;
A68_INT * HVPBTRN;  /* YIELD */
A68_499  IVPBTRN;  /* collateral clause result */
A68_52  JVPBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  KVPBTRN;  /* YIELD */
A68_52  LVPBTRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  MVPBTRN;  /* YIELD */
A68_52  NVPBTRN;  /* OPERATORS - mode -> union mode */
A68_85  OVPBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  PVPBTRN;  /* avoid structure result */
A68_VC * QVPBTRN;  /* YIELD */
A68_136 * RVPBTRN;  /* YIELD */
A68_136 ** SVPBTRN;  /* YIELD */
A68_169 * UVPBTRN;  /* YIELD */
A68_169 * TVPBTRN_innertd;
A68_129  VVPBTRN;  /* OPERATORS - mode -> union mode */
A68_129 * WVPBTRN;  /* YIELD */
A68_258  XVPBTRN;  /* avoid structure result */
A68_169 ** YVPBTRN;  /* YIELD */
A68_483  ZVPBTRN;  /* OPERATORS - mode -> union mode */
A68_261  AWPBTRN;  /* avoid structure result */
A68_207  BWPBTRN_fnn;
A68_INT  CWPBTRN_fnno;
A68_370  DWPBTRN;  /* CALL */
A68_260  EWPBTRN;  /* OPERATORS - simple index */
A68_327  FWPBTRN;  /* avoid structure result */
A68_327  GWPBTRN_fndc;
A68_252 * HWPBTRN;  /* clause result */
A68_260  IWPBTRN;  /* OPERATORS - simple index */
A68_252 * JWPBTRN;  /* YIELD */
A68_252 * KWPBTRN_fd;
A68_INT * LWPBTRN;  /* YIELD */
A68_499  MWPBTRN;  /* collateral clause result */
A68_52  NWPBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  OWPBTRN;  /* YIELD */
A68_52  PWPBTRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  QWPBTRN;  /* YIELD */
A68_52  RWPBTRN;  /* OPERATORS - mode -> union mode */
A68_85  SWPBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  TWPBTRN;  /* avoid structure result */
A68_VC * UWPBTRN;  /* YIELD */
A68_136 * VWPBTRN;  /* YIELD */
A68_136 ** WWPBTRN;  /* YIELD */
A68_252 * YWPBTRN;  /* YIELD */
A68_252 * XWPBTRN_innerfd;
A68_129  ZWPBTRN;  /* OPERATORS - mode -> union mode */
A68_129 * AXPBTRN;  /* YIELD */
A68_248  BXPBTRN;  /* OPERATORS - mode -> union mode */
A68_248 * CXPBTRN;  /* YIELD */
A68_260  DXPBTRN;  /* avoid structure result */
A68_252 ** EXPBTRN;  /* YIELD */
A68_483  FXPBTRN;  /* OPERATORS - mode -> union mode */
A68_261  GXPBTRN;  /* avoid structure result */
A68_BOOL  HXPBTRN;  /* clause result */
A_PROC_ENTRY(create_outer);
 /* line 336: */
 /* line 338: */
{ 
 /* line 339: */
CUPBTRN = Dec ;
switch ( CUPBTRN.mode )
{ 
case 1: /* STRUCT(INT)  */
DUPBTRN_atn = (CUPBTRN.data.mode1);
 /* line 340: */
{ 
EUPBTRN_attrno = DUPBTRN_atn.Attrno;
 /* line 341: */
FUPBTRN = (*(&((*(&(NL(QTPBTRN_ec)->E)))->Attrs))) ;
GUPBTRN = A_HEAP(A68_135 ) ;
(*GUPBTRN) = (*(*(&A_VINDEX(FUPBTRN,EUPBTRN_attrno)))) ;
HUPBTRN_ad = GUPBTRN;
 /* line 342: */
IUPBTRN = (&(HUPBTRN_ad->Sort)) ;
(*IUPBTRN) = OKAATRN_outerdec;
 /* line 343: */
(*NL(WTPBTRN_newclosureno)) = ENCATRN_reserve_next_closureno((*A_CALLPROC(NL(BTPBTRN_newclosure),(),((NL(BTPBTRN_newclosure)).nonlocals))));
 /* line 344: */
LUPBTRN = (*(&(HUPBTRN_ad->Attrname))) ;
JUPBTRN.data[0] = A_UNITE(KUPBTRN,mode7,7,LUPBTRN);
NUPBTRN = '_' ;
JUPBTRN.data[1] = A_UNITE(MUPBTRN,mode6,6,NUPBTRN);
JUPBTRN.data[2] = A_UNITE(OUPBTRN,mode1,1,(*NL(WTPBTRN_newclosureno)));
UJBAOSL_oneline( A_HISVEC(PUPBTRN,JUPBTRN,3,A68_52 ), &QUPBTRN );
RUPBTRN = (&(HUPBTRN_ad->Attrname)) ;
(*RUPBTRN) = QUPBTRN;
 /* line 345: */
SUPBTRN = A_HEAP(A68_136 ) ;
(*SUPBTRN) = (*NL(VTPBTRN_newusage)) ;
TUPBTRN = (&(HUPBTRN_ad->Usage)) ;
(*TUPBTRN) = SUPBTRN;
 /* line 346: */
VUPBTRN = A_HEAP(A68_135 ) ;
(*VUPBTRN) = (*HUPBTRN_ad) ;
UUPBTRN_innerad = VUPBTRN;
 /* line 347: */
XUPBTRN = (&(UUPBTRN_innerad->Value)) ;
(*XUPBTRN) = A_UNITE(WUPBTRN,mode5,5,(&ZHAATRN_attrnull));
 /* line 348: */
AHMBTRN_newattrs( NL(QTPBTRN_ec), &YUPBTRN );
ZUPBTRN = (&A_VINDEX(YUPBTRN,EUPBTRN_attrno)) ;
(*ZUPBTRN) = UUPBTRN_innerad;
 /* line 349: */
 /* line 350: */
 /* line 351: */
UFPBTRN_make_outer( A_UNITE(AVPBTRN,mode1,1,HUPBTRN_ad), EUPBTRN_attrno, NL(QTPBTRN_ec), A68_TRUE, &BVPBTRN );
A_CALLPROC(NL(HTPBTRN_insert_newouter),(BVPBTRN, NL(Ofn).Closureno),(BVPBTRN, NL(Ofn).Closureno,(NL(HTPBTRN_insert_newouter)).nonlocals));
} 
break;
case 3: /* STRUCT(INT)  */
CVPBTRN_tyn = (CUPBTRN.data.mode3);
 /* line 352: */
{ 
DVPBTRN_typeno = CVPBTRN_tyn.Typeno;
 /* line 353: */
EVPBTRN = (*(&((*(&(NL(QTPBTRN_ec)->E)))->Types))) ;
FVPBTRN = A_HEAP(A68_169 ) ;
(*FVPBTRN) = (*(*(&A_VINDEX(EVPBTRN,DVPBTRN_typeno)))) ;
GVPBTRN_td = FVPBTRN;
 /* line 354: */
HVPBTRN = (&(GVPBTRN_td->Sort)) ;
(*HVPBTRN) = OKAATRN_outerdec;
 /* line 355: */
(*NL(WTPBTRN_newclosureno)) = ENCATRN_reserve_next_closureno((*A_CALLPROC(NL(BTPBTRN_newclosure),(),((NL(BTPBTRN_newclosure)).nonlocals))));
 /* line 356: */
KVPBTRN = (*(&(GVPBTRN_td->Typename))) ;
IVPBTRN.data[0] = A_UNITE(JVPBTRN,mode7,7,KVPBTRN);
MVPBTRN = '_' ;
IVPBTRN.data[1] = A_UNITE(LVPBTRN,mode6,6,MVPBTRN);
IVPBTRN.data[2] = A_UNITE(NVPBTRN,mode1,1,(*NL(WTPBTRN_newclosureno)));
UJBAOSL_oneline( A_HISVEC(OVPBTRN,IVPBTRN,3,A68_52 ), &PVPBTRN );
QVPBTRN = (&(GVPBTRN_td->Typename)) ;
(*QVPBTRN) = PVPBTRN;
 /* line 357: */
RVPBTRN = A_HEAP(A68_136 ) ;
(*RVPBTRN) = (*NL(VTPBTRN_newusage)) ;
SVPBTRN = (&(GVPBTRN_td->Usage)) ;
(*SVPBTRN) = RVPBTRN;
 /* line 358: */
UVPBTRN = A_HEAP(A68_169 ) ;
(*UVPBTRN) = (*GVPBTRN_td) ;
TVPBTRN_innertd = UVPBTRN;
 /* line 359: */
WVPBTRN = (&(TVPBTRN_innertd->Attr)) ;
(*WVPBTRN) = A_UNITE(VVPBTRN,mode5,5,(&ZHAATRN_attrnull));
 /* line 360: */
AIMBTRN_newtypes( NL(QTPBTRN_ec), &XVPBTRN );
YVPBTRN = (&A_VINDEX(XVPBTRN,DVPBTRN_typeno)) ;
(*YVPBTRN) = TVPBTRN_innertd;
 /* line 361: */
 /* line 362: */
 /* line 363: */
UFPBTRN_make_outer( A_UNITE(ZVPBTRN,mode2,2,GVPBTRN_td), DVPBTRN_typeno, NL(QTPBTRN_ec), A68_TRUE, &AWPBTRN );
A_CALLPROC(NL(HTPBTRN_insert_newouter),(AWPBTRN, NL(Ofn).Closureno),(AWPBTRN, NL(Ofn).Closureno,(NL(HTPBTRN_insert_newouter)).nonlocals));
} 
break;
case 5: /* STRUCT(INT)  */
BWPBTRN_fnn = (CUPBTRN.data.mode5);
 /* line 364: */
{ 
CWPBTRN_fnno = BWPBTRN_fnn.Fnno;
 /* line 365: */
 /* line 366: */
DWPBTRN = (*(&(AWLATRN_nulltprocs->Fndec))) ;
EWPBTRN = (*(&((*(&(NL(QTPBTRN_ec)->E)))->Fns))) ;
A_CALLPROC(DWPBTRN,((*(&A_VINDEX(EWPBTRN,CWPBTRN_fnno))), Tprocs, &FWPBTRN),((*(&A_VINDEX(EWPBTRN,CWPBTRN_fnno))), Tprocs, &FWPBTRN,(DWPBTRN).nonlocals));
GWPBTRN_fndc = FWPBTRN;
 /* line 367: */
 /* line 368: */
 /* line 369: */
if ( GWPBTRN_fndc.C )
{ 
HWPBTRN = GWPBTRN_fndc.F;
} 
else
{ 
 /* line 370: */
IWPBTRN = (*(&((*(&(NL(QTPBTRN_ec)->E)))->Fns))) ;
JWPBTRN = A_HEAP(A68_252 ) ;
(*JWPBTRN) = (*(*(&A_VINDEX(IWPBTRN,CWPBTRN_fnno)))) ;
HWPBTRN = JWPBTRN;
} 
KWPBTRN_fd = HWPBTRN;
 /* line 371: */
LWPBTRN = (&(KWPBTRN_fd->Sort)) ;
(*LWPBTRN) = OKAATRN_outerdec;
 /* line 372: */
(*NL(WTPBTRN_newclosureno)) = ENCATRN_reserve_next_closureno((*A_CALLPROC(NL(BTPBTRN_newclosure),(),((NL(BTPBTRN_newclosure)).nonlocals))));
 /* line 373: */
OWPBTRN = (*(&(KWPBTRN_fd->Fnname))) ;
MWPBTRN.data[0] = A_UNITE(NWPBTRN,mode7,7,OWPBTRN);
QWPBTRN = '_' ;
MWPBTRN.data[1] = A_UNITE(PWPBTRN,mode6,6,QWPBTRN);
MWPBTRN.data[2] = A_UNITE(RWPBTRN,mode1,1,(*NL(WTPBTRN_newclosureno)));
UJBAOSL_oneline( A_HISVEC(SWPBTRN,MWPBTRN,3,A68_52 ), &TWPBTRN );
UWPBTRN = (&(KWPBTRN_fd->Fnname)) ;
(*UWPBTRN) = TWPBTRN;
 /* line 374: */
VWPBTRN = A_HEAP(A68_136 ) ;
(*VWPBTRN) = (*NL(VTPBTRN_newusage)) ;
WWPBTRN = (&(KWPBTRN_fd->Usage)) ;
(*WWPBTRN) = VWPBTRN;
 /* line 375: */
YWPBTRN = A_HEAP(A68_252 ) ;
(*YWPBTRN) = (*KWPBTRN_fd) ;
XWPBTRN_innerfd = YWPBTRN;
 /* line 376: */
AXPBTRN = (&(XWPBTRN_innerfd->Attr)) ;
(*AXPBTRN) = A_UNITE(ZWPBTRN,mode5,5,(&ZHAATRN_attrnull));
 /* line 377: */
CXPBTRN = (&(XWPBTRN_innerfd->Fnbody)) ;
(*CXPBTRN) = A_UNITE(BXPBTRN,mode12,12,(&LIAATRN_bodynull));
 /* line 378: */
AJMBTRN_newfns( NL(QTPBTRN_ec), &DXPBTRN );
EXPBTRN = (&A_VINDEX(DXPBTRN,CWPBTRN_fnno)) ;
(*EXPBTRN) = XWPBTRN_innerfd;
 /* line 379: */
 /* line 380: */
 /* line 381: */
 /* line 382: */
UFPBTRN_make_outer( A_UNITE(FXPBTRN,mode3,3,KWPBTRN_fd), CWPBTRN_fnno, NL(QTPBTRN_ec), A68_TRUE, &GXPBTRN );
A_CALLPROC(NL(HTPBTRN_insert_newouter),(GXPBTRN, NL(Ofn).Closureno),(GXPBTRN, NL(Ofn).Closureno,(NL(HTPBTRN_insert_newouter)).nonlocals));
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 384: */
 /* line 385: */
HXPBTRN = A68_TRUE;
} 
A_PROC_EXIT(create_outer);
return( HXPBTRN );
} 
#undef NL

A_STATIC A68_VOID  LXPBTRN_step(A68_206  Step, A68_330 * Tprocs, A68_322  *ReturnedValue, void *NonLocals)
#define NL(x) (((MXPBTRN_step *)NonLocals)->x)
{ 
A68_206  NXPBTRN;  /* united object - for case conformity */
A68_237  OXPBTRN_dec;
A68_322  PXPBTRN;  /* collateral clause result */
A68_206  QXPBTRN;  /* OPERATORS - mode -> union mode */
A68_322  RXPBTRN;  /* clause result */
A68_322  SXPBTRN;  /* collateral clause result */
A68_206  TXPBTRN;  /* OPERATORS - unite union */
A68_365  UXPBTRN;  /* CALL */
A68_322  VXPBTRN;  /* avoid structure result */
A_PROC_ENTRY(step);
 /* line 388: */
 /* line 389: */
NXPBTRN = Step ;
switch ( NXPBTRN.mode )
{ 
case 1: /* STRUCT(INT)  */
case 2: /* STRUCT(INT)  */
case 3: /* STRUCT(INT)  */
case 4: /* STRUCT(INT)  */
case 5: /* STRUCT(INT)  */
A_UNCPY(OXPBTRN_dec,NXPBTRN);
 /* line 390: */
 /* line 391: */
if ( A_CALLPROC(NL(ZTPBTRN_create_outer),(OXPBTRN_dec, Tprocs),(OXPBTRN_dec, Tprocs,(NL(ZTPBTRN_create_outer)).nonlocals)) )
{ 
PXPBTRN.S = A_UNITE(QXPBTRN,mode12,12,(&JIAATRN_stepnull));
 /* line 392: */
PXPBTRN.C = A68_TRUE;
RXPBTRN = PXPBTRN;
} 
else
{ 
SXPBTRN.S = A_UUNITE(TXPBTRN,0,OXPBTRN_dec);
 /* line 393: */
 /* line 394: */
SXPBTRN.C = A68_FALSE;
RXPBTRN = SXPBTRN;
} 
break;
default: 
 /* line 395: */
UXPBTRN = (*(&(NL(Outertprocs)->Step))) ;
A_CALLPROC(UXPBTRN,(Step, Tprocs, &VXPBTRN),(Step, Tprocs, &VXPBTRN,(UXPBTRN).nonlocals));
RXPBTRN = VXPBTRN;
break;
} 
A_PROC_EXIT(step);
*ReturnedValue = (RXPBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ZXPBTRN_seqstep(A68_225  Step, A68_330 * Tprocs, A68_317  *ReturnedValue, void *NonLocals)
#define NL(x) (((AYPBTRN_seqstep *)NonLocals)->x)
{ 
A68_225  BYPBTRN;  /* united object - for case conformity */
A68_237  CYPBTRN_dec;
A68_317  DYPBTRN;  /* collateral clause result */
A68_225  EYPBTRN;  /* OPERATORS - mode -> union mode */
A68_317  FYPBTRN;  /* clause result */
A68_317  GYPBTRN;  /* collateral clause result */
A68_225  HYPBTRN;  /* OPERATORS - unite union */
A68_360  IYPBTRN;  /* CALL */
A68_317  JYPBTRN;  /* avoid structure result */
A_PROC_ENTRY(seqstep);
 /* line 398: */
 /* line 399: */
BYPBTRN = Step ;
switch ( BYPBTRN.mode )
{ 
case 1: /* STRUCT(INT)  */
case 2: /* STRUCT(INT)  */
case 3: /* STRUCT(INT)  */
case 4: /* STRUCT(INT)  */
case 5: /* STRUCT(INT)  */
A_UNCPY(CYPBTRN_dec,BYPBTRN);
 /* line 400: */
 /* line 401: */
if ( A_CALLPROC(NL(ZTPBTRN_create_outer),(CYPBTRN_dec, Tprocs),(CYPBTRN_dec, Tprocs,(NL(ZTPBTRN_create_outer)).nonlocals)) )
{ 
DYPBTRN.S = A_UNITE(EYPBTRN,mode15,15,(&HIAATRN_seqnull));
 /* line 402: */
DYPBTRN.C = A68_TRUE;
FYPBTRN = DYPBTRN;
} 
else
{ 
GYPBTRN.S = A_UUNITE(HYPBTRN,0,CYPBTRN_dec);
 /* line 403: */
 /* line 404: */
GYPBTRN.C = A68_FALSE;
FYPBTRN = GYPBTRN;
} 
break;
default: 
 /* line 405: */
IYPBTRN = (*(&(NL(Outertprocs)->Seqstep))) ;
A_CALLPROC(IYPBTRN,(Step, Tprocs, &JYPBTRN),(Step, Tprocs, &JYPBTRN,(IYPBTRN).nonlocals));
FYPBTRN = JYPBTRN;
break;
} 
A_PROC_EXIT(seqstep);
*ReturnedValue = (FYPBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  MYPBTRN_series(A68_205 * Ser, A68_330 * Tprocs, A68_323  *ReturnedValue)
{ 
A68_323  NYPBTRN;  /* collateral clause result */
A68_323  OYPBTRN;  /* clause result */
A68_365  PYPBTRN;  /* CALL */
A68_322  QYPBTRN;  /* avoid structure result */
A68_322  RYPBTRN_sc;
A68_366  SYPBTRN;  /* CALL */
A68_323  TYPBTRN;  /* avoid structure result */
A68_323  UYPBTRN_rest;
A68_BOOL  VYPBTRN;  /* optbool result */
A68_206  WYPBTRN;  /* united object - for case conformity */
A68_323  XYPBTRN;  /* collateral clause result */
A68_323  YYPBTRN;  /* collateral clause result */
A68_205  ZYPBTRN;  /* collateral clause result */
A68_205 * AZPBTRN;  /* YIELD */
A68_323  BZPBTRN;  /* collateral clause result */
A_PROC_ENTRY(series);
 /* line 412: */
 /* line 413: */
{ 
 /* line 414: */
if ( (Ser==SAAATRN_nilseries) )
{ 
NYPBTRN.S = Ser;
 /* line 415: */
NYPBTRN.C = A68_FALSE;
OYPBTRN = NYPBTRN;
} 
else
{ 
PYPBTRN = (*(&(Tprocs->Step))) ;
A_CALLPROC(PYPBTRN,((*(&(Ser->Step))), Tprocs, &QYPBTRN),((*(&(Ser->Step))), Tprocs, &QYPBTRN,(PYPBTRN).nonlocals));
RYPBTRN_sc = QYPBTRN;
 /* line 416: */
SYPBTRN = (*(&(Tprocs->Series))) ;
A_CALLPROC(SYPBTRN,((*(&(Ser->Rest))), Tprocs, &TYPBTRN),((*(&(Ser->Rest))), Tprocs, &TYPBTRN,(SYPBTRN).nonlocals));
UYPBTRN_rest = TYPBTRN;
 /* line 417: */
 /* line 418: */
VYPBTRN = UYPBTRN_rest.C;
if ( ! VYPBTRN )
{VYPBTRN = RYPBTRN_sc.C;
}
if ( VYPBTRN )
{ 
 /* line 419: */
WYPBTRN = RYPBTRN_sc.S ;
switch ( WYPBTRN.mode )
{ 
case 12: /* REF STRUCT(INT)  */
XYPBTRN.S = UYPBTRN_rest.S;
 /* line 420: */
XYPBTRN.C = A68_TRUE;
OYPBTRN = XYPBTRN;
break;
default: 
ZYPBTRN.Step = RYPBTRN_sc.S;
ZYPBTRN.Rest = UYPBTRN_rest.S;
AZPBTRN = A_HEAP(A68_205 ) ;
(*AZPBTRN) = ZYPBTRN ;
YYPBTRN.S = AZPBTRN;
 /* line 421: */
 /* line 422: */
YYPBTRN.C = A68_TRUE;
OYPBTRN = YYPBTRN;
break;
} 
} 
else
{ 
BZPBTRN.S = Ser;
 /* line 423: */
 /* line 424: */
 /* line 425: */
BZPBTRN.C = A68_FALSE;
OYPBTRN = BZPBTRN;
} 
} 
} 
A_PROC_EXIT(series);
*ReturnedValue = (OYPBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  EZPBTRN_sequence(A68_224 * Seq, A68_330 * Tprocs, A68_318  *ReturnedValue)
{ 
A68_318  FZPBTRN;  /* collateral clause result */
A68_318  GZPBTRN;  /* clause result */
A68_360  HZPBTRN;  /* CALL */
A68_317  IZPBTRN;  /* avoid structure result */
A68_317  JZPBTRN_sc;
A68_361  KZPBTRN;  /* CALL */
A68_318  LZPBTRN;  /* avoid structure result */
A68_318  MZPBTRN_rest;
A68_BOOL  NZPBTRN;  /* optbool result */
A68_225  OZPBTRN;  /* united object - for case conformity */
A68_318  PZPBTRN;  /* collateral clause result */
A68_318  QZPBTRN;  /* collateral clause result */
A68_224  RZPBTRN;  /* collateral clause result */
A68_224 * SZPBTRN;  /* YIELD */
A68_318  TZPBTRN;  /* collateral clause result */
A_PROC_ENTRY(sequence);
 /* line 428: */
 /* line 429: */
{ 
 /* line 430: */
if ( (Seq==QAAATRN_nilsequence) )
{ 
FZPBTRN.S = Seq;
 /* line 431: */
FZPBTRN.C = A68_FALSE;
GZPBTRN = FZPBTRN;
} 
else
{ 
HZPBTRN = (*(&(Tprocs->Seqstep))) ;
A_CALLPROC(HZPBTRN,((*(&(Seq->Step))), Tprocs, &IZPBTRN),((*(&(Seq->Step))), Tprocs, &IZPBTRN,(HZPBTRN).nonlocals));
JZPBTRN_sc = IZPBTRN;
 /* line 432: */
KZPBTRN = (*(&(Tprocs->Sequence))) ;
A_CALLPROC(KZPBTRN,((*(&(Seq->Rest))), Tprocs, &LZPBTRN),((*(&(Seq->Rest))), Tprocs, &LZPBTRN,(KZPBTRN).nonlocals));
MZPBTRN_rest = LZPBTRN;
 /* line 433: */
 /* line 434: */
NZPBTRN = MZPBTRN_rest.C;
if ( ! NZPBTRN )
{NZPBTRN = JZPBTRN_sc.C;
}
if ( NZPBTRN )
{ 
 /* line 435: */
OZPBTRN = JZPBTRN_sc.S ;
switch ( OZPBTRN.mode )
{ 
case 15: /* REF STRUCT(INT)  */
PZPBTRN.S = MZPBTRN_rest.S;
 /* line 436: */
PZPBTRN.C = A68_TRUE;
GZPBTRN = PZPBTRN;
break;
default: 
RZPBTRN.Step = JZPBTRN_sc.S;
RZPBTRN.Rest = MZPBTRN_rest.S;
SZPBTRN = A_HEAP(A68_224 ) ;
(*SZPBTRN) = RZPBTRN ;
QZPBTRN.S = SZPBTRN;
 /* line 437: */
 /* line 438: */
QZPBTRN.C = A68_TRUE;
GZPBTRN = QZPBTRN;
break;
} 
} 
else
{ 
TZPBTRN.S = Seq;
 /* line 439: */
 /* line 440: */
 /* line 441: */
TZPBTRN.C = A68_FALSE;
GZPBTRN = TZPBTRN;
} 
} 
} 
A_PROC_EXIT(sequence);
*ReturnedValue = (GZPBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  AGPBTRN_generator(A68_BOOL  YFPBTRN_anonymous, A68_485  *ReturnedValue, void *NonLocals)
#define NL(x) (((BGPBTRN_generator *)NonLocals)->x)
{ 
A68_485  CGPBTRN;  /* clause result */
A68_485  DGPBTRN;  /* OPERATORS - dynamic generator */
{ 
DGPBTRN.upb = NL(VFPBTRN_nattrs) ;
( YFPBTRN_anonymous? A_VLOC(A68_482 ,DGPBTRN): A_VHEAP(A68_482 ,DGPBTRN) );
CGPBTRN = DGPBTRN;
} 
*ReturnedValue = (CGPBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  IGPBTRN_generator(A68_BOOL  GGPBTRN_anonymous, A68_485  *ReturnedValue, void *NonLocals)
#define NL(x) (((JGPBTRN_generator *)NonLocals)->x)
{ 
A68_485  KGPBTRN;  /* clause result */
A68_485  LGPBTRN;  /* OPERATORS - dynamic generator */
{ 
LGPBTRN.upb = NL(WFPBTRN_ntypes) ;
( GGPBTRN_anonymous? A_VLOC(A68_482 ,LGPBTRN): A_VHEAP(A68_482 ,LGPBTRN) );
KGPBTRN = LGPBTRN;
} 
*ReturnedValue = (KGPBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  QGPBTRN_generator(A68_BOOL  OGPBTRN_anonymous, A68_485  *ReturnedValue, void *NonLocals)
#define NL(x) (((RGPBTRN_generator *)NonLocals)->x)
{ 
A68_485  SGPBTRN;  /* clause result */
A68_485  TGPBTRN;  /* OPERATORS - dynamic generator */
{ 
TGPBTRN.upb = NL(XFPBTRN_nfns) ;
( OGPBTRN_anonymous? A_VLOC(A68_482 ,TGPBTRN): A_VHEAP(A68_482 ,TGPBTRN) );
SGPBTRN = TGPBTRN;
} 
*ReturnedValue = (SGPBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  YGPBTRN_generator(A68_BOOL  WGPBTRN_anonymous, A68_256  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZGPBTRN_generator *)NonLocals)->x)
{ 
A68_256  AHPBTRN;  /* clause result */
A68_256  BHPBTRN;  /* OPERATORS - dynamic generator */
{ 
BHPBTRN.upb = NL(VFPBTRN_nattrs) ;
( WGPBTRN_anonymous? A_VLOC(A68_135 *,BHPBTRN): A_VHEAP(A68_135 *,BHPBTRN) );
AHPBTRN = BHPBTRN;
} 
*ReturnedValue = (AHPBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  GHPBTRN_generator(A68_BOOL  EHPBTRN_anonymous, A68_258  *ReturnedValue, void *NonLocals)
#define NL(x) (((HHPBTRN_generator *)NonLocals)->x)
{ 
A68_258  IHPBTRN;  /* clause result */
A68_258  JHPBTRN;  /* OPERATORS - dynamic generator */
{ 
JHPBTRN.upb = NL(WFPBTRN_ntypes) ;
( EHPBTRN_anonymous? A_VLOC(A68_169 *,JHPBTRN): A_VHEAP(A68_169 *,JHPBTRN) );
IHPBTRN = JHPBTRN;
} 
*ReturnedValue = (IHPBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  OHPBTRN_generator(A68_BOOL  MHPBTRN_anonymous, A68_260  *ReturnedValue, void *NonLocals)
#define NL(x) (((PHPBTRN_generator *)NonLocals)->x)
{ 
A68_260  QHPBTRN;  /* clause result */
A68_260  RHPBTRN;  /* OPERATORS - dynamic generator */
{ 
RHPBTRN.upb = NL(XFPBTRN_nfns) ;
( MHPBTRN_anonymous? A_VLOC(A68_252 *,RHPBTRN): A_VHEAP(A68_252 *,RHPBTRN) );
QHPBTRN = RHPBTRN;
} 
*ReturnedValue = (QHPBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ZHPBTRN_straight(A68_INT  XHPBTRN_anonymous, A68_490 * YHPBTRN_anonymous, A68_477  *ReturnedValue)
{ 
A68_477  JIPBTRN;  /* clause result */
A68_482 * KIPBTRN;  /* OPERATORS - prestraight */
A68_478  LIPBTRN;  /* OPERATORS - straighten */
A68_492  MIPBTRN;  /* procedure value */
A68_477  NIPBTRN;  /* OPERATORS - mode -> union mode */
A68_478  OIPBTRN;  /* YIELD */
KIPBTRN = (&A_VINDEX(*YHPBTRN_anonymous,XHPBTRN_anonymous)) ;
MIPBTRN.fn.fn_global = CIPBTRN_straight;
MIPBTRN.nonlocals = A68_NIL;
OIPBTRN = A_OPSTRAIGHT(KIPBTRN,MIPBTRN,2,LIPBTRN) ;
JIPBTRN = A_UNITE(NIPBTRN,mode8,8,OIPBTRN);
*ReturnedValue = (JIPBTRN);
return;
} 
#undef NL

A_STATIC A68_BOOL  HJPBTRN_update_attrno(A68_INT  Attrno, A68_INT * Mapped, void *NonLocals)
#define NL(x) (((IJPBTRN_update_attrno *)NonLocals)->x)
{ 
A68_482 * JJPBTRN_map;
A68_INT * KJPBTRN;  /* YIELD */
A68_INT * LJPBTRN;  /* YIELD */
A68_BOOL  MJPBTRN;  /* clause result */
A_PROC_ENTRY(update_attrno);
 /* line 72: */
{ 
JJPBTRN_map = (&A_VINDEX(NL(EGPBTRN_attrmap),Attrno));
 /* line 73: */
 /* line 74: */
if ( ((*(&(JJPBTRN_map->Oldtonew)))==0) )
{ 
KJPBTRN = (&(JJPBTRN_map->Oldtonew)) ;
(*KJPBTRN) = (*NL(UHPBTRN_newattrno))+=1;
 /* line 75: */
 /* line 76: */
LJPBTRN = (&((&A_VINDEX(NL(EGPBTRN_attrmap),(*NL(UHPBTRN_newattrno))))->Newtoold)) ;
(*LJPBTRN) = Attrno;
} 
 /* line 77: */
(*Mapped) = (*(&(JJPBTRN_map->Oldtonew)));
 /* line 78: */
 /* line 79: */
MJPBTRN = ((*(&(JJPBTRN_map->Oldtonew)))!=Attrno);
} 
A_PROC_EXIT(update_attrno);
return( MJPBTRN );
} 
#undef NL

A_STATIC A68_BOOL  QJPBTRN_update_typeno(A68_INT  Typeno, A68_INT * Mapped, void *NonLocals)
#define NL(x) (((RJPBTRN_update_typeno *)NonLocals)->x)
{ 
A68_482 * SJPBTRN_map;
A68_INT * TJPBTRN;  /* YIELD */
A68_INT * UJPBTRN;  /* YIELD */
A68_BOOL  VJPBTRN;  /* clause result */
A_PROC_ENTRY(update_typeno);
 /* line 82: */
{ 
SJPBTRN_map = (&A_VINDEX(NL(MGPBTRN_typemap),Typeno));
 /* line 83: */
 /* line 84: */
if ( ((*(&(SJPBTRN_map->Oldtonew)))==0) )
{ 
TJPBTRN = (&(SJPBTRN_map->Oldtonew)) ;
(*TJPBTRN) = (*NL(VHPBTRN_newtypeno))+=1;
 /* line 85: */
 /* line 86: */
UJPBTRN = (&((&A_VINDEX(NL(MGPBTRN_typemap),(*NL(VHPBTRN_newtypeno))))->Newtoold)) ;
(*UJPBTRN) = Typeno;
} 
 /* line 87: */
(*Mapped) = (*(&(SJPBTRN_map->Oldtonew)));
 /* line 88: */
 /* line 89: */
VJPBTRN = ((*(&(SJPBTRN_map->Oldtonew)))!=Typeno);
} 
A_PROC_EXIT(update_typeno);
return( VJPBTRN );
} 
#undef NL

A_STATIC A68_BOOL  ZJPBTRN_update_fnno(A68_INT  Fnno, A68_INT * Mapped, void *NonLocals)
#define NL(x) (((AKPBTRN_update_fnno *)NonLocals)->x)
{ 
A68_482 * BKPBTRN_map;
A68_INT * CKPBTRN;  /* YIELD */
A68_INT * DKPBTRN;  /* YIELD */
A68_BOOL  EKPBTRN;  /* clause result */
A_PROC_ENTRY(update_fnno);
 /* line 92: */
{ 
BKPBTRN_map = (&A_VINDEX(NL(UGPBTRN_fnmap),Fnno));
 /* line 93: */
 /* line 94: */
if ( ((*(&(BKPBTRN_map->Oldtonew)))==0) )
{ 
CKPBTRN = (&(BKPBTRN_map->Oldtonew)) ;
(*CKPBTRN) = (*NL(WHPBTRN_newfnno))+=1;
 /* line 95: */
 /* line 96: */
DKPBTRN = (&((&A_VINDEX(NL(UGPBTRN_fnmap),(*NL(WHPBTRN_newfnno))))->Newtoold)) ;
(*DKPBTRN) = Fnno;
} 
 /* line 97: */
(*Mapped) = (*(&(BKPBTRN_map->Oldtonew)));
 /* line 98: */
 /* line 99: */
EKPBTRN = ((*(&(BKPBTRN_map->Oldtonew)))!=Fnno);
} 
A_PROC_EXIT(update_fnno);
return( EKPBTRN );
} 
#undef NL

A_STATIC A68_VOID  IKPBTRN_attr(A68_129  Attr, A68_330 * Tprocs, A68_288  *ReturnedValue, void *NonLocals)
#define NL(x) (((JKPBTRN_attr *)NonLocals)->x)
{ 
A68_129  KKPBTRN;  /* united object - for case conformity */
A68_130 * LKPBTRN_an;
A68_INT  MKPBTRN_map;
A68_288  NKPBTRN;  /* collateral clause result */
A68_129  OKPBTRN;  /* OPERATORS - mode -> union mode */
A68_130 * PKPBTRN;  /* YIELD */
A68_288  QKPBTRN;  /* clause result */
A68_288  RKPBTRN;  /* collateral clause result */
A68_331  SKPBTRN;  /* CALL */
A68_288  TKPBTRN;  /* avoid structure result */
A_PROC_ENTRY(attr);
 /* line 102: */
 /* line 103: */
KKPBTRN = Attr ;
switch ( KKPBTRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
LKPBTRN_an = (KKPBTRN.data.mode1);
 /* line 104: */
{ 
 /* line 105: */
 /* line 106: */
if ( A_CALLPROC(NL(GJPBTRN_update_attrno),((*(&(LKPBTRN_an->Attrno))), (&MKPBTRN_map)),((*(&(LKPBTRN_an->Attrno))), (&MKPBTRN_map),(NL(GJPBTRN_update_attrno)).nonlocals)) )
{ 
PKPBTRN = UDAATRN_makeattrname(MKPBTRN_map) ;
NKPBTRN.A = A_UNITE(OKPBTRN,mode1,1,PKPBTRN);
 /* line 107: */
NKPBTRN.C = A68_TRUE;
QKPBTRN = NKPBTRN;
} 
else
{ 
RKPBTRN.A = Attr;
 /* line 108: */
 /* line 109: */
 /* line 110: */
RKPBTRN.C = A68_FALSE;
QKPBTRN = RKPBTRN;
} 
} 
break;
default: 
 /* line 111: */
SKPBTRN = (*(&(AWLATRN_nulltprocs->Attr))) ;
A_CALLPROC(SKPBTRN,(Attr, Tprocs, &TKPBTRN),(Attr, Tprocs, &TKPBTRN,(SKPBTRN).nonlocals));
QKPBTRN = TKPBTRN;
break;
} 
A_PROC_EXIT(attr);
*ReturnedValue = (QKPBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  XKPBTRN_type(A68_154  Type, A68_330 * Tprocs, A68_297  *ReturnedValue, void *NonLocals)
#define NL(x) (((YKPBTRN_type *)NonLocals)->x)
{ 
A68_154  ZKPBTRN;  /* united object - for case conformity */
A68_155 * ALPBTRN_tn;
A68_INT  BLPBTRN_map;
A68_297  CLPBTRN;  /* collateral clause result */
A68_154  DLPBTRN;  /* OPERATORS - mode -> union mode */
A68_155 * ELPBTRN;  /* YIELD */
A68_297  FLPBTRN;  /* clause result */
A68_297  GLPBTRN;  /* collateral clause result */
A68_154  HLPBTRN;  /* OPERATORS - mode -> union mode */
A68_340  ILPBTRN;  /* CALL */
A68_297  JLPBTRN;  /* avoid structure result */
A_PROC_ENTRY(type);
 /* line 114: */
 /* line 115: */
ZKPBTRN = Type ;
switch ( ZKPBTRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
ALPBTRN_tn = (ZKPBTRN.data.mode1);
 /* line 116: */
{ 
 /* line 117: */
 /* line 118: */
if ( A_CALLPROC(NL(PJPBTRN_update_typeno),((*(&(ALPBTRN_tn->Typeno))), (&BLPBTRN_map)),((*(&(ALPBTRN_tn->Typeno))), (&BLPBTRN_map),(NL(PJPBTRN_update_typeno)).nonlocals)) )
{ 
ELPBTRN = IFAATRN_maketname(BLPBTRN_map) ;
CLPBTRN.T = A_UNITE(DLPBTRN,mode1,1,ELPBTRN);
 /* line 119: */
CLPBTRN.C = A68_TRUE;
FLPBTRN = CLPBTRN;
} 
else
{ 
GLPBTRN.T = A_UNITE(HLPBTRN,mode1,1,ALPBTRN_tn);
 /* line 120: */
 /* line 121: */
 /* line 122: */
GLPBTRN.C = A68_FALSE;
FLPBTRN = GLPBTRN;
} 
} 
break;
default: 
 /* line 123: */
ILPBTRN = (*(&(AWLATRN_nulltprocs->Type))) ;
A_CALLPROC(ILPBTRN,(Type, Tprocs, &JLPBTRN),(Type, Tprocs, &JLPBTRN,(ILPBTRN).nonlocals));
FLPBTRN = JLPBTRN;
break;
} 
A_PROC_EXIT(type);
*ReturnedValue = (FLPBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  NLPBTRN_unit(A68_176  Unit, A68_330 * Tprocs, A68_306  *ReturnedValue, void *NonLocals)
#define NL(x) (((OLPBTRN_unit *)NonLocals)->x)
{ 
A68_176  PLPBTRN;  /* united object - for case conformity */
A68_171 * QLPBTRN_cpr;
A68_INT  RLPBTRN_map;
A68_306  SLPBTRN;  /* collateral clause result */
A68_171  TLPBTRN;  /* collateral clause result */
A68_171 * ULPBTRN;  /* YIELD */
A68_176  VLPBTRN;  /* OPERATORS - mode -> union mode */
A68_306  WLPBTRN;  /* clause result */
A68_349  XLPBTRN;  /* CALL */
A68_306  YLPBTRN;  /* avoid structure result */
A68_172 * ZLPBTRN_ci;
A68_INT  AMPBTRN_map;
A68_306  BMPBTRN;  /* collateral clause result */
A68_172  CMPBTRN;  /* collateral clause result */
A68_334  DMPBTRN;  /* CALL */
A68_291  EMPBTRN;  /* avoid structure result */
A68_172 * FMPBTRN;  /* YIELD */
A68_176  GMPBTRN;  /* OPERATORS - mode -> union mode */
A68_349  HMPBTRN;  /* CALL */
A68_306  IMPBTRN;  /* avoid structure result */
A68_173 * JMPBTRN_crng;
A68_INT  KMPBTRN_map;
A68_306  LMPBTRN;  /* collateral clause result */
A68_173  MMPBTRN;  /* collateral clause result */
A68_337  NMPBTRN;  /* CALL */
A68_294  OMPBTRN;  /* avoid structure result */
A68_173 * PMPBTRN;  /* YIELD */
A68_176  QMPBTRN;  /* OPERATORS - mode -> union mode */
A68_349  RMPBTRN;  /* CALL */
A68_306  SMPBTRN;  /* avoid structure result */
A68_179 * TMPBTRN_cprng;
A68_INT  UMPBTRN_map;
A68_306  VMPBTRN;  /* collateral clause result */
A68_179  WMPBTRN;  /* collateral clause result */
A68_179 * XMPBTRN;  /* YIELD */
A68_176  YMPBTRN;  /* OPERATORS - mode -> union mode */
A68_349  ZMPBTRN;  /* CALL */
A68_306  ANPBTRN;  /* avoid structure result */
A68_177 * BNPBTRN_cqu;
A68_INT  CNPBTRN_map;
A68_306  DNPBTRN;  /* collateral clause result */
A68_177  ENPBTRN;  /* collateral clause result */
A68_177 * FNPBTRN;  /* YIELD */
A68_176  GNPBTRN;  /* OPERATORS - mode -> union mode */
A68_349  HNPBTRN;  /* CALL */
A68_306  INPBTRN;  /* avoid structure result */
A68_183 * JNPBTRN_uas;
A68_INT  KNPBTRN_map;
A68_306  LNPBTRN;  /* collateral clause result */
A68_183  MNPBTRN;  /* collateral clause result */
A68_349  NNPBTRN;  /* CALL */
A68_306  ONPBTRN;  /* avoid structure result */
A68_183 * PNPBTRN;  /* YIELD */
A68_176  QNPBTRN;  /* OPERATORS - mode -> union mode */
A68_349  RNPBTRN;  /* CALL */
A68_306  SNPBTRN;  /* avoid structure result */
A68_184 * TNPBTRN_uex;
A68_INT  UNPBTRN_map;
A68_306  VNPBTRN;  /* collateral clause result */
A68_184  WNPBTRN;  /* collateral clause result */
A68_349  XNPBTRN;  /* CALL */
A68_306  YNPBTRN;  /* avoid structure result */
A68_184 * ZNPBTRN;  /* YIELD */
A68_176  AOPBTRN;  /* OPERATORS - mode -> union mode */
A68_349  BOPBTRN;  /* CALL */
A68_306  COPBTRN;  /* avoid structure result */
A68_185 * DOPBTRN_upt;
A68_INT  EOPBTRN_map;
A68_306  FOPBTRN;  /* collateral clause result */
A68_185  GOPBTRN;  /* collateral clause result */
A68_349  HOPBTRN;  /* CALL */
A68_306  IOPBTRN;  /* avoid structure result */
A68_185 * JOPBTRN;  /* YIELD */
A68_176  KOPBTRN;  /* OPERATORS - mode -> union mode */
A68_349  LOPBTRN;  /* CALL */
A68_306  MOPBTRN;  /* avoid structure result */
A68_349  NOPBTRN;  /* CALL */
A68_306  OOPBTRN;  /* avoid structure result */
A_PROC_ENTRY(unit);
 /* line 126: */
 /* line 127: */
PLPBTRN = Unit ;
switch ( PLPBTRN.mode )
{ 
case 2: /* REF STRUCT(INT,INT)  */
QLPBTRN_cpr = (PLPBTRN.data.mode2);
 /* line 128: */
{ 
 /* line 129: */
 /* line 130: */
if ( A_CALLPROC(NL(PJPBTRN_update_typeno),((*(&(QLPBTRN_cpr->Typeno))), (&RLPBTRN_map)),((*(&(QLPBTRN_cpr->Typeno))), (&RLPBTRN_map),(NL(PJPBTRN_update_typeno)).nonlocals)) )
{ 
TLPBTRN.Typeno = RLPBTRN_map;
TLPBTRN.Primno = (*(&(QLPBTRN_cpr->Primno)));
ULPBTRN = A_HEAP(A68_171 ) ;
(*ULPBTRN) = TLPBTRN ;
SLPBTRN.U = A_UNITE(VLPBTRN,mode2,2,ULPBTRN);
 /* line 131: */
SLPBTRN.C = A68_TRUE;
WLPBTRN = SLPBTRN;
} 
else
{ 
 /* line 132: */
 /* line 133: */
 /* line 134: */
XLPBTRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(XLPBTRN,(Unit, Tprocs, &YLPBTRN),(Unit, Tprocs, &YLPBTRN,(XLPBTRN).nonlocals));
WLPBTRN = YLPBTRN;
} 
} 
break;
case 3: /* REF STRUCT(INT,MODE138)  */
ZLPBTRN_ci = (PLPBTRN.data.mode3);
 /* line 135: */
{ 
 /* line 136: */
 /* line 137: */
if ( A_CALLPROC(NL(PJPBTRN_update_typeno),((*(&(ZLPBTRN_ci->Typeno))), (&AMPBTRN_map)),((*(&(ZLPBTRN_ci->Typeno))), (&AMPBTRN_map),(NL(PJPBTRN_update_typeno)).nonlocals)) )
{ 
 /* line 138: */
CMPBTRN.Typeno = AMPBTRN_map;
DMPBTRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(DMPBTRN,((*(&(ZLPBTRN_ci->Index))), Tprocs, &EMPBTRN),((*(&(ZLPBTRN_ci->Index))), Tprocs, &EMPBTRN,(DMPBTRN).nonlocals));
CMPBTRN.Index = EMPBTRN.F;
 /* line 139: */
FMPBTRN = A_HEAP(A68_172 ) ;
(*FMPBTRN) = CMPBTRN ;
BMPBTRN.U = A_UNITE(GMPBTRN,mode3,3,FMPBTRN);
 /* line 140: */
BMPBTRN.C = A68_TRUE;
WLPBTRN = BMPBTRN;
} 
else
{ 
 /* line 141: */
 /* line 142: */
 /* line 143: */
HMPBTRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(HMPBTRN,(Unit, Tprocs, &IMPBTRN),(Unit, Tprocs, &IMPBTRN,(HMPBTRN).nonlocals));
WLPBTRN = IMPBTRN;
} 
} 
break;
case 8: /* REF STRUCT(INT,MODE153)  */
JMPBTRN_crng = (PLPBTRN.data.mode8);
 /* line 144: */
{ 
 /* line 145: */
 /* line 146: */
if ( A_CALLPROC(NL(PJPBTRN_update_typeno),((*(&(JMPBTRN_crng->Typeno))), (&KMPBTRN_map)),((*(&(JMPBTRN_crng->Typeno))), (&KMPBTRN_map),(NL(PJPBTRN_update_typeno)).nonlocals)) )
{ 
 /* line 147: */
MMPBTRN.Typeno = KMPBTRN_map;
NMPBTRN = (*(&(Tprocs->Range))) ;
A_CALLPROC(NMPBTRN,((*(&(JMPBTRN_crng->Range))), Tprocs, &OMPBTRN),((*(&(JMPBTRN_crng->Range))), Tprocs, &OMPBTRN,(NMPBTRN).nonlocals));
MMPBTRN.Range = OMPBTRN.R;
 /* line 148: */
PMPBTRN = A_HEAP(A68_173 ) ;
(*PMPBTRN) = MMPBTRN ;
LMPBTRN.U = A_UNITE(QMPBTRN,mode8,8,PMPBTRN);
 /* line 149: */
LMPBTRN.C = A68_TRUE;
WLPBTRN = LMPBTRN;
} 
else
{ 
 /* line 150: */
 /* line 151: */
 /* line 152: */
RMPBTRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(RMPBTRN,(Unit, Tprocs, &SMPBTRN),(Unit, Tprocs, &SMPBTRN,(RMPBTRN).nonlocals));
WLPBTRN = SMPBTRN;
} 
} 
break;
case 9: /* REF STRUCT(INT,INT,INT)  */
TMPBTRN_cprng = (PLPBTRN.data.mode9);
 /* line 153: */
{ 
 /* line 154: */
 /* line 155: */
if ( A_CALLPROC(NL(PJPBTRN_update_typeno),((*(&(TMPBTRN_cprng->Typeno))), (&UMPBTRN_map)),((*(&(TMPBTRN_cprng->Typeno))), (&UMPBTRN_map),(NL(PJPBTRN_update_typeno)).nonlocals)) )
{ 
WMPBTRN.Typeno = UMPBTRN_map;
WMPBTRN.Firstno = (*(&(TMPBTRN_cprng->Firstno)));
WMPBTRN.Lastno = (*(&(TMPBTRN_cprng->Lastno)));
 /* line 156: */
XMPBTRN = A_HEAP(A68_179 ) ;
(*XMPBTRN) = WMPBTRN ;
VMPBTRN.U = A_UNITE(YMPBTRN,mode9,9,XMPBTRN);
 /* line 157: */
VMPBTRN.C = A68_TRUE;
WLPBTRN = VMPBTRN;
} 
else
{ 
 /* line 158: */
 /* line 159: */
 /* line 160: */
ZMPBTRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(ZMPBTRN,(Unit, Tprocs, &ANPBTRN),(Unit, Tprocs, &ANPBTRN,(ZMPBTRN).nonlocals));
WLPBTRN = ANPBTRN;
} 
} 
break;
case 5: /* REF STRUCT(INT,REF MODE32)  */
BNPBTRN_cqu = (PLPBTRN.data.mode5);
 /* line 161: */
{ 
 /* line 162: */
 /* line 163: */
if ( A_CALLPROC(NL(PJPBTRN_update_typeno),((*(&(BNPBTRN_cqu->Typeno))), (&CNPBTRN_map)),((*(&(BNPBTRN_cqu->Typeno))), (&CNPBTRN_map),(NL(PJPBTRN_update_typeno)).nonlocals)) )
{ 
ENPBTRN.Typeno = CNPBTRN_map;
ENPBTRN.String = (*(&(BNPBTRN_cqu->String)));
FNPBTRN = A_HEAP(A68_177 ) ;
(*FNPBTRN) = ENPBTRN ;
DNPBTRN.U = A_UNITE(GNPBTRN,mode5,5,FNPBTRN);
 /* line 164: */
DNPBTRN.C = A68_TRUE;
WLPBTRN = DNPBTRN;
} 
else
{ 
 /* line 165: */
 /* line 166: */
 /* line 167: */
HNPBTRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(HNPBTRN,(Unit, Tprocs, &INPBTRN),(Unit, Tprocs, &INPBTRN,(HNPBTRN).nonlocals));
WLPBTRN = INPBTRN;
} 
} 
break;
case 13: /* REF STRUCT(INT,INT,MODE176)  */
JNPBTRN_uas = (PLPBTRN.data.mode13);
 /* line 168: */
{ 
 /* line 169: */
 /* line 170: */
if ( A_CALLPROC(NL(PJPBTRN_update_typeno),((*(&(JNPBTRN_uas->Typeno))), (&KNPBTRN_map)),((*(&(JNPBTRN_uas->Typeno))), (&KNPBTRN_map),(NL(PJPBTRN_update_typeno)).nonlocals)) )
{ 
MNPBTRN.Typeno = KNPBTRN_map;
 /* line 171: */
MNPBTRN.Altno = (*(&(JNPBTRN_uas->Altno)));
NNPBTRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(NNPBTRN,((*(&(JNPBTRN_uas->Assoc))), Tprocs, &ONPBTRN),((*(&(JNPBTRN_uas->Assoc))), Tprocs, &ONPBTRN,(NNPBTRN).nonlocals));
MNPBTRN.Assoc = ONPBTRN.U;
 /* line 172: */
PNPBTRN = A_HEAP(A68_183 ) ;
(*PNPBTRN) = MNPBTRN ;
LNPBTRN.U = A_UNITE(QNPBTRN,mode13,13,PNPBTRN);
 /* line 173: */
LNPBTRN.C = A68_TRUE;
WLPBTRN = LNPBTRN;
} 
else
{ 
 /* line 174: */
 /* line 175: */
 /* line 176: */
RNPBTRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(RNPBTRN,(Unit, Tprocs, &SNPBTRN),(Unit, Tprocs, &SNPBTRN,(RNPBTRN).nonlocals));
WLPBTRN = SNPBTRN;
} 
} 
break;
case 14: /* REF STRUCT(MODE176,INT,INT)  */
TNPBTRN_uex = (PLPBTRN.data.mode14);
 /* line 177: */
{ 
 /* line 178: */
 /* line 179: */
if ( A_CALLPROC(NL(PJPBTRN_update_typeno),((*(&(TNPBTRN_uex->Typeno))), (&UNPBTRN_map)),((*(&(TNPBTRN_uex->Typeno))), (&UNPBTRN_map),(NL(PJPBTRN_update_typeno)).nonlocals)) )
{ 
 /* line 180: */
XNPBTRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(XNPBTRN,((*(&(TNPBTRN_uex->Extract))), Tprocs, &YNPBTRN),((*(&(TNPBTRN_uex->Extract))), Tprocs, &YNPBTRN,(XNPBTRN).nonlocals));
WNPBTRN.Extract = YNPBTRN.U;
WNPBTRN.Typeno = UNPBTRN_map;
WNPBTRN.Altno = (*(&(TNPBTRN_uex->Altno)));
 /* line 181: */
ZNPBTRN = A_HEAP(A68_184 ) ;
(*ZNPBTRN) = WNPBTRN ;
VNPBTRN.U = A_UNITE(AOPBTRN,mode14,14,ZNPBTRN);
 /* line 182: */
VNPBTRN.C = A68_TRUE;
WLPBTRN = VNPBTRN;
} 
else
{ 
 /* line 183: */
 /* line 184: */
 /* line 185: */
BOPBTRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(BOPBTRN,(Unit, Tprocs, &COPBTRN),(Unit, Tprocs, &COPBTRN,(BOPBTRN).nonlocals));
WLPBTRN = COPBTRN;
} 
} 
break;
case 15: /* REF STRUCT(MODE176,INT,INT)  */
DOPBTRN_upt = (PLPBTRN.data.mode15);
 /* line 186: */
{ 
 /* line 187: */
 /* line 188: */
if ( A_CALLPROC(NL(YJPBTRN_update_fnno),((*(&(DOPBTRN_upt->Fnno))), (&EOPBTRN_map)),((*(&(DOPBTRN_upt->Fnno))), (&EOPBTRN_map),(NL(YJPBTRN_update_fnno)).nonlocals)) )
{ 
 /* line 189: */
HOPBTRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(HOPBTRN,((*(&(DOPBTRN_upt->Unit))), Tprocs, &IOPBTRN),((*(&(DOPBTRN_upt->Unit))), Tprocs, &IOPBTRN,(HOPBTRN).nonlocals));
GOPBTRN.Unit = IOPBTRN.U;
GOPBTRN.Fnno = EOPBTRN_map;
GOPBTRN.Nameno = (*(&(DOPBTRN_upt->Nameno)));
 /* line 190: */
JOPBTRN = A_HEAP(A68_185 ) ;
(*JOPBTRN) = GOPBTRN ;
FOPBTRN.U = A_UNITE(KOPBTRN,mode15,15,JOPBTRN);
 /* line 191: */
FOPBTRN.C = A68_TRUE;
WLPBTRN = FOPBTRN;
} 
else
{ 
 /* line 192: */
 /* line 193: */
 /* line 194: */
LOPBTRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(LOPBTRN,(Unit, Tprocs, &MOPBTRN),(Unit, Tprocs, &MOPBTRN,(LOPBTRN).nonlocals));
WLPBTRN = MOPBTRN;
} 
} 
break;
default: 
 /* line 195: */
NOPBTRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(NOPBTRN,(Unit, Tprocs, &OOPBTRN),(Unit, Tprocs, &OOPBTRN,(NOPBTRN).nonlocals));
WLPBTRN = OOPBTRN;
break;
} 
A_PROC_EXIT(unit);
*ReturnedValue = (WLPBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  SOPBTRN_instance(A68_216  Inst, A68_330 * Tprocs, A68_309  *ReturnedValue, void *NonLocals)
#define NL(x) (((TOPBTRN_instance *)NonLocals)->x)
{ 
A68_INT  UOPBTRN_map;
A68_309  VOPBTRN;  /* collateral clause result */
A68_216  WOPBTRN;  /* collateral clause result */
A68_331  XOPBTRN;  /* CALL */
A68_288  YOPBTRN;  /* avoid structure result */
A68_216 * ZOPBTRN;  /* YIELD */
A68_309  APPBTRN;  /* clause result */
A68_352  BPPBTRN;  /* CALL */
A68_309  CPPBTRN;  /* avoid structure result */
A_PROC_ENTRY(instance);
 /* line 198: */
 /* line 199: */
{ 
 /* line 200: */
 /* line 201: */
if ( A_CALLPROC(NL(YJPBTRN_update_fnno),(Inst.Fnno, (&UOPBTRN_map)),(Inst.Fnno, (&UOPBTRN_map),(NL(YJPBTRN_update_fnno)).nonlocals)) )
{ 
WOPBTRN.Fnno = UOPBTRN_map;
 /* line 202: */
WOPBTRN.Macparams = Inst.Macparams;
XOPBTRN = (*(&(Tprocs->Attr))) ;
A_CALLPROC(XOPBTRN,(Inst.Attr, Tprocs, &YOPBTRN),(Inst.Attr, Tprocs, &YOPBTRN,(XOPBTRN).nonlocals));
WOPBTRN.Attr = YOPBTRN.A;
 /* line 203: */
ZOPBTRN = A_HEAP(A68_216 ) ;
VOPBTRN.I = (*ZOPBTRN) = WOPBTRN;
 /* line 204: */
VOPBTRN.C = A68_TRUE;
APPBTRN = VOPBTRN;
} 
else
{ 
 /* line 205: */
 /* line 206: */
BPPBTRN = (*(&(AWLATRN_nulltprocs->Instance))) ;
A_CALLPROC(BPPBTRN,(Inst, Tprocs, &CPPBTRN),(Inst, Tprocs, &CPPBTRN,(BPPBTRN).nonlocals));
APPBTRN = CPPBTRN;
} 
} 
A_PROC_EXIT(instance);
*ReturnedValue = (APPBTRN);
return;
} 
#undef NL
 /* line 209: */

A_STATIC A68_VOID  FPPBTRN_macspecs(A68_253  Mss, A68_330 * Tprocs, A68_326  *ReturnedValue)
{ 
A68_326  GPPBTRN;  /* collateral clause result */
A68_326  HPPBTRN;  /* clause result */
A_PROC_ENTRY(macspecs);
GPPBTRN.M = Mss;
GPPBTRN.C = A68_FALSE;
HPPBTRN = GPPBTRN;
A_PROC_EXIT(macspecs);
*ReturnedValue = (HPPBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  NRPBTRN_generator(A68_BOOL  LRPBTRN_anonymous, A68_256  *ReturnedValue, void *NonLocals)
#define NL(x) (((ORPBTRN_generator *)NonLocals)->x)
{ 
A68_256  PRPBTRN;  /* clause result */
A68_256  QRPBTRN;  /* OPERATORS - dynamic generator */
{ 
QRPBTRN.upb = (*NL(UHPBTRN_newattrno)) ;
( LRPBTRN_anonymous? A_VLOC(A68_135 *,QRPBTRN): A_VHEAP(A68_135 *,QRPBTRN) );
PRPBTRN = QRPBTRN;
} 
*ReturnedValue = (PRPBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  YRPBTRN_generator(A68_BOOL  WRPBTRN_anonymous, A68_258  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZRPBTRN_generator *)NonLocals)->x)
{ 
A68_258  ASPBTRN;  /* clause result */
A68_258  BSPBTRN;  /* OPERATORS - dynamic generator */
{ 
BSPBTRN.upb = (*NL(VHPBTRN_newtypeno)) ;
( WRPBTRN_anonymous? A_VLOC(A68_169 *,BSPBTRN): A_VHEAP(A68_169 *,BSPBTRN) );
ASPBTRN = BSPBTRN;
} 
*ReturnedValue = (ASPBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  JSPBTRN_generator(A68_BOOL  HSPBTRN_anonymous, A68_260  *ReturnedValue, void *NonLocals)
#define NL(x) (((KSPBTRN_generator *)NonLocals)->x)
{ 
A68_260  LSPBTRN;  /* clause result */
A68_260  MSPBTRN;  /* OPERATORS - dynamic generator */
{ 
MSPBTRN.upb = (*NL(WHPBTRN_newfnno)) ;
( HSPBTRN_anonymous? A_VLOC(A68_252 *,MSPBTRN): A_VHEAP(A68_252 *,MSPBTRN) );
LSPBTRN = MSPBTRN;
} 
*ReturnedValue = (LSPBTRN);
return;
} 
#undef NL

A_STATIC A68_265 ** CTPBTRN_newclosure(void *NonLocals)
#define NL(x) (((DTPBTRN_newclosure *)NonLocals)->x)
{ 
A68_265 ** ETPBTRN;  /* clause result */
A_PROC_ENTRY(newclosure);
{ 
 /* line 311: */
if ( !(*NL(ZSPBTRN_closure_changed)) )
{ 
(*NL(ZSPBTRN_closure_changed)) = A68_TRUE;
 /* line 312: */
(*NL(YSPBTRN_thisclosure)) = DPCATRN_copy_closure((*NL(YSPBTRN_thisclosure)), NL(Msg));
 /* line 313: */
 /* line 314: */
 /* line 315: */
(*NL(ATPBTRN_closureptr)) = ELCATRN_find_outers((*(&((&((*NL(ATPBTRN_closureptr))->Outer))->Closureno))), (*NL(YSPBTRN_thisclosure)), NL(Msg));
} 
 /* line 316: */
 /* line 317: */
ETPBTRN = NL(YSPBTRN_thisclosure);
} 
A_PROC_EXIT(newclosure);
return( ETPBTRN );
} 
#undef NL

A_STATIC A68_VOID  ITPBTRN_insert_newouter(A68_261  Newouter, A68_INT  Closureno, void *NonLocals)
#define NL(x) (((JTPBTRN_insert_newouter *)NonLocals)->x)
{ 
A68_262 ** KTPBTRN_ptr;
A_PROC_ENTRY(insert_newouter);
 /* line 320: */
{ 
KTPBTRN_ptr = (&((*A_CALLPROC(NL(BTPBTRN_newclosure),(),((NL(BTPBTRN_newclosure)).nonlocals)))->Outers));
 /* line 321: */
for ( ;; )
{ 
if ( !(((*(&((&((*KTPBTRN_ptr)->Outer))->Closureno)))!=Closureno)) ) break;
KTPBTRN_ptr = (&((*KTPBTRN_ptr)->Rest));
}
 /* line 322: */
 /* line 323: */
KNCATRN_insert_outer(Newouter, KTPBTRN_ptr, (*NL(YSPBTRN_thisclosure)), NL(Msg));
} 
A_PROC_EXIT(insert_newouter);
return;
} 
#undef NL

A_STATIC A68_VOID  OTPBTRN_outerfn_local(A68_261  Ofn, A68_330 * Outertprocs, A68_328  *ReturnedValue, void *NonLocals)
#define NL(x) (((PTPBTRN_outerfn_local *)NonLocals)->x)
{ 
A68_461  RTPBTRN;  /* avoid structure result */
A68_461  QTPBTRN_ec;
A68_260  STPBTRN;  /* OPERATORS - simple index */
A68_INT  TTPBTRN;  /* YIELD */
A68_252 * UTPBTRN_fdec;
A68_136  VTPBTRN_newusage;
A68_INT * WTPBTRN_newclosureno;
A68_498  ZTPBTRN_create_outer;   /* proc value of non-global proc */
A68_365  KXPBTRN_step;   /* proc value of non-global proc */
A68_360  YXPBTRN_seqstep;   /* proc value of non-global proc */
A68_500  UZPBTRN;  /* collateral clause result */
A68_375  VZPBTRN;  /* OPERATORS - mode -> union mode */
A68_365  WZPBTRN;  /* YIELD */
A68_375  XZPBTRN;  /* OPERATORS - mode -> union mode */
A68_366  YZPBTRN;  /* YIELD */
A68_366  ZZPBTRN;  /* procedure value */
A68_375  AAQBTRN;  /* OPERATORS - mode -> union mode */
A68_360  BAQBTRN;  /* YIELD */
A68_375  CAQBTRN;  /* OPERATORS - mode -> union mode */
A68_361  DAQBTRN;  /* YIELD */
A68_361  EAQBTRN;  /* procedure value */
A68_374  FAQBTRN;  /* OPERATORS - istruct -> vector */
A68_330 * GAQBTRN_newtprocs;
A68_367  HAQBTRN;  /* CALL */
A68_324  IAQBTRN;  /* avoid structure result */
A68_324  JAQBTRN_bc;
A68_BOOL  KAQBTRN;  /* optbool result */
A68_252 * LAQBTRN;  /* YIELD */
A68_252 * MAQBTRN_newfndec;
A68_248 * NAQBTRN;  /* YIELD */
A68_260  OAQBTRN;  /* avoid structure result */
A68_INT  PAQBTRN;  /* YIELD */
A68_252 ** QAQBTRN;  /* YIELD */
A68_328  RAQBTRN;  /* collateral clause result */
A68_483  SAQBTRN;  /* OPERATORS - mode -> union mode */
A68_261  TAQBTRN;  /* avoid structure result */
A68_328  UAQBTRN;  /* clause result */
A68_328  VAQBTRN;  /* collateral clause result */
A_PROC_ENTRY(outerfn_local);
 /* line 326: */
 /* line 327: */
{ 
QGMBTRN_makeenvironc( Ofn.Environ, &RTPBTRN );
QTPBTRN_ec = RTPBTRN;
 /* line 328: */
STPBTRN = (*(&((*(&((&QTPBTRN_ec)->E)))->Fns))) ;
TTPBTRN = 1 ;
UTPBTRN_fdec = (*(&A_VINDEX(STPBTRN,TTPBTRN)));
 /* line 329: */
VTPBTRN_newusage = (*(*(&(UTPBTRN_fdec->Usage))));
 /* line 330: */
WTPBTRN_newclosureno = (&((&VTPBTRN_newusage)->Closureno));
 /* line 335: */
A_CLOSURE( ZTPBTRN_create_outer, AUPBTRN_create_outer, BUPBTRN_create_outer );
(( BUPBTRN_create_outer * ) ( ZTPBTRN_create_outer.nonlocals )) -> QTPBTRN_ec = (&QTPBTRN_ec);
(( BUPBTRN_create_outer * ) ( ZTPBTRN_create_outer.nonlocals )) -> WTPBTRN_newclosureno = WTPBTRN_newclosureno;
(( BUPBTRN_create_outer * ) ( ZTPBTRN_create_outer.nonlocals )) -> BTPBTRN_newclosure = NL(BTPBTRN_newclosure);
(( BUPBTRN_create_outer * ) ( ZTPBTRN_create_outer.nonlocals )) -> VTPBTRN_newusage = (&VTPBTRN_newusage);
(( BUPBTRN_create_outer * ) ( ZTPBTRN_create_outer.nonlocals )) -> HTPBTRN_insert_newouter = NL(HTPBTRN_insert_newouter);
(( BUPBTRN_create_outer * ) ( ZTPBTRN_create_outer.nonlocals )) -> Ofn = Ofn;
 /* line 387: */
A_CLOSURE( KXPBTRN_step, LXPBTRN_step, MXPBTRN_step );
(( MXPBTRN_step * ) ( KXPBTRN_step.nonlocals )) -> ZTPBTRN_create_outer = ZTPBTRN_create_outer;
(( MXPBTRN_step * ) ( KXPBTRN_step.nonlocals )) -> Outertprocs = Outertprocs;
 /* line 397: */
A_CLOSURE( YXPBTRN_seqstep, ZXPBTRN_seqstep, AYPBTRN_seqstep );
(( AYPBTRN_seqstep * ) ( YXPBTRN_seqstep.nonlocals )) -> ZTPBTRN_create_outer = ZTPBTRN_create_outer;
(( AYPBTRN_seqstep * ) ( YXPBTRN_seqstep.nonlocals )) -> Outertprocs = Outertprocs;
 /* line 411: */
 /* line 427: */
 /* line 443: */
 /* line 444: */
WZPBTRN = KXPBTRN_step ;
UZPBTRN.data[0] = A_UNITE(VZPBTRN,mode35,35,WZPBTRN);
 /* line 445: */
ZZPBTRN.fn.fn_global = MYPBTRN_series;
ZZPBTRN.nonlocals = A68_NIL;
YZPBTRN = ZZPBTRN ;
UZPBTRN.data[1] = A_UNITE(XZPBTRN,mode36,36,YZPBTRN);
 /* line 446: */
BAQBTRN = YXPBTRN_seqstep ;
UZPBTRN.data[2] = A_UNITE(AAQBTRN,mode30,30,BAQBTRN);
EAQBTRN.fn.fn_global = EZPBTRN_sequence;
EAQBTRN.nonlocals = A68_NIL;
DAQBTRN = EAQBTRN ;
UZPBTRN.data[3] = A_UNITE(CAQBTRN,mode31,31,DAQBTRN);
GAQBTRN_newtprocs = THJATRN_make_newtprocs(Outertprocs, A_HISVEC(FAQBTRN,UZPBTRN,4,A68_375 ));
 /* line 447: */
HAQBTRN = (*(&(Outertprocs->Fnbody))) ;
A_CALLPROC(HAQBTRN,((*(&(UTPBTRN_fdec->Fnbody))), GAQBTRN_newtprocs, &IAQBTRN),((*(&(UTPBTRN_fdec->Fnbody))), GAQBTRN_newtprocs, &IAQBTRN,(HAQBTRN).nonlocals));
JAQBTRN_bc = IAQBTRN;
 /* line 451: */
MLJATRN_discard_tprocs(GAQBTRN_newtprocs);
 /* line 452: */
 /* line 453: */
KAQBTRN = JAQBTRN_bc.C;
if ( ! KAQBTRN )
{KAQBTRN = (*(&((&QTPBTRN_ec)->C)));
}
if ( KAQBTRN )
{ 
LAQBTRN = A_HEAP(A68_252 ) ;
(*LAQBTRN) = (*UTPBTRN_fdec) ;
MAQBTRN_newfndec = LAQBTRN;
 /* line 454: */
NAQBTRN = (&(MAQBTRN_newfndec->Fnbody)) ;
(*NAQBTRN) = JAQBTRN_bc.F;
 /* line 455: */
AJMBTRN_newfns( (&QTPBTRN_ec), &OAQBTRN );
PAQBTRN = 1 ;
QAQBTRN = (&A_VINDEX(OAQBTRN,PAQBTRN)) ;
(*QAQBTRN) = MAQBTRN_newfndec;
 /* line 459: */
UFPBTRN_make_outer( A_UNITE(SAQBTRN,mode3,3,MAQBTRN_newfndec), 1, (&QTPBTRN_ec), A68_FALSE, &TAQBTRN );
RAQBTRN.O = TAQBTRN;
 /* line 460: */
RAQBTRN.C = A68_TRUE;
UAQBTRN = RAQBTRN;
} 
else
{ 
VAQBTRN.O = Ofn;
 /* line 461: */
 /* line 462: */
VAQBTRN.C = A68_FALSE;
UAQBTRN = VAQBTRN;
} 
} 
A_PROC_EXIT(outerfn_local);
*ReturnedValue = (UAQBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ZAQBTRN_outer(A68_261  Outeritem, A68_330 * Tprocs, A68_328  *ReturnedValue, void *NonLocals)
#define NL(x) (((ABQBTRN_outer *)NonLocals)->x)
{ 
A68_328  BBQBTRN;  /* clause result */
A68_328  CBQBTRN;  /* avoid structure result */
A68_328  DBQBTRN;  /* collateral clause result */
A_PROC_ENTRY(outer);
 /* line 465: */
 /* line 466: */
if ( (Outeritem.Sort==VKAATRN_outerfn) )
{ 
 /* line 467: */
A_CALLPROC(NL(NTPBTRN_outerfn_local),(Outeritem, Tprocs, &CBQBTRN),(Outeritem, Tprocs, &CBQBTRN,(NL(NTPBTRN_outerfn_local)).nonlocals));
BBQBTRN = CBQBTRN;
} 
else
{ 
DBQBTRN.O = Outeritem;
 /* line 468: */
DBQBTRN.C = A68_FALSE;
BBQBTRN = DBQBTRN;
} 
A_PROC_EXIT(outer);
*ReturnedValue = (BBQBTRN);
return;
} 
#undef NL
 /* line 50: */
 /* line 51: */
 /* line 52: */

A_STATIC A68_VOID  UFPBTRN_make_outer(A68_483  Dec, A68_INT  Decno, A68_461 * Ec, A68_BOOL  Create_new_environ, A68_261  *ReturnedValue)
{ 
A68_INT  VFPBTRN_nattrs;
A68_INT  WFPBTRN_ntypes;
A68_INT  XFPBTRN_nfns;
A68_486  ZFPBTRN_generator;   /* proc value of non-global proc */
A68_485  FGPBTRN;  /* avoid structure result */
A68_485  EGPBTRN_attrmap;
A68_486  HGPBTRN_generator;   /* proc value of non-global proc */
A68_485  NGPBTRN;  /* avoid structure result */
A68_485  MGPBTRN_typemap;
A68_486  PGPBTRN_generator;   /* proc value of non-global proc */
A68_485  VGPBTRN;  /* avoid structure result */
A68_485  UGPBTRN_fnmap;
A68_487  XGPBTRN_generator;   /* proc value of non-global proc */
A68_256  DHPBTRN;  /* avoid structure result */
A68_256  CHPBTRN_transattrs;
A68_488  FHPBTRN_generator;   /* proc value of non-global proc */
A68_258  LHPBTRN;  /* avoid structure result */
A68_258  KHPBTRN_transtypes;
A68_489  NHPBTRN_generator;   /* proc value of non-global proc */
A68_260  THPBTRN;  /* avoid structure result */
A68_260  SHPBTRN_transfns;
A68_INT  UHPBTRN_newattrno;
A68_INT  VHPBTRN_newtypeno;
A68_INT  WHPBTRN_newfnno;
A68_485 * PIPBTRN;  /* OPERATORS - prestraight */
A68_478  QIPBTRN;  /* OPERATORS - straighten */
A68_491  RIPBTRN;  /* procedure value */
A68_477  SIPBTRN;  /* OPERATORS - mode -> union mode */
A68_478  TIPBTRN;  /* YIELD */
A68_485 * UIPBTRN;  /* OPERATORS - prestraight */
A68_478  VIPBTRN;  /* OPERATORS - straighten */
A68_491  WIPBTRN;  /* procedure value */
A68_477  XIPBTRN;  /* OPERATORS - mode -> union mode */
A68_478  YIPBTRN;  /* YIELD */
A68_485 * ZIPBTRN;  /* OPERATORS - prestraight */
A68_478  AJPBTRN;  /* OPERATORS - straighten */
A68_491  BJPBTRN;  /* procedure value */
A68_477  CJPBTRN;  /* OPERATORS - mode -> union mode */
A68_478  DJPBTRN;  /* YIELD */
A68_493  GJPBTRN_update_attrno;   /* proc value of non-global proc */
A68_493  PJPBTRN_update_typeno;   /* proc value of non-global proc */
A68_493  YJPBTRN_update_fnno;   /* proc value of non-global proc */
A68_331  HKPBTRN_attr;   /* proc value of non-global proc */
A68_340  WKPBTRN_type;   /* proc value of non-global proc */
A68_349  MLPBTRN_unit;   /* proc value of non-global proc */
A68_352  ROPBTRN_instance;   /* proc value of non-global proc */
A68_494  IPPBTRN;  /* collateral clause result */
A68_375  JPPBTRN;  /* OPERATORS - mode -> union mode */
A68_331  KPPBTRN;  /* YIELD */
A68_375  LPPBTRN;  /* OPERATORS - mode -> union mode */
A68_340  MPPBTRN;  /* YIELD */
A68_375  NPPBTRN;  /* OPERATORS - mode -> union mode */
A68_349  OPPBTRN;  /* YIELD */
A68_375  PPPBTRN;  /* OPERATORS - mode -> union mode */
A68_352  QPPBTRN;  /* YIELD */
A68_375  RPPBTRN;  /* OPERATORS - mode -> union mode */
A68_369  SPPBTRN;  /* YIELD */
A68_369  TPPBTRN;  /* procedure value */
A68_374  UPPBTRN;  /* OPERATORS - istruct -> vector */
A68_330 * VPPBTRN_newtprocs;
A68_INT  WPPBTRN_deccnt;
A68_INT  XPPBTRN_mpno;
A68_INT  YPPBTRN_outersort;
A68_INT  ZPPBTRN_newclosureno;
A68_135 * AQPBTRN_atdec;
A68_169 * BQPBTRN_tydec;
A68_252 * CQPBTRN_fndec;
A68_483  DQPBTRN;  /* united object - for case conformity */
A68_135 * EQPBTRN_atd;
A68_169 * FQPBTRN_tyd;
A68_252 * GQPBTRN_fnd;
A68_BOOL  HQPBTRN_atch;
A68_BOOL  IQPBTRN_tych;
A68_BOOL  JQPBTRN_fnch;
A68_BOOL  KQPBTRN;  /* optbool result */
A68_BOOL  LQPBTRN;  /* optbool result */
A68_260  MQPBTRN;  /* OPERATORS - simple index */
A68_370  NQPBTRN;  /* CALL */
A68_327  OQPBTRN;  /* avoid structure result */
A68_327  PQPBTRN_fndc;
A68_252 ** QQPBTRN;  /* YIELD */
A68_BOOL  RQPBTRN;  /* optbool result */
A68_BOOL  SQPBTRN;  /* optbool result */
A68_BOOL  TQPBTRN;  /* optbool result */
A68_258  UQPBTRN;  /* OPERATORS - simple index */
A68_344  VQPBTRN;  /* CALL */
A68_301  WQPBTRN;  /* avoid structure result */
A68_301  XQPBTRN_tydc;
A68_169 ** YQPBTRN;  /* YIELD */
A68_BOOL  ZQPBTRN;  /* optbool result */
A68_BOOL  ARPBTRN;  /* optbool result */
A68_BOOL  BRPBTRN;  /* optbool result */
A68_256  CRPBTRN;  /* OPERATORS - simple index */
A68_333  DRPBTRN;  /* CALL */
A68_290  ERPBTRN;  /* avoid structure result */
A68_290  FRPBTRN_atdc;
A68_135 ** GRPBTRN;  /* YIELD */
A68_BOOL  HRPBTRN;  /* optbool result */
A68_255 * IRPBTRN;  /* YIELD */
A68_255 * JRPBTRN_newenv;
A68_BOOL  KRPBTRN;  /* optbool result */
A68_487  MRPBTRN_generator;   /* proc value of non-global proc */
A68_256  RRPBTRN;  /* avoid structure result */
A68_256  SRPBTRN;  /* OPERATORS - trim index */
A68_256  TRPBTRN;  /* OPERATORS - assign op */
A68_256 * URPBTRN;  /* YIELD */
A68_BOOL  VRPBTRN;  /* optbool result */
A68_488  XRPBTRN_generator;   /* proc value of non-global proc */
A68_258  CSPBTRN;  /* avoid structure result */
A68_258  DSPBTRN;  /* OPERATORS - trim index */
A68_258  ESPBTRN;  /* OPERATORS - assign op */
A68_258 * FSPBTRN;  /* YIELD */
A68_BOOL  GSPBTRN;  /* optbool result */
A68_489  ISPBTRN_generator;   /* proc value of non-global proc */
A68_260  NSPBTRN;  /* avoid structure result */
A68_260  OSPBTRN;  /* OPERATORS - trim index */
A68_260  PSPBTRN;  /* OPERATORS - assign op */
A68_260 * QSPBTRN;  /* YIELD */
A68_261  RSPBTRN;  /* collateral clause result */
A68_261  SSPBTRN;  /* clause result */
A_PROC_ENTRY(make_outer);
 /* line 53: */
 /* line 54: */
{ 
VFPBTRN_nattrs = (*(&((*(&(Ec->E)))->Attrs))).upb;
 /* line 55: */
WFPBTRN_ntypes = (*(&((*(&(Ec->E)))->Types))).upb;
 /* line 56: */
XFPBTRN_nfns = (*(&((*(&(Ec->E)))->Fns))).upb;
 /* line 58: */
A_CLOSURE( ZFPBTRN_generator, AGPBTRN_generator, BGPBTRN_generator );
(( BGPBTRN_generator * ) ( ZFPBTRN_generator.nonlocals )) -> VFPBTRN_nattrs = VFPBTRN_nattrs;
A_CALLPROC(ZFPBTRN_generator,(A68_TRUE, &FGPBTRN),(A68_TRUE, &FGPBTRN,(ZFPBTRN_generator).nonlocals));
EGPBTRN_attrmap = FGPBTRN;
 /* line 59: */
A_CLOSURE( HGPBTRN_generator, IGPBTRN_generator, JGPBTRN_generator );
(( JGPBTRN_generator * ) ( HGPBTRN_generator.nonlocals )) -> WFPBTRN_ntypes = WFPBTRN_ntypes;
A_CALLPROC(HGPBTRN_generator,(A68_TRUE, &NGPBTRN),(A68_TRUE, &NGPBTRN,(HGPBTRN_generator).nonlocals));
MGPBTRN_typemap = NGPBTRN;
 /* line 60: */
A_CLOSURE( PGPBTRN_generator, QGPBTRN_generator, RGPBTRN_generator );
(( RGPBTRN_generator * ) ( PGPBTRN_generator.nonlocals )) -> XFPBTRN_nfns = XFPBTRN_nfns;
A_CALLPROC(PGPBTRN_generator,(A68_TRUE, &VGPBTRN),(A68_TRUE, &VGPBTRN,(PGPBTRN_generator).nonlocals));
UGPBTRN_fnmap = VGPBTRN;
 /* line 62: */
A_CLOSURE( XGPBTRN_generator, YGPBTRN_generator, ZGPBTRN_generator );
(( ZGPBTRN_generator * ) ( XGPBTRN_generator.nonlocals )) -> VFPBTRN_nattrs = VFPBTRN_nattrs;
A_CALLPROC(XGPBTRN_generator,(A68_TRUE, &DHPBTRN),(A68_TRUE, &DHPBTRN,(XGPBTRN_generator).nonlocals));
CHPBTRN_transattrs = DHPBTRN;
 /* line 63: */
A_CLOSURE( FHPBTRN_generator, GHPBTRN_generator, HHPBTRN_generator );
(( HHPBTRN_generator * ) ( FHPBTRN_generator.nonlocals )) -> WFPBTRN_ntypes = WFPBTRN_ntypes;
A_CALLPROC(FHPBTRN_generator,(A68_TRUE, &LHPBTRN),(A68_TRUE, &LHPBTRN,(FHPBTRN_generator).nonlocals));
KHPBTRN_transtypes = LHPBTRN;
 /* line 64: */
A_CLOSURE( NHPBTRN_generator, OHPBTRN_generator, PHPBTRN_generator );
(( PHPBTRN_generator * ) ( NHPBTRN_generator.nonlocals )) -> XFPBTRN_nfns = XFPBTRN_nfns;
A_CALLPROC(NHPBTRN_generator,(A68_TRUE, &THPBTRN),(A68_TRUE, &THPBTRN,(NHPBTRN_generator).nonlocals));
SHPBTRN_transfns = THPBTRN;
 /* line 65: */
UHPBTRN_newattrno = 0;
VHPBTRN_newtypeno = 0;
WHPBTRN_newfnno = 0;
 /* line 67: */
PIPBTRN = A_HEAP(A68_485 ) ;
* PIPBTRN = EGPBTRN_attrmap ;
RIPBTRN.fn.fn_global = ZHPBTRN_straight;
RIPBTRN.nonlocals = A68_NIL;
TIPBTRN = A_OPSTRAIGHT(PIPBTRN,RIPBTRN,(*PIPBTRN).upb,QIPBTRN) ;
FFAAOSL_clear(A_UNITE(SIPBTRN,mode8,8,TIPBTRN));
 /* line 68: */
UIPBTRN = A_HEAP(A68_485 ) ;
* UIPBTRN = MGPBTRN_typemap ;
WIPBTRN.fn.fn_global = ZHPBTRN_straight;
WIPBTRN.nonlocals = A68_NIL;
YIPBTRN = A_OPSTRAIGHT(UIPBTRN,WIPBTRN,(*UIPBTRN).upb,VIPBTRN) ;
FFAAOSL_clear(A_UNITE(XIPBTRN,mode8,8,YIPBTRN));
 /* line 69: */
ZIPBTRN = A_HEAP(A68_485 ) ;
* ZIPBTRN = UGPBTRN_fnmap ;
BJPBTRN.fn.fn_global = ZHPBTRN_straight;
BJPBTRN.nonlocals = A68_NIL;
DJPBTRN = A_OPSTRAIGHT(ZIPBTRN,BJPBTRN,(*ZIPBTRN).upb,AJPBTRN) ;
FFAAOSL_clear(A_UNITE(CJPBTRN,mode8,8,DJPBTRN));
 /* line 71: */
A_CLOSURE( GJPBTRN_update_attrno, HJPBTRN_update_attrno, IJPBTRN_update_attrno );
(( IJPBTRN_update_attrno * ) ( GJPBTRN_update_attrno.nonlocals )) -> EGPBTRN_attrmap = EGPBTRN_attrmap;
(( IJPBTRN_update_attrno * ) ( GJPBTRN_update_attrno.nonlocals )) -> UHPBTRN_newattrno = (&UHPBTRN_newattrno);
 /* line 81: */
A_CLOSURE( PJPBTRN_update_typeno, QJPBTRN_update_typeno, RJPBTRN_update_typeno );
(( RJPBTRN_update_typeno * ) ( PJPBTRN_update_typeno.nonlocals )) -> MGPBTRN_typemap = MGPBTRN_typemap;
(( RJPBTRN_update_typeno * ) ( PJPBTRN_update_typeno.nonlocals )) -> VHPBTRN_newtypeno = (&VHPBTRN_newtypeno);
 /* line 91: */
A_CLOSURE( YJPBTRN_update_fnno, ZJPBTRN_update_fnno, AKPBTRN_update_fnno );
(( AKPBTRN_update_fnno * ) ( YJPBTRN_update_fnno.nonlocals )) -> UGPBTRN_fnmap = UGPBTRN_fnmap;
(( AKPBTRN_update_fnno * ) ( YJPBTRN_update_fnno.nonlocals )) -> WHPBTRN_newfnno = (&WHPBTRN_newfnno);
 /* line 101: */
A_CLOSURE( HKPBTRN_attr, IKPBTRN_attr, JKPBTRN_attr );
(( JKPBTRN_attr * ) ( HKPBTRN_attr.nonlocals )) -> GJPBTRN_update_attrno = GJPBTRN_update_attrno;
 /* line 113: */
A_CLOSURE( WKPBTRN_type, XKPBTRN_type, YKPBTRN_type );
(( YKPBTRN_type * ) ( WKPBTRN_type.nonlocals )) -> PJPBTRN_update_typeno = PJPBTRN_update_typeno;
 /* line 125: */
A_CLOSURE( MLPBTRN_unit, NLPBTRN_unit, OLPBTRN_unit );
(( OLPBTRN_unit * ) ( MLPBTRN_unit.nonlocals )) -> PJPBTRN_update_typeno = PJPBTRN_update_typeno;
(( OLPBTRN_unit * ) ( MLPBTRN_unit.nonlocals )) -> YJPBTRN_update_fnno = YJPBTRN_update_fnno;
 /* line 197: */
A_CLOSURE( ROPBTRN_instance, SOPBTRN_instance, TOPBTRN_instance );
(( TOPBTRN_instance * ) ( ROPBTRN_instance.nonlocals )) -> YJPBTRN_update_fnno = YJPBTRN_update_fnno;
 /* line 208: */
 /* line 213: */
 /* line 214: */
KPPBTRN = HKPBTRN_attr ;
IPPBTRN.data[0] = A_UNITE(JPPBTRN,mode1,1,KPPBTRN);
 /* line 215: */
MPPBTRN = WKPBTRN_type ;
IPPBTRN.data[1] = A_UNITE(LPPBTRN,mode10,10,MPPBTRN);
 /* line 216: */
OPPBTRN = MLPBTRN_unit ;
IPPBTRN.data[2] = A_UNITE(NPPBTRN,mode19,19,OPPBTRN);
 /* line 217: */
QPPBTRN = ROPBTRN_instance ;
IPPBTRN.data[3] = A_UNITE(PPPBTRN,mode22,22,QPPBTRN);
TPPBTRN.fn.fn_global = FPPBTRN_macspecs;
TPPBTRN.nonlocals = A68_NIL;
SPPBTRN = TPPBTRN ;
IPPBTRN.data[4] = A_UNITE(RPPBTRN,mode39,39,SPPBTRN);
VPPBTRN_newtprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HISVEC(UPPBTRN,IPPBTRN,5,A68_375 ));
 /* line 218: */
 /* line 219: */
 /* line 220: */
 /* line 221: */
 /* line 223: */
 /* line 224: */
DQPBTRN = Dec ;
switch ( DQPBTRN.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26,MODE129,REF MODE136)  */
EQPBTRN_atd = (DQPBTRN.data.mode1);
 /* line 225: */
{ 
YPPBTRN_outersort = RKAATRN_outerattr;
 /* line 226: */
AQPBTRN_atdec = EQPBTRN_atd;
 /* line 227: */
ZPPBTRN_newclosureno = (*(&((*(&(EQPBTRN_atd->Usage)))->Closureno)));
 /* line 228: */
 /* line 229: */
 /* line 230: */
A_CALLPROC(GJPBTRN_update_attrno,(Decno, (&XPPBTRN_mpno)),(Decno, (&XPPBTRN_mpno),(GJPBTRN_update_attrno).nonlocals));
} 
break;
case 2: /* REF STRUCT(INT,REF MODE26,MODE129,MODE167,REF MODE136)  */
FQPBTRN_tyd = (DQPBTRN.data.mode2);
 /* line 231: */
{ 
YPPBTRN_outersort = TKAATRN_outertype;
 /* line 232: */
BQPBTRN_tydec = FQPBTRN_tyd;
 /* line 233: */
ZPPBTRN_newclosureno = (*(&((*(&(FQPBTRN_tyd->Usage)))->Closureno)));
 /* line 234: */
 /* line 235: */
 /* line 236: */
A_CALLPROC(PJPBTRN_update_typeno,(Decno, (&XPPBTRN_mpno)),(Decno, (&XPPBTRN_mpno),(PJPBTRN_update_typeno).nonlocals));
} 
break;
case 3: /* REF STRUCT(INT,BOOL,REF MODE26,REF MODE253,MODE129,REF MODE217,REF MODE217,REF MODE254,MODE248,REF MODE136)  */
GQPBTRN_fnd = (DQPBTRN.data.mode3);
 /* line 237: */
{ 
YPPBTRN_outersort = VKAATRN_outerfn;
 /* line 238: */
CQPBTRN_fndec = GQPBTRN_fnd;
 /* line 239: */
ZPPBTRN_newclosureno = (*(&((*(&(GQPBTRN_fnd->Usage)))->Closureno)));
 /* line 240: */
 /* line 241: */
 /* line 242: */
 /* line 243: */
A_CALLPROC(YJPBTRN_update_fnno,(Decno, (&XPPBTRN_mpno)),(Decno, (&XPPBTRN_mpno),(YJPBTRN_update_fnno).nonlocals));
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 245: */
HQPBTRN_atch = A68_FALSE;
IQPBTRN_tych = A68_FALSE;
JQPBTRN_fnch = A68_FALSE;
 /* line 247: */
WPPBTRN_deccnt = 0;
 /* line 248: */
for ( ;; )
{ 
 /* line 249: */
KQPBTRN = ((WPPBTRN_deccnt+=1)<=XFPBTRN_nfns);
if ( KQPBTRN )
{ /* line 250: */
KQPBTRN = ((XPPBTRN_mpno = (*(&((&A_VINDEX(UGPBTRN_fnmap,WPPBTRN_deccnt))->Newtoold))))>0);
}
if ( !(KQPBTRN) ) break;
LQPBTRN = (WPPBTRN_deccnt!=1);
if ( ! LQPBTRN )
{ /* line 251: */
LQPBTRN = (YPPBTRN_outersort!=VKAATRN_outerfn);
}
if ( LQPBTRN )
{ 
 /* line 252: */
MQPBTRN = (*(&((*(&(Ec->E)))->Fns))) ;
CQPBTRN_fndec = (*(&A_VINDEX(MQPBTRN,XPPBTRN_mpno)));
} 
 /* line 253: */
NQPBTRN = (*(&(AWLATRN_nulltprocs->Fndec))) ;
A_CALLPROC(NQPBTRN,(CQPBTRN_fndec, VPPBTRN_newtprocs, &OQPBTRN),(CQPBTRN_fndec, VPPBTRN_newtprocs, &OQPBTRN,(NQPBTRN).nonlocals));
PQPBTRN_fndc = OQPBTRN;
 /* line 254: */
QQPBTRN = (&A_VINDEX(SHPBTRN_transfns,WPPBTRN_deccnt)) ;
(*QQPBTRN) = PQPBTRN_fndc.F;
 /* line 255: */
 /* line 256: */
RQPBTRN = JQPBTRN_fnch;
if ( ! RQPBTRN )
{RQPBTRN = PQPBTRN_fndc.C;
}
JQPBTRN_fnch = RQPBTRN;
}
 /* line 258: */
WPPBTRN_deccnt = 0;
 /* line 259: */
for ( ;; )
{ 
 /* line 260: */
SQPBTRN = ((WPPBTRN_deccnt+=1)<=WFPBTRN_ntypes);
if ( SQPBTRN )
{ /* line 261: */
SQPBTRN = ((XPPBTRN_mpno = (*(&((&A_VINDEX(MGPBTRN_typemap,WPPBTRN_deccnt))->Newtoold))))>0);
}
if ( !(SQPBTRN) ) break;
TQPBTRN = (WPPBTRN_deccnt!=1);
if ( ! TQPBTRN )
{ /* line 262: */
TQPBTRN = (YPPBTRN_outersort!=TKAATRN_outertype);
}
if ( TQPBTRN )
{ 
 /* line 263: */
UQPBTRN = (*(&((*(&(Ec->E)))->Types))) ;
BQPBTRN_tydec = (*(&A_VINDEX(UQPBTRN,XPPBTRN_mpno)));
} 
 /* line 264: */
VQPBTRN = (*(&(AWLATRN_nulltprocs->Typedec))) ;
A_CALLPROC(VQPBTRN,(BQPBTRN_tydec, VPPBTRN_newtprocs, &WQPBTRN),(BQPBTRN_tydec, VPPBTRN_newtprocs, &WQPBTRN,(VQPBTRN).nonlocals));
XQPBTRN_tydc = WQPBTRN;
 /* line 265: */
YQPBTRN = (&A_VINDEX(KHPBTRN_transtypes,WPPBTRN_deccnt)) ;
(*YQPBTRN) = XQPBTRN_tydc.T;
 /* line 266: */
 /* line 267: */
ZQPBTRN = IQPBTRN_tych;
if ( ! ZQPBTRN )
{ZQPBTRN = XQPBTRN_tydc.C;
}
IQPBTRN_tych = ZQPBTRN;
}
 /* line 269: */
WPPBTRN_deccnt = 0;
 /* line 270: */
for ( ;; )
{ 
 /* line 271: */
ARPBTRN = ((WPPBTRN_deccnt+=1)<=VFPBTRN_nattrs);
if ( ARPBTRN )
{ /* line 272: */
ARPBTRN = ((XPPBTRN_mpno = (*(&((&A_VINDEX(EGPBTRN_attrmap,WPPBTRN_deccnt))->Newtoold))))>0);
}
if ( !(ARPBTRN) ) break;
BRPBTRN = (WPPBTRN_deccnt!=1);
if ( ! BRPBTRN )
{ /* line 273: */
BRPBTRN = (YPPBTRN_outersort!=RKAATRN_outerattr);
}
if ( BRPBTRN )
{ 
 /* line 274: */
CRPBTRN = (*(&((*(&(Ec->E)))->Attrs))) ;
AQPBTRN_atdec = (*(&A_VINDEX(CRPBTRN,XPPBTRN_mpno)));
} 
 /* line 275: */
DRPBTRN = (*(&(AWLATRN_nulltprocs->Attrdec))) ;
A_CALLPROC(DRPBTRN,(AQPBTRN_atdec, VPPBTRN_newtprocs, &ERPBTRN),(AQPBTRN_atdec, VPPBTRN_newtprocs, &ERPBTRN,(DRPBTRN).nonlocals));
FRPBTRN_atdc = ERPBTRN;
 /* line 276: */
GRPBTRN = (&A_VINDEX(CHPBTRN_transattrs,WPPBTRN_deccnt)) ;
(*GRPBTRN) = FRPBTRN_atdc.A;
 /* line 277: */
 /* line 278: */
HRPBTRN = HQPBTRN_atch;
if ( ! HRPBTRN )
{HRPBTRN = FRPBTRN_atdc.C;
}
HQPBTRN_atch = HRPBTRN;
}
 /* line 280: */
MLJATRN_discard_tprocs(VPPBTRN_newtprocs);
 /* line 284: */
IRPBTRN = A_HEAP(A68_255 ) ;
(*IRPBTRN) = (*(*(&(Ec->E)))) ;
JRPBTRN_newenv = IRPBTRN;
 /* line 286: */
KRPBTRN = HQPBTRN_atch;
if ( ! KRPBTRN )
{KRPBTRN = (UHPBTRN_newattrno!=VFPBTRN_nattrs);
}
 /* line 287: */
if ( ! KRPBTRN )
{KRPBTRN = Create_new_environ;
}
if ( KRPBTRN )
{ 
A_CLOSURE( MRPBTRN_generator, NRPBTRN_generator, ORPBTRN_generator );
(( ORPBTRN_generator * ) ( MRPBTRN_generator.nonlocals )) -> UHPBTRN_newattrno = (&UHPBTRN_newattrno);
 /* line 288: */
 /* line 289: */
A_CALLPROC(MRPBTRN_generator,(A68_FALSE, &RRPBTRN),(A68_FALSE, &RRPBTRN,(MRPBTRN_generator).nonlocals));
TRPBTRN = A_VTRIM(SRPBTRN,(CHPBTRN_transattrs),A_VTSCRIPT(&(SRPBTRN.upb),(CHPBTRN_transattrs).upb,1,UHPBTRN_newattrno)) ;
A_VASSIGN2(TRPBTRN,RRPBTRN,A68_135 *) ;
URPBTRN = (&(JRPBTRN_newenv->Attrs)) ;
(*URPBTRN) = RRPBTRN;
} 
 /* line 290: */
VRPBTRN = IQPBTRN_tych;
if ( ! VRPBTRN )
{VRPBTRN = (VHPBTRN_newtypeno!=WFPBTRN_ntypes);
}
 /* line 291: */
if ( ! VRPBTRN )
{VRPBTRN = Create_new_environ;
}
if ( VRPBTRN )
{ 
A_CLOSURE( XRPBTRN_generator, YRPBTRN_generator, ZRPBTRN_generator );
(( ZRPBTRN_generator * ) ( XRPBTRN_generator.nonlocals )) -> VHPBTRN_newtypeno = (&VHPBTRN_newtypeno);
 /* line 292: */
 /* line 293: */
A_CALLPROC(XRPBTRN_generator,(A68_FALSE, &CSPBTRN),(A68_FALSE, &CSPBTRN,(XRPBTRN_generator).nonlocals));
ESPBTRN = A_VTRIM(DSPBTRN,(KHPBTRN_transtypes),A_VTSCRIPT(&(DSPBTRN.upb),(KHPBTRN_transtypes).upb,1,VHPBTRN_newtypeno)) ;
A_VASSIGN2(ESPBTRN,CSPBTRN,A68_169 *) ;
FSPBTRN = (&(JRPBTRN_newenv->Types)) ;
(*FSPBTRN) = CSPBTRN;
} 
 /* line 294: */
GSPBTRN = JQPBTRN_fnch;
if ( ! GSPBTRN )
{GSPBTRN = (WHPBTRN_newfnno!=XFPBTRN_nfns);
}
 /* line 295: */
if ( ! GSPBTRN )
{GSPBTRN = Create_new_environ;
}
if ( GSPBTRN )
{ 
A_CLOSURE( ISPBTRN_generator, JSPBTRN_generator, KSPBTRN_generator );
(( KSPBTRN_generator * ) ( ISPBTRN_generator.nonlocals )) -> WHPBTRN_newfnno = (&WHPBTRN_newfnno);
 /* line 296: */
 /* line 297: */
A_CALLPROC(ISPBTRN_generator,(A68_FALSE, &NSPBTRN),(A68_FALSE, &NSPBTRN,(ISPBTRN_generator).nonlocals));
PSPBTRN = A_VTRIM(OSPBTRN,(SHPBTRN_transfns),A_VTSCRIPT(&(OSPBTRN.upb),(SHPBTRN_transfns).upb,1,WHPBTRN_newfnno)) ;
A_VASSIGN2(PSPBTRN,NSPBTRN,A68_252 *) ;
QSPBTRN = (&(JRPBTRN_newenv->Fns)) ;
(*QSPBTRN) = NSPBTRN;
} 
 /* line 298: */
RSPBTRN.Closureno = ZPPBTRN_newclosureno;
RSPBTRN.Sort = YPPBTRN_outersort;
 /* line 299: */
RSPBTRN.Environ = JRPBTRN_newenv;
SSPBTRN = RSPBTRN;
} 
A_PROC_EXIT(make_outer);
*ReturnedValue = (SSPBTRN);
return;
} 
#undef NL

A68_VOID  VSPBTRN_transform_local(A68_265 * Outerclosure, A68_97  Msg, A68_329  *ReturnedValue)
{ 
A68_329  WSPBTRN;  /* collateral clause result */
A68_329  XSPBTRN_result;
A68_265 ** YSPBTRN_thisclosure;
A68_BOOL * ZSPBTRN_closure_changed;
A68_262 * ATPBTRN_closureptr;
A68_496  BTPBTRN_newclosure;   /* proc value of non-global proc */
A68_497  HTPBTRN_insert_newouter;   /* proc value of non-global proc */
A68_371  NTPBTRN_outerfn_local;   /* proc value of non-global proc */
A68_371  YAQBTRN_outer;   /* proc value of non-global proc */
A68_375  EBQBTRN;  /* OPERATORS - mode -> union mode */
A68_371  FBQBTRN;  /* YIELD */
A68_374  GBQBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_330 * HBQBTRN_newtprocs;
A68_371  IBQBTRN;  /* CALL */
A68_328  JBQBTRN;  /* avoid structure result */
A68_328  KBQBTRN_oc;
A68_261 * LBQBTRN;  /* YIELD */
A68_329  MBQBTRN;  /* clause result */
A_PROC_ENTRY(transform_local);
 /* line 303: */
 /* line 304: */
{ 
WSPBTRN.Cl = Outerclosure;
WSPBTRN.C = A68_FALSE;
XSPBTRN_result = WSPBTRN;
 /* line 305: */
YSPBTRN_thisclosure = (&((&XSPBTRN_result)->Cl));
 /* line 306: */
ZSPBTRN_closure_changed = (&((&XSPBTRN_result)->C));
 /* line 307: */
ATPBTRN_closureptr = (*(&((*YSPBTRN_thisclosure)->Outers)));
 /* line 309: */
 /* line 310: */
A_CLOSURE( BTPBTRN_newclosure, CTPBTRN_newclosure, DTPBTRN_newclosure );
(( DTPBTRN_newclosure * ) ( BTPBTRN_newclosure.nonlocals )) -> ZSPBTRN_closure_changed = ZSPBTRN_closure_changed;
(( DTPBTRN_newclosure * ) ( BTPBTRN_newclosure.nonlocals )) -> YSPBTRN_thisclosure = YSPBTRN_thisclosure;
(( DTPBTRN_newclosure * ) ( BTPBTRN_newclosure.nonlocals )) -> Msg = Msg;
(( DTPBTRN_newclosure * ) ( BTPBTRN_newclosure.nonlocals )) -> ATPBTRN_closureptr = (&ATPBTRN_closureptr);
 /* line 319: */
A_CLOSURE( HTPBTRN_insert_newouter, ITPBTRN_insert_newouter, JTPBTRN_insert_newouter );
(( JTPBTRN_insert_newouter * ) ( HTPBTRN_insert_newouter.nonlocals )) -> BTPBTRN_newclosure = BTPBTRN_newclosure;
(( JTPBTRN_insert_newouter * ) ( HTPBTRN_insert_newouter.nonlocals )) -> YSPBTRN_thisclosure = YSPBTRN_thisclosure;
(( JTPBTRN_insert_newouter * ) ( HTPBTRN_insert_newouter.nonlocals )) -> Msg = Msg;
 /* line 325: */
A_CLOSURE( NTPBTRN_outerfn_local, OTPBTRN_outerfn_local, PTPBTRN_outerfn_local );
(( PTPBTRN_outerfn_local * ) ( NTPBTRN_outerfn_local.nonlocals )) -> BTPBTRN_newclosure = BTPBTRN_newclosure;
(( PTPBTRN_outerfn_local * ) ( NTPBTRN_outerfn_local.nonlocals )) -> HTPBTRN_insert_newouter = HTPBTRN_insert_newouter;
 /* line 464: */
A_CLOSURE( YAQBTRN_outer, ZAQBTRN_outer, ABQBTRN_outer );
(( ABQBTRN_outer * ) ( YAQBTRN_outer.nonlocals )) -> NTPBTRN_outerfn_local = NTPBTRN_outerfn_local;
 /* line 470: */
 /* line 471: */
 /* line 472: */
if ( ((*(&(Outerclosure->Outers)))!=HBAATRN_nilouters) )
{ 
FBQBTRN = YAQBTRN_outer ;
HBQBTRN_newtprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HVEC(GBQBTRN,A_UNITE(EBQBTRN,mode41,41,FBQBTRN),A68_375 ));
 /* line 474: */
for ( ;; )
{ 
 /* line 475: */
if ( !((ATPBTRN_closureptr!=HBAATRN_nilouters)) ) break;
SOAAOST_flt_if_interrupted(Msg);
 /* line 476: */
IBQBTRN = (*(&(HBQBTRN_newtprocs->Outer))) ;
A_CALLPROC(IBQBTRN,((*(&(ATPBTRN_closureptr->Outer))), HBQBTRN_newtprocs, &JBQBTRN),((*(&(ATPBTRN_closureptr->Outer))), HBQBTRN_newtprocs, &JBQBTRN,(IBQBTRN).nonlocals));
KBQBTRN_oc = JBQBTRN;
 /* line 477: */
if ( KBQBTRN_oc.C )
{ 
LBQBTRN = (&(ATPBTRN_closureptr->Outer)) ;
(*LBQBTRN) = KBQBTRN_oc.O;
} 
 /* line 478: */
 /* line 479: */
ATPBTRN_closureptr = (*(&(ATPBTRN_closureptr->Rest)));
}
 /* line 480: */
 /* line 481: */
MLJATRN_discard_tprocs(HBQBTRN_newtprocs);
} 
 /* line 482: */
 /* line 483: */
MBQBTRN = XSPBTRN_result;
} 
A_PROC_EXIT(transform_local);
*ReturnedValue = (MBQBTRN);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 5: */
void LFPBTRN(void)   /* initialise DECS local */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/local.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/oslib/assoc/mfiles/clear.m","./mfiles/environprocs.m","./mfiles/closureprocs.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","./mfiles/modeprocs.m","./mfiles/transformprocs.m","./mfiles/assmodes.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
ZEAAOSL();   /* USE clear */
KGMBTRN();   /* USE environprocs */
SKCATRN();   /* USE closureprocs */
PCAAOST();   /* USE osinterface */
HNMATRN();   /* USE modeprocs */
IHJATRN();   /* USE transformprocs */
BAAATRN();   /* USE assmodes */
JSCAOST();   /* USE basics */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/transform/assoc/./a68files/local.a68";
A_config.translation_time = "Tue Apr  4 10:10:24 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "KFPBTRN (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:10:24 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS local);
UEAALIB_a68config(LGAALIB_configinfo, PFPBTRN);
 /* line 46: */
 /* line 47: */
 /* line 49: */
 /* line 302: */
 /* line 485: */
 /* line 487: */
 /* line 488: */
/*SKIP*/;
A_PROC_EXIT(DECS local);
} 
#undef NL
/* end of translation of ./a68files/local.a68 */
