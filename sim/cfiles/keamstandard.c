
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
/* UNAME:GYOASIM */
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
A68_INT  Sort;
A_PAD_INT(PAD_22)
A68_INT  Size;
A_PAD_INT(PAD_23)
};
typedef struct A68t113  A68_113 ;    /* STRUCT(INT,INT)  */
struct A68t114{
struct A68t113  Head;
struct A68t114 * Tail;
};
typedef struct A68t114  A68_114 ;    /* STRUCT(MODE113,REF MODE114)  */
struct A68t116{
A68_INT  Lab;
A_PAD_INT(PAD_24)
A68_VC  Tag;
};
typedef struct A68t116  A68_116 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t115{
struct A68t116  Labelint;
struct A68t116  Labelcallinst;
A68_INT  Workspacesize;
A_PAD_INT(PAD_25)
A68_INT  Evalfn;
A_PAD_INT(PAD_26)
A68_INT  History;
A_PAD_INT(PAD_27)
A68_INT  Declid;
A_PAD_INT(PAD_28)
};
typedef struct A68t115  A68_115 ;    /* STRUCT(MODE116,MODE116,INT,INT,INT,INT)  */

A_PROCEDURE(struct A68t115 *,A68t117,(A68_VC ,struct A68t32 ,A68_INT ,struct A68t32 ,struct A68t36 ),(A68_VC ,struct A68t32 ,A68_INT ,struct A68t32 ,struct A68t36 ,void *));
typedef struct A68t117  A68_117 ;    /* PROC(MODE26,MODE32,INT,MODE32,MODE36) REF MODE115 */
struct A68t118 { A68_INT mode; union {
A68_INT  mode1;
struct A68t116  mode2;
} data; };
typedef struct A68t118  A68_118 ;    /* UNION(INT,MODE116,VOID)  */

A_PROCEDURE(A68_VOID ,A68t119,(A68_VC ,struct A68t116 *),(A68_VC ,struct A68t116 *,void *));
typedef struct A68t119  A68_119 ;    /* PROC(MODE26) MODE116 */

A_PROCEDURE(A68_VOID ,A68t120,(struct A68t116 *),(struct A68t116 *,void *));
typedef struct A68t120  A68_120 ;    /* PROC MODE116 */

A_PROCEDURE(A68_VOID ,A68t121,(void),(void *));
typedef struct A68t121  A68_121 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t122,(struct A68t43 ,A68_INT ,struct A68t36 ),(struct A68t43 ,A68_INT ,struct A68t36 ,void *));
typedef struct A68t122  A68_122 ;    /* PROC(MODE43,INT,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t123,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t123  A68_123 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_INT ,A68t124,(A68_INT ,A68_INT *),(A68_INT ,A68_INT *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(INT,REF INT) INT */

A_PROCEDURE(A68_VC *,A68t125,(A68_VC ),(A68_VC ,void *));
typedef struct A68t125  A68_125 ;    /* PROC(REF MODE26) REF REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t126,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t126  A68_126 ;    /* PROC(INT,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t127,(A68_INT ),(A68_INT ,void *));
typedef struct A68t127  A68_127 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t128,(A68_INT ,struct A68t118 ),(A68_INT ,struct A68t118 ,void *));
typedef struct A68t128  A68_128 ;    /* PROC(INT,MODE118) VOID */

A_PROCEDURE(A68_VOID ,A68t129,(A68_INT ,A68_INT ,struct A68t118 ),(A68_INT ,A68_INT ,struct A68t118 ,void *));
typedef struct A68t129  A68_129 ;    /* PROC(INT,INT,MODE118) VOID */

A_PROCEDURE(A68_VOID ,A68t130,(struct A68t116 ),(struct A68t116 ,void *));
typedef struct A68t130  A68_130 ;    /* PROC(MODE116) VOID */

A_PROCEDURE(A68_VOID ,A68t131,(A68_INT ,struct A68t116 ),(A68_INT ,struct A68t116 ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(INT,MODE116) VOID */

A_PROCEDURE(A68_VOID ,A68t132,(struct A68t118 ,struct A68t116 ),(struct A68t118 ,struct A68t116 ,void *));
typedef struct A68t132  A68_132 ;    /* PROC(MODE118,MODE116) VOID */

A_PROCEDURE(A68_VOID ,A68t133,(struct A68t116 ,struct A68t114 *,struct A68t114 *),(struct A68t116 ,struct A68t114 *,struct A68t114 *,void *));
typedef struct A68t133  A68_133 ;    /* PROC(MODE116,REF MODE114,REF MODE114) VOID */

A_PROCEDURE(A68_VOID ,A68t134,(struct A68t116 ,A68_INT ),(struct A68t116 ,A68_INT ,void *));
typedef struct A68t134  A68_134 ;    /* PROC(MODE116,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t135,(A68_INT ,struct A68t36 ,A68_VC *),(A68_INT ,struct A68t36 ,A68_VC *,void *));
typedef struct A68t135  A68_135 ;    /* PROC(INT,MODE36) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t136,(A68_INT ,struct A68t36 ),(A68_INT ,struct A68t36 ,void *));
typedef struct A68t136  A68_136 ;    /* PROC(INT,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t137,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t137  A68_137 ;    /* PROC(REF MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t138,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t138  A68_138 ;    /* PROC(INT,INT) REF MODE26 */
struct A68t140 ;

A_PROCEDURE(A68_VOID ,A68t139,(A68_INT ,struct A68t140 *),(A68_INT ,struct A68t140 *,void *));
typedef struct A68t139  A68_139 ;    /* PROC(INT) MODE140 */
struct A68t140{
A68_INT  Lasttime;
A_PAD_INT(PAD_29)
A68_INT  Interrupted;
A_PAD_INT(PAD_30)
};
typedef struct A68t140  A68_140 ;    /* STRUCT(INT,INT)  */
struct A68t142 ;

A_PROCEDURE(A68_VOID ,A68t141,(struct A68t142 ,struct A68t142 ,struct A68t36 ),(struct A68t142 ,struct A68t142 ,struct A68t36 ,void *));
typedef struct A68t141  A68_141 ;    /* PROC(MODE142,MODE142,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t142,(A68_VC ,struct A68t36 ),(A68_VC ,struct A68t36 ,void *));
typedef struct A68t142  A68_142 ;    /* PROC(REF MODE26,MODE36) VOID */
struct A68t144 ;

A_PROCEDURE(A68_VOID ,A68t143,(struct A68t144 *),(struct A68t144 *,void *));
typedef struct A68t143  A68_143 ;    /* PROC MODE144 */
struct A68t144{
A68_INT  Codesize;
A_PAD_INT(PAD_31)
A68_INT  Datasize;
A_PAD_INT(PAD_32)
A68_INT  Dynamicstacksize;
A_PAD_INT(PAD_33)
A68_INT  Staticstacksize;
A_PAD_INT(PAD_34)
};
typedef struct A68t144  A68_144 ;    /* STRUCT(INT,INT,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t145,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t145  A68_145 ;    /* PROC(INT,INT) VOID */
struct A68t146{
A68_INT  Svoid;
A_PAD_INT(PAD_35)
};
typedef struct A68t146  A68_146 ;    /* STRUCT(INT)  */
struct A68t147{
A68_INT  Snull;
A_PAD_INT(PAD_36)
};
typedef struct A68t147  A68_147 ;    /* STRUCT(INT)  */
struct A68t148{
A68_VC  Id;
A68_INT  Lwb;
A_PAD_INT(PAD_37)
A68_INT  Upb;
A_PAD_INT(PAD_38)
};
typedef struct A68t148  A68_148 ;    /* STRUCT(REF MODE26,INT,INT)  */
struct A68t149{
A68_VC  Id;
A68_VC  Char;
};
typedef struct A68t149  A68_149 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t150{
A68_INT  No;
A_PAD_INT(PAD_39)
struct A68t149  T;
};
typedef struct A68t150  A68_150 ;    /* STRUCT(INT,MODE149)  */
struct A68t152 { A68_INT mode; union {
struct A68t151 * mode1;
struct A68t148 * mode2;
struct A68t149 * mode3;
struct A68t153 * mode4;
struct A68t150 * mode5;
struct A68t154 * mode6;
struct A68t155 * mode7;
struct A68t146  mode8;
struct A68t147  mode9;
} data; };
typedef struct A68t152  A68_152 ;    /* UNION(REF MODE151,REF MODE148,REF MODE149,REF MODE153,REF MODE150,REF MODE154,REF MODE155,MODE146,MODE147)  */
struct A68t151{
A68_VC  Id;
struct A68t152  T;
struct A68t151 * Rest;
};
typedef struct A68t151  A68_151 ;    /* STRUCT(REF MODE26,MODE152,REF MODE151)  */
struct A68t153{
A68_INT  No;
A_PAD_INT(PAD_40)
struct A68t152  Type;
};
typedef struct A68t153  A68_153 ;    /* STRUCT(INT,MODE152)  */
struct A68t154{
struct A68t152  From;
struct A68t152  To;
};
typedef struct A68t154  A68_154 ;    /* STRUCT(MODE152,MODE152)  */
struct A68t155{
struct A68t152  T;
struct A68t155 * Rest;
};
typedef struct A68t155  A68_155 ;    /* STRUCT(MODE152,REF MODE155)  */
struct A68t156 { A68_INT mode; union {
struct A68t151 * mode1;
struct A68t148 * mode2;
struct A68t149 * mode3;
} data; };
typedef struct A68t156  A68_156 ;    /* UNION(REF MODE151,REF MODE148,REF MODE149)  */
struct A68t157{
A68_INT  Svvoid;
A_PAD_INT(PAD_41)
};
typedef struct A68t157  A68_157 ;    /* STRUCT(INT)  */
struct A68t158{
A68_INT  Svnull;
A_PAD_INT(PAD_42)
};
typedef struct A68t158  A68_158 ;    /* STRUCT(INT)  */
struct A68t159{
struct A68t152  Type;
};
typedef struct A68t159  A68_159 ;    /* STRUCT(MODE152)  */
struct A68t160{
struct A68t148 * Type;
A68_INT  Value;
A_PAD_INT(PAD_43)
};
typedef struct A68t160  A68_160 ;    /* STRUCT(REF MODE148,INT)  */
struct A68t161{
struct A68t149 * Type;
A68_CHAR  Value;
A_PAD_CHAR(PAD_44)
};
typedef struct A68t161  A68_161 ;    /* STRUCT(REF MODE149,CHAR)  */
struct A68t162{
struct A68t150 * Type;
A68_VC  Value;
};
typedef struct A68t162  A68_162 ;    /* STRUCT(REF MODE150,REF MODE26)  */
struct A68t164 { A68_INT mode; union {
struct A68t159 * mode1;
struct A68t160 * mode2;
struct A68t161 * mode3;
struct A68t162 * mode4;
struct A68t163 * mode5;
struct A68t165 * mode6;
struct A68t166 * mode7;
struct A68t157  mode8;
struct A68t158  mode9;
} data; };
typedef struct A68t164  A68_164 ;    /* UNION(REF MODE159,REF MODE160,REF MODE161,REF MODE162,REF MODE163,REF MODE165,REF MODE166,MODE157,MODE158)  */
struct A68t163{
struct A68t151 * Type;
A68_INT  Tag;
A_PAD_INT(PAD_45)
struct A68t164  Assoc;
};
typedef struct A68t163  A68_163 ;    /* STRUCT(REF MODE151,INT,MODE164)  */
struct A68t165{
struct A68t164  Head;
struct A68t165 * Tail;
};
typedef struct A68t165  A68_165 ;    /* STRUCT(MODE164,REF MODE165)  */
struct A68t166{
struct A68t164  From;
struct A68t164  To;
};
typedef struct A68t166  A68_166 ;    /* STRUCT(MODE164,MODE164)  */
struct A68t167{
A68_INT  Instoffset;
A_PAD_INT(PAD_46)
A68_INT  Offset;
A_PAD_INT(PAD_47)
A68_INT  Size;
A_PAD_INT(PAD_48)
};
typedef struct A68t167  A68_167 ;    /* STRUCT(INT,INT,INT)  */
A_VECTOR(struct A68t167 ,A68t169);
typedef struct A68t169  A68_169 ;    /* VECTOR [] MODE167 */
struct A68t168{
struct A68t152  Type;
struct A68t169  Blocks;
};
typedef struct A68t168  A68_168 ;    /* STRUCT(MODE152,REF MODE169)  */
struct A68t170{
struct A68t168  Firstcell;
A68_INT  Lwb;
A_PAD_INT(PAD_49)
A68_INT  Ramsize;
A_PAD_INT(PAD_50)
A68_INT  Step;
A_PAD_INT(PAD_51)
};
typedef struct A68t170  A68_170 ;    /* STRUCT(MODE168,INT,INT,INT)  */
struct A68t171{
A68_VC  Uname;
A68_VC  Lname;
A68_INT  Node;
A_PAD_INT(PAD_52)
};
typedef struct A68t171  A68_171 ;    /* STRUCT(REF MODE26,REF MODE26,INT)  */
A_VECTOR(struct A68t171 ,A68t173);
typedef struct A68t173  A68_173 ;    /* VECTOR [] MODE171 */
struct A68t172{
struct A68t170 * Ram;
struct A68t168  Outputs;
A68_INT  Noinputs;
A_PAD_INT(PAD_53)
struct A68t173  Body;
};
typedef struct A68t172  A68_172 ;    /* STRUCT(REF MODE170,MODE168,INT,REF MODE173)  */
struct A68t174{
A68_INT  Fn;
A_PAD_INT(PAD_54)
A68_INT  Instance;
A_PAD_INT(PAD_55)
};
typedef struct A68t174  A68_174 ;    /* STRUCT(INT,INT)  */
struct A68t175{
struct A68t168 * Wire;
A68_INT  Instance;
A_PAD_INT(PAD_56)
};
typedef struct A68t175  A68_175 ;    /* STRUCT(REF MODE168,INT)  */
struct A68t176 { A68_INT mode; union {
struct A68t174  mode1;
struct A68t175  mode2;
} data; };
typedef struct A68t176  A68_176 ;    /* UNION(MODE174,MODE175)  */
struct A68t177 { A68_INT mode; union {
struct A68t174  mode1;
struct A68t168  mode2;
} data; };
typedef struct A68t177  A68_177 ;    /* UNION(MODE174,MODE168)  */
struct A68t178{
struct A68t176  Node;
A68_INT  Circuit;
A_PAD_INT(PAD_57)
A68_INT  Base;
A_PAD_INT(PAD_58)
};
typedef struct A68t178  A68_178 ;    /* STRUCT(MODE176,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t179,(struct A68t164 ,struct A68t152 *),(struct A68t164 ,struct A68t152 *,void *));
typedef struct A68t179  A68_179 ;    /* PROC(MODE164) MODE152 */

A_PROCEDURE(A68_BOOL ,A68t180,(struct A68t152 ,struct A68t152 ),(struct A68t152 ,struct A68t152 ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(MODE152,MODE152) BOOL */

A_PROCEDURE(A68_BOOL ,A68t181,(struct A68t164 ,struct A68t164 ),(struct A68t164 ,struct A68t164 ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(MODE164,MODE164) BOOL */

A_PROCEDURE(A68_BOOL ,A68t182,(struct A68t168 ,struct A68t168 ),(struct A68t168 ,struct A68t168 ,void *));
typedef struct A68t182  A68_182 ;    /* PROC(MODE168,MODE168) BOOL */

A_PROCEDURE(A68_BOOL ,A68t183,(struct A68t174 ,struct A68t174 ),(struct A68t174 ,struct A68t174 ,void *));
typedef struct A68t183  A68_183 ;    /* PROC(MODE174,MODE174) BOOL */

A_PROCEDURE(A68_BOOL ,A68t184,(struct A68t175 ,struct A68t175 ),(struct A68t175 ,struct A68t175 ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(MODE175,MODE175) BOOL */

A_PROCEDURE(A68_BOOL ,A68t185,(struct A68t176 ,struct A68t176 ),(struct A68t176 ,struct A68t176 ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(MODE176,MODE176) BOOL */

A_PROCEDURE(A68_BOOL ,A68t186,(struct A68t178 ,struct A68t178 ),(struct A68t178 ,struct A68t178 ,void *));
typedef struct A68t186  A68_186 ;    /* PROC(MODE178,MODE178) BOOL */

A_PROCEDURE(struct A68t155 *,A68t187,(struct A68t155 *,struct A68t155 *),(struct A68t155 *,struct A68t155 *,void *));
typedef struct A68t187  A68_187 ;    /* PROC(REF MODE155,REF MODE155) REF MODE155 */

A_PROCEDURE(A68_VOID ,A68t188,(struct A68t169 ,struct A68t169 ,struct A68t169 *),(struct A68t169 ,struct A68t169 ,struct A68t169 *,void *));
typedef struct A68t188  A68_188 ;    /* PROC(REF MODE169,REF MODE169) REF MODE169 */

A_PROCEDURE(A68_INT ,A68t189,(A68_VC ),(A68_VC ,void *));
typedef struct A68t189  A68_189 ;    /* PROC(REF MODE26) INT */

A_PROCEDURE(A68_INT ,A68t190,(struct A68t152 ),(struct A68t152 ,void *));
typedef struct A68t190  A68_190 ;    /* PROC(MODE152) INT */

A_PROCEDURE(struct A68t155 *,A68t191,(struct A68t152 ),(struct A68t152 ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(MODE152) REF MODE155 */

A_PROCEDURE(struct A68t155 *,A68t192,(struct A68t152 ,A68_INT ,A68_INT ),(struct A68t152 ,A68_INT ,A68_INT ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(MODE152,INT,INT) REF MODE155 */

A_PROCEDURE(A68_VOID ,A68t193,(struct A68t168 ,A68_INT ,A68_INT ,struct A68t168 *),(struct A68t168 ,A68_INT ,A68_INT ,struct A68t168 *,void *));
typedef struct A68t193  A68_193 ;    /* PROC(MODE168,INT,INT) MODE168 */

A_PROCEDURE(A68_VOID ,A68t194,(struct A68t170 *,A68_INT ,A68_INT ,struct A68t168 *),(struct A68t170 *,A68_INT ,A68_INT ,struct A68t168 *,void *));
typedef struct A68t194  A68_194 ;    /* PROC(REF MODE170,INT,INT) MODE168 */

A_PROCEDURE(A68_VC *,A68t195,(struct A68t164 ,struct A68t152 ),(struct A68t164 ,struct A68t152 ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(MODE164,MODE152) REF REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t196,(A68_VC ,struct A68t152 ,struct A68t164 *),(A68_VC ,struct A68t152 ,struct A68t164 *,void *));
typedef struct A68t196  A68_196 ;    /* PROC(REF MODE26,MODE152) MODE164 */

A_PROCEDURE(A68_INT ,A68t197,(struct A68t152 ,struct A68t190 ),(struct A68t152 ,struct A68t190 ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(MODE152,MODE190) INT */

A_PROCEDURE(A68_VOID ,A68t198,(A68_INT ,struct A68t152 *),(A68_INT ,struct A68t152 *,void *));
typedef struct A68t198  A68_198 ;    /* PROC(INT) MODE152 */
struct A68t200 ;
struct A68t201 ;

A_PROCEDURE(A68_INT ,A68t199,(A68_VC ,A68_INT ,A68_INT ,A68_INT ,struct A68t168 ,struct A68t168 ,struct A68t170 *,struct A68t200 ,struct A68t201 ),(A68_VC ,A68_INT ,A68_INT ,A68_INT ,struct A68t168 ,struct A68t168 ,struct A68t170 *,struct A68t200 ,struct A68t201 ,void *));
typedef struct A68t199  A68_199 ;    /* PROC(REF MODE26,INT,INT,INT,MODE168,MODE168,REF MODE170,MODE200,MODE201) INT */
struct A68t200{
A68_INT  Size;
A_PAD_INT(PAD_59)
A68_INT  Offset;
A_PAD_INT(PAD_60)
A68_BITS  Sort;
A_PAD_BITS(PAD_61)
};
typedef struct A68t200  A68_200 ;    /* STRUCT(INT,INT,BITS)  */
struct A68t201{
A68_INT  Workspace;
A_PAD_INT(PAD_62)
A68_INT  History;
A_PAD_INT(PAD_63)
A68_INT  Declid;
A_PAD_INT(PAD_64)
};
typedef struct A68t201  A68_201 ;    /* STRUCT(INT,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t202,(A68_INT ,A68_VC ,A68_VC ,struct A68t177 ),(A68_INT ,A68_VC ,A68_VC ,struct A68t177 ,void *));
typedef struct A68t202  A68_202 ;    /* PROC(INT,REF MODE26,REF MODE26,MODE177) VOID */

A_PROCEDURE(A68_VOID ,A68t203,(A68_INT ,struct A68t32 ),(A68_INT ,struct A68t32 ,void *));
typedef struct A68t203  A68_203 ;    /* PROC(INT,REF MODE32) VOID */

A_PROCEDURE(A68_VOID ,A68t204,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(INT,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t205,(A68_INT ,struct A68t200 ),(A68_INT ,struct A68t200 ,void *));
typedef struct A68t205  A68_205 ;    /* PROC(INT,MODE200) VOID */

A_PROCEDURE(A68_VOID ,A68t206,(A68_INT ,struct A68t169 ,struct A68t169 ),(A68_INT ,struct A68t169 ,struct A68t169 ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(INT,REF MODE169,REF MODE169) VOID */

A_PROCEDURE(A68_VOID ,A68t207,(A68_VC ,A68_INT ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t207  A68_207 ;    /* PROC(REF MODE26,INT,INT) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t208,(A68_VC ,A68_INT ,A68_INT ),(A68_VC ,A68_INT ,A68_INT ,void *));
typedef struct A68t208  A68_208 ;    /* PROC(REF MODE26,INT,INT) INT */

A_PROCEDURE(A68_VOID ,A68t209,(A68_INT ,struct A68t172 *),(A68_INT ,struct A68t172 *,void *));
typedef struct A68t209  A68_209 ;    /* PROC(INT) MODE172 */

A_PROCEDURE(A68_VOID ,A68t210,(A68_INT ,struct A68t177 *),(A68_INT ,struct A68t177 *,void *));
typedef struct A68t210  A68_210 ;    /* PROC(INT) MODE177 */
struct A68t212 ;

A_PROCEDURE(A68_VOID ,A68t211,(A68_INT ,A68_INT ,struct A68t212 *),(A68_INT ,A68_INT ,struct A68t212 *,void *));
typedef struct A68t211  A68_211 ;    /* PROC(INT,INT) MODE212 */
struct A68t212{
A68_INT  Lwb;
A_PAD_INT(PAD_65)
A68_INT  Upb;
A_PAD_INT(PAD_66)
};
typedef struct A68t212  A68_212 ;    /* STRUCT(INT,INT)  */
struct A68t214 ;

A_PROCEDURE(A68_VOID ,A68t213,(A68_INT ,A68_INT ,struct A68t214 *),(A68_INT ,A68_INT ,struct A68t214 *,void *));
typedef struct A68t213  A68_213 ;    /* PROC(INT,INT) REF MODE214 */
A_VECTOR(struct A68t215 ,A68t214);
typedef struct A68t214  A68_214 ;    /* VECTOR [] MODE215 */
struct A68t215{
A68_INT  Instoffset;
A_PAD_INT(PAD_67)
A68_INT  Ipno;
A_PAD_INT(PAD_68)
};
typedef struct A68t215  A68_215 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t216,(A68_INT ,struct A68t168 *),(A68_INT ,struct A68t168 *,void *));
typedef struct A68t216  A68_216 ;    /* PROC(INT) MODE168 */

A_PROCEDURE(A68_VOID ,A68t217,(A68_INT ,struct A68t200 *),(A68_INT ,struct A68t200 *,void *));
typedef struct A68t217  A68_217 ;    /* PROC(INT) MODE200 */

A_PROCEDURE(A68_VOID ,A68t218,(A68_INT ,struct A68t201 *),(A68_INT ,struct A68t201 *,void *));
typedef struct A68t218  A68_218 ;    /* PROC(INT) MODE201 */

A_PROCEDURE(A68_VOID ,A68t219,(struct A68t172 ,struct A68t168 *),(struct A68t172 ,struct A68t168 *,void *));
typedef struct A68t219  A68_219 ;    /* PROC(MODE172) MODE168 */
struct A68t221 ;

A_PROCEDURE(A68_VOID ,A68t220,(struct A68t221 ),(struct A68t221 ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(MODE221) VOID */

A_PROCEDURE(A68_BOOL ,A68t221,(A68_VC ),(A68_VC ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(REF MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t222,(struct A68t142 ,struct A68t36 ),(struct A68t142 ,struct A68t36 ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(MODE142,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t223,(struct A68t121 ),(struct A68t121 ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(MODE121) VOID */

A_PROCEDURE(A68_VOID ,A68t224,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t224  A68_224 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,59,A68t225);
typedef struct A68t225  A68_225 ;    /* STRUCT 59 CHAR */
A_ISTRUCT(A68_CHAR ,4,A68t226);
typedef struct A68t226  A68_226 ;    /* STRUCT 4 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t227);
typedef struct A68t227  A68_227 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t228);
typedef struct A68t228  A68_228 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t229);
typedef struct A68t229  A68_229 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t230);
typedef struct A68t230  A68_230 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t231);
typedef struct A68t231  A68_231 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t232);
typedef struct A68t232  A68_232 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t233);
typedef struct A68t233  A68_233 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t234);
typedef struct A68t234  A68_234 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t235);
typedef struct A68t235  A68_235 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t236);
typedef struct A68t236  A68_236 ;    /* STRUCT 13 CHAR */

A_PROCEDURE(A68_VOID ,A68t237,(A68_INT ,A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t237  A68_237 ;    /* PROC(INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t238,(struct A68t32 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t32 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t238  A68_238 ;    /* PROC(MODE32,INT,INT,INT,INT) VOID */
struct A68t239{
A68_INT  Inputs;
A_PAD_INT(PAD_69)
A68_INT  Data;
A_PAD_INT(PAD_70)
};
typedef struct A68t239  A68_239 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t240,(struct A68t32 ,struct A68t239 *),(struct A68t32 ,struct A68t239 *,void *));
typedef struct A68t240  A68_240 ;    /* PROC(MODE32) MODE239 */

A_PROCEDURE(A68_VOID ,A68t241,(struct A68t32 ,struct A68t152 ),(struct A68t32 ,struct A68t152 ,void *));
typedef struct A68t241  A68_241 ;    /* PROC(REF MODE32,MODE152) VOID */

A_PROCEDURE(A68_VOID ,A68t242,(struct A68t32 ,A68_INT ,struct A68t152 ,A68_INT ,A68_INT ,A68_INT ),(struct A68t32 ,A68_INT ,struct A68t152 ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t242  A68_242 ;    /* PROC(MODE32,INT,MODE152,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t243,(struct A68t32 ,struct A68t32 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t32 ,struct A68t32 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t243  A68_243 ;    /* PROC(MODE32,MODE32,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t244,(struct A68t164 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t164 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t244  A68_244 ;    /* PROC(MODE164,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t245,(struct A68t164 ,struct A68t152 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t164 ,struct A68t152 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t245  A68_245 ;    /* PROC(MODE164,MODE152,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t246,(A68_INT ,A68_VC ,struct A68t200 *),(A68_INT ,A68_VC ,struct A68t200 *,void *));
typedef struct A68t246  A68_246 ;    /* PROC(INT,REF MODE26) MODE200 */

A_PROCEDURE(A68_VOID ,A68t247,(struct A68t32 ,A68_VC ,struct A68t200 *),(struct A68t32 ,A68_VC ,struct A68t200 *,void *));
typedef struct A68t247  A68_247 ;    /* PROC(MODE32,MODE26) MODE200 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from kesymbols --- */
extern A68_VOID  VGCASIM_lookuptype(A68_INT ,A68_152 *);
extern A68_INT  YGCASIM_lookuptypesize(A68_INT );
#define IHCASIM_combinatorial 0X1U
extern A68_INT  ZHCASIM_lastsymbol;
extern A68_INT  NRCASIM_lookupname(A68_VC ,A68_INT ,A68_INT );
/* --- End of imports from kesymbols --- */


/* --- Imports from kesignals --- */
extern A68_INT  DCOASIM_rawsignalwidth(struct A68t152 );
extern A68_VC * CLOASIM_machine(struct A68t164 ,struct A68t152 );
/* --- End of imports from kesignals --- */


/* --- Imports from kebasics --- */
extern A68_155 * WSAASIM_nilsst;
/* --- End of imports from kebasics --- */


/* --- Imports from keambasics --- */
#define GXFASIM_instanceptr 2
#define IXFASIM_integer 4
extern A68_114 * GYFASIM_nilparams;
#define DFMASIM_evaluateaction 3
#define EFMASIM_saveaction 4
#define FFMASIM_restoreaction 5
#define GFMASIM_terminateaction 6
extern A68_118  ONFASIM_indirect;
extern A68_VOID  YLFASIM_label(A68_VC ,A68_116 *);
extern A68_VOID  YFNASIM_newlabel(A68_116 *);
#define CENASIM_bitsperbyte 8
extern A68_INT  DENASIM_ws;
extern A68_INT  GENASIM_sizeunit;
extern A68_125  FENASIM_up;
extern A68_VOID  QSNASIM_amhalt(void);
extern A68_VOID  SSNASIM_amadd(void);
extern A68_VOID  USNASIM_amsub(void);
extern A68_VOID  WSNASIM_ammul(void);
extern A68_VOID  GTNASIM_amiand(void);
extern A68_VOID  QTNASIM_amtest(void);
extern A68_VOID  STNASIM_ameq(void);
extern A68_VOID  UTNASIM_amneq(void);
extern A68_VOID  WTNASIM_amgt(void);
extern A68_VOID  YTNASIM_amge(void);
extern A68_VOID  AUNASIM_amlt(void);
extern A68_VOID  CUNASIM_amle(void);
extern A68_VOID  EUNASIM_amand(void);
extern A68_VOID  IUNASIM_amnot(void);
extern A68_VOID  MUNASIM_ampushstring(A68_INT ,A68_VC );
extern A68_VOID  QUNASIM_ampushint(A68_INT );
extern A68_VOID  TUNASIM_amdrop(A68_INT );
extern A68_VOID  WUNASIM_amlocal(A68_INT );
extern A68_VOID  AVNASIM_amglobal(A68_INT ,struct A68t118 );
extern A68_VOID  FVNASIM_amstore(A68_INT ,struct A68t118 );
extern A68_VOID  LVNASIM_ambstring(A68_INT ,A68_INT ,struct A68t118 );
extern A68_VOID  QVNASIM_ambstore(A68_INT ,struct A68t118 );
extern A68_VOID  ZVNASIM_amstoi(void);
extern A68_VOID  EWNASIM_amjump(struct A68t116 );
extern A68_VOID  IWNASIM_amjumpno(A68_INT ,struct A68t116 );
extern A68_VOID  NWNASIM_amlabel(A68_INT ,struct A68t116 );
extern A68_VOID  QWNASIM_amrepeat(void);
extern A68_VOID  SWNASIM_amloop(void);
extern A68_VOID  BXNASIM_amcall(A68_INT ,struct A68t116 );
extern A68_VOID  EXNASIM_amenter(void);
extern A68_VOID  HXNASIM_amfanout(A68_INT );
extern A68_VOID  KXNASIM_amret(A68_INT );
extern A68_VOID  PXNASIM_amgeneratenamedcode(struct A68t116 ,struct A68t114 *,struct A68t114 *);
extern A68_VOID  JYNASIM_amgenerateca(struct A68t36 );
extern A68_VOID  LYNASIM_amgenerateendca(void);
/* --- End of imports from keambasics --- */


/* --- Imports from basics --- */
extern A68_VOID  RSCAOST_makeid(A68_VC ,A68_VC *);
extern A68_INT  AJDAOST_maxint;
/* --- End of imports from basics --- */


/* --- Imports from putstrings --- */
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void TCCASIM(void);   /* kesymbols */
extern void NYNASIM(void);   /* kesignals */
extern void JSAASIM(void);   /* kebasics */
extern void XDNASIM(void);   /* keambasics */
extern void JSCAOST(void);   /* basics */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_225   KYOASIM = {"$Id: keamstandard.a68,v 34.2 1995/03/29 13:04:39 ella Exp $"}; 
A_GISVEC(A68_VC ,LYOASIM,KYOASIM,59)
A68_INT  MYOASIM_globaltime;
A68_INT  NYOASIM_globalmaxtime;
A68_INT  OYOASIM_globalinterrupted;
A68_INT  PYOASIM_globalinitialised;
A68_INT  QYOASIM_globalaction;
A68_INT  RYOASIM_globaliterations;
A68_INT  SYOASIM_globaltemp1;
A68_INT  TYOASIM_globalend;
A68_INT  UYOASIM_globalcomboutputsstable;
A68_INT  VYOASIM_globalmonitorchanged;
A68_INT  WYOASIM_globalnextevent;
A68_INT  XYOASIM_globalunitdelevent;
A68_INT  YYOASIM_globalstartinitlist;
A68_INT  ZYOASIM_globalendinitlist;
A68_INT  AZOASIM_globalstartinstlist;
A68_INT  BZOASIM_globalendinstlist;
A68_INT  CZOASIM_globalinstancelist;
static A68_226   IZOASIM = {"Time"}; 
A_GISVEC(A68_VC ,KZOASIM,IZOASIM,4)
A68_116  MZOASIM_globaltimelabel;
static A68_227   SZOASIM = {"Maxtime"}; 
A_GISVEC(A68_VC ,UZOASIM,SZOASIM,7)
A68_116  WZOASIM_globalmaxtimelabel;
static A68_228   CAPASIM = {"Interrupted"}; 
A_GISVEC(A68_VC ,EAPASIM,CAPASIM,11)
A68_116  GAPASIM_globalinterruptedlabel;
static A68_228   MAPASIM = {"Initialised"}; 
A_GISVEC(A68_VC ,OAPASIM,MAPASIM,11)
A68_116  QAPASIM_globalinitialisedlabel;
static A68_229   WAPASIM = {"Action"}; 
A_GISVEC(A68_VC ,YAPASIM,WAPASIM,6)
A68_116  ABPASIM_globalactionlabel;
static A68_230   GBPASIM = {"Iterations"}; 
A_GISVEC(A68_VC ,IBPASIM,GBPASIM,10)
A68_116  KBPASIM_globaliterationslabel;
static A68_228   QBPASIM = {"Calls_array"}; 
A_GISVEC(A68_VC ,SBPASIM,QBPASIM,11)
A68_116  UBPASIM_callsarraycodelabel;
static A68_231   ACPASIM = {"Idsupport"}; 
A_GISVEC(A68_VC ,CCPASIM,ACPASIM,9)
A68_116  ECPASIM_idsupportcodelabel;
static A68_228   KCPASIM = {"_$Genericid"}; 
A_GISVEC(A68_VC ,MCPASIM,KCPASIM,11)
A68_116  OCPASIM_genericidcodelabel;
static A68_232   UCPASIM = {"_$Datasource"}; 
A_GISVEC(A68_VC ,WCPASIM,UCPASIM,12)
static A68_116  YCPASIM_datasourcecodelabel;
static A68_233   EDPASIM = {"Monitor_changed"}; 
A_GISVEC(A68_VC ,GDPASIM,EDPASIM,15)
A68_116  IDPASIM_globalmonitorchangedlabel;
static A68_234   ODPASIM = {"Unit_del_event"}; 
A_GISVEC(A68_VC ,QDPASIM,ODPASIM,14)
A68_116  SDPASIM_globalunitdeleventlabel;
static A68_235   YDPASIM = {"Comb_Outputs_Stable"}; 
A_GISVEC(A68_VC ,AEPASIM,YDPASIM,19)
A68_116  CEPASIM_globalcomboutputsstablelabel;
static A68_230   IEPASIM = {"Next_event"}; 
A_GISVEC(A68_VC ,KEPASIM,IEPASIM,10)
A68_116  MEPASIM_globalnexteventlabel;
static A68_233   SEPASIM = {"Start_Init_List"}; 
A_GISVEC(A68_VC ,UEPASIM,SEPASIM,15)
A68_116  WEPASIM_globalstartinitlabel;
static A68_236   CFPASIM = {"End_Init_List"}; 
A_GISVEC(A68_VC ,EFPASIM,CFPASIM,13)
A68_116  GFPASIM_globalendinitlabel;
static A68_233   MFPASIM = {"Start_Inst_List"}; 
A_GISVEC(A68_VC ,OFPASIM,MFPASIM,15)
A68_116  QFPASIM_globalstartinstlabel;
static A68_236   WFPASIM = {"End_Inst_List"}; 
A_GISVEC(A68_VC ,YFPASIM,WFPASIM,13)
A68_116  AGPASIM_globalendinstlabel;
static A68_116  HGPASIM_combinatoriallogiclabel;
static A68_116  OGPASIM_callslooplabel;
static A68_116  VGPASIM_endcallslooplabel;
A68_116  CHPASIM_unchangedoutputlabel;
A68_116  JHPASIM_setqueryoutputlabel;
A68_116  QHPASIM_newresultlabel;
A68_116  XHPASIM_oldresultlabel;
A68_116  EIPASIM_unchangedquerylabel;
A68_116  LIPASIM_querylabel;
A68_116  SIPASIM_arithexceptionlabel;
static A68_116  ZIPASIM_timetestlabel;
A68_116  GJPASIM_endcallsarraylabel;
static A68_116  NJPASIM_startsaverslabel;
static A68_116  UJPASIM_startrestorerslabel;
static A68_116  BKPASIM_startinitialisationlabel;
static A68_116  BMPASIM_endlooplabel;
static A68_116  CMPASIM_endcase;
static A68_116  JMPASIM_endcasearm;
static A68_114  INPASIM_instptr;
static A68_114  JNPASIM_intinstptr;
static A68_236   PNPASIM = {"Numeric Label"}; 
A_GISVEC(A68_VC ,RNPASIM,PNPASIM,13)
static A68_116  TNPASIM_instlab;
#define UNPASIM_combphase 0
static A68_INT  VNPASIM_settingphase;
static A68_INT  WNPASIM_handlingphase;
static A68_INT  XNPASIM_initialiserphase;
static A68_INT  YNPASIM_terminatorphase;
static A68_INT  ZNPASIM_saverphase;
static A68_INT  AOPASIM_restorerphase;
static A68_INT  BOPASIM_noofphases;
#define GPPASIM_leaveflag 0
#define HPPASIM_setflag 1
#define IPPASIM_resetflag 2
static A68_231   FVPASIM = {"Idsupport"}; 
A_GISVEC(A68_VC ,GVPASIM,FVPASIM,9)
static A68_230   PVPASIM = {"$Genericid"}; 
A_GISVEC(A68_VC ,QVPASIM,PVPASIM,10)
static A68_228   XVPASIM = {"^$Genericid"}; 
A_GISVEC(A68_VC ,YVPASIM,XVPASIM,11)
static A68_230   OWPASIM = {"$Genericid"}; 
A_GISVEC(A68_VC ,PWPASIM,OWPASIM,10)
static A68_232   DXPASIM = {"Genericquery"}; 
A_GISVEC(A68_VC ,EXPASIM,DXPASIM,12)
typedef struct   /* env of non-global proc */
{
A68_240  YPPASIM_totalsizes;
} AQPASIM_totalsizes;
typedef struct   /* env of non-global proc */
{
A68_32  Inputtypes;
} TSPASIM_generator;

A_STATIC A68_VOID  FZOASIM_generator(A68_BOOL  EZOASIM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  PZOASIM_generator(A68_BOOL  OZOASIM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  ZZOASIM_generator(A68_BOOL  YZOASIM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  JAPASIM_generator(A68_BOOL  IAPASIM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  TAPASIM_generator(A68_BOOL  SAPASIM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  DBPASIM_generator(A68_BOOL  CBPASIM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  NBPASIM_generator(A68_BOOL  MBPASIM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  XBPASIM_generator(A68_BOOL  WBPASIM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  HCPASIM_generator(A68_BOOL  GCPASIM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  RCPASIM_generator(A68_BOOL  QCPASIM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  BDPASIM_generator(A68_BOOL  ADPASIM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  LDPASIM_generator(A68_BOOL  KDPASIM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  VDPASIM_generator(A68_BOOL  UDPASIM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  FEPASIM_generator(A68_BOOL  EEPASIM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  PEPASIM_generator(A68_BOOL  OEPASIM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  ZEPASIM_generator(A68_BOOL  YEPASIM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  JFPASIM_generator(A68_BOOL  IFPASIM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  TFPASIM_generator(A68_BOOL  SFPASIM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  DGPASIM_generator(A68_BOOL  CGPASIM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  KGPASIM_generator(A68_BOOL  JGPASIM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  RGPASIM_generator(A68_BOOL  QGPASIM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  YGPASIM_generator(A68_BOOL  XGPASIM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  FHPASIM_generator(A68_BOOL  EHPASIM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  MHPASIM_generator(A68_BOOL  LHPASIM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  THPASIM_generator(A68_BOOL  SHPASIM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  AIPASIM_generator(A68_BOOL  ZHPASIM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  HIPASIM_generator(A68_BOOL  GIPASIM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  OIPASIM_generator(A68_BOOL  NIPASIM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  VIPASIM_generator(A68_BOOL  UIPASIM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  CJPASIM_generator(A68_BOOL  BJPASIM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  JJPASIM_generator(A68_BOOL  IJPASIM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  QJPASIM_generator(A68_BOOL  PJPASIM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  XJPASIM_generator(A68_BOOL  WJPASIM_anonymous, A68_VC  *ReturnedValue);

A68_VOID  DKPASIM_translatestartcallsarray(A68_36  Flt);

A68_VOID  EKPASIM_translatestartterminators(void);

A68_VOID  HKPASIM_translatestartsavers(void);

A68_VOID  JKPASIM_translatestartrestorers(void);

A68_VOID  LKPASIM_translatestartinitialisers(void);

A68_VOID  QKPASIM_translatestartcallsloop(void);

A68_VOID  TKPASIM_translatestartcombinatorialloop(void);

A68_VOID  VKPASIM_translateendcombinatorialloop(void);

A68_VOID  YKPASIM_translatetimetest(void);

A68_VOID  FLPASIM_translatetimeadvance(void);

A68_VOID  AMPASIM_translateendcallsarray(void);

A68_VOID  DMPASIM_translatestartprobeloopup(void);

A68_VOID  LMPASIM_translatestartcasearm(A68_INT  Fnno);

A68_VOID  NMPASIM_translateendcasearm(void);

A68_VOID  OMPASIM_translateendprobeloopup(void);

A68_VOID  QMPASIM_translatestartprobeloopdown(void);

A68_VOID  WMPASIM_translateendprobeloopdown(void);

A68_VOID  YMPASIM_translatestartinitloopup(void);

A68_VOID  ENPASIM_translateendinitloopup(void);

A_STATIC A68_VOID  MNPASIM_generator(A68_BOOL  LNPASIM_anonymous, A68_VC  *ReturnedValue);

A68_VOID  DOPASIM_translatestartfunction(A68_VC  Name);

A68_VOID  GOPASIM_translatestarteventsetter(A68_VC  Name);

A68_VOID  JOPASIM_translatestarteventhandler(A68_VC  Name);

A68_VOID  MOPASIM_translatestartinitialiser(A68_VC  Name);

A68_VOID  POPASIM_translatestartsaver(A68_VC  Name);

A68_VOID  SOPASIM_translatestartrestorer(A68_VC  Name);

A68_VOID  VOPASIM_translatestartterminator(A68_VC  Name);

A68_VOID  ZOPASIM_translateendfunction(A68_INT  Instsize, A68_INT  D);

A68_VOID  CPPASIM_translateendfunctionsettingflag(A68_INT  Instsize, A68_INT  D);

A68_VOID  FPPASIM_translatesimpleendfunction(A68_INT  Instsize, A68_INT  D);

A68_VOID  NPPASIM_translatecompareandsetflag(A68_INT  Size, A68_INT  Outaddr, A68_INT  Flagadjust, A68_INT  D);

A68_VOID  VPPASIM_translatesomeinputs(A68_32  Inputsizes, A68_INT  Inoffset, A68_INT  Outoffset, A68_INT  Flagadjust, A68_INT  D);

A_STATIC A68_VOID  ZPPASIM_totalsizes(A68_32  Sizes, A68_239  *ReturnedValue, void *NonLocals);

A68_VOID  FRPASIM_compresssizes(A68_32  Sizes, A68_152  Hint);

A68_VOID  PSPASIM_translatecopyinputs(A68_32  Inputtypes, A68_INT  Inoffset, A68_152  Outtype, A68_INT  Outoffset, A68_INT  Flagadjust, A68_INT  D);

A_STATIC A68_VOID  SSPASIM_generator(A68_BOOL  QSPASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A68_VOID  ITPASIM_translatecopytrimmedinputs(A68_32  Inputsizes, A68_32  Inputpostoffsets, A68_INT  Inoffset, A68_INT  Outoffset, A68_INT  Flagadjust, A68_INT  D);

A68_VOID  VTPASIM_translatecopyvalue(A68_INT  Type, A68_INT  Inoffset, A68_INT  Outoffset, A68_INT  Flagadjust, A68_INT  D);

A68_VOID  CUPASIM_translateoutputconstant(A68_164  Value, A68_INT  Type, A68_INT  Outputoffset, A68_INT  Flagadjust, A68_INT  D);

A68_VOID  PUPASIM_translatesetreplicatedconstant(A68_164  Value, A68_152  Type, A68_INT  Flagadjust, A68_INT  Outputoffset, A68_INT  Count, A68_INT  D);

A_STATIC A68_VOID  TUPASIM_translateidsupport(void);

A_STATIC A68_VOID  KVPASIM_translategenericendfunction(A68_INT  D, A68_INT  Finalflag);

A68_VOID  MVPASIM_translategenericidentity(void);

A68_VOID  UVPASIM_translatecleargenericid(void);

A68_VOID  CWPASIM_translatedatasource(A68_INT  Width, A68_VC  Name, A68_200  *ReturnedValue);

A68_VOID  JWPASIM_translateprobeid(A68_32  Inputsizes, A68_VC  Name, A68_200  *ReturnedValue);

A68_VOID  VWPASIM_translategenericquery(void);

A68_VOID  IXPASIM_translatesetnextevent(A68_INT  Thiseventoffset, A68_INT  D);

A_STATIC A68_VOID  ZPPASIM_totalsizes(A68_32  Sizes, A68_239  *ReturnedValue, void *NonLocals)
#define NL(x) (((AQPASIM_totalsizes *)NonLocals)->x)
{ 
A68_INT  BQPASIM_i;
A68_INT  CQPASIM_n;
A68_INT  DQPASIM_s;
A68_INT  EQPASIM_r;
A68_INT  FQPASIM;  /* YIELD */
A68_INT  GQPASIM;  /* clause result */
A68_INT  HQPASIM;  /* YIELD */
A68_INT  IQPASIM_l;
A68_32  JQPASIM;  /* OPERATORS - trim index */
A68_32  KQPASIM_p;
A68_239  LQPASIM;  /* avoid structure result */
A68_239  MQPASIM_ps;
A68_239  NQPASIM;  /* collateral clause result */
A68_239  OQPASIM;  /* clause result */
A_PROC_ENTRY(totalsizes);
 /* line 831: */
 /* line 832: */
{ 
BQPASIM_i = 1;
 /* line 833: */
CQPASIM_n = 0;
 /* line 834: */
DQPASIM_s = 0;
 /* line 835: */
for ( ;; )
{ 
 /* line 836: */
if ( !((BQPASIM_i<=Sizes.upb)) ) break;
 /* line 837: */
if ( (A_VINDEX(Sizes,BQPASIM_i)>0) )
{ 
CQPASIM_n+=1;
 /* line 838: */
DQPASIM_s+=A_VINDEX(Sizes,BQPASIM_i);
 /* line 839: */
 /* line 840: */
BQPASIM_i+=1;
} 
else
{ 
 /* line 841: */
if ( (A_VINDEX(Sizes,BQPASIM_i)<0) )
{ 
EQPASIM_r = (-A_VINDEX(Sizes,BQPASIM_i));
 /* line 842: */
 /* line 843: */
FQPASIM = BQPASIM_i+=1 ;
if ( (A_VINDEX(Sizes,FQPASIM)>=0) )
{ 
GQPASIM = 1;
} 
else
{ 
 /* line 844: */
HQPASIM = ((BQPASIM_i+=1)-1) ;
GQPASIM = (-A_VINDEX(Sizes,HQPASIM));
} 
IQPASIM_l = GQPASIM;
 /* line 845: */
KQPASIM_p = A_VTRIM(JQPASIM,(Sizes),A_VTSCRIPT(&(JQPASIM.upb),(Sizes).upb,BQPASIM_i,((BQPASIM_i+IQPASIM_l)-1)));
 /* line 846: */
A_CALLPROC(NL(YPPASIM_totalsizes),(KQPASIM_p, &LQPASIM),(KQPASIM_p, &LQPASIM,(NL(YPPASIM_totalsizes)).nonlocals));
MQPASIM_ps = LQPASIM;
 /* line 847: */
CQPASIM_n+=(EQPASIM_r*MQPASIM_ps.Inputs);
 /* line 848: */
DQPASIM_s+=(EQPASIM_r*MQPASIM_ps.Data);
 /* line 849: */
 /* line 850: */
 /* line 851: */
BQPASIM_i+=IQPASIM_l;
} 
else
{ 
 /* line 852: */
 /* line 853: */
BQPASIM_i+=1;
} 
} 
}
 /* line 854: */
NQPASIM.Inputs = CQPASIM_n;
 /* line 855: */
NQPASIM.Data = DQPASIM_s;
OQPASIM = NQPASIM;
} 
A_PROC_EXIT(totalsizes);
*ReturnedValue = (OQPASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  SSPASIM_generator(A68_BOOL  QSPASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((TSPASIM_generator *)NonLocals)->x)
{ 
A68_32  USPASIM;  /* clause result */
A68_32  VSPASIM;  /* OPERATORS - dynamic generator */
{ 
VSPASIM.upb = NL(Inputtypes).upb ;
( QSPASIM_anonymous? A_VLOC(A68_INT ,VSPASIM): A_VHEAP(A68_INT ,VSPASIM) );
USPASIM = VSPASIM;
} 
*ReturnedValue = (USPASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  FZOASIM_generator(A68_BOOL  EZOASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  GZOASIM;  /* clause result */
A68_VC  HZOASIM;  /* OPERATORS - dynamic generator */
{ 
HZOASIM.upb = 4 ;
( EZOASIM_anonymous? A_VLOC(A68_CHAR ,HZOASIM): A_VHEAP(A68_CHAR ,HZOASIM) );
GZOASIM = HZOASIM;
} 
*ReturnedValue = (GZOASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  PZOASIM_generator(A68_BOOL  OZOASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  QZOASIM;  /* clause result */
A68_VC  RZOASIM;  /* OPERATORS - dynamic generator */
{ 
RZOASIM.upb = 7 ;
( OZOASIM_anonymous? A_VLOC(A68_CHAR ,RZOASIM): A_VHEAP(A68_CHAR ,RZOASIM) );
QZOASIM = RZOASIM;
} 
*ReturnedValue = (QZOASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  ZZOASIM_generator(A68_BOOL  YZOASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  AAPASIM;  /* clause result */
A68_VC  BAPASIM;  /* OPERATORS - dynamic generator */
{ 
BAPASIM.upb = 11 ;
( YZOASIM_anonymous? A_VLOC(A68_CHAR ,BAPASIM): A_VHEAP(A68_CHAR ,BAPASIM) );
AAPASIM = BAPASIM;
} 
*ReturnedValue = (AAPASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  JAPASIM_generator(A68_BOOL  IAPASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  KAPASIM;  /* clause result */
A68_VC  LAPASIM;  /* OPERATORS - dynamic generator */
{ 
LAPASIM.upb = 11 ;
( IAPASIM_anonymous? A_VLOC(A68_CHAR ,LAPASIM): A_VHEAP(A68_CHAR ,LAPASIM) );
KAPASIM = LAPASIM;
} 
*ReturnedValue = (KAPASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  TAPASIM_generator(A68_BOOL  SAPASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  UAPASIM;  /* clause result */
A68_VC  VAPASIM;  /* OPERATORS - dynamic generator */
{ 
VAPASIM.upb = 6 ;
( SAPASIM_anonymous? A_VLOC(A68_CHAR ,VAPASIM): A_VHEAP(A68_CHAR ,VAPASIM) );
UAPASIM = VAPASIM;
} 
*ReturnedValue = (UAPASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  DBPASIM_generator(A68_BOOL  CBPASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  EBPASIM;  /* clause result */
A68_VC  FBPASIM;  /* OPERATORS - dynamic generator */
{ 
FBPASIM.upb = 10 ;
( CBPASIM_anonymous? A_VLOC(A68_CHAR ,FBPASIM): A_VHEAP(A68_CHAR ,FBPASIM) );
EBPASIM = FBPASIM;
} 
*ReturnedValue = (EBPASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  NBPASIM_generator(A68_BOOL  MBPASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  OBPASIM;  /* clause result */
A68_VC  PBPASIM;  /* OPERATORS - dynamic generator */
{ 
PBPASIM.upb = 11 ;
( MBPASIM_anonymous? A_VLOC(A68_CHAR ,PBPASIM): A_VHEAP(A68_CHAR ,PBPASIM) );
OBPASIM = PBPASIM;
} 
*ReturnedValue = (OBPASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  XBPASIM_generator(A68_BOOL  WBPASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  YBPASIM;  /* clause result */
A68_VC  ZBPASIM;  /* OPERATORS - dynamic generator */
{ 
ZBPASIM.upb = 9 ;
( WBPASIM_anonymous? A_VLOC(A68_CHAR ,ZBPASIM): A_VHEAP(A68_CHAR ,ZBPASIM) );
YBPASIM = ZBPASIM;
} 
*ReturnedValue = (YBPASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  HCPASIM_generator(A68_BOOL  GCPASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  ICPASIM;  /* clause result */
A68_VC  JCPASIM;  /* OPERATORS - dynamic generator */
{ 
JCPASIM.upb = 11 ;
( GCPASIM_anonymous? A_VLOC(A68_CHAR ,JCPASIM): A_VHEAP(A68_CHAR ,JCPASIM) );
ICPASIM = JCPASIM;
} 
*ReturnedValue = (ICPASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  RCPASIM_generator(A68_BOOL  QCPASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  SCPASIM;  /* clause result */
A68_VC  TCPASIM;  /* OPERATORS - dynamic generator */
{ 
TCPASIM.upb = 12 ;
( QCPASIM_anonymous? A_VLOC(A68_CHAR ,TCPASIM): A_VHEAP(A68_CHAR ,TCPASIM) );
SCPASIM = TCPASIM;
} 
*ReturnedValue = (SCPASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  BDPASIM_generator(A68_BOOL  ADPASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  CDPASIM;  /* clause result */
A68_VC  DDPASIM;  /* OPERATORS - dynamic generator */
{ 
DDPASIM.upb = 15 ;
( ADPASIM_anonymous? A_VLOC(A68_CHAR ,DDPASIM): A_VHEAP(A68_CHAR ,DDPASIM) );
CDPASIM = DDPASIM;
} 
*ReturnedValue = (CDPASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  LDPASIM_generator(A68_BOOL  KDPASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  MDPASIM;  /* clause result */
A68_VC  NDPASIM;  /* OPERATORS - dynamic generator */
{ 
NDPASIM.upb = 14 ;
( KDPASIM_anonymous? A_VLOC(A68_CHAR ,NDPASIM): A_VHEAP(A68_CHAR ,NDPASIM) );
MDPASIM = NDPASIM;
} 
*ReturnedValue = (MDPASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  VDPASIM_generator(A68_BOOL  UDPASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  WDPASIM;  /* clause result */
A68_VC  XDPASIM;  /* OPERATORS - dynamic generator */
{ 
XDPASIM.upb = 19 ;
( UDPASIM_anonymous? A_VLOC(A68_CHAR ,XDPASIM): A_VHEAP(A68_CHAR ,XDPASIM) );
WDPASIM = XDPASIM;
} 
*ReturnedValue = (WDPASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  FEPASIM_generator(A68_BOOL  EEPASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  GEPASIM;  /* clause result */
A68_VC  HEPASIM;  /* OPERATORS - dynamic generator */
{ 
HEPASIM.upb = 10 ;
( EEPASIM_anonymous? A_VLOC(A68_CHAR ,HEPASIM): A_VHEAP(A68_CHAR ,HEPASIM) );
GEPASIM = HEPASIM;
} 
*ReturnedValue = (GEPASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  PEPASIM_generator(A68_BOOL  OEPASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  QEPASIM;  /* clause result */
A68_VC  REPASIM;  /* OPERATORS - dynamic generator */
{ 
REPASIM.upb = 15 ;
( OEPASIM_anonymous? A_VLOC(A68_CHAR ,REPASIM): A_VHEAP(A68_CHAR ,REPASIM) );
QEPASIM = REPASIM;
} 
*ReturnedValue = (QEPASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  ZEPASIM_generator(A68_BOOL  YEPASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  AFPASIM;  /* clause result */
A68_VC  BFPASIM;  /* OPERATORS - dynamic generator */
{ 
BFPASIM.upb = 13 ;
( YEPASIM_anonymous? A_VLOC(A68_CHAR ,BFPASIM): A_VHEAP(A68_CHAR ,BFPASIM) );
AFPASIM = BFPASIM;
} 
*ReturnedValue = (AFPASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  JFPASIM_generator(A68_BOOL  IFPASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  KFPASIM;  /* clause result */
A68_VC  LFPASIM;  /* OPERATORS - dynamic generator */
{ 
LFPASIM.upb = 15 ;
( IFPASIM_anonymous? A_VLOC(A68_CHAR ,LFPASIM): A_VHEAP(A68_CHAR ,LFPASIM) );
KFPASIM = LFPASIM;
} 
*ReturnedValue = (KFPASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  TFPASIM_generator(A68_BOOL  SFPASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  UFPASIM;  /* clause result */
A68_VC  VFPASIM;  /* OPERATORS - dynamic generator */
{ 
VFPASIM.upb = 13 ;
( SFPASIM_anonymous? A_VLOC(A68_CHAR ,VFPASIM): A_VHEAP(A68_CHAR ,VFPASIM) );
UFPASIM = VFPASIM;
} 
*ReturnedValue = (UFPASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  DGPASIM_generator(A68_BOOL  CGPASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  EGPASIM;  /* clause result */
A68_VC  FGPASIM;  /* OPERATORS - dynamic generator */
{ 
FGPASIM.upb = 0 ;
( CGPASIM_anonymous? A_VLOC(A68_CHAR ,FGPASIM): A_VHEAP(A68_CHAR ,FGPASIM) );
EGPASIM = FGPASIM;
} 
*ReturnedValue = (EGPASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  KGPASIM_generator(A68_BOOL  JGPASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  LGPASIM;  /* clause result */
A68_VC  MGPASIM;  /* OPERATORS - dynamic generator */
{ 
MGPASIM.upb = 0 ;
( JGPASIM_anonymous? A_VLOC(A68_CHAR ,MGPASIM): A_VHEAP(A68_CHAR ,MGPASIM) );
LGPASIM = MGPASIM;
} 
*ReturnedValue = (LGPASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  RGPASIM_generator(A68_BOOL  QGPASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  SGPASIM;  /* clause result */
A68_VC  TGPASIM;  /* OPERATORS - dynamic generator */
{ 
TGPASIM.upb = 0 ;
( QGPASIM_anonymous? A_VLOC(A68_CHAR ,TGPASIM): A_VHEAP(A68_CHAR ,TGPASIM) );
SGPASIM = TGPASIM;
} 
*ReturnedValue = (SGPASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  YGPASIM_generator(A68_BOOL  XGPASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  ZGPASIM;  /* clause result */
A68_VC  AHPASIM;  /* OPERATORS - dynamic generator */
{ 
AHPASIM.upb = 0 ;
( XGPASIM_anonymous? A_VLOC(A68_CHAR ,AHPASIM): A_VHEAP(A68_CHAR ,AHPASIM) );
ZGPASIM = AHPASIM;
} 
*ReturnedValue = (ZGPASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  FHPASIM_generator(A68_BOOL  EHPASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  GHPASIM;  /* clause result */
A68_VC  HHPASIM;  /* OPERATORS - dynamic generator */
{ 
HHPASIM.upb = 0 ;
( EHPASIM_anonymous? A_VLOC(A68_CHAR ,HHPASIM): A_VHEAP(A68_CHAR ,HHPASIM) );
GHPASIM = HHPASIM;
} 
*ReturnedValue = (GHPASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  MHPASIM_generator(A68_BOOL  LHPASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  NHPASIM;  /* clause result */
A68_VC  OHPASIM;  /* OPERATORS - dynamic generator */
{ 
OHPASIM.upb = 0 ;
( LHPASIM_anonymous? A_VLOC(A68_CHAR ,OHPASIM): A_VHEAP(A68_CHAR ,OHPASIM) );
NHPASIM = OHPASIM;
} 
*ReturnedValue = (NHPASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  THPASIM_generator(A68_BOOL  SHPASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  UHPASIM;  /* clause result */
A68_VC  VHPASIM;  /* OPERATORS - dynamic generator */
{ 
VHPASIM.upb = 0 ;
( SHPASIM_anonymous? A_VLOC(A68_CHAR ,VHPASIM): A_VHEAP(A68_CHAR ,VHPASIM) );
UHPASIM = VHPASIM;
} 
*ReturnedValue = (UHPASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  AIPASIM_generator(A68_BOOL  ZHPASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  BIPASIM;  /* clause result */
A68_VC  CIPASIM;  /* OPERATORS - dynamic generator */
{ 
CIPASIM.upb = 0 ;
( ZHPASIM_anonymous? A_VLOC(A68_CHAR ,CIPASIM): A_VHEAP(A68_CHAR ,CIPASIM) );
BIPASIM = CIPASIM;
} 
*ReturnedValue = (BIPASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  HIPASIM_generator(A68_BOOL  GIPASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  IIPASIM;  /* clause result */
A68_VC  JIPASIM;  /* OPERATORS - dynamic generator */
{ 
JIPASIM.upb = 0 ;
( GIPASIM_anonymous? A_VLOC(A68_CHAR ,JIPASIM): A_VHEAP(A68_CHAR ,JIPASIM) );
IIPASIM = JIPASIM;
} 
*ReturnedValue = (IIPASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  OIPASIM_generator(A68_BOOL  NIPASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  PIPASIM;  /* clause result */
A68_VC  QIPASIM;  /* OPERATORS - dynamic generator */
{ 
QIPASIM.upb = 0 ;
( NIPASIM_anonymous? A_VLOC(A68_CHAR ,QIPASIM): A_VHEAP(A68_CHAR ,QIPASIM) );
PIPASIM = QIPASIM;
} 
*ReturnedValue = (PIPASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  VIPASIM_generator(A68_BOOL  UIPASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  WIPASIM;  /* clause result */
A68_VC  XIPASIM;  /* OPERATORS - dynamic generator */
{ 
XIPASIM.upb = 0 ;
( UIPASIM_anonymous? A_VLOC(A68_CHAR ,XIPASIM): A_VHEAP(A68_CHAR ,XIPASIM) );
WIPASIM = XIPASIM;
} 
*ReturnedValue = (WIPASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  CJPASIM_generator(A68_BOOL  BJPASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  DJPASIM;  /* clause result */
A68_VC  EJPASIM;  /* OPERATORS - dynamic generator */
{ 
EJPASIM.upb = 0 ;
( BJPASIM_anonymous? A_VLOC(A68_CHAR ,EJPASIM): A_VHEAP(A68_CHAR ,EJPASIM) );
DJPASIM = EJPASIM;
} 
*ReturnedValue = (DJPASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  JJPASIM_generator(A68_BOOL  IJPASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  KJPASIM;  /* clause result */
A68_VC  LJPASIM;  /* OPERATORS - dynamic generator */
{ 
LJPASIM.upb = 0 ;
( IJPASIM_anonymous? A_VLOC(A68_CHAR ,LJPASIM): A_VHEAP(A68_CHAR ,LJPASIM) );
KJPASIM = LJPASIM;
} 
*ReturnedValue = (KJPASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  QJPASIM_generator(A68_BOOL  PJPASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  RJPASIM;  /* clause result */
A68_VC  SJPASIM;  /* OPERATORS - dynamic generator */
{ 
SJPASIM.upb = 0 ;
( PJPASIM_anonymous? A_VLOC(A68_CHAR ,SJPASIM): A_VHEAP(A68_CHAR ,SJPASIM) );
RJPASIM = SJPASIM;
} 
*ReturnedValue = (RJPASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  XJPASIM_generator(A68_BOOL  WJPASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  YJPASIM;  /* clause result */
A68_VC  ZJPASIM;  /* OPERATORS - dynamic generator */
{ 
ZJPASIM.upb = 0 ;
( WJPASIM_anonymous? A_VLOC(A68_CHAR ,ZJPASIM): A_VHEAP(A68_CHAR ,ZJPASIM) );
YJPASIM = ZJPASIM;
} 
*ReturnedValue = (YJPASIM);
return;
} 
#undef NL

A68_VOID  DKPASIM_translatestartcallsarray(A68_36  Flt)
{ 
A_PROC_ENTRY(translatestartcallsarray);
 /* line 170: */
 /* line 171: */
{ 
JYNASIM_amgenerateca(Flt);
 /* line 172: */
 /* line 173: */
PXNASIM_amgeneratenamedcode(UBPASIM_callsarraycodelabel, GYFASIM_nilparams, GYFASIM_nilparams);
} 
A_PROC_EXIT(translatestartcallsarray);
return;
} 
#undef NL

A68_VOID  EKPASIM_translatestartterminators(void)
{ 
A68_118  FKPASIM;  /* OPERATORS - mode -> union mode */
A68_118  GKPASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(translatestartterminators);
{ 
AVNASIM_amglobal(DENASIM_ws, A_UNITE(FKPASIM,mode2,2,ABPASIM_globalactionlabel));
 /* line 178: */
QUNASIM_ampushint(DFMASIM_evaluateaction);
 /* line 179: */
UTNASIM_amneq();
 /* line 180: */
IWNASIM_amjumpno(0, BKPASIM_startinitialisationlabel);
 /* line 182: */
AVNASIM_amglobal(DENASIM_ws, A_UNITE(GKPASIM,mode2,2,ABPASIM_globalactionlabel));
 /* line 183: */
QUNASIM_ampushint(GFMASIM_terminateaction);
 /* line 184: */
STNASIM_ameq();
 /* line 185: */
 /* line 186: */
IWNASIM_amjumpno(0, NJPASIM_startsaverslabel);
} 
A_PROC_EXIT(translatestartterminators);
return;
} 
#undef NL

A68_VOID  HKPASIM_translatestartsavers(void)
{ 
A68_118  IKPASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(translatestartsavers);
{ 
EWNASIM_amjump(GJPASIM_endcallsarraylabel);
 /* line 191: */
NWNASIM_amlabel(0, NJPASIM_startsaverslabel);
 /* line 192: */
AVNASIM_amglobal(DENASIM_ws, A_UNITE(IKPASIM,mode2,2,ABPASIM_globalactionlabel));
 /* line 193: */
QUNASIM_ampushint(EFMASIM_saveaction);
 /* line 194: */
STNASIM_ameq();
 /* line 195: */
 /* line 196: */
IWNASIM_amjumpno(0, UJPASIM_startrestorerslabel);
} 
A_PROC_EXIT(translatestartsavers);
return;
} 
#undef NL

A68_VOID  JKPASIM_translatestartrestorers(void)
{ 
A68_118  KKPASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(translatestartrestorers);
{ 
EWNASIM_amjump(GJPASIM_endcallsarraylabel);
 /* line 201: */
NWNASIM_amlabel(0, UJPASIM_startrestorerslabel);
 /* line 202: */
AVNASIM_amglobal(DENASIM_ws, A_UNITE(KKPASIM,mode2,2,ABPASIM_globalactionlabel));
 /* line 203: */
QUNASIM_ampushint(FFMASIM_restoreaction);
 /* line 204: */
STNASIM_ameq();
 /* line 205: */
 /* line 206: */
IWNASIM_amjumpno(0, GJPASIM_endcallsarraylabel);
} 
A_PROC_EXIT(translatestartrestorers);
return;
} 
#undef NL

A68_VOID  LKPASIM_translatestartinitialisers(void)
{ 
A68_118  MKPASIM;  /* OPERATORS - mode -> union mode */
A68_118  NKPASIM;  /* OPERATORS - mode -> union mode */
A68_118  OKPASIM;  /* OPERATORS - mode -> union mode */
A68_118  PKPASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(translatestartinitialisers);
{ 
EWNASIM_amjump(GJPASIM_endcallsarraylabel);
 /* line 211: */
NWNASIM_amlabel(0, BKPASIM_startinitialisationlabel);
 /* line 212: */
AVNASIM_amglobal(DENASIM_ws, A_UNITE(MKPASIM,mode2,2,QAPASIM_globalinitialisedlabel));
 /* line 213: */
QTNASIM_amtest();
 /* line 214: */
IUNASIM_amnot();
 /* line 215: */
IWNASIM_amjumpno(0, OGPASIM_callslooplabel);
 /* line 216: */
QUNASIM_ampushint(1);
 /* line 217: */
FVNASIM_amstore(DENASIM_ws, A_UNITE(NKPASIM,mode2,2,QAPASIM_globalinitialisedlabel));
 /* line 224: */
QUNASIM_ampushint(1);
 /* line 225: */
FVNASIM_amstore(DENASIM_ws, A_UNITE(OKPASIM,mode2,2,SDPASIM_globalunitdeleventlabel));
 /* line 227: */
QUNASIM_ampushint(0);
 /* line 228: */
 /* line 229: */
FVNASIM_amstore(DENASIM_ws, A_UNITE(PKPASIM,mode2,2,CEPASIM_globalcomboutputsstablelabel));
} 
A_PROC_EXIT(translatestartinitialisers);
return;
} 
#undef NL

A68_VOID  QKPASIM_translatestartcallsloop(void)
{ 
A68_118  RKPASIM;  /* OPERATORS - mode -> union mode */
A68_118  SKPASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(translatestartcallsloop);
{ 
NWNASIM_amlabel(0, OGPASIM_callslooplabel);
 /* line 243: */
QUNASIM_ampushint(0);
 /* line 244: */
FVNASIM_amstore(DENASIM_ws, A_UNITE(RKPASIM,mode2,2,IDPASIM_globalmonitorchangedlabel));
 /* line 246: */
QWNASIM_amrepeat();
 /* line 247: */
AVNASIM_amglobal(DENASIM_ws, A_UNITE(SKPASIM,mode2,2,CEPASIM_globalcomboutputsstablelabel));
 /* line 248: */
QTNASIM_amtest();
 /* line 251: */
IUNASIM_amnot();
 /* line 252: */
 /* line 253: */
IWNASIM_amjumpno(0, ZIPASIM_timetestlabel);
} 
A_PROC_EXIT(translatestartcallsloop);
return;
} 
#undef NL

A68_VOID  TKPASIM_translatestartcombinatorialloop(void)
{ 
A68_118  UKPASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(translatestartcombinatorialloop);
{ 
QWNASIM_amrepeat();
 /* line 262: */
QUNASIM_ampushint(0);
 /* line 263: */
 /* line 264: */
FVNASIM_amstore(DENASIM_ws, A_UNITE(UKPASIM,mode2,2,KBPASIM_globaliterationslabel));
} 
A_PROC_EXIT(translatestartcombinatorialloop);
return;
} 
#undef NL

A68_VOID  VKPASIM_translateendcombinatorialloop(void)
{ 
A68_118  WKPASIM;  /* OPERATORS - mode -> union mode */
A68_118  XKPASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(translateendcombinatorialloop);
{ 
AVNASIM_amglobal(DENASIM_ws, A_UNITE(WKPASIM,mode2,2,KBPASIM_globaliterationslabel));
 /* line 271: */
QTNASIM_amtest();
 /* line 273: */
AVNASIM_amglobal(DENASIM_ws, A_UNITE(XKPASIM,mode2,2,GAPASIM_globalinterruptedlabel));
 /* line 274: */
QUNASIM_ampushint(2);
 /* line 275: */
GTNASIM_amiand();
 /* line 276: */
QTNASIM_amtest();
 /* line 277: */
IUNASIM_amnot();
 /* line 279: */
EUNASIM_amand();
 /* line 281: */
 /* line 282: */
SWNASIM_amloop();
} 
A_PROC_EXIT(translateendcombinatorialloop);
return;
} 
#undef NL

A68_VOID  YKPASIM_translatetimetest(void)
{ 
A68_118  ZKPASIM;  /* OPERATORS - mode -> union mode */
A68_118  ALPASIM;  /* OPERATORS - mode -> union mode */
A68_118  BLPASIM;  /* OPERATORS - mode -> union mode */
A68_118  CLPASIM;  /* OPERATORS - mode -> union mode */
A68_118  DLPASIM;  /* OPERATORS - mode -> union mode */
A68_118  ELPASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(translatetimetest);
{ 
QUNASIM_ampushint(1);
 /* line 291: */
FVNASIM_amstore(DENASIM_ws, A_UNITE(ZKPASIM,mode2,2,CEPASIM_globalcomboutputsstablelabel));
 /* line 293: */
NWNASIM_amlabel(0, ZIPASIM_timetestlabel);
 /* line 294: */
QUNASIM_ampushint(AJDAOST_maxint);
 /* line 295: */
FVNASIM_amstore(DENASIM_ws, A_UNITE(ALPASIM,mode2,2,MEPASIM_globalnexteventlabel));
 /* line 297: */
AVNASIM_amglobal(DENASIM_ws, A_UNITE(BLPASIM,mode2,2,MZOASIM_globaltimelabel));
 /* line 298: */
AVNASIM_amglobal(DENASIM_ws, A_UNITE(CLPASIM,mode2,2,WZOASIM_globalmaxtimelabel));
 /* line 299: */
UTNASIM_amneq();
 /* line 300: */
AVNASIM_amglobal(DENASIM_ws, A_UNITE(DLPASIM,mode2,2,GAPASIM_globalinterruptedlabel));
 /* line 301: */
QTNASIM_amtest();
 /* line 302: */
IUNASIM_amnot();
 /* line 303: */
EUNASIM_amand();
 /* line 304: */
AVNASIM_amglobal(DENASIM_ws, A_UNITE(ELPASIM,mode2,2,IDPASIM_globalmonitorchangedlabel));
 /* line 305: */
QTNASIM_amtest();
 /* line 306: */
IUNASIM_amnot();
 /* line 307: */
EUNASIM_amand();
 /* line 308: */
WUNASIM_amlocal(0);
 /* line 311: */
IWNASIM_amjumpno(0, GJPASIM_endcallsarraylabel);
 /* line 312: */
 /* line 313: */
TUNASIM_amdrop(1);
} 
A_PROC_EXIT(translatetimetest);
return;
} 
#undef NL

A68_VOID  FLPASIM_translatetimeadvance(void)
{ 
A68_116  GLPASIM;  /* avoid structure result */
A68_116  HLPASIM_nonunittimeadvance;
A68_116  ILPASIM;  /* avoid structure result */
A68_116  JLPASIM_endtimeadvance;
A68_116  KLPASIM;  /* avoid structure result */
A68_116  LLPASIM_storemaxtime;
A68_116  MLPASIM;  /* avoid structure result */
A68_116  NLPASIM_needeventhandling;
A68_118  OLPASIM;  /* OPERATORS - mode -> union mode */
A68_118  PLPASIM;  /* OPERATORS - mode -> union mode */
A68_118  QLPASIM;  /* OPERATORS - mode -> union mode */
A68_118  RLPASIM;  /* OPERATORS - mode -> union mode */
A68_118  SLPASIM;  /* OPERATORS - mode -> union mode */
A68_118  TLPASIM;  /* OPERATORS - mode -> union mode */
A68_118  ULPASIM;  /* OPERATORS - mode -> union mode */
A68_118  VLPASIM;  /* OPERATORS - mode -> union mode */
A68_118  WLPASIM;  /* OPERATORS - mode -> union mode */
A68_118  XLPASIM;  /* OPERATORS - mode -> union mode */
A68_118  YLPASIM;  /* OPERATORS - mode -> union mode */
A68_118  ZLPASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(translatetimeadvance);
{ 
YFNASIM_newlabel(  &GLPASIM );
HLPASIM_nonunittimeadvance = GLPASIM;
 /* line 324: */
YFNASIM_newlabel(  &ILPASIM );
JLPASIM_endtimeadvance = ILPASIM;
 /* line 325: */
YFNASIM_newlabel(  &KLPASIM );
LLPASIM_storemaxtime = KLPASIM;
 /* line 326: */
YFNASIM_newlabel(  &MLPASIM );
NLPASIM_needeventhandling = MLPASIM;
 /* line 327: */
AVNASIM_amglobal(DENASIM_ws, A_UNITE(OLPASIM,mode2,2,SDPASIM_globalunitdeleventlabel));
 /* line 328: */
QTNASIM_amtest();
 /* line 329: */
IWNASIM_amjumpno(0, HLPASIM_nonunittimeadvance);
 /* line 331: */
AVNASIM_amglobal(DENASIM_ws, A_UNITE(PLPASIM,mode2,2,MZOASIM_globaltimelabel));
 /* line 332: */
QUNASIM_ampushint(1);
 /* line 333: */
SSNASIM_amadd();
 /* line 334: */
WUNASIM_amlocal(0);
 /* line 335: */
FVNASIM_amstore(DENASIM_ws, A_UNITE(QLPASIM,mode2,2,MZOASIM_globaltimelabel));
 /* line 336: */
WUNASIM_amlocal(0);
 /* line 337: */
FVNASIM_amstore(DENASIM_ws, A_UNITE(RLPASIM,mode2,2,MEPASIM_globalnexteventlabel));
 /* line 338: */
EWNASIM_amjump(JLPASIM_endtimeadvance);
 /* line 340: */
NWNASIM_amlabel(0, HLPASIM_nonunittimeadvance);
 /* line 341: */
AVNASIM_amglobal(DENASIM_ws, A_UNITE(SLPASIM,mode2,2,WZOASIM_globalmaxtimelabel));
 /* line 342: */
AVNASIM_amglobal(DENASIM_ws, A_UNITE(TLPASIM,mode2,2,MEPASIM_globalnexteventlabel));
 /* line 343: */
WUNASIM_amlocal(1);
 /* line 344: */
WUNASIM_amlocal(1);
 /* line 345: */
WTNASIM_amgt();
 /* line 346: */
IWNASIM_amjumpno(1, LLPASIM_storemaxtime);
 /* line 347: */
FVNASIM_amstore(DENASIM_ws, A_UNITE(ULPASIM,mode2,2,MZOASIM_globaltimelabel));
 /* line 348: */
TUNASIM_amdrop(1);
 /* line 349: */
AVNASIM_amglobal(DENASIM_ws, A_UNITE(VLPASIM,mode2,2,MZOASIM_globaltimelabel));
 /* line 350: */
EWNASIM_amjump(JLPASIM_endtimeadvance);
 /* line 351: */
NWNASIM_amlabel(0, LLPASIM_storemaxtime);
 /* line 352: */
WUNASIM_amlocal(0);
 /* line 353: */
FVNASIM_amstore(DENASIM_ws, A_UNITE(WLPASIM,mode2,2,MZOASIM_globaltimelabel));
 /* line 354: */
NWNASIM_amlabel(1, JLPASIM_endtimeadvance);
 /* line 358: */
AVNASIM_amglobal(DENASIM_ws, A_UNITE(XLPASIM,mode2,2,MEPASIM_globalnexteventlabel));
 /* line 359: */
AUNASIM_amlt();
 /* line 360: */
IWNASIM_amjumpno(0, NLPASIM_needeventhandling);
 /* line 361: */
QUNASIM_ampushint(1);
 /* line 362: */
QTNASIM_amtest();
 /* line 363: */
EWNASIM_amjump(GJPASIM_endcallsarraylabel);
 /* line 365: */
NWNASIM_amlabel(0, NLPASIM_needeventhandling);
 /* line 366: */
QUNASIM_ampushint(0);
 /* line 367: */
FVNASIM_amstore(DENASIM_ws, A_UNITE(YLPASIM,mode2,2,SDPASIM_globalunitdeleventlabel));
 /* line 368: */
QUNASIM_ampushint(0);
 /* line 369: */
 /* line 371: */
FVNASIM_amstore(DENASIM_ws, A_UNITE(ZLPASIM,mode2,2,CEPASIM_globalcomboutputsstablelabel));
} 
A_PROC_EXIT(translatetimeadvance);
return;
} 
#undef NL

A68_VOID  AMPASIM_translateendcallsarray(void)
{ 
A_PROC_ENTRY(translateendcallsarray);
{ 
QUNASIM_ampushint(1);
 /* line 379: */
QTNASIM_amtest();
 /* line 380: */
NWNASIM_amlabel(1, VGPASIM_endcallslooplabel);
 /* line 381: */
SWNASIM_amloop();
 /* line 382: */
NWNASIM_amlabel(0, GJPASIM_endcallsarraylabel);
 /* line 383: */
QSNASIM_amhalt();
 /* line 384: */
 /* line 385: */
LYNASIM_amgenerateendca();
} 
A_PROC_EXIT(translateendcallsarray);
return;
} 
#undef NL

A68_VOID  DMPASIM_translatestartprobeloopup(void)
{ 
A68_116  EMPASIM;  /* avoid structure result */
A68_116  FMPASIM;  /* avoid structure result */
A68_118  GMPASIM;  /* OPERATORS - mode -> union mode */
A68_118  HMPASIM;  /* OPERATORS - mode -> union mode */
A68_118  IMPASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(translatestartprobeloopup);
{ 
YFNASIM_newlabel(  &EMPASIM );
BMPASIM_endlooplabel = EMPASIM;
 /* line 394: */
YFNASIM_newlabel(  &FMPASIM );
CMPASIM_endcase = FMPASIM;
 /* line 395: */
AVNASIM_amglobal(DENASIM_ws, A_UNITE(GMPASIM,mode2,2,QFPASIM_globalstartinstlabel));
 /* line 396: */
QWNASIM_amrepeat();
 /* line 397: */
WUNASIM_amlocal(0);
 /* line 398: */
AVNASIM_amglobal(DENASIM_ws, A_UNITE(HMPASIM,mode2,2,AGPASIM_globalendinstlabel));
 /* line 399: */
CUNASIM_amle();
 /* line 401: */
WUNASIM_amlocal(0);
 /* line 402: */
IWNASIM_amjumpno(0, BMPASIM_endlooplabel);
 /* line 403: */
TUNASIM_amdrop(1);
 /* line 404: */
WUNASIM_amlocal(0);
 /* line 405: */
 /* line 408: */
FVNASIM_amstore(DENASIM_ws, A_UNITE(IMPASIM,mode1,1,CZOASIM_globalinstancelist));
} 
A_PROC_EXIT(translatestartprobeloopup);
return;
} 
#undef NL

A68_VOID  LMPASIM_translatestartcasearm(A68_INT  Fnno)
{ 
A68_116  MMPASIM;  /* avoid structure result */
A_PROC_ENTRY(translatestartcasearm);
 /* line 411: */
 /* line 412: */
{ 
YFNASIM_newlabel(  &MMPASIM );
JMPASIM_endcasearm = MMPASIM;
 /* line 414: */
WUNASIM_amlocal(0);
 /* line 415: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 416: */
QUNASIM_ampushint(Fnno);
 /* line 417: */
STNASIM_ameq();
 /* line 419: */
IWNASIM_amjumpno(0, JMPASIM_endcasearm);
 /* line 420: */
QUNASIM_ampushint(DENASIM_ws);
 /* line 421: */
SSNASIM_amadd();
 /* line 422: */
 /* line 424: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
} 
A_PROC_EXIT(translatestartcasearm);
return;
} 
#undef NL

A68_VOID  NMPASIM_translateendcasearm(void)
{ 
A_PROC_ENTRY(translateendcasearm);
{ 
TUNASIM_amdrop(1);
 /* line 429: */
EWNASIM_amjump(CMPASIM_endcase);
 /* line 430: */
 /* line 432: */
NWNASIM_amlabel(1, JMPASIM_endcasearm);
} 
A_PROC_EXIT(translateendcasearm);
return;
} 
#undef NL

A68_VOID  OMPASIM_translateendprobeloopup(void)
{ 
A68_118  PMPASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(translateendprobeloopup);
{ 
TUNASIM_amdrop(1);
 /* line 438: */
NWNASIM_amlabel(0, CMPASIM_endcase);
 /* line 440: */
AVNASIM_amglobal(DENASIM_ws, A_UNITE(PMPASIM,mode1,1,CZOASIM_globalinstancelist));
 /* line 441: */
QUNASIM_ampushint((DENASIM_ws*2));
 /* line 442: */
SSNASIM_amadd();
 /* line 443: */
QUNASIM_ampushint(1);
 /* line 444: */
QTNASIM_amtest();
 /* line 445: */
NWNASIM_amlabel(2, BMPASIM_endlooplabel);
 /* line 446: */
SWNASIM_amloop();
 /* line 447: */
 /* line 449: */
TUNASIM_amdrop(1);
} 
A_PROC_EXIT(translateendprobeloopup);
return;
} 
#undef NL

A68_VOID  QMPASIM_translatestartprobeloopdown(void)
{ 
A68_116  RMPASIM;  /* avoid structure result */
A68_116  SMPASIM;  /* avoid structure result */
A68_118  TMPASIM;  /* OPERATORS - mode -> union mode */
A68_118  UMPASIM;  /* OPERATORS - mode -> union mode */
A68_118  VMPASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(translatestartprobeloopdown);
{ 
YFNASIM_newlabel(  &RMPASIM );
BMPASIM_endlooplabel = RMPASIM;
 /* line 455: */
YFNASIM_newlabel(  &SMPASIM );
CMPASIM_endcase = SMPASIM;
 /* line 456: */
AVNASIM_amglobal(DENASIM_ws, A_UNITE(TMPASIM,mode2,2,AGPASIM_globalendinstlabel));
 /* line 457: */
QWNASIM_amrepeat();
 /* line 458: */
WUNASIM_amlocal(0);
 /* line 459: */
AVNASIM_amglobal(DENASIM_ws, A_UNITE(UMPASIM,mode2,2,QFPASIM_globalstartinstlabel));
 /* line 460: */
YTNASIM_amge();
 /* line 462: */
WUNASIM_amlocal(0);
 /* line 463: */
IWNASIM_amjumpno(0, BMPASIM_endlooplabel);
 /* line 464: */
TUNASIM_amdrop(1);
 /* line 465: */
WUNASIM_amlocal(0);
 /* line 466: */
 /* line 469: */
FVNASIM_amstore(DENASIM_ws, A_UNITE(VMPASIM,mode1,1,CZOASIM_globalinstancelist));
} 
A_PROC_EXIT(translatestartprobeloopdown);
return;
} 
#undef NL

A68_VOID  WMPASIM_translateendprobeloopdown(void)
{ 
A68_118  XMPASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(translateendprobeloopdown);
{ 
TUNASIM_amdrop(1);
 /* line 475: */
NWNASIM_amlabel(0, CMPASIM_endcase);
 /* line 477: */
AVNASIM_amglobal(DENASIM_ws, A_UNITE(XMPASIM,mode1,1,CZOASIM_globalinstancelist));
 /* line 478: */
QUNASIM_ampushint((DENASIM_ws*2));
 /* line 479: */
USNASIM_amsub();
 /* line 480: */
QUNASIM_ampushint(1);
 /* line 481: */
QTNASIM_amtest();
 /* line 482: */
NWNASIM_amlabel(2, BMPASIM_endlooplabel);
 /* line 483: */
SWNASIM_amloop();
 /* line 484: */
 /* line 486: */
TUNASIM_amdrop(1);
} 
A_PROC_EXIT(translateendprobeloopdown);
return;
} 
#undef NL

A68_VOID  YMPASIM_translatestartinitloopup(void)
{ 
A68_116  ZMPASIM;  /* avoid structure result */
A68_116  ANPASIM;  /* avoid structure result */
A68_118  BNPASIM;  /* OPERATORS - mode -> union mode */
A68_118  CNPASIM;  /* OPERATORS - mode -> union mode */
A68_118  DNPASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(translatestartinitloopup);
{ 
YFNASIM_newlabel(  &ZMPASIM );
BMPASIM_endlooplabel = ZMPASIM;
 /* line 492: */
YFNASIM_newlabel(  &ANPASIM );
CMPASIM_endcase = ANPASIM;
 /* line 494: */
AVNASIM_amglobal(DENASIM_ws, A_UNITE(BNPASIM,mode2,2,WEPASIM_globalstartinitlabel));
 /* line 495: */
QWNASIM_amrepeat();
 /* line 496: */
WUNASIM_amlocal(0);
 /* line 497: */
AVNASIM_amglobal(DENASIM_ws, A_UNITE(CNPASIM,mode2,2,GFPASIM_globalendinitlabel));
 /* line 498: */
CUNASIM_amle();
 /* line 500: */
WUNASIM_amlocal(0);
 /* line 501: */
IWNASIM_amjumpno(0, BMPASIM_endlooplabel);
 /* line 502: */
TUNASIM_amdrop(1);
 /* line 503: */
WUNASIM_amlocal(0);
 /* line 504: */
 /* line 506: */
FVNASIM_amstore(DENASIM_ws, A_UNITE(DNPASIM,mode1,1,CZOASIM_globalinstancelist));
} 
A_PROC_EXIT(translatestartinitloopup);
return;
} 
#undef NL

A68_VOID  ENPASIM_translateendinitloopup(void)
{ 
A68_118  FNPASIM;  /* OPERATORS - mode -> union mode */
A68_118  GNPASIM;  /* OPERATORS - mode -> union mode */
A68_118  HNPASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(translateendinitloopup);
{ 
TUNASIM_amdrop(1);
 /* line 512: */
NWNASIM_amlabel(0, CMPASIM_endcase);
 /* line 514: */
AVNASIM_amglobal(DENASIM_ws, A_UNITE(FNPASIM,mode1,1,CZOASIM_globalinstancelist));
 /* line 515: */
QUNASIM_ampushint((DENASIM_ws*2));
 /* line 516: */
SSNASIM_amadd();
 /* line 517: */
QUNASIM_ampushint(1);
 /* line 518: */
QTNASIM_amtest();
 /* line 519: */
NWNASIM_amlabel(2, BMPASIM_endlooplabel);
 /* line 520: */
SWNASIM_amloop();
 /* line 521: */
TUNASIM_amdrop(1);
 /* line 524: */
AVNASIM_amglobal(DENASIM_ws, A_UNITE(GNPASIM,mode1,1,YYOASIM_globalstartinitlist));
 /* line 525: */
QUNASIM_ampushint((2*DENASIM_ws));
 /* line 526: */
USNASIM_amsub();
 /* line 527: */
 /* line 529: */
FVNASIM_amstore(DENASIM_ws, A_UNITE(HNPASIM,mode1,1,ZYOASIM_globalendinitlist));
} 
A_PROC_EXIT(translateendinitloopup);
return;
} 
#undef NL

A_STATIC A68_VOID  MNPASIM_generator(A68_BOOL  LNPASIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  NNPASIM;  /* clause result */
A68_VC  ONPASIM;  /* OPERATORS - dynamic generator */
{ 
ONPASIM.upb = 13 ;
( LNPASIM_anonymous? A_VLOC(A68_CHAR ,ONPASIM): A_VHEAP(A68_CHAR ,ONPASIM) );
NNPASIM = ONPASIM;
} 
*ReturnedValue = (NNPASIM);
return;
} 
#undef NL

A68_VOID  DOPASIM_translatestartfunction(A68_VC  Name)
{ 
A68_INT * EOPASIM;  /* YIELD */
A_PROC_ENTRY(translatestartfunction);
 /* line 610: */
 /* line 611: */
{ 
EOPASIM = (&((&TNPASIM_instlab)->Lab)) ;
(*EOPASIM) = ((ZHCASIM_lastsymbol*BOPASIM_noofphases)+UNPASIM_combphase);
 /* line 612: */
PXNASIM_amgeneratenamedcode(TNPASIM_instlab, (&INPASIM_instptr), GYFASIM_nilparams);
 /* line 613: */
 /* line 614: */
EXNASIM_amenter();
} 
A_PROC_EXIT(translatestartfunction);
return;
} 
#undef NL

A68_VOID  GOPASIM_translatestarteventsetter(A68_VC  Name)
{ 
A68_INT * HOPASIM;  /* YIELD */
A_PROC_ENTRY(translatestarteventsetter);
 /* line 617: */
 /* line 618: */
{ 
HOPASIM = (&((&TNPASIM_instlab)->Lab)) ;
(*HOPASIM) = ((ZHCASIM_lastsymbol*BOPASIM_noofphases)+VNPASIM_settingphase);
 /* line 619: */
PXNASIM_amgeneratenamedcode(TNPASIM_instlab, (&INPASIM_instptr), GYFASIM_nilparams);
 /* line 620: */
 /* line 621: */
EXNASIM_amenter();
} 
A_PROC_EXIT(translatestarteventsetter);
return;
} 
#undef NL

A68_VOID  JOPASIM_translatestarteventhandler(A68_VC  Name)
{ 
A68_INT * KOPASIM;  /* YIELD */
A_PROC_ENTRY(translatestarteventhandler);
 /* line 624: */
 /* line 625: */
{ 
KOPASIM = (&((&TNPASIM_instlab)->Lab)) ;
(*KOPASIM) = ((ZHCASIM_lastsymbol*BOPASIM_noofphases)+WNPASIM_handlingphase);
 /* line 626: */
PXNASIM_amgeneratenamedcode(TNPASIM_instlab, (&INPASIM_instptr), GYFASIM_nilparams);
 /* line 627: */
 /* line 628: */
EXNASIM_amenter();
} 
A_PROC_EXIT(translatestarteventhandler);
return;
} 
#undef NL

A68_VOID  MOPASIM_translatestartinitialiser(A68_VC  Name)
{ 
A68_INT * NOPASIM;  /* YIELD */
A_PROC_ENTRY(translatestartinitialiser);
 /* line 631: */
 /* line 632: */
{ 
NOPASIM = (&((&TNPASIM_instlab)->Lab)) ;
(*NOPASIM) = ((ZHCASIM_lastsymbol*BOPASIM_noofphases)+XNPASIM_initialiserphase);
 /* line 633: */
PXNASIM_amgeneratenamedcode(TNPASIM_instlab, (&INPASIM_instptr), GYFASIM_nilparams);
 /* line 634: */
 /* line 635: */
EXNASIM_amenter();
} 
A_PROC_EXIT(translatestartinitialiser);
return;
} 
#undef NL

A68_VOID  POPASIM_translatestartsaver(A68_VC  Name)
{ 
A68_INT * QOPASIM;  /* YIELD */
A_PROC_ENTRY(translatestartsaver);
 /* line 645: */
 /* line 646: */
{ 
QOPASIM = (&((&TNPASIM_instlab)->Lab)) ;
(*QOPASIM) = ((ZHCASIM_lastsymbol*BOPASIM_noofphases)+ZNPASIM_saverphase);
 /* line 647: */
PXNASIM_amgeneratenamedcode(TNPASIM_instlab, (&JNPASIM_intinstptr), GYFASIM_nilparams);
 /* line 648: */
 /* line 649: */
EXNASIM_amenter();
} 
A_PROC_EXIT(translatestartsaver);
return;
} 
#undef NL

A68_VOID  SOPASIM_translatestartrestorer(A68_VC  Name)
{ 
A68_INT * TOPASIM;  /* YIELD */
A_PROC_ENTRY(translatestartrestorer);
 /* line 652: */
 /* line 653: */
{ 
TOPASIM = (&((&TNPASIM_instlab)->Lab)) ;
(*TOPASIM) = ((ZHCASIM_lastsymbol*BOPASIM_noofphases)+AOPASIM_restorerphase);
 /* line 654: */
PXNASIM_amgeneratenamedcode(TNPASIM_instlab, (&JNPASIM_intinstptr), GYFASIM_nilparams);
 /* line 655: */
 /* line 656: */
EXNASIM_amenter();
} 
A_PROC_EXIT(translatestartrestorer);
return;
} 
#undef NL

A68_VOID  VOPASIM_translatestartterminator(A68_VC  Name)
{ 
A68_INT * WOPASIM;  /* YIELD */
A_PROC_ENTRY(translatestartterminator);
 /* line 659: */
 /* line 660: */
{ 
WOPASIM = (&((&TNPASIM_instlab)->Lab)) ;
(*WOPASIM) = ((ZHCASIM_lastsymbol*BOPASIM_noofphases)+YNPASIM_terminatorphase);
 /* line 661: */
PXNASIM_amgeneratenamedcode(TNPASIM_instlab, (&JNPASIM_intinstptr), GYFASIM_nilparams);
 /* line 662: */
 /* line 663: */
EXNASIM_amenter();
} 
A_PROC_EXIT(translatestartterminator);
return;
} 
#undef NL

A68_VOID  ZOPASIM_translateendfunction(A68_INT  Instsize, A68_INT  D)
{ 
A_PROC_ENTRY(translateendfunction);
 /* line 671: */
 /* line 672: */
{ 
 /* line 673: */
if ( (D!=1) )
{ 
 /* line 674: */
TUNASIM_amdrop((D-1));
} 
 /* line 675: */
WUNASIM_amlocal(0);
 /* line 676: */
AVNASIM_amglobal(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 677: */
QTNASIM_amtest();
 /* line 678: */
IUNASIM_amnot();
 /* line 679: */
IWNASIM_amjumpno(0, CHPASIM_unchangedoutputlabel);
 /* line 680: */
HXNASIM_amfanout(Instsize);
 /* line 681: */
KXNASIM_amret(0);
 /* line 682: */
NWNASIM_amlabel(1, CHPASIM_unchangedoutputlabel);
 /* line 683: */
QUNASIM_ampushint(0);
 /* line 684: */
FVNASIM_amstore(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 685: */
 /* line 686: */
KXNASIM_amret(0);
} 
A_PROC_EXIT(translateendfunction);
return;
} 
#undef NL

A68_VOID  CPPASIM_translateendfunctionsettingflag(A68_INT  Instsize, A68_INT  D)
{ 
A_PROC_ENTRY(translateendfunctionsettingflag);
 /* line 693: */
 /* line 694: */
{ 
 /* line 695: */
if ( (D!=1) )
{ 
 /* line 696: */
TUNASIM_amdrop((D-1));
} 
 /* line 698: */
WUNASIM_amlocal(0);
 /* line 699: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 700: */
QTNASIM_amtest();
 /* line 701: */
IUNASIM_amnot();
 /* line 702: */
IWNASIM_amjumpno(1, CHPASIM_unchangedoutputlabel);
 /* line 705: */
WUNASIM_amlocal(0);
 /* line 706: */
QUNASIM_ampushint(1);
 /* line 707: */
FVNASIM_amstore(DENASIM_ws, ONFASIM_indirect);
 /* line 709: */
HXNASIM_amfanout(Instsize);
 /* line 711: */
NWNASIM_amlabel(0, CHPASIM_unchangedoutputlabel);
 /* line 713: */
 /* line 714: */
KXNASIM_amret(0);
} 
A_PROC_EXIT(translateendfunctionsettingflag);
return;
} 
#undef NL

A68_VOID  FPPASIM_translatesimpleendfunction(A68_INT  Instsize, A68_INT  D)
{ 
A_PROC_ENTRY(translatesimpleendfunction);
 /* line 721: */
 /* line 722: */
{ 
 /* line 723: */
if ( (D!=1) )
{ 
 /* line 724: */
TUNASIM_amdrop((D-1));
} 
 /* line 726: */
WUNASIM_amlocal(0);
 /* line 727: */
QUNASIM_ampushint(0);
 /* line 728: */
FVNASIM_amstore(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 730: */
HXNASIM_amfanout(Instsize);
 /* line 731: */
 /* line 732: */
KXNASIM_amret(0);
} 
A_PROC_EXIT(translatesimpleendfunction);
return;
} 
#undef NL

A68_VOID  NPPASIM_translatecompareandsetflag(A68_INT  Size, A68_INT  Outaddr, A68_INT  Flagadjust, A68_INT  D)
{ 
A68_116  OPPASIM;  /* avoid structure result */
A68_116  PPPASIM_samelabel;
A_PROC_ENTRY(translatecompareandsetflag);
 /* line 754: */
 /* line 755: */
if ( (Flagadjust!=GPPASIM_leaveflag) )
{ 
YFNASIM_newlabel(  &OPPASIM );
PPPASIM_samelabel = OPPASIM;
 /* line 758: */
 /* line 759: */
if ( (Size==DENASIM_ws) )
{ 
WUNASIM_amlocal(Outaddr);
 /* line 760: */
 /* line 761: */
 /* line 762: */
AVNASIM_amglobal(Size, ONFASIM_indirect);
} 
else
{ 
QUNASIM_ampushint(0);
 /* line 763: */
WUNASIM_amlocal((Outaddr+1));
 /* line 764: */
 /* line 765: */
LVNASIM_ambstring((CENASIM_bitsperbyte*Size), (CENASIM_bitsperbyte*Size), ONFASIM_indirect);
} 
 /* line 767: */
WUNASIM_amlocal(1);
 /* line 768: */
UTNASIM_amneq();
 /* line 769: */
IWNASIM_amjumpno(0, PPPASIM_samelabel);
 /* line 770: */
WUNASIM_amlocal((D-1));
 /* line 771: */
 /* line 772: */
if ( (Flagadjust==HPPASIM_setflag) )
{ 
 /* line 773: */
 /* line 774: */
QUNASIM_ampushint(1);
} 
else
{ 
 /* line 775: */
QUNASIM_ampushint(0);
} 
 /* line 776: */
FVNASIM_amstore(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 777: */
 /* line 778: */
NWNASIM_amlabel(D, PPPASIM_samelabel);
} 
A_PROC_EXIT(translatecompareandsetflag);
return;
} 
#undef NL
 /* line 824: */

A68_VOID  VPPASIM_translatesomeinputs(A68_32  Inputsizes, A68_INT  Inoffset, A68_INT  Outoffset, A68_INT  Flagadjust, A68_INT  D)
{ 
A68_240  YPPASIM_totalsizes;   /* proc value of non-global proc */
A68_INT  PQPASIM_index;
A68_INT  QQPASIM_getfrom;
A68_INT  RQPASIM_writeto;
A68_INT  SQPASIM_size;
A68_INT  TQPASIM_dd;
A68_INT  UQPASIM_repeatcount;
A68_INT  VQPASIM;  /* YIELD */
A68_INT  WQPASIM;  /* clause result */
A68_INT  XQPASIM;  /* YIELD */
A68_INT  YQPASIM_length;
A68_32  ZQPASIM;  /* OPERATORS - trim index */
A68_32  ARPASIM_part;
A68_239  BRPASIM;  /* avoid structure result */
A68_239  CRPASIM_step;
A_PROC_ENTRY(translatesomeinputs);
 /* line 825: */
 /* line 830: */
{ 
A_CLOSURE( YPPASIM_totalsizes, ZPPASIM_totalsizes, AQPASIM_totalsizes );
(( AQPASIM_totalsizes * ) ( YPPASIM_totalsizes.nonlocals )) -> YPPASIM_totalsizes = YPPASIM_totalsizes;
 /* line 857: */
PQPASIM_index = 1;
 /* line 858: */
QQPASIM_getfrom = Inoffset;
 /* line 859: */
RQPASIM_writeto = Outoffset;
 /* line 860: */
for ( ;; )
{ 
 /* line 861: */
if ( !((PQPASIM_index<=Inputsizes.upb)) ) break;
 /* line 863: */
if ( (A_VINDEX(Inputsizes,PQPASIM_index)>0) )
{ 
SQPASIM_size = A_VINDEX(Inputsizes,PQPASIM_index);
 /* line 864: */
WUNASIM_amlocal(0);
 /* line 865: */
QUNASIM_ampushint(RQPASIM_writeto);
 /* line 866: */
SSNASIM_amadd();
 /* line 867: */
TQPASIM_dd = (D+1);
 /* line 870: */
 /* line 871: */
if ( (SQPASIM_size!=DENASIM_ws) )
{ 
QUNASIM_ampushint(0);
 /* line 872: */
 /* line 873: */
TQPASIM_dd+=1;
} 
 /* line 874: */
WUNASIM_amlocal(((TQPASIM_dd-D)+1));
 /* line 875: */
QUNASIM_ampushint(QQPASIM_getfrom);
 /* line 876: */
SSNASIM_amadd();
 /* line 877: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 878: */
 /* line 879: */
if ( (SQPASIM_size==DENASIM_ws) )
{ 
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 880: */
NPPASIM_translatecompareandsetflag(SQPASIM_size, 1, Flagadjust, (D+2));
 /* line 881: */
 /* line 882: */
 /* line 883: */
FVNASIM_amstore(DENASIM_ws, ONFASIM_indirect);
} 
else
{ 
 /* line 884: */
LVNASIM_ambstring((CENASIM_bitsperbyte*SQPASIM_size), (CENASIM_bitsperbyte*SQPASIM_size), ONFASIM_indirect);
 /* line 885: */
NPPASIM_translatecompareandsetflag(SQPASIM_size, 1, Flagadjust, (D+2));
 /* line 886: */
 /* line 887: */
QVNASIM_ambstore((CENASIM_bitsperbyte*SQPASIM_size), ONFASIM_indirect);
} 
 /* line 888: */
PQPASIM_index+=1;
 /* line 889: */
QQPASIM_getfrom+=DENASIM_ws;
 /* line 890: */
 /* line 891: */
RQPASIM_writeto+=SQPASIM_size;
} 
else
{ 
 /* line 893: */
if ( (A_VINDEX(Inputsizes,PQPASIM_index)<0) )
{ 
UQPASIM_repeatcount = (-A_VINDEX(Inputsizes,PQPASIM_index));
 /* line 894: */
 /* line 895: */
VQPASIM = PQPASIM_index+=1 ;
if ( (A_VINDEX(Inputsizes,VQPASIM)>=0) )
{ 
WQPASIM = 1;
} 
else
{ 
 /* line 896: */
XQPASIM = ((PQPASIM_index+=1)-1) ;
WQPASIM = (-A_VINDEX(Inputsizes,XQPASIM));
} 
YQPASIM_length = WQPASIM;
 /* line 897: */
ARPASIM_part = A_VTRIM(ZQPASIM,(Inputsizes),A_VTSCRIPT(&(ZQPASIM.upb),(Inputsizes).upb,PQPASIM_index,((PQPASIM_index+YQPASIM_length)-1)));
 /* line 898: */
A_CALLPROC(YPPASIM_totalsizes,(ARPASIM_part, &BRPASIM),(ARPASIM_part, &BRPASIM,(YPPASIM_totalsizes).nonlocals));
CRPASIM_step = BRPASIM;
 /* line 900: */
QUNASIM_ampushint(UQPASIM_repeatcount);
 /* line 901: */
QWNASIM_amrepeat();
 /* line 902: */
QUNASIM_ampushint(1);
 /* line 903: */
USNASIM_amsub();
 /* line 905: */
WUNASIM_amlocal(0);
 /* line 906: */
QUNASIM_ampushint((DENASIM_ws*CRPASIM_step.Inputs));
 /* line 907: */
WSNASIM_ammul();
 /* line 908: */
WUNASIM_amlocal(3);
 /* line 909: */
SSNASIM_amadd();
 /* line 911: */
WUNASIM_amlocal(1);
 /* line 912: */
QUNASIM_ampushint(CRPASIM_step.Data);
 /* line 913: */
WSNASIM_ammul();
 /* line 914: */
WUNASIM_amlocal(3);
 /* line 915: */
SSNASIM_amadd();
 /* line 917: */
 /* line 918: */
VPPASIM_translatesomeinputs(ARPASIM_part, QQPASIM_getfrom, RQPASIM_writeto, Flagadjust, (D+3));
 /* line 920: */
TUNASIM_amdrop(2);
 /* line 922: */
WUNASIM_amlocal(0);
 /* line 923: */
QTNASIM_amtest();
 /* line 924: */
SWNASIM_amloop();
 /* line 925: */
TUNASIM_amdrop(1);
 /* line 927: */
PQPASIM_index+=YQPASIM_length;
 /* line 928: */
QQPASIM_getfrom+=((DENASIM_ws*UQPASIM_repeatcount)*CRPASIM_step.Inputs);
 /* line 929: */
 /* line 930: */
 /* line 932: */
RQPASIM_writeto+=(UQPASIM_repeatcount*CRPASIM_step.Data);
} 
else
{ 
 /* line 933: */
 /* line 934: */
PQPASIM_index+=1;
} 
} 
}
 /* line 935: */
} 
A_PROC_EXIT(translatesomeinputs);
return;
} 
#undef NL

A68_VOID  FRPASIM_compresssizes(A68_32  Sizes, A68_152  Hint)
{ 
A68_152  GRPASIM;  /* united object - for case conformity */
A68_153 * HRPASIM_sr;
A68_152  IRPASIM_elemtype;
A68_INT  JRPASIM_elemwidth;
A68_32  KRPASIM;  /* OPERATORS - trim index */
A68_INT  LRPASIM_rowwidth;
A68_INT  MRPASIM_startpad;
A68_32  NRPASIM;  /* OPERATORS - trim index */
A68_32  ORPASIM;  /* OPERATORS - trim index */
A68_32  PRPASIM;  /* YIELD */
A68_32  QRPASIM;  /* OPERATORS - assign op */
A68_INT  RRPASIM;  /* YIELD */
A68_INT * SRPASIM;  /* YIELD */
A68_INT  TRPASIM;  /* YIELD */
A68_INT * URPASIM;  /* YIELD */
A68_INT  VRPASIM;  /* YIELD */
A68_INT  WRPASIM;  /* YIELD */
A68_INT * XRPASIM;  /* YIELD */
A68_INT  YRPASIM;  /* YIELD */
A68_INT * ZRPASIM;  /* YIELD */
A68_INT  ASPASIM_i;
A68_INT  BSPASIM;  /* to part of loop */
A68_INT * CSPASIM;  /* YIELD */
A68_155 * DSPASIM_st;
A68_155 * ESPASIM_scan;
A68_INT  FSPASIM_elemstart;
A68_152  GSPASIM_elemtype;
A68_INT  HSPASIM_elemwidth;
A68_32  ISPASIM;  /* OPERATORS - trim index */
A_PROC_ENTRY(compresssizes);
 /* line 947: */
 /* line 948: */
GRPASIM = Hint ;
switch ( GRPASIM.mode )
{ 
case 4: /* REF STRUCT(INT,MODE152)  */
HRPASIM_sr = (GRPASIM.data.mode4);
 /* line 949: */
 /* line 951: */
if ( ((*(&(HRPASIM_sr->No)))>=2) )
{ 
IRPASIM_elemtype = (*(&(HRPASIM_sr->Type)));
 /* line 952: */
JRPASIM_elemwidth = DCOASIM_rawsignalwidth(IRPASIM_elemtype);
 /* line 953: */
FRPASIM_compresssizes(A_VTRIM(KRPASIM,(Sizes),A_VTSCRIPT(&(KRPASIM.upb),(Sizes).upb,1,JRPASIM_elemwidth)), IRPASIM_elemtype);
 /* line 956: */
LRPASIM_rowwidth = ((*(&(HRPASIM_sr->No)))*JRPASIM_elemwidth);
 /* line 957: */
 /* line 958: */
 /* line 959: */
if ( (JRPASIM_elemwidth>1) )
{ 
PRPASIM = A_VTRIM(NRPASIM,(Sizes),A_VTSCRIPT(&(NRPASIM.upb),(Sizes).upb,3,(JRPASIM_elemwidth+2))) ;
QRPASIM = A_VTRIM(ORPASIM,(Sizes),A_VTSCRIPT(&(ORPASIM.upb),(Sizes).upb,1,JRPASIM_elemwidth)) ;
A_VASSIGN2(QRPASIM,PRPASIM,A68_INT );
 /* line 960: */
RRPASIM = 1 ;
SRPASIM = (&A_VINDEX(Sizes,RRPASIM)) ;
(*SRPASIM) = (-(*(&(HRPASIM_sr->No))));
 /* line 961: */
TRPASIM = 2 ;
URPASIM = (&A_VINDEX(Sizes,TRPASIM)) ;
(*URPASIM) = (-JRPASIM_elemwidth);
 /* line 962: */
 /* line 963: */
 /* line 964: */
MRPASIM_startpad = (JRPASIM_elemwidth+3);
} 
else
{ 
VRPASIM = 2 ;
WRPASIM = 1 ;
XRPASIM = (&A_VINDEX(Sizes,VRPASIM)) ;
(*XRPASIM) = (*(&A_VINDEX(Sizes,WRPASIM)));
 /* line 965: */
YRPASIM = 1 ;
ZRPASIM = (&A_VINDEX(Sizes,YRPASIM)) ;
(*ZRPASIM) = (-(*(&(HRPASIM_sr->No))));
 /* line 966: */
 /* line 967: */
MRPASIM_startpad = 3;
} 
 /* line 968: */
BSPASIM = LRPASIM_rowwidth;
for ( ASPASIM_i = MRPASIM_startpad;
ASPASIM_i <= BSPASIM;
ASPASIM_i += 1 )
{ 
 /* line 969: */
 /* line 970: */
CSPASIM = (&A_VINDEX(Sizes,ASPASIM_i)) ;
(*CSPASIM) = 0;
}
 /* line 971: */
 /* line 973: */
} 
else
{ 
 /* line 974: */
/*SKIP*/;
} 
break;
case 7: /* REF STRUCT(MODE152,REF MODE155)  */
DSPASIM_st = (GRPASIM.data.mode7);
 /* line 975: */
 /* line 977: */
{ 
ESPASIM_scan = DSPASIM_st;
 /* line 978: */
FSPASIM_elemstart = 1;
 /* line 979: */
for ( ;; )
{ 
 /* line 980: */
if ( !((ESPASIM_scan!=WSAASIM_nilsst)) ) break;
GSPASIM_elemtype = (*(&(ESPASIM_scan->T)));
 /* line 981: */
HSPASIM_elemwidth = DCOASIM_rawsignalwidth(GSPASIM_elemtype);
 /* line 982: */
 /* line 983: */
FRPASIM_compresssizes(A_VTRIM(ISPASIM,(Sizes),A_VTSCRIPT(&(ISPASIM.upb),(Sizes).upb,FSPASIM_elemstart,((FSPASIM_elemstart+HSPASIM_elemwidth)-1))), GSPASIM_elemtype);
 /* line 984: */
FSPASIM_elemstart+=HSPASIM_elemwidth;
 /* line 985: */
 /* line 986: */
ESPASIM_scan = (*(&(ESPASIM_scan->Rest)));
}
 /* line 1012: */
 /* line 1013: */
 /* line 1014: */
 /* line 1016: */
/*SKIP*/;
} 
break;
default: 
/*SKIP*/;
break;
} 
A_PROC_EXIT(compresssizes);
return;
} 
#undef NL
 /* line 1027: */

A68_VOID  PSPASIM_translatecopyinputs(A68_32  Inputtypes, A68_INT  Inoffset, A68_152  Outtype, A68_INT  Outoffset, A68_INT  Flagadjust, A68_INT  D)
{ 
A68_33  RSPASIM_generator;   /* proc value of non-global proc */
A68_32  XSPASIM;  /* avoid structure result */
A68_32  WSPASIM_sizes;
A68_INT  YSPASIM_t;
A68_INT * ZSPASIM_s;
A68_INT * ATPASIM;  /* forall control - []x */
A68_INT  BTPASIM;  /* forall loop counter */
A_PROC_ENTRY(translatecopyinputs);
 /* line 1028: */
 /* line 1029: */
{ 
A_CLOSURE( RSPASIM_generator, SSPASIM_generator, TSPASIM_generator );
(( TSPASIM_generator * ) ( RSPASIM_generator.nonlocals )) -> Inputtypes = Inputtypes;
A_CALLPROC(RSPASIM_generator,(A68_TRUE, &XSPASIM),(A68_TRUE, &XSPASIM,(RSPASIM_generator).nonlocals));
WSPASIM_sizes = XSPASIM;
 /* line 1030: */
BTPASIM = Inputtypes.upb -1;
if ( BTPASIM != WSPASIM_sizes.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
ATPASIM = Inputtypes.data;
ZSPASIM_s = WSPASIM_sizes.data;
for (;BTPASIM-- >= 0;
(ATPASIM++
,ZSPASIM_s++
) )
{
YSPASIM_t = *ATPASIM;
 /* line 1031: */
 /* line 1032: */
(*ZSPASIM_s) = YGCASIM_lookuptypesize(YSPASIM_t);
}
 /* line 1033: */
FRPASIM_compresssizes(WSPASIM_sizes, Outtype);
 /* line 1035: */
WUNASIM_amlocal((D-1));
 /* line 1036: */
WUNASIM_amlocal(D);
 /* line 1038: */
VPPASIM_translatesomeinputs(WSPASIM_sizes, Inoffset, Outoffset, Flagadjust, (D+2));
 /* line 1040: */
 /* line 1041: */
TUNASIM_amdrop(2);
} 
A_PROC_EXIT(translatecopyinputs);
return;
} 
#undef NL
 /* line 1054: */

A68_VOID  ITPASIM_translatecopytrimmedinputs(A68_32  Inputsizes, A68_32  Inputpostoffsets, A68_INT  Inoffset, A68_INT  Outoffset, A68_INT  Flagadjust, A68_INT  D)
{ 
A68_INT  JTPASIM_getfrom;
A68_INT  KTPASIM_writeto;
A68_INT  LTPASIM_i;
A68_INT  MTPASIM;  /* to part of loop */
A68_INT  NTPASIM_postoffset;
A68_INT  OTPASIM_size;
A68_INT  PTPASIM_dd;
A_PROC_ENTRY(translatecopytrimmedinputs);
 /* line 1055: */
 /* line 1056: */
{ 
JTPASIM_getfrom = Inoffset;
 /* line 1057: */
KTPASIM_writeto = Outoffset;
 /* line 1058: */
MTPASIM = Inputsizes.upb;
for ( LTPASIM_i = 1;
LTPASIM_i <= MTPASIM;
LTPASIM_i += 1 )
{ 
 /* line 1059: */
NTPASIM_postoffset = A_VINDEX(Inputpostoffsets,LTPASIM_i);
 /* line 1060: */
OTPASIM_size = A_VINDEX(Inputsizes,LTPASIM_i);
 /* line 1061: */
WUNASIM_amlocal((D-1));
 /* line 1062: */
QUNASIM_ampushint(KTPASIM_writeto);
 /* line 1063: */
SSNASIM_amadd();
 /* line 1064: */
PTPASIM_dd = (D+1);
 /* line 1067: */
 /* line 1068: */
if ( (OTPASIM_size!=DENASIM_ws) )
{ 
QUNASIM_ampushint(0);
 /* line 1069: */
 /* line 1070: */
PTPASIM_dd+=1;
} 
 /* line 1071: */
WUNASIM_amlocal((PTPASIM_dd-1));
 /* line 1072: */
QUNASIM_ampushint(JTPASIM_getfrom);
 /* line 1073: */
SSNASIM_amadd();
 /* line 1074: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 1075: */
QUNASIM_ampushint(NTPASIM_postoffset);
 /* line 1076: */
SSNASIM_amadd();
 /* line 1077: */
 /* line 1078: */
if ( (OTPASIM_size==DENASIM_ws) )
{ 
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 1079: */
NPPASIM_translatecompareandsetflag(OTPASIM_size, 1, Flagadjust, (D+2));
 /* line 1080: */
 /* line 1081: */
 /* line 1082: */
FVNASIM_amstore(DENASIM_ws, ONFASIM_indirect);
} 
else
{ 
LVNASIM_ambstring((CENASIM_bitsperbyte*OTPASIM_size), (CENASIM_bitsperbyte*OTPASIM_size), ONFASIM_indirect);
 /* line 1083: */
NPPASIM_translatecompareandsetflag(OTPASIM_size, 1, Flagadjust, (D+2));
 /* line 1084: */
 /* line 1085: */
QVNASIM_ambstore((CENASIM_bitsperbyte*OTPASIM_size), ONFASIM_indirect);
} 
 /* line 1086: */
JTPASIM_getfrom+=DENASIM_ws;
 /* line 1087: */
 /* line 1088: */
KTPASIM_writeto+=OTPASIM_size;
}
 /* line 1089: */
} 
A_PROC_EXIT(translatecopytrimmedinputs);
return;
} 
#undef NL
 /* line 1097: */

A68_VOID  VTPASIM_translatecopyvalue(A68_INT  Type, A68_INT  Inoffset, A68_INT  Outoffset, A68_INT  Flagadjust, A68_INT  D)
{ 
A68_INT  WTPASIM_size;
A_PROC_ENTRY(translatecopyvalue);
 /* line 1098: */
 /* line 1099: */
{ 
WTPASIM_size = YGCASIM_lookuptypesize(Type);
 /* line 1100: */
WUNASIM_amlocal((D-1));
 /* line 1101: */
QUNASIM_ampushint(Outoffset);
 /* line 1102: */
SSNASIM_amadd();
 /* line 1103: */
 /* line 1104: */
if ( (WTPASIM_size==DENASIM_ws) )
{ 
 /* line 1105: */
 /* line 1106: */
WUNASIM_amlocal(D);
} 
else
{ 
QUNASIM_ampushint(0);
 /* line 1107: */
 /* line 1108: */
WUNASIM_amlocal((D+1));
} 
 /* line 1109: */
QUNASIM_ampushint(Inoffset);
 /* line 1110: */
SSNASIM_amadd();
 /* line 1111: */
 /* line 1112: */
if ( (WTPASIM_size==DENASIM_ws) )
{ 
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 1113: */
NPPASIM_translatecompareandsetflag(WTPASIM_size, 1, Flagadjust, (D+2));
 /* line 1114: */
 /* line 1115: */
 /* line 1116: */
FVNASIM_amstore(DENASIM_ws, ONFASIM_indirect);
} 
else
{ 
LVNASIM_ambstring((CENASIM_bitsperbyte*WTPASIM_size), (CENASIM_bitsperbyte*WTPASIM_size), ONFASIM_indirect);
 /* line 1117: */
NPPASIM_translatecompareandsetflag(WTPASIM_size, 1, Flagadjust, (D+2));
 /* line 1118: */
 /* line 1119: */
 /* line 1120: */
QVNASIM_ambstore((CENASIM_bitsperbyte*WTPASIM_size), ONFASIM_indirect);
} 
} 
A_PROC_EXIT(translatecopyvalue);
return;
} 
#undef NL
 /* line 1128: */

A68_VOID  CUPASIM_translateoutputconstant(A68_164  Value, A68_INT  Type, A68_INT  Outputoffset, A68_INT  Flagadjust, A68_INT  D)
{ 
A68_152  EUPASIM;  /* avoid structure result */
A68_VC  DUPASIM_encoding;
A68_INT  FUPASIM_width;
A68_116  GUPASIM;  /* avoid structure result */
A68_116  HUPASIM_nochange;
A68_INT  IUPASIM;  /* clause result */
A_PROC_ENTRY(translateoutputconstant);
 /* line 1129: */
 /* line 1130: */
{ 
VGCASIM_lookuptype( Type, &EUPASIM );
DUPASIM_encoding = (*CLOASIM_machine(Value, EUPASIM));
 /* line 1131: */
FUPASIM_width = (CENASIM_bitsperbyte*DUPASIM_encoding.upb);
 /* line 1133: */
WUNASIM_amlocal((D-1));
 /* line 1134: */
QUNASIM_ampushint(Outputoffset);
 /* line 1135: */
SSNASIM_amadd();
 /* line 1142: */
A_CALLPROC(FENASIM_up,(DUPASIM_encoding),(DUPASIM_encoding,(FENASIM_up).nonlocals));
 /* line 1143: */
MUNASIM_ampushstring(FUPASIM_width, DUPASIM_encoding);
 /* line 1145: */
 /* line 1146: */
if ( (Flagadjust==GPPASIM_leaveflag) )
{ 
 /* line 1147: */
 /* line 1148: */
QVNASIM_ambstore(FUPASIM_width, ONFASIM_indirect);
} 
else
{ 
YFNASIM_newlabel(  &GUPASIM );
HUPASIM_nochange = GUPASIM;
 /* line 1149: */
QUNASIM_ampushint(0);
 /* line 1150: */
WUNASIM_amlocal(2);
 /* line 1151: */
LVNASIM_ambstring(FUPASIM_width, FUPASIM_width, ONFASIM_indirect);
 /* line 1152: */
WUNASIM_amlocal(1);
 /* line 1153: */
UTNASIM_amneq();
 /* line 1154: */
IWNASIM_amjumpno(2, HUPASIM_nochange);
 /* line 1156: */
QVNASIM_ambstore(FUPASIM_width, ONFASIM_indirect);
 /* line 1157: */
WUNASIM_amlocal((D-1));
 /* line 1158: */
if ( (Flagadjust==IPPASIM_resetflag) )
{ 
IUPASIM = 0;
} 
else
{ 
IUPASIM = 1;
} 
QUNASIM_ampushint(IUPASIM);
 /* line 1159: */
FVNASIM_amstore(DENASIM_ws, ONFASIM_indirect);
 /* line 1161: */
 /* line 1162: */
 /* line 1163: */
NWNASIM_amlabel(D, HUPASIM_nochange);
} 
} 
A_PROC_EXIT(translateoutputconstant);
return;
} 
#undef NL

A68_VOID  PUPASIM_translatesetreplicatedconstant(A68_164  Value, A68_152  Type, A68_INT  Flagadjust, A68_INT  Outputoffset, A68_INT  Count, A68_INT  D)
{ 
A68_VC  QUPASIM_encoding;
A68_INT  RUPASIM_bytesize;
A68_INT  SUPASIM_bitsize;
A_PROC_ENTRY(translatesetreplicatedconstant);
 /* line 1172: */
 /* line 1175: */
if ( (Count!=0) )
{ 
QUPASIM_encoding = (*CLOASIM_machine(Value, Type));
 /* line 1176: */
RUPASIM_bytesize = QUPASIM_encoding.upb;
 /* line 1177: */
SUPASIM_bitsize = (CENASIM_bitsperbyte*RUPASIM_bytesize);
 /* line 1179: */
WUNASIM_amlocal((D-1));
 /* line 1180: */
QUNASIM_ampushint(Outputoffset);
 /* line 1181: */
SSNASIM_amadd();
 /* line 1182: */
WUNASIM_amlocal(0);
 /* line 1183: */
QUNASIM_ampushint((RUPASIM_bytesize*(Count-1)));
 /* line 1184: */
SSNASIM_amadd();
 /* line 1185: */
QWNASIM_amrepeat();
 /* line 1186: */
WUNASIM_amlocal(0);
 /* line 1193: */
A_CALLPROC(FENASIM_up,(QUPASIM_encoding),(QUPASIM_encoding,(FENASIM_up).nonlocals));
 /* line 1194: */
MUNASIM_ampushstring(SUPASIM_bitsize, QUPASIM_encoding);
 /* line 1195: */
 /* line 1197: */
if ( (RUPASIM_bytesize==DENASIM_ws) )
{ 
ZVNASIM_amstoi();
} 
 /* line 1198: */
 /* line 1199: */
if ( (Flagadjust!=GPPASIM_leaveflag) )
{ 
 /* line 1200: */
NPPASIM_translatecompareandsetflag(RUPASIM_bytesize, 2, Flagadjust, (D+4));
} 
 /* line 1201: */
 /* line 1202: */
if ( (RUPASIM_bytesize==DENASIM_ws) )
{ 
 /* line 1203: */
 /* line 1204: */
FVNASIM_amstore(RUPASIM_bytesize, ONFASIM_indirect);
} 
else
{ 
 /* line 1205: */
QVNASIM_ambstore(SUPASIM_bitsize, ONFASIM_indirect);
} 
 /* line 1206: */
QUNASIM_ampushint(RUPASIM_bytesize);
 /* line 1207: */
USNASIM_amsub();
 /* line 1208: */
WUNASIM_amlocal(0);
 /* line 1209: */
WUNASIM_amlocal(2);
 /* line 1210: */
YTNASIM_amge();
 /* line 1211: */
SWNASIM_amloop();
 /* line 1212: */
 /* line 1213: */
TUNASIM_amdrop(2);
} 
A_PROC_EXIT(translatesetreplicatedconstant);
return;
} 
#undef NL

A_STATIC A68_VOID  TUPASIM_translateidsupport(void)
{ 
A68_114 * UUPASIM_params;
A68_114  VUPASIM;  /* collateral clause result */
A68_114  WUPASIM;  /* collateral clause result */
A68_114  XUPASIM;  /* collateral clause result */
A68_114  YUPASIM;  /* collateral clause result */
A68_114  ZUPASIM;  /* collateral clause result */
A68_114 * AVPASIM;  /* YIELD */
A68_114 * BVPASIM;  /* YIELD */
A68_114 * CVPASIM;  /* YIELD */
A68_114 * DVPASIM;  /* YIELD */
A68_114 * EVPASIM_results;
A68_116  HVPASIM;  /* avoid structure result */
A_PROC_ENTRY(translateidsupport);
{ 
UUPASIM_params = (A_HEAP(A68_114 ));
VUPASIM.Head.Sort = GXFASIM_instanceptr;
VUPASIM.Head.Size = 0;
 /* line 1266: */
WUPASIM.Head.Sort = IXFASIM_integer;
WUPASIM.Head.Size = 0;
 /* line 1267: */
XUPASIM.Head.Sort = IXFASIM_integer;
XUPASIM.Head.Size = 0;
 /* line 1268: */
YUPASIM.Head.Sort = IXFASIM_integer;
YUPASIM.Head.Size = 0;
 /* line 1269: */
ZUPASIM.Head.Sort = IXFASIM_integer;
ZUPASIM.Head.Size = 0;
ZUPASIM.Tail = GYFASIM_nilparams;
AVPASIM = A_HEAP(A68_114 ) ;
(*AVPASIM) = ZUPASIM ;
YUPASIM.Tail = AVPASIM;
BVPASIM = A_HEAP(A68_114 ) ;
(*BVPASIM) = YUPASIM ;
XUPASIM.Tail = BVPASIM;
CVPASIM = A_HEAP(A68_114 ) ;
(*CVPASIM) = XUPASIM ;
WUPASIM.Tail = CVPASIM;
DVPASIM = A_HEAP(A68_114 ) ;
(*DVPASIM) = WUPASIM ;
VUPASIM.Tail = DVPASIM;
(*UUPASIM_params) = VUPASIM;
 /* line 1270: */
EVPASIM_results = UUPASIM_params;
 /* line 1271: */
YLFASIM_label( GVPASIM, &HVPASIM );
PXNASIM_amgeneratenamedcode(HVPASIM, UUPASIM_params, EVPASIM_results);
 /* line 1275: */
WUNASIM_amlocal(2);
 /* line 1276: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 1278: */
WUNASIM_amlocal(1);
 /* line 1279: */
WUNASIM_amlocal(3);
 /* line 1280: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 1284: */
QWNASIM_amrepeat();
 /* line 1285: */
QUNASIM_ampushint(GENASIM_sizeunit);
 /* line 1286: */
USNASIM_amsub();
 /* line 1288: */
WUNASIM_amlocal(1);
 /* line 1289: */
WUNASIM_amlocal(1);
 /* line 1290: */
SSNASIM_amadd();
 /* line 1292: */
WUNASIM_amlocal(3);
 /* line 1293: */
WUNASIM_amlocal(2);
 /* line 1294: */
SSNASIM_amadd();
 /* line 1295: */
AVNASIM_amglobal(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 1299: */
WUNASIM_amlocal(0);
 /* line 1300: */
WUNASIM_amlocal(2);
 /* line 1301: */
AVNASIM_amglobal(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 1302: */
UTNASIM_amneq();
 /* line 1304: */
IWNASIM_amjumpno(2, CHPASIM_unchangedoutputlabel);
 /* line 1305: */
WUNASIM_amlocal(9);
 /* line 1307: */
QUNASIM_ampushint(0);
 /* line 1308: */
FVNASIM_amstore(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 1309: */
FVNASIM_amstore(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 1311: */
NWNASIM_amlabel(8, CHPASIM_unchangedoutputlabel);
 /* line 1313: */
WUNASIM_amlocal(0);
 /* line 1314: */
QTNASIM_amtest();
 /* line 1315: */
SWNASIM_amloop();
 /* line 1317: */
TUNASIM_amdrop(1);
 /* line 1318: */
WUNASIM_amlocal(6);
 /* line 1320: */
WUNASIM_amlocal(6);
 /* line 1321: */
QUNASIM_ampushint(1);
 /* line 1322: */
USNASIM_amsub();
 /* line 1324: */
WUNASIM_amlocal(6);
 /* line 1325: */
QUNASIM_ampushint(DENASIM_ws);
 /* line 1326: */
SSNASIM_amadd();
 /* line 1328: */
WUNASIM_amlocal(6);
 /* line 1329: */
QUNASIM_ampushint(DENASIM_ws);
 /* line 1330: */
SSNASIM_amadd();
 /* line 1332: */
WUNASIM_amlocal(6);
 /* line 1333: */
WUNASIM_amlocal(8);
 /* line 1334: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 1335: */
SSNASIM_amadd();
 /* line 1337: */
 /* line 1340: */
KXNASIM_amret(5);
} 
A_PROC_EXIT(translateidsupport);
return;
} 
#undef NL

A_STATIC A68_VOID  KVPASIM_translategenericendfunction(A68_INT  D, A68_INT  Finalflag)
{ 
A68_118  LVPASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(translategenericendfunction);
 /* line 1363: */
 /* line 1364: */
{ 
TUNASIM_amdrop((D-2));
 /* line 1366: */
WUNASIM_amlocal(1);
 /* line 1367: */
AVNASIM_amglobal(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 1368: */
QTNASIM_amtest();
 /* line 1369: */
IUNASIM_amnot();
 /* line 1370: */
IWNASIM_amjumpno(1, CHPASIM_unchangedoutputlabel);
 /* line 1373: */
 /* line 1374: */
if ( (Finalflag==1) )
{ 
WUNASIM_amlocal(1);
 /* line 1375: */
QUNASIM_ampushint(1);
 /* line 1376: */
 /* line 1377: */
FVNASIM_amstore(GENASIM_sizeunit, ONFASIM_indirect);
} 
 /* line 1379: */
QUNASIM_ampushint((2*DENASIM_ws));
 /* line 1380: */
WSNASIM_ammul();
 /* line 1381: */
QUNASIM_ampushint((GENASIM_sizeunit+DENASIM_ws));
 /* line 1382: */
SSNASIM_amadd();
 /* line 1383: */
SSNASIM_amadd();
 /* line 1385: */
WUNASIM_amlocal(0);
 /* line 1386: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 1387: */
SSNASIM_amadd();
 /* line 1388: */
QUNASIM_ampushint(DENASIM_ws);
 /* line 1389: */
SSNASIM_amadd();
 /* line 1390: */
HXNASIM_amfanout(0);
 /* line 1393: */
QUNASIM_ampushint(1);
 /* line 1394: */
FVNASIM_amstore(DENASIM_ws, A_UNITE(LVPASIM,mode2,2,KBPASIM_globaliterationslabel));
 /* line 1396: */
KXNASIM_amret(0);
 /* line 1398: */
NWNASIM_amlabel(1, CHPASIM_unchangedoutputlabel);
 /* line 1400: */
 /* line 1401: */
if ( (Finalflag==0) )
{ 
QUNASIM_ampushint(0);
 /* line 1402: */
 /* line 1403: */
FVNASIM_amstore(GENASIM_sizeunit, ONFASIM_indirect);
} 
 /* line 1404: */
 /* line 1405: */
KXNASIM_amret(0);
} 
A_PROC_EXIT(translategenericendfunction);
return;
} 
#undef NL

A68_VOID  MVPASIM_translategenericidentity(void)
{ 
A68_114  NVPASIM;  /* collateral clause result */
A68_114  OVPASIM;  /* collateral clause result */
A68_VC  RVPASIM;  /* avoid structure result */
A68_VC  SVPASIM_genericidcode;
A68_INT * TVPASIM;  /* YIELD */
A_PROC_ENTRY(translategenericidentity);
{ 
NVPASIM.Head.Sort = GXFASIM_instanceptr;
NVPASIM.Head.Size = 0;
NVPASIM.Tail = GYFASIM_nilparams;
INPASIM_instptr = NVPASIM;
 /* line 1411: */
OVPASIM.Head.Sort = IXFASIM_integer;
OVPASIM.Head.Size = 0;
OVPASIM.Tail = GYFASIM_nilparams;
JNPASIM_intinstptr = OVPASIM;
 /* line 1413: */
TUPASIM_translateidsupport();
 /* line 1417: */
RSCAOST_makeid( QVPASIM, &RVPASIM );
SVPASIM_genericidcode = RVPASIM;
 /* line 1418: */
TVPASIM = (&((&TNPASIM_instlab)->Lab)) ;
(*TVPASIM) = ((NRCASIM_lookupname(SVPASIM_genericidcode, 0, (-1))-1)*4);
 /* line 1419: */
PXNASIM_amgeneratenamedcode(TNPASIM_instlab, (&INPASIM_instptr), GYFASIM_nilparams);
 /* line 1420: */
EXNASIM_amenter();
 /* line 1421: */
WUNASIM_amlocal(0);
 /* line 1422: */
QUNASIM_ampushint(GENASIM_sizeunit);
 /* line 1423: */
SSNASIM_amadd();
 /* line 1424: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 1428: */
WUNASIM_amlocal(1);
 /* line 1429: */
WUNASIM_amlocal(1);
 /* line 1431: */
WUNASIM_amlocal(3);
 /* line 1432: */
QUNASIM_ampushint((GENASIM_sizeunit+DENASIM_ws));
 /* line 1433: */
SSNASIM_amadd();
 /* line 1435: */
WUNASIM_amlocal(0);
 /* line 1436: */
WUNASIM_amlocal(4);
 /* line 1437: */
QUNASIM_ampushint(DENASIM_ws);
 /* line 1438: */
WSNASIM_ammul();
 /* line 1439: */
SSNASIM_amadd();
 /* line 1441: */
WUNASIM_amlocal(0);
 /* line 1442: */
WUNASIM_amlocal(5);
 /* line 1443: */
QUNASIM_ampushint(DENASIM_ws);
 /* line 1444: */
WSNASIM_ammul();
 /* line 1445: */
SSNASIM_amadd();
 /* line 1447: */
QUNASIM_ampushint(DENASIM_ws);
 /* line 1448: */
SSNASIM_amadd();
 /* line 1453: */
QWNASIM_amrepeat();
 /* line 1455: */
BXNASIM_amcall(5, ECPASIM_idsupportcodelabel);
 /* line 1456: */
WUNASIM_amlocal(3);
 /* line 1457: */
QTNASIM_amtest();
 /* line 1459: */
SWNASIM_amloop();
 /* line 1461: */
 /* line 1462: */
KVPASIM_translategenericendfunction(7, 0);
} 
A_PROC_EXIT(translategenericidentity);
return;
} 
#undef NL

A68_VOID  UVPASIM_translatecleargenericid(void)
{ 
A68_114 * VVPASIM_instptr;
A68_114  WVPASIM;  /* collateral clause result */
A68_116  ZVPASIM;  /* avoid structure result */
A_PROC_ENTRY(translatecleargenericid);
{ 
VVPASIM_instptr = (A_HEAP(A68_114 ));
WVPASIM.Head.Sort = IXFASIM_integer;
WVPASIM.Head.Size = 0;
WVPASIM.Tail = GYFASIM_nilparams;
(*VVPASIM_instptr) = WVPASIM;
 /* line 1486: */
YLFASIM_label( YVPASIM, &ZVPASIM );
PXNASIM_amgeneratenamedcode(ZVPASIM, VVPASIM_instptr, GYFASIM_nilparams);
 /* line 1488: */
WUNASIM_amlocal(0);
 /* line 1489: */
QUNASIM_ampushint(1);
 /* line 1490: */
FVNASIM_amstore(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 1492: */
WUNASIM_amlocal(0);
 /* line 1493: */
QUNASIM_ampushint(GENASIM_sizeunit);
 /* line 1494: */
SSNASIM_amadd();
 /* line 1495: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 1496: */
WUNASIM_amlocal(0);
 /* line 1498: */
QUNASIM_ampushint((2*DENASIM_ws));
 /* line 1499: */
WSNASIM_ammul();
 /* line 1500: */
QUNASIM_ampushint((GENASIM_sizeunit+(2*DENASIM_ws)));
 /* line 1501: */
SSNASIM_amadd();
 /* line 1502: */
WUNASIM_amlocal(2);
 /* line 1503: */
SSNASIM_amadd();
 /* line 1505: */
WUNASIM_amlocal(0);
 /* line 1506: */
QUNASIM_ampushint(DENASIM_ws);
 /* line 1507: */
USNASIM_amsub();
 /* line 1508: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 1511: */
QWNASIM_amrepeat();
 /* line 1512: */
QUNASIM_ampushint(GENASIM_sizeunit);
 /* line 1513: */
USNASIM_amsub();
 /* line 1514: */
WUNASIM_amlocal(1);
 /* line 1515: */
WUNASIM_amlocal(1);
 /* line 1516: */
SSNASIM_amadd();
 /* line 1518: */
WUNASIM_amlocal(0);
 /* line 1519: */
AVNASIM_amglobal(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 1520: */
QTNASIM_amtest();
 /* line 1521: */
IWNASIM_amjumpno(1, XHPASIM_oldresultlabel);
 /* line 1523: */
WUNASIM_amlocal(4);
 /* line 1524: */
QUNASIM_ampushint(0);
 /* line 1525: */
FVNASIM_amstore(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 1527: */
QUNASIM_ampushint(0);
 /* line 1528: */
FVNASIM_amstore(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 1530: */
NWNASIM_amlabel(4, XHPASIM_oldresultlabel);
 /* line 1531: */
WUNASIM_amlocal(0);
 /* line 1532: */
QTNASIM_amtest();
 /* line 1533: */
SWNASIM_amloop();
 /* line 1536: */
 /* line 1537: */
KVPASIM_translategenericendfunction(4, 1);
} 
A_PROC_EXIT(translatecleargenericid);
return;
} 
#undef NL

A68_VOID  CWPASIM_translatedatasource(A68_INT  Width, A68_VC  Name, A68_200  *ReturnedValue)
{ 
A68_INT  DWPASIM_offset;
A68_INT  EWPASIM_size;
A68_200  FWPASIM;  /* collateral clause result */
A68_200  GWPASIM;  /* clause result */
A_PROC_ENTRY(translatedatasource);
 /* line 1547: */
 /* line 1548: */
{ 
DWPASIM_offset = (DENASIM_ws+GENASIM_sizeunit);
 /* line 1549: */
EWPASIM_size = (DWPASIM_offset+Width);
 /* line 1550: */
DOPASIM_translatestartfunction(Name);
 /* line 1551: */
WUNASIM_amlocal(0);
 /* line 1552: */
HXNASIM_amfanout(EWPASIM_size);
 /* line 1553: */
QUNASIM_ampushint(0);
 /* line 1554: */
FVNASIM_amstore(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 1555: */
KXNASIM_amret(0);
 /* line 1556: */
FWPASIM.Size = EWPASIM_size;
FWPASIM.Offset = DWPASIM_offset;
 /* line 1557: */
FWPASIM.Sort = IHCASIM_combinatorial;
GWPASIM = FWPASIM;
} 
A_PROC_EXIT(translatedatasource);
*ReturnedValue = (GWPASIM);
return;
} 
#undef NL

A68_VOID  JWPASIM_translateprobeid(A68_32  Inputsizes, A68_VC  Name, A68_200  *ReturnedValue)
{ 
A68_INT  KWPASIM_offset;
A68_INT  LWPASIM_size;
A68_INT  MWPASIM_i;
A68_INT  NWPASIM;  /* to part of loop */
A68_VC  QWPASIM;  /* avoid structure result */
A68_VC  RWPASIM_genericidcode;
A68_INT * SWPASIM;  /* YIELD */
A68_200  TWPASIM;  /* collateral clause result */
A68_200  UWPASIM;  /* clause result */
A_PROC_ENTRY(translateprobeid);
 /* line 1566: */
 /* line 1567: */
{ 
KWPASIM_offset = (DENASIM_ws+GENASIM_sizeunit);
 /* line 1568: */
LWPASIM_size = 0;
 /* line 1569: */
NWPASIM = Inputsizes.upb;
for ( MWPASIM_i = 1;
MWPASIM_i <= NWPASIM;
MWPASIM_i += 1 )
{ 
 /* line 1570: */
LWPASIM_size+=A_VINDEX(Inputsizes,MWPASIM_i);
 /* line 1571: */
 /* line 1572: */
KWPASIM_offset+=(2*DENASIM_ws);
}
 /* line 1573: */
KWPASIM_offset+=DENASIM_ws;
 /* line 1574: */
LWPASIM_size+=KWPASIM_offset;
 /* line 1576: */
DOPASIM_translatestartfunction(Name);
 /* line 1577: */
RSCAOST_makeid( PWPASIM, &QWPASIM );
RWPASIM_genericidcode = QWPASIM;
 /* line 1578: */
SWPASIM = (&((&TNPASIM_instlab)->Lab)) ;
(*SWPASIM) = ((NRCASIM_lookupname(RWPASIM_genericidcode, 0, (-1))-1)*4);
 /* line 1579: */
BXNASIM_amcall(1, TNPASIM_instlab);
 /* line 1580: */
KXNASIM_amret(0);
 /* line 1581: */
TWPASIM.Size = LWPASIM_size;
TWPASIM.Offset = KWPASIM_offset;
 /* line 1582: */
TWPASIM.Sort = IHCASIM_combinatorial;
UWPASIM = TWPASIM;
} 
A_PROC_EXIT(translateprobeid);
*ReturnedValue = (UWPASIM);
return;
} 
#undef NL

A68_VOID  VWPASIM_translategenericquery(void)
{ 
A68_114 * WWPASIM_params;
A68_114  XWPASIM;  /* collateral clause result */
A68_114  YWPASIM;  /* collateral clause result */
A68_114  ZWPASIM;  /* collateral clause result */
A68_114 * AXPASIM;  /* YIELD */
A68_114 * BXPASIM;  /* YIELD */
A68_114 * CXPASIM_results;
A68_116  FXPASIM;  /* avoid structure result */
A_PROC_ENTRY(translategenericquery);
{ 
WWPASIM_params = (A_HEAP(A68_114 ));
XWPASIM.Head.Sort = GXFASIM_instanceptr;
XWPASIM.Head.Size = 0;
 /* line 1600: */
YWPASIM.Head.Sort = IXFASIM_integer;
YWPASIM.Head.Size = 0;
 /* line 1601: */
ZWPASIM.Head.Sort = IXFASIM_integer;
ZWPASIM.Head.Size = 0;
ZWPASIM.Tail = GYFASIM_nilparams;
AXPASIM = A_HEAP(A68_114 ) ;
(*AXPASIM) = ZWPASIM ;
YWPASIM.Tail = AXPASIM;
BXPASIM = A_HEAP(A68_114 ) ;
(*BXPASIM) = YWPASIM ;
XWPASIM.Tail = BXPASIM;
(*WWPASIM_params) = XWPASIM;
 /* line 1602: */
CXPASIM_results = WWPASIM_params;
 /* line 1603: */
YLFASIM_label( EXPASIM, &FXPASIM );
PXNASIM_amgeneratenamedcode(FXPASIM, WWPASIM_params, CXPASIM_results);
 /* line 1608: */
QWNASIM_amrepeat();
 /* line 1610: */
QUNASIM_ampushint(GENASIM_sizeunit);
 /* line 1611: */
USNASIM_amsub();
 /* line 1614: */
WUNASIM_amlocal(2);
 /* line 1615: */
WUNASIM_amlocal(2);
 /* line 1616: */
SSNASIM_amadd();
 /* line 1617: */
WUNASIM_amlocal(1);
 /* line 1618: */
SSNASIM_amadd();
 /* line 1621: */
WUNASIM_amlocal(0);
 /* line 1622: */
AVNASIM_amglobal(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 1623: */
QTNASIM_amtest();
 /* line 1624: */
IWNASIM_amjumpno(1, CHPASIM_unchangedoutputlabel);
 /* line 1629: */
WUNASIM_amlocal(3);
 /* line 1630: */
QUNASIM_ampushint(0);
 /* line 1631: */
FVNASIM_amstore(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 1632: */
QUNASIM_ampushint(0);
 /* line 1633: */
FVNASIM_amstore(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 1636: */
NWNASIM_amlabel(3, CHPASIM_unchangedoutputlabel);
 /* line 1637: */
WUNASIM_amlocal(0);
 /* line 1638: */
QTNASIM_amtest();
 /* line 1639: */
SWNASIM_amloop();
 /* line 1643: */
 /* line 1644: */
KXNASIM_amret(3);
} 
A_PROC_EXIT(translategenericquery);
return;
} 
#undef NL

A68_VOID  IXPASIM_translatesetnextevent(A68_INT  Thiseventoffset, A68_INT  D)
{ 
A68_116  JXPASIM;  /* avoid structure result */
A68_116  KXPASIM_nexteventisearlier;
A68_116  LXPASIM;  /* avoid structure result */
A68_116  MXPASIM_thiseventgone;
A68_118  NXPASIM;  /* OPERATORS - mode -> union mode */
A68_118  OXPASIM;  /* OPERATORS - mode -> union mode */
A68_118  PXPASIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(translatesetnextevent);
 /* line 1650: */
 /* line 1653: */
{ 
YFNASIM_newlabel(  &JXPASIM );
KXPASIM_nexteventisearlier = JXPASIM;
 /* line 1654: */
YFNASIM_newlabel(  &LXPASIM );
MXPASIM_thiseventgone = LXPASIM;
 /* line 1655: */
WUNASIM_amlocal((D-1));
 /* line 1656: */
QUNASIM_ampushint(Thiseventoffset);
 /* line 1657: */
SSNASIM_amadd();
 /* line 1658: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 1661: */
WUNASIM_amlocal(0);
 /* line 1662: */
AVNASIM_amglobal(DENASIM_ws, A_UNITE(NXPASIM,mode2,2,MZOASIM_globaltimelabel));
 /* line 1663: */
WTNASIM_amgt();
 /* line 1664: */
IWNASIM_amjumpno(1, MXPASIM_thiseventgone);
 /* line 1667: */
WUNASIM_amlocal(0);
 /* line 1668: */
AVNASIM_amglobal(DENASIM_ws, A_UNITE(OXPASIM,mode2,2,MEPASIM_globalnexteventlabel));
 /* line 1669: */
AUNASIM_amlt();
 /* line 1670: */
IWNASIM_amjumpno(1, KXPASIM_nexteventisearlier);
 /* line 1673: */
FVNASIM_amstore(DENASIM_ws, A_UNITE(PXPASIM,mode2,2,MEPASIM_globalnexteventlabel));
 /* line 1675: */
NWNASIM_amlabel(D, KXPASIM_nexteventisearlier);
 /* line 1676: */
 /* line 1677: */
 /* line 1679: */
NWNASIM_amlabel(D, MXPASIM_thiseventgone);
} 
A_PROC_EXIT(translatesetnextevent);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void HYOASIM(void)   /* initialise DECS keamstandard */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/keamstandard.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/kesymbols.m","./mfiles/kesignals.m","./mfiles/kebasics.m","./mfiles/keambasics.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_116  DZOASIM;  /* collateral clause result */
A68_VC  JZOASIM;  /* avoid structure result */
A68_VC  LZOASIM;  /* OPERATORS - assign op */
A68_116  NZOASIM;  /* collateral clause result */
A68_VC  TZOASIM;  /* avoid structure result */
A68_VC  VZOASIM;  /* OPERATORS - assign op */
A68_116  XZOASIM;  /* collateral clause result */
A68_VC  DAPASIM;  /* avoid structure result */
A68_VC  FAPASIM;  /* OPERATORS - assign op */
A68_116  HAPASIM;  /* collateral clause result */
A68_VC  NAPASIM;  /* avoid structure result */
A68_VC  PAPASIM;  /* OPERATORS - assign op */
A68_116  RAPASIM;  /* collateral clause result */
A68_VC  XAPASIM;  /* avoid structure result */
A68_VC  ZAPASIM;  /* OPERATORS - assign op */
A68_116  BBPASIM;  /* collateral clause result */
A68_VC  HBPASIM;  /* avoid structure result */
A68_VC  JBPASIM;  /* OPERATORS - assign op */
A68_116  LBPASIM;  /* collateral clause result */
A68_VC  RBPASIM;  /* avoid structure result */
A68_VC  TBPASIM;  /* OPERATORS - assign op */
A68_116  VBPASIM;  /* collateral clause result */
A68_VC  BCPASIM;  /* avoid structure result */
A68_VC  DCPASIM;  /* OPERATORS - assign op */
A68_116  FCPASIM;  /* collateral clause result */
A68_VC  LCPASIM;  /* avoid structure result */
A68_VC  NCPASIM;  /* OPERATORS - assign op */
A68_116  PCPASIM;  /* collateral clause result */
A68_VC  VCPASIM;  /* avoid structure result */
A68_VC  XCPASIM;  /* OPERATORS - assign op */
A68_116  ZCPASIM;  /* collateral clause result */
A68_VC  FDPASIM;  /* avoid structure result */
A68_VC  HDPASIM;  /* OPERATORS - assign op */
A68_116  JDPASIM;  /* collateral clause result */
A68_VC  PDPASIM;  /* avoid structure result */
A68_VC  RDPASIM;  /* OPERATORS - assign op */
A68_116  TDPASIM;  /* collateral clause result */
A68_VC  ZDPASIM;  /* avoid structure result */
A68_VC  BEPASIM;  /* OPERATORS - assign op */
A68_116  DEPASIM;  /* collateral clause result */
A68_VC  JEPASIM;  /* avoid structure result */
A68_VC  LEPASIM;  /* OPERATORS - assign op */
A68_116  NEPASIM;  /* collateral clause result */
A68_VC  TEPASIM;  /* avoid structure result */
A68_VC  VEPASIM;  /* OPERATORS - assign op */
A68_116  XEPASIM;  /* collateral clause result */
A68_VC  DFPASIM;  /* avoid structure result */
A68_VC  FFPASIM;  /* OPERATORS - assign op */
A68_116  HFPASIM;  /* collateral clause result */
A68_VC  NFPASIM;  /* avoid structure result */
A68_VC  PFPASIM;  /* OPERATORS - assign op */
A68_116  RFPASIM;  /* collateral clause result */
A68_VC  XFPASIM;  /* avoid structure result */
A68_VC  ZFPASIM;  /* OPERATORS - assign op */
A68_116  BGPASIM;  /* collateral clause result */
A68_VC  GGPASIM;  /* avoid structure result */
A68_116  IGPASIM;  /* collateral clause result */
A68_VC  NGPASIM;  /* avoid structure result */
A68_116  PGPASIM;  /* collateral clause result */
A68_VC  UGPASIM;  /* avoid structure result */
A68_116  WGPASIM;  /* collateral clause result */
A68_VC  BHPASIM;  /* avoid structure result */
A68_116  DHPASIM;  /* collateral clause result */
A68_VC  IHPASIM;  /* avoid structure result */
A68_116  KHPASIM;  /* collateral clause result */
A68_VC  PHPASIM;  /* avoid structure result */
A68_116  RHPASIM;  /* collateral clause result */
A68_VC  WHPASIM;  /* avoid structure result */
A68_116  YHPASIM;  /* collateral clause result */
A68_VC  DIPASIM;  /* avoid structure result */
A68_116  FIPASIM;  /* collateral clause result */
A68_VC  KIPASIM;  /* avoid structure result */
A68_116  MIPASIM;  /* collateral clause result */
A68_VC  RIPASIM;  /* avoid structure result */
A68_116  TIPASIM;  /* collateral clause result */
A68_VC  YIPASIM;  /* avoid structure result */
A68_116  AJPASIM;  /* collateral clause result */
A68_VC  FJPASIM;  /* avoid structure result */
A68_116  HJPASIM;  /* collateral clause result */
A68_VC  MJPASIM;  /* avoid structure result */
A68_116  OJPASIM;  /* collateral clause result */
A68_VC  TJPASIM;  /* avoid structure result */
A68_116  VJPASIM;  /* collateral clause result */
A68_VC  AKPASIM;  /* avoid structure result */
A68_116  KNPASIM;  /* collateral clause result */
A68_VC  QNPASIM;  /* avoid structure result */
A68_VC  SNPASIM;  /* OPERATORS - assign op */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
TCCASIM();   /* USE kesymbols */
NYNASIM();   /* USE kesignals */
JSAASIM();   /* USE kebasics */
XDNASIM();   /* USE keambasics */
JSCAOST();   /* USE basics */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/keamstandard.a68";
A_config.translation_time = "Tue Apr  4 11:09:00 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "GYOASIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:09:00 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS keamstandard);
UEAALIB_a68config(LGAALIB_configinfo, LYOASIM);
 /* line 98: */
 /* line 99: */
 /* line 100: */
 /* line 101: */
 /* line 102: */
 /* line 103: */
 /* line 104: */
 /* line 105: */
 /* line 106: */
 /* line 107: */
 /* line 108: */
 /* line 109: */
 /* line 110: */
 /* line 111: */
 /* line 112: */
 /* line 113: */
 /* line 114: */
 /* line 126: */
DZOASIM.Lab = 0;
FZOASIM_generator( A68_TRUE, &JZOASIM );
LZOASIM = KZOASIM ;
A_VASSIGN2(LZOASIM,JZOASIM,A68_CHAR ) ;
DZOASIM.Tag = JZOASIM;
MZOASIM_globaltimelabel = DZOASIM;
 /* line 127: */
NZOASIM.Lab = 0;
PZOASIM_generator( A68_TRUE, &TZOASIM );
VZOASIM = UZOASIM ;
A_VASSIGN2(VZOASIM,TZOASIM,A68_CHAR ) ;
NZOASIM.Tag = TZOASIM;
WZOASIM_globalmaxtimelabel = NZOASIM;
 /* line 128: */
XZOASIM.Lab = 0;
ZZOASIM_generator( A68_TRUE, &DAPASIM );
FAPASIM = EAPASIM ;
A_VASSIGN2(FAPASIM,DAPASIM,A68_CHAR ) ;
XZOASIM.Tag = DAPASIM;
GAPASIM_globalinterruptedlabel = XZOASIM;
 /* line 129: */
HAPASIM.Lab = 0;
JAPASIM_generator( A68_TRUE, &NAPASIM );
PAPASIM = OAPASIM ;
A_VASSIGN2(PAPASIM,NAPASIM,A68_CHAR ) ;
HAPASIM.Tag = NAPASIM;
QAPASIM_globalinitialisedlabel = HAPASIM;
 /* line 130: */
RAPASIM.Lab = 0;
TAPASIM_generator( A68_TRUE, &XAPASIM );
ZAPASIM = YAPASIM ;
A_VASSIGN2(ZAPASIM,XAPASIM,A68_CHAR ) ;
RAPASIM.Tag = XAPASIM;
ABPASIM_globalactionlabel = RAPASIM;
 /* line 131: */
BBPASIM.Lab = 0;
DBPASIM_generator( A68_TRUE, &HBPASIM );
JBPASIM = IBPASIM ;
A_VASSIGN2(JBPASIM,HBPASIM,A68_CHAR ) ;
BBPASIM.Tag = HBPASIM;
KBPASIM_globaliterationslabel = BBPASIM;
 /* line 132: */
LBPASIM.Lab = 0;
NBPASIM_generator( A68_TRUE, &RBPASIM );
TBPASIM = SBPASIM ;
A_VASSIGN2(TBPASIM,RBPASIM,A68_CHAR ) ;
LBPASIM.Tag = RBPASIM;
UBPASIM_callsarraycodelabel = LBPASIM;
 /* line 133: */
VBPASIM.Lab = 0;
XBPASIM_generator( A68_TRUE, &BCPASIM );
DCPASIM = CCPASIM ;
A_VASSIGN2(DCPASIM,BCPASIM,A68_CHAR ) ;
VBPASIM.Tag = BCPASIM;
ECPASIM_idsupportcodelabel = VBPASIM;
 /* line 134: */
FCPASIM.Lab = 0;
HCPASIM_generator( A68_TRUE, &LCPASIM );
NCPASIM = MCPASIM ;
A_VASSIGN2(NCPASIM,LCPASIM,A68_CHAR ) ;
FCPASIM.Tag = LCPASIM;
OCPASIM_genericidcodelabel = FCPASIM;
 /* line 135: */
PCPASIM.Lab = 0;
RCPASIM_generator( A68_TRUE, &VCPASIM );
XCPASIM = WCPASIM ;
A_VASSIGN2(XCPASIM,VCPASIM,A68_CHAR ) ;
PCPASIM.Tag = VCPASIM;
YCPASIM_datasourcecodelabel = PCPASIM;
 /* line 137: */
ZCPASIM.Lab = 0;
BDPASIM_generator( A68_TRUE, &FDPASIM );
HDPASIM = GDPASIM ;
A_VASSIGN2(HDPASIM,FDPASIM,A68_CHAR ) ;
ZCPASIM.Tag = FDPASIM;
IDPASIM_globalmonitorchangedlabel = ZCPASIM;
 /* line 139: */
JDPASIM.Lab = 0;
LDPASIM_generator( A68_TRUE, &PDPASIM );
RDPASIM = QDPASIM ;
A_VASSIGN2(RDPASIM,PDPASIM,A68_CHAR ) ;
JDPASIM.Tag = PDPASIM;
SDPASIM_globalunitdeleventlabel = JDPASIM;
 /* line 141: */
TDPASIM.Lab = 0;
VDPASIM_generator( A68_TRUE, &ZDPASIM );
BEPASIM = AEPASIM ;
A_VASSIGN2(BEPASIM,ZDPASIM,A68_CHAR ) ;
TDPASIM.Tag = ZDPASIM;
CEPASIM_globalcomboutputsstablelabel = TDPASIM;
 /* line 142: */
DEPASIM.Lab = 0;
FEPASIM_generator( A68_TRUE, &JEPASIM );
LEPASIM = KEPASIM ;
A_VASSIGN2(LEPASIM,JEPASIM,A68_CHAR ) ;
DEPASIM.Tag = JEPASIM;
MEPASIM_globalnexteventlabel = DEPASIM;
 /* line 143: */
NEPASIM.Lab = 0;
PEPASIM_generator( A68_TRUE, &TEPASIM );
VEPASIM = UEPASIM ;
A_VASSIGN2(VEPASIM,TEPASIM,A68_CHAR ) ;
NEPASIM.Tag = TEPASIM;
WEPASIM_globalstartinitlabel = NEPASIM;
 /* line 144: */
XEPASIM.Lab = 0;
ZEPASIM_generator( A68_TRUE, &DFPASIM );
FFPASIM = EFPASIM ;
A_VASSIGN2(FFPASIM,DFPASIM,A68_CHAR ) ;
XEPASIM.Tag = DFPASIM;
GFPASIM_globalendinitlabel = XEPASIM;
 /* line 145: */
HFPASIM.Lab = 0;
JFPASIM_generator( A68_TRUE, &NFPASIM );
PFPASIM = OFPASIM ;
A_VASSIGN2(PFPASIM,NFPASIM,A68_CHAR ) ;
HFPASIM.Tag = NFPASIM;
QFPASIM_globalstartinstlabel = HFPASIM;
 /* line 146: */
RFPASIM.Lab = 0;
TFPASIM_generator( A68_TRUE, &XFPASIM );
ZFPASIM = YFPASIM ;
A_VASSIGN2(ZFPASIM,XFPASIM,A68_CHAR ) ;
RFPASIM.Tag = XFPASIM;
AGPASIM_globalendinstlabel = RFPASIM;
 /* line 148: */
BGPASIM.Lab = (-1);
DGPASIM_generator( A68_TRUE, &GGPASIM );
BGPASIM.Tag = GGPASIM;
HGPASIM_combinatoriallogiclabel = BGPASIM;
 /* line 149: */
IGPASIM.Lab = (-2);
KGPASIM_generator( A68_TRUE, &NGPASIM );
IGPASIM.Tag = NGPASIM;
OGPASIM_callslooplabel = IGPASIM;
 /* line 150: */
PGPASIM.Lab = (-3);
RGPASIM_generator( A68_TRUE, &UGPASIM );
PGPASIM.Tag = UGPASIM;
VGPASIM_endcallslooplabel = PGPASIM;
 /* line 151: */
WGPASIM.Lab = (-4);
YGPASIM_generator( A68_TRUE, &BHPASIM );
WGPASIM.Tag = BHPASIM;
CHPASIM_unchangedoutputlabel = WGPASIM;
 /* line 152: */
DHPASIM.Lab = (-5);
FHPASIM_generator( A68_TRUE, &IHPASIM );
DHPASIM.Tag = IHPASIM;
JHPASIM_setqueryoutputlabel = DHPASIM;
 /* line 153: */
KHPASIM.Lab = (-6);
MHPASIM_generator( A68_TRUE, &PHPASIM );
KHPASIM.Tag = PHPASIM;
QHPASIM_newresultlabel = KHPASIM;
 /* line 154: */
RHPASIM.Lab = (-7);
THPASIM_generator( A68_TRUE, &WHPASIM );
RHPASIM.Tag = WHPASIM;
XHPASIM_oldresultlabel = RHPASIM;
 /* line 155: */
YHPASIM.Lab = (-8);
AIPASIM_generator( A68_TRUE, &DIPASIM );
YHPASIM.Tag = DIPASIM;
EIPASIM_unchangedquerylabel = YHPASIM;
 /* line 156: */
FIPASIM.Lab = (-9);
HIPASIM_generator( A68_TRUE, &KIPASIM );
FIPASIM.Tag = KIPASIM;
LIPASIM_querylabel = FIPASIM;
 /* line 157: */
MIPASIM.Lab = (-10);
OIPASIM_generator( A68_TRUE, &RIPASIM );
MIPASIM.Tag = RIPASIM;
SIPASIM_arithexceptionlabel = MIPASIM;
 /* line 158: */
TIPASIM.Lab = (-11);
VIPASIM_generator( A68_TRUE, &YIPASIM );
TIPASIM.Tag = YIPASIM;
ZIPASIM_timetestlabel = TIPASIM;
 /* line 159: */
AJPASIM.Lab = (-12);
CJPASIM_generator( A68_TRUE, &FJPASIM );
AJPASIM.Tag = FJPASIM;
GJPASIM_endcallsarraylabel = AJPASIM;
 /* line 160: */
HJPASIM.Lab = (-13);
JJPASIM_generator( A68_TRUE, &MJPASIM );
HJPASIM.Tag = MJPASIM;
NJPASIM_startsaverslabel = HJPASIM;
 /* line 161: */
OJPASIM.Lab = (-14);
QJPASIM_generator( A68_TRUE, &TJPASIM );
OJPASIM.Tag = TJPASIM;
UJPASIM_startrestorerslabel = OJPASIM;
 /* line 162: */
VJPASIM.Lab = (-15);
XJPASIM_generator( A68_TRUE, &AKPASIM );
VJPASIM.Tag = AKPASIM;
BKPASIM_startinitialisationlabel = VJPASIM;
 /* line 169: */
 /* line 175: */
 /* line 176: */
 /* line 177: */
 /* line 188: */
 /* line 189: */
 /* line 190: */
 /* line 198: */
 /* line 199: */
 /* line 200: */
 /* line 208: */
 /* line 209: */
 /* line 210: */
 /* line 239: */
 /* line 240: */
 /* line 241: */
 /* line 259: */
 /* line 260: */
 /* line 261: */
 /* line 268: */
 /* line 269: */
 /* line 270: */
 /* line 288: */
 /* line 289: */
 /* line 290: */
 /* line 321: */
 /* line 322: */
 /* line 323: */
 /* line 376: */
 /* line 377: */
 /* line 378: */
 /* line 388: */
 /* line 389: */
 /* line 390: */
 /* line 391: */
 /* line 393: */
 /* line 409: */
 /* line 410: */
 /* line 425: */
 /* line 426: */
 /* line 428: */
 /* line 434: */
 /* line 435: */
 /* line 437: */
 /* line 451: */
 /* line 452: */
 /* line 454: */
 /* line 471: */
 /* line 472: */
 /* line 474: */
 /* line 488: */
 /* line 489: */
 /* line 491: */
 /* line 508: */
 /* line 509: */
 /* line 511: */
 /* line 596: */
 /* line 597: */
 /* line 599: */
KNPASIM.Lab = 0;
MNPASIM_generator( A68_TRUE, &QNPASIM );
SNPASIM = RNPASIM ;
A_VASSIGN2(SNPASIM,QNPASIM,A68_CHAR ) ;
KNPASIM.Tag = QNPASIM;
TNPASIM_instlab = KNPASIM;
 /* line 600: */
 /* line 601: */
VNPASIM_settingphase = (UNPASIM_combphase+1);
 /* line 602: */
WNPASIM_handlingphase = (VNPASIM_settingphase+1);
 /* line 603: */
XNPASIM_initialiserphase = (WNPASIM_handlingphase+1);
 /* line 604: */
YNPASIM_terminatorphase = (XNPASIM_initialiserphase+1);
 /* line 605: */
ZNPASIM_saverphase = (YNPASIM_terminatorphase+1);
 /* line 606: */
AOPASIM_restorerphase = (ZNPASIM_saverphase+1);
 /* line 607: */
BOPASIM_noofphases = (AOPASIM_restorerphase+1);
 /* line 609: */
 /* line 616: */
 /* line 623: */
 /* line 630: */
 /* line 644: */
 /* line 651: */
 /* line 658: */
 /* line 670: */
 /* line 692: */
 /* line 720: */
 /* line 743: */
 /* line 744: */
 /* line 745: */
 /* line 753: */
 /* line 823: */
 /* line 946: */
 /* line 1026: */
 /* line 1052: */
 /* line 1053: */
 /* line 1096: */
 /* line 1127: */
 /* line 1170: */
 /* line 1171: */
 /* line 1263: */
 /* line 1264: */
 /* line 1265: */
 /* line 1362: */
 /* line 1408: */
 /* line 1409: */
 /* line 1410: */
 /* line 1483: */
 /* line 1484: */
 /* line 1485: */
 /* line 1545: */
 /* line 1564: */
 /* line 1597: */
 /* line 1598: */
 /* line 1599: */
 /* line 1649: */
 /* line 1730: */
A_PROC_EXIT(DECS keamstandard);
} 
#undef NL
/* end of translation of ./a68files/keamstandard.a68 */
