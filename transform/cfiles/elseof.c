
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
/* UNAME:JVFBTRN */
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

A_PROCEDURE(struct A68t139 *,A68t288,(A68_INT ),(A68_INT ,void *));
typedef struct A68t288  A68_288 ;    /* PROC(INT) REF MODE139 */

A_PROCEDURE(A68_INT ,A68t289,(struct A68t138 ,struct A68t108 ),(struct A68t138 ,struct A68t108 ,void *));
typedef struct A68t289  A68_289 ;    /* PROC(MODE138,MODE108) INT */

A_PROCEDURE(A68_INT ,A68t290,(struct A68t138 ),(struct A68t138 ,void *));
typedef struct A68t290  A68_290 ;    /* PROC(MODE138) INT */

A_PROCEDURE(A68_VOID ,A68t291,(struct A68t138 ,struct A68t138 *),(struct A68t138 ,struct A68t138 *,void *));
typedef struct A68t291  A68_291 ;    /* PROC(MODE138) MODE138 */

A_PROCEDURE(struct A68t135 *,A68t292,(struct A68t261 ),(struct A68t261 ,void *));
typedef struct A68t292  A68_292 ;    /* PROC(MODE261) REF MODE135 */

A_PROCEDURE(struct A68t151 *,A68t293,(struct A68t261 ),(struct A68t261 ,void *));
typedef struct A68t293  A68_293 ;    /* PROC(MODE261) REF MODE151 */

A_PROCEDURE(struct A68t169 *,A68t294,(struct A68t261 ),(struct A68t261 ,void *));
typedef struct A68t294  A68_294 ;    /* PROC(MODE261) REF MODE169 */

A_PROCEDURE(struct A68t175 *,A68t295,(struct A68t261 ),(struct A68t261 ,void *));
typedef struct A68t295  A68_295 ;    /* PROC(MODE261) REF MODE175 */

A_PROCEDURE(struct A68t252 *,A68t296,(struct A68t261 ),(struct A68t261 ,void *));
typedef struct A68t296  A68_296 ;    /* PROC(MODE261) REF MODE252 */

A_PROCEDURE(A68_INT ,A68t297,(struct A68t136 *,struct A68t256 ),(struct A68t136 *,struct A68t256 ,void *));
typedef struct A68t297  A68_297 ;    /* PROC(REF MODE136,REF MODE256) INT */

A_PROCEDURE(A68_INT ,A68t298,(struct A68t136 *,struct A68t257 ),(struct A68t136 *,struct A68t257 ,void *));
typedef struct A68t298  A68_298 ;    /* PROC(REF MODE136,REF MODE257) INT */

A_PROCEDURE(A68_INT ,A68t299,(struct A68t136 *,struct A68t258 ),(struct A68t136 *,struct A68t258 ,void *));
typedef struct A68t299  A68_299 ;    /* PROC(REF MODE136,REF MODE258) INT */

A_PROCEDURE(A68_INT ,A68t300,(struct A68t136 *,struct A68t259 ),(struct A68t136 *,struct A68t259 ,void *));
typedef struct A68t300  A68_300 ;    /* PROC(REF MODE136,REF MODE259) INT */

A_PROCEDURE(A68_INT ,A68t301,(struct A68t136 *,struct A68t260 ),(struct A68t136 *,struct A68t260 ,void *));
typedef struct A68t301  A68_301 ;    /* PROC(REF MODE136,REF MODE260) INT */

A_PROCEDURE(struct A68t135 *,A68t302,(struct A68t130 ,struct A68t265 *,struct A68t255 *),(struct A68t130 ,struct A68t265 *,struct A68t255 *,void *));
typedef struct A68t302  A68_302 ;    /* PROC(MODE130,REF MODE265,REF MODE255) REF MODE135 */

A_PROCEDURE(struct A68t151 *,A68t303,(struct A68t142 ,struct A68t265 *,struct A68t255 *),(struct A68t142 ,struct A68t265 *,struct A68t255 *,void *));
typedef struct A68t303  A68_303 ;    /* PROC(MODE142,REF MODE265,REF MODE255) REF MODE151 */

A_PROCEDURE(struct A68t169 *,A68t304,(struct A68t155 ,struct A68t265 *,struct A68t255 *),(struct A68t155 ,struct A68t265 *,struct A68t255 *,void *));
typedef struct A68t304  A68_304 ;    /* PROC(MODE155,REF MODE265,REF MODE255) REF MODE169 */

A_PROCEDURE(struct A68t175 *,A68t305,(struct A68t170 ,struct A68t265 *,struct A68t255 *),(struct A68t170 ,struct A68t265 *,struct A68t255 *,void *));
typedef struct A68t305  A68_305 ;    /* PROC(MODE170,REF MODE265,REF MODE255) REF MODE175 */

A_PROCEDURE(struct A68t252 *,A68t306,(struct A68t207 ,struct A68t265 *,struct A68t255 *),(struct A68t207 ,struct A68t265 *,struct A68t255 *,void *));
typedef struct A68t306  A68_306 ;    /* PROC(MODE207,REF MODE265,REF MODE255) REF MODE252 */

A_PROCEDURE(struct A68t158 *,A68t307,(struct A68t252 *),(struct A68t252 *,void *));
typedef struct A68t307  A68_307 ;    /* PROC(REF MODE252) REF MODE158 */

A_PROCEDURE(A68_VOID ,A68t308,(struct A68t157 *,struct A68t138 *),(struct A68t157 *,struct A68t138 *,void *));
typedef struct A68t308  A68_308 ;    /* PROC(REF MODE157) MODE138 */

A_PROCEDURE(A68_VOID ,A68t309,(struct A68t154 ,struct A68t255 *,struct A68t138 *),(struct A68t154 ,struct A68t255 *,struct A68t138 *,void *));
typedef struct A68t309  A68_309 ;    /* PROC(MODE154,REF MODE255) MODE138 */

A_PROCEDURE(struct A68t252 *,A68t310,(struct A68t252 *,struct A68t255 *,struct A68t255 *),(struct A68t252 *,struct A68t255 *,struct A68t255 *,void *));
typedef struct A68t310  A68_310 ;    /* PROC(REF MODE252,REF MODE255,REF MODE255) REF MODE252 */

A_PROCEDURE(A68_VOID ,A68t311,(struct A68t217 *,struct A68t252 *,struct A68t154 *),(struct A68t217 *,struct A68t252 *,struct A68t154 *,void *));
typedef struct A68t311  A68_311 ;    /* PROC(REF MODE217,REF MODE252) MODE154 */

A_PROCEDURE(A68_INT ,A68t312,(struct A68t217 *),(struct A68t217 *,void *));
typedef struct A68t312  A68_312 ;    /* PROC(REF MODE217) INT */

A_PROCEDURE(A68_INT ,A68t313,(struct A68t217 *,A68_INT ),(struct A68t217 *,A68_INT ,void *));
typedef struct A68t313  A68_313 ;    /* PROC(REF MODE217,INT) INT */

A_PROCEDURE(A68_VOID ,A68t314,(struct A68t176 ,struct A68t252 *,struct A68t255 *,struct A68t154 *),(struct A68t176 ,struct A68t252 *,struct A68t255 *,struct A68t154 *,void *));
typedef struct A68t314  A68_314 ;    /* PROC(MODE176,REF MODE252,REF MODE255) MODE154 */

A_PROCEDURE(A68_VOID ,A68t315,(struct A68t154 ,struct A68t255 *,struct A68t154 *),(struct A68t154 ,struct A68t255 *,struct A68t154 *,void *));
typedef struct A68t315  A68_315 ;    /* PROC(MODE154,REF MODE255) MODE154 */

A_PROCEDURE(A68_BOOL ,A68t316,(struct A68t154 ,struct A68t154 ,struct A68t255 *,struct A68t255 *,A68_BOOL ),(struct A68t154 ,struct A68t154 ,struct A68t255 *,struct A68t255 *,A68_BOOL ,void *));
typedef struct A68t316  A68_316 ;    /* PROC(MODE154,MODE154,REF MODE255,REF MODE255,BOOL) BOOL */

A_PROCEDURE(A68_INT ,A68t317,(struct A68t185 *,struct A68t255 *),(struct A68t185 *,struct A68t255 *,void *));
typedef struct A68t317  A68_317 ;    /* PROC(REF MODE185,REF MODE255) INT */
struct A68t318{
struct A68t129  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_94)
};
typedef struct A68t318  A68_318 ;    /* STRUCT(MODE129,BOOL)  */
struct A68t319{
struct A68t132 * A;
A68_BOOL  C;
A_PAD_BOOL(PAD_95)
};
typedef struct A68t319  A68_319 ;    /* STRUCT(REF MODE132,BOOL)  */
struct A68t320{
struct A68t135 * A;
A68_BOOL  C;
A_PAD_BOOL(PAD_96)
};
typedef struct A68t320  A68_320 ;    /* STRUCT(REF MODE135,BOOL)  */
struct A68t321{
struct A68t138  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_97)
};
typedef struct A68t321  A68_321 ;    /* STRUCT(MODE138,BOOL)  */
struct A68t322{
struct A68t150 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_98)
};
typedef struct A68t322  A68_322 ;    /* STRUCT(REF MODE150,BOOL)  */
struct A68t323{
struct A68t151 * I;
A68_BOOL  C;
A_PAD_BOOL(PAD_99)
};
typedef struct A68t323  A68_323 ;    /* STRUCT(REF MODE151,BOOL)  */
struct A68t324{
struct A68t153  R;
A68_BOOL  C;
A_PAD_BOOL(PAD_100)
};
typedef struct A68t324  A68_324 ;    /* STRUCT(MODE153,BOOL)  */
struct A68t325{
struct A68t152  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_101)
};
typedef struct A68t325  A68_325 ;    /* STRUCT(MODE152,BOOL)  */
struct A68t326{
struct A68t157 * T;
A68_BOOL  C;
A_PAD_BOOL(PAD_102)
};
typedef struct A68t326  A68_326 ;    /* STRUCT(REF MODE157,BOOL)  */
struct A68t327{
struct A68t154  T;
A68_BOOL  C;
A_PAD_BOOL(PAD_103)
};
typedef struct A68t327  A68_327 ;    /* STRUCT(MODE154,BOOL)  */
struct A68t328{
struct A68t165  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_104)
};
typedef struct A68t328  A68_328 ;    /* STRUCT(MODE165,BOOL)  */
struct A68t329{
struct A68t168  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_105)
};
typedef struct A68t329  A68_329 ;    /* STRUCT(REF MODE168,BOOL)  */
struct A68t330{
struct A68t167  T;
A68_BOOL  C;
A_PAD_BOOL(PAD_106)
};
typedef struct A68t330  A68_330 ;    /* STRUCT(MODE167,BOOL)  */
struct A68t331{
struct A68t169 * T;
A68_BOOL  C;
A_PAD_BOOL(PAD_107)
};
typedef struct A68t331  A68_331 ;    /* STRUCT(REF MODE169,BOOL)  */
struct A68t332{
struct A68t175 * Co;
A68_BOOL  C;
A_PAD_BOOL(PAD_108)
};
typedef struct A68t332  A68_332 ;    /* STRUCT(REF MODE175,BOOL)  */
struct A68t333{
struct A68t180 * Ua;
A68_BOOL  C;
A_PAD_BOOL(PAD_109)
};
typedef struct A68t333  A68_333 ;    /* STRUCT(REF MODE180,BOOL)  */
struct A68t334{
struct A68t191 * U;
A68_BOOL  C;
A_PAD_BOOL(PAD_110)
};
typedef struct A68t334  A68_334 ;    /* STRUCT(REF MODE191,BOOL)  */
struct A68t335{
struct A68t236 * U;
A68_BOOL  C;
A_PAD_BOOL(PAD_111)
};
typedef struct A68t335  A68_335 ;    /* STRUCT(REF MODE236,BOOL)  */
struct A68t336{
struct A68t176  U;
A68_BOOL  C;
A_PAD_BOOL(PAD_112)
};
typedef struct A68t336  A68_336 ;    /* STRUCT(MODE176,BOOL)  */
struct A68t337{
struct A68t220  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_113)
};
typedef struct A68t337  A68_337 ;    /* STRUCT(MODE220,BOOL)  */
struct A68t338{
struct A68t218  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_114)
};
typedef struct A68t338  A68_338 ;    /* STRUCT(REF MODE218,BOOL)  */
struct A68t339{
struct A68t216  I;
A68_BOOL  C;
A_PAD_BOOL(PAD_115)
};
typedef struct A68t339  A68_339 ;    /* STRUCT(MODE216,BOOL)  */
struct A68t340{
struct A68t237  D;
A68_BOOL  C;
A_PAD_BOOL(PAD_116)
};
typedef struct A68t340  A68_340 ;    /* STRUCT(MODE237,BOOL)  */
struct A68t341{
struct A68t222 * P;
A68_BOOL  C;
A_PAD_BOOL(PAD_117)
};
typedef struct A68t341  A68_341 ;    /* STRUCT(REF MODE222,BOOL)  */
struct A68t342{
struct A68t208 * P;
A68_BOOL  C;
A_PAD_BOOL(PAD_118)
};
typedef struct A68t342  A68_342 ;    /* STRUCT(REF MODE208,BOOL)  */
struct A68t343{
struct A68t209 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_119)
};
typedef struct A68t343  A68_343 ;    /* STRUCT(REF MODE209,BOOL)  */
struct A68t344{
struct A68t217 * N;
A68_BOOL  C;
A_PAD_BOOL(PAD_120)
};
typedef struct A68t344  A68_344 ;    /* STRUCT(REF MODE217,BOOL)  */
struct A68t345{
struct A68t210 * L;
A68_BOOL  C;
A_PAD_BOOL(PAD_121)
};
typedef struct A68t345  A68_345 ;    /* STRUCT(REF MODE210,BOOL)  */
struct A68t346{
struct A68t235 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_122)
};
typedef struct A68t346  A68_346 ;    /* STRUCT(REF MODE235,BOOL)  */
struct A68t347{
struct A68t225  S;
A68_BOOL  C;
A_PAD_BOOL(PAD_123)
};
typedef struct A68t347  A68_347 ;    /* STRUCT(MODE225,BOOL)  */
struct A68t348{
struct A68t224 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_124)
};
typedef struct A68t348  A68_348 ;    /* STRUCT(REF MODE224,BOOL)  */
struct A68t349{
struct A68t211 * M;
A68_BOOL  C;
A_PAD_BOOL(PAD_125)
};
typedef struct A68t349  A68_349 ;    /* STRUCT(REF MODE211,BOOL)  */
struct A68t350{
struct A68t212 * J;
A68_BOOL  C;
A_PAD_BOOL(PAD_126)
};
typedef struct A68t350  A68_350 ;    /* STRUCT(REF MODE212,BOOL)  */
struct A68t351{
struct A68t215 * J;
A68_BOOL  C;
A_PAD_BOOL(PAD_127)
};
typedef struct A68t351  A68_351 ;    /* STRUCT(REF MODE215,BOOL)  */
struct A68t352{
struct A68t206  S;
A68_BOOL  C;
A_PAD_BOOL(PAD_128)
};
typedef struct A68t352  A68_352 ;    /* STRUCT(MODE206,BOOL)  */
struct A68t353{
struct A68t205 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_129)
};
typedef struct A68t353  A68_353 ;    /* STRUCT(REF MODE205,BOOL)  */
struct A68t354{
struct A68t248  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_130)
};
typedef struct A68t354  A68_354 ;    /* STRUCT(MODE248,BOOL)  */
struct A68t355{
struct A68t250  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_131)
};
typedef struct A68t355  A68_355 ;    /* STRUCT(MODE250,BOOL)  */
struct A68t356{
struct A68t253  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_132)
};
typedef struct A68t356  A68_356 ;    /* STRUCT(REF MODE253,BOOL)  */
struct A68t357{
struct A68t252 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_133)
};
typedef struct A68t357  A68_357 ;    /* STRUCT(REF MODE252,BOOL)  */
struct A68t358{
struct A68t261  O;
A68_BOOL  C;
A_PAD_BOOL(PAD_134)
};
typedef struct A68t358  A68_358 ;    /* STRUCT(MODE261,BOOL)  */
struct A68t359{
struct A68t265 * Cl;
A68_BOOL  C;
A_PAD_BOOL(PAD_135)
};
typedef struct A68t359  A68_359 ;    /* STRUCT(REF MODE265,BOOL)  */
struct A68t360 ;

A_PROCEDURE(A68_VOID ,A68t361,(struct A68t129 ,struct A68t360 *,struct A68t318 *),(struct A68t129 ,struct A68t360 *,struct A68t318 *,void *));
typedef struct A68t361  A68_361 ;    /* PROC(MODE129,REF MODE360) MODE318 */

A_PROCEDURE(A68_VOID ,A68t362,(struct A68t132 *,struct A68t360 *,struct A68t319 *),(struct A68t132 *,struct A68t360 *,struct A68t319 *,void *));
typedef struct A68t362  A68_362 ;    /* PROC(REF MODE132,REF MODE360) MODE319 */

A_PROCEDURE(A68_VOID ,A68t363,(struct A68t135 *,struct A68t360 *,struct A68t320 *),(struct A68t135 *,struct A68t360 *,struct A68t320 *,void *));
typedef struct A68t363  A68_363 ;    /* PROC(REF MODE135,REF MODE360) MODE320 */

A_PROCEDURE(A68_VOID ,A68t364,(struct A68t138 ,struct A68t360 *,struct A68t321 *),(struct A68t138 ,struct A68t360 *,struct A68t321 *,void *));
typedef struct A68t364  A68_364 ;    /* PROC(MODE138,REF MODE360) MODE321 */

A_PROCEDURE(A68_VOID ,A68t365,(struct A68t150 *,struct A68t360 *,struct A68t322 *),(struct A68t150 *,struct A68t360 *,struct A68t322 *,void *));
typedef struct A68t365  A68_365 ;    /* PROC(REF MODE150,REF MODE360) MODE322 */

A_PROCEDURE(A68_VOID ,A68t366,(struct A68t151 *,struct A68t360 *,struct A68t323 *),(struct A68t151 *,struct A68t360 *,struct A68t323 *,void *));
typedef struct A68t366  A68_366 ;    /* PROC(REF MODE151,REF MODE360) MODE323 */

A_PROCEDURE(A68_VOID ,A68t367,(struct A68t153 ,struct A68t360 *,struct A68t324 *),(struct A68t153 ,struct A68t360 *,struct A68t324 *,void *));
typedef struct A68t367  A68_367 ;    /* PROC(MODE153,REF MODE360) MODE324 */

A_PROCEDURE(A68_VOID ,A68t368,(struct A68t152 ,struct A68t360 *,struct A68t325 *),(struct A68t152 ,struct A68t360 *,struct A68t325 *,void *));
typedef struct A68t368  A68_368 ;    /* PROC(MODE152,REF MODE360) MODE325 */

A_PROCEDURE(A68_VOID ,A68t369,(struct A68t157 *,struct A68t360 *,struct A68t326 *),(struct A68t157 *,struct A68t360 *,struct A68t326 *,void *));
typedef struct A68t369  A68_369 ;    /* PROC(REF MODE157,REF MODE360) MODE326 */

A_PROCEDURE(A68_VOID ,A68t370,(struct A68t154 ,struct A68t360 *,struct A68t327 *),(struct A68t154 ,struct A68t360 *,struct A68t327 *,void *));
typedef struct A68t370  A68_370 ;    /* PROC(MODE154,REF MODE360) MODE327 */

A_PROCEDURE(A68_VOID ,A68t371,(struct A68t165 ,struct A68t360 *,struct A68t328 *),(struct A68t165 ,struct A68t360 *,struct A68t328 *,void *));
typedef struct A68t371  A68_371 ;    /* PROC(MODE165,REF MODE360) MODE328 */

A_PROCEDURE(A68_VOID ,A68t372,(struct A68t168 ,struct A68t360 *,struct A68t329 *),(struct A68t168 ,struct A68t360 *,struct A68t329 *,void *));
typedef struct A68t372  A68_372 ;    /* PROC(REF MODE168,REF MODE360) MODE329 */

A_PROCEDURE(A68_VOID ,A68t373,(struct A68t167 ,struct A68t360 *,struct A68t330 *),(struct A68t167 ,struct A68t360 *,struct A68t330 *,void *));
typedef struct A68t373  A68_373 ;    /* PROC(MODE167,REF MODE360) MODE330 */

A_PROCEDURE(A68_VOID ,A68t374,(struct A68t169 *,struct A68t360 *,struct A68t331 *),(struct A68t169 *,struct A68t360 *,struct A68t331 *,void *));
typedef struct A68t374  A68_374 ;    /* PROC(REF MODE169,REF MODE360) MODE331 */

A_PROCEDURE(A68_VOID ,A68t375,(struct A68t175 *,struct A68t360 *,struct A68t332 *),(struct A68t175 *,struct A68t360 *,struct A68t332 *,void *));
typedef struct A68t375  A68_375 ;    /* PROC(REF MODE175,REF MODE360) MODE332 */

A_PROCEDURE(A68_VOID ,A68t376,(struct A68t180 *,struct A68t360 *,struct A68t333 *),(struct A68t180 *,struct A68t360 *,struct A68t333 *,void *));
typedef struct A68t376  A68_376 ;    /* PROC(REF MODE180,REF MODE360) MODE333 */

A_PROCEDURE(A68_VOID ,A68t377,(struct A68t191 *,struct A68t360 *,struct A68t334 *),(struct A68t191 *,struct A68t360 *,struct A68t334 *,void *));
typedef struct A68t377  A68_377 ;    /* PROC(REF MODE191,REF MODE360) MODE334 */

A_PROCEDURE(A68_VOID ,A68t378,(struct A68t236 *,struct A68t360 *,struct A68t335 *),(struct A68t236 *,struct A68t360 *,struct A68t335 *,void *));
typedef struct A68t378  A68_378 ;    /* PROC(REF MODE236,REF MODE360) MODE335 */

A_PROCEDURE(A68_VOID ,A68t379,(struct A68t176 ,struct A68t360 *,struct A68t336 *),(struct A68t176 ,struct A68t360 *,struct A68t336 *,void *));
typedef struct A68t379  A68_379 ;    /* PROC(MODE176,REF MODE360) MODE336 */

A_PROCEDURE(A68_VOID ,A68t380,(struct A68t220 ,struct A68t360 *,struct A68t337 *),(struct A68t220 ,struct A68t360 *,struct A68t337 *,void *));
typedef struct A68t380  A68_380 ;    /* PROC(MODE220,REF MODE360) MODE337 */

A_PROCEDURE(A68_VOID ,A68t381,(struct A68t218 ,struct A68t360 *,struct A68t338 *),(struct A68t218 ,struct A68t360 *,struct A68t338 *,void *));
typedef struct A68t381  A68_381 ;    /* PROC(REF MODE218,REF MODE360) MODE338 */

A_PROCEDURE(A68_VOID ,A68t382,(struct A68t216 ,struct A68t360 *,struct A68t339 *),(struct A68t216 ,struct A68t360 *,struct A68t339 *,void *));
typedef struct A68t382  A68_382 ;    /* PROC(MODE216,REF MODE360) MODE339 */

A_PROCEDURE(A68_VOID ,A68t383,(struct A68t237 ,struct A68t360 *,struct A68t340 *),(struct A68t237 ,struct A68t360 *,struct A68t340 *,void *));
typedef struct A68t383  A68_383 ;    /* PROC(MODE237,REF MODE360) MODE340 */

A_PROCEDURE(A68_VOID ,A68t384,(struct A68t222 *,struct A68t360 *,struct A68t341 *),(struct A68t222 *,struct A68t360 *,struct A68t341 *,void *));
typedef struct A68t384  A68_384 ;    /* PROC(REF MODE222,REF MODE360) MODE341 */

A_PROCEDURE(A68_VOID ,A68t385,(struct A68t208 *,struct A68t360 *,struct A68t342 *),(struct A68t208 *,struct A68t360 *,struct A68t342 *,void *));
typedef struct A68t385  A68_385 ;    /* PROC(REF MODE208,REF MODE360) MODE342 */

A_PROCEDURE(A68_VOID ,A68t386,(struct A68t209 *,struct A68t360 *,struct A68t343 *),(struct A68t209 *,struct A68t360 *,struct A68t343 *,void *));
typedef struct A68t386  A68_386 ;    /* PROC(REF MODE209,REF MODE360) MODE343 */

A_PROCEDURE(A68_VOID ,A68t387,(struct A68t217 *,struct A68t360 *,struct A68t344 *),(struct A68t217 *,struct A68t360 *,struct A68t344 *,void *));
typedef struct A68t387  A68_387 ;    /* PROC(REF MODE217,REF MODE360) MODE344 */

A_PROCEDURE(A68_VOID ,A68t388,(struct A68t210 *,struct A68t360 *,struct A68t345 *),(struct A68t210 *,struct A68t360 *,struct A68t345 *,void *));
typedef struct A68t388  A68_388 ;    /* PROC(REF MODE210,REF MODE360) MODE345 */

A_PROCEDURE(A68_VOID ,A68t389,(struct A68t235 *,struct A68t360 *,struct A68t346 *),(struct A68t235 *,struct A68t360 *,struct A68t346 *,void *));
typedef struct A68t389  A68_389 ;    /* PROC(REF MODE235,REF MODE360) MODE346 */

A_PROCEDURE(A68_VOID ,A68t390,(struct A68t225 ,struct A68t360 *,struct A68t347 *),(struct A68t225 ,struct A68t360 *,struct A68t347 *,void *));
typedef struct A68t390  A68_390 ;    /* PROC(MODE225,REF MODE360) MODE347 */

A_PROCEDURE(A68_VOID ,A68t391,(struct A68t224 *,struct A68t360 *,struct A68t348 *),(struct A68t224 *,struct A68t360 *,struct A68t348 *,void *));
typedef struct A68t391  A68_391 ;    /* PROC(REF MODE224,REF MODE360) MODE348 */

A_PROCEDURE(A68_VOID ,A68t392,(struct A68t211 *,struct A68t360 *,struct A68t349 *),(struct A68t211 *,struct A68t360 *,struct A68t349 *,void *));
typedef struct A68t392  A68_392 ;    /* PROC(REF MODE211,REF MODE360) MODE349 */

A_PROCEDURE(A68_VOID ,A68t393,(struct A68t212 *,struct A68t360 *,struct A68t350 *),(struct A68t212 *,struct A68t360 *,struct A68t350 *,void *));
typedef struct A68t393  A68_393 ;    /* PROC(REF MODE212,REF MODE360) MODE350 */

A_PROCEDURE(A68_VOID ,A68t394,(struct A68t215 *,struct A68t360 *,struct A68t351 *),(struct A68t215 *,struct A68t360 *,struct A68t351 *,void *));
typedef struct A68t394  A68_394 ;    /* PROC(REF MODE215,REF MODE360) MODE351 */

A_PROCEDURE(A68_VOID ,A68t395,(struct A68t206 ,struct A68t360 *,struct A68t352 *),(struct A68t206 ,struct A68t360 *,struct A68t352 *,void *));
typedef struct A68t395  A68_395 ;    /* PROC(MODE206,REF MODE360) MODE352 */

A_PROCEDURE(A68_VOID ,A68t396,(struct A68t205 *,struct A68t360 *,struct A68t353 *),(struct A68t205 *,struct A68t360 *,struct A68t353 *,void *));
typedef struct A68t396  A68_396 ;    /* PROC(REF MODE205,REF MODE360) MODE353 */

A_PROCEDURE(A68_VOID ,A68t397,(struct A68t248 ,struct A68t360 *,struct A68t354 *),(struct A68t248 ,struct A68t360 *,struct A68t354 *,void *));
typedef struct A68t397  A68_397 ;    /* PROC(MODE248,REF MODE360) MODE354 */

A_PROCEDURE(A68_VOID ,A68t398,(struct A68t250 ,struct A68t360 *,struct A68t355 *),(struct A68t250 ,struct A68t360 *,struct A68t355 *,void *));
typedef struct A68t398  A68_398 ;    /* PROC(MODE250,REF MODE360) MODE355 */

A_PROCEDURE(A68_VOID ,A68t399,(struct A68t253 ,struct A68t360 *,struct A68t356 *),(struct A68t253 ,struct A68t360 *,struct A68t356 *,void *));
typedef struct A68t399  A68_399 ;    /* PROC(REF MODE253,REF MODE360) MODE356 */

A_PROCEDURE(A68_VOID ,A68t400,(struct A68t252 *,struct A68t360 *,struct A68t357 *),(struct A68t252 *,struct A68t360 *,struct A68t357 *,void *));
typedef struct A68t400  A68_400 ;    /* PROC(REF MODE252,REF MODE360) MODE357 */

A_PROCEDURE(A68_VOID ,A68t401,(struct A68t261 ,struct A68t360 *,struct A68t358 *),(struct A68t261 ,struct A68t360 *,struct A68t358 *,void *));
typedef struct A68t401  A68_401 ;    /* PROC(MODE261,REF MODE360) MODE358 */

A_PROCEDURE(A68_VOID ,A68t402,(struct A68t265 *,struct A68t360 *,struct A68t108 ,struct A68t359 *),(struct A68t265 *,struct A68t360 *,struct A68t108 ,struct A68t359 *,void *));
typedef struct A68t402  A68_402 ;    /* PROC(REF MODE265,REF MODE360,MODE108) MODE359 */
struct A68t360{
struct A68t361  Attr;
struct A68t362  Attrstr;
struct A68t363  Attrdec;
struct A68t364  Formula;
struct A68t365  Formulas;
struct A68t366  Intdec;
struct A68t367  Range;
struct A68t368  Formularange;
struct A68t369  Tstr;
struct A68t370  Type;
struct A68t371  Alternative;
struct A68t372  Alternatives;
struct A68t373  Typebody;
struct A68t374  Typedec;
struct A68t375  Constdec;
struct A68t376  Ualts;
struct A68t377  Ustr;
struct A68t378  Uchoices;
struct A68t379  Unit;
struct A68t380  Mparam;
struct A68t381  Macparams;
struct A68t382  Instance;
struct A68t383  Declaration;
struct A68t384  Printitems;
struct A68t385  Print;
struct A68t386  Fault;
struct A68t387  Names;
struct A68t388  Let;
struct A68t389  Seqchoices;
struct A68t390  Seqstep;
struct A68t391  Sequence;
struct A68t392  Make;
struct A68t393  Join;
struct A68t394  Joins;
struct A68t395  Step;
struct A68t396  Series;
struct A68t397  Fnbody;
struct A68t398  Macspec;
struct A68t399  Macspecs;
struct A68t400  Fndec;
struct A68t401  Outer;
struct A68t402  Closure;
struct A68t360 * Rest;
};
typedef struct A68t360  A68_360 ;    /* STRUCT(MODE361,MODE362,MODE363,MODE364,MODE365,MODE366,MODE367,MODE368,MODE369,MODE370,MODE371,MODE372,MODE373,MODE374,MODE375,MODE376,MODE377,MODE378,MODE379,MODE380,MODE381,MODE382,MODE383,MODE384,MODE385,MODE386,MODE387,MODE388,MODE389,MODE390,MODE391,MODE392,MODE393,MODE394,MODE395,MODE396,MODE397,MODE398,MODE399,MODE400,MODE401,MODE402,REF MODE360)  */
struct A68t404 ;

A_PROCEDURE(struct A68t360 *,A68t403,(struct A68t360 *,struct A68t404 ),(struct A68t360 *,struct A68t404 ,void *));
typedef struct A68t403  A68_403 ;    /* PROC(REF MODE360,MODE404) REF MODE360 */
A_VECTOR(struct A68t405 ,A68t404);
typedef struct A68t404  A68_404 ;    /* VECTOR [] MODE405 */
struct A68t405 { A68_INT mode; union {
struct A68t361  mode1;
struct A68t362  mode2;
struct A68t363  mode3;
struct A68t364  mode4;
struct A68t365  mode5;
struct A68t366  mode6;
struct A68t367  mode7;
struct A68t368  mode8;
struct A68t369  mode9;
struct A68t370  mode10;
struct A68t371  mode11;
struct A68t372  mode12;
struct A68t373  mode13;
struct A68t374  mode14;
struct A68t375  mode15;
struct A68t376  mode16;
struct A68t377  mode17;
struct A68t378  mode18;
struct A68t379  mode19;
struct A68t380  mode20;
struct A68t381  mode21;
struct A68t382  mode22;
struct A68t383  mode23;
struct A68t384  mode24;
struct A68t385  mode25;
struct A68t386  mode26;
struct A68t387  mode27;
struct A68t388  mode28;
struct A68t389  mode29;
struct A68t390  mode30;
struct A68t391  mode31;
struct A68t392  mode32;
struct A68t393  mode33;
struct A68t394  mode34;
struct A68t395  mode35;
struct A68t396  mode36;
struct A68t397  mode37;
struct A68t398  mode38;
struct A68t399  mode39;
struct A68t400  mode40;
struct A68t401  mode41;
struct A68t402  mode42;
} data; };
typedef struct A68t405  A68_405 ;    /* UNION(MODE361,MODE362,MODE363,MODE364,MODE365,MODE366,MODE367,MODE368,MODE369,MODE370,MODE371,MODE372,MODE373,MODE374,MODE375,MODE376,MODE377,MODE378,MODE379,MODE380,MODE381,MODE382,MODE383,MODE384,MODE385,MODE386,MODE387,MODE388,MODE389,MODE390,MODE391,MODE392,MODE393,MODE394,MODE395,MODE396,MODE397,MODE398,MODE399,MODE400,MODE401,MODE402)  */

A_PROCEDURE(A68_VOID ,A68t406,(struct A68t360 *),(struct A68t360 *,void *));
typedef struct A68t406  A68_406 ;    /* PROC(REF MODE360) VOID */

A_PROCEDURE(A68_VOID ,A68t407,(void),(void *));
typedef struct A68t407  A68_407 ;    /* PROC VOID */
struct A68t408{
A68_BITS  Options;
A_PAD_BITS(PAD_136)
};
typedef struct A68t408  A68_408 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t409,(struct A68t408 ,struct A68t408 ,struct A68t408 *),(struct A68t408 ,struct A68t408 ,struct A68t408 *,void *));
typedef struct A68t409  A68_409 ;    /* PROC(MODE408,MODE408) MODE408 */

A_PROCEDURE(struct A68t408 *,A68t410,(struct A68t408 *,struct A68t408 ),(struct A68t408 *,struct A68t408 ,void *));
typedef struct A68t410  A68_410 ;    /* PROC(REF MODE408,MODE408) REF MODE408 */

A_PROCEDURE(A68_BOOL ,A68t411,(struct A68t408 ,struct A68t408 ),(struct A68t408 ,struct A68t408 ,void *));
typedef struct A68t411  A68_411 ;    /* PROC(MODE408,MODE408) BOOL */

A_PROCEDURE(A68_BOOL ,A68t412,(struct A68t408 ,A68_INT ),(struct A68t408 ,A68_INT ,void *));
typedef struct A68t412  A68_412 ;    /* PROC(MODE408,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t413,(A68_INT ,struct A68t408 *),(A68_INT ,struct A68t408 *,void *));
typedef struct A68t413  A68_413 ;    /* PROC(INT) MODE408 */

A_PROCEDURE(A68_VOID ,A68t414,(struct A68t407 ),(struct A68t407 ,void *));
typedef struct A68t414  A68_414 ;    /* PROC(MODE407) VOID */

A_PROCEDURE(A68_VOID ,A68t415,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t415  A68_415 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t416,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t416  A68_416 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,53,A68t417);
typedef struct A68t417  A68_417 ;    /* STRUCT 53 CHAR */
#define A68_418  A68_VC 
#define A68t418 A68t26            /* FLEX VECTOR [] CHAR */
#define A68_419  A68_46 
#define A68t419 A68t46            /* FLEX VECTOR [] MODE418 */
A_ISTRUCT(A68_CHAR ,2,A68t420);
typedef struct A68t420  A68_420 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t421);
typedef struct A68t421  A68_421 ;    /* STRUCT 2 MODE52 */

A_PROCEDURE(A68_VOID ,A68t422,(struct A68t261 ,struct A68t265 *,struct A68t408 ,struct A68t108 ,struct A68t358 *),(struct A68t261 ,struct A68t265 *,struct A68t408 ,struct A68t108 ,struct A68t358 *,void *));
typedef struct A68t422  A68_422 ;    /* PROC(MODE261,REF MODE265,MODE408,MODE108) MODE358 */

A_PROCEDURE(A68_BOOL ,A68t423,(struct A68t176 ),(struct A68t176 ,void *));
typedef struct A68t423  A68_423 ;    /* PROC(MODE176) BOOL */
struct A68t424 { A68_INT mode; union {
struct A68t203 * mode1;
struct A68t193 * mode2;
struct A68t194 * mode3;
struct A68t199 * mode4;
struct A68t198 * mode5;
struct A68t195 * mode6;
struct A68t192 * mode7;
} data; };
typedef struct A68t424  A68_424 ;    /* UNION(REF MODE203,REF MODE193,REF MODE194,REF MODE199,REF MODE198,REF MODE195,REF MODE192)  */

A_PROCEDURE(A68_BOOL ,A68t425,(struct A68t195 *),(struct A68t195 *,void *));
typedef struct A68t425  A68_425 ;    /* PROC(REF MODE195) BOOL */

A_PROCEDURE(A68_BOOL ,A68t426,(struct A68t230 *),(struct A68t230 *,void *));
typedef struct A68t426  A68_426 ;    /* PROC(REF MODE230) BOOL */

A_PROCEDURE(A68_VOID ,A68t427,(struct A68t198 *,struct A68t360 *,struct A68t336 *),(struct A68t198 *,struct A68t360 *,struct A68t336 *,void *));
typedef struct A68t427  A68_427 ;    /* PROC(REF MODE198,REF MODE360) MODE336 */

A_PROCEDURE(A68_VOID ,A68t428,(struct A68t225 ),(struct A68t225 ,void *));
typedef struct A68t428  A68_428 ;    /* PROC(MODE225) VOID */

A_PROCEDURE(A68_VOID ,A68t429,(struct A68t225 ,struct A68t347 *),(struct A68t225 ,struct A68t347 *,void *));
typedef struct A68t429  A68_429 ;    /* PROC(MODE225) MODE347 */

A_PROCEDURE(struct A68t235 *,A68t430,(struct A68t235 *,struct A68t176 ),(struct A68t235 *,struct A68t176 ,void *));
typedef struct A68t430  A68_430 ;    /* PROC(REF MODE235,MODE176) REF MODE235 */

A_PROCEDURE(struct A68t236 *,A68t431,(struct A68t236 *,struct A68t176 ),(struct A68t236 *,struct A68t176 ,void *));
typedef struct A68t431  A68_431 ;    /* PROC(REF MODE236,MODE176) REF MODE236 */
A_ISTRUCT(struct A68t405 ,6,A68t432);
typedef struct A68t432  A68_432 ;    /* STRUCT 6 MODE405 */

A_PROCEDURE(A68_VOID ,A68t433,(A68_BOOL ,struct A68t254 *),(A68_BOOL ,struct A68t254 *,void *));
typedef struct A68t433  A68_433 ;    /* PROC(BOOL) MODE254 */
A_ISTRUCT(struct A68t405 ,2,A68t434);
typedef struct A68t434  A68_434 ;    /* STRUCT 2 MODE405 */
A_ISTRUCT(struct A68t405 ,4,A68t435);
typedef struct A68t435  A68_435 ;    /* STRUCT 4 MODE405 */

A_PROCEDURE(A68_VOID ,A68t436,(struct A68t265 *,struct A68t408 ,struct A68t108 ,struct A68t359 *),(struct A68t265 *,struct A68t408 ,struct A68t108 ,struct A68t359 *,void *));
typedef struct A68t436  A68_436 ;    /* PROC(REF MODE265,MODE408,MODE108) MODE359 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from options --- */
/* --- End of imports from options --- */


/* --- Imports from transformprocs --- */
extern A68_360 * THJATRN_make_newtprocs(struct A68t360 *,struct A68t404 );
extern A68_VOID  MLJATRN_discard_tprocs(struct A68t360 *);
extern A68_360 * AWLATRN_nulltprocs;
extern A68_VOID  DWLATRN_null_attr(struct A68t129 ,struct A68t360 *,A68_318 *);
extern A68_VOID  IWLATRN_null_formula(struct A68t138 ,struct A68t360 *,A68_321 *);
extern A68_VOID  NWLATRN_null_type(struct A68t154 ,struct A68t360 *,A68_327 *);
/* --- End of imports from transformprocs --- */


/* --- Imports from modeprocs --- */
extern A68_VOID  VUNATRN_unit_type(struct A68t176 ,struct A68t252 *,struct A68t255 *,A68_154 *);
/* --- End of imports from modeprocs --- */


/* --- Imports from assmodes --- */
extern A68_236 * JAAATRN_niluchoices;
extern A68_217 * NAAATRN_nilnames;
extern A68_235 * PAAATRN_nilseqchoices;
extern A68_224 * QAAATRN_nilsequence;
extern A68_205 * SAAATRN_nilseries;
extern A68_226 * BHAATRN_makeseqlet(struct A68t210 );
extern A68_134  ZHAATRN_attrnull;
extern A68_204  FIAATRN_unull;
#define WIAATRN_normalchoice 1
#define XIAATRN_elseofchoice 2
#define YIAATRN_elsechoice 3
#define KKAATRN_usource 1
/* --- End of imports from assmodes --- */


/* --- Imports from messageproc --- */
/* --- End of imports from messageproc --- */


/* --- Imports from basics --- */
/* --- End of imports from basics --- */


/* --- Imports from putstrings --- */
extern A68_VOID  UJBAOSL_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void BAAAOST(void);   /* options */
extern void IHJATRN(void);   /* transformprocs */
extern void HNMATRN(void);   /* modeprocs */
extern void BAAATRN(void);   /* assmodes */
extern void JFAAOSI(void);   /* messageproc */
extern void JSCAOST(void);   /* basics */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_417   NVFBTRN = {"$Id: elseof.a68,v 34.2 1995/03/29 13:02:47 ella Exp $"}; 
A_GISVEC(A68_VC ,OVFBTRN,NVFBTRN,53)
A68_46  BWFBTRN_elseof_options;
static A68_420   GWFBTRN = {"_e"}; 
A_GISVEC(A68_VC ,HWFBTRN,GWFBTRN,2)
typedef struct   /* env of non-global proc */
{
A68_255 * CXFBTRN_env;
} HXFBTRN_fndec_elseof;
typedef struct   /* env of non-global proc */
{
A68_265 * Closure;
A68_408  Options;
A68_108  Msg;
} LJGBTRN_outer;
typedef struct   /* env of non-global proc */
{
A68_BOOL * MXFBTRN_changes;
A68_INT * LXFBTRN_max_names;
A68_360 * Dec_tprocs;
} XYFBTRN_pre_pass_unit;
typedef struct   /* env of non-global proc */
{
A68_BOOL * MXFBTRN_changes;
A68_INT * LXFBTRN_max_names;
A68_360 * Dec_tprocs;
} MZFBTRN_pre_pass_seqstep;
typedef struct   /* env of non-global proc */
{
A68_INT * KXFBTRN_new_nameno;
A68_254 * IXFBTRN_nametypes;
A68_252 * Fdec;
A68_255 * CXFBTRN_env;
} BAGBTRN_usequence_proc;
typedef struct   /* env of non-global proc */
{
A68_427  ZZFBTRN_usequence_proc;
A68_INT * KXFBTRN_new_nameno;
A68_254 * IXFBTRN_nametypes;
A68_252 * Fdec;
A68_255 * CXFBTRN_env;
A68_360 * Dec_tprocs;
} UDGBTRN_unit_proc;
typedef struct   /* env of non-global proc */
{
A68_INT * LXFBTRN_max_names;
} MHGBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_BOOL * PXFBTRN_result;
} UXFBTRN_nnn_unit;
typedef struct   /* env of non-global proc */
{
A68_BOOL * FAGBTRN_seqchanged;
A68_198 * Useq;
A68_224 ** DAGBTRN_newseq;
A68_INT * GAGBTRN_stepcount;
A68_428  IAGBTRN_addstep;
A68_224 *** EAGBTRN_seqtail;
} KAGBTRN_addstep;
typedef struct   /* env of non-global proc */
{
A68_360 * Tprocs;
A68_INT * KXFBTRN_new_nameno;
A68_428  IAGBTRN_addstep;
A68_254 * IXFBTRN_nametypes;
A68_252 * Fdec;
A68_255 * CXFBTRN_env;
} TAGBTRN_seqstep_proc;
typedef struct   /* env of non-global proc */
{
A68_360 * Tprocs;
A68_431  EEGBTRN_makenewchoices;
} GEGBTRN_makenewchoices;
typedef struct   /* env of non-global proc */
{
A68_360 * Tprocs;
A68_430  ABGBTRN_makenewchoices;
} CBGBTRN_makenewchoices;

A_STATIC A68_VOID  QVFBTRN_generator(A68_BOOL  PVFBTRN_anonymous, A68_46  *ReturnedValue);

A_STATIC A68_VOID  UVFBTRN_generator(A68_BOOL  TVFBTRN_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  EWFBTRN_elseofid(A68_INT  Nameno, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  QWFBTRN_fnbody_elseof(A68_248  Fbody, A68_360 * Tprocs, A68_354  *ReturnedValue);

A68_VOID  BXFBTRN_outer_elseof(A68_261  Outer, A68_265 * Closure, A68_408  Options, A68_108  Msg, A68_358  *ReturnedValue);

A_STATIC A68_VOID  GXFBTRN_fndec_elseof(A68_252 * Fdec, A68_360 * Dec_tprocs, A68_357  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  OXFBTRN_need_new_name(A68_176  U);

A_STATIC A68_VOID  TXFBTRN_nnn_unit(A68_176  Unit, A68_360 * Tprocs, A68_336  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  IYFBTRN_need_ucase_change(A68_195 * Case);

A_STATIC A68_BOOL  OYFBTRN_need_seqcase_change(A68_230 * Case);

A_STATIC A68_VOID  WYFBTRN_pre_pass_unit(A68_176  U, A68_360 * Tprocs, A68_336  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  LZFBTRN_pre_pass_seqstep(A68_225  S, A68_360 * Tprocs, A68_347  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  AAGBTRN_usequence_proc(A68_198 * Useq, A68_360 * Tprocs, A68_336  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JAGBTRN_addstep(A68_225  Newstep, void *NonLocals);

A_STATIC A68_VOID  SAGBTRN_seqstep_proc(A68_225  S, A68_347  *ReturnedValue, void *NonLocals);

A_STATIC A68_235 * BBGBTRN_makenewchoices(A68_235 * Old, A68_176  Newinput, void *NonLocals);

A_STATIC A68_VOID  TDGBTRN_unit_proc(A68_176  U, A68_360 * Tprocs, A68_336  *ReturnedValue, void *NonLocals);

A_STATIC A68_236 * FEGBTRN_makenewchoices(A68_236 * Old, A68_176  Newinput, void *NonLocals);

A_STATIC A68_VOID  NGGBTRN_declaration(A68_237  Dec, A68_360 * Tprocs, A68_340  *ReturnedValue);

A_STATIC A68_VOID  LHGBTRN_generator(A68_BOOL  JHGBTRN_anonymous, A68_254  *ReturnedValue, void *NonLocals);

A68_VOID  FJGBTRN_transform_elseof(A68_265 * Closure, A68_408  Options, A68_108  Msg, A68_359  *ReturnedValue);

A_STATIC A68_VOID  KJGBTRN_outer(A68_261  O, A68_360 * Tprocs, A68_358  *ReturnedValue, void *NonLocals);
 /* line 180: */

A_STATIC A68_235 * BBGBTRN_makenewchoices(A68_235 * Old, A68_176  Newinput, void *NonLocals)
#define NL(x) (((CBGBTRN_makenewchoices *)NonLocals)->x)
{ 
A68_235 * DBGBTRN;  /* clause result */
A68_379  EBGBTRN;  /* CALL */
A68_336  FBGBTRN;  /* avoid structure result */
A68_336  GBGBTRN_test;
A68_390  HBGBTRN;  /* CALL */
A68_347  IBGBTRN;  /* avoid structure result */
A68_347  JBGBTRN_output;
A68_235  KBGBTRN;  /* collateral clause result */
A68_235 * LBGBTRN;  /* YIELD */
A68_235 * MBGBTRN_newchoices;
A68_230  NBGBTRN;  /* collateral clause result */
A68_230 * OBGBTRN;  /* YIELD */
A68_230 * PBGBTRN_newcase;
A68_235  QBGBTRN;  /* collateral clause result */
A68_176  RBGBTRN;  /* OPERATORS - mode -> union mode */
A68_225  SBGBTRN;  /* OPERATORS - mode -> union mode */
A68_235 * TBGBTRN;  /* YIELD */
A68_235  UBGBTRN;  /* collateral clause result */
A68_235 * VBGBTRN;  /* YIELD */
A_PROC_ENTRY(makenewchoices);
 /* line 181: */
 /* line 183: */
if ( (Old==PAAATRN_nilseqchoices) )
{ 
 /* line 184: */
DBGBTRN = PAAATRN_nilseqchoices;
} 
else
{ 
EBGBTRN = (*(&(NL(Tprocs)->Unit))) ;
A_CALLPROC(EBGBTRN,((*(&(Old->Test))), NL(Tprocs), &FBGBTRN),((*(&(Old->Test))), NL(Tprocs), &FBGBTRN,(EBGBTRN).nonlocals));
GBGBTRN_test = FBGBTRN;
 /* line 185: */
 /* line 186: */
HBGBTRN = (*(&(NL(Tprocs)->Seqstep))) ;
A_CALLPROC(HBGBTRN,((*(&(Old->Output))), NL(Tprocs), &IBGBTRN),((*(&(Old->Output))), NL(Tprocs), &IBGBTRN,(HBGBTRN).nonlocals));
JBGBTRN_output = IBGBTRN;
 /* line 188: */
 /* line 189: */
if ( ((*(&(Old->Sort)))==XIAATRN_elseofchoice) )
{ 
 /* line 190: */
KBGBTRN.Check = (*(&(Old->Check)));
 /* line 191: */
KBGBTRN.Sort = WIAATRN_normalchoice;
KBGBTRN.Test = GBGBTRN_test.U;
 /* line 192: */
KBGBTRN.Output = JBGBTRN_output.S;
KBGBTRN.Rest = A_CALLPROC(NL(ABGBTRN_makenewchoices),((*(&(Old->Rest))), Newinput),((*(&(Old->Rest))), Newinput,(NL(ABGBTRN_makenewchoices)).nonlocals));
LBGBTRN = A_HEAP(A68_235 ) ;
(*LBGBTRN) = KBGBTRN ;
MBGBTRN_newchoices = LBGBTRN;
 /* line 193: */
 /* line 194: */
NBGBTRN.Input = Newinput;
NBGBTRN.Choices = MBGBTRN_newchoices;
OBGBTRN = A_HEAP(A68_230 ) ;
(*OBGBTRN) = NBGBTRN ;
PBGBTRN_newcase = OBGBTRN;
 /* line 196: */
QBGBTRN.Check = (*(&(Old->Check)));
 /* line 197: */
QBGBTRN.Sort = YIAATRN_elsechoice;
QBGBTRN.Test = A_UNITE(RBGBTRN,mode34,34,(&FIAATRN_unull));
QBGBTRN.Output = A_UNITE(SBGBTRN,mode12,12,PBGBTRN_newcase);
 /* line 198: */
QBGBTRN.Rest = PAAATRN_nilseqchoices;
 /* line 199: */
TBGBTRN = A_HEAP(A68_235 ) ;
(*TBGBTRN) = QBGBTRN ;
DBGBTRN = TBGBTRN;
} 
else
{ 
UBGBTRN.Check = (*(&(Old->Check)));
 /* line 200: */
UBGBTRN.Sort = (*(&(Old->Sort)));
UBGBTRN.Test = GBGBTRN_test.U;
 /* line 201: */
UBGBTRN.Output = JBGBTRN_output.S;
 /* line 202: */
 /* line 203: */
UBGBTRN.Rest = A_CALLPROC(NL(ABGBTRN_makenewchoices),((*(&(Old->Rest))), Newinput),((*(&(Old->Rest))), Newinput,(NL(ABGBTRN_makenewchoices)).nonlocals));
 /* line 204: */
VBGBTRN = A_HEAP(A68_235 ) ;
(*VBGBTRN) = UBGBTRN ;
DBGBTRN = VBGBTRN;
} 
} 
A_PROC_EXIT(makenewchoices);
return( DBGBTRN );
} 
#undef NL

A_STATIC A68_VOID  TXFBTRN_nnn_unit(A68_176  Unit, A68_360 * Tprocs, A68_336  *ReturnedValue, void *NonLocals)
#define NL(x) (((UXFBTRN_nnn_unit *)NonLocals)->x)
{ 
A68_176  VXFBTRN;  /* united object - for case conformity */
A68_379  WXFBTRN;  /* CALL */
A68_336  XXFBTRN;  /* avoid structure result */
A68_336  YXFBTRN;  /* collateral clause result */
A68_336  ZXFBTRN;  /* clause result */
A_PROC_ENTRY(nnn_unit);
 /* line 72: */
 /* line 73: */
{ 
 /* line 75: */
VXFBTRN = Unit ;
switch ( VXFBTRN.mode )
{ 
case 22: /* REF STRUCT(BOOL,INT,MODE176,MODE176)  */
case 23: /* REF STRUCT(MODE216,MODE176)  */
case 24: /* REF STRUCT(MODE176,MODE216,MODE176)  */
case 25: /* REF STRUCT(MODE176,REF MODE236)  */
case 28: /* REF STRUCT(REF MODE224,MODE176)  */
case 29: /* REF STRUCT(REF MODE205,MODE176)  */
case 33: /* REF STRUCT(MODE138,MODE176)  */
 /* line 76: */
 /* line 77: */
 /* line 78: */
(*NL(PXFBTRN_result)) = A68_TRUE;
break;
default: 
 /* line 79: */
WXFBTRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(WXFBTRN,(Unit, Tprocs, &XXFBTRN),(Unit, Tprocs, &XXFBTRN,(WXFBTRN).nonlocals));
XXFBTRN;
break;
} 
 /* line 80: */
YXFBTRN.U = Unit;
 /* line 81: */
YXFBTRN.C = A68_FALSE;
ZXFBTRN = YXFBTRN;
} 
A_PROC_EXIT(nnn_unit);
*ReturnedValue = (ZXFBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  JAGBTRN_addstep(A68_225  Newstep, void *NonLocals)
#define NL(x) (((KAGBTRN_addstep *)NonLocals)->x)
{ 
A68_224 * LAGBTRN_nxt;
A68_INT  MAGBTRN;  /* to part of loop */
A68_INT  NAGBTRN;  /* loop control */
A68_224  OAGBTRN;  /* collateral clause result */
A68_224 * PAGBTRN;  /* YIELD */
A_PROC_ENTRY(addstep);
 /* line 156: */
 /* line 157: */
{ 
 /* line 158: */
if ( !(*NL(FAGBTRN_seqchanged)) )
{ 
LAGBTRN_nxt = (*(&(NL(Useq)->Body)));
 /* line 160: */
(*NL(DAGBTRN_newseq)) = QAAATRN_nilsequence;
 /* line 161: */
(*NL(FAGBTRN_seqchanged)) = A68_TRUE;
 /* line 162: */
 /* line 163: */
MAGBTRN = (*NL(GAGBTRN_stepcount));
for ( NAGBTRN = 1;
NAGBTRN <= MAGBTRN;
NAGBTRN += 1 )
{ 
 /* line 164: */
A_CALLPROC(NL(IAGBTRN_addstep),((*(&(LAGBTRN_nxt->Step)))),((*(&(LAGBTRN_nxt->Step))),(NL(IAGBTRN_addstep)).nonlocals));
 /* line 165: */
 /* line 166: */
LAGBTRN_nxt = (*(&(LAGBTRN_nxt->Rest)));
}
 /* line 167: */
} 
 /* line 168: */
 /* line 169: */
OAGBTRN.Step = Newstep;
OAGBTRN.Rest = QAAATRN_nilsequence;
PAGBTRN = A_HEAP(A68_224 ) ;
(*PAGBTRN) = OAGBTRN ;
(**NL(EAGBTRN_seqtail)) = PAGBTRN;
 /* line 170: */
 /* line 171: */
(*NL(EAGBTRN_seqtail)) = (&((**NL(EAGBTRN_seqtail))->Rest));
} 
A_PROC_EXIT(addstep);
return;
} 
#undef NL

A_STATIC A68_VOID  SAGBTRN_seqstep_proc(A68_225  S, A68_347  *ReturnedValue, void *NonLocals)
#define NL(x) (((TAGBTRN_seqstep_proc *)NonLocals)->x)
{ 
A68_225  UAGBTRN;  /* united object - for case conformity */
A68_230 * VAGBTRN_case;
A68_235 * WAGBTRN_choices;
A68_BOOL  XAGBTRN_needchange;
A68_430  ABGBTRN_makenewchoices;   /* proc value of non-global proc */
A68_379  XBGBTRN;  /* CALL */
A68_336  YBGBTRN;  /* avoid structure result */
A68_176  WBGBTRN_newinput;
A68_VC  ZBGBTRN;  /* avoid structure result */
A68_VC  ACGBTRN_newname;
A68_181  BCGBTRN;  /* collateral clause result */
A68_181 * CCGBTRN;  /* YIELD */
A68_181 * DCGBTRN_nameinp;
A68_210  ECGBTRN;  /* collateral clause result */
A68_217  FCGBTRN;  /* collateral clause result */
A68_217 * GCGBTRN;  /* YIELD */
A68_210 * HCGBTRN;  /* YIELD */
A68_225  ICGBTRN;  /* OPERATORS - mode -> union mode */
A68_226 * JCGBTRN;  /* YIELD */
A68_251  KCGBTRN;  /* collateral clause result */
A68_154  LCGBTRN;  /* avoid structure result */
A68_129  MCGBTRN;  /* OPERATORS - mode -> union mode */
A68_251 * NCGBTRN;  /* YIELD */
A68_347  OCGBTRN;  /* collateral clause result */
A68_230  PCGBTRN;  /* collateral clause result */
A68_176  QCGBTRN;  /* OPERATORS - mode -> union mode */
A68_176  RCGBTRN;  /* OPERATORS - mode -> union mode */
A68_230 * SCGBTRN;  /* YIELD */
A68_225  TCGBTRN;  /* OPERATORS - mode -> union mode */
A68_347  UCGBTRN;  /* clause result */
A68_347  VCGBTRN;  /* collateral clause result */
A68_230  WCGBTRN;  /* collateral clause result */
A68_230 * XCGBTRN;  /* YIELD */
A68_225  YCGBTRN;  /* OPERATORS - mode -> union mode */
A68_390  ZCGBTRN;  /* CALL */
A68_347  ADGBTRN;  /* avoid structure result */
A68_390  BDGBTRN;  /* CALL */
A68_347  CDGBTRN;  /* avoid structure result */
A_PROC_ENTRY(seqstep_proc);
 /* line 174: */
 /* line 175: */
UAGBTRN = S ;
switch ( UAGBTRN.mode )
{ 
case 12: /* REF STRUCT(MODE176,REF MODE235)  */
VAGBTRN_case = (UAGBTRN.data.mode12);
 /* line 176: */
{ 
WAGBTRN_choices = (*(&(VAGBTRN_case->Choices)));
 /* line 177: */
XAGBTRN_needchange = OYFBTRN_need_seqcase_change(VAGBTRN_case);
 /* line 179: */
A_CLOSURE( ABGBTRN_makenewchoices, BBGBTRN_makenewchoices, CBGBTRN_makenewchoices );
(( CBGBTRN_makenewchoices * ) ( ABGBTRN_makenewchoices.nonlocals )) -> Tprocs = NL(Tprocs);
(( CBGBTRN_makenewchoices * ) ( ABGBTRN_makenewchoices.nonlocals )) -> ABGBTRN_makenewchoices = ABGBTRN_makenewchoices;
 /* line 206: */
 /* line 207: */
if ( XAGBTRN_needchange )
{ 
 /* line 208: */
XBGBTRN = (*(&(NL(Tprocs)->Unit))) ;
A_CALLPROC(XBGBTRN,((*(&(VAGBTRN_case->Input))), NL(Tprocs), &YBGBTRN),((*(&(VAGBTRN_case->Input))), NL(Tprocs), &YBGBTRN,(XBGBTRN).nonlocals));
WBGBTRN_newinput = YBGBTRN.U;
 /* line 210: */
 /* line 211: */
if ( OXFBTRN_need_new_name(WBGBTRN_newinput) )
{ 
EWFBTRN_elseofid( (*NL(KXFBTRN_new_nameno))+=1, &ZBGBTRN );
ACGBTRN_newname = ZBGBTRN;
 /* line 212: */
BCGBTRN.Sort = KKAATRN_usource;
BCGBTRN.Nameno = (*NL(KXFBTRN_new_nameno));
CCGBTRN = A_HEAP(A68_181 ) ;
(*CCGBTRN) = BCGBTRN ;
DCGBTRN_nameinp = CCGBTRN;
 /* line 214: */
 /* line 215: */
FCGBTRN.Nameno = (*NL(KXFBTRN_new_nameno));
FCGBTRN.Rest = NAAATRN_nilnames;
 /* line 216: */
GCGBTRN = A_HEAP(A68_217 ) ;
(*GCGBTRN) = FCGBTRN ;
ECGBTRN.Letnames = GCGBTRN;
ECGBTRN.Unit = WBGBTRN_newinput;
HCGBTRN = A_HEAP(A68_210 ) ;
JCGBTRN = BHAATRN_makeseqlet((*HCGBTRN) = ECGBTRN) ;
A_CALLPROC(NL(IAGBTRN_addstep),(A_UNITE(ICGBTRN,mode8,8,JCGBTRN)),(A_UNITE(ICGBTRN,mode8,8,JCGBTRN),(NL(IAGBTRN_addstep)).nonlocals));
 /* line 218: */
 /* line 219: */
 /* line 220: */
KCGBTRN.Name = ACGBTRN_newname;
 /* line 221: */
VUNATRN_unit_type( (*(&(VAGBTRN_case->Input))), NL(Fdec), NL(CXFBTRN_env), &LCGBTRN );
KCGBTRN.Type = LCGBTRN;
KCGBTRN.Attr = A_UNITE(MCGBTRN,mode5,5,(&ZHAATRN_attrnull));
NCGBTRN = (&A_VINDEX((*NL(IXFBTRN_nametypes)),(*NL(KXFBTRN_new_nameno)))) ;
(*NCGBTRN) = KCGBTRN;
 /* line 223: */
 /* line 224: */
 /* line 225: */
PCGBTRN.Input = A_UNITE(QCGBTRN,mode11,11,DCGBTRN_nameinp);
PCGBTRN.Choices = A_CALLPROC(ABGBTRN_makenewchoices,((*(&(VAGBTRN_case->Choices))), A_UNITE(RCGBTRN,mode11,11,DCGBTRN_nameinp)),((*(&(VAGBTRN_case->Choices))), A_UNITE(RCGBTRN,mode11,11,DCGBTRN_nameinp),(ABGBTRN_makenewchoices).nonlocals));
 /* line 226: */
SCGBTRN = A_HEAP(A68_230 ) ;
(*SCGBTRN) = PCGBTRN ;
OCGBTRN.S = A_UNITE(TCGBTRN,mode12,12,SCGBTRN);
 /* line 227: */
 /* line 228: */
OCGBTRN.C = A68_TRUE;
UCGBTRN = OCGBTRN;
} 
else
{ 
 /* line 229: */
 /* line 230: */
WCGBTRN.Input = WBGBTRN_newinput;
WCGBTRN.Choices = A_CALLPROC(ABGBTRN_makenewchoices,((*(&(VAGBTRN_case->Choices))), WBGBTRN_newinput),((*(&(VAGBTRN_case->Choices))), WBGBTRN_newinput,(ABGBTRN_makenewchoices).nonlocals));
 /* line 231: */
XCGBTRN = A_HEAP(A68_230 ) ;
(*XCGBTRN) = WCGBTRN ;
VCGBTRN.S = A_UNITE(YCGBTRN,mode12,12,XCGBTRN);
 /* line 232: */
 /* line 233: */
 /* line 234: */
VCGBTRN.C = A68_TRUE;
UCGBTRN = VCGBTRN;
} 
} 
else
{ 
 /* line 235: */
 /* line 236: */
 /* line 237: */
 /* line 238: */
ZCGBTRN = (*(&(NL(Tprocs)->Seqstep))) ;
A_CALLPROC(ZCGBTRN,(S, NL(Tprocs), &ADGBTRN),(S, NL(Tprocs), &ADGBTRN,(ZCGBTRN).nonlocals));
UCGBTRN = ADGBTRN;
} 
} 
break;
default: 
 /* line 239: */
BDGBTRN = (*(&(NL(Tprocs)->Seqstep))) ;
A_CALLPROC(BDGBTRN,(S, NL(Tprocs), &CDGBTRN),(S, NL(Tprocs), &CDGBTRN,(BDGBTRN).nonlocals));
UCGBTRN = CDGBTRN;
break;
} 
A_PROC_EXIT(seqstep_proc);
*ReturnedValue = (UCGBTRN);
return;
} 
#undef NL
 /* line 272: */

A_STATIC A68_236 * FEGBTRN_makenewchoices(A68_236 * Old, A68_176  Newinput, void *NonLocals)
#define NL(x) (((GEGBTRN_makenewchoices *)NonLocals)->x)
{ 
A68_236 * HEGBTRN;  /* clause result */
A68_379  IEGBTRN;  /* CALL */
A68_336  JEGBTRN;  /* avoid structure result */
A68_336  KEGBTRN_test;
A68_379  LEGBTRN;  /* CALL */
A68_336  MEGBTRN;  /* avoid structure result */
A68_336  NEGBTRN_output;
A68_236  OEGBTRN;  /* collateral clause result */
A68_236 * PEGBTRN;  /* YIELD */
A68_236 * QEGBTRN_newchoices;
A68_195  REGBTRN;  /* collateral clause result */
A68_195 * SEGBTRN;  /* YIELD */
A68_195 * TEGBTRN_newcase;
A68_236  UEGBTRN;  /* collateral clause result */
A68_176  VEGBTRN;  /* OPERATORS - mode -> union mode */
A68_176  WEGBTRN;  /* OPERATORS - mode -> union mode */
A68_236 * XEGBTRN;  /* YIELD */
A68_236  YEGBTRN;  /* collateral clause result */
A68_236 * ZEGBTRN;  /* YIELD */
A_PROC_ENTRY(makenewchoices);
 /* line 273: */
 /* line 275: */
if ( (Old==JAAATRN_niluchoices) )
{ 
 /* line 276: */
HEGBTRN = JAAATRN_niluchoices;
} 
else
{ 
IEGBTRN = (*(&(NL(Tprocs)->Unit))) ;
A_CALLPROC(IEGBTRN,((*(&(Old->Test))), NL(Tprocs), &JEGBTRN),((*(&(Old->Test))), NL(Tprocs), &JEGBTRN,(IEGBTRN).nonlocals));
KEGBTRN_test = JEGBTRN;
 /* line 277: */
LEGBTRN = (*(&(NL(Tprocs)->Unit))) ;
A_CALLPROC(LEGBTRN,((*(&(Old->Output))), NL(Tprocs), &MEGBTRN),((*(&(Old->Output))), NL(Tprocs), &MEGBTRN,(LEGBTRN).nonlocals));
NEGBTRN_output = MEGBTRN;
 /* line 279: */
 /* line 280: */
if ( ((*(&(Old->Sort)))==XIAATRN_elseofchoice) )
{ 
 /* line 281: */
OEGBTRN.Check = (*(&(Old->Check)));
 /* line 282: */
OEGBTRN.Sort = WIAATRN_normalchoice;
OEGBTRN.Test = KEGBTRN_test.U;
 /* line 283: */
OEGBTRN.Output = NEGBTRN_output.U;
OEGBTRN.Rest = A_CALLPROC(NL(EEGBTRN_makenewchoices),((*(&(Old->Rest))), Newinput),((*(&(Old->Rest))), Newinput,(NL(EEGBTRN_makenewchoices)).nonlocals));
PEGBTRN = A_HEAP(A68_236 ) ;
(*PEGBTRN) = OEGBTRN ;
QEGBTRN_newchoices = PEGBTRN;
 /* line 284: */
REGBTRN.Input = Newinput;
REGBTRN.Choices = QEGBTRN_newchoices;
SEGBTRN = A_HEAP(A68_195 ) ;
(*SEGBTRN) = REGBTRN ;
TEGBTRN_newcase = SEGBTRN;
 /* line 286: */
UEGBTRN.Check = (*(&(Old->Check)));
 /* line 287: */
UEGBTRN.Sort = YIAATRN_elsechoice;
UEGBTRN.Test = A_UNITE(VEGBTRN,mode34,34,(&FIAATRN_unull));
UEGBTRN.Output = A_UNITE(WEGBTRN,mode25,25,TEGBTRN_newcase);
 /* line 288: */
UEGBTRN.Rest = JAAATRN_niluchoices;
 /* line 289: */
XEGBTRN = A_HEAP(A68_236 ) ;
(*XEGBTRN) = UEGBTRN ;
HEGBTRN = XEGBTRN;
} 
else
{ 
YEGBTRN.Check = (*(&(Old->Check)));
 /* line 290: */
YEGBTRN.Sort = (*(&(Old->Sort)));
YEGBTRN.Test = KEGBTRN_test.U;
 /* line 291: */
YEGBTRN.Output = NEGBTRN_output.U;
 /* line 292: */
YEGBTRN.Rest = A_CALLPROC(NL(EEGBTRN_makenewchoices),((*(&(Old->Rest))), Newinput),((*(&(Old->Rest))), Newinput,(NL(EEGBTRN_makenewchoices)).nonlocals));
 /* line 293: */
ZEGBTRN = A_HEAP(A68_236 ) ;
(*ZEGBTRN) = YEGBTRN ;
HEGBTRN = ZEGBTRN;
} 
} 
A_PROC_EXIT(makenewchoices);
return( HEGBTRN );
} 
#undef NL

A_STATIC A68_BOOL  OXFBTRN_need_new_name(A68_176  U)
{ 
A68_BOOL  PXFBTRN_result;
A68_379  SXFBTRN_nnn_unit;   /* proc value of non-global proc */
A68_405  AYFBTRN;  /* OPERATORS - mode -> union mode */
A68_379  BYFBTRN;  /* YIELD */
A68_404  CYFBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_360 * DYFBTRN_newtprocs;
A68_379  EYFBTRN;  /* CALL */
A68_336  FYFBTRN;  /* avoid structure result */
A68_BOOL  GYFBTRN;  /* clause result */
A_PROC_ENTRY(need_new_name);
 /* line 68: */
 /* line 69: */
{ 
PXFBTRN_result = A68_FALSE;
 /* line 71: */
A_CLOSURE( SXFBTRN_nnn_unit, TXFBTRN_nnn_unit, UXFBTRN_nnn_unit );
(( UXFBTRN_nnn_unit * ) ( SXFBTRN_nnn_unit.nonlocals )) -> PXFBTRN_result = (&PXFBTRN_result);
 /* line 83: */
 /* line 84: */
BYFBTRN = SXFBTRN_nnn_unit ;
DYFBTRN_newtprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HVEC(CYFBTRN,A_UNITE(AYFBTRN,mode19,19,BYFBTRN),A68_405 ));
 /* line 86: */
EYFBTRN = (*(&(DYFBTRN_newtprocs->Unit))) ;
A_CALLPROC(EYFBTRN,(U, DYFBTRN_newtprocs, &FYFBTRN),(U, DYFBTRN_newtprocs, &FYFBTRN,(EYFBTRN).nonlocals));
FYFBTRN;
 /* line 87: */
MLJATRN_discard_tprocs(DYFBTRN_newtprocs);
 /* line 88: */
 /* line 89: */
GYFBTRN = PXFBTRN_result;
} 
A_PROC_EXIT(need_new_name);
return( GYFBTRN );
} 
#undef NL

A_STATIC A68_BOOL  IYFBTRN_need_ucase_change(A68_195 * Case)
{ 
A68_236 * JYFBTRN_choices;
A68_BOOL  KYFBTRN_needchange;
A68_BOOL  LYFBTRN;  /* optbool result */
A68_BOOL  MYFBTRN;  /* clause result */
A_PROC_ENTRY(need_ucase_change);
 /* line 92: */
 /* line 93: */
{ 
JYFBTRN_choices = (*(&(Case->Choices)));
 /* line 94: */
KYFBTRN_needchange = A68_FALSE;
 /* line 96: */
for ( ;; )
{ 
LYFBTRN = !KYFBTRN_needchange;
if ( LYFBTRN )
{ /* line 97: */
LYFBTRN = (JYFBTRN_choices!=JAAATRN_niluchoices);
}
 /* line 98: */
if ( !(LYFBTRN) ) break;
KYFBTRN_needchange = ((*(&(JYFBTRN_choices->Sort)))==XIAATRN_elseofchoice);
 /* line 99: */
 /* line 100: */
JYFBTRN_choices = (*(&(JYFBTRN_choices->Rest)));
}
 /* line 101: */
 /* line 102: */
MYFBTRN = KYFBTRN_needchange;
} 
A_PROC_EXIT(need_ucase_change);
return( MYFBTRN );
} 
#undef NL

A_STATIC A68_BOOL  OYFBTRN_need_seqcase_change(A68_230 * Case)
{ 
A68_235 * PYFBTRN_choices;
A68_BOOL  QYFBTRN_needchange;
A68_BOOL  RYFBTRN;  /* optbool result */
A68_BOOL  SYFBTRN;  /* clause result */
A_PROC_ENTRY(need_seqcase_change);
 /* line 105: */
 /* line 106: */
{ 
PYFBTRN_choices = (*(&(Case->Choices)));
 /* line 107: */
QYFBTRN_needchange = A68_FALSE;
 /* line 109: */
for ( ;; )
{ 
RYFBTRN = !QYFBTRN_needchange;
if ( RYFBTRN )
{ /* line 110: */
RYFBTRN = (PYFBTRN_choices!=PAAATRN_nilseqchoices);
}
 /* line 111: */
if ( !(RYFBTRN) ) break;
QYFBTRN_needchange = ((*(&(PYFBTRN_choices->Sort)))==XIAATRN_elseofchoice);
 /* line 112: */
 /* line 113: */
PYFBTRN_choices = (*(&(PYFBTRN_choices->Rest)));
}
 /* line 114: */
 /* line 115: */
SYFBTRN = QYFBTRN_needchange;
} 
A_PROC_EXIT(need_seqcase_change);
return( SYFBTRN );
} 
#undef NL

A_STATIC A68_VOID  WYFBTRN_pre_pass_unit(A68_176  U, A68_360 * Tprocs, A68_336  *ReturnedValue, void *NonLocals)
#define NL(x) (((XYFBTRN_pre_pass_unit *)NonLocals)->x)
{ 
A68_176  YYFBTRN;  /* united object - for case conformity */
A68_195 * ZYFBTRN_case;
A68_BOOL  AZFBTRN_needchange;
A68_BOOL  BZFBTRN;  /* optbool result */
A68_BOOL  CZFBTRN;  /* optbool result */
A68_336  DZFBTRN;  /* clause result */
A68_379  EZFBTRN;  /* CALL */
A68_336  FZFBTRN;  /* avoid structure result */
A68_379  GZFBTRN;  /* CALL */
A68_336  HZFBTRN;  /* avoid structure result */
A_PROC_ENTRY(pre_pass_unit);
 /* line 118: */
 /* line 119: */
YYFBTRN = U ;
switch ( YYFBTRN.mode )
{ 
case 25: /* REF STRUCT(MODE176,REF MODE236)  */
ZYFBTRN_case = (YYFBTRN.data.mode25);
 /* line 120: */
{ 
AZFBTRN_needchange = IYFBTRN_need_ucase_change(ZYFBTRN_case);
 /* line 122: */
BZFBTRN = (*NL(MXFBTRN_changes));
if ( ! BZFBTRN )
{BZFBTRN = AZFBTRN_needchange;
}
(*NL(MXFBTRN_changes)) = BZFBTRN;
 /* line 123: */
CZFBTRN = AZFBTRN_needchange;
if ( CZFBTRN )
{CZFBTRN = OXFBTRN_need_new_name((*(&(ZYFBTRN_case->Input))));
}
 /* line 124: */
if ( CZFBTRN )
{ 
 /* line 125: */
(*NL(LXFBTRN_max_names))+=1;
} 
 /* line 126: */
 /* line 127: */
 /* line 128: */
 /* line 129: */
EZFBTRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(EZFBTRN,(U, Tprocs, &FZFBTRN),(U, Tprocs, &FZFBTRN,(EZFBTRN).nonlocals));
DZFBTRN = FZFBTRN;
} 
break;
default: 
 /* line 130: */
GZFBTRN = (*(&(NL(Dec_tprocs)->Unit))) ;
A_CALLPROC(GZFBTRN,(U, Tprocs, &HZFBTRN),(U, Tprocs, &HZFBTRN,(GZFBTRN).nonlocals));
DZFBTRN = HZFBTRN;
break;
} 
A_PROC_EXIT(pre_pass_unit);
*ReturnedValue = (DZFBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  LZFBTRN_pre_pass_seqstep(A68_225  S, A68_360 * Tprocs, A68_347  *ReturnedValue, void *NonLocals)
#define NL(x) (((MZFBTRN_pre_pass_seqstep *)NonLocals)->x)
{ 
A68_225  NZFBTRN;  /* united object - for case conformity */
A68_230 * OZFBTRN_case;
A68_BOOL  PZFBTRN_needchange;
A68_BOOL  QZFBTRN;  /* optbool result */
A68_BOOL  RZFBTRN;  /* optbool result */
A68_347  SZFBTRN;  /* clause result */
A68_390  TZFBTRN;  /* CALL */
A68_347  UZFBTRN;  /* avoid structure result */
A68_390  VZFBTRN;  /* CALL */
A68_347  WZFBTRN;  /* avoid structure result */
A_PROC_ENTRY(pre_pass_seqstep);
 /* line 133: */
 /* line 134: */
NZFBTRN = S ;
switch ( NZFBTRN.mode )
{ 
case 12: /* REF STRUCT(MODE176,REF MODE235)  */
OZFBTRN_case = (NZFBTRN.data.mode12);
 /* line 135: */
{ 
PZFBTRN_needchange = OYFBTRN_need_seqcase_change(OZFBTRN_case);
 /* line 137: */
QZFBTRN = (*NL(MXFBTRN_changes));
if ( ! QZFBTRN )
{QZFBTRN = PZFBTRN_needchange;
}
(*NL(MXFBTRN_changes)) = QZFBTRN;
 /* line 138: */
RZFBTRN = PZFBTRN_needchange;
if ( RZFBTRN )
{RZFBTRN = OXFBTRN_need_new_name((*(&(OZFBTRN_case->Input))));
}
 /* line 139: */
if ( RZFBTRN )
{ 
 /* line 140: */
(*NL(LXFBTRN_max_names))+=1;
} 
 /* line 141: */
 /* line 142: */
 /* line 143: */
 /* line 144: */
TZFBTRN = (*(&(AWLATRN_nulltprocs->Seqstep))) ;
A_CALLPROC(TZFBTRN,(S, Tprocs, &UZFBTRN),(S, Tprocs, &UZFBTRN,(TZFBTRN).nonlocals));
SZFBTRN = UZFBTRN;
} 
break;
default: 
 /* line 145: */
VZFBTRN = (*(&(NL(Dec_tprocs)->Seqstep))) ;
A_CALLPROC(VZFBTRN,(S, Tprocs, &WZFBTRN),(S, Tprocs, &WZFBTRN,(VZFBTRN).nonlocals));
SZFBTRN = WZFBTRN;
break;
} 
A_PROC_EXIT(pre_pass_seqstep);
*ReturnedValue = (SZFBTRN);
return;
} 
#undef NL
 /* line 148: */

A_STATIC A68_VOID  AAGBTRN_usequence_proc(A68_198 * Useq, A68_360 * Tprocs, A68_336  *ReturnedValue, void *NonLocals)
#define NL(x) (((BAGBTRN_usequence_proc *)NonLocals)->x)
{ 
A68_224 * CAGBTRN_nxtstep;
A68_224 * DAGBTRN_newseq;
A68_224 ** EAGBTRN_seqtail;
A68_BOOL  FAGBTRN_seqchanged;
A68_INT  GAGBTRN_stepcount;
A68_428  IAGBTRN_addstep;   /* proc value of non-global proc */
A68_429  RAGBTRN_seqstep_proc;   /* proc value of non-global proc */
A68_347  DDGBTRN_seqc;
A68_347  EDGBTRN;  /* avoid structure result */
A68_379  FDGBTRN;  /* CALL */
A68_336  GDGBTRN;  /* avoid structure result */
A68_336  HDGBTRN_uc;
A68_BOOL  IDGBTRN;  /* optbool result */
A68_336  JDGBTRN;  /* collateral clause result */
A68_198  KDGBTRN;  /* collateral clause result */
A68_198 * LDGBTRN;  /* YIELD */
A68_176  MDGBTRN;  /* OPERATORS - mode -> union mode */
A68_336  NDGBTRN;  /* clause result */
A68_336  ODGBTRN;  /* collateral clause result */
A68_176  PDGBTRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(usequence_proc);
 /* line 149: */
 /* line 150: */
{ 
CAGBTRN_nxtstep = (*(&(Useq->Body)));
DAGBTRN_newseq = (*(&(Useq->Body)));
 /* line 151: */
EAGBTRN_seqtail = (&DAGBTRN_newseq);
 /* line 152: */
FAGBTRN_seqchanged = A68_FALSE;
 /* line 153: */
GAGBTRN_stepcount = 0;
 /* line 155: */
A_CLOSURE( IAGBTRN_addstep, JAGBTRN_addstep, KAGBTRN_addstep );
(( KAGBTRN_addstep * ) ( IAGBTRN_addstep.nonlocals )) -> FAGBTRN_seqchanged = (&FAGBTRN_seqchanged);
(( KAGBTRN_addstep * ) ( IAGBTRN_addstep.nonlocals )) -> Useq = Useq;
(( KAGBTRN_addstep * ) ( IAGBTRN_addstep.nonlocals )) -> DAGBTRN_newseq = (&DAGBTRN_newseq);
(( KAGBTRN_addstep * ) ( IAGBTRN_addstep.nonlocals )) -> GAGBTRN_stepcount = (&GAGBTRN_stepcount);
(( KAGBTRN_addstep * ) ( IAGBTRN_addstep.nonlocals )) -> IAGBTRN_addstep = IAGBTRN_addstep;
(( KAGBTRN_addstep * ) ( IAGBTRN_addstep.nonlocals )) -> EAGBTRN_seqtail = (&EAGBTRN_seqtail);
 /* line 173: */
A_CLOSURE( RAGBTRN_seqstep_proc, SAGBTRN_seqstep_proc, TAGBTRN_seqstep_proc );
(( TAGBTRN_seqstep_proc * ) ( RAGBTRN_seqstep_proc.nonlocals )) -> Tprocs = Tprocs;
(( TAGBTRN_seqstep_proc * ) ( RAGBTRN_seqstep_proc.nonlocals )) -> KXFBTRN_new_nameno = NL(KXFBTRN_new_nameno);
(( TAGBTRN_seqstep_proc * ) ( RAGBTRN_seqstep_proc.nonlocals )) -> IAGBTRN_addstep = IAGBTRN_addstep;
(( TAGBTRN_seqstep_proc * ) ( RAGBTRN_seqstep_proc.nonlocals )) -> IXFBTRN_nametypes = NL(IXFBTRN_nametypes);
(( TAGBTRN_seqstep_proc * ) ( RAGBTRN_seqstep_proc.nonlocals )) -> Fdec = NL(Fdec);
(( TAGBTRN_seqstep_proc * ) ( RAGBTRN_seqstep_proc.nonlocals )) -> CXFBTRN_env = NL(CXFBTRN_env);
 /* line 241: */
 /* line 243: */
for ( ;; )
{ 
 /* line 244: */
 /* line 245: */
if ( !((CAGBTRN_nxtstep!=QAAATRN_nilsequence)) ) break;
A_CALLPROC(RAGBTRN_seqstep_proc,((*(&(CAGBTRN_nxtstep->Step))), &EDGBTRN),((*(&(CAGBTRN_nxtstep->Step))), &EDGBTRN,(RAGBTRN_seqstep_proc).nonlocals));
DDGBTRN_seqc = EDGBTRN;
 /* line 246: */
 /* line 247: */
if ( (*(&((&DDGBTRN_seqc)->C))) )
{ 
 /* line 248: */
A_CALLPROC(IAGBTRN_addstep,((*(&((&DDGBTRN_seqc)->S)))),((*(&((&DDGBTRN_seqc)->S))),(IAGBTRN_addstep).nonlocals));
} 
else
{ 
 /* line 249: */
if ( FAGBTRN_seqchanged )
{ 
 /* line 250: */
A_CALLPROC(IAGBTRN_addstep,((*(&(CAGBTRN_nxtstep->Step)))),((*(&(CAGBTRN_nxtstep->Step))),(IAGBTRN_addstep).nonlocals));
} 
} 
 /* line 251: */
GAGBTRN_stepcount+=1;
 /* line 252: */
 /* line 253: */
CAGBTRN_nxtstep = (*(&(CAGBTRN_nxtstep->Rest)));
}
 /* line 255: */
FDGBTRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(FDGBTRN,((*(&(Useq->Output))), Tprocs, &GDGBTRN),((*(&(Useq->Output))), Tprocs, &GDGBTRN,(FDGBTRN).nonlocals));
HDGBTRN_uc = GDGBTRN;
 /* line 257: */
IDGBTRN = HDGBTRN_uc.C;
if ( ! IDGBTRN )
{IDGBTRN = FAGBTRN_seqchanged;
}
 /* line 258: */
if ( IDGBTRN )
{ 
KDGBTRN.Body = DAGBTRN_newseq;
KDGBTRN.Output = HDGBTRN_uc.U;
LDGBTRN = A_HEAP(A68_198 ) ;
(*LDGBTRN) = KDGBTRN ;
JDGBTRN.U = A_UNITE(MDGBTRN,mode28,28,LDGBTRN);
 /* line 259: */
 /* line 260: */
JDGBTRN.C = A68_TRUE;
NDGBTRN = JDGBTRN;
} 
else
{ 
ODGBTRN.U = A_UNITE(PDGBTRN,mode28,28,Useq);
 /* line 261: */
 /* line 262: */
ODGBTRN.C = A68_FALSE;
NDGBTRN = ODGBTRN;
} 
} 
A_PROC_EXIT(usequence_proc);
*ReturnedValue = (NDGBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  TDGBTRN_unit_proc(A68_176  U, A68_360 * Tprocs, A68_336  *ReturnedValue, void *NonLocals)
#define NL(x) (((UDGBTRN_unit_proc *)NonLocals)->x)
{ 
A68_176  VDGBTRN;  /* united object - for case conformity */
A68_198 * WDGBTRN_useq;
A68_336  XDGBTRN;  /* clause result */
A68_336  YDGBTRN;  /* avoid structure result */
A68_195 * ZDGBTRN_case;
A68_236 * AEGBTRN_choices;
A68_BOOL  BEGBTRN_needchange;
A68_431  EEGBTRN_makenewchoices;   /* proc value of non-global proc */
A68_379  AFGBTRN;  /* CALL */
A68_336  BFGBTRN;  /* avoid structure result */
A68_176  CFGBTRN_newinput;
A68_210  DFGBTRN;  /* collateral clause result */
A68_217  EFGBTRN;  /* collateral clause result */
A68_217 * FFGBTRN;  /* YIELD */
A68_210 * GFGBTRN;  /* YIELD */
A68_210 * HFGBTRN_let;
A68_VC  IFGBTRN;  /* avoid structure result */
A68_VC  JFGBTRN_newname;
A68_181  KFGBTRN;  /* collateral clause result */
A68_181 * LFGBTRN;  /* YIELD */
A68_181 * MFGBTRN_nameinp;
A68_251  NFGBTRN;  /* collateral clause result */
A68_154  OFGBTRN;  /* avoid structure result */
A68_129  PFGBTRN;  /* OPERATORS - mode -> union mode */
A68_251 * QFGBTRN;  /* YIELD */
A68_336  RFGBTRN;  /* collateral clause result */
A68_199  SFGBTRN;  /* collateral clause result */
A68_205  TFGBTRN;  /* collateral clause result */
A68_206  UFGBTRN;  /* OPERATORS - mode -> union mode */
A68_205 * VFGBTRN;  /* YIELD */
A68_195  WFGBTRN;  /* collateral clause result */
A68_176  XFGBTRN;  /* OPERATORS - mode -> union mode */
A68_176  YFGBTRN;  /* OPERATORS - mode -> union mode */
A68_195 * ZFGBTRN;  /* YIELD */
A68_176  AGGBTRN;  /* OPERATORS - mode -> union mode */
A68_199 * BGGBTRN;  /* YIELD */
A68_176  CGGBTRN;  /* OPERATORS - mode -> union mode */
A68_336  DGGBTRN;  /* collateral clause result */
A68_195  EGGBTRN;  /* collateral clause result */
A68_195 * FGGBTRN;  /* YIELD */
A68_176  GGGBTRN;  /* OPERATORS - mode -> union mode */
A68_379  HGGBTRN;  /* CALL */
A68_336  IGGBTRN;  /* avoid structure result */
A68_379  JGGBTRN;  /* CALL */
A68_336  KGGBTRN;  /* avoid structure result */
A_PROC_ENTRY(unit_proc);
 /* line 265: */
 /* line 266: */
VDGBTRN = U ;
switch ( VDGBTRN.mode )
{ 
case 28: /* REF STRUCT(REF MODE224,MODE176)  */
WDGBTRN_useq = (VDGBTRN.data.mode28);
 /* line 267: */
A_CALLPROC(NL(ZZFBTRN_usequence_proc),(WDGBTRN_useq, Tprocs, &YDGBTRN),(WDGBTRN_useq, Tprocs, &YDGBTRN,(NL(ZZFBTRN_usequence_proc)).nonlocals));
XDGBTRN = YDGBTRN;
break;
case 25: /* REF STRUCT(MODE176,REF MODE236)  */
ZDGBTRN_case = (VDGBTRN.data.mode25);
 /* line 268: */
{ 
AEGBTRN_choices = (*(&(ZDGBTRN_case->Choices)));
 /* line 269: */
BEGBTRN_needchange = IYFBTRN_need_ucase_change(ZDGBTRN_case);
 /* line 271: */
A_CLOSURE( EEGBTRN_makenewchoices, FEGBTRN_makenewchoices, GEGBTRN_makenewchoices );
(( GEGBTRN_makenewchoices * ) ( EEGBTRN_makenewchoices.nonlocals )) -> Tprocs = Tprocs;
(( GEGBTRN_makenewchoices * ) ( EEGBTRN_makenewchoices.nonlocals )) -> EEGBTRN_makenewchoices = EEGBTRN_makenewchoices;
 /* line 295: */
 /* line 296: */
if ( BEGBTRN_needchange )
{ 
AFGBTRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(AFGBTRN,((*(&(ZDGBTRN_case->Input))), Tprocs, &BFGBTRN),((*(&(ZDGBTRN_case->Input))), Tprocs, &BFGBTRN,(AFGBTRN).nonlocals));
CFGBTRN_newinput = BFGBTRN.U;
 /* line 298: */
 /* line 299: */
if ( OXFBTRN_need_new_name(CFGBTRN_newinput) )
{ 
 /* line 300: */
EFGBTRN.Nameno = (*NL(KXFBTRN_new_nameno))+=1;
EFGBTRN.Rest = NAAATRN_nilnames;
 /* line 301: */
FFGBTRN = A_HEAP(A68_217 ) ;
(*FFGBTRN) = EFGBTRN ;
DFGBTRN.Letnames = FFGBTRN;
DFGBTRN.Unit = CFGBTRN_newinput;
GFGBTRN = A_HEAP(A68_210 ) ;
(*GFGBTRN) = DFGBTRN ;
HFGBTRN_let = GFGBTRN;
 /* line 303: */
EWFBTRN_elseofid( (*NL(KXFBTRN_new_nameno)), &IFGBTRN );
JFGBTRN_newname = IFGBTRN;
 /* line 304: */
KFGBTRN.Sort = KKAATRN_usource;
KFGBTRN.Nameno = (*NL(KXFBTRN_new_nameno));
LFGBTRN = A_HEAP(A68_181 ) ;
(*LFGBTRN) = KFGBTRN ;
MFGBTRN_nameinp = LFGBTRN;
 /* line 306: */
 /* line 307: */
 /* line 308: */
NFGBTRN.Name = JFGBTRN_newname;
 /* line 309: */
VUNATRN_unit_type( (*(&(ZDGBTRN_case->Input))), NL(Fdec), NL(CXFBTRN_env), &OFGBTRN );
NFGBTRN.Type = OFGBTRN;
NFGBTRN.Attr = A_UNITE(PFGBTRN,mode5,5,(&ZHAATRN_attrnull));
QFGBTRN = (&A_VINDEX((*NL(IXFBTRN_nametypes)),(*NL(KXFBTRN_new_nameno)))) ;
(*QFGBTRN) = NFGBTRN;
 /* line 310: */
 /* line 311: */
TFGBTRN.Step = A_UNITE(UFGBTRN,mode8,8,HFGBTRN_let);
TFGBTRN.Rest = SAAATRN_nilseries;
 /* line 312: */
VFGBTRN = A_HEAP(A68_205 ) ;
(*VFGBTRN) = TFGBTRN ;
SFGBTRN.Body = VFGBTRN;
 /* line 313: */
 /* line 314: */
WFGBTRN.Input = A_UNITE(XFGBTRN,mode11,11,MFGBTRN_nameinp);
WFGBTRN.Choices = A_CALLPROC(EEGBTRN_makenewchoices,((*(&(ZDGBTRN_case->Choices))), A_UNITE(YFGBTRN,mode11,11,MFGBTRN_nameinp)),((*(&(ZDGBTRN_case->Choices))), A_UNITE(YFGBTRN,mode11,11,MFGBTRN_nameinp),(EEGBTRN_makenewchoices).nonlocals));
ZFGBTRN = A_HEAP(A68_195 ) ;
(*ZFGBTRN) = WFGBTRN ;
SFGBTRN.Output = A_UNITE(AGGBTRN,mode25,25,ZFGBTRN);
 /* line 315: */
BGGBTRN = A_HEAP(A68_199 ) ;
(*BGGBTRN) = SFGBTRN ;
RFGBTRN.U = A_UNITE(CGGBTRN,mode29,29,BGGBTRN);
 /* line 316: */
 /* line 317: */
RFGBTRN.C = A68_TRUE;
XDGBTRN = RFGBTRN;
} 
else
{ 
 /* line 318: */
EGGBTRN.Input = CFGBTRN_newinput;
EGGBTRN.Choices = A_CALLPROC(EEGBTRN_makenewchoices,((*(&(ZDGBTRN_case->Choices))), CFGBTRN_newinput),((*(&(ZDGBTRN_case->Choices))), CFGBTRN_newinput,(EEGBTRN_makenewchoices).nonlocals));
 /* line 319: */
FGGBTRN = A_HEAP(A68_195 ) ;
(*FGGBTRN) = EGGBTRN ;
DGGBTRN.U = A_UNITE(GGGBTRN,mode25,25,FGGBTRN);
 /* line 320: */
 /* line 321: */
 /* line 322: */
DGGBTRN.C = A68_TRUE;
XDGBTRN = DGGBTRN;
} 
} 
else
{ 
 /* line 323: */
 /* line 324: */
 /* line 325: */
 /* line 326: */
HGGBTRN = (*(&(NL(Dec_tprocs)->Unit))) ;
A_CALLPROC(HGGBTRN,(U, Tprocs, &IGGBTRN),(U, Tprocs, &IGGBTRN,(HGGBTRN).nonlocals));
XDGBTRN = IGGBTRN;
} 
} 
break;
default: 
 /* line 327: */
JGGBTRN = (*(&(NL(Dec_tprocs)->Unit))) ;
A_CALLPROC(JGGBTRN,(U, Tprocs, &KGGBTRN),(U, Tprocs, &KGGBTRN,(JGGBTRN).nonlocals));
XDGBTRN = KGGBTRN;
break;
} 
A_PROC_EXIT(unit_proc);
*ReturnedValue = (XDGBTRN);
return;
} 
#undef NL
 /* line 330: */

A_STATIC A68_VOID  NGGBTRN_declaration(A68_237  Dec, A68_360 * Tprocs, A68_340  *ReturnedValue)
{ 
A68_340  OGGBTRN;  /* collateral clause result */
A68_340  PGGBTRN;  /* clause result */
A_PROC_ENTRY(declaration);
 /* line 331: */
OGGBTRN.D = Dec;
OGGBTRN.C = A68_FALSE;
PGGBTRN = OGGBTRN;
A_PROC_EXIT(declaration);
*ReturnedValue = (PGGBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  LHGBTRN_generator(A68_BOOL  JHGBTRN_anonymous, A68_254  *ReturnedValue, void *NonLocals)
#define NL(x) (((MHGBTRN_generator *)NonLocals)->x)
{ 
A68_254  NHGBTRN;  /* clause result */
A68_254  OHGBTRN;  /* OPERATORS - dynamic generator */
{ 
OHGBTRN.upb = (*NL(LXFBTRN_max_names)) ;
( JHGBTRN_anonymous? A_VLOC(A68_251 ,OHGBTRN): A_VHEAP(A68_251 ,OHGBTRN) );
NHGBTRN = OHGBTRN;
} 
*ReturnedValue = (NHGBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  UVFBTRN_generator(A68_BOOL  TVFBTRN_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  VVFBTRN;  /* clause result */
A68_VC  WVFBTRN;  /* OPERATORS - dynamic generator */
{ 
WVFBTRN.upb = 0 ;
( TVFBTRN_anonymous? A_VLOC(A68_CHAR ,WVFBTRN): A_VHEAP(A68_CHAR ,WVFBTRN) );
VVFBTRN = WVFBTRN;
} 
*ReturnedValue = (VVFBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  GXFBTRN_fndec_elseof(A68_252 * Fdec, A68_360 * Dec_tprocs, A68_357  *ReturnedValue, void *NonLocals)
#define NL(x) (((HXFBTRN_fndec_elseof *)NonLocals)->x)
{ 
A68_254  IXFBTRN_nametypes;
A68_INT  JXFBTRN_num_names;
A68_INT  KXFBTRN_new_nameno;
A68_INT  LXFBTRN_max_names;
A68_BOOL  MXFBTRN_changes;
A68_379  VYFBTRN_pre_pass_unit;   /* proc value of non-global proc */
A68_390  KZFBTRN_pre_pass_seqstep;   /* proc value of non-global proc */
A68_427  ZZFBTRN_usequence_proc;   /* proc value of non-global proc */
A68_379  SDGBTRN_unit_proc;   /* proc value of non-global proc */
A68_432  QGGBTRN;  /* collateral clause result */
A68_405  RGGBTRN;  /* OPERATORS - mode -> union mode */
A68_361  SGGBTRN;  /* procedure value */
A68_405  TGGBTRN;  /* OPERATORS - mode -> union mode */
A68_364  UGGBTRN;  /* procedure value */
A68_405  VGGBTRN;  /* OPERATORS - mode -> union mode */
A68_370  WGGBTRN;  /* procedure value */
A68_405  XGGBTRN;  /* OPERATORS - mode -> union mode */
A68_397  YGGBTRN;  /* YIELD */
A68_397  ZGGBTRN;  /* procedure value */
A68_405  AHGBTRN;  /* OPERATORS - mode -> union mode */
A68_379  BHGBTRN;  /* YIELD */
A68_405  CHGBTRN;  /* OPERATORS - mode -> union mode */
A68_390  DHGBTRN;  /* YIELD */
A68_404  EHGBTRN;  /* OPERATORS - istruct -> vector */
A68_360 * FHGBTRN_pre_pass_tprocs;
A68_400  GHGBTRN;  /* CALL */
A68_357  HHGBTRN;  /* avoid structure result */
A68_357  IHGBTRN_fdecc;
A68_433  KHGBTRN_generator;   /* proc value of non-global proc */
A68_254  PHGBTRN;  /* avoid structure result */
A68_254  QHGBTRN_newnt;
A68_254  RHGBTRN;  /* OPERATORS - trim index */
A68_254  SHGBTRN;  /* YIELD */
A68_434  THGBTRN;  /* collateral clause result */
A68_405  UHGBTRN;  /* OPERATORS - mode -> union mode */
A68_383  VHGBTRN;  /* YIELD */
A68_383  WHGBTRN;  /* procedure value */
A68_405  XHGBTRN;  /* OPERATORS - mode -> union mode */
A68_379  YHGBTRN;  /* YIELD */
A68_404  ZHGBTRN;  /* OPERATORS - istruct -> vector */
A68_360 * AIGBTRN_newtprocs;
A68_400  BIGBTRN;  /* CALL */
A68_357  CIGBTRN;  /* avoid structure result */
A68_357  DIGBTRN_fdc;
A68_252 * EIGBTRN;  /* YIELD */
A68_252 * FIGBTRN_new_dec;
A68_254 * GIGBTRN;  /* YIELD */
A68_357  HIGBTRN;  /* collateral clause result */
A68_400  IIGBTRN;  /* CALL */
A68_357  JIGBTRN;  /* avoid structure result */
A68_357  KIGBTRN;  /* clause result */
A68_400  LIGBTRN;  /* CALL */
A68_357  MIGBTRN;  /* avoid structure result */
A_PROC_ENTRY(fndec_elseof);
 /* line 61: */
 /* line 62: */
{ 
IXFBTRN_nametypes = (*(&(Fdec->Nametypes)));
 /* line 63: */
JXFBTRN_num_names = IXFBTRN_nametypes.upb;
 /* line 64: */
KXFBTRN_new_nameno = JXFBTRN_num_names;
LXFBTRN_max_names = JXFBTRN_num_names;
 /* line 65: */
MXFBTRN_changes = A68_FALSE;
 /* line 67: */
 /* line 91: */
 /* line 104: */
 /* line 117: */
A_CLOSURE( VYFBTRN_pre_pass_unit, WYFBTRN_pre_pass_unit, XYFBTRN_pre_pass_unit );
(( XYFBTRN_pre_pass_unit * ) ( VYFBTRN_pre_pass_unit.nonlocals )) -> MXFBTRN_changes = (&MXFBTRN_changes);
(( XYFBTRN_pre_pass_unit * ) ( VYFBTRN_pre_pass_unit.nonlocals )) -> LXFBTRN_max_names = (&LXFBTRN_max_names);
(( XYFBTRN_pre_pass_unit * ) ( VYFBTRN_pre_pass_unit.nonlocals )) -> Dec_tprocs = Dec_tprocs;
 /* line 132: */
A_CLOSURE( KZFBTRN_pre_pass_seqstep, LZFBTRN_pre_pass_seqstep, MZFBTRN_pre_pass_seqstep );
(( MZFBTRN_pre_pass_seqstep * ) ( KZFBTRN_pre_pass_seqstep.nonlocals )) -> MXFBTRN_changes = (&MXFBTRN_changes);
(( MZFBTRN_pre_pass_seqstep * ) ( KZFBTRN_pre_pass_seqstep.nonlocals )) -> LXFBTRN_max_names = (&LXFBTRN_max_names);
(( MZFBTRN_pre_pass_seqstep * ) ( KZFBTRN_pre_pass_seqstep.nonlocals )) -> Dec_tprocs = Dec_tprocs;
 /* line 147: */
A_CLOSURE( ZZFBTRN_usequence_proc, AAGBTRN_usequence_proc, BAGBTRN_usequence_proc );
(( BAGBTRN_usequence_proc * ) ( ZZFBTRN_usequence_proc.nonlocals )) -> KXFBTRN_new_nameno = (&KXFBTRN_new_nameno);
(( BAGBTRN_usequence_proc * ) ( ZZFBTRN_usequence_proc.nonlocals )) -> IXFBTRN_nametypes = (&IXFBTRN_nametypes);
(( BAGBTRN_usequence_proc * ) ( ZZFBTRN_usequence_proc.nonlocals )) -> Fdec = Fdec;
(( BAGBTRN_usequence_proc * ) ( ZZFBTRN_usequence_proc.nonlocals )) -> CXFBTRN_env = NL(CXFBTRN_env);
 /* line 264: */
A_CLOSURE( SDGBTRN_unit_proc, TDGBTRN_unit_proc, UDGBTRN_unit_proc );
(( UDGBTRN_unit_proc * ) ( SDGBTRN_unit_proc.nonlocals )) -> ZZFBTRN_usequence_proc = ZZFBTRN_usequence_proc;
(( UDGBTRN_unit_proc * ) ( SDGBTRN_unit_proc.nonlocals )) -> KXFBTRN_new_nameno = (&KXFBTRN_new_nameno);
(( UDGBTRN_unit_proc * ) ( SDGBTRN_unit_proc.nonlocals )) -> IXFBTRN_nametypes = (&IXFBTRN_nametypes);
(( UDGBTRN_unit_proc * ) ( SDGBTRN_unit_proc.nonlocals )) -> Fdec = Fdec;
(( UDGBTRN_unit_proc * ) ( SDGBTRN_unit_proc.nonlocals )) -> CXFBTRN_env = NL(CXFBTRN_env);
(( UDGBTRN_unit_proc * ) ( SDGBTRN_unit_proc.nonlocals )) -> Dec_tprocs = Dec_tprocs;
 /* line 329: */
 /* line 340: */
 /* line 341: */
 /* line 342: */
SGGBTRN.fn.fn_global = DWLATRN_null_attr;
SGGBTRN.nonlocals = A68_NIL;
QGGBTRN.data[0] = A_UNITE(RGGBTRN,mode1,1,SGGBTRN);
 /* line 343: */
UGGBTRN.fn.fn_global = IWLATRN_null_formula;
UGGBTRN.nonlocals = A68_NIL;
QGGBTRN.data[1] = A_UNITE(TGGBTRN,mode4,4,UGGBTRN);
 /* line 344: */
WGGBTRN.fn.fn_global = NWLATRN_null_type;
WGGBTRN.nonlocals = A68_NIL;
QGGBTRN.data[2] = A_UNITE(VGGBTRN,mode10,10,WGGBTRN);
 /* line 345: */
ZGGBTRN.fn.fn_global = QWFBTRN_fnbody_elseof;
ZGGBTRN.nonlocals = A68_NIL;
YGGBTRN = ZGGBTRN ;
QGGBTRN.data[3] = A_UNITE(XGGBTRN,mode37,37,YGGBTRN);
 /* line 346: */
BHGBTRN = VYFBTRN_pre_pass_unit ;
QGGBTRN.data[4] = A_UNITE(AHGBTRN,mode19,19,BHGBTRN);
DHGBTRN = KZFBTRN_pre_pass_seqstep ;
QGGBTRN.data[5] = A_UNITE(CHGBTRN,mode30,30,DHGBTRN);
FHGBTRN_pre_pass_tprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HISVEC(EHGBTRN,QGGBTRN,6,A68_405 ));
 /* line 347: */
GHGBTRN = (*(&(AWLATRN_nulltprocs->Fndec))) ;
A_CALLPROC(GHGBTRN,(Fdec, FHGBTRN_pre_pass_tprocs, &HHGBTRN),(Fdec, FHGBTRN_pre_pass_tprocs, &HHGBTRN,(GHGBTRN).nonlocals));
IHGBTRN_fdecc = HHGBTRN;
 /* line 349: */
MLJATRN_discard_tprocs(FHGBTRN_pre_pass_tprocs);
 /* line 351: */
 /* line 352: */
if ( MXFBTRN_changes )
{ 
 /* line 353: */
if ( (LXFBTRN_max_names>JXFBTRN_num_names) )
{ 
A_CLOSURE( KHGBTRN_generator, LHGBTRN_generator, MHGBTRN_generator );
(( MHGBTRN_generator * ) ( KHGBTRN_generator.nonlocals )) -> LXFBTRN_max_names = (&LXFBTRN_max_names);
A_CALLPROC(KHGBTRN_generator,(A68_FALSE, &PHGBTRN),(A68_FALSE, &PHGBTRN,(KHGBTRN_generator).nonlocals));
QHGBTRN_newnt = PHGBTRN;
 /* line 355: */
SHGBTRN = A_VTRIM(RHGBTRN,(QHGBTRN_newnt),A_VTSCRIPT(&(RHGBTRN.upb),(QHGBTRN_newnt).upb,1,JXFBTRN_num_names)) ;
A_VASSIGN2(IXFBTRN_nametypes,SHGBTRN,A68_251 );
 /* line 356: */
 /* line 357: */
IXFBTRN_nametypes = QHGBTRN_newnt;
} 
 /* line 359: */
 /* line 360: */
 /* line 361: */
WHGBTRN.fn.fn_global = NGGBTRN_declaration;
WHGBTRN.nonlocals = A68_NIL;
VHGBTRN = WHGBTRN ;
THGBTRN.data[0] = A_UNITE(UHGBTRN,mode23,23,VHGBTRN);
YHGBTRN = SDGBTRN_unit_proc ;
THGBTRN.data[1] = A_UNITE(XHGBTRN,mode19,19,YHGBTRN);
AIGBTRN_newtprocs = THJATRN_make_newtprocs(Dec_tprocs, A_HISVEC(ZHGBTRN,THGBTRN,2,A68_405 ));
 /* line 362: */
BIGBTRN = (*(&(AWLATRN_nulltprocs->Fndec))) ;
A_CALLPROC(BIGBTRN,(Fdec, AIGBTRN_newtprocs, &CIGBTRN),(Fdec, AIGBTRN_newtprocs, &CIGBTRN,(BIGBTRN).nonlocals));
DIGBTRN_fdc = CIGBTRN;
 /* line 363: */
EIGBTRN = A_HEAP(A68_252 ) ;
(*EIGBTRN) = (*DIGBTRN_fdc.F) ;
FIGBTRN_new_dec = EIGBTRN;
 /* line 365: */
MLJATRN_discard_tprocs(AIGBTRN_newtprocs);
 /* line 366: */
GIGBTRN = (&(FIGBTRN_new_dec->Nametypes)) ;
(*GIGBTRN) = IXFBTRN_nametypes;
 /* line 369: */
IIGBTRN = (*(&(AWLATRN_nulltprocs->Fndec))) ;
A_CALLPROC(IIGBTRN,(FIGBTRN_new_dec, Dec_tprocs, &JIGBTRN),(FIGBTRN_new_dec, Dec_tprocs, &JIGBTRN,(IIGBTRN).nonlocals));
HIGBTRN.F = JIGBTRN.F;
 /* line 370: */
 /* line 371: */
HIGBTRN.C = A68_TRUE;
KIGBTRN = HIGBTRN;
} 
else
{ 
 /* line 372: */
 /* line 373: */
LIGBTRN = (*(&(AWLATRN_nulltprocs->Fndec))) ;
A_CALLPROC(LIGBTRN,(Fdec, Dec_tprocs, &MIGBTRN),(Fdec, Dec_tprocs, &MIGBTRN,(LIGBTRN).nonlocals));
KIGBTRN = MIGBTRN;
} 
} 
A_PROC_EXIT(fndec_elseof);
*ReturnedValue = (KIGBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  KJGBTRN_outer(A68_261  O, A68_360 * Tprocs, A68_358  *ReturnedValue, void *NonLocals)
#define NL(x) (((LJGBTRN_outer *)NonLocals)->x)
{ 
A68_358  MJGBTRN;  /* clause result */
A68_358  NJGBTRN;  /* avoid structure result */
A_PROC_ENTRY(outer);
 /* line 389: */
BXFBTRN_outer_elseof( O, NL(Closure), NL(Options), NL(Msg), &NJGBTRN );
MJGBTRN = NJGBTRN;
A_PROC_EXIT(outer);
*ReturnedValue = (MJGBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  QVFBTRN_generator(A68_BOOL  PVFBTRN_anonymous, A68_46  *ReturnedValue)
{ 
A68_46  SVFBTRN;  /* OPERATORS - dynamic generator */
A68_419  RVFBTRN_anonymous;
A68_418 * XVFBTRN_anonymous;
A68_INT  YVFBTRN;  /* forall loop counter */
A68_VC  ZVFBTRN;  /* avoid structure result */
A68_46  AWFBTRN;  /* clause result */
{ 
SVFBTRN.upb = 0 ;
( PVFBTRN_anonymous? A_VLOC(A68_VC ,SVFBTRN): A_VHEAP(A68_VC ,SVFBTRN) );
RVFBTRN_anonymous = SVFBTRN;
YVFBTRN = (*(&RVFBTRN_anonymous)).upb -1;
XVFBTRN_anonymous = (*(&RVFBTRN_anonymous)).data;
for (;YVFBTRN-- >= 0;
(XVFBTRN_anonymous++
) )
{
UVFBTRN_generator( PVFBTRN_anonymous, &ZVFBTRN );
(*XVFBTRN_anonymous) = ZVFBTRN;
}
AWFBTRN = RVFBTRN_anonymous;
} 
*ReturnedValue = (AWFBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  EWFBTRN_elseofid(A68_INT  Nameno, A68_VC  *ReturnedValue)
{ 
A68_421  FWFBTRN;  /* collateral clause result */
A68_52  IWFBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  JWFBTRN;  /* YIELD */
A68_52  KWFBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  LWFBTRN;  /* clause result */
A68_85  MWFBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  NWFBTRN;  /* avoid structure result */
A_PROC_ENTRY(elseofid);
JWFBTRN = HWFBTRN ;
FWFBTRN.data[0] = A_UNITE(IWFBTRN,mode7,7,JWFBTRN);
FWFBTRN.data[1] = A_UNITE(KWFBTRN,mode1,1,Nameno);
UJBAOSL_oneline( A_HISVEC(MWFBTRN,FWFBTRN,2,A68_52 ), &NWFBTRN );
LWFBTRN = NWFBTRN;
A_PROC_EXIT(elseofid);
*ReturnedValue = (LWFBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  QWFBTRN_fnbody_elseof(A68_248  Fbody, A68_360 * Tprocs, A68_354  *ReturnedValue)
{ 
A68_248  RWFBTRN;  /* united object - for case conformity */
A68_221 * SWFBTRN_ut;
A68_354  TWFBTRN;  /* clause result */
A68_397  UWFBTRN;  /* CALL */
A68_354  VWFBTRN;  /* avoid structure result */
A68_354  WWFBTRN;  /* collateral clause result */
A_PROC_ENTRY(fnbody_elseof);
 /* line 48: */
 /* line 49: */
RWFBTRN = Fbody ;
switch ( RWFBTRN.mode )
{ 
case 1: /* REF STRUCT(MODE176)  */
SWFBTRN_ut = (RWFBTRN.data.mode1);
 /* line 50: */
UWFBTRN = (*(&(AWLATRN_nulltprocs->Fnbody))) ;
A_CALLPROC(UWFBTRN,(Fbody, Tprocs, &VWFBTRN),(Fbody, Tprocs, &VWFBTRN,(UWFBTRN).nonlocals));
TWFBTRN = VWFBTRN;
break;
default: 
WWFBTRN.F = Fbody;
 /* line 51: */
WWFBTRN.C = A68_FALSE;
TWFBTRN = WWFBTRN;
break;
} 
A_PROC_EXIT(fnbody_elseof);
*ReturnedValue = (TWFBTRN);
return;
} 
#undef NL
 /* line 54: */
 /* line 55: */
 /* line 56: */

A68_VOID  BXFBTRN_outer_elseof(A68_261  Outer, A68_265 * Closure, A68_408  Options, A68_108  Msg, A68_358  *ReturnedValue)
{ 
A68_255 * CXFBTRN_env;
A68_400  FXFBTRN_fndec_elseof;   /* proc value of non-global proc */
A68_435  NIGBTRN;  /* collateral clause result */
A68_405  OIGBTRN;  /* OPERATORS - mode -> union mode */
A68_364  PIGBTRN;  /* procedure value */
A68_405  QIGBTRN;  /* OPERATORS - mode -> union mode */
A68_370  RIGBTRN;  /* procedure value */
A68_405  SIGBTRN;  /* OPERATORS - mode -> union mode */
A68_397  TIGBTRN;  /* YIELD */
A68_397  UIGBTRN;  /* procedure value */
A68_405  VIGBTRN;  /* OPERATORS - mode -> union mode */
A68_400  WIGBTRN;  /* YIELD */
A68_404  XIGBTRN;  /* OPERATORS - istruct -> vector */
A68_360 * YIGBTRN_newtprocs;
A68_358  ZIGBTRN;  /* clause result */
A68_401  AJGBTRN;  /* CALL */
A68_358  BJGBTRN;  /* avoid structure result */
A_PROC_ENTRY(outer_elseof);
 /* line 57: */
 /* line 58: */
{ 
CXFBTRN_env = Outer.Environ;
 /* line 60: */
A_CLOSURE( FXFBTRN_fndec_elseof, GXFBTRN_fndec_elseof, HXFBTRN_fndec_elseof );
(( HXFBTRN_fndec_elseof * ) ( FXFBTRN_fndec_elseof.nonlocals )) -> CXFBTRN_env = CXFBTRN_env;
 /* line 375: */
 /* line 376: */
PIGBTRN.fn.fn_global = IWLATRN_null_formula;
PIGBTRN.nonlocals = A68_NIL;
NIGBTRN.data[0] = A_UNITE(OIGBTRN,mode4,4,PIGBTRN);
 /* line 377: */
RIGBTRN.fn.fn_global = NWLATRN_null_type;
RIGBTRN.nonlocals = A68_NIL;
NIGBTRN.data[1] = A_UNITE(QIGBTRN,mode10,10,RIGBTRN);
 /* line 378: */
UIGBTRN.fn.fn_global = QWFBTRN_fnbody_elseof;
UIGBTRN.nonlocals = A68_NIL;
TIGBTRN = UIGBTRN ;
NIGBTRN.data[2] = A_UNITE(SIGBTRN,mode37,37,TIGBTRN);
WIGBTRN = FXFBTRN_fndec_elseof ;
NIGBTRN.data[3] = A_UNITE(VIGBTRN,mode40,40,WIGBTRN);
YIGBTRN_newtprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HISVEC(XIGBTRN,NIGBTRN,4,A68_405 ));
 /* line 380: */
 /* line 381: */
AJGBTRN = (*(&(AWLATRN_nulltprocs->Outer))) ;
A_CALLPROC(AJGBTRN,(Outer, YIGBTRN_newtprocs, &BJGBTRN),(Outer, YIGBTRN_newtprocs, &BJGBTRN,(AJGBTRN).nonlocals));
ZIGBTRN = BJGBTRN;
} 
A_PROC_EXIT(outer_elseof);
*ReturnedValue = (ZIGBTRN);
return;
} 
#undef NL
 /* line 385: */
 /* line 386: */

A68_VOID  FJGBTRN_transform_elseof(A68_265 * Closure, A68_408  Options, A68_108  Msg, A68_359  *ReturnedValue)
{ 
A68_401  JJGBTRN_outer;   /* proc value of non-global proc */
A68_405  OJGBTRN;  /* OPERATORS - mode -> union mode */
A68_401  PJGBTRN;  /* YIELD */
A68_404  QJGBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_360 * RJGBTRN_newtprocs;
A68_359  SJGBTRN;  /* clause result */
A68_402  TJGBTRN;  /* CALL */
A68_359  UJGBTRN;  /* avoid structure result */
A_PROC_ENTRY(transform_elseof);
 /* line 387: */
 /* line 388: */
{ 
A_CLOSURE( JJGBTRN_outer, KJGBTRN_outer, LJGBTRN_outer );
(( LJGBTRN_outer * ) ( JJGBTRN_outer.nonlocals )) -> Closure = Closure;
(( LJGBTRN_outer * ) ( JJGBTRN_outer.nonlocals )) -> Options = Options;
(( LJGBTRN_outer * ) ( JJGBTRN_outer.nonlocals )) -> Msg = Msg;
 /* line 391: */
PJGBTRN = JJGBTRN_outer ;
RJGBTRN_newtprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HVEC(QJGBTRN,A_UNITE(OJGBTRN,mode41,41,PJGBTRN),A68_405 ));
 /* line 393: */
 /* line 394: */
TJGBTRN = (*(&(AWLATRN_nulltprocs->Closure))) ;
A_CALLPROC(TJGBTRN,(Closure, RJGBTRN_newtprocs, Msg, &UJGBTRN),(Closure, RJGBTRN_newtprocs, Msg, &UJGBTRN,(TJGBTRN).nonlocals));
SJGBTRN = UJGBTRN;
} 
A_PROC_EXIT(transform_elseof);
*ReturnedValue = (SJGBTRN);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 4: */
void KVFBTRN(void)   /* initialise DECS elseof */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/elseof.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/ostools/assoc/mfiles/options.m","./mfiles/transformprocs.m","./mfiles/modeprocs.m","./mfiles/assmodes.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_46  CWFBTRN;  /* avoid structure result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
BAAAOST();   /* USE options */
IHJATRN();   /* USE transformprocs */
HNMATRN();   /* USE modeprocs */
BAAATRN();   /* USE assmodes */
JFAAOSI();   /* USE messageproc */
JSCAOST();   /* USE basics */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/transform/assoc/./a68files/elseof.a68";
A_config.translation_time = "Tue Apr  4 10:06:37 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "JVFBTRN (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:06:37 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS elseof);
UEAALIB_a68config(LGAALIB_configinfo, OVFBTRN);
 /* line 42: */
QVFBTRN_generator( A68_TRUE, &CWFBTRN );
BWFBTRN_elseof_options = CWFBTRN;
 /* line 44: */
 /* line 47: */
 /* line 53: */
 /* line 384: */
 /* line 396: */
 /* line 397: */
 /* line 398: */
/*SKIP*/;
A_PROC_EXIT(DECS elseof);
} 
#undef NL
/* end of translation of ./a68files/elseof.a68 */
