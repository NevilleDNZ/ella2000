
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
/* UNAME:WDNASIM */
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
struct A68t115 ;

A_PROCEDURE(A68_VOID ,A68t114,(struct A68t115 *),(struct A68t115 *,void *));
typedef struct A68t114  A68_114 ;    /* PROC MODE115 */
struct A68t115{
A68_INT  Codesize;
A_PAD_INT(PAD_22)
A68_INT  Datasize;
A_PAD_INT(PAD_23)
A68_INT  Dynamicstacksize;
A_PAD_INT(PAD_24)
A68_INT  Staticstacksize;
A_PAD_INT(PAD_25)
};
typedef struct A68t115  A68_115 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t117 ;

A_PROCEDURE(A68_VOID ,A68t116,(struct A68t117 ,struct A68t117 ,struct A68t36 ),(struct A68t117 ,struct A68t117 ,struct A68t36 ,void *));
typedef struct A68t116  A68_116 ;    /* PROC(MODE117,MODE117,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t117,(A68_VC ,struct A68t36 ),(A68_VC ,struct A68t36 ,void *));
typedef struct A68t117  A68_117 ;    /* PROC(REF MODE26,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t118,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t118  A68_118 ;    /* PROC(INT,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t119,(A68_INT ),(A68_INT ,void *));
typedef struct A68t119  A68_119 ;    /* PROC(INT) VOID */
struct A68t121 ;

A_PROCEDURE(A68_VOID ,A68t120,(A68_INT ,struct A68t121 ),(A68_INT ,struct A68t121 ,void *));
typedef struct A68t120  A68_120 ;    /* PROC(INT,MODE121) VOID */
struct A68t122{
A68_INT  Lab;
A_PAD_INT(PAD_26)
A68_VC  Tag;
};
typedef struct A68t122  A68_122 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t121 { A68_INT mode; union {
A68_INT  mode1;
struct A68t122  mode2;
} data; };
typedef struct A68t121  A68_121 ;    /* UNION(INT,MODE122,VOID)  */

A_PROCEDURE(A68_VOID ,A68t123,(A68_INT ,A68_INT ,struct A68t121 ),(A68_INT ,A68_INT ,struct A68t121 ,void *));
typedef struct A68t123  A68_123 ;    /* PROC(INT,INT,MODE121) VOID */

A_PROCEDURE(A68_VOID ,A68t124,(struct A68t122 ),(struct A68t122 ,void *));
typedef struct A68t124  A68_124 ;    /* PROC(MODE122) VOID */

A_PROCEDURE(A68_VOID ,A68t125,(A68_INT ,struct A68t122 ),(A68_INT ,struct A68t122 ,void *));
typedef struct A68t125  A68_125 ;    /* PROC(INT,MODE122) VOID */

A_PROCEDURE(A68_VOID ,A68t126,(struct A68t121 ,struct A68t122 ),(struct A68t121 ,struct A68t122 ,void *));
typedef struct A68t126  A68_126 ;    /* PROC(MODE121,MODE122) VOID */
struct A68t128 ;

A_PROCEDURE(A68_VOID ,A68t127,(struct A68t122 ,struct A68t128 *,struct A68t128 *),(struct A68t122 ,struct A68t128 *,struct A68t128 *,void *));
typedef struct A68t127  A68_127 ;    /* PROC(MODE122,REF MODE128,REF MODE128) VOID */
struct A68t129{
A68_INT  Sort;
A_PAD_INT(PAD_27)
A68_INT  Size;
A_PAD_INT(PAD_28)
};
typedef struct A68t129  A68_129 ;    /* STRUCT(INT,INT)  */
struct A68t128{
struct A68t129  Head;
struct A68t128 * Tail;
};
typedef struct A68t128  A68_128 ;    /* STRUCT(MODE129,REF MODE128)  */

A_PROCEDURE(A68_VOID ,A68t130,(struct A68t122 ,A68_INT ),(struct A68t122 ,A68_INT ,void *));
typedef struct A68t130  A68_130 ;    /* PROC(MODE122,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t131,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(MODE36) VOID */
struct A68t133 ;

A_PROCEDURE(A68_VOID ,A68t132,(struct A68t43 ,A68_INT ,struct A68t36 ,struct A68t133 *),(struct A68t43 ,A68_INT ,struct A68t36 ,struct A68t133 *,void *));
typedef struct A68t132  A68_132 ;    /* PROC(MODE43,INT,MODE36) MODE133 */
struct A68t133{
A68_INT  Ws;
A_PAD_INT(PAD_29)
A68_BOOL  Up;
A_PAD_BOOL(PAD_30)
A68_INT  Sizeunit;
A_PAD_INT(PAD_31)
struct A68t32  Al;
};
typedef struct A68t133  A68_133 ;    /* STRUCT(INT,BOOL,INT,REF MODE32)  */

A_PROCEDURE(A68_VOID ,A68t134,(A68_INT ,struct A68t36 ,A68_VC *),(A68_INT ,struct A68t36 ,A68_VC *,void *));
typedef struct A68t134  A68_134 ;    /* PROC(INT,MODE36) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t135,(A68_INT ,struct A68t36 ),(A68_INT ,struct A68t36 ,void *));
typedef struct A68t135  A68_135 ;    /* PROC(INT,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t136,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t136  A68_136 ;    /* PROC(REF MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t137,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t137  A68_137 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t138,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t138  A68_138 ;    /* PROC(INT,INT) REF MODE26 */
struct A68t140 ;

A_PROCEDURE(A68_VOID ,A68t139,(A68_INT ,struct A68t140 *),(A68_INT ,struct A68t140 *,void *));
typedef struct A68t139  A68_139 ;    /* PROC(INT) MODE140 */
struct A68t140{
A68_INT  Lasttime;
A_PAD_INT(PAD_32)
A68_INT  Interrupted;
A_PAD_INT(PAD_33)
};
typedef struct A68t140  A68_140 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t141,(A68_VC ,struct A68t122 *),(A68_VC ,struct A68t122 *,void *));
typedef struct A68t141  A68_141 ;    /* PROC(MODE26) MODE122 */
struct A68t142{
struct A68t122  Labelint;
struct A68t122  Labelcallinst;
A68_INT  Workspacesize;
A_PAD_INT(PAD_34)
A68_INT  Evalfn;
A_PAD_INT(PAD_35)
A68_INT  History;
A_PAD_INT(PAD_36)
A68_INT  Declid;
A_PAD_INT(PAD_37)
};
typedef struct A68t142  A68_142 ;    /* STRUCT(MODE122,MODE122,INT,INT,INT,INT)  */

A_PROCEDURE(struct A68t142 *,A68t143,(A68_VC ,struct A68t32 ,A68_INT ,struct A68t32 ,struct A68t36 ),(A68_VC ,struct A68t32 ,A68_INT ,struct A68t32 ,struct A68t36 ,void *));
typedef struct A68t143  A68_143 ;    /* PROC(MODE26,MODE32,INT,MODE32,MODE36) REF MODE142 */
struct A68t144{
A68_INT  Svoid;
A_PAD_INT(PAD_38)
};
typedef struct A68t144  A68_144 ;    /* STRUCT(INT)  */
struct A68t145{
A68_INT  Snull;
A_PAD_INT(PAD_39)
};
typedef struct A68t145  A68_145 ;    /* STRUCT(INT)  */
struct A68t146{
A68_VC  Id;
A68_INT  Lwb;
A_PAD_INT(PAD_40)
A68_INT  Upb;
A_PAD_INT(PAD_41)
};
typedef struct A68t146  A68_146 ;    /* STRUCT(REF MODE26,INT,INT)  */
struct A68t147{
A68_VC  Id;
A68_VC  Char;
};
typedef struct A68t147  A68_147 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t148{
A68_INT  No;
A_PAD_INT(PAD_42)
struct A68t147  T;
};
typedef struct A68t148  A68_148 ;    /* STRUCT(INT,MODE147)  */
struct A68t150 { A68_INT mode; union {
struct A68t149 * mode1;
struct A68t146 * mode2;
struct A68t147 * mode3;
struct A68t151 * mode4;
struct A68t148 * mode5;
struct A68t152 * mode6;
struct A68t153 * mode7;
struct A68t144  mode8;
struct A68t145  mode9;
} data; };
typedef struct A68t150  A68_150 ;    /* UNION(REF MODE149,REF MODE146,REF MODE147,REF MODE151,REF MODE148,REF MODE152,REF MODE153,MODE144,MODE145)  */
struct A68t149{
A68_VC  Id;
struct A68t150  T;
struct A68t149 * Rest;
};
typedef struct A68t149  A68_149 ;    /* STRUCT(REF MODE26,MODE150,REF MODE149)  */
struct A68t151{
A68_INT  No;
A_PAD_INT(PAD_43)
struct A68t150  Type;
};
typedef struct A68t151  A68_151 ;    /* STRUCT(INT,MODE150)  */
struct A68t152{
struct A68t150  From;
struct A68t150  To;
};
typedef struct A68t152  A68_152 ;    /* STRUCT(MODE150,MODE150)  */
struct A68t153{
struct A68t150  T;
struct A68t153 * Rest;
};
typedef struct A68t153  A68_153 ;    /* STRUCT(MODE150,REF MODE153)  */
struct A68t154 { A68_INT mode; union {
struct A68t149 * mode1;
struct A68t146 * mode2;
struct A68t147 * mode3;
} data; };
typedef struct A68t154  A68_154 ;    /* UNION(REF MODE149,REF MODE146,REF MODE147)  */
struct A68t155{
A68_INT  Svvoid;
A_PAD_INT(PAD_44)
};
typedef struct A68t155  A68_155 ;    /* STRUCT(INT)  */
struct A68t156{
A68_INT  Svnull;
A_PAD_INT(PAD_45)
};
typedef struct A68t156  A68_156 ;    /* STRUCT(INT)  */
struct A68t157{
struct A68t150  Type;
};
typedef struct A68t157  A68_157 ;    /* STRUCT(MODE150)  */
struct A68t158{
struct A68t146 * Type;
A68_INT  Value;
A_PAD_INT(PAD_46)
};
typedef struct A68t158  A68_158 ;    /* STRUCT(REF MODE146,INT)  */
struct A68t159{
struct A68t147 * Type;
A68_CHAR  Value;
A_PAD_CHAR(PAD_47)
};
typedef struct A68t159  A68_159 ;    /* STRUCT(REF MODE147,CHAR)  */
struct A68t160{
struct A68t148 * Type;
A68_VC  Value;
};
typedef struct A68t160  A68_160 ;    /* STRUCT(REF MODE148,REF MODE26)  */
struct A68t162 { A68_INT mode; union {
struct A68t157 * mode1;
struct A68t158 * mode2;
struct A68t159 * mode3;
struct A68t160 * mode4;
struct A68t161 * mode5;
struct A68t163 * mode6;
struct A68t164 * mode7;
struct A68t155  mode8;
struct A68t156  mode9;
} data; };
typedef struct A68t162  A68_162 ;    /* UNION(REF MODE157,REF MODE158,REF MODE159,REF MODE160,REF MODE161,REF MODE163,REF MODE164,MODE155,MODE156)  */
struct A68t161{
struct A68t149 * Type;
A68_INT  Tag;
A_PAD_INT(PAD_48)
struct A68t162  Assoc;
};
typedef struct A68t161  A68_161 ;    /* STRUCT(REF MODE149,INT,MODE162)  */
struct A68t163{
struct A68t162  Head;
struct A68t163 * Tail;
};
typedef struct A68t163  A68_163 ;    /* STRUCT(MODE162,REF MODE163)  */
struct A68t164{
struct A68t162  From;
struct A68t162  To;
};
typedef struct A68t164  A68_164 ;    /* STRUCT(MODE162,MODE162)  */
struct A68t165{
A68_INT  Instoffset;
A_PAD_INT(PAD_49)
A68_INT  Offset;
A_PAD_INT(PAD_50)
A68_INT  Size;
A_PAD_INT(PAD_51)
};
typedef struct A68t165  A68_165 ;    /* STRUCT(INT,INT,INT)  */
A_VECTOR(struct A68t165 ,A68t167);
typedef struct A68t167  A68_167 ;    /* VECTOR [] MODE165 */
struct A68t166{
struct A68t150  Type;
struct A68t167  Blocks;
};
typedef struct A68t166  A68_166 ;    /* STRUCT(MODE150,REF MODE167)  */
struct A68t168{
struct A68t166  Firstcell;
A68_INT  Lwb;
A_PAD_INT(PAD_52)
A68_INT  Ramsize;
A_PAD_INT(PAD_53)
A68_INT  Step;
A_PAD_INT(PAD_54)
};
typedef struct A68t168  A68_168 ;    /* STRUCT(MODE166,INT,INT,INT)  */
struct A68t169{
A68_VC  Uname;
A68_VC  Lname;
A68_INT  Node;
A_PAD_INT(PAD_55)
};
typedef struct A68t169  A68_169 ;    /* STRUCT(REF MODE26,REF MODE26,INT)  */
A_VECTOR(struct A68t169 ,A68t171);
typedef struct A68t171  A68_171 ;    /* VECTOR [] MODE169 */
struct A68t170{
struct A68t168 * Ram;
struct A68t166  Outputs;
A68_INT  Noinputs;
A_PAD_INT(PAD_56)
struct A68t171  Body;
};
typedef struct A68t170  A68_170 ;    /* STRUCT(REF MODE168,MODE166,INT,REF MODE171)  */
struct A68t172{
A68_INT  Fn;
A_PAD_INT(PAD_57)
A68_INT  Instance;
A_PAD_INT(PAD_58)
};
typedef struct A68t172  A68_172 ;    /* STRUCT(INT,INT)  */
struct A68t173{
struct A68t166 * Wire;
A68_INT  Instance;
A_PAD_INT(PAD_59)
};
typedef struct A68t173  A68_173 ;    /* STRUCT(REF MODE166,INT)  */
struct A68t174 { A68_INT mode; union {
struct A68t172  mode1;
struct A68t173  mode2;
} data; };
typedef struct A68t174  A68_174 ;    /* UNION(MODE172,MODE173)  */
struct A68t175 { A68_INT mode; union {
struct A68t172  mode1;
struct A68t166  mode2;
} data; };
typedef struct A68t175  A68_175 ;    /* UNION(MODE172,MODE166)  */
struct A68t176{
struct A68t174  Node;
A68_INT  Circuit;
A_PAD_INT(PAD_60)
A68_INT  Base;
A_PAD_INT(PAD_61)
};
typedef struct A68t176  A68_176 ;    /* STRUCT(MODE174,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t177,(struct A68t162 ,struct A68t150 *),(struct A68t162 ,struct A68t150 *,void *));
typedef struct A68t177  A68_177 ;    /* PROC(MODE162) MODE150 */

A_PROCEDURE(A68_BOOL ,A68t178,(struct A68t150 ,struct A68t150 ),(struct A68t150 ,struct A68t150 ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(MODE150,MODE150) BOOL */

A_PROCEDURE(A68_BOOL ,A68t179,(struct A68t162 ,struct A68t162 ),(struct A68t162 ,struct A68t162 ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(MODE162,MODE162) BOOL */

A_PROCEDURE(A68_BOOL ,A68t180,(struct A68t166 ,struct A68t166 ),(struct A68t166 ,struct A68t166 ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(MODE166,MODE166) BOOL */

A_PROCEDURE(A68_BOOL ,A68t181,(struct A68t172 ,struct A68t172 ),(struct A68t172 ,struct A68t172 ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(MODE172,MODE172) BOOL */

A_PROCEDURE(A68_BOOL ,A68t182,(struct A68t173 ,struct A68t173 ),(struct A68t173 ,struct A68t173 ,void *));
typedef struct A68t182  A68_182 ;    /* PROC(MODE173,MODE173) BOOL */

A_PROCEDURE(A68_BOOL ,A68t183,(struct A68t174 ,struct A68t174 ),(struct A68t174 ,struct A68t174 ,void *));
typedef struct A68t183  A68_183 ;    /* PROC(MODE174,MODE174) BOOL */

A_PROCEDURE(A68_BOOL ,A68t184,(struct A68t176 ,struct A68t176 ),(struct A68t176 ,struct A68t176 ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(MODE176,MODE176) BOOL */

A_PROCEDURE(struct A68t153 *,A68t185,(struct A68t153 *,struct A68t153 *),(struct A68t153 *,struct A68t153 *,void *));
typedef struct A68t185  A68_185 ;    /* PROC(REF MODE153,REF MODE153) REF MODE153 */

A_PROCEDURE(A68_VOID ,A68t186,(struct A68t167 ,struct A68t167 ,struct A68t167 *),(struct A68t167 ,struct A68t167 ,struct A68t167 *,void *));
typedef struct A68t186  A68_186 ;    /* PROC(REF MODE167,REF MODE167) REF MODE167 */

A_PROCEDURE(A68_INT ,A68t187,(A68_VC ),(A68_VC ,void *));
typedef struct A68t187  A68_187 ;    /* PROC(REF MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t188,(struct A68t113 ),(struct A68t113 ,void *));
typedef struct A68t188  A68_188 ;    /* PROC(MODE113) VOID */

A_PROCEDURE(A68_VOID ,A68t189,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t189  A68_189 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,57,A68t190);
typedef struct A68t190  A68_190 ;    /* STRUCT 57 CHAR */

A_PROCEDURE(A68_VC *,A68t191,(A68_VC ),(A68_VC ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(REF MODE26) REF REF MODE26 */

A_PROCEDURE(A68_INT ,A68t192,(A68_INT ,A68_INT *),(A68_INT ,A68_INT *,void *));
typedef struct A68t192  A68_192 ;    /* PROC(INT,REF INT) INT */

A_PROCEDURE(A68_VOID ,A68t193,(struct A68t122 *),(struct A68t122 *,void *));
typedef struct A68t193  A68_193 ;    /* PROC MODE122 */
struct A68t194{
A68_INT  Top;
A_PAD_INT(PAD_62)
A68_BOOL  Repeating;
A_PAD_BOOL(PAD_63)
struct A68t194 * Rest;
};
typedef struct A68t194  A68_194 ;    /* STRUCT(INT,BOOL,REF MODE194)  */
A_ISTRUCT(A68_CHAR ,11,A68t195);
typedef struct A68t195  A68_195 ;    /* STRUCT 11 CHAR */

A_PROCEDURE(A68_VOID ,A68t196,(struct A68t43 ,A68_INT ,struct A68t36 ),(struct A68t43 ,A68_INT ,struct A68t36 ,void *));
typedef struct A68t196  A68_196 ;    /* PROC(MODE43,INT,MODE36) VOID */
A_ISTRUCT(A68_CHAR ,45,A68t197);
typedef struct A68t197  A68_197 ;    /* STRUCT 45 CHAR */
A_ISTRUCT(A68_CHAR ,37,A68t198);
typedef struct A68t198  A68_198 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(A68_CHAR ,61,A68t199);
typedef struct A68t199  A68_199 ;    /* STRUCT 61 CHAR */
A_ISTRUCT(A68_CHAR ,51,A68t200);
typedef struct A68t200  A68_200 ;    /* STRUCT 51 CHAR */
struct A68t201{
A68_INT  N;
A_PAD_INT(PAD_64)
A68_VC  W;
};
typedef struct A68t201  A68_201 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t202{
A68_INT  N;
A_PAD_INT(PAD_65)
struct A68t121  A;
};
typedef struct A68t202  A68_202 ;    /* STRUCT(INT,MODE121)  */
struct A68t203{
A68_INT  N;
A_PAD_INT(PAD_66)
struct A68t122  Lab;
};
typedef struct A68t203  A68_203 ;    /* STRUCT(INT,MODE122)  */
struct A68t204{
struct A68t122  Lab;
struct A68t128 * Pin;
struct A68t128 * Pout;
};
typedef struct A68t204  A68_204 ;    /* STRUCT(MODE122,REF MODE128,REF MODE128)  */
struct A68t205{
struct A68t122  Lab;
A68_INT  Loc;
A_PAD_INT(PAD_67)
};
typedef struct A68t205  A68_205 ;    /* STRUCT(MODE122,INT)  */
struct A68t206{
A68_INT  N;
A_PAD_INT(PAD_68)
A68_INT  M;
A_PAD_INT(PAD_69)
struct A68t121  A;
};
typedef struct A68t206  A68_206 ;    /* STRUCT(INT,INT,MODE121)  */
struct A68t207{
struct A68t121  A;
struct A68t122  Lab;
};
typedef struct A68t207  A68_207 ;    /* STRUCT(MODE121,MODE122)  */
struct A68t208 { A68_INT mode; union {
struct A68t201  mode2;
A68_INT  mode3;
struct A68t202  mode4;
struct A68t122  mode5;
struct A68t203  mode6;
struct A68t204  mode7;
struct A68t205  mode8;
struct A68t206  mode9;
struct A68t207  mode10;
} data; };
typedef struct A68t208  A68_208 ;    /* UNION(VOID,MODE201,INT,MODE202,MODE122,MODE203,MODE204,MODE205,MODE206,MODE207)  */

A_PROCEDURE(A68_VOID ,A68t209,(struct A68t122 ,A68_VC *),(struct A68t122 ,A68_VC *,void *));
typedef struct A68t209  A68_209 ;    /* PROC(MODE122) MODE26 */
A_ISTRUCT(A68_CHAR ,5,A68t210);
typedef struct A68t210  A68_210 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t211);
typedef struct A68t211  A68_211 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t212);
typedef struct A68t212  A68_212 ;    /* STRUCT 2 CHAR */

A_PROCEDURE(A68_VOID ,A68t213,(struct A68t121 ,A68_VC *),(struct A68t121 ,A68_VC *,void *));
typedef struct A68t213  A68_213 ;    /* PROC(MODE121) MODE26 */
A_ISTRUCT(A68_CHAR ,8,A68t214);
typedef struct A68t214  A68_214 ;    /* STRUCT 8 CHAR */

A_PROCEDURE(A68_VOID ,A68t215,(struct A68t128 *,A68_VC *),(struct A68t128 *,A68_VC *,void *));
typedef struct A68t215  A68_215 ;    /* PROC(REF MODE128) MODE26 */
A_ISTRUCT(A68_CHAR ,1,A68t216);
typedef struct A68t216  A68_216 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t217);
typedef struct A68t217  A68_217 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,4,A68t218);
typedef struct A68t218  A68_218 ;    /* STRUCT 4 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t219);
typedef struct A68t219  A68_219 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t220);
typedef struct A68t220  A68_220 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t221);
typedef struct A68t221  A68_221 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t222);
typedef struct A68t222  A68_222 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t223);
typedef struct A68t223  A68_223 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t224);
typedef struct A68t224  A68_224 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t225);
typedef struct A68t225  A68_225 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t226);
typedef struct A68t226  A68_226 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t227);
typedef struct A68t227  A68_227 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_VC ,52,A68t228);
typedef struct A68t228  A68_228 ;    /* STRUCT 52 MODE26 */

A_PROCEDURE(A68_VOID ,A68t229,(A68_INT ,struct A68t208 ),(A68_INT ,struct A68t208 ,void *));
typedef struct A68t229  A68_229 ;    /* PROC(INT,MODE208) VOID */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from kebasics --- */
#define QSAASIM_diagnoseamcode 0X4U
extern A68_VOID  NKDAOST_sysfault(A68_VC );
/* --- End of imports from kebasics --- */


/* --- Imports from kecodegensparc --- */
extern A68_VOID  BQMASIM_generatehalt(void);
extern A68_VOID  NQMASIM_generateadd(void);
extern A68_VOID  OQMASIM_generatesub(void);
extern A68_VOID  TQMASIM_generatemul(void);
extern A68_VOID  UQMASIM_generatediv(void);
extern A68_VOID  VQMASIM_generatemod(void);
extern A68_VOID  WQMASIM_generateneg(void);
extern A68_VOID  BRMASIM_generateabs(void);
extern A68_VOID  JRMASIM_generateiand(void);
extern A68_VOID  LRMASIM_generateior(void);
extern A68_VOID  NRMASIM_generateshl(void);
extern A68_VOID  ORMASIM_generateshr(void);
extern A68_VOID  PRMASIM_generatecom(void);
extern A68_VOID  SRMASIM_generatetest(void);
extern A68_VOID  TRMASIM_generateeq(void);
extern A68_VOID  URMASIM_generateneq(void);
extern A68_VOID  VRMASIM_generategt(void);
extern A68_VOID  WRMASIM_generatege(void);
extern A68_VOID  XRMASIM_generatelt(void);
extern A68_VOID  YRMASIM_generatele(void);
extern A68_VOID  ZRMASIM_generateand(void);
extern A68_VOID  BSMASIM_generateor(void);
extern A68_VOID  RRMASIM_generatenot(void);
extern A68_VOID  FSMASIM_generatepushstring(A68_INT ,A68_VC );
extern A68_VOID  ISMASIM_generatepushint(A68_INT );
extern A68_VOID  KSMASIM_generatedrop(A68_INT );
extern A68_VOID  MSMASIM_generatelocal(A68_INT );
extern A68_VOID  PSMASIM_generateglobal(A68_INT ,struct A68t121 );
extern A68_VOID  VSMASIM_generatestore(A68_INT ,struct A68t121 );
extern A68_VOID  ITMASIM_generatebstring(A68_INT ,A68_INT ,struct A68t121 );
extern A68_VOID  OTMASIM_generatebstore(A68_INT ,struct A68t121 );
extern A68_VOID  QTMASIM_generateitos(A68_INT );
extern A68_VOID  STMASIM_generateutos(A68_INT );
extern A68_VOID  TTMASIM_generatestoi(void);
extern A68_VOID  UTMASIM_generatestou(void);
extern A68_VOID  WTMASIM_generatejump(struct A68t122 );
extern A68_VOID  EUMASIM_generatejumpno(A68_INT ,struct A68t122 );
extern A68_VOID  WUMASIM_generatelabel(A68_INT ,struct A68t122 );
extern A68_VOID  AVMASIM_generaterepeat(void);
extern A68_VOID  BVMASIM_generateloop(void);
extern A68_VOID  WVMASIM_generatecallinst(struct A68t121 ,struct A68t122 );
extern A68_VOID  FXMASIM_generatecall(A68_INT ,struct A68t122 );
extern A68_VOID  IYMASIM_generateenter(void);
extern A68_VOID  KYMASIM_generatefanout(A68_INT );
extern A68_VOID  MYMASIM_generateret(A68_INT );
extern A68_VOID  VYMASIM_generatenamedcode(struct A68t122 ,struct A68t128 *,struct A68t128 *);
extern A68_VOID  JZMASIM_generatenameddata(struct A68t122 ,A68_INT );
extern A68_VOID  OZMASIM_generateparamtypes(struct A68t122 ,struct A68t128 *,struct A68t128 *);
extern A68_VOID  RZMASIM_generate(struct A68t36 );
extern A68_VOID  OKMASIM_cginitialise(struct A68t43 ,A68_INT ,struct A68t36 ,A68_133 *);
extern A68_VOID  SZMASIM_generateenddecls(void);
extern A68_VOID  FANASIM_generateca(struct A68t36 );
extern A68_VOID  SANASIM_generateendca(void);
extern A68_VOID  PDNASIM_cgclosedown(struct A68t36 );
extern A68_128 * GYFASIM_nilparams;
/* --- End of imports from kecodegensparc --- */


/* --- Imports from basics --- */
extern A68_VOID  RSCAOST_makeid(A68_VC ,A68_VC *);
/* --- End of imports from basics --- */


/* --- Imports from putstrings --- */
extern A68_VOID  FCAAOSI_intchars(A68_INT ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void JSAASIM(void);   /* kebasics */
extern void THMASIM(void);   /* kecodegensparc */
extern void JSCAOST(void);   /* basics */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_190   AENASIM = {"$Id: keambasics.a68,v 34.2 1995/03/29 13:04:33 ella Exp $"}; 
A_GISVEC(A68_VC ,BENASIM,AENASIM,57)
#define CENASIM_bitsperbyte 8
A68_INT  DENASIM_ws;
A68_BOOL  EENASIM_amversionup;
A68_191  FENASIM_up;
A68_INT  GENASIM_sizeunit;
A68_192  HENASIM_al;
#define MFNASIM_softinterrupt 1
#define NFNASIM_hardinterrupt 2
#define OFNASIM_sqrterror 4
#define PFNASIM_arithmeticerror 8
#define QFNASIM_anyexception 15
static A68_INT  RFNASIM_labelseed;
static A68_VC  WFNASIM_dummytag;
static A68_194 * BGNASIM_labelstack;
static A68_195   KGNASIM = {"label stack"}; 
A_GISVEC(A68_VC ,LGNASIM,KGNASIM,11)
static A68_43  NGNASIM_putdiag;
static A68_BOOL  OGNASIM_showamcode;
static A68_197   ZGNASIM = {"Word size must be a multiple of the size unit"}; 
A_GISVEC(A68_VC ,AHNASIM,ZGNASIM,45)
static A68_198   BHNASIM = {"Word size and size unit must be equal"}; 
A_GISVEC(A68_VC ,CHNASIM,BHNASIM,37)
static A68_199   JHNASIM = {"Alignment stricter than size unit in abstract machine version"}; 
A_GISVEC(A68_VC ,KHNASIM,JHNASIM,61)
static A68_200   XHNASIM = {"Cannot translate for this abstract machine version!"}; 
A_GISVEC(A68_VC ,YHNASIM,XHNASIM,51)
static A68_210   DINASIM = {"(Lab "}; 
A_GISVEC(A68_VC ,FINASIM,DINASIM,5)
static A68_211   IINASIM = {"(Tag \""}; 
static A68_212   JINASIM = {"\")"}; 
A_GISVEC(A68_VC ,KINASIM,IINASIM,6)
A_GISVEC(A68_VC ,LINASIM,JINASIM,2)
static A68_214   QINASIM = {"(Offset "}; 
A_GISVEC(A68_VC ,SINASIM,QINASIM,8)
static A68_214   XINASIM = {"Indirect"}; 
A_GISVEC(A68_VC ,YINASIM,XINASIM,8)
static A68_216   WJNASIM = {""}; 
A_GISVEC(A68_VC ,YJNASIM,WJNASIM,0)
static A68_214   ZJNASIM = {" Unknown"}; 
A_GISVEC(A68_VC ,BKNASIM,ZJNASIM,8)
static A68_214   CKNASIM = {" Fixed ("}; 
A_GISVEC(A68_VC ,DKNASIM,CKNASIM,8)
static A68_217   GKNASIM = {" Instance ptr"}; 
A_GISVEC(A68_VC ,HKNASIM,GKNASIM,13)
static A68_214   IKNASIM = {" Boolean"}; 
A_GISVEC(A68_VC ,JKNASIM,IKNASIM,8)
static A68_214   KKNASIM = {" Integer"}; 
A_GISVEC(A68_VC ,LKNASIM,KKNASIM,8)
static A68_210   OKNASIM = {"\011Halt"}; 
A_GISVEC(A68_VC ,PKNASIM,OKNASIM,5)
static A68_218   QKNASIM = {"\011Add"}; 
A_GISVEC(A68_VC ,RKNASIM,QKNASIM,4)
static A68_218   SKNASIM = {"\011Sub"}; 
A_GISVEC(A68_VC ,TKNASIM,SKNASIM,4)
static A68_218   UKNASIM = {"\011Mul"}; 
A_GISVEC(A68_VC ,VKNASIM,UKNASIM,4)
static A68_218   WKNASIM = {"\011Div"}; 
A_GISVEC(A68_VC ,XKNASIM,WKNASIM,4)
static A68_218   YKNASIM = {"\011Mod"}; 
A_GISVEC(A68_VC ,ZKNASIM,YKNASIM,4)
static A68_218   ALNASIM = {"\011Neg"}; 
A_GISVEC(A68_VC ,BLNASIM,ALNASIM,4)
static A68_218   CLNASIM = {"\011Abs"}; 
A_GISVEC(A68_VC ,DLNASIM,CLNASIM,4)
static A68_210   ELNASIM = {"\011Iand"}; 
A_GISVEC(A68_VC ,FLNASIM,ELNASIM,5)
static A68_218   GLNASIM = {"\011Ior"}; 
A_GISVEC(A68_VC ,HLNASIM,GLNASIM,4)
static A68_218   ILNASIM = {"\011Shl"}; 
A_GISVEC(A68_VC ,JLNASIM,ILNASIM,4)
static A68_218   KLNASIM = {"\011Shr"}; 
A_GISVEC(A68_VC ,LLNASIM,KLNASIM,4)
static A68_218   MLNASIM = {"\011Com"}; 
A_GISVEC(A68_VC ,NLNASIM,MLNASIM,4)
static A68_210   OLNASIM = {"\011Test"}; 
A_GISVEC(A68_VC ,PLNASIM,OLNASIM,5)
static A68_219   QLNASIM = {"\011Eq"}; 
A_GISVEC(A68_VC ,RLNASIM,QLNASIM,3)
static A68_218   SLNASIM = {"\011Neq"}; 
A_GISVEC(A68_VC ,TLNASIM,SLNASIM,4)
static A68_219   ULNASIM = {"\011Gt"}; 
A_GISVEC(A68_VC ,VLNASIM,ULNASIM,3)
static A68_219   WLNASIM = {"\011Ge"}; 
A_GISVEC(A68_VC ,XLNASIM,WLNASIM,3)
static A68_219   YLNASIM = {"\011Lt"}; 
A_GISVEC(A68_VC ,ZLNASIM,YLNASIM,3)
static A68_219   AMNASIM = {"\011Le"}; 
A_GISVEC(A68_VC ,BMNASIM,AMNASIM,3)
static A68_218   CMNASIM = {"\011And"}; 
A_GISVEC(A68_VC ,DMNASIM,CMNASIM,4)
static A68_219   EMNASIM = {"\011Or"}; 
A_GISVEC(A68_VC ,FMNASIM,EMNASIM,3)
static A68_218   GMNASIM = {"\011Not"}; 
A_GISVEC(A68_VC ,HMNASIM,GMNASIM,4)
static A68_220   IMNASIM = {"\011Pushstring "}; 
A_GISVEC(A68_VC ,JMNASIM,IMNASIM,12)
static A68_221   KMNASIM = {"\011Pushint\011 "}; 
A_GISVEC(A68_VC ,LMNASIM,KMNASIM,10)
static A68_222   MMNASIM = {"\011Drop\011 "}; 
A_GISVEC(A68_VC ,NMNASIM,MMNASIM,7)
static A68_214   OMNASIM = {"\011Local\011 "}; 
A_GISVEC(A68_VC ,PMNASIM,OMNASIM,8)
static A68_223   QMNASIM = {"\011Global\011 "}; 
A_GISVEC(A68_VC ,RMNASIM,QMNASIM,9)
static A68_214   SMNASIM = {"\011Store\011 "}; 
A_GISVEC(A68_VC ,TMNASIM,SMNASIM,8)
static A68_221   UMNASIM = {"\011Bstring\011 "}; 
A_GISVEC(A68_VC ,VMNASIM,UMNASIM,10)
static A68_223   WMNASIM = {"\011Bstore\011 "}; 
A_GISVEC(A68_VC ,XMNASIM,WMNASIM,9)
static A68_214   YMNASIM = {"  Itos\011 "}; 
A_GISVEC(A68_VC ,ZMNASIM,YMNASIM,8)
static A68_222   ANNASIM = {"\011Utos\011 "}; 
A_GISVEC(A68_VC ,BNNASIM,ANNASIM,7)
static A68_210   CNNASIM = {"\011Stoi"}; 
A_GISVEC(A68_VC ,DNNASIM,CNNASIM,5)
static A68_210   ENNASIM = {"\011Stou"}; 
A_GISVEC(A68_VC ,FNNASIM,ENNASIM,5)
static A68_222   GNNASIM = {"\011Jump\011 "}; 
A_GISVEC(A68_VC ,HNNASIM,GNNASIM,7)
static A68_221   INNASIM = {"\011Jump no\011 "}; 
A_GISVEC(A68_VC ,JNNASIM,INNASIM,10)
static A68_214   KNNASIM = {"\011Label\011 "}; 
A_GISVEC(A68_VC ,LNNASIM,KNNASIM,8)
static A68_222   MNNASIM = {"\011Repeat"}; 
A_GISVEC(A68_VC ,NNNASIM,MNNASIM,7)
static A68_210   ONNASIM = {"\011Loop"}; 
A_GISVEC(A68_VC ,PNNASIM,ONNASIM,5)
static A68_221   QNNASIM = {"\011Callinst "}; 
A_GISVEC(A68_VC ,RNNASIM,QNNASIM,10)
static A68_222   SNNASIM = {"\011Call\011 "}; 
A_GISVEC(A68_VC ,TNNASIM,SNNASIM,7)
static A68_211   UNNASIM = {"\011Enter"}; 
A_GISVEC(A68_VC ,VNNASIM,UNNASIM,6)
static A68_223   WNNASIM = {"\011Fanout\011 "}; 
A_GISVEC(A68_VC ,XNNASIM,WNNASIM,9)
static A68_211   YNNASIM = {"\011Ret\011 "}; 
A_GISVEC(A68_VC ,ZNNASIM,YNNASIM,6)
static A68_224   AONASIM = {"generate named code "}; 
A_GISVEC(A68_VC ,BONASIM,AONASIM,20)
static A68_224   CONASIM = {"generate named data "}; 
A_GISVEC(A68_VC ,DONASIM,CONASIM,20)
static A68_225   EONASIM = {"generate param types "}; 
A_GISVEC(A68_VC ,FONASIM,EONASIM,21)
static A68_223   GONASIM = {"generate "}; 
A_GISVEC(A68_VC ,HONASIM,GONASIM,9)
static A68_226   IONASIM = {"generate end decls "}; 
A_GISVEC(A68_VC ,JONASIM,IONASIM,19)
static A68_195   KONASIM = {"generateca "}; 
A_GISVEC(A68_VC ,LONASIM,KONASIM,11)
static A68_227   MONASIM = {"generate endca "}; 
A_GISVEC(A68_VC ,NONASIM,MONASIM,15)
static A68_46  PONASIM_amnames;
#define QONASIM_haltinstr 1
#define RONASIM_addinstr 2
#define SONASIM_subinstr 3
#define TONASIM_mulinstr 4
#define UONASIM_divinstr 5
#define VONASIM_modinstr 6
#define WONASIM_neginstr 7
#define XONASIM_absinstr 8
#define YONASIM_iandinstr 9
#define ZONASIM_iorinstr 10
#define APNASIM_shlinstr 11
#define BPNASIM_shrinstr 12
#define CPNASIM_cominstr 13
#define DPNASIM_testinstr 14
#define EPNASIM_eqinstr 15
#define FPNASIM_neqinstr 16
#define GPNASIM_gtinstr 17
#define HPNASIM_geinstr 18
#define IPNASIM_ltinstr 19
#define JPNASIM_leinstr 20
#define KPNASIM_andinstr 21
#define LPNASIM_orinstr 22
#define MPNASIM_notinstr 23
#define NPNASIM_pushstringinstr 24
#define OPNASIM_pushintinstr 25
#define PPNASIM_dropinstr 26
#define QPNASIM_localinstr 27
#define RPNASIM_globalinstr 28
#define SPNASIM_storeinstr 29
#define TPNASIM_bstringinstr 30
#define UPNASIM_bstoreinstr 31
#define VPNASIM_itosinstr 32
#define WPNASIM_utosinstr 33
#define XPNASIM_stoiinstr 34
#define YPNASIM_stouinstr 35
#define ZPNASIM_jumpinstr 36
#define AQNASIM_jumpnoinstr 37
#define BQNASIM_labelinstr 38
#define CQNASIM_repeatinstr 39
#define DQNASIM_loopinstr 40
#define EQNASIM_callinstinstr 41
#define FQNASIM_callinstr 42
#define GQNASIM_enterinstr 43
#define HQNASIM_fanoutinstr 44
#define IQNASIM_retinstr 45
#define JQNASIM_generatenamedcodeop 46
#define KQNASIM_generatenameddataop 47
#define LQNASIM_generateparamtypesop 48
#define MQNASIM_generateop 49
#define NQNASIM_generateenddeclsop 50
#define OQNASIM_generatecaop 51
#define PQNASIM_generateendcaop 52
static A68_216   UQNASIM = {""}; 
A_GISVEC(A68_VC ,WQNASIM,UQNASIM,0)
static A68_212   ORNASIM = {", "}; 
static A68_212   PRNASIM = {", "}; 
A_GISVEC(A68_VC ,SRNASIM,ORNASIM,2)
A_GISVEC(A68_VC ,URNASIM,PRNASIM,2)
static A68_212   YRNASIM = {", "}; 
A_GISVEC(A68_VC ,BSNASIM,YRNASIM,2)
typedef struct   /* env of non-global proc */
{
int dummy;
} EJNASIM_generator;

A_STATIC A68_VC * JENASIM_identity(A68_VC  Word);

A_STATIC A68_VC * NENASIM_reverse(A68_VC  Word);

A_STATIC A68_INT  AFNASIM_bytealignment(A68_INT  A, A68_INT * Size);

A_STATIC A68_INT  GFNASIM_sizeunitalignment(A68_INT  A, A68_INT * Size);

A_STATIC A68_VOID  TFNASIM_generator(A68_BOOL  SFNASIM_anonymous, A68_VC  *ReturnedValue);

A68_VOID  YFNASIM_newlabel(A68_122  *ReturnedValue);

A68_VOID  CGNASIM_marklabelsequence(void);

A68_VOID  FGNASIM_repeatlabelsequence(void);

A68_VOID  MGNASIM_continuelabelsequence(void);

A68_VOID  SGNASIM_aminitialise(A68_43  Diag, A68_INT  Level, A68_36  Flt);

A68_VOID  AINASIM_amclosedown(A68_36  Flt);

A_STATIC A68_VOID  CINASIM_text(A68_122  Label, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  NINASIM_text(A68_121  Address, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  AJNASIM_text(A68_VC  Word, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  DJNASIM_generator(A68_BOOL  BJNASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VJNASIM_text(A68_128 * Params, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  SQNASIM_xput(A68_INT  Instruction, A68_208  Operands);

A68_VOID  QSNASIM_amhalt(void);

A68_VOID  SSNASIM_amadd(void);

A68_VOID  USNASIM_amsub(void);

A68_VOID  WSNASIM_ammul(void);

A68_VOID  YSNASIM_amdiv(void);

A68_VOID  ATNASIM_ammod(void);

A68_VOID  CTNASIM_amneg(void);

A68_VOID  ETNASIM_amabs(void);

A68_VOID  GTNASIM_amiand(void);

A68_VOID  ITNASIM_amior(void);

A68_VOID  KTNASIM_amshl(void);

A68_VOID  MTNASIM_amshr(void);

A68_VOID  OTNASIM_amcom(void);

A68_VOID  QTNASIM_amtest(void);

A68_VOID  STNASIM_ameq(void);

A68_VOID  UTNASIM_amneq(void);

A68_VOID  WTNASIM_amgt(void);

A68_VOID  YTNASIM_amge(void);

A68_VOID  AUNASIM_amlt(void);

A68_VOID  CUNASIM_amle(void);

A68_VOID  EUNASIM_amand(void);

A68_VOID  GUNASIM_amor(void);

A68_VOID  IUNASIM_amnot(void);

A68_VOID  MUNASIM_ampushstring(A68_INT  N, A68_VC  W);

A68_VOID  QUNASIM_ampushint(A68_INT  N);

A68_VOID  TUNASIM_amdrop(A68_INT  N);

A68_VOID  WUNASIM_amlocal(A68_INT  N);

A68_VOID  AVNASIM_amglobal(A68_INT  N, A68_121  A);

A68_VOID  FVNASIM_amstore(A68_INT  N, A68_121  A);

A68_VOID  LVNASIM_ambstring(A68_INT  N, A68_INT  M, A68_121  A);

A68_VOID  QVNASIM_ambstore(A68_INT  N, A68_121  A);

A68_VOID  UVNASIM_amitos(A68_INT  N);

A68_VOID  XVNASIM_amutos(A68_INT  N);

A68_VOID  ZVNASIM_amstoi(void);

A68_VOID  BWNASIM_amstou(void);

A68_VOID  EWNASIM_amjump(A68_122  Lab);

A68_VOID  IWNASIM_amjumpno(A68_INT  N, A68_122  Lab);

A68_VOID  NWNASIM_amlabel(A68_INT  N, A68_122  Lab);

A68_VOID  QWNASIM_amrepeat(void);

A68_VOID  SWNASIM_amloop(void);

A68_VOID  WWNASIM_amcallinst(A68_121  Inst, A68_122  Lab);

A68_VOID  BXNASIM_amcall(A68_INT  N, A68_122  Lab);

A68_VOID  EXNASIM_amenter(void);

A68_VOID  HXNASIM_amfanout(A68_INT  N);

A68_VOID  KXNASIM_amret(A68_INT  N);

A68_VOID  PXNASIM_amgeneratenamedcode(A68_122  Lab, A68_128 * Pin, A68_128 * Pout);

A68_VOID  UXNASIM_amgeneratenameddata(A68_122  Lab, A68_INT  Loc);

A68_VOID  AYNASIM_amgenerateparamtypes(A68_122  Lab, A68_128 * Pin, A68_128 * Pout);

A68_VOID  EYNASIM_amgenerate(A68_36  Flt);

A68_VOID  GYNASIM_amgenerateenddecls(void);

A68_VOID  JYNASIM_amgenerateca(A68_36  Flt);

A68_VOID  LYNASIM_amgenerateendca(void);

A_STATIC A68_VOID  DJNASIM_generator(A68_BOOL  BJNASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((EJNASIM_generator *)NonLocals)->x)
{ 
A68_VC  FJNASIM;  /* clause result */
A68_VC  GJNASIM;  /* OPERATORS - dynamic generator */
{ 
GJNASIM.upb = 1 ;
( BJNASIM_anonymous? A_VLOC(A68_CHAR ,GJNASIM): A_VHEAP(A68_CHAR ,GJNASIM) );
FJNASIM = GJNASIM;
} 
*ReturnedValue = (FJNASIM);
return;
} 
#undef NL

A_STATIC A68_VC * JENASIM_identity(A68_VC  Word)
{ 
A68_VC * KENASIM;  /* clause result */
A68_VC * LENASIM;  /* YIELD */
A_PROC_ENTRY(identity);
LENASIM = A_HEAP(A68_VC ) ;
(*LENASIM) = Word ;
KENASIM = LENASIM;
A_PROC_EXIT(identity);
return( KENASIM );
} 
#undef NL

A_STATIC A68_VC * NENASIM_reverse(A68_VC  Word)
{ 
A68_INT  OENASIM_top;
A68_INT  PENASIM_i;
A68_INT  QENASIM;  /* to part of loop */
A68_INT  RENASIM;  /* YIELD */
A68_CHAR  SENASIM_upper;
A68_INT  TENASIM;  /* YIELD */
A68_CHAR * UENASIM;  /* YIELD */
A68_CHAR * VENASIM;  /* YIELD */
A68_VC * WENASIM;  /* clause result */
A68_VC * XENASIM;  /* YIELD */
A_PROC_ENTRY(reverse);
 /* line 103: */
 /* line 104: */
{ 
OENASIM_top = (Word.upb+1);
 /* line 105: */
QENASIM = (Word.upb/2);
for ( PENASIM_i = 1;
PENASIM_i <= QENASIM;
PENASIM_i += 1 )
{ 
 /* line 106: */
RENASIM = (OENASIM_top-PENASIM_i) ;
SENASIM_upper = (*(&A_VINDEX(Word,RENASIM)));
 /* line 107: */
TENASIM = (OENASIM_top-PENASIM_i) ;
UENASIM = (&A_VINDEX(Word,TENASIM)) ;
(*UENASIM) = (*(&A_VINDEX(Word,PENASIM_i)));
 /* line 108: */
 /* line 109: */
VENASIM = (&A_VINDEX(Word,PENASIM_i)) ;
(*VENASIM) = SENASIM_upper;
}
 /* line 110: */
 /* line 111: */
XENASIM = A_HEAP(A68_VC ) ;
(*XENASIM) = Word ;
WENASIM = XENASIM;
} 
A_PROC_EXIT(reverse);
return( WENASIM );
} 
#undef NL

A_STATIC A68_INT  AFNASIM_bytealignment(A68_INT  A, A68_INT * Size)
{ 
A68_INT  BFNASIM;  /* ADICOPS - MOD */
A68_INT  CFNASIM;  /* ADICOPS - MOD */
A68_INT  DFNASIM;  /* clause result */
A_PROC_ENTRY(bytealignment);
 /* line 120: */
 /* line 121: */
{ 
CFNASIM = (-(*Size)) ;
(*Size)+=A_MOD(CFNASIM,GENASIM_sizeunit,BFNASIM);
 /* line 122: */
 /* line 123: */
DFNASIM = A;
} 
A_PROC_EXIT(bytealignment);
return( DFNASIM );
} 
#undef NL

A_STATIC A68_INT  GFNASIM_sizeunitalignment(A68_INT  A, A68_INT * Size)
{ 
A68_INT  HFNASIM;  /* ADICOPS - MOD */
A68_INT  IFNASIM;  /* ADICOPS - MOD */
A68_INT  JFNASIM;  /* clause result */
A68_INT  KFNASIM;  /* ADICOPS - MOD */
A68_INT  LFNASIM;  /* ADICOPS - MOD */
A_PROC_ENTRY(sizeunitalignment);
 /* line 126: */
 /* line 127: */
{ 
IFNASIM = (-(*Size)) ;
(*Size)+=A_MOD(IFNASIM,GENASIM_sizeunit,HFNASIM);
 /* line 128: */
 /* line 129: */
LFNASIM = (-A) ;
JFNASIM = (A+A_MOD(LFNASIM,GENASIM_sizeunit,KFNASIM));
} 
A_PROC_EXIT(sizeunitalignment);
return( JFNASIM );
} 
#undef NL

A_STATIC A68_VOID  TFNASIM_generator(A68_BOOL  SFNASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  UFNASIM;  /* clause result */
A68_VC  VFNASIM;  /* OPERATORS - dynamic generator */
{ 
VFNASIM.upb = 0 ;
( SFNASIM_anonymous? A_VLOC(A68_CHAR ,VFNASIM): A_VHEAP(A68_CHAR ,VFNASIM) );
UFNASIM = VFNASIM;
} 
*ReturnedValue = (UFNASIM);
return;
} 
#undef NL

A68_VOID  YFNASIM_newlabel(A68_122  *ReturnedValue)
{ 
A68_122  ZFNASIM;  /* collateral clause result */
A68_122  AGNASIM;  /* clause result */
A_PROC_ENTRY(newlabel);
ZFNASIM.Lab = RFNASIM_labelseed+=1;
ZFNASIM.Tag = WFNASIM_dummytag;
AGNASIM = ZFNASIM;
A_PROC_EXIT(newlabel);
*ReturnedValue = (AGNASIM);
return;
} 
#undef NL

A68_VOID  CGNASIM_marklabelsequence(void)
{ 
A68_194  DGNASIM;  /* collateral clause result */
A68_194 * EGNASIM;  /* YIELD */
A_PROC_ENTRY(marklabelsequence);
DGNASIM.Top = RFNASIM_labelseed;
DGNASIM.Repeating = A68_FALSE;
DGNASIM.Rest = BGNASIM_labelstack;
EGNASIM = A_HEAP(A68_194 ) ;
(*EGNASIM) = DGNASIM ;
BGNASIM_labelstack = EGNASIM;
A_PROC_EXIT(marklabelsequence);
return;
} 
#undef NL

A68_VOID  FGNASIM_repeatlabelsequence(void)
{ 
A68_BOOL  GGNASIM;  /* optbool result */
A68_BOOL * HGNASIM;  /* YIELD */
A68_INT  IGNASIM_repeatat;
A68_INT * JGNASIM;  /* YIELD */
A_PROC_ENTRY(repeatlabelsequence);
 /* line 184: */
GGNASIM = (BGNASIM_labelstack!=(A68_194 *)A68_NIL);
if ( GGNASIM )
{GGNASIM = !(*(&(BGNASIM_labelstack->Repeating)));
}
 /* line 185: */
if ( GGNASIM )
{ 
HGNASIM = (&(BGNASIM_labelstack->Repeating)) ;
(*HGNASIM) = A68_TRUE;
 /* line 186: */
IGNASIM_repeatat = (*(&(BGNASIM_labelstack->Top)));
 /* line 187: */
JGNASIM = (&(BGNASIM_labelstack->Top)) ;
(*JGNASIM) = RFNASIM_labelseed;
 /* line 188: */
 /* line 189: */
 /* line 190: */
RFNASIM_labelseed = IGNASIM_repeatat;
} 
else
{ 
 /* line 191: */
NKDAOST_sysfault(LGNASIM);
} 
A_PROC_EXIT(repeatlabelsequence);
return;
} 
#undef NL

A68_VOID  MGNASIM_continuelabelsequence(void)
{ 
A_PROC_ENTRY(continuelabelsequence);
{ 
 /* line 196: */
if ( (*(&(BGNASIM_labelstack->Repeating))) )
{ 
 /* line 197: */
RFNASIM_labelseed = (*(&(BGNASIM_labelstack->Top)));
} 
 /* line 198: */
 /* line 199: */
BGNASIM_labelstack = (*(&(BGNASIM_labelstack->Rest)));
} 
A_PROC_EXIT(continuelabelsequence);
return;
} 
#undef NL

A68_VOID  SGNASIM_aminitialise(A68_43  Diag, A68_INT  Level, A68_36  Flt)
{ 
A68_BITS  TGNASIM;  /* ADICOPS - <= */
A68_133  UGNASIM;  /* avoid structure result */
A68_133  VGNASIM_version;
A68_191  WGNASIM;  /* procedure value */
A68_191  XGNASIM;  /* procedure value */
A68_INT  YGNASIM;  /* ADICOPS - MOD */
A68_INT  DHNASIM_i;
A68_INT  EHNASIM;  /* to part of loop */
A68_INT  FHNASIM;  /* ADICOPS - ** */
A68_32  GHNASIM;  /* OPERATORS - simple index */
A68_INT  HHNASIM;  /* ADICOPS - MOD */
A68_INT  IHNASIM;  /* ADICOPS - MOD */
A68_BOOL  LHNASIM;  /* optbool result */
A68_32  MHNASIM;  /* OPERATORS - simple index */
A68_INT  NHNASIM;  /* YIELD */
A68_192  OHNASIM;  /* procedure value */
A68_BOOL  PHNASIM;  /* optbool result */
A68_32  QHNASIM;  /* OPERATORS - simple index */
A68_INT  RHNASIM;  /* YIELD */
A68_32  SHNASIM;  /* OPERATORS - simple index */
A68_INT  THNASIM;  /* YIELD */
A68_32  UHNASIM;  /* OPERATORS - simple index */
A68_INT  VHNASIM;  /* YIELD */
A68_192  WHNASIM;  /* procedure value */
A_PROC_ENTRY(aminitialise);
 /* line 222: */
 /* line 223: */
{ 
NGNASIM_putdiag = Diag;
 /* line 224: */
TGNASIM = (A68_BITS )Level ;
OGNASIM_showamcode = A_LB_LE(QSAASIM_diagnoseamcode,TGNASIM);
 /* line 225: */
RFNASIM_labelseed = 0;
 /* line 226: */
OKMASIM_cginitialise( Diag, Level, Flt, &UGNASIM );
VGNASIM_version = UGNASIM;
 /* line 227: */
DENASIM_ws = VGNASIM_version.Ws;
 /* line 228: */
EENASIM_amversionup = VGNASIM_version.Up;
 /* line 229: */
 /* line 230: */
if ( VGNASIM_version.Up )
{ 
 /* line 231: */
 /* line 232: */
WGNASIM.fn.fn_global = NENASIM_reverse;
WGNASIM.nonlocals = A68_NIL;
FENASIM_up = WGNASIM;
} 
else
{ 
 /* line 233: */
XGNASIM.fn.fn_global = JENASIM_identity;
XGNASIM.nonlocals = A68_NIL;
FENASIM_up = XGNASIM;
} 
 /* line 234: */
GENASIM_sizeunit = VGNASIM_version.Sizeunit;
 /* line 235: */
 /* line 236: */
if ( (A_MOD(DENASIM_ws,GENASIM_sizeunit,YGNASIM)!=0) )
{ 
 /* line 237: */
NKDAOST_sysfault(AHNASIM);
} 
 /* line 238: */
 /* line 239: */
if ( (DENASIM_ws!=GENASIM_sizeunit) )
{ 
 /* line 240: */
NKDAOST_sysfault(CHNASIM);
} 
 /* line 241: */
EHNASIM = VGNASIM_version.Al.upb;
for ( DHNASIM_i = 1;
DHNASIM_i <= EHNASIM;
DHNASIM_i += 1 )
{ 
 /* line 242: */
FHNASIM = 2 ;
if ( !((A_LI_POWER(FHNASIM,DHNASIM_i,(A68_INT ))<=GENASIM_sizeunit)) ) break;
 /* line 243: */
GHNASIM = VGNASIM_version.Al ;
IHNASIM = (*(&A_VINDEX(GHNASIM,DHNASIM_i))) ;
if ( (A_MOD(GENASIM_sizeunit,IHNASIM,HHNASIM)!=0) )
{ 
 /* line 244: */
 /* line 245: */
NKDAOST_sysfault(KHNASIM);
} 
}
 /* line 246: */
LHNASIM = (VGNASIM_version.Al.upb==1);
if ( LHNASIM )
{MHNASIM = VGNASIM_version.Al ;
NHNASIM = 1 ;
LHNASIM = ((*(&A_VINDEX(MHNASIM,NHNASIM)))==1);
}
 /* line 247: */
if ( LHNASIM )
{ 
 /* line 248: */
OHNASIM.fn.fn_global = AFNASIM_bytealignment;
OHNASIM.nonlocals = A68_NIL;
HENASIM_al = OHNASIM;
} 
else
{ 
PHNASIM = (VGNASIM_version.Al.upb==3);
if ( PHNASIM )
{QHNASIM = VGNASIM_version.Al ;
RHNASIM = 1 ;
PHNASIM = ((*(&A_VINDEX(QHNASIM,RHNASIM)))==1);
}
 /* line 249: */
if ( PHNASIM )
{SHNASIM = VGNASIM_version.Al ;
THNASIM = 2 ;
PHNASIM = ((*(&A_VINDEX(SHNASIM,THNASIM)))==2);
}
if ( PHNASIM )
{ /* line 250: */
UHNASIM = VGNASIM_version.Al ;
VHNASIM = 3 ;
PHNASIM = ((*(&A_VINDEX(UHNASIM,VHNASIM)))==4);
}
 /* line 251: */
if ( PHNASIM )
{ 
 /* line 252: */
 /* line 253: */
WHNASIM.fn.fn_global = GFNASIM_sizeunitalignment;
WHNASIM.nonlocals = A68_NIL;
HENASIM_al = WHNASIM;
} 
else
{ 
 /* line 254: */
 /* line 255: */
NKDAOST_sysfault(YHNASIM);
} 
} 
} 
A_PROC_EXIT(aminitialise);
return;
} 
#undef NL

A68_VOID  AINASIM_amclosedown(A68_36  Flt)
{ 
A_PROC_ENTRY(amclosedown);
PDNASIM_cgclosedown(Flt);
A_PROC_EXIT(amclosedown);
return;
} 
#undef NL

A_STATIC A68_VOID  CINASIM_text(A68_122  Label, A68_VC  *ReturnedValue)
{ 
A68_VC  EINASIM;  /* clause result */
A68_VC  GINASIM;  /* avoid structure result */
A68_VC  HINASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(text);
 /* line 282: */
 /* line 283: */
if ( (Label.Lab!=0) )
{ 
 /* line 284: */
 /* line 285: */
FCAAOSI_intchars( Label.Lab, &GINASIM );
EINASIM = A_VC_PLUS(A_VC_PLUS(FINASIM,GINASIM),A_HVEC(HINASIM,')',A68_CHAR ));
} 
else
{ 
 /* line 286: */
EINASIM = A_VC_PLUS(A_VC_PLUS(KINASIM,Label.Tag),LINASIM);
} 
A_PROC_EXIT(text);
*ReturnedValue = (EINASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  NINASIM_text(A68_121  Address, A68_VC  *ReturnedValue)
{ 
A68_121  OINASIM;  /* united object - for case conformity */
A68_INT  PINASIM_offset;
A68_VC  RINASIM;  /* clause result */
A68_VC  TINASIM;  /* avoid structure result */
A68_VC  UINASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_122  VINASIM_label;
A68_VC  WINASIM;  /* avoid structure result */
A_PROC_ENTRY(text);
 /* line 289: */
 /* line 290: */
OINASIM = Address ;
switch ( OINASIM.mode )
{ 
case 1: /* INT */
PINASIM_offset = (OINASIM.data.mode1);
 /* line 291: */
FCAAOSI_intchars( PINASIM_offset, &TINASIM );
RINASIM = A_VC_PLUS(A_VC_PLUS(SINASIM,TINASIM),A_HVEC(UINASIM,')',A68_CHAR ));
break;
case 2: /* STRUCT(INT,REF MODE26)  */
VINASIM_label = (OINASIM.data.mode2);
 /* line 292: */
CINASIM_text( VINASIM_label, &WINASIM );
RINASIM = WINASIM;
break;
case 3: /* VOID */
 /* line 293: */
RINASIM = YINASIM;
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(text);
*ReturnedValue = (RINASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  AJNASIM_text(A68_VC  Word, A68_VC  *ReturnedValue)
{ 
A68_31  CJNASIM_generator;   /* proc value of non-global proc */
A68_VC  IJNASIM;  /* avoid structure result */
A68_VC  JJNASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  KJNASIM;  /* OPERATORS - assign op */
A68_VC  HJNASIM_ans;
A68_INT  LJNASIM_i;
A68_INT  MJNASIM;  /* to part of loop */
A68_VC  NJNASIM;  /* avoid structure result */
A68_VC  OJNASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  PJNASIM;  /* avoid structure result */
A68_VC  QJNASIM;  /* clause result */
A68_INT  RJNASIM;  /* YIELD */
A68_VC  SJNASIM;  /* avoid structure result */
A68_VC  TJNASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(text);
 /* line 296: */
 /* line 297: */
{ 
A_CLOSURE( CJNASIM_generator, DJNASIM_generator, EJNASIM_generator );
A_CALLPROC(CJNASIM_generator,(A68_FALSE, &IJNASIM),(A68_FALSE, &IJNASIM,(CJNASIM_generator).nonlocals));
KJNASIM = A_HVEC(JJNASIM,'[',A68_CHAR ) ;
A_VASSIGN2(KJNASIM,IJNASIM,A68_CHAR ) ;
HJNASIM_ans = IJNASIM;
 /* line 298: */
MJNASIM = (Word.upb-1);
for ( LJNASIM_i = 1;
LJNASIM_i <= MJNASIM;
LJNASIM_i += 1 )
{ 
 /* line 299: */
 /* line 300: */
FCAAOSI_intchars( (A68_INT)(unsigned char)(*(&A_VINDEX(Word,LJNASIM_i))), &NJNASIM );
RSCAOST_makeid( A_VC_PLUS(A_VC_PLUS(HJNASIM_ans,NJNASIM),A_HVEC(OJNASIM,',',A68_CHAR )), &PJNASIM );
HJNASIM_ans = PJNASIM;
}
 /* line 301: */
 /* line 302: */
RJNASIM = Word.upb ;
FCAAOSI_intchars( (A68_INT)(unsigned char)(*(&A_VINDEX(Word,RJNASIM))), &SJNASIM );
QJNASIM = A_VC_PLUS(A_VC_PLUS(HJNASIM_ans,SJNASIM),A_HVEC(TJNASIM,']',A68_CHAR ));
} 
A_PROC_EXIT(text);
*ReturnedValue = (QJNASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  VJNASIM_text(A68_128 * Params, A68_VC  *ReturnedValue)
{ 
A68_VC  XJNASIM;  /* clause result */
A68_VC  AKNASIM;  /* clause result */
A68_VC  EKNASIM;  /* avoid structure result */
A68_VC  FKNASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  MKNASIM;  /* avoid structure result */
A_PROC_ENTRY(text);
 /* line 305: */
 /* line 306: */
if ( (Params==GYFASIM_nilparams) )
{ 
 /* line 307: */
XJNASIM = YJNASIM;
} 
else
{ 
 /* line 308: */
switch ( ((*(&((&(Params->Head))->Sort)))+1) )
{ 
case 1: 
 /* line 309: */
AKNASIM = BKNASIM;
break;
case 2: 
 /* line 310: */
FCAAOSI_intchars( (*(&((&(Params->Head))->Size))), &EKNASIM );
AKNASIM = A_VC_PLUS(A_VC_PLUS(DKNASIM,EKNASIM),A_HVEC(FKNASIM,')',A68_CHAR ));
break;
case 3: 
 /* line 311: */
AKNASIM = HKNASIM;
break;
case 4: 
 /* line 313: */
AKNASIM = JKNASIM;
break;
case 5: 
 /* line 315: */
AKNASIM = LKNASIM;
break;
default: 
A_IMP_SKIP ;
break;
} 
VJNASIM_text( (*(&(Params->Tail))), &MKNASIM );
XJNASIM = A_VC_PLUS(AKNASIM,MKNASIM);
} 
A_PROC_EXIT(text);
*ReturnedValue = (XJNASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  SQNASIM_xput(A68_INT  Instruction, A68_208  Operands)
{ 
A68_208  TQNASIM;  /* united object - for case conformity */
A68_VC  VQNASIM;  /* clause result */
A68_201  XQNASIM_nw;
A68_VC  YQNASIM;  /* avoid structure result */
A68_VC  ZQNASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ARNASIM;  /* avoid structure result */
A68_INT  BRNASIM_n;
A68_VC  CRNASIM;  /* avoid structure result */
A68_202  DRNASIM_na;
A68_VC  ERNASIM;  /* avoid structure result */
A68_VC  FRNASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  GRNASIM;  /* avoid structure result */
A68_122  HRNASIM_lab;
A68_VC  IRNASIM;  /* avoid structure result */
A68_203  JRNASIM_nl;
A68_VC  KRNASIM;  /* avoid structure result */
A68_VC  LRNASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  MRNASIM;  /* avoid structure result */
A68_204  NRNASIM_lpp;
A68_VC  QRNASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  RRNASIM;  /* avoid structure result */
A68_VC  TRNASIM;  /* avoid structure result */
A68_VC  VRNASIM;  /* avoid structure result */
A68_VC  WRNASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_205  XRNASIM_ln;
A68_VC  ZRNASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ASNASIM;  /* avoid structure result */
A68_VC  CSNASIM;  /* avoid structure result */
A68_VC  DSNASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_206  ESNASIM_nma;
A68_VC  FSNASIM;  /* avoid structure result */
A68_VC  GSNASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  HSNASIM;  /* avoid structure result */
A68_VC  ISNASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  JSNASIM;  /* avoid structure result */
A68_207  KSNASIM_al;
A68_VC  LSNASIM;  /* avoid structure result */
A68_VC  MSNASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  NSNASIM;  /* avoid structure result */
A68_VC  OSNASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  PSNASIM;  /* avoid structure result */
A_PROC_ENTRY(xput);
 /* line 376: */
 /* line 377: */
if ( OGNASIM_showamcode )
{ 
 /* line 378: */
 /* line 380: */
 /* line 381: */
TQNASIM = Operands ;
switch ( TQNASIM.mode )
{ 
case 1: /* VOID */
 /* line 382: */
VQNASIM = WQNASIM;
break;
case 2: /* STRUCT(INT,REF MODE26)  */
XQNASIM_nw = (TQNASIM.data.mode2);
 /* line 383: */
FCAAOSI_intchars( XQNASIM_nw.N, &YQNASIM );
AJNASIM_text( XQNASIM_nw.W, &ARNASIM );
VQNASIM = A_VC_PLUS(A_VC_PLUS(YQNASIM,A_HVEC(ZQNASIM,' ',A68_CHAR )),ARNASIM);
break;
case 3: /* INT */
BRNASIM_n = (TQNASIM.data.mode3);
 /* line 384: */
FCAAOSI_intchars( BRNASIM_n, &CRNASIM );
VQNASIM = CRNASIM;
break;
case 4: /* STRUCT(INT,MODE121)  */
DRNASIM_na = (TQNASIM.data.mode4);
 /* line 385: */
FCAAOSI_intchars( DRNASIM_na.N, &ERNASIM );
NINASIM_text( DRNASIM_na.A, &GRNASIM );
VQNASIM = A_VC_PLUS(A_VC_PLUS(ERNASIM,A_HVEC(FRNASIM,' ',A68_CHAR )),GRNASIM);
break;
case 5: /* STRUCT(INT,REF MODE26)  */
HRNASIM_lab = (TQNASIM.data.mode5);
 /* line 386: */
CINASIM_text( HRNASIM_lab, &IRNASIM );
VQNASIM = IRNASIM;
break;
case 6: /* STRUCT(INT,MODE122)  */
JRNASIM_nl = (TQNASIM.data.mode6);
 /* line 387: */
FCAAOSI_intchars( JRNASIM_nl.N, &KRNASIM );
CINASIM_text( JRNASIM_nl.Lab, &MRNASIM );
VQNASIM = A_VC_PLUS(A_VC_PLUS(KRNASIM,A_HVEC(LRNASIM,' ',A68_CHAR )),MRNASIM);
break;
case 7: /* STRUCT(MODE122,REF MODE128,REF MODE128)  */
NRNASIM_lpp = (TQNASIM.data.mode7);
 /* line 388: */
 /* line 389: */
CINASIM_text( NRNASIM_lpp.Lab, &RRNASIM );
VJNASIM_text( NRNASIM_lpp.Pin, &TRNASIM );
VJNASIM_text( NRNASIM_lpp.Pout, &VRNASIM );
VQNASIM = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_HVEC(QRNASIM,'(',A68_CHAR ),RRNASIM),SRNASIM),TRNASIM),URNASIM),VRNASIM),A_HVEC(WRNASIM,')',A68_CHAR ));
break;
case 8: /* STRUCT(MODE122,INT)  */
XRNASIM_ln = (TQNASIM.data.mode8);
 /* line 390: */
CINASIM_text( XRNASIM_ln.Lab, &ASNASIM );
FCAAOSI_intchars( XRNASIM_ln.Loc, &CSNASIM );
VQNASIM = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_HVEC(ZRNASIM,'(',A68_CHAR ),ASNASIM),BSNASIM),CSNASIM),A_HVEC(DSNASIM,')',A68_CHAR ));
break;
case 9: /* STRUCT(INT,INT,MODE121)  */
ESNASIM_nma = (TQNASIM.data.mode9);
 /* line 391: */
 /* line 392: */
FCAAOSI_intchars( ESNASIM_nma.N, &FSNASIM );
FCAAOSI_intchars( ESNASIM_nma.M, &HSNASIM );
NINASIM_text( ESNASIM_nma.A, &JSNASIM );
VQNASIM = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(FSNASIM,A_HVEC(GSNASIM,' ',A68_CHAR )),HSNASIM),A_HVEC(ISNASIM,' ',A68_CHAR )),JSNASIM);
break;
case 10: /* STRUCT(MODE121,MODE122)  */
KSNASIM_al = (TQNASIM.data.mode10);
 /* line 393: */
 /* line 394: */
NINASIM_text( KSNASIM_al.A, &LSNASIM );
CINASIM_text( KSNASIM_al.Lab, &NSNASIM );
VQNASIM = A_VC_PLUS(A_VC_PLUS(LSNASIM,A_HVEC(MSNASIM,' ',A68_CHAR )),NSNASIM);
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 395: */
RSCAOST_makeid( A_VC_PLUS(A_VC_PLUS(A_VINDEX(PONASIM_amnames,Instruction),VQNASIM),A_HVEC(OSNASIM,',',A68_CHAR )), &PSNASIM );
A_CALLPROC(NGNASIM_putdiag,(PSNASIM),(PSNASIM,(NGNASIM_putdiag).nonlocals));
} 
A_PROC_EXIT(xput);
return;
} 
#undef NL

A68_VOID  QSNASIM_amhalt(void)
{ 
A68_208  RSNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amhalt);
{ 
SQNASIM_xput(QONASIM_haltinstr, A_EMPTY(RSNASIM,1));
BQMASIM_generatehalt();
} 
A_PROC_EXIT(amhalt);
return;
} 
#undef NL

A68_VOID  SSNASIM_amadd(void)
{ 
A68_208  TSNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amadd);
{ 
SQNASIM_xput(RONASIM_addinstr, A_EMPTY(TSNASIM,1));
NQMASIM_generateadd();
} 
A_PROC_EXIT(amadd);
return;
} 
#undef NL

A68_VOID  USNASIM_amsub(void)
{ 
A68_208  VSNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amsub);
{ 
SQNASIM_xput(SONASIM_subinstr, A_EMPTY(VSNASIM,1));
OQMASIM_generatesub();
} 
A_PROC_EXIT(amsub);
return;
} 
#undef NL

A68_VOID  WSNASIM_ammul(void)
{ 
A68_208  XSNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(ammul);
{ 
SQNASIM_xput(TONASIM_mulinstr, A_EMPTY(XSNASIM,1));
TQMASIM_generatemul();
} 
A_PROC_EXIT(ammul);
return;
} 
#undef NL

A68_VOID  YSNASIM_amdiv(void)
{ 
A68_208  ZSNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amdiv);
{ 
SQNASIM_xput(UONASIM_divinstr, A_EMPTY(ZSNASIM,1));
UQMASIM_generatediv();
} 
A_PROC_EXIT(amdiv);
return;
} 
#undef NL

A68_VOID  ATNASIM_ammod(void)
{ 
A68_208  BTNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(ammod);
{ 
SQNASIM_xput(VONASIM_modinstr, A_EMPTY(BTNASIM,1));
VQMASIM_generatemod();
} 
A_PROC_EXIT(ammod);
return;
} 
#undef NL

A68_VOID  CTNASIM_amneg(void)
{ 
A68_208  DTNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amneg);
{ 
SQNASIM_xput(WONASIM_neginstr, A_EMPTY(DTNASIM,1));
WQMASIM_generateneg();
} 
A_PROC_EXIT(amneg);
return;
} 
#undef NL

A68_VOID  ETNASIM_amabs(void)
{ 
A68_208  FTNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amabs);
{ 
SQNASIM_xput(XONASIM_absinstr, A_EMPTY(FTNASIM,1));
BRMASIM_generateabs();
} 
A_PROC_EXIT(amabs);
return;
} 
#undef NL

A68_VOID  GTNASIM_amiand(void)
{ 
A68_208  HTNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amiand);
{ 
SQNASIM_xput(YONASIM_iandinstr, A_EMPTY(HTNASIM,1));
JRMASIM_generateiand();
} 
A_PROC_EXIT(amiand);
return;
} 
#undef NL

A68_VOID  ITNASIM_amior(void)
{ 
A68_208  JTNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amior);
{ 
SQNASIM_xput(ZONASIM_iorinstr, A_EMPTY(JTNASIM,1));
LRMASIM_generateior();
} 
A_PROC_EXIT(amior);
return;
} 
#undef NL

A68_VOID  KTNASIM_amshl(void)
{ 
A68_208  LTNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amshl);
{ 
SQNASIM_xput(APNASIM_shlinstr, A_EMPTY(LTNASIM,1));
NRMASIM_generateshl();
} 
A_PROC_EXIT(amshl);
return;
} 
#undef NL

A68_VOID  MTNASIM_amshr(void)
{ 
A68_208  NTNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amshr);
{ 
SQNASIM_xput(BPNASIM_shrinstr, A_EMPTY(NTNASIM,1));
ORMASIM_generateshr();
} 
A_PROC_EXIT(amshr);
return;
} 
#undef NL

A68_VOID  OTNASIM_amcom(void)
{ 
A68_208  PTNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amcom);
{ 
SQNASIM_xput(CPNASIM_cominstr, A_EMPTY(PTNASIM,1));
PRMASIM_generatecom();
} 
A_PROC_EXIT(amcom);
return;
} 
#undef NL

A68_VOID  QTNASIM_amtest(void)
{ 
A68_208  RTNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amtest);
{ 
SQNASIM_xput(DPNASIM_testinstr, A_EMPTY(RTNASIM,1));
SRMASIM_generatetest();
} 
A_PROC_EXIT(amtest);
return;
} 
#undef NL

A68_VOID  STNASIM_ameq(void)
{ 
A68_208  TTNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(ameq);
{ 
SQNASIM_xput(EPNASIM_eqinstr, A_EMPTY(TTNASIM,1));
TRMASIM_generateeq();
} 
A_PROC_EXIT(ameq);
return;
} 
#undef NL

A68_VOID  UTNASIM_amneq(void)
{ 
A68_208  VTNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amneq);
{ 
SQNASIM_xput(FPNASIM_neqinstr, A_EMPTY(VTNASIM,1));
URMASIM_generateneq();
} 
A_PROC_EXIT(amneq);
return;
} 
#undef NL

A68_VOID  WTNASIM_amgt(void)
{ 
A68_208  XTNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amgt);
{ 
SQNASIM_xput(GPNASIM_gtinstr, A_EMPTY(XTNASIM,1));
VRMASIM_generategt();
} 
A_PROC_EXIT(amgt);
return;
} 
#undef NL

A68_VOID  YTNASIM_amge(void)
{ 
A68_208  ZTNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amge);
{ 
SQNASIM_xput(HPNASIM_geinstr, A_EMPTY(ZTNASIM,1));
WRMASIM_generatege();
} 
A_PROC_EXIT(amge);
return;
} 
#undef NL

A68_VOID  AUNASIM_amlt(void)
{ 
A68_208  BUNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amlt);
{ 
SQNASIM_xput(IPNASIM_ltinstr, A_EMPTY(BUNASIM,1));
XRMASIM_generatelt();
} 
A_PROC_EXIT(amlt);
return;
} 
#undef NL

A68_VOID  CUNASIM_amle(void)
{ 
A68_208  DUNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amle);
{ 
SQNASIM_xput(JPNASIM_leinstr, A_EMPTY(DUNASIM,1));
YRMASIM_generatele();
} 
A_PROC_EXIT(amle);
return;
} 
#undef NL

A68_VOID  EUNASIM_amand(void)
{ 
A68_208  FUNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amand);
{ 
SQNASIM_xput(KPNASIM_andinstr, A_EMPTY(FUNASIM,1));
ZRMASIM_generateand();
} 
A_PROC_EXIT(amand);
return;
} 
#undef NL

A68_VOID  GUNASIM_amor(void)
{ 
A68_208  HUNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amor);
{ 
SQNASIM_xput(LPNASIM_orinstr, A_EMPTY(HUNASIM,1));
BSMASIM_generateor();
} 
A_PROC_EXIT(amor);
return;
} 
#undef NL

A68_VOID  IUNASIM_amnot(void)
{ 
A68_208  JUNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amnot);
{ 
SQNASIM_xput(MPNASIM_notinstr, A_EMPTY(JUNASIM,1));
RRMASIM_generatenot();
} 
A_PROC_EXIT(amnot);
return;
} 
#undef NL

A68_VOID  MUNASIM_ampushstring(A68_INT  N, A68_VC  W)
{ 
A68_201  NUNASIM;  /* collateral clause result */
A68_208  OUNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(ampushstring);
 /* line 471: */
{ 
NUNASIM.N = N;
NUNASIM.W = W;
SQNASIM_xput(NPNASIM_pushstringinstr, A_UNITE(OUNASIM,mode2,2,NUNASIM));
FSMASIM_generatepushstring(N, W);
} 
A_PROC_EXIT(ampushstring);
return;
} 
#undef NL

A68_VOID  QUNASIM_ampushint(A68_INT  N)
{ 
A68_208  RUNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(ampushint);
 /* line 474: */
{ 
SQNASIM_xput(OPNASIM_pushintinstr, A_UNITE(RUNASIM,mode3,3,N));
ISMASIM_generatepushint(N);
} 
A_PROC_EXIT(ampushint);
return;
} 
#undef NL

A68_VOID  TUNASIM_amdrop(A68_INT  N)
{ 
A68_208  UUNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amdrop);
 /* line 477: */
{ 
SQNASIM_xput(PPNASIM_dropinstr, A_UNITE(UUNASIM,mode3,3,N));
KSMASIM_generatedrop(N);
} 
A_PROC_EXIT(amdrop);
return;
} 
#undef NL

A68_VOID  WUNASIM_amlocal(A68_INT  N)
{ 
A68_208  XUNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amlocal);
 /* line 480: */
{ 
SQNASIM_xput(QPNASIM_localinstr, A_UNITE(XUNASIM,mode3,3,N));
MSMASIM_generatelocal(N);
} 
A_PROC_EXIT(amlocal);
return;
} 
#undef NL

A68_VOID  AVNASIM_amglobal(A68_INT  N, A68_121  A)
{ 
A68_202  BVNASIM;  /* collateral clause result */
A68_208  CVNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amglobal);
 /* line 483: */
{ 
BVNASIM.N = N;
BVNASIM.A = A;
SQNASIM_xput(RPNASIM_globalinstr, A_UNITE(CVNASIM,mode4,4,BVNASIM));
PSMASIM_generateglobal(N, A);
} 
A_PROC_EXIT(amglobal);
return;
} 
#undef NL

A68_VOID  FVNASIM_amstore(A68_INT  N, A68_121  A)
{ 
A68_202  GVNASIM;  /* collateral clause result */
A68_208  HVNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amstore);
 /* line 486: */
{ 
GVNASIM.N = N;
GVNASIM.A = A;
SQNASIM_xput(SPNASIM_storeinstr, A_UNITE(HVNASIM,mode4,4,GVNASIM));
VSMASIM_generatestore(N, A);
} 
A_PROC_EXIT(amstore);
return;
} 
#undef NL

A68_VOID  LVNASIM_ambstring(A68_INT  N, A68_INT  M, A68_121  A)
{ 
A68_206  MVNASIM;  /* collateral clause result */
A68_208  NVNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(ambstring);
 /* line 489: */
{ 
MVNASIM.N = N;
MVNASIM.M = M;
MVNASIM.A = A;
SQNASIM_xput(TPNASIM_bstringinstr, A_UNITE(NVNASIM,mode9,9,MVNASIM));
ITMASIM_generatebstring(N, M, A);
} 
A_PROC_EXIT(ambstring);
return;
} 
#undef NL

A68_VOID  QVNASIM_ambstore(A68_INT  N, A68_121  A)
{ 
A68_202  RVNASIM;  /* collateral clause result */
A68_208  SVNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(ambstore);
 /* line 492: */
{ 
RVNASIM.N = N;
RVNASIM.A = A;
SQNASIM_xput(UPNASIM_bstoreinstr, A_UNITE(SVNASIM,mode4,4,RVNASIM));
OTMASIM_generatebstore(N, A);
} 
A_PROC_EXIT(ambstore);
return;
} 
#undef NL

A68_VOID  UVNASIM_amitos(A68_INT  N)
{ 
A68_208  VVNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amitos);
 /* line 495: */
{ 
SQNASIM_xput(VPNASIM_itosinstr, A_UNITE(VVNASIM,mode3,3,N));
QTMASIM_generateitos(N);
} 
A_PROC_EXIT(amitos);
return;
} 
#undef NL

A68_VOID  XVNASIM_amutos(A68_INT  N)
{ 
A68_208  YVNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amutos);
 /* line 498: */
{ 
SQNASIM_xput(WPNASIM_utosinstr, A_UNITE(YVNASIM,mode3,3,N));
STMASIM_generateutos(N);
} 
A_PROC_EXIT(amutos);
return;
} 
#undef NL

A68_VOID  ZVNASIM_amstoi(void)
{ 
A68_208  AWNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amstoi);
{ 
SQNASIM_xput(XPNASIM_stoiinstr, A_EMPTY(AWNASIM,1));
TTMASIM_generatestoi();
} 
A_PROC_EXIT(amstoi);
return;
} 
#undef NL

A68_VOID  BWNASIM_amstou(void)
{ 
A68_208  CWNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amstou);
{ 
SQNASIM_xput(YPNASIM_stouinstr, A_EMPTY(CWNASIM,1));
UTMASIM_generatestou();
} 
A_PROC_EXIT(amstou);
return;
} 
#undef NL

A68_VOID  EWNASIM_amjump(A68_122  Lab)
{ 
A68_208  FWNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amjump);
 /* line 507: */
{ 
SQNASIM_xput(ZPNASIM_jumpinstr, A_UNITE(FWNASIM,mode5,5,Lab));
WTMASIM_generatejump(Lab);
} 
A_PROC_EXIT(amjump);
return;
} 
#undef NL

A68_VOID  IWNASIM_amjumpno(A68_INT  N, A68_122  Lab)
{ 
A68_203  JWNASIM;  /* collateral clause result */
A68_208  KWNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amjumpno);
 /* line 510: */
{ 
JWNASIM.N = N;
JWNASIM.Lab = Lab;
SQNASIM_xput(AQNASIM_jumpnoinstr, A_UNITE(KWNASIM,mode6,6,JWNASIM));
EUMASIM_generatejumpno(N, Lab);
} 
A_PROC_EXIT(amjumpno);
return;
} 
#undef NL

A68_VOID  NWNASIM_amlabel(A68_INT  N, A68_122  Lab)
{ 
A68_203  OWNASIM;  /* collateral clause result */
A68_208  PWNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amlabel);
 /* line 513: */
{ 
OWNASIM.N = N;
OWNASIM.Lab = Lab;
SQNASIM_xput(BQNASIM_labelinstr, A_UNITE(PWNASIM,mode6,6,OWNASIM));
WUMASIM_generatelabel(N, Lab);
} 
A_PROC_EXIT(amlabel);
return;
} 
#undef NL

A68_VOID  QWNASIM_amrepeat(void)
{ 
A68_208  RWNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amrepeat);
{ 
SQNASIM_xput(CQNASIM_repeatinstr, A_EMPTY(RWNASIM,1));
AVMASIM_generaterepeat();
} 
A_PROC_EXIT(amrepeat);
return;
} 
#undef NL

A68_VOID  SWNASIM_amloop(void)
{ 
A68_208  TWNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amloop);
{ 
SQNASIM_xput(DQNASIM_loopinstr, A_EMPTY(TWNASIM,1));
BVMASIM_generateloop();
} 
A_PROC_EXIT(amloop);
return;
} 
#undef NL

A68_VOID  WWNASIM_amcallinst(A68_121  Inst, A68_122  Lab)
{ 
A68_207  XWNASIM;  /* collateral clause result */
A68_208  YWNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amcallinst);
 /* line 522: */
{ 
XWNASIM.A = Inst;
XWNASIM.Lab = Lab;
SQNASIM_xput(EQNASIM_callinstinstr, A_UNITE(YWNASIM,mode10,10,XWNASIM));
WVMASIM_generatecallinst(Inst, Lab);
} 
A_PROC_EXIT(amcallinst);
return;
} 
#undef NL

A68_VOID  BXNASIM_amcall(A68_INT  N, A68_122  Lab)
{ 
A68_203  CXNASIM;  /* collateral clause result */
A68_208  DXNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amcall);
 /* line 525: */
{ 
CXNASIM.N = N;
CXNASIM.Lab = Lab;
SQNASIM_xput(FQNASIM_callinstr, A_UNITE(DXNASIM,mode6,6,CXNASIM));
FXMASIM_generatecall(N, Lab);
} 
A_PROC_EXIT(amcall);
return;
} 
#undef NL

A68_VOID  EXNASIM_amenter(void)
{ 
A68_208  FXNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amenter);
{ 
SQNASIM_xput(GQNASIM_enterinstr, A_EMPTY(FXNASIM,1));
IYMASIM_generateenter();
} 
A_PROC_EXIT(amenter);
return;
} 
#undef NL

A68_VOID  HXNASIM_amfanout(A68_INT  N)
{ 
A68_208  IXNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amfanout);
 /* line 531: */
{ 
SQNASIM_xput(HQNASIM_fanoutinstr, A_UNITE(IXNASIM,mode3,3,N));
KYMASIM_generatefanout(N);
} 
A_PROC_EXIT(amfanout);
return;
} 
#undef NL

A68_VOID  KXNASIM_amret(A68_INT  N)
{ 
A68_208  LXNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amret);
 /* line 534: */
{ 
SQNASIM_xput(IQNASIM_retinstr, A_UNITE(LXNASIM,mode3,3,N));
MYMASIM_generateret(N);
} 
A_PROC_EXIT(amret);
return;
} 
#undef NL

A68_VOID  PXNASIM_amgeneratenamedcode(A68_122  Lab, A68_128 * Pin, A68_128 * Pout)
{ 
A68_204  QXNASIM;  /* collateral clause result */
A68_208  RXNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amgeneratenamedcode);
 /* line 538: */
 /* line 539: */
{ 
QXNASIM.Lab = Lab;
QXNASIM.Pin = Pin;
QXNASIM.Pout = Pout;
SQNASIM_xput(JQNASIM_generatenamedcodeop, A_UNITE(RXNASIM,mode7,7,QXNASIM));
 /* line 540: */
 /* line 541: */
VYMASIM_generatenamedcode(Lab, Pin, Pout);
} 
A_PROC_EXIT(amgeneratenamedcode);
return;
} 
#undef NL

A68_VOID  UXNASIM_amgeneratenameddata(A68_122  Lab, A68_INT  Loc)
{ 
A68_205  VXNASIM;  /* collateral clause result */
A68_208  WXNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amgeneratenameddata);
 /* line 544: */
 /* line 545: */
{ 
VXNASIM.Lab = Lab;
VXNASIM.Loc = Loc;
SQNASIM_xput(KQNASIM_generatenameddataop, A_UNITE(WXNASIM,mode8,8,VXNASIM));
 /* line 546: */
 /* line 547: */
JZMASIM_generatenameddata(Lab, Loc);
} 
A_PROC_EXIT(amgeneratenameddata);
return;
} 
#undef NL

A68_VOID  AYNASIM_amgenerateparamtypes(A68_122  Lab, A68_128 * Pin, A68_128 * Pout)
{ 
A68_204  BYNASIM;  /* collateral clause result */
A68_208  CYNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amgenerateparamtypes);
 /* line 550: */
 /* line 551: */
{ 
BYNASIM.Lab = Lab;
BYNASIM.Pin = Pin;
BYNASIM.Pout = Pout;
SQNASIM_xput(LQNASIM_generateparamtypesop, A_UNITE(CYNASIM,mode7,7,BYNASIM));
 /* line 552: */
 /* line 553: */
OZMASIM_generateparamtypes(Lab, Pin, Pout);
} 
A_PROC_EXIT(amgenerateparamtypes);
return;
} 
#undef NL

A68_VOID  EYNASIM_amgenerate(A68_36  Flt)
{ 
A68_208  FYNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amgenerate);
 /* line 557: */
{ 
SQNASIM_xput(MQNASIM_generateop, A_EMPTY(FYNASIM,1));
RZMASIM_generate(Flt);
} 
A_PROC_EXIT(amgenerate);
return;
} 
#undef NL

A68_VOID  GYNASIM_amgenerateenddecls(void)
{ 
A68_208  HYNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amgenerateenddecls);
{ 
SQNASIM_xput(NQNASIM_generateenddeclsop, A_EMPTY(HYNASIM,1));
SZMASIM_generateenddecls();
} 
A_PROC_EXIT(amgenerateenddecls);
return;
} 
#undef NL

A68_VOID  JYNASIM_amgenerateca(A68_36  Flt)
{ 
A68_208  KYNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amgenerateca);
 /* line 563: */
{ 
SQNASIM_xput(OQNASIM_generatecaop, A_EMPTY(KYNASIM,1));
FANASIM_generateca(Flt);
} 
A_PROC_EXIT(amgenerateca);
return;
} 
#undef NL

A68_VOID  LYNASIM_amgenerateendca(void)
{ 
A68_208  MYNASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(amgenerateendca);
{ 
SQNASIM_xput(PQNASIM_generateendcaop, A_EMPTY(MYNASIM,1));
 /* line 569: */
SANASIM_generateendca();
} 
A_PROC_EXIT(amgenerateendca);
return;
} 
#undef NL
 /* line 1: */
 /* line 4: */
 /* line 5: */
 /* line 8: */
void XDNASIM(void)   /* initialise DECS keambasics */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/keambasics.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/kebasics.m","./mfiles/kecodegensparc.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_VC  XFNASIM;  /* avoid structure result */
A68_228  NKNASIM;  /* collateral clause result */
A68_46  OONASIM;  /* OPERATORS - istruct -> vector */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
JSAASIM();   /* USE kebasics */
THMASIM();   /* USE kecodegensparc */
JSCAOST();   /* USE basics */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/keambasics.a68";
A_config.translation_time = "Tue Apr  4 11:08:38 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "WDNASIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:08:38 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS keambasics);
UEAALIB_a68config(LGAALIB_configinfo, BENASIM);
 /* line 86: */
 /* line 91: */
 /* line 92: */
 /* line 93: */
 /* line 94: */
 /* line 95: */
 /* line 100: */
 /* line 102: */
 /* line 119: */
 /* line 125: */
 /* line 139: */
 /* line 140: */
 /* line 141: */
 /* line 142: */
 /* line 143: */
 /* line 160: */
RFNASIM_labelseed = 0;
 /* line 161: */
TFNASIM_generator( A68_TRUE, &XFNASIM );
WFNASIM_dummytag = XFNASIM;
 /* line 162: */
 /* line 173: */
 /* line 175: */
BGNASIM_labelstack = (A68_194 *)A68_NIL;
 /* line 177: */
 /* line 178: */
 /* line 180: */
 /* line 181: */
 /* line 182: */
 /* line 193: */
 /* line 194: */
 /* line 195: */
 /* line 208: */
 /* line 209: */
OGNASIM_showamcode = A68_FALSE;
 /* line 221: */
 /* line 258: */
 /* line 264: */
 /* line 274: */
 /* line 279: */
 /* line 281: */
 /* line 288: */
 /* line 295: */
 /* line 304: */
 /* line 321: */
 /* line 322: */
NKNASIM.data[0] = PKNASIM;
NKNASIM.data[1] = RKNASIM;
NKNASIM.data[2] = TKNASIM;
 /* line 323: */
NKNASIM.data[3] = VKNASIM;
NKNASIM.data[4] = XKNASIM;
NKNASIM.data[5] = ZKNASIM;
NKNASIM.data[6] = BLNASIM;
 /* line 324: */
NKNASIM.data[7] = DLNASIM;
NKNASIM.data[8] = FLNASIM;
NKNASIM.data[9] = HLNASIM;
NKNASIM.data[10] = JLNASIM;
 /* line 325: */
NKNASIM.data[11] = LLNASIM;
NKNASIM.data[12] = NLNASIM;
NKNASIM.data[13] = PLNASIM;
NKNASIM.data[14] = RLNASIM;
 /* line 326: */
NKNASIM.data[15] = TLNASIM;
NKNASIM.data[16] = VLNASIM;
NKNASIM.data[17] = XLNASIM;
NKNASIM.data[18] = ZLNASIM;
 /* line 327: */
NKNASIM.data[19] = BMNASIM;
NKNASIM.data[20] = DMNASIM;
NKNASIM.data[21] = FMNASIM;
NKNASIM.data[22] = HMNASIM;
 /* line 328: */
NKNASIM.data[23] = JMNASIM;
NKNASIM.data[24] = LMNASIM;
NKNASIM.data[25] = NMNASIM;
NKNASIM.data[26] = PMNASIM;
 /* line 329: */
NKNASIM.data[27] = RMNASIM;
NKNASIM.data[28] = TMNASIM;
NKNASIM.data[29] = VMNASIM;
NKNASIM.data[30] = XMNASIM;
 /* line 330: */
NKNASIM.data[31] = ZMNASIM;
NKNASIM.data[32] = BNNASIM;
NKNASIM.data[33] = DNNASIM;
NKNASIM.data[34] = FNNASIM;
 /* line 331: */
NKNASIM.data[35] = HNNASIM;
NKNASIM.data[36] = JNNASIM;
NKNASIM.data[37] = LNNASIM;
NKNASIM.data[38] = NNNASIM;
 /* line 332: */
NKNASIM.data[39] = PNNASIM;
NKNASIM.data[40] = RNNASIM;
NKNASIM.data[41] = TNNASIM;
NKNASIM.data[42] = VNNASIM;
 /* line 333: */
NKNASIM.data[43] = XNNASIM;
 /* line 334: */
NKNASIM.data[44] = ZNNASIM;
NKNASIM.data[45] = BONASIM;
 /* line 335: */
NKNASIM.data[46] = DONASIM;
NKNASIM.data[47] = FONASIM;
 /* line 336: */
NKNASIM.data[48] = HONASIM;
NKNASIM.data[49] = JONASIM;
 /* line 337: */
NKNASIM.data[50] = LONASIM;
NKNASIM.data[51] = NONASIM;
PONASIM_amnames = A_HISVEC(OONASIM,NKNASIM,52,A68_VC );
 /* line 340: */
 /* line 341: */
 /* line 342: */
 /* line 343: */
 /* line 344: */
 /* line 345: */
 /* line 346: */
 /* line 347: */
 /* line 348: */
 /* line 349: */
 /* line 350: */
 /* line 351: */
 /* line 352: */
 /* line 353: */
 /* line 354: */
 /* line 355: */
 /* line 356: */
 /* line 357: */
 /* line 358: */
 /* line 359: */
 /* line 360: */
 /* line 361: */
 /* line 362: */
 /* line 363: */
 /* line 364: */
 /* line 365: */
 /* line 366: */
 /* line 375: */
 /* line 401: */
 /* line 402: */
 /* line 404: */
 /* line 405: */
 /* line 407: */
 /* line 408: */
 /* line 410: */
 /* line 411: */
 /* line 413: */
 /* line 414: */
 /* line 416: */
 /* line 417: */
 /* line 419: */
 /* line 420: */
 /* line 422: */
 /* line 423: */
 /* line 425: */
 /* line 426: */
 /* line 428: */
 /* line 429: */
 /* line 431: */
 /* line 432: */
 /* line 434: */
 /* line 435: */
 /* line 437: */
 /* line 438: */
 /* line 440: */
 /* line 441: */
 /* line 443: */
 /* line 444: */
 /* line 446: */
 /* line 447: */
 /* line 449: */
 /* line 450: */
 /* line 452: */
 /* line 453: */
 /* line 455: */
 /* line 456: */
 /* line 458: */
 /* line 459: */
 /* line 461: */
 /* line 462: */
 /* line 464: */
 /* line 465: */
 /* line 467: */
 /* line 468: */
 /* line 470: */
 /* line 473: */
 /* line 476: */
 /* line 479: */
 /* line 482: */
 /* line 485: */
 /* line 488: */
 /* line 491: */
 /* line 494: */
 /* line 497: */
 /* line 500: */
 /* line 501: */
 /* line 503: */
 /* line 504: */
 /* line 506: */
 /* line 509: */
 /* line 512: */
 /* line 515: */
 /* line 516: */
 /* line 518: */
 /* line 519: */
 /* line 521: */
 /* line 524: */
 /* line 527: */
 /* line 528: */
 /* line 530: */
 /* line 533: */
 /* line 537: */
 /* line 543: */
 /* line 549: */
 /* line 556: */
 /* line 559: */
 /* line 560: */
 /* line 562: */
 /* line 565: */
 /* line 566: */
 /* line 604: */
A_PROC_EXIT(DECS keambasics);
} 
#undef NL
/* end of translation of ./a68files/keambasics.a68 */
