
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
/* UNAME:GYCBTRN */
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
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t92  A68_92 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t94 ;

A_PROCEDURE(A68_VOID ,A68t93,(struct A68t94 ),(struct A68t94 ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(MODE94) VOID */
struct A68t94 { A68_INT mode; union {
A68_VC  mode1;
struct A68t32  mode2;
struct A68t54  mode3;
struct A68t53  mode4;
} data; };
typedef struct A68t94  A68_94 ;    /* UNION(REF MODE26,REF MODE32,REF MODE54,REF MODE53)  */

A_PROCEDURE(A68_INT ,A68t95,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t95  A68_95 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t96,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t96  A68_96 ;    /* PROC(BITS,BITS) BITS */
struct A68t98 ;

A_PROCEDURE(A68_VOID ,A68t97,(struct A68t98 ,A68_INT ),(struct A68t98 ,A68_INT ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(MODE98,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t98,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t98  A68_98 ;    /* PROC(CHAR) VOID */
struct A68t100 ;

A_PROCEDURE(A68_INT ,A68t99,(struct A68t100 ),(struct A68t100 ,void *));
typedef struct A68t99  A68_99 ;    /* PROC(MODE100) INT */

A_PROCEDURE(A68_CHAR ,A68t100,(void),(void *));
typedef struct A68t100  A68_100 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t101,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t101  A68_101 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_INT ,A68t102,(void),(void *));
typedef struct A68t102  A68_102 ;    /* PROC INT */

A_PROCEDURE(A68_INT ,A68t103,(A68_INT ),(A68_INT ,void *));
typedef struct A68t103  A68_103 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t104,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t105,(A68_VC *),(A68_VC *,void *));
typedef struct A68t105  A68_105 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_INT ,A68t106,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t106  A68_106 ;    /* PROC(INT,INT,REF BOOL) INT */
struct A68t108 ;

A_PROCEDURE(A68_BOOL ,A68t107,(A68_VC ,A68_INT *,struct A68t108 ),(A68_VC ,A68_INT *,struct A68t108 ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(MODE26,REF INT,MODE108) BOOL */
struct A68t109 ;

A_PROCEDURE(A68_VOID ,A68t108,(struct A68t109 ,struct A68t46 ),(struct A68t109 ,struct A68t46 ,void *));
typedef struct A68t108  A68_108 ;    /* PROC(MODE109,MODE46) VOID */
struct A68t109{
A68_INT  Number;
A_PAD_INT(PAD_20)
struct A68t110 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_21)
};
typedef struct A68t109  A68_109 ;    /* STRUCT(INT,REF MODE110,BITS)  */
A_VECTOR(struct A68t112 ,A68t111);
typedef struct A68t111  A68_111 ;    /* VECTOR [] MODE112 */
struct A68t112{
struct A68t109  Msgno;
A68_VC  Text;
};
typedef struct A68t112  A68_112 ;    /* STRUCT(MODE109,REF MODE26)  */
struct A68t110{
A68_VC  Name;
struct A68t111  Messages;
};
typedef struct A68t110  A68_110 ;    /* STRUCT(REF MODE26,REF MODE111)  */

A_PROCEDURE(A68_VOID ,A68t113,(A68_BOOL ,struct A68t46 *),(A68_BOOL ,struct A68t46 *,void *));
typedef struct A68t113  A68_113 ;    /* PROC(BOOL) MODE46 */
A_VECTOR(struct A68t116 ,A68t115);
typedef struct A68t115  A68_115 ;    /* VECTOR [] MODE116 */
struct A68t116{
A68_INT  Number;
A_PAD_INT(PAD_22)
A68_BITS  Class;
A_PAD_BITS(PAD_23)
A68_VC  Text;
};
typedef struct A68t116  A68_116 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t114{
A68_VC  Name;
struct A68t111  Messages;
A68_BOOL * Initialised;
struct A68t115  Setup;
};
typedef struct A68t114  A68_114 ;    /* STRUCT(MODE26,REF MODE111,REF BOOL,MODE115)  */

A_PROCEDURE(A68_VOID ,A68t117,(A68_BOOL ,struct A68t114 *),(A68_BOOL ,struct A68t114 *,void *));
typedef struct A68t117  A68_117 ;    /* PROC(BOOL) MODE114 */
A_VECTOR(A68_VC ,A68t118);
typedef struct A68t118  A68_118 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t119,(struct A68t46 ,struct A68t118 *),(struct A68t46 ,struct A68t118 *,void *));
typedef struct A68t119  A68_119 ;    /* PROC(MODE46) MODE118 */

A_PROCEDURE(A68_VOID ,A68t120,(struct A68t118 ,struct A68t46 *),(struct A68t118 ,struct A68t46 *,void *));
typedef struct A68t120  A68_120 ;    /* PROC(MODE118) MODE46 */
struct A68t122 ;

A_PROCEDURE(A68_BOOL ,A68t121,(struct A68t122 ),(struct A68t122 ,void *));
typedef struct A68t121  A68_121 ;    /* PROC(MODE122) BOOL */
struct A68t122 { A68_INT mode; union {
struct A68t109  mode1;
struct A68t112  mode2;
} data; };
typedef struct A68t122  A68_122 ;    /* UNION(MODE109,MODE112)  */

A_PROCEDURE(A68_INT ,A68t123,(struct A68t109 ),(struct A68t109 ,void *));
typedef struct A68t123  A68_123 ;    /* PROC(MODE109) INT */

A_PROCEDURE(A68_VOID ,A68t124,(A68_INT ,struct A68t114 ,struct A68t109 *),(A68_INT ,struct A68t114 ,struct A68t109 *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(INT,MODE114) MODE109 */

A_PROCEDURE(A68_BOOL ,A68t125,(struct A68t109 ,struct A68t114 ),(struct A68t109 ,struct A68t114 ,void *));
typedef struct A68t125  A68_125 ;    /* PROC(MODE109,MODE114) BOOL */

A_PROCEDURE(A68_VOID ,A68t126,(struct A68t109 ,struct A68t46 ,struct A68t112 *),(struct A68t109 ,struct A68t46 ,struct A68t112 *,void *));
typedef struct A68t126  A68_126 ;    /* PROC(MODE109,MODE46) MODE112 */
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
struct A68t92  Ctname;
};
typedef struct A68t241  A68_241 ;    /* STRUCT(REF MODE26,INT,MODE92)  */
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
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t288  A68_288 ;    /* STRUCT(REF MODE26,REF BITS)  */

A_PROCEDURE(A68_BOOL ,A68t289,(struct A68t35 ,struct A68t35 ),(struct A68t35 ,struct A68t35 ,void *));
typedef struct A68t289  A68_289 ;    /* PROC(MODE35,MODE35) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t291);
typedef struct A68t291  A68_291 ;    /* STRUCT 4 CHAR */
struct A68t290{
struct A68t291  Access;
A_PAD_ISTRUCT(A68_291 ,PAD_94)
};
typedef struct A68t290  A68_290 ;    /* STRUCT(MODE291)  */

A_PROCEDURE(struct A68t288 *,A68t292,(A68_VC ,struct A68t290 ,struct A68t108 ),(A68_VC ,struct A68t290 ,struct A68t108 ,void *));
typedef struct A68t292  A68_292 ;    /* PROC(MODE26,MODE290,MODE108) REF MODE288 */

A_PROCEDURE(A68_VOID ,A68t293,(struct A68t288 *,struct A68t108 ),(struct A68t288 *,struct A68t108 ,void *));
typedef struct A68t293  A68_293 ;    /* PROC(REF MODE288,MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t294,(struct A68t288 *,A68_VC *),(struct A68t288 *,A68_VC *,void *));
typedef struct A68t294  A68_294 ;    /* PROC(REF MODE288) MODE26 */

A_PROCEDURE(A68_VOID ,A68t295,(struct A68t288 *,A68_VC ,A68_INT *,struct A68t108 ,struct A68t35 *),(struct A68t288 *,A68_VC ,A68_INT *,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t295  A68_295 ;    /* PROC(REF MODE288,REF MODE26,REF INT,MODE108) MODE35 */

A_PROCEDURE(A68_VOID ,A68t296,(struct A68t288 *,A68_VC ,struct A68t108 ,struct A68t35 *),(struct A68t288 *,A68_VC ,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t296  A68_296 ;    /* PROC(REF MODE288,MODE26,MODE108) MODE35 */
struct A68t297{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_95)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_96)
A68_SINT  Device;
A_PAD_SINT(PAD_97)
A68_SINT  Links;
A_PAD_SINT(PAD_98)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_99)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_100)
A68_LINT  Size;
A_PAD_LINT(PAD_101)
A68_LINT  Accessed;
A_PAD_LINT(PAD_102)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_103)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_104)
};
typedef struct A68t297  A68_297 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t299 ;

A_PROCEDURE(struct A68t297 *,A68t298,(struct A68t299 ,struct A68t108 ),(struct A68t299 ,struct A68t108 ,void *));
typedef struct A68t298  A68_298 ;    /* PROC(MODE299,MODE108) REF MODE297 */
struct A68t299 { A68_INT mode; union {
struct A68t288 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t299  A68_299 ;    /* UNION(REF MODE288,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t300,(struct A68t288 *,A68_LINT *,struct A68t108 ,struct A68t35 *),(struct A68t288 *,A68_LINT *,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t300  A68_300 ;    /* PROC(REF MODE288,REF LONG INT,MODE108) MODE35 */

A_PROCEDURE(A68_VOID ,A68t301,(struct A68t288 *,A68_LINT ,struct A68t108 ,struct A68t35 *),(struct A68t288 *,A68_LINT ,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t301  A68_301 ;    /* PROC(REF MODE288,LONG INT,MODE108) MODE35 */

A_PROCEDURE(A68_VOID ,A68t302,(struct A68t288 *,struct A68t108 ,struct A68t35 *),(struct A68t288 *,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t302  A68_302 ;    /* PROC(REF MODE288,MODE108) MODE35 */

A_PROCEDURE(A68_VOID ,A68t303,(A68_VC ,struct A68t108 ,struct A68t35 *),(A68_VC ,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t303  A68_303 ;    /* PROC(MODE26,MODE108) MODE35 */

A_PROCEDURE(A68_VOID ,A68t304,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t304  A68_304 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t305,(A68_INT ),(A68_INT ,void *));
typedef struct A68t305  A68_305 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_LINT ,A68t306,(void),(void *));
typedef struct A68t306  A68_306 ;    /* PROC LONG INT */

A_PROCEDURE(A68_INT ,A68t307,(A68_VC ,struct A68t108 ),(A68_VC ,struct A68t108 ,void *));
typedef struct A68t307  A68_307 ;    /* PROC(MODE26,MODE108) INT */

A_PROCEDURE(A68_VOID ,A68t308,(A68_VC ,A68_VC ,struct A68t108 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t108 ,A68_VC *,void *));
typedef struct A68t308  A68_308 ;    /* PROC(MODE26,MODE26,MODE108) MODE26 */

A_PROCEDURE(A68_VOID ,A68t309,(A68_VC ,A68_VC ,struct A68t108 ,struct A68t35 *),(A68_VC ,A68_VC ,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t309  A68_309 ;    /* PROC(MODE26,MODE26,MODE108) MODE35 */
struct A68t310{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t310  A68_310 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t311,(A68_VC ,A68_VC ,struct A68t108 ,struct A68t310 *),(A68_VC ,A68_VC ,struct A68t108 ,struct A68t310 *,void *));
typedef struct A68t311  A68_311 ;    /* PROC(MODE26,MODE26,MODE108) MODE310 */

A_PROCEDURE(A68_VOID ,A68t312,(A68_VC *),(A68_VC *,void *));
typedef struct A68t312  A68_312 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t313,(struct A68t46 *),(struct A68t46 *,void *));
typedef struct A68t313  A68_313 ;    /* PROC MODE46 */

A_PROCEDURE(A68_VOID ,A68t314,(A68_VC ,struct A68t108 ,struct A68t46 *),(A68_VC ,struct A68t108 ,struct A68t46 *,void *));
typedef struct A68t314  A68_314 ;    /* PROC(MODE26,MODE108) MODE46 */

A_PROCEDURE(A68_BOOL ,A68t315,(void),(void *));
typedef struct A68t315  A68_315 ;    /* PROC BOOL */
struct A68t317 ;

A_PROCEDURE(A68_VOID ,A68t316,(struct A68t317 ,struct A68t108 ),(struct A68t317 ,struct A68t108 ,void *));
typedef struct A68t316  A68_316 ;    /* PROC(MODE317,MODE108) VOID */
A_VECTOR(struct A68t318 ,A68t317);
typedef struct A68t317  A68_317 ;    /* VECTOR [] MODE318 */
struct A68t318{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_105)
};
typedef struct A68t318  A68_318 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t319,(void),(void *));
typedef struct A68t319  A68_319 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t320,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t320  A68_320 ;    /* PROC(BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t321,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t321  A68_321 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t322,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t322  A68_322 ;    /* PROC(REF MODE26) REF MODE26 */

A_PROCEDURE(A68_REAL ,A68t323,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t323  A68_323 ;    /* PROC(REAL) REAL */
struct A68t324{
A68_VC  Name;
A68_VC  Version;
A68_VC  Date;
A68_VC  Msg;
A68_VC  Sys_fault;
};
typedef struct A68t324  A68_324 ;    /* STRUCT(MODE26,MODE26,MODE26,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t325,(A68_BOOL ,struct A68t324 *),(A68_BOOL ,struct A68t324 *,void *));
typedef struct A68t325  A68_325 ;    /* PROC(BOOL) MODE324 */

A_PROCEDURE(A68_VOID ,A68t326,(struct A68t324 ,A68_BOOL ),(struct A68t324 ,A68_BOOL ,void *));
typedef struct A68t326  A68_326 ;    /* PROC(MODE324,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t327,(struct A68t324 *),(struct A68t324 *,void *));
typedef struct A68t327  A68_327 ;    /* PROC MODE324 */

A_PROCEDURE(A68_BOOL ,A68t328,(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ),(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ,void *));
typedef struct A68t328  A68_328 ;    /* PROC(MODE26,MODE26,MODE26,REF REF MODE26,BOOL) BOOL */
struct A68t330 ;
struct A68t331 ;

A_PROCEDURE(A68_VOID ,A68t329,(A68_VC ,struct A68t319 ,struct A68t330 ,struct A68t331 ),(A68_VC ,struct A68t319 ,struct A68t330 ,struct A68t331 ,void *));
typedef struct A68t329  A68_329 ;    /* PROC(MODE26,MODE319,MODE330,MODE331) VOID */

A_PROCEDURE(A68_BOOL ,A68t330,(A68_VC ,struct A68t312 ),(A68_VC ,struct A68t312 ,void *));
typedef struct A68t330  A68_330 ;    /* PROC(MODE26,MODE312) BOOL */

A_PROCEDURE(A68_BOOL ,A68t331,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t331  A68_331 ;    /* PROC(BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t332,(struct A68t108 ),(struct A68t108 ,void *));
typedef struct A68t332  A68_332 ;    /* PROC(MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t333,(struct A68t332 ,struct A68t108 ),(struct A68t332 ,struct A68t108 ,void *));
typedef struct A68t333  A68_333 ;    /* PROC(MODE332,MODE108) VOID */
struct A68t334{
A68_INT  Type;
A_PAD_INT(PAD_106)
A68_INT  Value;
A_PAD_INT(PAD_107)
};
typedef struct A68t334  A68_334 ;    /* STRUCT(INT,INT)  */
struct A68t336 ;

A_PROCEDURE(A68_VOID ,A68t335,(struct A68t336 *),(struct A68t336 *,void *));
typedef struct A68t335  A68_335 ;    /* PROC REF MODE336 */
A_ROW(struct A68t334 ,A68t336,1);
typedef struct A68t336  A68_336 ;    /* [] MODE334 */
struct A68t338 ;

A_PROCEDURE(A68_VOID ,A68t337,(struct A68t338 *),(struct A68t338 *,void *));
typedef struct A68t337  A68_337 ;    /* PROC MODE338 */

A_PROCEDURE(A68_INT ,A68t338,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t338  A68_338 ;    /* PROC(REF MODE26,BOOL) INT */

A_PROCEDURE(A68_INT ,A68t339,(struct A68t265 *),(struct A68t265 *,void *));
typedef struct A68t339  A68_339 ;    /* PROC(REF MODE265) INT */

A_PROCEDURE(struct A68t262 *,A68t340,(A68_INT ,struct A68t265 *,struct A68t108 ),(A68_INT ,struct A68t265 *,struct A68t108 ,void *));
typedef struct A68t340  A68_340 ;    /* PROC(INT,REF MODE265,MODE108) REF MODE262 */

A_PROCEDURE(struct A68t262 *,A68t341,(struct A68t265 *),(struct A68t265 *,void *));
typedef struct A68t341  A68_341 ;    /* PROC(REF MODE265) REF MODE262 */

A_PROCEDURE(struct A68t262 **,A68t342,(struct A68t261 ,struct A68t262 **,struct A68t265 *,struct A68t108 ),(struct A68t261 ,struct A68t262 **,struct A68t265 *,struct A68t108 ,void *));
typedef struct A68t342  A68_342 ;    /* PROC(MODE261,REF REF MODE262,REF MODE265,MODE108) REF REF MODE262 */

A_PROCEDURE(A68_VOID ,A68t343,(struct A68t262 **,struct A68t265 *,struct A68t108 ),(struct A68t262 **,struct A68t265 *,struct A68t108 ,void *));
typedef struct A68t343  A68_343 ;    /* PROC(REF REF MODE262,REF MODE265,MODE108) VOID */

A_PROCEDURE(struct A68t265 *,A68t344,(void),(void *));
typedef struct A68t344  A68_344 ;    /* PROC REF MODE265 */

A_PROCEDURE(A68_INT ,A68t345,(struct A68t265 *,struct A68t108 ),(struct A68t265 *,struct A68t108 ,void *));
typedef struct A68t345  A68_345 ;    /* PROC(REF MODE265,MODE108) INT */

A_PROCEDURE(struct A68t265 *,A68t346,(struct A68t265 *,struct A68t108 ),(struct A68t265 *,struct A68t108 ,void *));
typedef struct A68t346  A68_346 ;    /* PROC(REF MODE265,MODE108) REF MODE265 */

A_PROCEDURE(struct A68t139 *,A68t347,(A68_INT ),(A68_INT ,void *));
typedef struct A68t347  A68_347 ;    /* PROC(INT) REF MODE139 */

A_PROCEDURE(A68_INT ,A68t348,(struct A68t138 ,struct A68t108 ),(struct A68t138 ,struct A68t108 ,void *));
typedef struct A68t348  A68_348 ;    /* PROC(MODE138,MODE108) INT */

A_PROCEDURE(A68_INT ,A68t349,(struct A68t138 ),(struct A68t138 ,void *));
typedef struct A68t349  A68_349 ;    /* PROC(MODE138) INT */

A_PROCEDURE(A68_VOID ,A68t350,(struct A68t138 ,struct A68t138 *),(struct A68t138 ,struct A68t138 *,void *));
typedef struct A68t350  A68_350 ;    /* PROC(MODE138) MODE138 */

A_PROCEDURE(struct A68t135 *,A68t351,(struct A68t261 ),(struct A68t261 ,void *));
typedef struct A68t351  A68_351 ;    /* PROC(MODE261) REF MODE135 */

A_PROCEDURE(struct A68t151 *,A68t352,(struct A68t261 ),(struct A68t261 ,void *));
typedef struct A68t352  A68_352 ;    /* PROC(MODE261) REF MODE151 */

A_PROCEDURE(struct A68t169 *,A68t353,(struct A68t261 ),(struct A68t261 ,void *));
typedef struct A68t353  A68_353 ;    /* PROC(MODE261) REF MODE169 */

A_PROCEDURE(struct A68t175 *,A68t354,(struct A68t261 ),(struct A68t261 ,void *));
typedef struct A68t354  A68_354 ;    /* PROC(MODE261) REF MODE175 */

A_PROCEDURE(struct A68t252 *,A68t355,(struct A68t261 ),(struct A68t261 ,void *));
typedef struct A68t355  A68_355 ;    /* PROC(MODE261) REF MODE252 */

A_PROCEDURE(A68_INT ,A68t356,(struct A68t136 *,struct A68t256 ),(struct A68t136 *,struct A68t256 ,void *));
typedef struct A68t356  A68_356 ;    /* PROC(REF MODE136,REF MODE256) INT */

A_PROCEDURE(A68_INT ,A68t357,(struct A68t136 *,struct A68t257 ),(struct A68t136 *,struct A68t257 ,void *));
typedef struct A68t357  A68_357 ;    /* PROC(REF MODE136,REF MODE257) INT */

A_PROCEDURE(A68_INT ,A68t358,(struct A68t136 *,struct A68t258 ),(struct A68t136 *,struct A68t258 ,void *));
typedef struct A68t358  A68_358 ;    /* PROC(REF MODE136,REF MODE258) INT */

A_PROCEDURE(A68_INT ,A68t359,(struct A68t136 *,struct A68t259 ),(struct A68t136 *,struct A68t259 ,void *));
typedef struct A68t359  A68_359 ;    /* PROC(REF MODE136,REF MODE259) INT */

A_PROCEDURE(A68_INT ,A68t360,(struct A68t136 *,struct A68t260 ),(struct A68t136 *,struct A68t260 ,void *));
typedef struct A68t360  A68_360 ;    /* PROC(REF MODE136,REF MODE260) INT */

A_PROCEDURE(struct A68t135 *,A68t361,(struct A68t130 ,struct A68t265 *,struct A68t255 *),(struct A68t130 ,struct A68t265 *,struct A68t255 *,void *));
typedef struct A68t361  A68_361 ;    /* PROC(MODE130,REF MODE265,REF MODE255) REF MODE135 */

A_PROCEDURE(struct A68t151 *,A68t362,(struct A68t142 ,struct A68t265 *,struct A68t255 *),(struct A68t142 ,struct A68t265 *,struct A68t255 *,void *));
typedef struct A68t362  A68_362 ;    /* PROC(MODE142,REF MODE265,REF MODE255) REF MODE151 */

A_PROCEDURE(struct A68t169 *,A68t363,(struct A68t155 ,struct A68t265 *,struct A68t255 *),(struct A68t155 ,struct A68t265 *,struct A68t255 *,void *));
typedef struct A68t363  A68_363 ;    /* PROC(MODE155,REF MODE265,REF MODE255) REF MODE169 */

A_PROCEDURE(struct A68t175 *,A68t364,(struct A68t170 ,struct A68t265 *,struct A68t255 *),(struct A68t170 ,struct A68t265 *,struct A68t255 *,void *));
typedef struct A68t364  A68_364 ;    /* PROC(MODE170,REF MODE265,REF MODE255) REF MODE175 */

A_PROCEDURE(struct A68t252 *,A68t365,(struct A68t207 ,struct A68t265 *,struct A68t255 *),(struct A68t207 ,struct A68t265 *,struct A68t255 *,void *));
typedef struct A68t365  A68_365 ;    /* PROC(MODE207,REF MODE265,REF MODE255) REF MODE252 */

A_PROCEDURE(struct A68t158 *,A68t366,(struct A68t252 *),(struct A68t252 *,void *));
typedef struct A68t366  A68_366 ;    /* PROC(REF MODE252) REF MODE158 */

A_PROCEDURE(A68_VOID ,A68t367,(struct A68t157 *,struct A68t138 *),(struct A68t157 *,struct A68t138 *,void *));
typedef struct A68t367  A68_367 ;    /* PROC(REF MODE157) MODE138 */

A_PROCEDURE(A68_VOID ,A68t368,(struct A68t154 ,struct A68t255 *,struct A68t138 *),(struct A68t154 ,struct A68t255 *,struct A68t138 *,void *));
typedef struct A68t368  A68_368 ;    /* PROC(MODE154,REF MODE255) MODE138 */

A_PROCEDURE(struct A68t252 *,A68t369,(struct A68t252 *,struct A68t255 *,struct A68t255 *),(struct A68t252 *,struct A68t255 *,struct A68t255 *,void *));
typedef struct A68t369  A68_369 ;    /* PROC(REF MODE252,REF MODE255,REF MODE255) REF MODE252 */

A_PROCEDURE(A68_VOID ,A68t370,(struct A68t217 *,struct A68t252 *,struct A68t154 *),(struct A68t217 *,struct A68t252 *,struct A68t154 *,void *));
typedef struct A68t370  A68_370 ;    /* PROC(REF MODE217,REF MODE252) MODE154 */

A_PROCEDURE(A68_INT ,A68t371,(struct A68t217 *),(struct A68t217 *,void *));
typedef struct A68t371  A68_371 ;    /* PROC(REF MODE217) INT */

A_PROCEDURE(A68_INT ,A68t372,(struct A68t217 *,A68_INT ),(struct A68t217 *,A68_INT ,void *));
typedef struct A68t372  A68_372 ;    /* PROC(REF MODE217,INT) INT */

A_PROCEDURE(A68_VOID ,A68t373,(struct A68t176 ,struct A68t252 *,struct A68t255 *,struct A68t154 *),(struct A68t176 ,struct A68t252 *,struct A68t255 *,struct A68t154 *,void *));
typedef struct A68t373  A68_373 ;    /* PROC(MODE176,REF MODE252,REF MODE255) MODE154 */

A_PROCEDURE(A68_VOID ,A68t374,(struct A68t154 ,struct A68t255 *,struct A68t154 *),(struct A68t154 ,struct A68t255 *,struct A68t154 *,void *));
typedef struct A68t374  A68_374 ;    /* PROC(MODE154,REF MODE255) MODE154 */

A_PROCEDURE(A68_BOOL ,A68t375,(struct A68t154 ,struct A68t154 ,struct A68t255 *,struct A68t255 *,A68_BOOL ),(struct A68t154 ,struct A68t154 ,struct A68t255 *,struct A68t255 *,A68_BOOL ,void *));
typedef struct A68t375  A68_375 ;    /* PROC(MODE154,MODE154,REF MODE255,REF MODE255,BOOL) BOOL */

A_PROCEDURE(A68_INT ,A68t376,(struct A68t185 *,struct A68t255 *),(struct A68t185 *,struct A68t255 *,void *));
typedef struct A68t376  A68_376 ;    /* PROC(REF MODE185,REF MODE255) INT */
struct A68t377{
struct A68t129  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_108)
};
typedef struct A68t377  A68_377 ;    /* STRUCT(MODE129,BOOL)  */
struct A68t378{
struct A68t132 * A;
A68_BOOL  C;
A_PAD_BOOL(PAD_109)
};
typedef struct A68t378  A68_378 ;    /* STRUCT(REF MODE132,BOOL)  */
struct A68t379{
struct A68t135 * A;
A68_BOOL  C;
A_PAD_BOOL(PAD_110)
};
typedef struct A68t379  A68_379 ;    /* STRUCT(REF MODE135,BOOL)  */
struct A68t380{
struct A68t138  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_111)
};
typedef struct A68t380  A68_380 ;    /* STRUCT(MODE138,BOOL)  */
struct A68t381{
struct A68t150 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_112)
};
typedef struct A68t381  A68_381 ;    /* STRUCT(REF MODE150,BOOL)  */
struct A68t382{
struct A68t151 * I;
A68_BOOL  C;
A_PAD_BOOL(PAD_113)
};
typedef struct A68t382  A68_382 ;    /* STRUCT(REF MODE151,BOOL)  */
struct A68t383{
struct A68t153  R;
A68_BOOL  C;
A_PAD_BOOL(PAD_114)
};
typedef struct A68t383  A68_383 ;    /* STRUCT(MODE153,BOOL)  */
struct A68t384{
struct A68t152  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_115)
};
typedef struct A68t384  A68_384 ;    /* STRUCT(MODE152,BOOL)  */
struct A68t385{
struct A68t157 * T;
A68_BOOL  C;
A_PAD_BOOL(PAD_116)
};
typedef struct A68t385  A68_385 ;    /* STRUCT(REF MODE157,BOOL)  */
struct A68t386{
struct A68t154  T;
A68_BOOL  C;
A_PAD_BOOL(PAD_117)
};
typedef struct A68t386  A68_386 ;    /* STRUCT(MODE154,BOOL)  */
struct A68t387{
struct A68t165  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_118)
};
typedef struct A68t387  A68_387 ;    /* STRUCT(MODE165,BOOL)  */
struct A68t388{
struct A68t168  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_119)
};
typedef struct A68t388  A68_388 ;    /* STRUCT(REF MODE168,BOOL)  */
struct A68t389{
struct A68t167  T;
A68_BOOL  C;
A_PAD_BOOL(PAD_120)
};
typedef struct A68t389  A68_389 ;    /* STRUCT(MODE167,BOOL)  */
struct A68t390{
struct A68t169 * T;
A68_BOOL  C;
A_PAD_BOOL(PAD_121)
};
typedef struct A68t390  A68_390 ;    /* STRUCT(REF MODE169,BOOL)  */
struct A68t391{
struct A68t175 * Co;
A68_BOOL  C;
A_PAD_BOOL(PAD_122)
};
typedef struct A68t391  A68_391 ;    /* STRUCT(REF MODE175,BOOL)  */
struct A68t392{
struct A68t180 * Ua;
A68_BOOL  C;
A_PAD_BOOL(PAD_123)
};
typedef struct A68t392  A68_392 ;    /* STRUCT(REF MODE180,BOOL)  */
struct A68t393{
struct A68t191 * U;
A68_BOOL  C;
A_PAD_BOOL(PAD_124)
};
typedef struct A68t393  A68_393 ;    /* STRUCT(REF MODE191,BOOL)  */
struct A68t394{
struct A68t236 * U;
A68_BOOL  C;
A_PAD_BOOL(PAD_125)
};
typedef struct A68t394  A68_394 ;    /* STRUCT(REF MODE236,BOOL)  */
struct A68t395{
struct A68t176  U;
A68_BOOL  C;
A_PAD_BOOL(PAD_126)
};
typedef struct A68t395  A68_395 ;    /* STRUCT(MODE176,BOOL)  */
struct A68t396{
struct A68t220  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_127)
};
typedef struct A68t396  A68_396 ;    /* STRUCT(MODE220,BOOL)  */
struct A68t397{
struct A68t218  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_128)
};
typedef struct A68t397  A68_397 ;    /* STRUCT(REF MODE218,BOOL)  */
struct A68t398{
struct A68t216  I;
A68_BOOL  C;
A_PAD_BOOL(PAD_129)
};
typedef struct A68t398  A68_398 ;    /* STRUCT(MODE216,BOOL)  */
struct A68t399{
struct A68t237  D;
A68_BOOL  C;
A_PAD_BOOL(PAD_130)
};
typedef struct A68t399  A68_399 ;    /* STRUCT(MODE237,BOOL)  */
struct A68t400{
struct A68t222 * P;
A68_BOOL  C;
A_PAD_BOOL(PAD_131)
};
typedef struct A68t400  A68_400 ;    /* STRUCT(REF MODE222,BOOL)  */
struct A68t401{
struct A68t208 * P;
A68_BOOL  C;
A_PAD_BOOL(PAD_132)
};
typedef struct A68t401  A68_401 ;    /* STRUCT(REF MODE208,BOOL)  */
struct A68t402{
struct A68t209 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_133)
};
typedef struct A68t402  A68_402 ;    /* STRUCT(REF MODE209,BOOL)  */
struct A68t403{
struct A68t217 * N;
A68_BOOL  C;
A_PAD_BOOL(PAD_134)
};
typedef struct A68t403  A68_403 ;    /* STRUCT(REF MODE217,BOOL)  */
struct A68t404{
struct A68t210 * L;
A68_BOOL  C;
A_PAD_BOOL(PAD_135)
};
typedef struct A68t404  A68_404 ;    /* STRUCT(REF MODE210,BOOL)  */
struct A68t405{
struct A68t235 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_136)
};
typedef struct A68t405  A68_405 ;    /* STRUCT(REF MODE235,BOOL)  */
struct A68t406{
struct A68t225  S;
A68_BOOL  C;
A_PAD_BOOL(PAD_137)
};
typedef struct A68t406  A68_406 ;    /* STRUCT(MODE225,BOOL)  */
struct A68t407{
struct A68t224 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_138)
};
typedef struct A68t407  A68_407 ;    /* STRUCT(REF MODE224,BOOL)  */
struct A68t408{
struct A68t211 * M;
A68_BOOL  C;
A_PAD_BOOL(PAD_139)
};
typedef struct A68t408  A68_408 ;    /* STRUCT(REF MODE211,BOOL)  */
struct A68t409{
struct A68t212 * J;
A68_BOOL  C;
A_PAD_BOOL(PAD_140)
};
typedef struct A68t409  A68_409 ;    /* STRUCT(REF MODE212,BOOL)  */
struct A68t410{
struct A68t215 * J;
A68_BOOL  C;
A_PAD_BOOL(PAD_141)
};
typedef struct A68t410  A68_410 ;    /* STRUCT(REF MODE215,BOOL)  */
struct A68t411{
struct A68t206  S;
A68_BOOL  C;
A_PAD_BOOL(PAD_142)
};
typedef struct A68t411  A68_411 ;    /* STRUCT(MODE206,BOOL)  */
struct A68t412{
struct A68t205 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_143)
};
typedef struct A68t412  A68_412 ;    /* STRUCT(REF MODE205,BOOL)  */
struct A68t413{
struct A68t248  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_144)
};
typedef struct A68t413  A68_413 ;    /* STRUCT(MODE248,BOOL)  */
struct A68t414{
struct A68t250  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_145)
};
typedef struct A68t414  A68_414 ;    /* STRUCT(MODE250,BOOL)  */
struct A68t415{
struct A68t253  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_146)
};
typedef struct A68t415  A68_415 ;    /* STRUCT(REF MODE253,BOOL)  */
struct A68t416{
struct A68t252 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_147)
};
typedef struct A68t416  A68_416 ;    /* STRUCT(REF MODE252,BOOL)  */
struct A68t417{
struct A68t261  O;
A68_BOOL  C;
A_PAD_BOOL(PAD_148)
};
typedef struct A68t417  A68_417 ;    /* STRUCT(MODE261,BOOL)  */
struct A68t418{
struct A68t265 * Cl;
A68_BOOL  C;
A_PAD_BOOL(PAD_149)
};
typedef struct A68t418  A68_418 ;    /* STRUCT(REF MODE265,BOOL)  */
struct A68t419 ;

A_PROCEDURE(A68_VOID ,A68t420,(struct A68t129 ,struct A68t419 *,struct A68t377 *),(struct A68t129 ,struct A68t419 *,struct A68t377 *,void *));
typedef struct A68t420  A68_420 ;    /* PROC(MODE129,REF MODE419) MODE377 */

A_PROCEDURE(A68_VOID ,A68t421,(struct A68t132 *,struct A68t419 *,struct A68t378 *),(struct A68t132 *,struct A68t419 *,struct A68t378 *,void *));
typedef struct A68t421  A68_421 ;    /* PROC(REF MODE132,REF MODE419) MODE378 */

A_PROCEDURE(A68_VOID ,A68t422,(struct A68t135 *,struct A68t419 *,struct A68t379 *),(struct A68t135 *,struct A68t419 *,struct A68t379 *,void *));
typedef struct A68t422  A68_422 ;    /* PROC(REF MODE135,REF MODE419) MODE379 */

A_PROCEDURE(A68_VOID ,A68t423,(struct A68t138 ,struct A68t419 *,struct A68t380 *),(struct A68t138 ,struct A68t419 *,struct A68t380 *,void *));
typedef struct A68t423  A68_423 ;    /* PROC(MODE138,REF MODE419) MODE380 */

A_PROCEDURE(A68_VOID ,A68t424,(struct A68t150 *,struct A68t419 *,struct A68t381 *),(struct A68t150 *,struct A68t419 *,struct A68t381 *,void *));
typedef struct A68t424  A68_424 ;    /* PROC(REF MODE150,REF MODE419) MODE381 */

A_PROCEDURE(A68_VOID ,A68t425,(struct A68t151 *,struct A68t419 *,struct A68t382 *),(struct A68t151 *,struct A68t419 *,struct A68t382 *,void *));
typedef struct A68t425  A68_425 ;    /* PROC(REF MODE151,REF MODE419) MODE382 */

A_PROCEDURE(A68_VOID ,A68t426,(struct A68t153 ,struct A68t419 *,struct A68t383 *),(struct A68t153 ,struct A68t419 *,struct A68t383 *,void *));
typedef struct A68t426  A68_426 ;    /* PROC(MODE153,REF MODE419) MODE383 */

A_PROCEDURE(A68_VOID ,A68t427,(struct A68t152 ,struct A68t419 *,struct A68t384 *),(struct A68t152 ,struct A68t419 *,struct A68t384 *,void *));
typedef struct A68t427  A68_427 ;    /* PROC(MODE152,REF MODE419) MODE384 */

A_PROCEDURE(A68_VOID ,A68t428,(struct A68t157 *,struct A68t419 *,struct A68t385 *),(struct A68t157 *,struct A68t419 *,struct A68t385 *,void *));
typedef struct A68t428  A68_428 ;    /* PROC(REF MODE157,REF MODE419) MODE385 */

A_PROCEDURE(A68_VOID ,A68t429,(struct A68t154 ,struct A68t419 *,struct A68t386 *),(struct A68t154 ,struct A68t419 *,struct A68t386 *,void *));
typedef struct A68t429  A68_429 ;    /* PROC(MODE154,REF MODE419) MODE386 */

A_PROCEDURE(A68_VOID ,A68t430,(struct A68t165 ,struct A68t419 *,struct A68t387 *),(struct A68t165 ,struct A68t419 *,struct A68t387 *,void *));
typedef struct A68t430  A68_430 ;    /* PROC(MODE165,REF MODE419) MODE387 */

A_PROCEDURE(A68_VOID ,A68t431,(struct A68t168 ,struct A68t419 *,struct A68t388 *),(struct A68t168 ,struct A68t419 *,struct A68t388 *,void *));
typedef struct A68t431  A68_431 ;    /* PROC(REF MODE168,REF MODE419) MODE388 */

A_PROCEDURE(A68_VOID ,A68t432,(struct A68t167 ,struct A68t419 *,struct A68t389 *),(struct A68t167 ,struct A68t419 *,struct A68t389 *,void *));
typedef struct A68t432  A68_432 ;    /* PROC(MODE167,REF MODE419) MODE389 */

A_PROCEDURE(A68_VOID ,A68t433,(struct A68t169 *,struct A68t419 *,struct A68t390 *),(struct A68t169 *,struct A68t419 *,struct A68t390 *,void *));
typedef struct A68t433  A68_433 ;    /* PROC(REF MODE169,REF MODE419) MODE390 */

A_PROCEDURE(A68_VOID ,A68t434,(struct A68t175 *,struct A68t419 *,struct A68t391 *),(struct A68t175 *,struct A68t419 *,struct A68t391 *,void *));
typedef struct A68t434  A68_434 ;    /* PROC(REF MODE175,REF MODE419) MODE391 */

A_PROCEDURE(A68_VOID ,A68t435,(struct A68t180 *,struct A68t419 *,struct A68t392 *),(struct A68t180 *,struct A68t419 *,struct A68t392 *,void *));
typedef struct A68t435  A68_435 ;    /* PROC(REF MODE180,REF MODE419) MODE392 */

A_PROCEDURE(A68_VOID ,A68t436,(struct A68t191 *,struct A68t419 *,struct A68t393 *),(struct A68t191 *,struct A68t419 *,struct A68t393 *,void *));
typedef struct A68t436  A68_436 ;    /* PROC(REF MODE191,REF MODE419) MODE393 */

A_PROCEDURE(A68_VOID ,A68t437,(struct A68t236 *,struct A68t419 *,struct A68t394 *),(struct A68t236 *,struct A68t419 *,struct A68t394 *,void *));
typedef struct A68t437  A68_437 ;    /* PROC(REF MODE236,REF MODE419) MODE394 */

A_PROCEDURE(A68_VOID ,A68t438,(struct A68t176 ,struct A68t419 *,struct A68t395 *),(struct A68t176 ,struct A68t419 *,struct A68t395 *,void *));
typedef struct A68t438  A68_438 ;    /* PROC(MODE176,REF MODE419) MODE395 */

A_PROCEDURE(A68_VOID ,A68t439,(struct A68t220 ,struct A68t419 *,struct A68t396 *),(struct A68t220 ,struct A68t419 *,struct A68t396 *,void *));
typedef struct A68t439  A68_439 ;    /* PROC(MODE220,REF MODE419) MODE396 */

A_PROCEDURE(A68_VOID ,A68t440,(struct A68t218 ,struct A68t419 *,struct A68t397 *),(struct A68t218 ,struct A68t419 *,struct A68t397 *,void *));
typedef struct A68t440  A68_440 ;    /* PROC(REF MODE218,REF MODE419) MODE397 */

A_PROCEDURE(A68_VOID ,A68t441,(struct A68t216 ,struct A68t419 *,struct A68t398 *),(struct A68t216 ,struct A68t419 *,struct A68t398 *,void *));
typedef struct A68t441  A68_441 ;    /* PROC(MODE216,REF MODE419) MODE398 */

A_PROCEDURE(A68_VOID ,A68t442,(struct A68t237 ,struct A68t419 *,struct A68t399 *),(struct A68t237 ,struct A68t419 *,struct A68t399 *,void *));
typedef struct A68t442  A68_442 ;    /* PROC(MODE237,REF MODE419) MODE399 */

A_PROCEDURE(A68_VOID ,A68t443,(struct A68t222 *,struct A68t419 *,struct A68t400 *),(struct A68t222 *,struct A68t419 *,struct A68t400 *,void *));
typedef struct A68t443  A68_443 ;    /* PROC(REF MODE222,REF MODE419) MODE400 */

A_PROCEDURE(A68_VOID ,A68t444,(struct A68t208 *,struct A68t419 *,struct A68t401 *),(struct A68t208 *,struct A68t419 *,struct A68t401 *,void *));
typedef struct A68t444  A68_444 ;    /* PROC(REF MODE208,REF MODE419) MODE401 */

A_PROCEDURE(A68_VOID ,A68t445,(struct A68t209 *,struct A68t419 *,struct A68t402 *),(struct A68t209 *,struct A68t419 *,struct A68t402 *,void *));
typedef struct A68t445  A68_445 ;    /* PROC(REF MODE209,REF MODE419) MODE402 */

A_PROCEDURE(A68_VOID ,A68t446,(struct A68t217 *,struct A68t419 *,struct A68t403 *),(struct A68t217 *,struct A68t419 *,struct A68t403 *,void *));
typedef struct A68t446  A68_446 ;    /* PROC(REF MODE217,REF MODE419) MODE403 */

A_PROCEDURE(A68_VOID ,A68t447,(struct A68t210 *,struct A68t419 *,struct A68t404 *),(struct A68t210 *,struct A68t419 *,struct A68t404 *,void *));
typedef struct A68t447  A68_447 ;    /* PROC(REF MODE210,REF MODE419) MODE404 */

A_PROCEDURE(A68_VOID ,A68t448,(struct A68t235 *,struct A68t419 *,struct A68t405 *),(struct A68t235 *,struct A68t419 *,struct A68t405 *,void *));
typedef struct A68t448  A68_448 ;    /* PROC(REF MODE235,REF MODE419) MODE405 */

A_PROCEDURE(A68_VOID ,A68t449,(struct A68t225 ,struct A68t419 *,struct A68t406 *),(struct A68t225 ,struct A68t419 *,struct A68t406 *,void *));
typedef struct A68t449  A68_449 ;    /* PROC(MODE225,REF MODE419) MODE406 */

A_PROCEDURE(A68_VOID ,A68t450,(struct A68t224 *,struct A68t419 *,struct A68t407 *),(struct A68t224 *,struct A68t419 *,struct A68t407 *,void *));
typedef struct A68t450  A68_450 ;    /* PROC(REF MODE224,REF MODE419) MODE407 */

A_PROCEDURE(A68_VOID ,A68t451,(struct A68t211 *,struct A68t419 *,struct A68t408 *),(struct A68t211 *,struct A68t419 *,struct A68t408 *,void *));
typedef struct A68t451  A68_451 ;    /* PROC(REF MODE211,REF MODE419) MODE408 */

A_PROCEDURE(A68_VOID ,A68t452,(struct A68t212 *,struct A68t419 *,struct A68t409 *),(struct A68t212 *,struct A68t419 *,struct A68t409 *,void *));
typedef struct A68t452  A68_452 ;    /* PROC(REF MODE212,REF MODE419) MODE409 */

A_PROCEDURE(A68_VOID ,A68t453,(struct A68t215 *,struct A68t419 *,struct A68t410 *),(struct A68t215 *,struct A68t419 *,struct A68t410 *,void *));
typedef struct A68t453  A68_453 ;    /* PROC(REF MODE215,REF MODE419) MODE410 */

A_PROCEDURE(A68_VOID ,A68t454,(struct A68t206 ,struct A68t419 *,struct A68t411 *),(struct A68t206 ,struct A68t419 *,struct A68t411 *,void *));
typedef struct A68t454  A68_454 ;    /* PROC(MODE206,REF MODE419) MODE411 */

A_PROCEDURE(A68_VOID ,A68t455,(struct A68t205 *,struct A68t419 *,struct A68t412 *),(struct A68t205 *,struct A68t419 *,struct A68t412 *,void *));
typedef struct A68t455  A68_455 ;    /* PROC(REF MODE205,REF MODE419) MODE412 */

A_PROCEDURE(A68_VOID ,A68t456,(struct A68t248 ,struct A68t419 *,struct A68t413 *),(struct A68t248 ,struct A68t419 *,struct A68t413 *,void *));
typedef struct A68t456  A68_456 ;    /* PROC(MODE248,REF MODE419) MODE413 */

A_PROCEDURE(A68_VOID ,A68t457,(struct A68t250 ,struct A68t419 *,struct A68t414 *),(struct A68t250 ,struct A68t419 *,struct A68t414 *,void *));
typedef struct A68t457  A68_457 ;    /* PROC(MODE250,REF MODE419) MODE414 */

A_PROCEDURE(A68_VOID ,A68t458,(struct A68t253 ,struct A68t419 *,struct A68t415 *),(struct A68t253 ,struct A68t419 *,struct A68t415 *,void *));
typedef struct A68t458  A68_458 ;    /* PROC(REF MODE253,REF MODE419) MODE415 */

A_PROCEDURE(A68_VOID ,A68t459,(struct A68t252 *,struct A68t419 *,struct A68t416 *),(struct A68t252 *,struct A68t419 *,struct A68t416 *,void *));
typedef struct A68t459  A68_459 ;    /* PROC(REF MODE252,REF MODE419) MODE416 */

A_PROCEDURE(A68_VOID ,A68t460,(struct A68t261 ,struct A68t419 *,struct A68t417 *),(struct A68t261 ,struct A68t419 *,struct A68t417 *,void *));
typedef struct A68t460  A68_460 ;    /* PROC(MODE261,REF MODE419) MODE417 */

A_PROCEDURE(A68_VOID ,A68t461,(struct A68t265 *,struct A68t419 *,struct A68t108 ,struct A68t418 *),(struct A68t265 *,struct A68t419 *,struct A68t108 ,struct A68t418 *,void *));
typedef struct A68t461  A68_461 ;    /* PROC(REF MODE265,REF MODE419,MODE108) MODE418 */
struct A68t419{
struct A68t420  Attr;
struct A68t421  Attrstr;
struct A68t422  Attrdec;
struct A68t423  Formula;
struct A68t424  Formulas;
struct A68t425  Intdec;
struct A68t426  Range;
struct A68t427  Formularange;
struct A68t428  Tstr;
struct A68t429  Type;
struct A68t430  Alternative;
struct A68t431  Alternatives;
struct A68t432  Typebody;
struct A68t433  Typedec;
struct A68t434  Constdec;
struct A68t435  Ualts;
struct A68t436  Ustr;
struct A68t437  Uchoices;
struct A68t438  Unit;
struct A68t439  Mparam;
struct A68t440  Macparams;
struct A68t441  Instance;
struct A68t442  Declaration;
struct A68t443  Printitems;
struct A68t444  Print;
struct A68t445  Fault;
struct A68t446  Names;
struct A68t447  Let;
struct A68t448  Seqchoices;
struct A68t449  Seqstep;
struct A68t450  Sequence;
struct A68t451  Make;
struct A68t452  Join;
struct A68t453  Joins;
struct A68t454  Step;
struct A68t455  Series;
struct A68t456  Fnbody;
struct A68t457  Macspec;
struct A68t458  Macspecs;
struct A68t459  Fndec;
struct A68t460  Outer;
struct A68t461  Closure;
struct A68t419 * Rest;
};
typedef struct A68t419  A68_419 ;    /* STRUCT(MODE420,MODE421,MODE422,MODE423,MODE424,MODE425,MODE426,MODE427,MODE428,MODE429,MODE430,MODE431,MODE432,MODE433,MODE434,MODE435,MODE436,MODE437,MODE438,MODE439,MODE440,MODE441,MODE442,MODE443,MODE444,MODE445,MODE446,MODE447,MODE448,MODE449,MODE450,MODE451,MODE452,MODE453,MODE454,MODE455,MODE456,MODE457,MODE458,MODE459,MODE460,MODE461,REF MODE419)  */
struct A68t463 ;

A_PROCEDURE(struct A68t419 *,A68t462,(struct A68t419 *,struct A68t463 ),(struct A68t419 *,struct A68t463 ,void *));
typedef struct A68t462  A68_462 ;    /* PROC(REF MODE419,MODE463) REF MODE419 */
A_VECTOR(struct A68t464 ,A68t463);
typedef struct A68t463  A68_463 ;    /* VECTOR [] MODE464 */
struct A68t464 { A68_INT mode; union {
struct A68t420  mode1;
struct A68t421  mode2;
struct A68t422  mode3;
struct A68t423  mode4;
struct A68t424  mode5;
struct A68t425  mode6;
struct A68t426  mode7;
struct A68t427  mode8;
struct A68t428  mode9;
struct A68t429  mode10;
struct A68t430  mode11;
struct A68t431  mode12;
struct A68t432  mode13;
struct A68t433  mode14;
struct A68t434  mode15;
struct A68t435  mode16;
struct A68t436  mode17;
struct A68t437  mode18;
struct A68t438  mode19;
struct A68t439  mode20;
struct A68t440  mode21;
struct A68t441  mode22;
struct A68t442  mode23;
struct A68t443  mode24;
struct A68t444  mode25;
struct A68t445  mode26;
struct A68t446  mode27;
struct A68t447  mode28;
struct A68t448  mode29;
struct A68t449  mode30;
struct A68t450  mode31;
struct A68t451  mode32;
struct A68t452  mode33;
struct A68t453  mode34;
struct A68t454  mode35;
struct A68t455  mode36;
struct A68t456  mode37;
struct A68t457  mode38;
struct A68t458  mode39;
struct A68t459  mode40;
struct A68t460  mode41;
struct A68t461  mode42;
} data; };
typedef struct A68t464  A68_464 ;    /* UNION(MODE420,MODE421,MODE422,MODE423,MODE424,MODE425,MODE426,MODE427,MODE428,MODE429,MODE430,MODE431,MODE432,MODE433,MODE434,MODE435,MODE436,MODE437,MODE438,MODE439,MODE440,MODE441,MODE442,MODE443,MODE444,MODE445,MODE446,MODE447,MODE448,MODE449,MODE450,MODE451,MODE452,MODE453,MODE454,MODE455,MODE456,MODE457,MODE458,MODE459,MODE460,MODE461)  */

A_PROCEDURE(A68_VOID ,A68t465,(struct A68t419 *),(struct A68t419 *,void *));
typedef struct A68t465  A68_465 ;    /* PROC(REF MODE419) VOID */
struct A68t466{
A68_BITS  Options;
A_PAD_BITS(PAD_150)
};
typedef struct A68t466  A68_466 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t467,(struct A68t466 ,struct A68t466 ,struct A68t466 *),(struct A68t466 ,struct A68t466 ,struct A68t466 *,void *));
typedef struct A68t467  A68_467 ;    /* PROC(MODE466,MODE466) MODE466 */

A_PROCEDURE(struct A68t466 *,A68t468,(struct A68t466 *,struct A68t466 ),(struct A68t466 *,struct A68t466 ,void *));
typedef struct A68t468  A68_468 ;    /* PROC(REF MODE466,MODE466) REF MODE466 */

A_PROCEDURE(A68_BOOL ,A68t469,(struct A68t466 ,struct A68t466 ),(struct A68t466 ,struct A68t466 ,void *));
typedef struct A68t469  A68_469 ;    /* PROC(MODE466,MODE466) BOOL */

A_PROCEDURE(A68_BOOL ,A68t470,(struct A68t466 ,A68_INT ),(struct A68t466 ,A68_INT ,void *));
typedef struct A68t470  A68_470 ;    /* PROC(MODE466,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t471,(A68_INT ,struct A68t466 *),(A68_INT ,struct A68t466 *,void *));
typedef struct A68t471  A68_471 ;    /* PROC(INT) MODE466 */

A_PROCEDURE(A68_VOID ,A68t472,(struct A68t319 ),(struct A68t319 ,void *));
typedef struct A68t472  A68_472 ;    /* PROC(MODE319) VOID */

A_PROCEDURE(A68_VOID ,A68t473,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t473  A68_473 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,52,A68t474);
typedef struct A68t474  A68_474 ;    /* STRUCT 52 CHAR */
struct A68t475{
A68_VC  I;
A68_BOOL  C;
A_PAD_BOOL(PAD_151)
};
typedef struct A68t475  A68_475 ;    /* STRUCT(REF MODE26,BOOL)  */
struct A68t476{
A68_VC  Id;
A68_INT  Sort;
A_PAD_INT(PAD_152)
A68_INT  Idno;
A_PAD_INT(PAD_153)
struct A68t476 * Rest;
};
typedef struct A68t476  A68_476 ;    /* STRUCT(REF MODE26,INT,INT,REF MODE476)  */

A_PROCEDURE(A68_VOID ,A68t477,(struct A68t466 *),(struct A68t466 *,void *));
typedef struct A68t477  A68_477 ;    /* PROC MODE466 */
A_ISTRUCT(A68_CHAR ,20,A68t478);
typedef struct A68t478  A68_478 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t479);
typedef struct A68t479  A68_479 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t480);
typedef struct A68t480  A68_480 ;    /* STRUCT 30 CHAR */
A_ISTRUCT(A68_CHAR ,28,A68t481);
typedef struct A68t481  A68_481 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(A68_VC ,5,A68t482);
typedef struct A68t482  A68_482 ;    /* STRUCT 5 MODE26 */
A_ISTRUCT(A68_CHAR ,3,A68t483);
typedef struct A68t483  A68_483 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t484);
typedef struct A68t484  A68_484 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t485);
typedef struct A68t485  A68_485 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t486);
typedef struct A68t486  A68_486 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t487);
typedef struct A68t487  A68_487 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t488);
typedef struct A68t488  A68_488 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t489);
typedef struct A68t489  A68_489 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t490);
typedef struct A68t490  A68_490 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t491);
typedef struct A68t491  A68_491 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t492);
typedef struct A68t492  A68_492 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_VC ,98,A68t493);
typedef struct A68t493  A68_493 ;    /* STRUCT 98 MODE26 */

A_PROCEDURE(A68_INT ,A68t494,(A68_VC ),(A68_VC ,void *));
typedef struct A68t494  A68_494 ;    /* PROC(REF MODE26) INT */

A_PROCEDURE(struct A68t476 *,A68t495,(A68_VC ,struct A68t476 *),(A68_VC ,struct A68t476 *,void *));
typedef struct A68t495  A68_495 ;    /* PROC(MODE26,REF MODE476) REF MODE476 */

A_PROCEDURE(A68_VOID ,A68t496,(A68_VC ,A68_INT ,A68_INT ,struct A68t476 **,A68_BOOL ,A68_BOOL ,struct A68t475 *),(A68_VC ,A68_INT ,A68_INT ,struct A68t476 **,A68_BOOL ,A68_BOOL ,struct A68t475 *,void *));
typedef struct A68t496  A68_496 ;    /* PROC(REF MODE26,INT,INT,REF REF MODE476,BOOL,BOOL) MODE475 */

A_PROCEDURE(A68_VOID ,A68t497,(A68_VC ,struct A68t475 *),(A68_VC ,struct A68t475 *,void *));
typedef struct A68t497  A68_497 ;    /* PROC(REF MODE26) MODE475 */
A_ISTRUCT(struct A68t52 ,3,A68t498);
typedef struct A68t498  A68_498 ;    /* STRUCT 3 MODE52 */

A_PROCEDURE(A68_VOID ,A68t499,(struct A68t261 ,A68_VC *),(struct A68t261 ,A68_VC *,void *));
typedef struct A68t499  A68_499 ;    /* PROC(MODE261) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t500,(struct A68t252 *,struct A68t419 *,struct A68t255 *,A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t252 **,struct A68t476 *,struct A68t416 *),(struct A68t252 *,struct A68t419 *,struct A68t255 *,A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t252 **,struct A68t476 *,struct A68t416 *,void *));
typedef struct A68t500  A68_500 ;    /* PROC(REF MODE252,REF MODE419,REF MODE255,BOOL,BOOL,BOOL,REF REF MODE252,REF MODE476) MODE416 */

A_PROCEDURE(struct A68t252 *,A68t501,(void),(void *));
typedef struct A68t501  A68_501 ;    /* PROC REF MODE252 */

A_PROCEDURE(A68_VOID ,A68t502,(A68_INT ,A68_BOOL ,struct A68t476 **),(A68_INT ,A68_BOOL ,struct A68t476 **,void *));
typedef struct A68t502  A68_502 ;    /* PROC(INT,BOOL,REF REF MODE476) VOID */

A_PROCEDURE(A68_VOID ,A68t503,(A68_BOOL ,struct A68t254 *),(A68_BOOL ,struct A68t254 *,void *));
typedef struct A68t503  A68_503 ;    /* PROC(BOOL) MODE254 */

A_PROCEDURE(A68_VOID ,A68t504,(struct A68t217 *,A68_BOOL ,struct A68t476 **,struct A68t403 *),(struct A68t217 *,A68_BOOL ,struct A68t476 **,struct A68t403 *,void *));
typedef struct A68t504  A68_504 ;    /* PROC(REF MODE217,BOOL,REF REF MODE476) MODE403 */

A_PROCEDURE(A68_VOID ,A68t505,(A68_VC ,A68_INT ,A68_INT ,struct A68t476 **),(A68_VC ,A68_INT ,A68_INT ,struct A68t476 **,void *));
typedef struct A68t505  A68_505 ;    /* PROC(REF MODE26,INT,INT,REF REF MODE476) VOID */
A_ISTRUCT(A68_CHAR ,39,A68t506);
typedef struct A68t506  A68_506 ;    /* STRUCT 39 CHAR */

A_PROCEDURE(A68_VOID ,A68t507,(A68_INT ,A68_INT ,struct A68t476 **),(A68_INT ,A68_INT ,struct A68t476 **,void *));
typedef struct A68t507  A68_507 ;    /* PROC(INT,INT,REF REF MODE476) VOID */

A_PROCEDURE(A68_VOID ,A68t508,(struct A68t154 ,struct A68t476 **),(struct A68t154 ,struct A68t476 **,void *));
typedef struct A68t508  A68_508 ;    /* PROC(MODE154,REF REF MODE476) VOID */

A_PROCEDURE(A68_VOID ,A68t509,(struct A68t176 ,struct A68t476 **),(struct A68t176 ,struct A68t476 **,void *));
typedef struct A68t509  A68_509 ;    /* PROC(MODE176,REF REF MODE476) VOID */

A_PROCEDURE(A68_VOID ,A68t510,(struct A68t199 *,struct A68t419 *),(struct A68t199 *,struct A68t419 *,void *));
typedef struct A68t510  A68_510 ;    /* PROC(REF MODE199,REF MODE419) VOID */
A_ISTRUCT(struct A68t464 ,2,A68t511);
typedef struct A68t511  A68_511 ;    /* STRUCT 2 MODE464 */

A_PROCEDURE(A68_VOID ,A68t512,(struct A68t265 *,struct A68t466 ,struct A68t108 ,struct A68t418 *),(struct A68t265 *,struct A68t466 ,struct A68t108 ,struct A68t418 *,void *));
typedef struct A68t512  A68_512 ;    /* PROC(REF MODE265,MODE466,MODE108) MODE418 */
A_VECTOR(struct A68t475 ,A68t513);
typedef struct A68t513  A68_513 ;    /* VECTOR [] MODE475 */

A_PROCEDURE(A68_VOID ,A68t514,(A68_BOOL ,struct A68t513 *),(A68_BOOL ,struct A68t513 *,void *));
typedef struct A68t514  A68_514 ;    /* PROC(BOOL) MODE513 */
A_VECTOR(struct A68t389 ,A68t515);
typedef struct A68t515  A68_515 ;    /* VECTOR [] MODE389 */

A_PROCEDURE(A68_VOID ,A68t516,(A68_BOOL ,struct A68t515 *),(A68_BOOL ,struct A68t515 *,void *));
typedef struct A68t516  A68_516 ;    /* PROC(BOOL) MODE515 */

A_PROCEDURE(A68_VOID ,A68t517,(A68_BOOL ,struct A68t260 *),(A68_BOOL ,struct A68t260 *,void *));
typedef struct A68t517  A68_517 ;    /* PROC(BOOL) MODE260 */

A_PROCEDURE(A68_VOID ,A68t518,(struct A68t167 ,A68_INT ,struct A68t476 **,struct A68t389 *),(struct A68t167 ,A68_INT ,struct A68t476 **,struct A68t389 *,void *));
typedef struct A68t518  A68_518 ;    /* PROC(MODE167,INT,REF REF MODE476) MODE389 */

A_PROCEDURE(A68_VOID ,A68t519,(A68_BOOL ,struct A68t168 *),(A68_BOOL ,struct A68t168 *,void *));
typedef struct A68t519  A68_519 ;    /* PROC(BOOL) MODE168 */

A_PROCEDURE(A68_BOOL ,A68t520,(struct A68t261 ),(struct A68t261 ,void *));
typedef struct A68t520  A68_520 ;    /* PROC(MODE261) BOOL */

A_PROCEDURE(A68_VOID ,A68t521,(struct A68t261 ),(struct A68t261 ,void *));
typedef struct A68t521  A68_521 ;    /* PROC(MODE261) VOID */

A_PROCEDURE(struct A68t255 *,A68t522,(void),(void *));
typedef struct A68t522  A68_522 ;    /* PROC REF MODE255 */

A_PROCEDURE(A68_VOID ,A68t523,(A68_BOOL ,struct A68t256 *),(A68_BOOL ,struct A68t256 *,void *));
typedef struct A68t523  A68_523 ;    /* PROC(BOOL) MODE256 */

A_PROCEDURE(A68_VOID ,A68t524,(A68_BOOL ,struct A68t257 *),(A68_BOOL ,struct A68t257 *,void *));
typedef struct A68t524  A68_524 ;    /* PROC(BOOL) MODE257 */

A_PROCEDURE(A68_VOID ,A68t525,(A68_BOOL ,struct A68t258 *),(A68_BOOL ,struct A68t258 *,void *));
typedef struct A68t525  A68_525 ;    /* PROC(BOOL) MODE258 */

A_PROCEDURE(A68_VOID ,A68t526,(A68_BOOL ,struct A68t259 *),(A68_BOOL ,struct A68t259 *,void *));
typedef struct A68t526  A68_526 ;    /* PROC(BOOL) MODE259 */

A_PROCEDURE(A68_VOID ,A68t527,(A68_BOOL ,struct A68t54 *),(A68_BOOL ,struct A68t54 *,void *));
typedef struct A68t527  A68_527 ;    /* PROC(BOOL) MODE54 */

A_PROCEDURE(A68_VOID ,A68t528,(struct A68t475 ,A68_INT ,struct A68t252 *,struct A68t252 *),(struct A68t475 ,A68_INT ,struct A68t252 *,struct A68t252 *,void *));
typedef struct A68t528  A68_528 ;    /* PROC(MODE475,INT,REF MODE252,REF MODE252) VOID */

A_PROCEDURE(A68_VOID ,A68t529,(A68_INT ,struct A68t252 **,struct A68t419 *),(A68_INT ,struct A68t252 **,struct A68t419 *,void *));
typedef struct A68t529  A68_529 ;    /* PROC(INT,REF REF MODE252,REF MODE419) VOID */
A_ISTRUCT(struct A68t464 ,4,A68t530);
typedef struct A68t530  A68_530 ;    /* STRUCT 4 MODE464 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from options --- */
extern A68_BOOL  MBAAOST_includes(struct A68t466 ,struct A68t466 );
extern A68_VOID  FCAAOST_makeoptions(A68_INT ,A68_466 *);
/* --- End of imports from options --- */


/* --- Imports from transformprocs --- */
extern A68_419 * THJATRN_make_newtprocs(struct A68t419 *,struct A68t463 );
extern A68_VOID  MLJATRN_discard_tprocs(struct A68t419 *);
extern A68_419 * AWLATRN_nulltprocs;
extern A68_VOID  DWLATRN_null_attr(struct A68t129 ,struct A68t419 *,A68_377 *);
extern A68_VOID  IWLATRN_null_formula(struct A68t138 ,struct A68t419 *,A68_380 *);
extern A68_VOID  NWLATRN_null_type(struct A68t154 ,struct A68t419 *,A68_386 *);
/* --- End of imports from transformprocs --- */


/* --- Imports from modeprocs --- */
extern A68_VOID  DDOATRN_simplify_type(struct A68t154 ,struct A68t255 *,A68_154 *);
extern A68_BOOL  NEOATRN_check_types(struct A68t154 ,struct A68t154 ,struct A68t255 *,struct A68t255 *,A68_BOOL );
/* --- End of imports from modeprocs --- */


/* --- Imports from closureprocs --- */
extern A68_INT  ZKCATRN_maxclosureno(struct A68t265 *);
extern A68_VOID  RNCATRN_free_outers(struct A68t262 **,struct A68t265 *,struct A68t108 );
extern A68_265 * DPCATRN_copy_closure(struct A68t265 *,struct A68t108 );
/* --- End of imports from closureprocs --- */


/* --- Imports from charset --- */
extern A68_VOID  BDBATRN_makelookup(A68_338 *);
/* --- End of imports from charset --- */


/* --- Imports from osinterface --- */
extern A68_290  BOBAOSI_update_access;
extern A68_290  FOBAOSI_update_truncate_access;
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
/* --- End of imports from osinterface --- */


/* --- Imports from assmodes --- */
extern A68_VC  TTCAOST_nullid;
extern A68_157 * GAAATRN_niltstr;
extern A68_217 * NAAATRN_nilnames;
extern A68_135 * UAAATRN_nilattrdec;
extern A68_151 * VAAATRN_nilintdec;
extern A68_169 * WAAATRN_niltypedec;
extern A68_175 * XAAATRN_nilconstdec;
extern A68_252 * YAAATRN_nilfndec;
extern A68_262 * HBAATRN_nilouters;
#define OKAATRN_outerdec 1
#define PKAATRN_localdec 2
#define QKAATRN_macpardec 3
#define TKAATRN_outertype 3
#define VKAATRN_outerfn 5
/* --- End of imports from assmodes --- */


/* --- Imports from messageproc --- */
/* --- End of imports from messageproc --- */


/* --- Imports from basics --- */
extern A68_VOID  VTCAOST_clear(struct A68t94 );
extern A68_INT  FVCAOST_max(A68_INT ,A68_INT );
extern A68_INT  JVCAOST_min(A68_INT ,A68_INT );
extern A68_VOID  NKDAOST_sysfault(A68_VC );
/* --- End of imports from basics --- */


/* --- Imports from putstrings --- */
extern A68_VOID  UJBAOSL_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void BAAAOST(void);   /* options */
extern void IHJATRN(void);   /* transformprocs */
extern void HNMATRN(void);   /* modeprocs */
extern void SKCATRN(void);   /* closureprocs */
extern void GMAATRN(void);   /* charset */
extern void PCAAOST(void);   /* osinterface */
extern void BAAATRN(void);   /* assmodes */
extern void JFAAOSI(void);   /* messageproc */
extern void JSCAOST(void);   /* basics */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_474   KYCBTRN = {"$Id: names.a68,v 34.5 1995/03/29 13:03:01 ella Exp $"}; 
A_GISVEC(A68_VC ,LYCBTRN,KYCBTRN,52)
#define MYCBTRN_nilidn (A68_476 *)A68_NIL
#define NYCBTRN_niltypetag (A68_163 *)A68_NIL
static A68_478   EZCBTRN = {"Use old scope rules."}; 
A_GISVEC(A68_VC ,FZCBTRN,EZCBTRN,20)
static A68_479   GZCBTRN = {"Ensure all inputs have names."}; 
A_GISVEC(A68_VC ,HZCBTRN,GZCBTRN,29)
static A68_480   IZCBTRN = {"Ensure all outputs have names."}; 
A_GISVEC(A68_VC ,JZCBTRN,IZCBTRN,30)
static A68_481   KZCBTRN = {"Ensure all ports have names."}; 
A_GISVEC(A68_VC ,LZCBTRN,KZCBTRN,28)
static A68_479   MZCBTRN = {"Apply VHDL name restrictions."}; 
A_GISVEC(A68_VC ,NZCBTRN,MZCBTRN,29)
A68_46  PZCBTRN_names_options;
#define QZCBTRN_unitsort 1
static A68_338  RZCBTRN_lookup;
static A68_483   ZZCBTRN = {"ABS"}; 
A_GISVEC(A68_VC ,AADBTRN,ZZCBTRN,3)
static A68_484   BADBTRN = {"ACCESS"}; 
A_GISVEC(A68_VC ,CADBTRN,BADBTRN,6)
static A68_485   DADBTRN = {"AFTER"}; 
A_GISVEC(A68_VC ,EADBTRN,DADBTRN,5)
static A68_485   FADBTRN = {"ALIAS"}; 
A_GISVEC(A68_VC ,GADBTRN,FADBTRN,5)
static A68_483   HADBTRN = {"ALL"}; 
A_GISVEC(A68_VC ,IADBTRN,HADBTRN,3)
static A68_483   JADBTRN = {"AND"}; 
A_GISVEC(A68_VC ,KADBTRN,JADBTRN,3)
static A68_486   LADBTRN = {"ARCHITECTURE"}; 
A_GISVEC(A68_VC ,MADBTRN,LADBTRN,12)
static A68_485   NADBTRN = {"ARRAY"}; 
A_GISVEC(A68_VC ,OADBTRN,NADBTRN,5)
static A68_484   PADBTRN = {"ASSERT"}; 
A_GISVEC(A68_VC ,QADBTRN,PADBTRN,6)
static A68_487   RADBTRN = {"ATTRIBUTE"}; 
A_GISVEC(A68_VC ,SADBTRN,RADBTRN,9)
static A68_485   TADBTRN = {"BEGIN"}; 
A_GISVEC(A68_VC ,UADBTRN,TADBTRN,5)
static A68_485   VADBTRN = {"BLOCK"}; 
A_GISVEC(A68_VC ,WADBTRN,VADBTRN,5)
static A68_291   XADBTRN = {"BODY"}; 
A_GISVEC(A68_VC ,YADBTRN,XADBTRN,4)
static A68_484   ZADBTRN = {"BUFFER"}; 
A_GISVEC(A68_VC ,ABDBTRN,ZADBTRN,6)
static A68_483   BBDBTRN = {"BUS"}; 
A_GISVEC(A68_VC ,CBDBTRN,BBDBTRN,3)
static A68_291   DBDBTRN = {"CASE"}; 
A_GISVEC(A68_VC ,EBDBTRN,DBDBTRN,4)
static A68_487   FBDBTRN = {"COMPONENT"}; 
A_GISVEC(A68_VC ,GBDBTRN,FBDBTRN,9)
static A68_488   HBDBTRN = {"CONFIGURATION"}; 
A_GISVEC(A68_VC ,IBDBTRN,HBDBTRN,13)
static A68_489   JBDBTRN = {"CONSTANT"}; 
A_GISVEC(A68_VC ,KBDBTRN,JBDBTRN,8)
static A68_490   LBDBTRN = {"DISCONNECT"}; 
A_GISVEC(A68_VC ,MBDBTRN,LBDBTRN,10)
static A68_484   NBDBTRN = {"DOWNTO"}; 
A_GISVEC(A68_VC ,OBDBTRN,NBDBTRN,6)
static A68_291   PBDBTRN = {"ELSE"}; 
A_GISVEC(A68_VC ,QBDBTRN,PBDBTRN,4)
static A68_485   RBDBTRN = {"ELSIF"}; 
A_GISVEC(A68_VC ,SBDBTRN,RBDBTRN,5)
static A68_483   TBDBTRN = {"END"}; 
A_GISVEC(A68_VC ,UBDBTRN,TBDBTRN,3)
static A68_484   VBDBTRN = {"ENTITY"}; 
A_GISVEC(A68_VC ,WBDBTRN,VBDBTRN,6)
static A68_291   XBDBTRN = {"EXIT"}; 
A_GISVEC(A68_VC ,YBDBTRN,XBDBTRN,4)
static A68_291   ZBDBTRN = {"FILE"}; 
A_GISVEC(A68_VC ,ACDBTRN,ZBDBTRN,4)
static A68_483   BCDBTRN = {"FOR"}; 
A_GISVEC(A68_VC ,CCDBTRN,BCDBTRN,3)
static A68_489   DCDBTRN = {"FUNCTION"}; 
A_GISVEC(A68_VC ,ECDBTRN,DCDBTRN,8)
static A68_489   FCDBTRN = {"GENERATE"}; 
A_GISVEC(A68_VC ,GCDBTRN,FCDBTRN,8)
static A68_491   HCDBTRN = {"GENERIC"}; 
A_GISVEC(A68_VC ,ICDBTRN,HCDBTRN,7)
static A68_485   JCDBTRN = {"GROUP"}; 
A_GISVEC(A68_VC ,KCDBTRN,JCDBTRN,5)
static A68_491   LCDBTRN = {"GUARDED"}; 
A_GISVEC(A68_VC ,MCDBTRN,LCDBTRN,7)
static A68_492   NCDBTRN = {"IF"}; 
A_GISVEC(A68_VC ,OCDBTRN,NCDBTRN,2)
static A68_484   PCDBTRN = {"IMPURE"}; 
A_GISVEC(A68_VC ,QCDBTRN,PCDBTRN,6)
static A68_492   RCDBTRN = {"IN"}; 
A_GISVEC(A68_VC ,SCDBTRN,RCDBTRN,2)
static A68_489   TCDBTRN = {"INERTIAL"}; 
A_GISVEC(A68_VC ,UCDBTRN,TCDBTRN,8)
static A68_490   VCDBTRN = {"INITIALIZE"}; 
A_GISVEC(A68_VC ,WCDBTRN,VCDBTRN,10)
static A68_485   XCDBTRN = {"INOUT"}; 
A_GISVEC(A68_VC ,YCDBTRN,XCDBTRN,5)
static A68_492   ZCDBTRN = {"IS"}; 
A_GISVEC(A68_VC ,ADDBTRN,ZCDBTRN,2)
static A68_485   BDDBTRN = {"LABEL"}; 
A_GISVEC(A68_VC ,CDDBTRN,BDDBTRN,5)
static A68_491   DDDBTRN = {"LIBRARY"}; 
A_GISVEC(A68_VC ,EDDBTRN,DDDBTRN,7)
static A68_491   FDDBTRN = {"LINKAGE"}; 
A_GISVEC(A68_VC ,GDDBTRN,FDDBTRN,7)
static A68_491   HDDBTRN = {"LITERAL"}; 
A_GISVEC(A68_VC ,IDDBTRN,HDDBTRN,7)
static A68_291   JDDBTRN = {"LOOP"}; 
A_GISVEC(A68_VC ,KDDBTRN,JDDBTRN,4)
static A68_483   LDDBTRN = {"MAP"}; 
A_GISVEC(A68_VC ,MDDBTRN,LDDBTRN,3)
static A68_483   NDDBTRN = {"MOD"}; 
A_GISVEC(A68_VC ,ODDBTRN,NDDBTRN,3)
static A68_291   PDDBTRN = {"NAND"}; 
A_GISVEC(A68_VC ,QDDBTRN,PDDBTRN,4)
static A68_483   RDDBTRN = {"NEW"}; 
A_GISVEC(A68_VC ,SDDBTRN,RDDBTRN,3)
static A68_291   TDDBTRN = {"NEXT"}; 
A_GISVEC(A68_VC ,UDDBTRN,TDDBTRN,4)
static A68_483   VDDBTRN = {"NOR"}; 
A_GISVEC(A68_VC ,WDDBTRN,VDDBTRN,3)
static A68_483   XDDBTRN = {"NOT"}; 
A_GISVEC(A68_VC ,YDDBTRN,XDDBTRN,3)
static A68_291   ZDDBTRN = {"NULL"}; 
A_GISVEC(A68_VC ,AEDBTRN,ZDDBTRN,4)
static A68_492   BEDBTRN = {"OF"}; 
A_GISVEC(A68_VC ,CEDBTRN,BEDBTRN,2)
static A68_492   DEDBTRN = {"ON"}; 
A_GISVEC(A68_VC ,EEDBTRN,DEDBTRN,2)
static A68_291   FEDBTRN = {"OPEN"}; 
A_GISVEC(A68_VC ,GEDBTRN,FEDBTRN,4)
static A68_492   HEDBTRN = {"OR"}; 
A_GISVEC(A68_VC ,IEDBTRN,HEDBTRN,2)
static A68_484   JEDBTRN = {"OTHERS"}; 
A_GISVEC(A68_VC ,KEDBTRN,JEDBTRN,6)
static A68_483   LEDBTRN = {"OUT"}; 
A_GISVEC(A68_VC ,MEDBTRN,LEDBTRN,3)
static A68_491   NEDBTRN = {"PACKAGE"}; 
A_GISVEC(A68_VC ,OEDBTRN,NEDBTRN,7)
static A68_291   PEDBTRN = {"PORT"}; 
A_GISVEC(A68_VC ,QEDBTRN,PEDBTRN,4)
static A68_487   REDBTRN = {"POSTPONED"}; 
A_GISVEC(A68_VC ,SEDBTRN,REDBTRN,9)
static A68_487   TEDBTRN = {"PROCEDURE"}; 
A_GISVEC(A68_VC ,UEDBTRN,TEDBTRN,9)
static A68_491   VEDBTRN = {"PROCESS"}; 
A_GISVEC(A68_VC ,WEDBTRN,VEDBTRN,7)
static A68_291   XEDBTRN = {"PURE"}; 
A_GISVEC(A68_VC ,YEDBTRN,XEDBTRN,4)
static A68_485   ZEDBTRN = {"RANGE"}; 
A_GISVEC(A68_VC ,AFDBTRN,ZEDBTRN,5)
static A68_484   BFDBTRN = {"RECORD"}; 
A_GISVEC(A68_VC ,CFDBTRN,BFDBTRN,6)
static A68_489   DFDBTRN = {"REGISTER"}; 
A_GISVEC(A68_VC ,EFDBTRN,DFDBTRN,8)
static A68_484   FFDBTRN = {"REJECT"}; 
A_GISVEC(A68_VC ,GFDBTRN,FFDBTRN,6)
static A68_483   HFDBTRN = {"REM"}; 
A_GISVEC(A68_VC ,IFDBTRN,HFDBTRN,3)
static A68_484   JFDBTRN = {"REPORT"}; 
A_GISVEC(A68_VC ,KFDBTRN,JFDBTRN,6)
static A68_484   LFDBTRN = {"RETURN"}; 
A_GISVEC(A68_VC ,MFDBTRN,LFDBTRN,6)
static A68_483   NFDBTRN = {"ROL"}; 
A_GISVEC(A68_VC ,OFDBTRN,NFDBTRN,3)
static A68_483   PFDBTRN = {"ROR"}; 
A_GISVEC(A68_VC ,QFDBTRN,PFDBTRN,3)
static A68_484   RFDBTRN = {"SELECT"}; 
A_GISVEC(A68_VC ,SFDBTRN,RFDBTRN,6)
static A68_489   TFDBTRN = {"SEVERITY"}; 
A_GISVEC(A68_VC ,UFDBTRN,TFDBTRN,8)
static A68_484   VFDBTRN = {"SHARED"}; 
A_GISVEC(A68_VC ,WFDBTRN,VFDBTRN,6)
static A68_484   XFDBTRN = {"SIGNAL"}; 
A_GISVEC(A68_VC ,YFDBTRN,XFDBTRN,6)
static A68_483   ZFDBTRN = {"SLA"}; 
A_GISVEC(A68_VC ,AGDBTRN,ZFDBTRN,3)
static A68_483   BGDBTRN = {"SLL"}; 
A_GISVEC(A68_VC ,CGDBTRN,BGDBTRN,3)
static A68_483   DGDBTRN = {"SRA"}; 
A_GISVEC(A68_VC ,EGDBTRN,DGDBTRN,3)
static A68_483   FGDBTRN = {"SRL"}; 
A_GISVEC(A68_VC ,GGDBTRN,FGDBTRN,3)
static A68_491   HGDBTRN = {"SUBTYPE"}; 
A_GISVEC(A68_VC ,IGDBTRN,HGDBTRN,7)
static A68_291   JGDBTRN = {"THEN"}; 
A_GISVEC(A68_VC ,KGDBTRN,JGDBTRN,4)
static A68_492   LGDBTRN = {"TO"}; 
A_GISVEC(A68_VC ,MGDBTRN,LGDBTRN,2)
static A68_487   NGDBTRN = {"TRANSPORT"}; 
A_GISVEC(A68_VC ,OGDBTRN,NGDBTRN,9)
static A68_291   PGDBTRN = {"TYPE"}; 
A_GISVEC(A68_VC ,QGDBTRN,PGDBTRN,4)
static A68_490   RGDBTRN = {"UNAFFECTED"}; 
A_GISVEC(A68_VC ,SGDBTRN,RGDBTRN,10)
static A68_485   TGDBTRN = {"UNITS"}; 
A_GISVEC(A68_VC ,UGDBTRN,TGDBTRN,5)
static A68_485   VGDBTRN = {"UNTIL"}; 
A_GISVEC(A68_VC ,WGDBTRN,VGDBTRN,5)
static A68_483   XGDBTRN = {"USE"}; 
A_GISVEC(A68_VC ,YGDBTRN,XGDBTRN,3)
static A68_489   ZGDBTRN = {"VARIABLE"}; 
A_GISVEC(A68_VC ,AHDBTRN,ZGDBTRN,8)
static A68_291   BHDBTRN = {"WAIT"}; 
A_GISVEC(A68_VC ,CHDBTRN,BHDBTRN,4)
static A68_291   DHDBTRN = {"WHEN"}; 
A_GISVEC(A68_VC ,EHDBTRN,DHDBTRN,4)
static A68_485   FHDBTRN = {"WHILE"}; 
A_GISVEC(A68_VC ,GHDBTRN,FHDBTRN,5)
static A68_291   HHDBTRN = {"WITH"}; 
A_GISVEC(A68_VC ,IHDBTRN,HHDBTRN,4)
static A68_291   JHDBTRN = {"XNOR"}; 
A_GISVEC(A68_VC ,KHDBTRN,JHDBTRN,4)
static A68_483   LHDBTRN = {"XOR"}; 
A_GISVEC(A68_VC ,MHDBTRN,LHDBTRN,3)
static A68_46  OHDBTRN_vhdl_reserved;
static A68_INT  PHDBTRN_lc_bias;
static A68_VC  XIDBTRN_symbolic_name_default_uc;
static A68_483   ZIDBTRN = {"SYM"}; 
A_GISVEC(A68_VC ,AJDBTRN,ZIDBTRN,3)
static A68_VC  CJDBTRN_symbolic_name_default_lc;
static A68_483   EJDBTRN = {"sym"}; 
A_GISVEC(A68_VC ,FJDBTRN,EJDBTRN,3)
static A68_BOOL  HJDBTRN_apply_vhdl_rules;
static A68_506   JODBTRN = {"Name clash: can`t change original name."}; 
A_GISVEC(A68_VC ,KODBTRN,JODBTRN,39)
typedef struct   /* env of non-global proc */
{
A68_VC  Name;
} VHDBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_CHAR  QJDBTRN_prefix;
A_PAD_CHAR(PAD_155)
A68_INT  Nameno;
A_PAD_INT(PAD_157)
A68_BOOL  Lower_case;
A_PAD_BOOL(PAD_158)
A68_476 ** List;
A68_INT  Sort;
A_PAD_INT(PAD_159)
} UJDBTRN_modify_name;
typedef struct   /* env of non-global proc */
{
A68_BOOL * NMDBTRN_chfn;
A68_252 ** JMDBTRN_newfd;
A68_252 * Fdec;
} SMDBTRN_change_fndec;
typedef struct   /* env of non-global proc */
{
A68_254 * KMDBTRN_nametypes;
A68_501  QMDBTRN_change_fndec;
A68_BOOL * OMDBTRN_chnt;
A68_INT * MMDBTRN_min_change_num;
} ANDBTRN_change_local_name;
typedef struct   /* env of non-global proc */
{
A68_INT * LMDBTRN_max_port_num;
A68_502  YMDBTRN_change_local_name;
A68_504  RNDBTRN_do_names;
} TNDBTRN_do_names;
typedef struct   /* env of non-global proc */
{
A68_502  YMDBTRN_change_local_name;
} EODBTRN_examine_name;
typedef struct   /* env of non-global proc */
{
A68_255 * Env;
A68_505  CODBTRN_examine_name;
} SODBTRN_add_tag_name;
typedef struct   /* env of non-global proc */
{
A68_255 * Env;
A68_505  CODBTRN_examine_name;
A68_508  DPDBTRN_add_type_name;
A68_252 * Fdec;
} FPDBTRN_add_type_name;
typedef struct   /* env of non-global proc */
{
A68_255 * Env;
A68_505  CODBTRN_examine_name;
A68_508  DPDBTRN_add_type_name;
A68_507  QODBTRN_add_tag_name;
A68_254 * KMDBTRN_nametypes;
A68_509  QQDBTRN_do_unit;
} SQDBTRN_do_unit;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Old_scope_rules;
A_PAD_BOOL(PAD_160)
A68_476 ** IMDBTRN_dec_names_list;
A68_504  RNDBTRN_do_names;
A68_509  QQDBTRN_do_unit;
A68_510  LRDBTRN_do_series;
} NRDBTRN_do_series;
typedef struct   /* env of non-global proc */
{
A68_504  RNDBTRN_do_names;
A68_476 ** IMDBTRN_dec_names_list;
} XSDBTRN_dec_names;
typedef struct   /* env of non-global proc */
{
A68_510  LRDBTRN_do_series;
} ETDBTRN_dec_unit;
typedef struct   /* env of non-global proc */
{
A68_254 * KMDBTRN_nametypes;
A68_502  YMDBTRN_change_local_name;
A68_476 ** IMDBTRN_dec_names_list;
} PTDBTRN_pre_pass_unit;
typedef struct   /* env of non-global proc */
{
A68_INT  MVDBTRN_max_clno;
A_PAD_INT(PAD_162)
} QVDBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  MVDBTRN_max_clno;
A_PAD_INT(PAD_163)
} BWDBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  MVDBTRN_max_clno;
A_PAD_INT(PAD_164)
} KWDBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  MVDBTRN_max_clno;
A_PAD_INT(PAD_165)
} WWDBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_BOOL * EXDBTRN_changed;
A68_265 ** FXDBTRN_new;
A68_108  Msg;
A68_262 *** GXDBTRN_newptr;
} JXDBTRN_change_closure;
typedef struct   /* env of non-global proc */
{
A68_513  TVDBTRN_translations;
A68_476 ** DXDBTRN_outer_names;
A68_262 *** GXDBTRN_newptr;
A68_265 ** FXDBTRN_new;
A68_32  EWDBTRN_typealiases;
A68_319  HXDBTRN_change_closure;
A68_515  NWDBTRN_typebodies;
} CZDBTRN_test_outer_name;
typedef struct   /* env of non-global proc */
{
A68_513  TVDBTRN_translations;
A68_515  NWDBTRN_typebodies;
A68_32  EWDBTRN_typealiases;
A68_260  ZWDBTRN_portname_changes;
A68_BOOL  EVDBTRN_old_scope_rules;
A_PAD_BOOL(PAD_168)
A68_BOOL * FVDBTRN_name_all_inputs;
A68_BOOL * HVDBTRN_name_all_outputs;
A68_319  HXDBTRN_change_closure;
A68_262 *** GXDBTRN_newptr;
} JAEBTRN_update_outer;
typedef struct   /* env of non-global proc */
{
A68_BOOL * VJDBTRN_changed;
A68_VC * XJDBTRN_newname;
A68_BOOL * WJDBTRN_add_prefix;
A68_CHAR  QJDBTRN_prefix;
A_PAD_CHAR(PAD_154)
A68_INT  Nameno;
A_PAD_INT(PAD_156)
} AKDBTRN_change_name;
typedef struct   /* env of non-global proc */
{
A68_252 * ENDBTRN_fdn;
} INDBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_504  RNDBTRN_do_names;
A68_476 ** QRDBTRN_ser_names_list;
} VRDBTRN_ser_names;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Old_scope_rules;
A_PAD_BOOL(PAD_161)
A68_509  QQDBTRN_do_unit;
A68_476 ** QRDBTRN_ser_names_list;
A68_510  LRDBTRN_do_series;
} CSDBTRN_ser_unit;
typedef struct   /* env of non-global proc */
{
A68_168  QXDBTRN_alts;
} AYDBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_BOOL * LAEBTRN_ec;
A68_255 ** KAEBTRN_env;
A68_261  O;
} TAEBTRN_change_env;
typedef struct   /* env of non-global proc */
{
A68_255 ** KAEBTRN_env;
A68_513  TVDBTRN_translations;
A68_476 ** WAEBTRN_inner_names;
A68_BOOL * MAEBTRN_ac;
A68_522  RAEBTRN_change_env;
} ABEBTRN_attr_env_action;
typedef struct   /* env of non-global proc */
{
A68_255 ** KAEBTRN_env;
A68_513  TVDBTRN_translations;
A68_476 ** WAEBTRN_inner_names;
A68_BOOL * NAEBTRN_ic;
A68_522  RAEBTRN_change_env;
} WBEBTRN_int_env_action;
typedef struct   /* env of non-global proc */
{
A68_255 ** KAEBTRN_env;
A68_513  TVDBTRN_translations;
A68_476 ** WAEBTRN_inner_names;
A68_515  NWDBTRN_typebodies;
A68_BOOL * OAEBTRN_tc;
A68_32  EWDBTRN_typealiases;
} SCEBTRN_type_env_action;
typedef struct   /* env of non-global proc */
{
A68_255 ** KAEBTRN_env;
A68_513  TVDBTRN_translations;
A68_476 ** WAEBTRN_inner_names;
A68_BOOL * PAEBTRN_cc;
A68_522  RAEBTRN_change_env;
} BEEBTRN_const_env_action;
typedef struct   /* env of non-global proc */
{
A68_255 ** KAEBTRN_env;
} XEEBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_54  AFEBTRN_fn_changes;
A68_BOOL * QAEBTRN_fc;
A68_522  RAEBTRN_change_env;
A68_255 ** KAEBTRN_env;
} KFEBTRN_update_fndec;
typedef struct   /* env of non-global proc */
{
A68_255 ** KAEBTRN_env;
A68_513  TVDBTRN_translations;
A68_476 ** WAEBTRN_inner_names;
A68_528  IFEBTRN_update_fndec;
A68_260  ZWDBTRN_portname_changes;
} VGEBTRN_ofn_env_action;
typedef struct   /* env of non-global proc */
{
A68_255 ** KAEBTRN_env;
A68_476 ** WAEBTRN_inner_names;
A68_528  IFEBTRN_update_fndec;
} HHEBTRN_ifn_env_action;
typedef struct   /* env of non-global proc */
{
A68_255 ** KAEBTRN_env;
A68_BOOL  EVDBTRN_old_scope_rules;
A_PAD_BOOL(PAD_167)
A68_BOOL * FVDBTRN_name_all_inputs;
A68_BOOL * HVDBTRN_name_all_outputs;
A68_476 ** WAEBTRN_inner_names;
A68_BOOL * QAEBTRN_fc;
A68_522  RAEBTRN_change_env;
} SHEBTRN_fndec_action;
typedef struct   /* env of non-global proc */
{
A68_529  QHEBTRN_fndec_action;
} YIEBTRN_declaration;
typedef struct   /* env of non-global proc */
{
A68_256 * HBEBTRN_attrs;
} LBEBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_257 * DCEBTRN_ints;
} HCEBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_258 * GDEBTRN_types;
} KDEBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_259 * IEEBTRN_consts;
} MEEBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_260 * OFEBTRN_fns;
} SFEBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  AGEBTRN_nttop;
A_PAD_INT(PAD_166)
} EGEBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_260  YHEBTRN_fns;
} CIEBTRN_generator;

A68_VOID  OYCBTRN_names_old_scope_rules(A68_466  *ReturnedValue);

A68_VOID  RYCBTRN_names_name_all_inputs(A68_466  *ReturnedValue);

A68_VOID  UYCBTRN_names_name_all_outputs(A68_466  *ReturnedValue);

A68_VOID  XYCBTRN_names_name_all_ports(A68_466  *ReturnedValue);

A68_VOID  AZCBTRN_names_vhdl_rules(A68_466  *ReturnedValue);

A_STATIC A68_INT  UZCBTRN_anonymous(A68_VC  Name, A68_BOOL  Strops);

A_STATIC A68_INT  RHDBTRN_vhdl_illegal(A68_VC  Name);

A_STATIC A68_VOID  UHDBTRN_generator(A68_BOOL  SHDBTRN_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_476 * PIDBTRN_find_name(A68_VC  Name, A68_476 * List);

A_STATIC A68_VOID  UIDBTRN_generator(A68_BOOL  TIDBTRN_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  OJDBTRN_test_name(A68_VC  Name, A68_INT  Nameno, A68_INT  Sort, A68_476 ** List, A68_BOOL  Lower_case, A68_BOOL  Port, A68_475  *ReturnedValue);

A_STATIC A68_VOID  TJDBTRN_modify_name(A68_VC  N, A68_475  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZJDBTRN_change_name(void *NonLocals);

A_STATIC A68_VOID  NLDBTRN_dec_name(A68_261  O, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  HMDBTRN_fndec_names(A68_252 * Fdec, A68_419 * Tprocs, A68_255 * Env, A68_BOOL  Old_scope_rules, A68_BOOL  Name_all_inputs, A68_BOOL  Name_all_outputs, A68_252 ** Portname_change, A68_476 * Inner_names, A68_416  *ReturnedValue);

A_STATIC A68_252 * RMDBTRN_change_fndec(void *NonLocals);

A_STATIC A68_VOID  ZMDBTRN_change_local_name(A68_INT  Nameno, A68_BOOL  Port, A68_476 ** Names_list, void *NonLocals);

A_STATIC A68_VOID  HNDBTRN_generator(A68_BOOL  FNDBTRN_anonymous, A68_254  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SNDBTRN_do_names(A68_217 * N, A68_BOOL  Port, A68_476 ** Names_list, A68_403  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DODBTRN_examine_name(A68_VC  Name, A68_INT  Sort, A68_INT  Idno, A68_476 ** Names_list, void *NonLocals);

A_STATIC A68_VOID  RODBTRN_add_tag_name(A68_INT  Typeno, A68_INT  Altno, A68_476 ** Names_list, void *NonLocals);

A_STATIC A68_VOID  EPDBTRN_add_type_name(A68_154  Ty, A68_476 ** Names_list, void *NonLocals);

A_STATIC A68_VOID  RQDBTRN_do_unit(A68_176  U, A68_476 ** Names_list, void *NonLocals);

A_STATIC A68_VOID  MRDBTRN_do_series(A68_199 * User, A68_419 * Tprocs, void *NonLocals);

A_STATIC A68_VOID  URDBTRN_ser_names(A68_217 * N, A68_419 * Tp, A68_403  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BSDBTRN_ser_unit(A68_176  U, A68_419 * Tprocs, A68_395  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WSDBTRN_dec_names(A68_217 * N, A68_419 * Tprocs, A68_403  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DTDBTRN_dec_unit(A68_176  U, A68_419 * Tprocs, A68_395  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OTDBTRN_pre_pass_unit(A68_176  U, A68_419 * Tprocs, A68_395  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZTDBTRN_pre_pass_dec(A68_237  Dec, A68_419 * Tprocs, A68_399  *ReturnedValue);

A68_VOID  CVDBTRN_transform_names(A68_265 * Closure, A68_466  Options, A68_108  Msg, A68_418  *ReturnedValue);

A_STATIC A68_VOID  PVDBTRN_generator(A68_BOOL  NVDBTRN_anonymous, A68_513  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  AWDBTRN_generator(A68_BOOL  YVDBTRN_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JWDBTRN_generator(A68_BOOL  HWDBTRN_anonymous, A68_515  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VWDBTRN_generator(A68_BOOL  TWDBTRN_anonymous, A68_260  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IXDBTRN_change_closure(void *NonLocals);

A_STATIC A68_VOID  OXDBTRN_test_type_body(A68_167  Body, A68_INT  Idno, A68_476 ** Names_list, A68_389  *ReturnedValue);

A_STATIC A68_VOID  ZXDBTRN_generator(A68_BOOL  XXDBTRN_anonymous, A68_168  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  BZDBTRN_test_outer_name(A68_261  O, void *NonLocals);

A_STATIC A68_VOID  IAEBTRN_update_outer(A68_261  O, void *NonLocals);

A_STATIC A68_255 * SAEBTRN_change_env(void *NonLocals);

A_STATIC A68_VOID  ZAEBTRN_attr_env_action(A68_INT  Attrno, void *NonLocals);

A_STATIC A68_VOID  KBEBTRN_generator(A68_BOOL  IBEBTRN_anonymous, A68_256  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VBEBTRN_int_env_action(A68_INT  Intno, void *NonLocals);

A_STATIC A68_VOID  GCEBTRN_generator(A68_BOOL  ECEBTRN_anonymous, A68_257  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RCEBTRN_type_env_action(A68_INT  Typeno, void *NonLocals);

A_STATIC A68_VOID  JDEBTRN_generator(A68_BOOL  HDEBTRN_anonymous, A68_258  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  AEEBTRN_const_env_action(A68_INT  Constno, void *NonLocals);

A_STATIC A68_VOID  LEEBTRN_generator(A68_BOOL  JEEBTRN_anonymous, A68_259  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WEEBTRN_generator(A68_BOOL  UEEBTRN_anonymous, A68_54  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JFEBTRN_update_fndec(A68_475  Ftc, A68_INT  Fnno, A68_252 * Fdec, A68_252 * Portname_change, void *NonLocals);

A_STATIC A68_VOID  RFEBTRN_generator(A68_BOOL  PFEBTRN_anonymous, A68_260  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DGEBTRN_generator(A68_BOOL  BGEBTRN_anonymous, A68_254  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  UGEBTRN_ofn_env_action(A68_INT  Fnno, void *NonLocals);

A_STATIC A68_VOID  GHEBTRN_ifn_env_action(A68_INT  Fnno, void *NonLocals);

A_STATIC A68_VOID  RHEBTRN_fndec_action(A68_INT  Fnno, A68_252 ** Portname_change, A68_419 * Tprocs, void *NonLocals);

A_STATIC A68_VOID  BIEBTRN_generator(A68_BOOL  ZHEBTRN_anonymous, A68_260  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XIEBTRN_declaration(A68_237  Dec, A68_419 * Tprocs, A68_399  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KBEBTRN_generator(A68_BOOL  IBEBTRN_anonymous, A68_256  *ReturnedValue, void *NonLocals)
#define NL(x) (((LBEBTRN_generator *)NonLocals)->x)
{ 
A68_256  MBEBTRN;  /* clause result */
A68_256  NBEBTRN;  /* OPERATORS - dynamic generator */
{ 
NBEBTRN.upb = (*NL(HBEBTRN_attrs)).upb ;
( IBEBTRN_anonymous? A_VLOC(A68_135 *,NBEBTRN): A_VHEAP(A68_135 *,NBEBTRN) );
MBEBTRN = NBEBTRN;
} 
*ReturnedValue = (MBEBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  GCEBTRN_generator(A68_BOOL  ECEBTRN_anonymous, A68_257  *ReturnedValue, void *NonLocals)
#define NL(x) (((HCEBTRN_generator *)NonLocals)->x)
{ 
A68_257  ICEBTRN;  /* clause result */
A68_257  JCEBTRN;  /* OPERATORS - dynamic generator */
{ 
JCEBTRN.upb = (*NL(DCEBTRN_ints)).upb ;
( ECEBTRN_anonymous? A_VLOC(A68_151 *,JCEBTRN): A_VHEAP(A68_151 *,JCEBTRN) );
ICEBTRN = JCEBTRN;
} 
*ReturnedValue = (ICEBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  JDEBTRN_generator(A68_BOOL  HDEBTRN_anonymous, A68_258  *ReturnedValue, void *NonLocals)
#define NL(x) (((KDEBTRN_generator *)NonLocals)->x)
{ 
A68_258  LDEBTRN;  /* clause result */
A68_258  MDEBTRN;  /* OPERATORS - dynamic generator */
{ 
MDEBTRN.upb = (*NL(GDEBTRN_types)).upb ;
( HDEBTRN_anonymous? A_VLOC(A68_169 *,MDEBTRN): A_VHEAP(A68_169 *,MDEBTRN) );
LDEBTRN = MDEBTRN;
} 
*ReturnedValue = (LDEBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  LEEBTRN_generator(A68_BOOL  JEEBTRN_anonymous, A68_259  *ReturnedValue, void *NonLocals)
#define NL(x) (((MEEBTRN_generator *)NonLocals)->x)
{ 
A68_259  NEEBTRN;  /* clause result */
A68_259  OEEBTRN;  /* OPERATORS - dynamic generator */
{ 
OEEBTRN.upb = (*NL(IEEBTRN_consts)).upb ;
( JEEBTRN_anonymous? A_VLOC(A68_175 *,OEEBTRN): A_VHEAP(A68_175 *,OEEBTRN) );
NEEBTRN = OEEBTRN;
} 
*ReturnedValue = (NEEBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  RFEBTRN_generator(A68_BOOL  PFEBTRN_anonymous, A68_260  *ReturnedValue, void *NonLocals)
#define NL(x) (((SFEBTRN_generator *)NonLocals)->x)
{ 
A68_260  TFEBTRN;  /* clause result */
A68_260  UFEBTRN;  /* OPERATORS - dynamic generator */
{ 
UFEBTRN.upb = (*NL(OFEBTRN_fns)).upb ;
( PFEBTRN_anonymous? A_VLOC(A68_252 *,UFEBTRN): A_VHEAP(A68_252 *,UFEBTRN) );
TFEBTRN = UFEBTRN;
} 
*ReturnedValue = (TFEBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  DGEBTRN_generator(A68_BOOL  BGEBTRN_anonymous, A68_254  *ReturnedValue, void *NonLocals)
#define NL(x) (((EGEBTRN_generator *)NonLocals)->x)
{ 
A68_254  FGEBTRN;  /* clause result */
A68_254  GGEBTRN;  /* OPERATORS - dynamic generator */
{ 
GGEBTRN.upb = NL(AGEBTRN_nttop) ;
( BGEBTRN_anonymous? A_VLOC(A68_251 ,GGEBTRN): A_VHEAP(A68_251 ,GGEBTRN) );
FGEBTRN = GGEBTRN;
} 
*ReturnedValue = (FGEBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  BIEBTRN_generator(A68_BOOL  ZHEBTRN_anonymous, A68_260  *ReturnedValue, void *NonLocals)
#define NL(x) (((CIEBTRN_generator *)NonLocals)->x)
{ 
A68_260  DIEBTRN;  /* clause result */
A68_260  EIEBTRN;  /* OPERATORS - dynamic generator */
{ 
EIEBTRN.upb = NL(YHEBTRN_fns).upb ;
( ZHEBTRN_anonymous? A_VLOC(A68_252 *,EIEBTRN): A_VHEAP(A68_252 *,EIEBTRN) );
DIEBTRN = EIEBTRN;
} 
*ReturnedValue = (DIEBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ZJDBTRN_change_name(void *NonLocals)
#define NL(x) (((AKDBTRN_change_name *)NonLocals)->x)
{ 
A68_498  BKDBTRN;  /* collateral clause result */
A68_52  CKDBTRN;  /* OPERATORS - mode -> union mode */
A68_52  DKDBTRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  EKDBTRN;  /* YIELD */
A68_52  FKDBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  GKDBTRN;  /* clause result */
A68_85  HKDBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  IKDBTRN;  /* avoid structure result */
A68_498  JKDBTRN;  /* collateral clause result */
A68_52  KKDBTRN;  /* OPERATORS - mode -> union mode */
A68_52  LKDBTRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  MKDBTRN;  /* YIELD */
A68_52  NKDBTRN;  /* OPERATORS - mode -> union mode */
A68_85  OKDBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  PKDBTRN;  /* avoid structure result */
A_PROC_ENTRY(change_name);
{ 
(*NL(VJDBTRN_changed)) = A68_TRUE;
 /* line 158: */
 /* line 159: */
 /* line 160: */
if ( (*NL(WJDBTRN_add_prefix)) )
{ 
(*NL(WJDBTRN_add_prefix)) = A68_FALSE;
 /* line 161: */
BKDBTRN.data[0] = A_UNITE(CKDBTRN,mode6,6,NL(QJDBTRN_prefix));
EKDBTRN = '_' ;
BKDBTRN.data[1] = A_UNITE(DKDBTRN,mode6,6,EKDBTRN);
BKDBTRN.data[2] = A_UNITE(FKDBTRN,mode7,7,(*NL(XJDBTRN_newname)));
 /* line 162: */
 /* line 163: */
UJBAOSL_oneline( A_HISVEC(HKDBTRN,BKDBTRN,3,A68_52 ), &IKDBTRN );
GKDBTRN = IKDBTRN;
} 
else
{ 
JKDBTRN.data[0] = A_UNITE(KKDBTRN,mode7,7,(*NL(XJDBTRN_newname)));
MKDBTRN = '_' ;
JKDBTRN.data[1] = A_UNITE(LKDBTRN,mode6,6,MKDBTRN);
JKDBTRN.data[2] = A_UNITE(NKDBTRN,mode1,1,NL(Nameno));
 /* line 164: */
 /* line 165: */
UJBAOSL_oneline( A_HISVEC(OKDBTRN,JKDBTRN,3,A68_52 ), &PKDBTRN );
GKDBTRN = PKDBTRN;
} 
(*NL(XJDBTRN_newname)) = GKDBTRN;
} 
A_PROC_EXIT(change_name);
return;
} 
#undef NL

A_STATIC A68_VOID  HNDBTRN_generator(A68_BOOL  FNDBTRN_anonymous, A68_254  *ReturnedValue, void *NonLocals)
#define NL(x) (((INDBTRN_generator *)NonLocals)->x)
{ 
A68_254  JNDBTRN;  /* clause result */
A68_254  KNDBTRN;  /* OPERATORS - dynamic generator */
{ 
KNDBTRN.upb = (*(&(NL(ENDBTRN_fdn)->Nametypes))).upb ;
( FNDBTRN_anonymous? A_VLOC(A68_251 ,KNDBTRN): A_VHEAP(A68_251 ,KNDBTRN) );
JNDBTRN = KNDBTRN;
} 
*ReturnedValue = (JNDBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  URDBTRN_ser_names(A68_217 * N, A68_419 * Tp, A68_403  *ReturnedValue, void *NonLocals)
#define NL(x) (((VRDBTRN_ser_names *)NonLocals)->x)
{ 
A68_403  WRDBTRN;  /* clause result */
A68_403  XRDBTRN;  /* avoid structure result */
A_PROC_ENTRY(ser_names);
 /* line 401: */
A_CALLPROC(NL(RNDBTRN_do_names),(N, A68_FALSE, NL(QRDBTRN_ser_names_list), &XRDBTRN),(N, A68_FALSE, NL(QRDBTRN_ser_names_list), &XRDBTRN,(NL(RNDBTRN_do_names)).nonlocals));
WRDBTRN = XRDBTRN;
A_PROC_EXIT(ser_names);
*ReturnedValue = (WRDBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  BSDBTRN_ser_unit(A68_176  U, A68_419 * Tprocs, A68_395  *ReturnedValue, void *NonLocals)
#define NL(x) (((CSDBTRN_ser_unit *)NonLocals)->x)
{ 
A68_176  DSDBTRN;  /* united object - for case conformity */
A68_199 * ESDBTRN_user;
A68_438  FSDBTRN;  /* CALL */
A68_395  GSDBTRN;  /* avoid structure result */
A68_395  HSDBTRN;  /* collateral clause result */
A68_395  ISDBTRN;  /* clause result */
A_PROC_ENTRY(ser_unit);
 /* line 404: */
 /* line 405: */
{ 
if ( !NL(Old_scope_rules) )
{ 
A_CALLPROC(NL(QQDBTRN_do_unit),(U, NL(QRDBTRN_ser_names_list)),(U, NL(QRDBTRN_ser_names_list),(NL(QQDBTRN_do_unit)).nonlocals));
} 
 /* line 406: */
 /* line 407: */
DSDBTRN = U ;
switch ( DSDBTRN.mode )
{ 
case 29: /* REF STRUCT(REF MODE205,MODE176)  */
ESDBTRN_user = (DSDBTRN.data.mode29);
 /* line 408: */
 /* line 409: */
A_CALLPROC(NL(LRDBTRN_do_series),(ESDBTRN_user, Tprocs),(ESDBTRN_user, Tprocs,(NL(LRDBTRN_do_series)).nonlocals));
break;
default: 
 /* line 410: */
FSDBTRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(FSDBTRN,(U, Tprocs, &GSDBTRN),(U, Tprocs, &GSDBTRN,(FSDBTRN).nonlocals));
GSDBTRN;
break;
} 
 /* line 411: */
HSDBTRN.U = U;
 /* line 412: */
HSDBTRN.C = A68_FALSE;
ISDBTRN = HSDBTRN;
} 
A_PROC_EXIT(ser_unit);
*ReturnedValue = (ISDBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ZXDBTRN_generator(A68_BOOL  XXDBTRN_anonymous, A68_168  *ReturnedValue, void *NonLocals)
#define NL(x) (((AYDBTRN_generator *)NonLocals)->x)
{ 
A68_168  BYDBTRN;  /* clause result */
A68_168  CYDBTRN;  /* OPERATORS - dynamic generator */
{ 
CYDBTRN.upb = NL(QXDBTRN_alts).upb ;
( XXDBTRN_anonymous? A_VLOC(A68_165 ,CYDBTRN): A_VHEAP(A68_165 ,CYDBTRN) );
BYDBTRN = CYDBTRN;
} 
*ReturnedValue = (BYDBTRN);
return;
} 
#undef NL

A_STATIC A68_255 * SAEBTRN_change_env(void *NonLocals)
#define NL(x) (((TAEBTRN_change_env *)NonLocals)->x)
{ 
A68_255 * UAEBTRN;  /* clause result */
A68_255 * VAEBTRN;  /* YIELD */
A_PROC_ENTRY(change_env);
 /* line 622: */
if ( (*NL(LAEBTRN_ec)) )
{ 
UAEBTRN = (*NL(KAEBTRN_env));
} 
else
{ 
(*NL(LAEBTRN_ec)) = A68_TRUE;
 /* line 623: */
VAEBTRN = A_HEAP(A68_255 ) ;
(*VAEBTRN) = (*NL(O).Environ) ;
UAEBTRN = (*NL(KAEBTRN_env)) = VAEBTRN;
} 
A_PROC_EXIT(change_env);
return( UAEBTRN );
} 
#undef NL

A_STATIC A68_VOID  ZAEBTRN_attr_env_action(A68_INT  Attrno, void *NonLocals)
#define NL(x) (((ABEBTRN_attr_env_action *)NonLocals)->x)
{ 
A68_256  BBEBTRN;  /* OPERATORS - simple index */
A68_135 * CBEBTRN_adec;
A68_475  DBEBTRN;  /* clause result */
A68_INT  EBEBTRN;  /* YIELD */
A68_475  FBEBTRN;  /* avoid structure result */
A68_475  GBEBTRN_atc;
A68_256 * HBEBTRN_attrs;
A68_523  JBEBTRN_generator;   /* proc value of non-global proc */
A68_256  OBEBTRN;  /* avoid structure result */
A68_135 * PBEBTRN_newattrdec;
A68_VC * QBEBTRN;  /* YIELD */
A68_256  RBEBTRN;  /* OPERATORS - simple index */
A68_135 ** SBEBTRN;  /* YIELD */
A_PROC_ENTRY(attr_env_action);
 /* line 628: */
 /* line 629: */
{ 
BBEBTRN = (*(&((*NL(KAEBTRN_env))->Attrs))) ;
CBEBTRN_adec = (*(&A_VINDEX(BBEBTRN,Attrno)));
 /* line 630: */
 /* line 631: */
 /* line 632: */
if ( (CBEBTRN_adec!=UAAATRN_nilattrdec) )
{ 
 /* line 633: */
if ( ((*(&(CBEBTRN_adec->Sort)))==OKAATRN_outerdec) )
{ 
 /* line 634: */
EBEBTRN = (*(&((*(&(CBEBTRN_adec->Usage)))->Closureno))) ;
DBEBTRN = (*(&A_VINDEX(NL(TVDBTRN_translations),EBEBTRN)));
} 
else
{ 
 /* line 635: */
if ( ((*(&(CBEBTRN_adec->Sort)))==PKAATRN_localdec) )
{ 
 /* line 636: */
 /* line 637: */
OJDBTRN_test_name( (*(&(CBEBTRN_adec->Attrname))), Attrno, 0, NL(WAEBTRN_inner_names), A68_TRUE, A68_FALSE, &FBEBTRN );
DBEBTRN = FBEBTRN;
} 
else
{ 
DBEBTRN.I = TTCAOST_nullid;
 /* line 638: */
DBEBTRN.C = A68_FALSE;
} 
} 
GBEBTRN_atc = DBEBTRN;
 /* line 640: */
 /* line 641: */
 /* line 642: */
if ( GBEBTRN_atc.C )
{ 
 /* line 643: */
 /* line 645: */
if ( !(*NL(MAEBTRN_ac)) )
{ 
HBEBTRN_attrs = (&(A_CALLPROC(NL(RAEBTRN_change_env),(),((NL(RAEBTRN_change_env)).nonlocals))->Attrs));
 /* line 646: */
(*NL(MAEBTRN_ac)) = A68_TRUE;
 /* line 647: */
A_CLOSURE( JBEBTRN_generator, KBEBTRN_generator, LBEBTRN_generator );
(( LBEBTRN_generator * ) ( JBEBTRN_generator.nonlocals )) -> HBEBTRN_attrs = HBEBTRN_attrs;
 /* line 648: */
A_CALLPROC(JBEBTRN_generator,(A68_FALSE, &OBEBTRN),(A68_FALSE, &OBEBTRN,(JBEBTRN_generator).nonlocals));
A_VASSIGN2((*HBEBTRN_attrs),OBEBTRN,A68_135 *) ;
(*HBEBTRN_attrs) = OBEBTRN;
} 
 /* line 649: */
PBEBTRN_newattrdec = (A_HEAP(A68_135 ));
(*PBEBTRN_newattrdec) = (*CBEBTRN_adec);
 /* line 650: */
QBEBTRN = (&(PBEBTRN_newattrdec->Attrname)) ;
(*QBEBTRN) = GBEBTRN_atc.I;
 /* line 651: */
 /* line 652: */
 /* line 653: */
 /* line 654: */
RBEBTRN = (*(&((*NL(KAEBTRN_env))->Attrs))) ;
SBEBTRN = (&A_VINDEX(RBEBTRN,Attrno)) ;
(*SBEBTRN) = PBEBTRN_newattrdec;
} 
} 
} 
A_PROC_EXIT(attr_env_action);
return;
} 
#undef NL

A_STATIC A68_VOID  VBEBTRN_int_env_action(A68_INT  Intno, void *NonLocals)
#define NL(x) (((WBEBTRN_int_env_action *)NonLocals)->x)
{ 
A68_257  XBEBTRN;  /* OPERATORS - simple index */
A68_151 * YBEBTRN_idec;
A68_475  ZBEBTRN;  /* clause result */
A68_INT  ACEBTRN;  /* YIELD */
A68_475  BCEBTRN;  /* avoid structure result */
A68_475  CCEBTRN_itc;
A68_257 * DCEBTRN_ints;
A68_524  FCEBTRN_generator;   /* proc value of non-global proc */
A68_257  KCEBTRN;  /* avoid structure result */
A68_151 * LCEBTRN_newintdec;
A68_VC * MCEBTRN;  /* YIELD */
A68_257  NCEBTRN;  /* OPERATORS - simple index */
A68_151 ** OCEBTRN;  /* YIELD */
A_PROC_ENTRY(int_env_action);
 /* line 657: */
 /* line 658: */
{ 
XBEBTRN = (*(&((*NL(KAEBTRN_env))->Ints))) ;
YBEBTRN_idec = (*(&A_VINDEX(XBEBTRN,Intno)));
 /* line 659: */
 /* line 660: */
 /* line 661: */
if ( (YBEBTRN_idec!=VAAATRN_nilintdec) )
{ 
 /* line 662: */
if ( ((*(&(YBEBTRN_idec->Sort)))==OKAATRN_outerdec) )
{ 
 /* line 663: */
ACEBTRN = (*(&((*(&(YBEBTRN_idec->Usage)))->Closureno))) ;
ZBEBTRN = (*(&A_VINDEX(NL(TVDBTRN_translations),ACEBTRN)));
} 
else
{ 
 /* line 664: */
if ( ((*(&(YBEBTRN_idec->Sort)))==PKAATRN_localdec) )
{ 
 /* line 665: */
 /* line 666: */
OJDBTRN_test_name( (*(&(YBEBTRN_idec->Intname))), Intno, 0, NL(WAEBTRN_inner_names), A68_TRUE, A68_FALSE, &BCEBTRN );
ZBEBTRN = BCEBTRN;
} 
else
{ 
ZBEBTRN.I = TTCAOST_nullid;
 /* line 667: */
ZBEBTRN.C = A68_FALSE;
} 
} 
CCEBTRN_itc = ZBEBTRN;
 /* line 669: */
 /* line 670: */
 /* line 671: */
if ( CCEBTRN_itc.C )
{ 
 /* line 672: */
 /* line 673: */
if ( !(*NL(NAEBTRN_ic)) )
{ 
DCEBTRN_ints = (&(A_CALLPROC(NL(RAEBTRN_change_env),(),((NL(RAEBTRN_change_env)).nonlocals))->Ints));
 /* line 675: */
(*NL(NAEBTRN_ic)) = A68_TRUE;
 /* line 676: */
A_CLOSURE( FCEBTRN_generator, GCEBTRN_generator, HCEBTRN_generator );
(( HCEBTRN_generator * ) ( FCEBTRN_generator.nonlocals )) -> DCEBTRN_ints = DCEBTRN_ints;
 /* line 677: */
A_CALLPROC(FCEBTRN_generator,(A68_FALSE, &KCEBTRN),(A68_FALSE, &KCEBTRN,(FCEBTRN_generator).nonlocals));
A_VASSIGN2((*DCEBTRN_ints),KCEBTRN,A68_151 *) ;
(*DCEBTRN_ints) = KCEBTRN;
} 
 /* line 678: */
LCEBTRN_newintdec = (A_HEAP(A68_151 ));
(*LCEBTRN_newintdec) = (*YBEBTRN_idec);
 /* line 679: */
MCEBTRN = (&(LCEBTRN_newintdec->Intname)) ;
(*MCEBTRN) = CCEBTRN_itc.I;
 /* line 680: */
 /* line 681: */
 /* line 682: */
 /* line 683: */
NCEBTRN = (*(&((*NL(KAEBTRN_env))->Ints))) ;
OCEBTRN = (&A_VINDEX(NCEBTRN,Intno)) ;
(*OCEBTRN) = LCEBTRN_newintdec;
} 
} 
} 
A_PROC_EXIT(int_env_action);
return;
} 
#undef NL

A_STATIC A68_VOID  RCEBTRN_type_env_action(A68_INT  Typeno, void *NonLocals)
#define NL(x) (((SCEBTRN_type_env_action *)NonLocals)->x)
{ 
A68_258  TCEBTRN;  /* OPERATORS - simple index */
A68_169 * UCEBTRN_tdec;
A68_BOOL  VCEBTRN_is_outer;
A68_475  WCEBTRN;  /* clause result */
A68_INT  XCEBTRN;  /* YIELD */
A68_475  YCEBTRN;  /* avoid structure result */
A68_475  ZCEBTRN_ttc;
A68_389  ADEBTRN;  /* clause result */
A68_INT  BDEBTRN;  /* YIELD */
A68_389  CDEBTRN;  /* avoid structure result */
A68_167  DDEBTRN;  /* OPERATORS - mode -> union mode */
A68_389  EDEBTRN_tbc;
A68_BOOL  FDEBTRN;  /* optbool result */
A68_258 * GDEBTRN_types;
A68_525  IDEBTRN_generator;   /* proc value of non-global proc */
A68_258  NDEBTRN;  /* avoid structure result */
A68_169 * ODEBTRN_newtdec;
A68_VC * PDEBTRN;  /* YIELD */
A68_167 * QDEBTRN;  /* YIELD */
A68_INT  RDEBTRN;  /* YIELD */
A68_INT  SDEBTRN_alias;
A68_136 * TDEBTRN_newusage;
A68_INT * UDEBTRN;  /* YIELD */
A68_136 ** VDEBTRN;  /* YIELD */
A68_258  WDEBTRN;  /* OPERATORS - simple index */
A68_169 ** XDEBTRN;  /* YIELD */
A_PROC_ENTRY(type_env_action);
 /* line 686: */
 /* line 687: */
{ 
TCEBTRN = (*(&((*NL(KAEBTRN_env))->Types))) ;
UCEBTRN_tdec = (*(&A_VINDEX(TCEBTRN,Typeno)));
 /* line 688: */
 /* line 689: */
 /* line 690: */
if ( (UCEBTRN_tdec!=WAAATRN_niltypedec) )
{ 
VCEBTRN_is_outer = ((*(&(UCEBTRN_tdec->Sort)))==OKAATRN_outerdec);
 /* line 691: */
 /* line 692: */
if ( VCEBTRN_is_outer )
{ 
 /* line 693: */
XCEBTRN = (*(&((*(&(UCEBTRN_tdec->Usage)))->Closureno))) ;
WCEBTRN = (*(&A_VINDEX(NL(TVDBTRN_translations),XCEBTRN)));
} 
else
{ 
 /* line 694: */
if ( ((*(&(UCEBTRN_tdec->Sort)))==PKAATRN_localdec) )
{ 
 /* line 695: */
 /* line 696: */
OJDBTRN_test_name( (*(&(UCEBTRN_tdec->Typename))), Typeno, 0, NL(WAEBTRN_inner_names), A68_TRUE, A68_FALSE, &YCEBTRN );
WCEBTRN = YCEBTRN;
} 
else
{ 
WCEBTRN.I = TTCAOST_nullid;
 /* line 697: */
WCEBTRN.C = A68_FALSE;
} 
} 
ZCEBTRN_ttc = WCEBTRN;
 /* line 698: */
 /* line 699: */
if ( VCEBTRN_is_outer )
{ 
 /* line 700: */
BDEBTRN = (*(&((*(&(UCEBTRN_tdec->Usage)))->Closureno))) ;
ADEBTRN = (*(&A_VINDEX(NL(NWDBTRN_typebodies),BDEBTRN)));
} 
else
{ 
 /* line 701: */
if ( ((*(&(UCEBTRN_tdec->Sort)))==PKAATRN_localdec) )
{ 
 /* line 702: */
 /* line 703: */
OXDBTRN_test_type_body( (*(&(UCEBTRN_tdec->Body))), Typeno, NL(WAEBTRN_inner_names), &CDEBTRN );
ADEBTRN = CDEBTRN;
} 
else
{ 
ADEBTRN.T = A_UNITE(DDEBTRN,mode3,3,NYCBTRN_niltypetag);
 /* line 704: */
ADEBTRN.C = A68_FALSE;
} 
} 
EDEBTRN_tbc = ADEBTRN;
 /* line 706: */
 /* line 707: */
FDEBTRN = ZCEBTRN_ttc.C;
if ( ! FDEBTRN )
{FDEBTRN = EDEBTRN_tbc.C;
}
 /* line 708: */
if ( FDEBTRN )
{ 
 /* line 709: */
 /* line 710: */
if ( !(*NL(OAEBTRN_tc)) )
{ 
GDEBTRN_types = (&((*NL(KAEBTRN_env))->Types));
 /* line 712: */
(*NL(OAEBTRN_tc)) = A68_TRUE;
 /* line 713: */
A_CLOSURE( IDEBTRN_generator, JDEBTRN_generator, KDEBTRN_generator );
(( KDEBTRN_generator * ) ( IDEBTRN_generator.nonlocals )) -> GDEBTRN_types = GDEBTRN_types;
 /* line 714: */
A_CALLPROC(IDEBTRN_generator,(A68_FALSE, &NDEBTRN),(A68_FALSE, &NDEBTRN,(IDEBTRN_generator).nonlocals));
A_VASSIGN2((*GDEBTRN_types),NDEBTRN,A68_169 *) ;
(*GDEBTRN_types) = NDEBTRN;
} 
 /* line 715: */
ODEBTRN_newtdec = (A_HEAP(A68_169 ));
(*ODEBTRN_newtdec) = (*UCEBTRN_tdec);
 /* line 716: */
if ( ZCEBTRN_ttc.C )
{ 
PDEBTRN = (&(ODEBTRN_newtdec->Typename)) ;
(*PDEBTRN) = ZCEBTRN_ttc.I;
} 
 /* line 717: */
if ( EDEBTRN_tbc.C )
{ 
QDEBTRN = (&(ODEBTRN_newtdec->Body)) ;
(*QDEBTRN) = EDEBTRN_tbc.T;
} 
 /* line 718: */
 /* line 719: */
 /* line 720: */
if ( VCEBTRN_is_outer )
{ 
RDEBTRN = (*(&((*(&(UCEBTRN_tdec->Usage)))->Closureno))) ;
SDEBTRN_alias = (*(&A_VINDEX(NL(EWDBTRN_typealiases),RDEBTRN)));
 /* line 721: */
 /* line 722: */
 /* line 723: */
if ( (SDEBTRN_alias>0) )
{ 
TDEBTRN_newusage = (A_HEAP(A68_136 ));
(*TDEBTRN_newusage) = (*(*(&(UCEBTRN_tdec->Usage))));
 /* line 724: */
UDEBTRN = (&(TDEBTRN_newusage->Closureno)) ;
(*UDEBTRN) = SDEBTRN_alias;
 /* line 725: */
 /* line 726: */
 /* line 727: */
VDEBTRN = (&(ODEBTRN_newtdec->Usage)) ;
(*VDEBTRN) = TDEBTRN_newusage;
} 
} 
 /* line 728: */
 /* line 729: */
 /* line 730: */
 /* line 731: */
WDEBTRN = (*(&((*NL(KAEBTRN_env))->Types))) ;
XDEBTRN = (&A_VINDEX(WDEBTRN,Typeno)) ;
(*XDEBTRN) = ODEBTRN_newtdec;
} 
} 
} 
A_PROC_EXIT(type_env_action);
return;
} 
#undef NL

A_STATIC A68_VOID  AEEBTRN_const_env_action(A68_INT  Constno, void *NonLocals)
#define NL(x) (((BEEBTRN_const_env_action *)NonLocals)->x)
{ 
A68_259  CEEBTRN;  /* OPERATORS - simple index */
A68_175 * DEEBTRN_cdec;
A68_475  EEEBTRN;  /* clause result */
A68_INT  FEEBTRN;  /* YIELD */
A68_475  GEEBTRN;  /* avoid structure result */
A68_475  HEEBTRN_ctc;
A68_259 * IEEBTRN_consts;
A68_526  KEEBTRN_generator;   /* proc value of non-global proc */
A68_259  PEEBTRN;  /* avoid structure result */
A68_175 * QEEBTRN_newcdec;
A68_VC * REEBTRN;  /* YIELD */
A68_259  SEEBTRN;  /* OPERATORS - simple index */
A68_175 ** TEEBTRN;  /* YIELD */
A_PROC_ENTRY(const_env_action);
 /* line 734: */
 /* line 735: */
{ 
CEEBTRN = (*(&((*NL(KAEBTRN_env))->Consts))) ;
DEEBTRN_cdec = (*(&A_VINDEX(CEEBTRN,Constno)));
 /* line 736: */
 /* line 737: */
 /* line 738: */
if ( (DEEBTRN_cdec!=XAAATRN_nilconstdec) )
{ 
 /* line 739: */
if ( ((*(&(DEEBTRN_cdec->Sort)))==OKAATRN_outerdec) )
{ 
 /* line 740: */
FEEBTRN = (*(&((*(&(DEEBTRN_cdec->Usage)))->Closureno))) ;
EEEBTRN = (*(&A_VINDEX(NL(TVDBTRN_translations),FEEBTRN)));
} 
else
{ 
 /* line 741: */
if ( ((*(&(DEEBTRN_cdec->Sort)))==PKAATRN_localdec) )
{ 
 /* line 742: */
 /* line 743: */
OJDBTRN_test_name( (*(&(DEEBTRN_cdec->Constname))), Constno, 0, NL(WAEBTRN_inner_names), A68_TRUE, A68_FALSE, &GEEBTRN );
EEEBTRN = GEEBTRN;
} 
else
{ 
EEEBTRN.I = TTCAOST_nullid;
 /* line 744: */
EEEBTRN.C = A68_FALSE;
} 
} 
HEEBTRN_ctc = EEEBTRN;
 /* line 746: */
 /* line 747: */
 /* line 748: */
if ( HEEBTRN_ctc.C )
{ 
 /* line 749: */
 /* line 751: */
if ( !(*NL(PAEBTRN_cc)) )
{ 
IEEBTRN_consts = (&(A_CALLPROC(NL(RAEBTRN_change_env),(),((NL(RAEBTRN_change_env)).nonlocals))->Consts));
 /* line 753: */
(*NL(PAEBTRN_cc)) = A68_TRUE;
 /* line 754: */
A_CLOSURE( KEEBTRN_generator, LEEBTRN_generator, MEEBTRN_generator );
(( MEEBTRN_generator * ) ( KEEBTRN_generator.nonlocals )) -> IEEBTRN_consts = IEEBTRN_consts;
 /* line 755: */
A_CALLPROC(KEEBTRN_generator,(A68_FALSE, &PEEBTRN),(A68_FALSE, &PEEBTRN,(KEEBTRN_generator).nonlocals));
A_VASSIGN2((*IEEBTRN_consts),PEEBTRN,A68_175 *) ;
(*IEEBTRN_consts) = PEEBTRN;
} 
 /* line 756: */
QEEBTRN_newcdec = (A_HEAP(A68_175 ));
(*QEEBTRN_newcdec) = (*DEEBTRN_cdec);
 /* line 757: */
REEBTRN = (&(QEEBTRN_newcdec->Constname)) ;
(*REEBTRN) = HEEBTRN_ctc.I;
 /* line 758: */
 /* line 759: */
 /* line 760: */
 /* line 761: */
SEEBTRN = (*(&((*NL(KAEBTRN_env))->Consts))) ;
TEEBTRN = (&A_VINDEX(SEEBTRN,Constno)) ;
(*TEEBTRN) = QEEBTRN_newcdec;
} 
} 
} 
A_PROC_EXIT(const_env_action);
return;
} 
#undef NL

A_STATIC A68_VOID  WEEBTRN_generator(A68_BOOL  UEEBTRN_anonymous, A68_54  *ReturnedValue, void *NonLocals)
#define NL(x) (((XEEBTRN_generator *)NonLocals)->x)
{ 
A68_54  YEEBTRN;  /* clause result */
A68_54  ZEEBTRN;  /* OPERATORS - dynamic generator */
{ 
ZEEBTRN.upb = (*(&((*NL(KAEBTRN_env))->Fns))).upb ;
( UEEBTRN_anonymous? A_VLOC(A68_BOOL ,ZEEBTRN): A_VHEAP(A68_BOOL ,ZEEBTRN) );
YEEBTRN = ZEEBTRN;
} 
*ReturnedValue = (YEEBTRN);
return;
} 
#undef NL
 /* line 767: */
 /* line 768: */
 /* line 769: */

A_STATIC A68_VOID  JFEBTRN_update_fndec(A68_475  Ftc, A68_INT  Fnno, A68_252 * Fdec, A68_252 * Portname_change, void *NonLocals)
#define NL(x) (((KFEBTRN_update_fndec *)NonLocals)->x)
{ 
A68_BOOL  LFEBTRN;  /* optbool result */
A68_BOOL * MFEBTRN_fcn;
A68_252 * NFEBTRN_fn;
A68_260 * OFEBTRN_fns;
A68_517  QFEBTRN_generator;   /* proc value of non-global proc */
A68_260  VFEBTRN;  /* avoid structure result */
A68_252 * WFEBTRN;  /* YIELD */
A68_260  XFEBTRN;  /* OPERATORS - simple index */
A68_252 ** YFEBTRN;  /* YIELD */
A68_VC * ZFEBTRN;  /* YIELD */
A68_INT  AGEBTRN_nttop;
A68_503  CGEBTRN_generator;   /* proc value of non-global proc */
A68_254  HGEBTRN;  /* avoid structure result */
A68_254  IGEBTRN;  /* OPERATORS - assign op */
A68_254 * JGEBTRN;  /* YIELD */
A68_251 * KGEBTRN_oldnt;
A68_251 * LGEBTRN_newnt;
A68_254  MGEBTRN;  /* OPERATORS - trim index */
A68_254  NGEBTRN;  /* OPERATORS - trim index */
A68_254  OGEBTRN;  /* forall yield */
A68_254  PGEBTRN;  /* forall yield */
A68_INT  QGEBTRN;  /* forall loop counter */
A68_VC * RGEBTRN;  /* YIELD */
A_PROC_ENTRY(update_fndec);
 /* line 770: */
LFEBTRN = Ftc.C;
if ( ! LFEBTRN )
{ /* line 771: */
LFEBTRN = (Portname_change!=YAAATRN_nilfndec);
}
 /* line 772: */
if ( LFEBTRN )
{ 
MFEBTRN_fcn = (&A_VINDEX(NL(AFEBTRN_fn_changes),Fnno));
 /* line 773: */
NFEBTRN_fn = Fdec;
 /* line 774: */
 /* line 775: */
 /* line 776: */
if ( !(*MFEBTRN_fcn) )
{ 
(*MFEBTRN_fcn) = A68_TRUE;
 /* line 777: */
 /* line 778: */
 /* line 779: */
if ( !(*NL(QAEBTRN_fc)) )
{ 
OFEBTRN_fns = (&(A_CALLPROC(NL(RAEBTRN_change_env),(),((NL(RAEBTRN_change_env)).nonlocals))->Fns));
 /* line 780: */
(*NL(QAEBTRN_fc)) = A68_TRUE;
 /* line 781: */
A_CLOSURE( QFEBTRN_generator, RFEBTRN_generator, SFEBTRN_generator );
(( SFEBTRN_generator * ) ( QFEBTRN_generator.nonlocals )) -> OFEBTRN_fns = OFEBTRN_fns;
 /* line 782: */
A_CALLPROC(QFEBTRN_generator,(A68_FALSE, &VFEBTRN),(A68_FALSE, &VFEBTRN,(QFEBTRN_generator).nonlocals));
A_VASSIGN2((*OFEBTRN_fns),VFEBTRN,A68_252 *) ;
(*OFEBTRN_fns) = VFEBTRN;
} 
 /* line 783: */
WFEBTRN = A_HEAP(A68_252 ) ;
(*WFEBTRN) = (*Fdec) ;
NFEBTRN_fn = WFEBTRN;
 /* line 784: */
 /* line 785: */
XFEBTRN = (*(&((*NL(KAEBTRN_env))->Fns))) ;
YFEBTRN = (&A_VINDEX(XFEBTRN,Fnno)) ;
(*YFEBTRN) = NFEBTRN_fn;
} 
 /* line 786: */
if ( Ftc.C )
{ 
ZFEBTRN = (&(NFEBTRN_fn->Fnname)) ;
(*ZFEBTRN) = Ftc.I;
} 
 /* line 787: */
 /* line 788: */
 /* line 789: */
if ( (Portname_change!=YAAATRN_nilfndec) )
{ 
AGEBTRN_nttop = (*(&(NFEBTRN_fn->Nametypes))).upb;
 /* line 790: */
A_CLOSURE( CGEBTRN_generator, DGEBTRN_generator, EGEBTRN_generator );
(( EGEBTRN_generator * ) ( CGEBTRN_generator.nonlocals )) -> AGEBTRN_nttop = AGEBTRN_nttop;
 /* line 791: */
A_CALLPROC(CGEBTRN_generator,(A68_FALSE, &HGEBTRN),(A68_FALSE, &HGEBTRN,(CGEBTRN_generator).nonlocals));
IGEBTRN = (*(&(NFEBTRN_fn->Nametypes))) ;
A_VASSIGN2(IGEBTRN,HGEBTRN,A68_251 ) ;
JGEBTRN = (&(NFEBTRN_fn->Nametypes)) ;
(*JGEBTRN) = HGEBTRN;
 /* line 792: */
 /* line 793: */
 /* line 794: */
MGEBTRN = (*(&(Portname_change->Nametypes))) ;
OGEBTRN = A_VTRIM(NGEBTRN,(MGEBTRN),A_VTSCRIPT(&(NGEBTRN.upb),(MGEBTRN).upb,1,AGEBTRN_nttop)) ;
PGEBTRN = (*(&(NFEBTRN_fn->Nametypes))) ;
QGEBTRN = OGEBTRN.upb -1;
if ( QGEBTRN != PGEBTRN.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
KGEBTRN_oldnt = OGEBTRN.data;
LGEBTRN_newnt = PGEBTRN.data;
for (;QGEBTRN-- >= 0;
(KGEBTRN_oldnt++
,LGEBTRN_newnt++
) )
{
 /* line 795: */
 /* line 796: */
RGEBTRN = (&(LGEBTRN_newnt->Name)) ;
(*RGEBTRN) = (*(&(KGEBTRN_oldnt->Name)));
}
 /* line 797: */
 /* line 798: */
} 
} 
A_PROC_EXIT(update_fndec);
return;
} 
#undef NL

A_STATIC A68_VOID  UGEBTRN_ofn_env_action(A68_INT  Fnno, void *NonLocals)
#define NL(x) (((VGEBTRN_ofn_env_action *)NonLocals)->x)
{ 
A68_260  WGEBTRN;  /* OPERATORS - simple index */
A68_252 * XGEBTRN_fdec;
A68_BOOL  YGEBTRN;  /* optbool result */
A68_INT  ZGEBTRN;  /* YIELD */
A68_475  AHEBTRN_ftc;
A68_476  BHEBTRN;  /* collateral clause result */
A68_476 * CHEBTRN;  /* YIELD */
A68_INT  DHEBTRN;  /* YIELD */
A_PROC_ENTRY(ofn_env_action);
 /* line 801: */
 /* line 802: */
{ 
WGEBTRN = (*(&((*NL(KAEBTRN_env))->Fns))) ;
XGEBTRN_fdec = (*(&A_VINDEX(WGEBTRN,Fnno)));
 /* line 803: */
YGEBTRN = (XGEBTRN_fdec!=YAAATRN_nilfndec);
if ( YGEBTRN )
{ /* line 804: */
YGEBTRN = ((*(&(XGEBTRN_fdec->Sort)))==OKAATRN_outerdec);
}
 /* line 805: */
if ( YGEBTRN )
{ 
ZGEBTRN = (*(&((*(&(XGEBTRN_fdec->Usage)))->Closureno))) ;
AHEBTRN_ftc = (*(&A_VINDEX(NL(TVDBTRN_translations),ZGEBTRN)));
 /* line 806: */
BHEBTRN.Id = AHEBTRN_ftc.I;
BHEBTRN.Sort = 0;
BHEBTRN.Idno = 0;
BHEBTRN.Rest = (*NL(WAEBTRN_inner_names));
CHEBTRN = A_HEAP(A68_476 ) ;
(*CHEBTRN) = BHEBTRN ;
(*NL(WAEBTRN_inner_names)) = CHEBTRN;
 /* line 807: */
 /* line 808: */
 /* line 809: */
 /* line 810: */
DHEBTRN = (*(&((*(&(XGEBTRN_fdec->Usage)))->Closureno))) ;
A_CALLPROC(NL(IFEBTRN_update_fndec),(AHEBTRN_ftc, Fnno, XGEBTRN_fdec, (*(&A_VINDEX(NL(ZWDBTRN_portname_changes),DHEBTRN)))),(AHEBTRN_ftc, Fnno, XGEBTRN_fdec, (*(&A_VINDEX(NL(ZWDBTRN_portname_changes),DHEBTRN))),(NL(IFEBTRN_update_fndec)).nonlocals));
} 
} 
A_PROC_EXIT(ofn_env_action);
return;
} 
#undef NL

A_STATIC A68_VOID  GHEBTRN_ifn_env_action(A68_INT  Fnno, void *NonLocals)
#define NL(x) (((HHEBTRN_ifn_env_action *)NonLocals)->x)
{ 
A68_260  IHEBTRN;  /* OPERATORS - simple index */
A68_252 * JHEBTRN_fdec;
A68_BOOL  KHEBTRN;  /* optbool result */
A68_475  LHEBTRN;  /* avoid structure result */
A68_475  MHEBTRN_ftc;
A_PROC_ENTRY(ifn_env_action);
 /* line 813: */
 /* line 814: */
{ 
IHEBTRN = (*(&((*NL(KAEBTRN_env))->Fns))) ;
JHEBTRN_fdec = (*(&A_VINDEX(IHEBTRN,Fnno)));
 /* line 815: */
KHEBTRN = (JHEBTRN_fdec!=YAAATRN_nilfndec);
if ( KHEBTRN )
{ /* line 816: */
KHEBTRN = ((*(&(JHEBTRN_fdec->Sort)))==PKAATRN_localdec);
}
 /* line 817: */
if ( KHEBTRN )
{ 
 /* line 818: */
OJDBTRN_test_name( (*(&(JHEBTRN_fdec->Fnname))), Fnno, 0, NL(WAEBTRN_inner_names), A68_FALSE, A68_FALSE, &LHEBTRN );
MHEBTRN_ftc = LHEBTRN;
 /* line 819: */
 /* line 820: */
 /* line 821: */
A_CALLPROC(NL(IFEBTRN_update_fndec),(MHEBTRN_ftc, Fnno, JHEBTRN_fdec, YAAATRN_nilfndec),(MHEBTRN_ftc, Fnno, JHEBTRN_fdec, YAAATRN_nilfndec,(NL(IFEBTRN_update_fndec)).nonlocals));
} 
} 
A_PROC_EXIT(ifn_env_action);
return;
} 
#undef NL
 /* line 824: */
 /* line 825: */

A_STATIC A68_VOID  RHEBTRN_fndec_action(A68_INT  Fnno, A68_252 ** Portname_change, A68_419 * Tprocs, void *NonLocals)
#define NL(x) (((SHEBTRN_fndec_action *)NonLocals)->x)
{ 
A68_260  THEBTRN;  /* OPERATORS - simple index */
A68_252 * UHEBTRN_fdec;
A68_416  VHEBTRN;  /* clause result */
A68_416  WHEBTRN;  /* avoid structure result */
A68_416  XHEBTRN_ftc;
A68_260  YHEBTRN_fns;
A68_517  AIEBTRN_generator;   /* proc value of non-global proc */
A68_260  FIEBTRN;  /* avoid structure result */
A68_260  GIEBTRN;  /* OPERATORS - assign op */
A68_252 ** HIEBTRN;  /* YIELD */
A_PROC_ENTRY(fndec_action);
 /* line 826: */
 /* line 827: */
{ 
THEBTRN = (*(&((*NL(KAEBTRN_env))->Fns))) ;
UHEBTRN_fdec = (*(&A_VINDEX(THEBTRN,Fnno)));
 /* line 828: */
 /* line 829: */
 /* line 830: */
if ( (UHEBTRN_fdec!=YAAATRN_nilfndec) )
{ 
 /* line 831: */
if ( ((*(&(UHEBTRN_fdec->Sort)))!=QKAATRN_macpardec) )
{ 
 /* line 832: */
 /* line 833: */
 /* line 834: */
 /* line 835: */
 /* line 836: */
 /* line 837: */
HMDBTRN_fndec_names( UHEBTRN_fdec, Tprocs, (*NL(KAEBTRN_env)), NL(EVDBTRN_old_scope_rules), (*NL(FVDBTRN_name_all_inputs)), (*NL(HVDBTRN_name_all_outputs)), Portname_change, (*NL(WAEBTRN_inner_names)), &WHEBTRN );
VHEBTRN = WHEBTRN;
} 
else
{ 
VHEBTRN.F = UHEBTRN_fdec;
 /* line 838: */
VHEBTRN.C = A68_FALSE;
} 
XHEBTRN_ftc = VHEBTRN;
 /* line 840: */
 /* line 841: */
 /* line 842: */
if ( XHEBTRN_ftc.C )
{ 
 /* line 843: */
 /* line 844: */
if ( (*NL(QAEBTRN_fc)) )
{ 
 /* line 845: */
 /* line 846: */
(*UHEBTRN_fdec) = (*XHEBTRN_ftc.F);
} 
else
{ 
YHEBTRN_fns = (*(&(A_CALLPROC(NL(RAEBTRN_change_env),(),((NL(RAEBTRN_change_env)).nonlocals))->Fns)));
 /* line 847: */
(*NL(QAEBTRN_fc)) = A68_TRUE;
 /* line 848: */
A_CLOSURE( AIEBTRN_generator, BIEBTRN_generator, CIEBTRN_generator );
(( CIEBTRN_generator * ) ( AIEBTRN_generator.nonlocals )) -> YHEBTRN_fns = YHEBTRN_fns;
A_CALLPROC(AIEBTRN_generator,(A68_FALSE, &FIEBTRN),(A68_FALSE, &FIEBTRN,(AIEBTRN_generator).nonlocals));
GIEBTRN = A_VASSIGN2(YHEBTRN_fns,FIEBTRN,A68_252 *) ;
A_VASSIGN2(GIEBTRN,YHEBTRN_fns,A68_252 *);
 /* line 849: */
 /* line 850: */
 /* line 851: */
 /* line 852: */
 /* line 853: */
HIEBTRN = (&A_VINDEX(YHEBTRN_fns,Fnno)) ;
(*HIEBTRN) = XHEBTRN_ftc.F;
} 
} 
} 
} 
A_PROC_EXIT(fndec_action);
return;
} 
#undef NL
 /* line 877: */

A_STATIC A68_VOID  XIEBTRN_declaration(A68_237  Dec, A68_419 * Tprocs, A68_399  *ReturnedValue, void *NonLocals)
#define NL(x) (((YIEBTRN_declaration *)NonLocals)->x)
{ 
A68_252 * ZIEBTRN_dummy;
A68_237  AJEBTRN;  /* united object - for case conformity */
A68_130  BJEBTRN_ano;
A68_142  CJEBTRN_ino;
A68_155  DJEBTRN_tno;
A68_170  EJEBTRN_cno;
A68_207  FJEBTRN_fno;
A68_399  GJEBTRN;  /* collateral clause result */
A68_399  HJEBTRN;  /* clause result */
A_PROC_ENTRY(declaration);
 /* line 878: */
 /* line 879: */
{ 
ZIEBTRN_dummy = YAAATRN_nilfndec;
 /* line 880: */
 /* line 881: */
AJEBTRN = Dec ;
switch ( AJEBTRN.mode )
{ 
case 1: /* STRUCT(INT)  */
BJEBTRN_ano = (AJEBTRN.data.mode1);
 /* line 882: */
/*SKIP*/;
break;
case 2: /* STRUCT(INT)  */
CJEBTRN_ino = (AJEBTRN.data.mode2);
 /* line 883: */
/*SKIP*/;
break;
case 3: /* STRUCT(INT)  */
DJEBTRN_tno = (AJEBTRN.data.mode3);
 /* line 884: */
/*SKIP*/;
break;
case 4: /* STRUCT(INT)  */
EJEBTRN_cno = (AJEBTRN.data.mode4);
 /* line 885: */
/*SKIP*/;
break;
case 5: /* STRUCT(INT)  */
FJEBTRN_fno = (AJEBTRN.data.mode5);
 /* line 886: */
A_CALLPROC(NL(QHEBTRN_fndec_action),(FJEBTRN_fno.Fnno, (&ZIEBTRN_dummy), Tprocs),(FJEBTRN_fno.Fnno, (&ZIEBTRN_dummy), Tprocs,(NL(QHEBTRN_fndec_action)).nonlocals));
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 887: */
GJEBTRN.D = Dec;
 /* line 888: */
GJEBTRN.C = A68_FALSE;
HJEBTRN = GJEBTRN;
} 
A_PROC_EXIT(declaration);
*ReturnedValue = (HJEBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  UHDBTRN_generator(A68_BOOL  SHDBTRN_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((VHDBTRN_generator *)NonLocals)->x)
{ 
A68_VC  WHDBTRN;  /* clause result */
A68_VC  XHDBTRN;  /* OPERATORS - dynamic generator */
{ 
XHDBTRN.upb = NL(Name).upb ;
( SHDBTRN_anonymous? A_VLOC(A68_CHAR ,XHDBTRN): A_VHEAP(A68_CHAR ,XHDBTRN) );
WHDBTRN = XHDBTRN;
} 
*ReturnedValue = (WHDBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  TJDBTRN_modify_name(A68_VC  N, A68_475  *ReturnedValue, void *NonLocals)
#define NL(x) (((UJDBTRN_modify_name *)NonLocals)->x)
{ 
A68_BOOL  VJDBTRN_changed;
A68_BOOL  WJDBTRN_add_prefix;
A68_VC  XJDBTRN_newname;
A68_319  YJDBTRN_change_name;   /* proc value of non-global proc */
A68_INT  QKDBTRN;  /* YIELD */
A68_VC  RKDBTRN;  /* OPERATORS - trim index */
A68_INT  SKDBTRN_code;
A68_BOOL  TKDBTRN;  /* optbool result */
A68_BOOL  UKDBTRN;  /* optbool result */
A68_VC  VKDBTRN;  /* clause result */
A68_476  WKDBTRN;  /* collateral clause result */
A68_476 * XKDBTRN;  /* YIELD */
A68_475  YKDBTRN;  /* collateral clause result */
A68_475  ZKDBTRN;  /* clause result */
A_PROC_ENTRY(modify_name);
 /* line 149: */
 /* line 150: */
{ 
VJDBTRN_changed = A68_FALSE;
WJDBTRN_add_prefix = A68_TRUE;
 /* line 151: */
XJDBTRN_newname = N;
 /* line 153: */
 /* line 154: */
 /* line 157: */
A_CLOSURE( YJDBTRN_change_name, ZJDBTRN_change_name, AKDBTRN_change_name );
(( AKDBTRN_change_name * ) ( YJDBTRN_change_name.nonlocals )) -> VJDBTRN_changed = (&VJDBTRN_changed);
(( AKDBTRN_change_name * ) ( YJDBTRN_change_name.nonlocals )) -> XJDBTRN_newname = (&XJDBTRN_newname);
(( AKDBTRN_change_name * ) ( YJDBTRN_change_name.nonlocals )) -> WJDBTRN_add_prefix = (&WJDBTRN_add_prefix);
(( AKDBTRN_change_name * ) ( YJDBTRN_change_name.nonlocals )) -> QJDBTRN_prefix = NL(QJDBTRN_prefix);
(( AKDBTRN_change_name * ) ( YJDBTRN_change_name.nonlocals )) -> Nameno = NL(Nameno);
 /* line 167: */
 /* line 168: */
 /* line 169: */
QKDBTRN = 1 ;
if ( ((*(&A_VINDEX(N,QKDBTRN)))=='_') )
{ 
VJDBTRN_changed = A68_TRUE;
 /* line 170: */
 /* line 171: */
XJDBTRN_newname = A_VTRIM(RKDBTRN,(N),A_VTSCRIPT(&(RKDBTRN.upb),(N).upb,2,(N).upb));
} 
 /* line 173: */
 /* line 176: */
 /* line 177: */
TKDBTRN = !NL(Lower_case);
if ( TKDBTRN )
{TKDBTRN = ((SKDBTRN_code = A_CALLPROC(RZCBTRN_lookup,(XJDBTRN_newname, A68_FALSE),(XJDBTRN_newname, A68_FALSE,(RZCBTRN_lookup).nonlocals)))!=105);
}
if ( TKDBTRN )
{ /* line 178: */
TKDBTRN = (SKDBTRN_code<=199);
}
 /* line 180: */
if ( TKDBTRN )
{ 
A_CALLPROC(YJDBTRN_change_name,(),((YJDBTRN_change_name).nonlocals));
} 
else
{ 
UKDBTRN = HJDBTRN_apply_vhdl_rules;
if ( UKDBTRN )
{ /* line 181: */
UKDBTRN = ((SKDBTRN_code = RHDBTRN_vhdl_illegal(XJDBTRN_newname))>0);
}
 /* line 182: */
if ( UKDBTRN )
{ 
 /* line 183: */
if ( (SKDBTRN_code>1) )
{ 
 /* line 184: */
 /* line 185: */
if ( NL(Lower_case) )
{ 
 /* line 186: */
VKDBTRN = CJDBTRN_symbolic_name_default_lc;
} 
else
{ 
VKDBTRN = XIDBTRN_symbolic_name_default_uc;
} 
XJDBTRN_newname = VKDBTRN;
 /* line 187: */
 /* line 188: */
WJDBTRN_add_prefix = A68_FALSE;
} 
 /* line 189: */
 /* line 190: */
A_CALLPROC(YJDBTRN_change_name,(),((YJDBTRN_change_name).nonlocals));
} 
} 
 /* line 192: */
for ( ;; )
{ 
 /* line 193: */
 /* line 196: */
if ( !((PIDBTRN_find_name(XJDBTRN_newname, (*NL(List)))!=MYCBTRN_nilidn)) ) break;
A_CALLPROC(YJDBTRN_change_name,(),((YJDBTRN_change_name).nonlocals));
}
 /* line 198: */
WKDBTRN.Id = XJDBTRN_newname;
WKDBTRN.Sort = NL(Sort);
WKDBTRN.Idno = NL(Nameno);
WKDBTRN.Rest = (*NL(List));
XKDBTRN = A_HEAP(A68_476 ) ;
(*XKDBTRN) = WKDBTRN ;
(*NL(List)) = XKDBTRN;
 /* line 199: */
YKDBTRN.I = XJDBTRN_newname;
 /* line 200: */
YKDBTRN.C = VJDBTRN_changed;
ZKDBTRN = YKDBTRN;
} 
A_PROC_EXIT(modify_name);
*ReturnedValue = (ZKDBTRN);
return;
} 
#undef NL

A_STATIC A68_252 * RMDBTRN_change_fndec(void *NonLocals)
#define NL(x) (((SMDBTRN_change_fndec *)NonLocals)->x)
{ 
A68_252 * TMDBTRN;  /* clause result */
A68_252 * UMDBTRN;  /* YIELD */
A_PROC_ENTRY(change_fndec);
 /* line 239: */
if ( (*NL(NMDBTRN_chfn)) )
{ 
TMDBTRN = (*NL(JMDBTRN_newfd));
} 
else
{ 
(*NL(NMDBTRN_chfn)) = A68_TRUE;
 /* line 240: */
UMDBTRN = A_HEAP(A68_252 ) ;
(*UMDBTRN) = (*NL(Fdec)) ;
TMDBTRN = (*NL(JMDBTRN_newfd)) = UMDBTRN;
} 
A_PROC_EXIT(change_fndec);
return( TMDBTRN );
} 
#undef NL
 /* line 243: */
 /* line 244: */

A_STATIC A68_VOID  ZMDBTRN_change_local_name(A68_INT  Nameno, A68_BOOL  Port, A68_476 ** Names_list, void *NonLocals)
#define NL(x) (((ANDBTRN_change_local_name *)NonLocals)->x)
{ 
A68_VC  BNDBTRN_iname;
A68_475  CNDBTRN;  /* avoid structure result */
A68_475  DNDBTRN_nn;
A68_252 * ENDBTRN_fdn;
A68_503  GNDBTRN_generator;   /* proc value of non-global proc */
A68_254  LNDBTRN;  /* avoid structure result */
A68_254 * MNDBTRN;  /* YIELD */
A68_VC * NNDBTRN;  /* YIELD */
A_PROC_ENTRY(change_local_name);
 /* line 245: */
 /* line 246: */
{ 
BNDBTRN_iname = (*(&((&A_VINDEX((*NL(KMDBTRN_nametypes)),Nameno))->Name)));
 /* line 247: */
 /* line 248: */
OJDBTRN_test_name( BNDBTRN_iname, Nameno, QZCBTRN_unitsort, Names_list, A68_TRUE, Port, &CNDBTRN );
DNDBTRN_nn = CNDBTRN;
 /* line 250: */
 /* line 251: */
 /* line 252: */
if ( DNDBTRN_nn.C )
{ 
ENDBTRN_fdn = A_CALLPROC(NL(QMDBTRN_change_fndec),(),((NL(QMDBTRN_change_fndec)).nonlocals));
 /* line 254: */
 /* line 255: */
 /* line 256: */
if ( !(*NL(OMDBTRN_chnt)) )
{ 
(*NL(OMDBTRN_chnt)) = A68_TRUE;
 /* line 257: */
 /* line 258: */
A_CLOSURE( GNDBTRN_generator, HNDBTRN_generator, INDBTRN_generator );
(( INDBTRN_generator * ) ( GNDBTRN_generator.nonlocals )) -> ENDBTRN_fdn = ENDBTRN_fdn;
 /* line 260: */
A_CALLPROC(GNDBTRN_generator,(A68_FALSE, &LNDBTRN),(A68_FALSE, &LNDBTRN,(GNDBTRN_generator).nonlocals));
A_VASSIGN2((*NL(KMDBTRN_nametypes)),LNDBTRN,A68_251 ) ;
MNDBTRN = (&(ENDBTRN_fdn->Nametypes)) ;
(*NL(KMDBTRN_nametypes)) = (*MNDBTRN) = LNDBTRN;
} 
 /* line 261: */
NNDBTRN = (&((&A_VINDEX((*NL(KMDBTRN_nametypes)),Nameno))->Name)) ;
(*NNDBTRN) = DNDBTRN_nn.I;
 /* line 262: */
 /* line 263: */
 /* line 264: */
(*NL(MMDBTRN_min_change_num)) = JVCAOST_min((*NL(MMDBTRN_min_change_num)), Nameno);
} 
} 
A_PROC_EXIT(change_local_name);
return;
} 
#undef NL

A_STATIC A68_VOID  SNDBTRN_do_names(A68_217 * N, A68_BOOL  Port, A68_476 ** Names_list, A68_403  *ReturnedValue, void *NonLocals)
#define NL(x) (((TNDBTRN_do_names *)NonLocals)->x)
{ 
A68_403  UNDBTRN;  /* collateral clause result */
A68_403  VNDBTRN;  /* clause result */
A68_403  WNDBTRN;  /* avoid structure result */
A68_403  XNDBTRN;  /* collateral clause result */
A_PROC_ENTRY(do_names);
 /* line 268: */
 /* line 269: */
 /* line 270: */
if ( (N==NAAATRN_nilnames) )
{ 
UNDBTRN.N = N;
 /* line 271: */
 /* line 272: */
UNDBTRN.C = A68_FALSE;
VNDBTRN = UNDBTRN;
} 
else
{ 
if ( Port )
{ 
(*NL(LMDBTRN_max_port_num)) = FVCAOST_max((*NL(LMDBTRN_max_port_num)), (*(&(N->Nameno))));
} 
 /* line 273: */
A_CALLPROC(NL(YMDBTRN_change_local_name),((*(&(N->Nameno))), Port, Names_list),((*(&(N->Nameno))), Port, Names_list,(NL(YMDBTRN_change_local_name)).nonlocals));
 /* line 274: */
A_CALLPROC(NL(RNDBTRN_do_names),((*(&(N->Rest))), Port, Names_list, &WNDBTRN),((*(&(N->Rest))), Port, Names_list, &WNDBTRN,(NL(RNDBTRN_do_names)).nonlocals));
WNDBTRN;
 /* line 275: */
XNDBTRN.N = N;
 /* line 276: */
XNDBTRN.C = A68_FALSE;
VNDBTRN = XNDBTRN;
} 
A_PROC_EXIT(do_names);
*ReturnedValue = (VNDBTRN);
return;
} 
#undef NL
 /* line 279: */
 /* line 280: */
 /* line 281: */

A_STATIC A68_VOID  DODBTRN_examine_name(A68_VC  Name, A68_INT  Sort, A68_INT  Idno, A68_476 ** Names_list, void *NonLocals)
#define NL(x) (((EODBTRN_examine_name *)NonLocals)->x)
{ 
A68_476 * FODBTRN_idn;
A68_476  GODBTRN;  /* collateral clause result */
A68_476 * HODBTRN;  /* YIELD */
A68_BOOL  IODBTRN;  /* optbool result */
A68_INT * LODBTRN;  /* YIELD */
A68_INT * MODBTRN;  /* YIELD */
A_PROC_ENTRY(examine_name);
 /* line 282: */
 /* line 283: */
{ 
FODBTRN_idn = PIDBTRN_find_name(Name, (*Names_list));
 /* line 285: */
 /* line 286: */
 /* line 287: */
if ( (FODBTRN_idn==MYCBTRN_nilidn) )
{ 
GODBTRN.Id = Name;
GODBTRN.Sort = Sort;
GODBTRN.Idno = Idno;
 /* line 288: */
GODBTRN.Rest = (*Names_list);
HODBTRN = A_HEAP(A68_476 ) ;
(*HODBTRN) = GODBTRN ;
(*Names_list) = HODBTRN;
} 
else
{ 
IODBTRN = ((*(&(FODBTRN_idn->Sort)))!=Sort);
if ( ! IODBTRN )
{ /* line 289: */
IODBTRN = ((*(&(FODBTRN_idn->Idno)))!=Idno);
}
 /* line 290: */
if ( IODBTRN )
{ 
 /* line 291: */
 /* line 292: */
if ( ((*(&(FODBTRN_idn->Sort)))==QZCBTRN_unitsort) )
{ 
 /* line 293: */
 /* line 294: */
A_CALLPROC(NL(YMDBTRN_change_local_name),((*(&(FODBTRN_idn->Idno))), A68_FALSE, Names_list),((*(&(FODBTRN_idn->Idno))), A68_FALSE, Names_list,(NL(YMDBTRN_change_local_name)).nonlocals));
} 
else
{ 
 /* line 295: */
NKDAOST_sysfault(KODBTRN);
} 
 /* line 296: */
LODBTRN = (&(FODBTRN_idn->Sort)) ;
(*LODBTRN) = Sort;
 /* line 297: */
 /* line 298: */
 /* line 299: */
MODBTRN = (&(FODBTRN_idn->Idno)) ;
(*MODBTRN) = Idno;
} 
} 
} 
A_PROC_EXIT(examine_name);
return;
} 
#undef NL

A_STATIC A68_VOID  RODBTRN_add_tag_name(A68_INT  Typeno, A68_INT  Altno, A68_476 ** Names_list, void *NonLocals)
#define NL(x) (((SODBTRN_add_tag_name *)NonLocals)->x)
{ 
A68_258  TODBTRN;  /* OPERATORS - simple index */
A68_169 * UODBTRN_tdec;
A68_167  VODBTRN;  /* united object - for case conformity */
A68_168  WODBTRN_alts;
A68_VC  XODBTRN;  /* clause result */
A68_166 * YODBTRN_ni;
A68_164 * ZODBTRN_nc;
A68_VC  APDBTRN_tagname;
A_PROC_ENTRY(add_tag_name);
 /* line 302: */
 /* line 303: */
{ 
TODBTRN = (*(&(NL(Env)->Types))) ;
UODBTRN_tdec = (*(&A_VINDEX(TODBTRN,Typeno)));
 /* line 304: */
 /* line 305: */
VODBTRN = (*(&(UODBTRN_tdec->Body))) ;
switch ( VODBTRN.mode )
{ 
case 1: /* REF VECTOR [] MODE165 */
WODBTRN_alts = (VODBTRN.data.mode1);
 /* line 306: */
XODBTRN = (*(&((&A_VINDEX(WODBTRN_alts,Altno))->Altname)));
break;
case 2: /* REF STRUCT(REF MODE26,MODE153)  */
YODBTRN_ni = (VODBTRN.data.mode2);
 /* line 307: */
XODBTRN = (*(&(YODBTRN_ni->Tagname)));
break;
case 4: /* REF STRUCT(REF MODE26,REF MODE26)  */
ZODBTRN_nc = (VODBTRN.data.mode4);
 /* line 308: */
 /* line 310: */
XODBTRN = (*(&(ZODBTRN_nc->Tagname)));
break;
default: 
XODBTRN = TTCAOST_nullid;
break;
} 
APDBTRN_tagname = XODBTRN;
 /* line 312: */
 /* line 313: */
A_CALLPROC(NL(CODBTRN_examine_name),(APDBTRN_tagname, 0, 0, Names_list),(APDBTRN_tagname, 0, 0, Names_list,(NL(CODBTRN_examine_name)).nonlocals));
} 
A_PROC_EXIT(add_tag_name);
return;
} 
#undef NL

A_STATIC A68_VOID  EPDBTRN_add_type_name(A68_154  Ty, A68_476 ** Names_list, void *NonLocals)
#define NL(x) (((FPDBTRN_add_type_name *)NonLocals)->x)
{ 
A68_154  GPDBTRN;  /* united object - for case conformity */
A68_155 * HPDBTRN_tname;
A68_258  IPDBTRN;  /* OPERATORS - simple index */
A68_INT  JPDBTRN;  /* YIELD */
A68_169 * KPDBTRN_td;
A68_156 * LPDBTRN_trow;
A68_157 * MPDBTRN_tstr;
A68_154  NPDBTRN;  /* OPERATORS - mode -> union mode */
A68_157 * OPDBTRN;  /* YIELD */
A68_158 * PPDBTRN_tfn;
A68_159 * QPDBTRN_tbracket;
A68_160 * RPDBTRN_tstring;
A68_147 * SPDBTRN_tmacpar;
A68_253  TPDBTRN;  /* OPERATORS - simple index */
A68_INT  UPDBTRN;  /* YIELD */
A68_237  VPDBTRN;  /* united object - for case conformity */
A68_130  WPDBTRN_attrname;
A68_VC  XPDBTRN;  /* clause result */
A68_256  YPDBTRN;  /* OPERATORS - simple index */
A68_INT  ZPDBTRN;  /* YIELD */
A68_142  AQDBTRN_fname;
A68_257  BQDBTRN;  /* OPERATORS - simple index */
A68_INT  CQDBTRN;  /* YIELD */
A68_155  DQDBTRN_tname;
A68_258  EQDBTRN;  /* OPERATORS - simple index */
A68_INT  FQDBTRN;  /* YIELD */
A68_170  GQDBTRN_cname;
A68_259  HQDBTRN;  /* OPERATORS - simple index */
A68_INT  IQDBTRN;  /* YIELD */
A68_207  JQDBTRN_fnname;
A68_260  KQDBTRN;  /* OPERATORS - simple index */
A68_INT  LQDBTRN;  /* YIELD */
A68_VC  MQDBTRN;  /* OPERATORS - skip to mode */
A68_VC  NQDBTRN_mpname;
A_PROC_ENTRY(add_type_name);
 /* line 316: */
 /* line 317: */
{ 
 /* line 318: */
GPDBTRN = Ty ;
switch ( GPDBTRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
HPDBTRN_tname = (GPDBTRN.data.mode1);
 /* line 319: */
{ 
IPDBTRN = (*(&(NL(Env)->Types))) ;
JPDBTRN = (*(&(HPDBTRN_tname->Typeno))) ;
KPDBTRN_td = (*(&A_VINDEX(IPDBTRN,JPDBTRN)));
 /* line 321: */
 /* line 322: */
 /* line 323: */
A_CALLPROC(NL(CODBTRN_examine_name),((*(&(KPDBTRN_td->Typename))), 0, 0, Names_list),((*(&(KPDBTRN_td->Typename))), 0, 0, Names_list,(NL(CODBTRN_examine_name)).nonlocals));
} 
break;
case 2: /* REF STRUCT(MODE138,MODE154)  */
LPDBTRN_trow = (GPDBTRN.data.mode2);
 /* line 324: */
A_CALLPROC(NL(DPDBTRN_add_type_name),((*(&(LPDBTRN_trow->Elem))), Names_list),((*(&(LPDBTRN_trow->Elem))), Names_list,(NL(DPDBTRN_add_type_name)).nonlocals));
break;
case 3: /* REF STRUCT(MODE154,REF MODE157)  */
MPDBTRN_tstr = (GPDBTRN.data.mode3);
 /* line 325: */
{ 
A_CALLPROC(NL(DPDBTRN_add_type_name),((*(&(MPDBTRN_tstr->Elem))), Names_list),((*(&(MPDBTRN_tstr->Elem))), Names_list,(NL(DPDBTRN_add_type_name)).nonlocals));
 /* line 326: */
 /* line 327: */
if ( ((*(&(MPDBTRN_tstr->Rest)))!=GAAATRN_niltstr) )
{ 
 /* line 328: */
 /* line 329: */
 /* line 330: */
OPDBTRN = (*(&(MPDBTRN_tstr->Rest))) ;
A_CALLPROC(NL(DPDBTRN_add_type_name),(A_UNITE(NPDBTRN,mode3,3,OPDBTRN), Names_list),(A_UNITE(NPDBTRN,mode3,3,OPDBTRN), Names_list,(NL(DPDBTRN_add_type_name)).nonlocals));
} 
} 
break;
case 4: /* REF STRUCT(MODE154,MODE154)  */
PPDBTRN_tfn = (GPDBTRN.data.mode4);
 /* line 331: */
{ 
A_CALLPROC(NL(DPDBTRN_add_type_name),((*(&(PPDBTRN_tfn->To))), Names_list),((*(&(PPDBTRN_tfn->To))), Names_list,(NL(DPDBTRN_add_type_name)).nonlocals));
 /* line 332: */
 /* line 333: */
 /* line 334: */
A_CALLPROC(NL(DPDBTRN_add_type_name),((*(&(PPDBTRN_tfn->From))), Names_list),((*(&(PPDBTRN_tfn->From))), Names_list,(NL(DPDBTRN_add_type_name)).nonlocals));
} 
break;
case 5: /* REF STRUCT(MODE154)  */
QPDBTRN_tbracket = (GPDBTRN.data.mode5);
 /* line 335: */
A_CALLPROC(NL(DPDBTRN_add_type_name),((*(&(QPDBTRN_tbracket->Type))), Names_list),((*(&(QPDBTRN_tbracket->Type))), Names_list,(NL(DPDBTRN_add_type_name)).nonlocals));
break;
case 6: /* REF STRUCT(MODE138,MODE154)  */
RPDBTRN_tstring = (GPDBTRN.data.mode6);
 /* line 336: */
A_CALLPROC(NL(DPDBTRN_add_type_name),((*(&(RPDBTRN_tstring->Char))), Names_list),((*(&(RPDBTRN_tstring->Char))), Names_list,(NL(DPDBTRN_add_type_name)).nonlocals));
break;
case 8: /* REF STRUCT(INT)  */
SPDBTRN_tmacpar = (GPDBTRN.data.mode8);
 /* line 337: */
{ 
 /* line 338: */
TPDBTRN = (*(&(NL(Fdec)->Macspecs))) ;
UPDBTRN = (*(&(SPDBTRN_tmacpar->Macparno))) ;
VPDBTRN = (*(&((&A_VINDEX(TPDBTRN,UPDBTRN))->Spec))) ;
switch ( VPDBTRN.mode )
{ 
case 1: /* STRUCT(INT)  */
WPDBTRN_attrname = (VPDBTRN.data.mode1);
 /* line 339: */
 /* line 340: */
YPDBTRN = (*(&(NL(Env)->Attrs))) ;
ZPDBTRN = WPDBTRN_attrname.Attrno ;
XPDBTRN = (*(&((*(&A_VINDEX(YPDBTRN,ZPDBTRN)))->Attrname)));
break;
case 2: /* STRUCT(INT)  */
AQDBTRN_fname = (VPDBTRN.data.mode2);
 /* line 341: */
 /* line 342: */
BQDBTRN = (*(&(NL(Env)->Ints))) ;
CQDBTRN = AQDBTRN_fname.Intno ;
XPDBTRN = (*(&((*(&A_VINDEX(BQDBTRN,CQDBTRN)))->Intname)));
break;
case 3: /* STRUCT(INT)  */
DQDBTRN_tname = (VPDBTRN.data.mode3);
 /* line 343: */
 /* line 344: */
EQDBTRN = (*(&(NL(Env)->Types))) ;
FQDBTRN = DQDBTRN_tname.Typeno ;
XPDBTRN = (*(&((*(&A_VINDEX(EQDBTRN,FQDBTRN)))->Typename)));
break;
case 4: /* STRUCT(INT)  */
GQDBTRN_cname = (VPDBTRN.data.mode4);
 /* line 345: */
 /* line 346: */
HQDBTRN = (*(&(NL(Env)->Consts))) ;
IQDBTRN = GQDBTRN_cname.Constno ;
XPDBTRN = (*(&((*(&A_VINDEX(HQDBTRN,IQDBTRN)))->Constname)));
break;
case 5: /* STRUCT(INT)  */
JQDBTRN_fnname = (VPDBTRN.data.mode5);
 /* line 347: */
 /* line 348: */
 /* line 350: */
KQDBTRN = (*(&(NL(Env)->Fns))) ;
LQDBTRN = JQDBTRN_fnname.Fnno ;
XPDBTRN = (*(&((*(&A_VINDEX(KQDBTRN,LQDBTRN)))->Fnname)));
break;
default: 
XPDBTRN = MQDBTRN;
break;
} 
NQDBTRN_mpname = XPDBTRN;
 /* line 352: */
 /* line 353: */
 /* line 354: */
 /* line 356: */
A_CALLPROC(NL(CODBTRN_examine_name),(NQDBTRN_mpname, 0, 0, Names_list),(NQDBTRN_mpname, 0, 0, Names_list,(NL(CODBTRN_examine_name)).nonlocals));
} 
break;
default: 
 /* line 357: */
/*SKIP*/;
break;
} 
} 
A_PROC_EXIT(add_type_name);
return;
} 
#undef NL

A_STATIC A68_VOID  RQDBTRN_do_unit(A68_176  U, A68_476 ** Names_list, void *NonLocals)
#define NL(x) (((SQDBTRN_do_unit *)NonLocals)->x)
{ 
A68_176  TQDBTRN;  /* united object - for case conformity */
A68_170 * UQDBTRN_cname;
A68_259  VQDBTRN;  /* OPERATORS - simple index */
A68_INT  WQDBTRN;  /* YIELD */
A68_175 * XQDBTRN_cd;
A68_159 * YQDBTRN_ctype;
A68_171 * ZQDBTRN_cprim;
A68_172 * ARDBTRN_cint;
A68_173 * BRDBTRN_crange;
A68_174 * CRDBTRN_cquery;
A68_179 * DRDBTRN_cprimrange;
A68_177 * ERDBTRN_cquote;
A68_181 * FRDBTRN_uname;
A68_INT  GRDBTRN;  /* YIELD */
A68_183 * HRDBTRN_uassoc;
A68_184 * IRDBTRN_uextract;
A_PROC_ENTRY(do_unit);
 /* line 360: */
 /* line 361: */
{ 
 /* line 362: */
TQDBTRN = U ;
switch ( TQDBTRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
UQDBTRN_cname = (TQDBTRN.data.mode1);
 /* line 363: */
{ 
VQDBTRN = (*(&(NL(Env)->Consts))) ;
WQDBTRN = (*(&(UQDBTRN_cname->Constno))) ;
XQDBTRN_cd = (*(&A_VINDEX(VQDBTRN,WQDBTRN)));
 /* line 365: */
 /* line 366: */
 /* line 367: */
A_CALLPROC(NL(CODBTRN_examine_name),((*(&(XQDBTRN_cd->Constname))), 0, 0, Names_list),((*(&(XQDBTRN_cd->Constname))), 0, 0, Names_list,(NL(CODBTRN_examine_name)).nonlocals));
} 
break;
case 7: /* REF STRUCT(MODE154)  */
YQDBTRN_ctype = (TQDBTRN.data.mode7);
 /* line 368: */
A_CALLPROC(NL(DPDBTRN_add_type_name),((*(&(YQDBTRN_ctype->Type))), Names_list),((*(&(YQDBTRN_ctype->Type))), Names_list,(NL(DPDBTRN_add_type_name)).nonlocals));
break;
case 2: /* REF STRUCT(INT,INT)  */
ZQDBTRN_cprim = (TQDBTRN.data.mode2);
 /* line 369: */
 /* line 370: */
A_CALLPROC(NL(QODBTRN_add_tag_name),((*(&(ZQDBTRN_cprim->Typeno))), (*(&(ZQDBTRN_cprim->Primno))), Names_list),((*(&(ZQDBTRN_cprim->Typeno))), (*(&(ZQDBTRN_cprim->Primno))), Names_list,(NL(QODBTRN_add_tag_name)).nonlocals));
break;
case 3: /* REF STRUCT(INT,MODE138)  */
ARDBTRN_cint = (TQDBTRN.data.mode3);
 /* line 371: */
A_CALLPROC(NL(QODBTRN_add_tag_name),((*(&(ARDBTRN_cint->Typeno))), 1, Names_list),((*(&(ARDBTRN_cint->Typeno))), 1, Names_list,(NL(QODBTRN_add_tag_name)).nonlocals));
break;
case 8: /* REF STRUCT(INT,MODE153)  */
BRDBTRN_crange = (TQDBTRN.data.mode8);
 /* line 372: */
A_CALLPROC(NL(QODBTRN_add_tag_name),((*(&(BRDBTRN_crange->Typeno))), 1, Names_list),((*(&(BRDBTRN_crange->Typeno))), 1, Names_list,(NL(QODBTRN_add_tag_name)).nonlocals));
break;
case 4: /* REF STRUCT(MODE154)  */
CRDBTRN_cquery = (TQDBTRN.data.mode4);
 /* line 373: */
A_CALLPROC(NL(DPDBTRN_add_type_name),((*(&(CRDBTRN_cquery->Querytype))), Names_list),((*(&(CRDBTRN_cquery->Querytype))), Names_list,(NL(DPDBTRN_add_type_name)).nonlocals));
break;
case 9: /* REF STRUCT(INT,INT,INT)  */
DRDBTRN_cprimrange = (TQDBTRN.data.mode9);
 /* line 374: */
 /* line 375: */
A_CALLPROC(NL(QODBTRN_add_tag_name),((*(&(DRDBTRN_cprimrange->Typeno))), 1, Names_list),((*(&(DRDBTRN_cprimrange->Typeno))), 1, Names_list,(NL(QODBTRN_add_tag_name)).nonlocals));
break;
case 5: /* REF STRUCT(INT,REF MODE32)  */
ERDBTRN_cquote = (TQDBTRN.data.mode5);
 /* line 376: */
A_CALLPROC(NL(QODBTRN_add_tag_name),((*(&(ERDBTRN_cquote->Typeno))), 1, Names_list),((*(&(ERDBTRN_cquote->Typeno))), 1, Names_list,(NL(QODBTRN_add_tag_name)).nonlocals));
break;
case 11: /* REF STRUCT(INT,INT)  */
FRDBTRN_uname = (TQDBTRN.data.mode11);
 /* line 377: */
 /* line 378: */
 /* line 379: */
GRDBTRN = (*(&(FRDBTRN_uname->Nameno))) ;
A_CALLPROC(NL(CODBTRN_examine_name),((*(&((&A_VINDEX((*NL(KMDBTRN_nametypes)),GRDBTRN))->Name))), QZCBTRN_unitsort, (*(&(FRDBTRN_uname->Nameno))), Names_list),((*(&((&A_VINDEX((*NL(KMDBTRN_nametypes)),GRDBTRN))->Name))), QZCBTRN_unitsort, (*(&(FRDBTRN_uname->Nameno))), Names_list,(NL(CODBTRN_examine_name)).nonlocals));
break;
case 13: /* REF STRUCT(INT,INT,MODE176)  */
HRDBTRN_uassoc = (TQDBTRN.data.mode13);
 /* line 380: */
{ 
A_CALLPROC(NL(QODBTRN_add_tag_name),((*(&(HRDBTRN_uassoc->Typeno))), (*(&(HRDBTRN_uassoc->Altno))), Names_list),((*(&(HRDBTRN_uassoc->Typeno))), (*(&(HRDBTRN_uassoc->Altno))), Names_list,(NL(QODBTRN_add_tag_name)).nonlocals));
 /* line 381: */
 /* line 382: */
 /* line 383: */
A_CALLPROC(NL(QQDBTRN_do_unit),((*(&(HRDBTRN_uassoc->Assoc))), Names_list),((*(&(HRDBTRN_uassoc->Assoc))), Names_list,(NL(QQDBTRN_do_unit)).nonlocals));
} 
break;
case 14: /* REF STRUCT(MODE176,INT,INT)  */
IRDBTRN_uextract = (TQDBTRN.data.mode14);
 /* line 384: */
{ 
A_CALLPROC(NL(QODBTRN_add_tag_name),((*(&(IRDBTRN_uextract->Typeno))), (*(&(IRDBTRN_uextract->Altno))), Names_list),((*(&(IRDBTRN_uextract->Typeno))), (*(&(IRDBTRN_uextract->Altno))), Names_list,(NL(QODBTRN_add_tag_name)).nonlocals));
 /* line 385: */
 /* line 386: */
 /* line 387: */
 /* line 389: */
A_CALLPROC(NL(QQDBTRN_do_unit),((*(&(IRDBTRN_uextract->Extract))), Names_list),((*(&(IRDBTRN_uextract->Extract))), Names_list,(NL(QQDBTRN_do_unit)).nonlocals));
} 
break;
default: 
 /* line 390: */
/*SKIP*/;
break;
} 
} 
A_PROC_EXIT(do_unit);
return;
} 
#undef NL

A_STATIC A68_VOID  MRDBTRN_do_series(A68_199 * User, A68_419 * Tprocs, void *NonLocals)
#define NL(x) (((NRDBTRN_do_series *)NonLocals)->x)
{ 
A68_476 * ORDBTRN_loc_names_list;
A68_476 ** PRDBTRN;  /* clause result */
A68_476 ** QRDBTRN_ser_names_list;
A68_446  TRDBTRN_ser_names;   /* proc value of non-global proc */
A68_438  ASDBTRN_ser_unit;   /* proc value of non-global proc */
A68_511  JSDBTRN;  /* collateral clause result */
A68_464  KSDBTRN;  /* OPERATORS - mode -> union mode */
A68_438  LSDBTRN;  /* YIELD */
A68_464  MSDBTRN;  /* OPERATORS - mode -> union mode */
A68_446  NSDBTRN;  /* YIELD */
A68_463  OSDBTRN;  /* OPERATORS - istruct -> vector */
A68_419 * PSDBTRN_sertprocs;
A68_438  QSDBTRN;  /* CALL */
A68_176  RSDBTRN;  /* OPERATORS - mode -> union mode */
A68_395  SSDBTRN;  /* avoid structure result */
A_PROC_ENTRY(do_series);
 /* line 393: */
 /* line 394: */
{ 
ORDBTRN_loc_names_list = MYCBTRN_nilidn;
 /* line 395: */
 /* line 396: */
 /* line 397: */
if ( NL(Old_scope_rules) )
{ 
 /* line 398: */
PRDBTRN = NL(IMDBTRN_dec_names_list);
} 
else
{ 
PRDBTRN = (&ORDBTRN_loc_names_list);
} 
QRDBTRN_ser_names_list = PRDBTRN;
 /* line 400: */
A_CLOSURE( TRDBTRN_ser_names, URDBTRN_ser_names, VRDBTRN_ser_names );
(( VRDBTRN_ser_names * ) ( TRDBTRN_ser_names.nonlocals )) -> RNDBTRN_do_names = NL(RNDBTRN_do_names);
(( VRDBTRN_ser_names * ) ( TRDBTRN_ser_names.nonlocals )) -> QRDBTRN_ser_names_list = QRDBTRN_ser_names_list;
 /* line 403: */
A_CLOSURE( ASDBTRN_ser_unit, BSDBTRN_ser_unit, CSDBTRN_ser_unit );
(( CSDBTRN_ser_unit * ) ( ASDBTRN_ser_unit.nonlocals )) -> Old_scope_rules = NL(Old_scope_rules);
(( CSDBTRN_ser_unit * ) ( ASDBTRN_ser_unit.nonlocals )) -> QQDBTRN_do_unit = NL(QQDBTRN_do_unit);
(( CSDBTRN_ser_unit * ) ( ASDBTRN_ser_unit.nonlocals )) -> QRDBTRN_ser_names_list = QRDBTRN_ser_names_list;
(( CSDBTRN_ser_unit * ) ( ASDBTRN_ser_unit.nonlocals )) -> LRDBTRN_do_series = NL(LRDBTRN_do_series);
 /* line 414: */
 /* line 415: */
LSDBTRN = ASDBTRN_ser_unit ;
JSDBTRN.data[0] = A_UNITE(KSDBTRN,mode19,19,LSDBTRN);
NSDBTRN = TRDBTRN_ser_names ;
JSDBTRN.data[1] = A_UNITE(MSDBTRN,mode27,27,NSDBTRN);
PSDBTRN_sertprocs = THJATRN_make_newtprocs(Tprocs, A_HISVEC(OSDBTRN,JSDBTRN,2,A68_464 ));
 /* line 417: */
QSDBTRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(QSDBTRN,(A_UNITE(RSDBTRN,mode29,29,User), PSDBTRN_sertprocs, &SSDBTRN),(A_UNITE(RSDBTRN,mode29,29,User), PSDBTRN_sertprocs, &SSDBTRN,(QSDBTRN).nonlocals));
SSDBTRN;
 /* line 418: */
 /* line 419: */
MLJATRN_discard_tprocs(PSDBTRN_sertprocs);
} 
A_PROC_EXIT(do_series);
return;
} 
#undef NL

A_STATIC A68_VOID  WSDBTRN_dec_names(A68_217 * N, A68_419 * Tprocs, A68_403  *ReturnedValue, void *NonLocals)
#define NL(x) (((XSDBTRN_dec_names *)NonLocals)->x)
{ 
A68_403  YSDBTRN;  /* clause result */
A68_403  ZSDBTRN;  /* avoid structure result */
A_PROC_ENTRY(dec_names);
 /* line 422: */
A_CALLPROC(NL(RNDBTRN_do_names),(N, A68_FALSE, NL(IMDBTRN_dec_names_list), &ZSDBTRN),(N, A68_FALSE, NL(IMDBTRN_dec_names_list), &ZSDBTRN,(NL(RNDBTRN_do_names)).nonlocals));
YSDBTRN = ZSDBTRN;
A_PROC_EXIT(dec_names);
*ReturnedValue = (YSDBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  DTDBTRN_dec_unit(A68_176  U, A68_419 * Tprocs, A68_395  *ReturnedValue, void *NonLocals)
#define NL(x) (((ETDBTRN_dec_unit *)NonLocals)->x)
{ 
A68_176  FTDBTRN;  /* united object - for case conformity */
A68_199 * GTDBTRN_user;
A68_438  HTDBTRN;  /* CALL */
A68_395  ITDBTRN;  /* avoid structure result */
A68_395  JTDBTRN;  /* collateral clause result */
A68_395  KTDBTRN;  /* clause result */
A_PROC_ENTRY(dec_unit);
 /* line 425: */
 /* line 426: */
{ 
 /* line 427: */
FTDBTRN = U ;
switch ( FTDBTRN.mode )
{ 
case 29: /* REF STRUCT(REF MODE205,MODE176)  */
GTDBTRN_user = (FTDBTRN.data.mode29);
 /* line 428: */
 /* line 429: */
A_CALLPROC(NL(LRDBTRN_do_series),(GTDBTRN_user, Tprocs),(GTDBTRN_user, Tprocs,(NL(LRDBTRN_do_series)).nonlocals));
break;
default: 
 /* line 430: */
HTDBTRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(HTDBTRN,(U, Tprocs, &ITDBTRN),(U, Tprocs, &ITDBTRN,(HTDBTRN).nonlocals));
ITDBTRN;
break;
} 
 /* line 431: */
JTDBTRN.U = U;
 /* line 432: */
JTDBTRN.C = A68_FALSE;
KTDBTRN = JTDBTRN;
} 
A_PROC_EXIT(dec_unit);
*ReturnedValue = (KTDBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  OTDBTRN_pre_pass_unit(A68_176  U, A68_419 * Tprocs, A68_395  *ReturnedValue, void *NonLocals)
#define NL(x) (((PTDBTRN_pre_pass_unit *)NonLocals)->x)
{ 
A68_176  QTDBTRN;  /* united object - for case conformity */
A68_181 * RTDBTRN_uname;
A68_INT  STDBTRN;  /* YIELD */
A68_438  TTDBTRN;  /* CALL */
A68_395  UTDBTRN;  /* avoid structure result */
A68_395  VTDBTRN;  /* collateral clause result */
A68_395  WTDBTRN;  /* clause result */
A_PROC_ENTRY(pre_pass_unit);
 /* line 435: */
 /* line 436: */
{ 
 /* line 437: */
QTDBTRN = U ;
switch ( QTDBTRN.mode )
{ 
case 11: /* REF STRUCT(INT,INT)  */
RTDBTRN_uname = (QTDBTRN.data.mode11);
 /* line 438: */
 /* line 439: */
 /* line 440: */
STDBTRN = (*(&(RTDBTRN_uname->Nameno))) ;
if ( ((*(&((&A_VINDEX((*NL(KMDBTRN_nametypes)),STDBTRN))->Name))).upb==0) )
{ 
 /* line 441: */
 /* line 442: */
 /* line 443: */
A_CALLPROC(NL(YMDBTRN_change_local_name),((*(&(RTDBTRN_uname->Nameno))), A68_FALSE, NL(IMDBTRN_dec_names_list)),((*(&(RTDBTRN_uname->Nameno))), A68_FALSE, NL(IMDBTRN_dec_names_list),(NL(YMDBTRN_change_local_name)).nonlocals));
} 
break;
default: 
 /* line 444: */
TTDBTRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(TTDBTRN,(U, Tprocs, &UTDBTRN),(U, Tprocs, &UTDBTRN,(TTDBTRN).nonlocals));
UTDBTRN;
break;
} 
 /* line 445: */
VTDBTRN.U = U;
 /* line 446: */
VTDBTRN.C = A68_FALSE;
WTDBTRN = VTDBTRN;
} 
A_PROC_EXIT(pre_pass_unit);
*ReturnedValue = (WTDBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ZTDBTRN_pre_pass_dec(A68_237  Dec, A68_419 * Tprocs, A68_399  *ReturnedValue)
{ 
A68_399  AUDBTRN;  /* collateral clause result */
A68_399  BUDBTRN;  /* clause result */
A_PROC_ENTRY(pre_pass_dec);
 /* line 449: */
AUDBTRN.D = Dec;
AUDBTRN.C = A68_FALSE;
BUDBTRN = AUDBTRN;
A_PROC_EXIT(pre_pass_dec);
*ReturnedValue = (BUDBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  PVDBTRN_generator(A68_BOOL  NVDBTRN_anonymous, A68_513  *ReturnedValue, void *NonLocals)
#define NL(x) (((QVDBTRN_generator *)NonLocals)->x)
{ 
A68_513  RVDBTRN;  /* clause result */
A68_513  SVDBTRN;  /* OPERATORS - dynamic generator */
{ 
SVDBTRN.upb = NL(MVDBTRN_max_clno) ;
( NVDBTRN_anonymous? A_VLOC(A68_475 ,SVDBTRN): A_VHEAP(A68_475 ,SVDBTRN) );
RVDBTRN = SVDBTRN;
} 
*ReturnedValue = (RVDBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  AWDBTRN_generator(A68_BOOL  YVDBTRN_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((BWDBTRN_generator *)NonLocals)->x)
{ 
A68_32  CWDBTRN;  /* clause result */
A68_32  DWDBTRN;  /* OPERATORS - dynamic generator */
{ 
DWDBTRN.upb = NL(MVDBTRN_max_clno) ;
( YVDBTRN_anonymous? A_VLOC(A68_INT ,DWDBTRN): A_VHEAP(A68_INT ,DWDBTRN) );
CWDBTRN = DWDBTRN;
} 
*ReturnedValue = (CWDBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  JWDBTRN_generator(A68_BOOL  HWDBTRN_anonymous, A68_515  *ReturnedValue, void *NonLocals)
#define NL(x) (((KWDBTRN_generator *)NonLocals)->x)
{ 
A68_515  LWDBTRN;  /* clause result */
A68_515  MWDBTRN;  /* OPERATORS - dynamic generator */
{ 
MWDBTRN.upb = NL(MVDBTRN_max_clno) ;
( HWDBTRN_anonymous? A_VLOC(A68_389 ,MWDBTRN): A_VHEAP(A68_389 ,MWDBTRN) );
LWDBTRN = MWDBTRN;
} 
*ReturnedValue = (LWDBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  VWDBTRN_generator(A68_BOOL  TWDBTRN_anonymous, A68_260  *ReturnedValue, void *NonLocals)
#define NL(x) (((WWDBTRN_generator *)NonLocals)->x)
{ 
A68_260  XWDBTRN;  /* clause result */
A68_260  YWDBTRN;  /* OPERATORS - dynamic generator */
{ 
YWDBTRN.upb = NL(MVDBTRN_max_clno) ;
( TWDBTRN_anonymous? A_VLOC(A68_252 *,YWDBTRN): A_VHEAP(A68_252 *,YWDBTRN) );
XWDBTRN = YWDBTRN;
} 
*ReturnedValue = (XWDBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  IXDBTRN_change_closure(void *NonLocals)
#define NL(x) (((JXDBTRN_change_closure *)NonLocals)->x)
{ 
A68_INT  KXDBTRN_place;
A_PROC_ENTRY(change_closure);
{ 
 /* line 505: */
 /* line 506: */
if ( !(*NL(EXDBTRN_changed)) )
{ 
(*NL(EXDBTRN_changed)) = A68_TRUE;
 /* line 507: */
(*NL(FXDBTRN_new)) = DPCATRN_copy_closure((*NL(FXDBTRN_new)), NL(Msg));
 /* line 509: */
KXDBTRN_place = (*(&((&((**NL(GXDBTRN_newptr))->Outer))->Closureno)));
 /* line 510: */
(*NL(GXDBTRN_newptr)) = (&((*NL(FXDBTRN_new))->Outers));
 /* line 511: */
for ( ;; )
{ 
 /* line 512: */
if ( !(((*(&((&((**NL(GXDBTRN_newptr))->Outer))->Closureno)))!=KXDBTRN_place)) ) break;
(*NL(GXDBTRN_newptr)) = (&((**NL(GXDBTRN_newptr))->Rest));
}
 /* line 513: */
 /* line 514: */
} 
} 
A_PROC_EXIT(change_closure);
return;
} 
#undef NL
 /* line 517: */
 /* line 518: */

A_STATIC A68_VOID  OXDBTRN_test_type_body(A68_167  Body, A68_INT  Idno, A68_476 ** Names_list, A68_389  *ReturnedValue)
{ 
A68_167  PXDBTRN;  /* united object - for case conformity */
A68_168  QXDBTRN_alts;
A68_BOOL  RXDBTRN_ac;
A68_168  SXDBTRN_newalts;
A68_INT  TXDBTRN_altno;
A68_INT  UXDBTRN;  /* to part of loop */
A68_475  VXDBTRN;  /* avoid structure result */
A68_475  WXDBTRN_adc;
A68_519  YXDBTRN_generator;   /* proc value of non-global proc */
A68_168  DYDBTRN;  /* avoid structure result */
A68_VC * EYDBTRN;  /* YIELD */
A68_389  FYDBTRN;  /* collateral clause result */
A68_167  GYDBTRN;  /* OPERATORS - mode -> union mode */
A68_389  HYDBTRN;  /* clause result */
A68_166 * IYDBTRN_ints;
A68_475  JYDBTRN;  /* avoid structure result */
A68_475  KYDBTRN_idc;
A68_389  LYDBTRN;  /* collateral clause result */
A68_166  MYDBTRN;  /* collateral clause result */
A68_166 * NYDBTRN;  /* YIELD */
A68_167  OYDBTRN;  /* OPERATORS - mode -> union mode */
A68_389  PYDBTRN;  /* collateral clause result */
A68_164 * QYDBTRN_chars;
A68_475  RYDBTRN;  /* avoid structure result */
A68_475  SYDBTRN_cdc;
A68_389  TYDBTRN;  /* collateral clause result */
A68_164  UYDBTRN;  /* collateral clause result */
A68_164 * VYDBTRN;  /* YIELD */
A68_167  WYDBTRN;  /* OPERATORS - mode -> union mode */
A68_389  XYDBTRN;  /* collateral clause result */
A68_389  YYDBTRN;  /* collateral clause result */
A_PROC_ENTRY(test_type_body);
 /* line 519: */
 /* line 520: */
{ 
 /* line 521: */
PXDBTRN = Body ;
switch ( PXDBTRN.mode )
{ 
case 1: /* REF VECTOR [] MODE165 */
QXDBTRN_alts = (PXDBTRN.data.mode1);
 /* line 522: */
{ 
RXDBTRN_ac = A68_FALSE;
 /* line 523: */
SXDBTRN_newalts = QXDBTRN_alts;
 /* line 525: */
 /* line 526: */
UXDBTRN = QXDBTRN_alts.upb;
for ( TXDBTRN_altno = 1;
TXDBTRN_altno <= UXDBTRN;
TXDBTRN_altno += 1 )
{ 
 /* line 527: */
OJDBTRN_test_name( (*(&((&A_VINDEX(QXDBTRN_alts,TXDBTRN_altno))->Altname))), TXDBTRN_altno, 0, Names_list, A68_TRUE, A68_FALSE, &VXDBTRN );
WXDBTRN_adc = VXDBTRN;
 /* line 528: */
 /* line 529: */
 /* line 530: */
if ( WXDBTRN_adc.C )
{ 
 /* line 531: */
 /* line 532: */
if ( !RXDBTRN_ac )
{ 
A_CLOSURE( YXDBTRN_generator, ZXDBTRN_generator, AYDBTRN_generator );
(( AYDBTRN_generator * ) ( YXDBTRN_generator.nonlocals )) -> QXDBTRN_alts = QXDBTRN_alts;
A_CALLPROC(YXDBTRN_generator,(A68_FALSE, &DYDBTRN),(A68_FALSE, &DYDBTRN,(YXDBTRN_generator).nonlocals));
A_VASSIGN2(QXDBTRN_alts,DYDBTRN,A68_165 ) ;
SXDBTRN_newalts = DYDBTRN;
 /* line 533: */
 /* line 534: */
RXDBTRN_ac = A68_TRUE;
} 
 /* line 535: */
 /* line 536: */
 /* line 537: */
EYDBTRN = (&((&A_VINDEX(SXDBTRN_newalts,TXDBTRN_altno))->Altname)) ;
(*EYDBTRN) = WXDBTRN_adc.I;
} 
}
 /* line 538: */
FYDBTRN.T = A_UNITE(GYDBTRN,mode1,1,SXDBTRN_newalts);
 /* line 539: */
 /* line 540: */
FYDBTRN.C = RXDBTRN_ac;
HYDBTRN = FYDBTRN;
} 
break;
case 2: /* REF STRUCT(REF MODE26,MODE153)  */
IYDBTRN_ints = (PXDBTRN.data.mode2);
 /* line 541: */
{ 
 /* line 542: */
OJDBTRN_test_name( (*(&(IYDBTRN_ints->Tagname))), Idno, 0, Names_list, A68_TRUE, A68_FALSE, &JYDBTRN );
KYDBTRN_idc = JYDBTRN;
 /* line 543: */
 /* line 544: */
 /* line 545: */
if ( KYDBTRN_idc.C )
{ 
MYDBTRN.Tagname = KYDBTRN_idc.I;
MYDBTRN.Range = (*(&(IYDBTRN_ints->Range)));
NYDBTRN = A_HEAP(A68_166 ) ;
(*NYDBTRN) = MYDBTRN ;
LYDBTRN.T = A_UNITE(OYDBTRN,mode2,2,NYDBTRN);
 /* line 546: */
 /* line 547: */
LYDBTRN.C = A68_TRUE;
HYDBTRN = LYDBTRN;
} 
else
{ 
PYDBTRN.T = Body;
 /* line 548: */
 /* line 549: */
 /* line 550: */
PYDBTRN.C = A68_FALSE;
HYDBTRN = PYDBTRN;
} 
} 
break;
case 4: /* REF STRUCT(REF MODE26,REF MODE26)  */
QYDBTRN_chars = (PXDBTRN.data.mode4);
 /* line 551: */
{ 
 /* line 552: */
OJDBTRN_test_name( (*(&(QYDBTRN_chars->Tagname))), Idno, 0, Names_list, A68_TRUE, A68_FALSE, &RYDBTRN );
SYDBTRN_cdc = RYDBTRN;
 /* line 553: */
 /* line 554: */
 /* line 555: */
if ( SYDBTRN_cdc.C )
{ 
UYDBTRN.Tagname = SYDBTRN_cdc.I;
UYDBTRN.Chars = (*(&(QYDBTRN_chars->Chars)));
VYDBTRN = A_HEAP(A68_164 ) ;
(*VYDBTRN) = UYDBTRN ;
TYDBTRN.T = A_UNITE(WYDBTRN,mode4,4,VYDBTRN);
 /* line 556: */
 /* line 557: */
TYDBTRN.C = A68_TRUE;
HYDBTRN = TYDBTRN;
} 
else
{ 
XYDBTRN.T = Body;
 /* line 558: */
 /* line 559: */
 /* line 560: */
 /* line 561: */
XYDBTRN.C = A68_FALSE;
HYDBTRN = XYDBTRN;
} 
} 
break;
default: 
YYDBTRN.T = Body;
 /* line 562: */
 /* line 563: */
YYDBTRN.C = A68_FALSE;
HYDBTRN = YYDBTRN;
break;
} 
} 
A_PROC_EXIT(test_type_body);
*ReturnedValue = (HYDBTRN);
return;
} 
#undef NL

A_STATIC A68_BOOL  BZDBTRN_test_outer_name(A68_261  O, void *NonLocals)
#define NL(x) (((CZDBTRN_test_outer_name *)NonLocals)->x)
{ 
A68_BOOL  DZDBTRN_same_spec;
A68_VC  EZDBTRN;  /* avoid structure result */
A68_VC  FZDBTRN_name;
A68_INT  GZDBTRN;  /* YIELD */
A68_475 * HZDBTRN_idc;
A68_475  IZDBTRN;  /* avoid structure result */
A68_262 * JZDBTRN_end;
A68_262 * KZDBTRN_ptr;
A68_BOOL  LZDBTRN;  /* optbool result */
A68_VC  MZDBTRN;  /* avoid structure result */
A68_155  NZDBTRN_tn1;
A68_155  OZDBTRN_tn2;
A68_INT * PZDBTRN;  /* YIELD */
A68_INT * QZDBTRN;  /* YIELD */
A68_154  RZDBTRN;  /* OPERATORS - mode -> union mode */
A68_154  SZDBTRN;  /* avoid structure result */
A68_154  TZDBTRN;  /* OPERATORS - mode -> union mode */
A68_154  UZDBTRN;  /* avoid structure result */
A68_INT  VZDBTRN;  /* YIELD */
A68_INT * WZDBTRN;  /* YIELD */
A68_VC * XZDBTRN;  /* YIELD */
A68_258  YZDBTRN;  /* OPERATORS - simple index */
A68_INT  ZZDBTRN;  /* YIELD */
A68_169 * AAEBTRN_tdec;
A68_389  BAEBTRN;  /* avoid structure result */
A68_389  CAEBTRN_tbc;
A68_INT  DAEBTRN;  /* YIELD */
A68_389 * EAEBTRN;  /* YIELD */
A68_BOOL  FAEBTRN;  /* clause result */
A_PROC_ENTRY(test_outer_name);
 /* line 567: */
 /* line 568: */
{ 
DZDBTRN_same_spec = A68_FALSE;
 /* line 569: */
NLDBTRN_dec_name( O, &EZDBTRN );
FZDBTRN_name = EZDBTRN;
 /* line 570: */
GZDBTRN = O.Closureno ;
HZDBTRN_idc = (&A_VINDEX(NL(TVDBTRN_translations),GZDBTRN));
 /* line 572: */
 /* line 573: */
OJDBTRN_test_name( FZDBTRN_name, O.Closureno, 0, NL(DXDBTRN_outer_names), (O.Sort!=VKAATRN_outerfn), A68_FALSE, &IZDBTRN );
(*HZDBTRN_idc) = IZDBTRN;
 /* line 575: */
 /* line 576: */
 /* line 577: */
if ( (O.Sort==TKAATRN_outertype) )
{ 
JZDBTRN_end = (**NL(GXDBTRN_newptr));
 /* line 578: */
KZDBTRN_ptr = (*(&((*NL(FXDBTRN_new))->Outers)));
 /* line 580: */
for ( ;; )
{ 
LZDBTRN = (KZDBTRN_ptr!=JZDBTRN_end);
if ( LZDBTRN )
{ /* line 581: */
NLDBTRN_dec_name( (*(&(KZDBTRN_ptr->Outer))), &MZDBTRN );
LZDBTRN = A_VC_NE(MZDBTRN,FZDBTRN_name);
}
 /* line 582: */
if ( !(LZDBTRN) ) break;
 /* line 583: */
KZDBTRN_ptr = (*(&(KZDBTRN_ptr->Rest)));
}
 /* line 584: */
 /* line 585: */
 /* line 586: */
if ( (KZDBTRN_ptr!=JZDBTRN_end) )
{ 
 /* line 588: */
PZDBTRN = (&((&OZDBTRN_tn2)->Typeno)) ;
QZDBTRN = (&((&NZDBTRN_tn1)->Typeno)) ;
(*QZDBTRN) = (*PZDBTRN) = 1;
 /* line 589: */
 /* line 590: */
 /* line 591: */
 /* line 592: */
 /* line 596: */
DDOATRN_simplify_type( A_UNITE(RZDBTRN,mode1,1,(&OZDBTRN_tn2)), (*(&((&(KZDBTRN_ptr->Outer))->Environ))), &SZDBTRN );
DDOATRN_simplify_type( A_UNITE(TZDBTRN,mode1,1,(&NZDBTRN_tn1)), O.Environ, &UZDBTRN );
if ( NEOATRN_check_types(UZDBTRN, SZDBTRN, O.Environ, (*(&((&(KZDBTRN_ptr->Outer))->Environ))), A68_TRUE) )
{ 
VZDBTRN = O.Closureno ;
WZDBTRN = (&A_VINDEX(NL(EWDBTRN_typealiases),VZDBTRN)) ;
(*WZDBTRN) = (*(&((&(KZDBTRN_ptr->Outer))->Closureno)));
 /* line 597: */
XZDBTRN = (&(HZDBTRN_idc->I)) ;
(*XZDBTRN) = FZDBTRN_name;
 /* line 599: */
A_CALLPROC(NL(HXDBTRN_change_closure),(),((NL(HXDBTRN_change_closure)).nonlocals));
 /* line 600: */
 /* line 601: */
 /* line 602: */
DZDBTRN_same_spec = A68_TRUE;
} 
} 
 /* line 603: */
 /* line 604: */
if ( !DZDBTRN_same_spec )
{ 
YZDBTRN = (*(&(O.Environ->Types))) ;
ZZDBTRN = 1 ;
AAEBTRN_tdec = (*(&A_VINDEX(YZDBTRN,ZZDBTRN)));
 /* line 605: */
 /* line 606: */
OXDBTRN_test_type_body( (*(&(AAEBTRN_tdec->Body))), O.Closureno, NL(DXDBTRN_outer_names), &BAEBTRN );
CAEBTRN_tbc = BAEBTRN;
 /* line 608: */
if ( CAEBTRN_tbc.C )
{ 
 /* line 609: */
 /* line 610: */
DAEBTRN = O.Closureno ;
EAEBTRN = (&A_VINDEX(NL(NWDBTRN_typebodies),DAEBTRN)) ;
(*EAEBTRN) = CAEBTRN_tbc;
} 
} 
} 
 /* line 611: */
 /* line 612: */
FAEBTRN = DZDBTRN_same_spec;
} 
A_PROC_EXIT(test_outer_name);
return( FAEBTRN );
} 
#undef NL

A_STATIC A68_VOID  IAEBTRN_update_outer(A68_261  O, void *NonLocals)
#define NL(x) (((JAEBTRN_update_outer *)NonLocals)->x)
{ 
A68_255 * KAEBTRN_env;
A68_BOOL  LAEBTRN_ec;
A68_BOOL  MAEBTRN_ac;
A68_BOOL  NAEBTRN_ic;
A68_BOOL  OAEBTRN_tc;
A68_BOOL  PAEBTRN_cc;
A68_BOOL  QAEBTRN_fc;
A68_522  RAEBTRN_change_env;   /* proc value of non-global proc */
A68_476 * WAEBTRN_inner_names;
A68_305  YAEBTRN_attr_env_action;   /* proc value of non-global proc */
A68_305  UBEBTRN_int_env_action;   /* proc value of non-global proc */
A68_305  QCEBTRN_type_env_action;   /* proc value of non-global proc */
A68_305  ZDEBTRN_const_env_action;   /* proc value of non-global proc */
A68_527  VEEBTRN_generator;   /* proc value of non-global proc */
A68_54  BFEBTRN;  /* avoid structure result */
A68_54  AFEBTRN_fn_changes;
A68_BOOL * CFEBTRN_fcn;
A68_INT  DFEBTRN;  /* forall loop counter */
A68_528  IFEBTRN_update_fndec;   /* proc value of non-global proc */
A68_305  TGEBTRN_ofn_env_action;   /* proc value of non-global proc */
A68_305  FHEBTRN_ifn_env_action;   /* proc value of non-global proc */
A68_529  QHEBTRN_fndec_action;   /* proc value of non-global proc */
A68_INT  IIEBTRN_attrno;
A68_INT  JIEBTRN;  /* to part of loop */
A68_INT  KIEBTRN_intno;
A68_INT  LIEBTRN;  /* to part of loop */
A68_INT  MIEBTRN_typeno;
A68_INT  NIEBTRN;  /* to part of loop */
A68_INT  OIEBTRN_constno;
A68_INT  PIEBTRN;  /* to part of loop */
A68_INT  QIEBTRN_fnno;
A68_INT  RIEBTRN;  /* to part of loop */
A68_INT  SIEBTRN_fnno;
A68_INT  TIEBTRN;  /* to part of loop */
A68_442  WIEBTRN_declaration;   /* proc value of non-global proc */
A68_530  IJEBTRN;  /* collateral clause result */
A68_464  JJEBTRN;  /* OPERATORS - mode -> union mode */
A68_442  KJEBTRN;  /* YIELD */
A68_464  LJEBTRN;  /* OPERATORS - mode -> union mode */
A68_420  MJEBTRN;  /* procedure value */
A68_464  NJEBTRN;  /* OPERATORS - mode -> union mode */
A68_423  OJEBTRN;  /* procedure value */
A68_464  PJEBTRN;  /* OPERATORS - mode -> union mode */
A68_429  QJEBTRN;  /* procedure value */
A68_463  RJEBTRN;  /* OPERATORS - istruct -> vector */
A68_419 * SJEBTRN_newtprocs;
A68_INT  TJEBTRN;  /* YIELD */
A68_261  UJEBTRN;  /* collateral clause result */
A68_261 * VJEBTRN;  /* YIELD */
A_PROC_ENTRY(update_outer);
 /* line 615: */
 /* line 616: */
{ 
KAEBTRN_env = O.Environ;
 /* line 617: */
LAEBTRN_ec = A68_FALSE;
 /* line 618: */
MAEBTRN_ac = A68_FALSE;
NAEBTRN_ic = A68_FALSE;
OAEBTRN_tc = A68_FALSE;
PAEBTRN_cc = A68_FALSE;
QAEBTRN_fc = A68_FALSE;
 /* line 620: */
 /* line 621: */
A_CLOSURE( RAEBTRN_change_env, SAEBTRN_change_env, TAEBTRN_change_env );
(( TAEBTRN_change_env * ) ( RAEBTRN_change_env.nonlocals )) -> LAEBTRN_ec = (&LAEBTRN_ec);
(( TAEBTRN_change_env * ) ( RAEBTRN_change_env.nonlocals )) -> KAEBTRN_env = (&KAEBTRN_env);
(( TAEBTRN_change_env * ) ( RAEBTRN_change_env.nonlocals )) -> O = O;
 /* line 625: */
WAEBTRN_inner_names = MYCBTRN_nilidn;
 /* line 627: */
A_CLOSURE( YAEBTRN_attr_env_action, ZAEBTRN_attr_env_action, ABEBTRN_attr_env_action );
(( ABEBTRN_attr_env_action * ) ( YAEBTRN_attr_env_action.nonlocals )) -> KAEBTRN_env = (&KAEBTRN_env);
(( ABEBTRN_attr_env_action * ) ( YAEBTRN_attr_env_action.nonlocals )) -> TVDBTRN_translations = NL(TVDBTRN_translations);
(( ABEBTRN_attr_env_action * ) ( YAEBTRN_attr_env_action.nonlocals )) -> WAEBTRN_inner_names = (&WAEBTRN_inner_names);
(( ABEBTRN_attr_env_action * ) ( YAEBTRN_attr_env_action.nonlocals )) -> MAEBTRN_ac = (&MAEBTRN_ac);
(( ABEBTRN_attr_env_action * ) ( YAEBTRN_attr_env_action.nonlocals )) -> RAEBTRN_change_env = RAEBTRN_change_env;
 /* line 656: */
A_CLOSURE( UBEBTRN_int_env_action, VBEBTRN_int_env_action, WBEBTRN_int_env_action );
(( WBEBTRN_int_env_action * ) ( UBEBTRN_int_env_action.nonlocals )) -> KAEBTRN_env = (&KAEBTRN_env);
(( WBEBTRN_int_env_action * ) ( UBEBTRN_int_env_action.nonlocals )) -> TVDBTRN_translations = NL(TVDBTRN_translations);
(( WBEBTRN_int_env_action * ) ( UBEBTRN_int_env_action.nonlocals )) -> WAEBTRN_inner_names = (&WAEBTRN_inner_names);
(( WBEBTRN_int_env_action * ) ( UBEBTRN_int_env_action.nonlocals )) -> NAEBTRN_ic = (&NAEBTRN_ic);
(( WBEBTRN_int_env_action * ) ( UBEBTRN_int_env_action.nonlocals )) -> RAEBTRN_change_env = RAEBTRN_change_env;
 /* line 685: */
A_CLOSURE( QCEBTRN_type_env_action, RCEBTRN_type_env_action, SCEBTRN_type_env_action );
(( SCEBTRN_type_env_action * ) ( QCEBTRN_type_env_action.nonlocals )) -> KAEBTRN_env = (&KAEBTRN_env);
(( SCEBTRN_type_env_action * ) ( QCEBTRN_type_env_action.nonlocals )) -> TVDBTRN_translations = NL(TVDBTRN_translations);
(( SCEBTRN_type_env_action * ) ( QCEBTRN_type_env_action.nonlocals )) -> WAEBTRN_inner_names = (&WAEBTRN_inner_names);
(( SCEBTRN_type_env_action * ) ( QCEBTRN_type_env_action.nonlocals )) -> NWDBTRN_typebodies = NL(NWDBTRN_typebodies);
(( SCEBTRN_type_env_action * ) ( QCEBTRN_type_env_action.nonlocals )) -> OAEBTRN_tc = (&OAEBTRN_tc);
(( SCEBTRN_type_env_action * ) ( QCEBTRN_type_env_action.nonlocals )) -> EWDBTRN_typealiases = NL(EWDBTRN_typealiases);
 /* line 733: */
A_CLOSURE( ZDEBTRN_const_env_action, AEEBTRN_const_env_action, BEEBTRN_const_env_action );
(( BEEBTRN_const_env_action * ) ( ZDEBTRN_const_env_action.nonlocals )) -> KAEBTRN_env = (&KAEBTRN_env);
(( BEEBTRN_const_env_action * ) ( ZDEBTRN_const_env_action.nonlocals )) -> TVDBTRN_translations = NL(TVDBTRN_translations);
(( BEEBTRN_const_env_action * ) ( ZDEBTRN_const_env_action.nonlocals )) -> WAEBTRN_inner_names = (&WAEBTRN_inner_names);
(( BEEBTRN_const_env_action * ) ( ZDEBTRN_const_env_action.nonlocals )) -> PAEBTRN_cc = (&PAEBTRN_cc);
(( BEEBTRN_const_env_action * ) ( ZDEBTRN_const_env_action.nonlocals )) -> RAEBTRN_change_env = RAEBTRN_change_env;
 /* line 763: */
A_CLOSURE( VEEBTRN_generator, WEEBTRN_generator, XEEBTRN_generator );
(( XEEBTRN_generator * ) ( VEEBTRN_generator.nonlocals )) -> KAEBTRN_env = (&KAEBTRN_env);
A_CALLPROC(VEEBTRN_generator,(A68_TRUE, &BFEBTRN),(A68_TRUE, &BFEBTRN,(VEEBTRN_generator).nonlocals));
AFEBTRN_fn_changes = BFEBTRN;
 /* line 764: */
DFEBTRN = AFEBTRN_fn_changes.upb -1;
CFEBTRN_fcn = AFEBTRN_fn_changes.data;
for (;DFEBTRN-- >= 0;
(CFEBTRN_fcn++
) )
{
(*CFEBTRN_fcn) = A68_FALSE;
}
 /* line 766: */
A_CLOSURE( IFEBTRN_update_fndec, JFEBTRN_update_fndec, KFEBTRN_update_fndec );
(( KFEBTRN_update_fndec * ) ( IFEBTRN_update_fndec.nonlocals )) -> AFEBTRN_fn_changes = AFEBTRN_fn_changes;
(( KFEBTRN_update_fndec * ) ( IFEBTRN_update_fndec.nonlocals )) -> QAEBTRN_fc = (&QAEBTRN_fc);
(( KFEBTRN_update_fndec * ) ( IFEBTRN_update_fndec.nonlocals )) -> RAEBTRN_change_env = RAEBTRN_change_env;
(( KFEBTRN_update_fndec * ) ( IFEBTRN_update_fndec.nonlocals )) -> KAEBTRN_env = (&KAEBTRN_env);
 /* line 800: */
A_CLOSURE( TGEBTRN_ofn_env_action, UGEBTRN_ofn_env_action, VGEBTRN_ofn_env_action );
(( VGEBTRN_ofn_env_action * ) ( TGEBTRN_ofn_env_action.nonlocals )) -> KAEBTRN_env = (&KAEBTRN_env);
(( VGEBTRN_ofn_env_action * ) ( TGEBTRN_ofn_env_action.nonlocals )) -> TVDBTRN_translations = NL(TVDBTRN_translations);
(( VGEBTRN_ofn_env_action * ) ( TGEBTRN_ofn_env_action.nonlocals )) -> WAEBTRN_inner_names = (&WAEBTRN_inner_names);
(( VGEBTRN_ofn_env_action * ) ( TGEBTRN_ofn_env_action.nonlocals )) -> IFEBTRN_update_fndec = IFEBTRN_update_fndec;
(( VGEBTRN_ofn_env_action * ) ( TGEBTRN_ofn_env_action.nonlocals )) -> ZWDBTRN_portname_changes = NL(ZWDBTRN_portname_changes);
 /* line 812: */
A_CLOSURE( FHEBTRN_ifn_env_action, GHEBTRN_ifn_env_action, HHEBTRN_ifn_env_action );
(( HHEBTRN_ifn_env_action * ) ( FHEBTRN_ifn_env_action.nonlocals )) -> KAEBTRN_env = (&KAEBTRN_env);
(( HHEBTRN_ifn_env_action * ) ( FHEBTRN_ifn_env_action.nonlocals )) -> WAEBTRN_inner_names = (&WAEBTRN_inner_names);
(( HHEBTRN_ifn_env_action * ) ( FHEBTRN_ifn_env_action.nonlocals )) -> IFEBTRN_update_fndec = IFEBTRN_update_fndec;
 /* line 823: */
A_CLOSURE( QHEBTRN_fndec_action, RHEBTRN_fndec_action, SHEBTRN_fndec_action );
(( SHEBTRN_fndec_action * ) ( QHEBTRN_fndec_action.nonlocals )) -> KAEBTRN_env = (&KAEBTRN_env);
(( SHEBTRN_fndec_action * ) ( QHEBTRN_fndec_action.nonlocals )) -> EVDBTRN_old_scope_rules = NL(EVDBTRN_old_scope_rules);
(( SHEBTRN_fndec_action * ) ( QHEBTRN_fndec_action.nonlocals )) -> FVDBTRN_name_all_inputs = NL(FVDBTRN_name_all_inputs);
(( SHEBTRN_fndec_action * ) ( QHEBTRN_fndec_action.nonlocals )) -> HVDBTRN_name_all_outputs = NL(HVDBTRN_name_all_outputs);
(( SHEBTRN_fndec_action * ) ( QHEBTRN_fndec_action.nonlocals )) -> WAEBTRN_inner_names = (&WAEBTRN_inner_names);
(( SHEBTRN_fndec_action * ) ( QHEBTRN_fndec_action.nonlocals )) -> QAEBTRN_fc = (&QAEBTRN_fc);
(( SHEBTRN_fndec_action * ) ( QHEBTRN_fndec_action.nonlocals )) -> RAEBTRN_change_env = RAEBTRN_change_env;
 /* line 858: */
JIEBTRN = (*(&(KAEBTRN_env->Attrs))).upb;
for ( IIEBTRN_attrno = 1;
IIEBTRN_attrno <= JIEBTRN;
IIEBTRN_attrno += 1 )
{ 
A_CALLPROC(YAEBTRN_attr_env_action,(IIEBTRN_attrno),(IIEBTRN_attrno,(YAEBTRN_attr_env_action).nonlocals));
}
 /* line 860: */
LIEBTRN = (*(&(KAEBTRN_env->Ints))).upb;
for ( KIEBTRN_intno = 1;
KIEBTRN_intno <= LIEBTRN;
KIEBTRN_intno += 1 )
{ 
A_CALLPROC(UBEBTRN_int_env_action,(KIEBTRN_intno),(KIEBTRN_intno,(UBEBTRN_int_env_action).nonlocals));
}
 /* line 862: */
NIEBTRN = (*(&(KAEBTRN_env->Types))).upb;
for ( MIEBTRN_typeno = 1;
MIEBTRN_typeno <= NIEBTRN;
MIEBTRN_typeno += 1 )
{ 
A_CALLPROC(QCEBTRN_type_env_action,(MIEBTRN_typeno),(MIEBTRN_typeno,(QCEBTRN_type_env_action).nonlocals));
}
 /* line 864: */
PIEBTRN = (*(&(KAEBTRN_env->Consts))).upb;
for ( OIEBTRN_constno = 1;
OIEBTRN_constno <= PIEBTRN;
OIEBTRN_constno += 1 )
{ 
A_CALLPROC(ZDEBTRN_const_env_action,(OIEBTRN_constno),(OIEBTRN_constno,(ZDEBTRN_const_env_action).nonlocals));
}
 /* line 873: */
RIEBTRN = (*(&(KAEBTRN_env->Fns))).upb;
for ( QIEBTRN_fnno = 1;
QIEBTRN_fnno <= RIEBTRN;
QIEBTRN_fnno += 1 )
{ 
A_CALLPROC(TGEBTRN_ofn_env_action,(QIEBTRN_fnno),(QIEBTRN_fnno,(TGEBTRN_ofn_env_action).nonlocals));
}
 /* line 874: */
TIEBTRN = (*(&(KAEBTRN_env->Fns))).upb;
for ( SIEBTRN_fnno = 1;
SIEBTRN_fnno <= TIEBTRN;
SIEBTRN_fnno += 1 )
{ 
A_CALLPROC(FHEBTRN_ifn_env_action,(SIEBTRN_fnno),(SIEBTRN_fnno,(FHEBTRN_ifn_env_action).nonlocals));
}
 /* line 876: */
A_CLOSURE( WIEBTRN_declaration, XIEBTRN_declaration, YIEBTRN_declaration );
(( YIEBTRN_declaration * ) ( WIEBTRN_declaration.nonlocals )) -> QHEBTRN_fndec_action = QHEBTRN_fndec_action;
 /* line 890: */
 /* line 891: */
 /* line 895: */
if ( (O.Sort==VKAATRN_outerfn) )
{ 
 /* line 896: */
 /* line 897: */
KJEBTRN = WIEBTRN_declaration ;
IJEBTRN.data[0] = A_UNITE(JJEBTRN,mode23,23,KJEBTRN);
 /* line 898: */
MJEBTRN.fn.fn_global = DWLATRN_null_attr;
MJEBTRN.nonlocals = A68_NIL;
IJEBTRN.data[1] = A_UNITE(LJEBTRN,mode1,1,MJEBTRN);
 /* line 899: */
OJEBTRN.fn.fn_global = IWLATRN_null_formula;
OJEBTRN.nonlocals = A68_NIL;
IJEBTRN.data[2] = A_UNITE(NJEBTRN,mode4,4,OJEBTRN);
QJEBTRN.fn.fn_global = NWLATRN_null_type;
QJEBTRN.nonlocals = A68_NIL;
IJEBTRN.data[3] = A_UNITE(PJEBTRN,mode10,10,QJEBTRN);
SJEBTRN_newtprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HISVEC(RJEBTRN,IJEBTRN,4,A68_464 ));
 /* line 900: */
TJEBTRN = O.Closureno ;
A_CALLPROC(QHEBTRN_fndec_action,(1, (&A_VINDEX(NL(ZWDBTRN_portname_changes),TJEBTRN)), SJEBTRN_newtprocs),(1, (&A_VINDEX(NL(ZWDBTRN_portname_changes),TJEBTRN)), SJEBTRN_newtprocs,(QHEBTRN_fndec_action).nonlocals));
 /* line 901: */
 /* line 902: */
MLJATRN_discard_tprocs(SJEBTRN_newtprocs);
} 
 /* line 904: */
 /* line 905: */
 /* line 906: */
if ( LAEBTRN_ec )
{ 
A_CALLPROC(NL(HXDBTRN_change_closure),(),((NL(HXDBTRN_change_closure)).nonlocals));
 /* line 907: */
UJEBTRN.Closureno = O.Closureno;
UJEBTRN.Sort = O.Sort;
 /* line 908: */
UJEBTRN.Environ = KAEBTRN_env;
 /* line 909: */
VJEBTRN = (&((**NL(GXDBTRN_newptr))->Outer)) ;
(*VJEBTRN) = UJEBTRN;
} 
} 
A_PROC_EXIT(update_outer);
return;
} 
#undef NL

A68_VOID  OYCBTRN_names_old_scope_rules(A68_466  *ReturnedValue)
{ 
A68_466  PYCBTRN;  /* clause result */
A68_466  QYCBTRN;  /* avoid structure result */
A_PROC_ENTRY(names_old_scope_rules);
FCAAOST_makeoptions( 1, &QYCBTRN );
PYCBTRN = QYCBTRN;
A_PROC_EXIT(names_old_scope_rules);
*ReturnedValue = (PYCBTRN);
return;
} 
#undef NL

A68_VOID  RYCBTRN_names_name_all_inputs(A68_466  *ReturnedValue)
{ 
A68_466  SYCBTRN;  /* clause result */
A68_466  TYCBTRN;  /* avoid structure result */
A_PROC_ENTRY(names_name_all_inputs);
FCAAOST_makeoptions( 2, &TYCBTRN );
SYCBTRN = TYCBTRN;
A_PROC_EXIT(names_name_all_inputs);
*ReturnedValue = (SYCBTRN);
return;
} 
#undef NL

A68_VOID  UYCBTRN_names_name_all_outputs(A68_466  *ReturnedValue)
{ 
A68_466  VYCBTRN;  /* clause result */
A68_466  WYCBTRN;  /* avoid structure result */
A_PROC_ENTRY(names_name_all_outputs);
FCAAOST_makeoptions( 3, &WYCBTRN );
VYCBTRN = WYCBTRN;
A_PROC_EXIT(names_name_all_outputs);
*ReturnedValue = (VYCBTRN);
return;
} 
#undef NL

A68_VOID  XYCBTRN_names_name_all_ports(A68_466  *ReturnedValue)
{ 
A68_466  YYCBTRN;  /* clause result */
A68_466  ZYCBTRN;  /* avoid structure result */
A_PROC_ENTRY(names_name_all_ports);
FCAAOST_makeoptions( 4, &ZYCBTRN );
YYCBTRN = ZYCBTRN;
A_PROC_EXIT(names_name_all_ports);
*ReturnedValue = (YYCBTRN);
return;
} 
#undef NL

A68_VOID  AZCBTRN_names_vhdl_rules(A68_466  *ReturnedValue)
{ 
A68_466  BZCBTRN;  /* clause result */
A68_466  CZCBTRN;  /* avoid structure result */
A_PROC_ENTRY(names_vhdl_rules);
FCAAOST_makeoptions( 5, &CZCBTRN );
BZCBTRN = CZCBTRN;
A_PROC_EXIT(names_vhdl_rules);
*ReturnedValue = (BZCBTRN);
return;
} 
#undef NL

A_STATIC A68_INT  UZCBTRN_anonymous(A68_VC  Name, A68_BOOL  Strops)
{ 
A68_338  VZCBTRN;  /* avoid structure result */
A68_INT  WZCBTRN;  /* clause result */
 /* line 84: */
{ 
BDBATRN_makelookup(  &VZCBTRN );
RZCBTRN_lookup = VZCBTRN;
 /* line 85: */
 /* line 86: */
WZCBTRN = A_CALLPROC(RZCBTRN_lookup,(Name, Strops),(Name, Strops,(RZCBTRN_lookup).nonlocals));
} 
return( WZCBTRN );
} 
#undef NL

A_STATIC A68_INT  RHDBTRN_vhdl_illegal(A68_VC  Name)
{ 
A68_31  THDBTRN_generator;   /* proc value of non-global proc */
A68_VC  ZHDBTRN;  /* avoid structure result */
A68_VC  YHDBTRN_np;
A68_INT  AIDBTRN_result;
A68_CHAR  BIDBTRN_lc;
A68_CHAR * CIDBTRN_cc;
A68_INT  DIDBTRN;  /* forall loop counter */
A68_INT  EIDBTRN;  /* clause result */
A68_BOOL  FIDBTRN;  /* optbool result */
A68_BOOL  GIDBTRN;  /* optbool result */
A68_BOOL  HIDBTRN;  /* optbool result */
A68_BOOL  IIDBTRN;  /* optbool result */
A68_VC  JIDBTRN_nn;
A68_VC * KIDBTRN;  /* forall control - []x */
A68_INT  LIDBTRN;  /* forall loop counter */
A68_INT  MIDBTRN;  /* clause result */
A_PROC_ENTRY(vhdl_illegal);
 /* line 110: */
 /* line 111: */
{ 
A_CLOSURE( THDBTRN_generator, UHDBTRN_generator, VHDBTRN_generator );
(( VHDBTRN_generator * ) ( THDBTRN_generator.nonlocals )) -> Name = Name;
A_CALLPROC(THDBTRN_generator,(A68_TRUE, &ZHDBTRN),(A68_TRUE, &ZHDBTRN,(THDBTRN_generator).nonlocals));
YHDBTRN_np = ZHDBTRN;
A_VASSIGN2(Name,YHDBTRN_np,A68_CHAR );
 /* line 112: */
AIDBTRN_result = 0;
 /* line 113: */
BIDBTRN_lc = ' ';
 /* line 114: */
DIDBTRN = YHDBTRN_np.upb -1;
CIDBTRN_cc = YHDBTRN_np.data;
for (;DIDBTRN-- >= 0;
(CIDBTRN_cc++
) )
{
 /* line 115: */
if ( !((AIDBTRN_result==0)) ) break;
 /* line 116: */
if ( ((*CIDBTRN_cc)=='_') )
{ 
 /* line 117: */
EIDBTRN = ((BIDBTRN_lc=='_'));
} 
else
{ 
FIDBTRN = ((*CIDBTRN_cc)<'0');
if ( ! FIDBTRN )
{FIDBTRN = ((*CIDBTRN_cc)>'z');
}
 /* line 118: */
if ( ! FIDBTRN )
{GIDBTRN = ((*CIDBTRN_cc)>'9');
if ( GIDBTRN )
{GIDBTRN = ((*CIDBTRN_cc)<'A');
}
FIDBTRN = GIDBTRN;
}
 /* line 119: */
if ( ! FIDBTRN )
{HIDBTRN = ((*CIDBTRN_cc)>'Z');
if ( HIDBTRN )
{HIDBTRN = ((*CIDBTRN_cc)<'a');
}
FIDBTRN = HIDBTRN;
}
 /* line 120: */
EIDBTRN = (FIDBTRN);
} 
AIDBTRN_result = (EIDBTRN*2);
 /* line 121: */
IIDBTRN = ((*CIDBTRN_cc)>='a');
if ( IIDBTRN )
{IIDBTRN = ((*CIDBTRN_cc)<='z');
}
if ( IIDBTRN )
{ 
(*CIDBTRN_cc) = (A68_CHAR)((A68_INT)(unsigned char)(*CIDBTRN_cc)-PHDBTRN_lc_bias);
} 
 /* line 122: */
 /* line 123: */
BIDBTRN_lc = (*CIDBTRN_cc);
}
 /* line 124: */
LIDBTRN = OHDBTRN_vhdl_reserved.upb -1;
KIDBTRN = OHDBTRN_vhdl_reserved.data;
for (;LIDBTRN-- >= 0;
(KIDBTRN++
) )
{
JIDBTRN_nn = *KIDBTRN;
if ( !((AIDBTRN_result==0)) ) break;
AIDBTRN_result = (A_VC_EQ(JIDBTRN_nn,YHDBTRN_np));
}
 /* line 125: */
 /* line 126: */
MIDBTRN = AIDBTRN_result;
} 
A_PROC_EXIT(vhdl_illegal);
return( MIDBTRN );
} 
#undef NL

A_STATIC A68_476 * PIDBTRN_find_name(A68_VC  Name, A68_476 * List)
{ 
A68_476 * QIDBTRN_ee;
A68_BOOL  RIDBTRN;  /* optbool result */
A68_476 * SIDBTRN;  /* clause result */
A_PROC_ENTRY(find_name);
 /* line 129: */
 /* line 130: */
{ 
QIDBTRN_ee = List;
 /* line 132: */
for ( ;; )
{ 
RIDBTRN = (QIDBTRN_ee!=MYCBTRN_nilidn);
if ( RIDBTRN )
{RIDBTRN = A_VC_NE((*(&(QIDBTRN_ee->Id))),Name);
}
if ( !(RIDBTRN) ) break;
QIDBTRN_ee = (*(&(QIDBTRN_ee->Rest)));
}
 /* line 133: */
 /* line 134: */
SIDBTRN = QIDBTRN_ee;
} 
A_PROC_EXIT(find_name);
return( SIDBTRN );
} 
#undef NL

A_STATIC A68_VOID  UIDBTRN_generator(A68_BOOL  TIDBTRN_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  VIDBTRN;  /* clause result */
A68_VC  WIDBTRN;  /* OPERATORS - dynamic generator */
{ 
WIDBTRN.upb = 3 ;
( TIDBTRN_anonymous? A_VLOC(A68_CHAR ,WIDBTRN): A_VHEAP(A68_CHAR ,WIDBTRN) );
VIDBTRN = WIDBTRN;
} 
*ReturnedValue = (VIDBTRN);
return;
} 
#undef NL
 /* line 140: */
 /* line 141: */
 /* line 142: */
 /* line 143: */
 /* line 144: */

A_STATIC A68_VOID  OJDBTRN_test_name(A68_VC  Name, A68_INT  Nameno, A68_INT  Sort, A68_476 ** List, A68_BOOL  Lower_case, A68_BOOL  Port, A68_475  *ReturnedValue)
{ 
A68_CHAR  PJDBTRN;  /* clause result */
A68_CHAR  QJDBTRN_prefix;
A68_497  SJDBTRN_modify_name;   /* proc value of non-global proc */
A68_475  ALDBTRN;  /* clause result */
A68_475  BLDBTRN;  /* avoid structure result */
A68_475  CLDBTRN;  /* collateral clause result */
A68_475  DLDBTRN;  /* collateral clause result */
A68_498  ELDBTRN;  /* collateral clause result */
A68_52  FLDBTRN;  /* OPERATORS - mode -> union mode */
A68_52  GLDBTRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  HLDBTRN;  /* YIELD */
A68_52  ILDBTRN;  /* OPERATORS - mode -> union mode */
A68_85  JLDBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  KLDBTRN;  /* avoid structure result */
A68_475  LLDBTRN;  /* avoid structure result */
A_PROC_ENTRY(test_name);
 /* line 145: */
 /* line 146: */
{ 
if ( Lower_case )
{ 
PJDBTRN = 'n';
} 
else
{ 
PJDBTRN = 'N';
} 
QJDBTRN_prefix = PJDBTRN;
 /* line 148: */
A_CLOSURE( SJDBTRN_modify_name, TJDBTRN_modify_name, UJDBTRN_modify_name );
(( UJDBTRN_modify_name * ) ( SJDBTRN_modify_name.nonlocals )) -> QJDBTRN_prefix = QJDBTRN_prefix;
(( UJDBTRN_modify_name * ) ( SJDBTRN_modify_name.nonlocals )) -> Nameno = Nameno;
(( UJDBTRN_modify_name * ) ( SJDBTRN_modify_name.nonlocals )) -> Lower_case = Lower_case;
(( UJDBTRN_modify_name * ) ( SJDBTRN_modify_name.nonlocals )) -> List = List;
(( UJDBTRN_modify_name * ) ( SJDBTRN_modify_name.nonlocals )) -> Sort = Sort;
 /* line 202: */
 /* line 203: */
if ( (Name.upb>0) )
{ 
 /* line 204: */
 /* line 205: */
A_CALLPROC(SJDBTRN_modify_name,(Name, &BLDBTRN),(Name, &BLDBTRN,(SJDBTRN_modify_name).nonlocals));
ALDBTRN = BLDBTRN;
} 
else
{ 
if ( Port )
{ 
CLDBTRN.I = TTCAOST_nullid;
 /* line 206: */
CLDBTRN.C = A68_FALSE;
ALDBTRN = CLDBTRN;
} 
else
{ 
ELDBTRN.data[0] = A_UNITE(FLDBTRN,mode6,6,QJDBTRN_prefix);
HLDBTRN = '_' ;
ELDBTRN.data[1] = A_UNITE(GLDBTRN,mode6,6,HLDBTRN);
ELDBTRN.data[2] = A_UNITE(ILDBTRN,mode1,1,Nameno);
UJBAOSL_oneline( A_HISVEC(JLDBTRN,ELDBTRN,3,A68_52 ), &KLDBTRN );
A_CALLPROC(SJDBTRN_modify_name,(KLDBTRN, &LLDBTRN),(KLDBTRN, &LLDBTRN,(SJDBTRN_modify_name).nonlocals));
DLDBTRN.I = LLDBTRN.I;
 /* line 207: */
 /* line 208: */
DLDBTRN.C = A68_TRUE;
ALDBTRN = DLDBTRN;
} 
} 
} 
A_PROC_EXIT(test_name);
*ReturnedValue = (ALDBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  NLDBTRN_dec_name(A68_261  O, A68_VC  *ReturnedValue)
{ 
A68_VC  OLDBTRN;  /* clause result */
A68_256  PLDBTRN;  /* OPERATORS - simple index */
A68_INT  QLDBTRN;  /* YIELD */
A68_257  RLDBTRN;  /* OPERATORS - simple index */
A68_INT  SLDBTRN;  /* YIELD */
A68_258  TLDBTRN;  /* OPERATORS - simple index */
A68_INT  ULDBTRN;  /* YIELD */
A68_259  VLDBTRN;  /* OPERATORS - simple index */
A68_INT  WLDBTRN;  /* YIELD */
A68_260  XLDBTRN;  /* OPERATORS - simple index */
A68_INT  YLDBTRN;  /* YIELD */
A_PROC_ENTRY(dec_name);
 /* line 211: */
 /* line 212: */
{ 
switch ( O.Sort )
{ 
case 1: 
 /* line 213: */
PLDBTRN = (*(&(O.Environ->Attrs))) ;
QLDBTRN = 1 ;
OLDBTRN = (*(&((*(&A_VINDEX(PLDBTRN,QLDBTRN)))->Attrname)));
break;
case 2: 
 /* line 214: */
RLDBTRN = (*(&(O.Environ->Ints))) ;
SLDBTRN = 1 ;
OLDBTRN = (*(&((*(&A_VINDEX(RLDBTRN,SLDBTRN)))->Intname)));
break;
case 3: 
 /* line 215: */
TLDBTRN = (*(&(O.Environ->Types))) ;
ULDBTRN = 1 ;
OLDBTRN = (*(&((*(&A_VINDEX(TLDBTRN,ULDBTRN)))->Typename)));
break;
case 4: 
 /* line 216: */
VLDBTRN = (*(&(O.Environ->Consts))) ;
WLDBTRN = 1 ;
OLDBTRN = (*(&((*(&A_VINDEX(VLDBTRN,WLDBTRN)))->Constname)));
break;
case 5: 
 /* line 217: */
 /* line 219: */
XLDBTRN = (*(&(O.Environ->Fns))) ;
YLDBTRN = 1 ;
OLDBTRN = (*(&((*(&A_VINDEX(XLDBTRN,YLDBTRN)))->Fnname)));
break;
default: 
 /* line 220: */
OLDBTRN = TTCAOST_nullid;
break;
} 
} 
A_PROC_EXIT(dec_name);
*ReturnedValue = (OLDBTRN);
return;
} 
#undef NL
 /* line 223: */
 /* line 224: */
 /* line 225: */
 /* line 226: */
 /* line 227: */
 /* line 228: */
 /* line 229: */

A_STATIC A68_VOID  HMDBTRN_fndec_names(A68_252 * Fdec, A68_419 * Tprocs, A68_255 * Env, A68_BOOL  Old_scope_rules, A68_BOOL  Name_all_inputs, A68_BOOL  Name_all_outputs, A68_252 ** Portname_change, A68_476 * Inner_names, A68_416  *ReturnedValue)
{ 
A68_476 * IMDBTRN_dec_names_list;
A68_252 * JMDBTRN_newfd;
A68_254  KMDBTRN_nametypes;
A68_INT  LMDBTRN_max_port_num;
A68_INT  MMDBTRN_min_change_num;
A68_BOOL  NMDBTRN_chfn;
A68_BOOL  OMDBTRN_chnt;
A68_BOOL  PMDBTRN_chrp;
A68_501  QMDBTRN_change_fndec;   /* proc value of non-global proc */
A68_502  YMDBTRN_change_local_name;   /* proc value of non-global proc */
A68_504  RNDBTRN_do_names;   /* proc value of non-global proc */
A68_505  CODBTRN_examine_name;   /* proc value of non-global proc */
A68_507  QODBTRN_add_tag_name;   /* proc value of non-global proc */
A68_508  DPDBTRN_add_type_name;   /* proc value of non-global proc */
A68_509  QQDBTRN_do_unit;   /* proc value of non-global proc */
A68_510  LRDBTRN_do_series;   /* proc value of non-global proc */
A68_446  VSDBTRN_dec_names;   /* proc value of non-global proc */
A68_438  CTDBTRN_dec_unit;   /* proc value of non-global proc */
A68_438  NTDBTRN_pre_pass_unit;   /* proc value of non-global proc */
A68_403  CUDBTRN;  /* avoid structure result */
A68_403  DUDBTRN;  /* avoid structure result */
A68_511  EUDBTRN;  /* collateral clause result */
A68_464  FUDBTRN;  /* OPERATORS - mode -> union mode */
A68_438  GUDBTRN;  /* YIELD */
A68_464  HUDBTRN;  /* OPERATORS - mode -> union mode */
A68_442  IUDBTRN;  /* YIELD */
A68_442  JUDBTRN;  /* procedure value */
A68_463  KUDBTRN;  /* OPERATORS - istruct -> vector */
A68_419 * LUDBTRN_pptprocs;
A68_456  MUDBTRN;  /* CALL */
A68_413  NUDBTRN;  /* avoid structure result */
A68_511  OUDBTRN;  /* collateral clause result */
A68_464  PUDBTRN;  /* OPERATORS - mode -> union mode */
A68_438  QUDBTRN;  /* YIELD */
A68_464  RUDBTRN;  /* OPERATORS - mode -> union mode */
A68_446  SUDBTRN;  /* YIELD */
A68_463  TUDBTRN;  /* OPERATORS - istruct -> vector */
A68_419 * UUDBTRN_newtprocs;
A68_456  VUDBTRN;  /* CALL */
A68_413  WUDBTRN;  /* avoid structure result */
A68_416  XUDBTRN;  /* collateral clause result */
A68_416  YUDBTRN;  /* clause result */
A_PROC_ENTRY(fndec_names);
 /* line 230: */
 /* line 231: */
{ 
IMDBTRN_dec_names_list = Inner_names;
 /* line 232: */
JMDBTRN_newfd = Fdec;
 /* line 233: */
KMDBTRN_nametypes = (*(&(JMDBTRN_newfd->Nametypes)));
 /* line 234: */
LMDBTRN_max_port_num = 0;
MMDBTRN_min_change_num = (KMDBTRN_nametypes.upb+1);
 /* line 235: */
NMDBTRN_chfn = A68_FALSE;
OMDBTRN_chnt = A68_FALSE;
PMDBTRN_chrp = A68_FALSE;
 /* line 237: */
 /* line 238: */
A_CLOSURE( QMDBTRN_change_fndec, RMDBTRN_change_fndec, SMDBTRN_change_fndec );
(( SMDBTRN_change_fndec * ) ( QMDBTRN_change_fndec.nonlocals )) -> NMDBTRN_chfn = (&NMDBTRN_chfn);
(( SMDBTRN_change_fndec * ) ( QMDBTRN_change_fndec.nonlocals )) -> JMDBTRN_newfd = (&JMDBTRN_newfd);
(( SMDBTRN_change_fndec * ) ( QMDBTRN_change_fndec.nonlocals )) -> Fdec = Fdec;
 /* line 242: */
A_CLOSURE( YMDBTRN_change_local_name, ZMDBTRN_change_local_name, ANDBTRN_change_local_name );
(( ANDBTRN_change_local_name * ) ( YMDBTRN_change_local_name.nonlocals )) -> KMDBTRN_nametypes = (&KMDBTRN_nametypes);
(( ANDBTRN_change_local_name * ) ( YMDBTRN_change_local_name.nonlocals )) -> QMDBTRN_change_fndec = QMDBTRN_change_fndec;
(( ANDBTRN_change_local_name * ) ( YMDBTRN_change_local_name.nonlocals )) -> OMDBTRN_chnt = (&OMDBTRN_chnt);
(( ANDBTRN_change_local_name * ) ( YMDBTRN_change_local_name.nonlocals )) -> MMDBTRN_min_change_num = (&MMDBTRN_min_change_num);
 /* line 267: */
A_CLOSURE( RNDBTRN_do_names, SNDBTRN_do_names, TNDBTRN_do_names );
(( TNDBTRN_do_names * ) ( RNDBTRN_do_names.nonlocals )) -> LMDBTRN_max_port_num = (&LMDBTRN_max_port_num);
(( TNDBTRN_do_names * ) ( RNDBTRN_do_names.nonlocals )) -> YMDBTRN_change_local_name = YMDBTRN_change_local_name;
(( TNDBTRN_do_names * ) ( RNDBTRN_do_names.nonlocals )) -> RNDBTRN_do_names = RNDBTRN_do_names;
 /* line 278: */
A_CLOSURE( CODBTRN_examine_name, DODBTRN_examine_name, EODBTRN_examine_name );
(( EODBTRN_examine_name * ) ( CODBTRN_examine_name.nonlocals )) -> YMDBTRN_change_local_name = YMDBTRN_change_local_name;
 /* line 301: */
A_CLOSURE( QODBTRN_add_tag_name, RODBTRN_add_tag_name, SODBTRN_add_tag_name );
(( SODBTRN_add_tag_name * ) ( QODBTRN_add_tag_name.nonlocals )) -> Env = Env;
(( SODBTRN_add_tag_name * ) ( QODBTRN_add_tag_name.nonlocals )) -> CODBTRN_examine_name = CODBTRN_examine_name;
 /* line 315: */
A_CLOSURE( DPDBTRN_add_type_name, EPDBTRN_add_type_name, FPDBTRN_add_type_name );
(( FPDBTRN_add_type_name * ) ( DPDBTRN_add_type_name.nonlocals )) -> Env = Env;
(( FPDBTRN_add_type_name * ) ( DPDBTRN_add_type_name.nonlocals )) -> CODBTRN_examine_name = CODBTRN_examine_name;
(( FPDBTRN_add_type_name * ) ( DPDBTRN_add_type_name.nonlocals )) -> DPDBTRN_add_type_name = DPDBTRN_add_type_name;
(( FPDBTRN_add_type_name * ) ( DPDBTRN_add_type_name.nonlocals )) -> Fdec = Fdec;
 /* line 359: */
A_CLOSURE( QQDBTRN_do_unit, RQDBTRN_do_unit, SQDBTRN_do_unit );
(( SQDBTRN_do_unit * ) ( QQDBTRN_do_unit.nonlocals )) -> Env = Env;
(( SQDBTRN_do_unit * ) ( QQDBTRN_do_unit.nonlocals )) -> CODBTRN_examine_name = CODBTRN_examine_name;
(( SQDBTRN_do_unit * ) ( QQDBTRN_do_unit.nonlocals )) -> DPDBTRN_add_type_name = DPDBTRN_add_type_name;
(( SQDBTRN_do_unit * ) ( QQDBTRN_do_unit.nonlocals )) -> QODBTRN_add_tag_name = QODBTRN_add_tag_name;
(( SQDBTRN_do_unit * ) ( QQDBTRN_do_unit.nonlocals )) -> KMDBTRN_nametypes = (&KMDBTRN_nametypes);
(( SQDBTRN_do_unit * ) ( QQDBTRN_do_unit.nonlocals )) -> QQDBTRN_do_unit = QQDBTRN_do_unit;
 /* line 392: */
A_CLOSURE( LRDBTRN_do_series, MRDBTRN_do_series, NRDBTRN_do_series );
(( NRDBTRN_do_series * ) ( LRDBTRN_do_series.nonlocals )) -> Old_scope_rules = Old_scope_rules;
(( NRDBTRN_do_series * ) ( LRDBTRN_do_series.nonlocals )) -> IMDBTRN_dec_names_list = (&IMDBTRN_dec_names_list);
(( NRDBTRN_do_series * ) ( LRDBTRN_do_series.nonlocals )) -> RNDBTRN_do_names = RNDBTRN_do_names;
(( NRDBTRN_do_series * ) ( LRDBTRN_do_series.nonlocals )) -> QQDBTRN_do_unit = QQDBTRN_do_unit;
(( NRDBTRN_do_series * ) ( LRDBTRN_do_series.nonlocals )) -> LRDBTRN_do_series = LRDBTRN_do_series;
 /* line 421: */
A_CLOSURE( VSDBTRN_dec_names, WSDBTRN_dec_names, XSDBTRN_dec_names );
(( XSDBTRN_dec_names * ) ( VSDBTRN_dec_names.nonlocals )) -> RNDBTRN_do_names = RNDBTRN_do_names;
(( XSDBTRN_dec_names * ) ( VSDBTRN_dec_names.nonlocals )) -> IMDBTRN_dec_names_list = (&IMDBTRN_dec_names_list);
 /* line 424: */
A_CLOSURE( CTDBTRN_dec_unit, DTDBTRN_dec_unit, ETDBTRN_dec_unit );
(( ETDBTRN_dec_unit * ) ( CTDBTRN_dec_unit.nonlocals )) -> LRDBTRN_do_series = LRDBTRN_do_series;
 /* line 434: */
A_CLOSURE( NTDBTRN_pre_pass_unit, OTDBTRN_pre_pass_unit, PTDBTRN_pre_pass_unit );
(( PTDBTRN_pre_pass_unit * ) ( NTDBTRN_pre_pass_unit.nonlocals )) -> KMDBTRN_nametypes = (&KMDBTRN_nametypes);
(( PTDBTRN_pre_pass_unit * ) ( NTDBTRN_pre_pass_unit.nonlocals )) -> YMDBTRN_change_local_name = YMDBTRN_change_local_name;
(( PTDBTRN_pre_pass_unit * ) ( NTDBTRN_pre_pass_unit.nonlocals )) -> IMDBTRN_dec_names_list = (&IMDBTRN_dec_names_list);
 /* line 448: */
 /* line 451: */
A_CALLPROC(RNDBTRN_do_names,((*(&(Fdec->Inputs))), !Name_all_inputs, (&IMDBTRN_dec_names_list), &CUDBTRN),((*(&(Fdec->Inputs))), !Name_all_inputs, (&IMDBTRN_dec_names_list), &CUDBTRN,(RNDBTRN_do_names).nonlocals));
CUDBTRN;
 /* line 452: */
A_CALLPROC(RNDBTRN_do_names,((*(&(Fdec->Outputs))), !Name_all_outputs, (&IMDBTRN_dec_names_list), &DUDBTRN),((*(&(Fdec->Outputs))), !Name_all_outputs, (&IMDBTRN_dec_names_list), &DUDBTRN,(RNDBTRN_do_names).nonlocals));
DUDBTRN;
 /* line 455: */
 /* line 456: */
GUDBTRN = NTDBTRN_pre_pass_unit ;
EUDBTRN.data[0] = A_UNITE(FUDBTRN,mode19,19,GUDBTRN);
JUDBTRN.fn.fn_global = ZTDBTRN_pre_pass_dec;
JUDBTRN.nonlocals = A68_NIL;
IUDBTRN = JUDBTRN ;
EUDBTRN.data[1] = A_UNITE(HUDBTRN,mode23,23,IUDBTRN);
LUDBTRN_pptprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HISVEC(KUDBTRN,EUDBTRN,2,A68_464 ));
 /* line 458: */
MUDBTRN = (*(&(AWLATRN_nulltprocs->Fnbody))) ;
A_CALLPROC(MUDBTRN,((*(&(Fdec->Fnbody))), LUDBTRN_pptprocs, &NUDBTRN),((*(&(Fdec->Fnbody))), LUDBTRN_pptprocs, &NUDBTRN,(MUDBTRN).nonlocals));
NUDBTRN;
 /* line 459: */
MLJATRN_discard_tprocs(LUDBTRN_pptprocs);
 /* line 462: */
 /* line 463: */
QUDBTRN = CTDBTRN_dec_unit ;
OUDBTRN.data[0] = A_UNITE(PUDBTRN,mode19,19,QUDBTRN);
SUDBTRN = VSDBTRN_dec_names ;
OUDBTRN.data[1] = A_UNITE(RUDBTRN,mode27,27,SUDBTRN);
UUDBTRN_newtprocs = THJATRN_make_newtprocs(Tprocs, A_HISVEC(TUDBTRN,OUDBTRN,2,A68_464 ));
 /* line 465: */
VUDBTRN = (*(&(AWLATRN_nulltprocs->Fnbody))) ;
A_CALLPROC(VUDBTRN,((*(&(Fdec->Fnbody))), UUDBTRN_newtprocs, &WUDBTRN),((*(&(Fdec->Fnbody))), UUDBTRN_newtprocs, &WUDBTRN,(VUDBTRN).nonlocals));
WUDBTRN;
 /* line 466: */
MLJATRN_discard_tprocs(UUDBTRN_newtprocs);
 /* line 467: */
if ( (LMDBTRN_max_port_num>=MMDBTRN_min_change_num) )
{ 
(*Portname_change) = JMDBTRN_newfd;
} 
 /* line 468: */
XUDBTRN.F = JMDBTRN_newfd;
 /* line 469: */
XUDBTRN.C = NMDBTRN_chfn;
YUDBTRN = XUDBTRN;
} 
A_PROC_EXIT(fndec_names);
*ReturnedValue = (YUDBTRN);
return;
} 
#undef NL
 /* line 472: */
 /* line 473: */

A68_VOID  CVDBTRN_transform_names(A68_265 * Closure, A68_466  Options, A68_108  Msg, A68_418  *ReturnedValue)
{ 
A68_466  DVDBTRN;  /* avoid structure result */
A68_BOOL  EVDBTRN_old_scope_rules;
A68_466  GVDBTRN;  /* avoid structure result */
A68_BOOL  FVDBTRN_name_all_inputs;
A68_466  IVDBTRN;  /* avoid structure result */
A68_BOOL  HVDBTRN_name_all_outputs;
A68_466  JVDBTRN;  /* avoid structure result */
A68_BOOL  KVDBTRN;  /* optbool result */
A68_466  LVDBTRN;  /* avoid structure result */
A68_INT  MVDBTRN_max_clno;
A68_514  OVDBTRN_generator;   /* proc value of non-global proc */
A68_513  UVDBTRN;  /* avoid structure result */
A68_513  TVDBTRN_translations;
A68_475 * VVDBTRN_name;
A68_INT  WVDBTRN;  /* forall loop counter */
A68_475  XVDBTRN;  /* collateral clause result */
A68_33  ZVDBTRN_generator;   /* proc value of non-global proc */
A68_32  FWDBTRN;  /* avoid structure result */
A68_32  EWDBTRN_typealiases;
A68_94  GWDBTRN;  /* OPERATORS - mode -> union mode */
A68_516  IWDBTRN_generator;   /* proc value of non-global proc */
A68_515  OWDBTRN;  /* avoid structure result */
A68_515  NWDBTRN_typebodies;
A68_389 * PWDBTRN_tb;
A68_INT  QWDBTRN;  /* forall loop counter */
A68_389  RWDBTRN;  /* collateral clause result */
A68_167  SWDBTRN;  /* OPERATORS - mode -> union mode */
A68_517  UWDBTRN_generator;   /* proc value of non-global proc */
A68_260  AXDBTRN;  /* avoid structure result */
A68_260  ZWDBTRN_portname_changes;
A68_252 ** BXDBTRN_fd;
A68_INT  CXDBTRN;  /* forall loop counter */
A68_476 * DXDBTRN_outer_names;
A68_BOOL  EXDBTRN_changed;
A68_265 * FXDBTRN_new;
A68_262 ** GXDBTRN_newptr;
A68_319  HXDBTRN_change_closure;   /* proc value of non-global proc */
A68_520  AZDBTRN_test_outer_name;   /* proc value of non-global proc */
A68_521  HAEBTRN_update_outer;   /* proc value of non-global proc */
A68_418  WJEBTRN;  /* collateral clause result */
A68_418  XJEBTRN;  /* clause result */
A_PROC_ENTRY(transform_names);
 /* line 474: */
 /* line 475: */
{ 
OYCBTRN_names_old_scope_rules(  &DVDBTRN );
EVDBTRN_old_scope_rules = MBAAOST_includes(Options, DVDBTRN);
 /* line 476: */
RYCBTRN_names_name_all_inputs(  &GVDBTRN );
FVDBTRN_name_all_inputs = MBAAOST_includes(Options, GVDBTRN);
 /* line 477: */
UYCBTRN_names_name_all_outputs(  &IVDBTRN );
HVDBTRN_name_all_outputs = MBAAOST_includes(Options, IVDBTRN);
 /* line 479: */
AZCBTRN_names_vhdl_rules(  &JVDBTRN );
HJDBTRN_apply_vhdl_rules = MBAAOST_includes(Options, JVDBTRN);
 /* line 481: */
KVDBTRN = HJDBTRN_apply_vhdl_rules;
if ( ! KVDBTRN )
{ /* line 482: */
XYCBTRN_names_name_all_ports(  &LVDBTRN );
KVDBTRN = MBAAOST_includes(Options, LVDBTRN);
}
if ( KVDBTRN )
{ 
 /* line 483: */
FVDBTRN_name_all_inputs = HVDBTRN_name_all_outputs = A68_TRUE;
} 
 /* line 487: */
MVDBTRN_max_clno = ZKCATRN_maxclosureno(Closure);
 /* line 488: */
A_CLOSURE( OVDBTRN_generator, PVDBTRN_generator, QVDBTRN_generator );
(( QVDBTRN_generator * ) ( OVDBTRN_generator.nonlocals )) -> MVDBTRN_max_clno = MVDBTRN_max_clno;
A_CALLPROC(OVDBTRN_generator,(A68_TRUE, &UVDBTRN),(A68_TRUE, &UVDBTRN,(OVDBTRN_generator).nonlocals));
TVDBTRN_translations = UVDBTRN;
 /* line 489: */
WVDBTRN = TVDBTRN_translations.upb -1;
VVDBTRN_name = TVDBTRN_translations.data;
for (;WVDBTRN-- >= 0;
(VVDBTRN_name++
) )
{
XVDBTRN.I = TTCAOST_nullid;
XVDBTRN.C = A68_FALSE;
(*VVDBTRN_name) = XVDBTRN;
}
 /* line 490: */
A_CLOSURE( ZVDBTRN_generator, AWDBTRN_generator, BWDBTRN_generator );
(( BWDBTRN_generator * ) ( ZVDBTRN_generator.nonlocals )) -> MVDBTRN_max_clno = MVDBTRN_max_clno;
A_CALLPROC(ZVDBTRN_generator,(A68_TRUE, &FWDBTRN),(A68_TRUE, &FWDBTRN,(ZVDBTRN_generator).nonlocals));
EWDBTRN_typealiases = FWDBTRN;
 /* line 491: */
VTCAOST_clear(A_UNITE(GWDBTRN,mode2,2,EWDBTRN_typealiases));
 /* line 492: */
A_CLOSURE( IWDBTRN_generator, JWDBTRN_generator, KWDBTRN_generator );
(( KWDBTRN_generator * ) ( IWDBTRN_generator.nonlocals )) -> MVDBTRN_max_clno = MVDBTRN_max_clno;
A_CALLPROC(IWDBTRN_generator,(A68_TRUE, &OWDBTRN),(A68_TRUE, &OWDBTRN,(IWDBTRN_generator).nonlocals));
NWDBTRN_typebodies = OWDBTRN;
 /* line 493: */
QWDBTRN = NWDBTRN_typebodies.upb -1;
PWDBTRN_tb = NWDBTRN_typebodies.data;
for (;QWDBTRN-- >= 0;
(PWDBTRN_tb++
) )
{
RWDBTRN.T = A_UNITE(SWDBTRN,mode3,3,NYCBTRN_niltypetag);
RWDBTRN.C = A68_FALSE;
(*PWDBTRN_tb) = RWDBTRN;
}
 /* line 494: */
A_CLOSURE( UWDBTRN_generator, VWDBTRN_generator, WWDBTRN_generator );
(( WWDBTRN_generator * ) ( UWDBTRN_generator.nonlocals )) -> MVDBTRN_max_clno = MVDBTRN_max_clno;
A_CALLPROC(UWDBTRN_generator,(A68_TRUE, &AXDBTRN),(A68_TRUE, &AXDBTRN,(UWDBTRN_generator).nonlocals));
ZWDBTRN_portname_changes = AXDBTRN;
 /* line 495: */
CXDBTRN = ZWDBTRN_portname_changes.upb -1;
BXDBTRN_fd = ZWDBTRN_portname_changes.data;
for (;CXDBTRN-- >= 0;
(BXDBTRN_fd++
) )
{
(*BXDBTRN_fd) = YAAATRN_nilfndec;
}
 /* line 497: */
DXDBTRN_outer_names = MYCBTRN_nilidn;
 /* line 498: */
EXDBTRN_changed = A68_FALSE;
 /* line 499: */
FXDBTRN_new = Closure;
 /* line 500: */
GXDBTRN_newptr = (&(FXDBTRN_new->Outers));
 /* line 502: */
 /* line 503: */
 /* line 504: */
A_CLOSURE( HXDBTRN_change_closure, IXDBTRN_change_closure, JXDBTRN_change_closure );
(( JXDBTRN_change_closure * ) ( HXDBTRN_change_closure.nonlocals )) -> EXDBTRN_changed = (&EXDBTRN_changed);
(( JXDBTRN_change_closure * ) ( HXDBTRN_change_closure.nonlocals )) -> FXDBTRN_new = (&FXDBTRN_new);
(( JXDBTRN_change_closure * ) ( HXDBTRN_change_closure.nonlocals )) -> Msg = Msg;
(( JXDBTRN_change_closure * ) ( HXDBTRN_change_closure.nonlocals )) -> GXDBTRN_newptr = (&GXDBTRN_newptr);
 /* line 516: */
 /* line 565: */
A_CLOSURE( AZDBTRN_test_outer_name, BZDBTRN_test_outer_name, CZDBTRN_test_outer_name );
(( CZDBTRN_test_outer_name * ) ( AZDBTRN_test_outer_name.nonlocals )) -> TVDBTRN_translations = TVDBTRN_translations;
(( CZDBTRN_test_outer_name * ) ( AZDBTRN_test_outer_name.nonlocals )) -> DXDBTRN_outer_names = (&DXDBTRN_outer_names);
(( CZDBTRN_test_outer_name * ) ( AZDBTRN_test_outer_name.nonlocals )) -> GXDBTRN_newptr = (&GXDBTRN_newptr);
(( CZDBTRN_test_outer_name * ) ( AZDBTRN_test_outer_name.nonlocals )) -> FXDBTRN_new = (&FXDBTRN_new);
(( CZDBTRN_test_outer_name * ) ( AZDBTRN_test_outer_name.nonlocals )) -> EWDBTRN_typealiases = EWDBTRN_typealiases;
(( CZDBTRN_test_outer_name * ) ( AZDBTRN_test_outer_name.nonlocals )) -> HXDBTRN_change_closure = HXDBTRN_change_closure;
(( CZDBTRN_test_outer_name * ) ( AZDBTRN_test_outer_name.nonlocals )) -> NWDBTRN_typebodies = NWDBTRN_typebodies;
 /* line 614: */
A_CLOSURE( HAEBTRN_update_outer, IAEBTRN_update_outer, JAEBTRN_update_outer );
(( JAEBTRN_update_outer * ) ( HAEBTRN_update_outer.nonlocals )) -> TVDBTRN_translations = TVDBTRN_translations;
(( JAEBTRN_update_outer * ) ( HAEBTRN_update_outer.nonlocals )) -> NWDBTRN_typebodies = NWDBTRN_typebodies;
(( JAEBTRN_update_outer * ) ( HAEBTRN_update_outer.nonlocals )) -> EWDBTRN_typealiases = EWDBTRN_typealiases;
(( JAEBTRN_update_outer * ) ( HAEBTRN_update_outer.nonlocals )) -> ZWDBTRN_portname_changes = ZWDBTRN_portname_changes;
(( JAEBTRN_update_outer * ) ( HAEBTRN_update_outer.nonlocals )) -> EVDBTRN_old_scope_rules = EVDBTRN_old_scope_rules;
(( JAEBTRN_update_outer * ) ( HAEBTRN_update_outer.nonlocals )) -> FVDBTRN_name_all_inputs = (&FVDBTRN_name_all_inputs);
(( JAEBTRN_update_outer * ) ( HAEBTRN_update_outer.nonlocals )) -> HVDBTRN_name_all_outputs = (&HVDBTRN_name_all_outputs);
(( JAEBTRN_update_outer * ) ( HAEBTRN_update_outer.nonlocals )) -> HXDBTRN_change_closure = HXDBTRN_change_closure;
(( JAEBTRN_update_outer * ) ( HAEBTRN_update_outer.nonlocals )) -> GXDBTRN_newptr = (&GXDBTRN_newptr);
 /* line 911: */
for ( ;; )
{ 
 /* line 912: */
 /* line 913: */
if ( !(((*GXDBTRN_newptr)!=HBAATRN_nilouters)) ) break;
 /* line 914: */
if ( A_CALLPROC(AZDBTRN_test_outer_name,((*(&((*GXDBTRN_newptr)->Outer)))),((*(&((*GXDBTRN_newptr)->Outer))),(AZDBTRN_test_outer_name).nonlocals)) )
{ 
A_CALLPROC(HXDBTRN_change_closure,(),((HXDBTRN_change_closure).nonlocals));
 /* line 915: */
 /* line 916: */
 /* line 917: */
RNCATRN_free_outers(GXDBTRN_newptr, FXDBTRN_new, Msg);
} 
else
{ 
 /* line 918: */
 /* line 919: */
GXDBTRN_newptr = (&((*GXDBTRN_newptr)->Rest));
} 
}
 /* line 921: */
GXDBTRN_newptr = (&(FXDBTRN_new->Outers));
 /* line 922: */
for ( ;; )
{ 
 /* line 923: */
 /* line 924: */
if ( !(((*GXDBTRN_newptr)!=HBAATRN_nilouters)) ) break;
A_CALLPROC(HAEBTRN_update_outer,((*(&((*GXDBTRN_newptr)->Outer)))),((*(&((*GXDBTRN_newptr)->Outer))),(HAEBTRN_update_outer).nonlocals));
 /* line 925: */
 /* line 926: */
GXDBTRN_newptr = (&((*GXDBTRN_newptr)->Rest));
}
 /* line 927: */
WJEBTRN.Cl = FXDBTRN_new;
 /* line 928: */
WJEBTRN.C = EXDBTRN_changed;
XJEBTRN = WJEBTRN;
} 
A_PROC_EXIT(transform_names);
*ReturnedValue = (XJEBTRN);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void HYCBTRN(void)   /* initialise DECS names */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/names.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/ostools/assoc/mfiles/options.m","./mfiles/transformprocs.m","./mfiles/modeprocs.m","./mfiles/closureprocs.m","./mfiles/charset.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","./mfiles/assmodes.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_482  DZCBTRN;  /* collateral clause result */
A68_46  OZCBTRN;  /* OPERATORS - istruct -> vector */
A68_338  XZCBTRN;  /* procedure value */
A68_493  YZCBTRN;  /* collateral clause result */
A68_46  NHDBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  YIDBTRN;  /* avoid structure result */
A68_VC  BJDBTRN;  /* OPERATORS - assign op */
A68_VC  DJDBTRN;  /* avoid structure result */
A68_VC  GJDBTRN;  /* OPERATORS - assign op */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
BAAAOST();   /* USE options */
IHJATRN();   /* USE transformprocs */
HNMATRN();   /* USE modeprocs */
SKCATRN();   /* USE closureprocs */
GMAATRN();   /* USE charset */
PCAAOST();   /* USE osinterface */
BAAATRN();   /* USE assmodes */
JFAAOSI();   /* USE messageproc */
JSCAOST();   /* USE basics */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/transform/assoc/./a68files/names.a68";
A_config.translation_time = "Tue Apr  4 10:05:24 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "GYCBTRN (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:05:24 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS names);
UEAALIB_a68config(LGAALIB_configinfo, LYCBTRN);
 /* line 59: */
 /* line 63: */
 /* line 65: */
 /* line 66: */
 /* line 68: */
 /* line 69: */
 /* line 71: */
 /* line 72: */
 /* line 73: */
 /* line 75: */
 /* line 76: */
DZCBTRN.data[0] = FZCBTRN;
 /* line 77: */
DZCBTRN.data[1] = HZCBTRN;
 /* line 78: */
DZCBTRN.data[2] = JZCBTRN;
 /* line 79: */
DZCBTRN.data[3] = LZCBTRN;
DZCBTRN.data[4] = NZCBTRN;
PZCBTRN_names_options = A_HISVEC(OZCBTRN,DZCBTRN,5,A68_VC );
 /* line 80: */
 /* line 82: */
 /* line 83: */
XZCBTRN.fn.fn_global = UZCBTRN_anonymous;
XZCBTRN.nonlocals = A68_NIL;
RZCBTRN_lookup = XZCBTRN;
 /* line 88: */
 /* line 89: */
YZCBTRN.data[0] = AADBTRN;
YZCBTRN.data[1] = CADBTRN;
YZCBTRN.data[2] = EADBTRN;
YZCBTRN.data[3] = GADBTRN;
YZCBTRN.data[4] = IADBTRN;
YZCBTRN.data[5] = KADBTRN;
YZCBTRN.data[6] = MADBTRN;
 /* line 90: */
YZCBTRN.data[7] = OADBTRN;
YZCBTRN.data[8] = QADBTRN;
YZCBTRN.data[9] = SADBTRN;
YZCBTRN.data[10] = UADBTRN;
YZCBTRN.data[11] = WADBTRN;
YZCBTRN.data[12] = YADBTRN;
YZCBTRN.data[13] = ABDBTRN;
YZCBTRN.data[14] = CBDBTRN;
 /* line 91: */
YZCBTRN.data[15] = EBDBTRN;
YZCBTRN.data[16] = GBDBTRN;
YZCBTRN.data[17] = IBDBTRN;
YZCBTRN.data[18] = KBDBTRN;
YZCBTRN.data[19] = MBDBTRN;
 /* line 92: */
YZCBTRN.data[20] = OBDBTRN;
YZCBTRN.data[21] = QBDBTRN;
YZCBTRN.data[22] = SBDBTRN;
YZCBTRN.data[23] = UBDBTRN;
YZCBTRN.data[24] = WBDBTRN;
YZCBTRN.data[25] = YBDBTRN;
YZCBTRN.data[26] = ACDBTRN;
YZCBTRN.data[27] = CCDBTRN;
 /* line 93: */
YZCBTRN.data[28] = ECDBTRN;
YZCBTRN.data[29] = GCDBTRN;
YZCBTRN.data[30] = ICDBTRN;
YZCBTRN.data[31] = KCDBTRN;
YZCBTRN.data[32] = MCDBTRN;
YZCBTRN.data[33] = OCDBTRN;
YZCBTRN.data[34] = QCDBTRN;
 /* line 94: */
YZCBTRN.data[35] = SCDBTRN;
YZCBTRN.data[36] = UCDBTRN;
YZCBTRN.data[37] = WCDBTRN;
 /* line 95: */
YZCBTRN.data[38] = YCDBTRN;
YZCBTRN.data[39] = ADDBTRN;
YZCBTRN.data[40] = CDDBTRN;
YZCBTRN.data[41] = EDDBTRN;
YZCBTRN.data[42] = GDDBTRN;
YZCBTRN.data[43] = IDDBTRN;
YZCBTRN.data[44] = KDDBTRN;
YZCBTRN.data[45] = MDDBTRN;
 /* line 96: */
YZCBTRN.data[46] = ODDBTRN;
YZCBTRN.data[47] = QDDBTRN;
 /* line 97: */
YZCBTRN.data[48] = SDDBTRN;
YZCBTRN.data[49] = UDDBTRN;
YZCBTRN.data[50] = WDDBTRN;
YZCBTRN.data[51] = YDDBTRN;
YZCBTRN.data[52] = AEDBTRN;
YZCBTRN.data[53] = CEDBTRN;
YZCBTRN.data[54] = EEDBTRN;
YZCBTRN.data[55] = GEDBTRN;
YZCBTRN.data[56] = IEDBTRN;
YZCBTRN.data[57] = KEDBTRN;
 /* line 98: */
YZCBTRN.data[58] = MEDBTRN;
YZCBTRN.data[59] = OEDBTRN;
YZCBTRN.data[60] = QEDBTRN;
YZCBTRN.data[61] = SEDBTRN;
YZCBTRN.data[62] = UEDBTRN;
YZCBTRN.data[63] = WEDBTRN;
YZCBTRN.data[64] = YEDBTRN;
 /* line 99: */
YZCBTRN.data[65] = AFDBTRN;
YZCBTRN.data[66] = CFDBTRN;
YZCBTRN.data[67] = EFDBTRN;
 /* line 100: */
YZCBTRN.data[68] = GFDBTRN;
YZCBTRN.data[69] = IFDBTRN;
YZCBTRN.data[70] = KFDBTRN;
YZCBTRN.data[71] = MFDBTRN;
YZCBTRN.data[72] = OFDBTRN;
YZCBTRN.data[73] = QFDBTRN;
YZCBTRN.data[74] = SFDBTRN;
YZCBTRN.data[75] = UFDBTRN;
 /* line 101: */
YZCBTRN.data[76] = WFDBTRN;
YZCBTRN.data[77] = YFDBTRN;
YZCBTRN.data[78] = AGDBTRN;
YZCBTRN.data[79] = CGDBTRN;
YZCBTRN.data[80] = EGDBTRN;
YZCBTRN.data[81] = GGDBTRN;
 /* line 102: */
YZCBTRN.data[82] = IGDBTRN;
YZCBTRN.data[83] = KGDBTRN;
YZCBTRN.data[84] = MGDBTRN;
YZCBTRN.data[85] = OGDBTRN;
YZCBTRN.data[86] = QGDBTRN;
YZCBTRN.data[87] = SGDBTRN;
YZCBTRN.data[88] = UGDBTRN;
YZCBTRN.data[89] = WGDBTRN;
 /* line 103: */
YZCBTRN.data[90] = YGDBTRN;
YZCBTRN.data[91] = AHDBTRN;
YZCBTRN.data[92] = CHDBTRN;
YZCBTRN.data[93] = EHDBTRN;
YZCBTRN.data[94] = GHDBTRN;
YZCBTRN.data[95] = IHDBTRN;
YZCBTRN.data[96] = KHDBTRN;
YZCBTRN.data[97] = MHDBTRN;
OHDBTRN_vhdl_reserved = A_HISVEC(NHDBTRN,YZCBTRN,98,A68_VC );
 /* line 107: */
PHDBTRN_lc_bias = ((A68_INT)(unsigned char)'a'-(A68_INT)(unsigned char)'A');
 /* line 109: */
 /* line 128: */
 /* line 136: */
UIDBTRN_generator( A68_TRUE, &YIDBTRN );
XIDBTRN_symbolic_name_default_uc = YIDBTRN;
BJDBTRN = AJDBTRN ;
A_VASSIGN2(BJDBTRN,XIDBTRN_symbolic_name_default_uc,A68_CHAR );
 /* line 137: */
UIDBTRN_generator( A68_TRUE, &DJDBTRN );
CJDBTRN_symbolic_name_default_lc = DJDBTRN;
GJDBTRN = FJDBTRN ;
A_VASSIGN2(GJDBTRN,CJDBTRN_symbolic_name_default_lc,A68_CHAR );
 /* line 138: */
HJDBTRN_apply_vhdl_rules = A68_FALSE;
 /* line 139: */
 /* line 210: */
 /* line 222: */
 /* line 471: */
 /* line 932: */
 /* line 933: */
 /* line 936: */
/*SKIP*/;
A_PROC_EXIT(DECS names);
} 
#undef NL
/* end of translation of ./a68files/names.a68 */
