
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
/* UNAME:DJHBTRN */
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
A68_INT  Nameno;
A_PAD_INT(PAD_148)
struct A68t176  Unit;
struct A68t154  Type;
struct A68t464 * Rest;
};
typedef struct A68t464  A68_464 ;    /* STRUCT(INT,MODE176,MODE154,REF MODE464)  */

A_PROCEDURE(A68_BOOL ,A68t465,(struct A68t176 ),(struct A68t176 ,void *));
typedef struct A68t465  A68_465 ;    /* PROC(MODE176) BOOL */

A_PROCEDURE(A68_VOID ,A68t466,(struct A68t176 ,A68_INT ,struct A68t176 *),(struct A68t176 ,A68_INT ,struct A68t176 *,void *));
typedef struct A68t466  A68_466 ;    /* PROC(MODE176,INT) MODE176 */

A_PROCEDURE(A68_VOID ,A68t467,(struct A68t261 ,struct A68t265 *,struct A68t358 *),(struct A68t261 ,struct A68t265 *,struct A68t358 *,void *));
typedef struct A68t467  A68_467 ;    /* PROC(MODE261,REF MODE265) MODE358 */

A_PROCEDURE(A68_VOID ,A68t468,(struct A68t176 ,struct A68t154 ,struct A68t176 *),(struct A68t176 ,struct A68t154 ,struct A68t176 *,void *));
typedef struct A68t468  A68_468 ;    /* PROC(MODE176,MODE154) MODE176 */

A_PROCEDURE(A68_VOID ,A68t469,(struct A68t336 ,A68_INT ,struct A68t154 ,struct A68t336 *),(struct A68t336 ,A68_INT ,struct A68t154 ,struct A68t336 *,void *));
typedef struct A68t469  A68_469 ;    /* PROC(MODE336,INT,MODE154) MODE336 */

A_PROCEDURE(A68_VOID ,A68t470,(struct A68t176 ,A68_BOOL ,A68_BOOL ,A68_INT ,struct A68t336 *),(struct A68t176 ,A68_BOOL ,A68_BOOL ,A68_INT ,struct A68t336 *,void *));
typedef struct A68t470  A68_470 ;    /* PROC(MODE176,BOOL,BOOL,INT) MODE336 */

A_PROCEDURE(A68_VOID ,A68t471,(struct A68t236 *,struct A68t335 *),(struct A68t236 *,struct A68t335 *,void *));
typedef struct A68t471  A68_471 ;    /* PROC(REF MODE236) MODE335 */

A_PROCEDURE(A68_VOID ,A68t472,(struct A68t191 *,struct A68t334 *),(struct A68t191 *,struct A68t334 *,void *));
typedef struct A68t472  A68_472 ;    /* PROC(REF MODE191) MODE334 */
A_ISTRUCT(A68_CHAR ,31,A68t473);
typedef struct A68t473  A68_473 ;    /* STRUCT 31 CHAR */

A_PROCEDURE(A68_VOID ,A68t474,(A68_BOOL ,struct A68t254 *),(A68_BOOL ,struct A68t254 *,void *));
typedef struct A68t474  A68_474 ;    /* PROC(BOOL) MODE254 */
A_ISTRUCT(struct A68t52 ,2,A68t475);
typedef struct A68t475  A68_475 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(struct A68t405 ,4,A68t476);
typedef struct A68t476  A68_476 ;    /* STRUCT 4 MODE405 */

A_PROCEDURE(A68_VOID ,A68t477,(struct A68t265 *,struct A68t108 ,struct A68t359 *),(struct A68t265 *,struct A68t108 ,struct A68t359 *,void *));
typedef struct A68t477  A68_477 ;    /* PROC(REF MODE265,MODE108) MODE359 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from closureprocs --- */
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
extern A68_108  ZLBAOSI_global_msg;
/* --- End of imports from osinterface --- */


/* --- Imports from transformprocs --- */
extern A68_360 * THJATRN_make_newtprocs(struct A68t360 *,struct A68t404 );
extern A68_360 * AWLATRN_nulltprocs;
extern A68_VOID  DWLATRN_null_attr(struct A68t129 ,struct A68t360 *,A68_318 *);
extern A68_VOID  IWLATRN_null_formula(struct A68t138 ,struct A68t360 *,A68_321 *);
extern A68_VOID  NWLATRN_null_type(struct A68t154 ,struct A68t360 *,A68_327 *);
/* --- End of imports from transformprocs --- */


/* --- Imports from modeprocs --- */
extern A68_252 * IDNATRN_find_fndec(struct A68t207 ,struct A68t265 *,struct A68t255 *);
extern A68_INT  DTNATRN_names_size(struct A68t217 *);
extern A68_VOID  VUNATRN_unit_type(struct A68t176 ,struct A68t252 *,struct A68t255 *,A68_154 *);
/* --- End of imports from modeprocs --- */


/* --- Imports from assmodes --- */
extern A68_VC  TTCAOST_nullid;
extern A68_191 * IAAATRN_nilustr;
extern A68_236 * JAAATRN_niluchoices;
extern A68_217 * NAAATRN_nilnames;
extern A68_205 * SAAATRN_nilseries;
extern A68_252 * YAAATRN_nilfndec;
extern A68_221 * WGAATRN_makeunittag(struct A68t176 );
extern A68_207 * LHAATRN_makefnname(A68_INT );
extern A68_134  ZHAATRN_attrnull;
extern A68_162  DIAATRN_tnull;
#define KKAATRN_usource 1
#define VKAATRN_outerfn 5
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
extern void SKCATRN(void);   /* closureprocs */
extern void PCAAOST(void);   /* osinterface */
extern void IHJATRN(void);   /* transformprocs */
extern void HNMATRN(void);   /* modeprocs */
extern void BAAATRN(void);   /* assmodes */
extern void JFAAOSI(void);   /* messageproc */
extern void JSCAOST(void);   /* basics */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_463   HJHBTRN = {"$Id: flatten_unit.a68,v 34.2 1995/03/29 13:02:43 ella Exp $"}; 
A_GISVEC(A68_VC ,IJHBTRN,HJHBTRN,59)
#define JJHBTRN_nilletlist (A68_464 *)A68_NIL
static A68_465  KJHBTRN_simple_unit;
static A68_473   BXHBTRN = {"Series should only contain LETs"}; 
A_GISVEC(A68_VC ,CXHBTRN,BXHBTRN,31)
static A68_473   QYHBTRN = {"Series should only contain LETs"}; 
A_GISVEC(A68_VC ,RYHBTRN,QYHBTRN,31)
static A68_411   UZHBTRN = {"_fu_"}; 
A_GISVEC(A68_VC ,VZHBTRN,UZHBTRN,4)
typedef struct   /* env of non-global proc */
{
A68_INT * XLHBTRN_next_name;
A68_464 ** WLHBTRN_lets;
} CMHBTRN_new_let;
typedef struct   /* env of non-global proc */
{
A68_468  AMHBTRN_new_let;
} PMHBTRN_input_check;
typedef struct   /* env of non-global proc */
{
A68_470  PNHBTRN_unit_check;
A68_468  AMHBTRN_new_let;
A68_252 * VLHBTRN_fndec;
A68_255 * SLHBTRN_env;
A68_265 * Closure;
A68_469  NMHBTRN_input_check;
A68_464 ** WLHBTRN_lets;
} RNHBTRN_unit_check;
typedef struct   /* env of non-global proc */
{
A68_464 ** WLHBTRN_lets;
A68_INT * XLHBTRN_next_name;
A68_470  PNHBTRN_unit_check;
} BYHBTRN_fndec_trans;
typedef struct   /* env of non-global proc */
{
A68_265 * Closure;
} WBIBTRN_outer;
typedef struct   /* env of non-global proc */
{
A68_470  PNHBTRN_unit_check;
A68_INT  Level;
A_PAD_INT(PAD_149)
A68_471  UNHBTRN_uchoices;
} WNHBTRN_uchoices;
typedef struct   /* env of non-global proc */
{
A68_470  PNHBTRN_unit_check;
A68_INT  Level;
A_PAD_INT(PAD_150)
A68_472  JOHBTRN_ustr;
} LOHBTRN_ustr;
typedef struct   /* env of non-global proc */
{
A68_INT * XLHBTRN_next_name;
} HZHBTRN_generator;

A_STATIC A68_BOOL  MJHBTRN_exp_unit(A68_176  U);

A_STATIC A68_BOOL  BKHBTRN_anonymous(A68_176  U);

A_STATIC A68_BOOL  JKHBTRN_const_unit(A68_176  U);

A_STATIC A68_BOOL  TKHBTRN_valid_input(A68_176  U);

A_STATIC A68_VOID  BLHBTRN_make_indexes(A68_176  U, A68_INT  Size, A68_176  *ReturnedValue);

A_STATIC A68_VOID  RLHBTRN_outer_transform(A68_261  Outer, A68_265 * Closure, A68_358  *ReturnedValue);

A_STATIC A68_VOID  BMHBTRN_new_let(A68_176  U, A68_154  T, A68_176  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OMHBTRN_input_check(A68_336  Uc, A68_INT  Expected, A68_154  Ty, A68_336  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QNHBTRN_unit_check(A68_176  U, A68_BOOL  Add_let, A68_BOOL  Case_allowed, A68_INT  Level, A68_336  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VNHBTRN_uchoices(A68_236 * Uc, A68_335  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KOHBTRN_ustr(A68_191 * St, A68_334  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  AYHBTRN_fndec_trans(A68_252 * Fdec, A68_360 * Tprocs, A68_357  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GZHBTRN_generator(A68_BOOL  EZHBTRN_anonymous, A68_254  *ReturnedValue, void *NonLocals);

A68_VOID  QBIBTRN_transform_flatten_unit(A68_265 * Closure, A68_108  Msg, A68_359  *ReturnedValue);

A_STATIC A68_VOID  VBIBTRN_outer(A68_261  O, A68_360 * Tprocs, A68_358  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VNHBTRN_uchoices(A68_236 * Uc, A68_335  *ReturnedValue, void *NonLocals)
#define NL(x) (((WNHBTRN_uchoices *)NonLocals)->x)
{ 
A68_335  XNHBTRN;  /* collateral clause result */
A68_335  YNHBTRN;  /* clause result */
A68_336  ZNHBTRN;  /* avoid structure result */
A68_336  AOHBTRN_uout;
A68_335  BOHBTRN;  /* avoid structure result */
A68_335  COHBTRN_rest;
A68_BOOL  DOHBTRN;  /* optbool result */
A68_335  EOHBTRN;  /* collateral clause result */
A68_236  FOHBTRN;  /* collateral clause result */
A68_236 * GOHBTRN;  /* YIELD */
A68_335  HOHBTRN;  /* collateral clause result */
A_PROC_ENTRY(uchoices);
 /* line 181: */
 /* line 182: */
if ( (Uc==JAAATRN_niluchoices) )
{ 
XNHBTRN.U = Uc;
 /* line 183: */
XNHBTRN.C = A68_FALSE;
YNHBTRN = XNHBTRN;
} 
else
{ 
A_CALLPROC(NL(PNHBTRN_unit_check),((*(&(Uc->Output))), A68_FALSE, A68_TRUE, (NL(Level)+1), &ZNHBTRN),((*(&(Uc->Output))), A68_FALSE, A68_TRUE, (NL(Level)+1), &ZNHBTRN,(NL(PNHBTRN_unit_check)).nonlocals));
AOHBTRN_uout = ZNHBTRN;
 /* line 184: */
A_CALLPROC(NL(UNHBTRN_uchoices),((*(&(Uc->Rest))), &BOHBTRN),((*(&(Uc->Rest))), &BOHBTRN,(NL(UNHBTRN_uchoices)).nonlocals));
COHBTRN_rest = BOHBTRN;
 /* line 185: */
 /* line 186: */
DOHBTRN = AOHBTRN_uout.C;
if ( ! DOHBTRN )
{DOHBTRN = COHBTRN_rest.C;
}
if ( DOHBTRN )
{ 
FOHBTRN.Check = (*(&(Uc->Check)));
FOHBTRN.Sort = (*(&(Uc->Sort)));
 /* line 187: */
FOHBTRN.Test = (*(&(Uc->Test)));
FOHBTRN.Output = AOHBTRN_uout.U;
FOHBTRN.Rest = COHBTRN_rest.U;
GOHBTRN = A_HEAP(A68_236 ) ;
(*GOHBTRN) = FOHBTRN ;
EOHBTRN.U = GOHBTRN;
 /* line 188: */
EOHBTRN.C = A68_TRUE;
YNHBTRN = EOHBTRN;
} 
else
{ 
HOHBTRN.U = Uc;
 /* line 189: */
 /* line 190: */
HOHBTRN.C = A68_FALSE;
YNHBTRN = HOHBTRN;
} 
} 
A_PROC_EXIT(uchoices);
*ReturnedValue = (YNHBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  KOHBTRN_ustr(A68_191 * St, A68_334  *ReturnedValue, void *NonLocals)
#define NL(x) (((LOHBTRN_ustr *)NonLocals)->x)
{ 
A68_334  MOHBTRN;  /* collateral clause result */
A68_334  NOHBTRN;  /* clause result */
A68_336  OOHBTRN;  /* avoid structure result */
A68_336  POHBTRN_uc;
A68_334  QOHBTRN;  /* avoid structure result */
A68_334  ROHBTRN_usc;
A68_BOOL  SOHBTRN;  /* optbool result */
A68_334  TOHBTRN;  /* collateral clause result */
A68_191  UOHBTRN;  /* collateral clause result */
A68_191 * VOHBTRN;  /* YIELD */
A68_334  WOHBTRN;  /* collateral clause result */
A_PROC_ENTRY(ustr);
 /* line 193: */
 /* line 194: */
if ( (St==IAAATRN_nilustr) )
{ 
MOHBTRN.U = St;
 /* line 195: */
MOHBTRN.C = A68_FALSE;
NOHBTRN = MOHBTRN;
} 
else
{ 
A_CALLPROC(NL(PNHBTRN_unit_check),((*(&(St->Elem))), A68_FALSE, A68_FALSE, (NL(Level)+1), &OOHBTRN),((*(&(St->Elem))), A68_FALSE, A68_FALSE, (NL(Level)+1), &OOHBTRN,(NL(PNHBTRN_unit_check)).nonlocals));
POHBTRN_uc = OOHBTRN;
 /* line 196: */
A_CALLPROC(NL(JOHBTRN_ustr),((*(&(St->Rest))), &QOHBTRN),((*(&(St->Rest))), &QOHBTRN,(NL(JOHBTRN_ustr)).nonlocals));
ROHBTRN_usc = QOHBTRN;
 /* line 197: */
 /* line 198: */
SOHBTRN = POHBTRN_uc.C;
if ( ! SOHBTRN )
{SOHBTRN = ROHBTRN_usc.C;
}
if ( SOHBTRN )
{ 
UOHBTRN.Elem = POHBTRN_uc.U;
UOHBTRN.Rest = ROHBTRN_usc.U;
VOHBTRN = A_HEAP(A68_191 ) ;
(*VOHBTRN) = UOHBTRN ;
TOHBTRN.U = VOHBTRN;
 /* line 199: */
TOHBTRN.C = A68_TRUE;
NOHBTRN = TOHBTRN;
} 
else
{ 
WOHBTRN.U = St;
 /* line 200: */
 /* line 201: */
WOHBTRN.C = A68_FALSE;
NOHBTRN = WOHBTRN;
} 
} 
A_PROC_EXIT(ustr);
*ReturnedValue = (NOHBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  GZHBTRN_generator(A68_BOOL  EZHBTRN_anonymous, A68_254  *ReturnedValue, void *NonLocals)
#define NL(x) (((HZHBTRN_generator *)NonLocals)->x)
{ 
A68_254  IZHBTRN;  /* clause result */
A68_254  JZHBTRN;  /* OPERATORS - dynamic generator */
{ 
JZHBTRN.upb = ((*NL(XLHBTRN_next_name))-1) ;
( EZHBTRN_anonymous? A_VLOC(A68_251 ,JZHBTRN): A_VHEAP(A68_251 ,JZHBTRN) );
IZHBTRN = JZHBTRN;
} 
*ReturnedValue = (IZHBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  BMHBTRN_new_let(A68_176  U, A68_154  T, A68_176  *ReturnedValue, void *NonLocals)
#define NL(x) (((CMHBTRN_new_let *)NonLocals)->x)
{ 
A68_181  DMHBTRN;  /* collateral clause result */
A68_181 * FMHBTRN;  /* YIELD */
A68_176  GMHBTRN;  /* OPERATORS - mode -> union mode */
A68_176  EMHBTRN_result;
A68_464  HMHBTRN;  /* collateral clause result */
A68_464 * IMHBTRN;  /* YIELD */
A68_176  JMHBTRN;  /* clause result */
A_PROC_ENTRY(new_let);
 /* line 122: */
 /* line 123: */
{ 
DMHBTRN.Sort = KKAATRN_usource;
DMHBTRN.Nameno = (*NL(XLHBTRN_next_name));
FMHBTRN = A_HEAP(A68_181 ) ;
(*FMHBTRN) = DMHBTRN ;
EMHBTRN_result = A_UNITE(GMHBTRN,mode11,11,FMHBTRN);
 /* line 124: */
HMHBTRN.Nameno = (*NL(XLHBTRN_next_name));
HMHBTRN.Unit = U;
HMHBTRN.Type = T;
HMHBTRN.Rest = (*NL(WLHBTRN_lets));
IMHBTRN = A_HEAP(A68_464 ) ;
(*IMHBTRN) = HMHBTRN ;
(*NL(WLHBTRN_lets)) = IMHBTRN;
 /* line 125: */
(*NL(XLHBTRN_next_name))+=1;
 /* line 126: */
 /* line 127: */
JMHBTRN = EMHBTRN_result;
} 
A_PROC_EXIT(new_let);
*ReturnedValue = (JMHBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  OMHBTRN_input_check(A68_336  Uc, A68_INT  Expected, A68_154  Ty, A68_336  *ReturnedValue, void *NonLocals)
#define NL(x) (((PMHBTRN_input_check *)NonLocals)->x)
{ 
A68_176  QMHBTRN_u;
A68_BOOL  RMHBTRN_valid;
A68_BOOL  SMHBTRN_needs_indexing;
A68_BOOL  TMHBTRN;  /* optbool result */
A68_176  UMHBTRN;  /* united object - for case conformity */
A68_191 * VMHBTRN_us;
A68_191 * WMHBTRN_ustr;
A68_BOOL  XMHBTRN;  /* optbool result */
A68_BOOL  YMHBTRN;  /* optbool result */
A68_190 * ZMHBTRN_ur;
A68_BOOL  ANHBTRN;  /* optbool result */
A68_203 * BNHBTRN_ust;
A68_BOOL  CNHBTRN;  /* optbool result */
A68_336  DNHBTRN;  /* collateral clause result */
A68_176  ENHBTRN;  /* avoid structure result */
A68_336  FNHBTRN;  /* clause result */
A68_176  GNHBTRN;  /* avoid structure result */
A68_176  HNHBTRN_new_u;
A68_336  INHBTRN;  /* collateral clause result */
A68_176  JNHBTRN;  /* avoid structure result */
A68_336  KNHBTRN;  /* collateral clause result */
A_PROC_ENTRY(input_check);
 /* line 130: */
 /* line 131: */
{ 
QMHBTRN_u = Uc.U;
 /* line 132: */
RMHBTRN_valid = A68_TRUE;
 /* line 133: */
SMHBTRN_needs_indexing = A68_FALSE;
 /* line 135: */
 /* line 136: */
if ( (Expected==1) )
{ 
TMHBTRN = JKHBTRN_const_unit(QMHBTRN_u);
if ( ! TMHBTRN )
{TMHBTRN = TKHBTRN_valid_input(QMHBTRN_u);
}
 /* line 137: */
if ( !TMHBTRN )
{ 
 /* line 138: */
 /* line 139: */
 /* line 140: */
RMHBTRN_valid = A68_FALSE;
} 
} 
else
{ 
 /* line 141: */
UMHBTRN = QMHBTRN_u ;
switch ( UMHBTRN.mode )
{ 
case 21: /* REF STRUCT(MODE176,REF MODE191)  */
VMHBTRN_us = (UMHBTRN.data.mode21);
{ 
WMHBTRN_ustr = VMHBTRN_us;
 /* line 142: */
for ( ;; )
{ 
XMHBTRN = RMHBTRN_valid;
if ( XMHBTRN )
{ /* line 143: */
XMHBTRN = (WMHBTRN_ustr!=IAAATRN_nilustr);
}
if ( !(XMHBTRN) ) break;
 /* line 144: */
YMHBTRN = JKHBTRN_const_unit((*(&(WMHBTRN_ustr->Elem))));
if ( ! YMHBTRN )
{YMHBTRN = TKHBTRN_valid_input((*(&(WMHBTRN_ustr->Elem))));
}
 /* line 145: */
if ( !YMHBTRN )
{ 
 /* line 146: */
RMHBTRN_valid = A68_FALSE;
} 
 /* line 147: */
 /* line 148: */
WMHBTRN_ustr = (*(&(WMHBTRN_ustr->Rest)));
}
 /* line 149: */
 /* line 150: */
} 
break;
case 20: /* REF STRUCT(MODE138,MODE176)  */
ZMHBTRN_ur = (UMHBTRN.data.mode20);
 /* line 151: */
ANHBTRN = JKHBTRN_const_unit((*(&(ZMHBTRN_ur->Elem))));
if ( ! ANHBTRN )
{ANHBTRN = TKHBTRN_valid_input((*(&(ZMHBTRN_ur->Elem))));
}
 /* line 152: */
if ( !ANHBTRN )
{ 
 /* line 153: */
 /* line 154: */
RMHBTRN_valid = A68_FALSE;
} 
break;
case 33: /* REF STRUCT(MODE138,MODE176)  */
BNHBTRN_ust = (UMHBTRN.data.mode33);
 /* line 155: */
CNHBTRN = JKHBTRN_const_unit((*(&(BNHBTRN_ust->Char))));
if ( ! CNHBTRN )
{CNHBTRN = TKHBTRN_valid_input((*(&(BNHBTRN_ust->Char))));
}
 /* line 156: */
if ( !CNHBTRN )
{ 
 /* line 157: */
 /* line 158: */
RMHBTRN_valid = A68_FALSE;
} 
break;
default: 
 /* line 159: */
if ( TKHBTRN_valid_input(QMHBTRN_u) )
{ 
 /* line 160: */
SMHBTRN_needs_indexing = A68_TRUE;
} 
else
{ 
 /* line 161: */
 /* line 162: */
 /* line 163: */
RMHBTRN_valid = A68_FALSE;
} 
break;
} 
} 
 /* line 164: */
 /* line 165: */
if ( RMHBTRN_valid )
{ 
 /* line 166: */
if ( SMHBTRN_needs_indexing )
{ 
BLHBTRN_make_indexes( QMHBTRN_u, Expected, &ENHBTRN );
DNHBTRN.U = ENHBTRN;
 /* line 167: */
 /* line 168: */
DNHBTRN.C = A68_TRUE;
FNHBTRN = DNHBTRN;
} 
else
{ 
 /* line 169: */
FNHBTRN = Uc;
} 
} 
else
{ 
A_CALLPROC(NL(AMHBTRN_new_let),(QMHBTRN_u, Ty, &GNHBTRN),(QMHBTRN_u, Ty, &GNHBTRN,(NL(AMHBTRN_new_let)).nonlocals));
HNHBTRN_new_u = GNHBTRN;
 /* line 170: */
 /* line 171: */
if ( (Expected>1) )
{ 
BLHBTRN_make_indexes( HNHBTRN_new_u, Expected, &JNHBTRN );
INHBTRN.U = JNHBTRN;
 /* line 172: */
INHBTRN.C = A68_TRUE;
FNHBTRN = INHBTRN;
} 
else
{ 
KNHBTRN.U = HNHBTRN_new_u;
 /* line 173: */
 /* line 174: */
 /* line 175: */
KNHBTRN.C = A68_TRUE;
FNHBTRN = KNHBTRN;
} 
} 
} 
A_PROC_EXIT(input_check);
*ReturnedValue = (FNHBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  QNHBTRN_unit_check(A68_176  U, A68_BOOL  Add_let, A68_BOOL  Case_allowed, A68_INT  Level, A68_336  *ReturnedValue, void *NonLocals)
#define NL(x) (((RNHBTRN_unit_check *)NonLocals)->x)
{ 
A68_471  UNHBTRN_uchoices;   /* proc value of non-global proc */
A68_472  JOHBTRN_ustr;   /* proc value of non-global proc */
A68_176  XOHBTRN;  /* united object - for case conformity */
A68_181 * YOHBTRN_una;
A68_336  ZOHBTRN;  /* collateral clause result */
A68_336  APHBTRN;  /* clause result */
A68_186 * BPHBTRN_uin;
A68_336  CPHBTRN;  /* avoid structure result */
A68_336  DPHBTRN_uc;
A68_186  EPHBTRN;  /* collateral clause result */
A68_154  FPHBTRN;  /* avoid structure result */
A68_186 * GPHBTRN;  /* YIELD */
A68_176  HPHBTRN;  /* OPERATORS - mode -> union mode */
A68_176  IPHBTRN;  /* avoid structure result */
A68_176  JPHBTRN_new_u;
A68_336  KPHBTRN;  /* collateral clause result */
A68_336  LPHBTRN;  /* collateral clause result */
A68_186  MPHBTRN;  /* collateral clause result */
A68_186 * NPHBTRN;  /* YIELD */
A68_176  OPHBTRN;  /* OPERATORS - mode -> union mode */
A68_336  PPHBTRN;  /* collateral clause result */
A68_154  QPHBTRN;  /* avoid structure result */
A68_176  RPHBTRN;  /* avoid structure result */
A68_176  SPHBTRN_simple;
A68_186  TPHBTRN;  /* collateral clause result */
A68_154  UPHBTRN;  /* avoid structure result */
A68_186 * VPHBTRN;  /* YIELD */
A68_176  WPHBTRN;  /* OPERATORS - mode -> union mode */
A68_176  XPHBTRN;  /* avoid structure result */
A68_176  YPHBTRN_new_u;
A68_336  ZPHBTRN;  /* collateral clause result */
A68_336  AQHBTRN;  /* collateral clause result */
A68_186  BQHBTRN;  /* collateral clause result */
A68_186 * CQHBTRN;  /* YIELD */
A68_176  DQHBTRN;  /* OPERATORS - mode -> union mode */
A68_187 * EQHBTRN_utr;
A68_336  FQHBTRN;  /* avoid structure result */
A68_336  GQHBTRN_uc;
A68_BOOL  HQHBTRN;  /* optbool result */
A68_187  IQHBTRN;  /* collateral clause result */
A68_154  JQHBTRN;  /* avoid structure result */
A68_187 * KQHBTRN;  /* YIELD */
A68_176  LQHBTRN;  /* OPERATORS - mode -> union mode */
A68_176  MQHBTRN;  /* avoid structure result */
A68_176  NQHBTRN_new_u;
A68_336  OQHBTRN;  /* collateral clause result */
A68_336  PQHBTRN;  /* collateral clause result */
A68_187  QQHBTRN;  /* collateral clause result */
A68_187 * RQHBTRN;  /* YIELD */
A68_176  SQHBTRN;  /* OPERATORS - mode -> union mode */
A68_336  TQHBTRN;  /* collateral clause result */
A68_154  UQHBTRN;  /* avoid structure result */
A68_176  VQHBTRN;  /* avoid structure result */
A68_176  WQHBTRN_simple;
A68_BOOL  XQHBTRN;  /* optbool result */
A68_187  YQHBTRN;  /* collateral clause result */
A68_154  ZQHBTRN;  /* avoid structure result */
A68_187 * ARHBTRN;  /* YIELD */
A68_176  BRHBTRN;  /* OPERATORS - mode -> union mode */
A68_176  CRHBTRN;  /* avoid structure result */
A68_176  DRHBTRN_new_u;
A68_336  ERHBTRN;  /* collateral clause result */
A68_336  FRHBTRN;  /* collateral clause result */
A68_187  GRHBTRN;  /* collateral clause result */
A68_187 * HRHBTRN;  /* YIELD */
A68_176  IRHBTRN;  /* OPERATORS - mode -> union mode */
A68_188 * JRHBTRN_udy;
A68_336  KRHBTRN;  /* avoid structure result */
A68_336  LRHBTRN_uc;
A68_336  MRHBTRN;  /* avoid structure result */
A68_336  NRHBTRN_ui;
A68_188  ORHBTRN;  /* collateral clause result */
A68_154  PRHBTRN;  /* avoid structure result */
A68_188 * QRHBTRN;  /* YIELD */
A68_176  RRHBTRN;  /* OPERATORS - mode -> union mode */
A68_176  SRHBTRN;  /* avoid structure result */
A68_176  TRHBTRN_new_u;
A68_336  URHBTRN;  /* collateral clause result */
A68_BOOL  VRHBTRN;  /* optbool result */
A68_336  WRHBTRN;  /* collateral clause result */
A68_188  XRHBTRN;  /* collateral clause result */
A68_188 * YRHBTRN;  /* YIELD */
A68_176  ZRHBTRN;  /* OPERATORS - mode -> union mode */
A68_336  ASHBTRN;  /* collateral clause result */
A68_154  BSHBTRN;  /* avoid structure result */
A68_176  CSHBTRN;  /* avoid structure result */
A68_176  DSHBTRN_simple;
A68_188  ESHBTRN;  /* collateral clause result */
A68_154  FSHBTRN;  /* avoid structure result */
A68_188 * GSHBTRN;  /* YIELD */
A68_176  HSHBTRN;  /* OPERATORS - mode -> union mode */
A68_176  ISHBTRN;  /* avoid structure result */
A68_176  JSHBTRN_new_u;
A68_336  KSHBTRN;  /* collateral clause result */
A68_336  LSHBTRN;  /* collateral clause result */
A68_188  MSHBTRN;  /* collateral clause result */
A68_188 * NSHBTRN;  /* YIELD */
A68_176  OSHBTRN;  /* OPERATORS - mode -> union mode */
A68_189 * PSHBTRN_ure;
A68_336  QSHBTRN;  /* avoid structure result */
A68_336  RSHBTRN_uu;
A68_336  SSHBTRN;  /* avoid structure result */
A68_336  TSHBTRN_ui;
A68_336  USHBTRN;  /* avoid structure result */
A68_336  VSHBTRN_uf;
A68_BOOL  WSHBTRN;  /* optbool result */
A68_189  XSHBTRN;  /* collateral clause result */
A68_154  YSHBTRN;  /* avoid structure result */
A68_189 * ZSHBTRN;  /* YIELD */
A68_176  ATHBTRN;  /* OPERATORS - mode -> union mode */
A68_176  BTHBTRN;  /* avoid structure result */
A68_176  CTHBTRN_new_u;
A68_336  DTHBTRN;  /* collateral clause result */
A68_BOOL  ETHBTRN;  /* optbool result */
A68_336  FTHBTRN;  /* collateral clause result */
A68_189  GTHBTRN;  /* collateral clause result */
A68_189 * HTHBTRN;  /* YIELD */
A68_176  ITHBTRN;  /* OPERATORS - mode -> union mode */
A68_336  JTHBTRN;  /* collateral clause result */
A68_190 * KTHBTRN_uro;
A68_336  LTHBTRN;  /* avoid structure result */
A68_336  MTHBTRN_uc;
A68_190  NTHBTRN;  /* collateral clause result */
A68_154  OTHBTRN;  /* avoid structure result */
A68_190 * PTHBTRN;  /* YIELD */
A68_176  QTHBTRN;  /* OPERATORS - mode -> union mode */
A68_176  RTHBTRN;  /* avoid structure result */
A68_176  STHBTRN_new_u;
A68_336  TTHBTRN;  /* collateral clause result */
A68_336  UTHBTRN;  /* collateral clause result */
A68_190  VTHBTRN;  /* collateral clause result */
A68_190 * WTHBTRN;  /* YIELD */
A68_176  XTHBTRN;  /* OPERATORS - mode -> union mode */
A68_336  YTHBTRN;  /* collateral clause result */
A68_191 * ZTHBTRN_ust;
A68_334  AUHBTRN;  /* avoid structure result */
A68_334  BUHBTRN_uc;
A68_154  CUHBTRN;  /* avoid structure result */
A68_176  DUHBTRN;  /* OPERATORS - mode -> union mode */
A68_191 * EUHBTRN;  /* YIELD */
A68_176  FUHBTRN;  /* avoid structure result */
A68_176  GUHBTRN_new_u;
A68_336  HUHBTRN;  /* collateral clause result */
A68_336  IUHBTRN;  /* collateral clause result */
A68_176  JUHBTRN;  /* OPERATORS - mode -> union mode */
A68_191 * KUHBTRN;  /* YIELD */
A68_192 * LUHBTRN_uco;
A68_336  MUHBTRN;  /* avoid structure result */
A68_336  NUHBTRN_ul;
A68_336  OUHBTRN;  /* avoid structure result */
A68_336  PUHBTRN_ur;
A68_192  QUHBTRN;  /* collateral clause result */
A68_154  RUHBTRN;  /* avoid structure result */
A68_192 * SUHBTRN;  /* YIELD */
A68_176  TUHBTRN;  /* OPERATORS - mode -> union mode */
A68_176  UUHBTRN;  /* avoid structure result */
A68_176  VUHBTRN_new_u;
A68_336  WUHBTRN;  /* collateral clause result */
A68_BOOL  XUHBTRN;  /* optbool result */
A68_336  YUHBTRN;  /* collateral clause result */
A68_192  ZUHBTRN;  /* collateral clause result */
A68_192 * AVHBTRN;  /* YIELD */
A68_176  BVHBTRN;  /* OPERATORS - mode -> union mode */
A68_336  CVHBTRN;  /* collateral clause result */
A68_193 * DVHBTRN_umi;
A68_336  EVHBTRN;  /* avoid structure result */
A68_336  FVHBTRN_uc1;
A68_252 * GVHBTRN_instdec;
A68_INT  HVHBTRN_expected;
A68_154  IVHBTRN;  /* avoid structure result */
A68_336  JVHBTRN;  /* avoid structure result */
A68_336  KVHBTRN_uc2;
A68_BOOL  LVHBTRN;  /* optbool result */
A68_193  MVHBTRN;  /* collateral clause result */
A68_154  NVHBTRN;  /* avoid structure result */
A68_193 * OVHBTRN;  /* YIELD */
A68_176  PVHBTRN;  /* OPERATORS - mode -> union mode */
A68_176  QVHBTRN;  /* avoid structure result */
A68_176  RVHBTRN_new_u;
A68_336  SVHBTRN;  /* collateral clause result */
A68_336  TVHBTRN;  /* collateral clause result */
A68_193  UVHBTRN;  /* collateral clause result */
A68_193 * VVHBTRN;  /* YIELD */
A68_176  WVHBTRN;  /* OPERATORS - mode -> union mode */
A68_336  XVHBTRN;  /* collateral clause result */
A68_195 * YVHBTRN_uca;
A68_336  ZVHBTRN;  /* avoid structure result */
A68_336  AWHBTRN_inc;
A68_335  BWHBTRN;  /* avoid structure result */
A68_335  CWHBTRN_ucc;
A68_BOOL  DWHBTRN;  /* optbool result */
A68_BOOL  EWHBTRN;  /* optbool result */
A68_195  FWHBTRN;  /* collateral clause result */
A68_154  GWHBTRN;  /* avoid structure result */
A68_195 * HWHBTRN;  /* YIELD */
A68_176  IWHBTRN;  /* OPERATORS - mode -> union mode */
A68_176  JWHBTRN;  /* avoid structure result */
A68_176  KWHBTRN_new_u;
A68_336  LWHBTRN;  /* collateral clause result */
A68_BOOL  MWHBTRN;  /* optbool result */
A68_336  NWHBTRN;  /* collateral clause result */
A68_195  OWHBTRN;  /* collateral clause result */
A68_195 * PWHBTRN;  /* YIELD */
A68_176  QWHBTRN;  /* OPERATORS - mode -> union mode */
A68_336  RWHBTRN;  /* collateral clause result */
A68_199 * SWHBTRN_use;
A68_205 * TWHBTRN_steps;
A68_206  UWHBTRN;  /* united object - for case conformity */
A68_210 * VWHBTRN_let;
A68_336  WWHBTRN;  /* avoid structure result */
A68_336  XWHBTRN_uc;
A68_464  YWHBTRN;  /* collateral clause result */
A68_154  ZWHBTRN;  /* OPERATORS - mode -> union mode */
A68_464 * AXHBTRN;  /* YIELD */
A68_46  DXHBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_336  EXHBTRN;  /* avoid structure result */
A68_336  FXHBTRN_uout;
A68_336  GXHBTRN;  /* collateral clause result */
A68_203 * HXHBTRN_usg;
A68_336  IXHBTRN;  /* avoid structure result */
A68_336  JXHBTRN_uc;
A68_203  KXHBTRN;  /* collateral clause result */
A68_154  LXHBTRN;  /* avoid structure result */
A68_203 * MXHBTRN;  /* YIELD */
A68_176  NXHBTRN;  /* OPERATORS - mode -> union mode */
A68_176  OXHBTRN;  /* avoid structure result */
A68_176  PXHBTRN_new_u;
A68_336  QXHBTRN;  /* collateral clause result */
A68_336  RXHBTRN;  /* collateral clause result */
A68_203  SXHBTRN;  /* collateral clause result */
A68_203 * TXHBTRN;  /* YIELD */
A68_176  UXHBTRN;  /* OPERATORS - mode -> union mode */
A68_336  VXHBTRN;  /* collateral clause result */
A68_336  WXHBTRN;  /* collateral clause result */
A_PROC_ENTRY(unit_check);
 /* line 179: */
 /* line 180: */
{ 
A_CLOSURE( UNHBTRN_uchoices, VNHBTRN_uchoices, WNHBTRN_uchoices );
(( WNHBTRN_uchoices * ) ( UNHBTRN_uchoices.nonlocals )) -> PNHBTRN_unit_check = NL(PNHBTRN_unit_check);
(( WNHBTRN_uchoices * ) ( UNHBTRN_uchoices.nonlocals )) -> Level = Level;
(( WNHBTRN_uchoices * ) ( UNHBTRN_uchoices.nonlocals )) -> UNHBTRN_uchoices = UNHBTRN_uchoices;
 /* line 192: */
A_CLOSURE( JOHBTRN_ustr, KOHBTRN_ustr, LOHBTRN_ustr );
(( LOHBTRN_ustr * ) ( JOHBTRN_ustr.nonlocals )) -> PNHBTRN_unit_check = NL(PNHBTRN_unit_check);
(( LOHBTRN_ustr * ) ( JOHBTRN_ustr.nonlocals )) -> Level = Level;
(( LOHBTRN_ustr * ) ( JOHBTRN_ustr.nonlocals )) -> JOHBTRN_ustr = JOHBTRN_ustr;
 /* line 203: */
 /* line 204: */
XOHBTRN = U ;
switch ( XOHBTRN.mode )
{ 
case 11: /* REF STRUCT(INT,INT)  */
YOHBTRN_una = (XOHBTRN.data.mode11);
ZOHBTRN.U = U;
 /* line 205: */
ZOHBTRN.C = A68_FALSE;
APHBTRN = ZOHBTRN;
break;
case 16: /* REF STRUCT(MODE176,MODE138)  */
BPHBTRN_uin = (XOHBTRN.data.mode16);
 /* line 206: */
{ 
A_CALLPROC(NL(PNHBTRN_unit_check),((*(&(BPHBTRN_uin->Unit))), A68_FALSE, A68_FALSE, (Level+1), &CPHBTRN),((*(&(BPHBTRN_uin->Unit))), A68_FALSE, A68_FALSE, (Level+1), &CPHBTRN,(NL(PNHBTRN_unit_check)).nonlocals));
DPHBTRN_uc = CPHBTRN;
 /* line 207: */
 /* line 208: */
if ( A_CALLPROC(KJHBTRN_simple_unit,(DPHBTRN_uc.U),(DPHBTRN_uc.U,(KJHBTRN_simple_unit).nonlocals)) )
{ 
 /* line 209: */
if ( Add_let )
{ 
EPHBTRN.Unit = DPHBTRN_uc.U;
EPHBTRN.Index = (*(&(BPHBTRN_uin->Index)));
 /* line 210: */
VUNATRN_unit_type( U, NL(VLHBTRN_fndec), NL(SLHBTRN_env), &FPHBTRN );
GPHBTRN = A_HEAP(A68_186 ) ;
(*GPHBTRN) = EPHBTRN ;
A_CALLPROC(NL(AMHBTRN_new_let),(A_UNITE(HPHBTRN,mode16,16,GPHBTRN), FPHBTRN, &IPHBTRN),(A_UNITE(HPHBTRN,mode16,16,GPHBTRN), FPHBTRN, &IPHBTRN,(NL(AMHBTRN_new_let)).nonlocals));
JPHBTRN_new_u = IPHBTRN;
 /* line 211: */
KPHBTRN.U = JPHBTRN_new_u;
 /* line 212: */
 /* line 213: */
KPHBTRN.C = A68_TRUE;
APHBTRN = KPHBTRN;
} 
else
{ 
if ( DPHBTRN_uc.C )
{ 
MPHBTRN.Unit = DPHBTRN_uc.U;
MPHBTRN.Index = (*(&(BPHBTRN_uin->Index)));
NPHBTRN = A_HEAP(A68_186 ) ;
(*NPHBTRN) = MPHBTRN ;
LPHBTRN.U = A_UNITE(OPHBTRN,mode16,16,NPHBTRN);
 /* line 214: */
LPHBTRN.C = A68_TRUE;
APHBTRN = LPHBTRN;
} 
else
{ 
PPHBTRN.U = U;
 /* line 215: */
 /* line 216: */
PPHBTRN.C = A68_FALSE;
APHBTRN = PPHBTRN;
} 
} 
} 
else
{ 
 /* line 217: */
VUNATRN_unit_type( (*(&(BPHBTRN_uin->Unit))), NL(VLHBTRN_fndec), NL(SLHBTRN_env), &QPHBTRN );
A_CALLPROC(NL(AMHBTRN_new_let),(DPHBTRN_uc.U, QPHBTRN, &RPHBTRN),(DPHBTRN_uc.U, QPHBTRN, &RPHBTRN,(NL(AMHBTRN_new_let)).nonlocals));
SPHBTRN_simple = RPHBTRN;
 /* line 218: */
 /* line 219: */
if ( Add_let )
{ 
TPHBTRN.Unit = SPHBTRN_simple;
TPHBTRN.Index = (*(&(BPHBTRN_uin->Index)));
 /* line 220: */
VUNATRN_unit_type( U, NL(VLHBTRN_fndec), NL(SLHBTRN_env), &UPHBTRN );
VPHBTRN = A_HEAP(A68_186 ) ;
(*VPHBTRN) = TPHBTRN ;
A_CALLPROC(NL(AMHBTRN_new_let),(A_UNITE(WPHBTRN,mode16,16,VPHBTRN), UPHBTRN, &XPHBTRN),(A_UNITE(WPHBTRN,mode16,16,VPHBTRN), UPHBTRN, &XPHBTRN,(NL(AMHBTRN_new_let)).nonlocals));
YPHBTRN_new_u = XPHBTRN;
 /* line 221: */
ZPHBTRN.U = YPHBTRN_new_u;
 /* line 222: */
ZPHBTRN.C = A68_TRUE;
APHBTRN = ZPHBTRN;
} 
else
{ 
BQHBTRN.Unit = SPHBTRN_simple;
BQHBTRN.Index = (*(&(BPHBTRN_uin->Index)));
CQHBTRN = A_HEAP(A68_186 ) ;
(*CQHBTRN) = BQHBTRN ;
AQHBTRN.U = A_UNITE(DQHBTRN,mode16,16,CQHBTRN);
 /* line 223: */
 /* line 224: */
 /* line 225: */
 /* line 226: */
AQHBTRN.C = A68_TRUE;
APHBTRN = AQHBTRN;
} 
} 
} 
break;
case 17: /* REF STRUCT(MODE176,MODE153)  */
EQHBTRN_utr = (XOHBTRN.data.mode17);
 /* line 227: */
{ 
A_CALLPROC(NL(PNHBTRN_unit_check),((*(&(EQHBTRN_utr->Unit))), A68_FALSE, A68_FALSE, (Level+1), &FQHBTRN),((*(&(EQHBTRN_utr->Unit))), A68_FALSE, A68_FALSE, (Level+1), &FQHBTRN,(NL(PNHBTRN_unit_check)).nonlocals));
GQHBTRN_uc = FQHBTRN;
 /* line 228: */
 /* line 229: */
if ( A_CALLPROC(KJHBTRN_simple_unit,(GQHBTRN_uc.U),(GQHBTRN_uc.U,(KJHBTRN_simple_unit).nonlocals)) )
{ 
HQHBTRN = Add_let;
if ( ! HQHBTRN )
{ /* line 230: */
HQHBTRN = (Level>1);
}
if ( HQHBTRN )
{ 
IQHBTRN.Unit = GQHBTRN_uc.U;
IQHBTRN.Range = (*(&(EQHBTRN_utr->Range)));
 /* line 231: */
VUNATRN_unit_type( U, NL(VLHBTRN_fndec), NL(SLHBTRN_env), &JQHBTRN );
KQHBTRN = A_HEAP(A68_187 ) ;
(*KQHBTRN) = IQHBTRN ;
A_CALLPROC(NL(AMHBTRN_new_let),(A_UNITE(LQHBTRN,mode17,17,KQHBTRN), JQHBTRN, &MQHBTRN),(A_UNITE(LQHBTRN,mode17,17,KQHBTRN), JQHBTRN, &MQHBTRN,(NL(AMHBTRN_new_let)).nonlocals));
NQHBTRN_new_u = MQHBTRN;
 /* line 232: */
OQHBTRN.U = NQHBTRN_new_u;
 /* line 233: */
 /* line 234: */
OQHBTRN.C = A68_TRUE;
APHBTRN = OQHBTRN;
} 
else
{ 
if ( GQHBTRN_uc.C )
{ 
QQHBTRN.Unit = GQHBTRN_uc.U;
QQHBTRN.Range = (*(&(EQHBTRN_utr->Range)));
RQHBTRN = A_HEAP(A68_187 ) ;
(*RQHBTRN) = QQHBTRN ;
PQHBTRN.U = A_UNITE(SQHBTRN,mode17,17,RQHBTRN);
 /* line 235: */
PQHBTRN.C = A68_TRUE;
APHBTRN = PQHBTRN;
} 
else
{ 
TQHBTRN.U = U;
 /* line 236: */
 /* line 237: */
TQHBTRN.C = A68_FALSE;
APHBTRN = TQHBTRN;
} 
} 
} 
else
{ 
 /* line 238: */
VUNATRN_unit_type( (*(&(EQHBTRN_utr->Unit))), NL(VLHBTRN_fndec), NL(SLHBTRN_env), &UQHBTRN );
A_CALLPROC(NL(AMHBTRN_new_let),(GQHBTRN_uc.U, UQHBTRN, &VQHBTRN),(GQHBTRN_uc.U, UQHBTRN, &VQHBTRN,(NL(AMHBTRN_new_let)).nonlocals));
WQHBTRN_simple = VQHBTRN;
 /* line 239: */
XQHBTRN = Add_let;
if ( ! XQHBTRN )
{ /* line 240: */
XQHBTRN = (Level>1);
}
if ( XQHBTRN )
{ 
YQHBTRN.Unit = WQHBTRN_simple;
YQHBTRN.Range = (*(&(EQHBTRN_utr->Range)));
 /* line 241: */
VUNATRN_unit_type( U, NL(VLHBTRN_fndec), NL(SLHBTRN_env), &ZQHBTRN );
ARHBTRN = A_HEAP(A68_187 ) ;
(*ARHBTRN) = YQHBTRN ;
A_CALLPROC(NL(AMHBTRN_new_let),(A_UNITE(BRHBTRN,mode17,17,ARHBTRN), ZQHBTRN, &CRHBTRN),(A_UNITE(BRHBTRN,mode17,17,ARHBTRN), ZQHBTRN, &CRHBTRN,(NL(AMHBTRN_new_let)).nonlocals));
DRHBTRN_new_u = CRHBTRN;
 /* line 242: */
ERHBTRN.U = DRHBTRN_new_u;
 /* line 243: */
ERHBTRN.C = A68_TRUE;
APHBTRN = ERHBTRN;
} 
else
{ 
GRHBTRN.Unit = WQHBTRN_simple;
GRHBTRN.Range = (*(&(EQHBTRN_utr->Range)));
HRHBTRN = A_HEAP(A68_187 ) ;
(*HRHBTRN) = GRHBTRN ;
FRHBTRN.U = A_UNITE(IRHBTRN,mode17,17,HRHBTRN);
 /* line 244: */
 /* line 245: */
 /* line 246: */
 /* line 247: */
FRHBTRN.C = A68_TRUE;
APHBTRN = FRHBTRN;
} 
} 
} 
break;
case 18: /* REF STRUCT(MODE176,MODE176)  */
JRHBTRN_udy = (XOHBTRN.data.mode18);
 /* line 248: */
{ 
A_CALLPROC(NL(PNHBTRN_unit_check),((*(&(JRHBTRN_udy->Unit))), A68_FALSE, A68_FALSE, (Level+1), &KRHBTRN),((*(&(JRHBTRN_udy->Unit))), A68_FALSE, A68_FALSE, (Level+1), &KRHBTRN,(NL(PNHBTRN_unit_check)).nonlocals));
LRHBTRN_uc = KRHBTRN;
 /* line 249: */
A_CALLPROC(NL(PNHBTRN_unit_check),((*(&(JRHBTRN_udy->Index))), A68_FALSE, A68_FALSE, (Level+1), &MRHBTRN),((*(&(JRHBTRN_udy->Index))), A68_FALSE, A68_FALSE, (Level+1), &MRHBTRN,(NL(PNHBTRN_unit_check)).nonlocals));
NRHBTRN_ui = MRHBTRN;
 /* line 250: */
 /* line 251: */
if ( A_CALLPROC(KJHBTRN_simple_unit,(LRHBTRN_uc.U),(LRHBTRN_uc.U,(KJHBTRN_simple_unit).nonlocals)) )
{ 
 /* line 252: */
if ( Add_let )
{ 
ORHBTRN.Unit = LRHBTRN_uc.U;
ORHBTRN.Index = NRHBTRN_ui.U;
 /* line 253: */
VUNATRN_unit_type( U, NL(VLHBTRN_fndec), NL(SLHBTRN_env), &PRHBTRN );
QRHBTRN = A_HEAP(A68_188 ) ;
(*QRHBTRN) = ORHBTRN ;
A_CALLPROC(NL(AMHBTRN_new_let),(A_UNITE(RRHBTRN,mode18,18,QRHBTRN), PRHBTRN, &SRHBTRN),(A_UNITE(RRHBTRN,mode18,18,QRHBTRN), PRHBTRN, &SRHBTRN,(NL(AMHBTRN_new_let)).nonlocals));
TRHBTRN_new_u = SRHBTRN;
 /* line 254: */
URHBTRN.U = TRHBTRN_new_u;
 /* line 255: */
URHBTRN.C = A68_TRUE;
APHBTRN = URHBTRN;
} 
else
{ 
 /* line 256: */
VRHBTRN = LRHBTRN_uc.C;
if ( ! VRHBTRN )
{VRHBTRN = NRHBTRN_ui.C;
}
if ( VRHBTRN )
{ 
XRHBTRN.Unit = LRHBTRN_uc.U;
XRHBTRN.Index = NRHBTRN_ui.U;
YRHBTRN = A_HEAP(A68_188 ) ;
(*YRHBTRN) = XRHBTRN ;
WRHBTRN.U = A_UNITE(ZRHBTRN,mode18,18,YRHBTRN);
 /* line 257: */
WRHBTRN.C = A68_TRUE;
APHBTRN = WRHBTRN;
} 
else
{ 
ASHBTRN.U = U;
 /* line 258: */
 /* line 259: */
ASHBTRN.C = A68_FALSE;
APHBTRN = ASHBTRN;
} 
} 
} 
else
{ 
 /* line 260: */
VUNATRN_unit_type( (*(&(JRHBTRN_udy->Unit))), NL(VLHBTRN_fndec), NL(SLHBTRN_env), &BSHBTRN );
A_CALLPROC(NL(AMHBTRN_new_let),(LRHBTRN_uc.U, BSHBTRN, &CSHBTRN),(LRHBTRN_uc.U, BSHBTRN, &CSHBTRN,(NL(AMHBTRN_new_let)).nonlocals));
DSHBTRN_simple = CSHBTRN;
 /* line 261: */
 /* line 262: */
if ( Add_let )
{ 
ESHBTRN.Unit = DSHBTRN_simple;
ESHBTRN.Index = NRHBTRN_ui.U;
 /* line 263: */
VUNATRN_unit_type( U, NL(VLHBTRN_fndec), NL(SLHBTRN_env), &FSHBTRN );
GSHBTRN = A_HEAP(A68_188 ) ;
(*GSHBTRN) = ESHBTRN ;
A_CALLPROC(NL(AMHBTRN_new_let),(A_UNITE(HSHBTRN,mode18,18,GSHBTRN), FSHBTRN, &ISHBTRN),(A_UNITE(HSHBTRN,mode18,18,GSHBTRN), FSHBTRN, &ISHBTRN,(NL(AMHBTRN_new_let)).nonlocals));
JSHBTRN_new_u = ISHBTRN;
 /* line 264: */
KSHBTRN.U = JSHBTRN_new_u;
 /* line 265: */
KSHBTRN.C = A68_TRUE;
APHBTRN = KSHBTRN;
} 
else
{ 
MSHBTRN.Unit = DSHBTRN_simple;
MSHBTRN.Index = NRHBTRN_ui.U;
NSHBTRN = A_HEAP(A68_188 ) ;
(*NSHBTRN) = MSHBTRN ;
LSHBTRN.U = A_UNITE(OSHBTRN,mode18,18,NSHBTRN);
 /* line 266: */
 /* line 267: */
 /* line 268: */
 /* line 269: */
LSHBTRN.C = A68_TRUE;
APHBTRN = LSHBTRN;
} 
} 
} 
break;
case 19: /* REF STRUCT(MODE176,MODE176,MODE176)  */
PSHBTRN_ure = (XOHBTRN.data.mode19);
 /* line 270: */
{ 
A_CALLPROC(NL(PNHBTRN_unit_check),((*(&(PSHBTRN_ure->Unit))), A68_FALSE, A68_FALSE, (Level+1), &QSHBTRN),((*(&(PSHBTRN_ure->Unit))), A68_FALSE, A68_FALSE, (Level+1), &QSHBTRN,(NL(PNHBTRN_unit_check)).nonlocals));
RSHBTRN_uu = QSHBTRN;
 /* line 271: */
A_CALLPROC(NL(PNHBTRN_unit_check),((*(&(PSHBTRN_ure->Index))), A68_FALSE, A68_FALSE, (Level+1), &SSHBTRN),((*(&(PSHBTRN_ure->Index))), A68_FALSE, A68_FALSE, (Level+1), &SSHBTRN,(NL(PNHBTRN_unit_check)).nonlocals));
TSHBTRN_ui = SSHBTRN;
 /* line 272: */
A_CALLPROC(NL(PNHBTRN_unit_check),((*(&(PSHBTRN_ure->From))), A68_FALSE, A68_FALSE, (Level+1), &USHBTRN),((*(&(PSHBTRN_ure->From))), A68_FALSE, A68_FALSE, (Level+1), &USHBTRN,(NL(PNHBTRN_unit_check)).nonlocals));
VSHBTRN_uf = USHBTRN;
 /* line 273: */
WSHBTRN = Add_let;
if ( ! WSHBTRN )
{ /* line 274: */
WSHBTRN = (Level>1);
}
if ( WSHBTRN )
{ 
XSHBTRN.Unit = RSHBTRN_uu.U;
XSHBTRN.Index = TSHBTRN_ui.U;
XSHBTRN.From = VSHBTRN_uf.U;
 /* line 275: */
VUNATRN_unit_type( U, NL(VLHBTRN_fndec), NL(SLHBTRN_env), &YSHBTRN );
ZSHBTRN = A_HEAP(A68_189 ) ;
(*ZSHBTRN) = XSHBTRN ;
A_CALLPROC(NL(AMHBTRN_new_let),(A_UNITE(ATHBTRN,mode19,19,ZSHBTRN), YSHBTRN, &BTHBTRN),(A_UNITE(ATHBTRN,mode19,19,ZSHBTRN), YSHBTRN, &BTHBTRN,(NL(AMHBTRN_new_let)).nonlocals));
CTHBTRN_new_u = BTHBTRN;
 /* line 276: */
DTHBTRN.U = CTHBTRN_new_u;
 /* line 277: */
DTHBTRN.C = A68_TRUE;
APHBTRN = DTHBTRN;
} 
else
{ 
ETHBTRN = RSHBTRN_uu.C;
if ( ! ETHBTRN )
{ETHBTRN = TSHBTRN_ui.C;
}
 /* line 278: */
if ( ! ETHBTRN )
{ETHBTRN = VSHBTRN_uf.C;
}
if ( ETHBTRN )
{ 
GTHBTRN.Unit = RSHBTRN_uu.U;
GTHBTRN.Index = TSHBTRN_ui.U;
GTHBTRN.From = VSHBTRN_uf.U;
HTHBTRN = A_HEAP(A68_189 ) ;
(*HTHBTRN) = GTHBTRN ;
FTHBTRN.U = A_UNITE(ITHBTRN,mode19,19,HTHBTRN);
 /* line 279: */
FTHBTRN.C = A68_TRUE;
APHBTRN = FTHBTRN;
} 
else
{ 
JTHBTRN.U = U;
 /* line 280: */
 /* line 281: */
 /* line 282: */
JTHBTRN.C = A68_FALSE;
APHBTRN = JTHBTRN;
} 
} 
} 
break;
case 20: /* REF STRUCT(MODE138,MODE176)  */
KTHBTRN_uro = (XOHBTRN.data.mode20);
 /* line 283: */
{ 
A_CALLPROC(NL(PNHBTRN_unit_check),((*(&(KTHBTRN_uro->Elem))), A68_FALSE, A68_FALSE, (Level+1), &LTHBTRN),((*(&(KTHBTRN_uro->Elem))), A68_FALSE, A68_FALSE, (Level+1), &LTHBTRN,(NL(PNHBTRN_unit_check)).nonlocals));
MTHBTRN_uc = LTHBTRN;
 /* line 284: */
 /* line 285: */
if ( Add_let )
{ 
NTHBTRN.Size = (*(&(KTHBTRN_uro->Size)));
NTHBTRN.Elem = MTHBTRN_uc.U;
 /* line 286: */
VUNATRN_unit_type( U, NL(VLHBTRN_fndec), NL(SLHBTRN_env), &OTHBTRN );
PTHBTRN = A_HEAP(A68_190 ) ;
(*PTHBTRN) = NTHBTRN ;
A_CALLPROC(NL(AMHBTRN_new_let),(A_UNITE(QTHBTRN,mode20,20,PTHBTRN), OTHBTRN, &RTHBTRN),(A_UNITE(QTHBTRN,mode20,20,PTHBTRN), OTHBTRN, &RTHBTRN,(NL(AMHBTRN_new_let)).nonlocals));
STHBTRN_new_u = RTHBTRN;
 /* line 287: */
TTHBTRN.U = STHBTRN_new_u;
 /* line 288: */
 /* line 289: */
TTHBTRN.C = A68_TRUE;
APHBTRN = TTHBTRN;
} 
else
{ 
if ( MTHBTRN_uc.C )
{ 
VTHBTRN.Size = (*(&(KTHBTRN_uro->Size)));
VTHBTRN.Elem = MTHBTRN_uc.U;
WTHBTRN = A_HEAP(A68_190 ) ;
(*WTHBTRN) = VTHBTRN ;
UTHBTRN.U = A_UNITE(XTHBTRN,mode20,20,WTHBTRN);
 /* line 290: */
UTHBTRN.C = A68_TRUE;
APHBTRN = UTHBTRN;
} 
else
{ 
YTHBTRN.U = U;
 /* line 291: */
 /* line 292: */
 /* line 293: */
YTHBTRN.C = A68_FALSE;
APHBTRN = YTHBTRN;
} 
} 
} 
break;
case 21: /* REF STRUCT(MODE176,REF MODE191)  */
ZTHBTRN_ust = (XOHBTRN.data.mode21);
 /* line 294: */
{ 
A_CALLPROC(JOHBTRN_ustr,(ZTHBTRN_ust, &AUHBTRN),(ZTHBTRN_ust, &AUHBTRN,(JOHBTRN_ustr).nonlocals));
BUHBTRN_uc = AUHBTRN;
 /* line 295: */
 /* line 296: */
if ( Add_let )
{ 
VUNATRN_unit_type( U, NL(VLHBTRN_fndec), NL(SLHBTRN_env), &CUHBTRN );
EUHBTRN = BUHBTRN_uc.U ;
A_CALLPROC(NL(AMHBTRN_new_let),(A_UNITE(DUHBTRN,mode21,21,EUHBTRN), CUHBTRN, &FUHBTRN),(A_UNITE(DUHBTRN,mode21,21,EUHBTRN), CUHBTRN, &FUHBTRN,(NL(AMHBTRN_new_let)).nonlocals));
GUHBTRN_new_u = FUHBTRN;
 /* line 297: */
HUHBTRN.U = GUHBTRN_new_u;
 /* line 298: */
HUHBTRN.C = A68_TRUE;
APHBTRN = HUHBTRN;
} 
else
{ 
KUHBTRN = BUHBTRN_uc.U ;
IUHBTRN.U = A_UNITE(JUHBTRN,mode21,21,KUHBTRN);
 /* line 299: */
 /* line 300: */
 /* line 301: */
IUHBTRN.C = BUHBTRN_uc.C;
APHBTRN = IUHBTRN;
} 
} 
break;
case 22: /* REF STRUCT(BOOL,INT,MODE176,MODE176)  */
LUHBTRN_uco = (XOHBTRN.data.mode22);
 /* line 302: */
{ 
A_CALLPROC(NL(PNHBTRN_unit_check),((*(&(LUHBTRN_uco->Left))), A68_FALSE, A68_FALSE, (Level+1), &MUHBTRN),((*(&(LUHBTRN_uco->Left))), A68_FALSE, A68_FALSE, (Level+1), &MUHBTRN,(NL(PNHBTRN_unit_check)).nonlocals));
NUHBTRN_ul = MUHBTRN;
 /* line 303: */
A_CALLPROC(NL(PNHBTRN_unit_check),((*(&(LUHBTRN_uco->Right))), A68_FALSE, A68_FALSE, (Level+1), &OUHBTRN),((*(&(LUHBTRN_uco->Right))), A68_FALSE, A68_FALSE, (Level+1), &OUHBTRN,(NL(PNHBTRN_unit_check)).nonlocals));
PUHBTRN_ur = OUHBTRN;
 /* line 304: */
 /* line 305: */
if ( Add_let )
{ 
QUHBTRN.String = (*(&(LUHBTRN_uco->String)));
 /* line 306: */
QUHBTRN.Sort = (*(&(LUHBTRN_uco->Sort)));
QUHBTRN.Left = NUHBTRN_ul.U;
QUHBTRN.Right = PUHBTRN_ur.U;
 /* line 307: */
VUNATRN_unit_type( U, NL(VLHBTRN_fndec), NL(SLHBTRN_env), &RUHBTRN );
SUHBTRN = A_HEAP(A68_192 ) ;
(*SUHBTRN) = QUHBTRN ;
A_CALLPROC(NL(AMHBTRN_new_let),(A_UNITE(TUHBTRN,mode22,22,SUHBTRN), RUHBTRN, &UUHBTRN),(A_UNITE(TUHBTRN,mode22,22,SUHBTRN), RUHBTRN, &UUHBTRN,(NL(AMHBTRN_new_let)).nonlocals));
VUHBTRN_new_u = UUHBTRN;
 /* line 308: */
WUHBTRN.U = VUHBTRN_new_u;
 /* line 309: */
WUHBTRN.C = A68_TRUE;
APHBTRN = WUHBTRN;
} 
else
{ 
 /* line 310: */
XUHBTRN = NUHBTRN_ul.C;
if ( ! XUHBTRN )
{XUHBTRN = PUHBTRN_ur.C;
}
if ( XUHBTRN )
{ 
ZUHBTRN.String = (*(&(LUHBTRN_uco->String)));
ZUHBTRN.Sort = (*(&(LUHBTRN_uco->Sort)));
ZUHBTRN.Left = NUHBTRN_ul.U;
ZUHBTRN.Right = PUHBTRN_ur.U;
 /* line 311: */
AVHBTRN = A_HEAP(A68_192 ) ;
(*AVHBTRN) = ZUHBTRN ;
YUHBTRN.U = A_UNITE(BVHBTRN,mode22,22,AVHBTRN);
 /* line 312: */
YUHBTRN.C = A68_TRUE;
APHBTRN = YUHBTRN;
} 
else
{ 
CVHBTRN.U = U;
 /* line 313: */
 /* line 314: */
 /* line 315: */
CVHBTRN.C = A68_FALSE;
APHBTRN = CVHBTRN;
} 
} 
} 
break;
case 23: /* REF STRUCT(MODE216,MODE176)  */
DVHBTRN_umi = (XOHBTRN.data.mode23);
 /* line 316: */
{ 
A_CALLPROC(NL(PNHBTRN_unit_check),((*(&(DVHBTRN_umi->Right))), A68_FALSE, A68_FALSE, (Level+1), &EVHBTRN),((*(&(DVHBTRN_umi->Right))), A68_FALSE, A68_FALSE, (Level+1), &EVHBTRN,(NL(PNHBTRN_unit_check)).nonlocals));
FVHBTRN_uc1 = EVHBTRN;
 /* line 317: */
 /* line 318: */
GVHBTRN_instdec = IDNATRN_find_fndec((*LHAATRN_makefnname((*(&((&(DVHBTRN_umi->Inst))->Fnno))))), NL(Closure), NL(SLHBTRN_env));
 /* line 319: */
HVHBTRN_expected = DTNATRN_names_size((*(&(GVHBTRN_instdec->Inputs))));
 /* line 320: */
 /* line 321: */
VUNATRN_unit_type( (*(&(DVHBTRN_umi->Right))), NL(VLHBTRN_fndec), NL(SLHBTRN_env), &IVHBTRN );
A_CALLPROC(NL(NMHBTRN_input_check),(FVHBTRN_uc1, HVHBTRN_expected, IVHBTRN, &JVHBTRN),(FVHBTRN_uc1, HVHBTRN_expected, IVHBTRN, &JVHBTRN,(NL(NMHBTRN_input_check)).nonlocals));
KVHBTRN_uc2 = JVHBTRN;
 /* line 322: */
LVHBTRN = Add_let;
if ( ! LVHBTRN )
{ /* line 323: */
LVHBTRN = (Level>1);
}
if ( LVHBTRN )
{ 
MVHBTRN.Inst = (*(&(DVHBTRN_umi->Inst)));
MVHBTRN.Right = KVHBTRN_uc2.U;
 /* line 324: */
VUNATRN_unit_type( U, NL(VLHBTRN_fndec), NL(SLHBTRN_env), &NVHBTRN );
OVHBTRN = A_HEAP(A68_193 ) ;
(*OVHBTRN) = MVHBTRN ;
A_CALLPROC(NL(AMHBTRN_new_let),(A_UNITE(PVHBTRN,mode23,23,OVHBTRN), NVHBTRN, &QVHBTRN),(A_UNITE(PVHBTRN,mode23,23,OVHBTRN), NVHBTRN, &QVHBTRN,(NL(AMHBTRN_new_let)).nonlocals));
RVHBTRN_new_u = QVHBTRN;
 /* line 325: */
SVHBTRN.U = RVHBTRN_new_u;
 /* line 326: */
 /* line 327: */
SVHBTRN.C = A68_TRUE;
APHBTRN = SVHBTRN;
} 
else
{ 
if ( KVHBTRN_uc2.C )
{ 
UVHBTRN.Inst = (*(&(DVHBTRN_umi->Inst)));
UVHBTRN.Right = KVHBTRN_uc2.U;
VVHBTRN = A_HEAP(A68_193 ) ;
(*VVHBTRN) = UVHBTRN ;
TVHBTRN.U = A_UNITE(WVHBTRN,mode23,23,VVHBTRN);
 /* line 328: */
TVHBTRN.C = A68_TRUE;
APHBTRN = TVHBTRN;
} 
else
{ 
XVHBTRN.U = U;
 /* line 329: */
 /* line 330: */
 /* line 331: */
XVHBTRN.C = A68_FALSE;
APHBTRN = XVHBTRN;
} 
} 
} 
break;
case 25: /* REF STRUCT(MODE176,REF MODE236)  */
YVHBTRN_uca = (XOHBTRN.data.mode25);
 /* line 332: */
{ 
A_CALLPROC(NL(PNHBTRN_unit_check),((*(&(YVHBTRN_uca->Input))), A68_FALSE, A68_FALSE, (Level+1), &ZVHBTRN),((*(&(YVHBTRN_uca->Input))), A68_FALSE, A68_FALSE, (Level+1), &ZVHBTRN,(NL(PNHBTRN_unit_check)).nonlocals));
AWHBTRN_inc = ZVHBTRN;
 /* line 333: */
A_CALLPROC(UNHBTRN_uchoices,((*(&(YVHBTRN_uca->Choices))), &BWHBTRN),((*(&(YVHBTRN_uca->Choices))), &BWHBTRN,(UNHBTRN_uchoices).nonlocals));
CWHBTRN_ucc = BWHBTRN;
 /* line 334: */
DWHBTRN = Add_let;
if ( ! DWHBTRN )
{EWHBTRN = (Level>1);
if ( EWHBTRN )
{EWHBTRN = !Case_allowed;
}
 /* line 335: */
DWHBTRN = EWHBTRN;
}
if ( DWHBTRN )
{ 
FWHBTRN.Input = AWHBTRN_inc.U;
FWHBTRN.Choices = CWHBTRN_ucc.U;
 /* line 336: */
VUNATRN_unit_type( U, NL(VLHBTRN_fndec), NL(SLHBTRN_env), &GWHBTRN );
HWHBTRN = A_HEAP(A68_195 ) ;
(*HWHBTRN) = FWHBTRN ;
A_CALLPROC(NL(AMHBTRN_new_let),(A_UNITE(IWHBTRN,mode25,25,HWHBTRN), GWHBTRN, &JWHBTRN),(A_UNITE(IWHBTRN,mode25,25,HWHBTRN), GWHBTRN, &JWHBTRN,(NL(AMHBTRN_new_let)).nonlocals));
KWHBTRN_new_u = JWHBTRN;
 /* line 337: */
LWHBTRN.U = KWHBTRN_new_u;
 /* line 338: */
LWHBTRN.C = A68_TRUE;
APHBTRN = LWHBTRN;
} 
else
{ 
 /* line 339: */
MWHBTRN = AWHBTRN_inc.C;
if ( ! MWHBTRN )
{MWHBTRN = CWHBTRN_ucc.C;
}
if ( MWHBTRN )
{ 
OWHBTRN.Input = AWHBTRN_inc.U;
OWHBTRN.Choices = CWHBTRN_ucc.U;
PWHBTRN = A_HEAP(A68_195 ) ;
(*PWHBTRN) = OWHBTRN ;
NWHBTRN.U = A_UNITE(QWHBTRN,mode25,25,PWHBTRN);
 /* line 340: */
NWHBTRN.C = A68_TRUE;
APHBTRN = NWHBTRN;
} 
else
{ 
RWHBTRN.U = U;
 /* line 341: */
 /* line 342: */
 /* line 343: */
RWHBTRN.C = A68_FALSE;
APHBTRN = RWHBTRN;
} 
} 
} 
break;
case 29: /* REF STRUCT(REF MODE205,MODE176)  */
SWHBTRN_use = (XOHBTRN.data.mode29);
 /* line 344: */
{ 
TWHBTRN_steps = (*(&(SWHBTRN_use->Body)));
 /* line 345: */
for ( ;; )
{ 
 /* line 346: */
if ( !((TWHBTRN_steps!=SAAATRN_nilseries)) ) break;
 /* line 347: */
UWHBTRN = (*(&(TWHBTRN_steps->Step))) ;
switch ( UWHBTRN.mode )
{ 
case 8: /* REF STRUCT(REF MODE217,MODE176)  */
VWHBTRN_let = (UWHBTRN.data.mode8);
 /* line 348: */
{ 
A_CALLPROC(NL(PNHBTRN_unit_check),((*(&(VWHBTRN_let->Unit))), A68_FALSE, A68_TRUE, 1, &WWHBTRN),((*(&(VWHBTRN_let->Unit))), A68_FALSE, A68_TRUE, 1, &WWHBTRN,(NL(PNHBTRN_unit_check)).nonlocals));
XWHBTRN_uc = WWHBTRN;
 /* line 349: */
 /* line 350: */
YWHBTRN.Nameno = (*(&((*(&(VWHBTRN_let->Letnames)))->Nameno)));
YWHBTRN.Unit = XWHBTRN_uc.U;
YWHBTRN.Type = A_UNITE(ZWHBTRN,mode9,9,(&DIAATRN_tnull));
 /* line 351: */
YWHBTRN.Rest = (*NL(WLHBTRN_lets));
 /* line 352: */
AXHBTRN = A_HEAP(A68_464 ) ;
(*AXHBTRN) = YWHBTRN ;
(*NL(WLHBTRN_lets)) = AXHBTRN;
} 
break;
default: 
 /* line 353: */
A_CALLPROC(ZLBAOSI_global_msg,(SHAAOSI_system, A_HVEC(DXHBTRN,CXHBTRN,A68_VC )),(SHAAOSI_system, A_HVEC(DXHBTRN,CXHBTRN,A68_VC ),(ZLBAOSI_global_msg).nonlocals));
break;
} 
 /* line 354: */
 /* line 355: */
TWHBTRN_steps = (*(&(TWHBTRN_steps->Rest)));
}
 /* line 356: */
A_CALLPROC(NL(PNHBTRN_unit_check),((*(&(SWHBTRN_use->Output))), A68_FALSE, Case_allowed, (Level+1), &EXHBTRN),((*(&(SWHBTRN_use->Output))), A68_FALSE, Case_allowed, (Level+1), &EXHBTRN,(NL(PNHBTRN_unit_check)).nonlocals));
FXHBTRN_uout = EXHBTRN;
 /* line 357: */
GXHBTRN.U = FXHBTRN_uout.U;
 /* line 358: */
 /* line 359: */
GXHBTRN.C = A68_TRUE;
APHBTRN = GXHBTRN;
} 
break;
case 33: /* REF STRUCT(MODE138,MODE176)  */
HXHBTRN_usg = (XOHBTRN.data.mode33);
 /* line 360: */
{ 
A_CALLPROC(NL(PNHBTRN_unit_check),((*(&(HXHBTRN_usg->Char))), A68_FALSE, A68_FALSE, (Level+1), &IXHBTRN),((*(&(HXHBTRN_usg->Char))), A68_FALSE, A68_FALSE, (Level+1), &IXHBTRN,(NL(PNHBTRN_unit_check)).nonlocals));
JXHBTRN_uc = IXHBTRN;
 /* line 361: */
 /* line 362: */
if ( Add_let )
{ 
KXHBTRN.Size = (*(&(HXHBTRN_usg->Size)));
KXHBTRN.Char = JXHBTRN_uc.U;
 /* line 363: */
VUNATRN_unit_type( U, NL(VLHBTRN_fndec), NL(SLHBTRN_env), &LXHBTRN );
MXHBTRN = A_HEAP(A68_203 ) ;
(*MXHBTRN) = KXHBTRN ;
A_CALLPROC(NL(AMHBTRN_new_let),(A_UNITE(NXHBTRN,mode33,33,MXHBTRN), LXHBTRN, &OXHBTRN),(A_UNITE(NXHBTRN,mode33,33,MXHBTRN), LXHBTRN, &OXHBTRN,(NL(AMHBTRN_new_let)).nonlocals));
PXHBTRN_new_u = OXHBTRN;
 /* line 364: */
QXHBTRN.U = PXHBTRN_new_u;
 /* line 365: */
 /* line 366: */
QXHBTRN.C = A68_TRUE;
APHBTRN = QXHBTRN;
} 
else
{ 
if ( JXHBTRN_uc.C )
{ 
SXHBTRN.Size = (*(&(HXHBTRN_usg->Size)));
SXHBTRN.Char = JXHBTRN_uc.U;
TXHBTRN = A_HEAP(A68_203 ) ;
(*TXHBTRN) = SXHBTRN ;
RXHBTRN.U = A_UNITE(UXHBTRN,mode33,33,TXHBTRN);
 /* line 367: */
RXHBTRN.C = A68_TRUE;
APHBTRN = RXHBTRN;
} 
else
{ 
VXHBTRN.U = U;
 /* line 368: */
 /* line 369: */
 /* line 370: */
VXHBTRN.C = A68_FALSE;
APHBTRN = VXHBTRN;
} 
} 
} 
break;
default: 
WXHBTRN.U = U;
 /* line 371: */
 /* line 372: */
WXHBTRN.C = A68_FALSE;
APHBTRN = WXHBTRN;
break;
} 
} 
A_PROC_EXIT(unit_check);
*ReturnedValue = (APHBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  AYHBTRN_fndec_trans(A68_252 * Fdec, A68_360 * Tprocs, A68_357  *ReturnedValue, void *NonLocals)
#define NL(x) (((BYHBTRN_fndec_trans *)NonLocals)->x)
{ 
A68_248  CYHBTRN;  /* united object - for case conformity */
A68_221 * DYHBTRN_tag;
A68_BOOL  EYHBTRN_changed;
A68_176  FYHBTRN_output;
A68_176  GYHBTRN;  /* united object - for case conformity */
A68_199 * HYHBTRN_us;
A68_205 * IYHBTRN_steps;
A68_206  JYHBTRN;  /* united object - for case conformity */
A68_210 * KYHBTRN_let;
A68_336  LYHBTRN;  /* avoid structure result */
A68_336  MYHBTRN_uc;
A68_464  NYHBTRN;  /* collateral clause result */
A68_154  OYHBTRN;  /* OPERATORS - mode -> union mode */
A68_464 * PYHBTRN;  /* YIELD */
A68_46  SYHBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_336  TYHBTRN;  /* avoid structure result */
A68_336  UYHBTRN_uc;
A68_181  VYHBTRN;  /* collateral clause result */
A68_181 * WYHBTRN;  /* YIELD */
A68_176  XYHBTRN;  /* OPERATORS - mode -> union mode */
A68_336  YYHBTRN;  /* avoid structure result */
A68_336  ZYHBTRN_uc;
A68_181  AZHBTRN;  /* collateral clause result */
A68_181 * BZHBTRN;  /* YIELD */
A68_176  CZHBTRN;  /* OPERATORS - mode -> union mode */
A68_254  DZHBTRN_old_nametypes;
A68_474  FZHBTRN_generator;   /* proc value of non-global proc */
A68_254  LZHBTRN;  /* avoid structure result */
A68_254  KZHBTRN_new_nametypes;
A68_INT  MZHBTRN_old_upb;
A68_INT  NZHBTRN_i;
A68_INT  OZHBTRN;  /* to part of loop */
A68_251 * PZHBTRN;  /* YIELD */
A68_464 * QZHBTRN_list;
A68_INT  RZHBTRN_nameno;
A68_251  SZHBTRN;  /* collateral clause result */
A68_475  TZHBTRN;  /* collateral clause result */
A68_52  WZHBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  XZHBTRN;  /* YIELD */
A68_52  YZHBTRN;  /* OPERATORS - mode -> union mode */
A68_85  ZZHBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  AAIBTRN;  /* avoid structure result */
A68_129  BAIBTRN;  /* OPERATORS - mode -> union mode */
A68_251 * CAIBTRN;  /* YIELD */
A68_205 * DAIBTRN_steps;
A68_210  EAIBTRN;  /* collateral clause result */
A68_217  FAIBTRN;  /* collateral clause result */
A68_217 * GAIBTRN;  /* YIELD */
A68_210 * IAIBTRN;  /* YIELD */
A68_210 * HAIBTRN_let;
A68_205  JAIBTRN;  /* collateral clause result */
A68_206  KAIBTRN;  /* OPERATORS - mode -> union mode */
A68_205 * LAIBTRN;  /* YIELD */
A68_199  MAIBTRN;  /* collateral clause result */
A68_199 * NAIBTRN;  /* YIELD */
A68_176  OAIBTRN;  /* OPERATORS - mode -> union mode */
A68_248  PAIBTRN;  /* OPERATORS - mode -> union mode */
A68_221 * QAIBTRN;  /* YIELD */
A68_248  RAIBTRN_fnbody;
A68_357  SAIBTRN;  /* collateral clause result */
A68_252  TAIBTRN;  /* collateral clause result */
A68_252 * UAIBTRN;  /* YIELD */
A68_357  VAIBTRN;  /* clause result */
A68_357  WAIBTRN;  /* collateral clause result */
A68_357  XAIBTRN;  /* collateral clause result */
A68_357  YAIBTRN;  /* collateral clause result */
A_PROC_ENTRY(fndec_trans);
 /* line 375: */
 /* line 376: */
{ 
 /* line 377: */
if ( (Fdec!=YAAATRN_nilfndec) )
{ 
 /* line 378: */
CYHBTRN = (*(&(Fdec->Fnbody))) ;
switch ( CYHBTRN.mode )
{ 
case 1: /* REF STRUCT(MODE176)  */
DYHBTRN_tag = (CYHBTRN.data.mode1);
 /* line 379: */
{ 
EYHBTRN_changed = A68_FALSE;
 /* line 380: */
(*NL(WLHBTRN_lets)) = JJHBTRN_nilletlist;
 /* line 381: */
(*NL(XLHBTRN_next_name)) = ((*(&(Fdec->Nametypes))).upb+1);
 /* line 382: */
 /* line 383: */
 /* line 384: */
GYHBTRN = (*(&(DYHBTRN_tag->Tag))) ;
switch ( GYHBTRN.mode )
{ 
case 29: /* REF STRUCT(REF MODE205,MODE176)  */
HYHBTRN_us = (GYHBTRN.data.mode29);
 /* line 385: */
{ 
IYHBTRN_steps = (*(&(HYHBTRN_us->Body)));
 /* line 386: */
for ( ;; )
{ 
 /* line 387: */
if ( !((IYHBTRN_steps!=SAAATRN_nilseries)) ) break;
 /* line 388: */
JYHBTRN = (*(&(IYHBTRN_steps->Step))) ;
switch ( JYHBTRN.mode )
{ 
case 8: /* REF STRUCT(REF MODE217,MODE176)  */
KYHBTRN_let = (JYHBTRN.data.mode8);
 /* line 389: */
{ 
A_CALLPROC(NL(PNHBTRN_unit_check),((*(&(KYHBTRN_let->Unit))), A68_FALSE, A68_TRUE, 1, &LYHBTRN),((*(&(KYHBTRN_let->Unit))), A68_FALSE, A68_TRUE, 1, &LYHBTRN,(NL(PNHBTRN_unit_check)).nonlocals));
MYHBTRN_uc = LYHBTRN;
 /* line 390: */
if ( MYHBTRN_uc.C )
{ 
EYHBTRN_changed = A68_TRUE;
} 
 /* line 391: */
 /* line 392: */
NYHBTRN.Nameno = (*(&((*(&(KYHBTRN_let->Letnames)))->Nameno)));
NYHBTRN.Unit = MYHBTRN_uc.U;
NYHBTRN.Type = A_UNITE(OYHBTRN,mode9,9,(&DIAATRN_tnull));
 /* line 393: */
NYHBTRN.Rest = (*NL(WLHBTRN_lets));
 /* line 394: */
PYHBTRN = A_HEAP(A68_464 ) ;
(*PYHBTRN) = NYHBTRN ;
(*NL(WLHBTRN_lets)) = PYHBTRN;
} 
break;
default: 
 /* line 395: */
A_CALLPROC(ZLBAOSI_global_msg,(SHAAOSI_system, A_HVEC(SYHBTRN,RYHBTRN,A68_VC )),(SHAAOSI_system, A_HVEC(SYHBTRN,RYHBTRN,A68_VC ),(ZLBAOSI_global_msg).nonlocals));
break;
} 
 /* line 396: */
 /* line 397: */
IYHBTRN_steps = (*(&(IYHBTRN_steps->Rest)));
}
 /* line 398: */
 /* line 399: */
if ( MJHBTRN_exp_unit((*(&(HYHBTRN_us->Output)))) )
{ 
 /* line 400: */
FYHBTRN_output = (*(&(HYHBTRN_us->Output)));
} 
else
{ 
A_CALLPROC(NL(PNHBTRN_unit_check),((*(&(HYHBTRN_us->Output))), A68_TRUE, A68_TRUE, 1, &TYHBTRN),((*(&(HYHBTRN_us->Output))), A68_TRUE, A68_TRUE, 1, &TYHBTRN,(NL(PNHBTRN_unit_check)).nonlocals));
UYHBTRN_uc = TYHBTRN;
 /* line 401: */
VYHBTRN.Sort = KKAATRN_usource;
VYHBTRN.Nameno = ((*NL(XLHBTRN_next_name))-1);
WYHBTRN = A_HEAP(A68_181 ) ;
(*WYHBTRN) = VYHBTRN ;
FYHBTRN_output = A_UNITE(XYHBTRN,mode11,11,WYHBTRN);
 /* line 402: */
 /* line 403: */
 /* line 404: */
 /* line 405: */
EYHBTRN_changed = A68_TRUE;
} 
} 
break;
default: 
 /* line 406: */
if ( MJHBTRN_exp_unit((*(&(DYHBTRN_tag->Tag)))) )
{ 
 /* line 407: */
FYHBTRN_output = (*(&(DYHBTRN_tag->Tag)));
} 
else
{ 
A_CALLPROC(NL(PNHBTRN_unit_check),((*(&(DYHBTRN_tag->Tag))), A68_TRUE, A68_TRUE, 1, &YYHBTRN),((*(&(DYHBTRN_tag->Tag))), A68_TRUE, A68_TRUE, 1, &YYHBTRN,(NL(PNHBTRN_unit_check)).nonlocals));
ZYHBTRN_uc = YYHBTRN;
 /* line 408: */
AZHBTRN.Sort = KKAATRN_usource;
 /* line 409: */
AZHBTRN.Nameno = ((*NL(XLHBTRN_next_name))-1);
BZHBTRN = A_HEAP(A68_181 ) ;
(*BZHBTRN) = AZHBTRN ;
FYHBTRN_output = A_UNITE(CZHBTRN,mode11,11,BZHBTRN);
} 
 /* line 410: */
 /* line 411: */
EYHBTRN_changed = A68_TRUE;
break;
} 
 /* line 412: */
 /* line 413: */
 /* line 414: */
if ( EYHBTRN_changed )
{ 
DZHBTRN_old_nametypes = (*(&(Fdec->Nametypes)));
 /* line 415: */
 /* line 416: */
A_CLOSURE( FZHBTRN_generator, GZHBTRN_generator, HZHBTRN_generator );
(( HZHBTRN_generator * ) ( FZHBTRN_generator.nonlocals )) -> XLHBTRN_next_name = NL(XLHBTRN_next_name);
A_CALLPROC(FZHBTRN_generator,(A68_FALSE, &LZHBTRN),(A68_FALSE, &LZHBTRN,(FZHBTRN_generator).nonlocals));
KZHBTRN_new_nametypes = LZHBTRN;
 /* line 417: */
MZHBTRN_old_upb = DZHBTRN_old_nametypes.upb;
 /* line 418: */
OZHBTRN = MZHBTRN_old_upb;
for ( NZHBTRN_i = 1;
NZHBTRN_i <= OZHBTRN;
NZHBTRN_i += 1 )
{ 
PZHBTRN = (&A_VINDEX(KZHBTRN_new_nametypes,NZHBTRN_i)) ;
(*PZHBTRN) = (*(&A_VINDEX(DZHBTRN_old_nametypes,NZHBTRN_i)));
}
 /* line 419: */
QZHBTRN_list = (*NL(WLHBTRN_lets));
 /* line 420: */
for ( ;; )
{ 
 /* line 421: */
if ( !((QZHBTRN_list!=JJHBTRN_nilletlist)) ) break;
RZHBTRN_nameno = (*(&(QZHBTRN_list->Nameno)));
 /* line 422: */
 /* line 423: */
if ( (RZHBTRN_nameno>MZHBTRN_old_upb) )
{ 
XZHBTRN = VZHBTRN ;
TZHBTRN.data[0] = A_UNITE(WZHBTRN,mode7,7,XZHBTRN);
TZHBTRN.data[1] = A_UNITE(YZHBTRN,mode1,1,RZHBTRN_nameno);
 /* line 424: */
UJBAOSL_oneline( A_HISVEC(ZZHBTRN,TZHBTRN,2,A68_52 ), &AAIBTRN );
SZHBTRN.Name = AAIBTRN;
SZHBTRN.Type = (*(&(QZHBTRN_list->Type)));
 /* line 425: */
SZHBTRN.Attr = A_UNITE(BAIBTRN,mode5,5,(&ZHAATRN_attrnull));
CAIBTRN = (&A_VINDEX(KZHBTRN_new_nametypes,RZHBTRN_nameno)) ;
(*CAIBTRN) = SZHBTRN;
} 
 /* line 426: */
 /* line 427: */
QZHBTRN_list = (*(&(QZHBTRN_list->Rest)));
}
 /* line 429: */
DAIBTRN_steps = SAAATRN_nilseries;
 /* line 430: */
QZHBTRN_list = (*NL(WLHBTRN_lets));
 /* line 431: */
for ( ;; )
{ 
 /* line 432: */
 /* line 433: */
if ( !((QZHBTRN_list!=JJHBTRN_nilletlist)) ) break;
FAIBTRN.Nameno = (*(&(QZHBTRN_list->Nameno)));
FAIBTRN.Rest = NAAATRN_nilnames;
 /* line 434: */
GAIBTRN = A_HEAP(A68_217 ) ;
(*GAIBTRN) = FAIBTRN ;
EAIBTRN.Letnames = GAIBTRN;
EAIBTRN.Unit = (*(&(QZHBTRN_list->Unit)));
IAIBTRN = A_HEAP(A68_210 ) ;
(*IAIBTRN) = EAIBTRN ;
HAIBTRN_let = IAIBTRN;
 /* line 435: */
JAIBTRN.Step = A_UNITE(KAIBTRN,mode8,8,HAIBTRN_let);
JAIBTRN.Rest = DAIBTRN_steps;
LAIBTRN = A_HEAP(A68_205 ) ;
(*LAIBTRN) = JAIBTRN ;
DAIBTRN_steps = LAIBTRN;
 /* line 436: */
 /* line 437: */
QZHBTRN_list = (*(&(QZHBTRN_list->Rest)));
}
 /* line 438: */
MAIBTRN.Body = DAIBTRN_steps;
MAIBTRN.Output = FYHBTRN_output;
NAIBTRN = A_HEAP(A68_199 ) ;
(*NAIBTRN) = MAIBTRN ;
QAIBTRN = WGAATRN_makeunittag(A_UNITE(OAIBTRN,mode29,29,NAIBTRN)) ;
RAIBTRN_fnbody = A_UNITE(PAIBTRN,mode1,1,QAIBTRN);
 /* line 439: */
TAIBTRN.Sort = (*(&(Fdec->Sort)));
TAIBTRN.Macro = (*(&(Fdec->Macro)));
 /* line 440: */
TAIBTRN.Fnname = (*(&(Fdec->Fnname)));
TAIBTRN.Macspecs = (*(&(Fdec->Macspecs)));
 /* line 441: */
TAIBTRN.Attr = (*(&(Fdec->Attr)));
TAIBTRN.Inputs = (*(&(Fdec->Inputs)));
 /* line 442: */
TAIBTRN.Outputs = (*(&(Fdec->Outputs)));
TAIBTRN.Nametypes = KZHBTRN_new_nametypes;
TAIBTRN.Fnbody = RAIBTRN_fnbody;
TAIBTRN.Usage = (*(&(Fdec->Usage)));
UAIBTRN = A_HEAP(A68_252 ) ;
(*UAIBTRN) = TAIBTRN ;
SAIBTRN.F = UAIBTRN;
 /* line 443: */
SAIBTRN.C = A68_TRUE;
VAIBTRN = SAIBTRN;
} 
else
{ 
WAIBTRN.F = Fdec;
 /* line 444: */
 /* line 445: */
 /* line 446: */
WAIBTRN.C = A68_FALSE;
VAIBTRN = WAIBTRN;
} 
} 
break;
default: 
XAIBTRN.F = Fdec;
 /* line 447: */
 /* line 448: */
XAIBTRN.C = A68_FALSE;
VAIBTRN = XAIBTRN;
break;
} 
} 
else
{ 
YAIBTRN.F = Fdec;
 /* line 449: */
 /* line 450: */
YAIBTRN.C = A68_FALSE;
VAIBTRN = YAIBTRN;
} 
} 
A_PROC_EXIT(fndec_trans);
*ReturnedValue = (VAIBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  VBIBTRN_outer(A68_261  O, A68_360 * Tprocs, A68_358  *ReturnedValue, void *NonLocals)
#define NL(x) (((WBIBTRN_outer *)NonLocals)->x)
{ 
A68_358  XBIBTRN;  /* clause result */
A68_358  YBIBTRN;  /* avoid structure result */
A_PROC_ENTRY(outer);
 /* line 468: */
RLHBTRN_outer_transform( O, NL(Closure), &YBIBTRN );
XBIBTRN = YBIBTRN;
A_PROC_EXIT(outer);
*ReturnedValue = (XBIBTRN);
return;
} 
#undef NL

A_STATIC A68_BOOL  MJHBTRN_exp_unit(A68_176  U)
{ 
A68_176  NJHBTRN;  /* united object - for case conformity */
A68_BOOL  OJHBTRN;  /* clause result */
A68_186 * PJHBTRN_uin;
A68_188 * QJHBTRN_udy;
A68_BOOL  RJHBTRN;  /* optbool result */
A68_190 * SJHBTRN_uro;
A68_191 * TJHBTRN_ust;
A68_BOOL  UJHBTRN;  /* optbool result */
A68_176  VJHBTRN;  /* OPERATORS - mode -> union mode */
A68_191 * WJHBTRN;  /* YIELD */
A68_192 * XJHBTRN_uco;
A68_BOOL  YJHBTRN;  /* optbool result */
A68_203 * ZJHBTRN_usg;
A_PROC_ENTRY(exp_unit);
 /* line 52: */
 /* line 53: */
NJHBTRN = U ;
switch ( NJHBTRN.mode )
{ 
case 23: /* REF STRUCT(MODE216,MODE176)  */
 /* line 54: */
OJHBTRN = A68_FALSE;
break;
case 17: /* REF STRUCT(MODE176,MODE153)  */
 /* line 55: */
OJHBTRN = A68_FALSE;
break;
case 19: /* REF STRUCT(MODE176,MODE176,MODE176)  */
 /* line 56: */
OJHBTRN = A68_FALSE;
break;
case 25: /* REF STRUCT(MODE176,REF MODE236)  */
 /* line 57: */
OJHBTRN = A68_FALSE;
break;
case 29: /* REF STRUCT(REF MODE205,MODE176)  */
 /* line 58: */
OJHBTRN = A68_FALSE;
break;
case 16: /* REF STRUCT(MODE176,MODE138)  */
PJHBTRN_uin = (NJHBTRN.data.mode16);
 /* line 59: */
OJHBTRN = A_CALLPROC(KJHBTRN_simple_unit,((*(&(PJHBTRN_uin->Unit)))),((*(&(PJHBTRN_uin->Unit))),(KJHBTRN_simple_unit).nonlocals));
break;
case 18: /* REF STRUCT(MODE176,MODE176)  */
QJHBTRN_udy = (NJHBTRN.data.mode18);
RJHBTRN = A_CALLPROC(KJHBTRN_simple_unit,((*(&(QJHBTRN_udy->Unit)))),((*(&(QJHBTRN_udy->Unit))),(KJHBTRN_simple_unit).nonlocals));
if ( RJHBTRN )
{RJHBTRN = MJHBTRN_exp_unit((*(&(QJHBTRN_udy->Index))));
}
 /* line 60: */
OJHBTRN = RJHBTRN;
break;
case 20: /* REF STRUCT(MODE138,MODE176)  */
SJHBTRN_uro = (NJHBTRN.data.mode20);
 /* line 61: */
OJHBTRN = MJHBTRN_exp_unit((*(&(SJHBTRN_uro->Elem))));
break;
case 21: /* REF STRUCT(MODE176,REF MODE191)  */
TJHBTRN_ust = (NJHBTRN.data.mode21);
 /* line 62: */
if ( (TJHBTRN_ust==IAAATRN_nilustr) )
{ 
 /* line 63: */
OJHBTRN = A68_TRUE;
} 
else
{ 
UJHBTRN = MJHBTRN_exp_unit((*(&(TJHBTRN_ust->Elem))));
if ( UJHBTRN )
{ /* line 64: */
WJHBTRN = (*(&(TJHBTRN_ust->Rest))) ;
UJHBTRN = MJHBTRN_exp_unit(A_UNITE(VJHBTRN,mode21,21,WJHBTRN));
}
 /* line 65: */
OJHBTRN = UJHBTRN;
} 
break;
case 22: /* REF STRUCT(BOOL,INT,MODE176,MODE176)  */
XJHBTRN_uco = (NJHBTRN.data.mode22);
YJHBTRN = MJHBTRN_exp_unit((*(&(XJHBTRN_uco->Left))));
if ( YJHBTRN )
{YJHBTRN = MJHBTRN_exp_unit((*(&(XJHBTRN_uco->Right))));
}
 /* line 66: */
OJHBTRN = YJHBTRN;
break;
case 33: /* REF STRUCT(MODE138,MODE176)  */
ZJHBTRN_usg = (NJHBTRN.data.mode33);
 /* line 67: */
OJHBTRN = MJHBTRN_exp_unit((*(&(ZJHBTRN_usg->Char))));
break;
default: 
 /* line 68: */
OJHBTRN = A68_TRUE;
break;
} 
A_PROC_EXIT(exp_unit);
return( OJHBTRN );
} 
#undef NL

A_STATIC A68_BOOL  BKHBTRN_anonymous(A68_176  U)
{ 
A68_176  CKHBTRN;  /* united object - for case conformity */
A68_BOOL  DKHBTRN;  /* clause result */
A68_186 * EKHBTRN_uin;
A68_188 * FKHBTRN_udy;
A68_BOOL  GKHBTRN;  /* optbool result */
 /* line 71: */
 /* line 72: */
CKHBTRN = U ;
switch ( CKHBTRN.mode )
{ 
case 11: /* REF STRUCT(INT,INT)  */
 /* line 73: */
DKHBTRN = A68_TRUE;
break;
case 16: /* REF STRUCT(MODE176,MODE138)  */
EKHBTRN_uin = (CKHBTRN.data.mode16);
 /* line 74: */
DKHBTRN = A_CALLPROC(KJHBTRN_simple_unit,((*(&(EKHBTRN_uin->Unit)))),((*(&(EKHBTRN_uin->Unit))),(KJHBTRN_simple_unit).nonlocals));
break;
case 18: /* REF STRUCT(MODE176,MODE176)  */
FKHBTRN_udy = (CKHBTRN.data.mode18);
GKHBTRN = A_CALLPROC(KJHBTRN_simple_unit,((*(&(FKHBTRN_udy->Unit)))),((*(&(FKHBTRN_udy->Unit))),(KJHBTRN_simple_unit).nonlocals));
if ( GKHBTRN )
{GKHBTRN = MJHBTRN_exp_unit((*(&(FKHBTRN_udy->Index))));
}
 /* line 75: */
DKHBTRN = GKHBTRN;
break;
default: 
 /* line 76: */
DKHBTRN = A68_FALSE;
break;
} 
return( DKHBTRN );
} 
#undef NL

A_STATIC A68_BOOL  JKHBTRN_const_unit(A68_176  U)
{ 
A68_176  KKHBTRN;  /* united object - for case conformity */
A68_BOOL  LKHBTRN;  /* clause result */
A68_190 * MKHBTRN_urow;
A68_191 * NKHBTRN_ustr;
A68_BOOL  OKHBTRN;  /* optbool result */
A68_176  PKHBTRN;  /* OPERATORS - mode -> union mode */
A68_191 * QKHBTRN;  /* YIELD */
A68_203 * RKHBTRN_strg;
A_PROC_ENTRY(const_unit);
 /* line 79: */
 /* line 80: */
KKHBTRN = U ;
switch ( KKHBTRN.mode )
{ 
case 2: /* REF STRUCT(INT,INT)  */
 /* line 81: */
LKHBTRN = A68_TRUE;
break;
case 3: /* REF STRUCT(INT,MODE138)  */
 /* line 82: */
LKHBTRN = A68_TRUE;
break;
case 4: /* REF STRUCT(MODE154)  */
 /* line 83: */
LKHBTRN = A68_TRUE;
break;
case 6: /* REF STRUCT(INT)  */
 /* line 84: */
LKHBTRN = A68_TRUE;
break;
case 20: /* REF STRUCT(MODE138,MODE176)  */
MKHBTRN_urow = (KKHBTRN.data.mode20);
 /* line 85: */
LKHBTRN = JKHBTRN_const_unit((*(&(MKHBTRN_urow->Elem))));
break;
case 21: /* REF STRUCT(MODE176,REF MODE191)  */
NKHBTRN_ustr = (KKHBTRN.data.mode21);
 /* line 86: */
if ( (NKHBTRN_ustr==IAAATRN_nilustr) )
{ 
 /* line 87: */
LKHBTRN = A68_TRUE;
} 
else
{ 
OKHBTRN = JKHBTRN_const_unit((*(&(NKHBTRN_ustr->Elem))));
if ( OKHBTRN )
{ /* line 88: */
QKHBTRN = (*(&(NKHBTRN_ustr->Rest))) ;
OKHBTRN = JKHBTRN_const_unit(A_UNITE(PKHBTRN,mode21,21,QKHBTRN));
}
 /* line 89: */
LKHBTRN = OKHBTRN;
} 
break;
case 33: /* REF STRUCT(MODE138,MODE176)  */
RKHBTRN_strg = (KKHBTRN.data.mode33);
 /* line 90: */
LKHBTRN = JKHBTRN_const_unit((*(&(RKHBTRN_strg->Char))));
break;
default: 
 /* line 91: */
LKHBTRN = A68_FALSE;
break;
} 
A_PROC_EXIT(const_unit);
return( LKHBTRN );
} 
#undef NL

A_STATIC A68_BOOL  TKHBTRN_valid_input(A68_176  U)
{ 
A68_176  UKHBTRN;  /* united object - for case conformity */
A68_BOOL  VKHBTRN;  /* clause result */
A68_186 * WKHBTRN_uin;
A68_188 * XKHBTRN_udy;
A68_BOOL  YKHBTRN;  /* optbool result */
A_PROC_ENTRY(valid_input);
 /* line 94: */
 /* line 95: */
UKHBTRN = U ;
switch ( UKHBTRN.mode )
{ 
case 11: /* REF STRUCT(INT,INT)  */
 /* line 96: */
VKHBTRN = A68_TRUE;
break;
case 16: /* REF STRUCT(MODE176,MODE138)  */
WKHBTRN_uin = (UKHBTRN.data.mode16);
 /* line 97: */
VKHBTRN = TKHBTRN_valid_input((*(&(WKHBTRN_uin->Unit))));
break;
case 18: /* REF STRUCT(MODE176,MODE176)  */
XKHBTRN_udy = (UKHBTRN.data.mode18);
YKHBTRN = TKHBTRN_valid_input((*(&(XKHBTRN_udy->Unit))));
if ( YKHBTRN )
{ /* line 98: */
YKHBTRN = JKHBTRN_const_unit((*(&(XKHBTRN_udy->Index))));
}
VKHBTRN = YKHBTRN;
break;
default: 
 /* line 99: */
VKHBTRN = A68_FALSE;
break;
} 
A_PROC_EXIT(valid_input);
return( VKHBTRN );
} 
#undef NL

A_STATIC A68_VOID  BLHBTRN_make_indexes(A68_176  U, A68_INT  Size, A68_176  *ReturnedValue)
{ 
A68_176  CLHBTRN;  /* clause result */
A68_191 * DLHBTRN_ustr;
A68_INT  ELHBTRN_i;
A68_INT  FLHBTRN;  /* by part of loop */
A68_191  GLHBTRN;  /* collateral clause result */
A68_186  HLHBTRN;  /* collateral clause result */
A68_139  ILHBTRN;  /* collateral clause result */
A68_139 * JLHBTRN;  /* YIELD */
A68_138  KLHBTRN;  /* OPERATORS - mode -> union mode */
A68_186 * LLHBTRN;  /* YIELD */
A68_176  MLHBTRN;  /* OPERATORS - mode -> union mode */
A68_191 * NLHBTRN;  /* YIELD */
A68_176  OLHBTRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(make_indexes);
 /* line 102: */
 /* line 103: */
 /* line 104: */
if ( (Size<=1) )
{ 
CLHBTRN = U;
} 
else
{ 
DLHBTRN_ustr = IAAATRN_nilustr;
 /* line 105: */
 /* line 106: */
FLHBTRN = (-1);
for ( ELHBTRN_i = Size;
( FLHBTRN > 0 && ELHBTRN_i <= 1) ||
( FLHBTRN < 0 && ELHBTRN_i >= 1) ||
( FLHBTRN == 0 ) ;
ELHBTRN_i += FLHBTRN )
{ 
HLHBTRN.Unit = U;
ILHBTRN.Int = ELHBTRN_i;
ILHBTRN.Text = TTCAOST_nullid;
JLHBTRN = A_HEAP(A68_139 ) ;
(*JLHBTRN) = ILHBTRN ;
HLHBTRN.Index = A_UNITE(KLHBTRN,mode1,1,JLHBTRN);
 /* line 107: */
LLHBTRN = A_HEAP(A68_186 ) ;
(*LLHBTRN) = HLHBTRN ;
GLHBTRN.Elem = A_UNITE(MLHBTRN,mode16,16,LLHBTRN);
 /* line 108: */
GLHBTRN.Rest = DLHBTRN_ustr;
NLHBTRN = A_HEAP(A68_191 ) ;
(*NLHBTRN) = GLHBTRN ;
DLHBTRN_ustr = NLHBTRN;
}
 /* line 109: */
 /* line 110: */
CLHBTRN = A_UNITE(OLHBTRN,mode21,21,DLHBTRN_ustr);
} 
A_PROC_EXIT(make_indexes);
*ReturnedValue = (CLHBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  RLHBTRN_outer_transform(A68_261  Outer, A68_265 * Closure, A68_358  *ReturnedValue)
{ 
A68_255 * SLHBTRN_env;
A68_260  TLHBTRN;  /* OPERATORS - simple index */
A68_INT  ULHBTRN;  /* YIELD */
A68_252 * VLHBTRN_fndec;
A68_464 * WLHBTRN_lets;
A68_INT  XLHBTRN_next_name;
A68_468  AMHBTRN_new_let;   /* proc value of non-global proc */
A68_469  NMHBTRN_input_check;   /* proc value of non-global proc */
A68_470  PNHBTRN_unit_check;   /* proc value of non-global proc */
A68_400  ZXHBTRN_fndec_trans;   /* proc value of non-global proc */
A68_476  ZAIBTRN;  /* collateral clause result */
A68_405  ABIBTRN;  /* OPERATORS - mode -> union mode */
A68_364  BBIBTRN;  /* procedure value */
A68_405  CBIBTRN;  /* OPERATORS - mode -> union mode */
A68_361  DBIBTRN;  /* procedure value */
A68_405  EBIBTRN;  /* OPERATORS - mode -> union mode */
A68_370  FBIBTRN;  /* procedure value */
A68_405  GBIBTRN;  /* OPERATORS - mode -> union mode */
A68_400  HBIBTRN;  /* YIELD */
A68_404  IBIBTRN;  /* OPERATORS - istruct -> vector */
A68_360 * JBIBTRN_newtprocs;
A68_358  KBIBTRN;  /* clause result */
A68_401  LBIBTRN;  /* CALL */
A68_358  MBIBTRN;  /* avoid structure result */
A68_358  NBIBTRN;  /* collateral clause result */
A_PROC_ENTRY(outer_transform);
 /* line 113: */
 /* line 114: */
{ 
 /* line 115: */
 /* line 116: */
if ( (Outer.Sort==VKAATRN_outerfn) )
{ 
SLHBTRN_env = Outer.Environ;
 /* line 117: */
TLHBTRN = (*(&(SLHBTRN_env->Fns))) ;
ULHBTRN = 1 ;
VLHBTRN_fndec = (*(&A_VINDEX(TLHBTRN,ULHBTRN)));
 /* line 118: */
 /* line 119: */
 /* line 121: */
A_CLOSURE( AMHBTRN_new_let, BMHBTRN_new_let, CMHBTRN_new_let );
(( CMHBTRN_new_let * ) ( AMHBTRN_new_let.nonlocals )) -> XLHBTRN_next_name = (&XLHBTRN_next_name);
(( CMHBTRN_new_let * ) ( AMHBTRN_new_let.nonlocals )) -> WLHBTRN_lets = (&WLHBTRN_lets);
 /* line 129: */
A_CLOSURE( NMHBTRN_input_check, OMHBTRN_input_check, PMHBTRN_input_check );
(( PMHBTRN_input_check * ) ( NMHBTRN_input_check.nonlocals )) -> AMHBTRN_new_let = AMHBTRN_new_let;
 /* line 177: */
A_CLOSURE( PNHBTRN_unit_check, QNHBTRN_unit_check, RNHBTRN_unit_check );
(( RNHBTRN_unit_check * ) ( PNHBTRN_unit_check.nonlocals )) -> PNHBTRN_unit_check = PNHBTRN_unit_check;
(( RNHBTRN_unit_check * ) ( PNHBTRN_unit_check.nonlocals )) -> AMHBTRN_new_let = AMHBTRN_new_let;
(( RNHBTRN_unit_check * ) ( PNHBTRN_unit_check.nonlocals )) -> VLHBTRN_fndec = VLHBTRN_fndec;
(( RNHBTRN_unit_check * ) ( PNHBTRN_unit_check.nonlocals )) -> SLHBTRN_env = SLHBTRN_env;
(( RNHBTRN_unit_check * ) ( PNHBTRN_unit_check.nonlocals )) -> Closure = Closure;
(( RNHBTRN_unit_check * ) ( PNHBTRN_unit_check.nonlocals )) -> NMHBTRN_input_check = NMHBTRN_input_check;
(( RNHBTRN_unit_check * ) ( PNHBTRN_unit_check.nonlocals )) -> WLHBTRN_lets = (&WLHBTRN_lets);
 /* line 374: */
A_CLOSURE( ZXHBTRN_fndec_trans, AYHBTRN_fndec_trans, BYHBTRN_fndec_trans );
(( BYHBTRN_fndec_trans * ) ( ZXHBTRN_fndec_trans.nonlocals )) -> WLHBTRN_lets = (&WLHBTRN_lets);
(( BYHBTRN_fndec_trans * ) ( ZXHBTRN_fndec_trans.nonlocals )) -> XLHBTRN_next_name = (&XLHBTRN_next_name);
(( BYHBTRN_fndec_trans * ) ( ZXHBTRN_fndec_trans.nonlocals )) -> PNHBTRN_unit_check = PNHBTRN_unit_check;
 /* line 453: */
 /* line 454: */
BBIBTRN.fn.fn_global = IWLATRN_null_formula;
BBIBTRN.nonlocals = A68_NIL;
ZAIBTRN.data[0] = A_UNITE(ABIBTRN,mode4,4,BBIBTRN);
 /* line 455: */
DBIBTRN.fn.fn_global = DWLATRN_null_attr;
DBIBTRN.nonlocals = A68_NIL;
ZAIBTRN.data[1] = A_UNITE(CBIBTRN,mode1,1,DBIBTRN);
 /* line 456: */
FBIBTRN.fn.fn_global = NWLATRN_null_type;
FBIBTRN.nonlocals = A68_NIL;
ZAIBTRN.data[2] = A_UNITE(EBIBTRN,mode10,10,FBIBTRN);
HBIBTRN = ZXHBTRN_fndec_trans ;
ZAIBTRN.data[3] = A_UNITE(GBIBTRN,mode40,40,HBIBTRN);
JBIBTRN_newtprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HISVEC(IBIBTRN,ZAIBTRN,4,A68_405 ));
 /* line 458: */
 /* line 460: */
LBIBTRN = (*(&(AWLATRN_nulltprocs->Outer))) ;
A_CALLPROC(LBIBTRN,(Outer, JBIBTRN_newtprocs, &MBIBTRN),(Outer, JBIBTRN_newtprocs, &MBIBTRN,(LBIBTRN).nonlocals));
KBIBTRN = MBIBTRN;
} 
else
{ 
NBIBTRN.O = Outer;
 /* line 461: */
 /* line 462: */
NBIBTRN.C = A68_FALSE;
KBIBTRN = NBIBTRN;
} 
} 
A_PROC_EXIT(outer_transform);
*ReturnedValue = (KBIBTRN);
return;
} 
#undef NL

A68_VOID  QBIBTRN_transform_flatten_unit(A68_265 * Closure, A68_108  Msg, A68_359  *ReturnedValue)
{ 
A68_401  UBIBTRN_outer;   /* proc value of non-global proc */
A68_405  ZBIBTRN;  /* OPERATORS - mode -> union mode */
A68_401  ACIBTRN;  /* YIELD */
A68_404  BCIBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_360 * CCIBTRN_newtprocs;
A68_359  DCIBTRN;  /* clause result */
A68_402  ECIBTRN;  /* CALL */
A68_359  FCIBTRN;  /* avoid structure result */
A_PROC_ENTRY(transform_flatten_unit);
 /* line 466: */
 /* line 467: */
{ 
A_CLOSURE( UBIBTRN_outer, VBIBTRN_outer, WBIBTRN_outer );
(( WBIBTRN_outer * ) ( UBIBTRN_outer.nonlocals )) -> Closure = Closure;
 /* line 470: */
ACIBTRN = UBIBTRN_outer ;
CCIBTRN_newtprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HVEC(BCIBTRN,A_UNITE(ZBIBTRN,mode41,41,ACIBTRN),A68_405 ));
 /* line 472: */
 /* line 473: */
ECIBTRN = (*(&(AWLATRN_nulltprocs->Closure))) ;
A_CALLPROC(ECIBTRN,(Closure, CCIBTRN_newtprocs, Msg, &FCIBTRN),(Closure, CCIBTRN_newtprocs, Msg, &FCIBTRN,(ECIBTRN).nonlocals));
DCIBTRN = FCIBTRN;
} 
A_PROC_EXIT(transform_flatten_unit);
*ReturnedValue = (DCIBTRN);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 4: */
void EJHBTRN(void)   /* initialise DECS flatten_unit */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/flatten_unit.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/closureprocs.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","./mfiles/transformprocs.m","./mfiles/modeprocs.m","./mfiles/assmodes.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_465  HKHBTRN;  /* procedure value */
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
A_config.source_file = "/import/hazel/home/export/model/ella/transform/assoc/./a68files/flatten_unit.a68";
A_config.translation_time = "Tue Apr  4 10:07:44 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "DJHBTRN (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:07:44 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS flatten_unit);
UEAALIB_a68config(LGAALIB_configinfo, IJHBTRN);
 /* line 46: */
 /* line 47: */
 /* line 49: */
 /* line 51: */
 /* line 70: */
HKHBTRN.fn.fn_global = BKHBTRN_anonymous;
HKHBTRN.nonlocals = A68_NIL;
KJHBTRN_simple_unit = HKHBTRN;
 /* line 78: */
 /* line 93: */
 /* line 101: */
 /* line 112: */
 /* line 465: */
 /* line 475: */
 /* line 476: */
 /* line 477: */
/*SKIP*/;
A_PROC_EXIT(DECS flatten_unit);
} 
#undef NL
/* end of translation of ./a68files/flatten_unit.a68 */
