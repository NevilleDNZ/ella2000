
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
/* UNAME:MYNASIM */
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
struct A68t162 { A68_INT mode; union {
struct A68t117 * mode1;
struct A68t118 * mode2;
struct A68t119 * mode3;
} data; };
typedef struct A68t162  A68_162 ;    /* UNION(REF MODE117,REF MODE118,REF MODE119)  */
struct A68t163{
A68_INT  Svvoid;
A_PAD_INT(PAD_48)
};
typedef struct A68t163  A68_163 ;    /* STRUCT(INT)  */
struct A68t164{
A68_INT  Svnull;
A_PAD_INT(PAD_49)
};
typedef struct A68t164  A68_164 ;    /* STRUCT(INT)  */
struct A68t165{
struct A68t115  Type;
};
typedef struct A68t165  A68_165 ;    /* STRUCT(MODE115)  */
struct A68t166{
struct A68t118 * Type;
A68_INT  Value;
A_PAD_INT(PAD_50)
};
typedef struct A68t166  A68_166 ;    /* STRUCT(REF MODE118,INT)  */
struct A68t167{
struct A68t119 * Type;
A68_CHAR  Value;
A_PAD_CHAR(PAD_51)
};
typedef struct A68t167  A68_167 ;    /* STRUCT(REF MODE119,CHAR)  */
struct A68t168{
struct A68t121 * Type;
A68_VC  Value;
};
typedef struct A68t168  A68_168 ;    /* STRUCT(REF MODE121,REF MODE26)  */
struct A68t170 { A68_INT mode; union {
struct A68t165 * mode1;
struct A68t166 * mode2;
struct A68t167 * mode3;
struct A68t168 * mode4;
struct A68t169 * mode5;
struct A68t171 * mode6;
struct A68t172 * mode7;
struct A68t163  mode8;
struct A68t164  mode9;
} data; };
typedef struct A68t170  A68_170 ;    /* UNION(REF MODE165,REF MODE166,REF MODE167,REF MODE168,REF MODE169,REF MODE171,REF MODE172,MODE163,MODE164)  */
struct A68t169{
struct A68t117 * Type;
A68_INT  Tag;
A_PAD_INT(PAD_52)
struct A68t170  Assoc;
};
typedef struct A68t169  A68_169 ;    /* STRUCT(REF MODE117,INT,MODE170)  */
struct A68t171{
struct A68t170  Head;
struct A68t171 * Tail;
};
typedef struct A68t171  A68_171 ;    /* STRUCT(MODE170,REF MODE171)  */
struct A68t172{
struct A68t170  From;
struct A68t170  To;
};
typedef struct A68t172  A68_172 ;    /* STRUCT(MODE170,MODE170)  */
struct A68t173{
struct A68t128 * Wire;
A68_INT  Instance;
A_PAD_INT(PAD_53)
};
typedef struct A68t173  A68_173 ;    /* STRUCT(REF MODE128,INT)  */
struct A68t174 { A68_INT mode; union {
struct A68t136  mode1;
struct A68t173  mode2;
} data; };
typedef struct A68t174  A68_174 ;    /* UNION(MODE136,MODE173)  */
struct A68t175{
struct A68t174  Node;
A68_INT  Circuit;
A_PAD_INT(PAD_54)
A68_INT  Base;
A_PAD_INT(PAD_55)
};
typedef struct A68t175  A68_175 ;    /* STRUCT(MODE174,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t176,(struct A68t170 ,struct A68t115 *),(struct A68t170 ,struct A68t115 *,void *));
typedef struct A68t176  A68_176 ;    /* PROC(MODE170) MODE115 */

A_PROCEDURE(A68_BOOL ,A68t177,(struct A68t115 ,struct A68t115 ),(struct A68t115 ,struct A68t115 ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(MODE115,MODE115) BOOL */

A_PROCEDURE(A68_BOOL ,A68t178,(struct A68t170 ,struct A68t170 ),(struct A68t170 ,struct A68t170 ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(MODE170,MODE170) BOOL */

A_PROCEDURE(A68_BOOL ,A68t179,(struct A68t128 ,struct A68t128 ),(struct A68t128 ,struct A68t128 ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(MODE128,MODE128) BOOL */

A_PROCEDURE(A68_BOOL ,A68t180,(struct A68t136 ,struct A68t136 ),(struct A68t136 ,struct A68t136 ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(MODE136,MODE136) BOOL */

A_PROCEDURE(A68_BOOL ,A68t181,(struct A68t173 ,struct A68t173 ),(struct A68t173 ,struct A68t173 ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(MODE173,MODE173) BOOL */

A_PROCEDURE(A68_BOOL ,A68t182,(struct A68t174 ,struct A68t174 ),(struct A68t174 ,struct A68t174 ,void *));
typedef struct A68t182  A68_182 ;    /* PROC(MODE174,MODE174) BOOL */

A_PROCEDURE(A68_BOOL ,A68t183,(struct A68t175 ,struct A68t175 ),(struct A68t175 ,struct A68t175 ,void *));
typedef struct A68t183  A68_183 ;    /* PROC(MODE175,MODE175) BOOL */

A_PROCEDURE(struct A68t123 *,A68t184,(struct A68t123 *,struct A68t123 *),(struct A68t123 *,struct A68t123 *,void *));
typedef struct A68t184  A68_184 ;    /* PROC(REF MODE123,REF MODE123) REF MODE123 */

A_PROCEDURE(A68_VOID ,A68t185,(struct A68t132 ,struct A68t132 ,struct A68t132 *),(struct A68t132 ,struct A68t132 ,struct A68t132 *,void *));
typedef struct A68t185  A68_185 ;    /* PROC(REF MODE132,REF MODE132) REF MODE132 */

A_PROCEDURE(A68_VOID ,A68t186,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t186  A68_186 ;    /* PROC(INT,REF MODE26) VOID */

A_PROCEDURE(A68_INT ,A68t187,(A68_VC ),(A68_VC ,void *));
typedef struct A68t187  A68_187 ;    /* PROC(REF MODE26) INT */
struct A68t188{
A68_INT  Sort;
A_PAD_INT(PAD_56)
A68_INT  Size;
A_PAD_INT(PAD_57)
};
typedef struct A68t188  A68_188 ;    /* STRUCT(INT,INT)  */
struct A68t189{
struct A68t188  Head;
struct A68t189 * Tail;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(MODE188,REF MODE189)  */
struct A68t191{
A68_INT  Lab;
A_PAD_INT(PAD_58)
A68_VC  Tag;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t190{
struct A68t191  Labelint;
struct A68t191  Labelcallinst;
A68_INT  Workspacesize;
A_PAD_INT(PAD_59)
A68_INT  Evalfn;
A_PAD_INT(PAD_60)
A68_INT  History;
A_PAD_INT(PAD_61)
A68_INT  Declid;
A_PAD_INT(PAD_62)
};
typedef struct A68t190  A68_190 ;    /* STRUCT(MODE191,MODE191,INT,INT,INT,INT)  */

A_PROCEDURE(struct A68t190 *,A68t192,(A68_VC ,struct A68t32 ,A68_INT ,struct A68t32 ,struct A68t36 ),(A68_VC ,struct A68t32 ,A68_INT ,struct A68t32 ,struct A68t36 ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(MODE26,MODE32,INT,MODE32,MODE36) REF MODE190 */
struct A68t193 { A68_INT mode; union {
A68_INT  mode1;
struct A68t191  mode2;
} data; };
typedef struct A68t193  A68_193 ;    /* UNION(INT,MODE191,VOID)  */

A_PROCEDURE(A68_VOID ,A68t194,(A68_VC ,struct A68t191 *),(A68_VC ,struct A68t191 *,void *));
typedef struct A68t194  A68_194 ;    /* PROC(MODE26) MODE191 */

A_PROCEDURE(A68_VOID ,A68t195,(struct A68t191 *),(struct A68t191 *,void *));
typedef struct A68t195  A68_195 ;    /* PROC MODE191 */

A_PROCEDURE(A68_VOID ,A68t196,(struct A68t43 ,A68_INT ,struct A68t36 ),(struct A68t43 ,A68_INT ,struct A68t36 ,void *));
typedef struct A68t196  A68_196 ;    /* PROC(MODE43,INT,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t197,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_INT ,A68t198,(A68_INT ,A68_INT *),(A68_INT ,A68_INT *,void *));
typedef struct A68t198  A68_198 ;    /* PROC(INT,REF INT) INT */

A_PROCEDURE(A68_VC *,A68t199,(A68_VC ),(A68_VC ,void *));
typedef struct A68t199  A68_199 ;    /* PROC(REF MODE26) REF REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t200,(A68_INT ),(A68_INT ,void *));
typedef struct A68t200  A68_200 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t201,(A68_INT ,struct A68t193 ),(A68_INT ,struct A68t193 ,void *));
typedef struct A68t201  A68_201 ;    /* PROC(INT,MODE193) VOID */

A_PROCEDURE(A68_VOID ,A68t202,(A68_INT ,A68_INT ,struct A68t193 ),(A68_INT ,A68_INT ,struct A68t193 ,void *));
typedef struct A68t202  A68_202 ;    /* PROC(INT,INT,MODE193) VOID */

A_PROCEDURE(A68_VOID ,A68t203,(struct A68t191 ),(struct A68t191 ,void *));
typedef struct A68t203  A68_203 ;    /* PROC(MODE191) VOID */

A_PROCEDURE(A68_VOID ,A68t204,(A68_INT ,struct A68t191 ),(A68_INT ,struct A68t191 ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(INT,MODE191) VOID */

A_PROCEDURE(A68_VOID ,A68t205,(struct A68t193 ,struct A68t191 ),(struct A68t193 ,struct A68t191 ,void *));
typedef struct A68t205  A68_205 ;    /* PROC(MODE193,MODE191) VOID */

A_PROCEDURE(A68_VOID ,A68t206,(struct A68t191 ,struct A68t189 *,struct A68t189 *),(struct A68t191 ,struct A68t189 *,struct A68t189 *,void *));
typedef struct A68t206  A68_206 ;    /* PROC(MODE191,REF MODE189,REF MODE189) VOID */

A_PROCEDURE(A68_VOID ,A68t207,(struct A68t191 ,A68_INT ),(struct A68t191 ,A68_INT ,void *));
typedef struct A68t207  A68_207 ;    /* PROC(MODE191,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t208,(A68_INT ,struct A68t36 ,A68_VC *),(A68_INT ,struct A68t36 ,A68_VC *,void *));
typedef struct A68t208  A68_208 ;    /* PROC(INT,MODE36) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t209,(A68_INT ,struct A68t36 ),(A68_INT ,struct A68t36 ,void *));
typedef struct A68t209  A68_209 ;    /* PROC(INT,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t210,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t210  A68_210 ;    /* PROC(REF MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t211,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t211  A68_211 ;    /* PROC(INT,INT) REF MODE26 */
struct A68t213 ;

A_PROCEDURE(A68_VOID ,A68t212,(A68_INT ,struct A68t213 *),(A68_INT ,struct A68t213 *,void *));
typedef struct A68t212  A68_212 ;    /* PROC(INT) MODE213 */
struct A68t213{
A68_INT  Lasttime;
A_PAD_INT(PAD_63)
A68_INT  Interrupted;
A_PAD_INT(PAD_64)
};
typedef struct A68t213  A68_213 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t214,(struct A68t161 ,struct A68t161 ,struct A68t36 ),(struct A68t161 ,struct A68t161 ,struct A68t36 ,void *));
typedef struct A68t214  A68_214 ;    /* PROC(MODE161,MODE161,MODE36) VOID */
struct A68t216 ;

A_PROCEDURE(A68_VOID ,A68t215,(struct A68t216 *),(struct A68t216 *,void *));
typedef struct A68t215  A68_215 ;    /* PROC MODE216 */
struct A68t216{
A68_INT  Codesize;
A_PAD_INT(PAD_65)
A68_INT  Datasize;
A_PAD_INT(PAD_66)
A68_INT  Dynamicstacksize;
A_PAD_INT(PAD_67)
A68_INT  Staticstacksize;
A_PAD_INT(PAD_68)
};
typedef struct A68t216  A68_216 ;    /* STRUCT(INT,INT,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t217,(struct A68t113 ),(struct A68t113 ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(MODE113) VOID */

A_PROCEDURE(A68_VOID ,A68t218,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t218  A68_218 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,56,A68t219);
typedef struct A68t219  A68_219 ;    /* STRUCT 56 CHAR */

A_PROCEDURE(A68_INT ,A68t220,(struct A68t117 *),(struct A68t117 *,void *));
typedef struct A68t220  A68_220 ;    /* PROC(REF MODE117) INT */

A_PROCEDURE(A68_INT ,A68t221,(struct A68t120 *),(struct A68t120 *,void *));
typedef struct A68t221  A68_221 ;    /* PROC(REF MODE120) INT */

A_PROCEDURE(A68_INT ,A68t222,(struct A68t121 *),(struct A68t121 *,void *));
typedef struct A68t222  A68_222 ;    /* PROC(REF MODE121) INT */

A_PROCEDURE(A68_INT ,A68t223,(struct A68t123 *),(struct A68t123 *,void *));
typedef struct A68t223  A68_223 ;    /* PROC(REF MODE123) INT */

A_PROCEDURE(struct A68t123 *,A68t224,(struct A68t115 ),(struct A68t115 ,void *));
typedef struct A68t224  A68_224 ;    /* PROC(MODE115) REF MODE123 */

A_PROCEDURE(struct A68t123 *,A68t225,(struct A68t115 ,A68_INT ,A68_INT ),(struct A68t115 ,A68_INT ,A68_INT ,void *));
typedef struct A68t225  A68_225 ;    /* PROC(MODE115,INT,INT) REF MODE123 */

A_PROCEDURE(A68_VOID ,A68t226,(struct A68t128 ,A68_INT ,A68_INT ,struct A68t128 *),(struct A68t128 ,A68_INT ,A68_INT ,struct A68t128 *,void *));
typedef struct A68t226  A68_226 ;    /* PROC(MODE128,INT,INT) MODE128 */

A_PROCEDURE(A68_VOID ,A68t227,(A68_BOOL ,struct A68t132 *),(A68_BOOL ,struct A68t132 *,void *));
typedef struct A68t227  A68_227 ;    /* PROC(BOOL) MODE132 */

A_PROCEDURE(A68_VOID ,A68t228,(struct A68t129 *,A68_INT ,A68_INT ,struct A68t128 *),(struct A68t129 *,A68_INT ,A68_INT ,struct A68t128 *,void *));
typedef struct A68t228  A68_228 ;    /* PROC(REF MODE129,INT,INT) MODE128 */
A_ISTRUCT(A68_CHAR ,37,A68t229);
typedef struct A68t229  A68_229 ;    /* STRUCT 37 CHAR */

A_PROCEDURE(A68_VOID ,A68t230,(struct A68t115 ,A68_VC ,A68_INT *),(struct A68t115 ,A68_VC ,A68_INT *,void *));
typedef struct A68t230  A68_230 ;    /* PROC(MODE115,REF MODE26,REF INT) VOID */

A_PROCEDURE(A68_VOID ,A68t231,(struct A68t170 ,struct A68t119 *,A68_VC ,A68_INT *),(struct A68t170 ,struct A68t119 *,A68_VC ,A68_INT *,void *));
typedef struct A68t231  A68_231 ;    /* PROC(MODE170,REF MODE119,REF MODE26,REF INT) VOID */

A_PROCEDURE(A68_VOID ,A68t232,(struct A68t170 ,struct A68t118 *,A68_VC ,A68_INT *),(struct A68t170 ,struct A68t118 *,A68_VC ,A68_INT *,void *));
typedef struct A68t232  A68_232 ;    /* PROC(MODE170,REF MODE118,REF MODE26,REF INT) VOID */

A_PROCEDURE(A68_VOID ,A68t233,(struct A68t170 ,struct A68t121 *,A68_VC ,A68_INT *),(struct A68t170 ,struct A68t121 *,A68_VC ,A68_INT *,void *));
typedef struct A68t233  A68_233 ;    /* PROC(MODE170,REF MODE121,REF MODE26,REF INT) VOID */

A_PROCEDURE(A68_VOID ,A68t234,(struct A68t170 ,struct A68t115 ,A68_VC ,A68_INT *),(struct A68t170 ,struct A68t115 ,A68_VC ,A68_INT *,void *));
typedef struct A68t234  A68_234 ;    /* PROC(MODE170,MODE115,REF MODE26,REF INT) VOID */

A_PROCEDURE(A68_VOID ,A68t235,(struct A68t170 ,struct A68t117 *,A68_VC ,A68_INT *),(struct A68t170 ,struct A68t117 *,A68_VC ,A68_INT *,void *));
typedef struct A68t235  A68_235 ;    /* PROC(MODE170,REF MODE117,REF MODE26,REF INT) VOID */

A_PROCEDURE(A68_VOID ,A68t236,(struct A68t170 ,struct A68t120 *,A68_VC ,A68_INT *),(struct A68t170 ,struct A68t120 *,A68_VC ,A68_INT *,void *));
typedef struct A68t236  A68_236 ;    /* PROC(MODE170,REF MODE120,REF MODE26,REF INT) VOID */

A_PROCEDURE(A68_VOID ,A68t237,(struct A68t170 ,struct A68t123 *,A68_VC ,A68_INT *),(struct A68t170 ,struct A68t123 *,A68_VC ,A68_INT *,void *));
typedef struct A68t237  A68_237 ;    /* PROC(MODE170,REF MODE123,REF MODE26,REF INT) VOID */

A_PROCEDURE(A68_VOID ,A68t238,(struct A68t170 ,struct A68t122 *,A68_VC ,A68_INT *),(struct A68t170 ,struct A68t122 *,A68_VC ,A68_INT *,void *));
typedef struct A68t238  A68_238 ;    /* PROC(MODE170,REF MODE122,REF MODE26,REF INT) VOID */

A_PROCEDURE(A68_VC *,A68t239,(struct A68t170 ,struct A68t115 ),(struct A68t170 ,struct A68t115 ,void *));
typedef struct A68t239  A68_239 ;    /* PROC(MODE170,MODE115) REF REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t240,(A68_VC ,struct A68t121 ,A68_VC *),(A68_VC ,struct A68t121 ,A68_VC *,void *));
typedef struct A68t240  A68_240 ;    /* PROC(REF MODE26,MODE121) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t241,(A68_VC ,A68_INT *,struct A68t115 ,struct A68t170 *),(A68_VC ,A68_INT *,struct A68t115 ,struct A68t170 *,void *));
typedef struct A68t241  A68_241 ;    /* PROC(REF MODE26,REF INT,MODE115) MODE170 */

A_PROCEDURE(struct A68t171 *,A68t242,(A68_VC ,A68_INT *,struct A68t120 ),(A68_VC ,A68_INT *,struct A68t120 ,void *));
typedef struct A68t242  A68_242 ;    /* PROC(REF MODE26,REF INT,MODE120) REF MODE171 */

A_PROCEDURE(struct A68t171 *,A68t243,(A68_VC ,A68_INT *,struct A68t123 *),(A68_VC ,A68_INT *,struct A68t123 *,void *));
typedef struct A68t243  A68_243 ;    /* PROC(REF MODE26,REF INT,REF MODE123) REF MODE171 */

A_PROCEDURE(struct A68t172 *,A68t244,(A68_VC ,A68_INT *,struct A68t122 *),(A68_VC ,A68_INT *,struct A68t122 *,void *));
typedef struct A68t244  A68_244 ;    /* PROC(REF MODE26,REF INT,REF MODE122) REF MODE172 */

A_PROCEDURE(A68_VOID ,A68t245,(A68_VC ,struct A68t115 ,struct A68t170 *),(A68_VC ,struct A68t115 ,struct A68t170 *,void *));
typedef struct A68t245  A68_245 ;    /* PROC(REF MODE26,MODE115) MODE170 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from keambasics --- */
extern A68_INT  GENASIM_sizeunit;
extern A68_198  HENASIM_al;
extern A68_199  FENASIM_up;
/* --- End of imports from keambasics --- */


/* --- Imports from kebasics --- */
extern A68_117 * VSAASIM_nilsenum;
extern A68_123 * WSAASIM_nilsst;
extern A68_171 * DTAASIM_nilsvst;
extern A68_170  GTAASIM_nullsvalue;
extern A68_170  JTAASIM_voidsvalue;
extern A68_123 * FABASIM_(struct A68t123 *,struct A68t123 *);
extern A68_VOID  PBBASIM_unsignedtoword(A68_INT ,A68_VC );
extern A68_VOID  ZBBASIM_signedtoword(A68_INT ,A68_VC );
extern A68_INT  BCBASIM_wordtounsigned(A68_VC );
extern A68_INT  HCBASIM_wordtosigned(A68_VC );
extern A68_VOID  NKDAOST_sysfault(A68_VC );
/* --- End of imports from kebasics --- */


/* --- Imports from kesymbols --- */
/* --- End of imports from kesymbols --- */


/* --- Imports from basics --- */
extern A68_INT  FJDAOST_bitswidth;
/* --- End of imports from basics --- */


/* --- Imports from putstrings --- */
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void XDNASIM(void);   /* keambasics */
extern void JSAASIM(void);   /* kebasics */
extern void TCCASIM(void);   /* kesymbols */
extern void JSCAOST(void);   /* basics */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_219   QYNASIM = {"$Id: kesignals.a68,v 34.2 1995/03/29 13:04:55 ella Exp $"}; 
A_GISVEC(A68_VC ,RYNASIM,QYNASIM,56)
static A68_229   HEOASIM = {"kesignals: unexpected RAM description"}; 
A_GISVEC(A68_VC ,IEOASIM,HEOASIM,37)
typedef struct   /* env of non-global proc */
{
A68_INT * DDOASIM_lastblock;
A68_INT * CDOASIM_firstblock;
} LDOASIM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} TEOASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  OKOASIM_size;
A_PAD_INT(PAD_69)
} SKOASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  DLOASIM_size;
A_PAD_INT(PAD_70)
} HLOASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  Rep;
} YLOASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_121  Type;
} NMOASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  Rep;
} OROASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  Rep;
} CSOASIM_generator;

A_STATIC A68_INT  TYNASIM_unsignedbytes(A68_INT  Upb);

A_STATIC A68_INT  ZYNASIM_signedbytes(A68_INT  Lwb, A68_INT  Upb);

A_STATIC A68_INT  HZNASIM_alignedsum(A68_INT  First, A68_INT  Second);

A68_INT  NZNASIM_machinewidth(A68_115  T);

A_STATIC A68_INT  QZNASIM_enumwidth(A68_117 * E);

A_STATIC A68_INT  YZNASIM_rowwidth(A68_120 * R);

A_STATIC A68_INT  DAOASIM_stringwidth(A68_121 * S);

A_STATIC A68_INT  JAOASIM_structurewidth(A68_123 * S);

A68_123 * ABOASIM_flattentype(A68_115  T);

A68_INT  DCOASIM_rawsignalwidth(A68_115  T);

A68_123 * KCOASIM_rawtrimsignal(A68_115  T, A68_INT  Lwb, A68_INT  Upb);

A68_VOID  VCOASIM_rawtrimwire(A68_128  W, A68_INT  Lwb, A68_INT  Upb, A68_128  *ReturnedValue);

A_STATIC A68_VOID  KDOASIM_generator(A68_BOOL  IDOASIM_anonymous, A68_132  *ReturnedValue, void *NonLocals);

A68_VOID  FEOASIM_rawtrimram(A68_129 * Ram, A68_INT  Lwb, A68_INT  Upb, A68_128  *ReturnedValue);

A_STATIC A68_VOID  SEOASIM_generator(A68_BOOL  QEOASIM_anonymous, A68_132  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GFOASIM_encodequeryorvoid(A68_115  Type, A68_VC  Result, A68_INT * Ix);

A_STATIC A68_VOID  QFOASIM_encodechar(A68_170  Val, A68_119 * C, A68_VC  Result, A68_INT * Ix);

A_STATIC A68_VOID  DGOASIM_encodeint(A68_170  Val, A68_118 * I, A68_VC  Result, A68_INT * Ix);

A_STATIC A68_VOID  QGOASIM_encodestring(A68_170  Val, A68_121 * S, A68_VC  Result, A68_INT * Ix);

A_STATIC A68_VOID  FIOASIM_encodesignal(A68_170  Val, A68_115  Type, A68_VC  Result, A68_INT * Ix);

A_STATIC A68_VOID  LIOASIM_encodeenum(A68_170  Val, A68_117 * E, A68_VC  Result, A68_INT * Ix);

A_STATIC A68_VOID  DJOASIM_encoderow(A68_170  Val, A68_120 * R, A68_VC  Result, A68_INT * Ix);

A_STATIC A68_VOID  NJOASIM_encodestructure(A68_170  Val, A68_123 * S, A68_VC  Result, A68_INT * Ix);

A_STATIC A68_VOID  WJOASIM_encodefn(A68_170  Val, A68_122 * F, A68_VC  Result, A68_INT * Ix);

A68_VC * NKOASIM_rawencode(A68_170  Value, A68_115  Type);

A_STATIC A68_VOID  RKOASIM_generator(A68_BOOL  PKOASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VC * CLOASIM_machine(A68_170  Value, A68_115  Type);

A_STATIC A68_VOID  GLOASIM_generator(A68_BOOL  ELOASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RLOASIM_decodestring(A68_VC  Rep, A68_121  Type, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  XLOASIM_generator(A68_BOOL  VLOASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MMOASIM_generator(A68_BOOL  KMOASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CNOASIM_decodesignal(A68_VC  Rep, A68_INT * Ix, A68_115  Type, A68_170  *ReturnedValue);

A_STATIC A68_171 * HNOASIM_decoderow(A68_VC  Rep, A68_INT * Ix, A68_120  R);

A_STATIC A68_171 * TNOASIM_decodestructure(A68_VC  Rep, A68_INT * Ix, A68_123 * S);

A_STATIC A68_172 * EOOASIM_decodefn(A68_VC  Rep, A68_INT * Ix, A68_122 * F);

A68_VOID  KROASIM_rawdecode(A68_VC  Rep, A68_115  Type, A68_170  *ReturnedValue);

A_STATIC A68_VOID  NROASIM_generator(A68_BOOL  LROASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  YROASIM_unmachine(A68_VC  Rep, A68_115  Type, A68_170  *ReturnedValue);

A_STATIC A68_VOID  BSOASIM_generator(A68_BOOL  ZROASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  QZNASIM_enumwidth(A68_117 * E)
{ 
A68_INT  RZNASIM_valuecount;
A68_INT  SZNASIM_maxassocwidth;
A68_117 * TZNASIM_scan;
A68_INT  UZNASIM_assocwidth;
A68_INT  VZNASIM_tagsize;
A68_INT  WZNASIM;  /* clause result */
A_PROC_ENTRY(enumwidth);
 /* line 115: */
 /* line 116: */
{ 
RZNASIM_valuecount = 0;
 /* line 117: */
SZNASIM_maxassocwidth = 0;
 /* line 118: */
TZNASIM_scan = E;
 /* line 119: */
for ( ;; )
{ 
 /* line 120: */
if ( !((TZNASIM_scan!=VSAASIM_nilsenum)) ) break;
RZNASIM_valuecount+=1;
 /* line 121: */
UZNASIM_assocwidth = NZNASIM_machinewidth((*(&(TZNASIM_scan->T))));
 /* line 122: */
 /* line 123: */
if ( (UZNASIM_assocwidth>SZNASIM_maxassocwidth) )
{ 
 /* line 124: */
SZNASIM_maxassocwidth = UZNASIM_assocwidth;
} 
 /* line 125: */
 /* line 126: */
TZNASIM_scan = (*(&(TZNASIM_scan->Rest)));
}
 /* line 127: */
VZNASIM_tagsize = TYNASIM_unsignedbytes(RZNASIM_valuecount);
 /* line 128: */
 /* line 129: */
WZNASIM = HZNASIM_alignedsum(VZNASIM_tagsize, SZNASIM_maxassocwidth);
} 
A_PROC_EXIT(enumwidth);
return( WZNASIM );
} 
#undef NL

A_STATIC A68_INT  YZNASIM_rowwidth(A68_120 * R)
{ 
A68_INT  ZZNASIM_elemwidth;
A68_INT  AAOASIM_nextelemoffset;
A68_INT  BAOASIM;  /* clause result */
A_PROC_ENTRY(rowwidth);
 /* line 132: */
 /* line 133: */
{ 
ZZNASIM_elemwidth = NZNASIM_machinewidth((*(&(R->Type))));
 /* line 134: */
A_CALLPROC(HENASIM_al,(0, (&ZZNASIM_elemwidth)),(0, (&ZZNASIM_elemwidth),(HENASIM_al).nonlocals));
 /* line 135: */
AAOASIM_nextelemoffset = A_CALLPROC(HENASIM_al,(ZZNASIM_elemwidth, (&ZZNASIM_elemwidth)),(ZZNASIM_elemwidth, (&ZZNASIM_elemwidth),(HENASIM_al).nonlocals));
 /* line 136: */
 /* line 137: */
BAOASIM = ((*(&(R->No)))*AAOASIM_nextelemoffset);
} 
A_PROC_EXIT(rowwidth);
return( BAOASIM );
} 
#undef NL

A_STATIC A68_INT  DAOASIM_stringwidth(A68_121 * S)
{ 
A68_119 * EAOASIM_c;
A68_BOOL  FAOASIM_bitstring;
A68_INT  GAOASIM;  /* clause result */
A68_INT  HAOASIM_upbc;
A_PROC_ENTRY(stringwidth);
 /* line 140: */
 /* line 141: */
{ 
EAOASIM_c = (&(S->T));
 /* line 142: */
FAOASIM_bitstring = ((*(&(EAOASIM_c->Char))).upb==2);
 /* line 143: */
 /* line 144: */
if ( FAOASIM_bitstring )
{ 
 /* line 145: */
 /* line 146: */
GAOASIM = HZNASIM_alignedsum(GENASIM_sizeunit, (((*(&(S->No)))+7)/8));
} 
else
{ 
HAOASIM_upbc = TYNASIM_unsignedbytes((*(&(EAOASIM_c->Char))).upb);
 /* line 147: */
 /* line 148: */
 /* line 149: */
GAOASIM = HZNASIM_alignedsum(GENASIM_sizeunit, ((*(&(S->No)))*HAOASIM_upbc));
} 
} 
A_PROC_EXIT(stringwidth);
return( GAOASIM );
} 
#undef NL

A_STATIC A68_INT  JAOASIM_structurewidth(A68_123 * S)
{ 
A68_INT  KAOASIM_acc;
A68_123 * LAOASIM_scan;
A68_INT  MAOASIM_elemsize;
A68_INT  NAOASIM;  /* clause result */
A_PROC_ENTRY(structurewidth);
 /* line 152: */
 /* line 153: */
{ 
KAOASIM_acc = 0;
 /* line 154: */
LAOASIM_scan = S;
 /* line 155: */
for ( ;; )
{ 
 /* line 156: */
if ( !((LAOASIM_scan!=WSAASIM_nilsst)) ) break;
MAOASIM_elemsize = NZNASIM_machinewidth((*(&(LAOASIM_scan->T))));
 /* line 157: */
KAOASIM_acc = HZNASIM_alignedsum(KAOASIM_acc, MAOASIM_elemsize);
 /* line 158: */
 /* line 159: */
LAOASIM_scan = (*(&(LAOASIM_scan->Rest)));
}
 /* line 160: */
 /* line 161: */
NAOASIM = KAOASIM_acc;
} 
A_PROC_EXIT(structurewidth);
return( NAOASIM );
} 
#undef NL

A_STATIC A68_VOID  KDOASIM_generator(A68_BOOL  IDOASIM_anonymous, A68_132  *ReturnedValue, void *NonLocals)
#define NL(x) (((LDOASIM_generator *)NonLocals)->x)
{ 
A68_132  MDOASIM;  /* clause result */
A68_132  NDOASIM;  /* OPERATORS - dynamic generator */
{ 
NDOASIM.upb = (((*NL(DDOASIM_lastblock))-(*NL(CDOASIM_firstblock)))+1) ;
( IDOASIM_anonymous? A_VLOC(A68_133 ,NDOASIM): A_VHEAP(A68_133 ,NDOASIM) );
MDOASIM = NDOASIM;
} 
*ReturnedValue = (MDOASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  SEOASIM_generator(A68_BOOL  QEOASIM_anonymous, A68_132  *ReturnedValue, void *NonLocals)
#define NL(x) (((TEOASIM_generator *)NonLocals)->x)
{ 
A68_132  UEOASIM;  /* clause result */
A68_132  VEOASIM;  /* OPERATORS - dynamic generator */
{ 
VEOASIM.upb = 1 ;
( QEOASIM_anonymous? A_VLOC(A68_133 ,VEOASIM): A_VHEAP(A68_133 ,VEOASIM) );
UEOASIM = VEOASIM;
} 
*ReturnedValue = (UEOASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  LIOASIM_encodeenum(A68_170  Val, A68_117 * E, A68_VC  Result, A68_INT * Ix)
{ 
A68_170  MIOASIM;  /* united object - for case conformity */
A68_169 * NIOASIM_v;
A68_115  OIOASIM;  /* OPERATORS - mode -> union mode */
A68_117 * PIOASIM;  /* YIELD */
A68_INT  QIOASIM_nextix;
A68_117 * RIOASIM_p;
A68_INT  SIOASIM_valuecount;
A68_INT  TIOASIM_tagsize;
A68_VC  UIOASIM;  /* OPERATORS - trim index */
A68_VC  VIOASIM_tagpart;
A68_INT  WIOASIM_i;
A68_INT  XIOASIM;  /* to part of loop */
A68_CHAR * YIOASIM;  /* YIELD */
A_PROC_ENTRY(encodeenum);
 /* line 411: */
 /* line 412: */
MIOASIM = Val ;
switch ( MIOASIM.mode )
{ 
case 5: /* REF STRUCT(REF MODE117,INT,MODE170)  */
NIOASIM_v = (MIOASIM.data.mode5);
 /* line 413: */
 /* line 414: */
{ 
PIOASIM = (*(&(NIOASIM_v->Type))) ;
QIOASIM_nextix = ((*Ix)+NZNASIM_machinewidth(A_UNITE(OIOASIM,mode1,1,PIOASIM)));
 /* line 415: */
RIOASIM_p = E;
 /* line 416: */
SIOASIM_valuecount = 0;
 /* line 417: */
for ( ;; )
{ 
 /* line 418: */
if ( !((RIOASIM_p!=VSAASIM_nilsenum)) ) break;
SIOASIM_valuecount+=1;
 /* line 419: */
 /* line 420: */
RIOASIM_p = (*(&(RIOASIM_p->Rest)));
}
 /* line 421: */
TIOASIM_tagsize = TYNASIM_unsignedbytes(SIOASIM_valuecount);
 /* line 422: */
A_CALLPROC(HENASIM_al,(0, (&TIOASIM_tagsize)),(0, (&TIOASIM_tagsize),(HENASIM_al).nonlocals));
 /* line 423: */
VIOASIM_tagpart = A_VTRIM(UIOASIM,(Result),A_VTSCRIPT(&(UIOASIM.upb),(Result).upb,(*Ix),(((*Ix)+TIOASIM_tagsize)-1)));
 /* line 424: */
(*Ix)+=TIOASIM_tagsize;
 /* line 425: */
PBBASIM_unsignedtoword((*(&(NIOASIM_v->Tag))), VIOASIM_tagpart);
 /* line 426: */
A_CALLPROC(FENASIM_up,(VIOASIM_tagpart),(VIOASIM_tagpart,(FENASIM_up).nonlocals));
 /* line 427: */
RIOASIM_p = E;
 /* line 428: */
XIOASIM = ((*(&(NIOASIM_v->Tag)))-1);
for ( WIOASIM_i = 1;
WIOASIM_i <= XIOASIM;
WIOASIM_i += 1 )
{ 
RIOASIM_p = (*(&(RIOASIM_p->Rest)));
}
 /* line 429: */
FIOASIM_encodesignal((*(&(NIOASIM_v->Assoc))), (*(&(RIOASIM_p->T))), Result, Ix);
 /* line 430: */
for ( ;; )
{ 
 /* line 432: */
if ( !(((*Ix)<QIOASIM_nextix)) ) break;
YIOASIM = (&A_VINDEX(Result,(*Ix))) ;
(*YIOASIM) = (A68_CHAR)0;
 /* line 433: */
 /* line 434: */
(*Ix)+=1;
}
 /* line 435: */
 /* line 436: */
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(encodeenum);
return;
} 
#undef NL

A_STATIC A68_VOID  DJOASIM_encoderow(A68_170  Val, A68_120 * R, A68_VC  Result, A68_INT * Ix)
{ 
A68_170  EJOASIM;  /* united object - for case conformity */
A68_171 * FJOASIM_st;
A68_171 * GJOASIM_p;
A68_INT  HJOASIM_i;
A68_INT  IJOASIM;  /* to part of loop */
A_PROC_ENTRY(encoderow);
 /* line 439: */
 /* line 440: */
EJOASIM = Val ;
switch ( EJOASIM.mode )
{ 
case 6: /* REF STRUCT(MODE170,REF MODE171)  */
FJOASIM_st = (EJOASIM.data.mode6);
 /* line 441: */
 /* line 442: */
{ 
GJOASIM_p = FJOASIM_st;
 /* line 443: */
IJOASIM = (*(&(R->No)));
for ( HJOASIM_i = 1;
HJOASIM_i <= IJOASIM;
HJOASIM_i += 1 )
{ 
 /* line 444: */
FIOASIM_encodesignal((*(&(GJOASIM_p->Head))), (*(&(R->Type))), Result, Ix);
 /* line 445: */
 /* line 446: */
GJOASIM_p = (*(&(GJOASIM_p->Tail)));
}
 /* line 447: */
 /* line 448: */
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(encoderow);
return;
} 
#undef NL

A_STATIC A68_VOID  NJOASIM_encodestructure(A68_170  Val, A68_123 * S, A68_VC  Result, A68_INT * Ix)
{ 
A68_170  OJOASIM;  /* united object - for case conformity */
A68_171 * PJOASIM_st;
A68_171 * QJOASIM_p;
A68_123 * RJOASIM_q;
A_PROC_ENTRY(encodestructure);
 /* line 451: */
 /* line 452: */
OJOASIM = Val ;
switch ( OJOASIM.mode )
{ 
case 6: /* REF STRUCT(MODE170,REF MODE171)  */
PJOASIM_st = (OJOASIM.data.mode6);
 /* line 453: */
 /* line 454: */
{ 
QJOASIM_p = PJOASIM_st;
 /* line 455: */
RJOASIM_q = S;
 /* line 456: */
for ( ;; )
{ 
 /* line 457: */
if ( !((RJOASIM_q!=WSAASIM_nilsst)) ) break;
FIOASIM_encodesignal((*(&(QJOASIM_p->Head))), (*(&(RJOASIM_q->T))), Result, Ix);
 /* line 458: */
QJOASIM_p = (*(&(QJOASIM_p->Tail)));
 /* line 459: */
 /* line 460: */
RJOASIM_q = (*(&(RJOASIM_q->Rest)));
}
 /* line 461: */
 /* line 462: */
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(encodestructure);
return;
} 
#undef NL

A_STATIC A68_VOID  WJOASIM_encodefn(A68_170  Val, A68_122 * F, A68_VC  Result, A68_INT * Ix)
{ 
A68_170  XJOASIM;  /* united object - for case conformity */
A68_172 * YJOASIM_vf;
A_PROC_ENTRY(encodefn);
 /* line 465: */
 /* line 466: */
XJOASIM = Val ;
switch ( XJOASIM.mode )
{ 
case 7: /* REF STRUCT(MODE170,MODE170)  */
YJOASIM_vf = (XJOASIM.data.mode7);
 /* line 467: */
 /* line 468: */
{ 
FIOASIM_encodesignal((*(&(YJOASIM_vf->From))), (*(&(F->From))), Result, Ix);
 /* line 469: */
 /* line 470: */
 /* line 471: */
FIOASIM_encodesignal((*(&(YJOASIM_vf->To))), (*(&(F->To))), Result, Ix);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(encodefn);
return;
} 
#undef NL

A_STATIC A68_VOID  RKOASIM_generator(A68_BOOL  PKOASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((SKOASIM_generator *)NonLocals)->x)
{ 
A68_VC  TKOASIM;  /* clause result */
A68_VC  UKOASIM;  /* OPERATORS - dynamic generator */
{ 
UKOASIM.upb = NL(OKOASIM_size) ;
( PKOASIM_anonymous? A_VLOC(A68_CHAR ,UKOASIM): A_VHEAP(A68_CHAR ,UKOASIM) );
TKOASIM = UKOASIM;
} 
*ReturnedValue = (TKOASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  GLOASIM_generator(A68_BOOL  ELOASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((HLOASIM_generator *)NonLocals)->x)
{ 
A68_VC  ILOASIM;  /* clause result */
A68_VC  JLOASIM;  /* OPERATORS - dynamic generator */
{ 
JLOASIM.upb = NL(DLOASIM_size) ;
( ELOASIM_anonymous? A_VLOC(A68_CHAR ,JLOASIM): A_VHEAP(A68_CHAR ,JLOASIM) );
ILOASIM = JLOASIM;
} 
*ReturnedValue = (ILOASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  XLOASIM_generator(A68_BOOL  VLOASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((YLOASIM_generator *)NonLocals)->x)
{ 
A68_VC  ZLOASIM;  /* clause result */
A68_VC  AMOASIM;  /* OPERATORS - dynamic generator */
{ 
AMOASIM.upb = (8*NL(Rep).upb) ;
( VLOASIM_anonymous? A_VLOC(A68_CHAR ,AMOASIM): A_VHEAP(A68_CHAR ,AMOASIM) );
ZLOASIM = AMOASIM;
} 
*ReturnedValue = (ZLOASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  MMOASIM_generator(A68_BOOL  KMOASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((NMOASIM_generator *)NonLocals)->x)
{ 
A68_VC  OMOASIM;  /* clause result */
A68_VC  PMOASIM;  /* OPERATORS - dynamic generator */
{ 
PMOASIM.upb = NL(Type).No ;
( KMOASIM_anonymous? A_VLOC(A68_CHAR ,PMOASIM): A_VHEAP(A68_CHAR ,PMOASIM) );
OMOASIM = PMOASIM;
} 
*ReturnedValue = (OMOASIM);
return;
} 
#undef NL

A_STATIC A68_171 * HNOASIM_decoderow(A68_VC  Rep, A68_INT * Ix, A68_120  R)
{ 
A68_171 * INOASIM_ans;
A68_171 ** JNOASIM_end;
A68_INT  KNOASIM_i;
A68_INT  LNOASIM;  /* to part of loop */
A68_171  MNOASIM;  /* collateral clause result */
A68_170  NNOASIM;  /* avoid structure result */
A68_171 * ONOASIM;  /* YIELD */
A68_171 * PNOASIM;  /* clause result */
A_PROC_ENTRY(decoderow);
 /* line 553: */
 /* line 554: */
{ 
INOASIM_ans = DTAASIM_nilsvst;
 /* line 555: */
JNOASIM_end = (&INOASIM_ans);
 /* line 556: */
LNOASIM = R.No;
for ( KNOASIM_i = 1;
KNOASIM_i <= LNOASIM;
KNOASIM_i += 1 )
{ 
 /* line 557: */
 /* line 558: */
CNOASIM_decodesignal( Rep, Ix, R.Type, &NNOASIM );
MNOASIM.Head = NNOASIM;
MNOASIM.Tail = DTAASIM_nilsvst;
ONOASIM = A_HEAP(A68_171 ) ;
(*ONOASIM) = MNOASIM ;
(*JNOASIM_end) = ONOASIM;
 /* line 559: */
 /* line 560: */
JNOASIM_end = (&((*JNOASIM_end)->Tail));
}
 /* line 561: */
 /* line 562: */
PNOASIM = INOASIM_ans;
} 
A_PROC_EXIT(decoderow);
return( PNOASIM );
} 
#undef NL

A_STATIC A68_171 * TNOASIM_decodestructure(A68_VC  Rep, A68_INT * Ix, A68_123 * S)
{ 
A68_171 * UNOASIM_ans;
A68_171 ** VNOASIM_end;
A68_123 * WNOASIM_scan;
A68_171  XNOASIM;  /* collateral clause result */
A68_170  YNOASIM;  /* avoid structure result */
A68_171 * ZNOASIM;  /* YIELD */
A68_171 * AOOASIM;  /* clause result */
A_PROC_ENTRY(decodestructure);
 /* line 565: */
 /* line 566: */
{ 
UNOASIM_ans = DTAASIM_nilsvst;
 /* line 567: */
VNOASIM_end = (&UNOASIM_ans);
 /* line 568: */
WNOASIM_scan = S;
 /* line 569: */
for ( ;; )
{ 
 /* line 570: */
if ( !((WNOASIM_scan!=WSAASIM_nilsst)) ) break;
 /* line 571: */
CNOASIM_decodesignal( Rep, Ix, (*(&(WNOASIM_scan->T))), &YNOASIM );
XNOASIM.Head = YNOASIM;
XNOASIM.Tail = DTAASIM_nilsvst;
ZNOASIM = A_HEAP(A68_171 ) ;
(*ZNOASIM) = XNOASIM ;
(*VNOASIM_end) = ZNOASIM;
 /* line 572: */
VNOASIM_end = (&((*VNOASIM_end)->Tail));
 /* line 573: */
 /* line 574: */
WNOASIM_scan = (*(&(WNOASIM_scan->Rest)));
}
 /* line 575: */
 /* line 576: */
AOOASIM = UNOASIM_ans;
} 
A_PROC_EXIT(decodestructure);
return( AOOASIM );
} 
#undef NL

A_STATIC A68_172 * EOOASIM_decodefn(A68_VC  Rep, A68_INT * Ix, A68_122 * F)
{ 
A68_172 * FOOASIM_ans;
A68_170  GOOASIM;  /* avoid structure result */
A68_170 * HOOASIM;  /* YIELD */
A68_170  IOOASIM;  /* avoid structure result */
A68_170 * JOOASIM;  /* YIELD */
A68_172 * KOOASIM;  /* clause result */
A_PROC_ENTRY(decodefn);
 /* line 579: */
 /* line 580: */
{ 
FOOASIM_ans = (A_HEAP(A68_172 ));
 /* line 581: */
CNOASIM_decodesignal( Rep, Ix, (*(&(F->From))), &GOOASIM );
HOOASIM = (&(FOOASIM_ans->From)) ;
(*HOOASIM) = GOOASIM;
 /* line 582: */
CNOASIM_decodesignal( Rep, Ix, (*(&(F->To))), &IOOASIM );
JOOASIM = (&(FOOASIM_ans->To)) ;
(*JOOASIM) = IOOASIM;
 /* line 583: */
 /* line 584: */
KOOASIM = FOOASIM_ans;
} 
A_PROC_EXIT(decodefn);
return( KOOASIM );
} 
#undef NL

A_STATIC A68_VOID  NROASIM_generator(A68_BOOL  LROASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((OROASIM_generator *)NonLocals)->x)
{ 
A68_VC  PROASIM;  /* clause result */
A68_VC  QROASIM;  /* OPERATORS - dynamic generator */
{ 
QROASIM.upb = NL(Rep).upb ;
( LROASIM_anonymous? A_VLOC(A68_CHAR ,QROASIM): A_VHEAP(A68_CHAR ,QROASIM) );
PROASIM = QROASIM;
} 
*ReturnedValue = (PROASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  BSOASIM_generator(A68_BOOL  ZROASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((CSOASIM_generator *)NonLocals)->x)
{ 
A68_VC  DSOASIM;  /* clause result */
A68_VC  ESOASIM;  /* OPERATORS - dynamic generator */
{ 
ESOASIM.upb = NL(Rep).upb ;
( ZROASIM_anonymous? A_VLOC(A68_CHAR ,ESOASIM): A_VHEAP(A68_CHAR ,ESOASIM) );
DSOASIM = ESOASIM;
} 
*ReturnedValue = (DSOASIM);
return;
} 
#undef NL

A_STATIC A68_INT  TYNASIM_unsignedbytes(A68_INT  Upb)
{ 
A68_INT  UYNASIM_size;
A68_INT  VYNASIM_upper;
A68_INT  WYNASIM;  /* clause result */
A_PROC_ENTRY(unsignedbytes);
 /* line 69: */
 /* line 70: */
{ 
UYNASIM_size = 1;
 /* line 71: */
VYNASIM_upper = Upb;
 /* line 72: */
for ( ;; )
{ 
 /* line 73: */
if ( !((VYNASIM_upper>=256)) ) break;
UYNASIM_size+=1;
 /* line 74: */
 /* line 75: */
VYNASIM_upper/=256;
}
 /* line 76: */
 /* line 77: */
WYNASIM = UYNASIM_size;
} 
A_PROC_EXIT(unsignedbytes);
return( WYNASIM );
} 
#undef NL

A_STATIC A68_INT  ZYNASIM_signedbytes(A68_INT  Lwb, A68_INT  Upb)
{ 
A68_INT  AZNASIM_size;
A68_INT  BZNASIM_lower;
A68_INT  CZNASIM_upper;
A68_BOOL  DZNASIM;  /* optbool result */
A68_INT  EZNASIM;  /* clause result */
A_PROC_ENTRY(signedbytes);
 /* line 80: */
 /* line 81: */
{ 
AZNASIM_size = 1;
 /* line 82: */
BZNASIM_lower = Lwb;
 /* line 83: */
CZNASIM_upper = Upb;
 /* line 84: */
for ( ;; )
{ 
DZNASIM = (BZNASIM_lower<(-128));
if ( ! DZNASIM )
{DZNASIM = (CZNASIM_upper>=128);
}
 /* line 85: */
if ( !(DZNASIM) ) break;
AZNASIM_size+=1;
 /* line 86: */
BZNASIM_lower/=256;
 /* line 87: */
 /* line 88: */
CZNASIM_upper/=256;
}
 /* line 89: */
 /* line 90: */
EZNASIM = AZNASIM_size;
} 
A_PROC_EXIT(signedbytes);
return( EZNASIM );
} 
#undef NL

A_STATIC A68_INT  HZNASIM_alignedsum(A68_INT  First, A68_INT  Second)
{ 
A68_INT  IZNASIM_a;
A68_INT  JZNASIM_b;
A68_INT  KZNASIM_offset;
A68_INT  LZNASIM;  /* clause result */
A_PROC_ENTRY(alignedsum);
 /* line 100: */
 /* line 101: */
{ 
IZNASIM_a = First;
 /* line 102: */
JZNASIM_b = Second;
 /* line 103: */
A_CALLPROC(HENASIM_al,(0, (&IZNASIM_a)),(0, (&IZNASIM_a),(HENASIM_al).nonlocals));
 /* line 104: */
KZNASIM_offset = A_CALLPROC(HENASIM_al,(IZNASIM_a, (&JZNASIM_b)),(IZNASIM_a, (&JZNASIM_b),(HENASIM_al).nonlocals));
 /* line 105: */
 /* line 106: */
LZNASIM = (KZNASIM_offset+JZNASIM_b);
} 
A_PROC_EXIT(alignedsum);
return( LZNASIM );
} 
#undef NL

A68_INT  NZNASIM_machinewidth(A68_115  T)
{ 
A68_115  OAOASIM;  /* united object - for case conformity */
A68_117 * PAOASIM_e;
A68_INT  QAOASIM;  /* clause result */
A68_118 * RAOASIM_i;
A68_119 * SAOASIM_c;
A68_120 * TAOASIM_r;
A68_121 * UAOASIM_s;
A68_122 * VAOASIM_f;
A68_123 * WAOASIM_s;
A68_124  XAOASIM_v;
A68_125  YAOASIM_n;
A_PROC_ENTRY(machinewidth);
 /* line 112: */
 /* line 114: */
{ 
 /* line 131: */
 /* line 139: */
 /* line 151: */
 /* line 163: */
 /* line 164: */
OAOASIM = T ;
switch ( OAOASIM.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,MODE115,REF MODE117)  */
PAOASIM_e = (OAOASIM.data.mode1);
 /* line 165: */
QAOASIM = QZNASIM_enumwidth(PAOASIM_e);
break;
case 2: /* REF STRUCT(REF MODE26,INT,INT)  */
RAOASIM_i = (OAOASIM.data.mode2);
 /* line 166: */
QAOASIM = HZNASIM_alignedsum(GENASIM_sizeunit, ZYNASIM_signedbytes((*(&(RAOASIM_i->Lwb))), (*(&(RAOASIM_i->Upb)))));
break;
case 3: /* REF STRUCT(REF MODE26,REF MODE26)  */
SAOASIM_c = (OAOASIM.data.mode3);
 /* line 167: */
QAOASIM = HZNASIM_alignedsum(0, TYNASIM_unsignedbytes((*(&(SAOASIM_c->Char))).upb));
break;
case 4: /* REF STRUCT(INT,MODE115)  */
TAOASIM_r = (OAOASIM.data.mode4);
 /* line 168: */
QAOASIM = YZNASIM_rowwidth(TAOASIM_r);
break;
case 5: /* REF STRUCT(INT,MODE119)  */
UAOASIM_s = (OAOASIM.data.mode5);
 /* line 169: */
QAOASIM = DAOASIM_stringwidth(UAOASIM_s);
break;
case 6: /* REF STRUCT(MODE115,MODE115)  */
VAOASIM_f = (OAOASIM.data.mode6);
 /* line 170: */
 /* line 171: */
QAOASIM = HZNASIM_alignedsum(NZNASIM_machinewidth((*(&(VAOASIM_f->From)))), NZNASIM_machinewidth((*(&(VAOASIM_f->To)))));
break;
case 7: /* REF STRUCT(MODE115,REF MODE123)  */
WAOASIM_s = (OAOASIM.data.mode7);
 /* line 172: */
QAOASIM = JAOASIM_structurewidth(WAOASIM_s);
break;
case 8: /* STRUCT(INT)  */
XAOASIM_v = (OAOASIM.data.mode8);
 /* line 173: */
QAOASIM = HZNASIM_alignedsum(0, 1);
break;
case 9: /* STRUCT(INT)  */
YAOASIM_n = (OAOASIM.data.mode9);
 /* line 174: */
 /* line 175: */
QAOASIM = 0;
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(machinewidth);
return( QAOASIM );
} 
#undef NL

A68_123 * ABOASIM_flattentype(A68_115  T)
{ 
A68_115  BBOASIM;  /* united object - for case conformity */
A68_124  CBOASIM_v;
A68_123  DBOASIM;  /* collateral clause result */
A68_123 * EBOASIM;  /* clause result */
A68_123 * FBOASIM;  /* YIELD */
A68_117 * GBOASIM_e;
A68_123  HBOASIM;  /* collateral clause result */
A68_123 * IBOASIM;  /* YIELD */
A68_118 * JBOASIM_i;
A68_123  KBOASIM;  /* collateral clause result */
A68_123 * LBOASIM;  /* YIELD */
A68_119 * MBOASIM_c;
A68_123  NBOASIM;  /* collateral clause result */
A68_123 * OBOASIM;  /* YIELD */
A68_121 * PBOASIM_s;
A68_123  QBOASIM;  /* collateral clause result */
A68_123 * RBOASIM;  /* YIELD */
A68_122 * SBOASIM_f;
A68_123  TBOASIM;  /* collateral clause result */
A68_123 * UBOASIM;  /* YIELD */
A68_120 * VBOASIM_r;
A68_123 * WBOASIM_ans;
A68_INT  XBOASIM_i;
A68_INT  YBOASIM;  /* to part of loop */
A68_123 * ZBOASIM_s;
A68_123 * ACOASIM_ans;
A68_123 * BCOASIM_scan;
A_PROC_ENTRY(flattentype);
 /* line 185: */
 /* line 186: */
BBOASIM = T ;
switch ( BBOASIM.mode )
{ 
case 8: /* STRUCT(INT)  */
CBOASIM_v = (BBOASIM.data.mode8);
DBOASIM.T = T;
DBOASIM.Rest = WSAASIM_nilsst;
 /* line 187: */
FBOASIM = A_HEAP(A68_123 ) ;
(*FBOASIM) = DBOASIM ;
EBOASIM = FBOASIM;
break;
case 1: /* REF STRUCT(REF MODE26,MODE115,REF MODE117)  */
GBOASIM_e = (BBOASIM.data.mode1);
HBOASIM.T = T;
HBOASIM.Rest = WSAASIM_nilsst;
 /* line 188: */
IBOASIM = A_HEAP(A68_123 ) ;
(*IBOASIM) = HBOASIM ;
EBOASIM = IBOASIM;
break;
case 2: /* REF STRUCT(REF MODE26,INT,INT)  */
JBOASIM_i = (BBOASIM.data.mode2);
KBOASIM.T = T;
KBOASIM.Rest = WSAASIM_nilsst;
 /* line 189: */
LBOASIM = A_HEAP(A68_123 ) ;
(*LBOASIM) = KBOASIM ;
EBOASIM = LBOASIM;
break;
case 3: /* REF STRUCT(REF MODE26,REF MODE26)  */
MBOASIM_c = (BBOASIM.data.mode3);
NBOASIM.T = T;
NBOASIM.Rest = WSAASIM_nilsst;
 /* line 190: */
OBOASIM = A_HEAP(A68_123 ) ;
(*OBOASIM) = NBOASIM ;
EBOASIM = OBOASIM;
break;
case 5: /* REF STRUCT(INT,MODE119)  */
PBOASIM_s = (BBOASIM.data.mode5);
QBOASIM.T = T;
QBOASIM.Rest = WSAASIM_nilsst;
 /* line 191: */
RBOASIM = A_HEAP(A68_123 ) ;
(*RBOASIM) = QBOASIM ;
EBOASIM = RBOASIM;
break;
case 6: /* REF STRUCT(MODE115,MODE115)  */
SBOASIM_f = (BBOASIM.data.mode6);
TBOASIM.T = T;
TBOASIM.Rest = WSAASIM_nilsst;
 /* line 192: */
UBOASIM = A_HEAP(A68_123 ) ;
(*UBOASIM) = TBOASIM ;
EBOASIM = UBOASIM;
break;
case 4: /* REF STRUCT(INT,MODE115)  */
VBOASIM_r = (BBOASIM.data.mode4);
 /* line 193: */
 /* line 194: */
{ 
WBOASIM_ans = WSAASIM_nilsst;
 /* line 195: */
YBOASIM = (*(&(VBOASIM_r->No)));
for ( XBOASIM_i = 1;
XBOASIM_i <= YBOASIM;
XBOASIM_i += 1 )
{ 
 /* line 196: */
 /* line 197: */
WBOASIM_ans = FABASIM_(WBOASIM_ans, ABOASIM_flattentype((*(&(VBOASIM_r->Type)))));
}
 /* line 198: */
 /* line 199: */
 /* line 200: */
EBOASIM = WBOASIM_ans;
} 
break;
case 7: /* REF STRUCT(MODE115,REF MODE123)  */
ZBOASIM_s = (BBOASIM.data.mode7);
 /* line 201: */
 /* line 202: */
{ 
ACOASIM_ans = WSAASIM_nilsst;
 /* line 203: */
BCOASIM_scan = ZBOASIM_s;
 /* line 204: */
for ( ;; )
{ 
 /* line 205: */
if ( !((BCOASIM_scan!=WSAASIM_nilsst)) ) break;
ACOASIM_ans = FABASIM_(ACOASIM_ans, ABOASIM_flattentype((*(&(BCOASIM_scan->T)))));
 /* line 206: */
 /* line 207: */
BCOASIM_scan = (*(&(BCOASIM_scan->Rest)));
}
 /* line 208: */
 /* line 209: */
 /* line 210: */
EBOASIM = ACOASIM_ans;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(flattentype);
return( EBOASIM );
} 
#undef NL

A68_INT  DCOASIM_rawsignalwidth(A68_115  T)
{ 
A68_INT  ECOASIM_ans;
A68_123 * FCOASIM_flat;
A68_INT  GCOASIM;  /* clause result */
A_PROC_ENTRY(rawsignalwidth);
 /* line 221: */
 /* line 222: */
{ 
ECOASIM_ans = 0;
 /* line 223: */
FCOASIM_flat = ABOASIM_flattentype(T);
 /* line 224: */
for ( ;; )
{ 
 /* line 225: */
if ( !((FCOASIM_flat!=WSAASIM_nilsst)) ) break;
ECOASIM_ans+=1;
 /* line 226: */
 /* line 227: */
FCOASIM_flat = (*(&(FCOASIM_flat->Rest)));
}
 /* line 228: */
 /* line 229: */
GCOASIM = ECOASIM_ans;
} 
A_PROC_EXIT(rawsignalwidth);
return( GCOASIM );
} 
#undef NL

A68_123 * KCOASIM_rawtrimsignal(A68_115  T, A68_INT  Lwb, A68_INT  Upb)
{ 
A68_123 * LCOASIM_result;
A68_INT  MCOASIM;  /* to part of loop */
A68_INT  NCOASIM;  /* loop control */
A68_123 ** OCOASIM_end;
A68_INT  PCOASIM;  /* to part of loop */
A68_INT  QCOASIM;  /* loop control */
A68_123 * RCOASIM;  /* clause result */
A_PROC_ENTRY(rawtrimsignal);
 /* line 238: */
 /* line 239: */
{ 
LCOASIM_result = ABOASIM_flattentype(T);
 /* line 240: */
MCOASIM = (Lwb-1);
for ( NCOASIM = 1;
NCOASIM <= MCOASIM;
NCOASIM += 1 )
{ 
 /* line 241: */
if ( !((LCOASIM_result!=WSAASIM_nilsst)) ) break;
 /* line 242: */
LCOASIM_result = (*(&(LCOASIM_result->Rest)));
}
 /* line 243: */
OCOASIM_end = (&LCOASIM_result);
 /* line 244: */
PCOASIM = ((Upb-Lwb)+1);
for ( QCOASIM = 1;
QCOASIM <= PCOASIM;
QCOASIM += 1 )
{ 
 /* line 245: */
if ( !(((*OCOASIM_end)!=WSAASIM_nilsst)) ) break;
 /* line 246: */
OCOASIM_end = (&((*OCOASIM_end)->Rest));
}
 /* line 247: */
(*OCOASIM_end) = WSAASIM_nilsst;
 /* line 248: */
 /* line 249: */
RCOASIM = LCOASIM_result;
} 
A_PROC_EXIT(rawtrimsignal);
return( RCOASIM );
} 
#undef NL

A68_VOID  VCOASIM_rawtrimwire(A68_128  W, A68_INT  Lwb, A68_INT  Upb, A68_128  *ReturnedValue)
{ 
A68_123 * WCOASIM_newpart;
A68_123 * XCOASIM_prefix;
A68_115  ZCOASIM;  /* OPERATORS - mode -> union mode */
A68_INT  YCOASIM_skipsize;
A68_115  BDOASIM;  /* OPERATORS - mode -> union mode */
A68_INT  ADOASIM_keptsize;
A68_INT  CDOASIM_firstblock;
A68_INT  DDOASIM_lastblock;
A68_132  EDOASIM;  /* OPERATORS - simple index */
A68_132  FDOASIM;  /* OPERATORS - simple index */
A68_132  GDOASIM;  /* OPERATORS - simple index */
A68_132  HDOASIM;  /* OPERATORS - simple index */
A68_227  JDOASIM_generator;   /* proc value of non-global proc */
A68_132  ODOASIM;  /* avoid structure result */
A68_132  PDOASIM_newblocks;
A68_132  QDOASIM;  /* OPERATORS - trim index */
A68_132  RDOASIM;  /* OPERATORS - trim index */
A68_132  SDOASIM;  /* OPERATORS - assign op */
A68_INT  TDOASIM;  /* YIELD */
A68_INT * UDOASIM;  /* YIELD */
A68_INT  VDOASIM;  /* YIELD */
A68_INT * WDOASIM;  /* YIELD */
A68_INT  XDOASIM;  /* YIELD */
A68_INT * YDOASIM;  /* YIELD */
A68_128  ZDOASIM;  /* collateral clause result */
A68_115  AEOASIM;  /* OPERATORS - mode -> union mode */
A68_128  BEOASIM;  /* clause result */
A_PROC_ENTRY(rawtrimwire);
 /* line 259: */
 /* line 260: */
{ 
WCOASIM_newpart = KCOASIM_rawtrimsignal(W.Type, Lwb, Upb);
 /* line 261: */
XCOASIM_prefix = KCOASIM_rawtrimsignal(W.Type, 1, (Lwb-1));
 /* line 262: */
YCOASIM_skipsize = NZNASIM_machinewidth(A_UNITE(ZCOASIM,mode7,7,XCOASIM_prefix));
 /* line 263: */
ADOASIM_keptsize = NZNASIM_machinewidth(A_UNITE(BDOASIM,mode7,7,WCOASIM_newpart));
 /* line 264: */
CDOASIM_firstblock = 1;
 /* line 265: */
DDOASIM_lastblock = 1;
 /* line 266: */
for ( ;; )
{ 
 /* line 267: */
EDOASIM = W.Blocks ;
if ( !((YCOASIM_skipsize>=(*(&((&A_VINDEX(EDOASIM,CDOASIM_firstblock))->Size))))) ) break;
FDOASIM = W.Blocks ;
YCOASIM_skipsize-=(*(&((&A_VINDEX(FDOASIM,CDOASIM_firstblock))->Size)));
 /* line 268: */
 /* line 269: */
CDOASIM_firstblock+=1;
}
 /* line 270: */
DDOASIM_lastblock = CDOASIM_firstblock;
 /* line 271: */
for ( ;; )
{ 
 /* line 272: */
GDOASIM = W.Blocks ;
if ( !(((ADOASIM_keptsize+YCOASIM_skipsize)>(*(&((&A_VINDEX(GDOASIM,DDOASIM_lastblock))->Size))))) ) break;
HDOASIM = W.Blocks ;
ADOASIM_keptsize-=(*(&((&A_VINDEX(HDOASIM,DDOASIM_lastblock))->Size)));
 /* line 273: */
 /* line 274: */
DDOASIM_lastblock+=1;
}
 /* line 275: */
A_CLOSURE( JDOASIM_generator, KDOASIM_generator, LDOASIM_generator );
(( LDOASIM_generator * ) ( JDOASIM_generator.nonlocals )) -> DDOASIM_lastblock = (&DDOASIM_lastblock);
(( LDOASIM_generator * ) ( JDOASIM_generator.nonlocals )) -> CDOASIM_firstblock = (&CDOASIM_firstblock);
A_CALLPROC(JDOASIM_generator,(A68_FALSE, &ODOASIM),(A68_FALSE, &ODOASIM,(JDOASIM_generator).nonlocals));
PDOASIM_newblocks = ODOASIM;
 /* line 276: */
QDOASIM = W.Blocks ;
SDOASIM = A_VTRIM(RDOASIM,(QDOASIM),A_VTSCRIPT(&(RDOASIM.upb),(QDOASIM).upb,CDOASIM_firstblock,DDOASIM_lastblock)) ;
A_VASSIGN2(SDOASIM,PDOASIM_newblocks,A68_133 );
 /* line 277: */
TDOASIM = 1 ;
UDOASIM = (&((&A_VINDEX(PDOASIM_newblocks,TDOASIM))->Offset)) ;
(*UDOASIM)+=YCOASIM_skipsize;
 /* line 278: */
VDOASIM = 1 ;
WDOASIM = (&((&A_VINDEX(PDOASIM_newblocks,VDOASIM))->Size)) ;
(*WDOASIM)-=YCOASIM_skipsize;
 /* line 279: */
XDOASIM = PDOASIM_newblocks.upb ;
YDOASIM = (&((&A_VINDEX(PDOASIM_newblocks,XDOASIM))->Size)) ;
(*YDOASIM) = ADOASIM_keptsize;
 /* line 280: */
ZDOASIM.Type = A_UNITE(AEOASIM,mode7,7,WCOASIM_newpart);
 /* line 281: */
ZDOASIM.Blocks = PDOASIM_newblocks;
BEOASIM = ZDOASIM;
} 
A_PROC_EXIT(rawtrimwire);
*ReturnedValue = (BEOASIM);
return;
} 
#undef NL

A68_VOID  FEOASIM_rawtrimram(A68_129 * Ram, A68_INT  Lwb, A68_INT  Upb, A68_128  *ReturnedValue)
{ 
A68_128  GEOASIM_firstcell;
A68_132  JEOASIM;  /* OPERATORS - simple index */
A68_INT  KEOASIM;  /* YIELD */
A68_133  LEOASIM_firstcellblock;
A68_120  MEOASIM;  /* collateral clause result */
A68_120 * NEOASIM;  /* YIELD */
A68_115  OEOASIM;  /* OPERATORS - mode -> union mode */
A68_115  PEOASIM_type;
A68_227  REOASIM_generator;   /* proc value of non-global proc */
A68_132  WEOASIM;  /* avoid structure result */
A68_132  XEOASIM_location;
A68_133  YEOASIM;  /* collateral clause result */
A68_132  ZEOASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_132  AFOASIM;  /* OPERATORS - assign op */
A68_128  BFOASIM;  /* collateral clause result */
A68_128  CFOASIM;  /* clause result */
A_PROC_ENTRY(rawtrimram);
 /* line 288: */
 /* line 289: */
{ 
GEOASIM_firstcell = (*(&(Ram->Firstcell)));
 /* line 290: */
 /* line 291: */
if ( (GEOASIM_firstcell.Blocks.upb>1) )
{ 
 /* line 292: */
NKDAOST_sysfault(IEOASIM);
} 
 /* line 293: */
JEOASIM = GEOASIM_firstcell.Blocks ;
KEOASIM = 1 ;
LEOASIM_firstcellblock = (*(&A_VINDEX(JEOASIM,KEOASIM)));
 /* line 294: */
MEOASIM.No = ((Upb-Lwb)+1);
MEOASIM.Type = GEOASIM_firstcell.Type;
NEOASIM = A_HEAP(A68_120 ) ;
(*NEOASIM) = MEOASIM ;
PEOASIM_type = A_UNITE(OEOASIM,mode4,4,NEOASIM);
 /* line 295: */
A_CLOSURE( REOASIM_generator, SEOASIM_generator, TEOASIM_generator );
A_CALLPROC(REOASIM_generator,(A68_FALSE, &WEOASIM),(A68_FALSE, &WEOASIM,(REOASIM_generator).nonlocals));
XEOASIM_location = WEOASIM;
 /* line 296: */
 /* line 297: */
YEOASIM.Instoffset = LEOASIM_firstcellblock.Instoffset;
 /* line 298: */
YEOASIM.Offset = (LEOASIM_firstcellblock.Offset+((Lwb-(*(&(Ram->Lwb))))*(*(&(Ram->Step)))));
 /* line 299: */
YEOASIM.Size = (((Upb-Lwb)+1)*LEOASIM_firstcellblock.Size);
AFOASIM = A_HVEC(ZEOASIM,YEOASIM,A68_133 ) ;
A_VASSIGN2(AFOASIM,XEOASIM_location,A68_133 );
 /* line 300: */
BFOASIM.Type = PEOASIM_type;
 /* line 301: */
BFOASIM.Blocks = XEOASIM_location;
CFOASIM = BFOASIM;
} 
A_PROC_EXIT(rawtrimram);
*ReturnedValue = (CFOASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  GFOASIM_encodequeryorvoid(A68_115  Type, A68_VC  Result, A68_INT * Ix)
{ 
A68_INT  HFOASIM_size;
A68_INT  IFOASIM;  /* to part of loop */
A68_INT  JFOASIM;  /* loop control */
A68_INT  KFOASIM;  /* YIELD */
A68_CHAR * LFOASIM;  /* YIELD */
A_PROC_ENTRY(encodequeryorvoid);
 /* line 322: */
 /* line 323: */
{ 
HFOASIM_size = NZNASIM_machinewidth(Type);
 /* line 324: */
IFOASIM = HFOASIM_size;
for ( JFOASIM = 1;
JFOASIM <= IFOASIM;
JFOASIM += 1 )
{ 
 /* line 325: */
 /* line 326: */
KFOASIM = (((*Ix)+=1)-1) ;
LFOASIM = (&A_VINDEX(Result,KFOASIM)) ;
(*LFOASIM) = (A68_CHAR)0;
}
 /* line 327: */
} 
A_PROC_EXIT(encodequeryorvoid);
return;
} 
#undef NL

A_STATIC A68_VOID  QFOASIM_encodechar(A68_170  Val, A68_119 * C, A68_VC  Result, A68_INT * Ix)
{ 
A68_170  RFOASIM;  /* united object - for case conformity */
A68_167 * SFOASIM_v;
A68_INT  TFOASIM_i;
A68_VC  UFOASIM;  /* OPERATORS - simple index */
A68_115  VFOASIM;  /* OPERATORS - mode -> union mode */
A68_INT  WFOASIM_size;
A68_VC  XFOASIM;  /* OPERATORS - trim index */
A68_VC  YFOASIM_part;
A_PROC_ENTRY(encodechar);
 /* line 330: */
RFOASIM = Val ;
switch ( RFOASIM.mode )
{ 
case 3: /* REF STRUCT(REF MODE119,CHAR)  */
SFOASIM_v = (RFOASIM.data.mode3);
 /* line 331: */
 /* line 332: */
{ 
TFOASIM_i = 1;
 /* line 333: */
for ( ;; )
{ 
UFOASIM = (*(&(C->Char))) ;
if ( !(((*(&(SFOASIM_v->Value)))!=(*(&A_VINDEX(UFOASIM,TFOASIM_i))))) ) break;
TFOASIM_i+=1;
}
 /* line 334: */
WFOASIM_size = NZNASIM_machinewidth(A_UNITE(VFOASIM,mode3,3,C));
 /* line 335: */
YFOASIM_part = A_VTRIM(XFOASIM,(Result),A_VTSCRIPT(&(XFOASIM.upb),(Result).upb,(*Ix),(((*Ix)+WFOASIM_size)-1)));
 /* line 336: */
(*Ix)+=WFOASIM_size;
 /* line 337: */
PBBASIM_unsignedtoword(TFOASIM_i, YFOASIM_part);
 /* line 338: */
 /* line 339: */
 /* line 340: */
A_CALLPROC(FENASIM_up,(YFOASIM_part),(YFOASIM_part,(FENASIM_up).nonlocals));
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(encodechar);
return;
} 
#undef NL

A_STATIC A68_VOID  DGOASIM_encodeint(A68_170  Val, A68_118 * I, A68_VC  Result, A68_INT * Ix)
{ 
A68_170  EGOASIM;  /* united object - for case conformity */
A68_166 * FGOASIM_v;
A68_115  GGOASIM;  /* OPERATORS - mode -> union mode */
A68_INT  HGOASIM_intsize;
A68_VC  IGOASIM;  /* OPERATORS - trim index */
A68_VC  JGOASIM_querypart;
A68_VC  KGOASIM;  /* OPERATORS - trim index */
A68_VC  LGOASIM_intpart;
A_PROC_ENTRY(encodeint);
 /* line 344: */
 /* line 345: */
EGOASIM = Val ;
switch ( EGOASIM.mode )
{ 
case 2: /* REF STRUCT(REF MODE118,INT)  */
FGOASIM_v = (EGOASIM.data.mode2);
 /* line 346: */
 /* line 347: */
{ 
HGOASIM_intsize = (NZNASIM_machinewidth(A_UNITE(GGOASIM,mode2,2,I))-GENASIM_sizeunit);
 /* line 348: */
JGOASIM_querypart = A_VTRIM(IGOASIM,(Result),A_VTSCRIPT(&(IGOASIM.upb),(Result).upb,(*Ix),(((*Ix)+GENASIM_sizeunit)-1)));
 /* line 349: */
(*Ix)+=GENASIM_sizeunit;
 /* line 350: */
LGOASIM_intpart = A_VTRIM(KGOASIM,(Result),A_VTSCRIPT(&(KGOASIM.upb),(Result).upb,(*Ix),(((*Ix)+HGOASIM_intsize)-1)));
 /* line 351: */
(*Ix)+=HGOASIM_intsize;
 /* line 352: */
PBBASIM_unsignedtoword(1, JGOASIM_querypart);
 /* line 353: */
A_CALLPROC(FENASIM_up,(JGOASIM_querypart),(JGOASIM_querypart,(FENASIM_up).nonlocals));
 /* line 354: */
ZBBASIM_signedtoword((*(&(FGOASIM_v->Value))), LGOASIM_intpart);
 /* line 355: */
 /* line 356: */
 /* line 357: */
A_CALLPROC(FENASIM_up,(LGOASIM_intpart),(LGOASIM_intpart,(FENASIM_up).nonlocals));
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(encodeint);
return;
} 
#undef NL

A_STATIC A68_VOID  QGOASIM_encodestring(A68_170  Val, A68_121 * S, A68_VC  Result, A68_INT * Ix)
{ 
A68_170  RGOASIM;  /* united object - for case conformity */
A68_168 * SGOASIM_str;
A68_119 * TGOASIM_c;
A68_INT  UGOASIM_upbc;
A68_BOOL  VGOASIM_bitstring;
A68_115  WGOASIM;  /* OPERATORS - mode -> union mode */
A68_INT  XGOASIM_stringsize;
A68_VC  YGOASIM;  /* OPERATORS - trim index */
A68_VC  ZGOASIM_querypart;
A68_VC  AHOASIM;  /* OPERATORS - trim index */
A68_VC  BHOASIM_stringpart;
A68_INT  CHOASIM_i;
A68_INT  DHOASIM;  /* to part of loop */
A68_CHAR * EHOASIM;  /* YIELD */
A68_INT  FHOASIM_j;
A68_INT  GHOASIM_upbs;
A68_INT  HHOASIM_i;
A68_INT  IHOASIM;  /* ADICOPS - MOD */
A68_INT  JHOASIM;  /* ADICOPS - MOD */
A68_INT  KHOASIM;  /* ADICOPS - MOD */
A68_INT  LHOASIM;  /* to part of loop */
A68_BOOL  MHOASIM;  /* optbool result */
A68_VC  NHOASIM;  /* OPERATORS - simple index */
A68_VC  OHOASIM;  /* OPERATORS - simple index */
A68_INT  PHOASIM;  /* YIELD */
A68_INT  QHOASIM;  /* clause result */
A68_INT  RHOASIM_bit;
A68_CHAR * SHOASIM;  /* YIELD */
A68_INT  THOASIM;  /* ADICOPS - MOD */
A68_INT  UHOASIM;  /* ADICOPS - MOD */
A68_INT  VHOASIM_i;
A68_INT  WHOASIM;  /* to part of loop */
A68_INT  XHOASIM_k;
A68_VC  YHOASIM;  /* OPERATORS - simple index */
A68_VC  ZHOASIM;  /* OPERATORS - simple index */
A68_VC  AIOASIM;  /* OPERATORS - trim index */
A_PROC_ENTRY(encodestring);
 /* line 361: */
 /* line 362: */
RGOASIM = Val ;
switch ( RGOASIM.mode )
{ 
case 4: /* REF STRUCT(REF MODE121,REF MODE26)  */
SGOASIM_str = (RGOASIM.data.mode4);
 /* line 363: */
 /* line 364: */
{ 
TGOASIM_c = (&(S->T));
 /* line 365: */
UGOASIM_upbc = TYNASIM_unsignedbytes((*(&(TGOASIM_c->Char))).upb);
 /* line 366: */
VGOASIM_bitstring = ((*(&(TGOASIM_c->Char))).upb==2);
 /* line 367: */
XGOASIM_stringsize = (NZNASIM_machinewidth(A_UNITE(WGOASIM,mode5,5,S))-GENASIM_sizeunit);
 /* line 368: */
ZGOASIM_querypart = A_VTRIM(YGOASIM,(Result),A_VTSCRIPT(&(YGOASIM.upb),(Result).upb,(*Ix),(((*Ix)+GENASIM_sizeunit)-1)));
 /* line 369: */
(*Ix)+=GENASIM_sizeunit;
 /* line 370: */
BHOASIM_stringpart = A_VTRIM(AHOASIM,(Result),A_VTSCRIPT(&(AHOASIM.upb),(Result).upb,(*Ix),(((*Ix)+XGOASIM_stringsize)-1)));
 /* line 371: */
(*Ix)+=XGOASIM_stringsize;
 /* line 372: */
PBBASIM_unsignedtoword(1, ZGOASIM_querypart);
 /* line 373: */
A_CALLPROC(FENASIM_up,(ZGOASIM_querypart),(ZGOASIM_querypart,(FENASIM_up).nonlocals));
 /* line 374: */
DHOASIM = XGOASIM_stringsize;
for ( CHOASIM_i = 1;
CHOASIM_i <= DHOASIM;
CHOASIM_i += 1 )
{ 
EHOASIM = (&A_VINDEX(BHOASIM_stringpart,CHOASIM_i)) ;
(*EHOASIM) = (A68_CHAR)0;
}
 /* line 376: */
FHOASIM_j = 1;
 /* line 377: */
GHOASIM_upbs = (*(&(SGOASIM_str->Value))).upb;
 /* line 378: */
 /* line 379: */
if ( VGOASIM_bitstring )
{ 
JHOASIM = (-GHOASIM_upbs) ;
KHOASIM = 8 ;
LHOASIM = (GHOASIM_upbs+A_MOD(JHOASIM,KHOASIM,IHOASIM));
for ( HHOASIM_i = 1;
HHOASIM_i <= LHOASIM;
HHOASIM_i += 1 )
{ 
 /* line 380: */
 /* line 381: */
MHOASIM = (HHOASIM_i<=GHOASIM_upbs);
if ( MHOASIM )
{ /* line 382: */
NHOASIM = (*(&(SGOASIM_str->Value))) ;
OHOASIM = (*(&(TGOASIM_c->Char))) ;
PHOASIM = 2 ;
MHOASIM = ((*(&A_VINDEX(NHOASIM,HHOASIM_i)))==(*(&A_VINDEX(OHOASIM,PHOASIM))));
}
 /* line 383: */
if ( MHOASIM )
{ 
 /* line 384: */
QHOASIM = 1;
} 
else
{ 
QHOASIM = 0;
} 
RHOASIM_bit = QHOASIM;
 /* line 386: */
SHOASIM = (&A_VINDEX(BHOASIM_stringpart,FHOASIM_j)) ;
(*SHOASIM) = (A68_CHAR)((2*(A68_INT)(unsigned char)(*(&A_VINDEX(BHOASIM_stringpart,FHOASIM_j))))+RHOASIM_bit);
 /* line 387: */
 /* line 388: */
UHOASIM = 8 ;
FHOASIM_j+=((A_MOD(HHOASIM_i,UHOASIM,THOASIM)==0));
}
 /* line 389: */
 /* line 390: */
} 
else
{ 
WHOASIM = GHOASIM_upbs;
for ( VHOASIM_i = 1;
VHOASIM_i <= WHOASIM;
VHOASIM_i += 1 )
{ 
 /* line 391: */
XHOASIM_k = 1;
 /* line 392: */
for ( ;; )
{ 
YHOASIM = (*(&(SGOASIM_str->Value))) ;
ZHOASIM = (*(&(TGOASIM_c->Char))) ;
if ( !(((*(&A_VINDEX(YHOASIM,VHOASIM_i)))!=(*(&A_VINDEX(ZHOASIM,XHOASIM_k))))) ) break;
XHOASIM_k+=1;
}
 /* line 393: */
PBBASIM_unsignedtoword(XHOASIM_k, A_VTRIM(AIOASIM,(BHOASIM_stringpart),A_VTSCRIPT(&(AIOASIM.upb),(BHOASIM_stringpart).upb,FHOASIM_j,((FHOASIM_j+UGOASIM_upbc)-1))));
 /* line 394: */
 /* line 395: */
FHOASIM_j+=UGOASIM_upbc;
}
 /* line 396: */
} 
 /* line 397: */
 /* line 398: */
 /* line 399: */
A_CALLPROC(FENASIM_up,(BHOASIM_stringpart),(BHOASIM_stringpart,(FENASIM_up).nonlocals));
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(encodestring);
return;
} 
#undef NL

A_STATIC A68_VOID  FIOASIM_encodesignal(A68_170  Val, A68_115  Type, A68_VC  Result, A68_INT * Ix)
{ 
A68_170  ZJOASIM;  /* united object - for case conformity */
A68_165 * AKOASIM_q;
A68_115  BKOASIM;  /* united object - for case conformity */
A68_117 * CKOASIM_e;
A68_119 * DKOASIM_c;
A68_118 * EKOASIM_i;
A68_120 * FKOASIM_r;
A68_121 * GKOASIM_s;
A68_122 * HKOASIM_f;
A68_123 * IKOASIM_s;
A68_124  JKOASIM_v;
A68_125  KKOASIM_n;
A_PROC_ENTRY(encodesignal);
 /* line 408: */
 /* line 410: */
{ 
 /* line 438: */
 /* line 450: */
 /* line 464: */
 /* line 473: */
 /* line 474: */
ZJOASIM = Val ;
switch ( ZJOASIM.mode )
{ 
case 1: /* REF STRUCT(MODE115)  */
AKOASIM_q = (ZJOASIM.data.mode1);
 /* line 475: */
 /* line 476: */
GFOASIM_encodequeryorvoid(Type, Result, Ix);
break;
default: 
 /* line 477: */
BKOASIM = Type ;
switch ( BKOASIM.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,MODE115,REF MODE117)  */
CKOASIM_e = (BKOASIM.data.mode1);
 /* line 478: */
LIOASIM_encodeenum(Val, CKOASIM_e, Result, Ix);
break;
case 3: /* REF STRUCT(REF MODE26,REF MODE26)  */
DKOASIM_c = (BKOASIM.data.mode3);
 /* line 479: */
QFOASIM_encodechar(Val, DKOASIM_c, Result, Ix);
break;
case 2: /* REF STRUCT(REF MODE26,INT,INT)  */
EKOASIM_i = (BKOASIM.data.mode2);
 /* line 480: */
DGOASIM_encodeint(Val, EKOASIM_i, Result, Ix);
break;
case 4: /* REF STRUCT(INT,MODE115)  */
FKOASIM_r = (BKOASIM.data.mode4);
 /* line 481: */
DJOASIM_encoderow(Val, FKOASIM_r, Result, Ix);
break;
case 5: /* REF STRUCT(INT,MODE119)  */
GKOASIM_s = (BKOASIM.data.mode5);
 /* line 482: */
QGOASIM_encodestring(Val, GKOASIM_s, Result, Ix);
break;
case 6: /* REF STRUCT(MODE115,MODE115)  */
HKOASIM_f = (BKOASIM.data.mode6);
 /* line 483: */
WJOASIM_encodefn(Val, HKOASIM_f, Result, Ix);
break;
case 7: /* REF STRUCT(MODE115,REF MODE123)  */
IKOASIM_s = (BKOASIM.data.mode7);
 /* line 484: */
NJOASIM_encodestructure(Val, IKOASIM_s, Result, Ix);
break;
case 8: /* STRUCT(INT)  */
JKOASIM_v = (BKOASIM.data.mode8);
 /* line 485: */
GFOASIM_encodequeryorvoid(Type, Result, Ix);
break;
case 9: /* STRUCT(INT)  */
KKOASIM_n = (BKOASIM.data.mode9);
 /* line 486: */
 /* line 487: */
 /* line 488: */
/*SKIP*/;
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
} 
} 
A_PROC_EXIT(encodesignal);
return;
} 
#undef NL

A68_VC * NKOASIM_rawencode(A68_170  Value, A68_115  Type)
{ 
A68_INT  OKOASIM_size;
A68_31  QKOASIM_generator;   /* proc value of non-global proc */
A68_VC  VKOASIM;  /* avoid structure result */
A68_VC  WKOASIM_answer;
A68_INT  XKOASIM_index;
A68_VC * YKOASIM;  /* clause result */
A68_VC * ZKOASIM;  /* YIELD */
A_PROC_ENTRY(rawencode);
 /* line 497: */
 /* line 498: */
{ 
OKOASIM_size = NZNASIM_machinewidth(Type);
 /* line 499: */
A_CLOSURE( QKOASIM_generator, RKOASIM_generator, SKOASIM_generator );
(( SKOASIM_generator * ) ( QKOASIM_generator.nonlocals )) -> OKOASIM_size = OKOASIM_size;
A_CALLPROC(QKOASIM_generator,(A68_FALSE, &VKOASIM),(A68_FALSE, &VKOASIM,(QKOASIM_generator).nonlocals));
WKOASIM_answer = VKOASIM;
 /* line 500: */
XKOASIM_index = 1;
 /* line 501: */
FIOASIM_encodesignal(Value, Type, WKOASIM_answer, (&XKOASIM_index));
 /* line 502: */
 /* line 503: */
ZKOASIM = A_HEAP(A68_VC ) ;
(*ZKOASIM) = WKOASIM_answer ;
YKOASIM = ZKOASIM;
} 
A_PROC_EXIT(rawencode);
return( YKOASIM );
} 
#undef NL

A68_VC * CLOASIM_machine(A68_170  Value, A68_115  Type)
{ 
A68_INT  DLOASIM_size;
A68_31  FLOASIM_generator;   /* proc value of non-global proc */
A68_VC  KLOASIM;  /* avoid structure result */
A68_VC  LLOASIM_answer;
A68_INT  MLOASIM_index;
A68_VC * NLOASIM;  /* clause result */
A68_VC * OLOASIM;  /* YIELD */
A_PROC_ENTRY(machine);
 /* line 506: */
 /* line 507: */
{ 
DLOASIM_size = NZNASIM_machinewidth(Type);
 /* line 508: */
A_CLOSURE( FLOASIM_generator, GLOASIM_generator, HLOASIM_generator );
(( HLOASIM_generator * ) ( FLOASIM_generator.nonlocals )) -> DLOASIM_size = DLOASIM_size;
A_CALLPROC(FLOASIM_generator,(A68_FALSE, &KLOASIM),(A68_FALSE, &KLOASIM,(FLOASIM_generator).nonlocals));
LLOASIM_answer = KLOASIM;
 /* line 509: */
MLOASIM_index = 1;
 /* line 510: */
FIOASIM_encodesignal(Value, Type, LLOASIM_answer, (&MLOASIM_index));
 /* line 511: */
 /* line 512: */
OLOASIM = A_HEAP(A68_VC ) ;
(*OLOASIM) = LLOASIM_answer ;
NLOASIM = OLOASIM;
} 
A_PROC_EXIT(machine);
return( NLOASIM );
} 
#undef NL

A_STATIC A68_VOID  RLOASIM_decodestring(A68_VC  Rep, A68_121  Type, A68_VC  *ReturnedValue)
{ 
A68_119  SLOASIM_c;
A68_INT  TLOASIM_step;
A68_VC  ULOASIM;  /* clause result */
A68_31  WLOASIM_generator;   /* proc value of non-global proc */
A68_VC  BMOASIM;  /* avoid structure result */
A68_VC  CMOASIM_bs;
A68_INT  DMOASIM_i;
A68_INT  EMOASIM;  /* to part of loop */
A68_INT  FMOASIM_j;
A68_INT  GMOASIM;  /* YIELD */
A68_INT  HMOASIM;  /* ADICOPS - ELEM */
A68_CHAR * IMOASIM;  /* YIELD */
A68_VC  JMOASIM_bytes;
A68_31  LMOASIM_generator;   /* proc value of non-global proc */
A68_VC  QMOASIM;  /* avoid structure result */
A68_VC  RMOASIM_ans;
A68_INT  SMOASIM_i;
A68_INT  TMOASIM;  /* to part of loop */
A68_VC  UMOASIM;  /* OPERATORS - simple index */
A68_VC  VMOASIM;  /* OPERATORS - trim index */
A68_INT  WMOASIM;  /* YIELD */
A68_CHAR * XMOASIM;  /* YIELD */
A68_VC  YMOASIM;  /* clause result */
A_PROC_ENTRY(decodestring);
 /* line 523: */
 /* line 524: */
{ 
SLOASIM_c = Type.T;
 /* line 525: */
TLOASIM_step = TYNASIM_unsignedbytes(SLOASIM_c.Char.upb);
 /* line 526: */
 /* line 527: */
 /* line 528: */
if ( (SLOASIM_c.Char.upb!=2) )
{ 
 /* line 529: */
ULOASIM = Rep;
} 
else
{ 
A_CLOSURE( WLOASIM_generator, XLOASIM_generator, YLOASIM_generator );
(( YLOASIM_generator * ) ( WLOASIM_generator.nonlocals )) -> Rep = Rep;
A_CALLPROC(WLOASIM_generator,(A68_FALSE, &BMOASIM),(A68_FALSE, &BMOASIM,(WLOASIM_generator).nonlocals));
CMOASIM_bs = BMOASIM;
 /* line 530: */
EMOASIM = Rep.upb;
for ( DMOASIM_i = 1;
DMOASIM_i <= EMOASIM;
DMOASIM_i += 1 )
{ 
 /* line 531: */
for ( FMOASIM_j = 1;
FMOASIM_j <= 8;
FMOASIM_j += 1 )
{ 
 /* line 532: */
 /* line 533: */
 /* line 534: */
GMOASIM = ((8*(DMOASIM_i-1))+FMOASIM_j) ;
HMOASIM = ((FJDAOST_bitswidth-8)+FMOASIM_j) ;
IMOASIM = (&A_VINDEX(CMOASIM_bs,GMOASIM)) ;
(*IMOASIM) = (A68_CHAR)(1+(A_ELEM(HMOASIM,(A68_BITS )(A68_INT)(unsigned char)(*(&A_VINDEX(Rep,DMOASIM_i))),(A68_INT ),A_SZ_INT)));
}
 /* line 535: */
}
 /* line 536: */
 /* line 537: */
ULOASIM = CMOASIM_bs;
} 
JMOASIM_bytes = ULOASIM;
 /* line 538: */
A_CLOSURE( LMOASIM_generator, MMOASIM_generator, NMOASIM_generator );
(( NMOASIM_generator * ) ( LMOASIM_generator.nonlocals )) -> Type = Type;
A_CALLPROC(LMOASIM_generator,(A68_FALSE, &QMOASIM),(A68_FALSE, &QMOASIM,(LMOASIM_generator).nonlocals));
RMOASIM_ans = QMOASIM;
 /* line 539: */
TMOASIM = Type.No;
for ( SMOASIM_i = 1;
SMOASIM_i <= TMOASIM;
SMOASIM_i += 1 )
{ 
 /* line 540: */
 /* line 541: */
UMOASIM = SLOASIM_c.Char ;
WMOASIM = BCBASIM_wordtounsigned(A_VTRIM(VMOASIM,(JMOASIM_bytes),A_VTSCRIPT(&(VMOASIM.upb),(JMOASIM_bytes).upb,(((SMOASIM_i-1)*TLOASIM_step)+1),(SMOASIM_i*TLOASIM_step)))) ;
XMOASIM = (&A_VINDEX(RMOASIM_ans,SMOASIM_i)) ;
(*XMOASIM) = (*(&A_VINDEX(UMOASIM,WMOASIM)));
}
 /* line 542: */
 /* line 543: */
YMOASIM = RMOASIM_ans;
} 
A_PROC_EXIT(decodestring);
*ReturnedValue = (YMOASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  CNOASIM_decodesignal(A68_VC  Rep, A68_INT * Ix, A68_115  Type, A68_170  *ReturnedValue)
{ 
A68_115  LOOASIM;  /* united object - for case conformity */
A68_117 * MOOASIM_e;
A68_INT  NOOASIM_savedix;
A68_170  OOOASIM_result;
A68_117 * POOASIM_p;
A68_INT  QOOASIM_valuecount;
A68_INT  ROOASIM_tagsize;
A68_VC  SOOASIM;  /* OPERATORS - trim index */
A68_VC  TOOASIM_tagpart;
A68_INT  UOOASIM_ordinal;
A68_165 * VOOASIM_q;
A68_115  WOOASIM;  /* OPERATORS - mode -> union mode */
A68_115 * XOOASIM;  /* YIELD */
A68_170  YOOASIM;  /* OPERATORS - mode -> union mode */
A68_INT  ZOOASIM_i;
A68_INT  APOASIM;  /* to part of loop */
A68_169  BPOASIM;  /* collateral clause result */
A68_170  CPOASIM;  /* avoid structure result */
A68_169 * DPOASIM;  /* YIELD */
A68_170  EPOASIM;  /* OPERATORS - mode -> union mode */
A68_170  FPOASIM;  /* clause result */
A68_118 * GPOASIM_i;
A68_INT  HPOASIM_intsize;
A68_VC  IPOASIM;  /* OPERATORS - trim index */
A68_VC  JPOASIM_querypart;
A68_165 * KPOASIM_q;
A68_115  LPOASIM;  /* OPERATORS - mode -> union mode */
A68_115 * MPOASIM;  /* YIELD */
A68_170  NPOASIM;  /* OPERATORS - mode -> union mode */
A68_VC  OPOASIM;  /* OPERATORS - trim index */
A68_VC  PPOASIM_intpart;
A68_INT  QPOASIM_val;
A68_166  RPOASIM;  /* collateral clause result */
A68_166 * SPOASIM;  /* YIELD */
A68_170  TPOASIM;  /* OPERATORS - mode -> union mode */
A68_119 * UPOASIM_c;
A68_INT  VPOASIM_size;
A68_VC  WPOASIM;  /* OPERATORS - trim index */
A68_VC  XPOASIM_part;
A68_INT  YPOASIM_ordinal;
A68_165 * ZPOASIM_q;
A68_115  AQOASIM;  /* OPERATORS - mode -> union mode */
A68_115 * BQOASIM;  /* YIELD */
A68_170  CQOASIM;  /* OPERATORS - mode -> union mode */
A68_VC  DQOASIM;  /* OPERATORS - simple index */
A68_CHAR  EQOASIM_val;
A68_167  FQOASIM;  /* collateral clause result */
A68_167 * GQOASIM;  /* YIELD */
A68_170  HQOASIM;  /* OPERATORS - mode -> union mode */
A68_120 * IQOASIM_r;
A68_170  JQOASIM;  /* OPERATORS - mode -> union mode */
A68_171 * KQOASIM;  /* YIELD */
A68_121 * LQOASIM_s;
A68_INT  MQOASIM_stringsize;
A68_VC  NQOASIM;  /* OPERATORS - trim index */
A68_VC  OQOASIM_querypart;
A68_165 * PQOASIM_q;
A68_115  QQOASIM;  /* OPERATORS - mode -> union mode */
A68_115 * RQOASIM;  /* YIELD */
A68_170  SQOASIM;  /* OPERATORS - mode -> union mode */
A68_VC  TQOASIM;  /* OPERATORS - trim index */
A68_VC  UQOASIM_stringpart;
A68_VC  VQOASIM;  /* avoid structure result */
A68_VC  WQOASIM_val;
A68_168  XQOASIM;  /* collateral clause result */
A68_168 * YQOASIM;  /* YIELD */
A68_170  ZQOASIM;  /* OPERATORS - mode -> union mode */
A68_122 * AROASIM_f;
A68_170  BROASIM;  /* OPERATORS - mode -> union mode */
A68_172 * CROASIM;  /* YIELD */
A68_123 * DROASIM_s;
A68_170  EROASIM;  /* OPERATORS - mode -> union mode */
A68_171 * FROASIM;  /* YIELD */
A68_124  GROASIM_v;
A68_125  HROASIM_n;
A_PROC_ENTRY(decodesignal);
 /* line 550: */
 /* line 552: */
{ 
 /* line 564: */
 /* line 578: */
 /* line 586: */
 /* line 587: */
LOOASIM = Type ;
switch ( LOOASIM.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,MODE115,REF MODE117)  */
MOOASIM_e = (LOOASIM.data.mode1);
 /* line 588: */
 /* line 589: */
{ 
NOOASIM_savedix = (*Ix);
 /* line 590: */
 /* line 591: */
POOASIM_p = MOOASIM_e;
 /* line 592: */
QOOASIM_valuecount = 0;
 /* line 593: */
for ( ;; )
{ 
 /* line 594: */
if ( !((POOASIM_p!=VSAASIM_nilsenum)) ) break;
QOOASIM_valuecount+=1;
 /* line 595: */
 /* line 596: */
POOASIM_p = (*(&(POOASIM_p->Rest)));
}
 /* line 597: */
ROOASIM_tagsize = TYNASIM_unsignedbytes(QOOASIM_valuecount);
 /* line 598: */
A_CALLPROC(HENASIM_al,(0, (&ROOASIM_tagsize)),(0, (&ROOASIM_tagsize),(HENASIM_al).nonlocals));
 /* line 599: */
TOOASIM_tagpart = A_VTRIM(SOOASIM,(Rep),A_VTSCRIPT(&(SOOASIM.upb),(Rep).upb,(*Ix),(((*Ix)+ROOASIM_tagsize)-1)));
 /* line 600: */
(*Ix)+=ROOASIM_tagsize;
 /* line 601: */
A_CALLPROC(FENASIM_up,(TOOASIM_tagpart),(TOOASIM_tagpart,(FENASIM_up).nonlocals));
 /* line 602: */
UOOASIM_ordinal = BCBASIM_wordtounsigned(TOOASIM_tagpart);
 /* line 603: */
 /* line 604: */
if ( (UOOASIM_ordinal==0) )
{ 
VOOASIM_q = (A_HEAP(A68_165 ));
 /* line 605: */
XOOASIM = (&(VOOASIM_q->Type)) ;
(*XOOASIM) = A_UNITE(WOOASIM,mode1,1,MOOASIM_e);
 /* line 606: */
 /* line 607: */
 /* line 608: */
OOOASIM_result = A_UNITE(YOOASIM,mode1,1,VOOASIM_q);
} 
else
{ 
POOASIM_p = MOOASIM_e;
 /* line 609: */
APOASIM = (UOOASIM_ordinal-1);
for ( ZOOASIM_i = 1;
ZOOASIM_i <= APOASIM;
ZOOASIM_i += 1 )
{ 
POOASIM_p = (*(&(POOASIM_p->Rest)));
}
 /* line 610: */
 /* line 611: */
BPOASIM.Type = MOOASIM_e;
BPOASIM.Tag = UOOASIM_ordinal;
 /* line 612: */
CNOASIM_decodesignal( Rep, Ix, (*(&(POOASIM_p->T))), &CPOASIM );
BPOASIM.Assoc = CPOASIM;
DPOASIM = A_HEAP(A68_169 ) ;
(*DPOASIM) = BPOASIM ;
OOOASIM_result = A_UNITE(EPOASIM,mode5,5,DPOASIM);
} 
 /* line 613: */
(*Ix) = (NOOASIM_savedix+NZNASIM_machinewidth(Type));
 /* line 614: */
 /* line 615: */
 /* line 616: */
FPOASIM = OOOASIM_result;
} 
break;
case 2: /* REF STRUCT(REF MODE26,INT,INT)  */
GPOASIM_i = (LOOASIM.data.mode2);
 /* line 617: */
 /* line 618: */
{ 
HPOASIM_intsize = (NZNASIM_machinewidth(Type)-GENASIM_sizeunit);
 /* line 619: */
JPOASIM_querypart = A_VTRIM(IPOASIM,(Rep),A_VTSCRIPT(&(IPOASIM.upb),(Rep).upb,(*Ix),(((*Ix)+GENASIM_sizeunit)-1)));
 /* line 620: */
(*Ix)+=GENASIM_sizeunit;
 /* line 622: */
 /* line 623: */
if ( (BCBASIM_wordtounsigned(JPOASIM_querypart)==0) )
{ 
KPOASIM_q = (A_HEAP(A68_165 ));
 /* line 624: */
MPOASIM = (&(KPOASIM_q->Type)) ;
(*MPOASIM) = A_UNITE(LPOASIM,mode2,2,GPOASIM_i);
 /* line 625: */
(*Ix)+=HPOASIM_intsize;
 /* line 626: */
 /* line 627: */
 /* line 628: */
FPOASIM = A_UNITE(NPOASIM,mode1,1,KPOASIM_q);
} 
else
{ 
PPOASIM_intpart = A_VTRIM(OPOASIM,(Rep),A_VTSCRIPT(&(OPOASIM.upb),(Rep).upb,(*Ix),(((*Ix)+HPOASIM_intsize)-1)));
 /* line 629: */
(*Ix)+=HPOASIM_intsize;
 /* line 630: */
A_CALLPROC(FENASIM_up,(PPOASIM_intpart),(PPOASIM_intpart,(FENASIM_up).nonlocals));
 /* line 631: */
QPOASIM_val = HCBASIM_wordtosigned(PPOASIM_intpart);
 /* line 632: */
RPOASIM.Type = GPOASIM_i;
 /* line 633: */
RPOASIM.Value = QPOASIM_val;
 /* line 634: */
 /* line 635: */
SPOASIM = A_HEAP(A68_166 ) ;
(*SPOASIM) = RPOASIM ;
FPOASIM = A_UNITE(TPOASIM,mode2,2,SPOASIM);
} 
} 
break;
case 3: /* REF STRUCT(REF MODE26,REF MODE26)  */
UPOASIM_c = (LOOASIM.data.mode3);
 /* line 636: */
 /* line 637: */
{ 
VPOASIM_size = NZNASIM_machinewidth(Type);
 /* line 638: */
XPOASIM_part = A_VTRIM(WPOASIM,(Rep),A_VTSCRIPT(&(WPOASIM.upb),(Rep).upb,(*Ix),(((*Ix)+VPOASIM_size)-1)));
 /* line 639: */
(*Ix)+=VPOASIM_size;
 /* line 640: */
A_CALLPROC(FENASIM_up,(XPOASIM_part),(XPOASIM_part,(FENASIM_up).nonlocals));
 /* line 641: */
YPOASIM_ordinal = BCBASIM_wordtounsigned(XPOASIM_part);
 /* line 642: */
 /* line 643: */
if ( (YPOASIM_ordinal==0) )
{ 
ZPOASIM_q = (A_HEAP(A68_165 ));
 /* line 644: */
BQOASIM = (&(ZPOASIM_q->Type)) ;
(*BQOASIM) = A_UNITE(AQOASIM,mode3,3,UPOASIM_c);
 /* line 645: */
 /* line 646: */
 /* line 647: */
FPOASIM = A_UNITE(CQOASIM,mode1,1,ZPOASIM_q);
} 
else
{ 
DQOASIM = (*(&(UPOASIM_c->Char))) ;
EQOASIM_val = (*(&A_VINDEX(DQOASIM,YPOASIM_ordinal)));
 /* line 648: */
FQOASIM.Type = UPOASIM_c;
 /* line 649: */
FQOASIM.Value = EQOASIM_val;
 /* line 650: */
 /* line 651: */
GQOASIM = A_HEAP(A68_167 ) ;
(*GQOASIM) = FQOASIM ;
FPOASIM = A_UNITE(HQOASIM,mode3,3,GQOASIM);
} 
} 
break;
case 4: /* REF STRUCT(INT,MODE115)  */
IQOASIM_r = (LOOASIM.data.mode4);
 /* line 652: */
KQOASIM = HNOASIM_decoderow(Rep, Ix, (*IQOASIM_r)) ;
FPOASIM = A_UNITE(JQOASIM,mode6,6,KQOASIM);
break;
case 5: /* REF STRUCT(INT,MODE119)  */
LQOASIM_s = (LOOASIM.data.mode5);
 /* line 653: */
 /* line 654: */
{ 
MQOASIM_stringsize = (NZNASIM_machinewidth(Type)-GENASIM_sizeunit);
 /* line 655: */
OQOASIM_querypart = A_VTRIM(NQOASIM,(Rep),A_VTSCRIPT(&(NQOASIM.upb),(Rep).upb,(*Ix),(((*Ix)+GENASIM_sizeunit)-1)));
 /* line 656: */
(*Ix)+=GENASIM_sizeunit;
 /* line 658: */
 /* line 659: */
if ( (BCBASIM_wordtounsigned(OQOASIM_querypart)==0) )
{ 
PQOASIM_q = (A_HEAP(A68_165 ));
 /* line 660: */
RQOASIM = (&(PQOASIM_q->Type)) ;
(*RQOASIM) = A_UNITE(QQOASIM,mode5,5,LQOASIM_s);
 /* line 661: */
(*Ix)+=MQOASIM_stringsize;
 /* line 662: */
 /* line 663: */
 /* line 664: */
FPOASIM = A_UNITE(SQOASIM,mode1,1,PQOASIM_q);
} 
else
{ 
UQOASIM_stringpart = A_VTRIM(TQOASIM,(Rep),A_VTSCRIPT(&(TQOASIM.upb),(Rep).upb,(*Ix),(((*Ix)+MQOASIM_stringsize)-1)));
 /* line 665: */
(*Ix)+=MQOASIM_stringsize;
 /* line 666: */
A_CALLPROC(FENASIM_up,(UQOASIM_stringpart),(UQOASIM_stringpart,(FENASIM_up).nonlocals));
 /* line 667: */
RLOASIM_decodestring( UQOASIM_stringpart, (*LQOASIM_s), &VQOASIM );
WQOASIM_val = VQOASIM;
 /* line 668: */
XQOASIM.Type = LQOASIM_s;
 /* line 669: */
XQOASIM.Value = WQOASIM_val;
 /* line 670: */
 /* line 671: */
YQOASIM = A_HEAP(A68_168 ) ;
(*YQOASIM) = XQOASIM ;
FPOASIM = A_UNITE(ZQOASIM,mode4,4,YQOASIM);
} 
} 
break;
case 6: /* REF STRUCT(MODE115,MODE115)  */
AROASIM_f = (LOOASIM.data.mode6);
 /* line 672: */
CROASIM = EOOASIM_decodefn(Rep, Ix, AROASIM_f) ;
FPOASIM = A_UNITE(BROASIM,mode7,7,CROASIM);
break;
case 7: /* REF STRUCT(MODE115,REF MODE123)  */
DROASIM_s = (LOOASIM.data.mode7);
 /* line 673: */
FROASIM = TNOASIM_decodestructure(Rep, Ix, DROASIM_s) ;
FPOASIM = A_UNITE(EROASIM,mode6,6,FROASIM);
break;
case 8: /* STRUCT(INT)  */
GROASIM_v = (LOOASIM.data.mode8);
 /* line 674: */
FPOASIM = JTAASIM_voidsvalue;
break;
case 9: /* STRUCT(INT)  */
HROASIM_n = (LOOASIM.data.mode9);
 /* line 675: */
 /* line 676: */
FPOASIM = GTAASIM_nullsvalue;
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(decodesignal);
*ReturnedValue = (FPOASIM);
return;
} 
#undef NL

A68_VOID  KROASIM_rawdecode(A68_VC  Rep, A68_115  Type, A68_170  *ReturnedValue)
{ 
A68_31  MROASIM_generator;   /* proc value of non-global proc */
A68_VC  SROASIM;  /* avoid structure result */
A68_VC  RROASIM_myrep;
A68_INT  TROASIM_index;
A68_170  UROASIM;  /* clause result */
A68_170  VROASIM;  /* avoid structure result */
A_PROC_ENTRY(rawdecode);
 /* line 685: */
 /* line 686: */
{ 
A_CLOSURE( MROASIM_generator, NROASIM_generator, OROASIM_generator );
(( OROASIM_generator * ) ( MROASIM_generator.nonlocals )) -> Rep = Rep;
A_CALLPROC(MROASIM_generator,(A68_TRUE, &SROASIM),(A68_TRUE, &SROASIM,(MROASIM_generator).nonlocals));
RROASIM_myrep = SROASIM;
A_VASSIGN2(Rep,RROASIM_myrep,A68_CHAR );
 /* line 687: */
TROASIM_index = 1;
 /* line 688: */
 /* line 689: */
CNOASIM_decodesignal( RROASIM_myrep, (&TROASIM_index), Type, &VROASIM );
UROASIM = VROASIM;
} 
A_PROC_EXIT(rawdecode);
*ReturnedValue = (UROASIM);
return;
} 
#undef NL

A68_VOID  YROASIM_unmachine(A68_VC  Rep, A68_115  Type, A68_170  *ReturnedValue)
{ 
A68_31  ASOASIM_generator;   /* proc value of non-global proc */
A68_VC  GSOASIM;  /* avoid structure result */
A68_VC  FSOASIM_myrep;
A68_INT  HSOASIM_index;
A68_170  ISOASIM;  /* clause result */
A68_170  JSOASIM;  /* avoid structure result */
A_PROC_ENTRY(unmachine);
 /* line 692: */
 /* line 693: */
{ 
A_CLOSURE( ASOASIM_generator, BSOASIM_generator, CSOASIM_generator );
(( CSOASIM_generator * ) ( ASOASIM_generator.nonlocals )) -> Rep = Rep;
A_CALLPROC(ASOASIM_generator,(A68_TRUE, &GSOASIM),(A68_TRUE, &GSOASIM,(ASOASIM_generator).nonlocals));
FSOASIM_myrep = GSOASIM;
A_VASSIGN2(Rep,FSOASIM_myrep,A68_CHAR );
 /* line 694: */
HSOASIM_index = 1;
 /* line 695: */
 /* line 696: */
 /* line 699: */
CNOASIM_decodesignal( FSOASIM_myrep, (&HSOASIM_index), Type, &JSOASIM );
ISOASIM = JSOASIM;
} 
A_PROC_EXIT(unmachine);
*ReturnedValue = (ISOASIM);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void NYNASIM(void)   /* initialise DECS kesignals */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/kesignals.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/keambasics.m","./mfiles/kebasics.m","./mfiles/kesymbols.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
XDNASIM();   /* USE keambasics */
JSAASIM();   /* USE kebasics */
TCCASIM();   /* USE kesymbols */
JSCAOST();   /* USE basics */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/kesignals.a68";
A_config.translation_time = "Tue Apr  4 11:08:45 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "MYNASIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:08:45 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS kesignals);
UEAALIB_a68config(LGAALIB_configinfo, RYNASIM);
 /* line 68: */
 /* line 79: */
 /* line 99: */
 /* line 111: */
 /* line 184: */
 /* line 220: */
 /* line 237: */
 /* line 258: */
 /* line 287: */
 /* line 321: */
 /* line 329: */
 /* line 343: */
 /* line 360: */
 /* line 407: */
 /* line 496: */
 /* line 505: */
 /* line 522: */
 /* line 549: */
 /* line 684: */
 /* line 691: */
 /* line 704: */
A_PROC_EXIT(DECS kesignals);
} 
#undef NL
/* end of translation of ./a68files/kesignals.a68 */
