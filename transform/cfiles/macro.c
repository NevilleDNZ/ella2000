
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
/* UNAME:PSOATRN */
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

A_PROCEDURE(A68_VOID ,A68t113,(A68_BOOL ,struct A68t46 *),(A68_BOOL ,struct A68t46 *,void *));
typedef struct A68t113  A68_113 ;    /* PROC(BOOL) MODE46 */
A_VECTOR(struct A68t116 ,A68t115);
typedef struct A68t115  A68_115 ;    /* VECTOR [] MODE116 */
struct A68t116{
A68_INT  Number;
A_PAD_INT(PAD_22)
A68_BITS  Class;
A_PAD_BITS(PAD_23)
A68_VC  Text;
};
typedef struct A68t116  A68_116 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t114{
A68_VC  Name;
struct A68t111  Messages;
A68_BOOL * Initialised;
struct A68t115  Setup;
};
typedef struct A68t114  A68_114 ;    /* STRUCT(MODE26,REF MODE111,REF BOOL,MODE115)  */

A_PROCEDURE(A68_VOID ,A68t117,(A68_BOOL ,struct A68t114 *),(A68_BOOL ,struct A68t114 *,void *));
typedef struct A68t117  A68_117 ;    /* PROC(BOOL) MODE114 */
A_VECTOR(A68_VC ,A68t118);
typedef struct A68t118  A68_118 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t119,(struct A68t46 ,struct A68t118 *),(struct A68t46 ,struct A68t118 *,void *));
typedef struct A68t119  A68_119 ;    /* PROC(MODE46) MODE118 */

A_PROCEDURE(A68_VOID ,A68t120,(struct A68t118 ,struct A68t46 *),(struct A68t118 ,struct A68t46 *,void *));
typedef struct A68t120  A68_120 ;    /* PROC(MODE118) MODE46 */
struct A68t122 ;

A_PROCEDURE(A68_BOOL ,A68t121,(struct A68t122 ),(struct A68t122 ,void *));
typedef struct A68t121  A68_121 ;    /* PROC(MODE122) BOOL */
struct A68t122 { A68_INT mode; union {
struct A68t109  mode1;
struct A68t112  mode2;
} data; };
typedef struct A68t122  A68_122 ;    /* UNION(MODE109,MODE112)  */

A_PROCEDURE(A68_INT ,A68t123,(struct A68t109 ),(struct A68t109 ,void *));
typedef struct A68t123  A68_123 ;    /* PROC(MODE109) INT */

A_PROCEDURE(A68_VOID ,A68t124,(A68_INT ,struct A68t114 ,struct A68t109 *),(A68_INT ,struct A68t114 ,struct A68t109 *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(INT,MODE114) MODE109 */

A_PROCEDURE(A68_BOOL ,A68t125,(struct A68t109 ,struct A68t114 ),(struct A68t109 ,struct A68t114 ,void *));
typedef struct A68t125  A68_125 ;    /* PROC(MODE109,MODE114) BOOL */

A_PROCEDURE(A68_VOID ,A68t126,(struct A68t109 ,struct A68t46 ,struct A68t112 *),(struct A68t109 ,struct A68t46 ,struct A68t112 *,void *));
typedef struct A68t126  A68_126 ;    /* PROC(MODE109,MODE46) MODE112 */
struct A68t127{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t127  A68_127 ;    /* STRUCT(REF MODE26,REF BITS)  */

A_PROCEDURE(A68_BOOL ,A68t128,(struct A68t35 ,struct A68t35 ),(struct A68t35 ,struct A68t35 ,void *));
typedef struct A68t128  A68_128 ;    /* PROC(MODE35,MODE35) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t130);
typedef struct A68t130  A68_130 ;    /* STRUCT 4 CHAR */
struct A68t129{
struct A68t130  Access;
A_PAD_ISTRUCT(A68_130 ,PAD_24)
};
typedef struct A68t129  A68_129 ;    /* STRUCT(MODE130)  */

A_PROCEDURE(struct A68t127 *,A68t131,(A68_VC ,struct A68t129 ,struct A68t108 ),(A68_VC ,struct A68t129 ,struct A68t108 ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(MODE26,MODE129,MODE108) REF MODE127 */

A_PROCEDURE(A68_VOID ,A68t132,(struct A68t127 *,struct A68t108 ),(struct A68t127 *,struct A68t108 ,void *));
typedef struct A68t132  A68_132 ;    /* PROC(REF MODE127,MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t133,(struct A68t127 *,A68_VC *),(struct A68t127 *,A68_VC *,void *));
typedef struct A68t133  A68_133 ;    /* PROC(REF MODE127) MODE26 */

A_PROCEDURE(A68_VOID ,A68t134,(struct A68t127 *,A68_VC ,A68_INT *,struct A68t108 ,struct A68t35 *),(struct A68t127 *,A68_VC ,A68_INT *,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t134  A68_134 ;    /* PROC(REF MODE127,REF MODE26,REF INT,MODE108) MODE35 */

A_PROCEDURE(A68_VOID ,A68t135,(struct A68t127 *,A68_VC ,struct A68t108 ,struct A68t35 *),(struct A68t127 *,A68_VC ,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t135  A68_135 ;    /* PROC(REF MODE127,MODE26,MODE108) MODE35 */
struct A68t136{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_25)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_26)
A68_SINT  Device;
A_PAD_SINT(PAD_27)
A68_SINT  Links;
A_PAD_SINT(PAD_28)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_29)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_30)
A68_LINT  Size;
A_PAD_LINT(PAD_31)
A68_LINT  Accessed;
A_PAD_LINT(PAD_32)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_33)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_34)
};
typedef struct A68t136  A68_136 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t138 ;

A_PROCEDURE(struct A68t136 *,A68t137,(struct A68t138 ,struct A68t108 ),(struct A68t138 ,struct A68t108 ,void *));
typedef struct A68t137  A68_137 ;    /* PROC(MODE138,MODE108) REF MODE136 */
struct A68t138 { A68_INT mode; union {
struct A68t127 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t138  A68_138 ;    /* UNION(REF MODE127,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t139,(struct A68t127 *,A68_LINT *,struct A68t108 ,struct A68t35 *),(struct A68t127 *,A68_LINT *,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t139  A68_139 ;    /* PROC(REF MODE127,REF LONG INT,MODE108) MODE35 */

A_PROCEDURE(A68_VOID ,A68t140,(struct A68t127 *,A68_LINT ,struct A68t108 ,struct A68t35 *),(struct A68t127 *,A68_LINT ,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t140  A68_140 ;    /* PROC(REF MODE127,LONG INT,MODE108) MODE35 */

A_PROCEDURE(A68_VOID ,A68t141,(struct A68t127 *,struct A68t108 ,struct A68t35 *),(struct A68t127 *,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t141  A68_141 ;    /* PROC(REF MODE127,MODE108) MODE35 */

A_PROCEDURE(A68_VOID ,A68t142,(A68_VC ,struct A68t108 ,struct A68t35 *),(A68_VC ,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t142  A68_142 ;    /* PROC(MODE26,MODE108) MODE35 */

A_PROCEDURE(A68_VOID ,A68t143,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t143  A68_143 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t144,(A68_INT ),(A68_INT ,void *));
typedef struct A68t144  A68_144 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_LINT ,A68t145,(void),(void *));
typedef struct A68t145  A68_145 ;    /* PROC LONG INT */

A_PROCEDURE(A68_INT ,A68t146,(A68_VC ,struct A68t108 ),(A68_VC ,struct A68t108 ,void *));
typedef struct A68t146  A68_146 ;    /* PROC(MODE26,MODE108) INT */

A_PROCEDURE(A68_VOID ,A68t147,(A68_VC ,A68_VC ,struct A68t108 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t108 ,A68_VC *,void *));
typedef struct A68t147  A68_147 ;    /* PROC(MODE26,MODE26,MODE108) MODE26 */

A_PROCEDURE(A68_VOID ,A68t148,(A68_VC ,A68_VC ,struct A68t108 ,struct A68t35 *),(A68_VC ,A68_VC ,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t148  A68_148 ;    /* PROC(MODE26,MODE26,MODE108) MODE35 */
struct A68t149{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t149  A68_149 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t150,(A68_VC ,A68_VC ,struct A68t108 ,struct A68t149 *),(A68_VC ,A68_VC ,struct A68t108 ,struct A68t149 *,void *));
typedef struct A68t150  A68_150 ;    /* PROC(MODE26,MODE26,MODE108) MODE149 */

A_PROCEDURE(A68_VOID ,A68t151,(A68_VC *),(A68_VC *,void *));
typedef struct A68t151  A68_151 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t152,(struct A68t46 *),(struct A68t46 *,void *));
typedef struct A68t152  A68_152 ;    /* PROC MODE46 */

A_PROCEDURE(A68_VOID ,A68t153,(A68_VC ,struct A68t108 ,struct A68t46 *),(A68_VC ,struct A68t108 ,struct A68t46 *,void *));
typedef struct A68t153  A68_153 ;    /* PROC(MODE26,MODE108) MODE46 */

A_PROCEDURE(A68_BOOL ,A68t154,(void),(void *));
typedef struct A68t154  A68_154 ;    /* PROC BOOL */
struct A68t156 ;

A_PROCEDURE(A68_VOID ,A68t155,(struct A68t156 ,struct A68t108 ),(struct A68t156 ,struct A68t108 ,void *));
typedef struct A68t155  A68_155 ;    /* PROC(MODE156,MODE108) VOID */
A_VECTOR(struct A68t157 ,A68t156);
typedef struct A68t156  A68_156 ;    /* VECTOR [] MODE157 */
struct A68t157{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_35)
};
typedef struct A68t157  A68_157 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t158,(void),(void *));
typedef struct A68t158  A68_158 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t159,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t160,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t160  A68_160 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t161,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t161  A68_161 ;    /* PROC(REF MODE26) REF MODE26 */

A_PROCEDURE(A68_REAL ,A68t162,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(REAL) REAL */
struct A68t163{
A68_VC  Name;
A68_VC  Version;
A68_VC  Date;
A68_VC  Msg;
A68_VC  Sys_fault;
};
typedef struct A68t163  A68_163 ;    /* STRUCT(MODE26,MODE26,MODE26,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t164,(A68_BOOL ,struct A68t163 *),(A68_BOOL ,struct A68t163 *,void *));
typedef struct A68t164  A68_164 ;    /* PROC(BOOL) MODE163 */

A_PROCEDURE(A68_VOID ,A68t165,(struct A68t163 ,A68_BOOL ),(struct A68t163 ,A68_BOOL ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(MODE163,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t166,(struct A68t163 *),(struct A68t163 *,void *));
typedef struct A68t166  A68_166 ;    /* PROC MODE163 */

A_PROCEDURE(A68_BOOL ,A68t167,(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ),(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(MODE26,MODE26,MODE26,REF REF MODE26,BOOL) BOOL */
struct A68t169 ;
struct A68t170 ;

A_PROCEDURE(A68_VOID ,A68t168,(A68_VC ,struct A68t158 ,struct A68t169 ,struct A68t170 ),(A68_VC ,struct A68t158 ,struct A68t169 ,struct A68t170 ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(MODE26,MODE158,MODE169,MODE170) VOID */

A_PROCEDURE(A68_BOOL ,A68t169,(A68_VC ,struct A68t151 ),(A68_VC ,struct A68t151 ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(MODE26,MODE151) BOOL */

A_PROCEDURE(A68_BOOL ,A68t170,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t170  A68_170 ;    /* PROC(BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t171,(struct A68t108 ),(struct A68t108 ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t172,(struct A68t171 ,struct A68t108 ),(struct A68t171 ,struct A68t108 ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE171,MODE108) VOID */
struct A68t173{
A68_VC  Id;
struct A68t173 * Rest;
};
typedef struct A68t173  A68_173 ;    /* STRUCT(REF MODE26,REF MODE173)  */
struct A68t174{
A68_INT  Int;
A_PAD_INT(PAD_36)
struct A68t174 * Rest;
};
typedef struct A68t174  A68_174 ;    /* STRUCT(INT,REF MODE174)  */
struct A68t175 { A68_INT mode; union {
struct A68t176 * mode1;
struct A68t177 * mode2;
struct A68t178 * mode3;
struct A68t179 * mode4;
struct A68t180 * mode5;
} data; };
typedef struct A68t175  A68_175 ;    /* UNION(REF MODE176,REF MODE177,REF MODE178,REF MODE179,REF MODE180)  */
struct A68t176{
A68_INT  Attrno;
A_PAD_INT(PAD_37)
};
typedef struct A68t176  A68_176 ;    /* STRUCT(INT)  */
struct A68t177{
A68_VC  Classname;
struct A68t173 * Strings;
};
typedef struct A68t177  A68_177 ;    /* STRUCT(REF MODE26,REF MODE173)  */
struct A68t178{
struct A68t175  Elem;
struct A68t178 * Rest;
};
typedef struct A68t178  A68_178 ;    /* STRUCT(MODE175,REF MODE178)  */
struct A68t179{
struct A68t175  Attr;
};
typedef struct A68t179  A68_179 ;    /* STRUCT(MODE175)  */
struct A68t180{
A68_INT  Attrnull;
A_PAD_INT(PAD_38)
};
typedef struct A68t180  A68_180 ;    /* STRUCT(INT)  */
struct A68t181{
A68_INT  Sort;
A_PAD_INT(PAD_39)
A68_VC  Attrname;
struct A68t175  Value;
struct A68t182 * Usage;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(INT,REF MODE26,MODE175,REF MODE182)  */
struct A68t182{
A68_INT  Contextno;
A_PAD_INT(PAD_40)
A68_INT  Closureno;
A_PAD_INT(PAD_41)
A68_INT  Libv_spec;
A_PAD_INT(PAD_42)
A68_INT  Libv_body;
A_PAD_INT(PAD_43)
A68_BOOL  Import;
A_PAD_BOOL(PAD_44)
A68_BOOL  Export;
A_PAD_BOOL(PAD_45)
};
typedef struct A68t182  A68_182 ;    /* STRUCT(INT,INT,INT,INT,BOOL,BOOL)  */
struct A68t183{
struct A68t175  Tag;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(MODE175)  */
struct A68t184 { A68_INT mode; union {
struct A68t185 * mode1;
struct A68t186 * mode2;
struct A68t187 * mode3;
struct A68t188 * mode4;
struct A68t189 * mode5;
struct A68t190 * mode6;
struct A68t191 * mode7;
struct A68t192 * mode8;
struct A68t193 * mode9;
struct A68t194 * mode10;
} data; };
typedef struct A68t184  A68_184 ;    /* UNION(REF MODE185,REF MODE186,REF MODE187,REF MODE188,REF MODE189,REF MODE190,REF MODE191,REF MODE192,REF MODE193,REF MODE194)  */
struct A68t185{
A68_INT  Int;
A_PAD_INT(PAD_46)
A68_VC  Text;
};
typedef struct A68t185  A68_185 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t186{
A68_INT  Sort;
A_PAD_INT(PAD_47)
struct A68t184  Test;
struct A68t184  Standard;
};
typedef struct A68t186  A68_186 ;    /* STRUCT(INT,MODE184,MODE184)  */
struct A68t187{
A68_INT  Nameno;
A_PAD_INT(PAD_48)
};
typedef struct A68t187  A68_187 ;    /* STRUCT(INT)  */
struct A68t188{
A68_INT  Intno;
A_PAD_INT(PAD_49)
};
typedef struct A68t188  A68_188 ;    /* STRUCT(INT)  */
struct A68t189{
struct A68t184  Left;
A68_INT  Sort;
A_PAD_INT(PAD_50)
struct A68t184  Right;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(MODE184,INT,MODE184)  */
struct A68t190{
A68_INT  Sort;
A_PAD_INT(PAD_51)
struct A68t184  Right;
};
typedef struct A68t190  A68_190 ;    /* STRUCT(INT,MODE184)  */
struct A68t191{
struct A68t184  Cond;
struct A68t184  True;
struct A68t184  False;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(MODE184,MODE184,MODE184)  */
struct A68t192{
struct A68t184  Formula;
};
typedef struct A68t192  A68_192 ;    /* STRUCT(MODE184)  */
struct A68t193{
A68_INT  Macparno;
A_PAD_INT(PAD_52)
};
typedef struct A68t193  A68_193 ;    /* STRUCT(INT)  */
struct A68t194{
A68_INT  Fnull;
A_PAD_INT(PAD_53)
};
typedef struct A68t194  A68_194 ;    /* STRUCT(INT)  */
struct A68t195{
struct A68t184  Tag;
};
typedef struct A68t195  A68_195 ;    /* STRUCT(MODE184)  */
struct A68t196{
struct A68t184  Formula;
struct A68t196 * Rest;
};
typedef struct A68t196  A68_196 ;    /* STRUCT(MODE184,REF MODE196)  */
struct A68t199{
struct A68t184  Lwb;
struct A68t184  Upb;
};
typedef struct A68t199  A68_199 ;    /* STRUCT(MODE184,MODE184)  */
struct A68t198 { A68_INT mode; union {
struct A68t185 * mode1;
struct A68t186 * mode2;
struct A68t187 * mode3;
struct A68t188 * mode4;
struct A68t189 * mode5;
struct A68t190 * mode6;
struct A68t191 * mode7;
struct A68t192 * mode8;
struct A68t193 * mode9;
struct A68t194 * mode10;
struct A68t199  mode11;
} data; };
typedef struct A68t198  A68_198 ;    /* UNION(REF MODE185,REF MODE186,REF MODE187,REF MODE188,REF MODE189,REF MODE190,REF MODE191,REF MODE192,REF MODE193,REF MODE194,MODE199)  */
struct A68t197{
A68_INT  Sort;
A_PAD_INT(PAD_54)
A68_VC  Intname;
struct A68t175  Attr;
struct A68t198  Value;
struct A68t182 * Usage;
};
typedef struct A68t197  A68_197 ;    /* STRUCT(INT,REF MODE26,MODE175,MODE198,REF MODE182)  */
struct A68t200 { A68_INT mode; union {
struct A68t201 * mode1;
struct A68t202 * mode2;
struct A68t203 * mode3;
struct A68t204 * mode4;
struct A68t205 * mode5;
struct A68t206 * mode6;
struct A68t207 * mode7;
struct A68t193 * mode8;
struct A68t208 * mode9;
} data; };
typedef struct A68t200  A68_200 ;    /* UNION(REF MODE201,REF MODE202,REF MODE203,REF MODE204,REF MODE205,REF MODE206,REF MODE207,REF MODE193,REF MODE208)  */
struct A68t201{
A68_INT  Typeno;
A_PAD_INT(PAD_55)
};
typedef struct A68t201  A68_201 ;    /* STRUCT(INT)  */
struct A68t202{
struct A68t184  Size;
struct A68t200  Elem;
};
typedef struct A68t202  A68_202 ;    /* STRUCT(MODE184,MODE200)  */
struct A68t203{
struct A68t200  Elem;
struct A68t203 * Rest;
};
typedef struct A68t203  A68_203 ;    /* STRUCT(MODE200,REF MODE203)  */
struct A68t204{
struct A68t200  From;
struct A68t200  To;
};
typedef struct A68t204  A68_204 ;    /* STRUCT(MODE200,MODE200)  */
struct A68t205{
struct A68t200  Type;
};
typedef struct A68t205  A68_205 ;    /* STRUCT(MODE200)  */
struct A68t206{
struct A68t184  Size;
struct A68t200  Char;
};
typedef struct A68t206  A68_206 ;    /* STRUCT(MODE184,MODE200)  */
struct A68t207{
A68_INT  Tvoid;
A_PAD_INT(PAD_56)
};
typedef struct A68t207  A68_207 ;    /* STRUCT(INT)  */
struct A68t208{
A68_INT  Tnull;
A_PAD_INT(PAD_57)
};
typedef struct A68t208  A68_208 ;    /* STRUCT(INT)  */
struct A68t209{
struct A68t200  Tag;
};
typedef struct A68t209  A68_209 ;    /* STRUCT(MODE200)  */
struct A68t210{
A68_VC  Tagname;
A68_VC  Chars;
};
typedef struct A68t210  A68_210 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t211{
A68_VC  Altname;
struct A68t200  Assoc;
};
typedef struct A68t211  A68_211 ;    /* STRUCT(REF MODE26,MODE200)  */
struct A68t212{
A68_VC  Tagname;
struct A68t199  Range;
};
typedef struct A68t212  A68_212 ;    /* STRUCT(REF MODE26,MODE199)  */
A_VECTOR(struct A68t211 ,A68t214);
typedef struct A68t214  A68_214 ;    /* VECTOR [] MODE211 */
struct A68t213 { A68_INT mode; union {
struct A68t214  mode1;
struct A68t212 * mode2;
struct A68t209 * mode3;
struct A68t210 * mode4;
} data; };
typedef struct A68t213  A68_213 ;    /* UNION(REF MODE214,REF MODE212,REF MODE209,REF MODE210)  */
struct A68t215{
A68_INT  Sort;
A_PAD_INT(PAD_58)
A68_VC  Typename;
struct A68t175  Attr;
struct A68t213  Body;
struct A68t182 * Usage;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(INT,REF MODE26,MODE175,MODE213,REF MODE182)  */
struct A68t216{
A68_INT  Constno;
A_PAD_INT(PAD_59)
};
typedef struct A68t216  A68_216 ;    /* STRUCT(INT)  */
struct A68t217{
A68_INT  Typeno;
A_PAD_INT(PAD_60)
A68_INT  Primno;
A_PAD_INT(PAD_61)
};
typedef struct A68t217  A68_217 ;    /* STRUCT(INT,INT)  */
struct A68t218{
A68_INT  Typeno;
A_PAD_INT(PAD_62)
struct A68t184  Index;
};
typedef struct A68t218  A68_218 ;    /* STRUCT(INT,MODE184)  */
struct A68t219{
A68_INT  Typeno;
A_PAD_INT(PAD_63)
struct A68t199  Range;
};
typedef struct A68t219  A68_219 ;    /* STRUCT(INT,MODE199)  */
struct A68t220{
struct A68t200  Querytype;
};
typedef struct A68t220  A68_220 ;    /* STRUCT(MODE200)  */
struct A68t222 { A68_INT mode; union {
struct A68t216 * mode1;
struct A68t217 * mode2;
struct A68t218 * mode3;
struct A68t220 * mode4;
struct A68t223 * mode5;
struct A68t224 * mode6;
struct A68t205 * mode7;
struct A68t219 * mode8;
struct A68t225 * mode9;
struct A68t226 * mode10;
struct A68t227 * mode11;
struct A68t228 * mode12;
struct A68t229 * mode13;
struct A68t230 * mode14;
struct A68t231 * mode15;
struct A68t232 * mode16;
struct A68t233 * mode17;
struct A68t234 * mode18;
struct A68t235 * mode19;
struct A68t236 * mode20;
struct A68t237 * mode21;
struct A68t238 * mode22;
struct A68t239 * mode23;
struct A68t240 * mode24;
struct A68t241 * mode25;
struct A68t242 * mode26;
struct A68t243 * mode27;
struct A68t244 * mode28;
struct A68t245 * mode29;
struct A68t246 * mode30;
struct A68t247 * mode31;
struct A68t248 * mode32;
struct A68t249 * mode33;
struct A68t250 * mode34;
} data; };
typedef struct A68t222  A68_222 ;    /* UNION(REF MODE216,REF MODE217,REF MODE218,REF MODE220,REF MODE223,REF MODE224,REF MODE205,REF MODE219,REF MODE225,REF MODE226,REF MODE227,REF MODE228,REF MODE229,REF MODE230,REF MODE231,REF MODE232,REF MODE233,REF MODE234,REF MODE235,REF MODE236,REF MODE237,REF MODE238,REF MODE239,REF MODE240,REF MODE241,REF MODE242,REF MODE243,REF MODE244,REF MODE245,REF MODE246,REF MODE247,REF MODE248,REF MODE249,REF MODE250)  */
struct A68t221{
A68_INT  Sort;
A_PAD_INT(PAD_64)
A68_VC  Constname;
struct A68t175  Attr;
struct A68t222  Value;
struct A68t182 * Usage;
};
typedef struct A68t221  A68_221 ;    /* STRUCT(INT,REF MODE26,MODE175,MODE222,REF MODE182)  */
struct A68t223{
A68_INT  Typeno;
A_PAD_INT(PAD_65)
struct A68t32  String;
};
typedef struct A68t223  A68_223 ;    /* STRUCT(INT,REF MODE32)  */
struct A68t224{
A68_INT  Cvoid;
A_PAD_INT(PAD_66)
};
typedef struct A68t224  A68_224 ;    /* STRUCT(INT)  */
struct A68t225{
A68_INT  Typeno;
A_PAD_INT(PAD_67)
A68_INT  Firstno;
A_PAD_INT(PAD_68)
A68_INT  Lastno;
A_PAD_INT(PAD_69)
};
typedef struct A68t225  A68_225 ;    /* STRUCT(INT,INT,INT)  */
struct A68t226{
struct A68t222  Alt;
struct A68t226 * Rest;
};
typedef struct A68t226  A68_226 ;    /* STRUCT(MODE222,REF MODE226)  */
struct A68t227{
A68_INT  Sort;
A_PAD_INT(PAD_70)
A68_INT  Nameno;
A_PAD_INT(PAD_71)
};
typedef struct A68t227  A68_227 ;    /* STRUCT(INT,INT)  */
struct A68t228{
struct A68t222  Sink;
struct A68t222  Source;
};
typedef struct A68t228  A68_228 ;    /* STRUCT(MODE222,MODE222)  */
struct A68t229{
A68_INT  Typeno;
A_PAD_INT(PAD_72)
A68_INT  Altno;
A_PAD_INT(PAD_73)
struct A68t222  Assoc;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(INT,INT,MODE222)  */
struct A68t230{
struct A68t222  Extract;
A68_INT  Typeno;
A_PAD_INT(PAD_74)
A68_INT  Altno;
A_PAD_INT(PAD_75)
};
typedef struct A68t230  A68_230 ;    /* STRUCT(MODE222,INT,INT)  */
struct A68t231{
struct A68t222  Unit;
A68_INT  Fnno;
A_PAD_INT(PAD_76)
A68_INT  Nameno;
A_PAD_INT(PAD_77)
};
typedef struct A68t231  A68_231 ;    /* STRUCT(MODE222,INT,INT)  */
struct A68t232{
struct A68t222  Unit;
struct A68t184  Index;
};
typedef struct A68t232  A68_232 ;    /* STRUCT(MODE222,MODE184)  */
struct A68t233{
struct A68t222  Unit;
struct A68t199  Range;
};
typedef struct A68t233  A68_233 ;    /* STRUCT(MODE222,MODE199)  */
struct A68t234{
struct A68t222  Unit;
struct A68t222  Index;
};
typedef struct A68t234  A68_234 ;    /* STRUCT(MODE222,MODE222)  */
struct A68t235{
struct A68t222  Unit;
struct A68t222  Index;
struct A68t222  From;
};
typedef struct A68t235  A68_235 ;    /* STRUCT(MODE222,MODE222,MODE222)  */
struct A68t236{
struct A68t184  Size;
struct A68t222  Elem;
};
typedef struct A68t236  A68_236 ;    /* STRUCT(MODE184,MODE222)  */
struct A68t237{
struct A68t222  Elem;
struct A68t237 * Rest;
};
typedef struct A68t237  A68_237 ;    /* STRUCT(MODE222,REF MODE237)  */
struct A68t238{
A68_BOOL  String;
A_PAD_BOOL(PAD_78)
A68_INT  Sort;
A_PAD_INT(PAD_79)
struct A68t222  Left;
struct A68t222  Right;
};
typedef struct A68t238  A68_238 ;    /* STRUCT(BOOL,INT,MODE222,MODE222)  */
A_VECTOR(struct A68t265 ,A68t264);
typedef struct A68t264  A68_264 ;    /* VECTOR [] MODE265 */
struct A68t267{
struct A68t222  Tag;
};
typedef struct A68t267  A68_267 ;    /* STRUCT(MODE222)  */
struct A68t262{
A68_INT  Fnno;
A_PAD_INT(PAD_80)
struct A68t264  Macparams;
struct A68t175  Attr;
};
typedef struct A68t262  A68_262 ;    /* STRUCT(INT,REF MODE264,MODE175)  */
struct A68t266 { A68_INT mode; union {
struct A68t183  mode1;
struct A68t195  mode2;
struct A68t209  mode3;
struct A68t267  mode4;
struct A68t262  mode5;
} data; };
typedef struct A68t266  A68_266 ;    /* UNION(MODE183,MODE195,MODE209,MODE267,MODE262)  */
struct A68t265{
A68_INT  Sort;
A_PAD_INT(PAD_81)
struct A68t266  Param;
};
typedef struct A68t265  A68_265 ;    /* STRUCT(INT,MODE266)  */
struct A68t239{
struct A68t262  Inst;
struct A68t222  Right;
};
typedef struct A68t239  A68_239 ;    /* STRUCT(MODE262,MODE222)  */
struct A68t240{
struct A68t222  Left;
struct A68t262  Inst;
struct A68t222  Right;
};
typedef struct A68t240  A68_240 ;    /* STRUCT(MODE222,MODE262,MODE222)  */
struct A68t241{
struct A68t222  Input;
struct A68t282 * Choices;
};
typedef struct A68t241  A68_241 ;    /* STRUCT(MODE222,REF MODE282)  */
struct A68t242{
struct A68t184  Cond;
struct A68t222  True;
struct A68t222  False;
};
typedef struct A68t242  A68_242 ;    /* STRUCT(MODE184,MODE222,MODE222)  */
struct A68t243{
struct A68t184  Repl;
struct A68t222  Body;
};
typedef struct A68t243  A68_243 ;    /* STRUCT(MODE184,MODE222)  */
struct A68t244{
struct A68t270 * Body;
struct A68t222  Output;
};
typedef struct A68t244  A68_244 ;    /* STRUCT(REF MODE270,MODE222)  */
struct A68t245{
struct A68t251 * Body;
struct A68t222  Output;
};
typedef struct A68t245  A68_245 ;    /* STRUCT(REF MODE251,MODE222)  */
struct A68t246{
struct A68t222  Unit;
struct A68t175  Attr;
};
typedef struct A68t246  A68_246 ;    /* STRUCT(MODE222,MODE175)  */
struct A68t247{
struct A68t222  Unit;
struct A68t186  Check;
};
typedef struct A68t247  A68_247 ;    /* STRUCT(MODE222,MODE186)  */
struct A68t248{
struct A68t222  Unit;
};
typedef struct A68t248  A68_248 ;    /* STRUCT(MODE222)  */
struct A68t249{
struct A68t184  Size;
struct A68t222  Char;
};
typedef struct A68t249  A68_249 ;    /* STRUCT(MODE184,MODE222)  */
struct A68t250{
A68_INT  Unull;
A_PAD_INT(PAD_82)
};
typedef struct A68t250  A68_250 ;    /* STRUCT(INT)  */
struct A68t253{
A68_INT  Fnno;
A_PAD_INT(PAD_83)
};
typedef struct A68t253  A68_253 ;    /* STRUCT(INT)  */
struct A68t252 { A68_INT mode; union {
struct A68t176  mode1;
struct A68t188  mode2;
struct A68t201  mode3;
struct A68t216  mode4;
struct A68t253  mode5;
struct A68t254 * mode6;
struct A68t255 * mode7;
struct A68t256 * mode8;
struct A68t257 * mode9;
struct A68t258 * mode10;
struct A68t259 * mode11;
struct A68t260 * mode12;
} data; };
typedef struct A68t252  A68_252 ;    /* UNION(MODE176,MODE188,MODE201,MODE216,MODE253,REF MODE254,REF MODE255,REF MODE256,REF MODE257,REF MODE258,REF MODE259,REF MODE260)  */
struct A68t251{
struct A68t252  Step;
struct A68t251 * Rest;
};
typedef struct A68t251  A68_251 ;    /* STRUCT(MODE252,REF MODE251)  */
struct A68t254{
struct A68t184  Cond;
struct A68t268 * Print;
};
typedef struct A68t254  A68_254 ;    /* STRUCT(MODE184,REF MODE268)  */
struct A68t255{
struct A68t184  Cond;
struct A68t268 * Fault;
};
typedef struct A68t255  A68_255 ;    /* STRUCT(MODE184,REF MODE268)  */
struct A68t256{
struct A68t263 * Letnames;
struct A68t222  Unit;
};
typedef struct A68t256  A68_256 ;    /* STRUCT(REF MODE263,MODE222)  */
struct A68t257{
struct A68t196 * Sizes;
struct A68t262  Inst;
struct A68t263 * Makenames;
};
typedef struct A68t257  A68_257 ;    /* STRUCT(REF MODE196,MODE262,REF MODE263)  */
struct A68t258{
struct A68t222  From;
struct A68t222  To;
};
typedef struct A68t258  A68_258 ;    /* STRUCT(MODE222,MODE222)  */
struct A68t259{
struct A68t196 * Repls;
struct A68t261 * Joins;
};
typedef struct A68t259  A68_259 ;    /* STRUCT(REF MODE196,REF MODE261)  */
struct A68t260{
A68_INT  Stepnull;
A_PAD_INT(PAD_84)
};
typedef struct A68t260  A68_260 ;    /* STRUCT(INT)  */
struct A68t261{
struct A68t258  Join;
struct A68t261 * Rest;
};
typedef struct A68t261  A68_261 ;    /* STRUCT(MODE258,REF MODE261)  */
struct A68t263{
A68_INT  Nameno;
A_PAD_INT(PAD_85)
struct A68t263 * Rest;
};
typedef struct A68t263  A68_263 ;    /* STRUCT(INT,REF MODE263)  */
struct A68t269 { A68_INT mode; union {
A68_VC  mode1;
struct A68t195 * mode2;
} data; };
typedef struct A68t269  A68_269 ;    /* UNION(REF MODE26,REF MODE195)  */
struct A68t268{
struct A68t269  Item;
struct A68t268 * Rest;
};
typedef struct A68t268  A68_268 ;    /* STRUCT(MODE269,REF MODE268)  */
struct A68t271 { A68_INT mode; union {
struct A68t176  mode1;
struct A68t188  mode2;
struct A68t201  mode3;
struct A68t216  mode4;
struct A68t253  mode5;
struct A68t254 * mode6;
struct A68t255 * mode7;
struct A68t272 * mode8;
struct A68t273 * mode9;
struct A68t274 * mode10;
struct A68t275 * mode11;
struct A68t276 * mode12;
struct A68t277 * mode13;
struct A68t278 * mode14;
struct A68t279 * mode15;
struct A68t270 * mode16;
struct A68t280 * mode17;
} data; };
typedef struct A68t271  A68_271 ;    /* UNION(MODE176,MODE188,MODE201,MODE216,MODE253,REF MODE254,REF MODE255,REF MODE272,REF MODE273,REF MODE274,REF MODE275,REF MODE276,REF MODE277,REF MODE278,REF MODE279,REF MODE270,REF MODE280)  */
struct A68t270{
struct A68t271  Step;
struct A68t270 * Rest;
};
typedef struct A68t270  A68_270 ;    /* STRUCT(MODE271,REF MODE270)  */
struct A68t272{
struct A68t256  Seqlet;
};
typedef struct A68t272  A68_272 ;    /* STRUCT(MODE256)  */
struct A68t273{
struct A68t256  Seqvar;
};
typedef struct A68t273  A68_273 ;    /* STRUCT(MODE256)  */
struct A68t274{
struct A68t263 * Pvarnames;
struct A68t222  Init;
};
typedef struct A68t274  A68_274 ;    /* STRUCT(REF MODE263,MODE222)  */
struct A68t275{
struct A68t222  To;
struct A68t222  From;
};
typedef struct A68t275  A68_275 ;    /* STRUCT(MODE222,MODE222)  */
struct A68t276{
struct A68t222  Input;
struct A68t281 * Choices;
};
typedef struct A68t276  A68_276 ;    /* STRUCT(MODE222,REF MODE281)  */
struct A68t277{
struct A68t184  Cond;
struct A68t271  True;
struct A68t271  False;
};
typedef struct A68t277  A68_277 ;    /* STRUCT(MODE184,MODE271,MODE271)  */
struct A68t278{
struct A68t184  Repl;
struct A68t271  Body;
};
typedef struct A68t278  A68_278 ;    /* STRUCT(MODE184,MODE271)  */
struct A68t279{
A68_INT  Seqnull;
A_PAD_INT(PAD_86)
};
typedef struct A68t279  A68_279 ;    /* STRUCT(INT)  */
struct A68t280{
struct A68t184  Size;
struct A68t271  Elem;
};
typedef struct A68t280  A68_280 ;    /* STRUCT(MODE184,MODE271)  */
struct A68t281{
A68_BOOL  Check;
A_PAD_BOOL(PAD_87)
A68_INT  Sort;
A_PAD_INT(PAD_88)
struct A68t222  Test;
struct A68t271  Output;
struct A68t281 * Rest;
};
typedef struct A68t281  A68_281 ;    /* STRUCT(BOOL,INT,MODE222,MODE271,REF MODE281)  */
struct A68t282{
A68_BOOL  Check;
A_PAD_BOOL(PAD_89)
A68_INT  Sort;
A_PAD_INT(PAD_90)
struct A68t222  Test;
struct A68t222  Output;
struct A68t282 * Rest;
};
typedef struct A68t282  A68_282 ;    /* STRUCT(BOOL,INT,MODE222,MODE222,REF MODE282)  */
struct A68t283 { A68_INT mode; union {
struct A68t176  mode1;
struct A68t188  mode2;
struct A68t201  mode3;
struct A68t216  mode4;
struct A68t253  mode5;
} data; };
typedef struct A68t283  A68_283 ;    /* UNION(MODE176,MODE188,MODE201,MODE216,MODE253)  */
struct A68t284{
A68_BOOL  Biop;
A_PAD_BOOL(PAD_91)
A68_VC  Name;
struct A68t264  Macparams;
};
typedef struct A68t284  A68_284 ;    /* STRUCT(BOOL,REF MODE26,REF MODE264)  */
struct A68t285{
struct A68t184  Output;
};
typedef struct A68t285  A68_285 ;    /* STRUCT(MODE184)  */
struct A68t286{
A68_INT  Reform;
A_PAD_INT(PAD_92)
};
typedef struct A68t286  A68_286 ;    /* STRUCT(INT)  */
struct A68t287{
A68_VC  Name;
A68_INT  Contextno;
A_PAD_INT(PAD_93)
struct A68t92  Ctname;
};
typedef struct A68t287  A68_287 ;    /* STRUCT(REF MODE26,INT,MODE92)  */
struct A68t288{
A68_INT  Sort;
A_PAD_INT(PAD_94)
struct A68t222  Init;
struct A68t184  Ambigtime;
struct A68t222  Ambig;
struct A68t184  Delaytime;
};
typedef struct A68t288  A68_288 ;    /* STRUCT(INT,MODE222,MODE184,MODE222,MODE184)  */
struct A68t289{
struct A68t222  Init;
struct A68t184  Delaytime;
};
typedef struct A68t289  A68_289 ;    /* STRUCT(MODE222,MODE184)  */
struct A68t290{
struct A68t222  Init;
};
typedef struct A68t290  A68_290 ;    /* STRUCT(MODE222)  */
struct A68t291{
A68_INT  Sort;
A_PAD_INT(PAD_95)
struct A68t184  Interval;
struct A68t222  Init;
struct A68t184  Skew;
};
typedef struct A68t291  A68_291 ;    /* STRUCT(INT,MODE184,MODE222,MODE184)  */
struct A68t292{
A68_BOOL  Faster;
A_PAD_BOOL(PAD_96)
A68_INT  Sort;
A_PAD_INT(PAD_97)
struct A68t262  Inst;
struct A68t184  Scale;
struct A68t222  Init;
struct A68t184  Skew;
};
typedef struct A68t292  A68_292 ;    /* STRUCT(BOOL,INT,MODE262,MODE184,MODE222,MODE184)  */
struct A68t294 { A68_INT mode; union {
struct A68t267 * mode1;
struct A68t284 * mode2;
struct A68t285 * mode3;
struct A68t286 * mode4;
struct A68t287 * mode5;
struct A68t288 * mode6;
struct A68t289 * mode7;
struct A68t290 * mode8;
struct A68t291 * mode9;
struct A68t292 * mode10;
struct A68t293 * mode11;
struct A68t295 * mode12;
} data; };
typedef struct A68t294  A68_294 ;    /* UNION(REF MODE267,REF MODE284,REF MODE285,REF MODE286,REF MODE287,REF MODE288,REF MODE289,REF MODE290,REF MODE291,REF MODE292,REF MODE293,REF MODE295)  */
struct A68t293{
struct A68t174 * Joincheck;
A68_BOOL  Check;
A_PAD_BOOL(PAD_98)
struct A68t294  Fnbody;
};
typedef struct A68t293  A68_293 ;    /* STRUCT(REF MODE174,BOOL,MODE294)  */
struct A68t295{
A68_INT  Bodynull;
A_PAD_INT(PAD_99)
};
typedef struct A68t295  A68_295 ;    /* STRUCT(INT)  */
struct A68t296{
A68_INT  Sort;
A_PAD_INT(PAD_100)
struct A68t283  Spec;
};
typedef struct A68t296  A68_296 ;    /* STRUCT(INT,MODE283)  */
struct A68t297{
A68_VC  Name;
struct A68t200  Type;
struct A68t175  Attr;
};
typedef struct A68t297  A68_297 ;    /* STRUCT(REF MODE26,MODE200,MODE175)  */
A_VECTOR(struct A68t296 ,A68t299);
typedef struct A68t299  A68_299 ;    /* VECTOR [] MODE296 */
A_VECTOR(struct A68t297 ,A68t300);
typedef struct A68t300  A68_300 ;    /* VECTOR [] MODE297 */
struct A68t298{
A68_INT  Sort;
A_PAD_INT(PAD_101)
A68_BOOL  Macro;
A_PAD_BOOL(PAD_102)
A68_VC  Fnname;
struct A68t299  Macspecs;
struct A68t175  Attr;
struct A68t263 * Inputs;
struct A68t263 * Outputs;
struct A68t300  Nametypes;
struct A68t294  Fnbody;
struct A68t182 * Usage;
};
typedef struct A68t298  A68_298 ;    /* STRUCT(INT,BOOL,REF MODE26,REF MODE299,MODE175,REF MODE263,REF MODE263,REF MODE300,MODE294,REF MODE182)  */
A_VECTOR(struct A68t181 *,A68t302);
typedef struct A68t302  A68_302 ;    /* VECTOR [] REF MODE181 */
A_VECTOR(struct A68t197 *,A68t303);
typedef struct A68t303  A68_303 ;    /* VECTOR [] REF MODE197 */
A_VECTOR(struct A68t215 *,A68t304);
typedef struct A68t304  A68_304 ;    /* VECTOR [] REF MODE215 */
A_VECTOR(struct A68t221 *,A68t305);
typedef struct A68t305  A68_305 ;    /* VECTOR [] REF MODE221 */
A_VECTOR(struct A68t298 *,A68t306);
typedef struct A68t306  A68_306 ;    /* VECTOR [] REF MODE298 */
struct A68t301{
struct A68t302  Attrs;
struct A68t303  Ints;
struct A68t304  Types;
struct A68t305  Consts;
struct A68t306  Fns;
};
typedef struct A68t301  A68_301 ;    /* STRUCT(REF MODE302,REF MODE303,REF MODE304,REF MODE305,REF MODE306)  */
struct A68t307{
A68_INT  Closureno;
A_PAD_INT(PAD_103)
A68_INT  Sort;
A_PAD_INT(PAD_104)
struct A68t301 * Environ;
};
typedef struct A68t307  A68_307 ;    /* STRUCT(INT,INT,REF MODE301)  */
struct A68t308{
struct A68t307  Outer;
struct A68t308 * Rest;
};
typedef struct A68t308  A68_308 ;    /* STRUCT(MODE307,REF MODE308)  */
A_VECTOR(struct A68t308 ,A68t310);
typedef struct A68t310  A68_310 ;    /* VECTOR [] MODE308 */
struct A68t309{
struct A68t310  Outers;
struct A68t309 * Rest;
};
typedef struct A68t309  A68_309 ;    /* STRUCT(REF MODE310,REF MODE309)  */
struct A68t311{
A68_INT  Max_closureno;
A_PAD_INT(PAD_105)
struct A68t308 * Outers;
struct A68t308 * Freelist;
struct A68t309 * Outerslist;
};
typedef struct A68t311  A68_311 ;    /* STRUCT(INT,REF MODE308,REF MODE308,REF MODE309)  */
A_VECTOR(struct A68t308 *,A68t312);
typedef struct A68t312  A68_312 ;    /* VECTOR [] REF MODE308 */

A_PROCEDURE(struct A68t187 *,A68t313,(A68_INT ),(A68_INT ,void *));
typedef struct A68t313  A68_313 ;    /* PROC(INT) REF MODE187 */

A_PROCEDURE(struct A68t188 *,A68t314,(A68_INT ),(A68_INT ,void *));
typedef struct A68t314  A68_314 ;    /* PROC(INT) REF MODE188 */

A_PROCEDURE(struct A68t192 *,A68t315,(struct A68t184 ),(struct A68t184 ,void *));
typedef struct A68t315  A68_315 ;    /* PROC(MODE184) REF MODE192 */

A_PROCEDURE(struct A68t195 *,A68t316,(struct A68t184 ),(struct A68t184 ,void *));
typedef struct A68t316  A68_316 ;    /* PROC(MODE184) REF MODE195 */

A_PROCEDURE(struct A68t201 *,A68t317,(A68_INT ),(A68_INT ,void *));
typedef struct A68t317  A68_317 ;    /* PROC(INT) REF MODE201 */

A_PROCEDURE(struct A68t205 *,A68t318,(struct A68t200 ),(struct A68t200 ,void *));
typedef struct A68t318  A68_318 ;    /* PROC(MODE200) REF MODE205 */

A_PROCEDURE(struct A68t209 *,A68t319,(struct A68t200 ),(struct A68t200 ,void *));
typedef struct A68t319  A68_319 ;    /* PROC(MODE200) REF MODE209 */

A_PROCEDURE(struct A68t216 *,A68t320,(A68_INT ),(A68_INT ,void *));
typedef struct A68t320  A68_320 ;    /* PROC(INT) REF MODE216 */

A_PROCEDURE(struct A68t220 *,A68t321,(struct A68t200 ),(struct A68t200 ,void *));
typedef struct A68t321  A68_321 ;    /* PROC(MODE200) REF MODE220 */

A_PROCEDURE(struct A68t272 *,A68t322,(struct A68t256 ),(struct A68t256 ,void *));
typedef struct A68t322  A68_322 ;    /* PROC(MODE256) REF MODE272 */

A_PROCEDURE(struct A68t273 *,A68t323,(struct A68t256 ),(struct A68t256 ,void *));
typedef struct A68t323  A68_323 ;    /* PROC(MODE256) REF MODE273 */

A_PROCEDURE(struct A68t248 *,A68t324,(struct A68t222 ),(struct A68t222 ,void *));
typedef struct A68t324  A68_324 ;    /* PROC(MODE222) REF MODE248 */

A_PROCEDURE(struct A68t267 *,A68t325,(struct A68t222 ),(struct A68t222 ,void *));
typedef struct A68t325  A68_325 ;    /* PROC(MODE222) REF MODE267 */

A_PROCEDURE(struct A68t253 *,A68t326,(A68_INT ),(A68_INT ,void *));
typedef struct A68t326  A68_326 ;    /* PROC(INT) REF MODE253 */

A_PROCEDURE(struct A68t285 *,A68t327,(struct A68t184 ),(struct A68t184 ,void *));
typedef struct A68t327  A68_327 ;    /* PROC(MODE184) REF MODE285 */

A_PROCEDURE(struct A68t290 *,A68t328,(struct A68t222 ),(struct A68t222 ,void *));
typedef struct A68t328  A68_328 ;    /* PROC(MODE222) REF MODE290 */

A_PROCEDURE(struct A68t193 *,A68t329,(A68_INT ),(A68_INT ,void *));
typedef struct A68t329  A68_329 ;    /* PROC(INT) REF MODE193 */

A_PROCEDURE(struct A68t176 *,A68t330,(A68_INT ),(A68_INT ,void *));
typedef struct A68t330  A68_330 ;    /* PROC(INT) REF MODE176 */

A_PROCEDURE(struct A68t183 *,A68t331,(struct A68t175 ),(struct A68t175 ,void *));
typedef struct A68t331  A68_331 ;    /* PROC(MODE175) REF MODE183 */

A_PROCEDURE(struct A68t179 *,A68t332,(struct A68t175 ),(struct A68t175 ,void *));
typedef struct A68t332  A68_332 ;    /* PROC(MODE175) REF MODE179 */
A_VECTOR(struct A68t173 *,A68t333);
typedef struct A68t333  A68_333 ;    /* VECTOR [] REF MODE173 */

A_PROCEDURE(A68_INT ,A68t334,(struct A68t311 *),(struct A68t311 *,void *));
typedef struct A68t334  A68_334 ;    /* PROC(REF MODE311) INT */

A_PROCEDURE(struct A68t308 *,A68t335,(A68_INT ,struct A68t311 *,struct A68t108 ),(A68_INT ,struct A68t311 *,struct A68t108 ,void *));
typedef struct A68t335  A68_335 ;    /* PROC(INT,REF MODE311,MODE108) REF MODE308 */

A_PROCEDURE(struct A68t308 *,A68t336,(struct A68t311 *),(struct A68t311 *,void *));
typedef struct A68t336  A68_336 ;    /* PROC(REF MODE311) REF MODE308 */

A_PROCEDURE(struct A68t308 **,A68t337,(struct A68t307 ,struct A68t308 **,struct A68t311 *,struct A68t108 ),(struct A68t307 ,struct A68t308 **,struct A68t311 *,struct A68t108 ,void *));
typedef struct A68t337  A68_337 ;    /* PROC(MODE307,REF REF MODE308,REF MODE311,MODE108) REF REF MODE308 */

A_PROCEDURE(A68_VOID ,A68t338,(struct A68t308 **,struct A68t311 *,struct A68t108 ),(struct A68t308 **,struct A68t311 *,struct A68t108 ,void *));
typedef struct A68t338  A68_338 ;    /* PROC(REF REF MODE308,REF MODE311,MODE108) VOID */

A_PROCEDURE(struct A68t311 *,A68t339,(void),(void *));
typedef struct A68t339  A68_339 ;    /* PROC REF MODE311 */

A_PROCEDURE(A68_INT ,A68t340,(struct A68t311 *,struct A68t108 ),(struct A68t311 *,struct A68t108 ,void *));
typedef struct A68t340  A68_340 ;    /* PROC(REF MODE311,MODE108) INT */

A_PROCEDURE(struct A68t311 *,A68t341,(struct A68t311 *,struct A68t108 ),(struct A68t311 *,struct A68t108 ,void *));
typedef struct A68t341  A68_341 ;    /* PROC(REF MODE311,MODE108) REF MODE311 */

A_PROCEDURE(struct A68t185 *,A68t342,(A68_INT ),(A68_INT ,void *));
typedef struct A68t342  A68_342 ;    /* PROC(INT) REF MODE185 */

A_PROCEDURE(A68_INT ,A68t343,(struct A68t184 ,struct A68t108 ),(struct A68t184 ,struct A68t108 ,void *));
typedef struct A68t343  A68_343 ;    /* PROC(MODE184,MODE108) INT */

A_PROCEDURE(A68_INT ,A68t344,(struct A68t184 ),(struct A68t184 ,void *));
typedef struct A68t344  A68_344 ;    /* PROC(MODE184) INT */

A_PROCEDURE(A68_VOID ,A68t345,(struct A68t184 ,struct A68t184 *),(struct A68t184 ,struct A68t184 *,void *));
typedef struct A68t345  A68_345 ;    /* PROC(MODE184) MODE184 */

A_PROCEDURE(struct A68t181 *,A68t346,(struct A68t307 ),(struct A68t307 ,void *));
typedef struct A68t346  A68_346 ;    /* PROC(MODE307) REF MODE181 */

A_PROCEDURE(struct A68t197 *,A68t347,(struct A68t307 ),(struct A68t307 ,void *));
typedef struct A68t347  A68_347 ;    /* PROC(MODE307) REF MODE197 */

A_PROCEDURE(struct A68t215 *,A68t348,(struct A68t307 ),(struct A68t307 ,void *));
typedef struct A68t348  A68_348 ;    /* PROC(MODE307) REF MODE215 */

A_PROCEDURE(struct A68t221 *,A68t349,(struct A68t307 ),(struct A68t307 ,void *));
typedef struct A68t349  A68_349 ;    /* PROC(MODE307) REF MODE221 */

A_PROCEDURE(struct A68t298 *,A68t350,(struct A68t307 ),(struct A68t307 ,void *));
typedef struct A68t350  A68_350 ;    /* PROC(MODE307) REF MODE298 */

A_PROCEDURE(A68_INT ,A68t351,(struct A68t182 *,struct A68t302 ),(struct A68t182 *,struct A68t302 ,void *));
typedef struct A68t351  A68_351 ;    /* PROC(REF MODE182,REF MODE302) INT */

A_PROCEDURE(A68_INT ,A68t352,(struct A68t182 *,struct A68t303 ),(struct A68t182 *,struct A68t303 ,void *));
typedef struct A68t352  A68_352 ;    /* PROC(REF MODE182,REF MODE303) INT */

A_PROCEDURE(A68_INT ,A68t353,(struct A68t182 *,struct A68t304 ),(struct A68t182 *,struct A68t304 ,void *));
typedef struct A68t353  A68_353 ;    /* PROC(REF MODE182,REF MODE304) INT */

A_PROCEDURE(A68_INT ,A68t354,(struct A68t182 *,struct A68t305 ),(struct A68t182 *,struct A68t305 ,void *));
typedef struct A68t354  A68_354 ;    /* PROC(REF MODE182,REF MODE305) INT */

A_PROCEDURE(A68_INT ,A68t355,(struct A68t182 *,struct A68t306 ),(struct A68t182 *,struct A68t306 ,void *));
typedef struct A68t355  A68_355 ;    /* PROC(REF MODE182,REF MODE306) INT */

A_PROCEDURE(struct A68t181 *,A68t356,(struct A68t176 ,struct A68t311 *,struct A68t301 *),(struct A68t176 ,struct A68t311 *,struct A68t301 *,void *));
typedef struct A68t356  A68_356 ;    /* PROC(MODE176,REF MODE311,REF MODE301) REF MODE181 */

A_PROCEDURE(struct A68t197 *,A68t357,(struct A68t188 ,struct A68t311 *,struct A68t301 *),(struct A68t188 ,struct A68t311 *,struct A68t301 *,void *));
typedef struct A68t357  A68_357 ;    /* PROC(MODE188,REF MODE311,REF MODE301) REF MODE197 */

A_PROCEDURE(struct A68t215 *,A68t358,(struct A68t201 ,struct A68t311 *,struct A68t301 *),(struct A68t201 ,struct A68t311 *,struct A68t301 *,void *));
typedef struct A68t358  A68_358 ;    /* PROC(MODE201,REF MODE311,REF MODE301) REF MODE215 */

A_PROCEDURE(struct A68t221 *,A68t359,(struct A68t216 ,struct A68t311 *,struct A68t301 *),(struct A68t216 ,struct A68t311 *,struct A68t301 *,void *));
typedef struct A68t359  A68_359 ;    /* PROC(MODE216,REF MODE311,REF MODE301) REF MODE221 */

A_PROCEDURE(struct A68t298 *,A68t360,(struct A68t253 ,struct A68t311 *,struct A68t301 *),(struct A68t253 ,struct A68t311 *,struct A68t301 *,void *));
typedef struct A68t360  A68_360 ;    /* PROC(MODE253,REF MODE311,REF MODE301) REF MODE298 */

A_PROCEDURE(struct A68t204 *,A68t361,(struct A68t298 *),(struct A68t298 *,void *));
typedef struct A68t361  A68_361 ;    /* PROC(REF MODE298) REF MODE204 */

A_PROCEDURE(A68_VOID ,A68t362,(struct A68t203 *,struct A68t184 *),(struct A68t203 *,struct A68t184 *,void *));
typedef struct A68t362  A68_362 ;    /* PROC(REF MODE203) MODE184 */

A_PROCEDURE(A68_VOID ,A68t363,(struct A68t200 ,struct A68t301 *,struct A68t184 *),(struct A68t200 ,struct A68t301 *,struct A68t184 *,void *));
typedef struct A68t363  A68_363 ;    /* PROC(MODE200,REF MODE301) MODE184 */

A_PROCEDURE(struct A68t298 *,A68t364,(struct A68t298 *,struct A68t301 *,struct A68t301 *),(struct A68t298 *,struct A68t301 *,struct A68t301 *,void *));
typedef struct A68t364  A68_364 ;    /* PROC(REF MODE298,REF MODE301,REF MODE301) REF MODE298 */

A_PROCEDURE(A68_VOID ,A68t365,(struct A68t263 *,struct A68t298 *,struct A68t200 *),(struct A68t263 *,struct A68t298 *,struct A68t200 *,void *));
typedef struct A68t365  A68_365 ;    /* PROC(REF MODE263,REF MODE298) MODE200 */

A_PROCEDURE(A68_INT ,A68t366,(struct A68t263 *),(struct A68t263 *,void *));
typedef struct A68t366  A68_366 ;    /* PROC(REF MODE263) INT */

A_PROCEDURE(A68_INT ,A68t367,(struct A68t263 *,A68_INT ),(struct A68t263 *,A68_INT ,void *));
typedef struct A68t367  A68_367 ;    /* PROC(REF MODE263,INT) INT */

A_PROCEDURE(A68_VOID ,A68t368,(struct A68t222 ,struct A68t298 *,struct A68t301 *,struct A68t200 *),(struct A68t222 ,struct A68t298 *,struct A68t301 *,struct A68t200 *,void *));
typedef struct A68t368  A68_368 ;    /* PROC(MODE222,REF MODE298,REF MODE301) MODE200 */

A_PROCEDURE(A68_VOID ,A68t369,(struct A68t200 ,struct A68t301 *,struct A68t200 *),(struct A68t200 ,struct A68t301 *,struct A68t200 *,void *));
typedef struct A68t369  A68_369 ;    /* PROC(MODE200,REF MODE301) MODE200 */

A_PROCEDURE(A68_BOOL ,A68t370,(struct A68t200 ,struct A68t200 ,struct A68t301 *,struct A68t301 *,A68_BOOL ),(struct A68t200 ,struct A68t200 ,struct A68t301 *,struct A68t301 *,A68_BOOL ,void *));
typedef struct A68t370  A68_370 ;    /* PROC(MODE200,MODE200,REF MODE301,REF MODE301,BOOL) BOOL */

A_PROCEDURE(A68_INT ,A68t371,(struct A68t231 *,struct A68t301 *),(struct A68t231 *,struct A68t301 *,void *));
typedef struct A68t371  A68_371 ;    /* PROC(REF MODE231,REF MODE301) INT */
struct A68t372{
struct A68t175  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_106)
};
typedef struct A68t372  A68_372 ;    /* STRUCT(MODE175,BOOL)  */
struct A68t373{
struct A68t178 * A;
A68_BOOL  C;
A_PAD_BOOL(PAD_107)
};
typedef struct A68t373  A68_373 ;    /* STRUCT(REF MODE178,BOOL)  */
struct A68t374{
struct A68t181 * A;
A68_BOOL  C;
A_PAD_BOOL(PAD_108)
};
typedef struct A68t374  A68_374 ;    /* STRUCT(REF MODE181,BOOL)  */
struct A68t375{
struct A68t184  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_109)
};
typedef struct A68t375  A68_375 ;    /* STRUCT(MODE184,BOOL)  */
struct A68t376{
struct A68t196 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_110)
};
typedef struct A68t376  A68_376 ;    /* STRUCT(REF MODE196,BOOL)  */
struct A68t377{
struct A68t197 * I;
A68_BOOL  C;
A_PAD_BOOL(PAD_111)
};
typedef struct A68t377  A68_377 ;    /* STRUCT(REF MODE197,BOOL)  */
struct A68t378{
struct A68t199  R;
A68_BOOL  C;
A_PAD_BOOL(PAD_112)
};
typedef struct A68t378  A68_378 ;    /* STRUCT(MODE199,BOOL)  */
struct A68t379{
struct A68t198  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_113)
};
typedef struct A68t379  A68_379 ;    /* STRUCT(MODE198,BOOL)  */
struct A68t380{
struct A68t203 * T;
A68_BOOL  C;
A_PAD_BOOL(PAD_114)
};
typedef struct A68t380  A68_380 ;    /* STRUCT(REF MODE203,BOOL)  */
struct A68t381{
struct A68t200  T;
A68_BOOL  C;
A_PAD_BOOL(PAD_115)
};
typedef struct A68t381  A68_381 ;    /* STRUCT(MODE200,BOOL)  */
struct A68t382{
struct A68t211  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_116)
};
typedef struct A68t382  A68_382 ;    /* STRUCT(MODE211,BOOL)  */
struct A68t383{
struct A68t214  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_117)
};
typedef struct A68t383  A68_383 ;    /* STRUCT(REF MODE214,BOOL)  */
struct A68t384{
struct A68t213  T;
A68_BOOL  C;
A_PAD_BOOL(PAD_118)
};
typedef struct A68t384  A68_384 ;    /* STRUCT(MODE213,BOOL)  */
struct A68t385{
struct A68t215 * T;
A68_BOOL  C;
A_PAD_BOOL(PAD_119)
};
typedef struct A68t385  A68_385 ;    /* STRUCT(REF MODE215,BOOL)  */
struct A68t386{
struct A68t221 * Co;
A68_BOOL  C;
A_PAD_BOOL(PAD_120)
};
typedef struct A68t386  A68_386 ;    /* STRUCT(REF MODE221,BOOL)  */
struct A68t387{
struct A68t226 * Ua;
A68_BOOL  C;
A_PAD_BOOL(PAD_121)
};
typedef struct A68t387  A68_387 ;    /* STRUCT(REF MODE226,BOOL)  */
struct A68t388{
struct A68t237 * U;
A68_BOOL  C;
A_PAD_BOOL(PAD_122)
};
typedef struct A68t388  A68_388 ;    /* STRUCT(REF MODE237,BOOL)  */
struct A68t389{
struct A68t282 * U;
A68_BOOL  C;
A_PAD_BOOL(PAD_123)
};
typedef struct A68t389  A68_389 ;    /* STRUCT(REF MODE282,BOOL)  */
struct A68t390{
struct A68t222  U;
A68_BOOL  C;
A_PAD_BOOL(PAD_124)
};
typedef struct A68t390  A68_390 ;    /* STRUCT(MODE222,BOOL)  */
struct A68t391{
struct A68t266  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_125)
};
typedef struct A68t391  A68_391 ;    /* STRUCT(MODE266,BOOL)  */
struct A68t392{
struct A68t264  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_126)
};
typedef struct A68t392  A68_392 ;    /* STRUCT(REF MODE264,BOOL)  */
struct A68t393{
struct A68t262  I;
A68_BOOL  C;
A_PAD_BOOL(PAD_127)
};
typedef struct A68t393  A68_393 ;    /* STRUCT(MODE262,BOOL)  */
struct A68t394{
struct A68t283  D;
A68_BOOL  C;
A_PAD_BOOL(PAD_128)
};
typedef struct A68t394  A68_394 ;    /* STRUCT(MODE283,BOOL)  */
struct A68t395{
struct A68t268 * P;
A68_BOOL  C;
A_PAD_BOOL(PAD_129)
};
typedef struct A68t395  A68_395 ;    /* STRUCT(REF MODE268,BOOL)  */
struct A68t396{
struct A68t254 * P;
A68_BOOL  C;
A_PAD_BOOL(PAD_130)
};
typedef struct A68t396  A68_396 ;    /* STRUCT(REF MODE254,BOOL)  */
struct A68t397{
struct A68t255 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_131)
};
typedef struct A68t397  A68_397 ;    /* STRUCT(REF MODE255,BOOL)  */
struct A68t398{
struct A68t263 * N;
A68_BOOL  C;
A_PAD_BOOL(PAD_132)
};
typedef struct A68t398  A68_398 ;    /* STRUCT(REF MODE263,BOOL)  */
struct A68t399{
struct A68t256 * L;
A68_BOOL  C;
A_PAD_BOOL(PAD_133)
};
typedef struct A68t399  A68_399 ;    /* STRUCT(REF MODE256,BOOL)  */
struct A68t400{
struct A68t281 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_134)
};
typedef struct A68t400  A68_400 ;    /* STRUCT(REF MODE281,BOOL)  */
struct A68t401{
struct A68t271  S;
A68_BOOL  C;
A_PAD_BOOL(PAD_135)
};
typedef struct A68t401  A68_401 ;    /* STRUCT(MODE271,BOOL)  */
struct A68t402{
struct A68t270 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_136)
};
typedef struct A68t402  A68_402 ;    /* STRUCT(REF MODE270,BOOL)  */
struct A68t403{
struct A68t257 * M;
A68_BOOL  C;
A_PAD_BOOL(PAD_137)
};
typedef struct A68t403  A68_403 ;    /* STRUCT(REF MODE257,BOOL)  */
struct A68t404{
struct A68t258 * J;
A68_BOOL  C;
A_PAD_BOOL(PAD_138)
};
typedef struct A68t404  A68_404 ;    /* STRUCT(REF MODE258,BOOL)  */
struct A68t405{
struct A68t261 * J;
A68_BOOL  C;
A_PAD_BOOL(PAD_139)
};
typedef struct A68t405  A68_405 ;    /* STRUCT(REF MODE261,BOOL)  */
struct A68t406{
struct A68t252  S;
A68_BOOL  C;
A_PAD_BOOL(PAD_140)
};
typedef struct A68t406  A68_406 ;    /* STRUCT(MODE252,BOOL)  */
struct A68t407{
struct A68t251 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_141)
};
typedef struct A68t407  A68_407 ;    /* STRUCT(REF MODE251,BOOL)  */
struct A68t408{
struct A68t294  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_142)
};
typedef struct A68t408  A68_408 ;    /* STRUCT(MODE294,BOOL)  */
struct A68t409{
struct A68t296  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_143)
};
typedef struct A68t409  A68_409 ;    /* STRUCT(MODE296,BOOL)  */
struct A68t410{
struct A68t299  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_144)
};
typedef struct A68t410  A68_410 ;    /* STRUCT(REF MODE299,BOOL)  */
struct A68t411{
struct A68t298 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_145)
};
typedef struct A68t411  A68_411 ;    /* STRUCT(REF MODE298,BOOL)  */
struct A68t412{
struct A68t307  O;
A68_BOOL  C;
A_PAD_BOOL(PAD_146)
};
typedef struct A68t412  A68_412 ;    /* STRUCT(MODE307,BOOL)  */
struct A68t413{
struct A68t311 * Cl;
A68_BOOL  C;
A_PAD_BOOL(PAD_147)
};
typedef struct A68t413  A68_413 ;    /* STRUCT(REF MODE311,BOOL)  */
struct A68t414 ;

A_PROCEDURE(A68_VOID ,A68t415,(struct A68t175 ,struct A68t414 *,struct A68t372 *),(struct A68t175 ,struct A68t414 *,struct A68t372 *,void *));
typedef struct A68t415  A68_415 ;    /* PROC(MODE175,REF MODE414) MODE372 */

A_PROCEDURE(A68_VOID ,A68t416,(struct A68t178 *,struct A68t414 *,struct A68t373 *),(struct A68t178 *,struct A68t414 *,struct A68t373 *,void *));
typedef struct A68t416  A68_416 ;    /* PROC(REF MODE178,REF MODE414) MODE373 */

A_PROCEDURE(A68_VOID ,A68t417,(struct A68t181 *,struct A68t414 *,struct A68t374 *),(struct A68t181 *,struct A68t414 *,struct A68t374 *,void *));
typedef struct A68t417  A68_417 ;    /* PROC(REF MODE181,REF MODE414) MODE374 */

A_PROCEDURE(A68_VOID ,A68t418,(struct A68t184 ,struct A68t414 *,struct A68t375 *),(struct A68t184 ,struct A68t414 *,struct A68t375 *,void *));
typedef struct A68t418  A68_418 ;    /* PROC(MODE184,REF MODE414) MODE375 */

A_PROCEDURE(A68_VOID ,A68t419,(struct A68t196 *,struct A68t414 *,struct A68t376 *),(struct A68t196 *,struct A68t414 *,struct A68t376 *,void *));
typedef struct A68t419  A68_419 ;    /* PROC(REF MODE196,REF MODE414) MODE376 */

A_PROCEDURE(A68_VOID ,A68t420,(struct A68t197 *,struct A68t414 *,struct A68t377 *),(struct A68t197 *,struct A68t414 *,struct A68t377 *,void *));
typedef struct A68t420  A68_420 ;    /* PROC(REF MODE197,REF MODE414) MODE377 */

A_PROCEDURE(A68_VOID ,A68t421,(struct A68t199 ,struct A68t414 *,struct A68t378 *),(struct A68t199 ,struct A68t414 *,struct A68t378 *,void *));
typedef struct A68t421  A68_421 ;    /* PROC(MODE199,REF MODE414) MODE378 */

A_PROCEDURE(A68_VOID ,A68t422,(struct A68t198 ,struct A68t414 *,struct A68t379 *),(struct A68t198 ,struct A68t414 *,struct A68t379 *,void *));
typedef struct A68t422  A68_422 ;    /* PROC(MODE198,REF MODE414) MODE379 */

A_PROCEDURE(A68_VOID ,A68t423,(struct A68t203 *,struct A68t414 *,struct A68t380 *),(struct A68t203 *,struct A68t414 *,struct A68t380 *,void *));
typedef struct A68t423  A68_423 ;    /* PROC(REF MODE203,REF MODE414) MODE380 */

A_PROCEDURE(A68_VOID ,A68t424,(struct A68t200 ,struct A68t414 *,struct A68t381 *),(struct A68t200 ,struct A68t414 *,struct A68t381 *,void *));
typedef struct A68t424  A68_424 ;    /* PROC(MODE200,REF MODE414) MODE381 */

A_PROCEDURE(A68_VOID ,A68t425,(struct A68t211 ,struct A68t414 *,struct A68t382 *),(struct A68t211 ,struct A68t414 *,struct A68t382 *,void *));
typedef struct A68t425  A68_425 ;    /* PROC(MODE211,REF MODE414) MODE382 */

A_PROCEDURE(A68_VOID ,A68t426,(struct A68t214 ,struct A68t414 *,struct A68t383 *),(struct A68t214 ,struct A68t414 *,struct A68t383 *,void *));
typedef struct A68t426  A68_426 ;    /* PROC(REF MODE214,REF MODE414) MODE383 */

A_PROCEDURE(A68_VOID ,A68t427,(struct A68t213 ,struct A68t414 *,struct A68t384 *),(struct A68t213 ,struct A68t414 *,struct A68t384 *,void *));
typedef struct A68t427  A68_427 ;    /* PROC(MODE213,REF MODE414) MODE384 */

A_PROCEDURE(A68_VOID ,A68t428,(struct A68t215 *,struct A68t414 *,struct A68t385 *),(struct A68t215 *,struct A68t414 *,struct A68t385 *,void *));
typedef struct A68t428  A68_428 ;    /* PROC(REF MODE215,REF MODE414) MODE385 */

A_PROCEDURE(A68_VOID ,A68t429,(struct A68t221 *,struct A68t414 *,struct A68t386 *),(struct A68t221 *,struct A68t414 *,struct A68t386 *,void *));
typedef struct A68t429  A68_429 ;    /* PROC(REF MODE221,REF MODE414) MODE386 */

A_PROCEDURE(A68_VOID ,A68t430,(struct A68t226 *,struct A68t414 *,struct A68t387 *),(struct A68t226 *,struct A68t414 *,struct A68t387 *,void *));
typedef struct A68t430  A68_430 ;    /* PROC(REF MODE226,REF MODE414) MODE387 */

A_PROCEDURE(A68_VOID ,A68t431,(struct A68t237 *,struct A68t414 *,struct A68t388 *),(struct A68t237 *,struct A68t414 *,struct A68t388 *,void *));
typedef struct A68t431  A68_431 ;    /* PROC(REF MODE237,REF MODE414) MODE388 */

A_PROCEDURE(A68_VOID ,A68t432,(struct A68t282 *,struct A68t414 *,struct A68t389 *),(struct A68t282 *,struct A68t414 *,struct A68t389 *,void *));
typedef struct A68t432  A68_432 ;    /* PROC(REF MODE282,REF MODE414) MODE389 */

A_PROCEDURE(A68_VOID ,A68t433,(struct A68t222 ,struct A68t414 *,struct A68t390 *),(struct A68t222 ,struct A68t414 *,struct A68t390 *,void *));
typedef struct A68t433  A68_433 ;    /* PROC(MODE222,REF MODE414) MODE390 */

A_PROCEDURE(A68_VOID ,A68t434,(struct A68t266 ,struct A68t414 *,struct A68t391 *),(struct A68t266 ,struct A68t414 *,struct A68t391 *,void *));
typedef struct A68t434  A68_434 ;    /* PROC(MODE266,REF MODE414) MODE391 */

A_PROCEDURE(A68_VOID ,A68t435,(struct A68t264 ,struct A68t414 *,struct A68t392 *),(struct A68t264 ,struct A68t414 *,struct A68t392 *,void *));
typedef struct A68t435  A68_435 ;    /* PROC(REF MODE264,REF MODE414) MODE392 */

A_PROCEDURE(A68_VOID ,A68t436,(struct A68t262 ,struct A68t414 *,struct A68t393 *),(struct A68t262 ,struct A68t414 *,struct A68t393 *,void *));
typedef struct A68t436  A68_436 ;    /* PROC(MODE262,REF MODE414) MODE393 */

A_PROCEDURE(A68_VOID ,A68t437,(struct A68t283 ,struct A68t414 *,struct A68t394 *),(struct A68t283 ,struct A68t414 *,struct A68t394 *,void *));
typedef struct A68t437  A68_437 ;    /* PROC(MODE283,REF MODE414) MODE394 */

A_PROCEDURE(A68_VOID ,A68t438,(struct A68t268 *,struct A68t414 *,struct A68t395 *),(struct A68t268 *,struct A68t414 *,struct A68t395 *,void *));
typedef struct A68t438  A68_438 ;    /* PROC(REF MODE268,REF MODE414) MODE395 */

A_PROCEDURE(A68_VOID ,A68t439,(struct A68t254 *,struct A68t414 *,struct A68t396 *),(struct A68t254 *,struct A68t414 *,struct A68t396 *,void *));
typedef struct A68t439  A68_439 ;    /* PROC(REF MODE254,REF MODE414) MODE396 */

A_PROCEDURE(A68_VOID ,A68t440,(struct A68t255 *,struct A68t414 *,struct A68t397 *),(struct A68t255 *,struct A68t414 *,struct A68t397 *,void *));
typedef struct A68t440  A68_440 ;    /* PROC(REF MODE255,REF MODE414) MODE397 */

A_PROCEDURE(A68_VOID ,A68t441,(struct A68t263 *,struct A68t414 *,struct A68t398 *),(struct A68t263 *,struct A68t414 *,struct A68t398 *,void *));
typedef struct A68t441  A68_441 ;    /* PROC(REF MODE263,REF MODE414) MODE398 */

A_PROCEDURE(A68_VOID ,A68t442,(struct A68t256 *,struct A68t414 *,struct A68t399 *),(struct A68t256 *,struct A68t414 *,struct A68t399 *,void *));
typedef struct A68t442  A68_442 ;    /* PROC(REF MODE256,REF MODE414) MODE399 */

A_PROCEDURE(A68_VOID ,A68t443,(struct A68t281 *,struct A68t414 *,struct A68t400 *),(struct A68t281 *,struct A68t414 *,struct A68t400 *,void *));
typedef struct A68t443  A68_443 ;    /* PROC(REF MODE281,REF MODE414) MODE400 */

A_PROCEDURE(A68_VOID ,A68t444,(struct A68t271 ,struct A68t414 *,struct A68t401 *),(struct A68t271 ,struct A68t414 *,struct A68t401 *,void *));
typedef struct A68t444  A68_444 ;    /* PROC(MODE271,REF MODE414) MODE401 */

A_PROCEDURE(A68_VOID ,A68t445,(struct A68t270 *,struct A68t414 *,struct A68t402 *),(struct A68t270 *,struct A68t414 *,struct A68t402 *,void *));
typedef struct A68t445  A68_445 ;    /* PROC(REF MODE270,REF MODE414) MODE402 */

A_PROCEDURE(A68_VOID ,A68t446,(struct A68t257 *,struct A68t414 *,struct A68t403 *),(struct A68t257 *,struct A68t414 *,struct A68t403 *,void *));
typedef struct A68t446  A68_446 ;    /* PROC(REF MODE257,REF MODE414) MODE403 */

A_PROCEDURE(A68_VOID ,A68t447,(struct A68t258 *,struct A68t414 *,struct A68t404 *),(struct A68t258 *,struct A68t414 *,struct A68t404 *,void *));
typedef struct A68t447  A68_447 ;    /* PROC(REF MODE258,REF MODE414) MODE404 */

A_PROCEDURE(A68_VOID ,A68t448,(struct A68t261 *,struct A68t414 *,struct A68t405 *),(struct A68t261 *,struct A68t414 *,struct A68t405 *,void *));
typedef struct A68t448  A68_448 ;    /* PROC(REF MODE261,REF MODE414) MODE405 */

A_PROCEDURE(A68_VOID ,A68t449,(struct A68t252 ,struct A68t414 *,struct A68t406 *),(struct A68t252 ,struct A68t414 *,struct A68t406 *,void *));
typedef struct A68t449  A68_449 ;    /* PROC(MODE252,REF MODE414) MODE406 */

A_PROCEDURE(A68_VOID ,A68t450,(struct A68t251 *,struct A68t414 *,struct A68t407 *),(struct A68t251 *,struct A68t414 *,struct A68t407 *,void *));
typedef struct A68t450  A68_450 ;    /* PROC(REF MODE251,REF MODE414) MODE407 */

A_PROCEDURE(A68_VOID ,A68t451,(struct A68t294 ,struct A68t414 *,struct A68t408 *),(struct A68t294 ,struct A68t414 *,struct A68t408 *,void *));
typedef struct A68t451  A68_451 ;    /* PROC(MODE294,REF MODE414) MODE408 */

A_PROCEDURE(A68_VOID ,A68t452,(struct A68t296 ,struct A68t414 *,struct A68t409 *),(struct A68t296 ,struct A68t414 *,struct A68t409 *,void *));
typedef struct A68t452  A68_452 ;    /* PROC(MODE296,REF MODE414) MODE409 */

A_PROCEDURE(A68_VOID ,A68t453,(struct A68t299 ,struct A68t414 *,struct A68t410 *),(struct A68t299 ,struct A68t414 *,struct A68t410 *,void *));
typedef struct A68t453  A68_453 ;    /* PROC(REF MODE299,REF MODE414) MODE410 */

A_PROCEDURE(A68_VOID ,A68t454,(struct A68t298 *,struct A68t414 *,struct A68t411 *),(struct A68t298 *,struct A68t414 *,struct A68t411 *,void *));
typedef struct A68t454  A68_454 ;    /* PROC(REF MODE298,REF MODE414) MODE411 */

A_PROCEDURE(A68_VOID ,A68t455,(struct A68t307 ,struct A68t414 *,struct A68t412 *),(struct A68t307 ,struct A68t414 *,struct A68t412 *,void *));
typedef struct A68t455  A68_455 ;    /* PROC(MODE307,REF MODE414) MODE412 */

A_PROCEDURE(A68_VOID ,A68t456,(struct A68t311 *,struct A68t414 *,struct A68t108 ,struct A68t413 *),(struct A68t311 *,struct A68t414 *,struct A68t108 ,struct A68t413 *,void *));
typedef struct A68t456  A68_456 ;    /* PROC(REF MODE311,REF MODE414,MODE108) MODE413 */
struct A68t414{
struct A68t415  Attr;
struct A68t416  Attrstr;
struct A68t417  Attrdec;
struct A68t418  Formula;
struct A68t419  Formulas;
struct A68t420  Intdec;
struct A68t421  Range;
struct A68t422  Formularange;
struct A68t423  Tstr;
struct A68t424  Type;
struct A68t425  Alternative;
struct A68t426  Alternatives;
struct A68t427  Typebody;
struct A68t428  Typedec;
struct A68t429  Constdec;
struct A68t430  Ualts;
struct A68t431  Ustr;
struct A68t432  Uchoices;
struct A68t433  Unit;
struct A68t434  Mparam;
struct A68t435  Macparams;
struct A68t436  Instance;
struct A68t437  Declaration;
struct A68t438  Printitems;
struct A68t439  Print;
struct A68t440  Fault;
struct A68t441  Names;
struct A68t442  Let;
struct A68t443  Seqchoices;
struct A68t444  Seqstep;
struct A68t445  Sequence;
struct A68t446  Make;
struct A68t447  Join;
struct A68t448  Joins;
struct A68t449  Step;
struct A68t450  Series;
struct A68t451  Fnbody;
struct A68t452  Macspec;
struct A68t453  Macspecs;
struct A68t454  Fndec;
struct A68t455  Outer;
struct A68t456  Closure;
struct A68t414 * Rest;
};
typedef struct A68t414  A68_414 ;    /* STRUCT(MODE415,MODE416,MODE417,MODE418,MODE419,MODE420,MODE421,MODE422,MODE423,MODE424,MODE425,MODE426,MODE427,MODE428,MODE429,MODE430,MODE431,MODE432,MODE433,MODE434,MODE435,MODE436,MODE437,MODE438,MODE439,MODE440,MODE441,MODE442,MODE443,MODE444,MODE445,MODE446,MODE447,MODE448,MODE449,MODE450,MODE451,MODE452,MODE453,MODE454,MODE455,MODE456,REF MODE414)  */
struct A68t458 ;

A_PROCEDURE(struct A68t414 *,A68t457,(struct A68t414 *,struct A68t458 ),(struct A68t414 *,struct A68t458 ,void *));
typedef struct A68t457  A68_457 ;    /* PROC(REF MODE414,MODE458) REF MODE414 */
A_VECTOR(struct A68t459 ,A68t458);
typedef struct A68t458  A68_458 ;    /* VECTOR [] MODE459 */
struct A68t459 { A68_INT mode; union {
struct A68t415  mode1;
struct A68t416  mode2;
struct A68t417  mode3;
struct A68t418  mode4;
struct A68t419  mode5;
struct A68t420  mode6;
struct A68t421  mode7;
struct A68t422  mode8;
struct A68t423  mode9;
struct A68t424  mode10;
struct A68t425  mode11;
struct A68t426  mode12;
struct A68t427  mode13;
struct A68t428  mode14;
struct A68t429  mode15;
struct A68t430  mode16;
struct A68t431  mode17;
struct A68t432  mode18;
struct A68t433  mode19;
struct A68t434  mode20;
struct A68t435  mode21;
struct A68t436  mode22;
struct A68t437  mode23;
struct A68t438  mode24;
struct A68t439  mode25;
struct A68t440  mode26;
struct A68t441  mode27;
struct A68t442  mode28;
struct A68t443  mode29;
struct A68t444  mode30;
struct A68t445  mode31;
struct A68t446  mode32;
struct A68t447  mode33;
struct A68t448  mode34;
struct A68t449  mode35;
struct A68t450  mode36;
struct A68t451  mode37;
struct A68t452  mode38;
struct A68t453  mode39;
struct A68t454  mode40;
struct A68t455  mode41;
struct A68t456  mode42;
} data; };
typedef struct A68t459  A68_459 ;    /* UNION(MODE415,MODE416,MODE417,MODE418,MODE419,MODE420,MODE421,MODE422,MODE423,MODE424,MODE425,MODE426,MODE427,MODE428,MODE429,MODE430,MODE431,MODE432,MODE433,MODE434,MODE435,MODE436,MODE437,MODE438,MODE439,MODE440,MODE441,MODE442,MODE443,MODE444,MODE445,MODE446,MODE447,MODE448,MODE449,MODE450,MODE451,MODE452,MODE453,MODE454,MODE455,MODE456)  */

A_PROCEDURE(A68_VOID ,A68t460,(struct A68t414 *),(struct A68t414 *,void *));
typedef struct A68t460  A68_460 ;    /* PROC(REF MODE414) VOID */

A_PROCEDURE(A68_VOID ,A68t461,(struct A68t158 ),(struct A68t158 ,void *));
typedef struct A68t461  A68_461 ;    /* PROC(MODE158) VOID */

A_PROCEDURE(A68_VOID ,A68t462,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t462  A68_462 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,52,A68t463);
typedef struct A68t463  A68_463 ;    /* STRUCT 52 CHAR */

A_PROCEDURE(A68_VOID ,A68t464,(struct A68t176 ,struct A68t175 *),(struct A68t176 ,struct A68t175 *,void *));
typedef struct A68t464  A68_464 ;    /* PROC(MODE176) MODE175 */

A_PROCEDURE(A68_VOID ,A68t465,(struct A68t188 ,struct A68t184 *),(struct A68t188 ,struct A68t184 *,void *));
typedef struct A68t465  A68_465 ;    /* PROC(MODE188) MODE184 */

A_PROCEDURE(A68_VOID ,A68t466,(struct A68t201 ,struct A68t200 *),(struct A68t201 ,struct A68t200 *,void *));
typedef struct A68t466  A68_466 ;    /* PROC(MODE201) MODE200 */

A_PROCEDURE(A68_VOID ,A68t467,(struct A68t216 ,struct A68t222 *),(struct A68t216 ,struct A68t222 *,void *));
typedef struct A68t467  A68_467 ;    /* PROC(MODE216) MODE222 */

A_PROCEDURE(A68_VOID ,A68t468,(struct A68t253 ,struct A68t262 *),(struct A68t253 ,struct A68t262 *,void *));
typedef struct A68t468  A68_468 ;    /* PROC(MODE253) MODE262 */

A_PROCEDURE(struct A68t298 *,A68t469,(A68_INT ,A68_BOOL ,A68_VC ,struct A68t294 ),(A68_INT ,A68_BOOL ,A68_VC ,struct A68t294 ,void *));
typedef struct A68t469  A68_469 ;    /* PROC(INT,BOOL,REF MODE26,MODE294) REF MODE298 */
struct A68t470{
A68_BOOL  Mac;
A_PAD_BOOL(PAD_148)
A68_VC  Fnname;
struct A68t264  Params;
A68_INT  Depth;
A_PAD_INT(PAD_149)
struct A68t470 * Rest;
};
typedef struct A68t470  A68_470 ;    /* STRUCT(BOOL,REF MODE26,REF MODE264,INT,REF MODE470)  */
struct A68t471{
A68_BOOL  Trace;
A_PAD_BOOL(PAD_150)
struct A68t470 * Monitors;
struct A68t36  Flt;
};
typedef struct A68t471  A68_471 ;    /* STRUCT(BOOL,REF MODE470,MODE36)  */
struct A68t472{
struct A68t298 * Fdec;
struct A68t301 * Env;
};
typedef struct A68t472  A68_472 ;    /* STRUCT(REF MODE298,REF MODE301)  */
A_ISTRUCT(struct A68t52 ,2,A68t473);
typedef struct A68t473  A68_473 ;    /* STRUCT 2 MODE52 */

A_PROCEDURE(A68_VOID ,A68t474,(A68_INT ,A68_INT ,struct A68t472 ,A68_VC *),(A68_INT ,A68_INT ,struct A68t472 ,A68_VC *,void *));
typedef struct A68t474  A68_474 ;    /* PROC(INT,INT,MODE472) REF MODE26 */
A_ISTRUCT(A68_CHAR ,8,A68t475);
typedef struct A68t475  A68_475 ;    /* STRUCT 8 CHAR */

A_PROCEDURE(A68_VOID ,A68t476,(A68_INT ,struct A68t472 ,A68_VC *),(A68_INT ,struct A68t472 ,A68_VC *,void *));
typedef struct A68t476  A68_476 ;    /* PROC(INT,MODE472) REF MODE26 */
struct A68t477{
A68_VC  Id;
A68_INT  Intno;
A_PAD_INT(PAD_151)
struct A68t199  Range;
};
typedef struct A68t477  A68_477 ;    /* STRUCT(REF MODE26,INT,MODE199)  */

A_PROCEDURE(A68_VOID ,A68t478,(struct A68t184 ,struct A68t301 *,struct A68t477 *),(struct A68t184 ,struct A68t301 *,struct A68t477 *,void *));
typedef struct A68t478  A68_478 ;    /* PROC(MODE184,REF MODE301) MODE477 */
A_ISTRUCT(A68_CHAR ,10,A68t479);
typedef struct A68t479  A68_479 ;    /* STRUCT 10 CHAR */

A_PROCEDURE(A68_VOID ,A68t480,(struct A68t173 *),(struct A68t173 *,void *));
typedef struct A68t480  A68_480 ;    /* PROC(REF MODE173) VOID */
A_ISTRUCT(A68_CHAR ,2,A68t481);
typedef struct A68t481  A68_481 ;    /* STRUCT 2 CHAR */

A_PROCEDURE(A68_VOID ,A68t482,(struct A68t175 ,struct A68t472 ),(struct A68t175 ,struct A68t472 ,void *));
typedef struct A68t482  A68_482 ;    /* PROC(MODE175,MODE472) VOID */

A_PROCEDURE(A68_VOID ,A68t483,(struct A68t184 ),(struct A68t184 ,void *));
typedef struct A68t483  A68_483 ;    /* PROC(MODE184) VOID */
A_ISTRUCT(A68_CHAR ,3,A68t484);
typedef struct A68t484  A68_484 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t485);
typedef struct A68t485  A68_485 ;    /* STRUCT 6 CHAR */

A_PROCEDURE(A68_VOID ,A68t486,(struct A68t200 ,struct A68t472 ),(struct A68t200 ,struct A68t472 ,void *));
typedef struct A68t486  A68_486 ;    /* PROC(MODE200,MODE472) VOID */
A_ISTRUCT(A68_CHAR ,7,A68t487);
typedef struct A68t487  A68_487 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t488);
typedef struct A68t488  A68_488 ;    /* STRUCT 5 CHAR */

A_PROCEDURE(A68_VOID ,A68t489,(struct A68t222 ,struct A68t472 ),(struct A68t222 ,struct A68t472 ,void *));
typedef struct A68t489  A68_489 ;    /* PROC(MODE222,MODE472) VOID */

A_PROCEDURE(A68_VOID ,A68t490,(struct A68t198 ,struct A68t184 *),(struct A68t198 ,struct A68t184 *,void *));
typedef struct A68t490  A68_490 ;    /* PROC(MODE198) MODE184 */
A_ISTRUCT(A68_CHAR ,11,A68t491);
typedef struct A68t491  A68_491 ;    /* STRUCT 11 CHAR */

A_PROCEDURE(A68_VOID ,A68t492,(struct A68t283 ,struct A68t472 ,struct A68t265 *),(struct A68t283 ,struct A68t472 ,struct A68t265 *,void *));
typedef struct A68t492  A68_492 ;    /* PROC(MODE283,MODE472) MODE265 */
A_ISTRUCT(A68_CHAR ,23,A68t493);
typedef struct A68t493  A68_493 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t494);
typedef struct A68t494  A68_494 ;    /* STRUCT 21 CHAR */

A_PROCEDURE(A68_VOID ,A68t495,(struct A68t471 *),(struct A68t471 *,void *));
typedef struct A68t495  A68_495 ;    /* PROC(REF MODE471) VOID */
A_ISTRUCT(A68_CHAR ,41,A68t496);
typedef struct A68t496  A68_496 ;    /* STRUCT 41 CHAR */

A_PROCEDURE(A68_VOID ,A68t497,(struct A68t264 ,struct A68t472 ),(struct A68t264 ,struct A68t472 ,void *));
typedef struct A68t497  A68_497 ;    /* PROC(REF MODE264,MODE472) VOID */

A_PROCEDURE(A68_VOID ,A68t498,(A68_BOOL ,struct A68t472 ,struct A68t471 *),(A68_BOOL ,struct A68t472 ,struct A68t471 *,void *));
typedef struct A68t498  A68_498 ;    /* PROC(BOOL,MODE472,REF MODE471) VOID */
A_ISTRUCT(A68_CHAR ,19,A68t499);
typedef struct A68t499  A68_499 ;    /* STRUCT 19 CHAR */

A_PROCEDURE(A68_VOID ,A68t500,(struct A68t298 *,struct A68t471 *),(struct A68t298 *,struct A68t471 *,void *));
typedef struct A68t500  A68_500 ;    /* PROC(REF MODE298,REF MODE471) VOID */

A_PROCEDURE(A68_VOID ,A68t501,(struct A68t299 ,struct A68t472 ,struct A68t471 *),(struct A68t299 ,struct A68t472 ,struct A68t471 *,void *));
typedef struct A68t501  A68_501 ;    /* PROC(REF MODE299,MODE472,REF MODE471) VOID */

A_PROCEDURE(A68_VOID ,A68t502,(A68_BOOL ,struct A68t264 *),(A68_BOOL ,struct A68t264 *,void *));
typedef struct A68t502  A68_502 ;    /* PROC(BOOL) MODE264 */

A_PROCEDURE(A68_VOID ,A68t503,(A68_VC ,struct A68t264 ,struct A68t472 ,struct A68t471 *),(A68_VC ,struct A68t264 ,struct A68t472 ,struct A68t471 *,void *));
typedef struct A68t503  A68_503 ;    /* PROC(REF MODE26,REF MODE264,MODE472,REF MODE471) VOID */

A_PROCEDURE(A68_VOID ,A68t504,(struct A68t472 ,struct A68t471 *),(struct A68t472 ,struct A68t471 *,void *));
typedef struct A68t504  A68_504 ;    /* PROC(MODE472,REF MODE471) VOID */

A_PROCEDURE(A68_VOID ,A68t505,(A68_VC ,struct A68t472 ,struct A68t471 *),(A68_VC ,struct A68t472 ,struct A68t471 *,void *));
typedef struct A68t505  A68_505 ;    /* PROC(MODE26,MODE472,REF MODE471) VOID */
struct A68t507{
struct A68t510 * Sink;
struct A68t510 * Source;
};
typedef struct A68t507  A68_507 ;    /* STRUCT(REF MODE510,REF MODE510)  */
A_VECTOR(struct A68t510 *,A68t509);
typedef struct A68t509  A68_509 ;    /* VECTOR [] REF MODE510 */
struct A68t508{
struct A68t509  Row;
};
typedef struct A68t508  A68_508 ;    /* STRUCT(REF MODE509)  */
struct A68t510 { A68_INT mode; union {
struct A68t227  mode1;
struct A68t508  mode2;
struct A68t507  mode3;
} data; };
typedef struct A68t510  A68_510 ;    /* UNION(MODE227,MODE508,MODE507)  */

A_PROCEDURE(struct A68t510 *,A68t511,(struct A68t509 ),(struct A68t509 ,void *));
typedef struct A68t511  A68_511 ;    /* PROC(REF MODE509) REF MODE510 */
struct A68t512{
A68_INT  Nameno;
A_PAD_INT(PAD_152)
struct A68t510 * Joinup;
struct A68t512 * Rest;
};
typedef struct A68t512  A68_512 ;    /* STRUCT(INT,REF MODE510,REF MODE512)  */

A_PROCEDURE(A68_BOOL ,A68t513,(struct A68t510 *),(struct A68t510 *,void *));
typedef struct A68t513  A68_513 ;    /* PROC(REF MODE510) BOOL */

A_PROCEDURE(A68_VOID ,A68t514,(struct A68t510 **,A68_BOOL ),(struct A68t510 **,A68_BOOL ,void *));
typedef struct A68t514  A68_514 ;    /* PROC(REF REF MODE510,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t515,(struct A68t508 ,struct A68t507 *),(struct A68t508 ,struct A68t507 *,void *));
typedef struct A68t515  A68_515 ;    /* PROC(MODE508) MODE507 */

A_PROCEDURE(A68_VOID ,A68t516,(A68_BOOL ,struct A68t509 *),(A68_BOOL ,struct A68t509 *,void *));
typedef struct A68t516  A68_516 ;    /* PROC(BOOL) MODE509 */

A_PROCEDURE(struct A68t510 *,A68t517,(struct A68t200 ,A68_INT ,A68_BOOL ,struct A68t472 ),(struct A68t200 ,A68_INT ,A68_BOOL ,struct A68t472 ,void *));
typedef struct A68t517  A68_517 ;    /* PROC(MODE200,INT,BOOL,MODE472) REF MODE510 */

A_PROCEDURE(struct A68t510 *,A68t518,(A68_INT ,struct A68t512 *),(A68_INT ,struct A68t512 *,void *));
typedef struct A68t518  A68_518 ;    /* PROC(INT,REF MODE512) REF MODE510 */

A_PROCEDURE(A68_VOID ,A68t519,(struct A68t510 **,A68_BOOL ,A68_INT ,A68_INT ),(struct A68t510 **,A68_BOOL ,A68_INT ,A68_INT ,void *));
typedef struct A68t519  A68_519 ;    /* PROC(REF REF MODE510,BOOL,INT,INT) VOID */
A_ISTRUCT(A68_CHAR ,15,A68t520);
typedef struct A68t520  A68_520 ;    /* STRUCT 15 CHAR */

A_PROCEDURE(A68_VOID ,A68t521,(A68_INT ,struct A68t510 *,struct A68t510 **),(A68_INT ,struct A68t510 *,struct A68t510 **,void *));
typedef struct A68t521  A68_521 ;    /* PROC(INT,REF MODE510,REF REF MODE510) VOID */

A_PROCEDURE(struct A68t512 *,A68t522,(A68_INT ,struct A68t200 ,A68_BOOL ,struct A68t472 ,struct A68t512 *),(A68_INT ,struct A68t200 ,A68_BOOL ,struct A68t472 ,struct A68t512 *,void *));
typedef struct A68t522  A68_522 ;    /* PROC(INT,MODE200,BOOL,MODE472,REF MODE512) REF MODE512 */

A_PROCEDURE(A68_VOID ,A68t523,(struct A68t510 **,struct A68t472 ,struct A68t471 *),(struct A68t510 **,struct A68t472 ,struct A68t471 *,void *));
typedef struct A68t523  A68_523 ;    /* PROC(REF REF MODE510,MODE472,REF MODE471) VOID */

A_PROCEDURE(A68_BOOL ,A68t524,(struct A68t510 *,struct A68t472 ,struct A68t471 *),(struct A68t510 *,struct A68t472 ,struct A68t471 *,void *));
typedef struct A68t524  A68_524 ;    /* PROC(REF MODE510,MODE472,REF MODE471) BOOL */
A_ISTRUCT(A68_CHAR ,37,A68t525);
typedef struct A68t525  A68_525 ;    /* STRUCT 37 CHAR */

A_PROCEDURE(struct A68t512 *,A68t526,(struct A68t512 *,struct A68t472 ,struct A68t471 *),(struct A68t512 *,struct A68t472 ,struct A68t471 *,void *));
typedef struct A68t526  A68_526 ;    /* PROC(REF MODE512,MODE472,REF MODE471) REF MODE512 */
A_ISTRUCT(A68_CHAR ,36,A68t527);
typedef struct A68t527  A68_527 ;    /* STRUCT 36 CHAR */

A_PROCEDURE(A68_BOOL ,A68t528,(struct A68t173 *,struct A68t173 *),(struct A68t173 *,struct A68t173 *,void *));
typedef struct A68t528  A68_528 ;    /* PROC(REF MODE173,REF MODE173) BOOL */

A_PROCEDURE(A68_BOOL ,A68t529,(struct A68t222 ,struct A68t222 ,A68_BOOL ),(struct A68t222 ,struct A68t222 ,A68_BOOL ,void *));
typedef struct A68t529  A68_529 ;    /* PROC(MODE222,MODE222,BOOL) BOOL */

A_PROCEDURE(A68_INT ,A68t530,(struct A68t222 ),(struct A68t222 ,void *));
typedef struct A68t530  A68_530 ;    /* PROC(MODE222) INT */

A_PROCEDURE(A68_BOOL ,A68t531,(A68_INT ,A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t531  A68_531 ;    /* PROC(INT,INT,INT,INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t532,(struct A68t32 ,struct A68t32 ),(struct A68t32 ,struct A68t32 ,void *));
typedef struct A68t532  A68_532 ;    /* PROC(REF MODE32,REF MODE32) BOOL */

A_PROCEDURE(A68_BOOL ,A68t533,(struct A68t222 ,struct A68t222 ),(struct A68t222 ,struct A68t222 ,void *));
typedef struct A68t533  A68_533 ;    /* PROC(MODE222,MODE222) BOOL */

A_PROCEDURE(A68_BOOL ,A68t534,(struct A68t181 *,struct A68t181 *,struct A68t472 ,struct A68t472 ),(struct A68t181 *,struct A68t181 *,struct A68t472 ,struct A68t472 ,void *));
typedef struct A68t534  A68_534 ;    /* PROC(REF MODE181,REF MODE181,MODE472,MODE472) BOOL */

A_PROCEDURE(A68_BOOL ,A68t535,(struct A68t175 ,struct A68t175 ,struct A68t472 ,struct A68t472 ),(struct A68t175 ,struct A68t175 ,struct A68t472 ,struct A68t472 ,void *));
typedef struct A68t535  A68_535 ;    /* PROC(MODE175,MODE175,MODE472,MODE472) BOOL */

A_PROCEDURE(A68_BOOL ,A68t536,(struct A68t262 ,struct A68t262 ,struct A68t472 ,struct A68t472 ),(struct A68t262 ,struct A68t262 ,struct A68t472 ,struct A68t472 ,void *));
typedef struct A68t536  A68_536 ;    /* PROC(MODE262,MODE262,MODE472,MODE472) BOOL */

A_PROCEDURE(A68_BOOL ,A68t537,(struct A68t200 ,struct A68t200 ,struct A68t472 ,struct A68t472 ),(struct A68t200 ,struct A68t200 ,struct A68t472 ,struct A68t472 ,void *));
typedef struct A68t537  A68_537 ;    /* PROC(MODE200,MODE200,MODE472,MODE472) BOOL */

A_PROCEDURE(A68_BOOL ,A68t538,(A68_INT ,struct A68t222 ,struct A68t472 ,struct A68t471 *),(A68_INT ,struct A68t222 ,struct A68t472 ,struct A68t471 *,void *));
typedef struct A68t538  A68_538 ;    /* PROC(INT,MODE222,MODE472,REF MODE471) BOOL */
A_ISTRUCT(A68_CHAR ,29,A68t539);
typedef struct A68t539  A68_539 ;    /* STRUCT 29 CHAR */

A_PROCEDURE(A68_VOID ,A68t540,(struct A68t200 ,struct A68t222 ,struct A68t237 *,struct A68t472 ,struct A68t471 *),(struct A68t200 ,struct A68t222 ,struct A68t237 *,struct A68t472 ,struct A68t471 *,void *));
typedef struct A68t540  A68_540 ;    /* PROC(MODE200,MODE222,REF MODE237,MODE472,REF MODE471) VOID */

A_PROCEDURE(struct A68t215 *,A68t541,(struct A68t200 ,struct A68t472 ),(struct A68t200 ,struct A68t472 ,void *));
typedef struct A68t541  A68_541 ;    /* PROC(MODE200,MODE472) REF MODE215 */

A_PROCEDURE(A68_VOID ,A68t542,(struct A68t200 ,A68_INT *,struct A68t200 *,struct A68t472 ),(struct A68t200 ,A68_INT *,struct A68t200 *,struct A68t472 ,void *));
typedef struct A68t542  A68_542 ;    /* PROC(MODE200,REF INT,REF MODE200,MODE472) VOID */
A_ISTRUCT(A68_CHAR ,27,A68t543);
typedef struct A68t543  A68_543 ;    /* STRUCT 27 CHAR */

A_PROCEDURE(A68_VOID ,A68t544,(struct A68t286 *,struct A68t472 ,struct A68t471 *),(struct A68t286 *,struct A68t472 ,struct A68t471 *,void *));
typedef struct A68t544  A68_544 ;    /* PROC(REF MODE286,MODE472,REF MODE471) VOID */
A_ISTRUCT(A68_CHAR ,25,A68t545);
typedef struct A68t545  A68_545 ;    /* STRUCT 25 CHAR */

A_PROCEDURE(A68_VOID ,A68t546,(struct A68t292 *,A68_BOOL ,struct A68t472 ,struct A68t471 *),(struct A68t292 *,A68_BOOL ,struct A68t472 ,struct A68t471 *,void *));
typedef struct A68t546  A68_546 ;    /* PROC(REF MODE292,BOOL,MODE472,REF MODE471) VOID */
A_ISTRUCT(A68_CHAR ,76,A68t547);
typedef struct A68t547  A68_547 ;    /* STRUCT 76 CHAR */
A_ISTRUCT(A68_CHAR ,47,A68t548);
typedef struct A68t548  A68_548 ;    /* STRUCT 47 CHAR */

A_PROCEDURE(A68_VOID ,A68t549,(struct A68t291 *,A68_BOOL ,struct A68t472 ,struct A68t471 *),(struct A68t291 *,A68_BOOL ,struct A68t472 ,struct A68t471 *,void *));
typedef struct A68t549  A68_549 ;    /* PROC(REF MODE291,BOOL,MODE472,REF MODE471) VOID */
A_ISTRUCT(A68_CHAR ,70,A68t550);
typedef struct A68t550  A68_550 ;    /* STRUCT 70 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t551);
typedef struct A68t551  A68_551 ;    /* STRUCT 9 CHAR */

A_PROCEDURE(A68_VOID ,A68t552,(A68_INT ,struct A68t222 ,struct A68t222 ,struct A68t472 ,struct A68t471 *),(A68_INT ,struct A68t222 ,struct A68t222 ,struct A68t472 ,struct A68t471 *,void *));
typedef struct A68t552  A68_552 ;    /* PROC(INT,MODE222,MODE222,MODE472,REF MODE471) VOID */
A_ISTRUCT(A68_CHAR ,77,A68t553);
typedef struct A68t553  A68_553 ;    /* STRUCT 77 CHAR */
A_ISTRUCT(A68_CHAR ,40,A68t554);
typedef struct A68t554  A68_554 ;    /* STRUCT 40 CHAR */

A_PROCEDURE(A68_VOID ,A68t555,(struct A68t288 *,A68_BOOL ,struct A68t472 ,struct A68t471 *),(struct A68t288 *,A68_BOOL ,struct A68t472 ,struct A68t471 *,void *));
typedef struct A68t555  A68_555 ;    /* PROC(REF MODE288,BOOL,MODE472,REF MODE471) VOID */

A_PROCEDURE(A68_VOID ,A68t556,(struct A68t289 *,A68_BOOL ,struct A68t472 ,struct A68t471 *),(struct A68t289 *,A68_BOOL ,struct A68t472 ,struct A68t471 *,void *));
typedef struct A68t556  A68_556 ;    /* PROC(REF MODE289,BOOL,MODE472,REF MODE471) VOID */

A_PROCEDURE(A68_VOID ,A68t557,(struct A68t290 *,A68_BOOL ,struct A68t472 ,struct A68t471 *),(struct A68t290 *,A68_BOOL ,struct A68t472 ,struct A68t471 *,void *));
typedef struct A68t557  A68_557 ;    /* PROC(REF MODE290,BOOL,MODE472,REF MODE471) VOID */
A_ISTRUCT(A68_CHAR ,75,A68t558);
typedef struct A68t558  A68_558 ;    /* STRUCT 75 CHAR */
A_ISTRUCT(A68_CHAR ,38,A68t559);
typedef struct A68t559  A68_559 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(A68_CHAR ,62,A68t560);
typedef struct A68t560  A68_560 ;    /* STRUCT 62 CHAR */
A_ISTRUCT(A68_CHAR ,53,A68t561);
typedef struct A68t561  A68_561 ;    /* STRUCT 53 CHAR */

A_PROCEDURE(A68_VOID ,A68t562,(struct A68t190 *,struct A68t414 *,struct A68t472 ,struct A68t471 *,struct A68t375 *),(struct A68t190 *,struct A68t414 *,struct A68t472 ,struct A68t471 *,struct A68t375 *,void *));
typedef struct A68t562  A68_562 ;    /* PROC(REF MODE190,REF MODE414,MODE472,REF MODE471) MODE375 */

A_PROCEDURE(A68_VOID ,A68t563,(struct A68t189 *,struct A68t414 *,struct A68t472 ,struct A68t471 *,struct A68t375 *),(struct A68t189 *,struct A68t414 *,struct A68t472 ,struct A68t471 *,struct A68t375 *,void *));
typedef struct A68t563  A68_563 ;    /* PROC(REF MODE189,REF MODE414,MODE472,REF MODE471) MODE375 */

A_PROCEDURE(A68_VOID ,A68t564,(struct A68t191 *,struct A68t414 *,struct A68t375 *),(struct A68t191 *,struct A68t414 *,struct A68t375 *,void *));
typedef struct A68t564  A68_564 ;    /* PROC(REF MODE191,REF MODE414) MODE375 */

A_PROCEDURE(A68_BOOL ,A68t565,(A68_INT ,A68_INT ,A68_INT ,struct A68t472 ,struct A68t471 *),(A68_INT ,A68_INT ,A68_INT ,struct A68t472 ,struct A68t471 *,void *));
typedef struct A68t565  A68_565 ;    /* PROC(INT,INT,INT,MODE472,REF MODE471) BOOL */
A_ISTRUCT(A68_CHAR ,14,A68t566);
typedef struct A68t566  A68_566 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(struct A68t52 ,6,A68t567);
typedef struct A68t567  A68_567 ;    /* STRUCT 6 MODE52 */
A_ISTRUCT(A68_CHAR ,20,A68t568);
typedef struct A68t568  A68_568 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t569);
typedef struct A68t569  A68_569 ;    /* STRUCT 13 CHAR */

A_PROCEDURE(A68_VOID ,A68t570,(struct A68t186 *,struct A68t414 *,struct A68t472 ,struct A68t471 *,struct A68t375 *),(struct A68t186 *,struct A68t414 *,struct A68t472 ,struct A68t471 *,struct A68t375 *,void *));
typedef struct A68t570  A68_570 ;    /* PROC(REF MODE186,REF MODE414,MODE472,REF MODE471) MODE375 */

A_PROCEDURE(A68_BOOL ,A68t571,(A68_VC ,struct A68t173 *),(A68_VC ,struct A68t173 *,void *));
typedef struct A68t571  A68_571 ;    /* PROC(REF MODE26,REF MODE173) BOOL */

A_PROCEDURE(A68_VOID ,A68t572,(struct A68t175 ,struct A68t175 ,struct A68t175 *),(struct A68t175 ,struct A68t175 ,struct A68t175 *,void *));
typedef struct A68t572  A68_572 ;    /* PROC(MODE175,MODE175) MODE175 */

A_PROCEDURE(A68_VOID ,A68t573,(struct A68t268 *,struct A68t414 *,struct A68t471 *),(struct A68t268 *,struct A68t414 *,struct A68t471 *,void *));
typedef struct A68t573  A68_573 ;    /* PROC(REF MODE268,REF MODE414,REF MODE471) VOID */

A_PROCEDURE(A68_INT ,A68t574,(struct A68t264 ),(struct A68t264 ,void *));
typedef struct A68t574  A68_574 ;    /* PROC(REF MODE264) INT */
struct A68t575{
struct A68t264  Params;
A68_INT  Index;
A_PAD_INT(PAD_153)
A68_BOOL  Specchanged;
A_PAD_BOOL(PAD_154)
struct A68t575 * Rest;
};
typedef struct A68t575  A68_575 ;    /* STRUCT(REF MODE264,INT,BOOL,REF MODE575)  */
A_VECTOR(struct A68t575 *,A68t576);
typedef struct A68t576  A68_576 ;    /* VECTOR [] REF MODE575 */
struct A68t577{
A68_INT  Newdecno;
A_PAD_INT(PAD_155)
A68_INT  Depth;
A_PAD_INT(PAD_156)
A68_BOOL  Declared;
A_PAD_BOOL(PAD_157)
struct A68t577 * Rest;
};
typedef struct A68t577  A68_577 ;    /* STRUCT(INT,INT,BOOL,REF MODE577)  */
struct A68t578{
struct A68t577 * Uselist;
struct A68t578 * Rest;
};
typedef struct A68t578  A68_578 ;    /* STRUCT(REF MODE577,REF MODE578)  */
A_VECTOR(struct A68t583 *,A68t581);
typedef struct A68t581  A68_581 ;    /* VECTOR [] REF MODE583 */
A_VECTOR(struct A68t577 *,A68t582);
typedef struct A68t582  A68_582 ;    /* VECTOR [] REF MODE577 */
struct A68t580{
struct A68t301 * Old;
struct A68t464  Subs_ampar;
struct A68t465  Subs_fmpar;
struct A68t466  Subs_tmpar;
struct A68t467  Subs_cmpar;
struct A68t468  Subs_fnmpar;
struct A68t32  Repldecs;
struct A68t581  Mptable;
struct A68t582  Newenvattrnos;
struct A68t582  Newenvtypenos;
struct A68t582  Newenvfnnos;
};
typedef struct A68t580  A68_580 ;    /* STRUCT(REF MODE301,MODE464,MODE465,MODE466,MODE467,MODE468,REF MODE32,REF MODE581,REF MODE582,REF MODE582,REF MODE582)  */
struct A68t583{
A68_INT  Fnno;
A_PAD_INT(PAD_158)
struct A68t298 * Fdec;
struct A68t580 * Info;
};
typedef struct A68t583  A68_583 ;    /* STRUCT(INT,REF MODE298,REF MODE580)  */
struct A68t584{
struct A68t583 * Minfo;
struct A68t584 * Rest;
};
typedef struct A68t584  A68_584 ;    /* STRUCT(REF MODE583,REF MODE584)  */

A_PROCEDURE(A68_VOID ,A68t585,(struct A68t311 *,struct A68t173 *,A68_BOOL ,struct A68t108 ,struct A68t413 *),(struct A68t311 *,struct A68t173 *,A68_BOOL ,struct A68t108 ,struct A68t413 *,void *));
typedef struct A68t585  A68_585 ;    /* PROC(REF MODE311,REF MODE173,BOOL,MODE108) MODE413 */
struct A68t586 { A68_INT mode; union {
struct A68t241 * mode1;
struct A68t239 * mode2;
struct A68t240 * mode3;
struct A68t245 * mode4;
struct A68t244 * mode5;
struct A68t234 * mode6;
struct A68t235 * mode7;
} data; };
typedef struct A68t586  A68_586 ;    /* UNION(REF MODE241,REF MODE239,REF MODE240,REF MODE245,REF MODE244,REF MODE234,REF MODE235)  */
struct A68t587 { A68_INT mode; union {
struct A68t227 * mode1;
struct A68t228 * mode2;
struct A68t230 * mode3;
struct A68t231 * mode4;
} data; };
typedef struct A68t587  A68_587 ;    /* UNION(REF MODE227,REF MODE228,REF MODE230,REF MODE231)  */

A_PROCEDURE(A68_BOOL ,A68t588,(struct A68t222 ),(struct A68t222 ,void *));
typedef struct A68t588  A68_588 ;    /* PROC(MODE222) BOOL */

A_PROCEDURE(A68_BOOL ,A68t589,(struct A68t307 ),(struct A68t307 ,void *));
typedef struct A68t589  A68_589 ;    /* PROC(MODE307) BOOL */
struct A68t590 { A68_INT mode; union {
struct A68t242 * mode1;
struct A68t247 * mode2;
struct A68t248 * mode3;
} data; };
typedef struct A68t590  A68_590 ;    /* UNION(REF MODE242,REF MODE247,REF MODE248)  */
A_ISTRUCT(struct A68t459 ,6,A68t591);
typedef struct A68t591  A68_591 ;    /* STRUCT 6 MODE459 */
A_VECTOR(struct A68t576 ,A68t592);
typedef struct A68t592  A68_592 ;    /* VECTOR [] REF MODE576 */

A_PROCEDURE(A68_VOID ,A68t593,(A68_BOOL ,struct A68t592 *),(A68_BOOL ,struct A68t592 *,void *));
typedef struct A68t593  A68_593 ;    /* PROC(BOOL) MODE592 */

A_PROCEDURE(A68_VOID ,A68t594,(A68_INT ,struct A68t308 *,struct A68t307 *),(A68_INT ,struct A68t308 *,struct A68t307 *,void *));
typedef struct A68t594  A68_594 ;    /* PROC(INT,REF MODE308) MODE307 */

A_PROCEDURE(A68_VOID ,A68t595,(struct A68t188 ,struct A68t414 *,struct A68t472 ,struct A68t32 ,struct A68t465 ,struct A68t375 *),(struct A68t188 ,struct A68t414 *,struct A68t472 ,struct A68t32 ,struct A68t465 ,struct A68t375 *,void *));
typedef struct A68t595  A68_595 ;    /* PROC(MODE188,REF MODE414,MODE472,REF MODE32,MODE465) MODE375 */

A_PROCEDURE(A68_VOID ,A68t596,(struct A68t243 *,struct A68t414 *,struct A68t301 *,struct A68t32 ,struct A68t510 **,struct A68t390 *),(struct A68t243 *,struct A68t414 *,struct A68t301 *,struct A68t32 ,struct A68t510 **,struct A68t390 *,void *));
typedef struct A68t596  A68_596 ;    /* PROC(REF MODE243,REF MODE414,REF MODE301,REF MODE32,REF REF MODE510) MODE390 */

A_PROCEDURE(A68_VOID ,A68t597,(struct A68t242 *,struct A68t414 *,struct A68t390 *),(struct A68t242 *,struct A68t414 *,struct A68t390 *,void *));
typedef struct A68t597  A68_597 ;    /* PROC(REF MODE242,REF MODE414) MODE390 */

A_PROCEDURE(A68_VOID ,A68t598,(struct A68t222 ,struct A68t472 ,struct A68t222 *),(struct A68t222 ,struct A68t472 ,struct A68t222 *,void *));
typedef struct A68t598  A68_598 ;    /* PROC(MODE222,MODE472) MODE222 */

A_PROCEDURE(A68_VOID ,A68t599,(struct A68t200 ,struct A68t222 ,A68_BOOL ,struct A68t222 *),(struct A68t200 ,struct A68t222 ,A68_BOOL ,struct A68t222 *,void *));
typedef struct A68t599  A68_599 ;    /* PROC(MODE200,MODE222,BOOL) MODE222 */

A_PROCEDURE(struct A68t237 *,A68t600,(struct A68t237 *,A68_INT ,A68_INT ),(struct A68t237 *,A68_INT ,A68_INT ,void *));
typedef struct A68t600  A68_600 ;    /* PROC(REF MODE237,INT,INT) REF MODE237 */

A_PROCEDURE(A68_VOID ,A68t601,(struct A68t232 *,struct A68t414 *,struct A68t472 ,struct A68t510 **,struct A68t390 *),(struct A68t232 *,struct A68t414 *,struct A68t472 ,struct A68t510 **,struct A68t390 *,void *));
typedef struct A68t601  A68_601 ;    /* PROC(REF MODE232,REF MODE414,MODE472,REF REF MODE510) MODE390 */

A_PROCEDURE(A68_VOID ,A68t602,(struct A68t233 *,struct A68t414 *,struct A68t472 ,struct A68t510 **,struct A68t390 *),(struct A68t233 *,struct A68t414 *,struct A68t472 ,struct A68t510 **,struct A68t390 *,void *));
typedef struct A68t602  A68_602 ;    /* PROC(REF MODE233,REF MODE414,MODE472,REF REF MODE510) MODE390 */

A_PROCEDURE(A68_VOID ,A68t603,(A68_INT ,struct A68t222 ,struct A68t222 ,struct A68t472 ,struct A68t390 *),(A68_INT ,struct A68t222 ,struct A68t222 ,struct A68t472 ,struct A68t390 *,void *));
typedef struct A68t603  A68_603 ;    /* PROC(INT,MODE222,MODE222,MODE472) MODE390 */

A_PROCEDURE(A68_VOID ,A68t604,(A68_INT ,struct A68t222 ,struct A68t222 ,struct A68t472 ,struct A68t471 *,struct A68t390 *),(A68_INT ,struct A68t222 ,struct A68t222 ,struct A68t472 ,struct A68t471 *,struct A68t390 *,void *));
typedef struct A68t604  A68_604 ;    /* PROC(INT,MODE222,MODE222,MODE472,REF MODE471) MODE390 */
A_ISTRUCT(A68_CHAR ,31,A68t605);
typedef struct A68t605  A68_605 ;    /* STRUCT 31 CHAR */

A_PROCEDURE(A68_VOID ,A68t606,(struct A68t238 *,struct A68t414 *,struct A68t472 ,struct A68t471 *,struct A68t510 **,struct A68t390 *),(struct A68t238 *,struct A68t414 *,struct A68t472 ,struct A68t471 *,struct A68t510 **,struct A68t390 *,void *));
typedef struct A68t606  A68_606 ;    /* PROC(REF MODE238,REF MODE414,MODE472,REF MODE471,REF REF MODE510) MODE390 */

A_PROCEDURE(A68_INT ,A68t607,(A68_INT ,struct A68t412 ,struct A68t264 ,A68_BOOL ),(A68_INT ,struct A68t412 ,struct A68t264 ,A68_BOOL ,void *));
typedef struct A68t607  A68_607 ;    /* PROC(INT,MODE412,REF MODE264,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t608,(A68_BOOL ,struct A68t576 *),(A68_BOOL ,struct A68t576 *,void *));
typedef struct A68t608  A68_608 ;    /* PROC(BOOL) MODE576 */

A_PROCEDURE(A68_VOID ,A68t609,(struct A68t307 ,struct A68t414 *,struct A68t392 ,struct A68t584 *,struct A68t301 *,A68_BOOL *,struct A68t470 *,struct A68t412 *),(struct A68t307 ,struct A68t414 *,struct A68t392 ,struct A68t584 *,struct A68t301 *,A68_BOOL *,struct A68t470 *,struct A68t412 *,void *));
typedef struct A68t609  A68_609 ;    /* PROC(MODE307,REF MODE414,MODE392,REF MODE584,REF MODE301,REF BOOL,REF MODE470) MODE412 */
A_VECTOR(struct A68t578 *,A68t610);
typedef struct A68t610  A68_610 ;    /* VECTOR [] REF MODE578 */

A_PROCEDURE(A68_VOID ,A68t611,(A68_BOOL ,struct A68t610 *),(A68_BOOL ,struct A68t610 *,void *));
typedef struct A68t611  A68_611 ;    /* PROC(BOOL) MODE610 */
A_VECTOR(struct A68t264 ,A68t612);
typedef struct A68t612  A68_612 ;    /* VECTOR [] REF MODE264 */

A_PROCEDURE(A68_VOID ,A68t613,(A68_BOOL ,struct A68t612 *),(A68_BOOL ,struct A68t612 *,void *));
typedef struct A68t613  A68_613 ;    /* PROC(BOOL) MODE612 */

A_PROCEDURE(A68_VOID ,A68t614,(A68_BOOL ,struct A68t581 *),(A68_BOOL ,struct A68t581 *,void *));
typedef struct A68t614  A68_614 ;    /* PROC(BOOL) MODE581 */

A_PROCEDURE(A68_VOID ,A68t615,(struct A68t298 *,struct A68t414 *,struct A68t392 ,struct A68t584 *,struct A68t301 *,struct A68t580 *,A68_BOOL *,struct A68t470 *,struct A68t411 *),(struct A68t298 *,struct A68t414 *,struct A68t392 ,struct A68t584 *,struct A68t301 *,struct A68t580 *,A68_BOOL *,struct A68t470 *,struct A68t411 *,void *));
typedef struct A68t615  A68_615 ;    /* PROC(REF MODE298,REF MODE414,MODE392,REF MODE584,REF MODE301,REF MODE580,REF BOOL,REF MODE470) MODE411 */

A_PROCEDURE(A68_INT ,A68t616,(A68_INT ,struct A68t582 ),(A68_INT ,struct A68t582 ,void *));
typedef struct A68t616  A68_616 ;    /* PROC(INT,REF MODE582) INT */
A_ISTRUCT(A68_CHAR ,17,A68t617);
typedef struct A68t617  A68_617 ;    /* STRUCT 17 CHAR */

A_PROCEDURE(A68_INT ,A68t618,(A68_INT ,A68_VC ,struct A68t381 ,struct A68t372 ),(A68_INT ,A68_VC ,struct A68t381 ,struct A68t372 ,void *));
typedef struct A68t618  A68_618 ;    /* PROC(INT,REF MODE26,MODE381,MODE372) INT */

A_PROCEDURE(A68_VOID ,A68t619,(A68_BOOL ,struct A68t300 *),(A68_BOOL ,struct A68t300 *,void *));
typedef struct A68t619  A68_619 ;    /* PROC(BOOL) MODE300 */

A_PROCEDURE(A68_BOOL ,A68t620,(struct A68t264 ,struct A68t264 ,struct A68t472 ,struct A68t472 ),(struct A68t264 ,struct A68t264 ,struct A68t472 ,struct A68t472 ,void *));
typedef struct A68t620  A68_620 ;    /* PROC(REF MODE264,REF MODE264,MODE472,MODE472) BOOL */

A_PROCEDURE(A68_INT ,A68t621,(A68_INT ,struct A68t264 ,A68_BOOL *),(A68_INT ,struct A68t264 ,A68_BOOL *,void *));
typedef struct A68t621  A68_621 ;    /* PROC(INT,REF MODE264,REF BOOL) INT */

A_PROCEDURE(A68_INT ,A68t622,(struct A68t264 ,A68_INT ,A68_INT ),(struct A68t264 ,A68_INT ,A68_INT ,void *));
typedef struct A68t622  A68_622 ;    /* PROC(REF MODE264,INT,INT) INT */

A_PROCEDURE(A68_INT ,A68t623,(A68_INT ,struct A68t197 *),(A68_INT ,struct A68t197 *,void *));
typedef struct A68t623  A68_623 ;    /* PROC(INT,REF MODE197) INT */

A_PROCEDURE(A68_VOID ,A68t624,(A68_BOOL ,struct A68t303 *),(A68_BOOL ,struct A68t303 *,void *));
typedef struct A68t624  A68_624 ;    /* PROC(BOOL) MODE303 */

A_PROCEDURE(A68_INT ,A68t625,(A68_INT ,struct A68t221 *),(A68_INT ,struct A68t221 *,void *));
typedef struct A68t625  A68_625 ;    /* PROC(INT,REF MODE221) INT */

A_PROCEDURE(A68_VOID ,A68t626,(A68_BOOL ,struct A68t305 *),(A68_BOOL ,struct A68t305 *,void *));
typedef struct A68t626  A68_626 ;    /* PROC(BOOL) MODE305 */

A_PROCEDURE(A68_VOID ,A68t627,(struct A68t610 *),(struct A68t610 *,void *));
typedef struct A68t627  A68_627 ;    /* PROC(REF REF MODE610) VOID */

A_PROCEDURE(A68_INT ,A68t628,(A68_INT ,struct A68t301 *),(A68_INT ,struct A68t301 *,void *));
typedef struct A68t628  A68_628 ;    /* PROC(INT,REF MODE301) INT */

A_PROCEDURE(A68_VOID ,A68t629,(struct A68t628 ,A68_INT ,struct A68t301 *,struct A68t582 *),(struct A68t628 ,A68_INT ,struct A68t301 *,struct A68t582 *,void *));
typedef struct A68t629  A68_629 ;    /* PROC(MODE628,INT,REF MODE301) REF MODE582 */

A_PROCEDURE(A68_VOID ,A68t630,(A68_BOOL ,struct A68t582 *),(A68_BOOL ,struct A68t582 *,void *));
typedef struct A68t630  A68_630 ;    /* PROC(BOOL) MODE582 */

A_PROCEDURE(A68_INT ,A68t631,(A68_INT ,A68_INT ,struct A68t298 *,A68_BOOL ,A68_BOOL ),(A68_INT ,A68_INT ,struct A68t298 *,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t631  A68_631 ;    /* PROC(INT,INT,REF MODE298,BOOL,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t632,(A68_BOOL ,struct A68t306 *),(A68_BOOL ,struct A68t306 *,void *));
typedef struct A68t632  A68_632 ;    /* PROC(BOOL) MODE306 */

A_PROCEDURE(A68_VOID ,A68t633,(struct A68t301 *,struct A68t301 *,struct A68t582 *),(struct A68t301 *,struct A68t301 *,struct A68t582 *,void *));
typedef struct A68t633  A68_633 ;    /* PROC(REF MODE301,REF MODE301) REF MODE582 */

A_PROCEDURE(A68_INT ,A68t634,(A68_INT ,A68_INT ,struct A68t385 ),(A68_INT ,A68_INT ,struct A68t385 ,void *));
typedef struct A68t634  A68_634 ;    /* PROC(INT,INT,MODE385) INT */

A_PROCEDURE(A68_VOID ,A68t635,(A68_BOOL ,struct A68t304 *),(A68_BOOL ,struct A68t304 *,void *));
typedef struct A68t635  A68_635 ;    /* PROC(BOOL) MODE304 */

A_PROCEDURE(A68_INT ,A68t636,(A68_INT ,A68_INT ,struct A68t374 ),(A68_INT ,A68_INT ,struct A68t374 ,void *));
typedef struct A68t636  A68_636 ;    /* PROC(INT,INT,MODE374) INT */

A_PROCEDURE(A68_VOID ,A68t637,(A68_BOOL ,struct A68t302 *),(A68_BOOL ,struct A68t302 *,void *));
typedef struct A68t637  A68_637 ;    /* PROC(BOOL) MODE302 */
A_ISTRUCT(A68_INT ,2,A68t638);
typedef struct A68t638  A68_638 ;    /* STRUCT 2 INT */

A_PROCEDURE(struct A68t638 ,A68t639,(A68_INT ),(A68_INT ,void *));
typedef struct A68t639  A68_639 ;    /* PROC(INT) MODE638 */

A_PROCEDURE(A68_INT ,A68t640,(A68_INT ,struct A68t414 *),(A68_INT ,struct A68t414 *,void *));
typedef struct A68t640  A68_640 ;    /* PROC(INT,REF MODE414) INT */

A_PROCEDURE(A68_VOID ,A68t641,(struct A68t222 ,struct A68t414 *),(struct A68t222 ,struct A68t414 *,void *));
typedef struct A68t641  A68_641 ;    /* PROC(MODE222,REF MODE414) VOID */

A_PROCEDURE(A68_VOID ,A68t642,(struct A68t262 ,struct A68t414 *,struct A68t262 *),(struct A68t262 ,struct A68t414 *,struct A68t262 *,void *));
typedef struct A68t642  A68_642 ;    /* PROC(MODE262,REF MODE414) MODE262 */

A_PROCEDURE(A68_BOOL ,A68t643,(struct A68t175 ,struct A68t301 *,A68_INT *),(struct A68t175 ,struct A68t301 *,A68_INT *,void *));
typedef struct A68t643  A68_643 ;    /* PROC(MODE175,REF MODE301,REF INT) BOOL */
struct A68t644{
struct A68t270 * Seq;
struct A68t251 * Ser;
A68_BOOL  C;
A_PAD_BOOL(PAD_159)
};
typedef struct A68t644  A68_644 ;    /* STRUCT(REF MODE270,REF MODE251,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t645,(struct A68t577 *,A68_INT ,struct A68t270 *,struct A68t251 *,A68_BOOL ,struct A68t644 *),(struct A68t577 *,A68_INT ,struct A68t270 *,struct A68t251 *,A68_BOOL ,struct A68t644 *,void *));
typedef struct A68t645  A68_645 ;    /* PROC(REF MODE577,INT,REF MODE270,REF MODE251,BOOL) MODE644 */

A_PROCEDURE(A68_VOID ,A68t646,(A68_INT ,struct A68t283 ,struct A68t578 *,struct A68t270 *,struct A68t251 *,A68_BOOL ,struct A68t644 *),(A68_INT ,struct A68t283 ,struct A68t578 *,struct A68t270 *,struct A68t251 *,A68_BOOL ,struct A68t644 *,void *));
typedef struct A68t646  A68_646 ;    /* PROC(INT,MODE283,REF MODE578,REF MODE270,REF MODE251,BOOL) MODE644 */

A_PROCEDURE(A68_VOID ,A68t647,(struct A68t283 ,struct A68t270 *,struct A68t251 *,A68_BOOL ,struct A68t644 *),(struct A68t283 ,struct A68t270 *,struct A68t251 *,A68_BOOL ,struct A68t644 *,void *));
typedef struct A68t647  A68_647 ;    /* PROC(MODE283,REF MODE270,REF MODE251,BOOL) MODE644 */

A_PROCEDURE(A68_VOID ,A68t648,(struct A68t267 *,A68_BOOL ,struct A68t408 *),(struct A68t267 *,A68_BOOL ,struct A68t408 *,void *));
typedef struct A68t648  A68_648 ;    /* PROC(REF MODE267,BOOL) MODE408 */

A_PROCEDURE(A68_VOID ,A68t649,(struct A68t251 *,struct A68t407 *),(struct A68t251 *,struct A68t407 *,void *));
typedef struct A68t649  A68_649 ;    /* PROC(REF MODE251) MODE407 */

A_PROCEDURE(A68_VOID ,A68t650,(struct A68t270 *,struct A68t402 *),(struct A68t270 *,struct A68t402 *,void *));
typedef struct A68t650  A68_650 ;    /* PROC(REF MODE270) MODE402 */

A_PROCEDURE(A68_VOID ,A68t651,(struct A68t245 *,struct A68t414 *,struct A68t390 *),(struct A68t245 *,struct A68t414 *,struct A68t390 *,void *));
typedef struct A68t651  A68_651 ;    /* PROC(REF MODE245,REF MODE414) MODE390 */

A_PROCEDURE(A68_VOID ,A68t652,(struct A68t244 *,struct A68t414 *,struct A68t390 *),(struct A68t244 *,struct A68t414 *,struct A68t390 *,void *));
typedef struct A68t652  A68_652 ;    /* PROC(REF MODE244,REF MODE414) MODE390 */

A_PROCEDURE(A68_VOID ,A68t653,(struct A68t236 *,struct A68t414 *,struct A68t390 *),(struct A68t236 *,struct A68t414 *,struct A68t390 *,void *));
typedef struct A68t653  A68_653 ;    /* PROC(REF MODE236,REF MODE414) MODE390 */

A_PROCEDURE(A68_VOID ,A68t654,(struct A68t227 *,struct A68t390 *),(struct A68t227 *,struct A68t390 *,void *));
typedef struct A68t654  A68_654 ;    /* PROC(REF MODE227) MODE390 */

A_PROCEDURE(A68_VOID ,A68t655,(struct A68t234 *,struct A68t414 *,struct A68t390 *),(struct A68t234 *,struct A68t414 *,struct A68t390 *,void *));
typedef struct A68t655  A68_655 ;    /* PROC(REF MODE234,REF MODE414) MODE390 */

A_PROCEDURE(A68_VOID ,A68t656,(struct A68t262 ,struct A68t222 ,struct A68t222 ,A68_BOOL ,struct A68t414 *,struct A68t390 *),(struct A68t262 ,struct A68t222 ,struct A68t222 ,A68_BOOL ,struct A68t414 *,struct A68t390 *,void *));
typedef struct A68t656  A68_656 ;    /* PROC(MODE262,MODE222,MODE222,BOOL,REF MODE414) MODE390 */

A_PROCEDURE(A68_VOID ,A68t657,(struct A68t282 *,struct A68t414 *,struct A68t200 ,struct A68t237 *,struct A68t389 *),(struct A68t282 *,struct A68t414 *,struct A68t200 ,struct A68t237 *,struct A68t389 *,void *));
typedef struct A68t657  A68_657 ;    /* PROC(REF MODE282,REF MODE414,MODE200,REF MODE237) MODE389 */

A_PROCEDURE(A68_VOID ,A68t658,(struct A68t247 *,struct A68t414 *,struct A68t390 *),(struct A68t247 *,struct A68t414 *,struct A68t390 *,void *));
typedef struct A68t658  A68_658 ;    /* PROC(REF MODE247,REF MODE414) MODE390 */

A_PROCEDURE(A68_VOID ,A68t659,(struct A68t264 ,struct A68t299 ,struct A68t414 *,struct A68t264 *),(struct A68t264 ,struct A68t299 ,struct A68t414 *,struct A68t264 *,void *));
typedef struct A68t659  A68_659 ;    /* PROC(REF MODE264,REF MODE299,REF MODE414) REF MODE264 */
A_ISTRUCT(A68_CHAR ,18,A68t660);
typedef struct A68t660  A68_660 ;    /* STRUCT 18 CHAR */

A_PROCEDURE(A68_VOID ,A68t661,(A68_BOOL ,struct A68t299 *),(A68_BOOL ,struct A68t299 *,void *));
typedef struct A68t661  A68_661 ;    /* PROC(BOOL) MODE299 */
A_ISTRUCT(A68_CHAR ,26,A68t662);
typedef struct A68t662  A68_662 ;    /* STRUCT 26 CHAR */

A_PROCEDURE(A68_VOID ,A68t663,(struct A68t281 *,struct A68t414 *,struct A68t200 ,struct A68t237 *,struct A68t400 *),(struct A68t281 *,struct A68t414 *,struct A68t200 ,struct A68t237 *,struct A68t400 *,void *));
typedef struct A68t663  A68_663 ;    /* PROC(REF MODE281,REF MODE414,MODE200,REF MODE237) MODE400 */

A_PROCEDURE(A68_VOID ,A68t664,(struct A68t277 *,struct A68t414 *,struct A68t401 *),(struct A68t277 *,struct A68t414 *,struct A68t401 *,void *));
typedef struct A68t664  A68_664 ;    /* PROC(REF MODE277,REF MODE414) MODE401 */

A_PROCEDURE(A68_VOID ,A68t665,(struct A68t280 *,struct A68t414 *,struct A68t401 *),(struct A68t280 *,struct A68t414 *,struct A68t401 *,void *));
typedef struct A68t665  A68_665 ;    /* PROC(REF MODE280,REF MODE414) MODE401 */

A_PROCEDURE(A68_VOID ,A68t666,(struct A68t278 *,struct A68t414 *,struct A68t401 *),(struct A68t278 *,struct A68t414 *,struct A68t401 *,void *));
typedef struct A68t666  A68_666 ;    /* PROC(REF MODE278,REF MODE414) MODE401 */

A_PROCEDURE(A68_VOID ,A68t667,(struct A68t263 *,struct A68t414 *,A68_BOOL ,struct A68t398 *),(struct A68t263 *,struct A68t414 *,A68_BOOL ,struct A68t398 *,void *));
typedef struct A68t667  A68_667 ;    /* PROC(REF MODE263,REF MODE414,BOOL) MODE398 */

A_PROCEDURE(struct A68t259 *,A68t668,(struct A68t259 *,struct A68t414 *),(struct A68t259 *,struct A68t414 *,void *));
typedef struct A68t668  A68_668 ;    /* PROC(REF MODE259,REF MODE414) REF MODE259 */

A_PROCEDURE(A68_VOID ,A68t669,(struct A68t175 ,A68_INT *),(struct A68t175 ,A68_INT *,void *));
typedef struct A68t669  A68_669 ;    /* PROC(MODE175,REF INT) VOID */

A_PROCEDURE(A68_VOID ,A68t670,(struct A68t200 ,A68_INT *),(struct A68t200 ,A68_INT *,void *));
typedef struct A68t670  A68_670 ;    /* PROC(MODE200,REF INT) VOID */

A_PROCEDURE(A68_VOID ,A68t671,(struct A68t264 ,A68_INT *,A68_INT *,A68_INT *),(struct A68t264 ,A68_INT *,A68_INT *,A68_INT *,void *));
typedef struct A68t671  A68_671 ;    /* PROC(REF MODE264,REF INT,REF INT,REF INT) VOID */

A_PROCEDURE(A68_VOID ,A68t672,(struct A68t262 ,struct A68t298 *,struct A68t392 ,struct A68t414 *,struct A68t393 *),(struct A68t262 ,struct A68t298 *,struct A68t392 ,struct A68t414 *,struct A68t393 *,void *));
typedef struct A68t672  A68_672 ;    /* PROC(MODE262,REF MODE298,MODE392,REF MODE414) MODE393 */

A_PROCEDURE(A68_VOID ,A68t673,(struct A68t262 ,struct A68t298 *,struct A68t392 ,A68_INT ,A68_INT ,A68_INT ,struct A68t580 *,struct A68t414 *,struct A68t393 *),(struct A68t262 ,struct A68t298 *,struct A68t392 ,A68_INT ,A68_INT ,A68_INT ,struct A68t580 *,struct A68t414 *,struct A68t393 *,void *));
typedef struct A68t673  A68_673 ;    /* PROC(MODE262,REF MODE298,MODE392,INT,INT,INT,REF MODE580,REF MODE414) MODE393 */

A_PROCEDURE(A68_VOID ,A68t674,(struct A68t393 ,struct A68t298 *,struct A68t392 ,A68_BOOL ,struct A68t414 *,struct A68t393 *),(struct A68t393 ,struct A68t298 *,struct A68t392 ,A68_BOOL ,struct A68t414 *,struct A68t393 *,void *));
typedef struct A68t674  A68_674 ;    /* PROC(MODE393,REF MODE298,MODE392,BOOL,REF MODE414) MODE393 */

A_PROCEDURE(A68_VOID ,A68t675,(struct A68t262 ,A68_BOOL ,struct A68t414 *,struct A68t393 *),(struct A68t262 ,A68_BOOL ,struct A68t414 *,struct A68t393 *,void *));
typedef struct A68t675  A68_675 ;    /* PROC(MODE262,BOOL,REF MODE414) MODE393 */
A_ISTRUCT(A68_CHAR ,28,A68t676);
typedef struct A68t676  A68_676 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(struct A68t459 ,17,A68t677);
typedef struct A68t677  A68_677 ;    /* STRUCT 17 MODE459 */
A_ISTRUCT(struct A68t459 ,4,A68t678);
typedef struct A68t678  A68_678 ;    /* STRUCT 4 MODE459 */
A_ISTRUCT(A68_CHAR ,24,A68t679);
typedef struct A68t679  A68_679 ;    /* STRUCT 24 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from transformprocs --- */
extern A68_414 * THJATRN_make_newtprocs(struct A68t414 *,struct A68t458 );
extern A68_414 * AWLATRN_nulltprocs;
/* --- End of imports from transformprocs --- */


/* --- Imports from modeprocs --- */
extern A68_185 * NNMATRN_makefint(A68_INT );
extern A68_INT  XOMATRN_int(struct A68t184 );
extern A68_181 * APMATRN_get_outerattr(struct A68t307 );
extern A68_221 * VPMATRN_get_outerconst(struct A68t307 );
extern A68_298 * CQMATRN_get_outerfn(struct A68t307 );
extern A68_INT  KQMATRN_findnewattrno(struct A68t182 *,struct A68t302 );
extern A68_INT  VSMATRN_findnewtypeno(struct A68t182 *,struct A68t304 );
extern A68_INT  KCNATRN_findnewfnno(struct A68t182 *,struct A68t306 );
extern A68_204 * MUNATRN_fndec_tfn(struct A68t298 *);
extern A68_VOID  GFNATRN_tstr_size(struct A68t203 *,A68_184 *);
extern A68_298 * WCNATRN_translate_fndec(struct A68t298 *,struct A68t301 *,struct A68t301 *);
extern A68_VOID  VUNATRN_unit_type(struct A68t222 ,struct A68t298 *,struct A68t301 *,A68_200 *);
extern A68_VOID  DDOATRN_simplify_type(struct A68t200 ,struct A68t301 *,A68_200 *);
extern A68_BOOL  NEOATRN_check_types(struct A68t200 ,struct A68t200 ,struct A68t301 *,struct A68t301 *,A68_BOOL );
extern A68_INT  EUNATRN_uportname_index(struct A68t231 *,struct A68t301 *);
/* --- End of imports from modeprocs --- */


/* --- Imports from closureprocs --- */
extern A68_INT  ZKCATRN_maxclosureno(struct A68t311 *);
extern A68_308 * ELCATRN_find_outers(A68_INT ,struct A68t311 *,struct A68t108 );
extern A68_INT  ENCATRN_reserve_next_closureno(struct A68t311 *);
extern A68_308 ** KNCATRN_insert_outer(struct A68t307 ,struct A68t308 **,struct A68t311 *,struct A68t108 );
extern A68_VOID  RNCATRN_free_outers(struct A68t308 **,struct A68t311 *,struct A68t108 );
extern A68_311 * DPCATRN_copy_closure(struct A68t311 *,struct A68t108 );
/* --- End of imports from closureprocs --- */


/* --- Imports from assmodes --- */
extern A68_VC  TTCAOST_nullid;
extern A68_203 * GAAATRN_niltstr;
extern A68_226 * HAAATRN_nilualts;
extern A68_237 * IAAATRN_nilustr;
extern A68_282 * JAAATRN_niluchoices;
extern A68_173 * LAAATRN_nilids;
extern A68_174 * OAAATRN_nilints;
extern A68_268 * MAAATRN_nilprintitems;
extern A68_263 * NAAATRN_nilnames;
extern A68_281 * PAAATRN_nilseqchoices;
extern A68_270 * QAAATRN_nilsequence;
extern A68_261 * RAAATRN_niljoins;
extern A68_251 * SAAATRN_nilseries;
extern A68_181 * UAAATRN_nilattrdec;
extern A68_197 * VAAATRN_nilintdec;
extern A68_215 * WAAATRN_niltypedec;
extern A68_221 * XAAATRN_nilconstdec;
extern A68_298 * YAAATRN_nilfndec;
extern A68_264  ABAATRN_nilmacparams;
extern A68_196 * BBAATRN_nilformulas;
extern A68_182 * CBAATRN_nilusage;
extern A68_178 * DBAATRN_nilattrstr;
extern A68_299  FBAATRN_nilmacspecs;
extern A68_308 * HBAATRN_nilouters;
extern A68_299  GCAATRN_nullmacspecs;
extern A68_300  UBAATRN_nullnametypes;
extern A68_303  SCAATRN_nullintdecs;
extern A68_305  EDAATRN_nullconstdecs;
extern A68_188 * OEAATRN_makefname(A68_INT );
extern A68_195 * DFAATRN_makeformulatag(struct A68t184 );
extern A68_201 * IFAATRN_maketname(A68_INT );
extern A68_209 * XFAATRN_maketypetag(struct A68t200 );
extern A68_216 * CGAATRN_makecname(A68_INT );
extern A68_205 * HGAATRN_makectype(struct A68t200 );
extern A68_220 * MGAATRN_makecquery(struct A68t200 );
extern A68_267 * WGAATRN_makeunittag(struct A68t222 );
extern A68_253 * LHAATRN_makefnname(A68_INT );
extern A68_176 * UDAATRN_makeattrname(A68_INT );
extern A68_183 * EEAATRN_makeattrtag(struct A68t175 );
extern A68_180  ZHAATRN_attrnull;
extern A68_194  BIAATRN_fnull;
extern A68_208  DIAATRN_tnull;
extern A68_250  FIAATRN_unull;
extern A68_295  LIAATRN_bodynull;
#define TIAATRN_flattenleft 1
#define UIAATRN_flattenright 2
#define VIAATRN_flattenboth 3
#define XIAATRN_elseofchoice 2
#define AJAATRN_explicitmacpar 0
#define BJAATRN_implicitmacpar 1
#define DKAATRN_constint 1
#define FKAATRN_const2int 3
#define GKAATRN_const2int2 4
#define KKAATRN_usource 1
#define LKAATRN_usink 2
#define OKAATRN_outerdec 1
#define PKAATRN_localdec 2
#define QKAATRN_macpardec 3
#define VKAATRN_outerfn 5
/* --- End of imports from assmodes --- */


/* --- Imports from osinterface --- */
extern A68_129  BOBAOSI_update_access;
extern A68_129  FOBAOSI_update_truncate_access;
#define HDAAOST_block_update_access BOBAOSI_update_access
#define IDAAOST_block_update_truncate_access FOBAOSI_update_truncate_access
#include <stdlib.h>
#define EXIT(status) exit(A_INT_int(status))

#define BZBAOSI_exit EXIT
extern int A_argc;
extern char **A_argv;
#define A_prelude(argc,argv) A_argc=argc; A_argv = argv

#define VPCAOSI_prelude A_prelude
#include "Alibrary.h"

#define PBCAOSI_garbage_collect Agc_collect
#include <math.h>

#define GQAAOST_sqrt sqrt
extern A68_34 * LEAAOST_out;
/* --- End of imports from osinterface --- */


/* --- Imports from messageproc --- */
extern A68_109  WHAAOSI_user;
/* --- End of imports from messageproc --- */


/* --- Imports from basics --- */
extern A68_INT  AJDAOST_maxint;
extern A68_INT  IJDAOST_minint;
extern A68_INT  NJDAOST_addwithoverflowcheck(A68_INT ,A68_INT ,A68_BOOL *);
extern A68_INT  UJDAOST_subtractwithoverflowcheck(A68_INT ,A68_INT ,A68_BOOL *);
extern A68_INT  BKDAOST_multiplywithoverflowcheck(A68_INT ,A68_INT ,A68_BOOL *);
extern A68_VOID  NKDAOST_sysfault(A68_VC );
/* --- End of imports from basics --- */


/* --- Imports from putstrings --- */
extern A68_VOID  FCAAOSI_intchars(A68_INT ,A68_VC *);
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void IHJATRN(void);   /* transformprocs */
extern void HNMATRN(void);   /* modeprocs */
extern void SKCATRN(void);   /* closureprocs */
extern void BAAATRN(void);   /* assmodes */
extern void PCAAOST(void);   /* osinterface */
extern void JFAAOSI(void);   /* messageproc */
extern void JSCAOST(void);   /* basics */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_463   TSOATRN = {"$Id: macro.a68,v 34.2 1995/03/29 13:02:58 ella Exp $"}; 
A_GISVEC(A68_VC ,USOATRN,TSOATRN,52)
static A68_BOOL  VSOATRN_chooser_const;
#define BUOATRN_nilmonitor (A68_470 *)A68_NIL
static A68_VC  GUOATRN_m;
static A68_INT  IUOATRN_mind;
static A68_475   DVOATRN = {"findname"}; 
A_GISVEC(A68_VC ,EVOATRN,DVOATRN,8)
static A68_479   AWOATRN = {"get_repl-1"}; 
A_GISVEC(A68_VC ,BWOATRN,AWOATRN,10)
static A68_479   DWOATRN = {"get_repl-2"}; 
A_GISVEC(A68_VC ,EWOATRN,DWOATRN,10)
static A68_481   ZWOATRN = {", "}; 
A_GISVEC(A68_VC ,AXOATRN,ZWOATRN,2)
static A68_481   EXOATRN = {" \""}; 
A_GISVEC(A68_VC ,FXOATRN,EXOATRN,2)
static A68_481   PYOATRN = {"/="}; 
A_GISVEC(A68_VC ,QYOATRN,PYOATRN,2)
static A68_481   RYOATRN = {"<="}; 
A_GISVEC(A68_VC ,SYOATRN,RYOATRN,2)
static A68_481   TYOATRN = {">="}; 
A_GISVEC(A68_VC ,UYOATRN,TYOATRN,2)
static A68_484   XYOATRN = {"AND"}; 
A_GISVEC(A68_VC ,YYOATRN,XYOATRN,3)
static A68_481   ZYOATRN = {"OR"}; 
A_GISVEC(A68_VC ,AZOATRN,ZYOATRN,2)
static A68_481   CZOATRN = {"SL"}; 
A_GISVEC(A68_VC ,DZOATRN,CZOATRN,2)
static A68_481   EZOATRN = {"SR"}; 
A_GISVEC(A68_VC ,FZOATRN,EZOATRN,2)
static A68_130   GZOATRN = {"IAND"}; 
A_GISVEC(A68_VC ,HZOATRN,GZOATRN,4)
static A68_484   IZOATRN = {"IOR"}; 
A_GISVEC(A68_VC ,JZOATRN,IZOATRN,3)
static A68_484   KZOATRN = {"MOD"}; 
A_GISVEC(A68_VC ,LZOATRN,KZOATRN,3)
static A68_484   QZOATRN = {"NOT"}; 
A_GISVEC(A68_VC ,RZOATRN,QZOATRN,3)
static A68_130   TZOATRN = {"INOT"}; 
A_GISVEC(A68_VC ,UZOATRN,TZOATRN,4)
static A68_130   VZOATRN = {"SQRT"}; 
A_GISVEC(A68_VC ,WZOATRN,VZOATRN,4)
static A68_484   XZOATRN = {"ABS"}; 
A_GISVEC(A68_VC ,YZOATRN,XZOATRN,3)
static A68_484   AAPATRN = {"IF "}; 
A_GISVEC(A68_VC ,BAPATRN,AAPATRN,3)
static A68_485   CAPATRN = {" THEN "}; 
A_GISVEC(A68_VC ,DAPATRN,CAPATRN,6)
static A68_485   EAPATRN = {" ELSE "}; 
A_GISVEC(A68_VC ,FAPATRN,EAPATRN,6)
static A68_130   GAPATRN = {" FI "}; 
A_GISVEC(A68_VC ,HAPATRN,GAPATRN,4)
static A68_130   KAPATRN = {"INT "}; 
A_GISVEC(A68_VC ,LAPATRN,KAPATRN,4)
static A68_481   JBPATRN = {"->"}; 
A_GISVEC(A68_VC ,KBPATRN,JBPATRN,2)
static A68_487   SBPATRN = {"STRING["}; 
A_GISVEC(A68_VC ,TBPATRN,SBPATRN,7)
static A68_481   WBPATRN = {"()"}; 
A_GISVEC(A68_VC ,XBPATRN,WBPATRN,2)
static A68_488   ZBPATRN = {"TYPE "}; 
A_GISVEC(A68_VC ,ACPATRN,ZBPATRN,5)
static A68_481   PCPATRN = {"/("}; 
A_GISVEC(A68_VC ,QCPATRN,PCPATRN,2)
static A68_481   RCPATRN = {".."}; 
A_GISVEC(A68_VC ,SCPATRN,RCPATRN,2)
static A68_485   KDPATRN = {"[ INT "}; 
A_GISVEC(A68_VC ,LDPATRN,KDPATRN,6)
static A68_484   MDPATRN = {" = "}; 
A_GISVEC(A68_VC ,NDPATRN,MDPATRN,3)
static A68_130   ODPATRN = {" .. "}; 
A_GISVEC(A68_VC ,PDPATRN,ODPATRN,4)
static A68_481   QDPATRN = {" ]"}; 
A_GISVEC(A68_VC ,RDPATRN,QDPATRN,2)
static A68_481   AEPATRN = {"('"}; 
A_GISVEC(A68_VC ,BEPATRN,AEPATRN,2)
static A68_484   DEPATRN = {"..'"}; 
A_GISVEC(A68_VC ,EEPATRN,DEPATRN,3)
static A68_487   REPATRN = {"STRING["}; 
A_GISVEC(A68_VC ,SEPATRN,REPATRN,7)
static A68_481   VEPATRN = {".."}; 
A_GISVEC(A68_VC ,WEPATRN,VEPATRN,2)
static A68_484   YEPATRN = {"IF "}; 
A_GISVEC(A68_VC ,ZEPATRN,YEPATRN,3)
static A68_485   AFPATRN = {" THEN "}; 
A_GISVEC(A68_VC ,BFPATRN,AFPATRN,6)
static A68_485   CFPATRN = {" ELSE "}; 
A_GISVEC(A68_VC ,DFPATRN,CFPATRN,6)
static A68_130   EFPATRN = {" FI "}; 
A_GISVEC(A68_VC ,FFPATRN,EFPATRN,4)
static A68_485   HFPATRN = {" CONC "}; 
A_GISVEC(A68_VC ,IFPATRN,HFPATRN,6)
static A68_481   KFPATRN = {"()"}; 
A_GISVEC(A68_VC ,LFPATRN,KFPATRN,2)
static A68_491   RFPATRN = {"get_formula"}; 
A_GISVEC(A68_VC ,SFPATRN,RFPATRN,11)
static A68_493   WGPATRN = {"macspec_macparam - type"}; 
A_GISVEC(A68_VC ,XGPATRN,WGPATRN,23)
static A68_494   VHPATRN = {"maspec_macparam - fn3"}; 
A_GISVEC(A68_VC ,WHPATRN,VHPATRN,21)
static A68_494   CIPATRN = {"maspec_macparam - fn1"}; 
A_GISVEC(A68_VC ,DIPATRN,CIPATRN,21)
static A68_494   FIPATRN = {"maspec_macparam - fn2"}; 
A_GISVEC(A68_VC ,GIPATRN,FIPATRN,21)
static A68_BOOL  IIPATRN_currentclean;
static A68_BOOL  JIPATRN_failure;
static A68_INT  KIPATRN_linesafterfault;
static A68_496   OIPATRN = {"Aborted - too much tracing after an error"}; 
A_GISVEC(A68_VC ,QIPATRN,OIPATRN,41)
static A68_484   WIPATRN = {" { "}; 
A_GISVEC(A68_VC ,XIPATRN,WIPATRN,3)
static A68_481   AJPATRN = {", "}; 
A_GISVEC(A68_VC ,BJPATRN,AJPATRN,2)
static A68_481   MJPATRN = {" @"}; 
A_GISVEC(A68_VC ,NJPATRN,MJPATRN,2)
static A68_481   OJPATRN = {" }"}; 
A_GISVEC(A68_VC ,PJPATRN,OJPATRN,2)
static A68_481   AKPATRN = {"  "}; 
A_GISVEC(A68_VC ,BKPATRN,AKPATRN,2)
static A68_488   CKPATRN = {"MAC  "}; 
A_GISVEC(A68_VC ,DKPATRN,CKPATRN,5)
static A68_130   EKPATRN = {"FN  "}; 
A_GISVEC(A68_VC ,FKPATRN,EKPATRN,4)
static A68_499   GKPATRN = {"   already expanded"}; 
A_GISVEC(A68_VC ,HKPATRN,GKPATRN,19)
static A68_481   BLPATRN = {"  "}; 
A_GISVEC(A68_VC ,CLPATRN,BLPATRN,2)
static A68_484   HLPATRN = {"End"}; 
A_GISVEC(A68_VC ,ILPATRN,HLPATRN,3)
static A68_200  UMPATRN_fp1;
static A68_200  VMPATRN_fp2;
static A68_VC  WMPATRN_fp3;
static A68_VC  XMPATRN_fp4;
static A68_INT  YMPATRN_fp0;
static A68_INT  ZMPATRN_fp5;
static A68_INT  ANPATRN_fp6;
static A68_INT  BNPATRN_fpcolon;
static A68_222  CNPATRN_fpopen;
static A68_222  DNPATRN_fpclose;
static A68_173 * ENPATRN_fpids;
#define WNPATRN_joined 1
#define XNPATRN_notjoined 2
#define YNPATRN_joinfault 3
#define ZNPATRN_nochecks 4
static A68_227  BOPATRN_nulljoined;
static A68_510 * COPATRN_nulljoinup;
#define LOPATRN_niljoinlist (A68_512 *)A68_NIL
static A68_499   VSPATRN = {"joinup_trim: joined"}; 
A_GISVEC(A68_VC ,WSPATRN,VSPATRN,19)
static A68_520   YSPATRN = {"joinup_trim: io"}; 
A_GISVEC(A68_VC ,ZSPATRN,YSPATRN,15)
static A68_525   RWPATRN = {"You have already joined to part of .{"}; 
A_GISVEC(A68_VC ,SWPATRN,RWPATRN,37)
static A68_527   OXPATRN = {"An input to .3 needs to be joined to"}; 
A_GISVEC(A68_VC ,PXPATRN,OXPATRN,36)
static A68_520   CCQATRN = {"disjoint cquery"}; 
A_GISVEC(A68_VC ,DCQATRN,CCQATRN,15)
static A68_491   BDQATRN = {"checkconsts"}; 
A_GISVEC(A68_VC ,CDQATRN,BDQATRN,11)
static A68_479   PEQATRN = {"equal_attr"}; 
A_GISVEC(A68_VC ,QEQATRN,PEQATRN,10)
#define RFQATRN_always 0
#define SFQATRN_chooser 1
#define TFQATRN_value 2
#define UFQATRN_illegal 3
static A68_463   RGQATRN = {".<  You can only use this constant in a CASE chooser"}; 
A_GISVEC(A68_VC ,SGQATRN,RGQATRN,52)
static A68_539   TGQATRN = {".<  You can't have ?type here"}; 
A_GISVEC(A68_VC ,UGQATRN,TGQATRN,29)
static A68_527   EHQATRN = {"The test should be of type .2 not .1"}; 
A_GISVEC(A68_VC ,FHQATRN,EHQATRN,36)
static A68_525   HHQATRN = {"You can't have .< overlapping with .>"}; 
A_GISVEC(A68_VC ,IHQATRN,HHQATRN,37)
static A68_475   VHQATRN = {"primtype"}; 
A_GISVEC(A68_VC ,WHQATRN,VHQATRN,8)
static A68_543   YIQATRN = {"illegal call of reformindex"}; 
A_GISVEC(A68_VC ,ZIQATRN,YIQATRN,27)
static A68_545   OJQATRN = {"You can't REFORM .1 to .2"}; 
A_GISVEC(A68_VC ,PJQATRN,OJQATRN,25)
static A68_547   FKQATRN = {"Specification and body of .3 must have the same type, but you have .1 and .2"}; 
A_GISVEC(A68_VC ,GKQATRN,FKQATRN,76)
static A68_548   LKQATRN = {"Timescaling initialisation should be .2, not .1"}; 
A_GISVEC(A68_VC ,MKQATRN,LKQATRN,47)
static A68_550   UKQATRN = {"parameter and result of sample must have the same type, but you have  "}; 
static A68_551   VKQATRN = {".1 and .2"}; 
A_GISVEC(A68_VC ,WKQATRN,UKQATRN,70)
A_GISVEC(A68_VC ,XKQATRN,VKQATRN,9)
static A68_496   ALQATRN = {"Sample initialisation should be .2 not .1"}; 
A_GISVEC(A68_VC ,BLQATRN,ALQATRN,41)
static A68_553   JLQATRN = {"parameter and result of delay must have the same type, but you have .1 and .2"}; 
A_GISVEC(A68_VC ,KLQATRN,JLQATRN,77)
static A68_554   NLQATRN = {"Delay initialisation should be .2 not .1"}; 
A_GISVEC(A68_VC ,OLQATRN,NLQATRN,40)
static A68_496   RLQATRN = {"Delay ambiguity value should be .2 not .1"}; 
A_GISVEC(A68_VC ,SLQATRN,RLQATRN,41)
static A68_558   QMQATRN = {"parameter and result of ram must have the same type, but you have .1 and .2"}; 
A_GISVEC(A68_VC ,RMQATRN,QMQATRN,75)
static A68_559   UMQATRN = {"Ram initialisation should be .2 not .1"}; 
A_GISVEC(A68_VC ,VMQATRN,UMQATRN,38)
static A68_560   ANQATRN = {"Expression gave square root of negative number during assembly"}; 
A_GISVEC(A68_VC ,BNQATRN,ANQATRN,62)
static A68_561   LNQATRN = {"Expression caused arithmetic overflow during assembly"}; 
A_GISVEC(A68_VC ,MNQATRN,LNQATRN,53)
static A68_130   GPQATRN = {"fdop"}; 
A_GISVEC(A68_VC ,HPQATRN,GPQATRN,4)
static A68_479   VPQATRN = {"dynformula"}; 
A_GISVEC(A68_VC ,WPQATRN,VPQATRN,10)
static A68_485   ORQATRN = {"icheck"}; 
A_GISVEC(A68_VC ,PRQATRN,ORQATRN,6)
static A68_566   SRQATRN = {"Wrong type:  ["}; 
A_GISVEC(A68_VC ,TRQATRN,SRQATRN,14)
static A68_494   XRQATRN = {"] needed here - not ["}; 
A_GISVEC(A68_VC ,YRQATRN,XRQATRN,21)
static A68_520   ISQATRN = {"Out of range:  "}; 
A_GISVEC(A68_VC ,JSQATRN,ISQATRN,15)
static A68_568   NSQATRN = {" ? - this should be "}; 
A_GISVEC(A68_VC ,OSQATRN,NSQATRN,20)
static A68_569   RSQATRN = {"no more than "}; 
A_GISVEC(A68_VC ,SSQATRN,RSQATRN,13)
static A68_551   VSQATRN = {"at least "}; 
A_GISVEC(A68_VC ,WSQATRN,VSQATRN,9)
static A68_551   ZSQATRN = {"equal to "}; 
A_GISVEC(A68_VC ,ATQATRN,ZSQATRN,9)
static A68_569   DTQATRN = {"not equal to "}; 
A_GISVEC(A68_VC ,ETQATRN,DTQATRN,13)
static A68_484   HTQATRN = {"?? "}; 
A_GISVEC(A68_VC ,ITQATRN,HTQATRN,3)
#define RWQATRN_nilhashlist (A68_575 *)A68_NIL
static A68_576  TWQATRN_nilvechashlist;
#define UWQATRN_niluselist (A68_577 *)A68_NIL
#define VWQATRN_nildecslist (A68_578 *)A68_NIL
#define WWQATRN_nilmacparinfos (A68_584 *)A68_NIL
#define XWQATRN_nilenviron (A68_301 *)A68_NIL
#define DXQATRN_s_const 1
#define EXQATRN_s_unit 2
#define FXQATRN_s_monitor 3
static A68_551   GORATRN = {"ustr_conc"}; 
A_GISVEC(A68_VC ,HORATRN,GORATRN,9)
static A68_520   VPRATRN = {"string_conc - 1"}; 
A_GISVEC(A68_VC ,WPRATRN,VPRATRN,15)
static A68_605   BQRATRN = {".< and .> can't be concatenated"}; 
A_GISVEC(A68_VC ,CQRATRN,BQRATRN,31)
static A68_520   ARRATRN = {"string_conc - 2"}; 
A_GISVEC(A68_VC ,BRRATRN,ARRATRN,15)
static A68_520   GRRATRN = {"string_conc - 3"}; 
A_GISVEC(A68_VC ,HRRATRN,GRRATRN,15)
static A68_520   MRRATRN = {"string_conc - 4"}; 
A_GISVEC(A68_VC ,NRRATRN,MRRATRN,15)
static A68_479   FBSATRN = {"subs_tmpar"}; 
A_GISVEC(A68_VC ,GBSATRN,FBSATRN,10)
static A68_617   HCSATRN = {"subs_fnmpar - fn1"}; 
A_GISVEC(A68_VC ,ICSATRN,HCSATRN,17)
static A68_617   KCSATRN = {"subs_fnmpar - fn2"}; 
A_GISVEC(A68_VC ,LCSATRN,KCSATRN,17)
static A68_520   BFSATRN = {"equal_macparams"}; 
A_GISVEC(A68_VC ,CFSATRN,BFSATRN,15)
static A68_499   USSATRN = {"translate_mactypeno"}; 
A_GISVEC(A68_VC ,VSSATRN,USSATRN,19)
static A68_569   ITSATRN = {"set_consttype"}; 
A_GISVEC(A68_VC ,JTSATRN,ITSATRN,13)
static A68_494   CXSATRN = {"TYPEDEC - type_expand"}; 
A_GISVEC(A68_VC ,DXSATRN,CXSATRN,21)
static A68_494   RATATRN = {"ATTRDEC - attr_expand"}; 
A_GISVEC(A68_VC ,SATATRN,RATATRN,21)
static A68_566   JFTATRN = {"position_decls"}; 
A_GISVEC(A68_VC ,KFTATRN,JFTATRN,14)
static A68_566   PMTATRN = {"useries_expand"}; 
A_GISVEC(A68_VC ,QMTATRN,PMTATRN,14)
static A68_520   JNTATRN = {"usequence_check"}; 
A_GISVEC(A68_VC ,KNTATRN,JNTATRN,15)
static A68_520   LRTATRN = {"udyindex_joinup"}; 
A_GISVEC(A68_VC ,MRTATRN,LRTATRN,15)
static A68_660   ODUATRN = {"mparams_expand; FN"}; 
A_GISVEC(A68_VC ,PDUATRN,ODUATRN,18)
static A68_494   YEUATRN = {"macspecs_expand = atr"}; 
A_GISVEC(A68_VC ,ZEUATRN,YEUATRN,21)
static A68_545   QFUATRN = {"macspecs_expand - formula"}; 
A_GISVEC(A68_VC ,RFUATRN,QFUATRN,25)
static A68_662   HGUATRN = {"macspecs_expand - typebody"}; 
A_GISVEC(A68_VC ,IGUATRN,HGUATRN,26)
static A68_493   XGUATRN = {"macspecs_expand - const"}; 
A_GISVEC(A68_VC ,YGUATRN,XGUATRN,23)
static A68_568   NHUATRN = {"macspecs_expand - fn"}; 
A_GISVEC(A68_VC ,OHUATRN,NHUATRN,20)
static A68_487   TMUATRN = {"seqpvar"}; 
A_GISVEC(A68_VC ,UMUATRN,TMUATRN,7)
static A68_569   NRUATRN = {"*** FAULT ***"}; 
A_GISVEC(A68_VC ,ORUATRN,NRUATRN,13)
static A68_499   URUATRN = {"Aborted after FAULT"}; 
A_GISVEC(A68_VC ,WRUATRN,URUATRN,19)
static A68_493   MTUATRN = {"no checks for this mode"}; 
A_GISVEC(A68_VC ,NTUATRN,MTUATRN,23)
#define PTUATRN_no_expansion 0
static A68_566   CWUATRN = {"instance_outer"}; 
A_GISVEC(A68_VC ,DWUATRN,CWUATRN,14)
static A68_676   RCVATRN = {"instance_expand:illegal sort"}; 
A_GISVEC(A68_VC ,SCVATRN,RCVATRN,28)
static A68_551   WJVATRN = {"first dec"}; 
A_GISVEC(A68_VC ,XJVATRN,WJVATRN,9)
static A68_491   TQVATRN = {"const_outer"}; 
A_GISVEC(A68_VC ,UQVATRN,TQVATRN,11)
static A68_660   DTVATRN = {"use outerfn_expand"}; 
A_GISVEC(A68_VC ,ETVATRN,DTVATRN,18)
static A68_485   HUVATRN = {"expand"}; 
A_GISVEC(A68_VC ,IUVATRN,HUVATRN,6)
static A68_679   NUVATRN = {"Errors found in assembly"}; 
A_GISVEC(A68_VC ,OUVATRN,NUVATRN,24)
typedef struct   /* env of non-global proc */
{
A68_299  Specs;
} VLPATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_515  CPPATRN_coerce;
A68_BOOL  Source;
A_PAD_BOOL(PAD_160)
} EPPATRN_coerce;
typedef struct   /* env of non-global proc */
{
A68_INT  GRPATRN_rowsize;
A_PAD_INT(PAD_161)
} LRPATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  VRPATRN_size;
A_PAD_INT(PAD_162)
} ZRPATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  STPATRN_lsize;
A_PAD_INT(PAD_163)
A68_INT  ZTPATRN_rsize;
A_PAD_INT(PAD_164)
} EUPATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_173 ** VVPATRN_names;
A68_300  UVPATRN_nt;
A68_524  ZVPATRN_mark_off;
} BWPATRN_mark_off;
typedef struct   /* env of non-global proc */
{
A68_530  GYPATRN_is_ctypeorquery;
} IYPATRN_is_ctypeorquery;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Disjoint;
A_PAD_BOOL(PAD_165)
} YYPATRN_checkprimrange;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Disjoint;
A_PAD_BOOL(PAD_166)
A68_533  LZPATRN_checkualts;
} NZPATRN_checkualts;
typedef struct   /* env of non-global proc */
{
A68_INT * GXQATRN_status;
} LXQATRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_INT * GXQATRN_status;
A68_414 * UXQATRN_status_procs;
} YXQATRN_contains_diagnostics;
typedef struct   /* env of non-global proc */
{
A68_INT * GXQATRN_status;
A68_414 * UXQATRN_status_procs;
} FYQATRN_only_const;
typedef struct   /* env of non-global proc */
{
A68_588  WXQATRN_contains_diagnostics;
A68_588  DYQATRN_only_const;
} MYQATRN_needs_expanding;
typedef struct   /* env of non-global proc */
{
A68_108  Msg;
} CDRATRN_flt;
typedef struct   /* env of non-global proc */
{
A68_BOOL * GDRATRN_closurechanged;
A68_311 ** EDRATRN_newclosure;
A68_108  Msg;
A68_308 *** FDRATRN_newptr;
} JDRATRN_update_closure;
typedef struct   /* env of non-global proc */
{
A68_INT  LDRATRN_num;
A_PAD_INT(PAD_167)
} PDRATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_308 ** WDRATRN_ints_consts;
} OERATRN_fname_evaluate;
typedef struct   /* env of non-global proc */
{
A68_600  ZJRATRN_trim_ustr;
} BKRATRN_trim_ustr;
typedef struct   /* env of non-global proc */
{
A68_588  DYQATRN_only_const;
A68_600  ZJRATRN_trim_ustr;
} MKRATRN_uindex_expand;
typedef struct   /* env of non-global proc */
{
A68_588  DYQATRN_only_const;
A68_600  ZJRATRN_trim_ustr;
} TLRATRN_utrim_expand;
typedef struct   /* env of non-global proc */
{
int dummy;
} ONRATRN_ustr_conc;
typedef struct   /* env of non-global proc */
{
int dummy;
} DPRATRN_string_conc;
typedef struct   /* env of non-global proc */
{
A68_588  DYQATRN_only_const;
A68_604  BPRATRN_string_conc;
A68_603  MNRATRN_ustr_conc;
} GSRATRN_uconc_expand;
typedef struct   /* env of non-global proc */
{
A68_158  HDRATRN_update_closure;
A68_308 *** FDRATRN_newptr;
A68_311 ** EDRATRN_newclosure;
A68_108  Msg;
A68_592  SDRATRN_hashtable;
} FTRATRN_add_outerfn;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Trace;
A_PAD_BOOL(PAD_171)
A68_36  ADRATRN_flt;
A68_592  SDRATRN_hashtable;
A68_311 ** EDRATRN_newclosure;
A68_108  Msg;
A68_311 * Oldclosure;
A68_595  MERATRN_fname_evaluate;
A68_588  WXQATRN_contains_diagnostics;
A68_308 ** WDRATRN_ints_consts;
A68_606  ESRATRN_uconc_expand;
A68_601  KKRATRN_uindex_expand;
A68_602  RLRATRN_utrim_expand;
A68_609  HURATRN_outerfn_expand;
A68_607  DTRATRN_add_outerfn;
A68_173 * Not_wanted;
} JURATRN_outerfn_expand;
typedef struct   /* env of non-global proc */
{
A68_595  MERATRN_fname_evaluate;
A68_471 * EMVATRN_outerdiag;
A68_308 ** WDRATRN_ints_consts;
A68_606  ESRATRN_uconc_expand;
A68_601  KKRATRN_uindex_expand;
A68_602  RLRATRN_utrim_expand;
} JMVATRN_outer_expand;
typedef struct   /* env of non-global proc */
{
A68_508  Jr;
} IPPATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_BOOL * NYQATRN_expand;
} TYQATRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_BOOL * NYQATRN_expand;
} HZQATRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_BOOL * NYQATRN_expand;
} RZQATRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_BOOL * NYQATRN_expand;
A68_588  WXQATRN_contains_diagnostics;
A68_588  DYQATRN_only_const;
} FARATRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_BOOL * NYQATRN_expand;
} XARATRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_BOOL * NYQATRN_expand;
} GBRATRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_INT  FGRATRN_upb;
A_PAD_INT(PAD_168)
A68_INT  EGRATRN_lwb;
A_PAD_INT(PAD_169)
} JGRATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_472  Close;
A68_599  CIRATRN_move;
} EIRATRN_move;
typedef struct   /* env of non-global proc */
{
A68_INT * IPRATRN_ind;
} LQRATRN_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} LTRATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_301 * KURATRN_oenv;
} OURATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_301 * KURATRN_oenv;
} YURATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_301 * KURATRN_oenv;
} IVRATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_301 * KURATRN_oenv;
} SVRATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_301 * KURATRN_oenv;
} CWRATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_301 * KURATRN_oenv;
} MWRATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_301 * GXRATRN_newenv;
A68_BOOL  Trace;
A_PAD_BOOL(PAD_170)
A68_36  ADRATRN_flt;
A68_592  SDRATRN_hashtable;
A68_311 ** EDRATRN_newclosure;
A68_108  Msg;
A68_612 * FWRATRN_macpartable;
A68_INT * WWRATRN_envintno;
A68_BOOL * UWRATRN_envintchanged;
A68_INT * ZWRATRN_envconstno;
A68_BOOL * XWRATRN_envconstchanged;
A68_INT * FXRATRN_envfnno;
A68_BOOL * DXRATRN_envfnchanged;
A68_610 * VVRATRN_macfndecls;
A68_INT * CXRATRN_envtypeno;
A68_BOOL * AXRATRN_envtypechanged;
A68_610 * LVRATRN_mactypedecls;
A68_INT * TWRATRN_envattrno;
A68_BOOL * RWRATRN_envattrchanged;
A68_610 * BVRATRN_macattrdecls;
A68_311 * Oldclosure;
A68_595  MERATRN_fname_evaluate;
A68_615  QXRATRN_fndec_expand;
A68_588  WXQATRN_contains_diagnostics;
A68_308 ** WDRATRN_ints_consts;
A68_606  ESRATRN_uconc_expand;
A68_601  KKRATRN_uindex_expand;
A68_602  RLRATRN_utrim_expand;
A68_609  HURATRN_outerfn_expand;
A68_607  DTRATRN_add_outerfn;
A68_173 * Not_wanted;
} SXRATRN_fndec_expand;
typedef struct   /* env of non-global proc */
{
A68_301 * KURATRN_oenv;
} IIVATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_301 * KURATRN_oenv;
} SIVATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_301 * KURATRN_oenv;
} CJVATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_306 * VJVATRN_fns;
} CKVATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * TWRATRN_envattrno;
} XKVATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * CXRATRN_envtypeno;
} HLVATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * FXRATRN_envfnno;
} RLVATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_307  O;
} UMVATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_302 * PMVATRN_attrs;
A68_BOOL * NMVATRN_ac;
} FNVATRN_attr_outer;
typedef struct   /* env of non-global proc */
{
A68_595  MERATRN_fname_evaluate;
A68_472  LMVATRN_close;
A68_32  XMVATRN_repldecs;
A68_471 * EMVATRN_outerdiag;
} JOVATRN_formula_outer;
typedef struct   /* env of non-global proc */
{
A68_304 * QMVATRN_types;
A68_BOOL * OMVATRN_tc;
} IPVATRN_type_outer;
typedef struct   /* env of non-global proc */
{
A68_472  LMVATRN_close;
A68_308 ** WDRATRN_ints_consts;
A68_32  XMVATRN_repldecs;
A68_606  ESRATRN_uconc_expand;
A68_471 * EMVATRN_outerdiag;
A68_601  KKRATRN_uindex_expand;
A68_602  RLRATRN_utrim_expand;
} MQVATRN_const_outer;
typedef struct   /* env of non-global proc */
{
A68_301 * TXRATRN_oldenv;
} CYRATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_301 * TXRATRN_oldenv;
} MYRATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_298 * Fdec;
} BZRATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_582  WXRATRN_newenvattrnos;
A68_301 * GXRATRN_newenv;
A68_580 * Info;
} CASATRN_subs_ampar;
typedef struct   /* env of non-global proc */
{
A68_32  FYRATRN_newenvintnos;
A68_301 * GXRATRN_newenv;
A68_580 * Info;
} MASATRN_subs_fmpar;
typedef struct   /* env of non-global proc */
{
A68_582  XXRATRN_newenvtypenos;
A68_301 * GXRATRN_newenv;
A68_580 * Info;
} YASATRN_subs_tmpar;
typedef struct   /* env of non-global proc */
{
A68_32  PYRATRN_newenvconstnos;
A68_301 * GXRATRN_newenv;
A68_580 * Info;
} NBSATRN_subs_cmpar;
typedef struct   /* env of non-global proc */
{
A68_582  YXRATRN_newenvfnnos;
A68_301 * GXRATRN_newenv;
A68_580 * Info;
} YBSATRN_subs_fnmpar;
typedef struct   /* env of non-global proc */
{
A68_INT * KZRATRN_nametypeno;
A68_298 * LZRATRN_newfdec;
A68_BOOL * IZRATRN_nametypechange;
A68_32  EZRATRN_newnamenos;
} VCSATRN_add_nametype;
typedef struct   /* env of non-global proc */
{
A68_592  SDRATRN_hashtable;
A68_311 ** EDRATRN_newclosure;
A68_108  Msg;
A68_472  OZRATRN_newclose;
} LFSATRN_find_closureno;
typedef struct   /* env of non-global proc */
{
A68_582  YXRATRN_newenvfnnos;
A68_301 * GXRATRN_newenv;
A68_612 * FWRATRN_macpartable;
A68_472  OZRATRN_newclose;
} CGSATRN_fndec_fnno;
typedef struct   /* env of non-global proc */
{
A68_582  YXRATRN_newenvfnnos;
A68_301 * GXRATRN_newenv;
} RGSATRN_fnusage_fnno;
typedef struct   /* env of non-global proc */
{
A68_INT * WWRATRN_envintno;
A68_301 * GXRATRN_newenv;
A68_BOOL * UWRATRN_envintchanged;
A68_32  FYRATRN_newenvintnos;
} EHSATRN_add_envint;
typedef struct   /* env of non-global proc */
{
A68_INT * ZWRATRN_envconstno;
A68_301 * GXRATRN_newenv;
A68_BOOL * XWRATRN_envconstchanged;
A68_32  PYRATRN_newenvconstnos;
} JISATRN_add_envconst;
typedef struct   /* env of non-global proc */
{
A68_582  WXRATRN_newenvattrnos;
A68_582  XXRATRN_newenvtypenos;
A68_582  YXRATRN_newenvfnnos;
} NJSATRN_resetscope;
typedef struct   /* env of non-global proc */
{
A68_INT * FXRATRN_envfnno;
A68_301 * GXRATRN_newenv;
A68_BOOL * DXRATRN_envfnchanged;
A68_610 * VVRATRN_macfndecls;
A68_612 * FWRATRN_macpartable;
A68_582  YXRATRN_newenvfnnos;
} PLSATRN_add_envfn;
typedef struct   /* env of non-global proc */
{
A68_INT * FXRATRN_envfnno;
} INSATRN_merge_envfns;
typedef struct   /* env of non-global proc */
{
A68_INT * CXRATRN_envtypeno;
A68_301 * GXRATRN_newenv;
A68_BOOL * AXRATRN_envtypechanged;
A68_610 * LVRATRN_mactypedecls;
A68_582  XXRATRN_newenvtypenos;
} BOSATRN_add_envtype;
typedef struct   /* env of non-global proc */
{
A68_INT * CXRATRN_envtypeno;
} OPSATRN_merge_envtypes;
typedef struct   /* env of non-global proc */
{
A68_INT * TWRATRN_envattrno;
A68_301 * GXRATRN_newenv;
A68_BOOL * RWRATRN_envattrchanged;
A68_610 * BVRATRN_macattrdecls;
A68_582  WXRATRN_newenvattrnos;
} HQSATRN_add_envattr;
typedef struct   /* env of non-global proc */
{
A68_INT * TWRATRN_envattrno;
} URSATRN_merge_envattrs;
typedef struct   /* env of non-global proc */
{
A68_301 ** UXRATRN_paramenv;
A68_301 * TXRATRN_oldenv;
A68_301 * GXRATRN_newenv;
A68_INT * CXRATRN_envtypeno;
A68_582  XXRATRN_newenvtypenos;
} LSSATRN_translate_mactypeno;
typedef struct   /* env of non-global proc */
{
A68_298 * Fdec;
A68_301 * TXRATRN_oldenv;
} OTSATRN_set_unittype;
typedef struct   /* env of non-global proc */
{
A68_301 ** UXRATRN_paramenv;
A68_301 * TXRATRN_oldenv;
A68_301 * GXRATRN_newenv;
A68_INT * FXRATRN_envfnno;
A68_582  YXRATRN_newenvfnnos;
} WTSATRN_translate_macfnno;
typedef struct   /* env of non-global proc */
{
A68_639  UTSATRN_translate_macfnno;
A68_301 ** UXRATRN_paramenv;
A68_301 * GXRATRN_newenv;
A68_631  NLSATRN_add_envfn;
} KUSATRN_set_envfn;
typedef struct   /* env of non-global proc */
{
A68_301 ** UXRATRN_paramenv;
A68_301 * TXRATRN_oldenv;
A68_301 * GXRATRN_newenv;
A68_INT * TWRATRN_envattrno;
A68_582  WXRATRN_newenvattrnos;
} QVSATRN_translate_macattrno;
typedef struct   /* env of non-global proc */
{
A68_301 ** UXRATRN_paramenv;
A68_301 * TXRATRN_oldenv;
A68_466  WASATRN_subs_tmpar;
A68_582  XXRATRN_newenvtypenos;
A68_639  JSSATRN_translate_mactypeno;
A68_BOOL * AWSATRN_force;
A68_634  ZNSATRN_add_envtype;
} FWSATRN_type_expand;
typedef struct   /* env of non-global proc */
{
A68_301 * GXRATRN_newenv;
A68_INT * TWRATRN_envattrno;
A68_301 * TXRATRN_oldenv;
A68_636  FQSATRN_add_envattr;
A68_311 * Oldclosure;
A68_108  Msg;
A68_643  WYSATRN_update_attr;
} YYSATRN_update_attr;
typedef struct   /* env of non-global proc */
{
A68_301 ** UXRATRN_paramenv;
A68_301 * TXRATRN_oldenv;
A68_464  AASATRN_subs_ampar;
A68_582  WXRATRN_newenvattrnos;
A68_639  OVSATRN_translate_macattrno;
A68_643  WYSATRN_update_attr;
} UZSATRN_attr_expand;
typedef struct   /* env of non-global proc */
{
A68_472  QZRATRN_oldclose;
A68_471 * TZRATRN_diag;
A68_595  MERATRN_fname_evaluate;
A68_32 * VXRATRN_repldecs;
A68_465  KASATRN_subs_fmpar;
} QBTATRN_formula_expand;
typedef struct   /* env of non-global proc */
{
int dummy;
} RDTATRN_reposition_decls;
typedef struct   /* env of non-global proc */
{
A68_471 * TZRATRN_diag;
A68_646  PDTATRN_reposition_decls;
A68_610 * BVRATRN_macattrdecls;
A68_610 * LVRATRN_mactypedecls;
A68_582  YXRATRN_newenvfnnos;
A68_610 * VVRATRN_macfndecls;
} METATRN_position_decls;
typedef struct   /* env of non-global proc */
{
A68_471 * TZRATRN_diag;
A68_582  YXRATRN_newenvfnnos;
} QFTATRN_fnbody_decl;
typedef struct   /* env of non-global proc */
{
A68_471 * TZRATRN_diag;
A68_301 * TXRATRN_oldenv;
A68_636  FQSATRN_add_envattr;
A68_623  CHSATRN_add_envint;
A68_634  ZNSATRN_add_envtype;
A68_625  HISATRN_add_envconst;
A68_615  QXRATRN_fndec_expand;
A68_464  AASATRN_subs_ampar;
A68_465  KASATRN_subs_fmpar;
A68_466  WASATRN_subs_tmpar;
A68_467  LBSATRN_subs_cmpar;
A68_468  WBSATRN_subs_fnmpar;
A68_32 * VXRATRN_repldecs;
A68_581 * TYRATRN_mptable;
A68_582  WXRATRN_newenvattrnos;
A68_582  XXRATRN_newenvtypenos;
A68_582  YXRATRN_newenvfnnos;
A68_631  NLSATRN_add_envfn;
} CHTATRN_decl_inner;
typedef struct   /* env of non-global proc */
{
A68_649  TJTATRN_series_decl;
A68_647  KETATRN_position_decls;
} VJTATRN_series_decl;
typedef struct   /* env of non-global proc */
{
A68_650  UKTATRN_sequence_decl;
A68_647  KETATRN_position_decls;
} WKTATRN_sequence_decl;
typedef struct   /* env of non-global proc */
{
A68_BOOL * VYRATRN_is_fnbody;
A68_512 ** XYRATRN_joinlist;
A68_510 ** WYRATRN_joinup;
A68_472  OZRATRN_newclose;
A68_471 * TZRATRN_diag;
} QLTATRN_body_unit;
typedef struct   /* env of non-global proc */
{
A68_433  OLTATRN_body_unit;
A68_649  TJTATRN_series_decl;
} CMTATRN_useries_expand;
typedef struct   /* env of non-global proc */
{
A68_433  OLTATRN_body_unit;
A68_650  UKTATRN_sequence_decl;
} WMTATRN_usequence_expand;
typedef struct   /* env of non-global proc */
{
A68_510 ** WYRATRN_joinup;
A68_588  WXQATRN_contains_diagnostics;
} QNTATRN_urow_expand;
typedef struct   /* env of non-global proc */
{
A68_510 ** WYRATRN_joinup;
A68_512 ** XYRATRN_joinlist;
A68_32  EZRATRN_newnamenos;
} BPTATRN_uname_nameno;
typedef struct   /* env of non-global proc */
{
A68_510 ** WYRATRN_joinup;
} TPTATRN_ustr_joinup;
typedef struct   /* env of non-global proc */
{
A68_510 ** WYRATRN_joinup;
A68_641  MTSATRN_set_unittype;
A68_298 * LZRATRN_newfdec;
A68_301 * GXRATRN_newenv;
} VQTATRN_udyindex_joinup;
typedef struct   /* env of non-global proc */
{
A68_510 ** WYRATRN_joinup;
A68_472  OZRATRN_newclose;
A68_471 * TZRATRN_diag;
} CSTATRN_uinst_joinup;
typedef struct   /* env of non-global proc */
{
A68_510 ** WYRATRN_joinup;
A68_472  OZRATRN_newclose;
A68_471 * TZRATRN_diag;
A68_657  ETTATRN_uchoices;
} GTTATRN_uchoices;
typedef struct   /* env of non-global proc */
{
A68_472  QZRATRN_oldclose;
A68_467  LBSATRN_subs_cmpar;
A68_308 ** WDRATRN_ints_consts;
A68_301 ** UXRATRN_paramenv;
A68_510 ** WYRATRN_joinup;
A68_472  OZRATRN_newclose;
A68_471 * TZRATRN_diag;
A68_654  ZOTATRN_uname_nameno;
A68_431  RPTATRN_ustr_joinup;
A68_606  ESRATRN_uconc_expand;
A68_601  KKRATRN_uindex_expand;
A68_602  RLRATRN_utrim_expand;
A68_655  TQTATRN_udyindex_joinup;
A68_656  ASTATRN_uinst_joinup;
A68_298 * LZRATRN_newfdec;
A68_301 * GXRATRN_newenv;
A68_657  ETTATRN_uchoices;
A68_653  ONTATRN_urow_expand;
A68_301 * TXRATRN_oldenv;
A68_32 * VXRATRN_repldecs;
A68_651  AMTATRN_useries_expand;
A68_652  UMTATRN_usequence_expand;
} SUTATRN_unit_expand;
typedef struct   /* env of non-global proc */
{
A68_301 ** UXRATRN_paramenv;
A68_415  SZSATRN_attr_expand;
A68_424  DWSATRN_type_expand;
A68_433  QUTATRN_unit_expand;
A68_510 ** WYRATRN_joinup;
A68_642  IUSATRN_set_envfn;
A68_301 * TXRATRN_oldenv;
A68_584 * Mstable;
A68_581 * TYRATRN_mptable;
} SBUATRN_mparams_expand;
typedef struct   /* env of non-global proc */
{
A68_392  Params;
A68_BOOL * AWSATRN_force;
A68_659  QBUATRN_mparams_expand;
A68_301 * TXRATRN_oldenv;
A68_636  FQSATRN_add_envattr;
A68_623  CHSATRN_add_envint;
A68_634  ZNSATRN_add_envtype;
A68_625  HISATRN_add_envconst;
A68_631  NLSATRN_add_envfn;
A68_301 ** UXRATRN_paramenv;
} WDUATRN_macspecs_expand;
typedef struct   /* env of non-global proc */
{
A68_510 ** WYRATRN_joinup;
A68_472  OZRATRN_newclose;
A68_471 * TZRATRN_diag;
A68_663  GIUATRN_seqchoices;
} IIUATRN_seqchoices;
typedef struct   /* env of non-global proc */
{
A68_301 * TXRATRN_oldenv;
A68_32 * VXRATRN_repldecs;
} QKUATRN_seqrepl_expand;
typedef struct   /* env of non-global proc */
{
A68_510 ** WYRATRN_joinup;
A68_298 * LZRATRN_newfdec;
A68_301 * GXRATRN_newenv;
A68_663  GIUATRN_seqchoices;
A68_666  OKUATRN_seqrepl_expand;
A68_472  OZRATRN_newclose;
A68_471 * TZRATRN_diag;
} QLUATRN_seqstep_expand;
typedef struct   /* env of non-global proc */
{
A68_298 * Fdec;
A68_618  TCSATRN_add_nametype;
A68_512 ** XYRATRN_joinlist;
A68_472  OZRATRN_newclose;
A68_667  ANUATRN_names_nameno;
} CNUATRN_names_nameno;
typedef struct   /* env of non-global proc */
{
A68_510 ** WYRATRN_joinup;
A68_472  OZRATRN_newclose;
A68_471 * TZRATRN_diag;
} AOUATRN_let_expand;
typedef struct   /* env of non-global proc */
{
A68_510 ** WYRATRN_joinup;
A68_472  OZRATRN_newclose;
A68_471 * TZRATRN_diag;
} JOUATRN_join_expand;
typedef struct   /* env of non-global proc */
{
A68_301 * TXRATRN_oldenv;
A68_32 * VXRATRN_repldecs;
A68_668  YOUATRN_repljoin_expand;
} APUATRN_repljoin_expand;
typedef struct   /* env of non-global proc */
{
A68_668  YOUATRN_repljoin_expand;
} DQUATRN_step_expand;
typedef struct   /* env of non-global proc */
{
A68_471 * TZRATRN_diag;
} QQUATRN_print_expand;
typedef struct   /* env of non-global proc */
{
A68_472  OZRATRN_newclose;
A68_471 * TZRATRN_diag;
} GRUATRN_fault_expand;
typedef struct   /* env of non-global proc */
{
A68_588  ASUATRN_is_output;
} CSUATRN_is_output;
typedef struct   /* env of non-global proc */
{
A68_648  OFTATRN_fnbody_decl;
A68_510 ** WYRATRN_joinup;
A68_472  OZRATRN_newclose;
A68_471 * TZRATRN_diag;
A68_588  ASUATRN_is_output;
A68_298 * LZRATRN_newfdec;
A68_512 ** XYRATRN_joinlist;
} PSUATRN_fnbody_expand;
typedef struct   /* env of non-global proc */
{
A68_472  OZRATRN_newclose;
A68_669  STUATRN_attr_sort;
} UTUATRN_attr_sort;
typedef struct   /* env of non-global proc */
{
A68_472  OZRATRN_newclose;
A68_670  GUUATRN_type_sort;
} IUUATRN_type_sort;
typedef struct   /* env of non-global proc */
{
A68_669  STUATRN_attr_sort;
A68_670  GUUATRN_type_sort;
A68_472  OZRATRN_newclose;
} BVUATRN_macparam_sort;
typedef struct   /* env of non-global proc */
{
A68_621  JFSATRN_find_closureno;
A68_311 * Oldclosure;
A68_108  Msg;
A68_609  HURATRN_outerfn_expand;
A68_584 ** UYRATRN_inst_mstable;
A68_301 * GXRATRN_newenv;
A68_471 * TZRATRN_diag;
A68_607  DTRATRN_add_outerfn;
A68_472  OZRATRN_newclose;
A68_95  PGSATRN_fnusage_fnno;
A68_311 ** EDRATRN_newclosure;
A68_301 ** UXRATRN_paramenv;
A68_BOOL * AWSATRN_force;
A68_631  NLSATRN_add_envfn;
A68_612 * FWRATRN_macpartable;
} AWUATRN_instance_outer;
typedef struct   /* env of non-global proc */
{
A68_471 * TZRATRN_diag;
A68_464  AASATRN_subs_ampar;
A68_465  KASATRN_subs_fmpar;
A68_466  WASATRN_subs_tmpar;
A68_467  LBSATRN_subs_cmpar;
A68_468  WBSATRN_subs_fnmpar;
A68_32 * VXRATRN_repldecs;
A68_622  AGSATRN_fndec_fnno;
A68_311 * Oldclosure;
A68_108  Msg;
A68_633  SRSATRN_merge_envattrs;
A68_301 * GXRATRN_newenv;
A68_633  MPSATRN_merge_envtypes;
A68_633  GNSATRN_merge_envfns;
A68_615  QXRATRN_fndec_expand;
A68_584 ** UYRATRN_inst_mstable;
A68_631  NLSATRN_add_envfn;
A68_612 * FWRATRN_macpartable;
A68_610 * BVRATRN_macattrdecls;
A68_582  YXRATRN_newenvfnnos;
A68_610 * LVRATRN_mactypedecls;
A68_610 * VVRATRN_macfndecls;
A68_472  OZRATRN_newclose;
} BYUATRN_instance_inner;
typedef struct   /* env of non-global proc */
{
A68_582  YXRATRN_newenvfnnos;
A68_631  NLSATRN_add_envfn;
} EAVATRN_instance_no_expand;
typedef struct   /* env of non-global proc */
{
A68_301 * TXRATRN_oldenv;
A68_580 * Info;
A68_468  WBSATRN_subs_fnmpar;
A68_581 * TYRATRN_mptable;
A68_173 * Not_wanted;
A68_671  ZUUATRN_macparam_sort;
A68_672  YVUATRN_instance_outer;
A68_673  ZXUATRN_instance_inner;
A68_674  CAVATRN_instance_no_expand;
} NBVATRN_instance_expand;
typedef struct   /* env of non-global proc */
{
A68_675  LBVATRN_instance_expand;
A68_584 ** UYRATRN_inst_mstable;
A68_301 * TXRATRN_oldenv;
A68_580 * Info;
A68_510 ** WYRATRN_joinup;
} YCVATRN_mparam_expand;
typedef struct   /* env of non-global proc */
{
A68_667  ANUATRN_names_nameno;
} VFVATRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_675  LBVATRN_instance_expand;
} PGVATRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_INT * KZRATRN_nametypeno;
} UHVATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_302 * PMVATRN_attrs;
} QNVATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_304 * QMVATRN_types;
} TPVATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  XCSATRN_max;
A_PAD_INT(PAD_172)
} DDSATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  XCSATRN_max;
A_PAD_INT(PAD_173)
} KDSATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  GHSATRN_max;
A_PAD_INT(PAD_174)
} KHSATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  GHSATRN_max;
A_PAD_INT(PAD_175)
} RHSATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  LISATRN_max;
A_PAD_INT(PAD_176)
} PISATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  LISATRN_max;
A_PAD_INT(PAD_177)
} WISATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  ZJSATRN_max;
A_PAD_INT(PAD_178)
} DKSATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  Upb;
A_PAD_INT(PAD_179)
} VKSATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  RLSATRN_max;
A_PAD_INT(PAD_180)
} XLSATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  RLSATRN_max;
A_PAD_INT(PAD_181)
} EMSATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  RLSATRN_max;
A_PAD_INT(PAD_182)
} SMSATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_301 * Macenv;
A68_INT * FXRATRN_envfnno;
} ONSATRN_find_no;
typedef struct   /* env of non-global proc */
{
A68_INT  EOSATRN_max;
A_PAD_INT(PAD_183)
} KOSATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  EOSATRN_max;
A_PAD_INT(PAD_184)
} ROSATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_301 * Macenv;
A68_INT * CXRATRN_envtypeno;
} UPSATRN_find_no;
typedef struct   /* env of non-global proc */
{
A68_INT  KQSATRN_max;
A_PAD_INT(PAD_185)
} QQSATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  KQSATRN_max;
A_PAD_INT(PAD_186)
} XQSATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_301 * Macenv;
A68_INT * TWRATRN_envattrno;
} ASSATRN_find_no;
typedef struct   /* env of non-global proc */
{
A68_INT  XNTATRN_size;
A_PAD_INT(PAD_187)
} BOTATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * UPTATRN_size;
} ZPTATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_264  Macparams;
} WBUATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_299  Mspecs;
} FEUATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_392  Mpc;
} NWUATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_301 * JYUATRN_i_env;
} OYUATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_298 * Fn;
} MAVATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_264  Mps;
} FEVATRN_generator;

A_STATIC A68_VOID  XSOATRN_nilampar(A68_176  Am, A68_175  *ReturnedValue);

A_STATIC A68_VOID  BTOATRN_nilfmpar(A68_188  Fm, A68_184  *ReturnedValue);

A_STATIC A68_VOID  FTOATRN_niltmpar(A68_201  Tm, A68_200  *ReturnedValue);

A_STATIC A68_VOID  JTOATRN_nilcmpar(A68_216  Cm, A68_222  *ReturnedValue);

A_STATIC A68_VOID  NTOATRN_nilfnmpar(A68_253  Fn, A68_262  *ReturnedValue);

A_STATIC A68_298 * WTOATRN_skeleton_fndec(A68_INT  Sort, A68_BOOL  Macro, A68_VC  Name, A68_294  Body);

A_STATIC A68_VOID  DUOATRN_generator(A68_BOOL  CUOATRN_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  JUOATRN_start_printing(void);

A_STATIC A68_VOID  KUOATRN_end_printing(void);

A_STATIC A68_VOID  VUOATRN_findname(A68_INT  Typeno, A68_INT  Altno, A68_472  Close, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  HVOATRN_find_newchars(A68_INT  Typeno, A68_472  Close, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  QVOATRN_get_replicator(A68_184  F, A68_301 * Env, A68_477  *ReturnedValue);

A_STATIC A68_VOID  HWOATRN_print_char(A68_CHAR  C);

A_STATIC A68_VOID  PWOATRN_print_chars(A68_VC  C);

A_STATIC A68_VOID  TWOATRN_print_id(A68_VC  Id);

A_STATIC A68_VOID  XWOATRN_print_ids(A68_173 * Ids);

A_STATIC A68_VOID  CXOATRN_print_strings(A68_173 * Ids);

A_STATIC A68_VOID  JXOATRN_print_attr(A68_175  A, A68_472  Close);

A_STATIC A68_VOID  DYOATRN_print_formula(A68_184  F);

A_STATIC A68_VOID  SAPATRN_print_type(A68_200  T, A68_472  Close);

A_STATIC A68_VOID  WAPATRN_print_brackettype(A68_200  Ty, A68_472  Close);

A_STATIC A68_VOID  FCPATRN_print_const(A68_222  Const, A68_472  Close);

A_STATIC A68_VOID  NFPATRN_get_formula(A68_198  Fr, A68_184  *ReturnedValue);

A_STATIC A68_VOID  WFPATRN_macspec_macparam(A68_283  Spec, A68_472  Close, A68_265  *ReturnedValue);

A_STATIC A68_VOID  LIPATRN_setup_reporting(void);

A_STATIC A68_VOID  NIPATRN_checklineno(A68_471 * Diag);

A_STATIC A68_VOID  TIPATRN_print_macparams(A68_264  Pars, A68_472  Close);

A_STATIC A68_VOID  TJPATRN_identifyfn(A68_BOOL  Expanded, A68_472  Close, A68_471 * Diag);

A_STATIC A68_VOID  KKPATRN_setmonitor(A68_298 * Fdec, A68_471 * Diag);

A_STATIC A68_VOID  SKPATRN_resetmonitor(A68_471 * Diag);

A_STATIC A68_VOID  RLPATRN_monitorfn(A68_299  Specs, A68_472  Close, A68_471 * Diag);

A_STATIC A68_VOID  ULPATRN_generator(A68_BOOL  SLPATRN_anonymous, A68_264  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KMPATRN_monitorinstance(A68_VC  Macname, A68_264  Params, A68_472  Close, A68_471 * Diag);

A_STATIC A68_VOID  SMPATRN_setfailure(A68_472  Close, A68_471 * Diag);

A_STATIC A68_VOID  INPATRN_faultp(A68_VC  Message, A68_472  Close, A68_471 * Diag);

A_STATIC A68_510 * FOPATRN_makejoinrow(A68_509  Row);

A_STATIC A68_BOOL  NOPATRN_has_joinio(A68_510 * Joinup);

A_STATIC A68_VOID  ZOPATRN_coerce_joinup(A68_510 ** Joinup, A68_BOOL  Source);

A_STATIC A68_VOID  DPPATRN_coerce(A68_508  Jr, A68_507  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HPPATRN_generator(A68_BOOL  FPPATRN_anonymous, A68_509  *ReturnedValue, void *NonLocals);

A_STATIC A68_510 * LQPATRN_type_joinup(A68_200  Ty, A68_INT  Nameno, A68_BOOL  Issource, A68_472  Close);

A_STATIC A68_VOID  KRPATRN_generator(A68_BOOL  IRPATRN_anonymous, A68_509  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  YRPATRN_generator(A68_BOOL  WRPATRN_anonymous, A68_509  *ReturnedValue, void *NonLocals);

A_STATIC A68_510 * JSPATRN_find_joinup(A68_INT  Nameno, A68_512 * Joinlist);

A_STATIC A68_VOID  SSPATRN_joinup_trim(A68_510 ** Joinup, A68_BOOL  Index, A68_INT  Lwb, A68_INT  Upb);

A_STATIC A68_VOID  ITPATRN_uconc_joinup(A68_INT  Sort, A68_510 * Ljoinup, A68_510 ** Joinup);

A_STATIC A68_VOID  DUPATRN_generator(A68_BOOL  BUPATRN_anonymous, A68_509  *ReturnedValue, void *NonLocals);

A_STATIC A68_512 * GVPATRN_join_setup(A68_INT  Nameno, A68_200  T, A68_BOOL  Issource, A68_472  Close, A68_512 * Old);

A_STATIC A68_VOID  TVPATRN_mark_join(A68_510 ** Joinup, A68_472  Close, A68_471 * Diag);

A_STATIC A68_BOOL  AWPATRN_mark_off(A68_510 * J, A68_472  Close, A68_471 * Diag, void *NonLocals);

A_STATIC A68_BOOL  UWPATRN_check_if_joined(A68_510 * J);

A_STATIC A68_512 * IXPATRN_join_completeness(A68_512 * Jlist, A68_472  Close, A68_471 * Diag);

A_STATIC A68_BOOL  TXPATRN_equal_ids(A68_173 * A, A68_173 * B);

A_STATIC A68_BOOL  DYPATRN_checkconsts(A68_222  A, A68_222  B, A68_BOOL  Disjoint);

A_STATIC A68_INT  HYPATRN_is_ctypeorquery(A68_222  C, void *NonLocals);

A_STATIC A68_BOOL  XYPATRN_checkprimrange(A68_INT  First1, A68_INT  Last1, A68_INT  First2, A68_INT  Last2, void *NonLocals);

A_STATIC A68_BOOL  EZPATRN_equal_ints(A68_32  A, A68_32  B);

A_STATIC A68_BOOL  MZPATRN_checkualts(A68_222  A, A68_222  B, void *NonLocals);

A_STATIC A68_BOOL  HDQATRN_equal_attrnames(A68_181 * At, A68_181 * Bt, A68_472  Closea, A68_472  Closeb);

A_STATIC A68_BOOL  NDQATRN_equal_attr(A68_175  A, A68_175  B, A68_472  Closea, A68_472  Closeb);

A_STATIC A68_BOOL  WEQATRN_equal_instances(A68_262  Ai, A68_262  Bi, A68_472  Closea, A68_472  Closeb);

A_STATIC A68_BOOL  LFQATRN_checktypes(A68_200  A, A68_200  B, A68_472  Closea, A68_472  Closeb);

A_STATIC A68_INT  WFQATRN_const_sort(A68_222  C);

A_STATIC A68_BOOL  NGQATRN_const_check(A68_INT  Standard, A68_222  Const, A68_472  Close, A68_471 * Diag);

A_STATIC A68_VOID  BHQATRN_choosers_check(A68_200  Iptype, A68_222  Test, A68_237 * Choosers, A68_472  Close, A68_471 * Diag);

A_STATIC A68_215 * LHQATRN_primtype(A68_200  T, A68_472  Close);

A_STATIC A68_VOID  CIQATRN_reformindex(A68_200  Ty, A68_INT * N, A68_200 * Primtype, A68_472  Close);

A_STATIC A68_VOID  DJQATRN_reform_check(A68_286 * Ref, A68_472  Close, A68_471 * Diag);

A_STATIC A68_VOID  UJQATRN_timescale_check(A68_292 * Ts, A68_BOOL  Check, A68_472  Close, A68_471 * Diag);

A_STATIC A68_VOID  RKQATRN_sample_check(A68_291 * Sp, A68_BOOL  Check, A68_472  Close, A68_471 * Diag);

A_STATIC A68_VOID  HLQATRN_delay_check(A68_INT  Sort, A68_222  Init, A68_222  Ambig, A68_472  Close, A68_471 * Diag);

A_STATIC A68_VOID  XLQATRN_adelay_check(A68_288 * Ad, A68_BOOL  Check, A68_472  Close, A68_471 * Diag);

A_STATIC A68_VOID  GMQATRN_idelay_check(A68_289 * Id, A68_BOOL  Check, A68_472  Close, A68_471 * Diag);

A_STATIC A68_VOID  NMQATRN_ram_check(A68_290 * Ram, A68_BOOL  Check, A68_472  Close, A68_471 * Diag);

A_STATIC A68_VOID  YMQATRN_overflowsqrt(A68_472  Close, A68_471 * Diag);

A_STATIC A68_VOID  JNQATRN_overflowfail(A68_472  Close, A68_471 * Diag);

A_STATIC A68_VOID  WNQATRN_fmop_simplify(A68_190 * Fmop, A68_414 * Tprocs, A68_472  Close, A68_471 * Diag, A68_375  *ReturnedValue);

A_STATIC A68_VOID  YOQATRN_fdop_simplify(A68_189 * Fdop, A68_414 * Tprocs, A68_472  Close, A68_471 * Diag, A68_375  *ReturnedValue);

A_STATIC A68_VOID  EQQATRN_fcond_simplify(A68_191 * Fcond, A68_414 * Tprocs, A68_375  *ReturnedValue);

A_STATIC A68_BOOL  JRQATRN_icheck(A68_INT  Check, A68_INT  Val, A68_INT  Standard, A68_472  Close, A68_471 * Diag);

A_STATIC A68_VOID  UTQATRN_fcheck_evaluate(A68_186 * Fck, A68_414 * Tprocs, A68_472  Close, A68_471 * Diag, A68_375  *ReturnedValue);

A_STATIC A68_BOOL  PUQATRN_wanted(A68_VC  Name, A68_173 * Not_wanted);

A_STATIC A68_VOID  VUQATRN_append_attrs(A68_175  A, A68_175  B, A68_175  *ReturnedValue);

A_STATIC A68_VOID  XVQATRN_printitems_print(A68_268 * Pi, A68_414 * Tprocs, A68_471 * Diag);

A_STATIC A68_INT  FWQATRN_macparams_hash(A68_264  Params);

A68_VOID  CXQATRN_expand(A68_311 * Oldclosure, A68_173 * Not_wanted, A68_BOOL  Trace, A68_108  Msg, A68_413  *ReturnedValue);

A_STATIC A68_VOID  KXQATRN_anonymous(A68_222  Unit, A68_414 * Tprocs, A68_390  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  XXQATRN_contains_diagnostics(A68_222  U, void *NonLocals);

A_STATIC A68_BOOL  EYQATRN_only_const(A68_222  U, void *NonLocals);

A_STATIC A68_BOOL  LYQATRN_needs_expanding(A68_307  O, void *NonLocals);

A_STATIC A68_VOID  SYQATRN_anonymous(A68_175  A, A68_414 * Tp, A68_372  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GZQATRN_anonymous(A68_184  F, A68_414 * Tp, A68_375  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QZQATRN_anonymous(A68_200  T, A68_414 * Tp, A68_381  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  EARATRN_anonymous(A68_222  U, A68_414 * Tp, A68_390  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WARATRN_anonymous(A68_254 * P, A68_414 * Tp, A68_396  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FBRATRN_anonymous(A68_255 * F, A68_414 * Tp, A68_397  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BDRATRN_flt(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  IDRATRN_update_closure(void *NonLocals);

A_STATIC A68_VOID  ODRATRN_generator(A68_BOOL  MDRATRN_anonymous, A68_592  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZDRATRN_find_int_const(A68_INT  Closureno, A68_308 * O, A68_307  *ReturnedValue);

A_STATIC A68_VOID  NERATRN_fname_evaluate(A68_188  Fn, A68_414 * Tprocs, A68_472  Old, A68_32  Repldecs, A68_465  Subs_fmpar, A68_375  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WFRATRN_urepl_expand(A68_243 * Urepl, A68_414 * Tprocs, A68_301 * Env, A68_32  Repldecs, A68_510 ** Joinup, A68_390  *ReturnedValue);

A_STATIC A68_VOID  IGRATRN_generator(A68_BOOL  GGRATRN_anonymous, A68_509  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JHRATRN_ucond_expand(A68_242 * Uc, A68_414 * Tprocs, A68_390  *ReturnedValue);

A_STATIC A68_VOID  XHRATRN_make_multiple(A68_222  U, A68_472  Close, A68_222  *ReturnedValue);

A_STATIC A68_VOID  DIRATRN_move(A68_200  Ty, A68_222  Old, A68_BOOL  Query, A68_222  *ReturnedValue, void *NonLocals);

A_STATIC A68_237 * AKRATRN_trim_ustr(A68_237 * Us, A68_INT  Lwb, A68_INT  Size, void *NonLocals);

A_STATIC A68_VOID  LKRATRN_uindex_expand(A68_232 * Ui, A68_414 * Tprocs, A68_472  Close, A68_510 ** Joinup, A68_390  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SLRATRN_utrim_expand(A68_233 * Ut, A68_414 * Tprocs, A68_472  Close, A68_510 ** Joinup, A68_390  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NNRATRN_ustr_conc(A68_INT  Sort, A68_222  Left, A68_222  Right, A68_472  Close, A68_390  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  QORATRN_string_match(A68_222  Left, A68_222  Right);

A_STATIC A68_VOID  CPRATRN_string_conc(A68_INT  Sort, A68_222  L, A68_222  R, A68_472  Close, A68_471 * Diag, A68_390  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KQRATRN_generator(A68_BOOL  IQRATRN_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FSRATRN_uconc_expand(A68_238 * Uc, A68_414 * Tprocs, A68_472  Close, A68_471 * Diag, A68_510 ** Joinup, A68_390  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  ETRATRN_add_outerfn(A68_INT  Oldclosureno, A68_412  Ofnc, A68_264  Params, A68_BOOL  Specchanged, void *NonLocals);

A_STATIC A68_VOID  KTRATRN_generator(A68_BOOL  ITRATRN_anonymous, A68_576  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IURATRN_outerfn_expand(A68_307  Ofn, A68_414 * Tprocs, A68_392  Params, A68_584 * Mstable, A68_301 * Paramenv, A68_BOOL * Iochange, A68_470 * Monitors, A68_412  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NURATRN_generator(A68_BOOL  LURATRN_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XURATRN_generator(A68_BOOL  VURATRN_anonymous, A68_610  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HVRATRN_generator(A68_BOOL  FVRATRN_anonymous, A68_610  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RVRATRN_generator(A68_BOOL  PVRATRN_anonymous, A68_610  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BWRATRN_generator(A68_BOOL  ZVRATRN_anonymous, A68_612  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  LWRATRN_generator(A68_BOOL  JWRATRN_anonymous, A68_581  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RXRATRN_fndec_expand(A68_298 * Fdec, A68_414 * Tprocs, A68_392  Params, A68_584 * Mstable, A68_301 * Penv, A68_580 * Info, A68_BOOL * Iochange, A68_470 * Monitors, A68_411  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BYRATRN_generator(A68_BOOL  ZXRATRN_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  LYRATRN_generator(A68_BOOL  JYRATRN_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  AZRATRN_generator(A68_BOOL  YYRATRN_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  WZRATRN_translate_envno(A68_INT  Oldno, A68_582  Newenvnos);

A_STATIC A68_VOID  BASATRN_subs_ampar(A68_176  An, A68_175  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  LASATRN_subs_fmpar(A68_188  Fn, A68_184  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XASATRN_subs_tmpar(A68_201  Tn, A68_200  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MBSATRN_subs_cmpar(A68_216  Cn, A68_222  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XBSATRN_subs_fnmpar(A68_253  Fn, A68_262  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  UCSATRN_add_nametype(A68_INT  Oldindex, A68_VC  Name, A68_381  Tc, A68_372  Ac, void *NonLocals);

A_STATIC A68_VOID  CDSATRN_generator(A68_BOOL  ADSATRN_anonymous, A68_300  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JDSATRN_generator(A68_BOOL  HDSATRN_anonymous, A68_300  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  ZDSATRN_equal_macparams(A68_264  Specs, A68_264  Params, A68_472  Sclose, A68_472  Pclose);

A_STATIC A68_INT  KFSATRN_find_closureno(A68_INT  Oldclosureno, A68_264  Params, A68_BOOL * Specchanged, void *NonLocals);

A_STATIC A68_INT  BGSATRN_fndec_fnno(A68_264  Params, A68_INT  Oldfnno, A68_INT  Depth, void *NonLocals);

A_STATIC A68_INT  QGSATRN_fnusage_fnno(A68_INT  Oldfnno, A68_INT  Newclosureno, void *NonLocals);

A_STATIC A68_INT  DHSATRN_add_envint(A68_INT  Oldintno, A68_197 * Idec, void *NonLocals);

A_STATIC A68_VOID  JHSATRN_generator(A68_BOOL  HHSATRN_anonymous, A68_303  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QHSATRN_generator(A68_BOOL  OHSATRN_anonymous, A68_303  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  IISATRN_add_envconst(A68_INT  Oldconstno, A68_221 * Cdec, void *NonLocals);

A_STATIC A68_VOID  OISATRN_generator(A68_BOOL  MISATRN_anonymous, A68_305  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VISATRN_generator(A68_BOOL  TISATRN_anonymous, A68_305  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MJSATRN_resetscope(A68_INT  Depth, void *NonLocals);

A_STATIC A68_VOID  YJSATRN_increase_decstable(A68_610 * Table);

A_STATIC A68_VOID  CKSATRN_generator(A68_BOOL  AKSATRN_anonymous, A68_610  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RKSATRN_merge_env(A68_628  Find_no, A68_INT  Upb, A68_301 * Newenv, A68_582  *ReturnedValue);

A_STATIC A68_VOID  UKSATRN_generator(A68_BOOL  SKSATRN_anonymous, A68_582  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  OLSATRN_add_envfn(A68_INT  Oldfnno, A68_INT  Depth, A68_298 * Fn, A68_BOOL  Declared, A68_BOOL  Changed, void *NonLocals);

A_STATIC A68_VOID  WLSATRN_generator(A68_BOOL  ULSATRN_anonymous, A68_306  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DMSATRN_generator(A68_BOOL  BMSATRN_anonymous, A68_306  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RMSATRN_generator(A68_BOOL  PMSATRN_anonymous, A68_612  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HNSATRN_merge_envfns(A68_301 * Newenv, A68_301 * Macenv, A68_582  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  NNSATRN_find_no(A68_INT  I, A68_301 * Env, void *NonLocals);

A_STATIC A68_INT  AOSATRN_add_envtype(A68_INT  Oldtypeno, A68_INT  Depth, A68_385  Tc, void *NonLocals);

A_STATIC A68_VOID  JOSATRN_generator(A68_BOOL  HOSATRN_anonymous, A68_304  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QOSATRN_generator(A68_BOOL  OOSATRN_anonymous, A68_304  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NPSATRN_merge_envtypes(A68_301 * Newenv, A68_301 * Macenv, A68_582  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  TPSATRN_find_no(A68_INT  I, A68_301 * Env, void *NonLocals);

A_STATIC A68_INT  GQSATRN_add_envattr(A68_INT  Oldattrno, A68_INT  Depth, A68_374  Ac, void *NonLocals);

A_STATIC A68_VOID  PQSATRN_generator(A68_BOOL  NQSATRN_anonymous, A68_302  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WQSATRN_generator(A68_BOOL  UQSATRN_anonymous, A68_302  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  TRSATRN_merge_envattrs(A68_301 * Newenv, A68_301 * Macenv, A68_582  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  ZRSATRN_find_no(A68_INT  I, A68_301 * Env, void *NonLocals);

A_STATIC A68_638  KSSATRN_translate_mactypeno(A68_INT  Mactypeno, void *NonLocals);

A_STATIC A68_INT  ZSSATRN_set_consttype(A68_INT  Oldtypeno, A68_414 * Tp);

A_STATIC A68_VOID  NTSATRN_set_unittype(A68_222  U, A68_414 * Tp, void *NonLocals);

A_STATIC A68_638  VTSATRN_translate_macfnno(A68_INT  Macfnno, void *NonLocals);

A_STATIC A68_VOID  JUSATRN_set_envfn(A68_262  Inst, A68_414 * Tprocs, A68_262  *ReturnedValue, void *NonLocals);

A_STATIC A68_638  PVSATRN_translate_macattrno(A68_INT  Macattrno, void *NonLocals);

A_STATIC A68_VOID  EWSATRN_type_expand(A68_200  Type, A68_414 * Tprocs, A68_381  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WXSATRN_attrstr_expand(A68_178 * St, A68_414 * Tprocs, A68_373  *ReturnedValue);

A_STATIC A68_BOOL  XYSATRN_update_attr(A68_175  A, A68_301 * Attrenv, A68_INT * Newattrno, void *NonLocals);

A_STATIC A68_VOID  TZSATRN_attr_expand(A68_175  Attr, A68_414 * Tprocs, A68_372  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PBTATRN_formula_expand(A68_184  Formula, A68_414 * Tprocs, A68_375  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  UCTATRN_addfnname(A68_577 * Use, A68_INT  Depth, A68_270 * Sq, A68_251 * Sr, A68_BOOL  Isseq, A68_644  *ReturnedValue);

A_STATIC A68_VOID  QDTATRN_reposition_decls(A68_INT  Depth, A68_283  Decl, A68_578 * Decslist, A68_270 * Sq, A68_251 * Sr, A68_BOOL  Isseq, A68_644  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  LETATRN_position_decls(A68_283  Decl, A68_270 * Sq, A68_251 * Sr, A68_BOOL  Isseq, A68_644  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PFTATRN_fnbody_decl(A68_267 * Ut, A68_BOOL  C, A68_408  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BHTATRN_decl_inner(A68_283  Decl, A68_414 * Tprocs, A68_394  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  UJTATRN_series_decl(A68_251 * Ser, A68_407  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VKTATRN_sequence_decl(A68_270 * Seq, A68_402  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PLTATRN_body_unit(A68_222  U, A68_414 * Tprocs, A68_390  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BMTATRN_useries_expand(A68_245 * Us, A68_414 * Tprocs, A68_390  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VMTATRN_usequence_expand(A68_244 * Usq, A68_414 * Tprocs, A68_390  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PNTATRN_urow_expand(A68_236 * Urow, A68_414 * Tprocs, A68_390  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  AOTATRN_generator(A68_BOOL  YNTATRN_anonymous, A68_509  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  APTATRN_uname_nameno(A68_227 * Un, A68_390  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SPTATRN_ustr_joinup(A68_237 * Ust, A68_414 * Tprocs, A68_388  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  YPTATRN_generator(A68_BOOL  WPTATRN_anonymous, A68_509  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  UQTATRN_udyindex_joinup(A68_234 * Ud, A68_414 * Tprocs, A68_390  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BSTATRN_uinst_joinup(A68_262  Inst, A68_222  Left, A68_222  Right, A68_BOOL  Udinst, A68_414 * Tprocs, A68_390  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FTTATRN_uchoices(A68_282 * U, A68_414 * Tprocs, A68_200  Iptype, A68_237 * Tests, A68_389  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  EUTATRN_ucheck_expand(A68_247 * Uck, A68_414 * Tprocs, A68_390  *ReturnedValue);

A_STATIC A68_VOID  RUTATRN_unit_expand(A68_222  Unit, A68_414 * Tprocs, A68_390  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RBUATRN_mparams_expand(A68_264  Macparams, A68_299  Macspecs, A68_414 * Tprocs, A68_264  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VBUATRN_generator(A68_BOOL  TBUATRN_anonymous, A68_264  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VDUATRN_macspecs_expand(A68_299  Mspecs, A68_414 * Tprocs, A68_410  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  EEUATRN_generator(A68_BOOL  CEUATRN_anonymous, A68_299  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HIUATRN_seqchoices(A68_281 * Sc, A68_414 * Tprocs, A68_200  Iptype, A68_237 * Tests, A68_400  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GJUATRN_seqcond_expand(A68_277 * Scond, A68_414 * Tprocs, A68_401  *ReturnedValue);

A_STATIC A68_VOID  VJUATRN_seqrow_expand(A68_280 * Srow, A68_414 * Tprocs, A68_401  *ReturnedValue);

A_STATIC A68_VOID  PKUATRN_seqrepl_expand(A68_278 * Srepl, A68_414 * Tprocs, A68_401  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PLUATRN_seqstep_expand(A68_271  Seqstep, A68_414 * Tprocs, A68_401  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BNUATRN_names_nameno(A68_263 * Namelist, A68_414 * Tprocs, A68_BOOL  Issource, A68_398  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZNUATRN_let_expand(A68_256 * L, A68_414 * Tprocs, A68_399  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IOUATRN_join_expand(A68_258 * Join, A68_414 * Tprocs, A68_404  *ReturnedValue, void *NonLocals);

A_STATIC A68_259 * ZOUATRN_repljoin_expand(A68_259 * Rj, A68_414 * Tprocs, void *NonLocals);

A_STATIC A68_VOID  CQUATRN_step_expand(A68_252  Step, A68_414 * Tprocs, A68_406  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PQUATRN_print_expand(A68_254 * Print, A68_414 * Tprocs, A68_396  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FRUATRN_fault_expand(A68_255 * Fault, A68_414 * Tprocs, A68_397  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  BSUATRN_is_output(A68_222  Body, void *NonLocals);

A_STATIC A68_VOID  OSUATRN_fnbody_expand(A68_294  Fnbody, A68_414 * Tprocs, A68_408  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  TTUATRN_attr_sort(A68_175  A, A68_INT * Maxattrno, void *NonLocals);

A_STATIC A68_VOID  HUUATRN_type_sort(A68_200  T, A68_INT * Maxtypeno, void *NonLocals);

A_STATIC A68_VOID  AVUATRN_macparam_sort(A68_264  Params, A68_INT * Maxattrno, A68_INT * Maxtypeno, A68_INT * Maxfnno, void *NonLocals);

A_STATIC A68_VOID  ZVUATRN_instance_outer(A68_262  Inst, A68_298 * Fdec, A68_392  Mpc, A68_414 * Tprocs, A68_393  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MWUATRN_generator(A68_BOOL  KWUATRN_anonymous, A68_264  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  AYUATRN_instance_inner(A68_262  Inst, A68_298 * Fn, A68_392  Mpc, A68_INT  Maxattrno, A68_INT  Maxtypeno, A68_INT  Maxfnno, A68_580 * Inst_info, A68_414 * Tprocs, A68_393  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NYUATRN_generator(A68_BOOL  LYUATRN_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DAVATRN_instance_no_expand(A68_393  Ic, A68_298 * Fn, A68_392  Mpc, A68_BOOL  Mac_par, A68_414 * Tprocs, A68_393  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  LAVATRN_generator(A68_BOOL  JAVATRN_anonymous, A68_300  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MBVATRN_instance_expand(A68_262  Inst, A68_BOOL  Dont_expand, A68_414 * Tprocs, A68_393  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XCVATRN_mparam_expand(A68_266  Mp, A68_414 * Tprocs, A68_391  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BEVATRN_macparams_expand(A68_264  Mps, A68_414 * Tprocs, A68_392  *ReturnedValue);

A_STATIC A68_VOID  EEVATRN_generator(A68_BOOL  CEVATRN_anonymous, A68_264  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  UFVATRN_anonymous(A68_263 * N, A68_414 * Tp, A68_398  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OGVATRN_anonymous(A68_262  I, A68_414 * Tp, A68_393  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  THVATRN_generator(A68_BOOL  RHVATRN_anonymous, A68_300  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HIVATRN_generator(A68_BOOL  FIVATRN_anonymous, A68_582  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RIVATRN_generator(A68_BOOL  PIVATRN_anonymous, A68_582  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BJVATRN_generator(A68_BOOL  ZIVATRN_anonymous, A68_582  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BKVATRN_generator(A68_BOOL  ZJVATRN_anonymous, A68_306  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WKVATRN_generator(A68_BOOL  UKVATRN_anonymous, A68_302  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GLVATRN_generator(A68_BOOL  ELVATRN_anonymous, A68_304  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QLVATRN_generator(A68_BOOL  OLVATRN_anonymous, A68_306  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IMVATRN_outer_expand(A68_307  O, A68_414 * Tprocs, A68_412  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  TMVATRN_generator(A68_BOOL  RMVATRN_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ENVATRN_attr_outer(A68_175  Attr, A68_414 * Tprocs, A68_372  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PNVATRN_generator(A68_BOOL  NNVATRN_anonymous, A68_302  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IOVATRN_formula_outer(A68_184  Formula, A68_414 * Tprocs, A68_375  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HPVATRN_type_outer(A68_200  Type, A68_414 * Tprocs, A68_381  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SPVATRN_generator(A68_BOOL  QPVATRN_anonymous, A68_304  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  LQVATRN_const_outer(A68_222  Const, A68_414 * Tprocs, A68_390  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CDSATRN_generator(A68_BOOL  ADSATRN_anonymous, A68_300  *ReturnedValue, void *NonLocals)
#define NL(x) (((DDSATRN_generator *)NonLocals)->x)
{ 
A68_300  EDSATRN;  /* clause result */
A68_300  FDSATRN;  /* OPERATORS - dynamic generator */
{ 
FDSATRN.upb = NL(XCSATRN_max) ;
( ADSATRN_anonymous? A_VLOC(A68_297 ,FDSATRN): A_VHEAP(A68_297 ,FDSATRN) );
EDSATRN = FDSATRN;
} 
*ReturnedValue = (EDSATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  JDSATRN_generator(A68_BOOL  HDSATRN_anonymous, A68_300  *ReturnedValue, void *NonLocals)
#define NL(x) (((KDSATRN_generator *)NonLocals)->x)
{ 
A68_300  LDSATRN;  /* clause result */
A68_300  MDSATRN;  /* OPERATORS - dynamic generator */
{ 
MDSATRN.upb = (NL(XCSATRN_max)+10) ;
( HDSATRN_anonymous? A_VLOC(A68_297 ,MDSATRN): A_VHEAP(A68_297 ,MDSATRN) );
LDSATRN = MDSATRN;
} 
*ReturnedValue = (LDSATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  JHSATRN_generator(A68_BOOL  HHSATRN_anonymous, A68_303  *ReturnedValue, void *NonLocals)
#define NL(x) (((KHSATRN_generator *)NonLocals)->x)
{ 
A68_303  LHSATRN;  /* clause result */
A68_303  MHSATRN;  /* OPERATORS - dynamic generator */
{ 
MHSATRN.upb = NL(GHSATRN_max) ;
( HHSATRN_anonymous? A_VLOC(A68_197 *,MHSATRN): A_VHEAP(A68_197 *,MHSATRN) );
LHSATRN = MHSATRN;
} 
*ReturnedValue = (LHSATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  QHSATRN_generator(A68_BOOL  OHSATRN_anonymous, A68_303  *ReturnedValue, void *NonLocals)
#define NL(x) (((RHSATRN_generator *)NonLocals)->x)
{ 
A68_303  SHSATRN;  /* clause result */
A68_303  THSATRN;  /* OPERATORS - dynamic generator */
{ 
THSATRN.upb = (NL(GHSATRN_max)+10) ;
( OHSATRN_anonymous? A_VLOC(A68_197 *,THSATRN): A_VHEAP(A68_197 *,THSATRN) );
SHSATRN = THSATRN;
} 
*ReturnedValue = (SHSATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  OISATRN_generator(A68_BOOL  MISATRN_anonymous, A68_305  *ReturnedValue, void *NonLocals)
#define NL(x) (((PISATRN_generator *)NonLocals)->x)
{ 
A68_305  QISATRN;  /* clause result */
A68_305  RISATRN;  /* OPERATORS - dynamic generator */
{ 
RISATRN.upb = NL(LISATRN_max) ;
( MISATRN_anonymous? A_VLOC(A68_221 *,RISATRN): A_VHEAP(A68_221 *,RISATRN) );
QISATRN = RISATRN;
} 
*ReturnedValue = (QISATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  VISATRN_generator(A68_BOOL  TISATRN_anonymous, A68_305  *ReturnedValue, void *NonLocals)
#define NL(x) (((WISATRN_generator *)NonLocals)->x)
{ 
A68_305  XISATRN;  /* clause result */
A68_305  YISATRN;  /* OPERATORS - dynamic generator */
{ 
YISATRN.upb = (NL(LISATRN_max)+10) ;
( TISATRN_anonymous? A_VLOC(A68_221 *,YISATRN): A_VHEAP(A68_221 *,YISATRN) );
XISATRN = YISATRN;
} 
*ReturnedValue = (XISATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  CKSATRN_generator(A68_BOOL  AKSATRN_anonymous, A68_610  *ReturnedValue, void *NonLocals)
#define NL(x) (((DKSATRN_generator *)NonLocals)->x)
{ 
A68_610  EKSATRN;  /* clause result */
A68_610  FKSATRN;  /* OPERATORS - dynamic generator */
{ 
FKSATRN.upb = (NL(ZJSATRN_max)+10) ;
( AKSATRN_anonymous? A_VLOC(A68_578 *,FKSATRN): A_VHEAP(A68_578 *,FKSATRN) );
EKSATRN = FKSATRN;
} 
*ReturnedValue = (EKSATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  UKSATRN_generator(A68_BOOL  SKSATRN_anonymous, A68_582  *ReturnedValue, void *NonLocals)
#define NL(x) (((VKSATRN_generator *)NonLocals)->x)
{ 
A68_582  WKSATRN;  /* clause result */
A68_582  XKSATRN;  /* OPERATORS - dynamic generator */
{ 
XKSATRN.upb = NL(Upb) ;
( SKSATRN_anonymous? A_VLOC(A68_577 *,XKSATRN): A_VHEAP(A68_577 *,XKSATRN) );
WKSATRN = XKSATRN;
} 
*ReturnedValue = (WKSATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  WLSATRN_generator(A68_BOOL  ULSATRN_anonymous, A68_306  *ReturnedValue, void *NonLocals)
#define NL(x) (((XLSATRN_generator *)NonLocals)->x)
{ 
A68_306  YLSATRN;  /* clause result */
A68_306  ZLSATRN;  /* OPERATORS - dynamic generator */
{ 
ZLSATRN.upb = NL(RLSATRN_max) ;
( ULSATRN_anonymous? A_VLOC(A68_298 *,ZLSATRN): A_VHEAP(A68_298 *,ZLSATRN) );
YLSATRN = ZLSATRN;
} 
*ReturnedValue = (YLSATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  DMSATRN_generator(A68_BOOL  BMSATRN_anonymous, A68_306  *ReturnedValue, void *NonLocals)
#define NL(x) (((EMSATRN_generator *)NonLocals)->x)
{ 
A68_306  FMSATRN;  /* clause result */
A68_306  GMSATRN;  /* OPERATORS - dynamic generator */
{ 
GMSATRN.upb = (NL(RLSATRN_max)+10) ;
( BMSATRN_anonymous? A_VLOC(A68_298 *,GMSATRN): A_VHEAP(A68_298 *,GMSATRN) );
FMSATRN = GMSATRN;
} 
*ReturnedValue = (FMSATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  RMSATRN_generator(A68_BOOL  PMSATRN_anonymous, A68_612  *ReturnedValue, void *NonLocals)
#define NL(x) (((SMSATRN_generator *)NonLocals)->x)
{ 
A68_612  TMSATRN;  /* clause result */
A68_612  UMSATRN;  /* OPERATORS - dynamic generator */
{ 
UMSATRN.upb = (NL(RLSATRN_max)+10) ;
( PMSATRN_anonymous? A_VLOC(A68_264 ,UMSATRN): A_VHEAP(A68_264 ,UMSATRN) );
TMSATRN = UMSATRN;
} 
*ReturnedValue = (TMSATRN);
return;
} 
#undef NL

A_STATIC A68_INT  NNSATRN_find_no(A68_INT  I, A68_301 * Env, void *NonLocals)
#define NL(x) (((ONSATRN_find_no *)NonLocals)->x)
{ 
A68_306  PNSATRN;  /* OPERATORS - simple index */
A68_298 * QNSATRN_envfn;
A68_INT  RNSATRN;  /* clause result */
A68_306  SNSATRN;  /* OPERATORS - trim index */
A68_306  TNSATRN;  /* OPERATORS - trim index */
A_PROC_ENTRY(find_no);
 /* line 2741: */
{ 
PNSATRN = (*(&(NL(Macenv)->Fns))) ;
QNSATRN_envfn = (*(&A_VINDEX(PNSATRN,I)));
 /* line 2742: */
 /* line 2743: */
if ( ((*(&(QNSATRN_envfn->Sort)))==OKAATRN_outerdec) )
{ 
 /* line 2744: */
 /* line 2745: */
SNSATRN = (*(&(Env->Fns))) ;
RNSATRN = KCNATRN_findnewfnno((*(&(QNSATRN_envfn->Usage))), A_VTRIM(TNSATRN,(SNSATRN),A_VTSCRIPT(&(TNSATRN.upb),(SNSATRN).upb,1,(*NL(FXRATRN_envfnno)))));
} 
else
{ 
 /* line 2746: */
RNSATRN = 0;
} 
} 
A_PROC_EXIT(find_no);
return( RNSATRN );
} 
#undef NL

A_STATIC A68_VOID  JOSATRN_generator(A68_BOOL  HOSATRN_anonymous, A68_304  *ReturnedValue, void *NonLocals)
#define NL(x) (((KOSATRN_generator *)NonLocals)->x)
{ 
A68_304  LOSATRN;  /* clause result */
A68_304  MOSATRN;  /* OPERATORS - dynamic generator */
{ 
MOSATRN.upb = NL(EOSATRN_max) ;
( HOSATRN_anonymous? A_VLOC(A68_215 *,MOSATRN): A_VHEAP(A68_215 *,MOSATRN) );
LOSATRN = MOSATRN;
} 
*ReturnedValue = (LOSATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  QOSATRN_generator(A68_BOOL  OOSATRN_anonymous, A68_304  *ReturnedValue, void *NonLocals)
#define NL(x) (((ROSATRN_generator *)NonLocals)->x)
{ 
A68_304  SOSATRN;  /* clause result */
A68_304  TOSATRN;  /* OPERATORS - dynamic generator */
{ 
TOSATRN.upb = (NL(EOSATRN_max)+10) ;
( OOSATRN_anonymous? A_VLOC(A68_215 *,TOSATRN): A_VHEAP(A68_215 *,TOSATRN) );
SOSATRN = TOSATRN;
} 
*ReturnedValue = (SOSATRN);
return;
} 
#undef NL

A_STATIC A68_INT  TPSATRN_find_no(A68_INT  I, A68_301 * Env, void *NonLocals)
#define NL(x) (((UPSATRN_find_no *)NonLocals)->x)
{ 
A68_304  VPSATRN;  /* OPERATORS - simple index */
A68_215 * WPSATRN_envtype;
A68_INT  XPSATRN;  /* clause result */
A68_304  YPSATRN;  /* OPERATORS - trim index */
A68_304  ZPSATRN;  /* OPERATORS - trim index */
A_PROC_ENTRY(find_no);
 /* line 2786: */
{ 
VPSATRN = (*(&(NL(Macenv)->Types))) ;
WPSATRN_envtype = (*(&A_VINDEX(VPSATRN,I)));
 /* line 2787: */
 /* line 2788: */
if ( ((*(&(WPSATRN_envtype->Sort)))==OKAATRN_outerdec) )
{ 
 /* line 2789: */
 /* line 2790: */
YPSATRN = (*(&(Env->Types))) ;
XPSATRN = VSMATRN_findnewtypeno((*(&(WPSATRN_envtype->Usage))), A_VTRIM(ZPSATRN,(YPSATRN),A_VTSCRIPT(&(ZPSATRN.upb),(YPSATRN).upb,1,(*NL(CXRATRN_envtypeno)))));
} 
else
{ 
 /* line 2791: */
XPSATRN = 0;
} 
} 
A_PROC_EXIT(find_no);
return( XPSATRN );
} 
#undef NL

A_STATIC A68_VOID  PQSATRN_generator(A68_BOOL  NQSATRN_anonymous, A68_302  *ReturnedValue, void *NonLocals)
#define NL(x) (((QQSATRN_generator *)NonLocals)->x)
{ 
A68_302  RQSATRN;  /* clause result */
A68_302  SQSATRN;  /* OPERATORS - dynamic generator */
{ 
SQSATRN.upb = NL(KQSATRN_max) ;
( NQSATRN_anonymous? A_VLOC(A68_181 *,SQSATRN): A_VHEAP(A68_181 *,SQSATRN) );
RQSATRN = SQSATRN;
} 
*ReturnedValue = (RQSATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  WQSATRN_generator(A68_BOOL  UQSATRN_anonymous, A68_302  *ReturnedValue, void *NonLocals)
#define NL(x) (((XQSATRN_generator *)NonLocals)->x)
{ 
A68_302  YQSATRN;  /* clause result */
A68_302  ZQSATRN;  /* OPERATORS - dynamic generator */
{ 
ZQSATRN.upb = (NL(KQSATRN_max)+10) ;
( UQSATRN_anonymous? A_VLOC(A68_181 *,ZQSATRN): A_VHEAP(A68_181 *,ZQSATRN) );
YQSATRN = ZQSATRN;
} 
*ReturnedValue = (YQSATRN);
return;
} 
#undef NL

A_STATIC A68_INT  ZRSATRN_find_no(A68_INT  I, A68_301 * Env, void *NonLocals)
#define NL(x) (((ASSATRN_find_no *)NonLocals)->x)
{ 
A68_302  BSSATRN;  /* OPERATORS - simple index */
A68_181 * CSSATRN_envattr;
A68_INT  DSSATRN;  /* clause result */
A68_302  ESSATRN;  /* OPERATORS - trim index */
A68_302  FSSATRN;  /* OPERATORS - trim index */
A_PROC_ENTRY(find_no);
 /* line 2830: */
{ 
BSSATRN = (*(&(NL(Macenv)->Attrs))) ;
CSSATRN_envattr = (*(&A_VINDEX(BSSATRN,I)));
 /* line 2831: */
 /* line 2832: */
if ( ((*(&(CSSATRN_envattr->Sort)))==OKAATRN_outerdec) )
{ 
 /* line 2833: */
 /* line 2834: */
ESSATRN = (*(&(Env->Attrs))) ;
DSSATRN = KQMATRN_findnewattrno((*(&(CSSATRN_envattr->Usage))), A_VTRIM(FSSATRN,(ESSATRN),A_VTSCRIPT(&(FSSATRN.upb),(ESSATRN).upb,1,(*NL(TWRATRN_envattrno)))));
} 
else
{ 
 /* line 2835: */
DSSATRN = 0;
} 
} 
A_PROC_EXIT(find_no);
return( DSSATRN );
} 
#undef NL

A_STATIC A68_VOID  AOTATRN_generator(A68_BOOL  YNTATRN_anonymous, A68_509  *ReturnedValue, void *NonLocals)
#define NL(x) (((BOTATRN_generator *)NonLocals)->x)
{ 
A68_509  COTATRN;  /* clause result */
A68_509  DOTATRN;  /* OPERATORS - dynamic generator */
{ 
DOTATRN.upb = NL(XNTATRN_size) ;
( YNTATRN_anonymous? A_VLOC(A68_510 *,DOTATRN): A_VHEAP(A68_510 *,DOTATRN) );
COTATRN = DOTATRN;
} 
*ReturnedValue = (COTATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  YPTATRN_generator(A68_BOOL  WPTATRN_anonymous, A68_509  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZPTATRN_generator *)NonLocals)->x)
{ 
A68_509  AQTATRN;  /* clause result */
A68_509  BQTATRN;  /* OPERATORS - dynamic generator */
{ 
BQTATRN.upb = (*NL(UPTATRN_size)) ;
( WPTATRN_anonymous? A_VLOC(A68_510 *,BQTATRN): A_VHEAP(A68_510 *,BQTATRN) );
AQTATRN = BQTATRN;
} 
*ReturnedValue = (AQTATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  VBUATRN_generator(A68_BOOL  TBUATRN_anonymous, A68_264  *ReturnedValue, void *NonLocals)
#define NL(x) (((WBUATRN_generator *)NonLocals)->x)
{ 
A68_264  XBUATRN;  /* clause result */
A68_264  YBUATRN;  /* OPERATORS - dynamic generator */
{ 
YBUATRN.upb = NL(Macparams).upb ;
( TBUATRN_anonymous? A_VLOC(A68_265 ,YBUATRN): A_VHEAP(A68_265 ,YBUATRN) );
XBUATRN = YBUATRN;
} 
*ReturnedValue = (XBUATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  EEUATRN_generator(A68_BOOL  CEUATRN_anonymous, A68_299  *ReturnedValue, void *NonLocals)
#define NL(x) (((FEUATRN_generator *)NonLocals)->x)
{ 
A68_299  GEUATRN;  /* clause result */
A68_299  HEUATRN;  /* OPERATORS - dynamic generator */
{ 
HEUATRN.upb = NL(Mspecs).upb ;
( CEUATRN_anonymous? A_VLOC(A68_296 ,HEUATRN): A_VHEAP(A68_296 ,HEUATRN) );
GEUATRN = HEUATRN;
} 
*ReturnedValue = (GEUATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  MWUATRN_generator(A68_BOOL  KWUATRN_anonymous, A68_264  *ReturnedValue, void *NonLocals)
#define NL(x) (((NWUATRN_generator *)NonLocals)->x)
{ 
A68_264  OWUATRN;  /* clause result */
A68_264  PWUATRN;  /* OPERATORS - dynamic generator */
{ 
PWUATRN.upb = NL(Mpc).M.upb ;
( KWUATRN_anonymous? A_VLOC(A68_265 ,PWUATRN): A_VHEAP(A68_265 ,PWUATRN) );
OWUATRN = PWUATRN;
} 
*ReturnedValue = (OWUATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  NYUATRN_generator(A68_BOOL  LYUATRN_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((OYUATRN_generator *)NonLocals)->x)
{ 
A68_32  PYUATRN;  /* clause result */
A68_32  QYUATRN;  /* OPERATORS - dynamic generator */
{ 
QYUATRN.upb = (*(&(NL(JYUATRN_i_env)->Ints))).upb ;
( LYUATRN_anonymous? A_VLOC(A68_INT ,QYUATRN): A_VHEAP(A68_INT ,QYUATRN) );
PYUATRN = QYUATRN;
} 
*ReturnedValue = (PYUATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  LAVATRN_generator(A68_BOOL  JAVATRN_anonymous, A68_300  *ReturnedValue, void *NonLocals)
#define NL(x) (((MAVATRN_generator *)NonLocals)->x)
{ 
A68_300  NAVATRN;  /* clause result */
A68_300  OAVATRN;  /* OPERATORS - dynamic generator */
{ 
OAVATRN.upb = (*(&(NL(Fn)->Nametypes))).upb ;
( JAVATRN_anonymous? A_VLOC(A68_297 ,OAVATRN): A_VHEAP(A68_297 ,OAVATRN) );
NAVATRN = OAVATRN;
} 
*ReturnedValue = (NAVATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  EEVATRN_generator(A68_BOOL  CEVATRN_anonymous, A68_264  *ReturnedValue, void *NonLocals)
#define NL(x) (((FEVATRN_generator *)NonLocals)->x)
{ 
A68_264  GEVATRN;  /* clause result */
A68_264  HEVATRN;  /* OPERATORS - dynamic generator */
{ 
HEVATRN.upb = NL(Mps).upb ;
( CEVATRN_anonymous? A_VLOC(A68_265 ,HEVATRN): A_VHEAP(A68_265 ,HEVATRN) );
GEVATRN = HEVATRN;
} 
*ReturnedValue = (GEVATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  BYRATRN_generator(A68_BOOL  ZXRATRN_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((CYRATRN_generator *)NonLocals)->x)
{ 
A68_32  DYRATRN;  /* clause result */
A68_32  EYRATRN;  /* OPERATORS - dynamic generator */
{ 
EYRATRN.upb = (*(&(NL(TXRATRN_oldenv)->Ints))).upb ;
( ZXRATRN_anonymous? A_VLOC(A68_INT ,EYRATRN): A_VHEAP(A68_INT ,EYRATRN) );
DYRATRN = EYRATRN;
} 
*ReturnedValue = (DYRATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  LYRATRN_generator(A68_BOOL  JYRATRN_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((MYRATRN_generator *)NonLocals)->x)
{ 
A68_32  NYRATRN;  /* clause result */
A68_32  OYRATRN;  /* OPERATORS - dynamic generator */
{ 
OYRATRN.upb = (*(&(NL(TXRATRN_oldenv)->Consts))).upb ;
( JYRATRN_anonymous? A_VLOC(A68_INT ,OYRATRN): A_VHEAP(A68_INT ,OYRATRN) );
NYRATRN = OYRATRN;
} 
*ReturnedValue = (NYRATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  AZRATRN_generator(A68_BOOL  YYRATRN_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((BZRATRN_generator *)NonLocals)->x)
{ 
A68_32  CZRATRN;  /* clause result */
A68_32  DZRATRN;  /* OPERATORS - dynamic generator */
{ 
DZRATRN.upb = (*(&(NL(Fdec)->Nametypes))).upb ;
( YYRATRN_anonymous? A_VLOC(A68_INT ,DZRATRN): A_VHEAP(A68_INT ,DZRATRN) );
CZRATRN = DZRATRN;
} 
*ReturnedValue = (CZRATRN);
return;
} 
#undef NL

A_STATIC A68_INT  WZRATRN_translate_envno(A68_INT  Oldno, A68_582  Newenvnos)
{ 
A68_577 * XZRATRN_envnos;
A68_INT  YZRATRN;  /* clause result */
A_PROC_ENTRY(translate_envno);
 /* line 2402: */
{ 
XZRATRN_envnos = (*(&A_VINDEX(Newenvnos,Oldno)));
 /* line 2403: */
 /* line 2404: */
 /* line 2405: */
if ( (XZRATRN_envnos==UWQATRN_niluselist) )
{ 
 /* line 2406: */
YZRATRN = 0;
} 
else
{ 
 /* line 2407: */
YZRATRN = (*(&(XZRATRN_envnos->Newdecno)));
} 
} 
A_PROC_EXIT(translate_envno);
return( YZRATRN );
} 
#undef NL

A_STATIC A68_VOID  BASATRN_subs_ampar(A68_176  An, A68_175  *ReturnedValue, void *NonLocals)
#define NL(x) (((CASATRN_subs_ampar *)NonLocals)->x)
{ 
A68_INT  DASATRN_newattrno;
A68_302  EASATRN;  /* OPERATORS - simple index */
A68_181 * FASATRN_adec;
A68_175  GASATRN;  /* clause result */
A68_464  HASATRN;  /* CALL */
A68_175  IASATRN;  /* avoid structure result */
A_PROC_ENTRY(subs_ampar);
 /* line 2411: */
{ 
DASATRN_newattrno = WZRATRN_translate_envno(An.Attrno, NL(WXRATRN_newenvattrnos));
 /* line 2412: */
 /* line 2413: */
if ( (DASATRN_newattrno!=0) )
{ 
EASATRN = (*(&(NL(GXRATRN_newenv)->Attrs))) ;
FASATRN_adec = (*(&A_VINDEX(EASATRN,DASATRN_newattrno)));
 /* line 2414: */
 /* line 2415: */
GASATRN = (*(&(FASATRN_adec->Value)));
} 
else
{ 
 /* line 2416: */
 /* line 2417: */
HASATRN = (*(&(NL(Info)->Subs_ampar))) ;
A_CALLPROC(HASATRN,(An, &IASATRN),(An, &IASATRN,(HASATRN).nonlocals));
GASATRN = IASATRN;
} 
} 
A_PROC_EXIT(subs_ampar);
*ReturnedValue = (GASATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  LASATRN_subs_fmpar(A68_188  Fn, A68_184  *ReturnedValue, void *NonLocals)
#define NL(x) (((MASATRN_subs_fmpar *)NonLocals)->x)
{ 
A68_INT  NASATRN;  /* YIELD */
A68_INT  OASATRN_newintno;
A68_303  PASATRN;  /* OPERATORS - simple index */
A68_197 * QASATRN_idec;
A68_184  RASATRN;  /* clause result */
A68_184  SASATRN;  /* avoid structure result */
A68_465  TASATRN;  /* CALL */
A68_184  UASATRN;  /* avoid structure result */
A_PROC_ENTRY(subs_fmpar);
 /* line 2420: */
{ 
NASATRN = Fn.Intno ;
OASATRN_newintno = (*(&A_VINDEX(NL(FYRATRN_newenvintnos),NASATRN)));
 /* line 2421: */
 /* line 2422: */
if ( (OASATRN_newintno!=0) )
{ 
PASATRN = (*(&(NL(GXRATRN_newenv)->Ints))) ;
QASATRN_idec = (*(&A_VINDEX(PASATRN,OASATRN_newintno)));
 /* line 2423: */
 /* line 2424: */
NFPATRN_get_formula( (*(&(QASATRN_idec->Value))), &SASATRN );
RASATRN = SASATRN;
} 
else
{ 
 /* line 2425: */
 /* line 2426: */
TASATRN = (*(&(NL(Info)->Subs_fmpar))) ;
A_CALLPROC(TASATRN,(Fn, &UASATRN),(Fn, &UASATRN,(TASATRN).nonlocals));
RASATRN = UASATRN;
} 
} 
A_PROC_EXIT(subs_fmpar);
*ReturnedValue = (RASATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  XASATRN_subs_tmpar(A68_201  Tn, A68_200  *ReturnedValue, void *NonLocals)
#define NL(x) (((YASATRN_subs_tmpar *)NonLocals)->x)
{ 
A68_INT  ZASATRN_newtypeno;
A68_304  ABSATRN;  /* OPERATORS - simple index */
A68_215 * BBSATRN_tdec;
A68_213  CBSATRN;  /* united object - for case conformity */
A68_209 * DBSATRN_tg;
A68_200  EBSATRN;  /* clause result */
A68_200  HBSATRN;  /* OPERATORS - skip to mode */
A68_466  IBSATRN;  /* CALL */
A68_200  JBSATRN;  /* avoid structure result */
A_PROC_ENTRY(subs_tmpar);
 /* line 2429: */
{ 
ZASATRN_newtypeno = WZRATRN_translate_envno(Tn.Typeno, NL(XXRATRN_newenvtypenos));
 /* line 2430: */
 /* line 2431: */
if ( (ZASATRN_newtypeno!=0) )
{ 
ABSATRN = (*(&(NL(GXRATRN_newenv)->Types))) ;
BBSATRN_tdec = (*(&A_VINDEX(ABSATRN,ZASATRN_newtypeno)));
 /* line 2432: */
 /* line 2433: */
CBSATRN = (*(&(BBSATRN_tdec->Body))) ;
switch ( CBSATRN.mode )
{ 
case 3: /* REF STRUCT(MODE200)  */
DBSATRN_tg = (CBSATRN.data.mode3);
 /* line 2434: */
EBSATRN = (*(&(DBSATRN_tg->Tag)));
break;
default: 
NKDAOST_sysfault(GBSATRN);
 /* line 2435: */
 /* line 2436: */
EBSATRN = HBSATRN;
break;
} 
} 
else
{ 
 /* line 2437: */
 /* line 2438: */
IBSATRN = (*(&(NL(Info)->Subs_tmpar))) ;
A_CALLPROC(IBSATRN,(Tn, &JBSATRN),(Tn, &JBSATRN,(IBSATRN).nonlocals));
EBSATRN = JBSATRN;
} 
} 
A_PROC_EXIT(subs_tmpar);
*ReturnedValue = (EBSATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  MBSATRN_subs_cmpar(A68_216  Cn, A68_222  *ReturnedValue, void *NonLocals)
#define NL(x) (((NBSATRN_subs_cmpar *)NonLocals)->x)
{ 
A68_INT  OBSATRN;  /* YIELD */
A68_INT  PBSATRN_newconstno;
A68_305  QBSATRN;  /* OPERATORS - simple index */
A68_221 * RBSATRN_cdec;
A68_222  SBSATRN;  /* clause result */
A68_467  TBSATRN;  /* CALL */
A68_222  UBSATRN;  /* avoid structure result */
A_PROC_ENTRY(subs_cmpar);
 /* line 2441: */
{ 
OBSATRN = Cn.Constno ;
PBSATRN_newconstno = (*(&A_VINDEX(NL(PYRATRN_newenvconstnos),OBSATRN)));
 /* line 2442: */
 /* line 2443: */
if ( (PBSATRN_newconstno!=0) )
{ 
QBSATRN = (*(&(NL(GXRATRN_newenv)->Consts))) ;
RBSATRN_cdec = (*(&A_VINDEX(QBSATRN,PBSATRN_newconstno)));
 /* line 2444: */
 /* line 2445: */
SBSATRN = (*(&(RBSATRN_cdec->Value)));
} 
else
{ 
 /* line 2446: */
 /* line 2447: */
TBSATRN = (*(&(NL(Info)->Subs_cmpar))) ;
A_CALLPROC(TBSATRN,(Cn, &UBSATRN),(Cn, &UBSATRN,(TBSATRN).nonlocals));
SBSATRN = UBSATRN;
} 
} 
A_PROC_EXIT(subs_cmpar);
*ReturnedValue = (SBSATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  XBSATRN_subs_fnmpar(A68_253  Fn, A68_262  *ReturnedValue, void *NonLocals)
#define NL(x) (((YBSATRN_subs_fnmpar *)NonLocals)->x)
{ 
A68_INT  ZBSATRN_newfnno;
A68_306  ACSATRN;  /* OPERATORS - simple index */
A68_298 * BCSATRN_fdec;
A68_294  CCSATRN;  /* united object - for case conformity */
A68_267 * DCSATRN_ut;
A68_222  ECSATRN;  /* united object - for case conformity */
A68_239 * FCSATRN_um;
A68_262  GCSATRN;  /* clause result */
A68_262  JCSATRN;  /* OPERATORS - skip to mode */
A68_262  MCSATRN;  /* OPERATORS - skip to mode */
A68_468  NCSATRN;  /* CALL */
A68_262  OCSATRN;  /* avoid structure result */
A_PROC_ENTRY(subs_fnmpar);
 /* line 2450: */
{ 
ZBSATRN_newfnno = WZRATRN_translate_envno(Fn.Fnno, NL(YXRATRN_newenvfnnos));
 /* line 2451: */
 /* line 2452: */
if ( (ZBSATRN_newfnno!=0) )
{ 
ACSATRN = (*(&(NL(GXRATRN_newenv)->Fns))) ;
BCSATRN_fdec = (*(&A_VINDEX(ACSATRN,ZBSATRN_newfnno)));
 /* line 2453: */
 /* line 2454: */
CCSATRN = (*(&(BCSATRN_fdec->Fnbody))) ;
switch ( CCSATRN.mode )
{ 
case 1: /* REF STRUCT(MODE222)  */
DCSATRN_ut = (CCSATRN.data.mode1);
 /* line 2455: */
 /* line 2456: */
ECSATRN = (*(&(DCSATRN_ut->Tag))) ;
switch ( ECSATRN.mode )
{ 
case 23: /* REF STRUCT(MODE262,MODE222)  */
FCSATRN_um = (ECSATRN.data.mode23);
 /* line 2457: */
GCSATRN = (*(&(FCSATRN_um->Inst)));
break;
default: 
NKDAOST_sysfault(ICSATRN);
 /* line 2458: */
 /* line 2459: */
GCSATRN = JCSATRN;
break;
} 
break;
default: 
NKDAOST_sysfault(LCSATRN);
 /* line 2460: */
 /* line 2461: */
GCSATRN = MCSATRN;
break;
} 
} 
else
{ 
 /* line 2462: */
 /* line 2463: */
NCSATRN = (*(&(NL(Info)->Subs_fnmpar))) ;
A_CALLPROC(NCSATRN,(Fn, &OCSATRN),(Fn, &OCSATRN,(NCSATRN).nonlocals));
GCSATRN = OCSATRN;
} 
} 
A_PROC_EXIT(subs_fnmpar);
*ReturnedValue = (GCSATRN);
return;
} 
#undef NL

A_STATIC A68_INT  UCSATRN_add_nametype(A68_INT  Oldindex, A68_VC  Name, A68_381  Tc, A68_372  Ac, void *NonLocals)
#define NL(x) (((VCSATRN_add_nametype *)NonLocals)->x)
{ 
A68_300 * WCSATRN_nametypes;
A68_INT  XCSATRN_max;
A68_BOOL  YCSATRN;  /* optbool result */
A68_BOOL  ZCSATRN;  /* optbool result */
A68_619  BDSATRN_generator;   /* proc value of non-global proc */
A68_300  GDSATRN;  /* avoid structure result */
A68_619  IDSATRN_generator;   /* proc value of non-global proc */
A68_300  NDSATRN;  /* avoid structure result */
A68_300  ODSATRN_newtypes;
A68_300  PDSATRN;  /* OPERATORS - trim index */
A68_300  QDSATRN;  /* YIELD */
A68_297  RDSATRN;  /* collateral clause result */
A68_297 * SDSATRN;  /* YIELD */
A68_INT * TDSATRN;  /* YIELD */
A68_INT  UDSATRN;  /* clause result */
A_PROC_ENTRY(add_nametype);
 /* line 2466: */
 /* line 2467: */
{ 
(*NL(KZRATRN_nametypeno))+=1;
 /* line 2468: */
WCSATRN_nametypes = (&(NL(LZRATRN_newfdec)->Nametypes));
 /* line 2469: */
XCSATRN_max = (*WCSATRN_nametypes).upb;
 /* line 2470: */
 /* line 2471: */
YCSATRN = !(*NL(IZRATRN_nametypechange));
if ( YCSATRN )
{ZCSATRN = Tc.C;
if ( ! ZCSATRN )
{ZCSATRN = Ac.C;
}
if ( ! ZCSATRN )
{ZCSATRN = ((*NL(KZRATRN_nametypeno))!=Oldindex);
}
 /* line 2472: */
YCSATRN = ZCSATRN;
}
if ( YCSATRN )
{ 
(*NL(IZRATRN_nametypechange)) = A68_TRUE;
 /* line 2473: */
A_CLOSURE( BDSATRN_generator, CDSATRN_generator, DDSATRN_generator );
(( DDSATRN_generator * ) ( BDSATRN_generator.nonlocals )) -> XCSATRN_max = XCSATRN_max;
 /* line 2474: */
A_CALLPROC(BDSATRN_generator,(A68_FALSE, &GDSATRN),(A68_FALSE, &GDSATRN,(BDSATRN_generator).nonlocals));
A_VASSIGN2((*WCSATRN_nametypes),GDSATRN,A68_297 ) ;
(*WCSATRN_nametypes) = GDSATRN;
} 
 /* line 2475: */
 /* line 2476: */
if ( ((*NL(KZRATRN_nametypeno))>XCSATRN_max) )
{ 
A_CLOSURE( IDSATRN_generator, JDSATRN_generator, KDSATRN_generator );
(( KDSATRN_generator * ) ( IDSATRN_generator.nonlocals )) -> XCSATRN_max = XCSATRN_max;
A_CALLPROC(IDSATRN_generator,(A68_FALSE, &NDSATRN),(A68_FALSE, &NDSATRN,(IDSATRN_generator).nonlocals));
ODSATRN_newtypes = NDSATRN;
 /* line 2477: */
QDSATRN = A_VTRIM(PDSATRN,(ODSATRN_newtypes),A_VTSCRIPT(&(PDSATRN.upb),(ODSATRN_newtypes).upb,1,XCSATRN_max)) ;
A_VASSIGN2((*WCSATRN_nametypes),QDSATRN,A68_297 );
 /* line 2478: */
 /* line 2479: */
(*WCSATRN_nametypes) = ODSATRN_newtypes;
} 
 /* line 2480: */
 /* line 2481: */
if ( (*NL(IZRATRN_nametypechange)) )
{ 
RDSATRN.Name = Name;
RDSATRN.Type = Tc.T;
 /* line 2482: */
RDSATRN.Attr = Ac.A;
SDSATRN = (&A_VINDEX((*WCSATRN_nametypes),(*NL(KZRATRN_nametypeno)))) ;
(*SDSATRN) = RDSATRN;
} 
 /* line 2483: */
 /* line 2484: */
if ( (Oldindex>0) )
{ 
 /* line 2485: */
TDSATRN = (&A_VINDEX(NL(EZRATRN_newnamenos),Oldindex)) ;
(*TDSATRN) = (*NL(KZRATRN_nametypeno));
} 
 /* line 2486: */
 /* line 2487: */
UDSATRN = (*NL(KZRATRN_nametypeno));
} 
A_PROC_EXIT(add_nametype);
return( UDSATRN );
} 
#undef NL

A_STATIC A68_BOOL  ZDSATRN_equal_macparams(A68_264  Specs, A68_264  Params, A68_472  Sclose, A68_472  Pclose)
{ 
A68_BOOL  AESATRN;  /* optbool result */
A68_BOOL  BESATRN_equal;
A68_265 * CESATRN_p;
A68_265 * DESATRN_spec;
A68_INT  EESATRN;  /* forall loop counter */
A68_266  FESATRN;  /* united object - for case conformity */
A68_183  GESATRN_as;
A68_266  HESATRN;  /* united object - for case conformity */
A68_183  IESATRN_ap;
A68_BOOL  JESATRN;  /* clause result */
A68_195  KESATRN_fs;
A68_266  LESATRN;  /* united object - for case conformity */
A68_195  MESATRN_fp;
A68_209  NESATRN_ts;
A68_266  OESATRN;  /* united object - for case conformity */
A68_209  PESATRN_tp;
A68_267  QESATRN_cs;
A68_266  RESATRN;  /* united object - for case conformity */
A68_267  SESATRN_cp;
A68_200  TESATRN;  /* avoid structure result */
A68_200  UESATRN_stype;
A68_200  VESATRN;  /* avoid structure result */
A68_200  WESATRN_ptype;
A68_BOOL  XESATRN;  /* optbool result */
A68_262  YESATRN_is;
A68_266  ZESATRN;  /* united object - for case conformity */
A68_262  AFSATRN_ip;
A68_BOOL  DFSATRN;  /* OPERATORS - skip to mode */
A68_BOOL  EFSATRN;  /* clause result */
A68_BOOL  FFSATRN;  /* clause result */
A_PROC_ENTRY(equal_macparams);
 /* line 2495: */
 /* line 2497: */
AESATRN = A_VSTRUCTCOMP(Specs,ABAATRN_nilmacparams);
if ( AESATRN )
{AESATRN = A_VSTRUCTCOMP(Params,ABAATRN_nilmacparams);
}
 /* line 2499: */
if ( ! AESATRN )
{{ 
BESATRN_equal = (Specs.upb==Params.upb);
 /* line 2500: */
 /* line 2501: */
if ( BESATRN_equal )
{ 
EESATRN = Params.upb -1;
if ( EESATRN != Specs.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
CESATRN_p = Params.data;
DESATRN_spec = Specs.data;
for (;EESATRN-- >= 0;
(CESATRN_p++
,DESATRN_spec++
) )
{
 /* line 2502: */
if ( !(BESATRN_equal) ) break;
 /* line 2503: */
 /* line 2504: */
FESATRN = (*(&(DESATRN_spec->Param))) ;
switch ( FESATRN.mode )
{ 
case 1: /* STRUCT(MODE175)  */
GESATRN_as = (FESATRN.data.mode1);
 /* line 2505: */
 /* line 2506: */
HESATRN = (*(&(CESATRN_p->Param))) ;
switch ( HESATRN.mode )
{ 
case 1: /* STRUCT(MODE175)  */
IESATRN_ap = (HESATRN.data.mode1);
 /* line 2507: */
JESATRN = NDQATRN_equal_attr(GESATRN_as.Tag, IESATRN_ap.Tag, Sclose, Pclose);
break;
default: 
 /* line 2508: */
 /* line 2509: */
JESATRN = A68_FALSE;
break;
} 
break;
case 2: /* STRUCT(MODE184)  */
KESATRN_fs = (FESATRN.data.mode2);
 /* line 2510: */
 /* line 2511: */
LESATRN = (*(&(CESATRN_p->Param))) ;
switch ( LESATRN.mode )
{ 
case 2: /* STRUCT(MODE184)  */
MESATRN_fp = (LESATRN.data.mode2);
 /* line 2512: */
JESATRN = (XOMATRN_int(KESATRN_fs.Tag)==XOMATRN_int(MESATRN_fp.Tag));
break;
default: 
 /* line 2513: */
 /* line 2514: */
JESATRN = A68_FALSE;
break;
} 
break;
case 3: /* STRUCT(MODE200)  */
NESATRN_ts = (FESATRN.data.mode3);
 /* line 2515: */
 /* line 2516: */
OESATRN = (*(&(CESATRN_p->Param))) ;
switch ( OESATRN.mode )
{ 
case 3: /* STRUCT(MODE200)  */
PESATRN_tp = (OESATRN.data.mode3);
 /* line 2517: */
 /* line 2518: */
JESATRN = LFQATRN_checktypes(NESATRN_ts.Tag, PESATRN_tp.Tag, Sclose, Pclose);
break;
default: 
 /* line 2519: */
 /* line 2520: */
JESATRN = A68_FALSE;
break;
} 
break;
case 4: /* STRUCT(MODE222)  */
QESATRN_cs = (FESATRN.data.mode4);
 /* line 2521: */
 /* line 2522: */
RESATRN = (*(&(CESATRN_p->Param))) ;
switch ( RESATRN.mode )
{ 
case 4: /* STRUCT(MODE222)  */
SESATRN_cp = (RESATRN.data.mode4);
 /* line 2523: */
{ 
 /* line 2524: */
VUNATRN_unit_type( QESATRN_cs.Tag, Sclose.Fdec, Sclose.Env, &TESATRN );
UESATRN_stype = TESATRN;
 /* line 2525: */
 /* line 2526: */
VUNATRN_unit_type( SESATRN_cp.Tag, Pclose.Fdec, Pclose.Env, &VESATRN );
WESATRN_ptype = VESATRN;
 /* line 2527: */
 /* line 2528: */
 /* line 2529: */
XESATRN = LFQATRN_checktypes(UESATRN_stype, WESATRN_ptype, Sclose, Pclose);
if ( XESATRN )
{ /* line 2530: */
XESATRN = !DYPATRN_checkconsts(QESATRN_cs.Tag, SESATRN_cp.Tag, A68_FALSE);
}
 /* line 2531: */
JESATRN = XESATRN;
} 
break;
default: 
 /* line 2532: */
 /* line 2533: */
JESATRN = A68_FALSE;
break;
} 
break;
case 5: /* STRUCT(INT,REF MODE264,MODE175)  */
YESATRN_is = (FESATRN.data.mode5);
 /* line 2534: */
 /* line 2535: */
ZESATRN = (*(&(CESATRN_p->Param))) ;
switch ( ZESATRN.mode )
{ 
case 5: /* STRUCT(INT,REF MODE264,MODE175)  */
AFSATRN_ip = (ZESATRN.data.mode5);
 /* line 2536: */
JESATRN = WEQATRN_equal_instances(YESATRN_is, AFSATRN_ip, Sclose, Pclose);
break;
default: 
 /* line 2537: */
 /* line 2538: */
JESATRN = A68_FALSE;
break;
} 
break;
default: 
NKDAOST_sysfault(CFSATRN);
 /* line 2539: */
 /* line 2540: */
JESATRN = DFSATRN;
break;
} 
BESATRN_equal = JESATRN;
}
 /* line 2541: */
} 
 /* line 2542: */
 /* line 2543: */
 /* line 2544: */
EFSATRN = BESATRN_equal;
} 
AESATRN = EFSATRN;
}
FFSATRN = AESATRN;
A_PROC_EXIT(equal_macparams);
return( FFSATRN );
} 
#undef NL
 /* line 2547: */

A_STATIC A68_INT  KFSATRN_find_closureno(A68_INT  Oldclosureno, A68_264  Params, A68_BOOL * Specchanged, void *NonLocals)
#define NL(x) (((LFSATRN_find_closureno *)NonLocals)->x)
{ 
A68_INT  MFSATRN_newclosureno;
A68_576  NFSATRN;  /* != */
A68_INT  OFSATRN_hash;
A68_576  QFSATRN;  /* OPERATORS - simple index */
A68_575 * PFSATRN_hlist;
A68_BOOL  RFSATRN;  /* optbool result */
A68_307  SFSATRN_ofn;
A68_298 * TFSATRN_fdec;
A68_472  UFSATRN;  /* collateral clause result */
A68_472  VFSATRN_sclose;
A68_INT  WFSATRN;  /* clause result */
A_PROC_ENTRY(find_closureno);
 /* line 2548: */
 /* line 2549: */
{ 
MFSATRN_newclosureno = (-1);
 /* line 2550: */
 /* line 2551: */
NFSATRN = (*(&A_VINDEX(NL(SDRATRN_hashtable),Oldclosureno))) ;
if ( ! A_VSTRUCTCOMP(NFSATRN,TWQATRN_nilvechashlist) )
{ 
OFSATRN_hash = FWQATRN_macparams_hash(Params);
 /* line 2552: */
QFSATRN = (*(&A_VINDEX(NL(SDRATRN_hashtable),Oldclosureno))) ;
PFSATRN_hlist = (*(&A_VINDEX(QFSATRN,OFSATRN_hash)));
 /* line 2553: */
for ( ;; )
{ 
RFSATRN = (PFSATRN_hlist!=RWQATRN_nilhashlist);
if ( RFSATRN )
{ /* line 2554: */
RFSATRN = (MFSATRN_newclosureno<0);
}
if ( !(RFSATRN) ) break;
SFSATRN_ofn = (*(&(ELCATRN_find_outers((*(&(PFSATRN_hlist->Index))), (*NL(EDRATRN_newclosure)), NL(Msg))->Outer)));
 /* line 2555: */
TFSATRN_fdec = CQMATRN_get_outerfn(SFSATRN_ofn);
 /* line 2556: */
UFSATRN.Fdec = TFSATRN_fdec;
UFSATRN.Env = SFSATRN_ofn.Environ;
VFSATRN_sclose = UFSATRN;
 /* line 2557: */
 /* line 2558: */
if ( ZDSATRN_equal_macparams((*(&(PFSATRN_hlist->Params))), Params, VFSATRN_sclose, NL(OZRATRN_newclose)) )
{ 
(*Specchanged) = (*(&(PFSATRN_hlist->Specchanged)));
 /* line 2559: */
 /* line 2560: */
MFSATRN_newclosureno = (*(&(PFSATRN_hlist->Index)));
} 
 /* line 2561: */
 /* line 2562: */
PFSATRN_hlist = (*(&(PFSATRN_hlist->Rest)));
}
 /* line 2563: */
} 
 /* line 2564: */
 /* line 2565: */
WFSATRN = MFSATRN_newclosureno;
} 
A_PROC_EXIT(find_closureno);
return( WFSATRN );
} 
#undef NL

A_STATIC A68_INT  BGSATRN_fndec_fnno(A68_264  Params, A68_INT  Oldfnno, A68_INT  Depth, void *NonLocals)
#define NL(x) (((CGSATRN_fndec_fnno *)NonLocals)->x)
{ 
A68_INT  DGSATRN_fnno;
A68_577 * EGSATRN_instances;
A68_BOOL  FGSATRN;  /* optbool result */
A68_306  GGSATRN;  /* OPERATORS - simple index */
A68_INT  HGSATRN;  /* YIELD */
A68_298 * IGSATRN_fdec;
A68_INT  JGSATRN;  /* YIELD */
A68_264  KGSATRN_specpars;
A68_BOOL  LGSATRN;  /* optbool result */
A68_INT  MGSATRN;  /* clause result */
A_PROC_ENTRY(fndec_fnno);
 /* line 2568: */
 /* line 2571: */
{ 
DGSATRN_fnno = (-1);
 /* line 2572: */
EGSATRN_instances = (*(&A_VINDEX(NL(YXRATRN_newenvfnnos),Oldfnno)));
 /* line 2573: */
for ( ;; )
{ 
FGSATRN = (EGSATRN_instances!=UWQATRN_niluselist);
if ( FGSATRN )
{ /* line 2574: */
FGSATRN = (DGSATRN_fnno<0);
}
if ( !(FGSATRN) ) break;
GGSATRN = (*(&(NL(GXRATRN_newenv)->Fns))) ;
HGSATRN = (*(&(EGSATRN_instances->Newdecno))) ;
IGSATRN_fdec = (*(&A_VINDEX(GGSATRN,HGSATRN)));
 /* line 2575: */
JGSATRN = (*(&(EGSATRN_instances->Newdecno))) ;
KGSATRN_specpars = (*(&A_VINDEX((*NL(FWRATRN_macpartable)),JGSATRN)));
 /* line 2576: */
 /* line 2577: */
LGSATRN = ((*(&(IGSATRN_fdec->Sort)))==PKAATRN_localdec);
if ( LGSATRN )
{LGSATRN = (Depth==(*(&(EGSATRN_instances->Depth))));
}
 /* line 2578: */
if ( LGSATRN )
{ /* line 2579: */
LGSATRN = ZDSATRN_equal_macparams(KGSATRN_specpars, Params, NL(OZRATRN_newclose), NL(OZRATRN_newclose));
}
if ( LGSATRN )
{ 
 /* line 2580: */
DGSATRN_fnno = (*(&(EGSATRN_instances->Newdecno)));
} 
 /* line 2581: */
 /* line 2582: */
EGSATRN_instances = (*(&(EGSATRN_instances->Rest)));
}
 /* line 2583: */
 /* line 2584: */
MGSATRN = DGSATRN_fnno;
} 
A_PROC_EXIT(fndec_fnno);
return( MGSATRN );
} 
#undef NL

A_STATIC A68_INT  QGSATRN_fnusage_fnno(A68_INT  Oldfnno, A68_INT  Newclosureno, void *NonLocals)
#define NL(x) (((RGSATRN_fnusage_fnno *)NonLocals)->x)
{ 
A68_INT  SGSATRN_fnno;
A68_577 * TGSATRN_instances;
A68_BOOL  UGSATRN;  /* optbool result */
A68_306  VGSATRN;  /* OPERATORS - simple index */
A68_INT  WGSATRN;  /* YIELD */
A68_298 * XGSATRN_fdec;
A68_BOOL  YGSATRN;  /* optbool result */
A68_INT  ZGSATRN;  /* clause result */
A_PROC_ENTRY(fnusage_fnno);
 /* line 2587: */
 /* line 2589: */
{ 
SGSATRN_fnno = (-1);
 /* line 2590: */
TGSATRN_instances = (*(&A_VINDEX(NL(YXRATRN_newenvfnnos),Oldfnno)));
 /* line 2591: */
for ( ;; )
{ 
UGSATRN = (TGSATRN_instances!=UWQATRN_niluselist);
if ( UGSATRN )
{ /* line 2592: */
UGSATRN = (SGSATRN_fnno<0);
}
if ( !(UGSATRN) ) break;
VGSATRN = (*(&(NL(GXRATRN_newenv)->Fns))) ;
WGSATRN = (*(&(TGSATRN_instances->Newdecno))) ;
XGSATRN_fdec = (*(&A_VINDEX(VGSATRN,WGSATRN)));
 /* line 2593: */
 /* line 2594: */
YGSATRN = ((*(&(XGSATRN_fdec->Sort)))==OKAATRN_outerdec);
if ( YGSATRN )
{ /* line 2595: */
YGSATRN = ((*(&((*(&(XGSATRN_fdec->Usage)))->Closureno)))==Newclosureno);
}
if ( YGSATRN )
{ 
 /* line 2596: */
SGSATRN_fnno = (*(&(TGSATRN_instances->Newdecno)));
} 
 /* line 2597: */
 /* line 2598: */
TGSATRN_instances = (*(&(TGSATRN_instances->Rest)));
}
 /* line 2599: */
 /* line 2600: */
ZGSATRN = SGSATRN_fnno;
} 
A_PROC_EXIT(fnusage_fnno);
return( ZGSATRN );
} 
#undef NL

A_STATIC A68_INT  DHSATRN_add_envint(A68_INT  Oldintno, A68_197 * Idec, void *NonLocals)
#define NL(x) (((EHSATRN_add_envint *)NonLocals)->x)
{ 
A68_303 * FHSATRN_ints;
A68_INT  GHSATRN_max;
A68_624  IHSATRN_generator;   /* proc value of non-global proc */
A68_303  NHSATRN;  /* avoid structure result */
A68_624  PHSATRN_generator;   /* proc value of non-global proc */
A68_303  UHSATRN;  /* avoid structure result */
A68_303  VHSATRN_newints;
A68_303  WHSATRN;  /* OPERATORS - trim index */
A68_303  XHSATRN;  /* YIELD */
A68_197 ** YHSATRN_i;
A68_303  ZHSATRN;  /* OPERATORS - trim index */
A68_303  AISATRN;  /* forall yield */
A68_INT  BISATRN;  /* forall loop counter */
A68_INT * CISATRN;  /* YIELD */
A68_197 ** DISATRN;  /* YIELD */
A68_INT  EISATRN;  /* clause result */
A_PROC_ENTRY(add_envint);
 /* line 2610: */
 /* line 2611: */
{ 
(*NL(WWRATRN_envintno))+=1;
 /* line 2612: */
FHSATRN_ints = (&(NL(GXRATRN_newenv)->Ints));
 /* line 2613: */
GHSATRN_max = (*FHSATRN_ints).upb;
 /* line 2614: */
 /* line 2615: */
if ( !(*NL(UWRATRN_envintchanged)) )
{ 
(*NL(UWRATRN_envintchanged)) = A68_TRUE;
 /* line 2616: */
A_CLOSURE( IHSATRN_generator, JHSATRN_generator, KHSATRN_generator );
(( KHSATRN_generator * ) ( IHSATRN_generator.nonlocals )) -> GHSATRN_max = GHSATRN_max;
 /* line 2617: */
A_CALLPROC(IHSATRN_generator,(A68_FALSE, &NHSATRN),(A68_FALSE, &NHSATRN,(IHSATRN_generator).nonlocals));
A_VASSIGN2((*FHSATRN_ints),NHSATRN,A68_197 *) ;
(*FHSATRN_ints) = NHSATRN;
} 
 /* line 2618: */
 /* line 2619: */
if ( ((*NL(WWRATRN_envintno))>GHSATRN_max) )
{ 
A_CLOSURE( PHSATRN_generator, QHSATRN_generator, RHSATRN_generator );
(( RHSATRN_generator * ) ( PHSATRN_generator.nonlocals )) -> GHSATRN_max = GHSATRN_max;
A_CALLPROC(PHSATRN_generator,(A68_FALSE, &UHSATRN),(A68_FALSE, &UHSATRN,(PHSATRN_generator).nonlocals));
VHSATRN_newints = UHSATRN;
 /* line 2620: */
XHSATRN = A_VTRIM(WHSATRN,(VHSATRN_newints),A_VTSCRIPT(&(WHSATRN.upb),(VHSATRN_newints).upb,1,GHSATRN_max)) ;
A_VASSIGN2((*FHSATRN_ints),XHSATRN,A68_197 *);
 /* line 2621: */
AISATRN = A_VTRIM(ZHSATRN,(VHSATRN_newints),A_VTSCRIPT(&(ZHSATRN.upb),(VHSATRN_newints).upb,(GHSATRN_max+1),(VHSATRN_newints).upb)) ;
BISATRN = AISATRN.upb -1;
YHSATRN_i = AISATRN.data;
for (;BISATRN-- >= 0;
(YHSATRN_i++
) )
{
(*YHSATRN_i) = VAAATRN_nilintdec;
}
 /* line 2622: */
 /* line 2623: */
(*FHSATRN_ints) = VHSATRN_newints;
} 
 /* line 2624: */
CISATRN = (&A_VINDEX(NL(FYRATRN_newenvintnos),Oldintno)) ;
(*CISATRN) = (*NL(WWRATRN_envintno));
 /* line 2625: */
DISATRN = (&A_VINDEX((*FHSATRN_ints),(*NL(WWRATRN_envintno)))) ;
(*DISATRN) = Idec;
 /* line 2626: */
 /* line 2627: */
EISATRN = (*NL(WWRATRN_envintno));
} 
A_PROC_EXIT(add_envint);
return( EISATRN );
} 
#undef NL

A_STATIC A68_INT  IISATRN_add_envconst(A68_INT  Oldconstno, A68_221 * Cdec, void *NonLocals)
#define NL(x) (((JISATRN_add_envconst *)NonLocals)->x)
{ 
A68_305 * KISATRN_consts;
A68_INT  LISATRN_max;
A68_626  NISATRN_generator;   /* proc value of non-global proc */
A68_305  SISATRN;  /* avoid structure result */
A68_626  UISATRN_generator;   /* proc value of non-global proc */
A68_305  ZISATRN;  /* avoid structure result */
A68_305  AJSATRN_newconsts;
A68_305  BJSATRN;  /* OPERATORS - trim index */
A68_305  CJSATRN;  /* YIELD */
A68_221 ** DJSATRN_i;
A68_305  EJSATRN;  /* OPERATORS - trim index */
A68_305  FJSATRN;  /* forall yield */
A68_INT  GJSATRN;  /* forall loop counter */
A68_INT * HJSATRN;  /* YIELD */
A68_221 ** IJSATRN;  /* YIELD */
A68_INT  JJSATRN;  /* clause result */
A_PROC_ENTRY(add_envconst);
 /* line 2630: */
 /* line 2631: */
{ 
(*NL(ZWRATRN_envconstno))+=1;
 /* line 2632: */
KISATRN_consts = (&(NL(GXRATRN_newenv)->Consts));
 /* line 2633: */
LISATRN_max = (*KISATRN_consts).upb;
 /* line 2634: */
 /* line 2635: */
if ( !(*NL(XWRATRN_envconstchanged)) )
{ 
(*NL(XWRATRN_envconstchanged)) = A68_TRUE;
 /* line 2636: */
A_CLOSURE( NISATRN_generator, OISATRN_generator, PISATRN_generator );
(( PISATRN_generator * ) ( NISATRN_generator.nonlocals )) -> LISATRN_max = LISATRN_max;
 /* line 2637: */
A_CALLPROC(NISATRN_generator,(A68_FALSE, &SISATRN),(A68_FALSE, &SISATRN,(NISATRN_generator).nonlocals));
A_VASSIGN2((*KISATRN_consts),SISATRN,A68_221 *) ;
(*KISATRN_consts) = SISATRN;
} 
 /* line 2638: */
 /* line 2639: */
if ( ((*NL(ZWRATRN_envconstno))>LISATRN_max) )
{ 
A_CLOSURE( UISATRN_generator, VISATRN_generator, WISATRN_generator );
(( WISATRN_generator * ) ( UISATRN_generator.nonlocals )) -> LISATRN_max = LISATRN_max;
A_CALLPROC(UISATRN_generator,(A68_FALSE, &ZISATRN),(A68_FALSE, &ZISATRN,(UISATRN_generator).nonlocals));
AJSATRN_newconsts = ZISATRN;
 /* line 2640: */
CJSATRN = A_VTRIM(BJSATRN,(AJSATRN_newconsts),A_VTSCRIPT(&(BJSATRN.upb),(AJSATRN_newconsts).upb,1,LISATRN_max)) ;
A_VASSIGN2((*KISATRN_consts),CJSATRN,A68_221 *);
 /* line 2641: */
FJSATRN = A_VTRIM(EJSATRN,(AJSATRN_newconsts),A_VTSCRIPT(&(EJSATRN.upb),(AJSATRN_newconsts).upb,(LISATRN_max+1),(AJSATRN_newconsts).upb)) ;
GJSATRN = FJSATRN.upb -1;
DJSATRN_i = FJSATRN.data;
for (;GJSATRN-- >= 0;
(DJSATRN_i++
) )
{
(*DJSATRN_i) = XAAATRN_nilconstdec;
}
 /* line 2642: */
 /* line 2643: */
(*KISATRN_consts) = AJSATRN_newconsts;
} 
 /* line 2644: */
HJSATRN = (&A_VINDEX(NL(PYRATRN_newenvconstnos),Oldconstno)) ;
(*HJSATRN) = (*NL(ZWRATRN_envconstno));
 /* line 2645: */
IJSATRN = (&A_VINDEX((*KISATRN_consts),(*NL(ZWRATRN_envconstno)))) ;
(*IJSATRN) = Cdec;
 /* line 2646: */
 /* line 2647: */
JJSATRN = (*NL(ZWRATRN_envconstno));
} 
A_PROC_EXIT(add_envconst);
return( JJSATRN );
} 
#undef NL

A_STATIC A68_VOID  MJSATRN_resetscope(A68_INT  Depth, void *NonLocals)
#define NL(x) (((NJSATRN_resetscope *)NonLocals)->x)
{ 
A68_577 ** OJSATRN_attrs;
A68_INT  PJSATRN;  /* forall loop counter */
A68_577 ** QJSATRN_aptr;
A68_577 ** RJSATRN_types;
A68_INT  SJSATRN;  /* forall loop counter */
A68_577 ** TJSATRN_tptr;
A68_577 ** UJSATRN_fns;
A68_INT  VJSATRN;  /* forall loop counter */
A68_577 ** WJSATRN_fptr;
A_PROC_ENTRY(resetscope);
 /* line 2651: */
 /* line 2654: */
{ 
 /* line 2655: */
PJSATRN = NL(WXRATRN_newenvattrnos).upb -1;
OJSATRN_attrs = NL(WXRATRN_newenvattrnos).data;
for (;PJSATRN-- >= 0;
(OJSATRN_attrs++
) )
{
QJSATRN_aptr = OJSATRN_attrs;
 /* line 2656: */
for ( ;; )
{ 
 /* line 2657: */
if ( !(((*QJSATRN_aptr)!=UWQATRN_niluselist)) ) break;
 /* line 2658: */
if ( ((*(&((*QJSATRN_aptr)->Depth)))==Depth) )
{ 
 /* line 2659: */
(*QJSATRN_aptr) = (*(&((*QJSATRN_aptr)->Rest)));
} 
else
{ 
 /* line 2660: */
 /* line 2661: */
QJSATRN_aptr = (&((*QJSATRN_aptr)->Rest));
} 
}
 /* line 2662: */
}
 /* line 2663: */
 /* line 2664: */
SJSATRN = NL(XXRATRN_newenvtypenos).upb -1;
RJSATRN_types = NL(XXRATRN_newenvtypenos).data;
for (;SJSATRN-- >= 0;
(RJSATRN_types++
) )
{
TJSATRN_tptr = RJSATRN_types;
 /* line 2665: */
for ( ;; )
{ 
 /* line 2666: */
if ( !(((*TJSATRN_tptr)!=UWQATRN_niluselist)) ) break;
 /* line 2667: */
if ( ((*(&((*TJSATRN_tptr)->Depth)))==Depth) )
{ 
 /* line 2668: */
(*TJSATRN_tptr) = (*(&((*TJSATRN_tptr)->Rest)));
} 
else
{ 
 /* line 2669: */
 /* line 2670: */
TJSATRN_tptr = (&((*TJSATRN_tptr)->Rest));
} 
}
 /* line 2671: */
}
 /* line 2672: */
 /* line 2673: */
VJSATRN = NL(YXRATRN_newenvfnnos).upb -1;
UJSATRN_fns = NL(YXRATRN_newenvfnnos).data;
for (;VJSATRN-- >= 0;
(UJSATRN_fns++
) )
{
WJSATRN_fptr = UJSATRN_fns;
 /* line 2674: */
for ( ;; )
{ 
 /* line 2675: */
if ( !(((*WJSATRN_fptr)!=UWQATRN_niluselist)) ) break;
 /* line 2676: */
if ( ((*(&((*WJSATRN_fptr)->Depth)))==Depth) )
{ 
 /* line 2677: */
(*WJSATRN_fptr) = (*(&((*WJSATRN_fptr)->Rest)));
} 
else
{ 
 /* line 2678: */
 /* line 2679: */
WJSATRN_fptr = (&((*WJSATRN_fptr)->Rest));
} 
}
 /* line 2680: */
}
 /* line 2681: */
} 
A_PROC_EXIT(resetscope);
return;
} 
#undef NL

A_STATIC A68_VOID  YJSATRN_increase_decstable(A68_610 * Table)
{ 
A68_INT  ZJSATRN_max;
A68_611  BKSATRN_generator;   /* proc value of non-global proc */
A68_610  GKSATRN;  /* avoid structure result */
A68_610  HKSATRN_newdecls;
A68_610  IKSATRN;  /* OPERATORS - trim index */
A68_610  JKSATRN;  /* YIELD */
A68_578 ** KKSATRN_elem;
A68_610  LKSATRN;  /* OPERATORS - trim index */
A68_610  MKSATRN;  /* forall yield */
A68_INT  NKSATRN;  /* forall loop counter */
A_PROC_ENTRY(increase_decstable);
 /* line 2684: */
 /* line 2685: */
{ 
ZJSATRN_max = (*Table).upb;
 /* line 2686: */
A_CLOSURE( BKSATRN_generator, CKSATRN_generator, DKSATRN_generator );
(( DKSATRN_generator * ) ( BKSATRN_generator.nonlocals )) -> ZJSATRN_max = ZJSATRN_max;
A_CALLPROC(BKSATRN_generator,(A68_FALSE, &GKSATRN),(A68_FALSE, &GKSATRN,(BKSATRN_generator).nonlocals));
HKSATRN_newdecls = GKSATRN;
 /* line 2687: */
JKSATRN = A_VTRIM(IKSATRN,(HKSATRN_newdecls),A_VTSCRIPT(&(IKSATRN.upb),(HKSATRN_newdecls).upb,1,ZJSATRN_max)) ;
A_VASSIGN2((*Table),JKSATRN,A68_578 *);
 /* line 2688: */
(*Table) = HKSATRN_newdecls;
 /* line 2689: */
MKSATRN = A_VTRIM(LKSATRN,((*Table)),A_VTSCRIPT(&(LKSATRN.upb),((*Table)).upb,(ZJSATRN_max+1),((*Table)).upb)) ;
NKSATRN = MKSATRN.upb -1;
KKSATRN_elem = MKSATRN.data;
for (;NKSATRN-- >= 0;
(KKSATRN_elem++
) )
{
(*KKSATRN_elem) = VWQATRN_nildecslist;
}
 /* line 2690: */
} 
A_PROC_EXIT(increase_decstable);
return;
} 
#undef NL
 /* line 2693: */

A_STATIC A68_VOID  RKSATRN_merge_env(A68_628  Find_no, A68_INT  Upb, A68_301 * Newenv, A68_582  *ReturnedValue)
{ 
A68_630  TKSATRN_generator;   /* proc value of non-global proc */
A68_582  YKSATRN;  /* avoid structure result */
A68_582  ZKSATRN_envnos;
A68_INT  ALSATRN_i;
A68_INT  BLSATRN;  /* to part of loop */
A68_INT  CLSATRN_envno;
A68_577 * DLSATRN;  /* clause result */
A68_577  ELSATRN;  /* collateral clause result */
A68_577 * FLSATRN;  /* YIELD */
A68_577 ** GLSATRN;  /* YIELD */
A68_582  HLSATRN;  /* clause result */
A_PROC_ENTRY(merge_env);
 /* line 2694: */
 /* line 2695: */
{ 
A_CLOSURE( TKSATRN_generator, UKSATRN_generator, VKSATRN_generator );
(( VKSATRN_generator * ) ( TKSATRN_generator.nonlocals )) -> Upb = Upb;
A_CALLPROC(TKSATRN_generator,(A68_FALSE, &YKSATRN),(A68_FALSE, &YKSATRN,(TKSATRN_generator).nonlocals));
ZKSATRN_envnos = YKSATRN;
 /* line 2696: */
 /* line 2697: */
BLSATRN = ZKSATRN_envnos.upb;
for ( ALSATRN_i = 1;
ALSATRN_i <= BLSATRN;
ALSATRN_i += 1 )
{ 
CLSATRN_envno = A_CALLPROC(Find_no,(ALSATRN_i, Newenv),(ALSATRN_i, Newenv,(Find_no).nonlocals));
 /* line 2698: */
 /* line 2699: */
 /* line 2700: */
if ( (CLSATRN_envno==0) )
{ 
DLSATRN = UWQATRN_niluselist;
} 
else
{ 
ELSATRN.Newdecno = CLSATRN_envno;
ELSATRN.Depth = 0;
ELSATRN.Declared = A68_TRUE;
 /* line 2701: */
ELSATRN.Rest = UWQATRN_niluselist;
 /* line 2702: */
FLSATRN = A_HEAP(A68_577 ) ;
(*FLSATRN) = ELSATRN ;
DLSATRN = FLSATRN;
} 
GLSATRN = (&A_VINDEX(ZKSATRN_envnos,ALSATRN_i)) ;
(*GLSATRN) = DLSATRN;
}
 /* line 2703: */
 /* line 2704: */
HLSATRN = ZKSATRN_envnos;
} 
A_PROC_EXIT(merge_env);
*ReturnedValue = (HLSATRN);
return;
} 
#undef NL

A_STATIC A68_INT  OLSATRN_add_envfn(A68_INT  Oldfnno, A68_INT  Depth, A68_298 * Fn, A68_BOOL  Declared, A68_BOOL  Changed, void *NonLocals)
#define NL(x) (((PLSATRN_add_envfn *)NonLocals)->x)
{ 
A68_306 * QLSATRN_fns;
A68_INT  RLSATRN_max;
A68_BOOL  SLSATRN;  /* optbool result */
A68_BOOL  TLSATRN;  /* optbool result */
A68_632  VLSATRN_generator;   /* proc value of non-global proc */
A68_306  AMSATRN;  /* avoid structure result */
A68_632  CMSATRN_generator;   /* proc value of non-global proc */
A68_306  HMSATRN;  /* avoid structure result */
A68_306  IMSATRN_newfns;
A68_306  JMSATRN;  /* OPERATORS - trim index */
A68_306  KMSATRN;  /* YIELD */
A68_298 ** LMSATRN_f;
A68_306  MMSATRN;  /* OPERATORS - trim index */
A68_306  NMSATRN;  /* forall yield */
A68_INT  OMSATRN;  /* forall loop counter */
A68_613  QMSATRN_generator;   /* proc value of non-global proc */
A68_612  VMSATRN;  /* avoid structure result */
A68_612  WMSATRN_newmacpar;
A68_612  XMSATRN;  /* OPERATORS - trim index */
A68_612  YMSATRN;  /* YIELD */
A68_577  ZMSATRN;  /* collateral clause result */
A68_577 * ANSATRN;  /* YIELD */
A68_577 ** BNSATRN;  /* YIELD */
A68_298 ** CNSATRN;  /* YIELD */
A68_INT  DNSATRN;  /* clause result */
A_PROC_ENTRY(add_envfn);
 /* line 2709: */
 /* line 2710: */
{ 
(*NL(FXRATRN_envfnno))+=1;
 /* line 2711: */
QLSATRN_fns = (&(NL(GXRATRN_newenv)->Fns));
 /* line 2712: */
RLSATRN_max = (*QLSATRN_fns).upb;
 /* line 2713: */
SLSATRN = !(*NL(DXRATRN_envfnchanged));
if ( SLSATRN )
{TLSATRN = ((*NL(FXRATRN_envfnno))!=Oldfnno);
if ( ! TLSATRN )
{TLSATRN = Changed;
}
 /* line 2714: */
SLSATRN = TLSATRN;
}
if ( SLSATRN )
{ 
(*NL(DXRATRN_envfnchanged)) = A68_TRUE;
 /* line 2715: */
A_CLOSURE( VLSATRN_generator, WLSATRN_generator, XLSATRN_generator );
(( XLSATRN_generator * ) ( VLSATRN_generator.nonlocals )) -> RLSATRN_max = RLSATRN_max;
 /* line 2716: */
A_CALLPROC(VLSATRN_generator,(A68_FALSE, &AMSATRN),(A68_FALSE, &AMSATRN,(VLSATRN_generator).nonlocals));
A_VASSIGN2((*QLSATRN_fns),AMSATRN,A68_298 *) ;
(*QLSATRN_fns) = AMSATRN;
} 
 /* line 2717: */
 /* line 2718: */
if ( ((*NL(FXRATRN_envfnno))>RLSATRN_max) )
{ 
A_CLOSURE( CMSATRN_generator, DMSATRN_generator, EMSATRN_generator );
(( EMSATRN_generator * ) ( CMSATRN_generator.nonlocals )) -> RLSATRN_max = RLSATRN_max;
A_CALLPROC(CMSATRN_generator,(A68_FALSE, &HMSATRN),(A68_FALSE, &HMSATRN,(CMSATRN_generator).nonlocals));
IMSATRN_newfns = HMSATRN;
 /* line 2719: */
KMSATRN = A_VTRIM(JMSATRN,(IMSATRN_newfns),A_VTSCRIPT(&(JMSATRN.upb),(IMSATRN_newfns).upb,1,RLSATRN_max)) ;
A_VASSIGN2((*QLSATRN_fns),KMSATRN,A68_298 *);
 /* line 2720: */
NMSATRN = A_VTRIM(MMSATRN,(IMSATRN_newfns),A_VTSCRIPT(&(MMSATRN.upb),(IMSATRN_newfns).upb,(RLSATRN_max+1),(IMSATRN_newfns).upb)) ;
OMSATRN = NMSATRN.upb -1;
LMSATRN_f = NMSATRN.data;
for (;OMSATRN-- >= 0;
(LMSATRN_f++
) )
{
(*LMSATRN_f) = YAAATRN_nilfndec;
}
 /* line 2721: */
(*QLSATRN_fns) = IMSATRN_newfns;
 /* line 2722: */
YJSATRN_increase_decstable(NL(VVRATRN_macfndecls));
 /* line 2723: */
A_CLOSURE( QMSATRN_generator, RMSATRN_generator, SMSATRN_generator );
(( SMSATRN_generator * ) ( QMSATRN_generator.nonlocals )) -> RLSATRN_max = RLSATRN_max;
A_CALLPROC(QMSATRN_generator,(A68_FALSE, &VMSATRN),(A68_FALSE, &VMSATRN,(QMSATRN_generator).nonlocals));
WMSATRN_newmacpar = VMSATRN;
 /* line 2724: */
YMSATRN = A_VTRIM(XMSATRN,(WMSATRN_newmacpar),A_VTSCRIPT(&(XMSATRN.upb),(WMSATRN_newmacpar).upb,1,RLSATRN_max)) ;
A_VASSIGN2((*NL(FWRATRN_macpartable)),YMSATRN,A68_264 );
 /* line 2725: */
 /* line 2726: */
(*NL(FWRATRN_macpartable)) = WMSATRN_newmacpar;
} 
 /* line 2727: */
 /* line 2728: */
if ( (Oldfnno>0) )
{ 
 /* line 2729: */
ZMSATRN.Newdecno = (*NL(FXRATRN_envfnno));
ZMSATRN.Depth = Depth;
ZMSATRN.Declared = Declared;
 /* line 2730: */
ZMSATRN.Rest = (*(&A_VINDEX(NL(YXRATRN_newenvfnnos),Oldfnno)));
ANSATRN = A_HEAP(A68_577 ) ;
(*ANSATRN) = ZMSATRN ;
BNSATRN = (&A_VINDEX(NL(YXRATRN_newenvfnnos),Oldfnno)) ;
(*BNSATRN) = ANSATRN;
} 
 /* line 2731: */
if ( (*NL(DXRATRN_envfnchanged)) )
{ 
CNSATRN = (&A_VINDEX((*QLSATRN_fns),(*NL(FXRATRN_envfnno)))) ;
(*CNSATRN) = Fn;
} 
 /* line 2732: */
 /* line 2733: */
DNSATRN = (*NL(FXRATRN_envfnno));
} 
A_PROC_EXIT(add_envfn);
return( DNSATRN );
} 
#undef NL

A_STATIC A68_VOID  HNSATRN_merge_envfns(A68_301 * Newenv, A68_301 * Macenv, A68_582  *ReturnedValue, void *NonLocals)
#define NL(x) (((INSATRN_merge_envfns *)NonLocals)->x)
{ 
A68_628  MNSATRN_find_no;   /* proc value of non-global proc */
A68_582  UNSATRN;  /* clause result */
A68_582  VNSATRN;  /* avoid structure result */
A_PROC_ENTRY(merge_envfns);
 /* line 2737: */
 /* line 2740: */
{ 
A_CLOSURE( MNSATRN_find_no, NNSATRN_find_no, ONSATRN_find_no );
(( ONSATRN_find_no * ) ( MNSATRN_find_no.nonlocals )) -> Macenv = Macenv;
(( ONSATRN_find_no * ) ( MNSATRN_find_no.nonlocals )) -> FXRATRN_envfnno = NL(FXRATRN_envfnno);
 /* line 2747: */
 /* line 2748: */
RKSATRN_merge_env( MNSATRN_find_no, (*(&(Macenv->Fns))).upb, Newenv, &VNSATRN );
UNSATRN = VNSATRN;
} 
A_PROC_EXIT(merge_envfns);
*ReturnedValue = (UNSATRN);
return;
} 
#undef NL

A_STATIC A68_INT  AOSATRN_add_envtype(A68_INT  Oldtypeno, A68_INT  Depth, A68_385  Tc, void *NonLocals)
#define NL(x) (((BOSATRN_add_envtype *)NonLocals)->x)
{ 
A68_215 * COSATRN_tdec;
A68_304 * DOSATRN_types;
A68_INT  EOSATRN_max;
A68_BOOL  FOSATRN;  /* optbool result */
A68_BOOL  GOSATRN;  /* optbool result */
A68_635  IOSATRN_generator;   /* proc value of non-global proc */
A68_304  NOSATRN;  /* avoid structure result */
A68_635  POSATRN_generator;   /* proc value of non-global proc */
A68_304  UOSATRN;  /* avoid structure result */
A68_304  VOSATRN_newtypes;
A68_304  WOSATRN;  /* OPERATORS - trim index */
A68_304  XOSATRN;  /* YIELD */
A68_215 ** YOSATRN_t;
A68_304  ZOSATRN;  /* OPERATORS - trim index */
A68_304  APSATRN;  /* forall yield */
A68_INT  BPSATRN;  /* forall loop counter */
A68_BOOL  CPSATRN;  /* optbool result */
A68_INT  DPSATRN;  /* clause result */
A68_INT  EPSATRN_tdepth;
A68_577  FPSATRN;  /* collateral clause result */
A68_577 * GPSATRN;  /* YIELD */
A68_577 ** HPSATRN;  /* YIELD */
A68_215 ** IPSATRN;  /* YIELD */
A68_INT  JPSATRN;  /* clause result */
A_PROC_ENTRY(add_envtype);
 /* line 2753: */
 /* line 2754: */
{ 
COSATRN_tdec = Tc.T;
 /* line 2755: */
(*NL(CXRATRN_envtypeno))+=1;
 /* line 2756: */
DOSATRN_types = (&(NL(GXRATRN_newenv)->Types));
 /* line 2757: */
EOSATRN_max = (*DOSATRN_types).upb;
 /* line 2758: */
FOSATRN = !(*NL(AXRATRN_envtypechanged));
if ( FOSATRN )
{GOSATRN = ((*NL(CXRATRN_envtypeno))!=Oldtypeno);
if ( ! GOSATRN )
{GOSATRN = Tc.C;
}
 /* line 2759: */
FOSATRN = GOSATRN;
}
if ( FOSATRN )
{ 
(*NL(AXRATRN_envtypechanged)) = A68_TRUE;
 /* line 2760: */
A_CLOSURE( IOSATRN_generator, JOSATRN_generator, KOSATRN_generator );
(( KOSATRN_generator * ) ( IOSATRN_generator.nonlocals )) -> EOSATRN_max = EOSATRN_max;
 /* line 2761: */
A_CALLPROC(IOSATRN_generator,(A68_FALSE, &NOSATRN),(A68_FALSE, &NOSATRN,(IOSATRN_generator).nonlocals));
A_VASSIGN2((*DOSATRN_types),NOSATRN,A68_215 *) ;
(*DOSATRN_types) = NOSATRN;
} 
 /* line 2762: */
 /* line 2763: */
if ( ((*NL(CXRATRN_envtypeno))>EOSATRN_max) )
{ 
A_CLOSURE( POSATRN_generator, QOSATRN_generator, ROSATRN_generator );
(( ROSATRN_generator * ) ( POSATRN_generator.nonlocals )) -> EOSATRN_max = EOSATRN_max;
A_CALLPROC(POSATRN_generator,(A68_FALSE, &UOSATRN),(A68_FALSE, &UOSATRN,(POSATRN_generator).nonlocals));
VOSATRN_newtypes = UOSATRN;
 /* line 2764: */
XOSATRN = A_VTRIM(WOSATRN,(VOSATRN_newtypes),A_VTSCRIPT(&(WOSATRN.upb),(VOSATRN_newtypes).upb,1,EOSATRN_max)) ;
A_VASSIGN2((*DOSATRN_types),XOSATRN,A68_215 *);
 /* line 2765: */
APSATRN = A_VTRIM(ZOSATRN,(VOSATRN_newtypes),A_VTSCRIPT(&(ZOSATRN.upb),(VOSATRN_newtypes).upb,(EOSATRN_max+1),(VOSATRN_newtypes).upb)) ;
BPSATRN = APSATRN.upb -1;
YOSATRN_t = APSATRN.data;
for (;BPSATRN-- >= 0;
(YOSATRN_t++
) )
{
(*YOSATRN_t) = WAAATRN_niltypedec;
}
 /* line 2766: */
(*DOSATRN_types) = VOSATRN_newtypes;
 /* line 2767: */
 /* line 2768: */
YJSATRN_increase_decstable(NL(LVRATRN_mactypedecls));
} 
 /* line 2769: */
CPSATRN = (COSATRN_tdec!=WAAATRN_niltypedec);
if ( CPSATRN )
{ /* line 2770: */
CPSATRN = ((*(&(COSATRN_tdec->Sort)))==PKAATRN_localdec);
}
 /* line 2771: */
if ( CPSATRN )
{ 
 /* line 2772: */
DPSATRN = Depth;
} 
else
{ 
DPSATRN = 0;
} 
EPSATRN_tdepth = DPSATRN;
 /* line 2773: */
 /* line 2774: */
if ( (Oldtypeno>0) )
{ 
 /* line 2775: */
FPSATRN.Newdecno = (*NL(CXRATRN_envtypeno));
FPSATRN.Depth = EPSATRN_tdepth;
FPSATRN.Declared = A68_TRUE;
 /* line 2776: */
FPSATRN.Rest = (*(&A_VINDEX(NL(XXRATRN_newenvtypenos),Oldtypeno)));
GPSATRN = A_HEAP(A68_577 ) ;
(*GPSATRN) = FPSATRN ;
HPSATRN = (&A_VINDEX(NL(XXRATRN_newenvtypenos),Oldtypeno)) ;
(*HPSATRN) = GPSATRN;
} 
 /* line 2777: */
if ( (*NL(AXRATRN_envtypechanged)) )
{ 
IPSATRN = (&A_VINDEX((*DOSATRN_types),(*NL(CXRATRN_envtypeno)))) ;
(*IPSATRN) = COSATRN_tdec;
} 
 /* line 2778: */
 /* line 2779: */
JPSATRN = (*NL(CXRATRN_envtypeno));
} 
A_PROC_EXIT(add_envtype);
return( JPSATRN );
} 
#undef NL

A_STATIC A68_VOID  NPSATRN_merge_envtypes(A68_301 * Newenv, A68_301 * Macenv, A68_582  *ReturnedValue, void *NonLocals)
#define NL(x) (((OPSATRN_merge_envtypes *)NonLocals)->x)
{ 
A68_628  SPSATRN_find_no;   /* proc value of non-global proc */
A68_582  AQSATRN;  /* clause result */
A68_582  BQSATRN;  /* avoid structure result */
A_PROC_ENTRY(merge_envtypes);
 /* line 2782: */
 /* line 2785: */
{ 
A_CLOSURE( SPSATRN_find_no, TPSATRN_find_no, UPSATRN_find_no );
(( UPSATRN_find_no * ) ( SPSATRN_find_no.nonlocals )) -> Macenv = Macenv;
(( UPSATRN_find_no * ) ( SPSATRN_find_no.nonlocals )) -> CXRATRN_envtypeno = NL(CXRATRN_envtypeno);
 /* line 2792: */
 /* line 2793: */
RKSATRN_merge_env( SPSATRN_find_no, (*(&(Macenv->Types))).upb, Newenv, &BQSATRN );
AQSATRN = BQSATRN;
} 
A_PROC_EXIT(merge_envtypes);
*ReturnedValue = (AQSATRN);
return;
} 
#undef NL

A_STATIC A68_INT  GQSATRN_add_envattr(A68_INT  Oldattrno, A68_INT  Depth, A68_374  Ac, void *NonLocals)
#define NL(x) (((HQSATRN_add_envattr *)NonLocals)->x)
{ 
A68_181 * IQSATRN_adec;
A68_302 * JQSATRN_attrs;
A68_INT  KQSATRN_max;
A68_BOOL  LQSATRN;  /* optbool result */
A68_BOOL  MQSATRN;  /* optbool result */
A68_637  OQSATRN_generator;   /* proc value of non-global proc */
A68_302  TQSATRN;  /* avoid structure result */
A68_637  VQSATRN_generator;   /* proc value of non-global proc */
A68_302  ARSATRN;  /* avoid structure result */
A68_302  BRSATRN_newattrs;
A68_302  CRSATRN;  /* OPERATORS - trim index */
A68_302  DRSATRN;  /* YIELD */
A68_181 ** ERSATRN_a;
A68_302  FRSATRN;  /* OPERATORS - trim index */
A68_302  GRSATRN;  /* forall yield */
A68_INT  HRSATRN;  /* forall loop counter */
A68_BOOL  IRSATRN;  /* optbool result */
A68_INT  JRSATRN;  /* clause result */
A68_INT  KRSATRN_adepth;
A68_577  LRSATRN;  /* collateral clause result */
A68_577 * MRSATRN;  /* YIELD */
A68_577 ** NRSATRN;  /* YIELD */
A68_181 ** ORSATRN;  /* YIELD */
A68_INT  PRSATRN;  /* clause result */
A_PROC_ENTRY(add_envattr);
 /* line 2797: */
 /* line 2798: */
{ 
IQSATRN_adec = Ac.A;
 /* line 2799: */
(*NL(TWRATRN_envattrno))+=1;
 /* line 2800: */
JQSATRN_attrs = (&(NL(GXRATRN_newenv)->Attrs));
 /* line 2801: */
KQSATRN_max = (*JQSATRN_attrs).upb;
 /* line 2802: */
LQSATRN = !(*NL(RWRATRN_envattrchanged));
if ( LQSATRN )
{MQSATRN = ((*NL(TWRATRN_envattrno))!=Oldattrno);
if ( ! MQSATRN )
{MQSATRN = Ac.C;
}
 /* line 2803: */
LQSATRN = MQSATRN;
}
if ( LQSATRN )
{ 
(*NL(RWRATRN_envattrchanged)) = A68_TRUE;
 /* line 2804: */
A_CLOSURE( OQSATRN_generator, PQSATRN_generator, QQSATRN_generator );
(( QQSATRN_generator * ) ( OQSATRN_generator.nonlocals )) -> KQSATRN_max = KQSATRN_max;
 /* line 2805: */
A_CALLPROC(OQSATRN_generator,(A68_FALSE, &TQSATRN),(A68_FALSE, &TQSATRN,(OQSATRN_generator).nonlocals));
A_VASSIGN2((*JQSATRN_attrs),TQSATRN,A68_181 *) ;
(*JQSATRN_attrs) = TQSATRN;
} 
 /* line 2806: */
 /* line 2807: */
if ( ((*NL(TWRATRN_envattrno))>KQSATRN_max) )
{ 
A_CLOSURE( VQSATRN_generator, WQSATRN_generator, XQSATRN_generator );
(( XQSATRN_generator * ) ( VQSATRN_generator.nonlocals )) -> KQSATRN_max = KQSATRN_max;
A_CALLPROC(VQSATRN_generator,(A68_FALSE, &ARSATRN),(A68_FALSE, &ARSATRN,(VQSATRN_generator).nonlocals));
BRSATRN_newattrs = ARSATRN;
 /* line 2808: */
DRSATRN = A_VTRIM(CRSATRN,(BRSATRN_newattrs),A_VTSCRIPT(&(CRSATRN.upb),(BRSATRN_newattrs).upb,1,KQSATRN_max)) ;
A_VASSIGN2((*JQSATRN_attrs),DRSATRN,A68_181 *);
 /* line 2809: */
GRSATRN = A_VTRIM(FRSATRN,(BRSATRN_newattrs),A_VTSCRIPT(&(FRSATRN.upb),(BRSATRN_newattrs).upb,(KQSATRN_max+1),(BRSATRN_newattrs).upb)) ;
HRSATRN = GRSATRN.upb -1;
ERSATRN_a = GRSATRN.data;
for (;HRSATRN-- >= 0;
(ERSATRN_a++
) )
{
(*ERSATRN_a) = UAAATRN_nilattrdec;
}
 /* line 2810: */
(*JQSATRN_attrs) = BRSATRN_newattrs;
 /* line 2811: */
 /* line 2812: */
YJSATRN_increase_decstable(NL(BVRATRN_macattrdecls));
} 
 /* line 2813: */
IRSATRN = (IQSATRN_adec!=UAAATRN_nilattrdec);
if ( IRSATRN )
{ /* line 2814: */
IRSATRN = ((*(&(IQSATRN_adec->Sort)))==PKAATRN_localdec);
}
 /* line 2815: */
if ( IRSATRN )
{ 
 /* line 2816: */
JRSATRN = Depth;
} 
else
{ 
JRSATRN = 0;
} 
KRSATRN_adepth = JRSATRN;
 /* line 2817: */
 /* line 2818: */
if ( (Oldattrno>0) )
{ 
 /* line 2819: */
LRSATRN.Newdecno = (*NL(TWRATRN_envattrno));
LRSATRN.Depth = KRSATRN_adepth;
LRSATRN.Declared = A68_TRUE;
 /* line 2820: */
LRSATRN.Rest = (*(&A_VINDEX(NL(WXRATRN_newenvattrnos),Oldattrno)));
MRSATRN = A_HEAP(A68_577 ) ;
(*MRSATRN) = LRSATRN ;
NRSATRN = (&A_VINDEX(NL(WXRATRN_newenvattrnos),Oldattrno)) ;
(*NRSATRN) = MRSATRN;
} 
 /* line 2821: */
if ( (*NL(RWRATRN_envattrchanged)) )
{ 
ORSATRN = (&A_VINDEX((*JQSATRN_attrs),(*NL(TWRATRN_envattrno)))) ;
(*ORSATRN) = IQSATRN_adec;
} 
 /* line 2822: */
 /* line 2823: */
PRSATRN = (*NL(TWRATRN_envattrno));
} 
A_PROC_EXIT(add_envattr);
return( PRSATRN );
} 
#undef NL

A_STATIC A68_VOID  TRSATRN_merge_envattrs(A68_301 * Newenv, A68_301 * Macenv, A68_582  *ReturnedValue, void *NonLocals)
#define NL(x) (((URSATRN_merge_envattrs *)NonLocals)->x)
{ 
A68_628  YRSATRN_find_no;   /* proc value of non-global proc */
A68_582  GSSATRN;  /* clause result */
A68_582  HSSATRN;  /* avoid structure result */
A_PROC_ENTRY(merge_envattrs);
 /* line 2826: */
 /* line 2829: */
{ 
A_CLOSURE( YRSATRN_find_no, ZRSATRN_find_no, ASSATRN_find_no );
(( ASSATRN_find_no * ) ( YRSATRN_find_no.nonlocals )) -> Macenv = Macenv;
(( ASSATRN_find_no * ) ( YRSATRN_find_no.nonlocals )) -> TWRATRN_envattrno = NL(TWRATRN_envattrno);
 /* line 2836: */
 /* line 2837: */
RKSATRN_merge_env( YRSATRN_find_no, (*(&(Macenv->Attrs))).upb, Newenv, &HSSATRN );
GSSATRN = HSSATRN;
} 
A_PROC_EXIT(merge_envattrs);
*ReturnedValue = (GSSATRN);
return;
} 
#undef NL

A_STATIC A68_638  KSSATRN_translate_mactypeno(A68_INT  Mactypeno, void *NonLocals)
#define NL(x) (((LSSATRN_translate_mactypeno *)NonLocals)->x)
{ 
A68_304  MSSATRN;  /* OPERATORS - simple index */
A68_215 * NSSATRN_tdec;
A68_INT  OSSATRN_oldtypeno;
A68_638  PSSATRN;  /* collateral clause result */
A68_304  QSSATRN;  /* OPERATORS - trim index */
A68_304  RSSATRN;  /* OPERATORS - trim index */
A68_638  SSSATRN;  /* clause result */
A68_638  TSSATRN;  /* collateral clause result */
A68_638  WSSATRN;  /* collateral clause result */
A_PROC_ENTRY(translate_mactypeno);
 /* line 2847: */
 /* line 2852: */
{ 
MSSATRN = (*(&((*NL(UXRATRN_paramenv))->Types))) ;
NSSATRN_tdec = (*(&A_VINDEX(MSSATRN,Mactypeno)));
 /* line 2853: */
 /* line 2854: */
if ( ((*(&(NSSATRN_tdec->Sort)))==OKAATRN_outerdec) )
{ 
OSSATRN_oldtypeno = VSMATRN_findnewtypeno((*(&(NSSATRN_tdec->Usage))), (*(&(NL(TXRATRN_oldenv)->Types))));
 /* line 2855: */
 /* line 2856: */
if ( (OSSATRN_oldtypeno==0) )
{ 
PSSATRN.data[0] = 0;
 /* line 2857: */
QSSATRN = (*(&(NL(GXRATRN_newenv)->Types))) ;
PSSATRN.data[1] = VSMATRN_findnewtypeno((*(&(NSSATRN_tdec->Usage))), A_VTRIM(RSSATRN,(QSSATRN),A_VTSCRIPT(&(RSSATRN.upb),(QSSATRN).upb,1,(*NL(CXRATRN_envtypeno)))));
SSSATRN = PSSATRN;
} 
else
{ 
TSSATRN.data[0] = OSSATRN_oldtypeno;
 /* line 2858: */
 /* line 2859: */
TSSATRN.data[1] = WZRATRN_translate_envno(OSSATRN_oldtypeno, NL(XXRATRN_newenvtypenos));
SSSATRN = TSSATRN;
} 
} 
else
{ 
NKDAOST_sysfault(VSSATRN);
WSSATRN.data[0] = 0;
 /* line 2860: */
 /* line 2861: */
WSSATRN.data[1] = 0;
SSSATRN = WSSATRN;
} 
} 
A_PROC_EXIT(translate_mactypeno);
return( SSSATRN );
} 
#undef NL

A_STATIC A68_INT  ZSSATRN_set_consttype(A68_INT  Oldtypeno, A68_414 * Tp)
{ 
A68_424  ATSATRN;  /* CALL */
A68_200  BTSATRN;  /* OPERATORS - mode -> union mode */
A68_201 * CTSATRN;  /* YIELD */
A68_381  DTSATRN;  /* avoid structure result */
A68_381  ETSATRN_tc;
A68_200  FTSATRN;  /* united object - for case conformity */
A68_201 * GTSATRN_tn;
A68_INT  HTSATRN;  /* clause result */
A_PROC_ENTRY(set_consttype);
 /* line 2864: */
{ 
ATSATRN = (*(&(Tp->Type))) ;
CTSATRN = IFAATRN_maketname(Oldtypeno) ;
A_CALLPROC(ATSATRN,(A_UNITE(BTSATRN,mode1,1,CTSATRN), Tp, &DTSATRN),(A_UNITE(BTSATRN,mode1,1,CTSATRN), Tp, &DTSATRN,(ATSATRN).nonlocals));
ETSATRN_tc = DTSATRN;
 /* line 2865: */
FTSATRN = ETSATRN_tc.T ;
switch ( FTSATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
GTSATRN_tn = (FTSATRN.data.mode1);
 /* line 2866: */
HTSATRN = (*(&(GTSATRN_tn->Typeno)));
break;
default: 
NKDAOST_sysfault(JTSATRN);
 /* line 2867: */
 /* line 2868: */
HTSATRN = 0;
break;
} 
} 
A_PROC_EXIT(set_consttype);
return( HTSATRN );
} 
#undef NL

A_STATIC A68_VOID  NTSATRN_set_unittype(A68_222  U, A68_414 * Tp, void *NonLocals)
#define NL(x) (((OTSATRN_set_unittype *)NonLocals)->x)
{ 
A68_200  PTSATRN;  /* avoid structure result */
A68_200  QTSATRN_oldtype;
A68_424  RTSATRN;  /* CALL */
A68_381  STSATRN;  /* avoid structure result */
A_PROC_ENTRY(set_unittype);
 /* line 2874: */
{ 
VUNATRN_unit_type( U, NL(Fdec), NL(TXRATRN_oldenv), &PTSATRN );
QTSATRN_oldtype = PTSATRN;
 /* line 2875: */
 /* line 2876: */
RTSATRN = (*(&(Tp->Type))) ;
A_CALLPROC(RTSATRN,(QTSATRN_oldtype, Tp, &STSATRN),(QTSATRN_oldtype, Tp, &STSATRN,(RTSATRN).nonlocals));
STSATRN;
} 
A_PROC_EXIT(set_unittype);
return;
} 
#undef NL

A_STATIC A68_638  VTSATRN_translate_macfnno(A68_INT  Macfnno, void *NonLocals)
#define NL(x) (((WTSATRN_translate_macfnno *)NonLocals)->x)
{ 
A68_306  XTSATRN;  /* OPERATORS - simple index */
A68_298 * YTSATRN_fdec;
A68_INT  ZTSATRN_oldfnno;
A68_638  AUSATRN;  /* collateral clause result */
A68_306  BUSATRN;  /* OPERATORS - trim index */
A68_306  CUSATRN;  /* OPERATORS - trim index */
A68_638  DUSATRN;  /* clause result */
A68_638  EUSATRN;  /* collateral clause result */
A68_638  FUSATRN;  /* collateral clause result */
A_PROC_ENTRY(translate_macfnno);
 /* line 2884: */
 /* line 2889: */
{ 
XTSATRN = (*(&((*NL(UXRATRN_paramenv))->Fns))) ;
YTSATRN_fdec = (*(&A_VINDEX(XTSATRN,Macfnno)));
 /* line 2890: */
 /* line 2891: */
if ( ((*(&(YTSATRN_fdec->Sort)))==OKAATRN_outerdec) )
{ 
ZTSATRN_oldfnno = KCNATRN_findnewfnno((*(&(YTSATRN_fdec->Usage))), (*(&(NL(TXRATRN_oldenv)->Fns))));
 /* line 2892: */
 /* line 2893: */
if ( (ZTSATRN_oldfnno==0) )
{ 
AUSATRN.data[0] = 0;
 /* line 2894: */
BUSATRN = (*(&(NL(GXRATRN_newenv)->Fns))) ;
AUSATRN.data[1] = KCNATRN_findnewfnno((*(&(YTSATRN_fdec->Usage))), A_VTRIM(CUSATRN,(BUSATRN),A_VTSCRIPT(&(CUSATRN.upb),(BUSATRN).upb,1,(*NL(FXRATRN_envfnno)))));
DUSATRN = AUSATRN;
} 
else
{ 
EUSATRN.data[0] = ZTSATRN_oldfnno;
 /* line 2895: */
 /* line 2896: */
EUSATRN.data[1] = WZRATRN_translate_envno(ZTSATRN_oldfnno, NL(YXRATRN_newenvfnnos));
DUSATRN = EUSATRN;
} 
} 
else
{ 
FUSATRN.data[0] = 0;
 /* line 2897: */
 /* line 2898: */
FUSATRN.data[1] = 0;
DUSATRN = FUSATRN;
} 
} 
A_PROC_EXIT(translate_macfnno);
return( DUSATRN );
} 
#undef NL

A_STATIC A68_VOID  JUSATRN_set_envfn(A68_262  Inst, A68_414 * Tprocs, A68_262  *ReturnedValue, void *NonLocals)
#define NL(x) (((KUSATRN_set_envfn *)NonLocals)->x)
{ 
A68_INT  LUSATRN_fnno;
A68_638  MUSATRN_fnnos;
A68_32  NUSATRN;  /* OPERATORS - istruct -> vector */
A68_32  OUSATRN;  /* OPERATORS - simple index */
A68_INT  PUSATRN;  /* YIELD */
A68_INT  QUSATRN_oldfnno;
A68_32  SUSATRN;  /* OPERATORS - istruct -> vector */
A68_32  TUSATRN;  /* OPERATORS - simple index */
A68_INT  UUSATRN;  /* YIELD */
A68_INT  RUSATRN_newfnno;
A68_306  VUSATRN;  /* OPERATORS - simple index */
A68_298 * WUSATRN_fdec;
A68_424  XUSATRN;  /* CALL */
A68_200  YUSATRN;  /* OPERATORS - mode -> union mode */
A68_204 * ZUSATRN;  /* YIELD */
A68_381  AVSATRN;  /* avoid structure result */
A68_381  BVSATRN_tc;
A68_298 * CVSATRN_used;
A68_294  DVSATRN;  /* OPERATORS - mode -> union mode */
A68_294 * EVSATRN;  /* YIELD */
A68_298 * FVSATRN;  /* clause result */
A68_298 * GVSATRN_fd;
A68_298 * HVSATRN_nfdec;
A68_415  IVSATRN;  /* CALL */
A68_372  JVSATRN;  /* avoid structure result */
A68_372  KVSATRN_ac;
A68_262  LVSATRN;  /* collateral clause result */
A68_262  MVSATRN;  /* clause result */
A_PROC_ENTRY(set_envfn);
 /* line 2902: */
 /* line 2903: */
{ 
LUSATRN_fnno = Inst.Fnno;
 /* line 2904: */
MUSATRN_fnnos = A_CALLPROC(NL(UTSATRN_translate_macfnno),(LUSATRN_fnno),(LUSATRN_fnno,(NL(UTSATRN_translate_macfnno)).nonlocals));
 /* line 2905: */
OUSATRN = A_HISVEC(NUSATRN,MUSATRN_fnnos,2,A68_INT ) ;
PUSATRN = 1 ;
QUSATRN_oldfnno = A_VINDEX(OUSATRN,PUSATRN);
 /* line 2906: */
TUSATRN = A_HISVEC(SUSATRN,MUSATRN_fnnos,2,A68_INT ) ;
UUSATRN = 2 ;
RUSATRN_newfnno = A_VINDEX(TUSATRN,UUSATRN);
 /* line 2908: */
 /* line 2909: */
if ( (RUSATRN_newfnno==0) )
{ 
VUSATRN = (*(&((*NL(UXRATRN_paramenv))->Fns))) ;
WUSATRN_fdec = (*(&A_VINDEX(VUSATRN,LUSATRN_fnno)));
 /* line 2910: */
 /* line 2911: */
 /* line 2912: */
 /* line 2913: */
if ( ((*(&(WUSATRN_fdec->Sort)))==OKAATRN_outerdec) )
{ 
XUSATRN = (*(&(Tprocs->Type))) ;
ZUSATRN = MUNATRN_fndec_tfn(WUSATRN_fdec) ;
A_CALLPROC(XUSATRN,(A_UNITE(YUSATRN,mode4,4,ZUSATRN), Tprocs, &AVSATRN),(A_UNITE(YUSATRN,mode4,4,ZUSATRN), Tprocs, &AVSATRN,(XUSATRN).nonlocals));
BVSATRN_tc = AVSATRN;
 /* line 2914: */
CVSATRN_used = (A_HEAP(A68_298 ));
(*CVSATRN_used) = (*WCNATRN_translate_fndec(WUSATRN_fdec, (*NL(UXRATRN_paramenv)), NL(GXRATRN_newenv)));
 /* line 2915: */
EVSATRN = (&(CVSATRN_used->Fnbody)) ;
(*EVSATRN) = A_UNITE(DVSATRN,mode12,12,(&LIAATRN_bodynull));
 /* line 2916: */
 /* line 2917: */
FVSATRN = CVSATRN_used;
} 
else
{ 
GVSATRN_fd = (A_HEAP(A68_298 ));
(*GVSATRN_fd) = (*WUSATRN_fdec);
 /* line 2918: */
 /* line 2919: */
FVSATRN = GVSATRN_fd;
} 
HVSATRN_nfdec = FVSATRN;
 /* line 2920: */
 /* line 2921: */
RUSATRN_newfnno = A_CALLPROC(NL(NLSATRN_add_envfn),(QUSATRN_oldfnno, 0, HVSATRN_nfdec, A68_TRUE, A68_TRUE),(QUSATRN_oldfnno, 0, HVSATRN_nfdec, A68_TRUE, A68_TRUE,(NL(NLSATRN_add_envfn)).nonlocals));
} 
 /* line 2922: */
IVSATRN = (*(&(Tprocs->Attr))) ;
A_CALLPROC(IVSATRN,(Inst.Attr, Tprocs, &JVSATRN),(Inst.Attr, Tprocs, &JVSATRN,(IVSATRN).nonlocals));
KVSATRN_ac = JVSATRN;
 /* line 2923: */
LVSATRN.Fnno = RUSATRN_newfnno;
LVSATRN.Macparams = ABAATRN_nilmacparams;
 /* line 2924: */
LVSATRN.Attr = KVSATRN_ac.A;
MVSATRN = LVSATRN;
} 
A_PROC_EXIT(set_envfn);
*ReturnedValue = (MVSATRN);
return;
} 
#undef NL

A_STATIC A68_638  PVSATRN_translate_macattrno(A68_INT  Macattrno, void *NonLocals)
#define NL(x) (((QVSATRN_translate_macattrno *)NonLocals)->x)
{ 
A68_302  RVSATRN;  /* OPERATORS - simple index */
A68_181 * SVSATRN_adec;
A68_INT  TVSATRN_oldattrno;
A68_638  UVSATRN;  /* collateral clause result */
A68_302  VVSATRN;  /* OPERATORS - trim index */
A68_302  WVSATRN;  /* OPERATORS - trim index */
A68_638  XVSATRN;  /* clause result */
A68_638  YVSATRN;  /* collateral clause result */
A68_638  ZVSATRN;  /* collateral clause result */
A_PROC_ENTRY(translate_macattrno);
 /* line 2932: */
 /* line 2937: */
{ 
RVSATRN = (*(&((*NL(UXRATRN_paramenv))->Attrs))) ;
SVSATRN_adec = (*(&A_VINDEX(RVSATRN,Macattrno)));
 /* line 2938: */
 /* line 2939: */
if ( ((*(&(SVSATRN_adec->Sort)))==OKAATRN_outerdec) )
{ 
TVSATRN_oldattrno = KQMATRN_findnewattrno((*(&(SVSATRN_adec->Usage))), (*(&(NL(TXRATRN_oldenv)->Attrs))));
 /* line 2940: */
 /* line 2941: */
if ( (TVSATRN_oldattrno==0) )
{ 
UVSATRN.data[0] = 0;
 /* line 2942: */
VVSATRN = (*(&(NL(GXRATRN_newenv)->Attrs))) ;
UVSATRN.data[1] = KQMATRN_findnewattrno((*(&(SVSATRN_adec->Usage))), A_VTRIM(WVSATRN,(VVSATRN),A_VTSCRIPT(&(WVSATRN.upb),(VVSATRN).upb,1,(*NL(TWRATRN_envattrno)))));
XVSATRN = UVSATRN;
} 
else
{ 
YVSATRN.data[0] = TVSATRN_oldattrno;
 /* line 2943: */
 /* line 2944: */
YVSATRN.data[1] = WZRATRN_translate_envno(TVSATRN_oldattrno, NL(WXRATRN_newenvattrnos));
XVSATRN = YVSATRN;
} 
} 
else
{ 
ZVSATRN.data[0] = 0;
 /* line 2945: */
 /* line 2946: */
ZVSATRN.data[1] = 0;
XVSATRN = ZVSATRN;
} 
} 
A_PROC_EXIT(translate_macattrno);
return( XVSATRN );
} 
#undef NL

A_STATIC A68_VOID  EWSATRN_type_expand(A68_200  Type, A68_414 * Tprocs, A68_381  *ReturnedValue, void *NonLocals)
#define NL(x) (((FWSATRN_type_expand *)NonLocals)->x)
{ 
A68_200  GWSATRN;  /* united object - for case conformity */
A68_201 * HWSATRN_tn;
A68_381  IWSATRN;  /* collateral clause result */
A68_381  JWSATRN;  /* clause result */
A68_301 * KWSATRN;  /* clause result */
A68_301 * LWSATRN_env;
A68_304  MWSATRN;  /* OPERATORS - simple index */
A68_INT  NWSATRN;  /* YIELD */
A68_215 * OWSATRN_tdec;
A68_381  PWSATRN;  /* collateral clause result */
A68_200  QWSATRN;  /* avoid structure result */
A68_BOOL  RWSATRN_changed;
A68_638  SWSATRN;  /* collateral clause result */
A68_638  TWSATRN_typenos;
A68_32  UWSATRN;  /* OPERATORS - istruct -> vector */
A68_32  VWSATRN;  /* OPERATORS - simple index */
A68_INT  WWSATRN;  /* YIELD */
A68_INT  XWSATRN_oldtypeno;
A68_32  ZWSATRN;  /* OPERATORS - istruct -> vector */
A68_32  AXSATRN;  /* OPERATORS - simple index */
A68_INT  BXSATRN;  /* YIELD */
A68_INT  YWSATRN_newtypeno;
A68_428  EXSATRN;  /* CALL */
A68_385  FXSATRN;  /* avoid structure result */
A68_385  GXSATRN_tc;
A68_BOOL  HXSATRN;  /* optbool result */
A68_385  IXSATRN;  /* collateral clause result */
A68_381  JXSATRN;  /* collateral clause result */
A68_200  KXSATRN;  /* OPERATORS - mode -> union mode */
A68_201 * LXSATRN;  /* YIELD */
A68_BOOL  MXSATRN;  /* optbool result */
A68_205 * NXSATRN_tb;
A68_424  OXSATRN;  /* CALL */
A68_381  PXSATRN;  /* avoid structure result */
A68_381  QXSATRN_tc;
A68_381  RXSATRN;  /* collateral clause result */
A68_424  SXSATRN;  /* CALL */
A68_381  TXSATRN;  /* avoid structure result */
A_PROC_ENTRY(type_expand);
 /* line 2958: */
 /* line 2959: */
GWSATRN = Type ;
switch ( GWSATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
HWSATRN_tn = (GWSATRN.data.mode1);
 /* line 2960: */
{ 
if ( ((*(&(HWSATRN_tn->Typeno)))==(-1)) )
{ 
IWSATRN.T = Type;
 /* line 2961: */
 /* line 2963: */
IWSATRN.C = A68_FALSE;
JWSATRN = IWSATRN;
} 
else
{ 
if ( ((*NL(UXRATRN_paramenv))==XWQATRN_nilenviron) )
{ 
KWSATRN = NL(TXRATRN_oldenv);
} 
else
{ 
KWSATRN = (*NL(UXRATRN_paramenv));
} 
LWSATRN_env = KWSATRN;
 /* line 2964: */
MWSATRN = (*(&(LWSATRN_env->Types))) ;
NWSATRN = (*(&(HWSATRN_tn->Typeno))) ;
OWSATRN_tdec = (*(&A_VINDEX(MWSATRN,NWSATRN)));
 /* line 2965: */
 /* line 2966: */
if ( ((*(&(OWSATRN_tdec->Sort)))==QKAATRN_macpardec) )
{ 
A_CALLPROC(NL(WASATRN_subs_tmpar),((*HWSATRN_tn), &QWSATRN),((*HWSATRN_tn), &QWSATRN,(NL(WASATRN_subs_tmpar)).nonlocals));
PWSATRN.T = QWSATRN;
 /* line 2967: */
PWSATRN.C = A68_TRUE;
JWSATRN = PWSATRN;
} 
else
{ 
RWSATRN_changed = A68_FALSE;
 /* line 2968: */
 /* line 2969: */
 /* line 2970: */
if ( ((*NL(UXRATRN_paramenv))==XWQATRN_nilenviron) )
{ 
 /* line 2971: */
SWSATRN.data[0] = (*(&(HWSATRN_tn->Typeno)));
 /* line 2972: */
SWSATRN.data[1] = WZRATRN_translate_envno((*(&(HWSATRN_tn->Typeno))), NL(XXRATRN_newenvtypenos));
} 
else
{ 
 /* line 2973: */
SWSATRN = A_CALLPROC(NL(JSSATRN_translate_mactypeno),((*(&(HWSATRN_tn->Typeno)))),((*(&(HWSATRN_tn->Typeno))),(NL(JSSATRN_translate_mactypeno)).nonlocals));
} 
TWSATRN_typenos = SWSATRN;
 /* line 2974: */
VWSATRN = A_HISVEC(UWSATRN,TWSATRN_typenos,2,A68_INT ) ;
WWSATRN = 1 ;
XWSATRN_oldtypeno = A_VINDEX(VWSATRN,WWSATRN);
 /* line 2975: */
AXSATRN = A_HISVEC(ZWSATRN,TWSATRN_typenos,2,A68_INT ) ;
BXSATRN = 2 ;
YWSATRN_newtypeno = A_VINDEX(AXSATRN,BXSATRN);
 /* line 2976: */
 /* line 2977: */
if ( (YWSATRN_newtypeno==0) )
{ 
 /* line 2978: */
if ( ((*(&(OWSATRN_tdec->Sort)))==PKAATRN_localdec) )
{ 
 /* line 2979: */
NKDAOST_sysfault(DXSATRN);
} 
else
{ 
EXSATRN = (*(&(AWLATRN_nulltprocs->Typedec))) ;
A_CALLPROC(EXSATRN,(OWSATRN_tdec, Tprocs, &FXSATRN),(OWSATRN_tdec, Tprocs, &FXSATRN,(EXSATRN).nonlocals));
GXSATRN_tc = FXSATRN;
 /* line 2980: */
HXSATRN = GXSATRN_tc.C;
if ( ! HXSATRN )
{HXSATRN = (*NL(AWSATRN_force));
}
RWSATRN_changed = HXSATRN;
 /* line 2981: */
 /* line 2982: */
IXSATRN.T = GXSATRN_tc.T;
IXSATRN.C = RWSATRN_changed;
 /* line 2983: */
 /* line 2984: */
YWSATRN_newtypeno = A_CALLPROC(NL(ZNSATRN_add_envtype),(XWSATRN_oldtypeno, 0, IXSATRN),(XWSATRN_oldtypeno, 0, IXSATRN,(NL(ZNSATRN_add_envtype)).nonlocals));
} 
} 
 /* line 2985: */
LXSATRN = IFAATRN_maketname(YWSATRN_newtypeno) ;
JXSATRN.T = A_UNITE(KXSATRN,mode1,1,LXSATRN);
MXSATRN = RWSATRN_changed;
if ( ! MXSATRN )
{ /* line 2986: */
MXSATRN = (XWSATRN_oldtypeno!=YWSATRN_newtypeno);
}
if ( ! MXSATRN )
{MXSATRN = ((*(&(HWSATRN_tn->Typeno)))!=YWSATRN_newtypeno);
}
 /* line 2987: */
 /* line 2988: */
 /* line 2989: */
 /* line 2990: */
JXSATRN.C = MXSATRN;
JWSATRN = JXSATRN;
} 
} 
} 
break;
case 5: /* REF STRUCT(MODE200)  */
NXSATRN_tb = (GWSATRN.data.mode5);
{ 
OXSATRN = (*(&(Tprocs->Type))) ;
A_CALLPROC(OXSATRN,((*(&(NXSATRN_tb->Type))), Tprocs, &PXSATRN),((*(&(NXSATRN_tb->Type))), Tprocs, &PXSATRN,(OXSATRN).nonlocals));
QXSATRN_tc = PXSATRN;
 /* line 2991: */
RXSATRN.T = QXSATRN_tc.T;
 /* line 2992: */
 /* line 2993: */
RXSATRN.C = A68_TRUE;
JWSATRN = RXSATRN;
} 
break;
default: 
 /* line 2994: */
SXSATRN = (*(&(AWLATRN_nulltprocs->Type))) ;
A_CALLPROC(SXSATRN,(Type, Tprocs, &TXSATRN),(Type, Tprocs, &TXSATRN,(SXSATRN).nonlocals));
JWSATRN = TXSATRN;
break;
} 
A_PROC_EXIT(type_expand);
*ReturnedValue = (JWSATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  WXSATRN_attrstr_expand(A68_178 * St, A68_414 * Tprocs, A68_373  *ReturnedValue)
{ 
A68_373  XXSATRN;  /* collateral clause result */
A68_373  YXSATRN;  /* clause result */
A68_415  ZXSATRN;  /* CALL */
A68_372  AYSATRN;  /* avoid structure result */
A68_372  BYSATRN_ac;
A68_416  CYSATRN;  /* CALL */
A68_373  DYSATRN;  /* avoid structure result */
A68_373  EYSATRN_asc;
A68_175  FYSATRN;  /* united object - for case conformity */
A68_178 * GYSATRN_as;
A68_178 * HYSATRN_ast;
A68_178 * IYSATRN_newas;
A68_178 ** JYSATRN_ptr;
A68_178  KYSATRN;  /* collateral clause result */
A68_178 * LYSATRN;  /* YIELD */
A68_373  MYSATRN;  /* collateral clause result */
A68_373  NYSATRN_newc;
A68_BOOL  OYSATRN;  /* optbool result */
A68_373  PYSATRN;  /* collateral clause result */
A68_178  QYSATRN;  /* collateral clause result */
A68_178 * RYSATRN;  /* YIELD */
A68_373  SYSATRN;  /* collateral clause result */
A_PROC_ENTRY(attrstr_expand);
 /* line 2998: */
 /* line 2999: */
if ( (St==DBAATRN_nilattrstr) )
{ 
XXSATRN.A = St;
 /* line 3000: */
XXSATRN.C = A68_FALSE;
YXSATRN = XXSATRN;
} 
else
{ 
ZXSATRN = (*(&(Tprocs->Attr))) ;
A_CALLPROC(ZXSATRN,((*(&(St->Elem))), Tprocs, &AYSATRN),((*(&(St->Elem))), Tprocs, &AYSATRN,(ZXSATRN).nonlocals));
BYSATRN_ac = AYSATRN;
 /* line 3001: */
CYSATRN = (*(&(Tprocs->Attrstr))) ;
A_CALLPROC(CYSATRN,((*(&(St->Rest))), Tprocs, &DYSATRN),((*(&(St->Rest))), Tprocs, &DYSATRN,(CYSATRN).nonlocals));
EYSATRN_asc = DYSATRN;
 /* line 3002: */
 /* line 3003: */
 /* line 3004: */
FYSATRN = BYSATRN_ac.A ;
switch ( FYSATRN.mode )
{ 
case 3: /* REF STRUCT(MODE175,REF MODE178)  */
GYSATRN_as = (FYSATRN.data.mode3);
 /* line 3005: */
{ 
HYSATRN_ast = GYSATRN_as;
 /* line 3006: */
IYSATRN_newas = DBAATRN_nilattrstr;
 /* line 3007: */
JYSATRN_ptr = (&IYSATRN_newas);
 /* line 3008: */
for ( ;; )
{ 
 /* line 3009: */
if ( !((HYSATRN_ast!=DBAATRN_nilattrstr)) ) break;
 /* line 3010: */
KYSATRN.Elem = (*(&(HYSATRN_ast->Elem)));
KYSATRN.Rest = DBAATRN_nilattrstr;
LYSATRN = A_HEAP(A68_178 ) ;
(*LYSATRN) = KYSATRN ;
(*JYSATRN_ptr) = LYSATRN;
 /* line 3011: */
HYSATRN_ast = (*(&(HYSATRN_ast->Rest)));
 /* line 3012: */
JYSATRN_ptr = (&((*JYSATRN_ptr)->Rest));
}
 /* line 3013: */
(*JYSATRN_ptr) = EYSATRN_asc.A;
 /* line 3014: */
MYSATRN.A = IYSATRN_newas;
 /* line 3015: */
 /* line 3016: */
MYSATRN.C = A68_TRUE;
} 
break;
default: 
MYSATRN.A = DBAATRN_nilattrstr;
 /* line 3017: */
MYSATRN.C = A68_FALSE;
break;
} 
NYSATRN_newc = MYSATRN;
 /* line 3018: */
 /* line 3019: */
 /* line 3020: */
if ( NYSATRN_newc.C )
{ 
YXSATRN = NYSATRN_newc;
} 
else
{ 
 /* line 3021: */
OYSATRN = BYSATRN_ac.C;
if ( ! OYSATRN )
{OYSATRN = EYSATRN_asc.C;
}
if ( OYSATRN )
{ 
QYSATRN.Elem = BYSATRN_ac.A;
QYSATRN.Rest = EYSATRN_asc.A;
RYSATRN = A_HEAP(A68_178 ) ;
(*RYSATRN) = QYSATRN ;
PYSATRN.A = RYSATRN;
 /* line 3022: */
PYSATRN.C = A68_TRUE;
YXSATRN = PYSATRN;
} 
else
{ 
SYSATRN.A = St;
 /* line 3023: */
 /* line 3024: */
SYSATRN.C = A68_FALSE;
YXSATRN = SYSATRN;
} 
} 
} 
A_PROC_EXIT(attrstr_expand);
*ReturnedValue = (YXSATRN);
return;
} 
#undef NL

A_STATIC A68_BOOL  XYSATRN_update_attr(A68_175  A, A68_301 * Attrenv, A68_INT * Newattrno, void *NonLocals)
#define NL(x) (((YYSATRN_update_attr *)NonLocals)->x)
{ 
A68_BOOL  ZYSATRN_changed;
A68_175  AZSATRN;  /* united object - for case conformity */
A68_176 * BZSATRN_an;
A68_302  CZSATRN;  /* OPERATORS - simple index */
A68_INT  DZSATRN;  /* YIELD */
A68_181 * EZSATRN_adec;
A68_302  FZSATRN;  /* OPERATORS - trim index */
A68_302  GZSATRN;  /* OPERATORS - trim index */
A68_INT  HZSATRN_oldattrno;
A68_374  IZSATRN;  /* collateral clause result */
A68_INT  JZSATRN_newno;
A68_307  KZSATRN_oattr;
A68_181 * LZSATRN_body;
A68_178 * MZSATRN_as;
A68_178 * NZSATRN_ats;
A68_179 * OZSATRN_ab;
A68_BOOL  PZSATRN;  /* clause result */
A_PROC_ENTRY(update_attr);
 /* line 3027: */
 /* line 3028: */
{ 
(*Newattrno) = 0;
 /* line 3029: */
ZYSATRN_changed = A68_FALSE;
 /* line 3031: */
 /* line 3032: */
AZSATRN = A ;
switch ( AZSATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
BZSATRN_an = (AZSATRN.data.mode1);
 /* line 3033: */
{ 
CZSATRN = (*(&(Attrenv->Attrs))) ;
DZSATRN = (*(&(BZSATRN_an->Attrno))) ;
EZSATRN_adec = (*(&A_VINDEX(CZSATRN,DZSATRN)));
 /* line 3034: */
 /* line 3035: */
FZSATRN = (*(&(NL(GXRATRN_newenv)->Attrs))) ;
(*Newattrno) = KQMATRN_findnewattrno((*(&(EZSATRN_adec->Usage))), A_VTRIM(GZSATRN,(FZSATRN),A_VTSCRIPT(&(GZSATRN.upb),(FZSATRN).upb,1,(*NL(TWRATRN_envattrno)))));
 /* line 3036: */
 /* line 3037: */
if ( ((*Newattrno)==0) )
{ 
HZSATRN_oldattrno = KQMATRN_findnewattrno((*(&(EZSATRN_adec->Usage))), (*(&(NL(TXRATRN_oldenv)->Attrs))));
 /* line 3038: */
IZSATRN.A = EZSATRN_adec;
IZSATRN.C = A68_FALSE;
JZSATRN_newno = A_CALLPROC(NL(FQSATRN_add_envattr),(HZSATRN_oldattrno, 0, IZSATRN),(HZSATRN_oldattrno, 0, IZSATRN,(NL(FQSATRN_add_envattr)).nonlocals));
 /* line 3039: */
 /* line 3040: */
KZSATRN_oattr = (*(&(ELCATRN_find_outers((*(&((*(&(EZSATRN_adec->Usage)))->Closureno))), NL(Oldclosure), NL(Msg))->Outer)));
 /* line 3041: */
LZSATRN_body = APMATRN_get_outerattr(KZSATRN_oattr);
 /* line 3042: */
 /* line 3043: */
if ( A_CALLPROC(NL(WYSATRN_update_attr),((*(&(LZSATRN_body->Value))), KZSATRN_oattr.Environ, Newattrno),((*(&(LZSATRN_body->Value))), KZSATRN_oattr.Environ, Newattrno,(NL(WYSATRN_update_attr)).nonlocals)) )
{ 
 /* line 3044: */
ZYSATRN_changed = A68_TRUE;
} 
 /* line 3045: */
 /* line 3046: */
(*Newattrno) = JZSATRN_newno;
} 
 /* line 3047: */
if ( ((*Newattrno)!=(*(&(BZSATRN_an->Attrno)))) )
{ 
 /* line 3048: */
 /* line 3049: */
ZYSATRN_changed = A68_TRUE;
} 
} 
break;
case 3: /* REF STRUCT(MODE175,REF MODE178)  */
MZSATRN_as = (AZSATRN.data.mode3);
 /* line 3050: */
{ 
NZSATRN_ats = MZSATRN_as;
 /* line 3051: */
for ( ;; )
{ 
 /* line 3052: */
if ( !((NZSATRN_ats!=DBAATRN_nilattrstr)) ) break;
 /* line 3053: */
if ( A_CALLPROC(NL(WYSATRN_update_attr),((*(&(NZSATRN_ats->Elem))), Attrenv, Newattrno),((*(&(NZSATRN_ats->Elem))), Attrenv, Newattrno,(NL(WYSATRN_update_attr)).nonlocals)) )
{ 
 /* line 3054: */
ZYSATRN_changed = A68_TRUE;
} 
 /* line 3055: */
 /* line 3056: */
NZSATRN_ats = (*(&(NZSATRN_ats->Rest)));
}
 /* line 3057: */
 /* line 3058: */
} 
break;
case 4: /* REF STRUCT(MODE175)  */
OZSATRN_ab = (AZSATRN.data.mode4);
 /* line 3059: */
 /* line 3060: */
A_CALLPROC(NL(WYSATRN_update_attr),((*(&(OZSATRN_ab->Attr))), Attrenv, Newattrno),((*(&(OZSATRN_ab->Attr))), Attrenv, Newattrno,(NL(WYSATRN_update_attr)).nonlocals));
break;
default: 
/*SKIP*/;
break;
} 
 /* line 3061: */
 /* line 3062: */
PZSATRN = ZYSATRN_changed;
} 
A_PROC_EXIT(update_attr);
return( PZSATRN );
} 
#undef NL

A_STATIC A68_VOID  TZSATRN_attr_expand(A68_175  Attr, A68_414 * Tprocs, A68_372  *ReturnedValue, void *NonLocals)
#define NL(x) (((UZSATRN_attr_expand *)NonLocals)->x)
{ 
A68_175  VZSATRN;  /* united object - for case conformity */
A68_176 * WZSATRN_an;
A68_372  XZSATRN;  /* collateral clause result */
A68_372  YZSATRN;  /* clause result */
A68_301 * ZZSATRN;  /* clause result */
A68_301 * AATATRN_env;
A68_302  BATATRN;  /* OPERATORS - simple index */
A68_INT  CATATRN;  /* YIELD */
A68_181 * DATATRN_adec;
A68_372  EATATRN;  /* collateral clause result */
A68_175  FATATRN;  /* avoid structure result */
A68_BOOL  GATATRN_changed;
A68_638  HATATRN;  /* collateral clause result */
A68_638  IATATRN_attrnos;
A68_32  JATATRN;  /* OPERATORS - istruct -> vector */
A68_32  KATATRN;  /* OPERATORS - simple index */
A68_INT  LATATRN;  /* YIELD */
A68_INT  MATATRN_oldattrno;
A68_32  OATATRN;  /* OPERATORS - istruct -> vector */
A68_32  PATATRN;  /* OPERATORS - simple index */
A68_INT  QATATRN;  /* YIELD */
A68_INT  NATATRN_newattrno;
A68_175  TATATRN;  /* OPERATORS - mode -> union mode */
A68_372  UATATRN;  /* collateral clause result */
A68_175  VATATRN;  /* OPERATORS - mode -> union mode */
A68_176 * WATATRN;  /* YIELD */
A68_BOOL  XATATRN;  /* optbool result */
A68_178 * YATATRN_as;
A68_416  ZATATRN;  /* CALL */
A68_373  ABTATRN;  /* avoid structure result */
A68_373  BBTATRN_asc;
A68_372  CBTATRN;  /* collateral clause result */
A68_175  DBTATRN;  /* OPERATORS - mode -> union mode */
A68_178 * EBTATRN;  /* YIELD */
A68_179 * FBTATRN_ab;
A68_415  GBTATRN;  /* CALL */
A68_372  HBTATRN;  /* avoid structure result */
A68_372  IBTATRN_ac;
A68_372  JBTATRN;  /* collateral clause result */
A68_415  KBTATRN;  /* CALL */
A68_372  LBTATRN;  /* avoid structure result */
A_PROC_ENTRY(attr_expand);
 /* line 3066: */
 /* line 3067: */
VZSATRN = Attr ;
switch ( VZSATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
WZSATRN_an = (VZSATRN.data.mode1);
 /* line 3068: */
{ 
if ( ((*(&(WZSATRN_an->Attrno)))==(-1)) )
{ 
XZSATRN.A = Attr;
 /* line 3069: */
 /* line 3071: */
XZSATRN.C = A68_FALSE;
YZSATRN = XZSATRN;
} 
else
{ 
if ( ((*NL(UXRATRN_paramenv))==XWQATRN_nilenviron) )
{ 
ZZSATRN = NL(TXRATRN_oldenv);
} 
else
{ 
ZZSATRN = (*NL(UXRATRN_paramenv));
} 
AATATRN_env = ZZSATRN;
 /* line 3072: */
BATATRN = (*(&(AATATRN_env->Attrs))) ;
CATATRN = (*(&(WZSATRN_an->Attrno))) ;
DATATRN_adec = (*(&A_VINDEX(BATATRN,CATATRN)));
 /* line 3073: */
 /* line 3074: */
if ( ((*(&(DATATRN_adec->Sort)))==QKAATRN_macpardec) )
{ 
A_CALLPROC(NL(AASATRN_subs_ampar),((*WZSATRN_an), &FATATRN),((*WZSATRN_an), &FATATRN,(NL(AASATRN_subs_ampar)).nonlocals));
EATATRN.A = FATATRN;
 /* line 3075: */
EATATRN.C = A68_TRUE;
YZSATRN = EATATRN;
} 
else
{ 
GATATRN_changed = A68_FALSE;
 /* line 3076: */
 /* line 3077: */
 /* line 3078: */
if ( ((*NL(UXRATRN_paramenv))==XWQATRN_nilenviron) )
{ 
 /* line 3079: */
HATATRN.data[0] = (*(&(WZSATRN_an->Attrno)));
 /* line 3080: */
HATATRN.data[1] = WZRATRN_translate_envno((*(&(WZSATRN_an->Attrno))), NL(WXRATRN_newenvattrnos));
} 
else
{ 
 /* line 3081: */
HATATRN = A_CALLPROC(NL(OVSATRN_translate_macattrno),((*(&(WZSATRN_an->Attrno)))),((*(&(WZSATRN_an->Attrno))),(NL(OVSATRN_translate_macattrno)).nonlocals));
} 
IATATRN_attrnos = HATATRN;
 /* line 3082: */
KATATRN = A_HISVEC(JATATRN,IATATRN_attrnos,2,A68_INT ) ;
LATATRN = 1 ;
MATATRN_oldattrno = A_VINDEX(KATATRN,LATATRN);
 /* line 3083: */
PATATRN = A_HISVEC(OATATRN,IATATRN_attrnos,2,A68_INT ) ;
QATATRN = 2 ;
NATATRN_newattrno = A_VINDEX(PATATRN,QATATRN);
 /* line 3084: */
 /* line 3085: */
if ( (NATATRN_newattrno==0) )
{ 
 /* line 3086: */
if ( ((*(&(DATATRN_adec->Sort)))==PKAATRN_localdec) )
{ 
 /* line 3087: */
NKDAOST_sysfault(SATATRN);
} 
else
{ 
 /* line 3088: */
 /* line 3089: */
GATATRN_changed = A_CALLPROC(NL(WYSATRN_update_attr),(A_UNITE(TATATRN,mode1,1,WZSATRN_an), AATATRN_env, (&NATATRN_newattrno)),(A_UNITE(TATATRN,mode1,1,WZSATRN_an), AATATRN_env, (&NATATRN_newattrno),(NL(WYSATRN_update_attr)).nonlocals));
} 
} 
 /* line 3090: */
WATATRN = UDAATRN_makeattrname(NATATRN_newattrno) ;
UATATRN.A = A_UNITE(VATATRN,mode1,1,WATATRN);
XATATRN = GATATRN_changed;
if ( ! XATATRN )
{ /* line 3091: */
XATATRN = (MATATRN_oldattrno!=NATATRN_newattrno);
}
if ( ! XATATRN )
{XATATRN = ((*(&(WZSATRN_an->Attrno)))!=NATATRN_newattrno);
}
 /* line 3092: */
 /* line 3093: */
 /* line 3094: */
 /* line 3095: */
UATATRN.C = XATATRN;
YZSATRN = UATATRN;
} 
} 
} 
break;
case 3: /* REF STRUCT(MODE175,REF MODE178)  */
YATATRN_as = (VZSATRN.data.mode3);
 /* line 3096: */
{ 
ZATATRN = (*(&(Tprocs->Attrstr))) ;
A_CALLPROC(ZATATRN,(YATATRN_as, Tprocs, &ABTATRN),(YATATRN_as, Tprocs, &ABTATRN,(ZATATRN).nonlocals));
BBTATRN_asc = ABTATRN;
 /* line 3097: */
EBTATRN = BBTATRN_asc.A ;
CBTATRN.A = A_UNITE(DBTATRN,mode3,3,EBTATRN);
 /* line 3098: */
 /* line 3099: */
CBTATRN.C = BBTATRN_asc.C;
YZSATRN = CBTATRN;
} 
break;
case 4: /* REF STRUCT(MODE175)  */
FBTATRN_ab = (VZSATRN.data.mode4);
 /* line 3100: */
{ 
GBTATRN = (*(&(Tprocs->Attr))) ;
A_CALLPROC(GBTATRN,((*(&(FBTATRN_ab->Attr))), Tprocs, &HBTATRN),((*(&(FBTATRN_ab->Attr))), Tprocs, &HBTATRN,(GBTATRN).nonlocals));
IBTATRN_ac = HBTATRN;
 /* line 3101: */
JBTATRN.A = IBTATRN_ac.A;
 /* line 3102: */
 /* line 3103: */
JBTATRN.C = A68_TRUE;
YZSATRN = JBTATRN;
} 
break;
default: 
 /* line 3104: */
KBTATRN = (*(&(AWLATRN_nulltprocs->Attr))) ;
A_CALLPROC(KBTATRN,(Attr, Tprocs, &LBTATRN),(Attr, Tprocs, &LBTATRN,(KBTATRN).nonlocals));
YZSATRN = LBTATRN;
break;
} 
A_PROC_EXIT(attr_expand);
*ReturnedValue = (YZSATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  PBTATRN_formula_expand(A68_184  Formula, A68_414 * Tprocs, A68_375  *ReturnedValue, void *NonLocals)
#define NL(x) (((QBTATRN_formula_expand *)NonLocals)->x)
{ 
A68_184  RBTATRN;  /* united object - for case conformity */
A68_185 * SBTATRN_fi;
A68_375  TBTATRN;  /* collateral clause result */
A68_375  UBTATRN;  /* clause result */
A68_186 * VBTATRN_fck;
A68_375  WBTATRN;  /* avoid structure result */
A68_187 * XBTATRN_fa;
A68_375  YBTATRN;  /* collateral clause result */
A68_188 * ZBTATRN_fn;
A68_375  ACTATRN;  /* collateral clause result */
A68_375  BCTATRN;  /* avoid structure result */
A68_189 * CCTATRN_fd;
A68_375  DCTATRN;  /* avoid structure result */
A68_190 * ECTATRN_fm;
A68_375  FCTATRN;  /* avoid structure result */
A68_191 * GCTATRN_fc;
A68_375  HCTATRN;  /* avoid structure result */
A68_192 * ICTATRN_fb;
A68_418  JCTATRN;  /* CALL */
A68_375  KCTATRN;  /* avoid structure result */
A68_375  LCTATRN_fc;
A68_375  MCTATRN;  /* collateral clause result */
A68_418  NCTATRN;  /* CALL */
A68_375  OCTATRN;  /* avoid structure result */
A_PROC_ENTRY(formula_expand);
 /* line 3108: */
 /* line 3109: */
RBTATRN = Formula ;
switch ( RBTATRN.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26)  */
SBTATRN_fi = (RBTATRN.data.mode1);
TBTATRN.F = Formula;
 /* line 3110: */
TBTATRN.C = A68_FALSE;
UBTATRN = TBTATRN;
break;
case 2: /* REF STRUCT(INT,MODE184,MODE184)  */
VBTATRN_fck = (RBTATRN.data.mode2);
 /* line 3111: */
UTQATRN_fcheck_evaluate( VBTATRN_fck, Tprocs, NL(QZRATRN_oldclose), NL(TZRATRN_diag), &WBTATRN );
UBTATRN = WBTATRN;
break;
case 3: /* REF STRUCT(INT)  */
XBTATRN_fa = (RBTATRN.data.mode3);
YBTATRN.F = Formula;
 /* line 3112: */
YBTATRN.C = A68_FALSE;
UBTATRN = YBTATRN;
break;
case 4: /* REF STRUCT(INT)  */
ZBTATRN_fn = (RBTATRN.data.mode4);
 /* line 3113: */
 /* line 3114: */
if ( ((*(&(ZBTATRN_fn->Intno)))==(-1)) )
{ 
ACTATRN.F = Formula;
 /* line 3115: */
ACTATRN.C = A68_FALSE;
UBTATRN = ACTATRN;
} 
else
{ 
 /* line 3116: */
 /* line 3117: */
A_CALLPROC(NL(MERATRN_fname_evaluate),((*ZBTATRN_fn), Tprocs, NL(QZRATRN_oldclose), (*NL(VXRATRN_repldecs)), NL(KASATRN_subs_fmpar), &BCTATRN),((*ZBTATRN_fn), Tprocs, NL(QZRATRN_oldclose), (*NL(VXRATRN_repldecs)), NL(KASATRN_subs_fmpar), &BCTATRN,(NL(MERATRN_fname_evaluate)).nonlocals));
UBTATRN = BCTATRN;
} 
break;
case 5: /* REF STRUCT(MODE184,INT,MODE184)  */
CCTATRN_fd = (RBTATRN.data.mode5);
 /* line 3118: */
YOQATRN_fdop_simplify( CCTATRN_fd, Tprocs, NL(QZRATRN_oldclose), NL(TZRATRN_diag), &DCTATRN );
UBTATRN = DCTATRN;
break;
case 6: /* REF STRUCT(INT,MODE184)  */
ECTATRN_fm = (RBTATRN.data.mode6);
 /* line 3119: */
WNQATRN_fmop_simplify( ECTATRN_fm, Tprocs, NL(QZRATRN_oldclose), NL(TZRATRN_diag), &FCTATRN );
UBTATRN = FCTATRN;
break;
case 7: /* REF STRUCT(MODE184,MODE184,MODE184)  */
GCTATRN_fc = (RBTATRN.data.mode7);
 /* line 3120: */
EQQATRN_fcond_simplify( GCTATRN_fc, Tprocs, &HCTATRN );
UBTATRN = HCTATRN;
break;
case 8: /* REF STRUCT(MODE184)  */
ICTATRN_fb = (RBTATRN.data.mode8);
 /* line 3121: */
{ 
JCTATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(JCTATRN,((*(&(ICTATRN_fb->Formula))), Tprocs, &KCTATRN),((*(&(ICTATRN_fb->Formula))), Tprocs, &KCTATRN,(JCTATRN).nonlocals));
LCTATRN_fc = KCTATRN;
 /* line 3122: */
MCTATRN.F = LCTATRN_fc.F;
 /* line 3123: */
 /* line 3124: */
MCTATRN.C = A68_TRUE;
UBTATRN = MCTATRN;
} 
break;
default: 
 /* line 3125: */
NCTATRN = (*(&(AWLATRN_nulltprocs->Formula))) ;
A_CALLPROC(NCTATRN,(Formula, Tprocs, &OCTATRN),(Formula, Tprocs, &OCTATRN,(NCTATRN).nonlocals));
UBTATRN = OCTATRN;
break;
} 
A_PROC_EXIT(formula_expand);
*ReturnedValue = (UBTATRN);
return;
} 
#undef NL
 /* line 3142: */

A_STATIC A68_VOID  UCTATRN_addfnname(A68_577 * Use, A68_INT  Depth, A68_270 * Sq, A68_251 * Sr, A68_BOOL  Isseq, A68_644  *ReturnedValue)
{ 
A68_251 * VCTATRN_ser;
A68_270 * WCTATRN_seq;
A68_BOOL  XCTATRN;  /* optbool result */
A68_BOOL * YCTATRN;  /* YIELD */
A68_253 * ZCTATRN_fnname;
A68_270  ADTATRN;  /* collateral clause result */
A68_271  BDTATRN;  /* OPERATORS - mode -> union mode */
A68_270 * CDTATRN;  /* YIELD */
A68_251  DDTATRN;  /* collateral clause result */
A68_252  EDTATRN;  /* OPERATORS - mode -> union mode */
A68_251 * FDTATRN;  /* YIELD */
A68_644  GDTATRN;  /* collateral clause result */
A68_644  HDTATRN;  /* clause result */
A68_644  IDTATRN;  /* collateral clause result */
A_PROC_ENTRY(addfnname);
 /* line 3143: */
 /* line 3144: */
{ 
VCTATRN_ser = Sr;
 /* line 3145: */
WCTATRN_seq = Sq;
 /* line 3146: */
XCTATRN = !(*(&(Use->Declared)));
if ( XCTATRN )
{ /* line 3147: */
XCTATRN = ((*(&(Use->Depth)))>=Depth);
}
if ( XCTATRN )
{ 
YCTATRN = (&(Use->Declared)) ;
(*YCTATRN) = A68_TRUE;
 /* line 3148: */
ZCTATRN_fnname = LHAATRN_makefnname((*(&(Use->Newdecno))));
 /* line 3149: */
 /* line 3150: */
if ( Isseq )
{ 
ADTATRN.Step = A_UNITE(BDTATRN,mode5,5,(*ZCTATRN_fnname));
 /* line 3151: */
ADTATRN.Rest = WCTATRN_seq;
CDTATRN = A_HEAP(A68_270 ) ;
(*CDTATRN) = ADTATRN ;
WCTATRN_seq = CDTATRN;
} 
else
{ 
DDTATRN.Step = A_UNITE(EDTATRN,mode5,5,(*ZCTATRN_fnname));
 /* line 3152: */
DDTATRN.Rest = VCTATRN_ser;
FDTATRN = A_HEAP(A68_251 ) ;
(*FDTATRN) = DDTATRN ;
VCTATRN_ser = FDTATRN;
} 
 /* line 3153: */
GDTATRN.Seq = WCTATRN_seq;
GDTATRN.Ser = VCTATRN_ser;
 /* line 3154: */
GDTATRN.C = A68_TRUE;
HDTATRN = GDTATRN;
} 
else
{ 
IDTATRN.Seq = Sq;
IDTATRN.Ser = Sr;
 /* line 3155: */
 /* line 3156: */
IDTATRN.C = A68_FALSE;
HDTATRN = IDTATRN;
} 
} 
A_PROC_EXIT(addfnname);
*ReturnedValue = (HDTATRN);
return;
} 
#undef NL
 /* line 3161: */

A_STATIC A68_VOID  QDTATRN_reposition_decls(A68_INT  Depth, A68_283  Decl, A68_578 * Decslist, A68_270 * Sq, A68_251 * Sr, A68_BOOL  Isseq, A68_644  *ReturnedValue, void *NonLocals)
#define NL(x) (((RDTATRN_reposition_decls *)NonLocals)->x)
{ 
A68_270 * SDTATRN_seq;
A68_251 * TDTATRN_ser;
A68_BOOL  UDTATRN_changed;
A68_578 * VDTATRN_macdecs;
A68_644  WDTATRN;  /* avoid structure result */
A68_644  XDTATRN_sc;
A68_270  YDTATRN;  /* collateral clause result */
A68_271  ZDTATRN;  /* OPERATORS - unite union */
A68_270 * AETATRN;  /* YIELD */
A68_251  BETATRN;  /* collateral clause result */
A68_252  CETATRN;  /* OPERATORS - unite union */
A68_251 * DETATRN;  /* YIELD */
A68_644  EETATRN;  /* collateral clause result */
A68_644  FETATRN;  /* clause result */
A_PROC_ENTRY(reposition_decls);
 /* line 3162: */
 /* line 3163: */
{ 
SDTATRN_seq = Sq;
TDTATRN_ser = Sr;
 /* line 3164: */
UDTATRN_changed = A68_FALSE;
 /* line 3165: */
VDTATRN_macdecs = Decslist;
 /* line 3166: */
for ( ;; )
{ 
 /* line 3167: */
if ( !((VDTATRN_macdecs!=VWQATRN_nildecslist)) ) break;
UCTATRN_addfnname( (*(&(VDTATRN_macdecs->Uselist))), Depth, SDTATRN_seq, TDTATRN_ser, Isseq, &WDTATRN );
XDTATRN_sc = WDTATRN;
 /* line 3168: */
 /* line 3169: */
if ( XDTATRN_sc.C )
{ 
SDTATRN_seq = XDTATRN_sc.Seq;
TDTATRN_ser = XDTATRN_sc.Ser;
 /* line 3170: */
 /* line 3171: */
UDTATRN_changed = A68_TRUE;
} 
 /* line 3172: */
 /* line 3173: */
VDTATRN_macdecs = (*(&(VDTATRN_macdecs->Rest)));
}
 /* line 3174: */
 /* line 3175: */
if ( UDTATRN_changed )
{ 
 /* line 3176: */
if ( Isseq )
{ 
YDTATRN.Step = A_UUNITE(ZDTATRN,0,Decl);
 /* line 3177: */
YDTATRN.Rest = SDTATRN_seq;
AETATRN = A_HEAP(A68_270 ) ;
(*AETATRN) = YDTATRN ;
SDTATRN_seq = AETATRN;
} 
else
{ 
BETATRN.Step = A_UUNITE(CETATRN,0,Decl);
 /* line 3178: */
BETATRN.Rest = TDTATRN_ser;
 /* line 3179: */
DETATRN = A_HEAP(A68_251 ) ;
(*DETATRN) = BETATRN ;
TDTATRN_ser = DETATRN;
} 
} 
 /* line 3180: */
EETATRN.Seq = SDTATRN_seq;
EETATRN.Ser = TDTATRN_ser;
 /* line 3181: */
EETATRN.C = UDTATRN_changed;
FETATRN = EETATRN;
} 
A_PROC_EXIT(reposition_decls);
*ReturnedValue = (FETATRN);
return;
} 
#undef NL
 /* line 3184: */

A_STATIC A68_VOID  LETATRN_position_decls(A68_283  Decl, A68_270 * Sq, A68_251 * Sr, A68_BOOL  Isseq, A68_644  *ReturnedValue, void *NonLocals)
#define NL(x) (((METATRN_position_decls *)NonLocals)->x)
{ 
A68_INT  NETATRN_depth;
A68_283  OETATRN;  /* united object - for case conformity */
A68_176  PETATRN_adecl;
A68_644  QETATRN;  /* clause result */
A68_INT  RETATRN;  /* YIELD */
A68_644  SETATRN;  /* avoid structure result */
A68_644  TETATRN;  /* collateral clause result */
A68_644  UETATRN;  /* collateral clause result */
A68_201  VETATRN_tdecl;
A68_INT  WETATRN;  /* YIELD */
A68_644  XETATRN;  /* avoid structure result */
A68_253  YETATRN_fdecl;
A68_270 * ZETATRN_seq;
A68_251 * AFTATRN_ser;
A68_INT  CFTATRN;  /* ADICOPS - ABS INT */
A68_INT  DFTATRN;  /* YIELD */
A68_577 * BFTATRN_fuse;
A68_644  EFTATRN;  /* avoid structure result */
A68_644  FFTATRN_msc;
A68_644  GFTATRN;  /* collateral clause result */
A68_INT  HFTATRN;  /* YIELD */
A68_644  IFTATRN;  /* avoid structure result */
A68_644  LFTATRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(position_decls);
 /* line 3185: */
 /* line 3186: */
{ 
NETATRN_depth = (*(&((*(&(NL(TZRATRN_diag)->Monitors)))->Depth)));
 /* line 3187: */
 /* line 3188: */
OETATRN = Decl ;
switch ( OETATRN.mode )
{ 
case 1: /* STRUCT(INT)  */
PETATRN_adecl = (OETATRN.data.mode1);
 /* line 3189: */
 /* line 3190: */
 /* line 3191: */
 /* line 3192: */
 /* line 3193: */
RETATRN = PETATRN_adecl.Attrno ;
A_CALLPROC(NL(PDTATRN_reposition_decls),(NETATRN_depth, Decl, (*(&A_VINDEX((*NL(BVRATRN_macattrdecls)),RETATRN))), Sq, Sr, Isseq, &SETATRN),(NETATRN_depth, Decl, (*(&A_VINDEX((*NL(BVRATRN_macattrdecls)),RETATRN))), Sq, Sr, Isseq, &SETATRN,(NL(PDTATRN_reposition_decls)).nonlocals));
QETATRN = SETATRN;
break;
case 2: /* STRUCT(INT)  */
TETATRN.Seq = Sq;
TETATRN.Ser = Sr;
 /* line 3194: */
TETATRN.C = A68_TRUE;
QETATRN = TETATRN;
break;
case 4: /* STRUCT(INT)  */
UETATRN.Seq = Sq;
UETATRN.Ser = Sr;
 /* line 3195: */
UETATRN.C = A68_TRUE;
QETATRN = UETATRN;
break;
case 3: /* STRUCT(INT)  */
VETATRN_tdecl = (OETATRN.data.mode3);
 /* line 3196: */
 /* line 3197: */
 /* line 3198: */
 /* line 3199: */
 /* line 3200: */
WETATRN = VETATRN_tdecl.Typeno ;
A_CALLPROC(NL(PDTATRN_reposition_decls),(NETATRN_depth, Decl, (*(&A_VINDEX((*NL(LVRATRN_mactypedecls)),WETATRN))), Sq, Sr, Isseq, &XETATRN),(NETATRN_depth, Decl, (*(&A_VINDEX((*NL(LVRATRN_mactypedecls)),WETATRN))), Sq, Sr, Isseq, &XETATRN,(NL(PDTATRN_reposition_decls)).nonlocals));
QETATRN = XETATRN;
break;
case 5: /* STRUCT(INT)  */
YETATRN_fdecl = (OETATRN.data.mode5);
 /* line 3201: */
{ 
 /* line 3202: */
if ( (YETATRN_fdecl.Fnno<0) )
{ 
ZETATRN_seq = Sq;
AFTATRN_ser = Sr;
 /* line 3203: */
CFTATRN = YETATRN_fdecl.Fnno ;
DFTATRN = A_ABS(CFTATRN) ;
BFTATRN_fuse = (*(&A_VINDEX(NL(YXRATRN_newenvfnnos),DFTATRN)));
 /* line 3204: */
for ( ;; )
{ 
 /* line 3205: */
if ( !((BFTATRN_fuse!=UWQATRN_niluselist)) ) break;
UCTATRN_addfnname( BFTATRN_fuse, NETATRN_depth, ZETATRN_seq, AFTATRN_ser, Isseq, &EFTATRN );
FFTATRN_msc = EFTATRN;
 /* line 3206: */
ZETATRN_seq = FFTATRN_msc.Seq;
AFTATRN_ser = FFTATRN_msc.Ser;
 /* line 3207: */
 /* line 3208: */
BFTATRN_fuse = (*(&(BFTATRN_fuse->Rest)));
}
 /* line 3210: */
GFTATRN.Seq = ZETATRN_seq;
GFTATRN.Ser = AFTATRN_ser;
 /* line 3211: */
 /* line 3212: */
GFTATRN.C = A68_TRUE;
QETATRN = GFTATRN;
} 
else
{ 
 /* line 3213: */
 /* line 3214: */
 /* line 3215: */
 /* line 3216: */
HFTATRN = YETATRN_fdecl.Fnno ;
A_CALLPROC(NL(PDTATRN_reposition_decls),(NETATRN_depth, Decl, (*(&A_VINDEX((*NL(VVRATRN_macfndecls)),HFTATRN))), Sq, Sr, Isseq, &IFTATRN),(NETATRN_depth, Decl, (*(&A_VINDEX((*NL(VVRATRN_macfndecls)),HFTATRN))), Sq, Sr, Isseq, &IFTATRN,(NL(PDTATRN_reposition_decls)).nonlocals));
QETATRN = IFTATRN;
} 
} 
break;
default: 
NKDAOST_sysfault(KFTATRN);
 /* line 3217: */
 /* line 3218: */
QETATRN = LFTATRN;
break;
} 
} 
A_PROC_EXIT(position_decls);
*ReturnedValue = (QETATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  PFTATRN_fnbody_decl(A68_267 * Ut, A68_BOOL  C, A68_408  *ReturnedValue, void *NonLocals)
#define NL(x) (((QFTATRN_fnbody_decl *)NonLocals)->x)
{ 
A68_INT  RFTATRN_depth;
A68_BOOL  SFTATRN_isseq;
A68_BOOL  TFTATRN_changed;
A68_270 * UFTATRN_seq;
A68_251 * VFTATRN_ser;
A68_222  WFTATRN;  /* united object - for case conformity */
A68_244 * XFTATRN_uq;
A68_245 * YFTATRN_us;
A68_577 ** ZFTATRN_fns;
A68_INT  AGTATRN;  /* forall loop counter */
A68_577 * BGTATRN_fuse;
A68_644  CGTATRN;  /* avoid structure result */
A68_644  DGTATRN_sc;
A68_222  EGTATRN;  /* united object - for case conformity */
A68_244 * FGTATRN_uq;
A68_244  GGTATRN;  /* collateral clause result */
A68_222  HGTATRN;  /* clause result */
A68_244 * IGTATRN;  /* YIELD */
A68_222  JGTATRN;  /* OPERATORS - mode -> union mode */
A68_245 * KGTATRN_us;
A68_245  LGTATRN;  /* collateral clause result */
A68_245 * MGTATRN;  /* YIELD */
A68_222  NGTATRN;  /* OPERATORS - mode -> union mode */
A68_245  OGTATRN;  /* collateral clause result */
A68_245 * PGTATRN;  /* YIELD */
A68_222  QGTATRN;  /* OPERATORS - mode -> union mode */
A68_222  RGTATRN_u;
A68_408  SGTATRN;  /* collateral clause result */
A68_294  TGTATRN;  /* OPERATORS - mode -> union mode */
A68_267 * UGTATRN;  /* YIELD */
A68_408  VGTATRN;  /* clause result */
A68_408  WGTATRN;  /* collateral clause result */
A68_294  XGTATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(fnbody_decl);
 /* line 3221: */
 /* line 3222: */
{ 
RFTATRN_depth = (*(&((*(&(NL(TZRATRN_diag)->Monitors)))->Depth)));
 /* line 3223: */
SFTATRN_isseq = A68_FALSE;
TFTATRN_changed = A68_FALSE;
 /* line 3224: */
UFTATRN_seq = QAAATRN_nilsequence;
VFTATRN_ser = SAAATRN_nilseries;
 /* line 3225: */
 /* line 3226: */
WFTATRN = (*(&(Ut->Tag))) ;
switch ( WFTATRN.mode )
{ 
case 28: /* REF STRUCT(REF MODE270,MODE222)  */
XFTATRN_uq = (WFTATRN.data.mode28);
{ 
SFTATRN_isseq = A68_TRUE;
 /* line 3227: */
UFTATRN_seq = (*(&(XFTATRN_uq->Body)));
} 
break;
case 29: /* REF STRUCT(REF MODE251,MODE222)  */
YFTATRN_us = (WFTATRN.data.mode29);
 /* line 3228: */
 /* line 3229: */
VFTATRN_ser = (*(&(YFTATRN_us->Body)));
break;
default: 
/*SKIP*/;
break;
} 
 /* line 3230: */
 /* line 3231: */
AGTATRN = NL(YXRATRN_newenvfnnos).upb -1;
ZFTATRN_fns = NL(YXRATRN_newenvfnnos).data;
for (;AGTATRN-- >= 0;
(ZFTATRN_fns++
) )
{
BGTATRN_fuse = (*ZFTATRN_fns);
 /* line 3232: */
for ( ;; )
{ 
 /* line 3233: */
if ( !((BGTATRN_fuse!=UWQATRN_niluselist)) ) break;
UCTATRN_addfnname( BGTATRN_fuse, RFTATRN_depth, UFTATRN_seq, VFTATRN_ser, SFTATRN_isseq, &CGTATRN );
DGTATRN_sc = CGTATRN;
 /* line 3234: */
 /* line 3235: */
if ( DGTATRN_sc.C )
{ 
UFTATRN_seq = DGTATRN_sc.Seq;
VFTATRN_ser = DGTATRN_sc.Ser;
 /* line 3236: */
 /* line 3237: */
TFTATRN_changed = A68_TRUE;
} 
 /* line 3238: */
 /* line 3239: */
BGTATRN_fuse = (*(&(BGTATRN_fuse->Rest)));
}
 /* line 3240: */
}
 /* line 3241: */
 /* line 3242: */
 /* line 3243: */
if ( TFTATRN_changed )
{ 
 /* line 3244: */
EGTATRN = (*(&(Ut->Tag))) ;
switch ( EGTATRN.mode )
{ 
case 28: /* REF STRUCT(REF MODE270,MODE222)  */
FGTATRN_uq = (EGTATRN.data.mode28);
 /* line 3245: */
GGTATRN.Body = UFTATRN_seq;
GGTATRN.Output = (*(&(FGTATRN_uq->Output)));
 /* line 3246: */
IGTATRN = A_HEAP(A68_244 ) ;
(*IGTATRN) = GGTATRN ;
HGTATRN = A_UNITE(JGTATRN,mode28,28,IGTATRN);
break;
case 29: /* REF STRUCT(REF MODE251,MODE222)  */
KGTATRN_us = (EGTATRN.data.mode29);
 /* line 3247: */
LGTATRN.Body = VFTATRN_ser;
 /* line 3248: */
LGTATRN.Output = (*(&(KGTATRN_us->Output)));
MGTATRN = A_HEAP(A68_245 ) ;
(*MGTATRN) = LGTATRN ;
HGTATRN = A_UNITE(NGTATRN,mode29,29,MGTATRN);
break;
default: 
OGTATRN.Body = VFTATRN_ser;
 /* line 3249: */
OGTATRN.Output = (*(&(Ut->Tag)));
PGTATRN = A_HEAP(A68_245 ) ;
(*PGTATRN) = OGTATRN ;
HGTATRN = A_UNITE(QGTATRN,mode29,29,PGTATRN);
break;
} 
RGTATRN_u = HGTATRN;
 /* line 3250: */
UGTATRN = WGAATRN_makeunittag(RGTATRN_u) ;
SGTATRN.F = A_UNITE(TGTATRN,mode1,1,UGTATRN);
 /* line 3251: */
SGTATRN.C = A68_TRUE;
VGTATRN = SGTATRN;
} 
else
{ 
WGTATRN.F = A_UNITE(XGTATRN,mode1,1,Ut);
 /* line 3252: */
 /* line 3253: */
WGTATRN.C = C;
VGTATRN = WGTATRN;
} 
} 
A_PROC_EXIT(fnbody_decl);
*ReturnedValue = (VGTATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  BHTATRN_decl_inner(A68_283  Decl, A68_414 * Tprocs, A68_394  *ReturnedValue, void *NonLocals)
#define NL(x) (((CHTATRN_decl_inner *)NonLocals)->x)
{ 
A68_INT  DHTATRN_depth;
A68_283  EHTATRN;  /* united object - for case conformity */
A68_176  FHTATRN_adecl;
A68_INT  GHTATRN_oldattrno;
A68_302  HHTATRN;  /* OPERATORS - simple index */
A68_181 * IHTATRN_adec;
A68_417  JHTATRN;  /* CALL */
A68_374  KHTATRN;  /* avoid structure result */
A68_374  LHTATRN_ac;
A68_INT  MHTATRN_newattrno;
A68_394  NHTATRN;  /* collateral clause result */
A68_283  OHTATRN;  /* OPERATORS - mode -> union mode */
A68_176  PHTATRN;  /* YIELD */
A68_394  QHTATRN;  /* clause result */
A68_394  RHTATRN;  /* collateral clause result */
A68_188  SHTATRN_idecl;
A68_INT  THTATRN_oldintno;
A68_303  UHTATRN;  /* OPERATORS - simple index */
A68_197 * VHTATRN_idec;
A68_INT  WHTATRN;  /* clause result */
A68_INT  XHTATRN_newintno;
A68_394  YHTATRN;  /* collateral clause result */
A68_283  ZHTATRN;  /* OPERATORS - mode -> union mode */
A68_188  AITATRN;  /* YIELD */
A68_394  BITATRN;  /* collateral clause result */
A68_201  CITATRN_tdecl;
A68_INT  DITATRN_oldtypeno;
A68_304  EITATRN;  /* OPERATORS - simple index */
A68_215 * FITATRN_tdec;
A68_428  GITATRN;  /* CALL */
A68_385  HITATRN;  /* avoid structure result */
A68_385  IITATRN_tc;
A68_INT  JITATRN_newtypeno;
A68_394  KITATRN;  /* collateral clause result */
A68_283  LITATRN;  /* OPERATORS - mode -> union mode */
A68_201  MITATRN;  /* YIELD */
A68_394  NITATRN;  /* collateral clause result */
A68_216  OITATRN_cdecl;
A68_INT  PITATRN_oldconstno;
A68_305  QITATRN;  /* OPERATORS - simple index */
A68_221 * RITATRN_cdec;
A68_INT  SITATRN;  /* clause result */
A68_INT  TITATRN_newconstno;
A68_394  UITATRN;  /* collateral clause result */
A68_283  VITATRN;  /* OPERATORS - mode -> union mode */
A68_216  WITATRN;  /* YIELD */
A68_394  XITATRN;  /* collateral clause result */
A68_253  YITATRN_fdecl;
A68_INT  ZITATRN_oldfnno;
A68_306  AJTATRN;  /* OPERATORS - simple index */
A68_298 * BJTATRN_fdec;
A68_BOOL  CJTATRN;  /* optbool result */
A68_394  DJTATRN;  /* collateral clause result */
A68_283  EJTATRN;  /* OPERATORS - mode -> union mode */
A68_253  FJTATRN;  /* YIELD */
A68_264  GJTATRN_nilmp;
A68_BOOL  HJTATRN_ignore;
A68_392  IJTATRN;  /* collateral clause result */
A68_580  JJTATRN;  /* collateral clause result */
A68_580 * KJTATRN;  /* YIELD */
A68_411  LJTATRN;  /* avoid structure result */
A68_411  MJTATRN_fc;
A68_INT  NJTATRN_newfnno;
A68_394  OJTATRN;  /* collateral clause result */
A68_283  PJTATRN;  /* OPERATORS - mode -> union mode */
A68_253  QJTATRN;  /* YIELD */
A68_394  RJTATRN;  /* collateral clause result */
A_PROC_ENTRY(decl_inner);
 /* line 3257: */
 /* line 3258: */
{ 
DHTATRN_depth = (*(&((*(&(NL(TZRATRN_diag)->Monitors)))->Depth)));
 /* line 3259: */
 /* line 3260: */
EHTATRN = Decl ;
switch ( EHTATRN.mode )
{ 
case 1: /* STRUCT(INT)  */
FHTATRN_adecl = (EHTATRN.data.mode1);
 /* line 3261: */
{ 
GHTATRN_oldattrno = FHTATRN_adecl.Attrno;
 /* line 3262: */
HHTATRN = (*(&(NL(TXRATRN_oldenv)->Attrs))) ;
IHTATRN_adec = (*(&A_VINDEX(HHTATRN,GHTATRN_oldattrno)));
 /* line 3263: */
JHTATRN = (*(&(AWLATRN_nulltprocs->Attrdec))) ;
A_CALLPROC(JHTATRN,(IHTATRN_adec, Tprocs, &KHTATRN),(IHTATRN_adec, Tprocs, &KHTATRN,(JHTATRN).nonlocals));
LHTATRN_ac = KHTATRN;
 /* line 3264: */
MHTATRN_newattrno = A_CALLPROC(NL(FQSATRN_add_envattr),(GHTATRN_oldattrno, DHTATRN_depth, LHTATRN_ac),(GHTATRN_oldattrno, DHTATRN_depth, LHTATRN_ac,(NL(FQSATRN_add_envattr)).nonlocals));
 /* line 3265: */
 /* line 3266: */
if ( (MHTATRN_newattrno!=GHTATRN_oldattrno) )
{ 
PHTATRN = (*UDAATRN_makeattrname(MHTATRN_newattrno)) ;
NHTATRN.D = A_UNITE(OHTATRN,mode1,1,PHTATRN);
 /* line 3267: */
NHTATRN.C = A68_TRUE;
QHTATRN = NHTATRN;
} 
else
{ 
RHTATRN.D = Decl;
 /* line 3268: */
 /* line 3269: */
 /* line 3270: */
RHTATRN.C = A68_FALSE;
QHTATRN = RHTATRN;
} 
} 
break;
case 2: /* STRUCT(INT)  */
SHTATRN_idecl = (EHTATRN.data.mode2);
 /* line 3271: */
{ 
THTATRN_oldintno = SHTATRN_idecl.Intno;
 /* line 3272: */
UHTATRN = (*(&(NL(TXRATRN_oldenv)->Ints))) ;
VHTATRN_idec = (*(&A_VINDEX(UHTATRN,THTATRN_oldintno)));
 /* line 3273: */
 /* line 3274: */
 /* line 3275: */
if ( ((*(&(VHTATRN_idec->Sort)))==QKAATRN_macpardec) )
{ 
 /* line 3276: */
 /* line 3277: */
WHTATRN = A_CALLPROC(NL(CHSATRN_add_envint),(THTATRN_oldintno, VHTATRN_idec),(THTATRN_oldintno, VHTATRN_idec,(NL(CHSATRN_add_envint)).nonlocals));
} 
else
{ 
WHTATRN = THTATRN_oldintno;
} 
XHTATRN_newintno = WHTATRN;
 /* line 3278: */
 /* line 3279: */
if ( (XHTATRN_newintno!=THTATRN_oldintno) )
{ 
AITATRN = (*OEAATRN_makefname(XHTATRN_newintno)) ;
YHTATRN.D = A_UNITE(ZHTATRN,mode2,2,AITATRN);
 /* line 3280: */
YHTATRN.C = A68_TRUE;
QHTATRN = YHTATRN;
} 
else
{ 
BITATRN.D = Decl;
 /* line 3281: */
 /* line 3282: */
 /* line 3283: */
BITATRN.C = A68_FALSE;
QHTATRN = BITATRN;
} 
} 
break;
case 3: /* STRUCT(INT)  */
CITATRN_tdecl = (EHTATRN.data.mode3);
 /* line 3284: */
{ 
DITATRN_oldtypeno = CITATRN_tdecl.Typeno;
 /* line 3285: */
EITATRN = (*(&(NL(TXRATRN_oldenv)->Types))) ;
FITATRN_tdec = (*(&A_VINDEX(EITATRN,DITATRN_oldtypeno)));
 /* line 3286: */
GITATRN = (*(&(AWLATRN_nulltprocs->Typedec))) ;
A_CALLPROC(GITATRN,(FITATRN_tdec, Tprocs, &HITATRN),(FITATRN_tdec, Tprocs, &HITATRN,(GITATRN).nonlocals));
IITATRN_tc = HITATRN;
 /* line 3287: */
JITATRN_newtypeno = A_CALLPROC(NL(ZNSATRN_add_envtype),(DITATRN_oldtypeno, DHTATRN_depth, IITATRN_tc),(DITATRN_oldtypeno, DHTATRN_depth, IITATRN_tc,(NL(ZNSATRN_add_envtype)).nonlocals));
 /* line 3288: */
 /* line 3289: */
if ( (JITATRN_newtypeno!=DITATRN_oldtypeno) )
{ 
MITATRN = (*IFAATRN_maketname(JITATRN_newtypeno)) ;
KITATRN.D = A_UNITE(LITATRN,mode3,3,MITATRN);
 /* line 3290: */
KITATRN.C = A68_TRUE;
QHTATRN = KITATRN;
} 
else
{ 
NITATRN.D = Decl;
 /* line 3291: */
 /* line 3292: */
 /* line 3293: */
NITATRN.C = A68_FALSE;
QHTATRN = NITATRN;
} 
} 
break;
case 4: /* STRUCT(INT)  */
OITATRN_cdecl = (EHTATRN.data.mode4);
 /* line 3294: */
{ 
PITATRN_oldconstno = OITATRN_cdecl.Constno;
 /* line 3295: */
QITATRN = (*(&(NL(TXRATRN_oldenv)->Consts))) ;
RITATRN_cdec = (*(&A_VINDEX(QITATRN,PITATRN_oldconstno)));
 /* line 3296: */
 /* line 3297: */
 /* line 3298: */
if ( ((*(&(RITATRN_cdec->Sort)))==QKAATRN_macpardec) )
{ 
 /* line 3299: */
 /* line 3300: */
SITATRN = A_CALLPROC(NL(HISATRN_add_envconst),(PITATRN_oldconstno, RITATRN_cdec),(PITATRN_oldconstno, RITATRN_cdec,(NL(HISATRN_add_envconst)).nonlocals));
} 
else
{ 
SITATRN = PITATRN_oldconstno;
} 
TITATRN_newconstno = SITATRN;
 /* line 3301: */
 /* line 3302: */
if ( (TITATRN_newconstno!=PITATRN_oldconstno) )
{ 
WITATRN = (*CGAATRN_makecname(TITATRN_newconstno)) ;
UITATRN.D = A_UNITE(VITATRN,mode4,4,WITATRN);
 /* line 3303: */
UITATRN.C = A68_TRUE;
QHTATRN = UITATRN;
} 
else
{ 
XITATRN.D = Decl;
 /* line 3304: */
 /* line 3305: */
 /* line 3306: */
XITATRN.C = A68_FALSE;
QHTATRN = XITATRN;
} 
} 
break;
case 5: /* STRUCT(INT)  */
YITATRN_fdecl = (EHTATRN.data.mode5);
 /* line 3307: */
{ 
ZITATRN_oldfnno = YITATRN_fdecl.Fnno;
 /* line 3308: */
AJTATRN = (*(&(NL(TXRATRN_oldenv)->Fns))) ;
BJTATRN_fdec = (*(&A_VINDEX(AJTATRN,ZITATRN_oldfnno)));
 /* line 3309: */
CJTATRN = (*(&(BJTATRN_fdec->Macro)));
if ( CJTATRN )
{ /* line 3310: */
CJTATRN = !((*(&(BJTATRN_fdec->Sort)))==QKAATRN_macpardec);
}
if ( CJTATRN )
{ 
FJTATRN = (*LHAATRN_makefnname((-ZITATRN_oldfnno))) ;
DJTATRN.D = A_UNITE(EJTATRN,mode5,5,FJTATRN);
 /* line 3312: */
DJTATRN.C = A68_TRUE;
QHTATRN = DJTATRN;
} 
else
{ 
GJTATRN_nilmp = ABAATRN_nilmacparams;
 /* line 3313: */
HJTATRN_ignore = A68_FALSE;
 /* line 3314: */
 /* line 3315: */
IJTATRN.M = GJTATRN_nilmp;
IJTATRN.C = A68_FALSE;
 /* line 3316: */
 /* line 3317: */
JJTATRN.Old = NL(TXRATRN_oldenv);
JJTATRN.Subs_ampar = NL(AASATRN_subs_ampar);
JJTATRN.Subs_fmpar = NL(KASATRN_subs_fmpar);
 /* line 3318: */
JJTATRN.Subs_tmpar = NL(WASATRN_subs_tmpar);
JJTATRN.Subs_cmpar = NL(LBSATRN_subs_cmpar);
JJTATRN.Subs_fnmpar = NL(WBSATRN_subs_fnmpar);
JJTATRN.Repldecs = (*NL(VXRATRN_repldecs));
 /* line 3319: */
JJTATRN.Mptable = (*NL(TYRATRN_mptable));
JJTATRN.Newenvattrnos = NL(WXRATRN_newenvattrnos);
JJTATRN.Newenvtypenos = NL(XXRATRN_newenvtypenos);
JJTATRN.Newenvfnnos = NL(YXRATRN_newenvfnnos);
 /* line 3320: */
KJTATRN = A_HEAP(A68_580 ) ;
(*KJTATRN) = JJTATRN ;
A_CALLPROC(NL(QXRATRN_fndec_expand),(BJTATRN_fdec, Tprocs, IJTATRN, (A68_584 *)A68_NIL, XWQATRN_nilenviron, KJTATRN, (&HJTATRN_ignore), (*(&(NL(TZRATRN_diag)->Monitors))), &LJTATRN),(BJTATRN_fdec, Tprocs, IJTATRN, (A68_584 *)A68_NIL, XWQATRN_nilenviron, KJTATRN, (&HJTATRN_ignore), (*(&(NL(TZRATRN_diag)->Monitors))), &LJTATRN,(NL(QXRATRN_fndec_expand)).nonlocals));
MJTATRN_fc = LJTATRN;
 /* line 3321: */
 /* line 3322: */
NJTATRN_newfnno = A_CALLPROC(NL(NLSATRN_add_envfn),(ZITATRN_oldfnno, DHTATRN_depth, MJTATRN_fc.F, A68_TRUE, MJTATRN_fc.C),(ZITATRN_oldfnno, DHTATRN_depth, MJTATRN_fc.F, A68_TRUE, MJTATRN_fc.C,(NL(NLSATRN_add_envfn)).nonlocals));
 /* line 3323: */
 /* line 3324: */
if ( (NJTATRN_newfnno!=ZITATRN_oldfnno) )
{ 
QJTATRN = (*LHAATRN_makefnname(NJTATRN_newfnno)) ;
OJTATRN.D = A_UNITE(PJTATRN,mode5,5,QJTATRN);
 /* line 3325: */
OJTATRN.C = A68_TRUE;
QHTATRN = OJTATRN;
} 
else
{ 
RJTATRN.D = Decl;
 /* line 3326: */
 /* line 3327: */
 /* line 3328: */
 /* line 3329: */
 /* line 3330: */
RJTATRN.C = A68_FALSE;
QHTATRN = RJTATRN;
} 
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(decl_inner);
*ReturnedValue = (QHTATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  UJTATRN_series_decl(A68_251 * Ser, A68_407  *ReturnedValue, void *NonLocals)
#define NL(x) (((VJTATRN_series_decl *)NonLocals)->x)
{ 
A68_407  WJTATRN;  /* collateral clause result */
A68_407  XJTATRN;  /* clause result */
A68_407  YJTATRN;  /* avoid structure result */
A68_407  ZJTATRN_rest;
A68_251 * AKTATRN_decs;
A68_252  BKTATRN;  /* united object - for case conformity */
A68_407  CKTATRN;  /* collateral clause result */
A68_259 * DKTATRN_rj;
A68_251 * EKTATRN_newser;
A68_251 ** FKTATRN_serptr;
A68_261 * GKTATRN_js;
A68_251  HKTATRN;  /* collateral clause result */
A68_252  IKTATRN;  /* OPERATORS - mode -> union mode */
A68_258 * JKTATRN;  /* YIELD */
A68_251 * KKTATRN;  /* YIELD */
A68_283  LKTATRN_decl;
A68_644  MKTATRN;  /* avoid structure result */
A68_644  NKTATRN_sc;
A68_407  OKTATRN_decsc;
A68_407  PKTATRN;  /* collateral clause result */
A68_251  QKTATRN;  /* collateral clause result */
A68_251 * RKTATRN;  /* YIELD */
A68_407  SKTATRN;  /* collateral clause result */
A_PROC_ENTRY(series_decl);
 /* line 3335: */
 /* line 3336: */
{ 
 /* line 3337: */
if ( (Ser==SAAATRN_nilseries) )
{ 
WJTATRN.S = Ser;
 /* line 3338: */
WJTATRN.C = A68_FALSE;
XJTATRN = WJTATRN;
} 
else
{ 
A_CALLPROC(NL(TJTATRN_series_decl),((*(&(Ser->Rest))), &YJTATRN),((*(&(Ser->Rest))), &YJTATRN,(NL(TJTATRN_series_decl)).nonlocals));
ZJTATRN_rest = YJTATRN;
 /* line 3339: */
AKTATRN_decs = ZJTATRN_rest.S;
 /* line 3340: */
 /* line 3341: */
 /* line 3342: */
BKTATRN = (*(&(Ser->Step))) ;
switch ( BKTATRN.mode )
{ 
case 6: /* REF STRUCT(MODE184,REF MODE268)  */
CKTATRN.S = AKTATRN_decs;
 /* line 3343: */
CKTATRN.C = A68_TRUE;
break;
case 7: /* REF STRUCT(MODE184,REF MODE268)  */
CKTATRN.S = AKTATRN_decs;
 /* line 3344: */
CKTATRN.C = A68_TRUE;
break;
case 11: /* REF STRUCT(REF MODE196,REF MODE261)  */
DKTATRN_rj = (BKTATRN.data.mode11);
 /* line 3345: */
{ 
EKTATRN_newser = SAAATRN_nilseries;
 /* line 3346: */
FKTATRN_serptr = (&EKTATRN_newser);
 /* line 3347: */
GKTATRN_js = (*(&(DKTATRN_rj->Joins)));
 /* line 3348: */
for ( ;; )
{ 
 /* line 3349: */
if ( !((GKTATRN_js!=RAAATRN_niljoins)) ) break;
 /* line 3350: */
JKTATRN = (&(GKTATRN_js->Join)) ;
HKTATRN.Step = A_UNITE(IKTATRN,mode10,10,JKTATRN);
HKTATRN.Rest = SAAATRN_nilseries;
KKTATRN = A_HEAP(A68_251 ) ;
(*KKTATRN) = HKTATRN ;
(*FKTATRN_serptr) = KKTATRN;
 /* line 3351: */
FKTATRN_serptr = (&((*FKTATRN_serptr)->Rest));
 /* line 3352: */
 /* line 3353: */
GKTATRN_js = (*(&(GKTATRN_js->Rest)));
}
 /* line 3354: */
(*FKTATRN_serptr) = AKTATRN_decs;
 /* line 3355: */
CKTATRN.S = EKTATRN_newser;
 /* line 3356: */
 /* line 3357: */
CKTATRN.C = A68_TRUE;
} 
break;
case 1: /* STRUCT(INT)  */
case 2: /* STRUCT(INT)  */
case 3: /* STRUCT(INT)  */
case 4: /* STRUCT(INT)  */
case 5: /* STRUCT(INT)  */
A_UNCPY(LKTATRN_decl,BKTATRN);
 /* line 3358: */
{ 
A_CALLPROC(NL(KETATRN_position_decls),(LKTATRN_decl, (A68_270 *)A68_NIL, AKTATRN_decs, A68_FALSE, &MKTATRN),(LKTATRN_decl, (A68_270 *)A68_NIL, AKTATRN_decs, A68_FALSE, &MKTATRN,(NL(KETATRN_position_decls)).nonlocals));
NKTATRN_sc = MKTATRN;
 /* line 3359: */
CKTATRN.S = NKTATRN_sc.Ser;
 /* line 3360: */
 /* line 3361: */
CKTATRN.C = NKTATRN_sc.C;
} 
break;
default: 
CKTATRN.S = AKTATRN_decs;
 /* line 3362: */
CKTATRN.C = A68_FALSE;
break;
} 
OKTATRN_decsc = CKTATRN;
 /* line 3363: */
 /* line 3364: */
 /* line 3365: */
if ( OKTATRN_decsc.C )
{ 
 /* line 3366: */
XJTATRN = OKTATRN_decsc;
} 
else
{ 
if ( ZJTATRN_rest.C )
{ 
QKTATRN.Step = (*(&(Ser->Step)));
QKTATRN.Rest = ZJTATRN_rest.S;
RKTATRN = A_HEAP(A68_251 ) ;
(*RKTATRN) = QKTATRN ;
PKTATRN.S = RKTATRN;
 /* line 3367: */
PKTATRN.C = A68_TRUE;
XJTATRN = PKTATRN;
} 
else
{ 
SKTATRN.S = Ser;
 /* line 3368: */
 /* line 3369: */
 /* line 3370: */
SKTATRN.C = A68_FALSE;
XJTATRN = SKTATRN;
} 
} 
} 
} 
A_PROC_EXIT(series_decl);
*ReturnedValue = (XJTATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  VKTATRN_sequence_decl(A68_270 * Seq, A68_402  *ReturnedValue, void *NonLocals)
#define NL(x) (((WKTATRN_sequence_decl *)NonLocals)->x)
{ 
A68_402  XKTATRN;  /* collateral clause result */
A68_402  YKTATRN;  /* clause result */
A68_402  ZKTATRN;  /* avoid structure result */
A68_402  ALTATRN_rest;
A68_270 * BLTATRN_decs;
A68_271  CLTATRN;  /* united object - for case conformity */
A68_402  DLTATRN;  /* collateral clause result */
A68_283  ELTATRN_decl;
A68_644  FLTATRN;  /* avoid structure result */
A68_644  GLTATRN_sc;
A68_402  HLTATRN_decsc;
A68_402  ILTATRN;  /* collateral clause result */
A68_270  JLTATRN;  /* collateral clause result */
A68_270 * KLTATRN;  /* YIELD */
A68_402  LLTATRN;  /* collateral clause result */
A_PROC_ENTRY(sequence_decl);
 /* line 3373: */
 /* line 3376: */
{ 
 /* line 3377: */
if ( (Seq==QAAATRN_nilsequence) )
{ 
XKTATRN.S = Seq;
 /* line 3378: */
XKTATRN.C = A68_FALSE;
YKTATRN = XKTATRN;
} 
else
{ 
A_CALLPROC(NL(UKTATRN_sequence_decl),((*(&(Seq->Rest))), &ZKTATRN),((*(&(Seq->Rest))), &ZKTATRN,(NL(UKTATRN_sequence_decl)).nonlocals));
ALTATRN_rest = ZKTATRN;
 /* line 3379: */
BLTATRN_decs = ALTATRN_rest.S;
 /* line 3380: */
 /* line 3381: */
 /* line 3382: */
CLTATRN = (*(&(Seq->Step))) ;
switch ( CLTATRN.mode )
{ 
case 6: /* REF STRUCT(MODE184,REF MODE268)  */
DLTATRN.S = BLTATRN_decs;
 /* line 3383: */
DLTATRN.C = A68_TRUE;
break;
case 7: /* REF STRUCT(MODE184,REF MODE268)  */
DLTATRN.S = BLTATRN_decs;
 /* line 3384: */
DLTATRN.C = A68_TRUE;
break;
case 1: /* STRUCT(INT)  */
case 2: /* STRUCT(INT)  */
case 3: /* STRUCT(INT)  */
case 4: /* STRUCT(INT)  */
case 5: /* STRUCT(INT)  */
A_UNCPY(ELTATRN_decl,CLTATRN);
 /* line 3385: */
{ 
A_CALLPROC(NL(KETATRN_position_decls),(ELTATRN_decl, BLTATRN_decs, (A68_251 *)A68_NIL, A68_TRUE, &FLTATRN),(ELTATRN_decl, BLTATRN_decs, (A68_251 *)A68_NIL, A68_TRUE, &FLTATRN,(NL(KETATRN_position_decls)).nonlocals));
GLTATRN_sc = FLTATRN;
 /* line 3386: */
DLTATRN.S = GLTATRN_sc.Seq;
 /* line 3387: */
 /* line 3388: */
DLTATRN.C = GLTATRN_sc.C;
} 
break;
default: 
DLTATRN.S = QAAATRN_nilsequence;
 /* line 3389: */
DLTATRN.C = A68_FALSE;
break;
} 
HLTATRN_decsc = DLTATRN;
 /* line 3390: */
 /* line 3391: */
 /* line 3392: */
if ( HLTATRN_decsc.C )
{ 
 /* line 3393: */
YKTATRN = HLTATRN_decsc;
} 
else
{ 
if ( ALTATRN_rest.C )
{ 
JLTATRN.Step = (*(&(Seq->Step)));
JLTATRN.Rest = ALTATRN_rest.S;
KLTATRN = A_HEAP(A68_270 ) ;
(*KLTATRN) = JLTATRN ;
ILTATRN.S = KLTATRN;
 /* line 3394: */
ILTATRN.C = A68_TRUE;
YKTATRN = ILTATRN;
} 
else
{ 
LLTATRN.S = Seq;
 /* line 3395: */
 /* line 3396: */
 /* line 3397: */
LLTATRN.C = A68_FALSE;
YKTATRN = LLTATRN;
} 
} 
} 
} 
A_PROC_EXIT(sequence_decl);
*ReturnedValue = (YKTATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  PLTATRN_body_unit(A68_222  U, A68_414 * Tprocs, A68_390  *ReturnedValue, void *NonLocals)
#define NL(x) (((QLTATRN_body_unit *)NonLocals)->x)
{ 
A68_BOOL  RLTATRN_bodyseries;
A68_512  SLTATRN;  /* collateral clause result */
A68_512 * TLTATRN;  /* YIELD */
A68_433  ULTATRN;  /* CALL */
A68_390  VLTATRN;  /* avoid structure result */
A68_390  WLTATRN_uc;
A68_390  XLTATRN;  /* clause result */
A_PROC_ENTRY(body_unit);
 /* line 3400: */
 /* line 3401: */
{ 
RLTATRN_bodyseries = (*NL(VYRATRN_is_fnbody));
 /* line 3402: */
 /* line 3403: */
if ( (*NL(VYRATRN_is_fnbody)) )
{ 
 /* line 3404: */
(*NL(VYRATRN_is_fnbody)) = A68_FALSE;
} 
else
{ 
SLTATRN.Nameno = (-1);
SLTATRN.Joinup = COPATRN_nulljoinup;
 /* line 3405: */
SLTATRN.Rest = (*NL(XYRATRN_joinlist));
TLTATRN = A_HEAP(A68_512 ) ;
(*TLTATRN) = SLTATRN ;
(*NL(XYRATRN_joinlist)) = TLTATRN;
} 
 /* line 3407: */
ULTATRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(ULTATRN,(U, Tprocs, &VLTATRN),(U, Tprocs, &VLTATRN,(ULTATRN).nonlocals));
WLTATRN_uc = VLTATRN;
 /* line 3409: */
 /* line 3410: */
if ( !RLTATRN_bodyseries )
{ 
TVPATRN_mark_join(NL(WYRATRN_joinup), NL(OZRATRN_newclose), NL(TZRATRN_diag));
 /* line 3411: */
 /* line 3412: */
(*NL(XYRATRN_joinlist)) = IXPATRN_join_completeness((*NL(XYRATRN_joinlist)), NL(OZRATRN_newclose), NL(TZRATRN_diag));
} 
 /* line 3413: */
 /* line 3414: */
XLTATRN = WLTATRN_uc;
} 
A_PROC_EXIT(body_unit);
*ReturnedValue = (XLTATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  BMTATRN_useries_expand(A68_245 * Us, A68_414 * Tprocs, A68_390  *ReturnedValue, void *NonLocals)
#define NL(x) (((CMTATRN_useries_expand *)NonLocals)->x)
{ 
A68_222  DMTATRN;  /* OPERATORS - mode -> union mode */
A68_390  EMTATRN;  /* avoid structure result */
A68_390  FMTATRN_uc;
A68_222  GMTATRN;  /* united object - for case conformity */
A68_245 * HMTATRN_user;
A68_407  IMTATRN;  /* avoid structure result */
A68_407  JMTATRN_sc;
A68_390  KMTATRN;  /* collateral clause result */
A68_245  LMTATRN;  /* collateral clause result */
A68_245 * MMTATRN;  /* YIELD */
A68_222  NMTATRN;  /* OPERATORS - mode -> union mode */
A68_390  OMTATRN;  /* clause result */
A68_390  RMTATRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(useries_expand);
 /* line 3417: */
 /* line 3418: */
{ 
A_CALLPROC(NL(OLTATRN_body_unit),(A_UNITE(DMTATRN,mode29,29,Us), Tprocs, &EMTATRN),(A_UNITE(DMTATRN,mode29,29,Us), Tprocs, &EMTATRN,(NL(OLTATRN_body_unit)).nonlocals));
FMTATRN_uc = EMTATRN;
 /* line 3419: */
 /* line 3420: */
GMTATRN = FMTATRN_uc.U ;
switch ( GMTATRN.mode )
{ 
case 29: /* REF STRUCT(REF MODE251,MODE222)  */
HMTATRN_user = (GMTATRN.data.mode29);
 /* line 3421: */
{ 
A_CALLPROC(NL(TJTATRN_series_decl),((*(&(HMTATRN_user->Body))), &IMTATRN),((*(&(HMTATRN_user->Body))), &IMTATRN,(NL(TJTATRN_series_decl)).nonlocals));
JMTATRN_sc = IMTATRN;
 /* line 3422: */
 /* line 3423: */
if ( JMTATRN_sc.C )
{ 
LMTATRN.Body = JMTATRN_sc.S;
LMTATRN.Output = (*(&(HMTATRN_user->Output)));
MMTATRN = A_HEAP(A68_245 ) ;
(*MMTATRN) = LMTATRN ;
KMTATRN.U = A_UNITE(NMTATRN,mode29,29,MMTATRN);
 /* line 3424: */
 /* line 3425: */
KMTATRN.C = A68_TRUE;
OMTATRN = KMTATRN;
} 
else
{ 
 /* line 3426: */
 /* line 3427: */
OMTATRN = FMTATRN_uc;
} 
} 
break;
default: 
NKDAOST_sysfault(QMTATRN);
 /* line 3428: */
 /* line 3429: */
OMTATRN = RMTATRN;
break;
} 
} 
A_PROC_EXIT(useries_expand);
*ReturnedValue = (OMTATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  VMTATRN_usequence_expand(A68_244 * Usq, A68_414 * Tprocs, A68_390  *ReturnedValue, void *NonLocals)
#define NL(x) (((WMTATRN_usequence_expand *)NonLocals)->x)
{ 
A68_222  XMTATRN;  /* OPERATORS - mode -> union mode */
A68_390  YMTATRN;  /* avoid structure result */
A68_390  ZMTATRN_uc;
A68_222  ANTATRN;  /* united object - for case conformity */
A68_244 * BNTATRN_useq;
A68_402  CNTATRN;  /* avoid structure result */
A68_402  DNTATRN_sc;
A68_390  ENTATRN;  /* collateral clause result */
A68_244  FNTATRN;  /* collateral clause result */
A68_244 * GNTATRN;  /* YIELD */
A68_222  HNTATRN;  /* OPERATORS - mode -> union mode */
A68_390  INTATRN;  /* clause result */
A68_390  LNTATRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(usequence_expand);
 /* line 3432: */
 /* line 3433: */
{ 
A_CALLPROC(NL(OLTATRN_body_unit),(A_UNITE(XMTATRN,mode28,28,Usq), Tprocs, &YMTATRN),(A_UNITE(XMTATRN,mode28,28,Usq), Tprocs, &YMTATRN,(NL(OLTATRN_body_unit)).nonlocals));
ZMTATRN_uc = YMTATRN;
 /* line 3434: */
 /* line 3435: */
ANTATRN = ZMTATRN_uc.U ;
switch ( ANTATRN.mode )
{ 
case 28: /* REF STRUCT(REF MODE270,MODE222)  */
BNTATRN_useq = (ANTATRN.data.mode28);
 /* line 3436: */
{ 
A_CALLPROC(NL(UKTATRN_sequence_decl),((*(&(BNTATRN_useq->Body))), &CNTATRN),((*(&(BNTATRN_useq->Body))), &CNTATRN,(NL(UKTATRN_sequence_decl)).nonlocals));
DNTATRN_sc = CNTATRN;
 /* line 3437: */
 /* line 3438: */
if ( DNTATRN_sc.C )
{ 
FNTATRN.Body = DNTATRN_sc.S;
FNTATRN.Output = (*(&(BNTATRN_useq->Output)));
GNTATRN = A_HEAP(A68_244 ) ;
(*GNTATRN) = FNTATRN ;
ENTATRN.U = A_UNITE(HNTATRN,mode28,28,GNTATRN);
 /* line 3439: */
 /* line 3440: */
ENTATRN.C = A68_TRUE;
INTATRN = ENTATRN;
} 
else
{ 
 /* line 3441: */
 /* line 3442: */
INTATRN = ZMTATRN_uc;
} 
} 
break;
default: 
NKDAOST_sysfault(KNTATRN);
 /* line 3443: */
 /* line 3444: */
INTATRN = LNTATRN;
break;
} 
} 
A_PROC_EXIT(usequence_expand);
*ReturnedValue = (INTATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  PNTATRN_urow_expand(A68_236 * Urow, A68_414 * Tprocs, A68_390  *ReturnedValue, void *NonLocals)
#define NL(x) (((QNTATRN_urow_expand *)NonLocals)->x)
{ 
A68_418  RNTATRN;  /* CALL */
A68_375  SNTATRN;  /* avoid structure result */
A68_375  TNTATRN_fc;
A68_433  UNTATRN;  /* CALL */
A68_390  VNTATRN;  /* avoid structure result */
A68_390  WNTATRN_uc;
A68_INT  XNTATRN_size;
A68_516  ZNTATRN_generator;   /* proc value of non-global proc */
A68_509  EOTATRN;  /* avoid structure result */
A68_509  FOTATRN_row;
A68_510 ** GOTATRN_elem;
A68_INT  HOTATRN;  /* forall loop counter */
A68_BOOL  IOTATRN;  /* optbool result */
A68_237 * JOTATRN_newbody;
A68_INT  KOTATRN;  /* to part of loop */
A68_INT  LOTATRN;  /* loop control */
A68_237  MOTATRN;  /* collateral clause result */
A68_237 * NOTATRN;  /* YIELD */
A68_390  OOTATRN;  /* collateral clause result */
A68_222  POTATRN;  /* OPERATORS - mode -> union mode */
A68_390  QOTATRN;  /* clause result */
A68_BOOL  ROTATRN;  /* optbool result */
A68_390  SOTATRN;  /* collateral clause result */
A68_236  TOTATRN;  /* collateral clause result */
A68_236 * UOTATRN;  /* YIELD */
A68_222  VOTATRN;  /* OPERATORS - mode -> union mode */
A68_390  WOTATRN;  /* collateral clause result */
A68_222  XOTATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(urow_expand);
 /* line 3448: */
 /* line 3449: */
{ 
RNTATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(RNTATRN,((*(&(Urow->Size))), Tprocs, &SNTATRN),((*(&(Urow->Size))), Tprocs, &SNTATRN,(RNTATRN).nonlocals));
TNTATRN_fc = SNTATRN;
 /* line 3450: */
UNTATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(UNTATRN,((*(&(Urow->Elem))), Tprocs, &VNTATRN),((*(&(Urow->Elem))), Tprocs, &VNTATRN,(UNTATRN).nonlocals));
WNTATRN_uc = VNTATRN;
 /* line 3451: */
XNTATRN_size = XOMATRN_int(TNTATRN_fc.F);
 /* line 3452: */
A_CLOSURE( ZNTATRN_generator, AOTATRN_generator, BOTATRN_generator );
(( BOTATRN_generator * ) ( ZNTATRN_generator.nonlocals )) -> XNTATRN_size = XNTATRN_size;
A_CALLPROC(ZNTATRN_generator,(A68_FALSE, &EOTATRN),(A68_FALSE, &EOTATRN,(ZNTATRN_generator).nonlocals));
FOTATRN_row = EOTATRN;
 /* line 3453: */
HOTATRN = FOTATRN_row.upb -1;
GOTATRN_elem = FOTATRN_row.data;
for (;HOTATRN-- >= 0;
(GOTATRN_elem++
) )
{
(*GOTATRN_elem) = (*NL(WYRATRN_joinup));
}
 /* line 3454: */
(*NL(WYRATRN_joinup)) = FOPATRN_makejoinrow(FOTATRN_row);
 /* line 3455: */
IOTATRN = A_CALLPROC(NL(WXQATRN_contains_diagnostics),(WNTATRN_uc.U),(WNTATRN_uc.U,(NL(WXQATRN_contains_diagnostics)).nonlocals));
if ( IOTATRN )
{ /* line 3456: */
IOTATRN = (XNTATRN_size>1);
}
if ( IOTATRN )
{ 
JOTATRN_newbody = IAAATRN_nilustr;
 /* line 3457: */
KOTATRN = XNTATRN_size;
for ( LOTATRN = 1;
LOTATRN <= KOTATRN;
LOTATRN += 1 )
{ 
MOTATRN.Elem = WNTATRN_uc.U;
MOTATRN.Rest = JOTATRN_newbody;
NOTATRN = A_HEAP(A68_237 ) ;
(*NOTATRN) = MOTATRN ;
JOTATRN_newbody = NOTATRN;
}
 /* line 3458: */
OOTATRN.U = A_UNITE(POTATRN,mode21,21,JOTATRN_newbody);
 /* line 3459: */
OOTATRN.C = A68_TRUE;
QOTATRN = OOTATRN;
} 
else
{ 
 /* line 3460: */
ROTATRN = TNTATRN_fc.C;
if ( ! ROTATRN )
{ROTATRN = WNTATRN_uc.C;
}
if ( ROTATRN )
{ 
TOTATRN.Size = TNTATRN_fc.F;
TOTATRN.Elem = WNTATRN_uc.U;
UOTATRN = A_HEAP(A68_236 ) ;
(*UOTATRN) = TOTATRN ;
SOTATRN.U = A_UNITE(VOTATRN,mode20,20,UOTATRN);
 /* line 3461: */
SOTATRN.C = A68_TRUE;
QOTATRN = SOTATRN;
} 
else
{ 
WOTATRN.U = A_UNITE(XOTATRN,mode20,20,Urow);
 /* line 3462: */
 /* line 3463: */
WOTATRN.C = A68_FALSE;
QOTATRN = WOTATRN;
} 
} 
} 
A_PROC_EXIT(urow_expand);
*ReturnedValue = (QOTATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  APTATRN_uname_nameno(A68_227 * Un, A68_390  *ReturnedValue, void *NonLocals)
#define NL(x) (((BPTATRN_uname_nameno *)NonLocals)->x)
{ 
A68_BOOL  CPTATRN;  /* optbool result */
A68_510  DPTATRN;  /* united object - for case conformity */
A68_507  EPTATRN_ji;
A68_510 * FPTATRN;  /* clause result */
A68_INT  GPTATRN;  /* YIELD */
A68_INT  HPTATRN_newnameno;
A68_390  IPTATRN;  /* collateral clause result */
A68_227  JPTATRN;  /* collateral clause result */
A68_227 * KPTATRN;  /* YIELD */
A68_222  LPTATRN;  /* OPERATORS - mode -> union mode */
A68_390  MPTATRN;  /* clause result */
A68_390  NPTATRN;  /* collateral clause result */
A68_222  OPTATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(uname_nameno);
 /* line 3466: */
 /* line 3467: */
{ 
(*NL(WYRATRN_joinup)) = JSPATRN_find_joinup((*(&(Un->Nameno))), (*NL(XYRATRN_joinlist)));
 /* line 3468: */
CPTATRN = ((*(&(Un->Sort)))==KKAATRN_usource);
if ( ! CPTATRN )
{ /* line 3469: */
CPTATRN = ((*(&(Un->Sort)))==LKAATRN_usink);
}
if ( CPTATRN )
{ 
ZOPATRN_coerce_joinup(NL(WYRATRN_joinup), ((*(&(Un->Sort)))==KKAATRN_usource));
 /* line 3470: */
 /* line 3471: */
DPTATRN = (**NL(WYRATRN_joinup)) ;
switch ( DPTATRN.mode )
{ 
case 3: /* STRUCT(REF MODE510,REF MODE510)  */
EPTATRN_ji = (DPTATRN.data.mode3);
 /* line 3472: */
 /* line 3473: */
if ( ((*(&(Un->Sort)))==KKAATRN_usource) )
{ 
 /* line 3474: */
FPTATRN = EPTATRN_ji.Source;
} 
else
{ 
 /* line 3475: */
FPTATRN = EPTATRN_ji.Sink;
} 
 /* line 3476: */
(*NL(WYRATRN_joinup)) = FPTATRN;
break;
default: 
 /* line 3477: */
/*SKIP*/;
break;
} 
} 
 /* line 3478: */
GPTATRN = (*(&(Un->Nameno))) ;
HPTATRN_newnameno = (*(&A_VINDEX(NL(EZRATRN_newnamenos),GPTATRN)));
 /* line 3479: */
 /* line 3480: */
if ( (HPTATRN_newnameno!=(*(&(Un->Nameno)))) )
{ 
JPTATRN.Sort = (*(&(Un->Sort)));
JPTATRN.Nameno = HPTATRN_newnameno;
KPTATRN = A_HEAP(A68_227 ) ;
(*KPTATRN) = JPTATRN ;
IPTATRN.U = A_UNITE(LPTATRN,mode11,11,KPTATRN);
 /* line 3481: */
IPTATRN.C = A68_TRUE;
MPTATRN = IPTATRN;
} 
else
{ 
NPTATRN.U = A_UNITE(OPTATRN,mode11,11,Un);
 /* line 3482: */
 /* line 3483: */
NPTATRN.C = A68_FALSE;
MPTATRN = NPTATRN;
} 
} 
A_PROC_EXIT(uname_nameno);
*ReturnedValue = (MPTATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  SPTATRN_ustr_joinup(A68_237 * Ust, A68_414 * Tprocs, A68_388  *ReturnedValue, void *NonLocals)
#define NL(x) (((TPTATRN_ustr_joinup *)NonLocals)->x)
{ 
A68_INT  UPTATRN_size;
A68_237 * VPTATRN_u;
A68_516  XPTATRN_generator;   /* proc value of non-global proc */
A68_509  CQTATRN;  /* avoid structure result */
A68_509  DQTATRN_row;
A68_BOOL  EQTATRN_changed;
A68_237 * FQTATRN_us;
A68_237 ** GQTATRN_ustrptr;
A68_INT  HQTATRN_index;
A68_433  IQTATRN;  /* CALL */
A68_390  JQTATRN;  /* avoid structure result */
A68_390  KQTATRN_uc;
A68_510 ** LQTATRN;  /* YIELD */
A68_237  MQTATRN;  /* collateral clause result */
A68_237 * NQTATRN;  /* YIELD */
A68_388  OQTATRN;  /* collateral clause result */
A68_388  PQTATRN;  /* clause result */
A68_388  QQTATRN;  /* collateral clause result */
A_PROC_ENTRY(ustr_joinup);
 /* line 3486: */
 /* line 3487: */
{ 
UPTATRN_size = 0;
 /* line 3488: */
VPTATRN_u = Ust;
 /* line 3489: */
for ( ;; )
{ 
if ( !((VPTATRN_u!=IAAATRN_nilustr)) ) break;
UPTATRN_size+=1;
VPTATRN_u = (*(&(VPTATRN_u->Rest)));
}
 /* line 3490: */
A_CLOSURE( XPTATRN_generator, YPTATRN_generator, ZPTATRN_generator );
(( ZPTATRN_generator * ) ( XPTATRN_generator.nonlocals )) -> UPTATRN_size = (&UPTATRN_size);
A_CALLPROC(XPTATRN_generator,(A68_FALSE, &CQTATRN),(A68_FALSE, &CQTATRN,(XPTATRN_generator).nonlocals));
DQTATRN_row = CQTATRN;
 /* line 3492: */
EQTATRN_changed = A68_FALSE;
 /* line 3493: */
FQTATRN_us = IAAATRN_nilustr;
GQTATRN_ustrptr = (&FQTATRN_us);
 /* line 3494: */
VPTATRN_u = Ust;
 /* line 3496: */
for ( HQTATRN_index = 1;;
HQTATRN_index += 1 ) 
{ 
 /* line 3497: */
if ( !((VPTATRN_u!=IAAATRN_nilustr)) ) break;
IQTATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(IQTATRN,((*(&(VPTATRN_u->Elem))), Tprocs, &JQTATRN),((*(&(VPTATRN_u->Elem))), Tprocs, &JQTATRN,(IQTATRN).nonlocals));
KQTATRN_uc = JQTATRN;
 /* line 3498: */
if ( KQTATRN_uc.C )
{ 
EQTATRN_changed = A68_TRUE;
} 
 /* line 3499: */
LQTATRN = (&A_VINDEX(DQTATRN_row,HQTATRN_index)) ;
(*LQTATRN) = (*NL(WYRATRN_joinup));
 /* line 3500: */
(*NL(WYRATRN_joinup)) = COPATRN_nulljoinup;
 /* line 3501: */
 /* line 3502: */
MQTATRN.Elem = KQTATRN_uc.U;
MQTATRN.Rest = IAAATRN_nilustr;
NQTATRN = A_HEAP(A68_237 ) ;
(*NQTATRN) = MQTATRN ;
GQTATRN_ustrptr = (&(((*GQTATRN_ustrptr) = NQTATRN)->Rest));
 /* line 3503: */
 /* line 3504: */
VPTATRN_u = (*(&(VPTATRN_u->Rest)));
}
 /* line 3505: */
(*NL(WYRATRN_joinup)) = FOPATRN_makejoinrow(DQTATRN_row);
 /* line 3506: */
if ( EQTATRN_changed )
{ 
OQTATRN.U = FQTATRN_us;
OQTATRN.C = A68_TRUE;
PQTATRN = OQTATRN;
} 
else
{ 
QQTATRN.U = Ust;
 /* line 3507: */
QQTATRN.C = A68_FALSE;
PQTATRN = QQTATRN;
} 
} 
A_PROC_EXIT(ustr_joinup);
*ReturnedValue = (PQTATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  UQTATRN_udyindex_joinup(A68_234 * Ud, A68_414 * Tprocs, A68_390  *ReturnedValue, void *NonLocals)
#define NL(x) (((VQTATRN_udyindex_joinup *)NonLocals)->x)
{ 
A68_433  WQTATRN;  /* CALL */
A68_390  XQTATRN;  /* avoid structure result */
A68_390  YQTATRN_udc;
A68_510 * ZQTATRN_jup;
A68_433  ARTATRN;  /* CALL */
A68_390  BRTATRN;  /* avoid structure result */
A68_390  CRTATRN_udic;
A68_200  DRTATRN;  /* avoid structure result */
A68_200  ERTATRN_ty;
A68_472  FRTATRN;  /* collateral clause result */
A68_215 * GRTATRN_prim;
A68_213  HRTATRN;  /* united object - for case conformity */
A68_212 * IRTATRN_ni;
A68_INT  JRTATRN_lwb;
A68_INT  KRTATRN_upb;
A68_BOOL  NRTATRN;  /* optbool result */
A68_390  ORTATRN;  /* collateral clause result */
A68_234  PRTATRN;  /* collateral clause result */
A68_234 * QRTATRN;  /* YIELD */
A68_222  RRTATRN;  /* OPERATORS - mode -> union mode */
A68_390  SRTATRN;  /* clause result */
A68_390  TRTATRN;  /* collateral clause result */
A68_222  URTATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(udyindex_joinup);
 /* line 3510: */
 /* line 3511: */
{ 
WQTATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(WQTATRN,((*(&(Ud->Unit))), Tprocs, &XQTATRN),((*(&(Ud->Unit))), Tprocs, &XQTATRN,(WQTATRN).nonlocals));
YQTATRN_udc = XQTATRN;
 /* line 3512: */
ZQTATRN_jup = (*NL(WYRATRN_joinup));
 /* line 3513: */
(*NL(WYRATRN_joinup)) = COPATRN_nulljoinup;
 /* line 3514: */
ARTATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(ARTATRN,((*(&(Ud->Index))), Tprocs, &BRTATRN),((*(&(Ud->Index))), Tprocs, &BRTATRN,(ARTATRN).nonlocals));
CRTATRN_udic = BRTATRN;
 /* line 3515: */
(*NL(WYRATRN_joinup)) = ZQTATRN_jup;
 /* line 3516: */
A_CALLPROC(NL(MTSATRN_set_unittype),((*(&(Ud->Index))), Tprocs),((*(&(Ud->Index))), Tprocs,(NL(MTSATRN_set_unittype)).nonlocals));
 /* line 3518: */
VUNATRN_unit_type( CRTATRN_udic.U, NL(LZRATRN_newfdec), NL(GXRATRN_newenv), &DRTATRN );
ERTATRN_ty = DRTATRN;
 /* line 3519: */
FRTATRN.Fdec = NL(LZRATRN_newfdec);
FRTATRN.Env = NL(GXRATRN_newenv);
GRTATRN_prim = LHQATRN_primtype(ERTATRN_ty, FRTATRN);
 /* line 3520: */
 /* line 3521: */
HRTATRN = (*(&(GRTATRN_prim->Body))) ;
switch ( HRTATRN.mode )
{ 
case 2: /* REF STRUCT(REF MODE26,MODE199)  */
IRTATRN_ni = (HRTATRN.data.mode2);
 /* line 3522: */
{ 
JRTATRN_lwb = XOMATRN_int((*(&((&(IRTATRN_ni->Range))->Lwb))));
 /* line 3523: */
KRTATRN_upb = XOMATRN_int((*(&((&(IRTATRN_ni->Range))->Upb))));
 /* line 3524: */
 /* line 3525: */
 /* line 3526: */
SSPATRN_joinup_trim(NL(WYRATRN_joinup), A68_FALSE, JRTATRN_lwb, KRTATRN_upb);
} 
break;
default: 
 /* line 3527: */
NKDAOST_sysfault(MRTATRN);
break;
} 
 /* line 3529: */
 /* line 3530: */
NRTATRN = YQTATRN_udc.C;
if ( ! NRTATRN )
{NRTATRN = CRTATRN_udic.C;
}
if ( NRTATRN )
{ 
PRTATRN.Unit = YQTATRN_udc.U;
PRTATRN.Index = CRTATRN_udic.U;
QRTATRN = A_HEAP(A68_234 ) ;
(*QRTATRN) = PRTATRN ;
ORTATRN.U = A_UNITE(RRTATRN,mode18,18,QRTATRN);
 /* line 3531: */
ORTATRN.C = A68_TRUE;
SRTATRN = ORTATRN;
} 
else
{ 
TRTATRN.U = A_UNITE(URTATRN,mode18,18,Ud);
 /* line 3532: */
 /* line 3533: */
TRTATRN.C = A68_FALSE;
SRTATRN = TRTATRN;
} 
} 
A_PROC_EXIT(udyindex_joinup);
*ReturnedValue = (SRTATRN);
return;
} 
#undef NL
 /* line 3537: */

A_STATIC A68_VOID  BSTATRN_uinst_joinup(A68_262  Inst, A68_222  Left, A68_222  Right, A68_BOOL  Udinst, A68_414 * Tprocs, A68_390  *ReturnedValue, void *NonLocals)
#define NL(x) (((CSTATRN_uinst_joinup *)NonLocals)->x)
{ 
A68_390  DSTATRN;  /* clause result */
A68_433  ESTATRN;  /* CALL */
A68_390  FSTATRN;  /* avoid structure result */
A68_222  GSTATRN;  /* OPERATORS - mode -> union mode */
A68_390  HSTATRN_luc;
A68_436  ISTATRN;  /* CALL */
A68_393  JSTATRN;  /* avoid structure result */
A68_393  KSTATRN_ic;
A68_433  LSTATRN;  /* CALL */
A68_390  MSTATRN;  /* avoid structure result */
A68_390  NSTATRN_ruc;
A68_BOOL  OSTATRN;  /* optbool result */
A68_390  PSTATRN;  /* collateral clause result */
A68_240  QSTATRN;  /* collateral clause result */
A68_240 * RSTATRN;  /* YIELD */
A68_222  SSTATRN;  /* OPERATORS - mode -> union mode */
A68_390  TSTATRN;  /* clause result */
A68_390  USTATRN;  /* collateral clause result */
A68_239  VSTATRN;  /* collateral clause result */
A68_239 * WSTATRN;  /* YIELD */
A68_222  XSTATRN;  /* OPERATORS - mode -> union mode */
A68_390  YSTATRN;  /* collateral clause result */
A68_222  ZSTATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(uinst_joinup);
 /* line 3538: */
 /* line 3539: */
{ 
 /* line 3540: */
if ( Udinst )
{ 
 /* line 3541: */
ESTATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(ESTATRN,(Left, Tprocs, &FSTATRN),(Left, Tprocs, &FSTATRN,(ESTATRN).nonlocals));
DSTATRN = FSTATRN;
} 
else
{ 
DSTATRN.U = A_UNITE(GSTATRN,mode34,34,(&FIAATRN_unull));
 /* line 3542: */
DSTATRN.C = A68_FALSE;
} 
HSTATRN_luc = DSTATRN;
 /* line 3543: */
TVPATRN_mark_join(NL(WYRATRN_joinup), NL(OZRATRN_newclose), NL(TZRATRN_diag));
 /* line 3544: */
ISTATRN = (*(&(Tprocs->Instance))) ;
A_CALLPROC(ISTATRN,(Inst, Tprocs, &JSTATRN),(Inst, Tprocs, &JSTATRN,(ISTATRN).nonlocals));
KSTATRN_ic = JSTATRN;
 /* line 3545: */
LSTATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(LSTATRN,(Right, Tprocs, &MSTATRN),(Right, Tprocs, &MSTATRN,(LSTATRN).nonlocals));
NSTATRN_ruc = MSTATRN;
 /* line 3546: */
TVPATRN_mark_join(NL(WYRATRN_joinup), NL(OZRATRN_newclose), NL(TZRATRN_diag));
 /* line 3548: */
OSTATRN = HSTATRN_luc.C;
if ( ! OSTATRN )
{OSTATRN = NSTATRN_ruc.C;
}
 /* line 3549: */
if ( ! OSTATRN )
{OSTATRN = KSTATRN_ic.C;
}
if ( OSTATRN )
{ 
 /* line 3550: */
if ( Udinst )
{ 
QSTATRN.Left = HSTATRN_luc.U;
QSTATRN.Inst = KSTATRN_ic.I;
QSTATRN.Right = NSTATRN_ruc.U;
RSTATRN = A_HEAP(A68_240 ) ;
(*RSTATRN) = QSTATRN ;
PSTATRN.U = A_UNITE(SSTATRN,mode24,24,RSTATRN);
 /* line 3551: */
PSTATRN.C = A68_TRUE;
TSTATRN = PSTATRN;
} 
else
{ 
VSTATRN.Inst = KSTATRN_ic.I;
VSTATRN.Right = NSTATRN_ruc.U;
WSTATRN = A_HEAP(A68_239 ) ;
(*WSTATRN) = VSTATRN ;
USTATRN.U = A_UNITE(XSTATRN,mode23,23,WSTATRN);
 /* line 3552: */
 /* line 3553: */
USTATRN.C = A68_TRUE;
TSTATRN = USTATRN;
} 
} 
else
{ 
YSTATRN.U = A_UNITE(ZSTATRN,mode34,34,(&FIAATRN_unull));
 /* line 3554: */
 /* line 3555: */
YSTATRN.C = A68_FALSE;
TSTATRN = YSTATRN;
} 
} 
A_PROC_EXIT(uinst_joinup);
*ReturnedValue = (TSTATRN);
return;
} 
#undef NL
 /* line 3559: */

A_STATIC A68_VOID  FTTATRN_uchoices(A68_282 * U, A68_414 * Tprocs, A68_200  Iptype, A68_237 * Tests, A68_389  *ReturnedValue, void *NonLocals)
#define NL(x) (((GTTATRN_uchoices *)NonLocals)->x)
{ 
A68_389  HTTATRN;  /* collateral clause result */
A68_389  ITTATRN;  /* clause result */
A68_433  KTTATRN;  /* CALL */
A68_390  LTTATRN;  /* avoid structure result */
A68_390  JTTATRN_test;
A68_237 * MTTATRN;  /* clause result */
A68_237 * NTTATRN_newtests;
A68_390  OTTATRN;  /* collateral clause result */
A68_222  PTTATRN;  /* OPERATORS - mode -> union mode */
A68_433  QTTATRN;  /* CALL */
A68_390  RTTATRN;  /* avoid structure result */
A68_390  STTATRN_ans;
A68_237  TTTATRN;  /* collateral clause result */
A68_237 * UTTATRN;  /* YIELD */
A68_389  VTTATRN;  /* avoid structure result */
A68_389  WTTATRN_rest;
A68_BOOL  XTTATRN;  /* optbool result */
A68_389  YTTATRN;  /* collateral clause result */
A68_282  ZTTATRN;  /* collateral clause result */
A68_282 * AUTATRN;  /* YIELD */
A68_389  BUTATRN;  /* collateral clause result */
A_PROC_ENTRY(uchoices);
 /* line 3560: */
 /* line 3561: */
{ 
 /* line 3562: */
if ( (U==JAAATRN_niluchoices) )
{ 
HTTATRN.U = U;
 /* line 3563: */
HTTATRN.C = A68_FALSE;
ITTATRN = HTTATRN;
} 
else
{ 
VSOATRN_chooser_const = A68_TRUE;
 /* line 3564: */
KTTATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(KTTATRN,((*(&(U->Test))), Tprocs, &LTTATRN),((*(&(U->Test))), Tprocs, &LTTATRN,(KTTATRN).nonlocals));
JTTATRN_test = LTTATRN;
 /* line 3565: */
(*NL(WYRATRN_joinup)) = COPATRN_nulljoinup;
 /* line 3566: */
VSOATRN_chooser_const = A68_FALSE;
 /* line 3567: */
 /* line 3568: */
if ( ((*(&(U->Sort)))==XIAATRN_elseofchoice) )
{ 
MTTATRN = IAAATRN_nilustr;
} 
else
{ 
MTTATRN = Tests;
} 
NTTATRN_newtests = MTTATRN;
 /* line 3569: */
 /* line 3570: */
if ( NGQATRN_const_check(SFQATRN_chooser, (*(&((&JTTATRN_test)->U))), NL(OZRATRN_newclose), NL(TZRATRN_diag)) )
{ 
 /* line 3571: */
if ( (*(&(U->Check))) )
{ 
 /* line 3572: */
 /* line 3573: */
 /* line 3574: */
BHQATRN_choosers_check(Iptype, (*(&((&JTTATRN_test)->U))), NTTATRN_newtests, NL(OZRATRN_newclose), NL(TZRATRN_diag));
} 
} 
else
{ 
OTTATRN.U = A_UNITE(PTTATRN,mode34,34,(&FIAATRN_unull));
 /* line 3575: */
OTTATRN.C = A68_TRUE;
JTTATRN_test = OTTATRN;
} 
 /* line 3576: */
QTTATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(QTTATRN,((*(&(U->Output))), Tprocs, &RTTATRN),((*(&(U->Output))), Tprocs, &RTTATRN,(QTTATRN).nonlocals));
STTATRN_ans = RTTATRN;
 /* line 3577: */
(*NL(WYRATRN_joinup)) = COPATRN_nulljoinup;
 /* line 3579: */
TTTATRN.Elem = (*(&((&JTTATRN_test)->U)));
TTTATRN.Rest = NTTATRN_newtests;
UTTATRN = A_HEAP(A68_237 ) ;
(*UTTATRN) = TTTATRN ;
NTTATRN_newtests = UTTATRN;
 /* line 3580: */
A_CALLPROC(NL(ETTATRN_uchoices),((*(&(U->Rest))), Tprocs, Iptype, NTTATRN_newtests, &VTTATRN),((*(&(U->Rest))), Tprocs, Iptype, NTTATRN_newtests, &VTTATRN,(NL(ETTATRN_uchoices)).nonlocals));
WTTATRN_rest = VTTATRN;
 /* line 3581: */
XTTATRN = WTTATRN_rest.C;
if ( ! XTTATRN )
{XTTATRN = (*(&((&JTTATRN_test)->C)));
}
 /* line 3582: */
if ( ! XTTATRN )
{XTTATRN = STTATRN_ans.C;
}
if ( XTTATRN )
{ 
ZTTATRN.Check = (*(&(U->Check)));
ZTTATRN.Sort = (*(&(U->Sort)));
ZTTATRN.Test = (*(&((&JTTATRN_test)->U)));
 /* line 3583: */
ZTTATRN.Output = STTATRN_ans.U;
ZTTATRN.Rest = WTTATRN_rest.U;
AUTATRN = A_HEAP(A68_282 ) ;
(*AUTATRN) = ZTTATRN ;
YTTATRN.U = AUTATRN;
 /* line 3584: */
YTTATRN.C = A68_TRUE;
ITTATRN = YTTATRN;
} 
else
{ 
BUTATRN.U = U;
 /* line 3585: */
 /* line 3586: */
 /* line 3587: */
BUTATRN.C = A68_FALSE;
ITTATRN = BUTATRN;
} 
} 
} 
A_PROC_EXIT(uchoices);
*ReturnedValue = (ITTATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  EUTATRN_ucheck_expand(A68_247 * Uck, A68_414 * Tprocs, A68_390  *ReturnedValue)
{ 
A68_418  FUTATRN;  /* CALL */
A68_184  GUTATRN;  /* OPERATORS - mode -> union mode */
A68_186 * HUTATRN;  /* YIELD */
A68_375  IUTATRN;  /* avoid structure result */
A68_433  JUTATRN;  /* CALL */
A68_390  KUTATRN;  /* avoid structure result */
A68_390  LUTATRN_uc;
A68_390  MUTATRN;  /* collateral clause result */
A68_390  NUTATRN;  /* clause result */
A_PROC_ENTRY(ucheck_expand);
 /* line 3591: */
{ 
FUTATRN = (*(&(Tprocs->Formula))) ;
HUTATRN = (&(Uck->Check)) ;
A_CALLPROC(FUTATRN,(A_UNITE(GUTATRN,mode2,2,HUTATRN), Tprocs, &IUTATRN),(A_UNITE(GUTATRN,mode2,2,HUTATRN), Tprocs, &IUTATRN,(FUTATRN).nonlocals));
IUTATRN;
 /* line 3592: */
JUTATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(JUTATRN,((*(&(Uck->Unit))), Tprocs, &KUTATRN),((*(&(Uck->Unit))), Tprocs, &KUTATRN,(JUTATRN).nonlocals));
LUTATRN_uc = KUTATRN;
 /* line 3593: */
MUTATRN.U = LUTATRN_uc.U;
 /* line 3594: */
MUTATRN.C = A68_TRUE;
NUTATRN = MUTATRN;
} 
A_PROC_EXIT(ucheck_expand);
*ReturnedValue = (NUTATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  RUTATRN_unit_expand(A68_222  Unit, A68_414 * Tprocs, A68_390  *ReturnedValue, void *NonLocals)
#define NL(x) (((SUTATRN_unit_expand *)NonLocals)->x)
{ 
A68_222  TUTATRN;  /* united object - for case conformity */
A68_217 * UUTATRN_cp;
A68_INT  VUTATRN_newtype_cp;
A68_390  WUTATRN;  /* collateral clause result */
A68_217  XUTATRN;  /* collateral clause result */
A68_217 * YUTATRN;  /* YIELD */
A68_222  ZUTATRN;  /* OPERATORS - mode -> union mode */
A68_390  AVTATRN;  /* clause result */
A68_390  BVTATRN;  /* collateral clause result */
A68_222  CVTATRN;  /* OPERATORS - mode -> union mode */
A68_218 * DVTATRN_ci;
A68_INT  EVTATRN_newtype_ci;
A68_418  FVTATRN;  /* CALL */
A68_375  GVTATRN;  /* avoid structure result */
A68_375  HVTATRN_fc;
A68_BOOL  IVTATRN;  /* optbool result */
A68_390  JVTATRN;  /* collateral clause result */
A68_218  KVTATRN;  /* collateral clause result */
A68_218 * LVTATRN;  /* YIELD */
A68_222  MVTATRN;  /* OPERATORS - mode -> union mode */
A68_390  NVTATRN;  /* collateral clause result */
A68_222  OVTATRN;  /* OPERATORS - mode -> union mode */
A68_223 * PVTATRN_cq;
A68_INT  QVTATRN_newtype_cq;
A68_390  RVTATRN;  /* collateral clause result */
A68_223  SVTATRN;  /* collateral clause result */
A68_223 * TVTATRN;  /* YIELD */
A68_222  UVTATRN;  /* OPERATORS - mode -> union mode */
A68_390  VVTATRN;  /* collateral clause result */
A68_222  WVTATRN;  /* OPERATORS - mode -> union mode */
A68_216 * XVTATRN_cn;
A68_305  YVTATRN;  /* OPERATORS - simple index */
A68_INT  ZVTATRN;  /* YIELD */
A68_221 * AWTATRN_cdec;
A68_390  BWTATRN;  /* collateral clause result */
A68_222  CWTATRN;  /* avoid structure result */
A68_433  DWTATRN;  /* CALL */
A68_390  EWTATRN;  /* avoid structure result */
A68_390  FWTATRN_cc;
A68_307  GWTATRN;  /* avoid structure result */
A68_307  HWTATRN_oc;
A68_433  IWTATRN;  /* CALL */
A68_390  JWTATRN;  /* avoid structure result */
A68_390  KWTATRN_coc;
A68_390  LWTATRN_cnc;
A68_390  MWTATRN;  /* collateral clause result */
A68_390  NWTATRN;  /* collateral clause result */
A68_222  OWTATRN;  /* OPERATORS - mode -> union mode */
A68_219 * PWTATRN_cr;
A68_INT  QWTATRN_newtypeno;
A68_421  RWTATRN;  /* CALL */
A68_378  SWTATRN;  /* avoid structure result */
A68_378  TWTATRN_rc;
A68_BOOL  UWTATRN;  /* optbool result */
A68_390  VWTATRN;  /* collateral clause result */
A68_219  WWTATRN;  /* collateral clause result */
A68_219 * XWTATRN;  /* YIELD */
A68_222  YWTATRN;  /* OPERATORS - mode -> union mode */
A68_390  ZWTATRN;  /* collateral clause result */
A68_222  AXTATRN;  /* OPERATORS - mode -> union mode */
A68_225 * BXTATRN_cpr;
A68_INT  CXTATRN_newtypeno;
A68_VC  DXTATRN;  /* avoid structure result */
A68_VC  EXTATRN_newchars;
A68_BOOL  FXTATRN_is_contiguous;
A68_INT  HXTATRN;  /* YIELD */
A68_INT  GXTATRN_value;
A68_INT  IXTATRN_i;
A68_INT  JXTATRN;  /* to part of loop */
A68_226 * KXTATRN_newalts;
A68_226 ** LXTATRN_nextalts;
A68_INT  MXTATRN_i;
A68_INT  NXTATRN;  /* to part of loop */
A68_226  OXTATRN;  /* collateral clause result */
A68_217  PXTATRN;  /* collateral clause result */
A68_217 * QXTATRN;  /* YIELD */
A68_222  RXTATRN;  /* OPERATORS - mode -> union mode */
A68_226 * SXTATRN;  /* YIELD */
A68_390  TXTATRN;  /* collateral clause result */
A68_222  UXTATRN;  /* OPERATORS - mode -> union mode */
A68_390  VXTATRN;  /* collateral clause result */
A68_225  WXTATRN;  /* collateral clause result */
A68_225 * XXTATRN;  /* YIELD */
A68_222  YXTATRN;  /* OPERATORS - mode -> union mode */
A68_390  ZXTATRN;  /* collateral clause result */
A68_222  AYTATRN;  /* OPERATORS - mode -> union mode */
A68_227 * BYTATRN_un;
A68_390  CYTATRN;  /* avoid structure result */
A68_237 * DYTATRN_us;
A68_388  EYTATRN;  /* avoid structure result */
A68_388  FYTATRN_usc;
A68_390  GYTATRN;  /* collateral clause result */
A68_222  HYTATRN;  /* OPERATORS - mode -> union mode */
A68_237 * IYTATRN;  /* YIELD */
A68_238 * JYTATRN_unc;
A68_390  KYTATRN;  /* avoid structure result */
A68_231 * LYTATRN_up;
A68_433  MYTATRN;  /* CALL */
A68_222  NYTATRN;  /* OPERATORS - mode -> union mode */
A68_390  OYTATRN;  /* avoid structure result */
A68_390  PYTATRN_upc;
A68_222  QYTATRN;  /* united object - for case conformity */
A68_231 * RYTATRN_p;
A68_INT  SYTATRN_ind;
A68_232 * TYTATRN_ui;
A68_390  UYTATRN;  /* avoid structure result */
A68_233 * VYTATRN_ut;
A68_390  WYTATRN;  /* avoid structure result */
A68_234 * XYTATRN_ud;
A68_390  YYTATRN;  /* avoid structure result */
A68_229 * ZYTATRN_ua;
A68_INT  AZTATRN_newtypeno;
A68_433  BZTATRN;  /* CALL */
A68_390  CZTATRN;  /* avoid structure result */
A68_390  DZTATRN_uac;
A68_BOOL  EZTATRN;  /* optbool result */
A68_390  FZTATRN;  /* collateral clause result */
A68_229  GZTATRN;  /* collateral clause result */
A68_229 * HZTATRN;  /* YIELD */
A68_222  IZTATRN;  /* OPERATORS - mode -> union mode */
A68_390  JZTATRN;  /* collateral clause result */
A68_230 * KZTATRN_ue;
A68_INT  LZTATRN_newtypeno;
A68_433  MZTATRN;  /* CALL */
A68_390  NZTATRN;  /* avoid structure result */
A68_390  OZTATRN_uec;
A68_BOOL  PZTATRN;  /* optbool result */
A68_390  QZTATRN;  /* collateral clause result */
A68_230  RZTATRN;  /* collateral clause result */
A68_230 * SZTATRN;  /* YIELD */
A68_222  TZTATRN;  /* OPERATORS - mode -> union mode */
A68_390  UZTATRN;  /* collateral clause result */
A68_239 * VZTATRN_um;
A68_222  WZTATRN;  /* OPERATORS - mode -> union mode */
A68_390  XZTATRN;  /* avoid structure result */
A68_390  YZTATRN_umc;
A68_390  ZZTATRN;  /* collateral clause result */
A68_222  AAUATRN;  /* OPERATORS - mode -> union mode */
A68_240 * BAUATRN_ud;
A68_390  CAUATRN;  /* avoid structure result */
A68_390  DAUATRN_udc;
A68_390  EAUATRN;  /* collateral clause result */
A68_222  FAUATRN;  /* OPERATORS - mode -> union mode */
A68_241 * GAUATRN_uca;
A68_433  HAUATRN;  /* CALL */
A68_390  IAUATRN;  /* avoid structure result */
A68_390  JAUATRN_uc;
A68_200  KAUATRN;  /* avoid structure result */
A68_200  LAUATRN_t;
A68_389  MAUATRN;  /* avoid structure result */
A68_389  NAUATRN_cc;
A68_BOOL  OAUATRN;  /* optbool result */
A68_390  PAUATRN;  /* collateral clause result */
A68_241  QAUATRN;  /* collateral clause result */
A68_241 * RAUATRN;  /* YIELD */
A68_222  SAUATRN;  /* OPERATORS - mode -> union mode */
A68_390  TAUATRN;  /* collateral clause result */
A68_242 * UAUATRN_uc;
A68_390  VAUATRN;  /* avoid structure result */
A68_236 * WAUATRN_ur;
A68_390  XAUATRN;  /* avoid structure result */
A68_243 * YAUATRN_urp;
A68_390  ZAUATRN;  /* avoid structure result */
A68_245 * ABUATRN_us;
A68_390  BBUATRN;  /* avoid structure result */
A68_244 * CBUATRN_uq;
A68_390  DBUATRN;  /* avoid structure result */
A68_247 * EBUATRN_uck;
A68_390  FBUATRN;  /* avoid structure result */
A68_248 * GBUATRN_ub;
A68_433  HBUATRN;  /* CALL */
A68_390  IBUATRN;  /* avoid structure result */
A68_390  JBUATRN_ubc;
A68_390  KBUATRN;  /* collateral clause result */
A68_433  LBUATRN;  /* CALL */
A68_390  MBUATRN;  /* avoid structure result */
A_PROC_ENTRY(unit_expand);
 /* line 3598: */
 /* line 3599: */
{ 
 /* line 3600: */
TUTATRN = Unit ;
switch ( TUTATRN.mode )
{ 
case 2: /* REF STRUCT(INT,INT)  */
UUTATRN_cp = (TUTATRN.data.mode2);
 /* line 3601: */
{ 
VUTATRN_newtype_cp = ZSSATRN_set_consttype((*(&(UUTATRN_cp->Typeno))), Tprocs);
 /* line 3602: */
 /* line 3603: */
if ( ((*(&(UUTATRN_cp->Typeno)))!=VUTATRN_newtype_cp) )
{ 
XUTATRN.Typeno = VUTATRN_newtype_cp;
XUTATRN.Primno = (*(&(UUTATRN_cp->Primno)));
YUTATRN = A_HEAP(A68_217 ) ;
(*YUTATRN) = XUTATRN ;
WUTATRN.U = A_UNITE(ZUTATRN,mode2,2,YUTATRN);
 /* line 3604: */
WUTATRN.C = A68_TRUE;
AVTATRN = WUTATRN;
} 
else
{ 
BVTATRN.U = A_UNITE(CVTATRN,mode2,2,UUTATRN_cp);
 /* line 3605: */
 /* line 3606: */
 /* line 3607: */
BVTATRN.C = A68_FALSE;
AVTATRN = BVTATRN;
} 
} 
break;
case 3: /* REF STRUCT(INT,MODE184)  */
DVTATRN_ci = (TUTATRN.data.mode3);
 /* line 3608: */
{ 
EVTATRN_newtype_ci = ZSSATRN_set_consttype((*(&(DVTATRN_ci->Typeno))), Tprocs);
 /* line 3609: */
FVTATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(FVTATRN,((*(&(DVTATRN_ci->Index))), Tprocs, &GVTATRN),((*(&(DVTATRN_ci->Index))), Tprocs, &GVTATRN,(FVTATRN).nonlocals));
HVTATRN_fc = GVTATRN;
 /* line 3610: */
IVTATRN = HVTATRN_fc.C;
if ( ! IVTATRN )
{ /* line 3611: */
IVTATRN = ((*(&(DVTATRN_ci->Typeno)))!=EVTATRN_newtype_ci);
}
if ( IVTATRN )
{ 
KVTATRN.Typeno = EVTATRN_newtype_ci;
KVTATRN.Index = HVTATRN_fc.F;
LVTATRN = A_HEAP(A68_218 ) ;
(*LVTATRN) = KVTATRN ;
JVTATRN.U = A_UNITE(MVTATRN,mode3,3,LVTATRN);
 /* line 3612: */
JVTATRN.C = A68_TRUE;
AVTATRN = JVTATRN;
} 
else
{ 
NVTATRN.U = A_UNITE(OVTATRN,mode3,3,DVTATRN_ci);
 /* line 3613: */
 /* line 3614: */
 /* line 3615: */
NVTATRN.C = A68_FALSE;
AVTATRN = NVTATRN;
} 
} 
break;
case 5: /* REF STRUCT(INT,REF MODE32)  */
PVTATRN_cq = (TUTATRN.data.mode5);
 /* line 3616: */
{ 
QVTATRN_newtype_cq = ZSSATRN_set_consttype((*(&(PVTATRN_cq->Typeno))), Tprocs);
 /* line 3617: */
 /* line 3618: */
if ( ((*(&(PVTATRN_cq->Typeno)))!=QVTATRN_newtype_cq) )
{ 
SVTATRN.Typeno = QVTATRN_newtype_cq;
SVTATRN.String = (*(&(PVTATRN_cq->String)));
TVTATRN = A_HEAP(A68_223 ) ;
(*TVTATRN) = SVTATRN ;
RVTATRN.U = A_UNITE(UVTATRN,mode5,5,TVTATRN);
 /* line 3619: */
RVTATRN.C = A68_TRUE;
AVTATRN = RVTATRN;
} 
else
{ 
VVTATRN.U = A_UNITE(WVTATRN,mode5,5,PVTATRN_cq);
 /* line 3620: */
 /* line 3621: */
 /* line 3622: */
VVTATRN.C = A68_FALSE;
AVTATRN = VVTATRN;
} 
} 
break;
case 1: /* REF STRUCT(INT)  */
XVTATRN_cn = (TUTATRN.data.mode1);
 /* line 3623: */
{ 
YVTATRN = (*(&(NL(QZRATRN_oldclose).Env->Consts))) ;
ZVTATRN = (*(&(XVTATRN_cn->Constno))) ;
AWTATRN_cdec = (*(&A_VINDEX(YVTATRN,ZVTATRN)));
 /* line 3624: */
 /* line 3625: */
 /* line 3626: */
if ( ((*(&(AWTATRN_cdec->Sort)))==QKAATRN_macpardec) )
{ 
A_CALLPROC(NL(LBSATRN_subs_cmpar),((*XVTATRN_cn), &CWTATRN),((*XVTATRN_cn), &CWTATRN,(NL(LBSATRN_subs_cmpar)).nonlocals));
BWTATRN.U = CWTATRN;
 /* line 3627: */
BWTATRN.C = A68_TRUE;
} 
else
{ 
 /* line 3628: */
if ( ((*(&(AWTATRN_cdec->Sort)))==PKAATRN_localdec) )
{ 
DWTATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(DWTATRN,((*(&(AWTATRN_cdec->Value))), Tprocs, &EWTATRN),((*(&(AWTATRN_cdec->Value))), Tprocs, &EWTATRN,(DWTATRN).nonlocals));
FWTATRN_cc = EWTATRN;
 /* line 3629: */
BWTATRN.U = FWTATRN_cc.U;
 /* line 3630: */
BWTATRN.C = A68_TRUE;
} 
else
{ 
 /* line 3631: */
ZDRATRN_find_int_const( (*(&((*(&(AWTATRN_cdec->Usage)))->Closureno))), (*NL(WDRATRN_ints_consts)), &GWTATRN );
HWTATRN_oc = GWTATRN;
 /* line 3633: */
(*NL(UXRATRN_paramenv)) = HWTATRN_oc.Environ;
 /* line 3634: */
 /* line 3635: */
IWTATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(IWTATRN,((*(&(VPMATRN_get_outerconst(HWTATRN_oc)->Value))), Tprocs, &JWTATRN),((*(&(VPMATRN_get_outerconst(HWTATRN_oc)->Value))), Tprocs, &JWTATRN,(IWTATRN).nonlocals));
KWTATRN_coc = JWTATRN;
 /* line 3636: */
(*NL(UXRATRN_paramenv)) = XWQATRN_nilenviron;
 /* line 3637: */
BWTATRN.U = KWTATRN_coc.U;
 /* line 3638: */
BWTATRN.C = A68_TRUE;
} 
} 
LWTATRN_cnc = BWTATRN;
 /* line 3639: */
(*NL(WYRATRN_joinup)) = COPATRN_nulljoinup;
 /* line 3640: */
 /* line 3641: */
if ( NGQATRN_const_check(TFQATRN_value, LWTATRN_cnc.U, NL(OZRATRN_newclose), NL(TZRATRN_diag)) )
{ 
MWTATRN.U = LWTATRN_cnc.U;
 /* line 3642: */
MWTATRN.C = A68_TRUE;
AVTATRN = MWTATRN;
} 
else
{ 
NWTATRN.U = A_UNITE(OWTATRN,mode1,1,XVTATRN_cn);
 /* line 3643: */
 /* line 3644: */
 /* line 3645: */
NWTATRN.C = A68_FALSE;
AVTATRN = NWTATRN;
} 
} 
break;
case 8: /* REF STRUCT(INT,MODE199)  */
PWTATRN_cr = (TUTATRN.data.mode8);
 /* line 3646: */
{ 
QWTATRN_newtypeno = ZSSATRN_set_consttype((*(&(PWTATRN_cr->Typeno))), Tprocs);
 /* line 3647: */
RWTATRN = (*(&(Tprocs->Range))) ;
A_CALLPROC(RWTATRN,((*(&(PWTATRN_cr->Range))), Tprocs, &SWTATRN),((*(&(PWTATRN_cr->Range))), Tprocs, &SWTATRN,(RWTATRN).nonlocals));
TWTATRN_rc = SWTATRN;
 /* line 3648: */
UWTATRN = TWTATRN_rc.C;
if ( ! UWTATRN )
{ /* line 3649: */
UWTATRN = ((*(&(PWTATRN_cr->Typeno)))!=QWTATRN_newtypeno);
}
if ( UWTATRN )
{ 
WWTATRN.Typeno = QWTATRN_newtypeno;
WWTATRN.Range = TWTATRN_rc.R;
XWTATRN = A_HEAP(A68_219 ) ;
(*XWTATRN) = WWTATRN ;
VWTATRN.U = A_UNITE(YWTATRN,mode8,8,XWTATRN);
 /* line 3650: */
VWTATRN.C = A68_TRUE;
AVTATRN = VWTATRN;
} 
else
{ 
ZWTATRN.U = A_UNITE(AXTATRN,mode8,8,PWTATRN_cr);
 /* line 3651: */
 /* line 3652: */
 /* line 3653: */
ZWTATRN.C = A68_FALSE;
AVTATRN = ZWTATRN;
} 
} 
break;
case 9: /* REF STRUCT(INT,INT,INT)  */
BXTATRN_cpr = (TUTATRN.data.mode9);
 /* line 3654: */
{ 
CXTATRN_newtypeno = ZSSATRN_set_consttype((*(&(BXTATRN_cpr->Typeno))), Tprocs);
 /* line 3655: */
HVOATRN_find_newchars( CXTATRN_newtypeno, NL(OZRATRN_newclose), &DXTATRN );
EXTATRN_newchars = DXTATRN;
 /* line 3656: */
FXTATRN_is_contiguous = A68_TRUE;
 /* line 3657: */
HXTATRN = (*(&(BXTATRN_cpr->Firstno))) ;
GXTATRN_value = (A68_INT)(unsigned char)(*(&A_VINDEX(EXTATRN_newchars,HXTATRN)));
 /* line 3658: */
JXTATRN = (*(&(BXTATRN_cpr->Lastno)));
for ( IXTATRN_i = ((*(&(BXTATRN_cpr->Firstno)))+1);
IXTATRN_i <= JXTATRN;
IXTATRN_i += 1 )
{ 
 /* line 3659: */
if ( !(FXTATRN_is_contiguous) ) break;
 /* line 3660: */
if ( ((GXTATRN_value+=1)!=(A68_INT)(unsigned char)(*(&A_VINDEX(EXTATRN_newchars,IXTATRN_i)))) )
{ 
 /* line 3661: */
 /* line 3662: */
FXTATRN_is_contiguous = A68_FALSE;
} 
}
 /* line 3663: */
 /* line 3664: */
if ( !FXTATRN_is_contiguous )
{ 
 /* line 3665: */
KXTATRN_newalts = HAAATRN_nilualts ;
LXTATRN_nextalts = (&KXTATRN_newalts);
 /* line 3666: */
 /* line 3667: */
NXTATRN = (*(&(BXTATRN_cpr->Lastno)));
for ( MXTATRN_i = (*(&(BXTATRN_cpr->Firstno)));
MXTATRN_i <= NXTATRN;
MXTATRN_i += 1 )
{ 
 /* line 3668: */
PXTATRN.Typeno = CXTATRN_newtypeno;
PXTATRN.Primno = MXTATRN_i;
QXTATRN = A_HEAP(A68_217 ) ;
(*QXTATRN) = PXTATRN ;
OXTATRN.Alt = A_UNITE(RXTATRN,mode2,2,QXTATRN);
OXTATRN.Rest = HAAATRN_nilualts;
SXTATRN = A_HEAP(A68_226 ) ;
(*SXTATRN) = OXTATRN ;
(*LXTATRN_nextalts) = SXTATRN;
 /* line 3669: */
 /* line 3670: */
LXTATRN_nextalts = (&((*LXTATRN_nextalts)->Rest));
}
 /* line 3671: */
TXTATRN.U = A_UNITE(UXTATRN,mode10,10,KXTATRN_newalts);
 /* line 3672: */
TXTATRN.C = A68_TRUE;
AVTATRN = TXTATRN;
} 
else
{ 
 /* line 3673: */
if ( ((*(&(BXTATRN_cpr->Typeno)))!=CXTATRN_newtypeno) )
{ 
 /* line 3674: */
WXTATRN.Typeno = CXTATRN_newtypeno;
WXTATRN.Firstno = (*(&(BXTATRN_cpr->Firstno)));
WXTATRN.Lastno = (*(&(BXTATRN_cpr->Lastno)));
XXTATRN = A_HEAP(A68_225 ) ;
(*XXTATRN) = WXTATRN ;
VXTATRN.U = A_UNITE(YXTATRN,mode9,9,XXTATRN);
 /* line 3675: */
VXTATRN.C = A68_TRUE;
AVTATRN = VXTATRN;
} 
else
{ 
ZXTATRN.U = A_UNITE(AYTATRN,mode9,9,BXTATRN_cpr);
 /* line 3676: */
 /* line 3677: */
 /* line 3678: */
 /* line 3679: */
ZXTATRN.C = A68_FALSE;
AVTATRN = ZXTATRN;
} 
} 
} 
break;
case 11: /* REF STRUCT(INT,INT)  */
BYTATRN_un = (TUTATRN.data.mode11);
 /* line 3680: */
A_CALLPROC(NL(ZOTATRN_uname_nameno),(BYTATRN_un, &CYTATRN),(BYTATRN_un, &CYTATRN,(NL(ZOTATRN_uname_nameno)).nonlocals));
AVTATRN = CYTATRN;
break;
case 21: /* REF STRUCT(MODE222,REF MODE237)  */
DYTATRN_us = (TUTATRN.data.mode21);
 /* line 3681: */
{ 
A_CALLPROC(NL(RPTATRN_ustr_joinup),(DYTATRN_us, Tprocs, &EYTATRN),(DYTATRN_us, Tprocs, &EYTATRN,(NL(RPTATRN_ustr_joinup)).nonlocals));
FYTATRN_usc = EYTATRN;
 /* line 3682: */
IYTATRN = FYTATRN_usc.U ;
GYTATRN.U = A_UNITE(HYTATRN,mode21,21,IYTATRN);
 /* line 3683: */
 /* line 3684: */
GYTATRN.C = FYTATRN_usc.C;
AVTATRN = GYTATRN;
} 
break;
case 22: /* REF STRUCT(BOOL,INT,MODE222,MODE222)  */
JYTATRN_unc = (TUTATRN.data.mode22);
 /* line 3685: */
A_CALLPROC(NL(ESRATRN_uconc_expand),(JYTATRN_unc, Tprocs, NL(OZRATRN_newclose), NL(TZRATRN_diag), NL(WYRATRN_joinup), &KYTATRN),(JYTATRN_unc, Tprocs, NL(OZRATRN_newclose), NL(TZRATRN_diag), NL(WYRATRN_joinup), &KYTATRN,(NL(ESRATRN_uconc_expand)).nonlocals));
AVTATRN = KYTATRN;
break;
case 15: /* REF STRUCT(MODE222,INT,INT)  */
LYTATRN_up = (TUTATRN.data.mode15);
 /* line 3686: */
{ 
MYTATRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(MYTATRN,(A_UNITE(NYTATRN,mode15,15,LYTATRN_up), Tprocs, &OYTATRN),(A_UNITE(NYTATRN,mode15,15,LYTATRN_up), Tprocs, &OYTATRN,(MYTATRN).nonlocals));
PYTATRN_upc = OYTATRN;
 /* line 3687: */
 /* line 3688: */
QYTATRN = PYTATRN_upc.U ;
switch ( QYTATRN.mode )
{ 
case 15: /* REF STRUCT(MODE222,INT,INT)  */
RYTATRN_p = (QYTATRN.data.mode15);
{ 
SYTATRN_ind = EUNATRN_uportname_index(RYTATRN_p, NL(OZRATRN_newclose).Env);
 /* line 3689: */
 /* line 3690: */
 /* line 3691: */
SSPATRN_joinup_trim(NL(WYRATRN_joinup), A68_TRUE, SYTATRN_ind, SYTATRN_ind);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 3692: */
 /* line 3693: */
 /* line 3694: */
AVTATRN = PYTATRN_upc;
} 
break;
case 16: /* REF STRUCT(MODE222,MODE184)  */
TYTATRN_ui = (TUTATRN.data.mode16);
 /* line 3695: */
A_CALLPROC(NL(KKRATRN_uindex_expand),(TYTATRN_ui, Tprocs, NL(OZRATRN_newclose), NL(WYRATRN_joinup), &UYTATRN),(TYTATRN_ui, Tprocs, NL(OZRATRN_newclose), NL(WYRATRN_joinup), &UYTATRN,(NL(KKRATRN_uindex_expand)).nonlocals));
AVTATRN = UYTATRN;
break;
case 17: /* REF STRUCT(MODE222,MODE199)  */
VYTATRN_ut = (TUTATRN.data.mode17);
 /* line 3696: */
A_CALLPROC(NL(RLRATRN_utrim_expand),(VYTATRN_ut, Tprocs, NL(OZRATRN_newclose), NL(WYRATRN_joinup), &WYTATRN),(VYTATRN_ut, Tprocs, NL(OZRATRN_newclose), NL(WYRATRN_joinup), &WYTATRN,(NL(RLRATRN_utrim_expand)).nonlocals));
AVTATRN = WYTATRN;
break;
case 18: /* REF STRUCT(MODE222,MODE222)  */
XYTATRN_ud = (TUTATRN.data.mode18);
 /* line 3697: */
A_CALLPROC(NL(TQTATRN_udyindex_joinup),(XYTATRN_ud, Tprocs, &YYTATRN),(XYTATRN_ud, Tprocs, &YYTATRN,(NL(TQTATRN_udyindex_joinup)).nonlocals));
AVTATRN = YYTATRN;
break;
case 13: /* REF STRUCT(INT,INT,MODE222)  */
ZYTATRN_ua = (TUTATRN.data.mode13);
 /* line 3698: */
{ 
AZTATRN_newtypeno = ZSSATRN_set_consttype((*(&(ZYTATRN_ua->Typeno))), Tprocs);
 /* line 3699: */
BZTATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(BZTATRN,((*(&(ZYTATRN_ua->Assoc))), Tprocs, &CZTATRN),((*(&(ZYTATRN_ua->Assoc))), Tprocs, &CZTATRN,(BZTATRN).nonlocals));
DZTATRN_uac = CZTATRN;
 /* line 3700: */
(*NL(WYRATRN_joinup)) = COPATRN_nulljoinup;
 /* line 3701: */
EZTATRN = DZTATRN_uac.C;
if ( ! EZTATRN )
{ /* line 3702: */
EZTATRN = (AZTATRN_newtypeno!=(*(&(ZYTATRN_ua->Typeno))));
}
if ( EZTATRN )
{ 
GZTATRN.Typeno = AZTATRN_newtypeno;
GZTATRN.Altno = (*(&(ZYTATRN_ua->Altno)));
GZTATRN.Assoc = DZTATRN_uac.U;
HZTATRN = A_HEAP(A68_229 ) ;
(*HZTATRN) = GZTATRN ;
FZTATRN.U = A_UNITE(IZTATRN,mode13,13,HZTATRN);
 /* line 3703: */
FZTATRN.C = A68_TRUE;
AVTATRN = FZTATRN;
} 
else
{ 
JZTATRN.U = Unit;
 /* line 3704: */
 /* line 3705: */
 /* line 3706: */
JZTATRN.C = A68_FALSE;
AVTATRN = JZTATRN;
} 
} 
break;
case 14: /* REF STRUCT(MODE222,INT,INT)  */
KZTATRN_ue = (TUTATRN.data.mode14);
 /* line 3707: */
{ 
LZTATRN_newtypeno = ZSSATRN_set_consttype((*(&(KZTATRN_ue->Typeno))), Tprocs);
 /* line 3708: */
MZTATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(MZTATRN,((*(&(KZTATRN_ue->Extract))), Tprocs, &NZTATRN),((*(&(KZTATRN_ue->Extract))), Tprocs, &NZTATRN,(MZTATRN).nonlocals));
OZTATRN_uec = NZTATRN;
 /* line 3709: */
(*NL(WYRATRN_joinup)) = COPATRN_nulljoinup;
 /* line 3710: */
PZTATRN = OZTATRN_uec.C;
if ( ! PZTATRN )
{ /* line 3711: */
PZTATRN = (LZTATRN_newtypeno!=(*(&(KZTATRN_ue->Typeno))));
}
if ( PZTATRN )
{ 
RZTATRN.Extract = OZTATRN_uec.U;
RZTATRN.Typeno = LZTATRN_newtypeno;
RZTATRN.Altno = (*(&(KZTATRN_ue->Altno)));
SZTATRN = A_HEAP(A68_230 ) ;
(*SZTATRN) = RZTATRN ;
QZTATRN.U = A_UNITE(TZTATRN,mode14,14,SZTATRN);
 /* line 3712: */
QZTATRN.C = A68_TRUE;
AVTATRN = QZTATRN;
} 
else
{ 
UZTATRN.U = Unit;
 /* line 3713: */
 /* line 3714: */
 /* line 3715: */
UZTATRN.C = A68_FALSE;
AVTATRN = UZTATRN;
} 
} 
break;
case 23: /* REF STRUCT(MODE262,MODE222)  */
VZTATRN_um = (TUTATRN.data.mode23);
 /* line 3716: */
 /* line 3717: */
{ 
A_CALLPROC(NL(ASTATRN_uinst_joinup),((*(&(VZTATRN_um->Inst))), A_UNITE(WZTATRN,mode34,34,(&FIAATRN_unull)), (*(&(VZTATRN_um->Right))), A68_FALSE, Tprocs, &XZTATRN),((*(&(VZTATRN_um->Inst))), A_UNITE(WZTATRN,mode34,34,(&FIAATRN_unull)), (*(&(VZTATRN_um->Right))), A68_FALSE, Tprocs, &XZTATRN,(NL(ASTATRN_uinst_joinup)).nonlocals));
YZTATRN_umc = XZTATRN;
 /* line 3718: */
 /* line 3719: */
 /* line 3720: */
if ( YZTATRN_umc.C )
{ 
AVTATRN = YZTATRN_umc;
} 
else
{ 
ZZTATRN.U = A_UNITE(AAUATRN,mode23,23,VZTATRN_um);
 /* line 3721: */
 /* line 3722: */
 /* line 3723: */
ZZTATRN.C = A68_FALSE;
AVTATRN = ZZTATRN;
} 
} 
break;
case 24: /* REF STRUCT(MODE222,MODE262,MODE222)  */
BAUATRN_ud = (TUTATRN.data.mode24);
 /* line 3724: */
 /* line 3725: */
{ 
A_CALLPROC(NL(ASTATRN_uinst_joinup),((*(&(BAUATRN_ud->Inst))), (*(&(BAUATRN_ud->Left))), (*(&(BAUATRN_ud->Right))), A68_TRUE, Tprocs, &CAUATRN),((*(&(BAUATRN_ud->Inst))), (*(&(BAUATRN_ud->Left))), (*(&(BAUATRN_ud->Right))), A68_TRUE, Tprocs, &CAUATRN,(NL(ASTATRN_uinst_joinup)).nonlocals));
DAUATRN_udc = CAUATRN;
 /* line 3726: */
 /* line 3727: */
 /* line 3728: */
if ( DAUATRN_udc.C )
{ 
AVTATRN = DAUATRN_udc;
} 
else
{ 
EAUATRN.U = A_UNITE(FAUATRN,mode24,24,BAUATRN_ud);
 /* line 3729: */
 /* line 3730: */
 /* line 3731: */
EAUATRN.C = A68_FALSE;
AVTATRN = EAUATRN;
} 
} 
break;
case 25: /* REF STRUCT(MODE222,REF MODE282)  */
GAUATRN_uca = (TUTATRN.data.mode25);
 /* line 3732: */
{ 
HAUATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(HAUATRN,((*(&(GAUATRN_uca->Input))), Tprocs, &IAUATRN),((*(&(GAUATRN_uca->Input))), Tprocs, &IAUATRN,(HAUATRN).nonlocals));
JAUATRN_uc = IAUATRN;
 /* line 3733: */
(*NL(WYRATRN_joinup)) = COPATRN_nulljoinup;
 /* line 3734: */
VUNATRN_unit_type( JAUATRN_uc.U, NL(LZRATRN_newfdec), NL(GXRATRN_newenv), &KAUATRN );
LAUATRN_t = KAUATRN;
 /* line 3735: */
A_CALLPROC(NL(ETTATRN_uchoices),((*(&(GAUATRN_uca->Choices))), Tprocs, LAUATRN_t, IAAATRN_nilustr, &MAUATRN),((*(&(GAUATRN_uca->Choices))), Tprocs, LAUATRN_t, IAAATRN_nilustr, &MAUATRN,(NL(ETTATRN_uchoices)).nonlocals));
NAUATRN_cc = MAUATRN;
 /* line 3736: */
 /* line 3737: */
OAUATRN = JAUATRN_uc.C;
if ( ! OAUATRN )
{OAUATRN = NAUATRN_cc.C;
}
if ( OAUATRN )
{ 
QAUATRN.Input = JAUATRN_uc.U;
QAUATRN.Choices = NAUATRN_cc.U;
RAUATRN = A_HEAP(A68_241 ) ;
(*RAUATRN) = QAUATRN ;
PAUATRN.U = A_UNITE(SAUATRN,mode25,25,RAUATRN);
 /* line 3738: */
PAUATRN.C = A68_TRUE;
AVTATRN = PAUATRN;
} 
else
{ 
TAUATRN.U = Unit;
 /* line 3739: */
 /* line 3740: */
 /* line 3741: */
TAUATRN.C = A68_FALSE;
AVTATRN = TAUATRN;
} 
} 
break;
case 26: /* REF STRUCT(MODE184,MODE222,MODE222)  */
UAUATRN_uc = (TUTATRN.data.mode26);
 /* line 3742: */
JHRATRN_ucond_expand( UAUATRN_uc, Tprocs, &VAUATRN );
AVTATRN = VAUATRN;
break;
case 20: /* REF STRUCT(MODE184,MODE222)  */
WAUATRN_ur = (TUTATRN.data.mode20);
 /* line 3743: */
A_CALLPROC(NL(ONTATRN_urow_expand),(WAUATRN_ur, Tprocs, &XAUATRN),(WAUATRN_ur, Tprocs, &XAUATRN,(NL(ONTATRN_urow_expand)).nonlocals));
AVTATRN = XAUATRN;
break;
case 27: /* REF STRUCT(MODE184,MODE222)  */
YAUATRN_urp = (TUTATRN.data.mode27);
 /* line 3744: */
WFRATRN_urepl_expand( YAUATRN_urp, Tprocs, NL(TXRATRN_oldenv), (*NL(VXRATRN_repldecs)), NL(WYRATRN_joinup), &ZAUATRN );
AVTATRN = ZAUATRN;
break;
case 29: /* REF STRUCT(REF MODE251,MODE222)  */
ABUATRN_us = (TUTATRN.data.mode29);
 /* line 3745: */
A_CALLPROC(NL(AMTATRN_useries_expand),(ABUATRN_us, Tprocs, &BBUATRN),(ABUATRN_us, Tprocs, &BBUATRN,(NL(AMTATRN_useries_expand)).nonlocals));
AVTATRN = BBUATRN;
break;
case 28: /* REF STRUCT(REF MODE270,MODE222)  */
CBUATRN_uq = (TUTATRN.data.mode28);
 /* line 3746: */
A_CALLPROC(NL(UMTATRN_usequence_expand),(CBUATRN_uq, Tprocs, &DBUATRN),(CBUATRN_uq, Tprocs, &DBUATRN,(NL(UMTATRN_usequence_expand)).nonlocals));
AVTATRN = DBUATRN;
break;
case 31: /* REF STRUCT(MODE222,MODE186)  */
EBUATRN_uck = (TUTATRN.data.mode31);
 /* line 3747: */
EUTATRN_ucheck_expand( EBUATRN_uck, Tprocs, &FBUATRN );
AVTATRN = FBUATRN;
break;
case 32: /* REF STRUCT(MODE222)  */
GBUATRN_ub = (TUTATRN.data.mode32);
{ 
HBUATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(HBUATRN,((*(&(GBUATRN_ub->Unit))), Tprocs, &IBUATRN),((*(&(GBUATRN_ub->Unit))), Tprocs, &IBUATRN,(HBUATRN).nonlocals));
JBUATRN_ubc = IBUATRN;
 /* line 3748: */
KBUATRN.U = JBUATRN_ubc.U;
 /* line 3749: */
 /* line 3750: */
KBUATRN.C = A68_TRUE;
AVTATRN = KBUATRN;
} 
break;
default: 
 /* line 3751: */
 /* line 3752: */
LBUATRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(LBUATRN,(Unit, Tprocs, &MBUATRN),(Unit, Tprocs, &MBUATRN,(LBUATRN).nonlocals));
AVTATRN = MBUATRN;
break;
} 
} 
A_PROC_EXIT(unit_expand);
*ReturnedValue = (AVTATRN);
return;
} 
#undef NL
 /* line 3756: */

A_STATIC A68_VOID  RBUATRN_mparams_expand(A68_264  Macparams, A68_299  Macspecs, A68_414 * Tprocs, A68_264  *ReturnedValue, void *NonLocals)
#define NL(x) (((SBUATRN_mparams_expand *)NonLocals)->x)
{ 
A68_502  UBUATRN_generator;   /* proc value of non-global proc */
A68_264  ZBUATRN;  /* avoid structure result */
A68_264  ACUATRN_newparams;
A68_296 * BCUATRN_ms;
A68_265 * CCUATRN_np;
A68_265 * DCUATRN_p;
A68_INT  ECUATRN;  /* forall loop counter */
A68_266  FCUATRN;  /* united object - for case conformity */
A68_183  GCUATRN_ag;
A68_175  HCUATRN;  /* clause result */
A68_372  ICUATRN;  /* avoid structure result */
A68_175  JCUATRN_at;
A68_265  KCUATRN;  /* collateral clause result */
A68_266  LCUATRN;  /* OPERATORS - mode -> union mode */
A68_183  MCUATRN;  /* YIELD */
A68_195  NCUATRN_fg;
A68_266  OCUATRN;  /* OPERATORS - mode -> union mode */
A68_209  PCUATRN_tg;
A68_200  QCUATRN;  /* clause result */
A68_381  RCUATRN;  /* avoid structure result */
A68_200  SCUATRN_ty;
A68_266  TCUATRN;  /* OPERATORS - mode -> union mode */
A68_209  UCUATRN;  /* YIELD */
A68_267  VCUATRN_c;
A68_222  WCUATRN;  /* clause result */
A68_390  XCUATRN;  /* avoid structure result */
A68_222  YCUATRN_ct;
A68_266  ZCUATRN;  /* OPERATORS - mode -> union mode */
A68_267  ADUATRN;  /* YIELD */
A68_262  BDUATRN_i;
A68_283  CDUATRN;  /* united object - for case conformity */
A68_253  DDUATRN_fn;
A68_262  EDUATRN;  /* clause result */
A68_262  FDUATRN;  /* avoid structure result */
A68_262  GDUATRN_is;
A68_306  HDUATRN;  /* OPERATORS - simple index */
A68_INT  IDUATRN;  /* YIELD */
A68_266  JDUATRN;  /* OPERATORS - mode -> union mode */
A68_584 * KDUATRN_mis;
A68_INT  LDUATRN;  /* YIELD */
A68_583 ** MDUATRN;  /* YIELD */
A68_266  NDUATRN;  /* OPERATORS - mode -> union mode */
A68_265  QDUATRN;  /* OPERATORS - skip to mode */
A68_264  RDUATRN;  /* clause result */
A_PROC_ENTRY(mparams_expand);
 /* line 3758: */
 /* line 3759: */
{ 
A_CLOSURE( UBUATRN_generator, VBUATRN_generator, WBUATRN_generator );
(( WBUATRN_generator * ) ( UBUATRN_generator.nonlocals )) -> Macparams = Macparams;
A_CALLPROC(UBUATRN_generator,(A68_FALSE, &ZBUATRN),(A68_FALSE, &ZBUATRN,(UBUATRN_generator).nonlocals));
ACUATRN_newparams = ZBUATRN;
 /* line 3760: */
 /* line 3761: */
ECUATRN = Macspecs.upb -1;
if ( ECUATRN != ACUATRN_newparams.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
if ( ECUATRN != Macparams.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 3"); }
BCUATRN_ms = Macspecs.data;
CCUATRN_np = ACUATRN_newparams.data;
DCUATRN_p = Macparams.data;
for (;ECUATRN-- >= 0;
(BCUATRN_ms++
,CCUATRN_np++
,DCUATRN_p++
) )
{
 /* line 3762: */
 /* line 3763: */
FCUATRN = (*(&(DCUATRN_p->Param))) ;
switch ( FCUATRN.mode )
{ 
case 1: /* STRUCT(MODE175)  */
GCUATRN_ag = (FCUATRN.data.mode1);
 /* line 3764: */
{ 
 /* line 3765: */
 /* line 3766: */
if ( ((*NL(UXRATRN_paramenv))==XWQATRN_nilenviron) )
{ 
HCUATRN = GCUATRN_ag.Tag;
} 
else
{ 
 /* line 3767: */
A_CALLPROC(NL(SZSATRN_attr_expand),(GCUATRN_ag.Tag, Tprocs, &ICUATRN),(GCUATRN_ag.Tag, Tprocs, &ICUATRN,(NL(SZSATRN_attr_expand)).nonlocals));
HCUATRN = ICUATRN.A;
} 
JCUATRN_at = HCUATRN;
 /* line 3768: */
KCUATRN.Sort = AJAATRN_explicitmacpar;
 /* line 3769: */
 /* line 3770: */
MCUATRN = (*EEAATRN_makeattrtag(JCUATRN_at)) ;
KCUATRN.Param = A_UNITE(LCUATRN,mode1,1,MCUATRN);
} 
break;
case 2: /* STRUCT(MODE184)  */
NCUATRN_fg = (FCUATRN.data.mode2);
KCUATRN.Sort = AJAATRN_explicitmacpar;
 /* line 3771: */
KCUATRN.Param = A_UNITE(OCUATRN,mode2,2,NCUATRN_fg);
break;
case 3: /* STRUCT(MODE200)  */
PCUATRN_tg = (FCUATRN.data.mode3);
 /* line 3772: */
{ 
 /* line 3773: */
 /* line 3774: */
if ( ((*NL(UXRATRN_paramenv))==XWQATRN_nilenviron) )
{ 
QCUATRN = PCUATRN_tg.Tag;
} 
else
{ 
 /* line 3775: */
A_CALLPROC(NL(DWSATRN_type_expand),(PCUATRN_tg.Tag, Tprocs, &RCUATRN),(PCUATRN_tg.Tag, Tprocs, &RCUATRN,(NL(DWSATRN_type_expand)).nonlocals));
QCUATRN = RCUATRN.T;
} 
SCUATRN_ty = QCUATRN;
 /* line 3776: */
KCUATRN.Sort = AJAATRN_explicitmacpar;
 /* line 3777: */
 /* line 3778: */
UCUATRN = (*XFAATRN_maketypetag(SCUATRN_ty)) ;
KCUATRN.Param = A_UNITE(TCUATRN,mode3,3,UCUATRN);
} 
break;
case 4: /* STRUCT(MODE222)  */
VCUATRN_c = (FCUATRN.data.mode4);
 /* line 3779: */
{ 
 /* line 3780: */
 /* line 3781: */
if ( ((*NL(UXRATRN_paramenv))==XWQATRN_nilenviron) )
{ 
WCUATRN = VCUATRN_c.Tag;
} 
else
{ 
 /* line 3782: */
A_CALLPROC(NL(QUTATRN_unit_expand),(VCUATRN_c.Tag, Tprocs, &XCUATRN),(VCUATRN_c.Tag, Tprocs, &XCUATRN,(NL(QUTATRN_unit_expand)).nonlocals));
WCUATRN = XCUATRN.U;
} 
YCUATRN_ct = WCUATRN;
 /* line 3783: */
(*NL(WYRATRN_joinup)) = COPATRN_nulljoinup;
 /* line 3784: */
KCUATRN.Sort = AJAATRN_explicitmacpar;
 /* line 3785: */
 /* line 3786: */
ADUATRN = (*WGAATRN_makeunittag(YCUATRN_ct)) ;
KCUATRN.Param = A_UNITE(ZCUATRN,mode4,4,ADUATRN);
} 
break;
case 5: /* STRUCT(INT,REF MODE264,MODE175)  */
BDUATRN_i = (FCUATRN.data.mode5);
 /* line 3787: */
 /* line 3788: */
CDUATRN = (*(&(BCUATRN_ms->Spec))) ;
switch ( CDUATRN.mode )
{ 
case 5: /* STRUCT(INT)  */
DDUATRN_fn = (CDUATRN.data.mode5);
 /* line 3789: */
{ 
 /* line 3790: */
 /* line 3791: */
if ( ((*NL(UXRATRN_paramenv))==XWQATRN_nilenviron) )
{ 
EDUATRN = BDUATRN_i;
} 
else
{ 
 /* line 3792: */
A_CALLPROC(NL(IUSATRN_set_envfn),(BDUATRN_i, Tprocs, &FDUATRN),(BDUATRN_i, Tprocs, &FDUATRN,(NL(IUSATRN_set_envfn)).nonlocals));
EDUATRN = FDUATRN;
} 
GDUATRN_is = EDUATRN;
 /* line 3793: */
 /* line 3794: */
HDUATRN = (*(&(NL(TXRATRN_oldenv)->Fns))) ;
IDUATRN = DDUATRN_fn.Fnno ;
if ( !(*(&((*(&A_VINDEX(HDUATRN,IDUATRN)))->Macro))) )
{ 
KCUATRN.Sort = AJAATRN_explicitmacpar;
 /* line 3795: */
KCUATRN.Param = A_UNITE(JDUATRN,mode5,5,GDUATRN_is);
} 
else
{ 
KDUATRN_mis = NL(Mstable);
 /* line 3796: */
for ( ;; )
{ 
 /* line 3797: */
if ( !((KDUATRN_mis!=WWQATRN_nilmacparinfos)) ) break;
 /* line 3798: */
if ( (BDUATRN_i.Fnno==(*(&((*(&(KDUATRN_mis->Minfo)))->Fnno)))) )
{ 
 /* line 3799: */
LDUATRN = DDUATRN_fn.Fnno ;
MDUATRN = (&A_VINDEX((*NL(TYRATRN_mptable)),LDUATRN)) ;
(*MDUATRN) = (*(&(KDUATRN_mis->Minfo)));
} 
 /* line 3800: */
 /* line 3801: */
KDUATRN_mis = (*(&(KDUATRN_mis->Rest)));
}
 /* line 3802: */
KCUATRN.Sort = AJAATRN_explicitmacpar;
 /* line 3803: */
 /* line 3804: */
 /* line 3805: */
KCUATRN.Param = A_UNITE(NDUATRN,mode5,5,GDUATRN_is);
} 
} 
break;
default: 
NKDAOST_sysfault(PDUATRN);
 /* line 3806: */
 /* line 3807: */
 /* line 3808: */
KCUATRN = QDUATRN;
break;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
(*CCUATRN_np) = KCUATRN;
}
 /* line 3809: */
 /* line 3810: */
RDUATRN = ACUATRN_newparams;
} 
A_PROC_EXIT(mparams_expand);
*ReturnedValue = (RDUATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  VDUATRN_macspecs_expand(A68_299  Mspecs, A68_414 * Tprocs, A68_410  *ReturnedValue, void *NonLocals)
#define NL(x) (((WDUATRN_macspecs_expand *)NonLocals)->x)
{ 
A68_264  XDUATRN;  /* != */
A68_BOOL  YDUATRN;  /* optbool result */
A68_264  ZDUATRN;  /* avoid structure result */
A68_264  AEUATRN_newparams;
A68_264  BEUATRN;  /* YIELD */
A68_661  DEUATRN_generator;   /* proc value of non-global proc */
A68_299  IEUATRN;  /* avoid structure result */
A68_299  JEUATRN_new;
A68_265 * KEUATRN_np;
A68_296 * LEUATRN_n;
A68_296 * MEUATRN_m;
A68_INT  NEUATRN;  /* forall loop counter */
A68_296  OEUATRN;  /* collateral clause result */
A68_283  PEUATRN;  /* united object - for case conformity */
A68_176  QEUATRN_an;
A68_302  REUATRN;  /* OPERATORS - simple index */
A68_INT  SEUATRN;  /* YIELD */
A68_181 * TEUATRN_adec;
A68_181 * UEUATRN_ad;
A68_266  VEUATRN;  /* united object - for case conformity */
A68_183  WEUATRN_ag;
A68_175  XEUATRN;  /* clause result */
A68_175  AFUATRN;  /* OPERATORS - skip to mode */
A68_175 * BFUATRN;  /* YIELD */
A68_374  CFUATRN;  /* collateral clause result */
A68_INT  DFUATRN_newattrno;
A68_283  EFUATRN;  /* OPERATORS - mode -> union mode */
A68_176  FFUATRN;  /* YIELD */
A68_188  GFUATRN_in;
A68_303  HFUATRN;  /* OPERATORS - simple index */
A68_INT  IFUATRN;  /* YIELD */
A68_197 * JFUATRN_idec;
A68_197 * KFUATRN_id;
A68_266  LFUATRN;  /* united object - for case conformity */
A68_195  MFUATRN_fg;
A68_198  NFUATRN;  /* clause result */
A68_198  OFUATRN;  /* OPERATORS - unite union */
A68_184  PFUATRN;  /* YIELD */
A68_198  SFUATRN;  /* OPERATORS - skip to mode */
A68_198 * TFUATRN;  /* YIELD */
A68_INT  UFUATRN_newintno;
A68_283  VFUATRN;  /* OPERATORS - mode -> union mode */
A68_188  WFUATRN;  /* YIELD */
A68_201  XFUATRN_tn;
A68_304  YFUATRN;  /* OPERATORS - simple index */
A68_INT  ZFUATRN;  /* YIELD */
A68_215 * AGUATRN_odec;
A68_215 * BGUATRN_td;
A68_266  CGUATRN;  /* united object - for case conformity */
A68_209  DGUATRN_tg;
A68_213  EGUATRN;  /* clause result */
A68_209 * FGUATRN;  /* YIELD */
A68_213  GGUATRN;  /* OPERATORS - mode -> union mode */
A68_213  JGUATRN;  /* OPERATORS - skip to mode */
A68_213 * KGUATRN;  /* YIELD */
A68_385  LGUATRN;  /* collateral clause result */
A68_INT  MGUATRN_newtypeno;
A68_283  NGUATRN;  /* OPERATORS - mode -> union mode */
A68_201  OGUATRN;  /* YIELD */
A68_216  PGUATRN_cn;
A68_305  QGUATRN;  /* OPERATORS - simple index */
A68_INT  RGUATRN;  /* YIELD */
A68_221 * SGUATRN_cdec;
A68_221 * TGUATRN_cd;
A68_266  UGUATRN;  /* united object - for case conformity */
A68_267  VGUATRN_cg;
A68_222  WGUATRN;  /* clause result */
A68_222  ZGUATRN;  /* OPERATORS - skip to mode */
A68_222 * AHUATRN;  /* YIELD */
A68_INT  BHUATRN_newctno;
A68_283  CHUATRN;  /* OPERATORS - mode -> union mode */
A68_216  DHUATRN;  /* YIELD */
A68_253  EHUATRN_fn;
A68_306  FHUATRN;  /* OPERATORS - simple index */
A68_INT  GHUATRN;  /* YIELD */
A68_298 * HHUATRN_fdec;
A68_239 * IHUATRN_um;
A68_266  JHUATRN;  /* united object - for case conformity */
A68_262  KHUATRN_i;
A68_239  LHUATRN;  /* collateral clause result */
A68_222  MHUATRN;  /* OPERATORS - mode -> union mode */
A68_239  PHUATRN;  /* OPERATORS - skip to mode */
A68_222  QHUATRN;  /* OPERATORS - mode -> union mode */
A68_294  RHUATRN;  /* OPERATORS - mode -> union mode */
A68_267 * SHUATRN;  /* YIELD */
A68_298 * THUATRN_fd;
A68_INT  UHUATRN_newfnno;
A68_283  VHUATRN;  /* OPERATORS - mode -> union mode */
A68_253  WHUATRN;  /* YIELD */
A68_410  XHUATRN;  /* collateral clause result */
A68_453  YHUATRN;  /* CALL */
A68_410  ZHUATRN;  /* avoid structure result */
A68_410  AIUATRN_msc;
A68_410  BIUATRN;  /* clause result */
A_PROC_ENTRY(macspecs_expand);
 /* line 3814: */
 /* line 3816: */
{ 
XDUATRN = NL(Params).M ;
YDUATRN = ! A_VSTRUCTCOMP(XDUATRN,ABAATRN_nilmacparams);
if ( YDUATRN )
{ /* line 3817: */
YDUATRN = (NL(Params).M.upb>0);
}
if ( YDUATRN )
{ 
(*NL(AWSATRN_force)) = NL(Params).C;
 /* line 3818: */
 /* line 3819: */
A_CALLPROC(NL(QBUATRN_mparams_expand),(NL(Params).M, Mspecs, Tprocs, &ZDUATRN),(NL(Params).M, Mspecs, Tprocs, &ZDUATRN,(NL(QBUATRN_mparams_expand)).nonlocals));
AEUATRN_newparams = ZDUATRN;
 /* line 3820: */
BEUATRN = NL(Params).M ;
A_VASSIGN2(AEUATRN_newparams,BEUATRN,A68_265 );
 /* line 3822: */
A_CLOSURE( DEUATRN_generator, EEUATRN_generator, FEUATRN_generator );
(( FEUATRN_generator * ) ( DEUATRN_generator.nonlocals )) -> Mspecs = Mspecs;
A_CALLPROC(DEUATRN_generator,(A68_FALSE, &IEUATRN),(A68_FALSE, &IEUATRN,(DEUATRN_generator).nonlocals));
JEUATRN_new = IEUATRN;
 /* line 3823: */
 /* line 3824: */
NEUATRN = AEUATRN_newparams.upb -1;
if ( NEUATRN != JEUATRN_new.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
if ( NEUATRN != Mspecs.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 3"); }
KEUATRN_np = AEUATRN_newparams.data;
LEUATRN_n = JEUATRN_new.data;
MEUATRN_m = Mspecs.data;
for (;NEUATRN-- >= 0;
(KEUATRN_np++
,LEUATRN_n++
,MEUATRN_m++
) )
{
 /* line 3825: */
OEUATRN.Sort = AJAATRN_explicitmacpar;
 /* line 3826: */
PEUATRN = (*(&(MEUATRN_m->Spec))) ;
switch ( PEUATRN.mode )
{ 
case 1: /* STRUCT(INT)  */
QEUATRN_an = (PEUATRN.data.mode1);
 /* line 3827: */
{ 
REUATRN = (*(&(NL(TXRATRN_oldenv)->Attrs))) ;
SEUATRN = QEUATRN_an.Attrno ;
TEUATRN_adec = (*(&A_VINDEX(REUATRN,SEUATRN)));
 /* line 3828: */
UEUATRN_ad = (A_HEAP(A68_181 ));
(*UEUATRN_ad) = (*TEUATRN_adec);
 /* line 3829: */
 /* line 3830: */
VEUATRN = (*(&(KEUATRN_np->Param))) ;
switch ( VEUATRN.mode )
{ 
case 1: /* STRUCT(MODE175)  */
WEUATRN_ag = (VEUATRN.data.mode1);
 /* line 3831: */
XEUATRN = WEUATRN_ag.Tag;
break;
default: 
NKDAOST_sysfault(ZEUATRN);
 /* line 3832: */
XEUATRN = AFUATRN;
break;
} 
BFUATRN = (&(UEUATRN_ad->Value)) ;
(*BFUATRN) = XEUATRN;
 /* line 3833: */
CFUATRN.A = UEUATRN_ad;
CFUATRN.C = A68_TRUE;
DFUATRN_newattrno = A_CALLPROC(NL(FQSATRN_add_envattr),(QEUATRN_an.Attrno, 0, CFUATRN),(QEUATRN_an.Attrno, 0, CFUATRN,(NL(FQSATRN_add_envattr)).nonlocals));
 /* line 3834: */
 /* line 3835: */
 /* line 3836: */
FFUATRN = (*UDAATRN_makeattrname(DFUATRN_newattrno)) ;
OEUATRN.Spec = A_UNITE(EFUATRN,mode1,1,FFUATRN);
} 
break;
case 2: /* STRUCT(INT)  */
GFUATRN_in = (PEUATRN.data.mode2);
 /* line 3837: */
{ 
HFUATRN = (*(&(NL(TXRATRN_oldenv)->Ints))) ;
IFUATRN = GFUATRN_in.Intno ;
JFUATRN_idec = (*(&A_VINDEX(HFUATRN,IFUATRN)));
 /* line 3838: */
KFUATRN_id = (A_HEAP(A68_197 ));
(*KFUATRN_id) = (*JFUATRN_idec);
 /* line 3839: */
 /* line 3840: */
LFUATRN = (*(&(KEUATRN_np->Param))) ;
switch ( LFUATRN.mode )
{ 
case 2: /* STRUCT(MODE184)  */
MFUATRN_fg = (LFUATRN.data.mode2);
 /* line 3841: */
PFUATRN = MFUATRN_fg.Tag ;
NFUATRN = A_UUNITE(OFUATRN,0,PFUATRN);
break;
default: 
NKDAOST_sysfault(RFUATRN);
 /* line 3842: */
NFUATRN = SFUATRN;
break;
} 
TFUATRN = (&(KFUATRN_id->Value)) ;
(*TFUATRN) = NFUATRN;
 /* line 3843: */
UFUATRN_newintno = A_CALLPROC(NL(CHSATRN_add_envint),(GFUATRN_in.Intno, KFUATRN_id),(GFUATRN_in.Intno, KFUATRN_id,(NL(CHSATRN_add_envint)).nonlocals));
 /* line 3844: */
 /* line 3845: */
 /* line 3846: */
WFUATRN = (*OEAATRN_makefname(UFUATRN_newintno)) ;
OEUATRN.Spec = A_UNITE(VFUATRN,mode2,2,WFUATRN);
} 
break;
case 3: /* STRUCT(INT)  */
XFUATRN_tn = (PEUATRN.data.mode3);
 /* line 3847: */
{ 
YFUATRN = (*(&(NL(TXRATRN_oldenv)->Types))) ;
ZFUATRN = XFUATRN_tn.Typeno ;
AGUATRN_odec = (*(&A_VINDEX(YFUATRN,ZFUATRN)));
 /* line 3848: */
BGUATRN_td = (A_HEAP(A68_215 ));
(*BGUATRN_td) = (*AGUATRN_odec);
 /* line 3849: */
 /* line 3850: */
CGUATRN = (*(&(KEUATRN_np->Param))) ;
switch ( CGUATRN.mode )
{ 
case 3: /* STRUCT(MODE200)  */
DGUATRN_tg = (CGUATRN.data.mode3);
 /* line 3851: */
FGUATRN = A_HEAP(A68_209 ) ;
(*FGUATRN) = DGUATRN_tg ;
EGUATRN = A_UNITE(GGUATRN,mode3,3,FGUATRN);
break;
default: 
NKDAOST_sysfault(IGUATRN);
 /* line 3852: */
EGUATRN = JGUATRN;
break;
} 
KGUATRN = (&(BGUATRN_td->Body)) ;
(*KGUATRN) = EGUATRN;
 /* line 3853: */
LGUATRN.T = BGUATRN_td;
LGUATRN.C = A68_TRUE;
MGUATRN_newtypeno = A_CALLPROC(NL(ZNSATRN_add_envtype),(XFUATRN_tn.Typeno, 0, LGUATRN),(XFUATRN_tn.Typeno, 0, LGUATRN,(NL(ZNSATRN_add_envtype)).nonlocals));
 /* line 3854: */
 /* line 3855: */
 /* line 3856: */
OGUATRN = (*IFAATRN_maketname(MGUATRN_newtypeno)) ;
OEUATRN.Spec = A_UNITE(NGUATRN,mode3,3,OGUATRN);
} 
break;
case 4: /* STRUCT(INT)  */
PGUATRN_cn = (PEUATRN.data.mode4);
 /* line 3857: */
{ 
QGUATRN = (*(&(NL(TXRATRN_oldenv)->Consts))) ;
RGUATRN = PGUATRN_cn.Constno ;
SGUATRN_cdec = (*(&A_VINDEX(QGUATRN,RGUATRN)));
 /* line 3858: */
TGUATRN_cd = (A_HEAP(A68_221 ));
(*TGUATRN_cd) = (*SGUATRN_cdec);
 /* line 3859: */
 /* line 3860: */
UGUATRN = (*(&(KEUATRN_np->Param))) ;
switch ( UGUATRN.mode )
{ 
case 4: /* STRUCT(MODE222)  */
VGUATRN_cg = (UGUATRN.data.mode4);
 /* line 3861: */
WGUATRN = VGUATRN_cg.Tag;
break;
default: 
NKDAOST_sysfault(YGUATRN);
 /* line 3862: */
WGUATRN = ZGUATRN;
break;
} 
AHUATRN = (&(TGUATRN_cd->Value)) ;
(*AHUATRN) = WGUATRN;
 /* line 3863: */
BHUATRN_newctno = A_CALLPROC(NL(HISATRN_add_envconst),(PGUATRN_cn.Constno, TGUATRN_cd),(PGUATRN_cn.Constno, TGUATRN_cd,(NL(HISATRN_add_envconst)).nonlocals));
 /* line 3864: */
 /* line 3865: */
 /* line 3866: */
DHUATRN = (*CGAATRN_makecname(BHUATRN_newctno)) ;
OEUATRN.Spec = A_UNITE(CHUATRN,mode4,4,DHUATRN);
} 
break;
case 5: /* STRUCT(INT)  */
EHUATRN_fn = (PEUATRN.data.mode5);
 /* line 3867: */
{ 
FHUATRN = (*(&(NL(TXRATRN_oldenv)->Fns))) ;
GHUATRN = EHUATRN_fn.Fnno ;
HHUATRN_fdec = (*(&A_VINDEX(FHUATRN,GHUATRN)));
 /* line 3868: */
IHUATRN_um = (A_HEAP(A68_239 ));
 /* line 3869: */
 /* line 3870: */
JHUATRN = (*(&(KEUATRN_np->Param))) ;
switch ( JHUATRN.mode )
{ 
case 5: /* STRUCT(INT,REF MODE264,MODE175)  */
KHUATRN_i = (JHUATRN.data.mode5);
LHUATRN.Inst = KHUATRN_i;
 /* line 3871: */
LHUATRN.Right = A_UNITE(MHUATRN,mode34,34,(&FIAATRN_unull));
break;
default: 
NKDAOST_sysfault(OHUATRN);
 /* line 3872: */
LHUATRN = PHUATRN;
break;
} 
(*IHUATRN_um) = LHUATRN;
 /* line 3873: */
 /* line 3874: */
 /* line 3875: */
SHUATRN = WGAATRN_makeunittag(A_UNITE(QHUATRN,mode23,23,IHUATRN_um)) ;
THUATRN_fd = WTOATRN_skeleton_fndec((*(&(HHUATRN_fdec->Sort))), (*(&(HHUATRN_fdec->Macro))), (*(&(HHUATRN_fdec->Fnname))), A_UNITE(RHUATRN,mode1,1,SHUATRN));
 /* line 3876: */
UHUATRN_newfnno = A_CALLPROC(NL(NLSATRN_add_envfn),(EHUATRN_fn.Fnno, 0, THUATRN_fd, A68_TRUE, A68_TRUE),(EHUATRN_fn.Fnno, 0, THUATRN_fd, A68_TRUE, A68_TRUE,(NL(NLSATRN_add_envfn)).nonlocals));
 /* line 3877: */
 /* line 3878: */
 /* line 3879: */
 /* line 3880: */
WHUATRN = (*LHAATRN_makefnname(UHUATRN_newfnno)) ;
OEUATRN.Spec = A_UNITE(VHUATRN,mode5,5,WHUATRN);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
(*LEUATRN_n) = OEUATRN;
}
 /* line 3881: */
XHUATRN.M = JEUATRN_new;
 /* line 3882: */
XHUATRN.C = A68_TRUE;
} 
else
{ 
 /* line 3883: */
YHUATRN = (*(&(AWLATRN_nulltprocs->Macspecs))) ;
A_CALLPROC(YHUATRN,(Mspecs, Tprocs, &ZHUATRN),(Mspecs, Tprocs, &ZHUATRN,(YHUATRN).nonlocals));
XHUATRN = ZHUATRN;
} 
AIUATRN_msc = XHUATRN;
 /* line 3885: */
(*NL(UXRATRN_paramenv)) = XWQATRN_nilenviron;
 /* line 3886: */
(*NL(AWSATRN_force)) = A68_FALSE;
 /* line 3887: */
 /* line 3888: */
BIUATRN = AIUATRN_msc;
} 
A_PROC_EXIT(macspecs_expand);
*ReturnedValue = (BIUATRN);
return;
} 
#undef NL
 /* line 3892: */

A_STATIC A68_VOID  HIUATRN_seqchoices(A68_281 * Sc, A68_414 * Tprocs, A68_200  Iptype, A68_237 * Tests, A68_400  *ReturnedValue, void *NonLocals)
#define NL(x) (((IIUATRN_seqchoices *)NonLocals)->x)
{ 
A68_400  JIUATRN;  /* collateral clause result */
A68_400  KIUATRN;  /* clause result */
A68_433  MIUATRN;  /* CALL */
A68_390  NIUATRN;  /* avoid structure result */
A68_390  LIUATRN_test;
A68_237 * OIUATRN;  /* clause result */
A68_237 * PIUATRN_newtests;
A68_390  QIUATRN;  /* collateral clause result */
A68_222  RIUATRN;  /* OPERATORS - mode -> union mode */
A68_444  SIUATRN;  /* CALL */
A68_401  TIUATRN;  /* avoid structure result */
A68_401  UIUATRN_ans;
A68_237  VIUATRN;  /* collateral clause result */
A68_237 * WIUATRN;  /* YIELD */
A68_400  XIUATRN;  /* avoid structure result */
A68_400  YIUATRN_rest;
A68_BOOL  ZIUATRN;  /* optbool result */
A68_400  AJUATRN;  /* collateral clause result */
A68_281  BJUATRN;  /* collateral clause result */
A68_281 * CJUATRN;  /* YIELD */
A68_400  DJUATRN;  /* collateral clause result */
A_PROC_ENTRY(seqchoices);
 /* line 3893: */
 /* line 3894: */
{ 
 /* line 3895: */
if ( (Sc==PAAATRN_nilseqchoices) )
{ 
JIUATRN.S = Sc;
 /* line 3896: */
JIUATRN.C = A68_FALSE;
KIUATRN = JIUATRN;
} 
else
{ 
VSOATRN_chooser_const = A68_TRUE;
 /* line 3897: */
MIUATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(MIUATRN,((*(&(Sc->Test))), Tprocs, &NIUATRN),((*(&(Sc->Test))), Tprocs, &NIUATRN,(MIUATRN).nonlocals));
LIUATRN_test = NIUATRN;
 /* line 3898: */
(*NL(WYRATRN_joinup)) = COPATRN_nulljoinup;
 /* line 3899: */
VSOATRN_chooser_const = A68_FALSE;
 /* line 3900: */
 /* line 3901: */
if ( ((*(&(Sc->Sort)))==XIAATRN_elseofchoice) )
{ 
OIUATRN = IAAATRN_nilustr;
} 
else
{ 
OIUATRN = Tests;
} 
PIUATRN_newtests = OIUATRN;
 /* line 3902: */
 /* line 3903: */
if ( NGQATRN_const_check(SFQATRN_chooser, (*(&((&LIUATRN_test)->U))), NL(OZRATRN_newclose), NL(TZRATRN_diag)) )
{ 
 /* line 3904: */
if ( (*(&(Sc->Check))) )
{ 
 /* line 3905: */
 /* line 3906: */
 /* line 3907: */
BHQATRN_choosers_check(Iptype, (*(&((&LIUATRN_test)->U))), PIUATRN_newtests, NL(OZRATRN_newclose), NL(TZRATRN_diag));
} 
} 
else
{ 
QIUATRN.U = A_UNITE(RIUATRN,mode34,34,(&FIAATRN_unull));
 /* line 3908: */
QIUATRN.C = A68_TRUE;
LIUATRN_test = QIUATRN;
} 
 /* line 3909: */
SIUATRN = (*(&(Tprocs->Seqstep))) ;
A_CALLPROC(SIUATRN,((*(&(Sc->Output))), Tprocs, &TIUATRN),((*(&(Sc->Output))), Tprocs, &TIUATRN,(SIUATRN).nonlocals));
UIUATRN_ans = TIUATRN;
 /* line 3910: */
VIUATRN.Elem = (*(&((&LIUATRN_test)->U)));
VIUATRN.Rest = PIUATRN_newtests;
WIUATRN = A_HEAP(A68_237 ) ;
(*WIUATRN) = VIUATRN ;
PIUATRN_newtests = WIUATRN;
 /* line 3911: */
A_CALLPROC(NL(GIUATRN_seqchoices),((*(&(Sc->Rest))), Tprocs, Iptype, PIUATRN_newtests, &XIUATRN),((*(&(Sc->Rest))), Tprocs, Iptype, PIUATRN_newtests, &XIUATRN,(NL(GIUATRN_seqchoices)).nonlocals));
YIUATRN_rest = XIUATRN;
 /* line 3912: */
ZIUATRN = YIUATRN_rest.C;
if ( ! ZIUATRN )
{ZIUATRN = (*(&((&LIUATRN_test)->C)));
}
 /* line 3913: */
if ( ! ZIUATRN )
{ZIUATRN = UIUATRN_ans.C;
}
if ( ZIUATRN )
{ 
BJUATRN.Check = (*(&(Sc->Check)));
BJUATRN.Sort = (*(&(Sc->Sort)));
 /* line 3914: */
BJUATRN.Test = (*(&((&LIUATRN_test)->U)));
BJUATRN.Output = UIUATRN_ans.S;
BJUATRN.Rest = YIUATRN_rest.S;
CJUATRN = A_HEAP(A68_281 ) ;
(*CJUATRN) = BJUATRN ;
AJUATRN.S = CJUATRN;
 /* line 3915: */
AJUATRN.C = A68_TRUE;
KIUATRN = AJUATRN;
} 
else
{ 
DJUATRN.S = Sc;
 /* line 3916: */
 /* line 3917: */
 /* line 3918: */
DJUATRN.C = A68_FALSE;
KIUATRN = DJUATRN;
} 
} 
} 
A_PROC_EXIT(seqchoices);
*ReturnedValue = (KIUATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  GJUATRN_seqcond_expand(A68_277 * Scond, A68_414 * Tprocs, A68_401  *ReturnedValue)
{ 
A68_418  HJUATRN;  /* CALL */
A68_375  IJUATRN;  /* avoid structure result */
A68_375  JJUATRN_cond;
A68_444  KJUATRN;  /* CALL */
A68_401  LJUATRN;  /* avoid structure result */
A68_401  MJUATRN_true;
A68_401  NJUATRN;  /* collateral clause result */
A68_401  OJUATRN;  /* clause result */
A68_444  PJUATRN;  /* CALL */
A68_401  QJUATRN;  /* avoid structure result */
A68_401  RJUATRN_false;
A68_401  SJUATRN;  /* collateral clause result */
A_PROC_ENTRY(seqcond_expand);
 /* line 3921: */
 /* line 3922: */
{ 
HJUATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(HJUATRN,((*(&(Scond->Cond))), Tprocs, &IJUATRN),((*(&(Scond->Cond))), Tprocs, &IJUATRN,(HJUATRN).nonlocals));
JJUATRN_cond = IJUATRN;
 /* line 3923: */
 /* line 3924: */
if ( (XOMATRN_int(JJUATRN_cond.F)!=0) )
{ 
KJUATRN = (*(&(Tprocs->Seqstep))) ;
A_CALLPROC(KJUATRN,((*(&(Scond->True))), Tprocs, &LJUATRN),((*(&(Scond->True))), Tprocs, &LJUATRN,(KJUATRN).nonlocals));
MJUATRN_true = LJUATRN;
 /* line 3925: */
NJUATRN.S = MJUATRN_true.S;
 /* line 3926: */
NJUATRN.C = A68_TRUE;
OJUATRN = NJUATRN;
} 
else
{ 
PJUATRN = (*(&(Tprocs->Seqstep))) ;
A_CALLPROC(PJUATRN,((*(&(Scond->False))), Tprocs, &QJUATRN),((*(&(Scond->False))), Tprocs, &QJUATRN,(PJUATRN).nonlocals));
RJUATRN_false = QJUATRN;
 /* line 3927: */
SJUATRN.S = RJUATRN_false.S;
 /* line 3928: */
 /* line 3929: */
SJUATRN.C = A68_TRUE;
OJUATRN = SJUATRN;
} 
} 
A_PROC_EXIT(seqcond_expand);
*ReturnedValue = (OJUATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  VJUATRN_seqrow_expand(A68_280 * Srow, A68_414 * Tprocs, A68_401  *ReturnedValue)
{ 
A68_270 * WJUATRN_newbody;
A68_270 ** XJUATRN_nextelem;
A68_418  YJUATRN;  /* CALL */
A68_375  ZJUATRN;  /* avoid structure result */
A68_375  AKUATRN_fc;
A68_INT  BKUATRN_upb;
A68_INT  CKUATRN_i;
A68_INT  DKUATRN;  /* to part of loop */
A68_444  EKUATRN;  /* CALL */
A68_401  FKUATRN;  /* avoid structure result */
A68_401  GKUATRN_body;
A68_270  HKUATRN;  /* collateral clause result */
A68_270 * IKUATRN;  /* YIELD */
A68_401  JKUATRN;  /* collateral clause result */
A68_271  KKUATRN;  /* OPERATORS - mode -> union mode */
A68_401  LKUATRN;  /* clause result */
A_PROC_ENTRY(seqrow_expand);
 /* line 3932: */
 /* line 3933: */
{ 
WJUATRN_newbody = QAAATRN_nilsequence;
 /* line 3934: */
XJUATRN_nextelem = (&WJUATRN_newbody);
 /* line 3935: */
YJUATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(YJUATRN,((*(&(Srow->Size))), Tprocs, &ZJUATRN),((*(&(Srow->Size))), Tprocs, &ZJUATRN,(YJUATRN).nonlocals));
AKUATRN_fc = ZJUATRN;
 /* line 3936: */
BKUATRN_upb = XOMATRN_int(AKUATRN_fc.F);
 /* line 3937: */
 /* line 3938: */
DKUATRN = BKUATRN_upb;
for ( CKUATRN_i = 1;
CKUATRN_i <= DKUATRN;
CKUATRN_i += 1 )
{ 
EKUATRN = (*(&(Tprocs->Seqstep))) ;
A_CALLPROC(EKUATRN,((*(&(Srow->Elem))), Tprocs, &FKUATRN),((*(&(Srow->Elem))), Tprocs, &FKUATRN,(EKUATRN).nonlocals));
GKUATRN_body = FKUATRN;
 /* line 3939: */
 /* line 3940: */
HKUATRN.Step = GKUATRN_body.S;
HKUATRN.Rest = QAAATRN_nilsequence;
IKUATRN = A_HEAP(A68_270 ) ;
(*IKUATRN) = HKUATRN ;
(*XJUATRN_nextelem) = IKUATRN;
 /* line 3941: */
 /* line 3942: */
XJUATRN_nextelem = (&((*XJUATRN_nextelem)->Rest));
}
 /* line 3943: */
JKUATRN.S = A_UNITE(KKUATRN,mode16,16,WJUATRN_newbody);
 /* line 3944: */
JKUATRN.C = A68_TRUE;
LKUATRN = JKUATRN;
} 
A_PROC_EXIT(seqrow_expand);
*ReturnedValue = (LKUATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  PKUATRN_seqrepl_expand(A68_278 * Srepl, A68_414 * Tprocs, A68_401  *ReturnedValue, void *NonLocals)
#define NL(x) (((QKUATRN_seqrepl_expand *)NonLocals)->x)
{ 
A68_270 * RKUATRN_newbody;
A68_270 ** SKUATRN_nextelem;
A68_477  TKUATRN;  /* avoid structure result */
A68_477  UKUATRN_repl;
A68_421  VKUATRN;  /* CALL */
A68_378  WKUATRN;  /* avoid structure result */
A68_378  XKUATRN_rc;
A68_INT  YKUATRN_lwb;
A68_INT  ZKUATRN_upb;
A68_INT  ALUATRN_i;
A68_INT  BLUATRN;  /* to part of loop */
A68_INT  CLUATRN;  /* YIELD */
A68_INT * DLUATRN;  /* YIELD */
A68_444  ELUATRN;  /* CALL */
A68_401  FLUATRN;  /* avoid structure result */
A68_401  GLUATRN_body;
A68_270  HLUATRN;  /* collateral clause result */
A68_270 * ILUATRN;  /* YIELD */
A68_401  JLUATRN;  /* collateral clause result */
A68_271  KLUATRN;  /* OPERATORS - mode -> union mode */
A68_401  LLUATRN;  /* clause result */
A_PROC_ENTRY(seqrepl_expand);
 /* line 3947: */
 /* line 3948: */
{ 
RKUATRN_newbody = QAAATRN_nilsequence;
 /* line 3949: */
SKUATRN_nextelem = (&RKUATRN_newbody);
 /* line 3950: */
QVOATRN_get_replicator( (*(&(Srepl->Repl))), NL(TXRATRN_oldenv), &TKUATRN );
UKUATRN_repl = TKUATRN;
 /* line 3951: */
VKUATRN = (*(&(Tprocs->Range))) ;
A_CALLPROC(VKUATRN,(UKUATRN_repl.Range, Tprocs, &WKUATRN),(UKUATRN_repl.Range, Tprocs, &WKUATRN,(VKUATRN).nonlocals));
XKUATRN_rc = WKUATRN;
 /* line 3952: */
YKUATRN_lwb = XOMATRN_int(XKUATRN_rc.R.Lwb);
 /* line 3953: */
ZKUATRN_upb = XOMATRN_int(XKUATRN_rc.R.Upb);
 /* line 3954: */
 /* line 3955: */
BLUATRN = ZKUATRN_upb;
for ( ALUATRN_i = YKUATRN_lwb;
ALUATRN_i <= BLUATRN;
ALUATRN_i += 1 )
{ 
CLUATRN = UKUATRN_repl.Intno ;
DLUATRN = (&A_VINDEX((*NL(VXRATRN_repldecs)),CLUATRN)) ;
(*DLUATRN) = ALUATRN_i;
 /* line 3956: */
ELUATRN = (*(&(Tprocs->Seqstep))) ;
A_CALLPROC(ELUATRN,((*(&(Srepl->Body))), Tprocs, &FLUATRN),((*(&(Srepl->Body))), Tprocs, &FLUATRN,(ELUATRN).nonlocals));
GLUATRN_body = FLUATRN;
 /* line 3957: */
 /* line 3958: */
HLUATRN.Step = GLUATRN_body.S;
HLUATRN.Rest = QAAATRN_nilsequence;
ILUATRN = A_HEAP(A68_270 ) ;
(*ILUATRN) = HLUATRN ;
(*SKUATRN_nextelem) = ILUATRN;
 /* line 3959: */
 /* line 3960: */
SKUATRN_nextelem = (&((*SKUATRN_nextelem)->Rest));
}
 /* line 3961: */
JLUATRN.S = A_UNITE(KLUATRN,mode16,16,RKUATRN_newbody);
 /* line 3962: */
JLUATRN.C = A68_TRUE;
LLUATRN = JLUATRN;
} 
A_PROC_EXIT(seqrepl_expand);
*ReturnedValue = (LLUATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  PLUATRN_seqstep_expand(A68_271  Seqstep, A68_414 * Tprocs, A68_401  *ReturnedValue, void *NonLocals)
#define NL(x) (((QLUATRN_seqstep_expand *)NonLocals)->x)
{ 
A68_271  RLUATRN;  /* united object - for case conformity */
A68_276 * SLUATRN_sca;
A68_433  TLUATRN;  /* CALL */
A68_390  ULUATRN;  /* avoid structure result */
A68_390  VLUATRN_uc;
A68_200  WLUATRN;  /* avoid structure result */
A68_200  XLUATRN_t;
A68_400  YLUATRN;  /* avoid structure result */
A68_400  ZLUATRN_sc;
A68_BOOL  AMUATRN;  /* optbool result */
A68_401  BMUATRN;  /* collateral clause result */
A68_276  CMUATRN;  /* collateral clause result */
A68_276 * DMUATRN;  /* YIELD */
A68_271  EMUATRN;  /* OPERATORS - mode -> union mode */
A68_401  FMUATRN;  /* clause result */
A68_401  GMUATRN;  /* collateral clause result */
A68_277 * HMUATRN_sc;
A68_401  IMUATRN;  /* avoid structure result */
A68_278 * JMUATRN_sr;
A68_401  KMUATRN;  /* avoid structure result */
A68_280 * LMUATRN_sw;
A68_401  MMUATRN;  /* avoid structure result */
A68_274 * NMUATRN_pp;
A68_444  OMUATRN;  /* CALL */
A68_401  PMUATRN;  /* avoid structure result */
A68_401  QMUATRN_sc;
A68_271  RMUATRN;  /* united object - for case conformity */
A68_274 * SMUATRN_sp;
A68_444  VMUATRN;  /* CALL */
A68_401  WMUATRN;  /* avoid structure result */
A_PROC_ENTRY(seqstep_expand);
 /* line 3965: */
 /* line 3966: */
{ 
 /* line 3967: */
RLUATRN = Seqstep ;
switch ( RLUATRN.mode )
{ 
case 12: /* REF STRUCT(MODE222,REF MODE281)  */
SLUATRN_sca = (RLUATRN.data.mode12);
 /* line 3968: */
{ 
TLUATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(TLUATRN,((*(&(SLUATRN_sca->Input))), Tprocs, &ULUATRN),((*(&(SLUATRN_sca->Input))), Tprocs, &ULUATRN,(TLUATRN).nonlocals));
VLUATRN_uc = ULUATRN;
 /* line 3969: */
(*NL(WYRATRN_joinup)) = COPATRN_nulljoinup;
 /* line 3970: */
VUNATRN_unit_type( VLUATRN_uc.U, NL(LZRATRN_newfdec), NL(GXRATRN_newenv), &WLUATRN );
XLUATRN_t = WLUATRN;
 /* line 3971: */
A_CALLPROC(NL(GIUATRN_seqchoices),((*(&(SLUATRN_sca->Choices))), Tprocs, XLUATRN_t, IAAATRN_nilustr, &YLUATRN),((*(&(SLUATRN_sca->Choices))), Tprocs, XLUATRN_t, IAAATRN_nilustr, &YLUATRN,(NL(GIUATRN_seqchoices)).nonlocals));
ZLUATRN_sc = YLUATRN;
 /* line 3972: */
 /* line 3973: */
AMUATRN = VLUATRN_uc.C;
if ( ! AMUATRN )
{AMUATRN = ZLUATRN_sc.C;
}
if ( AMUATRN )
{ 
CMUATRN.Input = VLUATRN_uc.U;
CMUATRN.Choices = ZLUATRN_sc.S;
DMUATRN = A_HEAP(A68_276 ) ;
(*DMUATRN) = CMUATRN ;
BMUATRN.S = A_UNITE(EMUATRN,mode12,12,DMUATRN);
 /* line 3974: */
BMUATRN.C = A68_TRUE;
FMUATRN = BMUATRN;
} 
else
{ 
GMUATRN.S = Seqstep;
 /* line 3975: */
 /* line 3976: */
 /* line 3977: */
GMUATRN.C = A68_FALSE;
FMUATRN = GMUATRN;
} 
} 
break;
case 13: /* REF STRUCT(MODE184,MODE271,MODE271)  */
HMUATRN_sc = (RLUATRN.data.mode13);
 /* line 3978: */
GJUATRN_seqcond_expand( HMUATRN_sc, Tprocs, &IMUATRN );
FMUATRN = IMUATRN;
break;
case 14: /* REF STRUCT(MODE184,MODE271)  */
JMUATRN_sr = (RLUATRN.data.mode14);
 /* line 3979: */
A_CALLPROC(NL(OKUATRN_seqrepl_expand),(JMUATRN_sr, Tprocs, &KMUATRN),(JMUATRN_sr, Tprocs, &KMUATRN,(NL(OKUATRN_seqrepl_expand)).nonlocals));
FMUATRN = KMUATRN;
break;
case 17: /* REF STRUCT(MODE184,MODE271)  */
LMUATRN_sw = (RLUATRN.data.mode17);
 /* line 3980: */
VJUATRN_seqrow_expand( LMUATRN_sw, Tprocs, &MMUATRN );
FMUATRN = MMUATRN;
break;
case 10: /* REF STRUCT(REF MODE263,MODE222)  */
NMUATRN_pp = (RLUATRN.data.mode10);
 /* line 3981: */
{ 
OMUATRN = (*(&(AWLATRN_nulltprocs->Seqstep))) ;
A_CALLPROC(OMUATRN,(Seqstep, Tprocs, &PMUATRN),(Seqstep, Tprocs, &PMUATRN,(OMUATRN).nonlocals));
QMUATRN_sc = PMUATRN;
 /* line 3982: */
(*NL(WYRATRN_joinup)) = COPATRN_nulljoinup;
 /* line 3983: */
 /* line 3984: */
if ( QMUATRN_sc.C )
{ 
 /* line 3985: */
RMUATRN = QMUATRN_sc.S ;
switch ( RMUATRN.mode )
{ 
case 10: /* REF STRUCT(REF MODE263,MODE222)  */
SMUATRN_sp = (RMUATRN.data.mode10);
 /* line 3986: */
NGQATRN_const_check(TFQATRN_value, (*(&(SMUATRN_sp->Init))), NL(OZRATRN_newclose), NL(TZRATRN_diag));
break;
default: 
 /* line 3987: */
 /* line 3988: */
NKDAOST_sysfault(UMUATRN);
break;
} 
} 
 /* line 3989: */
 /* line 3990: */
 /* line 3991: */
FMUATRN = QMUATRN_sc;
} 
break;
default: 
 /* line 3992: */
 /* line 3993: */
VMUATRN = (*(&(AWLATRN_nulltprocs->Seqstep))) ;
A_CALLPROC(VMUATRN,(Seqstep, Tprocs, &WMUATRN),(Seqstep, Tprocs, &WMUATRN,(VMUATRN).nonlocals));
FMUATRN = WMUATRN;
break;
} 
} 
A_PROC_EXIT(seqstep_expand);
*ReturnedValue = (FMUATRN);
return;
} 
#undef NL
 /* line 3997: */

A_STATIC A68_VOID  BNUATRN_names_nameno(A68_263 * Namelist, A68_414 * Tprocs, A68_BOOL  Issource, A68_398  *ReturnedValue, void *NonLocals)
#define NL(x) (((CNUATRN_names_nameno *)NonLocals)->x)
{ 
A68_398  DNUATRN;  /* collateral clause result */
A68_398  ENUATRN;  /* clause result */
A68_INT  FNUATRN_nameno;
A68_300  GNUATRN;  /* OPERATORS - simple index */
A68_297  HNUATRN_nametype;
A68_424  INUATRN;  /* CALL */
A68_381  JNUATRN;  /* avoid structure result */
A68_381  KNUATRN_tc;
A68_415  LNUATRN;  /* CALL */
A68_372  MNUATRN;  /* avoid structure result */
A68_372  NNUATRN_ac;
A68_INT  ONUATRN_newnameno;
A68_398  PNUATRN;  /* avoid structure result */
A68_398  QNUATRN_rest;
A68_BOOL  RNUATRN;  /* optbool result */
A68_398  SNUATRN;  /* collateral clause result */
A68_263  TNUATRN;  /* collateral clause result */
A68_263 * UNUATRN;  /* YIELD */
A68_398  VNUATRN;  /* collateral clause result */
A_PROC_ENTRY(names_nameno);
 /* line 3998: */
 /* line 3999: */
{ 
 /* line 4000: */
if ( (Namelist==NAAATRN_nilnames) )
{ 
DNUATRN.N = NAAATRN_nilnames;
 /* line 4001: */
DNUATRN.C = A68_FALSE;
ENUATRN = DNUATRN;
} 
else
{ 
FNUATRN_nameno = (*(&(Namelist->Nameno)));
 /* line 4002: */
GNUATRN = (*(&(NL(Fdec)->Nametypes))) ;
HNUATRN_nametype = (*(&A_VINDEX(GNUATRN,FNUATRN_nameno)));
 /* line 4003: */
INUATRN = (*(&(Tprocs->Type))) ;
A_CALLPROC(INUATRN,(HNUATRN_nametype.Type, Tprocs, &JNUATRN),(HNUATRN_nametype.Type, Tprocs, &JNUATRN,(INUATRN).nonlocals));
KNUATRN_tc = JNUATRN;
 /* line 4004: */
LNUATRN = (*(&(Tprocs->Attr))) ;
A_CALLPROC(LNUATRN,(HNUATRN_nametype.Attr, Tprocs, &MNUATRN),(HNUATRN_nametype.Attr, Tprocs, &MNUATRN,(LNUATRN).nonlocals));
NNUATRN_ac = MNUATRN;
 /* line 4005: */
ONUATRN_newnameno = A_CALLPROC(NL(TCSATRN_add_nametype),(FNUATRN_nameno, HNUATRN_nametype.Name, KNUATRN_tc, NNUATRN_ac),(FNUATRN_nameno, HNUATRN_nametype.Name, KNUATRN_tc, NNUATRN_ac,(NL(TCSATRN_add_nametype)).nonlocals));
 /* line 4006: */
 /* line 4007: */
(*NL(XYRATRN_joinlist)) = GVPATRN_join_setup(FNUATRN_nameno, KNUATRN_tc.T, Issource, NL(OZRATRN_newclose), (*NL(XYRATRN_joinlist)));
 /* line 4009: */
A_CALLPROC(NL(ANUATRN_names_nameno),((*(&(Namelist->Rest))), Tprocs, Issource, &PNUATRN),((*(&(Namelist->Rest))), Tprocs, Issource, &PNUATRN,(NL(ANUATRN_names_nameno)).nonlocals));
QNUATRN_rest = PNUATRN;
 /* line 4010: */
RNUATRN = QNUATRN_rest.C;
if ( ! RNUATRN )
{ /* line 4011: */
RNUATRN = (ONUATRN_newnameno!=FNUATRN_nameno);
}
if ( RNUATRN )
{ 
TNUATRN.Nameno = ONUATRN_newnameno;
TNUATRN.Rest = QNUATRN_rest.N;
UNUATRN = A_HEAP(A68_263 ) ;
(*UNUATRN) = TNUATRN ;
SNUATRN.N = UNUATRN;
 /* line 4012: */
SNUATRN.C = A68_TRUE;
ENUATRN = SNUATRN;
} 
else
{ 
VNUATRN.N = Namelist;
 /* line 4013: */
 /* line 4014: */
 /* line 4015: */
VNUATRN.C = A68_FALSE;
ENUATRN = VNUATRN;
} 
} 
} 
A_PROC_EXIT(names_nameno);
*ReturnedValue = (ENUATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ZNUATRN_let_expand(A68_256 * L, A68_414 * Tprocs, A68_399  *ReturnedValue, void *NonLocals)
#define NL(x) (((AOUATRN_let_expand *)NonLocals)->x)
{ 
A68_442  BOUATRN;  /* CALL */
A68_399  COUATRN;  /* avoid structure result */
A68_399  DOUATRN_lc;
A68_399  EOUATRN;  /* clause result */
A_PROC_ENTRY(let_expand);
 /* line 4018: */
 /* line 4019: */
{ 
BOUATRN = (*(&(AWLATRN_nulltprocs->Let))) ;
A_CALLPROC(BOUATRN,(L, Tprocs, &COUATRN),(L, Tprocs, &COUATRN,(BOUATRN).nonlocals));
DOUATRN_lc = COUATRN;
 /* line 4020: */
TVPATRN_mark_join(NL(WYRATRN_joinup), NL(OZRATRN_newclose), NL(TZRATRN_diag));
 /* line 4021: */
 /* line 4022: */
EOUATRN = DOUATRN_lc;
} 
A_PROC_EXIT(let_expand);
*ReturnedValue = (EOUATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  IOUATRN_join_expand(A68_258 * Join, A68_414 * Tprocs, A68_404  *ReturnedValue, void *NonLocals)
#define NL(x) (((JOUATRN_join_expand *)NonLocals)->x)
{ 
A68_433  KOUATRN;  /* CALL */
A68_390  LOUATRN;  /* avoid structure result */
A68_390  MOUATRN_luc;
A68_433  NOUATRN;  /* CALL */
A68_390  OOUATRN;  /* avoid structure result */
A68_390  POUATRN_ruc;
A68_BOOL  QOUATRN;  /* optbool result */
A68_404  ROUATRN;  /* collateral clause result */
A68_258  SOUATRN;  /* collateral clause result */
A68_258 * TOUATRN;  /* YIELD */
A68_404  UOUATRN;  /* clause result */
A68_404  VOUATRN;  /* collateral clause result */
A_PROC_ENTRY(join_expand);
 /* line 4025: */
 /* line 4026: */
{ 
KOUATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(KOUATRN,((*(&(Join->From))), Tprocs, &LOUATRN),((*(&(Join->From))), Tprocs, &LOUATRN,(KOUATRN).nonlocals));
MOUATRN_luc = LOUATRN;
 /* line 4027: */
TVPATRN_mark_join(NL(WYRATRN_joinup), NL(OZRATRN_newclose), NL(TZRATRN_diag));
 /* line 4028: */
NOUATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(NOUATRN,((*(&(Join->To))), Tprocs, &OOUATRN),((*(&(Join->To))), Tprocs, &OOUATRN,(NOUATRN).nonlocals));
POUATRN_ruc = OOUATRN;
 /* line 4029: */
TVPATRN_mark_join(NL(WYRATRN_joinup), NL(OZRATRN_newclose), NL(TZRATRN_diag));
 /* line 4030: */
 /* line 4031: */
QOUATRN = MOUATRN_luc.C;
if ( ! QOUATRN )
{QOUATRN = POUATRN_ruc.C;
}
if ( QOUATRN )
{ 
SOUATRN.From = MOUATRN_luc.U;
SOUATRN.To = POUATRN_ruc.U;
TOUATRN = A_HEAP(A68_258 ) ;
(*TOUATRN) = SOUATRN ;
ROUATRN.J = TOUATRN;
 /* line 4032: */
ROUATRN.C = A68_TRUE;
UOUATRN = ROUATRN;
} 
else
{ 
VOUATRN.J = Join;
 /* line 4033: */
 /* line 4034: */
VOUATRN.C = A68_FALSE;
UOUATRN = VOUATRN;
} 
} 
A_PROC_EXIT(join_expand);
*ReturnedValue = (UOUATRN);
return;
} 
#undef NL

A_STATIC A68_259 * ZOUATRN_repljoin_expand(A68_259 * Rj, A68_414 * Tprocs, void *NonLocals)
#define NL(x) (((APUATRN_repljoin_expand *)NonLocals)->x)
{ 
A68_261 * BPUATRN_newjoins;
A68_261 ** CPUATRN_nextjoin;
A68_477  DPUATRN;  /* avoid structure result */
A68_477  EPUATRN_repl;
A68_421  FPUATRN;  /* CALL */
A68_378  GPUATRN;  /* avoid structure result */
A68_378  HPUATRN_rc;
A68_INT  IPUATRN_lwb;
A68_INT  JPUATRN_upb;
A68_INT  KPUATRN_i;
A68_INT  LPUATRN;  /* to part of loop */
A68_INT  MPUATRN;  /* YIELD */
A68_INT * NPUATRN;  /* YIELD */
A68_259 * OPUATRN_next;
A68_259  PPUATRN;  /* collateral clause result */
A68_259 * QPUATRN_nextrj;
A68_259  RPUATRN;  /* collateral clause result */
A68_259 * SPUATRN;  /* clause result */
A68_259 * TPUATRN;  /* YIELD */
A68_448  UPUATRN;  /* CALL */
A68_405  VPUATRN;  /* avoid structure result */
A68_405  WPUATRN_jc;
A68_259  XPUATRN;  /* collateral clause result */
A68_259 * YPUATRN;  /* YIELD */
A_PROC_ENTRY(repljoin_expand);
 /* line 4037: */
 /* line 4038: */
{ 
BPUATRN_newjoins = RAAATRN_niljoins;
 /* line 4039: */
CPUATRN_nextjoin = (&BPUATRN_newjoins);
 /* line 4041: */
 /* line 4042: */
if ( ((*(&(Rj->Repls)))!=BBAATRN_nilformulas) )
{ 
QVOATRN_get_replicator( (*(&((*(&(Rj->Repls)))->Formula))), NL(TXRATRN_oldenv), &DPUATRN );
EPUATRN_repl = DPUATRN;
 /* line 4043: */
FPUATRN = (*(&(Tprocs->Range))) ;
A_CALLPROC(FPUATRN,(EPUATRN_repl.Range, Tprocs, &GPUATRN),(EPUATRN_repl.Range, Tprocs, &GPUATRN,(FPUATRN).nonlocals));
HPUATRN_rc = GPUATRN;
 /* line 4044: */
IPUATRN_lwb = XOMATRN_int(HPUATRN_rc.R.Lwb);
 /* line 4045: */
JPUATRN_upb = XOMATRN_int(HPUATRN_rc.R.Upb);
 /* line 4046: */
 /* line 4047: */
LPUATRN = JPUATRN_upb;
for ( KPUATRN_i = IPUATRN_lwb;
KPUATRN_i <= LPUATRN;
KPUATRN_i += 1 )
{ 
MPUATRN = EPUATRN_repl.Intno ;
NPUATRN = (&A_VINDEX((*NL(VXRATRN_repldecs)),MPUATRN)) ;
(*NPUATRN) = KPUATRN_i;
 /* line 4048: */
OPUATRN_next = (A_HEAP(A68_259 ));
PPUATRN.Repls = (*(&((*(&(Rj->Repls)))->Rest)));
PPUATRN.Joins = (*(&(Rj->Joins)));
(*OPUATRN_next) = PPUATRN;
 /* line 4049: */
QPUATRN_nextrj = A_CALLPROC(NL(YOUATRN_repljoin_expand),(OPUATRN_next, Tprocs),(OPUATRN_next, Tprocs,(NL(YOUATRN_repljoin_expand)).nonlocals));
 /* line 4050: */
(*CPUATRN_nextjoin) = (*(&(QPUATRN_nextrj->Joins)));
 /* line 4051: */
for ( ;; )
{ 
if ( !(((*CPUATRN_nextjoin)!=RAAATRN_niljoins)) ) break;
CPUATRN_nextjoin = (&((*CPUATRN_nextjoin)->Rest));
}
 /* line 4052: */
}
 /* line 4053: */
RPUATRN.Repls = BBAATRN_nilformulas;
 /* line 4054: */
RPUATRN.Joins = BPUATRN_newjoins;
TPUATRN = A_HEAP(A68_259 ) ;
(*TPUATRN) = RPUATRN ;
SPUATRN = TPUATRN;
} 
else
{ 
UPUATRN = (*(&(Tprocs->Joins))) ;
A_CALLPROC(UPUATRN,((*(&(Rj->Joins))), Tprocs, &VPUATRN),((*(&(Rj->Joins))), Tprocs, &VPUATRN,(UPUATRN).nonlocals));
WPUATRN_jc = VPUATRN;
 /* line 4055: */
 /* line 4056: */
if ( WPUATRN_jc.C )
{ 
XPUATRN.Repls = BBAATRN_nilformulas;
 /* line 4057: */
XPUATRN.Joins = WPUATRN_jc.J;
 /* line 4058: */
YPUATRN = A_HEAP(A68_259 ) ;
(*YPUATRN) = XPUATRN ;
SPUATRN = YPUATRN;
} 
else
{ 
 /* line 4059: */
 /* line 4060: */
SPUATRN = Rj;
} 
} 
} 
A_PROC_EXIT(repljoin_expand);
return( SPUATRN );
} 
#undef NL

A_STATIC A68_VOID  CQUATRN_step_expand(A68_252  Step, A68_414 * Tprocs, A68_406  *ReturnedValue, void *NonLocals)
#define NL(x) (((DQUATRN_step_expand *)NonLocals)->x)
{ 
A68_252  EQUATRN;  /* united object - for case conformity */
A68_259 * FQUATRN_rj;
A68_406  GQUATRN;  /* collateral clause result */
A68_252  HQUATRN;  /* OPERATORS - mode -> union mode */
A68_259 * IQUATRN;  /* YIELD */
A68_406  JQUATRN;  /* clause result */
A68_449  KQUATRN;  /* CALL */
A68_406  LQUATRN;  /* avoid structure result */
A_PROC_ENTRY(step_expand);
 /* line 4064: */
 /* line 4065: */
{ 
 /* line 4066: */
EQUATRN = Step ;
switch ( EQUATRN.mode )
{ 
case 11: /* REF STRUCT(REF MODE196,REF MODE261)  */
FQUATRN_rj = (EQUATRN.data.mode11);
IQUATRN = A_CALLPROC(NL(YOUATRN_repljoin_expand),(FQUATRN_rj, Tprocs),(FQUATRN_rj, Tprocs,(NL(YOUATRN_repljoin_expand)).nonlocals)) ;
GQUATRN.S = A_UNITE(HQUATRN,mode11,11,IQUATRN);
 /* line 4067: */
GQUATRN.C = A68_TRUE;
JQUATRN = GQUATRN;
break;
default: 
 /* line 4068: */
 /* line 4069: */
KQUATRN = (*(&(AWLATRN_nulltprocs->Step))) ;
A_CALLPROC(KQUATRN,(Step, Tprocs, &LQUATRN),(Step, Tprocs, &LQUATRN,(KQUATRN).nonlocals));
JQUATRN = LQUATRN;
break;
} 
} 
A_PROC_EXIT(step_expand);
*ReturnedValue = (JQUATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  PQUATRN_print_expand(A68_254 * Print, A68_414 * Tprocs, A68_396  *ReturnedValue, void *NonLocals)
#define NL(x) (((QQUATRN_print_expand *)NonLocals)->x)
{ 
A68_418  RQUATRN;  /* CALL */
A68_375  SQUATRN;  /* avoid structure result */
A68_375  TQUATRN_fc;
A68_471  UQUATRN;  /* collateral clause result */
A68_36  VQUATRN;  /* procedure value */
A68_471 * WQUATRN;  /* YIELD */
A68_471 * XQUATRN_notrace;
A68_184  YQUATRN;  /* united object - for case conformity */
A68_BOOL  ZQUATRN;  /* clause result */
A68_396  ARUATRN;  /* collateral clause result */
A68_396  BRUATRN;  /* clause result */
A_PROC_ENTRY(print_expand);
 /* line 4074: */
 /* line 4075: */
{ 
RQUATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(RQUATRN,((*(&(Print->Cond))), Tprocs, &SQUATRN),((*(&(Print->Cond))), Tprocs, &SQUATRN,(RQUATRN).nonlocals));
TQUATRN_fc = SQUATRN;
 /* line 4076: */
UQUATRN.Trace = A68_FALSE;
UQUATRN.Monitors = (*(&(NL(TZRATRN_diag)->Monitors)));
VQUATRN.fn.fn_global = NKDAOST_sysfault;
VQUATRN.nonlocals = A68_NIL;
UQUATRN.Flt = VQUATRN;
WQUATRN = A_HEAP(A68_471 ) ;
(*WQUATRN) = UQUATRN ;
XQUATRN_notrace = WQUATRN;
 /* line 4077: */
YQUATRN = TQUATRN_fc.F ;
switch ( YQUATRN.mode )
{ 
case 10: /* REF STRUCT(INT)  */
ZQUATRN = A68_TRUE;
break;
default: 
 /* line 4078: */
ZQUATRN = (XOMATRN_int(TQUATRN_fc.F)!=0);
break;
} 
if ( ZQUATRN )
{ 
JUOATRN_start_printing();
 /* line 4079: */
XVQATRN_printitems_print((*(&(Print->Print))), Tprocs, XQUATRN_notrace);
 /* line 4080: */
 /* line 4081: */
KUOATRN_end_printing();
} 
 /* line 4082: */
ARUATRN.P = Print;
 /* line 4083: */
ARUATRN.C = A68_FALSE;
BRUATRN = ARUATRN;
} 
A_PROC_EXIT(print_expand);
*ReturnedValue = (BRUATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  FRUATRN_fault_expand(A68_255 * Fault, A68_414 * Tprocs, A68_397  *ReturnedValue, void *NonLocals)
#define NL(x) (((GRUATRN_fault_expand *)NonLocals)->x)
{ 
A68_418  HRUATRN;  /* CALL */
A68_375  IRUATRN;  /* avoid structure result */
A68_375  JRUATRN_fc;
A68_184  KRUATRN;  /* united object - for case conformity */
A68_BOOL  LRUATRN;  /* clause result */
A68_473  MRUATRN;  /* collateral clause result */
A68_52  PRUATRN;  /* OPERATORS - mode -> union mode */
A68_VC  QRUATRN;  /* YIELD */
A68_52  RRUATRN;  /* OPERATORS - mode -> union mode */
A68_56  SRUATRN;  /* procedure value */
A68_85  TRUATRN;  /* OPERATORS - istruct -> vector */
A68_36  VRUATRN;  /* CALL */
A68_397  XRUATRN;  /* collateral clause result */
A68_397  YRUATRN;  /* clause result */
A_PROC_ENTRY(fault_expand);
 /* line 4086: */
 /* line 4087: */
{ 
HRUATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(HRUATRN,((*(&(Fault->Cond))), Tprocs, &IRUATRN),((*(&(Fault->Cond))), Tprocs, &IRUATRN,(HRUATRN).nonlocals));
JRUATRN_fc = IRUATRN;
 /* line 4088: */
KRUATRN = JRUATRN_fc.F ;
switch ( KRUATRN.mode )
{ 
case 10: /* REF STRUCT(INT)  */
LRUATRN = A68_TRUE;
break;
default: 
 /* line 4089: */
LRUATRN = (XOMATRN_int(JRUATRN_fc.F)!=0);
break;
} 
if ( LRUATRN )
{ 
QRUATRN = ORUATRN ;
MRUATRN.data[0] = A_UNITE(PRUATRN,mode7,7,QRUATRN);
SRUATRN.fn.fn_global = LRAAOSL_newline;
SRUATRN.nonlocals = A68_NIL;
MRUATRN.data[1] = A_UNITE(RRUATRN,mode12,12,SRUATRN);
GFBAOSL_put(LEAAOST_out, A_HISVEC(TRUATRN,MRUATRN,2,A68_52 ));
 /* line 4090: */
SMPATRN_setfailure(NL(OZRATRN_newclose), NL(TZRATRN_diag));
 /* line 4091: */
JUOATRN_start_printing();
 /* line 4092: */
XVQATRN_printitems_print((*(&(Fault->Fault))), Tprocs, NL(TZRATRN_diag));
 /* line 4093: */
KUOATRN_end_printing();
 /* line 4094: */
 /* line 4095: */
VRUATRN = (*(&(NL(TZRATRN_diag)->Flt))) ;
A_CALLPROC(VRUATRN,(WRUATRN),(WRUATRN,(VRUATRN).nonlocals));
} 
 /* line 4096: */
XRUATRN.F = Fault;
 /* line 4097: */
XRUATRN.C = A68_FALSE;
YRUATRN = XRUATRN;
} 
A_PROC_EXIT(fault_expand);
*ReturnedValue = (YRUATRN);
return;
} 
#undef NL

A_STATIC A68_BOOL  BSUATRN_is_output(A68_222  Body, void *NonLocals)
#define NL(x) (((CSUATRN_is_output *)NonLocals)->x)
{ 
A68_222  DSUATRN;  /* united object - for case conformity */
A68_245 * ESUATRN_us;
A68_222  FSUATRN;  /* united object - for case conformity */
A68_BOOL  GSUATRN;  /* clause result */
A68_244 * HSUATRN_uq;
A68_222  ISUATRN;  /* united object - for case conformity */
A68_246 * JSUATRN_ua;
A68_248 * KSUATRN_ub;
A_PROC_ENTRY(is_output);
 /* line 4101: */
 /* line 4102: */
{ 
 /* line 4103: */
DSUATRN = Body ;
switch ( DSUATRN.mode )
{ 
case 29: /* REF STRUCT(REF MODE251,MODE222)  */
ESUATRN_us = (DSUATRN.data.mode29);
FSUATRN = (*(&(ESUATRN_us->Output))) ;
switch ( FSUATRN.mode )
{ 
case 34: /* REF STRUCT(INT)  */
GSUATRN = A68_FALSE;
break;
default: 
 /* line 4104: */
GSUATRN = A68_TRUE;
break;
} 
break;
case 28: /* REF STRUCT(REF MODE270,MODE222)  */
HSUATRN_uq = (DSUATRN.data.mode28);
ISUATRN = (*(&(HSUATRN_uq->Output))) ;
switch ( ISUATRN.mode )
{ 
case 34: /* REF STRUCT(INT)  */
GSUATRN = A68_FALSE;
break;
default: 
 /* line 4105: */
GSUATRN = A68_TRUE;
break;
} 
break;
case 30: /* REF STRUCT(MODE222,MODE175)  */
JSUATRN_ua = (DSUATRN.data.mode30);
 /* line 4106: */
GSUATRN = A_CALLPROC(NL(ASUATRN_is_output),((*(&(JSUATRN_ua->Unit)))),((*(&(JSUATRN_ua->Unit))),(NL(ASUATRN_is_output)).nonlocals));
break;
case 32: /* REF STRUCT(MODE222)  */
KSUATRN_ub = (DSUATRN.data.mode32);
 /* line 4107: */
GSUATRN = A_CALLPROC(NL(ASUATRN_is_output),((*(&(KSUATRN_ub->Unit)))),((*(&(KSUATRN_ub->Unit))),(NL(ASUATRN_is_output)).nonlocals));
break;
default: 
 /* line 4108: */
 /* line 4109: */
GSUATRN = A68_TRUE;
break;
} 
} 
A_PROC_EXIT(is_output);
return( GSUATRN );
} 
#undef NL

A_STATIC A68_VOID  OSUATRN_fnbody_expand(A68_294  Fnbody, A68_414 * Tprocs, A68_408  *ReturnedValue, void *NonLocals)
#define NL(x) (((PSUATRN_fnbody_expand *)NonLocals)->x)
{ 
A68_451  QSUATRN;  /* CALL */
A68_408  RSUATRN;  /* avoid structure result */
A68_408  SSUATRN_fc;
A68_294  TSUATRN;  /* united object - for case conformity */
A68_267 * USUATRN_ut;
A68_408  VSUATRN;  /* avoid structure result */
A68_408  WSUATRN_fdc;
A68_263 * XSUATRN_ts;
A68_408  YSUATRN;  /* clause result */
A68_288 * ZSUATRN_ad;
A68_289 * ATUATRN_id;
A68_290 * BTUATRN_rm;
A68_291 * CTUATRN_sp;
A68_292 * DTUATRN_ts;
A68_293 * ETUATRN_bc;
A68_294  FTUATRN;  /* united object - for case conformity */
A68_286 * GTUATRN_rf;
A68_288 * HTUATRN_ad;
A68_289 * ITUATRN_id;
A68_290 * JTUATRN_rm;
A68_291 * KTUATRN_sp;
A68_292 * LTUATRN_ts;
A68_408  OTUATRN;  /* collateral clause result */
A_PROC_ENTRY(fnbody_expand);
 /* line 4112: */
 /* line 4113: */
{ 
QSUATRN = (*(&(AWLATRN_nulltprocs->Fnbody))) ;
A_CALLPROC(QSUATRN,(Fnbody, Tprocs, &RSUATRN),(Fnbody, Tprocs, &RSUATRN,(QSUATRN).nonlocals));
SSUATRN_fc = RSUATRN;
 /* line 4115: */
 /* line 4116: */
TSUATRN = SSUATRN_fc.F ;
switch ( TSUATRN.mode )
{ 
case 1: /* REF STRUCT(MODE222)  */
USUATRN_ut = (TSUATRN.data.mode1);
 /* line 4117: */
{ 
A_CALLPROC(NL(OFTATRN_fnbody_decl),(USUATRN_ut, SSUATRN_fc.C, &VSUATRN),(USUATRN_ut, SSUATRN_fc.C, &VSUATRN,(NL(OFTATRN_fnbody_decl)).nonlocals));
WSUATRN_fdc = VSUATRN;
 /* line 4118: */
TVPATRN_mark_join(NL(WYRATRN_joinup), NL(OZRATRN_newclose), NL(TZRATRN_diag));
 /* line 4119: */
 /* line 4120: */
if ( A_CALLPROC(NL(ASUATRN_is_output),((*(&(USUATRN_ut->Tag)))),((*(&(USUATRN_ut->Tag))),(NL(ASUATRN_is_output)).nonlocals)) )
{ 
XSUATRN_ts = (*(&(NL(LZRATRN_newfdec)->Outputs)));
 /* line 4121: */
for ( ;; )
{ 
 /* line 4122: */
if ( !((XSUATRN_ts!=NAAATRN_nilnames)) ) break;
(*NL(WYRATRN_joinup)) = JSPATRN_find_joinup((*(&(XSUATRN_ts->Nameno))), (*NL(XYRATRN_joinlist)));
 /* line 4123: */
TVPATRN_mark_join(NL(WYRATRN_joinup), NL(OZRATRN_newclose), NL(TZRATRN_diag));
 /* line 4124: */
 /* line 4125: */
XSUATRN_ts = (*(&(XSUATRN_ts->Rest)));
}
 /* line 4126: */
} 
 /* line 4127: */
(*NL(XYRATRN_joinlist)) = IXPATRN_join_completeness((*NL(XYRATRN_joinlist)), NL(OZRATRN_newclose), NL(TZRATRN_diag));
 /* line 4128: */
 /* line 4129: */
 /* line 4130: */
YSUATRN = WSUATRN_fdc;
} 
break;
case 6: /* REF STRUCT(INT,MODE222,MODE184,MODE222,MODE184)  */
ZSUATRN_ad = (TSUATRN.data.mode6);
{ 
XLQATRN_adelay_check(ZSUATRN_ad, A68_FALSE, NL(OZRATRN_newclose), NL(TZRATRN_diag));
 /* line 4131: */
YSUATRN = SSUATRN_fc;
} 
break;
case 7: /* REF STRUCT(MODE222,MODE184)  */
ATUATRN_id = (TSUATRN.data.mode7);
{ 
GMQATRN_idelay_check(ATUATRN_id, A68_FALSE, NL(OZRATRN_newclose), NL(TZRATRN_diag));
 /* line 4132: */
YSUATRN = SSUATRN_fc;
} 
break;
case 8: /* REF STRUCT(MODE222)  */
BTUATRN_rm = (TSUATRN.data.mode8);
{ 
NMQATRN_ram_check(BTUATRN_rm, A68_FALSE, NL(OZRATRN_newclose), NL(TZRATRN_diag));
 /* line 4133: */
YSUATRN = SSUATRN_fc;
} 
break;
case 9: /* REF STRUCT(INT,MODE184,MODE222,MODE184)  */
CTUATRN_sp = (TSUATRN.data.mode9);
{ 
RKQATRN_sample_check(CTUATRN_sp, A68_FALSE, NL(OZRATRN_newclose), NL(TZRATRN_diag));
 /* line 4134: */
YSUATRN = SSUATRN_fc;
} 
break;
case 10: /* REF STRUCT(BOOL,INT,MODE262,MODE184,MODE222,MODE184)  */
DTUATRN_ts = (TSUATRN.data.mode10);
{ 
UJQATRN_timescale_check(DTUATRN_ts, A68_FALSE, NL(OZRATRN_newclose), NL(TZRATRN_diag));
 /* line 4135: */
YSUATRN = SSUATRN_fc;
} 
break;
case 11: /* REF STRUCT(REF MODE174,BOOL,MODE294)  */
ETUATRN_bc = (TSUATRN.data.mode11);
 /* line 4136: */
{ 
 /* line 4137: */
if ( (*(&(ETUATRN_bc->Check))) )
{ 
 /* line 4138: */
FTUATRN = (*(&(ETUATRN_bc->Fnbody))) ;
switch ( FTUATRN.mode )
{ 
case 4: /* REF STRUCT(INT)  */
GTUATRN_rf = (FTUATRN.data.mode4);
 /* line 4139: */
DJQATRN_reform_check(GTUATRN_rf, NL(OZRATRN_newclose), NL(TZRATRN_diag));
break;
case 6: /* REF STRUCT(INT,MODE222,MODE184,MODE222,MODE184)  */
HTUATRN_ad = (FTUATRN.data.mode6);
 /* line 4140: */
XLQATRN_adelay_check(HTUATRN_ad, A68_TRUE, NL(OZRATRN_newclose), NL(TZRATRN_diag));
break;
case 7: /* REF STRUCT(MODE222,MODE184)  */
ITUATRN_id = (FTUATRN.data.mode7);
 /* line 4141: */
GMQATRN_idelay_check(ITUATRN_id, A68_TRUE, NL(OZRATRN_newclose), NL(TZRATRN_diag));
break;
case 8: /* REF STRUCT(MODE222)  */
JTUATRN_rm = (FTUATRN.data.mode8);
 /* line 4142: */
NMQATRN_ram_check(JTUATRN_rm, A68_TRUE, NL(OZRATRN_newclose), NL(TZRATRN_diag));
break;
case 9: /* REF STRUCT(INT,MODE184,MODE222,MODE184)  */
KTUATRN_sp = (FTUATRN.data.mode9);
 /* line 4143: */
RKQATRN_sample_check(KTUATRN_sp, A68_TRUE, NL(OZRATRN_newclose), NL(TZRATRN_diag));
break;
case 10: /* REF STRUCT(BOOL,INT,MODE262,MODE184,MODE222,MODE184)  */
LTUATRN_ts = (FTUATRN.data.mode10);
 /* line 4144: */
UJQATRN_timescale_check(LTUATRN_ts, A68_TRUE, NL(OZRATRN_newclose), NL(TZRATRN_diag));
break;
default: 
 /* line 4145: */
 /* line 4146: */
NKDAOST_sysfault(NTUATRN);
break;
} 
} 
 /* line 4147: */
OTUATRN.F = (*(&(ETUATRN_bc->Fnbody)));
 /* line 4148: */
 /* line 4149: */
 /* line 4150: */
OTUATRN.C = A68_TRUE;
YSUATRN = OTUATRN;
} 
break;
default: 
 /* line 4151: */
YSUATRN = SSUATRN_fc;
break;
} 
} 
A_PROC_EXIT(fnbody_expand);
*ReturnedValue = (YSUATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  TTUATRN_attr_sort(A68_175  A, A68_INT * Maxattrno, void *NonLocals)
#define NL(x) (((UTUATRN_attr_sort *)NonLocals)->x)
{ 
A68_175  VTUATRN;  /* united object - for case conformity */
A68_176 * WTUATRN_an;
A68_302  XTUATRN;  /* OPERATORS - simple index */
A68_INT  YTUATRN;  /* YIELD */
A68_181 * ZTUATRN_ad;
A68_BOOL  AUUATRN;  /* optbool result */
A68_178 * BUUATRN_atr;
A68_178 * CUUATRN_as;
A68_179 * DUUATRN_ab;
A_PROC_ENTRY(attr_sort);
 /* line 4169: */
 /* line 4172: */
{ 
 /* line 4173: */
VTUATRN = A ;
switch ( VTUATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
WTUATRN_an = (VTUATRN.data.mode1);
 /* line 4174: */
{ 
XTUATRN = (*(&(NL(OZRATRN_newclose).Env->Attrs))) ;
YTUATRN = (*(&(WTUATRN_an->Attrno))) ;
ZTUATRN_ad = (*(&A_VINDEX(XTUATRN,YTUATRN)));
 /* line 4175: */
AUUATRN = ((*(&(ZTUATRN_ad->Sort)))==PKAATRN_localdec);
if ( AUUATRN )
{ /* line 4176: */
AUUATRN = ((*(&(WTUATRN_an->Attrno)))>(*Maxattrno));
}
if ( AUUATRN )
{ 
 /* line 4177: */
 /* line 4178: */
 /* line 4179: */
(*Maxattrno) = (*(&(WTUATRN_an->Attrno)));
} 
} 
break;
case 3: /* REF STRUCT(MODE175,REF MODE178)  */
BUUATRN_atr = (VTUATRN.data.mode3);
{ 
CUUATRN_as = BUUATRN_atr;
 /* line 4180: */
for ( ;; )
{ 
 /* line 4181: */
if ( !((CUUATRN_as!=DBAATRN_nilattrstr)) ) break;
A_CALLPROC(NL(STUATRN_attr_sort),((*(&(CUUATRN_as->Elem))), Maxattrno),((*(&(CUUATRN_as->Elem))), Maxattrno,(NL(STUATRN_attr_sort)).nonlocals));
 /* line 4182: */
 /* line 4183: */
CUUATRN_as = (*(&(CUUATRN_as->Rest)));
}
 /* line 4184: */
 /* line 4185: */
} 
break;
case 4: /* REF STRUCT(MODE175)  */
DUUATRN_ab = (VTUATRN.data.mode4);
 /* line 4186: */
 /* line 4187: */
A_CALLPROC(NL(STUATRN_attr_sort),((*(&(DUUATRN_ab->Attr))), Maxattrno),((*(&(DUUATRN_ab->Attr))), Maxattrno,(NL(STUATRN_attr_sort)).nonlocals));
break;
default: 
 /* line 4188: */
/*SKIP*/;
break;
} 
} 
A_PROC_EXIT(attr_sort);
return;
} 
#undef NL

A_STATIC A68_VOID  HUUATRN_type_sort(A68_200  T, A68_INT * Maxtypeno, void *NonLocals)
#define NL(x) (((IUUATRN_type_sort *)NonLocals)->x)
{ 
A68_200  JUUATRN;  /* united object - for case conformity */
A68_201 * KUUATRN_tn;
A68_304  LUUATRN;  /* OPERATORS - simple index */
A68_INT  MUUATRN;  /* YIELD */
A68_215 * NUUATRN_td;
A68_BOOL  OUUATRN;  /* optbool result */
A68_202 * PUUATRN_tr;
A68_203 * QUUATRN_tstr;
A68_203 * RUUATRN_ts;
A68_204 * SUUATRN_tfn;
A68_206 * TUUATRN_tg;
A68_205 * UUUATRN_tb;
A_PROC_ENTRY(type_sort);
 /* line 4191: */
 /* line 4194: */
{ 
 /* line 4195: */
JUUATRN = T ;
switch ( JUUATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
KUUATRN_tn = (JUUATRN.data.mode1);
 /* line 4196: */
{ 
LUUATRN = (*(&(NL(OZRATRN_newclose).Env->Types))) ;
MUUATRN = (*(&(KUUATRN_tn->Typeno))) ;
NUUATRN_td = (*(&A_VINDEX(LUUATRN,MUUATRN)));
 /* line 4197: */
OUUATRN = ((*(&(NUUATRN_td->Sort)))==PKAATRN_localdec);
if ( OUUATRN )
{ /* line 4198: */
OUUATRN = ((*(&(KUUATRN_tn->Typeno)))>(*Maxtypeno));
}
if ( OUUATRN )
{ 
 /* line 4199: */
 /* line 4200: */
 /* line 4201: */
(*Maxtypeno) = (*(&(KUUATRN_tn->Typeno)));
} 
} 
break;
case 2: /* REF STRUCT(MODE184,MODE200)  */
PUUATRN_tr = (JUUATRN.data.mode2);
 /* line 4202: */
A_CALLPROC(NL(GUUATRN_type_sort),((*(&(PUUATRN_tr->Elem))), Maxtypeno),((*(&(PUUATRN_tr->Elem))), Maxtypeno,(NL(GUUATRN_type_sort)).nonlocals));
break;
case 3: /* REF STRUCT(MODE200,REF MODE203)  */
QUUATRN_tstr = (JUUATRN.data.mode3);
{ 
RUUATRN_ts = QUUATRN_tstr;
 /* line 4203: */
for ( ;; )
{ 
 /* line 4204: */
if ( !((RUUATRN_ts!=GAAATRN_niltstr)) ) break;
A_CALLPROC(NL(GUUATRN_type_sort),((*(&(RUUATRN_ts->Elem))), Maxtypeno),((*(&(RUUATRN_ts->Elem))), Maxtypeno,(NL(GUUATRN_type_sort)).nonlocals));
 /* line 4205: */
 /* line 4206: */
RUUATRN_ts = (*(&(RUUATRN_ts->Rest)));
}
 /* line 4207: */
 /* line 4208: */
} 
break;
case 4: /* REF STRUCT(MODE200,MODE200)  */
SUUATRN_tfn = (JUUATRN.data.mode4);
{ 
A_CALLPROC(NL(GUUATRN_type_sort),((*(&(SUUATRN_tfn->To))), Maxtypeno),((*(&(SUUATRN_tfn->To))), Maxtypeno,(NL(GUUATRN_type_sort)).nonlocals));
 /* line 4209: */
 /* line 4210: */
 /* line 4211: */
A_CALLPROC(NL(GUUATRN_type_sort),((*(&(SUUATRN_tfn->From))), Maxtypeno),((*(&(SUUATRN_tfn->From))), Maxtypeno,(NL(GUUATRN_type_sort)).nonlocals));
} 
break;
case 6: /* REF STRUCT(MODE184,MODE200)  */
TUUATRN_tg = (JUUATRN.data.mode6);
 /* line 4212: */
A_CALLPROC(NL(GUUATRN_type_sort),((*(&(TUUATRN_tg->Char))), Maxtypeno),((*(&(TUUATRN_tg->Char))), Maxtypeno,(NL(GUUATRN_type_sort)).nonlocals));
break;
case 5: /* REF STRUCT(MODE200)  */
UUUATRN_tb = (JUUATRN.data.mode5);
 /* line 4213: */
 /* line 4214: */
A_CALLPROC(NL(GUUATRN_type_sort),((*(&(UUUATRN_tb->Type))), Maxtypeno),((*(&(UUUATRN_tb->Type))), Maxtypeno,(NL(GUUATRN_type_sort)).nonlocals));
break;
default: 
 /* line 4215: */
/*SKIP*/;
break;
} 
} 
A_PROC_EXIT(type_sort);
return;
} 
#undef NL
 /* line 4218: */

A_STATIC A68_VOID  AVUATRN_macparam_sort(A68_264  Params, A68_INT * Maxattrno, A68_INT * Maxtypeno, A68_INT * Maxfnno, void *NonLocals)
#define NL(x) (((BVUATRN_macparam_sort *)NonLocals)->x)
{ 
A68_265 * CVUATRN_p;
A68_INT  DVUATRN;  /* forall loop counter */
A68_266  EVUATRN;  /* united object - for case conformity */
A68_183  FVUATRN_ag;
A68_INT  GVUATRN_mtattrno;
A68_209  HVUATRN_tg;
A68_INT  IVUATRN_mttypeno;
A68_267  JVUATRN_cg;
A68_200  KVUATRN;  /* avoid structure result */
A68_200  LVUATRN_ty;
A68_INT  MVUATRN_mctypeno;
A68_262  NVUATRN_ig;
A68_306  OVUATRN;  /* OPERATORS - simple index */
A68_INT  PVUATRN;  /* YIELD */
A68_298 * QVUATRN_fd;
A68_BOOL  RVUATRN;  /* optbool result */
A68_294  SVUATRN;  /* united object - for case conformity */
A68_BOOL  TVUATRN;  /* clause result */
A_PROC_ENTRY(macparam_sort);
 /* line 4219: */
 /* line 4220: */
{ 
 /* line 4221: */
if ( ! A_VSTRUCTCOMP(Params,ABAATRN_nilmacparams) )
{ 
 /* line 4222: */
DVUATRN = Params.upb -1;
CVUATRN_p = Params.data;
for (;DVUATRN-- >= 0;
(CVUATRN_p++
) )
{
 /* line 4223: */
EVUATRN = (*(&(CVUATRN_p->Param))) ;
switch ( EVUATRN.mode )
{ 
case 1: /* STRUCT(MODE175)  */
FVUATRN_ag = (EVUATRN.data.mode1);
 /* line 4224: */
{ 
GVUATRN_mtattrno = 0;
 /* line 4225: */
A_CALLPROC(NL(STUATRN_attr_sort),(FVUATRN_ag.Tag, (&GVUATRN_mtattrno)),(FVUATRN_ag.Tag, (&GVUATRN_mtattrno),(NL(STUATRN_attr_sort)).nonlocals));
 /* line 4226: */
if ( (GVUATRN_mtattrno>(*Maxattrno)) )
{ 
 /* line 4227: */
 /* line 4228: */
(*Maxattrno) = GVUATRN_mtattrno;
} 
} 
break;
case 3: /* STRUCT(MODE200)  */
HVUATRN_tg = (EVUATRN.data.mode3);
 /* line 4229: */
{ 
IVUATRN_mttypeno = 0;
 /* line 4230: */
A_CALLPROC(NL(GUUATRN_type_sort),(HVUATRN_tg.Tag, (&IVUATRN_mttypeno)),(HVUATRN_tg.Tag, (&IVUATRN_mttypeno),(NL(GUUATRN_type_sort)).nonlocals));
 /* line 4231: */
if ( (IVUATRN_mttypeno>(*Maxtypeno)) )
{ 
 /* line 4232: */
 /* line 4233: */
(*Maxtypeno) = IVUATRN_mttypeno;
} 
} 
break;
case 4: /* STRUCT(MODE222)  */
JVUATRN_cg = (EVUATRN.data.mode4);
 /* line 4234: */
{ 
VUNATRN_unit_type( JVUATRN_cg.Tag, NL(OZRATRN_newclose).Fdec, NL(OZRATRN_newclose).Env, &KVUATRN );
LVUATRN_ty = KVUATRN;
 /* line 4235: */
MVUATRN_mctypeno = 0;
 /* line 4236: */
A_CALLPROC(NL(GUUATRN_type_sort),(LVUATRN_ty, (&MVUATRN_mctypeno)),(LVUATRN_ty, (&MVUATRN_mctypeno),(NL(GUUATRN_type_sort)).nonlocals));
 /* line 4237: */
if ( (MVUATRN_mctypeno>(*Maxtypeno)) )
{ 
 /* line 4238: */
 /* line 4239: */
(*Maxtypeno) = MVUATRN_mctypeno;
} 
} 
break;
case 5: /* STRUCT(INT,REF MODE264,MODE175)  */
NVUATRN_ig = (EVUATRN.data.mode5);
 /* line 4240: */
{ 
OVUATRN = (*(&(NL(OZRATRN_newclose).Env->Fns))) ;
PVUATRN = NVUATRN_ig.Fnno ;
QVUATRN_fd = (*(&A_VINDEX(OVUATRN,PVUATRN)));
 /* line 4241: */
 /* line 4242: */
RVUATRN = ((*(&(QVUATRN_fd->Sort)))==PKAATRN_localdec);
if ( RVUATRN )
{SVUATRN = (*(&(QVUATRN_fd->Fnbody))) ;
switch ( SVUATRN.mode )
{ 
case 12: /* REF STRUCT(INT)  */
TVUATRN = A68_FALSE;
break;
default: 
TVUATRN = A68_TRUE;
break;
} 
RVUATRN = TVUATRN;
}
 /* line 4243: */
if ( RVUATRN )
{ /* line 4244: */
RVUATRN = (NVUATRN_ig.Fnno>(*Maxfnno));
}
if ( RVUATRN )
{ 
 /* line 4245: */
 /* line 4246: */
 /* line 4247: */
 /* line 4248: */
(*Maxfnno) = NVUATRN_ig.Fnno;
} 
} 
break;
default: 
 /* line 4249: */
/*SKIP*/;
break;
} 
}
 /* line 4250: */
 /* line 4251: */
} 
} 
A_PROC_EXIT(macparam_sort);
return;
} 
#undef NL
 /* line 4256: */

A_STATIC A68_VOID  ZVUATRN_instance_outer(A68_262  Inst, A68_298 * Fdec, A68_392  Mpc, A68_414 * Tprocs, A68_393  *ReturnedValue, void *NonLocals)
#define NL(x) (((AWUATRN_instance_outer *)NonLocals)->x)
{ 
A68_307  BWUATRN_nf;
A68_INT  EWUATRN_oldfnno;
A68_BOOL  FWUATRN_specchanged;
A68_INT  GWUATRN_closno;
A68_INT  HWUATRN_newclosno;
A68_INT  IWUATRN_newfnno;
A68_264  JWUATRN;  /* != */
A68_502  LWUATRN_generator;   /* proc value of non-global proc */
A68_264  QWUATRN;  /* avoid structure result */
A68_264  RWUATRN_mp;
A68_265 * SWUATRN_n;
A68_265 * TWUATRN_m;
A68_264  UWUATRN;  /* forall yield */
A68_INT  VWUATRN;  /* forall loop counter */
A68_264  WWUATRN;  /* clause result */
A68_264  XWUATRN_xparams;
A68_307  YWUATRN_of;
A68_392  ZWUATRN;  /* collateral clause result */
A68_412  AXUATRN;  /* avoid structure result */
A68_412  BXUATRN_ofc;
A68_298 * CXUATRN_fdec;
A68_424  DXUATRN;  /* CALL */
A68_200  EXUATRN;  /* OPERATORS - mode -> union mode */
A68_204 * FXUATRN;  /* YIELD */
A68_381  GXUATRN;  /* avoid structure result */
A68_381  HXUATRN_tc;
A68_298 * IXUATRN_usedfdec;
A68_294  JXUATRN;  /* OPERATORS - mode -> union mode */
A68_294 * KXUATRN;  /* YIELD */
A68_264 * LXUATRN;  /* YIELD */
A68_415  MXUATRN;  /* CALL */
A68_372  NXUATRN;  /* avoid structure result */
A68_372  OXUATRN_ac;
A68_393  PXUATRN;  /* collateral clause result */
A68_393  QXUATRN;  /* clause result */
A_PROC_ENTRY(instance_outer);
 /* line 4257: */
 /* line 4258: */
{ 
 /* line 4259: */
if ( ((*(&(Fdec->Sort)))!=OKAATRN_outerdec) )
{ 
NKDAOST_sysfault(DWUATRN);
} 
 /* line 4260: */
EWUATRN_oldfnno = Inst.Fnno;
 /* line 4261: */
FWUATRN_specchanged = A68_FALSE;
 /* line 4262: */
GWUATRN_closno = (*(&((*(&(Fdec->Usage)))->Closureno)));
 /* line 4263: */
HWUATRN_newclosno = A_CALLPROC(NL(JFSATRN_find_closureno),(GWUATRN_closno, Mpc.M, (&FWUATRN_specchanged)),(GWUATRN_closno, Mpc.M, (&FWUATRN_specchanged),(NL(JFSATRN_find_closureno)).nonlocals));
 /* line 4264: */
IWUATRN_newfnno = (-1);
 /* line 4265: */
 /* line 4266: */
 /* line 4268: */
if ( (HWUATRN_newclosno==(-1)) )
{ 
 /* line 4269: */
JWUATRN = Mpc.M ;
if ( ! A_VSTRUCTCOMP(JWUATRN,ABAATRN_nilmacparams) )
{ 
A_CLOSURE( LWUATRN_generator, MWUATRN_generator, NWUATRN_generator );
(( NWUATRN_generator * ) ( LWUATRN_generator.nonlocals )) -> Mpc = Mpc;
A_CALLPROC(LWUATRN_generator,(A68_FALSE, &QWUATRN),(A68_FALSE, &QWUATRN,(LWUATRN_generator).nonlocals));
RWUATRN_mp = QWUATRN;
 /* line 4270: */
UWUATRN = Mpc.M ;
VWUATRN = RWUATRN_mp.upb -1;
if ( VWUATRN != UWUATRN.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
SWUATRN_n = RWUATRN_mp.data;
TWUATRN_m = UWUATRN.data;
for (;VWUATRN-- >= 0;
(SWUATRN_n++
,TWUATRN_m++
) )
{
(*SWUATRN_n) = (*TWUATRN_m);
}
 /* line 4271: */
 /* line 4272: */
 /* line 4273: */
WWUATRN = RWUATRN_mp;
} 
else
{ 
WWUATRN = ABAATRN_nilmacparams;
} 
XWUATRN_xparams = WWUATRN;
 /* line 4274: */
YWUATRN_of = (*(&(ELCATRN_find_outers(GWUATRN_closno, NL(Oldclosure), NL(Msg))->Outer)));
 /* line 4275: */
ZWUATRN.M = XWUATRN_xparams;
ZWUATRN.C = Mpc.C;
 /* line 4276: */
 /* line 4277: */
A_CALLPROC(NL(HURATRN_outerfn_expand),(YWUATRN_of, Tprocs, ZWUATRN, (*NL(UYRATRN_inst_mstable)), NL(GXRATRN_newenv), (&FWUATRN_specchanged), (*(&(NL(TZRATRN_diag)->Monitors))), &AXUATRN),(YWUATRN_of, Tprocs, ZWUATRN, (*NL(UYRATRN_inst_mstable)), NL(GXRATRN_newenv), (&FWUATRN_specchanged), (*(&(NL(TZRATRN_diag)->Monitors))), &AXUATRN,(NL(HURATRN_outerfn_expand)).nonlocals));
BXUATRN_ofc = AXUATRN;
 /* line 4279: */
HWUATRN_newclosno = A_CALLPROC(NL(DTRATRN_add_outerfn),(GWUATRN_closno, BXUATRN_ofc, XWUATRN_xparams, FWUATRN_specchanged),(GWUATRN_closno, BXUATRN_ofc, XWUATRN_xparams, FWUATRN_specchanged,(NL(DTRATRN_add_outerfn)).nonlocals));
 /* line 4280: */
 /* line 4281: */
BWUATRN_nf = BXUATRN_ofc.O;
} 
else
{ 
KMPATRN_monitorinstance((*(&(Fdec->Fnname))), Mpc.M, NL(OZRATRN_newclose), NL(TZRATRN_diag));
 /* line 4282: */
IWUATRN_newfnno = A_CALLPROC(NL(PGSATRN_fnusage_fnno),(EWUATRN_oldfnno, HWUATRN_newclosno),(EWUATRN_oldfnno, HWUATRN_newclosno,(NL(PGSATRN_fnusage_fnno)).nonlocals));
 /* line 4283: */
 /* line 4284: */
if ( (IWUATRN_newfnno==(-1)) )
{ 
 /* line 4285: */
 /* line 4286: */
BWUATRN_nf = (*(&(ELCATRN_find_outers(HWUATRN_newclosno, (*NL(EDRATRN_newclosure)), NL(Msg))->Outer)));
} 
} 
 /* line 4287: */
 /* line 4288: */
 /* line 4289: */
if ( (IWUATRN_newfnno==(-1)) )
{ 
CXUATRN_fdec = CQMATRN_get_outerfn(BWUATRN_nf);
 /* line 4290: */
(*NL(UXRATRN_paramenv)) = (*(&((&BWUATRN_nf)->Environ)));
 /* line 4291: */
(*NL(AWSATRN_force)) = FWUATRN_specchanged;
 /* line 4292: */
DXUATRN = (*(&(Tprocs->Type))) ;
FXUATRN = MUNATRN_fndec_tfn(CXUATRN_fdec) ;
A_CALLPROC(DXUATRN,(A_UNITE(EXUATRN,mode4,4,FXUATRN), Tprocs, &GXUATRN),(A_UNITE(EXUATRN,mode4,4,FXUATRN), Tprocs, &GXUATRN,(DXUATRN).nonlocals));
HXUATRN_tc = GXUATRN;
 /* line 4293: */
(*NL(AWSATRN_force)) = A68_FALSE;
 /* line 4294: */
IXUATRN_usedfdec = (A_HEAP(A68_298 ));
(*IXUATRN_usedfdec) = (*WCNATRN_translate_fndec(CXUATRN_fdec, (*NL(UXRATRN_paramenv)), NL(GXRATRN_newenv)));
 /* line 4295: */
KXUATRN = (&(IXUATRN_usedfdec->Fnbody)) ;
(*KXUATRN) = A_UNITE(JXUATRN,mode12,12,(&LIAATRN_bodynull));
 /* line 4296: */
IWUATRN_newfnno = A_CALLPROC(NL(NLSATRN_add_envfn),(EWUATRN_oldfnno, 0, IXUATRN_usedfdec, A68_TRUE, A68_TRUE),(EWUATRN_oldfnno, 0, IXUATRN_usedfdec, A68_TRUE, A68_TRUE,(NL(NLSATRN_add_envfn)).nonlocals));
 /* line 4297: */
LXUATRN = (&A_VINDEX((*NL(FWRATRN_macpartable)),IWUATRN_newfnno)) ;
(*LXUATRN) = Mpc.M;
 /* line 4298: */
 /* line 4299: */
(*NL(UXRATRN_paramenv)) = XWQATRN_nilenviron;
} 
 /* line 4300: */
MXUATRN = (*(&(Tprocs->Attr))) ;
A_CALLPROC(MXUATRN,(Inst.Attr, Tprocs, &NXUATRN),(Inst.Attr, Tprocs, &NXUATRN,(MXUATRN).nonlocals));
OXUATRN_ac = NXUATRN;
 /* line 4301: */
PXUATRN.I.Fnno = IWUATRN_newfnno;
PXUATRN.I.Macparams = Mpc.M;
PXUATRN.I.Attr = OXUATRN_ac.A;
 /* line 4302: */
PXUATRN.C = A68_TRUE;
QXUATRN = PXUATRN;
} 
A_PROC_EXIT(instance_outer);
*ReturnedValue = (QXUATRN);
return;
} 
#undef NL
 /* line 4305: */
 /* line 4306: */

A_STATIC A68_VOID  AYUATRN_instance_inner(A68_262  Inst, A68_298 * Fn, A68_392  Mpc, A68_INT  Maxattrno, A68_INT  Maxtypeno, A68_INT  Maxfnno, A68_580 * Inst_info, A68_414 * Tprocs, A68_393  *ReturnedValue, void *NonLocals)
#define NL(x) (((BYUATRN_instance_inner *)NonLocals)->x)
{ 
A68_INT  CYUATRN_depth;
A68_INT  DYUATRN_oldfnno;
A68_580 * EYUATRN_i_info;
A68_580  FYUATRN;  /* collateral clause result */
A68_INT  GYUATRN_newfnno;
A68_INT  HYUATRN_closno;
A68_307  IYUATRN_ofn;
A68_301 * JYUATRN_i_env;
A68_301 ** KYUATRN;  /* YIELD */
A68_33  MYUATRN_generator;   /* proc value of non-global proc */
A68_32  SYUATRN;  /* avoid structure result */
A68_32  RYUATRN_i_rdecs;
A68_INT * TYUATRN_r;
A68_INT  UYUATRN;  /* forall loop counter */
A68_32 * VYUATRN;  /* YIELD */
A68_582  WYUATRN;  /* avoid structure result */
A68_582 * XYUATRN;  /* YIELD */
A68_582  YYUATRN;  /* avoid structure result */
A68_582 * ZYUATRN;  /* YIELD */
A68_582  AZUATRN;  /* avoid structure result */
A68_582 * BZUATRN;  /* YIELD */
A68_298 * CZUATRN;  /* clause result */
A68_298 * DZUATRN_fdec;
A68_BOOL  EZUATRN_ignore;
A68_411  FZUATRN;  /* avoid structure result */
A68_411  GZUATRN_fc;
A68_INT * HZUATRN;  /* YIELD */
A68_264 * IZUATRN;  /* YIELD */
A68_578  JZUATRN;  /* collateral clause result */
A68_578 * KZUATRN;  /* YIELD */
A68_578 ** LZUATRN;  /* YIELD */
A68_578  MZUATRN;  /* collateral clause result */
A68_578 * NZUATRN;  /* YIELD */
A68_578 ** OZUATRN;  /* YIELD */
A68_578  PZUATRN;  /* collateral clause result */
A68_578 * QZUATRN;  /* YIELD */
A68_578 ** RZUATRN;  /* YIELD */
A68_415  SZUATRN;  /* CALL */
A68_372  TZUATRN;  /* avoid structure result */
A68_372  UZUATRN_ac;
A68_393  VZUATRN;  /* collateral clause result */
A68_393  WZUATRN;  /* clause result */
A_PROC_ENTRY(instance_inner);
 /* line 4308: */
 /* line 4309: */
{ 
CYUATRN_depth = (*(&((*(&(NL(TZRATRN_diag)->Monitors)))->Depth)));
 /* line 4310: */
DYUATRN_oldfnno = Inst.Fnno;
 /* line 4311: */
EYUATRN_i_info = (A_HEAP(A68_580 ));
 /* line 4312: */
FYUATRN.Old = (*(&(Inst_info->Old)));
FYUATRN.Subs_ampar = NL(AASATRN_subs_ampar);
FYUATRN.Subs_fmpar = NL(KASATRN_subs_fmpar);
FYUATRN.Subs_tmpar = NL(WASATRN_subs_tmpar);
 /* line 4313: */
FYUATRN.Subs_cmpar = NL(LBSATRN_subs_cmpar);
FYUATRN.Subs_fnmpar = NL(WBSATRN_subs_fnmpar);
FYUATRN.Repldecs = (*NL(VXRATRN_repldecs));
FYUATRN.Mptable = (*(&(Inst_info->Mptable)));
 /* line 4314: */
FYUATRN.Newenvattrnos = (*(&(Inst_info->Newenvattrnos)));
FYUATRN.Newenvtypenos = (*(&(Inst_info->Newenvtypenos)));
FYUATRN.Newenvfnnos = (*(&(Inst_info->Newenvfnnos)));
(*EYUATRN_i_info) = FYUATRN;
 /* line 4316: */
GYUATRN_newfnno = A_CALLPROC(NL(AGSATRN_fndec_fnno),(Mpc.M, DYUATRN_oldfnno, CYUATRN_depth),(Mpc.M, DYUATRN_oldfnno, CYUATRN_depth,(NL(AGSATRN_fndec_fnno)).nonlocals));
 /* line 4317: */
 /* line 4318: */
 /* line 4319: */
if ( ((*(&(Fn->Sort)))==OKAATRN_outerdec) )
{ 
HYUATRN_closno = (*(&((*(&(Fn->Usage)))->Closureno)));
 /* line 4320: */
IYUATRN_ofn = (*(&(ELCATRN_find_outers(HYUATRN_closno, NL(Oldclosure), NL(Msg))->Outer)));
 /* line 4321: */
 /* line 4322: */
if ( (GYUATRN_newfnno==(-1)) )
{ 
JYUATRN_i_env = IYUATRN_ofn.Environ;
 /* line 4323: */
KYUATRN = (&(EYUATRN_i_info->Old)) ;
(*KYUATRN) = JYUATRN_i_env;
 /* line 4324: */
A_CLOSURE( MYUATRN_generator, NYUATRN_generator, OYUATRN_generator );
(( OYUATRN_generator * ) ( MYUATRN_generator.nonlocals )) -> JYUATRN_i_env = JYUATRN_i_env;
A_CALLPROC(MYUATRN_generator,(A68_TRUE, &SYUATRN),(A68_TRUE, &SYUATRN,(MYUATRN_generator).nonlocals));
RYUATRN_i_rdecs = SYUATRN;
 /* line 4325: */
UYUATRN = RYUATRN_i_rdecs.upb -1;
TYUATRN_r = RYUATRN_i_rdecs.data;
for (;UYUATRN-- >= 0;
(TYUATRN_r++
) )
{
(*TYUATRN_r) = (-9999);
}
 /* line 4326: */
VYUATRN = (&(EYUATRN_i_info->Repldecs)) ;
(*VYUATRN) = RYUATRN_i_rdecs;
 /* line 4327: */
A_CALLPROC(NL(SRSATRN_merge_envattrs),(NL(GXRATRN_newenv), JYUATRN_i_env, &WYUATRN),(NL(GXRATRN_newenv), JYUATRN_i_env, &WYUATRN,(NL(SRSATRN_merge_envattrs)).nonlocals));
XYUATRN = (&(EYUATRN_i_info->Newenvattrnos)) ;
(*XYUATRN) = WYUATRN;
 /* line 4328: */
A_CALLPROC(NL(MPSATRN_merge_envtypes),(NL(GXRATRN_newenv), JYUATRN_i_env, &YYUATRN),(NL(GXRATRN_newenv), JYUATRN_i_env, &YYUATRN,(NL(MPSATRN_merge_envtypes)).nonlocals));
ZYUATRN = (&(EYUATRN_i_info->Newenvtypenos)) ;
(*ZYUATRN) = YYUATRN;
 /* line 4329: */
 /* line 4330: */
A_CALLPROC(NL(GNSATRN_merge_envfns),(NL(GXRATRN_newenv), JYUATRN_i_env, &AZUATRN),(NL(GXRATRN_newenv), JYUATRN_i_env, &AZUATRN,(NL(GNSATRN_merge_envfns)).nonlocals));
BZUATRN = (&(EYUATRN_i_info->Newenvfnnos)) ;
(*BZUATRN) = AZUATRN;
} 
 /* line 4331: */
 /* line 4332: */
 /* line 4334: */
CZUATRN = CQMATRN_get_outerfn(IYUATRN_ofn);
} 
else
{ 
CZUATRN = Fn;
} 
DZUATRN_fdec = CZUATRN;
 /* line 4335: */
 /* line 4336: */
if ( (GYUATRN_newfnno==(-1)) )
{ 
EZUATRN_ignore = A68_FALSE;
 /* line 4337: */
 /* line 4338: */
A_CALLPROC(NL(QXRATRN_fndec_expand),(DZUATRN_fdec, Tprocs, Mpc, (*NL(UYRATRN_inst_mstable)), XWQATRN_nilenviron, EYUATRN_i_info, (&EZUATRN_ignore), (*(&(NL(TZRATRN_diag)->Monitors))), &FZUATRN),(DZUATRN_fdec, Tprocs, Mpc, (*NL(UYRATRN_inst_mstable)), XWQATRN_nilenviron, EYUATRN_i_info, (&EZUATRN_ignore), (*(&(NL(TZRATRN_diag)->Monitors))), &FZUATRN,(NL(QXRATRN_fndec_expand)).nonlocals));
GZUATRN_fc = FZUATRN;
 /* line 4339: */
 /* line 4340: */
if ( ((*(&(GZUATRN_fc.F->Sort)))==OKAATRN_outerdec) )
{ 
 /* line 4341: */
HZUATRN = (&(GZUATRN_fc.F->Sort)) ;
(*HZUATRN) = PKAATRN_localdec;
} 
 /* line 4342: */
GYUATRN_newfnno = A_CALLPROC(NL(NLSATRN_add_envfn),(DYUATRN_oldfnno, CYUATRN_depth, GZUATRN_fc.F, A68_FALSE, GZUATRN_fc.C),(DYUATRN_oldfnno, CYUATRN_depth, GZUATRN_fc.F, A68_FALSE, GZUATRN_fc.C,(NL(NLSATRN_add_envfn)).nonlocals));
 /* line 4343: */
IZUATRN = (&A_VINDEX((*NL(FWRATRN_macpartable)),GYUATRN_newfnno)) ;
(*IZUATRN) = Mpc.M;
 /* line 4344: */
 /* line 4345: */
if ( (Maxattrno>0) )
{ 
 /* line 4346: */
JZUATRN.Uselist = (*(&A_VINDEX(NL(YXRATRN_newenvfnnos),DYUATRN_oldfnno)));
 /* line 4347: */
JZUATRN.Rest = (*(&A_VINDEX((*NL(LVRATRN_mactypedecls)),Maxtypeno)));
KZUATRN = A_HEAP(A68_578 ) ;
(*KZUATRN) = JZUATRN ;
LZUATRN = (&A_VINDEX((*NL(BVRATRN_macattrdecls)),Maxattrno)) ;
(*LZUATRN) = KZUATRN;
} 
 /* line 4348: */
 /* line 4349: */
if ( (Maxtypeno>0) )
{ 
 /* line 4350: */
MZUATRN.Uselist = (*(&A_VINDEX(NL(YXRATRN_newenvfnnos),DYUATRN_oldfnno)));
 /* line 4351: */
MZUATRN.Rest = (*(&A_VINDEX((*NL(LVRATRN_mactypedecls)),Maxtypeno)));
NZUATRN = A_HEAP(A68_578 ) ;
(*NZUATRN) = MZUATRN ;
OZUATRN = (&A_VINDEX((*NL(LVRATRN_mactypedecls)),Maxtypeno)) ;
(*OZUATRN) = NZUATRN;
} 
 /* line 4352: */
 /* line 4353: */
if ( (Maxfnno>0) )
{ 
 /* line 4354: */
PZUATRN.Uselist = (*(&A_VINDEX(NL(YXRATRN_newenvfnnos),DYUATRN_oldfnno)));
 /* line 4355: */
PZUATRN.Rest = (*(&A_VINDEX((*NL(VVRATRN_macfndecls)),Maxfnno)));
 /* line 4356: */
QZUATRN = A_HEAP(A68_578 ) ;
(*QZUATRN) = PZUATRN ;
RZUATRN = (&A_VINDEX((*NL(VVRATRN_macfndecls)),Maxfnno)) ;
(*RZUATRN) = QZUATRN;
} 
} 
else
{ 
 /* line 4357: */
KMPATRN_monitorinstance((*(&(DZUATRN_fdec->Fnname))), Mpc.M, NL(OZRATRN_newclose), NL(TZRATRN_diag));
} 
 /* line 4358: */
SZUATRN = (*(&(Tprocs->Attr))) ;
A_CALLPROC(SZUATRN,(Inst.Attr, Tprocs, &TZUATRN),(Inst.Attr, Tprocs, &TZUATRN,(SZUATRN).nonlocals));
UZUATRN_ac = TZUATRN;
 /* line 4359: */
VZUATRN.I.Fnno = GYUATRN_newfnno;
VZUATRN.I.Macparams = Mpc.M;
VZUATRN.I.Attr = UZUATRN_ac.A;
 /* line 4360: */
VZUATRN.C = A68_TRUE;
WZUATRN = VZUATRN;
} 
A_PROC_EXIT(instance_inner);
*ReturnedValue = (WZUATRN);
return;
} 
#undef NL
 /* line 4363: */

A_STATIC A68_VOID  DAVATRN_instance_no_expand(A68_393  Ic, A68_298 * Fn, A68_392  Mpc, A68_BOOL  Mac_par, A68_414 * Tprocs, A68_393  *ReturnedValue, void *NonLocals)
#define NL(x) (((EAVATRN_instance_no_expand *)NonLocals)->x)
{ 
A68_INT  FAVATRN_oldfnno;
A68_INT  GAVATRN_newfnno;
A68_411  HAVATRN;  /* collateral clause result */
A68_294  IAVATRN;  /* OPERATORS - mode -> union mode */
A68_619  KAVATRN_generator;   /* proc value of non-global proc */
A68_300  PAVATRN;  /* avoid structure result */
A68_300  QAVATRN_nts;
A68_300  RAVATRN;  /* OPERATORS - assign op */
A68_BOOL  SAVATRN_specchange;
A68_297 * TAVATRN_nt;
A68_INT  UAVATRN;  /* forall loop counter */
A68_424  VAVATRN;  /* CALL */
A68_381  WAVATRN;  /* avoid structure result */
A68_381  XAVATRN_tc;
A68_200 * YAVATRN;  /* YIELD */
A68_298 * ZAVATRN_nfd;
A68_300 * ABVATRN;  /* YIELD */
A68_411  BBVATRN_fcc;
A68_415  CBVATRN;  /* CALL */
A68_372  DBVATRN;  /* avoid structure result */
A68_372  EBVATRN_ac;
A68_BOOL  FBVATRN;  /* optbool result */
A68_393  GBVATRN;  /* collateral clause result */
A68_393  HBVATRN;  /* clause result */
A_PROC_ENTRY(instance_no_expand);
 /* line 4364: */
 /* line 4365: */
{ 
FAVATRN_oldfnno = Ic.I.Fnno;
 /* line 4366: */
GAVATRN_newfnno = WZRATRN_translate_envno(FAVATRN_oldfnno, NL(YXRATRN_newenvfnnos));
 /* line 4367: */
 /* line 4368: */
 /* line 4369: */
if ( (GAVATRN_newfnno==0) )
{ 
 /* line 4370: */
if ( Mac_par )
{ 
 /* line 4371: */
 /* line 4372: */
HAVATRN.F = WTOATRN_skeleton_fndec(PKAATRN_localdec, (*(&(Fn->Macro))), (*(&(Fn->Fnname))), A_UNITE(IAVATRN,mode12,12,(&LIAATRN_bodynull)));
 /* line 4373: */
HAVATRN.C = A68_TRUE;
} 
else
{ 
A_CLOSURE( KAVATRN_generator, LAVATRN_generator, MAVATRN_generator );
(( MAVATRN_generator * ) ( KAVATRN_generator.nonlocals )) -> Fn = Fn;
A_CALLPROC(KAVATRN_generator,(A68_FALSE, &PAVATRN),(A68_FALSE, &PAVATRN,(KAVATRN_generator).nonlocals));
QAVATRN_nts = PAVATRN;
 /* line 4374: */
RAVATRN = (*(&(Fn->Nametypes))) ;
A_VASSIGN2(RAVATRN,QAVATRN_nts,A68_297 );
 /* line 4375: */
SAVATRN_specchange = A68_FALSE;
 /* line 4376: */
 /* line 4377: */
UAVATRN = QAVATRN_nts.upb -1;
TAVATRN_nt = QAVATRN_nts.data;
for (;UAVATRN-- >= 0;
(TAVATRN_nt++
) )
{
VAVATRN = (*(&(Tprocs->Type))) ;
A_CALLPROC(VAVATRN,((*(&(TAVATRN_nt->Type))), Tprocs, &WAVATRN),((*(&(TAVATRN_nt->Type))), Tprocs, &WAVATRN,(VAVATRN).nonlocals));
XAVATRN_tc = WAVATRN;
 /* line 4378: */
if ( XAVATRN_tc.C )
{ 
SAVATRN_specchange = A68_TRUE;
} 
 /* line 4379: */
 /* line 4380: */
YAVATRN = (&(TAVATRN_nt->Type)) ;
(*YAVATRN) = XAVATRN_tc.T;
}
 /* line 4381: */
 /* line 4382: */
if ( SAVATRN_specchange )
{ 
ZAVATRN_nfd = (A_HEAP(A68_298 ));
(*ZAVATRN_nfd) = (*Fn);
 /* line 4383: */
ABVATRN = (&(ZAVATRN_nfd->Nametypes)) ;
(*ABVATRN) = QAVATRN_nts;
 /* line 4384: */
HAVATRN.F = ZAVATRN_nfd;
 /* line 4385: */
HAVATRN.C = A68_TRUE;
} 
else
{ 
HAVATRN.F = Fn;
 /* line 4386: */
 /* line 4387: */
HAVATRN.C = A68_FALSE;
} 
} 
BBVATRN_fcc = HAVATRN;
 /* line 4388: */
 /* line 4389: */
GAVATRN_newfnno = A_CALLPROC(NL(NLSATRN_add_envfn),(FAVATRN_oldfnno, 0, BBVATRN_fcc.F, A68_TRUE, BBVATRN_fcc.C),(FAVATRN_oldfnno, 0, BBVATRN_fcc.F, A68_TRUE, BBVATRN_fcc.C,(NL(NLSATRN_add_envfn)).nonlocals));
} 
 /* line 4390: */
CBVATRN = (*(&(Tprocs->Attr))) ;
A_CALLPROC(CBVATRN,(Ic.I.Attr, Tprocs, &DBVATRN),(Ic.I.Attr, Tprocs, &DBVATRN,(CBVATRN).nonlocals));
EBVATRN_ac = DBVATRN;
 /* line 4391: */
FBVATRN = (GAVATRN_newfnno!=FAVATRN_oldfnno);
if ( ! FBVATRN )
{FBVATRN = Mpc.C;
}
 /* line 4392: */
if ( ! FBVATRN )
{FBVATRN = EBVATRN_ac.C;
}
if ( FBVATRN )
{ 
GBVATRN.I.Fnno = GAVATRN_newfnno;
GBVATRN.I.Macparams = Mpc.M;
GBVATRN.I.Attr = EBVATRN_ac.A;
 /* line 4393: */
 /* line 4394: */
GBVATRN.C = A68_TRUE;
HBVATRN = GBVATRN;
} 
else
{ 
 /* line 4395: */
HBVATRN = Ic;
} 
} 
A_PROC_EXIT(instance_no_expand);
*ReturnedValue = (HBVATRN);
return;
} 
#undef NL
 /* line 4399: */

A_STATIC A68_VOID  MBVATRN_instance_expand(A68_262  Inst, A68_BOOL  Dont_expand, A68_414 * Tprocs, A68_393  *ReturnedValue, void *NonLocals)
#define NL(x) (((NBVATRN_instance_expand *)NonLocals)->x)
{ 
A68_435  OBVATRN;  /* CALL */
A68_392  PBVATRN;  /* avoid structure result */
A68_392  QBVATRN_mpc;
A68_393  RBVATRN;  /* collateral clause result */
A68_393  SBVATRN_ic;
A68_306  UBVATRN;  /* OPERATORS - simple index */
A68_INT  VBVATRN;  /* YIELD */
A68_298 * TBVATRN_fn;
A68_580 * WBVATRN_inst_info;
A68_BOOL  XBVATRN_is_in_newenv;
A68_262  YBVATRN;  /* avoid structure result */
A68_262  ZBVATRN_macpar;
A68_175  ACVATRN;  /* avoid structure result */
A68_175  BCVATRN_atts;
A68_393  CCVATRN;  /* collateral clause result */
A68_INT  DCVATRN;  /* YIELD */
A68_583 * ECVATRN_mi;
A68_393  FCVATRN;  /* collateral clause result */
A68_INT  GCVATRN_maxattrno;
A68_INT  HCVATRN_maxtypeno;
A68_INT  ICVATRN_maxfnno;
A68_INT  JCVATRN;  /* clause result */
A68_BOOL  KCVATRN;  /* optbool result */
A68_INT  LCVATRN_sort;
A68_393  MCVATRN;  /* clause result */
A68_393  NCVATRN;  /* avoid structure result */
A68_393  OCVATRN;  /* avoid structure result */
A68_BOOL  PCVATRN;  /* optbool result */
A68_393  QCVATRN;  /* avoid structure result */
A68_393  TCVATRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(instance_expand);
 /* line 4400: */
 /* line 4401: */
{ 
OBVATRN = (*(&(Tprocs->Macparams))) ;
A_CALLPROC(OBVATRN,(Inst.Macparams, Tprocs, &PBVATRN),(Inst.Macparams, Tprocs, &PBVATRN,(OBVATRN).nonlocals));
QBVATRN_mpc = PBVATRN;
 /* line 4403: */
RBVATRN.I = Inst;
RBVATRN.C = A68_FALSE;
SBVATRN_ic = RBVATRN;
 /* line 4404: */
UBVATRN = (*(&(NL(TXRATRN_oldenv)->Fns))) ;
VBVATRN = Inst.Fnno ;
TBVATRN_fn = (*(&A_VINDEX(UBVATRN,VBVATRN)));
 /* line 4405: */
WBVATRN_inst_info = NL(Info);
 /* line 4406: */
XBVATRN_is_in_newenv = A68_FALSE;
 /* line 4408: */
 /* line 4409: */
if ( ((*(&(TBVATRN_fn->Sort)))==QKAATRN_macpardec) )
{ 
XBVATRN_is_in_newenv = A68_TRUE;
 /* line 4410: */
 /* line 4411: */
if ( !(*(&(TBVATRN_fn->Macro))) )
{ 
A_CALLPROC(NL(WBSATRN_subs_fnmpar),((*LHAATRN_makefnname(Inst.Fnno)), &YBVATRN),((*LHAATRN_makefnname(Inst.Fnno)), &YBVATRN,(NL(WBSATRN_subs_fnmpar)).nonlocals));
ZBVATRN_macpar = YBVATRN;
 /* line 4412: */
VUQATRN_append_attrs( Inst.Attr, ZBVATRN_macpar.Attr, &ACVATRN );
BCVATRN_atts = ACVATRN;
 /* line 4413: */
CCVATRN.I.Fnno = ZBVATRN_macpar.Fnno;
CCVATRN.I.Macparams = ZBVATRN_macpar.Macparams;
CCVATRN.I.Attr = BCVATRN_atts;
 /* line 4414: */
CCVATRN.C = A68_TRUE;
SBVATRN_ic = CCVATRN;
} 
else
{ 
DCVATRN = Inst.Fnno ;
ECVATRN_mi = (*(&A_VINDEX((*NL(TYRATRN_mptable)),DCVATRN)));
 /* line 4415: */
TBVATRN_fn = (*(&(ECVATRN_mi->Fdec)));
 /* line 4416: */
WBVATRN_inst_info = (*(&(ECVATRN_mi->Info)));
 /* line 4417: */
FCVATRN.I.Fnno = (*(&(ECVATRN_mi->Fnno)));
FCVATRN.I.Macparams = ABAATRN_nilmacparams;
FCVATRN.I.Attr = Inst.Attr;
 /* line 4418: */
FCVATRN.C = A68_TRUE;
 /* line 4419: */
SBVATRN_ic = FCVATRN;
} 
} 
 /* line 4421: */
GCVATRN_maxattrno = 0;
HCVATRN_maxtypeno = 0;
ICVATRN_maxfnno = 0;
 /* line 4422: */
 /* line 4423: */
 /* line 4424: */
 /* line 4425: */
if ( Dont_expand )
{ 
 /* line 4426: */
JCVATRN = PTUATRN_no_expansion;
} 
else
{ 
if ( (*(&(TBVATRN_fn->Macro))) )
{ 
 /* line 4427: */
if ( ((*(&(TBVATRN_fn->Sort)))==OKAATRN_outerdec) )
{ 
 /* line 4428: */
if ( PUQATRN_wanted((*(&(TBVATRN_fn->Fnname))), NL(Not_wanted)) )
{ 
A_CALLPROC(NL(ZUUATRN_macparam_sort),(QBVATRN_mpc.M, (&GCVATRN_maxattrno), (&HCVATRN_maxtypeno), (&ICVATRN_maxfnno)),(QBVATRN_mpc.M, (&GCVATRN_maxattrno), (&HCVATRN_maxtypeno), (&ICVATRN_maxfnno),(NL(ZUUATRN_macparam_sort)).nonlocals));
 /* line 4429: */
KCVATRN = (GCVATRN_maxattrno>0);
if ( ! KCVATRN )
{KCVATRN = (HCVATRN_maxtypeno>0);
}
if ( ! KCVATRN )
{ /* line 4430: */
KCVATRN = (ICVATRN_maxfnno>0);
}
if ( KCVATRN )
{ 
 /* line 4431: */
JCVATRN = PKAATRN_localdec;
} 
else
{ 
 /* line 4432: */
 /* line 4433: */
JCVATRN = OKAATRN_outerdec;
} 
} 
else
{ 
 /* line 4434: */
JCVATRN = PTUATRN_no_expansion;
} 
} 
else
{ 
A_CALLPROC(NL(ZUUATRN_macparam_sort),(QBVATRN_mpc.M, (&GCVATRN_maxattrno), (&HCVATRN_maxtypeno), (&ICVATRN_maxfnno)),(QBVATRN_mpc.M, (&GCVATRN_maxattrno), (&HCVATRN_maxtypeno), (&ICVATRN_maxfnno),(NL(ZUUATRN_macparam_sort)).nonlocals));
 /* line 4435: */
 /* line 4436: */
 /* line 4437: */
 /* line 4438: */
JCVATRN = PKAATRN_localdec;
} 
} 
else
{ 
JCVATRN = PTUATRN_no_expansion;
} 
} 
LCVATRN_sort = JCVATRN;
 /* line 4440: */
 /* line 4441: */
if ( (LCVATRN_sort==OKAATRN_outerdec) )
{ 
 /* line 4442: */
A_CALLPROC(NL(YVUATRN_instance_outer),((*(&((&SBVATRN_ic)->I))), TBVATRN_fn, QBVATRN_mpc, Tprocs, &NCVATRN),((*(&((&SBVATRN_ic)->I))), TBVATRN_fn, QBVATRN_mpc, Tprocs, &NCVATRN,(NL(YVUATRN_instance_outer)).nonlocals));
MCVATRN = NCVATRN;
} 
else
{ 
 /* line 4443: */
if ( (LCVATRN_sort==PKAATRN_localdec) )
{ 
 /* line 4444: */
 /* line 4445: */
A_CALLPROC(NL(ZXUATRN_instance_inner),((*(&((&SBVATRN_ic)->I))), TBVATRN_fn, QBVATRN_mpc, GCVATRN_maxattrno, HCVATRN_maxtypeno, ICVATRN_maxfnno, WBVATRN_inst_info, Tprocs, &OCVATRN),((*(&((&SBVATRN_ic)->I))), TBVATRN_fn, QBVATRN_mpc, GCVATRN_maxattrno, HCVATRN_maxtypeno, ICVATRN_maxfnno, WBVATRN_inst_info, Tprocs, &OCVATRN,(NL(ZXUATRN_instance_inner)).nonlocals));
MCVATRN = OCVATRN;
} 
else
{ 
 /* line 4446: */
if ( (LCVATRN_sort==PTUATRN_no_expansion) )
{ 
 /* line 4447: */
 /* line 4448: */
if ( XBVATRN_is_in_newenv )
{ 
MCVATRN = SBVATRN_ic;
} 
else
{ 
PCVATRN = Dont_expand;
if ( PCVATRN )
{PCVATRN = (*(&(TBVATRN_fn->Macro)));
}
 /* line 4449: */
 /* line 4450: */
 /* line 4451: */
A_CALLPROC(NL(CAVATRN_instance_no_expand),(SBVATRN_ic, TBVATRN_fn, QBVATRN_mpc, PCVATRN, Tprocs, &QCVATRN),(SBVATRN_ic, TBVATRN_fn, QBVATRN_mpc, PCVATRN, Tprocs, &QCVATRN,(NL(CAVATRN_instance_no_expand)).nonlocals));
MCVATRN = QCVATRN;
} 
} 
else
{ 
NKDAOST_sysfault(SCVATRN);
 /* line 4452: */
 /* line 4453: */
MCVATRN = TCVATRN;
} 
} 
} 
} 
A_PROC_EXIT(instance_expand);
*ReturnedValue = (MCVATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  XCVATRN_mparam_expand(A68_266  Mp, A68_414 * Tprocs, A68_391  *ReturnedValue, void *NonLocals)
#define NL(x) (((YCVATRN_mparam_expand *)NonLocals)->x)
{ 
A68_266  ZCVATRN;  /* united object - for case conformity */
A68_262  ADVATRN_inst;
A68_264  BDVATRN;  /* == */
A68_BOOL  CDVATRN_is_macpar;
A68_393  DDVATRN;  /* avoid structure result */
A68_393  EDVATRN_ic;
A68_584  FDVATRN;  /* collateral clause result */
A68_583  GDVATRN;  /* collateral clause result */
A68_306  HDVATRN;  /* OPERATORS - simple index */
A68_INT  IDVATRN;  /* YIELD */
A68_583 * JDVATRN;  /* YIELD */
A68_584 * KDVATRN;  /* YIELD */
A68_391  LDVATRN;  /* collateral clause result */
A68_266  MDVATRN;  /* OPERATORS - mode -> union mode */
A68_262  NDVATRN;  /* YIELD */
A68_391  ODVATRN;  /* clause result */
A68_267  PDVATRN_ctag;
A68_433  QDVATRN;  /* CALL */
A68_390  RDVATRN;  /* avoid structure result */
A68_390  SDVATRN_cc;
A68_391  TDVATRN;  /* collateral clause result */
A68_266  UDVATRN;  /* OPERATORS - mode -> union mode */
A68_267  VDVATRN;  /* YIELD */
A68_391  WDVATRN;  /* collateral clause result */
A68_434  XDVATRN;  /* CALL */
A68_391  YDVATRN;  /* avoid structure result */
A_PROC_ENTRY(mparam_expand);
 /* line 4457: */
 /* line 4458: */
{ 
 /* line 4459: */
ZCVATRN = Mp ;
switch ( ZCVATRN.mode )
{ 
case 5: /* STRUCT(INT,REF MODE264,MODE175)  */
ADVATRN_inst = (ZCVATRN.data.mode5);
 /* line 4460: */
{ 
BDVATRN = ADVATRN_inst.Macparams ;
CDVATRN_is_macpar = A_VSTRUCTCOMP(BDVATRN,ABAATRN_nilmacparams);
 /* line 4461: */
A_CALLPROC(NL(LBVATRN_instance_expand),(ADVATRN_inst, CDVATRN_is_macpar, Tprocs, &DDVATRN),(ADVATRN_inst, CDVATRN_is_macpar, Tprocs, &DDVATRN,(NL(LBVATRN_instance_expand)).nonlocals));
EDVATRN_ic = DDVATRN;
 /* line 4462: */
 /* line 4463: */
if ( CDVATRN_is_macpar )
{ 
 /* line 4464: */
 /* line 4465: */
GDVATRN.Fnno = EDVATRN_ic.I.Fnno;
HDVATRN = (*(&(NL(TXRATRN_oldenv)->Fns))) ;
IDVATRN = ADVATRN_inst.Fnno ;
GDVATRN.Fdec = (*(&A_VINDEX(HDVATRN,IDVATRN)));
GDVATRN.Info = NL(Info);
 /* line 4467: */
JDVATRN = A_HEAP(A68_583 ) ;
(*JDVATRN) = GDVATRN ;
FDVATRN.Minfo = JDVATRN;
 /* line 4468: */
FDVATRN.Rest = (*NL(UYRATRN_inst_mstable));
KDVATRN = A_HEAP(A68_584 ) ;
(*KDVATRN) = FDVATRN ;
(*NL(UYRATRN_inst_mstable)) = KDVATRN;
} 
 /* line 4469: */
NDVATRN = EDVATRN_ic.I ;
LDVATRN.M = A_UNITE(MDVATRN,mode5,5,NDVATRN);
 /* line 4470: */
 /* line 4471: */
LDVATRN.C = EDVATRN_ic.C;
ODVATRN = LDVATRN;
} 
break;
case 4: /* STRUCT(MODE222)  */
PDVATRN_ctag = (ZCVATRN.data.mode4);
 /* line 4472: */
{ 
VSOATRN_chooser_const = A68_TRUE;
 /* line 4473: */
QDVATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(QDVATRN,(PDVATRN_ctag.Tag, Tprocs, &RDVATRN),(PDVATRN_ctag.Tag, Tprocs, &RDVATRN,(QDVATRN).nonlocals));
SDVATRN_cc = RDVATRN;
 /* line 4474: */
(*NL(WYRATRN_joinup)) = COPATRN_nulljoinup;
 /* line 4475: */
VSOATRN_chooser_const = A68_FALSE;
 /* line 4476: */
 /* line 4477: */
if ( SDVATRN_cc.C )
{ 
VDVATRN = (*WGAATRN_makeunittag(SDVATRN_cc.U)) ;
TDVATRN.M = A_UNITE(UDVATRN,mode4,4,VDVATRN);
 /* line 4478: */
TDVATRN.C = A68_TRUE;
ODVATRN = TDVATRN;
} 
else
{ 
WDVATRN.M = Mp;
 /* line 4479: */
 /* line 4480: */
 /* line 4481: */
WDVATRN.C = A68_FALSE;
ODVATRN = WDVATRN;
} 
} 
break;
default: 
 /* line 4482: */
 /* line 4483: */
XDVATRN = (*(&(AWLATRN_nulltprocs->Mparam))) ;
A_CALLPROC(XDVATRN,(Mp, Tprocs, &YDVATRN),(Mp, Tprocs, &YDVATRN,(XDVATRN).nonlocals));
ODVATRN = YDVATRN;
break;
} 
} 
A_PROC_EXIT(mparam_expand);
*ReturnedValue = (ODVATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  BEVATRN_macparams_expand(A68_264  Mps, A68_414 * Tprocs, A68_392  *ReturnedValue)
{ 
A68_502  DEVATRN_generator;   /* proc value of non-global proc */
A68_264  IEVATRN;  /* avoid structure result */
A68_264  JEVATRN_new;
A68_BOOL  KEVATRN_changed;
A68_265 * LEVATRN_n;
A68_265 * MEVATRN_o;
A68_INT  NEVATRN;  /* forall loop counter */
A68_434  OEVATRN;  /* CALL */
A68_391  PEVATRN;  /* avoid structure result */
A68_391  QEVATRN_mp;
A68_BOOL  REVATRN;  /* optbool result */
A68_265  SEVATRN;  /* collateral clause result */
A68_392  TEVATRN;  /* collateral clause result */
A68_392  UEVATRN;  /* clause result */
A68_392  VEVATRN;  /* collateral clause result */
A68_392  WEVATRN;  /* collateral clause result */
A_PROC_ENTRY(macparams_expand);
 /* line 4487: */
 /* line 4488: */
{ 
 /* line 4489: */
if ( ! A_VSTRUCTCOMP(Mps,ABAATRN_nilmacparams) )
{ 
A_CLOSURE( DEVATRN_generator, EEVATRN_generator, FEVATRN_generator );
(( FEVATRN_generator * ) ( DEVATRN_generator.nonlocals )) -> Mps = Mps;
A_CALLPROC(DEVATRN_generator,(A68_FALSE, &IEVATRN),(A68_FALSE, &IEVATRN,(DEVATRN_generator).nonlocals));
JEVATRN_new = IEVATRN;
 /* line 4490: */
KEVATRN_changed = A68_FALSE;
 /* line 4491: */
 /* line 4492: */
NEVATRN = JEVATRN_new.upb -1;
if ( NEVATRN != Mps.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
LEVATRN_n = JEVATRN_new.data;
MEVATRN_o = Mps.data;
for (;NEVATRN-- >= 0;
(LEVATRN_n++
,MEVATRN_o++
) )
{
OEVATRN = (*(&(Tprocs->Mparam))) ;
A_CALLPROC(OEVATRN,((*(&(MEVATRN_o->Param))), Tprocs, &PEVATRN),((*(&(MEVATRN_o->Param))), Tprocs, &PEVATRN,(OEVATRN).nonlocals));
QEVATRN_mp = PEVATRN;
 /* line 4493: */
REVATRN = QEVATRN_mp.C;
if ( ! REVATRN )
{ /* line 4494: */
REVATRN = ((*(&(MEVATRN_o->Sort)))==BJAATRN_implicitmacpar);
}
if ( REVATRN )
{ 
 /* line 4495: */
KEVATRN_changed = A68_TRUE;
} 
 /* line 4496: */
 /* line 4497: */
 /* line 4498: */
if ( ((*(&(MEVATRN_o->Sort)))==BJAATRN_implicitmacpar) )
{ 
 /* line 4499: */
SEVATRN.Sort = AJAATRN_explicitmacpar;
} 
else
{ 
 /* line 4500: */
SEVATRN.Sort = (*(&(MEVATRN_o->Sort)));
} 
 /* line 4501: */
SEVATRN.Param = QEVATRN_mp.M;
(*LEVATRN_n) = SEVATRN;
}
 /* line 4502: */
if ( KEVATRN_changed )
{ 
TEVATRN.M = JEVATRN_new;
TEVATRN.C = A68_TRUE;
UEVATRN = TEVATRN;
} 
else
{ 
VEVATRN.M = Mps;
 /* line 4503: */
VEVATRN.C = A68_FALSE;
UEVATRN = VEVATRN;
} 
} 
else
{ 
WEVATRN.M = Mps;
 /* line 4504: */
 /* line 4505: */
WEVATRN.C = A68_FALSE;
UEVATRN = WEVATRN;
} 
} 
A_PROC_EXIT(macparams_expand);
*ReturnedValue = (UEVATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  UFVATRN_anonymous(A68_263 * N, A68_414 * Tp, A68_398  *ReturnedValue, void *NonLocals)
#define NL(x) (((VFVATRN_anonymous *)NonLocals)->x)
{ 
A68_398  WFVATRN;  /* clause result */
A68_398  XFVATRN;  /* avoid structure result */
A_CALLPROC(NL(ANUATRN_names_nameno),(N, Tp, A68_TRUE, &XFVATRN),(N, Tp, A68_TRUE, &XFVATRN,(NL(ANUATRN_names_nameno)).nonlocals));
WFVATRN = XFVATRN;
*ReturnedValue = (WFVATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  OGVATRN_anonymous(A68_262  I, A68_414 * Tp, A68_393  *ReturnedValue, void *NonLocals)
#define NL(x) (((PGVATRN_anonymous *)NonLocals)->x)
{ 
A68_393  QGVATRN;  /* clause result */
A68_393  RGVATRN;  /* avoid structure result */
A_CALLPROC(NL(LBVATRN_instance_expand),(I, A68_FALSE, Tp, &RGVATRN),(I, A68_FALSE, Tp, &RGVATRN,(NL(LBVATRN_instance_expand)).nonlocals));
QGVATRN = RGVATRN;
*ReturnedValue = (QGVATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  THVATRN_generator(A68_BOOL  RHVATRN_anonymous, A68_300  *ReturnedValue, void *NonLocals)
#define NL(x) (((UHVATRN_generator *)NonLocals)->x)
{ 
A68_300  VHVATRN;  /* clause result */
A68_300  WHVATRN;  /* OPERATORS - dynamic generator */
{ 
 /* line 4560: */
WHVATRN.upb = (*NL(KZRATRN_nametypeno)) ;
( RHVATRN_anonymous? A_VLOC(A68_297 ,WHVATRN): A_VHEAP(A68_297 ,WHVATRN) );
VHVATRN = WHVATRN;
} 
*ReturnedValue = (VHVATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  PNVATRN_generator(A68_BOOL  NNVATRN_anonymous, A68_302  *ReturnedValue, void *NonLocals)
#define NL(x) (((QNVATRN_generator *)NonLocals)->x)
{ 
A68_302  RNVATRN;  /* clause result */
A68_302  SNVATRN;  /* OPERATORS - dynamic generator */
{ 
SNVATRN.upb = (*NL(PMVATRN_attrs)).upb ;
( NNVATRN_anonymous? A_VLOC(A68_181 *,SNVATRN): A_VHEAP(A68_181 *,SNVATRN) );
RNVATRN = SNVATRN;
} 
*ReturnedValue = (RNVATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  SPVATRN_generator(A68_BOOL  QPVATRN_anonymous, A68_304  *ReturnedValue, void *NonLocals)
#define NL(x) (((TPVATRN_generator *)NonLocals)->x)
{ 
A68_304  UPVATRN;  /* clause result */
A68_304  VPVATRN;  /* OPERATORS - dynamic generator */
{ 
VPVATRN.upb = (*NL(QMVATRN_types)).upb ;
( QPVATRN_anonymous? A_VLOC(A68_215 *,VPVATRN): A_VHEAP(A68_215 *,VPVATRN) );
UPVATRN = VPVATRN;
} 
*ReturnedValue = (UPVATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  HPPATRN_generator(A68_BOOL  FPPATRN_anonymous, A68_509  *ReturnedValue, void *NonLocals)
#define NL(x) (((IPPATRN_generator *)NonLocals)->x)
{ 
A68_509  JPPATRN;  /* clause result */
A68_509  KPPATRN;  /* OPERATORS - dynamic generator */
{ 
KPPATRN.upb = NL(Jr).Row.upb ;
( FPPATRN_anonymous? A_VLOC(A68_510 *,KPPATRN): A_VHEAP(A68_510 *,KPPATRN) );
JPPATRN = KPPATRN;
} 
*ReturnedValue = (JPPATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  SYQATRN_anonymous(A68_175  A, A68_414 * Tp, A68_372  *ReturnedValue, void *NonLocals)
#define NL(x) (((TYQATRN_anonymous *)NonLocals)->x)
{ 
A68_175  UYQATRN;  /* united object - for case conformity */
A68_179 * VYQATRN_ab;
A68_415  WYQATRN;  /* CALL */
A68_372  XYQATRN;  /* avoid structure result */
A68_372  YYQATRN_ac;
A68_372  ZYQATRN;  /* collateral clause result */
A68_372  AZQATRN;  /* clause result */
 /* line 1862: */
{ 
 /* line 1863: */
UYQATRN = A ;
switch ( UYQATRN.mode )
{ 
case 4: /* REF STRUCT(MODE175)  */
VYQATRN_ab = (UYQATRN.data.mode4);
 /* line 1864: */
(*NL(NYQATRN_expand)) = A68_TRUE;
break;
default: 
{ 
WYQATRN = (*(&(AWLATRN_nulltprocs->Attr))) ;
A_CALLPROC(WYQATRN,(A, Tp, &XYQATRN),(A, Tp, &XYQATRN,(WYQATRN).nonlocals));
YYQATRN_ac = XYQATRN;
 /* line 1865: */
/*SKIP*/;
} 
break;
} 
 /* line 1866: */
ZYQATRN.A = A;
 /* line 1867: */
ZYQATRN.C = A68_FALSE;
AZQATRN = ZYQATRN;
} 
*ReturnedValue = (AZQATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  GZQATRN_anonymous(A68_184  F, A68_414 * Tp, A68_375  *ReturnedValue, void *NonLocals)
#define NL(x) (((HZQATRN_anonymous *)NonLocals)->x)
{ 
A68_184  IZQATRN;  /* united object - for case conformity */
A68_375  JZQATRN;  /* collateral clause result */
A68_375  KZQATRN;  /* clause result */
 /* line 1869: */
{ 
IZQATRN = F ;
switch ( IZQATRN.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26)  */
 /* line 1870: */
/*SKIP*/;
break;
case 3: /* REF STRUCT(INT)  */
 /* line 1871: */
/*SKIP*/;
break;
case 10: /* REF STRUCT(INT)  */
 /* line 1872: */
/*SKIP*/;
break;
default: 
 /* line 1873: */
(*NL(NYQATRN_expand)) = A68_TRUE;
break;
} 
 /* line 1874: */
JZQATRN.F = F;
 /* line 1875: */
JZQATRN.C = A68_FALSE;
KZQATRN = JZQATRN;
} 
*ReturnedValue = (KZQATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  QZQATRN_anonymous(A68_200  T, A68_414 * Tp, A68_381  *ReturnedValue, void *NonLocals)
#define NL(x) (((RZQATRN_anonymous *)NonLocals)->x)
{ 
A68_200  SZQATRN;  /* united object - for case conformity */
A68_205 * TZQATRN_tb;
A68_424  UZQATRN;  /* CALL */
A68_381  VZQATRN;  /* avoid structure result */
A68_381  WZQATRN_tc;
A68_381  XZQATRN;  /* collateral clause result */
A68_381  YZQATRN;  /* clause result */
 /* line 1877: */
{ 
 /* line 1878: */
SZQATRN = T ;
switch ( SZQATRN.mode )
{ 
case 5: /* REF STRUCT(MODE200)  */
TZQATRN_tb = (SZQATRN.data.mode5);
 /* line 1879: */
(*NL(NYQATRN_expand)) = A68_TRUE;
break;
default: 
{ 
UZQATRN = (*(&(AWLATRN_nulltprocs->Type))) ;
A_CALLPROC(UZQATRN,(T, Tp, &VZQATRN),(T, Tp, &VZQATRN,(UZQATRN).nonlocals));
WZQATRN_tc = VZQATRN;
 /* line 1880: */
/*SKIP*/;
} 
break;
} 
 /* line 1881: */
XZQATRN.T = T;
 /* line 1882: */
XZQATRN.C = A68_FALSE;
YZQATRN = XZQATRN;
} 
*ReturnedValue = (YZQATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  EARATRN_anonymous(A68_222  U, A68_414 * Tp, A68_390  *ReturnedValue, void *NonLocals)
#define NL(x) (((FARATRN_anonymous *)NonLocals)->x)
{ 
A68_222  GARATRN;  /* united object - for case conformity */
A68_236 * HARATRN_ur;
A68_238 * IARATRN_ucc;
A68_BOOL  JARATRN;  /* optbool result */
A68_232 * KARATRN_ui;
A68_233 * LARATRN_ut;
A68_433  MARATRN;  /* CALL */
A68_390  NARATRN;  /* avoid structure result */
A68_390  OARATRN_uc;
A68_390  PARATRN;  /* collateral clause result */
A68_390  QARATRN;  /* clause result */
 /* line 1884: */
{ 
 /* line 1885: */
GARATRN = U ;
switch ( GARATRN.mode )
{ 
case 26: /* REF STRUCT(MODE184,MODE222,MODE222)  */
case 31: /* REF STRUCT(MODE222,MODE186)  */
case 32: /* REF STRUCT(MODE222)  */
 /* line 1886: */
(*NL(NYQATRN_expand)) = A68_TRUE;
break;
case 20: /* REF STRUCT(MODE184,MODE222)  */
HARATRN_ur = (GARATRN.data.mode20);
 /* line 1887: */
if ( A_CALLPROC(NL(WXQATRN_contains_diagnostics),((*(&(HARATRN_ur->Elem)))),((*(&(HARATRN_ur->Elem))),(NL(WXQATRN_contains_diagnostics)).nonlocals)) )
{ 
 /* line 1888: */
(*NL(NYQATRN_expand)) = A68_TRUE;
} 
break;
case 22: /* REF STRUCT(BOOL,INT,MODE222,MODE222)  */
IARATRN_ucc = (GARATRN.data.mode22);
 /* line 1889: */
JARATRN = A_CALLPROC(NL(DYQATRN_only_const),((*(&(IARATRN_ucc->Left)))),((*(&(IARATRN_ucc->Left))),(NL(DYQATRN_only_const)).nonlocals));
if ( JARATRN )
{ /* line 1890: */
JARATRN = A_CALLPROC(NL(DYQATRN_only_const),((*(&(IARATRN_ucc->Right)))),((*(&(IARATRN_ucc->Right))),(NL(DYQATRN_only_const)).nonlocals));
}
if ( JARATRN )
{ 
 /* line 1891: */
 /* line 1892: */
(*NL(NYQATRN_expand)) = A68_TRUE;
} 
break;
case 16: /* REF STRUCT(MODE222,MODE184)  */
KARATRN_ui = (GARATRN.data.mode16);
 /* line 1893: */
if ( A_CALLPROC(NL(DYQATRN_only_const),((*(&(KARATRN_ui->Unit)))),((*(&(KARATRN_ui->Unit))),(NL(DYQATRN_only_const)).nonlocals)) )
{ 
 /* line 1894: */
(*NL(NYQATRN_expand)) = A68_TRUE;
} 
break;
case 17: /* REF STRUCT(MODE222,MODE199)  */
LARATRN_ut = (GARATRN.data.mode17);
 /* line 1895: */
if ( A_CALLPROC(NL(DYQATRN_only_const),((*(&(LARATRN_ut->Unit)))),((*(&(LARATRN_ut->Unit))),(NL(DYQATRN_only_const)).nonlocals)) )
{ 
 /* line 1896: */
 /* line 1897: */
(*NL(NYQATRN_expand)) = A68_TRUE;
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 1898: */
if ( !(*NL(NYQATRN_expand)) )
{ 
MARATRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(MARATRN,(U, Tp, &NARATRN),(U, Tp, &NARATRN,(MARATRN).nonlocals));
OARATRN_uc = NARATRN;
/*SKIP*/;
} 
 /* line 1899: */
PARATRN.U = U;
 /* line 1900: */
PARATRN.C = A68_FALSE;
QARATRN = PARATRN;
} 
*ReturnedValue = (QARATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  WARATRN_anonymous(A68_254 * P, A68_414 * Tp, A68_396  *ReturnedValue, void *NonLocals)
#define NL(x) (((XARATRN_anonymous *)NonLocals)->x)
{ 
A68_396  YARATRN;  /* collateral clause result */
A68_396  ZARATRN;  /* clause result */
 /* line 1902: */
{ 
(*NL(NYQATRN_expand)) = A68_TRUE;
YARATRN.P = P;
YARATRN.C = A68_FALSE;
ZARATRN = YARATRN;
} 
*ReturnedValue = (ZARATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  FBRATRN_anonymous(A68_255 * F, A68_414 * Tp, A68_397  *ReturnedValue, void *NonLocals)
#define NL(x) (((GBRATRN_anonymous *)NonLocals)->x)
{ 
A68_397  HBRATRN;  /* collateral clause result */
A68_397  IBRATRN;  /* clause result */
 /* line 1904: */
{ 
(*NL(NYQATRN_expand)) = A68_TRUE;
HBRATRN.F = F;
 /* line 1905: */
HBRATRN.C = A68_FALSE;
IBRATRN = HBRATRN;
} 
*ReturnedValue = (IBRATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  IGRATRN_generator(A68_BOOL  GGRATRN_anonymous, A68_509  *ReturnedValue, void *NonLocals)
#define NL(x) (((JGRATRN_generator *)NonLocals)->x)
{ 
A68_509  KGRATRN;  /* clause result */
A68_509  LGRATRN;  /* OPERATORS - dynamic generator */
{ 
LGRATRN.upb = ((NL(FGRATRN_upb)-NL(EGRATRN_lwb))+1) ;
( GGRATRN_anonymous? A_VLOC(A68_510 *,LGRATRN): A_VHEAP(A68_510 *,LGRATRN) );
KGRATRN = LGRATRN;
} 
*ReturnedValue = (KGRATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  DIRATRN_move(A68_200  Ty, A68_222  Old, A68_BOOL  Query, A68_222  *ReturnedValue, void *NonLocals)
#define NL(x) (((EIRATRN_move *)NonLocals)->x)
{ 
A68_200  FIRATRN;  /* united object - for case conformity */
A68_201 * GIRATRN_tn;
A68_304  HIRATRN;  /* OPERATORS - simple index */
A68_INT  IIRATRN;  /* YIELD */
A68_215 * JIRATRN_tdec;
A68_213  KIRATRN;  /* united object - for case conformity */
A68_209 * LIRATRN_ttag;
A68_222  MIRATRN;  /* clause result */
A68_222  NIRATRN;  /* avoid structure result */
A68_203 * OIRATRN_ts;
A68_203 * PIRATRN_tst;
A68_237 * QIRATRN_new;
A68_237 ** RIRATRN_next;
A68_237  SIRATRN;  /* collateral clause result */
A68_222  TIRATRN;  /* OPERATORS - mode -> union mode */
A68_220 * UIRATRN;  /* YIELD */
A68_222  VIRATRN;  /* OPERATORS - mode -> union mode */
A68_205 * WIRATRN;  /* YIELD */
A68_237 * XIRATRN;  /* YIELD */
A68_222  YIRATRN;  /* OPERATORS - mode -> union mode */
A68_202 * ZIRATRN_tr;
A68_236  AJRATRN;  /* collateral clause result */
A68_222  BJRATRN;  /* OPERATORS - mode -> union mode */
A68_220 * CJRATRN;  /* YIELD */
A68_222  DJRATRN;  /* OPERATORS - mode -> union mode */
A68_205 * EJRATRN;  /* YIELD */
A68_236 * FJRATRN;  /* YIELD */
A68_222  GJRATRN;  /* OPERATORS - mode -> union mode */
A68_206 * HJRATRN_tg;
A68_249  IJRATRN;  /* collateral clause result */
A68_222  JJRATRN;  /* OPERATORS - mode -> union mode */
A68_220 * KJRATRN;  /* YIELD */
A68_222  LJRATRN;  /* OPERATORS - mode -> union mode */
A68_205 * MJRATRN;  /* YIELD */
A68_249 * NJRATRN;  /* YIELD */
A68_222  OJRATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(move);
 /* line 2049: */
 /* line 2050: */
FIRATRN = Ty ;
switch ( FIRATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
GIRATRN_tn = (FIRATRN.data.mode1);
 /* line 2051: */
{ 
HIRATRN = (*(&(NL(Close).Env->Types))) ;
IIRATRN = (*(&(GIRATRN_tn->Typeno))) ;
JIRATRN_tdec = (*(&A_VINDEX(HIRATRN,IIRATRN)));
 /* line 2052: */
 /* line 2053: */
KIRATRN = (*(&(JIRATRN_tdec->Body))) ;
switch ( KIRATRN.mode )
{ 
case 3: /* REF STRUCT(MODE200)  */
LIRATRN_ttag = (KIRATRN.data.mode3);
 /* line 2054: */
 /* line 2055: */
A_CALLPROC(NL(CIRATRN_move),((*(&(LIRATRN_ttag->Tag))), Old, Query, &NIRATRN),((*(&(LIRATRN_ttag->Tag))), Old, Query, &NIRATRN,(NL(CIRATRN_move)).nonlocals));
MIRATRN = NIRATRN;
break;
default: 
 /* line 2056: */
 /* line 2057: */
MIRATRN = Old;
break;
} 
} 
break;
case 3: /* REF STRUCT(MODE200,REF MODE203)  */
OIRATRN_ts = (FIRATRN.data.mode3);
 /* line 2058: */
{ 
PIRATRN_tst = OIRATRN_ts;
 /* line 2059: */
QIRATRN_new = IAAATRN_nilustr;
 /* line 2060: */
RIRATRN_next = (&QIRATRN_new);
 /* line 2061: */
for ( ;; )
{ 
 /* line 2062: */
if ( !((PIRATRN_tst!=GAAATRN_niltstr)) ) break;
 /* line 2063: */
if ( Query )
{ 
UIRATRN = MGAATRN_makecquery((*(&(PIRATRN_tst->Elem)))) ;
SIRATRN.Elem = A_UNITE(TIRATRN,mode4,4,UIRATRN);
} 
else
{ 
 /* line 2064: */
WIRATRN = HGAATRN_makectype((*(&(PIRATRN_tst->Elem)))) ;
SIRATRN.Elem = A_UNITE(VIRATRN,mode7,7,WIRATRN);
} 
SIRATRN.Rest = IAAATRN_nilustr;
XIRATRN = A_HEAP(A68_237 ) ;
(*XIRATRN) = SIRATRN ;
(*RIRATRN_next) = XIRATRN;
 /* line 2065: */
PIRATRN_tst = (*(&(PIRATRN_tst->Rest)));
 /* line 2066: */
 /* line 2067: */
RIRATRN_next = (&((*RIRATRN_next)->Rest));
}
 /* line 2068: */
 /* line 2069: */
 /* line 2070: */
MIRATRN = A_UNITE(YIRATRN,mode21,21,QIRATRN_new);
} 
break;
case 2: /* REF STRUCT(MODE184,MODE200)  */
ZIRATRN_tr = (FIRATRN.data.mode2);
 /* line 2071: */
 /* line 2072: */
AJRATRN.Size = (*(&(ZIRATRN_tr->Size)));
if ( Query )
{ 
CJRATRN = MGAATRN_makecquery((*(&(ZIRATRN_tr->Elem)))) ;
AJRATRN.Elem = A_UNITE(BJRATRN,mode4,4,CJRATRN);
} 
else
{ 
EJRATRN = HGAATRN_makectype((*(&(ZIRATRN_tr->Elem)))) ;
AJRATRN.Elem = A_UNITE(DJRATRN,mode7,7,EJRATRN);
} 
 /* line 2073: */
FJRATRN = A_HEAP(A68_236 ) ;
(*FJRATRN) = AJRATRN ;
MIRATRN = A_UNITE(GJRATRN,mode20,20,FJRATRN);
break;
case 6: /* REF STRUCT(MODE184,MODE200)  */
HJRATRN_tg = (FIRATRN.data.mode6);
 /* line 2074: */
 /* line 2075: */
IJRATRN.Size = (*(&(HJRATRN_tg->Size)));
if ( Query )
{ 
KJRATRN = MGAATRN_makecquery((*(&(HJRATRN_tg->Char)))) ;
IJRATRN.Char = A_UNITE(JJRATRN,mode4,4,KJRATRN);
} 
else
{ 
 /* line 2076: */
MJRATRN = HGAATRN_makectype((*(&(HJRATRN_tg->Char)))) ;
IJRATRN.Char = A_UNITE(LJRATRN,mode7,7,MJRATRN);
} 
 /* line 2077: */
NJRATRN = A_HEAP(A68_249 ) ;
(*NJRATRN) = IJRATRN ;
MIRATRN = A_UNITE(OJRATRN,mode33,33,NJRATRN);
break;
default: 
MIRATRN = Old;
break;
} 
A_PROC_EXIT(move);
*ReturnedValue = (MIRATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  KQRATRN_generator(A68_BOOL  IQRATRN_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((LQRATRN_generator *)NonLocals)->x)
{ 
A68_32  MQRATRN;  /* clause result */
A68_32  NQRATRN;  /* OPERATORS - dynamic generator */
{ 
NQRATRN.upb = (*NL(IPRATRN_ind)) ;
( IQRATRN_anonymous? A_VLOC(A68_INT ,NQRATRN): A_VHEAP(A68_INT ,NQRATRN) );
MQRATRN = NQRATRN;
} 
*ReturnedValue = (MQRATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  KTRATRN_generator(A68_BOOL  ITRATRN_anonymous, A68_576  *ReturnedValue, void *NonLocals)
#define NL(x) (((LTRATRN_generator *)NonLocals)->x)
{ 
A68_576  MTRATRN;  /* clause result */
A68_576  NTRATRN;  /* OPERATORS - dynamic generator */
{ 
NTRATRN.upb = 10 ;
( ITRATRN_anonymous? A_VLOC(A68_575 *,NTRATRN): A_VHEAP(A68_575 *,NTRATRN) );
MTRATRN = NTRATRN;
} 
*ReturnedValue = (MTRATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  NURATRN_generator(A68_BOOL  LURATRN_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((OURATRN_generator *)NonLocals)->x)
{ 
A68_32  PURATRN;  /* clause result */
A68_32  QURATRN;  /* OPERATORS - dynamic generator */
{ 
QURATRN.upb = (*(&(NL(KURATRN_oenv)->Ints))).upb ;
( LURATRN_anonymous? A_VLOC(A68_INT ,QURATRN): A_VHEAP(A68_INT ,QURATRN) );
PURATRN = QURATRN;
} 
*ReturnedValue = (PURATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  XURATRN_generator(A68_BOOL  VURATRN_anonymous, A68_610  *ReturnedValue, void *NonLocals)
#define NL(x) (((YURATRN_generator *)NonLocals)->x)
{ 
A68_610  ZURATRN;  /* clause result */
A68_610  AVRATRN;  /* OPERATORS - dynamic generator */
{ 
AVRATRN.upb = (*(&(NL(KURATRN_oenv)->Attrs))).upb ;
( VURATRN_anonymous? A_VLOC(A68_578 *,AVRATRN): A_VHEAP(A68_578 *,AVRATRN) );
ZURATRN = AVRATRN;
} 
*ReturnedValue = (ZURATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  HVRATRN_generator(A68_BOOL  FVRATRN_anonymous, A68_610  *ReturnedValue, void *NonLocals)
#define NL(x) (((IVRATRN_generator *)NonLocals)->x)
{ 
A68_610  JVRATRN;  /* clause result */
A68_610  KVRATRN;  /* OPERATORS - dynamic generator */
{ 
KVRATRN.upb = (*(&(NL(KURATRN_oenv)->Types))).upb ;
( FVRATRN_anonymous? A_VLOC(A68_578 *,KVRATRN): A_VHEAP(A68_578 *,KVRATRN) );
JVRATRN = KVRATRN;
} 
*ReturnedValue = (JVRATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  RVRATRN_generator(A68_BOOL  PVRATRN_anonymous, A68_610  *ReturnedValue, void *NonLocals)
#define NL(x) (((SVRATRN_generator *)NonLocals)->x)
{ 
A68_610  TVRATRN;  /* clause result */
A68_610  UVRATRN;  /* OPERATORS - dynamic generator */
{ 
UVRATRN.upb = (*(&(NL(KURATRN_oenv)->Fns))).upb ;
( PVRATRN_anonymous? A_VLOC(A68_578 *,UVRATRN): A_VHEAP(A68_578 *,UVRATRN) );
TVRATRN = UVRATRN;
} 
*ReturnedValue = (TVRATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  BWRATRN_generator(A68_BOOL  ZVRATRN_anonymous, A68_612  *ReturnedValue, void *NonLocals)
#define NL(x) (((CWRATRN_generator *)NonLocals)->x)
{ 
A68_612  DWRATRN;  /* clause result */
A68_612  EWRATRN;  /* OPERATORS - dynamic generator */
{ 
EWRATRN.upb = (*(&(NL(KURATRN_oenv)->Fns))).upb ;
( ZVRATRN_anonymous? A_VLOC(A68_264 ,EWRATRN): A_VHEAP(A68_264 ,EWRATRN) );
DWRATRN = EWRATRN;
} 
*ReturnedValue = (DWRATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  LWRATRN_generator(A68_BOOL  JWRATRN_anonymous, A68_581  *ReturnedValue, void *NonLocals)
#define NL(x) (((MWRATRN_generator *)NonLocals)->x)
{ 
A68_581  NWRATRN;  /* clause result */
A68_581  OWRATRN;  /* OPERATORS - dynamic generator */
{ 
OWRATRN.upb = (*(&(NL(KURATRN_oenv)->Fns))).upb ;
( JWRATRN_anonymous? A_VLOC(A68_583 *,OWRATRN): A_VHEAP(A68_583 *,OWRATRN) );
NWRATRN = OWRATRN;
} 
*ReturnedValue = (NWRATRN);
return;
} 
#undef NL
 /* line 2361: */
 /* line 2362: */
 /* line 2363: */

A_STATIC A68_VOID  RXRATRN_fndec_expand(A68_298 * Fdec, A68_414 * Tprocs, A68_392  Params, A68_584 * Mstable, A68_301 * Penv, A68_580 * Info, A68_BOOL * Iochange, A68_470 * Monitors, A68_411  *ReturnedValue, void *NonLocals)
#define NL(x) (((SXRATRN_fndec_expand *)NonLocals)->x)
{ 
A68_301 * TXRATRN_oldenv;
A68_301 * UXRATRN_paramenv;
A68_32  VXRATRN_repldecs;
A68_582  WXRATRN_newenvattrnos;
A68_582  XXRATRN_newenvtypenos;
A68_582  YXRATRN_newenvfnnos;
A68_33  AYRATRN_generator;   /* proc value of non-global proc */
A68_32  GYRATRN;  /* avoid structure result */
A68_32  FYRATRN_newenvintnos;
A68_INT * HYRATRN_int;
A68_INT  IYRATRN;  /* forall loop counter */
A68_33  KYRATRN_generator;   /* proc value of non-global proc */
A68_32  QYRATRN;  /* avoid structure result */
A68_32  PYRATRN_newenvconstnos;
A68_INT * RYRATRN_const;
A68_INT  SYRATRN;  /* forall loop counter */
A68_581  TYRATRN_mptable;
A68_584 * UYRATRN_inst_mstable;
A68_BOOL  VYRATRN_is_fnbody;
A68_510 * WYRATRN_joinup;
A68_512 * XYRATRN_joinlist;
A68_33  ZYRATRN_generator;   /* proc value of non-global proc */
A68_32  FZRATRN;  /* avoid structure result */
A68_32  EZRATRN_newnamenos;
A68_INT * GZRATRN_elem;
A68_INT  HZRATRN;  /* forall loop counter */
A68_BOOL  IZRATRN_nametypechange;
A68_BOOL  JZRATRN_was_macro;
A68_INT  KZRATRN_nametypeno;
A68_298 * LZRATRN_newfdec;
A68_BOOL * MZRATRN;  /* YIELD */
A68_472  NZRATRN;  /* collateral clause result */
A68_472  OZRATRN_newclose;
A68_472  PZRATRN;  /* collateral clause result */
A68_472  QZRATRN_oldclose;
A68_471  RZRATRN;  /* collateral clause result */
A68_471 * SZRATRN;  /* YIELD */
A68_471 * TZRATRN_diag;
A68_464  AASATRN_subs_ampar;   /* proc value of non-global proc */
A68_465  KASATRN_subs_fmpar;   /* proc value of non-global proc */
A68_466  WASATRN_subs_tmpar;   /* proc value of non-global proc */
A68_467  LBSATRN_subs_cmpar;   /* proc value of non-global proc */
A68_468  WBSATRN_subs_fnmpar;   /* proc value of non-global proc */
A68_618  TCSATRN_add_nametype;   /* proc value of non-global proc */
A68_621  JFSATRN_find_closureno;   /* proc value of non-global proc */
A68_622  AGSATRN_fndec_fnno;   /* proc value of non-global proc */
A68_95  PGSATRN_fnusage_fnno;   /* proc value of non-global proc */
A68_623  CHSATRN_add_envint;   /* proc value of non-global proc */
A68_625  HISATRN_add_envconst;   /* proc value of non-global proc */
A68_144  LJSATRN_resetscope;   /* proc value of non-global proc */
A68_631  NLSATRN_add_envfn;   /* proc value of non-global proc */
A68_633  GNSATRN_merge_envfns;   /* proc value of non-global proc */
A68_634  ZNSATRN_add_envtype;   /* proc value of non-global proc */
A68_633  MPSATRN_merge_envtypes;   /* proc value of non-global proc */
A68_636  FQSATRN_add_envattr;   /* proc value of non-global proc */
A68_633  SRSATRN_merge_envattrs;   /* proc value of non-global proc */
A68_639  JSSATRN_translate_mactypeno;   /* proc value of non-global proc */
A68_641  MTSATRN_set_unittype;   /* proc value of non-global proc */
A68_639  UTSATRN_translate_macfnno;   /* proc value of non-global proc */
A68_642  IUSATRN_set_envfn;   /* proc value of non-global proc */
A68_639  OVSATRN_translate_macattrno;   /* proc value of non-global proc */
A68_BOOL  AWSATRN_force;
A68_424  DWSATRN_type_expand;   /* proc value of non-global proc */
A68_643  WYSATRN_update_attr;   /* proc value of non-global proc */
A68_415  SZSATRN_attr_expand;   /* proc value of non-global proc */
A68_418  OBTATRN_formula_expand;   /* proc value of non-global proc */
A68_646  PDTATRN_reposition_decls;   /* proc value of non-global proc */
A68_647  KETATRN_position_decls;   /* proc value of non-global proc */
A68_648  OFTATRN_fnbody_decl;   /* proc value of non-global proc */
A68_437  AHTATRN_decl_inner;   /* proc value of non-global proc */
A68_649  TJTATRN_series_decl;   /* proc value of non-global proc */
A68_650  UKTATRN_sequence_decl;   /* proc value of non-global proc */
A68_433  OLTATRN_body_unit;   /* proc value of non-global proc */
A68_651  AMTATRN_useries_expand;   /* proc value of non-global proc */
A68_652  UMTATRN_usequence_expand;   /* proc value of non-global proc */
A68_653  ONTATRN_urow_expand;   /* proc value of non-global proc */
A68_654  ZOTATRN_uname_nameno;   /* proc value of non-global proc */
A68_431  RPTATRN_ustr_joinup;   /* proc value of non-global proc */
A68_655  TQTATRN_udyindex_joinup;   /* proc value of non-global proc */
A68_656  ASTATRN_uinst_joinup;   /* proc value of non-global proc */
A68_657  ETTATRN_uchoices;   /* proc value of non-global proc */
A68_433  QUTATRN_unit_expand;   /* proc value of non-global proc */
A68_659  QBUATRN_mparams_expand;   /* proc value of non-global proc */
A68_453  UDUATRN_macspecs_expand;   /* proc value of non-global proc */
A68_663  GIUATRN_seqchoices;   /* proc value of non-global proc */
A68_666  OKUATRN_seqrepl_expand;   /* proc value of non-global proc */
A68_444  OLUATRN_seqstep_expand;   /* proc value of non-global proc */
A68_667  ANUATRN_names_nameno;   /* proc value of non-global proc */
A68_442  YNUATRN_let_expand;   /* proc value of non-global proc */
A68_447  HOUATRN_join_expand;   /* proc value of non-global proc */
A68_668  YOUATRN_repljoin_expand;   /* proc value of non-global proc */
A68_449  BQUATRN_step_expand;   /* proc value of non-global proc */
A68_439  OQUATRN_print_expand;   /* proc value of non-global proc */
A68_440  ERUATRN_fault_expand;   /* proc value of non-global proc */
A68_588  ASUATRN_is_output;   /* proc value of non-global proc */
A68_451  NSUATRN_fnbody_expand;   /* proc value of non-global proc */
A68_669  STUATRN_attr_sort;   /* proc value of non-global proc */
A68_670  GUUATRN_type_sort;   /* proc value of non-global proc */
A68_671  ZUUATRN_macparam_sort;   /* proc value of non-global proc */
A68_672  YVUATRN_instance_outer;   /* proc value of non-global proc */
A68_673  ZXUATRN_instance_inner;   /* proc value of non-global proc */
A68_674  CAVATRN_instance_no_expand;   /* proc value of non-global proc */
A68_675  LBVATRN_instance_expand;   /* proc value of non-global proc */
A68_434  WCVATRN_mparam_expand;   /* proc value of non-global proc */
A68_677  XEVATRN;  /* collateral clause result */
A68_459  YEVATRN;  /* OPERATORS - mode -> union mode */
A68_433  ZEVATRN;  /* YIELD */
A68_459  AFVATRN;  /* OPERATORS - mode -> union mode */
A68_416  BFVATRN;  /* YIELD */
A68_416  CFVATRN;  /* procedure value */
A68_459  DFVATRN;  /* OPERATORS - mode -> union mode */
A68_415  EFVATRN;  /* YIELD */
A68_459  FFVATRN;  /* OPERATORS - mode -> union mode */
A68_418  GFVATRN;  /* YIELD */
A68_459  HFVATRN;  /* OPERATORS - mode -> union mode */
A68_424  IFVATRN;  /* YIELD */
A68_459  JFVATRN;  /* OPERATORS - mode -> union mode */
A68_444  KFVATRN;  /* YIELD */
A68_459  LFVATRN;  /* OPERATORS - mode -> union mode */
A68_449  MFVATRN;  /* YIELD */
A68_459  NFVATRN;  /* OPERATORS - mode -> union mode */
A68_447  OFVATRN;  /* YIELD */
A68_459  PFVATRN;  /* OPERATORS - mode -> union mode */
A68_442  QFVATRN;  /* YIELD */
A68_441  TFVATRN_anonymous;   /* proc value of non-global proc */
A68_459  YFVATRN;  /* OPERATORS - mode -> union mode */
A68_441  ZFVATRN;  /* YIELD */
A68_459  AGVATRN;  /* OPERATORS - mode -> union mode */
A68_440  BGVATRN;  /* YIELD */
A68_459  CGVATRN;  /* OPERATORS - mode -> union mode */
A68_439  DGVATRN;  /* YIELD */
A68_459  EGVATRN;  /* OPERATORS - mode -> union mode */
A68_451  FGVATRN;  /* YIELD */
A68_459  GGVATRN;  /* OPERATORS - mode -> union mode */
A68_435  HGVATRN;  /* YIELD */
A68_435  IGVATRN;  /* procedure value */
A68_459  JGVATRN;  /* OPERATORS - mode -> union mode */
A68_434  KGVATRN;  /* YIELD */
A68_436  NGVATRN_anonymous;   /* proc value of non-global proc */
A68_459  SGVATRN;  /* OPERATORS - mode -> union mode */
A68_436  TGVATRN;  /* YIELD */
A68_459  UGVATRN;  /* OPERATORS - mode -> union mode */
A68_437  VGVATRN;  /* YIELD */
A68_458  WGVATRN;  /* OPERATORS - istruct -> vector */
A68_414 * XGVATRN_newtprocs;
A68_410  YGVATRN;  /* avoid structure result */
A68_410  ZGVATRN_msc;
A68_299 * AHVATRN;  /* YIELD */
A68_372  BHVATRN;  /* avoid structure result */
A68_372  CHVATRN_ac;
A68_175 * DHVATRN;  /* YIELD */
A68_512  EHVATRN;  /* collateral clause result */
A68_512 * FHVATRN;  /* YIELD */
A68_398  GHVATRN;  /* avoid structure result */
A68_398  HHVATRN_ic;
A68_398  IHVATRN;  /* avoid structure result */
A68_398  JHVATRN_oc;
A68_263 ** KHVATRN;  /* YIELD */
A68_263 ** LHVATRN;  /* YIELD */
A68_451  MHVATRN;  /* CALL */
A68_408  NHVATRN;  /* avoid structure result */
A68_408  OHVATRN_bodyc;
A68_294 * PHVATRN;  /* YIELD */
A68_300 * QHVATRN_nametypes;
A68_619  SHVATRN_generator;   /* proc value of non-global proc */
A68_300  XHVATRN;  /* avoid structure result */
A68_300  YHVATRN;  /* OPERATORS - trim index */
A68_300  ZHVATRN;  /* OPERATORS - assign op */
A68_300  AIVATRN;  /* OPERATORS - trim index */
A68_BOOL  BIVATRN;  /* optbool result */
A68_411  CIVATRN;  /* collateral clause result */
A68_411  DIVATRN;  /* clause result */
A68_411  EIVATRN;  /* collateral clause result */
A_PROC_ENTRY(fndec_expand);
 /* line 2364: */
 /* line 2365: */
{ 
TXRATRN_oldenv = (*(&(Info->Old)));
 /* line 2366: */
UXRATRN_paramenv = Penv;
 /* line 2367: */
VXRATRN_repldecs = (*(&(Info->Repldecs)));
 /* line 2369: */
WXRATRN_newenvattrnos = (*(&(Info->Newenvattrnos)));
 /* line 2370: */
XXRATRN_newenvtypenos = (*(&(Info->Newenvtypenos)));
 /* line 2371: */
YXRATRN_newenvfnnos = (*(&(Info->Newenvfnnos)));
 /* line 2373: */
A_CLOSURE( AYRATRN_generator, BYRATRN_generator, CYRATRN_generator );
(( CYRATRN_generator * ) ( AYRATRN_generator.nonlocals )) -> TXRATRN_oldenv = TXRATRN_oldenv;
A_CALLPROC(AYRATRN_generator,(A68_TRUE, &GYRATRN),(A68_TRUE, &GYRATRN,(AYRATRN_generator).nonlocals));
FYRATRN_newenvintnos = GYRATRN;
 /* line 2374: */
IYRATRN = FYRATRN_newenvintnos.upb -1;
HYRATRN_int = FYRATRN_newenvintnos.data;
for (;IYRATRN-- >= 0;
(HYRATRN_int++
) )
{
(*HYRATRN_int) = 0;
}
 /* line 2375: */
A_CLOSURE( KYRATRN_generator, LYRATRN_generator, MYRATRN_generator );
(( MYRATRN_generator * ) ( KYRATRN_generator.nonlocals )) -> TXRATRN_oldenv = TXRATRN_oldenv;
A_CALLPROC(KYRATRN_generator,(A68_TRUE, &QYRATRN),(A68_TRUE, &QYRATRN,(KYRATRN_generator).nonlocals));
PYRATRN_newenvconstnos = QYRATRN;
 /* line 2376: */
SYRATRN = PYRATRN_newenvconstnos.upb -1;
RYRATRN_const = PYRATRN_newenvconstnos.data;
for (;SYRATRN-- >= 0;
(RYRATRN_const++
) )
{
(*RYRATRN_const) = 0;
}
 /* line 2378: */
TYRATRN_mptable = (*(&(Info->Mptable)));
 /* line 2379: */
UYRATRN_inst_mstable = WWQATRN_nilmacparinfos;
 /* line 2382: */
VYRATRN_is_fnbody = A68_TRUE;
 /* line 2383: */
WYRATRN_joinup = COPATRN_nulljoinup;
 /* line 2384: */
XYRATRN_joinlist = LOPATRN_niljoinlist;
 /* line 2387: */
A_CLOSURE( ZYRATRN_generator, AZRATRN_generator, BZRATRN_generator );
(( BZRATRN_generator * ) ( ZYRATRN_generator.nonlocals )) -> Fdec = Fdec;
A_CALLPROC(ZYRATRN_generator,(A68_TRUE, &FZRATRN),(A68_TRUE, &FZRATRN,(ZYRATRN_generator).nonlocals));
EZRATRN_newnamenos = FZRATRN;
 /* line 2388: */
HZRATRN = EZRATRN_newnamenos.upb -1;
GZRATRN_elem = EZRATRN_newnamenos.data;
for (;HZRATRN-- >= 0;
(GZRATRN_elem++
) )
{
(*GZRATRN_elem) = (-1);
}
 /* line 2390: */
IZRATRN_nametypechange = A68_FALSE;
JZRATRN_was_macro = (*(&(Fdec->Macro)));
 /* line 2391: */
KZRATRN_nametypeno = 0;
 /* line 2393: */
LZRATRN_newfdec = (A_HEAP(A68_298 ));
(*LZRATRN_newfdec) = (*Fdec);
 /* line 2394: */
if ( JZRATRN_was_macro )
{ 
MZRATRN = (&(LZRATRN_newfdec->Macro)) ;
(*MZRATRN) = A68_FALSE;
JZRATRN_was_macro = A68_TRUE;
} 
 /* line 2396: */
NZRATRN.Fdec = LZRATRN_newfdec;
NZRATRN.Env = NL(GXRATRN_newenv);
OZRATRN_newclose = NZRATRN;
 /* line 2397: */
PZRATRN.Fdec = Fdec;
PZRATRN.Env = TXRATRN_oldenv;
QZRATRN_oldclose = PZRATRN;
 /* line 2399: */
RZRATRN.Trace = NL(Trace);
RZRATRN.Monitors = Monitors;
RZRATRN.Flt = NL(ADRATRN_flt);
SZRATRN = A_HEAP(A68_471 ) ;
(*SZRATRN) = RZRATRN ;
TZRATRN_diag = SZRATRN;
 /* line 2401: */
 /* line 2410: */
A_CLOSURE( AASATRN_subs_ampar, BASATRN_subs_ampar, CASATRN_subs_ampar );
(( CASATRN_subs_ampar * ) ( AASATRN_subs_ampar.nonlocals )) -> WXRATRN_newenvattrnos = WXRATRN_newenvattrnos;
(( CASATRN_subs_ampar * ) ( AASATRN_subs_ampar.nonlocals )) -> GXRATRN_newenv = NL(GXRATRN_newenv);
(( CASATRN_subs_ampar * ) ( AASATRN_subs_ampar.nonlocals )) -> Info = Info;
 /* line 2419: */
A_CLOSURE( KASATRN_subs_fmpar, LASATRN_subs_fmpar, MASATRN_subs_fmpar );
(( MASATRN_subs_fmpar * ) ( KASATRN_subs_fmpar.nonlocals )) -> FYRATRN_newenvintnos = FYRATRN_newenvintnos;
(( MASATRN_subs_fmpar * ) ( KASATRN_subs_fmpar.nonlocals )) -> GXRATRN_newenv = NL(GXRATRN_newenv);
(( MASATRN_subs_fmpar * ) ( KASATRN_subs_fmpar.nonlocals )) -> Info = Info;
 /* line 2428: */
A_CLOSURE( WASATRN_subs_tmpar, XASATRN_subs_tmpar, YASATRN_subs_tmpar );
(( YASATRN_subs_tmpar * ) ( WASATRN_subs_tmpar.nonlocals )) -> XXRATRN_newenvtypenos = XXRATRN_newenvtypenos;
(( YASATRN_subs_tmpar * ) ( WASATRN_subs_tmpar.nonlocals )) -> GXRATRN_newenv = NL(GXRATRN_newenv);
(( YASATRN_subs_tmpar * ) ( WASATRN_subs_tmpar.nonlocals )) -> Info = Info;
 /* line 2440: */
A_CLOSURE( LBSATRN_subs_cmpar, MBSATRN_subs_cmpar, NBSATRN_subs_cmpar );
(( NBSATRN_subs_cmpar * ) ( LBSATRN_subs_cmpar.nonlocals )) -> PYRATRN_newenvconstnos = PYRATRN_newenvconstnos;
(( NBSATRN_subs_cmpar * ) ( LBSATRN_subs_cmpar.nonlocals )) -> GXRATRN_newenv = NL(GXRATRN_newenv);
(( NBSATRN_subs_cmpar * ) ( LBSATRN_subs_cmpar.nonlocals )) -> Info = Info;
 /* line 2449: */
A_CLOSURE( WBSATRN_subs_fnmpar, XBSATRN_subs_fnmpar, YBSATRN_subs_fnmpar );
(( YBSATRN_subs_fnmpar * ) ( WBSATRN_subs_fnmpar.nonlocals )) -> YXRATRN_newenvfnnos = YXRATRN_newenvfnnos;
(( YBSATRN_subs_fnmpar * ) ( WBSATRN_subs_fnmpar.nonlocals )) -> GXRATRN_newenv = NL(GXRATRN_newenv);
(( YBSATRN_subs_fnmpar * ) ( WBSATRN_subs_fnmpar.nonlocals )) -> Info = Info;
 /* line 2465: */
A_CLOSURE( TCSATRN_add_nametype, UCSATRN_add_nametype, VCSATRN_add_nametype );
(( VCSATRN_add_nametype * ) ( TCSATRN_add_nametype.nonlocals )) -> KZRATRN_nametypeno = (&KZRATRN_nametypeno);
(( VCSATRN_add_nametype * ) ( TCSATRN_add_nametype.nonlocals )) -> LZRATRN_newfdec = LZRATRN_newfdec;
(( VCSATRN_add_nametype * ) ( TCSATRN_add_nametype.nonlocals )) -> IZRATRN_nametypechange = (&IZRATRN_nametypechange);
(( VCSATRN_add_nametype * ) ( TCSATRN_add_nametype.nonlocals )) -> EZRATRN_newnamenos = EZRATRN_newnamenos;
 /* line 2493: */
 /* line 2494: */
 /* line 2546: */
A_CLOSURE( JFSATRN_find_closureno, KFSATRN_find_closureno, LFSATRN_find_closureno );
(( LFSATRN_find_closureno * ) ( JFSATRN_find_closureno.nonlocals )) -> SDRATRN_hashtable = NL(SDRATRN_hashtable);
(( LFSATRN_find_closureno * ) ( JFSATRN_find_closureno.nonlocals )) -> EDRATRN_newclosure = NL(EDRATRN_newclosure);
(( LFSATRN_find_closureno * ) ( JFSATRN_find_closureno.nonlocals )) -> Msg = NL(Msg);
(( LFSATRN_find_closureno * ) ( JFSATRN_find_closureno.nonlocals )) -> OZRATRN_newclose = OZRATRN_newclose;
 /* line 2567: */
A_CLOSURE( AGSATRN_fndec_fnno, BGSATRN_fndec_fnno, CGSATRN_fndec_fnno );
(( CGSATRN_fndec_fnno * ) ( AGSATRN_fndec_fnno.nonlocals )) -> YXRATRN_newenvfnnos = YXRATRN_newenvfnnos;
(( CGSATRN_fndec_fnno * ) ( AGSATRN_fndec_fnno.nonlocals )) -> GXRATRN_newenv = NL(GXRATRN_newenv);
(( CGSATRN_fndec_fnno * ) ( AGSATRN_fndec_fnno.nonlocals )) -> FWRATRN_macpartable = NL(FWRATRN_macpartable);
(( CGSATRN_fndec_fnno * ) ( AGSATRN_fndec_fnno.nonlocals )) -> OZRATRN_newclose = OZRATRN_newclose;
 /* line 2586: */
A_CLOSURE( PGSATRN_fnusage_fnno, QGSATRN_fnusage_fnno, RGSATRN_fnusage_fnno );
(( RGSATRN_fnusage_fnno * ) ( PGSATRN_fnusage_fnno.nonlocals )) -> YXRATRN_newenvfnnos = YXRATRN_newenvfnnos;
(( RGSATRN_fnusage_fnno * ) ( PGSATRN_fnusage_fnno.nonlocals )) -> GXRATRN_newenv = NL(GXRATRN_newenv);
 /* line 2609: */
A_CLOSURE( CHSATRN_add_envint, DHSATRN_add_envint, EHSATRN_add_envint );
(( EHSATRN_add_envint * ) ( CHSATRN_add_envint.nonlocals )) -> WWRATRN_envintno = NL(WWRATRN_envintno);
(( EHSATRN_add_envint * ) ( CHSATRN_add_envint.nonlocals )) -> GXRATRN_newenv = NL(GXRATRN_newenv);
(( EHSATRN_add_envint * ) ( CHSATRN_add_envint.nonlocals )) -> UWRATRN_envintchanged = NL(UWRATRN_envintchanged);
(( EHSATRN_add_envint * ) ( CHSATRN_add_envint.nonlocals )) -> FYRATRN_newenvintnos = FYRATRN_newenvintnos;
 /* line 2629: */
A_CLOSURE( HISATRN_add_envconst, IISATRN_add_envconst, JISATRN_add_envconst );
(( JISATRN_add_envconst * ) ( HISATRN_add_envconst.nonlocals )) -> ZWRATRN_envconstno = NL(ZWRATRN_envconstno);
(( JISATRN_add_envconst * ) ( HISATRN_add_envconst.nonlocals )) -> GXRATRN_newenv = NL(GXRATRN_newenv);
(( JISATRN_add_envconst * ) ( HISATRN_add_envconst.nonlocals )) -> XWRATRN_envconstchanged = NL(XWRATRN_envconstchanged);
(( JISATRN_add_envconst * ) ( HISATRN_add_envconst.nonlocals )) -> PYRATRN_newenvconstnos = PYRATRN_newenvconstnos;
 /* line 2650: */
A_CLOSURE( LJSATRN_resetscope, MJSATRN_resetscope, NJSATRN_resetscope );
(( NJSATRN_resetscope * ) ( LJSATRN_resetscope.nonlocals )) -> WXRATRN_newenvattrnos = WXRATRN_newenvattrnos;
(( NJSATRN_resetscope * ) ( LJSATRN_resetscope.nonlocals )) -> XXRATRN_newenvtypenos = XXRATRN_newenvtypenos;
(( NJSATRN_resetscope * ) ( LJSATRN_resetscope.nonlocals )) -> YXRATRN_newenvfnnos = YXRATRN_newenvfnnos;
 /* line 2683: */
 /* line 2692: */
 /* line 2707: */
A_CLOSURE( NLSATRN_add_envfn, OLSATRN_add_envfn, PLSATRN_add_envfn );
(( PLSATRN_add_envfn * ) ( NLSATRN_add_envfn.nonlocals )) -> FXRATRN_envfnno = NL(FXRATRN_envfnno);
(( PLSATRN_add_envfn * ) ( NLSATRN_add_envfn.nonlocals )) -> GXRATRN_newenv = NL(GXRATRN_newenv);
(( PLSATRN_add_envfn * ) ( NLSATRN_add_envfn.nonlocals )) -> DXRATRN_envfnchanged = NL(DXRATRN_envfnchanged);
(( PLSATRN_add_envfn * ) ( NLSATRN_add_envfn.nonlocals )) -> VVRATRN_macfndecls = NL(VVRATRN_macfndecls);
(( PLSATRN_add_envfn * ) ( NLSATRN_add_envfn.nonlocals )) -> FWRATRN_macpartable = NL(FWRATRN_macpartable);
(( PLSATRN_add_envfn * ) ( NLSATRN_add_envfn.nonlocals )) -> YXRATRN_newenvfnnos = YXRATRN_newenvfnnos;
 /* line 2736: */
A_CLOSURE( GNSATRN_merge_envfns, HNSATRN_merge_envfns, INSATRN_merge_envfns );
(( INSATRN_merge_envfns * ) ( GNSATRN_merge_envfns.nonlocals )) -> FXRATRN_envfnno = NL(FXRATRN_envfnno);
 /* line 2752: */
A_CLOSURE( ZNSATRN_add_envtype, AOSATRN_add_envtype, BOSATRN_add_envtype );
(( BOSATRN_add_envtype * ) ( ZNSATRN_add_envtype.nonlocals )) -> CXRATRN_envtypeno = NL(CXRATRN_envtypeno);
(( BOSATRN_add_envtype * ) ( ZNSATRN_add_envtype.nonlocals )) -> GXRATRN_newenv = NL(GXRATRN_newenv);
(( BOSATRN_add_envtype * ) ( ZNSATRN_add_envtype.nonlocals )) -> AXRATRN_envtypechanged = NL(AXRATRN_envtypechanged);
(( BOSATRN_add_envtype * ) ( ZNSATRN_add_envtype.nonlocals )) -> LVRATRN_mactypedecls = NL(LVRATRN_mactypedecls);
(( BOSATRN_add_envtype * ) ( ZNSATRN_add_envtype.nonlocals )) -> XXRATRN_newenvtypenos = XXRATRN_newenvtypenos;
 /* line 2781: */
A_CLOSURE( MPSATRN_merge_envtypes, NPSATRN_merge_envtypes, OPSATRN_merge_envtypes );
(( OPSATRN_merge_envtypes * ) ( MPSATRN_merge_envtypes.nonlocals )) -> CXRATRN_envtypeno = NL(CXRATRN_envtypeno);
 /* line 2796: */
A_CLOSURE( FQSATRN_add_envattr, GQSATRN_add_envattr, HQSATRN_add_envattr );
(( HQSATRN_add_envattr * ) ( FQSATRN_add_envattr.nonlocals )) -> TWRATRN_envattrno = NL(TWRATRN_envattrno);
(( HQSATRN_add_envattr * ) ( FQSATRN_add_envattr.nonlocals )) -> GXRATRN_newenv = NL(GXRATRN_newenv);
(( HQSATRN_add_envattr * ) ( FQSATRN_add_envattr.nonlocals )) -> RWRATRN_envattrchanged = NL(RWRATRN_envattrchanged);
(( HQSATRN_add_envattr * ) ( FQSATRN_add_envattr.nonlocals )) -> BVRATRN_macattrdecls = NL(BVRATRN_macattrdecls);
(( HQSATRN_add_envattr * ) ( FQSATRN_add_envattr.nonlocals )) -> WXRATRN_newenvattrnos = WXRATRN_newenvattrnos;
 /* line 2825: */
A_CLOSURE( SRSATRN_merge_envattrs, TRSATRN_merge_envattrs, URSATRN_merge_envattrs );
(( URSATRN_merge_envattrs * ) ( SRSATRN_merge_envattrs.nonlocals )) -> TWRATRN_envattrno = NL(TWRATRN_envattrno);
 /* line 2846: */
A_CLOSURE( JSSATRN_translate_mactypeno, KSSATRN_translate_mactypeno, LSSATRN_translate_mactypeno );
(( LSSATRN_translate_mactypeno * ) ( JSSATRN_translate_mactypeno.nonlocals )) -> UXRATRN_paramenv = (&UXRATRN_paramenv);
(( LSSATRN_translate_mactypeno * ) ( JSSATRN_translate_mactypeno.nonlocals )) -> TXRATRN_oldenv = TXRATRN_oldenv;
(( LSSATRN_translate_mactypeno * ) ( JSSATRN_translate_mactypeno.nonlocals )) -> GXRATRN_newenv = NL(GXRATRN_newenv);
(( LSSATRN_translate_mactypeno * ) ( JSSATRN_translate_mactypeno.nonlocals )) -> CXRATRN_envtypeno = NL(CXRATRN_envtypeno);
(( LSSATRN_translate_mactypeno * ) ( JSSATRN_translate_mactypeno.nonlocals )) -> XXRATRN_newenvtypenos = XXRATRN_newenvtypenos;
 /* line 2863: */
 /* line 2870: */
A_CLOSURE( MTSATRN_set_unittype, NTSATRN_set_unittype, OTSATRN_set_unittype );
(( OTSATRN_set_unittype * ) ( MTSATRN_set_unittype.nonlocals )) -> Fdec = Fdec;
(( OTSATRN_set_unittype * ) ( MTSATRN_set_unittype.nonlocals )) -> TXRATRN_oldenv = TXRATRN_oldenv;
 /* line 2883: */
A_CLOSURE( UTSATRN_translate_macfnno, VTSATRN_translate_macfnno, WTSATRN_translate_macfnno );
(( WTSATRN_translate_macfnno * ) ( UTSATRN_translate_macfnno.nonlocals )) -> UXRATRN_paramenv = (&UXRATRN_paramenv);
(( WTSATRN_translate_macfnno * ) ( UTSATRN_translate_macfnno.nonlocals )) -> TXRATRN_oldenv = TXRATRN_oldenv;
(( WTSATRN_translate_macfnno * ) ( UTSATRN_translate_macfnno.nonlocals )) -> GXRATRN_newenv = NL(GXRATRN_newenv);
(( WTSATRN_translate_macfnno * ) ( UTSATRN_translate_macfnno.nonlocals )) -> FXRATRN_envfnno = NL(FXRATRN_envfnno);
(( WTSATRN_translate_macfnno * ) ( UTSATRN_translate_macfnno.nonlocals )) -> YXRATRN_newenvfnnos = YXRATRN_newenvfnnos;
 /* line 2901: */
A_CLOSURE( IUSATRN_set_envfn, JUSATRN_set_envfn, KUSATRN_set_envfn );
(( KUSATRN_set_envfn * ) ( IUSATRN_set_envfn.nonlocals )) -> UTSATRN_translate_macfnno = UTSATRN_translate_macfnno;
(( KUSATRN_set_envfn * ) ( IUSATRN_set_envfn.nonlocals )) -> UXRATRN_paramenv = (&UXRATRN_paramenv);
(( KUSATRN_set_envfn * ) ( IUSATRN_set_envfn.nonlocals )) -> GXRATRN_newenv = NL(GXRATRN_newenv);
(( KUSATRN_set_envfn * ) ( IUSATRN_set_envfn.nonlocals )) -> NLSATRN_add_envfn = NLSATRN_add_envfn;
 /* line 2931: */
A_CLOSURE( OVSATRN_translate_macattrno, PVSATRN_translate_macattrno, QVSATRN_translate_macattrno );
(( QVSATRN_translate_macattrno * ) ( OVSATRN_translate_macattrno.nonlocals )) -> UXRATRN_paramenv = (&UXRATRN_paramenv);
(( QVSATRN_translate_macattrno * ) ( OVSATRN_translate_macattrno.nonlocals )) -> TXRATRN_oldenv = TXRATRN_oldenv;
(( QVSATRN_translate_macattrno * ) ( OVSATRN_translate_macattrno.nonlocals )) -> GXRATRN_newenv = NL(GXRATRN_newenv);
(( QVSATRN_translate_macattrno * ) ( OVSATRN_translate_macattrno.nonlocals )) -> TWRATRN_envattrno = NL(TWRATRN_envattrno);
(( QVSATRN_translate_macattrno * ) ( OVSATRN_translate_macattrno.nonlocals )) -> WXRATRN_newenvattrnos = WXRATRN_newenvattrnos;
 /* line 2955: */
AWSATRN_force = A68_FALSE;
 /* line 2957: */
A_CLOSURE( DWSATRN_type_expand, EWSATRN_type_expand, FWSATRN_type_expand );
(( FWSATRN_type_expand * ) ( DWSATRN_type_expand.nonlocals )) -> UXRATRN_paramenv = (&UXRATRN_paramenv);
(( FWSATRN_type_expand * ) ( DWSATRN_type_expand.nonlocals )) -> TXRATRN_oldenv = TXRATRN_oldenv;
(( FWSATRN_type_expand * ) ( DWSATRN_type_expand.nonlocals )) -> WASATRN_subs_tmpar = WASATRN_subs_tmpar;
(( FWSATRN_type_expand * ) ( DWSATRN_type_expand.nonlocals )) -> XXRATRN_newenvtypenos = XXRATRN_newenvtypenos;
(( FWSATRN_type_expand * ) ( DWSATRN_type_expand.nonlocals )) -> JSSATRN_translate_mactypeno = JSSATRN_translate_mactypeno;
(( FWSATRN_type_expand * ) ( DWSATRN_type_expand.nonlocals )) -> AWSATRN_force = (&AWSATRN_force);
(( FWSATRN_type_expand * ) ( DWSATRN_type_expand.nonlocals )) -> ZNSATRN_add_envtype = ZNSATRN_add_envtype;
 /* line 2997: */
 /* line 3026: */
A_CLOSURE( WYSATRN_update_attr, XYSATRN_update_attr, YYSATRN_update_attr );
(( YYSATRN_update_attr * ) ( WYSATRN_update_attr.nonlocals )) -> GXRATRN_newenv = NL(GXRATRN_newenv);
(( YYSATRN_update_attr * ) ( WYSATRN_update_attr.nonlocals )) -> TWRATRN_envattrno = NL(TWRATRN_envattrno);
(( YYSATRN_update_attr * ) ( WYSATRN_update_attr.nonlocals )) -> TXRATRN_oldenv = TXRATRN_oldenv;
(( YYSATRN_update_attr * ) ( WYSATRN_update_attr.nonlocals )) -> FQSATRN_add_envattr = FQSATRN_add_envattr;
(( YYSATRN_update_attr * ) ( WYSATRN_update_attr.nonlocals )) -> Oldclosure = NL(Oldclosure);
(( YYSATRN_update_attr * ) ( WYSATRN_update_attr.nonlocals )) -> Msg = NL(Msg);
(( YYSATRN_update_attr * ) ( WYSATRN_update_attr.nonlocals )) -> WYSATRN_update_attr = WYSATRN_update_attr;
 /* line 3065: */
A_CLOSURE( SZSATRN_attr_expand, TZSATRN_attr_expand, UZSATRN_attr_expand );
(( UZSATRN_attr_expand * ) ( SZSATRN_attr_expand.nonlocals )) -> UXRATRN_paramenv = (&UXRATRN_paramenv);
(( UZSATRN_attr_expand * ) ( SZSATRN_attr_expand.nonlocals )) -> TXRATRN_oldenv = TXRATRN_oldenv;
(( UZSATRN_attr_expand * ) ( SZSATRN_attr_expand.nonlocals )) -> AASATRN_subs_ampar = AASATRN_subs_ampar;
(( UZSATRN_attr_expand * ) ( SZSATRN_attr_expand.nonlocals )) -> WXRATRN_newenvattrnos = WXRATRN_newenvattrnos;
(( UZSATRN_attr_expand * ) ( SZSATRN_attr_expand.nonlocals )) -> OVSATRN_translate_macattrno = OVSATRN_translate_macattrno;
(( UZSATRN_attr_expand * ) ( SZSATRN_attr_expand.nonlocals )) -> WYSATRN_update_attr = WYSATRN_update_attr;
 /* line 3107: */
A_CLOSURE( OBTATRN_formula_expand, PBTATRN_formula_expand, QBTATRN_formula_expand );
(( QBTATRN_formula_expand * ) ( OBTATRN_formula_expand.nonlocals )) -> QZRATRN_oldclose = QZRATRN_oldclose;
(( QBTATRN_formula_expand * ) ( OBTATRN_formula_expand.nonlocals )) -> TZRATRN_diag = TZRATRN_diag;
(( QBTATRN_formula_expand * ) ( OBTATRN_formula_expand.nonlocals )) -> MERATRN_fname_evaluate = NL(MERATRN_fname_evaluate);
(( QBTATRN_formula_expand * ) ( OBTATRN_formula_expand.nonlocals )) -> VXRATRN_repldecs = (&VXRATRN_repldecs);
(( QBTATRN_formula_expand * ) ( OBTATRN_formula_expand.nonlocals )) -> KASATRN_subs_fmpar = KASATRN_subs_fmpar;
 /* line 3139: */
 /* line 3141: */
 /* line 3159: */
 /* line 3160: */
A_CLOSURE( PDTATRN_reposition_decls, QDTATRN_reposition_decls, RDTATRN_reposition_decls );
 /* line 3183: */
A_CLOSURE( KETATRN_position_decls, LETATRN_position_decls, METATRN_position_decls );
(( METATRN_position_decls * ) ( KETATRN_position_decls.nonlocals )) -> TZRATRN_diag = TZRATRN_diag;
(( METATRN_position_decls * ) ( KETATRN_position_decls.nonlocals )) -> PDTATRN_reposition_decls = PDTATRN_reposition_decls;
(( METATRN_position_decls * ) ( KETATRN_position_decls.nonlocals )) -> BVRATRN_macattrdecls = NL(BVRATRN_macattrdecls);
(( METATRN_position_decls * ) ( KETATRN_position_decls.nonlocals )) -> LVRATRN_mactypedecls = NL(LVRATRN_mactypedecls);
(( METATRN_position_decls * ) ( KETATRN_position_decls.nonlocals )) -> YXRATRN_newenvfnnos = YXRATRN_newenvfnnos;
(( METATRN_position_decls * ) ( KETATRN_position_decls.nonlocals )) -> VVRATRN_macfndecls = NL(VVRATRN_macfndecls);
 /* line 3220: */
A_CLOSURE( OFTATRN_fnbody_decl, PFTATRN_fnbody_decl, QFTATRN_fnbody_decl );
(( QFTATRN_fnbody_decl * ) ( OFTATRN_fnbody_decl.nonlocals )) -> TZRATRN_diag = TZRATRN_diag;
(( QFTATRN_fnbody_decl * ) ( OFTATRN_fnbody_decl.nonlocals )) -> YXRATRN_newenvfnnos = YXRATRN_newenvfnnos;
 /* line 3256: */
A_CLOSURE( AHTATRN_decl_inner, BHTATRN_decl_inner, CHTATRN_decl_inner );
(( CHTATRN_decl_inner * ) ( AHTATRN_decl_inner.nonlocals )) -> TZRATRN_diag = TZRATRN_diag;
(( CHTATRN_decl_inner * ) ( AHTATRN_decl_inner.nonlocals )) -> TXRATRN_oldenv = TXRATRN_oldenv;
(( CHTATRN_decl_inner * ) ( AHTATRN_decl_inner.nonlocals )) -> FQSATRN_add_envattr = FQSATRN_add_envattr;
(( CHTATRN_decl_inner * ) ( AHTATRN_decl_inner.nonlocals )) -> CHSATRN_add_envint = CHSATRN_add_envint;
(( CHTATRN_decl_inner * ) ( AHTATRN_decl_inner.nonlocals )) -> ZNSATRN_add_envtype = ZNSATRN_add_envtype;
(( CHTATRN_decl_inner * ) ( AHTATRN_decl_inner.nonlocals )) -> HISATRN_add_envconst = HISATRN_add_envconst;
(( CHTATRN_decl_inner * ) ( AHTATRN_decl_inner.nonlocals )) -> QXRATRN_fndec_expand = NL(QXRATRN_fndec_expand);
(( CHTATRN_decl_inner * ) ( AHTATRN_decl_inner.nonlocals )) -> AASATRN_subs_ampar = AASATRN_subs_ampar;
(( CHTATRN_decl_inner * ) ( AHTATRN_decl_inner.nonlocals )) -> KASATRN_subs_fmpar = KASATRN_subs_fmpar;
(( CHTATRN_decl_inner * ) ( AHTATRN_decl_inner.nonlocals )) -> WASATRN_subs_tmpar = WASATRN_subs_tmpar;
(( CHTATRN_decl_inner * ) ( AHTATRN_decl_inner.nonlocals )) -> LBSATRN_subs_cmpar = LBSATRN_subs_cmpar;
(( CHTATRN_decl_inner * ) ( AHTATRN_decl_inner.nonlocals )) -> WBSATRN_subs_fnmpar = WBSATRN_subs_fnmpar;
(( CHTATRN_decl_inner * ) ( AHTATRN_decl_inner.nonlocals )) -> VXRATRN_repldecs = (&VXRATRN_repldecs);
(( CHTATRN_decl_inner * ) ( AHTATRN_decl_inner.nonlocals )) -> TYRATRN_mptable = (&TYRATRN_mptable);
(( CHTATRN_decl_inner * ) ( AHTATRN_decl_inner.nonlocals )) -> WXRATRN_newenvattrnos = WXRATRN_newenvattrnos;
(( CHTATRN_decl_inner * ) ( AHTATRN_decl_inner.nonlocals )) -> XXRATRN_newenvtypenos = XXRATRN_newenvtypenos;
(( CHTATRN_decl_inner * ) ( AHTATRN_decl_inner.nonlocals )) -> YXRATRN_newenvfnnos = YXRATRN_newenvfnnos;
(( CHTATRN_decl_inner * ) ( AHTATRN_decl_inner.nonlocals )) -> NLSATRN_add_envfn = NLSATRN_add_envfn;
 /* line 3334: */
A_CLOSURE( TJTATRN_series_decl, UJTATRN_series_decl, VJTATRN_series_decl );
(( VJTATRN_series_decl * ) ( TJTATRN_series_decl.nonlocals )) -> TJTATRN_series_decl = TJTATRN_series_decl;
(( VJTATRN_series_decl * ) ( TJTATRN_series_decl.nonlocals )) -> KETATRN_position_decls = KETATRN_position_decls;
 /* line 3372: */
A_CLOSURE( UKTATRN_sequence_decl, VKTATRN_sequence_decl, WKTATRN_sequence_decl );
(( WKTATRN_sequence_decl * ) ( UKTATRN_sequence_decl.nonlocals )) -> UKTATRN_sequence_decl = UKTATRN_sequence_decl;
(( WKTATRN_sequence_decl * ) ( UKTATRN_sequence_decl.nonlocals )) -> KETATRN_position_decls = KETATRN_position_decls;
 /* line 3399: */
A_CLOSURE( OLTATRN_body_unit, PLTATRN_body_unit, QLTATRN_body_unit );
(( QLTATRN_body_unit * ) ( OLTATRN_body_unit.nonlocals )) -> VYRATRN_is_fnbody = (&VYRATRN_is_fnbody);
(( QLTATRN_body_unit * ) ( OLTATRN_body_unit.nonlocals )) -> XYRATRN_joinlist = (&XYRATRN_joinlist);
(( QLTATRN_body_unit * ) ( OLTATRN_body_unit.nonlocals )) -> WYRATRN_joinup = (&WYRATRN_joinup);
(( QLTATRN_body_unit * ) ( OLTATRN_body_unit.nonlocals )) -> OZRATRN_newclose = OZRATRN_newclose;
(( QLTATRN_body_unit * ) ( OLTATRN_body_unit.nonlocals )) -> TZRATRN_diag = TZRATRN_diag;
 /* line 3416: */
A_CLOSURE( AMTATRN_useries_expand, BMTATRN_useries_expand, CMTATRN_useries_expand );
(( CMTATRN_useries_expand * ) ( AMTATRN_useries_expand.nonlocals )) -> OLTATRN_body_unit = OLTATRN_body_unit;
(( CMTATRN_useries_expand * ) ( AMTATRN_useries_expand.nonlocals )) -> TJTATRN_series_decl = TJTATRN_series_decl;
 /* line 3431: */
A_CLOSURE( UMTATRN_usequence_expand, VMTATRN_usequence_expand, WMTATRN_usequence_expand );
(( WMTATRN_usequence_expand * ) ( UMTATRN_usequence_expand.nonlocals )) -> OLTATRN_body_unit = OLTATRN_body_unit;
(( WMTATRN_usequence_expand * ) ( UMTATRN_usequence_expand.nonlocals )) -> UKTATRN_sequence_decl = UKTATRN_sequence_decl;
 /* line 3447: */
A_CLOSURE( ONTATRN_urow_expand, PNTATRN_urow_expand, QNTATRN_urow_expand );
(( QNTATRN_urow_expand * ) ( ONTATRN_urow_expand.nonlocals )) -> WYRATRN_joinup = (&WYRATRN_joinup);
(( QNTATRN_urow_expand * ) ( ONTATRN_urow_expand.nonlocals )) -> WXQATRN_contains_diagnostics = NL(WXQATRN_contains_diagnostics);
 /* line 3465: */
A_CLOSURE( ZOTATRN_uname_nameno, APTATRN_uname_nameno, BPTATRN_uname_nameno );
(( BPTATRN_uname_nameno * ) ( ZOTATRN_uname_nameno.nonlocals )) -> WYRATRN_joinup = (&WYRATRN_joinup);
(( BPTATRN_uname_nameno * ) ( ZOTATRN_uname_nameno.nonlocals )) -> XYRATRN_joinlist = (&XYRATRN_joinlist);
(( BPTATRN_uname_nameno * ) ( ZOTATRN_uname_nameno.nonlocals )) -> EZRATRN_newnamenos = EZRATRN_newnamenos;
 /* line 3485: */
A_CLOSURE( RPTATRN_ustr_joinup, SPTATRN_ustr_joinup, TPTATRN_ustr_joinup );
(( TPTATRN_ustr_joinup * ) ( RPTATRN_ustr_joinup.nonlocals )) -> WYRATRN_joinup = (&WYRATRN_joinup);
 /* line 3509: */
A_CLOSURE( TQTATRN_udyindex_joinup, UQTATRN_udyindex_joinup, VQTATRN_udyindex_joinup );
(( VQTATRN_udyindex_joinup * ) ( TQTATRN_udyindex_joinup.nonlocals )) -> WYRATRN_joinup = (&WYRATRN_joinup);
(( VQTATRN_udyindex_joinup * ) ( TQTATRN_udyindex_joinup.nonlocals )) -> MTSATRN_set_unittype = MTSATRN_set_unittype;
(( VQTATRN_udyindex_joinup * ) ( TQTATRN_udyindex_joinup.nonlocals )) -> LZRATRN_newfdec = LZRATRN_newfdec;
(( VQTATRN_udyindex_joinup * ) ( TQTATRN_udyindex_joinup.nonlocals )) -> GXRATRN_newenv = NL(GXRATRN_newenv);
 /* line 3536: */
A_CLOSURE( ASTATRN_uinst_joinup, BSTATRN_uinst_joinup, CSTATRN_uinst_joinup );
(( CSTATRN_uinst_joinup * ) ( ASTATRN_uinst_joinup.nonlocals )) -> WYRATRN_joinup = (&WYRATRN_joinup);
(( CSTATRN_uinst_joinup * ) ( ASTATRN_uinst_joinup.nonlocals )) -> OZRATRN_newclose = OZRATRN_newclose;
(( CSTATRN_uinst_joinup * ) ( ASTATRN_uinst_joinup.nonlocals )) -> TZRATRN_diag = TZRATRN_diag;
 /* line 3558: */
A_CLOSURE( ETTATRN_uchoices, FTTATRN_uchoices, GTTATRN_uchoices );
(( GTTATRN_uchoices * ) ( ETTATRN_uchoices.nonlocals )) -> WYRATRN_joinup = (&WYRATRN_joinup);
(( GTTATRN_uchoices * ) ( ETTATRN_uchoices.nonlocals )) -> OZRATRN_newclose = OZRATRN_newclose;
(( GTTATRN_uchoices * ) ( ETTATRN_uchoices.nonlocals )) -> TZRATRN_diag = TZRATRN_diag;
(( GTTATRN_uchoices * ) ( ETTATRN_uchoices.nonlocals )) -> ETTATRN_uchoices = ETTATRN_uchoices;
 /* line 3589: */
 /* line 3597: */
A_CLOSURE( QUTATRN_unit_expand, RUTATRN_unit_expand, SUTATRN_unit_expand );
(( SUTATRN_unit_expand * ) ( QUTATRN_unit_expand.nonlocals )) -> QZRATRN_oldclose = QZRATRN_oldclose;
(( SUTATRN_unit_expand * ) ( QUTATRN_unit_expand.nonlocals )) -> LBSATRN_subs_cmpar = LBSATRN_subs_cmpar;
(( SUTATRN_unit_expand * ) ( QUTATRN_unit_expand.nonlocals )) -> WDRATRN_ints_consts = NL(WDRATRN_ints_consts);
(( SUTATRN_unit_expand * ) ( QUTATRN_unit_expand.nonlocals )) -> UXRATRN_paramenv = (&UXRATRN_paramenv);
(( SUTATRN_unit_expand * ) ( QUTATRN_unit_expand.nonlocals )) -> WYRATRN_joinup = (&WYRATRN_joinup);
(( SUTATRN_unit_expand * ) ( QUTATRN_unit_expand.nonlocals )) -> OZRATRN_newclose = OZRATRN_newclose;
(( SUTATRN_unit_expand * ) ( QUTATRN_unit_expand.nonlocals )) -> TZRATRN_diag = TZRATRN_diag;
(( SUTATRN_unit_expand * ) ( QUTATRN_unit_expand.nonlocals )) -> ZOTATRN_uname_nameno = ZOTATRN_uname_nameno;
(( SUTATRN_unit_expand * ) ( QUTATRN_unit_expand.nonlocals )) -> RPTATRN_ustr_joinup = RPTATRN_ustr_joinup;
(( SUTATRN_unit_expand * ) ( QUTATRN_unit_expand.nonlocals )) -> ESRATRN_uconc_expand = NL(ESRATRN_uconc_expand);
(( SUTATRN_unit_expand * ) ( QUTATRN_unit_expand.nonlocals )) -> KKRATRN_uindex_expand = NL(KKRATRN_uindex_expand);
(( SUTATRN_unit_expand * ) ( QUTATRN_unit_expand.nonlocals )) -> RLRATRN_utrim_expand = NL(RLRATRN_utrim_expand);
(( SUTATRN_unit_expand * ) ( QUTATRN_unit_expand.nonlocals )) -> TQTATRN_udyindex_joinup = TQTATRN_udyindex_joinup;
(( SUTATRN_unit_expand * ) ( QUTATRN_unit_expand.nonlocals )) -> ASTATRN_uinst_joinup = ASTATRN_uinst_joinup;
(( SUTATRN_unit_expand * ) ( QUTATRN_unit_expand.nonlocals )) -> LZRATRN_newfdec = LZRATRN_newfdec;
(( SUTATRN_unit_expand * ) ( QUTATRN_unit_expand.nonlocals )) -> GXRATRN_newenv = NL(GXRATRN_newenv);
(( SUTATRN_unit_expand * ) ( QUTATRN_unit_expand.nonlocals )) -> ETTATRN_uchoices = ETTATRN_uchoices;
(( SUTATRN_unit_expand * ) ( QUTATRN_unit_expand.nonlocals )) -> ONTATRN_urow_expand = ONTATRN_urow_expand;
(( SUTATRN_unit_expand * ) ( QUTATRN_unit_expand.nonlocals )) -> TXRATRN_oldenv = TXRATRN_oldenv;
(( SUTATRN_unit_expand * ) ( QUTATRN_unit_expand.nonlocals )) -> VXRATRN_repldecs = (&VXRATRN_repldecs);
(( SUTATRN_unit_expand * ) ( QUTATRN_unit_expand.nonlocals )) -> AMTATRN_useries_expand = AMTATRN_useries_expand;
(( SUTATRN_unit_expand * ) ( QUTATRN_unit_expand.nonlocals )) -> UMTATRN_usequence_expand = UMTATRN_usequence_expand;
 /* line 3755: */
A_CLOSURE( QBUATRN_mparams_expand, RBUATRN_mparams_expand, SBUATRN_mparams_expand );
(( SBUATRN_mparams_expand * ) ( QBUATRN_mparams_expand.nonlocals )) -> UXRATRN_paramenv = (&UXRATRN_paramenv);
(( SBUATRN_mparams_expand * ) ( QBUATRN_mparams_expand.nonlocals )) -> SZSATRN_attr_expand = SZSATRN_attr_expand;
(( SBUATRN_mparams_expand * ) ( QBUATRN_mparams_expand.nonlocals )) -> DWSATRN_type_expand = DWSATRN_type_expand;
(( SBUATRN_mparams_expand * ) ( QBUATRN_mparams_expand.nonlocals )) -> QUTATRN_unit_expand = QUTATRN_unit_expand;
(( SBUATRN_mparams_expand * ) ( QBUATRN_mparams_expand.nonlocals )) -> WYRATRN_joinup = (&WYRATRN_joinup);
(( SBUATRN_mparams_expand * ) ( QBUATRN_mparams_expand.nonlocals )) -> IUSATRN_set_envfn = IUSATRN_set_envfn;
(( SBUATRN_mparams_expand * ) ( QBUATRN_mparams_expand.nonlocals )) -> TXRATRN_oldenv = TXRATRN_oldenv;
(( SBUATRN_mparams_expand * ) ( QBUATRN_mparams_expand.nonlocals )) -> Mstable = Mstable;
(( SBUATRN_mparams_expand * ) ( QBUATRN_mparams_expand.nonlocals )) -> TYRATRN_mptable = (&TYRATRN_mptable);
 /* line 3812: */
A_CLOSURE( UDUATRN_macspecs_expand, VDUATRN_macspecs_expand, WDUATRN_macspecs_expand );
(( WDUATRN_macspecs_expand * ) ( UDUATRN_macspecs_expand.nonlocals )) -> Params = Params;
(( WDUATRN_macspecs_expand * ) ( UDUATRN_macspecs_expand.nonlocals )) -> AWSATRN_force = (&AWSATRN_force);
(( WDUATRN_macspecs_expand * ) ( UDUATRN_macspecs_expand.nonlocals )) -> QBUATRN_mparams_expand = QBUATRN_mparams_expand;
(( WDUATRN_macspecs_expand * ) ( UDUATRN_macspecs_expand.nonlocals )) -> TXRATRN_oldenv = TXRATRN_oldenv;
(( WDUATRN_macspecs_expand * ) ( UDUATRN_macspecs_expand.nonlocals )) -> FQSATRN_add_envattr = FQSATRN_add_envattr;
(( WDUATRN_macspecs_expand * ) ( UDUATRN_macspecs_expand.nonlocals )) -> CHSATRN_add_envint = CHSATRN_add_envint;
(( WDUATRN_macspecs_expand * ) ( UDUATRN_macspecs_expand.nonlocals )) -> ZNSATRN_add_envtype = ZNSATRN_add_envtype;
(( WDUATRN_macspecs_expand * ) ( UDUATRN_macspecs_expand.nonlocals )) -> HISATRN_add_envconst = HISATRN_add_envconst;
(( WDUATRN_macspecs_expand * ) ( UDUATRN_macspecs_expand.nonlocals )) -> NLSATRN_add_envfn = NLSATRN_add_envfn;
(( WDUATRN_macspecs_expand * ) ( UDUATRN_macspecs_expand.nonlocals )) -> UXRATRN_paramenv = (&UXRATRN_paramenv);
 /* line 3891: */
A_CLOSURE( GIUATRN_seqchoices, HIUATRN_seqchoices, IIUATRN_seqchoices );
(( IIUATRN_seqchoices * ) ( GIUATRN_seqchoices.nonlocals )) -> WYRATRN_joinup = (&WYRATRN_joinup);
(( IIUATRN_seqchoices * ) ( GIUATRN_seqchoices.nonlocals )) -> OZRATRN_newclose = OZRATRN_newclose;
(( IIUATRN_seqchoices * ) ( GIUATRN_seqchoices.nonlocals )) -> TZRATRN_diag = TZRATRN_diag;
(( IIUATRN_seqchoices * ) ( GIUATRN_seqchoices.nonlocals )) -> GIUATRN_seqchoices = GIUATRN_seqchoices;
 /* line 3920: */
 /* line 3931: */
 /* line 3946: */
A_CLOSURE( OKUATRN_seqrepl_expand, PKUATRN_seqrepl_expand, QKUATRN_seqrepl_expand );
(( QKUATRN_seqrepl_expand * ) ( OKUATRN_seqrepl_expand.nonlocals )) -> TXRATRN_oldenv = TXRATRN_oldenv;
(( QKUATRN_seqrepl_expand * ) ( OKUATRN_seqrepl_expand.nonlocals )) -> VXRATRN_repldecs = (&VXRATRN_repldecs);
 /* line 3964: */
A_CLOSURE( OLUATRN_seqstep_expand, PLUATRN_seqstep_expand, QLUATRN_seqstep_expand );
(( QLUATRN_seqstep_expand * ) ( OLUATRN_seqstep_expand.nonlocals )) -> WYRATRN_joinup = (&WYRATRN_joinup);
(( QLUATRN_seqstep_expand * ) ( OLUATRN_seqstep_expand.nonlocals )) -> LZRATRN_newfdec = LZRATRN_newfdec;
(( QLUATRN_seqstep_expand * ) ( OLUATRN_seqstep_expand.nonlocals )) -> GXRATRN_newenv = NL(GXRATRN_newenv);
(( QLUATRN_seqstep_expand * ) ( OLUATRN_seqstep_expand.nonlocals )) -> GIUATRN_seqchoices = GIUATRN_seqchoices;
(( QLUATRN_seqstep_expand * ) ( OLUATRN_seqstep_expand.nonlocals )) -> OKUATRN_seqrepl_expand = OKUATRN_seqrepl_expand;
(( QLUATRN_seqstep_expand * ) ( OLUATRN_seqstep_expand.nonlocals )) -> OZRATRN_newclose = OZRATRN_newclose;
(( QLUATRN_seqstep_expand * ) ( OLUATRN_seqstep_expand.nonlocals )) -> TZRATRN_diag = TZRATRN_diag;
 /* line 3996: */
A_CLOSURE( ANUATRN_names_nameno, BNUATRN_names_nameno, CNUATRN_names_nameno );
(( CNUATRN_names_nameno * ) ( ANUATRN_names_nameno.nonlocals )) -> Fdec = Fdec;
(( CNUATRN_names_nameno * ) ( ANUATRN_names_nameno.nonlocals )) -> TCSATRN_add_nametype = TCSATRN_add_nametype;
(( CNUATRN_names_nameno * ) ( ANUATRN_names_nameno.nonlocals )) -> XYRATRN_joinlist = (&XYRATRN_joinlist);
(( CNUATRN_names_nameno * ) ( ANUATRN_names_nameno.nonlocals )) -> OZRATRN_newclose = OZRATRN_newclose;
(( CNUATRN_names_nameno * ) ( ANUATRN_names_nameno.nonlocals )) -> ANUATRN_names_nameno = ANUATRN_names_nameno;
 /* line 4017: */
A_CLOSURE( YNUATRN_let_expand, ZNUATRN_let_expand, AOUATRN_let_expand );
(( AOUATRN_let_expand * ) ( YNUATRN_let_expand.nonlocals )) -> WYRATRN_joinup = (&WYRATRN_joinup);
(( AOUATRN_let_expand * ) ( YNUATRN_let_expand.nonlocals )) -> OZRATRN_newclose = OZRATRN_newclose;
(( AOUATRN_let_expand * ) ( YNUATRN_let_expand.nonlocals )) -> TZRATRN_diag = TZRATRN_diag;
 /* line 4024: */
A_CLOSURE( HOUATRN_join_expand, IOUATRN_join_expand, JOUATRN_join_expand );
(( JOUATRN_join_expand * ) ( HOUATRN_join_expand.nonlocals )) -> WYRATRN_joinup = (&WYRATRN_joinup);
(( JOUATRN_join_expand * ) ( HOUATRN_join_expand.nonlocals )) -> OZRATRN_newclose = OZRATRN_newclose;
(( JOUATRN_join_expand * ) ( HOUATRN_join_expand.nonlocals )) -> TZRATRN_diag = TZRATRN_diag;
 /* line 4036: */
A_CLOSURE( YOUATRN_repljoin_expand, ZOUATRN_repljoin_expand, APUATRN_repljoin_expand );
(( APUATRN_repljoin_expand * ) ( YOUATRN_repljoin_expand.nonlocals )) -> TXRATRN_oldenv = TXRATRN_oldenv;
(( APUATRN_repljoin_expand * ) ( YOUATRN_repljoin_expand.nonlocals )) -> VXRATRN_repldecs = (&VXRATRN_repldecs);
(( APUATRN_repljoin_expand * ) ( YOUATRN_repljoin_expand.nonlocals )) -> YOUATRN_repljoin_expand = YOUATRN_repljoin_expand;
 /* line 4063: */
A_CLOSURE( BQUATRN_step_expand, CQUATRN_step_expand, DQUATRN_step_expand );
(( DQUATRN_step_expand * ) ( BQUATRN_step_expand.nonlocals )) -> YOUATRN_repljoin_expand = YOUATRN_repljoin_expand;
 /* line 4073: */
A_CLOSURE( OQUATRN_print_expand, PQUATRN_print_expand, QQUATRN_print_expand );
(( QQUATRN_print_expand * ) ( OQUATRN_print_expand.nonlocals )) -> TZRATRN_diag = TZRATRN_diag;
 /* line 4085: */
A_CLOSURE( ERUATRN_fault_expand, FRUATRN_fault_expand, GRUATRN_fault_expand );
(( GRUATRN_fault_expand * ) ( ERUATRN_fault_expand.nonlocals )) -> OZRATRN_newclose = OZRATRN_newclose;
(( GRUATRN_fault_expand * ) ( ERUATRN_fault_expand.nonlocals )) -> TZRATRN_diag = TZRATRN_diag;
 /* line 4100: */
A_CLOSURE( ASUATRN_is_output, BSUATRN_is_output, CSUATRN_is_output );
(( CSUATRN_is_output * ) ( ASUATRN_is_output.nonlocals )) -> ASUATRN_is_output = ASUATRN_is_output;
 /* line 4111: */
A_CLOSURE( NSUATRN_fnbody_expand, OSUATRN_fnbody_expand, PSUATRN_fnbody_expand );
(( PSUATRN_fnbody_expand * ) ( NSUATRN_fnbody_expand.nonlocals )) -> OFTATRN_fnbody_decl = OFTATRN_fnbody_decl;
(( PSUATRN_fnbody_expand * ) ( NSUATRN_fnbody_expand.nonlocals )) -> WYRATRN_joinup = (&WYRATRN_joinup);
(( PSUATRN_fnbody_expand * ) ( NSUATRN_fnbody_expand.nonlocals )) -> OZRATRN_newclose = OZRATRN_newclose;
(( PSUATRN_fnbody_expand * ) ( NSUATRN_fnbody_expand.nonlocals )) -> TZRATRN_diag = TZRATRN_diag;
(( PSUATRN_fnbody_expand * ) ( NSUATRN_fnbody_expand.nonlocals )) -> ASUATRN_is_output = ASUATRN_is_output;
(( PSUATRN_fnbody_expand * ) ( NSUATRN_fnbody_expand.nonlocals )) -> LZRATRN_newfdec = LZRATRN_newfdec;
(( PSUATRN_fnbody_expand * ) ( NSUATRN_fnbody_expand.nonlocals )) -> XYRATRN_joinlist = (&XYRATRN_joinlist);
 /* line 4166: */
 /* line 4168: */
A_CLOSURE( STUATRN_attr_sort, TTUATRN_attr_sort, UTUATRN_attr_sort );
(( UTUATRN_attr_sort * ) ( STUATRN_attr_sort.nonlocals )) -> OZRATRN_newclose = OZRATRN_newclose;
(( UTUATRN_attr_sort * ) ( STUATRN_attr_sort.nonlocals )) -> STUATRN_attr_sort = STUATRN_attr_sort;
 /* line 4190: */
A_CLOSURE( GUUATRN_type_sort, HUUATRN_type_sort, IUUATRN_type_sort );
(( IUUATRN_type_sort * ) ( GUUATRN_type_sort.nonlocals )) -> OZRATRN_newclose = OZRATRN_newclose;
(( IUUATRN_type_sort * ) ( GUUATRN_type_sort.nonlocals )) -> GUUATRN_type_sort = GUUATRN_type_sort;
 /* line 4217: */
A_CLOSURE( ZUUATRN_macparam_sort, AVUATRN_macparam_sort, BVUATRN_macparam_sort );
(( BVUATRN_macparam_sort * ) ( ZUUATRN_macparam_sort.nonlocals )) -> STUATRN_attr_sort = STUATRN_attr_sort;
(( BVUATRN_macparam_sort * ) ( ZUUATRN_macparam_sort.nonlocals )) -> GUUATRN_type_sort = GUUATRN_type_sort;
(( BVUATRN_macparam_sort * ) ( ZUUATRN_macparam_sort.nonlocals )) -> OZRATRN_newclose = OZRATRN_newclose;
 /* line 4255: */
A_CLOSURE( YVUATRN_instance_outer, ZVUATRN_instance_outer, AWUATRN_instance_outer );
(( AWUATRN_instance_outer * ) ( YVUATRN_instance_outer.nonlocals )) -> JFSATRN_find_closureno = JFSATRN_find_closureno;
(( AWUATRN_instance_outer * ) ( YVUATRN_instance_outer.nonlocals )) -> Oldclosure = NL(Oldclosure);
(( AWUATRN_instance_outer * ) ( YVUATRN_instance_outer.nonlocals )) -> Msg = NL(Msg);
(( AWUATRN_instance_outer * ) ( YVUATRN_instance_outer.nonlocals )) -> HURATRN_outerfn_expand = NL(HURATRN_outerfn_expand);
(( AWUATRN_instance_outer * ) ( YVUATRN_instance_outer.nonlocals )) -> UYRATRN_inst_mstable = (&UYRATRN_inst_mstable);
(( AWUATRN_instance_outer * ) ( YVUATRN_instance_outer.nonlocals )) -> GXRATRN_newenv = NL(GXRATRN_newenv);
(( AWUATRN_instance_outer * ) ( YVUATRN_instance_outer.nonlocals )) -> TZRATRN_diag = TZRATRN_diag;
(( AWUATRN_instance_outer * ) ( YVUATRN_instance_outer.nonlocals )) -> DTRATRN_add_outerfn = NL(DTRATRN_add_outerfn);
(( AWUATRN_instance_outer * ) ( YVUATRN_instance_outer.nonlocals )) -> OZRATRN_newclose = OZRATRN_newclose;
(( AWUATRN_instance_outer * ) ( YVUATRN_instance_outer.nonlocals )) -> PGSATRN_fnusage_fnno = PGSATRN_fnusage_fnno;
(( AWUATRN_instance_outer * ) ( YVUATRN_instance_outer.nonlocals )) -> EDRATRN_newclosure = NL(EDRATRN_newclosure);
(( AWUATRN_instance_outer * ) ( YVUATRN_instance_outer.nonlocals )) -> UXRATRN_paramenv = (&UXRATRN_paramenv);
(( AWUATRN_instance_outer * ) ( YVUATRN_instance_outer.nonlocals )) -> AWSATRN_force = (&AWSATRN_force);
(( AWUATRN_instance_outer * ) ( YVUATRN_instance_outer.nonlocals )) -> NLSATRN_add_envfn = NLSATRN_add_envfn;
(( AWUATRN_instance_outer * ) ( YVUATRN_instance_outer.nonlocals )) -> FWRATRN_macpartable = NL(FWRATRN_macpartable);
 /* line 4304: */
A_CLOSURE( ZXUATRN_instance_inner, AYUATRN_instance_inner, BYUATRN_instance_inner );
(( BYUATRN_instance_inner * ) ( ZXUATRN_instance_inner.nonlocals )) -> TZRATRN_diag = TZRATRN_diag;
(( BYUATRN_instance_inner * ) ( ZXUATRN_instance_inner.nonlocals )) -> AASATRN_subs_ampar = AASATRN_subs_ampar;
(( BYUATRN_instance_inner * ) ( ZXUATRN_instance_inner.nonlocals )) -> KASATRN_subs_fmpar = KASATRN_subs_fmpar;
(( BYUATRN_instance_inner * ) ( ZXUATRN_instance_inner.nonlocals )) -> WASATRN_subs_tmpar = WASATRN_subs_tmpar;
(( BYUATRN_instance_inner * ) ( ZXUATRN_instance_inner.nonlocals )) -> LBSATRN_subs_cmpar = LBSATRN_subs_cmpar;
(( BYUATRN_instance_inner * ) ( ZXUATRN_instance_inner.nonlocals )) -> WBSATRN_subs_fnmpar = WBSATRN_subs_fnmpar;
(( BYUATRN_instance_inner * ) ( ZXUATRN_instance_inner.nonlocals )) -> VXRATRN_repldecs = (&VXRATRN_repldecs);
(( BYUATRN_instance_inner * ) ( ZXUATRN_instance_inner.nonlocals )) -> AGSATRN_fndec_fnno = AGSATRN_fndec_fnno;
(( BYUATRN_instance_inner * ) ( ZXUATRN_instance_inner.nonlocals )) -> Oldclosure = NL(Oldclosure);
(( BYUATRN_instance_inner * ) ( ZXUATRN_instance_inner.nonlocals )) -> Msg = NL(Msg);
(( BYUATRN_instance_inner * ) ( ZXUATRN_instance_inner.nonlocals )) -> SRSATRN_merge_envattrs = SRSATRN_merge_envattrs;
(( BYUATRN_instance_inner * ) ( ZXUATRN_instance_inner.nonlocals )) -> GXRATRN_newenv = NL(GXRATRN_newenv);
(( BYUATRN_instance_inner * ) ( ZXUATRN_instance_inner.nonlocals )) -> MPSATRN_merge_envtypes = MPSATRN_merge_envtypes;
(( BYUATRN_instance_inner * ) ( ZXUATRN_instance_inner.nonlocals )) -> GNSATRN_merge_envfns = GNSATRN_merge_envfns;
(( BYUATRN_instance_inner * ) ( ZXUATRN_instance_inner.nonlocals )) -> QXRATRN_fndec_expand = NL(QXRATRN_fndec_expand);
(( BYUATRN_instance_inner * ) ( ZXUATRN_instance_inner.nonlocals )) -> UYRATRN_inst_mstable = (&UYRATRN_inst_mstable);
(( BYUATRN_instance_inner * ) ( ZXUATRN_instance_inner.nonlocals )) -> NLSATRN_add_envfn = NLSATRN_add_envfn;
(( BYUATRN_instance_inner * ) ( ZXUATRN_instance_inner.nonlocals )) -> FWRATRN_macpartable = NL(FWRATRN_macpartable);
(( BYUATRN_instance_inner * ) ( ZXUATRN_instance_inner.nonlocals )) -> BVRATRN_macattrdecls = NL(BVRATRN_macattrdecls);
(( BYUATRN_instance_inner * ) ( ZXUATRN_instance_inner.nonlocals )) -> YXRATRN_newenvfnnos = YXRATRN_newenvfnnos;
(( BYUATRN_instance_inner * ) ( ZXUATRN_instance_inner.nonlocals )) -> LVRATRN_mactypedecls = NL(LVRATRN_mactypedecls);
(( BYUATRN_instance_inner * ) ( ZXUATRN_instance_inner.nonlocals )) -> VVRATRN_macfndecls = NL(VVRATRN_macfndecls);
(( BYUATRN_instance_inner * ) ( ZXUATRN_instance_inner.nonlocals )) -> OZRATRN_newclose = OZRATRN_newclose;
 /* line 4362: */
A_CLOSURE( CAVATRN_instance_no_expand, DAVATRN_instance_no_expand, EAVATRN_instance_no_expand );
(( EAVATRN_instance_no_expand * ) ( CAVATRN_instance_no_expand.nonlocals )) -> YXRATRN_newenvfnnos = YXRATRN_newenvfnnos;
(( EAVATRN_instance_no_expand * ) ( CAVATRN_instance_no_expand.nonlocals )) -> NLSATRN_add_envfn = NLSATRN_add_envfn;
 /* line 4398: */
A_CLOSURE( LBVATRN_instance_expand, MBVATRN_instance_expand, NBVATRN_instance_expand );
(( NBVATRN_instance_expand * ) ( LBVATRN_instance_expand.nonlocals )) -> TXRATRN_oldenv = TXRATRN_oldenv;
(( NBVATRN_instance_expand * ) ( LBVATRN_instance_expand.nonlocals )) -> Info = Info;
(( NBVATRN_instance_expand * ) ( LBVATRN_instance_expand.nonlocals )) -> WBSATRN_subs_fnmpar = WBSATRN_subs_fnmpar;
(( NBVATRN_instance_expand * ) ( LBVATRN_instance_expand.nonlocals )) -> TYRATRN_mptable = (&TYRATRN_mptable);
(( NBVATRN_instance_expand * ) ( LBVATRN_instance_expand.nonlocals )) -> Not_wanted = NL(Not_wanted);
(( NBVATRN_instance_expand * ) ( LBVATRN_instance_expand.nonlocals )) -> ZUUATRN_macparam_sort = ZUUATRN_macparam_sort;
(( NBVATRN_instance_expand * ) ( LBVATRN_instance_expand.nonlocals )) -> YVUATRN_instance_outer = YVUATRN_instance_outer;
(( NBVATRN_instance_expand * ) ( LBVATRN_instance_expand.nonlocals )) -> ZXUATRN_instance_inner = ZXUATRN_instance_inner;
(( NBVATRN_instance_expand * ) ( LBVATRN_instance_expand.nonlocals )) -> CAVATRN_instance_no_expand = CAVATRN_instance_no_expand;
 /* line 4456: */
A_CLOSURE( WCVATRN_mparam_expand, XCVATRN_mparam_expand, YCVATRN_mparam_expand );
(( YCVATRN_mparam_expand * ) ( WCVATRN_mparam_expand.nonlocals )) -> LBVATRN_instance_expand = LBVATRN_instance_expand;
(( YCVATRN_mparam_expand * ) ( WCVATRN_mparam_expand.nonlocals )) -> UYRATRN_inst_mstable = (&UYRATRN_inst_mstable);
(( YCVATRN_mparam_expand * ) ( WCVATRN_mparam_expand.nonlocals )) -> TXRATRN_oldenv = TXRATRN_oldenv;
(( YCVATRN_mparam_expand * ) ( WCVATRN_mparam_expand.nonlocals )) -> Info = Info;
(( YCVATRN_mparam_expand * ) ( WCVATRN_mparam_expand.nonlocals )) -> WYRATRN_joinup = (&WYRATRN_joinup);
 /* line 4485: */
 /* line 4486: */
 /* line 4513: */
 /* line 4514: */
 /* line 4515: */
ZEVATRN = QUTATRN_unit_expand ;
XEVATRN.data[0] = A_UNITE(YEVATRN,mode19,19,ZEVATRN);
 /* line 4516: */
CFVATRN.fn.fn_global = WXSATRN_attrstr_expand;
CFVATRN.nonlocals = A68_NIL;
BFVATRN = CFVATRN ;
XEVATRN.data[1] = A_UNITE(AFVATRN,mode2,2,BFVATRN);
 /* line 4517: */
EFVATRN = SZSATRN_attr_expand ;
XEVATRN.data[2] = A_UNITE(DFVATRN,mode1,1,EFVATRN);
 /* line 4518: */
GFVATRN = OBTATRN_formula_expand ;
XEVATRN.data[3] = A_UNITE(FFVATRN,mode4,4,GFVATRN);
 /* line 4519: */
IFVATRN = DWSATRN_type_expand ;
XEVATRN.data[4] = A_UNITE(HFVATRN,mode10,10,IFVATRN);
 /* line 4520: */
KFVATRN = OLUATRN_seqstep_expand ;
XEVATRN.data[5] = A_UNITE(JFVATRN,mode30,30,KFVATRN);
 /* line 4521: */
MFVATRN = BQUATRN_step_expand ;
XEVATRN.data[6] = A_UNITE(LFVATRN,mode35,35,MFVATRN);
 /* line 4522: */
OFVATRN = HOUATRN_join_expand ;
XEVATRN.data[7] = A_UNITE(NFVATRN,mode33,33,OFVATRN);
 /* line 4523: */
QFVATRN = YNUATRN_let_expand ;
XEVATRN.data[8] = A_UNITE(PFVATRN,mode28,28,QFVATRN);
A_CLOSURE( TFVATRN_anonymous, UFVATRN_anonymous, VFVATRN_anonymous );
(( VFVATRN_anonymous * ) ( TFVATRN_anonymous.nonlocals )) -> ANUATRN_names_nameno = ANUATRN_names_nameno;
 /* line 4524: */
ZFVATRN = TFVATRN_anonymous ;
XEVATRN.data[9] = A_UNITE(YFVATRN,mode27,27,ZFVATRN);
 /* line 4525: */
BGVATRN = ERUATRN_fault_expand ;
XEVATRN.data[10] = A_UNITE(AGVATRN,mode26,26,BGVATRN);
 /* line 4526: */
DGVATRN = OQUATRN_print_expand ;
XEVATRN.data[11] = A_UNITE(CGVATRN,mode25,25,DGVATRN);
 /* line 4527: */
FGVATRN = NSUATRN_fnbody_expand ;
XEVATRN.data[12] = A_UNITE(EGVATRN,mode37,37,FGVATRN);
 /* line 4528: */
IGVATRN.fn.fn_global = BEVATRN_macparams_expand;
IGVATRN.nonlocals = A68_NIL;
HGVATRN = IGVATRN ;
XEVATRN.data[13] = A_UNITE(GGVATRN,mode21,21,HGVATRN);
 /* line 4529: */
KGVATRN = WCVATRN_mparam_expand ;
XEVATRN.data[14] = A_UNITE(JGVATRN,mode20,20,KGVATRN);
A_CLOSURE( NGVATRN_anonymous, OGVATRN_anonymous, PGVATRN_anonymous );
(( PGVATRN_anonymous * ) ( NGVATRN_anonymous.nonlocals )) -> LBVATRN_instance_expand = LBVATRN_instance_expand;
 /* line 4531: */
TGVATRN = NGVATRN_anonymous ;
XEVATRN.data[15] = A_UNITE(SGVATRN,mode22,22,TGVATRN);
VGVATRN = AHTATRN_decl_inner ;
XEVATRN.data[16] = A_UNITE(UGVATRN,mode23,23,VGVATRN);
XGVATRN_newtprocs = THJATRN_make_newtprocs(Tprocs, A_HISVEC(WGVATRN,XEVATRN,17,A68_459 ));
 /* line 4533: */
KKPATRN_setmonitor(Fdec, TZRATRN_diag);
 /* line 4535: */
A_CALLPROC(UDUATRN_macspecs_expand,((*(&(Fdec->Macspecs))), XGVATRN_newtprocs, &YGVATRN),((*(&(Fdec->Macspecs))), XGVATRN_newtprocs, &YGVATRN,(UDUATRN_macspecs_expand).nonlocals));
ZGVATRN_msc = YGVATRN;
 /* line 4536: */
if ( ZGVATRN_msc.C )
{ 
AHVATRN = (&(LZRATRN_newfdec->Macspecs)) ;
(*AHVATRN) = ZGVATRN_msc.M;
} 
 /* line 4537: */
A_CALLPROC(SZSATRN_attr_expand,((*(&(Fdec->Attr))), XGVATRN_newtprocs, &BHVATRN),((*(&(Fdec->Attr))), XGVATRN_newtprocs, &BHVATRN,(SZSATRN_attr_expand).nonlocals));
CHVATRN_ac = BHVATRN;
 /* line 4538: */
DHVATRN = (&(LZRATRN_newfdec->Attr)) ;
(*DHVATRN) = CHVATRN_ac.A;
 /* line 4540: */
RLPATRN_monitorfn((*(&(LZRATRN_newfdec->Macspecs))), OZRATRN_newclose, TZRATRN_diag);
 /* line 4541: */
EHVATRN.Nameno = (-1);
EHVATRN.Joinup = COPATRN_nulljoinup;
EHVATRN.Rest = XYRATRN_joinlist;
FHVATRN = A_HEAP(A68_512 ) ;
(*FHVATRN) = EHVATRN ;
XYRATRN_joinlist = FHVATRN;
 /* line 4543: */
A_CALLPROC(ANUATRN_names_nameno,((*(&(Fdec->Inputs))), XGVATRN_newtprocs, A68_TRUE, &GHVATRN),((*(&(Fdec->Inputs))), XGVATRN_newtprocs, A68_TRUE, &GHVATRN,(ANUATRN_names_nameno).nonlocals));
HHVATRN_ic = GHVATRN;
 /* line 4544: */
A_CALLPROC(ANUATRN_names_nameno,((*(&(Fdec->Outputs))), XGVATRN_newtprocs, A68_FALSE, &IHVATRN),((*(&(Fdec->Outputs))), XGVATRN_newtprocs, A68_FALSE, &IHVATRN,(ANUATRN_names_nameno).nonlocals));
JHVATRN_oc = IHVATRN;
 /* line 4545: */
KHVATRN = (&(LZRATRN_newfdec->Inputs)) ;
(*KHVATRN) = HHVATRN_ic.N;
 /* line 4546: */
LHVATRN = (&(LZRATRN_newfdec->Outputs)) ;
(*LHVATRN) = JHVATRN_oc.N;
 /* line 4547: */
(*Iochange) = IZRATRN_nametypechange;
 /* line 4549: */
MHVATRN = (*(&(XGVATRN_newtprocs->Fnbody))) ;
A_CALLPROC(MHVATRN,((*(&(Fdec->Fnbody))), XGVATRN_newtprocs, &NHVATRN),((*(&(Fdec->Fnbody))), XGVATRN_newtprocs, &NHVATRN,(MHVATRN).nonlocals));
OHVATRN_bodyc = NHVATRN;
 /* line 4550: */
if ( OHVATRN_bodyc.C )
{ 
PHVATRN = (&(LZRATRN_newfdec->Fnbody)) ;
(*PHVATRN) = OHVATRN_bodyc.F;
} 
 /* line 4552: */
A_CALLPROC(LJSATRN_resetscope,((*(&((*(&(TZRATRN_diag->Monitors)))->Depth)))),((*(&((*(&(TZRATRN_diag->Monitors)))->Depth))),(LJSATRN_resetscope).nonlocals));
 /* line 4553: */
SKPATRN_resetmonitor(TZRATRN_diag);
 /* line 4555: */
QHVATRN_nametypes = (&(LZRATRN_newfdec->Nametypes));
 /* line 4556: */
 /* line 4557: */
if ( (KZRATRN_nametypeno<(*QHVATRN_nametypes).upb) )
{ 
 /* line 4558: */
if ( !IZRATRN_nametypechange )
{ 
IZRATRN_nametypechange = A68_TRUE;
 /* line 4559: */
A_CLOSURE( SHVATRN_generator, THVATRN_generator, UHVATRN_generator );
(( UHVATRN_generator * ) ( SHVATRN_generator.nonlocals )) -> KZRATRN_nametypeno = (&KZRATRN_nametypeno);
 /* line 4561: */
A_CALLPROC(SHVATRN_generator,(A68_FALSE, &XHVATRN),(A68_FALSE, &XHVATRN,(SHVATRN_generator).nonlocals));
ZHVATRN = A_VTRIM(YHVATRN,((*QHVATRN_nametypes)),A_VTSCRIPT(&(YHVATRN.upb),((*QHVATRN_nametypes)).upb,1,KZRATRN_nametypeno)) ;
A_VASSIGN2(ZHVATRN,XHVATRN,A68_297 ) ;
(*QHVATRN_nametypes) = XHVATRN;
} 
else
{ 
 /* line 4562: */
 /* line 4563: */
(*QHVATRN_nametypes) = A_VTRIM(AIVATRN,((*QHVATRN_nametypes)),A_VTSCRIPT(&(AIVATRN.upb),((*QHVATRN_nametypes)).upb,1,KZRATRN_nametypeno));
} 
} 
 /* line 4565: */
BIVATRN = JZRATRN_was_macro;
if ( ! BIVATRN )
{BIVATRN = IZRATRN_nametypechange;
}
if ( ! BIVATRN )
{BIVATRN = ZGVATRN_msc.C;
}
 /* line 4566: */
if ( ! BIVATRN )
{BIVATRN = CHVATRN_ac.C;
}
if ( ! BIVATRN )
{BIVATRN = HHVATRN_ic.C;
}
if ( ! BIVATRN )
{BIVATRN = JHVATRN_oc.C;
}
 /* line 4567: */
if ( ! BIVATRN )
{BIVATRN = OHVATRN_bodyc.C;
}
if ( BIVATRN )
{ 
CIVATRN.F = LZRATRN_newfdec;
 /* line 4568: */
CIVATRN.C = A68_TRUE;
DIVATRN = CIVATRN;
} 
else
{ 
EIVATRN.F = Fdec;
 /* line 4569: */
 /* line 4570: */
EIVATRN.C = A68_FALSE;
DIVATRN = EIVATRN;
} 
} 
A_PROC_EXIT(fndec_expand);
*ReturnedValue = (DIVATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  HIVATRN_generator(A68_BOOL  FIVATRN_anonymous, A68_582  *ReturnedValue, void *NonLocals)
#define NL(x) (((IIVATRN_generator *)NonLocals)->x)
{ 
A68_582  JIVATRN;  /* clause result */
A68_582  KIVATRN;  /* OPERATORS - dynamic generator */
{ 
KIVATRN.upb = (*(&(NL(KURATRN_oenv)->Attrs))).upb ;
( FIVATRN_anonymous? A_VLOC(A68_577 *,KIVATRN): A_VHEAP(A68_577 *,KIVATRN) );
JIVATRN = KIVATRN;
} 
*ReturnedValue = (JIVATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  RIVATRN_generator(A68_BOOL  PIVATRN_anonymous, A68_582  *ReturnedValue, void *NonLocals)
#define NL(x) (((SIVATRN_generator *)NonLocals)->x)
{ 
A68_582  TIVATRN;  /* clause result */
A68_582  UIVATRN;  /* OPERATORS - dynamic generator */
{ 
UIVATRN.upb = (*(&(NL(KURATRN_oenv)->Types))).upb ;
( PIVATRN_anonymous? A_VLOC(A68_577 *,UIVATRN): A_VHEAP(A68_577 *,UIVATRN) );
TIVATRN = UIVATRN;
} 
*ReturnedValue = (TIVATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  BJVATRN_generator(A68_BOOL  ZIVATRN_anonymous, A68_582  *ReturnedValue, void *NonLocals)
#define NL(x) (((CJVATRN_generator *)NonLocals)->x)
{ 
A68_582  DJVATRN;  /* clause result */
A68_582  EJVATRN;  /* OPERATORS - dynamic generator */
{ 
EJVATRN.upb = (*(&(NL(KURATRN_oenv)->Fns))).upb ;
( ZIVATRN_anonymous? A_VLOC(A68_577 *,EJVATRN): A_VHEAP(A68_577 *,EJVATRN) );
DJVATRN = EJVATRN;
} 
*ReturnedValue = (DJVATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  BKVATRN_generator(A68_BOOL  ZJVATRN_anonymous, A68_306  *ReturnedValue, void *NonLocals)
#define NL(x) (((CKVATRN_generator *)NonLocals)->x)
{ 
A68_306  DKVATRN;  /* clause result */
A68_306  EKVATRN;  /* OPERATORS - dynamic generator */
{ 
EKVATRN.upb = (*NL(VJVATRN_fns)).upb ;
( ZJVATRN_anonymous? A_VLOC(A68_298 *,EKVATRN): A_VHEAP(A68_298 *,EKVATRN) );
DKVATRN = EKVATRN;
} 
*ReturnedValue = (DKVATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  WKVATRN_generator(A68_BOOL  UKVATRN_anonymous, A68_302  *ReturnedValue, void *NonLocals)
#define NL(x) (((XKVATRN_generator *)NonLocals)->x)
{ 
A68_302  YKVATRN;  /* clause result */
A68_302  ZKVATRN;  /* OPERATORS - dynamic generator */
{ 
ZKVATRN.upb = (*NL(TWRATRN_envattrno)) ;
( UKVATRN_anonymous? A_VLOC(A68_181 *,ZKVATRN): A_VHEAP(A68_181 *,ZKVATRN) );
YKVATRN = ZKVATRN;
} 
*ReturnedValue = (YKVATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  GLVATRN_generator(A68_BOOL  ELVATRN_anonymous, A68_304  *ReturnedValue, void *NonLocals)
#define NL(x) (((HLVATRN_generator *)NonLocals)->x)
{ 
A68_304  ILVATRN;  /* clause result */
A68_304  JLVATRN;  /* OPERATORS - dynamic generator */
{ 
JLVATRN.upb = (*NL(CXRATRN_envtypeno)) ;
( ELVATRN_anonymous? A_VLOC(A68_215 *,JLVATRN): A_VHEAP(A68_215 *,JLVATRN) );
ILVATRN = JLVATRN;
} 
*ReturnedValue = (ILVATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  QLVATRN_generator(A68_BOOL  OLVATRN_anonymous, A68_306  *ReturnedValue, void *NonLocals)
#define NL(x) (((RLVATRN_generator *)NonLocals)->x)
{ 
A68_306  SLVATRN;  /* clause result */
A68_306  TLVATRN;  /* OPERATORS - dynamic generator */
{ 
TLVATRN.upb = (*NL(FXRATRN_envfnno)) ;
( OLVATRN_anonymous? A_VLOC(A68_298 *,TLVATRN): A_VHEAP(A68_298 *,TLVATRN) );
SLVATRN = TLVATRN;
} 
*ReturnedValue = (SLVATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  TMVATRN_generator(A68_BOOL  RMVATRN_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((UMVATRN_generator *)NonLocals)->x)
{ 
A68_32  VMVATRN;  /* clause result */
A68_32  WMVATRN;  /* OPERATORS - dynamic generator */
{ 
WMVATRN.upb = (*(&(NL(O).Environ->Ints))).upb ;
( RMVATRN_anonymous? A_VLOC(A68_INT ,WMVATRN): A_VHEAP(A68_INT ,WMVATRN) );
VMVATRN = WMVATRN;
} 
*ReturnedValue = (VMVATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ENVATRN_attr_outer(A68_175  Attr, A68_414 * Tprocs, A68_372  *ReturnedValue, void *NonLocals)
#define NL(x) (((FNVATRN_attr_outer *)NonLocals)->x)
{ 
A68_175  GNVATRN;  /* united object - for case conformity */
A68_176 * HNVATRN_an;
A68_INT  INVATRN;  /* YIELD */
A68_181 * JNVATRN_adec;
A68_417  KNVATRN;  /* CALL */
A68_374  LNVATRN;  /* avoid structure result */
A68_374  MNVATRN_adecc;
A68_637  ONVATRN_generator;   /* proc value of non-global proc */
A68_302  TNVATRN;  /* avoid structure result */
A68_INT  UNVATRN;  /* YIELD */
A68_181 ** VNVATRN;  /* YIELD */
A68_372  WNVATRN;  /* collateral clause result */
A68_372  XNVATRN;  /* clause result */
A68_179 * YNVATRN_ab;
A68_415  ZNVATRN;  /* CALL */
A68_372  AOVATRN;  /* avoid structure result */
A68_372  BOVATRN_ac;
A68_372  COVATRN;  /* collateral clause result */
A68_415  DOVATRN;  /* CALL */
A68_372  EOVATRN;  /* avoid structure result */
A_PROC_ENTRY(attr_outer);
 /* line 4668: */
 /* line 4669: */
GNVATRN = Attr ;
switch ( GNVATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
HNVATRN_an = (GNVATRN.data.mode1);
 /* line 4670: */
{ 
INVATRN = (*(&(HNVATRN_an->Attrno))) ;
JNVATRN_adec = (*(&A_VINDEX((*NL(PMVATRN_attrs)),INVATRN)));
 /* line 4671: */
KNVATRN = (*(&(Tprocs->Attrdec))) ;
A_CALLPROC(KNVATRN,(JNVATRN_adec, Tprocs, &LNVATRN),(JNVATRN_adec, Tprocs, &LNVATRN,(KNVATRN).nonlocals));
MNVATRN_adecc = LNVATRN;
 /* line 4672: */
 /* line 4673: */
if ( MNVATRN_adecc.C )
{ 
 /* line 4674: */
if ( (*NL(NMVATRN_ac)) )
{ 
 /* line 4675: */
(*JNVATRN_adec) = (*MNVATRN_adecc.A);
} 
else
{ 
(*NL(NMVATRN_ac)) = A68_TRUE;
 /* line 4676: */
A_CLOSURE( ONVATRN_generator, PNVATRN_generator, QNVATRN_generator );
(( QNVATRN_generator * ) ( ONVATRN_generator.nonlocals )) -> PMVATRN_attrs = NL(PMVATRN_attrs);
A_CALLPROC(ONVATRN_generator,(A68_FALSE, &TNVATRN),(A68_FALSE, &TNVATRN,(ONVATRN_generator).nonlocals));
A_VASSIGN2((*NL(PMVATRN_attrs)),TNVATRN,A68_181 *) ;
(*NL(PMVATRN_attrs)) = TNVATRN;
 /* line 4677: */
 /* line 4678: */
 /* line 4679: */
UNVATRN = (*(&(HNVATRN_an->Attrno))) ;
VNVATRN = (&A_VINDEX((*NL(PMVATRN_attrs)),UNVATRN)) ;
(*VNVATRN) = MNVATRN_adecc.A;
} 
} 
 /* line 4680: */
WNVATRN.A = Attr;
 /* line 4681: */
 /* line 4682: */
WNVATRN.C = A68_FALSE;
XNVATRN = WNVATRN;
} 
break;
case 4: /* REF STRUCT(MODE175)  */
YNVATRN_ab = (GNVATRN.data.mode4);
{ 
ZNVATRN = (*(&(Tprocs->Attr))) ;
A_CALLPROC(ZNVATRN,((*(&(YNVATRN_ab->Attr))), Tprocs, &AOVATRN),((*(&(YNVATRN_ab->Attr))), Tprocs, &AOVATRN,(ZNVATRN).nonlocals));
BOVATRN_ac = AOVATRN;
 /* line 4683: */
COVATRN.A = BOVATRN_ac.A;
 /* line 4684: */
 /* line 4685: */
COVATRN.C = A68_TRUE;
XNVATRN = COVATRN;
} 
break;
default: 
 /* line 4686: */
DOVATRN = (*(&(AWLATRN_nulltprocs->Attr))) ;
A_CALLPROC(DOVATRN,(Attr, Tprocs, &EOVATRN),(Attr, Tprocs, &EOVATRN,(DOVATRN).nonlocals));
XNVATRN = EOVATRN;
break;
} 
A_PROC_EXIT(attr_outer);
*ReturnedValue = (XNVATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  IOVATRN_formula_outer(A68_184  Formula, A68_414 * Tprocs, A68_375  *ReturnedValue, void *NonLocals)
#define NL(x) (((JOVATRN_formula_outer *)NonLocals)->x)
{ 
A68_184  KOVATRN;  /* united object - for case conformity */
A68_188 * LOVATRN_fn;
A68_375  MOVATRN;  /* clause result */
A68_465  NOVATRN;  /* procedure value */
A68_375  OOVATRN;  /* avoid structure result */
A68_186 * POVATRN_fck;
A68_375  QOVATRN;  /* avoid structure result */
A68_189 * ROVATRN_fd;
A68_375  SOVATRN;  /* avoid structure result */
A68_190 * TOVATRN_fm;
A68_375  UOVATRN;  /* avoid structure result */
A68_191 * VOVATRN_fc;
A68_375  WOVATRN;  /* avoid structure result */
A68_192 * XOVATRN_fb;
A68_418  YOVATRN;  /* CALL */
A68_375  ZOVATRN;  /* avoid structure result */
A68_375  APVATRN_fc;
A68_375  BPVATRN;  /* collateral clause result */
A68_418  CPVATRN;  /* CALL */
A68_375  DPVATRN;  /* avoid structure result */
A_PROC_ENTRY(formula_outer);
 /* line 4689: */
 /* line 4690: */
KOVATRN = Formula ;
switch ( KOVATRN.mode )
{ 
case 4: /* REF STRUCT(INT)  */
LOVATRN_fn = (KOVATRN.data.mode4);
 /* line 4691: */
NOVATRN.fn.fn_global = BTOATRN_nilfmpar;
NOVATRN.nonlocals = A68_NIL;
A_CALLPROC(NL(MERATRN_fname_evaluate),((*LOVATRN_fn), Tprocs, NL(LMVATRN_close), NL(XMVATRN_repldecs), NOVATRN, &OOVATRN),((*LOVATRN_fn), Tprocs, NL(LMVATRN_close), NL(XMVATRN_repldecs), NOVATRN, &OOVATRN,(NL(MERATRN_fname_evaluate)).nonlocals));
MOVATRN = OOVATRN;
break;
case 2: /* REF STRUCT(INT,MODE184,MODE184)  */
POVATRN_fck = (KOVATRN.data.mode2);
 /* line 4692: */
UTQATRN_fcheck_evaluate( POVATRN_fck, Tprocs, NL(LMVATRN_close), NL(EMVATRN_outerdiag), &QOVATRN );
MOVATRN = QOVATRN;
break;
case 5: /* REF STRUCT(MODE184,INT,MODE184)  */
ROVATRN_fd = (KOVATRN.data.mode5);
 /* line 4693: */
YOQATRN_fdop_simplify( ROVATRN_fd, Tprocs, NL(LMVATRN_close), NL(EMVATRN_outerdiag), &SOVATRN );
MOVATRN = SOVATRN;
break;
case 6: /* REF STRUCT(INT,MODE184)  */
TOVATRN_fm = (KOVATRN.data.mode6);
 /* line 4694: */
WNQATRN_fmop_simplify( TOVATRN_fm, Tprocs, NL(LMVATRN_close), NL(EMVATRN_outerdiag), &UOVATRN );
MOVATRN = UOVATRN;
break;
case 7: /* REF STRUCT(MODE184,MODE184,MODE184)  */
VOVATRN_fc = (KOVATRN.data.mode7);
 /* line 4695: */
EQQATRN_fcond_simplify( VOVATRN_fc, Tprocs, &WOVATRN );
MOVATRN = WOVATRN;
break;
case 8: /* REF STRUCT(MODE184)  */
XOVATRN_fb = (KOVATRN.data.mode8);
 /* line 4696: */
{ 
YOVATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(YOVATRN,((*(&(XOVATRN_fb->Formula))), Tprocs, &ZOVATRN),((*(&(XOVATRN_fb->Formula))), Tprocs, &ZOVATRN,(YOVATRN).nonlocals));
APVATRN_fc = ZOVATRN;
 /* line 4697: */
BPVATRN.F = APVATRN_fc.F;
 /* line 4698: */
 /* line 4701: */
BPVATRN.C = A68_TRUE;
MOVATRN = BPVATRN;
} 
break;
default: 
 /* line 4702: */
CPVATRN = (*(&(AWLATRN_nulltprocs->Formula))) ;
A_CALLPROC(CPVATRN,(Formula, Tprocs, &DPVATRN),(Formula, Tprocs, &DPVATRN,(CPVATRN).nonlocals));
MOVATRN = DPVATRN;
break;
} 
A_PROC_EXIT(formula_outer);
*ReturnedValue = (MOVATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  HPVATRN_type_outer(A68_200  Type, A68_414 * Tprocs, A68_381  *ReturnedValue, void *NonLocals)
#define NL(x) (((IPVATRN_type_outer *)NonLocals)->x)
{ 
A68_200  JPVATRN;  /* united object - for case conformity */
A68_201 * KPVATRN_tn;
A68_INT  LPVATRN;  /* YIELD */
A68_215 * MPVATRN_tdec;
A68_428  NPVATRN;  /* CALL */
A68_385  OPVATRN;  /* avoid structure result */
A68_385  PPVATRN_tdecc;
A68_635  RPVATRN_generator;   /* proc value of non-global proc */
A68_304  WPVATRN;  /* avoid structure result */
A68_INT  XPVATRN;  /* YIELD */
A68_215 ** YPVATRN;  /* YIELD */
A68_381  ZPVATRN;  /* collateral clause result */
A68_381  AQVATRN;  /* clause result */
A68_205 * BQVATRN_tb;
A68_424  CQVATRN;  /* CALL */
A68_381  DQVATRN;  /* avoid structure result */
A68_381  EQVATRN_tc;
A68_381  FQVATRN;  /* collateral clause result */
A68_424  GQVATRN;  /* CALL */
A68_381  HQVATRN;  /* avoid structure result */
A_PROC_ENTRY(type_outer);
 /* line 4706: */
 /* line 4707: */
JPVATRN = Type ;
switch ( JPVATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
KPVATRN_tn = (JPVATRN.data.mode1);
 /* line 4708: */
{ 
LPVATRN = (*(&(KPVATRN_tn->Typeno))) ;
MPVATRN_tdec = (*(&A_VINDEX((*NL(QMVATRN_types)),LPVATRN)));
 /* line 4709: */
NPVATRN = (*(&(Tprocs->Typedec))) ;
A_CALLPROC(NPVATRN,(MPVATRN_tdec, Tprocs, &OPVATRN),(MPVATRN_tdec, Tprocs, &OPVATRN,(NPVATRN).nonlocals));
PPVATRN_tdecc = OPVATRN;
 /* line 4710: */
 /* line 4711: */
if ( PPVATRN_tdecc.C )
{ 
 /* line 4712: */
if ( (*NL(OMVATRN_tc)) )
{ 
 /* line 4713: */
(*MPVATRN_tdec) = (*PPVATRN_tdecc.T);
} 
else
{ 
(*NL(OMVATRN_tc)) = A68_TRUE;
 /* line 4714: */
A_CLOSURE( RPVATRN_generator, SPVATRN_generator, TPVATRN_generator );
(( TPVATRN_generator * ) ( RPVATRN_generator.nonlocals )) -> QMVATRN_types = NL(QMVATRN_types);
A_CALLPROC(RPVATRN_generator,(A68_FALSE, &WPVATRN),(A68_FALSE, &WPVATRN,(RPVATRN_generator).nonlocals));
A_VASSIGN2((*NL(QMVATRN_types)),WPVATRN,A68_215 *) ;
(*NL(QMVATRN_types)) = WPVATRN;
 /* line 4715: */
 /* line 4716: */
 /* line 4717: */
XPVATRN = (*(&(KPVATRN_tn->Typeno))) ;
YPVATRN = (&A_VINDEX((*NL(QMVATRN_types)),XPVATRN)) ;
(*YPVATRN) = PPVATRN_tdecc.T;
} 
} 
 /* line 4718: */
ZPVATRN.T = Type;
 /* line 4719: */
 /* line 4720: */
ZPVATRN.C = A68_FALSE;
AQVATRN = ZPVATRN;
} 
break;
case 5: /* REF STRUCT(MODE200)  */
BQVATRN_tb = (JPVATRN.data.mode5);
{ 
CQVATRN = (*(&(Tprocs->Type))) ;
A_CALLPROC(CQVATRN,((*(&(BQVATRN_tb->Type))), Tprocs, &DQVATRN),((*(&(BQVATRN_tb->Type))), Tprocs, &DQVATRN,(CQVATRN).nonlocals));
EQVATRN_tc = DQVATRN;
 /* line 4721: */
FQVATRN.T = EQVATRN_tc.T;
 /* line 4722: */
 /* line 4723: */
FQVATRN.C = A68_TRUE;
AQVATRN = FQVATRN;
} 
break;
default: 
 /* line 4724: */
GQVATRN = (*(&(AWLATRN_nulltprocs->Type))) ;
A_CALLPROC(GQVATRN,(Type, Tprocs, &HQVATRN),(Type, Tprocs, &HQVATRN,(GQVATRN).nonlocals));
AQVATRN = HQVATRN;
break;
} 
A_PROC_EXIT(type_outer);
*ReturnedValue = (AQVATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  LQVATRN_const_outer(A68_222  Const, A68_414 * Tprocs, A68_390  *ReturnedValue, void *NonLocals)
#define NL(x) (((MQVATRN_const_outer *)NonLocals)->x)
{ 
A68_510 * NQVATRN_j;
A68_222  OQVATRN;  /* united object - for case conformity */
A68_216 * PQVATRN_cn;
A68_305  QQVATRN;  /* OPERATORS - simple index */
A68_INT  RQVATRN;  /* YIELD */
A68_221 * SQVATRN_cdec;
A68_390  VQVATRN;  /* clause result */
A68_390  WQVATRN;  /* OPERATORS - skip to mode */
A68_307  XQVATRN;  /* avoid structure result */
A68_307  YQVATRN_oc;
A68_433  ZQVATRN;  /* CALL */
A68_305  ARVATRN;  /* OPERATORS - simple index */
A68_INT  BRVATRN;  /* YIELD */
A68_390  CRVATRN;  /* avoid structure result */
A68_390  DRVATRN_coc;
A68_390  ERVATRN;  /* collateral clause result */
A68_248 * FRVATRN_cb;
A68_433  GRVATRN;  /* CALL */
A68_390  HRVATRN;  /* avoid structure result */
A68_390  IRVATRN_cc;
A68_390  JRVATRN;  /* collateral clause result */
A68_243 * KRVATRN_ur;
A68_390  LRVATRN;  /* avoid structure result */
A68_242 * MRVATRN_uc;
A68_390  NRVATRN;  /* avoid structure result */
A68_238 * ORVATRN_un;
A68_390  PRVATRN;  /* avoid structure result */
A68_232 * QRVATRN_ui;
A68_390  RRVATRN;  /* avoid structure result */
A68_233 * SRVATRN_ut;
A68_390  TRVATRN;  /* avoid structure result */
A68_433  URVATRN;  /* CALL */
A68_390  VRVATRN;  /* avoid structure result */
A_PROC_ENTRY(const_outer);
 /* line 4727: */
 /* line 4728: */
{ 
NQVATRN_j = COPATRN_nulljoinup;
 /* line 4729: */
 /* line 4730: */
OQVATRN = Const ;
switch ( OQVATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
PQVATRN_cn = (OQVATRN.data.mode1);
 /* line 4731: */
{ 
QQVATRN = (*(&(NL(LMVATRN_close).Env->Consts))) ;
RQVATRN = (*(&(PQVATRN_cn->Constno))) ;
SQVATRN_cdec = (*(&A_VINDEX(QQVATRN,RQVATRN)));
 /* line 4732: */
 /* line 4733: */
if ( ((*(&(SQVATRN_cdec->Sort)))!=OKAATRN_outerdec) )
{ 
NKDAOST_sysfault(UQVATRN);
 /* line 4734: */
 /* line 4735: */
VQVATRN = WQVATRN;
} 
else
{ 
ZDRATRN_find_int_const( (*(&((*(&(SQVATRN_cdec->Usage)))->Closureno))), (*NL(WDRATRN_ints_consts)), &XQVATRN );
YQVATRN_oc = XQVATRN;
 /* line 4736: */
 /* line 4737: */
ZQVATRN = (*(&(Tprocs->Unit))) ;
ARVATRN = (*(&(YQVATRN_oc.Environ->Consts))) ;
BRVATRN = 1 ;
A_CALLPROC(ZQVATRN,((*(&((*(&A_VINDEX(ARVATRN,BRVATRN)))->Value))), Tprocs, &CRVATRN),((*(&((*(&A_VINDEX(ARVATRN,BRVATRN)))->Value))), Tprocs, &CRVATRN,(ZQVATRN).nonlocals));
DRVATRN_coc = CRVATRN;
 /* line 4738: */
ERVATRN.U = DRVATRN_coc.U;
 /* line 4739: */
 /* line 4740: */
 /* line 4741: */
ERVATRN.C = A68_TRUE;
VQVATRN = ERVATRN;
} 
} 
break;
case 32: /* REF STRUCT(MODE222)  */
FRVATRN_cb = (OQVATRN.data.mode32);
{ 
GRVATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(GRVATRN,((*(&(FRVATRN_cb->Unit))), Tprocs, &HRVATRN),((*(&(FRVATRN_cb->Unit))), Tprocs, &HRVATRN,(GRVATRN).nonlocals));
IRVATRN_cc = HRVATRN;
 /* line 4742: */
JRVATRN.U = IRVATRN_cc.U;
 /* line 4743: */
 /* line 4744: */
JRVATRN.C = A68_TRUE;
VQVATRN = JRVATRN;
} 
break;
case 27: /* REF STRUCT(MODE184,MODE222)  */
KRVATRN_ur = (OQVATRN.data.mode27);
 /* line 4745: */
WFRATRN_urepl_expand( KRVATRN_ur, Tprocs, NL(LMVATRN_close).Env, NL(XMVATRN_repldecs), (&NQVATRN_j), &LRVATRN );
VQVATRN = LRVATRN;
break;
case 26: /* REF STRUCT(MODE184,MODE222,MODE222)  */
MRVATRN_uc = (OQVATRN.data.mode26);
 /* line 4746: */
JHRATRN_ucond_expand( MRVATRN_uc, Tprocs, &NRVATRN );
VQVATRN = NRVATRN;
break;
case 22: /* REF STRUCT(BOOL,INT,MODE222,MODE222)  */
ORVATRN_un = (OQVATRN.data.mode22);
 /* line 4747: */
A_CALLPROC(NL(ESRATRN_uconc_expand),(ORVATRN_un, Tprocs, NL(LMVATRN_close), NL(EMVATRN_outerdiag), (&NQVATRN_j), &PRVATRN),(ORVATRN_un, Tprocs, NL(LMVATRN_close), NL(EMVATRN_outerdiag), (&NQVATRN_j), &PRVATRN,(NL(ESRATRN_uconc_expand)).nonlocals));
VQVATRN = PRVATRN;
break;
case 16: /* REF STRUCT(MODE222,MODE184)  */
QRVATRN_ui = (OQVATRN.data.mode16);
 /* line 4748: */
A_CALLPROC(NL(KKRATRN_uindex_expand),(QRVATRN_ui, Tprocs, NL(LMVATRN_close), (&NQVATRN_j), &RRVATRN),(QRVATRN_ui, Tprocs, NL(LMVATRN_close), (&NQVATRN_j), &RRVATRN,(NL(KKRATRN_uindex_expand)).nonlocals));
VQVATRN = RRVATRN;
break;
case 17: /* REF STRUCT(MODE222,MODE199)  */
SRVATRN_ut = (OQVATRN.data.mode17);
 /* line 4749: */
A_CALLPROC(NL(RLRATRN_utrim_expand),(SRVATRN_ut, Tprocs, NL(LMVATRN_close), (&NQVATRN_j), &TRVATRN),(SRVATRN_ut, Tprocs, NL(LMVATRN_close), (&NQVATRN_j), &TRVATRN,(NL(RLRATRN_utrim_expand)).nonlocals));
VQVATRN = TRVATRN;
break;
default: 
 /* line 4750: */
 /* line 4751: */
URVATRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(URVATRN,(Const, Tprocs, &VRVATRN),(Const, Tprocs, &VRVATRN,(URVATRN).nonlocals));
VQVATRN = VRVATRN;
break;
} 
} 
A_PROC_EXIT(const_outer);
*ReturnedValue = (VQVATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  WAPATRN_print_brackettype(A68_200  Ty, A68_472  Close)
{ 
A68_200  XAPATRN;  /* united object - for case conformity */
A68_BOOL  YAPATRN;  /* clause result */
A68_BOOL  ZAPATRN_is_tfn;
A_PROC_ENTRY(print_brackettype);
 /* line 322: */
{ 
XAPATRN = Ty ;
switch ( XAPATRN.mode )
{ 
case 4: /* REF STRUCT(MODE200,MODE200)  */
YAPATRN = A68_TRUE;
break;
default: 
YAPATRN = A68_FALSE;
break;
} 
ZAPATRN_is_tfn = YAPATRN;
 /* line 323: */
if ( ZAPATRN_is_tfn )
{ 
HWOATRN_print_char('(');
} 
 /* line 324: */
SAPATRN_print_type(Ty, Close);
 /* line 325: */
if ( ZAPATRN_is_tfn )
{ 
 /* line 326: */
HWOATRN_print_char(')');
} 
} 
A_PROC_EXIT(print_brackettype);
return;
} 
#undef NL

A_STATIC A68_VOID  ULPATRN_generator(A68_BOOL  SLPATRN_anonymous, A68_264  *ReturnedValue, void *NonLocals)
#define NL(x) (((VLPATRN_generator *)NonLocals)->x)
{ 
A68_264  WLPATRN;  /* clause result */
A68_264  XLPATRN;  /* OPERATORS - dynamic generator */
{ 
XLPATRN.upb = NL(Specs).upb ;
( SLPATRN_anonymous? A_VLOC(A68_265 ,XLPATRN): A_VHEAP(A68_265 ,XLPATRN) );
WLPATRN = XLPATRN;
} 
*ReturnedValue = (WLPATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  DPPATRN_coerce(A68_508  Jr, A68_507  *ReturnedValue, void *NonLocals)
#define NL(x) (((EPPATRN_coerce *)NonLocals)->x)
{ 
A68_516  GPPATRN_generator;   /* proc value of non-global proc */
A68_509  LPPATRN;  /* avoid structure result */
A68_509  MPPATRN_sinkrow;
A68_509  NPPATRN;  /* avoid structure result */
A68_509  OPPATRN_sourcerow;
A68_510 ** PPPATRN_so;
A68_510 ** QPPATRN_si;
A68_510 ** RPPATRN_r;
A68_509  SPPATRN;  /* forall yield */
A68_INT  TPPATRN;  /* forall loop counter */
A68_510  UPPATRN;  /* united object - for case conformity */
A68_507  VPPATRN_ji;
A68_507  WPPATRN;  /* clause result */
A68_508  XPPATRN_rj;
A68_507  YPPATRN;  /* avoid structure result */
A68_507  ZPPATRN_jio;
A68_507  AQPATRN;  /* collateral clause result */
A68_507  BQPATRN;  /* clause result */
A_PROC_ENTRY(coerce);
 /* line 715: */
{ 
A_CLOSURE( GPPATRN_generator, HPPATRN_generator, IPPATRN_generator );
(( IPPATRN_generator * ) ( GPPATRN_generator.nonlocals )) -> Jr = Jr;
A_CALLPROC(GPPATRN_generator,(A68_FALSE, &LPPATRN),(A68_FALSE, &LPPATRN,(GPPATRN_generator).nonlocals));
MPPATRN_sinkrow = LPPATRN;
A_CALLPROC(GPPATRN_generator,(A68_FALSE, &NPPATRN),(A68_FALSE, &NPPATRN,(GPPATRN_generator).nonlocals));
OPPATRN_sourcerow = NPPATRN;
 /* line 716: */
 /* line 717: */
SPPATRN = Jr.Row ;
TPPATRN = OPPATRN_sourcerow.upb -1;
if ( TPPATRN != MPPATRN_sinkrow.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
if ( TPPATRN != SPPATRN.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 3"); }
PPPATRN_so = OPPATRN_sourcerow.data;
QPPATRN_si = MPPATRN_sinkrow.data;
RPPATRN_r = SPPATRN.data;
for (;TPPATRN-- >= 0;
(PPPATRN_so++
,QPPATRN_si++
,RPPATRN_r++
) )
{
 /* line 718: */
 /* line 719: */
UPPATRN = (**RPPATRN_r) ;
switch ( UPPATRN.mode )
{ 
case 3: /* STRUCT(REF MODE510,REF MODE510)  */
VPPATRN_ji = (UPPATRN.data.mode3);
 /* line 720: */
WPPATRN = VPPATRN_ji;
break;
case 2: /* STRUCT(REF MODE509)  */
XPPATRN_rj = (UPPATRN.data.mode2);
 /* line 721: */
A_CALLPROC(NL(CPPATRN_coerce),(XPPATRN_rj, &YPPATRN),(XPPATRN_rj, &YPPATRN,(NL(CPPATRN_coerce)).nonlocals));
WPPATRN = YPPATRN;
break;
default: 
if ( NL(Source) )
{ 
WPPATRN.Sink = COPATRN_nulljoinup;
WPPATRN.Source = (*RPPATRN_r);
} 
else
{ 
WPPATRN.Sink = (*RPPATRN_r);
 /* line 722: */
WPPATRN.Source = COPATRN_nulljoinup;
} 
break;
} 
ZPPATRN_jio = WPPATRN;
 /* line 723: */
(*QPPATRN_si) = ZPPATRN_jio.Sink;
 /* line 724: */
(*PPPATRN_so) = ZPPATRN_jio.Source;
}
 /* line 725: */
AQPATRN.Sink = FOPATRN_makejoinrow(MPPATRN_sinkrow);
 /* line 726: */
AQPATRN.Source = FOPATRN_makejoinrow(OPPATRN_sourcerow);
BQPATRN = AQPATRN;
} 
A_PROC_EXIT(coerce);
*ReturnedValue = (BQPATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  KRPATRN_generator(A68_BOOL  IRPATRN_anonymous, A68_509  *ReturnedValue, void *NonLocals)
#define NL(x) (((LRPATRN_generator *)NonLocals)->x)
{ 
A68_509  MRPATRN;  /* clause result */
A68_509  NRPATRN;  /* OPERATORS - dynamic generator */
{ 
NRPATRN.upb = NL(GRPATRN_rowsize) ;
( IRPATRN_anonymous? A_VLOC(A68_510 *,NRPATRN): A_VHEAP(A68_510 *,NRPATRN) );
MRPATRN = NRPATRN;
} 
*ReturnedValue = (MRPATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  YRPATRN_generator(A68_BOOL  WRPATRN_anonymous, A68_509  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZRPATRN_generator *)NonLocals)->x)
{ 
A68_509  ASPATRN;  /* clause result */
A68_509  BSPATRN;  /* OPERATORS - dynamic generator */
{ 
BSPATRN.upb = NL(VRPATRN_size) ;
( WRPATRN_anonymous? A_VLOC(A68_510 *,BSPATRN): A_VHEAP(A68_510 *,BSPATRN) );
ASPATRN = BSPATRN;
} 
*ReturnedValue = (ASPATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  DUPATRN_generator(A68_BOOL  BUPATRN_anonymous, A68_509  *ReturnedValue, void *NonLocals)
#define NL(x) (((EUPATRN_generator *)NonLocals)->x)
{ 
A68_509  FUPATRN;  /* clause result */
A68_509  GUPATRN;  /* OPERATORS - dynamic generator */
{ 
GUPATRN.upb = (NL(STPATRN_lsize)+NL(ZTPATRN_rsize)) ;
( BUPATRN_anonymous? A_VLOC(A68_510 *,GUPATRN): A_VHEAP(A68_510 *,GUPATRN) );
FUPATRN = GUPATRN;
} 
*ReturnedValue = (FUPATRN);
return;
} 
#undef NL

A_STATIC A68_BOOL  AWPATRN_mark_off(A68_510 * J, A68_472  Close, A68_471 * Diag, void *NonLocals)
#define NL(x) (((BWPATRN_mark_off *)NonLocals)->x)
{ 
A68_510  CWPATRN;  /* united object - for case conformity */
A68_227  DWPATRN_jd;
A68_173  EWPATRN;  /* collateral clause result */
A68_INT  FWPATRN;  /* YIELD */
A68_173 * GWPATRN;  /* YIELD */
A68_BOOL  HWPATRN;  /* clause result */
A68_227  IWPATRN;  /* collateral clause result */
A68_227  JWPATRN_jed;
A68_510  KWPATRN;  /* OPERATORS - mode -> union mode */
A68_508  LWPATRN_jr;
A68_BOOL  MWPATRN_ok;
A68_510 ** NWPATRN_r;
A68_509  OWPATRN;  /* forall yield */
A68_INT  PWPATRN;  /* forall loop counter */
A68_507  QWPATRN_jio;
A_PROC_ENTRY(mark_off);
 /* line 882: */
 /* line 883: */
CWPATRN = (*J) ;
switch ( CWPATRN.mode )
{ 
case 1: /* STRUCT(INT,INT)  */
DWPATRN_jd = (CWPATRN.data.mode1);
 /* line 884: */
 /* line 885: */
if ( (DWPATRN_jd.Sort==WNPATRN_joined) )
{ 
FWPATRN = DWPATRN_jd.Nameno ;
EWPATRN.Id = (*(&((&A_VINDEX(NL(UVPATRN_nt),FWPATRN))->Name)));
EWPATRN.Rest = (*NL(VVPATRN_names));
GWPATRN = A_HEAP(A68_173 ) ;
(*GWPATRN) = EWPATRN ;
(*NL(VVPATRN_names)) = GWPATRN;
 /* line 886: */
HWPATRN = A68_FALSE;
} 
else
{ 
 /* line 887: */
if ( (DWPATRN_jd.Sort==XNPATRN_notjoined) )
{ 
IWPATRN.Sort = WNPATRN_joined;
IWPATRN.Nameno = DWPATRN_jd.Nameno;
JWPATRN_jed = IWPATRN;
(*J) = A_UNITE(KWPATRN,mode1,1,JWPATRN_jed);
 /* line 888: */
HWPATRN = A68_TRUE;
} 
else
{ 
 /* line 889: */
 /* line 890: */
HWPATRN = A68_TRUE;
} 
} 
break;
case 2: /* STRUCT(REF MODE509)  */
LWPATRN_jr = (CWPATRN.data.mode2);
 /* line 891: */
{ 
MWPATRN_ok = A68_TRUE;
 /* line 892: */
 /* line 893: */
OWPATRN = LWPATRN_jr.Row ;
PWPATRN = OWPATRN.upb -1;
NWPATRN_r = OWPATRN.data;
for (;PWPATRN-- >= 0;
(NWPATRN_r++
) )
{
if ( !A_CALLPROC(NL(ZVPATRN_mark_off),((*NWPATRN_r), Close, Diag),((*NWPATRN_r), Close, Diag,(NL(ZVPATRN_mark_off)).nonlocals)) )
{ 
MWPATRN_ok = A68_FALSE;
} 
}
 /* line 894: */
 /* line 895: */
 /* line 896: */
HWPATRN = MWPATRN_ok;
} 
break;
case 3: /* STRUCT(REF MODE510,REF MODE510)  */
QWPATRN_jio = (CWPATRN.data.mode3);
 /* line 897: */
 /* line 898: */
 /* line 899: */
 /* line 900: */
HWPATRN = (A_CALLPROC(NL(ZVPATRN_mark_off),(QWPATRN_jio.Source, Close, Diag),(QWPATRN_jio.Source, Close, Diag,(NL(ZVPATRN_mark_off)).nonlocals))&A_CALLPROC(NL(ZVPATRN_mark_off),(QWPATRN_jio.Sink, Close, Diag),(QWPATRN_jio.Sink, Close, Diag,(NL(ZVPATRN_mark_off)).nonlocals)));
break;
default: 
 /* line 901: */
HWPATRN = A68_TRUE;
break;
} 
A_PROC_EXIT(mark_off);
return( HWPATRN );
} 
#undef NL

A_STATIC A68_INT  HYPATRN_is_ctypeorquery(A68_222  C, void *NonLocals)
#define NL(x) (((IYPATRN_is_ctypeorquery *)NonLocals)->x)
{ 
A68_INT  JYPATRN_ctypeorquery;
A68_222  KYPATRN;  /* united object - for case conformity */
A68_INT  LYPATRN;  /* clause result */
A68_237 * MYPATRN_cst;
A68_237 * NYPATRN_cs;
A68_BOOL  OYPATRN;  /* optbool result */
A68_236 * PYPATRN_cr;
A68_249 * QYPATRN_cg;
A68_246 * RYPATRN_ua;
A_PROC_ENTRY(is_ctypeorquery);
 /* line 975: */
{ 
 /* line 976: */
 /* line 977: */
KYPATRN = C ;
switch ( KYPATRN.mode )
{ 
case 7: /* REF STRUCT(MODE200)  */
 /* line 978: */
LYPATRN = 1;
break;
case 4: /* REF STRUCT(MODE200)  */
 /* line 979: */
LYPATRN = 2;
break;
case 21: /* REF STRUCT(MODE222,REF MODE237)  */
MYPATRN_cst = (KYPATRN.data.mode21);
 /* line 980: */
{ 
JYPATRN_ctypeorquery = A_CALLPROC(NL(GYPATRN_is_ctypeorquery),((*(&(MYPATRN_cst->Elem)))),((*(&(MYPATRN_cst->Elem))),(NL(GYPATRN_is_ctypeorquery)).nonlocals));
 /* line 981: */
NYPATRN_cs = MYPATRN_cst;
 /* line 982: */
for ( ;; )
{ 
OYPATRN = (NYPATRN_cs!=IAAATRN_nilustr);
if ( OYPATRN )
{ /* line 983: */
OYPATRN = (JYPATRN_ctypeorquery>0);
}
if ( !(OYPATRN) ) break;
 /* line 984: */
if ( (A_CALLPROC(NL(GYPATRN_is_ctypeorquery),((*(&(NYPATRN_cs->Elem)))),((*(&(NYPATRN_cs->Elem))),(NL(GYPATRN_is_ctypeorquery)).nonlocals))!=JYPATRN_ctypeorquery) )
{ 
 /* line 985: */
JYPATRN_ctypeorquery = 0;
} 
 /* line 986: */
 /* line 987: */
NYPATRN_cs = (*(&(NYPATRN_cs->Rest)));
}
 /* line 988: */
 /* line 989: */
 /* line 990: */
LYPATRN = JYPATRN_ctypeorquery;
} 
break;
case 20: /* REF STRUCT(MODE184,MODE222)  */
PYPATRN_cr = (KYPATRN.data.mode20);
 /* line 991: */
LYPATRN = A_CALLPROC(NL(GYPATRN_is_ctypeorquery),((*(&(PYPATRN_cr->Elem)))),((*(&(PYPATRN_cr->Elem))),(NL(GYPATRN_is_ctypeorquery)).nonlocals));
break;
case 33: /* REF STRUCT(MODE184,MODE222)  */
QYPATRN_cg = (KYPATRN.data.mode33);
 /* line 992: */
LYPATRN = A_CALLPROC(NL(GYPATRN_is_ctypeorquery),((*(&(QYPATRN_cg->Char)))),((*(&(QYPATRN_cg->Char))),(NL(GYPATRN_is_ctypeorquery)).nonlocals));
break;
case 30: /* REF STRUCT(MODE222,MODE175)  */
RYPATRN_ua = (KYPATRN.data.mode30);
 /* line 993: */
 /* line 994: */
LYPATRN = A_CALLPROC(NL(GYPATRN_is_ctypeorquery),((*(&(RYPATRN_ua->Unit)))),((*(&(RYPATRN_ua->Unit))),(NL(GYPATRN_is_ctypeorquery)).nonlocals));
break;
default: 
 /* line 995: */
LYPATRN = 0;
break;
} 
} 
A_PROC_EXIT(is_ctypeorquery);
return( LYPATRN );
} 
#undef NL

A_STATIC A68_BOOL  XYPATRN_checkprimrange(A68_INT  First1, A68_INT  Last1, A68_INT  First2, A68_INT  Last2, void *NonLocals)
#define NL(x) (((YYPATRN_checkprimrange *)NonLocals)->x)
{ 
A68_BOOL  ZYPATRN;  /* optbool result */
A68_BOOL  AZPATRN;  /* clause result */
A68_BOOL  BZPATRN;  /* optbool result */
A_PROC_ENTRY(checkprimrange);
 /* line 998: */
{ 
 /* line 999: */
if ( NL(Disjoint) )
{ 
ZYPATRN = (First1>Last2);
if ( ! ZYPATRN )
{ /* line 1000: */
ZYPATRN = (Last1<First2);
}
AZPATRN = ZYPATRN;
} 
else
{ 
BZPATRN = (First1!=First2);
if ( ! BZPATRN )
{ /* line 1001: */
BZPATRN = (Last1!=Last2);
}
 /* line 1002: */
AZPATRN = BZPATRN;
} 
} 
A_PROC_EXIT(checkprimrange);
return( AZPATRN );
} 
#undef NL

A_STATIC A68_BOOL  EZPATRN_equal_ints(A68_32  A, A68_32  B)
{ 
A68_BOOL  FZPATRN_equal;
A68_INT  GZPATRN_i;
A68_INT  HZPATRN;  /* to part of loop */
A68_BOOL  IZPATRN;  /* clause result */
A_PROC_ENTRY(equal_ints);
 /* line 1005: */
{ 
FZPATRN_equal = (A.upb==B.upb);
 /* line 1006: */
HZPATRN = A.upb;
for ( GZPATRN_i = 1;
GZPATRN_i <= HZPATRN;
GZPATRN_i += 1 )
{ 
 /* line 1007: */
if ( !(FZPATRN_equal) ) break;
if ( ((*(&A_VINDEX(A,GZPATRN_i)))!=(*(&A_VINDEX(B,GZPATRN_i)))) )
{ 
FZPATRN_equal = A68_FALSE;
} 
}
 /* line 1008: */
 /* line 1009: */
IZPATRN = FZPATRN_equal;
} 
A_PROC_EXIT(equal_ints);
return( IZPATRN );
} 
#undef NL

A_STATIC A68_BOOL  MZPATRN_checkualts(A68_222  A, A68_222  B, void *NonLocals)
#define NL(x) (((NZPATRN_checkualts *)NonLocals)->x)
{ 
A68_222  OZPATRN;  /* united object - for case conformity */
A68_226 * PZPATRN_ca;
A68_222  QZPATRN;  /* united object - for case conformity */
A68_226 * RZPATRN_bca;
A68_BOOL  SZPATRN;  /* optbool result */
A68_BOOL  TZPATRN;  /* clause result */
A68_222  UZPATRN;  /* OPERATORS - mode -> union mode */
A68_226 * VZPATRN;  /* YIELD */
A68_BOOL  WZPATRN;  /* clause result */
A68_222  XZPATRN;  /* OPERATORS - mode -> union mode */
A68_226 * YZPATRN;  /* YIELD */
A68_222  ZZPATRN;  /* OPERATORS - mode -> union mode */
A68_226 * AAQATRN;  /* YIELD */
A68_222  BAQATRN;  /* united object - for case conformity */
A68_226 * CAQATRN_bca;
A68_BOOL  DAQATRN;  /* optbool result */
A68_BOOL  EAQATRN;  /* clause result */
A68_222  FAQATRN;  /* OPERATORS - mode -> union mode */
A68_226 * GAQATRN;  /* YIELD */
A_PROC_ENTRY(checkualts);
 /* line 1012: */
 /* line 1013: */
OZPATRN = A ;
switch ( OZPATRN.mode )
{ 
case 10: /* REF STRUCT(MODE222,REF MODE226)  */
PZPATRN_ca = (OZPATRN.data.mode10);
 /* line 1014: */
 /* line 1015: */
QZPATRN = B ;
switch ( QZPATRN.mode )
{ 
case 10: /* REF STRUCT(MODE222,REF MODE226)  */
RZPATRN_bca = (QZPATRN.data.mode10);
 /* line 1016: */
 /* line 1017: */
if ( NL(Disjoint) )
{ 
 /* line 1018: */
SZPATRN = DYPATRN_checkconsts((*(&(PZPATRN_ca->Alt))), B, NL(Disjoint));
if ( SZPATRN )
{ /* line 1019: */
if ( ((*(&(PZPATRN_ca->Rest)))==HAAATRN_nilualts) )
{ 
 /* line 1020: */
TZPATRN = A68_TRUE;
} 
else
{ 
 /* line 1021: */
VZPATRN = (*(&(PZPATRN_ca->Rest))) ;
TZPATRN = DYPATRN_checkconsts(A_UNITE(UZPATRN,mode10,10,VZPATRN), B, NL(Disjoint));
} 
SZPATRN = TZPATRN;
}
 /* line 1022: */
WZPATRN = SZPATRN;
} 
else
{ 
 /* line 1023: */
if ( DYPATRN_checkconsts((*(&(PZPATRN_ca->Alt))), (*(&(RZPATRN_bca->Alt))), NL(Disjoint)) )
{ 
 /* line 1024: */
WZPATRN = A68_TRUE;
} 
else
{ 
 /* line 1025: */
if ( ((*(&(PZPATRN_ca->Rest)))==HAAATRN_nilualts) )
{ 
 /* line 1026: */
WZPATRN = ((*(&(RZPATRN_bca->Rest)))!=HAAATRN_nilualts);
} 
else
{ 
 /* line 1027: */
if ( ((*(&(RZPATRN_bca->Rest)))==HAAATRN_nilualts) )
{ 
 /* line 1028: */
WZPATRN = A68_TRUE;
} 
else
{ 
 /* line 1029: */
 /* line 1030: */
YZPATRN = (*(&(RZPATRN_bca->Rest))) ;
AAQATRN = (*(&(PZPATRN_ca->Rest))) ;
WZPATRN = A_CALLPROC(NL(LZPATRN_checkualts),(A_UNITE(ZZPATRN,mode10,10,AAQATRN), A_UNITE(XZPATRN,mode10,10,YZPATRN)),(A_UNITE(ZZPATRN,mode10,10,AAQATRN), A_UNITE(XZPATRN,mode10,10,YZPATRN),(NL(LZPATRN_checkualts)).nonlocals));
} 
} 
} 
} 
break;
default: 
if ( NL(Disjoint) )
{ 
WZPATRN = A_CALLPROC(NL(LZPATRN_checkualts),(B, A),(B, A,(NL(LZPATRN_checkualts)).nonlocals));
} 
else
{ 
 /* line 1031: */
 /* line 1032: */
WZPATRN = A68_TRUE;
} 
break;
} 
break;
default: 
 /* line 1033: */
if ( NL(Disjoint) )
{ 
 /* line 1034: */
BAQATRN = B ;
switch ( BAQATRN.mode )
{ 
case 10: /* REF STRUCT(MODE222,REF MODE226)  */
CAQATRN_bca = (BAQATRN.data.mode10);
 /* line 1035: */
 /* line 1036: */
DAQATRN = DYPATRN_checkconsts(A, (*(&(CAQATRN_bca->Alt))), NL(Disjoint));
if ( DAQATRN )
{ /* line 1037: */
if ( ((*(&(CAQATRN_bca->Rest)))==HAAATRN_nilualts) )
{ 
 /* line 1038: */
EAQATRN = A68_TRUE;
} 
else
{ 
 /* line 1039: */
GAQATRN = (*(&(CAQATRN_bca->Rest))) ;
EAQATRN = DYPATRN_checkconsts(A, A_UNITE(FAQATRN,mode10,10,GAQATRN), NL(Disjoint));
} 
DAQATRN = EAQATRN;
}
 /* line 1040: */
WZPATRN = DAQATRN;
break;
default: 
 /* line 1041: */
 /* line 1042: */
WZPATRN = A68_TRUE;
break;
} 
} 
else
{ 
 /* line 1043: */
 /* line 1044: */
WZPATRN = A68_TRUE;
} 
break;
} 
A_PROC_EXIT(checkualts);
return( WZPATRN );
} 
#undef NL

A_STATIC A68_VOID  KXQATRN_anonymous(A68_222  Unit, A68_414 * Tprocs, A68_390  *ReturnedValue, void *NonLocals)
#define NL(x) (((LXQATRN_anonymous *)NonLocals)->x)
{ 
A68_222  MXQATRN;  /* united object - for case conformity */
A68_433  NXQATRN;  /* CALL */
A68_390  OXQATRN;  /* avoid structure result */
A68_390  PXQATRN;  /* collateral clause result */
A68_390  QXQATRN;  /* clause result */
 /* line 1831: */
{ 
 /* line 1833: */
MXQATRN = Unit ;
switch ( MXQATRN.mode )
{ 
case 18: /* REF STRUCT(MODE222,MODE222)  */
case 19: /* REF STRUCT(MODE222,MODE222,MODE222)  */
case 23: /* REF STRUCT(MODE262,MODE222)  */
case 24: /* REF STRUCT(MODE222,MODE262,MODE222)  */
case 25: /* REF STRUCT(MODE222,REF MODE282)  */
case 28: /* REF STRUCT(REF MODE270,MODE222)  */
case 29: /* REF STRUCT(REF MODE251,MODE222)  */
 /* line 1834: */
 /* line 1835: */
(*NL(GXQATRN_status)) = FXQATRN_s_monitor;
break;
case 11: /* REF STRUCT(INT,INT)  */
case 12: /* REF STRUCT(MODE222,MODE222)  */
case 14: /* REF STRUCT(MODE222,INT,INT)  */
case 15: /* REF STRUCT(MODE222,INT,INT)  */
 /* line 1836: */
 /* line 1837: */
(*NL(GXQATRN_status)) = EXQATRN_s_unit;
break;
default: 
 /* line 1838: */
NXQATRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(NXQATRN,(Unit, Tprocs, &OXQATRN),(Unit, Tprocs, &OXQATRN,(NXQATRN).nonlocals));
OXQATRN;
break;
} 
 /* line 1839: */
PXQATRN.U = Unit;
 /* line 1840: */
 /* line 1841: */
PXQATRN.C = A68_FALSE;
QXQATRN = PXQATRN;
} 
*ReturnedValue = (QXQATRN);
return;
} 
#undef NL

A_STATIC A68_BOOL  XXQATRN_contains_diagnostics(A68_222  U, void *NonLocals)
#define NL(x) (((YXQATRN_contains_diagnostics *)NonLocals)->x)
{ 
A68_433  ZXQATRN;  /* CALL */
A68_390  AYQATRN;  /* avoid structure result */
A68_BOOL  BYQATRN;  /* clause result */
A_PROC_ENTRY(contains_diagnostics);
 /* line 1844: */
{ 
(*NL(GXQATRN_status)) = DXQATRN_s_const;
 /* line 1845: */
ZXQATRN = (*(&(NL(UXQATRN_status_procs)->Unit))) ;
A_CALLPROC(ZXQATRN,(U, NL(UXQATRN_status_procs), &AYQATRN),(U, NL(UXQATRN_status_procs), &AYQATRN,(ZXQATRN).nonlocals));
AYQATRN;
 /* line 1846: */
 /* line 1847: */
BYQATRN = ((*NL(GXQATRN_status))==FXQATRN_s_monitor);
} 
A_PROC_EXIT(contains_diagnostics);
return( BYQATRN );
} 
#undef NL

A_STATIC A68_BOOL  EYQATRN_only_const(A68_222  U, void *NonLocals)
#define NL(x) (((FYQATRN_only_const *)NonLocals)->x)
{ 
A68_433  GYQATRN;  /* CALL */
A68_390  HYQATRN;  /* avoid structure result */
A68_BOOL  IYQATRN;  /* clause result */
A_PROC_ENTRY(only_const);
 /* line 1850: */
{ 
(*NL(GXQATRN_status)) = DXQATRN_s_const;
 /* line 1851: */
GYQATRN = (*(&(NL(UXQATRN_status_procs)->Unit))) ;
A_CALLPROC(GYQATRN,(U, NL(UXQATRN_status_procs), &HYQATRN),(U, NL(UXQATRN_status_procs), &HYQATRN,(GYQATRN).nonlocals));
HYQATRN;
 /* line 1852: */
 /* line 1853: */
IYQATRN = ((*NL(GXQATRN_status))==DXQATRN_s_const);
} 
A_PROC_EXIT(only_const);
return( IYQATRN );
} 
#undef NL

A_STATIC A68_BOOL  LYQATRN_needs_expanding(A68_307  O, void *NonLocals)
#define NL(x) (((MYQATRN_needs_expanding *)NonLocals)->x)
{ 
A68_BOOL  NYQATRN_expand;
A68_591  OYQATRN;  /* collateral clause result */
A68_415  RYQATRN_anonymous;   /* proc value of non-global proc */
A68_459  BZQATRN;  /* OPERATORS - mode -> union mode */
A68_415  CZQATRN;  /* YIELD */
A68_418  FZQATRN_anonymous;   /* proc value of non-global proc */
A68_459  LZQATRN;  /* OPERATORS - mode -> union mode */
A68_418  MZQATRN;  /* YIELD */
A68_424  PZQATRN_anonymous;   /* proc value of non-global proc */
A68_459  ZZQATRN;  /* OPERATORS - mode -> union mode */
A68_424  AARATRN;  /* YIELD */
A68_433  DARATRN_anonymous;   /* proc value of non-global proc */
A68_459  RARATRN;  /* OPERATORS - mode -> union mode */
A68_433  SARATRN;  /* YIELD */
A68_439  VARATRN_anonymous;   /* proc value of non-global proc */
A68_459  ABRATRN;  /* OPERATORS - mode -> union mode */
A68_439  BBRATRN;  /* YIELD */
A68_440  EBRATRN_anonymous;   /* proc value of non-global proc */
A68_459  JBRATRN;  /* OPERATORS - mode -> union mode */
A68_440  KBRATRN;  /* YIELD */
A68_458  LBRATRN;  /* OPERATORS - istruct -> vector */
A68_414 * MBRATRN_newtprocs;
A68_181 ** NBRATRN_a;
A68_302  OBRATRN;  /* forall yield */
A68_INT  PBRATRN;  /* forall loop counter */
A68_417  QBRATRN;  /* CALL */
A68_374  RBRATRN;  /* avoid structure result */
A68_374  SBRATRN_adc;
A68_197 ** TBRATRN_i;
A68_303  UBRATRN;  /* forall yield */
A68_INT  VBRATRN;  /* forall loop counter */
A68_BOOL  WBRATRN;  /* optbool result */
A68_215 ** XBRATRN_t;
A68_304  YBRATRN;  /* forall yield */
A68_INT  ZBRATRN;  /* forall loop counter */
A68_428  ACRATRN;  /* CALL */
A68_385  BCRATRN;  /* avoid structure result */
A68_385  CCRATRN_tdc;
A68_221 ** DCRATRN_c;
A68_305  ECRATRN;  /* forall yield */
A68_INT  FCRATRN;  /* forall loop counter */
A68_BOOL  GCRATRN;  /* optbool result */
A68_298 ** HCRATRN_f;
A68_306  ICRATRN;  /* forall yield */
A68_INT  JCRATRN;  /* forall loop counter */
A68_BOOL  KCRATRN;  /* optbool result */
A68_BOOL  LCRATRN;  /* optbool result */
A68_BOOL  MCRATRN;  /* optbool result */
A68_294  NCRATRN;  /* united object - for case conformity */
A68_BOOL  OCRATRN;  /* clause result */
A68_297 * PCRATRN_n;
A68_300  QCRATRN;  /* forall yield */
A68_INT  RCRATRN;  /* forall loop counter */
A68_424  SCRATRN;  /* CALL */
A68_381  TCRATRN;  /* avoid structure result */
A68_381  UCRATRN_tc;
A68_451  VCRATRN;  /* CALL */
A68_408  WCRATRN;  /* avoid structure result */
A68_408  XCRATRN_fc;
A68_BOOL  YCRATRN;  /* clause result */
A_PROC_ENTRY(needs_expanding);
 /* line 1857: */
 /* line 1858: */
{ 
NYQATRN_expand = A68_FALSE;
 /* line 1860: */
 /* line 1861: */
A_CLOSURE( RYQATRN_anonymous, SYQATRN_anonymous, TYQATRN_anonymous );
(( TYQATRN_anonymous * ) ( RYQATRN_anonymous.nonlocals )) -> NYQATRN_expand = (&NYQATRN_expand);
 /* line 1868: */
CZQATRN = RYQATRN_anonymous ;
OYQATRN.data[0] = A_UNITE(BZQATRN,mode1,1,CZQATRN);
A_CLOSURE( FZQATRN_anonymous, GZQATRN_anonymous, HZQATRN_anonymous );
(( HZQATRN_anonymous * ) ( FZQATRN_anonymous.nonlocals )) -> NYQATRN_expand = (&NYQATRN_expand);
 /* line 1876: */
MZQATRN = FZQATRN_anonymous ;
OYQATRN.data[1] = A_UNITE(LZQATRN,mode4,4,MZQATRN);
A_CLOSURE( PZQATRN_anonymous, QZQATRN_anonymous, RZQATRN_anonymous );
(( RZQATRN_anonymous * ) ( PZQATRN_anonymous.nonlocals )) -> NYQATRN_expand = (&NYQATRN_expand);
 /* line 1883: */
AARATRN = PZQATRN_anonymous ;
OYQATRN.data[2] = A_UNITE(ZZQATRN,mode10,10,AARATRN);
A_CLOSURE( DARATRN_anonymous, EARATRN_anonymous, FARATRN_anonymous );
(( FARATRN_anonymous * ) ( DARATRN_anonymous.nonlocals )) -> NYQATRN_expand = (&NYQATRN_expand);
(( FARATRN_anonymous * ) ( DARATRN_anonymous.nonlocals )) -> WXQATRN_contains_diagnostics = NL(WXQATRN_contains_diagnostics);
(( FARATRN_anonymous * ) ( DARATRN_anonymous.nonlocals )) -> DYQATRN_only_const = NL(DYQATRN_only_const);
 /* line 1901: */
SARATRN = DARATRN_anonymous ;
OYQATRN.data[3] = A_UNITE(RARATRN,mode19,19,SARATRN);
A_CLOSURE( VARATRN_anonymous, WARATRN_anonymous, XARATRN_anonymous );
(( XARATRN_anonymous * ) ( VARATRN_anonymous.nonlocals )) -> NYQATRN_expand = (&NYQATRN_expand);
 /* line 1903: */
BBRATRN = VARATRN_anonymous ;
OYQATRN.data[4] = A_UNITE(ABRATRN,mode25,25,BBRATRN);
A_CLOSURE( EBRATRN_anonymous, FBRATRN_anonymous, GBRATRN_anonymous );
(( GBRATRN_anonymous * ) ( EBRATRN_anonymous.nonlocals )) -> NYQATRN_expand = (&NYQATRN_expand);
KBRATRN = EBRATRN_anonymous ;
OYQATRN.data[5] = A_UNITE(JBRATRN,mode26,26,KBRATRN);
MBRATRN_newtprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HISVEC(LBRATRN,OYQATRN,6,A68_459 ));
 /* line 1907: */
OBRATRN = (*(&(O.Environ->Attrs))) ;
PBRATRN = OBRATRN.upb -1;
NBRATRN_a = OBRATRN.data;
for (;PBRATRN-- >= 0;
(NBRATRN_a++
) )
{
 /* line 1908: */
if ( !(!NYQATRN_expand) ) break;
QBRATRN = (*(&(AWLATRN_nulltprocs->Attrdec))) ;
A_CALLPROC(QBRATRN,((*NBRATRN_a), MBRATRN_newtprocs, &RBRATRN),((*NBRATRN_a), MBRATRN_newtprocs, &RBRATRN,(QBRATRN).nonlocals));
SBRATRN_adc = RBRATRN;
 /* line 1909: */
if ( SBRATRN_adc.C )
{ 
 /* line 1910: */
NYQATRN_expand = A68_TRUE;
} 
}
 /* line 1912: */
UBRATRN = (*(&(O.Environ->Ints))) ;
VBRATRN = UBRATRN.upb -1;
TBRATRN_i = UBRATRN.data;
for (;VBRATRN-- >= 0;
(TBRATRN_i++
) )
{
 /* line 1913: */
if ( !(!NYQATRN_expand) ) break;
WBRATRN = ((*(&((*TBRATRN_i)->Sort)))==OKAATRN_outerdec);
if ( ! WBRATRN )
{WBRATRN = ((*(&((*TBRATRN_i)->Sort)))==PKAATRN_localdec);
}
NYQATRN_expand = WBRATRN;
}
 /* line 1915: */
YBRATRN = (*(&(O.Environ->Types))) ;
ZBRATRN = YBRATRN.upb -1;
XBRATRN_t = YBRATRN.data;
for (;ZBRATRN-- >= 0;
(XBRATRN_t++
) )
{
 /* line 1916: */
if ( !(!NYQATRN_expand) ) break;
ACRATRN = (*(&(AWLATRN_nulltprocs->Typedec))) ;
A_CALLPROC(ACRATRN,((*XBRATRN_t), MBRATRN_newtprocs, &BCRATRN),((*XBRATRN_t), MBRATRN_newtprocs, &BCRATRN,(ACRATRN).nonlocals));
CCRATRN_tdc = BCRATRN;
 /* line 1917: */
if ( CCRATRN_tdc.C )
{ 
 /* line 1918: */
NYQATRN_expand = A68_TRUE;
} 
}
 /* line 1920: */
ECRATRN = (*(&(O.Environ->Consts))) ;
FCRATRN = ECRATRN.upb -1;
DCRATRN_c = ECRATRN.data;
for (;FCRATRN-- >= 0;
(DCRATRN_c++
) )
{
 /* line 1921: */
if ( !(!NYQATRN_expand) ) break;
GCRATRN = ((*(&((*DCRATRN_c)->Sort)))==OKAATRN_outerdec);
if ( ! GCRATRN )
{GCRATRN = ((*(&((*DCRATRN_c)->Sort)))==PKAATRN_localdec);
}
NYQATRN_expand = GCRATRN;
}
 /* line 1923: */
ICRATRN = (*(&(O.Environ->Fns))) ;
JCRATRN = ICRATRN.upb -1;
HCRATRN_f = ICRATRN.data;
for (;JCRATRN-- >= 0;
(HCRATRN_f++
) )
{
 /* line 1924: */
if ( !(!NYQATRN_expand) ) break;
 /* line 1925: */
KCRATRN = (*(&((*HCRATRN_f)->Macro)));
if ( KCRATRN )
{ /* line 1926: */
LCRATRN = ((*(&((*HCRATRN_f)->Sort)))==QKAATRN_macpardec);
if ( ! LCRATRN )
{ /* line 1927: */
MCRATRN = ((*(&((*HCRATRN_f)->Sort)))==PKAATRN_localdec);
if ( MCRATRN )
{NCRATRN = (*(&((*HCRATRN_f)->Fnbody))) ;
switch ( NCRATRN.mode )
{ 
case 12: /* REF STRUCT(INT)  */
OCRATRN = A68_TRUE;
break;
default: 
 /* line 1928: */
OCRATRN = A68_FALSE;
break;
} 
MCRATRN = OCRATRN;
}
LCRATRN = MCRATRN;
}
 /* line 1929: */
KCRATRN = !LCRATRN;
}
if ( KCRATRN )
{ 
 /* line 1930: */
NYQATRN_expand = A68_TRUE;
} 
else
{ 
QCRATRN = (*(&((*HCRATRN_f)->Nametypes))) ;
RCRATRN = QCRATRN.upb -1;
PCRATRN_n = QCRATRN.data;
for (;RCRATRN-- >= 0;
(PCRATRN_n++
) )
{
 /* line 1931: */
if ( !(!NYQATRN_expand) ) break;
SCRATRN = (*(&(MBRATRN_newtprocs->Type))) ;
A_CALLPROC(SCRATRN,((*(&(PCRATRN_n->Type))), MBRATRN_newtprocs, &TCRATRN),((*(&(PCRATRN_n->Type))), MBRATRN_newtprocs, &TCRATRN,(SCRATRN).nonlocals));
UCRATRN_tc = TCRATRN;
 /* line 1932: */
if ( UCRATRN_tc.C )
{ 
 /* line 1933: */
NYQATRN_expand = A68_TRUE;
} 
}
 /* line 1934: */
 /* line 1935: */
if ( !NYQATRN_expand )
{ 
VCRATRN = (*(&(AWLATRN_nulltprocs->Fnbody))) ;
A_CALLPROC(VCRATRN,((*(&((*HCRATRN_f)->Fnbody))), MBRATRN_newtprocs, &WCRATRN),((*(&((*HCRATRN_f)->Fnbody))), MBRATRN_newtprocs, &WCRATRN,(VCRATRN).nonlocals));
XCRATRN_fc = WCRATRN;
 /* line 1936: */
if ( XCRATRN_fc.C )
{ 
 /* line 1937: */
 /* line 1938: */
 /* line 1939: */
NYQATRN_expand = A68_TRUE;
} 
} 
} 
}
 /* line 1941: */
 /* line 1942: */
YCRATRN = NYQATRN_expand;
} 
A_PROC_EXIT(needs_expanding);
return( YCRATRN );
} 
#undef NL

A_STATIC A68_VOID  BDRATRN_flt(A68_VC  S, void *NonLocals)
#define NL(x) (((CDRATRN_flt *)NonLocals)->x)
{ 
A68_46  DDRATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(flt);
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(DDRATRN,S,A68_VC )),(WHAAOSI_user, A_HVEC(DDRATRN,S,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(flt);
return;
} 
#undef NL

A_STATIC A68_VOID  IDRATRN_update_closure(void *NonLocals)
#define NL(x) (((JDRATRN_update_closure *)NonLocals)->x)
{ 
A68_INT  KDRATRN_place;
A_PROC_ENTRY(update_closure);
{ 
 /* line 1955: */
if ( !(*NL(GDRATRN_closurechanged)) )
{ 
(*NL(GDRATRN_closurechanged)) = A68_TRUE;
 /* line 1956: */
(*NL(EDRATRN_newclosure)) = DPCATRN_copy_closure((*NL(EDRATRN_newclosure)), NL(Msg));
 /* line 1958: */
KDRATRN_place = (*(&((&((**NL(FDRATRN_newptr))->Outer))->Closureno)));
 /* line 1959: */
(*NL(FDRATRN_newptr)) = (&((*NL(EDRATRN_newclosure))->Outers));
 /* line 1960: */
for ( ;; )
{ 
 /* line 1961: */
if ( !(((*(&((&((**NL(FDRATRN_newptr))->Outer))->Closureno)))!=KDRATRN_place)) ) break;
(*NL(FDRATRN_newptr)) = (&((**NL(FDRATRN_newptr))->Rest));
}
 /* line 1962: */
 /* line 1963: */
} 
} 
A_PROC_EXIT(update_closure);
return;
} 
#undef NL

A_STATIC A68_VOID  ODRATRN_generator(A68_BOOL  MDRATRN_anonymous, A68_592  *ReturnedValue, void *NonLocals)
#define NL(x) (((PDRATRN_generator *)NonLocals)->x)
{ 
A68_592  QDRATRN;  /* clause result */
A68_592  RDRATRN;  /* OPERATORS - dynamic generator */
{ 
RDRATRN.upb = NL(LDRATRN_num) ;
( MDRATRN_anonymous? A_VLOC(A68_576 ,RDRATRN): A_VHEAP(A68_576 ,RDRATRN) );
QDRATRN = RDRATRN;
} 
*ReturnedValue = (QDRATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ZDRATRN_find_int_const(A68_INT  Closureno, A68_308 * O, A68_307  *ReturnedValue)
{ 
A68_307  AERATRN_result;
A68_308 * BERATRN_os;
A68_BOOL  CERATRN_found;
A68_BOOL  DERATRN;  /* optbool result */
A68_301 * EERATRN_env;
A68_INT  FERATRN_closno;
A68_307  GERATRN;  /* clause result */
A_PROC_ENTRY(find_int_const);
 /* line 1975: */
{ 
 /* line 1976: */
BERATRN_os = O;
 /* line 1977: */
CERATRN_found = A68_FALSE;
 /* line 1978: */
for ( ;; )
{ 
DERATRN = !CERATRN_found;
if ( DERATRN )
{ /* line 1979: */
DERATRN = (BERATRN_os!=HBAATRN_nilouters);
}
if ( !(DERATRN) ) break;
EERATRN_env = (*(&((&(BERATRN_os->Outer))->Environ)));
 /* line 1980: */
FERATRN_closno = (*(&((&(BERATRN_os->Outer))->Closureno)));
 /* line 1981: */
if ( (Closureno==FERATRN_closno) )
{ 
CERATRN_found = A68_TRUE;
AERATRN_result = (*(&(BERATRN_os->Outer)));
} 
 /* line 1982: */
 /* line 1983: */
BERATRN_os = (*(&(BERATRN_os->Rest)));
}
 /* line 1984: */
 /* line 1985: */
GERATRN = AERATRN_result;
} 
A_PROC_EXIT(find_int_const);
*ReturnedValue = (GERATRN);
return;
} 
#undef NL
 /* line 1989: */
 /* line 1990: */

A_STATIC A68_VOID  NERATRN_fname_evaluate(A68_188  Fn, A68_414 * Tprocs, A68_472  Old, A68_32  Repldecs, A68_465  Subs_fmpar, A68_375  *ReturnedValue, void *NonLocals)
#define NL(x) (((OERATRN_fname_evaluate *)NonLocals)->x)
{ 
A68_303  PERATRN;  /* OPERATORS - simple index */
A68_INT  QERATRN;  /* YIELD */
A68_197 * RERATRN_idec;
A68_184  SERATRN;  /* avoid structure result */
A68_184  TERATRN_fm;
A68_375  UERATRN;  /* collateral clause result */
A68_375  VERATRN;  /* clause result */
A68_198  WERATRN;  /* united object - for case conformity */
A68_199  XERATRN_rg;
A68_375  YERATRN;  /* collateral clause result */
A68_INT  ZERATRN;  /* YIELD */
A68_184  AFRATRN;  /* OPERATORS - mode -> union mode */
A68_185 * BFRATRN;  /* YIELD */
A68_184  CFRATRN_f;
A68_418  DFRATRN;  /* CALL */
A68_375  EFRATRN;  /* avoid structure result */
A68_375  FFRATRN_fc;
A68_375  GFRATRN;  /* collateral clause result */
A68_307  HFRATRN;  /* avoid structure result */
A68_307  IFRATRN_oi;
A68_303  JFRATRN;  /* OPERATORS - simple index */
A68_INT  KFRATRN;  /* YIELD */
A68_184  LFRATRN;  /* avoid structure result */
A68_184  MFRATRN_of;
A68_418  NFRATRN;  /* CALL */
A68_375  OFRATRN;  /* avoid structure result */
A68_375  PFRATRN_oc;
A68_375  QFRATRN;  /* collateral clause result */
A_PROC_ENTRY(fname_evaluate);
 /* line 1991: */
{ 
PERATRN = (*(&(Old.Env->Ints))) ;
QERATRN = Fn.Intno ;
RERATRN_idec = (*(&A_VINDEX(PERATRN,QERATRN)));
 /* line 1992: */
 /* line 1993: */
if ( ((*(&(RERATRN_idec->Sort)))==QKAATRN_macpardec) )
{ 
A_CALLPROC(Subs_fmpar,(Fn, &SERATRN),(Fn, &SERATRN,(Subs_fmpar).nonlocals));
TERATRN_fm = SERATRN;
 /* line 1994: */
UERATRN.F = TERATRN_fm;
 /* line 1995: */
UERATRN.C = A68_TRUE;
VERATRN = UERATRN;
} 
else
{ 
 /* line 1996: */
if ( ((*(&(RERATRN_idec->Sort)))==PKAATRN_localdec) )
{ 
 /* line 1997: */
WERATRN = (*(&(RERATRN_idec->Value))) ;
switch ( WERATRN.mode )
{ 
case 11: /* STRUCT(MODE184,MODE184)  */
XERATRN_rg = (WERATRN.data.mode11);
ZERATRN = Fn.Intno ;
BFRATRN = NNMATRN_makefint((*(&A_VINDEX(Repldecs,ZERATRN)))) ;
YERATRN.F = A_UNITE(AFRATRN,mode1,1,BFRATRN);
 /* line 1998: */
YERATRN.C = A68_TRUE;
VERATRN = YERATRN;
break;
case 1: /* REF STRUCT(INT,REF MODE26)  */
case 2: /* REF STRUCT(INT,MODE184,MODE184)  */
case 3: /* REF STRUCT(INT)  */
case 4: /* REF STRUCT(INT)  */
case 5: /* REF STRUCT(MODE184,INT,MODE184)  */
case 6: /* REF STRUCT(INT,MODE184)  */
case 7: /* REF STRUCT(MODE184,MODE184,MODE184)  */
case 8: /* REF STRUCT(MODE184)  */
case 9: /* REF STRUCT(INT)  */
case 10: /* REF STRUCT(INT)  */
A_UNCPY(CFRATRN_f,WERATRN);
 /* line 1999: */
{ 
DFRATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(DFRATRN,(CFRATRN_f, Tprocs, &EFRATRN),(CFRATRN_f, Tprocs, &EFRATRN,(DFRATRN).nonlocals));
FFRATRN_fc = EFRATRN;
 /* line 2000: */
GFRATRN.F = FFRATRN_fc.F;
 /* line 2001: */
 /* line 2002: */
 /* line 2003: */
GFRATRN.C = A68_TRUE;
VERATRN = GFRATRN;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
else
{ 
ZDRATRN_find_int_const( (*(&((*(&(RERATRN_idec->Usage)))->Closureno))), (*NL(WDRATRN_ints_consts)), &HFRATRN );
IFRATRN_oi = HFRATRN;
 /* line 2004: */
JFRATRN = (*(&(IFRATRN_oi.Environ->Ints))) ;
KFRATRN = 1 ;
NFPATRN_get_formula( (*(&((*(&A_VINDEX(JFRATRN,KFRATRN)))->Value))), &LFRATRN );
MFRATRN_of = LFRATRN;
 /* line 2005: */
NFRATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(NFRATRN,(MFRATRN_of, Tprocs, &OFRATRN),(MFRATRN_of, Tprocs, &OFRATRN,(NFRATRN).nonlocals));
PFRATRN_oc = OFRATRN;
 /* line 2006: */
QFRATRN.F = PFRATRN_oc.F;
 /* line 2007: */
 /* line 2008: */
QFRATRN.C = A68_TRUE;
VERATRN = QFRATRN;
} 
} 
} 
A_PROC_EXIT(fname_evaluate);
*ReturnedValue = (VERATRN);
return;
} 
#undef NL
 /* line 2011: */

A_STATIC A68_VOID  WFRATRN_urepl_expand(A68_243 * Urepl, A68_414 * Tprocs, A68_301 * Env, A68_32  Repldecs, A68_510 ** Joinup, A68_390  *ReturnedValue)
{ 
A68_237 * XFRATRN_newbody;
A68_237 ** YFRATRN_nextelem;
A68_477  ZFRATRN;  /* avoid structure result */
A68_477  AGRATRN_repl;
A68_421  BGRATRN;  /* CALL */
A68_378  CGRATRN;  /* avoid structure result */
A68_378  DGRATRN_rc;
A68_INT  EGRATRN_lwb;
A68_INT  FGRATRN_upb;
A68_516  HGRATRN_generator;   /* proc value of non-global proc */
A68_509  MGRATRN;  /* avoid structure result */
A68_509  NGRATRN_row;
A68_INT  OGRATRN_i;
A68_INT  PGRATRN;  /* to part of loop */
A68_INT  QGRATRN;  /* YIELD */
A68_INT * RGRATRN;  /* YIELD */
A68_433  SGRATRN;  /* CALL */
A68_390  TGRATRN;  /* avoid structure result */
A68_390  UGRATRN_body;
A68_INT  VGRATRN;  /* YIELD */
A68_510 ** WGRATRN;  /* YIELD */
A68_237  XGRATRN;  /* collateral clause result */
A68_237 * YGRATRN;  /* YIELD */
A68_390  ZGRATRN;  /* collateral clause result */
A68_236  AHRATRN;  /* collateral clause result */
A68_184  BHRATRN;  /* OPERATORS - mode -> union mode */
A68_185 * CHRATRN;  /* YIELD */
A68_236 * DHRATRN;  /* YIELD */
A68_222  EHRATRN;  /* OPERATORS - mode -> union mode */
A68_222  FHRATRN;  /* OPERATORS - mode -> union mode */
A68_390  GHRATRN;  /* clause result */
A_PROC_ENTRY(urepl_expand);
 /* line 2012: */
 /* line 2013: */
{ 
XFRATRN_newbody = IAAATRN_nilustr;
 /* line 2014: */
YFRATRN_nextelem = (&XFRATRN_newbody);
 /* line 2015: */
QVOATRN_get_replicator( (*(&(Urepl->Repl))), Env, &ZFRATRN );
AGRATRN_repl = ZFRATRN;
 /* line 2016: */
BGRATRN = (*(&(Tprocs->Range))) ;
A_CALLPROC(BGRATRN,(AGRATRN_repl.Range, Tprocs, &CGRATRN),(AGRATRN_repl.Range, Tprocs, &CGRATRN,(BGRATRN).nonlocals));
DGRATRN_rc = CGRATRN;
 /* line 2017: */
EGRATRN_lwb = XOMATRN_int(DGRATRN_rc.R.Lwb);
 /* line 2018: */
FGRATRN_upb = XOMATRN_int(DGRATRN_rc.R.Upb);
 /* line 2019: */
A_CLOSURE( HGRATRN_generator, IGRATRN_generator, JGRATRN_generator );
(( JGRATRN_generator * ) ( HGRATRN_generator.nonlocals )) -> FGRATRN_upb = FGRATRN_upb;
(( JGRATRN_generator * ) ( HGRATRN_generator.nonlocals )) -> EGRATRN_lwb = EGRATRN_lwb;
A_CALLPROC(HGRATRN_generator,(A68_FALSE, &MGRATRN),(A68_FALSE, &MGRATRN,(HGRATRN_generator).nonlocals));
NGRATRN_row = MGRATRN;
 /* line 2021: */
 /* line 2022: */
PGRATRN = FGRATRN_upb;
for ( OGRATRN_i = EGRATRN_lwb;
OGRATRN_i <= PGRATRN;
OGRATRN_i += 1 )
{ 
QGRATRN = AGRATRN_repl.Intno ;
RGRATRN = (&A_VINDEX(Repldecs,QGRATRN)) ;
(*RGRATRN) = OGRATRN_i;
 /* line 2023: */
SGRATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(SGRATRN,((*(&(Urepl->Body))), Tprocs, &TGRATRN),((*(&(Urepl->Body))), Tprocs, &TGRATRN,(SGRATRN).nonlocals));
UGRATRN_body = TGRATRN;
 /* line 2024: */
VGRATRN = ((OGRATRN_i-EGRATRN_lwb)+1) ;
WGRATRN = (&A_VINDEX(NGRATRN_row,VGRATRN)) ;
(*WGRATRN) = (*Joinup);
 /* line 2025: */
(*Joinup) = COPATRN_nulljoinup;
 /* line 2026: */
XGRATRN.Elem = UGRATRN_body.U;
XGRATRN.Rest = IAAATRN_nilustr;
YGRATRN = A_HEAP(A68_237 ) ;
(*YGRATRN) = XGRATRN ;
(*YFRATRN_nextelem) = YGRATRN;
 /* line 2027: */
 /* line 2028: */
YFRATRN_nextelem = (&((*YFRATRN_nextelem)->Rest));
}
 /* line 2029: */
(*Joinup) = FOPATRN_makejoinrow(NGRATRN_row);
 /* line 2030: */
 /* line 2031: */
if ( (EGRATRN_lwb==FGRATRN_upb) )
{ 
CHRATRN = NNMATRN_makefint(1) ;
AHRATRN.Size = A_UNITE(BHRATRN,mode1,1,CHRATRN);
 /* line 2032: */
AHRATRN.Elem = (*(&(XFRATRN_newbody->Elem)));
 /* line 2033: */
DHRATRN = A_HEAP(A68_236 ) ;
(*DHRATRN) = AHRATRN ;
ZGRATRN.U = A_UNITE(EHRATRN,mode20,20,DHRATRN);
} 
else
{ 
ZGRATRN.U = A_UNITE(FHRATRN,mode21,21,XFRATRN_newbody);
} 
 /* line 2034: */
ZGRATRN.C = A68_TRUE;
GHRATRN = ZGRATRN;
} 
A_PROC_EXIT(urepl_expand);
*ReturnedValue = (GHRATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  JHRATRN_ucond_expand(A68_242 * Uc, A68_414 * Tprocs, A68_390  *ReturnedValue)
{ 
A68_418  KHRATRN;  /* CALL */
A68_375  LHRATRN;  /* avoid structure result */
A68_375  MHRATRN_cond;
A68_222  NHRATRN;  /* clause result */
A68_433  OHRATRN;  /* CALL */
A68_390  PHRATRN;  /* avoid structure result */
A68_433  QHRATRN;  /* CALL */
A68_390  RHRATRN;  /* avoid structure result */
A68_222  SHRATRN_u;
A68_390  THRATRN;  /* collateral clause result */
A68_390  UHRATRN;  /* clause result */
A_PROC_ENTRY(ucond_expand);
 /* line 2037: */
 /* line 2038: */
{ 
KHRATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(KHRATRN,((*(&(Uc->Cond))), Tprocs, &LHRATRN),((*(&(Uc->Cond))), Tprocs, &LHRATRN,(KHRATRN).nonlocals));
MHRATRN_cond = LHRATRN;
 /* line 2039: */
 /* line 2040: */
if ( (XOMATRN_int(MHRATRN_cond.F)!=0) )
{ 
 /* line 2041: */
OHRATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(OHRATRN,((*(&(Uc->True))), Tprocs, &PHRATRN),((*(&(Uc->True))), Tprocs, &PHRATRN,(OHRATRN).nonlocals));
NHRATRN = PHRATRN.U;
} 
else
{ 
 /* line 2042: */
QHRATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(QHRATRN,((*(&(Uc->False))), Tprocs, &RHRATRN),((*(&(Uc->False))), Tprocs, &RHRATRN,(QHRATRN).nonlocals));
NHRATRN = RHRATRN.U;
} 
SHRATRN_u = NHRATRN;
 /* line 2043: */
THRATRN.U = SHRATRN_u;
 /* line 2044: */
THRATRN.C = A68_TRUE;
UHRATRN = THRATRN;
} 
A_PROC_EXIT(ucond_expand);
*ReturnedValue = (UHRATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  XHRATRN_make_multiple(A68_222  U, A68_472  Close, A68_222  *ReturnedValue)
{ 
A68_599  CIRATRN_move;   /* proc value of non-global proc */
A68_222  PJRATRN;  /* united object - for case conformity */
A68_220 * QJRATRN_cq;
A68_222  RJRATRN;  /* clause result */
A68_222  SJRATRN;  /* avoid structure result */
A68_205 * TJRATRN_ct;
A68_222  UJRATRN;  /* avoid structure result */
A68_246 * VJRATRN_ua;
A_PROC_ENTRY(make_multiple);
 /* line 2047: */
 /* line 2048: */
{ 
A_CLOSURE( CIRATRN_move, DIRATRN_move, EIRATRN_move );
(( EIRATRN_move * ) ( CIRATRN_move.nonlocals )) -> Close = Close;
(( EIRATRN_move * ) ( CIRATRN_move.nonlocals )) -> CIRATRN_move = CIRATRN_move;
 /* line 2079: */
 /* line 2080: */
PJRATRN = U ;
switch ( PJRATRN.mode )
{ 
case 4: /* REF STRUCT(MODE200)  */
QJRATRN_cq = (PJRATRN.data.mode4);
 /* line 2081: */
A_CALLPROC(CIRATRN_move,((*(&(QJRATRN_cq->Querytype))), U, A68_TRUE, &SJRATRN),((*(&(QJRATRN_cq->Querytype))), U, A68_TRUE, &SJRATRN,(CIRATRN_move).nonlocals));
RJRATRN = SJRATRN;
break;
case 7: /* REF STRUCT(MODE200)  */
TJRATRN_ct = (PJRATRN.data.mode7);
 /* line 2082: */
A_CALLPROC(CIRATRN_move,((*(&(TJRATRN_ct->Type))), U, A68_FALSE, &UJRATRN),((*(&(TJRATRN_ct->Type))), U, A68_FALSE, &UJRATRN,(CIRATRN_move).nonlocals));
RJRATRN = UJRATRN;
break;
case 30: /* REF STRUCT(MODE222,MODE175)  */
VJRATRN_ua = (PJRATRN.data.mode30);
 /* line 2083: */
 /* line 2084: */
RJRATRN = (*(&(VJRATRN_ua->Unit)));
break;
default: 
 /* line 2085: */
RJRATRN = U;
break;
} 
} 
A_PROC_EXIT(make_multiple);
*ReturnedValue = (RJRATRN);
return;
} 
#undef NL

A_STATIC A68_237 * AKRATRN_trim_ustr(A68_237 * Us, A68_INT  Lwb, A68_INT  Size, void *NonLocals)
#define NL(x) (((BKRATRN_trim_ustr *)NonLocals)->x)
{ 
A68_BOOL  CKRATRN;  /* optbool result */
A68_237 * DKRATRN;  /* clause result */
A68_237  EKRATRN;  /* collateral clause result */
A68_237 * FKRATRN;  /* YIELD */
A_PROC_ENTRY(trim_ustr);
 /* line 2089: */
CKRATRN = (Us==IAAATRN_nilustr);
if ( ! CKRATRN )
{CKRATRN = (Size<=0);
}
if ( ! CKRATRN )
{ /* line 2090: */
CKRATRN = (Lwb<=0);
}
 /* line 2091: */
if ( CKRATRN )
{ 
DKRATRN = IAAATRN_nilustr;
} 
else
{ 
 /* line 2092: */
if ( (Lwb>1) )
{ 
 /* line 2093: */
DKRATRN = A_CALLPROC(NL(ZJRATRN_trim_ustr),((*(&(Us->Rest))), (Lwb-1), Size),((*(&(Us->Rest))), (Lwb-1), Size,(NL(ZJRATRN_trim_ustr)).nonlocals));
} 
else
{ 
EKRATRN.Elem = (*(&(Us->Elem)));
 /* line 2094: */
EKRATRN.Rest = A_CALLPROC(NL(ZJRATRN_trim_ustr),((*(&(Us->Rest))), Lwb, (Size-1)),((*(&(Us->Rest))), Lwb, (Size-1),(NL(ZJRATRN_trim_ustr)).nonlocals));
FKRATRN = A_HEAP(A68_237 ) ;
(*FKRATRN) = EKRATRN ;
DKRATRN = FKRATRN;
} 
} 
A_PROC_EXIT(trim_ustr);
return( DKRATRN );
} 
#undef NL
 /* line 2098: */

A_STATIC A68_VOID  LKRATRN_uindex_expand(A68_232 * Ui, A68_414 * Tprocs, A68_472  Close, A68_510 ** Joinup, A68_390  *ReturnedValue, void *NonLocals)
#define NL(x) (((MKRATRN_uindex_expand *)NonLocals)->x)
{ 
A68_433  NKRATRN;  /* CALL */
A68_222  OKRATRN;  /* OPERATORS - mode -> union mode */
A68_390  PKRATRN;  /* avoid structure result */
A68_390  QKRATRN_uic;
A68_222  RKRATRN;  /* united object - for case conformity */
A68_232 * SKRATRN_u;
A68_232 * TKRATRN;  /* clause result */
A68_232 * UKRATRN;  /* OPERATORS - skip to mode */
A68_232 * VKRATRN_uid;
A68_INT  WKRATRN_index;
A68_222  XKRATRN;  /* avoid structure result */
A68_222  YKRATRN;  /* united object - for case conformity */
A68_237 * ZKRATRN_us;
A68_237 * ALRATRN_uss;
A68_390  BLRATRN;  /* collateral clause result */
A68_390  CLRATRN;  /* clause result */
A68_236 * DLRATRN_ur;
A68_390  ELRATRN;  /* collateral clause result */
A68_249 * FLRATRN_ug;
A68_390  GLRATRN;  /* collateral clause result */
A68_223 * HLRATRN_cq;
A68_390  ILRATRN;  /* collateral clause result */
A68_217  JLRATRN;  /* collateral clause result */
A68_32  KLRATRN;  /* OPERATORS - simple index */
A68_217 * LLRATRN;  /* YIELD */
A68_222  MLRATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(uindex_expand);
 /* line 2099: */
 /* line 2100: */
{ 
NKRATRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(NKRATRN,(A_UNITE(OKRATRN,mode16,16,Ui), Tprocs, &PKRATRN),(A_UNITE(OKRATRN,mode16,16,Ui), Tprocs, &PKRATRN,(NKRATRN).nonlocals));
QKRATRN_uic = PKRATRN;
 /* line 2101: */
 /* line 2102: */
RKRATRN = QKRATRN_uic.U ;
switch ( RKRATRN.mode )
{ 
case 16: /* REF STRUCT(MODE222,MODE184)  */
SKRATRN_u = (RKRATRN.data.mode16);
TKRATRN = SKRATRN_u;
break;
default: 
TKRATRN = UKRATRN;
break;
} 
VKRATRN_uid = TKRATRN;
 /* line 2103: */
WKRATRN_index = XOMATRN_int((*(&(VKRATRN_uid->Index))));
 /* line 2104: */
SSPATRN_joinup_trim(Joinup, A68_TRUE, WKRATRN_index, WKRATRN_index);
 /* line 2105: */
 /* line 2106: */
if ( A_CALLPROC(NL(DYQATRN_only_const),((*(&(VKRATRN_uid->Unit)))),((*(&(VKRATRN_uid->Unit))),(NL(DYQATRN_only_const)).nonlocals)) )
{ 
 /* line 2107: */
XHRATRN_make_multiple( (*(&(VKRATRN_uid->Unit))), Close, &XKRATRN );
YKRATRN = XKRATRN ;
switch ( YKRATRN.mode )
{ 
case 21: /* REF STRUCT(MODE222,REF MODE237)  */
ZKRATRN_us = (YKRATRN.data.mode21);
{ 
ALRATRN_uss = A_CALLPROC(NL(ZJRATRN_trim_ustr),(ZKRATRN_us, WKRATRN_index, 1),(ZKRATRN_us, WKRATRN_index, 1,(NL(ZJRATRN_trim_ustr)).nonlocals));
 /* line 2108: */
BLRATRN.U = (*(&(ALRATRN_uss->Elem)));
 /* line 2109: */
 /* line 2110: */
BLRATRN.C = A68_TRUE;
CLRATRN = BLRATRN;
} 
break;
case 20: /* REF STRUCT(MODE184,MODE222)  */
DLRATRN_ur = (YKRATRN.data.mode20);
ELRATRN.U = (*(&(DLRATRN_ur->Elem)));
 /* line 2111: */
ELRATRN.C = A68_TRUE;
CLRATRN = ELRATRN;
break;
case 33: /* REF STRUCT(MODE184,MODE222)  */
FLRATRN_ug = (YKRATRN.data.mode33);
GLRATRN.U = (*(&(FLRATRN_ug->Char)));
 /* line 2112: */
GLRATRN.C = A68_TRUE;
CLRATRN = GLRATRN;
break;
case 5: /* REF STRUCT(INT,REF MODE32)  */
HLRATRN_cq = (YKRATRN.data.mode5);
 /* line 2113: */
JLRATRN.Typeno = (*(&(HLRATRN_cq->Typeno)));
KLRATRN = (*(&(HLRATRN_cq->String))) ;
JLRATRN.Primno = (*(&A_VINDEX(KLRATRN,WKRATRN_index)));
LLRATRN = A_HEAP(A68_217 ) ;
(*LLRATRN) = JLRATRN ;
ILRATRN.U = A_UNITE(MLRATRN,mode2,2,LLRATRN);
 /* line 2114: */
 /* line 2115: */
ILRATRN.C = A68_TRUE;
CLRATRN = ILRATRN;
break;
default: 
 /* line 2116: */
 /* line 2117: */
CLRATRN = QKRATRN_uic;
break;
} 
} 
else
{ 
 /* line 2118: */
CLRATRN = QKRATRN_uic;
} 
} 
A_PROC_EXIT(uindex_expand);
*ReturnedValue = (CLRATRN);
return;
} 
#undef NL
 /* line 2122: */

A_STATIC A68_VOID  SLRATRN_utrim_expand(A68_233 * Ut, A68_414 * Tprocs, A68_472  Close, A68_510 ** Joinup, A68_390  *ReturnedValue, void *NonLocals)
#define NL(x) (((TLRATRN_utrim_expand *)NonLocals)->x)
{ 
A68_433  ULRATRN;  /* CALL */
A68_222  VLRATRN;  /* OPERATORS - mode -> union mode */
A68_390  WLRATRN;  /* avoid structure result */
A68_390  XLRATRN_utc;
A68_222  YLRATRN;  /* united object - for case conformity */
A68_233 * ZLRATRN_u;
A68_233 * AMRATRN;  /* clause result */
A68_233 * BMRATRN;  /* OPERATORS - skip to mode */
A68_233 * CMRATRN_utr;
A68_INT  DMRATRN_lwb;
A68_INT  EMRATRN_upb;
A68_INT  FMRATRN_size;
A68_222  GMRATRN;  /* avoid structure result */
A68_222  HMRATRN;  /* united object - for case conformity */
A68_237 * IMRATRN_us;
A68_390  JMRATRN;  /* collateral clause result */
A68_222  KMRATRN;  /* OPERATORS - mode -> union mode */
A68_237 * LMRATRN;  /* YIELD */
A68_390  MMRATRN;  /* clause result */
A68_236 * NMRATRN_ur;
A68_390  OMRATRN;  /* collateral clause result */
A68_236  PMRATRN;  /* collateral clause result */
A68_184  QMRATRN;  /* OPERATORS - mode -> union mode */
A68_185 * RMRATRN;  /* YIELD */
A68_236 * SMRATRN;  /* YIELD */
A68_222  TMRATRN;  /* OPERATORS - mode -> union mode */
A68_249 * UMRATRN_ug;
A68_390  VMRATRN;  /* collateral clause result */
A68_249  WMRATRN;  /* collateral clause result */
A68_184  XMRATRN;  /* OPERATORS - mode -> union mode */
A68_185 * YMRATRN;  /* YIELD */
A68_249 * ZMRATRN;  /* YIELD */
A68_222  ANRATRN;  /* OPERATORS - mode -> union mode */
A68_223 * BNRATRN_cq;
A68_390  CNRATRN;  /* collateral clause result */
A68_223  DNRATRN;  /* collateral clause result */
A68_32  ENRATRN;  /* OPERATORS - trim index */
A68_32  FNRATRN;  /* OPERATORS - trim index */
A68_223 * GNRATRN;  /* YIELD */
A68_222  HNRATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(utrim_expand);
 /* line 2123: */
 /* line 2124: */
{ 
ULRATRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(ULRATRN,(A_UNITE(VLRATRN,mode17,17,Ut), Tprocs, &WLRATRN),(A_UNITE(VLRATRN,mode17,17,Ut), Tprocs, &WLRATRN,(ULRATRN).nonlocals));
XLRATRN_utc = WLRATRN;
 /* line 2125: */
 /* line 2126: */
YLRATRN = XLRATRN_utc.U ;
switch ( YLRATRN.mode )
{ 
case 17: /* REF STRUCT(MODE222,MODE199)  */
ZLRATRN_u = (YLRATRN.data.mode17);
AMRATRN = ZLRATRN_u;
break;
default: 
AMRATRN = BMRATRN;
break;
} 
CMRATRN_utr = AMRATRN;
 /* line 2127: */
DMRATRN_lwb = XOMATRN_int((*(&((&(CMRATRN_utr->Range))->Lwb))));
 /* line 2128: */
EMRATRN_upb = XOMATRN_int((*(&((&(CMRATRN_utr->Range))->Upb))));
 /* line 2129: */
FMRATRN_size = ((EMRATRN_upb-DMRATRN_lwb)+1);
 /* line 2130: */
SSPATRN_joinup_trim(Joinup, A68_FALSE, DMRATRN_lwb, EMRATRN_upb);
 /* line 2131: */
 /* line 2132: */
if ( A_CALLPROC(NL(DYQATRN_only_const),((*(&(CMRATRN_utr->Unit)))),((*(&(CMRATRN_utr->Unit))),(NL(DYQATRN_only_const)).nonlocals)) )
{ 
 /* line 2133: */
XHRATRN_make_multiple( (*(&(CMRATRN_utr->Unit))), Close, &GMRATRN );
HMRATRN = GMRATRN ;
switch ( HMRATRN.mode )
{ 
case 21: /* REF STRUCT(MODE222,REF MODE237)  */
IMRATRN_us = (HMRATRN.data.mode21);
LMRATRN = A_CALLPROC(NL(ZJRATRN_trim_ustr),(IMRATRN_us, DMRATRN_lwb, FMRATRN_size),(IMRATRN_us, DMRATRN_lwb, FMRATRN_size,(NL(ZJRATRN_trim_ustr)).nonlocals)) ;
JMRATRN.U = A_UNITE(KMRATRN,mode21,21,LMRATRN);
 /* line 2134: */
JMRATRN.C = A68_TRUE;
MMRATRN = JMRATRN;
break;
case 20: /* REF STRUCT(MODE184,MODE222)  */
NMRATRN_ur = (HMRATRN.data.mode20);
RMRATRN = NNMATRN_makefint(FMRATRN_size) ;
PMRATRN.Size = A_UNITE(QMRATRN,mode1,1,RMRATRN);
PMRATRN.Elem = (*(&(NMRATRN_ur->Elem)));
SMRATRN = A_HEAP(A68_236 ) ;
(*SMRATRN) = PMRATRN ;
OMRATRN.U = A_UNITE(TMRATRN,mode20,20,SMRATRN);
 /* line 2135: */
OMRATRN.C = A68_TRUE;
MMRATRN = OMRATRN;
break;
case 33: /* REF STRUCT(MODE184,MODE222)  */
UMRATRN_ug = (HMRATRN.data.mode33);
YMRATRN = NNMATRN_makefint(FMRATRN_size) ;
WMRATRN.Size = A_UNITE(XMRATRN,mode1,1,YMRATRN);
WMRATRN.Char = (*(&(UMRATRN_ug->Char)));
 /* line 2136: */
ZMRATRN = A_HEAP(A68_249 ) ;
(*ZMRATRN) = WMRATRN ;
VMRATRN.U = A_UNITE(ANRATRN,mode33,33,ZMRATRN);
 /* line 2137: */
VMRATRN.C = A68_TRUE;
MMRATRN = VMRATRN;
break;
case 5: /* REF STRUCT(INT,REF MODE32)  */
BNRATRN_cq = (HMRATRN.data.mode5);
 /* line 2138: */
DNRATRN.Typeno = (*(&(BNRATRN_cq->Typeno)));
ENRATRN = (*(&(BNRATRN_cq->String))) ;
DNRATRN.String = A_VTRIM(FNRATRN,(ENRATRN),A_VTSCRIPT(&(FNRATRN.upb),(ENRATRN).upb,DMRATRN_lwb,EMRATRN_upb));
GNRATRN = A_HEAP(A68_223 ) ;
(*GNRATRN) = DNRATRN ;
CNRATRN.U = A_UNITE(HNRATRN,mode5,5,GNRATRN);
 /* line 2139: */
 /* line 2140: */
CNRATRN.C = A68_TRUE;
MMRATRN = CNRATRN;
break;
default: 
 /* line 2141: */
 /* line 2142: */
MMRATRN = XLRATRN_utc;
break;
} 
} 
else
{ 
 /* line 2143: */
MMRATRN = XLRATRN_utc;
} 
} 
A_PROC_EXIT(utrim_expand);
*ReturnedValue = (MMRATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  NNRATRN_ustr_conc(A68_INT  Sort, A68_222  Left, A68_222  Right, A68_472  Close, A68_390  *ReturnedValue, void *NonLocals)
#define NL(x) (((ONRATRN_ustr_conc *)NonLocals)->x)
{ 
A68_237 * PNRATRN_new;
A68_237 ** QNRATRN_next;
A68_BOOL  RNRATRN;  /* optbool result */
A68_BOOL  SNRATRN_flatten;
A68_222  TNRATRN_u;
A68_INT  UNRATRN;  /* loop control */
A68_222  VNRATRN;  /* avoid structure result */
A68_222  WNRATRN;  /* united object - for case conformity */
A68_236 * XNRATRN_ur;
A68_INT  YNRATRN;  /* to part of loop */
A68_INT  ZNRATRN;  /* loop control */
A68_237  AORATRN;  /* collateral clause result */
A68_237 * BORATRN;  /* YIELD */
A68_237 * CORATRN_us;
A68_237 * DORATRN_uss;
A68_237  EORATRN;  /* collateral clause result */
A68_237 * FORATRN;  /* YIELD */
A68_237  IORATRN;  /* collateral clause result */
A68_237 * JORATRN;  /* YIELD */
A68_BOOL  KORATRN;  /* optbool result */
A68_390  LORATRN;  /* collateral clause result */
A68_222  MORATRN;  /* OPERATORS - mode -> union mode */
A68_390  NORATRN;  /* clause result */
A_PROC_ENTRY(ustr_conc);
 /* line 2146: */
{ 
PNRATRN_new = IAAATRN_nilustr;
 /* line 2147: */
QNRATRN_next = (&PNRATRN_new);
 /* line 2148: */
RNRATRN = (Sort==TIAATRN_flattenleft);
if ( ! RNRATRN )
{RNRATRN = (Sort==VIAATRN_flattenboth);
}
SNRATRN_flatten = RNRATRN;
 /* line 2149: */
TNRATRN_u = Left;
 /* line 2150: */
 /* line 2151: */
for ( UNRATRN = 1;
UNRATRN <= 2;
UNRATRN += 1 )
{ 
 /* line 2152: */
if ( SNRATRN_flatten )
{ 
XHRATRN_make_multiple( TNRATRN_u, Close, &VNRATRN );
TNRATRN_u = VNRATRN;
 /* line 2153: */
 /* line 2154: */
WNRATRN = TNRATRN_u ;
switch ( WNRATRN.mode )
{ 
case 20: /* REF STRUCT(MODE184,MODE222)  */
XNRATRN_ur = (WNRATRN.data.mode20);
 /* line 2155: */
 /* line 2156: */
YNRATRN = XOMATRN_int((*(&(XNRATRN_ur->Size))));
for ( ZNRATRN = 1;
ZNRATRN <= YNRATRN;
ZNRATRN += 1 )
{ 
AORATRN.Elem = (*(&(XNRATRN_ur->Elem)));
AORATRN.Rest = IAAATRN_nilustr;
BORATRN = A_HEAP(A68_237 ) ;
(*BORATRN) = AORATRN ;
(*QNRATRN_next) = BORATRN;
 /* line 2157: */
 /* line 2158: */
QNRATRN_next = (&((*QNRATRN_next)->Rest));
}
 /* line 2159: */
break;
case 21: /* REF STRUCT(MODE222,REF MODE237)  */
CORATRN_us = (WNRATRN.data.mode21);
 /* line 2160: */
{ 
DORATRN_uss = CORATRN_us;
 /* line 2161: */
for ( ;; )
{ 
 /* line 2162: */
if ( !((DORATRN_uss!=IAAATRN_nilustr)) ) break;
EORATRN.Elem = (*(&(DORATRN_uss->Elem)));
EORATRN.Rest = IAAATRN_nilustr;
FORATRN = A_HEAP(A68_237 ) ;
(*FORATRN) = EORATRN ;
(*QNRATRN_next) = FORATRN;
 /* line 2163: */
DORATRN_uss = (*(&(DORATRN_uss->Rest)));
 /* line 2164: */
 /* line 2165: */
QNRATRN_next = (&((*QNRATRN_next)->Rest));
}
 /* line 2166: */
 /* line 2167: */
} 
break;
default: 
 /* line 2168: */
 /* line 2169: */
NKDAOST_sysfault(HORATRN);
break;
} 
} 
else
{ 
IORATRN.Elem = TNRATRN_u;
IORATRN.Rest = IAAATRN_nilustr;
JORATRN = A_HEAP(A68_237 ) ;
(*JORATRN) = IORATRN ;
(*QNRATRN_next) = JORATRN;
 /* line 2170: */
 /* line 2171: */
QNRATRN_next = (&((*QNRATRN_next)->Rest));
} 
 /* line 2172: */
KORATRN = (Sort==UIAATRN_flattenright);
if ( ! KORATRN )
{KORATRN = (Sort==VIAATRN_flattenboth);
}
SNRATRN_flatten = KORATRN;
 /* line 2173: */
 /* line 2174: */
TNRATRN_u = Right;
}
 /* line 2175: */
LORATRN.U = A_UNITE(MORATRN,mode21,21,PNRATRN_new);
 /* line 2176: */
LORATRN.C = A68_TRUE;
NORATRN = LORATRN;
} 
A_PROC_EXIT(ustr_conc);
*ReturnedValue = (NORATRN);
return;
} 
#undef NL

A_STATIC A68_BOOL  QORATRN_string_match(A68_222  Left, A68_222  Right)
{ 
A68_222  RORATRN;  /* united object - for case conformity */
A68_222  SORATRN;  /* united object - for case conformity */
A68_BOOL  TORATRN;  /* clause result */
A68_222  UORATRN;  /* united object - for case conformity */
A68_222  VORATRN;  /* united object - for case conformity */
A_PROC_ENTRY(string_match);
 /* line 2179: */
 /* line 2180: */
RORATRN = Left ;
switch ( RORATRN.mode )
{ 
case 2: /* REF STRUCT(INT,INT)  */
SORATRN = Right ;
switch ( SORATRN.mode )
{ 
case 2: /* REF STRUCT(INT,INT)  */
TORATRN = A68_TRUE;
break;
default: 
 /* line 2181: */
TORATRN = A68_FALSE;
break;
} 
break;
case 7: /* REF STRUCT(MODE200)  */
UORATRN = Right ;
switch ( UORATRN.mode )
{ 
case 7: /* REF STRUCT(MODE200)  */
TORATRN = A68_TRUE;
break;
default: 
 /* line 2182: */
TORATRN = A68_FALSE;
break;
} 
break;
case 4: /* REF STRUCT(MODE200)  */
VORATRN = Right ;
switch ( VORATRN.mode )
{ 
case 4: /* REF STRUCT(MODE200)  */
TORATRN = A68_TRUE;
break;
default: 
 /* line 2183: */
TORATRN = A68_FALSE;
break;
} 
break;
default: 
 /* line 2184: */
TORATRN = A68_FALSE;
break;
} 
A_PROC_EXIT(string_match);
return( TORATRN );
} 
#undef NL

A_STATIC A68_VOID  CPRATRN_string_conc(A68_INT  Sort, A68_222  L, A68_222  R, A68_472  Close, A68_471 * Diag, A68_390  *ReturnedValue, void *NonLocals)
#define NL(x) (((DPRATRN_string_conc *)NonLocals)->x)
{ 
A68_222  EPRATRN_left;
A68_222  FPRATRN_right;
A68_222  GPRATRN_primleft;
A68_222  HPRATRN_primright;
A68_INT  IPRATRN_ind;
A68_BOOL  JPRATRN;  /* optbool result */
A68_BOOL  KPRATRN_flatten;
A68_222  LPRATRN;  /* avoid structure result */
A68_222  MPRATRN_u;
A68_INT  NPRATRN_i;
A68_222  OPRATRN;  /* united object - for case conformity */
A68_249 * PPRATRN_us;
A68_222  QPRATRN;  /* clause result */
A68_223 * RPRATRN_cq;
A68_217  SPRATRN;  /* collateral clause result */
A68_217 * TPRATRN;  /* YIELD */
A68_222  UPRATRN;  /* OPERATORS - mode -> union mode */
A68_222  XPRATRN;  /* OPERATORS - mode -> union mode */
A68_222  YPRATRN_prim;
A68_BOOL  ZPRATRN;  /* optbool result */
A68_222  AQRATRN;  /* avoid structure result */
A68_390  DQRATRN;  /* collateral clause result */
A68_222  EQRATRN;  /* OPERATORS - mode -> union mode */
A68_390  FQRATRN;  /* clause result */
A68_222  GQRATRN;  /* united object - for case conformity */
A68_217 * HQRATRN_cp;
A68_33  JQRATRN_generator;   /* proc value of non-global proc */
A68_32  OQRATRN;  /* avoid structure result */
A68_32  PQRATRN_chars;
A68_BOOL  QQRATRN;  /* optbool result */
A68_INT  RQRATRN;  /* loop control */
A68_222  SQRATRN;  /* united object - for case conformity */
A68_249 * TQRATRN_uu;
A68_222  UQRATRN;  /* united object - for case conformity */
A68_217 * VQRATRN_cp;
A68_INT * WQRATRN_c;
A68_32  XQRATRN;  /* OPERATORS - trim index */
A68_32  YQRATRN;  /* forall yield */
A68_INT  ZQRATRN;  /* forall loop counter */
A68_223 * CRRATRN_cc;
A68_32  DRRATRN;  /* OPERATORS - trim index */
A68_32  ERRATRN;  /* YIELD */
A68_32  FRRATRN;  /* OPERATORS - assign op */
A68_222  IRRATRN;  /* united object - for case conformity */
A68_217 * JRRATRN_p;
A68_INT  KRRATRN;  /* YIELD */
A68_INT * LRRATRN;  /* YIELD */
A68_BOOL  ORRATRN;  /* optbool result */
A68_390  PRRATRN;  /* collateral clause result */
A68_223  QRRATRN;  /* collateral clause result */
A68_223 * RRRATRN;  /* YIELD */
A68_222  SRRATRN;  /* OPERATORS - mode -> union mode */
A68_390  TRRATRN;  /* collateral clause result */
A68_249  URRATRN;  /* collateral clause result */
A68_184  VRRATRN;  /* OPERATORS - mode -> union mode */
A68_185 * WRRATRN;  /* YIELD */
A68_249 * XRRATRN;  /* YIELD */
A68_222  YRRATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(string_conc);
 /* line 2187: */
{ 
EPRATRN_left = L;
FPRATRN_right = R;
 /* line 2188: */
 /* line 2189: */
IPRATRN_ind = 0;
 /* line 2190: */
JPRATRN = (Sort==TIAATRN_flattenleft);
if ( ! JPRATRN )
{JPRATRN = (Sort==VIAATRN_flattenboth);
}
KPRATRN_flatten = JPRATRN;
 /* line 2191: */
if ( KPRATRN_flatten )
{ 
XHRATRN_make_multiple( EPRATRN_left, Close, &LPRATRN );
EPRATRN_left = LPRATRN;
} 
 /* line 2192: */
MPRATRN_u = EPRATRN_left;
 /* line 2193: */
 /* line 2194: */
for ( NPRATRN_i = 1;
NPRATRN_i <= 2;
NPRATRN_i += 1 )
{ 
 /* line 2195: */
 /* line 2196: */
if ( KPRATRN_flatten )
{ 
 /* line 2197: */
OPRATRN = MPRATRN_u ;
switch ( OPRATRN.mode )
{ 
case 33: /* REF STRUCT(MODE184,MODE222)  */
PPRATRN_us = (OPRATRN.data.mode33);
{ 
IPRATRN_ind+=XOMATRN_int((*(&(PPRATRN_us->Size))));
 /* line 2198: */
QPRATRN = (*(&(PPRATRN_us->Char)));
} 
break;
case 5: /* REF STRUCT(INT,REF MODE32)  */
RPRATRN_cq = (OPRATRN.data.mode5);
 /* line 2199: */
{ 
IPRATRN_ind+=(*(&(RPRATRN_cq->String))).upb;
 /* line 2200: */
SPRATRN.Typeno = (*(&(RPRATRN_cq->Typeno)));
 /* line 2201: */
SPRATRN.Primno = 0;
 /* line 2202: */
TPRATRN = A_HEAP(A68_217 ) ;
(*TPRATRN) = SPRATRN ;
QPRATRN = A_UNITE(UPRATRN,mode2,2,TPRATRN);
} 
break;
default: 
NKDAOST_sysfault(WPRATRN);
 /* line 2203: */
 /* line 2204: */
QPRATRN = A_UNITE(XPRATRN,mode34,34,(&FIAATRN_unull));
break;
} 
} 
else
{ 
IPRATRN_ind+=1;
 /* line 2205: */
QPRATRN = MPRATRN_u;
} 
YPRATRN_prim = QPRATRN;
 /* line 2206: */
if ( (NPRATRN_i==1) )
{ 
GPRATRN_primleft = YPRATRN_prim;
} 
else
{ 
HPRATRN_primright = YPRATRN_prim;
} 
 /* line 2207: */
ZPRATRN = (Sort==UIAATRN_flattenright);
if ( ! ZPRATRN )
{ZPRATRN = (Sort==VIAATRN_flattenboth);
}
KPRATRN_flatten = ZPRATRN;
 /* line 2208: */
if ( KPRATRN_flatten )
{ 
XHRATRN_make_multiple( FPRATRN_right, Close, &AQRATRN );
FPRATRN_right = AQRATRN;
} 
 /* line 2209: */
 /* line 2210: */
MPRATRN_u = FPRATRN_right;
}
 /* line 2211: */
 /* line 2212: */
if ( !QORATRN_string_match(GPRATRN_primleft, HPRATRN_primright) )
{ 
CNPATRN_fpopen = EPRATRN_left;
DNPATRN_fpclose = FPRATRN_right;
 /* line 2213: */
INPATRN_faultp(CQRATRN, Close, Diag);
 /* line 2214: */
DQRATRN.U = A_UNITE(EQRATRN,mode34,34,(&FIAATRN_unull));
 /* line 2215: */
 /* line 2216: */
DQRATRN.C = A68_FALSE;
FQRATRN = DQRATRN;
} 
else
{ 
 /* line 2217: */
GQRATRN = GPRATRN_primleft ;
switch ( GQRATRN.mode )
{ 
case 2: /* REF STRUCT(INT,INT)  */
HQRATRN_cp = (GQRATRN.data.mode2);
 /* line 2218: */
{ 
A_CLOSURE( JQRATRN_generator, KQRATRN_generator, LQRATRN_generator );
(( LQRATRN_generator * ) ( JQRATRN_generator.nonlocals )) -> IPRATRN_ind = (&IPRATRN_ind);
A_CALLPROC(JQRATRN_generator,(A68_FALSE, &OQRATRN),(A68_FALSE, &OQRATRN,(JQRATRN_generator).nonlocals));
PQRATRN_chars = OQRATRN;
 /* line 2219: */
MPRATRN_u = EPRATRN_left;
 /* line 2220: */
QQRATRN = (Sort==TIAATRN_flattenleft);
if ( ! QQRATRN )
{QQRATRN = (Sort==VIAATRN_flattenboth);
}
KPRATRN_flatten = QQRATRN;
 /* line 2221: */
IPRATRN_ind = 0;
 /* line 2222: */
 /* line 2223: */
for ( RQRATRN = 1;
RQRATRN <= 2;
RQRATRN += 1 )
{ 
 /* line 2224: */
if ( KPRATRN_flatten )
{ 
 /* line 2225: */
SQRATRN = MPRATRN_u ;
switch ( SQRATRN.mode )
{ 
case 33: /* REF STRUCT(MODE184,MODE222)  */
TQRATRN_uu = (SQRATRN.data.mode33);
 /* line 2226: */
 /* line 2227: */
UQRATRN = (*(&(TQRATRN_uu->Char))) ;
switch ( UQRATRN.mode )
{ 
case 2: /* REF STRUCT(INT,INT)  */
VQRATRN_cp = (UQRATRN.data.mode2);
 /* line 2228: */
 /* line 2229: */
 /* line 2230: */
YQRATRN = A_VTRIM(XQRATRN,(PQRATRN_chars),A_VTSCRIPT(&(XQRATRN.upb),(PQRATRN_chars).upb,(IPRATRN_ind+1),(IPRATRN_ind+=XOMATRN_int((*(&(TQRATRN_uu->Size))))))) ;
ZQRATRN = YQRATRN.upb -1;
WQRATRN_c = YQRATRN.data;
for (;ZQRATRN-- >= 0;
(WQRATRN_c++
) )
{
(*WQRATRN_c) = (*(&(VQRATRN_cp->Primno)));
}
 /* line 2231: */
break;
default: 
 /* line 2232: */
 /* line 2233: */
NKDAOST_sysfault(BRRATRN);
break;
} 
break;
case 5: /* REF STRUCT(INT,REF MODE32)  */
CRRATRN_cc = (SQRATRN.data.mode5);
 /* line 2234: */
 /* line 2235: */
ERRATRN = A_VTRIM(DRRATRN,(PQRATRN_chars),A_VTSCRIPT(&(DRRATRN.upb),(PQRATRN_chars).upb,(IPRATRN_ind+1),(IPRATRN_ind+=(*(&(CRRATRN_cc->String))).upb))) ;
FRRATRN = (*(&(CRRATRN_cc->String))) ;
A_VASSIGN2(FRRATRN,ERRATRN,A68_INT );
break;
default: 
 /* line 2236: */
 /* line 2237: */
NKDAOST_sysfault(HRRATRN);
break;
} 
} 
else
{ 
 /* line 2238: */
IRRATRN = MPRATRN_u ;
switch ( IRRATRN.mode )
{ 
case 2: /* REF STRUCT(INT,INT)  */
JRRATRN_p = (IRRATRN.data.mode2);
 /* line 2239: */
KRRATRN = IPRATRN_ind+=1 ;
LRRATRN = (&A_VINDEX(PQRATRN_chars,KRRATRN)) ;
(*LRRATRN) = (*(&(JRRATRN_p->Primno)));
break;
default: 
 /* line 2240: */
 /* line 2241: */
NKDAOST_sysfault(NRRATRN);
break;
} 
} 
 /* line 2242: */
ORRATRN = (Sort==UIAATRN_flattenright);
if ( ! ORRATRN )
{ORRATRN = (Sort==VIAATRN_flattenboth);
}
KPRATRN_flatten = ORRATRN;
 /* line 2243: */
 /* line 2244: */
MPRATRN_u = FPRATRN_right;
}
 /* line 2245: */
QRRATRN.Typeno = (*(&(HQRATRN_cp->Typeno)));
QRRATRN.String = PQRATRN_chars;
RRRATRN = A_HEAP(A68_223 ) ;
(*RRRATRN) = QRRATRN ;
PRRATRN.U = A_UNITE(SRRATRN,mode5,5,RRRATRN);
 /* line 2246: */
 /* line 2247: */
PRRATRN.C = A68_TRUE;
FQRATRN = PRRATRN;
} 
break;
default: 
WRRATRN = NNMATRN_makefint(IPRATRN_ind) ;
URRATRN.Size = A_UNITE(VRRATRN,mode1,1,WRRATRN);
URRATRN.Char = GPRATRN_primleft;
XRRATRN = A_HEAP(A68_249 ) ;
(*XRRATRN) = URRATRN ;
TRRATRN.U = A_UNITE(YRRATRN,mode33,33,XRRATRN);
 /* line 2248: */
 /* line 2249: */
 /* line 2250: */
TRRATRN.C = A68_TRUE;
FQRATRN = TRRATRN;
break;
} 
} 
} 
A_PROC_EXIT(string_conc);
*ReturnedValue = (FQRATRN);
return;
} 
#undef NL
 /* line 2253: */

A_STATIC A68_VOID  FSRATRN_uconc_expand(A68_238 * Uc, A68_414 * Tprocs, A68_472  Close, A68_471 * Diag, A68_510 ** Joinup, A68_390  *ReturnedValue, void *NonLocals)
#define NL(x) (((GSRATRN_uconc_expand *)NonLocals)->x)
{ 
A68_433  HSRATRN;  /* CALL */
A68_390  ISRATRN;  /* avoid structure result */
A68_390  JSRATRN_luc;
A68_510 * KSRATRN_ljoinup;
A68_433  LSRATRN;  /* CALL */
A68_390  MSRATRN;  /* avoid structure result */
A68_390  NSRATRN_ruc;
A68_222  OSRATRN;  /* OPERATORS - mode -> union mode */
A68_390  PSRATRN;  /* clause result */
A68_390  QSRATRN;  /* avoid structure result */
A68_390  RSRATRN;  /* avoid structure result */
A68_BOOL  SSRATRN;  /* optbool result */
A68_390  TSRATRN;  /* collateral clause result */
A68_238  USRATRN;  /* collateral clause result */
A68_238 * VSRATRN;  /* YIELD */
A68_222  WSRATRN;  /* OPERATORS - mode -> union mode */
A68_390  XSRATRN;  /* collateral clause result */
A68_222  YSRATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(uconc_expand);
 /* line 2254: */
 /* line 2255: */
{ 
HSRATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(HSRATRN,((*(&(Uc->Left))), Tprocs, &ISRATRN),((*(&(Uc->Left))), Tprocs, &ISRATRN,(HSRATRN).nonlocals));
JSRATRN_luc = ISRATRN;
 /* line 2256: */
KSRATRN_ljoinup = (*Joinup);
 /* line 2257: */
(*Joinup) = COPATRN_nulljoinup;
 /* line 2258: */
LSRATRN = (*(&(Tprocs->Unit))) ;
A_CALLPROC(LSRATRN,((*(&(Uc->Right))), Tprocs, &MSRATRN),((*(&(Uc->Right))), Tprocs, &MSRATRN,(LSRATRN).nonlocals));
NSRATRN_ruc = MSRATRN;
 /* line 2259: */
 /* line 2260: */
if ( A_CALLPROC(NL(DYQATRN_only_const),(A_UNITE(OSRATRN,mode22,22,Uc)),(A_UNITE(OSRATRN,mode22,22,Uc),(NL(DYQATRN_only_const)).nonlocals)) )
{ 
(*Joinup) = COPATRN_nulljoinup;
 /* line 2261: */
 /* line 2262: */
if ( (*(&(Uc->String))) )
{ 
 /* line 2263: */
A_CALLPROC(NL(BPRATRN_string_conc),((*(&(Uc->Sort))), JSRATRN_luc.U, NSRATRN_ruc.U, Close, Diag, &QSRATRN),((*(&(Uc->Sort))), JSRATRN_luc.U, NSRATRN_ruc.U, Close, Diag, &QSRATRN,(NL(BPRATRN_string_conc)).nonlocals));
PSRATRN = QSRATRN;
} 
else
{ 
 /* line 2264: */
 /* line 2265: */
A_CALLPROC(NL(MNRATRN_ustr_conc),((*(&(Uc->Sort))), JSRATRN_luc.U, NSRATRN_ruc.U, Close, &RSRATRN),((*(&(Uc->Sort))), JSRATRN_luc.U, NSRATRN_ruc.U, Close, &RSRATRN,(NL(MNRATRN_ustr_conc)).nonlocals));
PSRATRN = RSRATRN;
} 
} 
else
{ 
ITPATRN_uconc_joinup((*(&(Uc->Sort))), KSRATRN_ljoinup, Joinup);
 /* line 2266: */
 /* line 2267: */
SSRATRN = JSRATRN_luc.C;
if ( ! SSRATRN )
{SSRATRN = NSRATRN_ruc.C;
}
if ( SSRATRN )
{ 
USRATRN.String = (*(&(Uc->String)));
USRATRN.Sort = (*(&(Uc->Sort)));
USRATRN.Left = JSRATRN_luc.U;
USRATRN.Right = NSRATRN_ruc.U;
 /* line 2268: */
VSRATRN = A_HEAP(A68_238 ) ;
(*VSRATRN) = USRATRN ;
TSRATRN.U = A_UNITE(WSRATRN,mode22,22,VSRATRN);
 /* line 2269: */
TSRATRN.C = A68_TRUE;
PSRATRN = TSRATRN;
} 
else
{ 
XSRATRN.U = A_UNITE(YSRATRN,mode22,22,Uc);
 /* line 2270: */
 /* line 2271: */
 /* line 2272: */
XSRATRN.C = A68_FALSE;
PSRATRN = XSRATRN;
} 
} 
} 
A_PROC_EXIT(uconc_expand);
*ReturnedValue = (PSRATRN);
return;
} 
#undef NL
 /* line 2276: */

A_STATIC A68_INT  ETRATRN_add_outerfn(A68_INT  Oldclosureno, A68_412  Ofnc, A68_264  Params, A68_BOOL  Specchanged, void *NonLocals)
#define NL(x) (((FTRATRN_add_outerfn *)NonLocals)->x)
{ 
A68_INT  GTRATRN_hash;
A68_576  HTRATRN;  /* == */
A68_608  JTRATRN_generator;   /* proc value of non-global proc */
A68_576  OTRATRN;  /* avoid structure result */
A68_576 * PTRATRN;  /* YIELD */
A68_575 ** QTRATRN_h;
A68_576  RTRATRN;  /* forall yield */
A68_INT  STRATRN;  /* forall loop counter */
A68_INT  TTRATRN_newclosureno;
A68_575  UTRATRN;  /* collateral clause result */
A68_576  VTRATRN;  /* OPERATORS - simple index */
A68_576  WTRATRN;  /* OPERATORS - simple index */
A68_575 * XTRATRN;  /* YIELD */
A68_575 ** YTRATRN;  /* YIELD */
A68_INT  ZTRATRN;  /* clause result */
A_PROC_ENTRY(add_outerfn);
 /* line 2277: */
 /* line 2278: */
{ 
A_CALLPROC(NL(HDRATRN_update_closure),(),((NL(HDRATRN_update_closure)).nonlocals));
 /* line 2279: */
KNCATRN_insert_outer(Ofnc.O, (*NL(FDRATRN_newptr)), (*NL(EDRATRN_newclosure)), NL(Msg));
 /* line 2280: */
(*NL(FDRATRN_newptr)) = (&((**NL(FDRATRN_newptr))->Rest));
 /* line 2282: */
GTRATRN_hash = FWQATRN_macparams_hash(Params);
 /* line 2283: */
 /* line 2284: */
HTRATRN = (*(&A_VINDEX(NL(SDRATRN_hashtable),Oldclosureno))) ;
if ( A_VSTRUCTCOMP(HTRATRN,TWQATRN_nilvechashlist) )
{ 
A_CLOSURE( JTRATRN_generator, KTRATRN_generator, LTRATRN_generator );
A_CALLPROC(JTRATRN_generator,(A68_FALSE, &OTRATRN),(A68_FALSE, &OTRATRN,(JTRATRN_generator).nonlocals));
PTRATRN = (&A_VINDEX(NL(SDRATRN_hashtable),Oldclosureno)) ;
(*PTRATRN) = OTRATRN;
 /* line 2285: */
RTRATRN = (*(&A_VINDEX(NL(SDRATRN_hashtable),Oldclosureno))) ;
STRATRN = RTRATRN.upb -1;
QTRATRN_h = RTRATRN.data;
for (;STRATRN-- >= 0;
(QTRATRN_h++
) )
{
(*QTRATRN_h) = RWQATRN_nilhashlist;
}
 /* line 2286: */
} 
 /* line 2287: */
TTRATRN_newclosureno = Ofnc.O.Closureno;
 /* line 2288: */
 /* line 2289: */
UTRATRN.Params = Params;
UTRATRN.Index = TTRATRN_newclosureno;
UTRATRN.Specchanged = Specchanged;
VTRATRN = (*(&A_VINDEX(NL(SDRATRN_hashtable),Oldclosureno))) ;
UTRATRN.Rest = (*(&A_VINDEX(VTRATRN,GTRATRN_hash)));
WTRATRN = (*(&A_VINDEX(NL(SDRATRN_hashtable),Oldclosureno))) ;
XTRATRN = A_HEAP(A68_575 ) ;
(*XTRATRN) = UTRATRN ;
YTRATRN = (&A_VINDEX(WTRATRN,GTRATRN_hash)) ;
(*YTRATRN) = XTRATRN;
 /* line 2290: */
 /* line 2291: */
ZTRATRN = TTRATRN_newclosureno;
} 
A_PROC_EXIT(add_outerfn);
return( ZTRATRN );
} 
#undef NL
 /* line 2296: */
 /* line 2297: */

A_STATIC A68_VOID  IURATRN_outerfn_expand(A68_307  Ofn, A68_414 * Tprocs, A68_392  Params, A68_584 * Mstable, A68_301 * Paramenv, A68_BOOL * Iochange, A68_470 * Monitors, A68_412  *ReturnedValue, void *NonLocals)
#define NL(x) (((JURATRN_outerfn_expand *)NonLocals)->x)
{ 
A68_301 * KURATRN_oenv;
A68_33  MURATRN_generator;   /* proc value of non-global proc */
A68_32  SURATRN;  /* avoid structure result */
A68_32  RURATRN_rdecs;
A68_INT * TURATRN_r;
A68_INT  UURATRN;  /* forall loop counter */
A68_611  WURATRN_generator;   /* proc value of non-global proc */
A68_610  CVRATRN;  /* avoid structure result */
A68_610  BVRATRN_macattrdecls;
A68_578 ** DVRATRN_elem;
A68_INT  EVRATRN;  /* forall loop counter */
A68_611  GVRATRN_generator;   /* proc value of non-global proc */
A68_610  MVRATRN;  /* avoid structure result */
A68_610  LVRATRN_mactypedecls;
A68_578 ** NVRATRN_elem;
A68_INT  OVRATRN;  /* forall loop counter */
A68_611  QVRATRN_generator;   /* proc value of non-global proc */
A68_610  WVRATRN;  /* avoid structure result */
A68_610  VVRATRN_macfndecls;
A68_578 ** XVRATRN_elem;
A68_INT  YVRATRN;  /* forall loop counter */
A68_613  AWRATRN_generator;   /* proc value of non-global proc */
A68_612  GWRATRN;  /* avoid structure result */
A68_612  FWRATRN_macpartable;
A68_264 * HWRATRN_mp;
A68_INT  IWRATRN;  /* forall loop counter */
A68_614  KWRATRN_generator;   /* proc value of non-global proc */
A68_581  PWRATRN;  /* avoid structure result */
A68_581  QWRATRN_mptable;
A68_BOOL  RWRATRN_envattrchanged;
A68_302 * SWRATRN_envattrs;
A68_INT  TWRATRN_envattrno;
A68_BOOL  UWRATRN_envintchanged;
A68_303 * VWRATRN_envints;
A68_INT  WWRATRN_envintno;
A68_BOOL  XWRATRN_envconstchanged;
A68_305 * YWRATRN_envconsts;
A68_INT  ZWRATRN_envconstno;
A68_BOOL  AXRATRN_envtypechanged;
A68_304 * BXRATRN_envtypes;
A68_INT  CXRATRN_envtypeno;
A68_BOOL  DXRATRN_envfnchanged;
A68_306 * EXRATRN_envfns;
A68_INT  FXRATRN_envfnno;
A68_301 * GXRATRN_newenv;
A68_301  HXRATRN;  /* collateral clause result */
A68_615  QXRATRN_fndec_expand;   /* proc value of non-global proc */
A68_630  GIVATRN_generator;   /* proc value of non-global proc */
A68_582  MIVATRN;  /* avoid structure result */
A68_582  LIVATRN_newenvattrnos;
A68_577 ** NIVATRN_attrnos;
A68_INT  OIVATRN;  /* forall loop counter */
A68_630  QIVATRN_generator;   /* proc value of non-global proc */
A68_582  WIVATRN;  /* avoid structure result */
A68_582  VIVATRN_newenvtypenos;
A68_577 ** XIVATRN_typenos;
A68_INT  YIVATRN;  /* forall loop counter */
A68_630  AJVATRN_generator;   /* proc value of non-global proc */
A68_582  GJVATRN;  /* avoid structure result */
A68_582  FJVATRN_newenvfnnos;
A68_577 ** HJVATRN_fnnos;
A68_INT  IJVATRN;  /* forall loop counter */
A68_298 * JJVATRN_fdec;
A68_580  KJVATRN;  /* collateral clause result */
A68_464  LJVATRN;  /* procedure value */
A68_465  MJVATRN;  /* procedure value */
A68_466  NJVATRN;  /* procedure value */
A68_467  OJVATRN;  /* procedure value */
A68_468  PJVATRN;  /* procedure value */
A68_580 * QJVATRN;  /* YIELD */
A68_411  RJVATRN;  /* avoid structure result */
A68_411  SJVATRN_fdecc;
A68_302 * TJVATRN_attrs;
A68_304 * UJVATRN_types;
A68_306 * VJVATRN_fns;
A68_BOOL  YJVATRN;  /* optbool result */
A68_632  AKVATRN_generator;   /* proc value of non-global proc */
A68_306  FKVATRN;  /* avoid structure result */
A68_INT  GKVATRN_newclosureno;
A68_182 * HKVATRN;  /* YIELD */
A68_182 ** IKVATRN;  /* YIELD */
A68_INT * JKVATRN;  /* YIELD */
A68_INT  KKVATRN;  /* YIELD */
A68_298 ** LKVATRN;  /* YIELD */
A68_303 * MKVATRN;  /* YIELD */
A68_303  NKVATRN;  /* OPERATORS - trim index */
A68_303  OKVATRN;  /* OPERATORS - trim index */
A68_303 * PKVATRN;  /* YIELD */
A68_305 * QKVATRN;  /* YIELD */
A68_305  RKVATRN;  /* OPERATORS - trim index */
A68_305  SKVATRN;  /* OPERATORS - trim index */
A68_305 * TKVATRN;  /* YIELD */
A68_637  VKVATRN_generator;   /* proc value of non-global proc */
A68_302  ALVATRN;  /* avoid structure result */
A68_302  BLVATRN;  /* OPERATORS - trim index */
A68_302  CLVATRN;  /* OPERATORS - assign op */
A68_302  DLVATRN;  /* OPERATORS - trim index */
A68_635  FLVATRN_generator;   /* proc value of non-global proc */
A68_304  KLVATRN;  /* avoid structure result */
A68_304  LLVATRN;  /* OPERATORS - trim index */
A68_304  MLVATRN;  /* OPERATORS - assign op */
A68_304  NLVATRN;  /* OPERATORS - trim index */
A68_632  PLVATRN_generator;   /* proc value of non-global proc */
A68_306  ULVATRN;  /* avoid structure result */
A68_306  VLVATRN;  /* OPERATORS - trim index */
A68_306  WLVATRN;  /* OPERATORS - assign op */
A68_306  XLVATRN;  /* OPERATORS - trim index */
A68_BOOL  YLVATRN;  /* optbool result */
A68_412  ZLVATRN;  /* collateral clause result */
A68_412  AMVATRN;  /* clause result */
A68_412  BMVATRN;  /* collateral clause result */
A_PROC_ENTRY(outerfn_expand);
 /* line 2298: */
 /* line 2299: */
{ 
KURATRN_oenv = Ofn.Environ;
 /* line 2300: */
A_CLOSURE( MURATRN_generator, NURATRN_generator, OURATRN_generator );
(( OURATRN_generator * ) ( MURATRN_generator.nonlocals )) -> KURATRN_oenv = KURATRN_oenv;
A_CALLPROC(MURATRN_generator,(A68_TRUE, &SURATRN),(A68_TRUE, &SURATRN,(MURATRN_generator).nonlocals));
RURATRN_rdecs = SURATRN;
 /* line 2301: */
UURATRN = RURATRN_rdecs.upb -1;
TURATRN_r = RURATRN_rdecs.data;
for (;UURATRN-- >= 0;
(TURATRN_r++
) )
{
(*TURATRN_r) = (-9999);
}
 /* line 2303: */
 /* line 2304: */
A_CLOSURE( WURATRN_generator, XURATRN_generator, YURATRN_generator );
(( YURATRN_generator * ) ( WURATRN_generator.nonlocals )) -> KURATRN_oenv = KURATRN_oenv;
A_CALLPROC(WURATRN_generator,(A68_FALSE, &CVRATRN),(A68_FALSE, &CVRATRN,(WURATRN_generator).nonlocals));
BVRATRN_macattrdecls = CVRATRN;
 /* line 2305: */
EVRATRN = BVRATRN_macattrdecls.upb -1;
DVRATRN_elem = BVRATRN_macattrdecls.data;
for (;EVRATRN-- >= 0;
(DVRATRN_elem++
) )
{
(*DVRATRN_elem) = VWQATRN_nildecslist;
}
 /* line 2307: */
 /* line 2308: */
A_CLOSURE( GVRATRN_generator, HVRATRN_generator, IVRATRN_generator );
(( IVRATRN_generator * ) ( GVRATRN_generator.nonlocals )) -> KURATRN_oenv = KURATRN_oenv;
A_CALLPROC(GVRATRN_generator,(A68_FALSE, &MVRATRN),(A68_FALSE, &MVRATRN,(GVRATRN_generator).nonlocals));
LVRATRN_mactypedecls = MVRATRN;
 /* line 2309: */
OVRATRN = LVRATRN_mactypedecls.upb -1;
NVRATRN_elem = LVRATRN_mactypedecls.data;
for (;OVRATRN-- >= 0;
(NVRATRN_elem++
) )
{
(*NVRATRN_elem) = VWQATRN_nildecslist;
}
 /* line 2311: */
 /* line 2312: */
A_CLOSURE( QVRATRN_generator, RVRATRN_generator, SVRATRN_generator );
(( SVRATRN_generator * ) ( QVRATRN_generator.nonlocals )) -> KURATRN_oenv = KURATRN_oenv;
A_CALLPROC(QVRATRN_generator,(A68_FALSE, &WVRATRN),(A68_FALSE, &WVRATRN,(QVRATRN_generator).nonlocals));
VVRATRN_macfndecls = WVRATRN;
 /* line 2313: */
YVRATRN = VVRATRN_macfndecls.upb -1;
XVRATRN_elem = VVRATRN_macfndecls.data;
for (;YVRATRN-- >= 0;
(XVRATRN_elem++
) )
{
(*XVRATRN_elem) = VWQATRN_nildecslist;
}
 /* line 2316: */
 /* line 2317: */
A_CLOSURE( AWRATRN_generator, BWRATRN_generator, CWRATRN_generator );
(( CWRATRN_generator * ) ( AWRATRN_generator.nonlocals )) -> KURATRN_oenv = KURATRN_oenv;
A_CALLPROC(AWRATRN_generator,(A68_FALSE, &GWRATRN),(A68_FALSE, &GWRATRN,(AWRATRN_generator).nonlocals));
FWRATRN_macpartable = GWRATRN;
 /* line 2318: */
IWRATRN = FWRATRN_macpartable.upb -1;
HWRATRN_mp = FWRATRN_macpartable.data;
for (;IWRATRN-- >= 0;
(HWRATRN_mp++
) )
{
(*HWRATRN_mp) = ABAATRN_nilmacparams;
}
 /* line 2322: */
A_CLOSURE( KWRATRN_generator, LWRATRN_generator, MWRATRN_generator );
(( MWRATRN_generator * ) ( KWRATRN_generator.nonlocals )) -> KURATRN_oenv = KURATRN_oenv;
A_CALLPROC(KWRATRN_generator,(A68_FALSE, &PWRATRN),(A68_FALSE, &PWRATRN,(KWRATRN_generator).nonlocals));
QWRATRN_mptable = PWRATRN;
 /* line 2324: */
RWRATRN_envattrchanged = A68_FALSE;
 /* line 2325: */
SWRATRN_envattrs = (&(KURATRN_oenv->Attrs));
 /* line 2326: */
TWRATRN_envattrno = 0;
 /* line 2328: */
UWRATRN_envintchanged = A68_FALSE;
 /* line 2329: */
VWRATRN_envints = (&(KURATRN_oenv->Ints));
 /* line 2330: */
WWRATRN_envintno = 0;
 /* line 2332: */
XWRATRN_envconstchanged = A68_FALSE;
 /* line 2333: */
YWRATRN_envconsts = (&(KURATRN_oenv->Consts));
 /* line 2334: */
ZWRATRN_envconstno = 0;
 /* line 2336: */
AXRATRN_envtypechanged = A68_FALSE;
 /* line 2337: */
BXRATRN_envtypes = (&(KURATRN_oenv->Types));
 /* line 2338: */
CXRATRN_envtypeno = 0;
 /* line 2340: */
DXRATRN_envfnchanged = A68_FALSE;
 /* line 2341: */
EXRATRN_envfns = (&(KURATRN_oenv->Fns));
 /* line 2342: */
FXRATRN_envfnno = 1;
 /* line 2345: */
GXRATRN_newenv = (A_HEAP(A68_301 ));
HXRATRN.Attrs = (*SWRATRN_envattrs);
HXRATRN.Ints = (*VWRATRN_envints);
HXRATRN.Types = (*BXRATRN_envtypes);
HXRATRN.Consts = (*YWRATRN_envconsts);
HXRATRN.Fns = (*EXRATRN_envfns);
(*GXRATRN_newenv) = HXRATRN;
 /* line 2358: */
 /* line 2360: */
A_CLOSURE( QXRATRN_fndec_expand, RXRATRN_fndec_expand, SXRATRN_fndec_expand );
(( SXRATRN_fndec_expand * ) ( QXRATRN_fndec_expand.nonlocals )) -> GXRATRN_newenv = GXRATRN_newenv;
(( SXRATRN_fndec_expand * ) ( QXRATRN_fndec_expand.nonlocals )) -> Trace = NL(Trace);
(( SXRATRN_fndec_expand * ) ( QXRATRN_fndec_expand.nonlocals )) -> ADRATRN_flt = NL(ADRATRN_flt);
(( SXRATRN_fndec_expand * ) ( QXRATRN_fndec_expand.nonlocals )) -> SDRATRN_hashtable = NL(SDRATRN_hashtable);
(( SXRATRN_fndec_expand * ) ( QXRATRN_fndec_expand.nonlocals )) -> EDRATRN_newclosure = NL(EDRATRN_newclosure);
(( SXRATRN_fndec_expand * ) ( QXRATRN_fndec_expand.nonlocals )) -> Msg = NL(Msg);
(( SXRATRN_fndec_expand * ) ( QXRATRN_fndec_expand.nonlocals )) -> FWRATRN_macpartable = (&FWRATRN_macpartable);
(( SXRATRN_fndec_expand * ) ( QXRATRN_fndec_expand.nonlocals )) -> WWRATRN_envintno = (&WWRATRN_envintno);
(( SXRATRN_fndec_expand * ) ( QXRATRN_fndec_expand.nonlocals )) -> UWRATRN_envintchanged = (&UWRATRN_envintchanged);
(( SXRATRN_fndec_expand * ) ( QXRATRN_fndec_expand.nonlocals )) -> ZWRATRN_envconstno = (&ZWRATRN_envconstno);
(( SXRATRN_fndec_expand * ) ( QXRATRN_fndec_expand.nonlocals )) -> XWRATRN_envconstchanged = (&XWRATRN_envconstchanged);
(( SXRATRN_fndec_expand * ) ( QXRATRN_fndec_expand.nonlocals )) -> FXRATRN_envfnno = (&FXRATRN_envfnno);
(( SXRATRN_fndec_expand * ) ( QXRATRN_fndec_expand.nonlocals )) -> DXRATRN_envfnchanged = (&DXRATRN_envfnchanged);
(( SXRATRN_fndec_expand * ) ( QXRATRN_fndec_expand.nonlocals )) -> VVRATRN_macfndecls = (&VVRATRN_macfndecls);
(( SXRATRN_fndec_expand * ) ( QXRATRN_fndec_expand.nonlocals )) -> CXRATRN_envtypeno = (&CXRATRN_envtypeno);
(( SXRATRN_fndec_expand * ) ( QXRATRN_fndec_expand.nonlocals )) -> AXRATRN_envtypechanged = (&AXRATRN_envtypechanged);
(( SXRATRN_fndec_expand * ) ( QXRATRN_fndec_expand.nonlocals )) -> LVRATRN_mactypedecls = (&LVRATRN_mactypedecls);
(( SXRATRN_fndec_expand * ) ( QXRATRN_fndec_expand.nonlocals )) -> TWRATRN_envattrno = (&TWRATRN_envattrno);
(( SXRATRN_fndec_expand * ) ( QXRATRN_fndec_expand.nonlocals )) -> RWRATRN_envattrchanged = (&RWRATRN_envattrchanged);
(( SXRATRN_fndec_expand * ) ( QXRATRN_fndec_expand.nonlocals )) -> BVRATRN_macattrdecls = (&BVRATRN_macattrdecls);
(( SXRATRN_fndec_expand * ) ( QXRATRN_fndec_expand.nonlocals )) -> Oldclosure = NL(Oldclosure);
(( SXRATRN_fndec_expand * ) ( QXRATRN_fndec_expand.nonlocals )) -> MERATRN_fname_evaluate = NL(MERATRN_fname_evaluate);
(( SXRATRN_fndec_expand * ) ( QXRATRN_fndec_expand.nonlocals )) -> QXRATRN_fndec_expand = QXRATRN_fndec_expand;
(( SXRATRN_fndec_expand * ) ( QXRATRN_fndec_expand.nonlocals )) -> WXQATRN_contains_diagnostics = NL(WXQATRN_contains_diagnostics);
(( SXRATRN_fndec_expand * ) ( QXRATRN_fndec_expand.nonlocals )) -> WDRATRN_ints_consts = NL(WDRATRN_ints_consts);
(( SXRATRN_fndec_expand * ) ( QXRATRN_fndec_expand.nonlocals )) -> ESRATRN_uconc_expand = NL(ESRATRN_uconc_expand);
(( SXRATRN_fndec_expand * ) ( QXRATRN_fndec_expand.nonlocals )) -> KKRATRN_uindex_expand = NL(KKRATRN_uindex_expand);
(( SXRATRN_fndec_expand * ) ( QXRATRN_fndec_expand.nonlocals )) -> RLRATRN_utrim_expand = NL(RLRATRN_utrim_expand);
(( SXRATRN_fndec_expand * ) ( QXRATRN_fndec_expand.nonlocals )) -> HURATRN_outerfn_expand = NL(HURATRN_outerfn_expand);
(( SXRATRN_fndec_expand * ) ( QXRATRN_fndec_expand.nonlocals )) -> DTRATRN_add_outerfn = NL(DTRATRN_add_outerfn);
(( SXRATRN_fndec_expand * ) ( QXRATRN_fndec_expand.nonlocals )) -> Not_wanted = NL(Not_wanted);
 /* line 4572: */
A_CLOSURE( GIVATRN_generator, HIVATRN_generator, IIVATRN_generator );
(( IIVATRN_generator * ) ( GIVATRN_generator.nonlocals )) -> KURATRN_oenv = KURATRN_oenv;
A_CALLPROC(GIVATRN_generator,(A68_TRUE, &MIVATRN),(A68_TRUE, &MIVATRN,(GIVATRN_generator).nonlocals));
LIVATRN_newenvattrnos = MIVATRN;
 /* line 4573: */
OIVATRN = LIVATRN_newenvattrnos.upb -1;
NIVATRN_attrnos = LIVATRN_newenvattrnos.data;
for (;OIVATRN-- >= 0;
(NIVATRN_attrnos++
) )
{
(*NIVATRN_attrnos) = UWQATRN_niluselist;
}
 /* line 4575: */
A_CLOSURE( QIVATRN_generator, RIVATRN_generator, SIVATRN_generator );
(( SIVATRN_generator * ) ( QIVATRN_generator.nonlocals )) -> KURATRN_oenv = KURATRN_oenv;
A_CALLPROC(QIVATRN_generator,(A68_TRUE, &WIVATRN),(A68_TRUE, &WIVATRN,(QIVATRN_generator).nonlocals));
VIVATRN_newenvtypenos = WIVATRN;
 /* line 4576: */
YIVATRN = VIVATRN_newenvtypenos.upb -1;
XIVATRN_typenos = VIVATRN_newenvtypenos.data;
for (;YIVATRN-- >= 0;
(XIVATRN_typenos++
) )
{
(*XIVATRN_typenos) = UWQATRN_niluselist;
}
 /* line 4578: */
A_CLOSURE( AJVATRN_generator, BJVATRN_generator, CJVATRN_generator );
(( CJVATRN_generator * ) ( AJVATRN_generator.nonlocals )) -> KURATRN_oenv = KURATRN_oenv;
A_CALLPROC(AJVATRN_generator,(A68_TRUE, &GJVATRN),(A68_TRUE, &GJVATRN,(AJVATRN_generator).nonlocals));
FJVATRN_newenvfnnos = GJVATRN;
 /* line 4579: */
IJVATRN = FJVATRN_newenvfnnos.upb -1;
HJVATRN_fnnos = FJVATRN_newenvfnnos.data;
for (;IJVATRN-- >= 0;
(HJVATRN_fnnos++
) )
{
(*HJVATRN_fnnos) = UWQATRN_niluselist;
}
 /* line 4581: */
JJVATRN_fdec = CQMATRN_get_outerfn(Ofn);
 /* line 4582: */
 /* line 4583: */
KJVATRN.Old = KURATRN_oenv;
LJVATRN.fn.fn_global = XSOATRN_nilampar;
LJVATRN.nonlocals = A68_NIL;
KJVATRN.Subs_ampar = LJVATRN;
 /* line 4584: */
MJVATRN.fn.fn_global = BTOATRN_nilfmpar;
MJVATRN.nonlocals = A68_NIL;
KJVATRN.Subs_fmpar = MJVATRN;
NJVATRN.fn.fn_global = FTOATRN_niltmpar;
NJVATRN.nonlocals = A68_NIL;
KJVATRN.Subs_tmpar = NJVATRN;
OJVATRN.fn.fn_global = JTOATRN_nilcmpar;
OJVATRN.nonlocals = A68_NIL;
KJVATRN.Subs_cmpar = OJVATRN;
PJVATRN.fn.fn_global = NTOATRN_nilfnmpar;
PJVATRN.nonlocals = A68_NIL;
KJVATRN.Subs_fnmpar = PJVATRN;
KJVATRN.Repldecs = RURATRN_rdecs;
 /* line 4585: */
KJVATRN.Mptable = QWRATRN_mptable;
KJVATRN.Newenvattrnos = LIVATRN_newenvattrnos;
KJVATRN.Newenvtypenos = VIVATRN_newenvtypenos;
KJVATRN.Newenvfnnos = FJVATRN_newenvfnnos;
 /* line 4586: */
QJVATRN = A_HEAP(A68_580 ) ;
(*QJVATRN) = KJVATRN ;
A_CALLPROC(QXRATRN_fndec_expand,(JJVATRN_fdec, Tprocs, Params, Mstable, Paramenv, QJVATRN, Iochange, Monitors, &RJVATRN),(JJVATRN_fdec, Tprocs, Params, Mstable, Paramenv, QJVATRN, Iochange, Monitors, &RJVATRN,(QXRATRN_fndec_expand).nonlocals));
SJVATRN_fdecc = RJVATRN;
 /* line 4589: */
TJVATRN_attrs = (&(GXRATRN_newenv->Attrs));
 /* line 4590: */
UJVATRN_types = (&(GXRATRN_newenv->Types));
 /* line 4591: */
VJVATRN_fns = (&(GXRATRN_newenv->Fns));
 /* line 4593: */
if ( ((*(&(JJVATRN_fdec->Sort)))!=OKAATRN_outerdec) )
{ 
NKDAOST_sysfault(XJVATRN);
} 
 /* line 4594: */
 /* line 4595: */
YJVATRN = SJVATRN_fdecc.C;
if ( YJVATRN )
{YJVATRN = !DXRATRN_envfnchanged;
}
if ( YJVATRN )
{ 
DXRATRN_envfnchanged = A68_TRUE;
 /* line 4596: */
A_CLOSURE( AKVATRN_generator, BKVATRN_generator, CKVATRN_generator );
(( CKVATRN_generator * ) ( AKVATRN_generator.nonlocals )) -> VJVATRN_fns = VJVATRN_fns;
 /* line 4597: */
A_CALLPROC(AKVATRN_generator,(A68_FALSE, &FKVATRN),(A68_FALSE, &FKVATRN,(AKVATRN_generator).nonlocals));
A_VASSIGN2((*VJVATRN_fns),FKVATRN,A68_298 *) ;
(*VJVATRN_fns) = FKVATRN;
} 
 /* line 4598: */
GKVATRN_newclosureno = (*(&((*(&(SJVATRN_fdecc.F->Usage)))->Closureno)));
 /* line 4599: */
 /* line 4600: */
if ( (*(&(JJVATRN_fdec->Macro))) )
{ 
GKVATRN_newclosureno = ENCATRN_reserve_next_closureno((*NL(EDRATRN_newclosure)));
 /* line 4601: */
HKVATRN = A_HEAP(A68_182 ) ;
(*HKVATRN) = (*(*(&(JJVATRN_fdec->Usage)))) ;
IKVATRN = (&(SJVATRN_fdecc.F->Usage)) ;
(*IKVATRN) = HKVATRN;
 /* line 4602: */
 /* line 4604: */
JKVATRN = (&((*(&(SJVATRN_fdecc.F->Usage)))->Closureno)) ;
(*JKVATRN) = GKVATRN_newclosureno;
} 
 /* line 4605: */
KKVATRN = 1 ;
LKVATRN = (&A_VINDEX((*VJVATRN_fns),KKVATRN)) ;
(*LKVATRN) = SJVATRN_fdecc.F;
 /* line 4607: */
 /* line 4608: */
if ( (WWRATRN_envintno<(*(&(GXRATRN_newenv->Ints))).upb) )
{ 
 /* line 4609: */
if ( (WWRATRN_envintno==0) )
{ 
UWRATRN_envintchanged = A68_TRUE;
 /* line 4610: */
 /* line 4611: */
MKVATRN = (&(GXRATRN_newenv->Ints)) ;
(*MKVATRN) = SCAATRN_nullintdecs;
} 
else
{ 
 /* line 4612: */
 /* line 4613: */
NKVATRN = (*(&(GXRATRN_newenv->Ints))) ;
PKVATRN = (&(GXRATRN_newenv->Ints)) ;
(*PKVATRN) = A_VTRIM(OKVATRN,(NKVATRN),A_VTSCRIPT(&(OKVATRN.upb),(NKVATRN).upb,1,WWRATRN_envintno));
} 
} 
 /* line 4614: */
 /* line 4615: */
if ( (ZWRATRN_envconstno<(*(&(GXRATRN_newenv->Consts))).upb) )
{ 
 /* line 4616: */
if ( (ZWRATRN_envconstno==0) )
{ 
XWRATRN_envconstchanged = A68_TRUE;
 /* line 4617: */
 /* line 4618: */
QKVATRN = (&(GXRATRN_newenv->Consts)) ;
(*QKVATRN) = EDAATRN_nullconstdecs;
} 
else
{ 
 /* line 4619: */
 /* line 4620: */
RKVATRN = (*(&(GXRATRN_newenv->Consts))) ;
TKVATRN = (&(GXRATRN_newenv->Consts)) ;
(*TKVATRN) = A_VTRIM(SKVATRN,(RKVATRN),A_VTSCRIPT(&(SKVATRN.upb),(RKVATRN).upb,1,ZWRATRN_envconstno));
} 
} 
 /* line 4622: */
 /* line 4623: */
if ( (TWRATRN_envattrno<(*TJVATRN_attrs).upb) )
{ 
 /* line 4624: */
if ( !RWRATRN_envattrchanged )
{ 
RWRATRN_envattrchanged = A68_TRUE;
 /* line 4625: */
A_CLOSURE( VKVATRN_generator, WKVATRN_generator, XKVATRN_generator );
(( XKVATRN_generator * ) ( VKVATRN_generator.nonlocals )) -> TWRATRN_envattrno = (&TWRATRN_envattrno);
 /* line 4626: */
A_CALLPROC(VKVATRN_generator,(A68_FALSE, &ALVATRN),(A68_FALSE, &ALVATRN,(VKVATRN_generator).nonlocals));
CLVATRN = A_VTRIM(BLVATRN,((*TJVATRN_attrs)),A_VTSCRIPT(&(BLVATRN.upb),((*TJVATRN_attrs)).upb,1,TWRATRN_envattrno)) ;
A_VASSIGN2(CLVATRN,ALVATRN,A68_181 *) ;
(*TJVATRN_attrs) = ALVATRN;
} 
else
{ 
 /* line 4627: */
 /* line 4628: */
(*TJVATRN_attrs) = A_VTRIM(DLVATRN,((*TJVATRN_attrs)),A_VTSCRIPT(&(DLVATRN.upb),((*TJVATRN_attrs)).upb,1,TWRATRN_envattrno));
} 
} 
 /* line 4629: */
 /* line 4630: */
if ( (CXRATRN_envtypeno<(*UJVATRN_types).upb) )
{ 
 /* line 4631: */
if ( !AXRATRN_envtypechanged )
{ 
AXRATRN_envtypechanged = A68_TRUE;
 /* line 4632: */
A_CLOSURE( FLVATRN_generator, GLVATRN_generator, HLVATRN_generator );
(( HLVATRN_generator * ) ( FLVATRN_generator.nonlocals )) -> CXRATRN_envtypeno = (&CXRATRN_envtypeno);
 /* line 4633: */
A_CALLPROC(FLVATRN_generator,(A68_FALSE, &KLVATRN),(A68_FALSE, &KLVATRN,(FLVATRN_generator).nonlocals));
MLVATRN = A_VTRIM(LLVATRN,((*UJVATRN_types)),A_VTSCRIPT(&(LLVATRN.upb),((*UJVATRN_types)).upb,1,CXRATRN_envtypeno)) ;
A_VASSIGN2(MLVATRN,KLVATRN,A68_215 *) ;
(*UJVATRN_types) = KLVATRN;
} 
else
{ 
 /* line 4634: */
 /* line 4635: */
(*UJVATRN_types) = A_VTRIM(NLVATRN,((*UJVATRN_types)),A_VTSCRIPT(&(NLVATRN.upb),((*UJVATRN_types)).upb,1,CXRATRN_envtypeno));
} 
} 
 /* line 4636: */
 /* line 4637: */
if ( (FXRATRN_envfnno<(*VJVATRN_fns).upb) )
{ 
 /* line 4638: */
if ( !DXRATRN_envfnchanged )
{ 
DXRATRN_envfnchanged = A68_TRUE;
 /* line 4639: */
A_CLOSURE( PLVATRN_generator, QLVATRN_generator, RLVATRN_generator );
(( RLVATRN_generator * ) ( PLVATRN_generator.nonlocals )) -> FXRATRN_envfnno = (&FXRATRN_envfnno);
 /* line 4640: */
A_CALLPROC(PLVATRN_generator,(A68_FALSE, &ULVATRN),(A68_FALSE, &ULVATRN,(PLVATRN_generator).nonlocals));
WLVATRN = A_VTRIM(VLVATRN,((*VJVATRN_fns)),A_VTSCRIPT(&(VLVATRN.upb),((*VJVATRN_fns)).upb,1,FXRATRN_envfnno)) ;
A_VASSIGN2(WLVATRN,ULVATRN,A68_298 *) ;
(*VJVATRN_fns) = ULVATRN;
} 
else
{ 
 /* line 4641: */
 /* line 4642: */
(*VJVATRN_fns) = A_VTRIM(XLVATRN,((*VJVATRN_fns)),A_VTSCRIPT(&(XLVATRN.upb),((*VJVATRN_fns)).upb,1,FXRATRN_envfnno));
} 
} 
 /* line 4644: */
YLVATRN = RWRATRN_envattrchanged;
if ( ! YLVATRN )
{YLVATRN = AXRATRN_envtypechanged;
}
 /* line 4645: */
if ( ! YLVATRN )
{YLVATRN = DXRATRN_envfnchanged;
}
if ( ! YLVATRN )
{YLVATRN = UWRATRN_envintchanged;
}
if ( ! YLVATRN )
{YLVATRN = XWRATRN_envconstchanged;
}
 /* line 4646: */
if ( ! YLVATRN )
{YLVATRN = SJVATRN_fdecc.C;
}
if ( YLVATRN )
{ 
ZLVATRN.O.Closureno = GKVATRN_newclosureno;
ZLVATRN.O.Sort = VKAATRN_outerfn;
ZLVATRN.O.Environ = GXRATRN_newenv;
 /* line 4647: */
ZLVATRN.C = A68_TRUE;
AMVATRN = ZLVATRN;
} 
else
{ 
BMVATRN.O = Ofn;
 /* line 4648: */
 /* line 4649: */
BMVATRN.C = A68_FALSE;
AMVATRN = BMVATRN;
} 
} 
A_PROC_EXIT(outerfn_expand);
*ReturnedValue = (AMVATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  IMVATRN_outer_expand(A68_307  O, A68_414 * Tprocs, A68_412  *ReturnedValue, void *NonLocals)
#define NL(x) (((JMVATRN_outer_expand *)NonLocals)->x)
{ 
A68_472  KMVATRN;  /* collateral clause result */
A68_472  LMVATRN_close;
A68_301 * MMVATRN_newenv;
A68_BOOL  NMVATRN_ac;
A68_BOOL  OMVATRN_tc;
A68_302 * PMVATRN_attrs;
A68_304 * QMVATRN_types;
A68_33  SMVATRN_generator;   /* proc value of non-global proc */
A68_32  YMVATRN;  /* avoid structure result */
A68_32  XMVATRN_repldecs;
A68_INT * ZMVATRN_r;
A68_INT  ANVATRN;  /* forall loop counter */
A68_415  DNVATRN_attr_outer;   /* proc value of non-global proc */
A68_418  HOVATRN_formula_outer;   /* proc value of non-global proc */
A68_424  GPVATRN_type_outer;   /* proc value of non-global proc */
A68_433  KQVATRN_const_outer;   /* proc value of non-global proc */
A68_678  WRVATRN;  /* collateral clause result */
A68_459  XRVATRN;  /* OPERATORS - mode -> union mode */
A68_418  YRVATRN;  /* YIELD */
A68_459  ZRVATRN;  /* OPERATORS - mode -> union mode */
A68_415  ASVATRN;  /* YIELD */
A68_459  BSVATRN;  /* OPERATORS - mode -> union mode */
A68_424  CSVATRN;  /* YIELD */
A68_459  DSVATRN;  /* OPERATORS - mode -> union mode */
A68_433  ESVATRN;  /* YIELD */
A68_458  FSVATRN;  /* OPERATORS - istruct -> vector */
A68_414 * GSVATRN_newtprocs;
A68_415  HSVATRN;  /* CALL */
A68_175  ISVATRN;  /* OPERATORS - mode -> union mode */
A68_176 * JSVATRN;  /* YIELD */
A68_372  KSVATRN;  /* avoid structure result */
A68_372  LSVATRN_anc;
A68_BOOL  MSVATRN;  /* optbool result */
A68_412  NSVATRN;  /* collateral clause result */
A68_412  OSVATRN;  /* clause result */
A68_412  PSVATRN;  /* collateral clause result */
A68_455  QSVATRN;  /* CALL */
A68_412  RSVATRN;  /* avoid structure result */
A68_424  SSVATRN;  /* CALL */
A68_200  TSVATRN;  /* OPERATORS - mode -> union mode */
A68_201 * USVATRN;  /* YIELD */
A68_381  VSVATRN;  /* avoid structure result */
A68_381  WSVATRN_tnc;
A68_BOOL  XSVATRN;  /* optbool result */
A68_303 * YSVATRN;  /* YIELD */
A68_412  ZSVATRN;  /* collateral clause result */
A68_412  ATVATRN;  /* collateral clause result */
A68_455  BTVATRN;  /* CALL */
A68_412  CTVATRN;  /* avoid structure result */
A68_412  FTVATRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(outer_expand);
 /* line 4657: */
 /* line 4658: */
{ 
KMVATRN.Fdec = YAAATRN_nilfndec;
KMVATRN.Env = O.Environ;
LMVATRN_close = KMVATRN;
 /* line 4659: */
MMVATRN_newenv = (A_HEAP(A68_301 ));
(*MMVATRN_newenv) = (*O.Environ);
 /* line 4660: */
NMVATRN_ac = A68_FALSE;
OMVATRN_tc = A68_FALSE;
 /* line 4662: */
PMVATRN_attrs = (&(MMVATRN_newenv->Attrs));
 /* line 4663: */
QMVATRN_types = (&(MMVATRN_newenv->Types));
 /* line 4664: */
A_CLOSURE( SMVATRN_generator, TMVATRN_generator, UMVATRN_generator );
(( UMVATRN_generator * ) ( SMVATRN_generator.nonlocals )) -> O = O;
A_CALLPROC(SMVATRN_generator,(A68_TRUE, &YMVATRN),(A68_TRUE, &YMVATRN,(SMVATRN_generator).nonlocals));
XMVATRN_repldecs = YMVATRN;
 /* line 4665: */
ANVATRN = XMVATRN_repldecs.upb -1;
ZMVATRN_r = XMVATRN_repldecs.data;
for (;ANVATRN-- >= 0;
(ZMVATRN_r++
) )
{
(*ZMVATRN_r) = (-9999);
}
 /* line 4667: */
A_CLOSURE( DNVATRN_attr_outer, ENVATRN_attr_outer, FNVATRN_attr_outer );
(( FNVATRN_attr_outer * ) ( DNVATRN_attr_outer.nonlocals )) -> PMVATRN_attrs = PMVATRN_attrs;
(( FNVATRN_attr_outer * ) ( DNVATRN_attr_outer.nonlocals )) -> NMVATRN_ac = (&NMVATRN_ac);
 /* line 4688: */
A_CLOSURE( HOVATRN_formula_outer, IOVATRN_formula_outer, JOVATRN_formula_outer );
(( JOVATRN_formula_outer * ) ( HOVATRN_formula_outer.nonlocals )) -> MERATRN_fname_evaluate = NL(MERATRN_fname_evaluate);
(( JOVATRN_formula_outer * ) ( HOVATRN_formula_outer.nonlocals )) -> LMVATRN_close = LMVATRN_close;
(( JOVATRN_formula_outer * ) ( HOVATRN_formula_outer.nonlocals )) -> XMVATRN_repldecs = XMVATRN_repldecs;
(( JOVATRN_formula_outer * ) ( HOVATRN_formula_outer.nonlocals )) -> EMVATRN_outerdiag = NL(EMVATRN_outerdiag);
 /* line 4705: */
A_CLOSURE( GPVATRN_type_outer, HPVATRN_type_outer, IPVATRN_type_outer );
(( IPVATRN_type_outer * ) ( GPVATRN_type_outer.nonlocals )) -> QMVATRN_types = QMVATRN_types;
(( IPVATRN_type_outer * ) ( GPVATRN_type_outer.nonlocals )) -> OMVATRN_tc = (&OMVATRN_tc);
 /* line 4726: */
A_CLOSURE( KQVATRN_const_outer, LQVATRN_const_outer, MQVATRN_const_outer );
(( MQVATRN_const_outer * ) ( KQVATRN_const_outer.nonlocals )) -> LMVATRN_close = LMVATRN_close;
(( MQVATRN_const_outer * ) ( KQVATRN_const_outer.nonlocals )) -> WDRATRN_ints_consts = NL(WDRATRN_ints_consts);
(( MQVATRN_const_outer * ) ( KQVATRN_const_outer.nonlocals )) -> XMVATRN_repldecs = XMVATRN_repldecs;
(( MQVATRN_const_outer * ) ( KQVATRN_const_outer.nonlocals )) -> ESRATRN_uconc_expand = NL(ESRATRN_uconc_expand);
(( MQVATRN_const_outer * ) ( KQVATRN_const_outer.nonlocals )) -> EMVATRN_outerdiag = NL(EMVATRN_outerdiag);
(( MQVATRN_const_outer * ) ( KQVATRN_const_outer.nonlocals )) -> KKRATRN_uindex_expand = NL(KKRATRN_uindex_expand);
(( MQVATRN_const_outer * ) ( KQVATRN_const_outer.nonlocals )) -> RLRATRN_utrim_expand = NL(RLRATRN_utrim_expand);
 /* line 4753: */
 /* line 4754: */
 /* line 4755: */
YRVATRN = HOVATRN_formula_outer ;
WRVATRN.data[0] = A_UNITE(XRVATRN,mode4,4,YRVATRN);
 /* line 4756: */
ASVATRN = DNVATRN_attr_outer ;
WRVATRN.data[1] = A_UNITE(ZRVATRN,mode1,1,ASVATRN);
 /* line 4758: */
CSVATRN = GPVATRN_type_outer ;
WRVATRN.data[2] = A_UNITE(BSVATRN,mode10,10,CSVATRN);
ESVATRN = KQVATRN_const_outer ;
WRVATRN.data[3] = A_UNITE(DSVATRN,mode19,19,ESVATRN);
GSVATRN_newtprocs = THJATRN_make_newtprocs(Tprocs, A_HISVEC(FSVATRN,WRVATRN,4,A68_459 ));
 /* line 4761: */
 /* line 4763: */
switch ( O.Sort )
{ 
case 1: 
{ 
HSVATRN = (*(&(GSVATRN_newtprocs->Attr))) ;
JSVATRN = UDAATRN_makeattrname(1) ;
A_CALLPROC(HSVATRN,(A_UNITE(ISVATRN,mode1,1,JSVATRN), GSVATRN_newtprocs, &KSVATRN),(A_UNITE(ISVATRN,mode1,1,JSVATRN), GSVATRN_newtprocs, &KSVATRN,(HSVATRN).nonlocals));
LSVATRN_anc = KSVATRN;
 /* line 4764: */
 /* line 4765: */
MSVATRN = LSVATRN_anc.C;
if ( ! MSVATRN )
{MSVATRN = NMVATRN_ac;
}
if ( MSVATRN )
{ 
NSVATRN.O.Closureno = O.Closureno;
NSVATRN.O.Sort = O.Sort;
NSVATRN.O.Environ = MMVATRN_newenv;
 /* line 4766: */
NSVATRN.C = A68_TRUE;
OSVATRN = NSVATRN;
} 
else
{ 
PSVATRN.O = O;
 /* line 4767: */
 /* line 4768: */
 /* line 4769: */
PSVATRN.C = A68_FALSE;
OSVATRN = PSVATRN;
} 
} 
break;
case 2: 
 /* line 4771: */
QSVATRN = (*(&(AWLATRN_nulltprocs->Outer))) ;
A_CALLPROC(QSVATRN,(O, GSVATRN_newtprocs, &RSVATRN),(O, GSVATRN_newtprocs, &RSVATRN,(QSVATRN).nonlocals));
OSVATRN = RSVATRN;
break;
case 3: 
{ 
SSVATRN = (*(&(GSVATRN_newtprocs->Type))) ;
USVATRN = IFAATRN_maketname(1) ;
A_CALLPROC(SSVATRN,(A_UNITE(TSVATRN,mode1,1,USVATRN), GSVATRN_newtprocs, &VSVATRN),(A_UNITE(TSVATRN,mode1,1,USVATRN), GSVATRN_newtprocs, &VSVATRN,(SSVATRN).nonlocals));
WSVATRN_tnc = VSVATRN;
 /* line 4772: */
 /* line 4773: */
XSVATRN = WSVATRN_tnc.C;
if ( ! XSVATRN )
{XSVATRN = OMVATRN_tc;
}
if ( XSVATRN )
{ 
YSVATRN = (&(MMVATRN_newenv->Ints)) ;
(*YSVATRN) = SCAATRN_nullintdecs;
 /* line 4774: */
ZSVATRN.O.Closureno = O.Closureno;
ZSVATRN.O.Sort = O.Sort;
ZSVATRN.O.Environ = MMVATRN_newenv;
 /* line 4775: */
ZSVATRN.C = A68_TRUE;
OSVATRN = ZSVATRN;
} 
else
{ 
ATVATRN.O = O;
 /* line 4776: */
 /* line 4777: */
 /* line 4778: */
ATVATRN.C = A68_FALSE;
OSVATRN = ATVATRN;
} 
} 
break;
case 4: 
 /* line 4779: */
BTVATRN = (*(&(AWLATRN_nulltprocs->Outer))) ;
A_CALLPROC(BTVATRN,(O, GSVATRN_newtprocs, &CTVATRN),(O, GSVATRN_newtprocs, &CTVATRN,(BTVATRN).nonlocals));
OSVATRN = CTVATRN;
break;
case 5: 
{ 
NKDAOST_sysfault(ETVATRN);
 /* line 4780: */
 /* line 4781: */
OSVATRN = FTVATRN;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(outer_expand);
*ReturnedValue = (OSVATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  XSOATRN_nilampar(A68_176  Am, A68_175  *ReturnedValue)
{ 
A68_175  YSOATRN;  /* clause result */
A68_175  ZSOATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(nilampar);
YSOATRN = A_UNITE(ZSOATRN,mode5,5,(&ZHAATRN_attrnull));
A_PROC_EXIT(nilampar);
*ReturnedValue = (YSOATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  BTOATRN_nilfmpar(A68_188  Fm, A68_184  *ReturnedValue)
{ 
A68_184  CTOATRN;  /* clause result */
A68_184  DTOATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(nilfmpar);
CTOATRN = A_UNITE(DTOATRN,mode10,10,(&BIAATRN_fnull));
A_PROC_EXIT(nilfmpar);
*ReturnedValue = (CTOATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  FTOATRN_niltmpar(A68_201  Tm, A68_200  *ReturnedValue)
{ 
A68_200  GTOATRN;  /* clause result */
A68_200  HTOATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(niltmpar);
GTOATRN = A_UNITE(HTOATRN,mode9,9,(&DIAATRN_tnull));
A_PROC_EXIT(niltmpar);
*ReturnedValue = (GTOATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  JTOATRN_nilcmpar(A68_216  Cm, A68_222  *ReturnedValue)
{ 
A68_222  KTOATRN;  /* clause result */
A68_222  LTOATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(nilcmpar);
KTOATRN = A_UNITE(LTOATRN,mode34,34,(&FIAATRN_unull));
A_PROC_EXIT(nilcmpar);
*ReturnedValue = (KTOATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  NTOATRN_nilfnmpar(A68_253  Fn, A68_262  *ReturnedValue)
{ 
A68_262  OTOATRN;  /* collateral clause result */
A68_264  PTOATRN;  /* OPERATORS - nil -> mode */
A68_175  QTOATRN;  /* OPERATORS - mode -> union mode */
A68_262  RTOATRN;  /* clause result */
A_PROC_ENTRY(nilfnmpar);
OTOATRN.Fnno = 0;
OTOATRN.Macparams = A_VVAC(PTOATRN);
OTOATRN.Attr = A_UNITE(QTOATRN,mode5,5,(&ZHAATRN_attrnull));
RTOATRN = OTOATRN;
A_PROC_EXIT(nilfnmpar);
*ReturnedValue = (RTOATRN);
return;
} 
#undef NL

A_STATIC A68_298 * WTOATRN_skeleton_fndec(A68_INT  Sort, A68_BOOL  Macro, A68_VC  Name, A68_294  Body)
{ 
A68_298  XTOATRN;  /* collateral clause result */
A68_175  YTOATRN;  /* OPERATORS - mode -> union mode */
A68_298 * ZTOATRN;  /* clause result */
A68_298 * AUOATRN;  /* YIELD */
A_PROC_ENTRY(skeleton_fndec);
 /* line 160: */
XTOATRN.Sort = Sort;
XTOATRN.Macro = Macro;
 /* line 161: */
XTOATRN.Fnname = Name;
if ( Macro )
{ 
XTOATRN.Macspecs = GCAATRN_nullmacspecs;
} 
else
{ 
XTOATRN.Macspecs = FBAATRN_nilmacspecs;
} 
 /* line 162: */
XTOATRN.Attr = A_UNITE(YTOATRN,mode5,5,(&ZHAATRN_attrnull));
XTOATRN.Inputs = NAAATRN_nilnames;
XTOATRN.Outputs = NAAATRN_nilnames;
XTOATRN.Nametypes = UBAATRN_nullnametypes;
 /* line 163: */
XTOATRN.Fnbody = Body;
XTOATRN.Usage = CBAATRN_nilusage;
AUOATRN = A_HEAP(A68_298 ) ;
(*AUOATRN) = XTOATRN ;
ZTOATRN = AUOATRN;
A_PROC_EXIT(skeleton_fndec);
return( ZTOATRN );
} 
#undef NL

A_STATIC A68_VOID  DUOATRN_generator(A68_BOOL  CUOATRN_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  EUOATRN;  /* clause result */
A68_VC  FUOATRN;  /* OPERATORS - dynamic generator */
{ 
FUOATRN.upb = 70 ;
( CUOATRN_anonymous? A_VLOC(A68_CHAR ,FUOATRN): A_VHEAP(A68_CHAR ,FUOATRN) );
EUOATRN = FUOATRN;
} 
*ReturnedValue = (EUOATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  JUOATRN_start_printing(void)
{ 
A_PROC_ENTRY(start_printing);
IUOATRN_mind = 0;
A_PROC_EXIT(start_printing);
return;
} 
#undef NL

A_STATIC A68_VOID  KUOATRN_end_printing(void)
{ 
A68_473  LUOATRN;  /* collateral clause result */
A68_VC  MUOATRN;  /* OPERATORS - trim index */
A68_52  NUOATRN;  /* OPERATORS - mode -> union mode */
A68_VC  OUOATRN;  /* YIELD */
A68_52  PUOATRN;  /* OPERATORS - mode -> union mode */
A68_56  QUOATRN;  /* procedure value */
A68_85  RUOATRN;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(end_printing);
OUOATRN = A_VTRIM(MUOATRN,(GUOATRN_m),A_VTSCRIPT(&(MUOATRN.upb),(GUOATRN_m).upb,1,IUOATRN_mind)) ;
LUOATRN.data[0] = A_UNITE(NUOATRN,mode7,7,OUOATRN);
QUOATRN.fn.fn_global = LRAAOSL_newline;
QUOATRN.nonlocals = A68_NIL;
LUOATRN.data[1] = A_UNITE(PUOATRN,mode12,12,QUOATRN);
GFBAOSL_put(LEAAOST_out, A_HISVEC(RUOATRN,LUOATRN,2,A68_52 ));
A_PROC_EXIT(end_printing);
return;
} 
#undef NL

A_STATIC A68_VOID  VUOATRN_findname(A68_INT  Typeno, A68_INT  Altno, A68_472  Close, A68_VC  *ReturnedValue)
{ 
A68_304  WUOATRN;  /* OPERATORS - simple index */
A68_215 * XUOATRN_tdec;
A68_VC  YUOATRN;  /* clause result */
A68_213  ZUOATRN;  /* united object - for case conformity */
A68_214  AVOATRN_nn;
A68_212 * BVOATRN_ni;
A68_210 * CVOATRN_nc;
A_PROC_ENTRY(findname);
 /* line 196: */
 /* line 197: */
{ 
WUOATRN = (*(&(Close.Env->Types))) ;
XUOATRN_tdec = (*(&A_VINDEX(WUOATRN,Typeno)));
 /* line 198: */
 /* line 199: */
 /* line 200: */
if ( (Altno==(-1)) )
{ 
YUOATRN = (*(&(XUOATRN_tdec->Typename)));
} 
else
{ 
 /* line 201: */
ZUOATRN = (*(&(XUOATRN_tdec->Body))) ;
switch ( ZUOATRN.mode )
{ 
case 1: /* REF VECTOR [] MODE211 */
AVOATRN_nn = (ZUOATRN.data.mode1);
 /* line 202: */
YUOATRN = (*(&((&A_VINDEX(AVOATRN_nn,Altno))->Altname)));
break;
case 2: /* REF STRUCT(REF MODE26,MODE199)  */
BVOATRN_ni = (ZUOATRN.data.mode2);
 /* line 203: */
YUOATRN = (*(&(BVOATRN_ni->Tagname)));
break;
case 4: /* REF STRUCT(REF MODE26,REF MODE26)  */
CVOATRN_nc = (ZUOATRN.data.mode4);
 /* line 204: */
YUOATRN = (*(&(CVOATRN_nc->Tagname)));
break;
default: 
NKDAOST_sysfault(EVOATRN);
 /* line 205: */
 /* line 206: */
 /* line 207: */
YUOATRN = TTCAOST_nullid;
break;
} 
} 
} 
A_PROC_EXIT(findname);
*ReturnedValue = (YUOATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  HVOATRN_find_newchars(A68_INT  Typeno, A68_472  Close, A68_VC  *ReturnedValue)
{ 
A68_304  IVOATRN;  /* OPERATORS - simple index */
A68_215 * JVOATRN_tdec;
A68_213  KVOATRN;  /* united object - for case conformity */
A68_210 * LVOATRN_nc;
A68_VC  MVOATRN;  /* clause result */
A68_VC  NVOATRN;  /* OPERATORS - nil -> mode */
A_PROC_ENTRY(find_newchars);
 /* line 211: */
 /* line 212: */
{ 
IVOATRN = (*(&(Close.Env->Types))) ;
JVOATRN_tdec = (*(&A_VINDEX(IVOATRN,Typeno)));
 /* line 213: */
 /* line 214: */
KVOATRN = (*(&(JVOATRN_tdec->Body))) ;
switch ( KVOATRN.mode )
{ 
case 4: /* REF STRUCT(REF MODE26,REF MODE26)  */
LVOATRN_nc = (KVOATRN.data.mode4);
 /* line 215: */
 /* line 216: */
MVOATRN = (*(&(LVOATRN_nc->Chars)));
break;
default: 
 /* line 217: */
MVOATRN = A_VVAC(NVOATRN);
break;
} 
} 
A_PROC_EXIT(find_newchars);
*ReturnedValue = (MVOATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  QVOATRN_get_replicator(A68_184  F, A68_301 * Env, A68_477  *ReturnedValue)
{ 
A68_184  RVOATRN;  /* united object - for case conformity */
A68_188 * SVOATRN_fn;
A68_303  TVOATRN;  /* OPERATORS - simple index */
A68_INT  UVOATRN;  /* YIELD */
A68_197 * VVOATRN_idec;
A68_198  WVOATRN;  /* united object - for case conformity */
A68_199  XVOATRN_rg;
A68_477  YVOATRN;  /* collateral clause result */
A68_477  ZVOATRN;  /* clause result */
A68_477  CWOATRN;  /* OPERATORS - skip to mode */
A68_477  FWOATRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(get_replicator);
 /* line 222: */
 /* line 223: */
RVOATRN = F ;
switch ( RVOATRN.mode )
{ 
case 4: /* REF STRUCT(INT)  */
SVOATRN_fn = (RVOATRN.data.mode4);
{ 
TVOATRN = (*(&(Env->Ints))) ;
UVOATRN = (*(&(SVOATRN_fn->Intno))) ;
VVOATRN_idec = (*(&A_VINDEX(TVOATRN,UVOATRN)));
 /* line 224: */
 /* line 225: */
WVOATRN = (*(&(VVOATRN_idec->Value))) ;
switch ( WVOATRN.mode )
{ 
case 11: /* STRUCT(MODE184,MODE184)  */
XVOATRN_rg = (WVOATRN.data.mode11);
YVOATRN.Id = (*(&(VVOATRN_idec->Intname)));
YVOATRN.Intno = (*(&(SVOATRN_fn->Intno)));
 /* line 226: */
YVOATRN.Range = XVOATRN_rg;
ZVOATRN = YVOATRN;
break;
default: 
NKDAOST_sysfault(BWOATRN);
 /* line 227: */
 /* line 228: */
 /* line 229: */
ZVOATRN = CWOATRN;
break;
} 
} 
break;
default: 
NKDAOST_sysfault(EWOATRN);
 /* line 230: */
ZVOATRN = FWOATRN;
break;
} 
A_PROC_EXIT(get_replicator);
*ReturnedValue = (ZVOATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  HWOATRN_print_char(A68_CHAR  C)
{ 
A68_473  IWOATRN;  /* collateral clause result */
A68_52  JWOATRN;  /* OPERATORS - mode -> union mode */
A68_52  KWOATRN;  /* OPERATORS - mode -> union mode */
A68_56  LWOATRN;  /* procedure value */
A68_85  MWOATRN;  /* OPERATORS - istruct -> vector */
A68_CHAR * NWOATRN;  /* YIELD */
A_PROC_ENTRY(print_char);
 /* line 233: */
{ 
 /* line 234: */
if ( ((IUOATRN_mind+=1)>70) )
{ 
IUOATRN_mind = 1;
 /* line 235: */
IWOATRN.data[0] = A_UNITE(JWOATRN,mode7,7,GUOATRN_m);
LWOATRN.fn.fn_global = LRAAOSL_newline;
LWOATRN.nonlocals = A68_NIL;
IWOATRN.data[1] = A_UNITE(KWOATRN,mode12,12,LWOATRN);
 /* line 236: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(MWOATRN,IWOATRN,2,A68_52 ));
} 
 /* line 237: */
 /* line 238: */
NWOATRN = (&A_VINDEX(GUOATRN_m,IUOATRN_mind)) ;
(*NWOATRN) = C;
} 
A_PROC_EXIT(print_char);
return;
} 
#undef NL

A_STATIC A68_VOID  PWOATRN_print_chars(A68_VC  C)
{ 
A68_INT  QWOATRN_i;
A68_INT  RWOATRN;  /* to part of loop */
A_PROC_ENTRY(print_chars);
 /* line 241: */
RWOATRN = C.upb;
for ( QWOATRN_i = 1;
QWOATRN_i <= RWOATRN;
QWOATRN_i += 1 )
{ 
HWOATRN_print_char(A_VINDEX(C,QWOATRN_i));
}
A_PROC_EXIT(print_chars);
return;
} 
#undef NL

A_STATIC A68_VOID  TWOATRN_print_id(A68_VC  Id)
{ 
A68_INT  UWOATRN_i;
A68_INT  VWOATRN;  /* to part of loop */
A_PROC_ENTRY(print_id);
 /* line 244: */
VWOATRN = Id.upb;
for ( UWOATRN_i = 1;
UWOATRN_i <= VWOATRN;
UWOATRN_i += 1 )
{ 
HWOATRN_print_char((*(&A_VINDEX(Id,UWOATRN_i))));
}
A_PROC_EXIT(print_id);
return;
} 
#undef NL

A_STATIC A68_VOID  XWOATRN_print_ids(A68_173 * Ids)
{ 
A68_173 * YWOATRN_i;
A_PROC_ENTRY(print_ids);
 /* line 247: */
{ 
YWOATRN_i = Ids;
 /* line 248: */
for ( ;; )
{ 
 /* line 249: */
if ( !((YWOATRN_i!=LAAATRN_nilids)) ) break;
TWOATRN_print_id((*(&(Ids->Id))));
 /* line 250: */
if ( ((*(&(YWOATRN_i->Rest)))!=LAAATRN_nilids) )
{ 
PWOATRN_print_chars(AXOATRN);
} 
 /* line 251: */
 /* line 252: */
YWOATRN_i = (*(&(YWOATRN_i->Rest)));
}
 /* line 253: */
} 
A_PROC_EXIT(print_ids);
return;
} 
#undef NL

A_STATIC A68_VOID  CXOATRN_print_strings(A68_173 * Ids)
{ 
A68_173 * DXOATRN_strings;
A68_VC  GXOATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(print_strings);
 /* line 256: */
{ 
DXOATRN_strings = Ids;
 /* line 257: */
for ( ;; )
{ 
 /* line 258: */
if ( !((DXOATRN_strings!=LAAATRN_nilids)) ) break;
PWOATRN_print_chars(FXOATRN);
TWOATRN_print_id((*(&(DXOATRN_strings->Id))));
PWOATRN_print_chars(A_HVEC(GXOATRN,'\"',A68_CHAR ));
 /* line 259: */
 /* line 260: */
DXOATRN_strings = (*(&(DXOATRN_strings->Rest)));
}
 /* line 261: */
} 
A_PROC_EXIT(print_strings);
return;
} 
#undef NL

A_STATIC A68_VOID  JXOATRN_print_attr(A68_175  A, A68_472  Close)
{ 
A68_175  KXOATRN;  /* united object - for case conformity */
A68_176 * LXOATRN_an;
A68_302  MXOATRN;  /* OPERATORS - simple index */
A68_INT  NXOATRN;  /* YIELD */
A68_181 * OXOATRN_adec;
A68_177 * PXOATRN_ad;
A68_VC  QXOATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_178 * RXOATRN_as;
A68_178 * SXOATRN_ast;
A68_VC  TXOATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  UXOATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  VXOATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_179 * WXOATRN_ab;
A68_VC  XXOATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  YXOATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  ZXOATRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  AYOATRN;  /* YIELD */
A68_85  BYOATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(print_attr);
 /* line 264: */
 /* line 265: */
KXOATRN = A ;
switch ( KXOATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
LXOATRN_an = (KXOATRN.data.mode1);
 /* line 266: */
{ 
MXOATRN = (*(&(Close.Env->Attrs))) ;
NXOATRN = (*(&(LXOATRN_an->Attrno))) ;
OXOATRN_adec = (*(&A_VINDEX(MXOATRN,NXOATRN)));
 /* line 267: */
 /* line 268: */
 /* line 269: */
TWOATRN_print_id((*(&(OXOATRN_adec->Attrname))));
} 
break;
case 2: /* REF STRUCT(REF MODE26,REF MODE173)  */
PXOATRN_ad = (KXOATRN.data.mode2);
 /* line 270: */
{ 
TWOATRN_print_id((*(&(PXOATRN_ad->Classname))));
 /* line 271: */
if ( ((*(&(PXOATRN_ad->Classname))).upb>0) )
{ 
PWOATRN_print_chars(A_HVEC(QXOATRN,':',A68_CHAR ));
} 
 /* line 272: */
 /* line 273: */
 /* line 274: */
CXOATRN_print_strings((*(&(PXOATRN_ad->Strings))));
} 
break;
case 3: /* REF STRUCT(MODE175,REF MODE178)  */
RXOATRN_as = (KXOATRN.data.mode3);
 /* line 275: */
{ 
SXOATRN_ast = RXOATRN_as;
 /* line 276: */
PWOATRN_print_chars(A_HVEC(TXOATRN,'(',A68_CHAR ));
JXOATRN_print_attr((*(&(SXOATRN_ast->Elem))), Close);
 /* line 277: */
for ( ;; )
{ 
 /* line 278: */
if ( !(((SXOATRN_ast = (*(&(SXOATRN_ast->Rest))))!=DBAATRN_nilattrstr)) ) break;
PWOATRN_print_chars(A_HVEC(UXOATRN,',',A68_CHAR ));
JXOATRN_print_attr((*(&(SXOATRN_ast->Elem))), Close);
}
 /* line 279: */
 /* line 280: */
 /* line 281: */
PWOATRN_print_chars(A_HVEC(VXOATRN,')',A68_CHAR ));
} 
break;
case 4: /* REF STRUCT(MODE175)  */
WXOATRN_ab = (KXOATRN.data.mode4);
 /* line 282: */
{ 
PWOATRN_print_chars(A_HVEC(XXOATRN,'(',A68_CHAR ));
JXOATRN_print_attr((*(&(WXOATRN_ab->Attr))), Close);
 /* line 283: */
PWOATRN_print_chars(A_HVEC(YXOATRN,')',A68_CHAR ));
} 
break;
default: 
 /* line 284: */
AYOATRN = '?' ;
GFBAOSL_put(LEAAOST_out, A_HVEC(BYOATRN,A_UNITE(ZXOATRN,mode6,6,AYOATRN),A68_52 ));
break;
} 
A_PROC_EXIT(print_attr);
return;
} 
#undef NL

A_STATIC A68_VOID  DYOATRN_print_formula(A68_184  F)
{ 
A68_184  EYOATRN;  /* united object - for case conformity */
A68_185 * FYOATRN_j;
A68_VC  GYOATRN;  /* avoid structure result */
A68_186 * HYOATRN_fck;
A68_189 * IYOATRN_fdop;
A68_VC  JYOATRN;  /* clause result */
A68_VC  KYOATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  LYOATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  MYOATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  NYOATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  OYOATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  VYOATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  WYOATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  BZOATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_190 * MZOATRN_fmop;
A68_VC  NZOATRN;  /* clause result */
A68_VC  OZOATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  PZOATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  SZOATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_191 * ZZOATRN_fcon;
A68_192 * IAPATRN_fb;
A68_193 * JAPATRN_fm;
A68_VC  MAPATRN;  /* avoid structure result */
A68_52  NAPATRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  OAPATRN;  /* YIELD */
A68_85  PAPATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(print_formula);
 /* line 288: */
 /* line 289: */
EYOATRN = F ;
switch ( EYOATRN.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26)  */
FYOATRN_j = (EYOATRN.data.mode1);
 /* line 290: */
 /* line 291: */
if ( ((*(&(FYOATRN_j->Text))).upb==0) )
{ 
 /* line 292: */
FCAAOSI_intchars( (*(&(FYOATRN_j->Int))), &GYOATRN );
PWOATRN_print_chars(GYOATRN);
} 
else
{ 
 /* line 293: */
 /* line 294: */
TWOATRN_print_id((*(&(FYOATRN_j->Text))));
} 
break;
case 2: /* REF STRUCT(INT,MODE184,MODE184)  */
HYOATRN_fck = (EYOATRN.data.mode2);
 /* line 295: */
DYOATRN_print_formula((*(&(HYOATRN_fck->Test))));
break;
case 5: /* REF STRUCT(MODE184,INT,MODE184)  */
IYOATRN_fdop = (EYOATRN.data.mode5);
 /* line 296: */
{ 
DYOATRN_print_formula((*(&(IYOATRN_fdop->Left))));
 /* line 297: */
switch ( (*(&(IYOATRN_fdop->Sort))) )
{ 
case 1: 
JYOATRN = A_HVEC(KYOATRN,'+',A68_CHAR );
break;
case 2: 
JYOATRN = A_HVEC(LYOATRN,'-',A68_CHAR );
break;
case 3: 
JYOATRN = A_HVEC(MYOATRN,'*',A68_CHAR );
break;
case 4: 
JYOATRN = A_HVEC(NYOATRN,'%',A68_CHAR );
break;
case 5: 
JYOATRN = A_HVEC(OYOATRN,'=',A68_CHAR );
break;
case 6: 
JYOATRN = QYOATRN;
break;
case 7: 
JYOATRN = SYOATRN;
break;
case 8: 
JYOATRN = UYOATRN;
break;
case 9: 
JYOATRN = A_HVEC(VYOATRN,'<',A68_CHAR );
break;
case 10: 
 /* line 298: */
JYOATRN = A_HVEC(WYOATRN,'>',A68_CHAR );
break;
case 11: 
JYOATRN = YYOATRN;
break;
case 12: 
JYOATRN = AZOATRN;
break;
case 13: 
JYOATRN = A_HVEC(BZOATRN,' ',A68_CHAR );
break;
case 14: 
JYOATRN = DZOATRN;
break;
case 15: 
JYOATRN = FZOATRN;
break;
case 16: 
JYOATRN = HZOATRN;
break;
case 17: 
JYOATRN = JZOATRN;
break;
case 18: 
JYOATRN = LZOATRN;
break;
default: 
A_IMP_SKIP ;
break;
} 
PWOATRN_print_chars(JYOATRN);
 /* line 299: */
 /* line 300: */
 /* line 301: */
DYOATRN_print_formula((*(&(IYOATRN_fdop->Right))));
} 
break;
case 6: /* REF STRUCT(INT,MODE184)  */
MZOATRN_fmop = (EYOATRN.data.mode6);
 /* line 302: */
{ 
switch ( (*(&(MZOATRN_fmop->Sort))) )
{ 
case 1: 
NZOATRN = A_HVEC(OZOATRN,'+',A68_CHAR );
break;
case 2: 
NZOATRN = A_HVEC(PZOATRN,'-',A68_CHAR );
break;
case 3: 
NZOATRN = RZOATRN;
break;
case 4: 
NZOATRN = A_HVEC(SZOATRN,' ',A68_CHAR );
break;
case 5: 
NZOATRN = UZOATRN;
break;
case 6: 
NZOATRN = WZOATRN;
break;
case 7: 
NZOATRN = YZOATRN;
break;
default: 
A_IMP_SKIP ;
break;
} 
PWOATRN_print_chars(NZOATRN);
 /* line 303: */
 /* line 304: */
 /* line 305: */
DYOATRN_print_formula((*(&(MZOATRN_fmop->Right))));
} 
break;
case 7: /* REF STRUCT(MODE184,MODE184,MODE184)  */
ZZOATRN_fcon = (EYOATRN.data.mode7);
 /* line 306: */
{ 
PWOATRN_print_chars(BAPATRN);
DYOATRN_print_formula((*(&(ZZOATRN_fcon->Cond))));
 /* line 307: */
PWOATRN_print_chars(DAPATRN);
DYOATRN_print_formula((*(&(ZZOATRN_fcon->True))));
 /* line 308: */
PWOATRN_print_chars(FAPATRN);
DYOATRN_print_formula((*(&(ZZOATRN_fcon->False))));
 /* line 309: */
 /* line 310: */
 /* line 311: */
PWOATRN_print_chars(HAPATRN);
} 
break;
case 8: /* REF STRUCT(MODE184)  */
IAPATRN_fb = (EYOATRN.data.mode8);
 /* line 312: */
{ 
HWOATRN_print_char('(');
DYOATRN_print_formula((*(&(IAPATRN_fb->Formula))));
 /* line 313: */
HWOATRN_print_char(')');
} 
break;
case 9: /* REF STRUCT(INT)  */
JAPATRN_fm = (EYOATRN.data.mode9);
 /* line 314: */
{ 
PWOATRN_print_chars(LAPATRN);
 /* line 316: */
FCAAOSI_intchars( (*(&(JAPATRN_fm->Macparno))), &MAPATRN );
PWOATRN_print_chars(MAPATRN);
} 
break;
default: 
 /* line 317: */
OAPATRN = '?' ;
GFBAOSL_put(LEAAOST_out, A_HVEC(PAPATRN,A_UNITE(NAPATRN,mode6,6,OAPATRN),A68_52 ));
break;
} 
A_PROC_EXIT(print_formula);
return;
} 
#undef NL

A_STATIC A68_VOID  SAPATRN_print_type(A68_200  T, A68_472  Close)
{ 
A68_203 * ABPATRN_st;
A68_200  BBPATRN;  /* united object - for case conformity */
A68_201 * CBPATRN_tn;
A68_VC  DBPATRN;  /* avoid structure result */
A68_203 * EBPATRN_tstr;
A68_VC  FBPATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  GBPATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  HBPATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_204 * IBPATRN_tfn;
A68_202 * LBPATRN_tr;
A68_VC  MBPATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  NBPATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_205 * OBPATRN_tb;
A68_VC  PBPATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  QBPATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_206 * RBPATRN_ts;
A68_VC  UBPATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_207 * VBPATRN_tv;
A68_193 * YBPATRN_tm;
A68_VC  BCPATRN;  /* avoid structure result */
A68_VC  CCPATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(print_type);
 /* line 320: */
 /* line 321: */
{ 
 /* line 328: */
 /* line 329: */
 /* line 330: */
BBPATRN = T ;
switch ( BBPATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
CBPATRN_tn = (BBPATRN.data.mode1);
 /* line 331: */
VUOATRN_findname( (*(&(CBPATRN_tn->Typeno))), (-1), Close, &DBPATRN );
TWOATRN_print_id(DBPATRN);
break;
case 3: /* REF STRUCT(MODE200,REF MODE203)  */
EBPATRN_tstr = (BBPATRN.data.mode3);
 /* line 332: */
{ 
PWOATRN_print_chars(A_HVEC(FBPATRN,'(',A68_CHAR ));
 /* line 333: */
ABPATRN_st = EBPATRN_tstr;
SAPATRN_print_type((*(&(EBPATRN_tstr->Elem))), Close);
 /* line 334: */
for ( ;; )
{ 
 /* line 335: */
if ( !(((ABPATRN_st = (*(&(ABPATRN_st->Rest))))!=GAAATRN_niltstr)) ) break;
PWOATRN_print_chars(A_HVEC(GBPATRN,',',A68_CHAR ));
SAPATRN_print_type((*(&(ABPATRN_st->Elem))), Close);
}
 /* line 336: */
 /* line 337: */
 /* line 338: */
PWOATRN_print_chars(A_HVEC(HBPATRN,')',A68_CHAR ));
} 
break;
case 4: /* REF STRUCT(MODE200,MODE200)  */
IBPATRN_tfn = (BBPATRN.data.mode4);
 /* line 339: */
{ 
WAPATRN_print_brackettype((*(&(IBPATRN_tfn->From))), Close);
PWOATRN_print_chars(KBPATRN);
 /* line 340: */
 /* line 341: */
 /* line 342: */
WAPATRN_print_brackettype((*(&(IBPATRN_tfn->To))), Close);
} 
break;
case 2: /* REF STRUCT(MODE184,MODE200)  */
LBPATRN_tr = (BBPATRN.data.mode2);
 /* line 343: */
{ 
PWOATRN_print_chars(A_HVEC(MBPATRN,'[',A68_CHAR ));
DYOATRN_print_formula((*(&(LBPATRN_tr->Size))));
PWOATRN_print_chars(A_HVEC(NBPATRN,']',A68_CHAR ));
 /* line 344: */
 /* line 345: */
 /* line 346: */
WAPATRN_print_brackettype((*(&(LBPATRN_tr->Elem))), Close);
} 
break;
case 5: /* REF STRUCT(MODE200)  */
OBPATRN_tb = (BBPATRN.data.mode5);
 /* line 347: */
{ 
PWOATRN_print_chars(A_HVEC(PBPATRN,'(',A68_CHAR ));
SAPATRN_print_type((*(&(OBPATRN_tb->Type))), Close);
 /* line 348: */
PWOATRN_print_chars(A_HVEC(QBPATRN,')',A68_CHAR ));
} 
break;
case 6: /* REF STRUCT(MODE184,MODE200)  */
RBPATRN_ts = (BBPATRN.data.mode6);
 /* line 349: */
{ 
PWOATRN_print_chars(TBPATRN);
DYOATRN_print_formula((*(&(RBPATRN_ts->Size))));
PWOATRN_print_chars(A_HVEC(UBPATRN,']',A68_CHAR ));
 /* line 350: */
 /* line 351: */
 /* line 352: */
SAPATRN_print_type((*(&(RBPATRN_ts->Char))), Close);
} 
break;
case 7: /* REF STRUCT(INT)  */
VBPATRN_tv = (BBPATRN.data.mode7);
 /* line 353: */
PWOATRN_print_chars(XBPATRN);
break;
case 8: /* REF STRUCT(INT)  */
YBPATRN_tm = (BBPATRN.data.mode8);
 /* line 354: */
{ 
PWOATRN_print_chars(ACPATRN);
 /* line 355: */
FCAAOSI_intchars( (*(&(YBPATRN_tm->Macparno))), &BCPATRN );
PWOATRN_print_chars(BCPATRN);
} 
break;
default: 
 /* line 356: */
 /* line 357: */
PWOATRN_print_chars(A_HVEC(CCPATRN,'?',A68_CHAR ));
break;
} 
} 
A_PROC_EXIT(print_type);
return;
} 
#undef NL

A_STATIC A68_VOID  FCPATRN_print_const(A68_222  Const, A68_472  Close)
{ 
A68_237 * GCPATRN_cstr;
A68_226 * HCPATRN_calt;
A68_222  ICPATRN;  /* united object - for case conformity */
A68_216 * JCPATRN_cn;
A68_305  KCPATRN;  /* OPERATORS - simple index */
A68_INT  LCPATRN;  /* YIELD */
A68_205 * MCPATRN_ct;
A68_219 * NCPATRN_cr;
A68_VC  OCPATRN;  /* avoid structure result */
A68_218 * TCPATRN_ci;
A68_VC  UCPATRN;  /* avoid structure result */
A68_217 * VCPATRN_cp;
A68_VC  WCPATRN;  /* avoid structure result */
A68_304  XCPATRN;  /* OPERATORS - simple index */
A68_INT  YCPATRN;  /* YIELD */
A68_215 * ZCPATRN_tdec;
A68_213  ADPATRN;  /* united object - for case conformity */
A68_210 * BDPATRN_nc;
A68_VC  CDPATRN;  /* OPERATORS - simple index */
A68_INT  DDPATRN;  /* YIELD */
A68_229 * EDPATRN_ca;
A68_VC  FDPATRN;  /* avoid structure result */
A68_236 * GDPATRN_cr;
A68_243 * HDPATRN_crp;
A68_477  IDPATRN;  /* avoid structure result */
A68_477  JDPATRN_repl;
A68_237 * SDPATRN_cs;
A68_226 * TDPATRN_cat;
A68_220 * UDPATRN_cq;
A68_248 * VDPATRN_cb;
A68_225 * WDPATRN_cpr;
A68_VC  XDPATRN;  /* avoid structure result */
A68_VC  YDPATRN;  /* avoid structure result */
A68_VC  ZDPATRN_chars;
A68_INT  CEPATRN;  /* YIELD */
A68_INT  FEPATRN;  /* YIELD */
A68_223 * GEPATRN_cqt;
A68_INT  HEPATRN_typeno;
A68_VC  IEPATRN;  /* avoid structure result */
A68_VC  JEPATRN;  /* avoid structure result */
A68_VC  KEPATRN_cqchars;
A68_VC  LEPATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT * MEPATRN_primno;
A68_32  NEPATRN;  /* forall yield */
A68_INT  OEPATRN;  /* forall loop counter */
A68_VC  PEPATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_249 * QEPATRN_cg;
A68_232 * TEPATRN_ui;
A68_233 * UEPATRN_ut;
A68_242 * XEPATRN_ucon;
A68_238 * GFPATRN_ucc;
A68_246 * JFPATRN_ua;
A_PROC_ENTRY(print_const);
 /* line 360: */
 /* line 361: */
{ 
 /* line 363: */
 /* line 364: */
ICPATRN = Const ;
switch ( ICPATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
JCPATRN_cn = (ICPATRN.data.mode1);
 /* line 365: */
 /* line 366: */
KCPATRN = (*(&(Close.Env->Consts))) ;
LCPATRN = (*(&(JCPATRN_cn->Constno))) ;
TWOATRN_print_id((*(&((*(&A_VINDEX(KCPATRN,LCPATRN)))->Constname))));
break;
case 7: /* REF STRUCT(MODE200)  */
MCPATRN_ct = (ICPATRN.data.mode7);
 /* line 367: */
 /* line 368: */
SAPATRN_print_type((*(&(MCPATRN_ct->Type))), Close);
break;
case 8: /* REF STRUCT(INT,MODE199)  */
NCPATRN_cr = (ICPATRN.data.mode8);
 /* line 369: */
{ 
VUOATRN_findname( (*(&(NCPATRN_cr->Typeno))), 1, Close, &OCPATRN );
TWOATRN_print_id(OCPATRN);
 /* line 370: */
PWOATRN_print_chars(QCPATRN);
DYOATRN_print_formula((*(&((&(NCPATRN_cr->Range))->Lwb))));
 /* line 371: */
PWOATRN_print_chars(SCPATRN);
DYOATRN_print_formula((*(&((&(NCPATRN_cr->Range))->Upb))));
 /* line 372: */
 /* line 373: */
 /* line 374: */
HWOATRN_print_char(')');
} 
break;
case 3: /* REF STRUCT(INT,MODE184)  */
TCPATRN_ci = (ICPATRN.data.mode3);
 /* line 375: */
{ 
VUOATRN_findname( (*(&(TCPATRN_ci->Typeno))), 1, Close, &UCPATRN );
TWOATRN_print_id(UCPATRN);
 /* line 376: */
HWOATRN_print_char('/');
 /* line 377: */
 /* line 378: */
DYOATRN_print_formula((*(&(TCPATRN_ci->Index))));
} 
break;
case 2: /* REF STRUCT(INT,INT)  */
VCPATRN_cp = (ICPATRN.data.mode2);
 /* line 379: */
{ 
VUOATRN_findname( (*(&(VCPATRN_cp->Typeno))), (*(&(VCPATRN_cp->Primno))), Close, &WCPATRN );
TWOATRN_print_id(WCPATRN);
 /* line 380: */
XCPATRN = (*(&(Close.Env->Types))) ;
YCPATRN = (*(&(VCPATRN_cp->Typeno))) ;
ZCPATRN_tdec = (*(&A_VINDEX(XCPATRN,YCPATRN)));
 /* line 381: */
 /* line 382: */
ADPATRN = (*(&(ZCPATRN_tdec->Body))) ;
switch ( ADPATRN.mode )
{ 
case 4: /* REF STRUCT(REF MODE26,REF MODE26)  */
BDPATRN_nc = (ADPATRN.data.mode4);
 /* line 383: */
{ 
HWOATRN_print_char('\'');
 /* line 384: */
 /* line 385: */
 /* line 386: */
 /* line 387: */
CDPATRN = (*(&(BDPATRN_nc->Chars))) ;
DDPATRN = (*(&(VCPATRN_cp->Primno))) ;
HWOATRN_print_char((*(&A_VINDEX(CDPATRN,DDPATRN))));
} 
break;
default: 
 /* line 388: */
 /* line 389: */
/*SKIP*/;
break;
} 
} 
break;
case 13: /* REF STRUCT(INT,INT,MODE222)  */
EDPATRN_ca = (ICPATRN.data.mode13);
 /* line 390: */
{ 
VUOATRN_findname( (*(&(EDPATRN_ca->Typeno))), (*(&(EDPATRN_ca->Altno))), Close, &FDPATRN );
TWOATRN_print_id(FDPATRN);
 /* line 391: */
HWOATRN_print_char('&');
 /* line 392: */
 /* line 393: */
FCPATRN_print_const((*(&(EDPATRN_ca->Assoc))), Close);
} 
break;
case 20: /* REF STRUCT(MODE184,MODE222)  */
GDPATRN_cr = (ICPATRN.data.mode20);
 /* line 394: */
{ 
HWOATRN_print_char('[');
DYOATRN_print_formula((*(&(GDPATRN_cr->Size))));
HWOATRN_print_char(']');
 /* line 395: */
 /* line 396: */
 /* line 397: */
FCPATRN_print_const((*(&(GDPATRN_cr->Elem))), Close);
} 
break;
case 27: /* REF STRUCT(MODE184,MODE222)  */
HDPATRN_crp = (ICPATRN.data.mode27);
 /* line 398: */
{ 
QVOATRN_get_replicator( (*(&(HDPATRN_crp->Repl))), Close.Env, &IDPATRN );
JDPATRN_repl = IDPATRN;
 /* line 399: */
PWOATRN_print_chars(LDPATRN);
TWOATRN_print_id(JDPATRN_repl.Id);
PWOATRN_print_chars(NDPATRN);
 /* line 400: */
DYOATRN_print_formula(JDPATRN_repl.Range.Lwb);
PWOATRN_print_chars(PDPATRN);
 /* line 401: */
DYOATRN_print_formula(JDPATRN_repl.Range.Upb);
PWOATRN_print_chars(RDPATRN);
 /* line 402: */
 /* line 403: */
 /* line 404: */
FCPATRN_print_const((*(&(HDPATRN_crp->Body))), Close);
} 
break;
case 21: /* REF STRUCT(MODE222,REF MODE237)  */
SDPATRN_cs = (ICPATRN.data.mode21);
 /* line 405: */
{ 
GCPATRN_cstr = SDPATRN_cs;
 /* line 406: */
HWOATRN_print_char('(');
FCPATRN_print_const((*(&(GCPATRN_cstr->Elem))), Close);
 /* line 407: */
for ( ;; )
{ 
 /* line 408: */
if ( !(((GCPATRN_cstr = (*(&(GCPATRN_cstr->Rest))))!=IAAATRN_nilustr)) ) break;
HWOATRN_print_char(',');
FCPATRN_print_const((*(&(GCPATRN_cstr->Elem))), Close);
}
 /* line 409: */
 /* line 410: */
 /* line 411: */
HWOATRN_print_char(')');
} 
break;
case 10: /* REF STRUCT(MODE222,REF MODE226)  */
TDPATRN_cat = (ICPATRN.data.mode10);
 /* line 412: */
{ 
HCPATRN_calt = TDPATRN_cat;
 /* line 413: */
HWOATRN_print_char('(');
FCPATRN_print_const((*(&(HCPATRN_calt->Alt))), Close);
 /* line 414: */
for ( ;; )
{ 
 /* line 415: */
if ( !(((HCPATRN_calt = (*(&(HCPATRN_calt->Rest))))!=HAAATRN_nilualts)) ) break;
HWOATRN_print_char('|');
FCPATRN_print_const((*(&(HCPATRN_calt->Alt))), Close);
}
 /* line 416: */
 /* line 417: */
 /* line 418: */
HWOATRN_print_char(')');
} 
break;
case 4: /* REF STRUCT(MODE200)  */
UDPATRN_cq = (ICPATRN.data.mode4);
{ 
HWOATRN_print_char('?');
 /* line 419: */
SAPATRN_print_type((*(&(UDPATRN_cq->Querytype))), Close);
} 
break;
case 32: /* REF STRUCT(MODE222)  */
VDPATRN_cb = (ICPATRN.data.mode32);
 /* line 420: */
{ 
HWOATRN_print_char('(');
FCPATRN_print_const((*(&(VDPATRN_cb->Unit))), Close);
 /* line 421: */
HWOATRN_print_char(')');
} 
break;
case 9: /* REF STRUCT(INT,INT,INT)  */
WDPATRN_cpr = (ICPATRN.data.mode9);
 /* line 422: */
{ 
VUOATRN_findname( (*(&(WDPATRN_cpr->Typeno))), 1, Close, &XDPATRN );
TWOATRN_print_id(XDPATRN);
 /* line 423: */
HVOATRN_find_newchars( (*(&(WDPATRN_cpr->Typeno))), Close, &YDPATRN );
ZDPATRN_chars = YDPATRN;
 /* line 424: */
PWOATRN_print_chars(BEPATRN);
 /* line 425: */
CEPATRN = (*(&(WDPATRN_cpr->Firstno))) ;
HWOATRN_print_char((*(&A_VINDEX(ZDPATRN_chars,CEPATRN))));
 /* line 426: */
PWOATRN_print_chars(EEPATRN);
 /* line 427: */
FEPATRN = (*(&(WDPATRN_cpr->Lastno))) ;
HWOATRN_print_char((*(&A_VINDEX(ZDPATRN_chars,FEPATRN))));
 /* line 428: */
 /* line 429: */
 /* line 430: */
HWOATRN_print_char(')');
} 
break;
case 5: /* REF STRUCT(INT,REF MODE32)  */
GEPATRN_cqt = (ICPATRN.data.mode5);
 /* line 431: */
{ 
HEPATRN_typeno = (*(&(GEPATRN_cqt->Typeno)));
 /* line 432: */
VUOATRN_findname( HEPATRN_typeno, 1, Close, &IEPATRN );
TWOATRN_print_id(IEPATRN);
 /* line 433: */
HVOATRN_find_newchars( HEPATRN_typeno, Close, &JEPATRN );
KEPATRN_cqchars = JEPATRN;
 /* line 434: */
PWOATRN_print_chars(A_HVEC(LEPATRN,'\"',A68_CHAR ));
 /* line 435: */
 /* line 436: */
NEPATRN = (*(&(GEPATRN_cqt->String))) ;
OEPATRN = NEPATRN.upb -1;
MEPATRN_primno = NEPATRN.data;
for (;OEPATRN-- >= 0;
(MEPATRN_primno++
) )
{
HWOATRN_print_char((*(&A_VINDEX(KEPATRN_cqchars,(*MEPATRN_primno)))));
}
 /* line 437: */
 /* line 438: */
 /* line 439: */
PWOATRN_print_chars(A_HVEC(PEPATRN,'\"',A68_CHAR ));
} 
break;
case 33: /* REF STRUCT(MODE184,MODE222)  */
QEPATRN_cg = (ICPATRN.data.mode33);
 /* line 440: */
{ 
PWOATRN_print_chars(SEPATRN);
DYOATRN_print_formula((*(&(QEPATRN_cg->Size))));
HWOATRN_print_char(']');
 /* line 441: */
 /* line 442: */
 /* line 443: */
FCPATRN_print_const((*(&(QEPATRN_cg->Char))), Close);
} 
break;
case 16: /* REF STRUCT(MODE222,MODE184)  */
TEPATRN_ui = (ICPATRN.data.mode16);
 /* line 444: */
{ 
FCPATRN_print_const((*(&(TEPATRN_ui->Unit))), Close);
HWOATRN_print_char('[');
 /* line 445: */
DYOATRN_print_formula((*(&(TEPATRN_ui->Index))));
 /* line 446: */
 /* line 447: */
HWOATRN_print_char(']');
} 
break;
case 17: /* REF STRUCT(MODE222,MODE199)  */
UEPATRN_ut = (ICPATRN.data.mode17);
 /* line 448: */
{ 
FCPATRN_print_const((*(&(UEPATRN_ut->Unit))), Close);
HWOATRN_print_char('[');
 /* line 449: */
DYOATRN_print_formula((*(&((&(UEPATRN_ut->Range))->Lwb))));
PWOATRN_print_chars(WEPATRN);
 /* line 450: */
DYOATRN_print_formula((*(&((&(UEPATRN_ut->Range))->Upb))));
 /* line 451: */
 /* line 452: */
HWOATRN_print_char(']');
} 
break;
case 26: /* REF STRUCT(MODE184,MODE222,MODE222)  */
XEPATRN_ucon = (ICPATRN.data.mode26);
 /* line 453: */
{ 
PWOATRN_print_chars(ZEPATRN);
DYOATRN_print_formula((*(&(XEPATRN_ucon->Cond))));
 /* line 454: */
PWOATRN_print_chars(BFPATRN);
FCPATRN_print_const((*(&(XEPATRN_ucon->True))), Close);
 /* line 455: */
PWOATRN_print_chars(DFPATRN);
FCPATRN_print_const((*(&(XEPATRN_ucon->False))), Close);
 /* line 456: */
 /* line 457: */
 /* line 458: */
PWOATRN_print_chars(FFPATRN);
} 
break;
case 22: /* REF STRUCT(BOOL,INT,MODE222,MODE222)  */
GFPATRN_ucc = (ICPATRN.data.mode22);
 /* line 459: */
{ 
HWOATRN_print_char('(');
FCPATRN_print_const((*(&(GFPATRN_ucc->Left))), Close);
 /* line 460: */
PWOATRN_print_chars(IFPATRN);
 /* line 461: */
FCPATRN_print_const((*(&(GFPATRN_ucc->Right))), Close);
 /* line 462: */
 /* line 463: */
HWOATRN_print_char(')');
} 
break;
case 30: /* REF STRUCT(MODE222,MODE175)  */
JFPATRN_ua = (ICPATRN.data.mode30);
 /* line 464: */
 /* line 465: */
FCPATRN_print_const((*(&(JFPATRN_ua->Unit))), Close);
break;
case 6: /* REF STRUCT(INT)  */
 /* line 466: */
PWOATRN_print_chars(LFPATRN);
break;
default: 
 /* line 467: */
 /* line 468: */
HWOATRN_print_char('?');
break;
} 
} 
A_PROC_EXIT(print_const);
return;
} 
#undef NL

A_STATIC A68_VOID  NFPATRN_get_formula(A68_198  Fr, A68_184  *ReturnedValue)
{ 
A68_198  OFPATRN;  /* united object - for case conformity */
A68_184  PFPATRN_f;
A68_184  QFPATRN;  /* clause result */
A68_184  TFPATRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(get_formula);
 /* line 471: */
 /* line 472: */
OFPATRN = Fr ;
switch ( OFPATRN.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26)  */
case 2: /* REF STRUCT(INT,MODE184,MODE184)  */
case 3: /* REF STRUCT(INT)  */
case 4: /* REF STRUCT(INT)  */
case 5: /* REF STRUCT(MODE184,INT,MODE184)  */
case 6: /* REF STRUCT(INT,MODE184)  */
case 7: /* REF STRUCT(MODE184,MODE184,MODE184)  */
case 8: /* REF STRUCT(MODE184)  */
case 9: /* REF STRUCT(INT)  */
case 10: /* REF STRUCT(INT)  */
A_UNCPY(PFPATRN_f,OFPATRN);
 /* line 473: */
QFPATRN = PFPATRN_f;
break;
default: 
NKDAOST_sysfault(SFPATRN);
 /* line 474: */
QFPATRN = TFPATRN;
break;
} 
A_PROC_EXIT(get_formula);
*ReturnedValue = (QFPATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  WFPATRN_macspec_macparam(A68_283  Spec, A68_472  Close, A68_265  *ReturnedValue)
{ 
A68_283  XFPATRN;  /* united object - for case conformity */
A68_176  YFPATRN_an;
A68_302  ZFPATRN;  /* OPERATORS - simple index */
A68_INT  AGPATRN;  /* YIELD */
A68_181 * BGPATRN_adec;
A68_265  CGPATRN;  /* collateral clause result */
A68_266  DGPATRN;  /* OPERATORS - mode -> union mode */
A68_183  EGPATRN;  /* YIELD */
A68_265  FGPATRN;  /* clause result */
A68_188  GGPATRN_fn;
A68_303  HGPATRN;  /* OPERATORS - simple index */
A68_INT  IGPATRN;  /* YIELD */
A68_197 * JGPATRN_idec;
A68_265  KGPATRN;  /* collateral clause result */
A68_184  LGPATRN;  /* avoid structure result */
A68_266  MGPATRN;  /* OPERATORS - mode -> union mode */
A68_195  NGPATRN;  /* YIELD */
A68_201  OGPATRN_tn;
A68_304  PGPATRN;  /* OPERATORS - simple index */
A68_INT  QGPATRN;  /* YIELD */
A68_215 * RGPATRN_tdec;
A68_213  SGPATRN;  /* united object - for case conformity */
A68_209 * TGPATRN_tg;
A68_265  UGPATRN;  /* collateral clause result */
A68_266  VGPATRN;  /* OPERATORS - mode -> union mode */
A68_265  YGPATRN;  /* OPERATORS - skip to mode */
A68_216  ZGPATRN_cn;
A68_305  AHPATRN;  /* OPERATORS - simple index */
A68_INT  BHPATRN;  /* YIELD */
A68_221 * CHPATRN_cdec;
A68_265  DHPATRN;  /* collateral clause result */
A68_266  EHPATRN;  /* OPERATORS - mode -> union mode */
A68_267  FHPATRN;  /* YIELD */
A68_253  GHPATRN_fnn;
A68_306  HHPATRN;  /* OPERATORS - simple index */
A68_INT  IHPATRN;  /* YIELD */
A68_298 * JHPATRN_fdec;
A68_294  KHPATRN;  /* united object - for case conformity */
A68_267 * LHPATRN_ut;
A68_222  MHPATRN;  /* united object - for case conformity */
A68_245 * NHPATRN_us;
A68_252  OHPATRN;  /* united object - for case conformity */
A68_253  PHPATRN_inst;
A68_265  QHPATRN;  /* collateral clause result */
A68_262  RHPATRN;  /* collateral clause result */
A68_264  SHPATRN;  /* OPERATORS - nil -> mode */
A68_175  THPATRN;  /* OPERATORS - mode -> union mode */
A68_266  UHPATRN;  /* OPERATORS - mode -> union mode */
A68_265  XHPATRN;  /* OPERATORS - skip to mode */
A68_239 * YHPATRN_um;
A68_265  ZHPATRN;  /* collateral clause result */
A68_266  AIPATRN;  /* OPERATORS - mode -> union mode */
A68_262  BIPATRN;  /* YIELD */
A68_265  EIPATRN;  /* OPERATORS - skip to mode */
A68_265  HIPATRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(macspec_macparam);
 /* line 477: */
 /* line 478: */
XFPATRN = Spec ;
switch ( XFPATRN.mode )
{ 
case 1: /* STRUCT(INT)  */
YFPATRN_an = (XFPATRN.data.mode1);
{ 
ZFPATRN = (*(&(Close.Env->Attrs))) ;
AGPATRN = YFPATRN_an.Attrno ;
BGPATRN_adec = (*(&A_VINDEX(ZFPATRN,AGPATRN)));
 /* line 479: */
CGPATRN.Sort = AJAATRN_explicitmacpar;
 /* line 480: */
 /* line 481: */
EGPATRN = (*EEAATRN_makeattrtag((*(&(BGPATRN_adec->Value))))) ;
CGPATRN.Param = A_UNITE(DGPATRN,mode1,1,EGPATRN);
FGPATRN = CGPATRN;
} 
break;
case 2: /* STRUCT(INT)  */
GGPATRN_fn = (XFPATRN.data.mode2);
{ 
HGPATRN = (*(&(Close.Env->Ints))) ;
IGPATRN = GGPATRN_fn.Intno ;
JGPATRN_idec = (*(&A_VINDEX(HGPATRN,IGPATRN)));
 /* line 482: */
KGPATRN.Sort = AJAATRN_explicitmacpar;
 /* line 483: */
 /* line 484: */
NFPATRN_get_formula( (*(&(JGPATRN_idec->Value))), &LGPATRN );
NGPATRN = (*DFAATRN_makeformulatag(LGPATRN)) ;
KGPATRN.Param = A_UNITE(MGPATRN,mode2,2,NGPATRN);
FGPATRN = KGPATRN;
} 
break;
case 3: /* STRUCT(INT)  */
OGPATRN_tn = (XFPATRN.data.mode3);
{ 
PGPATRN = (*(&(Close.Env->Types))) ;
QGPATRN = OGPATRN_tn.Typeno ;
RGPATRN_tdec = (*(&A_VINDEX(PGPATRN,QGPATRN)));
 /* line 485: */
 /* line 486: */
SGPATRN = (*(&(RGPATRN_tdec->Body))) ;
switch ( SGPATRN.mode )
{ 
case 3: /* REF STRUCT(MODE200)  */
TGPATRN_tg = (SGPATRN.data.mode3);
UGPATRN.Sort = AJAATRN_explicitmacpar;
 /* line 487: */
UGPATRN.Param = A_UNITE(VGPATRN,mode3,3,(*TGPATRN_tg));
FGPATRN = UGPATRN;
break;
default: 
NKDAOST_sysfault(XGPATRN);
 /* line 488: */
 /* line 489: */
 /* line 490: */
FGPATRN = YGPATRN;
break;
} 
} 
break;
case 4: /* STRUCT(INT)  */
ZGPATRN_cn = (XFPATRN.data.mode4);
{ 
AHPATRN = (*(&(Close.Env->Consts))) ;
BHPATRN = ZGPATRN_cn.Constno ;
CHPATRN_cdec = (*(&A_VINDEX(AHPATRN,BHPATRN)));
 /* line 491: */
DHPATRN.Sort = AJAATRN_explicitmacpar;
 /* line 492: */
 /* line 493: */
FHPATRN = (*WGAATRN_makeunittag((*(&(CHPATRN_cdec->Value))))) ;
DHPATRN.Param = A_UNITE(EHPATRN,mode4,4,FHPATRN);
FGPATRN = DHPATRN;
} 
break;
case 5: /* STRUCT(INT)  */
GHPATRN_fnn = (XFPATRN.data.mode5);
{ 
HHPATRN = (*(&(Close.Env->Fns))) ;
IHPATRN = GHPATRN_fnn.Fnno ;
JHPATRN_fdec = (*(&A_VINDEX(HHPATRN,IHPATRN)));
 /* line 494: */
 /* line 495: */
KHPATRN = (*(&(JHPATRN_fdec->Fnbody))) ;
switch ( KHPATRN.mode )
{ 
case 1: /* REF STRUCT(MODE222)  */
LHPATRN_ut = (KHPATRN.data.mode1);
 /* line 496: */
 /* line 497: */
MHPATRN = (*(&(LHPATRN_ut->Tag))) ;
switch ( MHPATRN.mode )
{ 
case 29: /* REF STRUCT(REF MODE251,MODE222)  */
NHPATRN_us = (MHPATRN.data.mode29);
 /* line 498: */
 /* line 499: */
OHPATRN = (*(&((*(&(NHPATRN_us->Body)))->Step))) ;
switch ( OHPATRN.mode )
{ 
case 5: /* STRUCT(INT)  */
PHPATRN_inst = (OHPATRN.data.mode5);
 /* line 500: */
QHPATRN.Sort = AJAATRN_explicitmacpar;
RHPATRN.Fnno = PHPATRN_inst.Fnno;
RHPATRN.Macparams = A_VVAC(SHPATRN);
RHPATRN.Attr = A_UNITE(THPATRN,mode5,5,(&ZHAATRN_attrnull));
 /* line 501: */
QHPATRN.Param = A_UNITE(UHPATRN,mode5,5,RHPATRN);
FGPATRN = QHPATRN;
break;
default: 
NKDAOST_sysfault(WHPATRN);
 /* line 502: */
 /* line 503: */
FGPATRN = XHPATRN;
break;
} 
break;
case 23: /* REF STRUCT(MODE262,MODE222)  */
YHPATRN_um = (MHPATRN.data.mode23);
ZHPATRN.Sort = AJAATRN_explicitmacpar;
 /* line 504: */
BIPATRN = (*(&(YHPATRN_um->Inst))) ;
ZHPATRN.Param = A_UNITE(AIPATRN,mode5,5,BIPATRN);
FGPATRN = ZHPATRN;
break;
default: 
NKDAOST_sysfault(DIPATRN);
 /* line 505: */
 /* line 506: */
FGPATRN = EIPATRN;
break;
} 
break;
default: 
NKDAOST_sysfault(GIPATRN);
 /* line 507: */
 /* line 508: */
 /* line 509: */
FGPATRN = HIPATRN;
break;
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(macspec_macparam);
*ReturnedValue = (FGPATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  LIPATRN_setup_reporting(void)
{ 
A_PROC_ENTRY(setup_reporting);
{ 
IIPATRN_currentclean = A68_FALSE;
JIPATRN_failure = A68_FALSE;
 /* line 521: */
 /* line 522: */
KIPATRN_linesafterfault = 0;
} 
A_PROC_EXIT(setup_reporting);
return;
} 
#undef NL

A_STATIC A68_VOID  NIPATRN_checklineno(A68_471 * Diag)
{ 
A68_36  PIPATRN;  /* CALL */
A_PROC_ENTRY(checklineno);
 /* line 525: */
 /* line 526: */
{ 
 /* line 527: */
if ( JIPATRN_failure )
{ 
 /* line 528: */
if ( ((KIPATRN_linesafterfault+=1)>100) )
{ 
 /* line 529: */
 /* line 530: */
 /* line 531: */
PIPATRN = (*(&(Diag->Flt))) ;
A_CALLPROC(PIPATRN,(QIPATRN),(QIPATRN,(PIPATRN).nonlocals));
} 
} 
} 
A_PROC_EXIT(checklineno);
return;
} 
#undef NL

A_STATIC A68_VOID  TIPATRN_print_macparams(A68_264  Pars, A68_472  Close)
{ 
A68_BOOL  UIPATRN_first;
A68_BOOL  VIPATRN;  /* optbool result */
A68_265 * YIPATRN_p;
A68_INT  ZIPATRN;  /* forall loop counter */
A68_266  CJPATRN;  /* united object - for case conformity */
A68_183  DJPATRN_atag;
A68_195  EJPATRN_ftag;
A68_209  FJPATRN_ttag;
A68_267  GJPATRN_ctag;
A68_262  HJPATRN_inst;
A68_306  IJPATRN;  /* OPERATORS - simple index */
A68_INT  JJPATRN;  /* YIELD */
A68_VC  KJPATRN_fnname;
A68_175  LJPATRN;  /* united object - for case conformity */
A_PROC_ENTRY(print_macparams);
 /* line 534: */
 /* line 535: */
{ 
UIPATRN_first = A68_TRUE;
 /* line 536: */
VIPATRN = ! A_VSTRUCTCOMP(Pars,ABAATRN_nilmacparams);
if ( VIPATRN )
{ /* line 537: */
VIPATRN = (Pars.upb>0);
}
if ( VIPATRN )
{ 
PWOATRN_print_chars(XIPATRN);
 /* line 538: */
 /* line 539: */
ZIPATRN = Pars.upb -1;
YIPATRN_p = Pars.data;
for (;ZIPATRN-- >= 0;
(YIPATRN_p++
) )
{
if ( UIPATRN_first )
{ 
UIPATRN_first = A68_FALSE;
} 
else
{ 
PWOATRN_print_chars(BJPATRN);
} 
 /* line 540: */
 /* line 541: */
CJPATRN = (*(&(YIPATRN_p->Param))) ;
switch ( CJPATRN.mode )
{ 
case 1: /* STRUCT(MODE175)  */
DJPATRN_atag = (CJPATRN.data.mode1);
 /* line 542: */
JXOATRN_print_attr(DJPATRN_atag.Tag, Close);
break;
case 2: /* STRUCT(MODE184)  */
EJPATRN_ftag = (CJPATRN.data.mode2);
 /* line 543: */
DYOATRN_print_formula(EJPATRN_ftag.Tag);
break;
case 3: /* STRUCT(MODE200)  */
FJPATRN_ttag = (CJPATRN.data.mode3);
 /* line 544: */
SAPATRN_print_type(FJPATRN_ttag.Tag, Close);
break;
case 4: /* STRUCT(MODE222)  */
GJPATRN_ctag = (CJPATRN.data.mode4);
 /* line 545: */
FCPATRN_print_const(GJPATRN_ctag.Tag, Close);
break;
case 5: /* STRUCT(INT,REF MODE264,MODE175)  */
HJPATRN_inst = (CJPATRN.data.mode5);
 /* line 546: */
{ 
IJPATRN = (*(&(Close.Env->Fns))) ;
JJPATRN = HJPATRN_inst.Fnno ;
KJPATRN_fnname = (*(&((*(&A_VINDEX(IJPATRN,JJPATRN)))->Fnname)));
 /* line 547: */
TWOATRN_print_id(KJPATRN_fnname);
 /* line 548: */
TIPATRN_print_macparams(HJPATRN_inst.Macparams, Close);
 /* line 549: */
 /* line 550: */
LJPATRN = HJPATRN_inst.Attr ;
switch ( LJPATRN.mode )
{ 
case 5: /* REF STRUCT(INT)  */
 /* line 551: */
/*SKIP*/;
break;
default: 
PWOATRN_print_chars(NJPATRN);
 /* line 552: */
 /* line 553: */
 /* line 554: */
 /* line 555: */
 /* line 556: */
JXOATRN_print_attr(HJPATRN_inst.Attr, Close);
break;
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
}
 /* line 557: */
 /* line 558: */
 /* line 559: */
PWOATRN_print_chars(PJPATRN);
} 
} 
A_PROC_EXIT(print_macparams);
return;
} 
#undef NL

A_STATIC A68_VOID  TJPATRN_identifyfn(A68_BOOL  Expanded, A68_472  Close, A68_471 * Diag)
{ 
A68_470 ** UJPATRN_mlist;
A68_INT  VJPATRN;  /* ADICOPS - MOD */
A68_INT  WJPATRN;  /* ADICOPS - MOD */
A68_INT  XJPATRN;  /* ADICOPS - MOD */
A68_INT  YJPATRN;  /* to part of loop */
A68_INT  ZJPATRN;  /* loop control */
A_PROC_ENTRY(identifyfn);
 /* line 562: */
 /* line 563: */
{ 
JUOATRN_start_printing();
 /* line 564: */
UJPATRN_mlist = (&(Diag->Monitors));
 /* line 565: */
WJPATRN = ((*(&((*UJPATRN_mlist)->Depth)))-1) ;
XJPATRN = 20 ;
YJPATRN = A_MOD(WJPATRN,XJPATRN,VJPATRN);
for ( ZJPATRN = 1;
ZJPATRN <= YJPATRN;
ZJPATRN += 1 )
{ 
PWOATRN_print_chars(BKPATRN);
}
 /* line 566: */
if ( (*(&((*UJPATRN_mlist)->Mac))) )
{ 
PWOATRN_print_chars(DKPATRN);
} 
else
{ 
PWOATRN_print_chars(FKPATRN);
} 
 /* line 567: */
TWOATRN_print_id((*(&((*UJPATRN_mlist)->Fnname))));
 /* line 568: */
TIPATRN_print_macparams((*(&((*UJPATRN_mlist)->Params))), Close);
 /* line 569: */
if ( Expanded )
{ 
PWOATRN_print_chars(HKPATRN);
} 
 /* line 570: */
NIPATRN_checklineno(Diag);
 /* line 571: */
 /* line 572: */
KUOATRN_end_printing();
} 
A_PROC_EXIT(identifyfn);
return;
} 
#undef NL

A_STATIC A68_VOID  KKPATRN_setmonitor(A68_298 * Fdec, A68_471 * Diag)
{ 
A68_INT  LKPATRN;  /* clause result */
A68_INT  MKPATRN_depth;
A68_470  NKPATRN;  /* collateral clause result */
A68_264  OKPATRN;  /* OPERATORS - nil -> mode */
A68_470 * PKPATRN;  /* YIELD */
A68_470 ** QKPATRN;  /* YIELD */
A_PROC_ENTRY(setmonitor);
 /* line 575: */
 /* line 576: */
{ 
 /* line 577: */
 /* line 578: */
if ( ((*(&(Diag->Monitors)))==BUOATRN_nilmonitor) )
{ 
LKPATRN = 1;
} 
else
{ 
 /* line 579: */
LKPATRN = ((*(&((*(&(Diag->Monitors)))->Depth)))+1);
} 
MKPATRN_depth = LKPATRN;
 /* line 580: */
 /* line 581: */
NKPATRN.Mac = (*(&(Fdec->Macro)));
NKPATRN.Fnname = (*(&(Fdec->Fnname)));
NKPATRN.Params = A_VVAC(OKPATRN);
NKPATRN.Depth = MKPATRN_depth;
NKPATRN.Rest = (*(&(Diag->Monitors)));
PKPATRN = A_HEAP(A68_470 ) ;
(*PKPATRN) = NKPATRN ;
QKPATRN = (&(Diag->Monitors)) ;
(*QKPATRN) = PKPATRN;
 /* line 582: */
 /* line 583: */
IIPATRN_currentclean = A68_TRUE;
} 
A_PROC_EXIT(setmonitor);
return;
} 
#undef NL

A_STATIC A68_VOID  SKPATRN_resetmonitor(A68_471 * Diag)
{ 
A68_INT  TKPATRN_depth;
A68_470 ** UKPATRN;  /* YIELD */
A68_BOOL  VKPATRN;  /* optbool result */
A68_INT  WKPATRN;  /* ADICOPS - MOD */
A68_INT  XKPATRN;  /* ADICOPS - MOD */
A68_INT  YKPATRN;  /* ADICOPS - MOD */
A68_INT  ZKPATRN;  /* to part of loop */
A68_INT  ALPATRN;  /* loop control */
A68_52  DLPATRN;  /* OPERATORS - mode -> union mode */
A68_VC  ELPATRN;  /* YIELD */
A68_85  FLPATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_473  GLPATRN;  /* collateral clause result */
A68_52  JLPATRN;  /* OPERATORS - mode -> union mode */
A68_VC  KLPATRN;  /* YIELD */
A68_52  LLPATRN;  /* OPERATORS - mode -> union mode */
A68_56  MLPATRN;  /* procedure value */
A68_85  NLPATRN;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(resetmonitor);
 /* line 586: */
 /* line 587: */
{ 
TKPATRN_depth = (*(&((*(&(Diag->Monitors)))->Depth)));
 /* line 588: */
UKPATRN = (&(Diag->Monitors)) ;
(*UKPATRN) = (*(&((*(&(Diag->Monitors)))->Rest)));
 /* line 589: */
 /* line 590: */
VKPATRN = !IIPATRN_currentclean;
if ( VKPATRN )
{VKPATRN = (*(&(Diag->Trace)));
}
if ( VKPATRN )
{ 
XKPATRN = (TKPATRN_depth-1) ;
YKPATRN = 20 ;
ZKPATRN = A_MOD(XKPATRN,YKPATRN,WKPATRN);
for ( ALPATRN = 1;
ALPATRN <= ZKPATRN;
ALPATRN += 1 )
{ 
ELPATRN = CLPATRN ;
GFBAOSL_put(LEAAOST_out, A_HVEC(FLPATRN,A_UNITE(DLPATRN,mode7,7,ELPATRN),A68_52 ));
}
 /* line 591: */
NIPATRN_checklineno(Diag);
 /* line 592: */
KLPATRN = ILPATRN ;
GLPATRN.data[0] = A_UNITE(JLPATRN,mode7,7,KLPATRN);
MLPATRN.fn.fn_global = LRAAOSL_newline;
MLPATRN.nonlocals = A68_NIL;
GLPATRN.data[1] = A_UNITE(LLPATRN,mode12,12,MLPATRN);
 /* line 593: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(NLPATRN,GLPATRN,2,A68_52 ));
} 
 /* line 594: */
 /* line 595: */
IIPATRN_currentclean = A68_FALSE;
} 
A_PROC_EXIT(resetmonitor);
return;
} 
#undef NL

A_STATIC A68_VOID  RLPATRN_monitorfn(A68_299  Specs, A68_472  Close, A68_471 * Diag)
{ 
A68_502  TLPATRN_generator;   /* proc value of non-global proc */
A68_264  YLPATRN;  /* avoid structure result */
A68_264  ZLPATRN_params;
A68_265 * AMPATRN_p;
A68_296 * BMPATRN_s;
A68_INT  CMPATRN;  /* forall loop counter */
A68_265  DMPATRN;  /* avoid structure result */
A68_264 * EMPATRN;  /* YIELD */
A68_264 * FMPATRN;  /* YIELD */
A_PROC_ENTRY(monitorfn);
 /* line 600: */
 /* line 601: */
{ 
 /* line 602: */
if ( ! A_VSTRUCTCOMP(Specs,FBAATRN_nilmacspecs) )
{ 
A_CLOSURE( TLPATRN_generator, ULPATRN_generator, VLPATRN_generator );
(( VLPATRN_generator * ) ( TLPATRN_generator.nonlocals )) -> Specs = Specs;
A_CALLPROC(TLPATRN_generator,(A68_FALSE, &YLPATRN),(A68_FALSE, &YLPATRN,(TLPATRN_generator).nonlocals));
ZLPATRN_params = YLPATRN;
 /* line 603: */
 /* line 604: */
CMPATRN = ZLPATRN_params.upb -1;
if ( CMPATRN != Specs.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
AMPATRN_p = ZLPATRN_params.data;
BMPATRN_s = Specs.data;
for (;CMPATRN-- >= 0;
(AMPATRN_p++
,BMPATRN_s++
) )
{
WFPATRN_macspec_macparam( (*(&(BMPATRN_s->Spec))), Close, &DMPATRN );
(*AMPATRN_p) = DMPATRN;
}
 /* line 605: */
 /* line 606: */
EMPATRN = (&((*(&(Diag->Monitors)))->Params)) ;
(*EMPATRN) = ZLPATRN_params;
} 
else
{ 
 /* line 607: */
FMPATRN = (&((*(&(Diag->Monitors)))->Params)) ;
(*FMPATRN) = ABAATRN_nilmacparams;
} 
 /* line 608: */
 /* line 609: */
if ( (*(&(Diag->Trace))) )
{ 
 /* line 610: */
 /* line 611: */
TJPATRN_identifyfn(A68_FALSE, Close, Diag);
} 
} 
A_PROC_EXIT(monitorfn);
return;
} 
#undef NL
 /* line 614: */

A_STATIC A68_VOID  KMPATRN_monitorinstance(A68_VC  Macname, A68_264  Params, A68_472  Close, A68_471 * Diag)
{ 
A68_INT  LMPATRN_depth;
A68_470  MMPATRN;  /* collateral clause result */
A68_470 * NMPATRN;  /* YIELD */
A68_470 ** OMPATRN;  /* YIELD */
A68_470 ** PMPATRN;  /* YIELD */
A_PROC_ENTRY(monitorinstance);
 /* line 615: */
 /* line 616: */
{ 
 /* line 617: */
if ( (*(&(Diag->Trace))) )
{ 
LMPATRN_depth = ((*(&((*(&(Diag->Monitors)))->Depth)))+1);
 /* line 618: */
 /* line 619: */
MMPATRN.Mac = A68_TRUE;
MMPATRN.Fnname = Macname;
MMPATRN.Params = Params;
MMPATRN.Depth = LMPATRN_depth;
MMPATRN.Rest = (*(&(Diag->Monitors)));
NMPATRN = A_HEAP(A68_470 ) ;
(*NMPATRN) = MMPATRN ;
OMPATRN = (&(Diag->Monitors)) ;
(*OMPATRN) = NMPATRN;
 /* line 620: */
TJPATRN_identifyfn(A68_TRUE, Close, Diag);
 /* line 621: */
IIPATRN_currentclean = A68_FALSE;
 /* line 622: */
 /* line 623: */
 /* line 624: */
PMPATRN = (&(Diag->Monitors)) ;
(*PMPATRN) = (*(&((*(&(Diag->Monitors)))->Rest)));
} 
} 
A_PROC_EXIT(monitorinstance);
return;
} 
#undef NL

A_STATIC A68_VOID  SMPATRN_setfailure(A68_472  Close, A68_471 * Diag)
{ 
A68_BOOL * TMPATRN;  /* YIELD */
A_PROC_ENTRY(setfailure);
 /* line 628: */
 /* line 629: */
{ 
 /* line 630: */
if ( !(*(&(Diag->Trace))) )
{ 
 /* line 631: */
TJPATRN_identifyfn(A68_FALSE, Close, Diag);
} 
 /* line 632: */
IIPATRN_currentclean = A68_FALSE;
 /* line 633: */
TMPATRN = (&(Diag->Trace)) ;
(*TMPATRN) = A68_TRUE;
 /* line 634: */
 /* line 635: */
JIPATRN_failure = A68_TRUE;
} 
A_PROC_EXIT(setfailure);
return;
} 
#undef NL

A_STATIC A68_VOID  INPATRN_faultp(A68_VC  Message, A68_472  Close, A68_471 * Diag)
{ 
A68_CHAR  JNPATRN_c;
A68_BOOL  KNPATRN_dot;
A68_INT  LNPATRN_i;
A68_INT  MNPATRN;  /* to part of loop */
A68_184  NNPATRN;  /* OPERATORS - mode -> union mode */
A68_185 * ONPATRN;  /* YIELD */
A68_184  PNPATRN;  /* OPERATORS - mode -> union mode */
A68_185 * QNPATRN;  /* YIELD */
A68_184  RNPATRN;  /* OPERATORS - mode -> union mode */
A68_185 * SNPATRN;  /* YIELD */
A68_184  TNPATRN;  /* OPERATORS - mode -> union mode */
A68_185 * UNPATRN;  /* YIELD */
A68_BOOL  VNPATRN;  /* optbool result */
A_PROC_ENTRY(faultp);
 /* line 645: */
 /* line 646: */
{ 
SMPATRN_setfailure(Close, Diag);
 /* line 647: */
KNPATRN_dot = A68_FALSE;
 /* line 648: */
JUOATRN_start_printing();
 /* line 649: */
 /* line 650: */
MNPATRN = Message.upb;
for ( LNPATRN_i = 1;
LNPATRN_i <= MNPATRN;
LNPATRN_i += 1 )
{ 
 /* line 651: */
JNPATRN_c = A_VINDEX(Message,LNPATRN_i);
 /* line 652: */
 /* line 653: */
if ( KNPATRN_dot )
{ 
if ( (JNPATRN_c=='.') )
{ 
HWOATRN_print_char(JNPATRN_c);
} 
else
{ 
KNPATRN_dot = A68_FALSE;
} 
 /* line 654: */
if ( (JNPATRN_c=='0') )
{ 
 /* line 655: */
ONPATRN = NNMATRN_makefint(YMPATRN_fp0) ;
DYOATRN_print_formula(A_UNITE(NNPATRN,mode1,1,ONPATRN));
} 
else
{ 
if ( (JNPATRN_c=='1') )
{ 
 /* line 656: */
SAPATRN_print_type(UMPATRN_fp1, Close);
} 
else
{ 
if ( (JNPATRN_c=='2') )
{ 
 /* line 657: */
SAPATRN_print_type(VMPATRN_fp2, Close);
} 
else
{ 
if ( (JNPATRN_c=='3') )
{ 
 /* line 658: */
TWOATRN_print_id(WMPATRN_fp3);
} 
else
{ 
if ( (JNPATRN_c=='4') )
{ 
 /* line 659: */
TWOATRN_print_id(XMPATRN_fp4);
} 
else
{ 
if ( (JNPATRN_c=='5') )
{ 
 /* line 660: */
QNPATRN = NNMATRN_makefint(ZMPATRN_fp5) ;
DYOATRN_print_formula(A_UNITE(PNPATRN,mode1,1,QNPATRN));
} 
else
{ 
if ( (JNPATRN_c=='6') )
{ 
 /* line 661: */
SNPATRN = NNMATRN_makefint(ANPATRN_fp6) ;
DYOATRN_print_formula(A_UNITE(RNPATRN,mode1,1,SNPATRN));
} 
else
{ 
if ( (JNPATRN_c==':') )
{ 
 /* line 662: */
UNPATRN = NNMATRN_makefint(BNPATRN_fpcolon) ;
DYOATRN_print_formula(A_UNITE(TNPATRN,mode1,1,UNPATRN));
} 
else
{ 
if ( (JNPATRN_c=='<') )
{ 
 /* line 663: */
FCPATRN_print_const(CNPATRN_fpopen, Close);
} 
else
{ 
if ( (JNPATRN_c=='>') )
{ 
 /* line 664: */
FCPATRN_print_const(DNPATRN_fpclose, Close);
} 
else
{ 
if ( (JNPATRN_c=='{') )
{ 
 /* line 665: */
 /* line 666: */
XWOATRN_print_ids(ENPATRN_fpids);
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
else
{ 
VNPATRN = !KNPATRN_dot;
if ( VNPATRN )
{VNPATRN = (JNPATRN_c=='.');
}
if ( VNPATRN )
{ 
 /* line 667: */
KNPATRN_dot = A68_TRUE;
} 
else
{ 
HWOATRN_print_char(JNPATRN_c);
 /* line 668: */
 /* line 669: */
KNPATRN_dot = A68_FALSE;
} 
} 
}
 /* line 670: */
 /* line 671: */
KUOATRN_end_printing();
} 
A_PROC_EXIT(faultp);
return;
} 
#undef NL

A_STATIC A68_510 * FOPATRN_makejoinrow(A68_509  Row)
{ 
A68_508  GOPATRN_jr;
A68_509 * HOPATRN;  /* YIELD */
A68_510 * IOPATRN;  /* clause result */
A68_510  JOPATRN;  /* OPERATORS - mode -> union mode */
A68_510 * KOPATRN;  /* YIELD */
A_PROC_ENTRY(makejoinrow);
 /* line 691: */
{ 
HOPATRN = (&((&GOPATRN_jr)->Row)) ;
(*HOPATRN) = Row;
KOPATRN = A_HEAP(A68_510 ) ;
(*KOPATRN) = A_UNITE(JOPATRN,mode2,2,GOPATRN_jr) ;
IOPATRN = KOPATRN;
} 
A_PROC_EXIT(makejoinrow);
return( IOPATRN );
} 
#undef NL

A_STATIC A68_BOOL  NOPATRN_has_joinio(A68_510 * Joinup)
{ 
A68_510  OOPATRN;  /* united object - for case conformity */
A68_227  POPATRN_jd;
A68_BOOL  QOPATRN;  /* clause result */
A68_507  ROPATRN_jio;
A68_508  SOPATRN_jr;
A68_BOOL  TOPATRN_has_jio;
A68_510 ** UOPATRN_r;
A68_509  VOPATRN;  /* forall yield */
A68_INT  WOPATRN;  /* forall loop counter */
A_PROC_ENTRY(has_joinio);
 /* line 697: */
 /* line 698: */
OOPATRN = (*Joinup) ;
switch ( OOPATRN.mode )
{ 
case 1: /* STRUCT(INT,INT)  */
POPATRN_jd = (OOPATRN.data.mode1);
 /* line 699: */
QOPATRN = A68_FALSE;
break;
case 3: /* STRUCT(REF MODE510,REF MODE510)  */
ROPATRN_jio = (OOPATRN.data.mode3);
 /* line 700: */
QOPATRN = A68_TRUE;
break;
case 2: /* STRUCT(REF MODE509)  */
SOPATRN_jr = (OOPATRN.data.mode2);
{ 
TOPATRN_has_jio = A68_FALSE;
 /* line 701: */
VOPATRN = SOPATRN_jr.Row ;
WOPATRN = VOPATRN.upb -1;
UOPATRN_r = VOPATRN.data;
for (;WOPATRN-- >= 0;
(UOPATRN_r++
) )
{
 /* line 702: */
if ( !(!TOPATRN_has_jio) ) break;
TOPATRN_has_jio = NOPATRN_has_joinio((*UOPATRN_r));
}
 /* line 703: */
 /* line 704: */
 /* line 705: */
QOPATRN = TOPATRN_has_jio;
} 
break;
default: 
 /* line 706: */
QOPATRN = A68_FALSE;
break;
} 
A_PROC_EXIT(has_joinio);
return( QOPATRN );
} 
#undef NL

A_STATIC A68_VOID  ZOPATRN_coerce_joinup(A68_510 ** Joinup, A68_BOOL  Source)
{ 
A68_515  CPPATRN_coerce;   /* proc value of non-global proc */
A68_510  CQPATRN;  /* united object - for case conformity */
A68_508  DQPATRN_jr;
A68_507  EQPATRN;  /* avoid structure result */
A68_510  FQPATRN;  /* OPERATORS - mode -> union mode */
A68_510 * GQPATRN;  /* YIELD */
A_PROC_ENTRY(coerce_joinup);
 /* line 709: */
 /* line 714: */
{ 
A_CLOSURE( CPPATRN_coerce, DPPATRN_coerce, EPPATRN_coerce );
(( EPPATRN_coerce * ) ( CPPATRN_coerce.nonlocals )) -> CPPATRN_coerce = CPPATRN_coerce;
(( EPPATRN_coerce * ) ( CPPATRN_coerce.nonlocals )) -> Source = Source;
 /* line 728: */
 /* line 729: */
if ( NOPATRN_has_joinio((*Joinup)) )
{ 
 /* line 730: */
CQPATRN = (**Joinup) ;
switch ( CQPATRN.mode )
{ 
case 2: /* STRUCT(REF MODE509)  */
DQPATRN_jr = (CQPATRN.data.mode2);
 /* line 731: */
 /* line 732: */
A_CALLPROC(CPPATRN_coerce,(DQPATRN_jr, &EQPATRN),(DQPATRN_jr, &EQPATRN,(CPPATRN_coerce).nonlocals));
GQPATRN = A_HEAP(A68_510 ) ;
(*GQPATRN) = A_UNITE(FQPATRN,mode3,3,EQPATRN) ;
(*Joinup) = GQPATRN;
break;
default: 
 /* line 733: */
 /* line 734: */
/*SKIP*/;
break;
} 
} 
} 
A_PROC_EXIT(coerce_joinup);
return;
} 
#undef NL

A_STATIC A68_510 * LQPATRN_type_joinup(A68_200  Ty, A68_INT  Nameno, A68_BOOL  Issource, A68_472  Close)
{ 
A68_200  MQPATRN;  /* united object - for case conformity */
A68_201 * NQPATRN_tn;
A68_304  OQPATRN;  /* OPERATORS - simple index */
A68_INT  PQPATRN;  /* YIELD */
A68_215 * QQPATRN_tdec;
A68_213  RQPATRN;  /* united object - for case conformity */
A68_209 * SQPATRN_ttag;
A68_510 * TQPATRN;  /* clause result */
A68_227  UQPATRN;  /* clause result */
A68_227  VQPATRN_joined;
A68_510  WQPATRN;  /* OPERATORS - mode -> union mode */
A68_510 * XQPATRN;  /* YIELD */
A68_204 * YQPATRN_tf;
A68_510 * ZQPATRN_from;
A68_510 * ARPATRN_to;
A68_507  BRPATRN;  /* collateral clause result */
A68_507  CRPATRN_jio;
A68_510  DRPATRN;  /* OPERATORS - mode -> union mode */
A68_510 * ERPATRN;  /* YIELD */
A68_202 * FRPATRN_tr;
A68_INT  GRPATRN_rowsize;
A68_510 * HRPATRN;  /* YIELD */
A68_516  JRPATRN_generator;   /* proc value of non-global proc */
A68_509  ORPATRN;  /* avoid structure result */
A68_509  PRPATRN_row;
A68_510 ** QRPATRN_r;
A68_INT  RRPATRN;  /* forall loop counter */
A68_203 * SRPATRN_ts;
A68_203 * TRPATRN_tst;
A68_184  URPATRN;  /* avoid structure result */
A68_INT  VRPATRN_size;
A68_516  XRPATRN_generator;   /* proc value of non-global proc */
A68_509  CSPATRN;  /* avoid structure result */
A68_509  DSPATRN_strrow;
A68_INT  ESPATRN_index;
A68_510 ** FSPATRN;  /* YIELD */
A68_205 * GSPATRN_tb;
A_PROC_ENTRY(type_joinup);
 /* line 738: */
 /* line 739: */
{ 
 /* line 740: */
MQPATRN = Ty ;
switch ( MQPATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
NQPATRN_tn = (MQPATRN.data.mode1);
 /* line 741: */
{ 
OQPATRN = (*(&(Close.Env->Types))) ;
PQPATRN = (*(&(NQPATRN_tn->Typeno))) ;
QQPATRN_tdec = (*(&A_VINDEX(OQPATRN,PQPATRN)));
 /* line 742: */
 /* line 743: */
RQPATRN = (*(&(QQPATRN_tdec->Body))) ;
switch ( RQPATRN.mode )
{ 
case 3: /* REF STRUCT(MODE200)  */
SQPATRN_ttag = (RQPATRN.data.mode3);
 /* line 744: */
 /* line 745: */
TQPATRN = LQPATRN_type_joinup((*(&(SQPATRN_ttag->Tag))), Nameno, Issource, Close);
break;
default: 
if ( Issource )
{ 
UQPATRN = BOPATRN_nulljoined;
} 
else
{ 
UQPATRN.Sort = XNPATRN_notjoined;
UQPATRN.Nameno = Nameno;
} 
VQPATRN_joined = UQPATRN;
 /* line 746: */
 /* line 747: */
 /* line 748: */
 /* line 749: */
XQPATRN = A_HEAP(A68_510 ) ;
(*XQPATRN) = A_UNITE(WQPATRN,mode1,1,VQPATRN_joined) ;
TQPATRN = XQPATRN;
break;
} 
} 
break;
case 4: /* REF STRUCT(MODE200,MODE200)  */
YQPATRN_tf = (MQPATRN.data.mode4);
 /* line 750: */
{ 
ZQPATRN_from = LQPATRN_type_joinup((*(&(YQPATRN_tf->From))), Nameno, !Issource, Close);
 /* line 751: */
ARPATRN_to = LQPATRN_type_joinup((*(&(YQPATRN_tf->To))), Nameno, Issource, Close);
 /* line 752: */
BRPATRN.Sink = ZQPATRN_from;
BRPATRN.Source = ARPATRN_to;
CRPATRN_jio = BRPATRN;
 /* line 753: */
 /* line 754: */
 /* line 755: */
ERPATRN = A_HEAP(A68_510 ) ;
(*ERPATRN) = A_UNITE(DRPATRN,mode3,3,CRPATRN_jio) ;
TQPATRN = ERPATRN;
} 
break;
case 2: /* REF STRUCT(MODE184,MODE200)  */
FRPATRN_tr = (MQPATRN.data.mode2);
 /* line 756: */
{ 
GRPATRN_rowsize = XOMATRN_int((*(&(FRPATRN_tr->Size))));
 /* line 757: */
 /* line 758: */
if ( (GRPATRN_rowsize<1) )
{ 
 /* line 759: */
HRPATRN = A_HEAP(A68_510 ) ;
(*HRPATRN) = (*COPATRN_nulljoinup) ;
TQPATRN = HRPATRN;
} 
else
{ 
A_CLOSURE( JRPATRN_generator, KRPATRN_generator, LRPATRN_generator );
(( LRPATRN_generator * ) ( JRPATRN_generator.nonlocals )) -> GRPATRN_rowsize = GRPATRN_rowsize;
A_CALLPROC(JRPATRN_generator,(A68_FALSE, &ORPATRN),(A68_FALSE, &ORPATRN,(JRPATRN_generator).nonlocals));
PRPATRN_row = ORPATRN;
 /* line 760: */
 /* line 761: */
RRPATRN = PRPATRN_row.upb -1;
QRPATRN_r = PRPATRN_row.data;
for (;RRPATRN-- >= 0;
(QRPATRN_r++
) )
{
(*QRPATRN_r) = LQPATRN_type_joinup((*(&(FRPATRN_tr->Elem))), Nameno, Issource, Close);
}
 /* line 762: */
 /* line 763: */
 /* line 764: */
 /* line 765: */
TQPATRN = FOPATRN_makejoinrow(PRPATRN_row);
} 
} 
break;
case 3: /* REF STRUCT(MODE200,REF MODE203)  */
SRPATRN_ts = (MQPATRN.data.mode3);
 /* line 766: */
{ 
TRPATRN_tst = SRPATRN_ts;
 /* line 767: */
GFNATRN_tstr_size( SRPATRN_ts, &URPATRN );
VRPATRN_size = XOMATRN_int(URPATRN);
 /* line 768: */
A_CLOSURE( XRPATRN_generator, YRPATRN_generator, ZRPATRN_generator );
(( ZRPATRN_generator * ) ( XRPATRN_generator.nonlocals )) -> VRPATRN_size = VRPATRN_size;
A_CALLPROC(XRPATRN_generator,(A68_FALSE, &CSPATRN),(A68_FALSE, &CSPATRN,(XRPATRN_generator).nonlocals));
DSPATRN_strrow = CSPATRN;
 /* line 769: */
for ( ESPATRN_index = 1;;
ESPATRN_index += 1 ) 
{ 
 /* line 770: */
if ( !((TRPATRN_tst!=GAAATRN_niltstr)) ) break;
FSPATRN = (&A_VINDEX(DSPATRN_strrow,ESPATRN_index)) ;
(*FSPATRN) = LQPATRN_type_joinup((*(&(TRPATRN_tst->Elem))), Nameno, Issource, Close);
 /* line 771: */
 /* line 772: */
TRPATRN_tst = (*(&(TRPATRN_tst->Rest)));
}
 /* line 773: */
 /* line 774: */
 /* line 775: */
TQPATRN = FOPATRN_makejoinrow(DSPATRN_strrow);
} 
break;
case 5: /* REF STRUCT(MODE200)  */
GSPATRN_tb = (MQPATRN.data.mode5);
 /* line 776: */
 /* line 778: */
TQPATRN = LQPATRN_type_joinup((*(&(GSPATRN_tb->Type))), Nameno, Issource, Close);
break;
default: 
 /* line 779: */
TQPATRN = COPATRN_nulljoinup;
break;
} 
} 
A_PROC_EXIT(type_joinup);
return( TQPATRN );
} 
#undef NL

A_STATIC A68_510 * JSPATRN_find_joinup(A68_INT  Nameno, A68_512 * Joinlist)
{ 
A68_512 * KSPATRN_jlist;
A68_BOOL  LSPATRN_found;
A68_BOOL  MSPATRN;  /* optbool result */
A68_510 * NSPATRN;  /* clause result */
A_PROC_ENTRY(find_joinup);
 /* line 783: */
 /* line 784: */
{ 
KSPATRN_jlist = Joinlist;
 /* line 785: */
LSPATRN_found = A68_FALSE;
 /* line 786: */
for ( ;; )
{ 
MSPATRN = !LSPATRN_found;
if ( MSPATRN )
{ /* line 787: */
MSPATRN = (KSPATRN_jlist!=LOPATRN_niljoinlist);
}
if ( !(MSPATRN) ) break;
 /* line 788: */
if ( ((*(&(KSPATRN_jlist->Nameno)))==Nameno) )
{ 
 /* line 789: */
LSPATRN_found = A68_TRUE;
} 
else
{ 
 /* line 790: */
 /* line 791: */
KSPATRN_jlist = (*(&(KSPATRN_jlist->Rest)));
} 
}
 /* line 792: */
if ( LSPATRN_found )
{ 
NSPATRN = (*(&(KSPATRN_jlist->Joinup)));
} 
else
{ 
 /* line 793: */
NSPATRN = COPATRN_nulljoinup;
} 
} 
A_PROC_EXIT(find_joinup);
return( NSPATRN );
} 
#undef NL

A_STATIC A68_VOID  SSPATRN_joinup_trim(A68_510 ** Joinup, A68_BOOL  Index, A68_INT  Lwb, A68_INT  Upb)
{ 
A68_510  TSPATRN;  /* united object - for case conformity */
A68_227  USPATRN_jd;
A68_507  XSPATRN_ji;
A68_508  ATPATRN_jr;
A68_509  BTPATRN_row;
A68_BOOL  CTPATRN;  /* optbool result */
A68_510 * DTPATRN;  /* clause result */
A68_509  ETPATRN;  /* OPERATORS - trim index */
A_PROC_ENTRY(joinup_trim);
 /* line 796: */
 /* line 797: */
{ 
 /* line 798: */
TSPATRN = (**Joinup) ;
switch ( TSPATRN.mode )
{ 
case 1: /* STRUCT(INT,INT)  */
USPATRN_jd = (TSPATRN.data.mode1);
 /* line 799: */
if ( !(USPATRN_jd.Sort==ZNPATRN_nochecks) )
{ 
 /* line 800: */
NKDAOST_sysfault(WSPATRN);
} 
break;
case 3: /* STRUCT(REF MODE510,REF MODE510)  */
XSPATRN_ji = (TSPATRN.data.mode3);
 /* line 801: */
NKDAOST_sysfault(ZSPATRN);
break;
case 2: /* STRUCT(REF MODE509)  */
ATPATRN_jr = (TSPATRN.data.mode2);
 /* line 802: */
{ 
BTPATRN_row = ATPATRN_jr.Row;
 /* line 803: */
 /* line 804: */
CTPATRN = (Lwb<1);
if ( ! CTPATRN )
{ /* line 805: */
CTPATRN = (Upb>BTPATRN_row.upb);
}
 /* line 806: */
if ( CTPATRN )
{ 
DTPATRN = COPATRN_nulljoinup;
} 
else
{ 
if ( Index )
{ 
DTPATRN = (*(&A_VINDEX(BTPATRN_row,Lwb)));
} 
else
{ 
 /* line 807: */
 /* line 808: */
DTPATRN = FOPATRN_makejoinrow(A_VTRIM(ETPATRN,(BTPATRN_row),A_VTSCRIPT(&(ETPATRN.upb),(BTPATRN_row).upb,Lwb,Upb)));
} 
} 
 /* line 809: */
 /* line 810: */
(*Joinup) = DTPATRN;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(joinup_trim);
return;
} 
#undef NL

A_STATIC A68_VOID  ITPATRN_uconc_joinup(A68_INT  Sort, A68_510 * Ljoinup, A68_510 ** Joinup)
{ 
A68_BOOL  JTPATRN_no_checks;
A68_508  KTPATRN_ljoinrow;
A68_508  LTPATRN_rjoinrow;
A68_BOOL  MTPATRN;  /* optbool result */
A68_510  NTPATRN;  /* united object - for case conformity */
A68_508  OTPATRN_jl;
A68_INT  PTPATRN;  /* clause result */
A68_227  QTPATRN_il;
A68_BOOL  RTPATRN;  /* optbool result */
A68_INT  STPATRN_lsize;
A68_BOOL  TTPATRN;  /* optbool result */
A68_510  UTPATRN;  /* united object - for case conformity */
A68_508  VTPATRN_jr;
A68_INT  WTPATRN;  /* clause result */
A68_227  XTPATRN_ir;
A68_BOOL  YTPATRN;  /* optbool result */
A68_INT  ZTPATRN_rsize;
A68_510 * AUPATRN;  /* clause result */
A68_516  CUPATRN_generator;   /* proc value of non-global proc */
A68_509  HUPATRN;  /* avoid structure result */
A68_509  IUPATRN_newrow;
A68_BOOL  JUPATRN;  /* optbool result */
A68_510 ** KUPATRN_lo;
A68_510 ** LUPATRN_ln;
A68_509  MUPATRN;  /* forall yield */
A68_509  NUPATRN;  /* OPERATORS - trim index */
A68_509  OUPATRN;  /* forall yield */
A68_INT  PUPATRN;  /* forall loop counter */
A68_INT  QUPATRN;  /* YIELD */
A68_510 ** RUPATRN;  /* YIELD */
A68_BOOL  SUPATRN;  /* optbool result */
A68_510 ** TUPATRN_ro;
A68_510 ** UUPATRN_rn;
A68_509  VUPATRN;  /* forall yield */
A68_509  WUPATRN;  /* OPERATORS - trim index */
A68_509  XUPATRN;  /* forall yield */
A68_INT  YUPATRN;  /* forall loop counter */
A68_INT  ZUPATRN;  /* YIELD */
A68_510 ** AVPATRN;  /* YIELD */
A_PROC_ENTRY(uconc_joinup);
 /* line 814: */
 /* line 815: */
{ 
JTPATRN_no_checks = A68_TRUE;
 /* line 816: */
 /* line 817: */
 /* line 818: */
MTPATRN = (Sort==VIAATRN_flattenboth);
if ( ! MTPATRN )
{ /* line 819: */
MTPATRN = (Sort==TIAATRN_flattenleft);
}
if ( MTPATRN )
{ 
 /* line 820: */
NTPATRN = (*Ljoinup) ;
switch ( NTPATRN.mode )
{ 
case 2: /* STRUCT(REF MODE509)  */
OTPATRN_jl = (NTPATRN.data.mode2);
{ 
KTPATRN_ljoinrow = OTPATRN_jl;
 /* line 821: */
PTPATRN = OTPATRN_jl.Row.upb;
} 
break;
case 1: /* STRUCT(INT,INT)  */
QTPATRN_il = (NTPATRN.data.mode1);
 /* line 822: */
{ 
RTPATRN = JTPATRN_no_checks;
if ( RTPATRN )
{RTPATRN = (QTPATRN_il.Sort==ZNPATRN_nochecks);
}
JTPATRN_no_checks = RTPATRN;
 /* line 823: */
 /* line 824: */
PTPATRN = 1;
} 
break;
default: 
 /* line 825: */
 /* line 826: */
PTPATRN = 1;
break;
} 
} 
else
{ 
PTPATRN = 1;
} 
STPATRN_lsize = PTPATRN;
 /* line 827: */
 /* line 828: */
TTPATRN = (Sort==VIAATRN_flattenboth);
if ( ! TTPATRN )
{ /* line 829: */
TTPATRN = (Sort==UIAATRN_flattenright);
}
if ( TTPATRN )
{ 
 /* line 830: */
UTPATRN = (**Joinup) ;
switch ( UTPATRN.mode )
{ 
case 2: /* STRUCT(REF MODE509)  */
VTPATRN_jr = (UTPATRN.data.mode2);
{ 
LTPATRN_rjoinrow = VTPATRN_jr;
 /* line 831: */
WTPATRN = VTPATRN_jr.Row.upb;
} 
break;
case 1: /* STRUCT(INT,INT)  */
XTPATRN_ir = (UTPATRN.data.mode1);
 /* line 832: */
{ 
YTPATRN = JTPATRN_no_checks;
if ( YTPATRN )
{YTPATRN = (XTPATRN_ir.Sort==ZNPATRN_nochecks);
}
JTPATRN_no_checks = YTPATRN;
 /* line 833: */
 /* line 834: */
WTPATRN = 1;
} 
break;
default: 
 /* line 835: */
 /* line 836: */
WTPATRN = 1;
break;
} 
} 
else
{ 
WTPATRN = 1;
} 
ZTPATRN_rsize = WTPATRN;
 /* line 838: */
 /* line 839: */
 /* line 840: */
 /* line 841: */
if ( JTPATRN_no_checks )
{ 
AUPATRN = COPATRN_nulljoinup;
} 
else
{ 
A_CLOSURE( CUPATRN_generator, DUPATRN_generator, EUPATRN_generator );
(( EUPATRN_generator * ) ( CUPATRN_generator.nonlocals )) -> STPATRN_lsize = STPATRN_lsize;
(( EUPATRN_generator * ) ( CUPATRN_generator.nonlocals )) -> ZTPATRN_rsize = ZTPATRN_rsize;
A_CALLPROC(CUPATRN_generator,(A68_FALSE, &HUPATRN),(A68_FALSE, &HUPATRN,(CUPATRN_generator).nonlocals));
IUPATRN_newrow = HUPATRN;
 /* line 842: */
JUPATRN = (Sort==VIAATRN_flattenboth);
if ( ! JUPATRN )
{ /* line 843: */
JUPATRN = (Sort==TIAATRN_flattenleft);
}
if ( JUPATRN )
{ 
 /* line 844: */
MUPATRN = (*(&((&KTPATRN_ljoinrow)->Row))) ;
OUPATRN = A_VTRIM(NUPATRN,(IUPATRN_newrow),A_VTSCRIPT(&(NUPATRN.upb),(IUPATRN_newrow).upb,1,STPATRN_lsize)) ;
PUPATRN = MUPATRN.upb -1;
if ( PUPATRN != OUPATRN.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
KUPATRN_lo = MUPATRN.data;
LUPATRN_ln = OUPATRN.data;
for (;PUPATRN-- >= 0;
(KUPATRN_lo++
,LUPATRN_ln++
) )
{
(*LUPATRN_ln) = (*KUPATRN_lo);
}
 /* line 845: */
} 
else
{ 
 /* line 846: */
QUPATRN = 1 ;
RUPATRN = (&A_VINDEX(IUPATRN_newrow,QUPATRN)) ;
(*RUPATRN) = Ljoinup;
} 
 /* line 847: */
SUPATRN = (Sort==VIAATRN_flattenboth);
if ( ! SUPATRN )
{ /* line 848: */
SUPATRN = (Sort==UIAATRN_flattenright);
}
if ( SUPATRN )
{ 
 /* line 849: */
VUPATRN = (*(&((&LTPATRN_rjoinrow)->Row))) ;
XUPATRN = A_VTRIM(WUPATRN,(IUPATRN_newrow),A_VTSCRIPT(&(WUPATRN.upb),(IUPATRN_newrow).upb,(STPATRN_lsize+1),IUPATRN_newrow.upb)) ;
YUPATRN = VUPATRN.upb -1;
if ( YUPATRN != XUPATRN.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
TUPATRN_ro = VUPATRN.data;
UUPATRN_rn = XUPATRN.data;
for (;YUPATRN-- >= 0;
(TUPATRN_ro++
,UUPATRN_rn++
) )
{
(*UUPATRN_rn) = (*TUPATRN_ro);
}
 /* line 850: */
} 
else
{ 
 /* line 851: */
ZUPATRN = IUPATRN_newrow.upb ;
AVPATRN = (&A_VINDEX(IUPATRN_newrow,ZUPATRN)) ;
(*AVPATRN) = (*Joinup);
} 
 /* line 852: */
 /* line 853: */
 /* line 854: */
AUPATRN = FOPATRN_makejoinrow(IUPATRN_newrow);
} 
(*Joinup) = AUPATRN;
} 
A_PROC_EXIT(uconc_joinup);
return;
} 
#undef NL
 /* line 857: */

A_STATIC A68_512 * GVPATRN_join_setup(A68_INT  Nameno, A68_200  T, A68_BOOL  Issource, A68_472  Close, A68_512 * Old)
{ 
A68_294  HVPATRN;  /* united object - for case conformity */
A68_293 * IVPATRN_bc;
A68_174 * JVPATRN;  /* clause result */
A68_174 * KVPATRN_checks;
A68_BOOL  LVPATRN_checked;
A68_BOOL  MVPATRN;  /* optbool result */
A68_512 * NVPATRN;  /* clause result */
A68_512  OVPATRN;  /* collateral clause result */
A68_512 * PVPATRN;  /* YIELD */
A_PROC_ENTRY(join_setup);
 /* line 858: */
 /* line 860: */
{ 
 /* line 861: */
HVPATRN = (*(&(Close.Fdec->Fnbody))) ;
switch ( HVPATRN.mode )
{ 
case 11: /* REF STRUCT(REF MODE174,BOOL,MODE294)  */
IVPATRN_bc = (HVPATRN.data.mode11);
 /* line 862: */
 /* line 863: */
JVPATRN = (*(&(IVPATRN_bc->Joincheck)));
break;
default: 
JVPATRN = OAAATRN_nilints;
break;
} 
KVPATRN_checks = JVPATRN;
 /* line 864: */
LVPATRN_checked = A68_TRUE;
 /* line 865: */
for ( ;; )
{ 
 /* line 866: */
MVPATRN = (KVPATRN_checks!=OAAATRN_nilints);
if ( MVPATRN )
{MVPATRN = LVPATRN_checked;
}
if ( !(MVPATRN) ) break;
if ( ((*(&(KVPATRN_checks->Int)))==Nameno) )
{ 
LVPATRN_checked = A68_FALSE;
} 
 /* line 867: */
 /* line 868: */
KVPATRN_checks = (*(&(KVPATRN_checks->Rest)));
}
 /* line 870: */
 /* line 871: */
 /* line 872: */
if ( LVPATRN_checked )
{ 
NVPATRN = Old;
} 
else
{ 
OVPATRN.Nameno = Nameno;
OVPATRN.Joinup = LQPATRN_type_joinup(T, Nameno, Issource, Close);
 /* line 873: */
OVPATRN.Rest = Old;
 /* line 874: */
PVPATRN = A_HEAP(A68_512 ) ;
(*PVPATRN) = OVPATRN ;
NVPATRN = PVPATRN;
} 
} 
A_PROC_EXIT(join_setup);
return( NVPATRN );
} 
#undef NL

A_STATIC A68_VOID  TVPATRN_mark_join(A68_510 ** Joinup, A68_472  Close, A68_471 * Diag)
{ 
A68_300  UVPATRN_nt;
A68_173 * VVPATRN_names;
A68_524  ZVPATRN_mark_off;   /* proc value of non-global proc */
A_PROC_ENTRY(mark_join);
 /* line 877: */
 /* line 878: */
{ 
UVPATRN_nt = (*(&(Close.Fdec->Nametypes)));
 /* line 879: */
VVPATRN_names = LAAATRN_nilids;
 /* line 881: */
A_CLOSURE( ZVPATRN_mark_off, AWPATRN_mark_off, BWPATRN_mark_off );
(( BWPATRN_mark_off * ) ( ZVPATRN_mark_off.nonlocals )) -> VVPATRN_names = (&VVPATRN_names);
(( BWPATRN_mark_off * ) ( ZVPATRN_mark_off.nonlocals )) -> UVPATRN_nt = UVPATRN_nt;
(( BWPATRN_mark_off * ) ( ZVPATRN_mark_off.nonlocals )) -> ZVPATRN_mark_off = ZVPATRN_mark_off;
 /* line 903: */
 /* line 904: */
if ( !A_CALLPROC(ZVPATRN_mark_off,((*Joinup), Close, Diag),((*Joinup), Close, Diag,(ZVPATRN_mark_off).nonlocals)) )
{ 
ENPATRN_fpids = VVPATRN_names;
 /* line 905: */
 /* line 906: */
INPATRN_faultp(SWPATRN, Close, Diag);
} 
 /* line 907: */
 /* line 908: */
(*Joinup) = COPATRN_nulljoinup;
} 
A_PROC_EXIT(mark_join);
return;
} 
#undef NL

A_STATIC A68_BOOL  UWPATRN_check_if_joined(A68_510 * J)
{ 
A68_510  VWPATRN;  /* united object - for case conformity */
A68_227  WWPATRN_jd;
A68_BOOL  XWPATRN;  /* clause result */
A68_508  YWPATRN_jr;
A68_BOOL  ZWPATRN_joined;
A68_510 ** AXPATRN_r;
A68_509  BXPATRN;  /* forall yield */
A68_INT  CXPATRN;  /* forall loop counter */
A68_507  DXPATRN_ji;
A68_BOOL  EXPATRN;  /* optbool result */
A_PROC_ENTRY(check_if_joined);
 /* line 911: */
 /* line 912: */
{ 
 /* line 913: */
VWPATRN = (*J) ;
switch ( VWPATRN.mode )
{ 
case 1: /* STRUCT(INT,INT)  */
WWPATRN_jd = (VWPATRN.data.mode1);
 /* line 914: */
 /* line 915: */
XWPATRN = !(WWPATRN_jd.Sort==XNPATRN_notjoined);
break;
case 2: /* STRUCT(REF MODE509)  */
YWPATRN_jr = (VWPATRN.data.mode2);
 /* line 916: */
{ 
ZWPATRN_joined = A68_TRUE;
 /* line 917: */
BXPATRN = YWPATRN_jr.Row ;
CXPATRN = BXPATRN.upb -1;
AXPATRN_r = BXPATRN.data;
for (;CXPATRN-- >= 0;
(AXPATRN_r++
) )
{
 /* line 918: */
if ( !(ZWPATRN_joined) ) break;
if ( !UWPATRN_check_if_joined((*AXPATRN_r)) )
{ 
ZWPATRN_joined = A68_FALSE;
} 
}
 /* line 919: */
 /* line 920: */
 /* line 921: */
XWPATRN = ZWPATRN_joined;
} 
break;
case 3: /* STRUCT(REF MODE510,REF MODE510)  */
DXPATRN_ji = (VWPATRN.data.mode3);
 /* line 922: */
EXPATRN = UWPATRN_check_if_joined(DXPATRN_ji.Source);
if ( EXPATRN )
{ /* line 923: */
EXPATRN = UWPATRN_check_if_joined(DXPATRN_ji.Sink);
}
XWPATRN = EXPATRN;
break;
default: 
 /* line 924: */
 /* line 925: */
XWPATRN = A68_FALSE;
break;
} 
} 
A_PROC_EXIT(check_if_joined);
return( XWPATRN );
} 
#undef NL

A_STATIC A68_512 * IXPATRN_join_completeness(A68_512 * Jlist, A68_472  Close, A68_471 * Diag)
{ 
A68_512 * JXPATRN_joinlist;
A68_BOOL  KXPATRN;  /* optbool result */
A68_300  LXPATRN;  /* OPERATORS - simple index */
A68_INT  MXPATRN;  /* YIELD */
A68_BOOL  NXPATRN_joined;
A68_512 * QXPATRN;  /* clause result */
A_PROC_ENTRY(join_completeness);
 /* line 930: */
 /* line 931: */
{ 
JXPATRN_joinlist = Jlist;
 /* line 932: */
for ( ;; )
{ 
KXPATRN = (JXPATRN_joinlist!=LOPATRN_niljoinlist);
if ( KXPATRN )
{ /* line 933: */
KXPATRN = ((*(&(JXPATRN_joinlist->Nameno)))!=(-1));
}
if ( !(KXPATRN) ) break;
LXPATRN = (*(&(Close.Fdec->Nametypes))) ;
MXPATRN = (*(&(JXPATRN_joinlist->Nameno))) ;
WMPATRN_fp3 = (*(&((&A_VINDEX(LXPATRN,MXPATRN))->Name)));
 /* line 934: */
NXPATRN_joined = UWPATRN_check_if_joined((*(&(JXPATRN_joinlist->Joinup))));
 /* line 935: */
 /* line 936: */
if ( !NXPATRN_joined )
{ 
 /* line 937: */
INPATRN_faultp(PXPATRN, Close, Diag);
} 
 /* line 938: */
 /* line 939: */
JXPATRN_joinlist = (*(&(JXPATRN_joinlist->Rest)));
}
 /* line 940: */
if ( (JXPATRN_joinlist==LOPATRN_niljoinlist) )
{ 
QXPATRN = LOPATRN_niljoinlist;
} 
else
{ 
 /* line 941: */
QXPATRN = (*(&(JXPATRN_joinlist->Rest)));
} 
} 
A_PROC_EXIT(join_completeness);
return( QXPATRN );
} 
#undef NL

A_STATIC A68_BOOL  TXPATRN_equal_ids(A68_173 * A, A68_173 * B)
{ 
A68_BOOL  UXPATRN_equal;
A68_173 * VXPATRN_as;
A68_173 * WXPATRN_bs;
A68_BOOL  XXPATRN;  /* optbool result */
A68_BOOL  YXPATRN;  /* optbool result */
A68_BOOL  ZXPATRN;  /* clause result */
A_PROC_ENTRY(equal_ids);
 /* line 953: */
 /* line 954: */
{ 
UXPATRN_equal = A68_TRUE;
 /* line 955: */
VXPATRN_as = A;
WXPATRN_bs = B;
 /* line 956: */
for ( ;; )
{ 
XXPATRN = (VXPATRN_as!=LAAATRN_nilids);
if ( XXPATRN )
{XXPATRN = (WXPATRN_bs!=LAAATRN_nilids);
}
 /* line 957: */
if ( XXPATRN )
{XXPATRN = UXPATRN_equal;
}
if ( !(XXPATRN) ) break;
 /* line 958: */
if ( A_VC_EQ((*(&(VXPATRN_as->Id))),(*(&(WXPATRN_bs->Id)))) )
{ 
VXPATRN_as = (*(&(VXPATRN_as->Rest)));
 /* line 959: */
WXPATRN_bs = (*(&(WXPATRN_bs->Rest)));
} 
else
{ 
 /* line 960: */
 /* line 961: */
UXPATRN_equal = A68_FALSE;
} 
}
 /* line 962: */
YXPATRN = UXPATRN_equal;
if ( YXPATRN )
{YXPATRN = (VXPATRN_as==LAAATRN_nilids);
}
if ( YXPATRN )
{ /* line 963: */
YXPATRN = (WXPATRN_bs==LAAATRN_nilids);
}
ZXPATRN = YXPATRN;
} 
A_PROC_EXIT(equal_ids);
return( ZXPATRN );
} 
#undef NL

A_STATIC A68_BOOL  DYPATRN_checkconsts(A68_222  A, A68_222  B, A68_BOOL  Disjoint)
{ 
A68_530  GYPATRN_is_ctypeorquery;   /* proc value of non-global proc */
A68_531  WYPATRN_checkprimrange;   /* proc value of non-global proc */
A68_533  LZPATRN_checkualts;   /* proc value of non-global proc */
A68_222  HAQATRN;  /* united object - for case conformity */
A68_219 * IAQATRN_cr;
A68_222  JAQATRN;  /* united object - for case conformity */
A68_219 * KAQATRN_bcr;
A68_INT  LAQATRN_lwb;
A68_INT  MAQATRN_upb;
A68_INT  NAQATRN_blwb;
A68_INT  OAQATRN_bupb;
A68_BOOL  PAQATRN;  /* optbool result */
A68_BOOL  QAQATRN;  /* clause result */
A68_BOOL  RAQATRN;  /* optbool result */
A68_218 * SAQATRN_bci;
A68_INT  TAQATRN_index;
A68_INT  UAQATRN_lwb;
A68_INT  VAQATRN_upb;
A68_BOOL  WAQATRN;  /* optbool result */
A68_218 * XAQATRN_ci;
A68_222  YAQATRN;  /* united object - for case conformity */
A68_218 * ZAQATRN_bci;
A68_217 * ABQATRN_p;
A68_222  BBQATRN;  /* united object - for case conformity */
A68_217 * CBQATRN_bp;
A68_229 * DBQATRN_ca;
A68_222  EBQATRN;  /* united object - for case conformity */
A68_229 * FBQATRN_bca;
A68_217 * GBQATRN_bcb;
A68_236 * HBQATRN_cr;
A68_222  IBQATRN;  /* united object - for case conformity */
A68_236 * JBQATRN_bcr;
A68_237 * KBQATRN_cs;
A68_222  LBQATRN;  /* united object - for case conformity */
A68_236 * MBQATRN_bcr;
A68_BOOL  NBQATRN;  /* optbool result */
A68_BOOL  OBQATRN;  /* clause result */
A68_222  PBQATRN;  /* OPERATORS - mode -> union mode */
A68_222  QBQATRN;  /* OPERATORS - mode -> union mode */
A68_237 * RBQATRN;  /* YIELD */
A68_237 * SBQATRN_bcs;
A68_BOOL  TBQATRN;  /* optbool result */
A68_BOOL  UBQATRN;  /* clause result */
A68_222  VBQATRN;  /* OPERATORS - mode -> union mode */
A68_237 * WBQATRN;  /* YIELD */
A68_222  XBQATRN;  /* OPERATORS - mode -> union mode */
A68_237 * YBQATRN;  /* YIELD */
A68_226 * ZBQATRN_ca;
A68_205 * ACQATRN_ct;
A68_220 * BCQATRN_cq;
A68_225 * ECQATRN_cra;
A68_222  FCQATRN;  /* united object - for case conformity */
A68_225 * GCQATRN_crb;
A68_217 * HCQATRN_cpb;
A68_223 * ICQATRN_cqa;
A68_222  JCQATRN;  /* united object - for case conformity */
A68_223 * KCQATRN_cqb;
A68_249 * LCQATRN_csb;
A68_BOOL  MCQATRN_equal;
A68_BOOL  NCQATRN_with_type;
A68_INT  OCQATRN_c;
A68_222  PCQATRN;  /* united object - for case conformity */
A68_217 * QCQATRN_cp;
A68_205 * RCQATRN_ct;
A68_32  SCQATRN_string;
A68_INT  TCQATRN_i;
A68_INT  UCQATRN;  /* to part of loop */
A68_249 * VCQATRN_csa;
A68_222  WCQATRN;  /* united object - for case conformity */
A68_249 * XCQATRN_csb;
A68_222  YCQATRN;  /* united object - for case conformity */
A68_246 * ZCQATRN_ua;
A68_250 * ADQATRN_cn;
A_PROC_ENTRY(checkconsts);
 /* line 966: */
 /* line 974: */
{ 
A_CLOSURE( GYPATRN_is_ctypeorquery, HYPATRN_is_ctypeorquery, IYPATRN_is_ctypeorquery );
(( IYPATRN_is_ctypeorquery * ) ( GYPATRN_is_ctypeorquery.nonlocals )) -> GYPATRN_is_ctypeorquery = GYPATRN_is_ctypeorquery;
 /* line 997: */
A_CLOSURE( WYPATRN_checkprimrange, XYPATRN_checkprimrange, YYPATRN_checkprimrange );
(( YYPATRN_checkprimrange * ) ( WYPATRN_checkprimrange.nonlocals )) -> Disjoint = Disjoint;
 /* line 1004: */
 /* line 1011: */
A_CLOSURE( LZPATRN_checkualts, MZPATRN_checkualts, NZPATRN_checkualts );
(( NZPATRN_checkualts * ) ( LZPATRN_checkualts.nonlocals )) -> Disjoint = Disjoint;
(( NZPATRN_checkualts * ) ( LZPATRN_checkualts.nonlocals )) -> LZPATRN_checkualts = LZPATRN_checkualts;
 /* line 1046: */
 /* line 1047: */
HAQATRN = A ;
switch ( HAQATRN.mode )
{ 
case 8: /* REF STRUCT(INT,MODE199)  */
IAQATRN_cr = (HAQATRN.data.mode8);
 /* line 1048: */
 /* line 1049: */
JAQATRN = B ;
switch ( JAQATRN.mode )
{ 
case 8: /* REF STRUCT(INT,MODE199)  */
KAQATRN_bcr = (JAQATRN.data.mode8);
 /* line 1050: */
{ 
LAQATRN_lwb = XOMATRN_int((*(&((&(IAQATRN_cr->Range))->Lwb))));
 /* line 1051: */
MAQATRN_upb = XOMATRN_int((*(&((&(IAQATRN_cr->Range))->Upb))));
 /* line 1052: */
NAQATRN_blwb = XOMATRN_int((*(&((&(KAQATRN_bcr->Range))->Lwb))));
 /* line 1053: */
OAQATRN_bupb = XOMATRN_int((*(&((&(KAQATRN_bcr->Range))->Upb))));
 /* line 1054: */
 /* line 1055: */
if ( Disjoint )
{ 
PAQATRN = (LAQATRN_lwb>OAQATRN_bupb);
if ( ! PAQATRN )
{ /* line 1056: */
PAQATRN = (MAQATRN_upb<NAQATRN_blwb);
}
QAQATRN = PAQATRN;
} 
else
{ 
RAQATRN = (LAQATRN_lwb!=NAQATRN_blwb);
if ( ! RAQATRN )
{ /* line 1057: */
RAQATRN = (MAQATRN_upb!=OAQATRN_bupb);
}
 /* line 1058: */
 /* line 1059: */
QAQATRN = RAQATRN;
} 
} 
break;
case 3: /* REF STRUCT(INT,MODE184)  */
SAQATRN_bci = (JAQATRN.data.mode3);
 /* line 1060: */
{ 
TAQATRN_index = XOMATRN_int((*(&(SAQATRN_bci->Index))));
 /* line 1061: */
UAQATRN_lwb = XOMATRN_int((*(&((&(IAQATRN_cr->Range))->Lwb))));
 /* line 1062: */
VAQATRN_upb = XOMATRN_int((*(&((&(IAQATRN_cr->Range))->Upb))));
 /* line 1063: */
 /* line 1064: */
if ( Disjoint )
{ 
WAQATRN = (TAQATRN_index<UAQATRN_lwb);
if ( ! WAQATRN )
{ /* line 1065: */
WAQATRN = (TAQATRN_index>VAQATRN_upb);
}
QAQATRN = WAQATRN;
} 
else
{ 
 /* line 1066: */
 /* line 1067: */
 /* line 1068: */
QAQATRN = A68_TRUE;
} 
} 
break;
default: 
 /* line 1069: */
 /* line 1070: */
QAQATRN = DYPATRN_checkconsts(B, A, Disjoint);
break;
} 
break;
case 3: /* REF STRUCT(INT,MODE184)  */
XAQATRN_ci = (HAQATRN.data.mode3);
 /* line 1071: */
 /* line 1072: */
YAQATRN = B ;
switch ( YAQATRN.mode )
{ 
case 3: /* REF STRUCT(INT,MODE184)  */
ZAQATRN_bci = (YAQATRN.data.mode3);
 /* line 1073: */
QAQATRN = (XOMATRN_int((*(&(XAQATRN_ci->Index))))!=XOMATRN_int((*(&(ZAQATRN_bci->Index)))));
break;
default: 
 /* line 1074: */
 /* line 1075: */
QAQATRN = DYPATRN_checkconsts(B, A, Disjoint);
break;
} 
break;
case 2: /* REF STRUCT(INT,INT)  */
ABQATRN_p = (HAQATRN.data.mode2);
 /* line 1076: */
 /* line 1077: */
BBQATRN = B ;
switch ( BBQATRN.mode )
{ 
case 2: /* REF STRUCT(INT,INT)  */
CBQATRN_bp = (BBQATRN.data.mode2);
 /* line 1078: */
QAQATRN = ((*(&(ABQATRN_p->Primno)))!=(*(&(CBQATRN_bp->Primno))));
break;
default: 
 /* line 1079: */
 /* line 1080: */
QAQATRN = DYPATRN_checkconsts(B, A, Disjoint);
break;
} 
break;
case 13: /* REF STRUCT(INT,INT,MODE222)  */
DBQATRN_ca = (HAQATRN.data.mode13);
 /* line 1081: */
 /* line 1082: */
EBQATRN = B ;
switch ( EBQATRN.mode )
{ 
case 13: /* REF STRUCT(INT,INT,MODE222)  */
FBQATRN_bca = (EBQATRN.data.mode13);
 /* line 1083: */
 /* line 1084: */
if ( ((*(&(DBQATRN_ca->Altno)))==(*(&(FBQATRN_bca->Altno)))) )
{ 
 /* line 1085: */
QAQATRN = DYPATRN_checkconsts((*(&(DBQATRN_ca->Assoc))), (*(&(FBQATRN_bca->Assoc))), Disjoint);
} 
else
{ 
 /* line 1086: */
 /* line 1087: */
QAQATRN = A68_TRUE;
} 
break;
case 2: /* REF STRUCT(INT,INT)  */
GBQATRN_bcb = (EBQATRN.data.mode2);
 /* line 1088: */
QAQATRN = A68_TRUE;
break;
default: 
 /* line 1089: */
 /* line 1090: */
QAQATRN = DYPATRN_checkconsts(B, A, Disjoint);
break;
} 
break;
case 20: /* REF STRUCT(MODE184,MODE222)  */
HBQATRN_cr = (HAQATRN.data.mode20);
 /* line 1091: */
 /* line 1092: */
IBQATRN = B ;
switch ( IBQATRN.mode )
{ 
case 20: /* REF STRUCT(MODE184,MODE222)  */
JBQATRN_bcr = (IBQATRN.data.mode20);
 /* line 1093: */
QAQATRN = DYPATRN_checkconsts((*(&(HBQATRN_cr->Elem))), (*(&(JBQATRN_bcr->Elem))), Disjoint);
break;
default: 
 /* line 1094: */
 /* line 1095: */
QAQATRN = DYPATRN_checkconsts(B, A, Disjoint);
break;
} 
break;
case 21: /* REF STRUCT(MODE222,REF MODE237)  */
KBQATRN_cs = (HAQATRN.data.mode21);
 /* line 1096: */
 /* line 1097: */
LBQATRN = B ;
switch ( LBQATRN.mode )
{ 
case 20: /* REF STRUCT(MODE184,MODE222)  */
MBQATRN_bcr = (LBQATRN.data.mode20);
 /* line 1098: */
 /* line 1099: */
NBQATRN = DYPATRN_checkconsts((*(&(KBQATRN_cs->Elem))), (*(&(MBQATRN_bcr->Elem))), Disjoint);
if ( ! NBQATRN )
{ /* line 1100: */
if ( ((*(&(KBQATRN_cs->Rest)))==IAAATRN_nilustr) )
{ 
 /* line 1101: */
OBQATRN = A68_FALSE;
} 
else
{ 
 /* line 1102: */
 /* line 1103: */
RBQATRN = (*(&(KBQATRN_cs->Rest))) ;
OBQATRN = DYPATRN_checkconsts(A_UNITE(QBQATRN,mode21,21,RBQATRN), A_UNITE(PBQATRN,mode20,20,MBQATRN_bcr), Disjoint);
} 
NBQATRN = OBQATRN;
}
 /* line 1104: */
QAQATRN = NBQATRN;
break;
case 21: /* REF STRUCT(MODE222,REF MODE237)  */
SBQATRN_bcs = (LBQATRN.data.mode21);
 /* line 1105: */
 /* line 1106: */
TBQATRN = DYPATRN_checkconsts((*(&(KBQATRN_cs->Elem))), (*(&(SBQATRN_bcs->Elem))), Disjoint);
if ( ! TBQATRN )
{ /* line 1107: */
if ( ((*(&(KBQATRN_cs->Rest)))==IAAATRN_nilustr) )
{ 
 /* line 1108: */
UBQATRN = A68_FALSE;
} 
else
{ 
 /* line 1109: */
 /* line 1110: */
WBQATRN = (*(&(SBQATRN_bcs->Rest))) ;
YBQATRN = (*(&(KBQATRN_cs->Rest))) ;
UBQATRN = DYPATRN_checkconsts(A_UNITE(XBQATRN,mode21,21,YBQATRN), A_UNITE(VBQATRN,mode21,21,WBQATRN), Disjoint);
} 
TBQATRN = UBQATRN;
}
 /* line 1111: */
QAQATRN = TBQATRN;
break;
default: 
 /* line 1112: */
 /* line 1113: */
QAQATRN = DYPATRN_checkconsts(B, A, Disjoint);
break;
} 
break;
case 10: /* REF STRUCT(MODE222,REF MODE226)  */
ZBQATRN_ca = (HAQATRN.data.mode10);
 /* line 1114: */
QAQATRN = A_CALLPROC(LZPATRN_checkualts,(A, B),(A, B,(LZPATRN_checkualts).nonlocals));
break;
case 7: /* REF STRUCT(MODE200)  */
ACQATRN_ct = (HAQATRN.data.mode7);
 /* line 1115: */
if ( Disjoint )
{ 
QAQATRN = A68_FALSE;
} 
else
{ 
 /* line 1116: */
QAQATRN = !(A_CALLPROC(GYPATRN_is_ctypeorquery,(B),(B,(GYPATRN_is_ctypeorquery).nonlocals))==1);
} 
break;
case 4: /* REF STRUCT(MODE200)  */
BCQATRN_cq = (HAQATRN.data.mode4);
 /* line 1117: */
if ( Disjoint )
{ 
NKDAOST_sysfault(DCQATRN);
 /* line 1118: */
QAQATRN = A68_FALSE;
} 
else
{ 
 /* line 1119: */
 /* line 1120: */
QAQATRN = !(A_CALLPROC(GYPATRN_is_ctypeorquery,(B),(B,(GYPATRN_is_ctypeorquery).nonlocals))==2);
} 
break;
case 9: /* REF STRUCT(INT,INT,INT)  */
ECQATRN_cra = (HAQATRN.data.mode9);
 /* line 1121: */
 /* line 1122: */
FCQATRN = B ;
switch ( FCQATRN.mode )
{ 
case 9: /* REF STRUCT(INT,INT,INT)  */
GCQATRN_crb = (FCQATRN.data.mode9);
 /* line 1123: */
 /* line 1124: */
QAQATRN = A_CALLPROC(WYPATRN_checkprimrange,((*(&(ECQATRN_cra->Firstno))), (*(&(ECQATRN_cra->Lastno))), (*(&(GCQATRN_crb->Firstno))), (*(&(GCQATRN_crb->Lastno)))),((*(&(ECQATRN_cra->Firstno))), (*(&(ECQATRN_cra->Lastno))), (*(&(GCQATRN_crb->Firstno))), (*(&(GCQATRN_crb->Lastno))),(WYPATRN_checkprimrange).nonlocals));
break;
case 2: /* REF STRUCT(INT,INT)  */
HCQATRN_cpb = (FCQATRN.data.mode2);
 /* line 1125: */
 /* line 1126: */
QAQATRN = A_CALLPROC(WYPATRN_checkprimrange,((*(&(ECQATRN_cra->Firstno))), (*(&(ECQATRN_cra->Lastno))), (*(&(HCQATRN_cpb->Primno))), (*(&(HCQATRN_cpb->Primno)))),((*(&(ECQATRN_cra->Firstno))), (*(&(ECQATRN_cra->Lastno))), (*(&(HCQATRN_cpb->Primno))), (*(&(HCQATRN_cpb->Primno))),(WYPATRN_checkprimrange).nonlocals));
break;
default: 
 /* line 1127: */
 /* line 1128: */
QAQATRN = DYPATRN_checkconsts(B, A, Disjoint);
break;
} 
break;
case 5: /* REF STRUCT(INT,REF MODE32)  */
ICQATRN_cqa = (HAQATRN.data.mode5);
 /* line 1129: */
 /* line 1130: */
JCQATRN = B ;
switch ( JCQATRN.mode )
{ 
case 5: /* REF STRUCT(INT,REF MODE32)  */
KCQATRN_cqb = (JCQATRN.data.mode5);
 /* line 1131: */
QAQATRN = !EZPATRN_equal_ints((*(&(ICQATRN_cqa->String))), (*(&(KCQATRN_cqb->String))));
break;
case 33: /* REF STRUCT(MODE184,MODE222)  */
LCQATRN_csb = (JCQATRN.data.mode33);
{ 
MCQATRN_equal = A68_TRUE;
NCQATRN_with_type = A68_FALSE;
 /* line 1132: */
 /* line 1133: */
 /* line 1134: */
PCQATRN = (*(&(LCQATRN_csb->Char))) ;
switch ( PCQATRN.mode )
{ 
case 2: /* REF STRUCT(INT,INT)  */
QCQATRN_cp = (PCQATRN.data.mode2);
 /* line 1135: */
OCQATRN_c = (*(&(QCQATRN_cp->Primno)));
break;
case 7: /* REF STRUCT(MODE200)  */
RCQATRN_ct = (PCQATRN.data.mode7);
 /* line 1136: */
NCQATRN_with_type = A68_TRUE;
break;
default: 
 /* line 1137: */
MCQATRN_equal = A68_FALSE;
break;
} 
 /* line 1138: */
 /* line 1139: */
if ( NCQATRN_with_type )
{ 
if ( Disjoint )
{ 
QAQATRN = A68_FALSE;
} 
else
{ 
 /* line 1140: */
QAQATRN = A68_TRUE;
} 
} 
else
{ 
SCQATRN_string = (*(&(ICQATRN_cqa->String)));
 /* line 1141: */
UCQATRN = SCQATRN_string.upb;
for ( TCQATRN_i = 1;
TCQATRN_i <= UCQATRN;
TCQATRN_i += 1 )
{ 
 /* line 1142: */
if ( !(MCQATRN_equal) ) break;
if ( (OCQATRN_c!=(*(&A_VINDEX(SCQATRN_string,TCQATRN_i)))) )
{ 
 /* line 1143: */
MCQATRN_equal = A68_FALSE;
} 
}
 /* line 1144: */
 /* line 1145: */
 /* line 1146: */
 /* line 1147: */
QAQATRN = !MCQATRN_equal;
} 
} 
break;
default: 
 /* line 1148: */
 /* line 1149: */
QAQATRN = DYPATRN_checkconsts(B, A, Disjoint);
break;
} 
break;
case 33: /* REF STRUCT(MODE184,MODE222)  */
VCQATRN_csa = (HAQATRN.data.mode33);
 /* line 1150: */
 /* line 1151: */
WCQATRN = B ;
switch ( WCQATRN.mode )
{ 
case 33: /* REF STRUCT(MODE184,MODE222)  */
XCQATRN_csb = (WCQATRN.data.mode33);
 /* line 1152: */
QAQATRN = DYPATRN_checkconsts((*(&(VCQATRN_csa->Char))), (*(&(XCQATRN_csb->Char))), Disjoint);
break;
default: 
 /* line 1153: */
 /* line 1154: */
QAQATRN = DYPATRN_checkconsts(B, A, Disjoint);
break;
} 
break;
case 6: /* REF STRUCT(INT)  */
 /* line 1155: */
YCQATRN = B ;
switch ( YCQATRN.mode )
{ 
case 6: /* REF STRUCT(INT)  */
QAQATRN = A68_FALSE;
break;
default: 
 /* line 1156: */
QAQATRN = DYPATRN_checkconsts(B, A, Disjoint);
break;
} 
break;
case 30: /* REF STRUCT(MODE222,MODE175)  */
ZCQATRN_ua = (HAQATRN.data.mode30);
 /* line 1157: */
QAQATRN = DYPATRN_checkconsts((*(&(ZCQATRN_ua->Unit))), B, Disjoint);
break;
case 34: /* REF STRUCT(INT)  */
ADQATRN_cn = (HAQATRN.data.mode34);
 /* line 1158: */
QAQATRN = A68_TRUE;
break;
default: 
{ 
NKDAOST_sysfault(CDQATRN);
 /* line 1159: */
 /* line 1160: */
QAQATRN = A68_TRUE;
} 
break;
} 
} 
A_PROC_EXIT(checkconsts);
return( QAQATRN );
} 
#undef NL

A_STATIC A68_BOOL  HDQATRN_equal_attrnames(A68_181 * At, A68_181 * Bt, A68_472  Closea, A68_472  Closeb)
{ 
A68_BOOL  IDQATRN;  /* clause result */
A_PROC_ENTRY(equal_attrnames);
 /* line 1164: */
 /* line 1166: */
{ 
 /* line 1167: */
if ( ((*(&(At->Sort)))==(*(&(Bt->Sort)))) )
{ 
 /* line 1168: */
if ( ((*(&(At->Sort)))==OKAATRN_outerdec) )
{ 
 /* line 1169: */
IDQATRN = ((*(&((*(&(At->Usage)))->Closureno)))==(*(&((*(&(Bt->Usage)))->Closureno))));
} 
else
{ 
 /* line 1170: */
 /* line 1171: */
IDQATRN = A_VC_EQ((*(&(At->Attrname))),(*(&(Bt->Attrname))));
} 
} 
else
{ 
 /* line 1172: */
 /* line 1173: */
IDQATRN = A68_FALSE;
} 
} 
A_PROC_EXIT(equal_attrnames);
return( IDQATRN );
} 
#undef NL

A_STATIC A68_BOOL  NDQATRN_equal_attr(A68_175  A, A68_175  B, A68_472  Closea, A68_472  Closeb)
{ 
A68_175  ODQATRN;  /* united object - for case conformity */
A68_176 * PDQATRN_an;
A68_302  QDQATRN;  /* OPERATORS - simple index */
A68_INT  RDQATRN;  /* YIELD */
A68_181 * SDQATRN_atd;
A68_175  TDQATRN;  /* united object - for case conformity */
A68_176 * UDQATRN_bn;
A68_302  VDQATRN;  /* OPERATORS - simple index */
A68_INT  WDQATRN;  /* YIELD */
A68_181 * XDQATRN_btd;
A68_BOOL  YDQATRN;  /* clause result */
A68_179 * ZDQATRN_bb;
A68_178 * AEQATRN_as;
A68_175  BEQATRN;  /* united object - for case conformity */
A68_178 * CEQATRN_bs;
A68_BOOL  DEQATRN;  /* optbool result */
A68_BOOL  EEQATRN;  /* clause result */
A68_175  FEQATRN;  /* OPERATORS - mode -> union mode */
A68_178 * GEQATRN;  /* YIELD */
A68_175  HEQATRN;  /* OPERATORS - mode -> union mode */
A68_178 * IEQATRN;  /* YIELD */
A68_177 * JEQATRN_ad;
A68_175  KEQATRN;  /* united object - for case conformity */
A68_177 * LEQATRN_bd;
A68_BOOL  MEQATRN;  /* optbool result */
A68_179 * NEQATRN_ab;
A68_175  OEQATRN;  /* united object - for case conformity */
A68_BOOL  REQATRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(equal_attr);
 /* line 1177: */
 /* line 1178: */
ODQATRN = A ;
switch ( ODQATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
PDQATRN_an = (ODQATRN.data.mode1);
 /* line 1179: */
{ 
QDQATRN = (*(&(Closea.Env->Attrs))) ;
RDQATRN = (*(&(PDQATRN_an->Attrno))) ;
SDQATRN_atd = (*(&A_VINDEX(QDQATRN,RDQATRN)));
 /* line 1180: */
 /* line 1181: */
TDQATRN = B ;
switch ( TDQATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
UDQATRN_bn = (TDQATRN.data.mode1);
 /* line 1182: */
{ 
VDQATRN = (*(&(Closeb.Env->Attrs))) ;
WDQATRN = (*(&(UDQATRN_bn->Attrno))) ;
XDQATRN_btd = (*(&A_VINDEX(VDQATRN,WDQATRN)));
 /* line 1183: */
 /* line 1184: */
if ( HDQATRN_equal_attrnames(SDQATRN_atd, XDQATRN_btd, Closea, Closeb) )
{ 
 /* line 1185: */
YDQATRN = A68_TRUE;
} 
else
{ 
 /* line 1186: */
 /* line 1187: */
 /* line 1188: */
YDQATRN = NDQATRN_equal_attr((*(&(SDQATRN_atd->Value))), (*(&(XDQATRN_btd->Value))), Closea, Closeb);
} 
} 
break;
case 4: /* REF STRUCT(MODE175)  */
ZDQATRN_bb = (TDQATRN.data.mode4);
 /* line 1189: */
YDQATRN = NDQATRN_equal_attr(A, (*(&(ZDQATRN_bb->Attr))), Closea, Closeb);
break;
default: 
 /* line 1190: */
 /* line 1191: */
 /* line 1192: */
YDQATRN = NDQATRN_equal_attr((*(&(SDQATRN_atd->Value))), B, Closea, Closeb);
break;
} 
} 
break;
case 3: /* REF STRUCT(MODE175,REF MODE178)  */
AEQATRN_as = (ODQATRN.data.mode3);
 /* line 1193: */
 /* line 1194: */
BEQATRN = B ;
switch ( BEQATRN.mode )
{ 
case 3: /* REF STRUCT(MODE175,REF MODE178)  */
CEQATRN_bs = (BEQATRN.data.mode3);
 /* line 1195: */
 /* line 1196: */
 /* line 1197: */
DEQATRN = NDQATRN_equal_attr((*(&(AEQATRN_as->Elem))), (*(&(CEQATRN_bs->Elem))), Closea, Closeb);
if ( DEQATRN )
{ /* line 1198: */
if ( ((*(&(AEQATRN_as->Rest)))==DBAATRN_nilattrstr) )
{ 
 /* line 1199: */
EEQATRN = ((*(&(CEQATRN_bs->Rest)))==DBAATRN_nilattrstr);
} 
else
{ 
 /* line 1200: */
if ( ((*(&(CEQATRN_bs->Rest)))!=DBAATRN_nilattrstr) )
{ 
 /* line 1201: */
GEQATRN = (*(&(CEQATRN_bs->Rest))) ;
IEQATRN = (*(&(AEQATRN_as->Rest))) ;
EEQATRN = NDQATRN_equal_attr(A_UNITE(HEQATRN,mode3,3,IEQATRN), A_UNITE(FEQATRN,mode3,3,GEQATRN), Closea, Closeb);
} 
else
{ 
 /* line 1202: */
EEQATRN = A68_FALSE;
} 
} 
DEQATRN = EEQATRN;
}
 /* line 1203: */
YDQATRN = DEQATRN;
break;
case 1: /* REF STRUCT(INT)  */
 /* line 1204: */
YDQATRN = NDQATRN_equal_attr(B, A, Closeb, Closea);
break;
default: 
 /* line 1205: */
 /* line 1206: */
YDQATRN = A68_FALSE;
break;
} 
break;
case 2: /* REF STRUCT(REF MODE26,REF MODE173)  */
JEQATRN_ad = (ODQATRN.data.mode2);
 /* line 1207: */
 /* line 1208: */
KEQATRN = B ;
switch ( KEQATRN.mode )
{ 
case 2: /* REF STRUCT(REF MODE26,REF MODE173)  */
LEQATRN_bd = (KEQATRN.data.mode2);
 /* line 1209: */
MEQATRN = A_VC_EQ((*(&(JEQATRN_ad->Classname))),(*(&(LEQATRN_bd->Classname))));
if ( MEQATRN )
{MEQATRN = TXPATRN_equal_ids((*(&(JEQATRN_ad->Strings))), (*(&(LEQATRN_bd->Strings))));
}
 /* line 1210: */
YDQATRN = MEQATRN;
break;
case 1: /* REF STRUCT(INT)  */
 /* line 1211: */
YDQATRN = NDQATRN_equal_attr(B, A, Closeb, Closea);
break;
default: 
 /* line 1212: */
 /* line 1213: */
YDQATRN = A68_FALSE;
break;
} 
break;
case 4: /* REF STRUCT(MODE175)  */
NEQATRN_ab = (ODQATRN.data.mode4);
 /* line 1214: */
 /* line 1215: */
YDQATRN = NDQATRN_equal_attr((*(&(NEQATRN_ab->Attr))), B, Closea, Closeb);
break;
case 5: /* REF STRUCT(INT)  */
 /* line 1216: */
OEQATRN = B ;
switch ( OEQATRN.mode )
{ 
case 5: /* REF STRUCT(INT)  */
YDQATRN = A68_TRUE;
break;
default: 
 /* line 1217: */
YDQATRN = A68_FALSE;
break;
} 
break;
default: 
NKDAOST_sysfault(QEQATRN);
 /* line 1218: */
YDQATRN = REQATRN;
break;
} 
A_PROC_EXIT(equal_attr);
return( YDQATRN );
} 
#undef NL

A_STATIC A68_BOOL  WEQATRN_equal_instances(A68_262  Ai, A68_262  Bi, A68_472  Closea, A68_472  Closeb)
{ 
A68_306  XEQATRN;  /* OPERATORS - simple index */
A68_INT  YEQATRN;  /* YIELD */
A68_298 * ZEQATRN_fa;
A68_306  AFQATRN;  /* OPERATORS - simple index */
A68_INT  BFQATRN;  /* YIELD */
A68_298 * CFQATRN_fb;
A68_BOOL  DFQATRN;  /* clause result */
A68_BOOL  EFQATRN_equal;
A68_BOOL  FFQATRN;  /* optbool result */
A68_BOOL  GFQATRN;  /* clause result */
A_PROC_ENTRY(equal_instances);
 /* line 1221: */
 /* line 1222: */
{ 
XEQATRN = (*(&(Closea.Env->Fns))) ;
YEQATRN = Ai.Fnno ;
ZEQATRN_fa = (*(&A_VINDEX(XEQATRN,YEQATRN)));
 /* line 1223: */
AFQATRN = (*(&(Closeb.Env->Fns))) ;
BFQATRN = Bi.Fnno ;
CFQATRN_fb = (*(&A_VINDEX(AFQATRN,BFQATRN)));
 /* line 1224: */
 /* line 1225: */
 /* line 1226: */
if ( ((*(&(ZEQATRN_fa->Sort)))==(*(&(CFQATRN_fb->Sort)))) )
{ 
 /* line 1227: */
if ( ((*(&(ZEQATRN_fa->Sort)))==OKAATRN_outerdec) )
{ 
 /* line 1228: */
DFQATRN = ((*(&((*(&(ZEQATRN_fa->Usage)))->Closureno)))==(*(&((*(&(CFQATRN_fb->Usage)))->Closureno))));
} 
else
{ 
 /* line 1229: */
 /* line 1230: */
DFQATRN = A_VC_EQ((*(&(ZEQATRN_fa->Fnname))),(*(&(CFQATRN_fb->Fnname))));
} 
} 
else
{ 
 /* line 1231: */
DFQATRN = A68_FALSE;
} 
EFQATRN_equal = DFQATRN;
 /* line 1232: */
FFQATRN = EFQATRN_equal;
if ( FFQATRN )
{ /* line 1233: */
FFQATRN = NDQATRN_equal_attr(Ai.Attr, Bi.Attr, Closea, Closeb);
}
GFQATRN = FFQATRN;
} 
A_PROC_EXIT(equal_instances);
return( GFQATRN );
} 
#undef NL

A_STATIC A68_BOOL  LFQATRN_checktypes(A68_200  A, A68_200  B, A68_472  Closea, A68_472  Closeb)
{ 
A68_301 * MFQATRN_enva;
A68_301 * NFQATRN_envb;
A68_BOOL  OFQATRN;  /* clause result */
A68_200  PFQATRN;  /* avoid structure result */
A68_200  QFQATRN;  /* avoid structure result */
A_PROC_ENTRY(checktypes);
 /* line 1236: */
 /* line 1237: */
{ 
MFQATRN_enva = Closea.Env;
 /* line 1238: */
NFQATRN_envb = Closeb.Env;
 /* line 1240: */
 /* line 1241: */
 /* line 1242: */
 /* line 1243: */
DDOATRN_simplify_type( B, NFQATRN_envb, &PFQATRN );
DDOATRN_simplify_type( A, MFQATRN_enva, &QFQATRN );
OFQATRN = NEOATRN_check_types(QFQATRN, PFQATRN, MFQATRN_enva, NFQATRN_envb, A68_FALSE);
} 
A_PROC_EXIT(checktypes);
return( OFQATRN );
} 
#undef NL

A_STATIC A68_INT  WFQATRN_const_sort(A68_222  C)
{ 
A68_222  XFQATRN;  /* united object - for case conformity */
A68_INT  YFQATRN;  /* clause result */
A68_229 * ZFQATRN_ca;
A68_236 * AGQATRN_cr;
A68_237 * BGQATRN_cs;
A68_INT  CGQATRN_sort;
A68_237 * DGQATRN_cst;
A68_INT  EGQATRN_elem;
A68_BOOL  FGQATRN;  /* optbool result */
A68_225 * GGQATRN_crg;
A68_249 * HGQATRN_csg;
A68_246 * IGQATRN_ua;
A_PROC_ENTRY(const_sort);
 /* line 1252: */
 /* line 1253: */
XFQATRN = C ;
switch ( XFQATRN.mode )
{ 
case 7: /* REF STRUCT(MODE200)  */
 /* line 1254: */
YFQATRN = SFQATRN_chooser;
break;
case 8: /* REF STRUCT(INT,MODE199)  */
 /* line 1255: */
YFQATRN = SFQATRN_chooser;
break;
case 13: /* REF STRUCT(INT,INT,MODE222)  */
ZFQATRN_ca = (XFQATRN.data.mode13);
 /* line 1256: */
YFQATRN = WFQATRN_const_sort((*(&(ZFQATRN_ca->Assoc))));
break;
case 20: /* REF STRUCT(MODE184,MODE222)  */
AGQATRN_cr = (XFQATRN.data.mode20);
 /* line 1257: */
YFQATRN = WFQATRN_const_sort((*(&(AGQATRN_cr->Elem))));
break;
case 21: /* REF STRUCT(MODE222,REF MODE237)  */
BGQATRN_cs = (XFQATRN.data.mode21);
{ 
CGQATRN_sort = RFQATRN_always;
 /* line 1258: */
DGQATRN_cst = BGQATRN_cs;
 /* line 1259: */
for ( ;; )
{ 
 /* line 1260: */
if ( !((DGQATRN_cst!=IAAATRN_nilustr)) ) break;
EGQATRN_elem = WFQATRN_const_sort((*(&(DGQATRN_cst->Elem))));
 /* line 1261: */
 /* line 1262: */
if ( (CGQATRN_sort==RFQATRN_always) )
{ 
 /* line 1263: */
CGQATRN_sort = EGQATRN_elem;
} 
else
{ 
FGQATRN = (EGQATRN_elem!=RFQATRN_always);
if ( FGQATRN )
{ /* line 1264: */
FGQATRN = (EGQATRN_elem!=CGQATRN_sort);
}
if ( FGQATRN )
{ 
 /* line 1265: */
CGQATRN_sort = UFQATRN_illegal;
} 
} 
 /* line 1266: */
 /* line 1267: */
DGQATRN_cst = (*(&(DGQATRN_cst->Rest)));
}
 /* line 1268: */
 /* line 1269: */
 /* line 1270: */
YFQATRN = CGQATRN_sort;
} 
break;
case 10: /* REF STRUCT(MODE222,REF MODE226)  */
 /* line 1271: */
YFQATRN = SFQATRN_chooser;
break;
case 4: /* REF STRUCT(MODE200)  */
 /* line 1272: */
YFQATRN = TFQATRN_value;
break;
case 9: /* REF STRUCT(INT,INT,INT)  */
GGQATRN_crg = (XFQATRN.data.mode9);
 /* line 1273: */
YFQATRN = SFQATRN_chooser;
break;
case 33: /* REF STRUCT(MODE184,MODE222)  */
HGQATRN_csg = (XFQATRN.data.mode33);
 /* line 1274: */
YFQATRN = WFQATRN_const_sort((*(&(HGQATRN_csg->Char))));
break;
case 30: /* REF STRUCT(MODE222,MODE175)  */
IGQATRN_ua = (XFQATRN.data.mode30);
 /* line 1275: */
 /* line 1276: */
YFQATRN = WFQATRN_const_sort((*(&(IGQATRN_ua->Unit))));
break;
default: 
YFQATRN = RFQATRN_always;
break;
} 
A_PROC_EXIT(const_sort);
return( YFQATRN );
} 
#undef NL

A_STATIC A68_BOOL  NGQATRN_const_check(A68_INT  Standard, A68_222  Const, A68_472  Close, A68_471 * Diag)
{ 
A68_INT  OGQATRN_sort;
A68_BOOL  PGQATRN;  /* optbool result */
A68_BOOL  QGQATRN;  /* clause result */
A68_BOOL  VGQATRN;  /* clause result */
A_PROC_ENTRY(const_check);
 /* line 1281: */
 /* line 1282: */
{ 
OGQATRN_sort = WFQATRN_const_sort(Const);
 /* line 1283: */
PGQATRN = (OGQATRN_sort!=RFQATRN_always);
if ( PGQATRN )
{PGQATRN = (OGQATRN_sort!=Standard);
}
 /* line 1284: */
if ( PGQATRN )
{if ( VSOATRN_chooser_const )
{ 
QGQATRN = (OGQATRN_sort!=SFQATRN_chooser);
} 
else
{ 
 /* line 1285: */
QGQATRN = A68_TRUE;
} 
PGQATRN = QGQATRN;
}
if ( PGQATRN )
{ 
CNPATRN_fpopen = Const;
 /* line 1286: */
 /* line 1287: */
if ( (Standard==TFQATRN_value) )
{ 
 /* line 1288: */
 /* line 1289: */
INPATRN_faultp(SGQATRN, Close, Diag);
} 
else
{ 
 /* line 1290: */
INPATRN_faultp(UGQATRN, Close, Diag);
} 
 /* line 1291: */
 /* line 1292: */
VGQATRN = A68_FALSE;
} 
else
{ 
 /* line 1293: */
 /* line 1294: */
VGQATRN = A68_TRUE;
} 
} 
A_PROC_EXIT(const_check);
return( VGQATRN );
} 
#undef NL
 /* line 1297: */

A_STATIC A68_VOID  BHQATRN_choosers_check(A68_200  Iptype, A68_222  Test, A68_237 * Choosers, A68_472  Close, A68_471 * Diag)
{ 
A68_200  CHQATRN;  /* avoid structure result */
A68_200  DHQATRN_ctype;
A68_237 * GHQATRN_old;
A_PROC_ENTRY(choosers_check);
 /* line 1298: */
 /* line 1299: */
{ 
VUNATRN_unit_type( Test, Close.Fdec, Close.Env, &CHQATRN );
DHQATRN_ctype = CHQATRN;
 /* line 1300: */
 /* line 1301: */
if ( !LFQATRN_checktypes(DHQATRN_ctype, Iptype, Close, Close) )
{ 
UMPATRN_fp1 = DHQATRN_ctype;
VMPATRN_fp2 = Iptype;
 /* line 1302: */
 /* line 1303: */
INPATRN_faultp(FHQATRN, Close, Diag);
} 
else
{ 
GHQATRN_old = Choosers;
 /* line 1304: */
for ( ;; )
{ 
 /* line 1305: */
if ( !((GHQATRN_old!=IAAATRN_nilustr)) ) break;
 /* line 1306: */
if ( !DYPATRN_checkconsts(Test, (*(&(GHQATRN_old->Elem))), A68_TRUE) )
{ 
CNPATRN_fpopen = Test;
DNPATRN_fpclose = (*(&(GHQATRN_old->Elem)));
 /* line 1307: */
 /* line 1308: */
INPATRN_faultp(IHQATRN, Close, Diag);
} 
 /* line 1309: */
 /* line 1310: */
GHQATRN_old = (*(&(GHQATRN_old->Rest)));
}
 /* line 1311: */
 /* line 1312: */
} 
} 
A_PROC_EXIT(choosers_check);
return;
} 
#undef NL

A_STATIC A68_215 * LHQATRN_primtype(A68_200  T, A68_472  Close)
{ 
A68_200  MHQATRN;  /* united object - for case conformity */
A68_201 * NHQATRN_tn;
A68_304  OHQATRN;  /* OPERATORS - simple index */
A68_INT  PHQATRN;  /* YIELD */
A68_215 * QHQATRN_tdec;
A68_213  RHQATRN;  /* united object - for case conformity */
A68_209 * SHQATRN_ttag;
A68_215 * THQATRN;  /* clause result */
A68_205 * UHQATRN_tb;
A68_215 * XHQATRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(primtype);
 /* line 1316: */
 /* line 1317: */
MHQATRN = T ;
switch ( MHQATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
NHQATRN_tn = (MHQATRN.data.mode1);
 /* line 1318: */
{ 
OHQATRN = (*(&(Close.Env->Types))) ;
PHQATRN = (*(&(NHQATRN_tn->Typeno))) ;
QHQATRN_tdec = (*(&A_VINDEX(OHQATRN,PHQATRN)));
 /* line 1319: */
 /* line 1320: */
RHQATRN = (*(&(QHQATRN_tdec->Body))) ;
switch ( RHQATRN.mode )
{ 
case 3: /* REF STRUCT(MODE200)  */
SHQATRN_ttag = (RHQATRN.data.mode3);
 /* line 1321: */
 /* line 1322: */
THQATRN = LHQATRN_primtype((*(&(SHQATRN_ttag->Tag))), Close);
break;
default: 
 /* line 1323: */
 /* line 1324: */
THQATRN = QHQATRN_tdec;
break;
} 
} 
break;
case 5: /* REF STRUCT(MODE200)  */
UHQATRN_tb = (MHQATRN.data.mode5);
 /* line 1325: */
THQATRN = LHQATRN_primtype((*(&(UHQATRN_tb->Type))), Close);
break;
default: 
NKDAOST_sysfault(WHQATRN);
 /* line 1326: */
THQATRN = XHQATRN;
break;
} 
A_PROC_EXIT(primtype);
return( THQATRN );
} 
#undef NL

A_STATIC A68_VOID  CIQATRN_reformindex(A68_200  Ty, A68_INT * N, A68_200 * Primtype, A68_472  Close)
{ 
A68_200  DIQATRN;  /* united object - for case conformity */
A68_201 * EIQATRN_tn;
A68_304  FIQATRN;  /* OPERATORS - simple index */
A68_INT  GIQATRN;  /* YIELD */
A68_215 * HIQATRN_tdec;
A68_213  IIQATRN;  /* united object - for case conformity */
A68_209 * JIQATRN_ttag;
A68_200  KIQATRN;  /* OPERATORS - mode -> union mode */
A68_203 * LIQATRN_ts;
A68_203 * MIQATRN_s;
A68_202 * NIQATRN_tr;
A68_INT  OIQATRN_oldval;
A68_INT  PIQATRN_noelems;
A68_INT  QIQATRN_rowsize;
A68_BOOL  RIQATRN;  /* optbool result */
A68_INT  SIQATRN;  /* ADICOPS - MOD */
A68_204 * TIQATRN_tf;
A68_200  UIQATRN;  /* OPERATORS - mode -> union mode */
A68_206 * VIQATRN_tg;
A68_200  WIQATRN;  /* OPERATORS - mode -> union mode */
A68_205 * XIQATRN_tb;
A_PROC_ENTRY(reformindex);
 /* line 1329: */
 /* line 1330: */
{ 
 /* line 1331: */
if ( ((*N)>0) )
{ 
 /* line 1332: */
DIQATRN = Ty ;
switch ( DIQATRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
EIQATRN_tn = (DIQATRN.data.mode1);
 /* line 1333: */
{ 
FIQATRN = (*(&(Close.Env->Types))) ;
GIQATRN = (*(&(EIQATRN_tn->Typeno))) ;
HIQATRN_tdec = (*(&A_VINDEX(FIQATRN,GIQATRN)));
 /* line 1334: */
 /* line 1335: */
IIQATRN = (*(&(HIQATRN_tdec->Body))) ;
switch ( IIQATRN.mode )
{ 
case 3: /* REF STRUCT(MODE200)  */
JIQATRN_ttag = (IIQATRN.data.mode3);
 /* line 1336: */
CIQATRN_reformindex((*(&(JIQATRN_ttag->Tag))), N, Primtype, Close);
break;
default: 
 /* line 1337: */
if ( ((*N)==1) )
{ 
(*Primtype) = A_UNITE(KIQATRN,mode1,1,EIQATRN_tn);
 /* line 1338: */
(*N) = 0;
} 
else
{ 
 /* line 1339: */
 /* line 1340: */
 /* line 1341: */
 /* line 1342: */
(*N)-=1;
} 
break;
} 
} 
break;
case 3: /* REF STRUCT(MODE200,REF MODE203)  */
LIQATRN_ts = (DIQATRN.data.mode3);
 /* line 1343: */
{ 
MIQATRN_s = LIQATRN_ts;
 /* line 1344: */
CIQATRN_reformindex((*(&(LIQATRN_ts->Elem))), N, Primtype, Close);
 /* line 1345: */
for ( ;; )
{ 
 /* line 1346: */
if ( !(((MIQATRN_s = (*(&(MIQATRN_s->Rest))))!=GAAATRN_niltstr)) ) break;
CIQATRN_reformindex((*(&(MIQATRN_s->Elem))), N, Primtype, Close);
}
 /* line 1347: */
 /* line 1348: */
} 
break;
case 2: /* REF STRUCT(MODE184,MODE200)  */
NIQATRN_tr = (DIQATRN.data.mode2);
 /* line 1349: */
{ 
OIQATRN_oldval = (*N);
 /* line 1350: */
CIQATRN_reformindex((*(&(NIQATRN_tr->Elem))), N, Primtype, Close);
 /* line 1351: */
PIQATRN_noelems = (OIQATRN_oldval-(*N));
 /* line 1352: */
QIQATRN_rowsize = (PIQATRN_noelems*(XOMATRN_int((*(&(NIQATRN_tr->Size))))-1));
 /* line 1353: */
RIQATRN = ((*N)>QIQATRN_rowsize);
if ( ! RIQATRN )
{ /* line 1354: */
RIQATRN = (QIQATRN_rowsize==0);
}
if ( RIQATRN )
{ 
 /* line 1355: */
(*N)-=QIQATRN_rowsize;
} 
else
{ 
 /* line 1356: */
if ( ((*N)==0) )
{ 
 /* line 1357: */
(*N) = 0;
} 
else
{ 
(*N) = A_MOD((*N),PIQATRN_noelems,SIQATRN);
 /* line 1358: */
if ( ((*N)==0) )
{ 
(*N) = PIQATRN_noelems;
} 
 /* line 1359: */
 /* line 1360: */
 /* line 1361: */
 /* line 1362: */
CIQATRN_reformindex((*(&(NIQATRN_tr->Elem))), N, Primtype, Close);
} 
} 
} 
break;
case 4: /* REF STRUCT(MODE200,MODE200)  */
TIQATRN_tf = (DIQATRN.data.mode4);
 /* line 1363: */
{ 
 /* line 1364: */
if ( ((*N)==1) )
{ 
(*Primtype) = A_UNITE(UIQATRN,mode4,4,TIQATRN_tf);
 /* line 1365: */
(*N) = 0;
} 
else
{ 
 /* line 1366: */
 /* line 1367: */
 /* line 1368: */
(*N)-=1;
} 
} 
break;
case 6: /* REF STRUCT(MODE184,MODE200)  */
VIQATRN_tg = (DIQATRN.data.mode6);
 /* line 1369: */
{ 
 /* line 1370: */
if ( ((*N)==1) )
{ 
(*Primtype) = A_UNITE(WIQATRN,mode6,6,VIQATRN_tg);
 /* line 1371: */
(*N) = 0;
} 
else
{ 
 /* line 1372: */
 /* line 1373: */
 /* line 1389: */
(*N)-=1;
} 
} 
break;
case 5: /* REF STRUCT(MODE200)  */
XIQATRN_tb = (DIQATRN.data.mode5);
 /* line 1390: */
CIQATRN_reformindex((*(&(XIQATRN_tb->Type))), N, Primtype, Close);
break;
default: 
 /* line 1391: */
 /* line 1392: */
 /* line 1393: */
NKDAOST_sysfault(ZIQATRN);
break;
} 
} 
} 
A_PROC_EXIT(reformindex);
return;
} 
#undef NL

A_STATIC A68_VOID  DJQATRN_reform_check(A68_286 * Ref, A68_472  Close, A68_471 * Diag)
{ 
A68_200  EJQATRN_primtype1;
A68_200  FJQATRN_primtype2;
A68_INT  GJQATRN_n1;
A68_INT  HJQATRN_n2;
A68_204  IJQATRN_tfn;
A68_200  JJQATRN_type1;
A68_200  KJQATRN_type2;
A68_INT  LJQATRN_i;
A68_200  MJQATRN;  /* OPERATORS - mode -> union mode */
A68_200  NJQATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(reform_check);
 /* line 1397: */
 /* line 1398: */
{ 
 /* line 1399: */
GJQATRN_n1 = 0;
HJQATRN_n2 = 0;
 /* line 1400: */
IJQATRN_tfn = (*MUNATRN_fndec_tfn(Close.Fdec));
 /* line 1401: */
JJQATRN_type1 = IJQATRN_tfn.From;
KJQATRN_type2 = IJQATRN_tfn.To;
 /* line 1402: */
for ( LJQATRN_i = 1;;
LJQATRN_i += 1 ) 
{ 
 /* line 1403: */
if ( !(((GJQATRN_n1==0)&(HJQATRN_n2==0))) ) break;
EJQATRN_primtype1 = A_UNITE(MJQATRN,mode9,9,(&DIAATRN_tnull));
FJQATRN_primtype2 = A_UNITE(NJQATRN,mode9,9,(&DIAATRN_tnull));
 /* line 1404: */
GJQATRN_n1 = LJQATRN_i;
HJQATRN_n2 = LJQATRN_i;
 /* line 1405: */
CIQATRN_reformindex(JJQATRN_type1, (&GJQATRN_n1), (&EJQATRN_primtype1), Close);
 /* line 1406: */
CIQATRN_reformindex(KJQATRN_type2, (&HJQATRN_n2), (&FJQATRN_primtype2), Close);
 /* line 1407: */
 /* line 1408: */
if ( !LFQATRN_checktypes(EJQATRN_primtype1, FJQATRN_primtype2, Close, Close) )
{ 
GJQATRN_n1 = 1;
UMPATRN_fp1 = JJQATRN_type1;
VMPATRN_fp2 = KJQATRN_type2;
 /* line 1409: */
 /* line 1410: */
 /* line 1411: */
INPATRN_faultp(PJQATRN, Close, Diag);
} 
}
 /* line 1412: */
} 
A_PROC_EXIT(reform_check);
return;
} 
#undef NL
 /* line 1416: */

A_STATIC A68_VOID  UJQATRN_timescale_check(A68_292 * Ts, A68_BOOL  Check, A68_472  Close, A68_471 * Diag)
{ 
A68_BOOL  VJQATRN;  /* optbool result */
A68_306  WJQATRN;  /* OPERATORS - simple index */
A68_INT  XJQATRN;  /* YIELD */
A68_298 * YJQATRN_fdec;
A68_204 * ZJQATRN_inst;
A68_200  AKQATRN;  /* OPERATORS - mode -> union mode */
A68_204 * BKQATRN;  /* YIELD */
A68_200  CKQATRN_spec;
A68_200  DKQATRN;  /* OPERATORS - mode -> union mode */
A68_200  EKQATRN;  /* OPERATORS - mode -> union mode */
A68_200  HKQATRN;  /* avoid structure result */
A68_200  IKQATRN_ctype;
A68_200  JKQATRN;  /* clause result */
A68_200  KKQATRN_type;
A_PROC_ENTRY(timescale_check);
 /* line 1417: */
 /* line 1418: */
{ 
 /* line 1419: */
VJQATRN = NGQATRN_const_check(TFQATRN_value, (*(&(Ts->Init))), Close, Diag);
if ( VJQATRN )
{VJQATRN = Check;
}
if ( VJQATRN )
{ 
WJQATRN = (*(&(Close.Env->Fns))) ;
XJQATRN = (*(&((&(Ts->Inst))->Fnno))) ;
YJQATRN_fdec = (*(&A_VINDEX(WJQATRN,XJQATRN)));
 /* line 1420: */
ZJQATRN_inst = MUNATRN_fndec_tfn(YJQATRN_fdec);
 /* line 1421: */
BKQATRN = MUNATRN_fndec_tfn(Close.Fdec) ;
CKQATRN_spec = A_UNITE(AKQATRN,mode4,4,BKQATRN);
 /* line 1422: */
 /* line 1423: */
if ( !LFQATRN_checktypes(A_UNITE(DKQATRN,mode4,4,ZJQATRN_inst), CKQATRN_spec, Close, Close) )
{ 
VMPATRN_fp2 = A_UNITE(EKQATRN,mode4,4,ZJQATRN_inst);
UMPATRN_fp1 = CKQATRN_spec;
 /* line 1424: */
WMPATRN_fp3 = (*(&(Close.Fdec->Fnname)));
 /* line 1425: */
 /* line 1426: */
 /* line 1427: */
 /* line 1428: */
INPATRN_faultp(GKQATRN, Close, Diag);
} 
else
{ 
VUNATRN_unit_type( (*(&(Ts->Init))), Close.Fdec, Close.Env, &HKQATRN );
IKQATRN_ctype = HKQATRN;
 /* line 1429: */
if ( (*(&(Ts->Faster))) )
{ 
JKQATRN = (*(&(ZJQATRN_inst->To)));
} 
else
{ 
JKQATRN = (*(&(ZJQATRN_inst->From)));
} 
KKQATRN_type = JKQATRN;
 /* line 1430: */
 /* line 1431: */
if ( !LFQATRN_checktypes(IKQATRN_ctype, KKQATRN_type, Close, Close) )
{ 
VMPATRN_fp2 = KKQATRN_type;
UMPATRN_fp1 = IKQATRN_ctype;
 /* line 1432: */
 /* line 1433: */
 /* line 1434: */
 /* line 1435: */
 /* line 1436: */
 /* line 1437: */
INPATRN_faultp(MKQATRN, Close, Diag);
} 
} 
} 
} 
A_PROC_EXIT(timescale_check);
return;
} 
#undef NL
 /* line 1441: */

A_STATIC A68_VOID  RKQATRN_sample_check(A68_291 * Sp, A68_BOOL  Check, A68_472  Close, A68_471 * Diag)
{ 
A68_BOOL  SKQATRN;  /* optbool result */
A68_204  TKQATRN_tfn;
A68_200  YKQATRN;  /* avoid structure result */
A68_200  ZKQATRN_ctype;
A_PROC_ENTRY(sample_check);
 /* line 1442: */
 /* line 1443: */
{ 
 /* line 1444: */
SKQATRN = NGQATRN_const_check(TFQATRN_value, (*(&(Sp->Init))), Close, Diag);
if ( SKQATRN )
{SKQATRN = Check;
}
if ( SKQATRN )
{ 
TKQATRN_tfn = (*MUNATRN_fndec_tfn(Close.Fdec));
 /* line 1445: */
VMPATRN_fp2 = TKQATRN_tfn.To;
 /* line 1446: */
 /* line 1447: */
if ( !LFQATRN_checktypes(TKQATRN_tfn.From, TKQATRN_tfn.To, Close, Close) )
{ 
UMPATRN_fp1 = TKQATRN_tfn.From;
 /* line 1448: */
 /* line 1449: */
 /* line 1450: */
 /* line 1451: */
INPATRN_faultp(A_VC_PLUS(WKQATRN,XKQATRN), Close, Diag);
} 
else
{ 
VUNATRN_unit_type( (*(&(Sp->Init))), Close.Fdec, Close.Env, &YKQATRN );
ZKQATRN_ctype = YKQATRN;
 /* line 1452: */
 /* line 1453: */
if ( !LFQATRN_checktypes(ZKQATRN_ctype, TKQATRN_tfn.To, Close, Close) )
{ 
UMPATRN_fp1 = ZKQATRN_ctype;
 /* line 1454: */
 /* line 1455: */
 /* line 1456: */
 /* line 1457: */
 /* line 1458: */
 /* line 1459: */
INPATRN_faultp(BLQATRN, Close, Diag);
} 
} 
} 
} 
A_PROC_EXIT(sample_check);
return;
} 
#undef NL

A_STATIC A68_VOID  HLQATRN_delay_check(A68_INT  Sort, A68_222  Init, A68_222  Ambig, A68_472  Close, A68_471 * Diag)
{ 
A68_204  ILQATRN_tfn;
A68_200  MLQATRN;  /* avoid structure result */
A68_200  LLQATRN_ctype;
A68_BOOL  PLQATRN;  /* optbool result */
A68_200  QLQATRN;  /* avoid structure result */
A_PROC_ENTRY(delay_check);
 /* line 1464: */
 /* line 1465: */
{ 
ILQATRN_tfn = (*MUNATRN_fndec_tfn(Close.Fdec));
 /* line 1466: */
VMPATRN_fp2 = ILQATRN_tfn.To;
 /* line 1467: */
 /* line 1468: */
if ( !LFQATRN_checktypes(ILQATRN_tfn.From, ILQATRN_tfn.To, Close, Close) )
{ 
UMPATRN_fp1 = ILQATRN_tfn.From;
 /* line 1469: */
 /* line 1470: */
 /* line 1471: */
 /* line 1472: */
INPATRN_faultp(KLQATRN, Close, Diag);
} 
 /* line 1473: */
VUNATRN_unit_type( Init, Close.Fdec, Close.Env, &MLQATRN );
LLQATRN_ctype = MLQATRN;
 /* line 1474: */
 /* line 1475: */
if ( !LFQATRN_checktypes(LLQATRN_ctype, ILQATRN_tfn.To, Close, Close) )
{ 
UMPATRN_fp1 = LLQATRN_ctype;
 /* line 1476: */
 /* line 1477: */
INPATRN_faultp(OLQATRN, Close, Diag);
} 
 /* line 1478: */
PLQATRN = (Sort==FKAATRN_const2int);
if ( ! PLQATRN )
{ /* line 1479: */
PLQATRN = (Sort==GKAATRN_const2int2);
}
if ( PLQATRN )
{ 
VUNATRN_unit_type( Ambig, Close.Fdec, Close.Env, &QLQATRN );
LLQATRN_ctype = QLQATRN;
 /* line 1480: */
 /* line 1481: */
if ( !LFQATRN_checktypes(LLQATRN_ctype, ILQATRN_tfn.To, Close, Close) )
{ 
UMPATRN_fp1 = LLQATRN_ctype;
 /* line 1482: */
 /* line 1483: */
 /* line 1484: */
 /* line 1485: */
INPATRN_faultp(SLQATRN, Close, Diag);
} 
} 
} 
A_PROC_EXIT(delay_check);
return;
} 
#undef NL
 /* line 1488: */

A_STATIC A68_VOID  XLQATRN_adelay_check(A68_288 * Ad, A68_BOOL  Check, A68_472  Close, A68_471 * Diag)
{ 
A68_BOOL  YLQATRN_ok;
A68_BOOL  ZLQATRN;  /* optbool result */
A68_BOOL  AMQATRN;  /* optbool result */
A68_BOOL  BMQATRN;  /* optbool result */
A_PROC_ENTRY(adelay_check);
 /* line 1489: */
 /* line 1490: */
{ 
YLQATRN_ok = NGQATRN_const_check(TFQATRN_value, (*(&(Ad->Init))), Close, Diag);
 /* line 1491: */
ZLQATRN = YLQATRN_ok;
if ( ZLQATRN )
{AMQATRN = ((*(&(Ad->Sort)))==FKAATRN_const2int);
if ( ! AMQATRN )
{AMQATRN = ((*(&(Ad->Sort)))==GKAATRN_const2int2);
}
 /* line 1492: */
ZLQATRN = AMQATRN;
}
if ( ZLQATRN )
{ 
 /* line 1493: */
YLQATRN_ok = NGQATRN_const_check(TFQATRN_value, (*(&(Ad->Ambig))), Close, Diag);
} 
 /* line 1494: */
 /* line 1495: */
BMQATRN = YLQATRN_ok;
if ( BMQATRN )
{BMQATRN = Check;
}
if ( BMQATRN )
{ 
 /* line 1496: */
 /* line 1497: */
HLQATRN_delay_check((*(&(Ad->Sort))), (*(&(Ad->Init))), (*(&(Ad->Ambig))), Close, Diag);
} 
} 
A_PROC_EXIT(adelay_check);
return;
} 
#undef NL
 /* line 1500: */

A_STATIC A68_VOID  GMQATRN_idelay_check(A68_289 * Id, A68_BOOL  Check, A68_472  Close, A68_471 * Diag)
{ 
A68_BOOL  HMQATRN;  /* optbool result */
A68_222  IMQATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(idelay_check);
 /* line 1501: */
 /* line 1502: */
{ 
 /* line 1503: */
HMQATRN = NGQATRN_const_check(TFQATRN_value, (*(&(Id->Init))), Close, Diag);
if ( HMQATRN )
{HMQATRN = Check;
}
if ( HMQATRN )
{ 
 /* line 1504: */
 /* line 1505: */
HLQATRN_delay_check(DKAATRN_constint, (*(&(Id->Init))), A_UNITE(IMQATRN,mode34,34,(&FIAATRN_unull)), Close, Diag);
} 
} 
A_PROC_EXIT(idelay_check);
return;
} 
#undef NL

A_STATIC A68_VOID  NMQATRN_ram_check(A68_290 * Ram, A68_BOOL  Check, A68_472  Close, A68_471 * Diag)
{ 
A68_BOOL  OMQATRN;  /* optbool result */
A68_204  PMQATRN_tfn;
A68_200  SMQATRN;  /* avoid structure result */
A68_200  TMQATRN_ctype;
A_PROC_ENTRY(ram_check);
 /* line 1509: */
 /* line 1510: */
{ 
 /* line 1511: */
OMQATRN = NGQATRN_const_check(TFQATRN_value, (*(&(Ram->Init))), Close, Diag);
if ( OMQATRN )
{OMQATRN = Check;
}
if ( OMQATRN )
{ 
PMQATRN_tfn = (*MUNATRN_fndec_tfn(Close.Fdec));
 /* line 1512: */
VMPATRN_fp2 = PMQATRN_tfn.To;
 /* line 1513: */
 /* line 1514: */
if ( !LFQATRN_checktypes(PMQATRN_tfn.From, PMQATRN_tfn.To, Close, Close) )
{ 
UMPATRN_fp1 = PMQATRN_tfn.From;
 /* line 1515: */
 /* line 1516: */
 /* line 1517: */
 /* line 1518: */
INPATRN_faultp(RMQATRN, Close, Diag);
} 
 /* line 1519: */
VUNATRN_unit_type( (*(&(Ram->Init))), Close.Fdec, Close.Env, &SMQATRN );
TMQATRN_ctype = SMQATRN;
 /* line 1520: */
 /* line 1521: */
if ( !LFQATRN_checktypes(TMQATRN_ctype, PMQATRN_tfn.To, Close, Close) )
{ 
UMPATRN_fp1 = TMQATRN_ctype;
 /* line 1522: */
 /* line 1523: */
 /* line 1524: */
 /* line 1525: */
INPATRN_faultp(VMQATRN, Close, Diag);
} 
} 
} 
A_PROC_EXIT(ram_check);
return;
} 
#undef NL

A_STATIC A68_VOID  YMQATRN_overflowsqrt(A68_472  Close, A68_471 * Diag)
{ 
A68_473  ZMQATRN;  /* collateral clause result */
A68_52  CNQATRN;  /* OPERATORS - mode -> union mode */
A68_VC  DNQATRN;  /* YIELD */
A68_52  ENQATRN;  /* OPERATORS - mode -> union mode */
A68_56  FNQATRN;  /* procedure value */
A68_85  GNQATRN;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(overflowsqrt);
 /* line 1534: */
 /* line 1535: */
{ 
SMPATRN_setfailure(Close, Diag);
 /* line 1536: */
 /* line 1537: */
DNQATRN = BNQATRN ;
ZMQATRN.data[0] = A_UNITE(CNQATRN,mode7,7,DNQATRN);
FNQATRN.fn.fn_global = LRAAOSL_newline;
FNQATRN.nonlocals = A68_NIL;
ZMQATRN.data[1] = A_UNITE(ENQATRN,mode12,12,FNQATRN);
 /* line 1538: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(GNQATRN,ZMQATRN,2,A68_52 ));
} 
A_PROC_EXIT(overflowsqrt);
return;
} 
#undef NL

A_STATIC A68_VOID  JNQATRN_overflowfail(A68_472  Close, A68_471 * Diag)
{ 
A68_473  KNQATRN;  /* collateral clause result */
A68_52  NNQATRN;  /* OPERATORS - mode -> union mode */
A68_VC  ONQATRN;  /* YIELD */
A68_52  PNQATRN;  /* OPERATORS - mode -> union mode */
A68_56  QNQATRN;  /* procedure value */
A68_85  RNQATRN;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(overflowfail);
 /* line 1541: */
 /* line 1542: */
{ 
SMPATRN_setfailure(Close, Diag);
 /* line 1543: */
 /* line 1544: */
ONQATRN = MNQATRN ;
KNQATRN.data[0] = A_UNITE(NNQATRN,mode7,7,ONQATRN);
QNQATRN.fn.fn_global = LRAAOSL_newline;
QNQATRN.nonlocals = A68_NIL;
KNQATRN.data[1] = A_UNITE(PNQATRN,mode12,12,QNQATRN);
 /* line 1545: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(RNQATRN,KNQATRN,2,A68_52 ));
} 
A_PROC_EXIT(overflowfail);
return;
} 
#undef NL
 /* line 1549: */

A_STATIC A68_VOID  WNQATRN_fmop_simplify(A68_190 * Fmop, A68_414 * Tprocs, A68_472  Close, A68_471 * Diag, A68_375  *ReturnedValue)
{ 
A68_BOOL  XNQATRN_overflowed;
A68_BOOL  YNQATRN_sqrt_fail;
A68_418  ZNQATRN;  /* CALL */
A68_375  AOQATRN;  /* avoid structure result */
A68_375  BOQATRN_right;
A68_184  COQATRN;  /* united object - for case conformity */
A68_185 * DOQATRN_ri;
A68_INT  EOQATRN_r;
A68_INT  FOQATRN;  /* clause result */
double GOQATRN,HOQATRN;/*ADICOPS - ENTIER*/
A68_REAL  IOQATRN;  /* ADICOPS - ENTIER */
A68_INT  JOQATRN_ans;
A68_375  KOQATRN;  /* collateral clause result */
A68_184  LOQATRN;  /* OPERATORS - mode -> union mode */
A68_185 * MOQATRN;  /* YIELD */
A68_375  NOQATRN;  /* clause result */
A68_375  OOQATRN;  /* collateral clause result */
A68_190  POQATRN;  /* collateral clause result */
A68_190 * QOQATRN;  /* YIELD */
A68_184  ROQATRN;  /* OPERATORS - mode -> union mode */
A68_375  SOQATRN;  /* collateral clause result */
A68_184  TOQATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(fmop_simplify);
 /* line 1550: */
 /* line 1551: */
{ 
XNQATRN_overflowed = A68_FALSE;
YNQATRN_sqrt_fail = A68_FALSE;
 /* line 1552: */
ZNQATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(ZNQATRN,((*(&(Fmop->Right))), Tprocs, &AOQATRN),((*(&(Fmop->Right))), Tprocs, &AOQATRN,(ZNQATRN).nonlocals));
BOQATRN_right = AOQATRN;
 /* line 1553: */
 /* line 1554: */
COQATRN = BOQATRN_right.F ;
switch ( COQATRN.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26)  */
DOQATRN_ri = (COQATRN.data.mode1);
{ 
EOQATRN_r = (*(&(DOQATRN_ri->Int)));
 /* line 1555: */
 /* line 1556: */
switch ( (*(&(Fmop->Sort))) )
{ 
case 1: 
 /* line 1557: */
FOQATRN = EOQATRN_r;
break;
case 2: 
if ( (EOQATRN_r==IJDAOST_minint) )
{ 
XNQATRN_overflowed = A68_TRUE;
 /* line 1558: */
 /* line 1559: */
FOQATRN = AJDAOST_maxint;
} 
else
{ 
 /* line 1560: */
FOQATRN = (-EOQATRN_r);
} 
break;
case 3: 
FOQATRN = ((EOQATRN_r==0));
break;
case 4: 
FOQATRN = 0;
break;
case 5: 
 /* line 1561: */
FOQATRN = (A68_INT )~(A68_BITS )EOQATRN_r;
break;
case 6: 
 /* line 1562: */
if ( (EOQATRN_r>=0) )
{ 
 /* line 1563: */
IOQATRN = GQAAOST_sqrt((A68_REAL )EOQATRN_r) ;
FOQATRN = A_ENTIER(GOQATRN,HOQATRN,IOQATRN,(A68_INT ));
} 
else
{ 
YNQATRN_sqrt_fail = A68_TRUE;
 /* line 1564: */
 /* line 1565: */
FOQATRN = (-1);
} 
break;
case 7: 
if ( (EOQATRN_r==IJDAOST_minint) )
{ 
XNQATRN_overflowed = A68_TRUE;
 /* line 1566: */
 /* line 1567: */
FOQATRN = AJDAOST_maxint;
} 
else
{ 
 /* line 1568: */
FOQATRN = A_ABS(EOQATRN_r);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
JOQATRN_ans = FOQATRN;
 /* line 1569: */
if ( XNQATRN_overflowed )
{ 
JNQATRN_overflowfail(Close, Diag);
} 
 /* line 1570: */
if ( YNQATRN_sqrt_fail )
{ 
YMQATRN_overflowsqrt(Close, Diag);
} 
 /* line 1571: */
MOQATRN = NNMATRN_makefint(JOQATRN_ans) ;
KOQATRN.F = A_UNITE(LOQATRN,mode1,1,MOQATRN);
 /* line 1572: */
 /* line 1573: */
KOQATRN.C = A68_TRUE;
NOQATRN = KOQATRN;
} 
break;
default: 
 /* line 1574: */
if ( BOQATRN_right.C )
{ 
POQATRN.Sort = (*(&(Fmop->Sort)));
POQATRN.Right = BOQATRN_right.F;
QOQATRN = A_HEAP(A68_190 ) ;
(*QOQATRN) = POQATRN ;
OOQATRN.F = A_UNITE(ROQATRN,mode6,6,QOQATRN);
 /* line 1575: */
OOQATRN.C = A68_TRUE;
NOQATRN = OOQATRN;
} 
else
{ 
SOQATRN.F = A_UNITE(TOQATRN,mode6,6,Fmop);
 /* line 1576: */
 /* line 1577: */
 /* line 1578: */
SOQATRN.C = A68_FALSE;
NOQATRN = SOQATRN;
} 
break;
} 
} 
A_PROC_EXIT(fmop_simplify);
*ReturnedValue = (NOQATRN);
return;
} 
#undef NL
 /* line 1582: */

A_STATIC A68_VOID  YOQATRN_fdop_simplify(A68_189 * Fdop, A68_414 * Tprocs, A68_472  Close, A68_471 * Diag, A68_375  *ReturnedValue)
{ 
A68_418  ZOQATRN;  /* CALL */
A68_184  APQATRN;  /* OPERATORS - mode -> union mode */
A68_375  BPQATRN;  /* avoid structure result */
A68_375  CPQATRN_newformula;
A68_184  DPQATRN;  /* united object - for case conformity */
A68_189 * EPQATRN_fd;
A68_189 * FPQATRN;  /* clause result */
A68_189 * IPQATRN_newdop;
A68_184  JPQATRN;  /* united object - for case conformity */
A68_185 * KPQATRN_li;
A68_184  LPQATRN;  /* united object - for case conformity */
A68_185 * MPQATRN_ri;
A68_INT  NPQATRN_l;
A68_INT  OPQATRN_r;
A68_BOOL  PPQATRN_overflowed;
A68_INT  QPQATRN;  /* clause result */
A68_INT  RPQATRN;  /* OPERATORS - skip to mode */
A68_BITS  SPQATRN;  /* SHL */
A68_BITS  TPQATRN;  /* SHR */
A68_INT  UPQATRN;  /* ADICOPS - MOD */
A68_INT  XPQATRN_ans;
A68_375  YPQATRN;  /* collateral clause result */
A68_184  ZPQATRN;  /* OPERATORS - mode -> union mode */
A68_185 * AQQATRN;  /* YIELD */
A68_375  BQQATRN;  /* clause result */
A_PROC_ENTRY(fdop_simplify);
 /* line 1583: */
 /* line 1584: */
{ 
ZOQATRN = (*(&(AWLATRN_nulltprocs->Formula))) ;
A_CALLPROC(ZOQATRN,(A_UNITE(APQATRN,mode5,5,Fdop), Tprocs, &BPQATRN),(A_UNITE(APQATRN,mode5,5,Fdop), Tprocs, &BPQATRN,(ZOQATRN).nonlocals));
CPQATRN_newformula = BPQATRN;
 /* line 1585: */
 /* line 1586: */
DPQATRN = CPQATRN_newformula.F ;
switch ( DPQATRN.mode )
{ 
case 5: /* REF STRUCT(MODE184,INT,MODE184)  */
EPQATRN_fd = (DPQATRN.data.mode5);
FPQATRN = EPQATRN_fd;
break;
default: 
NKDAOST_sysfault(HPQATRN);
FPQATRN = (A68_189 *)A68_NIL;
break;
} 
IPQATRN_newdop = FPQATRN;
 /* line 1587: */
JPQATRN = (*(&(IPQATRN_newdop->Left))) ;
switch ( JPQATRN.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26)  */
KPQATRN_li = (JPQATRN.data.mode1);
 /* line 1588: */
LPQATRN = (*(&(IPQATRN_newdop->Right))) ;
switch ( LPQATRN.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26)  */
MPQATRN_ri = (LPQATRN.data.mode1);
 /* line 1589: */
{ 
NPQATRN_l = (*(&(KPQATRN_li->Int)));
OPQATRN_r = (*(&(MPQATRN_ri->Int)));
 /* line 1590: */
PPQATRN_overflowed = A68_FALSE;
 /* line 1591: */
 /* line 1592: */
 /* line 1594: */
{ 
 /* line 1595: */
switch ( (*(&(Fdop->Sort))) )
{ 
case 1: 
{ 
 /* line 1596: */
if ( (A_SIGN(NPQATRN_l)==A_SIGN(OPQATRN_r)) )
{ 
 /* line 1597: */
QPQATRN = NJDAOST_addwithoverflowcheck(NPQATRN_l, OPQATRN_r, (&PPQATRN_overflowed));
} 
else
{ 
 /* line 1598: */
 /* line 1599: */
 /* line 1600: */
QPQATRN = (NPQATRN_l+OPQATRN_r);
} 
} 
break;
case 2: 
{ 
 /* line 1601: */
if ( ((A_SIGN(NPQATRN_l)+A_SIGN(OPQATRN_r))==0) )
{ 
 /* line 1602: */
QPQATRN = UJDAOST_subtractwithoverflowcheck(NPQATRN_l, OPQATRN_r, (&PPQATRN_overflowed));
} 
else
{ 
 /* line 1603: */
 /* line 1604: */
 /* line 1605: */
QPQATRN = (NPQATRN_l-OPQATRN_r);
} 
} 
break;
case 3: 
 /* line 1606: */
 /* line 1607: */
 /* line 1608: */
QPQATRN = BKDAOST_multiplywithoverflowcheck(NPQATRN_l, OPQATRN_r, (&PPQATRN_overflowed));
break;
case 4: 
 /* line 1609: */
if ( (OPQATRN_r==0) )
{ 
PPQATRN_overflowed = A68_TRUE;
 /* line 1610: */
QPQATRN = AJDAOST_maxint;
} 
else
{ 
 /* line 1611: */
 /* line 1612: */
QPQATRN = (NPQATRN_l/OPQATRN_r);
} 
break;
case 5: 
QPQATRN = ((NPQATRN_l==OPQATRN_r));
break;
case 6: 
QPQATRN = ((NPQATRN_l!=OPQATRN_r));
break;
case 7: 
 /* line 1613: */
QPQATRN = ((NPQATRN_l<=OPQATRN_r));
break;
case 8: 
QPQATRN = ((NPQATRN_l>=OPQATRN_r));
break;
case 9: 
 /* line 1614: */
QPQATRN = ((NPQATRN_l<OPQATRN_r));
break;
case 10: 
QPQATRN = ((NPQATRN_l>OPQATRN_r));
break;
case 11: 
 /* line 1615: */
QPQATRN = (A68_INT )(A68_BITS )((A68_BITS )NPQATRN_l&(A68_BITS )OPQATRN_r);
break;
case 12: 
QPQATRN = (A68_INT )(A68_BITS )((A68_BITS )NPQATRN_l|(A68_BITS )OPQATRN_r);
break;
case 13: 
 /* line 1616: */
QPQATRN = RPQATRN;
break;
case 14: 
SPQATRN = (A68_BITS )NPQATRN_l ;
QPQATRN = (A68_INT )A_SHL(SPQATRN,OPQATRN_r);
break;
case 15: 
 /* line 1617: */
TPQATRN = (A68_BITS )NPQATRN_l ;
QPQATRN = (A68_INT )A_SHR(TPQATRN,OPQATRN_r);
break;
case 16: 
QPQATRN = (A68_INT )(A68_BITS )((A68_BITS )NPQATRN_l&(A68_BITS )OPQATRN_r);
break;
case 17: 
 /* line 1618: */
QPQATRN = (A68_INT )(A68_BITS )((A68_BITS )NPQATRN_l|(A68_BITS )OPQATRN_r);
break;
case 18: 
 /* line 1619: */
if ( (OPQATRN_r==0) )
{ 
PPQATRN_overflowed = A68_TRUE;
 /* line 1620: */
QPQATRN = AJDAOST_maxint;
} 
else
{ 
 /* line 1621: */
if ( (OPQATRN_r==IJDAOST_minint) )
{ 
if ( (NPQATRN_l<0) )
{ 
QPQATRN = (-(IJDAOST_minint-NPQATRN_l));
} 
else
{ 
 /* line 1622: */
QPQATRN = NPQATRN_l;
} 
} 
else
{ 
 /* line 1623: */
 /* line 1624: */
QPQATRN = A_MOD(NPQATRN_l,OPQATRN_r,UPQATRN);
} 
} 
break;
default: 
NKDAOST_sysfault(WPQATRN);
 /* line 1625: */
 /* line 1633: */
QPQATRN = 0;
break;
} 
} 
XPQATRN_ans = QPQATRN;
 /* line 1634: */
if ( PPQATRN_overflowed )
{ 
JNQATRN_overflowfail(Close, Diag);
} 
 /* line 1635: */
AQQATRN = NNMATRN_makefint(XPQATRN_ans) ;
YPQATRN.F = A_UNITE(ZPQATRN,mode1,1,AQQATRN);
 /* line 1636: */
 /* line 1637: */
 /* line 1638: */
YPQATRN.C = A68_TRUE;
BQQATRN = YPQATRN;
} 
break;
default: 
 /* line 1639: */
 /* line 1640: */
BQQATRN = CPQATRN_newformula;
break;
} 
break;
default: 
 /* line 1641: */
BQQATRN = CPQATRN_newformula;
break;
} 
} 
A_PROC_EXIT(fdop_simplify);
*ReturnedValue = (BQQATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  EQQATRN_fcond_simplify(A68_191 * Fcond, A68_414 * Tprocs, A68_375  *ReturnedValue)
{ 
A68_418  FQQATRN;  /* CALL */
A68_375  GQQATRN;  /* avoid structure result */
A68_375  HQQATRN_cond;
A68_184  IQQATRN;  /* united object - for case conformity */
A68_185 * JQQATRN_b;
A68_375  KQQATRN;  /* collateral clause result */
A68_418  LQQATRN;  /* CALL */
A68_375  MQQATRN;  /* avoid structure result */
A68_375  NQQATRN;  /* clause result */
A68_375  OQQATRN;  /* collateral clause result */
A68_418  PQQATRN;  /* CALL */
A68_375  QQQATRN;  /* avoid structure result */
A68_418  RQQATRN;  /* CALL */
A68_375  SQQATRN;  /* avoid structure result */
A68_375  TQQATRN_truec;
A68_418  UQQATRN;  /* CALL */
A68_375  VQQATRN;  /* avoid structure result */
A68_375  WQQATRN_falsec;
A68_BOOL  XQQATRN;  /* optbool result */
A68_375  YQQATRN;  /* collateral clause result */
A68_191  ZQQATRN;  /* collateral clause result */
A68_191 * ARQATRN;  /* YIELD */
A68_184  BRQATRN;  /* OPERATORS - mode -> union mode */
A68_375  CRQATRN;  /* collateral clause result */
A68_184  DRQATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(fcond_simplify);
 /* line 1644: */
 /* line 1645: */
{ 
FQQATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(FQQATRN,((*(&(Fcond->Cond))), Tprocs, &GQQATRN),((*(&(Fcond->Cond))), Tprocs, &GQQATRN,(FQQATRN).nonlocals));
HQQATRN_cond = GQQATRN;
 /* line 1646: */
 /* line 1647: */
IQQATRN = HQQATRN_cond.F ;
switch ( IQQATRN.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26)  */
JQQATRN_b = (IQQATRN.data.mode1);
 /* line 1648: */
 /* line 1649: */
if ( ((*(&(JQQATRN_b->Int)))!=0) )
{ 
LQQATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(LQQATRN,((*(&(Fcond->True))), Tprocs, &MQQATRN),((*(&(Fcond->True))), Tprocs, &MQQATRN,(LQQATRN).nonlocals));
KQQATRN.F = MQQATRN.F;
 /* line 1650: */
KQQATRN.C = A68_TRUE;
NQQATRN = KQQATRN;
} 
else
{ 
PQQATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(PQQATRN,((*(&(Fcond->False))), Tprocs, &QQQATRN),((*(&(Fcond->False))), Tprocs, &QQQATRN,(PQQATRN).nonlocals));
OQQATRN.F = QQQATRN.F;
 /* line 1651: */
 /* line 1652: */
OQQATRN.C = A68_TRUE;
NQQATRN = OQQATRN;
} 
break;
default: 
RQQATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(RQQATRN,((*(&(Fcond->True))), Tprocs, &SQQATRN),((*(&(Fcond->True))), Tprocs, &SQQATRN,(RQQATRN).nonlocals));
TQQATRN_truec = SQQATRN;
 /* line 1653: */
UQQATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(UQQATRN,((*(&(Fcond->False))), Tprocs, &VQQATRN),((*(&(Fcond->False))), Tprocs, &VQQATRN,(UQQATRN).nonlocals));
WQQATRN_falsec = VQQATRN;
 /* line 1654: */
XQQATRN = HQQATRN_cond.C;
if ( ! XQQATRN )
{XQQATRN = TQQATRN_truec.C;
}
 /* line 1655: */
if ( ! XQQATRN )
{XQQATRN = WQQATRN_falsec.C;
}
if ( XQQATRN )
{ 
ZQQATRN.Cond = HQQATRN_cond.F;
ZQQATRN.True = TQQATRN_truec.F;
ZQQATRN.False = WQQATRN_falsec.F;
ARQATRN = A_HEAP(A68_191 ) ;
(*ARQATRN) = ZQQATRN ;
YQQATRN.F = A_UNITE(BRQATRN,mode7,7,ARQATRN);
 /* line 1656: */
YQQATRN.C = A68_TRUE;
NQQATRN = YQQATRN;
} 
else
{ 
CRQATRN.F = A_UNITE(DRQATRN,mode7,7,Fcond);
 /* line 1657: */
 /* line 1658: */
 /* line 1659: */
CRQATRN.C = A68_FALSE;
NQQATRN = CRQATRN;
} 
break;
} 
} 
A_PROC_EXIT(fcond_simplify);
*ReturnedValue = (NQQATRN);
return;
} 
#undef NL

A_STATIC A68_BOOL  JRQATRN_icheck(A68_INT  Check, A68_INT  Val, A68_INT  Standard, A68_472  Close, A68_471 * Diag)
{ 
A68_INT  KRQATRN;  /* ADICOPS - MOD */
A68_INT  LRQATRN;  /* ADICOPS - MOD */
A68_INT  MRQATRN_test;
A68_BOOL  NRQATRN;  /* clause result */
A68_BOOL  QRQATRN_ok;
A68_567  RRQATRN;  /* collateral clause result */
A68_52  URQATRN;  /* OPERATORS - mode -> union mode */
A68_VC  VRQATRN;  /* YIELD */
A68_52  WRQATRN;  /* OPERATORS - mode -> union mode */
A68_52  ZRQATRN;  /* OPERATORS - mode -> union mode */
A68_VC  ASQATRN;  /* YIELD */
A68_52  BSQATRN;  /* OPERATORS - mode -> union mode */
A68_52  CSQATRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  DSQATRN;  /* YIELD */
A68_52  ESQATRN;  /* OPERATORS - mode -> union mode */
A68_56  FSQATRN;  /* procedure value */
A68_85  GSQATRN;  /* OPERATORS - istruct -> vector */
A68_567  HSQATRN;  /* collateral clause result */
A68_52  KSQATRN;  /* OPERATORS - mode -> union mode */
A68_VC  LSQATRN;  /* YIELD */
A68_52  MSQATRN;  /* OPERATORS - mode -> union mode */
A68_52  PSQATRN;  /* OPERATORS - mode -> union mode */
A68_VC  QSQATRN;  /* YIELD */
A68_52  TSQATRN;  /* OPERATORS - mode -> union mode */
A68_VC  USQATRN;  /* YIELD */
A68_52  XSQATRN;  /* OPERATORS - mode -> union mode */
A68_VC  YSQATRN;  /* YIELD */
A68_52  BTQATRN;  /* OPERATORS - mode -> union mode */
A68_VC  CTQATRN;  /* YIELD */
A68_52  FTQATRN;  /* OPERATORS - mode -> union mode */
A68_VC  GTQATRN;  /* YIELD */
A68_52  JTQATRN;  /* OPERATORS - mode -> union mode */
A68_VC  KTQATRN;  /* YIELD */
A68_52  LTQATRN;  /* OPERATORS - mode -> union mode */
A68_52  MTQATRN;  /* OPERATORS - mode -> union mode */
A68_56  NTQATRN;  /* procedure value */
A68_85  OTQATRN;  /* OPERATORS - istruct -> vector */
A68_BOOL  PTQATRN;  /* clause result */
A_PROC_ENTRY(icheck);
 /* line 1665: */
 /* line 1666: */
{ 
LRQATRN = 8 ;
MRQATRN_test = A_MOD(Check,LRQATRN,KRQATRN);
 /* line 1667: */
switch ( MRQATRN_test )
{ 
case 1: 
 /* line 1668: */
NRQATRN = (Val==Standard);
break;
case 2: 
 /* line 1669: */
NRQATRN = (Val<=Standard);
break;
case 3: 
 /* line 1670: */
NRQATRN = (Val>=Standard);
break;
case 4: 
 /* line 1671: */
NRQATRN = (Val==Standard);
break;
case 5: 
 /* line 1672: */
NRQATRN = (Val!=Standard);
break;
default: 
{ 
NKDAOST_sysfault(PRQATRN);
 /* line 1673: */
NRQATRN = A68_TRUE;
} 
break;
} 
QRQATRN_ok = NRQATRN;
 /* line 1674: */
 /* line 1675: */
if ( !QRQATRN_ok )
{ 
SMPATRN_setfailure(Close, Diag);
 /* line 1676: */
 /* line 1677: */
if ( (MRQATRN_test==1) )
{ 
VRQATRN = TRQATRN ;
RRQATRN.data[0] = A_UNITE(URQATRN,mode7,7,VRQATRN);
RRQATRN.data[1] = A_UNITE(WRQATRN,mode1,1,Standard);
 /* line 1678: */
ASQATRN = YRQATRN ;
RRQATRN.data[2] = A_UNITE(ZRQATRN,mode7,7,ASQATRN);
RRQATRN.data[3] = A_UNITE(BSQATRN,mode1,1,Val);
DSQATRN = ']' ;
RRQATRN.data[4] = A_UNITE(CSQATRN,mode6,6,DSQATRN);
FSQATRN.fn.fn_global = LRAAOSL_newline;
FSQATRN.nonlocals = A68_NIL;
RRQATRN.data[5] = A_UNITE(ESQATRN,mode12,12,FSQATRN);
 /* line 1679: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(GSQATRN,RRQATRN,6,A68_52 ));
} 
else
{ 
LSQATRN = JSQATRN ;
HSQATRN.data[0] = A_UNITE(KSQATRN,mode7,7,LSQATRN);
HSQATRN.data[1] = A_UNITE(MSQATRN,mode1,1,Val);
 /* line 1680: */
QSQATRN = OSQATRN ;
HSQATRN.data[2] = A_UNITE(PSQATRN,mode7,7,QSQATRN);
switch ( (MRQATRN_test-1) )
{ 
case 1: 
USQATRN = SSQATRN ;
HSQATRN.data[3] = A_UNITE(TSQATRN,mode7,7,USQATRN);
break;
case 2: 
YSQATRN = WSQATRN ;
HSQATRN.data[3] = A_UNITE(XSQATRN,mode7,7,YSQATRN);
break;
case 3: 
 /* line 1681: */
CTQATRN = ATQATRN ;
HSQATRN.data[3] = A_UNITE(BTQATRN,mode7,7,CTQATRN);
break;
case 4: 
GTQATRN = ETQATRN ;
HSQATRN.data[3] = A_UNITE(FTQATRN,mode7,7,GTQATRN);
break;
default: 
KTQATRN = ITQATRN ;
HSQATRN.data[3] = A_UNITE(JTQATRN,mode7,7,KTQATRN);
break;
} 
HSQATRN.data[4] = A_UNITE(LTQATRN,mode1,1,Standard);
NTQATRN.fn.fn_global = LRAAOSL_newline;
NTQATRN.nonlocals = A68_NIL;
HSQATRN.data[5] = A_UNITE(MTQATRN,mode12,12,NTQATRN);
 /* line 1682: */
 /* line 1683: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(OTQATRN,HSQATRN,6,A68_52 ));
} 
} 
 /* line 1684: */
 /* line 1685: */
PTQATRN = QRQATRN_ok;
} 
A_PROC_EXIT(icheck);
return( PTQATRN );
} 
#undef NL
 /* line 1689: */

A_STATIC A68_VOID  UTQATRN_fcheck_evaluate(A68_186 * Fck, A68_414 * Tprocs, A68_472  Close, A68_471 * Diag, A68_375  *ReturnedValue)
{ 
A68_418  VTQATRN;  /* CALL */
A68_375  WTQATRN;  /* avoid structure result */
A68_184  XTQATRN_test;
A68_184  YTQATRN;  /* united object - for case conformity */
A68_375  ZTQATRN;  /* collateral clause result */
A68_184  AUQATRN;  /* OPERATORS - mode -> union mode */
A68_375  BUQATRN;  /* clause result */
A68_INT  CUQATRN_itest;
A68_418  DUQATRN;  /* CALL */
A68_375  EUQATRN;  /* avoid structure result */
A68_184  FUQATRN_standard;
A68_184  GUQATRN;  /* united object - for case conformity */
A68_375  HUQATRN;  /* collateral clause result */
A68_184  IUQATRN;  /* OPERATORS - mode -> union mode */
A68_INT  JUQATRN_istandard;
A68_375  KUQATRN;  /* collateral clause result */
A68_184  LUQATRN;  /* OPERATORS - mode -> union mode */
A68_185 * MUQATRN;  /* YIELD */
A_PROC_ENTRY(fcheck_evaluate);
 /* line 1690: */
 /* line 1691: */
{ 
VTQATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(VTQATRN,((*(&(Fck->Test))), Tprocs, &WTQATRN),((*(&(Fck->Test))), Tprocs, &WTQATRN,(VTQATRN).nonlocals));
XTQATRN_test = WTQATRN.F;
 /* line 1692: */
 /* line 1693: */
YTQATRN = XTQATRN_test ;
switch ( YTQATRN.mode )
{ 
case 10: /* REF STRUCT(INT)  */
ZTQATRN.F = A_UNITE(AUQATRN,mode10,10,(&BIAATRN_fnull));
 /* line 1694: */
ZTQATRN.C = A68_TRUE;
BUQATRN = ZTQATRN;
break;
default: 
CUQATRN_itest = XOMATRN_int(XTQATRN_test);
 /* line 1695: */
DUQATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(DUQATRN,((*(&(Fck->Standard))), Tprocs, &EUQATRN),((*(&(Fck->Standard))), Tprocs, &EUQATRN,(DUQATRN).nonlocals));
FUQATRN_standard = EUQATRN.F;
 /* line 1696: */
 /* line 1697: */
GUQATRN = FUQATRN_standard ;
switch ( GUQATRN.mode )
{ 
case 10: /* REF STRUCT(INT)  */
HUQATRN.F = A_UNITE(IUQATRN,mode10,10,(&BIAATRN_fnull));
 /* line 1698: */
HUQATRN.C = A68_TRUE;
BUQATRN = HUQATRN;
break;
default: 
JUQATRN_istandard = XOMATRN_int(FUQATRN_standard);
 /* line 1699: */
JRQATRN_icheck((*(&(Fck->Sort))), CUQATRN_itest, JUQATRN_istandard, Close, Diag);
 /* line 1700: */
MUQATRN = NNMATRN_makefint(CUQATRN_itest) ;
KUQATRN.F = A_UNITE(LUQATRN,mode1,1,MUQATRN);
 /* line 1701: */
 /* line 1702: */
 /* line 1703: */
KUQATRN.C = A68_TRUE;
BUQATRN = KUQATRN;
break;
} 
break;
} 
} 
A_PROC_EXIT(fcheck_evaluate);
*ReturnedValue = (BUQATRN);
return;
} 
#undef NL

A_STATIC A68_BOOL  PUQATRN_wanted(A68_VC  Name, A68_173 * Not_wanted)
{ 
A68_173 * QUQATRN_nots;
A68_BOOL  RUQATRN;  /* optbool result */
A68_BOOL  SUQATRN;  /* clause result */
A_PROC_ENTRY(wanted);
 /* line 1707: */
{ 
QUQATRN_nots = Not_wanted;
 /* line 1708: */
for ( ;; )
{ 
RUQATRN = (QUQATRN_nots!=LAAATRN_nilids);
if ( RUQATRN )
{ /* line 1709: */
RUQATRN = A_VC_NE(Name,(*(&(QUQATRN_nots->Id))));
}
if ( !(RUQATRN) ) break;
QUQATRN_nots = (*(&(QUQATRN_nots->Rest)));
}
 /* line 1710: */
 /* line 1711: */
SUQATRN = (QUQATRN_nots==LAAATRN_nilids);
} 
A_PROC_EXIT(wanted);
return( SUQATRN );
} 
#undef NL

A_STATIC A68_VOID  VUQATRN_append_attrs(A68_175  A, A68_175  B, A68_175  *ReturnedValue)
{ 
A68_175  WUQATRN;  /* united object - for case conformity */
A68_175  XUQATRN;  /* clause result */
A68_175  YUQATRN;  /* united object - for case conformity */
A68_178 * ZUQATRN_as;
A68_178 * AVQATRN_alist;
A68_178 * BVQATRN_newlist;
A68_178 ** CVQATRN_ptr;
A68_178  DVQATRN;  /* collateral clause result */
A68_178 * EVQATRN;  /* YIELD */
A68_175  FVQATRN;  /* united object - for case conformity */
A68_178 * GVQATRN_bb;
A68_178  HVQATRN;  /* collateral clause result */
A68_178 * IVQATRN;  /* YIELD */
A68_175  JVQATRN;  /* OPERATORS - mode -> union mode */
A68_175  KVQATRN;  /* united object - for case conformity */
A68_178 * LVQATRN_bs;
A68_178  MVQATRN;  /* collateral clause result */
A68_178 * NVQATRN;  /* YIELD */
A68_175  OVQATRN;  /* OPERATORS - mode -> union mode */
A68_178  PVQATRN;  /* collateral clause result */
A68_178  QVQATRN;  /* collateral clause result */
A68_178 * RVQATRN;  /* YIELD */
A68_178 * SVQATRN;  /* YIELD */
A68_175  TVQATRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(append_attrs);
 /* line 1714: */
{ 
 /* line 1715: */
WUQATRN = B ;
switch ( WUQATRN.mode )
{ 
case 5: /* REF STRUCT(INT)  */
 /* line 1716: */
XUQATRN = A;
break;
default: 
 /* line 1717: */
YUQATRN = A ;
switch ( YUQATRN.mode )
{ 
case 5: /* REF STRUCT(INT)  */
 /* line 1718: */
XUQATRN = B;
break;
case 3: /* REF STRUCT(MODE175,REF MODE178)  */
ZUQATRN_as = (YUQATRN.data.mode3);
 /* line 1719: */
{ 
AVQATRN_alist = ZUQATRN_as;
 /* line 1720: */
BVQATRN_newlist = DBAATRN_nilattrstr;
 /* line 1721: */
CVQATRN_ptr = (&BVQATRN_newlist);
 /* line 1722: */
for ( ;; )
{ 
 /* line 1723: */
if ( !((AVQATRN_alist!=DBAATRN_nilattrstr)) ) break;
 /* line 1724: */
DVQATRN.Elem = (*(&(AVQATRN_alist->Elem)));
DVQATRN.Rest = DBAATRN_nilattrstr;
EVQATRN = A_HEAP(A68_178 ) ;
(*EVQATRN) = DVQATRN ;
(*CVQATRN_ptr) = EVQATRN;
 /* line 1725: */
AVQATRN_alist = (*(&(AVQATRN_alist->Rest)));
 /* line 1726: */
CVQATRN_ptr = (&((*CVQATRN_ptr)->Rest));
}
 /* line 1727: */
 /* line 1728: */
FVQATRN = B ;
switch ( FVQATRN.mode )
{ 
case 3: /* REF STRUCT(MODE175,REF MODE178)  */
GVQATRN_bb = (FVQATRN.data.mode3);
 /* line 1729: */
(*CVQATRN_ptr) = GVQATRN_bb;
break;
default: 
HVQATRN.Elem = B;
 /* line 1730: */
HVQATRN.Rest = DBAATRN_nilattrstr;
IVQATRN = A_HEAP(A68_178 ) ;
(*IVQATRN) = HVQATRN ;
(*CVQATRN_ptr) = IVQATRN;
break;
} 
 /* line 1731: */
 /* line 1732: */
 /* line 1733: */
 /* line 1734: */
XUQATRN = A_UNITE(JVQATRN,mode3,3,BVQATRN_newlist);
} 
break;
default: 
 /* line 1735: */
KVQATRN = B ;
switch ( KVQATRN.mode )
{ 
case 3: /* REF STRUCT(MODE175,REF MODE178)  */
LVQATRN_bs = (KVQATRN.data.mode3);
MVQATRN.Elem = A;
 /* line 1736: */
MVQATRN.Rest = LVQATRN_bs;
NVQATRN = A_HEAP(A68_178 ) ;
(*NVQATRN) = MVQATRN ;
XUQATRN = A_UNITE(OVQATRN,mode3,3,NVQATRN);
break;
default: 
PVQATRN.Elem = A;
QVQATRN.Elem = B;
QVQATRN.Rest = DBAATRN_nilattrstr;
 /* line 1737: */
RVQATRN = A_HEAP(A68_178 ) ;
(*RVQATRN) = QVQATRN ;
PVQATRN.Rest = RVQATRN;
 /* line 1738: */
 /* line 1739: */
 /* line 1740: */
SVQATRN = A_HEAP(A68_178 ) ;
(*SVQATRN) = PVQATRN ;
XUQATRN = A_UNITE(TVQATRN,mode3,3,SVQATRN);
break;
} 
break;
} 
break;
} 
} 
A_PROC_EXIT(append_attrs);
*ReturnedValue = (XUQATRN);
return;
} 
#undef NL
 /* line 1744: */

A_STATIC A68_VOID  XVQATRN_printitems_print(A68_268 * Pi, A68_414 * Tprocs, A68_471 * Diag)
{ 
A68_269  YVQATRN;  /* united object - for case conformity */
A68_VC  ZVQATRN_id;
A68_195 * AWQATRN_ft;
A68_418  BWQATRN;  /* CALL */
A68_375  CWQATRN;  /* avoid structure result */
A68_375  DWQATRN_ftc;
A_PROC_ENTRY(printitems_print);
 /* line 1745: */
 /* line 1747: */
{ 
 /* line 1748: */
if ( (Pi==MAAATRN_nilprintitems) )
{ 
 /* line 1749: */
NIPATRN_checklineno(Diag);
} 
else
{ 
 /* line 1750: */
YVQATRN = (*(&(Pi->Item))) ;
switch ( YVQATRN.mode )
{ 
case 1: /* REF VECTOR [] CHAR */
ZVQATRN_id = (YVQATRN.data.mode1);
 /* line 1751: */
TWOATRN_print_id(ZVQATRN_id);
break;
case 2: /* REF STRUCT(MODE184)  */
AWQATRN_ft = (YVQATRN.data.mode2);
 /* line 1752: */
{ 
BWQATRN = (*(&(Tprocs->Formula))) ;
A_CALLPROC(BWQATRN,((*(&(AWQATRN_ft->Tag))), Tprocs, &CWQATRN),((*(&(AWQATRN_ft->Tag))), Tprocs, &CWQATRN,(BWQATRN).nonlocals));
DWQATRN_ftc = CWQATRN;
 /* line 1753: */
 /* line 1754: */
 /* line 1755: */
DYOATRN_print_formula(DWQATRN_ftc.F);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 1756: */
 /* line 1757: */
 /* line 1758: */
XVQATRN_printitems_print((*(&(Pi->Rest))), Tprocs, Diag);
} 
} 
A_PROC_EXIT(printitems_print);
return;
} 
#undef NL

A_STATIC A68_INT  FWQATRN_macparams_hash(A68_264  Params)
{ 
A68_INT  GWQATRN_hash;
A68_265 * HWQATRN_p;
A68_INT  IWQATRN;  /* forall loop counter */
A68_266  JWQATRN;  /* united object - for case conformity */
A68_195  KWQATRN_fg;
A68_INT  LWQATRN;  /* ADICOPS - MOD */
A68_INT  MWQATRN;  /* ADICOPS - MOD */
A68_INT  NWQATRN;  /* ADICOPS - MOD */
A68_INT  OWQATRN;  /* clause result */
A68_INT  PWQATRN;  /* ADICOPS - MOD */
A68_INT  QWQATRN;  /* ADICOPS - MOD */
A_PROC_ENTRY(macparams_hash);
 /* line 1763: */
 /* line 1764: */
{ 
GWQATRN_hash = 0;
 /* line 1765: */
 /* line 1766: */
if ( ! A_VSTRUCTCOMP(Params,ABAATRN_nilmacparams) )
{ 
 /* line 1767: */
IWQATRN = Params.upb -1;
HWQATRN_p = Params.data;
for (;IWQATRN-- >= 0;
(HWQATRN_p++
) )
{
 /* line 1768: */
JWQATRN = (*(&(HWQATRN_p->Param))) ;
switch ( JWQATRN.mode )
{ 
case 2: /* STRUCT(MODE184)  */
KWQATRN_fg = (JWQATRN.data.mode2);
 /* line 1769: */
 /* line 1770: */
MWQATRN = XOMATRN_int(KWQATRN_fg.Tag) ;
NWQATRN = 10 ;
GWQATRN_hash+=A_MOD(MWQATRN,NWQATRN,LWQATRN);
break;
default: 
 /* line 1771: */
/*SKIP*/;
break;
} 
}
 /* line 1772: */
} 
 /* line 1773: */
 /* line 1774: */
QWQATRN = 10 ;
OWQATRN = (A_MOD(GWQATRN_hash,QWQATRN,PWQATRN)+1);
} 
A_PROC_EXIT(macparams_hash);
return( OWQATRN );
} 
#undef NL
 /* line 1821: */

A68_VOID  CXQATRN_expand(A68_311 * Oldclosure, A68_173 * Not_wanted, A68_BOOL  Trace, A68_108  Msg, A68_413  *ReturnedValue)
{ 
A68_INT  GXQATRN_status;
A68_433  JXQATRN_anonymous;   /* proc value of non-global proc */
A68_459  RXQATRN;  /* OPERATORS - mode -> union mode */
A68_433  SXQATRN;  /* YIELD */
A68_458  TXQATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_414 * UXQATRN_status_procs;
A68_588  WXQATRN_contains_diagnostics;   /* proc value of non-global proc */
A68_588  DYQATRN_only_const;   /* proc value of non-global proc */
A68_589  KYQATRN_needs_expanding;   /* proc value of non-global proc */
A68_36  ADRATRN_flt;   /* proc value of non-global proc */
A68_311 ** EDRATRN_newclosure;
A68_308 ** FDRATRN_newptr;
A68_BOOL  GDRATRN_closurechanged;
A68_158  HDRATRN_update_closure;   /* proc value of non-global proc */
A68_INT  LDRATRN_num;
A68_593  NDRATRN_generator;   /* proc value of non-global proc */
A68_592  TDRATRN;  /* avoid structure result */
A68_592  SDRATRN_hashtable;
A68_576 * UDRATRN_h;
A68_INT  VDRATRN;  /* forall loop counter */
A68_308 * WDRATRN_ints_consts;
A68_595  MERATRN_fname_evaluate;   /* proc value of non-global proc */
A68_600  ZJRATRN_trim_ustr;   /* proc value of non-global proc */
A68_601  KKRATRN_uindex_expand;   /* proc value of non-global proc */
A68_602  RLRATRN_utrim_expand;   /* proc value of non-global proc */
A68_603  MNRATRN_ustr_conc;   /* proc value of non-global proc */
A68_604  BPRATRN_string_conc;   /* proc value of non-global proc */
A68_606  ESRATRN_uconc_expand;   /* proc value of non-global proc */
A68_607  DTRATRN_add_outerfn;   /* proc value of non-global proc */
A68_609  HURATRN_outerfn_expand;   /* proc value of non-global proc */
A68_471  CMVATRN;  /* collateral clause result */
A68_471 * DMVATRN;  /* YIELD */
A68_471 * EMVATRN_outerdiag;
A68_455  HMVATRN_outer_expand;   /* proc value of non-global proc */
A68_308 * GTVATRN_old;
A68_BOOL  HTVATRN_keep;
A68_307  ITVATRN_o;
A68_412  JTVATRN;  /* clause result */
A68_412  KTVATRN;  /* avoid structure result */
A68_412  LTVATRN;  /* avoid structure result */
A68_412  MTVATRN_oic;
A68_308  NTVATRN;  /* collateral clause result */
A68_308 * OTVATRN;  /* YIELD */
A68_412  PTVATRN;  /* avoid structure result */
A68_412  QTVATRN;  /* avoid structure result */
A68_412  RTVATRN_occ;
A68_308  STVATRN;  /* collateral clause result */
A68_308 * TTVATRN;  /* YIELD */
A68_306  UTVATRN;  /* OPERATORS - simple index */
A68_INT  VTVATRN;  /* YIELD */
A68_264  XTVATRN;  /* OPERATORS - nil -> mode */
A68_264  WTVATRN_mp;
A68_BOOL  YTVATRN_ignore;
A68_392  ZTVATRN;  /* collateral clause result */
A68_412  AUVATRN;  /* avoid structure result */
A68_298 * BUVATRN_fdec;
A68_471  CUVATRN;  /* collateral clause result */
A68_471 * EUVATRN;  /* YIELD */
A68_471 * DUVATRN_diag;
A68_472  FUVATRN;  /* collateral clause result */
A68_472  GUVATRN_cl;
A68_412  JUVATRN;  /* OPERATORS - skip to mode */
A68_412  KUVATRN_oc;
A68_BOOL  LUVATRN;  /* optbool result */
A68_307 * MUVATRN;  /* YIELD */
A68_413  PUVATRN;  /* collateral clause result */
A68_413  QUVATRN;  /* clause result */
A68_413  RUVATRN;  /* collateral clause result */
A_PROC_ENTRY(expand);
 /* line 1822: */
 /* line 1826: */
{ 
 /* line 1827: */
GXQATRN_status = DXQATRN_s_const;
 /* line 1829: */
 /* line 1830: */
A_CLOSURE( JXQATRN_anonymous, KXQATRN_anonymous, LXQATRN_anonymous );
(( LXQATRN_anonymous * ) ( JXQATRN_anonymous.nonlocals )) -> GXQATRN_status = (&GXQATRN_status);
SXQATRN = JXQATRN_anonymous ;
UXQATRN_status_procs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HVEC(TXQATRN,A_UNITE(RXQATRN,mode19,19,SXQATRN),A68_459 ));
 /* line 1843: */
A_CLOSURE( WXQATRN_contains_diagnostics, XXQATRN_contains_diagnostics, YXQATRN_contains_diagnostics );
(( YXQATRN_contains_diagnostics * ) ( WXQATRN_contains_diagnostics.nonlocals )) -> GXQATRN_status = (&GXQATRN_status);
(( YXQATRN_contains_diagnostics * ) ( WXQATRN_contains_diagnostics.nonlocals )) -> UXQATRN_status_procs = UXQATRN_status_procs;
 /* line 1849: */
A_CLOSURE( DYQATRN_only_const, EYQATRN_only_const, FYQATRN_only_const );
(( FYQATRN_only_const * ) ( DYQATRN_only_const.nonlocals )) -> GXQATRN_status = (&GXQATRN_status);
(( FYQATRN_only_const * ) ( DYQATRN_only_const.nonlocals )) -> UXQATRN_status_procs = UXQATRN_status_procs;
 /* line 1856: */
A_CLOSURE( KYQATRN_needs_expanding, LYQATRN_needs_expanding, MYQATRN_needs_expanding );
(( MYQATRN_needs_expanding * ) ( KYQATRN_needs_expanding.nonlocals )) -> WXQATRN_contains_diagnostics = WXQATRN_contains_diagnostics;
(( MYQATRN_needs_expanding * ) ( KYQATRN_needs_expanding.nonlocals )) -> DYQATRN_only_const = DYQATRN_only_const;
 /* line 1945: */
A_CLOSURE( ADRATRN_flt, BDRATRN_flt, CDRATRN_flt );
(( CDRATRN_flt * ) ( ADRATRN_flt.nonlocals )) -> Msg = Msg;
 /* line 1947: */
LIPATRN_setup_reporting();
 /* line 1949: */
EDRATRN_newclosure = (A_HEAP(A68_311 *));
(*EDRATRN_newclosure) = Oldclosure;
 /* line 1950: */
FDRATRN_newptr = (&((*EDRATRN_newclosure)->Outers));
 /* line 1951: */
GDRATRN_closurechanged = A68_FALSE;
 /* line 1953: */
 /* line 1954: */
A_CLOSURE( HDRATRN_update_closure, IDRATRN_update_closure, JDRATRN_update_closure );
(( JDRATRN_update_closure * ) ( HDRATRN_update_closure.nonlocals )) -> GDRATRN_closurechanged = (&GDRATRN_closurechanged);
(( JDRATRN_update_closure * ) ( HDRATRN_update_closure.nonlocals )) -> EDRATRN_newclosure = EDRATRN_newclosure;
(( JDRATRN_update_closure * ) ( HDRATRN_update_closure.nonlocals )) -> Msg = Msg;
(( JDRATRN_update_closure * ) ( HDRATRN_update_closure.nonlocals )) -> FDRATRN_newptr = (&FDRATRN_newptr);
 /* line 1966: */
LDRATRN_num = ZKCATRN_maxclosureno(Oldclosure);
 /* line 1967: */
A_CLOSURE( NDRATRN_generator, ODRATRN_generator, PDRATRN_generator );
(( PDRATRN_generator * ) ( NDRATRN_generator.nonlocals )) -> LDRATRN_num = LDRATRN_num;
A_CALLPROC(NDRATRN_generator,(A68_TRUE, &TDRATRN),(A68_TRUE, &TDRATRN,(NDRATRN_generator).nonlocals));
SDRATRN_hashtable = TDRATRN;
 /* line 1968: */
VDRATRN = SDRATRN_hashtable.upb -1;
UDRATRN_h = SDRATRN_hashtable.data;
for (;VDRATRN-- >= 0;
(UDRATRN_h++
) )
{
(*UDRATRN_h) = TWQATRN_nilvechashlist;
}
 /* line 1972: */
WDRATRN_ints_consts = HBAATRN_nilouters;
 /* line 1974: */
 /* line 1988: */
A_CLOSURE( MERATRN_fname_evaluate, NERATRN_fname_evaluate, OERATRN_fname_evaluate );
(( OERATRN_fname_evaluate * ) ( MERATRN_fname_evaluate.nonlocals )) -> WDRATRN_ints_consts = (&WDRATRN_ints_consts);
 /* line 2010: */
 /* line 2036: */
 /* line 2046: */
 /* line 2088: */
A_CLOSURE( ZJRATRN_trim_ustr, AKRATRN_trim_ustr, BKRATRN_trim_ustr );
(( BKRATRN_trim_ustr * ) ( ZJRATRN_trim_ustr.nonlocals )) -> ZJRATRN_trim_ustr = ZJRATRN_trim_ustr;
 /* line 2097: */
A_CLOSURE( KKRATRN_uindex_expand, LKRATRN_uindex_expand, MKRATRN_uindex_expand );
(( MKRATRN_uindex_expand * ) ( KKRATRN_uindex_expand.nonlocals )) -> DYQATRN_only_const = DYQATRN_only_const;
(( MKRATRN_uindex_expand * ) ( KKRATRN_uindex_expand.nonlocals )) -> ZJRATRN_trim_ustr = ZJRATRN_trim_ustr;
 /* line 2121: */
A_CLOSURE( RLRATRN_utrim_expand, SLRATRN_utrim_expand, TLRATRN_utrim_expand );
(( TLRATRN_utrim_expand * ) ( RLRATRN_utrim_expand.nonlocals )) -> DYQATRN_only_const = DYQATRN_only_const;
(( TLRATRN_utrim_expand * ) ( RLRATRN_utrim_expand.nonlocals )) -> ZJRATRN_trim_ustr = ZJRATRN_trim_ustr;
 /* line 2145: */
A_CLOSURE( MNRATRN_ustr_conc, NNRATRN_ustr_conc, ONRATRN_ustr_conc );
 /* line 2178: */
 /* line 2186: */
A_CLOSURE( BPRATRN_string_conc, CPRATRN_string_conc, DPRATRN_string_conc );
 /* line 2252: */
A_CLOSURE( ESRATRN_uconc_expand, FSRATRN_uconc_expand, GSRATRN_uconc_expand );
(( GSRATRN_uconc_expand * ) ( ESRATRN_uconc_expand.nonlocals )) -> DYQATRN_only_const = DYQATRN_only_const;
(( GSRATRN_uconc_expand * ) ( ESRATRN_uconc_expand.nonlocals )) -> BPRATRN_string_conc = BPRATRN_string_conc;
(( GSRATRN_uconc_expand * ) ( ESRATRN_uconc_expand.nonlocals )) -> MNRATRN_ustr_conc = MNRATRN_ustr_conc;
 /* line 2275: */
A_CLOSURE( DTRATRN_add_outerfn, ETRATRN_add_outerfn, FTRATRN_add_outerfn );
(( FTRATRN_add_outerfn * ) ( DTRATRN_add_outerfn.nonlocals )) -> HDRATRN_update_closure = HDRATRN_update_closure;
(( FTRATRN_add_outerfn * ) ( DTRATRN_add_outerfn.nonlocals )) -> FDRATRN_newptr = (&FDRATRN_newptr);
(( FTRATRN_add_outerfn * ) ( DTRATRN_add_outerfn.nonlocals )) -> EDRATRN_newclosure = EDRATRN_newclosure;
(( FTRATRN_add_outerfn * ) ( DTRATRN_add_outerfn.nonlocals )) -> Msg = Msg;
(( FTRATRN_add_outerfn * ) ( DTRATRN_add_outerfn.nonlocals )) -> SDRATRN_hashtable = SDRATRN_hashtable;
 /* line 2293: */
 /* line 2295: */
A_CLOSURE( HURATRN_outerfn_expand, IURATRN_outerfn_expand, JURATRN_outerfn_expand );
(( JURATRN_outerfn_expand * ) ( HURATRN_outerfn_expand.nonlocals )) -> Trace = Trace;
(( JURATRN_outerfn_expand * ) ( HURATRN_outerfn_expand.nonlocals )) -> ADRATRN_flt = ADRATRN_flt;
(( JURATRN_outerfn_expand * ) ( HURATRN_outerfn_expand.nonlocals )) -> SDRATRN_hashtable = SDRATRN_hashtable;
(( JURATRN_outerfn_expand * ) ( HURATRN_outerfn_expand.nonlocals )) -> EDRATRN_newclosure = EDRATRN_newclosure;
(( JURATRN_outerfn_expand * ) ( HURATRN_outerfn_expand.nonlocals )) -> Msg = Msg;
(( JURATRN_outerfn_expand * ) ( HURATRN_outerfn_expand.nonlocals )) -> Oldclosure = Oldclosure;
(( JURATRN_outerfn_expand * ) ( HURATRN_outerfn_expand.nonlocals )) -> MERATRN_fname_evaluate = MERATRN_fname_evaluate;
(( JURATRN_outerfn_expand * ) ( HURATRN_outerfn_expand.nonlocals )) -> WXQATRN_contains_diagnostics = WXQATRN_contains_diagnostics;
(( JURATRN_outerfn_expand * ) ( HURATRN_outerfn_expand.nonlocals )) -> WDRATRN_ints_consts = (&WDRATRN_ints_consts);
(( JURATRN_outerfn_expand * ) ( HURATRN_outerfn_expand.nonlocals )) -> ESRATRN_uconc_expand = ESRATRN_uconc_expand;
(( JURATRN_outerfn_expand * ) ( HURATRN_outerfn_expand.nonlocals )) -> KKRATRN_uindex_expand = KKRATRN_uindex_expand;
(( JURATRN_outerfn_expand * ) ( HURATRN_outerfn_expand.nonlocals )) -> RLRATRN_utrim_expand = RLRATRN_utrim_expand;
(( JURATRN_outerfn_expand * ) ( HURATRN_outerfn_expand.nonlocals )) -> HURATRN_outerfn_expand = HURATRN_outerfn_expand;
(( JURATRN_outerfn_expand * ) ( HURATRN_outerfn_expand.nonlocals )) -> DTRATRN_add_outerfn = DTRATRN_add_outerfn;
(( JURATRN_outerfn_expand * ) ( HURATRN_outerfn_expand.nonlocals )) -> Not_wanted = Not_wanted;
 /* line 4653: */
CMVATRN.Trace = Trace;
CMVATRN.Monitors = BUOATRN_nilmonitor;
CMVATRN.Flt = ADRATRN_flt;
DMVATRN = A_HEAP(A68_471 ) ;
(*DMVATRN) = CMVATRN ;
EMVATRN_outerdiag = DMVATRN;
 /* line 4656: */
A_CLOSURE( HMVATRN_outer_expand, IMVATRN_outer_expand, JMVATRN_outer_expand );
(( JMVATRN_outer_expand * ) ( HMVATRN_outer_expand.nonlocals )) -> MERATRN_fname_evaluate = MERATRN_fname_evaluate;
(( JMVATRN_outer_expand * ) ( HMVATRN_outer_expand.nonlocals )) -> EMVATRN_outerdiag = EMVATRN_outerdiag;
(( JMVATRN_outer_expand * ) ( HMVATRN_outer_expand.nonlocals )) -> WDRATRN_ints_consts = (&WDRATRN_ints_consts);
(( JMVATRN_outer_expand * ) ( HMVATRN_outer_expand.nonlocals )) -> ESRATRN_uconc_expand = ESRATRN_uconc_expand;
(( JMVATRN_outer_expand * ) ( HMVATRN_outer_expand.nonlocals )) -> KKRATRN_uindex_expand = KKRATRN_uindex_expand;
(( JMVATRN_outer_expand * ) ( HMVATRN_outer_expand.nonlocals )) -> RLRATRN_utrim_expand = RLRATRN_utrim_expand;
 /* line 4784: */
GTVATRN_old = (*(&(Oldclosure->Outers)));
 /* line 4786: */
for ( ;; )
{ 
 /* line 4787: */
if ( !((GTVATRN_old!=HBAATRN_nilouters)) ) break;
HTVATRN_keep = A68_FALSE;
 /* line 4788: */
ITVATRN_o = (*(&(GTVATRN_old->Outer)));
 /* line 4789: */
 /* line 4790: */
 /* line 4791: */
switch ( ITVATRN_o.Sort )
{ 
case 1: 
{ 
HTVATRN_keep = A68_TRUE;
 /* line 4792: */
 /* line 4793: */
 /* line 4794: */
A_CALLPROC(HMVATRN_outer_expand,(ITVATRN_o, AWLATRN_nulltprocs, &KTVATRN),(ITVATRN_o, AWLATRN_nulltprocs, &KTVATRN,(HMVATRN_outer_expand).nonlocals));
JTVATRN = KTVATRN;
} 
break;
case 2: 
{ 
A_CALLPROC(HMVATRN_outer_expand,(ITVATRN_o, AWLATRN_nulltprocs, &LTVATRN),(ITVATRN_o, AWLATRN_nulltprocs, &LTVATRN,(HMVATRN_outer_expand).nonlocals));
MTVATRN_oic = LTVATRN;
 /* line 4795: */
NTVATRN.Outer = MTVATRN_oic.O;
NTVATRN.Rest = WDRATRN_ints_consts;
OTVATRN = A_HEAP(A68_308 ) ;
(*OTVATRN) = NTVATRN ;
WDRATRN_ints_consts = OTVATRN;
 /* line 4796: */
 /* line 4797: */
 /* line 4798: */
JTVATRN = MTVATRN_oic;
} 
break;
case 3: 
{ 
HTVATRN_keep = A68_TRUE;
 /* line 4799: */
 /* line 4800: */
 /* line 4801: */
A_CALLPROC(HMVATRN_outer_expand,(ITVATRN_o, AWLATRN_nulltprocs, &PTVATRN),(ITVATRN_o, AWLATRN_nulltprocs, &PTVATRN,(HMVATRN_outer_expand).nonlocals));
JTVATRN = PTVATRN;
} 
break;
case 4: 
{ 
A_CALLPROC(HMVATRN_outer_expand,(ITVATRN_o, AWLATRN_nulltprocs, &QTVATRN),(ITVATRN_o, AWLATRN_nulltprocs, &QTVATRN,(HMVATRN_outer_expand).nonlocals));
RTVATRN_occ = QTVATRN;
 /* line 4802: */
STVATRN.Outer = RTVATRN_occ.O;
STVATRN.Rest = WDRATRN_ints_consts;
TTVATRN = A_HEAP(A68_308 ) ;
(*TTVATRN) = STVATRN ;
WDRATRN_ints_consts = TTVATRN;
 /* line 4803: */
 /* line 4804: */
 /* line 4806: */
JTVATRN = RTVATRN_occ;
} 
break;
case 5: 
{ 
 /* line 4807: */
UTVATRN = (*(&(ITVATRN_o.Environ->Fns))) ;
VTVATRN = 1 ;
if ( !(*(&((*(&A_VINDEX(UTVATRN,VTVATRN)))->Macro))) )
{ 
HTVATRN_keep = A68_TRUE;
 /* line 4808: */
WTVATRN_mp = (A_VVAC(XTVATRN));
 /* line 4809: */
 /* line 4810: */
if ( A_CALLPROC(KYQATRN_needs_expanding,(ITVATRN_o),(ITVATRN_o,(KYQATRN_needs_expanding).nonlocals)) )
{ 
YTVATRN_ignore = A68_FALSE;
 /* line 4811: */
ZTVATRN.M = WTVATRN_mp;
ZTVATRN.C = A68_FALSE;
 /* line 4812: */
 /* line 4813: */
A_CALLPROC(HURATRN_outerfn_expand,(ITVATRN_o, AWLATRN_nulltprocs, ZTVATRN, (A68_584 *)A68_NIL, (A68_301 *)A68_NIL, (&YTVATRN_ignore), BUOATRN_nilmonitor, &AUVATRN),(ITVATRN_o, AWLATRN_nulltprocs, ZTVATRN, (A68_584 *)A68_NIL, (A68_301 *)A68_NIL, (&YTVATRN_ignore), BUOATRN_nilmonitor, &AUVATRN,(HURATRN_outerfn_expand).nonlocals));
JTVATRN = AUVATRN;
} 
else
{ 
BUVATRN_fdec = CQMATRN_get_outerfn(ITVATRN_o);
 /* line 4814: */
CUVATRN.Trace = Trace;
CUVATRN.Monitors = BUOATRN_nilmonitor;
CUVATRN.Flt = ADRATRN_flt;
EUVATRN = A_HEAP(A68_471 ) ;
(*EUVATRN) = CUVATRN ;
DUVATRN_diag = EUVATRN;
 /* line 4815: */
FUVATRN.Fdec = BUVATRN_fdec;
FUVATRN.Env = ITVATRN_o.Environ;
GUVATRN_cl = FUVATRN;
 /* line 4816: */
KKPATRN_setmonitor(BUVATRN_fdec, DUVATRN_diag);
 /* line 4817: */
RLPATRN_monitorfn((*(&(BUVATRN_fdec->Macspecs))), GUVATRN_cl, DUVATRN_diag);
 /* line 4818: */
JTVATRN.O = ITVATRN_o;
 /* line 4819: */
 /* line 4820: */
JTVATRN.C = A68_FALSE;
} 
} 
else
{ 
JTVATRN.O = ITVATRN_o;
 /* line 4821: */
 /* line 4822: */
 /* line 4823: */
JTVATRN.C = A68_FALSE;
} 
} 
break;
default: 
NKDAOST_sysfault(IUVATRN);
 /* line 4824: */
JTVATRN = JUVATRN;
break;
} 
KUVATRN_oc = JTVATRN;
 /* line 4826: */
LUVATRN = KUVATRN_oc.C;
if ( ! LUVATRN )
{LUVATRN = !HTVATRN_keep;
}
if ( LUVATRN )
{ 
A_CALLPROC(HDRATRN_update_closure,(),((HDRATRN_update_closure).nonlocals));
} 
 /* line 4827: */
 /* line 4828: */
if ( HTVATRN_keep )
{ 
MUVATRN = (&((*FDRATRN_newptr)->Outer)) ;
(*MUVATRN) = KUVATRN_oc.O;
 /* line 4829: */
 /* line 4830: */
FDRATRN_newptr = (&((*FDRATRN_newptr)->Rest));
} 
else
{ 
 /* line 4831: */
RNCATRN_free_outers(FDRATRN_newptr, (*EDRATRN_newclosure), Msg);
} 
 /* line 4832: */
 /* line 4833: */
GTVATRN_old = (*(&(GTVATRN_old->Rest)));
}
 /* line 4835: */
if ( JIPATRN_failure )
{ 
A_CALLPROC(ADRATRN_flt,(OUVATRN),(OUVATRN,(ADRATRN_flt).nonlocals));
} 
 /* line 4837: */
 /* line 4838: */
if ( GDRATRN_closurechanged )
{ 
PUVATRN.Cl = (*EDRATRN_newclosure);
 /* line 4839: */
PUVATRN.C = A68_TRUE;
QUVATRN = PUVATRN;
} 
else
{ 
RUVATRN.Cl = Oldclosure;
 /* line 4840: */
 /* line 4841: */
RUVATRN.C = A68_FALSE;
QUVATRN = RUVATRN;
} 
} 
A_PROC_EXIT(expand);
*ReturnedValue = (QUVATRN);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void QSOATRN(void)   /* initialise DECS macro */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/macro.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/transformprocs.m","./mfiles/modeprocs.m","./mfiles/closureprocs.m","./mfiles/assmodes.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_VC  HUOATRN;  /* avoid structure result */
A68_227  AOPATRN;  /* collateral clause result */
A68_510  DOPATRN;  /* OPERATORS - mode -> union mode */
A68_576  SWQATRN;  /* OPERATORS - nil -> mode */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
IHJATRN();   /* USE transformprocs */
HNMATRN();   /* USE modeprocs */
SKCATRN();   /* USE closureprocs */
BAAATRN();   /* USE assmodes */
PCAAOST();   /* USE osinterface */
JFAAOSI();   /* USE messageproc */
JSCAOST();   /* USE basics */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/transform/assoc/./a68files/macro.a68";
A_config.translation_time = "Tue Apr  4 10:01:27 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "PSOATRN (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:01:27 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS macro);
UEAALIB_a68config(LGAALIB_configinfo, USOATRN);
 /* line 151: */
VSOATRN_chooser_const = A68_FALSE;
 /* line 153: */
 /* line 154: */
 /* line 155: */
 /* line 156: */
 /* line 157: */
 /* line 159: */
 /* line 170: */
 /* line 172: */
 /* line 173: */
 /* line 178: */
 /* line 179: */
 /* line 182: */
 /* line 189: */
DUOATRN_generator( A68_TRUE, &HUOATRN );
GUOATRN_m = HUOATRN;
IUOATRN_mind = 0;
 /* line 191: */
 /* line 192: */
 /* line 195: */
 /* line 210: */
 /* line 219: */
 /* line 221: */
 /* line 232: */
 /* line 240: */
 /* line 243: */
 /* line 246: */
 /* line 255: */
 /* line 263: */
 /* line 287: */
 /* line 319: */
 /* line 359: */
 /* line 470: */
 /* line 476: */
 /* line 515: */
IIPATRN_currentclean = A68_FALSE;
 /* line 516: */
JIPATRN_failure = A68_FALSE;
 /* line 517: */
KIPATRN_linesafterfault = 0;
 /* line 519: */
 /* line 520: */
 /* line 524: */
 /* line 533: */
 /* line 561: */
 /* line 574: */
 /* line 585: */
 /* line 598: */
 /* line 613: */
 /* line 627: */
 /* line 640: */
 /* line 641: */
 /* line 642: */
 /* line 644: */
 /* line 679: */
 /* line 683: */
 /* line 686: */
 /* line 687: */
AOPATRN.Sort = ZNPATRN_nochecks;
AOPATRN.Nameno = 0;
BOPATRN_nulljoined = AOPATRN;
 /* line 688: */
COPATRN_nulljoinup = (A_HEAP(A68_510 ));
(*COPATRN_nulljoinup) = A_UNITE(DOPATRN,mode1,1,BOPATRN_nulljoined);
 /* line 690: */
 /* line 693: */
 /* line 694: */
 /* line 696: */
 /* line 708: */
 /* line 737: */
 /* line 782: */
 /* line 795: */
 /* line 812: */
 /* line 856: */
 /* line 876: */
 /* line 910: */
 /* line 928: */
 /* line 952: */
 /* line 965: */
 /* line 1163: */
 /* line 1176: */
 /* line 1220: */
 /* line 1235: */
 /* line 1248: */
 /* line 1250: */
 /* line 1279: */
 /* line 1296: */
 /* line 1315: */
 /* line 1328: */
 /* line 1396: */
 /* line 1415: */
 /* line 1440: */
 /* line 1462: */
 /* line 1487: */
 /* line 1499: */
 /* line 1508: */
 /* line 1533: */
 /* line 1540: */
 /* line 1548: */
 /* line 1581: */
 /* line 1643: */
 /* line 1664: */
 /* line 1688: */
 /* line 1706: */
 /* line 1713: */
 /* line 1743: */
 /* line 1762: */
 /* line 1783: */
 /* line 1784: */
 /* line 1785: */
 /* line 1786: */
TWQATRN_nilvechashlist = (A_VVAC(SWQATRN));
 /* line 1790: */
 /* line 1791: */
 /* line 1794: */
 /* line 1795: */
 /* line 1797: */
 /* line 1813: */
 /* line 1815: */
 /* line 1818: */
 /* line 1820: */
 /* line 4844: */
 /* line 4845: */
 /* line 4846: */
/*SKIP*/;
A_PROC_EXIT(DECS macro);
} 
#undef NL
/* end of translation of ./a68files/macro.a68 */
