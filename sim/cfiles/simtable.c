
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
/* UNAME:YFDBSIM */
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

A_PROCEDURE(A68_BOOL ,A68t146,(struct A68t135 ,struct A68t135 ),(struct A68t135 ,struct A68t135 ,void *));
typedef struct A68t146  A68_146 ;    /* PROC(MODE135,MODE135) BOOL */

A_PROCEDURE(A68_BOOL ,A68t147,(struct A68t141 ,struct A68t141 ),(struct A68t141 ,struct A68t141 ,void *));
typedef struct A68t147  A68_147 ;    /* PROC(MODE141,MODE141) BOOL */

A_PROCEDURE(A68_BOOL ,A68t148,(struct A68t142 ,struct A68t142 ),(struct A68t142 ,struct A68t142 ,void *));
typedef struct A68t148  A68_148 ;    /* PROC(MODE142,MODE142) BOOL */

A_PROCEDURE(A68_BOOL ,A68t149,(struct A68t143 ,struct A68t143 ),(struct A68t143 ,struct A68t143 ,void *));
typedef struct A68t149  A68_149 ;    /* PROC(MODE143,MODE143) BOOL */

A_PROCEDURE(A68_BOOL ,A68t150,(struct A68t145 ,struct A68t145 ),(struct A68t145 ,struct A68t145 ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(MODE145,MODE145) BOOL */

A_PROCEDURE(A68_BOOL ,A68t151,(struct A68t119 ,struct A68t119 ),(struct A68t119 ,struct A68t119 ,void *));
typedef struct A68t151  A68_151 ;    /* PROC(MODE119,MODE119) BOOL */

A_PROCEDURE(A68_BOOL ,A68t152,(struct A68t131 ,struct A68t131 ),(struct A68t131 ,struct A68t131 ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(MODE131,MODE131) BOOL */

A_PROCEDURE(A68_VOID ,A68t153,(struct A68t136 ,struct A68t136 ,struct A68t136 *),(struct A68t136 ,struct A68t136 ,struct A68t136 *,void *));
typedef struct A68t153  A68_153 ;    /* PROC(REF MODE136,REF MODE136) REF MODE136 */

A_PROCEDURE(A68_INT ,A68t154,(struct A68t119 ),(struct A68t119 ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(MODE119) INT */

A_PROCEDURE(struct A68t122 *,A68t155,(struct A68t119 ,A68_INT ,A68_INT ),(struct A68t119 ,A68_INT ,A68_INT ,void *));
typedef struct A68t155  A68_155 ;    /* PROC(MODE119,INT,INT) REF MODE122 */

A_PROCEDURE(A68_VOID ,A68t156,(struct A68t135 ,A68_INT ,A68_INT ,struct A68t135 *),(struct A68t135 ,A68_INT ,A68_INT ,struct A68t135 *,void *));
typedef struct A68t156  A68_156 ;    /* PROC(MODE135,INT,INT) MODE135 */

A_PROCEDURE(A68_VOID ,A68t157,(struct A68t137 *,A68_INT ,A68_INT ,struct A68t135 *),(struct A68t137 *,A68_INT ,A68_INT ,struct A68t135 *,void *));
typedef struct A68t157  A68_157 ;    /* PROC(REF MODE137,INT,INT) MODE135 */

A_PROCEDURE(A68_VC *,A68t158,(struct A68t131 ,struct A68t119 ),(struct A68t131 ,struct A68t119 ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(MODE131,MODE119) REF REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t159,(A68_VC ,struct A68t119 ,struct A68t131 *),(A68_VC ,struct A68t119 ,struct A68t131 *,void *));
typedef struct A68t159  A68_159 ;    /* PROC(REF MODE26,MODE119) MODE131 */

A_PROCEDURE(A68_INT ,A68t160,(struct A68t145 ),(struct A68t145 ,void *));
typedef struct A68t160  A68_160 ;    /* PROC(MODE145) INT */

A_PROCEDURE(A68_VOID ,A68t161,(struct A68t145 ,A68_INT ),(struct A68t145 ,A68_INT ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(MODE145,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t162,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(INT,INT) VOID */
struct A68t164 ;

A_PROCEDURE(A68_VOID ,A68t163,(struct A68t164 *,A68_INT ,struct A68t43 ,struct A68t36 ,struct A68t143 *),(struct A68t164 *,A68_INT ,struct A68t43 ,struct A68t36 ,struct A68t143 *,void *));
typedef struct A68t163  A68_163 ;    /* PROC(REF MODE164,INT,MODE43,MODE36) MODE143 */
struct A68t164{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t164  A68_164 ;    /* STRUCT(REF MODE26,REF BITS)  */

A_PROCEDURE(A68_VOID ,A68t165,(A68_VC ,struct A68t36 ,struct A68t143 *),(A68_VC ,struct A68t36 ,struct A68t143 *,void *));
typedef struct A68t165  A68_165 ;    /* PROC(REF MODE26,MODE36) MODE143 */

A_PROCEDURE(A68_VOID ,A68t166,(A68_INT *,A68_BOOL *,struct A68t36 ),(A68_INT *,A68_BOOL *,struct A68t36 ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(REF INT,REF BOOL,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t167,(struct A68t145 ,A68_VC ),(struct A68t145 ,A68_VC ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(MODE145,REF MODE26) VOID */
struct A68t169 ;

A_PROCEDURE(A68_VOID ,A68t168,(A68_INT *,A68_VC *,struct A68t169 ,struct A68t169 ,struct A68t36 ),(A68_INT *,A68_VC *,struct A68t169 ,struct A68t169 ,struct A68t36 ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(REF INT,REF REF MODE26,MODE169,MODE169,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t169,(A68_VC ,struct A68t36 ),(A68_VC ,struct A68t36 ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(REF MODE26,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t170,(A68_INT ,A68_INT ,A68_VC ,struct A68t169 ,struct A68t169 ,struct A68t43 ,struct A68t36 ,struct A68t143 *),(A68_INT ,A68_INT ,A68_VC ,struct A68t169 ,struct A68t169 ,struct A68t43 ,struct A68t36 ,struct A68t143 *,void *));
typedef struct A68t170  A68_170 ;    /* PROC(INT,INT,REF MODE26,MODE169,MODE169,MODE43,MODE36) MODE143 */

A_PROCEDURE(A68_VOID ,A68t171,(void),(void *));
typedef struct A68t171  A68_171 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t172,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t173,(A68_VC ,struct A68t36 ,struct A68t145 *),(A68_VC ,struct A68t36 ,struct A68t145 *,void *));
typedef struct A68t173  A68_173 ;    /* PROC(REF MODE26,MODE36) MODE145 */

A_PROCEDURE(A68_VOID ,A68t174,(struct A68t145 ),(struct A68t145 ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE145) VOID */

A_PROCEDURE(A68_VOID ,A68t175,(struct A68t145 ,struct A68t145 *),(struct A68t145 ,struct A68t145 *,void *));
typedef struct A68t175  A68_175 ;    /* PROC(MODE145) MODE145 */

A_PROCEDURE(A68_VOID ,A68t176,(struct A68t145 ,struct A68t145 ),(struct A68t145 ,struct A68t145 ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(MODE145,MODE145) VOID */

A_PROCEDURE(A68_BOOL ,A68t177,(struct A68t145 ),(struct A68t145 ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(MODE145) BOOL */

A_PROCEDURE(A68_VOID ,A68t178,(A68_INT ,struct A68t139 *),(A68_INT ,struct A68t139 *,void *));
typedef struct A68t178  A68_178 ;    /* PROC(INT) MODE139 */

A_PROCEDURE(A68_VOID ,A68t179,(A68_INT ,struct A68t144 *),(A68_INT ,struct A68t144 *,void *));
typedef struct A68t179  A68_179 ;    /* PROC(INT) MODE144 */
struct A68t181 ;

A_PROCEDURE(A68_VOID ,A68t180,(struct A68t181 ),(struct A68t181 ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(MODE181) VOID */

A_PROCEDURE(A68_BOOL ,A68t181,(A68_VC ),(A68_VC ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(REF MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t182,(struct A68t139 ,struct A68t135 *),(struct A68t139 ,struct A68t135 *,void *));
typedef struct A68t182  A68_182 ;    /* PROC(MODE139) MODE135 */

A_PROCEDURE(A68_VOID ,A68t183,(A68_INT ,struct A68t135 *),(A68_INT ,struct A68t135 *,void *));
typedef struct A68t183  A68_183 ;    /* PROC(INT) MODE135 */

A_PROCEDURE(A68_VOID ,A68t184,(struct A68t171 ),(struct A68t171 ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(MODE171) VOID */

A_PROCEDURE(A68_VOID ,A68t185,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,55,A68t186);
typedef struct A68t186  A68_186 ;    /* STRUCT 55 CHAR */
struct A68t187{
A68_VC  Uname;
A68_VC  Lname;
struct A68t145 * Node;
};
typedef struct A68t187  A68_187 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE145)  */
struct A68t188{
A68_INT  Repeat;
A_PAD_INT(PAD_46)
A68_VC  Name;
A68_VC  Aliasname;
A68_CHAR  Op;
A_PAD_CHAR(PAD_47)
struct A68t187 * Bind;
struct A68t188 * Rest;
};
typedef struct A68t188  A68_188 ;    /* STRUCT(INT,REF MODE26,REF MODE26,CHAR,REF MODE187,REF MODE188)  */
struct A68t189 { A68_INT mode; union {
struct A68t188 * mode1;
A68_INT  mode2;
struct A68t126 * mode3;
struct A68t127 * mode4;
struct A68t128 * mode5;
struct A68t129 * mode6;
struct A68t130 * mode7;
struct A68t132 * mode8;
struct A68t133 * mode9;
struct A68t124  mode10;
struct A68t125  mode11;
} data; };
typedef struct A68t189  A68_189 ;    /* UNION(REF MODE188,INT,REF MODE126,REF MODE127,REF MODE128,REF MODE129,REF MODE130,REF MODE132,REF MODE133,MODE124,MODE125)  */
struct A68t190{
A68_VC  Name;
struct A68t189  Value;
A68_INT  Scope;
A_PAD_INT(PAD_48)
};
typedef struct A68t190  A68_190 ;    /* STRUCT(REF MODE26,MODE189,INT)  */
A_VECTOR(struct A68t190 ,A68t192);
typedef struct A68t192  A68_192 ;    /* VECTOR [] MODE190 */
struct A68t191{
A68_INT  Top;
A_PAD_INT(PAD_49)
struct A68t192  Table;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(INT,REF MODE192)  */

A_PROCEDURE(A68_BOOL ,A68t193,(struct A68t190 ,A68_INT ),(struct A68t190 ,A68_INT ,void *));
typedef struct A68t193  A68_193 ;    /* PROC(MODE190,INT) BOOL */

A_PROCEDURE(A68_INT ,A68t194,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t194  A68_194 ;    /* PROC(REF MODE26,INT) INT */

A_PROCEDURE(A68_VOID ,A68t195,(A68_BOOL ,struct A68t192 *),(A68_BOOL ,struct A68t192 *,void *));
typedef struct A68t195  A68_195 ;    /* PROC(BOOL) MODE192 */
A_ISTRUCT(A68_CHAR ,2,A68t196);
typedef struct A68t196  A68_196 ;    /* STRUCT 2 CHAR */

A_PROCEDURE(A68_BOOL ,A68t197,(A68_VC ,A68_INT ,struct A68t189 ),(A68_VC ,A68_INT ,struct A68t189 ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(REF MODE26,INT,MODE189) BOOL */

A_PROCEDURE(A68_BOOL ,A68t198,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t198  A68_198 ;    /* PROC(REF MODE26,INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t199,(A68_INT ),(A68_INT ,void *));
typedef struct A68t199  A68_199 ;    /* PROC(INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t200,(A68_VC ,A68_INT ,struct A68t188 **),(A68_VC ,A68_INT ,struct A68t188 **,void *));
typedef struct A68t200  A68_200 ;    /* PROC(REF MODE26,INT,REF REF MODE188) BOOL */

A_PROCEDURE(A68_BOOL ,A68t201,(A68_INT ,A68_INT *),(A68_INT ,A68_INT *,void *));
typedef struct A68t201  A68_201 ;    /* PROC(INT,REF INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t202,(A68_INT ,A68_INT ,struct A68t188 **),(A68_INT ,A68_INT ,struct A68t188 **,void *));
typedef struct A68t202  A68_202 ;    /* PROC(INT,INT,REF REF MODE188) BOOL */

A_PROCEDURE(A68_BOOL ,A68t203,(A68_VC ,A68_INT ,struct A68t131 *),(A68_VC ,A68_INT ,struct A68t131 *,void *));
typedef struct A68t203  A68_203 ;    /* PROC(REF MODE26,INT,REF MODE131) BOOL */

A_PROCEDURE(A68_BOOL ,A68t204,(A68_VC ,A68_INT ,A68_INT *),(A68_VC ,A68_INT ,A68_INT *,void *));
typedef struct A68t204  A68_204 ;    /* PROC(REF MODE26,INT,REF INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t205,(void),(void *));
typedef struct A68t205  A68_205 ;    /* PROC BOOL */

A_PROCEDURE(struct A68t188 *,A68t206,(void),(void *));
typedef struct A68t206  A68_206 ;    /* PROC REF MODE188 */

A_PROCEDURE(A68_VOID ,A68t207,(struct A68t188 *),(struct A68t188 *,void *));
typedef struct A68t207  A68_207 ;    /* PROC(REF MODE188) VOID */

A_PROCEDURE(A68_VOID ,A68t208,(A68_INT ),(A68_INT ,void *));
typedef struct A68t208  A68_208 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t209,(struct A68t131 ),(struct A68t131 ,void *));
typedef struct A68t209  A68_209 ;    /* PROC(MODE131) VOID */

A_PROCEDURE(A68_VOID ,A68t210,(struct A68t207 ,struct A68t43 ,struct A68t208 ,struct A68t209 ),(struct A68t207 ,struct A68t43 ,struct A68t208 ,struct A68t209 ,void *));
typedef struct A68t210  A68_210 ;    /* PROC(MODE207,MODE43,MODE208,MODE209) VOID */

A_PROCEDURE(A68_VOID ,A68t211,(struct A68t131 *),(struct A68t131 *,void *));
typedef struct A68t211  A68_211 ;    /* PROC MODE131 */

A_PROCEDURE(A68_VOID ,A68t212,(struct A68t206 ,struct A68t105 ,struct A68t102 ,struct A68t211 ),(struct A68t206 ,struct A68t105 ,struct A68t102 ,struct A68t211 ,void *));
typedef struct A68t212  A68_212 ;    /* PROC(MODE206,MODE105,MODE102,MODE211) VOID */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from kernel --- */
/* --- End of imports from kernel --- */


/* --- Imports from basics --- */
extern A68_VOID  RSCAOST_makeid(A68_VC ,A68_VC *);
extern A68_VOID  BTCAOST_makeid(A68_CHAR ,A68_VC *);
extern A68_VC  TTCAOST_nullid;
/* --- End of imports from basics --- */


/* --- Imports from putstrings --- */
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void XWBBSIM(void);   /* kernel */
extern void JSCAOST(void);   /* basics */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_186   CGDBSIM = {"$Id: simtable.a68,v 34.2 1995/03/29 13:05:03 ella Exp $"}; 
A_GISVEC(A68_VC ,DGDBSIM,CGDBSIM,55)
#define EGDBSIM_gopast ';'
#define FGDBSIM_goin '.'
#define GGDBSIM_noop ' '
A68_188 * HGDBSIM_nilpath;
A68_187 * IGDBSIM_nilbind;
A68_VC  JGDBSIM_monitoringpointername;
A68_VC  KGDBSIM_simulatedfunctionname;
static A68_191  LGDBSIM_simtable;
#define MGDBSIM_any 0
#define NGDBSIM_probename 1
#define OGDBSIM_aliasname 2
#define PGDBSIM_internalname 4
static A68_196   IIDBSIM = {"__"}; 
A_GISVEC(A68_VC ,JIDBSIM,IIDBSIM,2)
static A68_INT  OMDBSIM_nextpathname;
static A68_INT  ENDBSIM_nextintname;
static A68_INT  PNDBSIM_nextsvaluename;
#define AODBSIM_savepath 1
#define BODBSIM_saveint 2
#define CODBSIM_savesvalue 3
typedef struct   /* env of non-global proc */
{
A68_INT  RHDBSIM_upb;
A_PAD_INT(PAD_50)
} XHDBSIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  WODBSIM_upb;
A_PAD_INT(PAD_51)
} BPDBSIM_generator;

A_STATIC A68_BOOL  SGDBSIM_inscope(A68_190  E, A68_INT  S);

A_STATIC A68_INT  XGDBSIM_findnameinscope(A68_VC  Name, A68_INT  Scope);

A_STATIC A68_INT  HHDBSIM_findbaseinscope(A68_INT  Base, A68_INT  Scope);

A_STATIC A68_VOID  QHDBSIM_extendtable(void);

A_STATIC A68_VOID  WHDBSIM_generator(A68_BOOL  UHDBSIM_anonymous, A68_192  *ReturnedValue, void *NonLocals);

A68_VOID  GIDBSIM_simtableinit(void);

A_STATIC A68_VOID  NIDBSIM_generator(A68_BOOL  MIDBSIM_anonymous, A68_192  *ReturnedValue);

A68_VOID  RIDBSIM_simtablediscard(void);

A68_BOOL  XIDBSIM_simtableaddbinding(A68_VC  Name, A68_INT  Scope, A68_189  Value);

A68_BOOL  IJDBSIM_simtablereplacebinding(A68_VC  Name, A68_INT  Scope, A68_189  Value);

A68_BOOL  UJDBSIM_simtablediscardbinding(A68_VC  Name, A68_INT  Scope);

A68_BOOL  EKDBSIM_simtablediscardbindingsbybase(A68_INT  Base);

A68_BOOL  UKDBSIM_simtablelookuppath(A68_VC  Name, A68_INT  Scope, A68_188 ** Path);

A68_BOOL  DLDBSIM_simtablelookupcircuitbybase(A68_INT  Base, A68_INT * Circuit);

A68_BOOL  NLDBSIM_simtablelookuppathbybase(A68_INT  Base, A68_INT  Scope, A68_188 ** Path);

A68_BOOL  XLDBSIM_simtablelookupsvalue(A68_VC  Name, A68_INT  Scope, A68_131 * Svalue);

A68_BOOL  HMDBSIM_simtablelookupint(A68_VC  Name, A68_INT  Scope, A68_INT * Int);

A68_VOID  PMDBSIM_simtablestartlistingpathnames(void);

A68_BOOL  QMDBSIM_simtablemorepathnames(void);

A68_VOID  WMDBSIM_simtablenextpathname(A68_VC  *ReturnedValue);

A68_188 * ZMDBSIM_simtablenextpath(void);

A68_VOID  FNDBSIM_simtablestartlistingintnames(void);

A68_BOOL  GNDBSIM_simtablemoreintnames(void);

A68_VOID  MNDBSIM_simtablenextintname(A68_VC  *ReturnedValue);

A68_VOID  QNDBSIM_simtablestartlistingsvaluenames(void);

A68_BOOL  RNDBSIM_simtablemoresvaluenames(void);

A68_VOID  XNDBSIM_simtablenextsvaluename(A68_VC  *ReturnedValue);

A68_VOID  HODBSIM_simtablesavestate(A68_207  Writepathlist, A68_43  Writeid, A68_208  Writeint, A68_209  Writesvalue);

A68_VOID  VODBSIM_simtablerestorestate(A68_206  Readpathlist, A68_105  Readid, A68_102  Readint, A68_211  Readsvalue);

A_STATIC A68_VOID  APDBSIM_generator(A68_BOOL  YODBSIM_anonymous, A68_192  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WHDBSIM_generator(A68_BOOL  UHDBSIM_anonymous, A68_192  *ReturnedValue, void *NonLocals)
#define NL(x) (((XHDBSIM_generator *)NonLocals)->x)
{ 
A68_192  YHDBSIM;  /* clause result */
A68_192  ZHDBSIM;  /* OPERATORS - dynamic generator */
{ 
ZHDBSIM.upb = (NL(RHDBSIM_upb)*2) ;
( UHDBSIM_anonymous? A_VLOC(A68_190 ,ZHDBSIM): A_VHEAP(A68_190 ,ZHDBSIM) );
YHDBSIM = ZHDBSIM;
} 
*ReturnedValue = (YHDBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  NIDBSIM_generator(A68_BOOL  MIDBSIM_anonymous, A68_192  *ReturnedValue)
{ 
A68_192  OIDBSIM;  /* clause result */
A68_192  PIDBSIM;  /* OPERATORS - dynamic generator */
{ 
PIDBSIM.upb = 32 ;
( MIDBSIM_anonymous? A_VLOC(A68_190 ,PIDBSIM): A_VHEAP(A68_190 ,PIDBSIM) );
OIDBSIM = PIDBSIM;
} 
*ReturnedValue = (OIDBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  APDBSIM_generator(A68_BOOL  YODBSIM_anonymous, A68_192  *ReturnedValue, void *NonLocals)
#define NL(x) (((BPDBSIM_generator *)NonLocals)->x)
{ 
A68_192  CPDBSIM;  /* clause result */
A68_192  DPDBSIM;  /* OPERATORS - dynamic generator */
{ 
DPDBSIM.upb = NL(WODBSIM_upb) ;
( YODBSIM_anonymous? A_VLOC(A68_190 ,DPDBSIM): A_VHEAP(A68_190 ,DPDBSIM) );
CPDBSIM = DPDBSIM;
} 
*ReturnedValue = (CPDBSIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  SGDBSIM_inscope(A68_190  E, A68_INT  S)
{ 
A68_BOOL  TGDBSIM;  /* optbool result */
A68_BOOL  UGDBSIM;  /* clause result */
A_PROC_ENTRY(inscope);
 /* line 131: */
TGDBSIM = (S==0);
if ( ! TGDBSIM )
{TGDBSIM = (E.Scope==S);
}
UGDBSIM = TGDBSIM;
A_PROC_EXIT(inscope);
return( UGDBSIM );
} 
#undef NL

A_STATIC A68_INT  XGDBSIM_findnameinscope(A68_VC  Name, A68_INT  Scope)
{ 
A68_INT  YGDBSIM_tableindex;
A68_INT  ZGDBSIM_i;
A68_INT  AHDBSIM;  /* to part of loop */
A68_192  BHDBSIM;  /* OPERATORS - simple index */
A68_BOOL  CHDBSIM;  /* optbool result */
A68_192  DHDBSIM;  /* OPERATORS - simple index */
A68_INT  EHDBSIM;  /* clause result */
A_PROC_ENTRY(findnameinscope);
 /* line 136: */
 /* line 137: */
{ 
YGDBSIM_tableindex = 0;
 /* line 138: */
AHDBSIM = (*(&((&LGDBSIM_simtable)->Top)));
for ( ZGDBSIM_i = 1;
ZGDBSIM_i <= AHDBSIM;
ZGDBSIM_i += 1 )
{ 
 /* line 139: */
if ( !((YGDBSIM_tableindex==0)) ) break;
 /* line 140: */
BHDBSIM = (*(&((&LGDBSIM_simtable)->Table))) ;
CHDBSIM = SGDBSIM_inscope((*(&A_VINDEX(BHDBSIM,ZGDBSIM_i))), Scope);
if ( CHDBSIM )
{ /* line 141: */
DHDBSIM = (*(&((&LGDBSIM_simtable)->Table))) ;
CHDBSIM = A_VC_EQ((*(&((&A_VINDEX(DHDBSIM,ZGDBSIM_i))->Name))),Name);
}
 /* line 142: */
if ( CHDBSIM )
{ 
 /* line 143: */
 /* line 144: */
YGDBSIM_tableindex = ZGDBSIM_i;
} 
}
 /* line 145: */
 /* line 146: */
EHDBSIM = YGDBSIM_tableindex;
} 
A_PROC_EXIT(findnameinscope);
return( EHDBSIM );
} 
#undef NL

A_STATIC A68_INT  HHDBSIM_findbaseinscope(A68_INT  Base, A68_INT  Scope)
{ 
A68_INT  IHDBSIM_tableindex;
A68_INT  JHDBSIM_i;
A68_INT  KHDBSIM;  /* to part of loop */
A68_192  LHDBSIM;  /* OPERATORS - simple index */
A68_192  MHDBSIM;  /* OPERATORS - simple index */
A68_189  NHDBSIM;  /* united object - for case conformity */
A68_188 * OHDBSIM_p;
A68_INT  PHDBSIM;  /* clause result */
A_PROC_ENTRY(findbaseinscope);
 /* line 149: */
 /* line 150: */
{ 
IHDBSIM_tableindex = 0;
 /* line 151: */
KHDBSIM = (*(&((&LGDBSIM_simtable)->Top)));
for ( JHDBSIM_i = 1;
JHDBSIM_i <= KHDBSIM;
JHDBSIM_i += 1 )
{ 
 /* line 152: */
if ( !((IHDBSIM_tableindex==0)) ) break;
 /* line 153: */
LHDBSIM = (*(&((&LGDBSIM_simtable)->Table))) ;
if ( SGDBSIM_inscope((*(&A_VINDEX(LHDBSIM,JHDBSIM_i))), Scope) )
{ 
 /* line 154: */
MHDBSIM = (*(&((&LGDBSIM_simtable)->Table))) ;
NHDBSIM = (*(&((&A_VINDEX(MHDBSIM,JHDBSIM_i))->Value))) ;
switch ( NHDBSIM.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26,REF MODE26,CHAR,REF MODE187,REF MODE188)  */
OHDBSIM_p = (NHDBSIM.data.mode1);
 /* line 155: */
if ( ((*(&((*(&((*(&(OHDBSIM_p->Bind)))->Node)))->Base)))==Base) )
{ 
 /* line 156: */
 /* line 157: */
IHDBSIM_tableindex = JHDBSIM_i;
} 
break;
default: 
 /* line 158: */
 /* line 159: */
/*SKIP*/;
break;
} 
} 
}
 /* line 160: */
 /* line 161: */
PHDBSIM = IHDBSIM_tableindex;
} 
A_PROC_EXIT(findbaseinscope);
return( PHDBSIM );
} 
#undef NL

A_STATIC A68_VOID  QHDBSIM_extendtable(void)
{ 
A68_INT  RHDBSIM_upb;
A68_BOOL  SHDBSIM;  /* clause result */
A68_INT * THDBSIM;  /* YIELD */
A68_195  VHDBSIM_generator;   /* proc value of non-global proc */
A68_192  AIDBSIM;  /* avoid structure result */
A68_192  BIDBSIM_newtable;
A68_192  CIDBSIM;  /* OPERATORS - trim index */
A68_192  DIDBSIM;  /* YIELD */
A68_192  EIDBSIM;  /* OPERATORS - assign op */
A68_192 * FIDBSIM;  /* YIELD */
A_PROC_ENTRY(extendtable);
{ 
RHDBSIM_upb = (*(&((&LGDBSIM_simtable)->Table))).upb;
 /* line 168: */
THDBSIM = (&((&LGDBSIM_simtable)->Top)) ;
SHDBSIM = (RHDBSIM_upb<((*THDBSIM)+=1));
if ( SHDBSIM )
{ 
A_CLOSURE( VHDBSIM_generator, WHDBSIM_generator, XHDBSIM_generator );
(( XHDBSIM_generator * ) ( VHDBSIM_generator.nonlocals )) -> RHDBSIM_upb = RHDBSIM_upb;
A_CALLPROC(VHDBSIM_generator,(A68_FALSE, &AIDBSIM),(A68_FALSE, &AIDBSIM,(VHDBSIM_generator).nonlocals));
BIDBSIM_newtable = AIDBSIM;
 /* line 169: */
DIDBSIM = A_VTRIM(CIDBSIM,(BIDBSIM_newtable),A_VTSCRIPT(&(CIDBSIM.upb),(BIDBSIM_newtable).upb,1,RHDBSIM_upb)) ;
EIDBSIM = (*(&((&LGDBSIM_simtable)->Table))) ;
A_VASSIGN2(EIDBSIM,DIDBSIM,A68_190 );
 /* line 170: */
 /* line 171: */
FIDBSIM = (&((&LGDBSIM_simtable)->Table)) ;
(*FIDBSIM) = BIDBSIM_newtable;
} 
} 
A_PROC_EXIT(extendtable);
return;
} 
#undef NL

A68_VOID  GIDBSIM_simtableinit(void)
{ 
A68_VC  HIDBSIM;  /* avoid structure result */
A68_VC  KIDBSIM;  /* avoid structure result */
A68_191  LIDBSIM;  /* collateral clause result */
A68_192  QIDBSIM;  /* avoid structure result */
A_PROC_ENTRY(simtableinit);
{ 
BTCAOST_makeid( '_', &HIDBSIM );
JGDBSIM_monitoringpointername = HIDBSIM;
 /* line 177: */
RSCAOST_makeid( JIDBSIM, &KIDBSIM );
KGDBSIM_simulatedfunctionname = KIDBSIM;
 /* line 178: */
LIDBSIM.Top = 0;
 /* line 179: */
NIDBSIM_generator( A68_FALSE, &QIDBSIM );
LIDBSIM.Table = QIDBSIM;
LGDBSIM_simtable = LIDBSIM;
} 
A_PROC_EXIT(simtableinit);
return;
} 
#undef NL

A68_VOID  RIDBSIM_simtablediscard(void)
{ 
A68_191  SIDBSIM;  /* collateral clause result */
A68_192  TIDBSIM;  /* OPERATORS - nil -> mode */
A_PROC_ENTRY(simtablediscard);
SIDBSIM.Top = 0;
SIDBSIM.Table = A_VVAC(TIDBSIM);
LGDBSIM_simtable = SIDBSIM;
A_PROC_EXIT(simtablediscard);
return;
} 
#undef NL

A68_BOOL  XIDBSIM_simtableaddbinding(A68_VC  Name, A68_INT  Scope, A68_189  Value)
{ 
A68_INT  YIDBSIM_index;
A68_BOOL  ZIDBSIM;  /* clause result */
A68_190  AJDBSIM;  /* collateral clause result */
A68_192  BJDBSIM;  /* OPERATORS - simple index */
A68_INT  CJDBSIM;  /* YIELD */
A68_190 * DJDBSIM;  /* YIELD */
A68_BOOL  EJDBSIM;  /* clause result */
A_PROC_ENTRY(simtableaddbinding);
 /* line 185: */
{ 
YIDBSIM_index = XGDBSIM_findnameinscope(Name, Scope);
 /* line 186: */
ZIDBSIM = (YIDBSIM_index==0);
if ( ZIDBSIM )
{ 
QHDBSIM_extendtable();
 /* line 187: */
AJDBSIM.Name = Name;
AJDBSIM.Value = Value;
AJDBSIM.Scope = Scope;
BJDBSIM = (*(&((&LGDBSIM_simtable)->Table))) ;
CJDBSIM = (*(&((&LGDBSIM_simtable)->Top))) ;
DJDBSIM = (&A_VINDEX(BJDBSIM,CJDBSIM)) ;
(*DJDBSIM) = AJDBSIM;
 /* line 188: */
 /* line 189: */
 /* line 190: */
EJDBSIM = A68_TRUE;
} 
else
{ 
 /* line 191: */
EJDBSIM = A68_FALSE;
} 
} 
A_PROC_EXIT(simtableaddbinding);
return( EJDBSIM );
} 
#undef NL

A68_BOOL  IJDBSIM_simtablereplacebinding(A68_VC  Name, A68_INT  Scope, A68_189  Value)
{ 
A68_INT  JJDBSIM_index;
A68_BOOL  KJDBSIM;  /* clause result */
A68_190  LJDBSIM;  /* collateral clause result */
A68_192  MJDBSIM;  /* OPERATORS - simple index */
A68_INT  NJDBSIM;  /* YIELD */
A68_190 * OJDBSIM;  /* YIELD */
A68_BOOL  PJDBSIM;  /* clause result */
A68_192  QJDBSIM;  /* OPERATORS - simple index */
A68_189 * RJDBSIM;  /* YIELD */
A_PROC_ENTRY(simtablereplacebinding);
 /* line 194: */
{ 
JJDBSIM_index = XGDBSIM_findnameinscope(Name, Scope);
 /* line 195: */
KJDBSIM = (JJDBSIM_index==0);
if ( KJDBSIM )
{ 
QHDBSIM_extendtable();
 /* line 196: */
LJDBSIM.Name = Name;
LJDBSIM.Value = Value;
LJDBSIM.Scope = Scope;
MJDBSIM = (*(&((&LGDBSIM_simtable)->Table))) ;
NJDBSIM = (*(&((&LGDBSIM_simtable)->Top))) ;
OJDBSIM = (&A_VINDEX(MJDBSIM,NJDBSIM)) ;
(*OJDBSIM) = LJDBSIM;
 /* line 197: */
 /* line 198: */
 /* line 199: */
PJDBSIM = A68_FALSE;
} 
else
{ 
QJDBSIM = (*(&((&LGDBSIM_simtable)->Table))) ;
RJDBSIM = (&((&A_VINDEX(QJDBSIM,JJDBSIM_index))->Value)) ;
(*RJDBSIM) = Value;
 /* line 200: */
 /* line 201: */
PJDBSIM = A68_TRUE;
} 
} 
A_PROC_EXIT(simtablereplacebinding);
return( PJDBSIM );
} 
#undef NL

A68_BOOL  UJDBSIM_simtablediscardbinding(A68_VC  Name, A68_INT  Scope)
{ 
A68_INT  VJDBSIM_index;
A68_BOOL  WJDBSIM;  /* clause result */
A68_BOOL  XJDBSIM;  /* clause result */
A68_190  YJDBSIM;  /* collateral clause result */
A68_189  ZJDBSIM;  /* OPERATORS - mode -> union mode */
A68_INT  AKDBSIM;  /* YIELD */
A68_192  BKDBSIM;  /* OPERATORS - simple index */
A68_190 * CKDBSIM;  /* YIELD */
A_PROC_ENTRY(simtablediscardbinding);
 /* line 204: */
{ 
VJDBSIM_index = XGDBSIM_findnameinscope(Name, Scope);
 /* line 205: */
WJDBSIM = (VJDBSIM_index==0);
if ( WJDBSIM )
{ 
 /* line 206: */
 /* line 207: */
XJDBSIM = A68_FALSE;
} 
else
{ 
YJDBSIM.Name = TTCAOST_nullid;
AKDBSIM = 0 ;
YJDBSIM.Value = A_UNITE(ZJDBSIM,mode2,2,AKDBSIM);
YJDBSIM.Scope = 0;
BKDBSIM = (*(&((&LGDBSIM_simtable)->Table))) ;
CKDBSIM = (&A_VINDEX(BKDBSIM,VJDBSIM_index)) ;
(*CKDBSIM) = YJDBSIM;
 /* line 208: */
 /* line 209: */
XJDBSIM = A68_TRUE;
} 
} 
A_PROC_EXIT(simtablediscardbinding);
return( XJDBSIM );
} 
#undef NL

A68_BOOL  EKDBSIM_simtablediscardbindingsbybase(A68_INT  Base)
{ 
A68_BOOL  FKDBSIM_found;
A68_INT  GKDBSIM_i;
A68_INT  HKDBSIM;  /* to part of loop */
A68_192  IKDBSIM;  /* OPERATORS - simple index */
A68_189  JKDBSIM;  /* united object - for case conformity */
A68_188 * KKDBSIM_p;
A68_190  LKDBSIM;  /* collateral clause result */
A68_189  MKDBSIM;  /* OPERATORS - mode -> union mode */
A68_INT  NKDBSIM;  /* YIELD */
A68_192  OKDBSIM;  /* OPERATORS - simple index */
A68_190 * PKDBSIM;  /* YIELD */
A68_BOOL  QKDBSIM;  /* clause result */
A_PROC_ENTRY(simtablediscardbindingsbybase);
 /* line 212: */
 /* line 213: */
{ 
FKDBSIM_found = A68_FALSE;
 /* line 214: */
HKDBSIM = (*(&((&LGDBSIM_simtable)->Top)));
for ( GKDBSIM_i = 1;
GKDBSIM_i <= HKDBSIM;
GKDBSIM_i += 1 )
{ 
 /* line 215: */
 /* line 216: */
IKDBSIM = (*(&((&LGDBSIM_simtable)->Table))) ;
JKDBSIM = (*(&((&A_VINDEX(IKDBSIM,GKDBSIM_i))->Value))) ;
switch ( JKDBSIM.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26,REF MODE26,CHAR,REF MODE187,REF MODE188)  */
KKDBSIM_p = (JKDBSIM.data.mode1);
 /* line 217: */
 /* line 218: */
if ( ((*(&((*(&((*(&(KKDBSIM_p->Bind)))->Node)))->Base)))==Base) )
{ 
LKDBSIM.Name = TTCAOST_nullid;
NKDBSIM = 0 ;
LKDBSIM.Value = A_UNITE(MKDBSIM,mode2,2,NKDBSIM);
LKDBSIM.Scope = 0;
OKDBSIM = (*(&((&LGDBSIM_simtable)->Table))) ;
PKDBSIM = (&A_VINDEX(OKDBSIM,GKDBSIM_i)) ;
(*PKDBSIM) = LKDBSIM;
 /* line 219: */
 /* line 220: */
 /* line 221: */
 /* line 222: */
FKDBSIM_found = A68_TRUE;
} 
break;
default: 
 /* line 223: */
/*SKIP*/;
break;
} 
}
 /* line 224: */
 /* line 225: */
QKDBSIM = FKDBSIM_found;
} 
A_PROC_EXIT(simtablediscardbindingsbybase);
return( QKDBSIM );
} 
#undef NL

A68_BOOL  UKDBSIM_simtablelookuppath(A68_VC  Name, A68_INT  Scope, A68_188 ** Path)
{ 
A68_INT  VKDBSIM_index;
A68_BOOL  WKDBSIM;  /* clause result */
A68_BOOL  XKDBSIM;  /* clause result */
A68_192  YKDBSIM;  /* OPERATORS - simple index */
A68_189  ZKDBSIM;  /* united object - for case conformity */
A68_188 * ALDBSIM_p;
A_PROC_ENTRY(simtablelookuppath);
 /* line 228: */
{ 
VKDBSIM_index = XGDBSIM_findnameinscope(Name, Scope);
 /* line 229: */
WKDBSIM = (VKDBSIM_index==0);
if ( WKDBSIM )
{ 
 /* line 230: */
 /* line 231: */
XKDBSIM = A68_FALSE;
} 
else
{ 
 /* line 232: */
YKDBSIM = (*(&((&LGDBSIM_simtable)->Table))) ;
ZKDBSIM = (*(&((&A_VINDEX(YKDBSIM,VKDBSIM_index))->Value))) ;
switch ( ZKDBSIM.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26,REF MODE26,CHAR,REF MODE187,REF MODE188)  */
ALDBSIM_p = (ZKDBSIM.data.mode1);
{ 
(*Path) = ALDBSIM_p;
 /* line 233: */
XKDBSIM = A68_TRUE;
} 
break;
default: 
 /* line 234: */
 /* line 235: */
XKDBSIM = A68_FALSE;
break;
} 
} 
} 
A_PROC_EXIT(simtablelookuppath);
return( XKDBSIM );
} 
#undef NL

A68_BOOL  DLDBSIM_simtablelookupcircuitbybase(A68_INT  Base, A68_INT * Circuit)
{ 
A68_INT  ELDBSIM_index;
A68_BOOL  FLDBSIM;  /* clause result */
A68_BOOL  GLDBSIM;  /* clause result */
A68_192  HLDBSIM;  /* OPERATORS - simple index */
A68_189  ILDBSIM;  /* united object - for case conformity */
A68_188 * JLDBSIM_p;
A_PROC_ENTRY(simtablelookupcircuitbybase);
 /* line 238: */
{ 
ELDBSIM_index = HHDBSIM_findbaseinscope(Base, MGDBSIM_any);
 /* line 239: */
FLDBSIM = (ELDBSIM_index==0);
if ( FLDBSIM )
{ 
 /* line 240: */
 /* line 241: */
GLDBSIM = A68_FALSE;
} 
else
{ 
 /* line 242: */
HLDBSIM = (*(&((&LGDBSIM_simtable)->Table))) ;
ILDBSIM = (*(&((&A_VINDEX(HLDBSIM,ELDBSIM_index))->Value))) ;
switch ( ILDBSIM.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26,REF MODE26,CHAR,REF MODE187,REF MODE188)  */
JLDBSIM_p = (ILDBSIM.data.mode1);
{ 
(*Circuit) = (*(&((*(&((*(&(JLDBSIM_p->Bind)))->Node)))->Circuit)));
 /* line 243: */
 /* line 244: */
GLDBSIM = A68_TRUE;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
} 
A_PROC_EXIT(simtablelookupcircuitbybase);
return( GLDBSIM );
} 
#undef NL

A68_BOOL  NLDBSIM_simtablelookuppathbybase(A68_INT  Base, A68_INT  Scope, A68_188 ** Path)
{ 
A68_INT  OLDBSIM_index;
A68_BOOL  PLDBSIM;  /* clause result */
A68_BOOL  QLDBSIM;  /* clause result */
A68_192  RLDBSIM;  /* OPERATORS - simple index */
A68_189  SLDBSIM;  /* united object - for case conformity */
A68_188 * TLDBSIM_p;
A_PROC_ENTRY(simtablelookuppathbybase);
 /* line 247: */
{ 
OLDBSIM_index = HHDBSIM_findbaseinscope(Base, Scope);
 /* line 248: */
PLDBSIM = (OLDBSIM_index==0);
if ( PLDBSIM )
{ 
 /* line 249: */
 /* line 250: */
QLDBSIM = A68_FALSE;
} 
else
{ 
 /* line 251: */
RLDBSIM = (*(&((&LGDBSIM_simtable)->Table))) ;
SLDBSIM = (*(&((&A_VINDEX(RLDBSIM,OLDBSIM_index))->Value))) ;
switch ( SLDBSIM.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26,REF MODE26,CHAR,REF MODE187,REF MODE188)  */
TLDBSIM_p = (SLDBSIM.data.mode1);
{ 
(*Path) = TLDBSIM_p;
 /* line 252: */
 /* line 253: */
QLDBSIM = A68_TRUE;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
} 
A_PROC_EXIT(simtablelookuppathbybase);
return( QLDBSIM );
} 
#undef NL

A68_BOOL  XLDBSIM_simtablelookupsvalue(A68_VC  Name, A68_INT  Scope, A68_131 * Svalue)
{ 
A68_INT  YLDBSIM_index;
A68_BOOL  ZLDBSIM;  /* clause result */
A68_BOOL  AMDBSIM;  /* clause result */
A68_192  BMDBSIM;  /* OPERATORS - simple index */
A68_189  CMDBSIM;  /* united object - for case conformity */
A68_131  DMDBSIM_sv;
A_PROC_ENTRY(simtablelookupsvalue);
 /* line 256: */
{ 
YLDBSIM_index = XGDBSIM_findnameinscope(Name, Scope);
 /* line 257: */
ZLDBSIM = (YLDBSIM_index==0);
if ( ZLDBSIM )
{ 
 /* line 258: */
 /* line 259: */
AMDBSIM = A68_FALSE;
} 
else
{ 
 /* line 260: */
BMDBSIM = (*(&((&LGDBSIM_simtable)->Table))) ;
CMDBSIM = (*(&((&A_VINDEX(BMDBSIM,YLDBSIM_index))->Value))) ;
switch ( CMDBSIM.mode )
{ 
case 3: /* REF STRUCT(MODE119)  */
case 4: /* REF STRUCT(REF MODE115,INT)  */
case 5: /* REF STRUCT(REF MODE116,CHAR)  */
case 6: /* REF STRUCT(REF MODE117,REF MODE26)  */
case 7: /* REF STRUCT(REF MODE118,INT,MODE131)  */
case 8: /* REF STRUCT(MODE131,REF MODE132)  */
case 9: /* REF STRUCT(MODE131,MODE131)  */
case 10: /* STRUCT(INT)  */
case 11: /* STRUCT(INT)  */
A_UNCPY(DMDBSIM_sv,CMDBSIM);
DMDBSIM_sv.mode -= 2;
{ 
(*Svalue) = DMDBSIM_sv;
 /* line 261: */
AMDBSIM = A68_TRUE;
} 
break;
default: 
 /* line 262: */
 /* line 263: */
AMDBSIM = A68_FALSE;
break;
} 
} 
} 
A_PROC_EXIT(simtablelookupsvalue);
return( AMDBSIM );
} 
#undef NL

A68_BOOL  HMDBSIM_simtablelookupint(A68_VC  Name, A68_INT  Scope, A68_INT * Int)
{ 
A68_INT  IMDBSIM_index;
A68_BOOL  JMDBSIM;  /* clause result */
A68_BOOL  KMDBSIM;  /* clause result */
A68_192  LMDBSIM;  /* OPERATORS - simple index */
A68_189  MMDBSIM;  /* united object - for case conformity */
A68_INT  NMDBSIM_i;
A_PROC_ENTRY(simtablelookupint);
 /* line 266: */
{ 
IMDBSIM_index = XGDBSIM_findnameinscope(Name, Scope);
 /* line 267: */
JMDBSIM = (IMDBSIM_index==0);
if ( JMDBSIM )
{ 
 /* line 268: */
 /* line 269: */
KMDBSIM = A68_FALSE;
} 
else
{ 
 /* line 270: */
LMDBSIM = (*(&((&LGDBSIM_simtable)->Table))) ;
MMDBSIM = (*(&((&A_VINDEX(LMDBSIM,IMDBSIM_index))->Value))) ;
switch ( MMDBSIM.mode )
{ 
case 2: /* INT */
NMDBSIM_i = (MMDBSIM.data.mode2);
{ 
(*Int) = NMDBSIM_i;
 /* line 271: */
KMDBSIM = A68_TRUE;
} 
break;
default: 
 /* line 272: */
 /* line 273: */
KMDBSIM = A68_FALSE;
break;
} 
} 
} 
A_PROC_EXIT(simtablelookupint);
return( KMDBSIM );
} 
#undef NL

A68_VOID  PMDBSIM_simtablestartlistingpathnames(void)
{ 
A_PROC_ENTRY(simtablestartlistingpathnames);
OMDBSIM_nextpathname = 0;
A_PROC_EXIT(simtablestartlistingpathnames);
return;
} 
#undef NL

A68_BOOL  QMDBSIM_simtablemorepathnames(void)
{ 
A68_BOOL  RMDBSIM_found;
A68_BOOL  SMDBSIM;  /* optbool result */
A68_192  TMDBSIM;  /* OPERATORS - simple index */
A68_189  UMDBSIM;  /* united object - for case conformity */
A68_BOOL  VMDBSIM;  /* clause result */
A_PROC_ENTRY(simtablemorepathnames);
{ 
RMDBSIM_found = A68_FALSE;
 /* line 282: */
for ( ;; )
{ 
SMDBSIM = !RMDBSIM_found;
if ( SMDBSIM )
{SMDBSIM = ((OMDBSIM_nextpathname+=1)<=(*(&((&LGDBSIM_simtable)->Top))));
}
 /* line 283: */
if ( !(SMDBSIM) ) break;
 /* line 284: */
TMDBSIM = (*(&((&LGDBSIM_simtable)->Table))) ;
UMDBSIM = (*(&((&A_VINDEX(TMDBSIM,OMDBSIM_nextpathname))->Value))) ;
switch ( UMDBSIM.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26,REF MODE26,CHAR,REF MODE187,REF MODE188)  */
 /* line 285: */
 /* line 286: */
RMDBSIM_found = A68_TRUE;
break;
default: 
 /* line 287: */
/*SKIP*/;
break;
} 
}
 /* line 288: */
 /* line 289: */
VMDBSIM = RMDBSIM_found;
} 
A_PROC_EXIT(simtablemorepathnames);
return( VMDBSIM );
} 
#undef NL

A68_VOID  WMDBSIM_simtablenextpathname(A68_VC  *ReturnedValue)
{ 
A68_VC  XMDBSIM;  /* clause result */
A68_192  YMDBSIM;  /* OPERATORS - simple index */
A_PROC_ENTRY(simtablenextpathname);
YMDBSIM = (*(&((&LGDBSIM_simtable)->Table))) ;
XMDBSIM = (*(&((&A_VINDEX(YMDBSIM,OMDBSIM_nextpathname))->Name)));
A_PROC_EXIT(simtablenextpathname);
*ReturnedValue = (XMDBSIM);
return;
} 
#undef NL

A68_188 * ZMDBSIM_simtablenextpath(void)
{ 
A68_192  ANDBSIM;  /* OPERATORS - simple index */
A68_189  BNDBSIM;  /* united object - for case conformity */
A68_188 * CNDBSIM_p;
A68_188 * DNDBSIM;  /* clause result */
A_PROC_ENTRY(simtablenextpath);
 /* line 296: */
ANDBSIM = (*(&((&LGDBSIM_simtable)->Table))) ;
BNDBSIM = (*(&((&A_VINDEX(ANDBSIM,OMDBSIM_nextpathname))->Value))) ;
switch ( BNDBSIM.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26,REF MODE26,CHAR,REF MODE187,REF MODE188)  */
CNDBSIM_p = (BNDBSIM.data.mode1);
 /* line 297: */
DNDBSIM = CNDBSIM_p;
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(simtablenextpath);
return( DNDBSIM );
} 
#undef NL

A68_VOID  FNDBSIM_simtablestartlistingintnames(void)
{ 
A_PROC_ENTRY(simtablestartlistingintnames);
ENDBSIM_nextintname = 0;
A_PROC_EXIT(simtablestartlistingintnames);
return;
} 
#undef NL

A68_BOOL  GNDBSIM_simtablemoreintnames(void)
{ 
A68_BOOL  HNDBSIM_found;
A68_BOOL  INDBSIM;  /* optbool result */
A68_192  JNDBSIM;  /* OPERATORS - simple index */
A68_189  KNDBSIM;  /* united object - for case conformity */
A68_BOOL  LNDBSIM;  /* clause result */
A_PROC_ENTRY(simtablemoreintnames);
{ 
HNDBSIM_found = A68_FALSE;
 /* line 306: */
for ( ;; )
{ 
INDBSIM = !HNDBSIM_found;
if ( INDBSIM )
{INDBSIM = ((ENDBSIM_nextintname+=1)<=(*(&((&LGDBSIM_simtable)->Top))));
}
 /* line 307: */
if ( !(INDBSIM) ) break;
 /* line 308: */
JNDBSIM = (*(&((&LGDBSIM_simtable)->Table))) ;
KNDBSIM = (*(&((&A_VINDEX(JNDBSIM,ENDBSIM_nextintname))->Value))) ;
switch ( KNDBSIM.mode )
{ 
case 2: /* INT */
 /* line 309: */
 /* line 310: */
HNDBSIM_found = A68_TRUE;
break;
default: 
 /* line 311: */
/*SKIP*/;
break;
} 
}
 /* line 312: */
 /* line 313: */
LNDBSIM = HNDBSIM_found;
} 
A_PROC_EXIT(simtablemoreintnames);
return( LNDBSIM );
} 
#undef NL

A68_VOID  MNDBSIM_simtablenextintname(A68_VC  *ReturnedValue)
{ 
A68_VC  NNDBSIM;  /* clause result */
A68_192  ONDBSIM;  /* OPERATORS - simple index */
A_PROC_ENTRY(simtablenextintname);
ONDBSIM = (*(&((&LGDBSIM_simtable)->Table))) ;
NNDBSIM = (*(&((&A_VINDEX(ONDBSIM,ENDBSIM_nextintname))->Name)));
A_PROC_EXIT(simtablenextintname);
*ReturnedValue = (NNDBSIM);
return;
} 
#undef NL

A68_VOID  QNDBSIM_simtablestartlistingsvaluenames(void)
{ 
A_PROC_ENTRY(simtablestartlistingsvaluenames);
PNDBSIM_nextsvaluename = 0;
A_PROC_EXIT(simtablestartlistingsvaluenames);
return;
} 
#undef NL

A68_BOOL  RNDBSIM_simtablemoresvaluenames(void)
{ 
A68_BOOL  SNDBSIM_found;
A68_BOOL  TNDBSIM;  /* optbool result */
A68_192  UNDBSIM;  /* OPERATORS - simple index */
A68_189  VNDBSIM;  /* united object - for case conformity */
A68_BOOL  WNDBSIM;  /* clause result */
A_PROC_ENTRY(simtablemoresvaluenames);
{ 
SNDBSIM_found = A68_FALSE;
 /* line 326: */
for ( ;; )
{ 
TNDBSIM = !SNDBSIM_found;
if ( TNDBSIM )
{TNDBSIM = ((PNDBSIM_nextsvaluename+=1)<=(*(&((&LGDBSIM_simtable)->Top))));
}
 /* line 327: */
if ( !(TNDBSIM) ) break;
 /* line 328: */
UNDBSIM = (*(&((&LGDBSIM_simtable)->Table))) ;
VNDBSIM = (*(&((&A_VINDEX(UNDBSIM,PNDBSIM_nextsvaluename))->Value))) ;
switch ( VNDBSIM.mode )
{ 
case 3: /* REF STRUCT(MODE119)  */
case 4: /* REF STRUCT(REF MODE115,INT)  */
case 5: /* REF STRUCT(REF MODE116,CHAR)  */
case 6: /* REF STRUCT(REF MODE117,REF MODE26)  */
case 7: /* REF STRUCT(REF MODE118,INT,MODE131)  */
case 8: /* REF STRUCT(MODE131,REF MODE132)  */
case 9: /* REF STRUCT(MODE131,MODE131)  */
case 10: /* STRUCT(INT)  */
case 11: /* STRUCT(INT)  */
 /* line 329: */
 /* line 330: */
SNDBSIM_found = A68_TRUE;
break;
default: 
 /* line 331: */
/*SKIP*/;
break;
} 
}
 /* line 332: */
 /* line 333: */
WNDBSIM = SNDBSIM_found;
} 
A_PROC_EXIT(simtablemoresvaluenames);
return( WNDBSIM );
} 
#undef NL

A68_VOID  XNDBSIM_simtablenextsvaluename(A68_VC  *ReturnedValue)
{ 
A68_VC  YNDBSIM;  /* clause result */
A68_192  ZNDBSIM;  /* OPERATORS - simple index */
A_PROC_ENTRY(simtablenextsvaluename);
ZNDBSIM = (*(&((&LGDBSIM_simtable)->Table))) ;
YNDBSIM = (*(&((&A_VINDEX(ZNDBSIM,PNDBSIM_nextsvaluename))->Name)));
A_PROC_EXIT(simtablenextsvaluename);
*ReturnedValue = (YNDBSIM);
return;
} 
#undef NL
 /* line 343: */
 /* line 344: */
 /* line 345: */

A68_VOID  HODBSIM_simtablesavestate(A68_207  Writepathlist, A68_43  Writeid, A68_208  Writeint, A68_209  Writesvalue)
{ 
A68_INT  IODBSIM_i;
A68_INT  JODBSIM;  /* to part of loop */
A68_192  KODBSIM;  /* OPERATORS - simple index */
A68_192  LODBSIM;  /* OPERATORS - simple index */
A68_192  MODBSIM;  /* OPERATORS - simple index */
A68_189  NODBSIM;  /* united object - for case conformity */
A68_188 * OODBSIM_p;
A68_INT  PODBSIM_i;
A68_131  QODBSIM_sv;
A_PROC_ENTRY(simtablesavestate);
 /* line 346: */
 /* line 347: */
{ 
A_CALLPROC(Writeint,((*(&((&LGDBSIM_simtable)->Table))).upb),((*(&((&LGDBSIM_simtable)->Table))).upb,(Writeint).nonlocals));
 /* line 348: */
A_CALLPROC(Writeint,((*(&((&LGDBSIM_simtable)->Top)))),((*(&((&LGDBSIM_simtable)->Top))),(Writeint).nonlocals));
 /* line 349: */
JODBSIM = (*(&((&LGDBSIM_simtable)->Top)));
for ( IODBSIM_i = 1;
IODBSIM_i <= JODBSIM;
IODBSIM_i += 1 )
{ 
 /* line 351: */
KODBSIM = (*(&((&LGDBSIM_simtable)->Table))) ;
A_CALLPROC(Writeid,((*(&((&A_VINDEX(KODBSIM,IODBSIM_i))->Name)))),((*(&((&A_VINDEX(KODBSIM,IODBSIM_i))->Name))),(Writeid).nonlocals));
 /* line 352: */
LODBSIM = (*(&((&LGDBSIM_simtable)->Table))) ;
A_CALLPROC(Writeint,((*(&((&A_VINDEX(LODBSIM,IODBSIM_i))->Scope)))),((*(&((&A_VINDEX(LODBSIM,IODBSIM_i))->Scope))),(Writeint).nonlocals));
 /* line 353: */
 /* line 354: */
MODBSIM = (*(&((&LGDBSIM_simtable)->Table))) ;
NODBSIM = (*(&((&A_VINDEX(MODBSIM,IODBSIM_i))->Value))) ;
switch ( NODBSIM.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26,REF MODE26,CHAR,REF MODE187,REF MODE188)  */
OODBSIM_p = (NODBSIM.data.mode1);
{ 
A_CALLPROC(Writeint,(AODBSIM_savepath),(AODBSIM_savepath,(Writeint).nonlocals));
 /* line 355: */
A_CALLPROC(Writepathlist,(OODBSIM_p),(OODBSIM_p,(Writepathlist).nonlocals));
} 
break;
case 2: /* INT */
PODBSIM_i = (NODBSIM.data.mode2);
{ 
A_CALLPROC(Writeint,(BODBSIM_saveint),(BODBSIM_saveint,(Writeint).nonlocals));
 /* line 356: */
A_CALLPROC(Writeint,(PODBSIM_i),(PODBSIM_i,(Writeint).nonlocals));
} 
break;
case 3: /* REF STRUCT(MODE119)  */
case 4: /* REF STRUCT(REF MODE115,INT)  */
case 5: /* REF STRUCT(REF MODE116,CHAR)  */
case 6: /* REF STRUCT(REF MODE117,REF MODE26)  */
case 7: /* REF STRUCT(REF MODE118,INT,MODE131)  */
case 8: /* REF STRUCT(MODE131,REF MODE132)  */
case 9: /* REF STRUCT(MODE131,MODE131)  */
case 10: /* STRUCT(INT)  */
case 11: /* STRUCT(INT)  */
A_UNCPY(QODBSIM_sv,NODBSIM);
QODBSIM_sv.mode -= 2;
{ 
A_CALLPROC(Writeint,(CODBSIM_savesvalue),(CODBSIM_savesvalue,(Writeint).nonlocals));
 /* line 357: */
 /* line 358: */
A_CALLPROC(Writesvalue,(QODBSIM_sv),(QODBSIM_sv,(Writesvalue).nonlocals));
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
}
 /* line 359: */
} 
A_PROC_EXIT(simtablesavestate);
return;
} 
#undef NL
 /* line 363: */
 /* line 364: */
 /* line 365: */

A68_VOID  VODBSIM_simtablerestorestate(A68_206  Readpathlist, A68_105  Readid, A68_102  Readint, A68_211  Readsvalue)
{ 
A68_INT  WODBSIM_upb;
A68_INT * XODBSIM;  /* YIELD */
A68_195  ZODBSIM_generator;   /* proc value of non-global proc */
A68_192  EPDBSIM;  /* avoid structure result */
A68_192 * FPDBSIM;  /* YIELD */
A68_INT  GPDBSIM_i;
A68_INT  HPDBSIM;  /* to part of loop */
A68_192  IPDBSIM;  /* OPERATORS - simple index */
A68_VC  JPDBSIM;  /* avoid structure result */
A68_VC * KPDBSIM;  /* YIELD */
A68_192  LPDBSIM;  /* OPERATORS - simple index */
A68_INT * MPDBSIM;  /* YIELD */
A68_189  NPDBSIM;  /* clause result */
A68_189  OPDBSIM;  /* OPERATORS - mode -> union mode */
A68_188 * PPDBSIM;  /* YIELD */
A68_189  QPDBSIM;  /* OPERATORS - mode -> union mode */
A68_INT  RPDBSIM;  /* YIELD */
A68_131  SPDBSIM;  /* avoid structure result */
A68_189  TPDBSIM;  /* OPERATORS - unite union */
A68_192  UPDBSIM;  /* OPERATORS - simple index */
A68_189 * VPDBSIM;  /* YIELD */
A_PROC_ENTRY(simtablerestorestate);
 /* line 366: */
 /* line 368: */
{ 
WODBSIM_upb = A_CALLPROC(Readint,(),((Readint).nonlocals));
 /* line 369: */
XODBSIM = (&((&LGDBSIM_simtable)->Top)) ;
(*XODBSIM) = A_CALLPROC(Readint,(),((Readint).nonlocals));
 /* line 370: */
A_CLOSURE( ZODBSIM_generator, APDBSIM_generator, BPDBSIM_generator );
(( BPDBSIM_generator * ) ( ZODBSIM_generator.nonlocals )) -> WODBSIM_upb = WODBSIM_upb;
A_CALLPROC(ZODBSIM_generator,(A68_FALSE, &EPDBSIM),(A68_FALSE, &EPDBSIM,(ZODBSIM_generator).nonlocals));
FPDBSIM = (&((&LGDBSIM_simtable)->Table)) ;
(*FPDBSIM) = EPDBSIM;
 /* line 371: */
HPDBSIM = (*(&((&LGDBSIM_simtable)->Top)));
for ( GPDBSIM_i = 1;
GPDBSIM_i <= HPDBSIM;
GPDBSIM_i += 1 )
{ 
 /* line 373: */
IPDBSIM = (*(&((&LGDBSIM_simtable)->Table))) ;
A_CALLPROC(Readid,( &JPDBSIM),( &JPDBSIM,(Readid).nonlocals));
KPDBSIM = (&((&A_VINDEX(IPDBSIM,GPDBSIM_i))->Name)) ;
(*KPDBSIM) = JPDBSIM;
 /* line 374: */
LPDBSIM = (*(&((&LGDBSIM_simtable)->Table))) ;
MPDBSIM = (&((&A_VINDEX(LPDBSIM,GPDBSIM_i))->Scope)) ;
(*MPDBSIM) = A_CALLPROC(Readint,(),((Readint).nonlocals));
 /* line 375: */
 /* line 376: */
 /* line 377: */
switch ( A_CALLPROC(Readint,(),((Readint).nonlocals)) )
{ 
case 1: 
 /* line 378: */
PPDBSIM = A_CALLPROC(Readpathlist,(),((Readpathlist).nonlocals)) ;
NPDBSIM = A_UNITE(OPDBSIM,mode1,1,PPDBSIM);
break;
case 2: 
 /* line 380: */
RPDBSIM = A_CALLPROC(Readint,(),((Readint).nonlocals)) ;
NPDBSIM = A_UNITE(QPDBSIM,mode2,2,RPDBSIM);
break;
case 3: 
 /* line 381: */
A_CALLPROC(Readsvalue,( &SPDBSIM),( &SPDBSIM,(Readsvalue).nonlocals));
NPDBSIM = A_UUNITE(TPDBSIM,2,SPDBSIM);
break;
default: 
A_IMP_SKIP ;
break;
} 
UPDBSIM = (*(&((&LGDBSIM_simtable)->Table))) ;
VPDBSIM = (&((&A_VINDEX(UPDBSIM,GPDBSIM_i))->Value)) ;
(*VPDBSIM) = NPDBSIM;
}
 /* line 382: */
 /* line 385: */
} 
A_PROC_EXIT(simtablerestorestate);
return;
} 
#undef NL
 /* line 1: */
 /* line 4: */
void ZFDBSIM(void)   /* initialise DECS simtable */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/simtable.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/kernel.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
XWBBSIM();   /* USE kernel */
JSCAOST();   /* USE basics */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/simtable.a68";
A_config.translation_time = "Tue Apr  4 11:14:07 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "YFDBSIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:14:07 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS simtable);
UEAALIB_a68config(LGAALIB_configinfo, DGDBSIM);
 /* line 60: */
 /* line 63: */
 /* line 67: */
 /* line 68: */
 /* line 69: */
 /* line 73: */
HGDBSIM_nilpath = (A68_188 *)A68_NIL;
 /* line 74: */
IGDBSIM_nilbind = (A68_187 *)A68_NIL;
 /* line 96: */
 /* line 97: */
 /* line 117: */
 /* line 118: */
 /* line 119: */
 /* line 120: */
 /* line 125: */
 /* line 126: */
 /* line 127: */
 /* line 128: */
 /* line 130: */
 /* line 135: */
 /* line 148: */
 /* line 166: */
 /* line 167: */
 /* line 174: */
 /* line 175: */
 /* line 176: */
 /* line 181: */
 /* line 182: */
 /* line 184: */
 /* line 193: */
 /* line 203: */
 /* line 211: */
 /* line 227: */
 /* line 237: */
 /* line 246: */
 /* line 255: */
 /* line 265: */
 /* line 275: */
 /* line 276: */
 /* line 277: */
 /* line 279: */
 /* line 280: */
 /* line 281: */
 /* line 291: */
 /* line 292: */
 /* line 294: */
 /* line 295: */
 /* line 299: */
 /* line 300: */
 /* line 301: */
 /* line 303: */
 /* line 304: */
 /* line 305: */
 /* line 315: */
 /* line 316: */
 /* line 319: */
 /* line 320: */
 /* line 321: */
 /* line 323: */
 /* line 324: */
 /* line 325: */
 /* line 335: */
 /* line 336: */
 /* line 338: */
 /* line 339: */
 /* line 340: */
 /* line 341: */
 /* line 342: */
 /* line 361: */
 /* line 362: */
 /* line 424: */
A_PROC_EXIT(DECS simtable);
} 
#undef NL
/* end of translation of ./a68files/simtable.a68 */
