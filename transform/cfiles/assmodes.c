
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
/* UNAME:AAAATRN */
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
struct A68t118{
A68_VC  Id;
struct A68t118 * Rest;
};
typedef struct A68t118  A68_118 ;    /* STRUCT(REF MODE26,REF MODE118)  */
struct A68t119{
A68_INT  Int;
A_PAD_INT(PAD_22)
struct A68t119 * Rest;
};
typedef struct A68t119  A68_119 ;    /* STRUCT(INT,REF MODE119)  */
struct A68t121{
A68_INT  Attrno;
A_PAD_INT(PAD_23)
};
typedef struct A68t121  A68_121 ;    /* STRUCT(INT)  */
struct A68t122{
A68_VC  Classname;
struct A68t118 * Strings;
};
typedef struct A68t122  A68_122 ;    /* STRUCT(REF MODE26,REF MODE118)  */
struct A68t126 { A68_INT mode; union {
struct A68t121 * mode1;
struct A68t122 * mode2;
struct A68t123 * mode3;
struct A68t124 * mode4;
struct A68t125 * mode5;
} data; };
typedef struct A68t126  A68_126 ;    /* UNION(REF MODE121,REF MODE122,REF MODE123,REF MODE124,REF MODE125)  */
struct A68t123{
struct A68t126  Elem;
struct A68t123 * Rest;
};
typedef struct A68t123  A68_123 ;    /* STRUCT(MODE126,REF MODE123)  */
struct A68t124{
struct A68t126  Attr;
};
typedef struct A68t124  A68_124 ;    /* STRUCT(MODE126)  */
struct A68t125{
A68_INT  Attrnull;
A_PAD_INT(PAD_24)
};
typedef struct A68t125  A68_125 ;    /* STRUCT(INT)  */
struct A68t127{
struct A68t126  Tag;
};
typedef struct A68t127  A68_127 ;    /* STRUCT(MODE126)  */
struct A68t129{
A68_INT  Int;
A_PAD_INT(PAD_25)
A68_VC  Text;
};
typedef struct A68t129  A68_129 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t139 { A68_INT mode; union {
struct A68t129 * mode1;
struct A68t130 * mode2;
struct A68t131 * mode3;
struct A68t132 * mode4;
struct A68t133 * mode5;
struct A68t134 * mode6;
struct A68t135 * mode7;
struct A68t136 * mode8;
struct A68t137 * mode9;
struct A68t138 * mode10;
} data; };
typedef struct A68t139  A68_139 ;    /* UNION(REF MODE129,REF MODE130,REF MODE131,REF MODE132,REF MODE133,REF MODE134,REF MODE135,REF MODE136,REF MODE137,REF MODE138)  */
struct A68t130{
A68_INT  Sort;
A_PAD_INT(PAD_26)
struct A68t139  Test;
struct A68t139  Standard;
};
typedef struct A68t130  A68_130 ;    /* STRUCT(INT,MODE139,MODE139)  */
struct A68t131{
A68_INT  Nameno;
A_PAD_INT(PAD_27)
};
typedef struct A68t131  A68_131 ;    /* STRUCT(INT)  */
struct A68t132{
A68_INT  Intno;
A_PAD_INT(PAD_28)
};
typedef struct A68t132  A68_132 ;    /* STRUCT(INT)  */
struct A68t133{
struct A68t139  Left;
A68_INT  Sort;
A_PAD_INT(PAD_29)
struct A68t139  Right;
};
typedef struct A68t133  A68_133 ;    /* STRUCT(MODE139,INT,MODE139)  */
struct A68t134{
A68_INT  Sort;
A_PAD_INT(PAD_30)
struct A68t139  Right;
};
typedef struct A68t134  A68_134 ;    /* STRUCT(INT,MODE139)  */
struct A68t135{
struct A68t139  Cond;
struct A68t139  True;
struct A68t139  False;
};
typedef struct A68t135  A68_135 ;    /* STRUCT(MODE139,MODE139,MODE139)  */
struct A68t136{
struct A68t139  Formula;
};
typedef struct A68t136  A68_136 ;    /* STRUCT(MODE139)  */
struct A68t137{
A68_INT  Macparno;
A_PAD_INT(PAD_31)
};
typedef struct A68t137  A68_137 ;    /* STRUCT(INT)  */
struct A68t138{
A68_INT  Fnull;
A_PAD_INT(PAD_32)
};
typedef struct A68t138  A68_138 ;    /* STRUCT(INT)  */
struct A68t140{
struct A68t139  Tag;
};
typedef struct A68t140  A68_140 ;    /* STRUCT(MODE139)  */
struct A68t141{
struct A68t139  Formula;
struct A68t141 * Rest;
};
typedef struct A68t141  A68_141 ;    /* STRUCT(MODE139,REF MODE141)  */
struct A68t142{
struct A68t139  Lwb;
struct A68t139  Upb;
};
typedef struct A68t142  A68_142 ;    /* STRUCT(MODE139,MODE139)  */
struct A68t143 { A68_INT mode; union {
struct A68t129 * mode1;
struct A68t130 * mode2;
struct A68t131 * mode3;
struct A68t132 * mode4;
struct A68t133 * mode5;
struct A68t134 * mode6;
struct A68t135 * mode7;
struct A68t136 * mode8;
struct A68t137 * mode9;
struct A68t138 * mode10;
struct A68t142  mode11;
} data; };
typedef struct A68t143  A68_143 ;    /* UNION(REF MODE129,REF MODE130,REF MODE131,REF MODE132,REF MODE133,REF MODE134,REF MODE135,REF MODE136,REF MODE137,REF MODE138,MODE142)  */
struct A68t145{
A68_INT  Typeno;
A_PAD_INT(PAD_33)
};
typedef struct A68t145  A68_145 ;    /* STRUCT(INT)  */
struct A68t153 { A68_INT mode; union {
struct A68t145 * mode1;
struct A68t146 * mode2;
struct A68t147 * mode3;
struct A68t148 * mode4;
struct A68t149 * mode5;
struct A68t150 * mode6;
struct A68t151 * mode7;
struct A68t137 * mode8;
struct A68t152 * mode9;
} data; };
typedef struct A68t153  A68_153 ;    /* UNION(REF MODE145,REF MODE146,REF MODE147,REF MODE148,REF MODE149,REF MODE150,REF MODE151,REF MODE137,REF MODE152)  */
struct A68t146{
struct A68t139  Size;
struct A68t153  Elem;
};
typedef struct A68t146  A68_146 ;    /* STRUCT(MODE139,MODE153)  */
struct A68t147{
struct A68t153  Elem;
struct A68t147 * Rest;
};
typedef struct A68t147  A68_147 ;    /* STRUCT(MODE153,REF MODE147)  */
struct A68t148{
struct A68t153  From;
struct A68t153  To;
};
typedef struct A68t148  A68_148 ;    /* STRUCT(MODE153,MODE153)  */
struct A68t149{
struct A68t153  Type;
};
typedef struct A68t149  A68_149 ;    /* STRUCT(MODE153)  */
struct A68t150{
struct A68t139  Size;
struct A68t153  Char;
};
typedef struct A68t150  A68_150 ;    /* STRUCT(MODE139,MODE153)  */
struct A68t151{
A68_INT  Tvoid;
A_PAD_INT(PAD_34)
};
typedef struct A68t151  A68_151 ;    /* STRUCT(INT)  */
struct A68t152{
A68_INT  Tnull;
A_PAD_INT(PAD_35)
};
typedef struct A68t152  A68_152 ;    /* STRUCT(INT)  */
struct A68t154{
struct A68t153  Tag;
};
typedef struct A68t154  A68_154 ;    /* STRUCT(MODE153)  */
struct A68t155{
A68_VC  Tagname;
A68_VC  Chars;
};
typedef struct A68t155  A68_155 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t156{
A68_VC  Altname;
struct A68t153  Assoc;
};
typedef struct A68t156  A68_156 ;    /* STRUCT(REF MODE26,MODE153)  */
struct A68t157{
A68_VC  Tagname;
struct A68t142  Range;
};
typedef struct A68t157  A68_157 ;    /* STRUCT(REF MODE26,MODE142)  */
A_VECTOR(struct A68t156 ,A68t159);
typedef struct A68t159  A68_159 ;    /* VECTOR [] MODE156 */
struct A68t158 { A68_INT mode; union {
struct A68t159  mode1;
struct A68t157 * mode2;
struct A68t154 * mode3;
struct A68t155 * mode4;
} data; };
typedef struct A68t158  A68_158 ;    /* UNION(REF MODE159,REF MODE157,REF MODE154,REF MODE155)  */
struct A68t160{
A68_INT  Constno;
A_PAD_INT(PAD_36)
};
typedef struct A68t160  A68_160 ;    /* STRUCT(INT)  */
struct A68t161{
A68_INT  Typeno;
A_PAD_INT(PAD_37)
A68_INT  Primno;
A_PAD_INT(PAD_38)
};
typedef struct A68t161  A68_161 ;    /* STRUCT(INT,INT)  */
struct A68t162{
A68_INT  Typeno;
A_PAD_INT(PAD_39)
struct A68t139  Index;
};
typedef struct A68t162  A68_162 ;    /* STRUCT(INT,MODE139)  */
struct A68t163{
A68_INT  Typeno;
A_PAD_INT(PAD_40)
struct A68t142  Range;
};
typedef struct A68t163  A68_163 ;    /* STRUCT(INT,MODE142)  */
struct A68t164{
struct A68t153  Querytype;
};
typedef struct A68t164  A68_164 ;    /* STRUCT(MODE153)  */
struct A68t165{
A68_INT  Typeno;
A_PAD_INT(PAD_41)
A68_INT  Firstno;
A_PAD_INT(PAD_42)
A68_INT  Lastno;
A_PAD_INT(PAD_43)
};
typedef struct A68t165  A68_165 ;    /* STRUCT(INT,INT,INT)  */
struct A68t166{
A68_INT  Typeno;
A_PAD_INT(PAD_44)
struct A68t32  String;
};
typedef struct A68t166  A68_166 ;    /* STRUCT(INT,REF MODE32)  */
struct A68t167{
A68_INT  Cvoid;
A_PAD_INT(PAD_45)
};
typedef struct A68t167  A68_167 ;    /* STRUCT(INT)  */
struct A68t172{
A68_INT  Sort;
A_PAD_INT(PAD_46)
A68_INT  Nameno;
A_PAD_INT(PAD_47)
};
typedef struct A68t172  A68_172 ;    /* STRUCT(INT,INT)  */
struct A68t198 { A68_INT mode; union {
struct A68t160 * mode1;
struct A68t161 * mode2;
struct A68t162 * mode3;
struct A68t164 * mode4;
struct A68t166 * mode5;
struct A68t167 * mode6;
struct A68t149 * mode7;
struct A68t163 * mode8;
struct A68t165 * mode9;
struct A68t183 * mode10;
struct A68t172 * mode11;
struct A68t173 * mode12;
struct A68t174 * mode13;
struct A68t175 * mode14;
struct A68t176 * mode15;
struct A68t177 * mode16;
struct A68t178 * mode17;
struct A68t179 * mode18;
struct A68t180 * mode19;
struct A68t181 * mode20;
struct A68t182 * mode21;
struct A68t184 * mode22;
struct A68t185 * mode23;
struct A68t186 * mode24;
struct A68t188 * mode25;
struct A68t189 * mode26;
struct A68t190 * mode27;
struct A68t191 * mode28;
struct A68t192 * mode29;
struct A68t193 * mode30;
struct A68t194 * mode31;
struct A68t195 * mode32;
struct A68t196 * mode33;
struct A68t197 * mode34;
} data; };
typedef struct A68t198  A68_198 ;    /* UNION(REF MODE160,REF MODE161,REF MODE162,REF MODE164,REF MODE166,REF MODE167,REF MODE149,REF MODE163,REF MODE165,REF MODE183,REF MODE172,REF MODE173,REF MODE174,REF MODE175,REF MODE176,REF MODE177,REF MODE178,REF MODE179,REF MODE180,REF MODE181,REF MODE182,REF MODE184,REF MODE185,REF MODE186,REF MODE188,REF MODE189,REF MODE190,REF MODE191,REF MODE192,REF MODE193,REF MODE194,REF MODE195,REF MODE196,REF MODE197)  */
struct A68t173{
struct A68t198  Sink;
struct A68t198  Source;
};
typedef struct A68t173  A68_173 ;    /* STRUCT(MODE198,MODE198)  */
struct A68t174{
A68_INT  Typeno;
A_PAD_INT(PAD_48)
A68_INT  Altno;
A_PAD_INT(PAD_49)
struct A68t198  Assoc;
};
typedef struct A68t174  A68_174 ;    /* STRUCT(INT,INT,MODE198)  */
struct A68t175{
struct A68t198  Extract;
A68_INT  Typeno;
A_PAD_INT(PAD_50)
A68_INT  Altno;
A_PAD_INT(PAD_51)
};
typedef struct A68t175  A68_175 ;    /* STRUCT(MODE198,INT,INT)  */
struct A68t176{
struct A68t198  Unit;
A68_INT  Fnno;
A_PAD_INT(PAD_52)
A68_INT  Nameno;
A_PAD_INT(PAD_53)
};
typedef struct A68t176  A68_176 ;    /* STRUCT(MODE198,INT,INT)  */
struct A68t177{
struct A68t198  Unit;
struct A68t139  Index;
};
typedef struct A68t177  A68_177 ;    /* STRUCT(MODE198,MODE139)  */
struct A68t178{
struct A68t198  Unit;
struct A68t142  Range;
};
typedef struct A68t178  A68_178 ;    /* STRUCT(MODE198,MODE142)  */
struct A68t179{
struct A68t198  Unit;
struct A68t198  Index;
};
typedef struct A68t179  A68_179 ;    /* STRUCT(MODE198,MODE198)  */
struct A68t180{
struct A68t198  Unit;
struct A68t198  Index;
struct A68t198  From;
};
typedef struct A68t180  A68_180 ;    /* STRUCT(MODE198,MODE198,MODE198)  */
struct A68t181{
struct A68t139  Size;
struct A68t198  Elem;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(MODE139,MODE198)  */
struct A68t182{
struct A68t198  Elem;
struct A68t182 * Rest;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(MODE198,REF MODE182)  */
struct A68t183{
struct A68t198  Alt;
struct A68t183 * Rest;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(MODE198,REF MODE183)  */
struct A68t184{
A68_BOOL  String;
A_PAD_BOOL(PAD_54)
A68_INT  Sort;
A_PAD_INT(PAD_55)
struct A68t198  Left;
struct A68t198  Right;
};
typedef struct A68t184  A68_184 ;    /* STRUCT(BOOL,INT,MODE198,MODE198)  */
A_VECTOR(struct A68t202 ,A68t203);
typedef struct A68t203  A68_203 ;    /* VECTOR [] MODE202 */
struct A68t199{
struct A68t198  Tag;
};
typedef struct A68t199  A68_199 ;    /* STRUCT(MODE198)  */
struct A68t204{
A68_INT  Fnno;
A_PAD_INT(PAD_56)
struct A68t203  Macparams;
struct A68t126  Attr;
};
typedef struct A68t204  A68_204 ;    /* STRUCT(INT,REF MODE203,MODE126)  */
struct A68t201 { A68_INT mode; union {
struct A68t127  mode1;
struct A68t140  mode2;
struct A68t154  mode3;
struct A68t199  mode4;
struct A68t204  mode5;
} data; };
typedef struct A68t201  A68_201 ;    /* UNION(MODE127,MODE140,MODE154,MODE199,MODE204)  */
struct A68t202{
A68_INT  Sort;
A_PAD_INT(PAD_57)
struct A68t201  Param;
};
typedef struct A68t202  A68_202 ;    /* STRUCT(INT,MODE201)  */
struct A68t185{
struct A68t204  Inst;
struct A68t198  Right;
};
typedef struct A68t185  A68_185 ;    /* STRUCT(MODE204,MODE198)  */
struct A68t186{
struct A68t198  Left;
struct A68t204  Inst;
struct A68t198  Right;
};
typedef struct A68t186  A68_186 ;    /* STRUCT(MODE198,MODE204,MODE198)  */
struct A68t187{
A68_BOOL  Check;
A_PAD_BOOL(PAD_58)
A68_INT  Sort;
A_PAD_INT(PAD_59)
struct A68t198  Test;
struct A68t198  Output;
struct A68t187 * Rest;
};
typedef struct A68t187  A68_187 ;    /* STRUCT(BOOL,INT,MODE198,MODE198,REF MODE187)  */
struct A68t188{
struct A68t198  Input;
struct A68t187 * Choices;
};
typedef struct A68t188  A68_188 ;    /* STRUCT(MODE198,REF MODE187)  */
struct A68t189{
struct A68t139  Cond;
struct A68t198  True;
struct A68t198  False;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(MODE139,MODE198,MODE198)  */
struct A68t190{
struct A68t139  Repl;
struct A68t198  Body;
};
typedef struct A68t190  A68_190 ;    /* STRUCT(MODE139,MODE198)  */
struct A68t191{
struct A68t224 * Body;
struct A68t198  Output;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(REF MODE224,MODE198)  */
struct A68t192{
struct A68t231 * Body;
struct A68t198  Output;
};
typedef struct A68t192  A68_192 ;    /* STRUCT(REF MODE231,MODE198)  */
struct A68t193{
struct A68t198  Unit;
struct A68t126  Attr;
};
typedef struct A68t193  A68_193 ;    /* STRUCT(MODE198,MODE126)  */
struct A68t194{
struct A68t198  Unit;
struct A68t130  Check;
};
typedef struct A68t194  A68_194 ;    /* STRUCT(MODE198,MODE130)  */
struct A68t195{
struct A68t198  Unit;
};
typedef struct A68t195  A68_195 ;    /* STRUCT(MODE198)  */
struct A68t196{
struct A68t139  Size;
struct A68t198  Char;
};
typedef struct A68t196  A68_196 ;    /* STRUCT(MODE139,MODE198)  */
struct A68t197{
A68_INT  Unull;
A_PAD_INT(PAD_60)
};
typedef struct A68t197  A68_197 ;    /* STRUCT(INT)  */
struct A68t200{
A68_INT  Fnno;
A_PAD_INT(PAD_61)
};
typedef struct A68t200  A68_200 ;    /* STRUCT(INT)  */
struct A68t205 { A68_INT mode; union {
struct A68t121  mode1;
struct A68t132  mode2;
struct A68t145  mode3;
struct A68t160  mode4;
struct A68t200  mode5;
} data; };
typedef struct A68t205  A68_205 ;    /* UNION(MODE121,MODE132,MODE145,MODE160,MODE200)  */
struct A68t207 { A68_INT mode; union {
A68_VC  mode1;
struct A68t140 * mode2;
} data; };
typedef struct A68t207  A68_207 ;    /* UNION(REF MODE26,REF MODE140)  */
struct A68t206{
struct A68t207  Item;
struct A68t206 * Rest;
};
typedef struct A68t206  A68_206 ;    /* STRUCT(MODE207,REF MODE206)  */
struct A68t208{
struct A68t139  Cond;
struct A68t206 * Print;
};
typedef struct A68t208  A68_208 ;    /* STRUCT(MODE139,REF MODE206)  */
struct A68t209{
struct A68t139  Cond;
struct A68t206 * Fault;
};
typedef struct A68t209  A68_209 ;    /* STRUCT(MODE139,REF MODE206)  */
struct A68t210{
A68_INT  Nameno;
A_PAD_INT(PAD_62)
struct A68t210 * Rest;
};
typedef struct A68t210  A68_210 ;    /* STRUCT(INT,REF MODE210)  */
struct A68t211{
struct A68t210 * Letnames;
struct A68t198  Unit;
};
typedef struct A68t211  A68_211 ;    /* STRUCT(REF MODE210,MODE198)  */
struct A68t213{
struct A68t211  Seqlet;
};
typedef struct A68t213  A68_213 ;    /* STRUCT(MODE211)  */
struct A68t214{
struct A68t211  Seqvar;
};
typedef struct A68t214  A68_214 ;    /* STRUCT(MODE211)  */
struct A68t215{
struct A68t210 * Pvarnames;
struct A68t198  Init;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(REF MODE210,MODE198)  */
struct A68t216{
struct A68t198  To;
struct A68t198  From;
};
typedef struct A68t216  A68_216 ;    /* STRUCT(MODE198,MODE198)  */
struct A68t223 { A68_INT mode; union {
struct A68t121  mode1;
struct A68t132  mode2;
struct A68t145  mode3;
struct A68t160  mode4;
struct A68t200  mode5;
struct A68t208 * mode6;
struct A68t209 * mode7;
struct A68t213 * mode8;
struct A68t214 * mode9;
struct A68t215 * mode10;
struct A68t216 * mode11;
struct A68t218 * mode12;
struct A68t219 * mode13;
struct A68t220 * mode14;
struct A68t222 * mode15;
struct A68t224 * mode16;
struct A68t221 * mode17;
} data; };
typedef struct A68t223  A68_223 ;    /* UNION(MODE121,MODE132,MODE145,MODE160,MODE200,REF MODE208,REF MODE209,REF MODE213,REF MODE214,REF MODE215,REF MODE216,REF MODE218,REF MODE219,REF MODE220,REF MODE222,REF MODE224,REF MODE221)  */
struct A68t217{
A68_BOOL  Check;
A_PAD_BOOL(PAD_63)
A68_INT  Sort;
A_PAD_INT(PAD_64)
struct A68t198  Test;
struct A68t223  Output;
struct A68t217 * Rest;
};
typedef struct A68t217  A68_217 ;    /* STRUCT(BOOL,INT,MODE198,MODE223,REF MODE217)  */
struct A68t218{
struct A68t198  Input;
struct A68t217 * Choices;
};
typedef struct A68t218  A68_218 ;    /* STRUCT(MODE198,REF MODE217)  */
struct A68t219{
struct A68t139  Cond;
struct A68t223  True;
struct A68t223  False;
};
typedef struct A68t219  A68_219 ;    /* STRUCT(MODE139,MODE223,MODE223)  */
struct A68t220{
struct A68t139  Repl;
struct A68t223  Body;
};
typedef struct A68t220  A68_220 ;    /* STRUCT(MODE139,MODE223)  */
struct A68t221{
struct A68t139  Size;
struct A68t223  Elem;
};
typedef struct A68t221  A68_221 ;    /* STRUCT(MODE139,MODE223)  */
struct A68t222{
A68_INT  Seqnull;
A_PAD_INT(PAD_65)
};
typedef struct A68t222  A68_222 ;    /* STRUCT(INT)  */
struct A68t224{
struct A68t223  Step;
struct A68t224 * Rest;
};
typedef struct A68t224  A68_224 ;    /* STRUCT(MODE223,REF MODE224)  */
struct A68t225{
struct A68t141 * Sizes;
struct A68t204  Inst;
struct A68t210 * Makenames;
};
typedef struct A68t225  A68_225 ;    /* STRUCT(REF MODE141,MODE204,REF MODE210)  */
struct A68t226{
struct A68t198  From;
struct A68t198  To;
};
typedef struct A68t226  A68_226 ;    /* STRUCT(MODE198,MODE198)  */
struct A68t227{
struct A68t226  Join;
struct A68t227 * Rest;
};
typedef struct A68t227  A68_227 ;    /* STRUCT(MODE226,REF MODE227)  */
struct A68t228{
struct A68t141 * Repls;
struct A68t227 * Joins;
};
typedef struct A68t228  A68_228 ;    /* STRUCT(REF MODE141,REF MODE227)  */
struct A68t229{
A68_INT  Stepnull;
A_PAD_INT(PAD_66)
};
typedef struct A68t229  A68_229 ;    /* STRUCT(INT)  */
struct A68t230 { A68_INT mode; union {
struct A68t121  mode1;
struct A68t132  mode2;
struct A68t145  mode3;
struct A68t160  mode4;
struct A68t200  mode5;
struct A68t208 * mode6;
struct A68t209 * mode7;
struct A68t211 * mode8;
struct A68t225 * mode9;
struct A68t226 * mode10;
struct A68t228 * mode11;
struct A68t229 * mode12;
} data; };
typedef struct A68t230  A68_230 ;    /* UNION(MODE121,MODE132,MODE145,MODE160,MODE200,REF MODE208,REF MODE209,REF MODE211,REF MODE225,REF MODE226,REF MODE228,REF MODE229)  */
struct A68t231{
struct A68t230  Step;
struct A68t231 * Rest;
};
typedef struct A68t231  A68_231 ;    /* STRUCT(MODE230,REF MODE231)  */
struct A68t233{
A68_BOOL  Biop;
A_PAD_BOOL(PAD_67)
A68_VC  Name;
struct A68t203  Macparams;
};
typedef struct A68t233  A68_233 ;    /* STRUCT(BOOL,REF MODE26,REF MODE203)  */
struct A68t234{
struct A68t139  Output;
};
typedef struct A68t234  A68_234 ;    /* STRUCT(MODE139)  */
struct A68t235{
A68_INT  Reform;
A_PAD_INT(PAD_68)
};
typedef struct A68t235  A68_235 ;    /* STRUCT(INT)  */
struct A68t236{
A68_VC  Name;
A68_INT  Contextno;
A_PAD_INT(PAD_69)
struct A68t92  Ctname;
};
typedef struct A68t236  A68_236 ;    /* STRUCT(REF MODE26,INT,MODE92)  */
struct A68t237{
A68_INT  Sort;
A_PAD_INT(PAD_70)
struct A68t198  Init;
struct A68t139  Ambigtime;
struct A68t198  Ambig;
struct A68t139  Delaytime;
};
typedef struct A68t237  A68_237 ;    /* STRUCT(INT,MODE198,MODE139,MODE198,MODE139)  */
struct A68t238{
struct A68t198  Init;
struct A68t139  Delaytime;
};
typedef struct A68t238  A68_238 ;    /* STRUCT(MODE198,MODE139)  */
struct A68t239{
struct A68t198  Init;
};
typedef struct A68t239  A68_239 ;    /* STRUCT(MODE198)  */
struct A68t240{
A68_INT  Sort;
A_PAD_INT(PAD_71)
struct A68t139  Interval;
struct A68t198  Init;
struct A68t139  Skew;
};
typedef struct A68t240  A68_240 ;    /* STRUCT(INT,MODE139,MODE198,MODE139)  */
struct A68t241{
A68_BOOL  Faster;
A_PAD_BOOL(PAD_72)
A68_INT  Sort;
A_PAD_INT(PAD_73)
struct A68t204  Inst;
struct A68t139  Scale;
struct A68t198  Init;
struct A68t139  Skew;
};
typedef struct A68t241  A68_241 ;    /* STRUCT(BOOL,INT,MODE204,MODE139,MODE198,MODE139)  */
struct A68t244 { A68_INT mode; union {
struct A68t199 * mode1;
struct A68t233 * mode2;
struct A68t234 * mode3;
struct A68t235 * mode4;
struct A68t236 * mode5;
struct A68t237 * mode6;
struct A68t238 * mode7;
struct A68t239 * mode8;
struct A68t240 * mode9;
struct A68t241 * mode10;
struct A68t242 * mode11;
struct A68t243 * mode12;
} data; };
typedef struct A68t244  A68_244 ;    /* UNION(REF MODE199,REF MODE233,REF MODE234,REF MODE235,REF MODE236,REF MODE237,REF MODE238,REF MODE239,REF MODE240,REF MODE241,REF MODE242,REF MODE243)  */
struct A68t242{
struct A68t119 * Joincheck;
A68_BOOL  Check;
A_PAD_BOOL(PAD_74)
struct A68t244  Fnbody;
};
typedef struct A68t242  A68_242 ;    /* STRUCT(REF MODE119,BOOL,MODE244)  */
struct A68t243{
A68_INT  Bodynull;
A_PAD_INT(PAD_75)
};
typedef struct A68t243  A68_243 ;    /* STRUCT(INT)  */
struct A68t245{
A68_INT  Sort;
A_PAD_INT(PAD_76)
struct A68t205  Spec;
};
typedef struct A68t245  A68_245 ;    /* STRUCT(INT,MODE205)  */
struct A68t246{
A68_VC  Name;
struct A68t153  Type;
struct A68t126  Attr;
};
typedef struct A68t246  A68_246 ;    /* STRUCT(REF MODE26,MODE153,MODE126)  */
struct A68t247{
A68_INT  Contextno;
A_PAD_INT(PAD_77)
A68_INT  Closureno;
A_PAD_INT(PAD_78)
A68_INT  Libv_spec;
A_PAD_INT(PAD_79)
A68_INT  Libv_body;
A_PAD_INT(PAD_80)
A68_BOOL  Import;
A_PAD_BOOL(PAD_81)
A68_BOOL  Export;
A_PAD_BOOL(PAD_82)
};
typedef struct A68t247  A68_247 ;    /* STRUCT(INT,INT,INT,INT,BOOL,BOOL)  */
struct A68t248{
A68_INT  Sort;
A_PAD_INT(PAD_83)
A68_VC  Attrname;
struct A68t126  Value;
struct A68t247 * Usage;
};
typedef struct A68t248  A68_248 ;    /* STRUCT(INT,REF MODE26,MODE126,REF MODE247)  */
struct A68t249{
A68_INT  Sort;
A_PAD_INT(PAD_84)
A68_VC  Intname;
struct A68t126  Attr;
struct A68t143  Value;
struct A68t247 * Usage;
};
typedef struct A68t249  A68_249 ;    /* STRUCT(INT,REF MODE26,MODE126,MODE143,REF MODE247)  */
struct A68t250{
A68_INT  Sort;
A_PAD_INT(PAD_85)
A68_VC  Typename;
struct A68t126  Attr;
struct A68t158  Body;
struct A68t247 * Usage;
};
typedef struct A68t250  A68_250 ;    /* STRUCT(INT,REF MODE26,MODE126,MODE158,REF MODE247)  */
struct A68t251{
A68_INT  Sort;
A_PAD_INT(PAD_86)
A68_VC  Constname;
struct A68t126  Attr;
struct A68t198  Value;
struct A68t247 * Usage;
};
typedef struct A68t251  A68_251 ;    /* STRUCT(INT,REF MODE26,MODE126,MODE198,REF MODE247)  */
A_VECTOR(struct A68t245 ,A68t253);
typedef struct A68t253  A68_253 ;    /* VECTOR [] MODE245 */
A_VECTOR(struct A68t246 ,A68t254);
typedef struct A68t254  A68_254 ;    /* VECTOR [] MODE246 */
struct A68t252{
A68_INT  Sort;
A_PAD_INT(PAD_87)
A68_BOOL  Macro;
A_PAD_BOOL(PAD_88)
A68_VC  Fnname;
struct A68t253  Macspecs;
struct A68t126  Attr;
struct A68t210 * Inputs;
struct A68t210 * Outputs;
struct A68t254  Nametypes;
struct A68t244  Fnbody;
struct A68t247 * Usage;
};
typedef struct A68t252  A68_252 ;    /* STRUCT(INT,BOOL,REF MODE26,REF MODE253,MODE126,REF MODE210,REF MODE210,REF MODE254,MODE244,REF MODE247)  */
A_VECTOR(struct A68t248 *,A68t256);
typedef struct A68t256  A68_256 ;    /* VECTOR [] REF MODE248 */
A_VECTOR(struct A68t249 *,A68t257);
typedef struct A68t257  A68_257 ;    /* VECTOR [] REF MODE249 */
A_VECTOR(struct A68t250 *,A68t258);
typedef struct A68t258  A68_258 ;    /* VECTOR [] REF MODE250 */
A_VECTOR(struct A68t251 *,A68t259);
typedef struct A68t259  A68_259 ;    /* VECTOR [] REF MODE251 */
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
A_PAD_INT(PAD_89)
A68_INT  Sort;
A_PAD_INT(PAD_90)
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
A_PAD_INT(PAD_91)
struct A68t262 * Outers;
struct A68t262 * Freelist;
struct A68t263 * Outerslist;
};
typedef struct A68t265  A68_265 ;    /* STRUCT(INT,REF MODE262,REF MODE262,REF MODE263)  */
A_VECTOR(A68_VC ,A68t266);
typedef struct A68t266  A68_266 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t267,(A68_BOOL ,struct A68t266 *),(A68_BOOL ,struct A68t266 *,void *));
typedef struct A68t267  A68_267 ;    /* PROC(BOOL) MODE266 */

A_PROCEDURE(A68_VOID ,A68t268,(A68_BOOL ,struct A68t254 *),(A68_BOOL ,struct A68t254 *,void *));
typedef struct A68t268  A68_268 ;    /* PROC(BOOL) MODE254 */

A_PROCEDURE(A68_VOID ,A68t269,(A68_BOOL ,struct A68t203 *),(A68_BOOL ,struct A68t203 *,void *));
typedef struct A68t269  A68_269 ;    /* PROC(BOOL) MODE203 */

A_PROCEDURE(A68_VOID ,A68t270,(A68_BOOL ,struct A68t253 *),(A68_BOOL ,struct A68t253 *,void *));
typedef struct A68t270  A68_270 ;    /* PROC(BOOL) MODE253 */

A_PROCEDURE(A68_VOID ,A68t271,(A68_BOOL ,struct A68t256 *),(A68_BOOL ,struct A68t256 *,void *));
typedef struct A68t271  A68_271 ;    /* PROC(BOOL) MODE256 */

A_PROCEDURE(A68_VOID ,A68t272,(A68_BOOL ,struct A68t257 *),(A68_BOOL ,struct A68t257 *,void *));
typedef struct A68t272  A68_272 ;    /* PROC(BOOL) MODE257 */

A_PROCEDURE(A68_VOID ,A68t273,(A68_BOOL ,struct A68t258 *),(A68_BOOL ,struct A68t258 *,void *));
typedef struct A68t273  A68_273 ;    /* PROC(BOOL) MODE258 */

A_PROCEDURE(A68_VOID ,A68t274,(A68_BOOL ,struct A68t259 *),(A68_BOOL ,struct A68t259 *,void *));
typedef struct A68t274  A68_274 ;    /* PROC(BOOL) MODE259 */

A_PROCEDURE(A68_VOID ,A68t275,(A68_BOOL ,struct A68t260 *),(A68_BOOL ,struct A68t260 *,void *));
typedef struct A68t275  A68_275 ;    /* PROC(BOOL) MODE260 */
A_VECTOR(struct A68t262 *,A68t276);
typedef struct A68t276  A68_276 ;    /* VECTOR [] REF MODE262 */

A_PROCEDURE(A68_VOID ,A68t277,(A68_BOOL ,struct A68t276 *),(A68_BOOL ,struct A68t276 *,void *));
typedef struct A68t277  A68_277 ;    /* PROC(BOOL) MODE276 */

A_PROCEDURE(struct A68t121 *,A68t278,(A68_INT ),(A68_INT ,void *));
typedef struct A68t278  A68_278 ;    /* PROC(INT) REF MODE121 */

A_PROCEDURE(struct A68t124 *,A68t279,(struct A68t126 ),(struct A68t126 ,void *));
typedef struct A68t279  A68_279 ;    /* PROC(MODE126) REF MODE124 */

A_PROCEDURE(struct A68t127 *,A68t280,(struct A68t126 ),(struct A68t126 ,void *));
typedef struct A68t280  A68_280 ;    /* PROC(MODE126) REF MODE127 */

A_PROCEDURE(struct A68t131 *,A68t281,(A68_INT ),(A68_INT ,void *));
typedef struct A68t281  A68_281 ;    /* PROC(INT) REF MODE131 */

A_PROCEDURE(struct A68t132 *,A68t282,(A68_INT ),(A68_INT ,void *));
typedef struct A68t282  A68_282 ;    /* PROC(INT) REF MODE132 */

A_PROCEDURE(struct A68t137 *,A68t283,(A68_INT ),(A68_INT ,void *));
typedef struct A68t283  A68_283 ;    /* PROC(INT) REF MODE137 */

A_PROCEDURE(struct A68t136 *,A68t284,(struct A68t139 ),(struct A68t139 ,void *));
typedef struct A68t284  A68_284 ;    /* PROC(MODE139) REF MODE136 */

A_PROCEDURE(struct A68t140 *,A68t285,(struct A68t139 ),(struct A68t139 ,void *));
typedef struct A68t285  A68_285 ;    /* PROC(MODE139) REF MODE140 */

A_PROCEDURE(struct A68t145 *,A68t286,(A68_INT ),(A68_INT ,void *));
typedef struct A68t286  A68_286 ;    /* PROC(INT) REF MODE145 */

A_PROCEDURE(struct A68t149 *,A68t287,(struct A68t153 ),(struct A68t153 ,void *));
typedef struct A68t287  A68_287 ;    /* PROC(MODE153) REF MODE149 */

A_PROCEDURE(struct A68t154 *,A68t288,(struct A68t153 ),(struct A68t153 ,void *));
typedef struct A68t288  A68_288 ;    /* PROC(MODE153) REF MODE154 */

A_PROCEDURE(struct A68t160 *,A68t289,(A68_INT ),(A68_INT ,void *));
typedef struct A68t289  A68_289 ;    /* PROC(INT) REF MODE160 */

A_PROCEDURE(struct A68t164 *,A68t290,(struct A68t153 ),(struct A68t153 ,void *));
typedef struct A68t290  A68_290 ;    /* PROC(MODE153) REF MODE164 */

A_PROCEDURE(struct A68t195 *,A68t291,(struct A68t198 ),(struct A68t198 ,void *));
typedef struct A68t291  A68_291 ;    /* PROC(MODE198) REF MODE195 */

A_PROCEDURE(struct A68t199 *,A68t292,(struct A68t198 ),(struct A68t198 ,void *));
typedef struct A68t292  A68_292 ;    /* PROC(MODE198) REF MODE199 */

A_PROCEDURE(struct A68t213 *,A68t293,(struct A68t211 ),(struct A68t211 ,void *));
typedef struct A68t293  A68_293 ;    /* PROC(MODE211) REF MODE213 */

A_PROCEDURE(struct A68t214 *,A68t294,(struct A68t211 ),(struct A68t211 ,void *));
typedef struct A68t294  A68_294 ;    /* PROC(MODE211) REF MODE214 */

A_PROCEDURE(struct A68t200 *,A68t295,(A68_INT ),(A68_INT ,void *));
typedef struct A68t295  A68_295 ;    /* PROC(INT) REF MODE200 */

A_PROCEDURE(struct A68t234 *,A68t296,(struct A68t139 ),(struct A68t139 ,void *));
typedef struct A68t296  A68_296 ;    /* PROC(MODE139) REF MODE234 */

A_PROCEDURE(struct A68t239 *,A68t297,(struct A68t198 ),(struct A68t198 ,void *));
typedef struct A68t297  A68_297 ;    /* PROC(MODE198) REF MODE239 */
A_VECTOR(struct A68t118 *,A68t299);
typedef struct A68t299  A68_299 ;    /* VECTOR [] REF MODE118 */

A_PROCEDURE(A68_VOID ,A68t300,(A68_BOOL ,struct A68t299 *),(A68_BOOL ,struct A68t299 *,void *));
typedef struct A68t300  A68_300 ;    /* PROC(BOOL) MODE299 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from basics --- */
extern A68_VC  TTCAOST_nullid;
/* --- End of imports from basics --- */


/* --- Imports from putstrings --- */
extern A68_VOID  ZAAAOSI_makervc(A68_VC ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void JSCAOST(void);   /* basics */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_117   EAAATRN = {"$Id: assmodes.a68,v 34.2 1995/03/29 13:02:51 ella Exp $"}; 
A_GISVEC(A68_VC ,FAAATRN,EAAATRN,55)
A68_147 * GAAATRN_niltstr;
A68_183 * HAAATRN_nilualts;
A68_182 * IAAATRN_nilustr;
A68_187 * JAAATRN_niluchoices;
A68_199 * KAAATRN_nilunit;
A68_118 * LAAATRN_nilids;
A68_206 * MAAATRN_nilprintitems;
A68_210 * NAAATRN_nilnames;
A68_119 * OAAATRN_nilints;
A68_217 * PAAATRN_nilseqchoices;
A68_224 * QAAATRN_nilsequence;
A68_227 * RAAATRN_niljoins;
A68_231 * SAAATRN_nilseries;
A68_236 * TAAATRN_nilimport;
A68_248 * UAAATRN_nilattrdec;
A68_249 * VAAATRN_nilintdec;
A68_250 * WAAATRN_niltypedec;
A68_251 * XAAATRN_nilconstdec;
A68_252 * YAAATRN_nilfndec;
A68_203  ABAATRN_nilmacparams;
A68_141 * BBAATRN_nilformulas;
A68_247 * CBAATRN_nilusage;
A68_123 * DBAATRN_nilattrstr;
A68_253  FBAATRN_nilmacspecs;
A68_255 * GBAATRN_nilenviron;
A68_262 * HBAATRN_nilouters;
A68_263 * IBAATRN_nilouterslist;
A68_266  OBAATRN_nullids;
A68_254  UBAATRN_nullnametypes;
A68_203  ACAATRN_nullmacparams;
A68_253  GCAATRN_nullmacspecs;
A68_256  MCAATRN_nullattrdecs;
A68_257  SCAATRN_nullintdecs;
A68_258  YCAATRN_nulltypedecs;
A68_259  EDAATRN_nullconstdecs;
A68_260  KDAATRN_nullfndecs;
A68_276  QDAATRN_nullouters;
A68_261  SDAATRN_nullouter;
A68_125  ZHAATRN_attrnull;
A68_138  BIAATRN_fnull;
A68_152  DIAATRN_tnull;
A68_197  FIAATRN_unull;
A68_222  HIAATRN_seqnull;
A68_229  JIAATRN_stepnull;
A68_243  LIAATRN_bodynull;
A68_235  NIAATRN_reform;
A68_151  PIAATRN_tvoid;
A68_167  RIAATRN_cvoid;
#define TIAATRN_flattenleft 1
#define UIAATRN_flattenright 2
#define VIAATRN_flattenboth 3
#define WIAATRN_normalchoice 1
#define XIAATRN_elseofchoice 2
#define YIAATRN_elsechoice 3
#define ZIAATRN_noelsechoice 4
#define AJAATRN_explicitmacpar 0
#define BJAATRN_implicitmacpar 1
A68_INT  CJAATRN_checktypeoutput;
#define DJAATRN_checktype 1
#define EJAATRN_checkle 2
#define FJAATRN_checkge 3
#define GJAATRN_checkeq 4
#define HJAATRN_checkne 5
#define IJAATRN_fplus 1
#define JJAATRN_fminus 2
#define KJAATRN_fnot 3
#define LJAATRN_finot 5
#define MJAATRN_fsqrt 6
#define NJAATRN_fabs 7
#define OJAATRN_fmult 3
#define PJAATRN_fidiv 4
#define QJAATRN_feq 5
#define RJAATRN_fne 6
#define SJAATRN_fle 7
#define TJAATRN_fge 8
#define UJAATRN_flth 9
#define VJAATRN_fgth 10
#define WJAATRN_fand 11
#define XJAATRN_for 12
#define YJAATRN_fsl 14
#define ZJAATRN_fsr 15
#define AKAATRN_fiand 16
#define BKAATRN_fior 17
#define CKAATRN_fmod 18
#define DKAATRN_constint 1
#define EKAATRN_constint2 2
#define FKAATRN_const2int 3
#define GKAATRN_const2int2 4
#define HKAATRN_idelayintcon 5
#define IKAATRN_int1 1
#define JKAATRN_int2 2
#define KKAATRN_usource 1
#define LKAATRN_usink 2
#define MKAATRN_uiosource 3
#define NKAATRN_uiosink 4
#define OKAATRN_outerdec 1
#define PKAATRN_localdec 2
#define QKAATRN_macpardec 3
#define RKAATRN_outerattr 1
#define SKAATRN_outerint 2
#define TKAATRN_outertype 3
#define UKAATRN_outerconst 4
#define VKAATRN_outerfn 5
#define WKAATRN_assembler_version_no 921103
A68_299  BLAATRN_idstable;
A68_INT  DLAATRN_assembler_libno;
#define ELAATRN_ids_hash_size 32
A68_38  ZLAATRN_makeid;

A_STATIC A68_VOID  KBAATRN_generator(A68_BOOL  JBAATRN_anonymous, A68_266  *ReturnedValue);

A_STATIC A68_VOID  QBAATRN_generator(A68_BOOL  PBAATRN_anonymous, A68_254  *ReturnedValue);

A_STATIC A68_VOID  WBAATRN_generator(A68_BOOL  VBAATRN_anonymous, A68_203  *ReturnedValue);

A_STATIC A68_VOID  CCAATRN_generator(A68_BOOL  BCAATRN_anonymous, A68_253  *ReturnedValue);

A_STATIC A68_VOID  ICAATRN_generator(A68_BOOL  HCAATRN_anonymous, A68_256  *ReturnedValue);

A_STATIC A68_VOID  OCAATRN_generator(A68_BOOL  NCAATRN_anonymous, A68_257  *ReturnedValue);

A_STATIC A68_VOID  UCAATRN_generator(A68_BOOL  TCAATRN_anonymous, A68_258  *ReturnedValue);

A_STATIC A68_VOID  ADAATRN_generator(A68_BOOL  ZCAATRN_anonymous, A68_259  *ReturnedValue);

A_STATIC A68_VOID  GDAATRN_generator(A68_BOOL  FDAATRN_anonymous, A68_260  *ReturnedValue);

A_STATIC A68_VOID  MDAATRN_generator(A68_BOOL  LDAATRN_anonymous, A68_276  *ReturnedValue);

A68_121 * UDAATRN_makeattrname(A68_INT  Attrno);

A68_124 * ZDAATRN_makeattrbracket(A68_126  Attr);

A68_127 * EEAATRN_makeattrtag(A68_126  Tag);

A68_131 * JEAATRN_makefarith(A68_INT  Nameno);

A68_132 * OEAATRN_makefname(A68_INT  Intno);

A68_137 * TEAATRN_makefmacpar(A68_INT  Macparno);

A68_136 * YEAATRN_makefbracket(A68_139  Formula);

A68_140 * DFAATRN_makeformulatag(A68_139  Tag);

A68_145 * IFAATRN_maketname(A68_INT  Typeno);

A68_137 * NFAATRN_maketmacpar(A68_INT  Macparno);

A68_149 * SFAATRN_maketbracket(A68_153  Type);

A68_154 * XFAATRN_maketypetag(A68_153  Tag);

A68_160 * CGAATRN_makecname(A68_INT  Constno);

A68_149 * HGAATRN_makectype(A68_153  Type);

A68_164 * MGAATRN_makecquery(A68_153  Type);

A68_195 * RGAATRN_makeubracket(A68_198  Unit);

A68_199 * WGAATRN_makeunittag(A68_198  Tag);

A68_213 * BHAATRN_makeseqlet(A68_211  Let);

A68_214 * GHAATRN_makeseqvar(A68_211  Let);

A68_200 * LHAATRN_makefnname(A68_INT  Fnno);

A68_234 * QHAATRN_makearith(A68_139  Output);

A68_239 * VHAATRN_makeram(A68_198  Init);

A_STATIC A68_VOID  YKAATRN_generator(A68_BOOL  XKAATRN_anonymous, A68_299  *ReturnedValue);

A68_VOID  GLAATRN_make_id(A68_VC  Str, A68_VC  *ReturnedValue);

A68_VOID  CMAATRN_makeid(A68_CHAR  C, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  KBAATRN_generator(A68_BOOL  JBAATRN_anonymous, A68_266  *ReturnedValue)
{ 
A68_266  LBAATRN;  /* clause result */
A68_266  MBAATRN;  /* OPERATORS - dynamic generator */
{ 
MBAATRN.upb = 0 ;
( JBAATRN_anonymous? A_VLOC(A68_VC ,MBAATRN): A_VHEAP(A68_VC ,MBAATRN) );
LBAATRN = MBAATRN;
} 
*ReturnedValue = (LBAATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  QBAATRN_generator(A68_BOOL  PBAATRN_anonymous, A68_254  *ReturnedValue)
{ 
A68_254  RBAATRN;  /* clause result */
A68_254  SBAATRN;  /* OPERATORS - dynamic generator */
{ 
SBAATRN.upb = 0 ;
( PBAATRN_anonymous? A_VLOC(A68_246 ,SBAATRN): A_VHEAP(A68_246 ,SBAATRN) );
RBAATRN = SBAATRN;
} 
*ReturnedValue = (RBAATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  WBAATRN_generator(A68_BOOL  VBAATRN_anonymous, A68_203  *ReturnedValue)
{ 
A68_203  XBAATRN;  /* clause result */
A68_203  YBAATRN;  /* OPERATORS - dynamic generator */
{ 
YBAATRN.upb = 0 ;
( VBAATRN_anonymous? A_VLOC(A68_202 ,YBAATRN): A_VHEAP(A68_202 ,YBAATRN) );
XBAATRN = YBAATRN;
} 
*ReturnedValue = (XBAATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  CCAATRN_generator(A68_BOOL  BCAATRN_anonymous, A68_253  *ReturnedValue)
{ 
A68_253  DCAATRN;  /* clause result */
A68_253  ECAATRN;  /* OPERATORS - dynamic generator */
{ 
ECAATRN.upb = 0 ;
( BCAATRN_anonymous? A_VLOC(A68_245 ,ECAATRN): A_VHEAP(A68_245 ,ECAATRN) );
DCAATRN = ECAATRN;
} 
*ReturnedValue = (DCAATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ICAATRN_generator(A68_BOOL  HCAATRN_anonymous, A68_256  *ReturnedValue)
{ 
A68_256  JCAATRN;  /* clause result */
A68_256  KCAATRN;  /* OPERATORS - dynamic generator */
{ 
KCAATRN.upb = 0 ;
( HCAATRN_anonymous? A_VLOC(A68_248 *,KCAATRN): A_VHEAP(A68_248 *,KCAATRN) );
JCAATRN = KCAATRN;
} 
*ReturnedValue = (JCAATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  OCAATRN_generator(A68_BOOL  NCAATRN_anonymous, A68_257  *ReturnedValue)
{ 
A68_257  PCAATRN;  /* clause result */
A68_257  QCAATRN;  /* OPERATORS - dynamic generator */
{ 
QCAATRN.upb = 0 ;
( NCAATRN_anonymous? A_VLOC(A68_249 *,QCAATRN): A_VHEAP(A68_249 *,QCAATRN) );
PCAATRN = QCAATRN;
} 
*ReturnedValue = (PCAATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  UCAATRN_generator(A68_BOOL  TCAATRN_anonymous, A68_258  *ReturnedValue)
{ 
A68_258  VCAATRN;  /* clause result */
A68_258  WCAATRN;  /* OPERATORS - dynamic generator */
{ 
WCAATRN.upb = 0 ;
( TCAATRN_anonymous? A_VLOC(A68_250 *,WCAATRN): A_VHEAP(A68_250 *,WCAATRN) );
VCAATRN = WCAATRN;
} 
*ReturnedValue = (VCAATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ADAATRN_generator(A68_BOOL  ZCAATRN_anonymous, A68_259  *ReturnedValue)
{ 
A68_259  BDAATRN;  /* clause result */
A68_259  CDAATRN;  /* OPERATORS - dynamic generator */
{ 
CDAATRN.upb = 0 ;
( ZCAATRN_anonymous? A_VLOC(A68_251 *,CDAATRN): A_VHEAP(A68_251 *,CDAATRN) );
BDAATRN = CDAATRN;
} 
*ReturnedValue = (BDAATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  GDAATRN_generator(A68_BOOL  FDAATRN_anonymous, A68_260  *ReturnedValue)
{ 
A68_260  HDAATRN;  /* clause result */
A68_260  IDAATRN;  /* OPERATORS - dynamic generator */
{ 
IDAATRN.upb = 0 ;
( FDAATRN_anonymous? A_VLOC(A68_252 *,IDAATRN): A_VHEAP(A68_252 *,IDAATRN) );
HDAATRN = IDAATRN;
} 
*ReturnedValue = (HDAATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  MDAATRN_generator(A68_BOOL  LDAATRN_anonymous, A68_276  *ReturnedValue)
{ 
A68_276  NDAATRN;  /* clause result */
A68_276  ODAATRN;  /* OPERATORS - dynamic generator */
{ 
ODAATRN.upb = 0 ;
( LDAATRN_anonymous? A_VLOC(A68_262 *,ODAATRN): A_VHEAP(A68_262 *,ODAATRN) );
NDAATRN = ODAATRN;
} 
*ReturnedValue = (NDAATRN);
return;
} 
#undef NL

A68_121 * UDAATRN_makeattrname(A68_INT  Attrno)
{ 
A68_121 * VDAATRN_attrname;
A68_INT * WDAATRN;  /* YIELD */
A68_121 * XDAATRN;  /* clause result */
A_PROC_ENTRY(makeattrname);
 /* line 334: */
{ 
VDAATRN_attrname = (A_HEAP(A68_121 ));
WDAATRN = (&(VDAATRN_attrname->Attrno)) ;
(*WDAATRN) = Attrno;
XDAATRN = VDAATRN_attrname;
} 
A_PROC_EXIT(makeattrname);
return( XDAATRN );
} 
#undef NL

A68_124 * ZDAATRN_makeattrbracket(A68_126  Attr)
{ 
A68_124 * AEAATRN_attrbracket;
A68_126 * BEAATRN;  /* YIELD */
A68_124 * CEAATRN;  /* clause result */
A_PROC_ENTRY(makeattrbracket);
 /* line 337: */
{ 
AEAATRN_attrbracket = (A_HEAP(A68_124 ));
BEAATRN = (&(AEAATRN_attrbracket->Attr)) ;
(*BEAATRN) = Attr;
CEAATRN = AEAATRN_attrbracket;
} 
A_PROC_EXIT(makeattrbracket);
return( CEAATRN );
} 
#undef NL

A68_127 * EEAATRN_makeattrtag(A68_126  Tag)
{ 
A68_127 * FEAATRN_attrtag;
A68_126 * GEAATRN;  /* YIELD */
A68_127 * HEAATRN;  /* clause result */
A_PROC_ENTRY(makeattrtag);
 /* line 340: */
{ 
FEAATRN_attrtag = (A_HEAP(A68_127 ));
GEAATRN = (&(FEAATRN_attrtag->Tag)) ;
(*GEAATRN) = Tag;
HEAATRN = FEAATRN_attrtag;
} 
A_PROC_EXIT(makeattrtag);
return( HEAATRN );
} 
#undef NL

A68_131 * JEAATRN_makefarith(A68_INT  Nameno)
{ 
A68_131 * KEAATRN_farith;
A68_INT * LEAATRN;  /* YIELD */
A68_131 * MEAATRN;  /* clause result */
A_PROC_ENTRY(makefarith);
 /* line 343: */
{ 
KEAATRN_farith = (A_HEAP(A68_131 ));
LEAATRN = (&(KEAATRN_farith->Nameno)) ;
(*LEAATRN) = Nameno;
MEAATRN = KEAATRN_farith;
} 
A_PROC_EXIT(makefarith);
return( MEAATRN );
} 
#undef NL

A68_132 * OEAATRN_makefname(A68_INT  Intno)
{ 
A68_132 * PEAATRN_fname;
A68_INT * QEAATRN;  /* YIELD */
A68_132 * REAATRN;  /* clause result */
A_PROC_ENTRY(makefname);
 /* line 346: */
{ 
PEAATRN_fname = (A_HEAP(A68_132 ));
QEAATRN = (&(PEAATRN_fname->Intno)) ;
(*QEAATRN) = Intno;
REAATRN = PEAATRN_fname;
} 
A_PROC_EXIT(makefname);
return( REAATRN );
} 
#undef NL

A68_137 * TEAATRN_makefmacpar(A68_INT  Macparno)
{ 
A68_137 * UEAATRN_fmacpar;
A68_INT * VEAATRN;  /* YIELD */
A68_137 * WEAATRN;  /* clause result */
A_PROC_ENTRY(makefmacpar);
 /* line 349: */
{ 
UEAATRN_fmacpar = (A_HEAP(A68_137 ));
VEAATRN = (&(UEAATRN_fmacpar->Macparno)) ;
(*VEAATRN) = Macparno;
WEAATRN = UEAATRN_fmacpar;
} 
A_PROC_EXIT(makefmacpar);
return( WEAATRN );
} 
#undef NL

A68_136 * YEAATRN_makefbracket(A68_139  Formula)
{ 
A68_136 * ZEAATRN_fbracket;
A68_139 * AFAATRN;  /* YIELD */
A68_136 * BFAATRN;  /* clause result */
A_PROC_ENTRY(makefbracket);
 /* line 352: */
{ 
ZEAATRN_fbracket = (A_HEAP(A68_136 ));
AFAATRN = (&(ZEAATRN_fbracket->Formula)) ;
(*AFAATRN) = Formula;
BFAATRN = ZEAATRN_fbracket;
} 
A_PROC_EXIT(makefbracket);
return( BFAATRN );
} 
#undef NL

A68_140 * DFAATRN_makeformulatag(A68_139  Tag)
{ 
A68_140 * EFAATRN_ftag;
A68_139 * FFAATRN;  /* YIELD */
A68_140 * GFAATRN;  /* clause result */
A_PROC_ENTRY(makeformulatag);
 /* line 355: */
{ 
EFAATRN_ftag = (A_HEAP(A68_140 ));
FFAATRN = (&(EFAATRN_ftag->Tag)) ;
(*FFAATRN) = Tag;
GFAATRN = EFAATRN_ftag;
} 
A_PROC_EXIT(makeformulatag);
return( GFAATRN );
} 
#undef NL

A68_145 * IFAATRN_maketname(A68_INT  Typeno)
{ 
A68_145 * JFAATRN_tname;
A68_INT * KFAATRN;  /* YIELD */
A68_145 * LFAATRN;  /* clause result */
A_PROC_ENTRY(maketname);
 /* line 358: */
{ 
JFAATRN_tname = (A_HEAP(A68_145 ));
KFAATRN = (&(JFAATRN_tname->Typeno)) ;
(*KFAATRN) = Typeno;
LFAATRN = JFAATRN_tname;
} 
A_PROC_EXIT(maketname);
return( LFAATRN );
} 
#undef NL

A68_137 * NFAATRN_maketmacpar(A68_INT  Macparno)
{ 
A68_137 * OFAATRN_tmacpar;
A68_INT * PFAATRN;  /* YIELD */
A68_137 * QFAATRN;  /* clause result */
A_PROC_ENTRY(maketmacpar);
 /* line 361: */
{ 
OFAATRN_tmacpar = (A_HEAP(A68_137 ));
PFAATRN = (&(OFAATRN_tmacpar->Macparno)) ;
(*PFAATRN) = Macparno;
QFAATRN = OFAATRN_tmacpar;
} 
A_PROC_EXIT(maketmacpar);
return( QFAATRN );
} 
#undef NL

A68_149 * SFAATRN_maketbracket(A68_153  Type)
{ 
A68_149 * TFAATRN_tbracket;
A68_153 * UFAATRN;  /* YIELD */
A68_149 * VFAATRN;  /* clause result */
A_PROC_ENTRY(maketbracket);
 /* line 364: */
{ 
TFAATRN_tbracket = (A_HEAP(A68_149 ));
UFAATRN = (&(TFAATRN_tbracket->Type)) ;
(*UFAATRN) = Type;
VFAATRN = TFAATRN_tbracket;
} 
A_PROC_EXIT(maketbracket);
return( VFAATRN );
} 
#undef NL

A68_154 * XFAATRN_maketypetag(A68_153  Tag)
{ 
A68_154 * YFAATRN_typetag;
A68_153 * ZFAATRN;  /* YIELD */
A68_154 * AGAATRN;  /* clause result */
A_PROC_ENTRY(maketypetag);
 /* line 367: */
{ 
YFAATRN_typetag = (A_HEAP(A68_154 ));
ZFAATRN = (&(YFAATRN_typetag->Tag)) ;
(*ZFAATRN) = Tag;
AGAATRN = YFAATRN_typetag;
} 
A_PROC_EXIT(maketypetag);
return( AGAATRN );
} 
#undef NL

A68_160 * CGAATRN_makecname(A68_INT  Constno)
{ 
A68_160 * DGAATRN_cname;
A68_INT * EGAATRN;  /* YIELD */
A68_160 * FGAATRN;  /* clause result */
A_PROC_ENTRY(makecname);
 /* line 370: */
{ 
DGAATRN_cname = (A_HEAP(A68_160 ));
EGAATRN = (&(DGAATRN_cname->Constno)) ;
(*EGAATRN) = Constno;
FGAATRN = DGAATRN_cname;
} 
A_PROC_EXIT(makecname);
return( FGAATRN );
} 
#undef NL

A68_149 * HGAATRN_makectype(A68_153  Type)
{ 
A68_149 * IGAATRN_ctype;
A68_153 * JGAATRN;  /* YIELD */
A68_149 * KGAATRN;  /* clause result */
A_PROC_ENTRY(makectype);
 /* line 373: */
{ 
IGAATRN_ctype = (A_HEAP(A68_149 ));
JGAATRN = (&(IGAATRN_ctype->Type)) ;
(*JGAATRN) = Type;
KGAATRN = IGAATRN_ctype;
} 
A_PROC_EXIT(makectype);
return( KGAATRN );
} 
#undef NL

A68_164 * MGAATRN_makecquery(A68_153  Type)
{ 
A68_164 * NGAATRN_cquery;
A68_153 * OGAATRN;  /* YIELD */
A68_164 * PGAATRN;  /* clause result */
A_PROC_ENTRY(makecquery);
 /* line 376: */
{ 
NGAATRN_cquery = (A_HEAP(A68_164 ));
OGAATRN = (&(NGAATRN_cquery->Querytype)) ;
(*OGAATRN) = Type;
PGAATRN = NGAATRN_cquery;
} 
A_PROC_EXIT(makecquery);
return( PGAATRN );
} 
#undef NL

A68_195 * RGAATRN_makeubracket(A68_198  Unit)
{ 
A68_195 * SGAATRN_ubracket;
A68_198 * TGAATRN;  /* YIELD */
A68_195 * UGAATRN;  /* clause result */
A_PROC_ENTRY(makeubracket);
 /* line 379: */
{ 
SGAATRN_ubracket = (A_HEAP(A68_195 ));
TGAATRN = (&(SGAATRN_ubracket->Unit)) ;
(*TGAATRN) = Unit;
UGAATRN = SGAATRN_ubracket;
} 
A_PROC_EXIT(makeubracket);
return( UGAATRN );
} 
#undef NL

A68_199 * WGAATRN_makeunittag(A68_198  Tag)
{ 
A68_199 * XGAATRN_unittag;
A68_198 * YGAATRN;  /* YIELD */
A68_199 * ZGAATRN;  /* clause result */
A_PROC_ENTRY(makeunittag);
 /* line 382: */
{ 
XGAATRN_unittag = (A_HEAP(A68_199 ));
YGAATRN = (&(XGAATRN_unittag->Tag)) ;
(*YGAATRN) = Tag;
ZGAATRN = XGAATRN_unittag;
} 
A_PROC_EXIT(makeunittag);
return( ZGAATRN );
} 
#undef NL

A68_213 * BHAATRN_makeseqlet(A68_211  Let)
{ 
A68_213 * CHAATRN_seqlet;
A68_211 * DHAATRN;  /* YIELD */
A68_213 * EHAATRN;  /* clause result */
A_PROC_ENTRY(makeseqlet);
 /* line 385: */
{ 
CHAATRN_seqlet = (A_HEAP(A68_213 ));
DHAATRN = (&(CHAATRN_seqlet->Seqlet)) ;
(*DHAATRN) = Let;
EHAATRN = CHAATRN_seqlet;
} 
A_PROC_EXIT(makeseqlet);
return( EHAATRN );
} 
#undef NL

A68_214 * GHAATRN_makeseqvar(A68_211  Let)
{ 
A68_214 * HHAATRN_seqvar;
A68_211 * IHAATRN;  /* YIELD */
A68_214 * JHAATRN;  /* clause result */
A_PROC_ENTRY(makeseqvar);
 /* line 388: */
{ 
HHAATRN_seqvar = (A_HEAP(A68_214 ));
IHAATRN = (&(HHAATRN_seqvar->Seqvar)) ;
(*IHAATRN) = Let;
JHAATRN = HHAATRN_seqvar;
} 
A_PROC_EXIT(makeseqvar);
return( JHAATRN );
} 
#undef NL

A68_200 * LHAATRN_makefnname(A68_INT  Fnno)
{ 
A68_200 * MHAATRN_fnname;
A68_INT * NHAATRN;  /* YIELD */
A68_200 * OHAATRN;  /* clause result */
A_PROC_ENTRY(makefnname);
 /* line 391: */
{ 
MHAATRN_fnname = (A_HEAP(A68_200 ));
NHAATRN = (&(MHAATRN_fnname->Fnno)) ;
(*NHAATRN) = Fnno;
OHAATRN = MHAATRN_fnname;
} 
A_PROC_EXIT(makefnname);
return( OHAATRN );
} 
#undef NL

A68_234 * QHAATRN_makearith(A68_139  Output)
{ 
A68_234 * RHAATRN_arith;
A68_139 * SHAATRN;  /* YIELD */
A68_234 * THAATRN;  /* clause result */
A_PROC_ENTRY(makearith);
 /* line 394: */
{ 
RHAATRN_arith = (A_HEAP(A68_234 ));
SHAATRN = (&(RHAATRN_arith->Output)) ;
(*SHAATRN) = Output;
THAATRN = RHAATRN_arith;
} 
A_PROC_EXIT(makearith);
return( THAATRN );
} 
#undef NL

A68_239 * VHAATRN_makeram(A68_198  Init)
{ 
A68_239 * WHAATRN_ram;
A68_198 * XHAATRN;  /* YIELD */
A68_239 * YHAATRN;  /* clause result */
A_PROC_ENTRY(makeram);
 /* line 397: */
{ 
WHAATRN_ram = (A_HEAP(A68_239 ));
XHAATRN = (&(WHAATRN_ram->Init)) ;
(*XHAATRN) = Init;
YHAATRN = WHAATRN_ram;
} 
A_PROC_EXIT(makeram);
return( YHAATRN );
} 
#undef NL

A_STATIC A68_VOID  YKAATRN_generator(A68_BOOL  XKAATRN_anonymous, A68_299  *ReturnedValue)
{ 
A68_299  ZKAATRN;  /* clause result */
A68_299  ALAATRN;  /* OPERATORS - dynamic generator */
{ 
ALAATRN.upb = 0 ;
( XKAATRN_anonymous? A_VLOC(A68_118 *,ALAATRN): A_VHEAP(A68_118 *,ALAATRN) );
ZKAATRN = ALAATRN;
} 
*ReturnedValue = (ZKAATRN);
return;
} 
#undef NL

A68_VOID  GLAATRN_make_id(A68_VC  Str, A68_VC  *ReturnedValue)
{ 
A68_VC  HLAATRN;  /* clause result */
A68_INT  ILAATRN_hash_width;
A68_BOOL  JLAATRN;  /* clause result */
A68_INT  LLAATRN;  /* YIELD */
A68_INT  KLAATRN_hash;
A68_CHAR  MLAATRN_c;
A68_VC  NLAATRN;  /* OPERATORS - trim index */
A68_VC  OLAATRN;  /* forall yield */
A68_CHAR * PLAATRN;  /* forall control - []x */
A68_INT  QLAATRN;  /* forall loop counter */
A68_INT  RLAATRN;  /* ADICOPS - MOD */
A68_INT  TLAATRN;  /* YIELD */
A68_118 ** SLAATRN_ptr;
A68_BOOL  ULAATRN;  /* optbool result */
A68_118  VLAATRN;  /* collateral clause result */
A68_VC  WLAATRN;  /* avoid structure result */
A68_118 * XLAATRN;  /* YIELD */
A68_VC  YLAATRN;  /* avoid structure result */
A_PROC_ENTRY(make_id);
 /* line 448: */
 /* line 449: */
 /* line 450: */
if ( (Str.upb==0) )
{ 
HLAATRN = TTCAOST_nullid;
} 
else
{ 
{ 
ILAATRN_hash_width = BLAATRN_idstable.upb;
 /* line 451: */
 /* line 452: */
JLAATRN = (ILAATRN_hash_width>0);
if ( JLAATRN )
{ 
LLAATRN = 1 ;
KLAATRN_hash = (A68_INT)(unsigned char)A_VINDEX(Str,LLAATRN);
 /* line 453: */
OLAATRN = A_VTRIM(NLAATRN,(Str),A_VTSCRIPT(&(NLAATRN.upb),(Str).upb,2,(Str).upb)) ;
QLAATRN = OLAATRN.upb -1;
PLAATRN = OLAATRN.data;
for (;QLAATRN-- >= 0;
(PLAATRN++
) )
{
MLAATRN_c = *PLAATRN;
KLAATRN_hash+=(A68_INT)(unsigned char)MLAATRN_c;
}
 /* line 454: */
KLAATRN_hash = A_MOD(KLAATRN_hash,ILAATRN_hash_width,RLAATRN);
 /* line 455: */
TLAATRN = (KLAATRN_hash+1) ;
SLAATRN_ptr = (&A_VINDEX(BLAATRN_idstable,TLAATRN));
 /* line 456: */
for ( ;; )
{ 
ULAATRN = ((*SLAATRN_ptr)!=LAAATRN_nilids);
if ( ULAATRN )
{ /* line 457: */
ULAATRN = A_VC_NE((*(&((*SLAATRN_ptr)->Id))),Str);
}
if ( !(ULAATRN) ) break;
SLAATRN_ptr = (&((*SLAATRN_ptr)->Rest));
}
 /* line 458: */
 /* line 459: */
if ( ((*SLAATRN_ptr)==LAAATRN_nilids) )
{ 
ZAAAOSI_makervc( Str, &WLAATRN );
VLAATRN.Id = WLAATRN;
 /* line 460: */
VLAATRN.Rest = LAAATRN_nilids;
XLAATRN = A_HEAP(A68_118 ) ;
(*XLAATRN) = VLAATRN ;
(*SLAATRN_ptr) = XLAATRN;
} 
 /* line 461: */
 /* line 462: */
 /* line 463: */
HLAATRN = (*(&((*SLAATRN_ptr)->Id)));
} 
else
{ 
ZAAAOSI_makervc( Str, &YLAATRN );
HLAATRN = YLAATRN;
} 
} 
} 
A_PROC_EXIT(make_id);
*ReturnedValue = (HLAATRN);
return;
} 
#undef NL

A68_VOID  CMAATRN_makeid(A68_CHAR  C, A68_VC  *ReturnedValue)
{ 
A68_VC  DMAATRN;  /* clause result */
A68_VC  EMAATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  FMAATRN;  /* avoid structure result */
A_PROC_ENTRY(makeid);
GLAATRN_make_id( A_HVEC(EMAATRN,C,A68_CHAR ), &FMAATRN );
DMAATRN = FMAATRN;
A_PROC_EXIT(makeid);
*ReturnedValue = (DMAATRN);
return;
} 
#undef NL
 /* line 1: */
 /* line 4: */
void BAAATRN(void)   /* initialise DECS assmodes */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/assmodes.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_203  ZAAATRN;  /* OPERATORS - nil -> mode */
A68_253  EBAATRN;  /* OPERATORS - nil -> mode */
A68_266  NBAATRN;  /* avoid structure result */
A68_254  TBAATRN;  /* avoid structure result */
A68_203  ZBAATRN;  /* avoid structure result */
A68_253  FCAATRN;  /* avoid structure result */
A68_256  LCAATRN;  /* avoid structure result */
A68_257  RCAATRN;  /* avoid structure result */
A68_258  XCAATRN;  /* avoid structure result */
A68_259  DDAATRN;  /* avoid structure result */
A68_260  JDAATRN;  /* avoid structure result */
A68_276  PDAATRN;  /* avoid structure result */
A68_261  RDAATRN;  /* collateral clause result */
A68_INT * AIAATRN;  /* YIELD */
A68_INT * CIAATRN;  /* YIELD */
A68_INT * EIAATRN;  /* YIELD */
A68_INT * GIAATRN;  /* YIELD */
A68_INT * IIAATRN;  /* YIELD */
A68_INT * KIAATRN;  /* YIELD */
A68_INT * MIAATRN;  /* YIELD */
A68_INT * OIAATRN;  /* YIELD */
A68_INT * QIAATRN;  /* YIELD */
A68_INT * SIAATRN;  /* YIELD */
A68_299  CLAATRN;  /* avoid structure result */
A68_38  AMAATRN;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
JSCAOST();   /* USE basics */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/transform/assoc/./a68files/assmodes.a68";
A_config.translation_time = "Tue Apr  4 09:58:17 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "AAAATRN (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:58:17 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS assmodes);
UEAALIB_a68config(LGAALIB_configinfo, FAAATRN);
 /* line 87: */
 /* line 302: */
 /* line 304: */
GAAATRN_niltstr = (A68_147 *)A68_NIL;
 /* line 305: */
HAAATRN_nilualts = (A68_183 *)A68_NIL;
IAAATRN_nilustr = (A68_182 *)A68_NIL;
 /* line 306: */
JAAATRN_niluchoices = (A68_187 *)A68_NIL;
KAAATRN_nilunit = (A68_199 *)A68_NIL;
 /* line 307: */
LAAATRN_nilids = (A68_118 *)A68_NIL;
MAAATRN_nilprintitems = (A68_206 *)A68_NIL;
 /* line 308: */
NAAATRN_nilnames = (A68_210 *)A68_NIL;
OAAATRN_nilints = (A68_119 *)A68_NIL;
 /* line 309: */
PAAATRN_nilseqchoices = (A68_217 *)A68_NIL;
QAAATRN_nilsequence = (A68_224 *)A68_NIL;
 /* line 310: */
RAAATRN_niljoins = (A68_227 *)A68_NIL;
 /* line 311: */
SAAATRN_nilseries = (A68_231 *)A68_NIL;
TAAATRN_nilimport = (A68_236 *)A68_NIL;
 /* line 312: */
UAAATRN_nilattrdec = (A68_248 *)A68_NIL;
 /* line 313: */
VAAATRN_nilintdec = (A68_249 *)A68_NIL;
WAAATRN_niltypedec = (A68_250 *)A68_NIL;
 /* line 314: */
XAAATRN_nilconstdec = (A68_251 *)A68_NIL;
YAAATRN_nilfndec = (A68_252 *)A68_NIL;
 /* line 315: */
ABAATRN_nilmacparams = (A_VVAC(ZAAATRN));
 /* line 316: */
BBAATRN_nilformulas = (A68_141 *)A68_NIL;
 /* line 317: */
CBAATRN_nilusage = (A68_247 *)A68_NIL;
DBAATRN_nilattrstr = (A68_123 *)A68_NIL;
 /* line 318: */
FBAATRN_nilmacspecs = (A_VVAC(EBAATRN));
GBAATRN_nilenviron = (A68_255 *)A68_NIL;
 /* line 319: */
HBAATRN_nilouters = (A68_262 *)A68_NIL;
IBAATRN_nilouterslist = (A68_263 *)A68_NIL;
 /* line 321: */
KBAATRN_generator( A68_FALSE, &NBAATRN );
OBAATRN_nullids = NBAATRN;
QBAATRN_generator( A68_FALSE, &TBAATRN );
UBAATRN_nullnametypes = TBAATRN;
 /* line 322: */
WBAATRN_generator( A68_FALSE, &ZBAATRN );
ACAATRN_nullmacparams = ZBAATRN;
CCAATRN_generator( A68_FALSE, &FCAATRN );
GCAATRN_nullmacspecs = FCAATRN;
 /* line 323: */
ICAATRN_generator( A68_FALSE, &LCAATRN );
MCAATRN_nullattrdecs = LCAATRN;
 /* line 324: */
OCAATRN_generator( A68_FALSE, &RCAATRN );
SCAATRN_nullintdecs = RCAATRN;
 /* line 325: */
UCAATRN_generator( A68_FALSE, &XCAATRN );
YCAATRN_nulltypedecs = XCAATRN;
 /* line 326: */
ADAATRN_generator( A68_FALSE, &DDAATRN );
EDAATRN_nullconstdecs = DDAATRN;
 /* line 327: */
GDAATRN_generator( A68_FALSE, &JDAATRN );
KDAATRN_nullfndecs = JDAATRN;
 /* line 328: */
MDAATRN_generator( A68_FALSE, &PDAATRN );
QDAATRN_nullouters = PDAATRN;
 /* line 330: */
RDAATRN.Closureno = 0;
RDAATRN.Sort = 0;
RDAATRN.Environ = GBAATRN_nilenviron;
SDAATRN_nullouter = RDAATRN;
 /* line 333: */
 /* line 336: */
 /* line 339: */
 /* line 342: */
 /* line 345: */
 /* line 348: */
 /* line 351: */
 /* line 354: */
 /* line 357: */
 /* line 360: */
 /* line 363: */
 /* line 366: */
 /* line 369: */
 /* line 372: */
 /* line 375: */
 /* line 378: */
 /* line 381: */
 /* line 384: */
 /* line 387: */
 /* line 390: */
 /* line 393: */
 /* line 396: */
 /* line 400: */
AIAATRN = (&((&ZHAATRN_attrnull)->Attrnull)) ;
(*AIAATRN) = (A68_INT )0X6e756c6cU;
 /* line 401: */
CIAATRN = (&((&BIAATRN_fnull)->Fnull)) ;
(*CIAATRN) = (A68_INT )0X6e756c6cU;
 /* line 402: */
EIAATRN = (&((&DIAATRN_tnull)->Tnull)) ;
(*EIAATRN) = (A68_INT )0X6e756c6cU;
 /* line 403: */
GIAATRN = (&((&FIAATRN_unull)->Unull)) ;
(*GIAATRN) = (A68_INT )0X6e756c6cU;
 /* line 404: */
IIAATRN = (&((&HIAATRN_seqnull)->Seqnull)) ;
(*IIAATRN) = (A68_INT )0X6e756c6cU;
 /* line 405: */
KIAATRN = (&((&JIAATRN_stepnull)->Stepnull)) ;
(*KIAATRN) = (A68_INT )0X6e756c6cU;
 /* line 406: */
MIAATRN = (&((&LIAATRN_bodynull)->Bodynull)) ;
(*MIAATRN) = (A68_INT )0X6e756c6cU;
 /* line 407: */
OIAATRN = (&((&NIAATRN_reform)->Reform)) ;
(*OIAATRN) = (A68_INT )0X6e743352U;
 /* line 408: */
QIAATRN = (&((&PIAATRN_tvoid)->Tvoid)) ;
(*QIAATRN) = (A68_INT )0X766f6964U;
 /* line 409: */
SIAATRN = (&((&RIAATRN_cvoid)->Cvoid)) ;
(*SIAATRN) = (A68_INT )0X766f6964U;
 /* line 413: */
 /* line 414: */
 /* line 415: */
 /* line 416: */
 /* line 417: */
CJAATRN_checktypeoutput = (-1);
 /* line 418: */
 /* line 419: */
 /* line 420: */
 /* line 421: */
 /* line 422: */
 /* line 423: */
 /* line 424: */
 /* line 425: */
 /* line 426: */
 /* line 427: */
 /* line 428: */
 /* line 429: */
 /* line 432: */
 /* line 442: */
 /* line 443: */
YKAATRN_generator( A68_TRUE, &CLAATRN );
BLAATRN_idstable = CLAATRN;
 /* line 444: */
DLAATRN_assembler_libno = (-1);
 /* line 445: */
 /* line 447: */
 /* line 465: */
AMAATRN.fn.fn_global = GLAATRN_make_id;
AMAATRN.nonlocals = A68_NIL;
ZLAATRN_makeid = (AMAATRN);
 /* line 466: */
 /* line 470: */
 /* line 471: */
 /* line 532: */
/*SKIP*/;
A_PROC_EXIT(DECS assmodes);
} 
#undef NL
/* end of translation of ./a68files/assmodes.a68 */
