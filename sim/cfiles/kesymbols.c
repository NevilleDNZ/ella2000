
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
/* UNAME:SCCASIM */
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
A68_INT  Svoid;
A_PAD_INT(PAD_22)
};
typedef struct A68t113  A68_113 ;    /* STRUCT(INT)  */
struct A68t114{
A68_INT  Snull;
A_PAD_INT(PAD_23)
};
typedef struct A68t114  A68_114 ;    /* STRUCT(INT)  */
struct A68t115{
A68_VC  Id;
A68_INT  Lwb;
A_PAD_INT(PAD_24)
A68_INT  Upb;
A_PAD_INT(PAD_25)
};
typedef struct A68t115  A68_115 ;    /* STRUCT(REF MODE26,INT,INT)  */
struct A68t116{
A68_VC  Id;
A68_VC  Char;
};
typedef struct A68t116  A68_116 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t117{
A68_INT  No;
A_PAD_INT(PAD_26)
struct A68t116  T;
};
typedef struct A68t117  A68_117 ;    /* STRUCT(INT,MODE116)  */
struct A68t119 { A68_INT mode; union {
struct A68t118 * mode1;
struct A68t115 * mode2;
struct A68t116 * mode3;
struct A68t120 * mode4;
struct A68t117 * mode5;
struct A68t121 * mode6;
struct A68t122 * mode7;
struct A68t113  mode8;
struct A68t114  mode9;
} data; };
typedef struct A68t119  A68_119 ;    /* UNION(REF MODE118,REF MODE115,REF MODE116,REF MODE120,REF MODE117,REF MODE121,REF MODE122,MODE113,MODE114)  */
struct A68t118{
A68_VC  Id;
struct A68t119  T;
struct A68t118 * Rest;
};
typedef struct A68t118  A68_118 ;    /* STRUCT(REF MODE26,MODE119,REF MODE118)  */
struct A68t120{
A68_INT  No;
A_PAD_INT(PAD_27)
struct A68t119  Type;
};
typedef struct A68t120  A68_120 ;    /* STRUCT(INT,MODE119)  */
struct A68t121{
struct A68t119  From;
struct A68t119  To;
};
typedef struct A68t121  A68_121 ;    /* STRUCT(MODE119,MODE119)  */
struct A68t122{
struct A68t119  T;
struct A68t122 * Rest;
};
typedef struct A68t122  A68_122 ;    /* STRUCT(MODE119,REF MODE122)  */
struct A68t123 { A68_INT mode; union {
struct A68t118 * mode1;
struct A68t115 * mode2;
struct A68t116 * mode3;
} data; };
typedef struct A68t123  A68_123 ;    /* UNION(REF MODE118,REF MODE115,REF MODE116)  */
struct A68t124{
A68_INT  Svvoid;
A_PAD_INT(PAD_28)
};
typedef struct A68t124  A68_124 ;    /* STRUCT(INT)  */
struct A68t125{
A68_INT  Svnull;
A_PAD_INT(PAD_29)
};
typedef struct A68t125  A68_125 ;    /* STRUCT(INT)  */
struct A68t126{
struct A68t119  Type;
};
typedef struct A68t126  A68_126 ;    /* STRUCT(MODE119)  */
struct A68t127{
struct A68t115 * Type;
A68_INT  Value;
A_PAD_INT(PAD_30)
};
typedef struct A68t127  A68_127 ;    /* STRUCT(REF MODE115,INT)  */
struct A68t128{
struct A68t116 * Type;
A68_CHAR  Value;
A_PAD_CHAR(PAD_31)
};
typedef struct A68t128  A68_128 ;    /* STRUCT(REF MODE116,CHAR)  */
struct A68t129{
struct A68t117 * Type;
A68_VC  Value;
};
typedef struct A68t129  A68_129 ;    /* STRUCT(REF MODE117,REF MODE26)  */
struct A68t131 { A68_INT mode; union {
struct A68t126 * mode1;
struct A68t127 * mode2;
struct A68t128 * mode3;
struct A68t129 * mode4;
struct A68t130 * mode5;
struct A68t132 * mode6;
struct A68t133 * mode7;
struct A68t124  mode8;
struct A68t125  mode9;
} data; };
typedef struct A68t131  A68_131 ;    /* UNION(REF MODE126,REF MODE127,REF MODE128,REF MODE129,REF MODE130,REF MODE132,REF MODE133,MODE124,MODE125)  */
struct A68t130{
struct A68t118 * Type;
A68_INT  Tag;
A_PAD_INT(PAD_32)
struct A68t131  Assoc;
};
typedef struct A68t130  A68_130 ;    /* STRUCT(REF MODE118,INT,MODE131)  */
struct A68t132{
struct A68t131  Head;
struct A68t132 * Tail;
};
typedef struct A68t132  A68_132 ;    /* STRUCT(MODE131,REF MODE132)  */
struct A68t133{
struct A68t131  From;
struct A68t131  To;
};
typedef struct A68t133  A68_133 ;    /* STRUCT(MODE131,MODE131)  */
struct A68t134{
A68_INT  Instoffset;
A_PAD_INT(PAD_33)
A68_INT  Offset;
A_PAD_INT(PAD_34)
A68_INT  Size;
A_PAD_INT(PAD_35)
};
typedef struct A68t134  A68_134 ;    /* STRUCT(INT,INT,INT)  */
A_VECTOR(struct A68t134 ,A68t136);
typedef struct A68t136  A68_136 ;    /* VECTOR [] MODE134 */
struct A68t135{
struct A68t119  Type;
struct A68t136  Blocks;
};
typedef struct A68t135  A68_135 ;    /* STRUCT(MODE119,REF MODE136)  */
struct A68t137{
struct A68t135  Firstcell;
A68_INT  Lwb;
A_PAD_INT(PAD_36)
A68_INT  Ramsize;
A_PAD_INT(PAD_37)
A68_INT  Step;
A_PAD_INT(PAD_38)
};
typedef struct A68t137  A68_137 ;    /* STRUCT(MODE135,INT,INT,INT)  */
struct A68t138{
A68_VC  Uname;
A68_VC  Lname;
A68_INT  Node;
A_PAD_INT(PAD_39)
};
typedef struct A68t138  A68_138 ;    /* STRUCT(REF MODE26,REF MODE26,INT)  */
A_VECTOR(struct A68t138 ,A68t140);
typedef struct A68t140  A68_140 ;    /* VECTOR [] MODE138 */
struct A68t139{
struct A68t137 * Ram;
struct A68t135  Outputs;
A68_INT  Noinputs;
A_PAD_INT(PAD_40)
struct A68t140  Body;
};
typedef struct A68t139  A68_139 ;    /* STRUCT(REF MODE137,MODE135,INT,REF MODE140)  */
struct A68t141{
A68_INT  Fn;
A_PAD_INT(PAD_41)
A68_INT  Instance;
A_PAD_INT(PAD_42)
};
typedef struct A68t141  A68_141 ;    /* STRUCT(INT,INT)  */
struct A68t142{
struct A68t135 * Wire;
A68_INT  Instance;
A_PAD_INT(PAD_43)
};
typedef struct A68t142  A68_142 ;    /* STRUCT(REF MODE135,INT)  */
struct A68t143 { A68_INT mode; union {
struct A68t141  mode1;
struct A68t142  mode2;
} data; };
typedef struct A68t143  A68_143 ;    /* UNION(MODE141,MODE142)  */
struct A68t144 { A68_INT mode; union {
struct A68t141  mode1;
struct A68t135  mode2;
} data; };
typedef struct A68t144  A68_144 ;    /* UNION(MODE141,MODE135)  */
struct A68t145{
struct A68t143  Node;
A68_INT  Circuit;
A_PAD_INT(PAD_44)
A68_INT  Base;
A_PAD_INT(PAD_45)
};
typedef struct A68t145  A68_145 ;    /* STRUCT(MODE143,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t146,(struct A68t131 ,struct A68t119 *),(struct A68t131 ,struct A68t119 *,void *));
typedef struct A68t146  A68_146 ;    /* PROC(MODE131) MODE119 */

A_PROCEDURE(A68_BOOL ,A68t147,(struct A68t119 ,struct A68t119 ),(struct A68t119 ,struct A68t119 ,void *));
typedef struct A68t147  A68_147 ;    /* PROC(MODE119,MODE119) BOOL */

A_PROCEDURE(A68_BOOL ,A68t148,(struct A68t131 ,struct A68t131 ),(struct A68t131 ,struct A68t131 ,void *));
typedef struct A68t148  A68_148 ;    /* PROC(MODE131,MODE131) BOOL */

A_PROCEDURE(A68_BOOL ,A68t149,(struct A68t135 ,struct A68t135 ),(struct A68t135 ,struct A68t135 ,void *));
typedef struct A68t149  A68_149 ;    /* PROC(MODE135,MODE135) BOOL */

A_PROCEDURE(A68_BOOL ,A68t150,(struct A68t141 ,struct A68t141 ),(struct A68t141 ,struct A68t141 ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(MODE141,MODE141) BOOL */

A_PROCEDURE(A68_BOOL ,A68t151,(struct A68t142 ,struct A68t142 ),(struct A68t142 ,struct A68t142 ,void *));
typedef struct A68t151  A68_151 ;    /* PROC(MODE142,MODE142) BOOL */

A_PROCEDURE(A68_BOOL ,A68t152,(struct A68t143 ,struct A68t143 ),(struct A68t143 ,struct A68t143 ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(MODE143,MODE143) BOOL */

A_PROCEDURE(A68_BOOL ,A68t153,(struct A68t145 ,struct A68t145 ),(struct A68t145 ,struct A68t145 ,void *));
typedef struct A68t153  A68_153 ;    /* PROC(MODE145,MODE145) BOOL */

A_PROCEDURE(struct A68t122 *,A68t154,(struct A68t122 *,struct A68t122 *),(struct A68t122 *,struct A68t122 *,void *));
typedef struct A68t154  A68_154 ;    /* PROC(REF MODE122,REF MODE122) REF MODE122 */

A_PROCEDURE(A68_VOID ,A68t155,(struct A68t136 ,struct A68t136 ,struct A68t136 *),(struct A68t136 ,struct A68t136 ,struct A68t136 *,void *));
typedef struct A68t155  A68_155 ;    /* PROC(REF MODE136,REF MODE136) REF MODE136 */

A_PROCEDURE(A68_VOID ,A68t156,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(INT,REF MODE26) VOID */

A_PROCEDURE(A68_INT ,A68t157,(A68_VC ),(A68_VC ,void *));
typedef struct A68t157  A68_157 ;    /* PROC(REF MODE26) INT */
struct A68t159 ;

A_PROCEDURE(A68_CHAR ,A68t158,(struct A68t159 ,struct A68t36 ),(struct A68t159 ,struct A68t36 ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(MODE159,MODE36) CHAR */

A_PROCEDURE(A68_VOID ,A68t159,(A68_VC ,struct A68t36 ),(A68_VC ,struct A68t36 ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(REF MODE26,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t160,(struct A68t159 ,A68_INT ,struct A68t36 ,A68_VC *),(struct A68t159 ,A68_INT ,struct A68t36 ,A68_VC *,void *));
typedef struct A68t160  A68_160 ;    /* PROC(MODE159,INT,MODE36) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t161,(struct A68t159 ,struct A68t36 ),(struct A68t159 ,struct A68t36 ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(MODE159,MODE36) INT */

A_PROCEDURE(A68_VOID ,A68t162,(struct A68t159 ,struct A68t36 ,A68_VC *),(struct A68t159 ,struct A68t36 ,A68_VC *,void *));
typedef struct A68t162  A68_162 ;    /* PROC(MODE159,MODE36) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t163,(struct A68t159 ,struct A68t36 ),(struct A68t159 ,struct A68t36 ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(MODE159,MODE36) BOOL */

A_PROCEDURE(A68_VOID ,A68t164,(A68_CHAR ,struct A68t159 ,struct A68t36 ),(A68_CHAR ,struct A68t159 ,struct A68t36 ,void *));
typedef struct A68t164  A68_164 ;    /* PROC(CHAR,MODE159,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t165,(A68_VC ,struct A68t159 ,struct A68t36 ),(A68_VC ,struct A68t159 ,struct A68t36 ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(REF MODE26,MODE159,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t166,(A68_INT ,struct A68t159 ,struct A68t36 ),(A68_INT ,struct A68t159 ,struct A68t36 ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(INT,MODE159,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t167,(A68_BOOL ,struct A68t159 ,struct A68t36 ),(A68_BOOL ,struct A68t159 ,struct A68t36 ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(BOOL,MODE159,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t168,(struct A68t159 ,struct A68t36 ,struct A68t119 *),(struct A68t159 ,struct A68t36 ,struct A68t119 *,void *));
typedef struct A68t168  A68_168 ;    /* PROC(MODE159,MODE36) MODE119 */

A_PROCEDURE(A68_VOID ,A68t169,(struct A68t119 ,struct A68t159 ,struct A68t36 ),(struct A68t119 ,struct A68t159 ,struct A68t36 ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(MODE119,MODE159,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t170,(struct A68t159 ,struct A68t36 ,struct A68t135 *),(struct A68t159 ,struct A68t36 ,struct A68t135 *,void *));
typedef struct A68t170  A68_170 ;    /* PROC(MODE159,MODE36) MODE135 */

A_PROCEDURE(A68_VOID ,A68t171,(struct A68t135 ,struct A68t159 ,struct A68t36 ),(struct A68t135 ,struct A68t159 ,struct A68t36 ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(MODE135,MODE159,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t172,(struct A68t159 ,struct A68t36 ,struct A68t137 *),(struct A68t159 ,struct A68t36 ,struct A68t137 *,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE159,MODE36) MODE137 */

A_PROCEDURE(A68_VOID ,A68t173,(struct A68t137 ,struct A68t159 ,struct A68t36 ),(struct A68t137 ,struct A68t159 ,struct A68t36 ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(MODE137,MODE159,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t174,(struct A68t159 ,struct A68t36 ,struct A68t138 *),(struct A68t159 ,struct A68t36 ,struct A68t138 *,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE159,MODE36) MODE138 */

A_PROCEDURE(A68_VOID ,A68t175,(struct A68t138 ,struct A68t159 ,struct A68t36 ),(struct A68t138 ,struct A68t159 ,struct A68t36 ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(MODE138,MODE159,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t176,(struct A68t159 ,struct A68t36 ,struct A68t139 *),(struct A68t159 ,struct A68t36 ,struct A68t139 *,void *));
typedef struct A68t176  A68_176 ;    /* PROC(MODE159,MODE36) MODE139 */

A_PROCEDURE(A68_VOID ,A68t177,(struct A68t139 ,struct A68t159 ,struct A68t36 ),(struct A68t139 ,struct A68t159 ,struct A68t36 ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(MODE139,MODE159,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t178,(struct A68t159 ,struct A68t36 ,struct A68t141 *),(struct A68t159 ,struct A68t36 ,struct A68t141 *,void *));
typedef struct A68t178  A68_178 ;    /* PROC(MODE159,MODE36) MODE141 */

A_PROCEDURE(A68_VOID ,A68t179,(struct A68t141 ,struct A68t159 ,struct A68t36 ),(struct A68t141 ,struct A68t159 ,struct A68t36 ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(MODE141,MODE159,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t180,(struct A68t159 ,struct A68t36 ,struct A68t144 *),(struct A68t159 ,struct A68t36 ,struct A68t144 *,void *));
typedef struct A68t180  A68_180 ;    /* PROC(MODE159,MODE36) MODE144 */

A_PROCEDURE(A68_VOID ,A68t181,(struct A68t144 ,struct A68t159 ,struct A68t36 ),(struct A68t144 ,struct A68t159 ,struct A68t36 ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(MODE144,MODE159,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t182,(struct A68t159 ,struct A68t36 ,struct A68t145 *),(struct A68t159 ,struct A68t36 ,struct A68t145 *,void *));
typedef struct A68t182  A68_182 ;    /* PROC(MODE159,MODE36) MODE145 */

A_PROCEDURE(A68_VOID ,A68t183,(struct A68t145 ,struct A68t159 ,struct A68t36 ),(struct A68t145 ,struct A68t159 ,struct A68t36 ,void *));
typedef struct A68t183  A68_183 ;    /* PROC(MODE145,MODE159,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t184,(void),(void *));
typedef struct A68t184  A68_184 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t185,(struct A68t184 ),(struct A68t184 ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(MODE184) VOID */

A_PROCEDURE(A68_VOID ,A68t186,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t186  A68_186 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t187,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t187  A68_187 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,56,A68t188);
typedef struct A68t188  A68_188 ;    /* STRUCT 56 CHAR */

A_PROCEDURE(A68_VOID ,A68t189,(A68_BOOL ,struct A68t136 *),(A68_BOOL ,struct A68t136 *,void *));
typedef struct A68t189  A68_189 ;    /* PROC(BOOL) MODE136 */
struct A68t190{
struct A68t119  Type;
A68_INT  Machinesize;
A_PAD_INT(PAD_46)
};
typedef struct A68t190  A68_190 ;    /* STRUCT(MODE119,INT)  */
A_VECTOR(struct A68t190 ,A68t192);
typedef struct A68t192  A68_192 ;    /* VECTOR [] MODE190 */
struct A68t191{
struct A68t192  Types;
A68_INT  Lasttype;
A_PAD_INT(PAD_47)
};
typedef struct A68t191  A68_191 ;    /* STRUCT(REF MODE192,INT)  */
A_VECTOR(struct A68t191 ,A68t193);
typedef struct A68t193  A68_193 ;    /* VECTOR [] MODE191 */

A_PROCEDURE(A68_VOID ,A68t194,(A68_BOOL ,struct A68t193 *),(A68_BOOL ,struct A68t193 *,void *));
typedef struct A68t194  A68_194 ;    /* PROC(BOOL) MODE193 */

A_PROCEDURE(A68_VOID ,A68t195,(A68_INT ),(A68_INT ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t196,(A68_BOOL ,struct A68t192 *),(A68_BOOL ,struct A68t192 *,void *));
typedef struct A68t196  A68_196 ;    /* PROC(BOOL) MODE192 */

A_PROCEDURE(A68_INT ,A68t197,(struct A68t119 ),(struct A68t119 ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(MODE119) INT */

A_PROCEDURE(A68_INT ,A68t198,(struct A68t119 ,struct A68t197 ),(struct A68t119 ,struct A68t197 ,void *));
typedef struct A68t198  A68_198 ;    /* PROC(MODE119,MODE197) INT */

A_PROCEDURE(struct A68t190 *,A68t199,(A68_INT ),(A68_INT ,void *));
typedef struct A68t199  A68_199 ;    /* PROC(INT) REF MODE190 */

A_PROCEDURE(A68_VOID ,A68t200,(A68_INT ,struct A68t119 *),(A68_INT ,struct A68t119 *,void *));
typedef struct A68t200  A68_200 ;    /* PROC(INT) MODE119 */
struct A68t201{
A68_INT  Instoffset;
A_PAD_INT(PAD_48)
A68_INT  Ipno;
A_PAD_INT(PAD_49)
struct A68t201 * Next;
};
typedef struct A68t201  A68_201 ;    /* STRUCT(INT,INT,REF MODE201)  */
A_VECTOR(struct A68t201 *,A68t203);
typedef struct A68t203  A68_203 ;    /* VECTOR [] REF MODE201 */
struct A68t204{
A68_INT  Size;
A_PAD_INT(PAD_50)
A68_INT  Offset;
A_PAD_INT(PAD_51)
A68_BITS  Sort;
A_PAD_BITS(PAD_52)
};
typedef struct A68t204  A68_204 ;    /* STRUCT(INT,INT,BITS)  */
struct A68t205{
A68_INT  Workspace;
A_PAD_INT(PAD_53)
A68_INT  History;
A_PAD_INT(PAD_54)
A68_INT  Declid;
A_PAD_INT(PAD_55)
};
typedef struct A68t205  A68_205 ;    /* STRUCT(INT,INT,INT)  */
struct A68t202{
A68_VC  Name;
A68_INT  Outer;
A_PAD_INT(PAD_56)
A68_INT  Version;
A_PAD_INT(PAD_57)
struct A68t139  Function;
A68_INT  Lastbinding;
A_PAD_INT(PAD_58)
struct A68t32  Expansion;
A68_INT  Lastexpansion;
A_PAD_INT(PAD_59)
struct A68t32  Constantnos;
A68_INT  Lastconstantno;
A_PAD_INT(PAD_60)
struct A68t32  Inputsizes;
struct A68t32  Inputupbs;
struct A68t203  Inputaliases;
struct A68t32  Inputfanouts;
A68_INT  Aninstance;
A_PAD_INT(PAD_61)
A68_INT  Lastinstanceoffset;
A_PAD_INT(PAD_62)
struct A68t135  Outputs;
struct A68t204  Shape;
struct A68t205  Alienshape;
A68_INT  Seedtype;
A_PAD_INT(PAD_63)
A68_INT  Scaletime;
A_PAD_INT(PAD_64)
};
typedef struct A68t202  A68_202 ;    /* STRUCT(REF MODE26,INT,INT,MODE139,INT,REF MODE32,INT,REF MODE32,INT,REF MODE32,REF MODE32,REF MODE203,REF MODE32,INT,INT,MODE135,MODE204,MODE205,INT,INT)  */
A_VECTOR(struct A68t202 ,A68t207);
typedef struct A68t207  A68_207 ;    /* VECTOR [] MODE202 */
A_VECTOR(struct A68t144 ,A68t209);
typedef struct A68t209  A68_209 ;    /* VECTOR [] MODE144 */

A_PROCEDURE(A68_VOID ,A68t210,(A68_BOOL ,struct A68t203 *),(A68_BOOL ,struct A68t203 *,void *));
typedef struct A68t210  A68_210 ;    /* PROC(BOOL) MODE203 */

A_PROCEDURE(A68_VOID ,A68t211,(A68_BOOL ,struct A68t209 *),(A68_BOOL ,struct A68t209 *,void *));
typedef struct A68t211  A68_211 ;    /* PROC(BOOL) MODE209 */

A_PROCEDURE(A68_VOID ,A68t212,(A68_BOOL ,struct A68t207 *),(A68_BOOL ,struct A68t207 *,void *));
typedef struct A68t212  A68_212 ;    /* PROC(BOOL) MODE207 */

A_PROCEDURE(A68_VOID ,A68t213,(struct A68t202 *),(struct A68t202 *,void *));
typedef struct A68t213  A68_213 ;    /* PROC(REF MODE202) VOID */

A_PROCEDURE(A68_VOID ,A68t214,(A68_BOOL ,struct A68t140 *),(A68_BOOL ,struct A68t140 *,void *));
typedef struct A68t214  A68_214 ;    /* PROC(BOOL) MODE140 */

A_PROCEDURE(A68_INT ,A68t215,(A68_VC ,A68_INT ,A68_INT ,A68_INT ,struct A68t135 ,struct A68t135 ,struct A68t137 *,struct A68t204 ,struct A68t205 ),(A68_VC ,A68_INT ,A68_INT ,A68_INT ,struct A68t135 ,struct A68t135 ,struct A68t137 *,struct A68t204 ,struct A68t205 ,void *));
typedef struct A68t215  A68_215 ;    /* PROC(REF MODE26,INT,INT,INT,MODE135,MODE135,REF MODE137,MODE204,MODE205) INT */

A_PROCEDURE(A68_VOID ,A68t216,(A68_INT ,A68_VC ,A68_VC ,struct A68t144 ),(A68_INT ,A68_VC ,A68_VC ,struct A68t144 ,void *));
typedef struct A68t216  A68_216 ;    /* PROC(INT,REF MODE26,REF MODE26,MODE144) VOID */

A_PROCEDURE(A68_VOID ,A68t217,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t218,(A68_INT ,struct A68t32 ),(A68_INT ,struct A68t32 ,void *));
typedef struct A68t218  A68_218 ;    /* PROC(INT,REF MODE32) VOID */

A_PROCEDURE(A68_VOID ,A68t219,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t219  A68_219 ;    /* PROC(INT,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t220,(A68_INT ,struct A68t204 ),(A68_INT ,struct A68t204 ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(INT,MODE204) VOID */

A_PROCEDURE(A68_VOID ,A68t221,(A68_INT ,struct A68t136 ,struct A68t136 ),(A68_INT ,struct A68t136 ,struct A68t136 ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(INT,REF MODE136,REF MODE136) VOID */

A_PROCEDURE(A68_VOID ,A68t222,(A68_VC ,A68_INT ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t222  A68_222 ;    /* PROC(REF MODE26,INT,INT) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t223,(A68_VC ,A68_INT ,A68_INT ),(A68_VC ,A68_INT ,A68_INT ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(REF MODE26,INT,INT) INT */

A_PROCEDURE(A68_VOID ,A68t224,(A68_INT ,struct A68t139 *),(A68_INT ,struct A68t139 *,void *));
typedef struct A68t224  A68_224 ;    /* PROC(INT) MODE139 */

A_PROCEDURE(A68_VOID ,A68t225,(A68_INT ,struct A68t144 *),(A68_INT ,struct A68t144 *,void *));
typedef struct A68t225  A68_225 ;    /* PROC(INT) MODE144 */
struct A68t226{
A68_INT  Lwb;
A_PAD_INT(PAD_65)
A68_INT  Upb;
A_PAD_INT(PAD_66)
};
typedef struct A68t226  A68_226 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t227,(A68_INT ,A68_INT ,struct A68t226 *),(A68_INT ,A68_INT ,struct A68t226 *,void *));
typedef struct A68t227  A68_227 ;    /* PROC(INT,INT) MODE226 */
struct A68t228{
A68_INT  Instoffset;
A_PAD_INT(PAD_67)
A68_INT  Ipno;
A_PAD_INT(PAD_68)
};
typedef struct A68t228  A68_228 ;    /* STRUCT(INT,INT)  */
A_VECTOR(struct A68t228 ,A68t229);
typedef struct A68t229  A68_229 ;    /* VECTOR [] MODE228 */

A_PROCEDURE(A68_VOID ,A68t230,(A68_INT ,A68_INT ,struct A68t229 *),(A68_INT ,A68_INT ,struct A68t229 *,void *));
typedef struct A68t230  A68_230 ;    /* PROC(INT,INT) REF MODE229 */

A_PROCEDURE(A68_VOID ,A68t231,(A68_BOOL ,struct A68t229 *),(A68_BOOL ,struct A68t229 *,void *));
typedef struct A68t231  A68_231 ;    /* PROC(BOOL) MODE229 */

A_PROCEDURE(A68_VOID ,A68t232,(A68_INT ,struct A68t204 *),(A68_INT ,struct A68t204 *,void *));
typedef struct A68t232  A68_232 ;    /* PROC(INT) MODE204 */

A_PROCEDURE(A68_VOID ,A68t233,(A68_INT ,struct A68t205 *),(A68_INT ,struct A68t205 *,void *));
typedef struct A68t233  A68_233 ;    /* PROC(INT) MODE205 */

A_PROCEDURE(A68_VOID ,A68t234,(A68_INT ,struct A68t135 *),(A68_INT ,struct A68t135 *,void *));
typedef struct A68t234  A68_234 ;    /* PROC(INT) MODE135 */
A_ISTRUCT(A68_CHAR ,10,A68t235);
typedef struct A68t235  A68_235 ;    /* STRUCT 10 CHAR */

A_PROCEDURE(A68_VOID ,A68t236,(struct A68t139 ,struct A68t135 *),(struct A68t139 ,struct A68t135 *,void *));
typedef struct A68t236  A68_236 ;    /* PROC(MODE139) MODE135 */

A_PROCEDURE(A68_BOOL ,A68t237,(A68_VC ),(A68_VC ,void *));
typedef struct A68t237  A68_237 ;    /* PROC(REF MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t238,(struct A68t237 ),(struct A68t237 ,void *));
typedef struct A68t238  A68_238 ;    /* PROC(MODE237) VOID */

A_PROCEDURE(A68_BOOL ,A68t239,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t239  A68_239 ;    /* PROC(CHAR) BOOL */
A_ISTRUCT(A68_CHAR ,38,A68t240);
typedef struct A68t240  A68_240 ;    /* STRUCT 38 CHAR */

A_PROCEDURE(A68_VOID ,A68t241,(struct A68t159 ,struct A68t36 ),(struct A68t159 ,struct A68t36 ,void *));
typedef struct A68t241  A68_241 ;    /* PROC(MODE159,MODE36) VOID */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from kesave --- */
extern A68_INT  LGBASIM_readint(struct A68t159 ,struct A68t36 );
extern A68_VOID  RGBASIM_readid(struct A68t159 ,struct A68t36 ,A68_VC *);
extern A68_VOID  PHBASIM_writeint(A68_INT ,struct A68t159 ,struct A68t36 );
extern A68_VOID  BIBASIM_writeid(A68_VC ,struct A68t159 ,struct A68t36 );
extern A68_168  PIBASIM_readstype;
extern A68_169  GMBASIM_writestype;
extern A68_VOID  MOBASIM_readwire(struct A68t159 ,struct A68t36 ,A68_135 *);
extern A68_VOID  FOBASIM_writewire(struct A68t135 ,struct A68t159 ,struct A68t36 );
extern A68_VOID  SQBASIM_readfn(struct A68t159 ,struct A68t36 ,A68_139 *);
extern A68_VOID  LQBASIM_writefn(struct A68t139 ,struct A68t159 ,struct A68t36 );
extern A68_VOID  NSBASIM_readrnode(struct A68t159 ,struct A68t36 ,A68_144 *);
extern A68_VOID  HSBASIM_writernode(struct A68t144 ,struct A68t159 ,struct A68t36 );
/* --- End of imports from kesave --- */


/* --- Imports from kebasics --- */
extern A68_122 * WSAASIM_nilsst;
extern A68_137 * STAASIM_nilsram;
extern A68_BOOL  CVAASIM_(struct A68t119 ,struct A68t119 );
extern A68_VOID  LABASIM_(struct A68t136 ,struct A68t136 ,A68_136 *);
/* --- End of imports from kebasics --- */


/* --- Imports from basics --- */
extern A68_VOID  RSCAOST_makeid(A68_VC ,A68_VC *);
extern A68_VC  NTCAOST_nilid;
extern A68_VC  TTCAOST_nullid;
/* --- End of imports from basics --- */


/* --- Imports from putstrings --- */
extern A68_VOID  FCAAOSI_intchars(A68_INT ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void EFBASIM(void);   /* kesave */
extern void JSAASIM(void);   /* kebasics */
extern void JSCAOST(void);   /* basics */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_188   WCCASIM = {"$Id: kesymbols.a68,v 34.2 1995/03/29 13:04:56 ella Exp $"}; 
A_GISVEC(A68_VC ,XCCASIM,WCCASIM,56)
static A68_32  CDCASIM_nullrvi;
static A68_136  IDCASIM_nullrvb;
#define KDCASIM_hashsize 51
static A68_194  LDCASIM_anonymous;
static A68_193  RDCASIM_typetable;
#define AHCASIM_nilalias (A68_201 *)A68_NIL
static A68_203  FHCASIM_nullrva;
#define HHCASIM_compound 0X0U
#define IHCASIM_combinatorial 0X1U
#define JHCASIM_eventsetting 0X2U
#define KHCASIM_eventhandling 0X4U
#define LHCASIM_initialised 0X8U
#define MHCASIM_queryset 0X10U
#define NHCASIM_genericid 0X20U
#define OHCASIM_aliensort 0X40U
#define PHCASIM_saved 0X80U
#define QHCASIM_restored 0X100U
#define RHCASIM_terminated 0X200U
A68_BITS  SHCASIM_combinatorialloopbreak;
A68_BITS  THCASIM_eventloopbreak;
A68_BITS  UHCASIM_unitdelay;
A68_BITS  VHCASIM_generaldelay;
static A68_209  WHCASIM_nodes;
static A68_INT  XHCASIM_lastnode;
static A68_207  YHCASIM_symboltable;
A68_INT  ZHCASIM_lastsymbol;
static A68_235   KYCASIM = {"$Genericid"}; 
A_GISVEC(A68_VC ,TYCASIM,KYCASIM,10)
static A68_240   CADASIM = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ+-*/%<>=:.^|"}; 
A_GISVEC(A68_VC ,DADASIM,CADASIM,38)
static A68_INT  PADASIM_lastcleanentry;
typedef struct   /* env of non-global proc */
{
A68_INT  WDCASIM_newsize;
A_PAD_INT(PAD_69)
} AECASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  CICASIM_newsize;
A_PAD_INT(PAD_70)
} GICASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  PICASIM_newsize;
A_PAD_INT(PAD_71)
} TICASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  DJCASIM_newsize;
A_PAD_INT(PAD_72)
} HJCASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  TJCASIM_newsize;
A_PAD_INT(PAD_73)
} XJCASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  JKCASIM_newsize;
A_PAD_INT(PAD_74)
} NKCASIM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} LLCASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_32  Sizes;
} TOCASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_32  Sizes;
} EPCASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  ISCASIM_upbbody;
A_PAD_INT(PAD_75)
} OSCASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  WSCASIM_upbwire;
A_PAD_INT(PAD_76)
} ATCASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_135  KTCASIM_w;
} PTCASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * JVCASIM_i;
} NVCASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  OWCASIM_upb;
A_PAD_INT(PAD_77)
} SWCASIM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} VXCASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  VCDASIM_upb;
A_PAD_INT(PAD_78)
} ZCDASIM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} PDDASIM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} AEDASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  OEDASIM_upb;
A_PAD_INT(PAD_79)
} SEDASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  CFDASIM_upb1;
A_PAD_INT(PAD_80)
} GFDASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  QFDASIM_upb2;
A_PAD_INT(PAD_81)
} UFDASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  DGDASIM_upb3;
A_PAD_INT(PAD_82)
} HGDASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  QGDASIM_upb4;
A_PAD_INT(PAD_83)
} UGDASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  LHDASIM_upb5;
A_PAD_INT(PAD_84)
} PHDASIM_generator;

A_STATIC A68_VOID  ZCCASIM_generator(A68_BOOL  YCCASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_VOID  FDCASIM_generator(A68_BOOL  EDCASIM_anonymous, A68_136  *ReturnedValue);

A_STATIC A68_VOID  NDCASIM_generator(A68_BOOL  MDCASIM_anonymous, A68_193  *ReturnedValue);

A_STATIC A68_VOID  UDCASIM_extendbucket(A68_INT  Hashvalue);

A_STATIC A68_VOID  ZDCASIM_generator(A68_BOOL  XDCASIM_anonymous, A68_192  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  KECASIM_hashtype(A68_119  Type);

A68_INT  ZFCASIM_addtype(A68_119  Type, A68_197  Machinewidth);

A_STATIC A68_190 * NGCASIM_lookuptypeentry(A68_INT  Index);

A68_VOID  VGCASIM_lookuptype(A68_INT  Index, A68_119  *ReturnedValue);

A68_INT  YGCASIM_lookuptypesize(A68_INT  Index);

A_STATIC A68_VOID  CHCASIM_generator(A68_BOOL  BHCASIM_anonymous, A68_203  *ReturnedValue);

A_STATIC A68_VOID  AICASIM_extendnodes(void);

A_STATIC A68_VOID  FICASIM_generator(A68_BOOL  DICASIM_anonymous, A68_209  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NICASIM_extendsymboltable(void);

A_STATIC A68_VOID  SICASIM_generator(A68_BOOL  QICASIM_anonymous, A68_207  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BJCASIM_extendbindings(A68_202 * Entry);

A_STATIC A68_VOID  GJCASIM_generator(A68_BOOL  EJCASIM_anonymous, A68_140  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RJCASIM_extendexpansion(A68_202 * Entry);

A_STATIC A68_VOID  WJCASIM_generator(A68_BOOL  UJCASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HKCASIM_extendconstantnos(A68_202 * Entry);

A_STATIC A68_VOID  MKCASIM_generator(A68_BOOL  KKCASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A68_INT  FLCASIM_addfunction(A68_VC  Name, A68_INT  Outer, A68_INT  Version, A68_INT  Noinputs, A68_135  Moutputs, A68_135  Coutputs, A68_137 * Ramdata, A68_204  Shape, A68_205  Alienshape);

A_STATIC A68_VOID  KLCASIM_generator(A68_BOOL  ILCASIM_anonymous, A68_140  *ReturnedValue, void *NonLocals);

A68_VOID  WLCASIM_updatebinding(A68_INT  Fnno, A68_VC  Ucname, A68_VC  Lcname, A68_144  Node);

A68_VOID  XMCASIM_addbinding(A68_INT  Fnno, A68_VC  Ucname, A68_VC  Lcname, A68_144  Node);

A68_INT  RNCASIM_nextinstance(A68_INT  Fnno, A68_INT  Component);

A68_VOID  YNCASIM_addexpansion(A68_INT  Fnno, A68_INT  Component);

A68_VOID  GOCASIM_addconstantno(A68_INT  Fnno, A68_INT  Constantno);

A68_VOID  OOCASIM_addinputsizes(A68_INT  Fnno, A68_32  Sizes);

A_STATIC A68_VOID  SOCASIM_generator(A68_BOOL  QOCASIM_anonymous, A68_203  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DPCASIM_generator(A68_BOOL  BPCASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A68_VOID  OPCASIM_addinputupbs(A68_INT  Fnno, A68_32  Upbs);

A68_VOID  VPCASIM_addinputalias(A68_INT  Fnno, A68_INT  Srcipno, A68_INT  Instoffset, A68_INT  Destipno, A68_INT  Componentfnno);

A68_VOID  GQCASIM_addshape(A68_INT  Fnno, A68_204  Shape);

A68_VOID  LQCASIM_addoutputlocation(A68_INT  Fnno, A68_136  Mloc, A68_136  Cloc);

A68_VOID  QQCASIM_addexampleinstance(A68_INT  Fnno, A68_INT  Instance);

A68_VOID  UQCASIM_addseedtype(A68_INT  Fnno, A68_INT  Seedtype);

A68_VOID  YQCASIM_addscaletime(A68_INT  Fnno, A68_INT  Scaletimevalue);

A68_VOID  DRCASIM_uniqueid(A68_VC  Name, A68_INT  Outer, A68_INT  Version, A68_VC  *ReturnedValue);

A68_INT  NRCASIM_lookupname(A68_VC  Name, A68_INT  Outer, A68_INT  Version);

A68_VOID  GSCASIM_rawlookupfunction(A68_INT  Fnno, A68_139  *ReturnedValue);

A_STATIC A68_VOID  NSCASIM_generator(A68_BOOL  LSCASIM_anonymous, A68_140  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZSCASIM_generator(A68_BOOL  XSCASIM_anonymous, A68_136  *ReturnedValue, void *NonLocals);

A68_VOID  ITCASIM_rawlookuprnode(A68_INT  Node, A68_144  *ReturnedValue);

A_STATIC A68_VOID  OTCASIM_generator(A68_BOOL  MTCASIM_anonymous, A68_136  *ReturnedValue, void *NonLocals);

A68_VOID  ZTCASIM_lookupuserid(A68_INT  Fnno, A68_VC  *ReturnedValue);

A68_VOID  CUCASIM_lookupid(A68_INT  Fnno, A68_VC  *ReturnedValue);

A68_VOID  GUCASIM_lookupexpansion(A68_INT  Fnno, A68_32  *ReturnedValue);

A68_VOID  LUCASIM_lookupconstantnos(A68_INT  Fnno, A68_32  *ReturnedValue);

A68_VOID  QUCASIM_lookupinputsizes(A68_INT  Fnno, A68_32  *ReturnedValue);

A68_VOID  UUCASIM_lookupinputslice(A68_INT  Fnno, A68_INT  Fsindex, A68_226  *ReturnedValue);

A68_VOID  FVCASIM_lookupinputaliases(A68_INT  Fnno, A68_INT  Ipno, A68_229  *ReturnedValue);

A_STATIC A68_VOID  MVCASIM_generator(A68_BOOL  KVCASIM_anonymous, A68_229  *ReturnedValue, void *NonLocals);

A68_INT  WVCASIM_lookuptotalinputfanout(A68_INT  Fnno);

A68_VOID  DWCASIM_lookupshape(A68_INT  Fnno, A68_204  *ReturnedValue);

A68_VOID  GWCASIM_lookupalienshape(A68_INT  Fnno, A68_205  *ReturnedValue);

A68_INT  JWCASIM_lookupaninstance(A68_INT  Fnno);

A68_VOID  MWCASIM_lookupoutputs(A68_INT  Fnno, A68_135  *ReturnedValue);

A_STATIC A68_VOID  RWCASIM_generator(A68_BOOL  PWCASIM_anonymous, A68_136  *ReturnedValue, void *NonLocals);

A68_INT  BXCASIM_lookuplastinstance(A68_INT  Fnno);

A68_VOID  FXCASIM_lookupuserparent(A68_INT  Fnno, A68_VC  *ReturnedValue);

A68_INT  MXCASIM_lookupscaletime(A68_INT  Fnno);

A68_VOID  OXCASIM_initialisetables(void);

A_STATIC A68_VOID  UXCASIM_generator(A68_BOOL  SXCASIM_anonymous, A68_192  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BYCASIM_generator(A68_BOOL  AYCASIM_anonymous, A68_209  *ReturnedValue);

A_STATIC A68_VOID  GYCASIM_generator(A68_BOOL  FYCASIM_anonymous, A68_207  *ReturnedValue);

A68_VOID  VYCASIM_removetables(void);

A68_VOID  EZCASIM_rawinputs(A68_139  Fn, A68_135  *ReturnedValue);

A68_VOID  YZCASIM_rawlistsimulatablefunctions(A68_237  P);

A_STATIC A68_BOOL  BADASIM_legalfirst(A68_CHAR  C);

A68_VOID  QADASIM_incrementaltablecleanup(void);

A68_VOID  RADASIM_finaltablecleanup(void);

A68_VOID  GBDASIM_savetables(A68_159  Ferry, A68_36  Flt);

A68_VOID  RCDASIM_restoretables(A68_159  Ferry, A68_36  Flt);

A_STATIC A68_VOID  YCDASIM_generator(A68_BOOL  WCDASIM_anonymous, A68_192  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ODDASIM_generator(A68_BOOL  MDDASIM_anonymous, A68_209  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZDDASIM_generator(A68_BOOL  XDDASIM_anonymous, A68_207  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  REDASIM_generator(A68_BOOL  PEDASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FFDASIM_generator(A68_BOOL  DFDASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  TFDASIM_generator(A68_BOOL  RFDASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GGDASIM_generator(A68_BOOL  EGDASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  TGDASIM_generator(A68_BOOL  RGDASIM_anonymous, A68_203  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OHDASIM_generator(A68_BOOL  MHDASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZDCASIM_generator(A68_BOOL  XDCASIM_anonymous, A68_192  *ReturnedValue, void *NonLocals)
#define NL(x) (((AECASIM_generator *)NonLocals)->x)
{ 
A68_192  BECASIM;  /* clause result */
A68_192  CECASIM;  /* OPERATORS - dynamic generator */
{ 
CECASIM.upb = NL(WDCASIM_newsize) ;
( XDCASIM_anonymous? A_VLOC(A68_190 ,CECASIM): A_VHEAP(A68_190 ,CECASIM) );
BECASIM = CECASIM;
} 
*ReturnedValue = (BECASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  FICASIM_generator(A68_BOOL  DICASIM_anonymous, A68_209  *ReturnedValue, void *NonLocals)
#define NL(x) (((GICASIM_generator *)NonLocals)->x)
{ 
A68_209  HICASIM;  /* clause result */
A68_209  IICASIM;  /* OPERATORS - dynamic generator */
{ 
IICASIM.upb = NL(CICASIM_newsize) ;
( DICASIM_anonymous? A_VLOC(A68_144 ,IICASIM): A_VHEAP(A68_144 ,IICASIM) );
HICASIM = IICASIM;
} 
*ReturnedValue = (HICASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  SICASIM_generator(A68_BOOL  QICASIM_anonymous, A68_207  *ReturnedValue, void *NonLocals)
#define NL(x) (((TICASIM_generator *)NonLocals)->x)
{ 
A68_207  UICASIM;  /* clause result */
A68_207  VICASIM;  /* OPERATORS - dynamic generator */
{ 
VICASIM.upb = NL(PICASIM_newsize) ;
( QICASIM_anonymous? A_VLOC(A68_202 ,VICASIM): A_VHEAP(A68_202 ,VICASIM) );
UICASIM = VICASIM;
} 
*ReturnedValue = (UICASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  GJCASIM_generator(A68_BOOL  EJCASIM_anonymous, A68_140  *ReturnedValue, void *NonLocals)
#define NL(x) (((HJCASIM_generator *)NonLocals)->x)
{ 
A68_140  IJCASIM;  /* clause result */
A68_140  JJCASIM;  /* OPERATORS - dynamic generator */
{ 
JJCASIM.upb = NL(DJCASIM_newsize) ;
( EJCASIM_anonymous? A_VLOC(A68_138 ,JJCASIM): A_VHEAP(A68_138 ,JJCASIM) );
IJCASIM = JJCASIM;
} 
*ReturnedValue = (IJCASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  WJCASIM_generator(A68_BOOL  UJCASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((XJCASIM_generator *)NonLocals)->x)
{ 
A68_32  YJCASIM;  /* clause result */
A68_32  ZJCASIM;  /* OPERATORS - dynamic generator */
{ 
ZJCASIM.upb = NL(TJCASIM_newsize) ;
( UJCASIM_anonymous? A_VLOC(A68_INT ,ZJCASIM): A_VHEAP(A68_INT ,ZJCASIM) );
YJCASIM = ZJCASIM;
} 
*ReturnedValue = (YJCASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  MKCASIM_generator(A68_BOOL  KKCASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((NKCASIM_generator *)NonLocals)->x)
{ 
A68_32  OKCASIM;  /* clause result */
A68_32  PKCASIM;  /* OPERATORS - dynamic generator */
{ 
PKCASIM.upb = NL(JKCASIM_newsize) ;
( KKCASIM_anonymous? A_VLOC(A68_INT ,PKCASIM): A_VHEAP(A68_INT ,PKCASIM) );
OKCASIM = PKCASIM;
} 
*ReturnedValue = (OKCASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  KLCASIM_generator(A68_BOOL  ILCASIM_anonymous, A68_140  *ReturnedValue, void *NonLocals)
#define NL(x) (((LLCASIM_generator *)NonLocals)->x)
{ 
A68_140  MLCASIM;  /* clause result */
A68_140  NLCASIM;  /* OPERATORS - dynamic generator */
{ 
NLCASIM.upb = 0 ;
( ILCASIM_anonymous? A_VLOC(A68_138 ,NLCASIM): A_VHEAP(A68_138 ,NLCASIM) );
MLCASIM = NLCASIM;
} 
*ReturnedValue = (MLCASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  SOCASIM_generator(A68_BOOL  QOCASIM_anonymous, A68_203  *ReturnedValue, void *NonLocals)
#define NL(x) (((TOCASIM_generator *)NonLocals)->x)
{ 
A68_203  UOCASIM;  /* clause result */
A68_203  VOCASIM;  /* OPERATORS - dynamic generator */
{ 
VOCASIM.upb = NL(Sizes).upb ;
( QOCASIM_anonymous? A_VLOC(A68_201 *,VOCASIM): A_VHEAP(A68_201 *,VOCASIM) );
UOCASIM = VOCASIM;
} 
*ReturnedValue = (UOCASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  DPCASIM_generator(A68_BOOL  BPCASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((EPCASIM_generator *)NonLocals)->x)
{ 
A68_32  FPCASIM;  /* clause result */
A68_32  GPCASIM;  /* OPERATORS - dynamic generator */
{ 
GPCASIM.upb = NL(Sizes).upb ;
( BPCASIM_anonymous? A_VLOC(A68_INT ,GPCASIM): A_VHEAP(A68_INT ,GPCASIM) );
FPCASIM = GPCASIM;
} 
*ReturnedValue = (FPCASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  NSCASIM_generator(A68_BOOL  LSCASIM_anonymous, A68_140  *ReturnedValue, void *NonLocals)
#define NL(x) (((OSCASIM_generator *)NonLocals)->x)
{ 
A68_140  PSCASIM;  /* clause result */
A68_140  QSCASIM;  /* OPERATORS - dynamic generator */
{ 
QSCASIM.upb = NL(ISCASIM_upbbody) ;
( LSCASIM_anonymous? A_VLOC(A68_138 ,QSCASIM): A_VHEAP(A68_138 ,QSCASIM) );
PSCASIM = QSCASIM;
} 
*ReturnedValue = (PSCASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  ZSCASIM_generator(A68_BOOL  XSCASIM_anonymous, A68_136  *ReturnedValue, void *NonLocals)
#define NL(x) (((ATCASIM_generator *)NonLocals)->x)
{ 
A68_136  BTCASIM;  /* clause result */
A68_136  CTCASIM;  /* OPERATORS - dynamic generator */
{ 
CTCASIM.upb = NL(WSCASIM_upbwire) ;
( XSCASIM_anonymous? A_VLOC(A68_134 ,CTCASIM): A_VHEAP(A68_134 ,CTCASIM) );
BTCASIM = CTCASIM;
} 
*ReturnedValue = (BTCASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  OTCASIM_generator(A68_BOOL  MTCASIM_anonymous, A68_136  *ReturnedValue, void *NonLocals)
#define NL(x) (((PTCASIM_generator *)NonLocals)->x)
{ 
A68_136  QTCASIM;  /* clause result */
A68_136  RTCASIM;  /* OPERATORS - dynamic generator */
{ 
RTCASIM.upb = NL(KTCASIM_w).Blocks.upb ;
( MTCASIM_anonymous? A_VLOC(A68_134 ,RTCASIM): A_VHEAP(A68_134 ,RTCASIM) );
QTCASIM = RTCASIM;
} 
*ReturnedValue = (QTCASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  MVCASIM_generator(A68_BOOL  KVCASIM_anonymous, A68_229  *ReturnedValue, void *NonLocals)
#define NL(x) (((NVCASIM_generator *)NonLocals)->x)
{ 
A68_229  OVCASIM;  /* clause result */
A68_229  PVCASIM;  /* OPERATORS - dynamic generator */
{ 
PVCASIM.upb = (*NL(JVCASIM_i)) ;
( KVCASIM_anonymous? A_VLOC(A68_228 ,PVCASIM): A_VHEAP(A68_228 ,PVCASIM) );
OVCASIM = PVCASIM;
} 
*ReturnedValue = (OVCASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  RWCASIM_generator(A68_BOOL  PWCASIM_anonymous, A68_136  *ReturnedValue, void *NonLocals)
#define NL(x) (((SWCASIM_generator *)NonLocals)->x)
{ 
A68_136  TWCASIM;  /* clause result */
A68_136  UWCASIM;  /* OPERATORS - dynamic generator */
{ 
UWCASIM.upb = NL(OWCASIM_upb) ;
( PWCASIM_anonymous? A_VLOC(A68_134 ,UWCASIM): A_VHEAP(A68_134 ,UWCASIM) );
TWCASIM = UWCASIM;
} 
*ReturnedValue = (TWCASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  UXCASIM_generator(A68_BOOL  SXCASIM_anonymous, A68_192  *ReturnedValue, void *NonLocals)
#define NL(x) (((VXCASIM_generator *)NonLocals)->x)
{ 
A68_192  WXCASIM;  /* clause result */
A68_192  XXCASIM;  /* OPERATORS - dynamic generator */
{ 
XXCASIM.upb = 0 ;
( SXCASIM_anonymous? A_VLOC(A68_190 ,XXCASIM): A_VHEAP(A68_190 ,XXCASIM) );
WXCASIM = XXCASIM;
} 
*ReturnedValue = (WXCASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  BYCASIM_generator(A68_BOOL  AYCASIM_anonymous, A68_209  *ReturnedValue)
{ 
A68_209  CYCASIM;  /* clause result */
A68_209  DYCASIM;  /* OPERATORS - dynamic generator */
{ 
DYCASIM.upb = 100 ;
( AYCASIM_anonymous? A_VLOC(A68_144 ,DYCASIM): A_VHEAP(A68_144 ,DYCASIM) );
CYCASIM = DYCASIM;
} 
*ReturnedValue = (CYCASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  GYCASIM_generator(A68_BOOL  FYCASIM_anonymous, A68_207  *ReturnedValue)
{ 
A68_207  HYCASIM;  /* clause result */
A68_207  IYCASIM;  /* OPERATORS - dynamic generator */
{ 
IYCASIM.upb = 100 ;
( FYCASIM_anonymous? A_VLOC(A68_202 ,IYCASIM): A_VHEAP(A68_202 ,IYCASIM) );
HYCASIM = IYCASIM;
} 
*ReturnedValue = (HYCASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  BADASIM_legalfirst(A68_CHAR  C)
{ 
A68_VC  EADASIM_list;
A68_BOOL  FADASIM_ans;
A68_INT  GADASIM_i;
A68_INT  HADASIM;  /* to part of loop */
A68_BOOL  IADASIM;  /* clause result */
A_PROC_ENTRY(legalfirst);
 /* line 898: */
 /* line 899: */
{ 
EADASIM_list = DADASIM;
 /* line 900: */
FADASIM_ans = A68_FALSE;
 /* line 901: */
HADASIM = EADASIM_list.upb;
for ( GADASIM_i = 1;
GADASIM_i <= HADASIM;
GADASIM_i += 1 )
{ 
if ( !(!FADASIM_ans) ) break;
FADASIM_ans = (C==A_VINDEX(EADASIM_list,GADASIM_i));
}
 /* line 902: */
 /* line 903: */
IADASIM = FADASIM_ans;
} 
A_PROC_EXIT(legalfirst);
return( IADASIM );
} 
#undef NL

A_STATIC A68_VOID  YCDASIM_generator(A68_BOOL  WCDASIM_anonymous, A68_192  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZCDASIM_generator *)NonLocals)->x)
{ 
A68_192  ADDASIM;  /* clause result */
A68_192  BDDASIM;  /* OPERATORS - dynamic generator */
{ 
BDDASIM.upb = NL(VCDASIM_upb) ;
( WCDASIM_anonymous? A_VLOC(A68_190 ,BDDASIM): A_VHEAP(A68_190 ,BDDASIM) );
ADDASIM = BDDASIM;
} 
*ReturnedValue = (ADDASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  ODDASIM_generator(A68_BOOL  MDDASIM_anonymous, A68_209  *ReturnedValue, void *NonLocals)
#define NL(x) (((PDDASIM_generator *)NonLocals)->x)
{ 
A68_209  QDDASIM;  /* clause result */
A68_209  RDDASIM;  /* OPERATORS - dynamic generator */
{ 
RDDASIM.upb = XHCASIM_lastnode ;
( MDDASIM_anonymous? A_VLOC(A68_144 ,RDDASIM): A_VHEAP(A68_144 ,RDDASIM) );
QDDASIM = RDDASIM;
} 
*ReturnedValue = (QDDASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  ZDDASIM_generator(A68_BOOL  XDDASIM_anonymous, A68_207  *ReturnedValue, void *NonLocals)
#define NL(x) (((AEDASIM_generator *)NonLocals)->x)
{ 
A68_207  BEDASIM;  /* clause result */
A68_207  CEDASIM;  /* OPERATORS - dynamic generator */
{ 
CEDASIM.upb = ZHCASIM_lastsymbol ;
( XDDASIM_anonymous? A_VLOC(A68_202 ,CEDASIM): A_VHEAP(A68_202 ,CEDASIM) );
BEDASIM = CEDASIM;
} 
*ReturnedValue = (BEDASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  REDASIM_generator(A68_BOOL  PEDASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((SEDASIM_generator *)NonLocals)->x)
{ 
A68_32  TEDASIM;  /* clause result */
A68_32  UEDASIM;  /* OPERATORS - dynamic generator */
{ 
UEDASIM.upb = NL(OEDASIM_upb) ;
( PEDASIM_anonymous? A_VLOC(A68_INT ,UEDASIM): A_VHEAP(A68_INT ,UEDASIM) );
TEDASIM = UEDASIM;
} 
*ReturnedValue = (TEDASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  FFDASIM_generator(A68_BOOL  DFDASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((GFDASIM_generator *)NonLocals)->x)
{ 
A68_32  HFDASIM;  /* clause result */
A68_32  IFDASIM;  /* OPERATORS - dynamic generator */
{ 
IFDASIM.upb = NL(CFDASIM_upb1) ;
( DFDASIM_anonymous? A_VLOC(A68_INT ,IFDASIM): A_VHEAP(A68_INT ,IFDASIM) );
HFDASIM = IFDASIM;
} 
*ReturnedValue = (HFDASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  TFDASIM_generator(A68_BOOL  RFDASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((UFDASIM_generator *)NonLocals)->x)
{ 
A68_32  VFDASIM;  /* clause result */
A68_32  WFDASIM;  /* OPERATORS - dynamic generator */
{ 
WFDASIM.upb = NL(QFDASIM_upb2) ;
( RFDASIM_anonymous? A_VLOC(A68_INT ,WFDASIM): A_VHEAP(A68_INT ,WFDASIM) );
VFDASIM = WFDASIM;
} 
*ReturnedValue = (VFDASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  GGDASIM_generator(A68_BOOL  EGDASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((HGDASIM_generator *)NonLocals)->x)
{ 
A68_32  IGDASIM;  /* clause result */
A68_32  JGDASIM;  /* OPERATORS - dynamic generator */
{ 
JGDASIM.upb = NL(DGDASIM_upb3) ;
( EGDASIM_anonymous? A_VLOC(A68_INT ,JGDASIM): A_VHEAP(A68_INT ,JGDASIM) );
IGDASIM = JGDASIM;
} 
*ReturnedValue = (IGDASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  TGDASIM_generator(A68_BOOL  RGDASIM_anonymous, A68_203  *ReturnedValue, void *NonLocals)
#define NL(x) (((UGDASIM_generator *)NonLocals)->x)
{ 
A68_203  VGDASIM;  /* clause result */
A68_203  WGDASIM;  /* OPERATORS - dynamic generator */
{ 
WGDASIM.upb = NL(QGDASIM_upb4) ;
( RGDASIM_anonymous? A_VLOC(A68_201 *,WGDASIM): A_VHEAP(A68_201 *,WGDASIM) );
VGDASIM = WGDASIM;
} 
*ReturnedValue = (VGDASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  OHDASIM_generator(A68_BOOL  MHDASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((PHDASIM_generator *)NonLocals)->x)
{ 
A68_32  QHDASIM;  /* clause result */
A68_32  RHDASIM;  /* OPERATORS - dynamic generator */
{ 
RHDASIM.upb = NL(LHDASIM_upb5) ;
( MHDASIM_anonymous? A_VLOC(A68_INT ,RHDASIM): A_VHEAP(A68_INT ,RHDASIM) );
QHDASIM = RHDASIM;
} 
*ReturnedValue = (QHDASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  ZCCASIM_generator(A68_BOOL  YCCASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  ADCASIM;  /* clause result */
A68_32  BDCASIM;  /* OPERATORS - dynamic generator */
{ 
BDCASIM.upb = 0 ;
( YCCASIM_anonymous? A_VLOC(A68_INT ,BDCASIM): A_VHEAP(A68_INT ,BDCASIM) );
ADCASIM = BDCASIM;
} 
*ReturnedValue = (ADCASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  FDCASIM_generator(A68_BOOL  EDCASIM_anonymous, A68_136  *ReturnedValue)
{ 
A68_136  GDCASIM;  /* clause result */
A68_136  HDCASIM;  /* OPERATORS - dynamic generator */
{ 
HDCASIM.upb = 0 ;
( EDCASIM_anonymous? A_VLOC(A68_134 ,HDCASIM): A_VHEAP(A68_134 ,HDCASIM) );
GDCASIM = HDCASIM;
} 
*ReturnedValue = (GDCASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  NDCASIM_generator(A68_BOOL  MDCASIM_anonymous, A68_193  *ReturnedValue)
{ 
A68_193  ODCASIM;  /* clause result */
A68_193  PDCASIM;  /* OPERATORS - dynamic generator */
{ 
PDCASIM.upb = KDCASIM_hashsize ;
( MDCASIM_anonymous? A_VLOC(A68_191 ,PDCASIM): A_VHEAP(A68_191 ,PDCASIM) );
ODCASIM = PDCASIM;
} 
*ReturnedValue = (ODCASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  UDCASIM_extendbucket(A68_INT  Hashvalue)
{ 
A68_INT  VDCASIM_oldsize;
A68_INT  WDCASIM_newsize;
A68_196  YDCASIM_generator;   /* proc value of non-global proc */
A68_192  DECASIM;  /* avoid structure result */
A68_192  EECASIM_newtable;
A68_192  FECASIM;  /* OPERATORS - trim index */
A68_192  GECASIM;  /* YIELD */
A68_192  HECASIM;  /* OPERATORS - assign op */
A68_192 * IECASIM;  /* YIELD */
A_PROC_ENTRY(extendbucket);
 /* line 119: */
 /* line 120: */
{ 
VDCASIM_oldsize = (*(&((&A_VINDEX(RDCASIM_typetable,Hashvalue))->Types))).upb;
 /* line 121: */
WDCASIM_newsize = ((2*VDCASIM_oldsize)+1);
 /* line 122: */
A_CLOSURE( YDCASIM_generator, ZDCASIM_generator, AECASIM_generator );
(( AECASIM_generator * ) ( YDCASIM_generator.nonlocals )) -> WDCASIM_newsize = WDCASIM_newsize;
A_CALLPROC(YDCASIM_generator,(A68_FALSE, &DECASIM),(A68_FALSE, &DECASIM,(YDCASIM_generator).nonlocals));
EECASIM_newtable = DECASIM;
 /* line 123: */
GECASIM = A_VTRIM(FECASIM,(EECASIM_newtable),A_VTSCRIPT(&(FECASIM.upb),(EECASIM_newtable).upb,1,VDCASIM_oldsize)) ;
HECASIM = (*(&((&A_VINDEX(RDCASIM_typetable,Hashvalue))->Types))) ;
A_VASSIGN2(HECASIM,GECASIM,A68_190 );
 /* line 124: */
 /* line 125: */
IECASIM = (&((&A_VINDEX(RDCASIM_typetable,Hashvalue))->Types)) ;
(*IECASIM) = EECASIM_newtable;
} 
A_PROC_EXIT(extendbucket);
return;
} 
#undef NL

A_STATIC A68_INT  KECASIM_hashtype(A68_119  Type)
{ 
A68_119  LECASIM;  /* united object - for case conformity */
A68_INT  MECASIM;  /* clause result */
A68_115 * NECASIM_int;
A68_INT  OECASIM;  /* ADICOPS - MOD */
A68_INT  PECASIM;  /* ADICOPS - MOD */
A68_INT  QECASIM;  /* ADICOPS - MOD */
A68_INT  RECASIM;  /* ADICOPS - MOD */
A68_INT  SECASIM;  /* ADICOPS - MOD */
A68_INT  TECASIM;  /* ADICOPS - MOD */
A68_INT  UECASIM;  /* ADICOPS - MOD */
A68_INT  VECASIM;  /* ADICOPS - MOD */
A68_INT  WECASIM;  /* ADICOPS - MOD */
A68_116 * XECASIM_char;
A68_INT  YECASIM;  /* ADICOPS - MOD */
A68_INT  ZECASIM;  /* ADICOPS - MOD */
A68_INT  AFCASIM;  /* ADICOPS - MOD */
A68_117 * BFCASIM_str;
A68_INT  CFCASIM;  /* ADICOPS - MOD */
A68_INT  DFCASIM;  /* ADICOPS - MOD */
A68_INT  EFCASIM;  /* ADICOPS - MOD */
A68_118 * FFCASIM_enum;
A68_VC  GFCASIM;  /* OPERATORS - simple index */
A68_INT  HFCASIM;  /* YIELD */
A68_INT  IFCASIM;  /* ADICOPS - MOD */
A68_INT  JFCASIM;  /* ADICOPS - MOD */
A68_INT  KFCASIM;  /* ADICOPS - MOD */
A68_121 * LFCASIM_fn;
A68_INT  MFCASIM;  /* ADICOPS - MOD */
A68_INT  NFCASIM;  /* ADICOPS - MOD */
A68_INT  OFCASIM;  /* ADICOPS - MOD */
A68_122 * PFCASIM_st;
A68_INT  QFCASIM;  /* ADICOPS - MOD */
A68_INT  RFCASIM;  /* ADICOPS - MOD */
A68_INT  SFCASIM;  /* ADICOPS - MOD */
A68_120 * TFCASIM_row;
A68_INT  UFCASIM;  /* ADICOPS - MOD */
A68_INT  VFCASIM;  /* ADICOPS - MOD */
A68_INT  WFCASIM;  /* ADICOPS - MOD */
A_PROC_ENTRY(hashtype);
 /* line 134: */
 /* line 135: */
LECASIM = Type ;
switch ( LECASIM.mode )
{ 
case 9: /* STRUCT(INT)  */
 /* line 136: */
MECASIM = 1;
break;
case 8: /* STRUCT(INT)  */
 /* line 137: */
MECASIM = 2;
break;
case 2: /* REF STRUCT(REF MODE26,INT,INT)  */
NECASIM_int = (LECASIM.data.mode2);
 /* line 138: */
PECASIM = (*(&(NECASIM_int->Lwb))) ;
QECASIM = 37 ;
SECASIM = (*(&(NECASIM_int->Upb))) ;
TECASIM = 37 ;
VECASIM = (A_MOD(PECASIM,QECASIM,OECASIM)+A_MOD(SECASIM,TECASIM,RECASIM)) ;
WECASIM = 7 ;
MECASIM = (A_MOD(VECASIM,WECASIM,UECASIM)+3);
break;
case 3: /* REF STRUCT(REF MODE26,REF MODE26)  */
XECASIM_char = (LECASIM.data.mode3);
 /* line 139: */
ZECASIM = (*(&(XECASIM_char->Char))).upb ;
AFCASIM = 7 ;
MECASIM = (A_MOD(ZECASIM,AFCASIM,YECASIM)+10);
break;
case 5: /* REF STRUCT(INT,MODE116)  */
BFCASIM_str = (LECASIM.data.mode5);
 /* line 140: */
DFCASIM = (*(&(BFCASIM_str->No))) ;
EFCASIM = 7 ;
MECASIM = (A_MOD(DFCASIM,EFCASIM,CFCASIM)+17);
break;
case 1: /* REF STRUCT(REF MODE26,MODE119,REF MODE118)  */
FFCASIM_enum = (LECASIM.data.mode1);
 /* line 141: */
GFCASIM = (*(&(FFCASIM_enum->Id))) ;
HFCASIM = 1 ;
JFCASIM = (A68_INT)(unsigned char)(*(&A_VINDEX(GFCASIM,HFCASIM))) ;
KFCASIM = 7 ;
MECASIM = (A_MOD(JFCASIM,KFCASIM,IFCASIM)+24);
break;
case 6: /* REF STRUCT(MODE119,MODE119)  */
LFCASIM_fn = (LECASIM.data.mode6);
 /* line 142: */
 /* line 143: */
NFCASIM = (KECASIM_hashtype((*(&(LFCASIM_fn->From))))+KECASIM_hashtype((*(&(LFCASIM_fn->To))))) ;
OFCASIM = 7 ;
MECASIM = (A_MOD(NFCASIM,OFCASIM,MFCASIM)+31);
break;
case 7: /* REF STRUCT(MODE119,REF MODE122)  */
PFCASIM_st = (LECASIM.data.mode7);
 /* line 144: */
RFCASIM = KECASIM_hashtype((*(&(PFCASIM_st->T)))) ;
SFCASIM = 7 ;
MECASIM = (A_MOD(RFCASIM,SFCASIM,QFCASIM)+38);
break;
case 4: /* REF STRUCT(INT,MODE119)  */
TFCASIM_row = (LECASIM.data.mode4);
 /* line 145: */
VFCASIM = (*(&(TFCASIM_row->No))) ;
WFCASIM = 7 ;
MECASIM = (A_MOD(VFCASIM,WFCASIM,UFCASIM)+45);
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(hashtype);
return( MECASIM );
} 
#undef NL

A68_INT  ZFCASIM_addtype(A68_119  Type, A68_197  Machinewidth)
{ 
A68_INT  AGCASIM_hash;
A68_INT  BGCASIM_found;
A68_191 * CGCASIM_bucket;
A68_INT  DGCASIM_entry;
A68_INT  EGCASIM;  /* to part of loop */
A68_192  FGCASIM;  /* OPERATORS - simple index */
A68_190  GGCASIM;  /* collateral clause result */
A68_192  HGCASIM;  /* OPERATORS - simple index */
A68_INT * IGCASIM;  /* YIELD */
A68_INT  JGCASIM;  /* YIELD */
A68_190 * KGCASIM;  /* YIELD */
A68_INT  LGCASIM;  /* clause result */
A_PROC_ENTRY(addtype);
 /* line 153: */
 /* line 154: */
{ 
AGCASIM_hash = KECASIM_hashtype(Type);
 /* line 155: */
BGCASIM_found = 0;
 /* line 156: */
CGCASIM_bucket = (&A_VINDEX(RDCASIM_typetable,AGCASIM_hash));
 /* line 157: */
EGCASIM = (*(&(CGCASIM_bucket->Lasttype)));
for ( DGCASIM_entry = 1;
DGCASIM_entry <= EGCASIM;
DGCASIM_entry += 1 )
{ 
 /* line 158: */
if ( !((BGCASIM_found==0)) ) break;
FGCASIM = (*(&(CGCASIM_bucket->Types))) ;
if ( CVAASIM_((*(&((&A_VINDEX(FGCASIM,DGCASIM_entry))->Type))), Type) )
{ 
 /* line 159: */
BGCASIM_found = DGCASIM_entry;
} 
}
 /* line 160: */
 /* line 162: */
if ( (BGCASIM_found==0) )
{ 
 /* line 163: */
if ( ((*(&(CGCASIM_bucket->Lasttype)))>=(*(&(CGCASIM_bucket->Types))).upb) )
{ 
 /* line 164: */
UDCASIM_extendbucket(AGCASIM_hash);
} 
 /* line 165: */
 /* line 166: */
GGCASIM.Type = Type;
GGCASIM.Machinesize = A_CALLPROC(Machinewidth,(Type),(Type,(Machinewidth).nonlocals));
HGCASIM = (*(&(CGCASIM_bucket->Types))) ;
IGCASIM = (&(CGCASIM_bucket->Lasttype)) ;
JGCASIM = (*IGCASIM)+=1 ;
KGCASIM = (&A_VINDEX(HGCASIM,JGCASIM)) ;
(*KGCASIM) = GGCASIM;
 /* line 167: */
 /* line 168: */
BGCASIM_found = (*(&(CGCASIM_bucket->Lasttype)));
} 
 /* line 169: */
 /* line 170: */
LGCASIM = ((BGCASIM_found*KDCASIM_hashsize)+AGCASIM_hash);
} 
A_PROC_EXIT(addtype);
return( LGCASIM );
} 
#undef NL

A_STATIC A68_190 * NGCASIM_lookuptypeentry(A68_INT  Index)
{ 
A68_INT  OGCASIM;  /* ADICOPS - MOD */
A68_INT  PGCASIM;  /* ADICOPS - MOD */
A68_INT  QGCASIM_bucket;
A68_INT  RGCASIM_entry;
A68_190 * SGCASIM;  /* clause result */
A68_192  TGCASIM;  /* OPERATORS - simple index */
A_PROC_ENTRY(lookuptypeentry);
 /* line 182: */
 /* line 183: */
{ 
PGCASIM = (Index-1) ;
QGCASIM_bucket = (A_MOD(PGCASIM,KDCASIM_hashsize,OGCASIM)+1);
 /* line 184: */
RGCASIM_entry = ((Index-1)/KDCASIM_hashsize);
 /* line 185: */
 /* line 186: */
TGCASIM = (*(&((&A_VINDEX(RDCASIM_typetable,QGCASIM_bucket))->Types))) ;
SGCASIM = (&A_VINDEX(TGCASIM,RGCASIM_entry));
} 
A_PROC_EXIT(lookuptypeentry);
return( SGCASIM );
} 
#undef NL

A68_VOID  VGCASIM_lookuptype(A68_INT  Index, A68_119  *ReturnedValue)
{ 
A68_119  WGCASIM;  /* clause result */
A_PROC_ENTRY(lookuptype);
WGCASIM = (*(&(NGCASIM_lookuptypeentry(Index)->Type)));
A_PROC_EXIT(lookuptype);
*ReturnedValue = (WGCASIM);
return;
} 
#undef NL

A68_INT  YGCASIM_lookuptypesize(A68_INT  Index)
{ 
A68_INT  ZGCASIM;  /* clause result */
A_PROC_ENTRY(lookuptypesize);
 /* line 198: */
ZGCASIM = (*(&(NGCASIM_lookuptypeentry(Index)->Machinesize)));
A_PROC_EXIT(lookuptypesize);
return( ZGCASIM );
} 
#undef NL

A_STATIC A68_VOID  CHCASIM_generator(A68_BOOL  BHCASIM_anonymous, A68_203  *ReturnedValue)
{ 
A68_203  DHCASIM;  /* clause result */
A68_203  EHCASIM;  /* OPERATORS - dynamic generator */
{ 
EHCASIM.upb = 0 ;
( BHCASIM_anonymous? A_VLOC(A68_201 *,EHCASIM): A_VHEAP(A68_201 *,EHCASIM) );
DHCASIM = EHCASIM;
} 
*ReturnedValue = (DHCASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  AICASIM_extendnodes(void)
{ 
A68_INT  BICASIM_oldsize;
A68_INT  CICASIM_newsize;
A68_211  EICASIM_generator;   /* proc value of non-global proc */
A68_209  JICASIM;  /* avoid structure result */
A68_209  KICASIM_newtable;
A68_209  LICASIM;  /* OPERATORS - trim index */
A68_209  MICASIM;  /* YIELD */
A_PROC_ENTRY(extendnodes);
{ 
BICASIM_oldsize = WHCASIM_nodes.upb;
 /* line 336: */
CICASIM_newsize = ((2*BICASIM_oldsize)+1);
 /* line 337: */
A_CLOSURE( EICASIM_generator, FICASIM_generator, GICASIM_generator );
(( GICASIM_generator * ) ( EICASIM_generator.nonlocals )) -> CICASIM_newsize = CICASIM_newsize;
A_CALLPROC(EICASIM_generator,(A68_FALSE, &JICASIM),(A68_FALSE, &JICASIM,(EICASIM_generator).nonlocals));
KICASIM_newtable = JICASIM;
 /* line 338: */
MICASIM = A_VTRIM(LICASIM,(KICASIM_newtable),A_VTSCRIPT(&(LICASIM.upb),(KICASIM_newtable).upb,1,BICASIM_oldsize)) ;
A_VASSIGN2(WHCASIM_nodes,MICASIM,A68_144 );
 /* line 339: */
 /* line 340: */
WHCASIM_nodes = KICASIM_newtable;
} 
A_PROC_EXIT(extendnodes);
return;
} 
#undef NL

A_STATIC A68_VOID  NICASIM_extendsymboltable(void)
{ 
A68_INT  OICASIM_oldsize;
A68_INT  PICASIM_newsize;
A68_212  RICASIM_generator;   /* proc value of non-global proc */
A68_207  WICASIM;  /* avoid structure result */
A68_207  XICASIM_newtable;
A68_207  YICASIM;  /* OPERATORS - trim index */
A68_207  ZICASIM;  /* YIELD */
A_PROC_ENTRY(extendsymboltable);
{ 
OICASIM_oldsize = YHCASIM_symboltable.upb;
 /* line 346: */
PICASIM_newsize = ((2*OICASIM_oldsize)+1);
 /* line 347: */
A_CLOSURE( RICASIM_generator, SICASIM_generator, TICASIM_generator );
(( TICASIM_generator * ) ( RICASIM_generator.nonlocals )) -> PICASIM_newsize = PICASIM_newsize;
A_CALLPROC(RICASIM_generator,(A68_FALSE, &WICASIM),(A68_FALSE, &WICASIM,(RICASIM_generator).nonlocals));
XICASIM_newtable = WICASIM;
 /* line 348: */
ZICASIM = A_VTRIM(YICASIM,(XICASIM_newtable),A_VTSCRIPT(&(YICASIM.upb),(XICASIM_newtable).upb,1,OICASIM_oldsize)) ;
A_VASSIGN2(YHCASIM_symboltable,ZICASIM,A68_202 );
 /* line 349: */
 /* line 350: */
YHCASIM_symboltable = XICASIM_newtable;
} 
A_PROC_EXIT(extendsymboltable);
return;
} 
#undef NL

A_STATIC A68_VOID  BJCASIM_extendbindings(A68_202 * Entry)
{ 
A68_INT  CJCASIM_oldsize;
A68_INT  DJCASIM_newsize;
A68_214  FJCASIM_generator;   /* proc value of non-global proc */
A68_140  KJCASIM;  /* avoid structure result */
A68_140  LJCASIM_newbindings;
A68_140  MJCASIM;  /* OPERATORS - trim index */
A68_140  NJCASIM;  /* YIELD */
A68_140  OJCASIM;  /* OPERATORS - assign op */
A68_140 * PJCASIM;  /* YIELD */
A_PROC_ENTRY(extendbindings);
 /* line 354: */
 /* line 355: */
{ 
CJCASIM_oldsize = (*(&((&(Entry->Function))->Body))).upb;
 /* line 356: */
DJCASIM_newsize = ((2*CJCASIM_oldsize)+1);
 /* line 357: */
A_CLOSURE( FJCASIM_generator, GJCASIM_generator, HJCASIM_generator );
(( HJCASIM_generator * ) ( FJCASIM_generator.nonlocals )) -> DJCASIM_newsize = DJCASIM_newsize;
A_CALLPROC(FJCASIM_generator,(A68_FALSE, &KJCASIM),(A68_FALSE, &KJCASIM,(FJCASIM_generator).nonlocals));
LJCASIM_newbindings = KJCASIM;
 /* line 358: */
NJCASIM = A_VTRIM(MJCASIM,(LJCASIM_newbindings),A_VTSCRIPT(&(MJCASIM.upb),(LJCASIM_newbindings).upb,1,CJCASIM_oldsize)) ;
OJCASIM = (*(&((&(Entry->Function))->Body))) ;
A_VASSIGN2(OJCASIM,NJCASIM,A68_138 );
 /* line 359: */
 /* line 360: */
PJCASIM = (&((&(Entry->Function))->Body)) ;
(*PJCASIM) = LJCASIM_newbindings;
} 
A_PROC_EXIT(extendbindings);
return;
} 
#undef NL

A_STATIC A68_VOID  RJCASIM_extendexpansion(A68_202 * Entry)
{ 
A68_INT  SJCASIM_oldsize;
A68_INT  TJCASIM_newsize;
A68_33  VJCASIM_generator;   /* proc value of non-global proc */
A68_32  AKCASIM;  /* avoid structure result */
A68_32  BKCASIM_newexpansion;
A68_32  CKCASIM;  /* OPERATORS - trim index */
A68_32  DKCASIM;  /* YIELD */
A68_32  EKCASIM;  /* OPERATORS - assign op */
A68_32 * FKCASIM;  /* YIELD */
A_PROC_ENTRY(extendexpansion);
 /* line 364: */
 /* line 365: */
{ 
SJCASIM_oldsize = (*(&(Entry->Expansion))).upb;
 /* line 366: */
TJCASIM_newsize = ((2*SJCASIM_oldsize)+1);
 /* line 367: */
A_CLOSURE( VJCASIM_generator, WJCASIM_generator, XJCASIM_generator );
(( XJCASIM_generator * ) ( VJCASIM_generator.nonlocals )) -> TJCASIM_newsize = TJCASIM_newsize;
A_CALLPROC(VJCASIM_generator,(A68_FALSE, &AKCASIM),(A68_FALSE, &AKCASIM,(VJCASIM_generator).nonlocals));
BKCASIM_newexpansion = AKCASIM;
 /* line 368: */
DKCASIM = A_VTRIM(CKCASIM,(BKCASIM_newexpansion),A_VTSCRIPT(&(CKCASIM.upb),(BKCASIM_newexpansion).upb,1,SJCASIM_oldsize)) ;
EKCASIM = (*(&(Entry->Expansion))) ;
A_VASSIGN2(EKCASIM,DKCASIM,A68_INT );
 /* line 369: */
 /* line 370: */
FKCASIM = (&(Entry->Expansion)) ;
(*FKCASIM) = BKCASIM_newexpansion;
} 
A_PROC_EXIT(extendexpansion);
return;
} 
#undef NL

A_STATIC A68_VOID  HKCASIM_extendconstantnos(A68_202 * Entry)
{ 
A68_INT  IKCASIM_oldsize;
A68_INT  JKCASIM_newsize;
A68_33  LKCASIM_generator;   /* proc value of non-global proc */
A68_32  QKCASIM;  /* avoid structure result */
A68_32  RKCASIM_newconstantnos;
A68_32  SKCASIM;  /* OPERATORS - trim index */
A68_32  TKCASIM;  /* YIELD */
A68_32  UKCASIM;  /* OPERATORS - assign op */
A68_32 * VKCASIM;  /* YIELD */
A_PROC_ENTRY(extendconstantnos);
 /* line 374: */
 /* line 375: */
{ 
IKCASIM_oldsize = (*(&(Entry->Constantnos))).upb;
 /* line 376: */
JKCASIM_newsize = ((2*IKCASIM_oldsize)+1);
 /* line 377: */
A_CLOSURE( LKCASIM_generator, MKCASIM_generator, NKCASIM_generator );
(( NKCASIM_generator * ) ( LKCASIM_generator.nonlocals )) -> JKCASIM_newsize = JKCASIM_newsize;
A_CALLPROC(LKCASIM_generator,(A68_FALSE, &QKCASIM),(A68_FALSE, &QKCASIM,(LKCASIM_generator).nonlocals));
RKCASIM_newconstantnos = QKCASIM;
 /* line 378: */
TKCASIM = A_VTRIM(SKCASIM,(RKCASIM_newconstantnos),A_VTSCRIPT(&(SKCASIM.upb),(RKCASIM_newconstantnos).upb,1,IKCASIM_oldsize)) ;
UKCASIM = (*(&(Entry->Constantnos))) ;
A_VASSIGN2(UKCASIM,TKCASIM,A68_INT );
 /* line 379: */
 /* line 380: */
VKCASIM = (&(Entry->Constantnos)) ;
(*VKCASIM) = RKCASIM_newconstantnos;
} 
A_PROC_EXIT(extendconstantnos);
return;
} 
#undef NL
 /* line 399: */
 /* line 400: */
 /* line 401: */

A68_INT  FLCASIM_addfunction(A68_VC  Name, A68_INT  Outer, A68_INT  Version, A68_INT  Noinputs, A68_135  Moutputs, A68_135  Coutputs, A68_137 * Ramdata, A68_204  Shape, A68_205  Alienshape)
{ 
A68_202  GLCASIM;  /* collateral clause result */
A68_139  HLCASIM;  /* collateral clause result */
A68_214  JLCASIM_generator;   /* proc value of non-global proc */
A68_140  OLCASIM;  /* avoid structure result */
A68_INT  PLCASIM;  /* YIELD */
A68_202 * QLCASIM;  /* YIELD */
A68_INT  RLCASIM;  /* clause result */
A_PROC_ENTRY(addfunction);
 /* line 402: */
 /* line 403: */
{ 
if ( (ZHCASIM_lastsymbol>=YHCASIM_symboltable.upb) )
{ 
NICASIM_extendsymboltable();
} 
 /* line 404: */
 /* line 405: */
 /* line 406: */
GLCASIM.Name = Name;
 /* line 407: */
GLCASIM.Outer = Outer;
 /* line 408: */
GLCASIM.Version = Version;
HLCASIM.Ram = Ramdata;
HLCASIM.Outputs = Moutputs;
HLCASIM.Noinputs = Noinputs;
A_CLOSURE( JLCASIM_generator, KLCASIM_generator, LLCASIM_generator );
A_CALLPROC(JLCASIM_generator,(A68_FALSE, &OLCASIM),(A68_FALSE, &OLCASIM,(JLCASIM_generator).nonlocals));
HLCASIM.Body = OLCASIM;
GLCASIM.Function = HLCASIM;
 /* line 409: */
GLCASIM.Lastbinding = 0;
GLCASIM.Expansion = CDCASIM_nullrvi;
 /* line 410: */
GLCASIM.Lastexpansion = 0;
GLCASIM.Constantnos = CDCASIM_nullrvi;
 /* line 411: */
GLCASIM.Lastconstantno = 0;
 /* line 412: */
GLCASIM.Inputsizes = CDCASIM_nullrvi;
 /* line 413: */
GLCASIM.Inputupbs = CDCASIM_nullrvi;
 /* line 414: */
GLCASIM.Inputaliases = FHCASIM_nullrva;
 /* line 415: */
GLCASIM.Inputfanouts = CDCASIM_nullrvi;
GLCASIM.Aninstance = 0;
 /* line 416: */
GLCASIM.Lastinstanceoffset = 0;
 /* line 417: */
GLCASIM.Outputs = Coutputs;
 /* line 418: */
GLCASIM.Shape = Shape;
 /* line 419: */
GLCASIM.Alienshape = Alienshape;
 /* line 420: */
GLCASIM.Seedtype = (-1);
GLCASIM.Scaletime = 1;
PLCASIM = ZHCASIM_lastsymbol+=1 ;
QLCASIM = (&A_VINDEX(YHCASIM_symboltable,PLCASIM)) ;
(*QLCASIM) = GLCASIM;
 /* line 421: */
 /* line 422: */
RLCASIM = ZHCASIM_lastsymbol;
} 
A_PROC_EXIT(addfunction);
return( RLCASIM );
} 
#undef NL

A68_VOID  WLCASIM_updatebinding(A68_INT  Fnno, A68_VC  Ucname, A68_VC  Lcname, A68_144  Node)
{ 
A68_BOOL  XLCASIM;  /* optbool result */
A68_INT  YLCASIM;  /* YIELD */
A68_BOOL  ZLCASIM;  /* optbool result */
A68_INT  AMCASIM;  /* YIELD */
A68_BOOL  BMCASIM;  /* optbool result */
A68_INT  CMCASIM;  /* YIELD */
A68_BOOL  DMCASIM;  /* optbool result */
A68_INT  EMCASIM;  /* YIELD */
A68_BOOL  FMCASIM_transient;
A68_202 * GMCASIM_entry;
A68_140  HMCASIM_body;
A68_INT  IMCASIM_nodeix;
A68_INT  JMCASIM_bodyix;
A68_INT  KMCASIM;  /* YIELD */
A68_138  LMCASIM_bind;
A68_BOOL  MMCASIM;  /* optbool result */
A68_VC  NMCASIM;  /* != */
A68_BOOL  OMCASIM;  /* optbool result */
A68_BOOL  PMCASIM;  /* optbool result */
A68_VC  QMCASIM;  /* != */
A68_BOOL  RMCASIM;  /* optbool result */
A68_144 * SMCASIM;  /* YIELD */
A_PROC_ENTRY(updatebinding);
 /* line 433: */
 /* line 435: */
{ 
XLCASIM = ! A_VSTRUCTCOMP(Ucname,NTCAOST_nilid);
if ( XLCASIM )
{XLCASIM = A_VC_NE(Ucname,TTCAOST_nullid);
}
if ( XLCASIM )
{ /* line 436: */
YLCASIM = 1 ;
XLCASIM = ((*(&A_VINDEX(Ucname,YLCASIM)))=='_');
}
 /* line 437: */
if ( XLCASIM )
{ZLCASIM = A_VSTRUCTCOMP(Lcname,NTCAOST_nilid);
if ( ! ZLCASIM )
{ZLCASIM = A_VC_EQ(Lcname,TTCAOST_nullid);
}
if ( ! ZLCASIM )
{AMCASIM = 1 ;
ZLCASIM = ((*(&A_VINDEX(Lcname,AMCASIM)))=='_');
}
XLCASIM = ZLCASIM;
}
 /* line 439: */
if ( ! XLCASIM )
{BMCASIM = ! A_VSTRUCTCOMP(Lcname,NTCAOST_nilid);
if ( BMCASIM )
{BMCASIM = A_VC_NE(Lcname,TTCAOST_nullid);
}
if ( BMCASIM )
{ /* line 440: */
CMCASIM = 1 ;
BMCASIM = ((*(&A_VINDEX(Lcname,CMCASIM)))=='_');
}
 /* line 441: */
if ( BMCASIM )
{DMCASIM = A_VSTRUCTCOMP(Ucname,NTCAOST_nilid);
if ( ! DMCASIM )
{DMCASIM = A_VC_EQ(Ucname,TTCAOST_nullid);
}
if ( ! DMCASIM )
{EMCASIM = 1 ;
DMCASIM = ((*(&A_VINDEX(Ucname,EMCASIM)))=='_');
}
BMCASIM = DMCASIM;
}
XLCASIM = BMCASIM;
}
FMCASIM_transient = XLCASIM;
 /* line 442: */
 /* line 443: */
if ( !FMCASIM_transient )
{ 
GMCASIM_entry = (&A_VINDEX(YHCASIM_symboltable,Fnno));
 /* line 444: */
HMCASIM_body = (*(&((&(GMCASIM_entry->Function))->Body)));
 /* line 445: */
IMCASIM_nodeix = 0;
 /* line 446: */
JMCASIM_bodyix = (HMCASIM_body.upb+1);
 /* line 447: */
for ( ;; )
{ 
 /* line 448: */
if ( !((IMCASIM_nodeix==0)) ) break;
KMCASIM = JMCASIM_bodyix-=1 ;
LMCASIM_bind = (*(&A_VINDEX(HMCASIM_body,KMCASIM)));
 /* line 449: */
 /* line 450: */
MMCASIM = A_VSTRUCTCOMP(Ucname,NTCAOST_nilid);
if ( ! MMCASIM )
{NMCASIM = LMCASIM_bind.Uname ;
OMCASIM = ! A_VSTRUCTCOMP(NMCASIM,NTCAOST_nilid);
if ( OMCASIM )
{OMCASIM = A_VC_EQ(Ucname,LMCASIM_bind.Uname);
}
MMCASIM = OMCASIM;
}
 /* line 451: */
if ( MMCASIM )
{ /* line 452: */
PMCASIM = A_VSTRUCTCOMP(Lcname,NTCAOST_nilid);
if ( ! PMCASIM )
{QMCASIM = LMCASIM_bind.Lname ;
RMCASIM = ! A_VSTRUCTCOMP(QMCASIM,NTCAOST_nilid);
if ( RMCASIM )
{RMCASIM = A_VC_EQ(Lcname,LMCASIM_bind.Lname);
}
PMCASIM = RMCASIM;
}
MMCASIM = PMCASIM;
}
 /* line 453: */
if ( MMCASIM )
{ 
 /* line 454: */
 /* line 455: */
IMCASIM_nodeix = LMCASIM_bind.Node;
} 
}
 /* line 456: */
 /* line 457: */
 /* line 458: */
SMCASIM = (&A_VINDEX(WHCASIM_nodes,IMCASIM_nodeix)) ;
(*SMCASIM) = Node;
} 
} 
A_PROC_EXIT(updatebinding);
return;
} 
#undef NL

A68_VOID  XMCASIM_addbinding(A68_INT  Fnno, A68_VC  Ucname, A68_VC  Lcname, A68_144  Node)
{ 
A68_BOOL  YMCASIM;  /* optbool result */
A68_INT  ZMCASIM;  /* YIELD */
A68_BOOL  ANCASIM;  /* optbool result */
A68_INT  BNCASIM;  /* YIELD */
A68_BOOL  CNCASIM;  /* optbool result */
A68_INT  DNCASIM;  /* YIELD */
A68_BOOL  ENCASIM;  /* optbool result */
A68_INT  FNCASIM;  /* YIELD */
A68_BOOL  GNCASIM_transient;
A68_202 * HNCASIM_entry;
A68_INT  INCASIM;  /* YIELD */
A68_144 * JNCASIM;  /* YIELD */
A68_138  KNCASIM;  /* collateral clause result */
A68_140  LNCASIM;  /* OPERATORS - simple index */
A68_INT * MNCASIM;  /* YIELD */
A68_INT  NNCASIM;  /* YIELD */
A68_138 * ONCASIM;  /* YIELD */
A_PROC_ENTRY(addbinding);
 /* line 466: */
 /* line 468: */
{ 
YMCASIM = ! A_VSTRUCTCOMP(Ucname,NTCAOST_nilid);
if ( YMCASIM )
{YMCASIM = A_VC_NE(Ucname,TTCAOST_nullid);
}
if ( YMCASIM )
{ /* line 469: */
ZMCASIM = 1 ;
YMCASIM = ((*(&A_VINDEX(Ucname,ZMCASIM)))=='_');
}
 /* line 470: */
if ( YMCASIM )
{ANCASIM = A_VSTRUCTCOMP(Lcname,NTCAOST_nilid);
if ( ! ANCASIM )
{ANCASIM = A_VC_EQ(Lcname,TTCAOST_nullid);
}
if ( ! ANCASIM )
{BNCASIM = 1 ;
ANCASIM = ((*(&A_VINDEX(Lcname,BNCASIM)))=='_');
}
YMCASIM = ANCASIM;
}
 /* line 472: */
if ( ! YMCASIM )
{CNCASIM = ! A_VSTRUCTCOMP(Lcname,NTCAOST_nilid);
if ( CNCASIM )
{CNCASIM = A_VC_NE(Lcname,TTCAOST_nullid);
}
if ( CNCASIM )
{ /* line 473: */
DNCASIM = 1 ;
CNCASIM = ((*(&A_VINDEX(Lcname,DNCASIM)))=='_');
}
 /* line 474: */
if ( CNCASIM )
{ENCASIM = A_VSTRUCTCOMP(Ucname,NTCAOST_nilid);
if ( ! ENCASIM )
{ENCASIM = A_VC_EQ(Ucname,TTCAOST_nullid);
}
if ( ! ENCASIM )
{FNCASIM = 1 ;
ENCASIM = ((*(&A_VINDEX(Ucname,FNCASIM)))=='_');
}
CNCASIM = ENCASIM;
}
YMCASIM = CNCASIM;
}
GNCASIM_transient = YMCASIM;
 /* line 475: */
 /* line 476: */
if ( !GNCASIM_transient )
{ 
HNCASIM_entry = (&A_VINDEX(YHCASIM_symboltable,Fnno));
 /* line 477: */
 /* line 478: */
if ( ((*(&(HNCASIM_entry->Lastbinding)))>=(*(&((&(HNCASIM_entry->Function))->Body))).upb) )
{ 
 /* line 479: */
BJCASIM_extendbindings(HNCASIM_entry);
} 
 /* line 480: */
 /* line 482: */
if ( (XHCASIM_lastnode>=WHCASIM_nodes.upb) )
{ 
AICASIM_extendnodes();
} 
 /* line 483: */
INCASIM = XHCASIM_lastnode+=1 ;
JNCASIM = (&A_VINDEX(WHCASIM_nodes,INCASIM)) ;
(*JNCASIM) = Node;
 /* line 484: */
 /* line 485: */
KNCASIM.Uname = Ucname;
KNCASIM.Lname = Lcname;
 /* line 486: */
KNCASIM.Node = XHCASIM_lastnode;
 /* line 487: */
LNCASIM = (*(&((&(HNCASIM_entry->Function))->Body))) ;
MNCASIM = (&(HNCASIM_entry->Lastbinding)) ;
NNCASIM = (*MNCASIM)+=1 ;
ONCASIM = (&A_VINDEX(LNCASIM,NNCASIM)) ;
(*ONCASIM) = KNCASIM;
} 
} 
A_PROC_EXIT(addbinding);
return;
} 
#undef NL

A68_INT  RNCASIM_nextinstance(A68_INT  Fnno, A68_INT  Component)
{ 
A68_202 * SNCASIM_entry;
A68_INT  TNCASIM_ans;
A68_INT * UNCASIM;  /* YIELD */
A68_INT  VNCASIM;  /* clause result */
A_PROC_ENTRY(nextinstance);
 /* line 495: */
 /* line 496: */
{ 
SNCASIM_entry = (&A_VINDEX(YHCASIM_symboltable,Fnno));
 /* line 497: */
TNCASIM_ans = ((*(&(SNCASIM_entry->Lastinstanceoffset)))+1);
 /* line 498: */
 /* line 499: */
UNCASIM = (&(SNCASIM_entry->Lastinstanceoffset)) ;
(*UNCASIM)+=((*(&((&A_VINDEX(YHCASIM_symboltable,Component))->Lastinstanceoffset)))+1);
 /* line 500: */
 /* line 501: */
VNCASIM = TNCASIM_ans;
} 
A_PROC_EXIT(nextinstance);
return( VNCASIM );
} 
#undef NL

A68_VOID  YNCASIM_addexpansion(A68_INT  Fnno, A68_INT  Component)
{ 
A68_202 * ZNCASIM_entry;
A68_32  AOCASIM;  /* OPERATORS - simple index */
A68_INT * BOCASIM;  /* YIELD */
A68_INT  COCASIM;  /* YIELD */
A68_INT * DOCASIM;  /* YIELD */
A_PROC_ENTRY(addexpansion);
 /* line 508: */
 /* line 509: */
{ 
ZNCASIM_entry = (&A_VINDEX(YHCASIM_symboltable,Fnno));
 /* line 510: */
 /* line 511: */
if ( ((*(&(ZNCASIM_entry->Lastexpansion)))>=(*(&(ZNCASIM_entry->Expansion))).upb) )
{ 
 /* line 512: */
RJCASIM_extendexpansion(ZNCASIM_entry);
} 
 /* line 513: */
 /* line 514: */
AOCASIM = (*(&(ZNCASIM_entry->Expansion))) ;
BOCASIM = (&(ZNCASIM_entry->Lastexpansion)) ;
COCASIM = (*BOCASIM)+=1 ;
DOCASIM = (&A_VINDEX(AOCASIM,COCASIM)) ;
(*DOCASIM) = Component;
} 
A_PROC_EXIT(addexpansion);
return;
} 
#undef NL

A68_VOID  GOCASIM_addconstantno(A68_INT  Fnno, A68_INT  Constantno)
{ 
A68_202 * HOCASIM_entry;
A68_32  IOCASIM;  /* OPERATORS - simple index */
A68_INT * JOCASIM;  /* YIELD */
A68_INT  KOCASIM;  /* YIELD */
A68_INT * LOCASIM;  /* YIELD */
A_PROC_ENTRY(addconstantno);
 /* line 521: */
 /* line 522: */
{ 
HOCASIM_entry = (&A_VINDEX(YHCASIM_symboltable,Fnno));
 /* line 523: */
 /* line 524: */
if ( ((*(&(HOCASIM_entry->Lastconstantno)))>=(*(&(HOCASIM_entry->Constantnos))).upb) )
{ 
 /* line 525: */
HKCASIM_extendconstantnos(HOCASIM_entry);
} 
 /* line 526: */
 /* line 527: */
IOCASIM = (*(&(HOCASIM_entry->Constantnos))) ;
JOCASIM = (&(HOCASIM_entry->Lastconstantno)) ;
KOCASIM = (*JOCASIM)+=1 ;
LOCASIM = (&A_VINDEX(IOCASIM,KOCASIM)) ;
(*LOCASIM) = Constantno;
} 
A_PROC_EXIT(addconstantno);
return;
} 
#undef NL

A68_VOID  OOCASIM_addinputsizes(A68_INT  Fnno, A68_32  Sizes)
{ 
A68_32 * POCASIM;  /* YIELD */
A68_210  ROCASIM_generator;   /* proc value of non-global proc */
A68_203  WOCASIM;  /* avoid structure result */
A68_203 * XOCASIM;  /* YIELD */
A68_201 ** YOCASIM_alias;
A68_203  ZOCASIM;  /* forall yield */
A68_INT  APCASIM;  /* forall loop counter */
A68_33  CPCASIM_generator;   /* proc value of non-global proc */
A68_32  HPCASIM;  /* avoid structure result */
A68_32 * IPCASIM;  /* YIELD */
A68_INT * JPCASIM_fanout;
A68_32  KPCASIM;  /* forall yield */
A68_INT  LPCASIM;  /* forall loop counter */
A_PROC_ENTRY(addinputsizes);
 /* line 534: */
 /* line 535: */
{ 
POCASIM = (&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Inputsizes)) ;
(*POCASIM) = Sizes;
 /* line 536: */
A_CLOSURE( ROCASIM_generator, SOCASIM_generator, TOCASIM_generator );
(( TOCASIM_generator * ) ( ROCASIM_generator.nonlocals )) -> Sizes = Sizes;
A_CALLPROC(ROCASIM_generator,(A68_FALSE, &WOCASIM),(A68_FALSE, &WOCASIM,(ROCASIM_generator).nonlocals));
XOCASIM = (&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Inputaliases)) ;
(*XOCASIM) = WOCASIM;
 /* line 537: */
ZOCASIM = (*(&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Inputaliases))) ;
APCASIM = ZOCASIM.upb -1;
YOCASIM_alias = ZOCASIM.data;
for (;APCASIM-- >= 0;
(YOCASIM_alias++
) )
{
 /* line 538: */
 /* line 539: */
(*YOCASIM_alias) = AHCASIM_nilalias;
}
 /* line 540: */
A_CLOSURE( CPCASIM_generator, DPCASIM_generator, EPCASIM_generator );
(( EPCASIM_generator * ) ( CPCASIM_generator.nonlocals )) -> Sizes = Sizes;
A_CALLPROC(CPCASIM_generator,(A68_FALSE, &HPCASIM),(A68_FALSE, &HPCASIM,(CPCASIM_generator).nonlocals));
IPCASIM = (&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Inputfanouts)) ;
(*IPCASIM) = HPCASIM;
 /* line 541: */
KPCASIM = (*(&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Inputfanouts))) ;
LPCASIM = KPCASIM.upb -1;
JPCASIM_fanout = KPCASIM.data;
for (;LPCASIM-- >= 0;
(JPCASIM_fanout++
) )
{
 /* line 542: */
 /* line 543: */
(*JPCASIM_fanout) = 1;
}
 /* line 544: */
} 
A_PROC_EXIT(addinputsizes);
return;
} 
#undef NL

A68_VOID  OPCASIM_addinputupbs(A68_INT  Fnno, A68_32  Upbs)
{ 
A68_32 * PPCASIM;  /* YIELD */
A_PROC_ENTRY(addinputupbs);
 /* line 547: */
PPCASIM = (&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Inputupbs)) ;
(*PPCASIM) = Upbs;
A_PROC_EXIT(addinputupbs);
return;
} 
#undef NL
 /* line 550: */

A68_VOID  VPCASIM_addinputalias(A68_INT  Fnno, A68_INT  Srcipno, A68_INT  Instoffset, A68_INT  Destipno, A68_INT  Componentfnno)
{ 
A68_201  WPCASIM;  /* collateral clause result */
A68_203  XPCASIM;  /* OPERATORS - simple index */
A68_203  YPCASIM;  /* OPERATORS - simple index */
A68_201 * ZPCASIM;  /* YIELD */
A68_201 ** AQCASIM;  /* YIELD */
A68_32  BQCASIM;  /* OPERATORS - simple index */
A68_32  CQCASIM;  /* OPERATORS - simple index */
A68_INT * DQCASIM;  /* YIELD */
A_PROC_ENTRY(addinputalias);
 /* line 551: */
 /* line 552: */
{ 
 /* line 553: */
WPCASIM.Instoffset = Instoffset;
 /* line 554: */
WPCASIM.Ipno = Destipno;
XPCASIM = (*(&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Inputaliases))) ;
WPCASIM.Next = (*(&A_VINDEX(XPCASIM,Srcipno)));
YPCASIM = (*(&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Inputaliases))) ;
ZPCASIM = A_HEAP(A68_201 ) ;
(*ZPCASIM) = WPCASIM ;
AQCASIM = (&A_VINDEX(YPCASIM,Srcipno)) ;
(*AQCASIM) = ZPCASIM;
 /* line 555: */
 /* line 556: */
 /* line 557: */
BQCASIM = (*(&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Inputfanouts))) ;
CQCASIM = (*(&((&A_VINDEX(YHCASIM_symboltable,Componentfnno))->Inputfanouts))) ;
DQCASIM = (&A_VINDEX(BQCASIM,Srcipno)) ;
(*DQCASIM)+=(*(&A_VINDEX(CQCASIM,Destipno)));
} 
A_PROC_EXIT(addinputalias);
return;
} 
#undef NL

A68_VOID  GQCASIM_addshape(A68_INT  Fnno, A68_204  Shape)
{ 
A68_204 * HQCASIM;  /* YIELD */
A_PROC_ENTRY(addshape);
 /* line 560: */
HQCASIM = (&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Shape)) ;
(*HQCASIM) = Shape;
A_PROC_EXIT(addshape);
return;
} 
#undef NL

A68_VOID  LQCASIM_addoutputlocation(A68_INT  Fnno, A68_136  Mloc, A68_136  Cloc)
{ 
A68_136 * MQCASIM;  /* YIELD */
A68_136 * NQCASIM;  /* YIELD */
A_PROC_ENTRY(addoutputlocation);
 /* line 567: */
 /* line 568: */
{ 
MQCASIM = (&((&((&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Function))->Outputs))->Blocks)) ;
(*MQCASIM) = Mloc;
 /* line 569: */
 /* line 570: */
NQCASIM = (&((&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Outputs))->Blocks)) ;
(*NQCASIM) = Cloc;
} 
A_PROC_EXIT(addoutputlocation);
return;
} 
#undef NL

A68_VOID  QQCASIM_addexampleinstance(A68_INT  Fnno, A68_INT  Instance)
{ 
A68_INT * RQCASIM;  /* YIELD */
A_PROC_ENTRY(addexampleinstance);
 /* line 573: */
RQCASIM = (&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Aninstance)) ;
(*RQCASIM) = Instance;
A_PROC_EXIT(addexampleinstance);
return;
} 
#undef NL

A68_VOID  UQCASIM_addseedtype(A68_INT  Fnno, A68_INT  Seedtype)
{ 
A68_INT * VQCASIM;  /* YIELD */
A_PROC_ENTRY(addseedtype);
 /* line 576: */
VQCASIM = (&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Seedtype)) ;
(*VQCASIM) = Seedtype;
A_PROC_EXIT(addseedtype);
return;
} 
#undef NL

A68_VOID  YQCASIM_addscaletime(A68_INT  Fnno, A68_INT  Scaletimevalue)
{ 
A68_INT * ZQCASIM;  /* YIELD */
A_PROC_ENTRY(addscaletime);
 /* line 579: */
ZQCASIM = (&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Scaletime)) ;
(*ZQCASIM) = Scaletimevalue;
A_PROC_EXIT(addscaletime);
return;
} 
#undef NL

A68_VOID  DRCASIM_uniqueid(A68_VC  Name, A68_INT  Outer, A68_INT  Version, A68_VC  *ReturnedValue)
{ 
A68_VC  ERCASIM;  /* clause result */
A68_VC  FRCASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  GRCASIM;  /* avoid structure result */
A68_VC  HRCASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  IRCASIM;  /* avoid structure result */
A68_VC  JRCASIM;  /* avoid structure result */
A_PROC_ENTRY(uniqueid);
 /* line 590: */
FCAAOSI_intchars( Outer, &GRCASIM );
FCAAOSI_intchars( Version, &IRCASIM );
RSCAOST_makeid( A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(Name,A_HVEC(FRCASIM,'@',A68_CHAR )),GRCASIM),A_HVEC(HRCASIM,'/',A68_CHAR )),IRCASIM), &JRCASIM );
ERCASIM = JRCASIM;
A_PROC_EXIT(uniqueid);
*ReturnedValue = (ERCASIM);
return;
} 
#undef NL

A68_INT  NRCASIM_lookupname(A68_VC  Name, A68_INT  Outer, A68_INT  Version)
{ 
A68_INT  ORCASIM_found;
A68_INT  PRCASIM_i;
A68_INT  QRCASIM;  /* to part of loop */
A68_202  RRCASIM_fnentry;
A68_BOOL  SRCASIM;  /* optbool result */
A68_INT  TRCASIM_context;
A68_INT  URCASIM_i;
A68_INT  VRCASIM;  /* to part of loop */
A68_202  WRCASIM_fnentry;
A68_BOOL  XRCASIM;  /* optbool result */
A68_202  YRCASIM_contextfn;
A68_BOOL  ZRCASIM;  /* optbool result */
A68_BOOL  ASCASIM;  /* clause result */
A68_INT  BSCASIM_i;
A68_INT  CSCASIM;  /* by part of loop */
A68_BOOL  DSCASIM;  /* optbool result */
A68_INT  ESCASIM;  /* clause result */
A_PROC_ENTRY(lookupname);
 /* line 639: */
 /* line 640: */
{ 
ORCASIM_found = 0;
 /* line 641: */
 /* line 642: */
if ( (Version<0) )
{ 
QRCASIM = ZHCASIM_lastsymbol;
for ( PRCASIM_i = 1;
PRCASIM_i <= QRCASIM;
PRCASIM_i += 1 )
{ 
 /* line 643: */
if ( !((ORCASIM_found==0)) ) break;
RRCASIM_fnentry = (*(&A_VINDEX(YHCASIM_symboltable,PRCASIM_i)));
 /* line 644: */
 /* line 645: */
SRCASIM = (RRCASIM_fnentry.Outer==Outer);
if ( ! SRCASIM )
{SRCASIM = (Outer==0);
}
 /* line 646: */
if ( SRCASIM )
{SRCASIM = (RRCASIM_fnentry.Version==Version);
}
 /* line 647: */
if ( SRCASIM )
{ /* line 648: */
SRCASIM = A_VC_EQ(RRCASIM_fnentry.Name,Name);
}
 /* line 649: */
if ( SRCASIM )
{ 
 /* line 650: */
 /* line 651: */
ORCASIM_found = PRCASIM_i;
} 
}
 /* line 652: */
} 
else
{ 
 /* line 653: */
if ( (Version>0) )
{ 
TRCASIM_context = Outer;
 /* line 654: */
for ( ;; )
{ 
 /* line 655: */
VRCASIM = ZHCASIM_lastsymbol;
for ( URCASIM_i = 1;
URCASIM_i <= VRCASIM;
URCASIM_i += 1 )
{ 
 /* line 656: */
if ( !((ORCASIM_found==0)) ) break;
WRCASIM_fnentry = (*(&A_VINDEX(YHCASIM_symboltable,URCASIM_i)));
 /* line 657: */
 /* line 658: */
 /* line 659: */
XRCASIM = (WRCASIM_fnentry.Outer==TRCASIM_context);
if ( XRCASIM )
{XRCASIM = (WRCASIM_fnentry.Version==Version);
}
 /* line 660: */
if ( XRCASIM )
{ /* line 661: */
XRCASIM = A_VC_EQ(WRCASIM_fnentry.Name,Name);
}
 /* line 662: */
if ( XRCASIM )
{ 
 /* line 663: */
 /* line 664: */
ORCASIM_found = URCASIM_i;
} 
}
 /* line 665: */
YRCASIM_contextfn = (*(&A_VINDEX(YHCASIM_symboltable,TRCASIM_context)));
 /* line 666: */
TRCASIM_context = YRCASIM_contextfn.Outer;
 /* line 667: */
ZRCASIM = (ORCASIM_found==0);
if ( ZRCASIM )
{ /* line 668: */
ZRCASIM = (YRCASIM_contextfn.Version>0);
}
ASCASIM = ZRCASIM;
if ( !ASCASIM ) break;
/*SKIP*/;
}
 /* line 669: */
 /* line 671: */
} 
else
{ 
CSCASIM = (-1);
for ( BSCASIM_i = ZHCASIM_lastsymbol;
( CSCASIM > 0 && BSCASIM_i <= 1) ||
( CSCASIM < 0 && BSCASIM_i >= 1) ||
( CSCASIM == 0 ) ;
BSCASIM_i += CSCASIM )
{ 
 /* line 672: */
if ( !((ORCASIM_found==0)) ) break;
 /* line 673: */
DSCASIM = ((*(&((&A_VINDEX(YHCASIM_symboltable,BSCASIM_i))->Seedtype)))==Outer);
if ( DSCASIM )
{DSCASIM = A_VC_EQ((*(&((&A_VINDEX(YHCASIM_symboltable,BSCASIM_i))->Name))),Name);
}
 /* line 674: */
if ( DSCASIM )
{ /* line 675: */
DSCASIM = ((*(&((&A_VINDEX(YHCASIM_symboltable,BSCASIM_i))->Scaletime)))!=0);
}
if ( DSCASIM )
{ 
 /* line 676: */
ORCASIM_found = BSCASIM_i;
} 
}
 /* line 677: */
} 
} 
 /* line 678: */
 /* line 679: */
ESCASIM = ORCASIM_found;
} 
A_PROC_EXIT(lookupname);
return( ESCASIM );
} 
#undef NL

A68_VOID  GSCASIM_rawlookupfunction(A68_INT  Fnno, A68_139  *ReturnedValue)
{ 
A68_139  HSCASIM_fn;
A68_INT  ISCASIM_upbbody;
A68_137 * JSCASIM;  /* YIELD */
A68_137 ** KSCASIM;  /* YIELD */
A68_214  MSCASIM_generator;   /* proc value of non-global proc */
A68_140  RSCASIM;  /* avoid structure result */
A68_140  SSCASIM;  /* OPERATORS - trim index */
A68_140  TSCASIM;  /* OPERATORS - trim index */
A68_140  USCASIM;  /* OPERATORS - assign op */
A68_140 * VSCASIM;  /* YIELD */
A68_INT  WSCASIM_upbwire;
A68_189  YSCASIM_generator;   /* proc value of non-global proc */
A68_136  DTCASIM;  /* avoid structure result */
A68_136  ETCASIM;  /* OPERATORS - assign op */
A68_136 * FTCASIM;  /* YIELD */
A68_139  GTCASIM;  /* clause result */
A_PROC_ENTRY(rawlookupfunction);
 /* line 683: */
 /* line 684: */
{ 
HSCASIM_fn = (*(&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Function)));
 /* line 685: */
ISCASIM_upbbody = (*(&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Lastbinding)));
 /* line 686: */
if ( ((*(&((&HSCASIM_fn)->Ram)))!=STAASIM_nilsram) )
{ 
JSCASIM = A_HEAP(A68_137 ) ;
(*JSCASIM) = (*(*(&((&HSCASIM_fn)->Ram)))) ;
KSCASIM = (&((&HSCASIM_fn)->Ram)) ;
(*KSCASIM) = JSCASIM;
} 
 /* line 687: */
A_CLOSURE( MSCASIM_generator, NSCASIM_generator, OSCASIM_generator );
(( OSCASIM_generator * ) ( MSCASIM_generator.nonlocals )) -> ISCASIM_upbbody = ISCASIM_upbbody;
A_CALLPROC(MSCASIM_generator,(A68_FALSE, &RSCASIM),(A68_FALSE, &RSCASIM,(MSCASIM_generator).nonlocals));
SSCASIM = (*(&((&HSCASIM_fn)->Body))) ;
USCASIM = A_VTRIM(TSCASIM,(SSCASIM),A_VTSCRIPT(&(TSCASIM.upb),(SSCASIM).upb,1,ISCASIM_upbbody)) ;
A_VASSIGN2(USCASIM,RSCASIM,A68_138 ) ;
VSCASIM = (&((&HSCASIM_fn)->Body)) ;
(*VSCASIM) = RSCASIM;
 /* line 688: */
WSCASIM_upbwire = (*(&((&((&HSCASIM_fn)->Outputs))->Blocks))).upb;
 /* line 689: */
A_CLOSURE( YSCASIM_generator, ZSCASIM_generator, ATCASIM_generator );
(( ATCASIM_generator * ) ( YSCASIM_generator.nonlocals )) -> WSCASIM_upbwire = WSCASIM_upbwire;
 /* line 690: */
A_CALLPROC(YSCASIM_generator,(A68_FALSE, &DTCASIM),(A68_FALSE, &DTCASIM,(YSCASIM_generator).nonlocals));
ETCASIM = (*(&((&((&HSCASIM_fn)->Outputs))->Blocks))) ;
A_VASSIGN2(ETCASIM,DTCASIM,A68_134 ) ;
FTCASIM = (&((&((&HSCASIM_fn)->Outputs))->Blocks)) ;
(*FTCASIM) = DTCASIM;
 /* line 691: */
 /* line 692: */
GTCASIM = HSCASIM_fn;
} 
A_PROC_EXIT(rawlookupfunction);
*ReturnedValue = (GTCASIM);
return;
} 
#undef NL

A68_VOID  ITCASIM_rawlookuprnode(A68_INT  Node, A68_144  *ReturnedValue)
{ 
A68_144  JTCASIM;  /* united object - for case conformity */
A68_135  KTCASIM_w;
A68_135  LTCASIM;  /* collateral clause result */
A68_189  NTCASIM_generator;   /* proc value of non-global proc */
A68_136  STCASIM;  /* avoid structure result */
A68_136  TTCASIM;  /* OPERATORS - assign op */
A68_144  UTCASIM;  /* clause result */
A68_144  VTCASIM;  /* OPERATORS - mode -> union mode */
A68_141  WTCASIM_b;
A68_144  XTCASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(rawlookuprnode);
 /* line 696: */
 /* line 697: */
JTCASIM = (*(&A_VINDEX(WHCASIM_nodes,Node))) ;
switch ( JTCASIM.mode )
{ 
case 2: /* STRUCT(MODE119,REF MODE136)  */
KTCASIM_w = (JTCASIM.data.mode2);
 /* line 698: */
LTCASIM.Type = KTCASIM_w.Type;
A_CLOSURE( NTCASIM_generator, OTCASIM_generator, PTCASIM_generator );
(( PTCASIM_generator * ) ( NTCASIM_generator.nonlocals )) -> KTCASIM_w = KTCASIM_w;
A_CALLPROC(NTCASIM_generator,(A68_FALSE, &STCASIM),(A68_FALSE, &STCASIM,(NTCASIM_generator).nonlocals));
TTCASIM = KTCASIM_w.Blocks ;
A_VASSIGN2(TTCASIM,STCASIM,A68_134 ) ;
LTCASIM.Blocks = STCASIM;
 /* line 699: */
UTCASIM = A_UNITE(VTCASIM,mode2,2,LTCASIM);
break;
case 1: /* STRUCT(INT,INT)  */
WTCASIM_b = (JTCASIM.data.mode1);
 /* line 700: */
UTCASIM = A_UNITE(XTCASIM,mode1,1,WTCASIM_b);
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(rawlookuprnode);
*ReturnedValue = (UTCASIM);
return;
} 
#undef NL

A68_VOID  ZTCASIM_lookupuserid(A68_INT  Fnno, A68_VC  *ReturnedValue)
{ 
A68_VC  AUCASIM;  /* clause result */
A_PROC_ENTRY(lookupuserid);
 /* line 704: */
AUCASIM = (*(&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Name)));
A_PROC_EXIT(lookupuserid);
*ReturnedValue = (AUCASIM);
return;
} 
#undef NL

A68_VOID  CUCASIM_lookupid(A68_INT  Fnno, A68_VC  *ReturnedValue)
{ 
A68_VC  DUCASIM;  /* clause result */
A68_VC  EUCASIM;  /* avoid structure result */
A_PROC_ENTRY(lookupid);
 /* line 708: */
 /* line 709: */
 /* line 710: */
DRCASIM_uniqueid( (*(&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Name))), (*(&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Outer))), (*(&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Version))), &EUCASIM );
DUCASIM = EUCASIM;
A_PROC_EXIT(lookupid);
*ReturnedValue = (DUCASIM);
return;
} 
#undef NL

A68_VOID  GUCASIM_lookupexpansion(A68_INT  Fnno, A68_32  *ReturnedValue)
{ 
A68_32  HUCASIM_exp;
A68_32  IUCASIM;  /* clause result */
A68_32  JUCASIM;  /* OPERATORS - trim index */
A_PROC_ENTRY(lookupexpansion);
 /* line 714: */
 /* line 715: */
{ 
HUCASIM_exp = (*(&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Expansion)));
 /* line 716: */
 /* line 717: */
IUCASIM = A_VTRIM(JUCASIM,(HUCASIM_exp),A_VTSCRIPT(&(JUCASIM.upb),(HUCASIM_exp).upb,1,(*(&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Lastexpansion)))));
} 
A_PROC_EXIT(lookupexpansion);
*ReturnedValue = (IUCASIM);
return;
} 
#undef NL

A68_VOID  LUCASIM_lookupconstantnos(A68_INT  Fnno, A68_32  *ReturnedValue)
{ 
A68_32  MUCASIM_exp;
A68_32  NUCASIM;  /* clause result */
A68_32  OUCASIM;  /* OPERATORS - trim index */
A_PROC_ENTRY(lookupconstantnos);
 /* line 721: */
 /* line 722: */
{ 
MUCASIM_exp = (*(&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Constantnos)));
 /* line 723: */
 /* line 724: */
NUCASIM = A_VTRIM(OUCASIM,(MUCASIM_exp),A_VTSCRIPT(&(OUCASIM.upb),(MUCASIM_exp).upb,1,(*(&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Lastconstantno)))));
} 
A_PROC_EXIT(lookupconstantnos);
*ReturnedValue = (NUCASIM);
return;
} 
#undef NL

A68_VOID  QUCASIM_lookupinputsizes(A68_INT  Fnno, A68_32  *ReturnedValue)
{ 
A68_32  RUCASIM;  /* clause result */
A_PROC_ENTRY(lookupinputsizes);
 /* line 728: */
RUCASIM = (*(&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Inputsizes)));
A_PROC_EXIT(lookupinputsizes);
*ReturnedValue = (RUCASIM);
return;
} 
#undef NL

A68_VOID  UUCASIM_lookupinputslice(A68_INT  Fnno, A68_INT  Fsindex, A68_226  *ReturnedValue)
{ 
A68_32  VUCASIM_upbs;
A68_INT  WUCASIM;  /* clause result */
A68_INT  XUCASIM;  /* YIELD */
A68_INT  YUCASIM_lwb;
A68_INT  ZUCASIM;  /* clause result */
A68_INT  AVCASIM_upb;
A68_226  BVCASIM;  /* collateral clause result */
A68_226  CVCASIM;  /* clause result */
A_PROC_ENTRY(lookupinputslice);
 /* line 735: */
 /* line 736: */
{ 
VUCASIM_upbs = (*(&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Inputupbs)));
 /* line 737: */
if ( (Fsindex==1) )
{ 
WUCASIM = 1;
} 
else
{ 
XUCASIM = (Fsindex-1) ;
WUCASIM = ((*(&A_VINDEX(VUCASIM_upbs,XUCASIM)))+1);
} 
YUCASIM_lwb = WUCASIM;
 /* line 738: */
 /* line 739: */
if ( (Fsindex>VUCASIM_upbs.upb) )
{ 
 /* line 740: */
 /* line 741: */
ZUCASIM = (*(&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Inputsizes))).upb;
} 
else
{ 
 /* line 742: */
ZUCASIM = (*(&A_VINDEX(VUCASIM_upbs,Fsindex)));
} 
AVCASIM_upb = ZUCASIM;
 /* line 743: */
BVCASIM.Lwb = YUCASIM_lwb;
 /* line 744: */
BVCASIM.Upb = AVCASIM_upb;
CVCASIM = BVCASIM;
} 
A_PROC_EXIT(lookupinputslice);
*ReturnedValue = (CVCASIM);
return;
} 
#undef NL

A68_VOID  FVCASIM_lookupinputaliases(A68_INT  Fnno, A68_INT  Ipno, A68_229  *ReturnedValue)
{ 
A68_203  GVCASIM;  /* OPERATORS - simple index */
A68_201 * HVCASIM_list;
A68_201 * IVCASIM_alias;
A68_INT  JVCASIM_i;
A68_231  LVCASIM_generator;   /* proc value of non-global proc */
A68_229  QVCASIM;  /* avoid structure result */
A68_229  RVCASIM_ans;
A68_228  SVCASIM;  /* collateral clause result */
A68_228 * TVCASIM;  /* YIELD */
A68_229  UVCASIM;  /* clause result */
A_PROC_ENTRY(lookupinputaliases);
 /* line 748: */
 /* line 749: */
{ 
GVCASIM = (*(&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Inputaliases))) ;
HVCASIM_list = (*(&A_VINDEX(GVCASIM,Ipno)));
 /* line 750: */
IVCASIM_alias = HVCASIM_list;
 /* line 751: */
JVCASIM_i = 0;
 /* line 752: */
for ( ;; )
{ 
if ( !((IVCASIM_alias!=AHCASIM_nilalias)) ) break;
JVCASIM_i+=1;
IVCASIM_alias = (*(&(IVCASIM_alias->Next)));
}
 /* line 753: */
A_CLOSURE( LVCASIM_generator, MVCASIM_generator, NVCASIM_generator );
(( NVCASIM_generator * ) ( LVCASIM_generator.nonlocals )) -> JVCASIM_i = (&JVCASIM_i);
A_CALLPROC(LVCASIM_generator,(A68_FALSE, &QVCASIM),(A68_FALSE, &QVCASIM,(LVCASIM_generator).nonlocals));
RVCASIM_ans = QVCASIM;
 /* line 754: */
IVCASIM_alias = HVCASIM_list;
 /* line 755: */
JVCASIM_i = 0;
 /* line 756: */
for ( ;; )
{ 
 /* line 757: */
if ( !((IVCASIM_alias!=AHCASIM_nilalias)) ) break;
JVCASIM_i+=1;
 /* line 758: */
SVCASIM.Instoffset = (*(&(IVCASIM_alias->Instoffset)));
SVCASIM.Ipno = (*(&(IVCASIM_alias->Ipno)));
TVCASIM = (&A_VINDEX(RVCASIM_ans,JVCASIM_i)) ;
(*TVCASIM) = SVCASIM;
 /* line 759: */
 /* line 760: */
IVCASIM_alias = (*(&(IVCASIM_alias->Next)));
}
 /* line 761: */
 /* line 762: */
UVCASIM = RVCASIM_ans;
} 
A_PROC_EXIT(lookupinputaliases);
*ReturnedValue = (UVCASIM);
return;
} 
#undef NL

A68_INT  WVCASIM_lookuptotalinputfanout(A68_INT  Fnno)
{ 
A68_INT  XVCASIM_ans;
A68_INT * YVCASIM_fanout;
A68_32  ZVCASIM;  /* forall yield */
A68_INT  AWCASIM;  /* forall loop counter */
A68_INT  BWCASIM;  /* clause result */
A_PROC_ENTRY(lookuptotalinputfanout);
 /* line 765: */
 /* line 766: */
{ 
XVCASIM_ans = 0;
 /* line 767: */
ZVCASIM = (*(&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Inputfanouts))) ;
AWCASIM = ZVCASIM.upb -1;
YVCASIM_fanout = ZVCASIM.data;
for (;AWCASIM-- >= 0;
(YVCASIM_fanout++
) )
{
 /* line 768: */
 /* line 769: */
XVCASIM_ans+=(*YVCASIM_fanout);
}
 /* line 770: */
 /* line 771: */
BWCASIM = XVCASIM_ans;
} 
A_PROC_EXIT(lookuptotalinputfanout);
return( BWCASIM );
} 
#undef NL

A68_VOID  DWCASIM_lookupshape(A68_INT  Fnno, A68_204  *ReturnedValue)
{ 
A68_204  EWCASIM;  /* clause result */
A_PROC_ENTRY(lookupshape);
 /* line 774: */
EWCASIM = (*(&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Shape)));
A_PROC_EXIT(lookupshape);
*ReturnedValue = (EWCASIM);
return;
} 
#undef NL

A68_VOID  GWCASIM_lookupalienshape(A68_INT  Fnno, A68_205  *ReturnedValue)
{ 
A68_205  HWCASIM;  /* clause result */
A_PROC_ENTRY(lookupalienshape);
 /* line 777: */
HWCASIM = (*(&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Alienshape)));
A_PROC_EXIT(lookupalienshape);
*ReturnedValue = (HWCASIM);
return;
} 
#undef NL

A68_INT  JWCASIM_lookupaninstance(A68_INT  Fnno)
{ 
A68_INT  KWCASIM;  /* clause result */
A_PROC_ENTRY(lookupaninstance);
 /* line 781: */
KWCASIM = (*(&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Aninstance)));
A_PROC_EXIT(lookupaninstance);
return( KWCASIM );
} 
#undef NL

A68_VOID  MWCASIM_lookupoutputs(A68_INT  Fnno, A68_135  *ReturnedValue)
{ 
A68_135  NWCASIM_ans;
A68_INT  OWCASIM_upb;
A68_189  QWCASIM_generator;   /* proc value of non-global proc */
A68_136  VWCASIM;  /* avoid structure result */
A68_136  WWCASIM;  /* OPERATORS - assign op */
A68_136  XWCASIM;  /* YIELD */
A68_136  YWCASIM;  /* OPERATORS - assign op */
A68_135  ZWCASIM;  /* clause result */
A_PROC_ENTRY(lookupoutputs);
 /* line 784: */
 /* line 785: */
{ 
NWCASIM_ans = (*(&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Outputs)));
 /* line 786: */
OWCASIM_upb = NWCASIM_ans.Blocks.upb;
 /* line 787: */
A_CLOSURE( QWCASIM_generator, RWCASIM_generator, SWCASIM_generator );
(( SWCASIM_generator * ) ( QWCASIM_generator.nonlocals )) -> OWCASIM_upb = OWCASIM_upb;
A_CALLPROC(QWCASIM_generator,(A68_FALSE, &VWCASIM),(A68_FALSE, &VWCASIM,(QWCASIM_generator).nonlocals));
WWCASIM = NWCASIM_ans.Blocks ;
XWCASIM = NWCASIM_ans.Blocks ;
YWCASIM = A_VASSIGN2(WWCASIM,VWCASIM,A68_134 ) ;
A_VASSIGN2(YWCASIM,XWCASIM,A68_134 );
 /* line 788: */
 /* line 789: */
ZWCASIM = NWCASIM_ans;
} 
A_PROC_EXIT(lookupoutputs);
*ReturnedValue = (ZWCASIM);
return;
} 
#undef NL

A68_INT  BXCASIM_lookuplastinstance(A68_INT  Fnno)
{ 
A68_INT  CXCASIM_raw;
A68_INT  DXCASIM;  /* clause result */
A_PROC_ENTRY(lookuplastinstance);
 /* line 797: */
 /* line 798: */
{ 
CXCASIM_raw = (*(&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Lastinstanceoffset)));
 /* line 799: */
 /* line 800: */
if ( (CXCASIM_raw<0) )
{ 
 /* line 801: */
DXCASIM = 0;
} 
else
{ 
 /* line 802: */
DXCASIM = CXCASIM_raw;
} 
} 
A_PROC_EXIT(lookuplastinstance);
return( DXCASIM );
} 
#undef NL

A68_VOID  FXCASIM_lookupuserparent(A68_INT  Fnno, A68_VC  *ReturnedValue)
{ 
A68_VC  GXCASIM_name;
A68_BOOL  HXCASIM;  /* optbool result */
A68_VC  IXCASIM;  /* clause result */
A68_INT  JXCASIM;  /* YIELD */
A68_VC  KXCASIM;  /* avoid structure result */
A_PROC_ENTRY(lookupuserparent);
 /* line 813: */
 /* line 814: */
{ 
GXCASIM_name = (*(&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Name)));
 /* line 815: */
HXCASIM = A_VSTRUCTCOMP(GXCASIM_name,NTCAOST_nilid);
if ( ! HXCASIM )
{HXCASIM = A_VC_EQ(GXCASIM_name,TTCAOST_nullid);
}
 /* line 816: */
if ( HXCASIM )
{ 
IXCASIM = TTCAOST_nullid;
} 
else
{ 
 /* line 817: */
JXCASIM = 1 ;
if ( ((*(&A_VINDEX(GXCASIM_name,JXCASIM)))!='_') )
{ 
IXCASIM = GXCASIM_name;
} 
else
{ 
 /* line 818: */
if ( ((*(&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Version)))>0) )
{ 
 /* line 819: */
 /* line 820: */
FXCASIM_lookupuserparent( (*(&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Outer))), &KXCASIM );
IXCASIM = KXCASIM;
} 
else
{ 
 /* line 821: */
IXCASIM = TTCAOST_nullid;
} 
} 
} 
} 
A_PROC_EXIT(lookupuserparent);
*ReturnedValue = (IXCASIM);
return;
} 
#undef NL

A68_INT  MXCASIM_lookupscaletime(A68_INT  Fnno)
{ 
A68_INT  NXCASIM;  /* clause result */
A_PROC_ENTRY(lookupscaletime);
 /* line 824: */
NXCASIM = (*(&((&A_VINDEX(YHCASIM_symboltable,Fnno))->Scaletime)));
A_PROC_EXIT(lookupscaletime);
return( NXCASIM );
} 
#undef NL

A68_VOID  OXCASIM_initialisetables(void)
{ 
A68_INT  PXCASIM_i;
A68_INT  QXCASIM;  /* to part of loop */
A68_191  RXCASIM;  /* collateral clause result */
A68_196  TXCASIM_generator;   /* proc value of non-global proc */
A68_192  YXCASIM;  /* avoid structure result */
A68_191 * ZXCASIM;  /* YIELD */
A68_209  EYCASIM;  /* avoid structure result */
A68_207  JYCASIM;  /* avoid structure result */
A68_135  LYCASIM;  /* collateral clause result */
A68_119  MYCASIM;  /* OPERATORS - mode -> union mode */
A68_114  NYCASIM;  /* YIELD */
A68_135  OYCASIM;  /* collateral clause result */
A68_119  PYCASIM;  /* OPERATORS - mode -> union mode */
A68_114  QYCASIM;  /* YIELD */
A68_204  RYCASIM;  /* collateral clause result */
A68_205  SYCASIM;  /* OPERATORS - skip to mode */
A68_VC  UYCASIM;  /* avoid structure result */
A_PROC_ENTRY(initialisetables);
{ 
QXCASIM = RDCASIM_typetable.upb;
for ( PXCASIM_i = 1;
PXCASIM_i <= QXCASIM;
PXCASIM_i += 1 )
{ 
 /* line 838: */
A_CLOSURE( TXCASIM_generator, UXCASIM_generator, VXCASIM_generator );
A_CALLPROC(TXCASIM_generator,(A68_FALSE, &YXCASIM),(A68_FALSE, &YXCASIM,(TXCASIM_generator).nonlocals));
RXCASIM.Types = YXCASIM;
 /* line 839: */
RXCASIM.Lasttype = 0;
ZXCASIM = (&A_VINDEX(RDCASIM_typetable,PXCASIM_i)) ;
(*ZXCASIM) = RXCASIM;
}
 /* line 840: */
BYCASIM_generator( A68_FALSE, &EYCASIM );
WHCASIM_nodes = EYCASIM;
 /* line 841: */
XHCASIM_lastnode = 0;
 /* line 842: */
GYCASIM_generator( A68_FALSE, &JYCASIM );
YHCASIM_symboltable = JYCASIM;
 /* line 843: */
ZHCASIM_lastsymbol = 0;
 /* line 844: */
 /* line 845: */
NYCASIM = (*(A_LOC(A68_114 ))) ;
LYCASIM.Type = A_UNITE(MYCASIM,mode9,9,NYCASIM);
LYCASIM.Blocks = IDCASIM_nullrvb;
 /* line 846: */
QYCASIM = (*(A_LOC(A68_114 ))) ;
OYCASIM.Type = A_UNITE(PYCASIM,mode9,9,QYCASIM);
OYCASIM.Blocks = IDCASIM_nullrvb;
 /* line 847: */
 /* line 848: */
RYCASIM.Size = 0;
RYCASIM.Offset = 0;
RYCASIM.Sort = IHCASIM_combinatorial;
 /* line 849: */
 /* line 850: */
RSCAOST_makeid( TYCASIM, &UYCASIM );
FLCASIM_addfunction(UYCASIM, 0, (-1), 0, LYCASIM, OYCASIM, STAASIM_nilsram, RYCASIM, SYCASIM);
} 
A_PROC_EXIT(initialisetables);
return;
} 
#undef NL

A68_VOID  VYCASIM_removetables(void)
{ 
A68_INT  WYCASIM_i;
A68_INT  XYCASIM;  /* to part of loop */
A68_191  YYCASIM;  /* collateral clause result */
A68_192  ZYCASIM;  /* OPERATORS - nil -> mode */
A68_191 * AZCASIM;  /* YIELD */
A68_209  BZCASIM;  /* OPERATORS - nil -> mode */
A68_207  CZCASIM;  /* OPERATORS - nil -> mode */
A_PROC_ENTRY(removetables);
{ 
XYCASIM = RDCASIM_typetable.upb;
for ( WYCASIM_i = 1;
WYCASIM_i <= XYCASIM;
WYCASIM_i += 1 )
{ 
 /* line 856: */
YYCASIM.Types = A_VVAC(ZYCASIM);
 /* line 857: */
YYCASIM.Lasttype = 0;
AZCASIM = (&A_VINDEX(RDCASIM_typetable,WYCASIM_i)) ;
(*AZCASIM) = YYCASIM;
}
 /* line 858: */
WHCASIM_nodes = A_VVAC(BZCASIM);
 /* line 859: */
 /* line 860: */
YHCASIM_symboltable = A_VVAC(CZCASIM);
} 
A_PROC_EXIT(removetables);
return;
} 
#undef NL

A68_VOID  EZCASIM_rawinputs(A68_139  Fn, A68_135  *ReturnedValue)
{ 
A68_122 * FZCASIM_type;
A68_122 ** GZCASIM_endtype;
A68_INT  HZCASIM_noblocks;
A68_136  IZCASIM_blocks;
A68_INT  JZCASIM_i;
A68_INT  KZCASIM;  /* to part of loop */
A68_140  LZCASIM;  /* OPERATORS - simple index */
A68_INT  MZCASIM;  /* YIELD */
A68_144  NZCASIM;  /* united object - for case conformity */
A68_135  OZCASIM_w;
A68_135  PZCASIM;  /* clause result */
A68_135  QZCASIM_ip;
A68_136  RZCASIM;  /* avoid structure result */
A68_122  SZCASIM;  /* collateral clause result */
A68_122 * TZCASIM;  /* YIELD */
A68_135  UZCASIM;  /* collateral clause result */
A68_119  VZCASIM;  /* OPERATORS - mode -> union mode */
A68_135  WZCASIM;  /* clause result */
A_PROC_ENTRY(rawinputs);
 /* line 868: */
 /* line 869: */
{ 
FZCASIM_type = WSAASIM_nilsst;
 /* line 870: */
GZCASIM_endtype = (&FZCASIM_type);
 /* line 871: */
HZCASIM_noblocks = 0;
 /* line 872: */
IZCASIM_blocks = IDCASIM_nullrvb;
 /* line 873: */
KZCASIM = Fn.Noinputs;
for ( JZCASIM_i = 1;
JZCASIM_i <= KZCASIM;
JZCASIM_i += 1 )
{ 
 /* line 874: */
LZCASIM = Fn.Body ;
MZCASIM = (*(&((&A_VINDEX(LZCASIM,JZCASIM_i))->Node))) ;
NZCASIM = (*(&A_VINDEX(WHCASIM_nodes,MZCASIM))) ;
switch ( NZCASIM.mode )
{ 
case 2: /* STRUCT(MODE119,REF MODE136)  */
OZCASIM_w = (NZCASIM.data.mode2);
PZCASIM = OZCASIM_w;
break;
default: 
A_IMP_SKIP ;
break;
} 
QZCASIM_ip = PZCASIM;
 /* line 875: */
LABASIM_( IZCASIM_blocks, QZCASIM_ip.Blocks, &RZCASIM );
IZCASIM_blocks = RZCASIM;
 /* line 876: */
SZCASIM.T = QZCASIM_ip.Type;
SZCASIM.Rest = WSAASIM_nilsst;
TZCASIM = A_HEAP(A68_122 ) ;
(*TZCASIM) = SZCASIM ;
(*GZCASIM_endtype) = TZCASIM;
 /* line 877: */
 /* line 878: */
GZCASIM_endtype = (&((*GZCASIM_endtype)->Rest));
}
 /* line 879: */
UZCASIM.Type = A_UNITE(VZCASIM,mode7,7,FZCASIM_type);
 /* line 880: */
UZCASIM.Blocks = IZCASIM_blocks;
WZCASIM = UZCASIM;
} 
A_PROC_EXIT(rawinputs);
*ReturnedValue = (WZCASIM);
return;
} 
#undef NL

A68_VOID  YZCASIM_rawlistsimulatablefunctions(A68_237  P)
{ 
A68_INT  JADASIM_i;
A68_INT  KADASIM;  /* to part of loop */
A68_VC  LADASIM_name;
A68_BOOL  MADASIM;  /* optbool result */
A68_INT  NADASIM;  /* YIELD */
A68_BOOL  OADASIM;  /* clause result */
A_PROC_ENTRY(rawlistsimulatablefunctions);
 /* line 896: */
 /* line 897: */
{ 
 /* line 905: */
KADASIM = YHCASIM_symboltable.upb;
for ( JADASIM_i = 1;
JADASIM_i <= KADASIM;
JADASIM_i += 1 )
{ 
 /* line 906: */
LADASIM_name = (*(&((&A_VINDEX(YHCASIM_symboltable,JADASIM_i))->Name)));
 /* line 907: */
MADASIM = (LADASIM_name.upb==0);
if ( ! MADASIM )
{NADASIM = 1 ;
MADASIM = !BADASIM_legalfirst((*(&A_VINDEX(LADASIM_name,NADASIM))));
}
if ( ! MADASIM )
{ /* line 908: */
MADASIM = A_CALLPROC(P,(LADASIM_name),(LADASIM_name,(P).nonlocals));
}
OADASIM = MADASIM;
if ( !OADASIM ) break;
/*SKIP*/;
}
 /* line 909: */
} 
A_PROC_EXIT(rawlistsimulatablefunctions);
return;
} 
#undef NL

A68_VOID  QADASIM_incrementaltablecleanup(void)
{ 
A_PROC_ENTRY(incrementaltablecleanup);
 /* line 938: */
PADASIM_lastcleanentry = ZHCASIM_lastsymbol;
A_PROC_EXIT(incrementaltablecleanup);
return;
} 
#undef NL

A68_VOID  RADASIM_finaltablecleanup(void)
{ 
A68_202 * SADASIM_entry;
A68_INT  TADASIM;  /* forall loop counter */
A68_32 * UADASIM;  /* YIELD */
A68_INT * VADASIM;  /* YIELD */
A68_32 * WADASIM;  /* YIELD */
A68_INT * XADASIM;  /* YIELD */
A68_32 * YADASIM;  /* YIELD */
A68_32 * ZADASIM;  /* YIELD */
A68_191 * ABDASIM_bucket;
A68_INT  BBDASIM;  /* forall loop counter */
A68_191  CBDASIM;  /* collateral clause result */
A68_192  DBDASIM;  /* OPERATORS - nil -> mode */
A_PROC_ENTRY(finaltablecleanup);
{ 
PADASIM_lastcleanentry = 0;
 /* line 946: */
TADASIM = YHCASIM_symboltable.upb -1;
SADASIM_entry = YHCASIM_symboltable.data;
for (;TADASIM-- >= 0;
(SADASIM_entry++
) )
{
 /* line 947: */
UADASIM = (&(SADASIM_entry->Expansion)) ;
(*UADASIM) = CDCASIM_nullrvi;
 /* line 948: */
VADASIM = (&(SADASIM_entry->Lastexpansion)) ;
(*VADASIM) = 0;
 /* line 949: */
WADASIM = (&(SADASIM_entry->Constantnos)) ;
(*WADASIM) = CDCASIM_nullrvi;
 /* line 950: */
XADASIM = (&(SADASIM_entry->Lastconstantno)) ;
(*XADASIM) = 0;
 /* line 951: */
YADASIM = (&(SADASIM_entry->Inputupbs)) ;
(*YADASIM) = CDCASIM_nullrvi;
 /* line 952: */
 /* line 953: */
ZADASIM = (&(SADASIM_entry->Inputfanouts)) ;
(*ZADASIM) = CDCASIM_nullrvi;
}
 /* line 954: */
BBDASIM = RDCASIM_typetable.upb -1;
ABDASIM_bucket = RDCASIM_typetable.data;
for (;BBDASIM-- >= 0;
(ABDASIM_bucket++
) )
{
 /* line 955: */
CBDASIM.Types = A_VVAC(DBDASIM);
 /* line 956: */
CBDASIM.Lasttype = 0;
(*ABDASIM_bucket) = CBDASIM;
}
 /* line 957: */
} 
A_PROC_EXIT(finaltablecleanup);
return;
} 
#undef NL
 /* line 965: */

A68_VOID  GBDASIM_savetables(A68_159  Ferry, A68_36  Flt)
{ 
A68_INT  HBDASIM_i;
A68_INT  IBDASIM;  /* to part of loop */
A68_191  JBDASIM_bucket;
A68_INT  KBDASIM_j;
A68_INT  LBDASIM;  /* to part of loop */
A68_192  MBDASIM;  /* OPERATORS - simple index */
A68_190  NBDASIM_typeentry;
A68_INT  OBDASIM_i;
A68_INT  PBDASIM;  /* to part of loop */
A68_INT  QBDASIM_i;
A68_INT  RBDASIM;  /* to part of loop */
A68_202  SBDASIM_fnentry;
A68_32  TBDASIM_expansion;
A68_INT  UBDASIM_j;
A68_INT  VBDASIM;  /* to part of loop */
A68_32  WBDASIM_constantnos;
A68_INT  XBDASIM_j;
A68_INT  YBDASIM;  /* to part of loop */
A68_32  ZBDASIM_inputsizes;
A68_INT  ACDASIM_j;
A68_INT  BCDASIM;  /* to part of loop */
A68_32  CCDASIM_inputupbs;
A68_INT  DCDASIM_j;
A68_INT  ECDASIM;  /* to part of loop */
A68_203  FCDASIM_inputaliases;
A68_INT  GCDASIM_j;
A68_INT  HCDASIM;  /* to part of loop */
A68_229  ICDASIM;  /* avoid structure result */
A68_229  JCDASIM_aliases;
A68_INT  KCDASIM_k;
A68_INT  LCDASIM;  /* to part of loop */
A68_32  MCDASIM_inputfanouts;
A68_INT  NCDASIM_j;
A68_INT  OCDASIM;  /* to part of loop */
A_PROC_ENTRY(savetables);
 /* line 966: */
 /* line 968: */
{ 
IBDASIM = KDCASIM_hashsize;
for ( HBDASIM_i = 1;
HBDASIM_i <= IBDASIM;
HBDASIM_i += 1 )
{ 
 /* line 969: */
JBDASIM_bucket = (*(&A_VINDEX(RDCASIM_typetable,HBDASIM_i)));
 /* line 970: */
PHBASIM_writeint(JBDASIM_bucket.Lasttype, Ferry, Flt);
 /* line 971: */
LBDASIM = JBDASIM_bucket.Lasttype;
for ( KBDASIM_j = 1;
KBDASIM_j <= LBDASIM;
KBDASIM_j += 1 )
{ 
 /* line 972: */
MBDASIM = JBDASIM_bucket.Types ;
NBDASIM_typeentry = (*(&A_VINDEX(MBDASIM,KBDASIM_j)));
 /* line 973: */
A_CALLPROC(GMBASIM_writestype,(NBDASIM_typeentry.Type, Ferry, Flt),(NBDASIM_typeentry.Type, Ferry, Flt,(GMBASIM_writestype).nonlocals));
 /* line 974: */
 /* line 975: */
PHBASIM_writeint(NBDASIM_typeentry.Machinesize, Ferry, Flt);
}
 /* line 976: */
}
 /* line 979: */
PHBASIM_writeint(XHCASIM_lastnode, Ferry, Flt);
 /* line 980: */
PBDASIM = XHCASIM_lastnode;
for ( OBDASIM_i = 1;
OBDASIM_i <= PBDASIM;
OBDASIM_i += 1 )
{ 
 /* line 981: */
 /* line 982: */
HSBASIM_writernode((*(&A_VINDEX(WHCASIM_nodes,OBDASIM_i))), Ferry, Flt);
}
 /* line 985: */
PHBASIM_writeint(ZHCASIM_lastsymbol, Ferry, Flt);
 /* line 986: */
RBDASIM = ZHCASIM_lastsymbol;
for ( QBDASIM_i = 1;
QBDASIM_i <= RBDASIM;
QBDASIM_i += 1 )
{ 
 /* line 987: */
SBDASIM_fnentry = (*(&A_VINDEX(YHCASIM_symboltable,QBDASIM_i)));
 /* line 988: */
BIBASIM_writeid(SBDASIM_fnentry.Name, Ferry, Flt);
 /* line 989: */
PHBASIM_writeint(SBDASIM_fnentry.Outer, Ferry, Flt);
 /* line 990: */
PHBASIM_writeint(SBDASIM_fnentry.Version, Ferry, Flt);
 /* line 991: */
LQBASIM_writefn(SBDASIM_fnentry.Function, Ferry, Flt);
 /* line 992: */
PHBASIM_writeint(SBDASIM_fnentry.Lastbinding, Ferry, Flt);
 /* line 993: */
PHBASIM_writeint(SBDASIM_fnentry.Lastexpansion, Ferry, Flt);
 /* line 994: */
TBDASIM_expansion = SBDASIM_fnentry.Expansion;
 /* line 995: */
VBDASIM = SBDASIM_fnentry.Lastexpansion;
for ( UBDASIM_j = 1;
UBDASIM_j <= VBDASIM;
UBDASIM_j += 1 )
{ 
 /* line 996: */
 /* line 997: */
PHBASIM_writeint((*(&A_VINDEX(TBDASIM_expansion,UBDASIM_j))), Ferry, Flt);
}
 /* line 998: */
PHBASIM_writeint(SBDASIM_fnentry.Lastconstantno, Ferry, Flt);
 /* line 999: */
WBDASIM_constantnos = SBDASIM_fnentry.Constantnos;
 /* line 1000: */
YBDASIM = SBDASIM_fnentry.Lastconstantno;
for ( XBDASIM_j = 1;
XBDASIM_j <= YBDASIM;
XBDASIM_j += 1 )
{ 
 /* line 1001: */
 /* line 1002: */
PHBASIM_writeint((*(&A_VINDEX(WBDASIM_constantnos,XBDASIM_j))), Ferry, Flt);
}
 /* line 1003: */
ZBDASIM_inputsizes = SBDASIM_fnentry.Inputsizes;
 /* line 1004: */
PHBASIM_writeint(ZBDASIM_inputsizes.upb, Ferry, Flt);
 /* line 1005: */
BCDASIM = ZBDASIM_inputsizes.upb;
for ( ACDASIM_j = 1;
ACDASIM_j <= BCDASIM;
ACDASIM_j += 1 )
{ 
 /* line 1006: */
 /* line 1007: */
PHBASIM_writeint((*(&A_VINDEX(ZBDASIM_inputsizes,ACDASIM_j))), Ferry, Flt);
}
 /* line 1008: */
CCDASIM_inputupbs = SBDASIM_fnentry.Inputupbs;
 /* line 1009: */
PHBASIM_writeint(CCDASIM_inputupbs.upb, Ferry, Flt);
 /* line 1010: */
ECDASIM = CCDASIM_inputupbs.upb;
for ( DCDASIM_j = 1;
DCDASIM_j <= ECDASIM;
DCDASIM_j += 1 )
{ 
 /* line 1011: */
 /* line 1012: */
PHBASIM_writeint((*(&A_VINDEX(CCDASIM_inputupbs,DCDASIM_j))), Ferry, Flt);
}
 /* line 1013: */
FCDASIM_inputaliases = SBDASIM_fnentry.Inputaliases;
 /* line 1014: */
PHBASIM_writeint(FCDASIM_inputaliases.upb, Ferry, Flt);
 /* line 1015: */
HCDASIM = FCDASIM_inputaliases.upb;
for ( GCDASIM_j = 1;
GCDASIM_j <= HCDASIM;
GCDASIM_j += 1 )
{ 
 /* line 1017: */
FVCASIM_lookupinputaliases( QBDASIM_i, GCDASIM_j, &ICDASIM );
JCDASIM_aliases = ICDASIM;
 /* line 1018: */
PHBASIM_writeint(JCDASIM_aliases.upb, Ferry, Flt);
 /* line 1019: */
LCDASIM = JCDASIM_aliases.upb;
for ( KCDASIM_k = 1;
KCDASIM_k <= LCDASIM;
KCDASIM_k += 1 )
{ 
 /* line 1020: */
PHBASIM_writeint((*(&((&A_VINDEX(JCDASIM_aliases,KCDASIM_k))->Instoffset))), Ferry, Flt);
 /* line 1021: */
 /* line 1022: */
PHBASIM_writeint((*(&((&A_VINDEX(JCDASIM_aliases,KCDASIM_k))->Ipno))), Ferry, Flt);
}
 /* line 1023: */
}
 /* line 1024: */
MCDASIM_inputfanouts = SBDASIM_fnentry.Inputfanouts;
 /* line 1025: */
PHBASIM_writeint(MCDASIM_inputfanouts.upb, Ferry, Flt);
 /* line 1026: */
OCDASIM = MCDASIM_inputfanouts.upb;
for ( NCDASIM_j = 1;
NCDASIM_j <= OCDASIM;
NCDASIM_j += 1 )
{ 
 /* line 1027: */
 /* line 1028: */
PHBASIM_writeint((*(&A_VINDEX(MCDASIM_inputfanouts,NCDASIM_j))), Ferry, Flt);
}
 /* line 1029: */
PHBASIM_writeint(SBDASIM_fnentry.Aninstance, Ferry, Flt);
 /* line 1030: */
PHBASIM_writeint(SBDASIM_fnentry.Lastinstanceoffset, Ferry, Flt);
 /* line 1031: */
FOBASIM_writewire(SBDASIM_fnentry.Outputs, Ferry, Flt);
 /* line 1032: */
PHBASIM_writeint(SBDASIM_fnentry.Shape.Size, Ferry, Flt);
 /* line 1033: */
PHBASIM_writeint(SBDASIM_fnentry.Shape.Offset, Ferry, Flt);
 /* line 1034: */
PHBASIM_writeint((A68_INT )SBDASIM_fnentry.Shape.Sort, Ferry, Flt);
 /* line 1035: */
PHBASIM_writeint(SBDASIM_fnentry.Seedtype, Ferry, Flt);
 /* line 1036: */
PHBASIM_writeint(SBDASIM_fnentry.Scaletime, Ferry, Flt);
 /* line 1037: */
PHBASIM_writeint(SBDASIM_fnentry.Alienshape.Workspace, Ferry, Flt);
 /* line 1038: */
PHBASIM_writeint(SBDASIM_fnentry.Alienshape.History, Ferry, Flt);
 /* line 1039: */
 /* line 1040: */
PHBASIM_writeint(SBDASIM_fnentry.Alienshape.Declid, Ferry, Flt);
}
 /* line 1041: */
} 
A_PROC_EXIT(savetables);
return;
} 
#undef NL

A68_VOID  RCDASIM_restoretables(A68_159  Ferry, A68_36  Flt)
{ 
A68_INT  SCDASIM_i;
A68_INT  TCDASIM;  /* to part of loop */
A68_191 * UCDASIM_bucket;
A68_INT  VCDASIM_upb;
A68_196  XCDASIM_generator;   /* proc value of non-global proc */
A68_192  CDDASIM;  /* avoid structure result */
A68_192  DDDASIM_types;
A68_192 * EDDASIM;  /* YIELD */
A68_INT * FDDASIM;  /* YIELD */
A68_INT  GDDASIM_j;
A68_INT  HDDASIM;  /* to part of loop */
A68_190 * IDDASIM_typeentry;
A68_119  JDDASIM;  /* avoid structure result */
A68_119 * KDDASIM;  /* YIELD */
A68_INT * LDDASIM;  /* YIELD */
A68_211  NDDASIM_generator;   /* proc value of non-global proc */
A68_209  SDDASIM;  /* avoid structure result */
A68_INT  TDDASIM_i;
A68_INT  UDDASIM;  /* to part of loop */
A68_144  VDDASIM;  /* avoid structure result */
A68_144 * WDDASIM;  /* YIELD */
A68_212  YDDASIM_generator;   /* proc value of non-global proc */
A68_207  DEDASIM;  /* avoid structure result */
A68_INT  EEDASIM_i;
A68_INT  FEDASIM;  /* to part of loop */
A68_202 * GEDASIM_fnentry;
A68_VC  HEDASIM;  /* avoid structure result */
A68_VC * IEDASIM;  /* YIELD */
A68_INT * JEDASIM;  /* YIELD */
A68_INT * KEDASIM;  /* YIELD */
A68_139  LEDASIM;  /* avoid structure result */
A68_139 * MEDASIM;  /* YIELD */
A68_INT * NEDASIM;  /* YIELD */
A68_INT  OEDASIM_upb;
A68_33  QEDASIM_generator;   /* proc value of non-global proc */
A68_32  VEDASIM;  /* avoid structure result */
A68_32  WEDASIM_expansion;
A68_32 * XEDASIM;  /* YIELD */
A68_INT * YEDASIM;  /* YIELD */
A68_INT  ZEDASIM_j;
A68_INT  AFDASIM;  /* to part of loop */
A68_INT * BFDASIM;  /* YIELD */
A68_INT  CFDASIM_upb1;
A68_33  EFDASIM_generator;   /* proc value of non-global proc */
A68_32  JFDASIM;  /* avoid structure result */
A68_32  KFDASIM_constantnos;
A68_32 * LFDASIM;  /* YIELD */
A68_INT * MFDASIM;  /* YIELD */
A68_INT  NFDASIM_j;
A68_INT  OFDASIM;  /* to part of loop */
A68_INT * PFDASIM;  /* YIELD */
A68_INT  QFDASIM_upb2;
A68_33  SFDASIM_generator;   /* proc value of non-global proc */
A68_32  XFDASIM;  /* avoid structure result */
A68_32  YFDASIM_inputsizes;
A68_32 * ZFDASIM;  /* YIELD */
A68_INT  AGDASIM_j;
A68_INT  BGDASIM;  /* to part of loop */
A68_INT * CGDASIM;  /* YIELD */
A68_INT  DGDASIM_upb3;
A68_33  FGDASIM_generator;   /* proc value of non-global proc */
A68_32  KGDASIM;  /* avoid structure result */
A68_32  LGDASIM_inputupbs;
A68_32 * MGDASIM;  /* YIELD */
A68_INT  NGDASIM_j;
A68_INT  OGDASIM;  /* to part of loop */
A68_INT * PGDASIM;  /* YIELD */
A68_INT  QGDASIM_upb4;
A68_210  SGDASIM_generator;   /* proc value of non-global proc */
A68_203  XGDASIM;  /* avoid structure result */
A68_203  YGDASIM_inputaliases;
A68_203 * ZGDASIM;  /* YIELD */
A68_INT  AHDASIM_j;
A68_INT  BHDASIM;  /* to part of loop */
A68_201 ** CHDASIM;  /* YIELD */
A68_201 ** DHDASIM_tail;
A68_INT  EHDASIM_upb5;
A68_INT  FHDASIM_k;
A68_INT  GHDASIM;  /* to part of loop */
A68_INT  HHDASIM_instoffset;
A68_INT  IHDASIM_ipno;
A68_201  JHDASIM;  /* collateral clause result */
A68_201 * KHDASIM;  /* YIELD */
A68_INT  LHDASIM_upb5;
A68_33  NHDASIM_generator;   /* proc value of non-global proc */
A68_32  SHDASIM;  /* avoid structure result */
A68_32  THDASIM_inputfanouts;
A68_32 * UHDASIM;  /* YIELD */
A68_INT  VHDASIM_j;
A68_INT  WHDASIM;  /* to part of loop */
A68_INT * XHDASIM;  /* YIELD */
A68_INT * YHDASIM;  /* YIELD */
A68_INT * ZHDASIM;  /* YIELD */
A68_135  AIDASIM;  /* avoid structure result */
A68_135 * BIDASIM;  /* YIELD */
A68_INT * CIDASIM;  /* YIELD */
A68_INT * DIDASIM;  /* YIELD */
A68_BITS * EIDASIM;  /* YIELD */
A68_INT * FIDASIM;  /* YIELD */
A68_INT * GIDASIM;  /* YIELD */
A68_INT * HIDASIM;  /* YIELD */
A68_INT * IIDASIM;  /* YIELD */
A68_INT * JIDASIM;  /* YIELD */
A_PROC_ENTRY(restoretables);
 /* line 1045: */
 /* line 1047: */
{ 
TCDASIM = KDCASIM_hashsize;
for ( SCDASIM_i = 1;
SCDASIM_i <= TCDASIM;
SCDASIM_i += 1 )
{ 
 /* line 1048: */
UCDASIM_bucket = (&A_VINDEX(RDCASIM_typetable,SCDASIM_i));
 /* line 1049: */
VCDASIM_upb = LGBASIM_readint(Ferry, Flt);
 /* line 1050: */
A_CLOSURE( XCDASIM_generator, YCDASIM_generator, ZCDASIM_generator );
(( ZCDASIM_generator * ) ( XCDASIM_generator.nonlocals )) -> VCDASIM_upb = VCDASIM_upb;
A_CALLPROC(XCDASIM_generator,(A68_FALSE, &CDDASIM),(A68_FALSE, &CDDASIM,(XCDASIM_generator).nonlocals));
DDDASIM_types = CDDASIM;
 /* line 1051: */
EDDASIM = (&(UCDASIM_bucket->Types)) ;
(*EDDASIM) = DDDASIM_types;
 /* line 1052: */
FDDASIM = (&(UCDASIM_bucket->Lasttype)) ;
(*FDDASIM) = VCDASIM_upb;
 /* line 1053: */
HDDASIM = VCDASIM_upb;
for ( GDDASIM_j = 1;
GDDASIM_j <= HDDASIM;
GDDASIM_j += 1 )
{ 
 /* line 1054: */
IDDASIM_typeentry = (&A_VINDEX(DDDASIM_types,GDDASIM_j));
 /* line 1055: */
A_CALLPROC(PIBASIM_readstype,(Ferry, Flt, &JDDASIM),(Ferry, Flt, &JDDASIM,(PIBASIM_readstype).nonlocals));
KDDASIM = (&(IDDASIM_typeentry->Type)) ;
(*KDDASIM) = JDDASIM;
 /* line 1056: */
 /* line 1057: */
LDDASIM = (&(IDDASIM_typeentry->Machinesize)) ;
(*LDDASIM) = LGBASIM_readint(Ferry, Flt);
}
 /* line 1058: */
}
 /* line 1061: */
XHCASIM_lastnode = LGBASIM_readint(Ferry, Flt);
 /* line 1062: */
A_CLOSURE( NDDASIM_generator, ODDASIM_generator, PDDASIM_generator );
A_CALLPROC(NDDASIM_generator,(A68_FALSE, &SDDASIM),(A68_FALSE, &SDDASIM,(NDDASIM_generator).nonlocals));
WHCASIM_nodes = SDDASIM;
 /* line 1063: */
UDDASIM = XHCASIM_lastnode;
for ( TDDASIM_i = 1;
TDDASIM_i <= UDDASIM;
TDDASIM_i += 1 )
{ 
 /* line 1064: */
 /* line 1065: */
NSBASIM_readrnode( Ferry, Flt, &VDDASIM );
WDDASIM = (&A_VINDEX(WHCASIM_nodes,TDDASIM_i)) ;
(*WDDASIM) = VDDASIM;
}
 /* line 1068: */
ZHCASIM_lastsymbol = LGBASIM_readint(Ferry, Flt);
 /* line 1069: */
A_CLOSURE( YDDASIM_generator, ZDDASIM_generator, AEDASIM_generator );
A_CALLPROC(YDDASIM_generator,(A68_FALSE, &DEDASIM),(A68_FALSE, &DEDASIM,(YDDASIM_generator).nonlocals));
YHCASIM_symboltable = DEDASIM;
 /* line 1070: */
FEDASIM = ZHCASIM_lastsymbol;
for ( EEDASIM_i = 1;
EEDASIM_i <= FEDASIM;
EEDASIM_i += 1 )
{ 
 /* line 1071: */
GEDASIM_fnentry = (&A_VINDEX(YHCASIM_symboltable,EEDASIM_i));
 /* line 1072: */
RGBASIM_readid( Ferry, Flt, &HEDASIM );
IEDASIM = (&(GEDASIM_fnentry->Name)) ;
(*IEDASIM) = HEDASIM;
 /* line 1073: */
JEDASIM = (&(GEDASIM_fnentry->Outer)) ;
(*JEDASIM) = LGBASIM_readint(Ferry, Flt);
 /* line 1074: */
KEDASIM = (&(GEDASIM_fnentry->Version)) ;
(*KEDASIM) = LGBASIM_readint(Ferry, Flt);
 /* line 1075: */
SQBASIM_readfn( Ferry, Flt, &LEDASIM );
MEDASIM = (&(GEDASIM_fnentry->Function)) ;
(*MEDASIM) = LEDASIM;
 /* line 1076: */
NEDASIM = (&(GEDASIM_fnentry->Lastbinding)) ;
(*NEDASIM) = LGBASIM_readint(Ferry, Flt);
 /* line 1077: */
OEDASIM_upb = LGBASIM_readint(Ferry, Flt);
 /* line 1078: */
A_CLOSURE( QEDASIM_generator, REDASIM_generator, SEDASIM_generator );
(( SEDASIM_generator * ) ( QEDASIM_generator.nonlocals )) -> OEDASIM_upb = OEDASIM_upb;
A_CALLPROC(QEDASIM_generator,(A68_FALSE, &VEDASIM),(A68_FALSE, &VEDASIM,(QEDASIM_generator).nonlocals));
WEDASIM_expansion = VEDASIM;
 /* line 1079: */
XEDASIM = (&(GEDASIM_fnentry->Expansion)) ;
(*XEDASIM) = WEDASIM_expansion;
 /* line 1080: */
YEDASIM = (&(GEDASIM_fnentry->Lastexpansion)) ;
(*YEDASIM) = OEDASIM_upb;
 /* line 1081: */
AFDASIM = OEDASIM_upb;
for ( ZEDASIM_j = 1;
ZEDASIM_j <= AFDASIM;
ZEDASIM_j += 1 )
{ 
 /* line 1082: */
 /* line 1083: */
BFDASIM = (&A_VINDEX(WEDASIM_expansion,ZEDASIM_j)) ;
(*BFDASIM) = LGBASIM_readint(Ferry, Flt);
}
 /* line 1084: */
CFDASIM_upb1 = LGBASIM_readint(Ferry, Flt);
 /* line 1085: */
A_CLOSURE( EFDASIM_generator, FFDASIM_generator, GFDASIM_generator );
(( GFDASIM_generator * ) ( EFDASIM_generator.nonlocals )) -> CFDASIM_upb1 = CFDASIM_upb1;
A_CALLPROC(EFDASIM_generator,(A68_FALSE, &JFDASIM),(A68_FALSE, &JFDASIM,(EFDASIM_generator).nonlocals));
KFDASIM_constantnos = JFDASIM;
 /* line 1086: */
LFDASIM = (&(GEDASIM_fnentry->Constantnos)) ;
(*LFDASIM) = KFDASIM_constantnos;
 /* line 1087: */
MFDASIM = (&(GEDASIM_fnentry->Lastconstantno)) ;
(*MFDASIM) = CFDASIM_upb1;
 /* line 1088: */
OFDASIM = CFDASIM_upb1;
for ( NFDASIM_j = 1;
NFDASIM_j <= OFDASIM;
NFDASIM_j += 1 )
{ 
 /* line 1089: */
 /* line 1090: */
PFDASIM = (&A_VINDEX(KFDASIM_constantnos,NFDASIM_j)) ;
(*PFDASIM) = LGBASIM_readint(Ferry, Flt);
}
 /* line 1091: */
QFDASIM_upb2 = LGBASIM_readint(Ferry, Flt);
 /* line 1092: */
A_CLOSURE( SFDASIM_generator, TFDASIM_generator, UFDASIM_generator );
(( UFDASIM_generator * ) ( SFDASIM_generator.nonlocals )) -> QFDASIM_upb2 = QFDASIM_upb2;
A_CALLPROC(SFDASIM_generator,(A68_FALSE, &XFDASIM),(A68_FALSE, &XFDASIM,(SFDASIM_generator).nonlocals));
YFDASIM_inputsizes = XFDASIM;
 /* line 1093: */
ZFDASIM = (&(GEDASIM_fnentry->Inputsizes)) ;
(*ZFDASIM) = YFDASIM_inputsizes;
 /* line 1094: */
BGDASIM = QFDASIM_upb2;
for ( AGDASIM_j = 1;
AGDASIM_j <= BGDASIM;
AGDASIM_j += 1 )
{ 
 /* line 1095: */
 /* line 1096: */
CGDASIM = (&A_VINDEX(YFDASIM_inputsizes,AGDASIM_j)) ;
(*CGDASIM) = LGBASIM_readint(Ferry, Flt);
}
 /* line 1097: */
DGDASIM_upb3 = LGBASIM_readint(Ferry, Flt);
 /* line 1098: */
A_CLOSURE( FGDASIM_generator, GGDASIM_generator, HGDASIM_generator );
(( HGDASIM_generator * ) ( FGDASIM_generator.nonlocals )) -> DGDASIM_upb3 = DGDASIM_upb3;
A_CALLPROC(FGDASIM_generator,(A68_FALSE, &KGDASIM),(A68_FALSE, &KGDASIM,(FGDASIM_generator).nonlocals));
LGDASIM_inputupbs = KGDASIM;
 /* line 1099: */
MGDASIM = (&(GEDASIM_fnentry->Inputupbs)) ;
(*MGDASIM) = LGDASIM_inputupbs;
 /* line 1100: */
OGDASIM = DGDASIM_upb3;
for ( NGDASIM_j = 1;
NGDASIM_j <= OGDASIM;
NGDASIM_j += 1 )
{ 
 /* line 1101: */
 /* line 1102: */
PGDASIM = (&A_VINDEX(LGDASIM_inputupbs,NGDASIM_j)) ;
(*PGDASIM) = LGBASIM_readint(Ferry, Flt);
}
 /* line 1103: */
QGDASIM_upb4 = LGBASIM_readint(Ferry, Flt);
 /* line 1104: */
A_CLOSURE( SGDASIM_generator, TGDASIM_generator, UGDASIM_generator );
(( UGDASIM_generator * ) ( SGDASIM_generator.nonlocals )) -> QGDASIM_upb4 = QGDASIM_upb4;
A_CALLPROC(SGDASIM_generator,(A68_FALSE, &XGDASIM),(A68_FALSE, &XGDASIM,(SGDASIM_generator).nonlocals));
YGDASIM_inputaliases = XGDASIM;
 /* line 1105: */
ZGDASIM = (&(GEDASIM_fnentry->Inputaliases)) ;
(*ZGDASIM) = YGDASIM_inputaliases;
 /* line 1106: */
BHDASIM = QGDASIM_upb4;
for ( AHDASIM_j = 1;
AHDASIM_j <= BHDASIM;
AHDASIM_j += 1 )
{ 
 /* line 1107: */
CHDASIM = (&A_VINDEX(YGDASIM_inputaliases,AHDASIM_j)) ;
(*CHDASIM) = AHCASIM_nilalias;
 /* line 1108: */
DHDASIM_tail = (&A_VINDEX(YGDASIM_inputaliases,AHDASIM_j));
 /* line 1109: */
EHDASIM_upb5 = LGBASIM_readint(Ferry, Flt);
 /* line 1110: */
GHDASIM = EHDASIM_upb5;
for ( FHDASIM_k = 1;
FHDASIM_k <= GHDASIM;
FHDASIM_k += 1 )
{ 
 /* line 1111: */
HHDASIM_instoffset = LGBASIM_readint(Ferry, Flt);
 /* line 1112: */
IHDASIM_ipno = LGBASIM_readint(Ferry, Flt);
 /* line 1113: */
 /* line 1114: */
JHDASIM.Instoffset = HHDASIM_instoffset;
JHDASIM.Ipno = IHDASIM_ipno;
JHDASIM.Next = AHCASIM_nilalias;
KHDASIM = A_HEAP(A68_201 ) ;
(*KHDASIM) = JHDASIM ;
(*DHDASIM_tail) = KHDASIM;
 /* line 1115: */
 /* line 1116: */
DHDASIM_tail = (&((*DHDASIM_tail)->Next));
}
 /* line 1117: */
}
 /* line 1118: */
LHDASIM_upb5 = LGBASIM_readint(Ferry, Flt);
 /* line 1119: */
A_CLOSURE( NHDASIM_generator, OHDASIM_generator, PHDASIM_generator );
(( PHDASIM_generator * ) ( NHDASIM_generator.nonlocals )) -> LHDASIM_upb5 = LHDASIM_upb5;
A_CALLPROC(NHDASIM_generator,(A68_FALSE, &SHDASIM),(A68_FALSE, &SHDASIM,(NHDASIM_generator).nonlocals));
THDASIM_inputfanouts = SHDASIM;
 /* line 1120: */
UHDASIM = (&(GEDASIM_fnentry->Inputfanouts)) ;
(*UHDASIM) = THDASIM_inputfanouts;
 /* line 1121: */
WHDASIM = LHDASIM_upb5;
for ( VHDASIM_j = 1;
VHDASIM_j <= WHDASIM;
VHDASIM_j += 1 )
{ 
 /* line 1122: */
 /* line 1123: */
XHDASIM = (&A_VINDEX(THDASIM_inputfanouts,VHDASIM_j)) ;
(*XHDASIM) = LGBASIM_readint(Ferry, Flt);
}
 /* line 1124: */
YHDASIM = (&(GEDASIM_fnentry->Aninstance)) ;
(*YHDASIM) = LGBASIM_readint(Ferry, Flt);
 /* line 1125: */
ZHDASIM = (&(GEDASIM_fnentry->Lastinstanceoffset)) ;
(*ZHDASIM) = LGBASIM_readint(Ferry, Flt);
 /* line 1126: */
MOBASIM_readwire( Ferry, Flt, &AIDASIM );
BIDASIM = (&(GEDASIM_fnentry->Outputs)) ;
(*BIDASIM) = AIDASIM;
 /* line 1127: */
CIDASIM = (&((&(GEDASIM_fnentry->Shape))->Size)) ;
(*CIDASIM) = LGBASIM_readint(Ferry, Flt);
 /* line 1128: */
DIDASIM = (&((&(GEDASIM_fnentry->Shape))->Offset)) ;
(*DIDASIM) = LGBASIM_readint(Ferry, Flt);
 /* line 1129: */
EIDASIM = (&((&(GEDASIM_fnentry->Shape))->Sort)) ;
(*EIDASIM) = (A68_BITS )LGBASIM_readint(Ferry, Flt);
 /* line 1130: */
FIDASIM = (&(GEDASIM_fnentry->Seedtype)) ;
(*FIDASIM) = LGBASIM_readint(Ferry, Flt);
 /* line 1131: */
GIDASIM = (&(GEDASIM_fnentry->Scaletime)) ;
(*GIDASIM) = LGBASIM_readint(Ferry, Flt);
 /* line 1132: */
HIDASIM = (&((&(GEDASIM_fnentry->Alienshape))->Workspace)) ;
(*HIDASIM) = LGBASIM_readint(Ferry, Flt);
 /* line 1133: */
IIDASIM = (&((&(GEDASIM_fnentry->Alienshape))->History)) ;
(*IIDASIM) = LGBASIM_readint(Ferry, Flt);
 /* line 1134: */
 /* line 1135: */
JIDASIM = (&((&(GEDASIM_fnentry->Alienshape))->Declid)) ;
(*JIDASIM) = LGBASIM_readint(Ferry, Flt);
}
 /* line 1136: */
 /* line 1139: */
} 
A_PROC_EXIT(restoretables);
return;
} 
#undef NL
 /* line 1: */
 /* line 4: */
void TCCASIM(void)   /* initialise DECS kesymbols */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/kesymbols.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/kesave.m","./mfiles/kebasics.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_32  DDCASIM;  /* avoid structure result */
A68_136  JDCASIM;  /* avoid structure result */
A68_194  QDCASIM;  /* procedure value */
A68_193  SDCASIM;  /* avoid structure result */
A68_203  GHCASIM;  /* avoid structure result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
EFBASIM();   /* USE kesave */
JSAASIM();   /* USE kebasics */
JSCAOST();   /* USE basics */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/kesymbols.a68";
A_config.translation_time = "Tue Apr  4 11:06:04 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "SCCASIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:06:04 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS kesymbols);
UEAALIB_a68config(LGAALIB_configinfo, XCCASIM);
 /* line 91: */
ZCCASIM_generator( A68_TRUE, &DDCASIM );
CDCASIM_nullrvi = DDCASIM;
 /* line 92: */
FDCASIM_generator( A68_TRUE, &JDCASIM );
IDCASIM_nullrvb = JDCASIM;
 /* line 102: */
 /* line 104: */
 /* line 107: */
QDCASIM.fn.fn_global = NDCASIM_generator;
QDCASIM.nonlocals = A68_NIL;
LDCASIM_anonymous = QDCASIM;
 /* line 109: */
A_CALLPROC(LDCASIM_anonymous,(A68_TRUE, &SDCASIM),(A68_TRUE, &SDCASIM,(LDCASIM_anonymous).nonlocals));
RDCASIM_typetable = SDCASIM;
 /* line 118: */
 /* line 133: */
 /* line 152: */
 /* line 181: */
 /* line 191: */
 /* line 197: */
 /* line 282: */
 /* line 298: */
 /* line 300: */
 /* line 301: */
CHCASIM_generator( A68_TRUE, &GHCASIM );
FHCASIM_nullrva = GHCASIM;
 /* line 305: */
 /* line 306: */
 /* line 307: */
 /* line 308: */
 /* line 309: */
 /* line 310: */
 /* line 311: */
 /* line 312: */
 /* line 313: */
 /* line 314: */
 /* line 315: */
 /* line 316: */
SHCASIM_combinatorialloopbreak = (A68_BITS )((A68_BITS )(NHCASIM_genericid|MHCASIM_queryset)|IHCASIM_combinatorial);
 /* line 317: */
THCASIM_eventloopbreak = (A68_BITS )(NHCASIM_genericid|IHCASIM_combinatorial);
 /* line 318: */
UHCASIM_unitdelay = (A68_BITS )(LHCASIM_initialised|KHCASIM_eventhandling);
 /* line 319: */
VHCASIM_generaldelay = (A68_BITS )((A68_BITS )(LHCASIM_initialised|JHCASIM_eventsetting)|KHCASIM_eventhandling);
 /* line 322: */
 /* line 323: */
 /* line 325: */
 /* line 326: */
 /* line 333: */
 /* line 334: */
 /* line 335: */
 /* line 343: */
 /* line 344: */
 /* line 345: */
 /* line 353: */
 /* line 363: */
 /* line 373: */
 /* line 398: */
 /* line 432: */
 /* line 465: */
 /* line 494: */
 /* line 507: */
 /* line 520: */
 /* line 533: */
 /* line 546: */
 /* line 549: */
 /* line 559: */
 /* line 566: */
 /* line 572: */
 /* line 575: */
 /* line 578: */
 /* line 589: */
 /* line 638: */
 /* line 682: */
 /* line 695: */
 /* line 703: */
 /* line 707: */
 /* line 713: */
 /* line 720: */
 /* line 727: */
 /* line 734: */
 /* line 746: */
 /* line 764: */
 /* line 773: */
 /* line 776: */
 /* line 780: */
 /* line 783: */
 /* line 796: */
 /* line 812: */
 /* line 823: */
 /* line 835: */
 /* line 836: */
 /* line 837: */
 /* line 853: */
 /* line 854: */
 /* line 855: */
 /* line 867: */
 /* line 895: */
 /* line 929: */
PADASIM_lastcleanentry = 0;
 /* line 935: */
 /* line 936: */
 /* line 937: */
 /* line 943: */
 /* line 944: */
 /* line 945: */
 /* line 964: */
 /* line 1044: */
 /* line 1166: */
A_PROC_EXIT(DECS kesymbols);
} 
#undef NL
/* end of translation of ./a68files/kesymbols.a68 */
