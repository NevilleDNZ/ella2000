
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
/* UNAME:KEPAELA */
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
struct A68t289 * Database;
A68_VC  Description;
};
typedef struct A68t288  A68_288 ;    /* STRUCT(REF MODE289,REF MODE26)  */
struct A68t289{
A68_VC  Logical_name;
A68_VC  Db_name;
A68_BITS * Setup;
struct A68t290 * Df;
};
typedef struct A68t289  A68_289 ;    /* STRUCT(REF MODE26,REF MODE26,REF BITS,REF MODE290)  */
A_VECTOR(struct A68t291 ,A68t292);
typedef struct A68t292  A68_292 ;    /* VECTOR [] MODE291 */
struct A68t291{
A68_BITS  Code;
A_PAD_BITS(PAD_94)
A68_INT  First_block;
A_PAD_INT(PAD_95)
A68_INT  First_offset;
A_PAD_INT(PAD_96)
A68_INT  Data_elts;
A_PAD_INT(PAD_97)
A68_INT  Dp_elts;
A_PAD_INT(PAD_98)
A68_INT  Version;
A_PAD_INT(PAD_99)
A68_BITS  Sumcheck;
A_PAD_BITS(PAD_100)
};
typedef struct A68t291  A68_291 ;    /* STRUCT(BITS,INT,INT,INT,INT,INT,BITS)  */
A_VECTOR(struct A68t298 ,A68t297);
typedef struct A68t297  A68_297 ;    /* VECTOR [] MODE298 */
struct A68t299{
A68_INT  Block_num;
A_PAD_INT(PAD_101)
A68_INT  Offset;
A_PAD_INT(PAD_102)
};
typedef struct A68t299  A68_299 ;    /* STRUCT(INT,INT)  */
struct A68t298{
A68_BOOL  Shaky;
A_PAD_BOOL(PAD_103)
struct A68t299  Address;
A68_INT  Data_elts;
A_PAD_INT(PAD_104)
A68_INT  Dp_elts;
A_PAD_INT(PAD_105)
A68_INT  Code;
A_PAD_INT(PAD_106)
A68_INT  Version;
A_PAD_INT(PAD_107)
A68_INT  Read_size;
A_PAD_INT(PAD_108)
};
typedef struct A68t298  A68_298 ;    /* STRUCT(BOOL,MODE299,INT,INT,INT,INT,INT)  */
struct A68t290{
struct A68t291 * Root;
struct A68t291 * Indirs_dp;
struct A68t291 * Freelist_dp;
struct A68t291 * Pagetable_dp;
struct A68t291 * Append_dp;
struct A68t292  Free_block_dps;
struct A68t292  Pagetable_dps;
struct A68t293 ** File;
struct A68t293 ** Test_file;
struct A68t294 * Write_buffer;
A68_VC  Name;
A68_VC  Block_buffer;
A68_INT * Generation;
A68_INT * File_size;
A68_INT * Old_file_size;
A68_INT * Freelist_index;
A68_INT * Current_free;
A68_INT * First_free;
A68_INT * Last_free;
A68_INT * Cbufpos;
A68_INT * Freeblock_ptr;
A68_INT * Freelist_ext_ptr;
A68_INT * Initial_free_block_dps;
A68_INT * Size_of_free_space;
A68_INT * Unusable_bytes;
A68_INT * Appended_data;
A68_INT * Read_transfers;
A68_INT * Write_transfers;
struct A68t32  Freelist;
struct A68t32  Freelist_ext;
struct A68t32  Pagetable_ext;
struct A68t295 * Gc_ptrs;
struct A68t296 * Instore_vars;
struct A68t297  Indirections;
A68_BOOL * Writeable;
A68_BOOL * Last_update_failed;
A68_BOOL * Appending;
A68_BOOL * Collectable;
};
typedef struct A68t290  A68_290 ;    /* STRUCT(REF MODE291,REF MODE291,REF MODE291,REF MODE291,REF MODE291,REF MODE292,REF MODE292,REF REF MODE293,REF REF MODE293,REF MODE294,REF MODE26,REF MODE26,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF MODE32,REF MODE32,REF MODE32,REF MODE295,REF MODE296,REF MODE297,REF BOOL,REF BOOL,REF BOOL,REF BOOL)  */
struct A68t293{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t293  A68_293 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t294{
A68_VC  Buffer;
struct A68t300 * List;
A68_INT * Buffer_ptr;
A68_INT * Upb;
A68_INT * Generation;
};
typedef struct A68t294  A68_294 ;    /* STRUCT(REF MODE26,REF MODE300,REF INT,REF INT,REF INT)  */
struct A68t295{
struct A68t299  Old;
struct A68t299  New;
struct A68t295 * Rest;
};
typedef struct A68t295  A68_295 ;    /* STRUCT(MODE299,MODE299,REF MODE295)  */
struct A68t296{
A68_INT  Indirection;
A_PAD_INT(PAD_109)
struct A68t296 * Rest;
};
typedef struct A68t296  A68_296 ;    /* STRUCT(INT,REF MODE296)  */
struct A68t300{
A68_INT  Lwb;
A_PAD_INT(PAD_110)
A68_INT  Upb;
A_PAD_INT(PAD_111)
struct A68t300 * Rest;
};
typedef struct A68t300  A68_300 ;    /* STRUCT(INT,INT,REF MODE300)  */

A_PROCEDURE(A68_BOOL ,A68t301,(struct A68t289 *,struct A68t291 ,struct A68t291 ),(struct A68t289 *,struct A68t291 ,struct A68t291 ,void *));
typedef struct A68t301  A68_301 ;    /* PROC(REF MODE289,MODE291,MODE291) BOOL */

A_PROCEDURE(A68_INT ,A68t302,(struct A68t289 *,struct A68t291 ),(struct A68t289 *,struct A68t291 ,void *));
typedef struct A68t302  A68_302 ;    /* PROC(REF MODE289,MODE291) INT */

A_PROCEDURE(A68_VOID ,A68t303,(struct A68t289 *,struct A68t291 *),(struct A68t289 *,struct A68t291 *,void *));
typedef struct A68t303  A68_303 ;    /* PROC(REF MODE289) MODE291 */

A_PROCEDURE(struct A68t293 *,A68t304,(A68_VC ,A68_INT ,struct A68t97 ),(A68_VC ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t304  A68_304 ;    /* PROC(MODE26,INT,MODE97) REF MODE293 */

A_PROCEDURE(A68_VOID ,A68t305,(struct A68t293 *,A68_BOOL ,struct A68t289 *),(struct A68t293 *,A68_BOOL ,struct A68t289 *,void *));
typedef struct A68t305  A68_305 ;    /* PROC(REF MODE293,BOOL) MODE289 */

A_PROCEDURE(A68_BOOL ,A68t306,(struct A68t289 *),(struct A68t289 *,void *));
typedef struct A68t306  A68_306 ;    /* PROC(REF MODE289) BOOL */

A_PROCEDURE(A68_VOID ,A68t307,(struct A68t289 *,struct A68t291 ),(struct A68t289 *,struct A68t291 ,void *));
typedef struct A68t307  A68_307 ;    /* PROC(REF MODE289,MODE291) VOID */

A_PROCEDURE(A68_VOID ,A68t308,(struct A68t289 *,struct A68t291 ,struct A68t97 ),(struct A68t289 *,struct A68t291 ,struct A68t97 ,void *));
typedef struct A68t308  A68_308 ;    /* PROC(REF MODE289,MODE291,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t309,(struct A68t289 *,struct A68t97 ),(struct A68t289 *,struct A68t97 ,void *));
typedef struct A68t309  A68_309 ;    /* PROC(REF MODE289,MODE97) VOID */

A_PROCEDURE(A68_BOOL ,A68t310,(struct A68t289 *,A68_INT ),(struct A68t289 *,A68_INT ,void *));
typedef struct A68t310  A68_310 ;    /* PROC(REF MODE289,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t311,(struct A68t289 *,A68_INT ,struct A68t97 ),(struct A68t289 *,A68_INT ,struct A68t97 ,void *));
typedef struct A68t311  A68_311 ;    /* PROC(REF MODE289,INT,MODE97) VOID */

A_PROCEDURE(struct A68t293 *,A68t312,(struct A68t289 *),(struct A68t289 *,void *));
typedef struct A68t312  A68_312 ;    /* PROC(REF MODE289) REF MODE293 */

A_PROCEDURE(A68_INT ,A68t313,(struct A68t289 *),(struct A68t289 *,void *));
typedef struct A68t313  A68_313 ;    /* PROC(REF MODE289) INT */

A_PROCEDURE(A68_VOID ,A68t314,(struct A68t289 *),(struct A68t289 *,void *));
typedef struct A68t314  A68_314 ;    /* PROC(REF MODE289) VOID */

A_PROCEDURE(A68_VOID ,A68t315,(struct A68t293 *,struct A68t293 *,struct A68t97 ),(struct A68t293 *,struct A68t293 *,struct A68t97 ,void *));
typedef struct A68t315  A68_315 ;    /* PROC(REF MODE293,REF MODE293,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t316,(A68_INT ,struct A68t92 *),(A68_INT ,struct A68t92 *,void *));
typedef struct A68t316  A68_316 ;    /* PROC(INT) MODE92 */

A_PROCEDURE(A68_BOOL ,A68t317,(struct A68t288 *,struct A68t291 ),(struct A68t288 *,struct A68t291 ,void *));
typedef struct A68t317  A68_317 ;    /* PROC(REF MODE288,MODE291) BOOL */
struct A68t318{
A68_VC  Rvc;
struct A68t318 * Rest;
};
typedef struct A68t318  A68_318 ;    /* STRUCT(REF MODE26,REF MODE318)  */
struct A68t319{
struct A68t288  Df;
struct A68t318  Head;
struct A68t318 * Current;
A68_INT  Index;
A_PAD_INT(PAD_112)
A68_INT  Type;
A_PAD_INT(PAD_113)
A68_VC  Ident;
A68_INT  Int;
A_PAD_INT(PAD_114)
};
typedef struct A68t319  A68_319 ;    /* STRUCT(MODE288,MODE318,REF MODE318,INT,INT,REF MODE26,INT)  */

A_PROCEDURE(struct A68t319 *,A68t320,(struct A68t288 *,struct A68t87 ,A68_INT ),(struct A68t288 *,struct A68t87 ,A68_INT ,void *));
typedef struct A68t320  A68_320 ;    /* PROC(REF MODE288,MODE87,INT) REF MODE319 */

A_PROCEDURE(A68_VOID ,A68t321,(struct A68t319 *),(struct A68t319 *,void *));
typedef struct A68t321  A68_321 ;    /* PROC(REF MODE319) VOID */

A_PROCEDURE(struct A68t319 *,A68t322,(struct A68t288 *,struct A68t291 ),(struct A68t288 *,struct A68t291 ,void *));
typedef struct A68t322  A68_322 ;    /* PROC(REF MODE288,MODE291) REF MODE319 */

A_PROCEDURE(A68_CHAR ,A68t323,(struct A68t319 *),(struct A68t319 *,void *));
typedef struct A68t323  A68_323 ;    /* PROC(REF MODE319) CHAR */

A_PROCEDURE(A68_VOID ,A68t324,(struct A68t319 *,A68_VC ),(struct A68t319 *,A68_VC ,void *));
typedef struct A68t324  A68_324 ;    /* PROC(REF MODE319,REF MODE26) VOID */

A_PROCEDURE(A68_BOOL ,A68t325,(struct A68t319 *),(struct A68t319 *,void *));
typedef struct A68t325  A68_325 ;    /* PROC(REF MODE319) BOOL */

A_PROCEDURE(A68_INT ,A68t326,(struct A68t319 *),(struct A68t319 *,void *));
typedef struct A68t326  A68_326 ;    /* PROC(REF MODE319) INT */

A_PROCEDURE(A68_VOID ,A68t327,(struct A68t319 *,A68_VC *),(struct A68t319 *,A68_VC *,void *));
typedef struct A68t327  A68_327 ;    /* PROC(REF MODE319) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t328,(struct A68t288 *,struct A68t97 ),(struct A68t288 *,struct A68t97 ,void *));
typedef struct A68t328  A68_328 ;    /* PROC(REF MODE288,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t329,(struct A68t288 *,A68_VC ,struct A68t97 ,struct A68t291 *),(struct A68t288 *,A68_VC ,struct A68t97 ,struct A68t291 *,void *));
typedef struct A68t329  A68_329 ;    /* PROC(REF MODE288,MODE26,MODE97) MODE291 */

A_PROCEDURE(A68_VOID ,A68t330,(struct A68t288 *,struct A68t292 ,struct A68t97 ,struct A68t291 *),(struct A68t288 *,struct A68t292 ,struct A68t97 ,struct A68t291 *,void *));
typedef struct A68t330  A68_330 ;    /* PROC(REF MODE288,MODE292,MODE97) MODE291 */

A_PROCEDURE(A68_INT ,A68t331,(struct A68t288 *,struct A68t291 ,struct A68t97 ),(struct A68t288 *,struct A68t291 ,struct A68t97 ,void *));
typedef struct A68t331  A68_331 ;    /* PROC(REF MODE288,MODE291,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t332,(struct A68t288 *,A68_VC ,struct A68t291 ,struct A68t97 ),(struct A68t288 *,A68_VC ,struct A68t291 ,struct A68t97 ,void *));
typedef struct A68t332  A68_332 ;    /* PROC(REF MODE288,REF MODE26,MODE291,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t333,(struct A68t288 *,struct A68t292 ,struct A68t291 ,struct A68t97 ),(struct A68t288 *,struct A68t292 ,struct A68t291 ,struct A68t97 ,void *));
typedef struct A68t333  A68_333 ;    /* PROC(REF MODE288,REF MODE292,MODE291,MODE97) VOID */

A_PROCEDURE(struct A68t319 *,A68t334,(struct A68t288 *,struct A68t87 ),(struct A68t288 *,struct A68t87 ,void *));
typedef struct A68t334  A68_334 ;    /* PROC(REF MODE288,MODE87) REF MODE319 */

A_PROCEDURE(A68_VOID ,A68t335,(struct A68t319 *,struct A68t97 ),(struct A68t319 *,struct A68t97 ,void *));
typedef struct A68t335  A68_335 ;    /* PROC(REF MODE319,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t336,(struct A68t319 *,struct A68t97 ,struct A68t291 *),(struct A68t319 *,struct A68t97 ,struct A68t291 *,void *));
typedef struct A68t336  A68_336 ;    /* PROC(REF MODE319,MODE97) MODE291 */

A_PROCEDURE(A68_INT ,A68t337,(A68_CHAR ,struct A68t319 *,struct A68t97 ),(A68_CHAR ,struct A68t319 *,struct A68t97 ,void *));
typedef struct A68t337  A68_337 ;    /* PROC(CHAR,REF MODE319,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t338,(A68_VC ,struct A68t319 *,struct A68t97 ),(A68_VC ,struct A68t319 *,struct A68t97 ,void *));
typedef struct A68t338  A68_338 ;    /* PROC(MODE26,REF MODE319,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t339,(A68_INT ,struct A68t319 *,struct A68t97 ),(A68_INT ,struct A68t319 *,struct A68t97 ,void *));
typedef struct A68t339  A68_339 ;    /* PROC(INT,REF MODE319,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t340,(A68_VC ,struct A68t319 *,struct A68t97 ),(A68_VC ,struct A68t319 *,struct A68t97 ,void *));
typedef struct A68t340  A68_340 ;    /* PROC(REF MODE26,REF MODE319,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t341,(A68_BOOL ,struct A68t319 *,struct A68t97 ),(A68_BOOL ,struct A68t319 *,struct A68t97 ,void *));
typedef struct A68t341  A68_341 ;    /* PROC(BOOL,REF MODE319,MODE97) INT */
struct A68t343 { A68_INT mode; union {
A68_INT  mode1;
} data; };
typedef struct A68t343  A68_343 ;    /* UNION(INT,VOID)  */
struct A68t342{
A68_INT  Type;
A_PAD_INT(PAD_115)
struct A68t343  Val;
};
typedef struct A68t342  A68_342 ;    /* STRUCT(INT,MODE343)  */
A_VECTOR(A68_SBITS ,A68t345);
typedef struct A68t345  A68_345 ;    /* VECTOR [] SHORT BITS */
struct A68t344{
A68_INT  Test_index;
A_PAD_INT(PAD_116)
struct A68t345  Sid_code;
A68_INT * Index;
A68_INT * Stind;
struct A68t342 * Lex;
struct A68t32 * Sidstack;
struct A68t53  Sid_blwds;
A68_INT  Sid_mult;
A_PAD_INT(PAD_117)
};
typedef struct A68t344  A68_344 ;    /* STRUCT(INT,MODE345,REF INT,REF INT,REF MODE342,REF REF MODE32,MODE53,INT)  */

A_PROCEDURE(A68_VOID ,A68t346,(A68_BOOL ,struct A68t344 *),(A68_BOOL ,struct A68t344 *,void *));
typedef struct A68t346  A68_346 ;    /* PROC(BOOL) MODE344 */
struct A68t348 ;
struct A68t349 ;
struct A68t350 ;
struct A68t351 ;
struct A68t352 ;
struct A68t353 ;

A_PROCEDURE(A68_VOID ,A68t347,(A68_INT ,struct A68t345 ,struct A68t53 ,struct A68t349 ,struct A68t350 ,struct A68t351 ,struct A68t352 ,struct A68t353 ,struct A68t348 *),(A68_INT ,struct A68t345 ,struct A68t53 ,struct A68t349 ,struct A68t350 ,struct A68t351 ,struct A68t352 ,struct A68t353 ,struct A68t348 *,void *));
typedef struct A68t347  A68_347 ;    /* PROC(INT,MODE345,MODE53,MODE349,MODE350,MODE351,MODE352,MODE353) MODE348 */
struct A68t348 { A68_INT mode; union {
A68_INT  mode2;
} data; };
typedef struct A68t348  A68_348 ;    /* UNION(VOID,INT)  */

A_PROCEDURE(A68_VOID ,A68t349,(void),(void *));
typedef struct A68t349  A68_349 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t350,(struct A68t342 *),(struct A68t342 *,void *));
typedef struct A68t350  A68_350 ;    /* PROC MODE342 */

A_PROCEDURE(A68_VOID ,A68t351,(struct A68t344 ),(struct A68t344 ,void *));
typedef struct A68t351  A68_351 ;    /* PROC(MODE344) VOID */

A_PROCEDURE(A68_VOID ,A68t352,(A68_INT ,A68_INT ,struct A68t343 ,A68_INT ),(A68_INT ,A68_INT ,struct A68t343 ,A68_INT ,void *));
typedef struct A68t352  A68_352 ;    /* PROC(INT,INT,MODE343,INT) VOID */

A_PROCEDURE(A68_INT ,A68t353,(A68_INT ,A68_INT ,struct A68t343 ,A68_INT ),(A68_INT ,A68_INT ,struct A68t343 ,A68_INT ,void *));
typedef struct A68t353  A68_353 ;    /* PROC(INT,INT,MODE343,INT) INT */

A_PROCEDURE(A68_BOOL ,A68t354,(A68_INT ,struct A68t344 ),(A68_INT ,struct A68t344 ,void *));
typedef struct A68t354  A68_354 ;    /* PROC(INT,MODE344) BOOL */

A_PROCEDURE(A68_VOID ,A68t355,(struct A68t85 ),(struct A68t85 ,void *));
typedef struct A68t355  A68_355 ;    /* PROC(MODE85) VOID */

A_PROCEDURE(A68_VOID ,A68t356,(A68_INT ,A68_INT ,A68_BOOL ,struct A68t319 *,struct A68t97 ),(A68_INT ,A68_INT ,A68_BOOL ,struct A68t319 *,struct A68t97 ,void *));
typedef struct A68t356  A68_356 ;    /* PROC(INT,INT,BOOL,REF MODE319,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t357,(struct A68t349 ),(struct A68t349 ,void *));
typedef struct A68t357  A68_357 ;    /* PROC(MODE349) VOID */

A_PROCEDURE(A68_VOID ,A68t358,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t358  A68_358 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t359,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t359  A68_359 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,55,A68t360);
typedef struct A68t360  A68_360 ;    /* STRUCT 55 CHAR */
A_ISTRUCT(A68_SBITS ,1900,A68t361);
typedef struct A68t361  A68_361 ;    /* STRUCT 1900 SHORT BITS */
A_ISTRUCT(A68_BITS ,100,A68t362);
typedef struct A68t362  A68_362 ;    /* STRUCT 100 BITS */
A_ISTRUCT(A68_CHAR ,19,A68t363);
typedef struct A68t363  A68_363 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t364);
typedef struct A68t364  A68_364 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,26,A68t365);
typedef struct A68t365  A68_365 ;    /* STRUCT 26 CHAR */

A_PROCEDURE(A68_VOID ,A68t366,(A68_INT ,A68_INT ,A68_BOOL ,struct A68t319 *,struct A68t319 *,struct A68t97 ,struct A68t261 *),(A68_INT ,A68_INT ,A68_BOOL ,struct A68t319 *,struct A68t319 *,struct A68t97 ,struct A68t261 *,void *));
typedef struct A68t366  A68_366 ;    /* PROC(INT,INT,BOOL,REF MODE319,REF MODE319,MODE97) MODE261 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from assembleproc --- */
extern A68_261  KTMAELA_extdeclaration;
extern A68_VOID  YVMAELA_reader(A68_342 *);
extern A68_VOID  GWMAELA_failure(struct A68t344 );
extern A68_INT  JWMAELA_return(void);
extern A68_VOID  IWMAELA_fail(struct A68t85 );
extern A68_VOID  ZOOAELA_assemble_start(A68_INT ,A68_INT ,A68_BOOL ,struct A68t319 *,struct A68t97 );
extern A68_VOID  LPOAELA_assemble_body(struct A68t319 *);
extern A68_VOID  OOOAELA_fncallp(void);
extern A68_VOID  EOOAELA_endp(void);
extern A68_VOID  ALOAELA_kconstp(void);
extern A68_VOID  TIOAELA_ktypep(void);
extern A68_VOID  FLOAELA_kattrin(void);
extern A68_VOID  SLOAELA_kattrp(void);
extern A68_VOID  QMOAELA_kfnin(void);
extern A68_VOID  FMNAELA_spec1(void);
extern A68_VOID  GMNAELA_spec2(void);
extern A68_VOID  HMNAELA_spec3(void);
extern A68_VOID  JKNAELA_extattrs(void);
extern A68_VOID  MWMAELA_idproc(void);
extern A68_VOID  VLOAELA_kfnenv(void);
extern A68_VOID  OXMAELA_replicator(void);
extern A68_VOID  DYMAELA_attrname(void);
extern A68_VOID  GYMAELA_attrdata(void);
extern A68_VOID  PYMAELA_attrstart(void);
extern A68_VOID  AYMAELA_attrproc(void);
extern A68_VOID  QYMAELA_attrstrp(void);
extern A68_VOID  NYMAELA_attrnullp(void);
extern A68_VOID  KYMAELA_attrbracket(void);
extern A68_VOID  SWMAELA_inidproc(void);
extern A68_VOID  FXMAELA_integerproc(void);
extern A68_VOID  ANOAELA_macin(void);
extern A68_VOID  VWMAELA_typeproc(void);
extern A68_VOID  PWMAELA_inproc(void);
extern A68_VOID  EJOAELA_kintin(void);
extern A68_VOID  YIOAELA_kintp(void);
extern A68_VOID  THOAELA_ktypein(void);
extern A68_VOID  AANAELA_intcheck(void);
extern A68_VOID  HANAELA_idef(void);
extern A68_VOID  NANAELA_inull(void);
extern A68_VOID  KANAELA_ibracket(void);
extern A68_VOID  XZMAELA_iparam(void);
extern A68_VOID  QZMAELA_icond(void);
extern A68_VOID  KZMAELA_imop(void);
extern A68_VOID  DZMAELA_idop(void);
extern A68_VOID  AZMAELA_iname(void);
extern A68_VOID  SYMAELA_iconst(void);
extern A68_VOID  BKNAELA_exttypes(void);
extern A68_VOID  RKNAELA_extints(void);
extern A68_VOID  LLNAELA_extfns(void);
extern A68_VOID  VBNAELA_tbracket(void);
extern A68_VOID  DBNAELA_tfn(void);
extern A68_VOID  ABNAELA_tparam(void);
extern A68_VOID  OBNAELA_tststartp(void);
extern A68_VOID  LBNAELA_tstp(void);
extern A68_VOID  WANAELA_trow(void);
extern A68_VOID  TANAELA_tnamed(void);
extern A68_VOID  PANAELA_tnullp(void);
extern A68_VOID  SBNAELA_tsttype(void);
extern A68_VOID  IOOAELA_indsp(void);
extern A68_VOID  JGNAELA_prange(void);
extern A68_VOID  MHNAELA_primsetp(void);
extern A68_VOID  YFNAELA_pidalts(void);
extern A68_VOID  QHNAELA_primset1(void);
extern A68_VOID  ZLNAELA_usagep(void);
extern A68_VOID  HNOAELA_macend(void);
extern A68_VOID  IMNAELA_fnspec1(void);
extern A68_VOID  ONNAELA_fnspec2(void);
extern A68_VOID  BMNAELA_fnspecinput(void);
extern A68_VOID  DMNAELA_fnspecoutput(void);
extern A68_VOID  IXMAELA_stackattr(void);
extern A68_VOID  UHNAELA_idloop(void);
extern A68_VOID  SQNAELA_unit(void);
extern A68_VOID  WNNAELA_arith(void);
extern A68_VOID  QQNAELA_imported(void);
extern A68_VOID  ZNNAELA_biop1(void);
extern A68_VOID  HONAELA_biop(void);
extern A68_VOID  LONAELA_alien(void);
extern A68_VOID  JQNAELA_reformpr(void);
extern A68_VOID  YWMAELA_ctypestartp(void);
extern A68_VOID  CXMAELA_ctypeproc(void);
extern A68_VOID  DQNAELA_ramp(void);
extern A68_VOID  YONAELA_adelay(void);
extern A68_VOID  PONAELA_idelay(void);
extern A68_VOID  LXMAELA_stackinst(void);
extern A68_VOID  VQNAELA_vvarmultp(void);
extern A68_VOID  TWNAELA_vbracket(void);
extern A68_VOID  CWNAELA_vdynstart(void);
extern A68_VOID  FWNAELA_vdynindexp(void);
extern A68_VOID  SVNAELA_vparstart(void);
extern A68_VOID  XVNAELA_vparp(void);
extern A68_VOID  IVNAELA_vseqstart(void);
extern A68_VOID  NVNAELA_vseqp(void);
extern A68_VOID  CVNAELA_vfip(void);
extern A68_VOID  TUNAELA_vcoll(void);
extern A68_VOID  OUNAELA_vquery(void);
extern A68_VOID  CUNAELA_vcasestart(void);
extern A68_VOID  FUNAELA_vcase(void);
extern A68_VOID  XTNAELA_vrow(void);
extern A68_VOID  STNAELA_vsharp(void);
extern A68_VOID  NTNAELA_vunn(void);
extern A68_VOID  HTNAELA_vcalld(void);
extern A68_VOID  CTNAELA_vcallm(void);
extern A68_VOID  QSNAELA_vindex(void);
extern A68_VOID  VSNAELA_vtermindex(void);
extern A68_VOID  JSNAELA_vtrim(void);
extern A68_VOID  DSNAELA_vname(void);
extern A68_VOID  SRNAELA_vprimi(void);
extern A68_VOID  MRNAELA_vprim(void);
extern A68_VOID  FRNAELA_vconc(void);
extern A68_VOID  RLNAELA_fnstartp(void);
extern A68_VOID  SLNAELA_fnendp(void);
extern A68_VOID  CHOAELA_ptflt(void);
extern A68_VOID  XGOAELA_pt(void);
extern A68_VOID  TGOAELA_biddec2(void);
extern A68_VOID  RGOAELA_pardecl(void);
extern A68_VOID  XFOAELA_bfor(void);
extern A68_VOID  DGOAELA_bjoins(void);
extern A68_VOID  YFOAELA_bjoin(void);
extern A68_VOID  JFOAELA_bmake1(void);
extern A68_VOID  QFOAELA_bmake(void);
extern A68_VOID  OHOAELA_printint(void);
extern A68_VOID  KHOAELA_strmessage(void);
extern A68_VOID  UEOAELA_typenotprim(void);
extern A68_VOID  HHOAELA_bvar1(void);
extern A68_VOID  NGOAELA_bjoins1(void);
extern A68_VOID  SINAELA_attrcall(void);
extern A68_VOID  ZINAELA_integercall(void);
extern A68_VOID  XLNAELA_fndecl(void);
extern A68_VOID  RCOAELA_intdecl(void);
extern A68_VOID  WBOAELA_seqvarmult(void);
extern A68_VOID  AEOAELA_seqif(void);
extern A68_VOID  EEOAELA_seqfip(void);
extern A68_VOID  IBOAELA_seqcasestart(void);
extern A68_VOID  NBOAELA_seqcase(void);
extern A68_VOID  WAOAELA_seqassignval1(void);
extern A68_VOID  DBOAELA_seqassignval2(void);
extern A68_VOID  SAOAELA_seqper(void);
extern A68_VOID  NAOAELA_seqvar(void);
extern A68_VOID  IAOAELA_seqlet(void);
extern A68_VOID  TZNAELA_seqvoidstart(void);
extern A68_VOID  AAOAELA_seqvoid(void);
extern A68_VOID  RZNAELA_seqnullp(void);
extern A68_VOID  BCOAELA_seqrow(void);
extern A68_VOID  GCOAELA_seqdecl(void);
extern A68_VOID  QDNAELA_cquery(void);
extern A68_VOID  NDNAELA_cttype(void);
extern A68_VOID  TDNAELA_cbracket(void);
extern A68_VOID  VCNAELA_calt(void);
extern A68_VOID  JDNAELA_cnullp(void);
extern A68_VOID  FDNAELA_crow(void);
extern A68_VOID  ADNAELA_cst(void);
extern A68_VOID  PCNAELA_cprimu(void);
extern A68_VOID  JCNAELA_cprimr(void);
extern A68_VOID  FCNAELA_cprimi(void);
extern A68_VOID  BCNAELA_cprim(void);
extern A68_VOID  XENAELA_cindex(void);
extern A68_VOID  BFNAELA_ctrim(void);
extern A68_VOID  HFNAELA_crepl(void);
extern A68_VOID  LFNAELA_ccond(void);
extern A68_VOID  PFNAELA_cconc(void);
extern A68_VOID  UFNAELA_cattr(void);
extern A68_VOID  TDOAELA_seqrepstep(void);
extern A68_VOID  UYNAELA_vnoelse(void);
extern A68_VOID  LYNAELA_vnormal(void);
extern A68_VOID  OYNAELA_velsep(void);
extern A68_VOID  RYNAELA_velseof(void);
extern A68_VOID  ZYNAELA_vcaserep(void);
extern A68_VOID  XYNAELA_vcheck(void);
extern A68_VOID  HBNAELA_tstring(void);
extern A68_VOID  WDNAELA_cstring(void);
extern A68_VOID  AENAELA_cprimch(void);
extern A68_VOID  GENAELA_cprimst(void);
extern A68_VOID  MENAELA_cprimchr(void);
extern A68_VOID  PGNAELA_pstringst(void);
extern A68_VOID  VGNAELA_pstring(void);
extern A68_VOID  ZGNAELA_pchar(void);
extern A68_VOID  CHNAELA_pcharange(void);
extern A68_VOID  FXNAELA_vstring(void);
extern A68_VOID  KXNAELA_vprimch(void);
extern A68_VOID  SXNAELA_vprimst(void);
extern A68_VOID  GZNAELA_unitcheck(void);
extern A68_VOID  YBNAELA_cnamed(void);
extern A68_VOID  ALNAELA_extctypes(void);
extern A68_VOID  ARNAELA_vconst(void);
extern A68_VOID  ICOAELA_attrdecl(void);
extern A68_VOID  KDOAELA_constdecl(void);
extern A68_VOID  XJOAELA_kconstin(void);
extern A68_VOID  INOAELA_kinds(void);
extern A68_VOID  WYMAELA_iconsttext(void);
extern A68_VOID  XWNAELA_vnull(void);
extern A68_VOID  KEOAELA_seqpt(void);
extern A68_VOID  PEOAELA_seqptflt(void);
extern A68_VOID  BDOAELA_typedecl(void);
extern A68_VOID  NJNAELA_ctypecall(void);
extern A68_VOID  UENAELA_cparam(void);
extern A68_VOID  YRNAELA_vprimc(void);
extern A68_VOID  IPNAELA_sample(void);
extern A68_VOID  QPNAELA_faster(void);
extern A68_VOID  RPNAELA_slower(void);
extern A68_VOID  SPNAELA_timescale(void);
extern A68_VOID  XEOAELA_multint(void);
extern A68_VOID  RANAELA_tvoidp(void);
extern A68_VOID  LDNAELA_cvoidp(void);
extern A68_VOID  BXNAELA_vvoid(void);
extern A68_VOID  TNOAELA_checkloop(void);
extern A68_VOID  UJNAELA_fnparamcall(void);
extern A68_VOID  LWNAELA_vreplace(void);
extern A68_VOID  AYNAELA_addattr(void);
extern A68_VOID  BINAELA_attrlistpr(void);
extern A68_VOID  FINAELA_instance1(void);
extern A68_VOID  QINAELA_instancep(void);
extern A68_VOID  THNAELA_namestp(void);
extern A68_VOID  GJNAELA_typecall(void);
extern A68_VOID  QNNAELA_macspecp(void);
/* --- End of imports from assembleproc --- */


/* --- Imports from sidanalyser --- */
extern A68_VOID  GBAAELA_analyser(A68_INT ,struct A68t345 ,struct A68t53 ,struct A68t349 ,struct A68t350 ,struct A68t351 ,struct A68t352 ,struct A68t353 ,A68_348 *);
/* --- End of imports from sidanalyser --- */


/* --- Imports from databasebuffers --- */
extern A68_319 * OXIAELA_nilbuffer;
/* --- End of imports from databasebuffers --- */


/* --- Imports from assmodes --- */
/* --- End of imports from assmodes --- */


/* --- Imports from basics --- */
/* --- End of imports from basics --- */


/* --- Imports from messageproc --- */
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void NMMAELA(void);   /* assembleproc */
extern void BAAAELA(void);   /* sidanalyser */
extern void NWIAELA(void);   /* databasebuffers */
extern void BAAATRN(void);   /* assmodes */
extern void JSCAOST(void);   /* basics */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_360   OEPAELA = {"$Id: assemble.a68,v 34.2 1995/03/29 13:03:14 ella Exp $"}; 
A_GISVEC(A68_VC ,PEPAELA,OEPAELA,55)
static A68_345  SEPAELA_sid_code;
static A68_53  VEPAELA_sid_cblwds;
#define WEPAELA_sid_mult 160
static A68_363   AFPAELA = {"Attempt to pop/top "}; 
A_GISVEC(A68_VC ,BFPAELA,AFPAELA,19)
static A68_364   DFPAELA = {" value off empty stack"}; 
A_GISVEC(A68_VC ,EFPAELA,DFPAELA,22)
static A68_365   CGPAELA = {"Non-existent action called"}; 
A_GISVEC(A68_VC ,DGPAELA,CGPAELA,26)
typedef struct   /* env of non-global proc */
{
A68_VC  CFPAELA_mess1;
A68_VC  FFPAELA_mess2;
A68_VC  Ucstack;
} JFPAELA_generator;

A_STATIC A68_VOID  XEPAELA_sid_initstacks(void);

A_STATIC A68_VOID  ZEPAELA_sid_crash(A68_VC  Ucstack);

A_STATIC A68_VOID  IFPAELA_generator(A68_BOOL  GFPAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BGPAELA_sid_actions(A68_INT  Sid_no, A68_INT  Sid_index, A68_343  Sid_lv, A68_INT  Sid_stind);

A_STATIC A68_INT  LGPAELA_sid_returns(A68_INT  Sid_no, A68_INT  Sid_index, A68_343  Sid_lv, A68_INT  Sid_stind);

A68_VOID  UGPAELA_assemble(A68_INT  Contextno, A68_INT  Closureno, A68_BOOL  Export, A68_319 * Specbuffer, A68_319 * Bodybuffer, A68_97  Msg, A68_261  *ReturnedValue);

A_STATIC A68_VOID  IFPAELA_generator(A68_BOOL  GFPAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((JFPAELA_generator *)NonLocals)->x)
{ 
A68_VC  KFPAELA;  /* clause result */
A68_VC  LFPAELA;  /* OPERATORS - dynamic generator */
{ 
LFPAELA.upb = ((NL(CFPAELA_mess1).upb+NL(FFPAELA_mess2).upb)+NL(Ucstack).upb) ;
( GFPAELA_anonymous? A_VLOC(A68_CHAR ,LFPAELA): A_VHEAP(A68_CHAR ,LFPAELA) );
KFPAELA = LFPAELA;
} 
*ReturnedValue = (KFPAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  XEPAELA_sid_initstacks(void)
{ 
A_PROC_ENTRY(sid_initstacks);
/*SKIP*/;
A_PROC_EXIT(sid_initstacks);
return;
} 
#undef NL

A_STATIC A68_VOID  ZEPAELA_sid_crash(A68_VC  Ucstack)
{ 
A68_VC  CFPAELA_mess1;
A68_VC  FFPAELA_mess2;
A68_31  HFPAELA_generator;   /* proc value of non-global proc */
A68_VC  NFPAELA;  /* avoid structure result */
A68_VC  MFPAELA_message;
A68_INT  OFPAELA_pos;
A68_VC  PFPAELA;  /* OPERATORS - trim index */
A68_VC  QFPAELA;  /* YIELD */
A68_VC  RFPAELA;  /* OPERATORS - trim index */
A68_VC  SFPAELA;  /* YIELD */
A68_VC  TFPAELA;  /* OPERATORS - trim index */
A68_VC  UFPAELA;  /* YIELD */
A68_52  VFPAELA;  /* OPERATORS - mode -> union mode */
A68_85  WFPAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(sid_crash);
 /* line 467: */
{ 
CFPAELA_mess1 = BFPAELA;
 /* line 468: */
FFPAELA_mess2 = EFPAELA;
 /* line 469: */
A_CLOSURE( HFPAELA_generator, IFPAELA_generator, JFPAELA_generator );
(( JFPAELA_generator * ) ( HFPAELA_generator.nonlocals )) -> CFPAELA_mess1 = CFPAELA_mess1;
(( JFPAELA_generator * ) ( HFPAELA_generator.nonlocals )) -> FFPAELA_mess2 = FFPAELA_mess2;
(( JFPAELA_generator * ) ( HFPAELA_generator.nonlocals )) -> Ucstack = Ucstack;
A_CALLPROC(HFPAELA_generator,(A68_TRUE, &NFPAELA),(A68_TRUE, &NFPAELA,(HFPAELA_generator).nonlocals));
MFPAELA_message = NFPAELA;
 /* line 470: */
OFPAELA_pos = CFPAELA_mess1.upb;
 /* line 471: */
QFPAELA = A_VTRIM(PFPAELA,(MFPAELA_message),A_VTSCRIPT(&(PFPAELA.upb),(MFPAELA_message).upb,1,OFPAELA_pos)) ;
A_VASSIGN2(CFPAELA_mess1,QFPAELA,A68_CHAR );
 /* line 472: */
SFPAELA = A_VTRIM(RFPAELA,(MFPAELA_message),A_VTSCRIPT(&(RFPAELA.upb),(MFPAELA_message).upb,(OFPAELA_pos+1),(OFPAELA_pos+=Ucstack.upb))) ;
A_VASSIGN2(Ucstack,SFPAELA,A68_CHAR );
 /* line 473: */
UFPAELA = A_VTRIM(TFPAELA,(MFPAELA_message),A_VTSCRIPT(&(TFPAELA.upb),(MFPAELA_message).upb,(OFPAELA_pos+1),(MFPAELA_message).upb)) ;
A_VASSIGN2(FFPAELA_mess2,UFPAELA,A68_CHAR );
 /* line 474: */
 /* line 475: */
IWMAELA_fail(A_HVEC(WFPAELA,A_UNITE(VFPAELA,mode7,7,MFPAELA_message),A68_52 ));
} 
A_PROC_EXIT(sid_crash);
return;
} 
#undef NL
 /* line 479: */
 /* line 480: */
 /* line 481: */

A_STATIC A68_VOID  BGPAELA_sid_actions(A68_INT  Sid_no, A68_INT  Sid_index, A68_343  Sid_lv, A68_INT  Sid_stind)
{ 
A68_52  EGPAELA;  /* OPERATORS - mode -> union mode */
A68_VC  FGPAELA;  /* YIELD */
A68_85  GGPAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(sid_actions);
 /* line 482: */
 /* line 483: */
 /* line 484: */
switch ( Sid_no )
{ 
case 1: 
 /* line 485: */
GMNAELA_spec2();
break;
case 2: 
 /* line 486: */
OOOAELA_fncallp();
break;
case 3: 
 /* line 487: */
EOOAELA_endp();
break;
case 4: 
 /* line 488: */
SWMAELA_inidproc();
break;
case 5: 
 /* line 489: */
PWMAELA_inproc();
break;
case 6: 
 /* line 490: */
FLOAELA_kattrin();
break;
case 7: 
 /* line 491: */
SLOAELA_kattrp();
break;
case 8: 
 /* line 492: */
XJOAELA_kconstin();
break;
case 9: 
 /* line 493: */
IXMAELA_stackattr();
break;
case 10: 
 /* line 494: */
ALOAELA_kconstp();
break;
case 11: 
 /* line 495: */
INOAELA_kinds();
break;
case 12: 
 /* line 496: */
VLOAELA_kfnenv();
break;
case 13: 
 /* line 497: */
FMNAELA_spec1();
break;
case 14: 
 /* line 498: */
QMOAELA_kfnin();
break;
case 15: 
 /* line 499: */
EJOAELA_kintin();
break;
case 16: 
 /* line 500: */
YIOAELA_kintp();
break;
case 17: 
 /* line 501: */
THOAELA_ktypein();
break;
case 18: 
 /* line 502: */
TIOAELA_ktypep();
break;
case 19: 
 /* line 503: */
JKNAELA_extattrs();
break;
case 20: 
 /* line 504: */
NYMAELA_attrnullp();
break;
case 21: 
 /* line 505: */
PYMAELA_attrstart();
break;
case 22: 
 /* line 506: */
QYMAELA_attrstrp();
break;
case 23: 
 /* line 507: */
KYMAELA_attrbracket();
break;
case 24: 
 /* line 508: */
GYMAELA_attrdata();
break;
case 25: 
 /* line 509: */
DYMAELA_attrname();
break;
case 26: 
 /* line 510: */
AYMAELA_attrproc();
break;
case 27: 
 /* line 511: */
MWMAELA_idproc();
break;
case 28: 
 /* line 512: */
RKNAELA_extints();
break;
case 29: 
 /* line 513: */
BKNAELA_exttypes();
break;
case 30: 
 /* line 514: */
UEOAELA_typenotprim();
break;
case 31: 
 /* line 515: */
PGNAELA_pstringst();
break;
case 32: 
 /* line 516: */
VGNAELA_pstring();
break;
case 33: 
 /* line 517: */
FXMAELA_integerproc();
break;
case 34: 
 /* line 518: */
JGNAELA_prange();
break;
case 35: 
 /* line 519: */
MHNAELA_primsetp();
break;
case 36: 
 /* line 520: */
YFNAELA_pidalts();
break;
case 37: 
 /* line 521: */
CHNAELA_pcharange();
break;
case 38: 
 /* line 522: */
ZGNAELA_pchar();
break;
case 39: 
 /* line 523: */
AANAELA_intcheck();
break;
case 40: 
 /* line 524: */
HANAELA_idef();
break;
case 41: 
 /* line 525: */
NANAELA_inull();
break;
case 42: 
 /* line 526: */
KANAELA_ibracket();
break;
case 43: 
 /* line 527: */
WYMAELA_iconsttext();
break;
case 44: 
 /* line 528: */
XZMAELA_iparam();
break;
case 45: 
 /* line 529: */
QZMAELA_icond();
break;
case 46: 
 /* line 530: */
KZMAELA_imop();
break;
case 47: 
 /* line 531: */
DZMAELA_idop();
break;
case 48: 
 /* line 532: */
AZMAELA_iname();
break;
case 49: 
 /* line 533: */
SYMAELA_iconst();
break;
case 50: 
 /* line 534: */
VWMAELA_typeproc();
break;
case 51: 
 /* line 535: */
QHNAELA_primset1();
break;
case 52: 
 /* line 536: */
RANAELA_tvoidp();
break;
case 53: 
 /* line 537: */
HBNAELA_tstring();
break;
case 54: 
 /* line 538: */
VBNAELA_tbracket();
break;
case 55: 
 /* line 539: */
DBNAELA_tfn();
break;
case 56: 
 /* line 540: */
ABNAELA_tparam();
break;
case 57: 
 /* line 541: */
OBNAELA_tststartp();
break;
case 58: 
 /* line 542: */
LBNAELA_tstp();
break;
case 59: 
 /* line 543: */
WANAELA_trow();
break;
case 60: 
 /* line 544: */
TANAELA_tnamed();
break;
case 61: 
 /* line 545: */
PANAELA_tnullp();
break;
case 62: 
 /* line 546: */
SBNAELA_tsttype();
break;
case 63: 
 /* line 547: */
ALNAELA_extctypes();
break;
case 64: 
 /* line 548: */
UENAELA_cparam();
break;
case 65: 
 /* line 549: */
LDNAELA_cvoidp();
break;
case 66: 
 /* line 550: */
YBNAELA_cnamed();
break;
case 67: 
 /* line 551: */
MENAELA_cprimchr();
break;
case 68: 
 /* line 552: */
GENAELA_cprimst();
break;
case 69: 
 /* line 553: */
AENAELA_cprimch();
break;
case 70: 
 /* line 554: */
WDNAELA_cstring();
break;
case 71: 
 /* line 555: */
QDNAELA_cquery();
break;
case 72: 
 /* line 556: */
NDNAELA_cttype();
break;
case 73: 
 /* line 557: */
CXMAELA_ctypeproc();
break;
case 74: 
 /* line 558: */
LFNAELA_ccond();
break;
case 75: 
 /* line 559: */
HFNAELA_crepl();
break;
case 76: 
 /* line 560: */
BFNAELA_ctrim();
break;
case 77: 
 /* line 561: */
XENAELA_cindex();
break;
case 78: 
 /* line 562: */
TDNAELA_cbracket();
break;
case 79: 
 /* line 563: */
UFNAELA_cattr();
break;
case 80: 
 /* line 564: */
PFNAELA_cconc();
break;
case 81: 
 /* line 565: */
YWMAELA_ctypestartp();
break;
case 82: 
 /* line 566: */
VCNAELA_calt();
break;
case 83: 
 /* line 567: */
JDNAELA_cnullp();
break;
case 84: 
 /* line 568: */
FDNAELA_crow();
break;
case 85: 
 /* line 569: */
ADNAELA_cst();
break;
case 86: 
 /* line 570: */
PCNAELA_cprimu();
break;
case 87: 
 /* line 571: */
JCNAELA_cprimr();
break;
case 88: 
 /* line 572: */
FCNAELA_cprimi();
break;
case 89: 
 /* line 573: */
BCNAELA_cprim();
break;
case 90: 
 /* line 574: */
OXMAELA_replicator();
break;
case 91: 
 /* line 575: */
IOOAELA_indsp();
break;
case 92: 
 /* line 576: */
RLNAELA_fnstartp();
break;
case 93: 
 /* line 577: */
HMNAELA_spec3();
break;
case 94: 
 /* line 578: */
LLNAELA_extfns();
break;
case 95: 
 /* line 579: */
SLNAELA_fnendp();
break;
case 96: 
 /* line 580: */
IMNAELA_fnspec1();
break;
case 97: 
 /* line 581: */
ANOAELA_macin();
break;
case 98: 
 /* line 582: */
HNOAELA_macend();
break;
case 99: 
 /* line 583: */
ONNAELA_fnspec2();
break;
case 100: 
 /* line 584: */
QNNAELA_macspecp();
break;
case 101: 
 /* line 585: */
ICOAELA_attrdecl();
break;
case 102: 
 /* line 586: */
KDOAELA_constdecl();
break;
case 103: 
 /* line 587: */
RCOAELA_intdecl();
break;
case 104: 
 /* line 588: */
BDOAELA_typedecl();
break;
case 105: 
 /* line 589: */
ZLNAELA_usagep();
break;
case 106: 
 /* line 590: */
BMNAELA_fnspecinput();
break;
case 107: 
 /* line 591: */
DMNAELA_fnspecoutput();
break;
case 108: 
 /* line 592: */
BINAELA_attrlistpr();
break;
case 109: 
 /* line 593: */
THNAELA_namestp();
break;
case 110: 
 /* line 594: */
UHNAELA_idloop();
break;
case 111: 
 /* line 595: */
XLNAELA_fndecl();
break;
case 112: 
 /* line 596: */
SQNAELA_unit();
break;
case 113: 
 /* line 597: */
WNNAELA_arith();
break;
case 114: 
 /* line 598: */
RPNAELA_slower();
break;
case 115: 
 /* line 599: */
QPNAELA_faster();
break;
case 116: 
 /* line 600: */
QQNAELA_imported();
break;
case 117: 
 /* line 601: */
IPNAELA_sample();
break;
case 118: 
 /* line 602: */
ZNNAELA_biop1();
break;
case 119: 
 /* line 603: */
LONAELA_alien();
break;
case 120: 
 /* line 604: */
HONAELA_biop();
break;
case 121: 
 /* line 605: */
JQNAELA_reformpr();
break;
case 122: 
 /* line 606: */
DQNAELA_ramp();
break;
case 123: 
 /* line 607: */
YONAELA_adelay();
break;
case 124: 
 /* line 608: */
PONAELA_idelay();
break;
case 125: 
 /* line 609: */
VQNAELA_vvarmultp();
break;
case 126: 
 /* line 610: */
AYNAELA_addattr();
break;
case 127: 
 /* line 611: */
LWNAELA_vreplace();
break;
case 128: 
 /* line 612: */
BXNAELA_vvoid();
break;
case 129: 
 /* line 613: */
YRNAELA_vprimc();
break;
case 130: 
 /* line 614: */
XWNAELA_vnull();
break;
case 131: 
 /* line 615: */
SXNAELA_vprimst();
break;
case 132: 
 /* line 616: */
KXNAELA_vprimch();
break;
case 133: 
 /* line 617: */
FXNAELA_vstring();
break;
case 134: 
 /* line 618: */
TWNAELA_vbracket();
break;
case 135: 
 /* line 619: */
CWNAELA_vdynstart();
break;
case 136: 
 /* line 620: */
FWNAELA_vdynindexp();
break;
case 137: 
 /* line 621: */
SVNAELA_vparstart();
break;
case 138: 
 /* line 622: */
XVNAELA_vparp();
break;
case 139: 
 /* line 623: */
IVNAELA_vseqstart();
break;
case 140: 
 /* line 624: */
NVNAELA_vseqp();
break;
case 141: 
 /* line 625: */
ARNAELA_vconst();
break;
case 142: 
 /* line 626: */
VSNAELA_vtermindex();
break;
case 143: 
 /* line 627: */
CVNAELA_vfip();
break;
case 144: 
 /* line 628: */
TUNAELA_vcoll();
break;
case 145: 
 /* line 629: */
OUNAELA_vquery();
break;
case 146: 
 /* line 630: */
CUNAELA_vcasestart();
break;
case 147: 
 /* line 631: */
FUNAELA_vcase();
break;
case 148: 
 /* line 632: */
XTNAELA_vrow();
break;
case 149: 
 /* line 633: */
STNAELA_vsharp();
break;
case 150: 
 /* line 634: */
NTNAELA_vunn();
break;
case 151: 
 /* line 635: */
HTNAELA_vcalld();
break;
case 152: 
 /* line 636: */
CTNAELA_vcallm();
break;
case 153: 
 /* line 637: */
QSNAELA_vindex();
break;
case 154: 
 /* line 638: */
JSNAELA_vtrim();
break;
case 155: 
 /* line 639: */
DSNAELA_vname();
break;
case 156: 
 /* line 640: */
SRNAELA_vprimi();
break;
case 157: 
 /* line 641: */
MRNAELA_vprim();
break;
case 158: 
 /* line 642: */
FRNAELA_vconc();
break;
case 159: 
 /* line 643: */
GZNAELA_unitcheck();
break;
case 160: 
 /* line 644: */
RGOAELA_pardecl();
break;
case 161: 
 /* line 645: */
CHOAELA_ptflt();
break;
case 162: 
 /* line 646: */
XGOAELA_pt();
break;
case 163: 
 /* line 647: */
TGOAELA_biddec2();
break;
case 164: 
 /* line 648: */
XFOAELA_bfor();
break;
case 165: 
 /* line 649: */
DGOAELA_bjoins();
break;
case 166: 
 /* line 650: */
YFOAELA_bjoin();
break;
case 167: 
 /* line 651: */
JFOAELA_bmake1();
break;
case 168: 
 /* line 652: */
QFOAELA_bmake();
break;
case 169: 
 /* line 653: */
OHOAELA_printint();
break;
case 170: 
 /* line 654: */
KHOAELA_strmessage();
break;
case 171: 
 /* line 655: */
HHOAELA_bvar1();
break;
case 172: 
 /* line 656: */
NGOAELA_bjoins1();
break;
case 173: 
 /* line 657: */
XEOAELA_multint();
break;
case 174: 
 /* line 658: */
FINAELA_instance1();
break;
case 175: 
 /* line 659: */
QINAELA_instancep();
break;
case 176: 
 /* line 660: */
NJNAELA_ctypecall();
break;
case 177: 
 /* line 661: */
GJNAELA_typecall();
break;
case 178: 
 /* line 662: */
ZINAELA_integercall();
break;
case 179: 
 /* line 663: */
SINAELA_attrcall();
break;
case 180: 
 /* line 664: */
LXMAELA_stackinst();
break;
case 181: 
 /* line 665: */
UJNAELA_fnparamcall();
break;
case 182: 
 /* line 666: */
GCOAELA_seqdecl();
break;
case 183: 
 /* line 667: */
BCOAELA_seqrow();
break;
case 184: 
 /* line 668: */
WBOAELA_seqvarmult();
break;
case 185: 
 /* line 669: */
AEOAELA_seqif();
break;
case 186: 
 /* line 670: */
EEOAELA_seqfip();
break;
case 187: 
 /* line 671: */
IBOAELA_seqcasestart();
break;
case 188: 
 /* line 672: */
NBOAELA_seqcase();
break;
case 189: 
 /* line 673: */
WAOAELA_seqassignval1();
break;
case 190: 
 /* line 674: */
DBOAELA_seqassignval2();
break;
case 191: 
 /* line 675: */
SAOAELA_seqper();
break;
case 192: 
 /* line 676: */
NAOAELA_seqvar();
break;
case 193: 
 /* line 677: */
IAOAELA_seqlet();
break;
case 194: 
 /* line 678: */
TZNAELA_seqvoidstart();
break;
case 195: 
 /* line 679: */
AAOAELA_seqvoid();
break;
case 196: 
 /* line 680: */
RZNAELA_seqnullp();
break;
case 197: 
 /* line 681: */
PEOAELA_seqptflt();
break;
case 198: 
 /* line 682: */
KEOAELA_seqpt();
break;
case 199: 
 /* line 683: */
UYNAELA_vnoelse();
break;
case 200: 
 /* line 684: */
LYNAELA_vnormal();
break;
case 201: 
 /* line 685: */
OYNAELA_velsep();
break;
case 202: 
 /* line 686: */
RYNAELA_velseof();
break;
case 203: 
 /* line 687: */
TDOAELA_seqrepstep();
break;
case 204: 
 /* line 688: */
XYNAELA_vcheck();
break;
case 205: 
 /* line 689: */
ZYNAELA_vcaserep();
break;
case 206: 
 /* line 690: */
SPNAELA_timescale();
break;
case 207: 
 /* line 691: */
TNOAELA_checkloop();
break;
case 208: 
 /* line 692: */
FGPAELA = DGPAELA ;
IWMAELA_fail(A_HVEC(GGPAELA,A_UNITE(EGPAELA,mode7,7,FGPAELA),A68_52 ));
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(sid_actions);
return;
} 
#undef NL
 /* line 696: */
 /* line 697: */
 /* line 698: */

A_STATIC A68_INT  LGPAELA_sid_returns(A68_INT  Sid_no, A68_INT  Sid_index, A68_343  Sid_lv, A68_INT  Sid_stind)
{ 
A68_INT  MGPAELA;  /* clause result */
A68_INT  NGPAELA;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(sid_returns);
 /* line 699: */
 /* line 700: */
 /* line 701: */
switch ( Sid_no )
{ 
case 1: 
 /* line 703: */
MGPAELA = JWMAELA_return();
break;
case 2: 
MGPAELA = NGPAELA;
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(sid_returns);
return( MGPAELA );
} 
#undef NL
 /* line 711: */

A68_VOID  UGPAELA_assemble(A68_INT  Contextno, A68_INT  Closureno, A68_BOOL  Export, A68_319 * Specbuffer, A68_319 * Bodybuffer, A68_97  Msg, A68_261  *ReturnedValue)
{ 
A68_349  VGPAELA;  /* procedure value */
A68_350  WGPAELA;  /* procedure value */
A68_351  XGPAELA;  /* procedure value */
A68_352  YGPAELA;  /* procedure value */
A68_353  ZGPAELA;  /* procedure value */
A68_348  AHPAELA;  /* avoid structure result */
A68_349  BHPAELA;  /* procedure value */
A68_350  CHPAELA;  /* procedure value */
A68_351  DHPAELA;  /* procedure value */
A68_352  EHPAELA;  /* procedure value */
A68_353  FHPAELA;  /* procedure value */
A68_348  GHPAELA;  /* avoid structure result */
A68_261  HHPAELA;  /* clause result */
A_PROC_ENTRY(assemble);
 /* line 712: */
 /* line 713: */
{ 
ZOOAELA_assemble_start(Contextno, Closureno, Export, Specbuffer, Msg);
 /* line 714: */
 /* line 715: */
VGPAELA.fn.fn_global = XEPAELA_sid_initstacks;
VGPAELA.nonlocals = A68_NIL;
WGPAELA.fn.fn_global = YVMAELA_reader;
WGPAELA.nonlocals = A68_NIL;
XGPAELA.fn.fn_global = GWMAELA_failure;
XGPAELA.nonlocals = A68_NIL;
YGPAELA.fn.fn_global = BGPAELA_sid_actions;
YGPAELA.nonlocals = A68_NIL;
ZGPAELA.fn.fn_global = LGPAELA_sid_returns;
ZGPAELA.nonlocals = A68_NIL;
GBAAELA_analyser( WEPAELA_sid_mult, SEPAELA_sid_code, VEPAELA_sid_cblwds, VGPAELA, WGPAELA, XGPAELA, YGPAELA, ZGPAELA, &AHPAELA );
AHPAELA;
 /* line 716: */
 /* line 717: */
if ( (Bodybuffer!=OXIAELA_nilbuffer) )
{ 
LPOAELA_assemble_body(Bodybuffer);
 /* line 718: */
 /* line 719: */
 /* line 720: */
BHPAELA.fn.fn_global = XEPAELA_sid_initstacks;
BHPAELA.nonlocals = A68_NIL;
CHPAELA.fn.fn_global = YVMAELA_reader;
CHPAELA.nonlocals = A68_NIL;
DHPAELA.fn.fn_global = GWMAELA_failure;
DHPAELA.nonlocals = A68_NIL;
EHPAELA.fn.fn_global = BGPAELA_sid_actions;
EHPAELA.nonlocals = A68_NIL;
FHPAELA.fn.fn_global = LGPAELA_sid_returns;
FHPAELA.nonlocals = A68_NIL;
GBAAELA_analyser( WEPAELA_sid_mult, SEPAELA_sid_code, VEPAELA_sid_cblwds, BHPAELA, CHPAELA, DHPAELA, EHPAELA, FHPAELA, &GHPAELA );
GHPAELA;
} 
 /* line 721: */
 /* line 722: */
 /* line 726: */
HHPAELA = KTMAELA_extdeclaration;
} 
A_PROC_EXIT(assemble);
*ReturnedValue = (HHPAELA);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void LEPAELA(void)   /* initialise DECS assemble */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/assemble.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/assembleproc.m","./mfiles/sidanalyser.m","./mfiles/databasebuffers.m","/u/model/ella/transform/assoc/mfiles/assmodes.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_361  QEPAELA;  /* collateral clause result */
A68_345  REPAELA;  /* OPERATORS - istruct -> vector */
A68_362  TEPAELA;  /* collateral clause result */
A68_53  UEPAELA;  /* OPERATORS - istruct -> vector */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
NMMAELA();   /* USE assembleproc */
BAAAELA();   /* USE sidanalyser */
NWIAELA();   /* USE databasebuffers */
BAAATRN();   /* USE assmodes */
JSCAOST();   /* USE basics */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ella/assoc/./a68files/assemble.a68";
A_config.translation_time = "Tue Apr  4 10:35:38 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "KEPAELA (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:35:38 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS assemble);
UEAALIB_a68config(LGAALIB_configinfo, PEPAELA);
 /* line 53: */
 /* line 54: */
QEPAELA.data[0] = 0X0007U;
QEPAELA.data[1] = 0X0003U;
QEPAELA.data[2] = 0X0031U;
QEPAELA.data[3] = 0X00a0U;
 /* line 55: */
QEPAELA.data[4] = 0X0011U;
QEPAELA.data[5] = 0X03f2U;
QEPAELA.data[6] = 0X0069U;
QEPAELA.data[7] = 0X000dU;
QEPAELA.data[8] = 0X03f2U;
 /* line 56: */
QEPAELA.data[9] = 0X004eU;
QEPAELA.data[10] = 0X0007U;
QEPAELA.data[11] = 0X000fU;
QEPAELA.data[12] = 0X0162U;
QEPAELA.data[13] = 0X0016U;
 /* line 57: */
QEPAELA.data[14] = 0X000cU;
QEPAELA.data[15] = 0X1ac0U;
QEPAELA.data[16] = 0X0014U;
QEPAELA.data[17] = 0X001cU;
QEPAELA.data[18] = 0X0011U;
 /* line 58: */
QEPAELA.data[19] = 0X000bU;
QEPAELA.data[20] = 0X00b9U;
QEPAELA.data[21] = 0X00d9U;
QEPAELA.data[22] = 0X000aU;
QEPAELA.data[23] = 0X00a6U;
 /* line 59: */
QEPAELA.data[24] = 0X0007U;
QEPAELA.data[25] = 0X000fU;
QEPAELA.data[26] = 0X023aU;
QEPAELA.data[27] = 0X0111U;
QEPAELA.data[28] = 0X001cU;
 /* line 60: */
QEPAELA.data[29] = 0X023aU;
QEPAELA.data[30] = 0X00f6U;
QEPAELA.data[31] = 0X0007U;
QEPAELA.data[32] = 0X000fU;
QEPAELA.data[33] = 0X024aU;
 /* line 61: */
QEPAELA.data[34] = 0X0131U;
QEPAELA.data[35] = 0X0007U;
QEPAELA.data[36] = 0X000fU;
QEPAELA.data[37] = 0X0232U;
QEPAELA.data[38] = 0X01c9U;
 /* line 62: */
QEPAELA.data[39] = 0X0007U;
QEPAELA.data[40] = 0X0024U;
QEPAELA.data[41] = 0X0502U;
QEPAELA.data[42] = 0X0156U;
QEPAELA.data[43] = 0X0007U;
 /* line 63: */
QEPAELA.data[44] = 0X002cU;
QEPAELA.data[45] = 0X03faU;
QEPAELA.data[46] = 0X0176U;
QEPAELA.data[47] = 0X0007U;
QEPAELA.data[48] = 0X0034U;
 /* line 64: */
QEPAELA.data[49] = 0X03faU;
QEPAELA.data[50] = 0X0196U;
QEPAELA.data[51] = 0X0007U;
QEPAELA.data[52] = 0X05f0U;
QEPAELA.data[53] = 0X0668U;
 /* line 65: */
QEPAELA.data[54] = 0X003cU;
QEPAELA.data[55] = 0X000fU;
QEPAELA.data[56] = 0X022aU;
QEPAELA.data[57] = 0X02e9U;
QEPAELA.data[58] = 0X0007U;
 /* line 66: */
QEPAELA.data[59] = 0X0024U;
QEPAELA.data[60] = 0X0502U;
QEPAELA.data[61] = 0X01eeU;
QEPAELA.data[62] = 0X0007U;
QEPAELA.data[63] = 0X002cU;
 /* line 67: */
QEPAELA.data[64] = 0X03faU;
QEPAELA.data[65] = 0X020eU;
QEPAELA.data[66] = 0X0007U;
QEPAELA.data[67] = 0X002cU;
QEPAELA.data[68] = 0X03faU;
 /* line 68: */
QEPAELA.data[69] = 0X022eU;
QEPAELA.data[70] = 0X0007U;
QEPAELA.data[71] = 0X002cU;
QEPAELA.data[72] = 0X03faU;
QEPAELA.data[73] = 0X024eU;
 /* line 69: */
QEPAELA.data[74] = 0X0007U;
QEPAELA.data[75] = 0X002cU;
QEPAELA.data[76] = 0X03faU;
QEPAELA.data[77] = 0X026eU;
QEPAELA.data[78] = 0X0007U;
 /* line 70: */
QEPAELA.data[79] = 0X0044U;
QEPAELA.data[80] = 0X03faU;
QEPAELA.data[81] = 0X028eU;
QEPAELA.data[82] = 0X0007U;
QEPAELA.data[83] = 0X05f0U;
 /* line 71: */
QEPAELA.data[84] = 0X0820U;
QEPAELA.data[85] = 0X0898U;
QEPAELA.data[86] = 0X1170U;
QEPAELA.data[87] = 0X0668U;
QEPAELA.data[88] = 0X004cU;
 /* line 72: */
QEPAELA.data[89] = 0X11e8U;
QEPAELA.data[90] = 0X0054U;
QEPAELA.data[91] = 0X000fU;
QEPAELA.data[92] = 0X0222U;
QEPAELA.data[93] = 0X0429U;
 /* line 73: */
QEPAELA.data[94] = 0X0007U;
QEPAELA.data[95] = 0X005cU;
QEPAELA.data[96] = 0X03faU;
QEPAELA.data[97] = 0X030eU;
QEPAELA.data[98] = 0X0007U;
 /* line 74: */
QEPAELA.data[99] = 0X1990U;
QEPAELA.data[100] = 0X002cU;
QEPAELA.data[101] = 0X03faU;
QEPAELA.data[102] = 0X0336U;
QEPAELA.data[103] = 0X0007U;
 /* line 75: */
QEPAELA.data[104] = 0X002cU;
QEPAELA.data[105] = 0X03faU;
QEPAELA.data[106] = 0X0356U;
QEPAELA.data[107] = 0X0007U;
QEPAELA.data[108] = 0X002cU;
 /* line 76: */
QEPAELA.data[109] = 0X03faU;
QEPAELA.data[110] = 0X0376U;
QEPAELA.data[111] = 0X0007U;
QEPAELA.data[112] = 0X0064U;
QEPAELA.data[113] = 0X03faU;
 /* line 77: */
QEPAELA.data[114] = 0X0396U;
QEPAELA.data[115] = 0X0007U;
QEPAELA.data[116] = 0X05f0U;
QEPAELA.data[117] = 0X0820U;
QEPAELA.data[118] = 0X0898U;
 /* line 78: */
QEPAELA.data[119] = 0X1170U;
QEPAELA.data[120] = 0X1a28U;
QEPAELA.data[121] = 0X006cU;
QEPAELA.data[122] = 0X1b28U;
QEPAELA.data[123] = 0X002cU;
 /* line 79: */
QEPAELA.data[124] = 0X03faU;
QEPAELA.data[125] = 0X03eeU;
QEPAELA.data[126] = 0X0007U;
QEPAELA.data[127] = 0X0074U;
QEPAELA.data[128] = 0X03faU;
 /* line 80: */
QEPAELA.data[129] = 0X040eU;
QEPAELA.data[130] = 0X0007U;
QEPAELA.data[131] = 0X000fU;
QEPAELA.data[132] = 0X021aU;
QEPAELA.data[133] = 0X04f9U;
 /* line 81: */
QEPAELA.data[134] = 0X0007U;
QEPAELA.data[135] = 0X0024U;
QEPAELA.data[136] = 0X0502U;
QEPAELA.data[137] = 0X044eU;
QEPAELA.data[138] = 0X0007U;
 /* line 82: */
QEPAELA.data[139] = 0X002cU;
QEPAELA.data[140] = 0X03faU;
QEPAELA.data[141] = 0X046eU;
QEPAELA.data[142] = 0X0007U;
QEPAELA.data[143] = 0X002cU;
 /* line 83: */
QEPAELA.data[144] = 0X03faU;
QEPAELA.data[145] = 0X048eU;
QEPAELA.data[146] = 0X0007U;
QEPAELA.data[147] = 0X007cU;
QEPAELA.data[148] = 0X03faU;
 /* line 84: */
QEPAELA.data[149] = 0X04aeU;
QEPAELA.data[150] = 0X0007U;
QEPAELA.data[151] = 0X05f0U;
QEPAELA.data[152] = 0X0820U;
QEPAELA.data[153] = 0X0668U;
 /* line 85: */
QEPAELA.data[154] = 0X004cU;
QEPAELA.data[155] = 0X0b40U;
QEPAELA.data[156] = 0X0084U;
QEPAELA.data[157] = 0X000fU;
QEPAELA.data[158] = 0X0212U;
 /* line 86: */
QEPAELA.data[159] = 0X00deU;
QEPAELA.data[160] = 0X0007U;
QEPAELA.data[161] = 0X0024U;
QEPAELA.data[162] = 0X0502U;
QEPAELA.data[163] = 0X051eU;
 /* line 87: */
QEPAELA.data[164] = 0X0007U;
QEPAELA.data[165] = 0X002cU;
QEPAELA.data[166] = 0X03faU;
QEPAELA.data[167] = 0X053eU;
QEPAELA.data[168] = 0X0007U;
 /* line 88: */
QEPAELA.data[169] = 0X002cU;
QEPAELA.data[170] = 0X03faU;
QEPAELA.data[171] = 0X055eU;
QEPAELA.data[172] = 0X0007U;
QEPAELA.data[173] = 0X002cU;
 /* line 89: */
QEPAELA.data[174] = 0X03faU;
QEPAELA.data[175] = 0X057eU;
QEPAELA.data[176] = 0X0007U;
QEPAELA.data[177] = 0X008cU;
QEPAELA.data[178] = 0X03faU;
 /* line 90: */
QEPAELA.data[179] = 0X059eU;
QEPAELA.data[180] = 0X0007U;
QEPAELA.data[181] = 0X05f0U;
QEPAELA.data[182] = 0X0820U;
QEPAELA.data[183] = 0X0898U;
 /* line 91: */
QEPAELA.data[184] = 0X0668U;
QEPAELA.data[185] = 0X004cU;
QEPAELA.data[186] = 0X0940U;
QEPAELA.data[187] = 0X0094U;
QEPAELA.data[188] = 0X000fU;
 /* line 92: */
QEPAELA.data[189] = 0X0502U;
QEPAELA.data[190] = 0X05f6U;
QEPAELA.data[191] = 0X0007U;
QEPAELA.data[192] = 0X0611U;
QEPAELA.data[193] = 0X03faU;
 /* line 93: */
QEPAELA.data[194] = 0X000fU;
QEPAELA.data[195] = 0X002cU;
QEPAELA.data[196] = 0X03faU;
QEPAELA.data[197] = 0X062eU;
QEPAELA.data[198] = 0X0007U;
 /* line 94: */
QEPAELA.data[199] = 0X009cU;
QEPAELA.data[200] = 0X03faU;
QEPAELA.data[201] = 0X064eU;
QEPAELA.data[202] = 0X0007U;
QEPAELA.data[203] = 0X05f1U;
 /* line 95: */
QEPAELA.data[204] = 0X04eaU;
QEPAELA.data[205] = 0X0691U;
QEPAELA.data[206] = 0X0007U;
QEPAELA.data[207] = 0X00a4U;
QEPAELA.data[208] = 0X000fU;
 /* line 96: */
QEPAELA.data[209] = 0X04e2U;
QEPAELA.data[210] = 0X06c9U;
QEPAELA.data[211] = 0X0007U;
QEPAELA.data[212] = 0X00acU;
QEPAELA.data[213] = 0X07a0U;
 /* line 97: */
QEPAELA.data[214] = 0X00b4U;
QEPAELA.data[215] = 0X000fU;
QEPAELA.data[216] = 0X04daU;
QEPAELA.data[217] = 0X06f9U;
QEPAELA.data[218] = 0X0007U;
 /* line 98: */
QEPAELA.data[219] = 0X0668U;
QEPAELA.data[220] = 0X00bcU;
QEPAELA.data[221] = 0X000fU;
QEPAELA.data[222] = 0X04d2U;
QEPAELA.data[223] = 0X0761U;
 /* line 99: */
QEPAELA.data[224] = 0X0007U;
QEPAELA.data[225] = 0X0024U;
QEPAELA.data[226] = 0X0502U;
QEPAELA.data[227] = 0X071eU;
QEPAELA.data[228] = 0X0007U;
 /* line 100: */
QEPAELA.data[229] = 0X03faU;
QEPAELA.data[230] = 0X0736U;
QEPAELA.data[231] = 0X0007U;
QEPAELA.data[232] = 0X07e8U;
QEPAELA.data[233] = 0X00c4U;
 /* line 101: */
QEPAELA.data[234] = 0X000fU;
QEPAELA.data[235] = 0X04caU;
QEPAELA.data[236] = 0X066eU;
QEPAELA.data[237] = 0X0007U;
QEPAELA.data[238] = 0X00ccU;
 /* line 102: */
QEPAELA.data[239] = 0X03faU;
QEPAELA.data[240] = 0X0786U;
QEPAELA.data[241] = 0X0007U;
QEPAELA.data[242] = 0X000fU;
QEPAELA.data[243] = 0X0013U;
 /* line 103: */
QEPAELA.data[244] = 0X07c9U;
QEPAELA.data[245] = 0X0668U;
QEPAELA.data[246] = 0X00d4U;
QEPAELA.data[247] = 0X07a1U;
QEPAELA.data[248] = 0X000aU;
 /* line 104: */
QEPAELA.data[249] = 0X07a6U;
QEPAELA.data[250] = 0X0007U;
QEPAELA.data[251] = 0X000fU;
QEPAELA.data[252] = 0X0502U;
QEPAELA.data[253] = 0X000fU;
 /* line 105: */
QEPAELA.data[254] = 0X00dcU;
QEPAELA.data[255] = 0X0502U;
QEPAELA.data[256] = 0X0806U;
QEPAELA.data[257] = 0X0007U;
QEPAELA.data[258] = 0X07e9U;
 /* line 106: */
QEPAELA.data[259] = 0X0502U;
QEPAELA.data[260] = 0X0826U;
QEPAELA.data[261] = 0X0007U;
QEPAELA.data[262] = 0X0841U;
QEPAELA.data[263] = 0X03faU;
 /* line 107: */
QEPAELA.data[264] = 0X000fU;
QEPAELA.data[265] = 0X002cU;
QEPAELA.data[266] = 0X03faU;
QEPAELA.data[267] = 0X085eU;
QEPAELA.data[268] = 0X0007U;
 /* line 108: */
QEPAELA.data[269] = 0X00e4U;
QEPAELA.data[270] = 0X03faU;
QEPAELA.data[271] = 0X087eU;
QEPAELA.data[272] = 0X0007U;
QEPAELA.data[273] = 0X0821U;
 /* line 109: */
QEPAELA.data[274] = 0X0502U;
QEPAELA.data[275] = 0X089eU;
QEPAELA.data[276] = 0X0007U;
QEPAELA.data[277] = 0X08b9U;
QEPAELA.data[278] = 0X03faU;
 /* line 110: */
QEPAELA.data[279] = 0X000fU;
QEPAELA.data[280] = 0X0024U;
QEPAELA.data[281] = 0X002cU;
QEPAELA.data[282] = 0X03faU;
QEPAELA.data[283] = 0X08deU;
 /* line 111: */
QEPAELA.data[284] = 0X0007U;
QEPAELA.data[285] = 0X002cU;
QEPAELA.data[286] = 0X03faU;
QEPAELA.data[287] = 0X08feU;
QEPAELA.data[288] = 0X0007U;
 /* line 112: */
QEPAELA.data[289] = 0X0940U;
QEPAELA.data[290] = 0X000aU;
QEPAELA.data[291] = 0X091eU;
QEPAELA.data[292] = 0X0007U;
QEPAELA.data[293] = 0X00ecU;
 /* line 113: */
QEPAELA.data[294] = 0X0899U;
QEPAELA.data[295] = 0X001bU;
QEPAELA.data[296] = 0X0959U;
QEPAELA.data[297] = 0X0981U;
QEPAELA.data[298] = 0X0023U;
 /* line 114: */
QEPAELA.data[299] = 0X0946U;
QEPAELA.data[300] = 0X0f30U;
QEPAELA.data[301] = 0X00f4U;
QEPAELA.data[302] = 0X000fU;
QEPAELA.data[303] = 0X040aU;
 /* line 115: */
QEPAELA.data[304] = 0X0a09U;
QEPAELA.data[305] = 0X0007U;
QEPAELA.data[306] = 0X0024U;
QEPAELA.data[307] = 0X0502U;
QEPAELA.data[308] = 0X09a6U;
 /* line 116: */
QEPAELA.data[309] = 0X0007U;
QEPAELA.data[310] = 0X00fcU;
QEPAELA.data[311] = 0X03faU;
QEPAELA.data[312] = 0X09c6U;
QEPAELA.data[313] = 0X0007U;
 /* line 117: */
QEPAELA.data[314] = 0X0aa0U;
QEPAELA.data[315] = 0X0104U;
QEPAELA.data[316] = 0X015aU;
QEPAELA.data[317] = 0X09eeU;
QEPAELA.data[318] = 0X0007U;
 /* line 118: */
QEPAELA.data[319] = 0X000fU;
QEPAELA.data[320] = 0X01a2U;
QEPAELA.data[321] = 0X0a69U;
QEPAELA.data[322] = 0X0007U;
QEPAELA.data[323] = 0X0024U;
 /* line 119: */
QEPAELA.data[324] = 0X0502U;
QEPAELA.data[325] = 0X0a2eU;
QEPAELA.data[326] = 0X0007U;
QEPAELA.data[327] = 0X0b40U;
QEPAELA.data[328] = 0X010cU;
 /* line 120: */
QEPAELA.data[329] = 0X0b40U;
QEPAELA.data[330] = 0X0114U;
QEPAELA.data[331] = 0X000fU;
QEPAELA.data[332] = 0X019aU;
QEPAELA.data[333] = 0X0986U;
 /* line 121: */
QEPAELA.data[334] = 0X0007U;
QEPAELA.data[335] = 0X011cU;
QEPAELA.data[336] = 0X0ec8U;
QEPAELA.data[337] = 0X0124U;
QEPAELA.data[338] = 0X000fU;
 /* line 122: */
QEPAELA.data[339] = 0X041aU;
QEPAELA.data[340] = 0X0b01U;
QEPAELA.data[341] = 0X0007U;
QEPAELA.data[342] = 0X0024U;
QEPAELA.data[343] = 0X0502U;
 /* line 123: */
QEPAELA.data[344] = 0X0ac6U;
QEPAELA.data[345] = 0X0007U;
QEPAELA.data[346] = 0X012cU;
QEPAELA.data[347] = 0X0502U;
QEPAELA.data[348] = 0X0ae6U;
 /* line 124: */
QEPAELA.data[349] = 0X0007U;
QEPAELA.data[350] = 0X0aa1U;
QEPAELA.data[351] = 0X0412U;
QEPAELA.data[352] = 0X000fU;
QEPAELA.data[353] = 0X0007U;
 /* line 125: */
QEPAELA.data[354] = 0X0134U;
QEPAELA.data[355] = 0X0502U;
QEPAELA.data[356] = 0X0b26U;
QEPAELA.data[357] = 0X0007U;
QEPAELA.data[358] = 0X0aa1U;
 /* line 126: */
QEPAELA.data[359] = 0X004aU;
QEPAELA.data[360] = 0X0b59U;
QEPAELA.data[361] = 0X0b71U;
QEPAELA.data[362] = 0X002bU;
QEPAELA.data[363] = 0X0b46U;
 /* line 127: */
QEPAELA.data[364] = 0X0bd1U;
QEPAELA.data[365] = 0X004aU;
QEPAELA.data[366] = 0X0b76U;
QEPAELA.data[367] = 0X0007U;
QEPAELA.data[368] = 0X002cU;
 /* line 128: */
QEPAELA.data[369] = 0X03faU;
QEPAELA.data[370] = 0X0b96U;
QEPAELA.data[371] = 0X0007U;
QEPAELA.data[372] = 0X0b40U;
QEPAELA.data[373] = 0X010cU;
 /* line 129: */
QEPAELA.data[374] = 0X0b40U;
QEPAELA.data[375] = 0X013cU;
QEPAELA.data[376] = 0X000fU;
QEPAELA.data[377] = 0X03daU;
QEPAELA.data[378] = 0X0c11U;
 /* line 130: */
QEPAELA.data[379] = 0X0007U;
QEPAELA.data[380] = 0X0144U;
QEPAELA.data[381] = 0X03faU;
QEPAELA.data[382] = 0X0bf6U;
QEPAELA.data[383] = 0X0007U;
 /* line 131: */
QEPAELA.data[384] = 0X000fU;
QEPAELA.data[385] = 0X03aaU;
QEPAELA.data[386] = 0X0c39U;
QEPAELA.data[387] = 0X0007U;
QEPAELA.data[388] = 0X014cU;
 /* line 132: */
QEPAELA.data[389] = 0X000fU;
QEPAELA.data[390] = 0X02aaU;
QEPAELA.data[391] = 0X0c69U;
QEPAELA.data[392] = 0X0007U;
QEPAELA.data[393] = 0X0b40U;
 /* line 133: */
QEPAELA.data[394] = 0X0154U;
QEPAELA.data[395] = 0X000fU;
QEPAELA.data[396] = 0X0052U;
QEPAELA.data[397] = 0X0cc9U;
QEPAELA.data[398] = 0X0007U;
 /* line 134: */
QEPAELA.data[399] = 0X002cU;
QEPAELA.data[400] = 0X03faU;
QEPAELA.data[401] = 0X0c8eU;
QEPAELA.data[402] = 0X0007U;
QEPAELA.data[403] = 0X015cU;
 /* line 135: */
QEPAELA.data[404] = 0X0502U;
QEPAELA.data[405] = 0X0caeU;
QEPAELA.data[406] = 0X0007U;
QEPAELA.data[407] = 0X000fU;
QEPAELA.data[408] = 0X0042U;
 /* line 136: */
QEPAELA.data[409] = 0X0d09U;
QEPAELA.data[410] = 0X0007U;
QEPAELA.data[411] = 0X0144U;
QEPAELA.data[412] = 0X03faU;
QEPAELA.data[413] = 0X0ceeU;
 /* line 137: */
QEPAELA.data[414] = 0X0007U;
QEPAELA.data[415] = 0X000fU;
QEPAELA.data[416] = 0X003aU;
QEPAELA.data[417] = 0X0d49U;
QEPAELA.data[418] = 0X0007U;
 /* line 138: */
QEPAELA.data[419] = 0X0164U;
QEPAELA.data[420] = 0X03faU;
QEPAELA.data[421] = 0X0d2eU;
QEPAELA.data[422] = 0X0007U;
QEPAELA.data[423] = 0X000fU;
 /* line 139: */
QEPAELA.data[424] = 0X0032U;
QEPAELA.data[425] = 0X0d99U;
QEPAELA.data[426] = 0X0007U;
QEPAELA.data[427] = 0X0b40U;
QEPAELA.data[428] = 0X010cU;
 /* line 140: */
QEPAELA.data[429] = 0X0b40U;
QEPAELA.data[430] = 0X010cU;
QEPAELA.data[431] = 0X0b40U;
QEPAELA.data[432] = 0X016cU;
QEPAELA.data[433] = 0X000fU;
 /* line 141: */
QEPAELA.data[434] = 0X002aU;
QEPAELA.data[435] = 0X0de9U;
QEPAELA.data[436] = 0X0007U;
QEPAELA.data[437] = 0X002cU;
QEPAELA.data[438] = 0X03faU;
 /* line 142: */
QEPAELA.data[439] = 0X0dbeU;
QEPAELA.data[440] = 0X0007U;
QEPAELA.data[441] = 0X0b40U;
QEPAELA.data[442] = 0X0174U;
QEPAELA.data[443] = 0X000fU;
 /* line 143: */
QEPAELA.data[444] = 0X0022U;
QEPAELA.data[445] = 0X0e49U;
QEPAELA.data[446] = 0X0007U;
QEPAELA.data[447] = 0X002cU;
QEPAELA.data[448] = 0X03faU;
 /* line 144: */
QEPAELA.data[449] = 0X0e0eU;
QEPAELA.data[450] = 0X0007U;
QEPAELA.data[451] = 0X0b40U;
QEPAELA.data[452] = 0X010cU;
QEPAELA.data[453] = 0X0b40U;
 /* line 145: */
QEPAELA.data[454] = 0X017cU;
QEPAELA.data[455] = 0X000fU;
QEPAELA.data[456] = 0X001aU;
QEPAELA.data[457] = 0X0e89U;
QEPAELA.data[458] = 0X0007U;
 /* line 146: */
QEPAELA.data[459] = 0X0184U;
QEPAELA.data[460] = 0X03faU;
QEPAELA.data[461] = 0X0e6eU;
QEPAELA.data[462] = 0X0007U;
QEPAELA.data[463] = 0X000fU;
 /* line 147: */
QEPAELA.data[464] = 0X0012U;
QEPAELA.data[465] = 0X0bd6U;
QEPAELA.data[466] = 0X0007U;
QEPAELA.data[467] = 0X018cU;
QEPAELA.data[468] = 0X03faU;
 /* line 148: */
QEPAELA.data[469] = 0X0eaeU;
QEPAELA.data[470] = 0X0007U;
QEPAELA.data[471] = 0X000fU;
QEPAELA.data[472] = 0X0023U;
QEPAELA.data[473] = 0X0f11U;
 /* line 149: */
QEPAELA.data[474] = 0X0f30U;
QEPAELA.data[475] = 0X0194U;
QEPAELA.data[476] = 0X019cU;
QEPAELA.data[477] = 0X0502U;
QEPAELA.data[478] = 0X0ef6U;
 /* line 150: */
QEPAELA.data[479] = 0X0007U;
QEPAELA.data[480] = 0X0ec9U;
QEPAELA.data[481] = 0X015aU;
QEPAELA.data[482] = 0X0eceU;
QEPAELA.data[483] = 0X0007U;
 /* line 151: */
QEPAELA.data[484] = 0X000fU;
QEPAELA.data[485] = 0X04aaU;
QEPAELA.data[486] = 0X0f59U;
QEPAELA.data[487] = 0X0007U;
QEPAELA.data[488] = 0X01a4U;
 /* line 152: */
QEPAELA.data[489] = 0X000fU;
QEPAELA.data[490] = 0X045aU;
QEPAELA.data[491] = 0X0f99U;
QEPAELA.data[492] = 0X0007U;
QEPAELA.data[493] = 0X0b40U;
 /* line 153: */
QEPAELA.data[494] = 0X010cU;
QEPAELA.data[495] = 0X0f30U;
QEPAELA.data[496] = 0X01acU;
QEPAELA.data[497] = 0X000fU;
QEPAELA.data[498] = 0X02b2U;
 /* line 154: */
QEPAELA.data[499] = 0X0fc9U;
QEPAELA.data[500] = 0X0007U;
QEPAELA.data[501] = 0X0f30U;
QEPAELA.data[502] = 0X01b4U;
QEPAELA.data[503] = 0X000fU;
 /* line 155: */
QEPAELA.data[504] = 0X0082U;
QEPAELA.data[505] = 0X1009U;
QEPAELA.data[506] = 0X0007U;
QEPAELA.data[507] = 0X0f30U;
QEPAELA.data[508] = 0X0194U;
 /* line 156: */
QEPAELA.data[509] = 0X0f30U;
QEPAELA.data[510] = 0X01bcU;
QEPAELA.data[511] = 0X000fU;
QEPAELA.data[512] = 0X007aU;
QEPAELA.data[513] = 0X1049U;
 /* line 157: */
QEPAELA.data[514] = 0X0007U;
QEPAELA.data[515] = 0X01c4U;
QEPAELA.data[516] = 0X03faU;
QEPAELA.data[517] = 0X102eU;
QEPAELA.data[518] = 0X0007U;
 /* line 158: */
QEPAELA.data[519] = 0X000fU;
QEPAELA.data[520] = 0X0072U;
QEPAELA.data[521] = 0X1081U;
QEPAELA.data[522] = 0X0007U;
QEPAELA.data[523] = 0X01ccU;
 /* line 159: */
QEPAELA.data[524] = 0X1128U;
QEPAELA.data[525] = 0X01d4U;
QEPAELA.data[526] = 0X000fU;
QEPAELA.data[527] = 0X006aU;
QEPAELA.data[528] = 0X10c1U;
 /* line 160: */
QEPAELA.data[529] = 0X0007U;
QEPAELA.data[530] = 0X0b40U;
QEPAELA.data[531] = 0X010cU;
QEPAELA.data[532] = 0X0f30U;
QEPAELA.data[533] = 0X01dcU;
 /* line 161: */
QEPAELA.data[534] = 0X000fU;
QEPAELA.data[535] = 0X0062U;
QEPAELA.data[536] = 0X1101U;
QEPAELA.data[537] = 0X0007U;
QEPAELA.data[538] = 0X01e4U;
 /* line 162: */
QEPAELA.data[539] = 0X03faU;
QEPAELA.data[540] = 0X10e6U;
QEPAELA.data[541] = 0X0007U;
QEPAELA.data[542] = 0X000fU;
QEPAELA.data[543] = 0X005aU;
 /* line 163: */
QEPAELA.data[544] = 0X0f36U;
QEPAELA.data[545] = 0X0007U;
QEPAELA.data[546] = 0X01ecU;
QEPAELA.data[547] = 0X000fU;
QEPAELA.data[548] = 0X0023U;
 /* line 164: */
QEPAELA.data[549] = 0X1151U;
QEPAELA.data[550] = 0X0f30U;
QEPAELA.data[551] = 0X01f4U;
QEPAELA.data[552] = 0X1129U;
QEPAELA.data[553] = 0X015aU;
 /* line 165: */
QEPAELA.data[554] = 0X112eU;
QEPAELA.data[555] = 0X0007U;
QEPAELA.data[556] = 0X000fU;
QEPAELA.data[557] = 0X0502U;
QEPAELA.data[558] = 0X1176U;
 /* line 166: */
QEPAELA.data[559] = 0X0007U;
QEPAELA.data[560] = 0X1191U;
QEPAELA.data[561] = 0X03faU;
QEPAELA.data[562] = 0X000fU;
QEPAELA.data[563] = 0X002cU;
 /* line 167: */
QEPAELA.data[564] = 0X03faU;
QEPAELA.data[565] = 0X11aeU;
QEPAELA.data[566] = 0X0007U;
QEPAELA.data[567] = 0X01fcU;
QEPAELA.data[568] = 0X03faU;
 /* line 168: */
QEPAELA.data[569] = 0X11ceU;
QEPAELA.data[570] = 0X0007U;
QEPAELA.data[571] = 0X1171U;
QEPAELA.data[572] = 0X0482U;
QEPAELA.data[573] = 0X1229U;
 /* line 169: */
QEPAELA.data[574] = 0X0007U;
QEPAELA.data[575] = 0X0204U;
QEPAELA.data[576] = 0X03faU;
QEPAELA.data[577] = 0X120eU;
QEPAELA.data[578] = 0X0007U;
 /* line 170: */
QEPAELA.data[579] = 0X000fU;
QEPAELA.data[580] = 0X047aU;
QEPAELA.data[581] = 0X1251U;
QEPAELA.data[582] = 0X0007U;
QEPAELA.data[583] = 0X020cU;
 /* line 171: */
QEPAELA.data[584] = 0X000fU;
QEPAELA.data[585] = 0X0462U;
QEPAELA.data[586] = 0X1291U;
QEPAELA.data[587] = 0X0007U;
QEPAELA.data[588] = 0X0214U;
 /* line 172: */
QEPAELA.data[589] = 0X03faU;
QEPAELA.data[590] = 0X1276U;
QEPAELA.data[591] = 0X0007U;
QEPAELA.data[592] = 0X000fU;
QEPAELA.data[593] = 0X043aU;
 /* line 173: */
QEPAELA.data[594] = 0X1311U;
QEPAELA.data[595] = 0X0007U;
QEPAELA.data[596] = 0X002cU;
QEPAELA.data[597] = 0X03faU;
QEPAELA.data[598] = 0X12b6U;
 /* line 174: */
QEPAELA.data[599] = 0X0007U;
QEPAELA.data[600] = 0X0024U;
QEPAELA.data[601] = 0X0502U;
QEPAELA.data[602] = 0X12d6U;
QEPAELA.data[603] = 0X0007U;
 /* line 175: */
QEPAELA.data[604] = 0X021cU;
QEPAELA.data[605] = 0X0502U;
QEPAELA.data[606] = 0X12f6U;
QEPAELA.data[607] = 0X0007U;
QEPAELA.data[608] = 0X000fU;
 /* line 176: */
QEPAELA.data[609] = 0X0432U;
QEPAELA.data[610] = 0X1379U;
QEPAELA.data[611] = 0X0007U;
QEPAELA.data[612] = 0X002cU;
QEPAELA.data[613] = 0X03faU;
 /* line 177: */
QEPAELA.data[614] = 0X1336U;
QEPAELA.data[615] = 0X0007U;
QEPAELA.data[616] = 0X03faU;
QEPAELA.data[617] = 0X134eU;
QEPAELA.data[618] = 0X0007U;
 /* line 178: */
QEPAELA.data[619] = 0X07e8U;
QEPAELA.data[620] = 0X0224U;
QEPAELA.data[621] = 0X000fU;
QEPAELA.data[622] = 0X042aU;
QEPAELA.data[623] = 0X13d9U;
 /* line 179: */
QEPAELA.data[624] = 0X0007U;
QEPAELA.data[625] = 0X002cU;
QEPAELA.data[626] = 0X03faU;
QEPAELA.data[627] = 0X139eU;
QEPAELA.data[628] = 0X0007U;
 /* line 180: */
QEPAELA.data[629] = 0X022cU;
QEPAELA.data[630] = 0X0502U;
QEPAELA.data[631] = 0X13beU;
QEPAELA.data[632] = 0X0007U;
QEPAELA.data[633] = 0X000fU;
 /* line 181: */
QEPAELA.data[634] = 0X0422U;
QEPAELA.data[635] = 0X1419U;
QEPAELA.data[636] = 0X0007U;
QEPAELA.data[637] = 0X0b40U;
QEPAELA.data[638] = 0X010cU;
 /* line 182: */
QEPAELA.data[639] = 0X11e8U;
QEPAELA.data[640] = 0X0234U;
QEPAELA.data[641] = 0X000fU;
QEPAELA.data[642] = 0X039aU;
QEPAELA.data[643] = 0X1449U;
 /* line 183: */
QEPAELA.data[644] = 0X0007U;
QEPAELA.data[645] = 0X0f30U;
QEPAELA.data[646] = 0X023cU;
QEPAELA.data[647] = 0X000fU;
QEPAELA.data[648] = 0X0392U;
 /* line 184: */
QEPAELA.data[649] = 0X1479U;
QEPAELA.data[650] = 0X0007U;
QEPAELA.data[651] = 0X0f30U;
QEPAELA.data[652] = 0X0244U;
QEPAELA.data[653] = 0X000fU;
 /* line 185: */
QEPAELA.data[654] = 0X034aU;
QEPAELA.data[655] = 0X14c9U;
QEPAELA.data[656] = 0X0007U;
QEPAELA.data[657] = 0X0b40U;
QEPAELA.data[658] = 0X010cU;
 /* line 186: */
QEPAELA.data[659] = 0X11e8U;
QEPAELA.data[660] = 0X024cU;
QEPAELA.data[661] = 0X11e8U;
QEPAELA.data[662] = 0X0254U;
QEPAELA.data[663] = 0X000fU;
 /* line 187: */
QEPAELA.data[664] = 0X0342U;
QEPAELA.data[665] = 0X1501U;
QEPAELA.data[666] = 0X0007U;
QEPAELA.data[667] = 0X18c0U;
QEPAELA.data[668] = 0X11e8U;
 /* line 188: */
QEPAELA.data[669] = 0X025cU;
QEPAELA.data[670] = 0X000fU;
QEPAELA.data[671] = 0X033aU;
QEPAELA.data[672] = 0X1549U;
QEPAELA.data[673] = 0X0007U;
 /* line 189: */
QEPAELA.data[674] = 0X11e8U;
QEPAELA.data[675] = 0X0b40U;
QEPAELA.data[676] = 0X010cU;
QEPAELA.data[677] = 0X0b40U;
QEPAELA.data[678] = 0X0264U;
 /* line 190: */
QEPAELA.data[679] = 0X000fU;
QEPAELA.data[680] = 0X0332U;
QEPAELA.data[681] = 0X1581U;
QEPAELA.data[682] = 0X0007U;
QEPAELA.data[683] = 0X11e8U;
 /* line 191: */
QEPAELA.data[684] = 0X0b40U;
QEPAELA.data[685] = 0X026cU;
QEPAELA.data[686] = 0X000fU;
QEPAELA.data[687] = 0X02baU;
QEPAELA.data[688] = 0X15b1U;
 /* line 192: */
QEPAELA.data[689] = 0X0007U;
QEPAELA.data[690] = 0X11e8U;
QEPAELA.data[691] = 0X0274U;
QEPAELA.data[692] = 0X000fU;
QEPAELA.data[693] = 0X026aU;
 /* line 193: */
QEPAELA.data[694] = 0X15e9U;
QEPAELA.data[695] = 0X0007U;
QEPAELA.data[696] = 0X11e8U;
QEPAELA.data[697] = 0X0668U;
QEPAELA.data[698] = 0X027cU;
 /* line 194: */
QEPAELA.data[699] = 0X000fU;
QEPAELA.data[700] = 0X0262U;
QEPAELA.data[701] = 0X1669U;
QEPAELA.data[702] = 0X0007U;
QEPAELA.data[703] = 0X002cU;
 /* line 195: */
QEPAELA.data[704] = 0X03faU;
QEPAELA.data[705] = 0X160eU;
QEPAELA.data[706] = 0X0007U;
QEPAELA.data[707] = 0X002cU;
QEPAELA.data[708] = 0X03faU;
 /* line 196: */
QEPAELA.data[709] = 0X162eU;
QEPAELA.data[710] = 0X0007U;
QEPAELA.data[711] = 0X11e8U;
QEPAELA.data[712] = 0X024cU;
QEPAELA.data[713] = 0X11e8U;
 /* line 197: */
QEPAELA.data[714] = 0X0284U;
QEPAELA.data[715] = 0X000fU;
QEPAELA.data[716] = 0X00c2U;
QEPAELA.data[717] = 0X16a1U;
QEPAELA.data[718] = 0X0007U;
 /* line 198: */
QEPAELA.data[719] = 0X028cU;
QEPAELA.data[720] = 0X1948U;
QEPAELA.data[721] = 0X0294U;
QEPAELA.data[722] = 0X000fU;
QEPAELA.data[723] = 0X00baU;
 /* line 199: */
QEPAELA.data[724] = 0X16c9U;
QEPAELA.data[725] = 0X0007U;
QEPAELA.data[726] = 0X029cU;
QEPAELA.data[727] = 0X000fU;
QEPAELA.data[728] = 0X00b2U;
 /* line 200: */
QEPAELA.data[729] = 0X1709U;
QEPAELA.data[730] = 0X0007U;
QEPAELA.data[731] = 0X0b40U;
QEPAELA.data[732] = 0X010cU;
QEPAELA.data[733] = 0X11e8U;
 /* line 201: */
QEPAELA.data[734] = 0X02a4U;
QEPAELA.data[735] = 0X000fU;
QEPAELA.data[736] = 0X00aaU;
QEPAELA.data[737] = 0X1741U;
QEPAELA.data[738] = 0X0007U;
 /* line 202: */
QEPAELA.data[739] = 0X028cU;
QEPAELA.data[740] = 0X1948U;
QEPAELA.data[741] = 0X02acU;
QEPAELA.data[742] = 0X000fU;
QEPAELA.data[743] = 0X00a2U;
 /* line 203: */
QEPAELA.data[744] = 0X17b1U;
QEPAELA.data[745] = 0X0007U;
QEPAELA.data[746] = 0X002cU;
QEPAELA.data[747] = 0X03faU;
QEPAELA.data[748] = 0X1766U;
 /* line 204: */
QEPAELA.data[749] = 0X0007U;
QEPAELA.data[750] = 0X002cU;
QEPAELA.data[751] = 0X03faU;
QEPAELA.data[752] = 0X1786U;
QEPAELA.data[753] = 0X0007U;
 /* line 205: */
QEPAELA.data[754] = 0X11e8U;
QEPAELA.data[755] = 0X02b4U;
QEPAELA.data[756] = 0X000fU;
QEPAELA.data[757] = 0X009aU;
QEPAELA.data[758] = 0X1811U;
 /* line 206: */
QEPAELA.data[759] = 0X0007U;
QEPAELA.data[760] = 0X002cU;
QEPAELA.data[761] = 0X03faU;
QEPAELA.data[762] = 0X17d6U;
QEPAELA.data[763] = 0X0007U;
 /* line 207: */
QEPAELA.data[764] = 0X0b40U;
QEPAELA.data[765] = 0X010cU;
QEPAELA.data[766] = 0X0b40U;
QEPAELA.data[767] = 0X02bcU;
QEPAELA.data[768] = 0X000fU;
 /* line 208: */
QEPAELA.data[769] = 0X0092U;
QEPAELA.data[770] = 0X1861U;
QEPAELA.data[771] = 0X0007U;
QEPAELA.data[772] = 0X002cU;
QEPAELA.data[773] = 0X03faU;
 /* line 209: */
QEPAELA.data[774] = 0X1836U;
QEPAELA.data[775] = 0X0007U;
QEPAELA.data[776] = 0X0b40U;
QEPAELA.data[777] = 0X02c4U;
QEPAELA.data[778] = 0X000fU;
 /* line 210: */
QEPAELA.data[779] = 0X008aU;
QEPAELA.data[780] = 0X11eeU;
QEPAELA.data[781] = 0X0007U;
QEPAELA.data[782] = 0X002cU;
QEPAELA.data[783] = 0X03faU;
 /* line 211: */
QEPAELA.data[784] = 0X1886U;
QEPAELA.data[785] = 0X0007U;
QEPAELA.data[786] = 0X02ccU;
QEPAELA.data[787] = 0X03faU;
QEPAELA.data[788] = 0X18a6U;
 /* line 212: */
QEPAELA.data[789] = 0X0007U;
QEPAELA.data[790] = 0X000fU;
QEPAELA.data[791] = 0X03faU;
QEPAELA.data[792] = 0X18c6U;
QEPAELA.data[793] = 0X002cU;
 /* line 213: */
QEPAELA.data[794] = 0X03faU;
QEPAELA.data[795] = 0X18deU;
QEPAELA.data[796] = 0X0007U;
QEPAELA.data[797] = 0X0024U;
QEPAELA.data[798] = 0X0502U;
 /* line 214: */
QEPAELA.data[799] = 0X18feU;
QEPAELA.data[800] = 0X0007U;
QEPAELA.data[801] = 0X0668U;
QEPAELA.data[802] = 0X004cU;
QEPAELA.data[803] = 0X0b40U;
 /* line 215: */
QEPAELA.data[804] = 0X010cU;
QEPAELA.data[805] = 0X0b40U;
QEPAELA.data[806] = 0X02d4U;
QEPAELA.data[807] = 0X000fU;
QEPAELA.data[808] = 0X0033U;
 /* line 216: */
QEPAELA.data[809] = 0X1971U;
QEPAELA.data[810] = 0X11e8U;
QEPAELA.data[811] = 0X024cU;
QEPAELA.data[812] = 0X1949U;
QEPAELA.data[813] = 0X015aU;
 /* line 217: */
QEPAELA.data[814] = 0X194eU;
QEPAELA.data[815] = 0X0007U;
QEPAELA.data[816] = 0X000fU;
QEPAELA.data[817] = 0X03faU;
QEPAELA.data[818] = 0X1a09U;
 /* line 218: */
QEPAELA.data[819] = 0X002cU;
QEPAELA.data[820] = 0X03faU;
QEPAELA.data[821] = 0X19aeU;
QEPAELA.data[822] = 0X0007U;
QEPAELA.data[823] = 0X002cU;
 /* line 219: */
QEPAELA.data[824] = 0X03faU;
QEPAELA.data[825] = 0X19ceU;
QEPAELA.data[826] = 0X0007U;
QEPAELA.data[827] = 0X02dcU;
QEPAELA.data[828] = 0X03faU;
 /* line 220: */
QEPAELA.data[829] = 0X19eeU;
QEPAELA.data[830] = 0X0007U;
QEPAELA.data[831] = 0X1991U;
QEPAELA.data[832] = 0X000aU;
QEPAELA.data[833] = 0X1996U;
 /* line 221: */
QEPAELA.data[834] = 0X0007U;
QEPAELA.data[835] = 0X000fU;
QEPAELA.data[836] = 0X0162U;
QEPAELA.data[837] = 0X1aa1U;
QEPAELA.data[838] = 0X02e4U;
 /* line 222: */
QEPAELA.data[839] = 0X02ecU;
QEPAELA.data[840] = 0X1ac0U;
QEPAELA.data[841] = 0X002cU;
QEPAELA.data[842] = 0X03faU;
QEPAELA.data[843] = 0X1a5eU;
 /* line 223: */
QEPAELA.data[844] = 0X0007U;
QEPAELA.data[845] = 0X02f4U;
QEPAELA.data[846] = 0X03faU;
QEPAELA.data[847] = 0X1a7eU;
QEPAELA.data[848] = 0X0007U;
 /* line 224: */
QEPAELA.data[849] = 0X02fcU;
QEPAELA.data[850] = 0X1a29U;
QEPAELA.data[851] = 0X000aU;
QEPAELA.data[852] = 0X1a2eU;
QEPAELA.data[853] = 0X0007U;
 /* line 225: */
QEPAELA.data[854] = 0X000fU;
QEPAELA.data[855] = 0X0162U;
QEPAELA.data[856] = 0X1ac6U;
QEPAELA.data[857] = 0X0007U;
QEPAELA.data[858] = 0X002cU;
 /* line 226: */
QEPAELA.data[859] = 0X03faU;
QEPAELA.data[860] = 0X1ae6U;
QEPAELA.data[861] = 0X0007U;
QEPAELA.data[862] = 0X1b28U;
QEPAELA.data[863] = 0X2030U;
 /* line 227: */
QEPAELA.data[864] = 0X016aU;
QEPAELA.data[865] = 0X1b0eU;
QEPAELA.data[866] = 0X0007U;
QEPAELA.data[867] = 0X000fU;
QEPAELA.data[868] = 0X0502U;
 /* line 228: */
QEPAELA.data[869] = 0X1b2eU;
QEPAELA.data[870] = 0X0007U;
QEPAELA.data[871] = 0X002cU;
QEPAELA.data[872] = 0X03faU;
QEPAELA.data[873] = 0X1b4eU;
 /* line 229: */
QEPAELA.data[874] = 0X0007U;
QEPAELA.data[875] = 0X0304U;
QEPAELA.data[876] = 0X03faU;
QEPAELA.data[877] = 0X1b6eU;
QEPAELA.data[878] = 0X0007U;
 /* line 230: */
QEPAELA.data[879] = 0X030cU;
QEPAELA.data[880] = 0X03faU;
QEPAELA.data[881] = 0X1b8eU;
QEPAELA.data[882] = 0X0007U;
QEPAELA.data[883] = 0X1bc8U;
 /* line 231: */
QEPAELA.data[884] = 0X0314U;
QEPAELA.data[885] = 0X0668U;
QEPAELA.data[886] = 0X031cU;
QEPAELA.data[887] = 0X1e39U;
QEPAELA.data[888] = 0X03faU;
 /* line 232: */
QEPAELA.data[889] = 0X000fU;
QEPAELA.data[890] = 0X002cU;
QEPAELA.data[891] = 0X03faU;
QEPAELA.data[892] = 0X1be6U;
QEPAELA.data[893] = 0X0007U;
 /* line 233: */
QEPAELA.data[894] = 0X1c10U;
QEPAELA.data[895] = 0X0324U;
QEPAELA.data[896] = 0X1bc9U;
QEPAELA.data[897] = 0X0162U;
QEPAELA.data[898] = 0X1c49U;
 /* line 234: */
QEPAELA.data[899] = 0X02e4U;
QEPAELA.data[900] = 0X000cU;
QEPAELA.data[901] = 0X1ac0U;
QEPAELA.data[902] = 0X02fcU;
QEPAELA.data[903] = 0X000fU;
 /* line 235: */
QEPAELA.data[904] = 0X04c2U;
QEPAELA.data[905] = 0X1cb9U;
QEPAELA.data[906] = 0X0007U;
QEPAELA.data[907] = 0X0024U;
QEPAELA.data[908] = 0X0502U;
 /* line 236: */
QEPAELA.data[909] = 0X1c6eU;
QEPAELA.data[910] = 0X0007U;
QEPAELA.data[911] = 0X002cU;
QEPAELA.data[912] = 0X03faU;
QEPAELA.data[913] = 0X1c8eU;
 /* line 237: */
QEPAELA.data[914] = 0X0007U;
QEPAELA.data[915] = 0X0668U;
QEPAELA.data[916] = 0X032cU;
QEPAELA.data[917] = 0X000fU;
QEPAELA.data[918] = 0X046aU;
 /* line 238: */
QEPAELA.data[919] = 0X1d39U;
QEPAELA.data[920] = 0X0007U;
QEPAELA.data[921] = 0X0024U;
QEPAELA.data[922] = 0X0502U;
QEPAELA.data[923] = 0X1cdeU;
 /* line 239: */
QEPAELA.data[924] = 0X0007U;
QEPAELA.data[925] = 0X002cU;
QEPAELA.data[926] = 0X03faU;
QEPAELA.data[927] = 0X1cfeU;
QEPAELA.data[928] = 0X0007U;
 /* line 240: */
QEPAELA.data[929] = 0X0668U;
QEPAELA.data[930] = 0X004cU;
QEPAELA.data[931] = 0X11e8U;
QEPAELA.data[932] = 0X0334U;
QEPAELA.data[933] = 0X000fU;
 /* line 241: */
QEPAELA.data[934] = 0X03d2U;
QEPAELA.data[935] = 0X1db9U;
QEPAELA.data[936] = 0X0007U;
QEPAELA.data[937] = 0X0024U;
QEPAELA.data[938] = 0X0502U;
 /* line 242: */
QEPAELA.data[939] = 0X1d5eU;
QEPAELA.data[940] = 0X0007U;
QEPAELA.data[941] = 0X002cU;
QEPAELA.data[942] = 0X03faU;
QEPAELA.data[943] = 0X1d7eU;
 /* line 243: */
QEPAELA.data[944] = 0X0007U;
QEPAELA.data[945] = 0X0668U;
QEPAELA.data[946] = 0X004cU;
QEPAELA.data[947] = 0X0b40U;
QEPAELA.data[948] = 0X033cU;
 /* line 244: */
QEPAELA.data[949] = 0X000fU;
QEPAELA.data[950] = 0X018aU;
QEPAELA.data[951] = 0X1c16U;
QEPAELA.data[952] = 0X0007U;
QEPAELA.data[953] = 0X0024U;
 /* line 245: */
QEPAELA.data[954] = 0X0502U;
QEPAELA.data[955] = 0X1ddeU;
QEPAELA.data[956] = 0X0007U;
QEPAELA.data[957] = 0X002cU;
QEPAELA.data[958] = 0X03faU;
 /* line 246: */
QEPAELA.data[959] = 0X1dfeU;
QEPAELA.data[960] = 0X0007U;
QEPAELA.data[961] = 0X0668U;
QEPAELA.data[962] = 0X004cU;
QEPAELA.data[963] = 0X0940U;
 /* line 247: */
QEPAELA.data[964] = 0X0344U;
QEPAELA.data[965] = 0X000fU;
QEPAELA.data[966] = 0X03baU;
QEPAELA.data[967] = 0X1e89U;
QEPAELA.data[968] = 0X0007U;
 /* line 248: */
QEPAELA.data[969] = 0X1ec8U;
QEPAELA.data[970] = 0X1ec8U;
QEPAELA.data[971] = 0X03faU;
QEPAELA.data[972] = 0X1e66U;
QEPAELA.data[973] = 0X0007U;
 /* line 249: */
QEPAELA.data[974] = 0X034cU;
QEPAELA.data[975] = 0X000fU;
QEPAELA.data[976] = 0X03b2U;
QEPAELA.data[977] = 0X1e3eU;
QEPAELA.data[978] = 0X0007U;
 /* line 250: */
QEPAELA.data[979] = 0X1f30U;
QEPAELA.data[980] = 0X0354U;
QEPAELA.data[981] = 0X1f30U;
QEPAELA.data[982] = 0X035cU;
QEPAELA.data[983] = 0X000fU;
 /* line 251: */
QEPAELA.data[984] = 0X03faU;
QEPAELA.data[985] = 0X1f11U;
QEPAELA.data[986] = 0X002cU;
QEPAELA.data[987] = 0X03faU;
QEPAELA.data[988] = 0X1ee6U;
 /* line 252: */
QEPAELA.data[989] = 0X0007U;
QEPAELA.data[990] = 0X0668U;
QEPAELA.data[991] = 0X0364U;
QEPAELA.data[992] = 0X1ec9U;
QEPAELA.data[993] = 0X000aU;
 /* line 253: */
QEPAELA.data[994] = 0X1eceU;
QEPAELA.data[995] = 0X0007U;
QEPAELA.data[996] = 0X000fU;
QEPAELA.data[997] = 0X003bU;
QEPAELA.data[998] = 0X1f36U;
 /* line 254: */
QEPAELA.data[999] = 0X036cU;
QEPAELA.data[1000] = 0X1f51U;
QEPAELA.data[1001] = 0X0023U;
QEPAELA.data[1002] = 0X1f91U;
QEPAELA.data[1003] = 0X0f30U;
 /* line 255: */
QEPAELA.data[1004] = 0X1fb0U;
QEPAELA.data[1005] = 0X000aU;
QEPAELA.data[1006] = 0X1f76U;
QEPAELA.data[1007] = 0X0007U;
QEPAELA.data[1008] = 0X1f51U;
 /* line 256: */
QEPAELA.data[1009] = 0X015aU;
QEPAELA.data[1010] = 0X1f56U;
QEPAELA.data[1011] = 0X0007U;
QEPAELA.data[1012] = 0X000fU;
QEPAELA.data[1013] = 0X03faU;
 /* line 257: */
QEPAELA.data[1014] = 0X000fU;
QEPAELA.data[1015] = 0X002cU;
QEPAELA.data[1016] = 0X03faU;
QEPAELA.data[1017] = 0X1fceU;
QEPAELA.data[1018] = 0X0007U;
 /* line 258: */
QEPAELA.data[1019] = 0X0024U;
QEPAELA.data[1020] = 0X0502U;
QEPAELA.data[1021] = 0X1feeU;
QEPAELA.data[1022] = 0X0007U;
QEPAELA.data[1023] = 0X2018U;
 /* line 259: */
QEPAELA.data[1024] = 0X0374U;
QEPAELA.data[1025] = 0X1fb1U;
QEPAELA.data[1026] = 0X0013U;
QEPAELA.data[1027] = 0X000fU;
QEPAELA.data[1028] = 0X0669U;
 /* line 260: */
QEPAELA.data[1029] = 0X0043U;
QEPAELA.data[1030] = 0X000fU;
QEPAELA.data[1031] = 0X2058U;
QEPAELA.data[1032] = 0X037cU;
QEPAELA.data[1033] = 0X3b29U;
 /* line 261: */
QEPAELA.data[1034] = 0X004bU;
QEPAELA.data[1035] = 0X2081U;
QEPAELA.data[1036] = 0X2428U;
QEPAELA.data[1037] = 0X0384U;
QEPAELA.data[1038] = 0X000fU;
 /* line 262: */
QEPAELA.data[1039] = 0X0053U;
QEPAELA.data[1040] = 0X20a9U;
QEPAELA.data[1041] = 0X0b40U;
QEPAELA.data[1042] = 0X038cU;
QEPAELA.data[1043] = 0X000fU;
 /* line 263: */
QEPAELA.data[1044] = 0X049aU;
QEPAELA.data[1045] = 0X20d1U;
QEPAELA.data[1046] = 0X0007U;
QEPAELA.data[1047] = 0X0394U;
QEPAELA.data[1048] = 0X3a99U;
 /* line 264: */
QEPAELA.data[1049] = 0X0492U;
QEPAELA.data[1050] = 0X20f9U;
QEPAELA.data[1051] = 0X0007U;
QEPAELA.data[1052] = 0X039cU;
QEPAELA.data[1053] = 0X3a99U;
 /* line 265: */
QEPAELA.data[1054] = 0X03a2U;
QEPAELA.data[1055] = 0X2121U;
QEPAELA.data[1056] = 0X0007U;
QEPAELA.data[1057] = 0X03a4U;
QEPAELA.data[1058] = 0X000fU;
 /* line 266: */
QEPAELA.data[1059] = 0X032aU;
QEPAELA.data[1060] = 0X21b1U;
QEPAELA.data[1061] = 0X0007U;
QEPAELA.data[1062] = 0X002cU;
QEPAELA.data[1063] = 0X03faU;
 /* line 267: */
QEPAELA.data[1064] = 0X2146U;
QEPAELA.data[1065] = 0X0007U;
QEPAELA.data[1066] = 0X002cU;
QEPAELA.data[1067] = 0X03faU;
QEPAELA.data[1068] = 0X2166U;
 /* line 268: */
QEPAELA.data[1069] = 0X0007U;
QEPAELA.data[1070] = 0X0b40U;
QEPAELA.data[1071] = 0X010cU;
QEPAELA.data[1072] = 0X11e8U;
QEPAELA.data[1073] = 0X024cU;
 /* line 269: */
QEPAELA.data[1074] = 0X0b40U;
QEPAELA.data[1075] = 0X03acU;
QEPAELA.data[1076] = 0X000fU;
QEPAELA.data[1077] = 0X02caU;
QEPAELA.data[1078] = 0X2221U;
 /* line 270: */
QEPAELA.data[1079] = 0X0007U;
QEPAELA.data[1080] = 0X0024U;
QEPAELA.data[1081] = 0X0502U;
QEPAELA.data[1082] = 0X21d6U;
QEPAELA.data[1083] = 0X0007U;
 /* line 271: */
QEPAELA.data[1084] = 0X03b4U;
QEPAELA.data[1085] = 0X03faU;
QEPAELA.data[1086] = 0X21f6U;
QEPAELA.data[1087] = 0X0007U;
QEPAELA.data[1088] = 0X3208U;
 /* line 272: */
QEPAELA.data[1089] = 0X03bcU;
QEPAELA.data[1090] = 0X000fU;
QEPAELA.data[1091] = 0X02c2U;
QEPAELA.data[1092] = 0X2291U;
QEPAELA.data[1093] = 0X0007U;
 /* line 273: */
QEPAELA.data[1094] = 0X0024U;
QEPAELA.data[1095] = 0X0502U;
QEPAELA.data[1096] = 0X2246U;
QEPAELA.data[1097] = 0X0007U;
QEPAELA.data[1098] = 0X03b4U;
 /* line 274: */
QEPAELA.data[1099] = 0X03faU;
QEPAELA.data[1100] = 0X2266U;
QEPAELA.data[1101] = 0X0007U;
QEPAELA.data[1102] = 0X3208U;
QEPAELA.data[1103] = 0X03c4U;
 /* line 275: */
QEPAELA.data[1104] = 0X000fU;
QEPAELA.data[1105] = 0X025aU;
QEPAELA.data[1106] = 0X22d1U;
QEPAELA.data[1107] = 0X0007U;
QEPAELA.data[1108] = 0X03ccU;
 /* line 276: */
QEPAELA.data[1109] = 0X03faU;
QEPAELA.data[1110] = 0X22b6U;
QEPAELA.data[1111] = 0X0007U;
QEPAELA.data[1112] = 0X000fU;
QEPAELA.data[1113] = 0X01faU;
 /* line 277: */
QEPAELA.data[1114] = 0X2329U;
QEPAELA.data[1115] = 0X0007U;
QEPAELA.data[1116] = 0X002cU;
QEPAELA.data[1117] = 0X03faU;
QEPAELA.data[1118] = 0X22f6U;
 /* line 278: */
QEPAELA.data[1119] = 0X0007U;
QEPAELA.data[1120] = 0X11e8U;
QEPAELA.data[1121] = 0X024cU;
QEPAELA.data[1122] = 0X03d4U;
QEPAELA.data[1123] = 0X000fU;
 /* line 279: */
QEPAELA.data[1124] = 0X01b2U;
QEPAELA.data[1125] = 0X23c9U;
QEPAELA.data[1126] = 0X0007U;
QEPAELA.data[1127] = 0X002cU;
QEPAELA.data[1128] = 0X03faU;
 /* line 280: */
QEPAELA.data[1129] = 0X234eU;
QEPAELA.data[1130] = 0X0007U;
QEPAELA.data[1131] = 0X002cU;
QEPAELA.data[1132] = 0X03faU;
QEPAELA.data[1133] = 0X236eU;
 /* line 281: */
QEPAELA.data[1134] = 0X0007U;
QEPAELA.data[1135] = 0X11e8U;
QEPAELA.data[1136] = 0X024cU;
QEPAELA.data[1137] = 0X0b40U;
QEPAELA.data[1138] = 0X010cU;
 /* line 282: */
QEPAELA.data[1139] = 0X11e8U;
QEPAELA.data[1140] = 0X024cU;
QEPAELA.data[1141] = 0X0b40U;
QEPAELA.data[1142] = 0X03dcU;
QEPAELA.data[1143] = 0X000fU;
 /* line 283: */
QEPAELA.data[1144] = 0X01aaU;
QEPAELA.data[1145] = 0X205eU;
QEPAELA.data[1146] = 0X0007U;
QEPAELA.data[1147] = 0X002cU;
QEPAELA.data[1148] = 0X03faU;
 /* line 284: */
QEPAELA.data[1149] = 0X23eeU;
QEPAELA.data[1150] = 0X0007U;
QEPAELA.data[1151] = 0X0b40U;
QEPAELA.data[1152] = 0X010cU;
QEPAELA.data[1153] = 0X11e8U;
 /* line 285: */
QEPAELA.data[1154] = 0X03e4U;
QEPAELA.data[1155] = 0X000fU;
QEPAELA.data[1156] = 0X004bU;
QEPAELA.data[1157] = 0X242eU;
QEPAELA.data[1158] = 0X2450U;
 /* line 286: */
QEPAELA.data[1159] = 0X2cd0U;
QEPAELA.data[1160] = 0X3a81U;
QEPAELA.data[1161] = 0X005bU;
QEPAELA.data[1162] = 0X2469U;
QEPAELA.data[1163] = 0X24b9U;
 /* line 287: */
QEPAELA.data[1164] = 0X014aU;
QEPAELA.data[1165] = 0X2456U;
QEPAELA.data[1166] = 0X0007U;
QEPAELA.data[1167] = 0X18c0U;
QEPAELA.data[1168] = 0X2cb0U;
 /* line 288: */
QEPAELA.data[1169] = 0X03ecU;
QEPAELA.data[1170] = 0X020aU;
QEPAELA.data[1171] = 0X249eU;
QEPAELA.data[1172] = 0X0007U;
QEPAELA.data[1173] = 0X000fU;
 /* line 289: */
QEPAELA.data[1174] = 0X0013U;
QEPAELA.data[1175] = 0X24e1U;
QEPAELA.data[1176] = 0X0668U;
QEPAELA.data[1177] = 0X03f4U;
QEPAELA.data[1178] = 0X000fU;
 /* line 290: */
QEPAELA.data[1179] = 0X04baU;
QEPAELA.data[1180] = 0X2509U;
QEPAELA.data[1181] = 0X0007U;
QEPAELA.data[1182] = 0X03fcU;
QEPAELA.data[1183] = 0X000fU;
 /* line 291: */
QEPAELA.data[1184] = 0X04b2U;
QEPAELA.data[1185] = 0X2531U;
QEPAELA.data[1186] = 0X0007U;
QEPAELA.data[1187] = 0X0404U;
QEPAELA.data[1188] = 0X000fU;
 /* line 292: */
QEPAELA.data[1189] = 0X048aU;
QEPAELA.data[1190] = 0X2571U;
QEPAELA.data[1191] = 0X0007U;
QEPAELA.data[1192] = 0X040cU;
QEPAELA.data[1193] = 0X03faU;
 /* line 293: */
QEPAELA.data[1194] = 0X2556U;
QEPAELA.data[1195] = 0X0007U;
QEPAELA.data[1196] = 0X000fU;
QEPAELA.data[1197] = 0X0472U;
QEPAELA.data[1198] = 0X2599U;
 /* line 294: */
QEPAELA.data[1199] = 0X0007U;
QEPAELA.data[1200] = 0X0414U;
QEPAELA.data[1201] = 0X000fU;
QEPAELA.data[1202] = 0X0452U;
QEPAELA.data[1203] = 0X2601U;
 /* line 295: */
QEPAELA.data[1204] = 0X0007U;
QEPAELA.data[1205] = 0X002cU;
QEPAELA.data[1206] = 0X03faU;
QEPAELA.data[1207] = 0X25beU;
QEPAELA.data[1208] = 0X0007U;
 /* line 296: */
QEPAELA.data[1209] = 0X03faU;
QEPAELA.data[1210] = 0X25d6U;
QEPAELA.data[1211] = 0X0007U;
QEPAELA.data[1212] = 0X07e8U;
QEPAELA.data[1213] = 0X041cU;
 /* line 297: */
QEPAELA.data[1214] = 0X000fU;
QEPAELA.data[1215] = 0X044aU;
QEPAELA.data[1216] = 0X2661U;
QEPAELA.data[1217] = 0X0007U;
QEPAELA.data[1218] = 0X002cU;
 /* line 298: */
QEPAELA.data[1219] = 0X03faU;
QEPAELA.data[1220] = 0X2626U;
QEPAELA.data[1221] = 0X0007U;
QEPAELA.data[1222] = 0X0424U;
QEPAELA.data[1223] = 0X0502U;
 /* line 299: */
QEPAELA.data[1224] = 0X2646U;
QEPAELA.data[1225] = 0X0007U;
QEPAELA.data[1226] = 0X000fU;
QEPAELA.data[1227] = 0X0442U;
QEPAELA.data[1228] = 0X2691U;
 /* line 300: */
QEPAELA.data[1229] = 0X0007U;
QEPAELA.data[1230] = 0X0b40U;
QEPAELA.data[1231] = 0X042cU;
QEPAELA.data[1232] = 0X000fU;
QEPAELA.data[1233] = 0X02a2U;
 /* line 301: */
QEPAELA.data[1234] = 0X26b9U;
QEPAELA.data[1235] = 0X0007U;
QEPAELA.data[1236] = 0X0434U;
QEPAELA.data[1237] = 0X000fU;
QEPAELA.data[1238] = 0X029aU;
 /* line 302: */
QEPAELA.data[1239] = 0X2709U;
QEPAELA.data[1240] = 0X0007U;
QEPAELA.data[1241] = 0X043cU;
QEPAELA.data[1242] = 0X2cb0U;
QEPAELA.data[1243] = 0X015aU;
 /* line 303: */
QEPAELA.data[1244] = 0X26e6U;
QEPAELA.data[1245] = 0X0007U;
QEPAELA.data[1246] = 0X0444U;
QEPAELA.data[1247] = 0X000fU;
QEPAELA.data[1248] = 0X0292U;
 /* line 304: */
QEPAELA.data[1249] = 0X2759U;
QEPAELA.data[1250] = 0X0007U;
QEPAELA.data[1251] = 0X044cU;
QEPAELA.data[1252] = 0X2d38U;
QEPAELA.data[1253] = 0X02d2U;
 /* line 305: */
QEPAELA.data[1254] = 0X2736U;
QEPAELA.data[1255] = 0X0007U;
QEPAELA.data[1256] = 0X0454U;
QEPAELA.data[1257] = 0X000fU;
QEPAELA.data[1258] = 0X028aU;
 /* line 306: */
QEPAELA.data[1259] = 0X2791U;
QEPAELA.data[1260] = 0X0007U;
QEPAELA.data[1261] = 0X045cU;
QEPAELA.data[1262] = 0X3350U;
QEPAELA.data[1263] = 0X0464U;
 /* line 307: */
QEPAELA.data[1264] = 0X000fU;
QEPAELA.data[1265] = 0X0152U;
QEPAELA.data[1266] = 0X27d1U;
QEPAELA.data[1267] = 0X0007U;
QEPAELA.data[1268] = 0X046cU;
 /* line 308: */
QEPAELA.data[1269] = 0X03faU;
QEPAELA.data[1270] = 0X27b6U;
QEPAELA.data[1271] = 0X0007U;
QEPAELA.data[1272] = 0X000fU;
QEPAELA.data[1273] = 0X0142U;
 /* line 309: */
QEPAELA.data[1274] = 0X2831U;
QEPAELA.data[1275] = 0X0007U;
QEPAELA.data[1276] = 0X002cU;
QEPAELA.data[1277] = 0X03faU;
QEPAELA.data[1278] = 0X27f6U;
 /* line 310: */
QEPAELA.data[1279] = 0X0007U;
QEPAELA.data[1280] = 0X0474U;
QEPAELA.data[1281] = 0X03faU;
QEPAELA.data[1282] = 0X2816U;
QEPAELA.data[1283] = 0X0007U;
 /* line 311: */
QEPAELA.data[1284] = 0X000fU;
QEPAELA.data[1285] = 0X013aU;
QEPAELA.data[1286] = 0X28c1U;
QEPAELA.data[1287] = 0X0007U;
QEPAELA.data[1288] = 0X0b40U;
 /* line 312: */
QEPAELA.data[1289] = 0X010cU;
QEPAELA.data[1290] = 0X0382U;
QEPAELA.data[1291] = 0X285eU;
QEPAELA.data[1292] = 0X0007U;
QEPAELA.data[1293] = 0X39a0U;
 /* line 313: */
QEPAELA.data[1294] = 0X01eaU;
QEPAELA.data[1295] = 0X287eU;
QEPAELA.data[1296] = 0X0007U;
QEPAELA.data[1297] = 0X39a0U;
QEPAELA.data[1298] = 0X047cU;
 /* line 314: */
QEPAELA.data[1299] = 0X01f2U;
QEPAELA.data[1300] = 0X28a6U;
QEPAELA.data[1301] = 0X0007U;
QEPAELA.data[1302] = 0X000fU;
QEPAELA.data[1303] = 0X0132U;
 /* line 315: */
QEPAELA.data[1304] = 0X2901U;
QEPAELA.data[1305] = 0X0007U;
QEPAELA.data[1306] = 0X0484U;
QEPAELA.data[1307] = 0X03faU;
QEPAELA.data[1308] = 0X28e6U;
 /* line 316: */
QEPAELA.data[1309] = 0X0007U;
QEPAELA.data[1310] = 0X000fU;
QEPAELA.data[1311] = 0X012aU;
QEPAELA.data[1312] = 0X2931U;
QEPAELA.data[1313] = 0X0007U;
 /* line 317: */
QEPAELA.data[1314] = 0X0f30U;
QEPAELA.data[1315] = 0X048cU;
QEPAELA.data[1316] = 0X000fU;
QEPAELA.data[1317] = 0X0122U;
QEPAELA.data[1318] = 0X2981U;
 /* line 318: */
QEPAELA.data[1319] = 0X0007U;
QEPAELA.data[1320] = 0X0494U;
QEPAELA.data[1321] = 0X39b8U;
QEPAELA.data[1322] = 0X049cU;
QEPAELA.data[1323] = 0X015aU;
 /* line 319: */
QEPAELA.data[1324] = 0X2966U;
QEPAELA.data[1325] = 0X0007U;
QEPAELA.data[1326] = 0X000fU;
QEPAELA.data[1327] = 0X011aU;
QEPAELA.data[1328] = 0X29b1U;
 /* line 320: */
QEPAELA.data[1329] = 0X0007U;
QEPAELA.data[1330] = 0X0b40U;
QEPAELA.data[1331] = 0X04a4U;
QEPAELA.data[1332] = 0X000fU;
QEPAELA.data[1333] = 0X0112U;
 /* line 321: */
QEPAELA.data[1334] = 0X2a11U;
QEPAELA.data[1335] = 0X0007U;
QEPAELA.data[1336] = 0X002cU;
QEPAELA.data[1337] = 0X03faU;
QEPAELA.data[1338] = 0X29d6U;
 /* line 322: */
QEPAELA.data[1339] = 0X0007U;
QEPAELA.data[1340] = 0X04acU;
QEPAELA.data[1341] = 0X03faU;
QEPAELA.data[1342] = 0X29f6U;
QEPAELA.data[1343] = 0X0007U;
 /* line 323: */
QEPAELA.data[1344] = 0X000fU;
QEPAELA.data[1345] = 0X010aU;
QEPAELA.data[1346] = 0X2a71U;
QEPAELA.data[1347] = 0X0007U;
QEPAELA.data[1348] = 0X002cU;
 /* line 324: */
QEPAELA.data[1349] = 0X03faU;
QEPAELA.data[1350] = 0X2a36U;
QEPAELA.data[1351] = 0X0007U;
QEPAELA.data[1352] = 0X04b4U;
QEPAELA.data[1353] = 0X03faU;
 /* line 325: */
QEPAELA.data[1354] = 0X2a56U;
QEPAELA.data[1355] = 0X0007U;
QEPAELA.data[1356] = 0X000fU;
QEPAELA.data[1357] = 0X0102U;
QEPAELA.data[1358] = 0X2aa1U;
 /* line 326: */
QEPAELA.data[1359] = 0X0007U;
QEPAELA.data[1360] = 0X3190U;
QEPAELA.data[1361] = 0X04bcU;
QEPAELA.data[1362] = 0X000fU;
QEPAELA.data[1363] = 0X00faU;
 /* line 327: */
QEPAELA.data[1364] = 0X2ad1U;
QEPAELA.data[1365] = 0X0007U;
QEPAELA.data[1366] = 0X3190U;
QEPAELA.data[1367] = 0X04c4U;
QEPAELA.data[1368] = 0X000fU;
 /* line 328: */
QEPAELA.data[1369] = 0X00f2U;
QEPAELA.data[1370] = 0X2b01U;
QEPAELA.data[1371] = 0X0007U;
QEPAELA.data[1372] = 0X0b40U;
QEPAELA.data[1373] = 0X04ccU;
 /* line 329: */
QEPAELA.data[1374] = 0X000fU;
QEPAELA.data[1375] = 0X00eaU;
QEPAELA.data[1376] = 0X2b41U;
QEPAELA.data[1377] = 0X0007U;
QEPAELA.data[1378] = 0X0b40U;
 /* line 330: */
QEPAELA.data[1379] = 0X010cU;
QEPAELA.data[1380] = 0X0b40U;
QEPAELA.data[1381] = 0X04d4U;
QEPAELA.data[1382] = 0X000fU;
QEPAELA.data[1383] = 0X00e2U;
 /* line 331: */
QEPAELA.data[1384] = 0X2ba1U;
QEPAELA.data[1385] = 0X0007U;
QEPAELA.data[1386] = 0X002cU;
QEPAELA.data[1387] = 0X03faU;
QEPAELA.data[1388] = 0X2b66U;
 /* line 332: */
QEPAELA.data[1389] = 0X0007U;
QEPAELA.data[1390] = 0X04dcU;
QEPAELA.data[1391] = 0X03faU;
QEPAELA.data[1392] = 0X2b86U;
QEPAELA.data[1393] = 0X0007U;
 /* line 333: */
QEPAELA.data[1394] = 0X000fU;
QEPAELA.data[1395] = 0X00daU;
QEPAELA.data[1396] = 0X2bf1U;
QEPAELA.data[1397] = 0X0007U;
QEPAELA.data[1398] = 0X002cU;
 /* line 334: */
QEPAELA.data[1399] = 0X03faU;
QEPAELA.data[1400] = 0X2bc6U;
QEPAELA.data[1401] = 0X0007U;
QEPAELA.data[1402] = 0X0b40U;
QEPAELA.data[1403] = 0X04e4U;
 /* line 335: */
QEPAELA.data[1404] = 0X000fU;
QEPAELA.data[1405] = 0X00d2U;
QEPAELA.data[1406] = 0X2c51U;
QEPAELA.data[1407] = 0X0007U;
QEPAELA.data[1408] = 0X002cU;
 /* line 336: */
QEPAELA.data[1409] = 0X03faU;
QEPAELA.data[1410] = 0X2c16U;
QEPAELA.data[1411] = 0X0007U;
QEPAELA.data[1412] = 0X04ecU;
QEPAELA.data[1413] = 0X03faU;
 /* line 337: */
QEPAELA.data[1414] = 0X2c36U;
QEPAELA.data[1415] = 0X0007U;
QEPAELA.data[1416] = 0X000fU;
QEPAELA.data[1417] = 0X00caU;
QEPAELA.data[1418] = 0X24beU;
 /* line 338: */
QEPAELA.data[1419] = 0X0007U;
QEPAELA.data[1420] = 0X002cU;
QEPAELA.data[1421] = 0X03faU;
QEPAELA.data[1422] = 0X2c76U;
QEPAELA.data[1423] = 0X0007U;
 /* line 339: */
QEPAELA.data[1424] = 0X04f4U;
QEPAELA.data[1425] = 0X03faU;
QEPAELA.data[1426] = 0X2c96U;
QEPAELA.data[1427] = 0X0007U;
QEPAELA.data[1428] = 0X000fU;
 /* line 340: */
QEPAELA.data[1429] = 0X0063U;
QEPAELA.data[1430] = 0X2cb6U;
QEPAELA.data[1431] = 0X2cd0U;
QEPAELA.data[1432] = 0X2429U;
QEPAELA.data[1433] = 0X004aU;
 /* line 341: */
QEPAELA.data[1434] = 0X000fU;
QEPAELA.data[1435] = 0X0007U;
QEPAELA.data[1436] = 0X002cU;
QEPAELA.data[1437] = 0X03faU;
QEPAELA.data[1438] = 0X2cf6U;
 /* line 342: */
QEPAELA.data[1439] = 0X0007U;
QEPAELA.data[1440] = 0X0b40U;
QEPAELA.data[1441] = 0X010cU;
QEPAELA.data[1442] = 0X0b40U;
QEPAELA.data[1443] = 0X013cU;
 /* line 343: */
QEPAELA.data[1444] = 0X04fcU;
QEPAELA.data[1445] = 0X2cd1U;
QEPAELA.data[1446] = 0X006bU;
QEPAELA.data[1447] = 0X2d3eU;
QEPAELA.data[1448] = 0X2d58U;
 /* line 344: */
QEPAELA.data[1449] = 0X3339U;
QEPAELA.data[1450] = 0X004bU;
QEPAELA.data[1451] = 0X2d71U;
QEPAELA.data[1452] = 0X2451U;
QEPAELA.data[1453] = 0X0073U;
 /* line 345: */
QEPAELA.data[1454] = 0X2d99U;
QEPAELA.data[1455] = 0X1c10U;
QEPAELA.data[1456] = 0X0504U;
QEPAELA.data[1457] = 0X000fU;
QEPAELA.data[1458] = 0X004aU;
 /* line 346: */
QEPAELA.data[1459] = 0X2dc1U;
QEPAELA.data[1460] = 0X0b70U;
QEPAELA.data[1461] = 0X04fcU;
QEPAELA.data[1462] = 0X000fU;
QEPAELA.data[1463] = 0X01c2U;
 /* line 347: */
QEPAELA.data[1464] = 0X2e19U;
QEPAELA.data[1465] = 0X0007U;
QEPAELA.data[1466] = 0X0b40U;
QEPAELA.data[1467] = 0X010cU;
QEPAELA.data[1468] = 0X2fc8U;
 /* line 348: */
QEPAELA.data[1469] = 0X015aU;
QEPAELA.data[1470] = 0X2df6U;
QEPAELA.data[1471] = 0X0007U;
QEPAELA.data[1472] = 0X050cU;
QEPAELA.data[1473] = 0X000fU;
 /* line 349: */
QEPAELA.data[1474] = 0X01baU;
QEPAELA.data[1475] = 0X2e71U;
QEPAELA.data[1476] = 0X0007U;
QEPAELA.data[1477] = 0X0b40U;
QEPAELA.data[1478] = 0X010cU;
 /* line 350: */
QEPAELA.data[1479] = 0X2fc8U;
QEPAELA.data[1480] = 0X015aU;
QEPAELA.data[1481] = 0X2e4eU;
QEPAELA.data[1482] = 0X0007U;
QEPAELA.data[1483] = 0X0514U;
 /* line 351: */
QEPAELA.data[1484] = 0X000fU;
QEPAELA.data[1485] = 0X0192U;
QEPAELA.data[1486] = 0X2ea1U;
QEPAELA.data[1487] = 0X0007U;
QEPAELA.data[1488] = 0X1f30U;
 /* line 352: */
QEPAELA.data[1489] = 0X051cU;
QEPAELA.data[1490] = 0X000fU;
QEPAELA.data[1491] = 0X0182U;
QEPAELA.data[1492] = 0X2ef9U;
QEPAELA.data[1493] = 0X0007U;
 /* line 353: */
QEPAELA.data[1494] = 0X0524U;
QEPAELA.data[1495] = 0X3050U;
QEPAELA.data[1496] = 0X03e2U;
QEPAELA.data[1497] = 0X2eceU;
QEPAELA.data[1498] = 0X0007U;
 /* line 354: */
QEPAELA.data[1499] = 0X3098U;
QEPAELA.data[1500] = 0X052cU;
QEPAELA.data[1501] = 0X3111U;
QEPAELA.data[1502] = 0X017aU;
QEPAELA.data[1503] = 0X2f41U;
 /* line 355: */
QEPAELA.data[1504] = 0X0007U;
QEPAELA.data[1505] = 0X2cb0U;
QEPAELA.data[1506] = 0X04a2U;
QEPAELA.data[1507] = 0X2f1eU;
QEPAELA.data[1508] = 0X0007U;
 /* line 356: */
QEPAELA.data[1509] = 0X0534U;
QEPAELA.data[1510] = 0X000fU;
QEPAELA.data[1511] = 0X0172U;
QEPAELA.data[1512] = 0X2d5eU;
QEPAELA.data[1513] = 0X0007U;
 /* line 357: */
QEPAELA.data[1514] = 0X3148U;
QEPAELA.data[1515] = 0X0f30U;
QEPAELA.data[1516] = 0X0194U;
QEPAELA.data[1517] = 0X0f30U;
QEPAELA.data[1518] = 0X0194U;
 /* line 358: */
QEPAELA.data[1519] = 0X3190U;
QEPAELA.data[1520] = 0X053cU;
QEPAELA.data[1521] = 0X036cU;
QEPAELA.data[1522] = 0X1fb0U;
QEPAELA.data[1523] = 0X000aU;
 /* line 359: */
QEPAELA.data[1524] = 0X2fa6U;
QEPAELA.data[1525] = 0X0007U;
QEPAELA.data[1526] = 0X0544U;
QEPAELA.data[1527] = 0X000fU;
QEPAELA.data[1528] = 0X007bU;
 /* line 360: */
QEPAELA.data[1529] = 0X000fU;
QEPAELA.data[1530] = 0X2fe8U;
QEPAELA.data[1531] = 0X2fc9U;
QEPAELA.data[1532] = 0X0053U;
QEPAELA.data[1533] = 0X3011U;
 /* line 361: */
QEPAELA.data[1534] = 0X0b40U;
QEPAELA.data[1535] = 0X054cU;
QEPAELA.data[1536] = 0X000fU;
QEPAELA.data[1537] = 0X01caU;
QEPAELA.data[1538] = 0X2feeU;
 /* line 362: */
QEPAELA.data[1539] = 0X0007U;
QEPAELA.data[1540] = 0X0554U;
QEPAELA.data[1541] = 0X0502U;
QEPAELA.data[1542] = 0X3036U;
QEPAELA.data[1543] = 0X0007U;
 /* line 363: */
QEPAELA.data[1544] = 0X000fU;
QEPAELA.data[1545] = 0X014aU;
QEPAELA.data[1546] = 0X3056U;
QEPAELA.data[1547] = 0X0007U;
QEPAELA.data[1548] = 0X18c0U;
 /* line 364: */
QEPAELA.data[1549] = 0X055cU;
QEPAELA.data[1550] = 0X3081U;
QEPAELA.data[1551] = 0X014aU;
QEPAELA.data[1552] = 0X000fU;
QEPAELA.data[1553] = 0X3051U;
 /* line 365: */
QEPAELA.data[1554] = 0X0063U;
QEPAELA.data[1555] = 0X309eU;
QEPAELA.data[1556] = 0X2cb0U;
QEPAELA.data[1557] = 0X017aU;
QEPAELA.data[1558] = 0X30b6U;
 /* line 366: */
QEPAELA.data[1559] = 0X0007U;
QEPAELA.data[1560] = 0X2cb0U;
QEPAELA.data[1561] = 0X04a2U;
QEPAELA.data[1562] = 0X30d6U;
QEPAELA.data[1563] = 0X0007U;
 /* line 367: */
QEPAELA.data[1564] = 0X0564U;
QEPAELA.data[1565] = 0X30f9U;
QEPAELA.data[1566] = 0X0063U;
QEPAELA.data[1567] = 0X000fU;
QEPAELA.data[1568] = 0X3099U;
 /* line 368: */
QEPAELA.data[1569] = 0X020aU;
QEPAELA.data[1570] = 0X3116U;
QEPAELA.data[1571] = 0X0007U;
QEPAELA.data[1572] = 0X3131U;
QEPAELA.data[1573] = 0X020aU;
 /* line 369: */
QEPAELA.data[1574] = 0X000fU;
QEPAELA.data[1575] = 0X3111U;
QEPAELA.data[1576] = 0X0053U;
QEPAELA.data[1577] = 0X3171U;
QEPAELA.data[1578] = 0X0b40U;
 /* line 370: */
QEPAELA.data[1579] = 0X056cU;
QEPAELA.data[1580] = 0X3149U;
QEPAELA.data[1581] = 0X000aU;
QEPAELA.data[1582] = 0X314eU;
QEPAELA.data[1583] = 0X0007U;
 /* line 371: */
QEPAELA.data[1584] = 0X000fU;
QEPAELA.data[1585] = 0X03c2U;
QEPAELA.data[1586] = 0X3196U;
QEPAELA.data[1587] = 0X0007U;
QEPAELA.data[1588] = 0X002cU;
 /* line 372: */
QEPAELA.data[1589] = 0X03faU;
QEPAELA.data[1590] = 0X31b6U;
QEPAELA.data[1591] = 0X0007U;
QEPAELA.data[1592] = 0X0574U;
QEPAELA.data[1593] = 0X03faU;
 /* line 373: */
QEPAELA.data[1594] = 0X31d6U;
QEPAELA.data[1595] = 0X0007U;
QEPAELA.data[1596] = 0X3208U;
QEPAELA.data[1597] = 0X0668U;
QEPAELA.data[1598] = 0X057cU;
 /* line 374: */
QEPAELA.data[1599] = 0X000fU;
QEPAELA.data[1600] = 0X03faU;
QEPAELA.data[1601] = 0X3249U;
QEPAELA.data[1602] = 0X002cU;
QEPAELA.data[1603] = 0X03faU;
 /* line 375: */
QEPAELA.data[1604] = 0X3226U;
QEPAELA.data[1605] = 0X0007U;
QEPAELA.data[1606] = 0X3268U;
QEPAELA.data[1607] = 0X3209U;
QEPAELA.data[1608] = 0X000aU;
 /* line 376: */
QEPAELA.data[1609] = 0X320eU;
QEPAELA.data[1610] = 0X0007U;
QEPAELA.data[1611] = 0X000fU;
QEPAELA.data[1612] = 0X0033U;
QEPAELA.data[1613] = 0X3291U;
 /* line 377: */
QEPAELA.data[1614] = 0X11e8U;
QEPAELA.data[1615] = 0X0584U;
QEPAELA.data[1616] = 0X000fU;
QEPAELA.data[1617] = 0X0023U;
QEPAELA.data[1618] = 0X32b9U;
 /* line 378: */
QEPAELA.data[1619] = 0X0f30U;
QEPAELA.data[1620] = 0X058cU;
QEPAELA.data[1621] = 0X000fU;
QEPAELA.data[1622] = 0X0053U;
QEPAELA.data[1623] = 0X32e1U;
 /* line 379: */
QEPAELA.data[1624] = 0X0b40U;
QEPAELA.data[1625] = 0X0594U;
QEPAELA.data[1626] = 0X000fU;
QEPAELA.data[1627] = 0X0013U;
QEPAELA.data[1628] = 0X3309U;
 /* line 380: */
QEPAELA.data[1629] = 0X0668U;
QEPAELA.data[1630] = 0X059cU;
QEPAELA.data[1631] = 0X000fU;
QEPAELA.data[1632] = 0X03c2U;
QEPAELA.data[1633] = 0X326eU;
 /* line 381: */
QEPAELA.data[1634] = 0X05a4U;
QEPAELA.data[1635] = 0X3190U;
QEPAELA.data[1636] = 0X05acU;
QEPAELA.data[1637] = 0X000fU;
QEPAELA.data[1638] = 0X006bU;
 /* line 382: */
QEPAELA.data[1639] = 0X000fU;
QEPAELA.data[1640] = 0X2d39U;
QEPAELA.data[1641] = 0X0083U;
QEPAELA.data[1642] = 0X3389U;
QEPAELA.data[1643] = 0X33a8U;
 /* line 383: */
QEPAELA.data[1644] = 0X02daU;
QEPAELA.data[1645] = 0X336eU;
QEPAELA.data[1646] = 0X0007U;
QEPAELA.data[1647] = 0X000fU;
QEPAELA.data[1648] = 0X02daU;
 /* line 384: */
QEPAELA.data[1649] = 0X3356U;
QEPAELA.data[1650] = 0X0007U;
QEPAELA.data[1651] = 0X000fU;
QEPAELA.data[1652] = 0X0083U;
QEPAELA.data[1653] = 0X33aeU;
 /* line 385: */
QEPAELA.data[1654] = 0X33c8U;
QEPAELA.data[1655] = 0X3989U;
QEPAELA.data[1656] = 0X008bU;
QEPAELA.data[1657] = 0X33e1U;
QEPAELA.data[1658] = 0X3421U;
 /* line 386: */
QEPAELA.data[1659] = 0X004bU;
QEPAELA.data[1660] = 0X33f9U;
QEPAELA.data[1661] = 0X2451U;
QEPAELA.data[1662] = 0X004aU;
QEPAELA.data[1663] = 0X33ceU;
 /* line 387: */
QEPAELA.data[1664] = 0X0b70U;
QEPAELA.data[1665] = 0X04fcU;
QEPAELA.data[1666] = 0X000fU;
QEPAELA.data[1667] = 0X0073U;
QEPAELA.data[1668] = 0X3449U;
 /* line 388: */
QEPAELA.data[1669] = 0X1c10U;
QEPAELA.data[1670] = 0X05b4U;
QEPAELA.data[1671] = 0X000fU;
QEPAELA.data[1672] = 0X0362U;
QEPAELA.data[1673] = 0X3481U;
 /* line 389: */
QEPAELA.data[1674] = 0X0007U;
QEPAELA.data[1675] = 0X37e8U;
QEPAELA.data[1676] = 0X0b40U;
QEPAELA.data[1677] = 0X05bcU;
QEPAELA.data[1678] = 0X000fU;
 /* line 390: */
QEPAELA.data[1679] = 0X0322U;
QEPAELA.data[1680] = 0X34d1U;
QEPAELA.data[1681] = 0X0007U;
QEPAELA.data[1682] = 0X18c0U;
QEPAELA.data[1683] = 0X37e8U;
 /* line 391: */
QEPAELA.data[1684] = 0X05c4U;
QEPAELA.data[1685] = 0X037aU;
QEPAELA.data[1686] = 0X34b6U;
QEPAELA.data[1687] = 0X0007U;
QEPAELA.data[1688] = 0X000fU;
 /* line 392: */
QEPAELA.data[1689] = 0X031aU;
QEPAELA.data[1690] = 0X3569U;
QEPAELA.data[1691] = 0X0007U;
QEPAELA.data[1692] = 0X0b40U;
QEPAELA.data[1693] = 0X010cU;
 /* line 393: */
QEPAELA.data[1694] = 0X038aU;
QEPAELA.data[1695] = 0X34feU;
QEPAELA.data[1696] = 0X0007U;
QEPAELA.data[1697] = 0X37e8U;
QEPAELA.data[1698] = 0X036aU;
 /* line 394: */
QEPAELA.data[1699] = 0X351eU;
QEPAELA.data[1700] = 0X0007U;
QEPAELA.data[1701] = 0X05ccU;
QEPAELA.data[1702] = 0X37e8U;
QEPAELA.data[1703] = 0X05d4U;
 /* line 395: */
QEPAELA.data[1704] = 0X0372U;
QEPAELA.data[1705] = 0X354eU;
QEPAELA.data[1706] = 0X0007U;
QEPAELA.data[1707] = 0X000fU;
QEPAELA.data[1708] = 0X0312U;
 /* line 396: */
QEPAELA.data[1709] = 0X35b9U;
QEPAELA.data[1710] = 0X0007U;
QEPAELA.data[1711] = 0X05dcU;
QEPAELA.data[1712] = 0X3820U;
QEPAELA.data[1713] = 0X05e4U;
 /* line 397: */
QEPAELA.data[1714] = 0X015aU;
QEPAELA.data[1715] = 0X359eU;
QEPAELA.data[1716] = 0X0007U;
QEPAELA.data[1717] = 0X000fU;
QEPAELA.data[1718] = 0X030aU;
 /* line 398: */
QEPAELA.data[1719] = 0X3629U;
QEPAELA.data[1720] = 0X0007U;
QEPAELA.data[1721] = 0X2cb0U;
QEPAELA.data[1722] = 0X05ecU;
QEPAELA.data[1723] = 0X0352U;
 /* line 399: */
QEPAELA.data[1724] = 0X35e6U;
QEPAELA.data[1725] = 0X0007U;
QEPAELA.data[1726] = 0X2cb0U;
QEPAELA.data[1727] = 0X05f4U;
QEPAELA.data[1728] = 0X035aU;
 /* line 400: */
QEPAELA.data[1729] = 0X360eU;
QEPAELA.data[1730] = 0X0007U;
QEPAELA.data[1731] = 0X000fU;
QEPAELA.data[1732] = 0X0302U;
QEPAELA.data[1733] = 0X3679U;
 /* line 401: */
QEPAELA.data[1734] = 0X0007U;
QEPAELA.data[1735] = 0X11e8U;
QEPAELA.data[1736] = 0X024cU;
QEPAELA.data[1737] = 0X0f30U;
QEPAELA.data[1738] = 0X0194U;
 /* line 402: */
QEPAELA.data[1739] = 0X1f30U;
QEPAELA.data[1740] = 0X05fcU;
QEPAELA.data[1741] = 0X000fU;
QEPAELA.data[1742] = 0X02faU;
QEPAELA.data[1743] = 0X36a9U;
 /* line 403: */
QEPAELA.data[1744] = 0X0007U;
QEPAELA.data[1745] = 0X1f30U;
QEPAELA.data[1746] = 0X0604U;
QEPAELA.data[1747] = 0X000fU;
QEPAELA.data[1748] = 0X02f2U;
 /* line 404: */
QEPAELA.data[1749] = 0X36d9U;
QEPAELA.data[1750] = 0X0007U;
QEPAELA.data[1751] = 0X1f30U;
QEPAELA.data[1752] = 0X060cU;
QEPAELA.data[1753] = 0X000fU;
 /* line 405: */
QEPAELA.data[1754] = 0X02eaU;
QEPAELA.data[1755] = 0X3711U;
QEPAELA.data[1756] = 0X0007U;
QEPAELA.data[1757] = 0X0614U;
QEPAELA.data[1758] = 0X3350U;
 /* line 406: */
QEPAELA.data[1759] = 0X061cU;
QEPAELA.data[1760] = 0X000fU;
QEPAELA.data[1761] = 0X02e2U;
QEPAELA.data[1762] = 0X3739U;
QEPAELA.data[1763] = 0X0007U;
 /* line 407: */
QEPAELA.data[1764] = 0X0624U;
QEPAELA.data[1765] = 0X000fU;
QEPAELA.data[1766] = 0X01c2U;
QEPAELA.data[1767] = 0X3791U;
QEPAELA.data[1768] = 0X0007U;
 /* line 408: */
QEPAELA.data[1769] = 0X0b40U;
QEPAELA.data[1770] = 0X010cU;
QEPAELA.data[1771] = 0X2fc8U;
QEPAELA.data[1772] = 0X015aU;
QEPAELA.data[1773] = 0X376eU;
 /* line 409: */
QEPAELA.data[1774] = 0X0007U;
QEPAELA.data[1775] = 0X062cU;
QEPAELA.data[1776] = 0X000fU;
QEPAELA.data[1777] = 0X01baU;
QEPAELA.data[1778] = 0X3426U;
 /* line 410: */
QEPAELA.data[1779] = 0X0007U;
QEPAELA.data[1780] = 0X0b40U;
QEPAELA.data[1781] = 0X010cU;
QEPAELA.data[1782] = 0X2fc8U;
QEPAELA.data[1783] = 0X015aU;
 /* line 411: */
QEPAELA.data[1784] = 0X37c6U;
QEPAELA.data[1785] = 0X0007U;
QEPAELA.data[1786] = 0X0634U;
QEPAELA.data[1787] = 0X000fU;
QEPAELA.data[1788] = 0X008bU;
 /* line 412: */
QEPAELA.data[1789] = 0X3801U;
QEPAELA.data[1790] = 0X3421U;
QEPAELA.data[1791] = 0X004bU;
QEPAELA.data[1792] = 0X000fU;
QEPAELA.data[1793] = 0X2428U;
 /* line 413: */
QEPAELA.data[1794] = 0X3421U;
QEPAELA.data[1795] = 0X0093U;
QEPAELA.data[1796] = 0X3826U;
QEPAELA.data[1797] = 0X3860U;
QEPAELA.data[1798] = 0X11e8U;
 /* line 414: */
QEPAELA.data[1799] = 0X024cU;
QEPAELA.data[1800] = 0X2cd0U;
QEPAELA.data[1801] = 0X3900U;
QEPAELA.data[1802] = 0X3971U;
QEPAELA.data[1803] = 0X0282U;
 /* line 415: */
QEPAELA.data[1804] = 0X3889U;
QEPAELA.data[1805] = 0X0007U;
QEPAELA.data[1806] = 0X063cU;
QEPAELA.data[1807] = 0X000fU;
QEPAELA.data[1808] = 0X027aU;
 /* line 416: */
QEPAELA.data[1809] = 0X38b1U;
QEPAELA.data[1810] = 0X0007U;
QEPAELA.data[1811] = 0X0644U;
QEPAELA.data[1812] = 0X000fU;
QEPAELA.data[1813] = 0X0272U;
 /* line 417: */
QEPAELA.data[1814] = 0X38d9U;
QEPAELA.data[1815] = 0X0007U;
QEPAELA.data[1816] = 0X064cU;
QEPAELA.data[1817] = 0X000fU;
QEPAELA.data[1818] = 0X01e2U;
 /* line 418: */
QEPAELA.data[1819] = 0X3866U;
QEPAELA.data[1820] = 0X0007U;
QEPAELA.data[1821] = 0X0654U;
QEPAELA.data[1822] = 0X000fU;
QEPAELA.data[1823] = 0X009bU;
 /* line 419: */
QEPAELA.data[1824] = 0X3929U;
QEPAELA.data[1825] = 0X37e8U;
QEPAELA.data[1826] = 0X065cU;
QEPAELA.data[1827] = 0X000fU;
QEPAELA.data[1828] = 0X03faU;
 /* line 420: */
QEPAELA.data[1829] = 0X3906U;
QEPAELA.data[1830] = 0X0664U;
QEPAELA.data[1831] = 0X03faU;
QEPAELA.data[1832] = 0X3946U;
QEPAELA.data[1833] = 0X0007U;
 /* line 421: */
QEPAELA.data[1834] = 0X37e8U;
QEPAELA.data[1835] = 0X065cU;
QEPAELA.data[1836] = 0X000fU;
QEPAELA.data[1837] = 0X0093U;
QEPAELA.data[1838] = 0X000fU;
 /* line 422: */
QEPAELA.data[1839] = 0X3821U;
QEPAELA.data[1840] = 0X0083U;
QEPAELA.data[1841] = 0X000fU;
QEPAELA.data[1842] = 0X33a9U;
QEPAELA.data[1843] = 0X0063U;
 /* line 423: */
QEPAELA.data[1844] = 0X000fU;
QEPAELA.data[1845] = 0X2cb1U;
QEPAELA.data[1846] = 0X0093U;
QEPAELA.data[1847] = 0X39beU;
QEPAELA.data[1848] = 0X3860U;
 /* line 424: */
QEPAELA.data[1849] = 0X11e8U;
QEPAELA.data[1850] = 0X024cU;
QEPAELA.data[1851] = 0X2cd0U;
QEPAELA.data[1852] = 0X39f8U;
QEPAELA.data[1853] = 0X3a69U;
 /* line 425: */
QEPAELA.data[1854] = 0X004bU;
QEPAELA.data[1855] = 0X3a21U;
QEPAELA.data[1856] = 0X2428U;
QEPAELA.data[1857] = 0X066cU;
QEPAELA.data[1858] = 0X000fU;
 /* line 426: */
QEPAELA.data[1859] = 0X03faU;
QEPAELA.data[1860] = 0X39feU;
QEPAELA.data[1861] = 0X0664U;
QEPAELA.data[1862] = 0X03faU;
QEPAELA.data[1863] = 0X3a3eU;
 /* line 427: */
QEPAELA.data[1864] = 0X0007U;
QEPAELA.data[1865] = 0X2cb0U;
QEPAELA.data[1866] = 0X066cU;
QEPAELA.data[1867] = 0X000fU;
QEPAELA.data[1868] = 0X0093U;
 /* line 428: */
QEPAELA.data[1869] = 0X000fU;
QEPAELA.data[1870] = 0X39b9U;
QEPAELA.data[1871] = 0X004bU;
QEPAELA.data[1872] = 0X000fU;
QEPAELA.data[1873] = 0X2429U;
 /* line 429: */
QEPAELA.data[1874] = 0X03c2U;
QEPAELA.data[1875] = 0X3a9eU;
QEPAELA.data[1876] = 0X3190U;
QEPAELA.data[1877] = 0X002cU;
QEPAELA.data[1878] = 0X03faU;
 /* line 430: */
QEPAELA.data[1879] = 0X3abeU;
QEPAELA.data[1880] = 0X0007U;
QEPAELA.data[1881] = 0X002cU;
QEPAELA.data[1882] = 0X03faU;
QEPAELA.data[1883] = 0X3adeU;
 /* line 431: */
QEPAELA.data[1884] = 0X0007U;
QEPAELA.data[1885] = 0X0b40U;
QEPAELA.data[1886] = 0X010cU;
QEPAELA.data[1887] = 0X11e8U;
QEPAELA.data[1888] = 0X024cU;
 /* line 432: */
QEPAELA.data[1889] = 0X0b40U;
QEPAELA.data[1890] = 0X0674U;
QEPAELA.data[1891] = 0X000fU;
QEPAELA.data[1892] = 0X03faU;
QEPAELA.data[1893] = 0X000fU;
 /* line 433: */
QEPAELA.data[1894] = 0X067cU;
QEPAELA.data[1895] = 0X03faU;
QEPAELA.data[1896] = 0X3b46U;
QEPAELA.data[1897] = 0X0007U;
QEPAELA.data[1898] = 0X3b29U;
QEPAELA.data[1899] = 0X0000U;
SEPAELA_sid_code = A_HISVEC(REPAELA,QEPAELA,1900,A68_SBITS );
 /* line 435: */
 /* line 436: */
TEPAELA.data[0] = 0X80000000U;
TEPAELA.data[1] = 0X00000000U;
TEPAELA.data[2] = 0X7e800000U;
TEPAELA.data[3] = 0X00000000U;
TEPAELA.data[4] = 0X00000000U;
 /* line 437: */
TEPAELA.data[5] = 0X00000000U;
TEPAELA.data[6] = 0X00000000U;
TEPAELA.data[7] = 0X7e800000U;
TEPAELA.data[8] = 0X00000000U;
TEPAELA.data[9] = 0X00000000U;
TEPAELA.data[10] = 0X00000000U;
 /* line 438: */
TEPAELA.data[11] = 0X00000000U;
TEPAELA.data[12] = 0X00000000U;
TEPAELA.data[13] = 0X00000000U;
TEPAELA.data[14] = 0X000000f8U;
TEPAELA.data[15] = 0X00000000U;
TEPAELA.data[16] = 0X00003000U;
 /* line 439: */
TEPAELA.data[17] = 0X00000000U;
TEPAELA.data[18] = 0X00000000U;
TEPAELA.data[19] = 0X80000000U;
TEPAELA.data[20] = 0X003f0000U;
TEPAELA.data[21] = 0X00000000U;
TEPAELA.data[22] = 0X00000400U;
 /* line 440: */
TEPAELA.data[23] = 0X00000000U;
TEPAELA.data[24] = 0X00200800U;
TEPAELA.data[25] = 0X7f400000U;
TEPAELA.data[26] = 0X00000000U;
TEPAELA.data[27] = 0X00000800U;
TEPAELA.data[28] = 0X00000820U;
 /* line 441: */
TEPAELA.data[29] = 0X00000000U;
TEPAELA.data[30] = 0X0000ff00U;
TEPAELA.data[31] = 0X00000000U;
TEPAELA.data[32] = 0X00180200U;
TEPAELA.data[33] = 0X07806000U;
TEPAELA.data[34] = 0X1e130000U;
 /* line 442: */
TEPAELA.data[35] = 0X003f0000U;
TEPAELA.data[36] = 0X00200000U;
TEPAELA.data[37] = 0X00000400U;
TEPAELA.data[38] = 0X00000000U;
TEPAELA.data[39] = 0X00200800U;
TEPAELA.data[40] = 0X7fc000ffU;
 /* line 443: */
TEPAELA.data[41] = 0Xffc00c02U;
TEPAELA.data[42] = 0X0020f980U;
TEPAELA.data[43] = 0X08001820U;
TEPAELA.data[44] = 0X01c4e6f8U;
TEPAELA.data[45] = 0X000000ffU;
TEPAELA.data[46] = 0Xffc00000U;
 /* line 444: */
TEPAELA.data[47] = 0X0000f000U;
TEPAELA.data[48] = 0X00000000U;
TEPAELA.data[49] = 0X01c486f8U;
TEPAELA.data[50] = 0X7fc00000U;
TEPAELA.data[51] = 0X00000000U;
TEPAELA.data[52] = 0X00000800U;
 /* line 445: */
TEPAELA.data[53] = 0X00000820U;
TEPAELA.data[54] = 0X00000000U;
TEPAELA.data[55] = 0X000000ffU;
TEPAELA.data[56] = 0Xff400000U;
TEPAELA.data[57] = 0X0000f000U;
TEPAELA.data[58] = 0X00000000U;
 /* line 446: */
TEPAELA.data[59] = 0X01c486f8U;
TEPAELA.data[60] = 0X008000ffU;
TEPAELA.data[61] = 0Xffc00000U;
TEPAELA.data[62] = 0X0000f000U;
TEPAELA.data[63] = 0X00000000U;
TEPAELA.data[64] = 0X01c486f8U;
 /* line 447: */
TEPAELA.data[65] = 0X008000ffU;
TEPAELA.data[66] = 0Xffd7c300U;
TEPAELA.data[67] = 0X0000f000U;
TEPAELA.data[68] = 0X00000040U;
TEPAELA.data[69] = 0X01cc87f8U;
TEPAELA.data[70] = 0X00000000U;
 /* line 448: */
TEPAELA.data[71] = 0X00108000U;
TEPAELA.data[72] = 0X00000000U;
TEPAELA.data[73] = 0X00000040U;
TEPAELA.data[74] = 0X00080100U;
TEPAELA.data[75] = 0X7fc00000U;
TEPAELA.data[76] = 0X00000080U;
 /* line 449: */
TEPAELA.data[77] = 0X00000800U;
TEPAELA.data[78] = 0X00000820U;
TEPAELA.data[79] = 0X00000000U;
TEPAELA.data[80] = 0X008000ffU;
TEPAELA.data[81] = 0Xffd08300U;
TEPAELA.data[82] = 0X0000f01fU;
 /* line 450: */
TEPAELA.data[83] = 0Xf0100040U;
TEPAELA.data[84] = 0X01cc87f8U;
TEPAELA.data[85] = 0X00000000U;
TEPAELA.data[86] = 0X00108300U;
TEPAELA.data[87] = 0X0000001fU;
TEPAELA.data[88] = 0Xf0100040U;
 /* line 451: */
TEPAELA.data[89] = 0X00080100U;
TEPAELA.data[90] = 0X00000000U;
TEPAELA.data[91] = 0X00000010U;
TEPAELA.data[92] = 0X00070000U;
TEPAELA.data[93] = 0X00000000U;
TEPAELA.data[94] = 0X00000000U;
 /* line 452: */
TEPAELA.data[95] = 0X000000ffU;
TEPAELA.data[96] = 0Xfff08310U;
TEPAELA.data[97] = 0X0007f01fU;
TEPAELA.data[98] = 0Xf0100040U;
TEPAELA.data[99] = 0X01cc87f8U;
VEPAELA_sid_cblwds = A_HISVEC(UEPAELA,TEPAELA,100,A68_BITS );
 /* line 454: */
 /* line 458: */
 /* line 459: */
 /* line 461: */
 /* line 466: */
 /* line 478: */
 /* line 695: */
 /* line 710: */
 /* line 727: */
A_PROC_EXIT(DECS assemble);
} 
#undef NL
/* end of translation of ./a68files/assemble.a68 */
