
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
/* UNAME:MTBBTRN */
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
A_ISTRUCT(A68_CHAR ,52,A68t417);
typedef struct A68t417  A68_417 ;    /* STRUCT 52 CHAR */
struct A68t420{
struct A68t176 * Ru;
struct A68t419 * Rs;
};
typedef struct A68t420  A68_420 ;    /* STRUCT(REF MODE176,REF MODE419)  */
struct A68t419{
struct A68t420  Elem;
struct A68t419 * Rest;
};
typedef struct A68t419  A68_419 ;    /* STRUCT(MODE420,REF MODE419)  */
struct A68t421{
struct A68t176  U;
struct A68t419 * Rs;
};
typedef struct A68t421  A68_421 ;    /* STRUCT(MODE176,REF MODE419)  */
struct A68t422{
A68_INT  Sort;
A_PAD_INT(PAD_137)
A68_INT  Seriesid;
A_PAD_INT(PAD_138)
A68_INT  Ndim;
A_PAD_INT(PAD_139)
struct A68t150 * Dimentions;
struct A68t176  Source;
struct A68t420  Refsrc;
};
typedef struct A68t422  A68_422 ;    /* STRUCT(INT,INT,INT,REF MODE150,MODE176,MODE420)  */

A_PROCEDURE(A68_VOID ,A68t423,(struct A68t408 *),(struct A68t408 *,void *));
typedef struct A68t423  A68_423 ;    /* PROC MODE408 */
A_ISTRUCT(A68_CHAR ,63,A68t424);
typedef struct A68t424  A68_424 ;    /* STRUCT 63 CHAR */
A_ISTRUCT(A68_CHAR ,39,A68t425);
typedef struct A68t425  A68_425 ;    /* STRUCT 39 CHAR */
A_ISTRUCT(A68_VC ,2,A68t426);
typedef struct A68t426  A68_426 ;    /* STRUCT 2 MODE26 */
A_ISTRUCT(A68_CHAR ,2,A68t427);
typedef struct A68t427  A68_427 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t428);
typedef struct A68t428  A68_428 ;    /* STRUCT 2 MODE52 */

A_PROCEDURE(A68_VOID ,A68t429,(struct A68t261 ,struct A68t265 *,struct A68t408 ,struct A68t108 ,struct A68t358 *),(struct A68t261 ,struct A68t265 *,struct A68t408 ,struct A68t108 ,struct A68t358 *,void *));
typedef struct A68t429  A68_429 ;    /* PROC(MODE261,REF MODE265,MODE408,MODE108) MODE358 */
A_VECTOR(struct A68t422 ,A68t430);
typedef struct A68t430  A68_430 ;    /* VECTOR [] MODE422 */

A_PROCEDURE(A68_VOID ,A68t431,(A68_BOOL ,struct A68t430 *),(A68_BOOL ,struct A68t430 *,void *));
typedef struct A68t431  A68_431 ;    /* PROC(BOOL) MODE430 */

A_PROCEDURE(A68_VOID ,A68t432,(A68_INT ,struct A68t422 *,struct A68t150 *,A68_INT ),(A68_INT ,struct A68t422 *,struct A68t150 *,A68_INT ,void *));
typedef struct A68t432  A68_432 ;    /* PROC(INT,REF MODE422,REF MODE150,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t433,(struct A68t176 ,A68_INT ),(struct A68t176 ,A68_INT ,void *));
typedef struct A68t433  A68_433 ;    /* PROC(MODE176,INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t434,(struct A68t176 ),(struct A68t176 ,void *));
typedef struct A68t434  A68_434 ;    /* PROC(MODE176) BOOL */
struct A68t435 { A68_INT mode; union {
struct A68t203 * mode1;
struct A68t193 * mode2;
struct A68t194 * mode3;
struct A68t199 * mode4;
struct A68t198 * mode5;
struct A68t195 * mode6;
struct A68t192 * mode7;
} data; };
typedef struct A68t435  A68_435 ;    /* UNION(REF MODE203,REF MODE193,REF MODE194,REF MODE199,REF MODE198,REF MODE195,REF MODE192)  */
A_ISTRUCT(struct A68t405 ,2,A68t436);
typedef struct A68t436  A68_436 ;    /* STRUCT 2 MODE405 */

A_PROCEDURE(A68_VOID ,A68t437,(struct A68t154 ,struct A68t421 *),(struct A68t154 ,struct A68t421 *,void *));
typedef struct A68t437  A68_437 ;    /* PROC(MODE154) MODE421 */

A_PROCEDURE(A68_VOID ,A68t438,(struct A68t154 ,struct A68t138 ,struct A68t421 *),(struct A68t154 ,struct A68t138 ,struct A68t421 *,void *));
typedef struct A68t438  A68_438 ;    /* PROC(MODE154,MODE138) MODE421 */

A_PROCEDURE(A68_VOID ,A68t439,(struct A68t157 *,struct A68t421 *),(struct A68t157 *,struct A68t421 *,void *));
typedef struct A68t439  A68_439 ;    /* PROC(REF MODE157) MODE421 */
A_ISTRUCT(A68_CHAR ,9,A68t440);
typedef struct A68t440  A68_440 ;    /* STRUCT 9 CHAR */

A_PROCEDURE(A68_VOID ,A68t441,(struct A68t176 *,struct A68t420 *),(struct A68t176 *,struct A68t420 *,void *));
typedef struct A68t441  A68_441 ;    /* PROC(REF MODE176) MODE420 */

A_PROCEDURE(A68_VOID ,A68t442,(struct A68t192 *,struct A68t420 *),(struct A68t192 *,struct A68t420 *,void *));
typedef struct A68t442  A68_442 ;    /* PROC(REF MODE192) MODE420 */

A_PROCEDURE(A68_VOID ,A68t443,(struct A68t420 ,A68_INT ),(struct A68t420 ,A68_INT ,void *));
typedef struct A68t443  A68_443 ;    /* PROC(MODE420,INT) VOID */
A_ISTRUCT(A68_CHAR ,30,A68t444);
typedef struct A68t444  A68_444 ;    /* STRUCT 30 CHAR */

A_PROCEDURE(A68_VOID ,A68t445,(struct A68t420 ,struct A68t138 ,struct A68t420 *),(struct A68t420 ,struct A68t138 ,struct A68t420 *,void *));
typedef struct A68t445  A68_445 ;    /* PROC(MODE420,MODE138) MODE420 */
A_ISTRUCT(A68_CHAR ,31,A68t446);
typedef struct A68t446  A68_446 ;    /* STRUCT 31 CHAR */

A_PROCEDURE(A68_VOID ,A68t447,(struct A68t420 ,struct A68t153 ,struct A68t420 *),(struct A68t420 ,struct A68t153 ,struct A68t420 *,void *));
typedef struct A68t447  A68_447 ;    /* PROC(MODE420,MODE153) MODE420 */

A_PROCEDURE(A68_VOID ,A68t448,(struct A68t191 *,struct A68t420 *),(struct A68t191 *,struct A68t420 *,void *));
typedef struct A68t448  A68_448 ;    /* PROC(REF MODE191) MODE420 */

A_PROCEDURE(A68_VOID ,A68t449,(struct A68t190 *,struct A68t420 *),(struct A68t190 *,struct A68t420 *,void *));
typedef struct A68t449  A68_449 ;    /* PROC(REF MODE190) MODE420 */
A_ISTRUCT(A68_CHAR ,27,A68t450);
typedef struct A68t450  A68_450 ;    /* STRUCT 27 CHAR */

A_PROCEDURE(A68_VOID ,A68t451,(struct A68t199 *,struct A68t360 *,struct A68t336 *),(struct A68t199 *,struct A68t360 *,struct A68t336 *,void *));
typedef struct A68t451  A68_451 ;    /* PROC(REF MODE199,REF MODE360) MODE336 */

A_PROCEDURE(A68_VOID ,A68t452,(struct A68t206 ),(struct A68t206 ,void *));
typedef struct A68t452  A68_452 ;    /* PROC(MODE206) VOID */

A_PROCEDURE(A68_VOID ,A68t453,(struct A68t176 ,A68_INT ,struct A68t176 *),(struct A68t176 ,A68_INT ,struct A68t176 *,void *));
typedef struct A68t453  A68_453 ;    /* PROC(MODE176,INT) MODE176 */

A_PROCEDURE(struct A68t176 *,A68t454,(struct A68t176 *),(struct A68t176 *,void *));
typedef struct A68t454  A68_454 ;    /* PROC(REF MODE176) REF MODE176 */

A_PROCEDURE(A68_VOID ,A68t455,(struct A68t216 ,struct A68t154 ,struct A68t150 *,struct A68t421 *),(struct A68t216 ,struct A68t154 ,struct A68t150 *,struct A68t421 *,void *));
typedef struct A68t455  A68_455 ;    /* PROC(MODE216,MODE154,REF MODE150) MODE421 */

A_PROCEDURE(A68_VOID ,A68t456,(struct A68t211 *),(struct A68t211 *,void *));
typedef struct A68t456  A68_456 ;    /* PROC(REF MODE211) VOID */

A_PROCEDURE(A68_VOID ,A68t457,(struct A68t217 *),(struct A68t217 *,void *));
typedef struct A68t457  A68_457 ;    /* PROC(REF MODE217) VOID */

A_PROCEDURE(A68_VOID ,A68t458,(struct A68t212 *),(struct A68t212 *,void *));
typedef struct A68t458  A68_458 ;    /* PROC(REF MODE212) VOID */

A_PROCEDURE(A68_VOID ,A68t459,(struct A68t176 ,struct A68t420 ),(struct A68t176 ,struct A68t420 ,void *));
typedef struct A68t459  A68_459 ;    /* PROC(MODE176,MODE420) VOID */

A_PROCEDURE(A68_VOID ,A68t460,(struct A68t150 *,struct A68t176 ,struct A68t176 ),(struct A68t150 *,struct A68t176 ,struct A68t176 ,void *));
typedef struct A68t460  A68_460 ;    /* PROC(REF MODE150,MODE176,MODE176) VOID */

A_PROCEDURE(A68_VOID ,A68t461,(struct A68t422 *,A68_INT ),(struct A68t422 *,A68_INT ,void *));
typedef struct A68t461  A68_461 ;    /* PROC(REF MODE422,INT) VOID */
A_ISTRUCT(struct A68t405 ,5,A68t462);
typedef struct A68t462  A68_462 ;    /* STRUCT 5 MODE405 */

A_PROCEDURE(A68_VOID ,A68t463,(A68_INT ),(A68_INT ,void *));
typedef struct A68t463  A68_463 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t464,(A68_BOOL ,struct A68t254 *),(A68_BOOL ,struct A68t254 *,void *));
typedef struct A68t464  A68_464 ;    /* PROC(BOOL) MODE254 */

A_PROCEDURE(A68_VOID ,A68t465,(struct A68t265 *,struct A68t408 ,struct A68t108 ,struct A68t359 *),(struct A68t265 *,struct A68t408 ,struct A68t108 ,struct A68t359 *,void *));
typedef struct A68t465  A68_465 ;    /* PROC(REF MODE265,MODE408,MODE108) MODE359 */

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
extern A68_139 * NNMATRN_makefint(A68_INT );
extern A68_INT  TNMATRN_formula_int(struct A68t138 ,struct A68t108 );
extern A68_INT  XOMATRN_int(struct A68t138 );
extern A68_VOID  VUNATRN_unit_type(struct A68t176 ,struct A68t252 *,struct A68t255 *,A68_154 *);
/* --- End of imports from modeprocs --- */


/* --- Imports from assmodes --- */
extern A68_VC  TTCAOST_nullid;
extern A68_157 * GAAATRN_niltstr;
extern A68_191 * IAAATRN_nilustr;
extern A68_128 * OAAATRN_nilints;
extern A68_217 * NAAATRN_nilnames;
extern A68_205 * SAAATRN_nilseries;
extern A68_150 * BBAATRN_nilformulas;
extern A68_134  ZHAATRN_attrnull;
extern A68_204  FIAATRN_unull;
extern A68_178  RIAATRN_cvoid;
#define TIAATRN_flattenleft 1
#define UIAATRN_flattenright 2
#define VIAATRN_flattenboth 3
#define KKAATRN_usource 1
#define LKAATRN_usink 2
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
extern void BAAAOST(void);   /* options */
extern void IHJATRN(void);   /* transformprocs */
extern void HNMATRN(void);   /* modeprocs */
extern void BAAATRN(void);   /* assmodes */
extern void JFAAOSI(void);   /* messageproc */
extern void JSCAOST(void);   /* basics */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_417   QTBBTRN = {"$Id: joins.a68,v 34.4 1995/03/29 13:02:55 ella Exp $"}; 
A_GISVEC(A68_VC ,RTBBTRN,QTBBTRN,52)
#define STBBTRN_name_in 1
#define TTBBTRN_name_out 2
#define UTBBTRN_name_other 3
#define VTBBTRN_nilmake (A68_211 *)A68_NIL
#define WTBBTRN_nilrhslist (A68_419 *)A68_NIL
static A68_424   EUBBTRN = {"Replace MAKEs & JOINs by LETS having the same name as the MAKE."}; 
A_GISVEC(A68_VC ,FUBBTRN,EUBBTRN,63)
static A68_425   GUBBTRN = {"Remove output names from function specs"}; 
A_GISVEC(A68_VC ,HUBBTRN,GUBBTRN,39)
A68_46  JUBBTRN_joins_options;
static A68_427   NUBBTRN = {"_j"}; 
A_GISVEC(A68_VC ,OUBBTRN,NUBBTRN,2)
static A68_440   SECBTRN = {"type_unit"}; 
A_GISVEC(A68_VC ,TECBTRN,SECBTRN,9)
static A68_444   QFCBTRN = {"right_side: conc list expected"}; 
A_GISVEC(A68_VC ,RFCBTRN,QFCBTRN,30)
static A68_446   HGCBTRN = {"right_side: index list expected"}; 
A_GISVEC(A68_VC ,IGCBTRN,HGCBTRN,31)
static A68_444   CHCBTRN = {"right_side: trim list expected"}; 
A_GISVEC(A68_VC ,DHCBTRN,CHCBTRN,30)
static A68_450   AJCBTRN = {"right_side: unexpected mode"}; 
A_GISVEC(A68_VC ,BJCBTRN,AJCBTRN,27)
typedef struct   /* env of non-global proc */
{
A68_108  Msg;
} QVBBTRN_sysfault;
typedef struct   /* env of non-global proc */
{
A68_BOOL  KVBBTRN_remove_makes;
A_PAD_BOOL(PAD_143)
A68_108  Msg;
A68_255 * SVBBTRN_env;
A68_36  OVBBTRN_sysfault;
A68_BOOL  MVBBTRN_remove_output_names;
A_PAD_BOOL(PAD_151)
} XVBBTRN_fndec_join;
typedef struct   /* env of non-global proc */
{
A68_265 * Closure;
A68_408  Options;
A68_108  Msg;
} LVCBTRN_shell_outer;
typedef struct   /* env of non-global proc */
{
A68_INT  ZVBBTRN_num_names;
A_PAD_INT(PAD_140)
} PWBBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_176 * IWBBTRN_blank_unit;
} CXBBTRN_init_namedata;
typedef struct   /* env of non-global proc */
{
A68_430  SWBBTRN_namedata;
A68_433  JXBBTRN_is_normal_join;
} LXBBTRN_is_normal_join;
typedef struct   /* env of non-global proc */
{
A68_360 * Dec_tprocs;
} XXBBTRN_need_new_name;
typedef struct   /* env of non-global proc */
{
A68_INT * BWBBTRN_seriesidcnt;
A68_432  AXBBTRN_init_namedata;
A68_430  SWBBTRN_namedata;
A68_BOOL  KVBBTRN_remove_makes;
A_PAD_BOOL(PAD_144)
A68_433  JXBBTRN_is_normal_join;
A68_434  VXBBTRN_need_new_name;
A68_INT * CWBBTRN_num_new_names;
A68_128 ** GWBBTRN_current_series;
A68_BOOL * DWBBTRN_dec_changes;
A68_128 *** HWBBTRN_series_tail;
A68_360 * Dec_tprocs;
} UYBBTRN_pre_pass_unit;
typedef struct   /* env of non-global proc */
{
A68_108  Msg;
A68_437  VACBTRN_type_unit;
A68_255 * SVBBTRN_env;
A68_36  OVBBTRN_sysfault;
} XACBTRN_type_unit;
typedef struct   /* env of non-global proc */
{
A68_36  OVBBTRN_sysfault;
A68_441  WECBTRN_right_side;
A68_108  Msg;
A68_430  SWBBTRN_namedata;
} YECBTRN_right_side;
typedef struct   /* env of non-global proc */
{
A68_108  Msg;
A68_437  VACBTRN_type_unit;
A68_430  SWBBTRN_namedata;
A68_254 * YVBBTRN_nametypes;
A68_BOOL  KVBBTRN_remove_makes;
A_PAD_BOOL(PAD_148)
A68_433  JXBBTRN_is_normal_join;
A68_434  VXBBTRN_need_new_name;
A68_INT * AWBBTRN_new_nameno;
A68_252 * Fdec;
A68_255 * SVBBTRN_env;
A68_441  WECBTRN_right_side;
A68_INT * DJCBTRN_seriesid;
} IJCBTRN_useries_proc;
typedef struct   /* env of non-global proc */
{
A68_INT * DJCBTRN_seriesid;
A68_128 ** FWBBTRN_series_changes;
A68_451  GJCBTRN_useries_proc;
A68_360 * Dec_tprocs;
} GRCBTRN_unit_proc;
typedef struct   /* env of non-global proc */
{
A68_430  SWBBTRN_namedata;
A68_432  AXBBTRN_init_namedata;
A68_437  VACBTRN_type_unit;
A68_254 * YVBBTRN_nametypes;
} XSCBTRN_set_output;
typedef struct   /* env of non-global proc */
{
A68_INT  ZVBBTRN_num_names;
A_PAD_INT(PAD_152)
A68_INT * CWBBTRN_num_new_names;
} KTCBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_BOOL * YXBBTRN_result;
A68_360 * Dec_tprocs;
} DYBBTRN_nnn_unit;
typedef struct   /* env of non-global proc */
{
A68_432  AXBBTRN_init_namedata;
A68_430  SWBBTRN_namedata;
A68_INT  XYBBTRN_seriesid;
A_PAD_INT(PAD_141)
} CZBBTRN_pre_pass_make;
typedef struct   /* env of non-global proc */
{
A68_BOOL  KVBBTRN_remove_makes;
A_PAD_BOOL(PAD_142)
A68_433  JXBBTRN_is_normal_join;
A68_434  VXBBTRN_need_new_name;
A68_INT * CWBBTRN_num_new_names;
A68_128 ** GWBBTRN_current_series;
A68_INT  XYBBTRN_seriesid;
A_PAD_INT(PAD_145)
A68_BOOL * DWBBTRN_dec_changes;
} LZBBTRN_pre_pass_join;
typedef struct   /* env of non-global proc */
{
A68_108  Msg;
A68_437  VACBTRN_type_unit;
} DBCBTRN_row_unit;
typedef struct   /* env of non-global proc */
{
A68_437  VACBTRN_type_unit;
} WBCBTRN_str_unit;
typedef struct   /* env of non-global proc */
{
A68_437  VACBTRN_type_unit;
A68_108  Msg;
} QCCBTRN_string_unit;
typedef struct   /* env of non-global proc */
{
A68_36  OVBBTRN_sysfault;
A68_441  WECBTRN_right_side;
A68_176 * Ru;
} DFCBTRN_do_conc;
typedef struct   /* env of non-global proc */
{
A68_108  Msg;
A68_36  OVBBTRN_sysfault;
} CGCBTRN_do_index;
typedef struct   /* env of non-global proc */
{
A68_108  Msg;
A68_176 * Ru;
A68_36  OVBBTRN_sysfault;
} OGCBTRN_do_trim;
typedef struct   /* env of non-global proc */
{
A68_441  WECBTRN_right_side;
A68_176 * Ru;
} IHCBTRN_do_ustr;
typedef struct   /* env of non-global proc */
{
A68_441  WECBTRN_right_side;
A68_176 * Ru;
} UHCBTRN_do_urow;
typedef struct   /* env of non-global proc */
{
A68_205 *** KJCBTRN_stail;
} OJCBTRN_add_new_step;
typedef struct   /* env of non-global proc */
{
A68_453  TJCBTRN_make_index;
A68_108  Msg;
} VJCBTRN_make_index;
typedef struct   /* env of non-global proc */
{
A68_437  VACBTRN_type_unit;
A68_108  Msg;
A68_455  TKCBTRN_make_uminsts;
} VKCBTRN_make_uminsts;
typedef struct   /* env of non-global proc */
{
A68_430  SWBBTRN_namedata;
A68_254 * YVBBTRN_nametypes;
A68_BOOL  KVBBTRN_remove_makes;
A_PAD_BOOL(PAD_149)
A68_455  TKCBTRN_make_uminsts;
A68_452  MJCBTRN_add_new_step;
A68_437  VACBTRN_type_unit;
} KMCBTRN_make_proc;
typedef struct   /* env of non-global proc */
{
A68_360 * Tprocs;
A68_433  JXBBTRN_is_normal_join;
A68_453  TJCBTRN_make_index;
A68_BOOL  KVBBTRN_remove_makes;
A_PAD_BOOL(PAD_150)
A68_434  VXBBTRN_need_new_name;
A68_INT * AWBBTRN_new_nameno;
A68_452  MJCBTRN_add_new_step;
A68_254 * YVBBTRN_nametypes;
A68_252 * Fdec;
A68_255 * SVBBTRN_env;
A68_441  WECBTRN_right_side;
} TNCBTRN_join_proc;
typedef struct   /* env of non-global proc */
{
A68_456  IMCBTRN_make_proc;
A68_458  RNCBTRN_join_proc;
A68_452  MJCBTRN_add_new_step;
A68_360 * Tprocs;
} DPCBTRN_step_proc;
typedef struct   /* env of non-global proc */
{
A68_452  MJCBTRN_add_new_step;
A68_108  Msg;
A68_460  MPCBTRN_next_dimension;
A68_453  TJCBTRN_make_index;
} OPCBTRN_next_dimension;
typedef struct   /* env of non-global proc */
{
A68_INT * DJCBTRN_seriesid;
A68_460  MPCBTRN_next_dimension;
} AQCBTRN_remake_joins;
typedef struct   /* env of non-global proc */
{
A68_INT  EFCBTRN_sort;
A_PAD_INT(PAD_146)
A68_419 *** GFCBTRN_tail;
A68_36  OVBBTRN_sysfault;
} LFCBTRN_insert_elem;
typedef struct   /* env of non-global proc */
{
A68_430  SWBBTRN_namedata;
A68_254 * YVBBTRN_nametypes;
A68_BOOL  KVBBTRN_remove_makes;
A_PAD_BOOL(PAD_147)
A68_455  TKCBTRN_make_uminsts;
A68_211 * Make;
A68_452  MJCBTRN_add_new_step;
A68_437  VACBTRN_type_unit;
} PMCBTRN_make_name;
typedef struct   /* env of non-global proc */
{
A68_459  AOCBTRN_join_rhs;
A68_453  TJCBTRN_make_index;
} COCBTRN_join_rhs;

A68_VOID  XTBBTRN_joins_remove_makes(A68_408  *ReturnedValue);

A68_VOID  AUBBTRN_joins_remove_output_names(A68_408  *ReturnedValue);

A_STATIC A68_VOID  LUBBTRN_joinid(A68_INT  Nameno, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  XUBBTRN_fnbody_join(A68_248  Fbody, A68_360 * Tprocs, A68_354  *ReturnedValue);

A68_VOID  IVBBTRN_outerfn_joins(A68_261  Ofn, A68_265 * Closure, A68_408  Options, A68_108  Msg, A68_358  *ReturnedValue);

A_STATIC A68_VOID  PVBBTRN_sysfault(A68_VC  Text, void *NonLocals);

A_STATIC A68_VOID  WVBBTRN_fndec_join(A68_252 * Fdec, A68_360 * Dec_tprocs, A68_357  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OWBBTRN_generator(A68_BOOL  MWBBTRN_anonymous, A68_430  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BXBBTRN_init_namedata(A68_INT  Sort, A68_422 * Nd, A68_150 * Sizes, A68_INT  Seriesid, void *NonLocals);

A_STATIC A68_BOOL  KXBBTRN_is_normal_join(A68_176  To, A68_INT  Idepth, void *NonLocals);

A_STATIC A68_BOOL  WXBBTRN_need_new_name(A68_176  U, void *NonLocals);

A_STATIC A68_VOID  CYBBTRN_nnn_unit(A68_176  Unit, A68_360 * Tprocs, A68_336  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  TYBBTRN_pre_pass_unit(A68_176  U, A68_360 * Tprocs, A68_336  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BZBBTRN_pre_pass_make(A68_211 * M, A68_360 * Tprocs, A68_349  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KZBBTRN_pre_pass_join(A68_212 * J, A68_360 * Tprocs, A68_350  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WACBTRN_type_unit(A68_154  T, A68_421  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CBCBTRN_row_unit(A68_154  Te, A68_138  Size, A68_421  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VBCBTRN_str_unit(A68_157 * Tst, A68_421  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PCCBTRN_string_unit(A68_154  Te, A68_138  Size, A68_421  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XECBTRN_right_side(A68_176 * Ru, A68_420  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CFCBTRN_do_conc(A68_192 * Ucc, A68_420  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KFCBTRN_insert_elem(A68_420  U, A68_INT  Cond, void *NonLocals);

A_STATIC A68_VOID  BGCBTRN_do_index(A68_420  Rhs, A68_138  Index, A68_420  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NGCBTRN_do_trim(A68_420  Rhs, A68_153  Range, A68_420  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HHCBTRN_do_ustr(A68_191 * Ustr, A68_420  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  THCBTRN_do_urow(A68_190 * Urow, A68_420  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HJCBTRN_useries_proc(A68_199 * Ser, A68_360 * Tprocs, A68_336  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NJCBTRN_add_new_step(A68_206  Step, void *NonLocals);

A_STATIC A68_VOID  UJCBTRN_make_index(A68_176  U, A68_INT  Index, A68_176  *ReturnedValue, void *NonLocals);

A_STATIC A68_176 * MKCBTRN_uminst_right(A68_176 * U);

A_STATIC A68_VOID  UKCBTRN_make_uminsts(A68_216  Inst, A68_154  Type, A68_150 * Dimension, A68_421  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  AMCBTRN_output_type(A68_154  T, A68_360 * Tprocs, A68_327  *ReturnedValue);

A_STATIC A68_VOID  JMCBTRN_make_proc(A68_211 * Make, void *NonLocals);

A_STATIC A68_VOID  OMCBTRN_make_name(A68_217 * Mkn, void *NonLocals);

A_STATIC A68_VOID  SNCBTRN_join_proc(A68_212 * Join, void *NonLocals);

A_STATIC A68_VOID  BOCBTRN_join_rhs(A68_176  Left, A68_420  Right, void *NonLocals);

A_STATIC A68_VOID  CPCBTRN_step_proc(A68_206  Step, void *NonLocals);

A_STATIC A68_VOID  NPCBTRN_next_dimension(A68_150 * Dimension, A68_176  Source, A68_176  Sink, void *NonLocals);

A_STATIC A68_VOID  ZPCBTRN_remake_joins(A68_422 * Nd, A68_INT  Nameno, void *NonLocals);

A_STATIC A68_VOID  FRCBTRN_unit_proc(A68_176  U, A68_360 * Tprocs, A68_336  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  URCBTRN_nulldec(A68_237  Dec, A68_360 * Tprocs, A68_340  *ReturnedValue);

A_STATIC A68_VOID  WSCBTRN_set_output(A68_INT  Nameno, void *NonLocals);

A_STATIC A68_VOID  JTCBTRN_generator(A68_BOOL  HTCBTRN_anonymous, A68_254  *ReturnedValue, void *NonLocals);

A68_VOID  FVCBTRN_transform_joins(A68_265 * Closure, A68_408  Options, A68_108  Msg, A68_359  *ReturnedValue);

A_STATIC A68_VOID  KVCBTRN_shell_outer(A68_261  O, A68_360 * Tprocs, A68_358  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KFCBTRN_insert_elem(A68_420  U, A68_INT  Cond, void *NonLocals)
#define NL(x) (((LFCBTRN_insert_elem *)NonLocals)->x)
{ 
A68_BOOL  MFCBTRN;  /* optbool result */
A68_419 * NFCBTRN_el;
A68_419  OFCBTRN;  /* collateral clause result */
A68_419 * PFCBTRN;  /* YIELD */
A68_419  SFCBTRN;  /* collateral clause result */
A68_419 * TFCBTRN;  /* YIELD */
A_PROC_ENTRY(insert_elem);
 /* line 433: */
MFCBTRN = (NL(EFCBTRN_sort)==Cond);
if ( ! MFCBTRN )
{ /* line 434: */
MFCBTRN = (NL(EFCBTRN_sort)==VIAATRN_flattenboth);
}
 /* line 435: */
if ( MFCBTRN )
{ 
 /* line 436: */
 /* line 437: */
if ( (U.Rs!=WTBBTRN_nilrhslist) )
{ 
NFCBTRN_el = U.Rs;
 /* line 439: */
for ( ;; )
{ 
 /* line 440: */
 /* line 441: */
if ( !((NFCBTRN_el!=WTBBTRN_nilrhslist)) ) break;
 /* line 442: */
OFCBTRN.Elem = (*(&(NFCBTRN_el->Elem)));
OFCBTRN.Rest = WTBBTRN_nilrhslist;
PFCBTRN = A_HEAP(A68_419 ) ;
(*PFCBTRN) = OFCBTRN ;
(**NL(GFCBTRN_tail)) = PFCBTRN;
 /* line 443: */
(*NL(GFCBTRN_tail)) = (&((**NL(GFCBTRN_tail))->Rest));
 /* line 444: */
 /* line 445: */
NFCBTRN_el = (*(&(NFCBTRN_el->Rest)));
}
 /* line 446: */
 /* line 447: */
} 
else
{ 
 /* line 448: */
 /* line 449: */
 /* line 450: */
A_CALLPROC(NL(OVBBTRN_sysfault),(RFCBTRN),(RFCBTRN,(NL(OVBBTRN_sysfault)).nonlocals));
} 
} 
else
{ 
 /* line 451: */
SFCBTRN.Elem = U;
SFCBTRN.Rest = WTBBTRN_nilrhslist;
TFCBTRN = A_HEAP(A68_419 ) ;
(*TFCBTRN) = SFCBTRN ;
(**NL(GFCBTRN_tail)) = TFCBTRN;
 /* line 452: */
 /* line 453: */
(*NL(GFCBTRN_tail)) = (&((**NL(GFCBTRN_tail))->Rest));
} 
A_PROC_EXIT(insert_elem);
return;
} 
#undef NL

A_STATIC A68_VOID  OMCBTRN_make_name(A68_217 * Mkn, void *NonLocals)
#define NL(x) (((PMCBTRN_make_name *)NonLocals)->x)
{ 
A68_INT  QMCBTRN;  /* YIELD */
A68_422 * RMCBTRN_nd;
A68_INT  SMCBTRN;  /* YIELD */
A68_154 * TMCBTRN_type;
A68_421  UMCBTRN;  /* avoid structure result */
A68_421  VMCBTRN_mur;
A68_210  WMCBTRN;  /* collateral clause result */
A68_217  XMCBTRN;  /* collateral clause result */
A68_217 * YMCBTRN;  /* YIELD */
A68_210 * ZMCBTRN;  /* YIELD */
A68_210 * ANCBTRN_let;
A68_206  BNCBTRN;  /* OPERATORS - mode -> union mode */
A68_405  CNCBTRN;  /* OPERATORS - mode -> union mode */
A68_370  DNCBTRN;  /* YIELD */
A68_370  ENCBTRN;  /* procedure value */
A68_404  FNCBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_360 * GNCBTRN_tpr;
A68_370  HNCBTRN;  /* CALL */
A68_327  INCBTRN;  /* avoid structure result */
A68_420  JNCBTRN;  /* collateral clause result */
A68_421  KNCBTRN;  /* avoid structure result */
A68_421  LNCBTRN_tur;
A68_176 * MNCBTRN;  /* YIELD */
A68_420 * NNCBTRN;  /* YIELD */
A_PROC_ENTRY(make_name);
 /* line 648: */
 /* line 649: */
{ 
QMCBTRN = (*(&(Mkn->Nameno))) ;
RMCBTRN_nd = (&A_VINDEX(NL(SWBBTRN_namedata),QMCBTRN));
 /* line 650: */
SMCBTRN = (*(&(Mkn->Nameno))) ;
TMCBTRN_type = (&((&A_VINDEX((*NL(YVBBTRN_nametypes)),SMCBTRN))->Type));
 /* line 656: */
 /* line 657: */
 /* line 658: */
 /* line 659: */
if ( NL(KVBBTRN_remove_makes) )
{ 
 /* line 660: */
 /* line 661: */
A_CALLPROC(NL(TKCBTRN_make_uminsts),((*(&(NL(Make)->Inst))), (*TMCBTRN_type), (*(&(NL(Make)->Sizes))), &UMCBTRN),((*(&(NL(Make)->Inst))), (*TMCBTRN_type), (*(&(NL(Make)->Sizes))), &UMCBTRN,(NL(TKCBTRN_make_uminsts)).nonlocals));
VMCBTRN_mur = UMCBTRN;
 /* line 662: */
 /* line 663: */
XMCBTRN.Nameno = (*(&(Mkn->Nameno)));
XMCBTRN.Rest = NAAATRN_nilnames;
 /* line 664: */
YMCBTRN = A_HEAP(A68_217 ) ;
(*YMCBTRN) = XMCBTRN ;
WMCBTRN.Letnames = YMCBTRN;
WMCBTRN.Unit = VMCBTRN_mur.U;
ZMCBTRN = A_HEAP(A68_210 ) ;
(*ZMCBTRN) = WMCBTRN ;
ANCBTRN_let = ZMCBTRN;
 /* line 666: */
A_CALLPROC(NL(MJCBTRN_add_new_step),(A_UNITE(BNCBTRN,mode8,8,ANCBTRN_let)),(A_UNITE(BNCBTRN,mode8,8,ANCBTRN_let),(NL(MJCBTRN_add_new_step)).nonlocals));
 /* line 667: */
 /* line 668: */
ENCBTRN.fn.fn_global = AMCBTRN_output_type;
ENCBTRN.nonlocals = A68_NIL;
DNCBTRN = ENCBTRN ;
GNCBTRN_tpr = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HVEC(FNCBTRN,A_UNITE(CNCBTRN,mode10,10,DNCBTRN),A68_405 ));
 /* line 669: */
HNCBTRN = (*(&(GNCBTRN_tpr->Type))) ;
A_CALLPROC(HNCBTRN,((*TMCBTRN_type), GNCBTRN_tpr, &INCBTRN),((*TMCBTRN_type), GNCBTRN_tpr, &INCBTRN,(HNCBTRN).nonlocals));
(*TMCBTRN_type) = INCBTRN.T;
 /* line 670: */
MLJATRN_discard_tprocs(GNCBTRN_tpr);
 /* line 671: */
JNCBTRN.Ru = MKCBTRN_uminst_right((&(ANCBTRN_let->Unit)));
 /* line 673: */
 /* line 674: */
JNCBTRN.Rs = VMCBTRN_mur.Rs;
} 
else
{ 
A_CALLPROC(NL(VACBTRN_type_unit),((*TMCBTRN_type), &KNCBTRN),((*TMCBTRN_type), &KNCBTRN,(NL(VACBTRN_type_unit)).nonlocals));
LNCBTRN_tur = KNCBTRN;
 /* line 676: */
MNCBTRN = (&(RMCBTRN_nd->Source)) ;
(*MNCBTRN) = LNCBTRN_tur.U;
 /* line 678: */
JNCBTRN.Ru = (&(RMCBTRN_nd->Source));
 /* line 680: */
 /* line 681: */
JNCBTRN.Rs = LNCBTRN_tur.Rs;
} 
NNCBTRN = (&(RMCBTRN_nd->Refsrc)) ;
(*NNCBTRN) = JNCBTRN;
} 
A_PROC_EXIT(make_name);
return;
} 
#undef NL

A_STATIC A68_VOID  BOCBTRN_join_rhs(A68_176  Left, A68_420  Right, void *NonLocals)
#define NL(x) (((COCBTRN_join_rhs *)NonLocals)->x)
{ 
A68_419 * DOCBTRN_el;
A68_INT  EOCBTRN_index;
A68_176  FOCBTRN;  /* avoid structure result */
A68_176 * GOCBTRN;  /* YIELD */
A_PROC_ENTRY(join_rhs);
 /* line 704: */
 /* line 705: */
{ 
 /* line 706: */
 /* line 707: */
if ( (Right.Rs!=WTBBTRN_nilrhslist) )
{ 
DOCBTRN_el = Right.Rs;
 /* line 708: */
for ( EOCBTRN_index = 1;;
EOCBTRN_index += 1 ) 
{ 
 /* line 709: */
 /* line 710: */
if ( !((DOCBTRN_el!=WTBBTRN_nilrhslist)) ) break;
A_CALLPROC(NL(TJCBTRN_make_index),(Left, EOCBTRN_index, &FOCBTRN),(Left, EOCBTRN_index, &FOCBTRN,(NL(TJCBTRN_make_index)).nonlocals));
A_CALLPROC(NL(AOCBTRN_join_rhs),(FOCBTRN, (*(&(DOCBTRN_el->Elem)))),(FOCBTRN, (*(&(DOCBTRN_el->Elem))),(NL(AOCBTRN_join_rhs)).nonlocals));
 /* line 711: */
 /* line 712: */
DOCBTRN_el = (*(&(DOCBTRN_el->Rest)));
}
 /* line 713: */
 /* line 714: */
} 
else
{ 
 /* line 715: */
 /* line 716: */
GOCBTRN = Right.Ru ;
(*GOCBTRN) = Left;
} 
} 
A_PROC_EXIT(join_rhs);
return;
} 
#undef NL

A_STATIC A68_VOID  CYBBTRN_nnn_unit(A68_176  Unit, A68_360 * Tprocs, A68_336  *ReturnedValue, void *NonLocals)
#define NL(x) (((DYBBTRN_nnn_unit *)NonLocals)->x)
{ 
A68_176  EYBBTRN;  /* united object - for case conformity */
A68_379  FYBBTRN;  /* CALL */
A68_336  GYBBTRN;  /* avoid structure result */
A68_336  HYBBTRN;  /* collateral clause result */
A68_336  IYBBTRN;  /* clause result */
A_PROC_ENTRY(nnn_unit);
 /* line 205: */
 /* line 206: */
{ 
 /* line 207: */
if ( !(*NL(YXBBTRN_result)) )
{ 
 /* line 209: */
EYBBTRN = Unit ;
switch ( EYBBTRN.mode )
{ 
case 22: /* REF STRUCT(BOOL,INT,MODE176,MODE176)  */
case 23: /* REF STRUCT(MODE216,MODE176)  */
case 24: /* REF STRUCT(MODE176,MODE216,MODE176)  */
case 25: /* REF STRUCT(MODE176,REF MODE236)  */
case 28: /* REF STRUCT(REF MODE224,MODE176)  */
case 29: /* REF STRUCT(REF MODE205,MODE176)  */
case 33: /* REF STRUCT(MODE138,MODE176)  */
 /* line 210: */
 /* line 211: */
 /* line 212: */
(*NL(YXBBTRN_result)) = A68_TRUE;
break;
default: 
 /* line 213: */
 /* line 214: */
FYBBTRN = (*(&(NL(Dec_tprocs)->Unit))) ;
A_CALLPROC(FYBBTRN,(Unit, Tprocs, &GYBBTRN),(Unit, Tprocs, &GYBBTRN,(FYBBTRN).nonlocals));
GYBBTRN;
break;
} 
} 
 /* line 215: */
HYBBTRN.U = Unit;
 /* line 216: */
HYBBTRN.C = A68_FALSE;
IYBBTRN = HYBBTRN;
} 
A_PROC_EXIT(nnn_unit);
*ReturnedValue = (IYBBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  BZBBTRN_pre_pass_make(A68_211 * M, A68_360 * Tprocs, A68_349  *ReturnedValue, void *NonLocals)
#define NL(x) (((CZBBTRN_pre_pass_make *)NonLocals)->x)
{ 
A68_217 * DZBBTRN_mkn;
A68_INT  EZBBTRN;  /* YIELD */
A68_349  FZBBTRN;  /* collateral clause result */
A68_349  GZBBTRN;  /* clause result */
A_PROC_ENTRY(pre_pass_make);
 /* line 233: */
 /* line 239: */
{ 
DZBBTRN_mkn = (*(&(M->Makenames)));
 /* line 241: */
for ( ;; )
{ 
 /* line 242: */
 /* line 243: */
if ( !((DZBBTRN_mkn!=NAAATRN_nilnames)) ) break;
 /* line 244: */
EZBBTRN = (*(&(DZBBTRN_mkn->Nameno))) ;
A_CALLPROC(NL(AXBBTRN_init_namedata),(UTBBTRN_name_other, (&A_VINDEX(NL(SWBBTRN_namedata),EZBBTRN)), (*(&(M->Sizes))), (-NL(XYBBTRN_seriesid))),(UTBBTRN_name_other, (&A_VINDEX(NL(SWBBTRN_namedata),EZBBTRN)), (*(&(M->Sizes))), (-NL(XYBBTRN_seriesid)),(NL(AXBBTRN_init_namedata)).nonlocals));
 /* line 245: */
 /* line 246: */
DZBBTRN_mkn = (*(&(DZBBTRN_mkn->Rest)));
}
 /* line 247: */
FZBBTRN.M = M;
 /* line 248: */
FZBBTRN.C = A68_FALSE;
GZBBTRN = FZBBTRN;
} 
A_PROC_EXIT(pre_pass_make);
*ReturnedValue = (GZBBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  KZBBTRN_pre_pass_join(A68_212 * J, A68_360 * Tprocs, A68_350  *ReturnedValue, void *NonLocals)
#define NL(x) (((LZBBTRN_pre_pass_join *)NonLocals)->x)
{ 
A68_379  MZBBTRN;  /* CALL */
A68_336  NZBBTRN;  /* avoid structure result */
A68_336  OZBBTRN_ufc;
A68_BOOL  PZBBTRN;  /* optbool result */
A68_INT * QZBBTRN;  /* YIELD */
A68_350  RZBBTRN;  /* collateral clause result */
A68_350  SZBBTRN;  /* clause result */
A_PROC_ENTRY(pre_pass_join);
 /* line 251: */
 /* line 256: */
{ 
MZBBTRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(MZBBTRN,((*(&(J->From))), Tprocs, &NZBBTRN),((*(&(J->From))), Tprocs, &NZBBTRN,(MZBBTRN).nonlocals));
OZBBTRN_ufc = NZBBTRN;
 /* line 258: */
PZBBTRN = NL(KVBBTRN_remove_makes);
if ( ! PZBBTRN )
{ /* line 259: */
PZBBTRN = !A_CALLPROC(NL(JXBBTRN_is_normal_join),((*(&(J->To))), 0),((*(&(J->To))), 0,(NL(JXBBTRN_is_normal_join)).nonlocals));
}
 /* line 260: */
if ( PZBBTRN )
{ 
if ( A_CALLPROC(NL(VXBBTRN_need_new_name),(OZBBTRN_ufc.U),(OZBBTRN_ufc.U,(NL(VXBBTRN_need_new_name)).nonlocals)) )
{ 
(*NL(CWBBTRN_num_new_names))+=1;
} 
 /* line 261: */
QZBBTRN = (&((*NL(GWBBTRN_current_series))->Int)) ;
(*QZBBTRN) = NL(XYBBTRN_seriesid);
 /* line 262: */
 /* line 263: */
(*NL(DWBBTRN_dec_changes)) = A68_TRUE;
} 
 /* line 264: */
RZBBTRN.J = J;
 /* line 265: */
RZBBTRN.C = A68_FALSE;
SZBBTRN = RZBBTRN;
} 
A_PROC_EXIT(pre_pass_join);
*ReturnedValue = (SZBBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  CBCBTRN_row_unit(A68_154  Te, A68_138  Size, A68_421  *ReturnedValue, void *NonLocals)
#define NL(x) (((DBCBTRN_row_unit *)NonLocals)->x)
{ 
A68_191 * EBCBTRN_new;
A68_191 ** FBCBTRN_utail;
A68_419 * GBCBTRN_el;
A68_419 ** HBCBTRN_rtail;
A68_421  IBCBTRN_ur;
A68_INT  JBCBTRN;  /* to part of loop */
A68_INT  KBCBTRN;  /* loop control */
A68_421  LBCBTRN;  /* avoid structure result */
A68_191  MBCBTRN;  /* collateral clause result */
A68_191 * NBCBTRN;  /* YIELD */
A68_419  OBCBTRN;  /* collateral clause result */
A68_419 * PBCBTRN;  /* YIELD */
A68_421  QBCBTRN;  /* collateral clause result */
A68_176  RBCBTRN;  /* OPERATORS - mode -> union mode */
A68_421  SBCBTRN;  /* clause result */
A_PROC_ENTRY(row_unit);
 /* line 322: */
 /* line 323: */
{ 
EBCBTRN_new = IAAATRN_nilustr;
 /* line 324: */
FBCBTRN_utail = (&EBCBTRN_new);
 /* line 325: */
GBCBTRN_el = WTBBTRN_nilrhslist;
 /* line 326: */
HBCBTRN_rtail = (&GBCBTRN_el);
 /* line 327: */
 /* line 329: */
 /* line 330: */
JBCBTRN = TNMATRN_formula_int(Size, NL(Msg));
for ( KBCBTRN = 1;
KBCBTRN <= JBCBTRN;
KBCBTRN += 1 )
{ 
 /* line 331: */
A_CALLPROC(NL(VACBTRN_type_unit),(Te, &LBCBTRN),(Te, &LBCBTRN,(NL(VACBTRN_type_unit)).nonlocals));
IBCBTRN_ur = LBCBTRN;
 /* line 332: */
MBCBTRN.Elem = (*(&((&IBCBTRN_ur)->U)));
MBCBTRN.Rest = IAAATRN_nilustr;
NBCBTRN = A_HEAP(A68_191 ) ;
(*NBCBTRN) = MBCBTRN ;
(*FBCBTRN_utail) = NBCBTRN;
 /* line 333: */
 /* line 334: */
OBCBTRN.Elem.Ru = (&((*FBCBTRN_utail)->Elem));
OBCBTRN.Elem.Rs = (*(&((&IBCBTRN_ur)->Rs)));
OBCBTRN.Rest = WTBBTRN_nilrhslist;
PBCBTRN = A_HEAP(A68_419 ) ;
(*PBCBTRN) = OBCBTRN ;
(*HBCBTRN_rtail) = PBCBTRN;
 /* line 335: */
FBCBTRN_utail = (&((*FBCBTRN_utail)->Rest));
 /* line 336: */
 /* line 337: */
HBCBTRN_rtail = (&((*HBCBTRN_rtail)->Rest));
}
 /* line 338: */
QBCBTRN.U = A_UNITE(RBCBTRN,mode21,21,EBCBTRN_new);
 /* line 339: */
QBCBTRN.Rs = GBCBTRN_el;
SBCBTRN = QBCBTRN;
} 
A_PROC_EXIT(row_unit);
*ReturnedValue = (SBCBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  VBCBTRN_str_unit(A68_157 * Tst, A68_421  *ReturnedValue, void *NonLocals)
#define NL(x) (((WBCBTRN_str_unit *)NonLocals)->x)
{ 
A68_157 * XBCBTRN_tt;
A68_191 * YBCBTRN_new;
A68_191 ** ZBCBTRN_utail;
A68_419 * ACCBTRN_el;
A68_419 ** BCCBTRN_rtail;
A68_421  CCCBTRN_ur;
A68_INT  DCCBTRN_strind;
A68_421  ECCBTRN;  /* avoid structure result */
A68_191  FCCBTRN;  /* collateral clause result */
A68_191 * GCCBTRN;  /* YIELD */
A68_419  HCCBTRN;  /* collateral clause result */
A68_419 * ICCBTRN;  /* YIELD */
A68_421  JCCBTRN;  /* collateral clause result */
A68_176  KCCBTRN;  /* OPERATORS - mode -> union mode */
A68_421  LCCBTRN;  /* clause result */
A_PROC_ENTRY(str_unit);
 /* line 342: */
 /* line 343: */
{ 
XBCBTRN_tt = Tst;
 /* line 344: */
YBCBTRN_new = IAAATRN_nilustr;
 /* line 345: */
ZBCBTRN_utail = (&YBCBTRN_new);
 /* line 346: */
ACCBTRN_el = WTBBTRN_nilrhslist;
 /* line 347: */
BCCBTRN_rtail = (&ACCBTRN_el);
 /* line 348: */
 /* line 350: */
for ( DCCBTRN_strind = 1;;
DCCBTRN_strind += 1 ) 
{ 
 /* line 351: */
 /* line 352: */
if ( !((XBCBTRN_tt!=GAAATRN_niltstr)) ) break;
A_CALLPROC(NL(VACBTRN_type_unit),((*(&(XBCBTRN_tt->Elem))), &ECCBTRN),((*(&(XBCBTRN_tt->Elem))), &ECCBTRN,(NL(VACBTRN_type_unit)).nonlocals));
CCCBTRN_ur = ECCBTRN;
 /* line 353: */
FCCBTRN.Elem = (*(&((&CCCBTRN_ur)->U)));
FCCBTRN.Rest = IAAATRN_nilustr;
GCCBTRN = A_HEAP(A68_191 ) ;
(*GCCBTRN) = FCCBTRN ;
(*ZBCBTRN_utail) = GCCBTRN;
 /* line 354: */
 /* line 355: */
HCCBTRN.Elem.Ru = (&((*ZBCBTRN_utail)->Elem));
HCCBTRN.Elem.Rs = (*(&((&CCCBTRN_ur)->Rs)));
HCCBTRN.Rest = WTBBTRN_nilrhslist;
ICCBTRN = A_HEAP(A68_419 ) ;
(*ICCBTRN) = HCCBTRN ;
(*BCCBTRN_rtail) = ICCBTRN;
 /* line 356: */
ZBCBTRN_utail = (&((*ZBCBTRN_utail)->Rest));
 /* line 357: */
BCCBTRN_rtail = (&((*BCCBTRN_rtail)->Rest));
 /* line 358: */
 /* line 359: */
XBCBTRN_tt = (*(&(XBCBTRN_tt->Rest)));
}
 /* line 360: */
JCCBTRN.U = A_UNITE(KCCBTRN,mode21,21,YBCBTRN_new);
 /* line 361: */
JCCBTRN.Rs = ACCBTRN_el;
LCCBTRN = JCCBTRN;
} 
A_PROC_EXIT(str_unit);
*ReturnedValue = (LCCBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  PCCBTRN_string_unit(A68_154  Te, A68_138  Size, A68_421  *ReturnedValue, void *NonLocals)
#define NL(x) (((QCCBTRN_string_unit *)NonLocals)->x)
{ 
A68_421  SCCBTRN;  /* avoid structure result */
A68_421  RCCBTRN_ur;
A68_INT  TCCBTRN_s;
A68_421  UCCBTRN;  /* collateral clause result */
A68_203  VCCBTRN;  /* collateral clause result */
A68_203 * WCCBTRN;  /* YIELD */
A68_176  XCCBTRN;  /* OPERATORS - mode -> union mode */
A68_421  YCCBTRN;  /* clause result */
A68_192 * ZCCBTRN_cnc;
A68_203  ADCBTRN;  /* collateral clause result */
A68_138  BDCBTRN;  /* OPERATORS - mode -> union mode */
A68_139 * CDCBTRN;  /* YIELD */
A68_203 * EDCBTRN;  /* YIELD */
A68_203 * DDCBTRN_newstr;
A68_176  GDCBTRN;  /* OPERATORS - mode -> union mode */
A68_176  FDCBTRN_new;
A68_419  HDCBTRN;  /* collateral clause result */
A68_419 * JDCBTRN;  /* YIELD */
A68_419 * IDCBTRN_el;
A68_419 ** KDCBTRN_rtail;
A68_INT  LDCBTRN;  /* to part of loop */
A68_INT  MDCBTRN;  /* loop control */
A68_192  NDCBTRN;  /* collateral clause result */
A68_176  ODCBTRN;  /* OPERATORS - mode -> union mode */
A68_192 * PDCBTRN;  /* YIELD */
A68_176  QDCBTRN;  /* OPERATORS - mode -> union mode */
A68_421  RDCBTRN;  /* avoid structure result */
A68_176 * SDCBTRN;  /* YIELD */
A68_419  TDCBTRN;  /* collateral clause result */
A68_419 * UDCBTRN;  /* YIELD */
A68_421  VDCBTRN;  /* collateral clause result */
A_PROC_ENTRY(string_unit);
 /* line 364: */
 /* line 365: */
{ 
A_CALLPROC(NL(VACBTRN_type_unit),(Te, &SCCBTRN),(Te, &SCCBTRN,(NL(VACBTRN_type_unit)).nonlocals));
RCCBTRN_ur = SCCBTRN;
 /* line 366: */
TCCBTRN_s = TNMATRN_formula_int(Size, NL(Msg));
 /* line 368: */
 /* line 369: */
 /* line 370: */
if ( (TCCBTRN_s==1) )
{ 
VCCBTRN.Size = Size;
VCCBTRN.Char = (*(&((&RCCBTRN_ur)->U)));
WCCBTRN = A_HEAP(A68_203 ) ;
(*WCCBTRN) = VCCBTRN ;
UCCBTRN.U = A_UNITE(XCCBTRN,mode33,33,WCCBTRN);
 /* line 371: */
 /* line 372: */
UCCBTRN.Rs = (*(&((&RCCBTRN_ur)->Rs)));
YCCBTRN = UCCBTRN;
} 
else
{ 
ZCCBTRN_cnc = (A68_192 *)A68_NIL;
 /* line 373: */
 /* line 374: */
CDCBTRN = NNMATRN_makefint(1) ;
ADCBTRN.Size = A_UNITE(BDCBTRN,mode1,1,CDCBTRN);
ADCBTRN.Char = (*(&((&RCCBTRN_ur)->U)));
EDCBTRN = A_HEAP(A68_203 ) ;
(*EDCBTRN) = ADCBTRN ;
DDCBTRN_newstr = EDCBTRN;
 /* line 375: */
FDCBTRN_new = A_UNITE(GDCBTRN,mode33,33,DDCBTRN_newstr);
 /* line 376: */
 /* line 377: */
HDCBTRN.Elem.Ru = (&(DDCBTRN_newstr->Char));
HDCBTRN.Elem.Rs = (*(&((&RCCBTRN_ur)->Rs)));
HDCBTRN.Rest = WTBBTRN_nilrhslist;
JDCBTRN = A_HEAP(A68_419 ) ;
(*JDCBTRN) = HDCBTRN ;
IDCBTRN_el = JDCBTRN;
 /* line 378: */
KDCBTRN_rtail = (&(IDCBTRN_el->Rest));
 /* line 380: */
 /* line 381: */
LDCBTRN = (TCCBTRN_s-1);
for ( MDCBTRN = 1;
MDCBTRN <= LDCBTRN;
MDCBTRN += 1 )
{ 
 /* line 382: */
NDCBTRN.String = A68_TRUE;
NDCBTRN.Sort = TIAATRN_flattenleft;
NDCBTRN.Left = FDCBTRN_new;
NDCBTRN.Right = A_UNITE(ODCBTRN,mode6,6,(&RIAATRN_cvoid));
PDCBTRN = A_HEAP(A68_192 ) ;
(*PDCBTRN) = NDCBTRN ;
ZCCBTRN_cnc = PDCBTRN;
 /* line 383: */
FDCBTRN_new = A_UNITE(QDCBTRN,mode22,22,ZCCBTRN_cnc);
 /* line 384: */
A_CALLPROC(NL(VACBTRN_type_unit),(Te, &RDCBTRN),(Te, &RDCBTRN,(NL(VACBTRN_type_unit)).nonlocals));
RCCBTRN_ur = RDCBTRN;
 /* line 385: */
SDCBTRN = (&(ZCCBTRN_cnc->Right)) ;
(*SDCBTRN) = (*(&((&RCCBTRN_ur)->U)));
 /* line 386: */
 /* line 387: */
TDCBTRN.Elem.Ru = (&(ZCCBTRN_cnc->Right));
TDCBTRN.Elem.Rs = (*(&((&RCCBTRN_ur)->Rs)));
TDCBTRN.Rest = WTBBTRN_nilrhslist;
UDCBTRN = A_HEAP(A68_419 ) ;
(*UDCBTRN) = TDCBTRN ;
(*KDCBTRN_rtail) = UDCBTRN;
 /* line 388: */
 /* line 389: */
KDCBTRN_rtail = (&((*KDCBTRN_rtail)->Rest));
}
 /* line 390: */
VDCBTRN.U = FDCBTRN_new;
 /* line 391: */
 /* line 392: */
VDCBTRN.Rs = IDCBTRN_el;
YCCBTRN = VDCBTRN;
} 
} 
A_PROC_EXIT(string_unit);
*ReturnedValue = (YCCBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  CFCBTRN_do_conc(A68_192 * Ucc, A68_420  *ReturnedValue, void *NonLocals)
#define NL(x) (((DFCBTRN_do_conc *)NonLocals)->x)
{ 
A68_INT  EFCBTRN_sort;
A68_419 * FFCBTRN_result;
A68_419 ** GFCBTRN_tail;
A68_443  JFCBTRN_insert_elem;   /* proc value of non-global proc */
A68_420  UFCBTRN;  /* avoid structure result */
A68_420  VFCBTRN;  /* avoid structure result */
A68_420  WFCBTRN;  /* collateral clause result */
A68_420  XFCBTRN;  /* clause result */
A_PROC_ENTRY(do_conc);
 /* line 427: */
 /* line 428: */
{ 
EFCBTRN_sort = (*(&(Ucc->Sort)));
 /* line 429: */
FFCBTRN_result = WTBBTRN_nilrhslist;
 /* line 430: */
GFCBTRN_tail = (&FFCBTRN_result);
 /* line 432: */
A_CLOSURE( JFCBTRN_insert_elem, KFCBTRN_insert_elem, LFCBTRN_insert_elem );
(( LFCBTRN_insert_elem * ) ( JFCBTRN_insert_elem.nonlocals )) -> EFCBTRN_sort = EFCBTRN_sort;
(( LFCBTRN_insert_elem * ) ( JFCBTRN_insert_elem.nonlocals )) -> GFCBTRN_tail = (&GFCBTRN_tail);
(( LFCBTRN_insert_elem * ) ( JFCBTRN_insert_elem.nonlocals )) -> OVBBTRN_sysfault = NL(OVBBTRN_sysfault);
 /* line 455: */
A_CALLPROC(NL(WECBTRN_right_side),((&(Ucc->Left)), &UFCBTRN),((&(Ucc->Left)), &UFCBTRN,(NL(WECBTRN_right_side)).nonlocals));
A_CALLPROC(JFCBTRN_insert_elem,(UFCBTRN, TIAATRN_flattenleft),(UFCBTRN, TIAATRN_flattenleft,(JFCBTRN_insert_elem).nonlocals));
 /* line 456: */
A_CALLPROC(NL(WECBTRN_right_side),((&(Ucc->Right)), &VFCBTRN),((&(Ucc->Right)), &VFCBTRN,(NL(WECBTRN_right_side)).nonlocals));
A_CALLPROC(JFCBTRN_insert_elem,(VFCBTRN, UIAATRN_flattenright),(VFCBTRN, UIAATRN_flattenright,(JFCBTRN_insert_elem).nonlocals));
 /* line 457: */
WFCBTRN.Ru = NL(Ru);
 /* line 458: */
WFCBTRN.Rs = FFCBTRN_result;
XFCBTRN = WFCBTRN;
} 
A_PROC_EXIT(do_conc);
*ReturnedValue = (XFCBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  BGCBTRN_do_index(A68_420  Rhs, A68_138  Index, A68_420  *ReturnedValue, void *NonLocals)
#define NL(x) (((CGCBTRN_do_index *)NonLocals)->x)
{ 
A68_419 * DGCBTRN_el;
A68_INT  EGCBTRN;  /* to part of loop */
A68_INT  FGCBTRN;  /* loop control */
A68_420  GGCBTRN;  /* clause result */
A68_420  JGCBTRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(do_index);
 /* line 461: */
 /* line 462: */
 /* line 463: */
if ( (Rhs.Rs!=WTBBTRN_nilrhslist) )
{ 
DGCBTRN_el = Rhs.Rs;
 /* line 465: */
EGCBTRN = (TNMATRN_formula_int(Index, NL(Msg))-1);
for ( FGCBTRN = 1;
FGCBTRN <= EGCBTRN;
FGCBTRN += 1 )
{ 
DGCBTRN_el = (*(&(DGCBTRN_el->Rest)));
}
 /* line 466: */
 /* line 467: */
 /* line 468: */
GGCBTRN = (*(&(DGCBTRN_el->Elem)));
} 
else
{ 
A_CALLPROC(NL(OVBBTRN_sysfault),(IGCBTRN),(IGCBTRN,(NL(OVBBTRN_sysfault)).nonlocals));
 /* line 469: */
 /* line 470: */
GGCBTRN = JGCBTRN;
} 
A_PROC_EXIT(do_index);
*ReturnedValue = (GGCBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  NGCBTRN_do_trim(A68_420  Rhs, A68_153  Range, A68_420  *ReturnedValue, void *NonLocals)
#define NL(x) (((OGCBTRN_do_trim *)NonLocals)->x)
{ 
A68_419 * PGCBTRN_el;
A68_INT  QGCBTRN_lwb;
A68_INT  RGCBTRN_upb;
A68_419 * SGCBTRN_new;
A68_419 ** TGCBTRN_tail;
A68_INT  UGCBTRN;  /* to part of loop */
A68_INT  VGCBTRN;  /* loop control */
A68_INT  WGCBTRN;  /* to part of loop */
A68_INT  XGCBTRN;  /* loop control */
A68_419  YGCBTRN;  /* collateral clause result */
A68_419 * ZGCBTRN;  /* YIELD */
A68_420  AHCBTRN;  /* collateral clause result */
A68_420  BHCBTRN;  /* clause result */
A68_420  EHCBTRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(do_trim);
 /* line 473: */
 /* line 474: */
 /* line 475: */
if ( (Rhs.Rs!=WTBBTRN_nilrhslist) )
{ 
PGCBTRN_el = Rhs.Rs;
 /* line 476: */
QGCBTRN_lwb = TNMATRN_formula_int(Range.Lwb, NL(Msg));
 /* line 477: */
RGCBTRN_upb = TNMATRN_formula_int(Range.Upb, NL(Msg));
 /* line 478: */
SGCBTRN_new = WTBBTRN_nilrhslist;
 /* line 479: */
TGCBTRN_tail = (&SGCBTRN_new);
 /* line 481: */
UGCBTRN = (QGCBTRN_lwb-1);
for ( VGCBTRN = 1;
VGCBTRN <= UGCBTRN;
VGCBTRN += 1 )
{ 
PGCBTRN_el = (*(&(PGCBTRN_el->Rest)));
}
 /* line 482: */
 /* line 483: */
WGCBTRN = ((RGCBTRN_upb-QGCBTRN_lwb)+1);
for ( XGCBTRN = 1;
XGCBTRN <= WGCBTRN;
XGCBTRN += 1 )
{ 
 /* line 484: */
 /* line 485: */
YGCBTRN.Elem = (*(&(PGCBTRN_el->Elem)));
YGCBTRN.Rest = WTBBTRN_nilrhslist;
ZGCBTRN = A_HEAP(A68_419 ) ;
(*ZGCBTRN) = YGCBTRN ;
(*TGCBTRN_tail) = ZGCBTRN;
 /* line 486: */
TGCBTRN_tail = (&((*TGCBTRN_tail)->Rest));
 /* line 487: */
 /* line 488: */
PGCBTRN_el = (*(&(PGCBTRN_el->Rest)));
}
 /* line 489: */
AHCBTRN.Ru = NL(Ru);
 /* line 490: */
 /* line 491: */
AHCBTRN.Rs = SGCBTRN_new;
BHCBTRN = AHCBTRN;
} 
else
{ 
A_CALLPROC(NL(OVBBTRN_sysfault),(DHCBTRN),(DHCBTRN,(NL(OVBBTRN_sysfault)).nonlocals));
 /* line 492: */
 /* line 493: */
BHCBTRN = EHCBTRN;
} 
A_PROC_EXIT(do_trim);
*ReturnedValue = (BHCBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  HHCBTRN_do_ustr(A68_191 * Ustr, A68_420  *ReturnedValue, void *NonLocals)
#define NL(x) (((IHCBTRN_do_ustr *)NonLocals)->x)
{ 
A68_191 * JHCBTRN_str;
A68_419 * KHCBTRN_el;
A68_419 ** LHCBTRN_tail;
A68_419  MHCBTRN;  /* collateral clause result */
A68_420  NHCBTRN;  /* avoid structure result */
A68_419 * OHCBTRN;  /* YIELD */
A68_420  PHCBTRN;  /* collateral clause result */
A68_420  QHCBTRN;  /* clause result */
A_PROC_ENTRY(do_ustr);
 /* line 496: */
 /* line 497: */
{ 
JHCBTRN_str = Ustr;
 /* line 498: */
KHCBTRN_el = WTBBTRN_nilrhslist;
 /* line 499: */
LHCBTRN_tail = (&KHCBTRN_el);
 /* line 501: */
for ( ;; )
{ 
 /* line 502: */
 /* line 503: */
if ( !((JHCBTRN_str!=IAAATRN_nilustr)) ) break;
 /* line 504: */
A_CALLPROC(NL(WECBTRN_right_side),((&(JHCBTRN_str->Elem)), &NHCBTRN),((&(JHCBTRN_str->Elem)), &NHCBTRN,(NL(WECBTRN_right_side)).nonlocals));
MHCBTRN.Elem = NHCBTRN;
MHCBTRN.Rest = WTBBTRN_nilrhslist;
OHCBTRN = A_HEAP(A68_419 ) ;
(*OHCBTRN) = MHCBTRN ;
(*LHCBTRN_tail) = OHCBTRN;
 /* line 505: */
LHCBTRN_tail = (&((*LHCBTRN_tail)->Rest));
 /* line 506: */
 /* line 507: */
JHCBTRN_str = (*(&(JHCBTRN_str->Rest)));
}
 /* line 508: */
PHCBTRN.Ru = NL(Ru);
 /* line 509: */
PHCBTRN.Rs = KHCBTRN_el;
QHCBTRN = PHCBTRN;
} 
A_PROC_EXIT(do_ustr);
*ReturnedValue = (QHCBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  THCBTRN_do_urow(A68_190 * Urow, A68_420  *ReturnedValue, void *NonLocals)
#define NL(x) (((UHCBTRN_do_urow *)NonLocals)->x)
{ 
A68_419 * VHCBTRN_el;
A68_419 ** WHCBTRN_tail;
A68_INT  XHCBTRN;  /* to part of loop */
A68_INT  YHCBTRN;  /* loop control */
A68_419  ZHCBTRN;  /* collateral clause result */
A68_420  AICBTRN;  /* avoid structure result */
A68_419 * BICBTRN;  /* YIELD */
A68_420  CICBTRN;  /* collateral clause result */
A68_420  DICBTRN;  /* clause result */
A_PROC_ENTRY(do_urow);
 /* line 512: */
 /* line 513: */
{ 
VHCBTRN_el = WTBBTRN_nilrhslist;
 /* line 514: */
WHCBTRN_tail = (&VHCBTRN_el);
 /* line 516: */
 /* line 517: */
XHCBTRN = XOMATRN_int((*(&(Urow->Size))));
for ( YHCBTRN = 1;
YHCBTRN <= XHCBTRN;
YHCBTRN += 1 )
{ 
 /* line 518: */
 /* line 519: */
A_CALLPROC(NL(WECBTRN_right_side),((&(Urow->Elem)), &AICBTRN),((&(Urow->Elem)), &AICBTRN,(NL(WECBTRN_right_side)).nonlocals));
ZHCBTRN.Elem = AICBTRN;
ZHCBTRN.Rest = WTBBTRN_nilrhslist;
BICBTRN = A_HEAP(A68_419 ) ;
(*BICBTRN) = ZHCBTRN ;
(*WHCBTRN_tail) = BICBTRN;
 /* line 520: */
 /* line 521: */
WHCBTRN_tail = (&((*WHCBTRN_tail)->Rest));
}
 /* line 522: */
CICBTRN.Ru = NL(Ru);
 /* line 523: */
CICBTRN.Rs = VHCBTRN_el;
DICBTRN = CICBTRN;
} 
A_PROC_EXIT(do_urow);
*ReturnedValue = (DICBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  NJCBTRN_add_new_step(A68_206  Step, void *NonLocals)
#define NL(x) (((OJCBTRN_add_new_step *)NonLocals)->x)
{ 
A68_205  PJCBTRN;  /* collateral clause result */
A68_205 * QJCBTRN;  /* YIELD */
A_PROC_ENTRY(add_new_step);
 /* line 565: */
 /* line 568: */
{ 
PJCBTRN.Step = Step;
PJCBTRN.Rest = SAAATRN_nilseries;
QJCBTRN = A_HEAP(A68_205 ) ;
(*QJCBTRN) = PJCBTRN ;
(**NL(KJCBTRN_stail)) = QJCBTRN;
 /* line 569: */
 /* line 570: */
(*NL(KJCBTRN_stail)) = (&((**NL(KJCBTRN_stail))->Rest));
} 
A_PROC_EXIT(add_new_step);
return;
} 
#undef NL

A_STATIC A68_VOID  UJCBTRN_make_index(A68_176  U, A68_INT  Index, A68_176  *ReturnedValue, void *NonLocals)
#define NL(x) (((VJCBTRN_make_index *)NonLocals)->x)
{ 
A68_176  WJCBTRN;  /* united object - for case conformity */
A68_190 * XJCBTRN_uro;
A68_176  YJCBTRN;  /* clause result */
A68_191 * ZJCBTRN_ust;
A68_191 * AKCBTRN_el;
A68_INT  BKCBTRN;  /* to part of loop */
A68_INT  CKCBTRN;  /* loop control */
A68_187 * DKCBTRN_tr;
A68_176  EKCBTRN;  /* avoid structure result */
A68_186  FKCBTRN;  /* collateral clause result */
A68_139  GKCBTRN;  /* collateral clause result */
A68_139 * HKCBTRN;  /* YIELD */
A68_138  IKCBTRN;  /* OPERATORS - mode -> union mode */
A68_186 * JKCBTRN;  /* YIELD */
A68_176  KKCBTRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(make_index);
 /* line 576: */
 /* line 577: */
WJCBTRN = U ;
switch ( WJCBTRN.mode )
{ 
case 20: /* REF STRUCT(MODE138,MODE176)  */
XJCBTRN_uro = (WJCBTRN.data.mode20);
 /* line 578: */
YJCBTRN = (*(&(XJCBTRN_uro->Elem)));
break;
case 21: /* REF STRUCT(MODE176,REF MODE191)  */
ZJCBTRN_ust = (WJCBTRN.data.mode21);
 /* line 579: */
{ 
AKCBTRN_el = ZJCBTRN_ust;
 /* line 581: */
BKCBTRN = (Index-1);
for ( CKCBTRN = 1;
CKCBTRN <= BKCBTRN;
CKCBTRN += 1 )
{ 
AKCBTRN_el = (*(&(AKCBTRN_el->Rest)));
}
 /* line 582: */
 /* line 583: */
 /* line 584: */
YJCBTRN = (*(&(AKCBTRN_el->Elem)));
} 
break;
case 17: /* REF STRUCT(MODE176,MODE153)  */
DKCBTRN_tr = (WJCBTRN.data.mode17);
 /* line 585: */
 /* line 586: */
 /* line 587: */
 /* line 588: */
 /* line 589: */
A_CALLPROC(NL(TJCBTRN_make_index),((*(&(DKCBTRN_tr->Unit))), ((TNMATRN_formula_int((*(&((&(DKCBTRN_tr->Range))->Lwb))), NL(Msg))+Index)-1), &EKCBTRN),((*(&(DKCBTRN_tr->Unit))), ((TNMATRN_formula_int((*(&((&(DKCBTRN_tr->Range))->Lwb))), NL(Msg))+Index)-1), &EKCBTRN,(NL(TJCBTRN_make_index)).nonlocals));
YJCBTRN = EKCBTRN;
break;
default: 
FKCBTRN.Unit = U;
GKCBTRN.Int = Index;
GKCBTRN.Text = TTCAOST_nullid;
 /* line 590: */
HKCBTRN = A_HEAP(A68_139 ) ;
(*HKCBTRN) = GKCBTRN ;
FKCBTRN.Index = A_UNITE(IKCBTRN,mode1,1,HKCBTRN);
JKCBTRN = A_HEAP(A68_186 ) ;
(*JKCBTRN) = FKCBTRN ;
YJCBTRN = A_UNITE(KKCBTRN,mode16,16,JKCBTRN);
break;
} 
A_PROC_EXIT(make_index);
*ReturnedValue = (YJCBTRN);
return;
} 
#undef NL

A_STATIC A68_176 * MKCBTRN_uminst_right(A68_176 * U)
{ 
A68_176  NKCBTRN;  /* united object - for case conformity */
A68_193 * OKCBTRN_um;
A68_176 * PKCBTRN;  /* clause result */
A_PROC_ENTRY(uminst_right);
 /* line 593: */
NKCBTRN = (*U) ;
switch ( NKCBTRN.mode )
{ 
case 23: /* REF STRUCT(MODE216,MODE176)  */
OKCBTRN_um = (NKCBTRN.data.mode23);
PKCBTRN = (&(OKCBTRN_um->Right));
break;
default: 
PKCBTRN = U;
break;
} 
A_PROC_EXIT(uminst_right);
return( PKCBTRN );
} 
#undef NL
 /* line 596: */
 /* line 597: */

A_STATIC A68_VOID  UKCBTRN_make_uminsts(A68_216  Inst, A68_154  Type, A68_150 * Dimension, A68_421  *ReturnedValue, void *NonLocals)
#define NL(x) (((VKCBTRN_make_uminsts *)NonLocals)->x)
{ 
A68_421  WKCBTRN_ur;
A68_154  XKCBTRN;  /* united object - for case conformity */
A68_158 * YKCBTRN_tfn;
A68_154  ZKCBTRN;  /* clause result */
A68_154  ALCBTRN_intype;
A68_421  BLCBTRN;  /* avoid structure result */
A68_193 * CLCBTRN_uminst;
A68_193  DLCBTRN;  /* collateral clause result */
A68_421  ELCBTRN;  /* collateral clause result */
A68_176  FLCBTRN;  /* OPERATORS - mode -> union mode */
A68_421  GLCBTRN;  /* clause result */
A68_191 * HLCBTRN_str;
A68_191 ** ILCBTRN_utail;
A68_419 * JLCBTRN_rhs;
A68_419 ** KLCBTRN_rtail;
A68_154  LLCBTRN;  /* united object - for case conformity */
A68_156 * MLCBTRN_tr;
A68_154  NLCBTRN;  /* clause result */
A68_154  OLCBTRN_tp;
A68_INT  PLCBTRN_index;
A68_INT  QLCBTRN;  /* to part of loop */
A68_421  RLCBTRN;  /* avoid structure result */
A68_191  SLCBTRN;  /* collateral clause result */
A68_191 * TLCBTRN;  /* YIELD */
A68_419  ULCBTRN;  /* collateral clause result */
A68_419 * VLCBTRN;  /* YIELD */
A68_421  WLCBTRN;  /* collateral clause result */
A68_176  XLCBTRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(make_uminsts);
 /* line 598: */
 /* line 602: */
{ 
 /* line 603: */
 /* line 604: */
 /* line 605: */
if ( (Dimension==BBAATRN_nilformulas) )
{ 
 /* line 606: */
XKCBTRN = Type ;
switch ( XKCBTRN.mode )
{ 
case 4: /* REF STRUCT(MODE154,MODE154)  */
YKCBTRN_tfn = (XKCBTRN.data.mode4);
 /* line 607: */
 /* line 608: */
ZKCBTRN = (*(&(YKCBTRN_tfn->From)));
break;
default: 
ZKCBTRN = Type;
break;
} 
ALCBTRN_intype = ZKCBTRN;
 /* line 609: */
A_CALLPROC(NL(VACBTRN_type_unit),(ALCBTRN_intype, &BLCBTRN),(ALCBTRN_intype, &BLCBTRN,(NL(VACBTRN_type_unit)).nonlocals));
WKCBTRN_ur = BLCBTRN;
 /* line 610: */
CLCBTRN_uminst = (A_HEAP(A68_193 ));
DLCBTRN.Inst = Inst;
DLCBTRN.Right = (*(&((&WKCBTRN_ur)->U)));
(*CLCBTRN_uminst) = DLCBTRN;
 /* line 611: */
ELCBTRN.U = A_UNITE(FLCBTRN,mode23,23,CLCBTRN_uminst);
 /* line 612: */
 /* line 613: */
ELCBTRN.Rs = (*(&((&WKCBTRN_ur)->Rs)));
GLCBTRN = ELCBTRN;
} 
else
{ 
HLCBTRN_str = IAAATRN_nilustr;
 /* line 614: */
ILCBTRN_utail = (&HLCBTRN_str);
 /* line 615: */
JLCBTRN_rhs = WTBBTRN_nilrhslist;
 /* line 616: */
KLCBTRN_rtail = (&JLCBTRN_rhs);
 /* line 617: */
 /* line 618: */
LLCBTRN = Type ;
switch ( LLCBTRN.mode )
{ 
case 2: /* REF STRUCT(MODE138,MODE154)  */
MLCBTRN_tr = (LLCBTRN.data.mode2);
 /* line 619: */
 /* line 620: */
NLCBTRN = (*(&(MLCBTRN_tr->Elem)));
break;
default: 
NLCBTRN = Type;
break;
} 
OLCBTRN_tp = NLCBTRN;
 /* line 622: */
 /* line 623: */
QLCBTRN = TNMATRN_formula_int((*(&(Dimension->Formula))), NL(Msg));
for ( PLCBTRN_index = 1;
PLCBTRN_index <= QLCBTRN;
PLCBTRN_index += 1 )
{ 
 /* line 624: */
A_CALLPROC(NL(TKCBTRN_make_uminsts),(Inst, OLCBTRN_tp, (*(&(Dimension->Rest))), &RLCBTRN),(Inst, OLCBTRN_tp, (*(&(Dimension->Rest))), &RLCBTRN,(NL(TKCBTRN_make_uminsts)).nonlocals));
WKCBTRN_ur = RLCBTRN;
 /* line 625: */
 /* line 626: */
SLCBTRN.Elem = (*(&((&WKCBTRN_ur)->U)));
SLCBTRN.Rest = IAAATRN_nilustr;
TLCBTRN = A_HEAP(A68_191 ) ;
(*TLCBTRN) = SLCBTRN ;
(*ILCBTRN_utail) = TLCBTRN;
 /* line 627: */
 /* line 628: */
ULCBTRN.Elem.Ru = MKCBTRN_uminst_right((&((*ILCBTRN_utail)->Elem)));
 /* line 629: */
ULCBTRN.Elem.Rs = (*(&((&WKCBTRN_ur)->Rs)));
ULCBTRN.Rest = WTBBTRN_nilrhslist;
VLCBTRN = A_HEAP(A68_419 ) ;
(*VLCBTRN) = ULCBTRN ;
(*KLCBTRN_rtail) = VLCBTRN;
 /* line 630: */
ILCBTRN_utail = (&((*ILCBTRN_utail)->Rest));
 /* line 631: */
 /* line 632: */
KLCBTRN_rtail = (&((*KLCBTRN_rtail)->Rest));
}
 /* line 633: */
WLCBTRN.U = A_UNITE(XLCBTRN,mode21,21,HLCBTRN_str);
 /* line 634: */
 /* line 635: */
WLCBTRN.Rs = JLCBTRN_rhs;
GLCBTRN = WLCBTRN;
} 
} 
A_PROC_EXIT(make_uminsts);
*ReturnedValue = (GLCBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  AMCBTRN_output_type(A68_154  T, A68_360 * Tprocs, A68_327  *ReturnedValue)
{ 
A68_154  BMCBTRN;  /* united object - for case conformity */
A68_158 * CMCBTRN_tfn;
A68_327  DMCBTRN;  /* collateral clause result */
A68_327  EMCBTRN;  /* clause result */
A68_370  FMCBTRN;  /* CALL */
A68_327  GMCBTRN;  /* avoid structure result */
A_PROC_ENTRY(output_type);
 /* line 638: */
 /* line 639: */
BMCBTRN = T ;
switch ( BMCBTRN.mode )
{ 
case 4: /* REF STRUCT(MODE154,MODE154)  */
CMCBTRN_tfn = (BMCBTRN.data.mode4);
DMCBTRN.T = (*(&(CMCBTRN_tfn->To)));
 /* line 640: */
DMCBTRN.C = A68_TRUE;
EMCBTRN = DMCBTRN;
break;
default: 
 /* line 641: */
FMCBTRN = (*(&(AWLATRN_nulltprocs->Type))) ;
A_CALLPROC(FMCBTRN,(T, Tprocs, &GMCBTRN),(T, Tprocs, &GMCBTRN,(FMCBTRN).nonlocals));
EMCBTRN = GMCBTRN;
break;
} 
A_PROC_EXIT(output_type);
*ReturnedValue = (EMCBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  JMCBTRN_make_proc(A68_211 * Make, void *NonLocals)
#define NL(x) (((KMCBTRN_make_proc *)NonLocals)->x)
{ 
A68_457  NMCBTRN_make_name;   /* proc value of non-global proc */
A68_217 * ONCBTRN_mkn;
A68_206  PNCBTRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(make_proc);
 /* line 644: */
 /* line 647: */
{ 
A_CLOSURE( NMCBTRN_make_name, OMCBTRN_make_name, PMCBTRN_make_name );
(( PMCBTRN_make_name * ) ( NMCBTRN_make_name.nonlocals )) -> SWBBTRN_namedata = NL(SWBBTRN_namedata);
(( PMCBTRN_make_name * ) ( NMCBTRN_make_name.nonlocals )) -> YVBBTRN_nametypes = NL(YVBBTRN_nametypes);
(( PMCBTRN_make_name * ) ( NMCBTRN_make_name.nonlocals )) -> KVBBTRN_remove_makes = NL(KVBBTRN_remove_makes);
(( PMCBTRN_make_name * ) ( NMCBTRN_make_name.nonlocals )) -> TKCBTRN_make_uminsts = NL(TKCBTRN_make_uminsts);
(( PMCBTRN_make_name * ) ( NMCBTRN_make_name.nonlocals )) -> Make = Make;
(( PMCBTRN_make_name * ) ( NMCBTRN_make_name.nonlocals )) -> MJCBTRN_add_new_step = NL(MJCBTRN_add_new_step);
(( PMCBTRN_make_name * ) ( NMCBTRN_make_name.nonlocals )) -> VACBTRN_type_unit = NL(VACBTRN_type_unit);
 /* line 683: */
ONCBTRN_mkn = (*(&(Make->Makenames)));
 /* line 685: */
for ( ;; )
{ 
 /* line 686: */
 /* line 687: */
if ( !((ONCBTRN_mkn!=NAAATRN_nilnames)) ) break;
A_CALLPROC(NMCBTRN_make_name,(ONCBTRN_mkn),(ONCBTRN_mkn,(NMCBTRN_make_name).nonlocals));
 /* line 688: */
 /* line 689: */
ONCBTRN_mkn = (*(&(ONCBTRN_mkn->Rest)));
}
 /* line 690: */
if ( !NL(KVBBTRN_remove_makes) )
{ 
 /* line 691: */
A_CALLPROC(NL(MJCBTRN_add_new_step),(A_UNITE(PNCBTRN,mode9,9,Make)),(A_UNITE(PNCBTRN,mode9,9,Make),(NL(MJCBTRN_add_new_step)).nonlocals));
} 
} 
A_PROC_EXIT(make_proc);
return;
} 
#undef NL

A_STATIC A68_VOID  SNCBTRN_join_proc(A68_212 * Join, void *NonLocals)
#define NL(x) (((TNCBTRN_join_proc *)NonLocals)->x)
{ 
A68_379  VNCBTRN;  /* CALL */
A68_336  WNCBTRN;  /* avoid structure result */
A68_336  UNCBTRN_fromc;
A68_BOOL  XNCBTRN_normal_join;
A68_459  AOCBTRN_join_rhs;   /* proc value of non-global proc */
A68_BOOL  HOCBTRN;  /* optbool result */
A68_210  IOCBTRN;  /* collateral clause result */
A68_217  JOCBTRN;  /* collateral clause result */
A68_217 * KOCBTRN;  /* YIELD */
A68_210 * LOCBTRN;  /* YIELD */
A68_206  MOCBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  NOCBTRN;  /* avoid structure result */
A68_VC  OOCBTRN_newname;
A68_251  POCBTRN;  /* collateral clause result */
A68_154  QOCBTRN;  /* avoid structure result */
A68_129  ROCBTRN;  /* OPERATORS - mode -> union mode */
A68_251 * SOCBTRN;  /* YIELD */
A68_336  TOCBTRN;  /* collateral clause result */
A68_181  UOCBTRN;  /* collateral clause result */
A68_181 * VOCBTRN;  /* YIELD */
A68_176  WOCBTRN;  /* OPERATORS - mode -> union mode */
A68_420  XOCBTRN;  /* avoid structure result */
A68_176 * YOCBTRN_ru;
A68_420  ZOCBTRN;  /* avoid structure result */
A_PROC_ENTRY(join_proc);
 /* line 694: */
 /* line 697: */
{ 
VNCBTRN = (*(&(NL(Tprocs)->Unit))) ;
A_CALLPROC(VNCBTRN,((*(&(Join->From))), NL(Tprocs), &WNCBTRN),((*(&(Join->From))), NL(Tprocs), &WNCBTRN,(VNCBTRN).nonlocals));
UNCBTRN_fromc = WNCBTRN;
 /* line 698: */
XNCBTRN_normal_join = A_CALLPROC(NL(JXBBTRN_is_normal_join),((*(&(Join->To))), 0),((*(&(Join->To))), 0,(NL(JXBBTRN_is_normal_join)).nonlocals));
 /* line 700: */
A_CLOSURE( AOCBTRN_join_rhs, BOCBTRN_join_rhs, COCBTRN_join_rhs );
(( COCBTRN_join_rhs * ) ( AOCBTRN_join_rhs.nonlocals )) -> AOCBTRN_join_rhs = AOCBTRN_join_rhs;
(( COCBTRN_join_rhs * ) ( AOCBTRN_join_rhs.nonlocals )) -> TJCBTRN_make_index = NL(TJCBTRN_make_index);
 /* line 725: */
HOCBTRN = NL(KVBBTRN_remove_makes);
if ( ! HOCBTRN )
{HOCBTRN = !XNCBTRN_normal_join;
}
 /* line 726: */
if ( HOCBTRN )
{ /* line 727: */
HOCBTRN = A_CALLPROC(NL(VXBBTRN_need_new_name),((*(&((&UNCBTRN_fromc)->U)))),((*(&((&UNCBTRN_fromc)->U))),(NL(VXBBTRN_need_new_name)).nonlocals));
}
 /* line 730: */
if ( HOCBTRN )
{ 
(*NL(AWBBTRN_new_nameno))+=1;
 /* line 731: */
 /* line 732: */
JOCBTRN.Nameno = (*NL(AWBBTRN_new_nameno));
JOCBTRN.Rest = NAAATRN_nilnames;
 /* line 733: */
KOCBTRN = A_HEAP(A68_217 ) ;
(*KOCBTRN) = JOCBTRN ;
IOCBTRN.Letnames = KOCBTRN;
IOCBTRN.Unit = (*(&((&UNCBTRN_fromc)->U)));
LOCBTRN = A_HEAP(A68_210 ) ;
(*LOCBTRN) = IOCBTRN ;
A_CALLPROC(NL(MJCBTRN_add_new_step),(A_UNITE(MOCBTRN,mode8,8,LOCBTRN)),(A_UNITE(MOCBTRN,mode8,8,LOCBTRN),(NL(MJCBTRN_add_new_step)).nonlocals));
 /* line 739: */
LUBBTRN_joinid( (*NL(AWBBTRN_new_nameno)), &NOCBTRN );
OOCBTRN_newname = NOCBTRN;
 /* line 740: */
 /* line 741: */
 /* line 742: */
POCBTRN.Name = OOCBTRN_newname;
 /* line 743: */
VUNATRN_unit_type( (*(&(Join->From))), NL(Fdec), NL(SVBBTRN_env), &QOCBTRN );
POCBTRN.Type = QOCBTRN;
POCBTRN.Attr = A_UNITE(ROCBTRN,mode5,5,(&ZHAATRN_attrnull));
SOCBTRN = (&A_VINDEX((*NL(YVBBTRN_nametypes)),(*NL(AWBBTRN_new_nameno)))) ;
(*SOCBTRN) = POCBTRN;
 /* line 744: */
UOCBTRN.Sort = KKAATRN_usource;
UOCBTRN.Nameno = (*NL(AWBBTRN_new_nameno));
VOCBTRN = A_HEAP(A68_181 ) ;
(*VOCBTRN) = UOCBTRN ;
TOCBTRN.U = A_UNITE(WOCBTRN,mode11,11,VOCBTRN);
 /* line 745: */
TOCBTRN.C = A68_TRUE;
UNCBTRN_fromc = TOCBTRN;
} 
 /* line 747: */
 /* line 748: */
 /* line 749: */
if ( XNCBTRN_normal_join )
{ 
A_CALLPROC(NL(WECBTRN_right_side),((&(Join->To)), &XOCBTRN),((&(Join->To)), &XOCBTRN,(NL(WECBTRN_right_side)).nonlocals));
YOCBTRN_ru = XOCBTRN.Ru;
 /* line 751: */
 /* line 752: */
 /* line 753: */
(*YOCBTRN_ru) = (*(&((&UNCBTRN_fromc)->U)));
} 
else
{ 
 /* line 754: */
 /* line 755: */
A_CALLPROC(NL(WECBTRN_right_side),((&(Join->To)), &ZOCBTRN),((&(Join->To)), &ZOCBTRN,(NL(WECBTRN_right_side)).nonlocals));
A_CALLPROC(AOCBTRN_join_rhs,((*(&((&UNCBTRN_fromc)->U))), ZOCBTRN),((*(&((&UNCBTRN_fromc)->U))), ZOCBTRN,(AOCBTRN_join_rhs).nonlocals));
} 
} 
A_PROC_EXIT(join_proc);
return;
} 
#undef NL

A_STATIC A68_VOID  CPCBTRN_step_proc(A68_206  Step, void *NonLocals)
#define NL(x) (((DPCBTRN_step_proc *)NonLocals)->x)
{ 
A68_206  EPCBTRN;  /* united object - for case conformity */
A68_211 * FPCBTRN_mk;
A68_212 * GPCBTRN_jo;
A68_395  HPCBTRN;  /* CALL */
A68_352  IPCBTRN;  /* avoid structure result */
A_PROC_ENTRY(step_proc);
 /* line 758: */
 /* line 759: */
{ 
 /* line 760: */
EPCBTRN = Step ;
switch ( EPCBTRN.mode )
{ 
case 9: /* REF STRUCT(REF MODE150,MODE216,REF MODE217)  */
FPCBTRN_mk = (EPCBTRN.data.mode9);
 /* line 761: */
A_CALLPROC(NL(IMCBTRN_make_proc),(FPCBTRN_mk),(FPCBTRN_mk,(NL(IMCBTRN_make_proc)).nonlocals));
break;
case 10: /* REF STRUCT(MODE176,MODE176)  */
GPCBTRN_jo = (EPCBTRN.data.mode10);
 /* line 762: */
 /* line 763: */
A_CALLPROC(NL(RNCBTRN_join_proc),(GPCBTRN_jo),(GPCBTRN_jo,(NL(RNCBTRN_join_proc)).nonlocals));
break;
default: 
 /* line 764: */
 /* line 765: */
HPCBTRN = (*(&(NL(Tprocs)->Step))) ;
A_CALLPROC(HPCBTRN,(Step, NL(Tprocs), &IPCBTRN),(Step, NL(Tprocs), &IPCBTRN,(HPCBTRN).nonlocals));
A_CALLPROC(NL(MJCBTRN_add_new_step),(IPCBTRN.S),(IPCBTRN.S,(NL(MJCBTRN_add_new_step)).nonlocals));
break;
} 
} 
A_PROC_EXIT(step_proc);
return;
} 
#undef NL
 /* line 768: */
 /* line 769: */

A_STATIC A68_VOID  NPCBTRN_next_dimension(A68_150 * Dimension, A68_176  Source, A68_176  Sink, void *NonLocals)
#define NL(x) (((OPCBTRN_next_dimension *)NonLocals)->x)
{ 
A68_212  PPCBTRN;  /* collateral clause result */
A68_212 * QPCBTRN;  /* YIELD */
A68_206  RPCBTRN;  /* OPERATORS - mode -> union mode */
A68_INT  SPCBTRN_index;
A68_INT  TPCBTRN;  /* to part of loop */
A68_176  UPCBTRN;  /* avoid structure result */
A68_176  VPCBTRN;  /* avoid structure result */
A_PROC_ENTRY(next_dimension);
 /* line 773: */
 /* line 774: */
{ 
 /* line 775: */
 /* line 776: */
if ( (Dimension==BBAATRN_nilformulas) )
{ 
PPCBTRN.From = Source;
PPCBTRN.To = Sink;
 /* line 777: */
 /* line 778: */
QPCBTRN = A_HEAP(A68_212 ) ;
(*QPCBTRN) = PPCBTRN ;
A_CALLPROC(NL(MJCBTRN_add_new_step),(A_UNITE(RPCBTRN,mode10,10,QPCBTRN)),(A_UNITE(RPCBTRN,mode10,10,QPCBTRN),(NL(MJCBTRN_add_new_step)).nonlocals));
} 
else
{ 
 /* line 779: */
TPCBTRN = TNMATRN_formula_int((*(&(Dimension->Formula))), NL(Msg));
for ( SPCBTRN_index = 1;
SPCBTRN_index <= TPCBTRN;
SPCBTRN_index += 1 )
{ 
 /* line 780: */
 /* line 781: */
 /* line 782: */
 /* line 783: */
A_CALLPROC(NL(TJCBTRN_make_index),(Sink, SPCBTRN_index, &UPCBTRN),(Sink, SPCBTRN_index, &UPCBTRN,(NL(TJCBTRN_make_index)).nonlocals));
A_CALLPROC(NL(TJCBTRN_make_index),(Source, SPCBTRN_index, &VPCBTRN),(Source, SPCBTRN_index, &VPCBTRN,(NL(TJCBTRN_make_index)).nonlocals));
A_CALLPROC(NL(MPCBTRN_next_dimension),((*(&(Dimension->Rest))), VPCBTRN, UPCBTRN),((*(&(Dimension->Rest))), VPCBTRN, UPCBTRN,(NL(MPCBTRN_next_dimension)).nonlocals));
}
 /* line 784: */
 /* line 785: */
} 
} 
A_PROC_EXIT(next_dimension);
return;
} 
#undef NL

A_STATIC A68_VOID  ZPCBTRN_remake_joins(A68_422 * Nd, A68_INT  Nameno, void *NonLocals)
#define NL(x) (((AQCBTRN_remake_joins *)NonLocals)->x)
{ 
A68_INT  BQCBTRN;  /* ADICOPS - ABS INT */
A68_181  CQCBTRN;  /* collateral clause result */
A68_181 * DQCBTRN;  /* YIELD */
A68_176  EQCBTRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(remake_joins);
 /* line 791: */
 /* line 792: */
{ 
 /* line 793: */
BQCBTRN = (*(&(Nd->Seriesid))) ;
if ( (A_ABS(BQCBTRN)==(*NL(DJCBTRN_seriesid))) )
{ 
 /* line 794: */
 /* line 795: */
CQCBTRN.Sort = LKAATRN_usink;
CQCBTRN.Nameno = Nameno;
 /* line 796: */
 /* line 797: */
DQCBTRN = A_HEAP(A68_181 ) ;
(*DQCBTRN) = CQCBTRN ;
A_CALLPROC(NL(MPCBTRN_next_dimension),((*(&(Nd->Dimentions))), (*(&(Nd->Source))), A_UNITE(EQCBTRN,mode11,11,DQCBTRN)),((*(&(Nd->Dimentions))), (*(&(Nd->Source))), A_UNITE(EQCBTRN,mode11,11,DQCBTRN),(NL(MPCBTRN_next_dimension)).nonlocals));
} 
} 
A_PROC_EXIT(remake_joins);
return;
} 
#undef NL

A_STATIC A68_VOID  OWBBTRN_generator(A68_BOOL  MWBBTRN_anonymous, A68_430  *ReturnedValue, void *NonLocals)
#define NL(x) (((PWBBTRN_generator *)NonLocals)->x)
{ 
A68_430  QWBBTRN;  /* clause result */
A68_430  RWBBTRN;  /* OPERATORS - dynamic generator */
{ 
RWBBTRN.upb = NL(ZVBBTRN_num_names) ;
( MWBBTRN_anonymous? A_VLOC(A68_422 ,RWBBTRN): A_VHEAP(A68_422 ,RWBBTRN) );
QWBBTRN = RWBBTRN;
} 
*ReturnedValue = (QWBBTRN);
return;
} 
#undef NL
 /* line 164: */
 /* line 165: */
 /* line 166: */

A_STATIC A68_VOID  BXBBTRN_init_namedata(A68_INT  Sort, A68_422 * Nd, A68_150 * Sizes, A68_INT  Seriesid, void *NonLocals)
#define NL(x) (((CXBBTRN_init_namedata *)NonLocals)->x)
{ 
A68_150 * DXBBTRN_el;
A68_INT  EXBBTRN_ndim;
A68_422  FXBBTRN;  /* collateral clause result */
A68_176  GXBBTRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(init_namedata);
 /* line 167: */
 /* line 168: */
{ 
DXBBTRN_el = Sizes;
 /* line 169: */
EXBBTRN_ndim = 0;
 /* line 171: */
for ( ;; )
{ 
if ( !((DXBBTRN_el!=BBAATRN_nilformulas)) ) break;
EXBBTRN_ndim+=1;
DXBBTRN_el = (*(&(DXBBTRN_el->Rest)));
}
 /* line 172: */
FXBBTRN.Sort = Sort;
FXBBTRN.Seriesid = Seriesid;
FXBBTRN.Ndim = EXBBTRN_ndim;
FXBBTRN.Dimentions = Sizes;
 /* line 173: */
FXBBTRN.Source = A_UNITE(GXBBTRN,mode34,34,(&FIAATRN_unull));
FXBBTRN.Refsrc.Ru = NL(IWBBTRN_blank_unit);
 /* line 174: */
FXBBTRN.Refsrc.Rs = WTBBTRN_nilrhslist;
(*Nd) = FXBBTRN;
} 
A_PROC_EXIT(init_namedata);
return;
} 
#undef NL

A_STATIC A68_BOOL  KXBBTRN_is_normal_join(A68_176  To, A68_INT  Idepth, void *NonLocals)
#define NL(x) (((LXBBTRN_is_normal_join *)NonLocals)->x)
{ 
A68_176  MXBBTRN;  /* united object - for case conformity */
A68_181 * NXBBTRN_un;
A68_INT  OXBBTRN;  /* YIELD */
A68_422 * PXBBTRN_nd;
A68_INT  QXBBTRN;  /* ADICOPS - ABS INT */
A68_INT * RXBBTRN;  /* YIELD */
A68_BOOL  SXBBTRN;  /* clause result */
A68_186 * TXBBTRN_ind;
A_PROC_ENTRY(is_normal_join);
 /* line 177: */
 /* line 182: */
{ 
 /* line 183: */
MXBBTRN = To ;
switch ( MXBBTRN.mode )
{ 
case 11: /* REF STRUCT(INT,INT)  */
NXBBTRN_un = (MXBBTRN.data.mode11);
 /* line 184: */
{ 
OXBBTRN = (*(&(NXBBTRN_un->Nameno))) ;
PXBBTRN_nd = (&A_VINDEX(NL(SWBBTRN_namedata),OXBBTRN));
 /* line 186: */
QXBBTRN = (*(&(PXBBTRN_nd->Seriesid))) ;
RXBBTRN = (&(PXBBTRN_nd->Seriesid)) ;
(*RXBBTRN) = A_ABS(QXBBTRN);
 /* line 187: */
if ( ((*(&(PXBBTRN_nd->Sort)))!=UTBBTRN_name_other) )
{ 
 /* line 188: */
SXBBTRN = A68_FALSE;
} 
else
{ 
if ( ((*(&(PXBBTRN_nd->Ndim)))==Idepth) )
{ 
 /* line 189: */
SXBBTRN = A68_TRUE;
} 
else
{ 
 /* line 190: */
 /* line 191: */
 /* line 192: */
SXBBTRN = A68_FALSE;
} 
} 
} 
break;
case 16: /* REF STRUCT(MODE176,MODE138)  */
TXBBTRN_ind = (MXBBTRN.data.mode16);
 /* line 193: */
 /* line 194: */
SXBBTRN = A_CALLPROC(NL(JXBBTRN_is_normal_join),((*(&(TXBBTRN_ind->Unit))), (Idepth+1)),((*(&(TXBBTRN_ind->Unit))), (Idepth+1),(NL(JXBBTRN_is_normal_join)).nonlocals));
break;
default: 
 /* line 195: */
 /* line 196: */
SXBBTRN = A68_FALSE;
break;
} 
} 
A_PROC_EXIT(is_normal_join);
return( SXBBTRN );
} 
#undef NL

A_STATIC A68_BOOL  WXBBTRN_need_new_name(A68_176  U, void *NonLocals)
#define NL(x) (((XXBBTRN_need_new_name *)NonLocals)->x)
{ 
A68_BOOL  YXBBTRN_result;
A68_379  BYBBTRN_nnn_unit;   /* proc value of non-global proc */
A68_405  JYBBTRN;  /* OPERATORS - mode -> union mode */
A68_379  KYBBTRN;  /* YIELD */
A68_404  LYBBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_360 * MYBBTRN_newtprocs;
A68_379  NYBBTRN;  /* CALL */
A68_336  OYBBTRN;  /* avoid structure result */
A68_BOOL  PYBBTRN;  /* clause result */
A_PROC_ENTRY(need_new_name);
 /* line 201: */
 /* line 202: */
{ 
YXBBTRN_result = A68_FALSE;
 /* line 204: */
A_CLOSURE( BYBBTRN_nnn_unit, CYBBTRN_nnn_unit, DYBBTRN_nnn_unit );
(( DYBBTRN_nnn_unit * ) ( BYBBTRN_nnn_unit.nonlocals )) -> YXBBTRN_result = (&YXBBTRN_result);
(( DYBBTRN_nnn_unit * ) ( BYBBTRN_nnn_unit.nonlocals )) -> Dec_tprocs = NL(Dec_tprocs);
 /* line 218: */
 /* line 219: */
KYBBTRN = BYBBTRN_nnn_unit ;
MYBBTRN_newtprocs = THJATRN_make_newtprocs(NL(Dec_tprocs), A_HVEC(LYBBTRN,A_UNITE(JYBBTRN,mode19,19,KYBBTRN),A68_405 ));
 /* line 221: */
NYBBTRN = (*(&(MYBBTRN_newtprocs->Unit))) ;
A_CALLPROC(NYBBTRN,(U, MYBBTRN_newtprocs, &OYBBTRN),(U, MYBBTRN_newtprocs, &OYBBTRN,(NYBBTRN).nonlocals));
OYBBTRN;
 /* line 222: */
MLJATRN_discard_tprocs(MYBBTRN_newtprocs);
 /* line 223: */
 /* line 224: */
PYBBTRN = YXBBTRN_result;
} 
A_PROC_EXIT(need_new_name);
return( PYBBTRN );
} 
#undef NL

A_STATIC A68_VOID  TYBBTRN_pre_pass_unit(A68_176  U, A68_360 * Tprocs, A68_336  *ReturnedValue, void *NonLocals)
#define NL(x) (((UYBBTRN_pre_pass_unit *)NonLocals)->x)
{ 
A68_176  VYBBTRN;  /* united object - for case conformity */
A68_199 * WYBBTRN_user;
A68_INT  XYBBTRN_seriesid;
A68_392  AZBBTRN_pre_pass_make;   /* proc value of non-global proc */
A68_393  JZBBTRN_pre_pass_join;   /* proc value of non-global proc */
A68_128 * TZBBTRN_hold_current;
A68_128  UZBBTRN;  /* collateral clause result */
A68_128 * VZBBTRN;  /* YIELD */
A68_436  WZBBTRN;  /* collateral clause result */
A68_405  XZBBTRN;  /* OPERATORS - mode -> union mode */
A68_393  YZBBTRN;  /* YIELD */
A68_405  ZZBBTRN;  /* OPERATORS - mode -> union mode */
A68_392  AACBTRN;  /* YIELD */
A68_404  BACBTRN;  /* OPERATORS - istruct -> vector */
A68_360 * CACBTRN_series_tprocs;
A68_396  DACBTRN;  /* CALL */
A68_353  EACBTRN;  /* avoid structure result */
A68_176  FACBTRN;  /* united object - for case conformity */
A68_INT * GACBTRN;  /* YIELD */
A68_379  HACBTRN;  /* CALL */
A68_336  IACBTRN;  /* avoid structure result */
A68_422 * JACBTRN_nd;
A68_INT  KACBTRN;  /* forall loop counter */
A68_BOOL  LACBTRN;  /* optbool result */
A68_INT * MACBTRN;  /* YIELD */
A68_128 * NACBTRN_il;
A68_BOOL  OACBTRN;  /* optbool result */
A68_INT * PACBTRN;  /* YIELD */
A68_336  QACBTRN;  /* collateral clause result */
A68_336  RACBTRN;  /* clause result */
A68_379  SACBTRN;  /* CALL */
A68_336  TACBTRN;  /* avoid structure result */
A_PROC_ENTRY(pre_pass_unit);
 /* line 227: */
 /* line 228: */
VYBBTRN = U ;
switch ( VYBBTRN.mode )
{ 
case 29: /* REF STRUCT(REF MODE205,MODE176)  */
WYBBTRN_user = (VYBBTRN.data.mode29);
 /* line 229: */
 /* line 230: */
{ 
XYBBTRN_seriesid = ((*NL(BWBBTRN_seriesidcnt))+=1);
 /* line 232: */
A_CLOSURE( AZBBTRN_pre_pass_make, BZBBTRN_pre_pass_make, CZBBTRN_pre_pass_make );
(( CZBBTRN_pre_pass_make * ) ( AZBBTRN_pre_pass_make.nonlocals )) -> AXBBTRN_init_namedata = NL(AXBBTRN_init_namedata);
(( CZBBTRN_pre_pass_make * ) ( AZBBTRN_pre_pass_make.nonlocals )) -> SWBBTRN_namedata = NL(SWBBTRN_namedata);
(( CZBBTRN_pre_pass_make * ) ( AZBBTRN_pre_pass_make.nonlocals )) -> XYBBTRN_seriesid = XYBBTRN_seriesid;
 /* line 250: */
A_CLOSURE( JZBBTRN_pre_pass_join, KZBBTRN_pre_pass_join, LZBBTRN_pre_pass_join );
(( LZBBTRN_pre_pass_join * ) ( JZBBTRN_pre_pass_join.nonlocals )) -> KVBBTRN_remove_makes = NL(KVBBTRN_remove_makes);
(( LZBBTRN_pre_pass_join * ) ( JZBBTRN_pre_pass_join.nonlocals )) -> JXBBTRN_is_normal_join = NL(JXBBTRN_is_normal_join);
(( LZBBTRN_pre_pass_join * ) ( JZBBTRN_pre_pass_join.nonlocals )) -> VXBBTRN_need_new_name = NL(VXBBTRN_need_new_name);
(( LZBBTRN_pre_pass_join * ) ( JZBBTRN_pre_pass_join.nonlocals )) -> CWBBTRN_num_new_names = NL(CWBBTRN_num_new_names);
(( LZBBTRN_pre_pass_join * ) ( JZBBTRN_pre_pass_join.nonlocals )) -> GWBBTRN_current_series = NL(GWBBTRN_current_series);
(( LZBBTRN_pre_pass_join * ) ( JZBBTRN_pre_pass_join.nonlocals )) -> XYBBTRN_seriesid = XYBBTRN_seriesid;
(( LZBBTRN_pre_pass_join * ) ( JZBBTRN_pre_pass_join.nonlocals )) -> DWBBTRN_dec_changes = NL(DWBBTRN_dec_changes);
 /* line 267: */
TZBBTRN_hold_current = (*NL(GWBBTRN_current_series));
 /* line 269: */
 /* line 270: */
UZBBTRN.Int = 0;
UZBBTRN.Rest = OAAATRN_nilints;
VZBBTRN = A_HEAP(A68_128 ) ;
(*VZBBTRN) = UZBBTRN ;
(*NL(GWBBTRN_current_series)) = (**NL(HWBBTRN_series_tail)) = VZBBTRN;
 /* line 271: */
(*NL(HWBBTRN_series_tail)) = (&((**NL(HWBBTRN_series_tail))->Rest));
 /* line 273: */
 /* line 274: */
 /* line 275: */
YZBBTRN = JZBBTRN_pre_pass_join ;
WZBBTRN.data[0] = A_UNITE(XZBBTRN,mode33,33,YZBBTRN);
AACBTRN = AZBBTRN_pre_pass_make ;
WZBBTRN.data[1] = A_UNITE(ZZBBTRN,mode32,32,AACBTRN);
CACBTRN_series_tprocs = THJATRN_make_newtprocs(Tprocs, A_HISVEC(BACBTRN,WZBBTRN,2,A68_405 ));
 /* line 278: */
DACBTRN = (*(&(CACBTRN_series_tprocs->Series))) ;
A_CALLPROC(DACBTRN,((*(&(WYBBTRN_user->Body))), CACBTRN_series_tprocs, &EACBTRN),((*(&(WYBBTRN_user->Body))), CACBTRN_series_tprocs, &EACBTRN,(DACBTRN).nonlocals));
EACBTRN;
 /* line 279: */
 /* line 280: */
FACBTRN = (*(&(WYBBTRN_user->Output))) ;
switch ( FACBTRN.mode )
{ 
case 34: /* REF STRUCT(INT)  */
 /* line 281: */
 /* line 282: */
{ 
GACBTRN = (&((*NL(GWBBTRN_current_series))->Int)) ;
(*GACBTRN) = XYBBTRN_seriesid;
 /* line 283: */
 /* line 284: */
 /* line 285: */
 /* line 286: */
(*NL(DWBBTRN_dec_changes)) = A68_TRUE;
} 
break;
default: 
 /* line 287: */
HACBTRN = (*(&(CACBTRN_series_tprocs->Unit))) ;
A_CALLPROC(HACBTRN,((*(&(WYBBTRN_user->Output))), CACBTRN_series_tprocs, &IACBTRN),((*(&(WYBBTRN_user->Output))), CACBTRN_series_tprocs, &IACBTRN,(HACBTRN).nonlocals));
IACBTRN;
break;
} 
 /* line 289: */
MLJATRN_discard_tprocs(CACBTRN_series_tprocs);
 /* line 291: */
KACBTRN = NL(SWBBTRN_namedata).upb -1;
JACBTRN_nd = NL(SWBBTRN_namedata).data;
for (;KACBTRN-- >= 0;
(JACBTRN_nd++
) )
{
 /* line 292: */
 /* line 293: */
if ( !(((*(&((*NL(GWBBTRN_current_series))->Int)))<=0)) ) break;
LACBTRN = ((*(&(JACBTRN_nd->Sort)))==UTBBTRN_name_other);
if ( LACBTRN )
{ /* line 294: */
LACBTRN = ((*(&(JACBTRN_nd->Seriesid)))==(-XYBBTRN_seriesid));
}
 /* line 295: */
if ( LACBTRN )
{ 
MACBTRN = (&((*NL(GWBBTRN_current_series))->Int)) ;
(*MACBTRN) = XYBBTRN_seriesid;
 /* line 296: */
 /* line 297: */
 /* line 298: */
(*NL(DWBBTRN_dec_changes)) = A68_TRUE;
} 
}
 /* line 300: */
NACBTRN_il = (*(&((*NL(GWBBTRN_current_series))->Rest)));
 /* line 302: */
for ( ;; )
{ 
OACBTRN = (NACBTRN_il!=OAAATRN_nilints);
if ( OACBTRN )
{ /* line 303: */
OACBTRN = ((*(&((*NL(GWBBTRN_current_series))->Int)))<=0);
}
 /* line 304: */
if ( !(OACBTRN) ) break;
 /* line 305: */
if ( ((*(&(NACBTRN_il->Int)))>0) )
{ 
 /* line 306: */
PACBTRN = (&((*NL(GWBBTRN_current_series))->Int)) ;
(*PACBTRN) = XYBBTRN_seriesid;
} 
 /* line 307: */
 /* line 308: */
NACBTRN_il = (*(&(NACBTRN_il->Rest)));
}
 /* line 309: */
(*NL(GWBBTRN_current_series)) = TZBBTRN_hold_current;
 /* line 310: */
QACBTRN.U = U;
 /* line 311: */
 /* line 312: */
 /* line 313: */
QACBTRN.C = A68_FALSE;
RACBTRN = QACBTRN;
} 
break;
default: 
 /* line 314: */
SACBTRN = (*(&(NL(Dec_tprocs)->Unit))) ;
A_CALLPROC(SACBTRN,(U, Tprocs, &TACBTRN),(U, Tprocs, &TACBTRN,(SACBTRN).nonlocals));
RACBTRN = TACBTRN;
break;
} 
A_PROC_EXIT(pre_pass_unit);
*ReturnedValue = (RACBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  WACBTRN_type_unit(A68_154  T, A68_421  *ReturnedValue, void *NonLocals)
#define NL(x) (((XACBTRN_type_unit *)NonLocals)->x)
{ 
A68_438  BBCBTRN_row_unit;   /* proc value of non-global proc */
A68_439  UBCBTRN_str_unit;   /* proc value of non-global proc */
A68_438  OCCBTRN_string_unit;   /* proc value of non-global proc */
A68_154  WDCBTRN;  /* united object - for case conformity */
A68_421  XDCBTRN;  /* collateral clause result */
A68_176  YDCBTRN;  /* OPERATORS - mode -> union mode */
A68_421  ZDCBTRN;  /* clause result */
A68_155 * AECBTRN_tn;
A68_258  BECBTRN;  /* OPERATORS - simple index */
A68_INT  CECBTRN;  /* YIELD */
A68_167  DECBTRN;  /* united object - for case conformity */
A68_163 * EECBTRN_tv;
A68_421  FECBTRN;  /* avoid structure result */
A68_421  GECBTRN;  /* collateral clause result */
A68_176  HECBTRN;  /* OPERATORS - mode -> union mode */
A68_156 * IECBTRN_tr;
A68_421  JECBTRN;  /* avoid structure result */
A68_157 * KECBTRN_tst;
A68_421  LECBTRN;  /* avoid structure result */
A68_160 * MECBTRN_tg;
A68_421  NECBTRN;  /* avoid structure result */
A68_158 * OECBTRN_tfn;
A68_421  PECBTRN;  /* avoid structure result */
A68_159 * QECBTRN_tb;
A68_421  RECBTRN;  /* avoid structure result */
A68_421  UECBTRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(type_unit);
 /* line 317: */
 /* line 321: */
{ 
A_CLOSURE( BBCBTRN_row_unit, CBCBTRN_row_unit, DBCBTRN_row_unit );
(( DBCBTRN_row_unit * ) ( BBCBTRN_row_unit.nonlocals )) -> Msg = NL(Msg);
(( DBCBTRN_row_unit * ) ( BBCBTRN_row_unit.nonlocals )) -> VACBTRN_type_unit = NL(VACBTRN_type_unit);
 /* line 341: */
A_CLOSURE( UBCBTRN_str_unit, VBCBTRN_str_unit, WBCBTRN_str_unit );
(( WBCBTRN_str_unit * ) ( UBCBTRN_str_unit.nonlocals )) -> VACBTRN_type_unit = NL(VACBTRN_type_unit);
 /* line 363: */
A_CLOSURE( OCCBTRN_string_unit, PCCBTRN_string_unit, QCCBTRN_string_unit );
(( QCCBTRN_string_unit * ) ( OCCBTRN_string_unit.nonlocals )) -> VACBTRN_type_unit = NL(VACBTRN_type_unit);
(( QCCBTRN_string_unit * ) ( OCCBTRN_string_unit.nonlocals )) -> Msg = NL(Msg);
 /* line 394: */
 /* line 395: */
WDCBTRN = T ;
switch ( WDCBTRN.mode )
{ 
case 7: /* REF STRUCT(INT)  */
XDCBTRN.U = A_UNITE(YDCBTRN,mode6,6,(&RIAATRN_cvoid));
 /* line 396: */
XDCBTRN.Rs = WTBBTRN_nilrhslist;
ZDCBTRN = XDCBTRN;
break;
case 1: /* REF STRUCT(INT)  */
AECBTRN_tn = (WDCBTRN.data.mode1);
 /* line 397: */
 /* line 398: */
BECBTRN = (*(&(NL(SVBBTRN_env)->Types))) ;
CECBTRN = (*(&(AECBTRN_tn->Typeno))) ;
DECBTRN = (*(&((*(&A_VINDEX(BECBTRN,CECBTRN)))->Body))) ;
switch ( DECBTRN.mode )
{ 
case 3: /* REF STRUCT(MODE154)  */
EECBTRN_tv = (DECBTRN.data.mode3);
 /* line 399: */
A_CALLPROC(NL(VACBTRN_type_unit),((*(&(EECBTRN_tv->Tag))), &FECBTRN),((*(&(EECBTRN_tv->Tag))), &FECBTRN,(NL(VACBTRN_type_unit)).nonlocals));
ZDCBTRN = FECBTRN;
break;
default: 
GECBTRN.U = A_UNITE(HECBTRN,mode6,6,(&RIAATRN_cvoid));
 /* line 404: */
 /* line 405: */
GECBTRN.Rs = WTBBTRN_nilrhslist;
ZDCBTRN = GECBTRN;
break;
} 
break;
case 2: /* REF STRUCT(MODE138,MODE154)  */
IECBTRN_tr = (WDCBTRN.data.mode2);
 /* line 406: */
A_CALLPROC(BBCBTRN_row_unit,((*(&(IECBTRN_tr->Elem))), (*(&(IECBTRN_tr->Size))), &JECBTRN),((*(&(IECBTRN_tr->Elem))), (*(&(IECBTRN_tr->Size))), &JECBTRN,(BBCBTRN_row_unit).nonlocals));
ZDCBTRN = JECBTRN;
break;
case 3: /* REF STRUCT(MODE154,REF MODE157)  */
KECBTRN_tst = (WDCBTRN.data.mode3);
 /* line 407: */
A_CALLPROC(UBCBTRN_str_unit,(KECBTRN_tst, &LECBTRN),(KECBTRN_tst, &LECBTRN,(UBCBTRN_str_unit).nonlocals));
ZDCBTRN = LECBTRN;
break;
case 6: /* REF STRUCT(MODE138,MODE154)  */
MECBTRN_tg = (WDCBTRN.data.mode6);
 /* line 408: */
A_CALLPROC(OCCBTRN_string_unit,((*(&(MECBTRN_tg->Char))), (*(&(MECBTRN_tg->Size))), &NECBTRN),((*(&(MECBTRN_tg->Char))), (*(&(MECBTRN_tg->Size))), &NECBTRN,(OCCBTRN_string_unit).nonlocals));
ZDCBTRN = NECBTRN;
break;
case 4: /* REF STRUCT(MODE154,MODE154)  */
OECBTRN_tfn = (WDCBTRN.data.mode4);
 /* line 409: */
A_CALLPROC(NL(VACBTRN_type_unit),((*(&(OECBTRN_tfn->From))), &PECBTRN),((*(&(OECBTRN_tfn->From))), &PECBTRN,(NL(VACBTRN_type_unit)).nonlocals));
ZDCBTRN = PECBTRN;
break;
case 5: /* REF STRUCT(MODE154)  */
QECBTRN_tb = (WDCBTRN.data.mode5);
 /* line 410: */
 /* line 411: */
A_CALLPROC(NL(VACBTRN_type_unit),((*(&(QECBTRN_tb->Type))), &RECBTRN),((*(&(QECBTRN_tb->Type))), &RECBTRN,(NL(VACBTRN_type_unit)).nonlocals));
ZDCBTRN = RECBTRN;
break;
default: 
A_CALLPROC(NL(OVBBTRN_sysfault),(TECBTRN),(TECBTRN,(NL(OVBBTRN_sysfault)).nonlocals));
 /* line 412: */
 /* line 413: */
 /* line 414: */
ZDCBTRN = UECBTRN;
break;
} 
} 
A_PROC_EXIT(type_unit);
*ReturnedValue = (ZDCBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  XECBTRN_right_side(A68_176 * Ru, A68_420  *ReturnedValue, void *NonLocals)
#define NL(x) (((YECBTRN_right_side *)NonLocals)->x)
{ 
A68_442  BFCBTRN_do_conc;   /* proc value of non-global proc */
A68_445  AGCBTRN_do_index;   /* proc value of non-global proc */
A68_447  MGCBTRN_do_trim;   /* proc value of non-global proc */
A68_448  GHCBTRN_do_ustr;   /* proc value of non-global proc */
A68_449  SHCBTRN_do_urow;   /* proc value of non-global proc */
A68_176  EICBTRN;  /* united object - for case conformity */
A68_420  FICBTRN;  /* collateral clause result */
A68_420  GICBTRN;  /* clause result */
A68_191 * HICBTRN_ustr;
A68_420  IICBTRN;  /* avoid structure result */
A68_190 * JICBTRN_urow;
A68_420  KICBTRN;  /* avoid structure result */
A68_420  LICBTRN;  /* collateral clause result */
A68_186 * MICBTRN_uindex;
A68_420  NICBTRN;  /* avoid structure result */
A68_420  OICBTRN;  /* avoid structure result */
A68_187 * PICBTRN_utrim;
A68_420  QICBTRN;  /* avoid structure result */
A68_420  RICBTRN;  /* avoid structure result */
A68_192 * SICBTRN_uconc;
A68_420  TICBTRN;  /* avoid structure result */
A68_181 * UICBTRN_uname;
A68_INT  VICBTRN;  /* YIELD */
A68_200 * WICBTRN_uattr;
A68_420  XICBTRN;  /* avoid structure result */
A68_202 * YICBTRN_ubracket;
A68_420  ZICBTRN;  /* avoid structure result */
A68_420  CJCBTRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(right_side);
 /* line 417: */
 /* line 426: */
{ 
A_CLOSURE( BFCBTRN_do_conc, CFCBTRN_do_conc, DFCBTRN_do_conc );
(( DFCBTRN_do_conc * ) ( BFCBTRN_do_conc.nonlocals )) -> OVBBTRN_sysfault = NL(OVBBTRN_sysfault);
(( DFCBTRN_do_conc * ) ( BFCBTRN_do_conc.nonlocals )) -> WECBTRN_right_side = NL(WECBTRN_right_side);
(( DFCBTRN_do_conc * ) ( BFCBTRN_do_conc.nonlocals )) -> Ru = Ru;
 /* line 460: */
A_CLOSURE( AGCBTRN_do_index, BGCBTRN_do_index, CGCBTRN_do_index );
(( CGCBTRN_do_index * ) ( AGCBTRN_do_index.nonlocals )) -> Msg = NL(Msg);
(( CGCBTRN_do_index * ) ( AGCBTRN_do_index.nonlocals )) -> OVBBTRN_sysfault = NL(OVBBTRN_sysfault);
 /* line 472: */
A_CLOSURE( MGCBTRN_do_trim, NGCBTRN_do_trim, OGCBTRN_do_trim );
(( OGCBTRN_do_trim * ) ( MGCBTRN_do_trim.nonlocals )) -> Msg = NL(Msg);
(( OGCBTRN_do_trim * ) ( MGCBTRN_do_trim.nonlocals )) -> Ru = Ru;
(( OGCBTRN_do_trim * ) ( MGCBTRN_do_trim.nonlocals )) -> OVBBTRN_sysfault = NL(OVBBTRN_sysfault);
 /* line 495: */
A_CLOSURE( GHCBTRN_do_ustr, HHCBTRN_do_ustr, IHCBTRN_do_ustr );
(( IHCBTRN_do_ustr * ) ( GHCBTRN_do_ustr.nonlocals )) -> WECBTRN_right_side = NL(WECBTRN_right_side);
(( IHCBTRN_do_ustr * ) ( GHCBTRN_do_ustr.nonlocals )) -> Ru = Ru;
 /* line 511: */
A_CLOSURE( SHCBTRN_do_urow, THCBTRN_do_urow, UHCBTRN_do_urow );
(( UHCBTRN_do_urow * ) ( SHCBTRN_do_urow.nonlocals )) -> WECBTRN_right_side = NL(WECBTRN_right_side);
(( UHCBTRN_do_urow * ) ( SHCBTRN_do_urow.nonlocals )) -> Ru = Ru;
 /* line 525: */
 /* line 526: */
EICBTRN = (*Ru) ;
switch ( EICBTRN.mode )
{ 
case 6: /* REF STRUCT(INT)  */
FICBTRN.Ru = Ru;
 /* line 529: */
FICBTRN.Rs = WTBBTRN_nilrhslist;
GICBTRN = FICBTRN;
break;
case 21: /* REF STRUCT(MODE176,REF MODE191)  */
HICBTRN_ustr = (EICBTRN.data.mode21);
 /* line 531: */
A_CALLPROC(GHCBTRN_do_ustr,(HICBTRN_ustr, &IICBTRN),(HICBTRN_ustr, &IICBTRN,(GHCBTRN_do_ustr).nonlocals));
GICBTRN = IICBTRN;
break;
case 20: /* REF STRUCT(MODE138,MODE176)  */
JICBTRN_urow = (EICBTRN.data.mode20);
 /* line 532: */
A_CALLPROC(SHCBTRN_do_urow,(JICBTRN_urow, &KICBTRN),(JICBTRN_urow, &KICBTRN,(SHCBTRN_do_urow).nonlocals));
GICBTRN = KICBTRN;
break;
case 34: /* REF STRUCT(INT)  */
LICBTRN.Ru = Ru;
 /* line 536: */
LICBTRN.Rs = WTBBTRN_nilrhslist;
GICBTRN = LICBTRN;
break;
case 16: /* REF STRUCT(MODE176,MODE138)  */
MICBTRN_uindex = (EICBTRN.data.mode16);
 /* line 537: */
 /* line 538: */
A_CALLPROC(NL(WECBTRN_right_side),((&(MICBTRN_uindex->Unit)), &NICBTRN),((&(MICBTRN_uindex->Unit)), &NICBTRN,(NL(WECBTRN_right_side)).nonlocals));
A_CALLPROC(AGCBTRN_do_index,(NICBTRN, (*(&(MICBTRN_uindex->Index))), &OICBTRN),(NICBTRN, (*(&(MICBTRN_uindex->Index))), &OICBTRN,(AGCBTRN_do_index).nonlocals));
GICBTRN = OICBTRN;
break;
case 17: /* REF STRUCT(MODE176,MODE153)  */
PICBTRN_utrim = (EICBTRN.data.mode17);
 /* line 539: */
 /* line 540: */
A_CALLPROC(NL(WECBTRN_right_side),((&(PICBTRN_utrim->Unit)), &QICBTRN),((&(PICBTRN_utrim->Unit)), &QICBTRN,(NL(WECBTRN_right_side)).nonlocals));
A_CALLPROC(MGCBTRN_do_trim,(QICBTRN, (*(&(PICBTRN_utrim->Range))), &RICBTRN),(QICBTRN, (*(&(PICBTRN_utrim->Range))), &RICBTRN,(MGCBTRN_do_trim).nonlocals));
GICBTRN = RICBTRN;
break;
case 22: /* REF STRUCT(BOOL,INT,MODE176,MODE176)  */
SICBTRN_uconc = (EICBTRN.data.mode22);
 /* line 541: */
 /* line 542: */
A_CALLPROC(BFCBTRN_do_conc,(SICBTRN_uconc, &TICBTRN),(SICBTRN_uconc, &TICBTRN,(BFCBTRN_do_conc).nonlocals));
GICBTRN = TICBTRN;
break;
case 11: /* REF STRUCT(INT,INT)  */
UICBTRN_uname = (EICBTRN.data.mode11);
 /* line 543: */
 /* line 544: */
VICBTRN = (*(&(UICBTRN_uname->Nameno))) ;
GICBTRN = (*(&((&A_VINDEX(NL(SWBBTRN_namedata),VICBTRN))->Refsrc)));
break;
case 30: /* REF STRUCT(MODE176,MODE129)  */
WICBTRN_uattr = (EICBTRN.data.mode30);
 /* line 545: */
 /* line 546: */
A_CALLPROC(NL(WECBTRN_right_side),((&(WICBTRN_uattr->Unit)), &XICBTRN),((&(WICBTRN_uattr->Unit)), &XICBTRN,(NL(WECBTRN_right_side)).nonlocals));
GICBTRN = XICBTRN;
break;
case 32: /* REF STRUCT(MODE176)  */
YICBTRN_ubracket = (EICBTRN.data.mode32);
 /* line 547: */
 /* line 548: */
 /* line 549: */
A_CALLPROC(NL(WECBTRN_right_side),((&(YICBTRN_ubracket->Unit)), &ZICBTRN),((&(YICBTRN_ubracket->Unit)), &ZICBTRN,(NL(WECBTRN_right_side)).nonlocals));
GICBTRN = ZICBTRN;
break;
default: 
A_CALLPROC(NL(OVBBTRN_sysfault),(BJCBTRN),(BJCBTRN,(NL(OVBBTRN_sysfault)).nonlocals));
 /* line 550: */
 /* line 551: */
 /* line 552: */
GICBTRN = CJCBTRN;
break;
} 
} 
A_PROC_EXIT(right_side);
*ReturnedValue = (GICBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  HJCBTRN_useries_proc(A68_199 * Ser, A68_360 * Tprocs, A68_336  *ReturnedValue, void *NonLocals)
#define NL(x) (((IJCBTRN_useries_proc *)NonLocals)->x)
{ 
A68_205 * JJCBTRN_new_body;
A68_205 ** KJCBTRN_stail;
A68_452  MJCBTRN_add_new_step;   /* proc value of non-global proc */
A68_453  TJCBTRN_make_index;   /* proc value of non-global proc */
A68_455  TKCBTRN_make_uminsts;   /* proc value of non-global proc */
A68_456  IMCBTRN_make_proc;   /* proc value of non-global proc */
A68_458  RNCBTRN_join_proc;   /* proc value of non-global proc */
A68_452  BPCBTRN_step_proc;   /* proc value of non-global proc */
A68_460  MPCBTRN_next_dimension;   /* proc value of non-global proc */
A68_461  YPCBTRN_remake_joins;   /* proc value of non-global proc */
A68_205 * FQCBTRN_old_body;
A68_INT  GQCBTRN_nno;
A68_INT  HQCBTRN;  /* to part of loop */
A68_379  IQCBTRN;  /* CALL */
A68_336  JQCBTRN;  /* avoid structure result */
A68_336  KQCBTRN_outc;
A68_176  LQCBTRN;  /* united object - for case conformity */
A68_176  MQCBTRN;  /* clause result */
A68_INT  NQCBTRN;  /* YIELD */
A68_191 * OQCBTRN_outstr;
A68_191 ** PQCBTRN_utail;
A68_217 * QQCBTRN_ot;
A68_191  RQCBTRN;  /* collateral clause result */
A68_INT  SQCBTRN;  /* YIELD */
A68_191 * TQCBTRN;  /* YIELD */
A68_176  UQCBTRN;  /* OPERATORS - mode -> union mode */
A68_176  VQCBTRN_new_output;
A68_199  WQCBTRN;  /* collateral clause result */
A68_199 * XQCBTRN;  /* YIELD */
A68_199 * YQCBTRN_new_series;
A68_336  ZQCBTRN;  /* collateral clause result */
A68_176  ARCBTRN;  /* OPERATORS - mode -> union mode */
A68_336  BRCBTRN;  /* clause result */
A_PROC_ENTRY(useries_proc);
 /* line 557: */
 /* line 559: */
{ 
JJCBTRN_new_body = SAAATRN_nilseries;
 /* line 561: */
KJCBTRN_stail = (&JJCBTRN_new_body);
 /* line 564: */
A_CLOSURE( MJCBTRN_add_new_step, NJCBTRN_add_new_step, OJCBTRN_add_new_step );
(( OJCBTRN_add_new_step * ) ( MJCBTRN_add_new_step.nonlocals )) -> KJCBTRN_stail = (&KJCBTRN_stail);
 /* line 572: */
A_CLOSURE( TJCBTRN_make_index, UJCBTRN_make_index, VJCBTRN_make_index );
(( VJCBTRN_make_index * ) ( TJCBTRN_make_index.nonlocals )) -> TJCBTRN_make_index = TJCBTRN_make_index;
(( VJCBTRN_make_index * ) ( TJCBTRN_make_index.nonlocals )) -> Msg = NL(Msg);
 /* line 592: */
 /* line 595: */
A_CLOSURE( TKCBTRN_make_uminsts, UKCBTRN_make_uminsts, VKCBTRN_make_uminsts );
(( VKCBTRN_make_uminsts * ) ( TKCBTRN_make_uminsts.nonlocals )) -> VACBTRN_type_unit = NL(VACBTRN_type_unit);
(( VKCBTRN_make_uminsts * ) ( TKCBTRN_make_uminsts.nonlocals )) -> Msg = NL(Msg);
(( VKCBTRN_make_uminsts * ) ( TKCBTRN_make_uminsts.nonlocals )) -> TKCBTRN_make_uminsts = TKCBTRN_make_uminsts;
 /* line 637: */
 /* line 643: */
A_CLOSURE( IMCBTRN_make_proc, JMCBTRN_make_proc, KMCBTRN_make_proc );
(( KMCBTRN_make_proc * ) ( IMCBTRN_make_proc.nonlocals )) -> SWBBTRN_namedata = NL(SWBBTRN_namedata);
(( KMCBTRN_make_proc * ) ( IMCBTRN_make_proc.nonlocals )) -> YVBBTRN_nametypes = NL(YVBBTRN_nametypes);
(( KMCBTRN_make_proc * ) ( IMCBTRN_make_proc.nonlocals )) -> KVBBTRN_remove_makes = NL(KVBBTRN_remove_makes);
(( KMCBTRN_make_proc * ) ( IMCBTRN_make_proc.nonlocals )) -> TKCBTRN_make_uminsts = TKCBTRN_make_uminsts;
(( KMCBTRN_make_proc * ) ( IMCBTRN_make_proc.nonlocals )) -> MJCBTRN_add_new_step = MJCBTRN_add_new_step;
(( KMCBTRN_make_proc * ) ( IMCBTRN_make_proc.nonlocals )) -> VACBTRN_type_unit = NL(VACBTRN_type_unit);
 /* line 693: */
A_CLOSURE( RNCBTRN_join_proc, SNCBTRN_join_proc, TNCBTRN_join_proc );
(( TNCBTRN_join_proc * ) ( RNCBTRN_join_proc.nonlocals )) -> Tprocs = Tprocs;
(( TNCBTRN_join_proc * ) ( RNCBTRN_join_proc.nonlocals )) -> JXBBTRN_is_normal_join = NL(JXBBTRN_is_normal_join);
(( TNCBTRN_join_proc * ) ( RNCBTRN_join_proc.nonlocals )) -> TJCBTRN_make_index = TJCBTRN_make_index;
(( TNCBTRN_join_proc * ) ( RNCBTRN_join_proc.nonlocals )) -> KVBBTRN_remove_makes = NL(KVBBTRN_remove_makes);
(( TNCBTRN_join_proc * ) ( RNCBTRN_join_proc.nonlocals )) -> VXBBTRN_need_new_name = NL(VXBBTRN_need_new_name);
(( TNCBTRN_join_proc * ) ( RNCBTRN_join_proc.nonlocals )) -> AWBBTRN_new_nameno = NL(AWBBTRN_new_nameno);
(( TNCBTRN_join_proc * ) ( RNCBTRN_join_proc.nonlocals )) -> MJCBTRN_add_new_step = MJCBTRN_add_new_step;
(( TNCBTRN_join_proc * ) ( RNCBTRN_join_proc.nonlocals )) -> YVBBTRN_nametypes = NL(YVBBTRN_nametypes);
(( TNCBTRN_join_proc * ) ( RNCBTRN_join_proc.nonlocals )) -> Fdec = NL(Fdec);
(( TNCBTRN_join_proc * ) ( RNCBTRN_join_proc.nonlocals )) -> SVBBTRN_env = NL(SVBBTRN_env);
(( TNCBTRN_join_proc * ) ( RNCBTRN_join_proc.nonlocals )) -> WECBTRN_right_side = NL(WECBTRN_right_side);
 /* line 757: */
A_CLOSURE( BPCBTRN_step_proc, CPCBTRN_step_proc, DPCBTRN_step_proc );
(( DPCBTRN_step_proc * ) ( BPCBTRN_step_proc.nonlocals )) -> IMCBTRN_make_proc = IMCBTRN_make_proc;
(( DPCBTRN_step_proc * ) ( BPCBTRN_step_proc.nonlocals )) -> RNCBTRN_join_proc = RNCBTRN_join_proc;
(( DPCBTRN_step_proc * ) ( BPCBTRN_step_proc.nonlocals )) -> MJCBTRN_add_new_step = MJCBTRN_add_new_step;
(( DPCBTRN_step_proc * ) ( BPCBTRN_step_proc.nonlocals )) -> Tprocs = Tprocs;
 /* line 767: */
A_CLOSURE( MPCBTRN_next_dimension, NPCBTRN_next_dimension, OPCBTRN_next_dimension );
(( OPCBTRN_next_dimension * ) ( MPCBTRN_next_dimension.nonlocals )) -> MJCBTRN_add_new_step = MJCBTRN_add_new_step;
(( OPCBTRN_next_dimension * ) ( MPCBTRN_next_dimension.nonlocals )) -> Msg = NL(Msg);
(( OPCBTRN_next_dimension * ) ( MPCBTRN_next_dimension.nonlocals )) -> MPCBTRN_next_dimension = MPCBTRN_next_dimension;
(( OPCBTRN_next_dimension * ) ( MPCBTRN_next_dimension.nonlocals )) -> TJCBTRN_make_index = TJCBTRN_make_index;
 /* line 787: */
A_CLOSURE( YPCBTRN_remake_joins, ZPCBTRN_remake_joins, AQCBTRN_remake_joins );
(( AQCBTRN_remake_joins * ) ( YPCBTRN_remake_joins.nonlocals )) -> DJCBTRN_seriesid = NL(DJCBTRN_seriesid);
(( AQCBTRN_remake_joins * ) ( YPCBTRN_remake_joins.nonlocals )) -> MPCBTRN_next_dimension = MPCBTRN_next_dimension;
 /* line 800: */
FQCBTRN_old_body = (*(&(Ser->Body)));
 /* line 802: */
for ( ;; )
{ 
 /* line 803: */
 /* line 804: */
if ( !((FQCBTRN_old_body!=SAAATRN_nilseries)) ) break;
A_CALLPROC(BPCBTRN_step_proc,((*(&(FQCBTRN_old_body->Step)))),((*(&(FQCBTRN_old_body->Step))),(BPCBTRN_step_proc).nonlocals));
 /* line 805: */
 /* line 806: */
FQCBTRN_old_body = (*(&(FQCBTRN_old_body->Rest)));
}
 /* line 808: */
 /* line 809: */
 /* line 810: */
if ( !NL(KVBBTRN_remove_makes) )
{ 
 /* line 811: */
HQCBTRN = NL(SWBBTRN_namedata).upb;
for ( GQCBTRN_nno = 1;
GQCBTRN_nno <= HQCBTRN;
GQCBTRN_nno += 1 )
{ 
 /* line 812: */
 /* line 813: */
if ( ((*(&((&A_VINDEX(NL(SWBBTRN_namedata),GQCBTRN_nno))->Sort)))==UTBBTRN_name_other) )
{ 
 /* line 814: */
 /* line 815: */
A_CALLPROC(YPCBTRN_remake_joins,((&A_VINDEX(NL(SWBBTRN_namedata),GQCBTRN_nno)), GQCBTRN_nno),((&A_VINDEX(NL(SWBBTRN_namedata),GQCBTRN_nno)), GQCBTRN_nno,(YPCBTRN_remake_joins).nonlocals));
} 
}
 /* line 816: */
} 
 /* line 818: */
IQCBTRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(IQCBTRN,((*(&(Ser->Output))), Tprocs, &JQCBTRN),((*(&(Ser->Output))), Tprocs, &JQCBTRN,(IQCBTRN).nonlocals));
KQCBTRN_outc = JQCBTRN;
 /* line 819: */
 /* line 820: */
 /* line 821: */
LQCBTRN = KQCBTRN_outc.U ;
switch ( LQCBTRN.mode )
{ 
case 34: /* REF STRUCT(INT)  */
 /* line 823: */
 /* line 824: */
 /* line 825: */
if ( ((*(&((*(&(NL(Fdec)->Outputs)))->Rest)))==NAAATRN_nilnames) )
{ 
 /* line 826: */
 /* line 827: */
NQCBTRN = (*(&((*(&(NL(Fdec)->Outputs)))->Nameno))) ;
MQCBTRN = (*(&((&A_VINDEX(NL(SWBBTRN_namedata),NQCBTRN))->Source)));
} 
else
{ 
OQCBTRN_outstr = IAAATRN_nilustr;
 /* line 828: */
PQCBTRN_utail = (&OQCBTRN_outstr);
 /* line 829: */
QQCBTRN_ot = (*(&(NL(Fdec)->Outputs)));
 /* line 831: */
for ( ;; )
{ 
 /* line 832: */
 /* line 833: */
if ( !((QQCBTRN_ot!=NAAATRN_nilnames)) ) break;
 /* line 834: */
SQCBTRN = (*(&(QQCBTRN_ot->Nameno))) ;
RQCBTRN.Elem = (*(&((&A_VINDEX(NL(SWBBTRN_namedata),SQCBTRN))->Source)));
RQCBTRN.Rest = IAAATRN_nilustr;
TQCBTRN = A_HEAP(A68_191 ) ;
(*TQCBTRN) = RQCBTRN ;
(*PQCBTRN_utail) = TQCBTRN;
 /* line 835: */
PQCBTRN_utail = (&((*PQCBTRN_utail)->Rest));
 /* line 836: */
 /* line 837: */
QQCBTRN_ot = (*(&(QQCBTRN_ot->Rest)));
}
 /* line 838: */
 /* line 839: */
 /* line 840: */
 /* line 842: */
MQCBTRN = A_UNITE(UQCBTRN,mode21,21,OQCBTRN_outstr);
} 
break;
default: 
MQCBTRN = KQCBTRN_outc.U;
break;
} 
VQCBTRN_new_output = MQCBTRN;
 /* line 843: */
WQCBTRN.Body = JJCBTRN_new_body;
WQCBTRN.Output = VQCBTRN_new_output;
XQCBTRN = A_HEAP(A68_199 ) ;
(*XQCBTRN) = WQCBTRN ;
YQCBTRN_new_series = XQCBTRN;
 /* line 845: */
ZQCBTRN.U = A_UNITE(ARCBTRN,mode29,29,YQCBTRN_new_series);
 /* line 846: */
ZQCBTRN.C = A68_TRUE;
BRCBTRN = ZQCBTRN;
} 
A_PROC_EXIT(useries_proc);
*ReturnedValue = (BRCBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  FRCBTRN_unit_proc(A68_176  U, A68_360 * Tprocs, A68_336  *ReturnedValue, void *NonLocals)
#define NL(x) (((GRCBTRN_unit_proc *)NonLocals)->x)
{ 
A68_176  HRCBTRN;  /* united object - for case conformity */
A68_199 * IRCBTRN_user;
A68_INT  JRCBTRN_old_seriesid;
A68_336  KRCBTRN;  /* clause result */
A68_336  LRCBTRN;  /* avoid structure result */
A68_379  MRCBTRN;  /* CALL */
A68_336  NRCBTRN;  /* avoid structure result */
A68_336  ORCBTRN_result;
A68_336  PRCBTRN;  /* clause result */
A68_379  QRCBTRN;  /* CALL */
A68_336  RRCBTRN;  /* avoid structure result */
A_PROC_ENTRY(unit_proc);
 /* line 851: */
 /* line 852: */
HRCBTRN = U ;
switch ( HRCBTRN.mode )
{ 
case 29: /* REF STRUCT(REF MODE205,MODE176)  */
IRCBTRN_user = (HRCBTRN.data.mode29);
 /* line 853: */
{ 
JRCBTRN_old_seriesid = (*NL(DJCBTRN_seriesid));
 /* line 854: */
 /* line 855: */
if ( ((*(&((*NL(FWBBTRN_series_changes))->Int)))>0) )
{ 
(*NL(DJCBTRN_seriesid)) = (*(&((*NL(FWBBTRN_series_changes))->Int)));
 /* line 856: */
(*NL(FWBBTRN_series_changes)) = (*(&((*NL(FWBBTRN_series_changes))->Rest)));
 /* line 857: */
 /* line 858: */
 /* line 859: */
A_CALLPROC(NL(GJCBTRN_useries_proc),(IRCBTRN_user, Tprocs, &LRCBTRN),(IRCBTRN_user, Tprocs, &LRCBTRN,(NL(GJCBTRN_useries_proc)).nonlocals));
KRCBTRN = LRCBTRN;
} 
else
{ 
(*NL(FWBBTRN_series_changes)) = (*(&((*NL(FWBBTRN_series_changes))->Rest)));
 /* line 860: */
 /* line 861: */
MRCBTRN = (*(&(NL(Dec_tprocs)->Unit))) ;
A_CALLPROC(MRCBTRN,(U, Tprocs, &NRCBTRN),(U, Tprocs, &NRCBTRN,(MRCBTRN).nonlocals));
KRCBTRN = NRCBTRN;
} 
ORCBTRN_result = KRCBTRN;
 /* line 863: */
(*NL(DJCBTRN_seriesid)) = JRCBTRN_old_seriesid;
 /* line 864: */
 /* line 865: */
 /* line 866: */
 /* line 867: */
PRCBTRN = ORCBTRN_result;
} 
break;
default: 
 /* line 868: */
QRCBTRN = (*(&(NL(Dec_tprocs)->Unit))) ;
A_CALLPROC(QRCBTRN,(U, Tprocs, &RRCBTRN),(U, Tprocs, &RRCBTRN,(QRCBTRN).nonlocals));
PRCBTRN = RRCBTRN;
break;
} 
A_PROC_EXIT(unit_proc);
*ReturnedValue = (PRCBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  URCBTRN_nulldec(A68_237  Dec, A68_360 * Tprocs, A68_340  *ReturnedValue)
{ 
A68_340  VRCBTRN;  /* collateral clause result */
A68_340  WRCBTRN;  /* clause result */
A_PROC_ENTRY(nulldec);
 /* line 871: */
VRCBTRN.D = Dec;
VRCBTRN.C = A68_FALSE;
WRCBTRN = VRCBTRN;
A_PROC_EXIT(nulldec);
*ReturnedValue = (WRCBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  WSCBTRN_set_output(A68_INT  Nameno, void *NonLocals)
#define NL(x) (((XSCBTRN_set_output *)NonLocals)->x)
{ 
A68_422 * YSCBTRN_nd;
A68_421  ZSCBTRN;  /* avoid structure result */
A68_421  ATCBTRN_ur;
A68_176 * BTCBTRN;  /* YIELD */
A68_420  CTCBTRN;  /* collateral clause result */
A68_420 * DTCBTRN;  /* YIELD */
A_PROC_ENTRY(set_output);
 /* line 913: */
 /* line 914: */
{ 
YSCBTRN_nd = (&A_VINDEX(NL(SWBBTRN_namedata),Nameno));
 /* line 916: */
A_CALLPROC(NL(AXBBTRN_init_namedata),(TTBBTRN_name_out, YSCBTRN_nd, BBAATRN_nilformulas, 0),(TTBBTRN_name_out, YSCBTRN_nd, BBAATRN_nilformulas, 0,(NL(AXBBTRN_init_namedata)).nonlocals));
 /* line 921: */
A_CALLPROC(NL(VACBTRN_type_unit),((*(&((&A_VINDEX((*NL(YVBBTRN_nametypes)),Nameno))->Type))), &ZSCBTRN),((*(&((&A_VINDEX((*NL(YVBBTRN_nametypes)),Nameno))->Type))), &ZSCBTRN,(NL(VACBTRN_type_unit)).nonlocals));
ATCBTRN_ur = ZSCBTRN;
 /* line 923: */
BTCBTRN = (&(YSCBTRN_nd->Source)) ;
(*BTCBTRN) = ATCBTRN_ur.U;
 /* line 924: */
CTCBTRN.Ru = (&(YSCBTRN_nd->Source));
 /* line 926: */
CTCBTRN.Rs = ATCBTRN_ur.Rs;
DTCBTRN = (&(YSCBTRN_nd->Refsrc)) ;
(*DTCBTRN) = CTCBTRN;
} 
A_PROC_EXIT(set_output);
return;
} 
#undef NL

A_STATIC A68_VOID  JTCBTRN_generator(A68_BOOL  HTCBTRN_anonymous, A68_254  *ReturnedValue, void *NonLocals)
#define NL(x) (((KTCBTRN_generator *)NonLocals)->x)
{ 
A68_254  LTCBTRN;  /* clause result */
A68_254  MTCBTRN;  /* OPERATORS - dynamic generator */
{ 
MTCBTRN.upb = (NL(ZVBBTRN_num_names)+(*NL(CWBBTRN_num_new_names))) ;
( HTCBTRN_anonymous? A_VLOC(A68_251 ,MTCBTRN): A_VHEAP(A68_251 ,MTCBTRN) );
LTCBTRN = MTCBTRN;
} 
*ReturnedValue = (LTCBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  PVBBTRN_sysfault(A68_VC  Text, void *NonLocals)
#define NL(x) (((QVBBTRN_sysfault *)NonLocals)->x)
{ 
A68_46  RVBBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(sysfault);
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(RVBBTRN,Text,A68_VC )),(SHAAOSI_system, A_HVEC(RVBBTRN,Text,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(sysfault);
return;
} 
#undef NL

A_STATIC A68_VOID  WVBBTRN_fndec_join(A68_252 * Fdec, A68_360 * Dec_tprocs, A68_357  *ReturnedValue, void *NonLocals)
#define NL(x) (((XVBBTRN_fndec_join *)NonLocals)->x)
{ 
A68_254  YVBBTRN_nametypes;
A68_INT  ZVBBTRN_num_names;
A68_INT  AWBBTRN_new_nameno;
A68_INT  BWBBTRN_seriesidcnt;
A68_INT  CWBBTRN_num_new_names;
A68_BOOL  DWBBTRN_dec_changes;
A68_BOOL  EWBBTRN_out_changes;
A68_128 * FWBBTRN_series_changes;
A68_128 * GWBBTRN_current_series;
A68_128 ** HWBBTRN_series_tail;
A68_176  JWBBTRN;  /* OPERATORS - mode -> union mode */
A68_176  IWBBTRN_blank_unit;
A68_422  KWBBTRN;  /* collateral clause result */
A68_422  LWBBTRN_nullnamedata;
A68_431  NWBBTRN_generator;   /* proc value of non-global proc */
A68_430  TWBBTRN;  /* avoid structure result */
A68_430  SWBBTRN_namedata;
A68_422 * UWBBTRN_nd;
A68_INT  VWBBTRN;  /* forall loop counter */
A68_432  AXBBTRN_init_namedata;   /* proc value of non-global proc */
A68_433  JXBBTRN_is_normal_join;   /* proc value of non-global proc */
A68_434  VXBBTRN_need_new_name;   /* proc value of non-global proc */
A68_379  SYBBTRN_pre_pass_unit;   /* proc value of non-global proc */
A68_437  VACBTRN_type_unit;   /* proc value of non-global proc */
A68_441  WECBTRN_right_side;   /* proc value of non-global proc */
A68_INT  DJCBTRN_seriesid;
A68_451  GJCBTRN_useries_proc;   /* proc value of non-global proc */
A68_379  ERCBTRN_unit_proc;   /* proc value of non-global proc */
A68_462  XRCBTRN;  /* collateral clause result */
A68_405  YRCBTRN;  /* OPERATORS - mode -> union mode */
A68_361  ZRCBTRN;  /* procedure value */
A68_405  ASCBTRN;  /* OPERATORS - mode -> union mode */
A68_364  BSCBTRN;  /* procedure value */
A68_405  CSCBTRN;  /* OPERATORS - mode -> union mode */
A68_370  DSCBTRN;  /* procedure value */
A68_405  ESCBTRN;  /* OPERATORS - mode -> union mode */
A68_397  FSCBTRN;  /* YIELD */
A68_397  GSCBTRN;  /* procedure value */
A68_405  HSCBTRN;  /* OPERATORS - mode -> union mode */
A68_379  ISCBTRN;  /* YIELD */
A68_404  JSCBTRN;  /* OPERATORS - istruct -> vector */
A68_360 * KSCBTRN_pre_pass_tprocs;
A68_400  LSCBTRN;  /* CALL */
A68_357  MSCBTRN;  /* avoid structure result */
A68_357  NSCBTRN_fdecc;
A68_217 * OSCBTRN_outnames;
A68_INT  PSCBTRN;  /* YIELD */
A68_INT  QSCBTRN;  /* YIELD */
A68_VC * RSCBTRN;  /* YIELD */
A68_BOOL  SSCBTRN;  /* optbool result */
A68_463  VSCBTRN_set_output;   /* proc value of non-global proc */
A68_217 * ETCBTRN_outputs;
A68_BOOL  FTCBTRN;  /* optbool result */
A68_254  GTCBTRN_old_nametypes;
A68_464  ITCBTRN_generator;   /* proc value of non-global proc */
A68_254  NTCBTRN;  /* avoid structure result */
A68_254  OTCBTRN;  /* OPERATORS - trim index */
A68_254  PTCBTRN;  /* YIELD */
A68_436  QTCBTRN;  /* collateral clause result */
A68_405  RTCBTRN;  /* OPERATORS - mode -> union mode */
A68_383  STCBTRN;  /* YIELD */
A68_383  TTCBTRN;  /* procedure value */
A68_405  UTCBTRN;  /* OPERATORS - mode -> union mode */
A68_379  VTCBTRN;  /* YIELD */
A68_404  WTCBTRN;  /* OPERATORS - istruct -> vector */
A68_360 * XTCBTRN_newtprocs;
A68_400  YTCBTRN;  /* CALL */
A68_357  ZTCBTRN;  /* avoid structure result */
A68_357  AUCBTRN_fdc;
A68_252 * BUCBTRN;  /* YIELD */
A68_252 * CUCBTRN_new_dec;
A68_254 * DUCBTRN;  /* YIELD */
A68_357  EUCBTRN;  /* collateral clause result */
A68_400  FUCBTRN;  /* CALL */
A68_357  GUCBTRN;  /* avoid structure result */
A68_357  HUCBTRN;  /* clause result */
A68_400  IUCBTRN;  /* CALL */
A68_357  JUCBTRN;  /* avoid structure result */
A_PROC_ENTRY(fndec_join);
 /* line 135: */
 /* line 136: */
{ 
YVBBTRN_nametypes = (*(&(Fdec->Nametypes)));
 /* line 137: */
ZVBBTRN_num_names = YVBBTRN_nametypes.upb;
 /* line 138: */
AWBBTRN_new_nameno = ZVBBTRN_num_names;
 /* line 139: */
BWBBTRN_seriesidcnt = 0;
 /* line 140: */
CWBBTRN_num_new_names = 0;
 /* line 143: */
DWBBTRN_dec_changes = A68_FALSE;
 /* line 144: */
EWBBTRN_out_changes = A68_FALSE;
 /* line 145: */
FWBBTRN_series_changes = OAAATRN_nilints;
 /* line 146: */
GWBBTRN_current_series = OAAATRN_nilints;
 /* line 147: */
HWBBTRN_series_tail = (&FWBBTRN_series_changes);
 /* line 153: */
IWBBTRN_blank_unit = A_UNITE(JWBBTRN,mode34,34,(&FIAATRN_unull));
 /* line 154: */
KWBBTRN.Sort = 0;
KWBBTRN.Seriesid = 0;
KWBBTRN.Ndim = 0;
 /* line 155: */
KWBBTRN.Dimentions = BBAATRN_nilformulas;
KWBBTRN.Source = IWBBTRN_blank_unit;
KWBBTRN.Refsrc.Ru = (&IWBBTRN_blank_unit);
KWBBTRN.Refsrc.Rs = WTBBTRN_nilrhslist;
LWBBTRN_nullnamedata = KWBBTRN;
 /* line 156: */
A_CLOSURE( NWBBTRN_generator, OWBBTRN_generator, PWBBTRN_generator );
(( PWBBTRN_generator * ) ( NWBBTRN_generator.nonlocals )) -> ZVBBTRN_num_names = ZVBBTRN_num_names;
A_CALLPROC(NWBBTRN_generator,(A68_TRUE, &TWBBTRN),(A68_TRUE, &TWBBTRN,(NWBBTRN_generator).nonlocals));
SWBBTRN_namedata = TWBBTRN;
 /* line 161: */
VWBBTRN = SWBBTRN_namedata.upb -1;
UWBBTRN_nd = SWBBTRN_namedata.data;
for (;VWBBTRN-- >= 0;
(UWBBTRN_nd++
) )
{
(*UWBBTRN_nd) = LWBBTRN_nullnamedata;
}
 /* line 163: */
A_CLOSURE( AXBBTRN_init_namedata, BXBBTRN_init_namedata, CXBBTRN_init_namedata );
(( CXBBTRN_init_namedata * ) ( AXBBTRN_init_namedata.nonlocals )) -> IWBBTRN_blank_unit = (&IWBBTRN_blank_unit);
 /* line 176: */
A_CLOSURE( JXBBTRN_is_normal_join, KXBBTRN_is_normal_join, LXBBTRN_is_normal_join );
(( LXBBTRN_is_normal_join * ) ( JXBBTRN_is_normal_join.nonlocals )) -> SWBBTRN_namedata = SWBBTRN_namedata;
(( LXBBTRN_is_normal_join * ) ( JXBBTRN_is_normal_join.nonlocals )) -> JXBBTRN_is_normal_join = JXBBTRN_is_normal_join;
 /* line 200: */
A_CLOSURE( VXBBTRN_need_new_name, WXBBTRN_need_new_name, XXBBTRN_need_new_name );
(( XXBBTRN_need_new_name * ) ( VXBBTRN_need_new_name.nonlocals )) -> Dec_tprocs = Dec_tprocs;
 /* line 226: */
A_CLOSURE( SYBBTRN_pre_pass_unit, TYBBTRN_pre_pass_unit, UYBBTRN_pre_pass_unit );
(( UYBBTRN_pre_pass_unit * ) ( SYBBTRN_pre_pass_unit.nonlocals )) -> BWBBTRN_seriesidcnt = (&BWBBTRN_seriesidcnt);
(( UYBBTRN_pre_pass_unit * ) ( SYBBTRN_pre_pass_unit.nonlocals )) -> AXBBTRN_init_namedata = AXBBTRN_init_namedata;
(( UYBBTRN_pre_pass_unit * ) ( SYBBTRN_pre_pass_unit.nonlocals )) -> SWBBTRN_namedata = SWBBTRN_namedata;
(( UYBBTRN_pre_pass_unit * ) ( SYBBTRN_pre_pass_unit.nonlocals )) -> KVBBTRN_remove_makes = NL(KVBBTRN_remove_makes);
(( UYBBTRN_pre_pass_unit * ) ( SYBBTRN_pre_pass_unit.nonlocals )) -> JXBBTRN_is_normal_join = JXBBTRN_is_normal_join;
(( UYBBTRN_pre_pass_unit * ) ( SYBBTRN_pre_pass_unit.nonlocals )) -> VXBBTRN_need_new_name = VXBBTRN_need_new_name;
(( UYBBTRN_pre_pass_unit * ) ( SYBBTRN_pre_pass_unit.nonlocals )) -> CWBBTRN_num_new_names = (&CWBBTRN_num_new_names);
(( UYBBTRN_pre_pass_unit * ) ( SYBBTRN_pre_pass_unit.nonlocals )) -> GWBBTRN_current_series = (&GWBBTRN_current_series);
(( UYBBTRN_pre_pass_unit * ) ( SYBBTRN_pre_pass_unit.nonlocals )) -> DWBBTRN_dec_changes = (&DWBBTRN_dec_changes);
(( UYBBTRN_pre_pass_unit * ) ( SYBBTRN_pre_pass_unit.nonlocals )) -> HWBBTRN_series_tail = (&HWBBTRN_series_tail);
(( UYBBTRN_pre_pass_unit * ) ( SYBBTRN_pre_pass_unit.nonlocals )) -> Dec_tprocs = Dec_tprocs;
 /* line 316: */
A_CLOSURE( VACBTRN_type_unit, WACBTRN_type_unit, XACBTRN_type_unit );
(( XACBTRN_type_unit * ) ( VACBTRN_type_unit.nonlocals )) -> Msg = NL(Msg);
(( XACBTRN_type_unit * ) ( VACBTRN_type_unit.nonlocals )) -> VACBTRN_type_unit = VACBTRN_type_unit;
(( XACBTRN_type_unit * ) ( VACBTRN_type_unit.nonlocals )) -> SVBBTRN_env = NL(SVBBTRN_env);
(( XACBTRN_type_unit * ) ( VACBTRN_type_unit.nonlocals )) -> OVBBTRN_sysfault = NL(OVBBTRN_sysfault);
 /* line 416: */
A_CLOSURE( WECBTRN_right_side, XECBTRN_right_side, YECBTRN_right_side );
(( YECBTRN_right_side * ) ( WECBTRN_right_side.nonlocals )) -> OVBBTRN_sysfault = NL(OVBBTRN_sysfault);
(( YECBTRN_right_side * ) ( WECBTRN_right_side.nonlocals )) -> WECBTRN_right_side = WECBTRN_right_side;
(( YECBTRN_right_side * ) ( WECBTRN_right_side.nonlocals )) -> Msg = NL(Msg);
(( YECBTRN_right_side * ) ( WECBTRN_right_side.nonlocals )) -> SWBBTRN_namedata = SWBBTRN_namedata;
 /* line 554: */
DJCBTRN_seriesid = 0;
 /* line 556: */
A_CLOSURE( GJCBTRN_useries_proc, HJCBTRN_useries_proc, IJCBTRN_useries_proc );
(( IJCBTRN_useries_proc * ) ( GJCBTRN_useries_proc.nonlocals )) -> Msg = NL(Msg);
(( IJCBTRN_useries_proc * ) ( GJCBTRN_useries_proc.nonlocals )) -> VACBTRN_type_unit = VACBTRN_type_unit;
(( IJCBTRN_useries_proc * ) ( GJCBTRN_useries_proc.nonlocals )) -> SWBBTRN_namedata = SWBBTRN_namedata;
(( IJCBTRN_useries_proc * ) ( GJCBTRN_useries_proc.nonlocals )) -> YVBBTRN_nametypes = (&YVBBTRN_nametypes);
(( IJCBTRN_useries_proc * ) ( GJCBTRN_useries_proc.nonlocals )) -> KVBBTRN_remove_makes = NL(KVBBTRN_remove_makes);
(( IJCBTRN_useries_proc * ) ( GJCBTRN_useries_proc.nonlocals )) -> JXBBTRN_is_normal_join = JXBBTRN_is_normal_join;
(( IJCBTRN_useries_proc * ) ( GJCBTRN_useries_proc.nonlocals )) -> VXBBTRN_need_new_name = VXBBTRN_need_new_name;
(( IJCBTRN_useries_proc * ) ( GJCBTRN_useries_proc.nonlocals )) -> AWBBTRN_new_nameno = (&AWBBTRN_new_nameno);
(( IJCBTRN_useries_proc * ) ( GJCBTRN_useries_proc.nonlocals )) -> Fdec = Fdec;
(( IJCBTRN_useries_proc * ) ( GJCBTRN_useries_proc.nonlocals )) -> SVBBTRN_env = NL(SVBBTRN_env);
(( IJCBTRN_useries_proc * ) ( GJCBTRN_useries_proc.nonlocals )) -> WECBTRN_right_side = WECBTRN_right_side;
(( IJCBTRN_useries_proc * ) ( GJCBTRN_useries_proc.nonlocals )) -> DJCBTRN_seriesid = (&DJCBTRN_seriesid);
 /* line 848: */
A_CLOSURE( ERCBTRN_unit_proc, FRCBTRN_unit_proc, GRCBTRN_unit_proc );
(( GRCBTRN_unit_proc * ) ( ERCBTRN_unit_proc.nonlocals )) -> DJCBTRN_seriesid = (&DJCBTRN_seriesid);
(( GRCBTRN_unit_proc * ) ( ERCBTRN_unit_proc.nonlocals )) -> FWBBTRN_series_changes = (&FWBBTRN_series_changes);
(( GRCBTRN_unit_proc * ) ( ERCBTRN_unit_proc.nonlocals )) -> GJCBTRN_useries_proc = GJCBTRN_useries_proc;
(( GRCBTRN_unit_proc * ) ( ERCBTRN_unit_proc.nonlocals )) -> Dec_tprocs = Dec_tprocs;
 /* line 870: */
 /* line 880: */
 /* line 881: */
 /* line 882: */
ZRCBTRN.fn.fn_global = DWLATRN_null_attr;
ZRCBTRN.nonlocals = A68_NIL;
XRCBTRN.data[0] = A_UNITE(YRCBTRN,mode1,1,ZRCBTRN);
 /* line 883: */
BSCBTRN.fn.fn_global = IWLATRN_null_formula;
BSCBTRN.nonlocals = A68_NIL;
XRCBTRN.data[1] = A_UNITE(ASCBTRN,mode4,4,BSCBTRN);
 /* line 884: */
DSCBTRN.fn.fn_global = NWLATRN_null_type;
DSCBTRN.nonlocals = A68_NIL;
XRCBTRN.data[2] = A_UNITE(CSCBTRN,mode10,10,DSCBTRN);
 /* line 885: */
GSCBTRN.fn.fn_global = XUBBTRN_fnbody_join;
GSCBTRN.nonlocals = A68_NIL;
FSCBTRN = GSCBTRN ;
XRCBTRN.data[3] = A_UNITE(ESCBTRN,mode37,37,FSCBTRN);
ISCBTRN = SYBBTRN_pre_pass_unit ;
XRCBTRN.data[4] = A_UNITE(HSCBTRN,mode19,19,ISCBTRN);
KSCBTRN_pre_pass_tprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HISVEC(JSCBTRN,XRCBTRN,5,A68_405 ));
 /* line 886: */
LSCBTRN = (*(&(AWLATRN_nulltprocs->Fndec))) ;
A_CALLPROC(LSCBTRN,(Fdec, KSCBTRN_pre_pass_tprocs, &MSCBTRN),(Fdec, KSCBTRN_pre_pass_tprocs, &MSCBTRN,(LSCBTRN).nonlocals));
NSCBTRN_fdecc = MSCBTRN;
 /* line 888: */
MLJATRN_discard_tprocs(KSCBTRN_pre_pass_tprocs);
 /* line 890: */
 /* line 891: */
 /* line 892: */
if ( NL(MVBBTRN_remove_output_names) )
{ 
OSCBTRN_outnames = (*(&(Fdec->Outputs)));
 /* line 894: */
for ( ;; )
{ 
 /* line 895: */
 /* line 896: */
if ( !((OSCBTRN_outnames!=NAAATRN_nilnames)) ) break;
 /* line 897: */
 /* line 898: */
PSCBTRN = (*(&(OSCBTRN_outnames->Nameno))) ;
if ( ((*(&((&A_VINDEX(YVBBTRN_nametypes,PSCBTRN))->Name))).upb!=0) )
{ 
EWBBTRN_out_changes = A68_TRUE;
 /* line 899: */
 /* line 900: */
QSCBTRN = (*(&(OSCBTRN_outnames->Nameno))) ;
RSCBTRN = (&((&A_VINDEX(YVBBTRN_nametypes,QSCBTRN))->Name)) ;
(*RSCBTRN) = TTCAOST_nullid;
} 
 /* line 901: */
 /* line 902: */
OSCBTRN_outnames = (*(&(OSCBTRN_outnames->Rest)));
}
 /* line 903: */
} 
 /* line 905: */
 /* line 906: */
SSCBTRN = DWBBTRN_dec_changes;
if ( ! SSCBTRN )
{SSCBTRN = EWBBTRN_out_changes;
}
 /* line 912: */
if ( SSCBTRN )
{ 
A_CLOSURE( VSCBTRN_set_output, WSCBTRN_set_output, XSCBTRN_set_output );
(( XSCBTRN_set_output * ) ( VSCBTRN_set_output.nonlocals )) -> SWBBTRN_namedata = SWBBTRN_namedata;
(( XSCBTRN_set_output * ) ( VSCBTRN_set_output.nonlocals )) -> AXBBTRN_init_namedata = AXBBTRN_init_namedata;
(( XSCBTRN_set_output * ) ( VSCBTRN_set_output.nonlocals )) -> VACBTRN_type_unit = VACBTRN_type_unit;
(( XSCBTRN_set_output * ) ( VSCBTRN_set_output.nonlocals )) -> YVBBTRN_nametypes = (&YVBBTRN_nametypes);
 /* line 928: */
ETCBTRN_outputs = (*(&(Fdec->Outputs)));
 /* line 930: */
for ( ;; )
{ 
 /* line 931: */
 /* line 932: */
if ( !((ETCBTRN_outputs!=NAAATRN_nilnames)) ) break;
A_CALLPROC(VSCBTRN_set_output,((*(&(ETCBTRN_outputs->Nameno)))),((*(&(ETCBTRN_outputs->Nameno))),(VSCBTRN_set_output).nonlocals));
 /* line 933: */
 /* line 934: */
ETCBTRN_outputs = (*(&(ETCBTRN_outputs->Rest)));
}
 /* line 936: */
FTCBTRN = (CWBBTRN_num_new_names>0);
if ( ! FTCBTRN )
{FTCBTRN = NL(KVBBTRN_remove_makes);
}
 /* line 937: */
if ( ! FTCBTRN )
{FTCBTRN = EWBBTRN_out_changes;
}
 /* line 938: */
if ( FTCBTRN )
{ 
GTCBTRN_old_nametypes = YVBBTRN_nametypes;
 /* line 941: */
A_CLOSURE( ITCBTRN_generator, JTCBTRN_generator, KTCBTRN_generator );
(( KTCBTRN_generator * ) ( ITCBTRN_generator.nonlocals )) -> ZVBBTRN_num_names = ZVBBTRN_num_names;
(( KTCBTRN_generator * ) ( ITCBTRN_generator.nonlocals )) -> CWBBTRN_num_new_names = (&CWBBTRN_num_new_names);
A_CALLPROC(ITCBTRN_generator,(A68_FALSE, &NTCBTRN),(A68_FALSE, &NTCBTRN,(ITCBTRN_generator).nonlocals));
YVBBTRN_nametypes = NTCBTRN;
 /* line 942: */
 /* line 943: */
PTCBTRN = A_VTRIM(OTCBTRN,(YVBBTRN_nametypes),A_VTSCRIPT(&(OTCBTRN.upb),(YVBBTRN_nametypes).upb,1,ZVBBTRN_num_names)) ;
A_VASSIGN2(GTCBTRN_old_nametypes,PTCBTRN,A68_251 );
} 
 /* line 945: */
 /* line 946: */
 /* line 947: */
TTCBTRN.fn.fn_global = URCBTRN_nulldec;
TTCBTRN.nonlocals = A68_NIL;
STCBTRN = TTCBTRN ;
QTCBTRN.data[0] = A_UNITE(RTCBTRN,mode23,23,STCBTRN);
VTCBTRN = ERCBTRN_unit_proc ;
QTCBTRN.data[1] = A_UNITE(UTCBTRN,mode19,19,VTCBTRN);
XTCBTRN_newtprocs = THJATRN_make_newtprocs(Dec_tprocs, A_HISVEC(WTCBTRN,QTCBTRN,2,A68_405 ));
 /* line 948: */
YTCBTRN = (*(&(AWLATRN_nulltprocs->Fndec))) ;
A_CALLPROC(YTCBTRN,(Fdec, XTCBTRN_newtprocs, &ZTCBTRN),(Fdec, XTCBTRN_newtprocs, &ZTCBTRN,(YTCBTRN).nonlocals));
AUCBTRN_fdc = ZTCBTRN;
 /* line 949: */
BUCBTRN = A_HEAP(A68_252 ) ;
(*BUCBTRN) = (*AUCBTRN_fdc.F) ;
CUCBTRN_new_dec = BUCBTRN;
 /* line 951: */
MLJATRN_discard_tprocs(XTCBTRN_newtprocs);
 /* line 952: */
DUCBTRN = (&(CUCBTRN_new_dec->Nametypes)) ;
(*DUCBTRN) = YVBBTRN_nametypes;
 /* line 955: */
FUCBTRN = (*(&(AWLATRN_nulltprocs->Fndec))) ;
A_CALLPROC(FUCBTRN,(CUCBTRN_new_dec, Dec_tprocs, &GUCBTRN),(CUCBTRN_new_dec, Dec_tprocs, &GUCBTRN,(FUCBTRN).nonlocals));
EUCBTRN.F = GUCBTRN.F;
 /* line 956: */
 /* line 957: */
EUCBTRN.C = A68_TRUE;
HUCBTRN = EUCBTRN;
} 
else
{ 
 /* line 958: */
 /* line 959: */
IUCBTRN = (*(&(AWLATRN_nulltprocs->Fndec))) ;
A_CALLPROC(IUCBTRN,(Fdec, Dec_tprocs, &JUCBTRN),(Fdec, Dec_tprocs, &JUCBTRN,(IUCBTRN).nonlocals));
HUCBTRN = JUCBTRN;
} 
} 
A_PROC_EXIT(fndec_join);
*ReturnedValue = (HUCBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  KVCBTRN_shell_outer(A68_261  O, A68_360 * Tprocs, A68_358  *ReturnedValue, void *NonLocals)
#define NL(x) (((LVCBTRN_shell_outer *)NonLocals)->x)
{ 
A68_358  MVCBTRN;  /* clause result */
A68_358  NVCBTRN;  /* avoid structure result */
A68_358  OVCBTRN;  /* collateral clause result */
A_PROC_ENTRY(shell_outer);
 /* line 978: */
 /* line 979: */
if ( (O.Sort==VKAATRN_outerfn) )
{ 
 /* line 980: */
IVBBTRN_outerfn_joins( O, NL(Closure), NL(Options), NL(Msg), &NVCBTRN );
MVCBTRN = NVCBTRN;
} 
else
{ 
OVCBTRN.O = O;
 /* line 981: */
OVCBTRN.C = A68_FALSE;
MVCBTRN = OVCBTRN;
} 
A_PROC_EXIT(shell_outer);
*ReturnedValue = (MVCBTRN);
return;
} 
#undef NL

A68_VOID  XTBBTRN_joins_remove_makes(A68_408  *ReturnedValue)
{ 
A68_408  YTBBTRN;  /* clause result */
A68_408  ZTBBTRN;  /* avoid structure result */
A_PROC_ENTRY(joins_remove_makes);
FCAAOST_makeoptions( 1, &ZTBBTRN );
YTBBTRN = ZTBBTRN;
A_PROC_EXIT(joins_remove_makes);
*ReturnedValue = (YTBBTRN);
return;
} 
#undef NL

A68_VOID  AUBBTRN_joins_remove_output_names(A68_408  *ReturnedValue)
{ 
A68_408  BUBBTRN;  /* clause result */
A68_408  CUBBTRN;  /* avoid structure result */
A_PROC_ENTRY(joins_remove_output_names);
FCAAOST_makeoptions( 2, &CUBBTRN );
BUBBTRN = CUBBTRN;
A_PROC_EXIT(joins_remove_output_names);
*ReturnedValue = (BUBBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  LUBBTRN_joinid(A68_INT  Nameno, A68_VC  *ReturnedValue)
{ 
A68_428  MUBBTRN;  /* collateral clause result */
A68_52  PUBBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  QUBBTRN;  /* YIELD */
A68_52  RUBBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  SUBBTRN;  /* clause result */
A68_85  TUBBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  UUBBTRN;  /* avoid structure result */
A_PROC_ENTRY(joinid);
QUBBTRN = OUBBTRN ;
MUBBTRN.data[0] = A_UNITE(PUBBTRN,mode7,7,QUBBTRN);
MUBBTRN.data[1] = A_UNITE(RUBBTRN,mode1,1,Nameno);
UJBAOSL_oneline( A_HISVEC(TUBBTRN,MUBBTRN,2,A68_52 ), &UUBBTRN );
SUBBTRN = UUBBTRN;
A_PROC_EXIT(joinid);
*ReturnedValue = (SUBBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  XUBBTRN_fnbody_join(A68_248  Fbody, A68_360 * Tprocs, A68_354  *ReturnedValue)
{ 
A68_248  YUBBTRN;  /* united object - for case conformity */
A68_221 * ZUBBTRN_ut;
A68_354  AVBBTRN;  /* clause result */
A68_397  BVBBTRN;  /* CALL */
A68_354  CVBBTRN;  /* avoid structure result */
A68_354  DVBBTRN;  /* collateral clause result */
A_PROC_ENTRY(fnbody_join);
 /* line 119: */
 /* line 120: */
YUBBTRN = Fbody ;
switch ( YUBBTRN.mode )
{ 
case 1: /* REF STRUCT(MODE176)  */
ZUBBTRN_ut = (YUBBTRN.data.mode1);
 /* line 121: */
BVBBTRN = (*(&(AWLATRN_nulltprocs->Fnbody))) ;
A_CALLPROC(BVBBTRN,(Fbody, Tprocs, &CVBBTRN),(Fbody, Tprocs, &CVBBTRN,(BVBBTRN).nonlocals));
AVBBTRN = CVBBTRN;
break;
default: 
DVBBTRN.F = Fbody;
 /* line 122: */
DVBBTRN.C = A68_FALSE;
AVBBTRN = DVBBTRN;
break;
} 
A_PROC_EXIT(fnbody_join);
*ReturnedValue = (AVBBTRN);
return;
} 
#undef NL
 /* line 125: */
 /* line 126: */
 /* line 127: */

A68_VOID  IVBBTRN_outerfn_joins(A68_261  Ofn, A68_265 * Closure, A68_408  Options, A68_108  Msg, A68_358  *ReturnedValue)
{ 
A68_408  JVBBTRN;  /* avoid structure result */
A68_BOOL  KVBBTRN_remove_makes;
A68_408  LVBBTRN;  /* avoid structure result */
A68_BOOL  MVBBTRN_remove_output_names;
A68_36  OVBBTRN_sysfault;   /* proc value of non-global proc */
A68_255 * SVBBTRN_env;
A68_400  VVBBTRN_fndec_join;   /* proc value of non-global proc */
A68_462  KUCBTRN;  /* collateral clause result */
A68_405  LUCBTRN;  /* OPERATORS - mode -> union mode */
A68_361  MUCBTRN;  /* procedure value */
A68_405  NUCBTRN;  /* OPERATORS - mode -> union mode */
A68_364  OUCBTRN;  /* procedure value */
A68_405  PUCBTRN;  /* OPERATORS - mode -> union mode */
A68_370  QUCBTRN;  /* procedure value */
A68_405  RUCBTRN;  /* OPERATORS - mode -> union mode */
A68_397  SUCBTRN;  /* YIELD */
A68_397  TUCBTRN;  /* procedure value */
A68_405  UUCBTRN;  /* OPERATORS - mode -> union mode */
A68_400  VUCBTRN;  /* YIELD */
A68_404  WUCBTRN;  /* OPERATORS - istruct -> vector */
A68_360 * XUCBTRN_outer_tprocs;
A68_401  YUCBTRN;  /* CALL */
A68_358  ZUCBTRN;  /* avoid structure result */
A68_358  AVCBTRN_oc;
A68_358  BVCBTRN;  /* clause result */
A_PROC_ENTRY(outerfn_joins);
 /* line 128: */
 /* line 129: */
{ 
XTBBTRN_joins_remove_makes(  &JVBBTRN );
KVBBTRN_remove_makes = MBAAOST_includes(Options, JVBBTRN);
 /* line 130: */
AUBBTRN_joins_remove_output_names(  &LVBBTRN );
MVBBTRN_remove_output_names = MBAAOST_includes(Options, LVBBTRN);
 /* line 131: */
A_CLOSURE( OVBBTRN_sysfault, PVBBTRN_sysfault, QVBBTRN_sysfault );
(( QVBBTRN_sysfault * ) ( OVBBTRN_sysfault.nonlocals )) -> Msg = Msg;
 /* line 132: */
SVBBTRN_env = Ofn.Environ;
 /* line 134: */
A_CLOSURE( VVBBTRN_fndec_join, WVBBTRN_fndec_join, XVBBTRN_fndec_join );
(( XVBBTRN_fndec_join * ) ( VVBBTRN_fndec_join.nonlocals )) -> KVBBTRN_remove_makes = KVBBTRN_remove_makes;
(( XVBBTRN_fndec_join * ) ( VVBBTRN_fndec_join.nonlocals )) -> Msg = Msg;
(( XVBBTRN_fndec_join * ) ( VVBBTRN_fndec_join.nonlocals )) -> SVBBTRN_env = SVBBTRN_env;
(( XVBBTRN_fndec_join * ) ( VVBBTRN_fndec_join.nonlocals )) -> OVBBTRN_sysfault = OVBBTRN_sysfault;
(( XVBBTRN_fndec_join * ) ( VVBBTRN_fndec_join.nonlocals )) -> MVBBTRN_remove_output_names = MVBBTRN_remove_output_names;
 /* line 961: */
 /* line 962: */
MUCBTRN.fn.fn_global = DWLATRN_null_attr;
MUCBTRN.nonlocals = A68_NIL;
KUCBTRN.data[0] = A_UNITE(LUCBTRN,mode1,1,MUCBTRN);
 /* line 963: */
OUCBTRN.fn.fn_global = IWLATRN_null_formula;
OUCBTRN.nonlocals = A68_NIL;
KUCBTRN.data[1] = A_UNITE(NUCBTRN,mode4,4,OUCBTRN);
 /* line 964: */
QUCBTRN.fn.fn_global = NWLATRN_null_type;
QUCBTRN.nonlocals = A68_NIL;
KUCBTRN.data[2] = A_UNITE(PUCBTRN,mode10,10,QUCBTRN);
 /* line 965: */
TUCBTRN.fn.fn_global = XUBBTRN_fnbody_join;
TUCBTRN.nonlocals = A68_NIL;
SUCBTRN = TUCBTRN ;
KUCBTRN.data[3] = A_UNITE(RUCBTRN,mode37,37,SUCBTRN);
VUCBTRN = VVBBTRN_fndec_join ;
KUCBTRN.data[4] = A_UNITE(UUCBTRN,mode40,40,VUCBTRN);
XUCBTRN_outer_tprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HISVEC(WUCBTRN,KUCBTRN,5,A68_405 ));
 /* line 966: */
YUCBTRN = (*(&(AWLATRN_nulltprocs->Outer))) ;
A_CALLPROC(YUCBTRN,(Ofn, XUCBTRN_outer_tprocs, &ZUCBTRN),(Ofn, XUCBTRN_outer_tprocs, &ZUCBTRN,(YUCBTRN).nonlocals));
AVCBTRN_oc = ZUCBTRN;
 /* line 968: */
MLJATRN_discard_tprocs(XUCBTRN_outer_tprocs);
 /* line 969: */
 /* line 970: */
BVCBTRN = AVCBTRN_oc;
} 
A_PROC_EXIT(outerfn_joins);
*ReturnedValue = (BVCBTRN);
return;
} 
#undef NL
 /* line 974: */
 /* line 975: */

A68_VOID  FVCBTRN_transform_joins(A68_265 * Closure, A68_408  Options, A68_108  Msg, A68_359  *ReturnedValue)
{ 
A68_401  JVCBTRN_shell_outer;   /* proc value of non-global proc */
A68_405  PVCBTRN;  /* OPERATORS - mode -> union mode */
A68_401  QVCBTRN;  /* YIELD */
A68_404  RVCBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_360 * SVCBTRN_newtprocs;
A68_402  TVCBTRN;  /* CALL */
A68_359  UVCBTRN;  /* avoid structure result */
A68_359  VVCBTRN_clc;
A68_359  WVCBTRN;  /* clause result */
A_PROC_ENTRY(transform_joins);
 /* line 976: */
 /* line 977: */
{ 
A_CLOSURE( JVCBTRN_shell_outer, KVCBTRN_shell_outer, LVCBTRN_shell_outer );
(( LVCBTRN_shell_outer * ) ( JVCBTRN_shell_outer.nonlocals )) -> Closure = Closure;
(( LVCBTRN_shell_outer * ) ( JVCBTRN_shell_outer.nonlocals )) -> Options = Options;
(( LVCBTRN_shell_outer * ) ( JVCBTRN_shell_outer.nonlocals )) -> Msg = Msg;
 /* line 983: */
QVCBTRN = JVCBTRN_shell_outer ;
SVCBTRN_newtprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HVEC(RVCBTRN,A_UNITE(PVCBTRN,mode41,41,QVCBTRN),A68_405 ));
 /* line 984: */
TVCBTRN = (*(&(AWLATRN_nulltprocs->Closure))) ;
A_CALLPROC(TVCBTRN,(Closure, SVCBTRN_newtprocs, Msg, &UVCBTRN),(Closure, SVCBTRN_newtprocs, Msg, &UVCBTRN,(TVCBTRN).nonlocals));
VVCBTRN_clc = UVCBTRN;
 /* line 986: */
MLJATRN_discard_tprocs(SVCBTRN_newtprocs);
 /* line 987: */
 /* line 988: */
WVCBTRN = VVCBTRN_clc;
} 
A_PROC_EXIT(transform_joins);
*ReturnedValue = (WVCBTRN);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void NTBBTRN(void)   /* initialise DECS joins */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/joins.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/ostools/assoc/mfiles/options.m","./mfiles/transformprocs.m","./mfiles/modeprocs.m","./mfiles/assmodes.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_426  DUBBTRN;  /* collateral clause result */
A68_46  IUBBTRN;  /* OPERATORS - istruct -> vector */
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
A_config.source_file = "/import/hazel/home/export/model/ella/transform/assoc/./a68files/joins.a68";
A_config.translation_time = "Tue Apr  4 10:04:57 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "MTBBTRN (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:04:57 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS joins);
UEAALIB_a68config(LGAALIB_configinfo, RTBBTRN);
 /* line 73: */
 /* line 75: */
 /* line 101: */
 /* line 105: */
 /* line 106: */
 /* line 108: */
 /* line 109: */
 /* line 111: */
 /* line 112: */
 /* line 113: */
DUBBTRN.data[0] = FUBBTRN;
DUBBTRN.data[1] = HUBBTRN;
JUBBTRN_joins_options = A_HISVEC(IUBBTRN,DUBBTRN,2,A68_VC );
 /* line 115: */
 /* line 118: */
 /* line 124: */
 /* line 973: */
 /* line 990: */
 /* line 991: */
 /* line 993: */
/*SKIP*/;
A_PROC_EXIT(DECS joins);
} 
#undef NL
/* end of translation of ./a68files/joins.a68 */
