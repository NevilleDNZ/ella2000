
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
/* UNAME:MBQBTRN */
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

A_PROCEDURE(A68_VOID ,A68t474,(struct A68t255 *,struct A68t265 *,struct A68t475 ,struct A68t108 ,struct A68t461 *),(struct A68t255 *,struct A68t265 *,struct A68t475 ,struct A68t108 ,struct A68t461 *,void *));
typedef struct A68t474  A68_474 ;    /* PROC(REF MODE255,REF MODE265,MODE475,MODE108) MODE461 */

A_PROCEDURE(A68_BOOL ,A68t475,(A68_INT ),(A68_INT ,void *));
typedef struct A68t475  A68_475 ;    /* PROC(INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t476,(struct A68t407 ),(struct A68t407 ,void *));
typedef struct A68t476  A68_476 ;    /* PROC(MODE407) VOID */

A_PROCEDURE(A68_VOID ,A68t477,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t477  A68_477 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,57,A68t478);
typedef struct A68t478  A68_478 ;    /* STRUCT 57 CHAR */
#define A68_479  A68_VC 
#define A68t479 A68t26            /* FLEX VECTOR [] CHAR */
#define A68_480  A68_46 
#define A68t480 A68t46            /* FLEX VECTOR [] MODE479 */

A_PROCEDURE(A68_VOID ,A68t481,(struct A68t265 *,struct A68t108 ,struct A68t359 *),(struct A68t265 *,struct A68t108 ,struct A68t359 *,void *));
typedef struct A68t481  A68_481 ;    /* PROC(REF MODE265,MODE108) MODE359 */
A_VECTOR(struct A68t32 ,A68t482);
typedef struct A68t482  A68_482 ;    /* VECTOR [] REF MODE32 */

A_PROCEDURE(A68_VOID ,A68t483,(A68_BOOL ,struct A68t482 *),(A68_BOOL ,struct A68t482 *,void *));
typedef struct A68t483  A68_483 ;    /* PROC(BOOL) MODE482 */

A_PROCEDURE(struct A68t265 **,A68t484,(void),(void *));
typedef struct A68t484  A68_484 ;    /* PROC REF REF MODE265 */

A_PROCEDURE(A68_VOID ,A68t485,(struct A68t461 *,A68_INT ),(struct A68t461 *,A68_INT ,void *));
typedef struct A68t485  A68_485 ;    /* PROC(REF MODE461,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t486,(A68_BOOL ,struct A68t258 *),(A68_BOOL ,struct A68t258 *,void *));
typedef struct A68t486  A68_486 ;    /* PROC(BOOL) MODE258 */

A_PROCEDURE(A68_VOID ,A68t487,(A68_BOOL ,struct A68t168 *),(A68_BOOL ,struct A68t168 *,void *));
typedef struct A68t487  A68_487 ;    /* PROC(BOOL) MODE168 */
A_ISTRUCT(A68_CHAR ,5,A68t488);
typedef struct A68t488  A68_488 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t489);
typedef struct A68t489  A68_489 ;    /* STRUCT 2 MODE52 */

A_PROCEDURE(A68_VOID ,A68t490,(struct A68t461 *),(struct A68t461 *,void *));
typedef struct A68t490  A68_490 ;    /* PROC(REF MODE461) VOID */

A_PROCEDURE(A68_VOID ,A68t491,(struct A68t176 ,A68_INT ,A68_INT ,struct A68t176 ,struct A68t336 *),(struct A68t176 ,A68_INT ,A68_INT ,struct A68t176 ,struct A68t336 *,void *));
typedef struct A68t491  A68_491 ;    /* PROC(MODE176,INT,INT,MODE176) MODE336 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from environprocs --- */
extern A68_VOID  AJMBTRN_newfns(struct A68t461 *,A68_260 *);
extern A68_VOID  AKMBTRN_makenewtypes(struct A68t461 *,A68_INT ,A68_258 *);
extern A68_VOID  FLMBTRN_update_bodies(struct A68t255 *,struct A68t265 *,struct A68t475 ,struct A68t108 ,A68_461 *);
/* --- End of imports from environprocs --- */


/* --- Imports from closureprocs --- */
extern A68_INT  ZKCATRN_maxclosureno(struct A68t265 *);
extern A68_262 * ELCATRN_find_outers(A68_INT ,struct A68t265 *,struct A68t108 );
extern A68_INT  ENCATRN_reserve_next_closureno(struct A68t265 *);
extern A68_262 ** KNCATRN_insert_outer(struct A68t261 ,struct A68t262 **,struct A68t265 *,struct A68t108 );
extern A68_265 * DPCATRN_copy_closure(struct A68t265 *,struct A68t108 );
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
extern A68_VOID  SOAAOST_flt_if_interrupted(struct A68t108 );
/* --- End of imports from osinterface --- */


/* --- Imports from transformprocs --- */
extern A68_360 * THJATRN_make_newtprocs(struct A68t360 *,struct A68t404 );
extern A68_VOID  MLJATRN_discard_tprocs(struct A68t360 *);
extern A68_360 * AWLATRN_nulltprocs;
/* --- End of imports from transformprocs --- */


/* --- Imports from modeprocs --- */
/* --- End of imports from modeprocs --- */


/* --- Imports from assmodes --- */
extern A68_VC  TTCAOST_nullid;
extern A68_157 * GAAATRN_niltstr;
extern A68_191 * IAAATRN_nilustr;
extern A68_262 * HBAATRN_nilouters;
extern A68_256  MCAATRN_nullattrdecs;
extern A68_257  SCAATRN_nullintdecs;
extern A68_259  EDAATRN_nullconstdecs;
extern A68_260  KDAATRN_nullfndecs;
extern A68_155 * IFAATRN_maketname(A68_INT );
extern A68_163 * XFAATRN_maketypetag(struct A68t154 );
extern A68_159 * HGAATRN_makectype(struct A68t154 );
extern A68_174 * MGAATRN_makecquery(struct A68t154 );
extern A68_134  ZHAATRN_attrnull;
extern A68_162  DIAATRN_tnull;
extern A68_204  FIAATRN_unull;
#define TKAATRN_outertype 3
#define VKAATRN_outerfn 5
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
extern void KGMBTRN(void);   /* environprocs */
extern void SKCATRN(void);   /* closureprocs */
extern void PCAAOST(void);   /* osinterface */
extern void IHJATRN(void);   /* transformprocs */
extern void HNMATRN(void);   /* modeprocs */
extern void BAAATRN(void);   /* assmodes */
extern void JFAAOSI(void);   /* messageproc */
extern void JSCAOST(void);   /* basics */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_478   QBQBTRN = {"$Id: associated.a68,v 34.2 1995/03/29 13:02:45 ella Exp $"}; 
A_GISVEC(A68_VC ,RBQBTRN,QBQBTRN,57)
A68_46  ECQBTRN_associated_options;
static A68_32  KCQBTRN_nullaltmap;
static A68_488   QGQBTRN = {"atag_"}; 
A_GISVEC(A68_VC ,RGQBTRN,QGQBTRN,5)
typedef struct   /* env of non-global proc */
{
A68_INT  TCQBTRN_closuretop;
A_PAD_INT(PAD_154)
} ZCQBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_BOOL * SCQBTRN_closure_changed;
A68_265 ** RCQBTRN_thisclosure;
A68_108  Msg;
A68_262 ** UCQBTRN_closureptr;
} IDQBTRN_newclosure;
typedef struct   /* env of non-global proc */
{
A68_INT  TCQBTRN_closuretop;
A_PAD_INT(PAD_155)
A68_482  CDQBTRN_altmaps;
} NDQBTRN_is_modified;
typedef struct   /* env of non-global proc */
{
A68_484  GDQBTRN_newclosure;
A68_482  CDQBTRN_altmaps;
A68_265 ** RCQBTRN_thisclosure;
A68_108  Msg;
} UDQBTRN_transform_outertype;
typedef struct   /* env of non-global proc */
{
A68_482  CDQBTRN_altmaps;
} PHQBTRN_transform_outerfn;
typedef struct   /* env of non-global proc */
{
A68_265 ** RCQBTRN_thisclosure;
A68_475  LDQBTRN_is_modified;
A68_108  Msg;
A68_485  SDQBTRN_transform_outertype;
A68_490  NHQBTRN_transform_outerfn;
} ELQBTRN_outer_associated;
typedef struct   /* env of non-global proc */
{
A68_INT  FEQBTRN_ntypes;
A_PAD_INT(PAD_156)
} KEQBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_168 * WDQBTRN_assoc_alts;
} BFQBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_168 * WDQBTRN_assoc_alts;
} JFQBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_258  QHQBTRN_typedecs;
A68_482  CDQBTRN_altmaps;
} XHQBTRN_convert_assoc;
typedef struct   /* env of non-global proc */
{
A68_491  VHQBTRN_convert_assoc;
A68_258  QHQBTRN_typedecs;
A68_482  CDQBTRN_altmaps;
} MJQBTRN_unit_associated;

A_STATIC A68_VOID  TBQBTRN_generator(A68_BOOL  SBQBTRN_anonymous, A68_46  *ReturnedValue);

A_STATIC A68_VOID  XBQBTRN_generator(A68_BOOL  WBQBTRN_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  HCQBTRN_generator(A68_BOOL  GCQBTRN_anonymous, A68_32  *ReturnedValue);

A68_VOID  OCQBTRN_transform_associated(A68_265 * Outerclosure, A68_108  Msg, A68_359  *ReturnedValue);

A_STATIC A68_VOID  YCQBTRN_generator(A68_BOOL  WCQBTRN_anonymous, A68_482  *ReturnedValue, void *NonLocals);

A_STATIC A68_265 ** HDQBTRN_newclosure(void *NonLocals);

A_STATIC A68_BOOL  MDQBTRN_is_modified(A68_INT  Clno, void *NonLocals);

A_STATIC A68_VOID  TDQBTRN_transform_outertype(A68_461 * Ec, A68_INT  Closureno, void *NonLocals);

A_STATIC A68_VOID  JEQBTRN_generator(A68_BOOL  HEQBTRN_anonymous, A68_258  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  AFQBTRN_generator(A68_BOOL  YEQBTRN_anonymous, A68_168  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IFQBTRN_generator(A68_BOOL  GFQBTRN_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OHQBTRN_transform_outerfn(A68_461 * Ec, void *NonLocals);

A_STATIC A68_VOID  WHQBTRN_convert_assoc(A68_176  U, A68_INT  Typeno, A68_INT  Altno, A68_176  Oldelem, A68_336  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  LJQBTRN_unit_associated(A68_176  U, A68_360 * Tprocs, A68_336  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DLQBTRN_outer_associated(A68_261  Outer, A68_360 * Outertprocs, A68_358  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JEQBTRN_generator(A68_BOOL  HEQBTRN_anonymous, A68_258  *ReturnedValue, void *NonLocals)
#define NL(x) (((KEQBTRN_generator *)NonLocals)->x)
{ 
A68_258  LEQBTRN;  /* clause result */
A68_258  MEQBTRN;  /* OPERATORS - dynamic generator */
{ 
MEQBTRN.upb = NL(FEQBTRN_ntypes) ;
( HEQBTRN_anonymous? A_VLOC(A68_169 *,MEQBTRN): A_VHEAP(A68_169 *,MEQBTRN) );
LEQBTRN = MEQBTRN;
} 
*ReturnedValue = (LEQBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  AFQBTRN_generator(A68_BOOL  YEQBTRN_anonymous, A68_168  *ReturnedValue, void *NonLocals)
#define NL(x) (((BFQBTRN_generator *)NonLocals)->x)
{ 
A68_168  CFQBTRN;  /* clause result */
A68_168  DFQBTRN;  /* OPERATORS - dynamic generator */
{ 
DFQBTRN.upb = (*NL(WDQBTRN_assoc_alts)).upb ;
( YEQBTRN_anonymous? A_VLOC(A68_165 ,DFQBTRN): A_VHEAP(A68_165 ,DFQBTRN) );
CFQBTRN = DFQBTRN;
} 
*ReturnedValue = (CFQBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  IFQBTRN_generator(A68_BOOL  GFQBTRN_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((JFQBTRN_generator *)NonLocals)->x)
{ 
A68_32  KFQBTRN;  /* clause result */
A68_32  LFQBTRN;  /* OPERATORS - dynamic generator */
{ 
LFQBTRN.upb = (*NL(WDQBTRN_assoc_alts)).upb ;
( GFQBTRN_anonymous? A_VLOC(A68_INT ,LFQBTRN): A_VHEAP(A68_INT ,LFQBTRN) );
KFQBTRN = LFQBTRN;
} 
*ReturnedValue = (KFQBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  WHQBTRN_convert_assoc(A68_176  U, A68_INT  Typeno, A68_INT  Altno, A68_176  Oldelem, A68_336  *ReturnedValue, void *NonLocals)
#define NL(x) (((XHQBTRN_convert_assoc *)NonLocals)->x)
{ 
A68_169 * YHQBTRN_dec;
A68_INT  ZHQBTRN;  /* YIELD */
A68_32  AIQBTRN_map;
A68_INT  BIQBTRN_index;
A68_176  CIQBTRN;  /* united object - for case conformity */
A68_BOOL  DIQBTRN;  /* clause result */
A68_BOOL  EIQBTRN_is_const;
A68_INT  FIQBTRN_newtypeno;
A68_167  GIQBTRN;  /* united object - for case conformity */
A68_163 * HIQBTRN_ttg;
A68_154  IIQBTRN;  /* united object - for case conformity */
A68_157 * JIQBTRN_str;
A68_154  KIQBTRN;  /* united object - for case conformity */
A68_155 * LIQBTRN_strtn;
A68_157 * MIQBTRN;  /* clause result */
A68_157 * NIQBTRN_tstr;
A68_191  OIQBTRN;  /* collateral clause result */
A68_171  PIQBTRN;  /* collateral clause result */
A68_171 * QIQBTRN;  /* YIELD */
A68_176  RIQBTRN;  /* OPERATORS - mode -> union mode */
A68_191 * TIQBTRN;  /* YIELD */
A68_191 * SIQBTRN_newstr;
A68_191 ** UIQBTRN_utail;
A68_INT  VIQBTRN_cnt;
A68_176  WIQBTRN_newelem;
A68_176  XIQBTRN;  /* clause result */
A68_176  YIQBTRN;  /* OPERATORS - mode -> union mode */
A68_159 * ZIQBTRN;  /* YIELD */
A68_176  AJQBTRN;  /* OPERATORS - mode -> union mode */
A68_174 * BJQBTRN;  /* YIELD */
A68_191  CJQBTRN;  /* collateral clause result */
A68_191 * DJQBTRN;  /* YIELD */
A68_336  EJQBTRN;  /* collateral clause result */
A68_176  FJQBTRN;  /* OPERATORS - mode -> union mode */
A68_336  GJQBTRN;  /* clause result */
A68_336  HJQBTRN;  /* collateral clause result */
A_PROC_ENTRY(convert_assoc);
 /* line 187: */
 /* line 188: */
{ 
YHQBTRN_dec = (*(&A_VINDEX(NL(QHQBTRN_typedecs),Typeno)));
 /* line 189: */
ZHQBTRN = (*(&((*(&(YHQBTRN_dec->Usage)))->Closureno))) ;
AIQBTRN_map = (*(&A_VINDEX(NL(CDQBTRN_altmaps),ZHQBTRN)));
 /* line 191: */
 /* line 192: */
 /* line 193: */
if ( (AIQBTRN_map.upb>0) )
{ 
BIQBTRN_index = (*(&A_VINDEX(AIQBTRN_map,Altno)));
 /* line 194: */
CIQBTRN = Oldelem ;
switch ( CIQBTRN.mode )
{ 
case 7: /* REF STRUCT(MODE154)  */
DIQBTRN = A68_TRUE;
break;
default: 
DIQBTRN = A68_FALSE;
break;
} 
EIQBTRN_is_const = DIQBTRN;
 /* line 195: */
FIQBTRN_newtypeno = Typeno;
 /* line 196: */
 /* line 197: */
GIQBTRN = (*(&(YHQBTRN_dec->Body))) ;
switch ( GIQBTRN.mode )
{ 
case 3: /* REF STRUCT(MODE154)  */
HIQBTRN_ttg = (GIQBTRN.data.mode3);
 /* line 198: */
 /* line 199: */
IIQBTRN = (*(&(HIQBTRN_ttg->Tag))) ;
switch ( IIQBTRN.mode )
{ 
case 3: /* REF STRUCT(MODE154,REF MODE157)  */
JIQBTRN_str = (IIQBTRN.data.mode3);
 /* line 200: */
{ 
 /* line 201: */
KIQBTRN = (*(&(JIQBTRN_str->Elem))) ;
switch ( KIQBTRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
LIQBTRN_strtn = (KIQBTRN.data.mode1);
 /* line 202: */
 /* line 203: */
 /* line 204: */
FIQBTRN_newtypeno = (*(&(LIQBTRN_strtn->Typeno)));
break;
default: 
/*SKIP*/;
break;
} 
 /* line 205: */
 /* line 206: */
 /* line 207: */
 /* line 208: */
MIQBTRN = (*(&(JIQBTRN_str->Rest)));
} 
break;
default: 
 /* line 209: */
 /* line 210: */
MIQBTRN = GAAATRN_niltstr;
break;
} 
break;
default: 
MIQBTRN = GAAATRN_niltstr;
break;
} 
NIQBTRN_tstr = MIQBTRN;
 /* line 211: */
 /* line 212: */
PIQBTRN.Typeno = FIQBTRN_newtypeno;
PIQBTRN.Primno = Altno;
 /* line 213: */
QIQBTRN = A_HEAP(A68_171 ) ;
(*QIQBTRN) = PIQBTRN ;
OIQBTRN.Elem = A_UNITE(RIQBTRN,mode2,2,QIQBTRN);
OIQBTRN.Rest = IAAATRN_nilustr;
TIQBTRN = A_HEAP(A68_191 ) ;
(*TIQBTRN) = OIQBTRN ;
SIQBTRN_newstr = TIQBTRN;
 /* line 214: */
UIQBTRN_utail = (&(SIQBTRN_newstr->Rest));
 /* line 215: */
VIQBTRN_cnt = 1;
 /* line 216: */
 /* line 218: */
for ( ;; )
{ 
 /* line 219: */
if ( !((NIQBTRN_tstr!=GAAATRN_niltstr)) ) break;
 /* line 220: */
 /* line 221: */
if ( ((VIQBTRN_cnt+=1)==BIQBTRN_index) )
{ 
 /* line 222: */
XIQBTRN = Oldelem;
} 
else
{ 
 /* line 223: */
if ( EIQBTRN_is_const )
{ 
 /* line 224: */
ZIQBTRN = HGAATRN_makectype((*(&(NIQBTRN_tstr->Elem)))) ;
XIQBTRN = A_UNITE(YIQBTRN,mode7,7,ZIQBTRN);
} 
else
{ 
BJQBTRN = MGAATRN_makecquery((*(&(NIQBTRN_tstr->Elem)))) ;
XIQBTRN = A_UNITE(AJQBTRN,mode4,4,BJQBTRN);
} 
} 
WIQBTRN_newelem = XIQBTRN;
 /* line 225: */
CJQBTRN.Elem = WIQBTRN_newelem;
CJQBTRN.Rest = IAAATRN_nilustr;
DJQBTRN = A_HEAP(A68_191 ) ;
(*DJQBTRN) = CJQBTRN ;
(*UIQBTRN_utail) = DJQBTRN;
 /* line 226: */
UIQBTRN_utail = (&((*UIQBTRN_utail)->Rest));
 /* line 227: */
 /* line 228: */
NIQBTRN_tstr = (*(&(NIQBTRN_tstr->Rest)));
}
 /* line 229: */
EJQBTRN.U = A_UNITE(FJQBTRN,mode21,21,SIQBTRN_newstr);
 /* line 230: */
 /* line 231: */
EJQBTRN.C = A68_TRUE;
GJQBTRN = EJQBTRN;
} 
else
{ 
HJQBTRN.U = U;
 /* line 232: */
 /* line 233: */
HJQBTRN.C = A68_FALSE;
GJQBTRN = HJQBTRN;
} 
} 
A_PROC_EXIT(convert_assoc);
*ReturnedValue = (GJQBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  LJQBTRN_unit_associated(A68_176  U, A68_360 * Tprocs, A68_336  *ReturnedValue, void *NonLocals)
#define NL(x) (((MJQBTRN_unit_associated *)NonLocals)->x)
{ 
A68_176  NJQBTRN;  /* united object - for case conformity */
A68_183 * OJQBTRN_ua;
A68_336  PJQBTRN;  /* clause result */
A68_379  QJQBTRN;  /* CALL */
A68_336  RJQBTRN;  /* avoid structure result */
A68_336  SJQBTRN;  /* avoid structure result */
A68_184 * TJQBTRN_ue;
A68_INT  UJQBTRN;  /* YIELD */
A68_169 * VJQBTRN_uetd;
A68_INT  WJQBTRN;  /* YIELD */
A68_32  XJQBTRN_uemap;
A68_379  YJQBTRN;  /* CALL */
A68_336  ZJQBTRN;  /* avoid structure result */
A68_336  AKQBTRN_ueuc;
A68_336  BKQBTRN;  /* collateral clause result */
A68_186  CKQBTRN;  /* collateral clause result */
A68_139  DKQBTRN;  /* collateral clause result */
A68_INT  EKQBTRN;  /* YIELD */
A68_139 * FKQBTRN;  /* YIELD */
A68_138  GKQBTRN;  /* OPERATORS - mode -> union mode */
A68_186 * HKQBTRN;  /* YIELD */
A68_176  IKQBTRN;  /* OPERATORS - mode -> union mode */
A68_171 * JKQBTRN_cpr;
A68_176  KKQBTRN;  /* OPERATORS - mode -> union mode */
A68_336  LKQBTRN;  /* avoid structure result */
A68_379  MKQBTRN;  /* CALL */
A68_336  NKQBTRN;  /* avoid structure result */
A_PROC_ENTRY(unit_associated);
 /* line 236: */
 /* line 237: */
NJQBTRN = U ;
switch ( NJQBTRN.mode )
{ 
case 13: /* REF STRUCT(INT,INT,MODE176)  */
OJQBTRN_ua = (NJQBTRN.data.mode13);
 /* line 238: */
 /* line 239: */
 /* line 240: */
QJQBTRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(QJQBTRN,((*(&(OJQBTRN_ua->Assoc))), Tprocs, &RJQBTRN),((*(&(OJQBTRN_ua->Assoc))), Tprocs, &RJQBTRN,(QJQBTRN).nonlocals));
A_CALLPROC(NL(VHQBTRN_convert_assoc),(U, (*(&(OJQBTRN_ua->Typeno))), (*(&(OJQBTRN_ua->Altno))), RJQBTRN.U, &SJQBTRN),(U, (*(&(OJQBTRN_ua->Typeno))), (*(&(OJQBTRN_ua->Altno))), RJQBTRN.U, &SJQBTRN,(NL(VHQBTRN_convert_assoc)).nonlocals));
PJQBTRN = SJQBTRN;
break;
case 14: /* REF STRUCT(MODE176,INT,INT)  */
TJQBTRN_ue = (NJQBTRN.data.mode14);
 /* line 241: */
{ 
UJQBTRN = (*(&(TJQBTRN_ue->Typeno))) ;
VJQBTRN_uetd = (*(&A_VINDEX(NL(QHQBTRN_typedecs),UJQBTRN)));
 /* line 242: */
WJQBTRN = (*(&((*(&(VJQBTRN_uetd->Usage)))->Closureno))) ;
XJQBTRN_uemap = (*(&A_VINDEX(NL(CDQBTRN_altmaps),WJQBTRN)));
 /* line 243: */
YJQBTRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(YJQBTRN,((*(&(TJQBTRN_ue->Extract))), Tprocs, &ZJQBTRN),((*(&(TJQBTRN_ue->Extract))), Tprocs, &ZJQBTRN,(YJQBTRN).nonlocals));
AKQBTRN_ueuc = ZJQBTRN;
 /* line 245: */
 /* line 246: */
CKQBTRN.Unit = AKQBTRN_ueuc.U;
EKQBTRN = (*(&(TJQBTRN_ue->Altno))) ;
DKQBTRN.Int = (*(&A_VINDEX(XJQBTRN_uemap,EKQBTRN)));
DKQBTRN.Text = TTCAOST_nullid;
FKQBTRN = A_HEAP(A68_139 ) ;
(*FKQBTRN) = DKQBTRN ;
CKQBTRN.Index = A_UNITE(GKQBTRN,mode1,1,FKQBTRN);
 /* line 247: */
HKQBTRN = A_HEAP(A68_186 ) ;
(*HKQBTRN) = CKQBTRN ;
BKQBTRN.U = A_UNITE(IKQBTRN,mode16,16,HKQBTRN);
 /* line 248: */
 /* line 249: */
BKQBTRN.C = A68_TRUE;
PJQBTRN = BKQBTRN;
} 
break;
case 2: /* REF STRUCT(INT,INT)  */
JKQBTRN_cpr = (NJQBTRN.data.mode2);
 /* line 250: */
 /* line 251: */
A_CALLPROC(NL(VHQBTRN_convert_assoc),(U, (*(&(JKQBTRN_cpr->Typeno))), (*(&(JKQBTRN_cpr->Primno))), A_UNITE(KKQBTRN,mode34,34,(&FIAATRN_unull)), &LKQBTRN),(U, (*(&(JKQBTRN_cpr->Typeno))), (*(&(JKQBTRN_cpr->Primno))), A_UNITE(KKQBTRN,mode34,34,(&FIAATRN_unull)), &LKQBTRN,(NL(VHQBTRN_convert_assoc)).nonlocals));
PJQBTRN = LKQBTRN;
break;
default: 
 /* line 252: */
MKQBTRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(MKQBTRN,(U, Tprocs, &NKQBTRN),(U, Tprocs, &NKQBTRN,(MKQBTRN).nonlocals));
PJQBTRN = NKQBTRN;
break;
} 
A_PROC_EXIT(unit_associated);
*ReturnedValue = (PJQBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  XBQBTRN_generator(A68_BOOL  WBQBTRN_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  YBQBTRN;  /* clause result */
A68_VC  ZBQBTRN;  /* OPERATORS - dynamic generator */
{ 
ZBQBTRN.upb = 0 ;
( WBQBTRN_anonymous? A_VLOC(A68_CHAR ,ZBQBTRN): A_VHEAP(A68_CHAR ,ZBQBTRN) );
YBQBTRN = ZBQBTRN;
} 
*ReturnedValue = (YBQBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  YCQBTRN_generator(A68_BOOL  WCQBTRN_anonymous, A68_482  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZCQBTRN_generator *)NonLocals)->x)
{ 
A68_482  ADQBTRN;  /* clause result */
A68_482  BDQBTRN;  /* OPERATORS - dynamic generator */
{ 
BDQBTRN.upb = NL(TCQBTRN_closuretop) ;
( WCQBTRN_anonymous? A_VLOC(A68_32 ,BDQBTRN): A_VHEAP(A68_32 ,BDQBTRN) );
ADQBTRN = BDQBTRN;
} 
*ReturnedValue = (ADQBTRN);
return;
} 
#undef NL

A_STATIC A68_265 ** HDQBTRN_newclosure(void *NonLocals)
#define NL(x) (((IDQBTRN_newclosure *)NonLocals)->x)
{ 
A68_265 ** JDQBTRN;  /* clause result */
A_PROC_ENTRY(newclosure);
{ 
 /* line 95: */
if ( !(*NL(SCQBTRN_closure_changed)) )
{ 
(*NL(SCQBTRN_closure_changed)) = A68_TRUE;
 /* line 96: */
(*NL(RCQBTRN_thisclosure)) = DPCATRN_copy_closure((*NL(RCQBTRN_thisclosure)), NL(Msg));
 /* line 97: */
 /* line 98: */
 /* line 99: */
(*NL(UCQBTRN_closureptr)) = ELCATRN_find_outers((*(&((&((*NL(UCQBTRN_closureptr))->Outer))->Closureno))), (*NL(RCQBTRN_thisclosure)), NL(Msg));
} 
 /* line 100: */
 /* line 101: */
JDQBTRN = NL(RCQBTRN_thisclosure);
} 
A_PROC_EXIT(newclosure);
return( JDQBTRN );
} 
#undef NL

A_STATIC A68_BOOL  MDQBTRN_is_modified(A68_INT  Clno, void *NonLocals)
#define NL(x) (((NDQBTRN_is_modified *)NonLocals)->x)
{ 
A68_BOOL  ODQBTRN;  /* optbool result */
A68_BOOL  PDQBTRN;  /* clause result */
A_PROC_ENTRY(is_modified);
 /* line 104: */
ODQBTRN = (Clno<=NL(TCQBTRN_closuretop));
if ( ODQBTRN )
{ODQBTRN = ((*(&A_VINDEX(NL(CDQBTRN_altmaps),Clno))).upb>0);
}
PDQBTRN = ODQBTRN;
A_PROC_EXIT(is_modified);
return( PDQBTRN );
} 
#undef NL

A_STATIC A68_VOID  TDQBTRN_transform_outertype(A68_461 * Ec, A68_INT  Closureno, void *NonLocals)
#define NL(x) (((UDQBTRN_transform_outertype *)NonLocals)->x)
{ 
A68_BOOL  VDQBTRN_has_assoc;
A68_168  WDQBTRN_assoc_alts;
A68_258  XDQBTRN;  /* OPERATORS - simple index */
A68_INT  YDQBTRN;  /* YIELD */
A68_167  ZDQBTRN;  /* united object - for case conformity */
A68_168  AEQBTRN_alts;
A68_165 * BEQBTRN_alt;
A68_INT  CEQBTRN;  /* forall loop counter */
A68_154  DEQBTRN;  /* united object - for case conformity */
A68_BOOL  EEQBTRN;  /* clause result */
A68_INT  FEQBTRN_ntypes;
A68_INT  GEQBTRN_newtypeno;
A68_486  IEQBTRN_generator;   /* proc value of non-global proc */
A68_258  NEQBTRN;  /* avoid structure result */
A68_258  OEQBTRN;  /* OPERATORS - assign op */
A68_258  PEQBTRN_newtypevec;
A68_258  QEQBTRN;  /* avoid structure result */
A68_258  REQBTRN_newtypes;
A68_INT  SEQBTRN_newclno;
A68_INT  TEQBTRN;  /* YIELD */
A68_169 * UEQBTRN;  /* YIELD */
A68_169 * VEQBTRN_newdec;
A68_169 * WEQBTRN;  /* YIELD */
A68_169 * XEQBTRN_tagdec;
A68_487  ZEQBTRN_generator;   /* proc value of non-global proc */
A68_168  FFQBTRN;  /* avoid structure result */
A68_168  EFQBTRN_newalts;
A68_33  HFQBTRN_generator;   /* proc value of non-global proc */
A68_32  MFQBTRN;  /* avoid structure result */
A68_32  NFQBTRN_altmap;
A68_INT  OFQBTRN_altno;
A68_INT  PFQBTRN_altindex;
A68_157  QFQBTRN;  /* collateral clause result */
A68_154  RFQBTRN;  /* OPERATORS - mode -> union mode */
A68_155 * SFQBTRN;  /* YIELD */
A68_157 * UFQBTRN;  /* YIELD */
A68_157 * TFQBTRN_tstr;
A68_157 ** VFQBTRN_ttail;
A68_INT  WFQBTRN;  /* YIELD */
A68_169 ** XFQBTRN;  /* YIELD */
A68_169 ** YFQBTRN;  /* YIELD */
A68_32 * ZFQBTRN;  /* YIELD */
A68_165 * AGQBTRN_alt;
A68_INT  BGQBTRN;  /* forall loop counter */
A68_154  CGQBTRN;  /* united object - for case conformity */
A68_INT * DGQBTRN;  /* YIELD */
A68_157  EGQBTRN;  /* collateral clause result */
A68_157 * FGQBTRN;  /* YIELD */
A68_154  GGQBTRN;  /* OPERATORS - mode -> union mode */
A68_154 * HGQBTRN;  /* YIELD */
A68_INT * IGQBTRN;  /* YIELD */
A68_167  JGQBTRN;  /* OPERATORS - mode -> union mode */
A68_167 * KGQBTRN;  /* YIELD */
A68_154  LGQBTRN;  /* OPERATORS - mode -> union mode */
A68_167  MGQBTRN;  /* OPERATORS - mode -> union mode */
A68_163 * NGQBTRN;  /* YIELD */
A68_167 * OGQBTRN;  /* YIELD */
A68_489  PGQBTRN;  /* collateral clause result */
A68_52  SGQBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  TGQBTRN;  /* YIELD */
A68_52  UGQBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  VGQBTRN;  /* YIELD */
A68_85  WGQBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  XGQBTRN;  /* avoid structure result */
A68_VC * YGQBTRN;  /* YIELD */
A68_136 * ZGQBTRN;  /* YIELD */
A68_136 ** AHQBTRN;  /* YIELD */
A68_INT * BHQBTRN;  /* YIELD */
A68_129  CHQBTRN;  /* OPERATORS - mode -> union mode */
A68_129 * DHQBTRN;  /* YIELD */
A68_INT  EHQBTRN;  /* YIELD */
A68_169 ** FHQBTRN;  /* YIELD */
A68_261  GHQBTRN;  /* collateral clause result */
A68_255  HHQBTRN;  /* collateral clause result */
A68_255 * IHQBTRN;  /* YIELD */
A68_261  JHQBTRN_newouter;
A68_262 ** KHQBTRN_ptr;
A68_BOOL  LHQBTRN;  /* optbool result */
A_PROC_ENTRY(transform_outertype);
 /* line 107: */
 /* line 108: */
{ 
VDQBTRN_has_assoc = A68_FALSE;
 /* line 109: */
 /* line 111: */
 /* line 112: */
XDQBTRN = (*(&((*(&(Ec->E)))->Types))) ;
YDQBTRN = 1 ;
ZDQBTRN = (*(&((*(&A_VINDEX(XDQBTRN,YDQBTRN)))->Body))) ;
switch ( ZDQBTRN.mode )
{ 
case 1: /* REF VECTOR [] MODE165 */
AEQBTRN_alts = (ZDQBTRN.data.mode1);
 /* line 113: */
CEQBTRN = AEQBTRN_alts.upb -1;
BEQBTRN_alt = AEQBTRN_alts.data;
for (;CEQBTRN-- >= 0;
(BEQBTRN_alt++
) )
{
 /* line 114: */
if ( !(!VDQBTRN_has_assoc) ) break;
 /* line 115: */
DEQBTRN = (*(&(BEQBTRN_alt->Assoc))) ;
switch ( DEQBTRN.mode )
{ 
case 9: /* REF STRUCT(INT)  */
 /* line 116: */
EEQBTRN = A68_FALSE;
break;
default: 
WDQBTRN_assoc_alts = AEQBTRN_alts;
 /* line 117: */
 /* line 118: */
 /* line 119: */
EEQBTRN = A68_TRUE;
break;
} 
VDQBTRN_has_assoc = EEQBTRN;
}
 /* line 120: */
 /* line 121: */
 /* line 122: */
break;
default: 
/*SKIP*/;
break;
} 
 /* line 124: */
 /* line 125: */
 /* line 126: */
if ( VDQBTRN_has_assoc )
{ 
FEQBTRN_ntypes = (*(&((*(&(Ec->E)))->Types))).upb;
 /* line 127: */
GEQBTRN_newtypeno = (FEQBTRN_ntypes+1);
 /* line 128: */
 /* line 129: */
A_CLOSURE( IEQBTRN_generator, JEQBTRN_generator, KEQBTRN_generator );
(( KEQBTRN_generator * ) ( IEQBTRN_generator.nonlocals )) -> FEQBTRN_ntypes = FEQBTRN_ntypes;
 /* line 130: */
A_CALLPROC(IEQBTRN_generator,(A68_FALSE, &NEQBTRN),(A68_FALSE, &NEQBTRN,(IEQBTRN_generator).nonlocals));
OEQBTRN = (*(&((*(&(Ec->E)))->Types))) ;
A_VASSIGN2(OEQBTRN,NEQBTRN,A68_169 *) ;
PEQBTRN_newtypevec = NEQBTRN;
 /* line 131: */
AKMBTRN_makenewtypes( Ec, GEQBTRN_newtypeno, &QEQBTRN );
REQBTRN_newtypes = QEQBTRN;
 /* line 132: */
SEQBTRN_newclno = ENCATRN_reserve_next_closureno((*A_CALLPROC(NL(GDQBTRN_newclosure),(),((NL(GDQBTRN_newclosure)).nonlocals))));
 /* line 133: */
TEQBTRN = 1 ;
UEQBTRN = A_HEAP(A68_169 ) ;
(*UEQBTRN) = (*(*(&A_VINDEX(REQBTRN_newtypes,TEQBTRN)))) ;
VEQBTRN_newdec = UEQBTRN;
 /* line 134: */
WEQBTRN = A_HEAP(A68_169 ) ;
(*WEQBTRN) = (*VEQBTRN_newdec) ;
XEQBTRN_tagdec = WEQBTRN;
 /* line 136: */
 /* line 137: */
A_CLOSURE( ZEQBTRN_generator, AFQBTRN_generator, BFQBTRN_generator );
(( BFQBTRN_generator * ) ( ZEQBTRN_generator.nonlocals )) -> WDQBTRN_assoc_alts = (&WDQBTRN_assoc_alts);
A_CALLPROC(ZEQBTRN_generator,(A68_FALSE, &FFQBTRN),(A68_FALSE, &FFQBTRN,(ZEQBTRN_generator).nonlocals));
A_VASSIGN2(WDQBTRN_assoc_alts,FFQBTRN,A68_165 ) ;
EFQBTRN_newalts = FFQBTRN;
 /* line 138: */
A_CLOSURE( HFQBTRN_generator, IFQBTRN_generator, JFQBTRN_generator );
(( JFQBTRN_generator * ) ( HFQBTRN_generator.nonlocals )) -> WDQBTRN_assoc_alts = (&WDQBTRN_assoc_alts);
A_CALLPROC(HFQBTRN_generator,(A68_FALSE, &MFQBTRN),(A68_FALSE, &MFQBTRN,(HFQBTRN_generator).nonlocals));
NFQBTRN_altmap = MFQBTRN;
 /* line 139: */
OFQBTRN_altno = 0;
PFQBTRN_altindex = 1;
 /* line 140: */
SFQBTRN = IFAATRN_maketname(GEQBTRN_newtypeno) ;
QFQBTRN.Elem = A_UNITE(RFQBTRN,mode1,1,SFQBTRN);
QFQBTRN.Rest = GAAATRN_niltstr;
UFQBTRN = A_HEAP(A68_157 ) ;
(*UFQBTRN) = QFQBTRN ;
TFQBTRN_tstr = UFQBTRN;
 /* line 141: */
VFQBTRN_ttail = (&(TFQBTRN_tstr->Rest));
 /* line 143: */
WFQBTRN = 1 ;
XFQBTRN = (&A_VINDEX(REQBTRN_newtypes,WFQBTRN)) ;
(*XFQBTRN) = VEQBTRN_newdec;
 /* line 144: */
YFQBTRN = (&A_VINDEX(REQBTRN_newtypes,GEQBTRN_newtypeno)) ;
(*YFQBTRN) = XEQBTRN_tagdec;
 /* line 145: */
ZFQBTRN = (&A_VINDEX(NL(CDQBTRN_altmaps),Closureno)) ;
(*ZFQBTRN) = NFQBTRN_altmap;
 /* line 147: */
 /* line 148: */
BGQBTRN = EFQBTRN_newalts.upb -1;
AGQBTRN_alt = EFQBTRN_newalts.data;
for (;BGQBTRN-- >= 0;
(AGQBTRN_alt++
) )
{
OFQBTRN_altno+=1;
 /* line 149: */
 /* line 150: */
CGQBTRN = (*(&(AGQBTRN_alt->Assoc))) ;
switch ( CGQBTRN.mode )
{ 
case 9: /* REF STRUCT(INT)  */
 /* line 151: */
 /* line 152: */
DGQBTRN = (&A_VINDEX(NFQBTRN_altmap,OFQBTRN_altno)) ;
(*DGQBTRN) = 0;
break;
default: 
EGQBTRN.Elem = (*(&(AGQBTRN_alt->Assoc)));
EGQBTRN.Rest = GAAATRN_niltstr;
FGQBTRN = A_HEAP(A68_157 ) ;
(*FGQBTRN) = EGQBTRN ;
(*VFQBTRN_ttail) = FGQBTRN;
 /* line 153: */
VFQBTRN_ttail = (&((*VFQBTRN_ttail)->Rest));
 /* line 154: */
HGQBTRN = (&(AGQBTRN_alt->Assoc)) ;
(*HGQBTRN) = A_UNITE(GGQBTRN,mode9,9,(&DIAATRN_tnull));
 /* line 155: */
 /* line 156: */
 /* line 157: */
IGQBTRN = (&A_VINDEX(NFQBTRN_altmap,OFQBTRN_altno)) ;
(*IGQBTRN) = PFQBTRN_altindex+=1;
break;
} 
}
 /* line 158: */
KGQBTRN = (&(XEQBTRN_tagdec->Body)) ;
(*KGQBTRN) = A_UNITE(JGQBTRN,mode1,1,EFQBTRN_newalts);
 /* line 159: */
NGQBTRN = XFAATRN_maketypetag(A_UNITE(LGQBTRN,mode3,3,TFQBTRN_tstr)) ;
OGQBTRN = (&(VEQBTRN_newdec->Body)) ;
(*OGQBTRN) = A_UNITE(MGQBTRN,mode3,3,NGQBTRN);
 /* line 161: */
TGQBTRN = RGQBTRN ;
PGQBTRN.data[0] = A_UNITE(SGQBTRN,mode7,7,TGQBTRN);
VGQBTRN = (*(&(VEQBTRN_newdec->Typename))) ;
PGQBTRN.data[1] = A_UNITE(UGQBTRN,mode7,7,VGQBTRN);
UJBAOSL_oneline( A_HISVEC(WGQBTRN,PGQBTRN,2,A68_52 ), &XGQBTRN );
YGQBTRN = (&(XEQBTRN_tagdec->Typename)) ;
(*YGQBTRN) = XGQBTRN;
 /* line 162: */
ZGQBTRN = A_HEAP(A68_136 ) ;
(*ZGQBTRN) = (*(*(&(XEQBTRN_tagdec->Usage)))) ;
AHQBTRN = (&(XEQBTRN_tagdec->Usage)) ;
(*AHQBTRN) = ZGQBTRN;
 /* line 163: */
BHQBTRN = (&((*(&(XEQBTRN_tagdec->Usage)))->Closureno)) ;
(*BHQBTRN) = SEQBTRN_newclno;
 /* line 164: */
DHQBTRN = (&(XEQBTRN_tagdec->Attr)) ;
(*DHQBTRN) = A_UNITE(CHQBTRN,mode5,5,(&ZHAATRN_attrnull));
 /* line 165: */
EHQBTRN = 1 ;
FHQBTRN = (&A_VINDEX(PEQBTRN_newtypevec,EHQBTRN)) ;
(*FHQBTRN) = XEQBTRN_tagdec;
 /* line 167: */
GHQBTRN.Closureno = SEQBTRN_newclno;
 /* line 168: */
GHQBTRN.Sort = TKAATRN_outertype;
 /* line 169: */
HHQBTRN.Attrs = MCAATRN_nullattrdecs;
 /* line 170: */
HHQBTRN.Ints = SCAATRN_nullintdecs;
 /* line 171: */
HHQBTRN.Types = PEQBTRN_newtypevec;
 /* line 172: */
HHQBTRN.Consts = EDAATRN_nullconstdecs;
HHQBTRN.Fns = KDAATRN_nullfndecs;
IHQBTRN = A_HEAP(A68_255 ) ;
(*IHQBTRN) = HHQBTRN ;
GHQBTRN.Environ = IHQBTRN;
JHQBTRN_newouter = GHQBTRN;
 /* line 173: */
KHQBTRN_ptr = (&((*A_CALLPROC(NL(GDQBTRN_newclosure),(),((NL(GDQBTRN_newclosure)).nonlocals)))->Outers));
 /* line 175: */
for ( ;; )
{ 
 /* line 176: */
LHQBTRN = ((*KHQBTRN_ptr)!=HBAATRN_nilouters);
if ( LHQBTRN )
{ /* line 177: */
LHQBTRN = ((*(&((&((*KHQBTRN_ptr)->Outer))->Closureno)))!=Closureno);
}
if ( !(LHQBTRN) ) break;
KHQBTRN_ptr = (&((*KHQBTRN_ptr)->Rest));
}
 /* line 178: */
 /* line 179: */
 /* line 180: */
KNCATRN_insert_outer(JHQBTRN_newouter, KHQBTRN_ptr, (*NL(RCQBTRN_thisclosure)), NL(Msg));
} 
} 
A_PROC_EXIT(transform_outertype);
return;
} 
#undef NL

A_STATIC A68_VOID  OHQBTRN_transform_outerfn(A68_461 * Ec, void *NonLocals)
#define NL(x) (((PHQBTRN_transform_outerfn *)NonLocals)->x)
{ 
A68_258  QHQBTRN_typedecs;
A68_491  VHQBTRN_convert_assoc;   /* proc value of non-global proc */
A68_379  KJQBTRN_unit_associated;   /* proc value of non-global proc */
A68_405  OKQBTRN;  /* OPERATORS - mode -> union mode */
A68_379  PKQBTRN;  /* YIELD */
A68_404  QKQBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_360 * RKQBTRN_newtprocs;
A68_400  SKQBTRN;  /* CALL */
A68_260  TKQBTRN;  /* OPERATORS - simple index */
A68_INT  UKQBTRN;  /* YIELD */
A68_357  VKQBTRN;  /* avoid structure result */
A68_357  WKQBTRN_fdc;
A68_260  XKQBTRN;  /* avoid structure result */
A68_INT  YKQBTRN;  /* YIELD */
A68_252 ** ZKQBTRN;  /* YIELD */
A_PROC_ENTRY(transform_outerfn);
 /* line 183: */
 /* line 184: */
{ 
QHQBTRN_typedecs = (*(&((*(&(Ec->E)))->Types)));
 /* line 186: */
A_CLOSURE( VHQBTRN_convert_assoc, WHQBTRN_convert_assoc, XHQBTRN_convert_assoc );
(( XHQBTRN_convert_assoc * ) ( VHQBTRN_convert_assoc.nonlocals )) -> QHQBTRN_typedecs = QHQBTRN_typedecs;
(( XHQBTRN_convert_assoc * ) ( VHQBTRN_convert_assoc.nonlocals )) -> CDQBTRN_altmaps = NL(CDQBTRN_altmaps);
 /* line 235: */
A_CLOSURE( KJQBTRN_unit_associated, LJQBTRN_unit_associated, MJQBTRN_unit_associated );
(( MJQBTRN_unit_associated * ) ( KJQBTRN_unit_associated.nonlocals )) -> VHQBTRN_convert_assoc = VHQBTRN_convert_assoc;
(( MJQBTRN_unit_associated * ) ( KJQBTRN_unit_associated.nonlocals )) -> QHQBTRN_typedecs = QHQBTRN_typedecs;
(( MJQBTRN_unit_associated * ) ( KJQBTRN_unit_associated.nonlocals )) -> CDQBTRN_altmaps = NL(CDQBTRN_altmaps);
 /* line 254: */
 /* line 255: */
PKQBTRN = KJQBTRN_unit_associated ;
RKQBTRN_newtprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HVEC(QKQBTRN,A_UNITE(OKQBTRN,mode19,19,PKQBTRN),A68_405 ));
 /* line 259: */
SKQBTRN = (*(&(RKQBTRN_newtprocs->Fndec))) ;
TKQBTRN = (*(&((*(&(Ec->E)))->Fns))) ;
UKQBTRN = 1 ;
A_CALLPROC(SKQBTRN,((*(&A_VINDEX(TKQBTRN,UKQBTRN))), RKQBTRN_newtprocs, &VKQBTRN),((*(&A_VINDEX(TKQBTRN,UKQBTRN))), RKQBTRN_newtprocs, &VKQBTRN,(SKQBTRN).nonlocals));
WKQBTRN_fdc = VKQBTRN;
 /* line 260: */
if ( WKQBTRN_fdc.C )
{ 
 /* line 261: */
AJMBTRN_newfns( Ec, &XKQBTRN );
YKQBTRN = 1 ;
ZKQBTRN = (&A_VINDEX(XKQBTRN,YKQBTRN)) ;
(*ZKQBTRN) = WKQBTRN_fdc.F;
} 
} 
A_PROC_EXIT(transform_outerfn);
return;
} 
#undef NL

A_STATIC A68_VOID  DLQBTRN_outer_associated(A68_261  Outer, A68_360 * Outertprocs, A68_358  *ReturnedValue, void *NonLocals)
#define NL(x) (((ELQBTRN_outer_associated *)NonLocals)->x)
{ 
A68_255 * FLQBTRN_oldenv;
A68_461  HLQBTRN;  /* avoid structure result */
A68_461  GLQBTRN_ec;
A68_261  ILQBTRN_newouter;
A68_255 ** JLQBTRN;  /* YIELD */
A68_358  KLQBTRN;  /* collateral clause result */
A68_358  LLQBTRN;  /* clause result */
A68_358  MLQBTRN;  /* collateral clause result */
A_PROC_ENTRY(outer_associated);
 /* line 264: */
 /* line 267: */
{ 
FLQBTRN_oldenv = Outer.Environ;
 /* line 268: */
FLMBTRN_update_bodies( FLQBTRN_oldenv, (*NL(RCQBTRN_thisclosure)), NL(LDQBTRN_is_modified), NL(Msg), &HLQBTRN );
GLQBTRN_ec = HLQBTRN;
 /* line 270: */
 /* line 271: */
if ( (Outer.Sort==TKAATRN_outertype) )
{ 
 /* line 272: */
A_CALLPROC(NL(SDQBTRN_transform_outertype),((&GLQBTRN_ec), Outer.Closureno),((&GLQBTRN_ec), Outer.Closureno,(NL(SDQBTRN_transform_outertype)).nonlocals));
} 
else
{ 
 /* line 273: */
if ( (Outer.Sort==VKAATRN_outerfn) )
{ 
 /* line 274: */
A_CALLPROC(NL(NHQBTRN_transform_outerfn),((&GLQBTRN_ec)),((&GLQBTRN_ec),(NL(NHQBTRN_transform_outerfn)).nonlocals));
} 
} 
 /* line 276: */
 /* line 277: */
if ( (*(&((&GLQBTRN_ec)->C))) )
{ 
ILQBTRN_newouter = Outer;
 /* line 278: */
JLQBTRN = (&((&ILQBTRN_newouter)->Environ)) ;
(*JLQBTRN) = (*(&((&GLQBTRN_ec)->E)));
 /* line 279: */
KLQBTRN.O = ILQBTRN_newouter;
 /* line 280: */
KLQBTRN.C = A68_TRUE;
LLQBTRN = KLQBTRN;
} 
else
{ 
MLQBTRN.O = Outer;
 /* line 281: */
 /* line 282: */
MLQBTRN.C = A68_FALSE;
LLQBTRN = MLQBTRN;
} 
} 
A_PROC_EXIT(outer_associated);
*ReturnedValue = (LLQBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  TBQBTRN_generator(A68_BOOL  SBQBTRN_anonymous, A68_46  *ReturnedValue)
{ 
A68_46  VBQBTRN;  /* OPERATORS - dynamic generator */
A68_480  UBQBTRN_anonymous;
A68_479 * ACQBTRN_anonymous;
A68_INT  BCQBTRN;  /* forall loop counter */
A68_VC  CCQBTRN;  /* avoid structure result */
A68_46  DCQBTRN;  /* clause result */
{ 
VBQBTRN.upb = 0 ;
( SBQBTRN_anonymous? A_VLOC(A68_VC ,VBQBTRN): A_VHEAP(A68_VC ,VBQBTRN) );
UBQBTRN_anonymous = VBQBTRN;
BCQBTRN = (*(&UBQBTRN_anonymous)).upb -1;
ACQBTRN_anonymous = (*(&UBQBTRN_anonymous)).data;
for (;BCQBTRN-- >= 0;
(ACQBTRN_anonymous++
) )
{
XBQBTRN_generator( SBQBTRN_anonymous, &CCQBTRN );
(*ACQBTRN_anonymous) = CCQBTRN;
}
DCQBTRN = UBQBTRN_anonymous;
} 
*ReturnedValue = (DCQBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  HCQBTRN_generator(A68_BOOL  GCQBTRN_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  ICQBTRN;  /* clause result */
A68_32  JCQBTRN;  /* OPERATORS - dynamic generator */
{ 
JCQBTRN.upb = 0 ;
( GCQBTRN_anonymous? A_VLOC(A68_INT ,JCQBTRN): A_VHEAP(A68_INT ,JCQBTRN) );
ICQBTRN = JCQBTRN;
} 
*ReturnedValue = (ICQBTRN);
return;
} 
#undef NL

A68_VOID  OCQBTRN_transform_associated(A68_265 * Outerclosure, A68_108  Msg, A68_359  *ReturnedValue)
{ 
A68_359  PCQBTRN;  /* collateral clause result */
A68_359  QCQBTRN_result;
A68_265 ** RCQBTRN_thisclosure;
A68_BOOL * SCQBTRN_closure_changed;
A68_INT  TCQBTRN_closuretop;
A68_262 * UCQBTRN_closureptr;
A68_INT  VCQBTRN_associatedcnt;
A68_483  XCQBTRN_generator;   /* proc value of non-global proc */
A68_482  DDQBTRN;  /* avoid structure result */
A68_482  CDQBTRN_altmaps;
A68_32 * EDQBTRN_av;
A68_INT  FDQBTRN;  /* forall loop counter */
A68_484  GDQBTRN_newclosure;   /* proc value of non-global proc */
A68_475  LDQBTRN_is_modified;   /* proc value of non-global proc */
A68_485  SDQBTRN_transform_outertype;   /* proc value of non-global proc */
A68_490  NHQBTRN_transform_outerfn;   /* proc value of non-global proc */
A68_401  CLQBTRN_outer_associated;   /* proc value of non-global proc */
A68_405  NLQBTRN;  /* OPERATORS - mode -> union mode */
A68_401  OLQBTRN;  /* YIELD */
A68_404  PLQBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_360 * QLQBTRN_newtprocs;
A68_401  RLQBTRN;  /* CALL */
A68_358  SLQBTRN;  /* avoid structure result */
A68_358  TLQBTRN_oc;
A68_261 * ULQBTRN;  /* YIELD */
A68_359  VLQBTRN;  /* clause result */
A_PROC_ENTRY(transform_associated);
 /* line 66: */
 /* line 67: */
{ 
PCQBTRN.Cl = Outerclosure;
PCQBTRN.C = A68_FALSE;
QCQBTRN_result = PCQBTRN;
 /* line 68: */
RCQBTRN_thisclosure = (&((&QCQBTRN_result)->Cl));
 /* line 69: */
SCQBTRN_closure_changed = (&((&QCQBTRN_result)->C));
 /* line 70: */
TCQBTRN_closuretop = ZKCATRN_maxclosureno(Outerclosure);
 /* line 71: */
UCQBTRN_closureptr = (*(&((*RCQBTRN_thisclosure)->Outers)));
 /* line 72: */
VCQBTRN_associatedcnt = 0;
 /* line 73: */
A_CLOSURE( XCQBTRN_generator, YCQBTRN_generator, ZCQBTRN_generator );
(( ZCQBTRN_generator * ) ( XCQBTRN_generator.nonlocals )) -> TCQBTRN_closuretop = TCQBTRN_closuretop;
A_CALLPROC(XCQBTRN_generator,(A68_TRUE, &DDQBTRN),(A68_TRUE, &DDQBTRN,(XCQBTRN_generator).nonlocals));
CDQBTRN_altmaps = DDQBTRN;
 /* line 75: */
FDQBTRN = CDQBTRN_altmaps.upb -1;
EDQBTRN_av = CDQBTRN_altmaps.data;
for (;FDQBTRN-- >= 0;
(EDQBTRN_av++
) )
{
(*EDQBTRN_av) = KCQBTRN_nullaltmap;
}
 /* line 93: */
 /* line 94: */
A_CLOSURE( GDQBTRN_newclosure, HDQBTRN_newclosure, IDQBTRN_newclosure );
(( IDQBTRN_newclosure * ) ( GDQBTRN_newclosure.nonlocals )) -> SCQBTRN_closure_changed = SCQBTRN_closure_changed;
(( IDQBTRN_newclosure * ) ( GDQBTRN_newclosure.nonlocals )) -> RCQBTRN_thisclosure = RCQBTRN_thisclosure;
(( IDQBTRN_newclosure * ) ( GDQBTRN_newclosure.nonlocals )) -> Msg = Msg;
(( IDQBTRN_newclosure * ) ( GDQBTRN_newclosure.nonlocals )) -> UCQBTRN_closureptr = (&UCQBTRN_closureptr);
 /* line 103: */
A_CLOSURE( LDQBTRN_is_modified, MDQBTRN_is_modified, NDQBTRN_is_modified );
(( NDQBTRN_is_modified * ) ( LDQBTRN_is_modified.nonlocals )) -> TCQBTRN_closuretop = TCQBTRN_closuretop;
(( NDQBTRN_is_modified * ) ( LDQBTRN_is_modified.nonlocals )) -> CDQBTRN_altmaps = CDQBTRN_altmaps;
 /* line 106: */
A_CLOSURE( SDQBTRN_transform_outertype, TDQBTRN_transform_outertype, UDQBTRN_transform_outertype );
(( UDQBTRN_transform_outertype * ) ( SDQBTRN_transform_outertype.nonlocals )) -> GDQBTRN_newclosure = GDQBTRN_newclosure;
(( UDQBTRN_transform_outertype * ) ( SDQBTRN_transform_outertype.nonlocals )) -> CDQBTRN_altmaps = CDQBTRN_altmaps;
(( UDQBTRN_transform_outertype * ) ( SDQBTRN_transform_outertype.nonlocals )) -> RCQBTRN_thisclosure = RCQBTRN_thisclosure;
(( UDQBTRN_transform_outertype * ) ( SDQBTRN_transform_outertype.nonlocals )) -> Msg = Msg;
 /* line 182: */
A_CLOSURE( NHQBTRN_transform_outerfn, OHQBTRN_transform_outerfn, PHQBTRN_transform_outerfn );
(( PHQBTRN_transform_outerfn * ) ( NHQBTRN_transform_outerfn.nonlocals )) -> CDQBTRN_altmaps = CDQBTRN_altmaps;
 /* line 263: */
A_CLOSURE( CLQBTRN_outer_associated, DLQBTRN_outer_associated, ELQBTRN_outer_associated );
(( ELQBTRN_outer_associated * ) ( CLQBTRN_outer_associated.nonlocals )) -> RCQBTRN_thisclosure = RCQBTRN_thisclosure;
(( ELQBTRN_outer_associated * ) ( CLQBTRN_outer_associated.nonlocals )) -> LDQBTRN_is_modified = LDQBTRN_is_modified;
(( ELQBTRN_outer_associated * ) ( CLQBTRN_outer_associated.nonlocals )) -> Msg = Msg;
(( ELQBTRN_outer_associated * ) ( CLQBTRN_outer_associated.nonlocals )) -> SDQBTRN_transform_outertype = SDQBTRN_transform_outertype;
(( ELQBTRN_outer_associated * ) ( CLQBTRN_outer_associated.nonlocals )) -> NHQBTRN_transform_outerfn = NHQBTRN_transform_outerfn;
 /* line 284: */
 /* line 285: */
 /* line 286: */
if ( ((*(&(Outerclosure->Outers)))!=HBAATRN_nilouters) )
{ 
OLQBTRN = CLQBTRN_outer_associated ;
QLQBTRN_newtprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HVEC(PLQBTRN,A_UNITE(NLQBTRN,mode41,41,OLQBTRN),A68_405 ));
 /* line 288: */
for ( ;; )
{ 
 /* line 289: */
if ( !((UCQBTRN_closureptr!=HBAATRN_nilouters)) ) break;
SOAAOST_flt_if_interrupted(Msg);
 /* line 290: */
RLQBTRN = (*(&(QLQBTRN_newtprocs->Outer))) ;
A_CALLPROC(RLQBTRN,((*(&(UCQBTRN_closureptr->Outer))), QLQBTRN_newtprocs, &SLQBTRN),((*(&(UCQBTRN_closureptr->Outer))), QLQBTRN_newtprocs, &SLQBTRN,(RLQBTRN).nonlocals));
TLQBTRN_oc = SLQBTRN;
 /* line 291: */
if ( TLQBTRN_oc.C )
{ 
ULQBTRN = (&(UCQBTRN_closureptr->Outer)) ;
(*ULQBTRN) = TLQBTRN_oc.O;
} 
 /* line 292: */
 /* line 293: */
UCQBTRN_closureptr = (*(&(UCQBTRN_closureptr->Rest)));
}
 /* line 294: */
 /* line 295: */
MLJATRN_discard_tprocs(QLQBTRN_newtprocs);
} 
 /* line 296: */
 /* line 297: */
VLQBTRN = QCQBTRN_result;
} 
A_PROC_EXIT(transform_associated);
*ReturnedValue = (VLQBTRN);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 4: */
void NBQBTRN(void)   /* initialise DECS associated */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/associated.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/environprocs.m","./mfiles/closureprocs.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","./mfiles/transformprocs.m","./mfiles/modeprocs.m","./mfiles/assmodes.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_46  FCQBTRN;  /* avoid structure result */
A68_32  LCQBTRN;  /* avoid structure result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
KGMBTRN();   /* USE environprocs */
SKCATRN();   /* USE closureprocs */
PCAAOST();   /* USE osinterface */
IHJATRN();   /* USE transformprocs */
HNMATRN();   /* USE modeprocs */
BAAATRN();   /* USE assmodes */
JFAAOSI();   /* USE messageproc */
JSCAOST();   /* USE basics */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/transform/assoc/./a68files/associated.a68";
A_config.translation_time = "Tue Apr  4 10:10:43 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "MBQBTRN (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:10:43 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS associated);
UEAALIB_a68config(LGAALIB_configinfo, RBQBTRN);
 /* line 59: */
TBQBTRN_generator( A68_TRUE, &FCQBTRN );
ECQBTRN_associated_options = FCQBTRN;
 /* line 63: */
HCQBTRN_generator( A68_TRUE, &LCQBTRN );
KCQBTRN_nullaltmap = LCQBTRN;
 /* line 65: */
 /* line 299: */
 /* line 300: */
 /* line 301: */
/*SKIP*/;
A_PROC_EXIT(DECS associated);
} 
#undef NL
/* end of translation of ./a68files/associated.a68 */
