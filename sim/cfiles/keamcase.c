
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
/* UNAME:GSUASIM */
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
struct A68t116 ;

A_PROCEDURE(A68_INT ,A68t114,(struct A68t115 ,struct A68t116 ),(struct A68t115 ,struct A68t116 ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(MODE115,MODE116) INT */
struct A68t124{
A68_INT  Svoid;
A_PAD_INT(PAD_22)
};
typedef struct A68t124  A68_124 ;    /* STRUCT(INT)  */
struct A68t125{
A68_INT  Snull;
A_PAD_INT(PAD_23)
};
typedef struct A68t125  A68_125 ;    /* STRUCT(INT)  */
struct A68t115 { A68_INT mode; union {
struct A68t117 * mode1;
struct A68t118 * mode2;
struct A68t119 * mode3;
struct A68t120 * mode4;
struct A68t121 * mode5;
struct A68t122 * mode6;
struct A68t123 * mode7;
struct A68t124  mode8;
struct A68t125  mode9;
} data; };
typedef struct A68t115  A68_115 ;    /* UNION(REF MODE117,REF MODE118,REF MODE119,REF MODE120,REF MODE121,REF MODE122,REF MODE123,MODE124,MODE125)  */

A_PROCEDURE(A68_INT ,A68t116,(struct A68t115 ),(struct A68t115 ,void *));
typedef struct A68t116  A68_116 ;    /* PROC(MODE115) INT */
struct A68t117{
A68_VC  Id;
struct A68t115  T;
struct A68t117 * Rest;
};
typedef struct A68t117  A68_117 ;    /* STRUCT(REF MODE26,MODE115,REF MODE117)  */
struct A68t118{
A68_VC  Id;
A68_INT  Lwb;
A_PAD_INT(PAD_24)
A68_INT  Upb;
A_PAD_INT(PAD_25)
};
typedef struct A68t118  A68_118 ;    /* STRUCT(REF MODE26,INT,INT)  */
struct A68t119{
A68_VC  Id;
A68_VC  Char;
};
typedef struct A68t119  A68_119 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t120{
A68_INT  No;
A_PAD_INT(PAD_26)
struct A68t115  Type;
};
typedef struct A68t120  A68_120 ;    /* STRUCT(INT,MODE115)  */
struct A68t121{
A68_INT  No;
A_PAD_INT(PAD_27)
struct A68t119  T;
};
typedef struct A68t121  A68_121 ;    /* STRUCT(INT,MODE119)  */
struct A68t122{
struct A68t115  From;
struct A68t115  To;
};
typedef struct A68t122  A68_122 ;    /* STRUCT(MODE115,MODE115)  */
struct A68t123{
struct A68t115  T;
struct A68t123 * Rest;
};
typedef struct A68t123  A68_123 ;    /* STRUCT(MODE115,REF MODE123)  */

A_PROCEDURE(A68_VOID ,A68t126,(A68_INT ,struct A68t115 *),(A68_INT ,struct A68t115 *,void *));
typedef struct A68t126  A68_126 ;    /* PROC(INT) MODE115 */
struct A68t128 ;
struct A68t129 ;
struct A68t130 ;
struct A68t131 ;

A_PROCEDURE(A68_INT ,A68t127,(A68_VC ,A68_INT ,A68_INT ,A68_INT ,struct A68t128 ,struct A68t128 ,struct A68t129 *,struct A68t130 ,struct A68t131 ),(A68_VC ,A68_INT ,A68_INT ,A68_INT ,struct A68t128 ,struct A68t128 ,struct A68t129 *,struct A68t130 ,struct A68t131 ,void *));
typedef struct A68t127  A68_127 ;    /* PROC(REF MODE26,INT,INT,INT,MODE128,MODE128,REF MODE129,MODE130,MODE131) INT */
A_VECTOR(struct A68t133 ,A68t132);
typedef struct A68t132  A68_132 ;    /* VECTOR [] MODE133 */
struct A68t133{
A68_INT  Instoffset;
A_PAD_INT(PAD_28)
A68_INT  Offset;
A_PAD_INT(PAD_29)
A68_INT  Size;
A_PAD_INT(PAD_30)
};
typedef struct A68t133  A68_133 ;    /* STRUCT(INT,INT,INT)  */
struct A68t128{
struct A68t115  Type;
struct A68t132  Blocks;
};
typedef struct A68t128  A68_128 ;    /* STRUCT(MODE115,REF MODE132)  */
struct A68t129{
struct A68t128  Firstcell;
A68_INT  Lwb;
A_PAD_INT(PAD_31)
A68_INT  Ramsize;
A_PAD_INT(PAD_32)
A68_INT  Step;
A_PAD_INT(PAD_33)
};
typedef struct A68t129  A68_129 ;    /* STRUCT(MODE128,INT,INT,INT)  */
struct A68t130{
A68_INT  Size;
A_PAD_INT(PAD_34)
A68_INT  Offset;
A_PAD_INT(PAD_35)
A68_BITS  Sort;
A_PAD_BITS(PAD_36)
};
typedef struct A68t130  A68_130 ;    /* STRUCT(INT,INT,BITS)  */
struct A68t131{
A68_INT  Workspace;
A_PAD_INT(PAD_37)
A68_INT  History;
A_PAD_INT(PAD_38)
A68_INT  Declid;
A_PAD_INT(PAD_39)
};
typedef struct A68t131  A68_131 ;    /* STRUCT(INT,INT,INT)  */
struct A68t135 ;

A_PROCEDURE(A68_VOID ,A68t134,(A68_INT ,A68_VC ,A68_VC ,struct A68t135 ),(A68_INT ,A68_VC ,A68_VC ,struct A68t135 ,void *));
typedef struct A68t134  A68_134 ;    /* PROC(INT,REF MODE26,REF MODE26,MODE135) VOID */
struct A68t136{
A68_INT  Fn;
A_PAD_INT(PAD_40)
A68_INT  Instance;
A_PAD_INT(PAD_41)
};
typedef struct A68t136  A68_136 ;    /* STRUCT(INT,INT)  */
struct A68t135 { A68_INT mode; union {
struct A68t136  mode1;
struct A68t128  mode2;
} data; };
typedef struct A68t135  A68_135 ;    /* UNION(MODE136,MODE128)  */

A_PROCEDURE(A68_VOID ,A68t137,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t137  A68_137 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t138,(A68_INT ,struct A68t32 ),(A68_INT ,struct A68t32 ,void *));
typedef struct A68t138  A68_138 ;    /* PROC(INT,REF MODE32) VOID */

A_PROCEDURE(A68_VOID ,A68t139,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t139  A68_139 ;    /* PROC(INT,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t140,(A68_INT ,struct A68t130 ),(A68_INT ,struct A68t130 ,void *));
typedef struct A68t140  A68_140 ;    /* PROC(INT,MODE130) VOID */

A_PROCEDURE(A68_VOID ,A68t141,(A68_INT ,struct A68t132 ,struct A68t132 ),(A68_INT ,struct A68t132 ,struct A68t132 ,void *));
typedef struct A68t141  A68_141 ;    /* PROC(INT,REF MODE132,REF MODE132) VOID */

A_PROCEDURE(A68_VOID ,A68t142,(A68_VC ,A68_INT ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t142  A68_142 ;    /* PROC(REF MODE26,INT,INT) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t143,(A68_VC ,A68_INT ,A68_INT ),(A68_VC ,A68_INT ,A68_INT ,void *));
typedef struct A68t143  A68_143 ;    /* PROC(REF MODE26,INT,INT) INT */
struct A68t145 ;

A_PROCEDURE(A68_VOID ,A68t144,(A68_INT ,struct A68t145 *),(A68_INT ,struct A68t145 *,void *));
typedef struct A68t144  A68_144 ;    /* PROC(INT) MODE145 */
A_VECTOR(struct A68t147 ,A68t146);
typedef struct A68t146  A68_146 ;    /* VECTOR [] MODE147 */
struct A68t147{
A68_VC  Uname;
A68_VC  Lname;
A68_INT  Node;
A_PAD_INT(PAD_42)
};
typedef struct A68t147  A68_147 ;    /* STRUCT(REF MODE26,REF MODE26,INT)  */
struct A68t145{
struct A68t129 * Ram;
struct A68t128  Outputs;
A68_INT  Noinputs;
A_PAD_INT(PAD_43)
struct A68t146  Body;
};
typedef struct A68t145  A68_145 ;    /* STRUCT(REF MODE129,MODE128,INT,REF MODE146)  */

A_PROCEDURE(A68_VOID ,A68t148,(A68_INT ,struct A68t135 *),(A68_INT ,struct A68t135 *,void *));
typedef struct A68t148  A68_148 ;    /* PROC(INT) MODE135 */
struct A68t150 ;

A_PROCEDURE(A68_VOID ,A68t149,(A68_INT ,A68_INT ,struct A68t150 *),(A68_INT ,A68_INT ,struct A68t150 *,void *));
typedef struct A68t149  A68_149 ;    /* PROC(INT,INT) MODE150 */
struct A68t150{
A68_INT  Lwb;
A_PAD_INT(PAD_44)
A68_INT  Upb;
A_PAD_INT(PAD_45)
};
typedef struct A68t150  A68_150 ;    /* STRUCT(INT,INT)  */
struct A68t152 ;

A_PROCEDURE(A68_VOID ,A68t151,(A68_INT ,A68_INT ,struct A68t152 *),(A68_INT ,A68_INT ,struct A68t152 *,void *));
typedef struct A68t151  A68_151 ;    /* PROC(INT,INT) REF MODE152 */
A_VECTOR(struct A68t153 ,A68t152);
typedef struct A68t152  A68_152 ;    /* VECTOR [] MODE153 */
struct A68t153{
A68_INT  Instoffset;
A_PAD_INT(PAD_46)
A68_INT  Ipno;
A_PAD_INT(PAD_47)
};
typedef struct A68t153  A68_153 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t154,(A68_INT ,struct A68t128 *),(A68_INT ,struct A68t128 *,void *));
typedef struct A68t154  A68_154 ;    /* PROC(INT) MODE128 */

A_PROCEDURE(A68_VOID ,A68t155,(A68_INT ,struct A68t130 *),(A68_INT ,struct A68t130 *,void *));
typedef struct A68t155  A68_155 ;    /* PROC(INT) MODE130 */

A_PROCEDURE(A68_VOID ,A68t156,(A68_INT ,struct A68t131 *),(A68_INT ,struct A68t131 *,void *));
typedef struct A68t156  A68_156 ;    /* PROC(INT) MODE131 */

A_PROCEDURE(A68_VOID ,A68t157,(struct A68t145 ,struct A68t128 *),(struct A68t145 ,struct A68t128 *,void *));
typedef struct A68t157  A68_157 ;    /* PROC(MODE145) MODE128 */
struct A68t159 ;

A_PROCEDURE(A68_VOID ,A68t158,(struct A68t159 ),(struct A68t159 ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(MODE159) VOID */

A_PROCEDURE(A68_BOOL ,A68t159,(A68_VC ),(A68_VC ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(REF MODE26) BOOL */
struct A68t161 ;

A_PROCEDURE(A68_VOID ,A68t160,(struct A68t161 ,struct A68t36 ),(struct A68t161 ,struct A68t36 ,void *));
typedef struct A68t160  A68_160 ;    /* PROC(MODE161,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t161,(A68_VC ,struct A68t36 ),(A68_VC ,struct A68t36 ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(REF MODE26,MODE36) VOID */
struct A68t162{
A68_INT  Sort;
A_PAD_INT(PAD_48)
A68_INT  Size;
A_PAD_INT(PAD_49)
};
typedef struct A68t162  A68_162 ;    /* STRUCT(INT,INT)  */
struct A68t163{
struct A68t162  Head;
struct A68t163 * Tail;
};
typedef struct A68t163  A68_163 ;    /* STRUCT(MODE162,REF MODE163)  */
struct A68t165{
A68_INT  Lab;
A_PAD_INT(PAD_50)
A68_VC  Tag;
};
typedef struct A68t165  A68_165 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t164{
struct A68t165  Labelint;
struct A68t165  Labelcallinst;
A68_INT  Workspacesize;
A_PAD_INT(PAD_51)
A68_INT  Evalfn;
A_PAD_INT(PAD_52)
A68_INT  History;
A_PAD_INT(PAD_53)
A68_INT  Declid;
A_PAD_INT(PAD_54)
};
typedef struct A68t164  A68_164 ;    /* STRUCT(MODE165,MODE165,INT,INT,INT,INT)  */

A_PROCEDURE(struct A68t164 *,A68t166,(A68_VC ,struct A68t32 ,A68_INT ,struct A68t32 ,struct A68t36 ),(A68_VC ,struct A68t32 ,A68_INT ,struct A68t32 ,struct A68t36 ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(MODE26,MODE32,INT,MODE32,MODE36) REF MODE164 */
struct A68t167 { A68_INT mode; union {
A68_INT  mode1;
struct A68t165  mode2;
} data; };
typedef struct A68t167  A68_167 ;    /* UNION(INT,MODE165,VOID)  */

A_PROCEDURE(A68_VOID ,A68t168,(A68_VC ,struct A68t165 *),(A68_VC ,struct A68t165 *,void *));
typedef struct A68t168  A68_168 ;    /* PROC(MODE26) MODE165 */

A_PROCEDURE(A68_VOID ,A68t169,(struct A68t165 *),(struct A68t165 *,void *));
typedef struct A68t169  A68_169 ;    /* PROC MODE165 */

A_PROCEDURE(A68_VOID ,A68t170,(struct A68t43 ,A68_INT ,struct A68t36 ),(struct A68t43 ,A68_INT ,struct A68t36 ,void *));
typedef struct A68t170  A68_170 ;    /* PROC(MODE43,INT,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t171,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_INT ,A68t172,(A68_INT ,A68_INT *),(A68_INT ,A68_INT *,void *));
typedef struct A68t172  A68_172 ;    /* PROC(INT,REF INT) INT */

A_PROCEDURE(A68_VC *,A68t173,(A68_VC ),(A68_VC ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(REF MODE26) REF REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t174,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(INT,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t175,(A68_INT ),(A68_INT ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t176,(A68_INT ,struct A68t167 ),(A68_INT ,struct A68t167 ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(INT,MODE167) VOID */

A_PROCEDURE(A68_VOID ,A68t177,(A68_INT ,A68_INT ,struct A68t167 ),(A68_INT ,A68_INT ,struct A68t167 ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(INT,INT,MODE167) VOID */

A_PROCEDURE(A68_VOID ,A68t178,(struct A68t165 ),(struct A68t165 ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(MODE165) VOID */

A_PROCEDURE(A68_VOID ,A68t179,(A68_INT ,struct A68t165 ),(A68_INT ,struct A68t165 ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(INT,MODE165) VOID */

A_PROCEDURE(A68_VOID ,A68t180,(struct A68t167 ,struct A68t165 ),(struct A68t167 ,struct A68t165 ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(MODE167,MODE165) VOID */

A_PROCEDURE(A68_VOID ,A68t181,(struct A68t165 ,struct A68t163 *,struct A68t163 *),(struct A68t165 ,struct A68t163 *,struct A68t163 *,void *));
typedef struct A68t181  A68_181 ;    /* PROC(MODE165,REF MODE163,REF MODE163) VOID */

A_PROCEDURE(A68_VOID ,A68t182,(struct A68t165 ,A68_INT ),(struct A68t165 ,A68_INT ,void *));
typedef struct A68t182  A68_182 ;    /* PROC(MODE165,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t183,(A68_INT ,struct A68t36 ,A68_VC *),(A68_INT ,struct A68t36 ,A68_VC *,void *));
typedef struct A68t183  A68_183 ;    /* PROC(INT,MODE36) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t184,(A68_INT ,struct A68t36 ),(A68_INT ,struct A68t36 ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(INT,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t185,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(REF MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t186,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t186  A68_186 ;    /* PROC(INT,INT) REF MODE26 */
struct A68t188 ;

A_PROCEDURE(A68_VOID ,A68t187,(A68_INT ,struct A68t188 *),(A68_INT ,struct A68t188 *,void *));
typedef struct A68t187  A68_187 ;    /* PROC(INT) MODE188 */
struct A68t188{
A68_INT  Lasttime;
A_PAD_INT(PAD_55)
A68_INT  Interrupted;
A_PAD_INT(PAD_56)
};
typedef struct A68t188  A68_188 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t189,(struct A68t161 ,struct A68t161 ,struct A68t36 ),(struct A68t161 ,struct A68t161 ,struct A68t36 ,void *));
typedef struct A68t189  A68_189 ;    /* PROC(MODE161,MODE161,MODE36) VOID */
struct A68t191 ;

A_PROCEDURE(A68_VOID ,A68t190,(struct A68t191 *),(struct A68t191 *,void *));
typedef struct A68t190  A68_190 ;    /* PROC MODE191 */
struct A68t191{
A68_INT  Codesize;
A_PAD_INT(PAD_57)
A68_INT  Datasize;
A_PAD_INT(PAD_58)
A68_INT  Dynamicstacksize;
A_PAD_INT(PAD_59)
A68_INT  Staticstacksize;
A_PAD_INT(PAD_60)
};
typedef struct A68t191  A68_191 ;    /* STRUCT(INT,INT,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t192,(A68_INT ,A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t193,(struct A68t32 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t32 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t193  A68_193 ;    /* PROC(MODE32,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t194,(struct A68t32 ,struct A68t115 ),(struct A68t32 ,struct A68t115 ,void *));
typedef struct A68t194  A68_194 ;    /* PROC(REF MODE32,MODE115) VOID */

A_PROCEDURE(A68_VOID ,A68t195,(struct A68t32 ,A68_INT ,struct A68t115 ,A68_INT ,A68_INT ,A68_INT ),(struct A68t32 ,A68_INT ,struct A68t115 ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(MODE32,INT,MODE115,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t196,(struct A68t32 ,struct A68t32 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t32 ,struct A68t32 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t196  A68_196 ;    /* PROC(MODE32,MODE32,INT,INT,INT,INT) VOID */
struct A68t198 ;

A_PROCEDURE(A68_VOID ,A68t197,(struct A68t198 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t198 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(MODE198,INT,INT,INT,INT) VOID */
struct A68t206{
A68_INT  Svvoid;
A_PAD_INT(PAD_61)
};
typedef struct A68t206  A68_206 ;    /* STRUCT(INT)  */
struct A68t207{
A68_INT  Svnull;
A_PAD_INT(PAD_62)
};
typedef struct A68t207  A68_207 ;    /* STRUCT(INT)  */
struct A68t198 { A68_INT mode; union {
struct A68t199 * mode1;
struct A68t200 * mode2;
struct A68t201 * mode3;
struct A68t202 * mode4;
struct A68t203 * mode5;
struct A68t204 * mode6;
struct A68t205 * mode7;
struct A68t206  mode8;
struct A68t207  mode9;
} data; };
typedef struct A68t198  A68_198 ;    /* UNION(REF MODE199,REF MODE200,REF MODE201,REF MODE202,REF MODE203,REF MODE204,REF MODE205,MODE206,MODE207)  */
struct A68t199{
struct A68t115  Type;
};
typedef struct A68t199  A68_199 ;    /* STRUCT(MODE115)  */
struct A68t200{
struct A68t118 * Type;
A68_INT  Value;
A_PAD_INT(PAD_63)
};
typedef struct A68t200  A68_200 ;    /* STRUCT(REF MODE118,INT)  */
struct A68t201{
struct A68t119 * Type;
A68_CHAR  Value;
A_PAD_CHAR(PAD_64)
};
typedef struct A68t201  A68_201 ;    /* STRUCT(REF MODE119,CHAR)  */
struct A68t202{
struct A68t121 * Type;
A68_VC  Value;
};
typedef struct A68t202  A68_202 ;    /* STRUCT(REF MODE121,REF MODE26)  */
struct A68t203{
struct A68t117 * Type;
A68_INT  Tag;
A_PAD_INT(PAD_65)
struct A68t198  Assoc;
};
typedef struct A68t203  A68_203 ;    /* STRUCT(REF MODE117,INT,MODE198)  */
struct A68t204{
struct A68t198  Head;
struct A68t204 * Tail;
};
typedef struct A68t204  A68_204 ;    /* STRUCT(MODE198,REF MODE204)  */
struct A68t205{
struct A68t198  From;
struct A68t198  To;
};
typedef struct A68t205  A68_205 ;    /* STRUCT(MODE198,MODE198)  */

A_PROCEDURE(A68_VOID ,A68t208,(struct A68t198 ,struct A68t115 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t198 ,struct A68t115 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t208  A68_208 ;    /* PROC(MODE198,MODE115,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t209,(A68_INT ,A68_VC ,struct A68t130 *),(A68_INT ,A68_VC ,struct A68t130 *,void *));
typedef struct A68t209  A68_209 ;    /* PROC(INT,REF MODE26) MODE130 */

A_PROCEDURE(A68_VOID ,A68t210,(struct A68t32 ,A68_VC ,struct A68t130 *),(struct A68t32 ,A68_VC ,struct A68t130 *,void *));
typedef struct A68t210  A68_210 ;    /* PROC(MODE32,MODE26) MODE130 */
struct A68t211 { A68_INT mode; union {
struct A68t117 * mode1;
struct A68t118 * mode2;
struct A68t119 * mode3;
} data; };
typedef struct A68t211  A68_211 ;    /* UNION(REF MODE117,REF MODE118,REF MODE119)  */
struct A68t212{
struct A68t128 * Wire;
A68_INT  Instance;
A_PAD_INT(PAD_66)
};
typedef struct A68t212  A68_212 ;    /* STRUCT(REF MODE128,INT)  */
struct A68t213 { A68_INT mode; union {
struct A68t136  mode1;
struct A68t212  mode2;
} data; };
typedef struct A68t213  A68_213 ;    /* UNION(MODE136,MODE212)  */
struct A68t214{
struct A68t213  Node;
A68_INT  Circuit;
A_PAD_INT(PAD_67)
A68_INT  Base;
A_PAD_INT(PAD_68)
};
typedef struct A68t214  A68_214 ;    /* STRUCT(MODE213,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t215,(struct A68t198 ,struct A68t115 *),(struct A68t198 ,struct A68t115 *,void *));
typedef struct A68t215  A68_215 ;    /* PROC(MODE198) MODE115 */

A_PROCEDURE(A68_BOOL ,A68t216,(struct A68t115 ,struct A68t115 ),(struct A68t115 ,struct A68t115 ,void *));
typedef struct A68t216  A68_216 ;    /* PROC(MODE115,MODE115) BOOL */

A_PROCEDURE(A68_BOOL ,A68t217,(struct A68t198 ,struct A68t198 ),(struct A68t198 ,struct A68t198 ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(MODE198,MODE198) BOOL */

A_PROCEDURE(A68_BOOL ,A68t218,(struct A68t128 ,struct A68t128 ),(struct A68t128 ,struct A68t128 ,void *));
typedef struct A68t218  A68_218 ;    /* PROC(MODE128,MODE128) BOOL */

A_PROCEDURE(A68_BOOL ,A68t219,(struct A68t136 ,struct A68t136 ),(struct A68t136 ,struct A68t136 ,void *));
typedef struct A68t219  A68_219 ;    /* PROC(MODE136,MODE136) BOOL */

A_PROCEDURE(A68_BOOL ,A68t220,(struct A68t212 ,struct A68t212 ),(struct A68t212 ,struct A68t212 ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(MODE212,MODE212) BOOL */

A_PROCEDURE(A68_BOOL ,A68t221,(struct A68t213 ,struct A68t213 ),(struct A68t213 ,struct A68t213 ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(MODE213,MODE213) BOOL */

A_PROCEDURE(A68_BOOL ,A68t222,(struct A68t214 ,struct A68t214 ),(struct A68t214 ,struct A68t214 ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(MODE214,MODE214) BOOL */

A_PROCEDURE(struct A68t123 *,A68t223,(struct A68t123 *,struct A68t123 *),(struct A68t123 *,struct A68t123 *,void *));
typedef struct A68t223  A68_223 ;    /* PROC(REF MODE123,REF MODE123) REF MODE123 */

A_PROCEDURE(A68_VOID ,A68t224,(struct A68t132 ,struct A68t132 ,struct A68t132 *),(struct A68t132 ,struct A68t132 ,struct A68t132 *,void *));
typedef struct A68t224  A68_224 ;    /* PROC(REF MODE132,REF MODE132) REF MODE132 */

A_PROCEDURE(A68_INT ,A68t225,(A68_VC ),(A68_VC ,void *));
typedef struct A68t225  A68_225 ;    /* PROC(REF MODE26) INT */

A_PROCEDURE(struct A68t123 *,A68t226,(struct A68t115 ),(struct A68t115 ,void *));
typedef struct A68t226  A68_226 ;    /* PROC(MODE115) REF MODE123 */

A_PROCEDURE(struct A68t123 *,A68t227,(struct A68t115 ,A68_INT ,A68_INT ),(struct A68t115 ,A68_INT ,A68_INT ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(MODE115,INT,INT) REF MODE123 */

A_PROCEDURE(A68_VOID ,A68t228,(struct A68t128 ,A68_INT ,A68_INT ,struct A68t128 *),(struct A68t128 ,A68_INT ,A68_INT ,struct A68t128 *,void *));
typedef struct A68t228  A68_228 ;    /* PROC(MODE128,INT,INT) MODE128 */

A_PROCEDURE(A68_VOID ,A68t229,(struct A68t129 *,A68_INT ,A68_INT ,struct A68t128 *),(struct A68t129 *,A68_INT ,A68_INT ,struct A68t128 *,void *));
typedef struct A68t229  A68_229 ;    /* PROC(REF MODE129,INT,INT) MODE128 */

A_PROCEDURE(A68_VC *,A68t230,(struct A68t198 ,struct A68t115 ),(struct A68t198 ,struct A68t115 ,void *));
typedef struct A68t230  A68_230 ;    /* PROC(MODE198,MODE115) REF REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t231,(A68_VC ,struct A68t115 ,struct A68t198 *),(A68_VC ,struct A68t115 ,struct A68t198 *,void *));
typedef struct A68t231  A68_231 ;    /* PROC(REF MODE26,MODE115) MODE198 */
struct A68t232{
A68_VC  Id;
struct A68t232 * Rest;
};
typedef struct A68t232  A68_232 ;    /* STRUCT(REF MODE26,REF MODE232)  */
struct A68t233{
A68_INT  Int;
A_PAD_INT(PAD_69)
struct A68t233 * Rest;
};
typedef struct A68t233  A68_233 ;    /* STRUCT(INT,REF MODE233)  */
struct A68t234 { A68_INT mode; union {
struct A68t235 * mode1;
struct A68t236 * mode2;
struct A68t237 * mode3;
struct A68t238 * mode4;
struct A68t239 * mode5;
} data; };
typedef struct A68t234  A68_234 ;    /* UNION(REF MODE235,REF MODE236,REF MODE237,REF MODE238,REF MODE239)  */
struct A68t235{
A68_INT  Attrno;
A_PAD_INT(PAD_70)
};
typedef struct A68t235  A68_235 ;    /* STRUCT(INT)  */
struct A68t236{
A68_VC  Classname;
struct A68t232 * Strings;
};
typedef struct A68t236  A68_236 ;    /* STRUCT(REF MODE26,REF MODE232)  */
struct A68t237{
struct A68t234  Elem;
struct A68t237 * Rest;
};
typedef struct A68t237  A68_237 ;    /* STRUCT(MODE234,REF MODE237)  */
struct A68t238{
struct A68t234  Attr;
};
typedef struct A68t238  A68_238 ;    /* STRUCT(MODE234)  */
struct A68t239{
A68_INT  Attrnull;
A_PAD_INT(PAD_71)
};
typedef struct A68t239  A68_239 ;    /* STRUCT(INT)  */
struct A68t240{
A68_INT  Sort;
A_PAD_INT(PAD_72)
A68_VC  Attrname;
struct A68t234  Value;
struct A68t241 * Usage;
};
typedef struct A68t240  A68_240 ;    /* STRUCT(INT,REF MODE26,MODE234,REF MODE241)  */
struct A68t241{
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
typedef struct A68t241  A68_241 ;    /* STRUCT(INT,INT,INT,INT,BOOL,BOOL)  */
struct A68t242{
struct A68t234  Tag;
};
typedef struct A68t242  A68_242 ;    /* STRUCT(MODE234)  */
struct A68t243 { A68_INT mode; union {
struct A68t244 * mode1;
struct A68t245 * mode2;
struct A68t246 * mode3;
struct A68t247 * mode4;
struct A68t248 * mode5;
struct A68t249 * mode6;
struct A68t250 * mode7;
struct A68t251 * mode8;
struct A68t252 * mode9;
struct A68t253 * mode10;
} data; };
typedef struct A68t243  A68_243 ;    /* UNION(REF MODE244,REF MODE245,REF MODE246,REF MODE247,REF MODE248,REF MODE249,REF MODE250,REF MODE251,REF MODE252,REF MODE253)  */
struct A68t244{
A68_INT  Int;
A_PAD_INT(PAD_79)
A68_VC  Text;
};
typedef struct A68t244  A68_244 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t245{
A68_INT  Sort;
A_PAD_INT(PAD_80)
struct A68t243  Test;
struct A68t243  Standard;
};
typedef struct A68t245  A68_245 ;    /* STRUCT(INT,MODE243,MODE243)  */
struct A68t246{
A68_INT  Nameno;
A_PAD_INT(PAD_81)
};
typedef struct A68t246  A68_246 ;    /* STRUCT(INT)  */
struct A68t247{
A68_INT  Intno;
A_PAD_INT(PAD_82)
};
typedef struct A68t247  A68_247 ;    /* STRUCT(INT)  */
struct A68t248{
struct A68t243  Left;
A68_INT  Sort;
A_PAD_INT(PAD_83)
struct A68t243  Right;
};
typedef struct A68t248  A68_248 ;    /* STRUCT(MODE243,INT,MODE243)  */
struct A68t249{
A68_INT  Sort;
A_PAD_INT(PAD_84)
struct A68t243  Right;
};
typedef struct A68t249  A68_249 ;    /* STRUCT(INT,MODE243)  */
struct A68t250{
struct A68t243  Cond;
struct A68t243  True;
struct A68t243  False;
};
typedef struct A68t250  A68_250 ;    /* STRUCT(MODE243,MODE243,MODE243)  */
struct A68t251{
struct A68t243  Formula;
};
typedef struct A68t251  A68_251 ;    /* STRUCT(MODE243)  */
struct A68t252{
A68_INT  Macparno;
A_PAD_INT(PAD_85)
};
typedef struct A68t252  A68_252 ;    /* STRUCT(INT)  */
struct A68t253{
A68_INT  Fnull;
A_PAD_INT(PAD_86)
};
typedef struct A68t253  A68_253 ;    /* STRUCT(INT)  */
struct A68t254{
struct A68t243  Tag;
};
typedef struct A68t254  A68_254 ;    /* STRUCT(MODE243)  */
struct A68t255{
struct A68t243  Formula;
struct A68t255 * Rest;
};
typedef struct A68t255  A68_255 ;    /* STRUCT(MODE243,REF MODE255)  */
struct A68t258{
struct A68t243  Lwb;
struct A68t243  Upb;
};
typedef struct A68t258  A68_258 ;    /* STRUCT(MODE243,MODE243)  */
struct A68t257 { A68_INT mode; union {
struct A68t244 * mode1;
struct A68t245 * mode2;
struct A68t246 * mode3;
struct A68t247 * mode4;
struct A68t248 * mode5;
struct A68t249 * mode6;
struct A68t250 * mode7;
struct A68t251 * mode8;
struct A68t252 * mode9;
struct A68t253 * mode10;
struct A68t258  mode11;
} data; };
typedef struct A68t257  A68_257 ;    /* UNION(REF MODE244,REF MODE245,REF MODE246,REF MODE247,REF MODE248,REF MODE249,REF MODE250,REF MODE251,REF MODE252,REF MODE253,MODE258)  */
struct A68t256{
A68_INT  Sort;
A_PAD_INT(PAD_87)
A68_VC  Intname;
struct A68t234  Attr;
struct A68t257  Value;
struct A68t241 * Usage;
};
typedef struct A68t256  A68_256 ;    /* STRUCT(INT,REF MODE26,MODE234,MODE257,REF MODE241)  */
struct A68t259 { A68_INT mode; union {
struct A68t260 * mode1;
struct A68t261 * mode2;
struct A68t262 * mode3;
struct A68t263 * mode4;
struct A68t264 * mode5;
struct A68t265 * mode6;
struct A68t266 * mode7;
struct A68t252 * mode8;
struct A68t267 * mode9;
} data; };
typedef struct A68t259  A68_259 ;    /* UNION(REF MODE260,REF MODE261,REF MODE262,REF MODE263,REF MODE264,REF MODE265,REF MODE266,REF MODE252,REF MODE267)  */
struct A68t260{
A68_INT  Typeno;
A_PAD_INT(PAD_88)
};
typedef struct A68t260  A68_260 ;    /* STRUCT(INT)  */
struct A68t261{
struct A68t243  Size;
struct A68t259  Elem;
};
typedef struct A68t261  A68_261 ;    /* STRUCT(MODE243,MODE259)  */
struct A68t262{
struct A68t259  Elem;
struct A68t262 * Rest;
};
typedef struct A68t262  A68_262 ;    /* STRUCT(MODE259,REF MODE262)  */
struct A68t263{
struct A68t259  From;
struct A68t259  To;
};
typedef struct A68t263  A68_263 ;    /* STRUCT(MODE259,MODE259)  */
struct A68t264{
struct A68t259  Type;
};
typedef struct A68t264  A68_264 ;    /* STRUCT(MODE259)  */
struct A68t265{
struct A68t243  Size;
struct A68t259  Char;
};
typedef struct A68t265  A68_265 ;    /* STRUCT(MODE243,MODE259)  */
struct A68t266{
A68_INT  Tvoid;
A_PAD_INT(PAD_89)
};
typedef struct A68t266  A68_266 ;    /* STRUCT(INT)  */
struct A68t267{
A68_INT  Tnull;
A_PAD_INT(PAD_90)
};
typedef struct A68t267  A68_267 ;    /* STRUCT(INT)  */
struct A68t268{
struct A68t259  Tag;
};
typedef struct A68t268  A68_268 ;    /* STRUCT(MODE259)  */
struct A68t269{
A68_VC  Tagname;
A68_VC  Chars;
};
typedef struct A68t269  A68_269 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t270{
A68_VC  Altname;
struct A68t259  Assoc;
};
typedef struct A68t270  A68_270 ;    /* STRUCT(REF MODE26,MODE259)  */
struct A68t271{
A68_VC  Tagname;
struct A68t258  Range;
};
typedef struct A68t271  A68_271 ;    /* STRUCT(REF MODE26,MODE258)  */
A_VECTOR(struct A68t270 ,A68t273);
typedef struct A68t273  A68_273 ;    /* VECTOR [] MODE270 */
struct A68t272 { A68_INT mode; union {
struct A68t273  mode1;
struct A68t271 * mode2;
struct A68t268 * mode3;
struct A68t269 * mode4;
} data; };
typedef struct A68t272  A68_272 ;    /* UNION(REF MODE273,REF MODE271,REF MODE268,REF MODE269)  */
struct A68t274{
A68_INT  Sort;
A_PAD_INT(PAD_91)
A68_VC  Typename;
struct A68t234  Attr;
struct A68t272  Body;
struct A68t241 * Usage;
};
typedef struct A68t274  A68_274 ;    /* STRUCT(INT,REF MODE26,MODE234,MODE272,REF MODE241)  */
struct A68t275{
A68_INT  Constno;
A_PAD_INT(PAD_92)
};
typedef struct A68t275  A68_275 ;    /* STRUCT(INT)  */
struct A68t276{
A68_INT  Typeno;
A_PAD_INT(PAD_93)
A68_INT  Primno;
A_PAD_INT(PAD_94)
};
typedef struct A68t276  A68_276 ;    /* STRUCT(INT,INT)  */
struct A68t277{
A68_INT  Typeno;
A_PAD_INT(PAD_95)
struct A68t243  Index;
};
typedef struct A68t277  A68_277 ;    /* STRUCT(INT,MODE243)  */
struct A68t278{
A68_INT  Typeno;
A_PAD_INT(PAD_96)
struct A68t258  Range;
};
typedef struct A68t278  A68_278 ;    /* STRUCT(INT,MODE258)  */
struct A68t279{
struct A68t259  Querytype;
};
typedef struct A68t279  A68_279 ;    /* STRUCT(MODE259)  */
struct A68t281 { A68_INT mode; union {
struct A68t275 * mode1;
struct A68t276 * mode2;
struct A68t277 * mode3;
struct A68t279 * mode4;
struct A68t282 * mode5;
struct A68t283 * mode6;
struct A68t264 * mode7;
struct A68t278 * mode8;
struct A68t284 * mode9;
struct A68t285 * mode10;
struct A68t286 * mode11;
struct A68t287 * mode12;
struct A68t288 * mode13;
struct A68t289 * mode14;
struct A68t290 * mode15;
struct A68t291 * mode16;
struct A68t292 * mode17;
struct A68t293 * mode18;
struct A68t294 * mode19;
struct A68t295 * mode20;
struct A68t296 * mode21;
struct A68t297 * mode22;
struct A68t298 * mode23;
struct A68t299 * mode24;
struct A68t300 * mode25;
struct A68t301 * mode26;
struct A68t302 * mode27;
struct A68t303 * mode28;
struct A68t304 * mode29;
struct A68t305 * mode30;
struct A68t306 * mode31;
struct A68t307 * mode32;
struct A68t308 * mode33;
struct A68t309 * mode34;
} data; };
typedef struct A68t281  A68_281 ;    /* UNION(REF MODE275,REF MODE276,REF MODE277,REF MODE279,REF MODE282,REF MODE283,REF MODE264,REF MODE278,REF MODE284,REF MODE285,REF MODE286,REF MODE287,REF MODE288,REF MODE289,REF MODE290,REF MODE291,REF MODE292,REF MODE293,REF MODE294,REF MODE295,REF MODE296,REF MODE297,REF MODE298,REF MODE299,REF MODE300,REF MODE301,REF MODE302,REF MODE303,REF MODE304,REF MODE305,REF MODE306,REF MODE307,REF MODE308,REF MODE309)  */
struct A68t280{
A68_INT  Sort;
A_PAD_INT(PAD_97)
A68_VC  Constname;
struct A68t234  Attr;
struct A68t281  Value;
struct A68t241 * Usage;
};
typedef struct A68t280  A68_280 ;    /* STRUCT(INT,REF MODE26,MODE234,MODE281,REF MODE241)  */
struct A68t282{
A68_INT  Typeno;
A_PAD_INT(PAD_98)
struct A68t32  String;
};
typedef struct A68t282  A68_282 ;    /* STRUCT(INT,REF MODE32)  */
struct A68t283{
A68_INT  Cvoid;
A_PAD_INT(PAD_99)
};
typedef struct A68t283  A68_283 ;    /* STRUCT(INT)  */
struct A68t284{
A68_INT  Typeno;
A_PAD_INT(PAD_100)
A68_INT  Firstno;
A_PAD_INT(PAD_101)
A68_INT  Lastno;
A_PAD_INT(PAD_102)
};
typedef struct A68t284  A68_284 ;    /* STRUCT(INT,INT,INT)  */
struct A68t285{
struct A68t281  Alt;
struct A68t285 * Rest;
};
typedef struct A68t285  A68_285 ;    /* STRUCT(MODE281,REF MODE285)  */
struct A68t286{
A68_INT  Sort;
A_PAD_INT(PAD_103)
A68_INT  Nameno;
A_PAD_INT(PAD_104)
};
typedef struct A68t286  A68_286 ;    /* STRUCT(INT,INT)  */
struct A68t287{
struct A68t281  Sink;
struct A68t281  Source;
};
typedef struct A68t287  A68_287 ;    /* STRUCT(MODE281,MODE281)  */
struct A68t288{
A68_INT  Typeno;
A_PAD_INT(PAD_105)
A68_INT  Altno;
A_PAD_INT(PAD_106)
struct A68t281  Assoc;
};
typedef struct A68t288  A68_288 ;    /* STRUCT(INT,INT,MODE281)  */
struct A68t289{
struct A68t281  Extract;
A68_INT  Typeno;
A_PAD_INT(PAD_107)
A68_INT  Altno;
A_PAD_INT(PAD_108)
};
typedef struct A68t289  A68_289 ;    /* STRUCT(MODE281,INT,INT)  */
struct A68t290{
struct A68t281  Unit;
A68_INT  Fnno;
A_PAD_INT(PAD_109)
A68_INT  Nameno;
A_PAD_INT(PAD_110)
};
typedef struct A68t290  A68_290 ;    /* STRUCT(MODE281,INT,INT)  */
struct A68t291{
struct A68t281  Unit;
struct A68t243  Index;
};
typedef struct A68t291  A68_291 ;    /* STRUCT(MODE281,MODE243)  */
struct A68t292{
struct A68t281  Unit;
struct A68t258  Range;
};
typedef struct A68t292  A68_292 ;    /* STRUCT(MODE281,MODE258)  */
struct A68t293{
struct A68t281  Unit;
struct A68t281  Index;
};
typedef struct A68t293  A68_293 ;    /* STRUCT(MODE281,MODE281)  */
struct A68t294{
struct A68t281  Unit;
struct A68t281  Index;
struct A68t281  From;
};
typedef struct A68t294  A68_294 ;    /* STRUCT(MODE281,MODE281,MODE281)  */
struct A68t295{
struct A68t243  Size;
struct A68t281  Elem;
};
typedef struct A68t295  A68_295 ;    /* STRUCT(MODE243,MODE281)  */
struct A68t296{
struct A68t281  Elem;
struct A68t296 * Rest;
};
typedef struct A68t296  A68_296 ;    /* STRUCT(MODE281,REF MODE296)  */
struct A68t297{
A68_BOOL  String;
A_PAD_BOOL(PAD_111)
A68_INT  Sort;
A_PAD_INT(PAD_112)
struct A68t281  Left;
struct A68t281  Right;
};
typedef struct A68t297  A68_297 ;    /* STRUCT(BOOL,INT,MODE281,MODE281)  */
A_VECTOR(struct A68t324 ,A68t323);
typedef struct A68t323  A68_323 ;    /* VECTOR [] MODE324 */
struct A68t326{
struct A68t281  Tag;
};
typedef struct A68t326  A68_326 ;    /* STRUCT(MODE281)  */
struct A68t321{
A68_INT  Fnno;
A_PAD_INT(PAD_113)
struct A68t323  Macparams;
struct A68t234  Attr;
};
typedef struct A68t321  A68_321 ;    /* STRUCT(INT,REF MODE323,MODE234)  */
struct A68t325 { A68_INT mode; union {
struct A68t242  mode1;
struct A68t254  mode2;
struct A68t268  mode3;
struct A68t326  mode4;
struct A68t321  mode5;
} data; };
typedef struct A68t325  A68_325 ;    /* UNION(MODE242,MODE254,MODE268,MODE326,MODE321)  */
struct A68t324{
A68_INT  Sort;
A_PAD_INT(PAD_114)
struct A68t325  Param;
};
typedef struct A68t324  A68_324 ;    /* STRUCT(INT,MODE325)  */
struct A68t298{
struct A68t321  Inst;
struct A68t281  Right;
};
typedef struct A68t298  A68_298 ;    /* STRUCT(MODE321,MODE281)  */
struct A68t299{
struct A68t281  Left;
struct A68t321  Inst;
struct A68t281  Right;
};
typedef struct A68t299  A68_299 ;    /* STRUCT(MODE281,MODE321,MODE281)  */
struct A68t300{
struct A68t281  Input;
struct A68t341 * Choices;
};
typedef struct A68t300  A68_300 ;    /* STRUCT(MODE281,REF MODE341)  */
struct A68t301{
struct A68t243  Cond;
struct A68t281  True;
struct A68t281  False;
};
typedef struct A68t301  A68_301 ;    /* STRUCT(MODE243,MODE281,MODE281)  */
struct A68t302{
struct A68t243  Repl;
struct A68t281  Body;
};
typedef struct A68t302  A68_302 ;    /* STRUCT(MODE243,MODE281)  */
struct A68t303{
struct A68t329 * Body;
struct A68t281  Output;
};
typedef struct A68t303  A68_303 ;    /* STRUCT(REF MODE329,MODE281)  */
struct A68t304{
struct A68t310 * Body;
struct A68t281  Output;
};
typedef struct A68t304  A68_304 ;    /* STRUCT(REF MODE310,MODE281)  */
struct A68t305{
struct A68t281  Unit;
struct A68t234  Attr;
};
typedef struct A68t305  A68_305 ;    /* STRUCT(MODE281,MODE234)  */
struct A68t306{
struct A68t281  Unit;
struct A68t245  Check;
};
typedef struct A68t306  A68_306 ;    /* STRUCT(MODE281,MODE245)  */
struct A68t307{
struct A68t281  Unit;
};
typedef struct A68t307  A68_307 ;    /* STRUCT(MODE281)  */
struct A68t308{
struct A68t243  Size;
struct A68t281  Char;
};
typedef struct A68t308  A68_308 ;    /* STRUCT(MODE243,MODE281)  */
struct A68t309{
A68_INT  Unull;
A_PAD_INT(PAD_115)
};
typedef struct A68t309  A68_309 ;    /* STRUCT(INT)  */
struct A68t312{
A68_INT  Fnno;
A_PAD_INT(PAD_116)
};
typedef struct A68t312  A68_312 ;    /* STRUCT(INT)  */
struct A68t311 { A68_INT mode; union {
struct A68t235  mode1;
struct A68t247  mode2;
struct A68t260  mode3;
struct A68t275  mode4;
struct A68t312  mode5;
struct A68t313 * mode6;
struct A68t314 * mode7;
struct A68t315 * mode8;
struct A68t316 * mode9;
struct A68t317 * mode10;
struct A68t318 * mode11;
struct A68t319 * mode12;
} data; };
typedef struct A68t311  A68_311 ;    /* UNION(MODE235,MODE247,MODE260,MODE275,MODE312,REF MODE313,REF MODE314,REF MODE315,REF MODE316,REF MODE317,REF MODE318,REF MODE319)  */
struct A68t310{
struct A68t311  Step;
struct A68t310 * Rest;
};
typedef struct A68t310  A68_310 ;    /* STRUCT(MODE311,REF MODE310)  */
struct A68t313{
struct A68t243  Cond;
struct A68t327 * Print;
};
typedef struct A68t313  A68_313 ;    /* STRUCT(MODE243,REF MODE327)  */
struct A68t314{
struct A68t243  Cond;
struct A68t327 * Fault;
};
typedef struct A68t314  A68_314 ;    /* STRUCT(MODE243,REF MODE327)  */
struct A68t315{
struct A68t322 * Letnames;
struct A68t281  Unit;
};
typedef struct A68t315  A68_315 ;    /* STRUCT(REF MODE322,MODE281)  */
struct A68t316{
struct A68t255 * Sizes;
struct A68t321  Inst;
struct A68t322 * Makenames;
};
typedef struct A68t316  A68_316 ;    /* STRUCT(REF MODE255,MODE321,REF MODE322)  */
struct A68t317{
struct A68t281  From;
struct A68t281  To;
};
typedef struct A68t317  A68_317 ;    /* STRUCT(MODE281,MODE281)  */
struct A68t318{
struct A68t255 * Repls;
struct A68t320 * Joins;
};
typedef struct A68t318  A68_318 ;    /* STRUCT(REF MODE255,REF MODE320)  */
struct A68t319{
A68_INT  Stepnull;
A_PAD_INT(PAD_117)
};
typedef struct A68t319  A68_319 ;    /* STRUCT(INT)  */
struct A68t320{
struct A68t317  Join;
struct A68t320 * Rest;
};
typedef struct A68t320  A68_320 ;    /* STRUCT(MODE317,REF MODE320)  */
struct A68t322{
A68_INT  Nameno;
A_PAD_INT(PAD_118)
struct A68t322 * Rest;
};
typedef struct A68t322  A68_322 ;    /* STRUCT(INT,REF MODE322)  */
struct A68t328 { A68_INT mode; union {
A68_VC  mode1;
struct A68t254 * mode2;
} data; };
typedef struct A68t328  A68_328 ;    /* UNION(REF MODE26,REF MODE254)  */
struct A68t327{
struct A68t328  Item;
struct A68t327 * Rest;
};
typedef struct A68t327  A68_327 ;    /* STRUCT(MODE328,REF MODE327)  */
struct A68t330 { A68_INT mode; union {
struct A68t235  mode1;
struct A68t247  mode2;
struct A68t260  mode3;
struct A68t275  mode4;
struct A68t312  mode5;
struct A68t313 * mode6;
struct A68t314 * mode7;
struct A68t331 * mode8;
struct A68t332 * mode9;
struct A68t333 * mode10;
struct A68t334 * mode11;
struct A68t335 * mode12;
struct A68t336 * mode13;
struct A68t337 * mode14;
struct A68t338 * mode15;
struct A68t329 * mode16;
struct A68t339 * mode17;
} data; };
typedef struct A68t330  A68_330 ;    /* UNION(MODE235,MODE247,MODE260,MODE275,MODE312,REF MODE313,REF MODE314,REF MODE331,REF MODE332,REF MODE333,REF MODE334,REF MODE335,REF MODE336,REF MODE337,REF MODE338,REF MODE329,REF MODE339)  */
struct A68t329{
struct A68t330  Step;
struct A68t329 * Rest;
};
typedef struct A68t329  A68_329 ;    /* STRUCT(MODE330,REF MODE329)  */
struct A68t331{
struct A68t315  Seqlet;
};
typedef struct A68t331  A68_331 ;    /* STRUCT(MODE315)  */
struct A68t332{
struct A68t315  Seqvar;
};
typedef struct A68t332  A68_332 ;    /* STRUCT(MODE315)  */
struct A68t333{
struct A68t322 * Pvarnames;
struct A68t281  Init;
};
typedef struct A68t333  A68_333 ;    /* STRUCT(REF MODE322,MODE281)  */
struct A68t334{
struct A68t281  To;
struct A68t281  From;
};
typedef struct A68t334  A68_334 ;    /* STRUCT(MODE281,MODE281)  */
struct A68t335{
struct A68t281  Input;
struct A68t340 * Choices;
};
typedef struct A68t335  A68_335 ;    /* STRUCT(MODE281,REF MODE340)  */
struct A68t336{
struct A68t243  Cond;
struct A68t330  True;
struct A68t330  False;
};
typedef struct A68t336  A68_336 ;    /* STRUCT(MODE243,MODE330,MODE330)  */
struct A68t337{
struct A68t243  Repl;
struct A68t330  Body;
};
typedef struct A68t337  A68_337 ;    /* STRUCT(MODE243,MODE330)  */
struct A68t338{
A68_INT  Seqnull;
A_PAD_INT(PAD_119)
};
typedef struct A68t338  A68_338 ;    /* STRUCT(INT)  */
struct A68t339{
struct A68t243  Size;
struct A68t330  Elem;
};
typedef struct A68t339  A68_339 ;    /* STRUCT(MODE243,MODE330)  */
struct A68t340{
A68_BOOL  Check;
A_PAD_BOOL(PAD_120)
A68_INT  Sort;
A_PAD_INT(PAD_121)
struct A68t281  Test;
struct A68t330  Output;
struct A68t340 * Rest;
};
typedef struct A68t340  A68_340 ;    /* STRUCT(BOOL,INT,MODE281,MODE330,REF MODE340)  */
struct A68t341{
A68_BOOL  Check;
A_PAD_BOOL(PAD_122)
A68_INT  Sort;
A_PAD_INT(PAD_123)
struct A68t281  Test;
struct A68t281  Output;
struct A68t341 * Rest;
};
typedef struct A68t341  A68_341 ;    /* STRUCT(BOOL,INT,MODE281,MODE281,REF MODE341)  */
struct A68t342 { A68_INT mode; union {
struct A68t235  mode1;
struct A68t247  mode2;
struct A68t260  mode3;
struct A68t275  mode4;
struct A68t312  mode5;
} data; };
typedef struct A68t342  A68_342 ;    /* UNION(MODE235,MODE247,MODE260,MODE275,MODE312)  */
struct A68t343{
A68_BOOL  Biop;
A_PAD_BOOL(PAD_124)
A68_VC  Name;
struct A68t323  Macparams;
};
typedef struct A68t343  A68_343 ;    /* STRUCT(BOOL,REF MODE26,REF MODE323)  */
struct A68t344{
struct A68t243  Output;
};
typedef struct A68t344  A68_344 ;    /* STRUCT(MODE243)  */
struct A68t345{
A68_INT  Reform;
A_PAD_INT(PAD_125)
};
typedef struct A68t345  A68_345 ;    /* STRUCT(INT)  */
struct A68t346{
A68_VC  Name;
A68_INT  Contextno;
A_PAD_INT(PAD_126)
struct A68t92  Ctname;
};
typedef struct A68t346  A68_346 ;    /* STRUCT(REF MODE26,INT,MODE92)  */
struct A68t347{
A68_INT  Sort;
A_PAD_INT(PAD_127)
struct A68t281  Init;
struct A68t243  Ambigtime;
struct A68t281  Ambig;
struct A68t243  Delaytime;
};
typedef struct A68t347  A68_347 ;    /* STRUCT(INT,MODE281,MODE243,MODE281,MODE243)  */
struct A68t348{
struct A68t281  Init;
struct A68t243  Delaytime;
};
typedef struct A68t348  A68_348 ;    /* STRUCT(MODE281,MODE243)  */
struct A68t349{
struct A68t281  Init;
};
typedef struct A68t349  A68_349 ;    /* STRUCT(MODE281)  */
struct A68t350{
A68_INT  Sort;
A_PAD_INT(PAD_128)
struct A68t243  Interval;
struct A68t281  Init;
struct A68t243  Skew;
};
typedef struct A68t350  A68_350 ;    /* STRUCT(INT,MODE243,MODE281,MODE243)  */
struct A68t351{
A68_BOOL  Faster;
A_PAD_BOOL(PAD_129)
A68_INT  Sort;
A_PAD_INT(PAD_130)
struct A68t321  Inst;
struct A68t243  Scale;
struct A68t281  Init;
struct A68t243  Skew;
};
typedef struct A68t351  A68_351 ;    /* STRUCT(BOOL,INT,MODE321,MODE243,MODE281,MODE243)  */
struct A68t353 { A68_INT mode; union {
struct A68t326 * mode1;
struct A68t343 * mode2;
struct A68t344 * mode3;
struct A68t345 * mode4;
struct A68t346 * mode5;
struct A68t347 * mode6;
struct A68t348 * mode7;
struct A68t349 * mode8;
struct A68t350 * mode9;
struct A68t351 * mode10;
struct A68t352 * mode11;
struct A68t354 * mode12;
} data; };
typedef struct A68t353  A68_353 ;    /* UNION(REF MODE326,REF MODE343,REF MODE344,REF MODE345,REF MODE346,REF MODE347,REF MODE348,REF MODE349,REF MODE350,REF MODE351,REF MODE352,REF MODE354)  */
struct A68t352{
struct A68t233 * Joincheck;
A68_BOOL  Check;
A_PAD_BOOL(PAD_131)
struct A68t353  Fnbody;
};
typedef struct A68t352  A68_352 ;    /* STRUCT(REF MODE233,BOOL,MODE353)  */
struct A68t354{
A68_INT  Bodynull;
A_PAD_INT(PAD_132)
};
typedef struct A68t354  A68_354 ;    /* STRUCT(INT)  */
struct A68t355{
A68_INT  Sort;
A_PAD_INT(PAD_133)
struct A68t342  Spec;
};
typedef struct A68t355  A68_355 ;    /* STRUCT(INT,MODE342)  */
struct A68t356{
A68_VC  Name;
struct A68t259  Type;
struct A68t234  Attr;
};
typedef struct A68t356  A68_356 ;    /* STRUCT(REF MODE26,MODE259,MODE234)  */
A_VECTOR(struct A68t355 ,A68t358);
typedef struct A68t358  A68_358 ;    /* VECTOR [] MODE355 */
A_VECTOR(struct A68t356 ,A68t359);
typedef struct A68t359  A68_359 ;    /* VECTOR [] MODE356 */
struct A68t357{
A68_INT  Sort;
A_PAD_INT(PAD_134)
A68_BOOL  Macro;
A_PAD_BOOL(PAD_135)
A68_VC  Fnname;
struct A68t358  Macspecs;
struct A68t234  Attr;
struct A68t322 * Inputs;
struct A68t322 * Outputs;
struct A68t359  Nametypes;
struct A68t353  Fnbody;
struct A68t241 * Usage;
};
typedef struct A68t357  A68_357 ;    /* STRUCT(INT,BOOL,REF MODE26,REF MODE358,MODE234,REF MODE322,REF MODE322,REF MODE359,MODE353,REF MODE241)  */
A_VECTOR(struct A68t240 *,A68t361);
typedef struct A68t361  A68_361 ;    /* VECTOR [] REF MODE240 */
A_VECTOR(struct A68t256 *,A68t362);
typedef struct A68t362  A68_362 ;    /* VECTOR [] REF MODE256 */
A_VECTOR(struct A68t274 *,A68t363);
typedef struct A68t363  A68_363 ;    /* VECTOR [] REF MODE274 */
A_VECTOR(struct A68t280 *,A68t364);
typedef struct A68t364  A68_364 ;    /* VECTOR [] REF MODE280 */
A_VECTOR(struct A68t357 *,A68t365);
typedef struct A68t365  A68_365 ;    /* VECTOR [] REF MODE357 */
struct A68t360{
struct A68t361  Attrs;
struct A68t362  Ints;
struct A68t363  Types;
struct A68t364  Consts;
struct A68t365  Fns;
};
typedef struct A68t360  A68_360 ;    /* STRUCT(REF MODE361,REF MODE362,REF MODE363,REF MODE364,REF MODE365)  */
struct A68t366{
A68_INT  Closureno;
A_PAD_INT(PAD_136)
A68_INT  Sort;
A_PAD_INT(PAD_137)
struct A68t360 * Environ;
};
typedef struct A68t366  A68_366 ;    /* STRUCT(INT,INT,REF MODE360)  */
struct A68t367{
struct A68t366  Outer;
struct A68t367 * Rest;
};
typedef struct A68t367  A68_367 ;    /* STRUCT(MODE366,REF MODE367)  */
A_VECTOR(struct A68t367 ,A68t369);
typedef struct A68t369  A68_369 ;    /* VECTOR [] MODE367 */
struct A68t368{
struct A68t369  Outers;
struct A68t368 * Rest;
};
typedef struct A68t368  A68_368 ;    /* STRUCT(REF MODE369,REF MODE368)  */
struct A68t370{
A68_INT  Max_closureno;
A_PAD_INT(PAD_138)
struct A68t367 * Outers;
struct A68t367 * Freelist;
struct A68t368 * Outerslist;
};
typedef struct A68t370  A68_370 ;    /* STRUCT(INT,REF MODE367,REF MODE367,REF MODE368)  */
A_VECTOR(A68_VC ,A68t371);
typedef struct A68t371  A68_371 ;    /* VECTOR [] REF MODE26 */
A_VECTOR(struct A68t367 *,A68t372);
typedef struct A68t372  A68_372 ;    /* VECTOR [] REF MODE367 */

A_PROCEDURE(struct A68t246 *,A68t373,(A68_INT ),(A68_INT ,void *));
typedef struct A68t373  A68_373 ;    /* PROC(INT) REF MODE246 */

A_PROCEDURE(struct A68t247 *,A68t374,(A68_INT ),(A68_INT ,void *));
typedef struct A68t374  A68_374 ;    /* PROC(INT) REF MODE247 */

A_PROCEDURE(struct A68t251 *,A68t375,(struct A68t243 ),(struct A68t243 ,void *));
typedef struct A68t375  A68_375 ;    /* PROC(MODE243) REF MODE251 */

A_PROCEDURE(struct A68t254 *,A68t376,(struct A68t243 ),(struct A68t243 ,void *));
typedef struct A68t376  A68_376 ;    /* PROC(MODE243) REF MODE254 */

A_PROCEDURE(struct A68t260 *,A68t377,(A68_INT ),(A68_INT ,void *));
typedef struct A68t377  A68_377 ;    /* PROC(INT) REF MODE260 */

A_PROCEDURE(struct A68t264 *,A68t378,(struct A68t259 ),(struct A68t259 ,void *));
typedef struct A68t378  A68_378 ;    /* PROC(MODE259) REF MODE264 */

A_PROCEDURE(struct A68t268 *,A68t379,(struct A68t259 ),(struct A68t259 ,void *));
typedef struct A68t379  A68_379 ;    /* PROC(MODE259) REF MODE268 */

A_PROCEDURE(struct A68t275 *,A68t380,(A68_INT ),(A68_INT ,void *));
typedef struct A68t380  A68_380 ;    /* PROC(INT) REF MODE275 */

A_PROCEDURE(struct A68t279 *,A68t381,(struct A68t259 ),(struct A68t259 ,void *));
typedef struct A68t381  A68_381 ;    /* PROC(MODE259) REF MODE279 */

A_PROCEDURE(struct A68t331 *,A68t382,(struct A68t315 ),(struct A68t315 ,void *));
typedef struct A68t382  A68_382 ;    /* PROC(MODE315) REF MODE331 */

A_PROCEDURE(struct A68t332 *,A68t383,(struct A68t315 ),(struct A68t315 ,void *));
typedef struct A68t383  A68_383 ;    /* PROC(MODE315) REF MODE332 */

A_PROCEDURE(struct A68t307 *,A68t384,(struct A68t281 ),(struct A68t281 ,void *));
typedef struct A68t384  A68_384 ;    /* PROC(MODE281) REF MODE307 */

A_PROCEDURE(struct A68t326 *,A68t385,(struct A68t281 ),(struct A68t281 ,void *));
typedef struct A68t385  A68_385 ;    /* PROC(MODE281) REF MODE326 */

A_PROCEDURE(struct A68t312 *,A68t386,(A68_INT ),(A68_INT ,void *));
typedef struct A68t386  A68_386 ;    /* PROC(INT) REF MODE312 */

A_PROCEDURE(struct A68t344 *,A68t387,(struct A68t243 ),(struct A68t243 ,void *));
typedef struct A68t387  A68_387 ;    /* PROC(MODE243) REF MODE344 */

A_PROCEDURE(struct A68t349 *,A68t388,(struct A68t281 ),(struct A68t281 ,void *));
typedef struct A68t388  A68_388 ;    /* PROC(MODE281) REF MODE349 */

A_PROCEDURE(struct A68t252 *,A68t389,(A68_INT ),(A68_INT ,void *));
typedef struct A68t389  A68_389 ;    /* PROC(INT) REF MODE252 */

A_PROCEDURE(struct A68t235 *,A68t390,(A68_INT ),(A68_INT ,void *));
typedef struct A68t390  A68_390 ;    /* PROC(INT) REF MODE235 */

A_PROCEDURE(struct A68t242 *,A68t391,(struct A68t234 ),(struct A68t234 ,void *));
typedef struct A68t391  A68_391 ;    /* PROC(MODE234) REF MODE242 */

A_PROCEDURE(struct A68t238 *,A68t392,(struct A68t234 ),(struct A68t234 ,void *));
typedef struct A68t392  A68_392 ;    /* PROC(MODE234) REF MODE238 */
A_VECTOR(struct A68t232 *,A68t393);
typedef struct A68t393  A68_393 ;    /* VECTOR [] REF MODE232 */

A_PROCEDURE(struct A68t244 *,A68t394,(A68_INT ),(A68_INT ,void *));
typedef struct A68t394  A68_394 ;    /* PROC(INT) REF MODE244 */

A_PROCEDURE(A68_INT ,A68t395,(struct A68t243 ,struct A68t108 ),(struct A68t243 ,struct A68t108 ,void *));
typedef struct A68t395  A68_395 ;    /* PROC(MODE243,MODE108) INT */

A_PROCEDURE(A68_INT ,A68t396,(struct A68t243 ),(struct A68t243 ,void *));
typedef struct A68t396  A68_396 ;    /* PROC(MODE243) INT */

A_PROCEDURE(A68_VOID ,A68t397,(struct A68t243 ,struct A68t243 *),(struct A68t243 ,struct A68t243 *,void *));
typedef struct A68t397  A68_397 ;    /* PROC(MODE243) MODE243 */

A_PROCEDURE(struct A68t240 *,A68t398,(struct A68t366 ),(struct A68t366 ,void *));
typedef struct A68t398  A68_398 ;    /* PROC(MODE366) REF MODE240 */

A_PROCEDURE(struct A68t256 *,A68t399,(struct A68t366 ),(struct A68t366 ,void *));
typedef struct A68t399  A68_399 ;    /* PROC(MODE366) REF MODE256 */

A_PROCEDURE(struct A68t274 *,A68t400,(struct A68t366 ),(struct A68t366 ,void *));
typedef struct A68t400  A68_400 ;    /* PROC(MODE366) REF MODE274 */

A_PROCEDURE(struct A68t280 *,A68t401,(struct A68t366 ),(struct A68t366 ,void *));
typedef struct A68t401  A68_401 ;    /* PROC(MODE366) REF MODE280 */

A_PROCEDURE(struct A68t357 *,A68t402,(struct A68t366 ),(struct A68t366 ,void *));
typedef struct A68t402  A68_402 ;    /* PROC(MODE366) REF MODE357 */

A_PROCEDURE(A68_INT ,A68t403,(struct A68t241 *,struct A68t361 ),(struct A68t241 *,struct A68t361 ,void *));
typedef struct A68t403  A68_403 ;    /* PROC(REF MODE241,REF MODE361) INT */

A_PROCEDURE(A68_INT ,A68t404,(struct A68t241 *,struct A68t362 ),(struct A68t241 *,struct A68t362 ,void *));
typedef struct A68t404  A68_404 ;    /* PROC(REF MODE241,REF MODE362) INT */

A_PROCEDURE(A68_INT ,A68t405,(struct A68t241 *,struct A68t363 ),(struct A68t241 *,struct A68t363 ,void *));
typedef struct A68t405  A68_405 ;    /* PROC(REF MODE241,REF MODE363) INT */

A_PROCEDURE(A68_INT ,A68t406,(struct A68t241 *,struct A68t364 ),(struct A68t241 *,struct A68t364 ,void *));
typedef struct A68t406  A68_406 ;    /* PROC(REF MODE241,REF MODE364) INT */

A_PROCEDURE(A68_INT ,A68t407,(struct A68t241 *,struct A68t365 ),(struct A68t241 *,struct A68t365 ,void *));
typedef struct A68t407  A68_407 ;    /* PROC(REF MODE241,REF MODE365) INT */

A_PROCEDURE(struct A68t240 *,A68t408,(struct A68t235 ,struct A68t370 *,struct A68t360 *),(struct A68t235 ,struct A68t370 *,struct A68t360 *,void *));
typedef struct A68t408  A68_408 ;    /* PROC(MODE235,REF MODE370,REF MODE360) REF MODE240 */

A_PROCEDURE(struct A68t256 *,A68t409,(struct A68t247 ,struct A68t370 *,struct A68t360 *),(struct A68t247 ,struct A68t370 *,struct A68t360 *,void *));
typedef struct A68t409  A68_409 ;    /* PROC(MODE247,REF MODE370,REF MODE360) REF MODE256 */

A_PROCEDURE(struct A68t274 *,A68t410,(struct A68t260 ,struct A68t370 *,struct A68t360 *),(struct A68t260 ,struct A68t370 *,struct A68t360 *,void *));
typedef struct A68t410  A68_410 ;    /* PROC(MODE260,REF MODE370,REF MODE360) REF MODE274 */

A_PROCEDURE(struct A68t280 *,A68t411,(struct A68t275 ,struct A68t370 *,struct A68t360 *),(struct A68t275 ,struct A68t370 *,struct A68t360 *,void *));
typedef struct A68t411  A68_411 ;    /* PROC(MODE275,REF MODE370,REF MODE360) REF MODE280 */

A_PROCEDURE(struct A68t357 *,A68t412,(struct A68t312 ,struct A68t370 *,struct A68t360 *),(struct A68t312 ,struct A68t370 *,struct A68t360 *,void *));
typedef struct A68t412  A68_412 ;    /* PROC(MODE312,REF MODE370,REF MODE360) REF MODE357 */

A_PROCEDURE(struct A68t263 *,A68t413,(struct A68t357 *),(struct A68t357 *,void *));
typedef struct A68t413  A68_413 ;    /* PROC(REF MODE357) REF MODE263 */

A_PROCEDURE(A68_VOID ,A68t414,(struct A68t262 *,struct A68t243 *),(struct A68t262 *,struct A68t243 *,void *));
typedef struct A68t414  A68_414 ;    /* PROC(REF MODE262) MODE243 */

A_PROCEDURE(A68_VOID ,A68t415,(struct A68t259 ,struct A68t360 *,struct A68t243 *),(struct A68t259 ,struct A68t360 *,struct A68t243 *,void *));
typedef struct A68t415  A68_415 ;    /* PROC(MODE259,REF MODE360) MODE243 */

A_PROCEDURE(struct A68t357 *,A68t416,(struct A68t357 *,struct A68t360 *,struct A68t360 *),(struct A68t357 *,struct A68t360 *,struct A68t360 *,void *));
typedef struct A68t416  A68_416 ;    /* PROC(REF MODE357,REF MODE360,REF MODE360) REF MODE357 */

A_PROCEDURE(A68_VOID ,A68t417,(struct A68t322 *,struct A68t357 *,struct A68t259 *),(struct A68t322 *,struct A68t357 *,struct A68t259 *,void *));
typedef struct A68t417  A68_417 ;    /* PROC(REF MODE322,REF MODE357) MODE259 */

A_PROCEDURE(A68_INT ,A68t418,(struct A68t322 *),(struct A68t322 *,void *));
typedef struct A68t418  A68_418 ;    /* PROC(REF MODE322) INT */

A_PROCEDURE(A68_INT ,A68t419,(struct A68t322 *,A68_INT ),(struct A68t322 *,A68_INT ,void *));
typedef struct A68t419  A68_419 ;    /* PROC(REF MODE322,INT) INT */

A_PROCEDURE(A68_VOID ,A68t420,(struct A68t281 ,struct A68t357 *,struct A68t360 *,struct A68t259 *),(struct A68t281 ,struct A68t357 *,struct A68t360 *,struct A68t259 *,void *));
typedef struct A68t420  A68_420 ;    /* PROC(MODE281,REF MODE357,REF MODE360) MODE259 */

A_PROCEDURE(A68_VOID ,A68t421,(struct A68t259 ,struct A68t360 *,struct A68t259 *),(struct A68t259 ,struct A68t360 *,struct A68t259 *,void *));
typedef struct A68t421  A68_421 ;    /* PROC(MODE259,REF MODE360) MODE259 */

A_PROCEDURE(A68_BOOL ,A68t422,(struct A68t259 ,struct A68t259 ,struct A68t360 *,struct A68t360 *,A68_BOOL ),(struct A68t259 ,struct A68t259 ,struct A68t360 *,struct A68t360 *,A68_BOOL ,void *));
typedef struct A68t422  A68_422 ;    /* PROC(MODE259,MODE259,REF MODE360,REF MODE360,BOOL) BOOL */

A_PROCEDURE(A68_INT ,A68t423,(struct A68t290 *,struct A68t360 *),(struct A68t290 *,struct A68t360 *,void *));
typedef struct A68t423  A68_423 ;    /* PROC(REF MODE290,REF MODE360) INT */

A_PROCEDURE(A68_VOID ,A68t424,(struct A68t259 ,struct A68t360 ,struct A68t370 *,struct A68t115 *),(struct A68t259 ,struct A68t360 ,struct A68t370 *,struct A68t115 *,void *));
typedef struct A68t424  A68_424 ;    /* PROC(MODE259,MODE360,REF MODE370) MODE115 */

A_PROCEDURE(A68_VOID ,A68t425,(struct A68t281 ,struct A68t360 ,struct A68t370 *,struct A68t198 *),(struct A68t281 ,struct A68t360 ,struct A68t370 *,struct A68t198 *,void *));
typedef struct A68t425  A68_425 ;    /* PROC(MODE281,MODE360,REF MODE370) MODE198 */

A_PROCEDURE(A68_VOID ,A68t426,(struct A68t113 ),(struct A68t113 ,void *));
typedef struct A68t426  A68_426 ;    /* PROC(MODE113) VOID */

A_PROCEDURE(A68_VOID ,A68t427,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t427  A68_427 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,55,A68t428);
typedef struct A68t428  A68_428 ;    /* STRUCT 55 CHAR */
A_VECTOR(struct A68t128 ,A68t429);
typedef struct A68t429  A68_429 ;    /* VECTOR [] MODE128 */

A_PROCEDURE(A68_VOID ,A68t430,(struct A68t281 ,struct A68t429 ,struct A68t32 ,A68_INT ,A68_INT ,struct A68t360 ,struct A68t370 *),(struct A68t281 ,struct A68t429 ,struct A68t32 ,A68_INT ,A68_INT ,struct A68t360 ,struct A68t370 *,void *));
typedef struct A68t430  A68_430 ;    /* PROC(MODE281,MODE429,MODE32,INT,INT,MODE360,REF MODE370) VOID */
struct A68t431{
A68_BOOL  Next;
A_PAD_BOOL(PAD_139)
struct A68t165  Lab;
};
typedef struct A68t431  A68_431 ;    /* STRUCT(BOOL,MODE165)  */
struct A68t432{
struct A68t431  Head;
struct A68t432 * Tail;
};
typedef struct A68t432  A68_432 ;    /* STRUCT(MODE431,REF MODE432)  */

A_PROCEDURE(A68_VOID ,A68t433,(struct A68t431 *),(struct A68t431 *,void *));
typedef struct A68t433  A68_433 ;    /* PROC MODE431 */

A_PROCEDURE(A68_VOID ,A68t434,(struct A68t431 ,struct A68t431 *),(struct A68t431 ,struct A68t431 *,void *));
typedef struct A68t434  A68_434 ;    /* PROC(MODE431) MODE431 */

A_PROCEDURE(A68_BOOL ,A68t435,(struct A68t431 ),(struct A68t431 ,void *));
typedef struct A68t435  A68_435 ;    /* PROC(MODE431) BOOL */

A_PROCEDURE(A68_BOOL ,A68t436,(struct A68t431 ,struct A68t431 ),(struct A68t431 ,struct A68t431 ,void *));
typedef struct A68t436  A68_436 ;    /* PROC(MODE431,MODE431) BOOL */
struct A68t437{
A68_INT  Input;
A_PAD_INT(PAD_140)
A68_INT  Offset;
A_PAD_INT(PAD_141)
A68_INT  Type;
A_PAD_INT(PAD_142)
};
typedef struct A68t437  A68_437 ;    /* STRUCT(INT,INT,INT)  */
struct A68t438{
struct A68t437  Element;
struct A68t438 * Rest;
};
typedef struct A68t438  A68_438 ;    /* STRUCT(MODE437,REF MODE438)  */

A_PROCEDURE(struct A68t438 *,A68t439,(A68_INT ,struct A68t438 *),(A68_INT ,struct A68t438 *,void *));
typedef struct A68t439  A68_439 ;    /* PROC(INT,REF MODE438) REF MODE438 */

A_PROCEDURE(struct A68t438 *,A68t440,(struct A68t281 ,struct A68t429 ,struct A68t32 ),(struct A68t281 ,struct A68t429 ,struct A68t32 ,void *));
typedef struct A68t440  A68_440 ;    /* PROC(MODE281,MODE429,MODE32) REF MODE438 */

A_PROCEDURE(struct A68t438 *,A68t441,(A68_INT ,A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t441  A68_441 ;    /* PROC(INT,INT,INT,INT) REF MODE438 */

A_PROCEDURE(A68_INT ,A68t442,(struct A68t281 ),(struct A68t281 ,void *));
typedef struct A68t442  A68_442 ;    /* PROC(MODE281) INT */

A_PROCEDURE(A68_VOID ,A68t443,(struct A68t281 ,struct A68t360 ,struct A68t370 *,struct A68t281 *),(struct A68t281 ,struct A68t360 ,struct A68t370 *,struct A68t281 *,void *));
typedef struct A68t443  A68_443 ;    /* PROC(MODE281,MODE360,REF MODE370) MODE281 */

A_PROCEDURE(A68_BOOL ,A68t444,(struct A68t281 ),(struct A68t281 ,void *));
typedef struct A68t444  A68_444 ;    /* PROC(MODE281) BOOL */

A_PROCEDURE(A68_VOID ,A68t445,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t431 ,struct A68t431 ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t431 ,struct A68t431 ,void *));
typedef struct A68t445  A68_445 ;    /* PROC(INT,INT,INT,INT,MODE431,MODE431) VOID */

A_PROCEDURE(A68_VOID ,A68t446,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t431 ,struct A68t431 ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t431 ,struct A68t431 ,void *));
typedef struct A68t446  A68_446 ;    /* PROC(INT,INT,INT,INT,INT,MODE431,MODE431) VOID */

A_PROCEDURE(A68_VOID ,A68t447,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_VC ,struct A68t431 ,struct A68t431 ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_VC ,struct A68t431 ,struct A68t431 ,void *));
typedef struct A68t447  A68_447 ;    /* PROC(INT,INT,INT,INT,MODE26,MODE431,MODE431) VOID */

A_PROCEDURE(A68_VOID ,A68t448,(struct A68t431 ,A68_BOOL ,struct A68t431 *),(struct A68t431 ,A68_BOOL ,struct A68t431 *,void *));
typedef struct A68t448  A68_448 ;    /* PROC(MODE431,BOOL) MODE431 */

A_PROCEDURE(A68_VOID ,A68t449,(struct A68t438 *,struct A68t281 ,struct A68t431 ,struct A68t431 ,struct A68t431 ,struct A68t360 ,struct A68t370 *),(struct A68t438 *,struct A68t281 ,struct A68t431 ,struct A68t431 ,struct A68t431 ,struct A68t360 ,struct A68t370 *,void *));
typedef struct A68t449  A68_449 ;    /* PROC(REF MODE438,MODE281,MODE431,MODE431,MODE431,MODE360,REF MODE370) VOID */

A_PROCEDURE(A68_VOID ,A68t450,(struct A68t438 *,struct A68t281 ,struct A68t431 ,struct A68t431 ,struct A68t431 ,A68_BOOL ,struct A68t431 *),(struct A68t438 *,struct A68t281 ,struct A68t431 ,struct A68t431 ,struct A68t431 ,A68_BOOL ,struct A68t431 *,void *));
typedef struct A68t450  A68_450 ;    /* PROC(REF MODE438,MODE281,MODE431,MODE431,MODE431,BOOL) MODE431 */

A_PROCEDURE(A68_VOID ,A68t451,(struct A68t437 *,A68_INT ,struct A68t281 ,struct A68t431 ,struct A68t431 ,struct A68t431 ,A68_BOOL ,struct A68t431 *),(struct A68t437 *,A68_INT ,struct A68t281 ,struct A68t431 ,struct A68t431 ,struct A68t431 ,A68_BOOL ,struct A68t431 *,void *));
typedef struct A68t451  A68_451 ;    /* PROC(REF MODE437,INT,MODE281,MODE431,MODE431,MODE431,BOOL) MODE431 */
struct A68t452 { A68_INT mode; union {
struct A68t282 * mode1;
struct A68t308 * mode2;
} data; };
typedef struct A68t452  A68_452 ;    /* UNION(REF MODE282,REF MODE308)  */

A_PROCEDURE(A68_VOID ,A68t453,(struct A68t438 *,struct A68t285 *,struct A68t432 ,struct A68t431 ,struct A68t431 ,A68_BOOL ,struct A68t431 *),(struct A68t438 *,struct A68t285 *,struct A68t432 ,struct A68t431 ,struct A68t431 ,A68_BOOL ,struct A68t431 *,void *));
typedef struct A68t453  A68_453 ;    /* PROC(REF MODE438,REF MODE285,MODE432,MODE431,MODE431,BOOL) MODE431 */

A_PROCEDURE(struct A68t432 *,A68t454,(struct A68t285 *,struct A68t432 *),(struct A68t285 *,struct A68t432 *,void *));
typedef struct A68t454  A68_454 ;    /* PROC(REF MODE285,REF MODE432) REF MODE432 */

A_PROCEDURE(A68_VOID ,A68t455,(struct A68t285 *,struct A68t432 *,struct A68t432 *),(struct A68t285 *,struct A68t432 *,struct A68t432 *,void *));
typedef struct A68t455  A68_455 ;    /* PROC(REF MODE285,REF MODE432,REF MODE432) VOID */

A_PROCEDURE(struct A68t432 *,A68t456,(struct A68t438 *,struct A68t285 *,struct A68t431 ,struct A68t431 ,A68_BOOL ),(struct A68t438 *,struct A68t285 *,struct A68t431 ,struct A68t431 ,A68_BOOL ,void *));
typedef struct A68t456  A68_456 ;    /* PROC(REF MODE438,REF MODE285,MODE431,MODE431,BOOL) REF MODE432 */

A_PROCEDURE(struct A68t432 *,A68t457,(struct A68t285 *),(struct A68t285 *,void *));
typedef struct A68t457  A68_457 ;    /* PROC(REF MODE285) REF MODE432 */

A_PROCEDURE(A68_VOID ,A68t458,(struct A68t285 *,struct A68t432 *),(struct A68t285 *,struct A68t432 *,void *));
typedef struct A68t458  A68_458 ;    /* PROC(REF MODE285,REF MODE432) VOID */

A_PROCEDURE(struct A68t432 *,A68t459,(struct A68t285 *,struct A68t431 ),(struct A68t285 *,struct A68t431 ,void *));
typedef struct A68t459  A68_459 ;    /* PROC(REF MODE285,MODE431) REF MODE432 */

A_PROCEDURE(A68_VOID ,A68t460,(struct A68t438 *,struct A68t285 *,struct A68t431 ,struct A68t431 ,struct A68t431 ,A68_BOOL ,struct A68t431 *),(struct A68t438 *,struct A68t285 *,struct A68t431 ,struct A68t431 ,struct A68t431 ,A68_BOOL ,struct A68t431 *,void *));
typedef struct A68t460  A68_460 ;    /* PROC(REF MODE438,REF MODE285,MODE431,MODE431,MODE431,BOOL) MODE431 */

A_PROCEDURE(A68_VOID ,A68t461,(struct A68t438 *,struct A68t296 *,struct A68t432 ,struct A68t431 ,struct A68t431 ,A68_BOOL ,struct A68t431 *),(struct A68t438 *,struct A68t296 *,struct A68t432 ,struct A68t431 ,struct A68t431 ,A68_BOOL ,struct A68t431 *,void *));
typedef struct A68t461  A68_461 ;    /* PROC(REF MODE438,REF MODE296,MODE432,MODE431,MODE431,BOOL) MODE431 */

A_PROCEDURE(struct A68t432 *,A68t462,(struct A68t438 *,struct A68t296 *,struct A68t432 *),(struct A68t438 *,struct A68t296 *,struct A68t432 *,void *));
typedef struct A68t462  A68_462 ;    /* PROC(REF MODE438,REF MODE296,REF MODE432) REF MODE432 */

A_PROCEDURE(A68_VOID ,A68t463,(struct A68t438 *,struct A68t296 *,struct A68t432 *,struct A68t432 *),(struct A68t438 *,struct A68t296 *,struct A68t432 *,struct A68t432 *,void *));
typedef struct A68t463  A68_463 ;    /* PROC(REF MODE438,REF MODE296,REF MODE432,REF MODE432) VOID */

A_PROCEDURE(struct A68t432 *,A68t464,(A68_BOOL ,struct A68t438 *,struct A68t296 *,struct A68t431 ,struct A68t431 ,A68_BOOL ),(A68_BOOL ,struct A68t438 *,struct A68t296 *,struct A68t431 ,struct A68t431 ,A68_BOOL ,void *));
typedef struct A68t464  A68_464 ;    /* PROC(BOOL,REF MODE438,REF MODE296,MODE431,MODE431,BOOL) REF MODE432 */

A_PROCEDURE(struct A68t432 *,A68t465,(A68_BOOL ,struct A68t438 *,struct A68t296 *),(A68_BOOL ,struct A68t438 *,struct A68t296 *,void *));
typedef struct A68t465  A68_465 ;    /* PROC(BOOL,REF MODE438,REF MODE296) REF MODE432 */

A_PROCEDURE(A68_VOID ,A68t466,(A68_BOOL ,struct A68t438 *,struct A68t296 *,struct A68t432 *),(A68_BOOL ,struct A68t438 *,struct A68t296 *,struct A68t432 *,void *));
typedef struct A68t466  A68_466 ;    /* PROC(BOOL,REF MODE438,REF MODE296,REF MODE432) VOID */

A_PROCEDURE(struct A68t432 *,A68t467,(struct A68t296 *,struct A68t431 ),(struct A68t296 *,struct A68t431 ,void *));
typedef struct A68t467  A68_467 ;    /* PROC(REF MODE296,MODE431) REF MODE432 */

A_PROCEDURE(A68_VOID ,A68t468,(struct A68t438 *,struct A68t296 *,struct A68t431 ,struct A68t431 ,struct A68t431 ,A68_BOOL ,struct A68t431 *),(struct A68t438 *,struct A68t296 *,struct A68t431 ,struct A68t431 ,struct A68t431 ,A68_BOOL ,struct A68t431 *,void *));
typedef struct A68t468  A68_468 ;    /* PROC(REF MODE438,REF MODE296,MODE431,MODE431,MODE431,BOOL) MODE431 */

A_PROCEDURE(A68_VOID ,A68t469,(struct A68t438 *,struct A68t341 *,struct A68t429 ,struct A68t32 ,A68_INT ,A68_INT ,struct A68t360 ,struct A68t370 *),(struct A68t438 *,struct A68t341 *,struct A68t429 ,struct A68t32 ,A68_INT ,A68_INT ,struct A68t360 ,struct A68t370 *,void *));
typedef struct A68t469  A68_469 ;    /* PROC(REF MODE438,REF MODE341,MODE429,MODE32,INT,INT,MODE360,REF MODE370) VOID */
A_ISTRUCT(A68_CHAR ,12,A68t470);
typedef struct A68t470  A68_470 ;    /* STRUCT 12 CHAR */

A_PROCEDURE(A68_VOID ,A68t471,(struct A68t300 ,A68_VC ,struct A68t357 ,struct A68t429 ,struct A68t32 ,A68_INT ,struct A68t360 ,struct A68t370 *,struct A68t36 ,struct A68t130 *),(struct A68t300 ,A68_VC ,struct A68t357 ,struct A68t429 ,struct A68t32 ,A68_INT ,struct A68t360 ,struct A68t370 *,struct A68t36 ,struct A68t130 *,void *));
typedef struct A68t471  A68_471 ;    /* PROC(MODE300,REF MODE26,MODE357,MODE429,MODE32,INT,MODE360,REF MODE370,MODE36) MODE130 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from keconv --- */
extern A68_285 * HAAATRN_nilualts;
extern A68_296 * IAAATRN_nilustr;
extern A68_341 * JAAATRN_niluchoices;
extern A68_VOID  RSCAOST_makeid(A68_VC ,A68_VC *);
extern A68_INT  XOMATRN_int(struct A68t243 );
extern A68_VOID  SUBASIM_converttype(struct A68t259 ,struct A68t360 ,struct A68t370 *,A68_115 *);
extern A68_VOID  OXBASIM_convertconst(struct A68t281 ,struct A68t360 ,struct A68t370 *,A68_198 *);
/* --- End of imports from keconv --- */


/* --- Imports from kesignals --- */
extern A68_INT  NZNASIM_machinewidth(struct A68t115 );
extern A68_INT  DCOASIM_rawsignalwidth(struct A68t115 );
extern A68_123 * ABOASIM_flattentype(struct A68t115 );
extern A68_VC * CLOASIM_machine(struct A68t198 ,struct A68t115 );
/* --- End of imports from kesignals --- */


/* --- Imports from kebasics --- */
extern A68_123 * WSAASIM_nilsst;
/* --- End of imports from kebasics --- */


/* --- Imports from keamstandard --- */
extern A68_VOID  DOPASIM_translatestartfunction(A68_VC );
extern A68_VOID  ZOPASIM_translateendfunction(A68_INT ,A68_INT );
#define IPPASIM_resetflag 2
extern A68_VOID  PSPASIM_translatecopyinputs(struct A68t32 ,A68_INT ,struct A68t115 ,A68_INT ,A68_INT ,A68_INT );
extern A68_VOID  CUPASIM_translateoutputconstant(struct A68t198 ,A68_INT ,A68_INT ,A68_INT ,A68_INT );
/* --- End of imports from keamstandard --- */


/* --- Imports from keambasics --- */
extern A68_167  ONFASIM_indirect;
extern A68_VOID  YLFASIM_label(A68_VC ,A68_165 *);
extern A68_VOID  YFNASIM_newlabel(A68_165 *);
extern A68_VOID  CGNASIM_marklabelsequence(void);
extern A68_VOID  FGNASIM_repeatlabelsequence(void);
extern A68_VOID  MGNASIM_continuelabelsequence(void);
#define CENASIM_bitsperbyte 8
extern A68_INT  DENASIM_ws;
extern A68_INT  GENASIM_sizeunit;
extern A68_173  FENASIM_up;
extern A68_VOID  SSNASIM_amadd(void);
extern A68_VOID  QTNASIM_amtest(void);
extern A68_VOID  STNASIM_ameq(void);
extern A68_VOID  UTNASIM_amneq(void);
extern A68_VOID  WTNASIM_amgt(void);
extern A68_VOID  YTNASIM_amge(void);
extern A68_VOID  CUNASIM_amle(void);
extern A68_VOID  MUNASIM_ampushstring(A68_INT ,A68_VC );
extern A68_VOID  QUNASIM_ampushint(A68_INT );
extern A68_VOID  TUNASIM_amdrop(A68_INT );
extern A68_VOID  WUNASIM_amlocal(A68_INT );
extern A68_VOID  AVNASIM_amglobal(A68_INT ,struct A68t167 );
extern A68_VOID  LVNASIM_ambstring(A68_INT ,A68_INT ,struct A68t167 );
extern A68_VOID  EWNASIM_amjump(struct A68t165 );
extern A68_VOID  IWNASIM_amjumpno(A68_INT ,struct A68t165 );
extern A68_VOID  NWNASIM_amlabel(A68_INT ,struct A68t165 );
extern A68_VOID  BXNASIM_amcall(A68_INT ,struct A68t165 );
/* --- End of imports from keambasics --- */


/* --- Imports from kesymbols --- */
extern A68_INT  ZFCASIM_addtype(struct A68t115 ,struct A68t116 );
extern A68_VOID  VGCASIM_lookuptype(A68_INT ,A68_115 *);
extern A68_INT  YGCASIM_lookuptypesize(A68_INT );
#define IHCASIM_combinatorial 0X1U
/* --- End of imports from kesymbols --- */


/* --- Imports from basics --- */
/* --- End of imports from basics --- */


/* --- Imports from putstrings --- */
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void KUBASIM(void);   /* keconv */
extern void NYNASIM(void);   /* kesignals */
extern void JSAASIM(void);   /* kebasics */
extern void HYOASIM(void);   /* keamstandard */
extern void XDNASIM(void);   /* keambasics */
extern void TCCASIM(void);   /* kesymbols */
extern void JSCAOST(void);   /* basics */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_428   KSUASIM = {"$Id: keamcase.a68,v 34.2 1995/03/29 13:04:34 ella Exp $"}; 
A_GISVEC(A68_VC ,LSUASIM,KSUASIM,55)
#define PUUASIM_nillablist (A68_432 *)A68_NIL
#define KVUASIM_nilselector (A68_438 *)A68_NIL
static A68_470   ASVASIM = {"Genericquery"}; 
A_GISVEC(A68_VC ,BSVASIM,ASVASIM,12)
typedef struct   /* env of non-global proc */
{
A68_360  Environ;
A68_370 * Closure;
} CEVASIM_elementtest;
typedef struct   /* env of non-global proc */
{
A68_450 * SDVASIM_match;
} CGVASIM_fchain;
typedef struct   /* env of non-global proc */
{
A68_450 * SDVASIM_match;
} QHVASIM_dqchain;
typedef struct   /* env of non-global proc */
{
A68_456  OHVASIM_dqchain;
A68_453  AGVASIM_fchain;
} PJVASIM_disjoin;
typedef struct   /* env of non-global proc */
{
A68_450 * SDVASIM_match;
} MKVASIM_tchain;
typedef struct   /* env of non-global proc */
{
A68_450 * SDVASIM_match;
} TMVASIM_cqchain;
typedef struct   /* env of non-global proc */
{
A68_464  RMVASIM_cqchain;
A68_461  KKVASIM_tchain;
} QPVASIM_conjoin;
typedef struct   /* env of non-global proc */
{
A68_460  NJVASIM_disjoin;
A68_468  OPVASIM_conjoin;
A68_451  AEVASIM_elementtest;
} QQVASIM_anonymous;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Do;
A_PAD_BOOL(PAD_143)
A68_450 * SDVASIM_match;
A68_438 * Selector;
A68_431  F;
A68_431  T;
A68_454  GGVASIM_labsonly;
} IGVASIM_labsonly;
typedef struct   /* env of non-global proc */
{
A68_450 * SDVASIM_match;
A68_438 * Selector;
A68_431  F;
A68_431  T;
A68_455  XGVASIM_doit;
} ZGVASIM_doit;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Do;
A_PAD_BOOL(PAD_144)
A68_450 * SDVASIM_match;
A68_438 * Selector;
A68_431  Q;
A68_431  T;
A68_457  THVASIM_labsonly;
} VHVASIM_labsonly;
typedef struct   /* env of non-global proc */
{
A68_450 * SDVASIM_match;
A68_438 * Selector;
A68_431  Q;
A68_431  T;
A68_458  MIVASIM_doit;
} OIVASIM_doit;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Do;
A_PAD_BOOL(PAD_145)
A68_431  T;
A68_450 * SDVASIM_match;
A68_431  F;
A68_462  RKVASIM_labsonly;
} TKVASIM_labsonly;
typedef struct   /* env of non-global proc */
{
A68_431  T;
A68_450 * SDVASIM_match;
A68_431  F;
A68_463  TLVASIM_doit;
} VLVASIM_doit;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Do;
A_PAD_BOOL(PAD_146)
A68_431  Q;
A68_450 * SDVASIM_match;
A68_431  F;
A68_465  YMVASIM_labsonly;
} ANVASIM_labsonly;
typedef struct   /* env of non-global proc */
{
A68_431  Q;
A68_450 * SDVASIM_match;
A68_431  F;
A68_466  GOVASIM_doit;
} IOVASIM_doit;

A_STATIC A68_VOID  TSUASIM_outputunit(A68_281  Result, A68_429  Inputwires, A68_32  Inputtypes, A68_INT  Outputoffset, A68_INT  Outputtype, A68_360  Environ, A68_370 * Closure);

A_STATIC A68_VOID  QUUASIM_newolab(A68_431  *ReturnedValue);

A_STATIC A68_VOID  VUUASIM_next(A68_431  Label, A68_431  *ReturnedValue);

A_STATIC A68_VOID  ZUUASIM_notnext(A68_431  Label, A68_431  *ReturnedValue);

A_STATIC A68_BOOL  DVUASIM_isnext(A68_431  Label);

A_STATIC A68_BOOL  HVUASIM_(A68_431  A, A68_431  B);

A_STATIC A68_438 * NVUASIM_drop(A68_INT  N, A68_438 * Selector);

A_STATIC A68_438 * VVUASIM_makeselector(A68_281  Input, A68_429  Inputwires, A68_32  Inputtypes);

A_STATIC A68_438 * SWUASIM_makeassocselector(A68_INT  Type, A68_INT  Altno, A68_INT  Input, A68_INT  Start);

A_STATIC A68_INT  MXUASIM_width(A68_281  Pattern);

A_STATIC A68_VOID  XXUASIM_simplifypattern(A68_281  Pattern, A68_360  Environ, A68_370 * Closure, A68_281  *ReturnedValue);

A_STATIC A68_BOOL  NAVASIM_sometaut(A68_281  Pattern);

A_STATIC A68_VOID  BBVASIM_locate(A68_INT  Input, A68_INT  D);

A_STATIC A68_VOID  EBVASIM_fetchint(A68_INT  Offset, A68_INT  Size);

A_STATIC A68_VOID  HBVASIM_fetchstring(A68_INT  Offset, A68_INT  Size);

A_STATIC A68_VOID  OBVASIM_simpleenumtest(A68_INT  Input, A68_INT  Offset, A68_INT  D, A68_INT  Compare, A68_431  Q, A68_431  T);

A_STATIC A68_VOID  VBVASIM_enumtest(A68_INT  Input, A68_INT  Offset, A68_INT  D, A68_INT  Compare, A68_431  Q, A68_431  F);

A_STATIC A68_VOID  DCVASIM_enumrangetest(A68_INT  Input, A68_INT  Offset, A68_INT  D, A68_INT  Lwb, A68_INT  Upb, A68_431  Q, A68_431  T);

A_STATIC A68_VOID  MCVASIM_inttest(A68_INT  Input, A68_INT  Offset, A68_INT  D, A68_INT  Compare, A68_431  Q, A68_431  F);

A_STATIC A68_VOID  UCVASIM_rangetest(A68_INT  Input, A68_INT  Offset, A68_INT  D, A68_INT  Lwb, A68_INT  Upb, A68_431  Q, A68_431  F);

A_STATIC A68_VOID  CDVASIM_stringtest(A68_INT  Input, A68_INT  Offset, A68_INT  Size, A68_INT  D, A68_VC  Compare, A68_431  Q, A68_431  F);

A_STATIC A68_VOID  HDVASIM_nulltest(A68_431  T, A68_BOOL  Do, A68_431  *ReturnedValue);

A_STATIC A68_VOID  RDVASIM_casetest(A68_438 * Selector, A68_281  Pattern, A68_431  Q, A68_431  F, A68_431  T, A68_360  Environ, A68_370 * Closure);

A_STATIC A68_VOID  BEVASIM_elementtest(A68_437 * Element, A68_INT  D, A68_281  Pattern, A68_431  Q, A68_431  F, A68_431  T, A68_BOOL  Do, A68_431  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BGVASIM_fchain(A68_438 * Selector, A68_285 * Pattern, A68_432  Qq, A68_431  F, A68_431  T, A68_BOOL  Do, A68_431  *ReturnedValue, void *NonLocals);

A_STATIC A68_432 * HGVASIM_labsonly(A68_285 * Pat, A68_432 * Qs, void *NonLocals);

A_STATIC A68_VOID  YGVASIM_doit(A68_285 * Pat, A68_432 * Qs, A68_432 * Fs, void *NonLocals);

A_STATIC A68_432 * PHVASIM_dqchain(A68_438 * Selector, A68_285 * Pattern, A68_431  Q, A68_431  T, A68_BOOL  Do, void *NonLocals);

A_STATIC A68_432 * UHVASIM_labsonly(A68_285 * Pat, void *NonLocals);

A_STATIC A68_VOID  NIVASIM_doit(A68_285 * Pat, A68_432 * Qs, void *NonLocals);

A_STATIC A68_432 * YIVASIM_ddummychain(A68_285 * Pattern, A68_431  Label);

A_STATIC A68_VOID  OJVASIM_disjoin(A68_438 * Selector, A68_285 * Pattern, A68_431  Q, A68_431  F, A68_431  T, A68_BOOL  Do, A68_431  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  LKVASIM_tchain(A68_438 * Selector, A68_296 * Pattern, A68_432  Qq, A68_431  F, A68_431  T, A68_BOOL  Do, A68_431  *ReturnedValue, void *NonLocals);

A_STATIC A68_432 * SKVASIM_labsonly(A68_438 * Sel, A68_296 * Pat, A68_432 * Qs, void *NonLocals);

A_STATIC A68_VOID  ULVASIM_doit(A68_438 * Sel, A68_296 * Pat, A68_432 * Qs, A68_432 * Ts, void *NonLocals);

A_STATIC A68_432 * SMVASIM_cqchain(A68_BOOL  Omit, A68_438 * Selector, A68_296 * Pattern, A68_431  Q, A68_431  F, A68_BOOL  Do, void *NonLocals);

A_STATIC A68_432 * ZMVASIM_labsonly(A68_BOOL  Omit, A68_438 * Sel, A68_296 * Pat, void *NonLocals);

A_STATIC A68_VOID  HOVASIM_doit(A68_BOOL  Omit, A68_438 * Sel, A68_296 * Pat, A68_432 * Qs, void *NonLocals);

A_STATIC A68_432 * ZOVASIM_cdummychain(A68_296 * Pattern, A68_431  Label);

A_STATIC A68_VOID  PPVASIM_conjoin(A68_438 * Selector, A68_296 * Pattern, A68_431  Q, A68_431  F, A68_431  T, A68_BOOL  Do, A68_431  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PQVASIM_anonymous(A68_438 * Selector, A68_281  Pattern, A68_431  Q, A68_431  F, A68_431  T, A68_BOOL  Do, A68_431  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JRVASIM_translatecasebody(A68_438 * Selector, A68_341 * Choices, A68_429  Inputwires, A68_32  Inputtypes, A68_INT  Outputoffset, A68_INT  Outputtype, A68_360  Environ, A68_370 * Closure);

A68_VOID  MSVASIM_translatecase(A68_300  Body, A68_VC  Name, A68_357  Declaration, A68_429  Inputwires, A68_32  Inputtypes, A68_INT  Outputtype, A68_360  Environ, A68_370 * Closure, A68_36  Flt, A68_130  *ReturnedValue);

A_STATIC A68_432 * HGVASIM_labsonly(A68_285 * Pat, A68_432 * Qs, void *NonLocals)
#define NL(x) (((IGVASIM_labsonly *)NonLocals)->x)
{ 
A68_432  JGVASIM;  /* collateral clause result */
A68_431  KGVASIM;  /* avoid structure result */
A68_432 * LGVASIM;  /* clause result */
A68_432 * MGVASIM;  /* YIELD */
A68_432 * NGVASIM_tail;
A68_432  OGVASIM;  /* collateral clause result */
A68_431  PGVASIM;  /* avoid structure result */
A68_431  QGVASIM;  /* avoid structure result */
A68_431  RGVASIM;  /* avoid structure result */
A68_431  SGVASIM;  /* avoid structure result */
A68_432 * TGVASIM;  /* YIELD */
A_PROC_ENTRY(labsonly);
 /* line 971: */
 /* line 972: */
if ( ((*(&(Pat->Rest)))==HAAATRN_nilualts) )
{ 
if ( NL(Do) )
{ 
CGNASIM_marklabelsequence();
} 
 /* line 973: */
 /* line 974: */
 /* line 975: */
A_CALLPROC((*NL(SDVASIM_match)),(NL(Selector), (*(&(Pat->Alt))), (*(&(Qs->Head))), NL(F), NL(T), A68_FALSE, &KGVASIM),(NL(Selector), (*(&(Pat->Alt))), (*(&(Qs->Head))), NL(F), NL(T), A68_FALSE, &KGVASIM,((*NL(SDVASIM_match))).nonlocals));
JGVASIM.Head = KGVASIM;
 /* line 976: */
JGVASIM.Tail = PUUASIM_nillablist;
 /* line 977: */
MGVASIM = A_HEAP(A68_432 ) ;
(*MGVASIM) = JGVASIM ;
LGVASIM = MGVASIM;
} 
else
{ 
NGVASIM_tail = A_CALLPROC(NL(GGVASIM_labsonly),((*(&(Pat->Rest))), (*(&(Qs->Tail)))),((*(&(Pat->Rest))), (*(&(Qs->Tail))),(NL(GGVASIM_labsonly)).nonlocals));
 /* line 978: */
if ( NL(Do) )
{ 
CGNASIM_marklabelsequence();
} 
 /* line 979: */
 /* line 980: */
 /* line 981: */
 /* line 982: */
ZUUASIM_notnext( NL(T), &PGVASIM );
VUUASIM_next( (*(&(NGVASIM_tail->Head))), &QGVASIM );
ZUUASIM_notnext( (*(&(Qs->Head))), &RGVASIM );
A_CALLPROC((*NL(SDVASIM_match)),(NL(Selector), (*(&(Pat->Alt))), RGVASIM, QGVASIM, PGVASIM, A68_FALSE, &SGVASIM),(NL(Selector), (*(&(Pat->Alt))), RGVASIM, QGVASIM, PGVASIM, A68_FALSE, &SGVASIM,((*NL(SDVASIM_match))).nonlocals));
OGVASIM.Head = SGVASIM;
 /* line 983: */
OGVASIM.Tail = NGVASIM_tail;
TGVASIM = A_HEAP(A68_432 ) ;
(*TGVASIM) = OGVASIM ;
LGVASIM = TGVASIM;
} 
A_PROC_EXIT(labsonly);
return( LGVASIM );
} 
#undef NL

A_STATIC A68_VOID  YGVASIM_doit(A68_285 * Pat, A68_432 * Qs, A68_432 * Fs, void *NonLocals)
#define NL(x) (((ZGVASIM_doit *)NonLocals)->x)
{ 
A68_431  AHVASIM;  /* avoid structure result */
A68_431  BHVASIM;  /* avoid structure result */
A68_431  CHVASIM;  /* avoid structure result */
A68_431  DHVASIM;  /* avoid structure result */
A68_431  EHVASIM;  /* avoid structure result */
A_PROC_ENTRY(doit);
 /* line 986: */
 /* line 987: */
{ 
FGNASIM_repeatlabelsequence();
 /* line 988: */
 /* line 989: */
if ( ((*(&(Pat->Rest)))==HAAATRN_nilualts) )
{ 
A_CALLPROC((*NL(SDVASIM_match)),(NL(Selector), (*(&(Pat->Alt))), (*(&(Qs->Head))), NL(F), NL(T), A68_TRUE, &AHVASIM),(NL(Selector), (*(&(Pat->Alt))), (*(&(Qs->Head))), NL(F), NL(T), A68_TRUE, &AHVASIM,((*NL(SDVASIM_match))).nonlocals));
AHVASIM;
 /* line 990: */
 /* line 991: */
 /* line 992: */
MGNASIM_continuelabelsequence();
} 
else
{ 
 /* line 993: */
ZUUASIM_notnext( NL(T), &BHVASIM );
VUUASIM_next( (*(&(Fs->Head))), &CHVASIM );
ZUUASIM_notnext( (*(&(Qs->Head))), &DHVASIM );
A_CALLPROC((*NL(SDVASIM_match)),(NL(Selector), (*(&(Pat->Alt))), DHVASIM, CHVASIM, BHVASIM, A68_TRUE, &EHVASIM),(NL(Selector), (*(&(Pat->Alt))), DHVASIM, CHVASIM, BHVASIM, A68_TRUE, &EHVASIM,((*NL(SDVASIM_match))).nonlocals));
EHVASIM;
 /* line 994: */
MGNASIM_continuelabelsequence();
 /* line 995: */
 /* line 996: */
 /* line 997: */
A_CALLPROC(NL(XGVASIM_doit),((*(&(Pat->Rest))), (*(&(Qs->Tail))), (*(&(Fs->Tail)))),((*(&(Pat->Rest))), (*(&(Qs->Tail))), (*(&(Fs->Tail))),(NL(XGVASIM_doit)).nonlocals));
} 
} 
A_PROC_EXIT(doit);
return;
} 
#undef NL

A_STATIC A68_432 * UHVASIM_labsonly(A68_285 * Pat, void *NonLocals)
#define NL(x) (((VHVASIM_labsonly *)NonLocals)->x)
{ 
A68_432  WHVASIM;  /* collateral clause result */
A68_431  XHVASIM;  /* avoid structure result */
A68_432  YHVASIM;  /* collateral clause result */
A68_431  ZHVASIM;  /* avoid structure result */
A68_432 * AIVASIM;  /* YIELD */
A68_432 * BIVASIM;  /* clause result */
A68_432 * CIVASIM;  /* YIELD */
A68_432 * DIVASIM_tail;
A68_432  EIVASIM;  /* collateral clause result */
A68_431  FIVASIM;  /* avoid structure result */
A68_431  GIVASIM;  /* avoid structure result */
A68_431  HIVASIM;  /* avoid structure result */
A68_431  IIVASIM;  /* avoid structure result */
A68_432 * JIVASIM;  /* YIELD */
A_PROC_ENTRY(labsonly);
 /* line 1010: */
 /* line 1011: */
if ( ((*(&(Pat->Rest)))==HAAATRN_nilualts) )
{ 
if ( NL(Do) )
{ 
CGNASIM_marklabelsequence();
} 
 /* line 1012: */
 /* line 1013: */
 /* line 1014: */
A_CALLPROC((*NL(SDVASIM_match)),(NL(Selector), (*(&(Pat->Alt))), NL(Q), NL(Q), NL(T), A68_FALSE, &XHVASIM),(NL(Selector), (*(&(Pat->Alt))), NL(Q), NL(Q), NL(T), A68_FALSE, &XHVASIM,((*NL(SDVASIM_match))).nonlocals));
WHVASIM.Head = XHVASIM;
ZUUASIM_notnext( NL(Q), &ZHVASIM );
YHVASIM.Head = ZHVASIM;
YHVASIM.Tail = PUUASIM_nillablist;
 /* line 1015: */
AIVASIM = A_HEAP(A68_432 ) ;
(*AIVASIM) = YHVASIM ;
WHVASIM.Tail = AIVASIM;
 /* line 1016: */
CIVASIM = A_HEAP(A68_432 ) ;
(*CIVASIM) = WHVASIM ;
BIVASIM = CIVASIM;
} 
else
{ 
DIVASIM_tail = A_CALLPROC(NL(THVASIM_labsonly),((*(&(Pat->Rest)))),((*(&(Pat->Rest))),(NL(THVASIM_labsonly)).nonlocals));
 /* line 1017: */
if ( NL(Do) )
{ 
CGNASIM_marklabelsequence();
} 
 /* line 1018: */
 /* line 1019: */
 /* line 1020: */
 /* line 1021: */
ZUUASIM_notnext( NL(T), &FIVASIM );
VUUASIM_next( (*(&(DIVASIM_tail->Head))), &GIVASIM );
VUUASIM_next( (*(&(DIVASIM_tail->Head))), &HIVASIM );
A_CALLPROC((*NL(SDVASIM_match)),(NL(Selector), (*(&(Pat->Alt))), HIVASIM, GIVASIM, FIVASIM, A68_FALSE, &IIVASIM),(NL(Selector), (*(&(Pat->Alt))), HIVASIM, GIVASIM, FIVASIM, A68_FALSE, &IIVASIM,((*NL(SDVASIM_match))).nonlocals));
EIVASIM.Head = IIVASIM;
 /* line 1022: */
EIVASIM.Tail = DIVASIM_tail;
JIVASIM = A_HEAP(A68_432 ) ;
(*JIVASIM) = EIVASIM ;
BIVASIM = JIVASIM;
} 
A_PROC_EXIT(labsonly);
return( BIVASIM );
} 
#undef NL

A_STATIC A68_VOID  NIVASIM_doit(A68_285 * Pat, A68_432 * Qs, void *NonLocals)
#define NL(x) (((OIVASIM_doit *)NonLocals)->x)
{ 
A68_431  PIVASIM;  /* avoid structure result */
A68_431  QIVASIM;  /* avoid structure result */
A68_431  RIVASIM;  /* avoid structure result */
A68_431  SIVASIM;  /* avoid structure result */
A68_431  TIVASIM;  /* avoid structure result */
A_PROC_ENTRY(doit);
 /* line 1025: */
 /* line 1026: */
{ 
FGNASIM_repeatlabelsequence();
 /* line 1027: */
 /* line 1028: */
if ( ((*(&(Pat->Rest)))==HAAATRN_nilualts) )
{ 
A_CALLPROC((*NL(SDVASIM_match)),(NL(Selector), (*(&(Pat->Alt))), NL(Q), NL(Q), NL(T), A68_TRUE, &PIVASIM),(NL(Selector), (*(&(Pat->Alt))), NL(Q), NL(Q), NL(T), A68_TRUE, &PIVASIM,((*NL(SDVASIM_match))).nonlocals));
PIVASIM;
 /* line 1029: */
 /* line 1030: */
 /* line 1031: */
MGNASIM_continuelabelsequence();
} 
else
{ 
 /* line 1032: */
ZUUASIM_notnext( NL(T), &QIVASIM );
VUUASIM_next( (*(&(Qs->Head))), &RIVASIM );
VUUASIM_next( (*(&(Qs->Head))), &SIVASIM );
A_CALLPROC((*NL(SDVASIM_match)),(NL(Selector), (*(&(Pat->Alt))), SIVASIM, RIVASIM, QIVASIM, A68_TRUE, &TIVASIM),(NL(Selector), (*(&(Pat->Alt))), SIVASIM, RIVASIM, QIVASIM, A68_TRUE, &TIVASIM,((*NL(SDVASIM_match))).nonlocals));
TIVASIM;
 /* line 1033: */
MGNASIM_continuelabelsequence();
 /* line 1034: */
 /* line 1035: */
 /* line 1036: */
A_CALLPROC(NL(MIVASIM_doit),((*(&(Pat->Rest))), (*(&(Qs->Tail)))),((*(&(Pat->Rest))), (*(&(Qs->Tail))),(NL(MIVASIM_doit)).nonlocals));
} 
} 
A_PROC_EXIT(doit);
return;
} 
#undef NL
 /* line 1124: */

A_STATIC A68_432 * SKVASIM_labsonly(A68_438 * Sel, A68_296 * Pat, A68_432 * Qs, void *NonLocals)
#define NL(x) (((TKVASIM_labsonly *)NonLocals)->x)
{ 
A68_281  UKVASIM;  /* united object - for case conformity */
A68_431  VKVASIM;  /* clause result */
A68_431  WKVASIM;  /* avoid structure result */
A68_431  XKVASIM;  /* avoid structure result */
A68_431  YKVASIM_this;
A68_432  ZKVASIM;  /* collateral clause result */
A68_432 * ALVASIM;  /* clause result */
A68_432 * BLVASIM;  /* YIELD */
A68_INT  CLVASIM_skip;
A68_432 * DLVASIM_tail;
A68_281  ELVASIM;  /* united object - for case conformity */
A68_431  FLVASIM;  /* clause result */
A68_431  GLVASIM;  /* avoid structure result */
A68_431  HLVASIM;  /* avoid structure result */
A68_431  ILVASIM;  /* avoid structure result */
A68_431  JLVASIM;  /* avoid structure result */
A68_431  KLVASIM;  /* avoid structure result */
A68_431  LLVASIM;  /* avoid structure result */
A68_431  MLVASIM_this;
A68_432  NLVASIM;  /* collateral clause result */
A68_432 * OLVASIM;  /* YIELD */
A_PROC_ENTRY(labsonly);
 /* line 1125: */
 /* line 1126: */
{ 
 /* line 1127: */
if ( ((*(&(Pat->Rest)))==IAAATRN_nilustr) )
{ 
if ( NL(Do) )
{ 
CGNASIM_marklabelsequence();
} 
 /* line 1128: */
 /* line 1129: */
 /* line 1130: */
UKVASIM = (*(&(Pat->Elem))) ;
switch ( UKVASIM.mode )
{ 
case 34: /* REF STRUCT(INT)  */
 /* line 1131: */
 /* line 1132: */
HDVASIM_nulltest( NL(T), A68_FALSE, &WKVASIM );
VKVASIM = WKVASIM;
break;
default: 
 /* line 1133: */
A_CALLPROC((*NL(SDVASIM_match)),(Sel, (*(&(Pat->Elem))), (*(&(Qs->Head))), NL(F), NL(T), A68_FALSE, &XKVASIM),(Sel, (*(&(Pat->Elem))), (*(&(Qs->Head))), NL(F), NL(T), A68_FALSE, &XKVASIM,((*NL(SDVASIM_match))).nonlocals));
VKVASIM = XKVASIM;
break;
} 
YKVASIM_this = VKVASIM;
 /* line 1134: */
ZKVASIM.Head = YKVASIM_this;
 /* line 1135: */
ZKVASIM.Tail = PUUASIM_nillablist;
 /* line 1136: */
BLVASIM = A_HEAP(A68_432 ) ;
(*BLVASIM) = ZKVASIM ;
ALVASIM = BLVASIM;
} 
else
{ 
CLVASIM_skip = MXUASIM_width((*(&(Pat->Elem))));
 /* line 1137: */
 /* line 1138: */
DLVASIM_tail = A_CALLPROC(NL(RKVASIM_labsonly),(NVUASIM_drop(CLVASIM_skip, Sel), (*(&(Pat->Rest))), (*(&(Qs->Tail)))),(NVUASIM_drop(CLVASIM_skip, Sel), (*(&(Pat->Rest))), (*(&(Qs->Tail))),(NL(RKVASIM_labsonly)).nonlocals));
 /* line 1139: */
if ( NL(Do) )
{ 
CGNASIM_marklabelsequence();
} 
 /* line 1140: */
 /* line 1141: */
 /* line 1142: */
ELVASIM = (*(&(Pat->Elem))) ;
switch ( ELVASIM.mode )
{ 
case 34: /* REF STRUCT(INT)  */
 /* line 1143: */
 /* line 1144: */
VUUASIM_next( (*(&(DLVASIM_tail->Head))), &GLVASIM );
HDVASIM_nulltest( GLVASIM, A68_FALSE, &HLVASIM );
FLVASIM = HLVASIM;
break;
default: 
 /* line 1145: */
 /* line 1146: */
VUUASIM_next( (*(&(DLVASIM_tail->Head))), &ILVASIM );
ZUUASIM_notnext( NL(F), &JLVASIM );
ZUUASIM_notnext( (*(&(Qs->Head))), &KLVASIM );
A_CALLPROC((*NL(SDVASIM_match)),(Sel, (*(&(Pat->Elem))), KLVASIM, JLVASIM, ILVASIM, A68_FALSE, &LLVASIM),(Sel, (*(&(Pat->Elem))), KLVASIM, JLVASIM, ILVASIM, A68_FALSE, &LLVASIM,((*NL(SDVASIM_match))).nonlocals));
FLVASIM = LLVASIM;
break;
} 
MLVASIM_this = FLVASIM;
 /* line 1147: */
NLVASIM.Head = MLVASIM_this;
 /* line 1148: */
NLVASIM.Tail = DLVASIM_tail;
 /* line 1149: */
OLVASIM = A_HEAP(A68_432 ) ;
(*OLVASIM) = NLVASIM ;
ALVASIM = OLVASIM;
} 
} 
A_PROC_EXIT(labsonly);
return( ALVASIM );
} 
#undef NL
 /* line 1152: */

A_STATIC A68_VOID  ULVASIM_doit(A68_438 * Sel, A68_296 * Pat, A68_432 * Qs, A68_432 * Ts, void *NonLocals)
#define NL(x) (((VLVASIM_doit *)NonLocals)->x)
{ 
A68_281  WLVASIM;  /* united object - for case conformity */
A68_431  XLVASIM;  /* avoid structure result */
A68_431  YLVASIM;  /* avoid structure result */
A68_INT  ZLVASIM_skip;
A68_281  AMVASIM;  /* united object - for case conformity */
A68_431  BMVASIM;  /* avoid structure result */
A68_431  CMVASIM;  /* avoid structure result */
A68_431  DMVASIM;  /* avoid structure result */
A68_431  EMVASIM;  /* avoid structure result */
A68_431  FMVASIM;  /* avoid structure result */
A68_431  GMVASIM;  /* avoid structure result */
A_PROC_ENTRY(doit);
 /* line 1153: */
 /* line 1154: */
{ 
FGNASIM_repeatlabelsequence();
 /* line 1155: */
 /* line 1156: */
if ( ((*(&(Pat->Rest)))==IAAATRN_nilustr) )
{ 
 /* line 1157: */
WLVASIM = (*(&(Pat->Elem))) ;
switch ( WLVASIM.mode )
{ 
case 34: /* REF STRUCT(INT)  */
 /* line 1158: */
 /* line 1159: */
HDVASIM_nulltest( NL(T), A68_TRUE, &XLVASIM );
XLVASIM;
break;
default: 
 /* line 1160: */
A_CALLPROC((*NL(SDVASIM_match)),(Sel, (*(&(Pat->Elem))), (*(&(Qs->Head))), NL(F), NL(T), A68_TRUE, &YLVASIM),(Sel, (*(&(Pat->Elem))), (*(&(Qs->Head))), NL(F), NL(T), A68_TRUE, &YLVASIM,((*NL(SDVASIM_match))).nonlocals));
YLVASIM;
break;
} 
 /* line 1161: */
 /* line 1162: */
 /* line 1163: */
MGNASIM_continuelabelsequence();
} 
else
{ 
ZLVASIM_skip = MXUASIM_width((*(&(Pat->Elem))));
 /* line 1164: */
 /* line 1165: */
AMVASIM = (*(&(Pat->Elem))) ;
switch ( AMVASIM.mode )
{ 
case 34: /* REF STRUCT(INT)  */
 /* line 1166: */
 /* line 1167: */
VUUASIM_next( (*(&(Ts->Head))), &BMVASIM );
HDVASIM_nulltest( BMVASIM, A68_TRUE, &CMVASIM );
CMVASIM;
break;
default: 
 /* line 1168: */
 /* line 1169: */
VUUASIM_next( (*(&(Ts->Head))), &DMVASIM );
ZUUASIM_notnext( NL(F), &EMVASIM );
ZUUASIM_notnext( (*(&(Qs->Head))), &FMVASIM );
A_CALLPROC((*NL(SDVASIM_match)),(Sel, (*(&(Pat->Elem))), FMVASIM, EMVASIM, DMVASIM, A68_TRUE, &GMVASIM),(Sel, (*(&(Pat->Elem))), FMVASIM, EMVASIM, DMVASIM, A68_TRUE, &GMVASIM,((*NL(SDVASIM_match))).nonlocals));
GMVASIM;
break;
} 
 /* line 1170: */
MGNASIM_continuelabelsequence();
 /* line 1171: */
 /* line 1172: */
 /* line 1173: */
A_CALLPROC(NL(TLVASIM_doit),(NVUASIM_drop(ZLVASIM_skip, Sel), (*(&(Pat->Rest))), (*(&(Qs->Tail))), (*(&(Ts->Tail)))),(NVUASIM_drop(ZLVASIM_skip, Sel), (*(&(Pat->Rest))), (*(&(Qs->Tail))), (*(&(Ts->Tail))),(NL(TLVASIM_doit)).nonlocals));
} 
} 
A_PROC_EXIT(doit);
return;
} 
#undef NL

A_STATIC A68_432 * ZMVASIM_labsonly(A68_BOOL  Omit, A68_438 * Sel, A68_296 * Pat, void *NonLocals)
#define NL(x) (((ANVASIM_labsonly *)NonLocals)->x)
{ 
A68_281  BNVASIM;  /* united object - for case conformity */
A68_BOOL  CNVASIM;  /* clause result */
A68_BOOL  DNVASIM_taut1;
A68_431  ENVASIM;  /* clause result */
A68_431  FNVASIM;  /* avoid structure result */
A68_431  GNVASIM;  /* avoid structure result */
A68_431  HNVASIM;  /* avoid structure result */
A68_431  INVASIM_this;
A68_432  JNVASIM;  /* collateral clause result */
A68_432  KNVASIM;  /* collateral clause result */
A68_431  LNVASIM;  /* avoid structure result */
A68_432 * MNVASIM;  /* YIELD */
A68_432 * NNVASIM;  /* clause result */
A68_432 * ONVASIM;  /* YIELD */
A68_INT  PNVASIM_skip;
A68_432 * QNVASIM_tail;
A68_431  RNVASIM;  /* clause result */
A68_431  SNVASIM;  /* avoid structure result */
A68_431  TNVASIM;  /* avoid structure result */
A68_431  UNVASIM;  /* avoid structure result */
A68_431  VNVASIM;  /* avoid structure result */
A68_431  WNVASIM;  /* avoid structure result */
A68_431  XNVASIM;  /* avoid structure result */
A68_431  YNVASIM;  /* avoid structure result */
A68_431  ZNVASIM_this;
A68_432  AOVASIM;  /* collateral clause result */
A68_432 * BOVASIM;  /* YIELD */
A_PROC_ENTRY(labsonly);
 /* line 1186: */
 /* line 1187: */
{ 
BNVASIM = (*(&(Pat->Elem))) ;
switch ( BNVASIM.mode )
{ 
case 34: /* REF STRUCT(INT)  */
CNVASIM = A68_TRUE;
break;
default: 
CNVASIM = A68_FALSE;
break;
} 
DNVASIM_taut1 = CNVASIM;
 /* line 1188: */
 /* line 1189: */
if ( ((*(&(Pat->Rest)))==IAAATRN_nilustr) )
{ 
if ( NL(Do) )
{ 
CGNASIM_marklabelsequence();
} 
 /* line 1190: */
 /* line 1191: */
 /* line 1192: */
if ( Omit )
{ 
 /* line 1193: */
ZUUASIM_notnext( NL(Q), &FNVASIM );
ENVASIM = FNVASIM;
} 
else
{ 
 /* line 1194: */
if ( DNVASIM_taut1 )
{ 
 /* line 1195: */
 /* line 1196: */
HDVASIM_nulltest( NL(Q), A68_FALSE, &GNVASIM );
ENVASIM = GNVASIM;
} 
else
{ 
 /* line 1197: */
A_CALLPROC((*NL(SDVASIM_match)),(Sel, (*(&(Pat->Elem))), NL(Q), NL(F), NL(Q), A68_FALSE, &HNVASIM),(Sel, (*(&(Pat->Elem))), NL(Q), NL(F), NL(Q), A68_FALSE, &HNVASIM,((*NL(SDVASIM_match))).nonlocals));
ENVASIM = HNVASIM;
} 
} 
INVASIM_this = ENVASIM;
 /* line 1198: */
JNVASIM.Head = INVASIM_this;
ZUUASIM_notnext( NL(Q), &LNVASIM );
KNVASIM.Head = LNVASIM;
KNVASIM.Tail = PUUASIM_nillablist;
 /* line 1199: */
MNVASIM = A_HEAP(A68_432 ) ;
(*MNVASIM) = KNVASIM ;
JNVASIM.Tail = MNVASIM;
 /* line 1200: */
ONVASIM = A_HEAP(A68_432 ) ;
(*ONVASIM) = JNVASIM ;
NNVASIM = ONVASIM;
} 
else
{ 
PNVASIM_skip = MXUASIM_width((*(&(Pat->Elem))));
 /* line 1201: */
 /* line 1202: */
QNVASIM_tail = A_CALLPROC(NL(YMVASIM_labsonly),((Omit&DNVASIM_taut1), NVUASIM_drop(PNVASIM_skip, Sel), (*(&(Pat->Rest)))),((Omit&DNVASIM_taut1), NVUASIM_drop(PNVASIM_skip, Sel), (*(&(Pat->Rest))),(NL(YMVASIM_labsonly)).nonlocals));
 /* line 1203: */
if ( NL(Do) )
{ 
CGNASIM_marklabelsequence();
} 
 /* line 1204: */
 /* line 1205: */
 /* line 1206: */
if ( Omit )
{ 
 /* line 1207: */
ZUUASIM_notnext( (*(&(QNVASIM_tail->Head))), &SNVASIM );
RNVASIM = SNVASIM;
} 
else
{ 
 /* line 1208: */
if ( DNVASIM_taut1 )
{ 
 /* line 1209: */
 /* line 1210: */
VUUASIM_next( (*(&(QNVASIM_tail->Head))), &TNVASIM );
HDVASIM_nulltest( TNVASIM, A68_FALSE, &UNVASIM );
RNVASIM = UNVASIM;
} 
else
{ 
 /* line 1211: */
 /* line 1212: */
VUUASIM_next( (*(&(QNVASIM_tail->Head))), &VNVASIM );
ZUUASIM_notnext( NL(F), &WNVASIM );
VUUASIM_next( (*(&(QNVASIM_tail->Head))), &XNVASIM );
A_CALLPROC((*NL(SDVASIM_match)),(Sel, (*(&(Pat->Elem))), XNVASIM, WNVASIM, VNVASIM, A68_FALSE, &YNVASIM),(Sel, (*(&(Pat->Elem))), XNVASIM, WNVASIM, VNVASIM, A68_FALSE, &YNVASIM,((*NL(SDVASIM_match))).nonlocals));
RNVASIM = YNVASIM;
} 
} 
ZNVASIM_this = RNVASIM;
 /* line 1213: */
AOVASIM.Head = ZNVASIM_this;
 /* line 1214: */
AOVASIM.Tail = QNVASIM_tail;
 /* line 1215: */
BOVASIM = A_HEAP(A68_432 ) ;
(*BOVASIM) = AOVASIM ;
NNVASIM = BOVASIM;
} 
} 
A_PROC_EXIT(labsonly);
return( NNVASIM );
} 
#undef NL
 /* line 1218: */

A_STATIC A68_VOID  HOVASIM_doit(A68_BOOL  Omit, A68_438 * Sel, A68_296 * Pat, A68_432 * Qs, void *NonLocals)
#define NL(x) (((IOVASIM_doit *)NonLocals)->x)
{ 
A68_281  JOVASIM;  /* united object - for case conformity */
A68_BOOL  KOVASIM;  /* clause result */
A68_BOOL  LOVASIM_taut1;
A68_431  MOVASIM;  /* avoid structure result */
A68_431  NOVASIM;  /* avoid structure result */
A68_INT  OOVASIM_skip;
A68_431  POVASIM;  /* avoid structure result */
A68_431  QOVASIM;  /* avoid structure result */
A68_431  ROVASIM;  /* avoid structure result */
A68_431  SOVASIM;  /* avoid structure result */
A68_431  TOVASIM;  /* avoid structure result */
A68_431  UOVASIM;  /* avoid structure result */
A_PROC_ENTRY(doit);
 /* line 1219: */
 /* line 1220: */
{ 
JOVASIM = (*(&(Pat->Elem))) ;
switch ( JOVASIM.mode )
{ 
case 34: /* REF STRUCT(INT)  */
KOVASIM = A68_TRUE;
break;
default: 
KOVASIM = A68_FALSE;
break;
} 
LOVASIM_taut1 = KOVASIM;
 /* line 1221: */
FGNASIM_repeatlabelsequence();
 /* line 1222: */
 /* line 1223: */
if ( ((*(&(Pat->Rest)))==IAAATRN_nilustr) )
{ 
 /* line 1224: */
if ( Omit )
{ 
/*SKIP*/;
} 
else
{ 
 /* line 1225: */
if ( LOVASIM_taut1 )
{ 
 /* line 1226: */
 /* line 1227: */
HDVASIM_nulltest( NL(Q), A68_TRUE, &MOVASIM );
MOVASIM;
} 
else
{ 
 /* line 1228: */
A_CALLPROC((*NL(SDVASIM_match)),(Sel, (*(&(Pat->Elem))), NL(Q), NL(F), NL(Q), A68_TRUE, &NOVASIM),(Sel, (*(&(Pat->Elem))), NL(Q), NL(F), NL(Q), A68_TRUE, &NOVASIM,((*NL(SDVASIM_match))).nonlocals));
NOVASIM;
} 
} 
 /* line 1229: */
 /* line 1230: */
 /* line 1231: */
MGNASIM_continuelabelsequence();
} 
else
{ 
OOVASIM_skip = MXUASIM_width((*(&(Pat->Elem))));
 /* line 1232: */
 /* line 1233: */
if ( Omit )
{ 
/*SKIP*/;
} 
else
{ 
 /* line 1234: */
if ( LOVASIM_taut1 )
{ 
 /* line 1235: */
 /* line 1236: */
VUUASIM_next( (*(&(Qs->Head))), &POVASIM );
HDVASIM_nulltest( POVASIM, A68_TRUE, &QOVASIM );
QOVASIM;
} 
else
{ 
 /* line 1237: */
 /* line 1238: */
VUUASIM_next( (*(&(Qs->Head))), &ROVASIM );
ZUUASIM_notnext( NL(F), &SOVASIM );
VUUASIM_next( (*(&(Qs->Head))), &TOVASIM );
A_CALLPROC((*NL(SDVASIM_match)),(Sel, (*(&(Pat->Elem))), TOVASIM, SOVASIM, ROVASIM, A68_TRUE, &UOVASIM),(Sel, (*(&(Pat->Elem))), TOVASIM, SOVASIM, ROVASIM, A68_TRUE, &UOVASIM,((*NL(SDVASIM_match))).nonlocals));
UOVASIM;
} 
} 
 /* line 1239: */
MGNASIM_continuelabelsequence();
 /* line 1240: */
 /* line 1241: */
 /* line 1242: */
A_CALLPROC(NL(GOVASIM_doit),((Omit&LOVASIM_taut1), NVUASIM_drop(OOVASIM_skip, Sel), (*(&(Pat->Rest))), (*(&(Qs->Tail)))),((Omit&LOVASIM_taut1), NVUASIM_drop(OOVASIM_skip, Sel), (*(&(Pat->Rest))), (*(&(Qs->Tail))),(NL(GOVASIM_doit)).nonlocals));
} 
} 
A_PROC_EXIT(doit);
return;
} 
#undef NL
 /* line 857: */

A_STATIC A68_VOID  BEVASIM_elementtest(A68_437 * Element, A68_INT  D, A68_281  Pattern, A68_431  Q, A68_431  F, A68_431  T, A68_BOOL  Do, A68_431  *ReturnedValue, void *NonLocals)
#define NL(x) (((CEVASIM_elementtest *)NonLocals)->x)
{ 
A68_431  DEVASIM;  /* avoid structure result */
A68_431  EEVASIM_start;
A68_281  FEVASIM;  /* united object - for case conformity */
A68_276 * GEVASIM_b;
A68_431  HEVASIM;  /* avoid structure result */
A68_431  IEVASIM;  /* avoid structure result */
A68_431  JEVASIM;  /* avoid structure result */
A68_288 * KEVASIM_a;
A68_431  LEVASIM;  /* avoid structure result */
A68_431  MEVASIM;  /* avoid structure result */
A68_438 * NEVASIM_subelements;
A68_277 * OEVASIM_i;
A68_431  PEVASIM;  /* avoid structure result */
A68_431  QEVASIM;  /* avoid structure result */
A68_431  REVASIM;  /* avoid structure result */
A68_278 * SEVASIM_r;
A68_431  TEVASIM;  /* avoid structure result */
A68_431  UEVASIM;  /* avoid structure result */
A68_431  VEVASIM;  /* avoid structure result */
A68_284 * WEVASIM_cr;
A68_431  XEVASIM;  /* avoid structure result */
A68_431  YEVASIM;  /* avoid structure result */
A68_431  ZEVASIM;  /* avoid structure result */
A68_452  AFVASIM_cs;
A68_281  BFVASIM;  /* OPERATORS - unite union */
A68_198  CFVASIM;  /* avoid structure result */
A68_198  DFVASIM_sv;
A68_198  EFVASIM;  /* united object - for case conformity */
A68_202 * FFVASIM_svstr;
A68_115  GFVASIM;  /* clause result */
A68_115  HFVASIM;  /* OPERATORS - mode -> union mode */
A68_121 * IFVASIM;  /* YIELD */
A68_115  JFVASIM_st;
A68_VC  KFVASIM_word;
A68_115  LFVASIM;  /* united object - for case conformity */
A68_121 * MFVASIM_ss;
A68_INT  NFVASIM;  /* clause result */
A68_INT  OFVASIM_size;
A68_431  PFVASIM;  /* avoid structure result */
A68_431  QFVASIM;  /* avoid structure result */
A68_VC  RFVASIM;  /* OPERATORS - trim index */
A68_431  SFVASIM;  /* avoid structure result */
A68_431  TFVASIM;  /* clause result */
A_PROC_ENTRY(elementtest);
 /* line 858: */
 /* line 859: */
{ 
QUUASIM_newolab(  &DEVASIM );
EEVASIM_start = DEVASIM;
 /* line 860: */
 /* line 861: */
if ( Do )
{ 
NWNASIM_amlabel(D, EEVASIM_start.Lab);
 /* line 862: */
 /* line 863: */
FEVASIM = Pattern ;
switch ( FEVASIM.mode )
{ 
case 2: /* REF STRUCT(INT,INT)  */
GEVASIM_b = (FEVASIM.data.mode2);
 /* line 864: */
 /* line 865: */
{ 
 /* line 866: */
ZUUASIM_notnext( T, &HEVASIM );
ZUUASIM_notnext( Q, &IEVASIM );
OBVASIM_simpleenumtest((*(&(Element->Input))), (*(&(Element->Offset))), D, (*(&(GEVASIM_b->Primno))), IEVASIM, HEVASIM);
 /* line 867: */
 /* line 868: */
 /* line 869: */
HDVASIM_nulltest( F, A68_TRUE, &JEVASIM );
JEVASIM;
} 
break;
case 13: /* REF STRUCT(INT,INT,MODE281)  */
KEVASIM_a = (FEVASIM.data.mode13);
 /* line 870: */
 /* line 871: */
{ 
 /* line 872: */
ZUUASIM_notnext( F, &LEVASIM );
ZUUASIM_notnext( Q, &MEVASIM );
VBVASIM_enumtest((*(&(Element->Input))), (*(&(Element->Offset))), D, (*(&(KEVASIM_a->Altno))), MEVASIM, LEVASIM);
 /* line 873: */
 /* line 874: */
 /* line 875: */
 /* line 876: */
NEVASIM_subelements = SWUASIM_makeassocselector((*(&(Element->Type))), (*(&(KEVASIM_a->Altno))), (*(&(Element->Input))), ((*(&(Element->Offset)))+DENASIM_ws));
 /* line 877: */
 /* line 878: */
 /* line 879: */
 /* line 880: */
RDVASIM_casetest(NEVASIM_subelements, (*(&(KEVASIM_a->Assoc))), Q, F, T, NL(Environ), NL(Closure));
} 
break;
case 3: /* REF STRUCT(INT,MODE243)  */
OEVASIM_i = (FEVASIM.data.mode3);
 /* line 881: */
 /* line 882: */
{ 
 /* line 883: */
ZUUASIM_notnext( F, &PEVASIM );
ZUUASIM_notnext( Q, &QEVASIM );
MCVASIM_inttest((*(&(Element->Input))), (*(&(Element->Offset))), D, XOMATRN_int((*(&(OEVASIM_i->Index)))), QEVASIM, PEVASIM);
 /* line 884: */
 /* line 885: */
 /* line 886: */
HDVASIM_nulltest( T, A68_TRUE, &REVASIM );
REVASIM;
} 
break;
case 8: /* REF STRUCT(INT,MODE258)  */
SEVASIM_r = (FEVASIM.data.mode8);
 /* line 887: */
 /* line 888: */
{ 
 /* line 889: */
 /* line 890: */
ZUUASIM_notnext( F, &TEVASIM );
ZUUASIM_notnext( Q, &UEVASIM );
UCVASIM_rangetest((*(&(Element->Input))), (*(&(Element->Offset))), D, XOMATRN_int((*(&((&(SEVASIM_r->Range))->Lwb)))), XOMATRN_int((*(&((&(SEVASIM_r->Range))->Upb)))), UEVASIM, TEVASIM);
 /* line 891: */
 /* line 892: */
 /* line 893: */
HDVASIM_nulltest( T, A68_TRUE, &VEVASIM );
VEVASIM;
} 
break;
case 9: /* REF STRUCT(INT,INT,INT)  */
WEVASIM_cr = (FEVASIM.data.mode9);
 /* line 894: */
 /* line 895: */
{ 
 /* line 896: */
 /* line 897: */
ZUUASIM_notnext( T, &XEVASIM );
ZUUASIM_notnext( Q, &YEVASIM );
DCVASIM_enumrangetest((*(&(Element->Input))), (*(&(Element->Offset))), D, (*(&(WEVASIM_cr->Firstno))), (*(&(WEVASIM_cr->Lastno))), YEVASIM, XEVASIM);
 /* line 898: */
 /* line 899: */
 /* line 900: */
HDVASIM_nulltest( F, A68_TRUE, &ZEVASIM );
ZEVASIM;
} 
break;
case 5: /* REF STRUCT(INT,REF MODE32)  */
case 33: /* REF STRUCT(MODE243,MODE281)  */
A_UNCPY(AFVASIM_cs,FEVASIM);
AFVASIM_cs.mode = "\000\0\0\0\0\001\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\002\000"[FEVASIM.mode];
 /* line 901: */
 /* line 902: */
{ 
OXBASIM_convertconst( A_UTABUNITE(BFVASIM,"\000\005!",AFVASIM_cs), NL(Environ), NL(Closure), &CFVASIM );
DFVASIM_sv = CFVASIM;
 /* line 903: */
EFVASIM = DFVASIM_sv ;
switch ( EFVASIM.mode )
{ 
case 4: /* REF STRUCT(REF MODE121,REF MODE26)  */
FFVASIM_svstr = (EFVASIM.data.mode4);
IFVASIM = (*(&(FFVASIM_svstr->Type))) ;
GFVASIM = A_UNITE(HFVASIM,mode5,5,IFVASIM);
break;
default: 
A_IMP_SKIP ;
break;
} 
JFVASIM_st = GFVASIM;
 /* line 904: */
KFVASIM_word = (*CLOASIM_machine(DFVASIM_sv, JFVASIM_st));
 /* line 905: */
 /* line 906: */
LFVASIM = JFVASIM_st ;
switch ( LFVASIM.mode )
{ 
case 5: /* REF STRUCT(INT,MODE119)  */
MFVASIM_ss = (LFVASIM.data.mode5);
 /* line 907: */
 /* line 908: */
if ( ((*(&((&(MFVASIM_ss->T))->Char))).upb==2) )
{ 
NFVASIM = (*(&(MFVASIM_ss->No)));
} 
else
{ 
 /* line 909: */
 /* line 910: */
NFVASIM = ((*(&(MFVASIM_ss->No)))*CENASIM_bitsperbyte);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
OFVASIM_size = NFVASIM;
 /* line 911: */
 /* line 912: */
ZUUASIM_notnext( F, &PFVASIM );
ZUUASIM_notnext( Q, &QFVASIM );
CDVASIM_stringtest((*(&(Element->Input))), (*(&(Element->Offset))), OFVASIM_size, D, A_VTRIM(RFVASIM,(KFVASIM_word),A_VTSCRIPT(&(RFVASIM.upb),(KFVASIM_word).upb,(GENASIM_sizeunit+1),(KFVASIM_word).upb)), QFVASIM, PFVASIM);
 /* line 913: */
 /* line 914: */
 /* line 915: */
 /* line 916: */
HDVASIM_nulltest( T, A68_TRUE, &SFVASIM );
SFVASIM;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
 /* line 917: */
 /* line 918: */
TFVASIM = EEVASIM_start;
} 
A_PROC_EXIT(elementtest);
*ReturnedValue = (TFVASIM);
return;
} 
#undef NL
 /* line 967: */

A_STATIC A68_VOID  BGVASIM_fchain(A68_438 * Selector, A68_285 * Pattern, A68_432  Qq, A68_431  F, A68_431  T, A68_BOOL  Do, A68_431  *ReturnedValue, void *NonLocals)
#define NL(x) (((CGVASIM_fchain *)NonLocals)->x)
{ 
A68_454  GGVASIM_labsonly;   /* proc value of non-global proc */
A68_455  XGVASIM_doit;   /* proc value of non-global proc */
A68_432 * FHVASIM;  /* YIELD */
A68_432 * GHVASIM_ff;
A68_432 * HHVASIM;  /* YIELD */
A68_431  IHVASIM;  /* clause result */
A_PROC_ENTRY(fchain);
 /* line 968: */
 /* line 970: */
{ 
A_CLOSURE( GGVASIM_labsonly, HGVASIM_labsonly, IGVASIM_labsonly );
(( IGVASIM_labsonly * ) ( GGVASIM_labsonly.nonlocals )) -> Do = Do;
(( IGVASIM_labsonly * ) ( GGVASIM_labsonly.nonlocals )) -> SDVASIM_match = NL(SDVASIM_match);
(( IGVASIM_labsonly * ) ( GGVASIM_labsonly.nonlocals )) -> Selector = Selector;
(( IGVASIM_labsonly * ) ( GGVASIM_labsonly.nonlocals )) -> F = F;
(( IGVASIM_labsonly * ) ( GGVASIM_labsonly.nonlocals )) -> T = T;
(( IGVASIM_labsonly * ) ( GGVASIM_labsonly.nonlocals )) -> GGVASIM_labsonly = GGVASIM_labsonly;
 /* line 985: */
A_CLOSURE( XGVASIM_doit, YGVASIM_doit, ZGVASIM_doit );
(( ZGVASIM_doit * ) ( XGVASIM_doit.nonlocals )) -> SDVASIM_match = NL(SDVASIM_match);
(( ZGVASIM_doit * ) ( XGVASIM_doit.nonlocals )) -> Selector = Selector;
(( ZGVASIM_doit * ) ( XGVASIM_doit.nonlocals )) -> F = F;
(( ZGVASIM_doit * ) ( XGVASIM_doit.nonlocals )) -> T = T;
(( ZGVASIM_doit * ) ( XGVASIM_doit.nonlocals )) -> XGVASIM_doit = XGVASIM_doit;
 /* line 999: */
FHVASIM = A_LOC(A68_432 ) ;
(*FHVASIM) = Qq ;
GHVASIM_ff = A_CALLPROC(GGVASIM_labsonly,(Pattern, FHVASIM),(Pattern, FHVASIM,(GGVASIM_labsonly).nonlocals));
 /* line 1000: */
if ( Do )
{ 
HHVASIM = A_LOC(A68_432 ) ;
(*HHVASIM) = Qq ;
A_CALLPROC(XGVASIM_doit,(Pattern, HHVASIM, (*(&(GHVASIM_ff->Tail)))),(Pattern, HHVASIM, (*(&(GHVASIM_ff->Tail))),(XGVASIM_doit).nonlocals));
} 
 /* line 1001: */
 /* line 1002: */
IHVASIM = (*(&(GHVASIM_ff->Head)));
} 
A_PROC_EXIT(fchain);
*ReturnedValue = (IHVASIM);
return;
} 
#undef NL
 /* line 1006: */

A_STATIC A68_432 * PHVASIM_dqchain(A68_438 * Selector, A68_285 * Pattern, A68_431  Q, A68_431  T, A68_BOOL  Do, void *NonLocals)
#define NL(x) (((QHVASIM_dqchain *)NonLocals)->x)
{ 
A68_457  THVASIM_labsonly;   /* proc value of non-global proc */
A68_458  MIVASIM_doit;   /* proc value of non-global proc */
A68_432 * UIVASIM_qq;
A68_432 * VIVASIM;  /* clause result */
A_PROC_ENTRY(dqchain);
 /* line 1007: */
 /* line 1009: */
{ 
A_CLOSURE( THVASIM_labsonly, UHVASIM_labsonly, VHVASIM_labsonly );
(( VHVASIM_labsonly * ) ( THVASIM_labsonly.nonlocals )) -> Do = Do;
(( VHVASIM_labsonly * ) ( THVASIM_labsonly.nonlocals )) -> SDVASIM_match = NL(SDVASIM_match);
(( VHVASIM_labsonly * ) ( THVASIM_labsonly.nonlocals )) -> Selector = Selector;
(( VHVASIM_labsonly * ) ( THVASIM_labsonly.nonlocals )) -> Q = Q;
(( VHVASIM_labsonly * ) ( THVASIM_labsonly.nonlocals )) -> T = T;
(( VHVASIM_labsonly * ) ( THVASIM_labsonly.nonlocals )) -> THVASIM_labsonly = THVASIM_labsonly;
 /* line 1024: */
A_CLOSURE( MIVASIM_doit, NIVASIM_doit, OIVASIM_doit );
(( OIVASIM_doit * ) ( MIVASIM_doit.nonlocals )) -> SDVASIM_match = NL(SDVASIM_match);
(( OIVASIM_doit * ) ( MIVASIM_doit.nonlocals )) -> Selector = Selector;
(( OIVASIM_doit * ) ( MIVASIM_doit.nonlocals )) -> Q = Q;
(( OIVASIM_doit * ) ( MIVASIM_doit.nonlocals )) -> T = T;
(( OIVASIM_doit * ) ( MIVASIM_doit.nonlocals )) -> MIVASIM_doit = MIVASIM_doit;
 /* line 1038: */
UIVASIM_qq = A_CALLPROC(THVASIM_labsonly,(Pattern),(Pattern,(THVASIM_labsonly).nonlocals));
 /* line 1039: */
if ( Do )
{ 
A_CALLPROC(MIVASIM_doit,(Pattern, (*(&(UIVASIM_qq->Tail)))),(Pattern, (*(&(UIVASIM_qq->Tail))),(MIVASIM_doit).nonlocals));
} 
 /* line 1040: */
 /* line 1041: */
VIVASIM = UIVASIM_qq;
} 
A_PROC_EXIT(dqchain);
return( VIVASIM );
} 
#undef NL

A_STATIC A68_432 * YIVASIM_ddummychain(A68_285 * Pattern, A68_431  Label)
{ 
A68_285 * ZIVASIM_scan;
A68_432  AJVASIM;  /* collateral clause result */
A68_432 * CJVASIM;  /* YIELD */
A68_432 * BJVASIM_result;
A68_432  DJVASIM;  /* collateral clause result */
A68_431  EJVASIM;  /* avoid structure result */
A68_432 * FJVASIM;  /* YIELD */
A68_432 * GJVASIM;  /* clause result */
A_PROC_ENTRY(ddummychain);
 /* line 1045: */
 /* line 1046: */
{ 
ZIVASIM_scan = Pattern;
 /* line 1047: */
AJVASIM.Head = Label;
AJVASIM.Tail = PUUASIM_nillablist;
CJVASIM = A_HEAP(A68_432 ) ;
(*CJVASIM) = AJVASIM ;
BJVASIM_result = CJVASIM;
 /* line 1048: */
for ( ;; )
{ 
 /* line 1049: */
if ( !((ZIVASIM_scan!=HAAATRN_nilualts)) ) break;
ZUUASIM_notnext( Label, &EJVASIM );
DJVASIM.Head = EJVASIM;
DJVASIM.Tail = BJVASIM_result;
FJVASIM = A_HEAP(A68_432 ) ;
(*FJVASIM) = DJVASIM ;
BJVASIM_result = FJVASIM;
 /* line 1050: */
 /* line 1051: */
ZIVASIM_scan = (*(&(ZIVASIM_scan->Rest)));
}
 /* line 1052: */
 /* line 1053: */
GJVASIM = BJVASIM_result;
} 
A_PROC_EXIT(ddummychain);
return( GJVASIM );
} 
#undef NL
 /* line 1057: */

A_STATIC A68_VOID  OJVASIM_disjoin(A68_438 * Selector, A68_285 * Pattern, A68_431  Q, A68_431  F, A68_431  T, A68_BOOL  Do, A68_431  *ReturnedValue, void *NonLocals)
#define NL(x) (((PJVASIM_disjoin *)NonLocals)->x)
{ 
A68_BOOL  QJVASIM;  /* optbool result */
A68_281  RJVASIM;  /* OPERATORS - mode -> union mode */
A68_BOOL  SJVASIM_qchainneeded;
A68_431  TJVASIM;  /* clause result */
A68_431  UJVASIM;  /* avoid structure result */
A68_431  VJVASIM_nnf;
A68_431  WJVASIM;  /* clause result */
A68_431  XJVASIM;  /* avoid structure result */
A68_431  YJVASIM_nnt;
A68_432 * ZJVASIM;  /* clause result */
A68_432 * AKVASIM_qlabs;
A68_431  BKVASIM;  /* avoid structure result */
A68_431  CKVASIM_start;
A68_431  DKVASIM;  /* clause result */
A_PROC_ENTRY(disjoin);
 /* line 1058: */
 /* line 1059: */
{ 
QJVASIM = HVUASIM_(T, Q);
if ( QJVASIM )
{ /* line 1060: */
QJVASIM = ((*(&(Pattern->Rest)))!=HAAATRN_nilualts);
}
if ( QJVASIM )
{QJVASIM = NAVASIM_sometaut(A_UNITE(RJVASIM,mode10,10,Pattern));
}
SJVASIM_qchainneeded = QJVASIM;
 /* line 1061: */
if ( SJVASIM_qchainneeded )
{ 
 /* line 1062: */
 /* line 1063: */
ZUUASIM_notnext( F, &UJVASIM );
TJVASIM = UJVASIM;
} 
else
{ 
TJVASIM = F;
} 
VJVASIM_nnf = TJVASIM;
 /* line 1064: */
if ( SJVASIM_qchainneeded )
{ 
 /* line 1065: */
 /* line 1066: */
ZUUASIM_notnext( T, &XJVASIM );
WJVASIM = XJVASIM;
} 
else
{ 
WJVASIM = T;
} 
YJVASIM_nnt = WJVASIM;
 /* line 1067: */
CGNASIM_marklabelsequence();
 /* line 1068: */
 /* line 1069: */
if ( SJVASIM_qchainneeded )
{ 
 /* line 1070: */
 /* line 1071: */
ZJVASIM = A_CALLPROC(NL(OHVASIM_dqchain),(Selector, (*(&(Pattern->Rest))), Q, T, A68_FALSE),(Selector, (*(&(Pattern->Rest))), Q, T, A68_FALSE,(NL(OHVASIM_dqchain)).nonlocals));
} 
else
{ 
 /* line 1072: */
ZJVASIM = YIVASIM_ddummychain((*(&(Pattern->Rest))), Q);
} 
AKVASIM_qlabs = ZJVASIM;
 /* line 1074: */
A_CALLPROC(NL(AGVASIM_fchain),(Selector, Pattern, (*AKVASIM_qlabs), VJVASIM_nnf, YJVASIM_nnt, Do, &BKVASIM),(Selector, Pattern, (*AKVASIM_qlabs), VJVASIM_nnf, YJVASIM_nnt, Do, &BKVASIM,(NL(AGVASIM_fchain)).nonlocals));
CKVASIM_start = BKVASIM;
 /* line 1075: */
 /* line 1076: */
if ( (SJVASIM_qchainneeded&Do) )
{ 
FGNASIM_repeatlabelsequence();
 /* line 1077: */
 /* line 1078: */
A_CALLPROC(NL(OHVASIM_dqchain),(Selector, (*(&(Pattern->Rest))), Q, T, A68_TRUE),(Selector, (*(&(Pattern->Rest))), Q, T, A68_TRUE,(NL(OHVASIM_dqchain)).nonlocals));
} 
 /* line 1079: */
MGNASIM_continuelabelsequence();
 /* line 1081: */
 /* line 1082: */
DKVASIM = CKVASIM_start;
} 
A_PROC_EXIT(disjoin);
*ReturnedValue = (DKVASIM);
return;
} 
#undef NL
 /* line 1120: */

A_STATIC A68_VOID  LKVASIM_tchain(A68_438 * Selector, A68_296 * Pattern, A68_432  Qq, A68_431  F, A68_431  T, A68_BOOL  Do, A68_431  *ReturnedValue, void *NonLocals)
#define NL(x) (((MKVASIM_tchain *)NonLocals)->x)
{ 
A68_462  RKVASIM_labsonly;   /* proc value of non-global proc */
A68_463  TLVASIM_doit;   /* proc value of non-global proc */
A68_432 * HMVASIM;  /* YIELD */
A68_432 * IMVASIM_tt;
A68_432 * JMVASIM;  /* YIELD */
A68_431  KMVASIM;  /* clause result */
A_PROC_ENTRY(tchain);
 /* line 1121: */
 /* line 1123: */
{ 
A_CLOSURE( RKVASIM_labsonly, SKVASIM_labsonly, TKVASIM_labsonly );
(( TKVASIM_labsonly * ) ( RKVASIM_labsonly.nonlocals )) -> Do = Do;
(( TKVASIM_labsonly * ) ( RKVASIM_labsonly.nonlocals )) -> T = T;
(( TKVASIM_labsonly * ) ( RKVASIM_labsonly.nonlocals )) -> SDVASIM_match = NL(SDVASIM_match);
(( TKVASIM_labsonly * ) ( RKVASIM_labsonly.nonlocals )) -> F = F;
(( TKVASIM_labsonly * ) ( RKVASIM_labsonly.nonlocals )) -> RKVASIM_labsonly = RKVASIM_labsonly;
 /* line 1151: */
A_CLOSURE( TLVASIM_doit, ULVASIM_doit, VLVASIM_doit );
(( VLVASIM_doit * ) ( TLVASIM_doit.nonlocals )) -> T = T;
(( VLVASIM_doit * ) ( TLVASIM_doit.nonlocals )) -> SDVASIM_match = NL(SDVASIM_match);
(( VLVASIM_doit * ) ( TLVASIM_doit.nonlocals )) -> F = F;
(( VLVASIM_doit * ) ( TLVASIM_doit.nonlocals )) -> TLVASIM_doit = TLVASIM_doit;
 /* line 1175: */
HMVASIM = A_LOC(A68_432 ) ;
(*HMVASIM) = Qq ;
IMVASIM_tt = A_CALLPROC(RKVASIM_labsonly,(Selector, Pattern, HMVASIM),(Selector, Pattern, HMVASIM,(RKVASIM_labsonly).nonlocals));
 /* line 1176: */
if ( Do )
{ 
JMVASIM = A_LOC(A68_432 ) ;
(*JMVASIM) = Qq ;
A_CALLPROC(TLVASIM_doit,(Selector, Pattern, JMVASIM, (*(&(IMVASIM_tt->Tail)))),(Selector, Pattern, JMVASIM, (*(&(IMVASIM_tt->Tail))),(TLVASIM_doit).nonlocals));
} 
 /* line 1177: */
 /* line 1178: */
KMVASIM = (*(&(IMVASIM_tt->Head)));
} 
A_PROC_EXIT(tchain);
*ReturnedValue = (KMVASIM);
return;
} 
#undef NL
 /* line 1182: */

A_STATIC A68_432 * SMVASIM_cqchain(A68_BOOL  Omit, A68_438 * Selector, A68_296 * Pattern, A68_431  Q, A68_431  F, A68_BOOL  Do, void *NonLocals)
#define NL(x) (((TMVASIM_cqchain *)NonLocals)->x)
{ 
A68_465  YMVASIM_labsonly;   /* proc value of non-global proc */
A68_466  GOVASIM_doit;   /* proc value of non-global proc */
A68_432 * VOVASIM_qq;
A68_432 * WOVASIM;  /* clause result */
A_PROC_ENTRY(cqchain);
 /* line 1183: */
 /* line 1185: */
{ 
A_CLOSURE( YMVASIM_labsonly, ZMVASIM_labsonly, ANVASIM_labsonly );
(( ANVASIM_labsonly * ) ( YMVASIM_labsonly.nonlocals )) -> Do = Do;
(( ANVASIM_labsonly * ) ( YMVASIM_labsonly.nonlocals )) -> Q = Q;
(( ANVASIM_labsonly * ) ( YMVASIM_labsonly.nonlocals )) -> SDVASIM_match = NL(SDVASIM_match);
(( ANVASIM_labsonly * ) ( YMVASIM_labsonly.nonlocals )) -> F = F;
(( ANVASIM_labsonly * ) ( YMVASIM_labsonly.nonlocals )) -> YMVASIM_labsonly = YMVASIM_labsonly;
 /* line 1217: */
A_CLOSURE( GOVASIM_doit, HOVASIM_doit, IOVASIM_doit );
(( IOVASIM_doit * ) ( GOVASIM_doit.nonlocals )) -> Q = Q;
(( IOVASIM_doit * ) ( GOVASIM_doit.nonlocals )) -> SDVASIM_match = NL(SDVASIM_match);
(( IOVASIM_doit * ) ( GOVASIM_doit.nonlocals )) -> F = F;
(( IOVASIM_doit * ) ( GOVASIM_doit.nonlocals )) -> GOVASIM_doit = GOVASIM_doit;
 /* line 1244: */
VOVASIM_qq = A_CALLPROC(YMVASIM_labsonly,(Omit, Selector, Pattern),(Omit, Selector, Pattern,(YMVASIM_labsonly).nonlocals));
 /* line 1245: */
if ( Do )
{ 
A_CALLPROC(GOVASIM_doit,(Omit, Selector, Pattern, (*(&(VOVASIM_qq->Tail)))),(Omit, Selector, Pattern, (*(&(VOVASIM_qq->Tail))),(GOVASIM_doit).nonlocals));
} 
 /* line 1246: */
 /* line 1247: */
WOVASIM = VOVASIM_qq;
} 
A_PROC_EXIT(cqchain);
return( WOVASIM );
} 
#undef NL

A_STATIC A68_432 * ZOVASIM_cdummychain(A68_296 * Pattern, A68_431  Label)
{ 
A68_296 * APVASIM_scan;
A68_432  BPVASIM;  /* collateral clause result */
A68_432 * DPVASIM;  /* YIELD */
A68_432 * CPVASIM_result;
A68_432  EPVASIM;  /* collateral clause result */
A68_431  FPVASIM;  /* avoid structure result */
A68_432 * GPVASIM;  /* YIELD */
A68_432 * HPVASIM;  /* clause result */
A_PROC_ENTRY(cdummychain);
 /* line 1251: */
 /* line 1252: */
{ 
APVASIM_scan = Pattern;
 /* line 1253: */
BPVASIM.Head = Label;
BPVASIM.Tail = PUUASIM_nillablist;
DPVASIM = A_HEAP(A68_432 ) ;
(*DPVASIM) = BPVASIM ;
CPVASIM_result = DPVASIM;
 /* line 1254: */
for ( ;; )
{ 
 /* line 1255: */
if ( !((APVASIM_scan!=IAAATRN_nilustr)) ) break;
ZUUASIM_notnext( Label, &FPVASIM );
EPVASIM.Head = FPVASIM;
EPVASIM.Tail = CPVASIM_result;
GPVASIM = A_HEAP(A68_432 ) ;
(*GPVASIM) = EPVASIM ;
CPVASIM_result = GPVASIM;
 /* line 1256: */
 /* line 1257: */
APVASIM_scan = (*(&(APVASIM_scan->Rest)));
}
 /* line 1258: */
 /* line 1259: */
HPVASIM = CPVASIM_result;
} 
A_PROC_EXIT(cdummychain);
return( HPVASIM );
} 
#undef NL
 /* line 1263: */

A_STATIC A68_VOID  PPVASIM_conjoin(A68_438 * Selector, A68_296 * Pattern, A68_431  Q, A68_431  F, A68_431  T, A68_BOOL  Do, A68_431  *ReturnedValue, void *NonLocals)
#define NL(x) (((QPVASIM_conjoin *)NonLocals)->x)
{ 
A68_BOOL  RPVASIM;  /* optbool result */
A68_BOOL  SPVASIM_qchainneeded;
A68_431  TPVASIM;  /* clause result */
A68_431  UPVASIM;  /* avoid structure result */
A68_431  VPVASIM_nnf;
A68_431  WPVASIM;  /* clause result */
A68_431  XPVASIM;  /* avoid structure result */
A68_431  YPVASIM_nnt;
A68_281  ZPVASIM;  /* united object - for case conformity */
A68_BOOL  AQVASIM;  /* clause result */
A68_BOOL  BQVASIM_tautfirst;
A68_INT  CQVASIM_skip;
A68_432 * DQVASIM;  /* clause result */
A68_432 * EQVASIM_qlabs;
A68_431  FQVASIM;  /* avoid structure result */
A68_431  GQVASIM_start;
A68_431  HQVASIM;  /* clause result */
A_PROC_ENTRY(conjoin);
 /* line 1264: */
 /* line 1265: */
{ 
RPVASIM = HVUASIM_(F, Q);
if ( RPVASIM )
{RPVASIM = ((*(&(Pattern->Rest)))!=IAAATRN_nilustr);
}
SPVASIM_qchainneeded = RPVASIM;
 /* line 1266: */
if ( SPVASIM_qchainneeded )
{ 
 /* line 1267: */
 /* line 1268: */
ZUUASIM_notnext( F, &UPVASIM );
TPVASIM = UPVASIM;
} 
else
{ 
TPVASIM = F;
} 
VPVASIM_nnf = TPVASIM;
 /* line 1269: */
if ( SPVASIM_qchainneeded )
{ 
 /* line 1270: */
 /* line 1271: */
ZUUASIM_notnext( T, &XPVASIM );
WPVASIM = XPVASIM;
} 
else
{ 
WPVASIM = T;
} 
YPVASIM_nnt = WPVASIM;
 /* line 1272: */
ZPVASIM = (*(&(Pattern->Elem))) ;
switch ( ZPVASIM.mode )
{ 
case 34: /* REF STRUCT(INT)  */
AQVASIM = A68_TRUE;
break;
default: 
AQVASIM = A68_FALSE;
break;
} 
BQVASIM_tautfirst = AQVASIM;
 /* line 1273: */
CQVASIM_skip = MXUASIM_width((*(&(Pattern->Elem))));
 /* line 1274: */
CGNASIM_marklabelsequence();
 /* line 1275: */
 /* line 1276: */
if ( SPVASIM_qchainneeded )
{ 
 /* line 1277: */
 /* line 1278: */
 /* line 1279: */
DQVASIM = A_CALLPROC(NL(RMVASIM_cqchain),(BQVASIM_tautfirst, NVUASIM_drop(CQVASIM_skip, Selector), (*(&(Pattern->Rest))), Q, F, A68_FALSE),(BQVASIM_tautfirst, NVUASIM_drop(CQVASIM_skip, Selector), (*(&(Pattern->Rest))), Q, F, A68_FALSE,(NL(RMVASIM_cqchain)).nonlocals));
} 
else
{ 
 /* line 1280: */
DQVASIM = ZOVASIM_cdummychain((*(&(Pattern->Rest))), Q);
} 
EQVASIM_qlabs = DQVASIM;
 /* line 1282: */
A_CALLPROC(NL(KKVASIM_tchain),(Selector, Pattern, (*EQVASIM_qlabs), VPVASIM_nnf, YPVASIM_nnt, Do, &FQVASIM),(Selector, Pattern, (*EQVASIM_qlabs), VPVASIM_nnf, YPVASIM_nnt, Do, &FQVASIM,(NL(KKVASIM_tchain)).nonlocals));
GQVASIM_start = FQVASIM;
 /* line 1283: */
 /* line 1284: */
if ( (SPVASIM_qchainneeded&Do) )
{ 
FGNASIM_repeatlabelsequence();
 /* line 1285: */
 /* line 1286: */
 /* line 1287: */
A_CALLPROC(NL(RMVASIM_cqchain),(BQVASIM_tautfirst, NVUASIM_drop(CQVASIM_skip, Selector), (*(&(Pattern->Rest))), Q, F, A68_TRUE),(BQVASIM_tautfirst, NVUASIM_drop(CQVASIM_skip, Selector), (*(&(Pattern->Rest))), Q, F, A68_TRUE,(NL(RMVASIM_cqchain)).nonlocals));
} 
 /* line 1288: */
MGNASIM_continuelabelsequence();
 /* line 1290: */
 /* line 1291: */
HQVASIM = GQVASIM_start;
} 
A_PROC_EXIT(conjoin);
*ReturnedValue = (HQVASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  PQVASIM_anonymous(A68_438 * Selector, A68_281  Pattern, A68_431  Q, A68_431  F, A68_431  T, A68_BOOL  Do, A68_431  *ReturnedValue, void *NonLocals)
#define NL(x) (((QQVASIM_anonymous *)NonLocals)->x)
{ 
A68_281  RQVASIM;  /* united object - for case conformity */
A68_285 * SQVASIM_alts;
A68_431  TQVASIM;  /* clause result */
A68_431  UQVASIM;  /* avoid structure result */
A68_296 * VQVASIM_str;
A68_431  WQVASIM;  /* avoid structure result */
A68_431  XQVASIM;  /* avoid structure result */
 /* line 1301: */
 /* line 1302: */
RQVASIM = Pattern ;
switch ( RQVASIM.mode )
{ 
case 10: /* REF STRUCT(MODE281,REF MODE285)  */
SQVASIM_alts = (RQVASIM.data.mode10);
 /* line 1303: */
A_CALLPROC(NL(NJVASIM_disjoin),(Selector, SQVASIM_alts, Q, F, T, Do, &UQVASIM),(Selector, SQVASIM_alts, Q, F, T, Do, &UQVASIM,(NL(NJVASIM_disjoin)).nonlocals));
TQVASIM = UQVASIM;
break;
case 21: /* REF STRUCT(MODE281,REF MODE296)  */
VQVASIM_str = (RQVASIM.data.mode21);
 /* line 1304: */
 /* line 1305: */
A_CALLPROC(NL(OPVASIM_conjoin),(Selector, VQVASIM_str, Q, F, T, Do, &WQVASIM),(Selector, VQVASIM_str, Q, F, T, Do, &WQVASIM,(NL(OPVASIM_conjoin)).nonlocals));
TQVASIM = WQVASIM;
break;
default: 
 /* line 1306: */
A_CALLPROC(NL(AEVASIM_elementtest),((&(Selector->Element)), 1, Pattern, Q, F, T, Do, &XQVASIM),((&(Selector->Element)), 1, Pattern, Q, F, T, Do, &XQVASIM,(NL(AEVASIM_elementtest)).nonlocals));
TQVASIM = XQVASIM;
break;
} 
*ReturnedValue = (TQVASIM);
return;
} 
#undef NL
 /* line 163: */
 /* line 164: */
 /* line 165: */

A_STATIC A68_VOID  TSUASIM_outputunit(A68_281  Result, A68_429  Inputwires, A68_32  Inputtypes, A68_INT  Outputoffset, A68_INT  Outputtype, A68_360  Environ, A68_370 * Closure)
{ 
A68_281  USUASIM;  /* united object - for case conformity */
A68_286 * VSUASIM_name;
A68_INT  WSUASIM_ipno;
A68_INT  XSUASIM_primno;
A68_INT  YSUASIM_i;
A68_INT  ZSUASIM;  /* to part of loop */
A68_INT  ATUASIM_n;
A68_32  BTUASIM;  /* OPERATORS - trim index */
A68_32  CTUASIM_iptypes;
A68_INT  DTUASIM_inputoffset;
A68_115  ETUASIM;  /* avoid structure result */
A68_296 * FTUASIM_str;
A68_115  GTUASIM;  /* avoid structure result */
A68_115  HTUASIM_otype;
A68_115  ITUASIM;  /* united object - for case conformity */
A68_123 * JTUASIM_sst;
A68_123 * KTUASIM;  /* clause result */
A68_120 * LTUASIM_sr;
A68_123 * MTUASIM_ans;
A68_INT  NTUASIM;  /* to part of loop */
A68_INT  OTUASIM;  /* loop control */
A68_123  PTUASIM;  /* collateral clause result */
A68_123 * QTUASIM;  /* YIELD */
A68_123 * RTUASIM_strtype;
A68_INT  STUASIM_offset;
A68_296 * TTUASIM_uscan;
A68_123 * UTUASIM_tscan;
A68_116  VTUASIM;  /* procedure value */
A68_INT  WTUASIM_elemtype;
A68_INT  XTUASIM_elemelts;
A68_INT  YTUASIM_width;
A68_295 * ZTUASIM_row;
A68_115  AUUASIM;  /* avoid structure result */
A68_115  BUUASIM_otype;
A68_115  CUUASIM;  /* united object - for case conformity */
A68_123 * DUUASIM_sst;
A68_115  EUUASIM;  /* clause result */
A68_120 * FUUASIM_sr;
A68_115  GUUASIM_elemstype;
A68_INT  HUUASIM_offset;
A68_116  IUUASIM;  /* procedure value */
A68_INT  JUUASIM_elemtype;
A68_INT  KUUASIM_elemelts;
A68_INT  LUUASIM_width;
A68_INT  MUUASIM;  /* to part of loop */
A68_INT  NUUASIM;  /* loop control */
A68_198  OUUASIM;  /* avoid structure result */
A_PROC_ENTRY(outputunit);
 /* line 166: */
 /* line 167: */
USUASIM = Result ;
switch ( USUASIM.mode )
{ 
case 11: /* REF STRUCT(INT,INT)  */
VSUASIM_name = (USUASIM.data.mode11);
 /* line 168: */
 /* line 169: */
{ 
WSUASIM_ipno = (*(&(VSUASIM_name->Nameno)));
 /* line 170: */
XSUASIM_primno = 1;
 /* line 171: */
ZSUASIM = (WSUASIM_ipno-1);
for ( YSUASIM_i = 1;
YSUASIM_i <= ZSUASIM;
YSUASIM_i += 1 )
{ 
 /* line 172: */
 /* line 173: */
XSUASIM_primno+=A_VINDEX(Inputwires,YSUASIM_i).Blocks.upb;
}
 /* line 174: */
ATUASIM_n = A_VINDEX(Inputwires,WSUASIM_ipno).Blocks.upb;
 /* line 175: */
CTUASIM_iptypes = A_VTRIM(BTUASIM,(Inputtypes),A_VTSCRIPT(&(BTUASIM.upb),(Inputtypes).upb,XSUASIM_primno,((XSUASIM_primno+ATUASIM_n)-1)));
 /* line 176: */
DTUASIM_inputoffset = (GENASIM_sizeunit+(DENASIM_ws*XSUASIM_primno));
 /* line 177: */
 /* line 178: */
 /* line 179: */
 /* line 180: */
 /* line 181: */
VGCASIM_lookuptype( Outputtype, &ETUASIM );
PSPASIM_translatecopyinputs(CTUASIM_iptypes, DTUASIM_inputoffset, ETUASIM, Outputoffset, IPPASIM_resetflag, 1);
} 
break;
case 21: /* REF STRUCT(MODE281,REF MODE296)  */
FTUASIM_str = (USUASIM.data.mode21);
 /* line 182: */
 /* line 183: */
{ 
VGCASIM_lookuptype( Outputtype, &GTUASIM );
HTUASIM_otype = GTUASIM;
 /* line 184: */
 /* line 185: */
 /* line 186: */
ITUASIM = HTUASIM_otype ;
switch ( ITUASIM.mode )
{ 
case 7: /* REF STRUCT(MODE115,REF MODE123)  */
JTUASIM_sst = (ITUASIM.data.mode7);
 /* line 187: */
KTUASIM = JTUASIM_sst;
break;
case 4: /* REF STRUCT(INT,MODE115)  */
LTUASIM_sr = (ITUASIM.data.mode4);
 /* line 188: */
 /* line 189: */
{ 
MTUASIM_ans = WSAASIM_nilsst;
 /* line 190: */
NTUASIM = (*(&(LTUASIM_sr->No)));
for ( OTUASIM = 1;
OTUASIM <= NTUASIM;
OTUASIM += 1 )
{ 
 /* line 191: */
PTUASIM.T = (*(&(LTUASIM_sr->Type)));
 /* line 192: */
PTUASIM.Rest = MTUASIM_ans;
QTUASIM = A_HEAP(A68_123 ) ;
(*QTUASIM) = PTUASIM ;
MTUASIM_ans = QTUASIM;
}
 /* line 193: */
 /* line 194: */
 /* line 195: */
KTUASIM = MTUASIM_ans;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
RTUASIM_strtype = KTUASIM;
 /* line 196: */
STUASIM_offset = Outputoffset;
 /* line 197: */
TTUASIM_uscan = FTUASIM_str;
 /* line 198: */
UTUASIM_tscan = RTUASIM_strtype;
 /* line 199: */
for ( ;; )
{ 
 /* line 200: */
if ( !((TTUASIM_uscan!=IAAATRN_nilustr)) ) break;
VTUASIM.fn.fn_global = NZNASIM_machinewidth;
VTUASIM.nonlocals = A68_NIL;
WTUASIM_elemtype = ZFCASIM_addtype((*(&(UTUASIM_tscan->T))), VTUASIM);
 /* line 201: */
XTUASIM_elemelts = DCOASIM_rawsignalwidth((*(&(UTUASIM_tscan->T))));
 /* line 202: */
YTUASIM_width = YGCASIM_lookuptypesize(WTUASIM_elemtype);
 /* line 203: */
 /* line 204: */
 /* line 205: */
TSUASIM_outputunit((*(&(TTUASIM_uscan->Elem))), Inputwires, Inputtypes, STUASIM_offset, WTUASIM_elemtype, Environ, Closure);
 /* line 206: */
STUASIM_offset+=YTUASIM_width;
 /* line 207: */
TTUASIM_uscan = (*(&(TTUASIM_uscan->Rest)));
 /* line 208: */
 /* line 209: */
UTUASIM_tscan = (*(&(UTUASIM_tscan->Rest)));
}
 /* line 210: */
 /* line 211: */
} 
break;
case 20: /* REF STRUCT(MODE243,MODE281)  */
ZTUASIM_row = (USUASIM.data.mode20);
 /* line 212: */
 /* line 216: */
{ 
VGCASIM_lookuptype( Outputtype, &AUUASIM );
BUUASIM_otype = AUUASIM;
 /* line 217: */
 /* line 218: */
CUUASIM = BUUASIM_otype ;
switch ( CUUASIM.mode )
{ 
case 7: /* REF STRUCT(MODE115,REF MODE123)  */
DUUASIM_sst = (CUUASIM.data.mode7);
 /* line 219: */
EUUASIM = (*(&(DUUASIM_sst->T)));
break;
case 4: /* REF STRUCT(INT,MODE115)  */
FUUASIM_sr = (CUUASIM.data.mode4);
 /* line 220: */
EUUASIM = (*(&(FUUASIM_sr->Type)));
break;
default: 
A_IMP_SKIP ;
break;
} 
GUUASIM_elemstype = EUUASIM;
 /* line 221: */
HUUASIM_offset = Outputoffset;
 /* line 222: */
IUUASIM.fn.fn_global = NZNASIM_machinewidth;
IUUASIM.nonlocals = A68_NIL;
JUUASIM_elemtype = ZFCASIM_addtype(GUUASIM_elemstype, IUUASIM);
 /* line 223: */
KUUASIM_elemelts = DCOASIM_rawsignalwidth(GUUASIM_elemstype);
 /* line 224: */
LUUASIM_width = YGCASIM_lookuptypesize(JUUASIM_elemtype);
 /* line 225: */
MUUASIM = XOMATRN_int((*(&(ZTUASIM_row->Size))));
for ( NUUASIM = 1;
NUUASIM <= MUUASIM;
NUUASIM += 1 )
{ 
 /* line 226: */
 /* line 227: */
TSUASIM_outputunit((*(&(ZTUASIM_row->Elem))), Inputwires, Inputtypes, HUUASIM_offset, JUUASIM_elemtype, Environ, Closure);
 /* line 228: */
 /* line 229: */
HUUASIM_offset+=LUUASIM_width;
}
 /* line 230: */
 /* line 231: */
} 
break;
default: 
 /* line 232: */
 /* line 234: */
OXBASIM_convertconst( Result, Environ, Closure, &OUUASIM );
CUPASIM_translateoutputconstant(OUUASIM, Outputtype, Outputoffset, IPPASIM_resetflag, 1);
break;
} 
A_PROC_EXIT(outputunit);
return;
} 
#undef NL

A_STATIC A68_VOID  QUUASIM_newolab(A68_431  *ReturnedValue)
{ 
A68_431  RUUASIM;  /* collateral clause result */
A68_165  SUUASIM;  /* avoid structure result */
A68_431  TUUASIM;  /* clause result */
A_PROC_ENTRY(newolab);
RUUASIM.Next = A68_FALSE;
YFNASIM_newlabel(  &SUUASIM );
RUUASIM.Lab = SUUASIM;
TUUASIM = RUUASIM;
A_PROC_EXIT(newolab);
*ReturnedValue = (TUUASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  VUUASIM_next(A68_431  Label, A68_431  *ReturnedValue)
{ 
A68_431  WUUASIM;  /* collateral clause result */
A68_431  XUUASIM;  /* clause result */
A_PROC_ENTRY(next);
WUUASIM.Next = A68_TRUE;
WUUASIM.Lab = Label.Lab;
XUUASIM = WUUASIM;
A_PROC_EXIT(next);
*ReturnedValue = (XUUASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  ZUUASIM_notnext(A68_431  Label, A68_431  *ReturnedValue)
{ 
A68_431  AVUASIM;  /* collateral clause result */
A68_431  BVUASIM;  /* clause result */
A_PROC_ENTRY(notnext);
AVUASIM.Next = A68_FALSE;
AVUASIM.Lab = Label.Lab;
BVUASIM = AVUASIM;
A_PROC_EXIT(notnext);
*ReturnedValue = (BVUASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  DVUASIM_isnext(A68_431  Label)
{ 
A68_BOOL  EVUASIM;  /* clause result */
A_PROC_ENTRY(isnext);
EVUASIM = Label.Next;
A_PROC_EXIT(isnext);
return( EVUASIM );
} 
#undef NL

A_STATIC A68_BOOL  HVUASIM_(A68_431  A, A68_431  B)
{ 
A68_BOOL  IVUASIM;  /* optbool result */
A68_BOOL  JVUASIM;  /* clause result */
A_PROC_ENTRY(/=);
 /* line 268: */
IVUASIM = (A.Lab.Lab!=B.Lab.Lab);
if ( ! IVUASIM )
{IVUASIM = A_VC_NE(A.Lab.Tag,B.Lab.Tag);
}
JVUASIM = IVUASIM;
A_PROC_EXIT(/=);
return( JVUASIM );
} 
#undef NL

A_STATIC A68_438 * NVUASIM_drop(A68_INT  N, A68_438 * Selector)
{ 
A68_438 * OVUASIM_ans;
A68_INT  PVUASIM;  /* to part of loop */
A68_INT  QVUASIM;  /* loop control */
A68_438 * RVUASIM;  /* clause result */
A_PROC_ENTRY(drop);
 /* line 312: */
 /* line 313: */
{ 
OVUASIM_ans = Selector;
 /* line 314: */
PVUASIM = N;
for ( QVUASIM = 1;
QVUASIM <= PVUASIM;
QVUASIM += 1 )
{ 
OVUASIM_ans = (*(&(OVUASIM_ans->Rest)));
}
 /* line 315: */
 /* line 316: */
RVUASIM = OVUASIM_ans;
} 
A_PROC_EXIT(drop);
return( RVUASIM );
} 
#undef NL
 /* line 327: */

A_STATIC A68_438 * VVUASIM_makeselector(A68_281  Input, A68_429  Inputwires, A68_32  Inputtypes)
{ 
A68_281  WVUASIM;  /* united object - for case conformity */
A68_286 * XVUASIM_name;
A68_438 * YVUASIM_ans;
A68_INT  ZVUASIM_ipno;
A68_INT  AWUASIM_primno;
A68_INT  BWUASIM_i;
A68_INT  CWUASIM;  /* to part of loop */
A68_INT  DWUASIM_i;
A68_INT  EWUASIM;  /* by part of loop */
A68_438  FWUASIM;  /* collateral clause result */
A68_INT  GWUASIM;  /* YIELD */
A68_438 * HWUASIM;  /* YIELD */
A68_438 * IWUASIM;  /* clause result */
A68_296 * JWUASIM_str;
A68_438 * KWUASIM_ans;
A68_438 ** LWUASIM_end;
A68_281  MWUASIM;  /* OPERATORS - mode -> union mode */
A68_296 * NWUASIM;  /* YIELD */
A_PROC_ENTRY(makeselector);
 /* line 328: */
 /* line 329: */
{ 
 /* line 330: */
WVUASIM = Input ;
switch ( WVUASIM.mode )
{ 
case 11: /* REF STRUCT(INT,INT)  */
XVUASIM_name = (WVUASIM.data.mode11);
 /* line 331: */
 /* line 332: */
{ 
YVUASIM_ans = KVUASIM_nilselector;
 /* line 333: */
ZVUASIM_ipno = (*(&(XVUASIM_name->Nameno)));
 /* line 334: */
AWUASIM_primno = 1;
 /* line 335: */
CWUASIM = (ZVUASIM_ipno-1);
for ( BWUASIM_i = 1;
BWUASIM_i <= CWUASIM;
BWUASIM_i += 1 )
{ 
 /* line 336: */
 /* line 337: */
AWUASIM_primno+=A_VINDEX(Inputwires,BWUASIM_i).Blocks.upb;
}
 /* line 338: */
EWUASIM = (-1);
for ( DWUASIM_i = (A_VINDEX(Inputwires,ZVUASIM_ipno).Blocks.upb-1);
( EWUASIM > 0 && DWUASIM_i <= 0) ||
( EWUASIM < 0 && DWUASIM_i >= 0) ||
( EWUASIM == 0 ) ;
DWUASIM_i += EWUASIM )
{ 
 /* line 339: */
 /* line 340: */
FWUASIM.Element.Input = (AWUASIM_primno+DWUASIM_i);
FWUASIM.Element.Offset = 0;
GWUASIM = (AWUASIM_primno+DWUASIM_i) ;
FWUASIM.Element.Type = A_VINDEX(Inputtypes,GWUASIM);
 /* line 341: */
FWUASIM.Rest = YVUASIM_ans;
HWUASIM = A_HEAP(A68_438 ) ;
(*HWUASIM) = FWUASIM ;
YVUASIM_ans = HWUASIM;
}
 /* line 342: */
 /* line 343: */
 /* line 344: */
IWUASIM = YVUASIM_ans;
} 
break;
case 21: /* REF STRUCT(MODE281,REF MODE296)  */
JWUASIM_str = (WVUASIM.data.mode21);
 /* line 345: */
 /* line 346: */
{ 
 /* line 347: */
KWUASIM_ans = VVUASIM_makeselector((*(&(JWUASIM_str->Elem))), Inputwires, Inputtypes);
 /* line 348: */
 /* line 349: */
if ( ((*(&(JWUASIM_str->Rest)))!=IAAATRN_nilustr) )
{ 
LWUASIM_end = (&(KWUASIM_ans->Rest));
 /* line 350: */
for ( ;; )
{ 
if ( !(((*LWUASIM_end)!=KVUASIM_nilselector)) ) break;
LWUASIM_end = (&((*LWUASIM_end)->Rest));
}
 /* line 351: */
 /* line 352: */
 /* line 353: */
NWUASIM = (*(&(JWUASIM_str->Rest))) ;
(*LWUASIM_end) = VVUASIM_makeselector(A_UNITE(MWUASIM,mode21,21,NWUASIM), Inputwires, Inputtypes);
} 
 /* line 354: */
 /* line 355: */
 /* line 356: */
 /* line 357: */
IWUASIM = KWUASIM_ans;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(makeselector);
return( IWUASIM );
} 
#undef NL

A_STATIC A68_438 * SWUASIM_makeassocselector(A68_INT  Type, A68_INT  Altno, A68_INT  Input, A68_INT  Start)
{ 
A68_115  TWUASIM;  /* avoid structure result */
A68_115  UWUASIM_stype;
A68_115  VWUASIM;  /* united object - for case conformity */
A68_117 * WWUASIM_e;
A68_117 * XWUASIM_scan;
A68_INT  YWUASIM;  /* to part of loop */
A68_INT  ZWUASIM;  /* loop control */
A68_115  AXUASIM;  /* clause result */
A68_115  BXUASIM_atype;
A68_123 * CXUASIM_flat;
A68_INT  DXUASIM_offset;
A68_438 * EXUASIM_ans;
A68_438 ** FXUASIM_end;
A68_116  GXUASIM;  /* procedure value */
A68_INT  HXUASIM_thistype;
A68_438  IXUASIM;  /* collateral clause result */
A68_438 * JXUASIM;  /* YIELD */
A68_438 * KXUASIM;  /* clause result */
A_PROC_ENTRY(makeassocselector);
 /* line 366: */
 /* line 367: */
{ 
VGCASIM_lookuptype( Type, &TWUASIM );
UWUASIM_stype = TWUASIM;
 /* line 368: */
 /* line 369: */
VWUASIM = UWUASIM_stype ;
switch ( VWUASIM.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,MODE115,REF MODE117)  */
WWUASIM_e = (VWUASIM.data.mode1);
 /* line 370: */
 /* line 371: */
{ 
XWUASIM_scan = WWUASIM_e;
 /* line 372: */
YWUASIM = (Altno-1);
for ( ZWUASIM = 1;
ZWUASIM <= YWUASIM;
ZWUASIM += 1 )
{ 
 /* line 373: */
 /* line 374: */
XWUASIM_scan = (*(&(XWUASIM_scan->Rest)));
}
 /* line 375: */
 /* line 376: */
 /* line 377: */
AXUASIM = (*(&(XWUASIM_scan->T)));
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
BXUASIM_atype = AXUASIM;
 /* line 378: */
CXUASIM_flat = ABOASIM_flattentype(BXUASIM_atype);
 /* line 379: */
DXUASIM_offset = Start;
 /* line 380: */
EXUASIM_ans = KVUASIM_nilselector;
 /* line 381: */
FXUASIM_end = (&EXUASIM_ans);
 /* line 382: */
for ( ;; )
{ 
 /* line 383: */
if ( !((CXUASIM_flat!=WSAASIM_nilsst)) ) break;
GXUASIM.fn.fn_global = NZNASIM_machinewidth;
GXUASIM.nonlocals = A68_NIL;
HXUASIM_thistype = ZFCASIM_addtype((*(&(CXUASIM_flat->T))), GXUASIM);
 /* line 384: */
 /* line 385: */
IXUASIM.Element.Input = Input;
IXUASIM.Element.Offset = DXUASIM_offset;
IXUASIM.Element.Type = HXUASIM_thistype;
IXUASIM.Rest = KVUASIM_nilselector;
JXUASIM = A_HEAP(A68_438 ) ;
(*JXUASIM) = IXUASIM ;
(*FXUASIM_end) = JXUASIM;
 /* line 386: */
FXUASIM_end = (&((*FXUASIM_end)->Rest));
 /* line 387: */
DXUASIM_offset+=YGCASIM_lookuptypesize(HXUASIM_thistype);
 /* line 388: */
 /* line 389: */
CXUASIM_flat = (*(&(CXUASIM_flat->Rest)));
}
 /* line 390: */
 /* line 391: */
KXUASIM = EXUASIM_ans;
} 
A_PROC_EXIT(makeassocselector);
return( KXUASIM );
} 
#undef NL

A_STATIC A68_INT  MXUASIM_width(A68_281  Pattern)
{ 
A68_281  NXUASIM;  /* united object - for case conformity */
A68_309 * OXUASIM_taut;
A68_INT  PXUASIM;  /* clause result */
A68_296 * QXUASIM_str;
A68_296 * RXUASIM_scan;
A68_INT  SXUASIM_size;
A68_285 * TXUASIM_alts;
A_PROC_ENTRY(width);
 /* line 430: */
 /* line 431: */
NXUASIM = Pattern ;
switch ( NXUASIM.mode )
{ 
case 34: /* REF STRUCT(INT)  */
OXUASIM_taut = (NXUASIM.data.mode34);
 /* line 432: */
PXUASIM = (*(&(OXUASIM_taut->Unull)));
break;
case 21: /* REF STRUCT(MODE281,REF MODE296)  */
QXUASIM_str = (NXUASIM.data.mode21);
 /* line 433: */
 /* line 434: */
{ 
RXUASIM_scan = QXUASIM_str;
 /* line 435: */
SXUASIM_size = 0;
 /* line 436: */
for ( ;; )
{ 
 /* line 437: */
if ( !((RXUASIM_scan!=IAAATRN_nilustr)) ) break;
SXUASIM_size+=MXUASIM_width((*(&(RXUASIM_scan->Elem))));
 /* line 438: */
 /* line 439: */
RXUASIM_scan = (*(&(RXUASIM_scan->Rest)));
}
 /* line 440: */
 /* line 441: */
 /* line 442: */
PXUASIM = SXUASIM_size;
} 
break;
case 10: /* REF STRUCT(MODE281,REF MODE285)  */
TXUASIM_alts = (NXUASIM.data.mode10);
 /* line 444: */
 /* line 446: */
PXUASIM = MXUASIM_width((*(&(TXUASIM_alts->Alt))));
break;
default: 
PXUASIM = 1;
break;
} 
A_PROC_EXIT(width);
return( PXUASIM );
} 
#undef NL

A_STATIC A68_VOID  XXUASIM_simplifypattern(A68_281  Pattern, A68_360  Environ, A68_370 * Closure, A68_281  *ReturnedValue)
{ 
A68_281  YXUASIM;  /* united object - for case conformity */
A68_283 * ZXUASIM_cv;
A68_309 * AYUASIM_cans;
A68_INT * BYUASIM;  /* YIELD */
A68_281  CYUASIM;  /* clause result */
A68_281  DYUASIM;  /* OPERATORS - mode -> union mode */
A68_264 * EYUASIM_ctype;
A68_115  FYUASIM;  /* avoid structure result */
A68_115  GYUASIM_stype;
A68_123 * HYUASIM_flat;
A68_INT  IYUASIM_size;
A68_309 * JYUASIM_ans;
A68_INT * KYUASIM;  /* YIELD */
A68_281  LYUASIM;  /* OPERATORS - mode -> union mode */
A68_288 * MYUASIM_ass;
A68_288  NYUASIM;  /* collateral clause result */
A68_281  OYUASIM;  /* avoid structure result */
A68_288 * PYUASIM;  /* YIELD */
A68_281  QYUASIM;  /* OPERATORS - mode -> union mode */
A68_295 * RYUASIM_row;
A68_281  SYUASIM;  /* avoid structure result */
A68_281  TYUASIM_t;
A68_281  UYUASIM;  /* united object - for case conformity */
A68_309 * VYUASIM_taut;
A68_INT * WYUASIM;  /* YIELD */
A68_296 * XYUASIM_ans;
A68_INT  YYUASIM;  /* to part of loop */
A68_INT  ZYUASIM;  /* loop control */
A68_296  AZUASIM;  /* collateral clause result */
A68_296 * BZUASIM;  /* YIELD */
A68_281  CZUASIM;  /* OPERATORS - mode -> union mode */
A68_308 * DZUASIM_string;
A68_281  EZUASIM;  /* avoid structure result */
A68_281  FZUASIM_t;
A68_281  GZUASIM;  /* united object - for case conformity */
A68_309 * HZUASIM_taut;
A68_281  IZUASIM;  /* OPERATORS - mode -> union mode */
A68_296 * JZUASIM_str;
A68_296 * KZUASIM_scan;
A68_296 * LZUASIM_ans;
A68_296 ** MZUASIM_end;
A68_BOOL  NZUASIM_tautology;
A68_INT  OZUASIM_size;
A68_281  PZUASIM;  /* avoid structure result */
A68_281  QZUASIM_t;
A68_281  RZUASIM;  /* united object - for case conformity */
A68_309 * SZUASIM_taut;
A68_296  TZUASIM;  /* collateral clause result */
A68_296 * UZUASIM;  /* YIELD */
A68_309 * VZUASIM_cn;
A68_INT * WZUASIM;  /* YIELD */
A68_281  XZUASIM;  /* OPERATORS - mode -> union mode */
A68_281  YZUASIM;  /* OPERATORS - mode -> union mode */
A68_285 * ZZUASIM_alts;
A68_285 * AAVASIM_scan;
A68_285 * BAVASIM_ans;
A68_285 * CAVASIM_last;
A68_285 ** DAVASIM_end;
A68_BOOL  EAVASIM_tautology;
A68_281  FAVASIM;  /* avoid structure result */
A68_281  GAVASIM_t;
A68_281  HAVASIM;  /* united object - for case conformity */
A68_309 * IAVASIM_taut;
A68_285  JAVASIM;  /* collateral clause result */
A68_285 * KAVASIM;  /* YIELD */
A68_281  LAVASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(simplifypattern);
 /* line 469: */
 /* line 470: */
YXUASIM = Pattern ;
switch ( YXUASIM.mode )
{ 
case 6: /* REF STRUCT(INT)  */
ZXUASIM_cv = (YXUASIM.data.mode6);
 /* line 471: */
 /* line 472: */
{ 
AYUASIM_cans = (A_HEAP(A68_309 ));
 /* line 473: */
BYUASIM = (&(AYUASIM_cans->Unull)) ;
(*BYUASIM) = 1;
 /* line 474: */
 /* line 475: */
 /* line 476: */
CYUASIM = A_UNITE(DYUASIM,mode34,34,AYUASIM_cans);
} 
break;
case 7: /* REF STRUCT(MODE259)  */
EYUASIM_ctype = (YXUASIM.data.mode7);
 /* line 477: */
 /* line 478: */
{ 
SUBASIM_converttype( (*(&(EYUASIM_ctype->Type))), Environ, Closure, &FYUASIM );
GYUASIM_stype = FYUASIM;
 /* line 479: */
HYUASIM_flat = ABOASIM_flattentype(GYUASIM_stype);
 /* line 480: */
IYUASIM_size = 0;
 /* line 481: */
for ( ;; )
{ 
 /* line 482: */
if ( !((HYUASIM_flat!=WSAASIM_nilsst)) ) break;
IYUASIM_size+=1;
 /* line 483: */
 /* line 484: */
HYUASIM_flat = (*(&(HYUASIM_flat->Rest)));
}
 /* line 485: */
JYUASIM_ans = (A_HEAP(A68_309 ));
 /* line 486: */
KYUASIM = (&(JYUASIM_ans->Unull)) ;
(*KYUASIM) = IYUASIM_size;
 /* line 487: */
 /* line 488: */
 /* line 489: */
CYUASIM = A_UNITE(LYUASIM,mode34,34,JYUASIM_ans);
} 
break;
case 13: /* REF STRUCT(INT,INT,MODE281)  */
MYUASIM_ass = (YXUASIM.data.mode13);
 /* line 490: */
 /* line 491: */
NYUASIM.Typeno = (*(&(MYUASIM_ass->Typeno)));
 /* line 492: */
NYUASIM.Altno = (*(&(MYUASIM_ass->Altno)));
XXUASIM_simplifypattern( (*(&(MYUASIM_ass->Assoc))), Environ, Closure, &OYUASIM );
NYUASIM.Assoc = OYUASIM;
 /* line 493: */
PYUASIM = A_HEAP(A68_288 ) ;
(*PYUASIM) = NYUASIM ;
CYUASIM = A_UNITE(QYUASIM,mode13,13,PYUASIM);
break;
case 20: /* REF STRUCT(MODE243,MODE281)  */
RYUASIM_row = (YXUASIM.data.mode20);
 /* line 494: */
 /* line 495: */
{ 
XXUASIM_simplifypattern( (*(&(RYUASIM_row->Elem))), Environ, Closure, &SYUASIM );
TYUASIM_t = SYUASIM;
 /* line 496: */
 /* line 497: */
UYUASIM = TYUASIM_t ;
switch ( UYUASIM.mode )
{ 
case 34: /* REF STRUCT(INT)  */
VYUASIM_taut = (UYUASIM.data.mode34);
{ 
WYUASIM = (&(VYUASIM_taut->Unull)) ;
(*WYUASIM)*=XOMATRN_int((*(&(RYUASIM_row->Size))));
 /* line 498: */
 /* line 499: */
CYUASIM = TYUASIM_t;
} 
break;
default: 
XYUASIM_ans = IAAATRN_nilustr;
 /* line 500: */
YYUASIM = XOMATRN_int((*(&(RYUASIM_row->Size))));
for ( ZYUASIM = 1;
ZYUASIM <= YYUASIM;
ZYUASIM += 1 )
{ 
 /* line 501: */
AZUASIM.Elem = TYUASIM_t;
 /* line 502: */
AZUASIM.Rest = XYUASIM_ans;
BZUASIM = A_HEAP(A68_296 ) ;
(*BZUASIM) = AZUASIM ;
XYUASIM_ans = BZUASIM;
}
 /* line 503: */
 /* line 504: */
 /* line 505: */
 /* line 506: */
CYUASIM = A_UNITE(CZUASIM,mode21,21,XYUASIM_ans);
break;
} 
} 
break;
case 33: /* REF STRUCT(MODE243,MODE281)  */
DZUASIM_string = (YXUASIM.data.mode33);
 /* line 507: */
 /* line 508: */
{ 
XXUASIM_simplifypattern( (*(&(DZUASIM_string->Char))), Environ, Closure, &EZUASIM );
FZUASIM_t = EZUASIM;
 /* line 509: */
 /* line 510: */
GZUASIM = FZUASIM_t ;
switch ( GZUASIM.mode )
{ 
case 34: /* REF STRUCT(INT)  */
HZUASIM_taut = (GZUASIM.data.mode34);
 /* line 511: */
 /* line 513: */
CYUASIM = FZUASIM_t;
break;
default: 
 /* line 514: */
 /* line 515: */
CYUASIM = A_UNITE(IZUASIM,mode33,33,DZUASIM_string);
break;
} 
} 
break;
case 21: /* REF STRUCT(MODE281,REF MODE296)  */
JZUASIM_str = (YXUASIM.data.mode21);
 /* line 516: */
 /* line 517: */
{ 
KZUASIM_scan = JZUASIM_str;
 /* line 518: */
LZUASIM_ans = IAAATRN_nilustr;
 /* line 519: */
MZUASIM_end = (&LZUASIM_ans);
 /* line 520: */
NZUASIM_tautology = A68_TRUE;
 /* line 521: */
OZUASIM_size = 0;
 /* line 522: */
for ( ;; )
{ 
 /* line 523: */
if ( !((KZUASIM_scan!=IAAATRN_nilustr)) ) break;
XXUASIM_simplifypattern( (*(&(KZUASIM_scan->Elem))), Environ, Closure, &PZUASIM );
QZUASIM_t = PZUASIM;
 /* line 524: */
 /* line 525: */
RZUASIM = QZUASIM_t ;
switch ( RZUASIM.mode )
{ 
case 34: /* REF STRUCT(INT)  */
SZUASIM_taut = (RZUASIM.data.mode34);
 /* line 526: */
 /* line 527: */
OZUASIM_size+=(*(&(SZUASIM_taut->Unull)));
break;
default: 
NZUASIM_tautology = A68_FALSE;
 /* line 528: */
 /* line 529: */
OZUASIM_size+=MXUASIM_width(QZUASIM_t);
break;
} 
 /* line 530: */
TZUASIM.Elem = QZUASIM_t;
TZUASIM.Rest = IAAATRN_nilustr;
UZUASIM = A_HEAP(A68_296 ) ;
(*UZUASIM) = TZUASIM ;
(*MZUASIM_end) = UZUASIM;
 /* line 531: */
MZUASIM_end = (&((*MZUASIM_end)->Rest));
 /* line 532: */
 /* line 533: */
KZUASIM_scan = (*(&(KZUASIM_scan->Rest)));
}
 /* line 534: */
 /* line 535: */
if ( NZUASIM_tautology )
{ 
VZUASIM_cn = (A_HEAP(A68_309 ));
 /* line 536: */
WZUASIM = (&(VZUASIM_cn->Unull)) ;
(*WZUASIM) = OZUASIM_size;
 /* line 537: */
 /* line 538: */
 /* line 539: */
CYUASIM = A_UNITE(XZUASIM,mode34,34,VZUASIM_cn);
} 
else
{ 
 /* line 540: */
 /* line 541: */
CYUASIM = A_UNITE(YZUASIM,mode21,21,LZUASIM_ans);
} 
} 
break;
case 10: /* REF STRUCT(MODE281,REF MODE285)  */
ZZUASIM_alts = (YXUASIM.data.mode10);
 /* line 542: */
 /* line 543: */
{ 
AAVASIM_scan = ZZUASIM_alts;
 /* line 544: */
BAVASIM_ans = HAAATRN_nilualts;
 /* line 545: */
CAVASIM_last = HAAATRN_nilualts;
 /* line 546: */
DAVASIM_end = (&BAVASIM_ans);
 /* line 547: */
EAVASIM_tautology = A68_FALSE;
 /* line 548: */
for ( ;; )
{ 
 /* line 549: */
if ( !(((AAVASIM_scan!=HAAATRN_nilualts)&!EAVASIM_tautology)) ) break;
XXUASIM_simplifypattern( (*(&(AAVASIM_scan->Alt))), Environ, Closure, &FAVASIM );
GAVASIM_t = FAVASIM;
 /* line 550: */
 /* line 551: */
HAVASIM = GAVASIM_t ;
switch ( HAVASIM.mode )
{ 
case 34: /* REF STRUCT(INT)  */
IAVASIM_taut = (HAVASIM.data.mode34);
 /* line 552: */
 /* line 554: */
EAVASIM_tautology = A68_TRUE;
break;
default: 
/*SKIP*/;
break;
} 
 /* line 555: */
JAVASIM.Alt = GAVASIM_t;
JAVASIM.Rest = HAAATRN_nilualts;
KAVASIM = A_HEAP(A68_285 ) ;
(*KAVASIM) = JAVASIM ;
(*DAVASIM_end) = CAVASIM_last = KAVASIM;
 /* line 556: */
DAVASIM_end = (&((*DAVASIM_end)->Rest));
 /* line 557: */
 /* line 558: */
AAVASIM_scan = (*(&(AAVASIM_scan->Rest)));
}
 /* line 559: */
 /* line 565: */
if ( EAVASIM_tautology )
{ 
 /* line 566: */
CYUASIM = (*(&(CAVASIM_last->Alt)));
} 
else
{ 
 /* line 567: */
 /* line 568: */
 /* line 570: */
CYUASIM = A_UNITE(LAVASIM,mode10,10,BAVASIM_ans);
} 
} 
break;
default: 
CYUASIM = Pattern;
break;
} 
A_PROC_EXIT(simplifypattern);
*ReturnedValue = (CYUASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  NAVASIM_sometaut(A68_281  Pattern)
{ 
A68_281  OAVASIM;  /* united object - for case conformity */
A68_BOOL  PAVASIM;  /* clause result */
A68_288 * QAVASIM_ass;
A68_296 * RAVASIM_str;
A68_BOOL  SAVASIM;  /* optbool result */
A68_281  TAVASIM;  /* OPERATORS - mode -> union mode */
A68_296 * UAVASIM;  /* YIELD */
A68_285 * VAVASIM_alts;
A68_BOOL  WAVASIM;  /* optbool result */
A68_281  XAVASIM;  /* OPERATORS - mode -> union mode */
A68_285 * YAVASIM;  /* YIELD */
A_PROC_ENTRY(sometaut);
 /* line 583: */
 /* line 584: */
OAVASIM = Pattern ;
switch ( OAVASIM.mode )
{ 
case 34: /* REF STRUCT(INT)  */
 /* line 585: */
PAVASIM = A68_TRUE;
break;
case 13: /* REF STRUCT(INT,INT,MODE281)  */
QAVASIM_ass = (OAVASIM.data.mode13);
 /* line 586: */
PAVASIM = NAVASIM_sometaut((*(&(QAVASIM_ass->Assoc))));
break;
case 21: /* REF STRUCT(MODE281,REF MODE296)  */
RAVASIM_str = (OAVASIM.data.mode21);
if ( (RAVASIM_str==IAAATRN_nilustr) )
{ 
 /* line 587: */
 /* line 588: */
PAVASIM = A68_FALSE;
} 
else
{ 
SAVASIM = NAVASIM_sometaut((*(&(RAVASIM_str->Elem))));
if ( ! SAVASIM )
{ /* line 589: */
UAVASIM = (*(&(RAVASIM_str->Rest))) ;
SAVASIM = NAVASIM_sometaut(A_UNITE(TAVASIM,mode21,21,UAVASIM));
}
 /* line 590: */
PAVASIM = SAVASIM;
} 
break;
case 10: /* REF STRUCT(MODE281,REF MODE285)  */
VAVASIM_alts = (OAVASIM.data.mode10);
if ( (VAVASIM_alts==HAAATRN_nilualts) )
{ 
 /* line 591: */
 /* line 592: */
PAVASIM = A68_FALSE;
} 
else
{ 
WAVASIM = NAVASIM_sometaut((*(&(VAVASIM_alts->Alt))));
if ( ! WAVASIM )
{ /* line 593: */
YAVASIM = (*(&(VAVASIM_alts->Rest))) ;
WAVASIM = NAVASIM_sometaut(A_UNITE(XAVASIM,mode10,10,YAVASIM));
}
 /* line 594: */
 /* line 595: */
PAVASIM = WAVASIM;
} 
break;
default: 
 /* line 596: */
PAVASIM = A68_FALSE;
break;
} 
A_PROC_EXIT(sometaut);
return( PAVASIM );
} 
#undef NL

A_STATIC A68_VOID  BBVASIM_locate(A68_INT  Input, A68_INT  D)
{ 
A_PROC_ENTRY(locate);
 /* line 617: */
 /* line 618: */
{ 
WUNASIM_amlocal((D-1));
 /* line 619: */
QUNASIM_ampushint(((Input*DENASIM_ws)+GENASIM_sizeunit));
 /* line 620: */
SSNASIM_amadd();
 /* line 621: */
 /* line 622: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
} 
A_PROC_EXIT(locate);
return;
} 
#undef NL

A_STATIC A68_VOID  EBVASIM_fetchint(A68_INT  Offset, A68_INT  Size)
{ 
A_PROC_ENTRY(fetchint);
 /* line 629: */
 /* line 630: */
{ 
 /* line 631: */
if ( (Offset>0) )
{ 
QUNASIM_ampushint(Offset);
 /* line 632: */
 /* line 633: */
SSNASIM_amadd();
} 
 /* line 634: */
 /* line 635: */
AVNASIM_amglobal(Size, ONFASIM_indirect);
} 
A_PROC_EXIT(fetchint);
return;
} 
#undef NL

A_STATIC A68_VOID  HBVASIM_fetchstring(A68_INT  Offset, A68_INT  Size)
{ 
A_PROC_ENTRY(fetchstring);
 /* line 642: */
 /* line 643: */
{ 
 /* line 644: */
if ( (Offset>0) )
{ 
QUNASIM_ampushint(Offset);
 /* line 645: */
 /* line 646: */
SSNASIM_amadd();
} 
 /* line 647: */
 /* line 648: */
LVNASIM_ambstring(Size, Size, ONFASIM_indirect);
} 
A_PROC_EXIT(fetchstring);
return;
} 
#undef NL

A_STATIC A68_VOID  OBVASIM_simpleenumtest(A68_INT  Input, A68_INT  Offset, A68_INT  D, A68_INT  Compare, A68_431  Q, A68_431  T)
{ 
A_PROC_ENTRY(simpleenumtest);
 /* line 657: */
 /* line 658: */
{ 
BBVASIM_locate(Input, D);
 /* line 659: */
EBVASIM_fetchint(Offset, GENASIM_sizeunit);
 /* line 660: */
WUNASIM_amlocal(0);
 /* line 661: */
QUNASIM_ampushint(Compare);
 /* line 662: */
UTNASIM_amneq();
 /* line 663: */
IWNASIM_amjumpno(1, T.Lab);
 /* line 664: */
QTNASIM_amtest();
 /* line 665: */
 /* line 666: */
IWNASIM_amjumpno(0, Q.Lab);
} 
A_PROC_EXIT(simpleenumtest);
return;
} 
#undef NL

A_STATIC A68_VOID  VBVASIM_enumtest(A68_INT  Input, A68_INT  Offset, A68_INT  D, A68_INT  Compare, A68_431  Q, A68_431  F)
{ 
A_PROC_ENTRY(enumtest);
 /* line 675: */
 /* line 676: */
{ 
BBVASIM_locate(Input, D);
 /* line 677: */
EBVASIM_fetchint(Offset, GENASIM_sizeunit);
 /* line 678: */
WUNASIM_amlocal(0);
 /* line 679: */
QTNASIM_amtest();
 /* line 680: */
IWNASIM_amjumpno(1, Q.Lab);
 /* line 681: */
QUNASIM_ampushint(Compare);
 /* line 682: */
STNASIM_ameq();
 /* line 683: */
 /* line 684: */
IWNASIM_amjumpno(0, F.Lab);
} 
A_PROC_EXIT(enumtest);
return;
} 
#undef NL

A_STATIC A68_VOID  DCVASIM_enumrangetest(A68_INT  Input, A68_INT  Offset, A68_INT  D, A68_INT  Lwb, A68_INT  Upb, A68_431  Q, A68_431  T)
{ 
A68_165  ECVASIM;  /* avoid structure result */
A68_165  FCVASIM_maybequery;
A_PROC_ENTRY(enumrangetest);
 /* line 694: */
 /* line 695: */
{ 
YFNASIM_newlabel(  &ECVASIM );
FCVASIM_maybequery = ECVASIM;
 /* line 696: */
BBVASIM_locate(Input, D);
 /* line 697: */
EBVASIM_fetchint(Offset, GENASIM_sizeunit);
 /* line 698: */
WUNASIM_amlocal(0);
 /* line 699: */
QUNASIM_ampushint(Lwb);
 /* line 700: */
YTNASIM_amge();
 /* line 701: */
IWNASIM_amjumpno(0, FCVASIM_maybequery);
 /* line 702: */
WUNASIM_amlocal(0);
 /* line 703: */
QUNASIM_ampushint(Upb);
 /* line 704: */
WTNASIM_amgt();
 /* line 705: */
IWNASIM_amjumpno(1, T.Lab);
 /* line 706: */
NWNASIM_amlabel((D+1), FCVASIM_maybequery);
 /* line 707: */
QTNASIM_amtest();
 /* line 708: */
 /* line 709: */
IWNASIM_amjumpno(0, Q.Lab);
} 
A_PROC_EXIT(enumrangetest);
return;
} 
#undef NL

A_STATIC A68_VOID  MCVASIM_inttest(A68_INT  Input, A68_INT  Offset, A68_INT  D, A68_INT  Compare, A68_431  Q, A68_431  F)
{ 
A_PROC_ENTRY(inttest);
 /* line 719: */
 /* line 720: */
{ 
BBVASIM_locate(Input, D);
 /* line 721: */
WUNASIM_amlocal(0);
 /* line 722: */
EBVASIM_fetchint(Offset, GENASIM_sizeunit);
 /* line 723: */
QTNASIM_amtest();
 /* line 724: */
IWNASIM_amjumpno(1, Q.Lab);
 /* line 725: */
EBVASIM_fetchint((Offset+GENASIM_sizeunit), DENASIM_ws);
 /* line 726: */
QUNASIM_ampushint(Compare);
 /* line 727: */
STNASIM_ameq();
 /* line 728: */
 /* line 729: */
IWNASIM_amjumpno(0, F.Lab);
} 
A_PROC_EXIT(inttest);
return;
} 
#undef NL

A_STATIC A68_VOID  UCVASIM_rangetest(A68_INT  Input, A68_INT  Offset, A68_INT  D, A68_INT  Lwb, A68_INT  Upb, A68_431  Q, A68_431  F)
{ 
A_PROC_ENTRY(rangetest);
 /* line 739: */
 /* line 740: */
{ 
BBVASIM_locate(Input, D);
 /* line 741: */
WUNASIM_amlocal(0);
 /* line 742: */
EBVASIM_fetchint(Offset, GENASIM_sizeunit);
 /* line 743: */
QTNASIM_amtest();
 /* line 744: */
IWNASIM_amjumpno(1, Q.Lab);
 /* line 745: */
EBVASIM_fetchint((Offset+GENASIM_sizeunit), DENASIM_ws);
 /* line 746: */
WUNASIM_amlocal(0);
 /* line 747: */
QUNASIM_ampushint(Lwb);
 /* line 748: */
YTNASIM_amge();
 /* line 749: */
IWNASIM_amjumpno(1, F.Lab);
 /* line 750: */
QUNASIM_ampushint(Upb);
 /* line 751: */
CUNASIM_amle();
 /* line 752: */
 /* line 753: */
IWNASIM_amjumpno(0, F.Lab);
} 
A_PROC_EXIT(rangetest);
return;
} 
#undef NL
 /* line 764: */

A_STATIC A68_VOID  CDVASIM_stringtest(A68_INT  Input, A68_INT  Offset, A68_INT  Size, A68_INT  D, A68_VC  Compare, A68_431  Q, A68_431  F)
{ 
A68_VC  EDVASIM;  /* avoid structure result */
A68_VC  DDVASIM_w;
A_PROC_ENTRY(stringtest);
 /* line 765: */
 /* line 766: */
{ 
QUNASIM_ampushint(0);
 /* line 767: */
BBVASIM_locate(Input, (D+1));
 /* line 768: */
WUNASIM_amlocal(0);
 /* line 769: */
EBVASIM_fetchint(Offset, GENASIM_sizeunit);
 /* line 770: */
QTNASIM_amtest();
 /* line 771: */
IWNASIM_amjumpno(2, Q.Lab);
 /* line 772: */
HBVASIM_fetchstring((Offset+GENASIM_sizeunit), Size);
 /* line 773: */
RSCAOST_makeid( Compare, &EDVASIM );
DDVASIM_w = EDVASIM;
A_CALLPROC(FENASIM_up,(DDVASIM_w),(DDVASIM_w,(FENASIM_up).nonlocals));
 /* line 782: */
MUNASIM_ampushstring(Size, DDVASIM_w);
 /* line 783: */
STNASIM_ameq();
 /* line 784: */
 /* line 785: */
IWNASIM_amjumpno(0, F.Lab);
} 
A_PROC_EXIT(stringtest);
return;
} 
#undef NL

A_STATIC A68_VOID  HDVASIM_nulltest(A68_431  T, A68_BOOL  Do, A68_431  *ReturnedValue)
{ 
A68_431  IDVASIM;  /* clause result */
A68_431  JDVASIM;  /* avoid structure result */
A_PROC_ENTRY(nulltest);
 /* line 809: */
 /* line 810: */
{ 
 /* line 811: */
if ( (Do&!DVUASIM_isnext(T)) )
{ 
 /* line 812: */
EWNASIM_amjump(T.Lab);
} 
 /* line 813: */
 /* line 814: */
ZUUASIM_notnext( T, &JDVASIM );
IDVASIM = JDVASIM;
} 
A_PROC_EXIT(nulltest);
*ReturnedValue = (IDVASIM);
return;
} 
#undef NL
 /* line 834: */

A_STATIC A68_VOID  RDVASIM_casetest(A68_438 * Selector, A68_281  Pattern, A68_431  Q, A68_431  F, A68_431  T, A68_360  Environ, A68_370 * Closure)
{ 
A68_450  SDVASIM_match;
A68_451  AEVASIM_elementtest;   /* proc value of non-global proc */
A68_453  AGVASIM_fchain;   /* proc value of non-global proc */
A68_456  OHVASIM_dqchain;   /* proc value of non-global proc */
A68_460  NJVASIM_disjoin;   /* proc value of non-global proc */
A68_461  KKVASIM_tchain;   /* proc value of non-global proc */
A68_464  RMVASIM_cqchain;   /* proc value of non-global proc */
A68_468  OPVASIM_conjoin;   /* proc value of non-global proc */
A68_450  OQVASIM_anonymous;   /* proc value of non-global proc */
A68_281  YQVASIM;  /* united object - for case conformity */
A68_431  ZQVASIM;  /* avoid structure result */
A68_431  ARVASIM;  /* avoid structure result */
A_PROC_ENTRY(casetest);
 /* line 835: */
 /* line 837: */
{ 
 /* line 856: */
A_CLOSURE( AEVASIM_elementtest, BEVASIM_elementtest, CEVASIM_elementtest );
(( CEVASIM_elementtest * ) ( AEVASIM_elementtest.nonlocals )) -> Environ = Environ;
(( CEVASIM_elementtest * ) ( AEVASIM_elementtest.nonlocals )) -> Closure = Closure;
 /* line 966: */
A_CLOSURE( AGVASIM_fchain, BGVASIM_fchain, CGVASIM_fchain );
(( CGVASIM_fchain * ) ( AGVASIM_fchain.nonlocals )) -> SDVASIM_match = (&SDVASIM_match);
 /* line 1005: */
A_CLOSURE( OHVASIM_dqchain, PHVASIM_dqchain, QHVASIM_dqchain );
(( QHVASIM_dqchain * ) ( OHVASIM_dqchain.nonlocals )) -> SDVASIM_match = (&SDVASIM_match);
 /* line 1044: */
 /* line 1056: */
A_CLOSURE( NJVASIM_disjoin, OJVASIM_disjoin, PJVASIM_disjoin );
(( PJVASIM_disjoin * ) ( NJVASIM_disjoin.nonlocals )) -> OHVASIM_dqchain = OHVASIM_dqchain;
(( PJVASIM_disjoin * ) ( NJVASIM_disjoin.nonlocals )) -> AGVASIM_fchain = AGVASIM_fchain;
 /* line 1119: */
A_CLOSURE( KKVASIM_tchain, LKVASIM_tchain, MKVASIM_tchain );
(( MKVASIM_tchain * ) ( KKVASIM_tchain.nonlocals )) -> SDVASIM_match = (&SDVASIM_match);
 /* line 1181: */
A_CLOSURE( RMVASIM_cqchain, SMVASIM_cqchain, TMVASIM_cqchain );
(( TMVASIM_cqchain * ) ( RMVASIM_cqchain.nonlocals )) -> SDVASIM_match = (&SDVASIM_match);
 /* line 1250: */
 /* line 1262: */
A_CLOSURE( OPVASIM_conjoin, PPVASIM_conjoin, QPVASIM_conjoin );
(( QPVASIM_conjoin * ) ( OPVASIM_conjoin.nonlocals )) -> RMVASIM_cqchain = RMVASIM_cqchain;
(( QPVASIM_conjoin * ) ( OPVASIM_conjoin.nonlocals )) -> KKVASIM_tchain = KKVASIM_tchain;
 /* line 1300: */
A_CLOSURE( OQVASIM_anonymous, PQVASIM_anonymous, QQVASIM_anonymous );
(( QQVASIM_anonymous * ) ( OQVASIM_anonymous.nonlocals )) -> NJVASIM_disjoin = NJVASIM_disjoin;
(( QQVASIM_anonymous * ) ( OQVASIM_anonymous.nonlocals )) -> OPVASIM_conjoin = OPVASIM_conjoin;
(( QQVASIM_anonymous * ) ( OQVASIM_anonymous.nonlocals )) -> AEVASIM_elementtest = AEVASIM_elementtest;
SDVASIM_match = OQVASIM_anonymous;
 /* line 1311: */
 /* line 1312: */
YQVASIM = Pattern ;
switch ( YQVASIM.mode )
{ 
case 34: /* REF STRUCT(INT)  */
 /* line 1313: */
 /* line 1314: */
HDVASIM_nulltest( T, A68_TRUE, &ZQVASIM );
ZQVASIM;
break;
default: 
 /* line 1315: */
 /* line 1318: */
A_CALLPROC(SDVASIM_match,(Selector, Pattern, Q, F, T, A68_TRUE, &ARVASIM),(Selector, Pattern, Q, F, T, A68_TRUE, &ARVASIM,(SDVASIM_match).nonlocals));
ARVASIM;
break;
} 
} 
A_PROC_EXIT(casetest);
return;
} 
#undef NL
 /* line 1331: */
 /* line 1332: */
 /* line 1333: */
 /* line 1334: */

A_STATIC A68_VOID  JRVASIM_translatecasebody(A68_438 * Selector, A68_341 * Choices, A68_429  Inputwires, A68_32  Inputtypes, A68_INT  Outputoffset, A68_INT  Outputtype, A68_360  Environ, A68_370 * Closure)
{ 
A68_431  KRVASIM;  /* avoid structure result */
A68_431  LRVASIM;  /* avoid structure result */
A68_431  MRVASIM_queryarm;
A68_431  NRVASIM;  /* avoid structure result */
A68_431  ORVASIM;  /* avoid structure result */
A68_431  PRVASIM_endcase;
A68_341 * QRVASIM_scan;
A68_431  RRVASIM;  /* avoid structure result */
A68_431  SRVASIM;  /* avoid structure result */
A68_431  TRVASIM_thisarm;
A68_431  URVASIM;  /* avoid structure result */
A68_431  VRVASIM;  /* avoid structure result */
A68_431  WRVASIM_nexttest;
A68_281  XRVASIM;  /* avoid structure result */
A68_281  YRVASIM_pattern;
A68_INT  ZRVASIM_datasize;
A68_165  CSVASIM;  /* avoid structure result */
A_PROC_ENTRY(translatecasebody);
 /* line 1335: */
 /* line 1337: */
{ 
QUUASIM_newolab(  &KRVASIM );
ZUUASIM_notnext( KRVASIM, &LRVASIM );
MRVASIM_queryarm = LRVASIM;
 /* line 1338: */
QUUASIM_newolab(  &NRVASIM );
ZUUASIM_notnext( NRVASIM, &ORVASIM );
PRVASIM_endcase = ORVASIM;
 /* line 1339: */
QRVASIM_scan = Choices;
 /* line 1341: */
for ( ;; )
{ 
 /* line 1342: */
if ( !((QRVASIM_scan!=JAAATRN_niluchoices)) ) break;
QUUASIM_newolab(  &RRVASIM );
VUUASIM_next( RRVASIM, &SRVASIM );
TRVASIM_thisarm = SRVASIM;
 /* line 1343: */
QUUASIM_newolab(  &URVASIM );
ZUUASIM_notnext( URVASIM, &VRVASIM );
WRVASIM_nexttest = VRVASIM;
 /* line 1344: */
XXUASIM_simplifypattern( (*(&(QRVASIM_scan->Test))), Environ, Closure, &XRVASIM );
YRVASIM_pattern = XRVASIM;
 /* line 1345: */
 /* line 1346: */
RDVASIM_casetest(Selector, YRVASIM_pattern, MRVASIM_queryarm, WRVASIM_nexttest, TRVASIM_thisarm, Environ, Closure);
 /* line 1347: */
NWNASIM_amlabel(1, TRVASIM_thisarm.Lab);
 /* line 1348: */
 /* line 1349: */
TSUASIM_outputunit((*(&(QRVASIM_scan->Output))), Inputwires, Inputtypes, Outputoffset, Outputtype, Environ, Closure);
 /* line 1350: */
EWNASIM_amjump(PRVASIM_endcase.Lab);
 /* line 1351: */
NWNASIM_amlabel(1, WRVASIM_nexttest.Lab);
 /* line 1352: */
 /* line 1353: */
QRVASIM_scan = (*(&(QRVASIM_scan->Rest)));
}
 /* line 1358: */
NWNASIM_amlabel(1, MRVASIM_queryarm.Lab);
 /* line 1359: */
ZRVASIM_datasize = YGCASIM_lookuptypesize(Outputtype);
 /* line 1360: */
QUNASIM_ampushint(Outputoffset);
 /* line 1361: */
QUNASIM_ampushint(ZRVASIM_datasize);
 /* line 1362: */
YLFASIM_label( BSVASIM, &CSVASIM );
BXNASIM_amcall(3, CSVASIM);
 /* line 1363: */
TUNASIM_amdrop(2);
 /* line 1365: */
 /* line 1367: */
NWNASIM_amlabel(1, PRVASIM_endcase.Lab);
} 
A_PROC_EXIT(translatecasebody);
return;
} 
#undef NL
 /* line 1373: */
 /* line 1374: */
 /* line 1375: */
 /* line 1376: */

A68_VOID  MSVASIM_translatecase(A68_300  Body, A68_VC  Name, A68_357  Declaration, A68_429  Inputwires, A68_32  Inputtypes, A68_INT  Outputtype, A68_360  Environ, A68_370 * Closure, A68_36  Flt, A68_130  *ReturnedValue)
{ 
A68_INT  NSVASIM_outputoffset;
A68_438 * OSVASIM_selector;
A68_INT  PSVASIM_fixedpartsize;
A68_130  QSVASIM;  /* collateral clause result */
A68_130  RSVASIM;  /* clause result */
A_PROC_ENTRY(translatecase);
 /* line 1377: */
 /* line 1379: */
{ 
 /* line 1380: */
NSVASIM_outputoffset = ((GENASIM_sizeunit+DENASIM_ws)+(Inputtypes.upb*DENASIM_ws));
 /* line 1382: */
 /* line 1383: */
OSVASIM_selector = VVUASIM_makeselector(Body.Input, Inputwires, Inputtypes);
 /* line 1385: */
DOPASIM_translatestartfunction(Name);
 /* line 1387: */
 /* line 1388: */
 /* line 1389: */
JRVASIM_translatecasebody(OSVASIM_selector, Body.Choices, Inputwires, Inputtypes, NSVASIM_outputoffset, Outputtype, Environ, Closure);
 /* line 1391: */
PSVASIM_fixedpartsize = (NSVASIM_outputoffset+YGCASIM_lookuptypesize(Outputtype));
 /* line 1392: */
ZOPASIM_translateendfunction(PSVASIM_fixedpartsize, 1);
 /* line 1393: */
QSVASIM.Size = PSVASIM_fixedpartsize;
QSVASIM.Offset = NSVASIM_outputoffset;
 /* line 1394: */
 /* line 1397: */
QSVASIM.Sort = IHCASIM_combinatorial;
RSVASIM = QSVASIM;
} 
A_PROC_EXIT(translatecase);
*ReturnedValue = (RSVASIM);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void HSUASIM(void)   /* initialise DECS keamcase */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/keamcase.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/keconv.m","./mfiles/kesignals.m","./mfiles/kebasics.m","./mfiles/keamstandard.m","./mfiles/keambasics.m","./mfiles/kesymbols.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
KUBASIM();   /* USE keconv */
NYNASIM();   /* USE kesignals */
JSAASIM();   /* USE kebasics */
HYOASIM();   /* USE keamstandard */
XDNASIM();   /* USE keambasics */
TCCASIM();   /* USE kesymbols */
JSCAOST();   /* USE basics */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/keamcase.a68";
A_config.translation_time = "Tue Apr  4 11:10:24 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "GSUASIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:10:24 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS keamcase);
UEAALIB_a68config(LGAALIB_configinfo, LSUASIM);
 /* line 162: */
 /* line 252: */
 /* line 253: */
 /* line 255: */
 /* line 258: */
 /* line 261: */
 /* line 263: */
 /* line 265: */
 /* line 267: */
 /* line 303: */
 /* line 304: */
 /* line 306: */
 /* line 311: */
 /* line 326: */
 /* line 365: */
 /* line 429: */
 /* line 468: */
 /* line 582: */
 /* line 616: */
 /* line 628: */
 /* line 641: */
 /* line 656: */
 /* line 674: */
 /* line 693: */
 /* line 718: */
 /* line 738: */
 /* line 763: */
 /* line 808: */
 /* line 833: */
 /* line 1330: */
 /* line 1372: */
 /* line 1399: */
A_PROC_EXIT(DECS keamcase);
} 
#undef NL
/* end of translation of ./a68files/keamcase.a68 */
