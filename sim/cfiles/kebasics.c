
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
/* UNAME:ISAASIM */
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

A_PROCEDURE(A68_VOID ,A68t113,(void),(void *));
typedef struct A68t113  A68_113 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t114,(struct A68t113 ),(struct A68t113 ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(MODE113) VOID */

A_PROCEDURE(A68_VOID ,A68t115,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t115  A68_115 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t116,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t116  A68_116 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,55,A68t117);
typedef struct A68t117  A68_117 ;    /* STRUCT 55 CHAR */
struct A68t119{
A68_INT  Svoid;
A_PAD_INT(PAD_22)
};
typedef struct A68t119  A68_119 ;    /* STRUCT(INT)  */
struct A68t120{
A68_INT  Snull;
A_PAD_INT(PAD_23)
};
typedef struct A68t120  A68_120 ;    /* STRUCT(INT)  */
struct A68t121{
A68_VC  Id;
A68_INT  Lwb;
A_PAD_INT(PAD_24)
A68_INT  Upb;
A_PAD_INT(PAD_25)
};
typedef struct A68t121  A68_121 ;    /* STRUCT(REF MODE26,INT,INT)  */
struct A68t122{
A68_VC  Id;
A68_VC  Char;
};
typedef struct A68t122  A68_122 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t123{
A68_INT  No;
A_PAD_INT(PAD_26)
struct A68t122  T;
};
typedef struct A68t123  A68_123 ;    /* STRUCT(INT,MODE122)  */
struct A68t129 { A68_INT mode; union {
struct A68t124 * mode1;
struct A68t121 * mode2;
struct A68t122 * mode3;
struct A68t127 * mode4;
struct A68t123 * mode5;
struct A68t125 * mode6;
struct A68t126 * mode7;
struct A68t119  mode8;
struct A68t120  mode9;
} data; };
typedef struct A68t129  A68_129 ;    /* UNION(REF MODE124,REF MODE121,REF MODE122,REF MODE127,REF MODE123,REF MODE125,REF MODE126,MODE119,MODE120)  */
struct A68t124{
A68_VC  Id;
struct A68t129  T;
struct A68t124 * Rest;
};
typedef struct A68t124  A68_124 ;    /* STRUCT(REF MODE26,MODE129,REF MODE124)  */
struct A68t125{
struct A68t129  From;
struct A68t129  To;
};
typedef struct A68t125  A68_125 ;    /* STRUCT(MODE129,MODE129)  */
struct A68t126{
struct A68t129  T;
struct A68t126 * Rest;
};
typedef struct A68t126  A68_126 ;    /* STRUCT(MODE129,REF MODE126)  */
struct A68t127{
A68_INT  No;
A_PAD_INT(PAD_27)
struct A68t129  Type;
};
typedef struct A68t127  A68_127 ;    /* STRUCT(INT,MODE129)  */
struct A68t128 { A68_INT mode; union {
struct A68t124 * mode1;
struct A68t121 * mode2;
struct A68t122 * mode3;
} data; };
typedef struct A68t128  A68_128 ;    /* UNION(REF MODE124,REF MODE121,REF MODE122)  */
struct A68t131{
A68_INT  Svvoid;
A_PAD_INT(PAD_28)
};
typedef struct A68t131  A68_131 ;    /* STRUCT(INT)  */
struct A68t132{
A68_INT  Svnull;
A_PAD_INT(PAD_29)
};
typedef struct A68t132  A68_132 ;    /* STRUCT(INT)  */
struct A68t133{
struct A68t129  Type;
};
typedef struct A68t133  A68_133 ;    /* STRUCT(MODE129)  */
struct A68t134{
struct A68t121 * Type;
A68_INT  Value;
A_PAD_INT(PAD_30)
};
typedef struct A68t134  A68_134 ;    /* STRUCT(REF MODE121,INT)  */
struct A68t135{
struct A68t122 * Type;
A68_CHAR  Value;
A_PAD_CHAR(PAD_31)
};
typedef struct A68t135  A68_135 ;    /* STRUCT(REF MODE122,CHAR)  */
struct A68t136{
struct A68t123 * Type;
A68_VC  Value;
};
typedef struct A68t136  A68_136 ;    /* STRUCT(REF MODE123,REF MODE26)  */
struct A68t140 { A68_INT mode; union {
struct A68t133 * mode1;
struct A68t134 * mode2;
struct A68t135 * mode3;
struct A68t136 * mode4;
struct A68t137 * mode5;
struct A68t138 * mode6;
struct A68t139 * mode7;
struct A68t131  mode8;
struct A68t132  mode9;
} data; };
typedef struct A68t140  A68_140 ;    /* UNION(REF MODE133,REF MODE134,REF MODE135,REF MODE136,REF MODE137,REF MODE138,REF MODE139,MODE131,MODE132)  */
struct A68t137{
struct A68t124 * Type;
A68_INT  Tag;
A_PAD_INT(PAD_32)
struct A68t140  Assoc;
};
typedef struct A68t137  A68_137 ;    /* STRUCT(REF MODE124,INT,MODE140)  */
struct A68t138{
struct A68t140  Head;
struct A68t138 * Tail;
};
typedef struct A68t138  A68_138 ;    /* STRUCT(MODE140,REF MODE138)  */
struct A68t139{
struct A68t140  From;
struct A68t140  To;
};
typedef struct A68t139  A68_139 ;    /* STRUCT(MODE140,MODE140)  */
struct A68t141{
A68_INT  Instoffset;
A_PAD_INT(PAD_33)
A68_INT  Offset;
A_PAD_INT(PAD_34)
A68_INT  Size;
A_PAD_INT(PAD_35)
};
typedef struct A68t141  A68_141 ;    /* STRUCT(INT,INT,INT)  */
A_VECTOR(struct A68t141 ,A68t143);
typedef struct A68t143  A68_143 ;    /* VECTOR [] MODE141 */
struct A68t142{
struct A68t129  Type;
struct A68t143  Blocks;
};
typedef struct A68t142  A68_142 ;    /* STRUCT(MODE129,REF MODE143)  */
struct A68t144{
struct A68t142  Firstcell;
A68_INT  Lwb;
A_PAD_INT(PAD_36)
A68_INT  Ramsize;
A_PAD_INT(PAD_37)
A68_INT  Step;
A_PAD_INT(PAD_38)
};
typedef struct A68t144  A68_144 ;    /* STRUCT(MODE142,INT,INT,INT)  */
struct A68t145{
A68_VC  Uname;
A68_VC  Lname;
A68_INT  Node;
A_PAD_INT(PAD_39)
};
typedef struct A68t145  A68_145 ;    /* STRUCT(REF MODE26,REF MODE26,INT)  */
A_VECTOR(struct A68t145 ,A68t147);
typedef struct A68t147  A68_147 ;    /* VECTOR [] MODE145 */
struct A68t146{
struct A68t144 * Ram;
struct A68t142  Outputs;
A68_INT  Noinputs;
A_PAD_INT(PAD_40)
struct A68t147  Body;
};
typedef struct A68t146  A68_146 ;    /* STRUCT(REF MODE144,MODE142,INT,REF MODE147)  */
struct A68t148{
A68_INT  Fn;
A_PAD_INT(PAD_41)
A68_INT  Instance;
A_PAD_INT(PAD_42)
};
typedef struct A68t148  A68_148 ;    /* STRUCT(INT,INT)  */
struct A68t149{
struct A68t142 * Wire;
A68_INT  Instance;
A_PAD_INT(PAD_43)
};
typedef struct A68t149  A68_149 ;    /* STRUCT(REF MODE142,INT)  */
struct A68t150 { A68_INT mode; union {
struct A68t148  mode1;
struct A68t149  mode2;
} data; };
typedef struct A68t150  A68_150 ;    /* UNION(MODE148,MODE149)  */
struct A68t151 { A68_INT mode; union {
struct A68t148  mode1;
struct A68t142  mode2;
} data; };
typedef struct A68t151  A68_151 ;    /* UNION(MODE148,MODE142)  */
struct A68t152{
struct A68t150  Node;
A68_INT  Circuit;
A_PAD_INT(PAD_44)
A68_INT  Base;
A_PAD_INT(PAD_45)
};
typedef struct A68t152  A68_152 ;    /* STRUCT(MODE150,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t153,(struct A68t140 ,struct A68t129 *),(struct A68t140 ,struct A68t129 *,void *));
typedef struct A68t153  A68_153 ;    /* PROC(MODE140) MODE129 */

A_PROCEDURE(A68_BOOL ,A68t154,(struct A68t129 ,struct A68t129 ),(struct A68t129 ,struct A68t129 ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(MODE129,MODE129) BOOL */

A_PROCEDURE(A68_BOOL ,A68t155,(struct A68t140 ),(struct A68t140 ,void *));
typedef struct A68t155  A68_155 ;    /* PROC(MODE140) BOOL */

A_PROCEDURE(A68_BOOL ,A68t156,(struct A68t140 ,struct A68t140 ),(struct A68t140 ,struct A68t140 ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(MODE140,MODE140) BOOL */

A_PROCEDURE(A68_BOOL ,A68t157,(struct A68t142 ,struct A68t142 ),(struct A68t142 ,struct A68t142 ,void *));
typedef struct A68t157  A68_157 ;    /* PROC(MODE142,MODE142) BOOL */

A_PROCEDURE(A68_BOOL ,A68t158,(struct A68t148 ,struct A68t148 ),(struct A68t148 ,struct A68t148 ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(MODE148,MODE148) BOOL */

A_PROCEDURE(A68_BOOL ,A68t159,(struct A68t149 ,struct A68t149 ),(struct A68t149 ,struct A68t149 ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(MODE149,MODE149) BOOL */

A_PROCEDURE(A68_BOOL ,A68t160,(struct A68t150 ,struct A68t150 ),(struct A68t150 ,struct A68t150 ,void *));
typedef struct A68t160  A68_160 ;    /* PROC(MODE150,MODE150) BOOL */

A_PROCEDURE(A68_BOOL ,A68t161,(struct A68t152 ,struct A68t152 ),(struct A68t152 ,struct A68t152 ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(MODE152,MODE152) BOOL */

A_PROCEDURE(struct A68t126 *,A68t162,(struct A68t126 *,struct A68t126 *),(struct A68t126 *,struct A68t126 *,void *));
typedef struct A68t162  A68_162 ;    /* PROC(REF MODE126,REF MODE126) REF MODE126 */

A_PROCEDURE(A68_VOID ,A68t163,(struct A68t143 ,struct A68t143 ,struct A68t143 *),(struct A68t143 ,struct A68t143 ,struct A68t143 *,void *));
typedef struct A68t163  A68_163 ;    /* PROC(REF MODE143,REF MODE143) REF MODE143 */

A_PROCEDURE(A68_VOID ,A68t164,(A68_BOOL ,struct A68t143 *),(A68_BOOL ,struct A68t143 *,void *));
typedef struct A68t164  A68_164 ;    /* PROC(BOOL) MODE143 */

A_PROCEDURE(A68_VOID ,A68t165,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(INT,REF MODE26) VOID */

A_PROCEDURE(A68_INT ,A68t166,(A68_VC ),(A68_VC ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(REF MODE26) INT */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from basics --- */
/* --- End of imports from basics --- */


/* --- Imports from putstrings --- */
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void JSCAOST(void);   /* basics */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_117   MSAASIM = {"$Id: kebasics.a68,v 34.2 1995/03/29 13:04:41 ella Exp $"}; 
A_GISVEC(A68_VC ,NSAASIM,MSAASIM,55)
#define OSAASIM_diagnoseinterface 0X1U
#define PSAASIM_diagnoseencoding 0X2U
#define QSAASIM_diagnoseamcode 0X4U
#define RSAASIM_omitexpansion 0X8U
#define SSAASIM_dumpcodegenerator 0X10U
#define TSAASIM_omitinlinebiops 0X20U
#define USAASIM_diagnoseouterfns 0X40U
A68_124 * VSAASIM_nilsenum;
A68_126 * WSAASIM_nilsst;
A68_129  ZSAASIM_nullstype;
A68_129  CTAASIM_voidstype;
A68_138 * DTAASIM_nilsvst;
A68_140  GTAASIM_nullsvalue;
A68_140  JTAASIM_voidsvalue;
A68_VC  OTAASIM_nullword;
A68_VC  RTAASIM_nilword;
A68_144 * STAASIM_nilsram;
A68_146 * TTAASIM_nilfn;
A68_150 * UTAASIM_nilnode;
typedef struct   /* env of non-global proc */
{
A68_INT  VABASIM_size;
A_PAD_INT(PAD_46)
} ZABASIM_generator;

A_STATIC A68_VOID  LTAASIM_generator(A68_BOOL  KTAASIM_anonymous, A68_VC  *ReturnedValue);

A68_VOID  WTAASIM_typeof(A68_140  Sv, A68_129  *ReturnedValue);

A68_BOOL  CVAASIM_(A68_129  Left, A68_129  Right);

A_STATIC A68_BOOL  YWAASIM_isquery(A68_140  V);

A68_BOOL  JXAASIM_(A68_140  Left, A68_140  Right);

A68_BOOL  RYAASIM_(A68_142  Left, A68_142  Right);

A68_BOOL  FZAASIM_(A68_148  Left, A68_148  Right);

A68_BOOL  KZAASIM_(A68_149  Left, A68_149  Right);

A68_BOOL  PZAASIM_(A68_150  Left, A68_150  Right);

A68_BOOL  AABASIM_(A68_152  Left, A68_152  Right);

A68_126 * FABASIM_(A68_126 * A, A68_126 * B);

A68_VOID  LABASIM_(A68_143  A, A68_143  B, A68_143  *ReturnedValue);

A_STATIC A68_VOID  YABASIM_generator(A68_BOOL  WABASIM_anonymous, A68_143  *ReturnedValue, void *NonLocals);

A68_VOID  PBBASIM_unsignedtoword(A68_INT  N, A68_VC  Rep);

A68_VOID  ZBBASIM_signedtoword(A68_INT  N, A68_VC  Rep);

A68_INT  BCBASIM_wordtounsigned(A68_VC  Rep);

A68_INT  HCBASIM_wordtosigned(A68_VC  Rep);

A_STATIC A68_VOID  YABASIM_generator(A68_BOOL  WABASIM_anonymous, A68_143  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZABASIM_generator *)NonLocals)->x)
{ 
A68_143  ABBASIM;  /* clause result */
A68_143  BBBASIM;  /* OPERATORS - dynamic generator */
{ 
BBBASIM.upb = NL(VABASIM_size) ;
( WABASIM_anonymous? A_VLOC(A68_141 ,BBBASIM): A_VHEAP(A68_141 ,BBBASIM) );
ABBASIM = BBBASIM;
} 
*ReturnedValue = (ABBASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  LTAASIM_generator(A68_BOOL  KTAASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  MTAASIM;  /* clause result */
A68_VC  NTAASIM;  /* OPERATORS - dynamic generator */
{ 
NTAASIM.upb = 0 ;
( KTAASIM_anonymous? A_VLOC(A68_CHAR ,NTAASIM): A_VHEAP(A68_CHAR ,NTAASIM) );
MTAASIM = NTAASIM;
} 
*ReturnedValue = (MTAASIM);
return;
} 
#undef NL

A68_VOID  WTAASIM_typeof(A68_140  Sv, A68_129  *ReturnedValue)
{ 
A68_140  XTAASIM;  /* united object - for case conformity */
A68_129  YTAASIM;  /* clause result */
A68_133 * ZTAASIM_sq;
A68_134 * AUAASIM_si;
A68_129  BUAASIM;  /* OPERATORS - mode -> union mode */
A68_121 * CUAASIM;  /* YIELD */
A68_135 * DUAASIM_sc;
A68_129  EUAASIM;  /* OPERATORS - mode -> union mode */
A68_122 * FUAASIM;  /* YIELD */
A68_136 * GUAASIM_ss;
A68_129  HUAASIM;  /* OPERATORS - mode -> union mode */
A68_123 * IUAASIM;  /* YIELD */
A68_137 * JUAASIM_se;
A68_129  KUAASIM;  /* OPERATORS - mode -> union mode */
A68_124 * LUAASIM;  /* YIELD */
A68_138 * MUAASIM_st;
A68_126 * NUAASIM_answer;
A68_126 ** OUAASIM_end;
A68_138 * PUAASIM_scan;
A68_126  QUAASIM;  /* collateral clause result */
A68_129  RUAASIM;  /* avoid structure result */
A68_126 * SUAASIM;  /* YIELD */
A68_129  TUAASIM;  /* OPERATORS - mode -> union mode */
A68_139 * UUAASIM_sf;
A68_125  VUAASIM;  /* collateral clause result */
A68_129  WUAASIM;  /* avoid structure result */
A68_129  XUAASIM;  /* avoid structure result */
A68_125 * YUAASIM;  /* YIELD */
A68_129  ZUAASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(typeof);
 /* line 175: */
 /* line 176: */
XTAASIM = Sv ;
switch ( XTAASIM.mode )
{ 
case 8: /* STRUCT(INT)  */
 /* line 177: */
YTAASIM = CTAASIM_voidstype;
break;
case 9: /* STRUCT(INT)  */
 /* line 178: */
YTAASIM = ZSAASIM_nullstype;
break;
case 1: /* REF STRUCT(MODE129)  */
ZTAASIM_sq = (XTAASIM.data.mode1);
 /* line 179: */
YTAASIM = (*(&(ZTAASIM_sq->Type)));
break;
case 2: /* REF STRUCT(REF MODE121,INT)  */
AUAASIM_si = (XTAASIM.data.mode2);
 /* line 180: */
CUAASIM = (*(&(AUAASIM_si->Type))) ;
YTAASIM = A_UNITE(BUAASIM,mode2,2,CUAASIM);
break;
case 3: /* REF STRUCT(REF MODE122,CHAR)  */
DUAASIM_sc = (XTAASIM.data.mode3);
 /* line 181: */
FUAASIM = (*(&(DUAASIM_sc->Type))) ;
YTAASIM = A_UNITE(EUAASIM,mode3,3,FUAASIM);
break;
case 4: /* REF STRUCT(REF MODE123,REF MODE26)  */
GUAASIM_ss = (XTAASIM.data.mode4);
 /* line 182: */
IUAASIM = (*(&(GUAASIM_ss->Type))) ;
YTAASIM = A_UNITE(HUAASIM,mode5,5,IUAASIM);
break;
case 5: /* REF STRUCT(REF MODE124,INT,MODE140)  */
JUAASIM_se = (XTAASIM.data.mode5);
 /* line 183: */
LUAASIM = (*(&(JUAASIM_se->Type))) ;
YTAASIM = A_UNITE(KUAASIM,mode1,1,LUAASIM);
break;
case 6: /* REF STRUCT(MODE140,REF MODE138)  */
MUAASIM_st = (XTAASIM.data.mode6);
 /* line 184: */
 /* line 185: */
{ 
NUAASIM_answer = WSAASIM_nilsst;
 /* line 186: */
OUAASIM_end = (&NUAASIM_answer);
 /* line 187: */
PUAASIM_scan = MUAASIM_st;
 /* line 188: */
for ( ;; )
{ 
 /* line 189: */
if ( !((PUAASIM_scan!=DTAASIM_nilsvst)) ) break;
 /* line 190: */
WTAASIM_typeof( (*(&(PUAASIM_scan->Head))), &RUAASIM );
QUAASIM.T = RUAASIM;
QUAASIM.Rest = WSAASIM_nilsst;
SUAASIM = A_HEAP(A68_126 ) ;
(*SUAASIM) = QUAASIM ;
(*OUAASIM_end) = SUAASIM;
 /* line 191: */
PUAASIM_scan = (*(&(PUAASIM_scan->Tail)));
 /* line 192: */
 /* line 193: */
OUAASIM_end = (&((*OUAASIM_end)->Rest));
}
 /* line 194: */
 /* line 195: */
 /* line 196: */
YTAASIM = A_UNITE(TUAASIM,mode7,7,NUAASIM_answer);
} 
break;
case 7: /* REF STRUCT(MODE140,MODE140)  */
UUAASIM_sf = (XTAASIM.data.mode7);
WTAASIM_typeof( (*(&(UUAASIM_sf->From))), &WUAASIM );
VUAASIM.From = WUAASIM;
 /* line 197: */
WTAASIM_typeof( (*(&(UUAASIM_sf->To))), &XUAASIM );
VUAASIM.To = XUAASIM;
YUAASIM = A_HEAP(A68_125 ) ;
(*YUAASIM) = VUAASIM ;
YTAASIM = A_UNITE(ZUAASIM,mode6,6,YUAASIM);
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(typeof);
*ReturnedValue = (YTAASIM);
return;
} 
#undef NL

A68_BOOL  CVAASIM_(A68_129  Left, A68_129  Right)
{ 
A68_129  DVAASIM;  /* united object - for case conformity */
A68_121 * EVAASIM_l;
A68_129  FVAASIM;  /* united object - for case conformity */
A68_121 * GVAASIM_r;
A68_BOOL  HVAASIM;  /* optbool result */
A68_BOOL  IVAASIM;  /* clause result */
A68_122 * JVAASIM_l;
A68_129  KVAASIM;  /* united object - for case conformity */
A68_122 * LVAASIM_r;
A68_BOOL  MVAASIM;  /* optbool result */
A68_123 * NVAASIM_l;
A68_129  OVAASIM;  /* united object - for case conformity */
A68_123 * PVAASIM_r;
A68_BOOL  QVAASIM;  /* optbool result */
A68_129  RVAASIM;  /* OPERATORS - mode -> union mode */
A68_122 * SVAASIM;  /* YIELD */
A68_129  TVAASIM;  /* OPERATORS - mode -> union mode */
A68_122 * UVAASIM;  /* YIELD */
A68_124 * VVAASIM_l;
A68_129  WVAASIM;  /* united object - for case conformity */
A68_124 * XVAASIM_r;
A68_BOOL  YVAASIM;  /* optbool result */
A68_BOOL  ZVAASIM;  /* clause result */
A68_129  AWAASIM;  /* OPERATORS - mode -> union mode */
A68_124 * BWAASIM;  /* YIELD */
A68_129  CWAASIM;  /* OPERATORS - mode -> union mode */
A68_124 * DWAASIM;  /* YIELD */
A68_126 * EWAASIM_l;
A68_129  FWAASIM;  /* united object - for case conformity */
A68_126 * GWAASIM_r;
A68_BOOL  HWAASIM;  /* optbool result */
A68_BOOL  IWAASIM;  /* clause result */
A68_129  JWAASIM;  /* OPERATORS - mode -> union mode */
A68_126 * KWAASIM;  /* YIELD */
A68_129  LWAASIM;  /* OPERATORS - mode -> union mode */
A68_126 * MWAASIM;  /* YIELD */
A68_125 * NWAASIM_l;
A68_129  OWAASIM;  /* united object - for case conformity */
A68_125 * PWAASIM_r;
A68_BOOL  QWAASIM;  /* optbool result */
A68_127 * RWAASIM_l;
A68_129  SWAASIM;  /* united object - for case conformity */
A68_127 * TWAASIM_r;
A68_BOOL  UWAASIM;  /* optbool result */
A68_129  VWAASIM;  /* united object - for case conformity */
A68_129  WWAASIM;  /* united object - for case conformity */
A_PROC_ENTRY(=);
 /* line 205: */
 /* line 206: */
DVAASIM = Left ;
switch ( DVAASIM.mode )
{ 
case 2: /* REF STRUCT(REF MODE26,INT,INT)  */
EVAASIM_l = (DVAASIM.data.mode2);
 /* line 207: */
 /* line 208: */
FVAASIM = Right ;
switch ( FVAASIM.mode )
{ 
case 2: /* REF STRUCT(REF MODE26,INT,INT)  */
GVAASIM_r = (FVAASIM.data.mode2);
 /* line 209: */
 /* line 210: */
HVAASIM = A_VC_EQ((*(&(EVAASIM_l->Id))),(*(&(GVAASIM_r->Id))));
if ( HVAASIM )
{ /* line 211: */
HVAASIM = ((*(&(EVAASIM_l->Lwb)))==(*(&(GVAASIM_r->Lwb))));
}
if ( HVAASIM )
{ /* line 212: */
HVAASIM = ((*(&(EVAASIM_l->Upb)))==(*(&(GVAASIM_r->Upb))));
}
IVAASIM = HVAASIM;
break;
default: 
 /* line 213: */
 /* line 214: */
IVAASIM = A68_FALSE;
break;
} 
break;
case 3: /* REF STRUCT(REF MODE26,REF MODE26)  */
JVAASIM_l = (DVAASIM.data.mode3);
 /* line 215: */
 /* line 216: */
KVAASIM = Right ;
switch ( KVAASIM.mode )
{ 
case 3: /* REF STRUCT(REF MODE26,REF MODE26)  */
LVAASIM_r = (KVAASIM.data.mode3);
 /* line 217: */
MVAASIM = A_VC_EQ((*(&(JVAASIM_l->Id))),(*(&(LVAASIM_r->Id))));
if ( MVAASIM )
{ /* line 218: */
MVAASIM = A_VC_EQ((*(&(JVAASIM_l->Char))),(*(&(LVAASIM_r->Char))));
}
IVAASIM = MVAASIM;
break;
default: 
 /* line 219: */
 /* line 220: */
IVAASIM = A68_FALSE;
break;
} 
break;
case 5: /* REF STRUCT(INT,MODE122)  */
NVAASIM_l = (DVAASIM.data.mode5);
 /* line 221: */
 /* line 222: */
OVAASIM = Right ;
switch ( OVAASIM.mode )
{ 
case 5: /* REF STRUCT(INT,MODE122)  */
PVAASIM_r = (OVAASIM.data.mode5);
 /* line 223: */
QVAASIM = ((*(&(NVAASIM_l->No)))==(*(&(PVAASIM_r->No))));
if ( QVAASIM )
{ /* line 224: */
SVAASIM = (&(PVAASIM_r->T)) ;
UVAASIM = (&(NVAASIM_l->T)) ;
QVAASIM = CVAASIM_(A_UNITE(TVAASIM,mode3,3,UVAASIM), A_UNITE(RVAASIM,mode3,3,SVAASIM));
}
IVAASIM = QVAASIM;
break;
default: 
 /* line 225: */
 /* line 226: */
IVAASIM = A68_FALSE;
break;
} 
break;
case 1: /* REF STRUCT(REF MODE26,MODE129,REF MODE124)  */
VVAASIM_l = (DVAASIM.data.mode1);
 /* line 227: */
 /* line 228: */
WVAASIM = Right ;
switch ( WVAASIM.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,MODE129,REF MODE124)  */
XVAASIM_r = (WVAASIM.data.mode1);
 /* line 229: */
YVAASIM = A_VC_EQ((*(&(VVAASIM_l->Id))),(*(&(XVAASIM_r->Id))));
if ( YVAASIM )
{YVAASIM = CVAASIM_((*(&(VVAASIM_l->T))), (*(&(XVAASIM_r->T))));
}
 /* line 230: */
if ( YVAASIM )
{ /* line 231: */
if ( ((*(&(VVAASIM_l->Rest)))==VSAASIM_nilsenum) )
{ 
if ( ((*(&(XVAASIM_r->Rest)))==VSAASIM_nilsenum) )
{ 
 /* line 232: */
ZVAASIM = A68_TRUE;
} 
else
{ 
 /* line 233: */
 /* line 234: */
 /* line 235: */
ZVAASIM = A68_FALSE;
} 
} 
else
{ 
if ( ((*(&(XVAASIM_r->Rest)))==VSAASIM_nilsenum) )
{ 
 /* line 236: */
ZVAASIM = A68_FALSE;
} 
else
{ 
 /* line 237: */
 /* line 238: */
 /* line 239: */
BWAASIM = (*(&(XVAASIM_r->Rest))) ;
DWAASIM = (*(&(VVAASIM_l->Rest))) ;
ZVAASIM = CVAASIM_(A_UNITE(CWAASIM,mode1,1,DWAASIM), A_UNITE(AWAASIM,mode1,1,BWAASIM));
} 
} 
YVAASIM = ZVAASIM;
}
IVAASIM = YVAASIM;
break;
default: 
 /* line 240: */
 /* line 241: */
IVAASIM = A68_FALSE;
break;
} 
break;
case 7: /* REF STRUCT(MODE129,REF MODE126)  */
EWAASIM_l = (DVAASIM.data.mode7);
 /* line 242: */
 /* line 243: */
FWAASIM = Right ;
switch ( FWAASIM.mode )
{ 
case 7: /* REF STRUCT(MODE129,REF MODE126)  */
GWAASIM_r = (FWAASIM.data.mode7);
 /* line 244: */
 /* line 245: */
HWAASIM = CVAASIM_((*(&(EWAASIM_l->T))), (*(&(GWAASIM_r->T))));
if ( HWAASIM )
{ /* line 246: */
if ( ((*(&(EWAASIM_l->Rest)))==WSAASIM_nilsst) )
{ 
if ( ((*(&(GWAASIM_r->Rest)))==WSAASIM_nilsst) )
{ 
 /* line 247: */
IWAASIM = A68_TRUE;
} 
else
{ 
 /* line 248: */
 /* line 249: */
 /* line 250: */
IWAASIM = A68_FALSE;
} 
} 
else
{ 
if ( ((*(&(GWAASIM_r->Rest)))==WSAASIM_nilsst) )
{ 
 /* line 251: */
IWAASIM = A68_FALSE;
} 
else
{ 
 /* line 252: */
 /* line 253: */
 /* line 254: */
KWAASIM = (*(&(GWAASIM_r->Rest))) ;
MWAASIM = (*(&(EWAASIM_l->Rest))) ;
IWAASIM = CVAASIM_(A_UNITE(LWAASIM,mode7,7,MWAASIM), A_UNITE(JWAASIM,mode7,7,KWAASIM));
} 
} 
HWAASIM = IWAASIM;
}
IVAASIM = HWAASIM;
break;
default: 
 /* line 255: */
 /* line 256: */
IVAASIM = A68_FALSE;
break;
} 
break;
case 6: /* REF STRUCT(MODE129,MODE129)  */
NWAASIM_l = (DVAASIM.data.mode6);
 /* line 257: */
 /* line 258: */
OWAASIM = Right ;
switch ( OWAASIM.mode )
{ 
case 6: /* REF STRUCT(MODE129,MODE129)  */
PWAASIM_r = (OWAASIM.data.mode6);
QWAASIM = CVAASIM_((*(&(NWAASIM_l->From))), (*(&(PWAASIM_r->From))));
if ( QWAASIM )
{ /* line 259: */
QWAASIM = CVAASIM_((*(&(NWAASIM_l->To))), (*(&(PWAASIM_r->To))));
}
IVAASIM = QWAASIM;
break;
default: 
 /* line 260: */
 /* line 261: */
IVAASIM = A68_FALSE;
break;
} 
break;
case 4: /* REF STRUCT(INT,MODE129)  */
RWAASIM_l = (DVAASIM.data.mode4);
 /* line 262: */
 /* line 263: */
SWAASIM = Right ;
switch ( SWAASIM.mode )
{ 
case 4: /* REF STRUCT(INT,MODE129)  */
TWAASIM_r = (SWAASIM.data.mode4);
UWAASIM = ((*(&(RWAASIM_l->No)))==(*(&(TWAASIM_r->No))));
if ( UWAASIM )
{ /* line 264: */
UWAASIM = CVAASIM_((*(&(RWAASIM_l->Type))), (*(&(TWAASIM_r->Type))));
}
IVAASIM = UWAASIM;
break;
default: 
 /* line 265: */
 /* line 266: */
IVAASIM = A68_FALSE;
break;
} 
break;
case 8: /* STRUCT(INT)  */
 /* line 267: */
 /* line 268: */
VWAASIM = Right ;
switch ( VWAASIM.mode )
{ 
case 8: /* STRUCT(INT)  */
 /* line 269: */
IVAASIM = A68_TRUE;
break;
default: 
 /* line 270: */
 /* line 271: */
IVAASIM = A68_FALSE;
break;
} 
break;
case 9: /* STRUCT(INT)  */
 /* line 272: */
 /* line 273: */
WWAASIM = Right ;
switch ( WWAASIM.mode )
{ 
case 9: /* STRUCT(INT)  */
 /* line 274: */
IVAASIM = A68_TRUE;
break;
default: 
 /* line 275: */
 /* line 276: */
IVAASIM = A68_FALSE;
break;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(=);
return( IVAASIM );
} 
#undef NL

A_STATIC A68_BOOL  YWAASIM_isquery(A68_140  V)
{ 
A68_140  ZWAASIM;  /* united object - for case conformity */
A68_BOOL  AXAASIM;  /* clause result */
A68_138 * BXAASIM_s;
A68_BOOL  CXAASIM;  /* optbool result */
A68_140  DXAASIM;  /* OPERATORS - mode -> union mode */
A68_138 * EXAASIM;  /* YIELD */
A68_139 * FXAASIM_f;
A68_BOOL  GXAASIM;  /* optbool result */
A_PROC_ENTRY(isquery);
 /* line 283: */
 /* line 284: */
ZWAASIM = V ;
switch ( ZWAASIM.mode )
{ 
case 1: /* REF STRUCT(MODE129)  */
 /* line 285: */
AXAASIM = A68_TRUE;
break;
case 6: /* REF STRUCT(MODE140,REF MODE138)  */
BXAASIM_s = (ZWAASIM.data.mode6);
 /* line 286: */
if ( (BXAASIM_s==DTAASIM_nilsvst) )
{ 
 /* line 287: */
AXAASIM = A68_TRUE;
} 
else
{ 
CXAASIM = YWAASIM_isquery((*(&(BXAASIM_s->Head))));
if ( CXAASIM )
{ /* line 288: */
EXAASIM = (*(&(BXAASIM_s->Tail))) ;
CXAASIM = YWAASIM_isquery(A_UNITE(DXAASIM,mode6,6,EXAASIM));
}
 /* line 289: */
AXAASIM = CXAASIM;
} 
break;
case 7: /* REF STRUCT(MODE140,MODE140)  */
FXAASIM_f = (ZWAASIM.data.mode7);
GXAASIM = YWAASIM_isquery((*(&(FXAASIM_f->From))));
if ( GXAASIM )
{ /* line 290: */
GXAASIM = YWAASIM_isquery((*(&(FXAASIM_f->To))));
}
AXAASIM = GXAASIM;
break;
default: 
 /* line 291: */
AXAASIM = A68_FALSE;
break;
} 
A_PROC_EXIT(isquery);
return( AXAASIM );
} 
#undef NL

A68_BOOL  JXAASIM_(A68_140  Left, A68_140  Right)
{ 
A68_140  KXAASIM;  /* united object - for case conformity */
A68_BOOL  LXAASIM;  /* clause result */
A68_140  MXAASIM;  /* united object - for case conformity */
A68_134 * NXAASIM_l;
A68_140  OXAASIM;  /* united object - for case conformity */
A68_134 * PXAASIM_r;
A68_135 * QXAASIM_l;
A68_140  RXAASIM;  /* united object - for case conformity */
A68_135 * SXAASIM_r;
A68_136 * TXAASIM_l;
A68_140  UXAASIM;  /* united object - for case conformity */
A68_136 * VXAASIM_r;
A68_137 * WXAASIM_l;
A68_140  XXAASIM;  /* united object - for case conformity */
A68_137 * YXAASIM_r;
A68_BOOL  ZXAASIM;  /* optbool result */
A68_138 * AYAASIM_l;
A68_140  BYAASIM;  /* united object - for case conformity */
A68_138 * CYAASIM_r;
A68_BOOL  DYAASIM;  /* optbool result */
A68_BOOL  EYAASIM;  /* clause result */
A68_140  FYAASIM;  /* OPERATORS - mode -> union mode */
A68_138 * GYAASIM;  /* YIELD */
A68_140  HYAASIM;  /* OPERATORS - mode -> union mode */
A68_138 * IYAASIM;  /* YIELD */
A68_139 * JYAASIM_l;
A68_140  KYAASIM;  /* united object - for case conformity */
A68_139 * LYAASIM_r;
A68_BOOL  MYAASIM;  /* optbool result */
A68_140  NYAASIM;  /* united object - for case conformity */
A68_140  OYAASIM;  /* united object - for case conformity */
A_PROC_ENTRY(=);
 /* line 302: */
KXAASIM = Right ;
switch ( KXAASIM.mode )
{ 
case 1: /* REF STRUCT(MODE129)  */
 /* line 303: */
LXAASIM = YWAASIM_isquery(Left);
break;
default: 
 /* line 304: */
MXAASIM = Left ;
switch ( MXAASIM.mode )
{ 
case 1: /* REF STRUCT(MODE129)  */
 /* line 305: */
LXAASIM = YWAASIM_isquery(Right);
break;
case 2: /* REF STRUCT(REF MODE121,INT)  */
NXAASIM_l = (MXAASIM.data.mode2);
 /* line 306: */
 /* line 307: */
OXAASIM = Right ;
switch ( OXAASIM.mode )
{ 
case 2: /* REF STRUCT(REF MODE121,INT)  */
PXAASIM_r = (OXAASIM.data.mode2);
 /* line 308: */
LXAASIM = ((*(&(NXAASIM_l->Value)))==(*(&(PXAASIM_r->Value))));
break;
default: 
 /* line 309: */
 /* line 310: */
LXAASIM = A68_FALSE;
break;
} 
break;
case 3: /* REF STRUCT(REF MODE122,CHAR)  */
QXAASIM_l = (MXAASIM.data.mode3);
 /* line 311: */
 /* line 312: */
RXAASIM = Right ;
switch ( RXAASIM.mode )
{ 
case 3: /* REF STRUCT(REF MODE122,CHAR)  */
SXAASIM_r = (RXAASIM.data.mode3);
 /* line 313: */
LXAASIM = ((*(&(QXAASIM_l->Value)))==(*(&(SXAASIM_r->Value))));
break;
default: 
 /* line 314: */
 /* line 315: */
LXAASIM = A68_FALSE;
break;
} 
break;
case 4: /* REF STRUCT(REF MODE123,REF MODE26)  */
TXAASIM_l = (MXAASIM.data.mode4);
 /* line 316: */
 /* line 317: */
UXAASIM = Right ;
switch ( UXAASIM.mode )
{ 
case 4: /* REF STRUCT(REF MODE123,REF MODE26)  */
VXAASIM_r = (UXAASIM.data.mode4);
 /* line 318: */
LXAASIM = A_VC_EQ((*(&(TXAASIM_l->Value))),(*(&(VXAASIM_r->Value))));
break;
default: 
 /* line 319: */
 /* line 320: */
LXAASIM = A68_FALSE;
break;
} 
break;
case 5: /* REF STRUCT(REF MODE124,INT,MODE140)  */
WXAASIM_l = (MXAASIM.data.mode5);
 /* line 321: */
 /* line 322: */
XXAASIM = Right ;
switch ( XXAASIM.mode )
{ 
case 5: /* REF STRUCT(REF MODE124,INT,MODE140)  */
YXAASIM_r = (XXAASIM.data.mode5);
 /* line 323: */
ZXAASIM = ((*(&(WXAASIM_l->Tag)))==(*(&(YXAASIM_r->Tag))));
if ( ZXAASIM )
{ /* line 324: */
ZXAASIM = JXAASIM_((*(&(WXAASIM_l->Assoc))), (*(&(YXAASIM_r->Assoc))));
}
LXAASIM = ZXAASIM;
break;
default: 
 /* line 325: */
 /* line 326: */
LXAASIM = A68_FALSE;
break;
} 
break;
case 6: /* REF STRUCT(MODE140,REF MODE138)  */
AYAASIM_l = (MXAASIM.data.mode6);
 /* line 327: */
 /* line 328: */
BYAASIM = Right ;
switch ( BYAASIM.mode )
{ 
case 6: /* REF STRUCT(MODE140,REF MODE138)  */
CYAASIM_r = (BYAASIM.data.mode6);
 /* line 329: */
 /* line 330: */
DYAASIM = JXAASIM_((*(&(AYAASIM_l->Head))), (*(&(CYAASIM_r->Head))));
if ( DYAASIM )
{ /* line 331: */
if ( ((*(&(AYAASIM_l->Tail)))==DTAASIM_nilsvst) )
{ 
if ( ((*(&(CYAASIM_r->Tail)))==DTAASIM_nilsvst) )
{ 
 /* line 332: */
EYAASIM = A68_TRUE;
} 
else
{ 
 /* line 333: */
 /* line 334: */
 /* line 335: */
EYAASIM = A68_FALSE;
} 
} 
else
{ 
if ( ((*(&(CYAASIM_r->Tail)))==DTAASIM_nilsvst) )
{ 
 /* line 336: */
EYAASIM = A68_FALSE;
} 
else
{ 
 /* line 337: */
 /* line 338: */
 /* line 339: */
GYAASIM = (*(&(CYAASIM_r->Tail))) ;
IYAASIM = (*(&(AYAASIM_l->Tail))) ;
EYAASIM = JXAASIM_(A_UNITE(HYAASIM,mode6,6,IYAASIM), A_UNITE(FYAASIM,mode6,6,GYAASIM));
} 
} 
DYAASIM = EYAASIM;
}
LXAASIM = DYAASIM;
break;
default: 
 /* line 340: */
 /* line 341: */
LXAASIM = A68_FALSE;
break;
} 
break;
case 7: /* REF STRUCT(MODE140,MODE140)  */
JYAASIM_l = (MXAASIM.data.mode7);
 /* line 342: */
 /* line 343: */
KYAASIM = Right ;
switch ( KYAASIM.mode )
{ 
case 7: /* REF STRUCT(MODE140,MODE140)  */
LYAASIM_r = (KYAASIM.data.mode7);
MYAASIM = JXAASIM_((*(&(JYAASIM_l->From))), (*(&(LYAASIM_r->From))));
if ( MYAASIM )
{ /* line 344: */
MYAASIM = JXAASIM_((*(&(JYAASIM_l->To))), (*(&(LYAASIM_r->To))));
}
LXAASIM = MYAASIM;
break;
default: 
 /* line 345: */
 /* line 346: */
LXAASIM = A68_FALSE;
break;
} 
break;
case 8: /* STRUCT(INT)  */
 /* line 347: */
 /* line 348: */
NYAASIM = Right ;
switch ( NYAASIM.mode )
{ 
case 8: /* STRUCT(INT)  */
 /* line 349: */
LXAASIM = A68_TRUE;
break;
default: 
 /* line 350: */
 /* line 351: */
LXAASIM = A68_FALSE;
break;
} 
break;
case 9: /* STRUCT(INT)  */
 /* line 352: */
 /* line 353: */
OYAASIM = Right ;
switch ( OYAASIM.mode )
{ 
case 9: /* STRUCT(INT)  */
 /* line 354: */
LXAASIM = A68_TRUE;
break;
default: 
 /* line 355: */
 /* line 356: */
LXAASIM = A68_FALSE;
break;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
} 
A_PROC_EXIT(=);
return( LXAASIM );
} 
#undef NL

A68_BOOL  RYAASIM_(A68_142  Left, A68_142  Right)
{ 
A68_BOOL  SYAASIM;  /* optbool result */
A68_BOOL  TYAASIM_sameblocks;
A68_INT  UYAASIM_i;
A68_INT  VYAASIM;  /* to part of loop */
A68_143  WYAASIM;  /* OPERATORS - simple index */
A68_141  XYAASIM_leftblock;
A68_143  YYAASIM;  /* OPERATORS - simple index */
A68_141  ZYAASIM_rightblock;
A68_BOOL  AZAASIM;  /* optbool result */
A68_BOOL  BZAASIM;  /* clause result */
A68_BOOL  CZAASIM;  /* clause result */
A_PROC_ENTRY(=);
 /* line 364: */
 /* line 365: */
SYAASIM = CVAASIM_(Left.Type, Right.Type);
if ( SYAASIM )
{SYAASIM = (Left.Blocks.upb==Right.Blocks.upb);
}
 /* line 367: */
if ( SYAASIM )
{{ 
TYAASIM_sameblocks = A68_TRUE;
 /* line 368: */
VYAASIM = Left.Blocks.upb;
for ( UYAASIM_i = 1;
UYAASIM_i <= VYAASIM;
UYAASIM_i += 1 )
{ 
 /* line 369: */
if ( !(TYAASIM_sameblocks) ) break;
WYAASIM = Left.Blocks ;
XYAASIM_leftblock = (*(&A_VINDEX(WYAASIM,UYAASIM_i)));
 /* line 370: */
YYAASIM = Right.Blocks ;
ZYAASIM_rightblock = (*(&A_VINDEX(YYAASIM,UYAASIM_i)));
 /* line 371: */
 /* line 372: */
 /* line 373: */
AZAASIM = (XYAASIM_leftblock.Instoffset!=ZYAASIM_rightblock.Instoffset);
if ( ! AZAASIM )
{AZAASIM = (XYAASIM_leftblock.Offset!=ZYAASIM_rightblock.Offset);
}
 /* line 374: */
if ( ! AZAASIM )
{ /* line 375: */
AZAASIM = (XYAASIM_leftblock.Size!=ZYAASIM_rightblock.Size);
}
 /* line 376: */
if ( AZAASIM )
{ 
 /* line 377: */
 /* line 378: */
TYAASIM_sameblocks = A68_FALSE;
} 
}
 /* line 379: */
 /* line 380: */
BZAASIM = TYAASIM_sameblocks;
} 
SYAASIM = BZAASIM;
}
CZAASIM = SYAASIM;
A_PROC_EXIT(=);
return( CZAASIM );
} 
#undef NL

A68_BOOL  FZAASIM_(A68_148  Left, A68_148  Right)
{ 
A68_BOOL  GZAASIM;  /* optbool result */
A68_BOOL  HZAASIM;  /* clause result */
A_PROC_ENTRY(=);
 /* line 384: */
GZAASIM = (Left.Fn==Right.Fn);
if ( GZAASIM )
{GZAASIM = (Left.Instance==Right.Instance);
}
HZAASIM = GZAASIM;
A_PROC_EXIT(=);
return( HZAASIM );
} 
#undef NL

A68_BOOL  KZAASIM_(A68_149  Left, A68_149  Right)
{ 
A68_BOOL  LZAASIM;  /* optbool result */
A68_BOOL  MZAASIM;  /* clause result */
A_PROC_ENTRY(=);
 /* line 388: */
LZAASIM = RYAASIM_((*Left.Wire), (*Right.Wire));
if ( LZAASIM )
{LZAASIM = (Left.Instance==Right.Instance);
}
MZAASIM = LZAASIM;
A_PROC_EXIT(=);
return( MZAASIM );
} 
#undef NL

A68_BOOL  PZAASIM_(A68_150  Left, A68_150  Right)
{ 
A68_150  QZAASIM;  /* united object - for case conformity */
A68_148  RZAASIM_lb;
A68_150  SZAASIM;  /* united object - for case conformity */
A68_148  TZAASIM_rb;
A68_BOOL  UZAASIM;  /* clause result */
A68_149  VZAASIM_ll;
A68_150  WZAASIM;  /* united object - for case conformity */
A68_149  XZAASIM_rl;
A_PROC_ENTRY(=);
 /* line 392: */
 /* line 393: */
QZAASIM = Left ;
switch ( QZAASIM.mode )
{ 
case 1: /* STRUCT(INT,INT)  */
RZAASIM_lb = (QZAASIM.data.mode1);
SZAASIM = Right ;
switch ( SZAASIM.mode )
{ 
case 1: /* STRUCT(INT,INT)  */
TZAASIM_rb = (SZAASIM.data.mode1);
UZAASIM = FZAASIM_(RZAASIM_lb, TZAASIM_rb);
break;
default: 
 /* line 394: */
UZAASIM = A68_FALSE;
break;
} 
break;
case 2: /* STRUCT(REF MODE142,INT)  */
VZAASIM_ll = (QZAASIM.data.mode2);
WZAASIM = Right ;
switch ( WZAASIM.mode )
{ 
case 2: /* STRUCT(REF MODE142,INT)  */
XZAASIM_rl = (WZAASIM.data.mode2);
UZAASIM = KZAASIM_(VZAASIM_ll, XZAASIM_rl);
break;
default: 
 /* line 395: */
UZAASIM = A68_FALSE;
break;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(=);
return( UZAASIM );
} 
#undef NL

A68_BOOL  AABASIM_(A68_152  Left, A68_152  Right)
{ 
A68_BOOL  BABASIM;  /* optbool result */
A68_BOOL  CABASIM;  /* clause result */
A_PROC_ENTRY(=);
 /* line 398: */
BABASIM = (Left.Base==Right.Base);
if ( BABASIM )
{BABASIM = PZAASIM_(Left.Node, Right.Node);
}
 /* line 399: */
if ( BABASIM )
{BABASIM = (Left.Circuit==Right.Circuit);
}
CABASIM = BABASIM;
A_PROC_EXIT(=);
return( CABASIM );
} 
#undef NL

A68_126 * FABASIM_(A68_126 * A, A68_126 * B)
{ 
A68_126 * GABASIM_result;
A68_126 ** HABASIM_scan;
A68_126 * IABASIM;  /* clause result */
A_PROC_ENTRY(+);
 /* line 404: */
 /* line 405: */
{ 
GABASIM_result = A;
 /* line 406: */
HABASIM_scan = (&GABASIM_result);
 /* line 407: */
for ( ;; )
{ 
if ( !(((*HABASIM_scan)!=WSAASIM_nilsst)) ) break;
HABASIM_scan = (&((*HABASIM_scan)->Rest));
}
 /* line 408: */
(*HABASIM_scan) = B;
 /* line 409: */
 /* line 410: */
IABASIM = GABASIM_result;
} 
A_PROC_EXIT(+);
return( IABASIM );
} 
#undef NL

A68_VOID  LABASIM_(A68_143  A, A68_143  B, A68_143  *ReturnedValue)
{ 
A68_INT  MABASIM_n;
A68_INT  NABASIM_m;
A68_143  OABASIM;  /* clause result */
A68_141  PABASIM_an;
A68_INT  QABASIM;  /* YIELD */
A68_141  RABASIM_b1;
A68_BOOL  SABASIM;  /* optbool result */
A68_BOOL  TABASIM_merge;
A68_INT  UABASIM;  /* clause result */
A68_INT  VABASIM_size;
A68_164  XABASIM_generator;   /* proc value of non-global proc */
A68_143  CBBASIM;  /* avoid structure result */
A68_143  DBBASIM_result;
A68_143  EBBASIM;  /* OPERATORS - trim index */
A68_143  FBBASIM;  /* YIELD */
A68_INT * GBBASIM;  /* YIELD */
A68_143  HBBASIM;  /* OPERATORS - trim index */
A68_143  IBBASIM;  /* OPERATORS - trim index */
A68_143  JBBASIM;  /* YIELD */
A68_143  KBBASIM;  /* OPERATORS - assign op */
A68_143  LBBASIM;  /* OPERATORS - trim index */
A68_143  MBBASIM;  /* YIELD */
A_PROC_ENTRY(+);
 /* line 419: */
 /* line 420: */
{ 
MABASIM_n = A.upb;
 /* line 421: */
NABASIM_m = B.upb;
 /* line 422: */
 /* line 423: */
if ( (MABASIM_n==0) )
{ 
OABASIM = B;
} 
else
{ 
 /* line 424: */
if ( (NABASIM_m==0) )
{ 
 /* line 425: */
OABASIM = A;
} 
else
{ 
PABASIM_an = (*(&A_VINDEX(A,MABASIM_n)));
 /* line 426: */
QABASIM = 1 ;
RABASIM_b1 = (*(&A_VINDEX(B,QABASIM)));
 /* line 427: */
 /* line 428: */
SABASIM = (PABASIM_an.Instoffset==RABASIM_b1.Instoffset);
if ( SABASIM )
{SABASIM = (PABASIM_an.Offset>=0);
}
 /* line 429: */
if ( SABASIM )
{SABASIM = ((PABASIM_an.Offset+PABASIM_an.Size)==RABASIM_b1.Offset);
}
TABASIM_merge = SABASIM;
 /* line 430: */
if ( TABASIM_merge )
{ 
UABASIM = ((MABASIM_n+NABASIM_m)-1);
} 
else
{ 
UABASIM = (MABASIM_n+NABASIM_m);
} 
VABASIM_size = UABASIM;
 /* line 431: */
A_CLOSURE( XABASIM_generator, YABASIM_generator, ZABASIM_generator );
(( ZABASIM_generator * ) ( XABASIM_generator.nonlocals )) -> VABASIM_size = VABASIM_size;
A_CALLPROC(XABASIM_generator,(A68_FALSE, &CBBASIM),(A68_FALSE, &CBBASIM,(XABASIM_generator).nonlocals));
DBBASIM_result = CBBASIM;
 /* line 432: */
FBBASIM = A_VTRIM(EBBASIM,(DBBASIM_result),A_VTSCRIPT(&(EBBASIM.upb),(DBBASIM_result).upb,1,MABASIM_n)) ;
A_VASSIGN2(A,FBBASIM,A68_141 );
 /* line 433: */
 /* line 434: */
if ( TABASIM_merge )
{ 
GBBASIM = (&((&A_VINDEX(DBBASIM_result,MABASIM_n))->Size)) ;
(*GBBASIM)+=RABASIM_b1.Size;
 /* line 435: */
 /* line 436: */
 /* line 437: */
JBBASIM = A_VTRIM(HBBASIM,(DBBASIM_result),A_VTSCRIPT(&(HBBASIM.upb),(DBBASIM_result).upb,(MABASIM_n+1),(DBBASIM_result).upb)) ;
KBBASIM = A_VTRIM(IBBASIM,(B),A_VTSCRIPT(&(IBBASIM.upb),(B).upb,2,(B).upb)) ;
A_VASSIGN2(KBBASIM,JBBASIM,A68_141 );
} 
else
{ 
 /* line 438: */
MBBASIM = A_VTRIM(LBBASIM,(DBBASIM_result),A_VTSCRIPT(&(LBBASIM.upb),(DBBASIM_result).upb,(MABASIM_n+1),(DBBASIM_result).upb)) ;
A_VASSIGN2(B,MBBASIM,A68_141 );
} 
 /* line 439: */
 /* line 440: */
 /* line 441: */
OABASIM = DBBASIM_result;
} 
} 
} 
A_PROC_EXIT(+);
*ReturnedValue = (OABASIM);
return;
} 
#undef NL

A68_VOID  PBBASIM_unsignedtoword(A68_INT  N, A68_VC  Rep)
{ 
A68_INT  QBBASIM_acc;
A68_INT  RBBASIM_i;
A68_INT  SBBASIM;  /* by part of loop */
A68_INT  TBBASIM;  /* ADICOPS - MOD */
A68_INT  UBBASIM;  /* ADICOPS - MOD */
A68_CHAR * VBBASIM;  /* YIELD */
A68_INT  WBBASIM;  /* clause result */
A_PROC_ENTRY(unsignedtoword);
 /* line 448: */
 /* line 449: */
{ 
QBBASIM_acc = N;
 /* line 450: */
SBBASIM = (-1);
for ( RBBASIM_i = Rep.upb;
( SBBASIM > 0 && RBBASIM_i <= 1) ||
( SBBASIM < 0 && RBBASIM_i >= 1) ||
( SBBASIM == 0 ) ;
RBBASIM_i += SBBASIM )
{ 
 /* line 451: */
UBBASIM = 256 ;
VBBASIM = (&A_VINDEX(Rep,RBBASIM_i)) ;
(*VBBASIM) = (A68_CHAR)A_MOD(QBBASIM_acc,UBBASIM,TBBASIM);
 /* line 452: */
if ( (QBBASIM_acc>=0) )
{ 
WBBASIM = (QBBASIM_acc/256);
} 
else
{ 
 /* line 453: */
WBBASIM = (((QBBASIM_acc+1)/256)-1);
} 
QBBASIM_acc = WBBASIM;
}
 /* line 454: */
} 
A_PROC_EXIT(unsignedtoword);
return;
} 
#undef NL

A68_VOID  ZBBASIM_signedtoword(A68_INT  N, A68_VC  Rep)
{ 
A_PROC_ENTRY(signedtoword);
 /* line 457: */
PBBASIM_unsignedtoword(N, Rep);
A_PROC_EXIT(signedtoword);
return;
} 
#undef NL

A68_INT  BCBASIM_wordtounsigned(A68_VC  Rep)
{ 
A68_INT  CCBASIM_ans;
A68_INT  DCBASIM_i;
A68_INT  ECBASIM;  /* to part of loop */
A68_INT  FCBASIM;  /* clause result */
A_PROC_ENTRY(wordtounsigned);
 /* line 464: */
 /* line 465: */
{ 
CCBASIM_ans = 0;
 /* line 466: */
ECBASIM = Rep.upb;
for ( DCBASIM_i = 1;
DCBASIM_i <= ECBASIM;
DCBASIM_i += 1 )
{ 
 /* line 467: */
 /* line 468: */
CCBASIM_ans = ((256*CCBASIM_ans)+(A68_INT)(unsigned char)(*(&A_VINDEX(Rep,DCBASIM_i))));
}
 /* line 469: */
 /* line 470: */
FCBASIM = CCBASIM_ans;
} 
A_PROC_EXIT(wordtounsigned);
return( FCBASIM );
} 
#undef NL

A68_INT  HCBASIM_wordtosigned(A68_VC  Rep)
{ 
A68_INT  ICBASIM_ans;
A68_INT  JCBASIM;  /* YIELD */
A68_INT  KCBASIM;  /* YIELD */
A68_INT  LCBASIM;  /* YIELD */
A68_INT  MCBASIM_i;
A68_INT  NCBASIM;  /* to part of loop */
A68_INT  OCBASIM;  /* clause result */
A_PROC_ENTRY(wordtosigned);
 /* line 477: */
 /* line 478: */
{ 
 /* line 479: */
 /* line 480: */
JCBASIM = 1 ;
if ( ((A68_INT)(unsigned char)(*(&A_VINDEX(Rep,JCBASIM)))>=128) )
{ 
 /* line 481: */
 /* line 482: */
KCBASIM = 1 ;
ICBASIM_ans = ((A68_INT)(unsigned char)(*(&A_VINDEX(Rep,KCBASIM)))-256);
} 
else
{ 
 /* line 483: */
LCBASIM = 1 ;
ICBASIM_ans = (A68_INT)(unsigned char)(*(&A_VINDEX(Rep,LCBASIM)));
} 
 /* line 484: */
NCBASIM = Rep.upb;
for ( MCBASIM_i = 2;
MCBASIM_i <= NCBASIM;
MCBASIM_i += 1 )
{ 
 /* line 485: */
 /* line 486: */
ICBASIM_ans = ((256*ICBASIM_ans)+(A68_INT)(unsigned char)(*(&A_VINDEX(Rep,MCBASIM_i))));
}
 /* line 487: */
 /* line 488: */
OCBASIM = ICBASIM_ans;
} 
A_PROC_EXIT(wordtosigned);
return( OCBASIM );
} 
#undef NL
 /* line 1: */
 /* line 4: */
void JSAASIM(void)   /* initialise DECS kebasics */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/kebasics.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_129  XSAASIM;  /* OPERATORS - mode -> union mode */
A68_120  YSAASIM;  /* YIELD */
A68_129  ATAASIM;  /* OPERATORS - mode -> union mode */
A68_119  BTAASIM;  /* YIELD */
A68_140  ETAASIM;  /* OPERATORS - mode -> union mode */
A68_132  FTAASIM;  /* YIELD */
A68_140  HTAASIM;  /* OPERATORS - mode -> union mode */
A68_131  ITAASIM;  /* YIELD */
A68_VC  PTAASIM;  /* avoid structure result */
A68_VC  QTAASIM;  /* OPERATORS - nil -> mode */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
JSCAOST();   /* USE basics */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/kebasics.a68";
A_config.translation_time = "Tue Apr  4 11:05:43 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "ISAASIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:05:43 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS kebasics);
UEAALIB_a68config(LGAALIB_configinfo, NSAASIM);
 /* line 60: */
 /* line 61: */
 /* line 62: */
 /* line 63: */
 /* line 64: */
 /* line 65: */
 /* line 66: */
 /* line 80: */
 /* line 93: */
 /* line 95: */
VSAASIM_nilsenum = (A68_124 *)A68_NIL;
 /* line 96: */
WSAASIM_nilsst = (A68_126 *)A68_NIL;
 /* line 97: */
YSAASIM = (*(A_HEAP(A68_120 ))) ;
ZSAASIM_nullstype = A_UNITE(XSAASIM,mode9,9,YSAASIM);
 /* line 98: */
BTAASIM = (*(A_HEAP(A68_119 ))) ;
CTAASIM_voidstype = A_UNITE(ATAASIM,mode8,8,BTAASIM);
 /* line 104: */
 /* line 116: */
 /* line 118: */
DTAASIM_nilsvst = (A68_138 *)A68_NIL;
 /* line 119: */
FTAASIM = (*(A_HEAP(A68_132 ))) ;
GTAASIM_nullsvalue = A_UNITE(ETAASIM,mode9,9,FTAASIM);
 /* line 120: */
ITAASIM = (*(A_HEAP(A68_131 ))) ;
JTAASIM_voidsvalue = A_UNITE(HTAASIM,mode8,8,ITAASIM);
 /* line 126: */
 /* line 128: */
LTAASIM_generator( A68_TRUE, &PTAASIM );
OTAASIM_nullword = PTAASIM;
 /* line 129: */
RTAASIM_nilword = (A_VVAC(QTAASIM));
 /* line 141: */
 /* line 154: */
 /* line 164: */
 /* line 166: */
STAASIM_nilsram = (A68_144 *)A68_NIL;
 /* line 167: */
TTAASIM_nilfn = (A68_146 *)A68_NIL;
 /* line 168: */
UTAASIM_nilnode = (A68_150 *)A68_NIL;
 /* line 174: */
 /* line 204: */
 /* line 282: */
 /* line 301: */
 /* line 363: */
 /* line 383: */
 /* line 387: */
 /* line 391: */
 /* line 397: */
 /* line 403: */
 /* line 418: */
 /* line 447: */
 /* line 456: */
 /* line 463: */
 /* line 476: */
 /* line 492: */
 /* line 494: */
 /* line 521: */
A_PROC_EXIT(DECS kebasics);
} 
#undef NL
/* end of translation of ./a68files/kebasics.a68 */
