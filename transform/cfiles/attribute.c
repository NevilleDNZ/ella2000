
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
/* UNAME:ORGBTRN */
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

A_PROCEDURE(A68_INT ,A68t414,(struct A68t265 *),(struct A68t265 *,void *));
typedef struct A68t414  A68_414 ;    /* PROC(REF MODE265) INT */

A_PROCEDURE(struct A68t262 *,A68t415,(A68_INT ,struct A68t265 *,struct A68t108 ),(A68_INT ,struct A68t265 *,struct A68t108 ,void *));
typedef struct A68t415  A68_415 ;    /* PROC(INT,REF MODE265,MODE108) REF MODE262 */

A_PROCEDURE(struct A68t262 *,A68t416,(struct A68t265 *),(struct A68t265 *,void *));
typedef struct A68t416  A68_416 ;    /* PROC(REF MODE265) REF MODE262 */

A_PROCEDURE(struct A68t262 **,A68t417,(struct A68t261 ,struct A68t262 **,struct A68t265 *,struct A68t108 ),(struct A68t261 ,struct A68t262 **,struct A68t265 *,struct A68t108 ,void *));
typedef struct A68t417  A68_417 ;    /* PROC(MODE261,REF REF MODE262,REF MODE265,MODE108) REF REF MODE262 */

A_PROCEDURE(A68_VOID ,A68t418,(struct A68t262 **,struct A68t265 *,struct A68t108 ),(struct A68t262 **,struct A68t265 *,struct A68t108 ,void *));
typedef struct A68t418  A68_418 ;    /* PROC(REF REF MODE262,REF MODE265,MODE108) VOID */

A_PROCEDURE(struct A68t265 *,A68t419,(void),(void *));
typedef struct A68t419  A68_419 ;    /* PROC REF MODE265 */

A_PROCEDURE(A68_INT ,A68t420,(struct A68t265 *,struct A68t108 ),(struct A68t265 *,struct A68t108 ,void *));
typedef struct A68t420  A68_420 ;    /* PROC(REF MODE265,MODE108) INT */

A_PROCEDURE(struct A68t265 *,A68t421,(struct A68t265 *,struct A68t108 ),(struct A68t265 *,struct A68t108 ,void *));
typedef struct A68t421  A68_421 ;    /* PROC(REF MODE265,MODE108) REF MODE265 */

A_PROCEDURE(A68_VOID ,A68t422,(struct A68t407 ),(struct A68t407 ,void *));
typedef struct A68t422  A68_422 ;    /* PROC(MODE407) VOID */

A_PROCEDURE(A68_VOID ,A68t423,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t423  A68_423 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t424,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t424  A68_424 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,56,A68t425);
typedef struct A68t425  A68_425 ;    /* STRUCT 56 CHAR */
#define A68_426  A68_VC 
#define A68t426 A68t26            /* FLEX VECTOR [] CHAR */
#define A68_427  A68_46 
#define A68t427 A68t46            /* FLEX VECTOR [] MODE426 */

A_PROCEDURE(A68_VOID ,A68t428,(struct A68t261 ,struct A68t265 *,struct A68t408 ,struct A68t108 ,struct A68t358 *),(struct A68t261 ,struct A68t265 *,struct A68t408 ,struct A68t108 ,struct A68t358 *,void *));
typedef struct A68t428  A68_428 ;    /* PROC(MODE261,REF MODE265,MODE408,MODE108) MODE358 */

A_PROCEDURE(A68_VOID ,A68t429,(A68_BOOL ,struct A68t257 *),(A68_BOOL ,struct A68t257 *,void *));
typedef struct A68t429  A68_429 ;    /* PROC(BOOL) MODE257 */

A_PROCEDURE(A68_VOID ,A68t430,(A68_BOOL ,struct A68t258 *),(A68_BOOL ,struct A68t258 *,void *));
typedef struct A68t430  A68_430 ;    /* PROC(BOOL) MODE258 */

A_PROCEDURE(A68_VOID ,A68t431,(A68_BOOL ,struct A68t259 *),(A68_BOOL ,struct A68t259 *,void *));
typedef struct A68t431  A68_431 ;    /* PROC(BOOL) MODE259 */

A_PROCEDURE(A68_VOID ,A68t432,(A68_BOOL ,struct A68t260 *),(A68_BOOL ,struct A68t260 *,void *));
typedef struct A68t432  A68_432 ;    /* PROC(BOOL) MODE260 */

A_PROCEDURE(A68_VOID ,A68t433,(struct A68t206 ),(struct A68t206 ,void *));
typedef struct A68t433  A68_433 ;    /* PROC(MODE206) VOID */

A_PROCEDURE(A68_VOID ,A68t434,(struct A68t225 ),(struct A68t225 ,void *));
typedef struct A68t434  A68_434 ;    /* PROC(MODE225) VOID */
A_ISTRUCT(struct A68t405 ,2,A68t435);
typedef struct A68t435  A68_435 ;    /* STRUCT 2 MODE405 */

A_PROCEDURE(A68_VOID ,A68t436,(struct A68t265 *,struct A68t408 ,struct A68t108 ,struct A68t359 *),(struct A68t265 *,struct A68t408 ,struct A68t108 ,struct A68t359 *,void *));
typedef struct A68t436  A68_436 ;    /* PROC(REF MODE265,MODE408,MODE108) MODE359 */

A_PROCEDURE(A68_VOID ,A68t437,(struct A68t261 ),(struct A68t261 ,void *));
typedef struct A68t437  A68_437 ;    /* PROC(MODE261) VOID */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from closureprocs --- */
extern A68_VOID  RNCATRN_free_outers(struct A68t262 **,struct A68t265 *,struct A68t108 );
extern A68_265 * DPCATRN_copy_closure(struct A68t265 *,struct A68t108 );
/* --- End of imports from closureprocs --- */


/* --- Imports from options --- */
/* --- End of imports from options --- */


/* --- Imports from transformprocs --- */
extern A68_360 * THJATRN_make_newtprocs(struct A68t360 *,struct A68t404 );
extern A68_360 * AWLATRN_nulltprocs;
/* --- End of imports from transformprocs --- */


/* --- Imports from modeprocs --- */
/* --- End of imports from modeprocs --- */


/* --- Imports from assmodes --- */
extern A68_224 * QAAATRN_nilsequence;
extern A68_205 * SAAATRN_nilseries;
extern A68_262 * HBAATRN_nilouters;
extern A68_256  MCAATRN_nullattrdecs;
extern A68_142 * OEAATRN_makefname(A68_INT );
extern A68_155 * IFAATRN_maketname(A68_INT );
extern A68_170 * CGAATRN_makecname(A68_INT );
extern A68_207 * LHAATRN_makefnname(A68_INT );
extern A68_130 * UDAATRN_makeattrname(A68_INT );
extern A68_134  ZHAATRN_attrnull;
#define RKAATRN_outerattr 1
/* --- End of imports from assmodes --- */


/* --- Imports from messageproc --- */
/* --- End of imports from messageproc --- */


/* --- Imports from basics --- */
/* --- End of imports from basics --- */


/* --- Imports from putstrings --- */
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void SKCATRN(void);   /* closureprocs */
extern void BAAAOST(void);   /* options */
extern void IHJATRN(void);   /* transformprocs */
extern void HNMATRN(void);   /* modeprocs */
extern void BAAATRN(void);   /* assmodes */
extern void JFAAOSI(void);   /* messageproc */
extern void JSCAOST(void);   /* basics */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_425   SRGBTRN = {"$Id: attribute.a68,v 34.2 1995/03/29 13:02:48 ella Exp $"}; 
A_GISVEC(A68_VC ,TRGBTRN,SRGBTRN,56)
A68_46  GSGBTRN_attribute_options;
typedef struct   /* env of non-global proc */
{
A68_257 * USGBTRN_ints;
A68_BOOL * PSGBTRN_ic;
A68_258 * VSGBTRN_types;
A68_BOOL * QSGBTRN_tc;
A68_259 * WSGBTRN_consts;
A68_BOOL * RSGBTRN_cc;
A68_260 * XSGBTRN_fns;
A68_BOOL * SSGBTRN_fc;
} CTGBTRN_declaration;
typedef struct   /* env of non-global proc */
{
A68_383  ATGBTRN_declaration;
} BWGBTRN_unit_proc;
typedef struct   /* env of non-global proc */
{
A68_BOOL * EBHBTRN_changed;
A68_265 ** FBHBTRN_new;
A68_108  Msg;
A68_262 *** GBHBTRN_newptr;
} JBHBTRN_change_closure;
typedef struct   /* env of non-global proc */
{
A68_265 * Closure;
A68_408  Options;
A68_108  Msg;
A68_BOOL * EBHBTRN_changed;
A68_407  HBHBTRN_change_closure;
A68_262 *** GBHBTRN_newptr;
} OBHBTRN_update_outer;
typedef struct   /* env of non-global proc */
{
A68_257 * USGBTRN_ints;
} OTGBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_258 * VSGBTRN_types;
} DUGBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_259 * WSGBTRN_consts;
} SUGBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_260 * XSGBTRN_fns;
} HVGBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_BOOL * MWGBTRN_uschanged;
A68_199 * IWGBTRN_useries;
A68_205 ** JWGBTRN_new_body;
A68_INT * NWGBTRN_uscount;
A68_205 *** LWGBTRN_ustail;
} QWGBTRN_copy_series;
typedef struct   /* env of non-global proc */
{
A68_407  OWGBTRN_copy_series;
A68_205 *** LWGBTRN_ustail;
} ZWGBTRN_addustep;
typedef struct   /* env of non-global proc */
{
A68_BOOL * HYGBTRN_seqchanged;
A68_198 * DYGBTRN_usequence;
A68_224 ** EYGBTRN_new_seqbody;
A68_INT * IYGBTRN_seqcount;
A68_224 *** GYGBTRN_seqtail;
} LYGBTRN_copy_sequence;
typedef struct   /* env of non-global proc */
{
A68_407  JYGBTRN_copy_sequence;
A68_224 *** GYGBTRN_seqtail;
} UYGBTRN_addseqstep;
typedef struct   /* env of non-global proc */
{
A68_265 * Closure;
A68_408  Options;
A68_108  Msg;
} UBHBTRN_outer_proc;

A_STATIC A68_VOID  VRGBTRN_generator(A68_BOOL  URGBTRN_anonymous, A68_46  *ReturnedValue);

A_STATIC A68_VOID  ZRGBTRN_generator(A68_BOOL  YRGBTRN_anonymous, A68_VC  *ReturnedValue);

A68_VOID  MSGBTRN_outer_attribute(A68_261  Outer, A68_265 * Closure, A68_408  Options, A68_108  Msg, A68_358  *ReturnedValue);

A_STATIC A68_VOID  BTGBTRN_declaration(A68_237  Dec, A68_360 * Tprocs, A68_340  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NTGBTRN_generator(A68_BOOL  LTGBTRN_anonymous, A68_257  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CUGBTRN_generator(A68_BOOL  AUGBTRN_anonymous, A68_258  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RUGBTRN_generator(A68_BOOL  PUGBTRN_anonymous, A68_259  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GVGBTRN_generator(A68_BOOL  EVGBTRN_anonymous, A68_260  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RVGBTRN_attr_proc(A68_129  A, A68_360 * Tprocs, A68_318  *ReturnedValue);

A_STATIC A68_VOID  AWGBTRN_unit_proc(A68_176  U, A68_360 * Tprocs, A68_336  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PWGBTRN_copy_series(void *NonLocals);

A_STATIC A68_VOID  YWGBTRN_addustep(A68_206  Step, void *NonLocals);

A_STATIC A68_VOID  KYGBTRN_copy_sequence(void *NonLocals);

A_STATIC A68_VOID  TYGBTRN_addseqstep(A68_225  Step, void *NonLocals);

A68_VOID  DBHBTRN_transform_attribute(A68_265 * Closure, A68_408  Options, A68_108  Msg, A68_359  *ReturnedValue);

A_STATIC A68_VOID  IBHBTRN_change_closure(void *NonLocals);

A_STATIC A68_VOID  NBHBTRN_update_outer(A68_261  Outer, void *NonLocals);

A_STATIC A68_VOID  TBHBTRN_outer_proc(A68_261  O, A68_360 * Tprocs, A68_358  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NTGBTRN_generator(A68_BOOL  LTGBTRN_anonymous, A68_257  *ReturnedValue, void *NonLocals)
#define NL(x) (((OTGBTRN_generator *)NonLocals)->x)
{ 
A68_257  PTGBTRN;  /* clause result */
A68_257  QTGBTRN;  /* OPERATORS - dynamic generator */
{ 
QTGBTRN.upb = (*NL(USGBTRN_ints)).upb ;
( LTGBTRN_anonymous? A_VLOC(A68_151 *,QTGBTRN): A_VHEAP(A68_151 *,QTGBTRN) );
PTGBTRN = QTGBTRN;
} 
*ReturnedValue = (PTGBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  CUGBTRN_generator(A68_BOOL  AUGBTRN_anonymous, A68_258  *ReturnedValue, void *NonLocals)
#define NL(x) (((DUGBTRN_generator *)NonLocals)->x)
{ 
A68_258  EUGBTRN;  /* clause result */
A68_258  FUGBTRN;  /* OPERATORS - dynamic generator */
{ 
 /* line 86: */
FUGBTRN.upb = (*NL(VSGBTRN_types)).upb ;
( AUGBTRN_anonymous? A_VLOC(A68_169 *,FUGBTRN): A_VHEAP(A68_169 *,FUGBTRN) );
EUGBTRN = FUGBTRN;
} 
*ReturnedValue = (EUGBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  RUGBTRN_generator(A68_BOOL  PUGBTRN_anonymous, A68_259  *ReturnedValue, void *NonLocals)
#define NL(x) (((SUGBTRN_generator *)NonLocals)->x)
{ 
A68_259  TUGBTRN;  /* clause result */
A68_259  UUGBTRN;  /* OPERATORS - dynamic generator */
{ 
 /* line 102: */
UUGBTRN.upb = (*NL(WSGBTRN_consts)).upb ;
( PUGBTRN_anonymous? A_VLOC(A68_175 *,UUGBTRN): A_VHEAP(A68_175 *,UUGBTRN) );
TUGBTRN = UUGBTRN;
} 
*ReturnedValue = (TUGBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  GVGBTRN_generator(A68_BOOL  EVGBTRN_anonymous, A68_260  *ReturnedValue, void *NonLocals)
#define NL(x) (((HVGBTRN_generator *)NonLocals)->x)
{ 
A68_260  IVGBTRN;  /* clause result */
A68_260  JVGBTRN;  /* OPERATORS - dynamic generator */
{ 
JVGBTRN.upb = (*NL(XSGBTRN_fns)).upb ;
( EVGBTRN_anonymous? A_VLOC(A68_252 *,JVGBTRN): A_VHEAP(A68_252 *,JVGBTRN) );
IVGBTRN = JVGBTRN;
} 
*ReturnedValue = (IVGBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  PWGBTRN_copy_series(void *NonLocals)
#define NL(x) (((QWGBTRN_copy_series *)NonLocals)->x)
{ 
A68_205 * RWGBTRN_oldus;
A68_INT  SWGBTRN;  /* to part of loop */
A68_INT  TWGBTRN;  /* loop control */
A68_205  UWGBTRN;  /* collateral clause result */
A68_205 * VWGBTRN;  /* YIELD */
A_PROC_ENTRY(copy_series);
 /* line 145: */
if ( !(*NL(MWGBTRN_uschanged)) )
{ 
RWGBTRN_oldus = (*(&(NL(IWGBTRN_useries)->Body)));
 /* line 147: */
(*NL(JWGBTRN_new_body)) = SAAATRN_nilseries;
 /* line 148: */
 /* line 149: */
SWGBTRN = (*NL(NWGBTRN_uscount));
for ( TWGBTRN = 1;
TWGBTRN <= SWGBTRN;
TWGBTRN += 1 )
{ 
 /* line 150: */
 /* line 151: */
UWGBTRN.Step = (*(&(RWGBTRN_oldus->Step)));
UWGBTRN.Rest = SAAATRN_nilseries;
VWGBTRN = A_HEAP(A68_205 ) ;
(*VWGBTRN) = UWGBTRN ;
(**NL(LWGBTRN_ustail)) = VWGBTRN;
 /* line 152: */
(*NL(LWGBTRN_ustail)) = (&((**NL(LWGBTRN_ustail))->Rest));
 /* line 153: */
 /* line 154: */
RWGBTRN_oldus = (*(&(RWGBTRN_oldus->Rest)));
}
 /* line 155: */
 /* line 156: */
(*NL(MWGBTRN_uschanged)) = A68_TRUE;
} 
A_PROC_EXIT(copy_series);
return;
} 
#undef NL

A_STATIC A68_VOID  YWGBTRN_addustep(A68_206  Step, void *NonLocals)
#define NL(x) (((ZWGBTRN_addustep *)NonLocals)->x)
{ 
A68_205  AXGBTRN;  /* collateral clause result */
A68_205 * BXGBTRN;  /* YIELD */
A_PROC_ENTRY(addustep);
 /* line 159: */
 /* line 160: */
{ 
A_CALLPROC(NL(OWGBTRN_copy_series),(),((NL(OWGBTRN_copy_series)).nonlocals));
 /* line 161: */
AXGBTRN.Step = Step;
AXGBTRN.Rest = SAAATRN_nilseries;
BXGBTRN = A_HEAP(A68_205 ) ;
(*BXGBTRN) = AXGBTRN ;
(**NL(LWGBTRN_ustail)) = BXGBTRN;
 /* line 162: */
 /* line 163: */
(*NL(LWGBTRN_ustail)) = (&((**NL(LWGBTRN_ustail))->Rest));
} 
A_PROC_EXIT(addustep);
return;
} 
#undef NL

A_STATIC A68_VOID  KYGBTRN_copy_sequence(void *NonLocals)
#define NL(x) (((LYGBTRN_copy_sequence *)NonLocals)->x)
{ 
A68_224 * MYGBTRN_oldseq;
A68_INT  NYGBTRN;  /* to part of loop */
A68_INT  OYGBTRN;  /* loop control */
A68_224  PYGBTRN;  /* collateral clause result */
A68_224 * QYGBTRN;  /* YIELD */
A_PROC_ENTRY(copy_sequence);
 /* line 197: */
if ( !(*NL(HYGBTRN_seqchanged)) )
{ 
MYGBTRN_oldseq = (*(&(NL(DYGBTRN_usequence)->Body)));
 /* line 199: */
(*NL(EYGBTRN_new_seqbody)) = QAAATRN_nilsequence;
 /* line 200: */
 /* line 201: */
NYGBTRN = (*NL(IYGBTRN_seqcount));
for ( OYGBTRN = 1;
OYGBTRN <= NYGBTRN;
OYGBTRN += 1 )
{ 
 /* line 202: */
 /* line 203: */
PYGBTRN.Step = (*(&(MYGBTRN_oldseq->Step)));
PYGBTRN.Rest = QAAATRN_nilsequence;
QYGBTRN = A_HEAP(A68_224 ) ;
(*QYGBTRN) = PYGBTRN ;
(**NL(GYGBTRN_seqtail)) = QYGBTRN;
 /* line 204: */
(*NL(GYGBTRN_seqtail)) = (&((**NL(GYGBTRN_seqtail))->Rest));
 /* line 205: */
 /* line 206: */
MYGBTRN_oldseq = (*(&(MYGBTRN_oldseq->Rest)));
}
 /* line 207: */
 /* line 208: */
(*NL(HYGBTRN_seqchanged)) = A68_TRUE;
} 
A_PROC_EXIT(copy_sequence);
return;
} 
#undef NL

A_STATIC A68_VOID  TYGBTRN_addseqstep(A68_225  Step, void *NonLocals)
#define NL(x) (((UYGBTRN_addseqstep *)NonLocals)->x)
{ 
A68_224  VYGBTRN;  /* collateral clause result */
A68_224 * WYGBTRN;  /* YIELD */
A_PROC_ENTRY(addseqstep);
 /* line 211: */
 /* line 212: */
{ 
A_CALLPROC(NL(JYGBTRN_copy_sequence),(),((NL(JYGBTRN_copy_sequence)).nonlocals));
 /* line 213: */
VYGBTRN.Step = Step;
VYGBTRN.Rest = QAAATRN_nilsequence;
WYGBTRN = A_HEAP(A68_224 ) ;
(*WYGBTRN) = VYGBTRN ;
(**NL(GYGBTRN_seqtail)) = WYGBTRN;
 /* line 214: */
 /* line 215: */
(*NL(GYGBTRN_seqtail)) = (&((**NL(GYGBTRN_seqtail))->Rest));
} 
A_PROC_EXIT(addseqstep);
return;
} 
#undef NL

A_STATIC A68_VOID  TBHBTRN_outer_proc(A68_261  O, A68_360 * Tprocs, A68_358  *ReturnedValue, void *NonLocals)
#define NL(x) (((UBHBTRN_outer_proc *)NonLocals)->x)
{ 
A68_358  VBHBTRN;  /* clause result */
A68_358  WBHBTRN;  /* avoid structure result */
A_PROC_ENTRY(outer_proc);
 /* line 298: */
MSGBTRN_outer_attribute( O, NL(Closure), NL(Options), NL(Msg), &WBHBTRN );
VBHBTRN = WBHBTRN;
A_PROC_EXIT(outer_proc);
*ReturnedValue = (VBHBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ZRGBTRN_generator(A68_BOOL  YRGBTRN_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  ASGBTRN;  /* clause result */
A68_VC  BSGBTRN;  /* OPERATORS - dynamic generator */
{ 
BSGBTRN.upb = 0 ;
( YRGBTRN_anonymous? A_VLOC(A68_CHAR ,BSGBTRN): A_VHEAP(A68_CHAR ,BSGBTRN) );
ASGBTRN = BSGBTRN;
} 
*ReturnedValue = (ASGBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  BTGBTRN_declaration(A68_237  Dec, A68_360 * Tprocs, A68_340  *ReturnedValue, void *NonLocals)
#define NL(x) (((CTGBTRN_declaration *)NonLocals)->x)
{ 
A68_237  DTGBTRN;  /* united object - for case conformity */
A68_130  ETGBTRN_ano;
A68_142  FTGBTRN_ino;
A68_INT  GTGBTRN;  /* YIELD */
A68_151 * HTGBTRN_idec;
A68_366  ITGBTRN;  /* CALL */
A68_323  JTGBTRN;  /* avoid structure result */
A68_323  KTGBTRN_idecc;
A68_429  MTGBTRN_generator;   /* proc value of non-global proc */
A68_257  RTGBTRN;  /* avoid structure result */
A68_INT  STGBTRN;  /* YIELD */
A68_151 ** TTGBTRN;  /* YIELD */
A68_155  UTGBTRN_tno;
A68_INT  VTGBTRN;  /* YIELD */
A68_169 * WTGBTRN_tdec;
A68_374  XTGBTRN;  /* CALL */
A68_331  YTGBTRN;  /* avoid structure result */
A68_331  ZTGBTRN_tdecc;
A68_430  BUGBTRN_generator;   /* proc value of non-global proc */
A68_258  GUGBTRN;  /* avoid structure result */
A68_INT  HUGBTRN;  /* YIELD */
A68_169 ** IUGBTRN;  /* YIELD */
A68_170  JUGBTRN_cno;
A68_INT  KUGBTRN;  /* YIELD */
A68_175 * LUGBTRN_cdec;
A68_375  MUGBTRN;  /* CALL */
A68_332  NUGBTRN;  /* avoid structure result */
A68_332  OUGBTRN_cdecc;
A68_431  QUGBTRN_generator;   /* proc value of non-global proc */
A68_259  VUGBTRN;  /* avoid structure result */
A68_INT  WUGBTRN;  /* YIELD */
A68_175 ** XUGBTRN;  /* YIELD */
A68_207  YUGBTRN_fno;
A68_INT  ZUGBTRN;  /* YIELD */
A68_252 * AVGBTRN_fdec;
A68_400  BVGBTRN;  /* CALL */
A68_357  CVGBTRN;  /* avoid structure result */
A68_357  DVGBTRN_fdecc;
A68_432  FVGBTRN_generator;   /* proc value of non-global proc */
A68_260  KVGBTRN;  /* avoid structure result */
A68_INT  LVGBTRN;  /* YIELD */
A68_252 ** MVGBTRN;  /* YIELD */
A68_340  NVGBTRN;  /* collateral clause result */
A68_340  OVGBTRN;  /* clause result */
A_PROC_ENTRY(declaration);
 /* line 58: */
 /* line 59: */
{ 
 /* line 60: */
DTGBTRN = Dec ;
switch ( DTGBTRN.mode )
{ 
case 1: /* STRUCT(INT)  */
ETGBTRN_ano = (DTGBTRN.data.mode1);
 /* line 61: */
 /* line 62: */
/*SKIP*/;
break;
case 2: /* STRUCT(INT)  */
FTGBTRN_ino = (DTGBTRN.data.mode2);
 /* line 63: */
{ 
 /* line 64: */
if ( (FTGBTRN_ino.Intno>0) )
{ 
GTGBTRN = FTGBTRN_ino.Intno ;
HTGBTRN_idec = (*(&A_VINDEX((*NL(USGBTRN_ints)),GTGBTRN)));
 /* line 65: */
ITGBTRN = (*(&(Tprocs->Intdec))) ;
A_CALLPROC(ITGBTRN,(HTGBTRN_idec, Tprocs, &JTGBTRN),(HTGBTRN_idec, Tprocs, &JTGBTRN,(ITGBTRN).nonlocals));
KTGBTRN_idecc = JTGBTRN;
 /* line 66: */
 /* line 67: */
if ( KTGBTRN_idecc.C )
{ 
 /* line 68: */
if ( (*NL(PSGBTRN_ic)) )
{ 
 /* line 69: */
(*HTGBTRN_idec) = (*KTGBTRN_idecc.I);
} 
else
{ 
(*NL(PSGBTRN_ic)) = A68_TRUE;
 /* line 70: */
A_CLOSURE( MTGBTRN_generator, NTGBTRN_generator, OTGBTRN_generator );
(( OTGBTRN_generator * ) ( MTGBTRN_generator.nonlocals )) -> USGBTRN_ints = NL(USGBTRN_ints);
A_CALLPROC(MTGBTRN_generator,(A68_FALSE, &RTGBTRN),(A68_FALSE, &RTGBTRN,(MTGBTRN_generator).nonlocals));
A_VASSIGN2((*NL(USGBTRN_ints)),RTGBTRN,A68_151 *) ;
(*NL(USGBTRN_ints)) = RTGBTRN;
 /* line 71: */
 /* line 72: */
 /* line 73: */
 /* line 74: */
 /* line 75: */
 /* line 77: */
STGBTRN = FTGBTRN_ino.Intno ;
TTGBTRN = (&A_VINDEX((*NL(USGBTRN_ints)),STGBTRN)) ;
(*TTGBTRN) = KTGBTRN_idecc.I;
} 
} 
} 
} 
break;
case 3: /* STRUCT(INT)  */
UTGBTRN_tno = (DTGBTRN.data.mode3);
 /* line 78: */
{ 
 /* line 79: */
if ( (UTGBTRN_tno.Typeno>0) )
{ 
VTGBTRN = UTGBTRN_tno.Typeno ;
WTGBTRN_tdec = (*(&A_VINDEX((*NL(VSGBTRN_types)),VTGBTRN)));
 /* line 80: */
XTGBTRN = (*(&(Tprocs->Typedec))) ;
A_CALLPROC(XTGBTRN,(WTGBTRN_tdec, Tprocs, &YTGBTRN),(WTGBTRN_tdec, Tprocs, &YTGBTRN,(XTGBTRN).nonlocals));
ZTGBTRN_tdecc = YTGBTRN;
 /* line 81: */
 /* line 82: */
if ( ZTGBTRN_tdecc.C )
{ 
 /* line 83: */
if ( (*NL(QSGBTRN_tc)) )
{ 
 /* line 84: */
(*WTGBTRN_tdec) = (*ZTGBTRN_tdecc.T);
} 
else
{ 
(*NL(QSGBTRN_tc)) = A68_TRUE;
 /* line 85: */
A_CLOSURE( BUGBTRN_generator, CUGBTRN_generator, DUGBTRN_generator );
(( DUGBTRN_generator * ) ( BUGBTRN_generator.nonlocals )) -> VSGBTRN_types = NL(VSGBTRN_types);
A_CALLPROC(BUGBTRN_generator,(A68_FALSE, &GUGBTRN),(A68_FALSE, &GUGBTRN,(BUGBTRN_generator).nonlocals));
A_VASSIGN2((*NL(VSGBTRN_types)),GUGBTRN,A68_169 *) ;
(*NL(VSGBTRN_types)) = GUGBTRN;
 /* line 87: */
 /* line 88: */
 /* line 89: */
 /* line 90: */
 /* line 91: */
 /* line 93: */
HUGBTRN = UTGBTRN_tno.Typeno ;
IUGBTRN = (&A_VINDEX((*NL(VSGBTRN_types)),HUGBTRN)) ;
(*IUGBTRN) = ZTGBTRN_tdecc.T;
} 
} 
} 
} 
break;
case 4: /* STRUCT(INT)  */
JUGBTRN_cno = (DTGBTRN.data.mode4);
 /* line 94: */
{ 
 /* line 95: */
if ( (JUGBTRN_cno.Constno>0) )
{ 
KUGBTRN = JUGBTRN_cno.Constno ;
LUGBTRN_cdec = (*(&A_VINDEX((*NL(WSGBTRN_consts)),KUGBTRN)));
 /* line 96: */
MUGBTRN = (*(&(Tprocs->Constdec))) ;
A_CALLPROC(MUGBTRN,(LUGBTRN_cdec, Tprocs, &NUGBTRN),(LUGBTRN_cdec, Tprocs, &NUGBTRN,(MUGBTRN).nonlocals));
OUGBTRN_cdecc = NUGBTRN;
 /* line 97: */
 /* line 98: */
if ( OUGBTRN_cdecc.C )
{ 
 /* line 99: */
if ( (*NL(RSGBTRN_cc)) )
{ 
 /* line 100: */
(*LUGBTRN_cdec) = (*OUGBTRN_cdecc.Co);
} 
else
{ 
(*NL(RSGBTRN_cc)) = A68_TRUE;
 /* line 101: */
A_CLOSURE( QUGBTRN_generator, RUGBTRN_generator, SUGBTRN_generator );
(( SUGBTRN_generator * ) ( QUGBTRN_generator.nonlocals )) -> WSGBTRN_consts = NL(WSGBTRN_consts);
A_CALLPROC(QUGBTRN_generator,(A68_FALSE, &VUGBTRN),(A68_FALSE, &VUGBTRN,(QUGBTRN_generator).nonlocals));
A_VASSIGN2((*NL(WSGBTRN_consts)),VUGBTRN,A68_175 *) ;
(*NL(WSGBTRN_consts)) = VUGBTRN;
 /* line 103: */
 /* line 104: */
 /* line 105: */
 /* line 106: */
 /* line 107: */
 /* line 109: */
WUGBTRN = JUGBTRN_cno.Constno ;
XUGBTRN = (&A_VINDEX((*NL(WSGBTRN_consts)),WUGBTRN)) ;
(*XUGBTRN) = OUGBTRN_cdecc.Co;
} 
} 
} 
} 
break;
case 5: /* STRUCT(INT)  */
YUGBTRN_fno = (DTGBTRN.data.mode5);
 /* line 110: */
{ 
 /* line 111: */
if ( (YUGBTRN_fno.Fnno>0) )
{ 
ZUGBTRN = YUGBTRN_fno.Fnno ;
AVGBTRN_fdec = (*(&A_VINDEX((*NL(XSGBTRN_fns)),ZUGBTRN)));
 /* line 112: */
BVGBTRN = (*(&(Tprocs->Fndec))) ;
A_CALLPROC(BVGBTRN,(AVGBTRN_fdec, Tprocs, &CVGBTRN),(AVGBTRN_fdec, Tprocs, &CVGBTRN,(BVGBTRN).nonlocals));
DVGBTRN_fdecc = CVGBTRN;
 /* line 113: */
 /* line 114: */
if ( DVGBTRN_fdecc.C )
{ 
 /* line 115: */
if ( (*NL(SSGBTRN_fc)) )
{ 
 /* line 116: */
(*AVGBTRN_fdec) = (*DVGBTRN_fdecc.F);
} 
else
{ 
(*NL(SSGBTRN_fc)) = A68_TRUE;
 /* line 117: */
A_CLOSURE( FVGBTRN_generator, GVGBTRN_generator, HVGBTRN_generator );
(( HVGBTRN_generator * ) ( FVGBTRN_generator.nonlocals )) -> XSGBTRN_fns = NL(XSGBTRN_fns);
A_CALLPROC(FVGBTRN_generator,(A68_FALSE, &KVGBTRN),(A68_FALSE, &KVGBTRN,(FVGBTRN_generator).nonlocals));
A_VASSIGN2((*NL(XSGBTRN_fns)),KVGBTRN,A68_252 *) ;
(*NL(XSGBTRN_fns)) = KVGBTRN;
 /* line 118: */
 /* line 119: */
 /* line 120: */
 /* line 121: */
 /* line 122: */
 /* line 123: */
LVGBTRN = YUGBTRN_fno.Fnno ;
MVGBTRN = (&A_VINDEX((*NL(XSGBTRN_fns)),LVGBTRN)) ;
(*MVGBTRN) = DVGBTRN_fdecc.F;
} 
} 
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 124: */
NVGBTRN.D = Dec;
 /* line 125: */
NVGBTRN.C = A68_FALSE;
OVGBTRN = NVGBTRN;
} 
A_PROC_EXIT(declaration);
*ReturnedValue = (OVGBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  RVGBTRN_attr_proc(A68_129  A, A68_360 * Tprocs, A68_318  *ReturnedValue)
{ 
A68_129  SVGBTRN;  /* united object - for case conformity */
A68_318  TVGBTRN;  /* collateral clause result */
A68_318  UVGBTRN;  /* clause result */
A68_318  VVGBTRN;  /* collateral clause result */
A68_129  WVGBTRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(attr_proc);
 /* line 128: */
 /* line 129: */
SVGBTRN = A ;
switch ( SVGBTRN.mode )
{ 
case 5: /* REF STRUCT(INT)  */
TVGBTRN.A = A;
 /* line 130: */
 /* line 131: */
TVGBTRN.C = A68_FALSE;
UVGBTRN = TVGBTRN;
break;
default: 
VVGBTRN.A = A_UNITE(WVGBTRN,mode5,5,(&ZHAATRN_attrnull));
 /* line 132: */
VVGBTRN.C = A68_TRUE;
UVGBTRN = VVGBTRN;
break;
} 
A_PROC_EXIT(attr_proc);
*ReturnedValue = (UVGBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  AWGBTRN_unit_proc(A68_176  U, A68_360 * Tprocs, A68_336  *ReturnedValue, void *NonLocals)
#define NL(x) (((BWGBTRN_unit_proc *)NonLocals)->x)
{ 
A68_176  CWGBTRN;  /* united object - for case conformity */
A68_200 * DWGBTRN_uat;
A68_336  EWGBTRN;  /* collateral clause result */
A68_379  FWGBTRN;  /* CALL */
A68_336  GWGBTRN;  /* avoid structure result */
A68_336  HWGBTRN;  /* clause result */
A68_199 * IWGBTRN_useries;
A68_205 * JWGBTRN_new_body;
A68_205 * KWGBTRN_step;
A68_205 ** LWGBTRN_ustail;
A68_BOOL  MWGBTRN_uschanged;
A68_INT  NWGBTRN_uscount;
A68_407  OWGBTRN_copy_series;   /* proc value of non-global proc */
A68_433  XWGBTRN_addustep;   /* proc value of non-global proc */
A68_206  CXGBTRN;  /* united object - for case conformity */
A68_142  DXGBTRN_ino;
A68_237  EXGBTRN;  /* OPERATORS - mode -> union mode */
A68_340  FXGBTRN;  /* avoid structure result */
A68_155  GXGBTRN_tno;
A68_237  HXGBTRN;  /* OPERATORS - mode -> union mode */
A68_340  IXGBTRN;  /* avoid structure result */
A68_170  JXGBTRN_cno;
A68_237  KXGBTRN;  /* OPERATORS - mode -> union mode */
A68_340  LXGBTRN;  /* avoid structure result */
A68_207  MXGBTRN_fno;
A68_237  NXGBTRN;  /* OPERATORS - mode -> union mode */
A68_340  OXGBTRN;  /* avoid structure result */
A68_395  PXGBTRN;  /* CALL */
A68_352  QXGBTRN;  /* avoid structure result */
A68_352  RXGBTRN_sc;
A68_BOOL  SXGBTRN;  /* optbool result */
A68_379  TXGBTRN;  /* CALL */
A68_336  UXGBTRN;  /* avoid structure result */
A68_336  VXGBTRN_uc;
A68_BOOL  WXGBTRN;  /* optbool result */
A68_336  XXGBTRN;  /* collateral clause result */
A68_199  YXGBTRN;  /* collateral clause result */
A68_199 * ZXGBTRN;  /* YIELD */
A68_176  AYGBTRN;  /* OPERATORS - mode -> union mode */
A68_336  BYGBTRN;  /* collateral clause result */
A68_176  CYGBTRN;  /* OPERATORS - mode -> union mode */
A68_198 * DYGBTRN_usequence;
A68_224 * EYGBTRN_new_seqbody;
A68_224 * FYGBTRN_sequence;
A68_224 ** GYGBTRN_seqtail;
A68_BOOL  HYGBTRN_seqchanged;
A68_INT  IYGBTRN_seqcount;
A68_407  JYGBTRN_copy_sequence;   /* proc value of non-global proc */
A68_434  SYGBTRN_addseqstep;   /* proc value of non-global proc */
A68_225  XYGBTRN;  /* united object - for case conformity */
A68_142  YYGBTRN_ino;
A68_237  ZYGBTRN;  /* OPERATORS - mode -> union mode */
A68_340  AZGBTRN;  /* avoid structure result */
A68_155  BZGBTRN_tno;
A68_237  CZGBTRN;  /* OPERATORS - mode -> union mode */
A68_340  DZGBTRN;  /* avoid structure result */
A68_170  EZGBTRN_cno;
A68_237  FZGBTRN;  /* OPERATORS - mode -> union mode */
A68_340  GZGBTRN;  /* avoid structure result */
A68_207  HZGBTRN_fno;
A68_237  IZGBTRN;  /* OPERATORS - mode -> union mode */
A68_340  JZGBTRN;  /* avoid structure result */
A68_390  KZGBTRN;  /* CALL */
A68_347  LZGBTRN;  /* avoid structure result */
A68_347  MZGBTRN_sc;
A68_BOOL  NZGBTRN;  /* optbool result */
A68_379  OZGBTRN;  /* CALL */
A68_336  PZGBTRN;  /* avoid structure result */
A68_336  QZGBTRN_uc;
A68_BOOL  RZGBTRN;  /* optbool result */
A68_336  SZGBTRN;  /* collateral clause result */
A68_198  TZGBTRN;  /* collateral clause result */
A68_198 * UZGBTRN;  /* YIELD */
A68_176  VZGBTRN;  /* OPERATORS - mode -> union mode */
A68_336  WZGBTRN;  /* collateral clause result */
A68_176  XZGBTRN;  /* OPERATORS - mode -> union mode */
A68_379  YZGBTRN;  /* CALL */
A68_336  ZZGBTRN;  /* avoid structure result */
A_PROC_ENTRY(unit_proc);
 /* line 135: */
 /* line 136: */
CWGBTRN = U ;
switch ( CWGBTRN.mode )
{ 
case 30: /* REF STRUCT(MODE176,MODE129)  */
DWGBTRN_uat = (CWGBTRN.data.mode30);
FWGBTRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(FWGBTRN,((*(&(DWGBTRN_uat->Unit))), Tprocs, &GWGBTRN),((*(&(DWGBTRN_uat->Unit))), Tprocs, &GWGBTRN,(FWGBTRN).nonlocals));
EWGBTRN.U = GWGBTRN.U;
 /* line 137: */
EWGBTRN.C = A68_TRUE;
HWGBTRN = EWGBTRN;
break;
case 29: /* REF STRUCT(REF MODE205,MODE176)  */
IWGBTRN_useries = (CWGBTRN.data.mode29);
 /* line 138: */
{ 
JWGBTRN_new_body = (*(&(IWGBTRN_useries->Body)));
KWGBTRN_step = (*(&(IWGBTRN_useries->Body)));
 /* line 139: */
LWGBTRN_ustail = (&JWGBTRN_new_body);
 /* line 140: */
MWGBTRN_uschanged = A68_FALSE;
 /* line 141: */
NWGBTRN_uscount = 0;
 /* line 143: */
 /* line 144: */
A_CLOSURE( OWGBTRN_copy_series, PWGBTRN_copy_series, QWGBTRN_copy_series );
(( QWGBTRN_copy_series * ) ( OWGBTRN_copy_series.nonlocals )) -> MWGBTRN_uschanged = (&MWGBTRN_uschanged);
(( QWGBTRN_copy_series * ) ( OWGBTRN_copy_series.nonlocals )) -> IWGBTRN_useries = IWGBTRN_useries;
(( QWGBTRN_copy_series * ) ( OWGBTRN_copy_series.nonlocals )) -> JWGBTRN_new_body = (&JWGBTRN_new_body);
(( QWGBTRN_copy_series * ) ( OWGBTRN_copy_series.nonlocals )) -> NWGBTRN_uscount = (&NWGBTRN_uscount);
(( QWGBTRN_copy_series * ) ( OWGBTRN_copy_series.nonlocals )) -> LWGBTRN_ustail = (&LWGBTRN_ustail);
 /* line 158: */
A_CLOSURE( XWGBTRN_addustep, YWGBTRN_addustep, ZWGBTRN_addustep );
(( ZWGBTRN_addustep * ) ( XWGBTRN_addustep.nonlocals )) -> OWGBTRN_copy_series = OWGBTRN_copy_series;
(( ZWGBTRN_addustep * ) ( XWGBTRN_addustep.nonlocals )) -> LWGBTRN_ustail = (&LWGBTRN_ustail);
 /* line 165: */
for ( ;; )
{ 
 /* line 166: */
 /* line 167: */
if ( !((KWGBTRN_step!=SAAATRN_nilseries)) ) break;
 /* line 168: */
CXGBTRN = (*(&(KWGBTRN_step->Step))) ;
switch ( CXGBTRN.mode )
{ 
case 1: /* STRUCT(INT)  */
 /* line 169: */
A_CALLPROC(OWGBTRN_copy_series,(),((OWGBTRN_copy_series).nonlocals));
break;
case 2: /* STRUCT(INT)  */
DXGBTRN_ino = (CXGBTRN.data.mode2);
 /* line 170: */
A_CALLPROC(NL(ATGBTRN_declaration),(A_UNITE(EXGBTRN,mode2,2,DXGBTRN_ino), Tprocs, &FXGBTRN),(A_UNITE(EXGBTRN,mode2,2,DXGBTRN_ino), Tprocs, &FXGBTRN,(NL(ATGBTRN_declaration)).nonlocals));
FXGBTRN;
break;
case 3: /* STRUCT(INT)  */
GXGBTRN_tno = (CXGBTRN.data.mode3);
 /* line 171: */
A_CALLPROC(NL(ATGBTRN_declaration),(A_UNITE(HXGBTRN,mode3,3,GXGBTRN_tno), Tprocs, &IXGBTRN),(A_UNITE(HXGBTRN,mode3,3,GXGBTRN_tno), Tprocs, &IXGBTRN,(NL(ATGBTRN_declaration)).nonlocals));
IXGBTRN;
break;
case 4: /* STRUCT(INT)  */
JXGBTRN_cno = (CXGBTRN.data.mode4);
 /* line 172: */
A_CALLPROC(NL(ATGBTRN_declaration),(A_UNITE(KXGBTRN,mode4,4,JXGBTRN_cno), Tprocs, &LXGBTRN),(A_UNITE(KXGBTRN,mode4,4,JXGBTRN_cno), Tprocs, &LXGBTRN,(NL(ATGBTRN_declaration)).nonlocals));
LXGBTRN;
break;
case 5: /* STRUCT(INT)  */
MXGBTRN_fno = (CXGBTRN.data.mode5);
 /* line 173: */
 /* line 174: */
A_CALLPROC(NL(ATGBTRN_declaration),(A_UNITE(NXGBTRN,mode5,5,MXGBTRN_fno), Tprocs, &OXGBTRN),(A_UNITE(NXGBTRN,mode5,5,MXGBTRN_fno), Tprocs, &OXGBTRN,(NL(ATGBTRN_declaration)).nonlocals));
OXGBTRN;
break;
default: 
PXGBTRN = (*(&(Tprocs->Step))) ;
A_CALLPROC(PXGBTRN,((*(&(KWGBTRN_step->Step))), Tprocs, &QXGBTRN),((*(&(KWGBTRN_step->Step))), Tprocs, &QXGBTRN,(PXGBTRN).nonlocals));
RXGBTRN_sc = QXGBTRN;
 /* line 176: */
SXGBTRN = RXGBTRN_sc.C;
if ( ! SXGBTRN )
{SXGBTRN = MWGBTRN_uschanged;
}
if ( SXGBTRN )
{ 
 /* line 177: */
A_CALLPROC(XWGBTRN_addustep,(RXGBTRN_sc.S),(RXGBTRN_sc.S,(XWGBTRN_addustep).nonlocals));
} 
break;
} 
 /* line 178: */
NWGBTRN_uscount+=1;
 /* line 179: */
 /* line 180: */
KWGBTRN_step = (*(&(KWGBTRN_step->Rest)));
}
 /* line 181: */
TXGBTRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(TXGBTRN,((*(&(IWGBTRN_useries->Output))), Tprocs, &UXGBTRN),((*(&(IWGBTRN_useries->Output))), Tprocs, &UXGBTRN,(TXGBTRN).nonlocals));
VXGBTRN_uc = UXGBTRN;
 /* line 182: */
WXGBTRN = MWGBTRN_uschanged;
if ( ! WXGBTRN )
{WXGBTRN = VXGBTRN_uc.C;
}
 /* line 183: */
if ( WXGBTRN )
{ 
YXGBTRN.Body = JWGBTRN_new_body;
YXGBTRN.Output = VXGBTRN_uc.U;
ZXGBTRN = A_HEAP(A68_199 ) ;
(*ZXGBTRN) = YXGBTRN ;
XXGBTRN.U = A_UNITE(AYGBTRN,mode29,29,ZXGBTRN);
 /* line 184: */
 /* line 185: */
XXGBTRN.C = A68_TRUE;
HWGBTRN = XXGBTRN;
} 
else
{ 
BYGBTRN.U = A_UNITE(CYGBTRN,mode29,29,IWGBTRN_useries);
 /* line 186: */
 /* line 187: */
 /* line 188: */
BYGBTRN.C = A68_FALSE;
HWGBTRN = BYGBTRN;
} 
} 
break;
case 28: /* REF STRUCT(REF MODE224,MODE176)  */
DYGBTRN_usequence = (CWGBTRN.data.mode28);
 /* line 189: */
{ 
EYGBTRN_new_seqbody = (*(&(DYGBTRN_usequence->Body)));
 /* line 190: */
FYGBTRN_sequence = (*(&(DYGBTRN_usequence->Body)));
 /* line 191: */
GYGBTRN_seqtail = (&EYGBTRN_new_seqbody);
 /* line 192: */
HYGBTRN_seqchanged = A68_FALSE;
 /* line 193: */
IYGBTRN_seqcount = 0;
 /* line 195: */
 /* line 196: */
A_CLOSURE( JYGBTRN_copy_sequence, KYGBTRN_copy_sequence, LYGBTRN_copy_sequence );
(( LYGBTRN_copy_sequence * ) ( JYGBTRN_copy_sequence.nonlocals )) -> HYGBTRN_seqchanged = (&HYGBTRN_seqchanged);
(( LYGBTRN_copy_sequence * ) ( JYGBTRN_copy_sequence.nonlocals )) -> DYGBTRN_usequence = DYGBTRN_usequence;
(( LYGBTRN_copy_sequence * ) ( JYGBTRN_copy_sequence.nonlocals )) -> EYGBTRN_new_seqbody = (&EYGBTRN_new_seqbody);
(( LYGBTRN_copy_sequence * ) ( JYGBTRN_copy_sequence.nonlocals )) -> IYGBTRN_seqcount = (&IYGBTRN_seqcount);
(( LYGBTRN_copy_sequence * ) ( JYGBTRN_copy_sequence.nonlocals )) -> GYGBTRN_seqtail = (&GYGBTRN_seqtail);
 /* line 210: */
A_CLOSURE( SYGBTRN_addseqstep, TYGBTRN_addseqstep, UYGBTRN_addseqstep );
(( UYGBTRN_addseqstep * ) ( SYGBTRN_addseqstep.nonlocals )) -> JYGBTRN_copy_sequence = JYGBTRN_copy_sequence;
(( UYGBTRN_addseqstep * ) ( SYGBTRN_addseqstep.nonlocals )) -> GYGBTRN_seqtail = (&GYGBTRN_seqtail);
 /* line 217: */
for ( ;; )
{ 
 /* line 218: */
 /* line 219: */
if ( !((FYGBTRN_sequence!=QAAATRN_nilsequence)) ) break;
 /* line 220: */
XYGBTRN = (*(&(FYGBTRN_sequence->Step))) ;
switch ( XYGBTRN.mode )
{ 
case 1: /* STRUCT(INT)  */
 /* line 221: */
A_CALLPROC(JYGBTRN_copy_sequence,(),((JYGBTRN_copy_sequence).nonlocals));
break;
case 2: /* STRUCT(INT)  */
YYGBTRN_ino = (XYGBTRN.data.mode2);
 /* line 222: */
A_CALLPROC(NL(ATGBTRN_declaration),(A_UNITE(ZYGBTRN,mode2,2,YYGBTRN_ino), Tprocs, &AZGBTRN),(A_UNITE(ZYGBTRN,mode2,2,YYGBTRN_ino), Tprocs, &AZGBTRN,(NL(ATGBTRN_declaration)).nonlocals));
AZGBTRN;
break;
case 3: /* STRUCT(INT)  */
BZGBTRN_tno = (XYGBTRN.data.mode3);
 /* line 223: */
A_CALLPROC(NL(ATGBTRN_declaration),(A_UNITE(CZGBTRN,mode3,3,BZGBTRN_tno), Tprocs, &DZGBTRN),(A_UNITE(CZGBTRN,mode3,3,BZGBTRN_tno), Tprocs, &DZGBTRN,(NL(ATGBTRN_declaration)).nonlocals));
DZGBTRN;
break;
case 4: /* STRUCT(INT)  */
EZGBTRN_cno = (XYGBTRN.data.mode4);
 /* line 224: */
A_CALLPROC(NL(ATGBTRN_declaration),(A_UNITE(FZGBTRN,mode4,4,EZGBTRN_cno), Tprocs, &GZGBTRN),(A_UNITE(FZGBTRN,mode4,4,EZGBTRN_cno), Tprocs, &GZGBTRN,(NL(ATGBTRN_declaration)).nonlocals));
GZGBTRN;
break;
case 5: /* STRUCT(INT)  */
HZGBTRN_fno = (XYGBTRN.data.mode5);
 /* line 225: */
 /* line 226: */
A_CALLPROC(NL(ATGBTRN_declaration),(A_UNITE(IZGBTRN,mode5,5,HZGBTRN_fno), Tprocs, &JZGBTRN),(A_UNITE(IZGBTRN,mode5,5,HZGBTRN_fno), Tprocs, &JZGBTRN,(NL(ATGBTRN_declaration)).nonlocals));
JZGBTRN;
break;
default: 
KZGBTRN = (*(&(Tprocs->Seqstep))) ;
A_CALLPROC(KZGBTRN,((*(&(FYGBTRN_sequence->Step))), Tprocs, &LZGBTRN),((*(&(FYGBTRN_sequence->Step))), Tprocs, &LZGBTRN,(KZGBTRN).nonlocals));
MZGBTRN_sc = LZGBTRN;
 /* line 228: */
NZGBTRN = MZGBTRN_sc.C;
if ( ! NZGBTRN )
{NZGBTRN = HYGBTRN_seqchanged;
}
if ( NZGBTRN )
{ 
 /* line 229: */
A_CALLPROC(SYGBTRN_addseqstep,(MZGBTRN_sc.S),(MZGBTRN_sc.S,(SYGBTRN_addseqstep).nonlocals));
} 
break;
} 
 /* line 230: */
IYGBTRN_seqcount+=1;
 /* line 231: */
 /* line 232: */
FYGBTRN_sequence = (*(&(FYGBTRN_sequence->Rest)));
}
 /* line 234: */
OZGBTRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(OZGBTRN,((*(&(DYGBTRN_usequence->Output))), Tprocs, &PZGBTRN),((*(&(DYGBTRN_usequence->Output))), Tprocs, &PZGBTRN,(OZGBTRN).nonlocals));
QZGBTRN_uc = PZGBTRN;
 /* line 235: */
RZGBTRN = HYGBTRN_seqchanged;
if ( ! RZGBTRN )
{RZGBTRN = QZGBTRN_uc.C;
}
 /* line 236: */
if ( RZGBTRN )
{ 
TZGBTRN.Body = FYGBTRN_sequence;
TZGBTRN.Output = QZGBTRN_uc.U;
UZGBTRN = A_HEAP(A68_198 ) ;
(*UZGBTRN) = TZGBTRN ;
SZGBTRN.U = A_UNITE(VZGBTRN,mode28,28,UZGBTRN);
 /* line 237: */
 /* line 238: */
SZGBTRN.C = A68_TRUE;
HWGBTRN = SZGBTRN;
} 
else
{ 
WZGBTRN.U = A_UNITE(XZGBTRN,mode28,28,DYGBTRN_usequence);
 /* line 239: */
 /* line 240: */
 /* line 241: */
 /* line 242: */
WZGBTRN.C = A68_FALSE;
HWGBTRN = WZGBTRN;
} 
} 
break;
default: 
 /* line 243: */
YZGBTRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(YZGBTRN,(U, Tprocs, &ZZGBTRN),(U, Tprocs, &ZZGBTRN,(YZGBTRN).nonlocals));
HWGBTRN = ZZGBTRN;
break;
} 
A_PROC_EXIT(unit_proc);
*ReturnedValue = (HWGBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  IBHBTRN_change_closure(void *NonLocals)
#define NL(x) (((JBHBTRN_change_closure *)NonLocals)->x)
{ 
A68_INT  KBHBTRN_place;
A_PROC_ENTRY(change_closure);
{ 
 /* line 283: */
 /* line 284: */
if ( !(*NL(EBHBTRN_changed)) )
{ 
(*NL(EBHBTRN_changed)) = A68_TRUE;
 /* line 285: */
(*NL(FBHBTRN_new)) = DPCATRN_copy_closure((*NL(FBHBTRN_new)), NL(Msg));
 /* line 287: */
KBHBTRN_place = (*(&((&((**NL(GBHBTRN_newptr))->Outer))->Closureno)));
 /* line 288: */
(*NL(GBHBTRN_newptr)) = (&((*NL(FBHBTRN_new))->Outers));
 /* line 289: */
for ( ;; )
{ 
 /* line 290: */
if ( !(((*(&((&((**NL(GBHBTRN_newptr))->Outer))->Closureno)))!=KBHBTRN_place)) ) break;
(*NL(GBHBTRN_newptr)) = (&((**NL(GBHBTRN_newptr))->Rest));
}
 /* line 291: */
 /* line 292: */
} 
} 
A_PROC_EXIT(change_closure);
return;
} 
#undef NL

A_STATIC A68_VOID  NBHBTRN_update_outer(A68_261  Outer, void *NonLocals)
#define NL(x) (((OBHBTRN_update_outer *)NonLocals)->x)
{ 
A68_401  SBHBTRN_outer_proc;   /* proc value of non-global proc */
A68_405  XBHBTRN;  /* OPERATORS - mode -> union mode */
A68_401  YBHBTRN;  /* YIELD */
A68_404  ZBHBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_360 * ACHBTRN_newtprocs;
A68_401  BCHBTRN;  /* CALL */
A68_358  CCHBTRN;  /* avoid structure result */
A68_358  DCHBTRN_oc;
A68_BOOL  ECHBTRN;  /* optbool result */
A68_261  FCHBTRN;  /* collateral clause result */
A68_261 * GCHBTRN;  /* YIELD */
A_PROC_ENTRY(update_outer);
 /* line 295: */
 /* line 297: */
{ 
A_CLOSURE( SBHBTRN_outer_proc, TBHBTRN_outer_proc, UBHBTRN_outer_proc );
(( UBHBTRN_outer_proc * ) ( SBHBTRN_outer_proc.nonlocals )) -> Closure = NL(Closure);
(( UBHBTRN_outer_proc * ) ( SBHBTRN_outer_proc.nonlocals )) -> Options = NL(Options);
(( UBHBTRN_outer_proc * ) ( SBHBTRN_outer_proc.nonlocals )) -> Msg = NL(Msg);
 /* line 300: */
YBHBTRN = SBHBTRN_outer_proc ;
ACHBTRN_newtprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HVEC(ZBHBTRN,A_UNITE(XBHBTRN,mode41,41,YBHBTRN),A68_405 ));
 /* line 302: */
BCHBTRN = (*(&(ACHBTRN_newtprocs->Outer))) ;
A_CALLPROC(BCHBTRN,(Outer, ACHBTRN_newtprocs, &CCHBTRN),(Outer, ACHBTRN_newtprocs, &CCHBTRN,(BCHBTRN).nonlocals));
DCHBTRN_oc = CCHBTRN;
 /* line 304: */
ECHBTRN = DCHBTRN_oc.C;
if ( ! ECHBTRN )
{ECHBTRN = (*NL(EBHBTRN_changed));
}
 /* line 305: */
if ( ECHBTRN )
{ 
A_CALLPROC(NL(HBHBTRN_change_closure),(),((NL(HBHBTRN_change_closure)).nonlocals));
 /* line 306: */
 /* line 307: */
FCHBTRN.Closureno = Outer.Closureno;
FCHBTRN.Sort = Outer.Sort;
 /* line 308: */
FCHBTRN.Environ = DCHBTRN_oc.O.Environ;
 /* line 309: */
GCHBTRN = (&((**NL(GBHBTRN_newptr))->Outer)) ;
(*GCHBTRN) = FCHBTRN;
} 
} 
A_PROC_EXIT(update_outer);
return;
} 
#undef NL

A_STATIC A68_VOID  VRGBTRN_generator(A68_BOOL  URGBTRN_anonymous, A68_46  *ReturnedValue)
{ 
A68_46  XRGBTRN;  /* OPERATORS - dynamic generator */
A68_427  WRGBTRN_anonymous;
A68_426 * CSGBTRN_anonymous;
A68_INT  DSGBTRN;  /* forall loop counter */
A68_VC  ESGBTRN;  /* avoid structure result */
A68_46  FSGBTRN;  /* clause result */
{ 
XRGBTRN.upb = 0 ;
( URGBTRN_anonymous? A_VLOC(A68_VC ,XRGBTRN): A_VHEAP(A68_VC ,XRGBTRN) );
WRGBTRN_anonymous = XRGBTRN;
DSGBTRN = (*(&WRGBTRN_anonymous)).upb -1;
CSGBTRN_anonymous = (*(&WRGBTRN_anonymous)).data;
for (;DSGBTRN-- >= 0;
(CSGBTRN_anonymous++
) )
{
ZRGBTRN_generator( URGBTRN_anonymous, &ESGBTRN );
(*CSGBTRN_anonymous) = ESGBTRN;
}
FSGBTRN = WRGBTRN_anonymous;
} 
*ReturnedValue = (FSGBTRN);
return;
} 
#undef NL
 /* line 45: */
 /* line 46: */
 /* line 47: */

A68_VOID  MSGBTRN_outer_attribute(A68_261  Outer, A68_265 * Closure, A68_408  Options, A68_108  Msg, A68_358  *ReturnedValue)
{ 
A68_255 * NSGBTRN_env;
A68_BOOL  OSGBTRN_ac;
A68_BOOL  PSGBTRN_ic;
A68_BOOL  QSGBTRN_tc;
A68_BOOL  RSGBTRN_cc;
A68_BOOL  SSGBTRN_fc;
A68_256 * TSGBTRN_attrs;
A68_257 * USGBTRN_ints;
A68_258 * VSGBTRN_types;
A68_259 * WSGBTRN_consts;
A68_260 * XSGBTRN_fns;
A68_383  ATGBTRN_declaration;   /* proc value of non-global proc */
A68_379  ZVGBTRN_unit_proc;   /* proc value of non-global proc */
A68_435  AAHBTRN;  /* collateral clause result */
A68_405  BAHBTRN;  /* OPERATORS - mode -> union mode */
A68_361  CAHBTRN;  /* YIELD */
A68_361  DAHBTRN;  /* procedure value */
A68_405  EAHBTRN;  /* OPERATORS - mode -> union mode */
A68_379  FAHBTRN;  /* YIELD */
A68_404  GAHBTRN;  /* OPERATORS - istruct -> vector */
A68_360 * HAHBTRN_newtprocs;
A68_237  IAHBTRN;  /* clause result */
A68_237  JAHBTRN;  /* OPERATORS - mode -> union mode */
A68_130  KAHBTRN;  /* YIELD */
A68_237  LAHBTRN;  /* OPERATORS - mode -> union mode */
A68_142  MAHBTRN;  /* YIELD */
A68_237  NAHBTRN;  /* OPERATORS - mode -> union mode */
A68_155  OAHBTRN;  /* YIELD */
A68_237  PAHBTRN;  /* OPERATORS - mode -> union mode */
A68_170  QAHBTRN;  /* YIELD */
A68_237  RAHBTRN;  /* OPERATORS - mode -> union mode */
A68_207  SAHBTRN;  /* YIELD */
A68_237  TAHBTRN;  /* OPERATORS - skip to mode */
A68_237  UAHBTRN_od;
A68_340  VAHBTRN;  /* avoid structure result */
A68_BOOL  WAHBTRN;  /* optbool result */
A68_358  XAHBTRN;  /* collateral clause result */
A68_358  YAHBTRN;  /* clause result */
A68_358  ZAHBTRN;  /* collateral clause result */
A_PROC_ENTRY(outer_attribute);
 /* line 48: */
 /* line 49: */
{ 
NSGBTRN_env = (A_HEAP(A68_255 ));
(*NSGBTRN_env) = (*Outer.Environ);
 /* line 50: */
OSGBTRN_ac = A68_FALSE;
PSGBTRN_ic = A68_FALSE;
QSGBTRN_tc = A68_FALSE;
RSGBTRN_cc = A68_FALSE;
SSGBTRN_fc = A68_FALSE;
 /* line 51: */
TSGBTRN_attrs = (&(NSGBTRN_env->Attrs));
 /* line 52: */
USGBTRN_ints = (&(NSGBTRN_env->Ints));
 /* line 53: */
VSGBTRN_types = (&(NSGBTRN_env->Types));
 /* line 54: */
WSGBTRN_consts = (&(NSGBTRN_env->Consts));
 /* line 55: */
XSGBTRN_fns = (&(NSGBTRN_env->Fns));
 /* line 57: */
A_CLOSURE( ATGBTRN_declaration, BTGBTRN_declaration, CTGBTRN_declaration );
(( CTGBTRN_declaration * ) ( ATGBTRN_declaration.nonlocals )) -> USGBTRN_ints = USGBTRN_ints;
(( CTGBTRN_declaration * ) ( ATGBTRN_declaration.nonlocals )) -> PSGBTRN_ic = (&PSGBTRN_ic);
(( CTGBTRN_declaration * ) ( ATGBTRN_declaration.nonlocals )) -> VSGBTRN_types = VSGBTRN_types;
(( CTGBTRN_declaration * ) ( ATGBTRN_declaration.nonlocals )) -> QSGBTRN_tc = (&QSGBTRN_tc);
(( CTGBTRN_declaration * ) ( ATGBTRN_declaration.nonlocals )) -> WSGBTRN_consts = WSGBTRN_consts;
(( CTGBTRN_declaration * ) ( ATGBTRN_declaration.nonlocals )) -> RSGBTRN_cc = (&RSGBTRN_cc);
(( CTGBTRN_declaration * ) ( ATGBTRN_declaration.nonlocals )) -> XSGBTRN_fns = XSGBTRN_fns;
(( CTGBTRN_declaration * ) ( ATGBTRN_declaration.nonlocals )) -> SSGBTRN_fc = (&SSGBTRN_fc);
 /* line 127: */
 /* line 134: */
A_CLOSURE( ZVGBTRN_unit_proc, AWGBTRN_unit_proc, BWGBTRN_unit_proc );
(( BWGBTRN_unit_proc * ) ( ZVGBTRN_unit_proc.nonlocals )) -> ATGBTRN_declaration = ATGBTRN_declaration;
 /* line 245: */
 /* line 246: */
DAHBTRN.fn.fn_global = RVGBTRN_attr_proc;
DAHBTRN.nonlocals = A68_NIL;
CAHBTRN = DAHBTRN ;
AAHBTRN.data[0] = A_UNITE(BAHBTRN,mode1,1,CAHBTRN);
FAHBTRN = ZVGBTRN_unit_proc ;
AAHBTRN.data[1] = A_UNITE(EAHBTRN,mode19,19,FAHBTRN);
HAHBTRN_newtprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HISVEC(GAHBTRN,AAHBTRN,2,A68_405 ));
 /* line 248: */
 /* line 249: */
 /* line 250: */
switch ( Outer.Sort )
{ 
case 1: 
 /* line 251: */
KAHBTRN = (*UDAATRN_makeattrname(1)) ;
IAHBTRN = A_UNITE(JAHBTRN,mode1,1,KAHBTRN);
break;
case 2: 
 /* line 252: */
MAHBTRN = (*OEAATRN_makefname(1)) ;
IAHBTRN = A_UNITE(LAHBTRN,mode2,2,MAHBTRN);
break;
case 3: 
 /* line 253: */
OAHBTRN = (*IFAATRN_maketname(1)) ;
IAHBTRN = A_UNITE(NAHBTRN,mode3,3,OAHBTRN);
break;
case 4: 
 /* line 254: */
QAHBTRN = (*CGAATRN_makecname(1)) ;
IAHBTRN = A_UNITE(PAHBTRN,mode4,4,QAHBTRN);
break;
case 5: 
 /* line 255: */
 /* line 256: */
SAHBTRN = (*LHAATRN_makefnname(1)) ;
IAHBTRN = A_UNITE(RAHBTRN,mode5,5,SAHBTRN);
break;
default: 
IAHBTRN = TAHBTRN;
break;
} 
UAHBTRN_od = IAHBTRN;
 /* line 258: */
A_CALLPROC(ATGBTRN_declaration,(UAHBTRN_od, HAHBTRN_newtprocs, &VAHBTRN),(UAHBTRN_od, HAHBTRN_newtprocs, &VAHBTRN,(ATGBTRN_declaration).nonlocals));
VAHBTRN;
 /* line 260: */
 /* line 261: */
if ( ((*TSGBTRN_attrs).upb>0) )
{ 
OSGBTRN_ac = A68_TRUE;
 /* line 262: */
 /* line 263: */
(*TSGBTRN_attrs) = MCAATRN_nullattrdecs;
} 
 /* line 265: */
WAHBTRN = OSGBTRN_ac;
if ( ! WAHBTRN )
{WAHBTRN = PSGBTRN_ic;
}
if ( ! WAHBTRN )
{WAHBTRN = QSGBTRN_tc;
}
if ( ! WAHBTRN )
{WAHBTRN = RSGBTRN_cc;
}
 /* line 266: */
if ( ! WAHBTRN )
{WAHBTRN = SSGBTRN_fc;
}
if ( WAHBTRN )
{ 
XAHBTRN.O.Closureno = Outer.Closureno;
XAHBTRN.O.Sort = Outer.Sort;
XAHBTRN.O.Environ = NSGBTRN_env;
 /* line 267: */
XAHBTRN.C = A68_TRUE;
YAHBTRN = XAHBTRN;
} 
else
{ 
ZAHBTRN.O = Outer;
 /* line 268: */
 /* line 269: */
ZAHBTRN.C = A68_FALSE;
YAHBTRN = ZAHBTRN;
} 
} 
A_PROC_EXIT(outer_attribute);
*ReturnedValue = (YAHBTRN);
return;
} 
#undef NL
 /* line 273: */
 /* line 274: */

A68_VOID  DBHBTRN_transform_attribute(A68_265 * Closure, A68_408  Options, A68_108  Msg, A68_359  *ReturnedValue)
{ 
A68_BOOL  EBHBTRN_changed;
A68_265 * FBHBTRN_new;
A68_262 ** GBHBTRN_newptr;
A68_407  HBHBTRN_change_closure;   /* proc value of non-global proc */
A68_437  MBHBTRN_update_outer;   /* proc value of non-global proc */
A68_359  HCHBTRN;  /* collateral clause result */
A68_359  ICHBTRN;  /* clause result */
A_PROC_ENTRY(transform_attribute);
 /* line 275: */
 /* line 276: */
{ 
EBHBTRN_changed = A68_FALSE;
 /* line 277: */
FBHBTRN_new = Closure;
 /* line 278: */
GBHBTRN_newptr = (&(FBHBTRN_new->Outers));
 /* line 280: */
 /* line 281: */
 /* line 282: */
A_CLOSURE( HBHBTRN_change_closure, IBHBTRN_change_closure, JBHBTRN_change_closure );
(( JBHBTRN_change_closure * ) ( HBHBTRN_change_closure.nonlocals )) -> EBHBTRN_changed = (&EBHBTRN_changed);
(( JBHBTRN_change_closure * ) ( HBHBTRN_change_closure.nonlocals )) -> FBHBTRN_new = (&FBHBTRN_new);
(( JBHBTRN_change_closure * ) ( HBHBTRN_change_closure.nonlocals )) -> Msg = Msg;
(( JBHBTRN_change_closure * ) ( HBHBTRN_change_closure.nonlocals )) -> GBHBTRN_newptr = (&GBHBTRN_newptr);
 /* line 294: */
A_CLOSURE( MBHBTRN_update_outer, NBHBTRN_update_outer, OBHBTRN_update_outer );
(( OBHBTRN_update_outer * ) ( MBHBTRN_update_outer.nonlocals )) -> Closure = Closure;
(( OBHBTRN_update_outer * ) ( MBHBTRN_update_outer.nonlocals )) -> Options = Options;
(( OBHBTRN_update_outer * ) ( MBHBTRN_update_outer.nonlocals )) -> Msg = Msg;
(( OBHBTRN_update_outer * ) ( MBHBTRN_update_outer.nonlocals )) -> EBHBTRN_changed = (&EBHBTRN_changed);
(( OBHBTRN_update_outer * ) ( MBHBTRN_update_outer.nonlocals )) -> HBHBTRN_change_closure = HBHBTRN_change_closure;
(( OBHBTRN_update_outer * ) ( MBHBTRN_update_outer.nonlocals )) -> GBHBTRN_newptr = (&GBHBTRN_newptr);
 /* line 311: */
for ( ;; )
{ 
 /* line 312: */
 /* line 313: */
if ( !(((*GBHBTRN_newptr)!=HBAATRN_nilouters)) ) break;
 /* line 314: */
 /* line 315: */
if ( ((*(&((&((*GBHBTRN_newptr)->Outer))->Sort)))==RKAATRN_outerattr) )
{ 
A_CALLPROC(HBHBTRN_change_closure,(),((HBHBTRN_change_closure).nonlocals));
 /* line 316: */
 /* line 317: */
 /* line 318: */
RNCATRN_free_outers(GBHBTRN_newptr, FBHBTRN_new, Msg);
} 
else
{ 
 /* line 319: */
 /* line 320: */
GBHBTRN_newptr = (&((*GBHBTRN_newptr)->Rest));
} 
}
 /* line 322: */
GBHBTRN_newptr = (&(FBHBTRN_new->Outers));
 /* line 323: */
for ( ;; )
{ 
 /* line 324: */
 /* line 325: */
if ( !(((*GBHBTRN_newptr)!=HBAATRN_nilouters)) ) break;
A_CALLPROC(MBHBTRN_update_outer,((*(&((*GBHBTRN_newptr)->Outer)))),((*(&((*GBHBTRN_newptr)->Outer))),(MBHBTRN_update_outer).nonlocals));
 /* line 326: */
 /* line 327: */
GBHBTRN_newptr = (&((*GBHBTRN_newptr)->Rest));
}
 /* line 328: */
HCHBTRN.Cl = FBHBTRN_new;
 /* line 329: */
HCHBTRN.C = EBHBTRN_changed;
ICHBTRN = HCHBTRN;
} 
A_PROC_EXIT(transform_attribute);
*ReturnedValue = (ICHBTRN);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 4: */
void PRGBTRN(void)   /* initialise DECS attribute */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/attribute.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/closureprocs.m","/u/model/ella/ostools/assoc/mfiles/options.m","./mfiles/transformprocs.m","./mfiles/modeprocs.m","./mfiles/assmodes.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_46  HSGBTRN;  /* avoid structure result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
SKCATRN();   /* USE closureprocs */
BAAAOST();   /* USE options */
IHJATRN();   /* USE transformprocs */
HNMATRN();   /* USE modeprocs */
BAAATRN();   /* USE assmodes */
JFAAOSI();   /* USE messageproc */
JSCAOST();   /* USE basics */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/transform/assoc/./a68files/attribute.a68";
A_config.translation_time = "Tue Apr  4 10:07:09 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "ORGBTRN (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:07:09 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS attribute);
UEAALIB_a68config(LGAALIB_configinfo, TRGBTRN);
 /* line 42: */
VRGBTRN_generator( A68_TRUE, &HSGBTRN );
GSGBTRN_attribute_options = HSGBTRN;
 /* line 44: */
 /* line 272: */
 /* line 331: */
 /* line 332: */
 /* line 333: */
/*SKIP*/;
A_PROC_EXIT(DECS attribute);
} 
#undef NL
/* end of translation of ./a68files/attribute.a68 */
