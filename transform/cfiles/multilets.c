
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
/* UNAME:WUEBTRN */
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
A_ISTRUCT(A68_CHAR ,56,A68t417);
typedef struct A68t417  A68_417 ;    /* STRUCT 56 CHAR */
#define A68_418  A68_VC 
#define A68t418 A68t26            /* FLEX VECTOR [] CHAR */
#define A68_419  A68_46 
#define A68t419 A68t46            /* FLEX VECTOR [] MODE418 */
A_ISTRUCT(A68_CHAR ,3,A68t420);
typedef struct A68t420  A68_420 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t421);
typedef struct A68t421  A68_421 ;    /* STRUCT 2 MODE52 */

A_PROCEDURE(A68_VOID ,A68t422,(struct A68t261 ,struct A68t265 *,struct A68t408 ,struct A68t108 ,struct A68t358 *),(struct A68t261 ,struct A68t265 *,struct A68t408 ,struct A68t108 ,struct A68t358 *,void *));
typedef struct A68t422  A68_422 ;    /* PROC(MODE261,REF MODE265,MODE408,MODE108) MODE358 */

A_PROCEDURE(A68_BOOL ,A68t423,(struct A68t176 ),(struct A68t176 ,void *));
typedef struct A68t423  A68_423 ;    /* PROC(MODE176) BOOL */

A_PROCEDURE(A68_VOID ,A68t424,(struct A68t199 *,struct A68t360 *,struct A68t336 *),(struct A68t199 *,struct A68t360 *,struct A68t336 *,void *));
typedef struct A68t424  A68_424 ;    /* PROC(REF MODE199,REF MODE360) MODE336 */

A_PROCEDURE(A68_VOID ,A68t425,(struct A68t205 *),(struct A68t205 *,void *));
typedef struct A68t425  A68_425 ;    /* PROC(REF MODE205) VOID */

A_PROCEDURE(A68_VOID ,A68t426,(A68_INT ,struct A68t176 *),(A68_INT ,struct A68t176 *,void *));
typedef struct A68t426  A68_426 ;    /* PROC(INT) MODE176 */

A_PROCEDURE(A68_VOID ,A68t427,(A68_BOOL ,struct A68t426 ),(A68_BOOL ,struct A68t426 ,void *));
typedef struct A68t427  A68_427 ;    /* PROC(BOOL,MODE426) VOID */

A_PROCEDURE(A68_VOID ,A68t428,(struct A68t176 ,A68_BOOL ),(struct A68t176 ,A68_BOOL ,void *));
typedef struct A68t428  A68_428 ;    /* PROC(MODE176,BOOL) VOID */
A_ISTRUCT(struct A68t405 ,5,A68t429);
typedef struct A68t429  A68_429 ;    /* STRUCT 5 MODE405 */

A_PROCEDURE(A68_VOID ,A68t430,(A68_BOOL ,struct A68t254 *),(A68_BOOL ,struct A68t254 *,void *));
typedef struct A68t430  A68_430 ;    /* PROC(BOOL) MODE254 */
A_ISTRUCT(A68_CHAR ,12,A68t431);
typedef struct A68t431  A68_431 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t432);
typedef struct A68t432  A68_432 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t433);
typedef struct A68t433  A68_433 ;    /* STRUCT 4 MODE52 */

A_PROCEDURE(A68_VOID ,A68t434,(struct A68t265 *,struct A68t408 ,struct A68t108 ,struct A68t359 *),(struct A68t265 *,struct A68t408 ,struct A68t108 ,struct A68t359 *,void *));
typedef struct A68t434  A68_434 ;    /* PROC(REF MODE265,MODE408,MODE108) MODE359 */

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
/* --- End of imports from modeprocs --- */


/* --- Imports from assmodes --- */
extern A68_VC  TTCAOST_nullid;
extern A68_157 * GAAATRN_niltstr;
extern A68_217 * NAAATRN_nilnames;
extern A68_205 * SAAATRN_nilseries;
extern A68_134  ZHAATRN_attrnull;
#define KKAATRN_usource 1
/* --- End of imports from assmodes --- */


/* --- Imports from messageproc --- */
extern A68_109  SHAAOSI_system;
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
static A68_417   AVEBTRN = {"$Id: multilets.a68,v 34.3 1995/03/29 13:03:00 ella Exp $"}; 
A_GISVEC(A68_VC ,BVEBTRN,AVEBTRN,56)
A68_46  OVEBTRN_multilets_options;
static A68_420   TVEBTRN = {"_sl"}; 
A_GISVEC(A68_VC ,UVEBTRN,TVEBTRN,3)
static A68_431   ZEFBTRN = {"max_names = "}; 
A_GISVEC(A68_VC ,AFFBTRN,ZEFBTRN,12)
static A68_432   EFFBTRN = {" new_nameno ="}; 
A_GISVEC(A68_VC ,FFFBTRN,EFFBTRN,13)
typedef struct   /* env of non-global proc */
{
A68_108  Msg;
} UWEBTRN_fndec_proc;
typedef struct   /* env of non-global proc */
{
A68_265 * Closure;
A68_408  Options;
A68_108  Msg;
} BHFBTRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_423  AXEBTRN_name_needed;
} CXEBTRN_name_needed;
typedef struct   /* env of non-global proc */
{
A68_INT * WWEBTRN_new_nameno;
A68_254 * VWEBTRN_nametypes;
A68_423  AXEBTRN_name_needed;
A68_360 * Dec_tprocs;
} MXEBTRN_useries_multi;
typedef struct   /* env of non-global proc */
{
A68_424  KXEBTRN_useries_multi;
A68_360 * Dec_tprocs;
} VCFBTRN_unit_multi;
typedef struct   /* env of non-global proc */
{
A68_BOOL * YWEBTRN_has_multi_lets;
A68_423  AXEBTRN_name_needed;
A68_INT * XWEBTRN_max_names;
} GDFBTRN_pre_pass_let;
typedef struct   /* env of non-global proc */
{
A68_INT * XWEBTRN_max_names;
} NEFBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_BOOL * RXEBTRN_changed;
A68_205 ** NXEBTRN_ss;
A68_199 * Useries;
A68_INT * QXEBTRN_num_steps;
A68_205 *** PXEBTRN_stail;
} UXEBTRN_copy_series;
typedef struct   /* env of non-global proc */
{
A68_360 * Tprocs;
A68_205 *** PXEBTRN_stail;
A68_INT * WWEBTRN_new_nameno;
A68_254 * VWEBTRN_nametypes;
A68_423  AXEBTRN_name_needed;
A68_407  SXEBTRN_copy_series;
A68_BOOL * RXEBTRN_changed;
A68_360 * Dec_tprocs;
} CYEBTRN_do_step;
typedef struct   /* env of non-global proc */
{
A68_210 * EYEBTRN_let;
A68_205 *** PXEBTRN_stail;
A68_INT * WWEBTRN_new_nameno;
A68_336  HYEBTRN_uc;
A68_254 * VWEBTRN_nametypes;
} NYEBTRN_separate;
typedef struct   /* env of non-global proc */
{
A68_427  LYEBTRN_separate;
} TZEBTRN_index_unit;
typedef struct   /* env of non-global proc */
{
A68_INT * WWEBTRN_new_nameno;
A68_427  LYEBTRN_separate;
A68_428  RZEBTRN_index_unit;
A68_423  AXEBTRN_name_needed;
A68_428  HAFBTRN_try_unit;
} JAFBTRN_try_unit;
typedef struct   /* env of non-global proc */
{
A68_176  Unit;
} XZEBTRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Need_new_name;
A_PAD_BOOL(PAD_137)
A68_INT * WWEBTRN_new_nameno;
} NAFBTRN_incr_nameno;
typedef struct   /* env of non-global proc */
{
A68_191 ** RAFBTRN_el;
} VAFBTRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_190 * YAFBTRN_urow;
} DBFBTRN_anonymous;

A_STATIC A68_VOID  DVEBTRN_generator(A68_BOOL  CVEBTRN_anonymous, A68_46  *ReturnedValue);

A_STATIC A68_VOID  HVEBTRN_generator(A68_BOOL  GVEBTRN_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  RVEBTRN_multiletsid(A68_INT  Nameno, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  DWEBTRN_fnbody_multilets(A68_248  Fbody, A68_360 * Tprocs, A68_354  *ReturnedValue);

A68_VOID  OWEBTRN_outer_multilets(A68_261  Outer, A68_265 * Closure, A68_408  Options, A68_108  Msg, A68_358  *ReturnedValue);

A_STATIC A68_VOID  TWEBTRN_fndec_proc(A68_252 * Fdec, A68_360 * Dec_tprocs, A68_357  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  BXEBTRN_name_needed(A68_176  U, void *NonLocals);

A_STATIC A68_VOID  LXEBTRN_useries_multi(A68_199 * Useries, A68_360 * Tprocs, A68_336  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  TXEBTRN_copy_series(void *NonLocals);

A_STATIC A68_VOID  BYEBTRN_do_step(A68_205 * Ss, void *NonLocals);

A_STATIC A68_VOID  MYEBTRN_separate(A68_BOOL  Need_new_name, A68_426  Get_unit, void *NonLocals);

A_STATIC A68_VOID  SZEBTRN_index_unit(A68_176  Unit, A68_BOOL  Need_new_name, void *NonLocals);

A_STATIC A68_VOID  WZEBTRN_anonymous(A68_INT  Index, A68_176  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IAFBTRN_try_unit(A68_176  U, A68_BOOL  Need_new_name, void *NonLocals);

A_STATIC A68_INT  MAFBTRN_incr_nameno(void *NonLocals);

A_STATIC A68_VOID  UAFBTRN_anonymous(A68_INT  Index, A68_176  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CBFBTRN_anonymous(A68_INT  Index, A68_176  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  UCFBTRN_unit_multi(A68_176  Unit, A68_360 * Tprocs, A68_336  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FDFBTRN_pre_pass_let(A68_210 * Let, A68_360 * Tprocs, A68_345  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MEFBTRN_generator(A68_BOOL  KEFBTRN_anonymous, A68_254  *ReturnedValue, void *NonLocals);

A68_VOID  MGFBTRN_transform_multilets(A68_265 * Closure, A68_408  Options, A68_108  Msg, A68_359  *ReturnedValue);

A_STATIC A68_VOID  AHFBTRN_anonymous(A68_261  Outer, A68_360 * Tprocs, A68_358  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WZEBTRN_anonymous(A68_INT  Index, A68_176  *ReturnedValue, void *NonLocals)
#define NL(x) (((XZEBTRN_anonymous *)NonLocals)->x)
{ 
A68_186  YZEBTRN;  /* collateral clause result */
A68_139  ZZEBTRN;  /* collateral clause result */
A68_139 * AAFBTRN;  /* YIELD */
A68_138  BAFBTRN;  /* OPERATORS - mode -> union mode */
A68_176  CAFBTRN;  /* clause result */
A68_186 * DAFBTRN;  /* YIELD */
A68_176  EAFBTRN;  /* OPERATORS - mode -> union mode */
 /* line 162: */
YZEBTRN.Unit = NL(Unit);
 /* line 163: */
ZZEBTRN.Int = Index;
ZZEBTRN.Text = TTCAOST_nullid;
 /* line 164: */
AAFBTRN = A_HEAP(A68_139 ) ;
(*AAFBTRN) = ZZEBTRN ;
YZEBTRN.Index = A_UNITE(BAFBTRN,mode1,1,AAFBTRN);
DAFBTRN = A_HEAP(A68_186 ) ;
(*DAFBTRN) = YZEBTRN ;
CAFBTRN = A_UNITE(EAFBTRN,mode16,16,DAFBTRN);
*ReturnedValue = (CAFBTRN);
return;
} 
#undef NL

A_STATIC A68_INT  MAFBTRN_incr_nameno(void *NonLocals)
#define NL(x) (((NAFBTRN_incr_nameno *)NonLocals)->x)
{ 
A68_INT  OAFBTRN;  /* clause result */
A_PROC_ENTRY(incr_nameno);
 /* line 171: */
if ( NL(Need_new_name) )
{ 
OAFBTRN = (*NL(WWEBTRN_new_nameno));
} 
else
{ 
 /* line 172: */
OAFBTRN = (*NL(WWEBTRN_new_nameno))+=1;
} 
A_PROC_EXIT(incr_nameno);
return( OAFBTRN );
} 
#undef NL

A_STATIC A68_VOID  UAFBTRN_anonymous(A68_INT  Index, A68_176  *ReturnedValue, void *NonLocals)
#define NL(x) (((VAFBTRN_anonymous *)NonLocals)->x)
{ 
A68_176  WAFBTRN_x;
A68_176  XAFBTRN;  /* clause result */
 /* line 180: */
{ 
WAFBTRN_x = (*(&((*NL(RAFBTRN_el))->Elem)));
(*NL(RAFBTRN_el)) = (*(&((*NL(RAFBTRN_el))->Rest)));
XAFBTRN = WAFBTRN_x;
} 
*ReturnedValue = (XAFBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  CBFBTRN_anonymous(A68_INT  Index, A68_176  *ReturnedValue, void *NonLocals)
#define NL(x) (((DBFBTRN_anonymous *)NonLocals)->x)
{ 
A68_176  EBFBTRN;  /* clause result */
EBFBTRN = (*(&(NL(YAFBTRN_urow)->Elem)));
*ReturnedValue = (EBFBTRN);
return;
} 
#undef NL
 /* line 123: */

A_STATIC A68_VOID  MYEBTRN_separate(A68_BOOL  Need_new_name, A68_426  Get_unit, void *NonLocals)
#define NL(x) (((NYEBTRN_separate *)NonLocals)->x)
{ 
A68_217 * OYEBTRN_nn;
A68_157 * PYEBTRN_tstr;
A68_157 ** QYEBTRN_ttail;
A68_205  RYEBTRN;  /* collateral clause result */
A68_210  SYEBTRN;  /* collateral clause result */
A68_217  TYEBTRN;  /* collateral clause result */
A68_217 * UYEBTRN;  /* YIELD */
A68_210 * VYEBTRN;  /* YIELD */
A68_206  WYEBTRN;  /* OPERATORS - mode -> union mode */
A68_205 * XYEBTRN;  /* YIELD */
A68_INT  YYEBTRN_index;
A68_157  ZYEBTRN;  /* collateral clause result */
A68_INT  AZEBTRN;  /* YIELD */
A68_157 * BZEBTRN;  /* YIELD */
A68_205  CZEBTRN;  /* collateral clause result */
A68_210  DZEBTRN;  /* collateral clause result */
A68_217  EZEBTRN;  /* collateral clause result */
A68_217 * FZEBTRN;  /* YIELD */
A68_176  GZEBTRN;  /* avoid structure result */
A68_210 * HZEBTRN;  /* YIELD */
A68_206  IZEBTRN;  /* OPERATORS - mode -> union mode */
A68_205 * JZEBTRN;  /* YIELD */
A68_251  KZEBTRN;  /* collateral clause result */
A68_VC  LZEBTRN;  /* avoid structure result */
A68_154  MZEBTRN;  /* OPERATORS - mode -> union mode */
A68_129  NZEBTRN;  /* OPERATORS - mode -> union mode */
A68_251 * OZEBTRN;  /* YIELD */
A_PROC_ENTRY(separate);
 /* line 124: */
 /* line 125: */
{ 
OYEBTRN_nn = (*(&(NL(EYEBTRN_let)->Letnames)));
 /* line 126: */
PYEBTRN_tstr = GAAATRN_niltstr;
 /* line 127: */
QYEBTRN_ttail = (&PYEBTRN_tstr);
 /* line 129: */
 /* line 130: */
if ( Need_new_name )
{ 
 /* line 131: */
TYEBTRN.Nameno = (*NL(WWEBTRN_new_nameno));
TYEBTRN.Rest = NAAATRN_nilnames;
 /* line 132: */
UYEBTRN = A_HEAP(A68_217 ) ;
(*UYEBTRN) = TYEBTRN ;
SYEBTRN.Letnames = UYEBTRN;
SYEBTRN.Unit = NL(HYEBTRN_uc).U;
 /* line 133: */
VYEBTRN = A_HEAP(A68_210 ) ;
(*VYEBTRN) = SYEBTRN ;
RYEBTRN.Step = A_UNITE(WYEBTRN,mode8,8,VYEBTRN);
RYEBTRN.Rest = SAAATRN_nilseries;
XYEBTRN = A_HEAP(A68_205 ) ;
(*XYEBTRN) = RYEBTRN ;
(**NL(PXEBTRN_stail)) = XYEBTRN;
 /* line 134: */
 /* line 135: */
(*NL(PXEBTRN_stail)) = (&((**NL(PXEBTRN_stail))->Rest));
} 
 /* line 137: */
for ( YYEBTRN_index = 1;;
YYEBTRN_index += 1 ) 
{ 
 /* line 138: */
 /* line 139: */
if ( !((OYEBTRN_nn!=NAAATRN_nilnames)) ) break;
 /* line 140: */
if ( Need_new_name )
{ 
 /* line 141: */
AZEBTRN = (*(&(OYEBTRN_nn->Nameno))) ;
ZYEBTRN.Elem = (*(&((&A_VINDEX((*NL(VWEBTRN_nametypes)),AZEBTRN))->Type)));
ZYEBTRN.Rest = GAAATRN_niltstr;
BZEBTRN = A_HEAP(A68_157 ) ;
(*BZEBTRN) = ZYEBTRN ;
(*QYEBTRN_ttail) = BZEBTRN;
 /* line 142: */
 /* line 143: */
QYEBTRN_ttail = (&((*QYEBTRN_ttail)->Rest));
} 
 /* line 144: */
 /* line 145: */
 /* line 146: */
EZEBTRN.Nameno = (*(&(OYEBTRN_nn->Nameno)));
EZEBTRN.Rest = NAAATRN_nilnames;
 /* line 147: */
FZEBTRN = A_HEAP(A68_217 ) ;
(*FZEBTRN) = EZEBTRN ;
DZEBTRN.Letnames = FZEBTRN;
A_CALLPROC(Get_unit,(YYEBTRN_index, &GZEBTRN),(YYEBTRN_index, &GZEBTRN,(Get_unit).nonlocals));
DZEBTRN.Unit = GZEBTRN;
 /* line 148: */
HZEBTRN = A_HEAP(A68_210 ) ;
(*HZEBTRN) = DZEBTRN ;
CZEBTRN.Step = A_UNITE(IZEBTRN,mode8,8,HZEBTRN);
CZEBTRN.Rest = SAAATRN_nilseries;
JZEBTRN = A_HEAP(A68_205 ) ;
(*JZEBTRN) = CZEBTRN ;
(**NL(PXEBTRN_stail)) = JZEBTRN;
 /* line 149: */
(*NL(PXEBTRN_stail)) = (&((**NL(PXEBTRN_stail))->Rest));
 /* line 150: */
 /* line 151: */
OYEBTRN_nn = (*(&(OYEBTRN_nn->Rest)));
}
 /* line 152: */
 /* line 153: */
if ( Need_new_name )
{ 
 /* line 154: */
RVEBTRN_multiletsid( (*NL(WWEBTRN_new_nameno)), &LZEBTRN );
KZEBTRN.Name = LZEBTRN;
KZEBTRN.Type = A_UNITE(MZEBTRN,mode3,3,PYEBTRN_tstr);
 /* line 155: */
KZEBTRN.Attr = A_UNITE(NZEBTRN,mode5,5,(&ZHAATRN_attrnull));
 /* line 156: */
OZEBTRN = (&A_VINDEX((*NL(VWEBTRN_nametypes)),(*NL(WWEBTRN_new_nameno)))) ;
(*OZEBTRN) = KZEBTRN;
} 
} 
A_PROC_EXIT(separate);
return;
} 
#undef NL

A_STATIC A68_VOID  SZEBTRN_index_unit(A68_176  Unit, A68_BOOL  Need_new_name, void *NonLocals)
#define NL(x) (((TZEBTRN_index_unit *)NonLocals)->x)
{ 
A68_426  VZEBTRN_anonymous;   /* proc value of non-global proc */
A_PROC_ENTRY(index_unit);
 /* line 159: */
 /* line 160: */
 /* line 161: */
A_CLOSURE( VZEBTRN_anonymous, WZEBTRN_anonymous, XZEBTRN_anonymous );
(( XZEBTRN_anonymous * ) ( VZEBTRN_anonymous.nonlocals )) -> Unit = Unit;
 /* line 165: */
A_CALLPROC(NL(LYEBTRN_separate),(Need_new_name, VZEBTRN_anonymous),(Need_new_name, VZEBTRN_anonymous,(NL(LYEBTRN_separate)).nonlocals));
A_PROC_EXIT(index_unit);
return;
} 
#undef NL

A_STATIC A68_VOID  IAFBTRN_try_unit(A68_176  U, A68_BOOL  Need_new_name, void *NonLocals)
#define NL(x) (((JAFBTRN_try_unit *)NonLocals)->x)
{ 
A68_102  LAFBTRN_incr_nameno;   /* proc value of non-global proc */
A68_176  PAFBTRN;  /* united object - for case conformity */
A68_191 * QAFBTRN_ustr;
A68_191 * RAFBTRN_el;
A68_426  TAFBTRN_anonymous;   /* proc value of non-global proc */
A68_190 * YAFBTRN_urow;
A68_176  ZAFBTRN;  /* united object - for case conformity */
A68_426  BBFBTRN_anonymous;   /* proc value of non-global proc */
A68_181  FBFBTRN;  /* collateral clause result */
A68_181 * GBFBTRN;  /* YIELD */
A68_176  HBFBTRN;  /* OPERATORS - mode -> union mode */
A68_181 * IBFBTRN_una;
A68_176  JBFBTRN;  /* OPERATORS - mode -> union mode */
A68_200 * KBFBTRN_attr;
A68_181  LBFBTRN;  /* collateral clause result */
A68_181 * MBFBTRN;  /* YIELD */
A68_176  NBFBTRN;  /* OPERATORS - mode -> union mode */
A68_202 * OBFBTRN_ubr;
A68_181  PBFBTRN;  /* collateral clause result */
A68_181 * QBFBTRN;  /* YIELD */
A68_176  RBFBTRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(try_unit);
 /* line 168: */
 /* line 169: */
{ 
 /* line 170: */
A_CLOSURE( LAFBTRN_incr_nameno, MAFBTRN_incr_nameno, NAFBTRN_incr_nameno );
(( NAFBTRN_incr_nameno * ) ( LAFBTRN_incr_nameno.nonlocals )) -> Need_new_name = Need_new_name;
(( NAFBTRN_incr_nameno * ) ( LAFBTRN_incr_nameno.nonlocals )) -> WWEBTRN_new_nameno = NL(WWEBTRN_new_nameno);
 /* line 174: */
 /* line 175: */
PAFBTRN = U ;
switch ( PAFBTRN.mode )
{ 
case 21: /* REF STRUCT(MODE176,REF MODE191)  */
QAFBTRN_ustr = (PAFBTRN.data.mode21);
 /* line 176: */
{ 
RAFBTRN_el = QAFBTRN_ustr;
 /* line 178: */
 /* line 179: */
A_CLOSURE( TAFBTRN_anonymous, UAFBTRN_anonymous, VAFBTRN_anonymous );
(( VAFBTRN_anonymous * ) ( TAFBTRN_anonymous.nonlocals )) -> RAFBTRN_el = (&RAFBTRN_el);
 /* line 181: */
 /* line 182: */
A_CALLPROC(NL(LYEBTRN_separate),(Need_new_name, TAFBTRN_anonymous),(Need_new_name, TAFBTRN_anonymous,(NL(LYEBTRN_separate)).nonlocals));
} 
break;
case 20: /* REF STRUCT(MODE138,MODE176)  */
YAFBTRN_urow = (PAFBTRN.data.mode20);
 /* line 183: */
 /* line 184: */
{ 
 /* line 185: */
ZAFBTRN = (*(&(YAFBTRN_urow->Elem))) ;
switch ( ZAFBTRN.mode )
{ 
case 11: /* REF STRUCT(INT,INT)  */
 /* line 186: */
 /* line 187: */
A_CLOSURE( BBFBTRN_anonymous, CBFBTRN_anonymous, DBFBTRN_anonymous );
(( DBFBTRN_anonymous * ) ( BBFBTRN_anonymous.nonlocals )) -> YAFBTRN_urow = YAFBTRN_urow;
 /* line 188: */
 /* line 189: */
A_CALLPROC(NL(LYEBTRN_separate),(Need_new_name, BBFBTRN_anonymous),(Need_new_name, BBFBTRN_anonymous,(NL(LYEBTRN_separate)).nonlocals));
break;
default: 
FBFBTRN.Sort = KKAATRN_usource;
FBFBTRN.Nameno = A_CALLPROC(LAFBTRN_incr_nameno,(),((LAFBTRN_incr_nameno).nonlocals));
 /* line 190: */
 /* line 191: */
 /* line 192: */
 /* line 193: */
GBFBTRN = A_HEAP(A68_181 ) ;
(*GBFBTRN) = FBFBTRN ;
A_CALLPROC(NL(RZEBTRN_index_unit),(A_UNITE(HBFBTRN,mode11,11,GBFBTRN), A68_TRUE),(A_UNITE(HBFBTRN,mode11,11,GBFBTRN), A68_TRUE,(NL(RZEBTRN_index_unit)).nonlocals));
break;
} 
} 
break;
case 11: /* REF STRUCT(INT,INT)  */
IBFBTRN_una = (PAFBTRN.data.mode11);
 /* line 194: */
 /* line 195: */
 /* line 196: */
 /* line 197: */
A_CALLPROC(NL(RZEBTRN_index_unit),(A_UNITE(JBFBTRN,mode11,11,IBFBTRN_una), Need_new_name),(A_UNITE(JBFBTRN,mode11,11,IBFBTRN_una), Need_new_name,(NL(RZEBTRN_index_unit)).nonlocals));
break;
case 30: /* REF STRUCT(MODE176,MODE129)  */
KBFBTRN_attr = (PAFBTRN.data.mode30);
 /* line 198: */
{ 
A_CALLPROC(LAFBTRN_incr_nameno,(),((LAFBTRN_incr_nameno).nonlocals));
 /* line 199: */
 /* line 200: */
if ( A_CALLPROC(NL(AXEBTRN_name_needed),((*(&(KBFBTRN_attr->Unit)))),((*(&(KBFBTRN_attr->Unit))),(NL(AXEBTRN_name_needed)).nonlocals)) )
{ 
LBFBTRN.Sort = KKAATRN_usource;
LBFBTRN.Nameno = (*NL(WWEBTRN_new_nameno));
 /* line 201: */
 /* line 202: */
 /* line 203: */
MBFBTRN = A_HEAP(A68_181 ) ;
(*MBFBTRN) = LBFBTRN ;
A_CALLPROC(NL(RZEBTRN_index_unit),(A_UNITE(NBFBTRN,mode11,11,MBFBTRN), A68_TRUE),(A_UNITE(NBFBTRN,mode11,11,MBFBTRN), A68_TRUE,(NL(RZEBTRN_index_unit)).nonlocals));
} 
else
{ 
 /* line 204: */
 /* line 205: */
 /* line 206: */
A_CALLPROC(NL(HAFBTRN_try_unit),((*(&(KBFBTRN_attr->Unit))), A68_TRUE),((*(&(KBFBTRN_attr->Unit))), A68_TRUE,(NL(HAFBTRN_try_unit)).nonlocals));
} 
} 
break;
case 32: /* REF STRUCT(MODE176)  */
OBFBTRN_ubr = (PAFBTRN.data.mode32);
 /* line 207: */
 /* line 208: */
A_CALLPROC(NL(HAFBTRN_try_unit),((*(&(OBFBTRN_ubr->Unit))), Need_new_name),((*(&(OBFBTRN_ubr->Unit))), Need_new_name,(NL(HAFBTRN_try_unit)).nonlocals));
break;
default: 
PBFBTRN.Sort = KKAATRN_usource;
PBFBTRN.Nameno = A_CALLPROC(LAFBTRN_incr_nameno,(),((LAFBTRN_incr_nameno).nonlocals));
 /* line 209: */
 /* line 210: */
QBFBTRN = A_HEAP(A68_181 ) ;
(*QBFBTRN) = PBFBTRN ;
A_CALLPROC(NL(RZEBTRN_index_unit),(A_UNITE(RBFBTRN,mode11,11,QBFBTRN), A68_TRUE),(A_UNITE(RBFBTRN,mode11,11,QBFBTRN), A68_TRUE,(NL(RZEBTRN_index_unit)).nonlocals));
break;
} 
} 
A_PROC_EXIT(try_unit);
return;
} 
#undef NL

A_STATIC A68_VOID  TXEBTRN_copy_series(void *NonLocals)
#define NL(x) (((UXEBTRN_copy_series *)NonLocals)->x)
{ 
A68_INT  VXEBTRN;  /* to part of loop */
A68_INT  WXEBTRN;  /* loop control */
A68_205  XXEBTRN;  /* collateral clause result */
A68_205 * YXEBTRN;  /* YIELD */
A_PROC_ENTRY(copy_series);
{ 
 /* line 102: */
if ( !(*NL(RXEBTRN_changed)) )
{ 
(*NL(RXEBTRN_changed)) = A68_TRUE;
 /* line 103: */
(*NL(NXEBTRN_ss)) = (*(&(NL(Useries)->Body)));
 /* line 104: */
 /* line 105: */
VXEBTRN = (*NL(QXEBTRN_num_steps));
for ( WXEBTRN = 1;
WXEBTRN <= VXEBTRN;
WXEBTRN += 1 )
{ 
 /* line 106: */
 /* line 107: */
XXEBTRN.Step = (*(&((*NL(NXEBTRN_ss))->Step)));
XXEBTRN.Rest = SAAATRN_nilseries;
YXEBTRN = A_HEAP(A68_205 ) ;
(*YXEBTRN) = XXEBTRN ;
(**NL(PXEBTRN_stail)) = YXEBTRN;
 /* line 108: */
(*NL(PXEBTRN_stail)) = (&((**NL(PXEBTRN_stail))->Rest));
 /* line 109: */
 /* line 110: */
(*NL(NXEBTRN_ss)) = (*(&((*NL(NXEBTRN_ss))->Rest)));
}
 /* line 111: */
 /* line 112: */
} 
} 
A_PROC_EXIT(copy_series);
return;
} 
#undef NL

A_STATIC A68_VOID  BYEBTRN_do_step(A68_205 * Ss, void *NonLocals)
#define NL(x) (((CYEBTRN_do_step *)NonLocals)->x)
{ 
A68_206  DYEBTRN;  /* united object - for case conformity */
A68_210 * EYEBTRN_let;
A68_379  FYEBTRN;  /* CALL */
A68_336  GYEBTRN;  /* avoid structure result */
A68_336  HYEBTRN_uc;
A68_427  LYEBTRN_separate;   /* proc value of non-global proc */
A68_428  RZEBTRN_index_unit;   /* proc value of non-global proc */
A68_428  HAFBTRN_try_unit;   /* proc value of non-global proc */
A68_BOOL  SBFBTRN;  /* optbool result */
A68_205  TBFBTRN;  /* collateral clause result */
A68_210  UBFBTRN;  /* collateral clause result */
A68_210 * VBFBTRN;  /* YIELD */
A68_206  WBFBTRN;  /* OPERATORS - mode -> union mode */
A68_205 * XBFBTRN;  /* YIELD */
A68_205  YBFBTRN;  /* collateral clause result */
A68_205 * ZBFBTRN;  /* YIELD */
A68_395  ACFBTRN;  /* CALL */
A68_352  BCFBTRN;  /* avoid structure result */
A68_352  CCFBTRN_sc;
A68_BOOL  DCFBTRN;  /* optbool result */
A68_205  ECFBTRN;  /* collateral clause result */
A68_205 * FCFBTRN;  /* YIELD */
A_PROC_ENTRY(do_step);
 /* line 115: */
 /* line 116: */
{ 
 /* line 117: */
DYEBTRN = (*(&(Ss->Step))) ;
switch ( DYEBTRN.mode )
{ 
case 8: /* REF STRUCT(REF MODE217,MODE176)  */
EYEBTRN_let = (DYEBTRN.data.mode8);
 /* line 118: */
{ 
FYEBTRN = (*(&(NL(Tprocs)->Unit))) ;
A_CALLPROC(FYEBTRN,((*(&(EYEBTRN_let->Unit))), NL(Tprocs), &GYEBTRN),((*(&(EYEBTRN_let->Unit))), NL(Tprocs), &GYEBTRN,(FYEBTRN).nonlocals));
HYEBTRN_uc = GYEBTRN;
 /* line 120: */
 /* line 122: */
if ( ((*(&((*(&(EYEBTRN_let->Letnames)))->Rest)))!=NAAATRN_nilnames) )
{ 
A_CLOSURE( LYEBTRN_separate, MYEBTRN_separate, NYEBTRN_separate );
(( NYEBTRN_separate * ) ( LYEBTRN_separate.nonlocals )) -> EYEBTRN_let = EYEBTRN_let;
(( NYEBTRN_separate * ) ( LYEBTRN_separate.nonlocals )) -> PXEBTRN_stail = NL(PXEBTRN_stail);
(( NYEBTRN_separate * ) ( LYEBTRN_separate.nonlocals )) -> WWEBTRN_new_nameno = NL(WWEBTRN_new_nameno);
(( NYEBTRN_separate * ) ( LYEBTRN_separate.nonlocals )) -> HYEBTRN_uc = HYEBTRN_uc;
(( NYEBTRN_separate * ) ( LYEBTRN_separate.nonlocals )) -> VWEBTRN_nametypes = NL(VWEBTRN_nametypes);
 /* line 158: */
A_CLOSURE( RZEBTRN_index_unit, SZEBTRN_index_unit, TZEBTRN_index_unit );
(( TZEBTRN_index_unit * ) ( RZEBTRN_index_unit.nonlocals )) -> LYEBTRN_separate = LYEBTRN_separate;
 /* line 167: */
A_CLOSURE( HAFBTRN_try_unit, IAFBTRN_try_unit, JAFBTRN_try_unit );
(( JAFBTRN_try_unit * ) ( HAFBTRN_try_unit.nonlocals )) -> WWEBTRN_new_nameno = NL(WWEBTRN_new_nameno);
(( JAFBTRN_try_unit * ) ( HAFBTRN_try_unit.nonlocals )) -> LYEBTRN_separate = LYEBTRN_separate;
(( JAFBTRN_try_unit * ) ( HAFBTRN_try_unit.nonlocals )) -> RZEBTRN_index_unit = RZEBTRN_index_unit;
(( JAFBTRN_try_unit * ) ( HAFBTRN_try_unit.nonlocals )) -> AXEBTRN_name_needed = NL(AXEBTRN_name_needed);
(( JAFBTRN_try_unit * ) ( HAFBTRN_try_unit.nonlocals )) -> HAFBTRN_try_unit = HAFBTRN_try_unit;
 /* line 212: */
A_CALLPROC(NL(SXEBTRN_copy_series),(),((NL(SXEBTRN_copy_series)).nonlocals));
 /* line 213: */
 /* line 215: */
A_CALLPROC(HAFBTRN_try_unit,(HYEBTRN_uc.U, A68_FALSE),(HYEBTRN_uc.U, A68_FALSE,(HAFBTRN_try_unit).nonlocals));
} 
else
{ 
SBFBTRN = HYEBTRN_uc.C;
if ( ! SBFBTRN )
{SBFBTRN = (*NL(RXEBTRN_changed));
}
 /* line 216: */
if ( SBFBTRN )
{ 
A_CALLPROC(NL(SXEBTRN_copy_series),(),((NL(SXEBTRN_copy_series)).nonlocals));
 /* line 217: */
 /* line 218: */
UBFBTRN.Letnames = (*(&(EYEBTRN_let->Letnames)));
UBFBTRN.Unit = HYEBTRN_uc.U;
 /* line 219: */
VBFBTRN = A_HEAP(A68_210 ) ;
(*VBFBTRN) = UBFBTRN ;
TBFBTRN.Step = A_UNITE(WBFBTRN,mode8,8,VBFBTRN);
TBFBTRN.Rest = SAAATRN_nilseries;
XBFBTRN = A_HEAP(A68_205 ) ;
(*XBFBTRN) = TBFBTRN ;
(**NL(PXEBTRN_stail)) = XBFBTRN;
 /* line 220: */
 /* line 221: */
(*NL(PXEBTRN_stail)) = (&((**NL(PXEBTRN_stail))->Rest));
} 
else
{ 
 /* line 222: */
if ( (*NL(RXEBTRN_changed)) )
{ 
 /* line 223: */
YBFBTRN.Step = (*(&(Ss->Step)));
YBFBTRN.Rest = SAAATRN_nilseries;
ZBFBTRN = A_HEAP(A68_205 ) ;
(*ZBFBTRN) = YBFBTRN ;
(**NL(PXEBTRN_stail)) = ZBFBTRN;
 /* line 224: */
 /* line 225: */
 /* line 226: */
 /* line 227: */
 /* line 228: */
(*NL(PXEBTRN_stail)) = (&((**NL(PXEBTRN_stail))->Rest));
} 
} 
} 
} 
break;
default: 
ACFBTRN = (*(&(NL(Dec_tprocs)->Step))) ;
A_CALLPROC(ACFBTRN,((*(&(Ss->Step))), NL(Tprocs), &BCFBTRN),((*(&(Ss->Step))), NL(Tprocs), &BCFBTRN,(ACFBTRN).nonlocals));
CCFBTRN_sc = BCFBTRN;
 /* line 230: */
DCFBTRN = CCFBTRN_sc.C;
if ( ! DCFBTRN )
{DCFBTRN = (*NL(RXEBTRN_changed));
}
 /* line 231: */
if ( DCFBTRN )
{ 
A_CALLPROC(NL(SXEBTRN_copy_series),(),((NL(SXEBTRN_copy_series)).nonlocals));
 /* line 232: */
 /* line 233: */
ECFBTRN.Step = CCFBTRN_sc.S;
ECFBTRN.Rest = SAAATRN_nilseries;
FCFBTRN = A_HEAP(A68_205 ) ;
(*FCFBTRN) = ECFBTRN ;
(**NL(PXEBTRN_stail)) = FCFBTRN;
 /* line 234: */
 /* line 235: */
 /* line 236: */
 /* line 237: */
(*NL(PXEBTRN_stail)) = (&((**NL(PXEBTRN_stail))->Rest));
} 
break;
} 
} 
A_PROC_EXIT(do_step);
return;
} 
#undef NL

A_STATIC A68_BOOL  BXEBTRN_name_needed(A68_176  U, void *NonLocals)
#define NL(x) (((CXEBTRN_name_needed *)NonLocals)->x)
{ 
A68_176  DXEBTRN;  /* united object - for case conformity */
A68_BOOL  EXEBTRN;  /* clause result */
A68_190 * FXEBTRN_urow;
A68_176  GXEBTRN;  /* united object - for case conformity */
A68_202 * HXEBTRN_ubr;
A_PROC_ENTRY(name_needed);
 /* line 82: */
 /* line 83: */
DXEBTRN = U ;
switch ( DXEBTRN.mode )
{ 
case 21: /* REF STRUCT(MODE176,REF MODE191)  */
 /* line 84: */
EXEBTRN = A68_FALSE;
break;
case 11: /* REF STRUCT(INT,INT)  */
 /* line 85: */
EXEBTRN = A68_FALSE;
break;
case 20: /* REF STRUCT(MODE138,MODE176)  */
FXEBTRN_urow = (DXEBTRN.data.mode20);
GXEBTRN = (*(&(FXEBTRN_urow->Elem))) ;
switch ( GXEBTRN.mode )
{ 
case 11: /* REF STRUCT(INT,INT)  */
EXEBTRN = A68_FALSE;
break;
default: 
 /* line 86: */
EXEBTRN = A68_TRUE;
break;
} 
break;
case 32: /* REF STRUCT(MODE176)  */
HXEBTRN_ubr = (DXEBTRN.data.mode32);
 /* line 87: */
 /* line 88: */
EXEBTRN = A_CALLPROC(NL(AXEBTRN_name_needed),((*(&(HXEBTRN_ubr->Unit)))),((*(&(HXEBTRN_ubr->Unit))),(NL(AXEBTRN_name_needed)).nonlocals));
break;
default: 
 /* line 89: */
EXEBTRN = A68_TRUE;
break;
} 
A_PROC_EXIT(name_needed);
return( EXEBTRN );
} 
#undef NL

A_STATIC A68_VOID  LXEBTRN_useries_multi(A68_199 * Useries, A68_360 * Tprocs, A68_336  *ReturnedValue, void *NonLocals)
#define NL(x) (((MXEBTRN_useries_multi *)NonLocals)->x)
{ 
A68_205 * NXEBTRN_ss;
A68_205 * OXEBTRN_new_series;
A68_205 ** PXEBTRN_stail;
A68_INT  QXEBTRN_num_steps;
A68_BOOL  RXEBTRN_changed;
A68_407  SXEBTRN_copy_series;   /* proc value of non-global proc */
A68_425  AYEBTRN_do_step;   /* proc value of non-global proc */
A68_379  GCFBTRN;  /* CALL */
A68_336  HCFBTRN;  /* avoid structure result */
A68_336  ICFBTRN_output;
A68_BOOL  JCFBTRN;  /* optbool result */
A68_336  KCFBTRN;  /* collateral clause result */
A68_199  LCFBTRN;  /* collateral clause result */
A68_199 * MCFBTRN;  /* YIELD */
A68_176  NCFBTRN;  /* OPERATORS - mode -> union mode */
A68_336  OCFBTRN;  /* clause result */
A68_336  PCFBTRN;  /* collateral clause result */
A68_176  QCFBTRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(useries_multi);
 /* line 92: */
 /* line 93: */
{ 
NXEBTRN_ss = (*(&(Useries->Body)));
 /* line 94: */
OXEBTRN_new_series = SAAATRN_nilseries;
 /* line 95: */
PXEBTRN_stail = (&OXEBTRN_new_series);
 /* line 96: */
QXEBTRN_num_steps = 0;
 /* line 97: */
RXEBTRN_changed = A68_FALSE;
 /* line 99: */
 /* line 100: */
 /* line 101: */
A_CLOSURE( SXEBTRN_copy_series, TXEBTRN_copy_series, UXEBTRN_copy_series );
(( UXEBTRN_copy_series * ) ( SXEBTRN_copy_series.nonlocals )) -> RXEBTRN_changed = (&RXEBTRN_changed);
(( UXEBTRN_copy_series * ) ( SXEBTRN_copy_series.nonlocals )) -> NXEBTRN_ss = (&NXEBTRN_ss);
(( UXEBTRN_copy_series * ) ( SXEBTRN_copy_series.nonlocals )) -> Useries = Useries;
(( UXEBTRN_copy_series * ) ( SXEBTRN_copy_series.nonlocals )) -> QXEBTRN_num_steps = (&QXEBTRN_num_steps);
(( UXEBTRN_copy_series * ) ( SXEBTRN_copy_series.nonlocals )) -> PXEBTRN_stail = (&PXEBTRN_stail);
 /* line 114: */
A_CLOSURE( AYEBTRN_do_step, BYEBTRN_do_step, CYEBTRN_do_step );
(( CYEBTRN_do_step * ) ( AYEBTRN_do_step.nonlocals )) -> Tprocs = Tprocs;
(( CYEBTRN_do_step * ) ( AYEBTRN_do_step.nonlocals )) -> PXEBTRN_stail = (&PXEBTRN_stail);
(( CYEBTRN_do_step * ) ( AYEBTRN_do_step.nonlocals )) -> WWEBTRN_new_nameno = NL(WWEBTRN_new_nameno);
(( CYEBTRN_do_step * ) ( AYEBTRN_do_step.nonlocals )) -> VWEBTRN_nametypes = NL(VWEBTRN_nametypes);
(( CYEBTRN_do_step * ) ( AYEBTRN_do_step.nonlocals )) -> AXEBTRN_name_needed = NL(AXEBTRN_name_needed);
(( CYEBTRN_do_step * ) ( AYEBTRN_do_step.nonlocals )) -> SXEBTRN_copy_series = SXEBTRN_copy_series;
(( CYEBTRN_do_step * ) ( AYEBTRN_do_step.nonlocals )) -> RXEBTRN_changed = (&RXEBTRN_changed);
(( CYEBTRN_do_step * ) ( AYEBTRN_do_step.nonlocals )) -> Dec_tprocs = NL(Dec_tprocs);
 /* line 239: */
for ( ;; )
{ 
 /* line 240: */
 /* line 241: */
if ( !((NXEBTRN_ss!=SAAATRN_nilseries)) ) break;
A_CALLPROC(AYEBTRN_do_step,(NXEBTRN_ss),(NXEBTRN_ss,(AYEBTRN_do_step).nonlocals));
 /* line 242: */
QXEBTRN_num_steps+=1;
 /* line 243: */
 /* line 244: */
NXEBTRN_ss = (*(&(NXEBTRN_ss->Rest)));
}
 /* line 246: */
GCFBTRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(GCFBTRN,((*(&(Useries->Output))), Tprocs, &HCFBTRN),((*(&(Useries->Output))), Tprocs, &HCFBTRN,(GCFBTRN).nonlocals));
ICFBTRN_output = HCFBTRN;
 /* line 248: */
JCFBTRN = ICFBTRN_output.C;
if ( ! JCFBTRN )
{JCFBTRN = RXEBTRN_changed;
}
 /* line 249: */
if ( JCFBTRN )
{ 
if ( RXEBTRN_changed )
{ 
LCFBTRN.Body = OXEBTRN_new_series;
} 
else
{ 
 /* line 250: */
LCFBTRN.Body = (*(&(Useries->Body)));
} 
LCFBTRN.Output = ICFBTRN_output.U;
 /* line 251: */
MCFBTRN = A_HEAP(A68_199 ) ;
(*MCFBTRN) = LCFBTRN ;
KCFBTRN.U = A_UNITE(NCFBTRN,mode29,29,MCFBTRN);
 /* line 252: */
 /* line 253: */
KCFBTRN.C = A68_TRUE;
OCFBTRN = KCFBTRN;
} 
else
{ 
PCFBTRN.U = A_UNITE(QCFBTRN,mode29,29,Useries);
 /* line 254: */
 /* line 255: */
PCFBTRN.C = A68_FALSE;
OCFBTRN = PCFBTRN;
} 
} 
A_PROC_EXIT(useries_multi);
*ReturnedValue = (OCFBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  UCFBTRN_unit_multi(A68_176  Unit, A68_360 * Tprocs, A68_336  *ReturnedValue, void *NonLocals)
#define NL(x) (((VCFBTRN_unit_multi *)NonLocals)->x)
{ 
A68_176  WCFBTRN;  /* united object - for case conformity */
A68_199 * XCFBTRN_usr;
A68_336  YCFBTRN;  /* clause result */
A68_336  ZCFBTRN;  /* avoid structure result */
A68_379  ADFBTRN;  /* CALL */
A68_336  BDFBTRN;  /* avoid structure result */
A_PROC_ENTRY(unit_multi);
 /* line 258: */
WCFBTRN = Unit ;
switch ( WCFBTRN.mode )
{ 
case 29: /* REF STRUCT(REF MODE205,MODE176)  */
XCFBTRN_usr = (WCFBTRN.data.mode29);
 /* line 259: */
 /* line 260: */
A_CALLPROC(NL(KXEBTRN_useries_multi),(XCFBTRN_usr, Tprocs, &ZCFBTRN),(XCFBTRN_usr, Tprocs, &ZCFBTRN,(NL(KXEBTRN_useries_multi)).nonlocals));
YCFBTRN = ZCFBTRN;
break;
default: 
 /* line 261: */
ADFBTRN = (*(&(NL(Dec_tprocs)->Unit))) ;
A_CALLPROC(ADFBTRN,(Unit, Tprocs, &BDFBTRN),(Unit, Tprocs, &BDFBTRN,(ADFBTRN).nonlocals));
YCFBTRN = BDFBTRN;
break;
} 
A_PROC_EXIT(unit_multi);
*ReturnedValue = (YCFBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  FDFBTRN_pre_pass_let(A68_210 * Let, A68_360 * Tprocs, A68_345  *ReturnedValue, void *NonLocals)
#define NL(x) (((GDFBTRN_pre_pass_let *)NonLocals)->x)
{ 
A68_379  HDFBTRN;  /* CALL */
A68_336  IDFBTRN;  /* avoid structure result */
A68_336  JDFBTRN_uc;
A68_345  KDFBTRN;  /* collateral clause result */
A68_210  LDFBTRN;  /* collateral clause result */
A68_210 * MDFBTRN;  /* YIELD */
A68_345  NDFBTRN;  /* clause result */
A68_345  ODFBTRN;  /* collateral clause result */
A_PROC_ENTRY(pre_pass_let);
 /* line 264: */
 /* line 265: */
{ 
HDFBTRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(HDFBTRN,((*(&(Let->Unit))), Tprocs, &IDFBTRN),((*(&(Let->Unit))), Tprocs, &IDFBTRN,(HDFBTRN).nonlocals));
JDFBTRN_uc = IDFBTRN;
 /* line 267: */
 /* line 268: */
if ( ((*(&((*(&(Let->Letnames)))->Rest)))!=NAAATRN_nilnames) )
{ 
(*NL(YWEBTRN_has_multi_lets)) = A68_TRUE;
 /* line 269: */
if ( A_CALLPROC(NL(AXEBTRN_name_needed),(JDFBTRN_uc.U),(JDFBTRN_uc.U,(NL(AXEBTRN_name_needed)).nonlocals)) )
{ 
 /* line 270: */
(*NL(XWEBTRN_max_names))+=1;
} 
} 
 /* line 271: */
 /* line 272: */
if ( JDFBTRN_uc.C )
{ 
LDFBTRN.Letnames = (*(&(Let->Letnames)));
LDFBTRN.Unit = JDFBTRN_uc.U;
MDFBTRN = A_HEAP(A68_210 ) ;
(*MDFBTRN) = LDFBTRN ;
KDFBTRN.L = MDFBTRN;
 /* line 273: */
 /* line 274: */
KDFBTRN.C = A68_TRUE;
NDFBTRN = KDFBTRN;
} 
else
{ 
ODFBTRN.L = Let;
 /* line 275: */
 /* line 276: */
ODFBTRN.C = A68_FALSE;
NDFBTRN = ODFBTRN;
} 
} 
A_PROC_EXIT(pre_pass_let);
*ReturnedValue = (NDFBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  MEFBTRN_generator(A68_BOOL  KEFBTRN_anonymous, A68_254  *ReturnedValue, void *NonLocals)
#define NL(x) (((NEFBTRN_generator *)NonLocals)->x)
{ 
A68_254  OEFBTRN;  /* clause result */
A68_254  PEFBTRN;  /* OPERATORS - dynamic generator */
{ 
PEFBTRN.upb = (*NL(XWEBTRN_max_names)) ;
( KEFBTRN_anonymous? A_VLOC(A68_251 ,PEFBTRN): A_VHEAP(A68_251 ,PEFBTRN) );
OEFBTRN = PEFBTRN;
} 
*ReturnedValue = (OEFBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  HVEBTRN_generator(A68_BOOL  GVEBTRN_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  IVEBTRN;  /* clause result */
A68_VC  JVEBTRN;  /* OPERATORS - dynamic generator */
{ 
JVEBTRN.upb = 0 ;
( GVEBTRN_anonymous? A_VLOC(A68_CHAR ,JVEBTRN): A_VHEAP(A68_CHAR ,JVEBTRN) );
IVEBTRN = JVEBTRN;
} 
*ReturnedValue = (IVEBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  TWEBTRN_fndec_proc(A68_252 * Fdec, A68_360 * Dec_tprocs, A68_357  *ReturnedValue, void *NonLocals)
#define NL(x) (((UWEBTRN_fndec_proc *)NonLocals)->x)
{ 
A68_254  VWEBTRN_nametypes;
A68_INT  WWEBTRN_new_nameno;
A68_INT  XWEBTRN_max_names;
A68_BOOL  YWEBTRN_has_multi_lets;
A68_423  AXEBTRN_name_needed;   /* proc value of non-global proc */
A68_424  KXEBTRN_useries_multi;   /* proc value of non-global proc */
A68_379  TCFBTRN_unit_multi;   /* proc value of non-global proc */
A68_388  EDFBTRN_pre_pass_let;   /* proc value of non-global proc */
A68_429  PDFBTRN;  /* collateral clause result */
A68_405  QDFBTRN;  /* OPERATORS - mode -> union mode */
A68_361  RDFBTRN;  /* procedure value */
A68_405  SDFBTRN;  /* OPERATORS - mode -> union mode */
A68_364  TDFBTRN;  /* procedure value */
A68_405  UDFBTRN;  /* OPERATORS - mode -> union mode */
A68_370  VDFBTRN;  /* procedure value */
A68_405  WDFBTRN;  /* OPERATORS - mode -> union mode */
A68_397  XDFBTRN;  /* YIELD */
A68_397  YDFBTRN;  /* procedure value */
A68_405  ZDFBTRN;  /* OPERATORS - mode -> union mode */
A68_388  AEFBTRN;  /* YIELD */
A68_404  BEFBTRN;  /* OPERATORS - istruct -> vector */
A68_360 * CEFBTRN_pre_pass_tprocs;
A68_397  DEFBTRN;  /* CALL */
A68_354  EEFBTRN;  /* avoid structure result */
A68_405  FEFBTRN;  /* OPERATORS - mode -> union mode */
A68_379  GEFBTRN;  /* YIELD */
A68_404  HEFBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_360 * IEFBTRN_new_tprocs;
A68_254  JEFBTRN_old_nametypes;
A68_430  LEFBTRN_generator;   /* proc value of non-global proc */
A68_254  QEFBTRN;  /* avoid structure result */
A68_254  REFBTRN;  /* OPERATORS - trim index */
A68_254  SEFBTRN;  /* YIELD */
A68_397  TEFBTRN;  /* CALL */
A68_354  UEFBTRN;  /* avoid structure result */
A68_354  VEFBTRN_fc;
A68_252 * WEFBTRN;  /* YIELD */
A68_252 * XEFBTRN_new_dec;
A68_433  YEFBTRN;  /* collateral clause result */
A68_52  BFFBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  CFFBTRN;  /* YIELD */
A68_52  DFFBTRN;  /* OPERATORS - mode -> union mode */
A68_52  GFFBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  HFFBTRN;  /* YIELD */
A68_52  IFFBTRN;  /* OPERATORS - mode -> union mode */
A68_85  JFFBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  KFFBTRN;  /* avoid structure result */
A68_46  LFFBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_254 * MFFBTRN;  /* YIELD */
A68_248 * NFFBTRN;  /* YIELD */
A68_357  OFFBTRN;  /* collateral clause result */
A68_357  PFFBTRN;  /* clause result */
A68_357  QFFBTRN;  /* collateral clause result */
A_PROC_ENTRY(fndec_proc);
 /* line 74: */
 /* line 75: */
{ 
VWEBTRN_nametypes = (*(&(Fdec->Nametypes)));
 /* line 76: */
WWEBTRN_new_nameno = VWEBTRN_nametypes.upb;
 /* line 77: */
XWEBTRN_max_names = WWEBTRN_new_nameno;
 /* line 78: */
YWEBTRN_has_multi_lets = A68_FALSE;
 /* line 81: */
A_CLOSURE( AXEBTRN_name_needed, BXEBTRN_name_needed, CXEBTRN_name_needed );
(( CXEBTRN_name_needed * ) ( AXEBTRN_name_needed.nonlocals )) -> AXEBTRN_name_needed = AXEBTRN_name_needed;
 /* line 91: */
A_CLOSURE( KXEBTRN_useries_multi, LXEBTRN_useries_multi, MXEBTRN_useries_multi );
(( MXEBTRN_useries_multi * ) ( KXEBTRN_useries_multi.nonlocals )) -> WWEBTRN_new_nameno = (&WWEBTRN_new_nameno);
(( MXEBTRN_useries_multi * ) ( KXEBTRN_useries_multi.nonlocals )) -> VWEBTRN_nametypes = (&VWEBTRN_nametypes);
(( MXEBTRN_useries_multi * ) ( KXEBTRN_useries_multi.nonlocals )) -> AXEBTRN_name_needed = AXEBTRN_name_needed;
(( MXEBTRN_useries_multi * ) ( KXEBTRN_useries_multi.nonlocals )) -> Dec_tprocs = Dec_tprocs;
 /* line 257: */
A_CLOSURE( TCFBTRN_unit_multi, UCFBTRN_unit_multi, VCFBTRN_unit_multi );
(( VCFBTRN_unit_multi * ) ( TCFBTRN_unit_multi.nonlocals )) -> KXEBTRN_useries_multi = KXEBTRN_useries_multi;
(( VCFBTRN_unit_multi * ) ( TCFBTRN_unit_multi.nonlocals )) -> Dec_tprocs = Dec_tprocs;
 /* line 263: */
A_CLOSURE( EDFBTRN_pre_pass_let, FDFBTRN_pre_pass_let, GDFBTRN_pre_pass_let );
(( GDFBTRN_pre_pass_let * ) ( EDFBTRN_pre_pass_let.nonlocals )) -> YWEBTRN_has_multi_lets = (&YWEBTRN_has_multi_lets);
(( GDFBTRN_pre_pass_let * ) ( EDFBTRN_pre_pass_let.nonlocals )) -> AXEBTRN_name_needed = AXEBTRN_name_needed;
(( GDFBTRN_pre_pass_let * ) ( EDFBTRN_pre_pass_let.nonlocals )) -> XWEBTRN_max_names = (&XWEBTRN_max_names);
 /* line 287: */
 /* line 288: */
 /* line 289: */
RDFBTRN.fn.fn_global = DWLATRN_null_attr;
RDFBTRN.nonlocals = A68_NIL;
PDFBTRN.data[0] = A_UNITE(QDFBTRN,mode1,1,RDFBTRN);
 /* line 290: */
TDFBTRN.fn.fn_global = IWLATRN_null_formula;
TDFBTRN.nonlocals = A68_NIL;
PDFBTRN.data[1] = A_UNITE(SDFBTRN,mode4,4,TDFBTRN);
 /* line 291: */
VDFBTRN.fn.fn_global = NWLATRN_null_type;
VDFBTRN.nonlocals = A68_NIL;
PDFBTRN.data[2] = A_UNITE(UDFBTRN,mode10,10,VDFBTRN);
 /* line 292: */
YDFBTRN.fn.fn_global = DWEBTRN_fnbody_multilets;
YDFBTRN.nonlocals = A68_NIL;
XDFBTRN = YDFBTRN ;
PDFBTRN.data[3] = A_UNITE(WDFBTRN,mode37,37,XDFBTRN);
AEFBTRN = EDFBTRN_pre_pass_let ;
PDFBTRN.data[4] = A_UNITE(ZDFBTRN,mode28,28,AEFBTRN);
CEFBTRN_pre_pass_tprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HISVEC(BEFBTRN,PDFBTRN,5,A68_405 ));
 /* line 294: */
DEFBTRN = (*(&(CEFBTRN_pre_pass_tprocs->Fnbody))) ;
A_CALLPROC(DEFBTRN,((*(&(Fdec->Fnbody))), CEFBTRN_pre_pass_tprocs, &EEFBTRN),((*(&(Fdec->Fnbody))), CEFBTRN_pre_pass_tprocs, &EEFBTRN,(DEFBTRN).nonlocals));
EEFBTRN;
 /* line 296: */
MLJATRN_discard_tprocs(CEFBTRN_pre_pass_tprocs);
 /* line 298: */
 /* line 299: */
GEFBTRN = TCFBTRN_unit_multi ;
IEFBTRN_new_tprocs = THJATRN_make_newtprocs(Dec_tprocs, A_HVEC(HEFBTRN,A_UNITE(FEFBTRN,mode19,19,GEFBTRN),A68_405 ));
 /* line 301: */
 /* line 302: */
if ( (XWEBTRN_max_names>WWEBTRN_new_nameno) )
{ 
JEFBTRN_old_nametypes = VWEBTRN_nametypes;
 /* line 305: */
A_CLOSURE( LEFBTRN_generator, MEFBTRN_generator, NEFBTRN_generator );
(( NEFBTRN_generator * ) ( LEFBTRN_generator.nonlocals )) -> XWEBTRN_max_names = (&XWEBTRN_max_names);
A_CALLPROC(LEFBTRN_generator,(A68_FALSE, &QEFBTRN),(A68_FALSE, &QEFBTRN,(LEFBTRN_generator).nonlocals));
VWEBTRN_nametypes = QEFBTRN;
 /* line 306: */
 /* line 307: */
SEFBTRN = A_VTRIM(REFBTRN,(VWEBTRN_nametypes),A_VTSCRIPT(&(REFBTRN.upb),(VWEBTRN_nametypes).upb,1,WWEBTRN_new_nameno)) ;
A_VASSIGN2(JEFBTRN_old_nametypes,SEFBTRN,A68_251 );
} 
 /* line 310: */
TEFBTRN = (*(&(IEFBTRN_new_tprocs->Fnbody))) ;
A_CALLPROC(TEFBTRN,((*(&(Fdec->Fnbody))), IEFBTRN_new_tprocs, &UEFBTRN),((*(&(Fdec->Fnbody))), IEFBTRN_new_tprocs, &UEFBTRN,(TEFBTRN).nonlocals));
VEFBTRN_fc = UEFBTRN;
 /* line 312: */
 /* line 313: */
if ( VEFBTRN_fc.C )
{ 
WEFBTRN = A_HEAP(A68_252 ) ;
(*WEFBTRN) = (*Fdec) ;
XEFBTRN_new_dec = WEFBTRN;
 /* line 315: */
 /* line 316: */
if ( (XWEBTRN_max_names!=WWEBTRN_new_nameno) )
{ 
CFFBTRN = AFFBTRN ;
YEFBTRN.data[0] = A_UNITE(BFFBTRN,mode7,7,CFFBTRN);
 /* line 317: */
YEFBTRN.data[1] = A_UNITE(DFFBTRN,mode1,1,XWEBTRN_max_names);
HFFBTRN = FFFBTRN ;
YEFBTRN.data[2] = A_UNITE(GFFBTRN,mode7,7,HFFBTRN);
YEFBTRN.data[3] = A_UNITE(IFFBTRN,mode1,1,WWEBTRN_new_nameno);
 /* line 318: */
UJBAOSL_oneline( A_HISVEC(JFFBTRN,YEFBTRN,4,A68_52 ), &KFFBTRN );
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(LFFBTRN,KFFBTRN,A68_VC )),(SHAAOSI_system, A_HVEC(LFFBTRN,KFFBTRN,A68_VC ),(NL(Msg)).nonlocals));
} 
 /* line 319: */
MFFBTRN = (&(XEFBTRN_new_dec->Nametypes)) ;
(*MFFBTRN) = VWEBTRN_nametypes;
 /* line 320: */
NFFBTRN = (&(XEFBTRN_new_dec->Fnbody)) ;
(*NFFBTRN) = VEFBTRN_fc.F;
 /* line 321: */
OFFBTRN.F = XEFBTRN_new_dec;
 /* line 322: */
 /* line 323: */
OFFBTRN.C = A68_TRUE;
PFFBTRN = OFFBTRN;
} 
else
{ 
QFFBTRN.F = Fdec;
 /* line 324: */
 /* line 325: */
QFFBTRN.C = A68_FALSE;
PFFBTRN = QFFBTRN;
} 
} 
A_PROC_EXIT(fndec_proc);
*ReturnedValue = (PFFBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  AHFBTRN_anonymous(A68_261  Outer, A68_360 * Tprocs, A68_358  *ReturnedValue, void *NonLocals)
#define NL(x) (((BHFBTRN_anonymous *)NonLocals)->x)
{ 
A68_358  CHFBTRN;  /* clause result */
A68_358  DHFBTRN;  /* avoid structure result */
 /* line 351: */
OWEBTRN_outer_multilets( Outer, NL(Closure), NL(Options), NL(Msg), &DHFBTRN );
CHFBTRN = DHFBTRN;
*ReturnedValue = (CHFBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  DVEBTRN_generator(A68_BOOL  CVEBTRN_anonymous, A68_46  *ReturnedValue)
{ 
A68_46  FVEBTRN;  /* OPERATORS - dynamic generator */
A68_419  EVEBTRN_anonymous;
A68_418 * KVEBTRN_anonymous;
A68_INT  LVEBTRN;  /* forall loop counter */
A68_VC  MVEBTRN;  /* avoid structure result */
A68_46  NVEBTRN;  /* clause result */
{ 
FVEBTRN.upb = 0 ;
( CVEBTRN_anonymous? A_VLOC(A68_VC ,FVEBTRN): A_VHEAP(A68_VC ,FVEBTRN) );
EVEBTRN_anonymous = FVEBTRN;
LVEBTRN = (*(&EVEBTRN_anonymous)).upb -1;
KVEBTRN_anonymous = (*(&EVEBTRN_anonymous)).data;
for (;LVEBTRN-- >= 0;
(KVEBTRN_anonymous++
) )
{
HVEBTRN_generator( CVEBTRN_anonymous, &MVEBTRN );
(*KVEBTRN_anonymous) = MVEBTRN;
}
NVEBTRN = EVEBTRN_anonymous;
} 
*ReturnedValue = (NVEBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  RVEBTRN_multiletsid(A68_INT  Nameno, A68_VC  *ReturnedValue)
{ 
A68_421  SVEBTRN;  /* collateral clause result */
A68_52  VVEBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  WVEBTRN;  /* YIELD */
A68_52  XVEBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  YVEBTRN;  /* clause result */
A68_85  ZVEBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  AWEBTRN;  /* avoid structure result */
A_PROC_ENTRY(multiletsid);
WVEBTRN = UVEBTRN ;
SVEBTRN.data[0] = A_UNITE(VVEBTRN,mode7,7,WVEBTRN);
SVEBTRN.data[1] = A_UNITE(XVEBTRN,mode1,1,Nameno);
UJBAOSL_oneline( A_HISVEC(ZVEBTRN,SVEBTRN,2,A68_52 ), &AWEBTRN );
YVEBTRN = AWEBTRN;
A_PROC_EXIT(multiletsid);
*ReturnedValue = (YVEBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  DWEBTRN_fnbody_multilets(A68_248  Fbody, A68_360 * Tprocs, A68_354  *ReturnedValue)
{ 
A68_248  EWEBTRN;  /* united object - for case conformity */
A68_221 * FWEBTRN_ut;
A68_354  GWEBTRN;  /* clause result */
A68_397  HWEBTRN;  /* CALL */
A68_354  IWEBTRN;  /* avoid structure result */
A68_354  JWEBTRN;  /* collateral clause result */
A_PROC_ENTRY(fnbody_multilets);
 /* line 62: */
 /* line 63: */
EWEBTRN = Fbody ;
switch ( EWEBTRN.mode )
{ 
case 1: /* REF STRUCT(MODE176)  */
FWEBTRN_ut = (EWEBTRN.data.mode1);
 /* line 64: */
HWEBTRN = (*(&(AWLATRN_nulltprocs->Fnbody))) ;
A_CALLPROC(HWEBTRN,(Fbody, Tprocs, &IWEBTRN),(Fbody, Tprocs, &IWEBTRN,(HWEBTRN).nonlocals));
GWEBTRN = IWEBTRN;
break;
default: 
JWEBTRN.F = Fbody;
 /* line 65: */
JWEBTRN.C = A68_FALSE;
GWEBTRN = JWEBTRN;
break;
} 
A_PROC_EXIT(fnbody_multilets);
*ReturnedValue = (GWEBTRN);
return;
} 
#undef NL
 /* line 68: */
 /* line 69: */
 /* line 70: */

A68_VOID  OWEBTRN_outer_multilets(A68_261  Outer, A68_265 * Closure, A68_408  Options, A68_108  Msg, A68_358  *ReturnedValue)
{ 
A68_400  SWEBTRN_fndec_proc;   /* proc value of non-global proc */
A68_429  RFFBTRN;  /* collateral clause result */
A68_405  SFFBTRN;  /* OPERATORS - mode -> union mode */
A68_361  TFFBTRN;  /* procedure value */
A68_405  UFFBTRN;  /* OPERATORS - mode -> union mode */
A68_364  VFFBTRN;  /* procedure value */
A68_405  WFFBTRN;  /* OPERATORS - mode -> union mode */
A68_370  XFFBTRN;  /* procedure value */
A68_405  YFFBTRN;  /* OPERATORS - mode -> union mode */
A68_397  ZFFBTRN;  /* YIELD */
A68_397  AGFBTRN;  /* procedure value */
A68_405  BGFBTRN;  /* OPERATORS - mode -> union mode */
A68_400  CGFBTRN;  /* YIELD */
A68_404  DGFBTRN;  /* OPERATORS - istruct -> vector */
A68_360 * EGFBTRN_new_tprocs;
A68_401  FGFBTRN;  /* CALL */
A68_358  GGFBTRN;  /* avoid structure result */
A68_358  HGFBTRN_oc;
A68_358  IGFBTRN;  /* clause result */
A_PROC_ENTRY(outer_multilets);
 /* line 71: */
 /* line 73: */
{ 
A_CLOSURE( SWEBTRN_fndec_proc, TWEBTRN_fndec_proc, UWEBTRN_fndec_proc );
(( UWEBTRN_fndec_proc * ) ( SWEBTRN_fndec_proc.nonlocals )) -> Msg = Msg;
 /* line 328: */
 /* line 329: */
 /* line 330: */
TFFBTRN.fn.fn_global = DWLATRN_null_attr;
TFFBTRN.nonlocals = A68_NIL;
RFFBTRN.data[0] = A_UNITE(SFFBTRN,mode1,1,TFFBTRN);
 /* line 331: */
VFFBTRN.fn.fn_global = IWLATRN_null_formula;
VFFBTRN.nonlocals = A68_NIL;
RFFBTRN.data[1] = A_UNITE(UFFBTRN,mode4,4,VFFBTRN);
 /* line 332: */
XFFBTRN.fn.fn_global = NWLATRN_null_type;
XFFBTRN.nonlocals = A68_NIL;
RFFBTRN.data[2] = A_UNITE(WFFBTRN,mode10,10,XFFBTRN);
 /* line 333: */
AGFBTRN.fn.fn_global = DWEBTRN_fnbody_multilets;
AGFBTRN.nonlocals = A68_NIL;
ZFFBTRN = AGFBTRN ;
RFFBTRN.data[3] = A_UNITE(YFFBTRN,mode37,37,ZFFBTRN);
CGFBTRN = SWEBTRN_fndec_proc ;
RFFBTRN.data[4] = A_UNITE(BGFBTRN,mode40,40,CGFBTRN);
EGFBTRN_new_tprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HISVEC(DGFBTRN,RFFBTRN,5,A68_405 ));
 /* line 335: */
FGFBTRN = (*(&(EGFBTRN_new_tprocs->Outer))) ;
A_CALLPROC(FGFBTRN,(Outer, EGFBTRN_new_tprocs, &GGFBTRN),(Outer, EGFBTRN_new_tprocs, &GGFBTRN,(FGFBTRN).nonlocals));
HGFBTRN_oc = GGFBTRN;
 /* line 337: */
MLJATRN_discard_tprocs(EGFBTRN_new_tprocs);
 /* line 338: */
 /* line 339: */
IGFBTRN = HGFBTRN_oc;
} 
A_PROC_EXIT(outer_multilets);
*ReturnedValue = (IGFBTRN);
return;
} 
#undef NL
 /* line 342: */
 /* line 343: */

A68_VOID  MGFBTRN_transform_multilets(A68_265 * Closure, A68_408  Options, A68_108  Msg, A68_359  *ReturnedValue)
{ 
A68_429  NGFBTRN;  /* collateral clause result */
A68_405  OGFBTRN;  /* OPERATORS - mode -> union mode */
A68_361  PGFBTRN;  /* procedure value */
A68_405  QGFBTRN;  /* OPERATORS - mode -> union mode */
A68_364  RGFBTRN;  /* procedure value */
A68_405  SGFBTRN;  /* OPERATORS - mode -> union mode */
A68_370  TGFBTRN;  /* procedure value */
A68_405  UGFBTRN;  /* OPERATORS - mode -> union mode */
A68_397  VGFBTRN;  /* YIELD */
A68_397  WGFBTRN;  /* procedure value */
A68_401  ZGFBTRN_anonymous;   /* proc value of non-global proc */
A68_405  EHFBTRN;  /* OPERATORS - mode -> union mode */
A68_401  FHFBTRN;  /* YIELD */
A68_404  GHFBTRN;  /* OPERATORS - istruct -> vector */
A68_360 * HHFBTRN_newtprocs;
A68_359  IHFBTRN;  /* clause result */
A68_402  JHFBTRN;  /* CALL */
A68_359  KHFBTRN;  /* avoid structure result */
A_PROC_ENTRY(transform_multilets);
 /* line 344: */
 /* line 345: */
{ 
 /* line 346: */
 /* line 347: */
PGFBTRN.fn.fn_global = DWLATRN_null_attr;
PGFBTRN.nonlocals = A68_NIL;
NGFBTRN.data[0] = A_UNITE(OGFBTRN,mode1,1,PGFBTRN);
 /* line 348: */
RGFBTRN.fn.fn_global = IWLATRN_null_formula;
RGFBTRN.nonlocals = A68_NIL;
NGFBTRN.data[1] = A_UNITE(QGFBTRN,mode4,4,RGFBTRN);
 /* line 349: */
TGFBTRN.fn.fn_global = NWLATRN_null_type;
TGFBTRN.nonlocals = A68_NIL;
NGFBTRN.data[2] = A_UNITE(SGFBTRN,mode10,10,TGFBTRN);
 /* line 350: */
WGFBTRN.fn.fn_global = DWEBTRN_fnbody_multilets;
WGFBTRN.nonlocals = A68_NIL;
VGFBTRN = WGFBTRN ;
NGFBTRN.data[3] = A_UNITE(UGFBTRN,mode37,37,VGFBTRN);
A_CLOSURE( ZGFBTRN_anonymous, AHFBTRN_anonymous, BHFBTRN_anonymous );
(( BHFBTRN_anonymous * ) ( ZGFBTRN_anonymous.nonlocals )) -> Closure = Closure;
(( BHFBTRN_anonymous * ) ( ZGFBTRN_anonymous.nonlocals )) -> Options = Options;
(( BHFBTRN_anonymous * ) ( ZGFBTRN_anonymous.nonlocals )) -> Msg = Msg;
FHFBTRN = ZGFBTRN_anonymous ;
NGFBTRN.data[4] = A_UNITE(EHFBTRN,mode41,41,FHFBTRN);
HHFBTRN_newtprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HISVEC(GHFBTRN,NGFBTRN,5,A68_405 ));
 /* line 353: */
 /* line 354: */
JHFBTRN = (*(&(AWLATRN_nulltprocs->Closure))) ;
A_CALLPROC(JHFBTRN,(Closure, HHFBTRN_newtprocs, Msg, &KHFBTRN),(Closure, HHFBTRN_newtprocs, Msg, &KHFBTRN,(JHFBTRN).nonlocals));
IHFBTRN = KHFBTRN;
} 
A_PROC_EXIT(transform_multilets);
*ReturnedValue = (IHFBTRN);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void XUEBTRN(void)   /* initialise DECS multilets */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/multilets.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/ostools/assoc/mfiles/options.m","./mfiles/transformprocs.m","./mfiles/modeprocs.m","./mfiles/assmodes.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_46  PVEBTRN;  /* avoid structure result */
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
A_config.source_file = "/import/hazel/home/export/model/ella/transform/assoc/./a68files/multilets.a68";
A_config.translation_time = "Tue Apr  4 10:06:03 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "WUEBTRN (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:06:03 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS multilets);
UEAALIB_a68config(LGAALIB_configinfo, BVEBTRN);
 /* line 56: */
DVEBTRN_generator( A68_TRUE, &PVEBTRN );
OVEBTRN_multilets_options = PVEBTRN;
 /* line 58: */
 /* line 61: */
 /* line 67: */
 /* line 341: */
 /* line 356: */
 /* line 357: */
 /* line 358: */
/*SKIP*/;
A_PROC_EXIT(DECS multilets);
} 
#undef NL
/* end of translation of ./a68files/multilets.a68 */
