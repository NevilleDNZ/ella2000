
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
/* UNAME:CQOBTRN */
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
A_ISTRUCT(A68_CHAR ,52,A68t478);
typedef struct A68t478  A68_478 ;    /* STRUCT 52 CHAR */
struct A68t479{
struct A68t169 * Dec;
struct A68t479 * Rest;
};
typedef struct A68t479  A68_479 ;    /* STRUCT(REF MODE169,REF MODE479)  */
#define A68_480  A68_VC 
#define A68t480 A68t26            /* FLEX VECTOR [] CHAR */
#define A68_481  A68_46 
#define A68t481 A68t46            /* FLEX VECTOR [] MODE480 */

A_PROCEDURE(A68_VOID ,A68t482,(struct A68t265 *,struct A68t108 ,struct A68t359 *),(struct A68t265 *,struct A68t108 ,struct A68t359 *,void *));
typedef struct A68t482  A68_482 ;    /* PROC(REF MODE265,MODE108) MODE359 */

A_PROCEDURE(A68_VOID ,A68t483,(A68_BOOL ,struct A68t54 *),(A68_BOOL ,struct A68t54 *,void *));
typedef struct A68t483  A68_483 ;    /* PROC(BOOL) MODE54 */

A_PROCEDURE(struct A68t265 **,A68t484,(void),(void *));
typedef struct A68t484  A68_484 ;    /* PROC REF REF MODE265 */

A_PROCEDURE(A68_VOID ,A68t485,(struct A68t261 ,A68_INT ),(struct A68t261 ,A68_INT ,void *));
typedef struct A68t485  A68_485 ;    /* PROC(MODE261,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t486,(struct A68t154 ,A68_INT ,struct A68t479 *,struct A68t255 *,struct A68t261 *),(struct A68t154 ,A68_INT ,struct A68t479 *,struct A68t255 *,struct A68t261 *,void *));
typedef struct A68t486  A68_486 ;    /* PROC(MODE154,INT,REF MODE479,REF MODE255) MODE261 */

A_PROCEDURE(A68_VOID ,A68t487,(A68_BOOL ,struct A68t258 *),(A68_BOOL ,struct A68t258 *,void *));
typedef struct A68t487  A68_487 ;    /* PROC(BOOL) MODE258 */
A_ISTRUCT(struct A68t52 ,2,A68t488);
typedef struct A68t488  A68_488 ;    /* STRUCT 2 MODE52 */

A_PROCEDURE(A68_BOOL ,A68t489,(struct A68t154 ,struct A68t154 ,struct A68t479 *,struct A68t258 ),(struct A68t154 ,struct A68t154 ,struct A68t479 *,struct A68t258 ,void *));
typedef struct A68t489  A68_489 ;    /* PROC(MODE154,MODE154,REF MODE479,REF MODE258) BOOL */

A_PROCEDURE(struct A68t262 *,A68t490,(struct A68t154 ,struct A68t479 *,A68_INT ),(struct A68t154 ,struct A68t479 *,A68_INT ,void *));
typedef struct A68t490  A68_490 ;    /* PROC(MODE154,REF MODE479,INT) REF MODE262 */

A_PROCEDURE(A68_VOID ,A68t491,(struct A68t154 ,A68_INT ,struct A68t261 *),(struct A68t154 ,A68_INT ,struct A68t261 *,void *));
typedef struct A68t491  A68_491 ;    /* PROC(MODE154,INT) MODE261 */

A_PROCEDURE(A68_VOID ,A68t492,(struct A68t169 *),(struct A68t169 *,void *));
typedef struct A68t492  A68_492 ;    /* PROC(REF MODE169) VOID */

A_PROCEDURE(A68_VOID ,A68t493,(struct A68t154 ,struct A68t154 *),(struct A68t154 ,struct A68t154 *,void *));
typedef struct A68t493  A68_493 ;    /* PROC(MODE154) MODE154 */

A_PROCEDURE(A68_BOOL ,A68t494,(struct A68t154 ),(struct A68t154 ,void *));
typedef struct A68t494  A68_494 ;    /* PROC(MODE154) BOOL */
struct A68t495 { A68_INT mode; union {
struct A68t155 * mode1;
struct A68t162 * mode2;
struct A68t161 * mode3;
} data; };
typedef struct A68t495  A68_495 ;    /* UNION(REF MODE155,REF MODE162,REF MODE161)  */
A_ISTRUCT(A68_CHAR ,16,A68t496);
typedef struct A68t496  A68_496 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t497);
typedef struct A68t497  A68_497 ;    /* STRUCT 20 CHAR */

A_PROCEDURE(A68_VOID ,A68t498,(struct A68t157 *,struct A68t326 *),(struct A68t157 *,struct A68t326 *,void *));
typedef struct A68t498  A68_498 ;    /* PROC(REF MODE157) MODE326 */
A_ISTRUCT(A68_CHAR ,19,A68t499);
typedef struct A68t499  A68_499 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t500);
typedef struct A68t500  A68_500 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,42,A68t501);
typedef struct A68t501  A68_501 ;    /* STRUCT 42 CHAR */

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
extern A68_INT  TNMATRN_formula_int(struct A68t138 ,struct A68t108 );
extern A68_169 * DBNATRN_find_typedec(struct A68t155 ,struct A68t265 *,struct A68t255 *);
/* --- End of imports from modeprocs --- */


/* --- Imports from assmodes --- */
extern A68_157 * GAAATRN_niltstr;
extern A68_136 * CBAATRN_nilusage;
extern A68_262 * HBAATRN_nilouters;
extern A68_257  SCAATRN_nullintdecs;
extern A68_259  EDAATRN_nullconstdecs;
extern A68_260  KDAATRN_nullfndecs;
extern A68_155 * IFAATRN_maketname(A68_INT );
extern A68_163 * XFAATRN_maketypetag(struct A68t154 );
extern A68_134  ZHAATRN_attrnull;
#define OKAATRN_outerdec 1
#define PKAATRN_localdec 2
#define TKAATRN_outertype 3
#define VKAATRN_outerfn 5
/* --- End of imports from assmodes --- */


/* --- Imports from messageproc --- */
extern A68_109  SHAAOSI_system;
extern A68_109  WHAAOSI_user;
/* --- End of imports from messageproc --- */


/* --- Imports from basics --- */
extern A68_VOID  VTCAOST_clear(struct A68t94 );
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
static A68_478   GQOBTRN = {"$Id: alias.a68,v 34.2 1995/03/29 13:02:45 ella Exp $"}; 
A_GISVEC(A68_VC ,HQOBTRN,GQOBTRN,52)
#define IQOBTRN_niltypelist (A68_479 *)A68_NIL
A68_46  VQOBTRN_alias_options;
static A68_411   MUOBTRN = {"_al_"}; 
A_GISVEC(A68_VC ,NUOBTRN,MUOBTRN,4)
static A68_496   CAPBTRN = {"simple_type: tfn"}; 
A_GISVEC(A68_VC ,DAPBTRN,CAPBTRN,16)
static A68_497   GAPBTRN = {"simple_type: tmacpar"}; 
A_GISVEC(A68_VC ,HAPBTRN,GAPBTRN,20)
static A68_499   ICPBTRN = {"test_for_alias: tfn"}; 
A_GISVEC(A68_VC ,JCPBTRN,ICPBTRN,19)
static A68_500   MCPBTRN = {"test_for_alias: tmacpar"}; 
A_GISVEC(A68_VC ,NCPBTRN,MCPBTRN,23)
static A68_501   IDPBTRN = {"You need to call the local transform first"}; 
A_GISVEC(A68_VC ,JDPBTRN,IDPBTRN,42)
typedef struct   /* env of non-global proc */
{
A68_INT  GROBTRN_closuretop;
A_PAD_INT(PAD_154)
} KROBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  GROBTRN_closuretop;
A_PAD_INT(PAD_155)
A68_54  NROBTRN_closuretags;
} TROBTRN_is_modified;
typedef struct   /* env of non-global proc */
{
A68_BOOL * DROBTRN_closure_changed;
A68_265 ** CROBTRN_thisclosure;
A68_108  Msg;
A68_262 ** EROBTRN_closureptr;
} YROBTRN_newclosure;
typedef struct   /* env of non-global proc */
{
A68_484  WROBTRN_newclosure;
A68_265 ** CROBTRN_thisclosure;
A68_108  Msg;
} ESOBTRN_insert_newouter;
typedef struct   /* env of non-global proc */
{
A68_484  WROBTRN_newclosure;
} MSOBTRN_make_outer_type;
typedef struct   /* env of non-global proc */
{
A68_108  Msg;
A68_489  XVOBTRN_same_alias;
} ZVOBTRN_same_alias;
typedef struct   /* env of non-global proc */
{
A68_484  WROBTRN_newclosure;
A68_489  XVOBTRN_same_alias;
} HXOBTRN_find_outer_type;
typedef struct   /* env of non-global proc */
{
A68_265 ** CROBTRN_thisclosure;
A68_475  RROBTRN_is_modified;
A68_108  Msg;
A68_486  KSOBTRN_make_outer_type;
A68_485  CSOBTRN_insert_newouter;
A68_490  FXOBTRN_find_outer_type;
A68_54  NROBTRN_closuretags;
A68_484  WROBTRN_newclosure;
} UXOBTRN_outer_alias;
typedef struct   /* env of non-global proc */
{
A68_INT  Ntypes;
A_PAD_INT(PAD_156)
} QSOBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  Ntypes;
A_PAD_INT(PAD_157)
} YSOBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_32  TSOBTRN_typemap;
A68_479 * Typedecs;
A68_INT * DTOBTRN_newtypeno;
A68_258  BTOBTRN_decs;
} JTOBTRN_type;
typedef struct   /* env of non-global proc */
{
A68_INT * DTOBTRN_newtypeno;
} EVOBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_486  KSOBTRN_make_outer_type;
A68_INT * BYOBTRN_newtypeno;
A68_479 ** ZXOBTRN_typedecs;
A68_461 * VXOBTRN_ec;
A68_485  CSOBTRN_insert_newouter;
} GYOBTRN_make_new_outer;
typedef struct   /* env of non-global proc */
{
A68_479 *** AYOBTRN_dtail;
} NYOBTRN_addtypedec;
typedef struct   /* env of non-global proc */
{
A68_490  FXOBTRN_find_outer_type;
A68_479 ** ZXOBTRN_typedecs;
A68_261  Outer;
A68_492  LYOBTRN_addtypedec;
A68_INT * BYOBTRN_newtypeno;
A68_491  EYOBTRN_make_new_outer;
} TYOBTRN_make_alias;
typedef struct   /* env of non-global proc */
{
A68_494  VZOBTRN_simple_type;
A68_108  Msg;
} XZOBTRN_simple_type;
typedef struct   /* env of non-global proc */
{
A68_108  Msg;
} OAPBTRN_test_for_alias;
typedef struct   /* env of non-global proc */
{
A68_370  MAPBTRN_test_for_alias;
A68_494  VZOBTRN_simple_type;
A68_493  RYOBTRN_make_alias;
} VCPBTRN_type_alias;
typedef struct   /* env of non-global proc */
{
A68_360 * Tprocs;
A68_498  RAPBTRN_alias_tstr;
} TAPBTRN_alias_tstr;

A_STATIC A68_VOID  KQOBTRN_generator(A68_BOOL  JQOBTRN_anonymous, A68_46  *ReturnedValue);

A_STATIC A68_VOID  OQOBTRN_generator(A68_BOOL  NQOBTRN_anonymous, A68_VC  *ReturnedValue);

A68_VOID  ZQOBTRN_transform_alias(A68_265 * Closure, A68_108  Msg, A68_359  *ReturnedValue);

A_STATIC A68_VOID  JROBTRN_generator(A68_BOOL  HROBTRN_anonymous, A68_54  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  SROBTRN_is_modified(A68_INT  Clno, void *NonLocals);

A_STATIC A68_265 ** XROBTRN_newclosure(void *NonLocals);

A_STATIC A68_VOID  DSOBTRN_insert_newouter(A68_261  Newouter, A68_INT  Closureno, void *NonLocals);

A_STATIC A68_VOID  LSOBTRN_make_outer_type(A68_154  T, A68_INT  Ntypes, A68_479 * Typedecs, A68_255 * Oldenv, A68_261  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PSOBTRN_generator(A68_BOOL  NSOBTRN_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XSOBTRN_generator(A68_BOOL  VSOBTRN_anonymous, A68_258  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ITOBTRN_type(A68_154  Type, A68_360 * Tprocs, A68_327  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DVOBTRN_generator(A68_BOOL  BVOBTRN_anonymous, A68_258  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  YVOBTRN_same_alias(A68_154  Type1, A68_154  Type2, A68_479 * Typedecs, A68_258  Types2, void *NonLocals);

A_STATIC A68_262 * GXOBTRN_find_outer_type(A68_154  Newtype, A68_479 * Typedecs, A68_INT  Closureno, void *NonLocals);

A_STATIC A68_VOID  TXOBTRN_outer_alias(A68_261  Outer, A68_360 * Outertprocs, A68_358  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FYOBTRN_make_new_outer(A68_154  T, A68_INT  Closureno, A68_261  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MYOBTRN_addtypedec(A68_169 * T, void *NonLocals);

A_STATIC A68_VOID  SYOBTRN_make_alias(A68_154  T, A68_154  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  WZOBTRN_simple_type(A68_154  T, void *NonLocals);

A_STATIC A68_VOID  NAPBTRN_test_for_alias(A68_154  T, A68_360 * Tprocs, A68_327  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SAPBTRN_alias_tstr(A68_157 * Tstr, A68_326  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  UCPBTRN_type_alias(A68_154  T, A68_360 * Tprocs, A68_327  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SAPBTRN_alias_tstr(A68_157 * Tstr, A68_326  *ReturnedValue, void *NonLocals)
#define NL(x) (((TAPBTRN_alias_tstr *)NonLocals)->x)
{ 
A68_326  UAPBTRN;  /* collateral clause result */
A68_326  VAPBTRN;  /* clause result */
A68_370  WAPBTRN;  /* CALL */
A68_327  XAPBTRN;  /* avoid structure result */
A68_327  YAPBTRN_tyc;
A68_326  ZAPBTRN;  /* avoid structure result */
A68_326  ABPBTRN_rest;
A68_BOOL  BBPBTRN;  /* optbool result */
A68_326  CBPBTRN;  /* collateral clause result */
A68_157  DBPBTRN;  /* collateral clause result */
A68_157 * EBPBTRN;  /* YIELD */
A68_326  FBPBTRN;  /* collateral clause result */
A_PROC_ENTRY(alias_tstr);
 /* line 308: */
 /* line 309: */
if ( (Tstr==GAAATRN_niltstr) )
{ 
UAPBTRN.T = Tstr;
 /* line 310: */
UAPBTRN.C = A68_FALSE;
VAPBTRN = UAPBTRN;
} 
else
{ 
WAPBTRN = (*(&(NL(Tprocs)->Type))) ;
A_CALLPROC(WAPBTRN,((*(&(Tstr->Elem))), NL(Tprocs), &XAPBTRN),((*(&(Tstr->Elem))), NL(Tprocs), &XAPBTRN,(WAPBTRN).nonlocals));
YAPBTRN_tyc = XAPBTRN;
 /* line 311: */
A_CALLPROC(NL(RAPBTRN_alias_tstr),((*(&(Tstr->Rest))), &ZAPBTRN),((*(&(Tstr->Rest))), &ZAPBTRN,(NL(RAPBTRN_alias_tstr)).nonlocals));
ABPBTRN_rest = ZAPBTRN;
 /* line 312: */
 /* line 313: */
BBPBTRN = ABPBTRN_rest.C;
if ( ! BBPBTRN )
{BBPBTRN = YAPBTRN_tyc.C;
}
if ( BBPBTRN )
{ 
DBPBTRN.Elem = YAPBTRN_tyc.T;
DBPBTRN.Rest = ABPBTRN_rest.T;
EBPBTRN = A_HEAP(A68_157 ) ;
(*EBPBTRN) = DBPBTRN ;
CBPBTRN.T = EBPBTRN;
 /* line 314: */
CBPBTRN.C = A68_TRUE;
VAPBTRN = CBPBTRN;
} 
else
{ 
FBPBTRN.T = Tstr;
 /* line 315: */
 /* line 316: */
FBPBTRN.C = A68_FALSE;
VAPBTRN = FBPBTRN;
} 
} 
A_PROC_EXIT(alias_tstr);
*ReturnedValue = (VAPBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  PSOBTRN_generator(A68_BOOL  NSOBTRN_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((QSOBTRN_generator *)NonLocals)->x)
{ 
A68_32  RSOBTRN;  /* clause result */
A68_32  SSOBTRN;  /* OPERATORS - dynamic generator */
{ 
SSOBTRN.upb = NL(Ntypes) ;
( NSOBTRN_anonymous? A_VLOC(A68_INT ,SSOBTRN): A_VHEAP(A68_INT ,SSOBTRN) );
RSOBTRN = SSOBTRN;
} 
*ReturnedValue = (RSOBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  XSOBTRN_generator(A68_BOOL  VSOBTRN_anonymous, A68_258  *ReturnedValue, void *NonLocals)
#define NL(x) (((YSOBTRN_generator *)NonLocals)->x)
{ 
A68_258  ZSOBTRN;  /* clause result */
A68_258  ATOBTRN;  /* OPERATORS - dynamic generator */
{ 
ATOBTRN.upb = NL(Ntypes) ;
( VSOBTRN_anonymous? A_VLOC(A68_169 *,ATOBTRN): A_VHEAP(A68_169 *,ATOBTRN) );
ZSOBTRN = ATOBTRN;
} 
*ReturnedValue = (ZSOBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ITOBTRN_type(A68_154  Type, A68_360 * Tprocs, A68_327  *ReturnedValue, void *NonLocals)
#define NL(x) (((JTOBTRN_type *)NonLocals)->x)
{ 
A68_154  KTOBTRN;  /* united object - for case conformity */
A68_155 * LTOBTRN_tn;
A68_INT  MTOBTRN;  /* YIELD */
A68_INT * NTOBTRN_map;
A68_479 * OTOBTRN_tl;
A68_INT  PTOBTRN;  /* to part of loop */
A68_INT  QTOBTRN;  /* loop control */
A68_INT  RTOBTRN;  /* YIELD */
A68_374  STOBTRN;  /* CALL */
A68_331  TTOBTRN;  /* avoid structure result */
A68_169 ** UTOBTRN;  /* YIELD */
A68_327  VTOBTRN;  /* collateral clause result */
A68_154  WTOBTRN;  /* OPERATORS - mode -> union mode */
A68_155 * XTOBTRN;  /* YIELD */
A68_327  YTOBTRN;  /* clause result */
A68_327  ZTOBTRN;  /* collateral clause result */
A68_154  AUOBTRN;  /* OPERATORS - mode -> union mode */
A68_370  BUOBTRN;  /* CALL */
A68_327  CUOBTRN;  /* avoid structure result */
A_PROC_ENTRY(type);
 /* line 95: */
 /* line 96: */
KTOBTRN = Type ;
switch ( KTOBTRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
LTOBTRN_tn = (KTOBTRN.data.mode1);
 /* line 97: */
{ 
MTOBTRN = (*(&(LTOBTRN_tn->Typeno))) ;
NTOBTRN_map = (&A_VINDEX(NL(TSOBTRN_typemap),MTOBTRN));
 /* line 98: */
 /* line 99: */
if ( ((*NTOBTRN_map)==0) )
{ 
OTOBTRN_tl = NL(Typedecs);
 /* line 100: */
(*NTOBTRN_map) = (*NL(DTOBTRN_newtypeno))+=1;
 /* line 101: */
PTOBTRN = ((*(&(LTOBTRN_tn->Typeno)))-1);
for ( QTOBTRN = 1;
QTOBTRN <= PTOBTRN;
QTOBTRN += 1 )
{ 
OTOBTRN_tl = (*(&(OTOBTRN_tl->Rest)));
}
 /* line 102: */
 /* line 103: */
RTOBTRN = (*(&(LTOBTRN_tn->Typeno))) ;
STOBTRN = (*(&(Tprocs->Typedec))) ;
A_CALLPROC(STOBTRN,((*(&(OTOBTRN_tl->Dec))), Tprocs, &TTOBTRN),((*(&(OTOBTRN_tl->Dec))), Tprocs, &TTOBTRN,(STOBTRN).nonlocals));
UTOBTRN = (&A_VINDEX(NL(BTOBTRN_decs),RTOBTRN)) ;
(*UTOBTRN) = TTOBTRN.T;
} 
 /* line 104: */
 /* line 105: */
if ( ((*NTOBTRN_map)!=(*(&(LTOBTRN_tn->Typeno)))) )
{ 
XTOBTRN = IFAATRN_maketname((*NTOBTRN_map)) ;
VTOBTRN.T = A_UNITE(WTOBTRN,mode1,1,XTOBTRN);
 /* line 106: */
VTOBTRN.C = A68_TRUE;
YTOBTRN = VTOBTRN;
} 
else
{ 
ZTOBTRN.T = A_UNITE(AUOBTRN,mode1,1,LTOBTRN_tn);
 /* line 107: */
 /* line 108: */
 /* line 109: */
ZTOBTRN.C = A68_FALSE;
YTOBTRN = ZTOBTRN;
} 
} 
break;
default: 
 /* line 110: */
BUOBTRN = (*(&(AWLATRN_nulltprocs->Type))) ;
A_CALLPROC(BUOBTRN,(Type, Tprocs, &CUOBTRN),(Type, Tprocs, &CUOBTRN,(BUOBTRN).nonlocals));
YTOBTRN = CUOBTRN;
break;
} 
A_PROC_EXIT(type);
*ReturnedValue = (YTOBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  DVOBTRN_generator(A68_BOOL  BVOBTRN_anonymous, A68_258  *ReturnedValue, void *NonLocals)
#define NL(x) (((EVOBTRN_generator *)NonLocals)->x)
{ 
A68_258  FVOBTRN;  /* clause result */
A68_258  GVOBTRN;  /* OPERATORS - dynamic generator */
{ 
GVOBTRN.upb = (*NL(DTOBTRN_newtypeno)) ;
( BVOBTRN_anonymous? A_VLOC(A68_169 *,GVOBTRN): A_VHEAP(A68_169 *,GVOBTRN) );
FVOBTRN = GVOBTRN;
} 
*ReturnedValue = (FVOBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  FYOBTRN_make_new_outer(A68_154  T, A68_INT  Closureno, A68_261  *ReturnedValue, void *NonLocals)
#define NL(x) (((GYOBTRN_make_new_outer *)NonLocals)->x)
{ 
A68_261  HYOBTRN;  /* avoid structure result */
A68_261  IYOBTRN_newouter;
A68_261  JYOBTRN;  /* clause result */
A_PROC_ENTRY(make_new_outer);
 /* line 240: */
 /* line 241: */
{ 
A_CALLPROC(NL(KSOBTRN_make_outer_type),(T, (*NL(BYOBTRN_newtypeno)), (*NL(ZXOBTRN_typedecs)), (*(&(NL(VXOBTRN_ec)->E))), &HYOBTRN),(T, (*NL(BYOBTRN_newtypeno)), (*NL(ZXOBTRN_typedecs)), (*(&(NL(VXOBTRN_ec)->E))), &HYOBTRN,(NL(KSOBTRN_make_outer_type)).nonlocals));
IYOBTRN_newouter = HYOBTRN;
 /* line 242: */
A_CALLPROC(NL(CSOBTRN_insert_newouter),(IYOBTRN_newouter, Closureno),(IYOBTRN_newouter, Closureno,(NL(CSOBTRN_insert_newouter)).nonlocals));
 /* line 243: */
 /* line 244: */
JYOBTRN = IYOBTRN_newouter;
} 
A_PROC_EXIT(make_new_outer);
*ReturnedValue = (JYOBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  MYOBTRN_addtypedec(A68_169 * T, void *NonLocals)
#define NL(x) (((NYOBTRN_addtypedec *)NonLocals)->x)
{ 
A68_479  OYOBTRN;  /* collateral clause result */
A68_479 * PYOBTRN;  /* YIELD */
A_PROC_ENTRY(addtypedec);
 /* line 247: */
{ 
OYOBTRN.Dec = T;
OYOBTRN.Rest = IQOBTRN_niltypelist;
PYOBTRN = A_HEAP(A68_479 ) ;
(*PYOBTRN) = OYOBTRN ;
(**NL(AYOBTRN_dtail)) = PYOBTRN;
 /* line 248: */
 /* line 249: */
(*NL(AYOBTRN_dtail)) = (&((**NL(AYOBTRN_dtail))->Rest));
} 
A_PROC_EXIT(addtypedec);
return;
} 
#undef NL

A_STATIC A68_VOID  SYOBTRN_make_alias(A68_154  T, A68_154  *ReturnedValue, void *NonLocals)
#define NL(x) (((TYOBTRN_make_alias *)NonLocals)->x)
{ 
A68_262 * UYOBTRN_outersptr;
A68_479 * VYOBTRN_tl;
A68_INT  WYOBTRN_tcnt;
A68_INT  XYOBTRN_typeno;
A68_261  YYOBTRN_odec;
A68_BOOL  ZYOBTRN;  /* optbool result */
A68_BOOL  AZOBTRN;  /* optbool result */
A68_154  BZOBTRN;  /* clause result */
A68_154  CZOBTRN;  /* OPERATORS - mode -> union mode */
A68_155 * DZOBTRN;  /* YIELD */
A68_258  EZOBTRN;  /* OPERATORS - simple index */
A68_INT  FZOBTRN;  /* YIELD */
A68_169 * GZOBTRN;  /* YIELD */
A68_169 * HZOBTRN_newtd;
A68_INT * IZOBTRN;  /* YIELD */
A68_154  JZOBTRN;  /* OPERATORS - mode -> union mode */
A68_155 * KZOBTRN;  /* YIELD */
A68_261  LZOBTRN;  /* avoid structure result */
A68_261  MZOBTRN_newodec;
A68_258  NZOBTRN;  /* OPERATORS - simple index */
A68_INT  OZOBTRN;  /* YIELD */
A68_169 * PZOBTRN;  /* YIELD */
A68_169 * QZOBTRN_newtd;
A68_INT * RZOBTRN;  /* YIELD */
A68_154  SZOBTRN;  /* OPERATORS - mode -> union mode */
A68_155 * TZOBTRN;  /* YIELD */
A_PROC_ENTRY(make_alias);
 /* line 256: */
 /* line 257: */
{ 
 /* line 258: */
UYOBTRN_outersptr = A_CALLPROC(NL(FXOBTRN_find_outer_type),(T, (*NL(ZXOBTRN_typedecs)), NL(Outer).Closureno),(T, (*NL(ZXOBTRN_typedecs)), NL(Outer).Closureno,(NL(FXOBTRN_find_outer_type)).nonlocals));
 /* line 259: */
 /* line 260: */
if ( (UYOBTRN_outersptr!=HBAATRN_nilouters) )
{ 
VYOBTRN_tl = (*NL(ZXOBTRN_typedecs));
 /* line 261: */
WYOBTRN_tcnt = 0;
XYOBTRN_typeno = 0;
 /* line 262: */
YYOBTRN_odec = (*(&(UYOBTRN_outersptr->Outer)));
 /* line 264: */
for ( ;; )
{ 
ZYOBTRN = (XYOBTRN_typeno==0);
if ( ZYOBTRN )
{ /* line 265: */
ZYOBTRN = (VYOBTRN_tl!=IQOBTRN_niltypelist);
}
if ( !(ZYOBTRN) ) break;
WYOBTRN_tcnt+=1;
 /* line 266: */
 /* line 267: */
AZOBTRN = ((*(&((*(&(VYOBTRN_tl->Dec)))->Usage)))!=CBAATRN_nilusage);
if ( AZOBTRN )
{ /* line 268: */
AZOBTRN = ((*(&((*(&((*(&(VYOBTRN_tl->Dec)))->Usage)))->Closureno)))==YYOBTRN_odec.Closureno);
}
if ( AZOBTRN )
{ 
 /* line 269: */
XYOBTRN_typeno = WYOBTRN_tcnt;
} 
 /* line 270: */
 /* line 271: */
VYOBTRN_tl = (*(&(VYOBTRN_tl->Rest)));
}
 /* line 272: */
 /* line 273: */
 /* line 274: */
if ( (XYOBTRN_typeno!=0) )
{ 
DZOBTRN = IFAATRN_maketname(XYOBTRN_typeno) ;
BZOBTRN = A_UNITE(CZOBTRN,mode1,1,DZOBTRN);
} 
else
{ 
 /* line 275: */
EZOBTRN = (*(&(YYOBTRN_odec.Environ->Types))) ;
FZOBTRN = 1 ;
GZOBTRN = A_HEAP(A68_169 ) ;
(*GZOBTRN) = (*(*(&A_VINDEX(EZOBTRN,FZOBTRN)))) ;
HZOBTRN_newtd = GZOBTRN;
 /* line 276: */
IZOBTRN = (&(HZOBTRN_newtd->Sort)) ;
(*IZOBTRN) = PKAATRN_localdec;
 /* line 280: */
A_CALLPROC(NL(LYOBTRN_addtypedec),(HZOBTRN_newtd),(HZOBTRN_newtd,(NL(LYOBTRN_addtypedec)).nonlocals));
 /* line 281: */
 /* line 282: */
 /* line 283: */
 /* line 284: */
KZOBTRN = IFAATRN_maketname((*NL(BYOBTRN_newtypeno))+=1) ;
BZOBTRN = A_UNITE(JZOBTRN,mode1,1,KZOBTRN);
} 
} 
else
{ 
A_CALLPROC(NL(EYOBTRN_make_new_outer),(T, NL(Outer).Closureno, &LZOBTRN),(T, NL(Outer).Closureno, &LZOBTRN,(NL(EYOBTRN_make_new_outer)).nonlocals));
MZOBTRN_newodec = LZOBTRN;
 /* line 285: */
 /* line 286: */
NZOBTRN = (*(&(MZOBTRN_newodec.Environ->Types))) ;
OZOBTRN = 1 ;
PZOBTRN = A_HEAP(A68_169 ) ;
(*PZOBTRN) = (*(*(&A_VINDEX(NZOBTRN,OZOBTRN)))) ;
QZOBTRN_newtd = PZOBTRN;
 /* line 287: */
RZOBTRN = (&(QZOBTRN_newtd->Sort)) ;
(*RZOBTRN) = PKAATRN_localdec;
 /* line 290: */
A_CALLPROC(NL(LYOBTRN_addtypedec),(QZOBTRN_newtd),(QZOBTRN_newtd,(NL(LYOBTRN_addtypedec)).nonlocals));
 /* line 291: */
 /* line 292: */
 /* line 293: */
TZOBTRN = IFAATRN_maketname((*NL(BYOBTRN_newtypeno))+=1) ;
BZOBTRN = A_UNITE(SZOBTRN,mode1,1,TZOBTRN);
} 
} 
A_PROC_EXIT(make_alias);
*ReturnedValue = (BZOBTRN);
return;
} 
#undef NL

A_STATIC A68_BOOL  WZOBTRN_simple_type(A68_154  T, void *NonLocals)
#define NL(x) (((XZOBTRN_simple_type *)NonLocals)->x)
{ 
A68_154  YZOBTRN;  /* united object - for case conformity */
A68_BOOL  ZZOBTRN;  /* clause result */
A68_159 * AAPBTRN_tbr;
A68_158 * BAPBTRN_tfn;
A68_46  EAPBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  FAPBTRN;  /* OPERATORS - skip to mode */
A68_46  IAPBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  JAPBTRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(simple_type);
 /* line 296: */
 /* line 297: */
YZOBTRN = T ;
switch ( YZOBTRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
case 7: /* REF STRUCT(INT)  */
case 9: /* REF STRUCT(INT)  */
 /* line 298: */
ZZOBTRN = A68_TRUE;
break;
case 5: /* REF STRUCT(MODE154)  */
AAPBTRN_tbr = (YZOBTRN.data.mode5);
 /* line 299: */
ZZOBTRN = A_CALLPROC(NL(VZOBTRN_simple_type),((*(&(AAPBTRN_tbr->Type)))),((*(&(AAPBTRN_tbr->Type))),(NL(VZOBTRN_simple_type)).nonlocals));
break;
case 4: /* REF STRUCT(MODE154,MODE154)  */
BAPBTRN_tfn = (YZOBTRN.data.mode4);
{ 
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(EAPBTRN,DAPBTRN,A68_VC )),(SHAAOSI_system, A_HVEC(EAPBTRN,DAPBTRN,A68_VC ),(NL(Msg)).nonlocals));
 /* line 300: */
ZZOBTRN = FAPBTRN;
} 
break;
case 8: /* REF STRUCT(INT)  */
{ 
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(IAPBTRN,HAPBTRN,A68_VC )),(SHAAOSI_system, A_HVEC(IAPBTRN,HAPBTRN,A68_VC ),(NL(Msg)).nonlocals));
 /* line 301: */
 /* line 302: */
ZZOBTRN = JAPBTRN;
} 
break;
default: 
 /* line 303: */
ZZOBTRN = A68_FALSE;
break;
} 
A_PROC_EXIT(simple_type);
return( ZZOBTRN );
} 
#undef NL

A_STATIC A68_VOID  NAPBTRN_test_for_alias(A68_154  T, A68_360 * Tprocs, A68_327  *ReturnedValue, void *NonLocals)
#define NL(x) (((OAPBTRN_test_for_alias *)NonLocals)->x)
{ 
A68_498  RAPBTRN_alias_tstr;   /* proc value of non-global proc */
A68_154  GBPBTRN;  /* united object - for case conformity */
A68_156 * HBPBTRN_trow;
A68_370  IBPBTRN;  /* CALL */
A68_327  JBPBTRN;  /* avoid structure result */
A68_327  KBPBTRN_tc;
A68_327  LBPBTRN;  /* collateral clause result */
A68_156  MBPBTRN;  /* collateral clause result */
A68_156 * NBPBTRN;  /* YIELD */
A68_154  OBPBTRN;  /* OPERATORS - mode -> union mode */
A68_327  PBPBTRN;  /* clause result */
A68_327  QBPBTRN;  /* collateral clause result */
A68_157 * RBPBTRN_tstr;
A68_326  SBPBTRN;  /* avoid structure result */
A68_326  TBPBTRN_tsc;
A68_327  UBPBTRN;  /* collateral clause result */
A68_154  VBPBTRN;  /* OPERATORS - mode -> union mode */
A68_157 * WBPBTRN;  /* YIELD */
A68_327  XBPBTRN;  /* collateral clause result */
A68_160 * YBPBTRN_tstring;
A68_370  ZBPBTRN;  /* CALL */
A68_327  ACPBTRN;  /* avoid structure result */
A68_327  BCPBTRN_tc;
A68_327  CCPBTRN;  /* collateral clause result */
A68_160  DCPBTRN;  /* collateral clause result */
A68_160 * ECPBTRN;  /* YIELD */
A68_154  FCPBTRN;  /* OPERATORS - mode -> union mode */
A68_327  GCPBTRN;  /* collateral clause result */
A68_158 * HCPBTRN_tfn;
A68_46  KCPBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_327  LCPBTRN;  /* OPERATORS - skip to mode */
A68_46  OCPBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_327  PCPBTRN;  /* OPERATORS - skip to mode */
A68_327  QCPBTRN;  /* collateral clause result */
A_PROC_ENTRY(test_for_alias);
 /* line 306: */
 /* line 307: */
{ 
A_CLOSURE( RAPBTRN_alias_tstr, SAPBTRN_alias_tstr, TAPBTRN_alias_tstr );
(( TAPBTRN_alias_tstr * ) ( RAPBTRN_alias_tstr.nonlocals )) -> Tprocs = Tprocs;
(( TAPBTRN_alias_tstr * ) ( RAPBTRN_alias_tstr.nonlocals )) -> RAPBTRN_alias_tstr = RAPBTRN_alias_tstr;
 /* line 318: */
 /* line 319: */
GBPBTRN = T ;
switch ( GBPBTRN.mode )
{ 
case 2: /* REF STRUCT(MODE138,MODE154)  */
HBPBTRN_trow = (GBPBTRN.data.mode2);
 /* line 320: */
{ 
IBPBTRN = (*(&(Tprocs->Type))) ;
A_CALLPROC(IBPBTRN,((*(&(HBPBTRN_trow->Elem))), Tprocs, &JBPBTRN),((*(&(HBPBTRN_trow->Elem))), Tprocs, &JBPBTRN,(IBPBTRN).nonlocals));
KBPBTRN_tc = JBPBTRN;
 /* line 322: */
 /* line 323: */
if ( KBPBTRN_tc.C )
{ 
MBPBTRN.Size = (*(&(HBPBTRN_trow->Size)));
MBPBTRN.Elem = KBPBTRN_tc.T;
NBPBTRN = A_HEAP(A68_156 ) ;
(*NBPBTRN) = MBPBTRN ;
LBPBTRN.T = A_UNITE(OBPBTRN,mode2,2,NBPBTRN);
 /* line 324: */
LBPBTRN.C = A68_TRUE;
PBPBTRN = LBPBTRN;
} 
else
{ 
QBPBTRN.T = T;
 /* line 325: */
 /* line 326: */
 /* line 327: */
QBPBTRN.C = A68_FALSE;
PBPBTRN = QBPBTRN;
} 
} 
break;
case 3: /* REF STRUCT(MODE154,REF MODE157)  */
RBPBTRN_tstr = (GBPBTRN.data.mode3);
 /* line 328: */
{ 
A_CALLPROC(RAPBTRN_alias_tstr,(RBPBTRN_tstr, &SBPBTRN),(RBPBTRN_tstr, &SBPBTRN,(RAPBTRN_alias_tstr).nonlocals));
TBPBTRN_tsc = SBPBTRN;
 /* line 330: */
 /* line 331: */
if ( TBPBTRN_tsc.C )
{ 
WBPBTRN = TBPBTRN_tsc.T ;
UBPBTRN.T = A_UNITE(VBPBTRN,mode3,3,WBPBTRN);
 /* line 332: */
UBPBTRN.C = A68_TRUE;
PBPBTRN = UBPBTRN;
} 
else
{ 
XBPBTRN.T = T;
 /* line 333: */
 /* line 334: */
 /* line 335: */
XBPBTRN.C = A68_FALSE;
PBPBTRN = XBPBTRN;
} 
} 
break;
case 6: /* REF STRUCT(MODE138,MODE154)  */
YBPBTRN_tstring = (GBPBTRN.data.mode6);
 /* line 336: */
{ 
ZBPBTRN = (*(&(Tprocs->Type))) ;
A_CALLPROC(ZBPBTRN,((*(&(YBPBTRN_tstring->Char))), Tprocs, &ACPBTRN),((*(&(YBPBTRN_tstring->Char))), Tprocs, &ACPBTRN,(ZBPBTRN).nonlocals));
BCPBTRN_tc = ACPBTRN;
 /* line 338: */
 /* line 339: */
if ( BCPBTRN_tc.C )
{ 
DCPBTRN.Size = (*(&(YBPBTRN_tstring->Size)));
DCPBTRN.Char = BCPBTRN_tc.T;
ECPBTRN = A_HEAP(A68_160 ) ;
(*ECPBTRN) = DCPBTRN ;
CCPBTRN.T = A_UNITE(FCPBTRN,mode6,6,ECPBTRN);
 /* line 340: */
CCPBTRN.C = A68_TRUE;
PBPBTRN = CCPBTRN;
} 
else
{ 
GCPBTRN.T = T;
 /* line 341: */
 /* line 342: */
 /* line 343: */
GCPBTRN.C = A68_FALSE;
PBPBTRN = GCPBTRN;
} 
} 
break;
case 4: /* REF STRUCT(MODE154,MODE154)  */
HCPBTRN_tfn = (GBPBTRN.data.mode4);
{ 
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(KCPBTRN,JCPBTRN,A68_VC )),(SHAAOSI_system, A_HVEC(KCPBTRN,JCPBTRN,A68_VC ),(NL(Msg)).nonlocals));
 /* line 344: */
PBPBTRN = LCPBTRN;
} 
break;
case 8: /* REF STRUCT(INT)  */
{ 
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(OCPBTRN,NCPBTRN,A68_VC )),(SHAAOSI_system, A_HVEC(OCPBTRN,NCPBTRN,A68_VC ),(NL(Msg)).nonlocals));
 /* line 345: */
 /* line 346: */
PBPBTRN = PCPBTRN;
} 
break;
default: 
QCPBTRN.T = T;
 /* line 347: */
 /* line 348: */
QCPBTRN.C = A68_FALSE;
PBPBTRN = QCPBTRN;
break;
} 
} 
A_PROC_EXIT(test_for_alias);
*ReturnedValue = (PBPBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  UCPBTRN_type_alias(A68_154  T, A68_360 * Tprocs, A68_327  *ReturnedValue, void *NonLocals)
#define NL(x) (((VCPBTRN_type_alias *)NonLocals)->x)
{ 
A68_327  WCPBTRN;  /* avoid structure result */
A68_327  XCPBTRN_tc;
A68_327  YCPBTRN;  /* collateral clause result */
A68_154  ZCPBTRN;  /* avoid structure result */
A68_327  ADPBTRN;  /* clause result */
A_PROC_ENTRY(type_alias);
 /* line 351: */
 /* line 352: */
{ 
A_CALLPROC(NL(MAPBTRN_test_for_alias),(T, Tprocs, &WCPBTRN),(T, Tprocs, &WCPBTRN,(NL(MAPBTRN_test_for_alias)).nonlocals));
XCPBTRN_tc = WCPBTRN;
 /* line 353: */
 /* line 354: */
if ( !A_CALLPROC(NL(VZOBTRN_simple_type),(XCPBTRN_tc.T),(XCPBTRN_tc.T,(NL(VZOBTRN_simple_type)).nonlocals)) )
{ 
A_CALLPROC(NL(RYOBTRN_make_alias),(XCPBTRN_tc.T, &ZCPBTRN),(XCPBTRN_tc.T, &ZCPBTRN,(NL(RYOBTRN_make_alias)).nonlocals));
YCPBTRN.T = ZCPBTRN;
 /* line 355: */
 /* line 356: */
YCPBTRN.C = A68_TRUE;
ADPBTRN = YCPBTRN;
} 
else
{ 
 /* line 357: */
ADPBTRN = XCPBTRN_tc;
} 
} 
A_PROC_EXIT(type_alias);
*ReturnedValue = (ADPBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  OQOBTRN_generator(A68_BOOL  NQOBTRN_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  PQOBTRN;  /* clause result */
A68_VC  QQOBTRN;  /* OPERATORS - dynamic generator */
{ 
QQOBTRN.upb = 0 ;
( NQOBTRN_anonymous? A_VLOC(A68_CHAR ,QQOBTRN): A_VHEAP(A68_CHAR ,QQOBTRN) );
PQOBTRN = QQOBTRN;
} 
*ReturnedValue = (PQOBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  JROBTRN_generator(A68_BOOL  HROBTRN_anonymous, A68_54  *ReturnedValue, void *NonLocals)
#define NL(x) (((KROBTRN_generator *)NonLocals)->x)
{ 
A68_54  LROBTRN;  /* clause result */
A68_54  MROBTRN;  /* OPERATORS - dynamic generator */
{ 
MROBTRN.upb = NL(GROBTRN_closuretop) ;
( HROBTRN_anonymous? A_VLOC(A68_BOOL ,MROBTRN): A_VHEAP(A68_BOOL ,MROBTRN) );
LROBTRN = MROBTRN;
} 
*ReturnedValue = (LROBTRN);
return;
} 
#undef NL

A_STATIC A68_BOOL  SROBTRN_is_modified(A68_INT  Clno, void *NonLocals)
#define NL(x) (((TROBTRN_is_modified *)NonLocals)->x)
{ 
A68_BOOL  UROBTRN;  /* clause result */
A68_BOOL  VROBTRN;  /* optbool result */
A_PROC_ENTRY(is_modified);
 /* line 63: */
 /* line 64: */
if ( (Clno<=0) )
{ 
 /* line 65: */
UROBTRN = A68_FALSE;
} 
else
{ 
VROBTRN = (Clno>NL(GROBTRN_closuretop));
if ( ! VROBTRN )
{ /* line 66: */
VROBTRN = (*(&A_VINDEX(NL(NROBTRN_closuretags),Clno)));
}
UROBTRN = VROBTRN;
} 
A_PROC_EXIT(is_modified);
return( UROBTRN );
} 
#undef NL

A_STATIC A68_265 ** XROBTRN_newclosure(void *NonLocals)
#define NL(x) (((YROBTRN_newclosure *)NonLocals)->x)
{ 
A68_265 ** ZROBTRN;  /* clause result */
A_PROC_ENTRY(newclosure);
{ 
 /* line 70: */
if ( !(*NL(DROBTRN_closure_changed)) )
{ 
(*NL(DROBTRN_closure_changed)) = A68_TRUE;
 /* line 71: */
(*NL(CROBTRN_thisclosure)) = DPCATRN_copy_closure((*NL(CROBTRN_thisclosure)), NL(Msg));
 /* line 72: */
 /* line 73: */
 /* line 74: */
(*NL(EROBTRN_closureptr)) = ELCATRN_find_outers((*(&((&((*NL(EROBTRN_closureptr))->Outer))->Closureno))), (*NL(CROBTRN_thisclosure)), NL(Msg));
} 
 /* line 75: */
 /* line 76: */
ZROBTRN = NL(CROBTRN_thisclosure);
} 
A_PROC_EXIT(newclosure);
return( ZROBTRN );
} 
#undef NL

A_STATIC A68_VOID  DSOBTRN_insert_newouter(A68_261  Newouter, A68_INT  Closureno, void *NonLocals)
#define NL(x) (((ESOBTRN_insert_newouter *)NonLocals)->x)
{ 
A68_262 ** FSOBTRN_ptr;
A_PROC_ENTRY(insert_newouter);
 /* line 79: */
{ 
FSOBTRN_ptr = (&((*A_CALLPROC(NL(WROBTRN_newclosure),(),((NL(WROBTRN_newclosure)).nonlocals)))->Outers));
 /* line 80: */
for ( ;; )
{ 
if ( !(((*(&((&((*FSOBTRN_ptr)->Outer))->Closureno)))!=Closureno)) ) break;
FSOBTRN_ptr = (&((*FSOBTRN_ptr)->Rest));
}
 /* line 81: */
 /* line 82: */
KNCATRN_insert_outer(Newouter, FSOBTRN_ptr, (*NL(CROBTRN_thisclosure)), NL(Msg));
} 
A_PROC_EXIT(insert_newouter);
return;
} 
#undef NL
 /* line 85: */
 /* line 86: */
 /* line 87: */

A_STATIC A68_VOID  LSOBTRN_make_outer_type(A68_154  T, A68_INT  Ntypes, A68_479 * Typedecs, A68_255 * Oldenv, A68_261  *ReturnedValue, void *NonLocals)
#define NL(x) (((MSOBTRN_make_outer_type *)NonLocals)->x)
{ 
A68_33  OSOBTRN_generator;   /* proc value of non-global proc */
A68_32  USOBTRN;  /* avoid structure result */
A68_32  TSOBTRN_typemap;
A68_487  WSOBTRN_generator;   /* proc value of non-global proc */
A68_258  CTOBTRN;  /* avoid structure result */
A68_258  BTOBTRN_decs;
A68_INT  DTOBTRN_newtypeno;
A68_94  ETOBTRN;  /* OPERATORS - mode -> union mode */
A68_370  HTOBTRN_type;   /* proc value of non-global proc */
A68_405  DUOBTRN;  /* OPERATORS - mode -> union mode */
A68_370  EUOBTRN;  /* YIELD */
A68_404  FUOBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_360 * GUOBTRN_newtprocs;
A68_INT  HUOBTRN_mpno;
A68_INT  IUOBTRN_newclosureno;
A68_479 * JUOBTRN_tl;
A68_169  KUOBTRN;  /* collateral clause result */
A68_488  LUOBTRN;  /* collateral clause result */
A68_52  OUOBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  PUOBTRN;  /* YIELD */
A68_52  QUOBTRN;  /* OPERATORS - mode -> union mode */
A68_85  RUOBTRN;  /* OPERATORS - istruct -> vector */
A68_VC  SUOBTRN;  /* avoid structure result */
A68_129  TUOBTRN;  /* OPERATORS - mode -> union mode */
A68_327  UUOBTRN;  /* avoid structure result */
A68_167  VUOBTRN;  /* OPERATORS - mode -> union mode */
A68_163 * WUOBTRN;  /* YIELD */
A68_136 * XUOBTRN;  /* YIELD */
A68_169 * YUOBTRN;  /* YIELD */
A68_169 * ZUOBTRN_dec;
A68_INT * AVOBTRN;  /* YIELD */
A68_487  CVOBTRN_generator;   /* proc value of non-global proc */
A68_258  HVOBTRN;  /* avoid structure result */
A68_258  IVOBTRN_newtypevec;
A68_INT  JVOBTRN;  /* YIELD */
A68_169 ** KVOBTRN;  /* YIELD */
A68_INT  LVOBTRN_i;
A68_INT  MVOBTRN;  /* to part of loop */
A68_169 * NVOBTRN;  /* YIELD */
A68_169 ** OVOBTRN;  /* YIELD */
A68_261  PVOBTRN;  /* collateral clause result */
A68_255  QVOBTRN;  /* collateral clause result */
A68_255 * RVOBTRN;  /* YIELD */
A68_261  SVOBTRN;  /* clause result */
A_PROC_ENTRY(make_outer_type);
 /* line 88: */
 /* line 89: */
{ 
A_CLOSURE( OSOBTRN_generator, PSOBTRN_generator, QSOBTRN_generator );
(( QSOBTRN_generator * ) ( OSOBTRN_generator.nonlocals )) -> Ntypes = Ntypes;
A_CALLPROC(OSOBTRN_generator,(A68_TRUE, &USOBTRN),(A68_TRUE, &USOBTRN,(OSOBTRN_generator).nonlocals));
TSOBTRN_typemap = USOBTRN;
 /* line 90: */
A_CLOSURE( WSOBTRN_generator, XSOBTRN_generator, YSOBTRN_generator );
(( YSOBTRN_generator * ) ( WSOBTRN_generator.nonlocals )) -> Ntypes = Ntypes;
A_CALLPROC(WSOBTRN_generator,(A68_TRUE, &CTOBTRN),(A68_TRUE, &CTOBTRN,(WSOBTRN_generator).nonlocals));
BTOBTRN_decs = CTOBTRN;
 /* line 91: */
DTOBTRN_newtypeno = 1;
 /* line 92: */
VTCAOST_clear(A_UNITE(ETOBTRN,mode2,2,TSOBTRN_typemap));
 /* line 94: */
A_CLOSURE( HTOBTRN_type, ITOBTRN_type, JTOBTRN_type );
(( JTOBTRN_type * ) ( HTOBTRN_type.nonlocals )) -> TSOBTRN_typemap = TSOBTRN_typemap;
(( JTOBTRN_type * ) ( HTOBTRN_type.nonlocals )) -> Typedecs = Typedecs;
(( JTOBTRN_type * ) ( HTOBTRN_type.nonlocals )) -> DTOBTRN_newtypeno = (&DTOBTRN_newtypeno);
(( JTOBTRN_type * ) ( HTOBTRN_type.nonlocals )) -> BTOBTRN_decs = BTOBTRN_decs;
 /* line 112: */
EUOBTRN = HTOBTRN_type ;
GUOBTRN_newtprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HVEC(FUOBTRN,A_UNITE(DUOBTRN,mode10,10,EUOBTRN),A68_405 ));
 /* line 113: */
 /* line 114: */
IUOBTRN_newclosureno = ENCATRN_reserve_next_closureno((*A_CALLPROC(NL(WROBTRN_newclosure),(),((NL(WROBTRN_newclosure)).nonlocals))));
 /* line 115: */
JUOBTRN_tl = Typedecs;
 /* line 116: */
 /* line 117: */
KUOBTRN.Sort = OKAATRN_outerdec;
PUOBTRN = NUOBTRN ;
LUOBTRN.data[0] = A_UNITE(OUOBTRN,mode7,7,PUOBTRN);
LUOBTRN.data[1] = A_UNITE(QUOBTRN,mode1,1,IUOBTRN_newclosureno);
 /* line 118: */
UJBAOSL_oneline( A_HISVEC(RUOBTRN,LUOBTRN,2,A68_52 ), &SUOBTRN );
KUOBTRN.Typename = SUOBTRN;
KUOBTRN.Attr = A_UNITE(TUOBTRN,mode5,5,(&ZHAATRN_attrnull));
 /* line 119: */
A_CALLPROC(HTOBTRN_type,(T, GUOBTRN_newtprocs, &UUOBTRN),(T, GUOBTRN_newtprocs, &UUOBTRN,(HTOBTRN_type).nonlocals));
WUOBTRN = XFAATRN_maketypetag(UUOBTRN.T) ;
KUOBTRN.Body = A_UNITE(VUOBTRN,mode3,3,WUOBTRN);
XUOBTRN = A_HEAP(A68_136 ) ;
(*XUOBTRN) = (*(*(&((*(&(JUOBTRN_tl->Dec)))->Usage)))) ;
KUOBTRN.Usage = XUOBTRN;
YUOBTRN = A_HEAP(A68_169 ) ;
(*YUOBTRN) = KUOBTRN ;
ZUOBTRN_dec = YUOBTRN;
 /* line 121: */
AVOBTRN = (&((*(&(ZUOBTRN_dec->Usage)))->Closureno)) ;
(*AVOBTRN) = IUOBTRN_newclosureno;
 /* line 123: */
A_CLOSURE( CVOBTRN_generator, DVOBTRN_generator, EVOBTRN_generator );
(( EVOBTRN_generator * ) ( CVOBTRN_generator.nonlocals )) -> DTOBTRN_newtypeno = (&DTOBTRN_newtypeno);
A_CALLPROC(CVOBTRN_generator,(A68_FALSE, &HVOBTRN),(A68_FALSE, &HVOBTRN,(CVOBTRN_generator).nonlocals));
IVOBTRN_newtypevec = HVOBTRN;
 /* line 124: */
JVOBTRN = 1 ;
KVOBTRN = (&A_VINDEX(IVOBTRN_newtypevec,JVOBTRN)) ;
(*KVOBTRN) = ZUOBTRN_dec;
 /* line 125: */
 /* line 126: */
MVOBTRN = Ntypes;
for ( LVOBTRN_i = 1;
LVOBTRN_i <= MVOBTRN;
LVOBTRN_i += 1 )
{ 
HUOBTRN_mpno = (*(&A_VINDEX(TSOBTRN_typemap,LVOBTRN_i)));
 /* line 127: */
 /* line 128: */
 /* line 129: */
if ( (HUOBTRN_mpno==0) )
{ 
/*SKIP*/;
} 
else
{ 
 /* line 130: */
NVOBTRN = A_HEAP(A68_169 ) ;
(*NVOBTRN) = (*(*(&A_VINDEX(BTOBTRN_decs,LVOBTRN_i)))) ;
OVOBTRN = (&A_VINDEX(IVOBTRN_newtypevec,HUOBTRN_mpno)) ;
(*OVOBTRN) = NVOBTRN;
} 
 /* line 131: */
 /* line 132: */
JUOBTRN_tl = (*(&(JUOBTRN_tl->Rest)));
}
 /* line 134: */
MLJATRN_discard_tprocs(GUOBTRN_newtprocs);
 /* line 135: */
PVOBTRN.Closureno = IUOBTRN_newclosureno;
PVOBTRN.Sort = TKAATRN_outertype;
 /* line 136: */
QVOBTRN.Attrs = (*(&(Oldenv->Attrs)));
 /* line 137: */
QVOBTRN.Ints = SCAATRN_nullintdecs;
 /* line 138: */
QVOBTRN.Types = IVOBTRN_newtypevec;
 /* line 139: */
QVOBTRN.Consts = EDAATRN_nullconstdecs;
QVOBTRN.Fns = KDAATRN_nullfndecs;
 /* line 140: */
RVOBTRN = A_HEAP(A68_255 ) ;
(*RVOBTRN) = QVOBTRN ;
PVOBTRN.Environ = RVOBTRN;
SVOBTRN = PVOBTRN;
} 
A_PROC_EXIT(make_outer_type);
*ReturnedValue = (SVOBTRN);
return;
} 
#undef NL
 /* line 143: */
 /* line 144: */
 /* line 145: */

A_STATIC A68_BOOL  YVOBTRN_same_alias(A68_154  Type1, A68_154  Type2, A68_479 * Typedecs, A68_258  Types2, void *NonLocals)
#define NL(x) (((ZVOBTRN_same_alias *)NonLocals)->x)
{ 
A68_154  AWOBTRN;  /* united object - for case conformity */
A68_155 * BWOBTRN_tn1;
A68_154  CWOBTRN;  /* united object - for case conformity */
A68_155 * DWOBTRN_tn2;
A68_479 * EWOBTRN_tl;
A68_INT  FWOBTRN;  /* to part of loop */
A68_INT  GWOBTRN;  /* loop control */
A68_136 * HWOBTRN_u1;
A68_INT  IWOBTRN;  /* YIELD */
A68_136 * JWOBTRN_u2;
A68_BOOL  KWOBTRN;  /* optbool result */
A68_BOOL  LWOBTRN;  /* clause result */
A68_156 * MWOBTRN_tr1;
A68_154  NWOBTRN;  /* united object - for case conformity */
A68_156 * OWOBTRN_tr2;
A68_BOOL  PWOBTRN;  /* optbool result */
A68_157 * QWOBTRN_tstr1;
A68_154  RWOBTRN;  /* united object - for case conformity */
A68_157 * SWOBTRN_tstr2;
A68_BOOL  TWOBTRN_same;
A68_157 * UWOBTRN_ptr1;
A68_157 * VWOBTRN_ptr2;
A68_BOOL  WWOBTRN;  /* optbool result */
A68_BOOL  XWOBTRN;  /* optbool result */
A68_160 * YWOBTRN_trg1;
A68_154  ZWOBTRN;  /* united object - for case conformity */
A68_160 * AXOBTRN_trg2;
A68_BOOL  BXOBTRN;  /* optbool result */
A_PROC_ENTRY(same_alias);
 /* line 146: */
 /* line 147: */
{ 
 /* line 148: */
AWOBTRN = Type1 ;
switch ( AWOBTRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
BWOBTRN_tn1 = (AWOBTRN.data.mode1);
 /* line 149: */
 /* line 150: */
CWOBTRN = Type2 ;
switch ( CWOBTRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
DWOBTRN_tn2 = (CWOBTRN.data.mode1);
 /* line 151: */
{ 
EWOBTRN_tl = Typedecs;
 /* line 152: */
FWOBTRN = ((*(&(BWOBTRN_tn1->Typeno)))-1);
for ( GWOBTRN = 1;
GWOBTRN <= FWOBTRN;
GWOBTRN += 1 )
{ 
EWOBTRN_tl = (*(&(EWOBTRN_tl->Rest)));
}
 /* line 153: */
HWOBTRN_u1 = (*(&((*(&(EWOBTRN_tl->Dec)))->Usage)));
 /* line 154: */
IWOBTRN = (*(&(DWOBTRN_tn2->Typeno))) ;
JWOBTRN_u2 = (*(&((*(&A_VINDEX(Types2,IWOBTRN)))->Usage)));
 /* line 156: */
KWOBTRN = (HWOBTRN_u1==CBAATRN_nilusage);
if ( ! KWOBTRN )
{ /* line 157: */
KWOBTRN = (JWOBTRN_u2==CBAATRN_nilusage);
}
if ( KWOBTRN )
{ 
 /* line 158: */
LWOBTRN = A68_FALSE;
} 
else
{ 
 /* line 159: */
 /* line 160: */
 /* line 161: */
LWOBTRN = ((*(&(HWOBTRN_u1->Closureno)))==(*(&(JWOBTRN_u2->Closureno))));
} 
} 
break;
default: 
 /* line 162: */
 /* line 163: */
LWOBTRN = A68_FALSE;
break;
} 
break;
case 2: /* REF STRUCT(MODE138,MODE154)  */
MWOBTRN_tr1 = (AWOBTRN.data.mode2);
 /* line 164: */
 /* line 165: */
NWOBTRN = Type2 ;
switch ( NWOBTRN.mode )
{ 
case 2: /* REF STRUCT(MODE138,MODE154)  */
OWOBTRN_tr2 = (NWOBTRN.data.mode2);
 /* line 166: */
 /* line 167: */
 /* line 168: */
PWOBTRN = (TNMATRN_formula_int((*(&(MWOBTRN_tr1->Size))), NL(Msg))==TNMATRN_formula_int((*(&(OWOBTRN_tr2->Size))), NL(Msg)));
if ( PWOBTRN )
{ /* line 169: */
PWOBTRN = A_CALLPROC(NL(XVOBTRN_same_alias),((*(&(MWOBTRN_tr1->Elem))), (*(&(OWOBTRN_tr2->Elem))), Typedecs, Types2),((*(&(MWOBTRN_tr1->Elem))), (*(&(OWOBTRN_tr2->Elem))), Typedecs, Types2,(NL(XVOBTRN_same_alias)).nonlocals));
}
 /* line 170: */
LWOBTRN = PWOBTRN;
break;
default: 
 /* line 171: */
 /* line 172: */
LWOBTRN = A68_FALSE;
break;
} 
break;
case 3: /* REF STRUCT(MODE154,REF MODE157)  */
QWOBTRN_tstr1 = (AWOBTRN.data.mode3);
 /* line 173: */
 /* line 174: */
RWOBTRN = Type2 ;
switch ( RWOBTRN.mode )
{ 
case 3: /* REF STRUCT(MODE154,REF MODE157)  */
SWOBTRN_tstr2 = (RWOBTRN.data.mode3);
 /* line 175: */
{ 
TWOBTRN_same = A68_TRUE;
 /* line 176: */
UWOBTRN_ptr1 = QWOBTRN_tstr1;
 /* line 177: */
VWOBTRN_ptr2 = SWOBTRN_tstr2;
 /* line 178: */
for ( ;; )
{ 
WWOBTRN = TWOBTRN_same;
if ( WWOBTRN )
{WWOBTRN = (UWOBTRN_ptr1!=GAAATRN_niltstr);
}
if ( WWOBTRN )
{ /* line 179: */
WWOBTRN = (VWOBTRN_ptr2!=GAAATRN_niltstr);
}
if ( !(WWOBTRN) ) break;
TWOBTRN_same = A_CALLPROC(NL(XVOBTRN_same_alias),((*(&(UWOBTRN_ptr1->Elem))), (*(&(VWOBTRN_ptr2->Elem))), Typedecs, Types2),((*(&(UWOBTRN_ptr1->Elem))), (*(&(VWOBTRN_ptr2->Elem))), Typedecs, Types2,(NL(XVOBTRN_same_alias)).nonlocals));
 /* line 180: */
UWOBTRN_ptr1 = (*(&(UWOBTRN_ptr1->Rest)));
 /* line 181: */
 /* line 182: */
VWOBTRN_ptr2 = (*(&(VWOBTRN_ptr2->Rest)));
}
 /* line 183: */
XWOBTRN = TWOBTRN_same;
if ( XWOBTRN )
{XWOBTRN = (UWOBTRN_ptr1==GAAATRN_niltstr);
}
if ( XWOBTRN )
{ /* line 184: */
XWOBTRN = (VWOBTRN_ptr2==GAAATRN_niltstr);
}
 /* line 185: */
LWOBTRN = XWOBTRN;
} 
break;
default: 
 /* line 186: */
 /* line 187: */
LWOBTRN = A68_FALSE;
break;
} 
break;
case 6: /* REF STRUCT(MODE138,MODE154)  */
YWOBTRN_trg1 = (AWOBTRN.data.mode6);
 /* line 188: */
 /* line 189: */
ZWOBTRN = Type2 ;
switch ( ZWOBTRN.mode )
{ 
case 6: /* REF STRUCT(MODE138,MODE154)  */
AXOBTRN_trg2 = (ZWOBTRN.data.mode6);
 /* line 190: */
 /* line 191: */
 /* line 192: */
BXOBTRN = (TNMATRN_formula_int((*(&(YWOBTRN_trg1->Size))), NL(Msg))==TNMATRN_formula_int((*(&(AXOBTRN_trg2->Size))), NL(Msg)));
if ( BXOBTRN )
{ /* line 193: */
BXOBTRN = A_CALLPROC(NL(XVOBTRN_same_alias),((*(&(YWOBTRN_trg1->Char))), (*(&(AXOBTRN_trg2->Char))), Typedecs, Types2),((*(&(YWOBTRN_trg1->Char))), (*(&(AXOBTRN_trg2->Char))), Typedecs, Types2,(NL(XVOBTRN_same_alias)).nonlocals));
}
 /* line 194: */
LWOBTRN = BXOBTRN;
break;
default: 
 /* line 195: */
 /* line 196: */
LWOBTRN = A68_FALSE;
break;
} 
break;
default: 
 /* line 197: */
 /* line 198: */
LWOBTRN = A68_FALSE;
break;
} 
} 
A_PROC_EXIT(same_alias);
return( LWOBTRN );
} 
#undef NL
 /* line 201: */
 /* line 202: */

A_STATIC A68_262 * GXOBTRN_find_outer_type(A68_154  Newtype, A68_479 * Typedecs, A68_INT  Closureno, void *NonLocals)
#define NL(x) (((HXOBTRN_find_outer_type *)NonLocals)->x)
{ 
A68_262 * IXOBTRN_ptr;
A68_262 * JXOBTRN_result;
A68_258  KXOBTRN_tmptypes;
A68_BOOL  LXOBTRN;  /* optbool result */
A68_INT  MXOBTRN;  /* YIELD */
A68_167  NXOBTRN;  /* united object - for case conformity */
A68_163 * OXOBTRN_tg;
A68_262 * PXOBTRN;  /* clause result */
A_PROC_ENTRY(find_outer_type);
 /* line 203: */
 /* line 204: */
{ 
IXOBTRN_ptr = (*(&((*A_CALLPROC(NL(WROBTRN_newclosure),(),((NL(WROBTRN_newclosure)).nonlocals)))->Outers)));
 /* line 205: */
JXOBTRN_result = HBAATRN_nilouters;
 /* line 206: */
 /* line 208: */
for ( ;; )
{ 
LXOBTRN = (JXOBTRN_result==HBAATRN_nilouters);
if ( LXOBTRN )
{LXOBTRN = (IXOBTRN_ptr!=HBAATRN_nilouters);
}
 /* line 209: */
if ( LXOBTRN )
{ /* line 210: */
LXOBTRN = ((*(&((&(IXOBTRN_ptr->Outer))->Closureno)))!=Closureno);
}
if ( !(LXOBTRN) ) break;
 /* line 211: */
if ( ((*(&((&(IXOBTRN_ptr->Outer))->Sort)))==TKAATRN_outertype) )
{ 
KXOBTRN_tmptypes = (*(&((*(&((&(IXOBTRN_ptr->Outer))->Environ)))->Types)));
 /* line 212: */
 /* line 213: */
MXOBTRN = 1 ;
NXOBTRN = (*(&((*(&A_VINDEX(KXOBTRN_tmptypes,MXOBTRN)))->Body))) ;
switch ( NXOBTRN.mode )
{ 
case 3: /* REF STRUCT(MODE154)  */
OXOBTRN_tg = (NXOBTRN.data.mode3);
 /* line 214: */
 /* line 215: */
if ( A_CALLPROC(NL(XVOBTRN_same_alias),(Newtype, (*(&(OXOBTRN_tg->Tag))), Typedecs, KXOBTRN_tmptypes),(Newtype, (*(&(OXOBTRN_tg->Tag))), Typedecs, KXOBTRN_tmptypes,(NL(XVOBTRN_same_alias)).nonlocals)) )
{ 
 /* line 216: */
 /* line 217: */
 /* line 218: */
JXOBTRN_result = IXOBTRN_ptr;
} 
break;
default: 
 /* line 219: */
/*SKIP*/;
break;
} 
} 
 /* line 220: */
 /* line 221: */
IXOBTRN_ptr = (*(&(IXOBTRN_ptr->Rest)));
}
 /* line 222: */
 /* line 223: */
PXOBTRN = JXOBTRN_result;
} 
A_PROC_EXIT(find_outer_type);
return( PXOBTRN );
} 
#undef NL

A_STATIC A68_VOID  TXOBTRN_outer_alias(A68_261  Outer, A68_360 * Outertprocs, A68_358  *ReturnedValue, void *NonLocals)
#define NL(x) (((UXOBTRN_outer_alias *)NonLocals)->x)
{ 
A68_461  WXOBTRN;  /* avoid structure result */
A68_461  VXOBTRN_ec;
A68_INT  XXOBTRN_ntypes;
A68_BOOL  YXOBTRN_dec_changed;
A68_479 * ZXOBTRN_typedecs;
A68_479 ** AYOBTRN_dtail;
A68_INT  BYOBTRN_newtypeno;
A68_491  EYOBTRN_make_new_outer;   /* proc value of non-global proc */
A68_492  LYOBTRN_addtypedec;   /* proc value of non-global proc */
A68_493  RYOBTRN_make_alias;   /* proc value of non-global proc */
A68_494  VZOBTRN_simple_type;   /* proc value of non-global proc */
A68_370  MAPBTRN_test_for_alias;   /* proc value of non-global proc */
A68_370  TCPBTRN_type_alias;   /* proc value of non-global proc */
A68_405  BDPBTRN;  /* OPERATORS - mode -> union mode */
A68_370  CDPBTRN;  /* YIELD */
A68_404  DDPBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_360 * EDPBTRN_newtprocs;
A68_169 ** FDPBTRN_t;
A68_258  GDPBTRN;  /* forall yield */
A68_INT  HDPBTRN;  /* forall loop counter */
A68_46  KDPBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_479 * LDPBTRN_tl;
A68_INT  MDPBTRN_tno;
A68_INT  NDPBTRN;  /* to part of loop */
A68_INT  ODPBTRN;  /* loop control */
A68_167  PDPBTRN;  /* united object - for case conformity */
A68_163 * QDPBTRN_tt;
A68_327  RDPBTRN;  /* avoid structure result */
A68_327  SDPBTRN_tc;
A68_INT  TDPBTRN;  /* YIELD */
A68_BOOL * UDPBTRN;  /* YIELD */
A68_169 * VDPBTRN;  /* YIELD */
A68_169 ** WDPBTRN;  /* YIELD */
A68_167  XDPBTRN;  /* OPERATORS - mode -> union mode */
A68_163 * YDPBTRN;  /* YIELD */
A68_167 * ZDPBTRN;  /* YIELD */
A68_400  AEPBTRN;  /* CALL */
A68_260  BEPBTRN;  /* OPERATORS - simple index */
A68_INT  CEPBTRN;  /* YIELD */
A68_357  DEPBTRN;  /* avoid structure result */
A68_357  EEPBTRN_fdc;
A68_260  FEPBTRN;  /* avoid structure result */
A68_INT  GEPBTRN;  /* YIELD */
A68_252 ** HEPBTRN;  /* YIELD */
A68_BOOL  IEPBTRN;  /* optbool result */
A68_258  JEPBTRN;  /* avoid structure result */
A68_258  KEPBTRN_newtypevec;
A68_155  LEPBTRN_tmptname;
A68_INT  MEPBTRN_i;
A68_169 ** NEPBTRN;  /* YIELD */
A68_INT  OEPBTRN_typeno;
A68_INT  PEPBTRN;  /* to part of loop */
A68_258  QEPBTRN;  /* OPERATORS - simple index */
A68_169 ** REPBTRN_tmpdec;
A68_INT * SEPBTRN;  /* YIELD */
A68_INT * TEPBTRN;  /* YIELD */
A68_261  UEPBTRN_newouter;
A68_255 ** VEPBTRN;  /* YIELD */
A68_358  WEPBTRN;  /* collateral clause result */
A68_358  XEPBTRN;  /* clause result */
A68_261  YEPBTRN_newouter;
A68_255 ** ZEPBTRN;  /* YIELD */
A68_358  AFPBTRN;  /* collateral clause result */
A68_358  BFPBTRN;  /* collateral clause result */
A_PROC_ENTRY(outer_alias);
 /* line 226: */
 /* line 230: */
{ 
 /* line 231: */
FLMBTRN_update_bodies( Outer.Environ, (*NL(CROBTRN_thisclosure)), NL(RROBTRN_is_modified), NL(Msg), &WXOBTRN );
VXOBTRN_ec = WXOBTRN;
 /* line 233: */
XXOBTRN_ntypes = (*(&((*(&((&VXOBTRN_ec)->E)))->Types))).upb;
 /* line 234: */
YXOBTRN_dec_changed = A68_FALSE;
 /* line 235: */
ZXOBTRN_typedecs = IQOBTRN_niltypelist;
 /* line 236: */
AYOBTRN_dtail = (&ZXOBTRN_typedecs);
 /* line 237: */
BYOBTRN_newtypeno = XXOBTRN_ntypes;
 /* line 239: */
A_CLOSURE( EYOBTRN_make_new_outer, FYOBTRN_make_new_outer, GYOBTRN_make_new_outer );
(( GYOBTRN_make_new_outer * ) ( EYOBTRN_make_new_outer.nonlocals )) -> KSOBTRN_make_outer_type = NL(KSOBTRN_make_outer_type);
(( GYOBTRN_make_new_outer * ) ( EYOBTRN_make_new_outer.nonlocals )) -> BYOBTRN_newtypeno = (&BYOBTRN_newtypeno);
(( GYOBTRN_make_new_outer * ) ( EYOBTRN_make_new_outer.nonlocals )) -> ZXOBTRN_typedecs = (&ZXOBTRN_typedecs);
(( GYOBTRN_make_new_outer * ) ( EYOBTRN_make_new_outer.nonlocals )) -> VXOBTRN_ec = (&VXOBTRN_ec);
(( GYOBTRN_make_new_outer * ) ( EYOBTRN_make_new_outer.nonlocals )) -> CSOBTRN_insert_newouter = NL(CSOBTRN_insert_newouter);
 /* line 246: */
A_CLOSURE( LYOBTRN_addtypedec, MYOBTRN_addtypedec, NYOBTRN_addtypedec );
(( NYOBTRN_addtypedec * ) ( LYOBTRN_addtypedec.nonlocals )) -> AYOBTRN_dtail = (&AYOBTRN_dtail);
 /* line 255: */
A_CLOSURE( RYOBTRN_make_alias, SYOBTRN_make_alias, TYOBTRN_make_alias );
(( TYOBTRN_make_alias * ) ( RYOBTRN_make_alias.nonlocals )) -> FXOBTRN_find_outer_type = NL(FXOBTRN_find_outer_type);
(( TYOBTRN_make_alias * ) ( RYOBTRN_make_alias.nonlocals )) -> ZXOBTRN_typedecs = (&ZXOBTRN_typedecs);
(( TYOBTRN_make_alias * ) ( RYOBTRN_make_alias.nonlocals )) -> Outer = Outer;
(( TYOBTRN_make_alias * ) ( RYOBTRN_make_alias.nonlocals )) -> LYOBTRN_addtypedec = LYOBTRN_addtypedec;
(( TYOBTRN_make_alias * ) ( RYOBTRN_make_alias.nonlocals )) -> BYOBTRN_newtypeno = (&BYOBTRN_newtypeno);
(( TYOBTRN_make_alias * ) ( RYOBTRN_make_alias.nonlocals )) -> EYOBTRN_make_new_outer = EYOBTRN_make_new_outer;
 /* line 295: */
A_CLOSURE( VZOBTRN_simple_type, WZOBTRN_simple_type, XZOBTRN_simple_type );
(( XZOBTRN_simple_type * ) ( VZOBTRN_simple_type.nonlocals )) -> VZOBTRN_simple_type = VZOBTRN_simple_type;
(( XZOBTRN_simple_type * ) ( VZOBTRN_simple_type.nonlocals )) -> Msg = NL(Msg);
 /* line 305: */
A_CLOSURE( MAPBTRN_test_for_alias, NAPBTRN_test_for_alias, OAPBTRN_test_for_alias );
(( OAPBTRN_test_for_alias * ) ( MAPBTRN_test_for_alias.nonlocals )) -> Msg = NL(Msg);
 /* line 350: */
A_CLOSURE( TCPBTRN_type_alias, UCPBTRN_type_alias, VCPBTRN_type_alias );
(( VCPBTRN_type_alias * ) ( TCPBTRN_type_alias.nonlocals )) -> MAPBTRN_test_for_alias = MAPBTRN_test_for_alias;
(( VCPBTRN_type_alias * ) ( TCPBTRN_type_alias.nonlocals )) -> VZOBTRN_simple_type = VZOBTRN_simple_type;
(( VCPBTRN_type_alias * ) ( TCPBTRN_type_alias.nonlocals )) -> RYOBTRN_make_alias = RYOBTRN_make_alias;
 /* line 359: */
CDPBTRN = TCPBTRN_type_alias ;
EDPBTRN_newtprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HVEC(DDPBTRN,A_UNITE(BDPBTRN,mode10,10,CDPBTRN),A68_405 ));
 /* line 362: */
 /* line 363: */
GDPBTRN = (*(&((*(&((&VXOBTRN_ec)->E)))->Types))) ;
HDPBTRN = GDPBTRN.upb -1;
FDPBTRN_t = GDPBTRN.data;
for (;HDPBTRN-- >= 0;
(FDPBTRN_t++
) )
{
 /* line 364: */
if ( ((*(&((*FDPBTRN_t)->Sort)))==PKAATRN_localdec) )
{ 
 /* line 365: */
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(KDPBTRN,JDPBTRN,A68_VC )),(WHAAOSI_user, A_HVEC(KDPBTRN,JDPBTRN,A68_VC ),(NL(Msg)).nonlocals));
} 
 /* line 366: */
 /* line 367: */
A_CALLPROC(LYOBTRN_addtypedec,((*FDPBTRN_t)),((*FDPBTRN_t),(LYOBTRN_addtypedec).nonlocals));
}
 /* line 371: */
LDPBTRN_tl = ZXOBTRN_typedecs;
 /* line 373: */
MDPBTRN_tno = 0;
 /* line 374: */
 /* line 375: */
NDPBTRN = XXOBTRN_ntypes;
for ( ODPBTRN = 1;
ODPBTRN <= NDPBTRN;
ODPBTRN += 1 )
{ 
 /* line 376: */
PDPBTRN = (*(&((*(&(LDPBTRN_tl->Dec)))->Body))) ;
switch ( PDPBTRN.mode )
{ 
case 3: /* REF STRUCT(MODE154)  */
QDPBTRN_tt = (PDPBTRN.data.mode3);
 /* line 377: */
{ 
A_CALLPROC(MAPBTRN_test_for_alias,((*(&(QDPBTRN_tt->Tag))), EDPBTRN_newtprocs, &RDPBTRN),((*(&(QDPBTRN_tt->Tag))), EDPBTRN_newtprocs, &RDPBTRN,(MAPBTRN_test_for_alias).nonlocals));
SDPBTRN_tc = RDPBTRN;
 /* line 378: */
 /* line 379: */
if ( SDPBTRN_tc.C )
{ 
YXOBTRN_dec_changed = A68_TRUE;
 /* line 380: */
 /* line 381: */
TDPBTRN = Outer.Closureno ;
UDPBTRN = (&A_VINDEX(NL(NROBTRN_closuretags),TDPBTRN)) ;
(*UDPBTRN) = (Outer.Sort==TKAATRN_outertype);
 /* line 382: */
VDPBTRN = A_HEAP(A68_169 ) ;
(*VDPBTRN) = (*(*(&(LDPBTRN_tl->Dec)))) ;
WDPBTRN = (&(LDPBTRN_tl->Dec)) ;
(*WDPBTRN) = VDPBTRN;
 /* line 383: */
 /* line 384: */
 /* line 385: */
 /* line 386: */
 /* line 387: */
YDPBTRN = XFAATRN_maketypetag(SDPBTRN_tc.T) ;
ZDPBTRN = (&((*(&(LDPBTRN_tl->Dec)))->Body)) ;
(*ZDPBTRN) = A_UNITE(XDPBTRN,mode3,3,YDPBTRN);
} 
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 388: */
 /* line 389: */
LDPBTRN_tl = (*(&(LDPBTRN_tl->Rest)));
}
 /* line 392: */
 /* line 393: */
if ( (Outer.Sort==VKAATRN_outerfn) )
{ 
AEPBTRN = (*(&(EDPBTRN_newtprocs->Fndec))) ;
BEPBTRN = (*(&((*(&((&VXOBTRN_ec)->E)))->Fns))) ;
CEPBTRN = 1 ;
A_CALLPROC(AEPBTRN,((*(&A_VINDEX(BEPBTRN,CEPBTRN))), EDPBTRN_newtprocs, &DEPBTRN),((*(&A_VINDEX(BEPBTRN,CEPBTRN))), EDPBTRN_newtprocs, &DEPBTRN,(AEPBTRN).nonlocals));
EEPBTRN_fdc = DEPBTRN;
 /* line 394: */
 /* line 395: */
if ( EEPBTRN_fdc.C )
{ 
AJMBTRN_newfns( (&VXOBTRN_ec), &FEPBTRN );
GEPBTRN = 1 ;
HEPBTRN = (&A_VINDEX(FEPBTRN,GEPBTRN)) ;
(*HEPBTRN) = EEPBTRN_fdc.F;
 /* line 396: */
 /* line 397: */
 /* line 398: */
YXOBTRN_dec_changed = A68_TRUE;
} 
} 
 /* line 399: */
MLJATRN_discard_tprocs(EDPBTRN_newtprocs);
 /* line 401: */
IEPBTRN = YXOBTRN_dec_changed;
if ( ! IEPBTRN )
{ /* line 402: */
IEPBTRN = (BYOBTRN_newtypeno!=XXOBTRN_ntypes);
}
if ( IEPBTRN )
{ 
AKMBTRN_makenewtypes( (&VXOBTRN_ec), BYOBTRN_newtypeno, &JEPBTRN );
KEPBTRN_newtypevec = JEPBTRN;
 /* line 403: */
 /* line 405: */
for ( MEPBTRN_i = 1;;
MEPBTRN_i += 1 ) 
{ 
 /* line 406: */
if ( !((ZXOBTRN_typedecs!=IQOBTRN_niltypelist)) ) break;
NEPBTRN = (&A_VINDEX(KEPBTRN_newtypevec,MEPBTRN_i)) ;
(*NEPBTRN) = (*(&(ZXOBTRN_typedecs->Dec)));
 /* line 407: */
 /* line 408: */
ZXOBTRN_typedecs = (*(&(ZXOBTRN_typedecs->Rest)));
}
 /* line 410: */
 /* line 411: */
PEPBTRN = BYOBTRN_newtypeno;
for ( OEPBTRN_typeno = 1;
OEPBTRN_typeno <= PEPBTRN;
OEPBTRN_typeno += 1 )
{ 
QEPBTRN = (*(&((*(&((&VXOBTRN_ec)->E)))->Types))) ;
REPBTRN_tmpdec = (&A_VINDEX(QEPBTRN,OEPBTRN_typeno));
 /* line 412: */
SEPBTRN = (&((&LEPBTRN_tmptname)->Typeno)) ;
(*SEPBTRN) = OEPBTRN_typeno;
 /* line 413: */
 /* line 414: */
if ( ((*(&((*REPBTRN_tmpdec)->Sort)))==PKAATRN_localdec) )
{ 
TEPBTRN = (&((*REPBTRN_tmpdec)->Sort)) ;
(*TEPBTRN) = OKAATRN_outerdec;
 /* line 415: */
 /* line 416: */
 /* line 417: */
(*REPBTRN_tmpdec) = DBNATRN_find_typedec(LEPBTRN_tmptname, (*A_CALLPROC(NL(WROBTRN_newclosure),(),((NL(WROBTRN_newclosure)).nonlocals))), (*(&((&VXOBTRN_ec)->E))));
} 
}
 /* line 418: */
UEPBTRN_newouter = Outer;
 /* line 419: */
VEPBTRN = (&((&UEPBTRN_newouter)->Environ)) ;
(*VEPBTRN) = (*(&((&VXOBTRN_ec)->E)));
 /* line 420: */
WEPBTRN.O = UEPBTRN_newouter;
 /* line 421: */
 /* line 422: */
WEPBTRN.C = A68_TRUE;
XEPBTRN = WEPBTRN;
} 
else
{ 
if ( (*(&((&VXOBTRN_ec)->C))) )
{ 
YEPBTRN_newouter = Outer;
 /* line 423: */
ZEPBTRN = (&((&YEPBTRN_newouter)->Environ)) ;
(*ZEPBTRN) = (*(&((&VXOBTRN_ec)->E)));
 /* line 424: */
AFPBTRN.O = YEPBTRN_newouter;
 /* line 425: */
AFPBTRN.C = A68_TRUE;
XEPBTRN = AFPBTRN;
} 
else
{ 
BFPBTRN.O = Outer;
 /* line 426: */
 /* line 427: */
BFPBTRN.C = A68_FALSE;
XEPBTRN = BFPBTRN;
} 
} 
} 
A_PROC_EXIT(outer_alias);
*ReturnedValue = (XEPBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  KQOBTRN_generator(A68_BOOL  JQOBTRN_anonymous, A68_46  *ReturnedValue)
{ 
A68_46  MQOBTRN;  /* OPERATORS - dynamic generator */
A68_481  LQOBTRN_anonymous;
A68_480 * RQOBTRN_anonymous;
A68_INT  SQOBTRN;  /* forall loop counter */
A68_VC  TQOBTRN;  /* avoid structure result */
A68_46  UQOBTRN;  /* clause result */
{ 
MQOBTRN.upb = 0 ;
( JQOBTRN_anonymous? A_VLOC(A68_VC ,MQOBTRN): A_VHEAP(A68_VC ,MQOBTRN) );
LQOBTRN_anonymous = MQOBTRN;
SQOBTRN = (*(&LQOBTRN_anonymous)).upb -1;
RQOBTRN_anonymous = (*(&LQOBTRN_anonymous)).data;
for (;SQOBTRN-- >= 0;
(RQOBTRN_anonymous++
) )
{
OQOBTRN_generator( JQOBTRN_anonymous, &TQOBTRN );
(*RQOBTRN_anonymous) = TQOBTRN;
}
UQOBTRN = LQOBTRN_anonymous;
} 
*ReturnedValue = (UQOBTRN);
return;
} 
#undef NL

A68_VOID  ZQOBTRN_transform_alias(A68_265 * Closure, A68_108  Msg, A68_359  *ReturnedValue)
{ 
A68_359  AROBTRN;  /* collateral clause result */
A68_359  BROBTRN_result;
A68_265 ** CROBTRN_thisclosure;
A68_BOOL * DROBTRN_closure_changed;
A68_262 * EROBTRN_closureptr;
A68_INT  FROBTRN_aliascnt;
A68_INT  GROBTRN_closuretop;
A68_483  IROBTRN_generator;   /* proc value of non-global proc */
A68_54  OROBTRN;  /* avoid structure result */
A68_54  NROBTRN_closuretags;
A68_94  PROBTRN;  /* OPERATORS - mode -> union mode */
A68_475  RROBTRN_is_modified;   /* proc value of non-global proc */
A68_484  WROBTRN_newclosure;   /* proc value of non-global proc */
A68_485  CSOBTRN_insert_newouter;   /* proc value of non-global proc */
A68_486  KSOBTRN_make_outer_type;   /* proc value of non-global proc */
A68_489  XVOBTRN_same_alias;   /* proc value of non-global proc */
A68_490  FXOBTRN_find_outer_type;   /* proc value of non-global proc */
A68_401  SXOBTRN_outer_alias;   /* proc value of non-global proc */
A68_405  CFPBTRN;  /* OPERATORS - mode -> union mode */
A68_401  DFPBTRN;  /* YIELD */
A68_404  EFPBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_360 * FFPBTRN_newtprocs;
A68_401  GFPBTRN;  /* CALL */
A68_358  HFPBTRN;  /* avoid structure result */
A68_358  IFPBTRN_oc;
A68_261 * JFPBTRN;  /* YIELD */
A68_359  KFPBTRN;  /* clause result */
A_PROC_ENTRY(transform_alias);
 /* line 53: */
 /* line 54: */
{ 
AROBTRN.Cl = Closure;
AROBTRN.C = A68_FALSE;
BROBTRN_result = AROBTRN;
 /* line 55: */
CROBTRN_thisclosure = (&((&BROBTRN_result)->Cl));
 /* line 56: */
DROBTRN_closure_changed = (&((&BROBTRN_result)->C));
 /* line 57: */
EROBTRN_closureptr = (*(&((*CROBTRN_thisclosure)->Outers)));
 /* line 58: */
FROBTRN_aliascnt = 0;
 /* line 59: */
GROBTRN_closuretop = ZKCATRN_maxclosureno(Closure);
 /* line 60: */
A_CLOSURE( IROBTRN_generator, JROBTRN_generator, KROBTRN_generator );
(( KROBTRN_generator * ) ( IROBTRN_generator.nonlocals )) -> GROBTRN_closuretop = GROBTRN_closuretop;
A_CALLPROC(IROBTRN_generator,(A68_TRUE, &OROBTRN),(A68_TRUE, &OROBTRN,(IROBTRN_generator).nonlocals));
NROBTRN_closuretags = OROBTRN;
VTCAOST_clear(A_UNITE(PROBTRN,mode3,3,NROBTRN_closuretags));
 /* line 62: */
A_CLOSURE( RROBTRN_is_modified, SROBTRN_is_modified, TROBTRN_is_modified );
(( TROBTRN_is_modified * ) ( RROBTRN_is_modified.nonlocals )) -> GROBTRN_closuretop = GROBTRN_closuretop;
(( TROBTRN_is_modified * ) ( RROBTRN_is_modified.nonlocals )) -> NROBTRN_closuretags = NROBTRN_closuretags;
 /* line 68: */
 /* line 69: */
A_CLOSURE( WROBTRN_newclosure, XROBTRN_newclosure, YROBTRN_newclosure );
(( YROBTRN_newclosure * ) ( WROBTRN_newclosure.nonlocals )) -> DROBTRN_closure_changed = DROBTRN_closure_changed;
(( YROBTRN_newclosure * ) ( WROBTRN_newclosure.nonlocals )) -> CROBTRN_thisclosure = CROBTRN_thisclosure;
(( YROBTRN_newclosure * ) ( WROBTRN_newclosure.nonlocals )) -> Msg = Msg;
(( YROBTRN_newclosure * ) ( WROBTRN_newclosure.nonlocals )) -> EROBTRN_closureptr = (&EROBTRN_closureptr);
 /* line 78: */
A_CLOSURE( CSOBTRN_insert_newouter, DSOBTRN_insert_newouter, ESOBTRN_insert_newouter );
(( ESOBTRN_insert_newouter * ) ( CSOBTRN_insert_newouter.nonlocals )) -> WROBTRN_newclosure = WROBTRN_newclosure;
(( ESOBTRN_insert_newouter * ) ( CSOBTRN_insert_newouter.nonlocals )) -> CROBTRN_thisclosure = CROBTRN_thisclosure;
(( ESOBTRN_insert_newouter * ) ( CSOBTRN_insert_newouter.nonlocals )) -> Msg = Msg;
 /* line 84: */
A_CLOSURE( KSOBTRN_make_outer_type, LSOBTRN_make_outer_type, MSOBTRN_make_outer_type );
(( MSOBTRN_make_outer_type * ) ( KSOBTRN_make_outer_type.nonlocals )) -> WROBTRN_newclosure = WROBTRN_newclosure;
 /* line 142: */
A_CLOSURE( XVOBTRN_same_alias, YVOBTRN_same_alias, ZVOBTRN_same_alias );
(( ZVOBTRN_same_alias * ) ( XVOBTRN_same_alias.nonlocals )) -> Msg = Msg;
(( ZVOBTRN_same_alias * ) ( XVOBTRN_same_alias.nonlocals )) -> XVOBTRN_same_alias = XVOBTRN_same_alias;
 /* line 200: */
A_CLOSURE( FXOBTRN_find_outer_type, GXOBTRN_find_outer_type, HXOBTRN_find_outer_type );
(( HXOBTRN_find_outer_type * ) ( FXOBTRN_find_outer_type.nonlocals )) -> WROBTRN_newclosure = WROBTRN_newclosure;
(( HXOBTRN_find_outer_type * ) ( FXOBTRN_find_outer_type.nonlocals )) -> XVOBTRN_same_alias = XVOBTRN_same_alias;
 /* line 225: */
A_CLOSURE( SXOBTRN_outer_alias, TXOBTRN_outer_alias, UXOBTRN_outer_alias );
(( UXOBTRN_outer_alias * ) ( SXOBTRN_outer_alias.nonlocals )) -> CROBTRN_thisclosure = CROBTRN_thisclosure;
(( UXOBTRN_outer_alias * ) ( SXOBTRN_outer_alias.nonlocals )) -> RROBTRN_is_modified = RROBTRN_is_modified;
(( UXOBTRN_outer_alias * ) ( SXOBTRN_outer_alias.nonlocals )) -> Msg = Msg;
(( UXOBTRN_outer_alias * ) ( SXOBTRN_outer_alias.nonlocals )) -> KSOBTRN_make_outer_type = KSOBTRN_make_outer_type;
(( UXOBTRN_outer_alias * ) ( SXOBTRN_outer_alias.nonlocals )) -> CSOBTRN_insert_newouter = CSOBTRN_insert_newouter;
(( UXOBTRN_outer_alias * ) ( SXOBTRN_outer_alias.nonlocals )) -> FXOBTRN_find_outer_type = FXOBTRN_find_outer_type;
(( UXOBTRN_outer_alias * ) ( SXOBTRN_outer_alias.nonlocals )) -> NROBTRN_closuretags = NROBTRN_closuretags;
(( UXOBTRN_outer_alias * ) ( SXOBTRN_outer_alias.nonlocals )) -> WROBTRN_newclosure = WROBTRN_newclosure;
 /* line 430: */
 /* line 431: */
 /* line 432: */
if ( ((*(&(Closure->Outers)))!=HBAATRN_nilouters) )
{ 
DFPBTRN = SXOBTRN_outer_alias ;
FFPBTRN_newtprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HVEC(EFPBTRN,A_UNITE(CFPBTRN,mode41,41,DFPBTRN),A68_405 ));
 /* line 434: */
for ( ;; )
{ 
 /* line 435: */
if ( !((EROBTRN_closureptr!=HBAATRN_nilouters)) ) break;
SOAAOST_flt_if_interrupted(Msg);
 /* line 436: */
GFPBTRN = (*(&(FFPBTRN_newtprocs->Outer))) ;
A_CALLPROC(GFPBTRN,((*(&(EROBTRN_closureptr->Outer))), FFPBTRN_newtprocs, &HFPBTRN),((*(&(EROBTRN_closureptr->Outer))), FFPBTRN_newtprocs, &HFPBTRN,(GFPBTRN).nonlocals));
IFPBTRN_oc = HFPBTRN;
 /* line 437: */
if ( IFPBTRN_oc.C )
{ 
(*A_CALLPROC(WROBTRN_newclosure,(),((WROBTRN_newclosure).nonlocals)));
JFPBTRN = (&(EROBTRN_closureptr->Outer)) ;
(*JFPBTRN) = IFPBTRN_oc.O;
} 
 /* line 438: */
 /* line 439: */
EROBTRN_closureptr = (*(&(EROBTRN_closureptr->Rest)));
}
 /* line 440: */
 /* line 441: */
MLJATRN_discard_tprocs(FFPBTRN_newtprocs);
} 
 /* line 442: */
 /* line 443: */
KFPBTRN = BROBTRN_result;
} 
A_PROC_EXIT(transform_alias);
*ReturnedValue = (KFPBTRN);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 4: */
void DQOBTRN(void)   /* initialise DECS alias */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/alias.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/environprocs.m","./mfiles/closureprocs.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","./mfiles/transformprocs.m","./mfiles/modeprocs.m","./mfiles/assmodes.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_46  WQOBTRN;  /* avoid structure result */
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
A_config.source_file = "/import/hazel/home/export/model/ella/transform/assoc/./a68files/alias.a68";
A_config.translation_time = "Tue Apr  4 10:10:08 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "CQOBTRN (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:10:08 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS alias);
UEAALIB_a68config(LGAALIB_configinfo, HQOBTRN);
 /* line 42: */
 /* line 44: */
 /* line 46: */
 /* line 48: */
KQOBTRN_generator( A68_TRUE, &WQOBTRN );
VQOBTRN_alias_options = WQOBTRN;
 /* line 52: */
 /* line 445: */
 /* line 446: */
 /* line 447: */
/*SKIP*/;
A_PROC_EXIT(DECS alias);
} 
#undef NL
/* end of translation of ./a68files/alias.a68 */
