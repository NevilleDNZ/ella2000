
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
/* UNAME:JGMBTRN */
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

A_PROCEDURE(struct A68t408 *,A68t412,(A68_VC ,struct A68t410 ,struct A68t108 ),(A68_VC ,struct A68t410 ,struct A68t108 ,void *));
typedef struct A68t412  A68_412 ;    /* PROC(MODE26,MODE410,MODE108) REF MODE408 */

A_PROCEDURE(A68_VOID ,A68t413,(struct A68t408 *,struct A68t108 ),(struct A68t408 *,struct A68t108 ,void *));
typedef struct A68t413  A68_413 ;    /* PROC(REF MODE408,MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t414,(struct A68t408 *,A68_VC *),(struct A68t408 *,A68_VC *,void *));
typedef struct A68t414  A68_414 ;    /* PROC(REF MODE408) MODE26 */

A_PROCEDURE(A68_VOID ,A68t415,(struct A68t408 *,A68_VC ,A68_INT *,struct A68t108 ,struct A68t35 *),(struct A68t408 *,A68_VC ,A68_INT *,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t415  A68_415 ;    /* PROC(REF MODE408,REF MODE26,REF INT,MODE108) MODE35 */

A_PROCEDURE(A68_VOID ,A68t416,(struct A68t408 *,A68_VC ,struct A68t108 ,struct A68t35 *),(struct A68t408 *,A68_VC ,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t416  A68_416 ;    /* PROC(REF MODE408,MODE26,MODE108) MODE35 */
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

A_PROCEDURE(struct A68t417 *,A68t418,(struct A68t419 ,struct A68t108 ),(struct A68t419 ,struct A68t108 ,void *));
typedef struct A68t418  A68_418 ;    /* PROC(MODE419,MODE108) REF MODE417 */
struct A68t419 { A68_INT mode; union {
struct A68t408 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t419  A68_419 ;    /* UNION(REF MODE408,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t420,(struct A68t408 *,A68_LINT *,struct A68t108 ,struct A68t35 *),(struct A68t408 *,A68_LINT *,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t420  A68_420 ;    /* PROC(REF MODE408,REF LONG INT,MODE108) MODE35 */

A_PROCEDURE(A68_VOID ,A68t421,(struct A68t408 *,A68_LINT ,struct A68t108 ,struct A68t35 *),(struct A68t408 *,A68_LINT ,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t421  A68_421 ;    /* PROC(REF MODE408,LONG INT,MODE108) MODE35 */

A_PROCEDURE(A68_VOID ,A68t422,(struct A68t408 *,struct A68t108 ,struct A68t35 *),(struct A68t408 *,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t422  A68_422 ;    /* PROC(REF MODE408,MODE108) MODE35 */

A_PROCEDURE(A68_VOID ,A68t423,(A68_VC ,struct A68t108 ,struct A68t35 *),(A68_VC ,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t423  A68_423 ;    /* PROC(MODE26,MODE108) MODE35 */

A_PROCEDURE(A68_VOID ,A68t424,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t424  A68_424 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t425,(A68_INT ),(A68_INT ,void *));
typedef struct A68t425  A68_425 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_LINT ,A68t426,(void),(void *));
typedef struct A68t426  A68_426 ;    /* PROC LONG INT */

A_PROCEDURE(A68_INT ,A68t427,(A68_VC ,struct A68t108 ),(A68_VC ,struct A68t108 ,void *));
typedef struct A68t427  A68_427 ;    /* PROC(MODE26,MODE108) INT */

A_PROCEDURE(A68_VOID ,A68t428,(A68_VC ,A68_VC ,struct A68t108 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t108 ,A68_VC *,void *));
typedef struct A68t428  A68_428 ;    /* PROC(MODE26,MODE26,MODE108) MODE26 */

A_PROCEDURE(A68_VOID ,A68t429,(A68_VC ,A68_VC ,struct A68t108 ,struct A68t35 *),(A68_VC ,A68_VC ,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t429  A68_429 ;    /* PROC(MODE26,MODE26,MODE108) MODE35 */
struct A68t430{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t430  A68_430 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t431,(A68_VC ,A68_VC ,struct A68t108 ,struct A68t430 *),(A68_VC ,A68_VC ,struct A68t108 ,struct A68t430 *,void *));
typedef struct A68t431  A68_431 ;    /* PROC(MODE26,MODE26,MODE108) MODE430 */

A_PROCEDURE(A68_VOID ,A68t432,(A68_VC *),(A68_VC *,void *));
typedef struct A68t432  A68_432 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t433,(struct A68t46 *),(struct A68t46 *,void *));
typedef struct A68t433  A68_433 ;    /* PROC MODE46 */

A_PROCEDURE(A68_VOID ,A68t434,(A68_VC ,struct A68t108 ,struct A68t46 *),(A68_VC ,struct A68t108 ,struct A68t46 *,void *));
typedef struct A68t434  A68_434 ;    /* PROC(MODE26,MODE108) MODE46 */

A_PROCEDURE(A68_BOOL ,A68t435,(void),(void *));
typedef struct A68t435  A68_435 ;    /* PROC BOOL */
struct A68t437 ;

A_PROCEDURE(A68_VOID ,A68t436,(struct A68t437 ,struct A68t108 ),(struct A68t437 ,struct A68t108 ,void *));
typedef struct A68t436  A68_436 ;    /* PROC(MODE437,MODE108) VOID */
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

A_PROCEDURE(A68_VOID ,A68t448,(A68_VC ,struct A68t407 ,struct A68t449 ,struct A68t450 ),(A68_VC ,struct A68t407 ,struct A68t449 ,struct A68t450 ,void *));
typedef struct A68t448  A68_448 ;    /* PROC(MODE26,MODE407,MODE449,MODE450) VOID */

A_PROCEDURE(A68_BOOL ,A68t449,(A68_VC ,struct A68t432 ),(A68_VC ,struct A68t432 ,void *));
typedef struct A68t449  A68_449 ;    /* PROC(MODE26,MODE432) BOOL */

A_PROCEDURE(A68_BOOL ,A68t450,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t450  A68_450 ;    /* PROC(BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t451,(struct A68t108 ),(struct A68t108 ,void *));
typedef struct A68t451  A68_451 ;    /* PROC(MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t452,(struct A68t451 ,struct A68t108 ),(struct A68t451 ,struct A68t108 ,void *));
typedef struct A68t452  A68_452 ;    /* PROC(MODE451,MODE108) VOID */

A_PROCEDURE(A68_INT ,A68t453,(struct A68t265 *),(struct A68t265 *,void *));
typedef struct A68t453  A68_453 ;    /* PROC(REF MODE265) INT */

A_PROCEDURE(struct A68t262 *,A68t454,(A68_INT ,struct A68t265 *,struct A68t108 ),(A68_INT ,struct A68t265 *,struct A68t108 ,void *));
typedef struct A68t454  A68_454 ;    /* PROC(INT,REF MODE265,MODE108) REF MODE262 */

A_PROCEDURE(struct A68t262 *,A68t455,(struct A68t265 *),(struct A68t265 *,void *));
typedef struct A68t455  A68_455 ;    /* PROC(REF MODE265) REF MODE262 */

A_PROCEDURE(struct A68t262 **,A68t456,(struct A68t261 ,struct A68t262 **,struct A68t265 *,struct A68t108 ),(struct A68t261 ,struct A68t262 **,struct A68t265 *,struct A68t108 ,void *));
typedef struct A68t456  A68_456 ;    /* PROC(MODE261,REF REF MODE262,REF MODE265,MODE108) REF REF MODE262 */

A_PROCEDURE(A68_VOID ,A68t457,(struct A68t262 **,struct A68t265 *,struct A68t108 ),(struct A68t262 **,struct A68t265 *,struct A68t108 ,void *));
typedef struct A68t457  A68_457 ;    /* PROC(REF REF MODE262,REF MODE265,MODE108) VOID */

A_PROCEDURE(struct A68t265 *,A68t458,(void),(void *));
typedef struct A68t458  A68_458 ;    /* PROC REF MODE265 */

A_PROCEDURE(A68_INT ,A68t459,(struct A68t265 *,struct A68t108 ),(struct A68t265 *,struct A68t108 ,void *));
typedef struct A68t459  A68_459 ;    /* PROC(REF MODE265,MODE108) INT */

A_PROCEDURE(struct A68t265 *,A68t460,(struct A68t265 *,struct A68t108 ),(struct A68t265 *,struct A68t108 ,void *));
typedef struct A68t460  A68_460 ;    /* PROC(REF MODE265,MODE108) REF MODE265 */

A_PROCEDURE(A68_VOID ,A68t461,(struct A68t407 ),(struct A68t407 ,void *));
typedef struct A68t461  A68_461 ;    /* PROC(MODE407) VOID */

A_PROCEDURE(A68_VOID ,A68t462,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t462  A68_462 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,59,A68t463);
typedef struct A68t463  A68_463 ;    /* STRUCT 59 CHAR */
struct A68t464{
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
typedef struct A68t464  A68_464 ;    /* STRUCT(REF MODE255,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL)  */
struct A68t465{
A68_INT  Mapno;
A_PAD_INT(PAD_154)
struct A68t255 * Env;
};
typedef struct A68t465  A68_465 ;    /* STRUCT(INT,REF MODE255)  */

A_PROCEDURE(A68_VOID ,A68t466,(struct A68t255 *,struct A68t464 *),(struct A68t255 *,struct A68t464 *,void *));
typedef struct A68t466  A68_466 ;    /* PROC(REF MODE255) MODE464 */

A_PROCEDURE(struct A68t255 *,A68t467,(struct A68t464 *),(struct A68t464 *,void *));
typedef struct A68t467  A68_467 ;    /* PROC(REF MODE464) REF MODE255 */

A_PROCEDURE(A68_VOID ,A68t468,(struct A68t464 *,struct A68t256 *),(struct A68t464 *,struct A68t256 *,void *));
typedef struct A68t468  A68_468 ;    /* PROC(REF MODE464) REF MODE256 */

A_PROCEDURE(A68_VOID ,A68t469,(A68_BOOL ,struct A68t256 *),(A68_BOOL ,struct A68t256 *,void *));
typedef struct A68t469  A68_469 ;    /* PROC(BOOL) MODE256 */

A_PROCEDURE(A68_VOID ,A68t470,(struct A68t464 *,struct A68t257 *),(struct A68t464 *,struct A68t257 *,void *));
typedef struct A68t470  A68_470 ;    /* PROC(REF MODE464) REF MODE257 */

A_PROCEDURE(A68_VOID ,A68t471,(A68_BOOL ,struct A68t257 *),(A68_BOOL ,struct A68t257 *,void *));
typedef struct A68t471  A68_471 ;    /* PROC(BOOL) MODE257 */

A_PROCEDURE(A68_VOID ,A68t472,(struct A68t464 *,struct A68t258 *),(struct A68t464 *,struct A68t258 *,void *));
typedef struct A68t472  A68_472 ;    /* PROC(REF MODE464) REF MODE258 */

A_PROCEDURE(A68_VOID ,A68t473,(A68_BOOL ,struct A68t258 *),(A68_BOOL ,struct A68t258 *,void *));
typedef struct A68t473  A68_473 ;    /* PROC(BOOL) MODE258 */

A_PROCEDURE(A68_VOID ,A68t474,(struct A68t464 *,struct A68t259 *),(struct A68t464 *,struct A68t259 *,void *));
typedef struct A68t474  A68_474 ;    /* PROC(REF MODE464) REF MODE259 */

A_PROCEDURE(A68_VOID ,A68t475,(A68_BOOL ,struct A68t259 *),(A68_BOOL ,struct A68t259 *,void *));
typedef struct A68t475  A68_475 ;    /* PROC(BOOL) MODE259 */

A_PROCEDURE(A68_VOID ,A68t476,(struct A68t464 *,struct A68t260 *),(struct A68t464 *,struct A68t260 *,void *));
typedef struct A68t476  A68_476 ;    /* PROC(REF MODE464) REF MODE260 */

A_PROCEDURE(A68_VOID ,A68t477,(A68_BOOL ,struct A68t260 *),(A68_BOOL ,struct A68t260 *,void *));
typedef struct A68t477  A68_477 ;    /* PROC(BOOL) MODE260 */

A_PROCEDURE(A68_VOID ,A68t478,(struct A68t464 *,A68_INT ,struct A68t256 *),(struct A68t464 *,A68_INT ,struct A68t256 *,void *));
typedef struct A68t478  A68_478 ;    /* PROC(REF MODE464,INT) REF MODE256 */
A_ISTRUCT(A68_CHAR ,32,A68t479);
typedef struct A68t479  A68_479 ;    /* STRUCT 32 CHAR */

A_PROCEDURE(A68_VOID ,A68t480,(struct A68t464 *,A68_INT ,struct A68t257 *),(struct A68t464 *,A68_INT ,struct A68t257 *,void *));
typedef struct A68t480  A68_480 ;    /* PROC(REF MODE464,INT) REF MODE257 */
A_ISTRUCT(A68_CHAR ,31,A68t481);
typedef struct A68t481  A68_481 ;    /* STRUCT 31 CHAR */

A_PROCEDURE(A68_VOID ,A68t482,(struct A68t464 *,A68_INT ,struct A68t258 *),(struct A68t464 *,A68_INT ,struct A68t258 *,void *));
typedef struct A68t482  A68_482 ;    /* PROC(REF MODE464,INT) REF MODE258 */

A_PROCEDURE(A68_VOID ,A68t483,(struct A68t464 *,A68_INT ,struct A68t259 *),(struct A68t464 *,A68_INT ,struct A68t259 *,void *));
typedef struct A68t483  A68_483 ;    /* PROC(REF MODE464,INT) REF MODE259 */
A_ISTRUCT(A68_CHAR ,34,A68t484);
typedef struct A68t484  A68_484 ;    /* STRUCT 34 CHAR */

A_PROCEDURE(A68_VOID ,A68t485,(struct A68t464 *,A68_INT ,struct A68t260 *),(struct A68t464 *,A68_INT ,struct A68t260 *,void *));
typedef struct A68t485  A68_485 ;    /* PROC(REF MODE464,INT) REF MODE260 */
A_ISTRUCT(A68_CHAR ,30,A68t486);
typedef struct A68t486  A68_486 ;    /* STRUCT 30 CHAR */

A_PROCEDURE(A68_BOOL ,A68t487,(A68_INT ),(A68_INT ,void *));
typedef struct A68t487  A68_487 ;    /* PROC(INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t488,(struct A68t255 *,struct A68t265 *,struct A68t487 ,struct A68t108 ,struct A68t464 *),(struct A68t255 *,struct A68t265 *,struct A68t487 ,struct A68t108 ,struct A68t464 *,void *));
typedef struct A68t488  A68_488 ;    /* PROC(REF MODE255,REF MODE265,MODE487,MODE108) MODE464 */
A_VECTOR(struct A68t465 ,A68t489);
typedef struct A68t489  A68_489 ;    /* VECTOR [] MODE465 */

A_PROCEDURE(A68_VOID ,A68t490,(A68_BOOL ,struct A68t489 *),(A68_BOOL ,struct A68t489 *,void *));
typedef struct A68t490  A68_490 ;    /* PROC(BOOL) MODE489 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from closureprocs --- */
extern A68_INT  ZKCATRN_maxclosureno(struct A68t265 *);
extern A68_262 * ELCATRN_find_outers(A68_INT ,struct A68t265 *,struct A68t108 );
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
/* --- End of imports from osinterface --- */


/* --- Imports from transformprocs --- */
extern A68_360 * THJATRN_make_newtprocs(struct A68t360 *,struct A68t404 );
extern A68_VOID  MLJATRN_discard_tprocs(struct A68t360 *);
extern A68_360 * AWLATRN_nulltprocs;
/* --- End of imports from transformprocs --- */


/* --- Imports from modeprocs --- */
/* --- End of imports from modeprocs --- */


/* --- Imports from assmodes --- */
extern A68_255 * GBAATRN_nilenviron;
extern A68_256  MCAATRN_nullattrdecs;
extern A68_257  SCAATRN_nullintdecs;
extern A68_259  EDAATRN_nullconstdecs;
extern A68_260  KDAATRN_nullfndecs;
extern A68_155 * IFAATRN_maketname(A68_INT );
#define OKAATRN_outerdec 1
/* --- End of imports from assmodes --- */


/* --- Imports from messageproc --- */
/* --- End of imports from messageproc --- */


/* --- Imports from basics --- */
extern A68_VOID  QKDAOST_abort(A68_VC );
/* --- End of imports from basics --- */


/* --- Imports from putstrings --- */
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void SKCATRN(void);   /* closureprocs */
extern void PCAAOST(void);   /* osinterface */
extern void IHJATRN(void);   /* transformprocs */
extern void HNMATRN(void);   /* modeprocs */
extern void BAAATRN(void);   /* assmodes */
extern void JFAAOSI(void);   /* messageproc */
extern void JSCAOST(void);   /* basics */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_463   NGMBTRN = {"$Id: environprocs.a68,v 34.2 1995/03/29 13:02:43 ella Exp $"}; 
A_GISVEC(A68_VC ,OGMBTRN,NGMBTRN,59)
static A68_479   PJMBTRN = {"makenewattrs not yet implemented"}; 
A_GISVEC(A68_VC ,QJMBTRN,PJMBTRN,32)
static A68_481   VJMBTRN = {"makenewints not yet implemented"}; 
A_GISVEC(A68_VC ,WJMBTRN,VJMBTRN,31)
static A68_484   SKMBTRN = {"makenewcontsts not yet implemented"}; 
A_GISVEC(A68_VC ,TKMBTRN,SKMBTRN,34)
static A68_486   YKMBTRN = {"makenewfns not yet implemented"}; 
A_GISVEC(A68_VC ,ZKMBTRN,YKMBTRN,30)
typedef struct   /* env of non-global proc */
{
A68_256  CHMBTRN_old;
} HHMBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_257  PHMBTRN_old;
} UHMBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_258  CIMBTRN_old;
} HIMBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_259  PIMBTRN_old;
} UIMBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_260  CJMBTRN_old;
} HJMBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  Newsize;
A_PAD_INT(PAD_155)
} GKMBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  LLMBTRN_closuretop;
A_PAD_INT(PAD_156)
} RLMBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_255 ** GMMBTRN_outerenv;
A68_489  ULMBTRN_closuremap;
A68_BOOL * NLMBTRN_has_changes;
A68_INT * MLMBTRN_typecnt;
A68_265 * Closure;
A68_108  Msg;
} LMMBTRN_count_map;
typedef struct   /* env of non-global proc */
{
A68_255 ** GMMBTRN_outerenv;
A68_489  ULMBTRN_closuremap;
} QNMBTRN_type_update;

A68_VOID  QGMBTRN_makeenvironc(A68_255 * E, A68_464  *ReturnedValue);

A68_255 * UGMBTRN_newenviron(A68_464 * Ec);

A68_VOID  AHMBTRN_newattrs(A68_464 * Ec, A68_256  *ReturnedValue);

A_STATIC A68_VOID  GHMBTRN_generator(A68_BOOL  EHMBTRN_anonymous, A68_256  *ReturnedValue, void *NonLocals);

A68_VOID  NHMBTRN_newints(A68_464 * Ec, A68_257  *ReturnedValue);

A_STATIC A68_VOID  THMBTRN_generator(A68_BOOL  RHMBTRN_anonymous, A68_257  *ReturnedValue, void *NonLocals);

A68_VOID  AIMBTRN_newtypes(A68_464 * Ec, A68_258  *ReturnedValue);

A_STATIC A68_VOID  GIMBTRN_generator(A68_BOOL  EIMBTRN_anonymous, A68_258  *ReturnedValue, void *NonLocals);

A68_VOID  NIMBTRN_newconsts(A68_464 * Ec, A68_259  *ReturnedValue);

A_STATIC A68_VOID  TIMBTRN_generator(A68_BOOL  RIMBTRN_anonymous, A68_259  *ReturnedValue, void *NonLocals);

A68_VOID  AJMBTRN_newfns(A68_464 * Ec, A68_260  *ReturnedValue);

A_STATIC A68_VOID  GJMBTRN_generator(A68_BOOL  EJMBTRN_anonymous, A68_260  *ReturnedValue, void *NonLocals);

A68_VOID  OJMBTRN_makenewattrs(A68_464 * Ec, A68_INT  Newsize, A68_256  *ReturnedValue);

A68_VOID  UJMBTRN_makenewints(A68_464 * Ec, A68_INT  Newsize, A68_257  *ReturnedValue);

A68_VOID  AKMBTRN_makenewtypes(A68_464 * Ec, A68_INT  Newsize, A68_258  *ReturnedValue);

A_STATIC A68_VOID  FKMBTRN_generator(A68_BOOL  DKMBTRN_anonymous, A68_258  *ReturnedValue, void *NonLocals);

A68_VOID  RKMBTRN_makenewcontsts(A68_464 * Ec, A68_INT  Newsize, A68_259  *ReturnedValue);

A68_VOID  XKMBTRN_makenewfns(A68_464 * Ec, A68_INT  Newsize, A68_260  *ReturnedValue);

A68_VOID  FLMBTRN_update_bodies(A68_255 * Old, A68_265 * Closure, A68_487  Is_modified, A68_108  Msg, A68_464  *ReturnedValue);

A_STATIC A68_VOID  QLMBTRN_generator(A68_BOOL  OLMBTRN_anonymous, A68_489  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KMMBTRN_count_map(A68_154  T, A68_360 * Tprocs, A68_327  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PNMBTRN_type_update(A68_154  T, A68_360 * Tprocs, A68_327  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GHMBTRN_generator(A68_BOOL  EHMBTRN_anonymous, A68_256  *ReturnedValue, void *NonLocals)
#define NL(x) (((HHMBTRN_generator *)NonLocals)->x)
{ 
A68_256  IHMBTRN;  /* clause result */
A68_256  JHMBTRN;  /* OPERATORS - dynamic generator */
{ 
JHMBTRN.upb = NL(CHMBTRN_old).upb ;
( EHMBTRN_anonymous? A_VLOC(A68_135 *,JHMBTRN): A_VHEAP(A68_135 *,JHMBTRN) );
IHMBTRN = JHMBTRN;
} 
*ReturnedValue = (IHMBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  THMBTRN_generator(A68_BOOL  RHMBTRN_anonymous, A68_257  *ReturnedValue, void *NonLocals)
#define NL(x) (((UHMBTRN_generator *)NonLocals)->x)
{ 
A68_257  VHMBTRN;  /* clause result */
A68_257  WHMBTRN;  /* OPERATORS - dynamic generator */
{ 
WHMBTRN.upb = NL(PHMBTRN_old).upb ;
( RHMBTRN_anonymous? A_VLOC(A68_151 *,WHMBTRN): A_VHEAP(A68_151 *,WHMBTRN) );
VHMBTRN = WHMBTRN;
} 
*ReturnedValue = (VHMBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  GIMBTRN_generator(A68_BOOL  EIMBTRN_anonymous, A68_258  *ReturnedValue, void *NonLocals)
#define NL(x) (((HIMBTRN_generator *)NonLocals)->x)
{ 
A68_258  IIMBTRN;  /* clause result */
A68_258  JIMBTRN;  /* OPERATORS - dynamic generator */
{ 
JIMBTRN.upb = NL(CIMBTRN_old).upb ;
( EIMBTRN_anonymous? A_VLOC(A68_169 *,JIMBTRN): A_VHEAP(A68_169 *,JIMBTRN) );
IIMBTRN = JIMBTRN;
} 
*ReturnedValue = (IIMBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  TIMBTRN_generator(A68_BOOL  RIMBTRN_anonymous, A68_259  *ReturnedValue, void *NonLocals)
#define NL(x) (((UIMBTRN_generator *)NonLocals)->x)
{ 
A68_259  VIMBTRN;  /* clause result */
A68_259  WIMBTRN;  /* OPERATORS - dynamic generator */
{ 
WIMBTRN.upb = NL(PIMBTRN_old).upb ;
( RIMBTRN_anonymous? A_VLOC(A68_175 *,WIMBTRN): A_VHEAP(A68_175 *,WIMBTRN) );
VIMBTRN = WIMBTRN;
} 
*ReturnedValue = (VIMBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  GJMBTRN_generator(A68_BOOL  EJMBTRN_anonymous, A68_260  *ReturnedValue, void *NonLocals)
#define NL(x) (((HJMBTRN_generator *)NonLocals)->x)
{ 
A68_260  IJMBTRN;  /* clause result */
A68_260  JJMBTRN;  /* OPERATORS - dynamic generator */
{ 
JJMBTRN.upb = NL(CJMBTRN_old).upb ;
( EJMBTRN_anonymous? A_VLOC(A68_252 *,JJMBTRN): A_VHEAP(A68_252 *,JJMBTRN) );
IJMBTRN = JJMBTRN;
} 
*ReturnedValue = (IJMBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  FKMBTRN_generator(A68_BOOL  DKMBTRN_anonymous, A68_258  *ReturnedValue, void *NonLocals)
#define NL(x) (((GKMBTRN_generator *)NonLocals)->x)
{ 
A68_258  HKMBTRN;  /* clause result */
A68_258  IKMBTRN;  /* OPERATORS - dynamic generator */
{ 
IKMBTRN.upb = NL(Newsize) ;
( DKMBTRN_anonymous? A_VLOC(A68_169 *,IKMBTRN): A_VHEAP(A68_169 *,IKMBTRN) );
HKMBTRN = IKMBTRN;
} 
*ReturnedValue = (HKMBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  QLMBTRN_generator(A68_BOOL  OLMBTRN_anonymous, A68_489  *ReturnedValue, void *NonLocals)
#define NL(x) (((RLMBTRN_generator *)NonLocals)->x)
{ 
A68_489  SLMBTRN;  /* clause result */
A68_489  TLMBTRN;  /* OPERATORS - dynamic generator */
{ 
TLMBTRN.upb = NL(LLMBTRN_closuretop) ;
( OLMBTRN_anonymous? A_VLOC(A68_465 ,TLMBTRN): A_VHEAP(A68_465 ,TLMBTRN) );
SLMBTRN = TLMBTRN;
} 
*ReturnedValue = (SLMBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  KMMBTRN_count_map(A68_154  T, A68_360 * Tprocs, A68_327  *ReturnedValue, void *NonLocals)
#define NL(x) (((LMMBTRN_count_map *)NonLocals)->x)
{ 
A68_154  MMMBTRN;  /* united object - for case conformity */
A68_155 * NMMBTRN_tn;
A68_374  OMMBTRN;  /* CALL */
A68_258  PMMBTRN;  /* OPERATORS - simple index */
A68_INT  QMMBTRN;  /* YIELD */
A68_331  RMMBTRN;  /* avoid structure result */
A68_331  SMMBTRN_tdc;
A68_INT  TMMBTRN_cln;
A68_465 * UMMBTRN_map;
A68_465  VMMBTRN;  /* collateral clause result */
A68_327  WMMBTRN;  /* collateral clause result */
A68_327  XMMBTRN;  /* clause result */
A68_327  YMMBTRN;  /* collateral clause result */
A68_370  ZMMBTRN;  /* CALL */
A68_327  ANMBTRN;  /* avoid structure result */
A_PROC_ENTRY(count_map);
 /* line 197: */
 /* line 198: */
MMMBTRN = T ;
switch ( MMMBTRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
NMMBTRN_tn = (MMMBTRN.data.mode1);
 /* line 199: */
{ 
 /* line 200: */
OMMBTRN = (*(&(Tprocs->Typedec))) ;
PMMBTRN = (*(&((*NL(GMMBTRN_outerenv))->Types))) ;
QMMBTRN = (*(&(NMMBTRN_tn->Typeno))) ;
A_CALLPROC(OMMBTRN,((*(&A_VINDEX(PMMBTRN,QMMBTRN))), Tprocs, &RMMBTRN),((*(&A_VINDEX(PMMBTRN,QMMBTRN))), Tprocs, &RMMBTRN,(OMMBTRN).nonlocals));
SMMBTRN_tdc = RMMBTRN;
 /* line 202: */
 /* line 203: */
if ( ((*(&(SMMBTRN_tdc.T->Sort)))==OKAATRN_outerdec) )
{ 
TMMBTRN_cln = (*(&((*(&(SMMBTRN_tdc.T->Usage)))->Closureno)));
 /* line 204: */
UMMBTRN_map = (&A_VINDEX(NL(ULMBTRN_closuremap),TMMBTRN_cln));
 /* line 205: */
 /* line 206: */
if ( ((*(&(UMMBTRN_map->Mapno)))==0) )
{ 
(*NL(NLMBTRN_has_changes)) = A68_TRUE;
 /* line 207: */
 /* line 208: */
VMMBTRN.Mapno = (*NL(MLMBTRN_typecnt))+=1;
 /* line 209: */
VMMBTRN.Env = (*(&((&(ELCATRN_find_outers(TMMBTRN_cln, NL(Closure), NL(Msg))->Outer))->Environ)));
(*UMMBTRN_map) = VMMBTRN;
} 
 /* line 210: */
WMMBTRN.T = T;
 /* line 211: */
WMMBTRN.C = A68_FALSE;
XMMBTRN = WMMBTRN;
} 
else
{ 
YMMBTRN.T = T;
 /* line 212: */
 /* line 213: */
 /* line 214: */
YMMBTRN.C = A68_FALSE;
XMMBTRN = YMMBTRN;
} 
} 
break;
default: 
 /* line 215: */
ZMMBTRN = (*(&(AWLATRN_nulltprocs->Type))) ;
A_CALLPROC(ZMMBTRN,(T, Tprocs, &ANMBTRN),(T, Tprocs, &ANMBTRN,(ZMMBTRN).nonlocals));
XMMBTRN = ANMBTRN;
break;
} 
A_PROC_EXIT(count_map);
*ReturnedValue = (XMMBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  PNMBTRN_type_update(A68_154  T, A68_360 * Tprocs, A68_327  *ReturnedValue, void *NonLocals)
#define NL(x) (((QNMBTRN_type_update *)NonLocals)->x)
{ 
A68_154  RNMBTRN;  /* united object - for case conformity */
A68_155 * SNMBTRN_tn;
A68_374  TNMBTRN;  /* CALL */
A68_258  UNMBTRN;  /* OPERATORS - simple index */
A68_INT  VNMBTRN;  /* YIELD */
A68_331  WNMBTRN;  /* avoid structure result */
A68_331  XNMBTRN_tdc;
A68_INT  YNMBTRN_cln;
A68_465 * ZNMBTRN_map;
A68_327  AOMBTRN;  /* collateral clause result */
A68_154  BOMBTRN;  /* OPERATORS - mode -> union mode */
A68_155 * COMBTRN;  /* YIELD */
A68_327  DOMBTRN;  /* clause result */
A68_327  EOMBTRN;  /* collateral clause result */
A68_327  FOMBTRN;  /* collateral clause result */
A68_370  GOMBTRN;  /* CALL */
A68_327  HOMBTRN;  /* avoid structure result */
A_PROC_ENTRY(type_update);
 /* line 231: */
 /* line 232: */
RNMBTRN = T ;
switch ( RNMBTRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
SNMBTRN_tn = (RNMBTRN.data.mode1);
 /* line 233: */
{ 
 /* line 234: */
TNMBTRN = (*(&(Tprocs->Typedec))) ;
UNMBTRN = (*(&((*NL(GMMBTRN_outerenv))->Types))) ;
VNMBTRN = (*(&(SNMBTRN_tn->Typeno))) ;
A_CALLPROC(TNMBTRN,((*(&A_VINDEX(UNMBTRN,VNMBTRN))), Tprocs, &WNMBTRN),((*(&A_VINDEX(UNMBTRN,VNMBTRN))), Tprocs, &WNMBTRN,(TNMBTRN).nonlocals));
XNMBTRN_tdc = WNMBTRN;
 /* line 235: */
 /* line 236: */
if ( ((*(&(XNMBTRN_tdc.T->Sort)))==OKAATRN_outerdec) )
{ 
YNMBTRN_cln = (*(&((*(&(XNMBTRN_tdc.T->Usage)))->Closureno)));
 /* line 237: */
ZNMBTRN_map = (&A_VINDEX(NL(ULMBTRN_closuremap),YNMBTRN_cln));
 /* line 238: */
 /* line 239: */
if ( ((*(&(ZNMBTRN_map->Mapno)))!=(*(&(SNMBTRN_tn->Typeno)))) )
{ 
COMBTRN = IFAATRN_maketname((*(&(ZNMBTRN_map->Mapno)))) ;
AOMBTRN.T = A_UNITE(BOMBTRN,mode1,1,COMBTRN);
 /* line 240: */
AOMBTRN.C = A68_TRUE;
DOMBTRN = AOMBTRN;
} 
else
{ 
EOMBTRN.T = T;
 /* line 241: */
 /* line 242: */
EOMBTRN.C = A68_FALSE;
DOMBTRN = EOMBTRN;
} 
} 
else
{ 
FOMBTRN.T = T;
 /* line 243: */
 /* line 244: */
 /* line 245: */
FOMBTRN.C = A68_FALSE;
DOMBTRN = FOMBTRN;
} 
} 
break;
default: 
 /* line 246: */
GOMBTRN = (*(&(AWLATRN_nulltprocs->Type))) ;
A_CALLPROC(GOMBTRN,(T, Tprocs, &HOMBTRN),(T, Tprocs, &HOMBTRN,(GOMBTRN).nonlocals));
DOMBTRN = HOMBTRN;
break;
} 
A_PROC_EXIT(type_update);
*ReturnedValue = (DOMBTRN);
return;
} 
#undef NL

A68_VOID  QGMBTRN_makeenvironc(A68_255 * E, A68_464  *ReturnedValue)
{ 
A68_464  RGMBTRN;  /* collateral clause result */
A68_464  SGMBTRN;  /* clause result */
A_PROC_ENTRY(makeenvironc);
 /* line 50: */
RGMBTRN.E = E;
RGMBTRN.C = A68_FALSE;
RGMBTRN.Ac = A68_FALSE;
RGMBTRN.Ic = A68_FALSE;
RGMBTRN.Tc = A68_FALSE;
RGMBTRN.Cc = A68_FALSE;
RGMBTRN.Fc = A68_FALSE;
SGMBTRN = RGMBTRN;
A_PROC_EXIT(makeenvironc);
*ReturnedValue = (SGMBTRN);
return;
} 
#undef NL

A68_255 * UGMBTRN_newenviron(A68_464 * Ec)
{ 
A68_255 * VGMBTRN;  /* clause result */
A68_BOOL * WGMBTRN;  /* YIELD */
A68_255 * XGMBTRN;  /* YIELD */
A68_255 ** YGMBTRN;  /* YIELD */
A_PROC_ENTRY(newenviron);
 /* line 56: */
 /* line 57: */
 /* line 58: */
if ( (*(&(Ec->C))) )
{ 
VGMBTRN = (*(&(Ec->E)));
} 
else
{ 
WGMBTRN = (&(Ec->C)) ;
(*WGMBTRN) = A68_TRUE;
 /* line 59: */
 /* line 60: */
XGMBTRN = A_HEAP(A68_255 ) ;
(*XGMBTRN) = (*(*(&(Ec->E)))) ;
YGMBTRN = (&(Ec->E)) ;
VGMBTRN = (*YGMBTRN) = XGMBTRN;
} 
A_PROC_EXIT(newenviron);
return( VGMBTRN );
} 
#undef NL

A68_VOID  AHMBTRN_newattrs(A68_464 * Ec, A68_256  *ReturnedValue)
{ 
A68_256  BHMBTRN;  /* clause result */
A68_256  CHMBTRN_old;
A68_BOOL * DHMBTRN;  /* YIELD */
A68_469  FHMBTRN_generator;   /* proc value of non-global proc */
A68_256  KHMBTRN;  /* avoid structure result */
A68_256 * LHMBTRN;  /* YIELD */
A_PROC_ENTRY(newattrs);
 /* line 67: */
 /* line 68: */
 /* line 69: */
if ( (*(&(Ec->Ac))) )
{ 
BHMBTRN = (*(&((*(&(Ec->E)))->Attrs)));
} 
else
{ 
CHMBTRN_old = (*(&((*(&(Ec->E)))->Attrs)));
 /* line 70: */
DHMBTRN = (&(Ec->Ac)) ;
(*DHMBTRN) = A68_TRUE;
 /* line 71: */
A_CLOSURE( FHMBTRN_generator, GHMBTRN_generator, HHMBTRN_generator );
(( HHMBTRN_generator * ) ( FHMBTRN_generator.nonlocals )) -> CHMBTRN_old = CHMBTRN_old;
 /* line 72: */
A_CALLPROC(FHMBTRN_generator,(A68_FALSE, &KHMBTRN),(A68_FALSE, &KHMBTRN,(FHMBTRN_generator).nonlocals));
A_VASSIGN2(CHMBTRN_old,KHMBTRN,A68_135 *) ;
LHMBTRN = (&(UGMBTRN_newenviron(Ec)->Attrs)) ;
BHMBTRN = (*LHMBTRN) = KHMBTRN;
} 
A_PROC_EXIT(newattrs);
*ReturnedValue = (BHMBTRN);
return;
} 
#undef NL

A68_VOID  NHMBTRN_newints(A68_464 * Ec, A68_257  *ReturnedValue)
{ 
A68_257  OHMBTRN;  /* clause result */
A68_257  PHMBTRN_old;
A68_BOOL * QHMBTRN;  /* YIELD */
A68_471  SHMBTRN_generator;   /* proc value of non-global proc */
A68_257  XHMBTRN;  /* avoid structure result */
A68_257 * YHMBTRN;  /* YIELD */
A_PROC_ENTRY(newints);
 /* line 75: */
 /* line 76: */
 /* line 77: */
if ( (*(&(Ec->Ic))) )
{ 
OHMBTRN = (*(&((*(&(Ec->E)))->Ints)));
} 
else
{ 
PHMBTRN_old = (*(&((*(&(Ec->E)))->Ints)));
 /* line 78: */
QHMBTRN = (&(Ec->Ic)) ;
(*QHMBTRN) = A68_TRUE;
 /* line 79: */
A_CLOSURE( SHMBTRN_generator, THMBTRN_generator, UHMBTRN_generator );
(( UHMBTRN_generator * ) ( SHMBTRN_generator.nonlocals )) -> PHMBTRN_old = PHMBTRN_old;
 /* line 80: */
A_CALLPROC(SHMBTRN_generator,(A68_FALSE, &XHMBTRN),(A68_FALSE, &XHMBTRN,(SHMBTRN_generator).nonlocals));
A_VASSIGN2(PHMBTRN_old,XHMBTRN,A68_151 *) ;
YHMBTRN = (&(UGMBTRN_newenviron(Ec)->Ints)) ;
OHMBTRN = (*YHMBTRN) = XHMBTRN;
} 
A_PROC_EXIT(newints);
*ReturnedValue = (OHMBTRN);
return;
} 
#undef NL

A68_VOID  AIMBTRN_newtypes(A68_464 * Ec, A68_258  *ReturnedValue)
{ 
A68_258  BIMBTRN;  /* clause result */
A68_258  CIMBTRN_old;
A68_BOOL * DIMBTRN;  /* YIELD */
A68_473  FIMBTRN_generator;   /* proc value of non-global proc */
A68_258  KIMBTRN;  /* avoid structure result */
A68_258 * LIMBTRN;  /* YIELD */
A_PROC_ENTRY(newtypes);
 /* line 83: */
 /* line 84: */
 /* line 85: */
if ( (*(&(Ec->Tc))) )
{ 
BIMBTRN = (*(&((*(&(Ec->E)))->Types)));
} 
else
{ 
CIMBTRN_old = (*(&((*(&(Ec->E)))->Types)));
 /* line 86: */
DIMBTRN = (&(Ec->Tc)) ;
(*DIMBTRN) = A68_TRUE;
 /* line 87: */
A_CLOSURE( FIMBTRN_generator, GIMBTRN_generator, HIMBTRN_generator );
(( HIMBTRN_generator * ) ( FIMBTRN_generator.nonlocals )) -> CIMBTRN_old = CIMBTRN_old;
 /* line 88: */
A_CALLPROC(FIMBTRN_generator,(A68_FALSE, &KIMBTRN),(A68_FALSE, &KIMBTRN,(FIMBTRN_generator).nonlocals));
A_VASSIGN2(CIMBTRN_old,KIMBTRN,A68_169 *) ;
LIMBTRN = (&(UGMBTRN_newenviron(Ec)->Types)) ;
BIMBTRN = (*LIMBTRN) = KIMBTRN;
} 
A_PROC_EXIT(newtypes);
*ReturnedValue = (BIMBTRN);
return;
} 
#undef NL

A68_VOID  NIMBTRN_newconsts(A68_464 * Ec, A68_259  *ReturnedValue)
{ 
A68_259  OIMBTRN;  /* clause result */
A68_259  PIMBTRN_old;
A68_BOOL * QIMBTRN;  /* YIELD */
A68_475  SIMBTRN_generator;   /* proc value of non-global proc */
A68_259  XIMBTRN;  /* avoid structure result */
A68_259 * YIMBTRN;  /* YIELD */
A_PROC_ENTRY(newconsts);
 /* line 91: */
 /* line 92: */
 /* line 93: */
if ( (*(&(Ec->Cc))) )
{ 
OIMBTRN = (*(&((*(&(Ec->E)))->Consts)));
} 
else
{ 
PIMBTRN_old = (*(&((*(&(Ec->E)))->Consts)));
 /* line 94: */
QIMBTRN = (&(Ec->Cc)) ;
(*QIMBTRN) = A68_TRUE;
 /* line 95: */
A_CLOSURE( SIMBTRN_generator, TIMBTRN_generator, UIMBTRN_generator );
(( UIMBTRN_generator * ) ( SIMBTRN_generator.nonlocals )) -> PIMBTRN_old = PIMBTRN_old;
 /* line 96: */
A_CALLPROC(SIMBTRN_generator,(A68_FALSE, &XIMBTRN),(A68_FALSE, &XIMBTRN,(SIMBTRN_generator).nonlocals));
A_VASSIGN2(PIMBTRN_old,XIMBTRN,A68_175 *) ;
YIMBTRN = (&(UGMBTRN_newenviron(Ec)->Consts)) ;
OIMBTRN = (*YIMBTRN) = XIMBTRN;
} 
A_PROC_EXIT(newconsts);
*ReturnedValue = (OIMBTRN);
return;
} 
#undef NL

A68_VOID  AJMBTRN_newfns(A68_464 * Ec, A68_260  *ReturnedValue)
{ 
A68_260  BJMBTRN;  /* clause result */
A68_260  CJMBTRN_old;
A68_BOOL * DJMBTRN;  /* YIELD */
A68_477  FJMBTRN_generator;   /* proc value of non-global proc */
A68_260  KJMBTRN;  /* avoid structure result */
A68_260 * LJMBTRN;  /* YIELD */
A_PROC_ENTRY(newfns);
 /* line 99: */
 /* line 100: */
 /* line 101: */
if ( (*(&(Ec->Fc))) )
{ 
BJMBTRN = (*(&((*(&(Ec->E)))->Fns)));
} 
else
{ 
CJMBTRN_old = (*(&((*(&(Ec->E)))->Fns)));
 /* line 102: */
DJMBTRN = (&(Ec->Fc)) ;
(*DJMBTRN) = A68_TRUE;
 /* line 103: */
A_CLOSURE( FJMBTRN_generator, GJMBTRN_generator, HJMBTRN_generator );
(( HJMBTRN_generator * ) ( FJMBTRN_generator.nonlocals )) -> CJMBTRN_old = CJMBTRN_old;
 /* line 104: */
A_CALLPROC(FJMBTRN_generator,(A68_FALSE, &KJMBTRN),(A68_FALSE, &KJMBTRN,(FJMBTRN_generator).nonlocals));
A_VASSIGN2(CJMBTRN_old,KJMBTRN,A68_252 *) ;
LJMBTRN = (&(UGMBTRN_newenviron(Ec)->Fns)) ;
BJMBTRN = (*LJMBTRN) = KJMBTRN;
} 
A_PROC_EXIT(newfns);
*ReturnedValue = (BJMBTRN);
return;
} 
#undef NL

A68_VOID  OJMBTRN_makenewattrs(A68_464 * Ec, A68_INT  Newsize, A68_256  *ReturnedValue)
{ 
A68_256  RJMBTRN;  /* clause result */
A_PROC_ENTRY(makenewattrs);
 /* line 112: */
{ 
QKDAOST_abort(QJMBTRN);
RJMBTRN = MCAATRN_nullattrdecs;
} 
A_PROC_EXIT(makenewattrs);
*ReturnedValue = (RJMBTRN);
return;
} 
#undef NL

A68_VOID  UJMBTRN_makenewints(A68_464 * Ec, A68_INT  Newsize, A68_257  *ReturnedValue)
{ 
A68_257  XJMBTRN;  /* clause result */
A_PROC_ENTRY(makenewints);
 /* line 115: */
{ 
QKDAOST_abort(WJMBTRN);
XJMBTRN = SCAATRN_nullintdecs;
} 
A_PROC_EXIT(makenewints);
*ReturnedValue = (XJMBTRN);
return;
} 
#undef NL

A68_VOID  AKMBTRN_makenewtypes(A68_464 * Ec, A68_INT  Newsize, A68_258  *ReturnedValue)
{ 
A68_258  BKMBTRN_old;
A68_BOOL * CKMBTRN;  /* YIELD */
A68_473  EKMBTRN_generator;   /* proc value of non-global proc */
A68_258  JKMBTRN;  /* avoid structure result */
A68_258 * KKMBTRN;  /* YIELD */
A68_258  LKMBTRN;  /* OPERATORS - trim index */
A68_258  MKMBTRN;  /* OPERATORS - trim index */
A68_258  NKMBTRN;  /* YIELD */
A68_258  OKMBTRN;  /* clause result */
A_PROC_ENTRY(makenewtypes);
 /* line 118: */
{ 
BKMBTRN_old = (*(&((*(&(Ec->E)))->Types)));
 /* line 119: */
CKMBTRN = (&(Ec->Tc)) ;
(*CKMBTRN) = A68_TRUE;
 /* line 120: */
A_CLOSURE( EKMBTRN_generator, FKMBTRN_generator, GKMBTRN_generator );
(( GKMBTRN_generator * ) ( EKMBTRN_generator.nonlocals )) -> Newsize = Newsize;
A_CALLPROC(EKMBTRN_generator,(A68_FALSE, &JKMBTRN),(A68_FALSE, &JKMBTRN,(EKMBTRN_generator).nonlocals));
KKMBTRN = (&(UGMBTRN_newenviron(Ec)->Types)) ;
(*KKMBTRN) = JKMBTRN;
 /* line 121: */
LKMBTRN = (*(&((*(&(Ec->E)))->Types))) ;
NKMBTRN = A_VTRIM(MKMBTRN,(LKMBTRN),A_VTSCRIPT(&(MKMBTRN.upb),(LKMBTRN).upb,1,BKMBTRN_old.upb)) ;
A_VASSIGN2(BKMBTRN_old,NKMBTRN,A68_169 *);
 /* line 122: */
 /* line 123: */
OKMBTRN = (*(&((*(&(Ec->E)))->Types)));
} 
A_PROC_EXIT(makenewtypes);
*ReturnedValue = (OKMBTRN);
return;
} 
#undef NL

A68_VOID  RKMBTRN_makenewcontsts(A68_464 * Ec, A68_INT  Newsize, A68_259  *ReturnedValue)
{ 
A68_259  UKMBTRN;  /* clause result */
A_PROC_ENTRY(makenewcontsts);
 /* line 126: */
{ 
QKDAOST_abort(TKMBTRN);
UKMBTRN = EDAATRN_nullconstdecs;
} 
A_PROC_EXIT(makenewcontsts);
*ReturnedValue = (UKMBTRN);
return;
} 
#undef NL

A68_VOID  XKMBTRN_makenewfns(A68_464 * Ec, A68_INT  Newsize, A68_260  *ReturnedValue)
{ 
A68_260  ALMBTRN;  /* clause result */
A_PROC_ENTRY(makenewfns);
 /* line 129: */
{ 
QKDAOST_abort(ZKMBTRN);
ALMBTRN = KDAATRN_nullfndecs;
} 
A_PROC_EXIT(makenewfns);
*ReturnedValue = (ALMBTRN);
return;
} 
#undef NL
 /* line 158: */
 /* line 159: */
 /* line 160: */

A68_VOID  FLMBTRN_update_bodies(A68_255 * Old, A68_265 * Closure, A68_487  Is_modified, A68_108  Msg, A68_464  *ReturnedValue)
{ 
A68_464  HLMBTRN;  /* avoid structure result */
A68_464  GLMBTRN_result;
A68_255 ** ILMBTRN_new;
A68_BOOL * JLMBTRN_changed;
A68_INT  KLMBTRN_ntypes;
A68_INT  LLMBTRN_closuretop;
A68_INT  MLMBTRN_typecnt;
A68_BOOL  NLMBTRN_has_changes;
A68_490  PLMBTRN_generator;   /* proc value of non-global proc */
A68_489  VLMBTRN;  /* avoid structure result */
A68_489  ULMBTRN_closuremap;
A68_465 * WLMBTRN_cm;
A68_INT  XLMBTRN;  /* forall loop counter */
A68_465  YLMBTRN;  /* collateral clause result */
A68_169 ** ZLMBTRN_ty1;
A68_258  AMMBTRN;  /* forall yield */
A68_INT  BMMBTRN;  /* forall loop counter */
A68_INT  CMMBTRN_cln;
A68_465 * DMMBTRN_map;
A68_INT * EMMBTRN;  /* YIELD */
A68_255 ** FMMBTRN;  /* YIELD */
A68_255 * GMMBTRN_outerenv;
A68_370  JMMBTRN_count_map;   /* proc value of non-global proc */
A68_405  BNMBTRN;  /* OPERATORS - mode -> union mode */
A68_370  CNMBTRN;  /* YIELD */
A68_404  DNMBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_360 * ENMBTRN_cnttprocs;
A68_INT  FNMBTRN_envcnt;
A68_INT  GNMBTRN;  /* to part of loop */
A68_465 * HNMBTRN_map;
A68_374  INMBTRN;  /* CALL */
A68_258  JNMBTRN;  /* OPERATORS - simple index */
A68_INT  KNMBTRN;  /* YIELD */
A68_331  LNMBTRN;  /* avoid structure result */
A68_370  ONMBTRN_type_update;   /* proc value of non-global proc */
A68_405  IOMBTRN;  /* OPERATORS - mode -> union mode */
A68_370  JOMBTRN;  /* YIELD */
A68_404  KOMBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_360 * LOMBTRN_updatetprocs;
A68_258  MOMBTRN;  /* avoid structure result */
A68_INT  NOMBTRN_envno;
A68_INT  OOMBTRN;  /* to part of loop */
A68_465 * POMBTRN_map;
A68_374  QOMBTRN;  /* CALL */
A68_258  ROMBTRN;  /* OPERATORS - simple index */
A68_INT  SOMBTRN;  /* YIELD */
A68_331  TOMBTRN;  /* avoid structure result */
A68_331  UOMBTRN_tdc;
A68_258  VOMBTRN;  /* OPERATORS - simple index */
A68_INT  WOMBTRN;  /* YIELD */
A68_169 ** XOMBTRN;  /* YIELD */
A68_464  YOMBTRN;  /* clause result */
A_PROC_ENTRY(update_bodies);
 /* line 161: */
{ 
QGMBTRN_makeenvironc( Old, &HLMBTRN );
GLMBTRN_result = HLMBTRN;
 /* line 162: */
ILMBTRN_new = (&((&GLMBTRN_result)->E));
 /* line 163: */
JLMBTRN_changed = (&((&GLMBTRN_result)->C));
 /* line 164: */
KLMBTRN_ntypes = (*(&((*ILMBTRN_new)->Types))).upb;
 /* line 165: */
LLMBTRN_closuretop = ZKCATRN_maxclosureno(Closure);
 /* line 166: */
MLMBTRN_typecnt = 0;
 /* line 167: */
NLMBTRN_has_changes = A68_FALSE;
 /* line 168: */
A_CLOSURE( PLMBTRN_generator, QLMBTRN_generator, RLMBTRN_generator );
(( RLMBTRN_generator * ) ( PLMBTRN_generator.nonlocals )) -> LLMBTRN_closuretop = LLMBTRN_closuretop;
A_CALLPROC(PLMBTRN_generator,(A68_TRUE, &VLMBTRN),(A68_TRUE, &VLMBTRN,(PLMBTRN_generator).nonlocals));
ULMBTRN_closuremap = VLMBTRN;
 /* line 170: */
XLMBTRN = ULMBTRN_closuremap.upb -1;
WLMBTRN_cm = ULMBTRN_closuremap.data;
for (;XLMBTRN-- >= 0;
(WLMBTRN_cm++
) )
{
YLMBTRN.Mapno = 0;
YLMBTRN.Env = GBAATRN_nilenviron;
(*WLMBTRN_cm) = YLMBTRN;
}
 /* line 177: */
 /* line 178: */
AMMBTRN = (*(&((*ILMBTRN_new)->Types))) ;
BMMBTRN = AMMBTRN.upb -1;
ZLMBTRN_ty1 = AMMBTRN.data;
for (;BMMBTRN-- >= 0;
(ZLMBTRN_ty1++
) )
{
MLMBTRN_typecnt+=1;
 /* line 179: */
 /* line 180: */
if ( ((*(&((*ZLMBTRN_ty1)->Sort)))==OKAATRN_outerdec) )
{ 
CMMBTRN_cln = (*(&((*(&((*ZLMBTRN_ty1)->Usage)))->Closureno)));
 /* line 181: */
DMMBTRN_map = (&A_VINDEX(ULMBTRN_closuremap,CMMBTRN_cln));
 /* line 182: */
EMMBTRN = (&(DMMBTRN_map->Mapno)) ;
(*EMMBTRN) = MLMBTRN_typecnt;
 /* line 183: */
 /* line 184: */
if ( A_CALLPROC(Is_modified,(CMMBTRN_cln),(CMMBTRN_cln,(Is_modified).nonlocals)) )
{ 
NLMBTRN_has_changes = A68_TRUE;
 /* line 185: */
 /* line 186: */
 /* line 187: */
 /* line 188: */
 /* line 189: */
FMMBTRN = (&(DMMBTRN_map->Env)) ;
(*FMMBTRN) = (*(&((&(ELCATRN_find_outers(CMMBTRN_cln, Closure, Msg)->Outer))->Environ)));
} 
} 
}
 /* line 191: */
GMMBTRN_outerenv = (A68_255 *)A68_NIL;
 /* line 196: */
A_CLOSURE( JMMBTRN_count_map, KMMBTRN_count_map, LMMBTRN_count_map );
(( LMMBTRN_count_map * ) ( JMMBTRN_count_map.nonlocals )) -> GMMBTRN_outerenv = (&GMMBTRN_outerenv);
(( LMMBTRN_count_map * ) ( JMMBTRN_count_map.nonlocals )) -> ULMBTRN_closuremap = ULMBTRN_closuremap;
(( LMMBTRN_count_map * ) ( JMMBTRN_count_map.nonlocals )) -> NLMBTRN_has_changes = (&NLMBTRN_has_changes);
(( LMMBTRN_count_map * ) ( JMMBTRN_count_map.nonlocals )) -> MLMBTRN_typecnt = (&MLMBTRN_typecnt);
(( LMMBTRN_count_map * ) ( JMMBTRN_count_map.nonlocals )) -> Closure = Closure;
(( LMMBTRN_count_map * ) ( JMMBTRN_count_map.nonlocals )) -> Msg = Msg;
 /* line 217: */
CNMBTRN = JMMBTRN_count_map ;
ENMBTRN_cnttprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HVEC(DNMBTRN,A_UNITE(BNMBTRN,mode10,10,CNMBTRN),A68_405 ));
 /* line 221: */
 /* line 222: */
GNMBTRN = LLMBTRN_closuretop;
for ( FNMBTRN_envcnt = 1;
FNMBTRN_envcnt <= GNMBTRN;
FNMBTRN_envcnt += 1 )
{ 
HNMBTRN_map = (&A_VINDEX(ULMBTRN_closuremap,FNMBTRN_envcnt));
 /* line 223: */
 /* line 224: */
if ( ((*(&(HNMBTRN_map->Env)))!=GBAATRN_nilenviron) )
{ 
GMMBTRN_outerenv = (*(&(HNMBTRN_map->Env)));
 /* line 225: */
 /* line 226: */
 /* line 227: */
INMBTRN = (*(&(AWLATRN_nulltprocs->Typedec))) ;
JNMBTRN = (*(&(GMMBTRN_outerenv->Types))) ;
KNMBTRN = 1 ;
A_CALLPROC(INMBTRN,((*(&A_VINDEX(JNMBTRN,KNMBTRN))), ENMBTRN_cnttprocs, &LNMBTRN),((*(&A_VINDEX(JNMBTRN,KNMBTRN))), ENMBTRN_cnttprocs, &LNMBTRN,(INMBTRN).nonlocals));
LNMBTRN;
} 
}
 /* line 228: */
MLJATRN_discard_tprocs(ENMBTRN_cnttprocs);
 /* line 230: */
A_CLOSURE( ONMBTRN_type_update, PNMBTRN_type_update, QNMBTRN_type_update );
(( QNMBTRN_type_update * ) ( ONMBTRN_type_update.nonlocals )) -> GMMBTRN_outerenv = (&GMMBTRN_outerenv);
(( QNMBTRN_type_update * ) ( ONMBTRN_type_update.nonlocals )) -> ULMBTRN_closuremap = ULMBTRN_closuremap;
 /* line 248: */
 /* line 249: */
 /* line 250: */
if ( NLMBTRN_has_changes )
{ 
 /* line 251: */
JOMBTRN = ONMBTRN_type_update ;
LOMBTRN_updatetprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HVEC(KOMBTRN,A_UNITE(IOMBTRN,mode10,10,JOMBTRN),A68_405 ));
 /* line 252: */
AKMBTRN_makenewtypes( (&GLMBTRN_result), MLMBTRN_typecnt, &MOMBTRN );
MOMBTRN;
 /* line 253: */
 /* line 254: */
OOMBTRN = LLMBTRN_closuretop;
for ( NOMBTRN_envno = 1;
NOMBTRN_envno <= OOMBTRN;
NOMBTRN_envno += 1 )
{ 
POMBTRN_map = (&A_VINDEX(ULMBTRN_closuremap,NOMBTRN_envno));
 /* line 255: */
 /* line 256: */
 /* line 257: */
if ( ((*(&(POMBTRN_map->Env)))!=GBAATRN_nilenviron) )
{ 
GMMBTRN_outerenv = (*(&(POMBTRN_map->Env)));
 /* line 258: */
 /* line 259: */
QOMBTRN = (*(&(AWLATRN_nulltprocs->Typedec))) ;
ROMBTRN = (*(&(GMMBTRN_outerenv->Types))) ;
SOMBTRN = 1 ;
A_CALLPROC(QOMBTRN,((*(&A_VINDEX(ROMBTRN,SOMBTRN))), LOMBTRN_updatetprocs, &TOMBTRN),((*(&A_VINDEX(ROMBTRN,SOMBTRN))), LOMBTRN_updatetprocs, &TOMBTRN,(QOMBTRN).nonlocals));
UOMBTRN_tdc = TOMBTRN;
 /* line 260: */
 /* line 261: */
 /* line 262: */
VOMBTRN = (*(&((*ILMBTRN_new)->Types))) ;
WOMBTRN = (*(&(POMBTRN_map->Mapno))) ;
XOMBTRN = (&A_VINDEX(VOMBTRN,WOMBTRN)) ;
(*XOMBTRN) = UOMBTRN_tdc.T;
} 
}
 /* line 263: */
 /* line 264: */
MLJATRN_discard_tprocs(LOMBTRN_updatetprocs);
} 
 /* line 265: */
 /* line 266: */
YOMBTRN = GLMBTRN_result;
} 
A_PROC_EXIT(update_bodies);
*ReturnedValue = (YOMBTRN);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 4: */
void KGMBTRN(void)   /* initialise DECS environprocs */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/environprocs.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/closureprocs.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","./mfiles/transformprocs.m","./mfiles/modeprocs.m","./mfiles/assmodes.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
SKCATRN();   /* USE closureprocs */
PCAAOST();   /* USE osinterface */
IHJATRN();   /* USE transformprocs */
HNMATRN();   /* USE modeprocs */
BAAATRN();   /* USE assmodes */
JFAAOSI();   /* USE messageproc */
JSCAOST();   /* USE basics */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/transform/assoc/./a68files/environprocs.a68";
A_config.translation_time = "Tue Apr  4 10:09:14 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "JGMBTRN (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:09:14 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS environprocs);
UEAALIB_a68config(LGAALIB_configinfo, OGMBTRN);
 /* line 43: */
 /* line 47: */
 /* line 49: */
 /* line 55: */
 /* line 66: */
 /* line 74: */
 /* line 82: */
 /* line 90: */
 /* line 98: */
 /* line 111: */
 /* line 114: */
 /* line 117: */
 /* line 125: */
 /* line 128: */
 /* line 157: */
 /* line 268: */
 /* line 269: */
 /* line 274: */
/*SKIP*/;
A_PROC_EXIT(DECS environprocs);
} 
#undef NL
/* end of translation of ./a68files/environprocs.a68 */
