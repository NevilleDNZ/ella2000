
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
/* UNAME:XJEBTRN */
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
A_ISTRUCT(A68_CHAR ,57,A68t417);
typedef struct A68t417  A68_417 ;    /* STRUCT 57 CHAR */

A_PROCEDURE(A68_VOID ,A68t418,(struct A68t408 *),(struct A68t408 *,void *));
typedef struct A68t418  A68_418 ;    /* PROC MODE408 */
A_ISTRUCT(A68_CHAR ,56,A68t419);
typedef struct A68t419  A68_419 ;    /* STRUCT 56 CHAR */

A_PROCEDURE(A68_VOID ,A68t420,(struct A68t261 ,struct A68t265 *,struct A68t408 ,struct A68t108 ,struct A68t358 *),(struct A68t261 ,struct A68t265 *,struct A68t408 ,struct A68t108 ,struct A68t358 *,void *));
typedef struct A68t420  A68_420 ;    /* PROC(MODE261,REF MODE265,MODE408,MODE108) MODE358 */

A_PROCEDURE(A68_VOID ,A68t421,(struct A68t199 *,struct A68t360 *,struct A68t336 *),(struct A68t199 *,struct A68t360 *,struct A68t336 *,void *));
typedef struct A68t421  A68_421 ;    /* PROC(REF MODE199,REF MODE360) MODE336 */

A_PROCEDURE(A68_VOID ,A68t422,(struct A68t150 *,struct A68t154 ,struct A68t154 *),(struct A68t150 *,struct A68t154 ,struct A68t154 *,void *));
typedef struct A68t422  A68_422 ;    /* PROC(REF MODE150,MODE154) MODE154 */
A_ISTRUCT(A68_CHAR ,16,A68t423);
typedef struct A68t423  A68_423 ;    /* STRUCT 16 CHAR */

A_PROCEDURE(struct A68t150 *,A68t424,(struct A68t150 *),(struct A68t150 *,void *));
typedef struct A68t424  A68_424 ;    /* PROC(REF MODE150) REF MODE150 */

A_PROCEDURE(A68_VOID ,A68t425,(struct A68t205 *),(struct A68t205 *,void *));
typedef struct A68t425  A68_425 ;    /* PROC(REF MODE205) VOID */

A_PROCEDURE(A68_VOID ,A68t426,(struct A68t150 *,A68_VC ,struct A68t176 *),(struct A68t150 *,A68_VC ,struct A68t176 *,void *));
typedef struct A68t426  A68_426 ;    /* PROC(REF MODE150,REF MODE26) MODE176 */

A_PROCEDURE(A68_VOID ,A68t427,(A68_INT ,struct A68t176 *),(A68_INT ,struct A68t176 *,void *));
typedef struct A68t427  A68_427 ;    /* PROC(INT) MODE176 */
A_ISTRUCT(struct A68t52 ,3,A68t428);
typedef struct A68t428  A68_428 ;    /* STRUCT 3 MODE52 */
A_ISTRUCT(A68_CHAR ,3,A68t429);
typedef struct A68t429  A68_429 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t430);
typedef struct A68t430  A68_430 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(struct A68t405 ,5,A68t431);
typedef struct A68t431  A68_431 ;    /* STRUCT 5 MODE405 */

A_PROCEDURE(A68_VOID ,A68t432,(A68_BOOL ,struct A68t254 *),(A68_BOOL ,struct A68t254 *,void *));
typedef struct A68t432  A68_432 ;    /* PROC(BOOL) MODE254 */

A_PROCEDURE(A68_VOID ,A68t433,(struct A68t265 *,struct A68t408 ,struct A68t108 ,struct A68t359 *),(struct A68t265 *,struct A68t408 ,struct A68t108 ,struct A68t359 *,void *));
typedef struct A68t433  A68_433 ;    /* PROC(REF MODE265,MODE408,MODE108) MODE359 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from options --- */
extern A68_BOOL  MBAAOST_includes(struct A68t408 ,struct A68t408 );
extern A68_VOID  FCAAOST_makeoptions(A68_INT ,A68_408 *);
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
extern A68_INT  TNMATRN_formula_int(struct A68t138 ,struct A68t108 );
/* --- End of imports from modeprocs --- */


/* --- Imports from assmodes --- */
extern A68_191 * IAAATRN_nilustr;
extern A68_217 * NAAATRN_nilnames;
extern A68_205 * SAAATRN_nilseries;
extern A68_150 * BBAATRN_nilformulas;
extern A68_134  ZHAATRN_attrnull;
#define MKAATRN_uiosource 3
/* --- End of imports from assmodes --- */


/* --- Imports from messageproc --- */
/* --- End of imports from messageproc --- */


/* --- Imports from basics --- */
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
extern void BAAATRN(void);   /* assmodes */
extern void JFAAOSI(void);   /* messageproc */
extern void JSCAOST(void);   /* basics */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_417   BKEBTRN = {"$Id: multimakes.a68,v 34.3 1995/03/29 13:03:00 ella Exp $"}; 
A_GISVEC(A68_VC ,CKEBTRN,BKEBTRN,57)
static A68_419   GKEBTRN = {"Removes all MAKE rows replacing them by named instances."}; 
A_GISVEC(A68_VC ,HKEBTRN,GKEBTRN,56)
A68_46  JKEBTRN_multimakes_options;
static A68_423   ZMEBTRN = {"strip_dimentions"}; 
A_GISVEC(A68_VC ,ANEBTRN,ZMEBTRN,16)
static A68_429   RPEBTRN = {"_i_"}; 
A_GISVEC(A68_VC ,SPEBTRN,RPEBTRN,3)
typedef struct   /* env of non-global proc */
{
A68_BOOL  ZKEBTRN_remove_all_rows;
A_PAD_BOOL(PAD_138)
A68_108  Msg;
} FLEBTRN_fndec_proc;
typedef struct   /* env of non-global proc */
{
A68_265 * Closure;
A68_408  Options;
A68_108  Msg;
} NUEBTRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_BOOL  ZKEBTRN_remove_all_rows;
A_PAD_BOOL(PAD_137)
A68_108  Msg;
A68_INT * ILEBTRN_max_names;
} NLEBTRN_pre_pass_make;
typedef struct   /* env of non-global proc */
{
A68_BOOL  ZKEBTRN_remove_all_rows;
A_PAD_BOOL(PAD_140)
A68_INT * HLEBTRN_new_nameno;
A68_254 * GLEBTRN_nametypes;
A68_108  Msg;
A68_360 * Dec_tprocs;
} BMEBTRN_useries_make;
typedef struct   /* env of non-global proc */
{
A68_421  ZLEBTRN_useries_make;
A68_360 * Dec_tprocs;
} IREBTRN_unit_make;
typedef struct   /* env of non-global proc */
{
A68_INT * ILEBTRN_max_names;
} NSEBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_BOOL * GMEBTRN_changed;
A68_205 ** CMEBTRN_ss;
A68_199 * Useries;
A68_INT * FMEBTRN_num_steps;
A68_205 *** EMEBTRN_stail;
} JMEBTRN_copy_series;
typedef struct   /* env of non-global proc */
{
A68_BOOL  ZKEBTRN_remove_all_rows;
A_PAD_BOOL(PAD_139)
A68_422  QMEBTRN_strip_dimentions;
} SMEBTRN_strip_dimentions;
typedef struct   /* env of non-global proc */
{
A68_BOOL  ZKEBTRN_remove_all_rows;
A_PAD_BOOL(PAD_141)
A68_424  DNEBTRN_strip_formulas;
} FNEBTRN_strip_formulas;
typedef struct   /* env of non-global proc */
{
A68_BOOL  ZKEBTRN_remove_all_rows;
A_PAD_BOOL(PAD_142)
A68_INT * HLEBTRN_new_nameno;
A68_424  DNEBTRN_strip_formulas;
A68_422  QMEBTRN_strip_dimentions;
A68_254 * GLEBTRN_nametypes;
A68_108  Msg;
A68_407  HMEBTRN_copy_series;
A68_205 *** EMEBTRN_stail;
A68_BOOL * GMEBTRN_changed;
A68_360 * Dec_tprocs;
A68_360 * Tprocs;
} MNEBTRN_do_step;
typedef struct   /* env of non-global proc */
{
A68_BOOL  ZKEBTRN_remove_all_rows;
A_PAD_BOOL(PAD_144)
A68_426  BOEBTRN_add_dimension;
A68_INT * HLEBTRN_new_nameno;
A68_254 * GLEBTRN_nametypes;
A68_154  YNEBTRN_new_type;
A68_217 *** UNEBTRN_ntail;
A68_108  Msg;
} DOEBTRN_add_dimension;
typedef struct   /* env of non-global proc */
{
A68_VC  Name;
A68_150 * Size;
A68_BOOL  ZKEBTRN_remove_all_rows;
A_PAD_BOOL(PAD_143)
A68_426  BOEBTRN_add_dimension;
A68_INT * HLEBTRN_new_nameno;
A68_254 * GLEBTRN_nametypes;
A68_154  YNEBTRN_new_type;
A68_217 *** UNEBTRN_ntail;
} JOEBTRN_do_dim;

A_STATIC A68_VOID  DKEBTRN_makes_remove_all_rows(A68_408  *ReturnedValue);

A_STATIC A68_VOID  MKEBTRN_fnbody_multimakes(A68_248  Fbody, A68_360 * Tprocs, A68_354  *ReturnedValue);

A68_VOID  XKEBTRN_outer_multimakes(A68_261  Outer, A68_265 * Closure, A68_408  Options, A68_108  Msg, A68_358  *ReturnedValue);

A_STATIC A68_VOID  ELEBTRN_fndec_proc(A68_252 * Fdec, A68_360 * Dec_tprocs, A68_357  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MLEBTRN_pre_pass_make(A68_211 * M, A68_360 * Tprocs, A68_349  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  AMEBTRN_useries_make(A68_199 * Useries, A68_360 * Tprocs, A68_336  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IMEBTRN_copy_series(void *NonLocals);

A_STATIC A68_VOID  RMEBTRN_strip_dimentions(A68_150 * Dims, A68_154  T, A68_154  *ReturnedValue, void *NonLocals);

A_STATIC A68_150 * ENEBTRN_strip_formulas(A68_150 * Ff, void *NonLocals);

A_STATIC A68_VOID  LNEBTRN_do_step(A68_205 * Ss, void *NonLocals);

A_STATIC A68_VOID  COEBTRN_add_dimension(A68_150 * Size, A68_VC  Name, A68_176  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IOEBTRN_do_dim(A68_INT  D, A68_176  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HREBTRN_unit_make(A68_176  Unit, A68_360 * Tprocs, A68_336  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MSEBTRN_generator(A68_BOOL  KSEBTRN_anonymous, A68_254  *ReturnedValue, void *NonLocals);

A68_VOID  YTEBTRN_transform_multimakes(A68_265 * Closure, A68_408  Options, A68_108  Msg, A68_359  *ReturnedValue);

A_STATIC A68_VOID  MUEBTRN_anonymous(A68_261  Outer, A68_360 * Tprocs, A68_358  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IOEBTRN_do_dim(A68_INT  D, A68_176  *ReturnedValue, void *NonLocals)
#define NL(x) (((JOEBTRN_do_dim *)NonLocals)->x)
{ 
A68_428  KOEBTRN;  /* collateral clause result */
A68_52  LOEBTRN;  /* OPERATORS - mode -> union mode */
A68_52  MOEBTRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  NOEBTRN;  /* YIELD */
A68_52  OOEBTRN;  /* OPERATORS - mode -> union mode */
A68_85  POEBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  QOEBTRN;  /* avoid structure result */
A68_VC  ROEBTRN_new_n;
A68_BOOL  SOEBTRN;  /* optbool result */
A68_BOOL  TOEBTRN;  /* optbool result */
A68_176  UOEBTRN;  /* clause result */
A68_176  VOEBTRN;  /* avoid structure result */
A68_251  WOEBTRN;  /* collateral clause result */
A68_129  XOEBTRN;  /* OPERATORS - mode -> union mode */
A68_251 * YOEBTRN;  /* YIELD */
A68_217  ZOEBTRN;  /* collateral clause result */
A68_217 * APEBTRN;  /* YIELD */
A68_181  BPEBTRN;  /* collateral clause result */
A68_181 * CPEBTRN;  /* YIELD */
A68_176  DPEBTRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(do_dim);
 /* line 169: */
 /* line 170: */
{ 
KOEBTRN.data[0] = A_UNITE(LOEBTRN,mode7,7,NL(Name));
NOEBTRN = '_' ;
KOEBTRN.data[1] = A_UNITE(MOEBTRN,mode6,6,NOEBTRN);
KOEBTRN.data[2] = A_UNITE(OOEBTRN,mode1,1,D);
UJBAOSL_oneline( A_HISVEC(POEBTRN,KOEBTRN,3,A68_52 ), &QOEBTRN );
ROEBTRN_new_n = QOEBTRN;
 /* line 172: */
 /* line 173: */
SOEBTRN = ((*(&(NL(Size)->Rest)))!=BBAATRN_nilformulas);
if ( SOEBTRN )
{ /* line 174: */
TOEBTRN = NL(ZKEBTRN_remove_all_rows);
if ( ! TOEBTRN )
{TOEBTRN = ((*(&((*(&(NL(Size)->Rest)))->Rest)))!=BBAATRN_nilformulas);
}
SOEBTRN = TOEBTRN;
}
 /* line 175: */
if ( SOEBTRN )
{ 
 /* line 176: */
 /* line 177: */
A_CALLPROC(NL(BOEBTRN_add_dimension),((*(&(NL(Size)->Rest))), ROEBTRN_new_n, &VOEBTRN),((*(&(NL(Size)->Rest))), ROEBTRN_new_n, &VOEBTRN,(NL(BOEBTRN_add_dimension)).nonlocals));
UOEBTRN = VOEBTRN;
} 
else
{ 
(*NL(HLEBTRN_new_nameno))+=1;
 /* line 178: */
WOEBTRN.Name = ROEBTRN_new_n;
WOEBTRN.Type = NL(YNEBTRN_new_type);
WOEBTRN.Attr = A_UNITE(XOEBTRN,mode5,5,(&ZHAATRN_attrnull));
YOEBTRN = (&A_VINDEX((*NL(GLEBTRN_nametypes)),(*NL(HLEBTRN_new_nameno)))) ;
(*YOEBTRN) = WOEBTRN;
 /* line 179: */
ZOEBTRN.Nameno = (*NL(HLEBTRN_new_nameno));
ZOEBTRN.Rest = NAAATRN_nilnames;
APEBTRN = A_HEAP(A68_217 ) ;
(*APEBTRN) = ZOEBTRN ;
(**NL(UNEBTRN_ntail)) = APEBTRN;
 /* line 180: */
(*NL(UNEBTRN_ntail)) = (&((**NL(UNEBTRN_ntail))->Rest));
 /* line 181: */
BPEBTRN.Sort = MKAATRN_uiosource;
 /* line 182: */
BPEBTRN.Nameno = (*NL(HLEBTRN_new_nameno));
 /* line 183: */
CPEBTRN = A_HEAP(A68_181 ) ;
(*CPEBTRN) = BPEBTRN ;
UOEBTRN = A_UNITE(DPEBTRN,mode11,11,CPEBTRN);
} 
} 
A_PROC_EXIT(do_dim);
*ReturnedValue = (UOEBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  COEBTRN_add_dimension(A68_150 * Size, A68_VC  Name, A68_176  *ReturnedValue, void *NonLocals)
#define NL(x) (((DOEBTRN_add_dimension *)NonLocals)->x)
{ 
A68_191 * EOEBTRN_name_unit;
A68_191 ** FOEBTRN_utail;
A68_427  HOEBTRN_do_dim;   /* proc value of non-global proc */
A68_INT  EPEBTRN_d;
A68_INT  FPEBTRN;  /* to part of loop */
A68_191  GPEBTRN;  /* collateral clause result */
A68_176  HPEBTRN;  /* avoid structure result */
A68_191 * IPEBTRN;  /* YIELD */
A68_176  JPEBTRN;  /* clause result */
A68_176  KPEBTRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(add_dimension);
 /* line 164: */
 /* line 165: */
{ 
EOEBTRN_name_unit = IAAATRN_nilustr;
 /* line 166: */
FOEBTRN_utail = (&EOEBTRN_name_unit);
 /* line 168: */
A_CLOSURE( HOEBTRN_do_dim, IOEBTRN_do_dim, JOEBTRN_do_dim );
(( JOEBTRN_do_dim * ) ( HOEBTRN_do_dim.nonlocals )) -> Name = Name;
(( JOEBTRN_do_dim * ) ( HOEBTRN_do_dim.nonlocals )) -> Size = Size;
(( JOEBTRN_do_dim * ) ( HOEBTRN_do_dim.nonlocals )) -> ZKEBTRN_remove_all_rows = NL(ZKEBTRN_remove_all_rows);
(( JOEBTRN_do_dim * ) ( HOEBTRN_do_dim.nonlocals )) -> BOEBTRN_add_dimension = NL(BOEBTRN_add_dimension);
(( JOEBTRN_do_dim * ) ( HOEBTRN_do_dim.nonlocals )) -> HLEBTRN_new_nameno = NL(HLEBTRN_new_nameno);
(( JOEBTRN_do_dim * ) ( HOEBTRN_do_dim.nonlocals )) -> GLEBTRN_nametypes = NL(GLEBTRN_nametypes);
(( JOEBTRN_do_dim * ) ( HOEBTRN_do_dim.nonlocals )) -> YNEBTRN_new_type = NL(YNEBTRN_new_type);
(( JOEBTRN_do_dim * ) ( HOEBTRN_do_dim.nonlocals )) -> UNEBTRN_ntail = NL(UNEBTRN_ntail);
 /* line 185: */
 /* line 186: */
FPEBTRN = TNMATRN_formula_int((*(&(Size->Formula))), NL(Msg));
for ( EPEBTRN_d = 1;
EPEBTRN_d <= FPEBTRN;
EPEBTRN_d += 1 )
{ 
 /* line 187: */
A_CALLPROC(HOEBTRN_do_dim,(EPEBTRN_d, &HPEBTRN),(EPEBTRN_d, &HPEBTRN,(HOEBTRN_do_dim).nonlocals));
GPEBTRN.Elem = HPEBTRN;
GPEBTRN.Rest = IAAATRN_nilustr;
IPEBTRN = A_HEAP(A68_191 ) ;
(*IPEBTRN) = GPEBTRN ;
(*FOEBTRN_utail) = IPEBTRN;
 /* line 188: */
 /* line 189: */
FOEBTRN_utail = (&((*FOEBTRN_utail)->Rest));
}
 /* line 190: */
 /* line 191: */
JPEBTRN = A_UNITE(KPEBTRN,mode21,21,EOEBTRN_name_unit);
} 
A_PROC_EXIT(add_dimension);
*ReturnedValue = (JPEBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  IMEBTRN_copy_series(void *NonLocals)
#define NL(x) (((JMEBTRN_copy_series *)NonLocals)->x)
{ 
A68_INT  KMEBTRN;  /* to part of loop */
A68_INT  LMEBTRN;  /* loop control */
A68_205  MMEBTRN;  /* collateral clause result */
A68_205 * NMEBTRN;  /* YIELD */
A_PROC_ENTRY(copy_series);
{ 
 /* line 115: */
if ( !(*NL(GMEBTRN_changed)) )
{ 
(*NL(GMEBTRN_changed)) = A68_TRUE;
 /* line 116: */
(*NL(CMEBTRN_ss)) = (*(&(NL(Useries)->Body)));
 /* line 117: */
 /* line 118: */
KMEBTRN = (*NL(FMEBTRN_num_steps));
for ( LMEBTRN = 1;
LMEBTRN <= KMEBTRN;
LMEBTRN += 1 )
{ 
 /* line 119: */
MMEBTRN.Step = (*(&((*NL(CMEBTRN_ss))->Step)));
MMEBTRN.Rest = SAAATRN_nilseries;
NMEBTRN = A_HEAP(A68_205 ) ;
(*NMEBTRN) = MMEBTRN ;
(**NL(EMEBTRN_stail)) = NMEBTRN;
 /* line 120: */
(*NL(EMEBTRN_stail)) = (&((**NL(EMEBTRN_stail))->Rest));
 /* line 121: */
 /* line 122: */
(*NL(CMEBTRN_ss)) = (*(&((*NL(CMEBTRN_ss))->Rest)));
}
 /* line 123: */
 /* line 124: */
} 
} 
A_PROC_EXIT(copy_series);
return;
} 
#undef NL

A_STATIC A68_VOID  RMEBTRN_strip_dimentions(A68_150 * Dims, A68_154  T, A68_154  *ReturnedValue, void *NonLocals)
#define NL(x) (((SMEBTRN_strip_dimentions *)NonLocals)->x)
{ 
A68_BOOL  TMEBTRN;  /* optbool result */
A68_BOOL  UMEBTRN;  /* optbool result */
A68_154  VMEBTRN;  /* united object - for case conformity */
A68_156 * WMEBTRN_tr;
A68_154  XMEBTRN;  /* clause result */
A68_154  YMEBTRN;  /* avoid structure result */
A68_154  BNEBTRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(strip_dimentions);
 /* line 127: */
 /* line 128: */
TMEBTRN = (Dims!=BBAATRN_nilformulas);
if ( TMEBTRN )
{UMEBTRN = NL(ZKEBTRN_remove_all_rows);
if ( ! UMEBTRN )
{UMEBTRN = ((*(&(Dims->Rest)))!=BBAATRN_nilformulas);
}
TMEBTRN = UMEBTRN;
}
 /* line 129: */
if ( TMEBTRN )
{ 
 /* line 130: */
VMEBTRN = T ;
switch ( VMEBTRN.mode )
{ 
case 2: /* REF STRUCT(MODE138,MODE154)  */
WMEBTRN_tr = (VMEBTRN.data.mode2);
 /* line 131: */
 /* line 132: */
A_CALLPROC(NL(QMEBTRN_strip_dimentions),((*(&(Dims->Rest))), (*(&(WMEBTRN_tr->Elem))), &YMEBTRN),((*(&(Dims->Rest))), (*(&(WMEBTRN_tr->Elem))), &YMEBTRN,(NL(QMEBTRN_strip_dimentions)).nonlocals));
XMEBTRN = YMEBTRN;
break;
default: 
NKDAOST_sysfault(ANEBTRN);
 /* line 133: */
 /* line 134: */
 /* line 135: */
 /* line 137: */
XMEBTRN = BNEBTRN;
break;
} 
} 
else
{ 
XMEBTRN = T;
} 
A_PROC_EXIT(strip_dimentions);
*ReturnedValue = (XMEBTRN);
return;
} 
#undef NL

A_STATIC A68_150 * ENEBTRN_strip_formulas(A68_150 * Ff, void *NonLocals)
#define NL(x) (((FNEBTRN_strip_formulas *)NonLocals)->x)
{ 
A68_BOOL  GNEBTRN;  /* optbool result */
A68_BOOL  HNEBTRN;  /* optbool result */
A68_150 * INEBTRN;  /* clause result */
A_PROC_ENTRY(strip_formulas);
 /* line 140: */
 /* line 141: */
GNEBTRN = (Ff!=BBAATRN_nilformulas);
if ( GNEBTRN )
{HNEBTRN = NL(ZKEBTRN_remove_all_rows);
if ( ! HNEBTRN )
{HNEBTRN = ((*(&(Ff->Rest)))!=BBAATRN_nilformulas);
}
GNEBTRN = HNEBTRN;
}
 /* line 142: */
if ( GNEBTRN )
{ 
 /* line 143: */
 /* line 145: */
INEBTRN = A_CALLPROC(NL(DNEBTRN_strip_formulas),((*(&(Ff->Rest)))),((*(&(Ff->Rest))),(NL(DNEBTRN_strip_formulas)).nonlocals));
} 
else
{ 
INEBTRN = Ff;
} 
A_PROC_EXIT(strip_formulas);
return( INEBTRN );
} 
#undef NL

A_STATIC A68_VOID  LNEBTRN_do_step(A68_205 * Ss, void *NonLocals)
#define NL(x) (((MNEBTRN_do_step *)NonLocals)->x)
{ 
A68_206  NNEBTRN;  /* united object - for case conformity */
A68_211 * ONEBTRN_make;
A68_BOOL  PNEBTRN;  /* optbool result */
A68_BOOL  QNEBTRN;  /* optbool result */
A68_INT  RNEBTRN_first_nameno;
A68_217 * SNEBTRN_new_names;
A68_217 * TNEBTRN_nn;
A68_217 ** UNEBTRN_ntail;
A68_150 * VNEBTRN_new_size;
A68_INT  WNEBTRN;  /* YIELD */
A68_154  XNEBTRN;  /* avoid structure result */
A68_154  YNEBTRN_new_type;
A68_426  BOEBTRN_add_dimension;   /* proc value of non-global proc */
A68_191 * LPEBTRN_let_unit;
A68_191 ** MPEBTRN_lutail;
A68_INT  NPEBTRN;  /* YIELD */
A68_VC  OPEBTRN_name;
A68_191  PPEBTRN;  /* collateral clause result */
A68_430  QPEBTRN;  /* collateral clause result */
A68_52  TPEBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  UPEBTRN;  /* YIELD */
A68_52  VPEBTRN;  /* OPERATORS - mode -> union mode */
A68_85  WPEBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  XPEBTRN;  /* avoid structure result */
A68_176  YPEBTRN;  /* avoid structure result */
A68_191 * ZPEBTRN;  /* YIELD */
A68_205  AQEBTRN;  /* collateral clause result */
A68_211  BQEBTRN;  /* collateral clause result */
A68_211 * CQEBTRN;  /* YIELD */
A68_206  DQEBTRN;  /* OPERATORS - mode -> union mode */
A68_205 * EQEBTRN;  /* YIELD */
A68_205  FQEBTRN;  /* collateral clause result */
A68_210  GQEBTRN;  /* collateral clause result */
A68_176  HQEBTRN;  /* OPERATORS - mode -> union mode */
A68_210 * IQEBTRN;  /* YIELD */
A68_206  JQEBTRN;  /* OPERATORS - mode -> union mode */
A68_205 * KQEBTRN;  /* YIELD */
A68_205  LQEBTRN;  /* collateral clause result */
A68_205 * MQEBTRN;  /* YIELD */
A68_395  NQEBTRN;  /* CALL */
A68_352  OQEBTRN;  /* avoid structure result */
A68_352  PQEBTRN_sc;
A68_BOOL  QQEBTRN;  /* optbool result */
A68_205  RQEBTRN;  /* collateral clause result */
A68_205 * SQEBTRN;  /* YIELD */
A_PROC_ENTRY(do_step);
 /* line 148: */
 /* line 149: */
{ 
 /* line 150: */
NNEBTRN = (*(&(Ss->Step))) ;
switch ( NNEBTRN.mode )
{ 
case 9: /* REF STRUCT(REF MODE150,MODE216,REF MODE217)  */
ONEBTRN_make = (NNEBTRN.data.mode9);
 /* line 151: */
 /* line 152: */
{ 
 /* line 153: */
PNEBTRN = ((*(&(ONEBTRN_make->Sizes)))!=BBAATRN_nilformulas);
if ( PNEBTRN )
{ /* line 154: */
QNEBTRN = NL(ZKEBTRN_remove_all_rows);
if ( ! QNEBTRN )
{QNEBTRN = ((*(&((*(&(ONEBTRN_make->Sizes)))->Rest)))!=BBAATRN_nilformulas);
}
PNEBTRN = QNEBTRN;
}
 /* line 155: */
if ( PNEBTRN )
{ 
RNEBTRN_first_nameno = ((*NL(HLEBTRN_new_nameno))+1);
 /* line 156: */
SNEBTRN_new_names = NAAATRN_nilnames;
 /* line 157: */
TNEBTRN_nn = (*(&(ONEBTRN_make->Makenames)));
 /* line 158: */
UNEBTRN_ntail = (&SNEBTRN_new_names);
 /* line 159: */
VNEBTRN_new_size = A_CALLPROC(NL(DNEBTRN_strip_formulas),((*(&(ONEBTRN_make->Sizes)))),((*(&(ONEBTRN_make->Sizes))),(NL(DNEBTRN_strip_formulas)).nonlocals));
 /* line 160: */
 /* line 161: */
WNEBTRN = (*(&(TNEBTRN_nn->Nameno))) ;
A_CALLPROC(NL(QMEBTRN_strip_dimentions),((*(&(ONEBTRN_make->Sizes))), (*(&((&A_VINDEX((*NL(GLEBTRN_nametypes)),WNEBTRN))->Type))), &XNEBTRN),((*(&(ONEBTRN_make->Sizes))), (*(&((&A_VINDEX((*NL(GLEBTRN_nametypes)),WNEBTRN))->Type))), &XNEBTRN,(NL(QMEBTRN_strip_dimentions)).nonlocals));
YNEBTRN_new_type = XNEBTRN;
 /* line 163: */
A_CLOSURE( BOEBTRN_add_dimension, COEBTRN_add_dimension, DOEBTRN_add_dimension );
(( DOEBTRN_add_dimension * ) ( BOEBTRN_add_dimension.nonlocals )) -> ZKEBTRN_remove_all_rows = NL(ZKEBTRN_remove_all_rows);
(( DOEBTRN_add_dimension * ) ( BOEBTRN_add_dimension.nonlocals )) -> BOEBTRN_add_dimension = BOEBTRN_add_dimension;
(( DOEBTRN_add_dimension * ) ( BOEBTRN_add_dimension.nonlocals )) -> HLEBTRN_new_nameno = NL(HLEBTRN_new_nameno);
(( DOEBTRN_add_dimension * ) ( BOEBTRN_add_dimension.nonlocals )) -> GLEBTRN_nametypes = NL(GLEBTRN_nametypes);
(( DOEBTRN_add_dimension * ) ( BOEBTRN_add_dimension.nonlocals )) -> YNEBTRN_new_type = YNEBTRN_new_type;
(( DOEBTRN_add_dimension * ) ( BOEBTRN_add_dimension.nonlocals )) -> UNEBTRN_ntail = (&UNEBTRN_ntail);
(( DOEBTRN_add_dimension * ) ( BOEBTRN_add_dimension.nonlocals )) -> Msg = NL(Msg);
 /* line 193: */
LPEBTRN_let_unit = IAAATRN_nilustr;
 /* line 194: */
MPEBTRN_lutail = (&LPEBTRN_let_unit);
 /* line 196: */
for ( ;; )
{ 
 /* line 197: */
if ( !((TNEBTRN_nn!=NAAATRN_nilnames)) ) break;
NPEBTRN = (*(&(TNEBTRN_nn->Nameno))) ;
OPEBTRN_name = (*(&((&A_VINDEX((*NL(GLEBTRN_nametypes)),NPEBTRN))->Name)));
 /* line 198: */
 /* line 199: */
UPEBTRN = SPEBTRN ;
QPEBTRN.data[0] = A_UNITE(TPEBTRN,mode7,7,UPEBTRN);
QPEBTRN.data[1] = A_UNITE(VPEBTRN,mode7,7,OPEBTRN_name);
 /* line 200: */
UJBAOSL_oneline( A_HISVEC(WPEBTRN,QPEBTRN,2,A68_52 ), &XPEBTRN );
A_CALLPROC(BOEBTRN_add_dimension,((*(&(ONEBTRN_make->Sizes))), XPEBTRN, &YPEBTRN),((*(&(ONEBTRN_make->Sizes))), XPEBTRN, &YPEBTRN,(BOEBTRN_add_dimension).nonlocals));
PPEBTRN.Elem = YPEBTRN;
PPEBTRN.Rest = IAAATRN_nilustr;
ZPEBTRN = A_HEAP(A68_191 ) ;
(*ZPEBTRN) = PPEBTRN ;
(*MPEBTRN_lutail) = ZPEBTRN;
 /* line 201: */
MPEBTRN_lutail = (&((*MPEBTRN_lutail)->Rest));
 /* line 202: */
 /* line 203: */
TNEBTRN_nn = (*(&(TNEBTRN_nn->Rest)));
}
 /* line 205: */
A_CALLPROC(NL(HMEBTRN_copy_series),(),((NL(HMEBTRN_copy_series)).nonlocals));
 /* line 206: */
 /* line 207: */
BQEBTRN.Sizes = VNEBTRN_new_size;
BQEBTRN.Inst = (*(&(ONEBTRN_make->Inst)));
BQEBTRN.Makenames = SNEBTRN_new_names;
 /* line 208: */
CQEBTRN = A_HEAP(A68_211 ) ;
(*CQEBTRN) = BQEBTRN ;
AQEBTRN.Step = A_UNITE(DQEBTRN,mode9,9,CQEBTRN);
AQEBTRN.Rest = SAAATRN_nilseries;
EQEBTRN = A_HEAP(A68_205 ) ;
(*EQEBTRN) = AQEBTRN ;
(**NL(EMEBTRN_stail)) = EQEBTRN;
 /* line 209: */
(*NL(EMEBTRN_stail)) = (&((**NL(EMEBTRN_stail))->Rest));
 /* line 210: */
 /* line 211: */
 /* line 212: */
GQEBTRN.Letnames = (*(&(ONEBTRN_make->Makenames)));
 /* line 214: */
if ( ((*(&((*(&(ONEBTRN_make->Makenames)))->Rest)))==NAAATRN_nilnames) )
{ 
 /* line 216: */
GQEBTRN.Unit = (*(&(LPEBTRN_let_unit->Elem)));
} 
else
{ 
GQEBTRN.Unit = A_UNITE(HQEBTRN,mode21,21,LPEBTRN_let_unit);
} 
 /* line 217: */
IQEBTRN = A_HEAP(A68_210 ) ;
(*IQEBTRN) = GQEBTRN ;
FQEBTRN.Step = A_UNITE(JQEBTRN,mode8,8,IQEBTRN);
FQEBTRN.Rest = SAAATRN_nilseries;
KQEBTRN = A_HEAP(A68_205 ) ;
(*KQEBTRN) = FQEBTRN ;
(**NL(EMEBTRN_stail)) = KQEBTRN;
 /* line 218: */
 /* line 220: */
(*NL(EMEBTRN_stail)) = (&((**NL(EMEBTRN_stail))->Rest));
} 
else
{ 
 /* line 221: */
if ( (*NL(GMEBTRN_changed)) )
{ 
A_CALLPROC(NL(HMEBTRN_copy_series),(),((NL(HMEBTRN_copy_series)).nonlocals));
 /* line 222: */
LQEBTRN.Step = (*(&(Ss->Step)));
LQEBTRN.Rest = SAAATRN_nilseries;
MQEBTRN = A_HEAP(A68_205 ) ;
(*MQEBTRN) = LQEBTRN ;
(**NL(EMEBTRN_stail)) = MQEBTRN;
 /* line 223: */
 /* line 224: */
 /* line 225: */
 /* line 226: */
 /* line 227: */
(*NL(EMEBTRN_stail)) = (&((**NL(EMEBTRN_stail))->Rest));
} 
} 
} 
break;
default: 
NQEBTRN = (*(&(NL(Dec_tprocs)->Step))) ;
A_CALLPROC(NQEBTRN,((*(&(Ss->Step))), NL(Tprocs), &OQEBTRN),((*(&(Ss->Step))), NL(Tprocs), &OQEBTRN,(NQEBTRN).nonlocals));
PQEBTRN_sc = OQEBTRN;
 /* line 229: */
QQEBTRN = PQEBTRN_sc.C;
if ( ! QQEBTRN )
{QQEBTRN = (*NL(GMEBTRN_changed));
}
 /* line 230: */
if ( QQEBTRN )
{ 
A_CALLPROC(NL(HMEBTRN_copy_series),(),((NL(HMEBTRN_copy_series)).nonlocals));
 /* line 231: */
RQEBTRN.Step = PQEBTRN_sc.S;
RQEBTRN.Rest = SAAATRN_nilseries;
SQEBTRN = A_HEAP(A68_205 ) ;
(*SQEBTRN) = RQEBTRN ;
(**NL(EMEBTRN_stail)) = SQEBTRN;
 /* line 232: */
 /* line 233: */
 /* line 234: */
 /* line 235: */
(*NL(EMEBTRN_stail)) = (&((**NL(EMEBTRN_stail))->Rest));
} 
break;
} 
} 
A_PROC_EXIT(do_step);
return;
} 
#undef NL

A_STATIC A68_VOID  MLEBTRN_pre_pass_make(A68_211 * M, A68_360 * Tprocs, A68_349  *ReturnedValue, void *NonLocals)
#define NL(x) (((NLEBTRN_pre_pass_make *)NonLocals)->x)
{ 
A68_150 * OLEBTRN_ff;
A68_INT  PLEBTRN_num_dim;
A68_INT  QLEBTRN_stride;
A68_BOOL  RLEBTRN;  /* optbool result */
A68_BOOL  SLEBTRN;  /* optbool result */
A68_217 * TLEBTRN_nn;
A68_INT  ULEBTRN_num_names;
A68_349  VLEBTRN;  /* collateral clause result */
A68_349  WLEBTRN;  /* clause result */
A_PROC_ENTRY(pre_pass_make);
 /* line 79: */
 /* line 80: */
{ 
OLEBTRN_ff = (*(&(M->Sizes)));
 /* line 81: */
PLEBTRN_num_dim = 0;
QLEBTRN_stride = 1;
 /* line 83: */
for ( ;; )
{ 
 /* line 84: */
RLEBTRN = (OLEBTRN_ff!=BBAATRN_nilformulas);
if ( RLEBTRN )
{SLEBTRN = NL(ZKEBTRN_remove_all_rows);
if ( ! SLEBTRN )
{SLEBTRN = ((*(&(OLEBTRN_ff->Rest)))!=BBAATRN_nilformulas);
}
 /* line 85: */
RLEBTRN = SLEBTRN;
}
 /* line 86: */
if ( !(RLEBTRN) ) break;
QLEBTRN_stride*=TNMATRN_formula_int((*(&(OLEBTRN_ff->Formula))), NL(Msg));
 /* line 87: */
PLEBTRN_num_dim+=1;
 /* line 88: */
 /* line 89: */
OLEBTRN_ff = (*(&(OLEBTRN_ff->Rest)));
}
 /* line 90: */
 /* line 91: */
if ( (PLEBTRN_num_dim>0) )
{ 
TLEBTRN_nn = (*(&(M->Makenames)));
 /* line 92: */
ULEBTRN_num_names = 0;
 /* line 94: */
for ( ;; )
{ 
 /* line 95: */
 /* line 96: */
if ( !((TLEBTRN_nn!=NAAATRN_nilnames)) ) break;
ULEBTRN_num_names+=1;
 /* line 97: */
 /* line 98: */
TLEBTRN_nn = (*(&(TLEBTRN_nn->Rest)));
}
 /* line 99: */
 /* line 100: */
(*NL(ILEBTRN_max_names))+=(ULEBTRN_num_names*QLEBTRN_stride);
} 
 /* line 101: */
VLEBTRN.M = M;
 /* line 102: */
VLEBTRN.C = A68_FALSE;
WLEBTRN = VLEBTRN;
} 
A_PROC_EXIT(pre_pass_make);
*ReturnedValue = (WLEBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  AMEBTRN_useries_make(A68_199 * Useries, A68_360 * Tprocs, A68_336  *ReturnedValue, void *NonLocals)
#define NL(x) (((BMEBTRN_useries_make *)NonLocals)->x)
{ 
A68_205 * CMEBTRN_ss;
A68_205 * DMEBTRN_new_series;
A68_205 ** EMEBTRN_stail;
A68_INT  FMEBTRN_num_steps;
A68_BOOL  GMEBTRN_changed;
A68_407  HMEBTRN_copy_series;   /* proc value of non-global proc */
A68_422  QMEBTRN_strip_dimentions;   /* proc value of non-global proc */
A68_424  DNEBTRN_strip_formulas;   /* proc value of non-global proc */
A68_425  KNEBTRN_do_step;   /* proc value of non-global proc */
A68_379  TQEBTRN;  /* CALL */
A68_336  UQEBTRN;  /* avoid structure result */
A68_336  VQEBTRN_output;
A68_BOOL  WQEBTRN;  /* optbool result */
A68_336  XQEBTRN;  /* collateral clause result */
A68_199  YQEBTRN;  /* collateral clause result */
A68_199 * ZQEBTRN;  /* YIELD */
A68_176  AREBTRN;  /* OPERATORS - mode -> union mode */
A68_336  BREBTRN;  /* clause result */
A68_336  CREBTRN;  /* collateral clause result */
A68_176  DREBTRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(useries_make);
 /* line 105: */
 /* line 106: */
{ 
CMEBTRN_ss = (*(&(Useries->Body)));
 /* line 107: */
DMEBTRN_new_series = SAAATRN_nilseries;
 /* line 108: */
EMEBTRN_stail = (&DMEBTRN_new_series);
 /* line 109: */
FMEBTRN_num_steps = 0;
 /* line 110: */
GMEBTRN_changed = A68_FALSE;
 /* line 112: */
 /* line 113: */
 /* line 114: */
A_CLOSURE( HMEBTRN_copy_series, IMEBTRN_copy_series, JMEBTRN_copy_series );
(( JMEBTRN_copy_series * ) ( HMEBTRN_copy_series.nonlocals )) -> GMEBTRN_changed = (&GMEBTRN_changed);
(( JMEBTRN_copy_series * ) ( HMEBTRN_copy_series.nonlocals )) -> CMEBTRN_ss = (&CMEBTRN_ss);
(( JMEBTRN_copy_series * ) ( HMEBTRN_copy_series.nonlocals )) -> Useries = Useries;
(( JMEBTRN_copy_series * ) ( HMEBTRN_copy_series.nonlocals )) -> FMEBTRN_num_steps = (&FMEBTRN_num_steps);
(( JMEBTRN_copy_series * ) ( HMEBTRN_copy_series.nonlocals )) -> EMEBTRN_stail = (&EMEBTRN_stail);
 /* line 126: */
A_CLOSURE( QMEBTRN_strip_dimentions, RMEBTRN_strip_dimentions, SMEBTRN_strip_dimentions );
(( SMEBTRN_strip_dimentions * ) ( QMEBTRN_strip_dimentions.nonlocals )) -> ZKEBTRN_remove_all_rows = NL(ZKEBTRN_remove_all_rows);
(( SMEBTRN_strip_dimentions * ) ( QMEBTRN_strip_dimentions.nonlocals )) -> QMEBTRN_strip_dimentions = QMEBTRN_strip_dimentions;
 /* line 139: */
A_CLOSURE( DNEBTRN_strip_formulas, ENEBTRN_strip_formulas, FNEBTRN_strip_formulas );
(( FNEBTRN_strip_formulas * ) ( DNEBTRN_strip_formulas.nonlocals )) -> ZKEBTRN_remove_all_rows = NL(ZKEBTRN_remove_all_rows);
(( FNEBTRN_strip_formulas * ) ( DNEBTRN_strip_formulas.nonlocals )) -> DNEBTRN_strip_formulas = DNEBTRN_strip_formulas;
 /* line 147: */
A_CLOSURE( KNEBTRN_do_step, LNEBTRN_do_step, MNEBTRN_do_step );
(( MNEBTRN_do_step * ) ( KNEBTRN_do_step.nonlocals )) -> ZKEBTRN_remove_all_rows = NL(ZKEBTRN_remove_all_rows);
(( MNEBTRN_do_step * ) ( KNEBTRN_do_step.nonlocals )) -> HLEBTRN_new_nameno = NL(HLEBTRN_new_nameno);
(( MNEBTRN_do_step * ) ( KNEBTRN_do_step.nonlocals )) -> DNEBTRN_strip_formulas = DNEBTRN_strip_formulas;
(( MNEBTRN_do_step * ) ( KNEBTRN_do_step.nonlocals )) -> QMEBTRN_strip_dimentions = QMEBTRN_strip_dimentions;
(( MNEBTRN_do_step * ) ( KNEBTRN_do_step.nonlocals )) -> GLEBTRN_nametypes = NL(GLEBTRN_nametypes);
(( MNEBTRN_do_step * ) ( KNEBTRN_do_step.nonlocals )) -> Msg = NL(Msg);
(( MNEBTRN_do_step * ) ( KNEBTRN_do_step.nonlocals )) -> HMEBTRN_copy_series = HMEBTRN_copy_series;
(( MNEBTRN_do_step * ) ( KNEBTRN_do_step.nonlocals )) -> EMEBTRN_stail = (&EMEBTRN_stail);
(( MNEBTRN_do_step * ) ( KNEBTRN_do_step.nonlocals )) -> GMEBTRN_changed = (&GMEBTRN_changed);
(( MNEBTRN_do_step * ) ( KNEBTRN_do_step.nonlocals )) -> Dec_tprocs = NL(Dec_tprocs);
(( MNEBTRN_do_step * ) ( KNEBTRN_do_step.nonlocals )) -> Tprocs = Tprocs;
 /* line 237: */
for ( ;; )
{ 
 /* line 238: */
 /* line 239: */
if ( !((CMEBTRN_ss!=SAAATRN_nilseries)) ) break;
A_CALLPROC(KNEBTRN_do_step,(CMEBTRN_ss),(CMEBTRN_ss,(KNEBTRN_do_step).nonlocals));
 /* line 240: */
FMEBTRN_num_steps+=1;
 /* line 241: */
 /* line 242: */
CMEBTRN_ss = (*(&(CMEBTRN_ss->Rest)));
}
 /* line 244: */
TQEBTRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(TQEBTRN,((*(&(Useries->Output))), Tprocs, &UQEBTRN),((*(&(Useries->Output))), Tprocs, &UQEBTRN,(TQEBTRN).nonlocals));
VQEBTRN_output = UQEBTRN;
 /* line 246: */
WQEBTRN = VQEBTRN_output.C;
if ( ! WQEBTRN )
{WQEBTRN = GMEBTRN_changed;
}
 /* line 247: */
if ( WQEBTRN )
{ 
if ( GMEBTRN_changed )
{ 
YQEBTRN.Body = DMEBTRN_new_series;
} 
else
{ 
 /* line 248: */
YQEBTRN.Body = (*(&(Useries->Body)));
} 
YQEBTRN.Output = VQEBTRN_output.U;
 /* line 249: */
ZQEBTRN = A_HEAP(A68_199 ) ;
(*ZQEBTRN) = YQEBTRN ;
XQEBTRN.U = A_UNITE(AREBTRN,mode29,29,ZQEBTRN);
 /* line 250: */
 /* line 251: */
XQEBTRN.C = A68_TRUE;
BREBTRN = XQEBTRN;
} 
else
{ 
CREBTRN.U = A_UNITE(DREBTRN,mode29,29,Useries);
 /* line 252: */
 /* line 253: */
CREBTRN.C = A68_FALSE;
BREBTRN = CREBTRN;
} 
} 
A_PROC_EXIT(useries_make);
*ReturnedValue = (BREBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  HREBTRN_unit_make(A68_176  Unit, A68_360 * Tprocs, A68_336  *ReturnedValue, void *NonLocals)
#define NL(x) (((IREBTRN_unit_make *)NonLocals)->x)
{ 
A68_176  JREBTRN;  /* united object - for case conformity */
A68_199 * KREBTRN_usr;
A68_336  LREBTRN;  /* clause result */
A68_336  MREBTRN;  /* avoid structure result */
A68_379  NREBTRN;  /* CALL */
A68_336  OREBTRN;  /* avoid structure result */
A_PROC_ENTRY(unit_make);
 /* line 256: */
JREBTRN = Unit ;
switch ( JREBTRN.mode )
{ 
case 29: /* REF STRUCT(REF MODE205,MODE176)  */
KREBTRN_usr = (JREBTRN.data.mode29);
 /* line 257: */
 /* line 258: */
A_CALLPROC(NL(ZLEBTRN_useries_make),(KREBTRN_usr, Tprocs, &MREBTRN),(KREBTRN_usr, Tprocs, &MREBTRN,(NL(ZLEBTRN_useries_make)).nonlocals));
LREBTRN = MREBTRN;
break;
default: 
 /* line 259: */
NREBTRN = (*(&(NL(Dec_tprocs)->Unit))) ;
A_CALLPROC(NREBTRN,(Unit, Tprocs, &OREBTRN),(Unit, Tprocs, &OREBTRN,(NREBTRN).nonlocals));
LREBTRN = OREBTRN;
break;
} 
A_PROC_EXIT(unit_make);
*ReturnedValue = (LREBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  MSEBTRN_generator(A68_BOOL  KSEBTRN_anonymous, A68_254  *ReturnedValue, void *NonLocals)
#define NL(x) (((NSEBTRN_generator *)NonLocals)->x)
{ 
A68_254  OSEBTRN;  /* clause result */
A68_254  PSEBTRN;  /* OPERATORS - dynamic generator */
{ 
PSEBTRN.upb = (*NL(ILEBTRN_max_names)) ;
( KSEBTRN_anonymous? A_VLOC(A68_251 ,PSEBTRN): A_VHEAP(A68_251 ,PSEBTRN) );
OSEBTRN = PSEBTRN;
} 
*ReturnedValue = (OSEBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ELEBTRN_fndec_proc(A68_252 * Fdec, A68_360 * Dec_tprocs, A68_357  *ReturnedValue, void *NonLocals)
#define NL(x) (((FLEBTRN_fndec_proc *)NonLocals)->x)
{ 
A68_254  GLEBTRN_nametypes;
A68_INT  HLEBTRN_new_nameno;
A68_INT  ILEBTRN_max_names;
A68_392  LLEBTRN_pre_pass_make;   /* proc value of non-global proc */
A68_421  ZLEBTRN_useries_make;   /* proc value of non-global proc */
A68_379  GREBTRN_unit_make;   /* proc value of non-global proc */
A68_431  PREBTRN;  /* collateral clause result */
A68_405  QREBTRN;  /* OPERATORS - mode -> union mode */
A68_361  RREBTRN;  /* procedure value */
A68_405  SREBTRN;  /* OPERATORS - mode -> union mode */
A68_364  TREBTRN;  /* procedure value */
A68_405  UREBTRN;  /* OPERATORS - mode -> union mode */
A68_370  VREBTRN;  /* procedure value */
A68_405  WREBTRN;  /* OPERATORS - mode -> union mode */
A68_397  XREBTRN;  /* YIELD */
A68_397  YREBTRN;  /* procedure value */
A68_405  ZREBTRN;  /* OPERATORS - mode -> union mode */
A68_392  ASEBTRN;  /* YIELD */
A68_404  BSEBTRN;  /* OPERATORS - istruct -> vector */
A68_360 * CSEBTRN_pre_pass_tprocs;
A68_397  DSEBTRN;  /* CALL */
A68_354  ESEBTRN;  /* avoid structure result */
A68_405  FSEBTRN;  /* OPERATORS - mode -> union mode */
A68_379  GSEBTRN;  /* YIELD */
A68_404  HSEBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_360 * ISEBTRN_new_tprocs;
A68_254  JSEBTRN_old_nametypes;
A68_432  LSEBTRN_generator;   /* proc value of non-global proc */
A68_254  QSEBTRN;  /* avoid structure result */
A68_254  RSEBTRN;  /* OPERATORS - trim index */
A68_254  SSEBTRN;  /* YIELD */
A68_397  TSEBTRN;  /* CALL */
A68_354  USEBTRN;  /* avoid structure result */
A68_354  VSEBTRN_fc;
A68_252 * WSEBTRN;  /* YIELD */
A68_252 * XSEBTRN_new_dec;
A68_254 * YSEBTRN;  /* YIELD */
A68_248 * ZSEBTRN;  /* YIELD */
A68_357  ATEBTRN;  /* collateral clause result */
A68_357  BTEBTRN;  /* clause result */
A68_357  CTEBTRN;  /* collateral clause result */
A_PROC_ENTRY(fndec_proc);
 /* line 73: */
 /* line 74: */
{ 
GLEBTRN_nametypes = (*(&(Fdec->Nametypes)));
 /* line 75: */
HLEBTRN_new_nameno = GLEBTRN_nametypes.upb;
 /* line 76: */
ILEBTRN_max_names = HLEBTRN_new_nameno;
 /* line 78: */
A_CLOSURE( LLEBTRN_pre_pass_make, MLEBTRN_pre_pass_make, NLEBTRN_pre_pass_make );
(( NLEBTRN_pre_pass_make * ) ( LLEBTRN_pre_pass_make.nonlocals )) -> ZKEBTRN_remove_all_rows = NL(ZKEBTRN_remove_all_rows);
(( NLEBTRN_pre_pass_make * ) ( LLEBTRN_pre_pass_make.nonlocals )) -> Msg = NL(Msg);
(( NLEBTRN_pre_pass_make * ) ( LLEBTRN_pre_pass_make.nonlocals )) -> ILEBTRN_max_names = (&ILEBTRN_max_names);
 /* line 104: */
A_CLOSURE( ZLEBTRN_useries_make, AMEBTRN_useries_make, BMEBTRN_useries_make );
(( BMEBTRN_useries_make * ) ( ZLEBTRN_useries_make.nonlocals )) -> ZKEBTRN_remove_all_rows = NL(ZKEBTRN_remove_all_rows);
(( BMEBTRN_useries_make * ) ( ZLEBTRN_useries_make.nonlocals )) -> HLEBTRN_new_nameno = (&HLEBTRN_new_nameno);
(( BMEBTRN_useries_make * ) ( ZLEBTRN_useries_make.nonlocals )) -> GLEBTRN_nametypes = (&GLEBTRN_nametypes);
(( BMEBTRN_useries_make * ) ( ZLEBTRN_useries_make.nonlocals )) -> Msg = NL(Msg);
(( BMEBTRN_useries_make * ) ( ZLEBTRN_useries_make.nonlocals )) -> Dec_tprocs = Dec_tprocs;
 /* line 255: */
A_CLOSURE( GREBTRN_unit_make, HREBTRN_unit_make, IREBTRN_unit_make );
(( IREBTRN_unit_make * ) ( GREBTRN_unit_make.nonlocals )) -> ZLEBTRN_useries_make = ZLEBTRN_useries_make;
(( IREBTRN_unit_make * ) ( GREBTRN_unit_make.nonlocals )) -> Dec_tprocs = Dec_tprocs;
 /* line 264: */
 /* line 265: */
 /* line 266: */
RREBTRN.fn.fn_global = DWLATRN_null_attr;
RREBTRN.nonlocals = A68_NIL;
PREBTRN.data[0] = A_UNITE(QREBTRN,mode1,1,RREBTRN);
 /* line 267: */
TREBTRN.fn.fn_global = IWLATRN_null_formula;
TREBTRN.nonlocals = A68_NIL;
PREBTRN.data[1] = A_UNITE(SREBTRN,mode4,4,TREBTRN);
 /* line 268: */
VREBTRN.fn.fn_global = NWLATRN_null_type;
VREBTRN.nonlocals = A68_NIL;
PREBTRN.data[2] = A_UNITE(UREBTRN,mode10,10,VREBTRN);
 /* line 269: */
YREBTRN.fn.fn_global = MKEBTRN_fnbody_multimakes;
YREBTRN.nonlocals = A68_NIL;
XREBTRN = YREBTRN ;
PREBTRN.data[3] = A_UNITE(WREBTRN,mode37,37,XREBTRN);
ASEBTRN = LLEBTRN_pre_pass_make ;
PREBTRN.data[4] = A_UNITE(ZREBTRN,mode32,32,ASEBTRN);
CSEBTRN_pre_pass_tprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HISVEC(BSEBTRN,PREBTRN,5,A68_405 ));
 /* line 271: */
DSEBTRN = (*(&(CSEBTRN_pre_pass_tprocs->Fnbody))) ;
A_CALLPROC(DSEBTRN,((*(&(Fdec->Fnbody))), CSEBTRN_pre_pass_tprocs, &ESEBTRN),((*(&(Fdec->Fnbody))), CSEBTRN_pre_pass_tprocs, &ESEBTRN,(DSEBTRN).nonlocals));
ESEBTRN;
 /* line 273: */
MLJATRN_discard_tprocs(CSEBTRN_pre_pass_tprocs);
 /* line 275: */
GSEBTRN = GREBTRN_unit_make ;
ISEBTRN_new_tprocs = THJATRN_make_newtprocs(Dec_tprocs, A_HVEC(HSEBTRN,A_UNITE(FSEBTRN,mode19,19,GSEBTRN),A68_405 ));
 /* line 277: */
 /* line 278: */
if ( (ILEBTRN_max_names>HLEBTRN_new_nameno) )
{ 
JSEBTRN_old_nametypes = GLEBTRN_nametypes;
 /* line 281: */
A_CLOSURE( LSEBTRN_generator, MSEBTRN_generator, NSEBTRN_generator );
(( NSEBTRN_generator * ) ( LSEBTRN_generator.nonlocals )) -> ILEBTRN_max_names = (&ILEBTRN_max_names);
A_CALLPROC(LSEBTRN_generator,(A68_FALSE, &QSEBTRN),(A68_FALSE, &QSEBTRN,(LSEBTRN_generator).nonlocals));
GLEBTRN_nametypes = QSEBTRN;
 /* line 282: */
 /* line 283: */
SSEBTRN = A_VTRIM(RSEBTRN,(GLEBTRN_nametypes),A_VTSCRIPT(&(RSEBTRN.upb),(GLEBTRN_nametypes).upb,1,HLEBTRN_new_nameno)) ;
A_VASSIGN2(JSEBTRN_old_nametypes,SSEBTRN,A68_251 );
} 
 /* line 286: */
TSEBTRN = (*(&(ISEBTRN_new_tprocs->Fnbody))) ;
A_CALLPROC(TSEBTRN,((*(&(Fdec->Fnbody))), ISEBTRN_new_tprocs, &USEBTRN),((*(&(Fdec->Fnbody))), ISEBTRN_new_tprocs, &USEBTRN,(TSEBTRN).nonlocals));
VSEBTRN_fc = USEBTRN;
 /* line 288: */
 /* line 289: */
if ( VSEBTRN_fc.C )
{ 
WSEBTRN = A_HEAP(A68_252 ) ;
(*WSEBTRN) = (*Fdec) ;
XSEBTRN_new_dec = WSEBTRN;
 /* line 291: */
YSEBTRN = (&(XSEBTRN_new_dec->Nametypes)) ;
(*YSEBTRN) = GLEBTRN_nametypes;
 /* line 292: */
ZSEBTRN = (&(XSEBTRN_new_dec->Fnbody)) ;
(*ZSEBTRN) = VSEBTRN_fc.F;
 /* line 293: */
ATEBTRN.F = XSEBTRN_new_dec;
 /* line 294: */
 /* line 295: */
ATEBTRN.C = A68_TRUE;
BTEBTRN = ATEBTRN;
} 
else
{ 
CTEBTRN.F = Fdec;
 /* line 296: */
 /* line 297: */
CTEBTRN.C = A68_FALSE;
BTEBTRN = CTEBTRN;
} 
} 
A_PROC_EXIT(fndec_proc);
*ReturnedValue = (BTEBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  MUEBTRN_anonymous(A68_261  Outer, A68_360 * Tprocs, A68_358  *ReturnedValue, void *NonLocals)
#define NL(x) (((NUEBTRN_anonymous *)NonLocals)->x)
{ 
A68_358  OUEBTRN;  /* clause result */
A68_358  PUEBTRN;  /* avoid structure result */
 /* line 323: */
XKEBTRN_outer_multimakes( Outer, NL(Closure), NL(Options), NL(Msg), &PUEBTRN );
OUEBTRN = PUEBTRN;
*ReturnedValue = (OUEBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  DKEBTRN_makes_remove_all_rows(A68_408  *ReturnedValue)
{ 
A68_408  EKEBTRN;  /* clause result */
A68_408  FKEBTRN;  /* avoid structure result */
A_PROC_ENTRY(makes_remove_all_rows);
FCAAOST_makeoptions( 1, &FKEBTRN );
EKEBTRN = FKEBTRN;
A_PROC_EXIT(makes_remove_all_rows);
*ReturnedValue = (EKEBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  MKEBTRN_fnbody_multimakes(A68_248  Fbody, A68_360 * Tprocs, A68_354  *ReturnedValue)
{ 
A68_248  NKEBTRN;  /* united object - for case conformity */
A68_221 * OKEBTRN_ut;
A68_354  PKEBTRN;  /* clause result */
A68_397  QKEBTRN;  /* CALL */
A68_354  RKEBTRN;  /* avoid structure result */
A68_354  SKEBTRN;  /* collateral clause result */
A_PROC_ENTRY(fnbody_multimakes);
 /* line 59: */
 /* line 60: */
NKEBTRN = Fbody ;
switch ( NKEBTRN.mode )
{ 
case 1: /* REF STRUCT(MODE176)  */
OKEBTRN_ut = (NKEBTRN.data.mode1);
 /* line 61: */
QKEBTRN = (*(&(AWLATRN_nulltprocs->Fnbody))) ;
A_CALLPROC(QKEBTRN,(Fbody, Tprocs, &RKEBTRN),(Fbody, Tprocs, &RKEBTRN,(QKEBTRN).nonlocals));
PKEBTRN = RKEBTRN;
break;
default: 
SKEBTRN.F = Fbody;
 /* line 62: */
SKEBTRN.C = A68_FALSE;
PKEBTRN = SKEBTRN;
break;
} 
A_PROC_EXIT(fnbody_multimakes);
*ReturnedValue = (PKEBTRN);
return;
} 
#undef NL
 /* line 65: */
 /* line 66: */
 /* line 67: */

A68_VOID  XKEBTRN_outer_multimakes(A68_261  Outer, A68_265 * Closure, A68_408  Options, A68_108  Msg, A68_358  *ReturnedValue)
{ 
A68_408  YKEBTRN;  /* avoid structure result */
A68_BOOL  ZKEBTRN_remove_all_rows;
A68_255 * ALEBTRN_env;
A68_400  DLEBTRN_fndec_proc;   /* proc value of non-global proc */
A68_431  DTEBTRN;  /* collateral clause result */
A68_405  ETEBTRN;  /* OPERATORS - mode -> union mode */
A68_361  FTEBTRN;  /* procedure value */
A68_405  GTEBTRN;  /* OPERATORS - mode -> union mode */
A68_364  HTEBTRN;  /* procedure value */
A68_405  ITEBTRN;  /* OPERATORS - mode -> union mode */
A68_370  JTEBTRN;  /* procedure value */
A68_405  KTEBTRN;  /* OPERATORS - mode -> union mode */
A68_397  LTEBTRN;  /* YIELD */
A68_397  MTEBTRN;  /* procedure value */
A68_405  NTEBTRN;  /* OPERATORS - mode -> union mode */
A68_400  OTEBTRN;  /* YIELD */
A68_404  PTEBTRN;  /* OPERATORS - istruct -> vector */
A68_360 * QTEBTRN_new_tprocs;
A68_401  RTEBTRN;  /* CALL */
A68_358  STEBTRN;  /* avoid structure result */
A68_358  TTEBTRN_oc;
A68_358  UTEBTRN;  /* clause result */
A_PROC_ENTRY(outer_multimakes);
 /* line 68: */
 /* line 69: */
{ 
DKEBTRN_makes_remove_all_rows(  &YKEBTRN );
ZKEBTRN_remove_all_rows = MBAAOST_includes(Options, YKEBTRN);
 /* line 70: */
ALEBTRN_env = Outer.Environ;
 /* line 72: */
A_CLOSURE( DLEBTRN_fndec_proc, ELEBTRN_fndec_proc, FLEBTRN_fndec_proc );
(( FLEBTRN_fndec_proc * ) ( DLEBTRN_fndec_proc.nonlocals )) -> ZKEBTRN_remove_all_rows = ZKEBTRN_remove_all_rows;
(( FLEBTRN_fndec_proc * ) ( DLEBTRN_fndec_proc.nonlocals )) -> Msg = Msg;
 /* line 300: */
 /* line 301: */
 /* line 302: */
FTEBTRN.fn.fn_global = DWLATRN_null_attr;
FTEBTRN.nonlocals = A68_NIL;
DTEBTRN.data[0] = A_UNITE(ETEBTRN,mode1,1,FTEBTRN);
 /* line 303: */
HTEBTRN.fn.fn_global = IWLATRN_null_formula;
HTEBTRN.nonlocals = A68_NIL;
DTEBTRN.data[1] = A_UNITE(GTEBTRN,mode4,4,HTEBTRN);
 /* line 304: */
JTEBTRN.fn.fn_global = NWLATRN_null_type;
JTEBTRN.nonlocals = A68_NIL;
DTEBTRN.data[2] = A_UNITE(ITEBTRN,mode10,10,JTEBTRN);
 /* line 305: */
MTEBTRN.fn.fn_global = MKEBTRN_fnbody_multimakes;
MTEBTRN.nonlocals = A68_NIL;
LTEBTRN = MTEBTRN ;
DTEBTRN.data[3] = A_UNITE(KTEBTRN,mode37,37,LTEBTRN);
OTEBTRN = DLEBTRN_fndec_proc ;
DTEBTRN.data[4] = A_UNITE(NTEBTRN,mode40,40,OTEBTRN);
QTEBTRN_new_tprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HISVEC(PTEBTRN,DTEBTRN,5,A68_405 ));
 /* line 307: */
RTEBTRN = (*(&(QTEBTRN_new_tprocs->Outer))) ;
A_CALLPROC(RTEBTRN,(Outer, QTEBTRN_new_tprocs, &STEBTRN),(Outer, QTEBTRN_new_tprocs, &STEBTRN,(RTEBTRN).nonlocals));
TTEBTRN_oc = STEBTRN;
 /* line 309: */
MLJATRN_discard_tprocs(QTEBTRN_new_tprocs);
 /* line 310: */
 /* line 311: */
UTEBTRN = TTEBTRN_oc;
} 
A_PROC_EXIT(outer_multimakes);
*ReturnedValue = (UTEBTRN);
return;
} 
#undef NL
 /* line 314: */
 /* line 315: */

A68_VOID  YTEBTRN_transform_multimakes(A68_265 * Closure, A68_408  Options, A68_108  Msg, A68_359  *ReturnedValue)
{ 
A68_431  ZTEBTRN;  /* collateral clause result */
A68_405  AUEBTRN;  /* OPERATORS - mode -> union mode */
A68_361  BUEBTRN;  /* procedure value */
A68_405  CUEBTRN;  /* OPERATORS - mode -> union mode */
A68_364  DUEBTRN;  /* procedure value */
A68_405  EUEBTRN;  /* OPERATORS - mode -> union mode */
A68_370  FUEBTRN;  /* procedure value */
A68_405  GUEBTRN;  /* OPERATORS - mode -> union mode */
A68_397  HUEBTRN;  /* YIELD */
A68_397  IUEBTRN;  /* procedure value */
A68_401  LUEBTRN_anonymous;   /* proc value of non-global proc */
A68_405  QUEBTRN;  /* OPERATORS - mode -> union mode */
A68_401  RUEBTRN;  /* YIELD */
A68_404  SUEBTRN;  /* OPERATORS - istruct -> vector */
A68_360 * TUEBTRN_newtprocs;
A68_359  UUEBTRN;  /* clause result */
A68_402  VUEBTRN;  /* CALL */
A68_359  WUEBTRN;  /* avoid structure result */
A_PROC_ENTRY(transform_multimakes);
 /* line 316: */
 /* line 317: */
{ 
 /* line 318: */
 /* line 319: */
BUEBTRN.fn.fn_global = DWLATRN_null_attr;
BUEBTRN.nonlocals = A68_NIL;
ZTEBTRN.data[0] = A_UNITE(AUEBTRN,mode1,1,BUEBTRN);
 /* line 320: */
DUEBTRN.fn.fn_global = IWLATRN_null_formula;
DUEBTRN.nonlocals = A68_NIL;
ZTEBTRN.data[1] = A_UNITE(CUEBTRN,mode4,4,DUEBTRN);
 /* line 321: */
FUEBTRN.fn.fn_global = NWLATRN_null_type;
FUEBTRN.nonlocals = A68_NIL;
ZTEBTRN.data[2] = A_UNITE(EUEBTRN,mode10,10,FUEBTRN);
 /* line 322: */
IUEBTRN.fn.fn_global = MKEBTRN_fnbody_multimakes;
IUEBTRN.nonlocals = A68_NIL;
HUEBTRN = IUEBTRN ;
ZTEBTRN.data[3] = A_UNITE(GUEBTRN,mode37,37,HUEBTRN);
A_CLOSURE( LUEBTRN_anonymous, MUEBTRN_anonymous, NUEBTRN_anonymous );
(( NUEBTRN_anonymous * ) ( LUEBTRN_anonymous.nonlocals )) -> Closure = Closure;
(( NUEBTRN_anonymous * ) ( LUEBTRN_anonymous.nonlocals )) -> Options = Options;
(( NUEBTRN_anonymous * ) ( LUEBTRN_anonymous.nonlocals )) -> Msg = Msg;
RUEBTRN = LUEBTRN_anonymous ;
ZTEBTRN.data[4] = A_UNITE(QUEBTRN,mode41,41,RUEBTRN);
TUEBTRN_newtprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HISVEC(SUEBTRN,ZTEBTRN,5,A68_405 ));
 /* line 325: */
 /* line 326: */
VUEBTRN = (*(&(AWLATRN_nulltprocs->Closure))) ;
A_CALLPROC(VUEBTRN,(Closure, TUEBTRN_newtprocs, Msg, &WUEBTRN),(Closure, TUEBTRN_newtprocs, Msg, &WUEBTRN,(VUEBTRN).nonlocals));
UUEBTRN = WUEBTRN;
} 
A_PROC_EXIT(transform_multimakes);
*ReturnedValue = (UUEBTRN);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void YJEBTRN(void)   /* initialise DECS multimakes */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/multimakes.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/ostools/assoc/mfiles/options.m","./mfiles/transformprocs.m","./mfiles/modeprocs.m","./mfiles/assmodes.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_46  IKEBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
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
A_config.source_file = "/import/hazel/home/export/model/ella/transform/assoc/./a68files/multimakes.a68";
A_config.translation_time = "Tue Apr  4 10:05:50 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "XJEBTRN (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:05:50 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS multimakes);
UEAALIB_a68config(LGAALIB_configinfo, CKEBTRN);
 /* line 52: */
 /* line 54: */
 /* line 55: */
JKEBTRN_multimakes_options = A_HVEC(IKEBTRN,HKEBTRN,A68_VC );
 /* line 58: */
 /* line 64: */
 /* line 313: */
 /* line 328: */
 /* line 329: */
 /* line 330: */
/*SKIP*/;
A_PROC_EXIT(DECS multimakes);
} 
#undef NL
/* end of translation of ./a68files/multimakes.a68 */
