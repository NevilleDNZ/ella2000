
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
/* UNAME:XMABSIM */
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
struct A68t113{
A68_BITS  Options;
A_PAD_BITS(PAD_22)
};
typedef struct A68t113  A68_113 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t114,(struct A68t113 ,struct A68t113 ,struct A68t113 *),(struct A68t113 ,struct A68t113 ,struct A68t113 *,void *));
typedef struct A68t114  A68_114 ;    /* PROC(MODE113,MODE113) MODE113 */

A_PROCEDURE(struct A68t113 *,A68t115,(struct A68t113 *,struct A68t113 ),(struct A68t113 *,struct A68t113 ,void *));
typedef struct A68t115  A68_115 ;    /* PROC(REF MODE113,MODE113) REF MODE113 */

A_PROCEDURE(A68_BOOL ,A68t116,(struct A68t113 ,struct A68t113 ),(struct A68t113 ,struct A68t113 ,void *));
typedef struct A68t116  A68_116 ;    /* PROC(MODE113,MODE113) BOOL */

A_PROCEDURE(A68_BOOL ,A68t117,(struct A68t113 ,A68_INT ),(struct A68t113 ,A68_INT ,void *));
typedef struct A68t117  A68_117 ;    /* PROC(MODE113,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t118,(A68_INT ,struct A68t113 *),(A68_INT ,struct A68t113 *,void *));
typedef struct A68t118  A68_118 ;    /* PROC(INT) MODE113 */

A_PROCEDURE(A68_VOID ,A68t119,(void),(void *));
typedef struct A68t119  A68_119 ;    /* PROC VOID */
struct A68t121 ;
struct A68t122 ;

A_PROCEDURE(A68_INT ,A68t120,(struct A68t121 ,struct A68t122 ),(struct A68t121 ,struct A68t122 ,void *));
typedef struct A68t120  A68_120 ;    /* PROC(MODE121,MODE122) INT */
struct A68t130{
A68_INT  Svoid;
A_PAD_INT(PAD_23)
};
typedef struct A68t130  A68_130 ;    /* STRUCT(INT)  */
struct A68t131{
A68_INT  Snull;
A_PAD_INT(PAD_24)
};
typedef struct A68t131  A68_131 ;    /* STRUCT(INT)  */
struct A68t121 { A68_INT mode; union {
struct A68t123 * mode1;
struct A68t124 * mode2;
struct A68t125 * mode3;
struct A68t126 * mode4;
struct A68t127 * mode5;
struct A68t128 * mode6;
struct A68t129 * mode7;
struct A68t130  mode8;
struct A68t131  mode9;
} data; };
typedef struct A68t121  A68_121 ;    /* UNION(REF MODE123,REF MODE124,REF MODE125,REF MODE126,REF MODE127,REF MODE128,REF MODE129,MODE130,MODE131)  */

A_PROCEDURE(A68_INT ,A68t122,(struct A68t121 ),(struct A68t121 ,void *));
typedef struct A68t122  A68_122 ;    /* PROC(MODE121) INT */
struct A68t123{
A68_VC  Id;
struct A68t121  T;
struct A68t123 * Rest;
};
typedef struct A68t123  A68_123 ;    /* STRUCT(REF MODE26,MODE121,REF MODE123)  */
struct A68t124{
A68_VC  Id;
A68_INT  Lwb;
A_PAD_INT(PAD_25)
A68_INT  Upb;
A_PAD_INT(PAD_26)
};
typedef struct A68t124  A68_124 ;    /* STRUCT(REF MODE26,INT,INT)  */
struct A68t125{
A68_VC  Id;
A68_VC  Char;
};
typedef struct A68t125  A68_125 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t126{
A68_INT  No;
A_PAD_INT(PAD_27)
struct A68t121  Type;
};
typedef struct A68t126  A68_126 ;    /* STRUCT(INT,MODE121)  */
struct A68t127{
A68_INT  No;
A_PAD_INT(PAD_28)
struct A68t125  T;
};
typedef struct A68t127  A68_127 ;    /* STRUCT(INT,MODE125)  */
struct A68t128{
struct A68t121  From;
struct A68t121  To;
};
typedef struct A68t128  A68_128 ;    /* STRUCT(MODE121,MODE121)  */
struct A68t129{
struct A68t121  T;
struct A68t129 * Rest;
};
typedef struct A68t129  A68_129 ;    /* STRUCT(MODE121,REF MODE129)  */

A_PROCEDURE(A68_VOID ,A68t132,(A68_INT ,struct A68t121 *),(A68_INT ,struct A68t121 *,void *));
typedef struct A68t132  A68_132 ;    /* PROC(INT) MODE121 */
struct A68t134 ;
struct A68t135 ;
struct A68t136 ;
struct A68t137 ;

A_PROCEDURE(A68_INT ,A68t133,(A68_VC ,A68_INT ,A68_INT ,A68_INT ,struct A68t134 ,struct A68t134 ,struct A68t135 *,struct A68t136 ,struct A68t137 ),(A68_VC ,A68_INT ,A68_INT ,A68_INT ,struct A68t134 ,struct A68t134 ,struct A68t135 *,struct A68t136 ,struct A68t137 ,void *));
typedef struct A68t133  A68_133 ;    /* PROC(REF MODE26,INT,INT,INT,MODE134,MODE134,REF MODE135,MODE136,MODE137) INT */
A_VECTOR(struct A68t139 ,A68t138);
typedef struct A68t138  A68_138 ;    /* VECTOR [] MODE139 */
struct A68t139{
A68_INT  Instoffset;
A_PAD_INT(PAD_29)
A68_INT  Offset;
A_PAD_INT(PAD_30)
A68_INT  Size;
A_PAD_INT(PAD_31)
};
typedef struct A68t139  A68_139 ;    /* STRUCT(INT,INT,INT)  */
struct A68t134{
struct A68t121  Type;
struct A68t138  Blocks;
};
typedef struct A68t134  A68_134 ;    /* STRUCT(MODE121,REF MODE138)  */
struct A68t135{
struct A68t134  Firstcell;
A68_INT  Lwb;
A_PAD_INT(PAD_32)
A68_INT  Ramsize;
A_PAD_INT(PAD_33)
A68_INT  Step;
A_PAD_INT(PAD_34)
};
typedef struct A68t135  A68_135 ;    /* STRUCT(MODE134,INT,INT,INT)  */
struct A68t136{
A68_INT  Size;
A_PAD_INT(PAD_35)
A68_INT  Offset;
A_PAD_INT(PAD_36)
A68_BITS  Sort;
A_PAD_BITS(PAD_37)
};
typedef struct A68t136  A68_136 ;    /* STRUCT(INT,INT,BITS)  */
struct A68t137{
A68_INT  Workspace;
A_PAD_INT(PAD_38)
A68_INT  History;
A_PAD_INT(PAD_39)
A68_INT  Declid;
A_PAD_INT(PAD_40)
};
typedef struct A68t137  A68_137 ;    /* STRUCT(INT,INT,INT)  */
struct A68t141 ;

A_PROCEDURE(A68_VOID ,A68t140,(A68_INT ,A68_VC ,A68_VC ,struct A68t141 ),(A68_INT ,A68_VC ,A68_VC ,struct A68t141 ,void *));
typedef struct A68t140  A68_140 ;    /* PROC(INT,REF MODE26,REF MODE26,MODE141) VOID */
struct A68t142{
A68_INT  Fn;
A_PAD_INT(PAD_41)
A68_INT  Instance;
A_PAD_INT(PAD_42)
};
typedef struct A68t142  A68_142 ;    /* STRUCT(INT,INT)  */
struct A68t141 { A68_INT mode; union {
struct A68t142  mode1;
struct A68t134  mode2;
} data; };
typedef struct A68t141  A68_141 ;    /* UNION(MODE142,MODE134)  */

A_PROCEDURE(A68_VOID ,A68t143,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t143  A68_143 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t144,(A68_INT ,struct A68t32 ),(A68_INT ,struct A68t32 ,void *));
typedef struct A68t144  A68_144 ;    /* PROC(INT,REF MODE32) VOID */

A_PROCEDURE(A68_VOID ,A68t145,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t145  A68_145 ;    /* PROC(INT,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t146,(A68_INT ,struct A68t136 ),(A68_INT ,struct A68t136 ,void *));
typedef struct A68t146  A68_146 ;    /* PROC(INT,MODE136) VOID */

A_PROCEDURE(A68_VOID ,A68t147,(A68_INT ,struct A68t138 ,struct A68t138 ),(A68_INT ,struct A68t138 ,struct A68t138 ,void *));
typedef struct A68t147  A68_147 ;    /* PROC(INT,REF MODE138,REF MODE138) VOID */

A_PROCEDURE(A68_VOID ,A68t148,(A68_VC ,A68_INT ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t148  A68_148 ;    /* PROC(REF MODE26,INT,INT) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t149,(A68_VC ,A68_INT ,A68_INT ),(A68_VC ,A68_INT ,A68_INT ,void *));
typedef struct A68t149  A68_149 ;    /* PROC(REF MODE26,INT,INT) INT */
struct A68t151 ;

A_PROCEDURE(A68_VOID ,A68t150,(A68_INT ,struct A68t151 *),(A68_INT ,struct A68t151 *,void *));
typedef struct A68t150  A68_150 ;    /* PROC(INT) MODE151 */
A_VECTOR(struct A68t153 ,A68t152);
typedef struct A68t152  A68_152 ;    /* VECTOR [] MODE153 */
struct A68t153{
A68_VC  Uname;
A68_VC  Lname;
A68_INT  Node;
A_PAD_INT(PAD_43)
};
typedef struct A68t153  A68_153 ;    /* STRUCT(REF MODE26,REF MODE26,INT)  */
struct A68t151{
struct A68t135 * Ram;
struct A68t134  Outputs;
A68_INT  Noinputs;
A_PAD_INT(PAD_44)
struct A68t152  Body;
};
typedef struct A68t151  A68_151 ;    /* STRUCT(REF MODE135,MODE134,INT,REF MODE152)  */

A_PROCEDURE(A68_VOID ,A68t154,(A68_INT ,struct A68t141 *),(A68_INT ,struct A68t141 *,void *));
typedef struct A68t154  A68_154 ;    /* PROC(INT) MODE141 */
struct A68t156 ;

A_PROCEDURE(A68_VOID ,A68t155,(A68_INT ,A68_INT ,struct A68t156 *),(A68_INT ,A68_INT ,struct A68t156 *,void *));
typedef struct A68t155  A68_155 ;    /* PROC(INT,INT) MODE156 */
struct A68t156{
A68_INT  Lwb;
A_PAD_INT(PAD_45)
A68_INT  Upb;
A_PAD_INT(PAD_46)
};
typedef struct A68t156  A68_156 ;    /* STRUCT(INT,INT)  */
struct A68t158 ;

A_PROCEDURE(A68_VOID ,A68t157,(A68_INT ,A68_INT ,struct A68t158 *),(A68_INT ,A68_INT ,struct A68t158 *,void *));
typedef struct A68t157  A68_157 ;    /* PROC(INT,INT) REF MODE158 */
A_VECTOR(struct A68t159 ,A68t158);
typedef struct A68t158  A68_158 ;    /* VECTOR [] MODE159 */
struct A68t159{
A68_INT  Instoffset;
A_PAD_INT(PAD_47)
A68_INT  Ipno;
A_PAD_INT(PAD_48)
};
typedef struct A68t159  A68_159 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t160,(A68_INT ,struct A68t134 *),(A68_INT ,struct A68t134 *,void *));
typedef struct A68t160  A68_160 ;    /* PROC(INT) MODE134 */

A_PROCEDURE(A68_VOID ,A68t161,(A68_INT ,struct A68t136 *),(A68_INT ,struct A68t136 *,void *));
typedef struct A68t161  A68_161 ;    /* PROC(INT) MODE136 */

A_PROCEDURE(A68_VOID ,A68t162,(A68_INT ,struct A68t137 *),(A68_INT ,struct A68t137 *,void *));
typedef struct A68t162  A68_162 ;    /* PROC(INT) MODE137 */

A_PROCEDURE(A68_VOID ,A68t163,(struct A68t151 ,struct A68t134 *),(struct A68t151 ,struct A68t134 *,void *));
typedef struct A68t163  A68_163 ;    /* PROC(MODE151) MODE134 */
struct A68t165 ;

A_PROCEDURE(A68_VOID ,A68t164,(struct A68t165 ),(struct A68t165 ,void *));
typedef struct A68t164  A68_164 ;    /* PROC(MODE165) VOID */

A_PROCEDURE(A68_BOOL ,A68t165,(A68_VC ),(A68_VC ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(REF MODE26) BOOL */
struct A68t167 ;

A_PROCEDURE(A68_VOID ,A68t166,(struct A68t167 ,struct A68t36 ),(struct A68t167 ,struct A68t36 ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(MODE167,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t167,(A68_VC ,struct A68t36 ),(A68_VC ,struct A68t36 ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(REF MODE26,MODE36) VOID */

A_PROCEDURE(struct A68t129 *,A68t168,(struct A68t121 ),(struct A68t121 ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(MODE121) REF MODE129 */

A_PROCEDURE(struct A68t129 *,A68t169,(struct A68t121 ,A68_INT ,A68_INT ),(struct A68t121 ,A68_INT ,A68_INT ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(MODE121,INT,INT) REF MODE129 */

A_PROCEDURE(A68_VOID ,A68t170,(struct A68t134 ,A68_INT ,A68_INT ,struct A68t134 *),(struct A68t134 ,A68_INT ,A68_INT ,struct A68t134 *,void *));
typedef struct A68t170  A68_170 ;    /* PROC(MODE134,INT,INT) MODE134 */

A_PROCEDURE(A68_VOID ,A68t171,(struct A68t135 *,A68_INT ,A68_INT ,struct A68t134 *),(struct A68t135 *,A68_INT ,A68_INT ,struct A68t134 *,void *));
typedef struct A68t171  A68_171 ;    /* PROC(REF MODE135,INT,INT) MODE134 */
struct A68t173 ;

A_PROCEDURE(A68_VC *,A68t172,(struct A68t173 ,struct A68t121 ),(struct A68t173 ,struct A68t121 ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE173,MODE121) REF REF MODE26 */
struct A68t181{
A68_INT  Svvoid;
A_PAD_INT(PAD_49)
};
typedef struct A68t181  A68_181 ;    /* STRUCT(INT)  */
struct A68t182{
A68_INT  Svnull;
A_PAD_INT(PAD_50)
};
typedef struct A68t182  A68_182 ;    /* STRUCT(INT)  */
struct A68t173 { A68_INT mode; union {
struct A68t174 * mode1;
struct A68t175 * mode2;
struct A68t176 * mode3;
struct A68t177 * mode4;
struct A68t178 * mode5;
struct A68t179 * mode6;
struct A68t180 * mode7;
struct A68t181  mode8;
struct A68t182  mode9;
} data; };
typedef struct A68t173  A68_173 ;    /* UNION(REF MODE174,REF MODE175,REF MODE176,REF MODE177,REF MODE178,REF MODE179,REF MODE180,MODE181,MODE182)  */
struct A68t174{
struct A68t121  Type;
};
typedef struct A68t174  A68_174 ;    /* STRUCT(MODE121)  */
struct A68t175{
struct A68t124 * Type;
A68_INT  Value;
A_PAD_INT(PAD_51)
};
typedef struct A68t175  A68_175 ;    /* STRUCT(REF MODE124,INT)  */
struct A68t176{
struct A68t125 * Type;
A68_CHAR  Value;
A_PAD_CHAR(PAD_52)
};
typedef struct A68t176  A68_176 ;    /* STRUCT(REF MODE125,CHAR)  */
struct A68t177{
struct A68t127 * Type;
A68_VC  Value;
};
typedef struct A68t177  A68_177 ;    /* STRUCT(REF MODE127,REF MODE26)  */
struct A68t178{
struct A68t123 * Type;
A68_INT  Tag;
A_PAD_INT(PAD_53)
struct A68t173  Assoc;
};
typedef struct A68t178  A68_178 ;    /* STRUCT(REF MODE123,INT,MODE173)  */
struct A68t179{
struct A68t173  Head;
struct A68t179 * Tail;
};
typedef struct A68t179  A68_179 ;    /* STRUCT(MODE173,REF MODE179)  */
struct A68t180{
struct A68t173  From;
struct A68t173  To;
};
typedef struct A68t180  A68_180 ;    /* STRUCT(MODE173,MODE173)  */

A_PROCEDURE(A68_VOID ,A68t183,(A68_VC ,struct A68t121 ,struct A68t173 *),(A68_VC ,struct A68t121 ,struct A68t173 *,void *));
typedef struct A68t183  A68_183 ;    /* PROC(REF MODE26,MODE121) MODE173 */
struct A68t185 ;

A_PROCEDURE(A68_INT ,A68t184,(struct A68t185 *,A68_INT ,struct A68t43 ,struct A68t36 ),(struct A68t185 *,A68_INT ,struct A68t43 ,struct A68t36 ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(REF MODE185,INT,MODE43,MODE36) INT */
struct A68t185{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t185  A68_185 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t186{
A68_INT  Fnno;
A_PAD_INT(PAD_54)
A68_INT  Offset;
A_PAD_INT(PAD_55)
};
typedef struct A68t186  A68_186 ;    /* STRUCT(INT,INT)  */
A_VECTOR(struct A68t186 ,A68t187);
typedef struct A68t187  A68_187 ;    /* VECTOR [] MODE186 */
A_VECTOR(struct A68t189 ,A68t188);
typedef struct A68t188  A68_188 ;    /* VECTOR [] MODE189 */
struct A68t189{
A68_INT  Fnno;
A_PAD_INT(PAD_56)
A68_INT  Size;
A_PAD_INT(PAD_57)
A68_INT  Inputinstance;
A_PAD_INT(PAD_58)
A68_INT  Probeinstance;
A_PAD_INT(PAD_59)
A68_INT  Baseoffset;
A_PAD_INT(PAD_60)
struct A68t187  Instptrs;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(INT,INT,INT,INT,INT,REF MODE187)  */
struct A68t191 ;
struct A68t192 ;
struct A68t193 ;
struct A68t194 ;

A_PROCEDURE(A68_INT ,A68t190,(struct A68t191 ,struct A68t192 *,struct A68t193 *,struct A68t194 *,A68_INT ,A68_INT ,A68_INT ,struct A68t36 ),(struct A68t191 ,struct A68t192 *,struct A68t193 *,struct A68t194 *,A68_INT ,A68_INT ,A68_INT ,struct A68t36 ,void *));
typedef struct A68t190  A68_190 ;    /* PROC(MODE191,REF MODE192,REF MODE193,REF MODE194,INT,INT,INT,MODE36) INT */
struct A68t191 { A68_INT mode; union {
struct A68t275 * mode1;
struct A68t318 * mode2;
struct A68t319 * mode3;
struct A68t320 * mode4;
struct A68t321 * mode5;
struct A68t322 * mode6;
struct A68t323 * mode7;
struct A68t324 * mode8;
struct A68t325 * mode9;
struct A68t326 * mode10;
struct A68t327 * mode11;
struct A68t328 * mode12;
} data; };
typedef struct A68t191  A68_191 ;    /* UNION(REF MODE275,REF MODE318,REF MODE319,REF MODE320,REF MODE321,REF MODE322,REF MODE323,REF MODE324,REF MODE325,REF MODE326,REF MODE327,REF MODE328)  */
A_VECTOR(struct A68t316 ,A68t313);
typedef struct A68t313  A68_313 ;    /* VECTOR [] MODE316 */
struct A68t255{
A68_INT  Attrno;
A_PAD_INT(PAD_61)
};
typedef struct A68t255  A68_255 ;    /* STRUCT(INT)  */
struct A68t246{
A68_INT  Intno;
A_PAD_INT(PAD_62)
};
typedef struct A68t246  A68_246 ;    /* STRUCT(INT)  */
struct A68t256{
A68_INT  Typeno;
A_PAD_INT(PAD_63)
};
typedef struct A68t256  A68_256 ;    /* STRUCT(INT)  */
struct A68t208{
A68_INT  Constno;
A_PAD_INT(PAD_64)
};
typedef struct A68t208  A68_208 ;    /* STRUCT(INT)  */
struct A68t257{
A68_INT  Fnno;
A_PAD_INT(PAD_65)
};
typedef struct A68t257  A68_257 ;    /* STRUCT(INT)  */
struct A68t317 { A68_INT mode; union {
struct A68t255  mode1;
struct A68t246  mode2;
struct A68t256  mode3;
struct A68t208  mode4;
struct A68t257  mode5;
} data; };
typedef struct A68t317  A68_317 ;    /* UNION(MODE255,MODE246,MODE256,MODE208,MODE257)  */
struct A68t316{
A68_INT  Sort;
A_PAD_INT(PAD_66)
struct A68t317  Spec;
};
typedef struct A68t316  A68_316 ;    /* STRUCT(INT,MODE317)  */
struct A68t205 { A68_INT mode; union {
struct A68t255 * mode1;
struct A68t299 * mode2;
struct A68t300 * mode3;
struct A68t301 * mode4;
struct A68t302 * mode5;
} data; };
typedef struct A68t205  A68_205 ;    /* UNION(REF MODE255,REF MODE299,REF MODE300,REF MODE301,REF MODE302)  */
A_VECTOR(struct A68t315 ,A68t314);
typedef struct A68t314  A68_314 ;    /* VECTOR [] MODE315 */
struct A68t276 { A68_INT mode; union {
struct A68t256 * mode1;
struct A68t277 * mode2;
struct A68t278 * mode3;
struct A68t279 * mode4;
struct A68t214 * mode5;
struct A68t280 * mode6;
struct A68t281 * mode7;
struct A68t251 * mode8;
struct A68t282 * mode9;
} data; };
typedef struct A68t276  A68_276 ;    /* UNION(REF MODE256,REF MODE277,REF MODE278,REF MODE279,REF MODE214,REF MODE280,REF MODE281,REF MODE251,REF MODE282)  */
struct A68t315{
A68_VC  Name;
struct A68t276  Type;
struct A68t205  Attr;
};
typedef struct A68t315  A68_315 ;    /* STRUCT(REF MODE26,MODE276,MODE205)  */
struct A68t192{
A68_INT  Sort;
A_PAD_INT(PAD_67)
A68_BOOL  Macro;
A_PAD_BOOL(PAD_68)
A68_VC  Fnname;
struct A68t313  Macspecs;
struct A68t205  Attr;
struct A68t268 * Inputs;
struct A68t268 * Outputs;
struct A68t314  Nametypes;
struct A68t191  Fnbody;
struct A68t207 * Usage;
};
typedef struct A68t192  A68_192 ;    /* STRUCT(INT,BOOL,REF MODE26,REF MODE313,MODE205,REF MODE268,REF MODE268,REF MODE314,MODE191,REF MODE207)  */
A_VECTOR(struct A68t312 *,A68t199);
typedef struct A68t199  A68_199 ;    /* VECTOR [] REF MODE312 */
A_VECTOR(struct A68t310 *,A68t200);
typedef struct A68t200  A68_200 ;    /* VECTOR [] REF MODE310 */
A_VECTOR(struct A68t304 *,A68t201);
typedef struct A68t201  A68_201 ;    /* VECTOR [] REF MODE304 */
A_VECTOR(struct A68t204 *,A68t202);
typedef struct A68t202  A68_202 ;    /* VECTOR [] REF MODE204 */
A_VECTOR(struct A68t192 *,A68t203);
typedef struct A68t203  A68_203 ;    /* VECTOR [] REF MODE192 */
struct A68t193{
struct A68t199  Attrs;
struct A68t200  Ints;
struct A68t201  Types;
struct A68t202  Consts;
struct A68t203  Fns;
};
typedef struct A68t193  A68_193 ;    /* STRUCT(REF MODE199,REF MODE200,REF MODE201,REF MODE202,REF MODE203)  */
struct A68t194{
A68_INT  Max_closureno;
A_PAD_INT(PAD_69)
struct A68t195 * Outers;
struct A68t195 * Freelist;
struct A68t196 * Outerslist;
};
typedef struct A68t194  A68_194 ;    /* STRUCT(INT,REF MODE195,REF MODE195,REF MODE196)  */
struct A68t198{
A68_INT  Closureno;
A_PAD_INT(PAD_70)
A68_INT  Sort;
A_PAD_INT(PAD_71)
struct A68t193 * Environ;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(INT,INT,REF MODE193)  */
struct A68t195{
struct A68t198  Outer;
struct A68t195 * Rest;
};
typedef struct A68t195  A68_195 ;    /* STRUCT(MODE198,REF MODE195)  */
A_VECTOR(struct A68t195 ,A68t197);
typedef struct A68t197  A68_197 ;    /* VECTOR [] MODE195 */
struct A68t196{
struct A68t197  Outers;
struct A68t196 * Rest;
};
typedef struct A68t196  A68_196 ;    /* STRUCT(REF MODE197,REF MODE196)  */
struct A68t206 { A68_INT mode; union {
struct A68t208 * mode1;
struct A68t209 * mode2;
struct A68t210 * mode3;
struct A68t211 * mode4;
struct A68t212 * mode5;
struct A68t213 * mode6;
struct A68t214 * mode7;
struct A68t215 * mode8;
struct A68t216 * mode9;
struct A68t217 * mode10;
struct A68t218 * mode11;
struct A68t219 * mode12;
struct A68t220 * mode13;
struct A68t221 * mode14;
struct A68t222 * mode15;
struct A68t223 * mode16;
struct A68t224 * mode17;
struct A68t225 * mode18;
struct A68t226 * mode19;
struct A68t227 * mode20;
struct A68t228 * mode21;
struct A68t229 * mode22;
struct A68t230 * mode23;
struct A68t231 * mode24;
struct A68t232 * mode25;
struct A68t233 * mode26;
struct A68t234 * mode27;
struct A68t235 * mode28;
struct A68t236 * mode29;
struct A68t237 * mode30;
struct A68t238 * mode31;
struct A68t239 * mode32;
struct A68t240 * mode33;
struct A68t241 * mode34;
} data; };
typedef struct A68t206  A68_206 ;    /* UNION(REF MODE208,REF MODE209,REF MODE210,REF MODE211,REF MODE212,REF MODE213,REF MODE214,REF MODE215,REF MODE216,REF MODE217,REF MODE218,REF MODE219,REF MODE220,REF MODE221,REF MODE222,REF MODE223,REF MODE224,REF MODE225,REF MODE226,REF MODE227,REF MODE228,REF MODE229,REF MODE230,REF MODE231,REF MODE232,REF MODE233,REF MODE234,REF MODE235,REF MODE236,REF MODE237,REF MODE238,REF MODE239,REF MODE240,REF MODE241)  */
struct A68t204{
A68_INT  Sort;
A_PAD_INT(PAD_72)
A68_VC  Constname;
struct A68t205  Attr;
struct A68t206  Value;
struct A68t207 * Usage;
};
typedef struct A68t204  A68_204 ;    /* STRUCT(INT,REF MODE26,MODE205,MODE206,REF MODE207)  */
struct A68t207{
A68_INT  Contextno;
A_PAD_INT(PAD_73)
A68_INT  Closureno;
A_PAD_INT(PAD_74)
A68_INT  Libv_spec;
A_PAD_INT(PAD_75)
A68_INT  Libv_body;
A_PAD_INT(PAD_76)
A68_BOOL  Import;
A_PAD_BOOL(PAD_77)
A68_BOOL  Export;
A_PAD_BOOL(PAD_78)
};
typedef struct A68t207  A68_207 ;    /* STRUCT(INT,INT,INT,INT,BOOL,BOOL)  */
struct A68t209{
A68_INT  Typeno;
A_PAD_INT(PAD_79)
A68_INT  Primno;
A_PAD_INT(PAD_80)
};
typedef struct A68t209  A68_209 ;    /* STRUCT(INT,INT)  */
struct A68t242 { A68_INT mode; union {
struct A68t243 * mode1;
struct A68t244 * mode2;
struct A68t245 * mode3;
struct A68t246 * mode4;
struct A68t247 * mode5;
struct A68t248 * mode6;
struct A68t249 * mode7;
struct A68t250 * mode8;
struct A68t251 * mode9;
struct A68t252 * mode10;
} data; };
typedef struct A68t242  A68_242 ;    /* UNION(REF MODE243,REF MODE244,REF MODE245,REF MODE246,REF MODE247,REF MODE248,REF MODE249,REF MODE250,REF MODE251,REF MODE252)  */
struct A68t210{
A68_INT  Typeno;
A_PAD_INT(PAD_81)
struct A68t242  Index;
};
typedef struct A68t210  A68_210 ;    /* STRUCT(INT,MODE242)  */
struct A68t211{
struct A68t276  Querytype;
};
typedef struct A68t211  A68_211 ;    /* STRUCT(MODE276)  */
struct A68t212{
A68_INT  Typeno;
A_PAD_INT(PAD_82)
struct A68t32  String;
};
typedef struct A68t212  A68_212 ;    /* STRUCT(INT,REF MODE32)  */
struct A68t213{
A68_INT  Cvoid;
A_PAD_INT(PAD_83)
};
typedef struct A68t213  A68_213 ;    /* STRUCT(INT)  */
struct A68t214{
struct A68t276  Type;
};
typedef struct A68t214  A68_214 ;    /* STRUCT(MODE276)  */
struct A68t298{
struct A68t242  Lwb;
struct A68t242  Upb;
};
typedef struct A68t298  A68_298 ;    /* STRUCT(MODE242,MODE242)  */
struct A68t215{
A68_INT  Typeno;
A_PAD_INT(PAD_84)
struct A68t298  Range;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(INT,MODE298)  */
struct A68t216{
A68_INT  Typeno;
A_PAD_INT(PAD_85)
A68_INT  Firstno;
A_PAD_INT(PAD_86)
A68_INT  Lastno;
A_PAD_INT(PAD_87)
};
typedef struct A68t216  A68_216 ;    /* STRUCT(INT,INT,INT)  */
struct A68t217{
struct A68t206  Alt;
struct A68t217 * Rest;
};
typedef struct A68t217  A68_217 ;    /* STRUCT(MODE206,REF MODE217)  */
struct A68t218{
A68_INT  Sort;
A_PAD_INT(PAD_88)
A68_INT  Nameno;
A_PAD_INT(PAD_89)
};
typedef struct A68t218  A68_218 ;    /* STRUCT(INT,INT)  */
struct A68t219{
struct A68t206  Sink;
struct A68t206  Source;
};
typedef struct A68t219  A68_219 ;    /* STRUCT(MODE206,MODE206)  */
struct A68t220{
A68_INT  Typeno;
A_PAD_INT(PAD_90)
A68_INT  Altno;
A_PAD_INT(PAD_91)
struct A68t206  Assoc;
};
typedef struct A68t220  A68_220 ;    /* STRUCT(INT,INT,MODE206)  */
struct A68t221{
struct A68t206  Extract;
A68_INT  Typeno;
A_PAD_INT(PAD_92)
A68_INT  Altno;
A_PAD_INT(PAD_93)
};
typedef struct A68t221  A68_221 ;    /* STRUCT(MODE206,INT,INT)  */
struct A68t222{
struct A68t206  Unit;
A68_INT  Fnno;
A_PAD_INT(PAD_94)
A68_INT  Nameno;
A_PAD_INT(PAD_95)
};
typedef struct A68t222  A68_222 ;    /* STRUCT(MODE206,INT,INT)  */
struct A68t223{
struct A68t206  Unit;
struct A68t242  Index;
};
typedef struct A68t223  A68_223 ;    /* STRUCT(MODE206,MODE242)  */
struct A68t224{
struct A68t206  Unit;
struct A68t298  Range;
};
typedef struct A68t224  A68_224 ;    /* STRUCT(MODE206,MODE298)  */
struct A68t225{
struct A68t206  Unit;
struct A68t206  Index;
};
typedef struct A68t225  A68_225 ;    /* STRUCT(MODE206,MODE206)  */
struct A68t226{
struct A68t206  Unit;
struct A68t206  Index;
struct A68t206  From;
};
typedef struct A68t226  A68_226 ;    /* STRUCT(MODE206,MODE206,MODE206)  */
struct A68t227{
struct A68t242  Size;
struct A68t206  Elem;
};
typedef struct A68t227  A68_227 ;    /* STRUCT(MODE242,MODE206)  */
struct A68t228{
struct A68t206  Elem;
struct A68t228 * Rest;
};
typedef struct A68t228  A68_228 ;    /* STRUCT(MODE206,REF MODE228)  */
struct A68t229{
A68_BOOL  String;
A_PAD_BOOL(PAD_96)
A68_INT  Sort;
A_PAD_INT(PAD_97)
struct A68t206  Left;
struct A68t206  Right;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(BOOL,INT,MODE206,MODE206)  */
A_VECTOR(struct A68t270 ,A68t269);
typedef struct A68t269  A68_269 ;    /* VECTOR [] MODE270 */
struct A68t272{
struct A68t205  Tag;
};
typedef struct A68t272  A68_272 ;    /* STRUCT(MODE205)  */
struct A68t273{
struct A68t242  Tag;
};
typedef struct A68t273  A68_273 ;    /* STRUCT(MODE242)  */
struct A68t274{
struct A68t276  Tag;
};
typedef struct A68t274  A68_274 ;    /* STRUCT(MODE276)  */
struct A68t275{
struct A68t206  Tag;
};
typedef struct A68t275  A68_275 ;    /* STRUCT(MODE206)  */
struct A68t267{
A68_INT  Fnno;
A_PAD_INT(PAD_98)
struct A68t269  Macparams;
struct A68t205  Attr;
};
typedef struct A68t267  A68_267 ;    /* STRUCT(INT,REF MODE269,MODE205)  */
struct A68t271 { A68_INT mode; union {
struct A68t272  mode1;
struct A68t273  mode2;
struct A68t274  mode3;
struct A68t275  mode4;
struct A68t267  mode5;
} data; };
typedef struct A68t271  A68_271 ;    /* UNION(MODE272,MODE273,MODE274,MODE275,MODE267)  */
struct A68t270{
A68_INT  Sort;
A_PAD_INT(PAD_99)
struct A68t271  Param;
};
typedef struct A68t270  A68_270 ;    /* STRUCT(INT,MODE271)  */
struct A68t230{
struct A68t267  Inst;
struct A68t206  Right;
};
typedef struct A68t230  A68_230 ;    /* STRUCT(MODE267,MODE206)  */
struct A68t231{
struct A68t206  Left;
struct A68t267  Inst;
struct A68t206  Right;
};
typedef struct A68t231  A68_231 ;    /* STRUCT(MODE206,MODE267,MODE206)  */
struct A68t232{
struct A68t206  Input;
struct A68t297 * Choices;
};
typedef struct A68t232  A68_232 ;    /* STRUCT(MODE206,REF MODE297)  */
struct A68t233{
struct A68t242  Cond;
struct A68t206  True;
struct A68t206  False;
};
typedef struct A68t233  A68_233 ;    /* STRUCT(MODE242,MODE206,MODE206)  */
struct A68t234{
struct A68t242  Repl;
struct A68t206  Body;
};
typedef struct A68t234  A68_234 ;    /* STRUCT(MODE242,MODE206)  */
struct A68t235{
struct A68t285 * Body;
struct A68t206  Output;
};
typedef struct A68t235  A68_235 ;    /* STRUCT(REF MODE285,MODE206)  */
struct A68t236{
struct A68t253 * Body;
struct A68t206  Output;
};
typedef struct A68t236  A68_236 ;    /* STRUCT(REF MODE253,MODE206)  */
struct A68t237{
struct A68t206  Unit;
struct A68t205  Attr;
};
typedef struct A68t237  A68_237 ;    /* STRUCT(MODE206,MODE205)  */
struct A68t244{
A68_INT  Sort;
A_PAD_INT(PAD_100)
struct A68t242  Test;
struct A68t242  Standard;
};
typedef struct A68t244  A68_244 ;    /* STRUCT(INT,MODE242,MODE242)  */
struct A68t238{
struct A68t206  Unit;
struct A68t244  Check;
};
typedef struct A68t238  A68_238 ;    /* STRUCT(MODE206,MODE244)  */
struct A68t239{
struct A68t206  Unit;
};
typedef struct A68t239  A68_239 ;    /* STRUCT(MODE206)  */
struct A68t240{
struct A68t242  Size;
struct A68t206  Char;
};
typedef struct A68t240  A68_240 ;    /* STRUCT(MODE242,MODE206)  */
struct A68t241{
A68_INT  Unull;
A_PAD_INT(PAD_101)
};
typedef struct A68t241  A68_241 ;    /* STRUCT(INT)  */
struct A68t243{
A68_INT  Int;
A_PAD_INT(PAD_102)
A68_VC  Text;
};
typedef struct A68t243  A68_243 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t245{
A68_INT  Nameno;
A_PAD_INT(PAD_103)
};
typedef struct A68t245  A68_245 ;    /* STRUCT(INT)  */
struct A68t247{
struct A68t242  Left;
A68_INT  Sort;
A_PAD_INT(PAD_104)
struct A68t242  Right;
};
typedef struct A68t247  A68_247 ;    /* STRUCT(MODE242,INT,MODE242)  */
struct A68t248{
A68_INT  Sort;
A_PAD_INT(PAD_105)
struct A68t242  Right;
};
typedef struct A68t248  A68_248 ;    /* STRUCT(INT,MODE242)  */
struct A68t249{
struct A68t242  Cond;
struct A68t242  True;
struct A68t242  False;
};
typedef struct A68t249  A68_249 ;    /* STRUCT(MODE242,MODE242,MODE242)  */
struct A68t250{
struct A68t242  Formula;
};
typedef struct A68t250  A68_250 ;    /* STRUCT(MODE242)  */
struct A68t251{
A68_INT  Macparno;
A_PAD_INT(PAD_106)
};
typedef struct A68t251  A68_251 ;    /* STRUCT(INT)  */
struct A68t252{
A68_INT  Fnull;
A_PAD_INT(PAD_107)
};
typedef struct A68t252  A68_252 ;    /* STRUCT(INT)  */
struct A68t254 { A68_INT mode; union {
struct A68t255  mode1;
struct A68t246  mode2;
struct A68t256  mode3;
struct A68t208  mode4;
struct A68t257  mode5;
struct A68t258 * mode6;
struct A68t259 * mode7;
struct A68t260 * mode8;
struct A68t261 * mode9;
struct A68t262 * mode10;
struct A68t263 * mode11;
struct A68t264 * mode12;
} data; };
typedef struct A68t254  A68_254 ;    /* UNION(MODE255,MODE246,MODE256,MODE208,MODE257,REF MODE258,REF MODE259,REF MODE260,REF MODE261,REF MODE262,REF MODE263,REF MODE264)  */
struct A68t253{
struct A68t254  Step;
struct A68t253 * Rest;
};
typedef struct A68t253  A68_253 ;    /* STRUCT(MODE254,REF MODE253)  */
struct A68t258{
struct A68t242  Cond;
struct A68t283 * Print;
};
typedef struct A68t258  A68_258 ;    /* STRUCT(MODE242,REF MODE283)  */
struct A68t259{
struct A68t242  Cond;
struct A68t283 * Fault;
};
typedef struct A68t259  A68_259 ;    /* STRUCT(MODE242,REF MODE283)  */
struct A68t260{
struct A68t268 * Letnames;
struct A68t206  Unit;
};
typedef struct A68t260  A68_260 ;    /* STRUCT(REF MODE268,MODE206)  */
struct A68t261{
struct A68t265 * Sizes;
struct A68t267  Inst;
struct A68t268 * Makenames;
};
typedef struct A68t261  A68_261 ;    /* STRUCT(REF MODE265,MODE267,REF MODE268)  */
struct A68t262{
struct A68t206  From;
struct A68t206  To;
};
typedef struct A68t262  A68_262 ;    /* STRUCT(MODE206,MODE206)  */
struct A68t263{
struct A68t265 * Repls;
struct A68t266 * Joins;
};
typedef struct A68t263  A68_263 ;    /* STRUCT(REF MODE265,REF MODE266)  */
struct A68t264{
A68_INT  Stepnull;
A_PAD_INT(PAD_108)
};
typedef struct A68t264  A68_264 ;    /* STRUCT(INT)  */
struct A68t265{
struct A68t242  Formula;
struct A68t265 * Rest;
};
typedef struct A68t265  A68_265 ;    /* STRUCT(MODE242,REF MODE265)  */
struct A68t266{
struct A68t262  Join;
struct A68t266 * Rest;
};
typedef struct A68t266  A68_266 ;    /* STRUCT(MODE262,REF MODE266)  */
struct A68t268{
A68_INT  Nameno;
A_PAD_INT(PAD_109)
struct A68t268 * Rest;
};
typedef struct A68t268  A68_268 ;    /* STRUCT(INT,REF MODE268)  */
struct A68t277{
struct A68t242  Size;
struct A68t276  Elem;
};
typedef struct A68t277  A68_277 ;    /* STRUCT(MODE242,MODE276)  */
struct A68t278{
struct A68t276  Elem;
struct A68t278 * Rest;
};
typedef struct A68t278  A68_278 ;    /* STRUCT(MODE276,REF MODE278)  */
struct A68t279{
struct A68t276  From;
struct A68t276  To;
};
typedef struct A68t279  A68_279 ;    /* STRUCT(MODE276,MODE276)  */
struct A68t280{
struct A68t242  Size;
struct A68t276  Char;
};
typedef struct A68t280  A68_280 ;    /* STRUCT(MODE242,MODE276)  */
struct A68t281{
A68_INT  Tvoid;
A_PAD_INT(PAD_110)
};
typedef struct A68t281  A68_281 ;    /* STRUCT(INT)  */
struct A68t282{
A68_INT  Tnull;
A_PAD_INT(PAD_111)
};
typedef struct A68t282  A68_282 ;    /* STRUCT(INT)  */
struct A68t284 { A68_INT mode; union {
A68_VC  mode1;
struct A68t273 * mode2;
} data; };
typedef struct A68t284  A68_284 ;    /* UNION(REF MODE26,REF MODE273)  */
struct A68t283{
struct A68t284  Item;
struct A68t283 * Rest;
};
typedef struct A68t283  A68_283 ;    /* STRUCT(MODE284,REF MODE283)  */
struct A68t286 { A68_INT mode; union {
struct A68t255  mode1;
struct A68t246  mode2;
struct A68t256  mode3;
struct A68t208  mode4;
struct A68t257  mode5;
struct A68t258 * mode6;
struct A68t259 * mode7;
struct A68t287 * mode8;
struct A68t288 * mode9;
struct A68t289 * mode10;
struct A68t290 * mode11;
struct A68t291 * mode12;
struct A68t292 * mode13;
struct A68t293 * mode14;
struct A68t294 * mode15;
struct A68t285 * mode16;
struct A68t295 * mode17;
} data; };
typedef struct A68t286  A68_286 ;    /* UNION(MODE255,MODE246,MODE256,MODE208,MODE257,REF MODE258,REF MODE259,REF MODE287,REF MODE288,REF MODE289,REF MODE290,REF MODE291,REF MODE292,REF MODE293,REF MODE294,REF MODE285,REF MODE295)  */
struct A68t285{
struct A68t286  Step;
struct A68t285 * Rest;
};
typedef struct A68t285  A68_285 ;    /* STRUCT(MODE286,REF MODE285)  */
struct A68t287{
struct A68t260  Seqlet;
};
typedef struct A68t287  A68_287 ;    /* STRUCT(MODE260)  */
struct A68t288{
struct A68t260  Seqvar;
};
typedef struct A68t288  A68_288 ;    /* STRUCT(MODE260)  */
struct A68t289{
struct A68t268 * Pvarnames;
struct A68t206  Init;
};
typedef struct A68t289  A68_289 ;    /* STRUCT(REF MODE268,MODE206)  */
struct A68t290{
struct A68t206  To;
struct A68t206  From;
};
typedef struct A68t290  A68_290 ;    /* STRUCT(MODE206,MODE206)  */
struct A68t291{
struct A68t206  Input;
struct A68t296 * Choices;
};
typedef struct A68t291  A68_291 ;    /* STRUCT(MODE206,REF MODE296)  */
struct A68t292{
struct A68t242  Cond;
struct A68t286  True;
struct A68t286  False;
};
typedef struct A68t292  A68_292 ;    /* STRUCT(MODE242,MODE286,MODE286)  */
struct A68t293{
struct A68t242  Repl;
struct A68t286  Body;
};
typedef struct A68t293  A68_293 ;    /* STRUCT(MODE242,MODE286)  */
struct A68t294{
A68_INT  Seqnull;
A_PAD_INT(PAD_112)
};
typedef struct A68t294  A68_294 ;    /* STRUCT(INT)  */
struct A68t295{
struct A68t242  Size;
struct A68t286  Elem;
};
typedef struct A68t295  A68_295 ;    /* STRUCT(MODE242,MODE286)  */
struct A68t296{
A68_BOOL  Check;
A_PAD_BOOL(PAD_113)
A68_INT  Sort;
A_PAD_INT(PAD_114)
struct A68t206  Test;
struct A68t286  Output;
struct A68t296 * Rest;
};
typedef struct A68t296  A68_296 ;    /* STRUCT(BOOL,INT,MODE206,MODE286,REF MODE296)  */
struct A68t297{
A68_BOOL  Check;
A_PAD_BOOL(PAD_115)
A68_INT  Sort;
A_PAD_INT(PAD_116)
struct A68t206  Test;
struct A68t206  Output;
struct A68t297 * Rest;
};
typedef struct A68t297  A68_297 ;    /* STRUCT(BOOL,INT,MODE206,MODE206,REF MODE297)  */
struct A68t299{
A68_VC  Classname;
struct A68t303 * Strings;
};
typedef struct A68t299  A68_299 ;    /* STRUCT(REF MODE26,REF MODE303)  */
struct A68t300{
struct A68t205  Elem;
struct A68t300 * Rest;
};
typedef struct A68t300  A68_300 ;    /* STRUCT(MODE205,REF MODE300)  */
struct A68t301{
struct A68t205  Attr;
};
typedef struct A68t301  A68_301 ;    /* STRUCT(MODE205)  */
struct A68t302{
A68_INT  Attrnull;
A_PAD_INT(PAD_117)
};
typedef struct A68t302  A68_302 ;    /* STRUCT(INT)  */
struct A68t303{
A68_VC  Id;
struct A68t303 * Rest;
};
typedef struct A68t303  A68_303 ;    /* STRUCT(REF MODE26,REF MODE303)  */
A_VECTOR(struct A68t309 ,A68t306);
typedef struct A68t306  A68_306 ;    /* VECTOR [] MODE309 */
struct A68t309{
A68_VC  Altname;
struct A68t276  Assoc;
};
typedef struct A68t309  A68_309 ;    /* STRUCT(REF MODE26,MODE276)  */
struct A68t305 { A68_INT mode; union {
struct A68t306  mode1;
struct A68t307 * mode2;
struct A68t274 * mode3;
struct A68t308 * mode4;
} data; };
typedef struct A68t305  A68_305 ;    /* UNION(REF MODE306,REF MODE307,REF MODE274,REF MODE308)  */
struct A68t304{
A68_INT  Sort;
A_PAD_INT(PAD_118)
A68_VC  Typename;
struct A68t205  Attr;
struct A68t305  Body;
struct A68t207 * Usage;
};
typedef struct A68t304  A68_304 ;    /* STRUCT(INT,REF MODE26,MODE205,MODE305,REF MODE207)  */
struct A68t307{
A68_VC  Tagname;
struct A68t298  Range;
};
typedef struct A68t307  A68_307 ;    /* STRUCT(REF MODE26,MODE298)  */
struct A68t308{
A68_VC  Tagname;
A68_VC  Chars;
};
typedef struct A68t308  A68_308 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t311 { A68_INT mode; union {
struct A68t243 * mode1;
struct A68t244 * mode2;
struct A68t245 * mode3;
struct A68t246 * mode4;
struct A68t247 * mode5;
struct A68t248 * mode6;
struct A68t249 * mode7;
struct A68t250 * mode8;
struct A68t251 * mode9;
struct A68t252 * mode10;
struct A68t298  mode11;
} data; };
typedef struct A68t311  A68_311 ;    /* UNION(REF MODE243,REF MODE244,REF MODE245,REF MODE246,REF MODE247,REF MODE248,REF MODE249,REF MODE250,REF MODE251,REF MODE252,MODE298)  */
struct A68t310{
A68_INT  Sort;
A_PAD_INT(PAD_119)
A68_VC  Intname;
struct A68t205  Attr;
struct A68t311  Value;
struct A68t207 * Usage;
};
typedef struct A68t310  A68_310 ;    /* STRUCT(INT,REF MODE26,MODE205,MODE311,REF MODE207)  */
struct A68t312{
A68_INT  Sort;
A_PAD_INT(PAD_120)
A68_VC  Attrname;
struct A68t205  Value;
struct A68t207 * Usage;
};
typedef struct A68t312  A68_312 ;    /* STRUCT(INT,REF MODE26,MODE205,REF MODE207)  */
struct A68t318{
A68_BOOL  Biop;
A_PAD_BOOL(PAD_121)
A68_VC  Name;
struct A68t269  Macparams;
};
typedef struct A68t318  A68_318 ;    /* STRUCT(BOOL,REF MODE26,REF MODE269)  */
struct A68t319{
struct A68t242  Output;
};
typedef struct A68t319  A68_319 ;    /* STRUCT(MODE242)  */
struct A68t320{
A68_INT  Reform;
A_PAD_INT(PAD_122)
};
typedef struct A68t320  A68_320 ;    /* STRUCT(INT)  */
struct A68t321{
A68_VC  Name;
A68_INT  Contextno;
A_PAD_INT(PAD_123)
struct A68t92  Ctname;
};
typedef struct A68t321  A68_321 ;    /* STRUCT(REF MODE26,INT,MODE92)  */
struct A68t322{
A68_INT  Sort;
A_PAD_INT(PAD_124)
struct A68t206  Init;
struct A68t242  Ambigtime;
struct A68t206  Ambig;
struct A68t242  Delaytime;
};
typedef struct A68t322  A68_322 ;    /* STRUCT(INT,MODE206,MODE242,MODE206,MODE242)  */
struct A68t323{
struct A68t206  Init;
struct A68t242  Delaytime;
};
typedef struct A68t323  A68_323 ;    /* STRUCT(MODE206,MODE242)  */
struct A68t324{
struct A68t206  Init;
};
typedef struct A68t324  A68_324 ;    /* STRUCT(MODE206)  */
struct A68t325{
A68_INT  Sort;
A_PAD_INT(PAD_125)
struct A68t242  Interval;
struct A68t206  Init;
struct A68t242  Skew;
};
typedef struct A68t325  A68_325 ;    /* STRUCT(INT,MODE242,MODE206,MODE242)  */
struct A68t326{
A68_BOOL  Faster;
A_PAD_BOOL(PAD_126)
A68_INT  Sort;
A_PAD_INT(PAD_127)
struct A68t267  Inst;
struct A68t242  Scale;
struct A68t206  Init;
struct A68t242  Skew;
};
typedef struct A68t326  A68_326 ;    /* STRUCT(BOOL,INT,MODE267,MODE242,MODE206,MODE242)  */
struct A68t327{
struct A68t329 * Joincheck;
A68_BOOL  Check;
A_PAD_BOOL(PAD_128)
struct A68t191  Fnbody;
};
typedef struct A68t327  A68_327 ;    /* STRUCT(REF MODE329,BOOL,MODE191)  */
struct A68t328{
A68_INT  Bodynull;
A_PAD_INT(PAD_129)
};
typedef struct A68t328  A68_328 ;    /* STRUCT(INT)  */
struct A68t329{
A68_INT  Int;
A_PAD_INT(PAD_130)
struct A68t329 * Rest;
};
typedef struct A68t329  A68_329 ;    /* STRUCT(INT,REF MODE329)  */

A_PROCEDURE(A68_INT ,A68t330,(struct A68t32 ),(struct A68t32 ,void *));
typedef struct A68t330  A68_330 ;    /* PROC(MODE32) INT */

A_PROCEDURE(A68_VOID ,A68t331,(A68_INT ,struct A68t32 ,struct A68t36 ),(A68_INT ,struct A68t32 ,struct A68t36 ,void *));
typedef struct A68t331  A68_331 ;    /* PROC(INT,MODE32,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t332,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t332  A68_332 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t333,(A68_INT ),(A68_INT ,void *));
typedef struct A68t333  A68_333 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t334,(struct A68t43 ,A68_INT ,struct A68t36 ),(struct A68t43 ,A68_INT ,struct A68t36 ,void *));
typedef struct A68t334  A68_334 ;    /* PROC(MODE43,INT,MODE36) VOID */
struct A68t336 ;

A_PROCEDURE(A68_VOID ,A68t335,(struct A68t191 ,A68_VC ,struct A68t192 ,struct A68t336 ,struct A68t32 ,A68_INT ,struct A68t193 *,struct A68t194 *,struct A68t135 **,struct A68t137 *,struct A68t36 ,struct A68t136 *),(struct A68t191 ,A68_VC ,struct A68t192 ,struct A68t336 ,struct A68t32 ,A68_INT ,struct A68t193 *,struct A68t194 *,struct A68t135 **,struct A68t137 *,struct A68t36 ,struct A68t136 *,void *));
typedef struct A68t335  A68_335 ;    /* PROC(MODE191,REF MODE26,MODE192,MODE336,MODE32,INT,REF MODE193,REF MODE194,REF REF MODE135,REF MODE137,MODE36) MODE136 */
A_VECTOR(struct A68t134 ,A68t336);
typedef struct A68t336  A68_336 ;    /* VECTOR [] MODE134 */

A_PROCEDURE(A68_VOID ,A68t337,(A68_INT ,A68_VC ,struct A68t136 *),(A68_INT ,A68_VC ,struct A68t136 *,void *));
typedef struct A68t337  A68_337 ;    /* PROC(INT,REF MODE26) MODE136 */

A_PROCEDURE(A68_VOID ,A68t338,(struct A68t32 ,A68_VC ,struct A68t136 *),(struct A68t32 ,A68_VC ,struct A68t136 *,void *));
typedef struct A68t338  A68_338 ;    /* PROC(MODE32,MODE26) MODE136 */
struct A68t339{
A68_INT  Lab;
A_PAD_INT(PAD_131)
A68_VC  Tag;
};
typedef struct A68t339  A68_339 ;    /* STRUCT(INT,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t340,(A68_INT ,A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t340  A68_340 ;    /* PROC(INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t341,(struct A68t32 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t32 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t341  A68_341 ;    /* PROC(MODE32,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t342,(struct A68t32 ,struct A68t121 ),(struct A68t32 ,struct A68t121 ,void *));
typedef struct A68t342  A68_342 ;    /* PROC(REF MODE32,MODE121) VOID */

A_PROCEDURE(A68_VOID ,A68t343,(struct A68t32 ,A68_INT ,struct A68t121 ,A68_INT ,A68_INT ,A68_INT ),(struct A68t32 ,A68_INT ,struct A68t121 ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t343  A68_343 ;    /* PROC(MODE32,INT,MODE121,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t344,(struct A68t32 ,struct A68t32 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t32 ,struct A68t32 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t344  A68_344 ;    /* PROC(MODE32,MODE32,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t345,(struct A68t173 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t173 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t345  A68_345 ;    /* PROC(MODE173,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t346,(struct A68t173 ,struct A68t121 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t173 ,struct A68t121 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t346  A68_346 ;    /* PROC(MODE173,MODE121,INT,INT,INT,INT) VOID */
struct A68t347{
A68_INT  Sort;
A_PAD_INT(PAD_132)
A68_INT  Size;
A_PAD_INT(PAD_133)
};
typedef struct A68t347  A68_347 ;    /* STRUCT(INT,INT)  */
struct A68t348{
struct A68t347  Head;
struct A68t348 * Tail;
};
typedef struct A68t348  A68_348 ;    /* STRUCT(MODE347,REF MODE348)  */
struct A68t349{
struct A68t339  Labelint;
struct A68t339  Labelcallinst;
A68_INT  Workspacesize;
A_PAD_INT(PAD_134)
A68_INT  Evalfn;
A_PAD_INT(PAD_135)
A68_INT  History;
A_PAD_INT(PAD_136)
A68_INT  Declid;
A_PAD_INT(PAD_137)
};
typedef struct A68t349  A68_349 ;    /* STRUCT(MODE339,MODE339,INT,INT,INT,INT)  */

A_PROCEDURE(struct A68t349 *,A68t350,(A68_VC ,struct A68t32 ,A68_INT ,struct A68t32 ,struct A68t36 ),(A68_VC ,struct A68t32 ,A68_INT ,struct A68t32 ,struct A68t36 ,void *));
typedef struct A68t350  A68_350 ;    /* PROC(MODE26,MODE32,INT,MODE32,MODE36) REF MODE349 */
struct A68t351 { A68_INT mode; union {
A68_INT  mode1;
struct A68t339  mode2;
} data; };
typedef struct A68t351  A68_351 ;    /* UNION(INT,MODE339,VOID)  */

A_PROCEDURE(A68_VOID ,A68t352,(A68_VC ,struct A68t339 *),(A68_VC ,struct A68t339 *,void *));
typedef struct A68t352  A68_352 ;    /* PROC(MODE26) MODE339 */

A_PROCEDURE(A68_VOID ,A68t353,(struct A68t339 *),(struct A68t339 *,void *));
typedef struct A68t353  A68_353 ;    /* PROC MODE339 */

A_PROCEDURE(A68_INT ,A68t354,(A68_INT ,A68_INT *),(A68_INT ,A68_INT *,void *));
typedef struct A68t354  A68_354 ;    /* PROC(INT,REF INT) INT */

A_PROCEDURE(A68_VC *,A68t355,(A68_VC ),(A68_VC ,void *));
typedef struct A68t355  A68_355 ;    /* PROC(REF MODE26) REF REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t356,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t356  A68_356 ;    /* PROC(INT,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t357,(A68_INT ,struct A68t351 ),(A68_INT ,struct A68t351 ,void *));
typedef struct A68t357  A68_357 ;    /* PROC(INT,MODE351) VOID */

A_PROCEDURE(A68_VOID ,A68t358,(A68_INT ,A68_INT ,struct A68t351 ),(A68_INT ,A68_INT ,struct A68t351 ,void *));
typedef struct A68t358  A68_358 ;    /* PROC(INT,INT,MODE351) VOID */

A_PROCEDURE(A68_VOID ,A68t359,(struct A68t339 ),(struct A68t339 ,void *));
typedef struct A68t359  A68_359 ;    /* PROC(MODE339) VOID */

A_PROCEDURE(A68_VOID ,A68t360,(A68_INT ,struct A68t339 ),(A68_INT ,struct A68t339 ,void *));
typedef struct A68t360  A68_360 ;    /* PROC(INT,MODE339) VOID */

A_PROCEDURE(A68_VOID ,A68t361,(struct A68t351 ,struct A68t339 ),(struct A68t351 ,struct A68t339 ,void *));
typedef struct A68t361  A68_361 ;    /* PROC(MODE351,MODE339) VOID */

A_PROCEDURE(A68_VOID ,A68t362,(struct A68t339 ,struct A68t348 *,struct A68t348 *),(struct A68t339 ,struct A68t348 *,struct A68t348 *,void *));
typedef struct A68t362  A68_362 ;    /* PROC(MODE339,REF MODE348,REF MODE348) VOID */

A_PROCEDURE(A68_VOID ,A68t363,(struct A68t339 ,A68_INT ),(struct A68t339 ,A68_INT ,void *));
typedef struct A68t363  A68_363 ;    /* PROC(MODE339,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t364,(A68_INT ,struct A68t36 ,A68_VC *),(A68_INT ,struct A68t36 ,A68_VC *,void *));
typedef struct A68t364  A68_364 ;    /* PROC(INT,MODE36) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t365,(A68_INT ,struct A68t36 ),(A68_INT ,struct A68t36 ,void *));
typedef struct A68t365  A68_365 ;    /* PROC(INT,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t366,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t366  A68_366 ;    /* PROC(REF MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t367,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t367  A68_367 ;    /* PROC(INT,INT) REF MODE26 */
struct A68t369 ;

A_PROCEDURE(A68_VOID ,A68t368,(A68_INT ,struct A68t369 *),(A68_INT ,struct A68t369 *,void *));
typedef struct A68t368  A68_368 ;    /* PROC(INT) MODE369 */
struct A68t369{
A68_INT  Lasttime;
A_PAD_INT(PAD_138)
A68_INT  Interrupted;
A_PAD_INT(PAD_139)
};
typedef struct A68t369  A68_369 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t370,(struct A68t167 ,struct A68t167 ,struct A68t36 ),(struct A68t167 ,struct A68t167 ,struct A68t36 ,void *));
typedef struct A68t370  A68_370 ;    /* PROC(MODE167,MODE167,MODE36) VOID */
struct A68t372 ;

A_PROCEDURE(A68_VOID ,A68t371,(struct A68t372 *),(struct A68t372 *,void *));
typedef struct A68t371  A68_371 ;    /* PROC MODE372 */
struct A68t372{
A68_INT  Codesize;
A_PAD_INT(PAD_140)
A68_INT  Datasize;
A_PAD_INT(PAD_141)
A68_INT  Dynamicstacksize;
A_PAD_INT(PAD_142)
A68_INT  Staticstacksize;
A_PAD_INT(PAD_143)
};
typedef struct A68t372  A68_372 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t373 { A68_INT mode; union {
struct A68t123 * mode1;
struct A68t124 * mode2;
struct A68t125 * mode3;
} data; };
typedef struct A68t373  A68_373 ;    /* UNION(REF MODE123,REF MODE124,REF MODE125)  */
struct A68t374{
struct A68t134 * Wire;
A68_INT  Instance;
A_PAD_INT(PAD_144)
};
typedef struct A68t374  A68_374 ;    /* STRUCT(REF MODE134,INT)  */
struct A68t375 { A68_INT mode; union {
struct A68t142  mode1;
struct A68t374  mode2;
} data; };
typedef struct A68t375  A68_375 ;    /* UNION(MODE142,MODE374)  */
struct A68t376{
struct A68t375  Node;
A68_INT  Circuit;
A_PAD_INT(PAD_145)
A68_INT  Base;
A_PAD_INT(PAD_146)
};
typedef struct A68t376  A68_376 ;    /* STRUCT(MODE375,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t377,(struct A68t173 ,struct A68t121 *),(struct A68t173 ,struct A68t121 *,void *));
typedef struct A68t377  A68_377 ;    /* PROC(MODE173) MODE121 */

A_PROCEDURE(A68_BOOL ,A68t378,(struct A68t121 ,struct A68t121 ),(struct A68t121 ,struct A68t121 ,void *));
typedef struct A68t378  A68_378 ;    /* PROC(MODE121,MODE121) BOOL */

A_PROCEDURE(A68_BOOL ,A68t379,(struct A68t173 ,struct A68t173 ),(struct A68t173 ,struct A68t173 ,void *));
typedef struct A68t379  A68_379 ;    /* PROC(MODE173,MODE173) BOOL */

A_PROCEDURE(A68_BOOL ,A68t380,(struct A68t134 ,struct A68t134 ),(struct A68t134 ,struct A68t134 ,void *));
typedef struct A68t380  A68_380 ;    /* PROC(MODE134,MODE134) BOOL */

A_PROCEDURE(A68_BOOL ,A68t381,(struct A68t142 ,struct A68t142 ),(struct A68t142 ,struct A68t142 ,void *));
typedef struct A68t381  A68_381 ;    /* PROC(MODE142,MODE142) BOOL */

A_PROCEDURE(A68_BOOL ,A68t382,(struct A68t374 ,struct A68t374 ),(struct A68t374 ,struct A68t374 ,void *));
typedef struct A68t382  A68_382 ;    /* PROC(MODE374,MODE374) BOOL */

A_PROCEDURE(A68_BOOL ,A68t383,(struct A68t375 ,struct A68t375 ),(struct A68t375 ,struct A68t375 ,void *));
typedef struct A68t383  A68_383 ;    /* PROC(MODE375,MODE375) BOOL */

A_PROCEDURE(A68_BOOL ,A68t384,(struct A68t376 ,struct A68t376 ),(struct A68t376 ,struct A68t376 ,void *));
typedef struct A68t384  A68_384 ;    /* PROC(MODE376,MODE376) BOOL */

A_PROCEDURE(struct A68t129 *,A68t385,(struct A68t129 *,struct A68t129 *),(struct A68t129 *,struct A68t129 *,void *));
typedef struct A68t385  A68_385 ;    /* PROC(REF MODE129,REF MODE129) REF MODE129 */

A_PROCEDURE(A68_VOID ,A68t386,(struct A68t138 ,struct A68t138 ,struct A68t138 *),(struct A68t138 ,struct A68t138 ,struct A68t138 *,void *));
typedef struct A68t386  A68_386 ;    /* PROC(REF MODE138,REF MODE138) REF MODE138 */

A_PROCEDURE(A68_INT ,A68t387,(A68_VC ),(A68_VC ,void *));
typedef struct A68t387  A68_387 ;    /* PROC(REF MODE26) INT */

A_PROCEDURE(A68_CHAR ,A68t388,(struct A68t167 ,struct A68t36 ),(struct A68t167 ,struct A68t36 ,void *));
typedef struct A68t388  A68_388 ;    /* PROC(MODE167,MODE36) CHAR */

A_PROCEDURE(A68_VOID ,A68t389,(struct A68t167 ,A68_INT ,struct A68t36 ,A68_VC *),(struct A68t167 ,A68_INT ,struct A68t36 ,A68_VC *,void *));
typedef struct A68t389  A68_389 ;    /* PROC(MODE167,INT,MODE36) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t390,(struct A68t167 ,struct A68t36 ),(struct A68t167 ,struct A68t36 ,void *));
typedef struct A68t390  A68_390 ;    /* PROC(MODE167,MODE36) INT */

A_PROCEDURE(A68_VOID ,A68t391,(struct A68t167 ,struct A68t36 ,A68_VC *),(struct A68t167 ,struct A68t36 ,A68_VC *,void *));
typedef struct A68t391  A68_391 ;    /* PROC(MODE167,MODE36) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t392,(struct A68t167 ,struct A68t36 ),(struct A68t167 ,struct A68t36 ,void *));
typedef struct A68t392  A68_392 ;    /* PROC(MODE167,MODE36) BOOL */

A_PROCEDURE(A68_VOID ,A68t393,(A68_CHAR ,struct A68t167 ,struct A68t36 ),(A68_CHAR ,struct A68t167 ,struct A68t36 ,void *));
typedef struct A68t393  A68_393 ;    /* PROC(CHAR,MODE167,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t394,(A68_VC ,struct A68t167 ,struct A68t36 ),(A68_VC ,struct A68t167 ,struct A68t36 ,void *));
typedef struct A68t394  A68_394 ;    /* PROC(REF MODE26,MODE167,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t395,(A68_INT ,struct A68t167 ,struct A68t36 ),(A68_INT ,struct A68t167 ,struct A68t36 ,void *));
typedef struct A68t395  A68_395 ;    /* PROC(INT,MODE167,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t396,(A68_BOOL ,struct A68t167 ,struct A68t36 ),(A68_BOOL ,struct A68t167 ,struct A68t36 ,void *));
typedef struct A68t396  A68_396 ;    /* PROC(BOOL,MODE167,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t397,(struct A68t167 ,struct A68t36 ,struct A68t121 *),(struct A68t167 ,struct A68t36 ,struct A68t121 *,void *));
typedef struct A68t397  A68_397 ;    /* PROC(MODE167,MODE36) MODE121 */

A_PROCEDURE(A68_VOID ,A68t398,(struct A68t121 ,struct A68t167 ,struct A68t36 ),(struct A68t121 ,struct A68t167 ,struct A68t36 ,void *));
typedef struct A68t398  A68_398 ;    /* PROC(MODE121,MODE167,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t399,(struct A68t167 ,struct A68t36 ,struct A68t134 *),(struct A68t167 ,struct A68t36 ,struct A68t134 *,void *));
typedef struct A68t399  A68_399 ;    /* PROC(MODE167,MODE36) MODE134 */

A_PROCEDURE(A68_VOID ,A68t400,(struct A68t134 ,struct A68t167 ,struct A68t36 ),(struct A68t134 ,struct A68t167 ,struct A68t36 ,void *));
typedef struct A68t400  A68_400 ;    /* PROC(MODE134,MODE167,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t401,(struct A68t167 ,struct A68t36 ,struct A68t135 *),(struct A68t167 ,struct A68t36 ,struct A68t135 *,void *));
typedef struct A68t401  A68_401 ;    /* PROC(MODE167,MODE36) MODE135 */

A_PROCEDURE(A68_VOID ,A68t402,(struct A68t135 ,struct A68t167 ,struct A68t36 ),(struct A68t135 ,struct A68t167 ,struct A68t36 ,void *));
typedef struct A68t402  A68_402 ;    /* PROC(MODE135,MODE167,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t403,(struct A68t167 ,struct A68t36 ,struct A68t153 *),(struct A68t167 ,struct A68t36 ,struct A68t153 *,void *));
typedef struct A68t403  A68_403 ;    /* PROC(MODE167,MODE36) MODE153 */

A_PROCEDURE(A68_VOID ,A68t404,(struct A68t153 ,struct A68t167 ,struct A68t36 ),(struct A68t153 ,struct A68t167 ,struct A68t36 ,void *));
typedef struct A68t404  A68_404 ;    /* PROC(MODE153,MODE167,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t405,(struct A68t167 ,struct A68t36 ,struct A68t151 *),(struct A68t167 ,struct A68t36 ,struct A68t151 *,void *));
typedef struct A68t405  A68_405 ;    /* PROC(MODE167,MODE36) MODE151 */

A_PROCEDURE(A68_VOID ,A68t406,(struct A68t151 ,struct A68t167 ,struct A68t36 ),(struct A68t151 ,struct A68t167 ,struct A68t36 ,void *));
typedef struct A68t406  A68_406 ;    /* PROC(MODE151,MODE167,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t407,(struct A68t167 ,struct A68t36 ,struct A68t142 *),(struct A68t167 ,struct A68t36 ,struct A68t142 *,void *));
typedef struct A68t407  A68_407 ;    /* PROC(MODE167,MODE36) MODE142 */

A_PROCEDURE(A68_VOID ,A68t408,(struct A68t142 ,struct A68t167 ,struct A68t36 ),(struct A68t142 ,struct A68t167 ,struct A68t36 ,void *));
typedef struct A68t408  A68_408 ;    /* PROC(MODE142,MODE167,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t409,(struct A68t167 ,struct A68t36 ,struct A68t141 *),(struct A68t167 ,struct A68t36 ,struct A68t141 *,void *));
typedef struct A68t409  A68_409 ;    /* PROC(MODE167,MODE36) MODE141 */

A_PROCEDURE(A68_VOID ,A68t410,(struct A68t141 ,struct A68t167 ,struct A68t36 ),(struct A68t141 ,struct A68t167 ,struct A68t36 ,void *));
typedef struct A68t410  A68_410 ;    /* PROC(MODE141,MODE167,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t411,(struct A68t167 ,struct A68t36 ,struct A68t376 *),(struct A68t167 ,struct A68t36 ,struct A68t376 *,void *));
typedef struct A68t411  A68_411 ;    /* PROC(MODE167,MODE36) MODE376 */

A_PROCEDURE(A68_VOID ,A68t412,(struct A68t376 ,struct A68t167 ,struct A68t36 ),(struct A68t376 ,struct A68t167 ,struct A68t36 ,void *));
typedef struct A68t412  A68_412 ;    /* PROC(MODE376,MODE167,MODE36) VOID */
struct A68t414 ;

A_PROCEDURE(A68_VOID ,A68t413,(struct A68t414 ),(struct A68t414 ,void *));
typedef struct A68t413  A68_413 ;    /* PROC(MODE414) VOID */
struct A68t414 { A68_INT mode; union {
A68_BOOL  mode1;
struct A68t113  mode2;
A68_VC  mode3;
} data; };
typedef struct A68t414  A68_414 ;    /* UNION(BOOL,MODE113,MODE26)  */

A_PROCEDURE(A68_BOOL ,A68t415,(void),(void *));
typedef struct A68t415  A68_415 ;    /* PROC BOOL */

A_PROCEDURE(A68_VOID ,A68t416,(struct A68t185 *,A68_VC *),(struct A68t185 *,A68_VC *,void *));
typedef struct A68t416  A68_416 ;    /* PROC(REF MODE185) MODE26 */

A_PROCEDURE(A68_VOID ,A68t417,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t417  A68_417 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_BOOL ,A68t418,(struct A68t35 ,struct A68t35 ),(struct A68t35 ,struct A68t35 ,void *));
typedef struct A68t418  A68_418 ;    /* PROC(MODE35,MODE35) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t420);
typedef struct A68t420  A68_420 ;    /* STRUCT 4 CHAR */
struct A68t419{
struct A68t420  Access;
A_PAD_ISTRUCT(A68_420 ,PAD_147)
};
typedef struct A68t419  A68_419 ;    /* STRUCT(MODE420)  */

A_PROCEDURE(struct A68t185 *,A68t421,(A68_VC ,struct A68t419 ,struct A68t108 ),(A68_VC ,struct A68t419 ,struct A68t108 ,void *));
typedef struct A68t421  A68_421 ;    /* PROC(MODE26,MODE419,MODE108) REF MODE185 */

A_PROCEDURE(A68_VOID ,A68t422,(struct A68t185 *,struct A68t108 ),(struct A68t185 *,struct A68t108 ,void *));
typedef struct A68t422  A68_422 ;    /* PROC(REF MODE185,MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t423,(struct A68t185 *,A68_VC ,A68_INT *,struct A68t108 ,struct A68t35 *),(struct A68t185 *,A68_VC ,A68_INT *,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t423  A68_423 ;    /* PROC(REF MODE185,REF MODE26,REF INT,MODE108) MODE35 */

A_PROCEDURE(A68_VOID ,A68t424,(struct A68t185 *,A68_VC ,struct A68t108 ,struct A68t35 *),(struct A68t185 *,A68_VC ,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t424  A68_424 ;    /* PROC(REF MODE185,MODE26,MODE108) MODE35 */
struct A68t425{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_148)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_149)
A68_SINT  Device;
A_PAD_SINT(PAD_150)
A68_SINT  Links;
A_PAD_SINT(PAD_151)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_152)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_153)
A68_LINT  Size;
A_PAD_LINT(PAD_154)
A68_LINT  Accessed;
A_PAD_LINT(PAD_155)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_156)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_157)
};
typedef struct A68t425  A68_425 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t427 ;

A_PROCEDURE(struct A68t425 *,A68t426,(struct A68t427 ,struct A68t108 ),(struct A68t427 ,struct A68t108 ,void *));
typedef struct A68t426  A68_426 ;    /* PROC(MODE427,MODE108) REF MODE425 */
struct A68t427 { A68_INT mode; union {
struct A68t185 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t427  A68_427 ;    /* UNION(REF MODE185,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t428,(struct A68t185 *,A68_LINT *,struct A68t108 ,struct A68t35 *),(struct A68t185 *,A68_LINT *,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t428  A68_428 ;    /* PROC(REF MODE185,REF LONG INT,MODE108) MODE35 */

A_PROCEDURE(A68_VOID ,A68t429,(struct A68t185 *,A68_LINT ,struct A68t108 ,struct A68t35 *),(struct A68t185 *,A68_LINT ,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t429  A68_429 ;    /* PROC(REF MODE185,LONG INT,MODE108) MODE35 */

A_PROCEDURE(A68_VOID ,A68t430,(struct A68t185 *,struct A68t108 ,struct A68t35 *),(struct A68t185 *,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t430  A68_430 ;    /* PROC(REF MODE185,MODE108) MODE35 */

A_PROCEDURE(A68_VOID ,A68t431,(A68_VC ,struct A68t108 ,struct A68t35 *),(A68_VC ,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t431  A68_431 ;    /* PROC(MODE26,MODE108) MODE35 */

A_PROCEDURE(A68_LINT ,A68t432,(void),(void *));
typedef struct A68t432  A68_432 ;    /* PROC LONG INT */

A_PROCEDURE(A68_INT ,A68t433,(A68_VC ,struct A68t108 ),(A68_VC ,struct A68t108 ,void *));
typedef struct A68t433  A68_433 ;    /* PROC(MODE26,MODE108) INT */

A_PROCEDURE(A68_VOID ,A68t434,(A68_VC ,A68_VC ,struct A68t108 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t108 ,A68_VC *,void *));
typedef struct A68t434  A68_434 ;    /* PROC(MODE26,MODE26,MODE108) MODE26 */

A_PROCEDURE(A68_VOID ,A68t435,(A68_VC ,A68_VC ,struct A68t108 ,struct A68t35 *),(A68_VC ,A68_VC ,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t435  A68_435 ;    /* PROC(MODE26,MODE26,MODE108) MODE35 */
struct A68t436{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t436  A68_436 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t437,(A68_VC ,A68_VC ,struct A68t108 ,struct A68t436 *),(A68_VC ,A68_VC ,struct A68t108 ,struct A68t436 *,void *));
typedef struct A68t437  A68_437 ;    /* PROC(MODE26,MODE26,MODE108) MODE436 */

A_PROCEDURE(A68_VOID ,A68t438,(A68_VC *),(A68_VC *,void *));
typedef struct A68t438  A68_438 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t439,(struct A68t46 *),(struct A68t46 *,void *));
typedef struct A68t439  A68_439 ;    /* PROC MODE46 */

A_PROCEDURE(A68_VOID ,A68t440,(A68_VC ,struct A68t108 ,struct A68t46 *),(A68_VC ,struct A68t108 ,struct A68t46 *,void *));
typedef struct A68t440  A68_440 ;    /* PROC(MODE26,MODE108) MODE46 */
struct A68t442 ;

A_PROCEDURE(A68_VOID ,A68t441,(struct A68t442 ,struct A68t108 ),(struct A68t442 ,struct A68t108 ,void *));
typedef struct A68t441  A68_441 ;    /* PROC(MODE442,MODE108) VOID */
A_VECTOR(struct A68t443 ,A68t442);
typedef struct A68t442  A68_442 ;    /* VECTOR [] MODE443 */
struct A68t443{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_158)
};
typedef struct A68t443  A68_443 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t444,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t444  A68_444 ;    /* PROC(BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t445,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t445  A68_445 ;    /* PROC(REF MODE26) REF MODE26 */

A_PROCEDURE(A68_REAL ,A68t446,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t446  A68_446 ;    /* PROC(REAL) REAL */
struct A68t447{
A68_VC  Name;
A68_VC  Version;
A68_VC  Date;
A68_VC  Msg;
A68_VC  Sys_fault;
};
typedef struct A68t447  A68_447 ;    /* STRUCT(MODE26,MODE26,MODE26,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t448,(A68_BOOL ,struct A68t447 *),(A68_BOOL ,struct A68t447 *,void *));
typedef struct A68t448  A68_448 ;    /* PROC(BOOL) MODE447 */

A_PROCEDURE(A68_VOID ,A68t449,(struct A68t447 ,A68_BOOL ),(struct A68t447 ,A68_BOOL ,void *));
typedef struct A68t449  A68_449 ;    /* PROC(MODE447,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t450,(struct A68t447 *),(struct A68t447 *,void *));
typedef struct A68t450  A68_450 ;    /* PROC MODE447 */

A_PROCEDURE(A68_BOOL ,A68t451,(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ),(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ,void *));
typedef struct A68t451  A68_451 ;    /* PROC(MODE26,MODE26,MODE26,REF REF MODE26,BOOL) BOOL */
struct A68t453 ;
struct A68t454 ;

A_PROCEDURE(A68_VOID ,A68t452,(A68_VC ,struct A68t119 ,struct A68t453 ,struct A68t454 ),(A68_VC ,struct A68t119 ,struct A68t453 ,struct A68t454 ,void *));
typedef struct A68t452  A68_452 ;    /* PROC(MODE26,MODE119,MODE453,MODE454) VOID */

A_PROCEDURE(A68_BOOL ,A68t453,(A68_VC ,struct A68t438 ),(A68_VC ,struct A68t438 ,void *));
typedef struct A68t453  A68_453 ;    /* PROC(MODE26,MODE438) BOOL */

A_PROCEDURE(A68_BOOL ,A68t454,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t454  A68_454 ;    /* PROC(BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t455,(struct A68t108 ),(struct A68t108 ,void *));
typedef struct A68t455  A68_455 ;    /* PROC(MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t456,(struct A68t455 ,struct A68t108 ),(struct A68t455 ,struct A68t108 ,void *));
typedef struct A68t456  A68_456 ;    /* PROC(MODE455,MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t457,(struct A68t119 ),(struct A68t119 ,void *));
typedef struct A68t457  A68_457 ;    /* PROC(MODE119) VOID */

A_PROCEDURE(A68_VOID ,A68t458,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t458  A68_458 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,52,A68t459);
typedef struct A68t459  A68_459 ;    /* STRUCT 52 CHAR */
struct A68t460{
A68_INT  Fanoutto;
A_PAD_INT(PAD_159)
struct A68t460 * Tail;
};
typedef struct A68t460  A68_460 ;    /* STRUCT(INT,REF MODE460)  */

A_PROCEDURE(A68_VOID ,A68t461,(A68_INT ,struct A68t460 ),(A68_INT ,struct A68t460 ,void *));
typedef struct A68t461  A68_461 ;    /* PROC(INT,MODE460) VOID */

A_PROCEDURE(A68_VOID ,A68t462,(A68_INT ,struct A68t375 *),(A68_INT ,struct A68t375 *,void *));
typedef struct A68t462  A68_462 ;    /* PROC(INT) MODE375 */

A_PROCEDURE(A68_VOID ,A68t463,(A68_VC ,struct A68t158 ,A68_INT ,A68_BOOL ),(A68_VC ,struct A68t158 ,A68_INT ,A68_BOOL ,void *));
typedef struct A68t463  A68_463 ;    /* PROC(REF MODE26,REF MODE158,INT,BOOL) VOID */
A_ISTRUCT(A68_CHAR ,30,A68t464);
typedef struct A68t464  A68_464 ;    /* STRUCT 30 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t465);
typedef struct A68t465  A68_465 ;    /* STRUCT 10 CHAR */

A_PROCEDURE(A68_VOID ,A68t466,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t466  A68_466 ;    /* PROC(BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t467,(A68_VC ,struct A68t36 ,struct A68t375 *),(A68_VC ,struct A68t36 ,struct A68t375 *,void *));
typedef struct A68t467  A68_467 ;    /* PROC(REF MODE26,MODE36) MODE375 */
A_ISTRUCT(A68_CHAR ,18,A68t468);
typedef struct A68t468  A68_468 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,41,A68t469);
typedef struct A68t469  A68_469 ;    /* STRUCT 41 CHAR */

A_PROCEDURE(A68_VOID ,A68t470,(A68_INT *,A68_BOOL *,struct A68t36 ),(A68_INT *,A68_BOOL *,struct A68t36 ,void *));
typedef struct A68t470  A68_470 ;    /* PROC(REF INT,REF BOOL,MODE36) VOID */

A_PROCEDURE(A68_BOOL ,A68t471,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t471  A68_471 ;    /* PROC(INT,INT) BOOL */
A_ISTRUCT(A68_CHAR ,6,A68t472);
typedef struct A68t472  A68_472 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t473);
typedef struct A68t473  A68_473 ;    /* STRUCT 4 MODE52 */
A_ISTRUCT(A68_CHAR ,29,A68t474);
typedef struct A68t474  A68_474 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t475);
typedef struct A68t475  A68_475 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(A68_CHAR ,46,A68t476);
typedef struct A68t476  A68_476 ;    /* STRUCT 46 CHAR */
A_ISTRUCT(A68_CHAR ,37,A68t477);
typedef struct A68t477  A68_477 ;    /* STRUCT 37 CHAR */

A_PROCEDURE(A68_VOID ,A68t478,(A68_INT ,struct A68t460 **),(A68_INT ,struct A68t460 **,void *));
typedef struct A68t478  A68_478 ;    /* PROC(INT,REF REF MODE460) VOID */

A_PROCEDURE(A68_VOID ,A68t479,(struct A68t460 *,struct A68t167 ,struct A68t36 ),(struct A68t460 *,struct A68t167 ,struct A68t36 ,void *));
typedef struct A68t479  A68_479 ;    /* PROC(REF MODE460,MODE167,MODE36) VOID */

A_PROCEDURE(struct A68t460 *,A68t480,(struct A68t167 ,struct A68t36 ),(struct A68t167 ,struct A68t36 ,void *));
typedef struct A68t480  A68_480 ;    /* PROC(MODE167,MODE36) REF MODE460 */
struct A68t481{
A68_INT  Fanoutfrom;
A_PAD_INT(PAD_160)
struct A68t460 * Sinks;
struct A68t481 * Tail;
};
typedef struct A68t481  A68_481 ;    /* STRUCT(INT,REF MODE460,REF MODE481)  */

A_PROCEDURE(A68_VOID ,A68t482,(A68_INT ,struct A68t460 *,struct A68t481 **),(A68_INT ,struct A68t460 *,struct A68t481 **,void *));
typedef struct A68t482  A68_482 ;    /* PROC(INT,REF MODE460,REF REF MODE481) VOID */

A_PROCEDURE(A68_VOID ,A68t483,(struct A68t481 *,struct A68t167 ,struct A68t36 ),(struct A68t481 *,struct A68t167 ,struct A68t36 ,void *));
typedef struct A68t483  A68_483 ;    /* PROC(REF MODE481,MODE167,MODE36) VOID */

A_PROCEDURE(struct A68t481 *,A68t484,(struct A68t167 ,struct A68t36 ),(struct A68t167 ,struct A68t36 ,void *));
typedef struct A68t484  A68_484 ;    /* PROC(MODE167,MODE36) REF MODE481 */
struct A68t485{
A68_INT  Probebaseoffset;
A_PAD_INT(PAD_161)
A68_INT  Connectedto;
A_PAD_INT(PAD_162)
struct A68t481 * Inputinstances;
struct A68t485 * Tail;
};
typedef struct A68t485  A68_485 ;    /* STRUCT(INT,INT,REF MODE481,REF MODE485)  */

A_PROCEDURE(A68_VOID ,A68t486,(A68_INT ,A68_INT ,struct A68t481 *),(A68_INT ,A68_INT ,struct A68t481 *,void *));
typedef struct A68t486  A68_486 ;    /* PROC(INT,INT,REF MODE481) VOID */

A_PROCEDURE(struct A68t485 *,A68t487,(A68_INT ),(A68_INT ,void *));
typedef struct A68t487  A68_487 ;    /* PROC(INT) REF MODE485 */
struct A68t488{
A68_INT  Base;
A_PAD_INT(PAD_163)
A68_INT  Circuit;
A_PAD_INT(PAD_164)
};
typedef struct A68t488  A68_488 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t489,(A68_INT ,A68_INT ,A68_INT ,struct A68t488 *),(A68_INT ,A68_INT ,A68_INT ,struct A68t488 *,void *));
typedef struct A68t489  A68_489 ;    /* PROC(INT,INT,INT) MODE488 */

A_PROCEDURE(A68_VOID ,A68t490,(A68_INT ,struct A68t186 *),(A68_INT ,struct A68t186 *,void *));
typedef struct A68t490  A68_490 ;    /* PROC(INT) MODE186 */

A_PROCEDURE(A68_VOID ,A68t491,(struct A68t460 **,A68_INT ,struct A68t187 ,struct A68t158 ,A68_INT ,A68_INT ),(struct A68t460 **,A68_INT ,struct A68t187 ,struct A68t158 ,A68_INT ,A68_INT ,void *));
typedef struct A68t491  A68_491 ;    /* PROC(REF REF MODE460,INT,REF MODE187,REF MODE158,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t492,(struct A68t376 ,struct A68t376 ),(struct A68t376 ,struct A68t376 ,void *));
typedef struct A68t492  A68_492 ;    /* PROC(MODE376,MODE376) VOID */

A_PROCEDURE(A68_VOID ,A68t493,(struct A68t376 ),(struct A68t376 ,void *));
typedef struct A68t493  A68_493 ;    /* PROC(MODE376) VOID */
A_ISTRUCT(A68_CHAR ,13,A68t494);
typedef struct A68t494  A68_494 ;    /* STRUCT 13 CHAR */

A_PROCEDURE(A68_VOID ,A68t495,(struct A68t376 ,struct A68t376 *),(struct A68t376 ,struct A68t376 *,void *));
typedef struct A68t495  A68_495 ;    /* PROC(MODE376) MODE376 */

A_PROCEDURE(A68_VOID ,A68t496,(A68_BOOL ,struct A68t138 *),(A68_BOOL ,struct A68t138 *,void *));
typedef struct A68t496  A68_496 ;    /* PROC(BOOL) MODE138 */

A_PROCEDURE(A68_INT ,A68t497,(A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t497  A68_497 ;    /* PROC(INT,INT,INT) INT */

A_PROCEDURE(A68_VOID ,A68t498,(struct A68t376 ,A68_INT ,A68_INT ),(struct A68t376 ,A68_INT ,A68_INT ,void *));
typedef struct A68t498  A68_498 ;    /* PROC(MODE376,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t499,(struct A68t32 ,A68_INT ,A68_INT ),(struct A68t32 ,A68_INT ,A68_INT ,void *));
typedef struct A68t499  A68_499 ;    /* PROC(MODE32,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t500,(A68_VC ,struct A68t36 ,struct A68t376 *),(A68_VC ,struct A68t36 ,struct A68t376 *,void *));
typedef struct A68t500  A68_500 ;    /* PROC(REF MODE26,MODE36) MODE376 */

A_PROCEDURE(A68_VOID ,A68t501,(struct A68t376 ,A68_VC ),(struct A68t376 ,A68_VC ,void *));
typedef struct A68t501  A68_501 ;    /* PROC(MODE376,REF MODE26) VOID */
struct A68t502{
A68_INT  Fnno;
A_PAD_INT(PAD_165)
A68_INT  Offset;
A_PAD_INT(PAD_166)
struct A68t502 * Tail;
};
typedef struct A68t502  A68_502 ;    /* STRUCT(INT,INT,REF MODE502)  */

A_PROCEDURE(struct A68t502 *,A68t503,(struct A68t376 ),(struct A68t376 ,void *));
typedef struct A68t503  A68_503 ;    /* PROC(MODE376) REF MODE502 */
struct A68t504{
struct A68t376  Function;
struct A68t504 * Tail;
};
typedef struct A68t504  A68_504 ;    /* STRUCT(MODE376,REF MODE504)  */

A_PROCEDURE(struct A68t460 *,A68t505,(struct A68t460 *,struct A68t158 ,struct A68t187 ,A68_INT ,A68_INT ),(struct A68t460 *,struct A68t158 ,struct A68t187 ,A68_INT ,A68_INT ,void *));
typedef struct A68t505  A68_505 ;    /* PROC(REF MODE460,REF MODE158,REF MODE187,INT,INT) REF MODE460 */

A_PROCEDURE(A68_VOID ,A68t506,(struct A68t376 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t187 ,struct A68t461 ),(struct A68t376 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t187 ,struct A68t461 ,void *));
typedef struct A68t506  A68_506 ;    /* PROC(MODE376,INT,INT,INT,INT,REF MODE187,MODE461) VOID */

A_PROCEDURE(A68_BOOL ,A68t507,(struct A68t376 ),(struct A68t376 ,void *));
typedef struct A68t507  A68_507 ;    /* PROC(MODE376) BOOL */

A_PROCEDURE(A68_INT ,A68t508,(struct A68t376 ),(struct A68t376 ,void *));
typedef struct A68t508  A68_508 ;    /* PROC(MODE376) INT */

A_PROCEDURE(A68_VOID ,A68t509,(struct A68t376 ,A68_INT ),(struct A68t376 ,A68_INT ,void *));
typedef struct A68t509  A68_509 ;    /* PROC(MODE376,INT) VOID */
A_ISTRUCT(A68_CHAR ,11,A68t510);
typedef struct A68t510  A68_510 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(struct A68t52 ,9,A68t511);
typedef struct A68t511  A68_511 ;    /* STRUCT 9 MODE52 */

A_PROCEDURE(A68_VOID ,A68t512,(struct A68t185 *,A68_INT ,struct A68t43 ,struct A68t36 ,struct A68t375 *),(struct A68t185 *,A68_INT ,struct A68t43 ,struct A68t36 ,struct A68t375 *,void *));
typedef struct A68t512  A68_512 ;    /* PROC(REF MODE185,INT,MODE43,MODE36) MODE375 */
A_ISTRUCT(A68_CHAR ,44,A68t513);
typedef struct A68t513  A68_513 ;    /* STRUCT 44 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t514);
typedef struct A68t514  A68_514 ;    /* STRUCT 9 CHAR */

A_PROCEDURE(A68_VOID ,A68t515,(A68_INT *,A68_VC *,struct A68t167 ,struct A68t167 ,struct A68t36 ),(A68_INT *,A68_VC *,struct A68t167 ,struct A68t167 ,struct A68t36 ,void *));
typedef struct A68t515  A68_515 ;    /* PROC(REF INT,REF REF MODE26,MODE167,MODE167,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t516,(A68_INT ,A68_INT ,A68_VC ,struct A68t167 ,struct A68t167 ,struct A68t43 ,struct A68t36 ,struct A68t375 *),(A68_INT ,A68_INT ,A68_VC ,struct A68t167 ,struct A68t167 ,struct A68t43 ,struct A68t36 ,struct A68t375 *,void *));
typedef struct A68t516  A68_516 ;    /* PROC(INT,INT,REF MODE26,MODE167,MODE167,MODE43,MODE36) MODE375 */
A_ISTRUCT(A68_CHAR ,15,A68t517);
typedef struct A68t517  A68_517 ;    /* STRUCT 15 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from osinterface --- */
extern A68_419  BOBAOSI_update_access;
extern A68_419  FOBAOSI_update_truncate_access;
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
extern A68_34 * KEAAOST_screen;
extern A68_34 * LEAAOST_out;
/* --- End of imports from osinterface --- */


/* --- Imports from testmode --- */
extern A68_113  OHBAOST_testmode;
/* --- End of imports from testmode --- */


/* --- Imports from kememory --- */
extern A68_INT  KXOASIM_allocateammemory(A68_INT );
extern A68_INT  OXOASIM_extendammemory(A68_INT ,A68_INT );
extern A68_VOID  RXOASIM_freeammemory(A68_INT );
extern A68_VOID  UXOASIM_savememorymanagement(struct A68t167 ,struct A68t36 );
extern A68_VOID  AYOASIM_restorememorymanagement(struct A68t167 ,struct A68t36 );
/* --- End of imports from kememory --- */


/* --- Imports from kesave --- */
extern A68_INT  LGBASIM_readint(struct A68t167 ,struct A68t36 );
extern A68_VOID  RGBASIM_readid(struct A68t167 ,struct A68t36 ,A68_VC *);
extern A68_VOID  PHBASIM_writeint(A68_INT ,struct A68t167 ,struct A68t36 );
extern A68_VOID  BIBASIM_writeid(A68_VC ,struct A68t167 ,struct A68t36 );
extern A68_VOID  CUBASIM_readmnode(struct A68t167 ,struct A68t36 ,A68_376 *);
extern A68_VOID  JUBASIM_writemnode(struct A68t376 ,struct A68t167 ,struct A68t36 );
/* --- End of imports from kesave --- */


/* --- Imports from kebasics --- */
extern A68_121  ZSAASIM_nullstype;
extern A68_BOOL  CVAASIM_(struct A68t121 ,struct A68t121 );
extern A68_BOOL  AABASIM_(struct A68t376 ,struct A68t376 );
extern A68_VOID  PBBASIM_unsignedtoword(A68_INT ,A68_VC );
extern A68_VOID  NKDAOST_sysfault(A68_VC );
/* --- End of imports from kebasics --- */


/* --- Imports from keambasics --- */
#define DFMASIM_evaluateaction 3
#define EFMASIM_saveaction 4
#define FFMASIM_restoreaction 5
#define GFMASIM_terminateaction 6
#define MFNASIM_softinterrupt 1
#define NFNASIM_hardinterrupt 2
#define OFNASIM_sqrterror 4
#define PFNASIM_arithmeticerror 8
extern A68_VOID  SGNASIM_aminitialise(struct A68t43 ,A68_INT ,struct A68t36 );
extern A68_VOID  AINASIM_amclosedown(struct A68t36 );
extern A68_INT  DENASIM_ws;
extern A68_INT  GENASIM_sizeunit;
extern A68_355  FENASIM_up;
extern A68_VOID  ACNASIM_cgpoke(A68_VC ,A68_INT );
extern A68_VOID  HCNASIM_cgpeek(A68_INT ,A68_INT ,A68_VC *);
extern A68_VOID  ADNASIM_cgsimulate(A68_INT ,A68_369 *);
extern A68_VOID  NDNASIM_cgclearinterrupts(void);
extern A68_VOID  XOMASIM_cgsavestate(struct A68t167 ,struct A68t167 ,struct A68t36 );
extern A68_VOID  LPMASIM_cgrestorestate(struct A68t167 ,struct A68t167 ,struct A68t36 );
extern A68_VOID  ROMASIM_cgsizes(A68_372 *);
extern A68_VOID  OCNASIM_cgpokeint(A68_INT ,A68_INT );
extern A68_INT  UCNASIM_cgpeekint(A68_INT );
/* --- End of imports from keambasics --- */


/* --- Imports from keamstandard --- */
extern A68_INT  MYOASIM_globaltime;
extern A68_INT  PYOASIM_globalinitialised;
extern A68_INT  QYOASIM_globalaction;
extern A68_INT  YYOASIM_globalstartinitlist;
extern A68_INT  ZYOASIM_globalendinitlist;
extern A68_INT  AZOASIM_globalstartinstlist;
extern A68_INT  BZOASIM_globalendinstlist;
extern A68_INT  VYOASIM_globalmonitorchanged;
extern A68_INT  XYOASIM_globalunitdelevent;
extern A68_INT  UYOASIM_globalcomboutputsstable;
/* --- End of imports from keamstandard --- */


/* --- Imports from keamgen --- */
extern A68_VOID  NIXASIM_amlocationsinitialise(void);
extern A68_VOID  RIXASIM_translateinitialise(struct A68t43 ,A68_INT ,struct A68t36 );
/* --- End of imports from keamgen --- */


/* --- Imports from keinstance --- */
extern A68_187 * AMXASIM_instanceptrs;
extern A68_188  BMXASIM_probeinstanceptrs;
extern A68_INT  MNXASIM_cpinstanceno;
extern A68_VOID  HAABSIM_removeinstances(void);
extern A68_VOID  YAABSIM_saveinstanceptrs(struct A68t167 ,struct A68t36 );
extern A68_VOID  KBABSIM_restoreinstanceptrs(struct A68t167 ,struct A68t36 );
/* --- End of imports from keinstance --- */


/* --- Imports from ketranslate --- */
#define UDABSIM_simdecl 2
#define VDABSIM_probedecl 3
#define WDABSIM_simandprobedecl 4
extern A68_INT  AHABSIM_translate(struct A68t185 *,A68_INT ,struct A68t43 ,struct A68t36 );
/* --- End of imports from ketranslate --- */


/* --- Imports from kesignals --- */
extern A68_129 * ABOASIM_flattentype(struct A68t121 );
/* --- End of imports from kesignals --- */


/* --- Imports from kesymbols --- */
extern A68_VOID  OXCASIM_initialisetables(void);
extern A68_VOID  VYCASIM_removetables(void);
extern A68_BITS  UHCASIM_unitdelay;
#define OHCASIM_aliensort 0X40U
extern A68_INT  NRCASIM_lookupname(A68_VC ,A68_INT ,A68_INT );
extern A68_VOID  GSCASIM_rawlookupfunction(A68_INT ,A68_151 *);
extern A68_VOID  ZTCASIM_lookupuserid(A68_INT ,A68_VC *);
extern A68_VOID  QUCASIM_lookupinputsizes(A68_INT ,A68_32 *);
extern A68_VOID  FVCASIM_lookupinputaliases(A68_INT ,A68_INT ,A68_158 *);
extern A68_VOID  MWCASIM_lookupoutputs(A68_INT ,A68_134 *);
extern A68_VOID  DWCASIM_lookupshape(A68_INT ,A68_136 *);
extern A68_INT  JWCASIM_lookupaninstance(A68_INT );
extern A68_INT  BXCASIM_lookuplastinstance(A68_INT );
extern A68_VOID  EZCASIM_rawinputs(struct A68t151 ,A68_134 *);
extern A68_VOID  GBDASIM_savetables(struct A68t167 ,struct A68t36 );
extern A68_VOID  RCDASIM_restoretables(struct A68t167 ,struct A68t36 );
/* --- End of imports from kesymbols --- */


/* --- Imports from options --- */
extern A68_BOOL  EBAAOST_(struct A68t113 ,struct A68t113 );
extern A68_113  OCAAOST_null_options;
/* --- End of imports from options --- */


/* --- Imports from basics --- */
extern A68_VOID  RSCAOST_makeid(A68_VC ,A68_VC *);
extern A68_VC  TTCAOST_nullid;
/* --- End of imports from basics --- */


/* --- Imports from putstrings --- */
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void PCAAOST(void);   /* osinterface */
extern void QFBAOST(void);   /* testmode */
extern void KSOASIM(void);   /* kememory */
extern void EFBASIM(void);   /* kesave */
extern void JSAASIM(void);   /* kebasics */
extern void XDNASIM(void);   /* keambasics */
extern void HYOASIM(void);   /* keamstandard */
extern void IIXASIM(void);   /* keamgen */
extern void MLXASIM(void);   /* keinstance */
extern void BDABSIM(void);   /* ketranslate */
extern void NYNASIM(void);   /* kesignals */
extern void TCCASIM(void);   /* kesymbols */
extern void BAAAOST(void);   /* options */
extern void JSCAOST(void);   /* basics */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_459   BNABSIM = {"$Id: kerti.a68,v 34.2 1995/03/29 13:04:54 ella Exp $"}; 
A_GISVEC(A68_VC ,CNABSIM,BNABSIM,52)
#define DNABSIM_nilsinkinstancelist (A68_460 *)A68_NIL
static A68_INT  FOABSIM_simtime;
static A68_VC  GOABSIM_sfid;
static A68_INT  HOABSIM_sfno;
static A68_VC  IOABSIM_oldinputptrs;
static A68_119  KOABSIM_unfreezeallinstances;
static A68_464   YQABSIM = {"set function: fanout too great"}; 
A_GISVEC(A68_VC ,ZQABSIM,YQABSIM,30)
#define KRABSIM_clear 0
#define LRABSIM_set 1
static A68_465   MRABSIM = {"$Genericid"}; 
A_GISVEC(A68_VC ,NRABSIM,MRABSIM,10)
static A68_466  FSABSIM_clearamprobelists;
static A68_119  GSABSIM_destroyallprobeinstances;
static A68_468   MSABSIM = {"function not found"}; 
A_GISVEC(A68_VC ,NSABSIM,MSABSIM,18)
static A68_469   OSABSIM = {"function not instantiated in this circuit"}; 
A_GISVEC(A68_VC ,PSABSIM,OSABSIM,41)
static A68_472   ITABSIM = {"Cancel"}; 
A_GISVEC(A68_VC ,JTABSIM,ITABSIM,6)
static A68_472   OTABSIM = {"Cancel"}; 
A_GISVEC(A68_VC ,PTABSIM,OTABSIM,6)
static A68_474   VTABSIM = {"Interrupted, values not final"}; 
A_GISVEC(A68_VC ,WTABSIM,VTABSIM,29)
static A68_472   YTABSIM = {"Cancel"}; 
A_GISVEC(A68_VC ,ZTABSIM,YTABSIM,6)
static A68_476   GUABSIM = {"SQRT of a negative number, values not reliable"}; 
A_GISVEC(A68_VC ,HUABSIM,GUABSIM,46)
static A68_477   OUABSIM = {"Arithmetic error, values not reliable"}; 
A_GISVEC(A68_VC ,PUABSIM,OUABSIM,37)
#define JVABSIM_nilsourceinstancelist (A68_481 *)A68_NIL
#define DWABSIM_nilprobelist (A68_485 *)A68_NIL
static A68_485 * EWABSIM_probelist;
static A68_494   KABBSIM = {"bad probe box"}; 
A_GISVEC(A68_VC ,LABBSIM,KABBSIM,13)
#define TEBBSIM_setflag 1
static A68_468   LHBBSIM = {"Function not found"}; 
A_GISVEC(A68_VC ,MHBBSIM,LHBBSIM,18)
#define FIBBSIM_setflag 1
#define HKBBSIM_setflag 1
#define WKBBSIM_nilsourcelist (A68_502 *)A68_NIL
#define VLBBSIM_nilfrozenlist (A68_504 *)A68_NIL
static A68_504 * WLBBSIM_frozenlist;
#define UOBBSIM_setflag 1
#define VQBBSIM_resetflag 0
#define QRBBSIM_setflag 1
#define RRBBSIM_resetflag 0
static A68_510   LTBBSIM = {"Code size: "}; 
A_GISVEC(A68_VC ,MTBBSIM,LTBBSIM,11)
static A68_472   RTBBSIM = {" bytes"}; 
A_GISVEC(A68_VC ,STBBSIM,RTBBSIM,6)
static A68_510   XTBBSIM = {"Data size: "}; 
A_GISVEC(A68_VC ,YTBBSIM,XTBBSIM,11)
static A68_472   DUBBSIM = {" bytes"}; 
A_GISVEC(A68_VC ,EUBBSIM,DUBBSIM,6)
static A68_513   ZUBBSIM = {"kerti: size unit too small for peek and poke"}; 
A_GISVEC(A68_VC ,AVBBSIM,ZUBBSIM,44)
static A68_VC  JVBBSIM_signature;
static A68_514   LVBBSIM = {"192837465"}; 
A_GISVEC(A68_VC ,MVBBSIM,LVBBSIM,9)
static A68_517   QWBBSIM = {"Bad status file"}; 
A_GISVEC(A68_VC ,RWBBSIM,QWBBSIM,15)
typedef struct   /* env of non-global proc */
{
A68_INT  ROABSIM_fanoutlist;
A_PAD_INT(PAD_167)
A68_INT * NOABSIM_fanoutcount;
A68_BOOL * SOABSIM_doneaunitdelfanout;
A68_463  XOABSIM_joinupinputaliases;
} ZOABSIM_joinupinputaliases;
typedef struct   /* env of non-global proc */
{
A68_INT  XPABSIM_ninputs;
A_PAD_INT(PAD_168)
} BQABSIM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} RQABSIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * HQABSIM_pend;
A68_INT  GQABSIM_pstart;
A_PAD_INT(PAD_169)
} DRABSIM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} BBBBSIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * QCBBSIM_count;
} XCBBSIM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} PIBBSIM_generator;
typedef struct   /* env of non-global proc */
{
A68_36  Flt;
} YUBBSIM_faultclosedown;
typedef struct   /* env of non-global proc */
{
A68_36  Flt;
} HWBBSIM_faultclosedown;
typedef struct   /* env of non-global proc */
{
int dummy;
} LWBBSIM_generator;

A_STATIC A68_VOID  GNABSIM_addtofanout(A68_INT  Sourcefanout, A68_460  Instancelist);

A_STATIC A68_VOID  SNABSIM_removefromfanout(A68_INT  Sourcefanout, A68_460  Instancelist);

A_STATIC A68_VOID  MOABSIM_setfunction(A68_INT  Symbolno, A68_375  *ReturnedValue);

A_STATIC A68_VOID  YOABSIM_joinupinputaliases(A68_VC  Input, A68_158  Aliases, A68_INT  Instanceno, A68_BOOL  Circuitparameters, void *NonLocals);

A_STATIC A68_VOID  AQABSIM_generator(A68_BOOL  YPABSIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QQABSIM_generator(A68_BOOL  OQABSIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CRABSIM_generator(A68_BOOL  ARABSIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  JSABSIM_rawselectfunction(A68_VC  Function, A68_36  Flt, A68_375  *ReturnedValue);

A68_VOID  VSABSIM_rawsimulate(A68_INT * Increment, A68_BOOL * Stable, A68_36  Flt);

A_STATIC A68_BOOL  ETABSIM_bya(A68_INT  W, A68_INT  Level);

A_STATIC A68_VOID  TUABSIM_addsinkinstance(A68_INT  Fanoutto, A68_460 ** List);

A_STATIC A68_VOID  ZUABSIM_savesinkinstancelist(A68_460 * Sinkinstancelist, A68_167  Ferry, A68_36  Flt);

A_STATIC A68_460 * EVABSIM_restoresinkinstancelist(A68_167  Ferry, A68_36  Flt);

A_STATIC A68_VOID  NVABSIM_addsourceinstance(A68_INT  Fanoutfrom, A68_460 * Sinks, A68_481 ** List);

A_STATIC A68_VOID  TVABSIM_savesourceinstancelist(A68_481 * Sourceinstancelist, A68_167  Ferry, A68_36  Flt);

A_STATIC A68_481 * YVABSIM_restoresourceinstancelist(A68_167  Ferry, A68_36  Flt);

A_STATIC A68_VOID  FWABSIM_clearprobelist(void);

A_STATIC A68_VOID  JWABSIM_addprobe(A68_INT  Base, A68_INT  Line, A68_481 * Inputinstances);

A_STATIC A68_485 * NWABSIM_delprobe(A68_INT  Base);

A_STATIC A68_VOID  UWABSIM_saveprobes(A68_167  Ferry, A68_36  Flt);

A_STATIC A68_VOID  ZWABSIM_restoreprobes(A68_167  Ferry, A68_36  Flt);

A_STATIC A68_VOID  FXABSIM_findprobebasecircuit(A68_INT  Targetoffset, A68_INT  Globalstartlist, A68_INT  Globalendlist, A68_488  *ReturnedValue);

A_STATIC A68_VOID  RXABSIM_instance(A68_INT  Loc, A68_186  *ReturnedValue);

A_STATIC A68_VOID  JYABSIM_joinupprobeinputaliases(A68_460 ** Sinks, A68_INT  Input, A68_187  Probeinstptrs, A68_158  Aliases, A68_INT  Base, A68_INT  Instanceno);

A_STATIC A68_VOID  SYABSIM_connectprobe(A68_376  Mprobe, A68_376  Mline);

A_STATIC A68_VOID  IABBSIM_disconnectprobe(A68_376  Mprobe);

A68_VOID  OABBSIM_rawprobeinputnode(A68_376  Mprobe, A68_376  *ReturnedValue);

A_STATIC A68_VOID  ABBBSIM_generator(A68_BOOL  YABBSIM_anonymous, A68_138  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  NBBBSIM_connectsto(A68_INT  Base);

A_STATIC A68_VOID  WBBBSIM_moveelementupprobelist(A68_INT  Sourcebase, A68_INT  Sinkbase, A68_INT  Globalstartlist, A68_INT  Globalendlist);

A_STATIC A68_VOID  KCBBSIM_reorderinstanceevaluations(A68_INT  Sourcebase, A68_INT  Sinkbase);

A68_VOID  NCBBSIM_rawreconnectprobeinstance(A68_376  Mprobe, A68_376  Mline);

A68_VOID  PCBBSIM_rawlistprobesconnectedto(A68_INT  Base, A68_32  *ReturnedValue);

A_STATIC A68_VOID  WCBBSIM_generator(A68_BOOL  UCBBSIM_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A68_BOOL  JDBBSIM_rawprobetypematchesline(A68_376  Mprobe, A68_376  Mline);

A_STATIC A68_INT  DEBBSIM_findprobeinstance(A68_INT  Circuit, A68_INT  Globalstartlist, A68_INT  Globalendlist);

A_STATIC A68_INT  LEBBSIM_rawcreateprobeinstance(A68_INT  Circuit);

A68_VOID  OFBBSIM_rawdestroyprobeinstance(A68_INT  Circuit, A68_INT  Base);

A_STATIC A68_VOID  DGBBSIM_anonymous(A68_BOOL  Init);

A_STATIC A68_VOID  IGBBSIM_addtoamprobelist(A68_376  Mfn, A68_INT  Globalstartlist, A68_INT  Globalendlist);

A_STATIC A68_VOID  SGBBSIM_delfromamprobelist(A68_32  Probebases, A68_INT  Globalstartlist, A68_INT  Globalendlist);

A68_VOID  JHBBSIM_rawinitialiseprobeinstance(A68_VC  Function, A68_36  Flt, A68_376  *ReturnedValue);

A68_VOID  ZHBBSIM_rawreinitialiseprobeinstance(A68_376  Fn);

A68_VOID  HIBBSIM_rawstopprobeinstances(A68_32  Bases);

A_STATIC A68_VOID  IIBBSIM_anonymous(void);

A_STATIC A68_VOID  OIBBSIM_generator(A68_BOOL  MIBBSIM_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A68_VOID  BJBBSIM_rawpeeksignalvalue(A68_376  Mloc, A68_VC  Answer);

A68_VOID  ZJBBSIM_rawpokesignalvalue(A68_376  Mloc, A68_VC  Val);

A_STATIC A68_502 * YKBBSIM_sources(A68_376  Mline);

A_STATIC A68_VOID  ZLBBSIM_savefrozenlist(A68_167  Ferry, A68_36  Flt);

A_STATIC A68_VOID  EMBBSIM_restorefrozenlist(A68_167  Ferry, A68_36  Flt);

A_STATIC A68_460 * PMBBSIM_findinputaliases(A68_460 * Inputs, A68_158  Aliases, A68_187  Instanceptrs, A68_INT  Instanceno, A68_INT  Flagval);

A_STATIC A68_VOID  GNBBSIM_actonallfanouts(A68_376  Mline, A68_INT  Fnno, A68_INT  Instanceno, A68_INT  Evalflag, A68_INT  Flagval, A68_187  Instptrs, A68_461  Action);

A68_BOOL  SNBBSIM_rawunfreezeinstance(A68_376  Function);

A68_INT  ZOBBSIM_rawfreezeinstance(A68_376  Function);

A_STATIC A68_VOID  ERBBSIM_anonymous(void);

A68_VOID  IRBBSIM_rawpokesignalvalueandfanout(A68_376  Mloc, A68_VC  Val);

A68_INT  MSBBSIM_rawmakeflagfanouts(A68_376  Mline);

A68_VOID  YSBBSIM_rawremoveflagfanouts(A68_376  Mline, A68_INT  Flagaddress);

A68_VOID  GTBBSIM_rawclearinterrupts(void);

A_STATIC A68_VOID  HTBBSIM_sizemessages(void);

A68_VOID  NUBBSIM_rawterminatekernel(A68_36  Flt);

A68_VOID  TUBBSIM_rawinitialisekernel(A68_185 * Simfile, A68_INT  Diagnosticlevel, A68_43  Instr, A68_36  Flt, A68_375  *ReturnedValue);

A_STATIC A68_VOID  XUBBSIM_faultclosedown(A68_VC  Msg, void *NonLocals);

A_STATIC A68_VOID  GVBBSIM_generator(A68_BOOL  FVBBSIM_anonymous, A68_VC  *ReturnedValue);

A68_VOID  TVBBSIM_rawsavestate(A68_INT * Time, A68_VC * Function, A68_167  Ferry1, A68_167  Ferry2, A68_36  Flt);

A68_VOID  CWBBSIM_rawrestorestate(A68_INT  Diagnosticlevel, A68_INT  Time, A68_VC  Function, A68_167  Ferry1, A68_167  Ferry2, A68_43  Instr, A68_36  Flt, A68_375  *ReturnedValue);

A_STATIC A68_VOID  GWBBSIM_faultclosedown(A68_VC  Msg, void *NonLocals);

A_STATIC A68_VOID  KWBBSIM_generator(A68_BOOL  IWBBSIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);
 /* line 239: */
 /* line 240: */
 /* line 241: */

A_STATIC A68_VOID  YOABSIM_joinupinputaliases(A68_VC  Input, A68_158  Aliases, A68_INT  Instanceno, A68_BOOL  Circuitparameters, void *NonLocals)
#define NL(x) (((ZOABSIM_joinupinputaliases *)NonLocals)->x)
{ 
A68_INT  APABSIM_j;
A68_INT  BPABSIM;  /* to part of loop */
A68_INT  CPABSIM_innerinstance;
A68_INT  DPABSIM_inneroffset;
A68_BOOL  EPABSIM;  /* optbool result */
A68_136  FPABSIM;  /* avoid structure result */
A68_158  GPABSIM;  /* avoid structure result */
A_PROC_ENTRY(joinupinputaliases);
 /* line 243: */
BPABSIM = Aliases.upb;
for ( APABSIM_j = 1;
APABSIM_j <= BPABSIM;
APABSIM_j += 1 )
{ 
 /* line 244: */
CPABSIM_innerinstance = (Instanceno+(*(&((&A_VINDEX(Aliases,APABSIM_j))->Instoffset))));
 /* line 245: */
DPABSIM_inneroffset = (*(&((&A_VINDEX((*AMXASIM_instanceptrs),CPABSIM_innerinstance))->Offset)));
 /* line 246: */
 /* line 247: */
ACNASIM_cgpoke(Input, ((DPABSIM_inneroffset+GENASIM_sizeunit)+((*(&((&A_VINDEX(Aliases,APABSIM_j))->Ipno)))*DENASIM_ws)));
 /* line 248: */
 /* line 249: */
if ( Circuitparameters )
{ 
OCNASIM_cgpokeint(DPABSIM_inneroffset, (NL(ROABSIM_fanoutlist)+(((*NL(NOABSIM_fanoutcount))+=1)*DENASIM_ws)));
 /* line 250: */
 /* line 251: */
EPABSIM = !(*NL(SOABSIM_doneaunitdelfanout));
if ( EPABSIM )
{ /* line 252: */
 /* line 253: */
DWCASIM_lookupshape( (*(&((&A_VINDEX((*AMXASIM_instanceptrs),CPABSIM_innerinstance))->Fnno))), &FPABSIM );
EPABSIM = (FPABSIM.Sort==UHCASIM_unitdelay);
}
 /* line 254: */
if ( EPABSIM )
{ 
(*NL(SOABSIM_doneaunitdelfanout)) = A68_TRUE;
 /* line 255: */
 /* line 256: */
 /* line 257: */
 /* line 258: */
OCNASIM_cgpokeint(XYOASIM_globalunitdelevent, (NL(ROABSIM_fanoutlist)+(((*NL(NOABSIM_fanoutcount))+=1)*DENASIM_ws)));
} 
} 
 /* line 259: */
 /* line 260: */
 /* line 261: */
 /* line 262: */
 /* line 263: */
 /* line 264: */
 /* line 265: */
 /* line 266: */
FVCASIM_lookupinputaliases( (*(&((&A_VINDEX((*AMXASIM_instanceptrs),CPABSIM_innerinstance))->Fnno))), (*(&((&A_VINDEX(Aliases,APABSIM_j))->Ipno))), &GPABSIM );
A_CALLPROC(NL(XOABSIM_joinupinputaliases),(Input, GPABSIM, CPABSIM_innerinstance, Circuitparameters),(Input, GPABSIM, CPABSIM_innerinstance, Circuitparameters,(NL(XOABSIM_joinupinputaliases)).nonlocals));
}
A_PROC_EXIT(joinupinputaliases);
return;
} 
#undef NL

A_STATIC A68_VOID  AQABSIM_generator(A68_BOOL  YPABSIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((BQABSIM_generator *)NonLocals)->x)
{ 
A68_VC  CQABSIM;  /* clause result */
A68_VC  DQABSIM;  /* OPERATORS - dynamic generator */
{ 
DQABSIM.upb = (DENASIM_ws*NL(XPABSIM_ninputs)) ;
( YPABSIM_anonymous? A_VLOC(A68_CHAR ,DQABSIM): A_VHEAP(A68_CHAR ,DQABSIM) );
CQABSIM = DQABSIM;
} 
*ReturnedValue = (CQABSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  QQABSIM_generator(A68_BOOL  OQABSIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((RQABSIM_generator *)NonLocals)->x)
{ 
A68_VC  SQABSIM;  /* clause result */
A68_VC  TQABSIM;  /* OPERATORS - dynamic generator */
{ 
TQABSIM.upb = DENASIM_ws ;
( OQABSIM_anonymous? A_VLOC(A68_CHAR ,TQABSIM): A_VHEAP(A68_CHAR ,TQABSIM) );
SQABSIM = TQABSIM;
} 
*ReturnedValue = (SQABSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  CRABSIM_generator(A68_BOOL  ARABSIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((DRABSIM_generator *)NonLocals)->x)
{ 
A68_VC  ERABSIM;  /* clause result */
A68_VC  FRABSIM;  /* OPERATORS - dynamic generator */
{ 
FRABSIM.upb = ((*NL(HQABSIM_pend))-NL(GQABSIM_pstart)) ;
( ARABSIM_anonymous? A_VLOC(A68_CHAR ,FRABSIM): A_VHEAP(A68_CHAR ,FRABSIM) );
ERABSIM = FRABSIM;
} 
*ReturnedValue = (ERABSIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  ETABSIM_bya(A68_INT  W, A68_INT  Level)
{ 
A68_BOOL  FTABSIM;  /* clause result */
A_PROC_ENTRY(bya);
 /* line 420: */
FTABSIM = ((A68_BITS )((A68_BITS )W&(A68_BITS )Level)!=0X0U);
A_PROC_EXIT(bya);
return( FTABSIM );
} 
#undef NL

A_STATIC A68_VOID  ABBBSIM_generator(A68_BOOL  YABBSIM_anonymous, A68_138  *ReturnedValue, void *NonLocals)
#define NL(x) (((BBBBSIM_generator *)NonLocals)->x)
{ 
A68_138  CBBBSIM;  /* clause result */
A68_138  DBBBSIM;  /* OPERATORS - dynamic generator */
{ 
DBBBSIM.upb = 1 ;
( YABBSIM_anonymous? A_VLOC(A68_139 ,DBBBSIM): A_VHEAP(A68_139 ,DBBBSIM) );
CBBBSIM = DBBBSIM;
} 
*ReturnedValue = (CBBBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  WCBBSIM_generator(A68_BOOL  UCBBSIM_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((XCBBSIM_generator *)NonLocals)->x)
{ 
A68_32  YCBBSIM;  /* clause result */
A68_32  ZCBBSIM;  /* OPERATORS - dynamic generator */
{ 
ZCBBSIM.upb = (*NL(QCBBSIM_count)) ;
( UCBBSIM_anonymous? A_VLOC(A68_INT ,ZCBBSIM): A_VHEAP(A68_INT ,ZCBBSIM) );
YCBBSIM = ZCBBSIM;
} 
*ReturnedValue = (YCBBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  OIBBSIM_generator(A68_BOOL  MIBBSIM_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((PIBBSIM_generator *)NonLocals)->x)
{ 
A68_32  QIBBSIM;  /* clause result */
A68_32  RIBBSIM;  /* OPERATORS - dynamic generator */
{ 
RIBBSIM.upb = 1 ;
( MIBBSIM_anonymous? A_VLOC(A68_INT ,RIBBSIM): A_VHEAP(A68_INT ,RIBBSIM) );
QIBBSIM = RIBBSIM;
} 
*ReturnedValue = (QIBBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  XUBBSIM_faultclosedown(A68_VC  Msg, void *NonLocals)
#define NL(x) (((YUBBSIM_faultclosedown *)NonLocals)->x)
{ 
A_PROC_ENTRY(faultclosedown);
 /* line 1706: */
 /* line 1707: */
{ 
NUBBSIM_rawterminatekernel(NL(Flt));
 /* line 1708: */
 /* line 1709: */
A_CALLPROC(NL(Flt),(Msg),(Msg,(NL(Flt)).nonlocals));
} 
A_PROC_EXIT(faultclosedown);
return;
} 
#undef NL

A_STATIC A68_VOID  GWBBSIM_faultclosedown(A68_VC  Msg, void *NonLocals)
#define NL(x) (((HWBBSIM_faultclosedown *)NonLocals)->x)
{ 
A_PROC_ENTRY(faultclosedown);
 /* line 1774: */
 /* line 1775: */
{ 
NUBBSIM_rawterminatekernel(NL(Flt));
 /* line 1776: */
 /* line 1777: */
A_CALLPROC(NL(Flt),(Msg),(Msg,(NL(Flt)).nonlocals));
} 
A_PROC_EXIT(faultclosedown);
return;
} 
#undef NL

A_STATIC A68_VOID  KWBBSIM_generator(A68_BOOL  IWBBSIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((LWBBSIM_generator *)NonLocals)->x)
{ 
A68_VC  MWBBSIM;  /* clause result */
A68_VC  NWBBSIM;  /* OPERATORS - dynamic generator */
{ 
NWBBSIM.upb = 9 ;
( IWBBSIM_anonymous? A_VLOC(A68_CHAR ,NWBBSIM): A_VHEAP(A68_CHAR ,NWBBSIM) );
MWBBSIM = NWBBSIM;
} 
*ReturnedValue = (MWBBSIM);
return;
} 
#undef NL
 /* line 110: */

A_STATIC A68_VOID  GNABSIM_addtofanout(A68_INT  Sourcefanout, A68_460  Instancelist)
{ 
A68_INT  HNABSIM_list;
A68_INT  INABSIM_size;
A68_INT  JNABSIM_extras;
A68_460 * LNABSIM;  /* YIELD */
A68_460 * KNABSIM_scan;
A68_460 * MNABSIM;  /* YIELD */
A68_INT  NNABSIM;  /* to part of loop */
A68_INT  ONABSIM;  /* loop control */
A68_INT  PNABSIM_to;
A_PROC_ENTRY(addtofanout);
 /* line 111: */
 /* line 112: */
{ 
HNABSIM_list = UCNASIM_cgpeekint(Sourcefanout);
 /* line 113: */
INABSIM_size = UCNASIM_cgpeekint(HNABSIM_list);
 /* line 114: */
JNABSIM_extras = 0;
 /* line 115: */
LNABSIM = A_LOC(A68_460 ) ;
(*LNABSIM) = Instancelist ;
KNABSIM_scan = LNABSIM;
 /* line 116: */
for ( ;; )
{ 
 /* line 117: */
if ( !((KNABSIM_scan!=DNABSIM_nilsinkinstancelist)) ) break;
JNABSIM_extras+=1;
 /* line 118: */
 /* line 119: */
KNABSIM_scan = (*(&(KNABSIM_scan->Tail)));
}
 /* line 120: */
HNABSIM_list = OXOASIM_extendammemory(HNABSIM_list, (((INABSIM_size+1)+JNABSIM_extras)*DENASIM_ws));
 /* line 122: */
OCNASIM_cgpokeint(HNABSIM_list, Sourcefanout);
 /* line 123: */
OCNASIM_cgpokeint((INABSIM_size+JNABSIM_extras), HNABSIM_list);
 /* line 124: */
MNABSIM = A_LOC(A68_460 ) ;
(*MNABSIM) = Instancelist ;
KNABSIM_scan = MNABSIM;
 /* line 125: */
NNABSIM = JNABSIM_extras;
for ( ONABSIM = 1;
ONABSIM <= NNABSIM;
ONABSIM += 1 )
{ 
 /* line 126: */
PNABSIM_to = (*(&(KNABSIM_scan->Fanoutto)));
 /* line 127: */
INABSIM_size+=1;
 /* line 128: */
OCNASIM_cgpokeint(PNABSIM_to, (HNABSIM_list+(INABSIM_size*DENASIM_ws)));
 /* line 129: */
 /* line 130: */
KNABSIM_scan = (*(&(KNABSIM_scan->Tail)));
}
 /* line 131: */
} 
A_PROC_EXIT(addtofanout);
return;
} 
#undef NL
 /* line 139: */

A_STATIC A68_VOID  SNABSIM_removefromfanout(A68_INT  Sourcefanout, A68_460  Instancelist)
{ 
A68_INT  TNABSIM_list;
A68_INT  UNABSIM_size;
A68_INT  VNABSIM_deletions;
A68_460 * XNABSIM;  /* YIELD */
A68_460 * WNABSIM_scan;
A68_INT  YNABSIM_to;
A68_BOOL  ZNABSIM_notfound;
A68_INT  AOABSIM_i;
A68_INT  BOABSIM;  /* by part of loop */
A68_INT  COABSIM_address;
A68_INT  DOABSIM_entry;
A68_VC  EOABSIM;  /* avoid structure result */
A_PROC_ENTRY(removefromfanout);
 /* line 140: */
 /* line 141: */
{ 
TNABSIM_list = UCNASIM_cgpeekint(Sourcefanout);
 /* line 142: */
UNABSIM_size = UCNASIM_cgpeekint(TNABSIM_list);
 /* line 143: */
VNABSIM_deletions = 0;
 /* line 144: */
XNABSIM = A_LOC(A68_460 ) ;
(*XNABSIM) = Instancelist ;
WNABSIM_scan = XNABSIM;
 /* line 145: */
for ( ;; )
{ 
 /* line 146: */
if ( !((WNABSIM_scan!=DNABSIM_nilsinkinstancelist)) ) break;
YNABSIM_to = (*(&(WNABSIM_scan->Fanoutto)));
 /* line 147: */
ZNABSIM_notfound = A68_TRUE;
 /* line 148: */
BOABSIM = (-1);
for ( AOABSIM_i = UNABSIM_size;
( BOABSIM > 0 && AOABSIM_i <= 1) ||
( BOABSIM < 0 && AOABSIM_i >= 1) ||
( BOABSIM == 0 ) ;
AOABSIM_i += BOABSIM )
{ 
 /* line 149: */
if ( !(ZNABSIM_notfound) ) break;
COABSIM_address = (TNABSIM_list+(AOABSIM_i*DENASIM_ws));
 /* line 150: */
DOABSIM_entry = UCNASIM_cgpeekint(COABSIM_address);
 /* line 151: */
 /* line 152: */
if ( (DOABSIM_entry==YNABSIM_to) )
{ 
 /* line 153: */
if ( (AOABSIM_i<UNABSIM_size) )
{ 
 /* line 154: */
HCNASIM_cgpeek( ((UNABSIM_size-AOABSIM_i)*DENASIM_ws), (COABSIM_address+DENASIM_ws), &EOABSIM );
ACNASIM_cgpoke(EOABSIM, COABSIM_address);
} 
 /* line 155: */
ZNABSIM_notfound = A68_FALSE;
 /* line 156: */
 /* line 157: */
 /* line 158: */
UNABSIM_size-=1;
} 
}
 /* line 159: */
 /* line 160: */
WNABSIM_scan = (*(&(WNABSIM_scan->Tail)));
}
 /* line 161: */
 /* line 162: */
OCNASIM_cgpokeint(UNABSIM_size, TNABSIM_list);
} 
A_PROC_EXIT(removefromfanout);
return;
} 
#undef NL

A_STATIC A68_VOID  MOABSIM_setfunction(A68_INT  Symbolno, A68_375  *ReturnedValue)
{ 
A68_INT  NOABSIM_fanoutcount;
A68_136  OOABSIM;  /* avoid structure result */
A68_136  POABSIM_shape;
A68_INT  QOABSIM_fanoutptr;
A68_INT  ROABSIM_fanoutlist;
A68_BOOL  SOABSIM_doneaunitdelfanout;
A68_463  XOABSIM_joinupinputaliases;   /* proc value of non-global proc */
A68_VC  HPABSIM;  /* OPERATORS - nil -> mode */
A68_VC  IPABSIM;  /* != */
A68_INT  JPABSIM_instanceno;
A68_INT  KPABSIM_oldoffset;
A68_32  LPABSIM;  /* avoid structure result */
A68_32  MPABSIM_datasizes;
A68_INT  NPABSIM_i;
A68_INT  OPABSIM;  /* to part of loop */
A68_VC  PPABSIM;  /* OPERATORS - trim index */
A68_VC  QPABSIM_input;
A68_158  RPABSIM;  /* avoid structure result */
A68_158  SPABSIM_aliases;
A68_VC  TPABSIM;  /* OPERATORS - nil -> mode */
A68_VC  UPABSIM;  /* avoid structure result */
A68_INT  VPABSIM_instanceno;
A68_INT  WPABSIM_outeroffset;
A68_INT  XPABSIM_ninputs;
A68_31  ZPABSIM_generator;   /* proc value of non-global proc */
A68_VC  EQABSIM;  /* avoid structure result */
A68_VC  FQABSIM;  /* avoid structure result */
A68_INT  GQABSIM_pstart;
A68_INT  HQABSIM_pend;
A68_32  IQABSIM;  /* avoid structure result */
A68_32  JQABSIM_datasizes;
A68_BOOL  KQABSIM;  /* optbool result */
A68_136  LQABSIM;  /* avoid structure result */
A68_INT  MQABSIM_i;
A68_INT  NQABSIM;  /* to part of loop */
A68_31  PQABSIM_generator;   /* proc value of non-global proc */
A68_VC  VQABSIM;  /* avoid structure result */
A68_VC  UQABSIM_input;
A68_158  WQABSIM;  /* avoid structure result */
A68_INT  XQABSIM;  /* YIELD */
A68_31  BRABSIM_generator;   /* proc value of non-global proc */
A68_VC  HRABSIM;  /* avoid structure result */
A68_VC  GRABSIM_params;
A68_CHAR * IRABSIM_c;
A68_INT  JRABSIM;  /* forall loop counter */
A68_VC  ORABSIM;  /* avoid structure result */
A68_INT  PRABSIM_genericidfnno;
A68_INT  QRABSIM_lastinstanceno;
A68_INT  RRABSIM_i;
A68_INT  SRABSIM;  /* to part of loop */
A68_BOOL  TRABSIM;  /* optbool result */
A68_INT  URABSIM;  /* clause result */
A68_INT  VRABSIM_flag;
A68_186 * WRABSIM_instptr;
A68_INT  XRABSIM;  /* forall loop counter */
A68_136  YRABSIM;  /* avoid structure result */
A68_BITS  ZRABSIM;  /* ADICOPS - >= */
A68_32  ASABSIM;  /* avoid structure result */
A68_142  BSABSIM;  /* collateral clause result */
A68_375  CSABSIM;  /* clause result */
A68_375  DSABSIM;  /* OPERATORS - mode -> union mode */
A68_375 * ESABSIM;  /* YIELD */
A_PROC_ENTRY(setfunction);
 /* line 208: */
 /* line 209: */
{ 
A_CALLPROC(KOABSIM_unfreezeallinstances,(),((KOABSIM_unfreezeallinstances).nonlocals));
 /* line 214: */
NOABSIM_fanoutcount = 0;
 /* line 215: */
 /* line 216: */
DWCASIM_lookupshape( (*(&((&A_VINDEX((*AMXASIM_instanceptrs),MNXASIM_cpinstanceno))->Fnno))), &OOABSIM );
POABSIM_shape = OOABSIM;
 /* line 217: */
 /* line 218: */
QOABSIM_fanoutptr = ((*(&((&A_VINDEX((*AMXASIM_instanceptrs),MNXASIM_cpinstanceno))->Offset)))+POABSIM_shape.Size);
 /* line 219: */
ROABSIM_fanoutlist = (QOABSIM_fanoutptr+DENASIM_ws);
 /* line 221: */
RXOASIM_freeammemory(UCNASIM_cgpeekint(QOABSIM_fanoutptr));
 /* line 222: */
OCNASIM_cgpokeint(ROABSIM_fanoutlist, QOABSIM_fanoutptr);
 /* line 223: */
SOABSIM_doneaunitdelfanout = A68_FALSE;
 /* line 237: */
 /* line 238: */
A_CLOSURE( XOABSIM_joinupinputaliases, YOABSIM_joinupinputaliases, ZOABSIM_joinupinputaliases );
(( ZOABSIM_joinupinputaliases * ) ( XOABSIM_joinupinputaliases.nonlocals )) -> ROABSIM_fanoutlist = ROABSIM_fanoutlist;
(( ZOABSIM_joinupinputaliases * ) ( XOABSIM_joinupinputaliases.nonlocals )) -> NOABSIM_fanoutcount = (&NOABSIM_fanoutcount);
(( ZOABSIM_joinupinputaliases * ) ( XOABSIM_joinupinputaliases.nonlocals )) -> SOABSIM_doneaunitdelfanout = (&SOABSIM_doneaunitdelfanout);
(( ZOABSIM_joinupinputaliases * ) ( XOABSIM_joinupinputaliases.nonlocals )) -> XOABSIM_joinupinputaliases = XOABSIM_joinupinputaliases;
 /* line 268: */
 /* line 270: */
IPABSIM = A_VVAC(HPABSIM) ;
if ( ! A_VSTRUCTCOMP(IOABSIM_oldinputptrs,IPABSIM) )
{ 
JPABSIM_instanceno = JWCASIM_lookupaninstance(HOABSIM_sfno);
 /* line 271: */
KPABSIM_oldoffset = (((*(&((&A_VINDEX((*AMXASIM_instanceptrs),JPABSIM_instanceno))->Offset)))+GENASIM_sizeunit)+DENASIM_ws);
 /* line 272: */
ACNASIM_cgpoke(IOABSIM_oldinputptrs, KPABSIM_oldoffset);
 /* line 273: */
QUCASIM_lookupinputsizes( HOABSIM_sfno, &LPABSIM );
MPABSIM_datasizes = LPABSIM;
 /* line 274: */
OPABSIM = MPABSIM_datasizes.upb;
for ( NPABSIM_i = 1;
NPABSIM_i <= OPABSIM;
NPABSIM_i += 1 )
{ 
 /* line 276: */
QPABSIM_input = A_VTRIM(PPABSIM,(IOABSIM_oldinputptrs),A_VTSCRIPT(&(PPABSIM.upb),(IOABSIM_oldinputptrs).upb,(((NPABSIM_i-1)*DENASIM_ws)+1),(NPABSIM_i*DENASIM_ws)));
 /* line 277: */
 /* line 278: */
FVCASIM_lookupinputaliases( HOABSIM_sfno, NPABSIM_i, &RPABSIM );
SPABSIM_aliases = RPABSIM;
 /* line 279: */
 /* line 280: */
A_CALLPROC(XOABSIM_joinupinputaliases,(QPABSIM_input, SPABSIM_aliases, JPABSIM_instanceno, A68_FALSE),(QPABSIM_input, SPABSIM_aliases, JPABSIM_instanceno, A68_FALSE,(XOABSIM_joinupinputaliases).nonlocals));
}
 /* line 281: */
 /* line 282: */
IOABSIM_oldinputptrs = A_VVAC(TPABSIM);
} 
 /* line 284: */
HOABSIM_sfno = Symbolno;
 /* line 285: */
ZTCASIM_lookupuserid( Symbolno, &UPABSIM );
GOABSIM_sfid = UPABSIM;
 /* line 288: */
VPABSIM_instanceno = JWCASIM_lookupaninstance(Symbolno);
 /* line 291: */
WPABSIM_outeroffset = (*(&((&A_VINDEX((*AMXASIM_instanceptrs),VPABSIM_instanceno))->Offset)));
 /* line 292: */
XPABSIM_ninputs = UCNASIM_cgpeekint((WPABSIM_outeroffset+GENASIM_sizeunit));
 /* line 293: */
 /* line 294: */
A_CLOSURE( ZPABSIM_generator, AQABSIM_generator, BQABSIM_generator );
(( BQABSIM_generator * ) ( ZPABSIM_generator.nonlocals )) -> XPABSIM_ninputs = XPABSIM_ninputs;
 /* line 295: */
A_CALLPROC(ZPABSIM_generator,(A68_FALSE, &EQABSIM),(A68_FALSE, &EQABSIM,(ZPABSIM_generator).nonlocals));
HCNASIM_cgpeek( (DENASIM_ws*XPABSIM_ninputs), ((WPABSIM_outeroffset+GENASIM_sizeunit)+DENASIM_ws), &FQABSIM );
A_VASSIGN2(FQABSIM,EQABSIM,A68_CHAR ) ;
IOABSIM_oldinputptrs = EQABSIM;
 /* line 298: */
GQABSIM_pstart = (((*(&((&A_VINDEX((*AMXASIM_instanceptrs),MNXASIM_cpinstanceno))->Offset)))+DENASIM_ws)+GENASIM_sizeunit);
 /* line 299: */
HQABSIM_pend = GQABSIM_pstart;
 /* line 300: */
QUCASIM_lookupinputsizes( Symbolno, &IQABSIM );
JQABSIM_datasizes = IQABSIM;
 /* line 301: */
 /* line 302: */
KQABSIM = !SOABSIM_doneaunitdelfanout;
if ( KQABSIM )
{ /* line 303: */
DWCASIM_lookupshape( Symbolno, &LQABSIM );
KQABSIM = (LQABSIM.Sort==UHCASIM_unitdelay);
}
 /* line 304: */
if ( KQABSIM )
{ 
SOABSIM_doneaunitdelfanout = A68_TRUE;
 /* line 305: */
 /* line 306: */
OCNASIM_cgpokeint(XYOASIM_globalunitdelevent, (ROABSIM_fanoutlist+((NOABSIM_fanoutcount+=1)*DENASIM_ws)));
} 
 /* line 307: */
NQABSIM = XPABSIM_ninputs;
for ( MQABSIM_i = 1;
MQABSIM_i <= NQABSIM;
MQABSIM_i += 1 )
{ 
 /* line 308: */
A_CLOSURE( PQABSIM_generator, QQABSIM_generator, RQABSIM_generator );
A_CALLPROC(PQABSIM_generator,(A68_TRUE, &VQABSIM),(A68_TRUE, &VQABSIM,(PQABSIM_generator).nonlocals));
UQABSIM_input = VQABSIM;
 /* line 309: */
PBBASIM_unsignedtoword(HQABSIM_pend, UQABSIM_input);
 /* line 310: */
A_CALLPROC(FENASIM_up,(UQABSIM_input),(UQABSIM_input,(FENASIM_up).nonlocals));
 /* line 311: */
ACNASIM_cgpoke(UQABSIM_input, ((WPABSIM_outeroffset+GENASIM_sizeunit)+(MQABSIM_i*DENASIM_ws)));
 /* line 312: */
OCNASIM_cgpokeint(WPABSIM_outeroffset, (ROABSIM_fanoutlist+((NOABSIM_fanoutcount+=1)*DENASIM_ws)));
 /* line 313: */
 /* line 314: */
 /* line 315: */
 /* line 316: */
 /* line 317: */
FVCASIM_lookupinputaliases( Symbolno, MQABSIM_i, &WQABSIM );
A_CALLPROC(XOABSIM_joinupinputaliases,(UQABSIM_input, WQABSIM, VPABSIM_instanceno, A68_TRUE),(UQABSIM_input, WQABSIM, VPABSIM_instanceno, A68_TRUE,(XOABSIM_joinupinputaliases).nonlocals));
 /* line 318: */
 /* line 319: */
HQABSIM_pend+=(*(&A_VINDEX(JQABSIM_datasizes,MQABSIM_i)));
}
 /* line 322: */
OCNASIM_cgpokeint(NOABSIM_fanoutcount, ROABSIM_fanoutlist);
 /* line 323: */
 /* line 324: */
 /* line 325: */
XQABSIM = (MNXASIM_cpinstanceno+1) ;
if ( ((ROABSIM_fanoutlist+((NOABSIM_fanoutcount+1)*DENASIM_ws))>(*(&((&A_VINDEX((*AMXASIM_instanceptrs),XQABSIM))->Offset)))) )
{ 
 /* line 326: */
NKDAOST_sysfault(ZQABSIM);
} 
 /* line 329: */
A_CLOSURE( BRABSIM_generator, CRABSIM_generator, DRABSIM_generator );
(( DRABSIM_generator * ) ( BRABSIM_generator.nonlocals )) -> HQABSIM_pend = (&HQABSIM_pend);
(( DRABSIM_generator * ) ( BRABSIM_generator.nonlocals )) -> GQABSIM_pstart = GQABSIM_pstart;
A_CALLPROC(BRABSIM_generator,(A68_TRUE, &HRABSIM),(A68_TRUE, &HRABSIM,(BRABSIM_generator).nonlocals));
GRABSIM_params = HRABSIM;
 /* line 330: */
JRABSIM = GRABSIM_params.upb -1;
IRABSIM_c = GRABSIM_params.data;
for (;JRABSIM-- >= 0;
(IRABSIM_c++
) )
{
(*IRABSIM_c) = (A68_CHAR)0;
}
 /* line 331: */
ACNASIM_cgpoke(GRABSIM_params, GQABSIM_pstart);
 /* line 340: */
FOABSIM_simtime = 0;
 /* line 341: */
 /* line 342: */
 /* line 343: */
RSCAOST_makeid( NRABSIM, &ORABSIM );
PRABSIM_genericidfnno = NRCASIM_lookupname(ORABSIM, 0, (-1));
 /* line 344: */
QRABSIM_lastinstanceno = (VPABSIM_instanceno+BXCASIM_lookuplastinstance(Symbolno));
 /* line 345: */
OCNASIM_cgpokeint(KRABSIM_clear, PYOASIM_globalinitialised);
 /* line 346: */
OCNASIM_cgpokeint(KRABSIM_clear, MYOASIM_globaltime);
 /* line 347: */
SRABSIM = (*AMXASIM_instanceptrs).upb;
for ( RRABSIM_i = 1;
RRABSIM_i <= SRABSIM;
RRABSIM_i += 1 )
{ 
 /* line 349: */
 /* line 350: */
TRABSIM = (VPABSIM_instanceno<=RRABSIM_i);
if ( TRABSIM )
{ /* line 351: */
TRABSIM = (RRABSIM_i<=QRABSIM_lastinstanceno);
}
if ( ! TRABSIM )
{ /* line 352: */
TRABSIM = ((*(&((&A_VINDEX((*AMXASIM_instanceptrs),RRABSIM_i))->Fnno)))==PRABSIM_genericidfnno);
}
 /* line 353: */
if ( TRABSIM )
{ 
 /* line 354: */
URABSIM = LRABSIM_set;
} 
else
{ 
URABSIM = KRABSIM_clear;
} 
VRABSIM_flag = URABSIM;
 /* line 355: */
 /* line 356: */
OCNASIM_cgpokeint(VRABSIM_flag, (*(&((&A_VINDEX((*AMXASIM_instanceptrs),RRABSIM_i))->Offset))));
}
 /* line 359: */
 /* line 360: */
XRABSIM = (*AMXASIM_instanceptrs).upb -1;
WRABSIM_instptr = (*AMXASIM_instanceptrs).data;
for (;XRABSIM-- >= 0;
(WRABSIM_instptr++
) )
{
 /* line 361: */
 /* line 362: */
 /* line 363: */
DWCASIM_lookupshape( (*(&(WRABSIM_instptr->Fnno))), &YRABSIM );
ZRABSIM = YRABSIM.Sort ;
if ( A_LB_GE(ZRABSIM,OHCASIM_aliensort) )
{ 
 /* line 364: */
 /* line 365: */
 /* line 366: */
QUCASIM_lookupinputsizes( (*(&(WRABSIM_instptr->Fnno))), &ASABSIM );
OCNASIM_cgpokeint(0, ((*(&(WRABSIM_instptr->Offset)))+(DENASIM_ws*(8+ASABSIM.upb))));
} 
}
 /* line 368: */
BSABSIM.Fn = Symbolno;
 /* line 369: */
BSABSIM.Instance = VPABSIM_instanceno;
ESABSIM = A_HEAP(A68_375 ) ;
CSABSIM = (*ESABSIM) = A_UNITE(DSABSIM,mode1,1,BSABSIM);
} 
A_PROC_EXIT(setfunction);
*ReturnedValue = (CSABSIM);
return;
} 
#undef NL

A68_VOID  JSABSIM_rawselectfunction(A68_VC  Function, A68_36  Flt, A68_375  *ReturnedValue)
{ 
A68_369  KSABSIM;  /* avoid structure result */
A68_INT  LSABSIM_found;
A68_375  QSABSIM;  /* clause result */
A68_375  RSABSIM;  /* avoid structure result */
A_PROC_ENTRY(rawselectfunction);
 /* line 377: */
 /* line 379: */
{ 
OCNASIM_cgpokeint(GFMASIM_terminateaction, QYOASIM_globalaction);
 /* line 380: */
ADNASIM_cgsimulate( FOABSIM_simtime, &KSABSIM );
KSABSIM;
 /* line 381: */
A_CALLPROC(GSABSIM_destroyallprobeinstances,(),((GSABSIM_destroyallprobeinstances).nonlocals));
 /* line 385: */
LSABSIM_found = NRCASIM_lookupname(Function, UDABSIM_simdecl, 0);
 /* line 386: */
 /* line 387: */
if ( (LSABSIM_found==0) )
{ 
 /* line 388: */
LSABSIM_found = NRCASIM_lookupname(Function, WDABSIM_simandprobedecl, 0);
} 
 /* line 389: */
if ( (LSABSIM_found==0) )
{ 
 /* line 390: */
A_CALLPROC(Flt,(NSABSIM),(NSABSIM,(Flt).nonlocals));
} 
else
{ 
 /* line 391: */
if ( (JWCASIM_lookupaninstance(LSABSIM_found)==0) )
{ 
 /* line 392: */
A_CALLPROC(Flt,(PSABSIM),(PSABSIM,(Flt).nonlocals));
} 
} 
 /* line 393: */
 /* line 394: */
MOABSIM_setfunction( LSABSIM_found, &RSABSIM );
QSABSIM = RSABSIM;
} 
A_PROC_EXIT(rawselectfunction);
*ReturnedValue = (QSABSIM);
return;
} 
#undef NL

A68_VOID  VSABSIM_rawsimulate(A68_INT * Increment, A68_BOOL * Stable, A68_36  Flt)
{ 
A68_INT  WSABSIM_starttime;
A68_INT  XSABSIM_stoptime;
A68_369  YSABSIM;  /* clause result */
A68_369  ZSABSIM;  /* avoid structure result */
A68_369  ATABSIM_sim;
A68_VC  GTABSIM_msg;
A68_473  HTABSIM;  /* collateral clause result */
A68_52  KTABSIM;  /* OPERATORS - mode -> union mode */
A68_VC  LTABSIM;  /* YIELD */
A68_52  MTABSIM;  /* OPERATORS - mode -> union mode */
A68_56  NTABSIM;  /* procedure value */
A68_52  QTABSIM;  /* OPERATORS - mode -> union mode */
A68_VC  RTABSIM;  /* YIELD */
A68_52  STABSIM;  /* OPERATORS - mode -> union mode */
A68_56  TTABSIM;  /* procedure value */
A68_85  UTABSIM;  /* OPERATORS - istruct -> vector */
A68_VC  XTABSIM;  /* avoid structure result */
A68_VC  AUABSIM;  /* avoid structure result */
A68_475  BUABSIM;  /* collateral clause result */
A68_52  CUABSIM;  /* OPERATORS - mode -> union mode */
A68_52  DUABSIM;  /* OPERATORS - mode -> union mode */
A68_56  EUABSIM;  /* procedure value */
A68_85  FUABSIM;  /* OPERATORS - istruct -> vector */
A68_VC  IUABSIM;  /* avoid structure result */
A68_475  JUABSIM;  /* collateral clause result */
A68_52  KUABSIM;  /* OPERATORS - mode -> union mode */
A68_52  LUABSIM;  /* OPERATORS - mode -> union mode */
A68_56  MUABSIM;  /* procedure value */
A68_85  NUABSIM;  /* OPERATORS - istruct -> vector */
A68_VC  QUABSIM;  /* avoid structure result */
A_PROC_ENTRY(rawsimulate);
 /* line 405: */
 /* line 406: */
{ 
WSABSIM_starttime = FOABSIM_simtime;
 /* line 407: */
XSABSIM_stoptime = (FOABSIM_simtime+(*Increment));
 /* line 408: */
if ( !(*Stable) )
{ 
OCNASIM_cgpokeint(0, UYOASIM_globalcomboutputsstable);
} 
 /* line 409: */
 /* line 410: */
 /* line 411: */
{ 
OCNASIM_cgpokeint(DFMASIM_evaluateaction, QYOASIM_globalaction);
 /* line 412: */
 /* line 413: */
ADNASIM_cgsimulate( XSABSIM_stoptime, &ZSABSIM );
YSABSIM = ZSABSIM;
} 
ATABSIM_sim = YSABSIM;
 /* line 414: */
FOABSIM_simtime = (*(&((&ATABSIM_sim)->Lasttime)));
 /* line 415: */
(*Increment) = ((*(&((&ATABSIM_sim)->Lasttime)))-WSABSIM_starttime);
 /* line 416: */
(*Stable) = A68_TRUE;
 /* line 418: */
 /* line 419: */
if ( ((*(&((&ATABSIM_sim)->Interrupted)))!=0) )
{ 
 /* line 422: */
 /* line 424: */
 /* line 425: */
if ( ETABSIM_bya((*(&((&ATABSIM_sim)->Interrupted))), NFNASIM_hardinterrupt) )
{ 
LTABSIM = JTABSIM ;
HTABSIM.data[0] = A_UNITE(KTABSIM,mode7,7,LTABSIM);
NTABSIM.fn.fn_global = LRAAOSL_newline;
NTABSIM.nonlocals = A68_NIL;
HTABSIM.data[1] = A_UNITE(MTABSIM,mode12,12,NTABSIM);
RTABSIM = PTABSIM ;
HTABSIM.data[2] = A_UNITE(QTABSIM,mode7,7,RTABSIM);
TTABSIM.fn.fn_global = LRAAOSL_newline;
TTABSIM.nonlocals = A68_NIL;
HTABSIM.data[3] = A_UNITE(STABSIM,mode12,12,TTABSIM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(UTABSIM,HTABSIM,4,A68_52 ));
 /* line 426: */
RSCAOST_makeid( WTABSIM, &XTABSIM );
GTABSIM_msg = XTABSIM;
 /* line 427: */
 /* line 428: */
(*Stable) = A68_FALSE;
} 
else
{ 
 /* line 429: */
if ( ETABSIM_bya((*(&((&ATABSIM_sim)->Interrupted))), MFNASIM_softinterrupt) )
{ 
 /* line 430: */
RSCAOST_makeid( ZTABSIM, &AUABSIM );
GTABSIM_msg = AUABSIM;
} 
} 
 /* line 432: */
 /* line 433: */
if ( ETABSIM_bya((*(&((&ATABSIM_sim)->Interrupted))), OFNASIM_sqrterror) )
{ 
if ( !(*Stable) )
{ 
BUABSIM.data[0] = A_UNITE(CUABSIM,mode7,7,GTABSIM_msg);
EUABSIM.fn.fn_global = LRAAOSL_newline;
EUABSIM.nonlocals = A68_NIL;
BUABSIM.data[1] = A_UNITE(DUABSIM,mode12,12,EUABSIM);
GFBAOSL_put(LEAAOST_out, A_HISVEC(FUABSIM,BUABSIM,2,A68_52 ));
} 
 /* line 434: */
RSCAOST_makeid( HUABSIM, &IUABSIM );
GTABSIM_msg = IUABSIM;
 /* line 435: */
 /* line 436: */
(*Stable) = A68_FALSE;
} 
else
{ 
 /* line 437: */
if ( ETABSIM_bya((*(&((&ATABSIM_sim)->Interrupted))), PFNASIM_arithmeticerror) )
{ 
if ( !(*Stable) )
{ 
JUABSIM.data[0] = A_UNITE(KUABSIM,mode7,7,GTABSIM_msg);
MUABSIM.fn.fn_global = LRAAOSL_newline;
MUABSIM.nonlocals = A68_NIL;
JUABSIM.data[1] = A_UNITE(LUABSIM,mode12,12,MUABSIM);
GFBAOSL_put(LEAAOST_out, A_HISVEC(NUABSIM,JUABSIM,2,A68_52 ));
} 
 /* line 438: */
RSCAOST_makeid( PUABSIM, &QUABSIM );
GTABSIM_msg = QUABSIM;
 /* line 439: */
 /* line 440: */
(*Stable) = A68_FALSE;
} 
} 
 /* line 442: */
 /* line 443: */
 /* line 445: */
A_CALLPROC(Flt,(GTABSIM_msg),(GTABSIM_msg,(Flt).nonlocals));
} 
} 
A_PROC_EXIT(rawsimulate);
return;
} 
#undef NL

A_STATIC A68_VOID  TUABSIM_addsinkinstance(A68_INT  Fanoutto, A68_460 ** List)
{ 
A68_460  UUABSIM;  /* collateral clause result */
A68_460 * VUABSIM;  /* YIELD */
A_PROC_ENTRY(addsinkinstance);
 /* line 473: */
UUABSIM.Fanoutto = Fanoutto;
UUABSIM.Tail = (*List);
VUABSIM = A_HEAP(A68_460 ) ;
(*VUABSIM) = UUABSIM ;
(*List) = VUABSIM;
A_PROC_EXIT(addsinkinstance);
return;
} 
#undef NL
 /* line 477: */
 /* line 478: */

A_STATIC A68_VOID  ZUABSIM_savesinkinstancelist(A68_460 * Sinkinstancelist, A68_167  Ferry, A68_36  Flt)
{ 
A68_460 * AVABSIM_head;
A68_INT  BVABSIM_count;
A_PROC_ENTRY(savesinkinstancelist);
 /* line 479: */
 /* line 480: */
{ 
AVABSIM_head = Sinkinstancelist;
 /* line 481: */
BVABSIM_count = 0;
 /* line 482: */
for ( ;; )
{ 
 /* line 483: */
if ( !((AVABSIM_head!=DNABSIM_nilsinkinstancelist)) ) break;
BVABSIM_count+=1;
 /* line 484: */
 /* line 485: */
AVABSIM_head = (*(&(AVABSIM_head->Tail)));
}
 /* line 486: */
PHBASIM_writeint(BVABSIM_count, Ferry, Flt);
 /* line 487: */
AVABSIM_head = Sinkinstancelist;
 /* line 488: */
for ( ;; )
{ 
 /* line 489: */
if ( !((AVABSIM_head!=DNABSIM_nilsinkinstancelist)) ) break;
PHBASIM_writeint((*(&(AVABSIM_head->Fanoutto))), Ferry, Flt);
 /* line 490: */
 /* line 491: */
AVABSIM_head = (*(&(AVABSIM_head->Tail)));
}
 /* line 492: */
} 
A_PROC_EXIT(savesinkinstancelist);
return;
} 
#undef NL
 /* line 496: */

A_STATIC A68_460 * EVABSIM_restoresinkinstancelist(A68_167  Ferry, A68_36  Flt)
{ 
A68_460 * FVABSIM_result;
A68_INT  GVABSIM;  /* to part of loop */
A68_INT  HVABSIM;  /* loop control */
A68_460 * IVABSIM;  /* clause result */
A_PROC_ENTRY(restoresinkinstancelist);
 /* line 497: */
 /* line 498: */
{ 
FVABSIM_result = DNABSIM_nilsinkinstancelist;
 /* line 499: */
GVABSIM = LGBASIM_readint(Ferry, Flt);
for ( HVABSIM = 1;
HVABSIM <= GVABSIM;
HVABSIM += 1 )
{ 
 /* line 500: */
 /* line 501: */
TUABSIM_addsinkinstance(LGBASIM_readint(Ferry, Flt), (&FVABSIM_result));
}
 /* line 502: */
 /* line 503: */
IVABSIM = FVABSIM_result;
} 
A_PROC_EXIT(restoresinkinstancelist);
return( IVABSIM );
} 
#undef NL
 /* line 512: */
 /* line 513: */

A_STATIC A68_VOID  NVABSIM_addsourceinstance(A68_INT  Fanoutfrom, A68_460 * Sinks, A68_481 ** List)
{ 
A68_481  OVABSIM;  /* collateral clause result */
A68_481 * PVABSIM;  /* YIELD */
A_PROC_ENTRY(addsourceinstance);
 /* line 514: */
OVABSIM.Fanoutfrom = Fanoutfrom;
OVABSIM.Sinks = Sinks;
OVABSIM.Tail = (*List);
PVABSIM = A_HEAP(A68_481 ) ;
(*PVABSIM) = OVABSIM ;
(*List) = PVABSIM;
A_PROC_EXIT(addsourceinstance);
return;
} 
#undef NL
 /* line 518: */
 /* line 519: */

A_STATIC A68_VOID  TVABSIM_savesourceinstancelist(A68_481 * Sourceinstancelist, A68_167  Ferry, A68_36  Flt)
{ 
A68_481 * UVABSIM_head;
A68_INT  VVABSIM_count;
A_PROC_ENTRY(savesourceinstancelist);
 /* line 520: */
 /* line 521: */
{ 
UVABSIM_head = Sourceinstancelist;
 /* line 522: */
VVABSIM_count = 0;
 /* line 523: */
for ( ;; )
{ 
 /* line 524: */
if ( !((UVABSIM_head!=JVABSIM_nilsourceinstancelist)) ) break;
VVABSIM_count+=1;
 /* line 525: */
 /* line 526: */
UVABSIM_head = (*(&(UVABSIM_head->Tail)));
}
 /* line 527: */
PHBASIM_writeint(VVABSIM_count, Ferry, Flt);
 /* line 528: */
UVABSIM_head = Sourceinstancelist;
 /* line 529: */
for ( ;; )
{ 
 /* line 530: */
if ( !((UVABSIM_head!=JVABSIM_nilsourceinstancelist)) ) break;
PHBASIM_writeint((*(&(UVABSIM_head->Fanoutfrom))), Ferry, Flt);
 /* line 531: */
ZUABSIM_savesinkinstancelist((*(&(UVABSIM_head->Sinks))), Ferry, Flt);
 /* line 532: */
 /* line 533: */
UVABSIM_head = (*(&(UVABSIM_head->Tail)));
}
 /* line 534: */
} 
A_PROC_EXIT(savesourceinstancelist);
return;
} 
#undef NL
 /* line 538: */

A_STATIC A68_481 * YVABSIM_restoresourceinstancelist(A68_167  Ferry, A68_36  Flt)
{ 
A68_481 * ZVABSIM_result;
A68_INT  AWABSIM;  /* to part of loop */
A68_INT  BWABSIM;  /* loop control */
A68_481 * CWABSIM;  /* clause result */
A_PROC_ENTRY(restoresourceinstancelist);
 /* line 539: */
 /* line 540: */
{ 
ZVABSIM_result = JVABSIM_nilsourceinstancelist;
 /* line 541: */
AWABSIM = LGBASIM_readint(Ferry, Flt);
for ( BWABSIM = 1;
BWABSIM <= AWABSIM;
BWABSIM += 1 )
{ 
 /* line 542: */
 /* line 543: */
 /* line 544: */
 /* line 545: */
NVABSIM_addsourceinstance(LGBASIM_readint(Ferry, Flt), EVABSIM_restoresinkinstancelist(Ferry, Flt), (&ZVABSIM_result));
}
 /* line 546: */
 /* line 547: */
CWABSIM = ZVABSIM_result;
} 
A_PROC_EXIT(restoresourceinstancelist);
return( CWABSIM );
} 
#undef NL

A_STATIC A68_VOID  FWABSIM_clearprobelist(void)
{ 
A_PROC_ENTRY(clearprobelist);
EWABSIM_probelist = DWABSIM_nilprobelist;
A_PROC_EXIT(clearprobelist);
return;
} 
#undef NL

A_STATIC A68_VOID  JWABSIM_addprobe(A68_INT  Base, A68_INT  Line, A68_481 * Inputinstances)
{ 
A68_485  KWABSIM;  /* collateral clause result */
A68_485 * LWABSIM;  /* YIELD */
A_PROC_ENTRY(addprobe);
 /* line 565: */
KWABSIM.Probebaseoffset = Base;
KWABSIM.Connectedto = Line;
KWABSIM.Inputinstances = Inputinstances;
KWABSIM.Tail = EWABSIM_probelist;
LWABSIM = A_HEAP(A68_485 ) ;
(*LWABSIM) = KWABSIM ;
EWABSIM_probelist = LWABSIM;
A_PROC_EXIT(addprobe);
return;
} 
#undef NL

A_STATIC A68_485 * NWABSIM_delprobe(A68_INT  Base)
{ 
A68_485 ** OWABSIM_head;
A68_BOOL  PWABSIM;  /* optbool result */
A68_485 * QWABSIM;  /* clause result */
A68_485 * RWABSIM_result;
A_PROC_ENTRY(delprobe);
 /* line 568: */
 /* line 569: */
{ 
OWABSIM_head = (&EWABSIM_probelist);
 /* line 570: */
for ( ;; )
{ 
PWABSIM = ((*OWABSIM_head)!=DWABSIM_nilprobelist);
if ( PWABSIM )
{ /* line 571: */
PWABSIM = ((*(&((*OWABSIM_head)->Probebaseoffset)))!=Base);
}
 /* line 572: */
if ( !(PWABSIM) ) break;
 /* line 573: */
OWABSIM_head = (&((*OWABSIM_head)->Tail));
}
 /* line 574: */
 /* line 576: */
if ( ((*OWABSIM_head)==DWABSIM_nilprobelist) )
{ 
 /* line 577: */
QWABSIM = DWABSIM_nilprobelist;
} 
else
{ 
RWABSIM_result = (*OWABSIM_head);
 /* line 578: */
(*OWABSIM_head) = (*(&((*OWABSIM_head)->Tail)));
 /* line 579: */
 /* line 580: */
 /* line 581: */
QWABSIM = RWABSIM_result;
} 
} 
A_PROC_EXIT(delprobe);
return( QWABSIM );
} 
#undef NL

A_STATIC A68_VOID  UWABSIM_saveprobes(A68_167  Ferry, A68_36  Flt)
{ 
A68_INT  VWABSIM_count;
A68_485 * WWABSIM_head;
A_PROC_ENTRY(saveprobes);
 /* line 584: */
 /* line 585: */
{ 
VWABSIM_count = 0;
 /* line 586: */
WWABSIM_head = EWABSIM_probelist;
 /* line 587: */
for ( ;; )
{ 
 /* line 588: */
if ( !((WWABSIM_head!=DWABSIM_nilprobelist)) ) break;
VWABSIM_count+=1;
 /* line 589: */
 /* line 590: */
WWABSIM_head = (*(&(WWABSIM_head->Tail)));
}
 /* line 591: */
PHBASIM_writeint(VWABSIM_count, Ferry, Flt);
 /* line 592: */
WWABSIM_head = EWABSIM_probelist;
 /* line 593: */
for ( ;; )
{ 
 /* line 594: */
if ( !((WWABSIM_head!=DWABSIM_nilprobelist)) ) break;
PHBASIM_writeint((*(&(WWABSIM_head->Probebaseoffset))), Ferry, Flt);
 /* line 595: */
PHBASIM_writeint((*(&(WWABSIM_head->Connectedto))), Ferry, Flt);
 /* line 596: */
TVABSIM_savesourceinstancelist((*(&(WWABSIM_head->Inputinstances))), Ferry, Flt);
 /* line 597: */
 /* line 598: */
WWABSIM_head = (*(&(WWABSIM_head->Tail)));
}
 /* line 599: */
} 
A_PROC_EXIT(saveprobes);
return;
} 
#undef NL

A_STATIC A68_VOID  ZWABSIM_restoreprobes(A68_167  Ferry, A68_36  Flt)
{ 
A68_INT  AXABSIM;  /* to part of loop */
A68_INT  BXABSIM;  /* loop control */
A_PROC_ENTRY(restoreprobes);
 /* line 602: */
 /* line 603: */
{ 
FWABSIM_clearprobelist();
 /* line 604: */
AXABSIM = LGBASIM_readint(Ferry, Flt);
for ( BXABSIM = 1;
BXABSIM <= AXABSIM;
BXABSIM += 1 )
{ 
 /* line 605: */
 /* line 606: */
 /* line 607: */
JWABSIM_addprobe(LGBASIM_readint(Ferry, Flt), LGBASIM_readint(Ferry, Flt), YVABSIM_restoresourceinstancelist(Ferry, Flt));
}
 /* line 608: */
} 
A_PROC_EXIT(restoreprobes);
return;
} 
#undef NL

A_STATIC A68_VOID  FXABSIM_findprobebasecircuit(A68_INT  Targetoffset, A68_INT  Globalstartlist, A68_INT  Globalendlist, A68_488  *ReturnedValue)
{ 
A68_INT  GXABSIM_startlist;
A68_INT  HXABSIM_endlist;
A68_INT  IXABSIM_circuitresult;
A68_INT  JXABSIM_baseresult;
A68_INT  KXABSIM_instance;
A68_INT  LXABSIM_prevbase;
A68_INT  MXABSIM_thisbase;
A68_BOOL  NXABSIM;  /* optbool result */
A68_488  OXABSIM;  /* collateral clause result */
A68_488  PXABSIM;  /* clause result */
A_PROC_ENTRY(findprobebasecircuit);
 /* line 614: */
 /* line 615: */
{ 
GXABSIM_startlist = UCNASIM_cgpeekint(Globalstartlist);
 /* line 616: */
HXABSIM_endlist = UCNASIM_cgpeekint(Globalendlist);
 /* line 617: */
IXABSIM_circuitresult = 0;
 /* line 618: */
JXABSIM_baseresult = 0;
 /* line 619: */
KXABSIM_instance = GXABSIM_startlist;
 /* line 620: */
LXABSIM_prevbase = (-1);
 /* line 621: */
for ( ;; )
{ 
 /* line 622: */
if ( !((KXABSIM_instance<=HXABSIM_endlist)) ) break;
MXABSIM_thisbase = UCNASIM_cgpeekint((KXABSIM_instance+DENASIM_ws));
 /* line 623: */
NXABSIM = (MXABSIM_thisbase>LXABSIM_prevbase);
if ( NXABSIM )
{NXABSIM = (MXABSIM_thisbase<=Targetoffset);
}
 /* line 624: */
if ( NXABSIM )
{ 
LXABSIM_prevbase = MXABSIM_thisbase;
 /* line 625: */
JXABSIM_baseresult = MXABSIM_thisbase;
 /* line 626: */
 /* line 627: */
IXABSIM_circuitresult = UCNASIM_cgpeekint(KXABSIM_instance);
} 
 /* line 628: */
 /* line 629: */
KXABSIM_instance+=(2*DENASIM_ws);
}
 /* line 630: */
OXABSIM.Base = JXABSIM_baseresult;
 /* line 631: */
OXABSIM.Circuit = IXABSIM_circuitresult;
PXABSIM = OXABSIM;
} 
A_PROC_EXIT(findprobebasecircuit);
*ReturnedValue = (PXABSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  RXABSIM_instance(A68_INT  Loc, A68_186  *ReturnedValue)
{ 
A68_488  SXABSIM;  /* avoid structure result */
A68_488  TXABSIM_probe;
A68_187  UXABSIM;  /* clause result */
A68_INT  VXABSIM;  /* YIELD */
A68_187  WXABSIM_instptrs;
A68_INT  XXABSIM_realloc;
A68_INT  YXABSIM_lwb;
A68_INT  ZXABSIM_upb;
A68_INT  AYABSIM_mid;
A68_186  BYABSIM;  /* collateral clause result */
A68_186  CYABSIM;  /* clause result */
A_PROC_ENTRY(instance);
 /* line 639: */
 /* line 641: */
{ 
 /* line 642: */
FXABSIM_findprobebasecircuit( Loc, AZOASIM_globalstartinstlist, BZOASIM_globalendinstlist, &SXABSIM );
TXABSIM_probe = SXABSIM;
 /* line 643: */
 /* line 644: */
 /* line 646: */
if ( (TXABSIM_probe.Circuit==0) )
{ 
 /* line 647: */
UXABSIM = (*AMXASIM_instanceptrs);
} 
else
{ 
 /* line 648: */
VXABSIM = TXABSIM_probe.Circuit ;
UXABSIM = (*(&((&A_VINDEX(BMXASIM_probeinstanceptrs,VXABSIM))->Instptrs)));
} 
WXABSIM_instptrs = UXABSIM;
 /* line 649: */
XXABSIM_realloc = (Loc-TXABSIM_probe.Base);
 /* line 651: */
YXABSIM_lwb = 0;
 /* line 652: */
ZXABSIM_upb = (WXABSIM_instptrs.upb+1);
 /* line 653: */
for ( ;; )
{ 
 /* line 654: */
if ( !(((YXABSIM_lwb+1)!=ZXABSIM_upb)) ) break;
AYABSIM_mid = ((YXABSIM_lwb+ZXABSIM_upb)/2);
 /* line 655: */
if ( ((*(&((&A_VINDEX(WXABSIM_instptrs,AYABSIM_mid))->Offset)))<=XXABSIM_realloc) )
{ 
 /* line 656: */
YXABSIM_lwb = AYABSIM_mid;
} 
else
{ 
 /* line 657: */
 /* line 658: */
ZXABSIM_upb = AYABSIM_mid;
} 
}
 /* line 659: */
BYABSIM.Fnno = (*(&((&A_VINDEX(WXABSIM_instptrs,YXABSIM_lwb))->Fnno)));
 /* line 660: */
BYABSIM.Offset = (TXABSIM_probe.Base+(*(&((&A_VINDEX(WXABSIM_instptrs,YXABSIM_lwb))->Offset))));
CYABSIM = BYABSIM;
} 
A_PROC_EXIT(instance);
*ReturnedValue = (CYABSIM);
return;
} 
#undef NL
 /* line 672: */
 /* line 673: */
 /* line 674: */
 /* line 675: */
 /* line 676: */

A_STATIC A68_VOID  JYABSIM_joinupprobeinputaliases(A68_460 ** Sinks, A68_INT  Input, A68_187  Probeinstptrs, A68_158  Aliases, A68_INT  Base, A68_INT  Instanceno)
{ 
A68_INT  KYABSIM_j;
A68_INT  LYABSIM;  /* to part of loop */
A68_INT  MYABSIM_innerinstance;
A68_INT  NYABSIM_inneroffset;
A68_INT  OYABSIM_inputoffset;
A68_158  PYABSIM;  /* avoid structure result */
A_PROC_ENTRY(joinupprobeinputaliases);
 /* line 678: */
LYABSIM = Aliases.upb;
for ( KYABSIM_j = 1;
KYABSIM_j <= LYABSIM;
KYABSIM_j += 1 )
{ 
 /* line 679: */
MYABSIM_innerinstance = (Instanceno+(*(&((&A_VINDEX(Aliases,KYABSIM_j))->Instoffset))));
 /* line 680: */
NYABSIM_inneroffset = (Base+(*(&((&A_VINDEX(Probeinstptrs,MYABSIM_innerinstance))->Offset))));
 /* line 681: */
OYABSIM_inputoffset = ((NYABSIM_inneroffset+GENASIM_sizeunit)+((*(&((&A_VINDEX(Aliases,KYABSIM_j))->Ipno)))*DENASIM_ws));
 /* line 682: */
OCNASIM_cgpokeint(Input, OYABSIM_inputoffset);
 /* line 683: */
OCNASIM_cgpokeint(1, NYABSIM_inneroffset);
 /* line 684: */
TUABSIM_addsinkinstance(NYABSIM_inneroffset, Sinks);
 /* line 685: */
 /* line 686: */
 /* line 687: */
 /* line 688: */
 /* line 689: */
 /* line 690: */
 /* line 691: */
 /* line 692: */
 /* line 693: */
 /* line 694: */
FVCASIM_lookupinputaliases( (*(&((&A_VINDEX(Probeinstptrs,MYABSIM_innerinstance))->Fnno))), (*(&((&A_VINDEX(Aliases,KYABSIM_j))->Ipno))), &PYABSIM );
JYABSIM_joinupprobeinputaliases(Sinks, Input, Probeinstptrs, PYABSIM, Base, MYABSIM_innerinstance);
}
A_PROC_EXIT(joinupprobeinputaliases);
return;
} 
#undef NL

A_STATIC A68_VOID  SYABSIM_connectprobe(A68_376  Mprobe, A68_376  Mline)
{ 
A68_INT  TYABSIM_c;
A68_187  UYABSIM_pis;
A68_INT  VYABSIM_probeidinst;
A68_INT  WYABSIM_probeinstanceoffset;
A68_INT  XYABSIM_probeinputoffset;
A68_INT  YYABSIM;  /* YIELD */
A68_32  ZYABSIM;  /* avoid structure result */
A68_32  AZABSIM_inputdatasizes;
A68_INT  BZABSIM_ninputs;
A68_187  CZABSIM;  /* clause result */
A68_INT  DZABSIM;  /* YIELD */
A68_187  EZABSIM_lineinstptrs;
A68_375  FZABSIM;  /* united object - for case conformity */
A68_374  GZABSIM_l;
A68_374  HZABSIM;  /* clause result */
A68_142  IZABSIM_b;
A68_151  JZABSIM;  /* avoid structure result */
A68_134 * KZABSIM;  /* YIELD */
A68_374  LZABSIM_line;
A68_138  MZABSIM_blocks;
A68_INT  NZABSIM_blockindex;
A68_INT  OZABSIM_blocksize;
A68_INT  PZABSIM_lineinstanceno;
A68_INT  QZABSIM_linefanoutoffset;
A68_INT  RZABSIM_partlineoffset;
A68_481 * SZABSIM_inputsofprobe;
A68_INT  TZABSIM_i;
A68_INT  UZABSIM;  /* to part of loop */
A68_INT  VZABSIM_lineevalflagoffset;
A68_INT  WZABSIM_relative;
A68_INT  XZABSIM_linevalueoffset;
A68_BOOL  YZABSIM;  /* clause result */
A68_INT  ZZABSIM_linefnno;
A68_136  AABBSIM;  /* avoid structure result */
A68_186  BABBSIM;  /* avoid structure result */
A68_186  CABBSIM_realinst;
A68_136  DABBSIM;  /* avoid structure result */
A68_460 * EABBSIM_sinks;
A68_158  FABBSIM;  /* avoid structure result */
A68_INT  GABBSIM;  /* YIELD */
A_PROC_ENTRY(connectprobe);
 /* line 710: */
 /* line 711: */
{ 
TYABSIM_c = Mprobe.Circuit;
 /* line 712: */
UYABSIM_pis = (*(&((&A_VINDEX(BMXASIM_probeinstanceptrs,TYABSIM_c))->Instptrs)));
 /* line 715: */
VYABSIM_probeidinst = ((*(&((&A_VINDEX(BMXASIM_probeinstanceptrs,TYABSIM_c))->Probeinstance)))-1);
 /* line 716: */
 /* line 717: */
WYABSIM_probeinstanceoffset = ((*(&((&A_VINDEX(UYABSIM_pis,VYABSIM_probeidinst))->Offset)))+Mprobe.Base);
 /* line 718: */
XYABSIM_probeinputoffset = ((WYABSIM_probeinstanceoffset+DENASIM_ws)+GENASIM_sizeunit);
 /* line 720: */
 /* line 721: */
YYABSIM = Mprobe.Circuit ;
QUCASIM_lookupinputsizes( (*(&((&A_VINDEX(BMXASIM_probeinstanceptrs,YYABSIM))->Fnno))), &ZYABSIM );
AZABSIM_inputdatasizes = ZYABSIM;
 /* line 722: */
BZABSIM_ninputs = AZABSIM_inputdatasizes.upb;
 /* line 724: */
 /* line 725: */
 /* line 727: */
if ( (Mline.Circuit==0) )
{ 
 /* line 728: */
CZABSIM = (*AMXASIM_instanceptrs);
} 
else
{ 
 /* line 729: */
DZABSIM = Mline.Circuit ;
CZABSIM = (*(&((&A_VINDEX(BMXASIM_probeinstanceptrs,DZABSIM))->Instptrs)));
} 
EZABSIM_lineinstptrs = CZABSIM;
 /* line 731: */
 /* line 732: */
 /* line 733: */
FZABSIM = Mline.Node ;
switch ( FZABSIM.mode )
{ 
case 2: /* STRUCT(REF MODE134,INT)  */
GZABSIM_l = (FZABSIM.data.mode2);
 /* line 734: */
HZABSIM = GZABSIM_l;
break;
case 1: /* STRUCT(INT,INT)  */
IZABSIM_b = (FZABSIM.data.mode1);
 /* line 735: */
GSCASIM_rawlookupfunction( IZABSIM_b.Fn, &JZABSIM );
KZABSIM = A_HEAP(A68_134 ) ;
(*KZABSIM) = JZABSIM.Outputs ;
HZABSIM.Wire = KZABSIM;
 /* line 736: */
HZABSIM.Instance = IZABSIM_b.Instance;
break;
default: 
A_IMP_SKIP ;
break;
} 
LZABSIM_line = HZABSIM;
 /* line 738: */
MZABSIM_blocks = (*(&(LZABSIM_line.Wire->Blocks)));
 /* line 740: */
NZABSIM_blockindex = 0;
 /* line 741: */
OZABSIM_blocksize = 0;
 /* line 742: */
 /* line 743: */
 /* line 744: */
 /* line 746: */
SZABSIM_inputsofprobe = JVABSIM_nilsourceinstancelist;
 /* line 748: */
UZABSIM = BZABSIM_ninputs;
for ( TZABSIM_i = 1;
TZABSIM_i <= UZABSIM;
TZABSIM_i += 1 )
{ 
 /* line 749: */
 /* line 750: */
if ( (OZABSIM_blocksize<=0) )
{ 
NZABSIM_blockindex+=1;
 /* line 751: */
 /* line 752: */
PZABSIM_lineinstanceno = (LZABSIM_line.Instance+(*(&((&A_VINDEX(MZABSIM_blocks,NZABSIM_blockindex))->Instoffset))));
 /* line 754: */
 /* line 755: */
{ 
 /* line 756: */
VZABSIM_lineevalflagoffset = (Mline.Base+(*(&((&A_VINDEX(EZABSIM_lineinstptrs,PZABSIM_lineinstanceno))->Offset))));
 /* line 757: */
WZABSIM_relative = (*(&((&A_VINDEX(MZABSIM_blocks,NZABSIM_blockindex))->Offset)));
 /* line 758: */
XZABSIM_linevalueoffset = (VZABSIM_lineevalflagoffset+A_ABS(WZABSIM_relative));
 /* line 759: */
 /* line 760: */
 /* line 762: */
YZABSIM = (WZABSIM_relative>=0);
if ( YZABSIM )
{ 
RZABSIM_partlineoffset = XZABSIM_linevalueoffset;
 /* line 763: */
ZZABSIM_linefnno = (*(&((&A_VINDEX(EZABSIM_lineinstptrs,PZABSIM_lineinstanceno))->Fnno)));
 /* line 764: */
 /* line 765: */
 /* line 766: */
 /* line 769: */
DWCASIM_lookupshape( ZZABSIM_linefnno, &AABBSIM );
QZABSIM_linefanoutoffset = (VZABSIM_lineevalflagoffset+AABBSIM.Size);
} 
else
{ 
RZABSIM_partlineoffset = UCNASIM_cgpeekint(XZABSIM_linevalueoffset);
 /* line 770: */
RXABSIM_instance( RZABSIM_partlineoffset, &BABBSIM );
CABBSIM_realinst = BABBSIM;
 /* line 771: */
 /* line 772: */
 /* line 773: */
DWCASIM_lookupshape( CABBSIM_realinst.Fnno, &DABBSIM );
QZABSIM_linefanoutoffset = (CABBSIM_realinst.Offset+DABBSIM.Size);
} 
} 
 /* line 775: */
 /* line 776: */
OZABSIM_blocksize = (*(&((&A_VINDEX(MZABSIM_blocks,NZABSIM_blockindex))->Size)));
} 
 /* line 779: */
EABBSIM_sinks = DNABSIM_nilsinkinstancelist;
 /* line 780: */
TUABSIM_addsinkinstance(WYABSIM_probeinstanceoffset, (&EABBSIM_sinks));
 /* line 783: */
OCNASIM_cgpokeint(RZABSIM_partlineoffset, (XYABSIM_probeinputoffset+((TZABSIM_i-1)*DENASIM_ws)));
 /* line 784: */
 /* line 785: */
 /* line 786: */
 /* line 787: */
 /* line 788: */
 /* line 789: */
 /* line 790: */
FVCASIM_lookupinputaliases( (*(&((&A_VINDEX(UYABSIM_pis,VYABSIM_probeidinst))->Fnno))), TZABSIM_i, &FABBSIM );
GABBSIM = Mprobe.Circuit ;
JYABSIM_joinupprobeinputaliases((&EABBSIM_sinks), RZABSIM_partlineoffset, (*(&((&A_VINDEX(BMXASIM_probeinstanceptrs,GABBSIM))->Instptrs))), FABBSIM, Mprobe.Base, VYABSIM_probeidinst);
 /* line 794: */
 /* line 795: */
 /* line 796: */
NVABSIM_addsourceinstance(QZABSIM_linefanoutoffset, EABBSIM_sinks, (&SZABSIM_inputsofprobe));
 /* line 797: */
GNABSIM_addtofanout(QZABSIM_linefanoutoffset, (*EABBSIM_sinks));
 /* line 799: */
OZABSIM_blocksize-=(*(&A_VINDEX(AZABSIM_inputdatasizes,TZABSIM_i)));
 /* line 800: */
 /* line 801: */
RZABSIM_partlineoffset+=(*(&A_VINDEX(AZABSIM_inputdatasizes,TZABSIM_i)));
}
 /* line 804: */
OCNASIM_cgpokeint(1, WYABSIM_probeinstanceoffset);
 /* line 805: */
 /* line 807: */
JWABSIM_addprobe(Mprobe.Base, Mline.Base, SZABSIM_inputsofprobe);
} 
A_PROC_EXIT(connectprobe);
return;
} 
#undef NL

A_STATIC A68_VOID  IABBSIM_disconnectprobe(A68_376  Mprobe)
{ 
A68_485 * JABBSIM_probe;
A68_481 * MABBSIM_currentsource;
A_PROC_ENTRY(disconnectprobe);
 /* line 814: */
 /* line 815: */
{ 
JABBSIM_probe = NWABSIM_delprobe(Mprobe.Base);
 /* line 816: */
 /* line 817: */
if ( (JABBSIM_probe==DWABSIM_nilprobelist) )
{ 
 /* line 818: */
 /* line 819: */
NKDAOST_sysfault(LABBSIM);
} 
else
{ 
MABBSIM_currentsource = (*(&(JABBSIM_probe->Inputinstances)));
 /* line 820: */
for ( ;; )
{ 
 /* line 821: */
if ( !((MABBSIM_currentsource!=JVABSIM_nilsourceinstancelist)) ) break;
 /* line 822: */
SNABSIM_removefromfanout((*(&(MABBSIM_currentsource->Fanoutfrom))), (*(*(&(MABBSIM_currentsource->Sinks)))));
 /* line 823: */
 /* line 824: */
MABBSIM_currentsource = (*(&(MABBSIM_currentsource->Tail)));
}
 /* line 825: */
 /* line 826: */
} 
} 
A_PROC_EXIT(disconnectprobe);
return;
} 
#undef NL

A68_VOID  OABBSIM_rawprobeinputnode(A68_376  Mprobe, A68_376  *ReturnedValue)
{ 
A68_INT  PABBSIM_inputsize;
A68_INT  QABBSIM;  /* YIELD */
A68_32  RABBSIM;  /* avoid structure result */
A68_32  SABBSIM_inputsizes;
A68_INT  TABBSIM_i;
A68_INT  UABBSIM;  /* to part of loop */
A68_376  VABBSIM;  /* collateral clause result */
A68_374  WABBSIM;  /* collateral clause result */
A68_134  XABBSIM;  /* collateral clause result */
A68_496  ZABBSIM_generator;   /* proc value of non-global proc */
A68_139  EBBBSIM;  /* collateral clause result */
A68_138  FBBBSIM;  /* avoid structure result */
A68_138  GBBBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_138  HBBBSIM;  /* OPERATORS - assign op */
A68_134 * IBBBSIM;  /* YIELD */
A68_INT  JBBBSIM;  /* YIELD */
A68_375  KBBBSIM;  /* OPERATORS - mode -> union mode */
A68_376  LBBBSIM;  /* clause result */
A_PROC_ENTRY(rawprobeinputnode);
 /* line 831: */
 /* line 832: */
{ 
PABBSIM_inputsize = 0;
 /* line 833: */
 /* line 834: */
QABBSIM = Mprobe.Circuit ;
QUCASIM_lookupinputsizes( (*(&((&A_VINDEX(BMXASIM_probeinstanceptrs,QABBSIM))->Fnno))), &RABBSIM );
SABBSIM_inputsizes = RABBSIM;
 /* line 835: */
UABBSIM = SABBSIM_inputsizes.upb;
for ( TABBSIM_i = 1;
TABBSIM_i <= UABBSIM;
TABBSIM_i += 1 )
{ 
PABBSIM_inputsize+=(*(&A_VINDEX(SABBSIM_inputsizes,TABBSIM_i)));
}
 /* line 836: */
 /* line 838: */
 /* line 839: */
 /* line 840: */
XABBSIM.Type = ZSAASIM_nullstype;
A_CLOSURE( ZABBSIM_generator, ABBBSIM_generator, BBBBSIM_generator );
EBBBSIM.Instoffset = 0;
EBBBSIM.Offset = (DENASIM_ws+GENASIM_sizeunit);
 /* line 841: */
EBBBSIM.Size = PABBSIM_inputsize;
A_CALLPROC(ZABBSIM_generator,(A68_FALSE, &FBBBSIM),(A68_FALSE, &FBBBSIM,(ZABBSIM_generator).nonlocals));
HBBBSIM = A_HVEC(GBBBSIM,EBBBSIM,A68_139 ) ;
A_VASSIGN2(HBBBSIM,FBBBSIM,A68_139 ) ;
XABBSIM.Blocks = FBBBSIM;
 /* line 842: */
IBBBSIM = A_HEAP(A68_134 ) ;
(*IBBBSIM) = XABBSIM ;
WABBSIM.Wire = IBBBSIM;
JBBBSIM = Mprobe.Circuit ;
WABBSIM.Instance = (*(&((&A_VINDEX(BMXASIM_probeinstanceptrs,JBBBSIM))->Inputinstance)));
 /* line 843: */
VABBSIM.Node = A_UNITE(KBBBSIM,mode2,2,WABBSIM);
VABBSIM.Circuit = Mprobe.Circuit;
 /* line 844: */
VABBSIM.Base = Mprobe.Base;
LBBBSIM = VABBSIM;
} 
A_PROC_EXIT(rawprobeinputnode);
*ReturnedValue = (LBBBSIM);
return;
} 
#undef NL

A_STATIC A68_INT  NBBBSIM_connectsto(A68_INT  Base)
{ 
A68_485 * OBBBSIM_head;
A68_INT  PBBBSIM_result;
A68_BOOL  QBBBSIM;  /* optbool result */
A68_INT  RBBBSIM;  /* clause result */
A_PROC_ENTRY(connectsto);
 /* line 847: */
 /* line 848: */
{ 
OBBBSIM_head = EWABSIM_probelist;
 /* line 849: */
PBBBSIM_result = 0;
 /* line 850: */
for ( ;; )
{ 
QBBBSIM = (OBBBSIM_head!=DWABSIM_nilprobelist);
if ( QBBBSIM )
{QBBBSIM = (PBBBSIM_result==0);
}
 /* line 851: */
if ( !(QBBBSIM) ) break;
 /* line 852: */
if ( ((*(&(OBBBSIM_head->Probebaseoffset)))==Base) )
{ 
 /* line 853: */
PBBBSIM_result = (*(&(OBBBSIM_head->Connectedto)));
} 
 /* line 854: */
 /* line 855: */
OBBBSIM_head = (*(&(OBBBSIM_head->Tail)));
}
 /* line 856: */
 /* line 857: */
RBBBSIM = PBBBSIM_result;
} 
A_PROC_EXIT(connectsto);
return( RBBBSIM );
} 
#undef NL
 /* line 866: */

A_STATIC A68_VOID  WBBBSIM_moveelementupprobelist(A68_INT  Sourcebase, A68_INT  Sinkbase, A68_INT  Globalstartlist, A68_INT  Globalendlist)
{ 
A68_INT  XBBBSIM_startlist;
A68_INT  YBBBSIM_endlist;
A68_INT  ZBBBSIM_elem;
A68_INT  ACBBSIM_foundsource;
A68_INT  BCBBSIM_foundsink;
A68_INT  CCBBSIM_thisbase;
A68_INT  DCBBSIM_sourcecircuit;
A68_INT  ECBBSIM_sourcebase;
A68_INT  FCBBSIM_i;
A68_INT  GCBBSIM;  /* to part of loop */
A68_INT  HCBBSIM;  /* by part of loop */
A_PROC_ENTRY(moveelementupprobelist);
 /* line 867: */
 /* line 868: */
{ 
XBBBSIM_startlist = UCNASIM_cgpeekint(Globalstartlist);
 /* line 869: */
YBBBSIM_endlist = UCNASIM_cgpeekint(Globalendlist);
 /* line 870: */
ZBBBSIM_elem = XBBBSIM_startlist;
 /* line 871: */
ACBBSIM_foundsource = 0;
 /* line 872: */
BCBBSIM_foundsink = 0;
 /* line 873: */
for ( ;; )
{ 
 /* line 874: */
if ( !(((ZBBBSIM_elem<=YBBBSIM_endlist)&(ACBBSIM_foundsource==0))) ) break;
CCBBSIM_thisbase = UCNASIM_cgpeekint((ZBBBSIM_elem+DENASIM_ws));
 /* line 875: */
if ( (CCBBSIM_thisbase==Sourcebase) )
{ 
ACBBSIM_foundsource = ZBBBSIM_elem;
} 
 /* line 876: */
if ( (CCBBSIM_thisbase==Sinkbase) )
{ 
BCBBSIM_foundsink = ZBBBSIM_elem;
} 
 /* line 877: */
 /* line 878: */
ZBBBSIM_elem+=(2*DENASIM_ws);
}
 /* line 879: */
 /* line 882: */
if ( (BCBBSIM_foundsink!=0) )
{ 
DCBBSIM_sourcecircuit = UCNASIM_cgpeekint(ACBBSIM_foundsource);
 /* line 883: */
ECBBSIM_sourcebase = UCNASIM_cgpeekint((ACBBSIM_foundsource+DENASIM_ws));
 /* line 884: */
GCBBSIM = BCBBSIM_foundsink;
HCBBSIM = (-DENASIM_ws);
for ( FCBBSIM_i = (ACBBSIM_foundsource-DENASIM_ws);
( HCBBSIM > 0 && FCBBSIM_i <= GCBBSIM) ||
( HCBBSIM < 0 && FCBBSIM_i >= GCBBSIM) ||
( HCBBSIM == 0 ) ;
FCBBSIM_i += HCBBSIM )
{ 
 /* line 885: */
 /* line 886: */
OCNASIM_cgpokeint(UCNASIM_cgpeekint(FCBBSIM_i), (FCBBSIM_i+(2*DENASIM_ws)));
}
 /* line 887: */
OCNASIM_cgpokeint(DCBBSIM_sourcecircuit, BCBBSIM_foundsink);
 /* line 888: */
 /* line 890: */
 /* line 891: */
OCNASIM_cgpokeint(ECBBSIM_sourcebase, (BCBBSIM_foundsink+DENASIM_ws));
} 
} 
A_PROC_EXIT(moveelementupprobelist);
return;
} 
#undef NL

A_STATIC A68_VOID  KCBBSIM_reorderinstanceevaluations(A68_INT  Sourcebase, A68_INT  Sinkbase)
{ 
A_PROC_ENTRY(reorderinstanceevaluations);
 /* line 896: */
 /* line 897: */
if ( ((Sourcebase!=0)&(Sourcebase!=Sinkbase)) )
{ 
 /* line 898: */
 /* line 899: */
WBBBSIM_moveelementupprobelist(Sourcebase, Sinkbase, AZOASIM_globalstartinstlist, BZOASIM_globalendinstlist);
 /* line 900: */
 /* line 901: */
KCBBSIM_reorderinstanceevaluations(NBBBSIM_connectsto(Sourcebase), Sourcebase);
} 
A_PROC_EXIT(reorderinstanceevaluations);
return;
} 
#undef NL

A68_VOID  NCBBSIM_rawreconnectprobeinstance(A68_376  Mprobe, A68_376  Mline)
{ 
A_PROC_ENTRY(rawreconnectprobeinstance);
 /* line 906: */
 /* line 907: */
{ 
IABBSIM_disconnectprobe(Mprobe);
 /* line 908: */
SYABSIM_connectprobe(Mprobe, Mline);
 /* line 909: */
 /* line 910: */
KCBBSIM_reorderinstanceevaluations(Mline.Base, Mprobe.Base);
} 
A_PROC_EXIT(rawreconnectprobeinstance);
return;
} 
#undef NL

A68_VOID  PCBBSIM_rawlistprobesconnectedto(A68_INT  Base, A68_32  *ReturnedValue)
{ 
A68_INT  QCBBSIM_count;
A68_485 * RCBBSIM_head;
A68_BOOL  SCBBSIM;  /* optbool result */
A68_BOOL  TCBBSIM;  /* optbool result */
A68_33  VCBBSIM_generator;   /* proc value of non-global proc */
A68_32  ADBBSIM;  /* avoid structure result */
A68_32  BDBBSIM_result;
A68_BOOL  CDBBSIM;  /* optbool result */
A68_BOOL  DDBBSIM;  /* optbool result */
A68_INT  EDBBSIM;  /* YIELD */
A68_INT * FDBBSIM;  /* YIELD */
A68_32  GDBBSIM;  /* clause result */
A_PROC_ENTRY(rawlistprobesconnectedto);
 /* line 919: */
 /* line 920: */
{ 
QCBBSIM_count = 0;
 /* line 921: */
RCBBSIM_head = EWABSIM_probelist;
 /* line 922: */
for ( ;; )
{ 
 /* line 923: */
if ( !((RCBBSIM_head!=DWABSIM_nilprobelist)) ) break;
 /* line 924: */
SCBBSIM = (Base==0);
if ( ! SCBBSIM )
{ /* line 925: */
TCBBSIM = ((*(&(RCBBSIM_head->Connectedto)))==Base);
if ( TCBBSIM )
{TCBBSIM = (Base!=(*(&(RCBBSIM_head->Probebaseoffset))));
}
 /* line 926: */
SCBBSIM = TCBBSIM;
}
 /* line 927: */
if ( SCBBSIM )
{ 
 /* line 928: */
QCBBSIM_count+=1;
} 
 /* line 929: */
 /* line 930: */
RCBBSIM_head = (*(&(RCBBSIM_head->Tail)));
}
 /* line 931: */
A_CLOSURE( VCBBSIM_generator, WCBBSIM_generator, XCBBSIM_generator );
(( XCBBSIM_generator * ) ( VCBBSIM_generator.nonlocals )) -> QCBBSIM_count = (&QCBBSIM_count);
A_CALLPROC(VCBBSIM_generator,(A68_FALSE, &ADBBSIM),(A68_FALSE, &ADBBSIM,(VCBBSIM_generator).nonlocals));
BDBBSIM_result = ADBBSIM;
 /* line 932: */
RCBBSIM_head = EWABSIM_probelist;
 /* line 933: */
QCBBSIM_count = 0;
 /* line 934: */
for ( ;; )
{ 
 /* line 935: */
if ( !((RCBBSIM_head!=DWABSIM_nilprobelist)) ) break;
 /* line 936: */
CDBBSIM = (Base==0);
if ( ! CDBBSIM )
{ /* line 937: */
DDBBSIM = ((*(&(RCBBSIM_head->Connectedto)))==Base);
if ( DDBBSIM )
{DDBBSIM = (Base!=(*(&(RCBBSIM_head->Probebaseoffset))));
}
 /* line 938: */
CDBBSIM = DDBBSIM;
}
 /* line 939: */
if ( CDBBSIM )
{ 
 /* line 940: */
EDBBSIM = QCBBSIM_count+=1 ;
FDBBSIM = (&A_VINDEX(BDBBSIM_result,EDBBSIM)) ;
(*FDBBSIM) = (*(&(RCBBSIM_head->Probebaseoffset)));
} 
 /* line 941: */
 /* line 942: */
RCBBSIM_head = (*(&(RCBBSIM_head->Tail)));
}
 /* line 943: */
 /* line 944: */
GDBBSIM = BDBBSIM_result;
} 
A_PROC_EXIT(rawlistprobesconnectedto);
*ReturnedValue = (GDBBSIM);
return;
} 
#undef NL

A68_BOOL  JDBBSIM_rawprobetypematchesline(A68_376  Mprobe, A68_376  Mline)
{ 
A68_INT  KDBBSIM;  /* YIELD */
A68_INT  LDBBSIM_probefnno;
A68_151  MDBBSIM;  /* avoid structure result */
A68_134  NDBBSIM;  /* avoid structure result */
A68_121  ODBBSIM_probetype;
A68_375  PDBBSIM;  /* united object - for case conformity */
A68_374  QDBBSIM_l;
A68_121  RDBBSIM;  /* clause result */
A68_142  SDBBSIM_b;
A68_151  TDBBSIM;  /* avoid structure result */
A68_121  UDBBSIM_linetype;
A68_BOOL  VDBBSIM;  /* clause result */
A68_121  WDBBSIM;  /* OPERATORS - mode -> union mode */
A68_129 * XDBBSIM;  /* YIELD */
A68_121  YDBBSIM;  /* OPERATORS - mode -> union mode */
A68_129 * ZDBBSIM;  /* YIELD */
A_PROC_ENTRY(rawprobetypematchesline);
 /* line 956: */
 /* line 957: */
{ 
KDBBSIM = Mprobe.Circuit ;
LDBBSIM_probefnno = (*(&((&A_VINDEX(BMXASIM_probeinstanceptrs,KDBBSIM))->Fnno)));
 /* line 958: */
GSCASIM_rawlookupfunction( LDBBSIM_probefnno, &MDBBSIM );
EZCASIM_rawinputs( MDBBSIM, &NDBBSIM );
ODBBSIM_probetype = NDBBSIM.Type;
 /* line 959: */
 /* line 960: */
 /* line 961: */
PDBBSIM = Mline.Node ;
switch ( PDBBSIM.mode )
{ 
case 2: /* STRUCT(REF MODE134,INT)  */
QDBBSIM_l = (PDBBSIM.data.mode2);
 /* line 962: */
RDBBSIM = (*(&(QDBBSIM_l.Wire->Type)));
break;
case 1: /* STRUCT(INT,INT)  */
SDBBSIM_b = (PDBBSIM.data.mode1);
 /* line 963: */
GSCASIM_rawlookupfunction( SDBBSIM_b.Fn, &TDBBSIM );
RDBBSIM = TDBBSIM.Outputs.Type;
break;
default: 
A_IMP_SKIP ;
break;
} 
UDBBSIM_linetype = RDBBSIM;
 /* line 964: */
 /* line 965: */
XDBBSIM = ABOASIM_flattentype(UDBBSIM_linetype) ;
ZDBBSIM = ABOASIM_flattentype(ODBBSIM_probetype) ;
VDBBSIM = CVAASIM_(A_UNITE(YDBBSIM,mode7,7,ZDBBSIM), A_UNITE(WDBBSIM,mode7,7,XDBBSIM));
} 
A_PROC_EXIT(rawprobetypematchesline);
return( VDBBSIM );
} 
#undef NL

A_STATIC A68_INT  DEBBSIM_findprobeinstance(A68_INT  Circuit, A68_INT  Globalstartlist, A68_INT  Globalendlist)
{ 
A68_INT  EEBBSIM_startlist;
A68_INT  FEBBSIM_endlist;
A68_INT  GEBBSIM_result;
A68_INT  HEBBSIM_instancelist;
A68_BOOL  IEBBSIM;  /* optbool result */
A68_INT  JEBBSIM;  /* clause result */
A_PROC_ENTRY(findprobeinstance);
 /* line 976: */
 /* line 977: */
{ 
EEBBSIM_startlist = UCNASIM_cgpeekint(Globalstartlist);
 /* line 978: */
FEBBSIM_endlist = UCNASIM_cgpeekint(Globalendlist);
 /* line 979: */
GEBBSIM_result = 0;
 /* line 980: */
HEBBSIM_instancelist = EEBBSIM_startlist;
 /* line 981: */
for ( ;; )
{ 
IEBBSIM = (HEBBSIM_instancelist<=FEBBSIM_endlist);
if ( IEBBSIM )
{IEBBSIM = (GEBBSIM_result==0);
}
 /* line 982: */
if ( !(IEBBSIM) ) break;
 /* line 983: */
if ( (UCNASIM_cgpeekint(HEBBSIM_instancelist)==Circuit) )
{ 
 /* line 984: */
 /* line 985: */
GEBBSIM_result = UCNASIM_cgpeekint((HEBBSIM_instancelist+DENASIM_ws));
} 
else
{ 
 /* line 986: */
 /* line 987: */
HEBBSIM_instancelist+=(2*DENASIM_ws);
} 
}
 /* line 988: */
 /* line 989: */
JEBBSIM = GEBBSIM_result;
} 
A_PROC_EXIT(findprobeinstance);
return( JEBBSIM );
} 
#undef NL

A_STATIC A68_INT  LEBBSIM_rawcreateprobeinstance(A68_INT  Circuit)
{ 
A68_INT  MEBBSIM_oldbaseoffset;
A68_INT  NEBBSIM;  /* clause result */
A68_INT  OEBBSIM_size;
A68_INT  PEBBSIM_newbaseoffset;
A68_INT  QEBBSIM_relocationfactor;
A68_VC  REBBSIM;  /* avoid structure result */
A68_187  SEBBSIM_instptrs;
A68_INT  UEBBSIM_i;
A68_INT  VEBBSIM;  /* to part of loop */
A68_INT  WEBBSIM_address;
A68_INT  XEBBSIM_j;
A68_INT  YEBBSIM;  /* to part of loop */
A68_136  ZEBBSIM;  /* avoid structure result */
A68_136  AFBBSIM_shape;
A68_BITS  BFBBSIM;  /* ADICOPS - >= */
A68_INT  CFBBSIM_oldfanoutptr;
A68_INT  DFBBSIM_oldfanoutlist;
A68_INT  EFBBSIM_fanoutsize;
A68_INT  FFBBSIM_newfanoutlist;
A68_INT  GFBBSIM_j;
A68_INT  HFBBSIM;  /* to part of loop */
A68_INT  IFBBSIM_oldfanoutptr;
A68_BOOL  JFBBSIM;  /* clause result */
A68_INT  KFBBSIM;  /* clause result */
A68_INT  LFBBSIM_newfanoutptr;
A_PROC_ENTRY(rawcreateprobeinstance);
 /* line 992: */
 /* line 996: */
{ 
MEBBSIM_oldbaseoffset = DEBBSIM_findprobeinstance(Circuit, AZOASIM_globalstartinstlist, BZOASIM_globalendinstlist);
 /* line 998: */
 /* line 1001: */
if ( (MEBBSIM_oldbaseoffset==0) )
{ 
 /* line 1002: */
 /* line 1005: */
NEBBSIM = (*(&((&A_VINDEX(BMXASIM_probeinstanceptrs,Circuit))->Baseoffset)));
} 
else
{ 
OEBBSIM_size = (*(&((&A_VINDEX(BMXASIM_probeinstanceptrs,Circuit))->Size)));
 /* line 1006: */
PEBBSIM_newbaseoffset = KXOASIM_allocateammemory(OEBBSIM_size);
 /* line 1007: */
QEBBSIM_relocationfactor = (PEBBSIM_newbaseoffset-MEBBSIM_oldbaseoffset);
 /* line 1010: */
HCNASIM_cgpeek( OEBBSIM_size, MEBBSIM_oldbaseoffset, &REBBSIM );
ACNASIM_cgpoke(REBBSIM, PEBBSIM_newbaseoffset);
 /* line 1014: */
 /* line 1015: */
SEBBSIM_instptrs = (*(&((&A_VINDEX(BMXASIM_probeinstanceptrs,Circuit))->Instptrs)));
 /* line 1017: */
 /* line 1018: */
VEBBSIM = SEBBSIM_instptrs.upb;
for ( UEBBSIM_i = 1;
UEBBSIM_i <= VEBBSIM;
UEBBSIM_i += 1 )
{ 
 /* line 1019: */
WEBBSIM_address = (PEBBSIM_newbaseoffset+(*(&((&A_VINDEX(SEBBSIM_instptrs,UEBBSIM_i))->Offset))));
 /* line 1020: */
OCNASIM_cgpokeint(TEBBSIM_setflag, WEBBSIM_address);
 /* line 1021: */
WEBBSIM_address+=GENASIM_sizeunit;
 /* line 1022: */
YEBBSIM = UCNASIM_cgpeekint(WEBBSIM_address);
for ( XEBBSIM_j = 1;
XEBBSIM_j <= YEBBSIM;
XEBBSIM_j += 1 )
{ 
 /* line 1023: */
WEBBSIM_address+=DENASIM_ws;
 /* line 1024: */
 /* line 1025: */
OCNASIM_cgpokeint((UCNASIM_cgpeekint(WEBBSIM_address)+QEBBSIM_relocationfactor), WEBBSIM_address);
}
 /* line 1027: */
 /* line 1028: */
DWCASIM_lookupshape( (*(&((&A_VINDEX(SEBBSIM_instptrs,UEBBSIM_i))->Fnno))), &ZEBBSIM );
AFBBSIM_shape = ZEBBSIM;
 /* line 1031: */
 /* line 1032: */
BFBBSIM = AFBBSIM_shape.Sort ;
if ( A_LB_GE(BFBBSIM,OHCASIM_aliensort) )
{ 
 /* line 1033: */
 /* line 1034: */
OCNASIM_cgpokeint(KXOASIM_allocateammemory(UCNASIM_cgpeekint((WEBBSIM_address+(4*DENASIM_ws)))), (WEBBSIM_address+(5*DENASIM_ws)));
} 
 /* line 1036: */
 /* line 1037: */
CFBBSIM_oldfanoutptr = ((PEBBSIM_newbaseoffset+(*(&((&A_VINDEX(SEBBSIM_instptrs,UEBBSIM_i))->Offset))))+AFBBSIM_shape.Size);
 /* line 1038: */
DFBBSIM_oldfanoutlist = UCNASIM_cgpeekint(CFBBSIM_oldfanoutptr);
 /* line 1039: */
EFBBSIM_fanoutsize = UCNASIM_cgpeekint((CFBBSIM_oldfanoutptr+DENASIM_ws));
 /* line 1040: */
FFBBSIM_newfanoutlist = KXOASIM_allocateammemory(((EFBBSIM_fanoutsize+1)*DENASIM_ws));
 /* line 1041: */
OCNASIM_cgpokeint(FFBBSIM_newfanoutlist, CFBBSIM_oldfanoutptr);
 /* line 1042: */
OCNASIM_cgpokeint(EFBBSIM_fanoutsize, FFBBSIM_newfanoutlist);
 /* line 1046: */
HFBBSIM = EFBBSIM_fanoutsize;
for ( GFBBSIM_j = 1;
GFBBSIM_j <= HFBBSIM;
GFBBSIM_j += 1 )
{ 
 /* line 1048: */
{ 
IFBBSIM_oldfanoutptr = UCNASIM_cgpeekint((DFBBSIM_oldfanoutlist+(GFBBSIM_j*DENASIM_ws)));
 /* line 1049: */
 /* line 1050: */
JFBBSIM = (IFBBSIM_oldfanoutptr>=MEBBSIM_oldbaseoffset);
if ( JFBBSIM )
{ 
 /* line 1051: */
 /* line 1052: */
KFBBSIM = (IFBBSIM_oldfanoutptr+QEBBSIM_relocationfactor);
} 
else
{ 
KFBBSIM = IFBBSIM_oldfanoutptr;
} 
} 
LFBBSIM_newfanoutptr = KFBBSIM;
 /* line 1053: */
 /* line 1054: */
OCNASIM_cgpokeint(LFBBSIM_newfanoutptr, (FFBBSIM_newfanoutlist+(GFBBSIM_j*DENASIM_ws)));
}
 /* line 1055: */
}
 /* line 1056: */
 /* line 1057: */
 /* line 1058: */
NEBBSIM = PEBBSIM_newbaseoffset;
} 
} 
A_PROC_EXIT(rawcreateprobeinstance);
return( NEBBSIM );
} 
#undef NL

A68_VOID  OFBBSIM_rawdestroyprobeinstance(A68_INT  Circuit, A68_INT  Base)
{ 
A68_INT  PFBBSIM_nextbaseoffset;
A68_INT * QFBBSIM;  /* YIELD */
A68_376  RFBBSIM;  /* collateral clause result */
A68_142  SFBBSIM;  /* collateral clause result */
A68_375  TFBBSIM;  /* OPERATORS - mode -> union mode */
A68_187  UFBBSIM_instptrs;
A68_INT  VFBBSIM_i;
A68_INT  WFBBSIM;  /* to part of loop */
A68_136  XFBBSIM;  /* avoid structure result */
A68_136  YFBBSIM_shape;
A68_BITS  ZFBBSIM;  /* ADICOPS - >= */
A68_INT  AGBBSIM_workspacepointer;
A68_INT  BGBBSIM_oldfanoutptr;
A_PROC_ENTRY(rawdestroyprobeinstance);
 /* line 1065: */
 /* line 1067: */
{ 
PFBBSIM_nextbaseoffset = DEBBSIM_findprobeinstance(Circuit, AZOASIM_globalstartinstlist, BZOASIM_globalendinstlist);
 /* line 1069: */
 /* line 1074: */
if ( (PFBBSIM_nextbaseoffset==0) )
{ 
 /* line 1077: */
/*SKIP*/;
} 
else
{ 
QFBBSIM = (&((&A_VINDEX(BMXASIM_probeinstanceptrs,Circuit))->Baseoffset)) ;
(*QFBBSIM) = PFBBSIM_nextbaseoffset;
 /* line 1079: */
SFBBSIM.Fn = 0;
SFBBSIM.Instance = 0;
RFBBSIM.Node = A_UNITE(TFBBSIM,mode1,1,SFBBSIM);
RFBBSIM.Circuit = Circuit;
RFBBSIM.Base = Base;
IABBSIM_disconnectprobe(RFBBSIM);
 /* line 1082: */
 /* line 1083: */
UFBBSIM_instptrs = (*(&((&A_VINDEX(BMXASIM_probeinstanceptrs,Circuit))->Instptrs)));
 /* line 1084: */
WFBBSIM = UFBBSIM_instptrs.upb;
for ( VFBBSIM_i = 1;
VFBBSIM_i <= WFBBSIM;
VFBBSIM_i += 1 )
{ 
 /* line 1086: */
DWCASIM_lookupshape( (*(&((&A_VINDEX(UFBBSIM_instptrs,VFBBSIM_i))->Fnno))), &XFBBSIM );
YFBBSIM_shape = XFBBSIM;
 /* line 1088: */
 /* line 1089: */
ZFBBSIM = YFBBSIM_shape.Sort ;
if ( A_LB_GE(ZFBBSIM,OHCASIM_aliensort) )
{ 
 /* line 1090: */
 /* line 1091: */
AGBBSIM_workspacepointer = (((Base+(*(&((&A_VINDEX(UFBBSIM_instptrs,VFBBSIM_i))->Offset))))+((UCNASIM_cgpeekint(((Base+(*(&((&A_VINDEX(UFBBSIM_instptrs,VFBBSIM_i))->Offset))))+GENASIM_sizeunit))+1)*DENASIM_ws))+(5*DENASIM_ws));
 /* line 1092: */
 /* line 1093: */
RXOASIM_freeammemory(UCNASIM_cgpeekint(AGBBSIM_workspacepointer));
} 
 /* line 1094: */
BGBBSIM_oldfanoutptr = ((Base+(*(&((&A_VINDEX(UFBBSIM_instptrs,VFBBSIM_i))->Offset))))+YFBBSIM_shape.Size);
 /* line 1095: */
 /* line 1096: */
RXOASIM_freeammemory(UCNASIM_cgpeekint(BGBBSIM_oldfanoutptr));
}
 /* line 1099: */
 /* line 1100: */
 /* line 1101: */
RXOASIM_freeammemory(Base);
} 
} 
A_PROC_EXIT(rawdestroyprobeinstance);
return;
} 
#undef NL

A_STATIC A68_VOID  DGBBSIM_anonymous(A68_BOOL  Init)
{ 
 /* line 1107: */
 /* line 1108: */
{ 
 /* line 1109: */
if ( !Init )
{ 
 /* line 1110: */
if ( (YYOASIM_globalstartinitlist<=ZYOASIM_globalendinitlist) )
{ 
 /* line 1111: */
RXOASIM_freeammemory(YYOASIM_globalstartinitlist);
} 
 /* line 1112: */
 /* line 1113: */
if ( (AZOASIM_globalstartinstlist<=BZOASIM_globalendinstlist) )
{ 
 /* line 1114: */
 /* line 1115: */
RXOASIM_freeammemory(AZOASIM_globalstartinstlist);
} 
} 
 /* line 1116: */
OCNASIM_cgpokeint((2*DENASIM_ws), YYOASIM_globalstartinitlist);
 /* line 1117: */
OCNASIM_cgpokeint(0, ZYOASIM_globalendinitlist);
 /* line 1118: */
OCNASIM_cgpokeint((2*DENASIM_ws), AZOASIM_globalstartinstlist);
 /* line 1119: */
 /* line 1120: */
OCNASIM_cgpokeint(0, BZOASIM_globalendinstlist);
} 
return;
} 
#undef NL
 /* line 1126: */

A_STATIC A68_VOID  IGBBSIM_addtoamprobelist(A68_376  Mfn, A68_INT  Globalstartlist, A68_INT  Globalendlist)
{ 
A68_INT  JGBBSIM_startlist;
A68_INT  KGBBSIM_endlist;
A68_INT  LGBBSIM_currentsize;
A68_INT  MGBBSIM_newsize;
A68_INT  NGBBSIM_newlist;
A68_INT  OGBBSIM_address;
A_PROC_ENTRY(addtoamprobelist);
 /* line 1127: */
 /* line 1128: */
{ 
JGBBSIM_startlist = UCNASIM_cgpeekint(Globalstartlist);
 /* line 1129: */
KGBBSIM_endlist = UCNASIM_cgpeekint(Globalendlist);
 /* line 1130: */
LGBBSIM_currentsize = ((KGBBSIM_endlist-JGBBSIM_startlist)+(2*DENASIM_ws));
 /* line 1131: */
MGBBSIM_newsize = (LGBBSIM_currentsize+(2*DENASIM_ws));
 /* line 1132: */
 /* line 1133: */
 /* line 1134: */
 /* line 1135: */
if ( (LGBBSIM_currentsize>0) )
{ 
NGBBSIM_newlist = OXOASIM_extendammemory(JGBBSIM_startlist, MGBBSIM_newsize);
 /* line 1136: */
 /* line 1137: */
 /* line 1138: */
OGBBSIM_address = (NGBBSIM_newlist+LGBBSIM_currentsize);
} 
else
{ 
NGBBSIM_newlist = KXOASIM_allocateammemory(MGBBSIM_newsize);
 /* line 1139: */
 /* line 1140: */
OGBBSIM_address = NGBBSIM_newlist;
} 
 /* line 1141: */
OCNASIM_cgpokeint(Mfn.Circuit, OGBBSIM_address);
 /* line 1142: */
OCNASIM_cgpokeint(Mfn.Base, (OGBBSIM_address+DENASIM_ws));
 /* line 1143: */
OCNASIM_cgpokeint(NGBBSIM_newlist, Globalstartlist);
 /* line 1144: */
 /* line 1145: */
OCNASIM_cgpokeint((NGBBSIM_newlist+LGBBSIM_currentsize), Globalendlist);
} 
A_PROC_EXIT(addtoamprobelist);
return;
} 
#undef NL
 /* line 1153: */

A_STATIC A68_VOID  SGBBSIM_delfromamprobelist(A68_32  Probebases, A68_INT  Globalstartlist, A68_INT  Globalendlist)
{ 
A68_INT  TGBBSIM_startlist;
A68_INT  UGBBSIM_endlist;
A68_INT  VGBBSIM_currentsize;
A68_INT  WGBBSIM_newsize;
A68_INT  XGBBSIM_newlist;
A68_INT  YGBBSIM_oldlistaddress;
A68_INT  ZGBBSIM_newlistaddress;
A68_INT  AHBBSIM_i;
A68_INT  BHBBSIM;  /* to part of loop */
A68_INT  CHBBSIM_circuit;
A68_INT  DHBBSIM_offset;
A68_BOOL  EHBBSIM_found;
A68_INT  FHBBSIM_j;
A68_INT  GHBBSIM;  /* to part of loop */
A_PROC_ENTRY(delfromamprobelist);
 /* line 1154: */
 /* line 1155: */
{ 
TGBBSIM_startlist = UCNASIM_cgpeekint(Globalstartlist);
 /* line 1156: */
UGBBSIM_endlist = UCNASIM_cgpeekint(Globalendlist);
 /* line 1157: */
VGBBSIM_currentsize = ((UGBBSIM_endlist-TGBBSIM_startlist)+(2*DENASIM_ws));
 /* line 1158: */
 /* line 1159: */
if ( (VGBBSIM_currentsize>0) )
{ 
WGBBSIM_newsize = (VGBBSIM_currentsize-(Probebases.upb*(2*DENASIM_ws)));
 /* line 1160: */
XGBBSIM_newlist = KXOASIM_allocateammemory(WGBBSIM_newsize);
 /* line 1161: */
YGBBSIM_oldlistaddress = TGBBSIM_startlist;
 /* line 1162: */
ZGBBSIM_newlistaddress = XGBBSIM_newlist;
 /* line 1163: */
BHBBSIM = (VGBBSIM_currentsize/(DENASIM_ws*2));
for ( AHBBSIM_i = 1;
AHBBSIM_i <= BHBBSIM;
AHBBSIM_i += 1 )
{ 
 /* line 1164: */
CHBBSIM_circuit = UCNASIM_cgpeekint(YGBBSIM_oldlistaddress);
 /* line 1165: */
YGBBSIM_oldlistaddress+=DENASIM_ws;
 /* line 1166: */
DHBBSIM_offset = UCNASIM_cgpeekint(YGBBSIM_oldlistaddress);
 /* line 1167: */
YGBBSIM_oldlistaddress+=DENASIM_ws;
 /* line 1168: */
EHBBSIM_found = A68_FALSE;
 /* line 1169: */
GHBBSIM = Probebases.upb;
for ( FHBBSIM_j = 1;
FHBBSIM_j <= GHBBSIM;
FHBBSIM_j += 1 )
{ 
 /* line 1170: */
if ( !(!EHBBSIM_found) ) break;
 /* line 1171: */
EHBBSIM_found = (A_VINDEX(Probebases,FHBBSIM_j)==DHBBSIM_offset);
}
 /* line 1172: */
 /* line 1173: */
if ( !EHBBSIM_found )
{ 
OCNASIM_cgpokeint(CHBBSIM_circuit, ZGBBSIM_newlistaddress);
 /* line 1174: */
ZGBBSIM_newlistaddress+=DENASIM_ws;
 /* line 1175: */
OCNASIM_cgpokeint(DHBBSIM_offset, ZGBBSIM_newlistaddress);
 /* line 1176: */
 /* line 1177: */
 /* line 1178: */
ZGBBSIM_newlistaddress+=DENASIM_ws;
} 
}
 /* line 1179: */
RXOASIM_freeammemory(TGBBSIM_startlist);
 /* line 1180: */
OCNASIM_cgpokeint(XGBBSIM_newlist, Globalstartlist);
 /* line 1181: */
 /* line 1182: */
 /* line 1183: */
OCNASIM_cgpokeint(((XGBBSIM_newlist+WGBBSIM_newsize)-(2*DENASIM_ws)), Globalendlist);
} 
} 
A_PROC_EXIT(delfromamprobelist);
return;
} 
#undef NL

A68_VOID  JHBBSIM_rawinitialiseprobeinstance(A68_VC  Function, A68_36  Flt, A68_376  *ReturnedValue)
{ 
A68_INT  KHBBSIM_fnno;
A68_INT  NHBBSIM_circuit;
A68_INT  OHBBSIM_i;
A68_INT  PHBBSIM;  /* to part of loop */
A68_INT  QHBBSIM_base;
A68_INT  RHBBSIM_pi;
A68_376  SHBBSIM;  /* collateral clause result */
A68_142  THBBSIM;  /* collateral clause result */
A68_375  UHBBSIM;  /* OPERATORS - mode -> union mode */
A68_376  VHBBSIM_mprobe;
A68_376  WHBBSIM;  /* avoid structure result */
A68_376  XHBBSIM;  /* clause result */
A_PROC_ENTRY(rawinitialiseprobeinstance);
 /* line 1190: */
 /* line 1191: */
{ 
KHBBSIM_fnno = NRCASIM_lookupname(Function, VDABSIM_probedecl, 0);
 /* line 1192: */
 /* line 1193: */
if ( (KHBBSIM_fnno==0) )
{ 
 /* line 1194: */
KHBBSIM_fnno = NRCASIM_lookupname(Function, WDABSIM_simandprobedecl, 0);
} 
 /* line 1195: */
if ( (KHBBSIM_fnno==0) )
{ 
A_CALLPROC(Flt,(MHBBSIM),(MHBBSIM,(Flt).nonlocals));
} 
 /* line 1196: */
NHBBSIM_circuit = 0;
 /* line 1197: */
PHBBSIM = BMXASIM_probeinstanceptrs.upb;
for ( OHBBSIM_i = 1;
OHBBSIM_i <= PHBBSIM;
OHBBSIM_i += 1 )
{ 
 /* line 1198: */
if ( !((NHBBSIM_circuit==0)) ) break;
if ( ((*(&((&A_VINDEX(BMXASIM_probeinstanceptrs,OHBBSIM_i))->Fnno)))==KHBBSIM_fnno) )
{ 
 /* line 1199: */
NHBBSIM_circuit = OHBBSIM_i;
} 
}
 /* line 1200: */
QHBBSIM_base = LEBBSIM_rawcreateprobeinstance(NHBBSIM_circuit);
 /* line 1201: */
RHBBSIM_pi = (*(&((&A_VINDEX(BMXASIM_probeinstanceptrs,NHBBSIM_circuit))->Probeinstance)));
 /* line 1202: */
THBBSIM.Fn = KHBBSIM_fnno;
THBBSIM.Instance = RHBBSIM_pi;
SHBBSIM.Node = A_UNITE(UHBBSIM,mode1,1,THBBSIM);
SHBBSIM.Circuit = NHBBSIM_circuit;
SHBBSIM.Base = QHBBSIM_base;
VHBBSIM_mprobe = SHBBSIM;
 /* line 1203: */
OABBSIM_rawprobeinputnode( VHBBSIM_mprobe, &WHBBSIM );
SYABSIM_connectprobe(VHBBSIM_mprobe, WHBBSIM);
 /* line 1204: */
IGBBSIM_addtoamprobelist(VHBBSIM_mprobe, YYOASIM_globalstartinitlist, ZYOASIM_globalendinitlist);
 /* line 1205: */
IGBBSIM_addtoamprobelist(VHBBSIM_mprobe, AZOASIM_globalstartinstlist, BZOASIM_globalendinstlist);
 /* line 1206: */
 /* line 1207: */
XHBBSIM = VHBBSIM_mprobe;
} 
A_PROC_EXIT(rawinitialiseprobeinstance);
*ReturnedValue = (XHBBSIM);
return;
} 
#undef NL

A68_VOID  ZHBBSIM_rawreinitialiseprobeinstance(A68_376  Fn)
{ 
A68_INT  AIBBSIM_c;
A68_187  BIBBSIM_pis;
A68_INT  CIBBSIM_probeidinst;
A68_INT  DIBBSIM_i;
A68_INT  EIBBSIM;  /* to part of loop */
A_PROC_ENTRY(rawreinitialiseprobeinstance);
 /* line 1212: */
 /* line 1213: */
{ 
AIBBSIM_c = Fn.Circuit;
 /* line 1214: */
BIBBSIM_pis = (*(&((&A_VINDEX(BMXASIM_probeinstanceptrs,AIBBSIM_c))->Instptrs)));
 /* line 1215: */
CIBBSIM_probeidinst = ((*(&((&A_VINDEX(BMXASIM_probeinstanceptrs,AIBBSIM_c))->Probeinstance)))-1);
 /* line 1216: */
EIBBSIM = BIBBSIM_pis.upb;
for ( DIBBSIM_i = CIBBSIM_probeidinst;
DIBBSIM_i <= EIBBSIM;
DIBBSIM_i += 1 )
{ 
 /* line 1217: */
 /* line 1218: */
 /* line 1219: */
OCNASIM_cgpokeint(FIBBSIM_setflag, ((*(&((&A_VINDEX(BIBBSIM_pis,DIBBSIM_i))->Offset)))+Fn.Base));
}
 /* line 1220: */
 /* line 1221: */
IGBBSIM_addtoamprobelist(Fn, YYOASIM_globalstartinitlist, ZYOASIM_globalendinitlist);
} 
A_PROC_EXIT(rawreinitialiseprobeinstance);
return;
} 
#undef NL

A68_VOID  HIBBSIM_rawstopprobeinstances(A68_32  Bases)
{ 
A_PROC_ENTRY(rawstopprobeinstances);
 /* line 1224: */
 /* line 1225: */
{ 
SGBBSIM_delfromamprobelist(Bases, AZOASIM_globalstartinstlist, BZOASIM_globalendinstlist);
 /* line 1226: */
 /* line 1227: */
SGBBSIM_delfromamprobelist(Bases, YYOASIM_globalstartinitlist, ZYOASIM_globalendinitlist);
} 
A_PROC_EXIT(rawstopprobeinstances);
return;
} 
#undef NL

A_STATIC A68_VOID  IIBBSIM_anonymous(void)
{ 
A68_INT  JIBBSIM_start;
A68_INT  KIBBSIM_end;
A68_BOOL  LIBBSIM;  /* clause result */
A68_33  NIBBSIM_generator;   /* proc value of non-global proc */
A68_32  TIBBSIM;  /* avoid structure result */
A68_32  SIBBSIM_thisbase;
A68_32  UIBBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  VIBBSIM;  /* OPERATORS - assign op */
A68_INT  WIBBSIM_circuit;
A68_INT  XIBBSIM;  /* YIELD */
for ( ;; )
{ 
 /* line 1232: */
JIBBSIM_start = UCNASIM_cgpeekint(AZOASIM_globalstartinstlist);
 /* line 1233: */
KIBBSIM_end = UCNASIM_cgpeekint(BZOASIM_globalendinstlist);
 /* line 1234: */
 /* line 1235: */
 /* line 1236: */
LIBBSIM = (JIBBSIM_start<=KIBBSIM_end);
if ( !LIBBSIM ) break;
A_CLOSURE( NIBBSIM_generator, OIBBSIM_generator, PIBBSIM_generator );
A_CALLPROC(NIBBSIM_generator,(A68_TRUE, &TIBBSIM),(A68_TRUE, &TIBBSIM,(NIBBSIM_generator).nonlocals));
SIBBSIM_thisbase = TIBBSIM;
VIBBSIM = A_HVEC(UIBBSIM,UCNASIM_cgpeekint((JIBBSIM_start+DENASIM_ws)),A68_INT ) ;
A_VASSIGN2(VIBBSIM,SIBBSIM_thisbase,A68_INT );
 /* line 1237: */
WIBBSIM_circuit = UCNASIM_cgpeekint(JIBBSIM_start);
 /* line 1238: */
HIBBSIM_rawstopprobeinstances(SIBBSIM_thisbase);
 /* line 1239: */
 /* line 1240: */
XIBBSIM = 1 ;
OFBBSIM_rawdestroyprobeinstance(WIBBSIM_circuit, (*(&A_VINDEX(SIBBSIM_thisbase,XIBBSIM))));
}
return;
} 
#undef NL

A68_VOID  BJBBSIM_rawpeeksignalvalue(A68_376  Mloc, A68_VC  Answer)
{ 
A68_187  CJBBSIM;  /* clause result */
A68_INT  DJBBSIM;  /* YIELD */
A68_187  EJBBSIM_instptrs;
A68_375  FJBBSIM;  /* united object - for case conformity */
A68_374  GJBBSIM_l;
A68_374  HJBBSIM;  /* clause result */
A68_374  IJBBSIM_loc;
A68_134  JJBBSIM_wire;
A68_INT  KJBBSIM_next;
A68_139 * LJBBSIM_block;
A68_138  MJBBSIM;  /* forall yield */
A68_INT  NJBBSIM;  /* forall loop counter */
A68_INT  OJBBSIM_instoffset;
A68_INT  PJBBSIM;  /* ADICOPS - ABS INT */
A68_INT  QJBBSIM_raw;
A68_INT  RJBBSIM;  /* clause result */
A68_INT  SJBBSIM_address;
A68_INT  TJBBSIM_size;
A68_VC  UJBBSIM;  /* OPERATORS - trim index */
A68_VC  VJBBSIM;  /* avoid structure result */
A68_VC  WJBBSIM;  /* YIELD */
A_PROC_ENTRY(rawpeeksignalvalue);
 /* line 1244: */
 /* line 1246: */
{ 
 /* line 1248: */
if ( (Mloc.Circuit==0) )
{ 
 /* line 1249: */
CJBBSIM = (*AMXASIM_instanceptrs);
} 
else
{ 
 /* line 1250: */
DJBBSIM = Mloc.Circuit ;
CJBBSIM = (*(&((&A_VINDEX(BMXASIM_probeinstanceptrs,DJBBSIM))->Instptrs)));
} 
EJBBSIM_instptrs = CJBBSIM;
 /* line 1252: */
FJBBSIM = Mloc.Node ;
switch ( FJBBSIM.mode )
{ 
case 2: /* STRUCT(REF MODE134,INT)  */
GJBBSIM_l = (FJBBSIM.data.mode2);
HJBBSIM = GJBBSIM_l;
break;
default: 
A_IMP_SKIP ;
break;
} 
IJBBSIM_loc = HJBBSIM;
 /* line 1253: */
JJBBSIM_wire = (*IJBBSIM_loc.Wire);
 /* line 1254: */
KJBBSIM_next = 1;
 /* line 1255: */
MJBBSIM = JJBBSIM_wire.Blocks ;
NJBBSIM = MJBBSIM.upb -1;
LJBBSIM_block = MJBBSIM.data;
for (;NJBBSIM-- >= 0;
(LJBBSIM_block++
) )
{
 /* line 1256: */
OJBBSIM_instoffset = ((*(&(LJBBSIM_block->Instoffset)))+IJBBSIM_loc.Instance);
 /* line 1257: */
 /* line 1258: */
PJBBSIM = (*(&(LJBBSIM_block->Offset))) ;
QJBBSIM_raw = ((Mloc.Base+(*(&((&A_VINDEX(EJBBSIM_instptrs,OJBBSIM_instoffset))->Offset))))+A_ABS(PJBBSIM));
 /* line 1259: */
 /* line 1260: */
if ( ((*(&(LJBBSIM_block->Offset)))<0) )
{ 
 /* line 1261: */
 /* line 1263: */
RJBBSIM = UCNASIM_cgpeekint(QJBBSIM_raw);
} 
else
{ 
RJBBSIM = QJBBSIM_raw;
} 
SJBBSIM_address = RJBBSIM;
 /* line 1264: */
TJBBSIM_size = (*(&(LJBBSIM_block->Size)));
 /* line 1265: */
HCNASIM_cgpeek( TJBBSIM_size, SJBBSIM_address, &VJBBSIM );
WJBBSIM = A_VTRIM(UJBBSIM,(Answer),A_VTSCRIPT(&(UJBBSIM.upb),(Answer).upb,KJBBSIM_next,((KJBBSIM_next+TJBBSIM_size)-1))) ;
A_VASSIGN2(VJBBSIM,WJBBSIM,A68_CHAR );
 /* line 1266: */
 /* line 1267: */
KJBBSIM_next+=TJBBSIM_size;
}
 /* line 1268: */
} 
A_PROC_EXIT(rawpeeksignalvalue);
return;
} 
#undef NL

A68_VOID  ZJBBSIM_rawpokesignalvalue(A68_376  Mloc, A68_VC  Val)
{ 
A68_187  AKBBSIM;  /* clause result */
A68_INT  BKBBSIM;  /* YIELD */
A68_187  CKBBSIM_instptrs;
A68_375  DKBBSIM;  /* united object - for case conformity */
A68_374  EKBBSIM_l;
A68_374  FKBBSIM;  /* clause result */
A68_374  GKBBSIM_loc;
A68_134  IKBBSIM_wire;
A68_INT  JKBBSIM_next;
A68_139 * KKBBSIM_block;
A68_138  LKBBSIM;  /* forall yield */
A68_INT  MKBBSIM;  /* forall loop counter */
A68_INT  NKBBSIM_instoffset;
A68_INT  OKBBSIM;  /* ADICOPS - ABS INT */
A68_INT  PKBBSIM_raw;
A68_INT  QKBBSIM;  /* clause result */
A68_INT  RKBBSIM_address;
A68_INT  SKBBSIM_thissize;
A68_VC  TKBBSIM;  /* OPERATORS - trim index */
A68_186  UKBBSIM;  /* avoid structure result */
A68_186  VKBBSIM_realinstance;
A_PROC_ENTRY(rawpokesignalvalue);
 /* line 1279: */
 /* line 1281: */
{ 
 /* line 1283: */
if ( (Mloc.Circuit==0) )
{ 
 /* line 1284: */
AKBBSIM = (*AMXASIM_instanceptrs);
} 
else
{ 
 /* line 1285: */
BKBBSIM = Mloc.Circuit ;
AKBBSIM = (*(&((&A_VINDEX(BMXASIM_probeinstanceptrs,BKBBSIM))->Instptrs)));
} 
CKBBSIM_instptrs = AKBBSIM;
 /* line 1286: */
DKBBSIM = Mloc.Node ;
switch ( DKBBSIM.mode )
{ 
case 2: /* STRUCT(REF MODE134,INT)  */
EKBBSIM_l = (DKBBSIM.data.mode2);
FKBBSIM = EKBBSIM_l;
break;
default: 
A_IMP_SKIP ;
break;
} 
GKBBSIM_loc = FKBBSIM;
 /* line 1287: */
 /* line 1288: */
IKBBSIM_wire = (*GKBBSIM_loc.Wire);
 /* line 1289: */
JKBBSIM_next = 1;
 /* line 1290: */
LKBBSIM = IKBBSIM_wire.Blocks ;
MKBBSIM = LKBBSIM.upb -1;
KKBBSIM_block = LKBBSIM.data;
for (;MKBBSIM-- >= 0;
(KKBBSIM_block++
) )
{
 /* line 1291: */
NKBBSIM_instoffset = ((*(&(KKBBSIM_block->Instoffset)))+GKBBSIM_loc.Instance);
 /* line 1292: */
 /* line 1293: */
OKBBSIM = (*(&(KKBBSIM_block->Offset))) ;
PKBBSIM_raw = ((Mloc.Base+(*(&((&A_VINDEX(CKBBSIM_instptrs,NKBBSIM_instoffset))->Offset))))+A_ABS(OKBBSIM));
 /* line 1294: */
 /* line 1295: */
if ( ((*(&(KKBBSIM_block->Offset)))<0) )
{ 
 /* line 1296: */
 /* line 1298: */
QKBBSIM = UCNASIM_cgpeekint(PKBBSIM_raw);
} 
else
{ 
QKBBSIM = PKBBSIM_raw;
} 
RKBBSIM_address = QKBBSIM;
 /* line 1299: */
SKBBSIM_thissize = (*(&(KKBBSIM_block->Size)));
 /* line 1300: */
ACNASIM_cgpoke(A_VTRIM(TKBBSIM,(Val),A_VTSCRIPT(&(TKBBSIM.upb),(Val).upb,JKBBSIM_next,((JKBBSIM_next+SKBBSIM_thissize)-1))), RKBBSIM_address);
 /* line 1301: */
JKBBSIM_next+=SKBBSIM_thissize;
 /* line 1302: */
RXABSIM_instance( RKBBSIM_address, &UKBBSIM );
VKBBSIM_realinstance = UKBBSIM;
 /* line 1303: */
 /* line 1304: */
OCNASIM_cgpokeint(HKBBSIM_setflag, VKBBSIM_realinstance.Offset);
}
 /* line 1305: */
} 
A_PROC_EXIT(rawpokesignalvalue);
return;
} 
#undef NL

A_STATIC A68_502 * YKBBSIM_sources(A68_376  Mline)
{ 
A68_187  ZKBBSIM;  /* clause result */
A68_INT  ALBBSIM;  /* YIELD */
A68_187  BLBBSIM_instptrs;
A68_375  CLBBSIM;  /* united object - for case conformity */
A68_374  DLBBSIM_l;
A68_374  ELBBSIM;  /* clause result */
A68_374  FLBBSIM_line;
A68_502 * GLBBSIM_ans;
A68_134  HLBBSIM_wire;
A68_139 * ILBBSIM_block;
A68_138  JLBBSIM;  /* forall yield */
A68_INT  KLBBSIM;  /* forall loop counter */
A68_INT  LLBBSIM_instoffset;
A68_INT  MLBBSIM;  /* ADICOPS - ABS INT */
A68_INT  NLBBSIM_raw;
A68_INT  OLBBSIM;  /* clause result */
A68_INT  PLBBSIM_address;
A68_186  QLBBSIM;  /* avoid structure result */
A68_186  RLBBSIM_realinstance;
A68_502  SLBBSIM;  /* collateral clause result */
A68_502 * TLBBSIM;  /* YIELD */
A68_502 * ULBBSIM;  /* clause result */
A_PROC_ENTRY(sources);
 /* line 1316: */
 /* line 1318: */
{ 
 /* line 1320: */
if ( (Mline.Circuit==0) )
{ 
 /* line 1321: */
ZKBBSIM = (*AMXASIM_instanceptrs);
} 
else
{ 
 /* line 1322: */
ALBBSIM = Mline.Circuit ;
ZKBBSIM = (*(&((&A_VINDEX(BMXASIM_probeinstanceptrs,ALBBSIM))->Instptrs)));
} 
BLBBSIM_instptrs = ZKBBSIM;
 /* line 1323: */
CLBBSIM = Mline.Node ;
switch ( CLBBSIM.mode )
{ 
case 2: /* STRUCT(REF MODE134,INT)  */
DLBBSIM_l = (CLBBSIM.data.mode2);
ELBBSIM = DLBBSIM_l;
break;
default: 
A_IMP_SKIP ;
break;
} 
FLBBSIM_line = ELBBSIM;
 /* line 1324: */
GLBBSIM_ans = WKBBSIM_nilsourcelist;
 /* line 1325: */
HLBBSIM_wire = (*FLBBSIM_line.Wire);
 /* line 1326: */
JLBBSIM = HLBBSIM_wire.Blocks ;
KLBBSIM = JLBBSIM.upb -1;
ILBBSIM_block = JLBBSIM.data;
for (;KLBBSIM-- >= 0;
(ILBBSIM_block++
) )
{
 /* line 1327: */
LLBBSIM_instoffset = ((*(&(ILBBSIM_block->Instoffset)))+FLBBSIM_line.Instance);
 /* line 1328: */
 /* line 1329: */
MLBBSIM = (*(&(ILBBSIM_block->Offset))) ;
NLBBSIM_raw = ((Mline.Base+(*(&((&A_VINDEX(BLBBSIM_instptrs,LLBBSIM_instoffset))->Offset))))+A_ABS(MLBBSIM));
 /* line 1330: */
 /* line 1331: */
if ( ((*(&(ILBBSIM_block->Offset)))<0) )
{ 
 /* line 1332: */
 /* line 1334: */
OLBBSIM = UCNASIM_cgpeekint(NLBBSIM_raw);
} 
else
{ 
OLBBSIM = NLBBSIM_raw;
} 
PLBBSIM_address = OLBBSIM;
 /* line 1335: */
RXABSIM_instance( PLBBSIM_address, &QLBBSIM );
RLBBSIM_realinstance = QLBBSIM;
 /* line 1336: */
 /* line 1337: */
SLBBSIM.Fnno = RLBBSIM_realinstance.Fnno;
SLBBSIM.Offset = RLBBSIM_realinstance.Offset;
 /* line 1338: */
SLBBSIM.Tail = GLBBSIM_ans;
TLBBSIM = A_HEAP(A68_502 ) ;
(*TLBBSIM) = SLBBSIM ;
GLBBSIM_ans = TLBBSIM;
}
 /* line 1339: */
 /* line 1340: */
ULBBSIM = GLBBSIM_ans;
} 
A_PROC_EXIT(sources);
return( ULBBSIM );
} 
#undef NL

A_STATIC A68_VOID  ZLBBSIM_savefrozenlist(A68_167  Ferry, A68_36  Flt)
{ 
A68_INT  AMBBSIM_count;
A68_504 * BMBBSIM_head;
A_PROC_ENTRY(savefrozenlist);
 /* line 1349: */
 /* line 1350: */
{ 
AMBBSIM_count = 0;
 /* line 1351: */
BMBBSIM_head = WLBBSIM_frozenlist;
 /* line 1352: */
for ( ;; )
{ 
 /* line 1353: */
if ( !((BMBBSIM_head!=VLBBSIM_nilfrozenlist)) ) break;
AMBBSIM_count+=1;
 /* line 1354: */
 /* line 1355: */
BMBBSIM_head = (*(&(BMBBSIM_head->Tail)));
}
 /* line 1356: */
PHBASIM_writeint(AMBBSIM_count, Ferry, Flt);
 /* line 1357: */
BMBBSIM_head = WLBBSIM_frozenlist;
 /* line 1358: */
for ( ;; )
{ 
 /* line 1359: */
if ( !((BMBBSIM_head!=VLBBSIM_nilfrozenlist)) ) break;
JUBASIM_writemnode((*(&(BMBBSIM_head->Function))), Ferry, Flt);
 /* line 1360: */
 /* line 1361: */
BMBBSIM_head = (*(&(BMBBSIM_head->Tail)));
}
 /* line 1362: */
} 
A_PROC_EXIT(savefrozenlist);
return;
} 
#undef NL

A_STATIC A68_VOID  EMBBSIM_restorefrozenlist(A68_167  Ferry, A68_36  Flt)
{ 
A68_INT  FMBBSIM;  /* to part of loop */
A68_INT  GMBBSIM;  /* loop control */
A68_504  HMBBSIM;  /* collateral clause result */
A68_376  IMBBSIM;  /* avoid structure result */
A68_504 * JMBBSIM;  /* YIELD */
A_PROC_ENTRY(restorefrozenlist);
 /* line 1365: */
 /* line 1366: */
{ 
WLBBSIM_frozenlist = VLBBSIM_nilfrozenlist;
 /* line 1367: */
FMBBSIM = LGBASIM_readint(Ferry, Flt);
for ( GMBBSIM = 1;
GMBBSIM <= FMBBSIM;
GMBBSIM += 1 )
{ 
 /* line 1368: */
CUBASIM_readmnode( Ferry, Flt, &IMBBSIM );
HMBBSIM.Function = IMBBSIM;
 /* line 1369: */
HMBBSIM.Tail = WLBBSIM_frozenlist;
JMBBSIM = A_HEAP(A68_504 ) ;
(*JMBBSIM) = HMBBSIM ;
WLBBSIM_frozenlist = JMBBSIM;
}
 /* line 1370: */
} 
A_PROC_EXIT(restorefrozenlist);
return;
} 
#undef NL
 /* line 1374: */
 /* line 1375: */
 /* line 1376: */
 /* line 1377: */

A_STATIC A68_460 * PMBBSIM_findinputaliases(A68_460 * Inputs, A68_158  Aliases, A68_187  Instanceptrs, A68_INT  Instanceno, A68_INT  Flagval)
{ 
A68_460 * QMBBSIM_result;
A68_INT  RMBBSIM_j;
A68_INT  SMBBSIM;  /* to part of loop */
A68_INT  TMBBSIM_innerinstance;
A68_INT  UMBBSIM_inneroffset;
A68_460  VMBBSIM;  /* collateral clause result */
A68_158  WMBBSIM;  /* avoid structure result */
A68_460 * XMBBSIM;  /* YIELD */
A68_460 * YMBBSIM;  /* clause result */
A_PROC_ENTRY(findinputaliases);
 /* line 1378: */
 /* line 1379: */
{ 
QMBBSIM_result = Inputs;
 /* line 1380: */
SMBBSIM = Aliases.upb;
for ( RMBBSIM_j = 1;
RMBBSIM_j <= SMBBSIM;
RMBBSIM_j += 1 )
{ 
 /* line 1381: */
TMBBSIM_innerinstance = (Instanceno+(*(&((&A_VINDEX(Aliases,RMBBSIM_j))->Instoffset))));
 /* line 1382: */
UMBBSIM_inneroffset = (*(&((&A_VINDEX(Instanceptrs,TMBBSIM_innerinstance))->Offset)));
 /* line 1383: */
OCNASIM_cgpokeint(Flagval, UMBBSIM_inneroffset);
 /* line 1384: */
 /* line 1385: */
 /* line 1387: */
VMBBSIM.Fanoutto = UMBBSIM_inneroffset;
 /* line 1388: */
 /* line 1389: */
 /* line 1390: */
 /* line 1391: */
 /* line 1392: */
 /* line 1393: */
 /* line 1394: */
FVCASIM_lookupinputaliases( (*(&((&A_VINDEX(Instanceptrs,TMBBSIM_innerinstance))->Fnno))), (*(&((&A_VINDEX(Aliases,RMBBSIM_j))->Ipno))), &WMBBSIM );
VMBBSIM.Tail = PMBBSIM_findinputaliases(QMBBSIM_result, WMBBSIM, Instanceptrs, TMBBSIM_innerinstance, Flagval);
XMBBSIM = A_HEAP(A68_460 ) ;
(*XMBBSIM) = VMBBSIM ;
QMBBSIM_result = XMBBSIM;
}
 /* line 1395: */
 /* line 1396: */
YMBBSIM = QMBBSIM_result;
} 
A_PROC_EXIT(findinputaliases);
return( YMBBSIM );
} 
#undef NL
 /* line 1402: */
 /* line 1403: */
 /* line 1404: */
 /* line 1405: */
 /* line 1406: */
 /* line 1407: */

A_STATIC A68_VOID  GNBBSIM_actonallfanouts(A68_376  Mline, A68_INT  Fnno, A68_INT  Instanceno, A68_INT  Evalflag, A68_INT  Flagval, A68_187  Instptrs, A68_461  Action)
{ 
A68_502 * HNBBSIM_scan;
A68_32  JNBBSIM;  /* avoid structure result */
A68_INT  INBBSIM_sinkinput;
A68_136  KNBBSIM;  /* avoid structure result */
A68_136  LNBBSIM_sourceshape;
A68_INT  MNBBSIM_sourcefanout;
A68_460  NNBBSIM;  /* collateral clause result */
A68_158  ONBBSIM;  /* avoid structure result */
A68_460 * PNBBSIM;  /* YIELD */
A68_460 * QNBBSIM_allsinks;
A_PROC_ENTRY(actonallfanouts);
 /* line 1410: */
 /* line 1411: */
{ 
HNBBSIM_scan = YKBBSIM_sources(Mline);
 /* line 1415: */
QUCASIM_lookupinputsizes( Fnno, &JNBBSIM );
INBBSIM_sinkinput = (JNBBSIM.upb+1);
 /* line 1416: */
for ( ;; )
{ 
 /* line 1418: */
if ( !((HNBBSIM_scan!=WKBBSIM_nilsourcelist)) ) break;
DWCASIM_lookupshape( (*(&(HNBBSIM_scan->Fnno))), &KNBBSIM );
LNBBSIM_sourceshape = KNBBSIM;
 /* line 1419: */
MNBBSIM_sourcefanout = ((*(&(HNBBSIM_scan->Offset)))+LNBBSIM_sourceshape.Size);
 /* line 1420: */
OCNASIM_cgpokeint(Flagval, Evalflag);
 /* line 1421: */
 /* line 1423: */
NNBBSIM.Fanoutto = Evalflag;
NNBBSIM.Tail = DNABSIM_nilsinkinstancelist;
 /* line 1424: */
 /* line 1425: */
 /* line 1426: */
 /* line 1427: */
FVCASIM_lookupinputaliases( Fnno, INBBSIM_sinkinput-=1, &ONBBSIM );
PNBBSIM = A_HEAP(A68_460 ) ;
(*PNBBSIM) = NNBBSIM ;
QNBBSIM_allsinks = PMBBSIM_findinputaliases(PNBBSIM, ONBBSIM, Instptrs, Instanceno, Flagval);
 /* line 1428: */
A_CALLPROC(Action,(MNBBSIM_sourcefanout, (*QNBBSIM_allsinks)),(MNBBSIM_sourcefanout, (*QNBBSIM_allsinks),(Action).nonlocals));
 /* line 1429: */
 /* line 1430: */
HNBBSIM_scan = (*(&(HNBBSIM_scan->Tail)));
}
 /* line 1431: */
} 
A_PROC_EXIT(actonallfanouts);
return;
} 
#undef NL

A68_BOOL  SNBBSIM_rawunfreezeinstance(A68_376  Function)
{ 
A68_504 ** TNBBSIM_head;
A68_BOOL  UNBBSIM_found;
A68_BOOL  VNBBSIM;  /* optbool result */
A68_375  WNBBSIM;  /* united object - for case conformity */
A68_142  XNBBSIM_b;
A68_142  YNBBSIM;  /* clause result */
A68_142  ZNBBSIM_box;
A68_187  AOBBSIM;  /* clause result */
A68_INT  BOBBSIM;  /* YIELD */
A68_187  COBBSIM_instptrs;
A68_INT  DOBBSIM;  /* YIELD */
A68_INT  EOBBSIM_evalflag;
A68_376  FOBBSIM;  /* collateral clause result */
A68_374  GOBBSIM;  /* collateral clause result */
A68_151  HOBBSIM;  /* avoid structure result */
A68_134  IOBBSIM;  /* avoid structure result */
A68_134 * JOBBSIM;  /* YIELD */
A68_375  KOBBSIM;  /* OPERATORS - mode -> union mode */
A68_376  LOBBSIM_inputs;
A68_461  MOBBSIM;  /* procedure value */
A68_INT  NOBBSIM_thisinst;
A68_INT  OOBBSIM;  /* to part of loop */
A68_INT  POBBSIM;  /* YIELD */
A68_136  QOBBSIM;  /* avoid structure result */
A68_136  ROBBSIM_shape;
A68_INT  SOBBSIM;  /* YIELD */
A68_INT  TOBBSIM_instoffset;
A68_BITS  VOBBSIM;  /* ADICOPS - >= */
A68_INT  WOBBSIM_freezeoutputflag;
A68_BOOL  XOBBSIM;  /* clause result */
A_PROC_ENTRY(rawunfreezeinstance);
 /* line 1434: */
 /* line 1436: */
{ 
TNBBSIM_head = (&WLBBSIM_frozenlist);
 /* line 1437: */
UNBBSIM_found = A68_FALSE;
 /* line 1438: */
for ( ;; )
{ 
VNBBSIM = ((*TNBBSIM_head)!=VLBBSIM_nilfrozenlist);
if ( VNBBSIM )
{VNBBSIM = !UNBBSIM_found;
}
 /* line 1439: */
if ( !(VNBBSIM) ) break;
 /* line 1440: */
if ( AABASIM_((*(&((*TNBBSIM_head)->Function))), Function) )
{ 
(*TNBBSIM_head) = (*(&((*TNBBSIM_head)->Tail)));
 /* line 1441: */
 /* line 1442: */
 /* line 1443: */
UNBBSIM_found = A68_TRUE;
} 
else
{ 
 /* line 1444: */
 /* line 1445: */
TNBBSIM_head = (&((*TNBBSIM_head)->Tail));
} 
}
 /* line 1447: */
 /* line 1449: */
if ( UNBBSIM_found )
{ 
WNBBSIM = Function.Node ;
switch ( WNBBSIM.mode )
{ 
case 1: /* STRUCT(INT,INT)  */
XNBBSIM_b = (WNBBSIM.data.mode1);
YNBBSIM = XNBBSIM_b;
break;
default: 
A_IMP_SKIP ;
break;
} 
ZNBBSIM_box = YNBBSIM;
 /* line 1450: */
 /* line 1451: */
 /* line 1453: */
if ( (Function.Circuit==0) )
{ 
 /* line 1454: */
AOBBSIM = (*AMXASIM_instanceptrs);
} 
else
{ 
 /* line 1455: */
BOBBSIM = Function.Circuit ;
AOBBSIM = (*(&((&A_VINDEX(BMXASIM_probeinstanceptrs,BOBBSIM))->Instptrs)));
} 
COBBSIM_instptrs = AOBBSIM;
 /* line 1456: */
DOBBSIM = ZNBBSIM_box.Instance ;
EOBBSIM_evalflag = (Function.Base+(*(&((&A_VINDEX(COBBSIM_instptrs,DOBBSIM))->Offset))));
 /* line 1459: */
 /* line 1461: */
 /* line 1462: */
GSCASIM_rawlookupfunction( ZNBBSIM_box.Fn, &HOBBSIM );
EZCASIM_rawinputs( HOBBSIM, &IOBBSIM );
JOBBSIM = A_HEAP(A68_134 ) ;
(*JOBBSIM) = IOBBSIM ;
GOBBSIM.Wire = JOBBSIM;
GOBBSIM.Instance = ZNBBSIM_box.Instance;
 /* line 1463: */
FOBBSIM.Node = A_UNITE(KOBBSIM,mode2,2,GOBBSIM);
 /* line 1464: */
FOBBSIM.Circuit = Function.Circuit;
FOBBSIM.Base = Function.Base;
LOBBSIM_inputs = FOBBSIM;
 /* line 1466: */
 /* line 1467: */
MOBBSIM.fn.fn_global = GNABSIM_addtofanout;
MOBBSIM.nonlocals = A68_NIL;
GNBBSIM_actonallfanouts(LOBBSIM_inputs, ZNBBSIM_box.Fn, ZNBBSIM_box.Instance, EOBBSIM_evalflag, 1, COBBSIM_instptrs, MOBBSIM);
 /* line 1471: */
OOBBSIM = BXCASIM_lookuplastinstance(ZNBBSIM_box.Fn);
for ( NOBBSIM_thisinst = 1;
NOBBSIM_thisinst <= OOBBSIM;
NOBBSIM_thisinst += 1 )
{ 
 /* line 1473: */
POBBSIM = (ZNBBSIM_box.Instance+NOBBSIM_thisinst) ;
DWCASIM_lookupshape( (*(&((&A_VINDEX(COBBSIM_instptrs,POBBSIM))->Fnno))), &QOBBSIM );
ROBBSIM_shape = QOBBSIM;
 /* line 1474: */
 /* line 1475: */
SOBBSIM = (ZNBBSIM_box.Instance+NOBBSIM_thisinst) ;
TOBBSIM_instoffset = (Function.Base+(*(&((&A_VINDEX(COBBSIM_instptrs,SOBBSIM))->Offset))));
 /* line 1476: */
 /* line 1477: */
OCNASIM_cgpokeint(UOBBSIM_setflag, TOBBSIM_instoffset);
 /* line 1479: */
 /* line 1480: */
VOBBSIM = ROBBSIM_shape.Sort ;
if ( A_LB_GE(VOBBSIM,OHCASIM_aliensort) )
{ 
 /* line 1481: */
WOBBSIM_freezeoutputflag = ((TOBBSIM_instoffset+((UCNASIM_cgpeekint((TOBBSIM_instoffset+DENASIM_ws))+1)*DENASIM_ws))+(7*DENASIM_ws));
 /* line 1482: */
 /* line 1483: */
 /* line 1484: */
OCNASIM_cgpokeint(0, WOBBSIM_freezeoutputflag);
} 
}
 /* line 1485: */
} 
 /* line 1486: */
 /* line 1487: */
XOBBSIM = UNBBSIM_found;
} 
A_PROC_EXIT(rawunfreezeinstance);
return( XOBBSIM );
} 
#undef NL

A68_INT  ZOBBSIM_rawfreezeinstance(A68_376  Function)
{ 
A68_375  APBBSIM;  /* united object - for case conformity */
A68_142  BPBBSIM_b;
A68_142  CPBBSIM;  /* clause result */
A68_142  DPBBSIM_box;
A68_187  EPBBSIM;  /* clause result */
A68_INT  FPBBSIM;  /* YIELD */
A68_187  GPBBSIM_instptrs;
A68_INT  HPBBSIM;  /* YIELD */
A68_INT  IPBBSIM_evalflag;
A68_INT  JPBBSIM_result;
A68_504 * KPBBSIM_head;
A68_375  LPBBSIM;  /* united object - for case conformity */
A68_142  MPBBSIM_b;
A68_142  NPBBSIM;  /* clause result */
A68_142  OPBBSIM_box;
A68_INT  PPBBSIM;  /* YIELD */
A68_INT  QPBBSIM_headlwb;
A68_INT  RPBBSIM;  /* YIELD */
A68_INT  SPBBSIM_headupb;
A68_INT  TPBBSIM;  /* YIELD */
A68_INT  UPBBSIM_fnupb;
A68_504 ** VPBBSIM_head;
A68_375  WPBBSIM;  /* united object - for case conformity */
A68_142  XPBBSIM_b;
A68_142  YPBBSIM;  /* clause result */
A68_142  ZPBBSIM_box;
A68_INT  AQBBSIM;  /* YIELD */
A68_INT  BQBBSIM_headlwb;
A68_INT  CQBBSIM;  /* YIELD */
A68_INT  DQBBSIM_headupb;
A68_504  EQBBSIM;  /* collateral clause result */
A68_504 * FQBBSIM;  /* YIELD */
A68_376  GQBBSIM;  /* collateral clause result */
A68_374  HQBBSIM;  /* collateral clause result */
A68_151  IQBBSIM;  /* avoid structure result */
A68_134  JQBBSIM;  /* avoid structure result */
A68_134 * KQBBSIM;  /* YIELD */
A68_375  LQBBSIM;  /* OPERATORS - mode -> union mode */
A68_376  MQBBSIM_inputs;
A68_461  NQBBSIM;  /* procedure value */
A68_INT  OQBBSIM_thisinst;
A68_INT  PQBBSIM;  /* to part of loop */
A68_INT  QQBBSIM;  /* YIELD */
A68_136  RQBBSIM;  /* avoid structure result */
A68_136  SQBBSIM_shape;
A68_INT  TQBBSIM;  /* YIELD */
A68_INT  UQBBSIM_instoffset;
A68_BITS  WQBBSIM;  /* ADICOPS - >= */
A68_INT  XQBBSIM_freezeoutputflag;
A68_134  YQBBSIM;  /* avoid structure result */
A68_134  ZQBBSIM_outputs;
A68_139 * ARBBSIM_block;
A68_138  BRBBSIM;  /* forall yield */
A68_INT  CRBBSIM;  /* forall loop counter */
A68_INT  DRBBSIM;  /* clause result */
A_PROC_ENTRY(rawfreezeinstance);
 /* line 1491: */
 /* line 1492: */
{ 
APBBSIM = Function.Node ;
switch ( APBBSIM.mode )
{ 
case 1: /* STRUCT(INT,INT)  */
BPBBSIM_b = (APBBSIM.data.mode1);
CPBBSIM = BPBBSIM_b;
break;
default: 
A_IMP_SKIP ;
break;
} 
DPBBSIM_box = CPBBSIM;
 /* line 1493: */
 /* line 1494: */
 /* line 1496: */
if ( (Function.Circuit==0) )
{ 
 /* line 1497: */
EPBBSIM = (*AMXASIM_instanceptrs);
} 
else
{ 
 /* line 1498: */
FPBBSIM = Function.Circuit ;
EPBBSIM = (*(&((&A_VINDEX(BMXASIM_probeinstanceptrs,FPBBSIM))->Instptrs)));
} 
GPBBSIM_instptrs = EPBBSIM;
 /* line 1500: */
HPBBSIM = DPBBSIM_box.Instance ;
IPBBSIM_evalflag = (Function.Base+(*(&((&A_VINDEX(GPBBSIM_instptrs,HPBBSIM))->Offset))));
 /* line 1502: */
JPBBSIM_result = 0;
 /* line 1503: */
KPBBSIM_head = WLBBSIM_frozenlist;
 /* line 1504: */
for ( ;; )
{ 
 /* line 1505: */
if ( !(((KPBBSIM_head!=VLBBSIM_nilfrozenlist)&(JPBBSIM_result==0))) ) break;
LPBBSIM = (*(&((&(KPBBSIM_head->Function))->Node))) ;
switch ( LPBBSIM.mode )
{ 
case 1: /* STRUCT(INT,INT)  */
MPBBSIM_b = (LPBBSIM.data.mode1);
NPBBSIM = MPBBSIM_b;
break;
default: 
A_IMP_SKIP ;
break;
} 
OPBBSIM_box = NPBBSIM;
 /* line 1506: */
 /* line 1507: */
PPBBSIM = OPBBSIM_box.Instance ;
QPBBSIM_headlwb = (Function.Base+(*(&((&A_VINDEX(GPBBSIM_instptrs,PPBBSIM))->Offset))));
 /* line 1508: */
 /* line 1509: */
RPBBSIM = (OPBBSIM_box.Instance+BXCASIM_lookuplastinstance(OPBBSIM_box.Fn)) ;
SPBBSIM_headupb = (Function.Base+(*(&((&A_VINDEX(GPBBSIM_instptrs,RPBBSIM))->Offset))));
 /* line 1510: */
JPBBSIM_result = (2*(((IPBBSIM_evalflag>=QPBBSIM_headlwb)&(IPBBSIM_evalflag<=SPBBSIM_headupb))));
 /* line 1511: */
 /* line 1512: */
KPBBSIM_head = (*(&(KPBBSIM_head->Tail)));
}
 /* line 1514: */
 /* line 1516: */
if ( (JPBBSIM_result==0) )
{ 
TPBBSIM = (DPBBSIM_box.Instance+BXCASIM_lookuplastinstance(DPBBSIM_box.Fn)) ;
UPBBSIM_fnupb = (*(&((&A_VINDEX(GPBBSIM_instptrs,TPBBSIM))->Offset)));
 /* line 1519: */
VPBBSIM_head = (&WLBBSIM_frozenlist);
 /* line 1520: */
for ( ;; )
{ 
 /* line 1521: */
if ( !(((*VPBBSIM_head)!=VLBBSIM_nilfrozenlist)) ) break;
WPBBSIM = (*(&((&((*VPBBSIM_head)->Function))->Node))) ;
switch ( WPBBSIM.mode )
{ 
case 1: /* STRUCT(INT,INT)  */
XPBBSIM_b = (WPBBSIM.data.mode1);
YPBBSIM = XPBBSIM_b;
break;
default: 
A_IMP_SKIP ;
break;
} 
ZPBBSIM_box = YPBBSIM;
 /* line 1522: */
 /* line 1523: */
AQBBSIM = ZPBBSIM_box.Instance ;
BQBBSIM_headlwb = (Function.Base+(*(&((&A_VINDEX(GPBBSIM_instptrs,AQBBSIM))->Offset))));
 /* line 1524: */
 /* line 1525: */
CQBBSIM = (ZPBBSIM_box.Instance+BXCASIM_lookuplastinstance(ZPBBSIM_box.Fn)) ;
DQBBSIM_headupb = (Function.Base+(*(&((&A_VINDEX(GPBBSIM_instptrs,CQBBSIM))->Offset))));
 /* line 1526: */
 /* line 1531: */
if ( ((IPBBSIM_evalflag<=BQBBSIM_headlwb)&(UPBBSIM_fnupb>=DQBBSIM_headupb)) )
{ 
 /* line 1532: */
 /* line 1533: */
SNBBSIM_rawunfreezeinstance((*(&((*VPBBSIM_head)->Function))));
} 
else
{ 
 /* line 1534: */
 /* line 1535: */
VPBBSIM_head = (&((*VPBBSIM_head)->Tail));
} 
}
 /* line 1538: */
EQBBSIM.Function = Function;
EQBBSIM.Tail = WLBBSIM_frozenlist;
FQBBSIM = A_HEAP(A68_504 ) ;
(*FQBBSIM) = EQBBSIM ;
WLBBSIM_frozenlist = FQBBSIM;
 /* line 1541: */
 /* line 1543: */
 /* line 1544: */
GSCASIM_rawlookupfunction( DPBBSIM_box.Fn, &IQBBSIM );
EZCASIM_rawinputs( IQBBSIM, &JQBBSIM );
KQBBSIM = A_HEAP(A68_134 ) ;
(*KQBBSIM) = JQBBSIM ;
HQBBSIM.Wire = KQBBSIM;
HQBBSIM.Instance = DPBBSIM_box.Instance;
 /* line 1545: */
GQBBSIM.Node = A_UNITE(LQBBSIM,mode2,2,HQBBSIM);
 /* line 1546: */
GQBBSIM.Circuit = Function.Circuit;
GQBBSIM.Base = Function.Base;
MQBBSIM_inputs = GQBBSIM;
 /* line 1548: */
 /* line 1549: */
NQBBSIM.fn.fn_global = SNABSIM_removefromfanout;
NQBBSIM.nonlocals = A68_NIL;
GNBBSIM_actonallfanouts(MQBBSIM_inputs, DPBBSIM_box.Fn, DPBBSIM_box.Instance, IPBBSIM_evalflag, 0, GPBBSIM_instptrs, NQBBSIM);
 /* line 1553: */
PQBBSIM = BXCASIM_lookuplastinstance(DPBBSIM_box.Fn);
for ( OQBBSIM_thisinst = 1;
OQBBSIM_thisinst <= PQBBSIM;
OQBBSIM_thisinst += 1 )
{ 
 /* line 1555: */
QQBBSIM = (DPBBSIM_box.Instance+OQBBSIM_thisinst) ;
DWCASIM_lookupshape( (*(&((&A_VINDEX(GPBBSIM_instptrs,QQBBSIM))->Fnno))), &RQBBSIM );
SQBBSIM_shape = RQBBSIM;
 /* line 1556: */
 /* line 1557: */
TQBBSIM = (DPBBSIM_box.Instance+OQBBSIM_thisinst) ;
UQBBSIM_instoffset = (Function.Base+(*(&((&A_VINDEX(GPBBSIM_instptrs,TQBBSIM))->Offset))));
 /* line 1558: */
 /* line 1559: */
OCNASIM_cgpokeint(VQBBSIM_resetflag, UQBBSIM_instoffset);
 /* line 1560: */
 /* line 1561: */
WQBBSIM = SQBBSIM_shape.Sort ;
if ( A_LB_GE(WQBBSIM,OHCASIM_aliensort) )
{ 
 /* line 1562: */
XQBBSIM_freezeoutputflag = ((UQBBSIM_instoffset+((UCNASIM_cgpeekint((UQBBSIM_instoffset+DENASIM_ws))+1)*DENASIM_ws))+(7*DENASIM_ws));
 /* line 1563: */
 /* line 1564: */
 /* line 1565: */
OCNASIM_cgpokeint(1, XQBBSIM_freezeoutputflag);
} 
}
 /* line 1566: */
MWCASIM_lookupoutputs( DPBBSIM_box.Fn, &YQBBSIM );
ZQBBSIM_outputs = YQBBSIM;
 /* line 1567: */
BRBBSIM = ZQBBSIM_outputs.Blocks ;
CRBBSIM = BRBBSIM.upb -1;
ARBBSIM_block = BRBBSIM.data;
for (;CRBBSIM-- >= 0;
(ARBBSIM_block++
) )
{
 /* line 1568: */
if ( !((JPBBSIM_result==0)) ) break;
 /* line 1569: */
JPBBSIM_result = (((*(&(ARBBSIM_block->Offset)))<0));
}
 /* line 1570: */
} 
 /* line 1571: */
 /* line 1572: */
DRBBSIM = JPBBSIM_result;
} 
A_PROC_EXIT(rawfreezeinstance);
return( DRBBSIM );
} 
#undef NL

A_STATIC A68_VOID  ERBBSIM_anonymous(void)
{ 
for ( ;; )
{ 
 /* line 1578: */
if ( !((WLBBSIM_frozenlist!=VLBBSIM_nilfrozenlist)) ) break;
 /* line 1579: */
SNBBSIM_rawunfreezeinstance((*(&(WLBBSIM_frozenlist->Function))));
}
return;
} 
#undef NL

A68_VOID  IRBBSIM_rawpokesignalvalueandfanout(A68_376  Mloc, A68_VC  Val)
{ 
A68_187  JRBBSIM;  /* clause result */
A68_INT  KRBBSIM;  /* YIELD */
A68_187  LRBBSIM_instptrs;
A68_375  MRBBSIM;  /* united object - for case conformity */
A68_374  NRBBSIM_l;
A68_374  ORBBSIM;  /* clause result */
A68_374  PRBBSIM_loc;
A68_134  SRBBSIM_wire;
A68_INT  TRBBSIM_next;
A68_139 * URBBSIM_block;
A68_138  VRBBSIM;  /* forall yield */
A68_INT  WRBBSIM;  /* forall loop counter */
A68_INT  XRBBSIM_instoffset;
A68_INT  YRBBSIM;  /* ADICOPS - ABS INT */
A68_INT  ZRBBSIM_raw;
A68_INT  ASBBSIM;  /* clause result */
A68_INT  BSBBSIM_address;
A68_INT  CSBBSIM_thissize;
A68_VC  DSBBSIM;  /* OPERATORS - trim index */
A68_186  ESBBSIM;  /* avoid structure result */
A68_186  FSBBSIM_realinstance;
A68_136  GSBBSIM;  /* avoid structure result */
A68_136  HSBBSIM_shape;
A68_INT  ISBBSIM_fanoutlist;
A68_INT  JSBBSIM_i;
A68_INT  KSBBSIM;  /* to part of loop */
A_PROC_ENTRY(rawpokesignalvalueandfanout);
 /* line 1587: */
 /* line 1589: */
{ 
 /* line 1591: */
if ( (Mloc.Circuit==0) )
{ 
 /* line 1592: */
JRBBSIM = (*AMXASIM_instanceptrs);
} 
else
{ 
 /* line 1593: */
KRBBSIM = Mloc.Circuit ;
JRBBSIM = (*(&((&A_VINDEX(BMXASIM_probeinstanceptrs,KRBBSIM))->Instptrs)));
} 
LRBBSIM_instptrs = JRBBSIM;
 /* line 1594: */
MRBBSIM = Mloc.Node ;
switch ( MRBBSIM.mode )
{ 
case 2: /* STRUCT(REF MODE134,INT)  */
NRBBSIM_l = (MRBBSIM.data.mode2);
ORBBSIM = NRBBSIM_l;
break;
default: 
A_IMP_SKIP ;
break;
} 
PRBBSIM_loc = ORBBSIM;
 /* line 1595: */
 /* line 1596: */
 /* line 1597: */
SRBBSIM_wire = (*PRBBSIM_loc.Wire);
 /* line 1598: */
TRBBSIM_next = 1;
 /* line 1599: */
VRBBSIM = SRBBSIM_wire.Blocks ;
WRBBSIM = VRBBSIM.upb -1;
URBBSIM_block = VRBBSIM.data;
for (;WRBBSIM-- >= 0;
(URBBSIM_block++
) )
{
 /* line 1600: */
XRBBSIM_instoffset = ((*(&(URBBSIM_block->Instoffset)))+PRBBSIM_loc.Instance);
 /* line 1601: */
 /* line 1602: */
YRBBSIM = (*(&(URBBSIM_block->Offset))) ;
ZRBBSIM_raw = ((Mloc.Base+(*(&((&A_VINDEX(LRBBSIM_instptrs,XRBBSIM_instoffset))->Offset))))+A_ABS(YRBBSIM));
 /* line 1603: */
 /* line 1604: */
if ( ((*(&(URBBSIM_block->Offset)))<0) )
{ 
 /* line 1605: */
 /* line 1607: */
ASBBSIM = UCNASIM_cgpeekint(ZRBBSIM_raw);
} 
else
{ 
ASBBSIM = ZRBBSIM_raw;
} 
BSBBSIM_address = ASBBSIM;
 /* line 1608: */
CSBBSIM_thissize = (*(&(URBBSIM_block->Size)));
 /* line 1609: */
ACNASIM_cgpoke(A_VTRIM(DSBBSIM,(Val),A_VTSCRIPT(&(DSBBSIM.upb),(Val).upb,TRBBSIM_next,((TRBBSIM_next+CSBBSIM_thissize)-1))), BSBBSIM_address);
 /* line 1610: */
TRBBSIM_next+=CSBBSIM_thissize;
 /* line 1611: */
RXABSIM_instance( BSBBSIM_address, &ESBBSIM );
FSBBSIM_realinstance = ESBBSIM;
 /* line 1612: */
OCNASIM_cgpokeint(RRBBSIM_resetflag, FSBBSIM_realinstance.Offset);
 /* line 1614: */
 /* line 1615: */
DWCASIM_lookupshape( FSBBSIM_realinstance.Fnno, &GSBBSIM );
HSBBSIM_shape = GSBBSIM;
 /* line 1616: */
ISBBSIM_fanoutlist = UCNASIM_cgpeekint((FSBBSIM_realinstance.Offset+HSBBSIM_shape.Size));
 /* line 1618: */
KSBBSIM = UCNASIM_cgpeekint(ISBBSIM_fanoutlist);
for ( JSBBSIM_i = 1;
JSBBSIM_i <= KSBBSIM;
JSBBSIM_i += 1 )
{ 
 /* line 1619: */
 /* line 1620: */
OCNASIM_cgpokeint(QRBBSIM_setflag, UCNASIM_cgpeekint((ISBBSIM_fanoutlist+(JSBBSIM_i*DENASIM_ws))));
}
 /* line 1621: */
}
 /* line 1622: */
} 
A_PROC_EXIT(rawpokesignalvalueandfanout);
return;
} 
#undef NL

A68_INT  MSBBSIM_rawmakeflagfanouts(A68_376  Mline)
{ 
A68_INT  NSBBSIM_flagaddress;
A68_502 * OSBBSIM_scan;
A68_136  PSBBSIM;  /* avoid structure result */
A68_136  QSBBSIM_shape;
A68_INT  RSBBSIM_fanout;
A68_460  SSBBSIM;  /* collateral clause result */
A68_460  TSBBSIM_mon;
A68_460  USBBSIM;  /* collateral clause result */
A68_INT  VSBBSIM;  /* clause result */
A_PROC_ENTRY(rawmakeflagfanouts);
 /* line 1630: */
 /* line 1631: */
{ 
NSBBSIM_flagaddress = KXOASIM_allocateammemory(DENASIM_ws);
 /* line 1632: */
OSBBSIM_scan = YKBBSIM_sources(Mline);
 /* line 1633: */
for ( ;; )
{ 
 /* line 1635: */
if ( !((OSBBSIM_scan!=WKBBSIM_nilsourcelist)) ) break;
DWCASIM_lookupshape( (*(&(OSBBSIM_scan->Fnno))), &PSBBSIM );
QSBBSIM_shape = PSBBSIM;
 /* line 1636: */
RSBBSIM_fanout = ((*(&(OSBBSIM_scan->Offset)))+QSBBSIM_shape.Size);
 /* line 1637: */
SSBBSIM.Fanoutto = VYOASIM_globalmonitorchanged;
SSBBSIM.Tail = DNABSIM_nilsinkinstancelist;
TSBBSIM_mon = SSBBSIM;
 /* line 1638: */
USBBSIM.Fanoutto = NSBBSIM_flagaddress;
USBBSIM.Tail = (&TSBBSIM_mon);
GNABSIM_addtofanout(RSBBSIM_fanout, USBBSIM);
 /* line 1639: */
 /* line 1640: */
OSBBSIM_scan = (*(&(OSBBSIM_scan->Tail)));
}
 /* line 1641: */
 /* line 1642: */
VSBBSIM = NSBBSIM_flagaddress;
} 
A_PROC_EXIT(rawmakeflagfanouts);
return( VSBBSIM );
} 
#undef NL

A68_VOID  YSBBSIM_rawremoveflagfanouts(A68_376  Mline, A68_INT  Flagaddress)
{ 
A68_502 * ZSBBSIM_scan;
A68_136  ATBBSIM;  /* avoid structure result */
A68_136  BTBBSIM_shape;
A68_INT  CTBBSIM_fanout;
A68_460  DTBBSIM;  /* collateral clause result */
A68_460  ETBBSIM_mon;
A68_460  FTBBSIM;  /* collateral clause result */
A_PROC_ENTRY(rawremoveflagfanouts);
 /* line 1649: */
 /* line 1650: */
{ 
ZSBBSIM_scan = YKBBSIM_sources(Mline);
 /* line 1651: */
for ( ;; )
{ 
 /* line 1653: */
if ( !((ZSBBSIM_scan!=WKBBSIM_nilsourcelist)) ) break;
DWCASIM_lookupshape( (*(&(ZSBBSIM_scan->Fnno))), &ATBBSIM );
BTBBSIM_shape = ATBBSIM;
 /* line 1654: */
CTBBSIM_fanout = ((*(&(ZSBBSIM_scan->Offset)))+BTBBSIM_shape.Size);
 /* line 1655: */
DTBBSIM.Fanoutto = VYOASIM_globalmonitorchanged;
DTBBSIM.Tail = DNABSIM_nilsinkinstancelist;
ETBBSIM_mon = DTBBSIM;
 /* line 1656: */
FTBBSIM.Fanoutto = Flagaddress;
FTBBSIM.Tail = (&ETBBSIM_mon);
SNABSIM_removefromfanout(CTBBSIM_fanout, FTBBSIM);
 /* line 1657: */
 /* line 1658: */
ZSBBSIM_scan = (*(&(ZSBBSIM_scan->Tail)));
}
 /* line 1659: */
 /* line 1660: */
RXOASIM_freeammemory(Flagaddress);
} 
A_PROC_EXIT(rawremoveflagfanouts);
return;
} 
#undef NL

A68_VOID  GTBBSIM_rawclearinterrupts(void)
{ 
A_PROC_ENTRY(rawclearinterrupts);
NDNASIM_cgclearinterrupts();
A_PROC_EXIT(rawclearinterrupts);
return;
} 
#undef NL

A_STATIC A68_VOID  HTBBSIM_sizemessages(void)
{ 
A68_372  ITBBSIM;  /* avoid structure result */
A68_372  JTBBSIM_cgsizedata;
A68_511  KTBBSIM;  /* collateral clause result */
A68_52  NTBBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  OTBBSIM;  /* YIELD */
A68_52  PTBBSIM;  /* OPERATORS - mode -> union mode */
A68_INT  QTBBSIM;  /* YIELD */
A68_52  TTBBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  UTBBSIM;  /* YIELD */
A68_52  VTBBSIM;  /* OPERATORS - mode -> union mode */
A68_56  WTBBSIM;  /* procedure value */
A68_52  ZTBBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  AUBBSIM;  /* YIELD */
A68_52  BUBBSIM;  /* OPERATORS - mode -> union mode */
A68_INT  CUBBSIM;  /* YIELD */
A68_52  FUBBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  GUBBSIM;  /* YIELD */
A68_52  HUBBSIM;  /* OPERATORS - mode -> union mode */
A68_56  IUBBSIM;  /* procedure value */
A68_52  JUBBSIM;  /* OPERATORS - mode -> union mode */
A68_56  KUBBSIM;  /* procedure value */
A68_85  LUBBSIM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(sizemessages);
{ 
ROMASIM_cgsizes(  &ITBBSIM );
JTBBSIM_cgsizedata = ITBBSIM;
 /* line 1675: */
 /* line 1676: */
if ( EBAAOST_(OHBAOST_testmode, OCAAOST_null_options) )
{ 
OTBBSIM = MTBBSIM ;
KTBBSIM.data[0] = A_UNITE(NTBBSIM,mode7,7,OTBBSIM);
QTBBSIM = JTBBSIM_cgsizedata.Codesize ;
KTBBSIM.data[1] = A_UNITE(PTBBSIM,mode1,1,QTBBSIM);
UTBBSIM = STBBSIM ;
KTBBSIM.data[2] = A_UNITE(TTBBSIM,mode7,7,UTBBSIM);
 /* line 1677: */
WTBBSIM.fn.fn_global = LRAAOSL_newline;
WTBBSIM.nonlocals = A68_NIL;
KTBBSIM.data[3] = A_UNITE(VTBBSIM,mode12,12,WTBBSIM);
AUBBSIM = YTBBSIM ;
KTBBSIM.data[4] = A_UNITE(ZTBBSIM,mode7,7,AUBBSIM);
CUBBSIM = JTBBSIM_cgsizedata.Datasize ;
KTBBSIM.data[5] = A_UNITE(BUBBSIM,mode1,1,CUBBSIM);
GUBBSIM = EUBBSIM ;
KTBBSIM.data[6] = A_UNITE(FUBBSIM,mode7,7,GUBBSIM);
 /* line 1678: */
IUBBSIM.fn.fn_global = LRAAOSL_newline;
IUBBSIM.nonlocals = A68_NIL;
KTBBSIM.data[7] = A_UNITE(HUBBSIM,mode12,12,IUBBSIM);
KUBBSIM.fn.fn_global = LRAAOSL_newline;
KUBBSIM.nonlocals = A68_NIL;
KTBBSIM.data[8] = A_UNITE(JUBBSIM,mode12,12,KUBBSIM);
 /* line 1679: */
 /* line 1680: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(LUBBSIM,KTBBSIM,9,A68_52 ));
} 
} 
A_PROC_EXIT(sizemessages);
return;
} 
#undef NL

A68_VOID  NUBBSIM_rawterminatekernel(A68_36  Flt)
{ 
A68_369  OUBBSIM;  /* avoid structure result */
A_PROC_ENTRY(rawterminatekernel);
 /* line 1688: */
 /* line 1690: */
{ 
OCNASIM_cgpokeint(GFMASIM_terminateaction, QYOASIM_globalaction);
 /* line 1691: */
ADNASIM_cgsimulate( FOABSIM_simtime, &OUBBSIM );
OUBBSIM;
 /* line 1692: */
A_CALLPROC(KOABSIM_unfreezeallinstances,(),((KOABSIM_unfreezeallinstances).nonlocals));
 /* line 1693: */
VYCASIM_removetables();
 /* line 1694: */
HAABSIM_removeinstances();
 /* line 1695: */
FWABSIM_clearprobelist();
 /* line 1696: */
 /* line 1697: */
AINASIM_amclosedown(Flt);
} 
A_PROC_EXIT(rawterminatekernel);
return;
} 
#undef NL
 /* line 1701: */
 /* line 1702: */
 /* line 1703: */

A68_VOID  TUBBSIM_rawinitialisekernel(A68_185 * Simfile, A68_INT  Diagnosticlevel, A68_43  Instr, A68_36  Flt, A68_375  *ReturnedValue)
{ 
A68_36  WUBBSIM_faultclosedown;   /* proc value of non-global proc */
A68_INT  BVBBSIM_fnno;
A68_VC  CVBBSIM;  /* OPERATORS - nil -> mode */
A68_375  DVBBSIM;  /* clause result */
A68_375  EVBBSIM;  /* avoid structure result */
A_PROC_ENTRY(rawinitialisekernel);
 /* line 1704: */
 /* line 1705: */
{ 
A_CLOSURE( WUBBSIM_faultclosedown, XUBBSIM_faultclosedown, YUBBSIM_faultclosedown );
(( YUBBSIM_faultclosedown * ) ( WUBBSIM_faultclosedown.nonlocals )) -> Flt = Flt;
 /* line 1711: */
WLBBSIM_frozenlist = VLBBSIM_nilfrozenlist;
 /* line 1712: */
OXCASIM_initialisetables();
 /* line 1713: */
RIXASIM_translateinitialise(Instr, Diagnosticlevel, WUBBSIM_faultclosedown);
 /* line 1718: */
 /* line 1719: */
if ( (GENASIM_sizeunit<4) )
{ 
 /* line 1720: */
NKDAOST_sysfault(AVBBSIM);
} 
 /* line 1723: */
BVBBSIM_fnno = AHABSIM_translate(Simfile, Diagnosticlevel, Instr, Flt);
 /* line 1726: */
HTBBSIM_sizemessages();
 /* line 1727: */
GOABSIM_sfid = TTCAOST_nullid;
 /* line 1728: */
IOABSIM_oldinputptrs = A_VVAC(CVBBSIM);
 /* line 1729: */
FWABSIM_clearprobelist();
 /* line 1730: */
A_CALLPROC(FSABSIM_clearamprobelists,(A68_TRUE),(A68_TRUE,(FSABSIM_clearamprobelists).nonlocals));
 /* line 1731: */
 /* line 1732: */
MOABSIM_setfunction( BVBBSIM_fnno, &EVBBSIM );
DVBBSIM = EVBBSIM;
} 
A_PROC_EXIT(rawinitialisekernel);
*ReturnedValue = (DVBBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  GVBBSIM_generator(A68_BOOL  FVBBSIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  HVBBSIM;  /* clause result */
A68_VC  IVBBSIM;  /* OPERATORS - dynamic generator */
{ 
IVBBSIM.upb = 9 ;
( FVBBSIM_anonymous? A_VLOC(A68_CHAR ,IVBBSIM): A_VHEAP(A68_CHAR ,IVBBSIM) );
HVBBSIM = IVBBSIM;
} 
*ReturnedValue = (HVBBSIM);
return;
} 
#undef NL
 /* line 1742: */
 /* line 1743: */

A68_VOID  TVBBSIM_rawsavestate(A68_INT * Time, A68_VC * Function, A68_167  Ferry1, A68_167  Ferry2, A68_36  Flt)
{ 
A68_369  UVBBSIM;  /* avoid structure result */
A_PROC_ENTRY(rawsavestate);
 /* line 1744: */
 /* line 1745: */
{ 
(*Time) = FOABSIM_simtime;
 /* line 1746: */
(*Function) = GOABSIM_sfid;
 /* line 1748: */
A_CALLPROC(Ferry1,(JVBBSIM_signature, Flt),(JVBBSIM_signature, Flt,(Ferry1).nonlocals));
 /* line 1749: */
PHBASIM_writeint(HOABSIM_sfno, Ferry1, Flt);
 /* line 1750: */
BIBASIM_writeid(IOABSIM_oldinputptrs, Ferry1, Flt);
 /* line 1752: */
XOMASIM_cgsavestate(Ferry1, Ferry2, Flt);
 /* line 1754: */
GBDASIM_savetables(Ferry1, Flt);
 /* line 1756: */
YAABSIM_saveinstanceptrs(Ferry1, Flt);
 /* line 1758: */
UXOASIM_savememorymanagement(Ferry1, Flt);
 /* line 1759: */
UWABSIM_saveprobes(Ferry1, Flt);
 /* line 1760: */
ZLBBSIM_savefrozenlist(Ferry1, Flt);
 /* line 1762: */
OCNASIM_cgpokeint(EFMASIM_saveaction, QYOASIM_globalaction);
 /* line 1763: */
 /* line 1765: */
ADNASIM_cgsimulate( (*Time), &UVBBSIM );
UVBBSIM;
} 
A_PROC_EXIT(rawsavestate);
return;
} 
#undef NL
 /* line 1769: */
 /* line 1770: */
 /* line 1771: */

A68_VOID  CWBBSIM_rawrestorestate(A68_INT  Diagnosticlevel, A68_INT  Time, A68_VC  Function, A68_167  Ferry1, A68_167  Ferry2, A68_43  Instr, A68_36  Flt, A68_375  *ReturnedValue)
{ 
A68_36  FWBBSIM_faultclosedown;   /* proc value of non-global proc */
A68_31  JWBBSIM_generator;   /* proc value of non-global proc */
A68_VC  PWBBSIM;  /* avoid structure result */
A68_VC  OWBBSIM_savedsignature;
A68_VC  SWBBSIM;  /* avoid structure result */
A68_369  TWBBSIM;  /* avoid structure result */
A68_142  UWBBSIM;  /* collateral clause result */
A68_375  VWBBSIM;  /* clause result */
A68_375  WWBBSIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(rawrestorestate);
 /* line 1772: */
 /* line 1773: */
{ 
A_CLOSURE( FWBBSIM_faultclosedown, GWBBSIM_faultclosedown, HWBBSIM_faultclosedown );
(( HWBBSIM_faultclosedown * ) ( FWBBSIM_faultclosedown.nonlocals )) -> Flt = Flt;
 /* line 1778: */
FOABSIM_simtime = Time;
 /* line 1779: */
GOABSIM_sfid = Function;
 /* line 1780: */
A_CLOSURE( JWBBSIM_generator, KWBBSIM_generator, LWBBSIM_generator );
A_CALLPROC(JWBBSIM_generator,(A68_TRUE, &PWBBSIM),(A68_TRUE, &PWBBSIM,(JWBBSIM_generator).nonlocals));
OWBBSIM_savedsignature = PWBBSIM;
 /* line 1781: */
A_CALLPROC(Ferry1,(OWBBSIM_savedsignature, Flt),(OWBBSIM_savedsignature, Flt,(Ferry1).nonlocals));
 /* line 1782: */
if ( A_VC_NE(OWBBSIM_savedsignature,JVBBSIM_signature) )
{ 
A_CALLPROC(Flt,(RWBBSIM),(RWBBSIM,(Flt).nonlocals));
} 
 /* line 1783: */
HOABSIM_sfno = LGBASIM_readint(Ferry1, Flt);
 /* line 1784: */
RGBASIM_readid( Ferry1, Flt, &SWBBSIM );
IOABSIM_oldinputptrs = SWBBSIM;
 /* line 1785: */
SGNASIM_aminitialise(Instr, Diagnosticlevel, Flt);
 /* line 1786: */
NIXASIM_amlocationsinitialise();
 /* line 1788: */
LPMASIM_cgrestorestate(Ferry1, Ferry2, FWBBSIM_faultclosedown);
 /* line 1789: */
HTBBSIM_sizemessages();
 /* line 1791: */
RCDASIM_restoretables(Ferry1, FWBBSIM_faultclosedown);
 /* line 1793: */
KBABSIM_restoreinstanceptrs(Ferry1, FWBBSIM_faultclosedown);
 /* line 1795: */
AYOASIM_restorememorymanagement(Ferry1, FWBBSIM_faultclosedown);
 /* line 1796: */
ZWABSIM_restoreprobes(Ferry1, FWBBSIM_faultclosedown);
 /* line 1797: */
EMBBSIM_restorefrozenlist(Ferry1, Flt);
 /* line 1800: */
OCNASIM_cgpokeint(FFMASIM_restoreaction, QYOASIM_globalaction);
 /* line 1801: */
ADNASIM_cgsimulate( FOABSIM_simtime, &TWBBSIM );
TWBBSIM;
 /* line 1803: */
UWBBSIM.Fn = HOABSIM_sfno;
 /* line 1804: */
UWBBSIM.Instance = JWCASIM_lookupaninstance(HOABSIM_sfno);
 /* line 1807: */
VWBBSIM = A_UNITE(WWBBSIM,mode1,1,UWBBSIM);
} 
A_PROC_EXIT(rawrestorestate);
*ReturnedValue = (VWBBSIM);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 6: */
void YMABSIM(void)   /* initialise DECS kerti */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/kerti.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/ostools/assoc/mfiles/testmode.m","./mfiles/kememory.m","./mfiles/kesave.m","./mfiles/kebasics.m","./mfiles/keambasics.m","./mfiles/keamstandard.m","./mfiles/keamgen.m","./mfiles/keinstance.m","./mfiles/ketranslate.m","./mfiles/kesignals.m","./mfiles/kesymbols.m","/u/model/ella/ostools/assoc/mfiles/options.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_VC  JOABSIM;  /* OPERATORS - nil -> mode */
A68_466  EGBBSIM;  /* procedure value */
A68_119  YIBBSIM;  /* procedure value */
A68_119  FRBBSIM;  /* procedure value */
A68_VC  KVBBSIM;  /* avoid structure result */
A68_VC  NVBBSIM;  /* OPERATORS - assign op */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
PCAAOST();   /* USE osinterface */
QFBAOST();   /* USE testmode */
KSOASIM();   /* USE kememory */
EFBASIM();   /* USE kesave */
JSAASIM();   /* USE kebasics */
XDNASIM();   /* USE keambasics */
HYOASIM();   /* USE keamstandard */
IIXASIM();   /* USE keamgen */
MLXASIM();   /* USE keinstance */
BDABSIM();   /* USE ketranslate */
NYNASIM();   /* USE kesignals */
TCCASIM();   /* USE kesymbols */
BAAAOST();   /* USE options */
JSCAOST();   /* USE basics */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/kerti.a68";
A_config.translation_time = "Tue Apr  4 11:13:31 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "XMABSIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:13:31 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS kerti);
UEAALIB_a68config(LGAALIB_configinfo, CNABSIM);
 /* line 105: */
 /* line 106: */
 /* line 109: */
 /* line 138: */
 /* line 170: */
FOABSIM_simtime = 0;
 /* line 174: */
 /* line 178: */
 /* line 185: */
IOABSIM_oldinputptrs = (A_VVAC(JOABSIM));
 /* line 191: */
 /* line 207: */
 /* line 372: */
 /* line 374: */
 /* line 376: */
 /* line 404: */
 /* line 472: */
 /* line 475: */
 /* line 476: */
 /* line 494: */
 /* line 495: */
 /* line 506: */
 /* line 508: */
 /* line 509: */
 /* line 511: */
 /* line 516: */
 /* line 517: */
 /* line 536: */
 /* line 537: */
 /* line 549: */
 /* line 553: */
 /* line 554: */
 /* line 558: */
 /* line 560: */
 /* line 561: */
 /* line 564: */
 /* line 567: */
 /* line 583: */
 /* line 601: */
 /* line 612: */
 /* line 638: */
 /* line 670: */
 /* line 671: */
 /* line 709: */
 /* line 813: */
 /* line 830: */
 /* line 846: */
 /* line 865: */
 /* line 895: */
 /* line 905: */
 /* line 918: */
 /* line 955: */
 /* line 974: */
 /* line 991: */
 /* line 1064: */
 /* line 1105: */
 /* line 1106: */
EGBBSIM.fn.fn_global = DGBBSIM_anonymous;
EGBBSIM.nonlocals = A68_NIL;
FSABSIM_clearamprobelists = EGBBSIM;
 /* line 1125: */
 /* line 1152: */
 /* line 1189: */
 /* line 1211: */
 /* line 1223: */
 /* line 1229: */
 /* line 1231: */
YIBBSIM.fn.fn_global = IIBBSIM_anonymous;
YIBBSIM.nonlocals = A68_NIL;
GSABSIM_destroyallprobeinstances = YIBBSIM;
 /* line 1243: */
 /* line 1278: */
 /* line 1312: */
 /* line 1313: */
 /* line 1315: */
 /* line 1344: */
 /* line 1345: */
 /* line 1346: */
 /* line 1348: */
 /* line 1364: */
 /* line 1372: */
 /* line 1373: */
 /* line 1401: */
 /* line 1433: */
 /* line 1490: */
 /* line 1575: */
 /* line 1577: */
FRBBSIM.fn.fn_global = ERBBSIM_anonymous;
FRBBSIM.nonlocals = A68_NIL;
KOABSIM_unfreezeallinstances = FRBBSIM;
 /* line 1586: */
 /* line 1629: */
 /* line 1648: */
 /* line 1664: */
 /* line 1671: */
 /* line 1672: */
 /* line 1674: */
 /* line 1687: */
 /* line 1700: */
 /* line 1739: */
GVBBSIM_generator( A68_TRUE, &KVBBSIM );
JVBBSIM_signature = KVBBSIM;
NVBBSIM = MVBBSIM ;
A_VASSIGN2(NVBBSIM,JVBBSIM_signature,A68_CHAR );
 /* line 1741: */
 /* line 1768: */
 /* line 1820: */
A_PROC_EXIT(DECS kerti);
} 
#undef NL
/* end of translation of ./a68files/kerti.a68 */
