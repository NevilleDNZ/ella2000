
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
/* UNAME:DFBASIM */
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

A_PROCEDURE(A68_VOID ,A68t158,(void),(void *));
typedef struct A68t158  A68_158 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t159,(struct A68t158 ),(struct A68t158 ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(MODE158) VOID */

A_PROCEDURE(A68_VOID ,A68t160,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t160  A68_160 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t161,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,53,A68t162);
typedef struct A68t162  A68_162 ;    /* STRUCT 53 CHAR */

A_PROCEDURE(A68_VOID ,A68t163,(A68_VC ,struct A68t36 ),(A68_VC ,struct A68t36 ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(REF MODE26,MODE36) VOID */

A_PROCEDURE(A68_CHAR ,A68t164,(struct A68t163 ,struct A68t36 ),(struct A68t163 ,struct A68t36 ,void *));
typedef struct A68t164  A68_164 ;    /* PROC(MODE163,MODE36) CHAR */

A_PROCEDURE(A68_VOID ,A68t165,(struct A68t163 ,A68_INT ,struct A68t36 ,A68_VC *),(struct A68t163 ,A68_INT ,struct A68t36 ,A68_VC *,void *));
typedef struct A68t165  A68_165 ;    /* PROC(MODE163,INT,MODE36) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t166,(struct A68t163 ,struct A68t36 ),(struct A68t163 ,struct A68t36 ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(MODE163,MODE36) INT */

A_PROCEDURE(A68_VOID ,A68t167,(struct A68t163 ,struct A68t36 ,A68_VC *),(struct A68t163 ,struct A68t36 ,A68_VC *,void *));
typedef struct A68t167  A68_167 ;    /* PROC(MODE163,MODE36) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t168,(struct A68t163 ,struct A68t36 ),(struct A68t163 ,struct A68t36 ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(MODE163,MODE36) BOOL */
A_ISTRUCT(A68_CHAR ,13,A68t169);
typedef struct A68t169  A68_169 ;    /* STRUCT 13 CHAR */

A_PROCEDURE(A68_VOID ,A68t170,(A68_CHAR ,struct A68t163 ,struct A68t36 ),(A68_CHAR ,struct A68t163 ,struct A68t36 ,void *));
typedef struct A68t170  A68_170 ;    /* PROC(CHAR,MODE163,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t171,(A68_VC ,struct A68t163 ,struct A68t36 ),(A68_VC ,struct A68t163 ,struct A68t36 ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(REF MODE26,MODE163,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t172,(A68_INT ,struct A68t163 ,struct A68t36 ),(A68_INT ,struct A68t163 ,struct A68t36 ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(INT,MODE163,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t173,(A68_BOOL ,struct A68t163 ,struct A68t36 ),(A68_BOOL ,struct A68t163 ,struct A68t36 ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(BOOL,MODE163,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t174,(struct A68t163 ,struct A68t36 ,struct A68t119 *),(struct A68t163 ,struct A68t36 ,struct A68t119 *,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE163,MODE36) MODE119 */

A_PROCEDURE(A68_VOID ,A68t175,(struct A68t163 ,struct A68t36 ,struct A68t115 *),(struct A68t163 ,struct A68t36 ,struct A68t115 *,void *));
typedef struct A68t175  A68_175 ;    /* PROC(MODE163,MODE36) MODE115 */

A_PROCEDURE(A68_VOID ,A68t176,(struct A68t163 ,struct A68t36 ,struct A68t116 *),(struct A68t163 ,struct A68t36 ,struct A68t116 *,void *));
typedef struct A68t176  A68_176 ;    /* PROC(MODE163,MODE36) MODE116 */

A_PROCEDURE(A68_VOID ,A68t177,(struct A68t163 ,struct A68t36 ,struct A68t117 *),(struct A68t163 ,struct A68t36 ,struct A68t117 *,void *));
typedef struct A68t177  A68_177 ;    /* PROC(MODE163,MODE36) MODE117 */

A_PROCEDURE(struct A68t118 *,A68t178,(struct A68t163 ,struct A68t36 ),(struct A68t163 ,struct A68t36 ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(MODE163,MODE36) REF MODE118 */

A_PROCEDURE(A68_VOID ,A68t179,(struct A68t163 ,struct A68t36 ,struct A68t121 *),(struct A68t163 ,struct A68t36 ,struct A68t121 *,void *));
typedef struct A68t179  A68_179 ;    /* PROC(MODE163,MODE36) MODE121 */

A_PROCEDURE(struct A68t122 *,A68t180,(struct A68t163 ,struct A68t36 ),(struct A68t163 ,struct A68t36 ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(MODE163,MODE36) REF MODE122 */

A_PROCEDURE(A68_VOID ,A68t181,(struct A68t163 ,struct A68t36 ,struct A68t120 *),(struct A68t163 ,struct A68t36 ,struct A68t120 *,void *));
typedef struct A68t181  A68_181 ;    /* PROC(MODE163,MODE36) MODE120 */

A_PROCEDURE(A68_VOID ,A68t182,(struct A68t119 ,struct A68t163 ,struct A68t36 ),(struct A68t119 ,struct A68t163 ,struct A68t36 ,void *));
typedef struct A68t182  A68_182 ;    /* PROC(MODE119,MODE163,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t183,(struct A68t115 ,struct A68t163 ,struct A68t36 ),(struct A68t115 ,struct A68t163 ,struct A68t36 ,void *));
typedef struct A68t183  A68_183 ;    /* PROC(MODE115,MODE163,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t184,(struct A68t116 ,struct A68t163 ,struct A68t36 ),(struct A68t116 ,struct A68t163 ,struct A68t36 ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(MODE116,MODE163,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t185,(struct A68t117 ,struct A68t163 ,struct A68t36 ),(struct A68t117 ,struct A68t163 ,struct A68t36 ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(MODE117,MODE163,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t186,(struct A68t118 *,struct A68t163 ,struct A68t36 ),(struct A68t118 *,struct A68t163 ,struct A68t36 ,void *));
typedef struct A68t186  A68_186 ;    /* PROC(REF MODE118,MODE163,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t187,(struct A68t121 ,struct A68t163 ,struct A68t36 ),(struct A68t121 ,struct A68t163 ,struct A68t36 ,void *));
typedef struct A68t187  A68_187 ;    /* PROC(MODE121,MODE163,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t188,(struct A68t122 *,struct A68t163 ,struct A68t36 ),(struct A68t122 *,struct A68t163 ,struct A68t36 ,void *));
typedef struct A68t188  A68_188 ;    /* PROC(REF MODE122,MODE163,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t189,(struct A68t120 ,struct A68t163 ,struct A68t36 ),(struct A68t120 ,struct A68t163 ,struct A68t36 ,void *));
typedef struct A68t189  A68_189 ;    /* PROC(MODE120,MODE163,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t190,(struct A68t135 ,struct A68t163 ,struct A68t36 ),(struct A68t135 ,struct A68t163 ,struct A68t36 ,void *));
typedef struct A68t190  A68_190 ;    /* PROC(MODE135,MODE163,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t191,(struct A68t163 ,struct A68t36 ,struct A68t135 *),(struct A68t163 ,struct A68t36 ,struct A68t135 *,void *));
typedef struct A68t191  A68_191 ;    /* PROC(MODE163,MODE36) MODE135 */

A_PROCEDURE(A68_VOID ,A68t192,(A68_BOOL ,struct A68t136 *),(A68_BOOL ,struct A68t136 *,void *));
typedef struct A68t192  A68_192 ;    /* PROC(BOOL) MODE136 */

A_PROCEDURE(A68_VOID ,A68t193,(struct A68t137 ,struct A68t163 ,struct A68t36 ),(struct A68t137 ,struct A68t163 ,struct A68t36 ,void *));
typedef struct A68t193  A68_193 ;    /* PROC(MODE137,MODE163,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t194,(struct A68t163 ,struct A68t36 ,struct A68t137 *),(struct A68t163 ,struct A68t36 ,struct A68t137 *,void *));
typedef struct A68t194  A68_194 ;    /* PROC(MODE163,MODE36) MODE137 */

A_PROCEDURE(A68_VOID ,A68t195,(struct A68t138 ,struct A68t163 ,struct A68t36 ),(struct A68t138 ,struct A68t163 ,struct A68t36 ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(MODE138,MODE163,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t196,(struct A68t163 ,struct A68t36 ,struct A68t138 *),(struct A68t163 ,struct A68t36 ,struct A68t138 *,void *));
typedef struct A68t196  A68_196 ;    /* PROC(MODE163,MODE36) MODE138 */

A_PROCEDURE(A68_VOID ,A68t197,(struct A68t139 ,struct A68t163 ,struct A68t36 ),(struct A68t139 ,struct A68t163 ,struct A68t36 ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(MODE139,MODE163,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t198,(struct A68t163 ,struct A68t36 ,struct A68t139 *),(struct A68t163 ,struct A68t36 ,struct A68t139 *,void *));
typedef struct A68t198  A68_198 ;    /* PROC(MODE163,MODE36) MODE139 */

A_PROCEDURE(A68_VOID ,A68t199,(A68_BOOL ,struct A68t140 *),(A68_BOOL ,struct A68t140 *,void *));
typedef struct A68t199  A68_199 ;    /* PROC(BOOL) MODE140 */

A_PROCEDURE(A68_VOID ,A68t200,(struct A68t141 ,struct A68t163 ,struct A68t36 ),(struct A68t141 ,struct A68t163 ,struct A68t36 ,void *));
typedef struct A68t200  A68_200 ;    /* PROC(MODE141,MODE163,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t201,(struct A68t163 ,struct A68t36 ,struct A68t141 *),(struct A68t163 ,struct A68t36 ,struct A68t141 *,void *));
typedef struct A68t201  A68_201 ;    /* PROC(MODE163,MODE36) MODE141 */

A_PROCEDURE(A68_VOID ,A68t202,(struct A68t144 ,struct A68t163 ,struct A68t36 ),(struct A68t144 ,struct A68t163 ,struct A68t36 ,void *));
typedef struct A68t202  A68_202 ;    /* PROC(MODE144,MODE163,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t203,(struct A68t163 ,struct A68t36 ,struct A68t144 *),(struct A68t163 ,struct A68t36 ,struct A68t144 *,void *));
typedef struct A68t203  A68_203 ;    /* PROC(MODE163,MODE36) MODE144 */
A_ISTRUCT(A68_CHAR ,12,A68t204);
typedef struct A68t204  A68_204 ;    /* STRUCT 12 CHAR */

A_PROCEDURE(A68_VOID ,A68t205,(struct A68t163 ,struct A68t36 ,struct A68t142 *),(struct A68t163 ,struct A68t36 ,struct A68t142 *,void *));
typedef struct A68t205  A68_205 ;    /* PROC(MODE163,MODE36) MODE142 */

A_PROCEDURE(A68_VOID ,A68t206,(struct A68t142 ,struct A68t163 ,struct A68t36 ),(struct A68t142 ,struct A68t163 ,struct A68t36 ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(MODE142,MODE163,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t207,(struct A68t163 ,struct A68t36 ,struct A68t143 *),(struct A68t163 ,struct A68t36 ,struct A68t143 *,void *));
typedef struct A68t207  A68_207 ;    /* PROC(MODE163,MODE36) MODE143 */

A_PROCEDURE(A68_VOID ,A68t208,(struct A68t143 ,struct A68t163 ,struct A68t36 ),(struct A68t143 ,struct A68t163 ,struct A68t36 ,void *));
typedef struct A68t208  A68_208 ;    /* PROC(MODE143,MODE163,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t209,(struct A68t163 ,struct A68t36 ,struct A68t145 *),(struct A68t163 ,struct A68t36 ,struct A68t145 *,void *));
typedef struct A68t209  A68_209 ;    /* PROC(MODE163,MODE36) MODE145 */

A_PROCEDURE(A68_VOID ,A68t210,(struct A68t145 ,struct A68t163 ,struct A68t36 ),(struct A68t145 ,struct A68t163 ,struct A68t36 ,void *));
typedef struct A68t210  A68_210 ;    /* PROC(MODE145,MODE163,MODE36) VOID */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from kebasics --- */
extern A68_118 * VSAASIM_nilsenum;
extern A68_122 * WSAASIM_nilsst;
extern A68_119  ZSAASIM_nullstype;
extern A68_119  CTAASIM_voidstype;
extern A68_137 * STAASIM_nilsram;
extern A68_VOID  ZBBASIM_signedtoword(A68_INT ,A68_VC );
extern A68_INT  HCBASIM_wordtosigned(A68_VC );
extern A68_VOID  NKDAOST_sysfault(A68_VC );
/* --- End of imports from kebasics --- */


/* --- Imports from basics --- */
extern A68_VOID  BTCAOST_makeid(A68_CHAR ,A68_VC *);
extern A68_VC  NTCAOST_nilid;
extern A68_VC  TTCAOST_nullid;
extern A68_INT  GJDAOST_byteswidth;
/* --- End of imports from basics --- */


/* --- Imports from putstrings --- */
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void JSAASIM(void);   /* kebasics */
extern void JSCAOST(void);   /* basics */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_162   HFBASIM = {"$Id: kesave.a68,v 34.2 1995/03/29 13:04:55 ella Exp $"}; 
A_GISVEC(A68_VC ,IFBASIM,HFBASIM,53)
static A68_169   AHBASIM = {"error in bool"}; 
A_GISVEC(A68_VC ,BHBASIM,AHBASIM,13)
#define GIBASIM_cnull 1
#define HIBASIM_cint 2
#define IIBASIM_cchar 3
#define JIBASIM_cstring 4
#define KIBASIM_cenum 5
#define LIBASIM_cfn 6
#define MIBASIM_cst 7
#define NIBASIM_crow 9
#define OIBASIM_cvoid 8
A68_174  PIBASIM_readstype;
static A68_169   DMBASIM = {"invalid stype"}; 
A_GISVEC(A68_VC ,EMBASIM,DMBASIM,13)
A68_182  GMBASIM_writestype;
#define BSBASIM_cbox 1
#define CSBASIM_cwire 2
#define DSBASIM_cline 3
static A68_204   TSBASIM = {"invalid node"}; 
A_GISVEC(A68_VC ,USBASIM,TSBASIM,12)
static A68_204   QTBASIM = {"invalid node"}; 
A_GISVEC(A68_VC ,RTBASIM,QTBASIM,12)
typedef struct   /* env of non-global proc */
{
int dummy;
} PFBASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  Length;
A_PAD_INT(PAD_46)
} DGBASIM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} THBASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  QOBASIM_upb;
A_PAD_INT(PAD_47)
} UOBASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  BRBASIM_upb;
A_PAD_INT(PAD_48)
} FRBASIM_generator;

A68_CHAR  LFBASIM_readchar(A68_163  Ferry, A68_36  Flt);

A_STATIC A68_VOID  OFBASIM_generator(A68_BOOL  MFBASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  ZFBASIM_readcharvec(A68_163  Ferry, A68_INT  Length, A68_36  Flt, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  CGBASIM_generator(A68_BOOL  AGBASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_INT  LGBASIM_readint(A68_163  Ferry, A68_36  Flt);

A68_VOID  RGBASIM_readid(A68_163  Ferry, A68_36  Flt, A68_VC  *ReturnedValue);

A68_BOOL  XGBASIM_readbool(A68_163  Ferry, A68_36  Flt);

A68_VOID  GHBASIM_writechar(A68_CHAR  C, A68_163  Ferry, A68_36  Flt);

A68_VOID  LHBASIM_writecharvec(A68_VC  Str, A68_163  Ferry, A68_36  Flt);

A68_VOID  PHBASIM_writeint(A68_INT  I, A68_163  Ferry, A68_36  Flt);

A_STATIC A68_VOID  SHBASIM_generator(A68_BOOL  QHBASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  BIBASIM_writeid(A68_VC  Id, A68_163  Ferry, A68_36  Flt);

A68_VOID  FIBASIM_writebool(A68_BOOL  Flag, A68_163  Ferry, A68_36  Flt);

A_STATIC A68_VOID  SIBASIM_readsint(A68_163  Ferry, A68_36  Flt, A68_115  *ReturnedValue);

A_STATIC A68_VOID  BJBASIM_readschar(A68_163  Ferry, A68_36  Flt, A68_116  *ReturnedValue);

A_STATIC A68_VOID  KJBASIM_readsstring(A68_163  Ferry, A68_36  Flt, A68_117  *ReturnedValue);

A_STATIC A68_118 * SJBASIM_readsenum(A68_163  Ferry, A68_36  Flt);

A_STATIC A68_VOID  GKBASIM_readsfn(A68_163  Ferry, A68_36  Flt, A68_121  *ReturnedValue);

A_STATIC A68_122 * PKBASIM_readsst(A68_163  Ferry, A68_36  Flt);

A_STATIC A68_VOID  ALBASIM_readsrow(A68_163  Ferry, A68_36  Flt, A68_120  *ReturnedValue);

A_STATIC A68_VOID  ILBASIM_anonymous(A68_163  Ferry, A68_36  Flt, A68_119  *ReturnedValue);

A_STATIC A68_VOID  KMBASIM_writesint(A68_115  S, A68_163  Ferry, A68_36  Flt);

A_STATIC A68_VOID  OMBASIM_writeschar(A68_116  S, A68_163  Ferry, A68_36  Flt);

A_STATIC A68_VOID  SMBASIM_writesstring(A68_117  S, A68_163  Ferry, A68_36  Flt);

A_STATIC A68_VOID  WMBASIM_writesenum(A68_118 * S, A68_163  Ferry, A68_36  Flt);

A_STATIC A68_VOID  CNBASIM_writesfn(A68_121  S, A68_163  Ferry, A68_36  Flt);

A_STATIC A68_VOID  GNBASIM_writesst(A68_122 * S, A68_163  Ferry, A68_36  Flt);

A_STATIC A68_VOID  MNBASIM_writesrow(A68_120  S, A68_163  Ferry, A68_36  Flt);

A_STATIC A68_VOID  QNBASIM_anonymous(A68_119  Stype, A68_163  Ferry, A68_36  Flt);

A68_VOID  FOBASIM_writewire(A68_135  Wire, A68_163  Ferry, A68_36  Flt);

A68_VOID  MOBASIM_readwire(A68_163  Ferry, A68_36  Flt, A68_135  *ReturnedValue);

A_STATIC A68_VOID  TOBASIM_generator(A68_BOOL  ROBASIM_anonymous, A68_136  *ReturnedValue, void *NonLocals);

A68_VOID  JPBASIM_writeram(A68_137  Ram, A68_163  Ferry, A68_36  Flt);

A68_VOID  MPBASIM_readram(A68_163  Ferry, A68_36  Flt, A68_137  *ReturnedValue);

A68_VOID  XPBASIM_writebinding(A68_138  Binding, A68_163  Ferry, A68_36  Flt);

A68_VOID  AQBASIM_readbinding(A68_163  Ferry, A68_36  Flt, A68_138  *ReturnedValue);

A68_VOID  LQBASIM_writefn(A68_139  Fn, A68_163  Ferry, A68_36  Flt);

A68_VOID  SQBASIM_readfn(A68_163  Ferry, A68_36  Flt, A68_139  *ReturnedValue);

A_STATIC A68_VOID  ERBASIM_generator(A68_BOOL  CRBASIM_anonymous, A68_140  *ReturnedValue, void *NonLocals);

A68_VOID  TRBASIM_writebox(A68_141  Box, A68_163  Ferry, A68_36  Flt);

A68_VOID  WRBASIM_readbox(A68_163  Ferry, A68_36  Flt, A68_141  *ReturnedValue);

A68_VOID  HSBASIM_writernode(A68_144  Node, A68_163  Ferry, A68_36  Flt);

A68_VOID  NSBASIM_readrnode(A68_163  Ferry, A68_36  Flt, A68_144  *ReturnedValue);

A_STATIC A68_VOID  ZSBASIM_readline(A68_163  Ferry, A68_36  Flt, A68_142  *ReturnedValue);

A_STATIC A68_VOID  HTBASIM_writeline(A68_142  Line, A68_163  Ferry, A68_36  Flt);

A_STATIC A68_VOID  KTBASIM_readnode(A68_163  Ferry, A68_36  Flt, A68_143  *ReturnedValue);

A_STATIC A68_VOID  WTBASIM_writenode(A68_143  Node, A68_163  Ferry, A68_36  Flt);

A68_VOID  CUBASIM_readmnode(A68_163  Ferry, A68_36  Flt, A68_145  *ReturnedValue);

A68_VOID  JUBASIM_writemnode(A68_145  Mnode, A68_163  Ferry, A68_36  Flt);

A_STATIC A68_VOID  OFBASIM_generator(A68_BOOL  MFBASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((PFBASIM_generator *)NonLocals)->x)
{ 
A68_VC  QFBASIM;  /* clause result */
A68_VC  RFBASIM;  /* OPERATORS - dynamic generator */
{ 
RFBASIM.upb = 1 ;
( MFBASIM_anonymous? A_VLOC(A68_CHAR ,RFBASIM): A_VHEAP(A68_CHAR ,RFBASIM) );
QFBASIM = RFBASIM;
} 
*ReturnedValue = (QFBASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  CGBASIM_generator(A68_BOOL  AGBASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((DGBASIM_generator *)NonLocals)->x)
{ 
A68_VC  EGBASIM;  /* clause result */
A68_VC  FGBASIM;  /* OPERATORS - dynamic generator */
{ 
FGBASIM.upb = NL(Length) ;
( AGBASIM_anonymous? A_VLOC(A68_CHAR ,FGBASIM): A_VHEAP(A68_CHAR ,FGBASIM) );
EGBASIM = FGBASIM;
} 
*ReturnedValue = (EGBASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  SHBASIM_generator(A68_BOOL  QHBASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((THBASIM_generator *)NonLocals)->x)
{ 
A68_VC  UHBASIM;  /* clause result */
A68_VC  VHBASIM;  /* OPERATORS - dynamic generator */
{ 
VHBASIM.upb = GJDAOST_byteswidth ;
( QHBASIM_anonymous? A_VLOC(A68_CHAR ,VHBASIM): A_VHEAP(A68_CHAR ,VHBASIM) );
UHBASIM = VHBASIM;
} 
*ReturnedValue = (UHBASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  TOBASIM_generator(A68_BOOL  ROBASIM_anonymous, A68_136  *ReturnedValue, void *NonLocals)
#define NL(x) (((UOBASIM_generator *)NonLocals)->x)
{ 
A68_136  VOBASIM;  /* clause result */
A68_136  WOBASIM;  /* OPERATORS - dynamic generator */
{ 
WOBASIM.upb = NL(QOBASIM_upb) ;
( ROBASIM_anonymous? A_VLOC(A68_134 ,WOBASIM): A_VHEAP(A68_134 ,WOBASIM) );
VOBASIM = WOBASIM;
} 
*ReturnedValue = (VOBASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  ERBASIM_generator(A68_BOOL  CRBASIM_anonymous, A68_140  *ReturnedValue, void *NonLocals)
#define NL(x) (((FRBASIM_generator *)NonLocals)->x)
{ 
A68_140  GRBASIM;  /* clause result */
A68_140  HRBASIM;  /* OPERATORS - dynamic generator */
{ 
HRBASIM.upb = NL(BRBASIM_upb) ;
( CRBASIM_anonymous? A_VLOC(A68_138 ,HRBASIM): A_VHEAP(A68_138 ,HRBASIM) );
GRBASIM = HRBASIM;
} 
*ReturnedValue = (GRBASIM);
return;
} 
#undef NL

A68_CHAR  LFBASIM_readchar(A68_163  Ferry, A68_36  Flt)
{ 
A68_31  NFBASIM_generator;   /* proc value of non-global proc */
A68_VC  TFBASIM;  /* avoid structure result */
A68_VC  SFBASIM_ans;
A68_CHAR  UFBASIM;  /* clause result */
A68_INT  VFBASIM;  /* YIELD */
A_PROC_ENTRY(readchar);
 /* line 73: */
 /* line 74: */
{ 
A_CLOSURE( NFBASIM_generator, OFBASIM_generator, PFBASIM_generator );
A_CALLPROC(NFBASIM_generator,(A68_TRUE, &TFBASIM),(A68_TRUE, &TFBASIM,(NFBASIM_generator).nonlocals));
SFBASIM_ans = TFBASIM;
 /* line 75: */
A_CALLPROC(Ferry,(SFBASIM_ans, Flt),(SFBASIM_ans, Flt,(Ferry).nonlocals));
 /* line 76: */
 /* line 77: */
VFBASIM = 1 ;
UFBASIM = (*(&A_VINDEX(SFBASIM_ans,VFBASIM)));
} 
A_PROC_EXIT(readchar);
return( UFBASIM );
} 
#undef NL

A68_VOID  ZFBASIM_readcharvec(A68_163  Ferry, A68_INT  Length, A68_36  Flt, A68_VC  *ReturnedValue)
{ 
A68_31  BGBASIM_generator;   /* proc value of non-global proc */
A68_VC  GGBASIM;  /* avoid structure result */
A68_VC  HGBASIM_ans;
A68_VC  IGBASIM;  /* clause result */
A_PROC_ENTRY(readcharvec);
 /* line 80: */
 /* line 81: */
{ 
A_CLOSURE( BGBASIM_generator, CGBASIM_generator, DGBASIM_generator );
(( DGBASIM_generator * ) ( BGBASIM_generator.nonlocals )) -> Length = Length;
A_CALLPROC(BGBASIM_generator,(A68_FALSE, &GGBASIM),(A68_FALSE, &GGBASIM,(BGBASIM_generator).nonlocals));
HGBASIM_ans = GGBASIM;
 /* line 82: */
A_CALLPROC(Ferry,(HGBASIM_ans, Flt),(HGBASIM_ans, Flt,(Ferry).nonlocals));
 /* line 83: */
 /* line 84: */
IGBASIM = HGBASIM_ans;
} 
A_PROC_EXIT(readcharvec);
*ReturnedValue = (IGBASIM);
return;
} 
#undef NL

A68_INT  LGBASIM_readint(A68_163  Ferry, A68_36  Flt)
{ 
A68_VC  MGBASIM;  /* avoid structure result */
A68_VC  NGBASIM_chars;
A68_INT  OGBASIM;  /* clause result */
A_PROC_ENTRY(readint);
 /* line 87: */
 /* line 88: */
{ 
ZFBASIM_readcharvec( Ferry, GJDAOST_byteswidth, Flt, &MGBASIM );
NGBASIM_chars = MGBASIM;
 /* line 89: */
 /* line 90: */
OGBASIM = HCBASIM_wordtosigned(NGBASIM_chars);
} 
A_PROC_EXIT(readint);
return( OGBASIM );
} 
#undef NL

A68_VOID  RGBASIM_readid(A68_163  Ferry, A68_36  Flt, A68_VC  *ReturnedValue)
{ 
A68_INT  SGBASIM_length;
A68_VC  TGBASIM;  /* clause result */
A68_VC  UGBASIM;  /* avoid structure result */
A_PROC_ENTRY(readid);
 /* line 93: */
 /* line 94: */
{ 
SGBASIM_length = LGBASIM_readint(Ferry, Flt);
 /* line 95: */
 /* line 97: */
if ( (SGBASIM_length==(-1)) )
{ 
TGBASIM = NTCAOST_nilid;
} 
else
{ 
 /* line 99: */
if ( (SGBASIM_length==0) )
{ 
 /* line 100: */
TGBASIM = TTCAOST_nullid;
} 
else
{ 
 /* line 101: */
 /* line 102: */
ZFBASIM_readcharvec( Ferry, SGBASIM_length, Flt, &UGBASIM );
TGBASIM = UGBASIM;
} 
} 
} 
A_PROC_EXIT(readid);
*ReturnedValue = (TGBASIM);
return;
} 
#undef NL

A68_BOOL  XGBASIM_readbool(A68_163  Ferry, A68_36  Flt)
{ 
A68_INT  YGBASIM_flag;
A68_BOOL  ZGBASIM;  /* clause result */
A68_BOOL  CHBASIM;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(readbool);
 /* line 105: */
 /* line 106: */
{ 
YGBASIM_flag = (A68_INT)(unsigned char)LFBASIM_readchar(Ferry, Flt);
 /* line 107: */
if ( (YGBASIM_flag==0) )
{ 
 /* line 108: */
ZGBASIM = A68_FALSE;
} 
else
{ 
if ( (YGBASIM_flag==1) )
{ 
 /* line 109: */
ZGBASIM = A68_TRUE;
} 
else
{ 
NKDAOST_sysfault(BHBASIM);
 /* line 110: */
 /* line 111: */
ZGBASIM = CHBASIM;
} 
} 
} 
A_PROC_EXIT(readbool);
return( ZGBASIM );
} 
#undef NL

A68_VOID  GHBASIM_writechar(A68_CHAR  C, A68_163  Ferry, A68_36  Flt)
{ 
A68_VC  HHBASIM;  /* avoid structure result */
A_PROC_ENTRY(writechar);
 /* line 118: */
BTCAOST_makeid( C, &HHBASIM );
A_CALLPROC(Ferry,(HHBASIM, Flt),(HHBASIM, Flt,(Ferry).nonlocals));
A_PROC_EXIT(writechar);
return;
} 
#undef NL

A68_VOID  LHBASIM_writecharvec(A68_VC  Str, A68_163  Ferry, A68_36  Flt)
{ 
A_PROC_ENTRY(writecharvec);
 /* line 121: */
A_CALLPROC(Ferry,(Str, Flt),(Str, Flt,(Ferry).nonlocals));
A_PROC_EXIT(writecharvec);
return;
} 
#undef NL

A68_VOID  PHBASIM_writeint(A68_INT  I, A68_163  Ferry, A68_36  Flt)
{ 
A68_31  RHBASIM_generator;   /* proc value of non-global proc */
A68_VC  XHBASIM;  /* avoid structure result */
A68_VC  WHBASIM_chars;
A_PROC_ENTRY(writeint);
 /* line 124: */
 /* line 125: */
{ 
A_CLOSURE( RHBASIM_generator, SHBASIM_generator, THBASIM_generator );
A_CALLPROC(RHBASIM_generator,(A68_TRUE, &XHBASIM),(A68_TRUE, &XHBASIM,(RHBASIM_generator).nonlocals));
WHBASIM_chars = XHBASIM;
 /* line 126: */
ZBBASIM_signedtoword(I, WHBASIM_chars);
 /* line 127: */
 /* line 128: */
LHBASIM_writecharvec(WHBASIM_chars, Ferry, Flt);
} 
A_PROC_EXIT(writeint);
return;
} 
#undef NL

A68_VOID  BIBASIM_writeid(A68_VC  Id, A68_163  Ferry, A68_36  Flt)
{ 
A_PROC_ENTRY(writeid);
 /* line 131: */
 /* line 132: */
if ( A_VSTRUCTCOMP(Id,NTCAOST_nilid) )
{ 
 /* line 133: */
PHBASIM_writeint((-1), Ferry, Flt);
} 
else
{ 
 /* line 134: */
if ( A_VC_EQ(Id,TTCAOST_nullid) )
{ 
 /* line 135: */
 /* line 136: */
PHBASIM_writeint(0, Ferry, Flt);
} 
else
{ 
PHBASIM_writeint(Id.upb, Ferry, Flt);
 /* line 137: */
 /* line 138: */
LHBASIM_writecharvec(Id, Ferry, Flt);
} 
} 
A_PROC_EXIT(writeid);
return;
} 
#undef NL

A68_VOID  FIBASIM_writebool(A68_BOOL  Flag, A68_163  Ferry, A68_36  Flt)
{ 
A_PROC_ENTRY(writebool);
 /* line 141: */
if ( Flag )
{ 
 /* line 142: */
GHBASIM_writechar((A68_CHAR)1, Ferry, Flt);
} 
else
{ 
 /* line 143: */
GHBASIM_writechar((A68_CHAR)0, Ferry, Flt);
} 
A_PROC_EXIT(writebool);
return;
} 
#undef NL

A_STATIC A68_VOID  SIBASIM_readsint(A68_163  Ferry, A68_36  Flt, A68_115  *ReturnedValue)
{ 
A68_115  TIBASIM_ans;
A68_VC  UIBASIM;  /* avoid structure result */
A68_VC * VIBASIM;  /* YIELD */
A68_INT * WIBASIM;  /* YIELD */
A68_INT * XIBASIM;  /* YIELD */
A68_115  YIBASIM;  /* clause result */
A_PROC_ENTRY(readsint);
 /* line 222: */
 /* line 223: */
{ 
 /* line 224: */
RGBASIM_readid( Ferry, Flt, &UIBASIM );
VIBASIM = (&((&TIBASIM_ans)->Id)) ;
(*VIBASIM) = UIBASIM;
 /* line 225: */
WIBASIM = (&((&TIBASIM_ans)->Lwb)) ;
(*WIBASIM) = LGBASIM_readint(Ferry, Flt);
 /* line 226: */
XIBASIM = (&((&TIBASIM_ans)->Upb)) ;
(*XIBASIM) = LGBASIM_readint(Ferry, Flt);
 /* line 227: */
 /* line 228: */
YIBASIM = TIBASIM_ans;
} 
A_PROC_EXIT(readsint);
*ReturnedValue = (YIBASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  BJBASIM_readschar(A68_163  Ferry, A68_36  Flt, A68_116  *ReturnedValue)
{ 
A68_116  CJBASIM_ans;
A68_VC  DJBASIM;  /* avoid structure result */
A68_VC * EJBASIM;  /* YIELD */
A68_VC  FJBASIM;  /* avoid structure result */
A68_VC * GJBASIM;  /* YIELD */
A68_116  HJBASIM;  /* clause result */
A_PROC_ENTRY(readschar);
 /* line 231: */
 /* line 232: */
{ 
 /* line 233: */
RGBASIM_readid( Ferry, Flt, &DJBASIM );
EJBASIM = (&((&CJBASIM_ans)->Id)) ;
(*EJBASIM) = DJBASIM;
 /* line 234: */
RGBASIM_readid( Ferry, Flt, &FJBASIM );
GJBASIM = (&((&CJBASIM_ans)->Char)) ;
(*GJBASIM) = FJBASIM;
 /* line 235: */
 /* line 236: */
HJBASIM = CJBASIM_ans;
} 
A_PROC_EXIT(readschar);
*ReturnedValue = (HJBASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  KJBASIM_readsstring(A68_163  Ferry, A68_36  Flt, A68_117  *ReturnedValue)
{ 
A68_117  LJBASIM_ans;
A68_INT * MJBASIM;  /* YIELD */
A68_116  NJBASIM;  /* avoid structure result */
A68_116 * OJBASIM;  /* YIELD */
A68_117  PJBASIM;  /* clause result */
A_PROC_ENTRY(readsstring);
 /* line 239: */
 /* line 240: */
{ 
 /* line 241: */
MJBASIM = (&((&LJBASIM_ans)->No)) ;
(*MJBASIM) = LGBASIM_readint(Ferry, Flt);
 /* line 242: */
BJBASIM_readschar( Ferry, Flt, &NJBASIM );
OJBASIM = (&((&LJBASIM_ans)->T)) ;
(*OJBASIM) = NJBASIM;
 /* line 243: */
 /* line 244: */
PJBASIM = LJBASIM_ans;
} 
A_PROC_EXIT(readsstring);
*ReturnedValue = (PJBASIM);
return;
} 
#undef NL

A_STATIC A68_118 * SJBASIM_readsenum(A68_163  Ferry, A68_36  Flt)
{ 
A68_118 * TJBASIM_ans;
A68_118 ** UJBASIM_last;
A68_INT  VJBASIM;  /* to part of loop */
A68_INT  WJBASIM;  /* loop control */
A68_118 * XJBASIM_alt;
A68_VC  YJBASIM;  /* avoid structure result */
A68_VC * ZJBASIM;  /* YIELD */
A68_119  AKBASIM;  /* avoid structure result */
A68_119 * BKBASIM;  /* YIELD */
A68_118 ** CKBASIM;  /* YIELD */
A68_118 * DKBASIM;  /* clause result */
A_PROC_ENTRY(readsenum);
 /* line 247: */
 /* line 248: */
{ 
TJBASIM_ans = VSAASIM_nilsenum;
 /* line 249: */
UJBASIM_last = (&TJBASIM_ans);
 /* line 250: */
VJBASIM = LGBASIM_readint(Ferry, Flt);
for ( WJBASIM = 1;
WJBASIM <= VJBASIM;
WJBASIM += 1 )
{ 
 /* line 251: */
XJBASIM_alt = (A_HEAP(A68_118 ));
 /* line 252: */
RGBASIM_readid( Ferry, Flt, &YJBASIM );
ZJBASIM = (&(XJBASIM_alt->Id)) ;
(*ZJBASIM) = YJBASIM;
 /* line 253: */
A_CALLPROC(PIBASIM_readstype,(Ferry, Flt, &AKBASIM),(Ferry, Flt, &AKBASIM,(PIBASIM_readstype).nonlocals));
BKBASIM = (&(XJBASIM_alt->T)) ;
(*BKBASIM) = AKBASIM;
 /* line 254: */
CKBASIM = (&(XJBASIM_alt->Rest)) ;
(*CKBASIM) = VSAASIM_nilsenum;
 /* line 255: */
(*UJBASIM_last) = XJBASIM_alt;
 /* line 256: */
 /* line 257: */
UJBASIM_last = (&((*UJBASIM_last)->Rest));
}
 /* line 258: */
 /* line 259: */
DKBASIM = TJBASIM_ans;
} 
A_PROC_EXIT(readsenum);
return( DKBASIM );
} 
#undef NL

A_STATIC A68_VOID  GKBASIM_readsfn(A68_163  Ferry, A68_36  Flt, A68_121  *ReturnedValue)
{ 
A68_121  HKBASIM_ans;
A68_119  IKBASIM;  /* avoid structure result */
A68_119 * JKBASIM;  /* YIELD */
A68_119  KKBASIM;  /* avoid structure result */
A68_119 * LKBASIM;  /* YIELD */
A68_121  MKBASIM;  /* clause result */
A_PROC_ENTRY(readsfn);
 /* line 262: */
 /* line 263: */
{ 
 /* line 264: */
A_CALLPROC(PIBASIM_readstype,(Ferry, Flt, &IKBASIM),(Ferry, Flt, &IKBASIM,(PIBASIM_readstype).nonlocals));
JKBASIM = (&((&HKBASIM_ans)->From)) ;
(*JKBASIM) = IKBASIM;
 /* line 265: */
A_CALLPROC(PIBASIM_readstype,(Ferry, Flt, &KKBASIM),(Ferry, Flt, &KKBASIM,(PIBASIM_readstype).nonlocals));
LKBASIM = (&((&HKBASIM_ans)->To)) ;
(*LKBASIM) = KKBASIM;
 /* line 266: */
 /* line 267: */
MKBASIM = HKBASIM_ans;
} 
A_PROC_EXIT(readsfn);
*ReturnedValue = (MKBASIM);
return;
} 
#undef NL

A_STATIC A68_122 * PKBASIM_readsst(A68_163  Ferry, A68_36  Flt)
{ 
A68_122 * QKBASIM_ans;
A68_122 ** RKBASIM_last;
A68_INT  SKBASIM;  /* to part of loop */
A68_INT  TKBASIM;  /* loop control */
A68_122  UKBASIM;  /* collateral clause result */
A68_119  VKBASIM;  /* avoid structure result */
A68_122 * WKBASIM;  /* YIELD */
A68_122 * XKBASIM;  /* clause result */
A_PROC_ENTRY(readsst);
 /* line 270: */
 /* line 271: */
{ 
QKBASIM_ans = WSAASIM_nilsst;
 /* line 272: */
RKBASIM_last = (&QKBASIM_ans);
 /* line 273: */
SKBASIM = LGBASIM_readint(Ferry, Flt);
for ( TKBASIM = 1;
TKBASIM <= SKBASIM;
TKBASIM += 1 )
{ 
 /* line 274: */
A_CALLPROC(PIBASIM_readstype,(Ferry, Flt, &VKBASIM),(Ferry, Flt, &VKBASIM,(PIBASIM_readstype).nonlocals));
UKBASIM.T = VKBASIM;
UKBASIM.Rest = WSAASIM_nilsst;
WKBASIM = A_HEAP(A68_122 ) ;
(*WKBASIM) = UKBASIM ;
(*RKBASIM_last) = WKBASIM;
 /* line 275: */
 /* line 276: */
RKBASIM_last = (&((*RKBASIM_last)->Rest));
}
 /* line 277: */
 /* line 278: */
XKBASIM = QKBASIM_ans;
} 
A_PROC_EXIT(readsst);
return( XKBASIM );
} 
#undef NL

A_STATIC A68_VOID  ALBASIM_readsrow(A68_163  Ferry, A68_36  Flt, A68_120  *ReturnedValue)
{ 
A68_120  BLBASIM_ans;
A68_INT * CLBASIM;  /* YIELD */
A68_119  DLBASIM;  /* avoid structure result */
A68_119 * ELBASIM;  /* YIELD */
A68_120  FLBASIM;  /* clause result */
A_PROC_ENTRY(readsrow);
 /* line 281: */
 /* line 282: */
{ 
 /* line 283: */
CLBASIM = (&((&BLBASIM_ans)->No)) ;
(*CLBASIM) = LGBASIM_readint(Ferry, Flt);
 /* line 284: */
A_CALLPROC(PIBASIM_readstype,(Ferry, Flt, &DLBASIM),(Ferry, Flt, &DLBASIM,(PIBASIM_readstype).nonlocals));
ELBASIM = (&((&BLBASIM_ans)->Type)) ;
(*ELBASIM) = DLBASIM;
 /* line 285: */
 /* line 286: */
FLBASIM = BLBASIM_ans;
} 
A_PROC_EXIT(readsrow);
*ReturnedValue = (FLBASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  ILBASIM_anonymous(A68_163  Ferry, A68_36  Flt, A68_119  *ReturnedValue)
{ 
A68_119  JLBASIM;  /* clause result */
A68_115  KLBASIM;  /* avoid structure result */
A68_115 * LLBASIM;  /* YIELD */
A68_119  MLBASIM;  /* OPERATORS - mode -> union mode */
A68_116  NLBASIM;  /* avoid structure result */
A68_116 * OLBASIM;  /* YIELD */
A68_119  PLBASIM;  /* OPERATORS - mode -> union mode */
A68_117  QLBASIM;  /* avoid structure result */
A68_117 * RLBASIM;  /* YIELD */
A68_119  SLBASIM;  /* OPERATORS - mode -> union mode */
A68_119  TLBASIM;  /* OPERATORS - mode -> union mode */
A68_118 * ULBASIM;  /* YIELD */
A68_121  VLBASIM;  /* avoid structure result */
A68_121 * WLBASIM;  /* YIELD */
A68_119  XLBASIM;  /* OPERATORS - mode -> union mode */
A68_119  YLBASIM;  /* OPERATORS - mode -> union mode */
A68_122 * ZLBASIM;  /* YIELD */
A68_120  AMBASIM;  /* avoid structure result */
A68_120 * BMBASIM;  /* YIELD */
A68_119  CMBASIM;  /* OPERATORS - mode -> union mode */
 /* line 289: */
 /* line 290: */
switch ( LGBASIM_readint(Ferry, Flt) )
{ 
case 1: 
 /* line 291: */
JLBASIM = ZSAASIM_nullstype;
break;
case 2: 
 /* line 292: */
SIBASIM_readsint( Ferry, Flt, &KLBASIM );
LLBASIM = A_HEAP(A68_115 ) ;
(*LLBASIM) = KLBASIM ;
JLBASIM = A_UNITE(MLBASIM,mode2,2,LLBASIM);
break;
case 3: 
 /* line 293: */
BJBASIM_readschar( Ferry, Flt, &NLBASIM );
OLBASIM = A_HEAP(A68_116 ) ;
(*OLBASIM) = NLBASIM ;
JLBASIM = A_UNITE(PLBASIM,mode3,3,OLBASIM);
break;
case 4: 
 /* line 294: */
KJBASIM_readsstring( Ferry, Flt, &QLBASIM );
RLBASIM = A_HEAP(A68_117 ) ;
(*RLBASIM) = QLBASIM ;
JLBASIM = A_UNITE(SLBASIM,mode5,5,RLBASIM);
break;
case 5: 
 /* line 295: */
ULBASIM = SJBASIM_readsenum(Ferry, Flt) ;
JLBASIM = A_UNITE(TLBASIM,mode1,1,ULBASIM);
break;
case 6: 
 /* line 296: */
GKBASIM_readsfn( Ferry, Flt, &VLBASIM );
WLBASIM = A_HEAP(A68_121 ) ;
(*WLBASIM) = VLBASIM ;
JLBASIM = A_UNITE(XLBASIM,mode6,6,WLBASIM);
break;
case 7: 
 /* line 297: */
ZLBASIM = PKBASIM_readsst(Ferry, Flt) ;
JLBASIM = A_UNITE(YLBASIM,mode7,7,ZLBASIM);
break;
case 8: 
 /* line 298: */
JLBASIM = CTAASIM_voidstype;
break;
case 9: 
 /* line 299: */
ALBASIM_readsrow( Ferry, Flt, &AMBASIM );
BMBASIM = A_HEAP(A68_120 ) ;
(*BMBASIM) = AMBASIM ;
JLBASIM = A_UNITE(CMBASIM,mode4,4,BMBASIM);
break;
default: 
NKDAOST_sysfault(EMBASIM);
 /* line 300: */
JLBASIM = ZSAASIM_nullstype;
break;
} 
*ReturnedValue = (JLBASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  KMBASIM_writesint(A68_115  S, A68_163  Ferry, A68_36  Flt)
{ 
A_PROC_ENTRY(writesint);
 /* line 306: */
 /* line 307: */
{ 
BIBASIM_writeid(S.Id, Ferry, Flt);
 /* line 308: */
PHBASIM_writeint(S.Lwb, Ferry, Flt);
 /* line 309: */
 /* line 310: */
PHBASIM_writeint(S.Upb, Ferry, Flt);
} 
A_PROC_EXIT(writesint);
return;
} 
#undef NL

A_STATIC A68_VOID  OMBASIM_writeschar(A68_116  S, A68_163  Ferry, A68_36  Flt)
{ 
A_PROC_ENTRY(writeschar);
 /* line 313: */
 /* line 314: */
{ 
BIBASIM_writeid(S.Id, Ferry, Flt);
 /* line 315: */
 /* line 316: */
BIBASIM_writeid(S.Char, Ferry, Flt);
} 
A_PROC_EXIT(writeschar);
return;
} 
#undef NL

A_STATIC A68_VOID  SMBASIM_writesstring(A68_117  S, A68_163  Ferry, A68_36  Flt)
{ 
A_PROC_ENTRY(writesstring);
 /* line 319: */
 /* line 320: */
{ 
PHBASIM_writeint(S.No, Ferry, Flt);
 /* line 321: */
 /* line 322: */
OMBASIM_writeschar(S.T, Ferry, Flt);
} 
A_PROC_EXIT(writesstring);
return;
} 
#undef NL

A_STATIC A68_VOID  WMBASIM_writesenum(A68_118 * S, A68_163  Ferry, A68_36  Flt)
{ 
A68_118 * XMBASIM_ptr;
A68_INT  YMBASIM_n;
A_PROC_ENTRY(writesenum);
 /* line 325: */
 /* line 326: */
{ 
XMBASIM_ptr = S;
 /* line 327: */
YMBASIM_n = 0;
 /* line 328: */
for ( ;; )
{ 
if ( !((XMBASIM_ptr!=VSAASIM_nilsenum)) ) break;
YMBASIM_n+=1;
XMBASIM_ptr = (*(&(XMBASIM_ptr->Rest)));
}
 /* line 329: */
PHBASIM_writeint(YMBASIM_n, Ferry, Flt);
 /* line 330: */
XMBASIM_ptr = S;
 /* line 331: */
for ( ;; )
{ 
 /* line 332: */
if ( !((XMBASIM_ptr!=VSAASIM_nilsenum)) ) break;
BIBASIM_writeid((*(&(XMBASIM_ptr->Id))), Ferry, Flt);
 /* line 333: */
A_CALLPROC(GMBASIM_writestype,((*(&(XMBASIM_ptr->T))), Ferry, Flt),((*(&(XMBASIM_ptr->T))), Ferry, Flt,(GMBASIM_writestype).nonlocals));
 /* line 334: */
 /* line 335: */
XMBASIM_ptr = (*(&(XMBASIM_ptr->Rest)));
}
 /* line 336: */
} 
A_PROC_EXIT(writesenum);
return;
} 
#undef NL

A_STATIC A68_VOID  CNBASIM_writesfn(A68_121  S, A68_163  Ferry, A68_36  Flt)
{ 
A_PROC_ENTRY(writesfn);
 /* line 339: */
 /* line 340: */
{ 
A_CALLPROC(GMBASIM_writestype,(S.From, Ferry, Flt),(S.From, Ferry, Flt,(GMBASIM_writestype).nonlocals));
 /* line 341: */
 /* line 342: */
A_CALLPROC(GMBASIM_writestype,(S.To, Ferry, Flt),(S.To, Ferry, Flt,(GMBASIM_writestype).nonlocals));
} 
A_PROC_EXIT(writesfn);
return;
} 
#undef NL

A_STATIC A68_VOID  GNBASIM_writesst(A68_122 * S, A68_163  Ferry, A68_36  Flt)
{ 
A68_122 * HNBASIM_ptr;
A68_INT  INBASIM_n;
A_PROC_ENTRY(writesst);
 /* line 345: */
 /* line 346: */
{ 
HNBASIM_ptr = S;
 /* line 347: */
INBASIM_n = 0;
 /* line 348: */
for ( ;; )
{ 
if ( !((HNBASIM_ptr!=WSAASIM_nilsst)) ) break;
INBASIM_n+=1;
HNBASIM_ptr = (*(&(HNBASIM_ptr->Rest)));
}
 /* line 349: */
PHBASIM_writeint(INBASIM_n, Ferry, Flt);
 /* line 350: */
HNBASIM_ptr = S;
 /* line 351: */
for ( ;; )
{ 
 /* line 352: */
if ( !((HNBASIM_ptr!=WSAASIM_nilsst)) ) break;
A_CALLPROC(GMBASIM_writestype,((*(&(HNBASIM_ptr->T))), Ferry, Flt),((*(&(HNBASIM_ptr->T))), Ferry, Flt,(GMBASIM_writestype).nonlocals));
 /* line 353: */
 /* line 354: */
HNBASIM_ptr = (*(&(HNBASIM_ptr->Rest)));
}
 /* line 355: */
} 
A_PROC_EXIT(writesst);
return;
} 
#undef NL

A_STATIC A68_VOID  MNBASIM_writesrow(A68_120  S, A68_163  Ferry, A68_36  Flt)
{ 
A_PROC_ENTRY(writesrow);
 /* line 358: */
 /* line 359: */
{ 
PHBASIM_writeint(S.No, Ferry, Flt);
 /* line 360: */
 /* line 361: */
A_CALLPROC(GMBASIM_writestype,(S.Type, Ferry, Flt),(S.Type, Ferry, Flt,(GMBASIM_writestype).nonlocals));
} 
A_PROC_EXIT(writesrow);
return;
} 
#undef NL

A_STATIC A68_VOID  QNBASIM_anonymous(A68_119  Stype, A68_163  Ferry, A68_36  Flt)
{ 
A68_119  RNBASIM;  /* united object - for case conformity */
A68_113  SNBASIM_s;
A68_114  TNBASIM_s;
A68_115 * UNBASIM_s;
A68_116 * VNBASIM_s;
A68_117 * WNBASIM_s;
A68_118 * XNBASIM_s;
A68_121 * YNBASIM_s;
A68_122 * ZNBASIM_s;
A68_120 * AOBASIM_s;
 /* line 364: */
 /* line 365: */
RNBASIM = Stype ;
switch ( RNBASIM.mode )
{ 
case 8: /* STRUCT(INT)  */
SNBASIM_s = (RNBASIM.data.mode8);
 /* line 366: */
PHBASIM_writeint(OIBASIM_cvoid, Ferry, Flt);
break;
case 9: /* STRUCT(INT)  */
TNBASIM_s = (RNBASIM.data.mode9);
 /* line 367: */
PHBASIM_writeint(GIBASIM_cnull, Ferry, Flt);
break;
case 2: /* REF STRUCT(REF MODE26,INT,INT)  */
UNBASIM_s = (RNBASIM.data.mode2);
{ 
PHBASIM_writeint(HIBASIM_cint, Ferry, Flt);
 /* line 368: */
KMBASIM_writesint((*UNBASIM_s), Ferry, Flt);
} 
break;
case 3: /* REF STRUCT(REF MODE26,REF MODE26)  */
VNBASIM_s = (RNBASIM.data.mode3);
{ 
PHBASIM_writeint(IIBASIM_cchar, Ferry, Flt);
 /* line 369: */
OMBASIM_writeschar((*VNBASIM_s), Ferry, Flt);
} 
break;
case 5: /* REF STRUCT(INT,MODE116)  */
WNBASIM_s = (RNBASIM.data.mode5);
 /* line 370: */
{ 
PHBASIM_writeint(JIBASIM_cstring, Ferry, Flt);
 /* line 371: */
SMBASIM_writesstring((*WNBASIM_s), Ferry, Flt);
} 
break;
case 1: /* REF STRUCT(REF MODE26,MODE119,REF MODE118)  */
XNBASIM_s = (RNBASIM.data.mode1);
{ 
PHBASIM_writeint(KIBASIM_cenum, Ferry, Flt);
 /* line 372: */
WMBASIM_writesenum(XNBASIM_s, Ferry, Flt);
} 
break;
case 6: /* REF STRUCT(MODE119,MODE119)  */
YNBASIM_s = (RNBASIM.data.mode6);
{ 
PHBASIM_writeint(LIBASIM_cfn, Ferry, Flt);
 /* line 373: */
CNBASIM_writesfn((*YNBASIM_s), Ferry, Flt);
} 
break;
case 7: /* REF STRUCT(MODE119,REF MODE122)  */
ZNBASIM_s = (RNBASIM.data.mode7);
{ 
PHBASIM_writeint(MIBASIM_cst, Ferry, Flt);
 /* line 374: */
GNBASIM_writesst(ZNBASIM_s, Ferry, Flt);
} 
break;
case 4: /* REF STRUCT(INT,MODE119)  */
AOBASIM_s = (RNBASIM.data.mode4);
{ 
PHBASIM_writeint(NIBASIM_crow, Ferry, Flt);
 /* line 375: */
MNBASIM_writesrow((*AOBASIM_s), Ferry, Flt);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
return;
} 
#undef NL

A68_VOID  FOBASIM_writewire(A68_135  Wire, A68_163  Ferry, A68_36  Flt)
{ 
A68_136  GOBASIM_blocks;
A68_INT  HOBASIM_upb;
A68_INT  IOBASIM_i;
A68_INT  JOBASIM;  /* to part of loop */
A_PROC_ENTRY(writewire);
 /* line 406: */
 /* line 407: */
{ 
A_CALLPROC(GMBASIM_writestype,(Wire.Type, Ferry, Flt),(Wire.Type, Ferry, Flt,(GMBASIM_writestype).nonlocals));
 /* line 408: */
GOBASIM_blocks = Wire.Blocks;
 /* line 409: */
HOBASIM_upb = GOBASIM_blocks.upb;
 /* line 410: */
PHBASIM_writeint(HOBASIM_upb, Ferry, Flt);
 /* line 411: */
JOBASIM = HOBASIM_upb;
for ( IOBASIM_i = 1;
IOBASIM_i <= JOBASIM;
IOBASIM_i += 1 )
{ 
 /* line 412: */
PHBASIM_writeint((*(&((&A_VINDEX(GOBASIM_blocks,IOBASIM_i))->Instoffset))), Ferry, Flt);
 /* line 413: */
PHBASIM_writeint((*(&((&A_VINDEX(GOBASIM_blocks,IOBASIM_i))->Offset))), Ferry, Flt);
 /* line 414: */
 /* line 415: */
PHBASIM_writeint((*(&((&A_VINDEX(GOBASIM_blocks,IOBASIM_i))->Size))), Ferry, Flt);
}
 /* line 416: */
} 
A_PROC_EXIT(writewire);
return;
} 
#undef NL

A68_VOID  MOBASIM_readwire(A68_163  Ferry, A68_36  Flt, A68_135  *ReturnedValue)
{ 
A68_135  NOBASIM_ans;
A68_119  OOBASIM;  /* avoid structure result */
A68_119 * POBASIM;  /* YIELD */
A68_INT  QOBASIM_upb;
A68_192  SOBASIM_generator;   /* proc value of non-global proc */
A68_136  XOBASIM;  /* avoid structure result */
A68_136  YOBASIM_blocks;
A68_136 * ZOBASIM;  /* YIELD */
A68_INT  APBASIM_i;
A68_INT  BPBASIM;  /* to part of loop */
A68_INT * CPBASIM;  /* YIELD */
A68_INT * DPBASIM;  /* YIELD */
A68_INT * EPBASIM;  /* YIELD */
A68_135  FPBASIM;  /* clause result */
A_PROC_ENTRY(readwire);
 /* line 419: */
 /* line 420: */
{ 
 /* line 421: */
A_CALLPROC(PIBASIM_readstype,(Ferry, Flt, &OOBASIM),(Ferry, Flt, &OOBASIM,(PIBASIM_readstype).nonlocals));
POBASIM = (&((&NOBASIM_ans)->Type)) ;
(*POBASIM) = OOBASIM;
 /* line 422: */
QOBASIM_upb = LGBASIM_readint(Ferry, Flt);
 /* line 423: */
A_CLOSURE( SOBASIM_generator, TOBASIM_generator, UOBASIM_generator );
(( UOBASIM_generator * ) ( SOBASIM_generator.nonlocals )) -> QOBASIM_upb = QOBASIM_upb;
A_CALLPROC(SOBASIM_generator,(A68_FALSE, &XOBASIM),(A68_FALSE, &XOBASIM,(SOBASIM_generator).nonlocals));
YOBASIM_blocks = XOBASIM;
 /* line 424: */
ZOBASIM = (&((&NOBASIM_ans)->Blocks)) ;
(*ZOBASIM) = YOBASIM_blocks;
 /* line 425: */
BPBASIM = QOBASIM_upb;
for ( APBASIM_i = 1;
APBASIM_i <= BPBASIM;
APBASIM_i += 1 )
{ 
 /* line 426: */
CPBASIM = (&((&A_VINDEX(YOBASIM_blocks,APBASIM_i))->Instoffset)) ;
(*CPBASIM) = LGBASIM_readint(Ferry, Flt);
 /* line 427: */
DPBASIM = (&((&A_VINDEX(YOBASIM_blocks,APBASIM_i))->Offset)) ;
(*DPBASIM) = LGBASIM_readint(Ferry, Flt);
 /* line 428: */
 /* line 429: */
EPBASIM = (&((&A_VINDEX(YOBASIM_blocks,APBASIM_i))->Size)) ;
(*EPBASIM) = LGBASIM_readint(Ferry, Flt);
}
 /* line 430: */
 /* line 431: */
FPBASIM = NOBASIM_ans;
} 
A_PROC_EXIT(readwire);
*ReturnedValue = (FPBASIM);
return;
} 
#undef NL

A68_VOID  JPBASIM_writeram(A68_137  Ram, A68_163  Ferry, A68_36  Flt)
{ 
A_PROC_ENTRY(writeram);
 /* line 434: */
 /* line 435: */
{ 
FOBASIM_writewire(Ram.Firstcell, Ferry, Flt);
 /* line 436: */
PHBASIM_writeint(Ram.Lwb, Ferry, Flt);
 /* line 437: */
PHBASIM_writeint(Ram.Ramsize, Ferry, Flt);
 /* line 438: */
 /* line 439: */
PHBASIM_writeint(Ram.Step, Ferry, Flt);
} 
A_PROC_EXIT(writeram);
return;
} 
#undef NL

A68_VOID  MPBASIM_readram(A68_163  Ferry, A68_36  Flt, A68_137  *ReturnedValue)
{ 
A68_137  NPBASIM_ans;
A68_135  OPBASIM;  /* avoid structure result */
A68_135 * PPBASIM;  /* YIELD */
A68_INT * QPBASIM;  /* YIELD */
A68_INT * RPBASIM;  /* YIELD */
A68_INT * SPBASIM;  /* YIELD */
A68_137  TPBASIM;  /* clause result */
A_PROC_ENTRY(readram);
 /* line 442: */
 /* line 443: */
{ 
 /* line 444: */
MOBASIM_readwire( Ferry, Flt, &OPBASIM );
PPBASIM = (&((&NPBASIM_ans)->Firstcell)) ;
(*PPBASIM) = OPBASIM;
 /* line 445: */
QPBASIM = (&((&NPBASIM_ans)->Lwb)) ;
(*QPBASIM) = LGBASIM_readint(Ferry, Flt);
 /* line 446: */
RPBASIM = (&((&NPBASIM_ans)->Ramsize)) ;
(*RPBASIM) = LGBASIM_readint(Ferry, Flt);
 /* line 447: */
SPBASIM = (&((&NPBASIM_ans)->Step)) ;
(*SPBASIM) = LGBASIM_readint(Ferry, Flt);
 /* line 448: */
 /* line 449: */
TPBASIM = NPBASIM_ans;
} 
A_PROC_EXIT(readram);
*ReturnedValue = (TPBASIM);
return;
} 
#undef NL

A68_VOID  XPBASIM_writebinding(A68_138  Binding, A68_163  Ferry, A68_36  Flt)
{ 
A_PROC_ENTRY(writebinding);
 /* line 452: */
 /* line 453: */
{ 
BIBASIM_writeid(Binding.Uname, Ferry, Flt);
 /* line 454: */
BIBASIM_writeid(Binding.Lname, Ferry, Flt);
 /* line 455: */
 /* line 456: */
PHBASIM_writeint(Binding.Node, Ferry, Flt);
} 
A_PROC_EXIT(writebinding);
return;
} 
#undef NL

A68_VOID  AQBASIM_readbinding(A68_163  Ferry, A68_36  Flt, A68_138  *ReturnedValue)
{ 
A68_138  BQBASIM_ans;
A68_VC  CQBASIM;  /* avoid structure result */
A68_VC * DQBASIM;  /* YIELD */
A68_VC  EQBASIM;  /* avoid structure result */
A68_VC * FQBASIM;  /* YIELD */
A68_INT * GQBASIM;  /* YIELD */
A68_138  HQBASIM;  /* clause result */
A_PROC_ENTRY(readbinding);
 /* line 459: */
 /* line 460: */
{ 
 /* line 461: */
RGBASIM_readid( Ferry, Flt, &CQBASIM );
DQBASIM = (&((&BQBASIM_ans)->Uname)) ;
(*DQBASIM) = CQBASIM;
 /* line 462: */
RGBASIM_readid( Ferry, Flt, &EQBASIM );
FQBASIM = (&((&BQBASIM_ans)->Lname)) ;
(*FQBASIM) = EQBASIM;
 /* line 463: */
GQBASIM = (&((&BQBASIM_ans)->Node)) ;
(*GQBASIM) = LGBASIM_readint(Ferry, Flt);
 /* line 464: */
 /* line 465: */
HQBASIM = BQBASIM_ans;
} 
A_PROC_EXIT(readbinding);
*ReturnedValue = (HQBASIM);
return;
} 
#undef NL

A68_VOID  LQBASIM_writefn(A68_139  Fn, A68_163  Ferry, A68_36  Flt)
{ 
A68_140  MQBASIM_bindings;
A68_INT  NQBASIM_upb;
A68_INT  OQBASIM_i;
A68_INT  PQBASIM;  /* to part of loop */
A_PROC_ENTRY(writefn);
 /* line 469: */
 /* line 470: */
{ 
 /* line 471: */
if ( (Fn.Ram==STAASIM_nilsram) )
{ 
 /* line 472: */
 /* line 473: */
FIBASIM_writebool(A68_FALSE, Ferry, Flt);
} 
else
{ 
FIBASIM_writebool(A68_TRUE, Ferry, Flt);
 /* line 474: */
 /* line 475: */
JPBASIM_writeram((*Fn.Ram), Ferry, Flt);
} 
 /* line 476: */
FOBASIM_writewire(Fn.Outputs, Ferry, Flt);
 /* line 477: */
PHBASIM_writeint(Fn.Noinputs, Ferry, Flt);
 /* line 478: */
MQBASIM_bindings = Fn.Body;
 /* line 479: */
NQBASIM_upb = MQBASIM_bindings.upb;
 /* line 480: */
PHBASIM_writeint(NQBASIM_upb, Ferry, Flt);
 /* line 481: */
PQBASIM = NQBASIM_upb;
for ( OQBASIM_i = 1;
OQBASIM_i <= PQBASIM;
OQBASIM_i += 1 )
{ 
 /* line 482: */
 /* line 483: */
XPBASIM_writebinding((*(&A_VINDEX(MQBASIM_bindings,OQBASIM_i))), Ferry, Flt);
}
 /* line 484: */
} 
A_PROC_EXIT(writefn);
return;
} 
#undef NL

A68_VOID  SQBASIM_readfn(A68_163  Ferry, A68_36  Flt, A68_139  *ReturnedValue)
{ 
A68_139  TQBASIM_ans;
A68_137  UQBASIM;  /* avoid structure result */
A68_137 * VQBASIM;  /* YIELD */
A68_137 ** WQBASIM;  /* YIELD */
A68_137 ** XQBASIM;  /* YIELD */
A68_135  YQBASIM;  /* avoid structure result */
A68_135 * ZQBASIM;  /* YIELD */
A68_INT * ARBASIM;  /* YIELD */
A68_INT  BRBASIM_upb;
A68_199  DRBASIM_generator;   /* proc value of non-global proc */
A68_140  IRBASIM;  /* avoid structure result */
A68_140  JRBASIM_bindings;
A68_140 * KRBASIM;  /* YIELD */
A68_INT  LRBASIM_i;
A68_INT  MRBASIM;  /* to part of loop */
A68_138  NRBASIM;  /* avoid structure result */
A68_138 * ORBASIM;  /* YIELD */
A68_139  PRBASIM;  /* clause result */
A_PROC_ENTRY(readfn);
 /* line 487: */
 /* line 488: */
{ 
 /* line 489: */
 /* line 490: */
if ( XGBASIM_readbool(Ferry, Flt) )
{ 
 /* line 491: */
 /* line 492: */
MPBASIM_readram( Ferry, Flt, &UQBASIM );
VQBASIM = A_HEAP(A68_137 ) ;
(*VQBASIM) = UQBASIM ;
WQBASIM = (&((&TQBASIM_ans)->Ram)) ;
(*WQBASIM) = VQBASIM;
} 
else
{ 
 /* line 493: */
XQBASIM = (&((&TQBASIM_ans)->Ram)) ;
(*XQBASIM) = STAASIM_nilsram;
} 
 /* line 494: */
MOBASIM_readwire( Ferry, Flt, &YQBASIM );
ZQBASIM = (&((&TQBASIM_ans)->Outputs)) ;
(*ZQBASIM) = YQBASIM;
 /* line 495: */
ARBASIM = (&((&TQBASIM_ans)->Noinputs)) ;
(*ARBASIM) = LGBASIM_readint(Ferry, Flt);
 /* line 496: */
BRBASIM_upb = LGBASIM_readint(Ferry, Flt);
 /* line 497: */
A_CLOSURE( DRBASIM_generator, ERBASIM_generator, FRBASIM_generator );
(( FRBASIM_generator * ) ( DRBASIM_generator.nonlocals )) -> BRBASIM_upb = BRBASIM_upb;
A_CALLPROC(DRBASIM_generator,(A68_FALSE, &IRBASIM),(A68_FALSE, &IRBASIM,(DRBASIM_generator).nonlocals));
JRBASIM_bindings = IRBASIM;
 /* line 498: */
KRBASIM = (&((&TQBASIM_ans)->Body)) ;
(*KRBASIM) = JRBASIM_bindings;
 /* line 499: */
MRBASIM = BRBASIM_upb;
for ( LRBASIM_i = 1;
LRBASIM_i <= MRBASIM;
LRBASIM_i += 1 )
{ 
 /* line 500: */
 /* line 501: */
AQBASIM_readbinding( Ferry, Flt, &NRBASIM );
ORBASIM = (&A_VINDEX(JRBASIM_bindings,LRBASIM_i)) ;
(*ORBASIM) = NRBASIM;
}
 /* line 502: */
 /* line 503: */
PRBASIM = TQBASIM_ans;
} 
A_PROC_EXIT(readfn);
*ReturnedValue = (PRBASIM);
return;
} 
#undef NL

A68_VOID  TRBASIM_writebox(A68_141  Box, A68_163  Ferry, A68_36  Flt)
{ 
A_PROC_ENTRY(writebox);
 /* line 506: */
 /* line 507: */
{ 
PHBASIM_writeint(Box.Fn, Ferry, Flt);
 /* line 508: */
 /* line 509: */
PHBASIM_writeint(Box.Instance, Ferry, Flt);
} 
A_PROC_EXIT(writebox);
return;
} 
#undef NL

A68_VOID  WRBASIM_readbox(A68_163  Ferry, A68_36  Flt, A68_141  *ReturnedValue)
{ 
A68_141  XRBASIM_ans;
A68_INT * YRBASIM;  /* YIELD */
A68_INT * ZRBASIM;  /* YIELD */
A68_141  ASBASIM;  /* clause result */
A_PROC_ENTRY(readbox);
 /* line 512: */
 /* line 513: */
{ 
 /* line 514: */
YRBASIM = (&((&XRBASIM_ans)->Fn)) ;
(*YRBASIM) = LGBASIM_readint(Ferry, Flt);
 /* line 515: */
ZRBASIM = (&((&XRBASIM_ans)->Instance)) ;
(*ZRBASIM) = LGBASIM_readint(Ferry, Flt);
 /* line 516: */
 /* line 517: */
ASBASIM = XRBASIM_ans;
} 
A_PROC_EXIT(readbox);
*ReturnedValue = (ASBASIM);
return;
} 
#undef NL

A68_VOID  HSBASIM_writernode(A68_144  Node, A68_163  Ferry, A68_36  Flt)
{ 
A68_144  ISBASIM;  /* united object - for case conformity */
A68_141  JSBASIM_box;
A68_135  KSBASIM_wire;
A_PROC_ENTRY(writernode);
 /* line 522: */
 /* line 523: */
ISBASIM = Node ;
switch ( ISBASIM.mode )
{ 
case 1: /* STRUCT(INT,INT)  */
JSBASIM_box = (ISBASIM.data.mode1);
 /* line 524: */
{ 
PHBASIM_writeint(BSBASIM_cbox, Ferry, Flt);
 /* line 525: */
TRBASIM_writebox(JSBASIM_box, Ferry, Flt);
} 
break;
case 2: /* STRUCT(MODE119,REF MODE136)  */
KSBASIM_wire = (ISBASIM.data.mode2);
 /* line 526: */
{ 
PHBASIM_writeint(CSBASIM_cwire, Ferry, Flt);
 /* line 527: */
FOBASIM_writewire(KSBASIM_wire, Ferry, Flt);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(writernode);
return;
} 
#undef NL

A68_VOID  NSBASIM_readrnode(A68_163  Ferry, A68_36  Flt, A68_144  *ReturnedValue)
{ 
A68_144  OSBASIM;  /* clause result */
A68_141  PSBASIM;  /* avoid structure result */
A68_144  QSBASIM;  /* OPERATORS - mode -> union mode */
A68_135  RSBASIM;  /* avoid structure result */
A68_144  SSBASIM;  /* OPERATORS - mode -> union mode */
A68_141  VSBASIM;  /* collateral clause result */
A68_144  WSBASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(readrnode);
 /* line 530: */
 /* line 531: */
switch ( LGBASIM_readint(Ferry, Flt) )
{ 
case 1: 
 /* line 532: */
WRBASIM_readbox( Ferry, Flt, &PSBASIM );
OSBASIM = A_UNITE(QSBASIM,mode1,1,PSBASIM);
break;
case 2: 
 /* line 533: */
MOBASIM_readwire( Ferry, Flt, &RSBASIM );
OSBASIM = A_UNITE(SSBASIM,mode2,2,RSBASIM);
break;
default: 
NKDAOST_sysfault(USBASIM);
VSBASIM.Fn = 0;
 /* line 534: */
VSBASIM.Instance = 0;
OSBASIM = A_UNITE(WSBASIM,mode1,1,VSBASIM);
break;
} 
A_PROC_EXIT(readrnode);
*ReturnedValue = (OSBASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  ZSBASIM_readline(A68_163  Ferry, A68_36  Flt, A68_142  *ReturnedValue)
{ 
A68_142  ATBASIM;  /* collateral clause result */
A68_135  BTBASIM;  /* avoid structure result */
A68_135 * CTBASIM;  /* YIELD */
A68_142  DTBASIM;  /* clause result */
A_PROC_ENTRY(readline);
 /* line 538: */
MOBASIM_readwire( Ferry, Flt, &BTBASIM );
CTBASIM = A_HEAP(A68_135 ) ;
(*CTBASIM) = BTBASIM ;
ATBASIM.Wire = CTBASIM;
ATBASIM.Instance = LGBASIM_readint(Ferry, Flt);
DTBASIM = ATBASIM;
A_PROC_EXIT(readline);
*ReturnedValue = (DTBASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  HTBASIM_writeline(A68_142  Line, A68_163  Ferry, A68_36  Flt)
{ 
A_PROC_ENTRY(writeline);
 /* line 541: */
 /* line 542: */
{ 
FOBASIM_writewire((*Line.Wire), Ferry, Flt);
 /* line 543: */
 /* line 544: */
PHBASIM_writeint(Line.Instance, Ferry, Flt);
} 
A_PROC_EXIT(writeline);
return;
} 
#undef NL

A_STATIC A68_VOID  KTBASIM_readnode(A68_163  Ferry, A68_36  Flt, A68_143  *ReturnedValue)
{ 
A68_143  LTBASIM;  /* clause result */
A68_141  MTBASIM;  /* avoid structure result */
A68_143  NTBASIM;  /* OPERATORS - mode -> union mode */
A68_142  OTBASIM;  /* avoid structure result */
A68_143  PTBASIM;  /* OPERATORS - mode -> union mode */
A68_143  STBASIM;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(readnode);
 /* line 547: */
 /* line 548: */
switch ( LGBASIM_readint(Ferry, Flt) )
{ 
case 1: 
 /* line 549: */
WRBASIM_readbox( Ferry, Flt, &MTBASIM );
LTBASIM = A_UNITE(NTBASIM,mode1,1,MTBASIM);
break;
case 2: 
 /* line 550: */
ZSBASIM_readline( Ferry, Flt, &OTBASIM );
LTBASIM = A_UNITE(PTBASIM,mode2,2,OTBASIM);
break;
default: 
NKDAOST_sysfault(RTBASIM);
 /* line 551: */
LTBASIM = STBASIM;
break;
} 
A_PROC_EXIT(readnode);
*ReturnedValue = (LTBASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  WTBASIM_writenode(A68_143  Node, A68_163  Ferry, A68_36  Flt)
{ 
A68_143  XTBASIM;  /* united object - for case conformity */
A68_141  YTBASIM_box;
A68_142  ZTBASIM_line;
A_PROC_ENTRY(writenode);
 /* line 554: */
 /* line 555: */
XTBASIM = Node ;
switch ( XTBASIM.mode )
{ 
case 1: /* STRUCT(INT,INT)  */
YTBASIM_box = (XTBASIM.data.mode1);
 /* line 556: */
{ 
PHBASIM_writeint(BSBASIM_cbox, Ferry, Flt);
 /* line 557: */
TRBASIM_writebox(YTBASIM_box, Ferry, Flt);
} 
break;
case 2: /* STRUCT(REF MODE135,INT)  */
ZTBASIM_line = (XTBASIM.data.mode2);
 /* line 558: */
{ 
PHBASIM_writeint(DSBASIM_cline, Ferry, Flt);
 /* line 559: */
HTBASIM_writeline(ZTBASIM_line, Ferry, Flt);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(writenode);
return;
} 
#undef NL

A68_VOID  CUBASIM_readmnode(A68_163  Ferry, A68_36  Flt, A68_145  *ReturnedValue)
{ 
A68_145  DUBASIM;  /* collateral clause result */
A68_143  EUBASIM;  /* avoid structure result */
A68_145  FUBASIM;  /* clause result */
A_PROC_ENTRY(readmnode);
 /* line 562: */
KTBASIM_readnode( Ferry, Flt, &EUBASIM );
DUBASIM.Node = EUBASIM;
DUBASIM.Circuit = LGBASIM_readint(Ferry, Flt);
DUBASIM.Base = LGBASIM_readint(Ferry, Flt);
FUBASIM = DUBASIM;
A_PROC_EXIT(readmnode);
*ReturnedValue = (FUBASIM);
return;
} 
#undef NL

A68_VOID  JUBASIM_writemnode(A68_145  Mnode, A68_163  Ferry, A68_36  Flt)
{ 
A_PROC_ENTRY(writemnode);
 /* line 565: */
 /* line 566: */
{ 
WTBASIM_writenode(Mnode.Node, Ferry, Flt);
 /* line 567: */
PHBASIM_writeint(Mnode.Circuit, Ferry, Flt);
 /* line 568: */
 /* line 569: */
 /* line 571: */
PHBASIM_writeint(Mnode.Base, Ferry, Flt);
} 
A_PROC_EXIT(writemnode);
return;
} 
#undef NL
 /* line 1: */
 /* line 4: */
void EFBASIM(void)   /* initialise DECS kesave */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/kesave.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/kebasics.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_174  FMBASIM;  /* procedure value */
A68_182  BOBASIM;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
JSAASIM();   /* USE kebasics */
JSCAOST();   /* USE basics */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/kesave.a68";
A_config.translation_time = "Tue Apr  4 11:05:49 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "DFBASIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:05:49 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS kesave);
UEAALIB_a68config(LGAALIB_configinfo, IFBASIM);
 /* line 72: */
 /* line 79: */
 /* line 86: */
 /* line 92: */
 /* line 104: */
 /* line 117: */
 /* line 120: */
 /* line 123: */
 /* line 130: */
 /* line 140: */
 /* line 215: */
 /* line 216: */
 /* line 217: */
 /* line 219: */
 /* line 221: */
 /* line 230: */
 /* line 238: */
 /* line 246: */
 /* line 261: */
 /* line 269: */
 /* line 280: */
 /* line 288: */
FMBASIM.fn.fn_global = ILBASIM_anonymous;
FMBASIM.nonlocals = A68_NIL;
PIBASIM_readstype = FMBASIM;
 /* line 303: */
 /* line 305: */
 /* line 312: */
 /* line 318: */
 /* line 324: */
 /* line 338: */
 /* line 344: */
 /* line 357: */
 /* line 363: */
BOBASIM.fn.fn_global = QNBASIM_anonymous;
BOBASIM.nonlocals = A68_NIL;
GMBASIM_writestype = BOBASIM;
 /* line 405: */
 /* line 418: */
 /* line 433: */
 /* line 441: */
 /* line 451: */
 /* line 458: */
 /* line 468: */
 /* line 486: */
 /* line 505: */
 /* line 511: */
 /* line 519: */
 /* line 521: */
 /* line 529: */
 /* line 537: */
 /* line 540: */
 /* line 546: */
 /* line 553: */
 /* line 561: */
 /* line 564: */
 /* line 580: */
A_PROC_EXIT(DECS kesave);
} 
#undef NL
/* end of translation of ./a68files/kesave.a68 */
