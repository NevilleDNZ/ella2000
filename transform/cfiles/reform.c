
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
/* UNAME:KHFBTRN */
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

A_PROCEDURE(A68_VOID ,A68t420,(struct A68t261 ,struct A68t265 *,struct A68t408 ,struct A68t108 ,struct A68t358 *),(struct A68t261 ,struct A68t265 *,struct A68t408 ,struct A68t108 ,struct A68t358 *,void *));
typedef struct A68t420  A68_420 ;    /* PROC(MODE261,REF MODE265,MODE408,MODE108) MODE358 */

A_PROCEDURE(A68_INT ,A68t421,(struct A68t154 ),(struct A68t154 ,void *));
typedef struct A68t421  A68_421 ;    /* PROC(MODE154) INT */
A_ISTRUCT(A68_CHAR ,23,A68t422);
typedef struct A68t422  A68_422 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t423);
typedef struct A68t423  A68_423 ;    /* STRUCT 16 CHAR */
A_VECTOR(struct A68t176 ,A68t424);
typedef struct A68t424  A68_424 ;    /* VECTOR [] MODE176 */

A_PROCEDURE(A68_VOID ,A68t425,(A68_BOOL ,struct A68t424 *),(A68_BOOL ,struct A68t424 *,void *));
typedef struct A68t425  A68_425 ;    /* PROC(BOOL) MODE424 */

A_PROCEDURE(A68_VOID ,A68t426,(struct A68t176 ,struct A68t154 ),(struct A68t176 ,struct A68t154 ,void *));
typedef struct A68t426  A68_426 ;    /* PROC(MODE176,MODE154) VOID */

A_PROCEDURE(A68_VOID ,A68t427,(struct A68t154 ,struct A68t176 *),(struct A68t154 ,struct A68t176 *,void *));
typedef struct A68t427  A68_427 ;    /* PROC(MODE154) MODE176 */

A_PROCEDURE(A68_VOID ,A68t428,(struct A68t138 ,struct A68t154 ,struct A68t176 *),(struct A68t138 ,struct A68t154 ,struct A68t176 *,void *));
typedef struct A68t428  A68_428 ;    /* PROC(MODE138,MODE154) MODE176 */

A_PROCEDURE(A68_VOID ,A68t429,(A68_BOOL ,struct A68t254 *),(A68_BOOL ,struct A68t254 *,void *));
typedef struct A68t429  A68_429 ;    /* PROC(BOOL) MODE254 */
A_ISTRUCT(A68_CHAR ,3,A68t430);
typedef struct A68t430  A68_430 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t431);
typedef struct A68t431  A68_431 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(struct A68t405 ,3,A68t432);
typedef struct A68t432  A68_432 ;    /* STRUCT 3 MODE405 */

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
/* --- End of imports from options --- */


/* --- Imports from transformprocs --- */
extern A68_360 * THJATRN_make_newtprocs(struct A68t360 *,struct A68t404 );
extern A68_360 * AWLATRN_nulltprocs;
extern A68_VOID  IWLATRN_null_formula(struct A68t138 ,struct A68t360 *,A68_321 *);
extern A68_VOID  NWLATRN_null_type(struct A68t154 ,struct A68t360 *,A68_327 *);
/* --- End of imports from transformprocs --- */


/* --- Imports from modeprocs --- */
extern A68_139 * NNMATRN_makefint(A68_INT );
extern A68_INT  TNMATRN_formula_int(struct A68t138 ,struct A68t108 );
extern A68_VOID  JTNATRN_names_type(struct A68t217 *,struct A68t252 *,A68_154 *);
/* --- End of imports from modeprocs --- */


/* --- Imports from assmodes --- */
extern A68_VC  TTCAOST_nullid;
extern A68_157 * GAAATRN_niltstr;
extern A68_191 * IAAATRN_nilustr;
extern A68_217 * NAAATRN_nilnames;
extern A68_221 * WGAATRN_makeunittag(struct A68t176 );
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
static A68_417   OHFBTRN = {"$Id: reform.a68,v 34.3 1995/03/29 13:03:04 ella Exp $"}; 
A_GISVEC(A68_VC ,PHFBTRN,OHFBTRN,53)
A68_46  CIFBTRN_reform_options;
static A68_422   JJFBTRN = {"reform_type_size: tnull"}; 
A_GISVEC(A68_VC ,KJFBTRN,JJFBTRN,23)
static A68_422   NJFBTRN = {"reform_type_size: tvoid"}; 
A_GISVEC(A68_VC ,OJFBTRN,NJFBTRN,23)
static A68_423   QJFBTRN = {"reform_type_size"}; 
A_GISVEC(A68_VC ,RJFBTRN,QJFBTRN,16)
static A68_430   OOFBTRN = {"_rf"}; 
A_GISVEC(A68_VC ,POFBTRN,OOFBTRN,3)
typedef struct   /* env of non-global proc */
{
A68_108  Msg;
} NIFBTRN_sysfault;
typedef struct   /* env of non-global proc */
{
A68_255 * JIFBTRN_env;
A68_421  QIFBTRN_reform_type_size;
A68_108  Msg;
A68_36  LIFBTRN_sysfault;
} SIFBTRN_reform_type_size;
typedef struct   /* env of non-global proc */
{
A68_421  QIFBTRN_reform_type_size;
A68_255 * JIFBTRN_env;
A68_108  Msg;
} XJFBTRN_fndec_reform;
typedef struct   /* env of non-global proc */
{
A68_265 * Closure;
A68_408  Options;
A68_108  Msg;
} VQFBTRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_252 * Fdec;
A68_421  QIFBTRN_reform_type_size;
A68_255 * JIFBTRN_env;
A68_108  Msg;
A68_254 * YJFBTRN_nametypes;
A68_BOOL * ZJFBTRN_newtypes;
} EKFBTRN_fnbody_proc;
typedef struct   /* env of non-global proc */
{
A68_421  QIFBTRN_reform_type_size;
A68_154  KKFBTRN_intype;
} OKFBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_255 * JIFBTRN_env;
A68_426  YKFBTRN_get_units;
A68_424  RKFBTRN_units;
A68_INT * TKFBTRN_unum;
A68_108  Msg;
} ALFBTRN_get_units;
typedef struct   /* env of non-global proc */
{
A68_108  Msg;
A68_427  NMFBTRN_reform_units;
A68_255 * JIFBTRN_env;
A68_424  RKFBTRN_units;
A68_INT * UKFBTRN_ucnt;
} PMFBTRN_reform_units;
typedef struct   /* env of non-global proc */
{
A68_254 * YJFBTRN_nametypes;
} IOFBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_108  Msg;
A68_427  NMFBTRN_reform_units;
} VMFBTRN_make_row;

A_STATIC A68_VOID  RHFBTRN_generator(A68_BOOL  QHFBTRN_anonymous, A68_46  *ReturnedValue);

A_STATIC A68_VOID  VHFBTRN_generator(A68_BOOL  UHFBTRN_anonymous, A68_VC  *ReturnedValue);

A68_VOID  IIFBTRN_outer_reform(A68_261  Outer, A68_265 * Closure, A68_408  Options, A68_108  Msg, A68_358  *ReturnedValue);

A_STATIC A68_VOID  MIFBTRN_sysfault(A68_VC  Text, void *NonLocals);

A_STATIC A68_INT  RIFBTRN_reform_type_size(A68_154  T, void *NonLocals);

A_STATIC A68_VOID  WJFBTRN_fndec_reform(A68_252 * Fdec, A68_360 * Dec_tprocs, A68_357  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DKFBTRN_fnbody_proc(A68_248  Fbody, A68_360 * Tprocs, A68_354  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NKFBTRN_generator(A68_BOOL  LKFBTRN_anonymous, A68_424  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZKFBTRN_get_units(A68_176  U, A68_154  T, void *NonLocals);

A_STATIC A68_VOID  OMFBTRN_reform_units(A68_154  T, A68_176  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  UMFBTRN_make_row(A68_138  Size, A68_154  Elem, A68_176  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HOFBTRN_generator(A68_BOOL  FOFBTRN_anonymous, A68_254  *ReturnedValue, void *NonLocals);

A68_VOID  QQFBTRN_transform_reform(A68_265 * Closure, A68_408  Options, A68_108  Msg, A68_359  *ReturnedValue);

A_STATIC A68_VOID  UQFBTRN_anonymous(A68_261  Outer, A68_360 * Tprocs, A68_358  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  UMFBTRN_make_row(A68_138  Size, A68_154  Elem, A68_176  *ReturnedValue, void *NonLocals)
#define NL(x) (((VMFBTRN_make_row *)NonLocals)->x)
{ 
A68_191 * WMFBTRN_ru;
A68_191 ** XMFBTRN_rtail;
A68_INT  YMFBTRN;  /* to part of loop */
A68_INT  ZMFBTRN;  /* loop control */
A68_191  ANFBTRN;  /* collateral clause result */
A68_176  BNFBTRN;  /* avoid structure result */
A68_191 * CNFBTRN;  /* YIELD */
A68_176  DNFBTRN;  /* clause result */
A68_176  ENFBTRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(make_row);
 /* line 156: */
 /* line 157: */
{ 
WMFBTRN_ru = IAAATRN_nilustr;
 /* line 158: */
XMFBTRN_rtail = (&WMFBTRN_ru);
 /* line 160: */
 /* line 161: */
YMFBTRN = TNMATRN_formula_int(Size, NL(Msg));
for ( ZMFBTRN = 1;
ZMFBTRN <= YMFBTRN;
ZMFBTRN += 1 )
{ 
 /* line 162: */
 /* line 163: */
A_CALLPROC(NL(NMFBTRN_reform_units),(Elem, &BNFBTRN),(Elem, &BNFBTRN,(NL(NMFBTRN_reform_units)).nonlocals));
ANFBTRN.Elem = BNFBTRN;
ANFBTRN.Rest = IAAATRN_nilustr;
CNFBTRN = A_HEAP(A68_191 ) ;
(*CNFBTRN) = ANFBTRN ;
(*XMFBTRN_rtail) = CNFBTRN;
 /* line 164: */
 /* line 165: */
XMFBTRN_rtail = (&((*XMFBTRN_rtail)->Rest));
}
 /* line 166: */
 /* line 167: */
DNFBTRN = A_UNITE(ENFBTRN,mode21,21,WMFBTRN_ru);
} 
A_PROC_EXIT(make_row);
*ReturnedValue = (DNFBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  NKFBTRN_generator(A68_BOOL  LKFBTRN_anonymous, A68_424  *ReturnedValue, void *NonLocals)
#define NL(x) (((OKFBTRN_generator *)NonLocals)->x)
{ 
A68_424  PKFBTRN;  /* clause result */
A68_424  QKFBTRN;  /* OPERATORS - dynamic generator */
{ 
QKFBTRN.upb = A_CALLPROC(NL(QIFBTRN_reform_type_size),(NL(KKFBTRN_intype)),(NL(KKFBTRN_intype),(NL(QIFBTRN_reform_type_size)).nonlocals)) ;
( LKFBTRN_anonymous? A_VLOC(A68_176 ,QKFBTRN): A_VHEAP(A68_176 ,QKFBTRN) );
PKFBTRN = QKFBTRN;
} 
*ReturnedValue = (PKFBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ZKFBTRN_get_units(A68_176  U, A68_154  T, void *NonLocals)
#define NL(x) (((ALFBTRN_get_units *)NonLocals)->x)
{ 
A68_154  BLFBTRN;  /* united object - for case conformity */
A68_155 * CLFBTRN_tn;
A68_258  DLFBTRN;  /* OPERATORS - simple index */
A68_INT  ELFBTRN;  /* YIELD */
A68_169 * FLFBTRN_td;
A68_167  GLFBTRN;  /* united object - for case conformity */
A68_163 * HLFBTRN_tt;
A68_INT  ILFBTRN;  /* YIELD */
A68_176 * JLFBTRN;  /* YIELD */
A68_159 * KLFBTRN_tbr;
A68_157 * LLFBTRN_str;
A68_157 * MLFBTRN_el;
A68_INT  NLFBTRN_sind;
A68_186  OLFBTRN;  /* collateral clause result */
A68_138  PLFBTRN;  /* OPERATORS - mode -> union mode */
A68_139 * QLFBTRN;  /* YIELD */
A68_186 * RLFBTRN;  /* YIELD */
A68_176  SLFBTRN;  /* OPERATORS - mode -> union mode */
A68_156 * TLFBTRN_row;
A68_INT  ULFBTRN_rind;
A68_INT  VLFBTRN;  /* to part of loop */
A68_186  WLFBTRN;  /* collateral clause result */
A68_138  XLFBTRN;  /* OPERATORS - mode -> union mode */
A68_139 * YLFBTRN;  /* YIELD */
A68_186 * ZLFBTRN;  /* YIELD */
A68_176  AMFBTRN;  /* OPERATORS - mode -> union mode */
A68_160 * BMFBTRN_tstring;
A68_INT  CMFBTRN_rind;
A68_INT  DMFBTRN;  /* to part of loop */
A68_186  EMFBTRN;  /* collateral clause result */
A68_139  FMFBTRN;  /* collateral clause result */
A68_139 * GMFBTRN;  /* YIELD */
A68_138  HMFBTRN;  /* OPERATORS - mode -> union mode */
A68_186 * IMFBTRN;  /* YIELD */
A68_176  JMFBTRN;  /* OPERATORS - mode -> union mode */
A68_INT  KMFBTRN;  /* YIELD */
A68_176 * LMFBTRN;  /* YIELD */
A_PROC_ENTRY(get_units);
 /* line 111: */
 /* line 112: */
{ 
 /* line 113: */
BLFBTRN = T ;
switch ( BLFBTRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
CLFBTRN_tn = (BLFBTRN.data.mode1);
 /* line 114: */
{ 
DLFBTRN = (*(&(NL(JIFBTRN_env)->Types))) ;
ELFBTRN = (*(&(CLFBTRN_tn->Typeno))) ;
FLFBTRN_td = (*(&A_VINDEX(DLFBTRN,ELFBTRN)));
 /* line 116: */
 /* line 117: */
GLFBTRN = (*(&(FLFBTRN_td->Body))) ;
switch ( GLFBTRN.mode )
{ 
case 3: /* REF STRUCT(MODE154)  */
HLFBTRN_tt = (GLFBTRN.data.mode3);
 /* line 118: */
 /* line 119: */
A_CALLPROC(NL(YKFBTRN_get_units),(U, (*(&(HLFBTRN_tt->Tag)))),(U, (*(&(HLFBTRN_tt->Tag))),(NL(YKFBTRN_get_units)).nonlocals));
break;
default: 
 /* line 120: */
 /* line 121: */
 /* line 122: */
ILFBTRN = (*NL(TKFBTRN_unum))+=1 ;
JLFBTRN = (&A_VINDEX(NL(RKFBTRN_units),ILFBTRN)) ;
(*JLFBTRN) = U;
break;
} 
} 
break;
case 5: /* REF STRUCT(MODE154)  */
KLFBTRN_tbr = (BLFBTRN.data.mode5);
 /* line 123: */
A_CALLPROC(NL(YKFBTRN_get_units),(U, (*(&(KLFBTRN_tbr->Type)))),(U, (*(&(KLFBTRN_tbr->Type))),(NL(YKFBTRN_get_units)).nonlocals));
break;
case 3: /* REF STRUCT(MODE154,REF MODE157)  */
LLFBTRN_str = (BLFBTRN.data.mode3);
 /* line 124: */
{ 
MLFBTRN_el = LLFBTRN_str;
 /* line 125: */
NLFBTRN_sind = 0;
 /* line 127: */
for ( ;; )
{ 
 /* line 128: */
 /* line 129: */
if ( !((MLFBTRN_el!=GAAATRN_niltstr)) ) break;
OLFBTRN.Unit = U;
QLFBTRN = NNMATRN_makefint(NLFBTRN_sind+=1) ;
OLFBTRN.Index = A_UNITE(PLFBTRN,mode1,1,QLFBTRN);
 /* line 130: */
RLFBTRN = A_HEAP(A68_186 ) ;
(*RLFBTRN) = OLFBTRN ;
A_CALLPROC(NL(YKFBTRN_get_units),(A_UNITE(SLFBTRN,mode16,16,RLFBTRN), (*(&(MLFBTRN_el->Elem)))),(A_UNITE(SLFBTRN,mode16,16,RLFBTRN), (*(&(MLFBTRN_el->Elem))),(NL(YKFBTRN_get_units)).nonlocals));
 /* line 131: */
 /* line 132: */
MLFBTRN_el = (*(&(MLFBTRN_el->Rest)));
}
 /* line 133: */
 /* line 134: */
} 
break;
case 2: /* REF STRUCT(MODE138,MODE154)  */
TLFBTRN_row = (BLFBTRN.data.mode2);
 /* line 135: */
 /* line 136: */
VLFBTRN = TNMATRN_formula_int((*(&(TLFBTRN_row->Size))), NL(Msg));
for ( ULFBTRN_rind = 1;
ULFBTRN_rind <= VLFBTRN;
ULFBTRN_rind += 1 )
{ 
 /* line 137: */
WLFBTRN.Unit = U;
YLFBTRN = NNMATRN_makefint(ULFBTRN_rind) ;
WLFBTRN.Index = A_UNITE(XLFBTRN,mode1,1,YLFBTRN);
 /* line 138: */
 /* line 139: */
ZLFBTRN = A_HEAP(A68_186 ) ;
(*ZLFBTRN) = WLFBTRN ;
A_CALLPROC(NL(YKFBTRN_get_units),(A_UNITE(AMFBTRN,mode16,16,ZLFBTRN), (*(&(TLFBTRN_row->Elem)))),(A_UNITE(AMFBTRN,mode16,16,ZLFBTRN), (*(&(TLFBTRN_row->Elem))),(NL(YKFBTRN_get_units)).nonlocals));
}
 /* line 140: */
 /* line 141: */
break;
case 6: /* REF STRUCT(MODE138,MODE154)  */
BMFBTRN_tstring = (BLFBTRN.data.mode6);
 /* line 142: */
 /* line 143: */
DMFBTRN = TNMATRN_formula_int((*(&(BMFBTRN_tstring->Size))), NL(Msg));
for ( CMFBTRN_rind = 1;
CMFBTRN_rind <= DMFBTRN;
CMFBTRN_rind += 1 )
{ 
 /* line 144: */
EMFBTRN.Unit = U;
FMFBTRN.Int = CMFBTRN_rind;
FMFBTRN.Text = TTCAOST_nullid;
GMFBTRN = A_HEAP(A68_139 ) ;
(*GMFBTRN) = FMFBTRN ;
EMFBTRN.Index = A_UNITE(HMFBTRN,mode1,1,GMFBTRN);
 /* line 145: */
 /* line 146: */
IMFBTRN = A_HEAP(A68_186 ) ;
(*IMFBTRN) = EMFBTRN ;
A_CALLPROC(NL(YKFBTRN_get_units),(A_UNITE(JMFBTRN,mode16,16,IMFBTRN), (*(&(BMFBTRN_tstring->Char)))),(A_UNITE(JMFBTRN,mode16,16,IMFBTRN), (*(&(BMFBTRN_tstring->Char))),(NL(YKFBTRN_get_units)).nonlocals));
}
 /* line 147: */
 /* line 148: */
 /* line 149: */
break;
default: 
 /* line 150: */
 /* line 151: */
KMFBTRN = (*NL(TKFBTRN_unum))+=1 ;
LMFBTRN = (&A_VINDEX(NL(RKFBTRN_units),KMFBTRN)) ;
(*LMFBTRN) = U;
break;
} 
} 
A_PROC_EXIT(get_units);
return;
} 
#undef NL

A_STATIC A68_VOID  OMFBTRN_reform_units(A68_154  T, A68_176  *ReturnedValue, void *NonLocals)
#define NL(x) (((PMFBTRN_reform_units *)NonLocals)->x)
{ 
A68_428  TMFBTRN_make_row;   /* proc value of non-global proc */
A68_154  FNFBTRN;  /* united object - for case conformity */
A68_155 * GNFBTRN_tn;
A68_258  HNFBTRN;  /* OPERATORS - simple index */
A68_INT  INFBTRN;  /* YIELD */
A68_169 * JNFBTRN_td;
A68_167  KNFBTRN;  /* united object - for case conformity */
A68_163 * LNFBTRN_tt;
A68_176  MNFBTRN;  /* clause result */
A68_176  NNFBTRN;  /* avoid structure result */
A68_INT  ONFBTRN;  /* YIELD */
A68_159 * PNFBTRN_tbr;
A68_176  QNFBTRN;  /* avoid structure result */
A68_157 * RNFBTRN_str;
A68_157 * SNFBTRN_el;
A68_191 * TNFBTRN_su;
A68_191 ** UNFBTRN_stail;
A68_191  VNFBTRN;  /* collateral clause result */
A68_176  WNFBTRN;  /* avoid structure result */
A68_191 * XNFBTRN;  /* YIELD */
A68_176  YNFBTRN;  /* OPERATORS - mode -> union mode */
A68_156 * ZNFBTRN_row;
A68_176  AOFBTRN;  /* avoid structure result */
A68_160 * BOFBTRN_tstring;
A68_176  COFBTRN;  /* avoid structure result */
A68_INT  DOFBTRN;  /* YIELD */
A_PROC_ENTRY(reform_units);
 /* line 154: */
 /* line 155: */
{ 
A_CLOSURE( TMFBTRN_make_row, UMFBTRN_make_row, VMFBTRN_make_row );
(( VMFBTRN_make_row * ) ( TMFBTRN_make_row.nonlocals )) -> Msg = NL(Msg);
(( VMFBTRN_make_row * ) ( TMFBTRN_make_row.nonlocals )) -> NMFBTRN_reform_units = NL(NMFBTRN_reform_units);
 /* line 169: */
 /* line 170: */
FNFBTRN = T ;
switch ( FNFBTRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
GNFBTRN_tn = (FNFBTRN.data.mode1);
 /* line 171: */
{ 
HNFBTRN = (*(&(NL(JIFBTRN_env)->Types))) ;
INFBTRN = (*(&(GNFBTRN_tn->Typeno))) ;
JNFBTRN_td = (*(&A_VINDEX(HNFBTRN,INFBTRN)));
 /* line 173: */
 /* line 174: */
KNFBTRN = (*(&(JNFBTRN_td->Body))) ;
switch ( KNFBTRN.mode )
{ 
case 3: /* REF STRUCT(MODE154)  */
LNFBTRN_tt = (KNFBTRN.data.mode3);
 /* line 175: */
 /* line 176: */
A_CALLPROC(NL(NMFBTRN_reform_units),((*(&(LNFBTRN_tt->Tag))), &NNFBTRN),((*(&(LNFBTRN_tt->Tag))), &NNFBTRN,(NL(NMFBTRN_reform_units)).nonlocals));
MNFBTRN = NNFBTRN;
break;
default: 
 /* line 177: */
 /* line 178: */
 /* line 179: */
ONFBTRN = (*NL(UKFBTRN_ucnt))+=1 ;
MNFBTRN = (*(&A_VINDEX(NL(RKFBTRN_units),ONFBTRN)));
break;
} 
} 
break;
case 5: /* REF STRUCT(MODE154)  */
PNFBTRN_tbr = (FNFBTRN.data.mode5);
 /* line 180: */
A_CALLPROC(NL(NMFBTRN_reform_units),((*(&(PNFBTRN_tbr->Type))), &QNFBTRN),((*(&(PNFBTRN_tbr->Type))), &QNFBTRN,(NL(NMFBTRN_reform_units)).nonlocals));
MNFBTRN = QNFBTRN;
break;
case 3: /* REF STRUCT(MODE154,REF MODE157)  */
RNFBTRN_str = (FNFBTRN.data.mode3);
 /* line 181: */
{ 
SNFBTRN_el = RNFBTRN_str;
 /* line 182: */
TNFBTRN_su = IAAATRN_nilustr;
 /* line 183: */
UNFBTRN_stail = (&TNFBTRN_su);
 /* line 185: */
for ( ;; )
{ 
 /* line 186: */
 /* line 187: */
if ( !((SNFBTRN_el!=GAAATRN_niltstr)) ) break;
 /* line 188: */
A_CALLPROC(NL(NMFBTRN_reform_units),((*(&(SNFBTRN_el->Elem))), &WNFBTRN),((*(&(SNFBTRN_el->Elem))), &WNFBTRN,(NL(NMFBTRN_reform_units)).nonlocals));
VNFBTRN.Elem = WNFBTRN;
VNFBTRN.Rest = IAAATRN_nilustr;
XNFBTRN = A_HEAP(A68_191 ) ;
(*XNFBTRN) = VNFBTRN ;
(*UNFBTRN_stail) = XNFBTRN;
 /* line 189: */
UNFBTRN_stail = (&((*UNFBTRN_stail)->Rest));
 /* line 190: */
 /* line 191: */
SNFBTRN_el = (*(&(SNFBTRN_el->Rest)));
}
 /* line 192: */
 /* line 193: */
 /* line 194: */
MNFBTRN = A_UNITE(YNFBTRN,mode21,21,TNFBTRN_su);
} 
break;
case 2: /* REF STRUCT(MODE138,MODE154)  */
ZNFBTRN_row = (FNFBTRN.data.mode2);
 /* line 195: */
A_CALLPROC(TMFBTRN_make_row,((*(&(ZNFBTRN_row->Size))), (*(&(ZNFBTRN_row->Elem))), &AOFBTRN),((*(&(ZNFBTRN_row->Size))), (*(&(ZNFBTRN_row->Elem))), &AOFBTRN,(TMFBTRN_make_row).nonlocals));
MNFBTRN = AOFBTRN;
break;
case 6: /* REF STRUCT(MODE138,MODE154)  */
BOFBTRN_tstring = (FNFBTRN.data.mode6);
 /* line 196: */
 /* line 197: */
A_CALLPROC(TMFBTRN_make_row,((*(&(BOFBTRN_tstring->Size))), (*(&(BOFBTRN_tstring->Char))), &COFBTRN),((*(&(BOFBTRN_tstring->Size))), (*(&(BOFBTRN_tstring->Char))), &COFBTRN,(TMFBTRN_make_row).nonlocals));
MNFBTRN = COFBTRN;
break;
default: 
 /* line 198: */
 /* line 199: */
DOFBTRN = (*NL(UKFBTRN_ucnt))+=1 ;
MNFBTRN = (*(&A_VINDEX(NL(RKFBTRN_units),DOFBTRN)));
break;
} 
} 
A_PROC_EXIT(reform_units);
*ReturnedValue = (MNFBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  HOFBTRN_generator(A68_BOOL  FOFBTRN_anonymous, A68_254  *ReturnedValue, void *NonLocals)
#define NL(x) (((IOFBTRN_generator *)NonLocals)->x)
{ 
A68_254  JOFBTRN;  /* clause result */
A68_254  KOFBTRN;  /* OPERATORS - dynamic generator */
{ 
KOFBTRN.upb = (*NL(YJFBTRN_nametypes)).upb ;
( FOFBTRN_anonymous? A_VLOC(A68_251 ,KOFBTRN): A_VHEAP(A68_251 ,KOFBTRN) );
JOFBTRN = KOFBTRN;
} 
*ReturnedValue = (JOFBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  DKFBTRN_fnbody_proc(A68_248  Fbody, A68_360 * Tprocs, A68_354  *ReturnedValue, void *NonLocals)
#define NL(x) (((EKFBTRN_fnbody_proc *)NonLocals)->x)
{ 
A68_248  FKFBTRN;  /* united object - for case conformity */
A68_240 * GKFBTRN_rf;
A68_217 * HKFBTRN_ins;
A68_217 * IKFBTRN_outs;
A68_154  JKFBTRN;  /* avoid structure result */
A68_154  KKFBTRN_intype;
A68_425  MKFBTRN_generator;   /* proc value of non-global proc */
A68_424  SKFBTRN;  /* avoid structure result */
A68_424  RKFBTRN_units;
A68_INT  TKFBTRN_unum;
A68_INT  UKFBTRN_ucnt;
A68_251 * VKFBTRN_nt;
A68_426  YKFBTRN_get_units;   /* proc value of non-global proc */
A68_427  NMFBTRN_reform_units;   /* proc value of non-global proc */
A68_INT  EOFBTRN;  /* YIELD */
A68_429  GOFBTRN_generator;   /* proc value of non-global proc */
A68_254  LOFBTRN;  /* avoid structure result */
A68_INT  MOFBTRN;  /* YIELD */
A68_431  NOFBTRN;  /* collateral clause result */
A68_52  QOFBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  ROFBTRN;  /* YIELD */
A68_52  SOFBTRN;  /* OPERATORS - mode -> union mode */
A68_INT  TOFBTRN;  /* YIELD */
A68_85  UOFBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  VOFBTRN;  /* avoid structure result */
A68_VC * WOFBTRN;  /* YIELD */
A68_181  XOFBTRN;  /* collateral clause result */
A68_181 * YOFBTRN;  /* YIELD */
A68_176  ZOFBTRN;  /* OPERATORS - mode -> union mode */
A68_191 * APFBTRN_ans;
A68_191 ** BPFBTRN_tail;
A68_191  CPFBTRN;  /* collateral clause result */
A68_INT  DPFBTRN;  /* YIELD */
A68_176  EPFBTRN;  /* avoid structure result */
A68_191 * FPFBTRN;  /* YIELD */
A68_354  GPFBTRN;  /* collateral clause result */
A68_176  HPFBTRN;  /* clause result */
A68_176  IPFBTRN;  /* OPERATORS - mode -> union mode */
A68_248  JPFBTRN;  /* OPERATORS - mode -> union mode */
A68_221 * KPFBTRN;  /* YIELD */
A68_354  LPFBTRN;  /* clause result */
A68_354  MPFBTRN;  /* collateral clause result */
A_PROC_ENTRY(fnbody_proc);
 /* line 101: */
 /* line 102: */
FKFBTRN = Fbody ;
switch ( FKFBTRN.mode )
{ 
case 4: /* REF STRUCT(INT)  */
GKFBTRN_rf = (FKFBTRN.data.mode4);
 /* line 103: */
{ 
HKFBTRN_ins = (*(&(NL(Fdec)->Inputs)));
 /* line 104: */
IKFBTRN_outs = (*(&(NL(Fdec)->Outputs)));
 /* line 105: */
JTNATRN_names_type( HKFBTRN_ins, NL(Fdec), &JKFBTRN );
KKFBTRN_intype = JKFBTRN;
 /* line 106: */
A_CLOSURE( MKFBTRN_generator, NKFBTRN_generator, OKFBTRN_generator );
(( OKFBTRN_generator * ) ( MKFBTRN_generator.nonlocals )) -> QIFBTRN_reform_type_size = NL(QIFBTRN_reform_type_size);
(( OKFBTRN_generator * ) ( MKFBTRN_generator.nonlocals )) -> KKFBTRN_intype = KKFBTRN_intype;
A_CALLPROC(MKFBTRN_generator,(A68_TRUE, &SKFBTRN),(A68_TRUE, &SKFBTRN,(MKFBTRN_generator).nonlocals));
RKFBTRN_units = SKFBTRN;
 /* line 107: */
TKFBTRN_unum = 0;
UKFBTRN_ucnt = 0;
 /* line 108: */
 /* line 110: */
A_CLOSURE( YKFBTRN_get_units, ZKFBTRN_get_units, ALFBTRN_get_units );
(( ALFBTRN_get_units * ) ( YKFBTRN_get_units.nonlocals )) -> JIFBTRN_env = NL(JIFBTRN_env);
(( ALFBTRN_get_units * ) ( YKFBTRN_get_units.nonlocals )) -> YKFBTRN_get_units = YKFBTRN_get_units;
(( ALFBTRN_get_units * ) ( YKFBTRN_get_units.nonlocals )) -> RKFBTRN_units = RKFBTRN_units;
(( ALFBTRN_get_units * ) ( YKFBTRN_get_units.nonlocals )) -> TKFBTRN_unum = (&TKFBTRN_unum);
(( ALFBTRN_get_units * ) ( YKFBTRN_get_units.nonlocals )) -> Msg = NL(Msg);
 /* line 153: */
A_CLOSURE( NMFBTRN_reform_units, OMFBTRN_reform_units, PMFBTRN_reform_units );
(( PMFBTRN_reform_units * ) ( NMFBTRN_reform_units.nonlocals )) -> Msg = NL(Msg);
(( PMFBTRN_reform_units * ) ( NMFBTRN_reform_units.nonlocals )) -> NMFBTRN_reform_units = NMFBTRN_reform_units;
(( PMFBTRN_reform_units * ) ( NMFBTRN_reform_units.nonlocals )) -> JIFBTRN_env = NL(JIFBTRN_env);
(( PMFBTRN_reform_units * ) ( NMFBTRN_reform_units.nonlocals )) -> RKFBTRN_units = RKFBTRN_units;
(( PMFBTRN_reform_units * ) ( NMFBTRN_reform_units.nonlocals )) -> UKFBTRN_ucnt = (&UKFBTRN_ucnt);
 /* line 201: */
for ( ;; )
{ 
 /* line 202: */
 /* line 203: */
if ( !((HKFBTRN_ins!=NAAATRN_nilnames)) ) break;
EOFBTRN = (*(&(HKFBTRN_ins->Nameno))) ;
VKFBTRN_nt = (&A_VINDEX((*NL(YJFBTRN_nametypes)),EOFBTRN));
 /* line 204: */
 /* line 205: */
if ( ((*(&(VKFBTRN_nt->Name))).upb==0) )
{ 
 /* line 206: */
if ( !(*NL(ZJFBTRN_newtypes)) )
{ 
A_CLOSURE( GOFBTRN_generator, HOFBTRN_generator, IOFBTRN_generator );
(( IOFBTRN_generator * ) ( GOFBTRN_generator.nonlocals )) -> YJFBTRN_nametypes = NL(YJFBTRN_nametypes);
 /* line 207: */
A_CALLPROC(GOFBTRN_generator,(A68_FALSE, &LOFBTRN),(A68_FALSE, &LOFBTRN,(GOFBTRN_generator).nonlocals));
A_VASSIGN2((*NL(YJFBTRN_nametypes)),LOFBTRN,A68_251 ) ;
(*NL(YJFBTRN_nametypes)) = LOFBTRN;
 /* line 208: */
 /* line 209: */
MOFBTRN = (*(&(HKFBTRN_ins->Nameno))) ;
VKFBTRN_nt = (&A_VINDEX((*NL(YJFBTRN_nametypes)),MOFBTRN));
} 
 /* line 210: */
ROFBTRN = POFBTRN ;
NOFBTRN.data[0] = A_UNITE(QOFBTRN,mode7,7,ROFBTRN);
TOFBTRN = (*(&(HKFBTRN_ins->Nameno))) ;
NOFBTRN.data[1] = A_UNITE(SOFBTRN,mode1,1,TOFBTRN);
 /* line 211: */
UJBAOSL_oneline( A_HISVEC(UOFBTRN,NOFBTRN,2,A68_52 ), &VOFBTRN );
WOFBTRN = (&(VKFBTRN_nt->Name)) ;
(*WOFBTRN) = VOFBTRN;
} 
 /* line 212: */
XOFBTRN.Sort = KKAATRN_usource;
XOFBTRN.Nameno = (*(&(HKFBTRN_ins->Nameno)));
YOFBTRN = A_HEAP(A68_181 ) ;
(*YOFBTRN) = XOFBTRN ;
A_CALLPROC(YKFBTRN_get_units,(A_UNITE(ZOFBTRN,mode11,11,YOFBTRN), (*(&(VKFBTRN_nt->Type)))),(A_UNITE(ZOFBTRN,mode11,11,YOFBTRN), (*(&(VKFBTRN_nt->Type))),(YKFBTRN_get_units).nonlocals));
 /* line 213: */
 /* line 214: */
HKFBTRN_ins = (*(&(HKFBTRN_ins->Rest)));
}
 /* line 216: */
APFBTRN_ans = IAAATRN_nilustr;
 /* line 217: */
BPFBTRN_tail = (&APFBTRN_ans);
 /* line 219: */
for ( ;; )
{ 
 /* line 220: */
 /* line 221: */
if ( !((IKFBTRN_outs!=NAAATRN_nilnames)) ) break;
 /* line 222: */
 /* line 223: */
DPFBTRN = (*(&(IKFBTRN_outs->Nameno))) ;
A_CALLPROC(NMFBTRN_reform_units,((*(&((&A_VINDEX((*NL(YJFBTRN_nametypes)),DPFBTRN))->Type))), &EPFBTRN),((*(&((&A_VINDEX((*NL(YJFBTRN_nametypes)),DPFBTRN))->Type))), &EPFBTRN,(NMFBTRN_reform_units).nonlocals));
CPFBTRN.Elem = EPFBTRN;
CPFBTRN.Rest = IAAATRN_nilustr;
FPFBTRN = A_HEAP(A68_191 ) ;
(*FPFBTRN) = CPFBTRN ;
(*BPFBTRN_tail) = FPFBTRN;
 /* line 224: */
BPFBTRN_tail = (&((*BPFBTRN_tail)->Rest));
 /* line 225: */
 /* line 226: */
IKFBTRN_outs = (*(&(IKFBTRN_outs->Rest)));
}
 /* line 227: */
if ( ((*(&(APFBTRN_ans->Rest)))==IAAATRN_nilustr) )
{ 
HPFBTRN = (*(&(APFBTRN_ans->Elem)));
} 
else
{ 
HPFBTRN = A_UNITE(IPFBTRN,mode21,21,APFBTRN_ans);
} 
 /* line 228: */
KPFBTRN = WGAATRN_makeunittag(HPFBTRN) ;
GPFBTRN.F = A_UNITE(JPFBTRN,mode1,1,KPFBTRN);
 /* line 229: */
 /* line 230: */
GPFBTRN.C = A68_TRUE;
LPFBTRN = GPFBTRN;
} 
break;
default: 
MPFBTRN.F = Fbody;
 /* line 231: */
MPFBTRN.C = A68_FALSE;
LPFBTRN = MPFBTRN;
break;
} 
A_PROC_EXIT(fnbody_proc);
*ReturnedValue = (LPFBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  VHFBTRN_generator(A68_BOOL  UHFBTRN_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  WHFBTRN;  /* clause result */
A68_VC  XHFBTRN;  /* OPERATORS - dynamic generator */
{ 
XHFBTRN.upb = 0 ;
( UHFBTRN_anonymous? A_VLOC(A68_CHAR ,XHFBTRN): A_VHEAP(A68_CHAR ,XHFBTRN) );
WHFBTRN = XHFBTRN;
} 
*ReturnedValue = (WHFBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  MIFBTRN_sysfault(A68_VC  Text, void *NonLocals)
#define NL(x) (((NIFBTRN_sysfault *)NonLocals)->x)
{ 
A68_46  OIFBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(sysfault);
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(OIFBTRN,Text,A68_VC )),(SHAAOSI_system, A_HVEC(OIFBTRN,Text,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(sysfault);
return;
} 
#undef NL

A_STATIC A68_INT  RIFBTRN_reform_type_size(A68_154  T, void *NonLocals)
#define NL(x) (((SIFBTRN_reform_type_size *)NonLocals)->x)
{ 
A68_154  TIFBTRN;  /* united object - for case conformity */
A68_155 * UIFBTRN_tn;
A68_258  VIFBTRN;  /* OPERATORS - simple index */
A68_INT  WIFBTRN;  /* YIELD */
A68_169 * XIFBTRN_td;
A68_167  YIFBTRN;  /* united object - for case conformity */
A68_163 * ZIFBTRN_tt;
A68_INT  AJFBTRN;  /* clause result */
A68_156 * BJFBTRN_trow;
A68_157 * CJFBTRN_tstr;
A68_157 * DJFBTRN_el;
A68_INT  EJFBTRN_size;
A68_158 * FJFBTRN_tfn;
A68_159 * GJFBTRN_tbr;
A68_160 * HJFBTRN_tstring;
A68_162 * IJFBTRN_tnl;
A68_INT  LJFBTRN;  /* OPERATORS - skip to mode */
A68_161 * MJFBTRN_tv;
A68_INT  PJFBTRN;  /* OPERATORS - skip to mode */
A68_INT  SJFBTRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(reform_type_size);
 /* line 61: */
 /* line 62: */
TIFBTRN = T ;
switch ( TIFBTRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
UIFBTRN_tn = (TIFBTRN.data.mode1);
 /* line 63: */
{ 
VIFBTRN = (*(&(NL(JIFBTRN_env)->Types))) ;
WIFBTRN = (*(&(UIFBTRN_tn->Typeno))) ;
XIFBTRN_td = (*(&A_VINDEX(VIFBTRN,WIFBTRN)));
 /* line 65: */
 /* line 66: */
YIFBTRN = (*(&(XIFBTRN_td->Body))) ;
switch ( YIFBTRN.mode )
{ 
case 3: /* REF STRUCT(MODE154)  */
ZIFBTRN_tt = (YIFBTRN.data.mode3);
 /* line 67: */
 /* line 69: */
AJFBTRN = A_CALLPROC(NL(QIFBTRN_reform_type_size),((*(&(ZIFBTRN_tt->Tag)))),((*(&(ZIFBTRN_tt->Tag))),(NL(QIFBTRN_reform_type_size)).nonlocals));
break;
default: 
 /* line 70: */
 /* line 71: */
AJFBTRN = 1;
break;
} 
} 
break;
case 2: /* REF STRUCT(MODE138,MODE154)  */
BJFBTRN_trow = (TIFBTRN.data.mode2);
 /* line 72: */
 /* line 73: */
AJFBTRN = (TNMATRN_formula_int((*(&(BJFBTRN_trow->Size))), NL(Msg))*A_CALLPROC(NL(QIFBTRN_reform_type_size),((*(&(BJFBTRN_trow->Elem)))),((*(&(BJFBTRN_trow->Elem))),(NL(QIFBTRN_reform_type_size)).nonlocals)));
break;
case 3: /* REF STRUCT(MODE154,REF MODE157)  */
CJFBTRN_tstr = (TIFBTRN.data.mode3);
 /* line 74: */
{ 
DJFBTRN_el = CJFBTRN_tstr;
 /* line 75: */
EJFBTRN_size = 0;
 /* line 77: */
for ( ;; )
{ 
 /* line 78: */
 /* line 79: */
if ( !((DJFBTRN_el!=GAAATRN_niltstr)) ) break;
EJFBTRN_size+=A_CALLPROC(NL(QIFBTRN_reform_type_size),((*(&(DJFBTRN_el->Elem)))),((*(&(DJFBTRN_el->Elem))),(NL(QIFBTRN_reform_type_size)).nonlocals));
 /* line 80: */
 /* line 81: */
DJFBTRN_el = (*(&(DJFBTRN_el->Rest)));
}
 /* line 82: */
 /* line 83: */
 /* line 84: */
AJFBTRN = EJFBTRN_size;
} 
break;
case 4: /* REF STRUCT(MODE154,MODE154)  */
FJFBTRN_tfn = (TIFBTRN.data.mode4);
 /* line 85: */
AJFBTRN = 1;
break;
case 5: /* REF STRUCT(MODE154)  */
GJFBTRN_tbr = (TIFBTRN.data.mode5);
 /* line 86: */
AJFBTRN = A_CALLPROC(NL(QIFBTRN_reform_type_size),((*(&(GJFBTRN_tbr->Type)))),((*(&(GJFBTRN_tbr->Type))),(NL(QIFBTRN_reform_type_size)).nonlocals));
break;
case 6: /* REF STRUCT(MODE138,MODE154)  */
HJFBTRN_tstring = (TIFBTRN.data.mode6);
 /* line 87: */
 /* line 88: */
AJFBTRN = (TNMATRN_formula_int((*(&(HJFBTRN_tstring->Size))), NL(Msg))*A_CALLPROC(NL(QIFBTRN_reform_type_size),((*(&(HJFBTRN_tstring->Char)))),((*(&(HJFBTRN_tstring->Char))),(NL(QIFBTRN_reform_type_size)).nonlocals)));
break;
case 9: /* REF STRUCT(INT)  */
IJFBTRN_tnl = (TIFBTRN.data.mode9);
{ 
A_CALLPROC(NL(LIFBTRN_sysfault),(KJFBTRN),(KJFBTRN,(NL(LIFBTRN_sysfault)).nonlocals));
 /* line 89: */
AJFBTRN = LJFBTRN;
} 
break;
case 7: /* REF STRUCT(INT)  */
MJFBTRN_tv = (TIFBTRN.data.mode7);
{ 
A_CALLPROC(NL(LIFBTRN_sysfault),(OJFBTRN),(OJFBTRN,(NL(LIFBTRN_sysfault)).nonlocals));
 /* line 90: */
 /* line 91: */
AJFBTRN = PJFBTRN;
} 
break;
default: 
A_CALLPROC(NL(LIFBTRN_sysfault),(RJFBTRN),(RJFBTRN,(NL(LIFBTRN_sysfault)).nonlocals));
 /* line 92: */
 /* line 93: */
AJFBTRN = SJFBTRN;
break;
} 
A_PROC_EXIT(reform_type_size);
return( AJFBTRN );
} 
#undef NL

A_STATIC A68_VOID  WJFBTRN_fndec_reform(A68_252 * Fdec, A68_360 * Dec_tprocs, A68_357  *ReturnedValue, void *NonLocals)
#define NL(x) (((XJFBTRN_fndec_reform *)NonLocals)->x)
{ 
A68_254  YJFBTRN_nametypes;
A68_BOOL  ZJFBTRN_newtypes;
A68_397  CKFBTRN_fnbody_proc;   /* proc value of non-global proc */
A68_405  NPFBTRN;  /* OPERATORS - mode -> union mode */
A68_397  OPFBTRN;  /* YIELD */
A68_404  PPFBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_360 * QPFBTRN_newtprocs;
A68_397  RPFBTRN;  /* CALL */
A68_354  SPFBTRN;  /* avoid structure result */
A68_354  TPFBTRN_bc;
A68_252 * VPFBTRN;  /* YIELD */
A68_252 * UPFBTRN_new;
A68_254 * WPFBTRN;  /* YIELD */
A68_248 * XPFBTRN;  /* YIELD */
A68_357  YPFBTRN;  /* collateral clause result */
A68_357  ZPFBTRN;  /* clause result */
A68_357  AQFBTRN;  /* collateral clause result */
A_PROC_ENTRY(fndec_reform);
 /* line 96: */
 /* line 97: */
{ 
YJFBTRN_nametypes = (*(&(Fdec->Nametypes)));
 /* line 98: */
ZJFBTRN_newtypes = A68_FALSE;
 /* line 100: */
A_CLOSURE( CKFBTRN_fnbody_proc, DKFBTRN_fnbody_proc, EKFBTRN_fnbody_proc );
(( EKFBTRN_fnbody_proc * ) ( CKFBTRN_fnbody_proc.nonlocals )) -> Fdec = Fdec;
(( EKFBTRN_fnbody_proc * ) ( CKFBTRN_fnbody_proc.nonlocals )) -> QIFBTRN_reform_type_size = NL(QIFBTRN_reform_type_size);
(( EKFBTRN_fnbody_proc * ) ( CKFBTRN_fnbody_proc.nonlocals )) -> JIFBTRN_env = NL(JIFBTRN_env);
(( EKFBTRN_fnbody_proc * ) ( CKFBTRN_fnbody_proc.nonlocals )) -> Msg = NL(Msg);
(( EKFBTRN_fnbody_proc * ) ( CKFBTRN_fnbody_proc.nonlocals )) -> YJFBTRN_nametypes = (&YJFBTRN_nametypes);
(( EKFBTRN_fnbody_proc * ) ( CKFBTRN_fnbody_proc.nonlocals )) -> ZJFBTRN_newtypes = (&ZJFBTRN_newtypes);
 /* line 233: */
OPFBTRN = CKFBTRN_fnbody_proc ;
QPFBTRN_newtprocs = THJATRN_make_newtprocs(Dec_tprocs, A_HVEC(PPFBTRN,A_UNITE(NPFBTRN,mode37,37,OPFBTRN),A68_405 ));
 /* line 234: */
RPFBTRN = (*(&(QPFBTRN_newtprocs->Fnbody))) ;
A_CALLPROC(RPFBTRN,((*(&(Fdec->Fnbody))), QPFBTRN_newtprocs, &SPFBTRN),((*(&(Fdec->Fnbody))), QPFBTRN_newtprocs, &SPFBTRN,(RPFBTRN).nonlocals));
TPFBTRN_bc = SPFBTRN;
 /* line 236: */
 /* line 237: */
if ( TPFBTRN_bc.C )
{ 
VPFBTRN = A_HEAP(A68_252 ) ;
(*VPFBTRN) = (*Fdec) ;
UPFBTRN_new = VPFBTRN;
 /* line 239: */
WPFBTRN = (&(UPFBTRN_new->Nametypes)) ;
(*WPFBTRN) = YJFBTRN_nametypes;
 /* line 240: */
XPFBTRN = (&(UPFBTRN_new->Fnbody)) ;
(*XPFBTRN) = TPFBTRN_bc.F;
 /* line 241: */
YPFBTRN.F = UPFBTRN_new;
 /* line 242: */
 /* line 243: */
YPFBTRN.C = A68_TRUE;
ZPFBTRN = YPFBTRN;
} 
else
{ 
AQFBTRN.F = Fdec;
 /* line 244: */
 /* line 245: */
AQFBTRN.C = A68_FALSE;
ZPFBTRN = AQFBTRN;
} 
} 
A_PROC_EXIT(fndec_reform);
*ReturnedValue = (ZPFBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  UQFBTRN_anonymous(A68_261  Outer, A68_360 * Tprocs, A68_358  *ReturnedValue, void *NonLocals)
#define NL(x) (((VQFBTRN_anonymous *)NonLocals)->x)
{ 
A68_358  WQFBTRN;  /* clause result */
A68_358  XQFBTRN;  /* avoid structure result */
 /* line 260: */
IIFBTRN_outer_reform( Outer, NL(Closure), NL(Options), NL(Msg), &XQFBTRN );
WQFBTRN = XQFBTRN;
*ReturnedValue = (WQFBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  RHFBTRN_generator(A68_BOOL  QHFBTRN_anonymous, A68_46  *ReturnedValue)
{ 
A68_46  THFBTRN;  /* OPERATORS - dynamic generator */
A68_419  SHFBTRN_anonymous;
A68_418 * YHFBTRN_anonymous;
A68_INT  ZHFBTRN;  /* forall loop counter */
A68_VC  AIFBTRN;  /* avoid structure result */
A68_46  BIFBTRN;  /* clause result */
{ 
THFBTRN.upb = 0 ;
( QHFBTRN_anonymous? A_VLOC(A68_VC ,THFBTRN): A_VHEAP(A68_VC ,THFBTRN) );
SHFBTRN_anonymous = THFBTRN;
ZHFBTRN = (*(&SHFBTRN_anonymous)).upb -1;
YHFBTRN_anonymous = (*(&SHFBTRN_anonymous)).data;
for (;ZHFBTRN-- >= 0;
(YHFBTRN_anonymous++
) )
{
VHFBTRN_generator( QHFBTRN_anonymous, &AIFBTRN );
(*YHFBTRN_anonymous) = AIFBTRN;
}
BIFBTRN = SHFBTRN_anonymous;
} 
*ReturnedValue = (BIFBTRN);
return;
} 
#undef NL
 /* line 53: */
 /* line 54: */
 /* line 55: */

A68_VOID  IIFBTRN_outer_reform(A68_261  Outer, A68_265 * Closure, A68_408  Options, A68_108  Msg, A68_358  *ReturnedValue)
{ 
A68_255 * JIFBTRN_env;
A68_36  LIFBTRN_sysfault;   /* proc value of non-global proc */
A68_421  QIFBTRN_reform_type_size;   /* proc value of non-global proc */
A68_400  VJFBTRN_fndec_reform;   /* proc value of non-global proc */
A68_432  BQFBTRN;  /* collateral clause result */
A68_405  CQFBTRN;  /* OPERATORS - mode -> union mode */
A68_364  DQFBTRN;  /* procedure value */
A68_405  EQFBTRN;  /* OPERATORS - mode -> union mode */
A68_370  FQFBTRN;  /* procedure value */
A68_405  GQFBTRN;  /* OPERATORS - mode -> union mode */
A68_400  HQFBTRN;  /* YIELD */
A68_404  IQFBTRN;  /* OPERATORS - istruct -> vector */
A68_360 * JQFBTRN_newtprocs;
A68_358  KQFBTRN;  /* clause result */
A68_401  LQFBTRN;  /* CALL */
A68_358  MQFBTRN;  /* avoid structure result */
A_PROC_ENTRY(outer_reform);
 /* line 56: */
 /* line 57: */
{ 
JIFBTRN_env = Outer.Environ;
 /* line 58: */
A_CLOSURE( LIFBTRN_sysfault, MIFBTRN_sysfault, NIFBTRN_sysfault );
(( NIFBTRN_sysfault * ) ( LIFBTRN_sysfault.nonlocals )) -> Msg = Msg;
 /* line 60: */
A_CLOSURE( QIFBTRN_reform_type_size, RIFBTRN_reform_type_size, SIFBTRN_reform_type_size );
(( SIFBTRN_reform_type_size * ) ( QIFBTRN_reform_type_size.nonlocals )) -> JIFBTRN_env = JIFBTRN_env;
(( SIFBTRN_reform_type_size * ) ( QIFBTRN_reform_type_size.nonlocals )) -> QIFBTRN_reform_type_size = QIFBTRN_reform_type_size;
(( SIFBTRN_reform_type_size * ) ( QIFBTRN_reform_type_size.nonlocals )) -> Msg = Msg;
(( SIFBTRN_reform_type_size * ) ( QIFBTRN_reform_type_size.nonlocals )) -> LIFBTRN_sysfault = LIFBTRN_sysfault;
 /* line 95: */
A_CLOSURE( VJFBTRN_fndec_reform, WJFBTRN_fndec_reform, XJFBTRN_fndec_reform );
(( XJFBTRN_fndec_reform * ) ( VJFBTRN_fndec_reform.nonlocals )) -> QIFBTRN_reform_type_size = QIFBTRN_reform_type_size;
(( XJFBTRN_fndec_reform * ) ( VJFBTRN_fndec_reform.nonlocals )) -> JIFBTRN_env = JIFBTRN_env;
(( XJFBTRN_fndec_reform * ) ( VJFBTRN_fndec_reform.nonlocals )) -> Msg = Msg;
 /* line 247: */
 /* line 248: */
DQFBTRN.fn.fn_global = IWLATRN_null_formula;
DQFBTRN.nonlocals = A68_NIL;
BQFBTRN.data[0] = A_UNITE(CQFBTRN,mode4,4,DQFBTRN);
 /* line 249: */
FQFBTRN.fn.fn_global = NWLATRN_null_type;
FQFBTRN.nonlocals = A68_NIL;
BQFBTRN.data[1] = A_UNITE(EQFBTRN,mode10,10,FQFBTRN);
HQFBTRN = VJFBTRN_fndec_reform ;
BQFBTRN.data[2] = A_UNITE(GQFBTRN,mode40,40,HQFBTRN);
JQFBTRN_newtprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HISVEC(IQFBTRN,BQFBTRN,3,A68_405 ));
 /* line 251: */
 /* line 252: */
LQFBTRN = (*(&(AWLATRN_nulltprocs->Outer))) ;
A_CALLPROC(LQFBTRN,(Outer, JQFBTRN_newtprocs, &MQFBTRN),(Outer, JQFBTRN_newtprocs, &MQFBTRN,(LQFBTRN).nonlocals));
KQFBTRN = MQFBTRN;
} 
A_PROC_EXIT(outer_reform);
*ReturnedValue = (KQFBTRN);
return;
} 
#undef NL
 /* line 255: */
 /* line 256: */

A68_VOID  QQFBTRN_transform_reform(A68_265 * Closure, A68_408  Options, A68_108  Msg, A68_359  *ReturnedValue)
{ 
A68_401  TQFBTRN_anonymous;   /* proc value of non-global proc */
A68_405  YQFBTRN;  /* OPERATORS - mode -> union mode */
A68_401  ZQFBTRN;  /* YIELD */
A68_404  ARFBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_360 * BRFBTRN_newtprocs;
A68_359  CRFBTRN;  /* clause result */
A68_402  DRFBTRN;  /* CALL */
A68_359  ERFBTRN;  /* avoid structure result */
A_PROC_ENTRY(transform_reform);
 /* line 257: */
 /* line 258: */
{ 
 /* line 259: */
A_CLOSURE( TQFBTRN_anonymous, UQFBTRN_anonymous, VQFBTRN_anonymous );
(( VQFBTRN_anonymous * ) ( TQFBTRN_anonymous.nonlocals )) -> Closure = Closure;
(( VQFBTRN_anonymous * ) ( TQFBTRN_anonymous.nonlocals )) -> Options = Options;
(( VQFBTRN_anonymous * ) ( TQFBTRN_anonymous.nonlocals )) -> Msg = Msg;
ZQFBTRN = TQFBTRN_anonymous ;
BRFBTRN_newtprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HVEC(ARFBTRN,A_UNITE(YQFBTRN,mode41,41,ZQFBTRN),A68_405 ));
 /* line 262: */
 /* line 263: */
DRFBTRN = (*(&(AWLATRN_nulltprocs->Closure))) ;
A_CALLPROC(DRFBTRN,(Closure, BRFBTRN_newtprocs, Msg, &ERFBTRN),(Closure, BRFBTRN_newtprocs, Msg, &ERFBTRN,(DRFBTRN).nonlocals));
CRFBTRN = ERFBTRN;
} 
A_PROC_EXIT(transform_reform);
*ReturnedValue = (CRFBTRN);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void LHFBTRN(void)   /* initialise DECS reform */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/reform.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/ostools/assoc/mfiles/options.m","./mfiles/transformprocs.m","./mfiles/modeprocs.m","./mfiles/assmodes.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_46  DIFBTRN;  /* avoid structure result */
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
A_config.source_file = "/import/hazel/home/export/model/ella/transform/assoc/./a68files/reform.a68";
A_config.translation_time = "Tue Apr  4 10:06:16 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "KHFBTRN (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:06:16 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS reform);
UEAALIB_a68config(LGAALIB_configinfo, PHFBTRN);
 /* line 50: */
RHFBTRN_generator( A68_TRUE, &DIFBTRN );
CIFBTRN_reform_options = DIFBTRN;
 /* line 52: */
 /* line 254: */
 /* line 265: */
 /* line 266: */
 /* line 267: */
/*SKIP*/;
A_PROC_EXIT(DECS reform);
} 
#undef NL
/* end of translation of ./a68files/reform.a68 */
