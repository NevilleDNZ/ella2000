
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
/* UNAME:XTVASIM */
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
struct A68t211{
A68_VC  Id;
struct A68t211 * Rest;
};
typedef struct A68t211  A68_211 ;    /* STRUCT(REF MODE26,REF MODE211)  */
struct A68t212{
A68_INT  Int;
A_PAD_INT(PAD_66)
struct A68t212 * Rest;
};
typedef struct A68t212  A68_212 ;    /* STRUCT(INT,REF MODE212)  */
struct A68t213 { A68_INT mode; union {
struct A68t214 * mode1;
struct A68t215 * mode2;
struct A68t216 * mode3;
struct A68t217 * mode4;
struct A68t218 * mode5;
} data; };
typedef struct A68t213  A68_213 ;    /* UNION(REF MODE214,REF MODE215,REF MODE216,REF MODE217,REF MODE218)  */
struct A68t214{
A68_INT  Attrno;
A_PAD_INT(PAD_67)
};
typedef struct A68t214  A68_214 ;    /* STRUCT(INT)  */
struct A68t215{
A68_VC  Classname;
struct A68t211 * Strings;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(REF MODE26,REF MODE211)  */
struct A68t216{
struct A68t213  Elem;
struct A68t216 * Rest;
};
typedef struct A68t216  A68_216 ;    /* STRUCT(MODE213,REF MODE216)  */
struct A68t217{
struct A68t213  Attr;
};
typedef struct A68t217  A68_217 ;    /* STRUCT(MODE213)  */
struct A68t218{
A68_INT  Attrnull;
A_PAD_INT(PAD_68)
};
typedef struct A68t218  A68_218 ;    /* STRUCT(INT)  */
struct A68t219{
A68_INT  Sort;
A_PAD_INT(PAD_69)
A68_VC  Attrname;
struct A68t213  Value;
struct A68t220 * Usage;
};
typedef struct A68t219  A68_219 ;    /* STRUCT(INT,REF MODE26,MODE213,REF MODE220)  */
struct A68t220{
A68_INT  Contextno;
A_PAD_INT(PAD_70)
A68_INT  Closureno;
A_PAD_INT(PAD_71)
A68_INT  Libv_spec;
A_PAD_INT(PAD_72)
A68_INT  Libv_body;
A_PAD_INT(PAD_73)
A68_BOOL  Import;
A_PAD_BOOL(PAD_74)
A68_BOOL  Export;
A_PAD_BOOL(PAD_75)
};
typedef struct A68t220  A68_220 ;    /* STRUCT(INT,INT,INT,INT,BOOL,BOOL)  */
struct A68t221{
struct A68t213  Tag;
};
typedef struct A68t221  A68_221 ;    /* STRUCT(MODE213)  */
struct A68t222 { A68_INT mode; union {
struct A68t223 * mode1;
struct A68t224 * mode2;
struct A68t225 * mode3;
struct A68t226 * mode4;
struct A68t227 * mode5;
struct A68t228 * mode6;
struct A68t229 * mode7;
struct A68t230 * mode8;
struct A68t231 * mode9;
struct A68t232 * mode10;
} data; };
typedef struct A68t222  A68_222 ;    /* UNION(REF MODE223,REF MODE224,REF MODE225,REF MODE226,REF MODE227,REF MODE228,REF MODE229,REF MODE230,REF MODE231,REF MODE232)  */
struct A68t223{
A68_INT  Int;
A_PAD_INT(PAD_76)
A68_VC  Text;
};
typedef struct A68t223  A68_223 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t224{
A68_INT  Sort;
A_PAD_INT(PAD_77)
struct A68t222  Test;
struct A68t222  Standard;
};
typedef struct A68t224  A68_224 ;    /* STRUCT(INT,MODE222,MODE222)  */
struct A68t225{
A68_INT  Nameno;
A_PAD_INT(PAD_78)
};
typedef struct A68t225  A68_225 ;    /* STRUCT(INT)  */
struct A68t226{
A68_INT  Intno;
A_PAD_INT(PAD_79)
};
typedef struct A68t226  A68_226 ;    /* STRUCT(INT)  */
struct A68t227{
struct A68t222  Left;
A68_INT  Sort;
A_PAD_INT(PAD_80)
struct A68t222  Right;
};
typedef struct A68t227  A68_227 ;    /* STRUCT(MODE222,INT,MODE222)  */
struct A68t228{
A68_INT  Sort;
A_PAD_INT(PAD_81)
struct A68t222  Right;
};
typedef struct A68t228  A68_228 ;    /* STRUCT(INT,MODE222)  */
struct A68t229{
struct A68t222  Cond;
struct A68t222  True;
struct A68t222  False;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(MODE222,MODE222,MODE222)  */
struct A68t230{
struct A68t222  Formula;
};
typedef struct A68t230  A68_230 ;    /* STRUCT(MODE222)  */
struct A68t231{
A68_INT  Macparno;
A_PAD_INT(PAD_82)
};
typedef struct A68t231  A68_231 ;    /* STRUCT(INT)  */
struct A68t232{
A68_INT  Fnull;
A_PAD_INT(PAD_83)
};
typedef struct A68t232  A68_232 ;    /* STRUCT(INT)  */
struct A68t233{
struct A68t222  Tag;
};
typedef struct A68t233  A68_233 ;    /* STRUCT(MODE222)  */
struct A68t234{
struct A68t222  Formula;
struct A68t234 * Rest;
};
typedef struct A68t234  A68_234 ;    /* STRUCT(MODE222,REF MODE234)  */
struct A68t237{
struct A68t222  Lwb;
struct A68t222  Upb;
};
typedef struct A68t237  A68_237 ;    /* STRUCT(MODE222,MODE222)  */
struct A68t236 { A68_INT mode; union {
struct A68t223 * mode1;
struct A68t224 * mode2;
struct A68t225 * mode3;
struct A68t226 * mode4;
struct A68t227 * mode5;
struct A68t228 * mode6;
struct A68t229 * mode7;
struct A68t230 * mode8;
struct A68t231 * mode9;
struct A68t232 * mode10;
struct A68t237  mode11;
} data; };
typedef struct A68t236  A68_236 ;    /* UNION(REF MODE223,REF MODE224,REF MODE225,REF MODE226,REF MODE227,REF MODE228,REF MODE229,REF MODE230,REF MODE231,REF MODE232,MODE237)  */
struct A68t235{
A68_INT  Sort;
A_PAD_INT(PAD_84)
A68_VC  Intname;
struct A68t213  Attr;
struct A68t236  Value;
struct A68t220 * Usage;
};
typedef struct A68t235  A68_235 ;    /* STRUCT(INT,REF MODE26,MODE213,MODE236,REF MODE220)  */
struct A68t238 { A68_INT mode; union {
struct A68t239 * mode1;
struct A68t240 * mode2;
struct A68t241 * mode3;
struct A68t242 * mode4;
struct A68t243 * mode5;
struct A68t244 * mode6;
struct A68t245 * mode7;
struct A68t231 * mode8;
struct A68t246 * mode9;
} data; };
typedef struct A68t238  A68_238 ;    /* UNION(REF MODE239,REF MODE240,REF MODE241,REF MODE242,REF MODE243,REF MODE244,REF MODE245,REF MODE231,REF MODE246)  */
struct A68t239{
A68_INT  Typeno;
A_PAD_INT(PAD_85)
};
typedef struct A68t239  A68_239 ;    /* STRUCT(INT)  */
struct A68t240{
struct A68t222  Size;
struct A68t238  Elem;
};
typedef struct A68t240  A68_240 ;    /* STRUCT(MODE222,MODE238)  */
struct A68t241{
struct A68t238  Elem;
struct A68t241 * Rest;
};
typedef struct A68t241  A68_241 ;    /* STRUCT(MODE238,REF MODE241)  */
struct A68t242{
struct A68t238  From;
struct A68t238  To;
};
typedef struct A68t242  A68_242 ;    /* STRUCT(MODE238,MODE238)  */
struct A68t243{
struct A68t238  Type;
};
typedef struct A68t243  A68_243 ;    /* STRUCT(MODE238)  */
struct A68t244{
struct A68t222  Size;
struct A68t238  Char;
};
typedef struct A68t244  A68_244 ;    /* STRUCT(MODE222,MODE238)  */
struct A68t245{
A68_INT  Tvoid;
A_PAD_INT(PAD_86)
};
typedef struct A68t245  A68_245 ;    /* STRUCT(INT)  */
struct A68t246{
A68_INT  Tnull;
A_PAD_INT(PAD_87)
};
typedef struct A68t246  A68_246 ;    /* STRUCT(INT)  */
struct A68t247{
struct A68t238  Tag;
};
typedef struct A68t247  A68_247 ;    /* STRUCT(MODE238)  */
struct A68t248{
A68_VC  Tagname;
A68_VC  Chars;
};
typedef struct A68t248  A68_248 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t249{
A68_VC  Altname;
struct A68t238  Assoc;
};
typedef struct A68t249  A68_249 ;    /* STRUCT(REF MODE26,MODE238)  */
struct A68t250{
A68_VC  Tagname;
struct A68t237  Range;
};
typedef struct A68t250  A68_250 ;    /* STRUCT(REF MODE26,MODE237)  */
A_VECTOR(struct A68t249 ,A68t252);
typedef struct A68t252  A68_252 ;    /* VECTOR [] MODE249 */
struct A68t251 { A68_INT mode; union {
struct A68t252  mode1;
struct A68t250 * mode2;
struct A68t247 * mode3;
struct A68t248 * mode4;
} data; };
typedef struct A68t251  A68_251 ;    /* UNION(REF MODE252,REF MODE250,REF MODE247,REF MODE248)  */
struct A68t253{
A68_INT  Sort;
A_PAD_INT(PAD_88)
A68_VC  Typename;
struct A68t213  Attr;
struct A68t251  Body;
struct A68t220 * Usage;
};
typedef struct A68t253  A68_253 ;    /* STRUCT(INT,REF MODE26,MODE213,MODE251,REF MODE220)  */
struct A68t254{
A68_INT  Constno;
A_PAD_INT(PAD_89)
};
typedef struct A68t254  A68_254 ;    /* STRUCT(INT)  */
struct A68t255{
A68_INT  Typeno;
A_PAD_INT(PAD_90)
A68_INT  Primno;
A_PAD_INT(PAD_91)
};
typedef struct A68t255  A68_255 ;    /* STRUCT(INT,INT)  */
struct A68t256{
A68_INT  Typeno;
A_PAD_INT(PAD_92)
struct A68t222  Index;
};
typedef struct A68t256  A68_256 ;    /* STRUCT(INT,MODE222)  */
struct A68t257{
A68_INT  Typeno;
A_PAD_INT(PAD_93)
struct A68t237  Range;
};
typedef struct A68t257  A68_257 ;    /* STRUCT(INT,MODE237)  */
struct A68t258{
struct A68t238  Querytype;
};
typedef struct A68t258  A68_258 ;    /* STRUCT(MODE238)  */
struct A68t260 { A68_INT mode; union {
struct A68t254 * mode1;
struct A68t255 * mode2;
struct A68t256 * mode3;
struct A68t258 * mode4;
struct A68t261 * mode5;
struct A68t262 * mode6;
struct A68t243 * mode7;
struct A68t257 * mode8;
struct A68t263 * mode9;
struct A68t264 * mode10;
struct A68t265 * mode11;
struct A68t266 * mode12;
struct A68t267 * mode13;
struct A68t268 * mode14;
struct A68t269 * mode15;
struct A68t270 * mode16;
struct A68t271 * mode17;
struct A68t272 * mode18;
struct A68t273 * mode19;
struct A68t274 * mode20;
struct A68t275 * mode21;
struct A68t276 * mode22;
struct A68t277 * mode23;
struct A68t278 * mode24;
struct A68t279 * mode25;
struct A68t280 * mode26;
struct A68t281 * mode27;
struct A68t282 * mode28;
struct A68t283 * mode29;
struct A68t284 * mode30;
struct A68t285 * mode31;
struct A68t286 * mode32;
struct A68t287 * mode33;
struct A68t288 * mode34;
} data; };
typedef struct A68t260  A68_260 ;    /* UNION(REF MODE254,REF MODE255,REF MODE256,REF MODE258,REF MODE261,REF MODE262,REF MODE243,REF MODE257,REF MODE263,REF MODE264,REF MODE265,REF MODE266,REF MODE267,REF MODE268,REF MODE269,REF MODE270,REF MODE271,REF MODE272,REF MODE273,REF MODE274,REF MODE275,REF MODE276,REF MODE277,REF MODE278,REF MODE279,REF MODE280,REF MODE281,REF MODE282,REF MODE283,REF MODE284,REF MODE285,REF MODE286,REF MODE287,REF MODE288)  */
struct A68t259{
A68_INT  Sort;
A_PAD_INT(PAD_94)
A68_VC  Constname;
struct A68t213  Attr;
struct A68t260  Value;
struct A68t220 * Usage;
};
typedef struct A68t259  A68_259 ;    /* STRUCT(INT,REF MODE26,MODE213,MODE260,REF MODE220)  */
struct A68t261{
A68_INT  Typeno;
A_PAD_INT(PAD_95)
struct A68t32  String;
};
typedef struct A68t261  A68_261 ;    /* STRUCT(INT,REF MODE32)  */
struct A68t262{
A68_INT  Cvoid;
A_PAD_INT(PAD_96)
};
typedef struct A68t262  A68_262 ;    /* STRUCT(INT)  */
struct A68t263{
A68_INT  Typeno;
A_PAD_INT(PAD_97)
A68_INT  Firstno;
A_PAD_INT(PAD_98)
A68_INT  Lastno;
A_PAD_INT(PAD_99)
};
typedef struct A68t263  A68_263 ;    /* STRUCT(INT,INT,INT)  */
struct A68t264{
struct A68t260  Alt;
struct A68t264 * Rest;
};
typedef struct A68t264  A68_264 ;    /* STRUCT(MODE260,REF MODE264)  */
struct A68t265{
A68_INT  Sort;
A_PAD_INT(PAD_100)
A68_INT  Nameno;
A_PAD_INT(PAD_101)
};
typedef struct A68t265  A68_265 ;    /* STRUCT(INT,INT)  */
struct A68t266{
struct A68t260  Sink;
struct A68t260  Source;
};
typedef struct A68t266  A68_266 ;    /* STRUCT(MODE260,MODE260)  */
struct A68t267{
A68_INT  Typeno;
A_PAD_INT(PAD_102)
A68_INT  Altno;
A_PAD_INT(PAD_103)
struct A68t260  Assoc;
};
typedef struct A68t267  A68_267 ;    /* STRUCT(INT,INT,MODE260)  */
struct A68t268{
struct A68t260  Extract;
A68_INT  Typeno;
A_PAD_INT(PAD_104)
A68_INT  Altno;
A_PAD_INT(PAD_105)
};
typedef struct A68t268  A68_268 ;    /* STRUCT(MODE260,INT,INT)  */
struct A68t269{
struct A68t260  Unit;
A68_INT  Fnno;
A_PAD_INT(PAD_106)
A68_INT  Nameno;
A_PAD_INT(PAD_107)
};
typedef struct A68t269  A68_269 ;    /* STRUCT(MODE260,INT,INT)  */
struct A68t270{
struct A68t260  Unit;
struct A68t222  Index;
};
typedef struct A68t270  A68_270 ;    /* STRUCT(MODE260,MODE222)  */
struct A68t271{
struct A68t260  Unit;
struct A68t237  Range;
};
typedef struct A68t271  A68_271 ;    /* STRUCT(MODE260,MODE237)  */
struct A68t272{
struct A68t260  Unit;
struct A68t260  Index;
};
typedef struct A68t272  A68_272 ;    /* STRUCT(MODE260,MODE260)  */
struct A68t273{
struct A68t260  Unit;
struct A68t260  Index;
struct A68t260  From;
};
typedef struct A68t273  A68_273 ;    /* STRUCT(MODE260,MODE260,MODE260)  */
struct A68t274{
struct A68t222  Size;
struct A68t260  Elem;
};
typedef struct A68t274  A68_274 ;    /* STRUCT(MODE222,MODE260)  */
struct A68t275{
struct A68t260  Elem;
struct A68t275 * Rest;
};
typedef struct A68t275  A68_275 ;    /* STRUCT(MODE260,REF MODE275)  */
struct A68t276{
A68_BOOL  String;
A_PAD_BOOL(PAD_108)
A68_INT  Sort;
A_PAD_INT(PAD_109)
struct A68t260  Left;
struct A68t260  Right;
};
typedef struct A68t276  A68_276 ;    /* STRUCT(BOOL,INT,MODE260,MODE260)  */
A_VECTOR(struct A68t303 ,A68t302);
typedef struct A68t302  A68_302 ;    /* VECTOR [] MODE303 */
struct A68t305{
struct A68t260  Tag;
};
typedef struct A68t305  A68_305 ;    /* STRUCT(MODE260)  */
struct A68t300{
A68_INT  Fnno;
A_PAD_INT(PAD_110)
struct A68t302  Macparams;
struct A68t213  Attr;
};
typedef struct A68t300  A68_300 ;    /* STRUCT(INT,REF MODE302,MODE213)  */
struct A68t304 { A68_INT mode; union {
struct A68t221  mode1;
struct A68t233  mode2;
struct A68t247  mode3;
struct A68t305  mode4;
struct A68t300  mode5;
} data; };
typedef struct A68t304  A68_304 ;    /* UNION(MODE221,MODE233,MODE247,MODE305,MODE300)  */
struct A68t303{
A68_INT  Sort;
A_PAD_INT(PAD_111)
struct A68t304  Param;
};
typedef struct A68t303  A68_303 ;    /* STRUCT(INT,MODE304)  */
struct A68t277{
struct A68t300  Inst;
struct A68t260  Right;
};
typedef struct A68t277  A68_277 ;    /* STRUCT(MODE300,MODE260)  */
struct A68t278{
struct A68t260  Left;
struct A68t300  Inst;
struct A68t260  Right;
};
typedef struct A68t278  A68_278 ;    /* STRUCT(MODE260,MODE300,MODE260)  */
struct A68t279{
struct A68t260  Input;
struct A68t320 * Choices;
};
typedef struct A68t279  A68_279 ;    /* STRUCT(MODE260,REF MODE320)  */
struct A68t280{
struct A68t222  Cond;
struct A68t260  True;
struct A68t260  False;
};
typedef struct A68t280  A68_280 ;    /* STRUCT(MODE222,MODE260,MODE260)  */
struct A68t281{
struct A68t222  Repl;
struct A68t260  Body;
};
typedef struct A68t281  A68_281 ;    /* STRUCT(MODE222,MODE260)  */
struct A68t282{
struct A68t308 * Body;
struct A68t260  Output;
};
typedef struct A68t282  A68_282 ;    /* STRUCT(REF MODE308,MODE260)  */
struct A68t283{
struct A68t289 * Body;
struct A68t260  Output;
};
typedef struct A68t283  A68_283 ;    /* STRUCT(REF MODE289,MODE260)  */
struct A68t284{
struct A68t260  Unit;
struct A68t213  Attr;
};
typedef struct A68t284  A68_284 ;    /* STRUCT(MODE260,MODE213)  */
struct A68t285{
struct A68t260  Unit;
struct A68t224  Check;
};
typedef struct A68t285  A68_285 ;    /* STRUCT(MODE260,MODE224)  */
struct A68t286{
struct A68t260  Unit;
};
typedef struct A68t286  A68_286 ;    /* STRUCT(MODE260)  */
struct A68t287{
struct A68t222  Size;
struct A68t260  Char;
};
typedef struct A68t287  A68_287 ;    /* STRUCT(MODE222,MODE260)  */
struct A68t288{
A68_INT  Unull;
A_PAD_INT(PAD_112)
};
typedef struct A68t288  A68_288 ;    /* STRUCT(INT)  */
struct A68t291{
A68_INT  Fnno;
A_PAD_INT(PAD_113)
};
typedef struct A68t291  A68_291 ;    /* STRUCT(INT)  */
struct A68t290 { A68_INT mode; union {
struct A68t214  mode1;
struct A68t226  mode2;
struct A68t239  mode3;
struct A68t254  mode4;
struct A68t291  mode5;
struct A68t292 * mode6;
struct A68t293 * mode7;
struct A68t294 * mode8;
struct A68t295 * mode9;
struct A68t296 * mode10;
struct A68t297 * mode11;
struct A68t298 * mode12;
} data; };
typedef struct A68t290  A68_290 ;    /* UNION(MODE214,MODE226,MODE239,MODE254,MODE291,REF MODE292,REF MODE293,REF MODE294,REF MODE295,REF MODE296,REF MODE297,REF MODE298)  */
struct A68t289{
struct A68t290  Step;
struct A68t289 * Rest;
};
typedef struct A68t289  A68_289 ;    /* STRUCT(MODE290,REF MODE289)  */
struct A68t292{
struct A68t222  Cond;
struct A68t306 * Print;
};
typedef struct A68t292  A68_292 ;    /* STRUCT(MODE222,REF MODE306)  */
struct A68t293{
struct A68t222  Cond;
struct A68t306 * Fault;
};
typedef struct A68t293  A68_293 ;    /* STRUCT(MODE222,REF MODE306)  */
struct A68t294{
struct A68t301 * Letnames;
struct A68t260  Unit;
};
typedef struct A68t294  A68_294 ;    /* STRUCT(REF MODE301,MODE260)  */
struct A68t295{
struct A68t234 * Sizes;
struct A68t300  Inst;
struct A68t301 * Makenames;
};
typedef struct A68t295  A68_295 ;    /* STRUCT(REF MODE234,MODE300,REF MODE301)  */
struct A68t296{
struct A68t260  From;
struct A68t260  To;
};
typedef struct A68t296  A68_296 ;    /* STRUCT(MODE260,MODE260)  */
struct A68t297{
struct A68t234 * Repls;
struct A68t299 * Joins;
};
typedef struct A68t297  A68_297 ;    /* STRUCT(REF MODE234,REF MODE299)  */
struct A68t298{
A68_INT  Stepnull;
A_PAD_INT(PAD_114)
};
typedef struct A68t298  A68_298 ;    /* STRUCT(INT)  */
struct A68t299{
struct A68t296  Join;
struct A68t299 * Rest;
};
typedef struct A68t299  A68_299 ;    /* STRUCT(MODE296,REF MODE299)  */
struct A68t301{
A68_INT  Nameno;
A_PAD_INT(PAD_115)
struct A68t301 * Rest;
};
typedef struct A68t301  A68_301 ;    /* STRUCT(INT,REF MODE301)  */
struct A68t307 { A68_INT mode; union {
A68_VC  mode1;
struct A68t233 * mode2;
} data; };
typedef struct A68t307  A68_307 ;    /* UNION(REF MODE26,REF MODE233)  */
struct A68t306{
struct A68t307  Item;
struct A68t306 * Rest;
};
typedef struct A68t306  A68_306 ;    /* STRUCT(MODE307,REF MODE306)  */
struct A68t309 { A68_INT mode; union {
struct A68t214  mode1;
struct A68t226  mode2;
struct A68t239  mode3;
struct A68t254  mode4;
struct A68t291  mode5;
struct A68t292 * mode6;
struct A68t293 * mode7;
struct A68t310 * mode8;
struct A68t311 * mode9;
struct A68t312 * mode10;
struct A68t313 * mode11;
struct A68t314 * mode12;
struct A68t315 * mode13;
struct A68t316 * mode14;
struct A68t317 * mode15;
struct A68t308 * mode16;
struct A68t318 * mode17;
} data; };
typedef struct A68t309  A68_309 ;    /* UNION(MODE214,MODE226,MODE239,MODE254,MODE291,REF MODE292,REF MODE293,REF MODE310,REF MODE311,REF MODE312,REF MODE313,REF MODE314,REF MODE315,REF MODE316,REF MODE317,REF MODE308,REF MODE318)  */
struct A68t308{
struct A68t309  Step;
struct A68t308 * Rest;
};
typedef struct A68t308  A68_308 ;    /* STRUCT(MODE309,REF MODE308)  */
struct A68t310{
struct A68t294  Seqlet;
};
typedef struct A68t310  A68_310 ;    /* STRUCT(MODE294)  */
struct A68t311{
struct A68t294  Seqvar;
};
typedef struct A68t311  A68_311 ;    /* STRUCT(MODE294)  */
struct A68t312{
struct A68t301 * Pvarnames;
struct A68t260  Init;
};
typedef struct A68t312  A68_312 ;    /* STRUCT(REF MODE301,MODE260)  */
struct A68t313{
struct A68t260  To;
struct A68t260  From;
};
typedef struct A68t313  A68_313 ;    /* STRUCT(MODE260,MODE260)  */
struct A68t314{
struct A68t260  Input;
struct A68t319 * Choices;
};
typedef struct A68t314  A68_314 ;    /* STRUCT(MODE260,REF MODE319)  */
struct A68t315{
struct A68t222  Cond;
struct A68t309  True;
struct A68t309  False;
};
typedef struct A68t315  A68_315 ;    /* STRUCT(MODE222,MODE309,MODE309)  */
struct A68t316{
struct A68t222  Repl;
struct A68t309  Body;
};
typedef struct A68t316  A68_316 ;    /* STRUCT(MODE222,MODE309)  */
struct A68t317{
A68_INT  Seqnull;
A_PAD_INT(PAD_116)
};
typedef struct A68t317  A68_317 ;    /* STRUCT(INT)  */
struct A68t318{
struct A68t222  Size;
struct A68t309  Elem;
};
typedef struct A68t318  A68_318 ;    /* STRUCT(MODE222,MODE309)  */
struct A68t319{
A68_BOOL  Check;
A_PAD_BOOL(PAD_117)
A68_INT  Sort;
A_PAD_INT(PAD_118)
struct A68t260  Test;
struct A68t309  Output;
struct A68t319 * Rest;
};
typedef struct A68t319  A68_319 ;    /* STRUCT(BOOL,INT,MODE260,MODE309,REF MODE319)  */
struct A68t320{
A68_BOOL  Check;
A_PAD_BOOL(PAD_119)
A68_INT  Sort;
A_PAD_INT(PAD_120)
struct A68t260  Test;
struct A68t260  Output;
struct A68t320 * Rest;
};
typedef struct A68t320  A68_320 ;    /* STRUCT(BOOL,INT,MODE260,MODE260,REF MODE320)  */
struct A68t321 { A68_INT mode; union {
struct A68t214  mode1;
struct A68t226  mode2;
struct A68t239  mode3;
struct A68t254  mode4;
struct A68t291  mode5;
} data; };
typedef struct A68t321  A68_321 ;    /* UNION(MODE214,MODE226,MODE239,MODE254,MODE291)  */
struct A68t322{
A68_BOOL  Biop;
A_PAD_BOOL(PAD_121)
A68_VC  Name;
struct A68t302  Macparams;
};
typedef struct A68t322  A68_322 ;    /* STRUCT(BOOL,REF MODE26,REF MODE302)  */
struct A68t323{
struct A68t222  Output;
};
typedef struct A68t323  A68_323 ;    /* STRUCT(MODE222)  */
struct A68t324{
A68_INT  Reform;
A_PAD_INT(PAD_122)
};
typedef struct A68t324  A68_324 ;    /* STRUCT(INT)  */
struct A68t325{
A68_VC  Name;
A68_INT  Contextno;
A_PAD_INT(PAD_123)
struct A68t92  Ctname;
};
typedef struct A68t325  A68_325 ;    /* STRUCT(REF MODE26,INT,MODE92)  */
struct A68t326{
A68_INT  Sort;
A_PAD_INT(PAD_124)
struct A68t260  Init;
struct A68t222  Ambigtime;
struct A68t260  Ambig;
struct A68t222  Delaytime;
};
typedef struct A68t326  A68_326 ;    /* STRUCT(INT,MODE260,MODE222,MODE260,MODE222)  */
struct A68t327{
struct A68t260  Init;
struct A68t222  Delaytime;
};
typedef struct A68t327  A68_327 ;    /* STRUCT(MODE260,MODE222)  */
struct A68t328{
struct A68t260  Init;
};
typedef struct A68t328  A68_328 ;    /* STRUCT(MODE260)  */
struct A68t329{
A68_INT  Sort;
A_PAD_INT(PAD_125)
struct A68t222  Interval;
struct A68t260  Init;
struct A68t222  Skew;
};
typedef struct A68t329  A68_329 ;    /* STRUCT(INT,MODE222,MODE260,MODE222)  */
struct A68t330{
A68_BOOL  Faster;
A_PAD_BOOL(PAD_126)
A68_INT  Sort;
A_PAD_INT(PAD_127)
struct A68t300  Inst;
struct A68t222  Scale;
struct A68t260  Init;
struct A68t222  Skew;
};
typedef struct A68t330  A68_330 ;    /* STRUCT(BOOL,INT,MODE300,MODE222,MODE260,MODE222)  */
struct A68t332 { A68_INT mode; union {
struct A68t305 * mode1;
struct A68t322 * mode2;
struct A68t323 * mode3;
struct A68t324 * mode4;
struct A68t325 * mode5;
struct A68t326 * mode6;
struct A68t327 * mode7;
struct A68t328 * mode8;
struct A68t329 * mode9;
struct A68t330 * mode10;
struct A68t331 * mode11;
struct A68t333 * mode12;
} data; };
typedef struct A68t332  A68_332 ;    /* UNION(REF MODE305,REF MODE322,REF MODE323,REF MODE324,REF MODE325,REF MODE326,REF MODE327,REF MODE328,REF MODE329,REF MODE330,REF MODE331,REF MODE333)  */
struct A68t331{
struct A68t212 * Joincheck;
A68_BOOL  Check;
A_PAD_BOOL(PAD_128)
struct A68t332  Fnbody;
};
typedef struct A68t331  A68_331 ;    /* STRUCT(REF MODE212,BOOL,MODE332)  */
struct A68t333{
A68_INT  Bodynull;
A_PAD_INT(PAD_129)
};
typedef struct A68t333  A68_333 ;    /* STRUCT(INT)  */
struct A68t334{
A68_INT  Sort;
A_PAD_INT(PAD_130)
struct A68t321  Spec;
};
typedef struct A68t334  A68_334 ;    /* STRUCT(INT,MODE321)  */
struct A68t335{
A68_VC  Name;
struct A68t238  Type;
struct A68t213  Attr;
};
typedef struct A68t335  A68_335 ;    /* STRUCT(REF MODE26,MODE238,MODE213)  */
A_VECTOR(struct A68t334 ,A68t337);
typedef struct A68t337  A68_337 ;    /* VECTOR [] MODE334 */
A_VECTOR(struct A68t335 ,A68t338);
typedef struct A68t338  A68_338 ;    /* VECTOR [] MODE335 */
struct A68t336{
A68_INT  Sort;
A_PAD_INT(PAD_131)
A68_BOOL  Macro;
A_PAD_BOOL(PAD_132)
A68_VC  Fnname;
struct A68t337  Macspecs;
struct A68t213  Attr;
struct A68t301 * Inputs;
struct A68t301 * Outputs;
struct A68t338  Nametypes;
struct A68t332  Fnbody;
struct A68t220 * Usage;
};
typedef struct A68t336  A68_336 ;    /* STRUCT(INT,BOOL,REF MODE26,REF MODE337,MODE213,REF MODE301,REF MODE301,REF MODE338,MODE332,REF MODE220)  */
A_VECTOR(struct A68t219 *,A68t340);
typedef struct A68t340  A68_340 ;    /* VECTOR [] REF MODE219 */
A_VECTOR(struct A68t235 *,A68t341);
typedef struct A68t341  A68_341 ;    /* VECTOR [] REF MODE235 */
A_VECTOR(struct A68t253 *,A68t342);
typedef struct A68t342  A68_342 ;    /* VECTOR [] REF MODE253 */
A_VECTOR(struct A68t259 *,A68t343);
typedef struct A68t343  A68_343 ;    /* VECTOR [] REF MODE259 */
A_VECTOR(struct A68t336 *,A68t344);
typedef struct A68t344  A68_344 ;    /* VECTOR [] REF MODE336 */
struct A68t339{
struct A68t340  Attrs;
struct A68t341  Ints;
struct A68t342  Types;
struct A68t343  Consts;
struct A68t344  Fns;
};
typedef struct A68t339  A68_339 ;    /* STRUCT(REF MODE340,REF MODE341,REF MODE342,REF MODE343,REF MODE344)  */
struct A68t345{
A68_INT  Closureno;
A_PAD_INT(PAD_133)
A68_INT  Sort;
A_PAD_INT(PAD_134)
struct A68t339 * Environ;
};
typedef struct A68t345  A68_345 ;    /* STRUCT(INT,INT,REF MODE339)  */
struct A68t346{
struct A68t345  Outer;
struct A68t346 * Rest;
};
typedef struct A68t346  A68_346 ;    /* STRUCT(MODE345,REF MODE346)  */
A_VECTOR(struct A68t346 ,A68t348);
typedef struct A68t348  A68_348 ;    /* VECTOR [] MODE346 */
struct A68t347{
struct A68t348  Outers;
struct A68t347 * Rest;
};
typedef struct A68t347  A68_347 ;    /* STRUCT(REF MODE348,REF MODE347)  */
struct A68t349{
A68_INT  Max_closureno;
A_PAD_INT(PAD_135)
struct A68t346 * Outers;
struct A68t346 * Freelist;
struct A68t347 * Outerslist;
};
typedef struct A68t349  A68_349 ;    /* STRUCT(INT,REF MODE346,REF MODE346,REF MODE347)  */
A_VECTOR(A68_VC ,A68t350);
typedef struct A68t350  A68_350 ;    /* VECTOR [] REF MODE26 */
A_VECTOR(struct A68t346 *,A68t351);
typedef struct A68t351  A68_351 ;    /* VECTOR [] REF MODE346 */

A_PROCEDURE(struct A68t225 *,A68t352,(A68_INT ),(A68_INT ,void *));
typedef struct A68t352  A68_352 ;    /* PROC(INT) REF MODE225 */

A_PROCEDURE(struct A68t226 *,A68t353,(A68_INT ),(A68_INT ,void *));
typedef struct A68t353  A68_353 ;    /* PROC(INT) REF MODE226 */

A_PROCEDURE(struct A68t230 *,A68t354,(struct A68t222 ),(struct A68t222 ,void *));
typedef struct A68t354  A68_354 ;    /* PROC(MODE222) REF MODE230 */

A_PROCEDURE(struct A68t233 *,A68t355,(struct A68t222 ),(struct A68t222 ,void *));
typedef struct A68t355  A68_355 ;    /* PROC(MODE222) REF MODE233 */

A_PROCEDURE(struct A68t239 *,A68t356,(A68_INT ),(A68_INT ,void *));
typedef struct A68t356  A68_356 ;    /* PROC(INT) REF MODE239 */

A_PROCEDURE(struct A68t243 *,A68t357,(struct A68t238 ),(struct A68t238 ,void *));
typedef struct A68t357  A68_357 ;    /* PROC(MODE238) REF MODE243 */

A_PROCEDURE(struct A68t247 *,A68t358,(struct A68t238 ),(struct A68t238 ,void *));
typedef struct A68t358  A68_358 ;    /* PROC(MODE238) REF MODE247 */

A_PROCEDURE(struct A68t254 *,A68t359,(A68_INT ),(A68_INT ,void *));
typedef struct A68t359  A68_359 ;    /* PROC(INT) REF MODE254 */

A_PROCEDURE(struct A68t258 *,A68t360,(struct A68t238 ),(struct A68t238 ,void *));
typedef struct A68t360  A68_360 ;    /* PROC(MODE238) REF MODE258 */

A_PROCEDURE(struct A68t310 *,A68t361,(struct A68t294 ),(struct A68t294 ,void *));
typedef struct A68t361  A68_361 ;    /* PROC(MODE294) REF MODE310 */

A_PROCEDURE(struct A68t311 *,A68t362,(struct A68t294 ),(struct A68t294 ,void *));
typedef struct A68t362  A68_362 ;    /* PROC(MODE294) REF MODE311 */

A_PROCEDURE(struct A68t286 *,A68t363,(struct A68t260 ),(struct A68t260 ,void *));
typedef struct A68t363  A68_363 ;    /* PROC(MODE260) REF MODE286 */

A_PROCEDURE(struct A68t305 *,A68t364,(struct A68t260 ),(struct A68t260 ,void *));
typedef struct A68t364  A68_364 ;    /* PROC(MODE260) REF MODE305 */

A_PROCEDURE(struct A68t291 *,A68t365,(A68_INT ),(A68_INT ,void *));
typedef struct A68t365  A68_365 ;    /* PROC(INT) REF MODE291 */

A_PROCEDURE(struct A68t323 *,A68t366,(struct A68t222 ),(struct A68t222 ,void *));
typedef struct A68t366  A68_366 ;    /* PROC(MODE222) REF MODE323 */

A_PROCEDURE(struct A68t328 *,A68t367,(struct A68t260 ),(struct A68t260 ,void *));
typedef struct A68t367  A68_367 ;    /* PROC(MODE260) REF MODE328 */

A_PROCEDURE(struct A68t231 *,A68t368,(A68_INT ),(A68_INT ,void *));
typedef struct A68t368  A68_368 ;    /* PROC(INT) REF MODE231 */

A_PROCEDURE(struct A68t214 *,A68t369,(A68_INT ),(A68_INT ,void *));
typedef struct A68t369  A68_369 ;    /* PROC(INT) REF MODE214 */

A_PROCEDURE(struct A68t221 *,A68t370,(struct A68t213 ),(struct A68t213 ,void *));
typedef struct A68t370  A68_370 ;    /* PROC(MODE213) REF MODE221 */

A_PROCEDURE(struct A68t217 *,A68t371,(struct A68t213 ),(struct A68t213 ,void *));
typedef struct A68t371  A68_371 ;    /* PROC(MODE213) REF MODE217 */
A_VECTOR(struct A68t211 *,A68t372);
typedef struct A68t372  A68_372 ;    /* VECTOR [] REF MODE211 */

A_PROCEDURE(struct A68t223 *,A68t373,(A68_INT ),(A68_INT ,void *));
typedef struct A68t373  A68_373 ;    /* PROC(INT) REF MODE223 */

A_PROCEDURE(A68_INT ,A68t374,(struct A68t222 ,struct A68t108 ),(struct A68t222 ,struct A68t108 ,void *));
typedef struct A68t374  A68_374 ;    /* PROC(MODE222,MODE108) INT */

A_PROCEDURE(A68_INT ,A68t375,(struct A68t222 ),(struct A68t222 ,void *));
typedef struct A68t375  A68_375 ;    /* PROC(MODE222) INT */

A_PROCEDURE(A68_VOID ,A68t376,(struct A68t222 ,struct A68t222 *),(struct A68t222 ,struct A68t222 *,void *));
typedef struct A68t376  A68_376 ;    /* PROC(MODE222) MODE222 */

A_PROCEDURE(struct A68t219 *,A68t377,(struct A68t345 ),(struct A68t345 ,void *));
typedef struct A68t377  A68_377 ;    /* PROC(MODE345) REF MODE219 */

A_PROCEDURE(struct A68t235 *,A68t378,(struct A68t345 ),(struct A68t345 ,void *));
typedef struct A68t378  A68_378 ;    /* PROC(MODE345) REF MODE235 */

A_PROCEDURE(struct A68t253 *,A68t379,(struct A68t345 ),(struct A68t345 ,void *));
typedef struct A68t379  A68_379 ;    /* PROC(MODE345) REF MODE253 */

A_PROCEDURE(struct A68t259 *,A68t380,(struct A68t345 ),(struct A68t345 ,void *));
typedef struct A68t380  A68_380 ;    /* PROC(MODE345) REF MODE259 */

A_PROCEDURE(struct A68t336 *,A68t381,(struct A68t345 ),(struct A68t345 ,void *));
typedef struct A68t381  A68_381 ;    /* PROC(MODE345) REF MODE336 */

A_PROCEDURE(A68_INT ,A68t382,(struct A68t220 *,struct A68t340 ),(struct A68t220 *,struct A68t340 ,void *));
typedef struct A68t382  A68_382 ;    /* PROC(REF MODE220,REF MODE340) INT */

A_PROCEDURE(A68_INT ,A68t383,(struct A68t220 *,struct A68t341 ),(struct A68t220 *,struct A68t341 ,void *));
typedef struct A68t383  A68_383 ;    /* PROC(REF MODE220,REF MODE341) INT */

A_PROCEDURE(A68_INT ,A68t384,(struct A68t220 *,struct A68t342 ),(struct A68t220 *,struct A68t342 ,void *));
typedef struct A68t384  A68_384 ;    /* PROC(REF MODE220,REF MODE342) INT */

A_PROCEDURE(A68_INT ,A68t385,(struct A68t220 *,struct A68t343 ),(struct A68t220 *,struct A68t343 ,void *));
typedef struct A68t385  A68_385 ;    /* PROC(REF MODE220,REF MODE343) INT */

A_PROCEDURE(A68_INT ,A68t386,(struct A68t220 *,struct A68t344 ),(struct A68t220 *,struct A68t344 ,void *));
typedef struct A68t386  A68_386 ;    /* PROC(REF MODE220,REF MODE344) INT */

A_PROCEDURE(struct A68t219 *,A68t387,(struct A68t214 ,struct A68t349 *,struct A68t339 *),(struct A68t214 ,struct A68t349 *,struct A68t339 *,void *));
typedef struct A68t387  A68_387 ;    /* PROC(MODE214,REF MODE349,REF MODE339) REF MODE219 */

A_PROCEDURE(struct A68t235 *,A68t388,(struct A68t226 ,struct A68t349 *,struct A68t339 *),(struct A68t226 ,struct A68t349 *,struct A68t339 *,void *));
typedef struct A68t388  A68_388 ;    /* PROC(MODE226,REF MODE349,REF MODE339) REF MODE235 */

A_PROCEDURE(struct A68t253 *,A68t389,(struct A68t239 ,struct A68t349 *,struct A68t339 *),(struct A68t239 ,struct A68t349 *,struct A68t339 *,void *));
typedef struct A68t389  A68_389 ;    /* PROC(MODE239,REF MODE349,REF MODE339) REF MODE253 */

A_PROCEDURE(struct A68t259 *,A68t390,(struct A68t254 ,struct A68t349 *,struct A68t339 *),(struct A68t254 ,struct A68t349 *,struct A68t339 *,void *));
typedef struct A68t390  A68_390 ;    /* PROC(MODE254,REF MODE349,REF MODE339) REF MODE259 */

A_PROCEDURE(struct A68t336 *,A68t391,(struct A68t291 ,struct A68t349 *,struct A68t339 *),(struct A68t291 ,struct A68t349 *,struct A68t339 *,void *));
typedef struct A68t391  A68_391 ;    /* PROC(MODE291,REF MODE349,REF MODE339) REF MODE336 */

A_PROCEDURE(struct A68t242 *,A68t392,(struct A68t336 *),(struct A68t336 *,void *));
typedef struct A68t392  A68_392 ;    /* PROC(REF MODE336) REF MODE242 */

A_PROCEDURE(A68_VOID ,A68t393,(struct A68t241 *,struct A68t222 *),(struct A68t241 *,struct A68t222 *,void *));
typedef struct A68t393  A68_393 ;    /* PROC(REF MODE241) MODE222 */

A_PROCEDURE(A68_VOID ,A68t394,(struct A68t238 ,struct A68t339 *,struct A68t222 *),(struct A68t238 ,struct A68t339 *,struct A68t222 *,void *));
typedef struct A68t394  A68_394 ;    /* PROC(MODE238,REF MODE339) MODE222 */

A_PROCEDURE(struct A68t336 *,A68t395,(struct A68t336 *,struct A68t339 *,struct A68t339 *),(struct A68t336 *,struct A68t339 *,struct A68t339 *,void *));
typedef struct A68t395  A68_395 ;    /* PROC(REF MODE336,REF MODE339,REF MODE339) REF MODE336 */

A_PROCEDURE(A68_VOID ,A68t396,(struct A68t301 *,struct A68t336 *,struct A68t238 *),(struct A68t301 *,struct A68t336 *,struct A68t238 *,void *));
typedef struct A68t396  A68_396 ;    /* PROC(REF MODE301,REF MODE336) MODE238 */

A_PROCEDURE(A68_INT ,A68t397,(struct A68t301 *),(struct A68t301 *,void *));
typedef struct A68t397  A68_397 ;    /* PROC(REF MODE301) INT */

A_PROCEDURE(A68_INT ,A68t398,(struct A68t301 *,A68_INT ),(struct A68t301 *,A68_INT ,void *));
typedef struct A68t398  A68_398 ;    /* PROC(REF MODE301,INT) INT */

A_PROCEDURE(A68_VOID ,A68t399,(struct A68t260 ,struct A68t336 *,struct A68t339 *,struct A68t238 *),(struct A68t260 ,struct A68t336 *,struct A68t339 *,struct A68t238 *,void *));
typedef struct A68t399  A68_399 ;    /* PROC(MODE260,REF MODE336,REF MODE339) MODE238 */

A_PROCEDURE(A68_VOID ,A68t400,(struct A68t238 ,struct A68t339 *,struct A68t238 *),(struct A68t238 ,struct A68t339 *,struct A68t238 *,void *));
typedef struct A68t400  A68_400 ;    /* PROC(MODE238,REF MODE339) MODE238 */

A_PROCEDURE(A68_BOOL ,A68t401,(struct A68t238 ,struct A68t238 ,struct A68t339 *,struct A68t339 *,A68_BOOL ),(struct A68t238 ,struct A68t238 ,struct A68t339 *,struct A68t339 *,A68_BOOL ,void *));
typedef struct A68t401  A68_401 ;    /* PROC(MODE238,MODE238,REF MODE339,REF MODE339,BOOL) BOOL */

A_PROCEDURE(A68_INT ,A68t402,(struct A68t269 *,struct A68t339 *),(struct A68t269 *,struct A68t339 *,void *));
typedef struct A68t402  A68_402 ;    /* PROC(REF MODE269,REF MODE339) INT */

A_PROCEDURE(A68_VOID ,A68t403,(struct A68t238 ,struct A68t339 ,struct A68t349 *,struct A68t115 *),(struct A68t238 ,struct A68t339 ,struct A68t349 *,struct A68t115 *,void *));
typedef struct A68t403  A68_403 ;    /* PROC(MODE238,MODE339,REF MODE349) MODE115 */

A_PROCEDURE(A68_VOID ,A68t404,(struct A68t260 ,struct A68t339 ,struct A68t349 *,struct A68t198 *),(struct A68t260 ,struct A68t339 ,struct A68t349 *,struct A68t198 *,void *));
typedef struct A68t404  A68_404 ;    /* PROC(MODE260,MODE339,REF MODE349) MODE198 */
struct A68t405 { A68_INT mode; union {
struct A68t117 * mode1;
struct A68t118 * mode2;
struct A68t119 * mode3;
} data; };
typedef struct A68t405  A68_405 ;    /* UNION(REF MODE117,REF MODE118,REF MODE119)  */
struct A68t406{
struct A68t128 * Wire;
A68_INT  Instance;
A_PAD_INT(PAD_136)
};
typedef struct A68t406  A68_406 ;    /* STRUCT(REF MODE128,INT)  */
struct A68t407 { A68_INT mode; union {
struct A68t136  mode1;
struct A68t406  mode2;
} data; };
typedef struct A68t407  A68_407 ;    /* UNION(MODE136,MODE406)  */
struct A68t408{
struct A68t407  Node;
A68_INT  Circuit;
A_PAD_INT(PAD_137)
A68_INT  Base;
A_PAD_INT(PAD_138)
};
typedef struct A68t408  A68_408 ;    /* STRUCT(MODE407,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t409,(struct A68t198 ,struct A68t115 *),(struct A68t198 ,struct A68t115 *,void *));
typedef struct A68t409  A68_409 ;    /* PROC(MODE198) MODE115 */

A_PROCEDURE(A68_BOOL ,A68t410,(struct A68t115 ,struct A68t115 ),(struct A68t115 ,struct A68t115 ,void *));
typedef struct A68t410  A68_410 ;    /* PROC(MODE115,MODE115) BOOL */

A_PROCEDURE(A68_BOOL ,A68t411,(struct A68t198 ,struct A68t198 ),(struct A68t198 ,struct A68t198 ,void *));
typedef struct A68t411  A68_411 ;    /* PROC(MODE198,MODE198) BOOL */

A_PROCEDURE(A68_BOOL ,A68t412,(struct A68t128 ,struct A68t128 ),(struct A68t128 ,struct A68t128 ,void *));
typedef struct A68t412  A68_412 ;    /* PROC(MODE128,MODE128) BOOL */

A_PROCEDURE(A68_BOOL ,A68t413,(struct A68t136 ,struct A68t136 ),(struct A68t136 ,struct A68t136 ,void *));
typedef struct A68t413  A68_413 ;    /* PROC(MODE136,MODE136) BOOL */

A_PROCEDURE(A68_BOOL ,A68t414,(struct A68t406 ,struct A68t406 ),(struct A68t406 ,struct A68t406 ,void *));
typedef struct A68t414  A68_414 ;    /* PROC(MODE406,MODE406) BOOL */

A_PROCEDURE(A68_BOOL ,A68t415,(struct A68t407 ,struct A68t407 ),(struct A68t407 ,struct A68t407 ,void *));
typedef struct A68t415  A68_415 ;    /* PROC(MODE407,MODE407) BOOL */

A_PROCEDURE(A68_BOOL ,A68t416,(struct A68t408 ,struct A68t408 ),(struct A68t408 ,struct A68t408 ,void *));
typedef struct A68t416  A68_416 ;    /* PROC(MODE408,MODE408) BOOL */

A_PROCEDURE(struct A68t123 *,A68t417,(struct A68t123 *,struct A68t123 *),(struct A68t123 *,struct A68t123 *,void *));
typedef struct A68t417  A68_417 ;    /* PROC(REF MODE123,REF MODE123) REF MODE123 */

A_PROCEDURE(A68_VOID ,A68t418,(struct A68t132 ,struct A68t132 ,struct A68t132 *),(struct A68t132 ,struct A68t132 ,struct A68t132 *,void *));
typedef struct A68t418  A68_418 ;    /* PROC(REF MODE132,REF MODE132) REF MODE132 */

A_PROCEDURE(A68_INT ,A68t419,(A68_VC ),(A68_VC ,void *));
typedef struct A68t419  A68_419 ;    /* PROC(REF MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t420,(struct A68t113 ),(struct A68t113 ,void *));
typedef struct A68t420  A68_420 ;    /* PROC(MODE113) VOID */

A_PROCEDURE(A68_VOID ,A68t421,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t421  A68_421 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,56,A68t422);
typedef struct A68t422  A68_422 ;    /* STRUCT 56 CHAR */
A_ROW(A68_INT ,A68t423,1);
typedef struct A68t423  A68_423 ;    /* [] INT */

A_PROCEDURE(A68_VOID ,A68t424,(struct A68t198 ,A68_INT ,A68_INT ,A68_BOOL ,struct A68t423 ,struct A68t423 ),(struct A68t198 ,A68_INT ,A68_INT ,A68_BOOL ,struct A68t423 ,struct A68t423 ,void *));
typedef struct A68t424  A68_424 ;    /* PROC(MODE198,INT,INT,BOOL,MODE423,MODE423) VOID */

A_PROCEDURE(A68_VOID ,A68t425,(struct A68t198 ,struct A68t32 ,A68_INT ,A68_INT ,A68_INT ,struct A68t423 ,A68_INT ),(struct A68t198 ,struct A68t32 ,A68_INT ,A68_INT ,A68_INT ,struct A68t423 ,A68_INT ,void *));
typedef struct A68t425  A68_425 ;    /* PROC(MODE198,MODE32,INT,INT,INT,MODE423,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t426,(A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t426  A68_426 ;    /* PROC(INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t427,(struct A68t198 ,A68_INT ,A68_INT ,struct A68t423 ,A68_INT ),(struct A68t198 ,A68_INT ,A68_INT ,struct A68t423 ,A68_INT ,void *));
typedef struct A68t427  A68_427 ;    /* PROC(MODE198,INT,INT,MODE423,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t428,(struct A68t326 ,A68_VC ,struct A68t336 ,struct A68t32 ,A68_INT ,struct A68t339 ,struct A68t349 *,struct A68t36 ,struct A68t130 *),(struct A68t326 ,A68_VC ,struct A68t336 ,struct A68t32 ,A68_INT ,struct A68t339 ,struct A68t349 *,struct A68t36 ,struct A68t130 *,void *));
typedef struct A68t428  A68_428 ;    /* PROC(MODE326,REF MODE26,MODE336,MODE32,INT,MODE339,REF MODE349,MODE36) MODE130 */

A_PROCEDURE(A68_VOID ,A68t429,(A68_BOOL ,struct A68t423 *),(A68_BOOL ,struct A68t423 *,void *));
typedef struct A68t429  A68_429 ;    /* PROC(BOOL) MODE423 */
A_ISTRUCT(A68_INT ,2,A68t430);
typedef struct A68t430  A68_430 ;    /* STRUCT 2 INT */

A_PROCEDURE(A68_VOID ,A68t431,(struct A68t327 ,A68_VC ,struct A68t336 ,struct A68t32 ,A68_INT ,struct A68t339 ,struct A68t349 *,struct A68t36 ,struct A68t130 *),(struct A68t327 ,A68_VC ,struct A68t336 ,struct A68t32 ,A68_INT ,struct A68t339 ,struct A68t349 *,struct A68t36 ,struct A68t130 *,void *));
typedef struct A68t431  A68_431 ;    /* PROC(MODE327,REF MODE26,MODE336,MODE32,INT,MODE339,REF MODE349,MODE36) MODE130 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from kebasics --- */
/* --- End of imports from kebasics --- */


/* --- Imports from keconv --- */
extern A68_INT  XOMATRN_int(struct A68t222 );
extern A68_VOID  OXBASIM_convertconst(struct A68t260 ,struct A68t339 ,struct A68t349 *,A68_198 *);
/* --- End of imports from keconv --- */


/* --- Imports from keamstandard --- */
extern A68_165  MZOASIM_globaltimelabel;
extern A68_165  CHPASIM_unchangedoutputlabel;
extern A68_VOID  DOPASIM_translatestartfunction(A68_VC );
extern A68_VOID  GOPASIM_translatestarteventsetter(A68_VC );
extern A68_VOID  JOPASIM_translatestarteventhandler(A68_VC );
extern A68_VOID  MOPASIM_translatestartinitialiser(A68_VC );
extern A68_VOID  ZOPASIM_translateendfunction(A68_INT ,A68_INT );
#define GPPASIM_leaveflag 0
#define HPPASIM_setflag 1
#define IPPASIM_resetflag 2
extern A68_VOID  PSPASIM_translatecopyinputs(struct A68t32 ,A68_INT ,struct A68t115 ,A68_INT ,A68_INT ,A68_INT );
extern A68_VOID  VTPASIM_translatecopyvalue(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT );
extern A68_VOID  CUPASIM_translateoutputconstant(struct A68t198 ,A68_INT ,A68_INT ,A68_INT ,A68_INT );
extern A68_VOID  IXPASIM_translatesetnextevent(A68_INT ,A68_INT );
/* --- End of imports from keamstandard --- */


/* --- Imports from keambasics --- */
extern A68_167  ONFASIM_indirect;
extern A68_VOID  YFNASIM_newlabel(A68_165 *);
#define CENASIM_bitsperbyte 8
extern A68_INT  DENASIM_ws;
extern A68_INT  GENASIM_sizeunit;
extern A68_VOID  SSNASIM_amadd(void);
extern A68_VOID  QTNASIM_amtest(void);
extern A68_VOID  STNASIM_ameq(void);
extern A68_VOID  CUNASIM_amle(void);
extern A68_VOID  IUNASIM_amnot(void);
extern A68_VOID  QUNASIM_ampushint(A68_INT );
extern A68_VOID  WUNASIM_amlocal(A68_INT );
extern A68_VOID  AVNASIM_amglobal(A68_INT ,struct A68t167 );
extern A68_VOID  FVNASIM_amstore(A68_INT ,struct A68t167 );
extern A68_VOID  LVNASIM_ambstring(A68_INT ,A68_INT ,struct A68t167 );
extern A68_VOID  EWNASIM_amjump(struct A68t165 );
extern A68_VOID  IWNASIM_amjumpno(A68_INT ,struct A68t165 );
extern A68_VOID  NWNASIM_amlabel(A68_INT ,struct A68t165 );
extern A68_VOID  HXNASIM_amfanout(A68_INT );
extern A68_VOID  KXNASIM_amret(A68_INT );
/* --- End of imports from keambasics --- */


/* --- Imports from kesymbols --- */
extern A68_VOID  VGCASIM_lookuptype(A68_INT ,A68_115 *);
extern A68_INT  YGCASIM_lookuptypesize(A68_INT );
#define IHCASIM_combinatorial 0X1U
extern A68_BITS  UHCASIM_unitdelay;
extern A68_BITS  VHCASIM_generaldelay;
/* --- End of imports from kesymbols --- */


/* --- Imports from basics --- */
/* --- End of imports from basics --- */


/* --- Imports from putstrings --- */
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void JSAASIM(void);   /* kebasics */
extern void KUBASIM(void);   /* keconv */
extern void HYOASIM(void);   /* keamstandard */
extern void XDNASIM(void);   /* keambasics */
extern void TCCASIM(void);   /* kesymbols */
extern void JSCAOST(void);   /* basics */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_422   BUVASIM = {"$Id: keamdelay.a68,v 34.2 1995/03/29 13:04:35 ella Exp $"}; 
A_GISVEC(A68_VC ,CUVASIM,BUVASIM,56)
static A68_INT  ZVVASIM_intermediateevent;
static A68_INT  AWVASIM_outputevent;
#define BWVASIM_noevent 0
#define CWVASIM_newevent 1
#define DWVASIM_pendingevent 2
typedef struct   /* env of non-global proc */
{
int dummy;
} GYVASIM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} YZVASIM_generator;

A_STATIC A68_VOID  JUVASIM_delayinitialiser(A68_198  Init, A68_INT  Type, A68_INT  Holdoffset, A68_BOOL  Unit, A68_423  Outputoffsets, A68_423  Eventoffsets);

A_STATIC A68_VOID  VUVASIM_translateclphase(A68_198  Ambig, A68_32  Inputtypes, A68_INT  Outputtype, A68_INT  Inputoffset, A68_INT  Holdoffset, A68_423  Outputoffsets, A68_INT  Fixedpartsize);

A_STATIC A68_VOID  MVVASIM_unitdelayhandler(A68_32  Inputtypes, A68_INT  Outputtype, A68_INT  Inputoffset, A68_INT  Outputoffset, A68_INT  Fixedpartsize);

A_STATIC A68_VOID  SVVASIM_setevent(A68_INT  Eventtype, A68_INT  Ahead, A68_INT  Holdoffset, A68_INT  D);

A_STATIC A68_VOID  XVVASIM_eventdue(A68_INT  Eventtype, A68_INT  Holdoffset, A68_INT  D);

A_STATIC A68_VOID  JWVASIM_generaldelaysetter(A68_32  Inputtypes, A68_INT  Inttime, A68_INT  Deltime, A68_INT  Outputtype, A68_INT  Holdoffset);

A_STATIC A68_VOID  UWVASIM_generaldelayhandler(A68_198  Ambig, A68_INT  Holdoffset, A68_INT  Outputtype, A68_423  Outputoffsets, A68_INT  Fixedpartsize);

A68_VOID  WXVASIM_translateadelay(A68_326  Body, A68_VC  Name, A68_336  Declaration, A68_32  Inputtypes, A68_INT  Outputtype, A68_339  Environ, A68_349 * Closure, A68_36  Flt, A68_130  *ReturnedValue);

A_STATIC A68_VOID  FYVASIM_generator(A68_BOOL  DYVASIM_anonymous, A68_423  *ReturnedValue, void *NonLocals);

A68_VOID  PZVASIM_translateidelay(A68_327  Body, A68_VC  Name, A68_336  Declaration, A68_32  Inputtypes, A68_INT  Outputtype, A68_339  Environ, A68_349 * Closure, A68_36  Flt, A68_130  *ReturnedValue);

A_STATIC A68_VOID  XZVASIM_generator(A68_BOOL  VZVASIM_anonymous, A68_423  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FYVASIM_generator(A68_BOOL  DYVASIM_anonymous, A68_423  *ReturnedValue, void *NonLocals)
#define NL(x) (((GYVASIM_generator *)NonLocals)->x)
{ 
A68_423  HYVASIM;  /* clause result */
A68_423  IYVASIM;  /* OPERATORS - dynamic generator */
{ 
 /* line 400: */
IYVASIM.dim[0].upb = 0 ;
IYVASIM.dim[0].lwb = 1 ;
A_1INITSTRIDES(IYVASIM) ;
( DYVASIM_anonymous? A_R1LOC(A68_INT ,IYVASIM): A_R1HEAP(A68_INT ,IYVASIM) );
HYVASIM = IYVASIM;
} 
*ReturnedValue = (HYVASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  XZVASIM_generator(A68_BOOL  VZVASIM_anonymous, A68_423  *ReturnedValue, void *NonLocals)
#define NL(x) (((YZVASIM_generator *)NonLocals)->x)
{ 
A68_423  ZZVASIM;  /* clause result */
A68_423  AAWASIM;  /* OPERATORS - dynamic generator */
{ 
 /* line 460: */
AAWASIM.dim[0].upb = 0 ;
AAWASIM.dim[0].lwb = 1 ;
A_1INITSTRIDES(AAWASIM) ;
( VZVASIM_anonymous? A_R1LOC(A68_INT ,AAWASIM): A_R1HEAP(A68_INT ,AAWASIM) );
ZZVASIM = AAWASIM;
} 
*ReturnedValue = (ZZVASIM);
return;
} 
#undef NL
 /* line 113: */
 /* line 114: */

A_STATIC A68_VOID  JUVASIM_delayinitialiser(A68_198  Init, A68_INT  Type, A68_INT  Holdoffset, A68_BOOL  Unit, A68_423  Outputoffsets, A68_423  Eventoffsets)
{ 
A68_INT  KUVASIM_i;
A68_INT  LUVASIM;  /* to part of loop */
A68_INT  MUVASIM_i;
A68_INT  NUVASIM;  /* to part of loop */
A_PROC_ENTRY(delayinitialiser);
 /* line 115: */
 /* line 116: */
{ 
 /* line 117: */
if ( !Unit )
{ 
 /* line 118: */
CUPASIM_translateoutputconstant(Init, Type, Holdoffset, GPPASIM_leaveflag, 1);
} 
 /* line 119: */
LUVASIM = Outputoffsets.dim[0].upb;
for ( KUVASIM_i = 1;
KUVASIM_i <= LUVASIM;
KUVASIM_i += 1 )
{ 
 /* line 120: */
 /* line 121: */
CUPASIM_translateoutputconstant(Init, Type, A_R1INDEX(Outputoffsets,KUVASIM_i), GPPASIM_leaveflag, 1);
}
 /* line 122: */
NUVASIM = Eventoffsets.dim[0].upb;
for ( MUVASIM_i = 1;
MUVASIM_i <= NUVASIM;
MUVASIM_i += 1 )
{ 
 /* line 123: */
WUNASIM_amlocal(0);
 /* line 124: */
QUNASIM_ampushint(A_R1INDEX(Eventoffsets,MUVASIM_i));
 /* line 125: */
SSNASIM_amadd();
 /* line 126: */
QUNASIM_ampushint(0);
 /* line 127: */
 /* line 128: */
FVNASIM_amstore(DENASIM_ws, ONFASIM_indirect);
}
 /* line 129: */
 /* line 130: */
KXNASIM_amret(0);
} 
A_PROC_EXIT(delayinitialiser);
return;
} 
#undef NL
 /* line 137: */
 /* line 138: */

A_STATIC A68_VOID  VUVASIM_translateclphase(A68_198  Ambig, A68_32  Inputtypes, A68_INT  Outputtype, A68_INT  Inputoffset, A68_INT  Holdoffset, A68_423  Outputoffsets, A68_INT  Fixedpartsize)
{ 
A68_165  WUVASIM;  /* avoid structure result */
A68_165  XUVASIM_changedinputlabel;
A68_165  YUVASIM;  /* avoid structure result */
A68_165  ZUVASIM_dofanoutlabel;
A68_INT  AVVASIM_comparewith;
A68_INT  BVVASIM_i;
A68_INT  CVVASIM;  /* to part of loop */
A68_INT  DVVASIM_datasize;
A68_INT  EVVASIM;  /* YIELD */
A68_INT  FVVASIM;  /* YIELD */
A68_INT  GVVASIM;  /* YIELD */
A_PROC_ENTRY(translateclphase);
 /* line 139: */
 /* line 142: */
{ 
YFNASIM_newlabel(  &WUVASIM );
XUVASIM_changedinputlabel = WUVASIM;
 /* line 143: */
YFNASIM_newlabel(  &YUVASIM );
ZUVASIM_dofanoutlabel = YUVASIM;
 /* line 144: */
AVVASIM_comparewith = Holdoffset;
 /* line 146: */
CVVASIM = Inputtypes.upb;
for ( BVVASIM_i = 1;
BVVASIM_i <= CVVASIM;
BVVASIM_i += 1 )
{ 
 /* line 147: */
DVVASIM_datasize = YGCASIM_lookuptypesize(A_VINDEX(Inputtypes,BVVASIM_i));
 /* line 149: */
 /* line 150: */
if ( (DVVASIM_datasize!=DENASIM_ws) )
{ 
QUNASIM_ampushint(0);
 /* line 151: */
 /* line 152: */
 /* line 153: */
WUNASIM_amlocal(1);
} 
else
{ 
 /* line 154: */
WUNASIM_amlocal(0);
} 
 /* line 155: */
QUNASIM_ampushint((Inputoffset+((BVVASIM_i-1)*DENASIM_ws)));
 /* line 156: */
SSNASIM_amadd();
 /* line 157: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 160: */
 /* line 161: */
if ( (DVVASIM_datasize==DENASIM_ws) )
{ 
 /* line 162: */
 /* line 163: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
} 
else
{ 
 /* line 164: */
 /* line 165: */
LVNASIM_ambstring((DVVASIM_datasize*CENASIM_bitsperbyte), (DVVASIM_datasize*CENASIM_bitsperbyte), ONFASIM_indirect);
} 
 /* line 168: */
 /* line 169: */
if ( (DVVASIM_datasize!=DENASIM_ws) )
{ 
QUNASIM_ampushint(0);
 /* line 170: */
 /* line 171: */
 /* line 172: */
WUNASIM_amlocal(2);
} 
else
{ 
 /* line 173: */
WUNASIM_amlocal(1);
} 
 /* line 174: */
QUNASIM_ampushint(AVVASIM_comparewith);
 /* line 175: */
SSNASIM_amadd();
 /* line 178: */
 /* line 179: */
if ( (DVVASIM_datasize==DENASIM_ws) )
{ 
 /* line 180: */
 /* line 181: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
} 
else
{ 
 /* line 182: */
 /* line 183: */
LVNASIM_ambstring((DVVASIM_datasize*CENASIM_bitsperbyte), (DVVASIM_datasize*CENASIM_bitsperbyte), ONFASIM_indirect);
} 
 /* line 186: */
STNASIM_ameq();
 /* line 187: */
IWNASIM_amjumpno(0, XUVASIM_changedinputlabel);
 /* line 189: */
 /* line 190: */
AVVASIM_comparewith+=DVVASIM_datasize;
}
 /* line 192: */
 /* line 193: */
EVVASIM = 2 ;
FVVASIM = 1 ;
VTPASIM_translatecopyvalue(Outputtype, A_R1INDEX(Outputoffsets,FVVASIM), A_R1INDEX(Outputoffsets,EVVASIM), IPPASIM_resetflag, 1);
 /* line 194: */
EWNASIM_amjump(ZUVASIM_dofanoutlabel);
 /* line 196: */
NWNASIM_amlabel(1, XUVASIM_changedinputlabel);
 /* line 199: */
 /* line 200: */
GVVASIM = 2 ;
CUPASIM_translateoutputconstant(Ambig, Outputtype, A_R1INDEX(Outputoffsets,GVVASIM), IPPASIM_resetflag, 1);
 /* line 202: */
NWNASIM_amlabel(1, ZUVASIM_dofanoutlabel);
 /* line 203: */
WUNASIM_amlocal(0);
 /* line 204: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 205: */
QTNASIM_amtest();
 /* line 206: */
IUNASIM_amnot();
 /* line 207: */
IWNASIM_amjumpno(1, CHPASIM_unchangedoutputlabel);
 /* line 210: */
WUNASIM_amlocal(0);
 /* line 211: */
QUNASIM_ampushint(1);
 /* line 212: */
FVNASIM_amstore(DENASIM_ws, ONFASIM_indirect);
 /* line 214: */
HXNASIM_amfanout(Fixedpartsize);
 /* line 216: */
NWNASIM_amlabel(0, CHPASIM_unchangedoutputlabel);
 /* line 218: */
 /* line 219: */
KXNASIM_amret(0);
} 
A_PROC_EXIT(translateclphase);
return;
} 
#undef NL
 /* line 226: */

A_STATIC A68_VOID  MVVASIM_unitdelayhandler(A68_32  Inputtypes, A68_INT  Outputtype, A68_INT  Inputoffset, A68_INT  Outputoffset, A68_INT  Fixedpartsize)
{ 
A68_115  NVVASIM;  /* avoid structure result */
A_PROC_ENTRY(unitdelayhandler);
 /* line 227: */
 /* line 229: */
{ 
 /* line 230: */
 /* line 231: */
VGCASIM_lookuptype( Outputtype, &NVVASIM );
PSPASIM_translatecopyinputs(Inputtypes, Inputoffset, NVVASIM, Outputoffset, IPPASIM_resetflag, 1);
 /* line 233: */
 /* line 234: */
ZOPASIM_translateendfunction(Fixedpartsize, 1);
} 
A_PROC_EXIT(unitdelayhandler);
return;
} 
#undef NL

A_STATIC A68_VOID  SVVASIM_setevent(A68_INT  Eventtype, A68_INT  Ahead, A68_INT  Holdoffset, A68_INT  D)
{ 
A68_167  TVVASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(setevent);
 /* line 241: */
 /* line 242: */
{ 
WUNASIM_amlocal((D-1));
 /* line 243: */
QUNASIM_ampushint((Holdoffset+(DENASIM_ws*Eventtype)));
 /* line 244: */
SSNASIM_amadd();
 /* line 245: */
AVNASIM_amglobal(DENASIM_ws, A_UNITE(TVVASIM,mode2,2,MZOASIM_globaltimelabel));
 /* line 246: */
QUNASIM_ampushint(Ahead);
 /* line 247: */
SSNASIM_amadd();
 /* line 248: */
 /* line 249: */
FVNASIM_amstore(DENASIM_ws, ONFASIM_indirect);
} 
A_PROC_EXIT(setevent);
return;
} 
#undef NL

A_STATIC A68_VOID  XVVASIM_eventdue(A68_INT  Eventtype, A68_INT  Holdoffset, A68_INT  D)
{ 
A68_167  YVVASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(eventdue);
 /* line 257: */
 /* line 258: */
{ 
WUNASIM_amlocal((D-1));
 /* line 259: */
QUNASIM_ampushint((Holdoffset+(DENASIM_ws*Eventtype)));
 /* line 260: */
SSNASIM_amadd();
 /* line 261: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 262: */
AVNASIM_amglobal(DENASIM_ws, A_UNITE(YVVASIM,mode2,2,MZOASIM_globaltimelabel));
 /* line 263: */
 /* line 264: */
STNASIM_ameq();
} 
A_PROC_EXIT(eventdue);
return;
} 
#undef NL
 /* line 277: */

A_STATIC A68_VOID  JWVASIM_generaldelaysetter(A68_32  Inputtypes, A68_INT  Inttime, A68_INT  Deltime, A68_INT  Outputtype, A68_INT  Holdoffset)
{ 
A68_165  KWVASIM;  /* avoid structure result */
A68_165  LWVASIM_noeventlabel;
A68_INT  MWVASIM_firstinput;
A68_115  NWVASIM;  /* avoid structure result */
A68_167  OWVASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(generaldelaysetter);
 /* line 278: */
 /* line 279: */
{ 
YFNASIM_newlabel(  &KWVASIM );
LWVASIM_noeventlabel = KWVASIM;
 /* line 281: */
MWVASIM_firstinput = (GENASIM_sizeunit+DENASIM_ws);
 /* line 283: */
WUNASIM_amlocal(0);
 /* line 284: */
AVNASIM_amglobal(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 285: */
QUNASIM_ampushint(CWVASIM_newevent);
 /* line 286: */
STNASIM_ameq();
 /* line 287: */
IWNASIM_amjumpno(0, LWVASIM_noeventlabel);
 /* line 289: */
WUNASIM_amlocal(0);
 /* line 290: */
QUNASIM_ampushint(0);
 /* line 291: */
FVNASIM_amstore(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 293: */
 /* line 294: */
 /* line 295: */
VGCASIM_lookuptype( Outputtype, &NWVASIM );
PSPASIM_translatecopyinputs(Inputtypes, MWVASIM_firstinput, NWVASIM, Holdoffset, HPPASIM_setflag, 1);
 /* line 297: */
WUNASIM_amlocal(0);
 /* line 298: */
AVNASIM_amglobal(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 299: */
QTNASIM_amtest();
 /* line 300: */
IWNASIM_amjumpno(0, LWVASIM_noeventlabel);
 /* line 301: */
SVVASIM_setevent(AWVASIM_outputevent, Deltime, Holdoffset, 1);
 /* line 302: */
WUNASIM_amlocal(0);
 /* line 303: */
QUNASIM_ampushint((Holdoffset+(DENASIM_ws*ZVVASIM_intermediateevent)));
 /* line 304: */
SSNASIM_amadd();
 /* line 305: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 306: */
AVNASIM_amglobal(DENASIM_ws, A_UNITE(OWVASIM,mode2,2,MZOASIM_globaltimelabel));
 /* line 307: */
CUNASIM_amle();
 /* line 308: */
IWNASIM_amjumpno(0, LWVASIM_noeventlabel);
 /* line 310: */
SVVASIM_setevent(ZVVASIM_intermediateevent, Inttime, Holdoffset, 1);
 /* line 311: */
NWNASIM_amlabel(1, LWVASIM_noeventlabel);
 /* line 312: */
IXPASIM_translatesetnextevent((Holdoffset+(DENASIM_ws*ZVVASIM_intermediateevent)), 1);
 /* line 313: */
IXPASIM_translatesetnextevent((Holdoffset+(DENASIM_ws*AWVASIM_outputevent)), 1);
 /* line 314: */
QUNASIM_ampushint(DWVASIM_pendingevent);
 /* line 315: */
FVNASIM_amstore(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 316: */
 /* line 317: */
KXNASIM_amret(0);
} 
A_PROC_EXIT(generaldelaysetter);
return;
} 
#undef NL
 /* line 323: */

A_STATIC A68_VOID  UWVASIM_generaldelayhandler(A68_198  Ambig, A68_INT  Holdoffset, A68_INT  Outputtype, A68_423  Outputoffsets, A68_INT  Fixedpartsize)
{ 
A68_165  VWVASIM;  /* avoid structure result */
A68_165  WWVASIM_checkintermediatelabel;
A68_165  XWVASIM;  /* avoid structure result */
A68_165  YWVASIM_endhandlerlabel;
A68_165  ZWVASIM;  /* avoid structure result */
A68_165  AXVASIM_dofanoutlabel;
A68_165  BXVASIM;  /* avoid structure result */
A68_165  CXVASIM_checkoutputssamelabel;
A68_INT  DXVASIM_i;
A68_INT  EXVASIM;  /* to part of loop */
A68_INT  FXVASIM;  /* clause result */
A68_INT  GXVASIM_flagstate;
A68_198  HXVASIM;  /* united object - for case conformity */
A68_INT  IXVASIM_i;
A68_INT  JXVASIM;  /* to part of loop */
A68_INT  KXVASIM;  /* clause result */
A68_INT  LXVASIM_flagstate;
A68_INT  MXVASIM;  /* YIELD */
A68_INT  NXVASIM;  /* YIELD */
A_PROC_ENTRY(generaldelayhandler);
 /* line 324: */
 /* line 325: */
{ 
YFNASIM_newlabel(  &VWVASIM );
WWVASIM_checkintermediatelabel = VWVASIM;
 /* line 326: */
YFNASIM_newlabel(  &XWVASIM );
YWVASIM_endhandlerlabel = XWVASIM;
 /* line 327: */
YFNASIM_newlabel(  &ZWVASIM );
AXVASIM_dofanoutlabel = ZWVASIM;
 /* line 328: */
YFNASIM_newlabel(  &BXVASIM );
CXVASIM_checkoutputssamelabel = BXVASIM;
 /* line 330: */
XVVASIM_eventdue(AWVASIM_outputevent, Holdoffset, 1);
 /* line 331: */
IWNASIM_amjumpno(0, WWVASIM_checkintermediatelabel);
 /* line 332: */
EXVASIM = Outputoffsets.dim[0].upb;
for ( DXVASIM_i = 1;
DXVASIM_i <= EXVASIM;
DXVASIM_i += 1 )
{ 
 /* line 334: */
if ( (DXVASIM_i==Outputoffsets.dim[0].upb) )
{ 
FXVASIM = IPPASIM_resetflag;
} 
else
{ 
FXVASIM = GPPASIM_leaveflag;
} 
GXVASIM_flagstate = FXVASIM;
 /* line 335: */
 /* line 336: */
 /* line 337: */
VTPASIM_translatecopyvalue(Outputtype, Holdoffset, A_R1INDEX(Outputoffsets,DXVASIM_i), GXVASIM_flagstate, 1);
}
 /* line 338: */
QUNASIM_ampushint(BWVASIM_noevent);
 /* line 339: */
EWNASIM_amjump(AXVASIM_dofanoutlabel);
 /* line 341: */
NWNASIM_amlabel(1, WWVASIM_checkintermediatelabel);
 /* line 343: */
QUNASIM_ampushint(DWVASIM_pendingevent);
 /* line 344: */
 /* line 345: */
HXVASIM = Ambig ;
switch ( HXVASIM.mode )
{ 
case 9: /* STRUCT(INT)  */
 /* line 346: */
 /* line 347: */
/*SKIP*/;
break;
default: 
XVVASIM_eventdue(ZVVASIM_intermediateevent, Holdoffset, 2);
 /* line 348: */
IWNASIM_amjumpno(0, CXVASIM_checkoutputssamelabel);
 /* line 349: */
JXVASIM = Outputoffsets.dim[0].upb;
for ( IXVASIM_i = 1;
IXVASIM_i <= JXVASIM;
IXVASIM_i += 1 )
{ 
 /* line 351: */
if ( (IXVASIM_i==Outputoffsets.dim[0].upb) )
{ 
KXVASIM = IPPASIM_resetflag;
} 
else
{ 
KXVASIM = GPPASIM_leaveflag;
} 
LXVASIM_flagstate = KXVASIM;
 /* line 352: */
 /* line 353: */
 /* line 354: */
CUPASIM_translateoutputconstant(Ambig, Outputtype, A_R1INDEX(Outputoffsets,IXVASIM_i), LXVASIM_flagstate, 2);
}
 /* line 355: */
EWNASIM_amjump(AXVASIM_dofanoutlabel);
 /* line 357: */
NWNASIM_amlabel(2, CXVASIM_checkoutputssamelabel);
 /* line 358: */
 /* line 360: */
if ( (Outputoffsets.dim[0].upb==2) )
{ 
 /* line 361: */
 /* line 362: */
 /* line 363: */
MXVASIM = 1 ;
NXVASIM = 2 ;
VTPASIM_translatecopyvalue(Outputtype, A_R1INDEX(Outputoffsets,NXVASIM), A_R1INDEX(Outputoffsets,MXVASIM), GPPASIM_leaveflag, 2);
} 
break;
} 
 /* line 364: */
NWNASIM_amlabel(2, AXVASIM_dofanoutlabel);
 /* line 367: */
WUNASIM_amlocal(1);
 /* line 368: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 369: */
QTNASIM_amtest();
 /* line 370: */
IUNASIM_amnot();
 /* line 371: */
IWNASIM_amjumpno(2, YWVASIM_endhandlerlabel);
 /* line 373: */
WUNASIM_amlocal(1);
 /* line 374: */
HXNASIM_amfanout(Fixedpartsize);
 /* line 376: */
NWNASIM_amlabel(2, YWVASIM_endhandlerlabel);
 /* line 379: */
FVNASIM_amstore(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 381: */
 /* line 382: */
KXNASIM_amret(0);
} 
A_PROC_EXIT(generaldelayhandler);
return;
} 
#undef NL
 /* line 388: */
 /* line 389: */
 /* line 390: */

A68_VOID  WXVASIM_translateadelay(A68_326  Body, A68_VC  Name, A68_336  Declaration, A68_32  Inputtypes, A68_INT  Outputtype, A68_339  Environ, A68_349 * Closure, A68_36  Flt, A68_130  *ReturnedValue)
{ 
A68_INT  XXVASIM_inttime;
A68_INT  YXVASIM_time;
A68_BOOL  ZXVASIM_unit;
A68_INT  AYVASIM_datasize;
A68_INT  BYVASIM_inputoffset;
A68_INT  CYVASIM_eventoffset;
A68_429  EYVASIM_generator;   /* proc value of non-global proc */
A68_423  JYVASIM;  /* clause result */
A68_423  KYVASIM;  /* avoid structure result */
A68_430  LYVASIM;  /* collateral clause result */
A68_423  MYVASIM;  /* OPERATORS - istruct to row */
A68_423  NYVASIM_eventoffsets;
A68_INT  OYVASIM_holdoffset;
A68_430  PYVASIM;  /* collateral clause result */
A68_423  QYVASIM;  /* clause result */
A68_423  RYVASIM;  /* OPERATORS - istruct to row */
A68_423  SYVASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_423  TYVASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_423  UYVASIM_outputoffsets;
A68_INT  VYVASIM;  /* YIELD */
A68_INT  WYVASIM_fixedpartsize;
A68_BITS  XYVASIM_clphaseneeded;
A68_198  YYVASIM;  /* avoid structure result */
A68_198  ZYVASIM;  /* avoid structure result */
A68_198  AZVASIM_ambig;
A68_INT  BZVASIM;  /* YIELD */
A68_198  CZVASIM;  /* avoid structure result */
A68_198  DZVASIM_ambig;
A68_130  EZVASIM;  /* collateral clause result */
A68_INT  FZVASIM;  /* YIELD */
A68_130  GZVASIM;  /* clause result */
A_PROC_ENTRY(translateadelay);
 /* line 391: */
 /* line 392: */
{ 
XXVASIM_inttime = XOMATRN_int(Body.Ambigtime);
 /* line 393: */
YXVASIM_time = XOMATRN_int(Body.Delaytime);
 /* line 394: */
ZXVASIM_unit = ((YXVASIM_time==1)&(XXVASIM_inttime!=0));
 /* line 395: */
AYVASIM_datasize = YGCASIM_lookuptypesize(Outputtype);
 /* line 396: */
BYVASIM_inputoffset = (GENASIM_sizeunit+DENASIM_ws);
 /* line 397: */
CYVASIM_eventoffset = (BYVASIM_inputoffset+(Inputtypes.upb*DENASIM_ws));
 /* line 398: */
 /* line 399: */
if ( ZXVASIM_unit )
{ 
A_CLOSURE( EYVASIM_generator, FYVASIM_generator, GYVASIM_generator );
A_CALLPROC(EYVASIM_generator,(A68_TRUE, &KYVASIM),(A68_TRUE, &KYVASIM,(EYVASIM_generator).nonlocals));
JYVASIM = KYVASIM;
} 
else
{ 
LYVASIM.data[0] = CYVASIM_eventoffset;
 /* line 401: */
LYVASIM.data[1] = (CYVASIM_eventoffset+DENASIM_ws);
JYVASIM = A_HIS1ARR(MYVASIM,LYVASIM,A68_INT ,2);
} 
NYVASIM_eventoffsets = JYVASIM;
 /* line 402: */
OYVASIM_holdoffset = (CYVASIM_eventoffset+(NYVASIM_eventoffsets.dim[0].upb*DENASIM_ws));
 /* line 403: */
 /* line 404: */
 /* line 405: */
if ( (XXVASIM_inttime==0) )
{ 
PYVASIM.data[0] = (OYVASIM_holdoffset+AYVASIM_datasize);
 /* line 406: */
PYVASIM.data[1] = (OYVASIM_holdoffset+(2*AYVASIM_datasize));
QYVASIM = A_HIS1ARR(RYVASIM,PYVASIM,A68_INT ,2);
} 
else
{ 
 /* line 407: */
if ( ZXVASIM_unit )
{ 
QYVASIM = A_HARR(SYVASIM,OYVASIM_holdoffset,A68_INT );
} 
else
{ 
 /* line 408: */
QYVASIM = A_HARR(TYVASIM,(OYVASIM_holdoffset+AYVASIM_datasize),A68_INT );
} 
} 
UYVASIM_outputoffsets = QYVASIM;
 /* line 409: */
VYVASIM = UYVASIM_outputoffsets.dim[0].upb ;
WYVASIM_fixedpartsize = (A_R1INDEX(UYVASIM_outputoffsets,VYVASIM)+AYVASIM_datasize);
 /* line 411: */
XYVASIM_clphaseneeded = (A68_BITS )0;
 /* line 413: */
MOPASIM_translatestartinitialiser(Name);
 /* line 414: */
 /* line 415: */
 /* line 416: */
OXBASIM_convertconst( Body.Init, Environ, Closure, &YYVASIM );
JUVASIM_delayinitialiser(YYVASIM, Outputtype, OYVASIM_holdoffset, ZXVASIM_unit, UYVASIM_outputoffsets, NYVASIM_eventoffsets);
 /* line 418: */
 /* line 419: */
if ( (XXVASIM_inttime==0) )
{ 
DOPASIM_translatestartfunction(Name);
 /* line 420: */
OXBASIM_convertconst( Body.Ambig, Environ, Closure, &ZYVASIM );
AZVASIM_ambig = ZYVASIM;
 /* line 421: */
 /* line 422: */
VUVASIM_translateclphase(AZVASIM_ambig, Inputtypes, Outputtype, BYVASIM_inputoffset, OYVASIM_holdoffset, UYVASIM_outputoffsets, WYVASIM_fixedpartsize);
 /* line 423: */
 /* line 424: */
XYVASIM_clphaseneeded = IHCASIM_combinatorial;
} 
 /* line 426: */
 /* line 427: */
if ( !ZXVASIM_unit )
{ 
GOPASIM_translatestarteventsetter(Name);
 /* line 428: */
 /* line 429: */
JWVASIM_generaldelaysetter(Inputtypes, XXVASIM_inttime, YXVASIM_time, Outputtype, OYVASIM_holdoffset);
} 
 /* line 431: */
JOPASIM_translatestarteventhandler(Name);
 /* line 432: */
 /* line 433: */
if ( ZXVASIM_unit )
{ 
 /* line 434: */
 /* line 435: */
 /* line 436: */
BZVASIM = 1 ;
MVVASIM_unitdelayhandler(Inputtypes, Outputtype, BYVASIM_inputoffset, A_R1INDEX(UYVASIM_outputoffsets,BZVASIM), WYVASIM_fixedpartsize);
} 
else
{ 
OXBASIM_convertconst( Body.Ambig, Environ, Closure, &CZVASIM );
DZVASIM_ambig = CZVASIM;
 /* line 437: */
 /* line 438: */
 /* line 439: */
UWVASIM_generaldelayhandler(DZVASIM_ambig, OYVASIM_holdoffset, Outputtype, UYVASIM_outputoffsets, WYVASIM_fixedpartsize);
} 
 /* line 441: */
EZVASIM.Size = WYVASIM_fixedpartsize;
 /* line 442: */
FZVASIM = UYVASIM_outputoffsets.dim[0].upb ;
EZVASIM.Offset = A_R1INDEX(UYVASIM_outputoffsets,FZVASIM);
if ( ZXVASIM_unit )
{ 
EZVASIM.Sort = UHCASIM_unitdelay;
} 
else
{ 
 /* line 443: */
EZVASIM.Sort = (A68_BITS )(VHCASIM_generaldelay|XYVASIM_clphaseneeded);
} 
GZVASIM = EZVASIM;
} 
A_PROC_EXIT(translateadelay);
*ReturnedValue = (GZVASIM);
return;
} 
#undef NL
 /* line 449: */
 /* line 450: */
 /* line 451: */

A68_VOID  PZVASIM_translateidelay(A68_327  Body, A68_VC  Name, A68_336  Declaration, A68_32  Inputtypes, A68_INT  Outputtype, A68_339  Environ, A68_349 * Closure, A68_36  Flt, A68_130  *ReturnedValue)
{ 
A68_INT  QZVASIM_time;
A68_BOOL  RZVASIM_unit;
A68_INT  SZVASIM_datasize;
A68_INT  TZVASIM_inputoffset;
A68_INT  UZVASIM_eventoffset;
A68_429  WZVASIM_generator;   /* proc value of non-global proc */
A68_423  BAWASIM;  /* clause result */
A68_423  CAWASIM;  /* avoid structure result */
A68_430  DAWASIM;  /* collateral clause result */
A68_423  EAWASIM;  /* OPERATORS - istruct to row */
A68_423  FAWASIM_eventoffsets;
A68_INT  GAWASIM_holdoffset;
A68_INT  HAWASIM;  /* clause result */
A68_INT  IAWASIM_outputoffset;
A68_INT  JAWASIM_fixedpartsize;
A68_423  KAWASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_198  LAWASIM;  /* avoid structure result */
A68_207  MAWASIM_ambig;
A68_INT * NAWASIM;  /* YIELD */
A68_423  OAWASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_198  PAWASIM;  /* OPERATORS - mode -> union mode */
A68_130  QAWASIM;  /* collateral clause result */
A68_130  RAWASIM;  /* clause result */
A_PROC_ENTRY(translateidelay);
 /* line 452: */
 /* line 453: */
{ 
QZVASIM_time = XOMATRN_int(Body.Delaytime);
 /* line 454: */
RZVASIM_unit = (QZVASIM_time==1);
 /* line 455: */
SZVASIM_datasize = YGCASIM_lookuptypesize(Outputtype);
 /* line 456: */
TZVASIM_inputoffset = (GENASIM_sizeunit+DENASIM_ws);
 /* line 457: */
UZVASIM_eventoffset = (TZVASIM_inputoffset+(Inputtypes.upb*DENASIM_ws));
 /* line 458: */
 /* line 459: */
if ( (QZVASIM_time==1) )
{ 
A_CLOSURE( WZVASIM_generator, XZVASIM_generator, YZVASIM_generator );
A_CALLPROC(WZVASIM_generator,(A68_TRUE, &CAWASIM),(A68_TRUE, &CAWASIM,(WZVASIM_generator).nonlocals));
BAWASIM = CAWASIM;
} 
else
{ 
DAWASIM.data[0] = UZVASIM_eventoffset;
 /* line 461: */
DAWASIM.data[1] = (UZVASIM_eventoffset+DENASIM_ws);
BAWASIM = A_HIS1ARR(EAWASIM,DAWASIM,A68_INT ,2);
} 
FAWASIM_eventoffsets = BAWASIM;
 /* line 462: */
GAWASIM_holdoffset = (UZVASIM_eventoffset+(FAWASIM_eventoffsets.dim[0].upb*DENASIM_ws));
 /* line 463: */
 /* line 464: */
if ( RZVASIM_unit )
{ 
HAWASIM = GAWASIM_holdoffset;
} 
else
{ 
 /* line 465: */
HAWASIM = (GAWASIM_holdoffset+SZVASIM_datasize);
} 
IAWASIM_outputoffset = HAWASIM;
 /* line 466: */
JAWASIM_fixedpartsize = (IAWASIM_outputoffset+SZVASIM_datasize);
 /* line 468: */
MOPASIM_translatestartinitialiser(Name);
 /* line 469: */
 /* line 470: */
 /* line 471: */
OXBASIM_convertconst( Body.Init, Environ, Closure, &LAWASIM );
JUVASIM_delayinitialiser(LAWASIM, Outputtype, GAWASIM_holdoffset, RZVASIM_unit, A_HARR(KAWASIM,IAWASIM_outputoffset,A68_INT ), FAWASIM_eventoffsets);
 /* line 473: */
 /* line 474: */
if ( !RZVASIM_unit )
{ 
GOPASIM_translatestarteventsetter(Name);
 /* line 475: */
 /* line 476: */
JWVASIM_generaldelaysetter(Inputtypes, (-1), QZVASIM_time, Outputtype, GAWASIM_holdoffset);
} 
 /* line 478: */
JOPASIM_translatestarteventhandler(Name);
 /* line 479: */
 /* line 480: */
if ( RZVASIM_unit )
{ 
 /* line 481: */
 /* line 482: */
 /* line 483: */
MVVASIM_unitdelayhandler(Inputtypes, Outputtype, TZVASIM_inputoffset, IAWASIM_outputoffset, JAWASIM_fixedpartsize);
} 
else
{ 
 /* line 484: */
NAWASIM = (&((&MAWASIM_ambig)->Svnull)) ;
(*NAWASIM) = 0;
 /* line 485: */
 /* line 486: */
UWVASIM_generaldelayhandler(A_UNITE(PAWASIM,mode9,9,MAWASIM_ambig), GAWASIM_holdoffset, Outputtype, A_HARR(OAWASIM,IAWASIM_outputoffset,A68_INT ), JAWASIM_fixedpartsize);
} 
 /* line 488: */
QAWASIM.Size = JAWASIM_fixedpartsize;
 /* line 489: */
QAWASIM.Offset = IAWASIM_outputoffset;
if ( RZVASIM_unit )
{ 
QAWASIM.Sort = UHCASIM_unitdelay;
} 
else
{ 
 /* line 490: */
 /* line 493: */
QAWASIM.Sort = VHCASIM_generaldelay;
} 
RAWASIM = QAWASIM;
} 
A_PROC_EXIT(translateidelay);
*ReturnedValue = (RAWASIM);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void YTVASIM(void)   /* initialise DECS keamdelay */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/keamdelay.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/kebasics.m","./mfiles/keconv.m","./mfiles/keamstandard.m","./mfiles/keambasics.m","./mfiles/kesymbols.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
JSAASIM();   /* USE kebasics */
KUBASIM();   /* USE keconv */
HYOASIM();   /* USE keamstandard */
XDNASIM();   /* USE keambasics */
TCCASIM();   /* USE kesymbols */
JSCAOST();   /* USE basics */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/keamdelay.a68";
A_config.translation_time = "Tue Apr  4 11:10:54 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "XTVASIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:10:54 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS keamdelay);
UEAALIB_a68config(LGAALIB_configinfo, CUVASIM);
 /* line 112: */
 /* line 136: */
 /* line 225: */
 /* line 240: */
 /* line 256: */
 /* line 269: */
ZVVASIM_intermediateevent = (-1);
 /* line 270: */
AWVASIM_outputevent = (-2);
 /* line 272: */
 /* line 273: */
 /* line 274: */
 /* line 276: */
 /* line 322: */
 /* line 387: */
 /* line 448: */
 /* line 495: */
A_PROC_EXIT(DECS keamdelay);
} 
#undef NL
/* end of translation of ./a68files/keamdelay.a68 */
