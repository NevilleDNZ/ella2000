
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
/* UNAME:ETJAELA */
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
A68_BITS  Options;
A_PAD_BITS(PAD_24)
};
typedef struct A68t127  A68_127 ;    /* STRUCT(BITS)  */
struct A68t129 ;

A_PROCEDURE(A68_VOID ,A68t128,(struct A68t129 ),(struct A68t129 ,void *));
typedef struct A68t128  A68_128 ;    /* PROC(MODE129) VOID */
struct A68t129 { A68_INT mode; union {
A68_BOOL  mode1;
struct A68t127  mode2;
A68_VC  mode3;
} data; };
typedef struct A68t129  A68_129 ;    /* UNION(BOOL,MODE127,MODE26)  */

A_PROCEDURE(A68_BOOL ,A68t130,(void),(void *));
typedef struct A68t130  A68_130 ;    /* PROC BOOL */
struct A68t132 ;

A_PROCEDURE(A68_VOID ,A68t131,(struct A68t132 *,A68_VC *),(struct A68t132 *,A68_VC *,void *));
typedef struct A68t131  A68_131 ;    /* PROC(REF MODE132) MODE26 */
struct A68t132{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t132  A68_132 ;    /* STRUCT(REF MODE26,REF BITS)  */

A_PROCEDURE(A68_VOID ,A68t133,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t133  A68_133 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_BOOL ,A68t134,(struct A68t35 ,struct A68t35 ),(struct A68t35 ,struct A68t35 ,void *));
typedef struct A68t134  A68_134 ;    /* PROC(MODE35,MODE35) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t136);
typedef struct A68t136  A68_136 ;    /* STRUCT 4 CHAR */
struct A68t135{
struct A68t136  Access;
A_PAD_ISTRUCT(A68_136 ,PAD_25)
};
typedef struct A68t135  A68_135 ;    /* STRUCT(MODE136)  */

A_PROCEDURE(struct A68t132 *,A68t137,(A68_VC ,struct A68t135 ,struct A68t108 ),(A68_VC ,struct A68t135 ,struct A68t108 ,void *));
typedef struct A68t137  A68_137 ;    /* PROC(MODE26,MODE135,MODE108) REF MODE132 */

A_PROCEDURE(A68_VOID ,A68t138,(struct A68t132 *,struct A68t108 ),(struct A68t132 *,struct A68t108 ,void *));
typedef struct A68t138  A68_138 ;    /* PROC(REF MODE132,MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t139,(struct A68t132 *,A68_VC ,A68_INT *,struct A68t108 ,struct A68t35 *),(struct A68t132 *,A68_VC ,A68_INT *,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t139  A68_139 ;    /* PROC(REF MODE132,REF MODE26,REF INT,MODE108) MODE35 */

A_PROCEDURE(A68_VOID ,A68t140,(struct A68t132 *,A68_VC ,struct A68t108 ,struct A68t35 *),(struct A68t132 *,A68_VC ,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t140  A68_140 ;    /* PROC(REF MODE132,MODE26,MODE108) MODE35 */
struct A68t141{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_26)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_27)
A68_SINT  Device;
A_PAD_SINT(PAD_28)
A68_SINT  Links;
A_PAD_SINT(PAD_29)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_30)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_31)
A68_LINT  Size;
A_PAD_LINT(PAD_32)
A68_LINT  Accessed;
A_PAD_LINT(PAD_33)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_34)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_35)
};
typedef struct A68t141  A68_141 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t143 ;

A_PROCEDURE(struct A68t141 *,A68t142,(struct A68t143 ,struct A68t108 ),(struct A68t143 ,struct A68t108 ,void *));
typedef struct A68t142  A68_142 ;    /* PROC(MODE143,MODE108) REF MODE141 */
struct A68t143 { A68_INT mode; union {
struct A68t132 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t143  A68_143 ;    /* UNION(REF MODE132,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t144,(struct A68t132 *,A68_LINT *,struct A68t108 ,struct A68t35 *),(struct A68t132 *,A68_LINT *,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t144  A68_144 ;    /* PROC(REF MODE132,REF LONG INT,MODE108) MODE35 */

A_PROCEDURE(A68_VOID ,A68t145,(struct A68t132 *,A68_LINT ,struct A68t108 ,struct A68t35 *),(struct A68t132 *,A68_LINT ,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t145  A68_145 ;    /* PROC(REF MODE132,LONG INT,MODE108) MODE35 */

A_PROCEDURE(A68_VOID ,A68t146,(struct A68t132 *,struct A68t108 ,struct A68t35 *),(struct A68t132 *,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t146  A68_146 ;    /* PROC(REF MODE132,MODE108) MODE35 */

A_PROCEDURE(A68_VOID ,A68t147,(A68_VC ,struct A68t108 ,struct A68t35 *),(A68_VC ,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t147  A68_147 ;    /* PROC(MODE26,MODE108) MODE35 */

A_PROCEDURE(A68_VOID ,A68t148,(A68_INT ),(A68_INT ,void *));
typedef struct A68t148  A68_148 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_LINT ,A68t149,(void),(void *));
typedef struct A68t149  A68_149 ;    /* PROC LONG INT */

A_PROCEDURE(A68_INT ,A68t150,(A68_VC ,struct A68t108 ),(A68_VC ,struct A68t108 ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(MODE26,MODE108) INT */

A_PROCEDURE(A68_VOID ,A68t151,(A68_VC ,A68_VC ,struct A68t108 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t108 ,A68_VC *,void *));
typedef struct A68t151  A68_151 ;    /* PROC(MODE26,MODE26,MODE108) MODE26 */

A_PROCEDURE(A68_VOID ,A68t152,(A68_VC ,A68_VC ,struct A68t108 ,struct A68t35 *),(A68_VC ,A68_VC ,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t152  A68_152 ;    /* PROC(MODE26,MODE26,MODE108) MODE35 */
struct A68t153{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t153  A68_153 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t154,(A68_VC ,A68_VC ,struct A68t108 ,struct A68t153 *),(A68_VC ,A68_VC ,struct A68t108 ,struct A68t153 *,void *));
typedef struct A68t154  A68_154 ;    /* PROC(MODE26,MODE26,MODE108) MODE153 */

A_PROCEDURE(A68_VOID ,A68t155,(A68_VC *),(A68_VC *,void *));
typedef struct A68t155  A68_155 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t156,(struct A68t46 *),(struct A68t46 *,void *));
typedef struct A68t156  A68_156 ;    /* PROC MODE46 */

A_PROCEDURE(A68_VOID ,A68t157,(A68_VC ,struct A68t108 ,struct A68t46 *),(A68_VC ,struct A68t108 ,struct A68t46 *,void *));
typedef struct A68t157  A68_157 ;    /* PROC(MODE26,MODE108) MODE46 */
struct A68t159 ;

A_PROCEDURE(A68_VOID ,A68t158,(struct A68t159 ,struct A68t108 ),(struct A68t159 ,struct A68t108 ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(MODE159,MODE108) VOID */
A_VECTOR(struct A68t160 ,A68t159);
typedef struct A68t159  A68_159 ;    /* VECTOR [] MODE160 */
struct A68t160{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_36)
};
typedef struct A68t160  A68_160 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t161,(void),(void *));
typedef struct A68t161  A68_161 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t162,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t163,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t164,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t164  A68_164 ;    /* PROC(REF MODE26) REF MODE26 */

A_PROCEDURE(A68_REAL ,A68t165,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(REAL) REAL */
struct A68t166{
A68_VC  Name;
A68_VC  Version;
A68_VC  Date;
A68_VC  Msg;
A68_VC  Sys_fault;
};
typedef struct A68t166  A68_166 ;    /* STRUCT(MODE26,MODE26,MODE26,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t167,(A68_BOOL ,struct A68t166 *),(A68_BOOL ,struct A68t166 *,void *));
typedef struct A68t167  A68_167 ;    /* PROC(BOOL) MODE166 */

A_PROCEDURE(A68_VOID ,A68t168,(struct A68t166 ,A68_BOOL ),(struct A68t166 ,A68_BOOL ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(MODE166,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t169,(struct A68t166 *),(struct A68t166 *,void *));
typedef struct A68t169  A68_169 ;    /* PROC MODE166 */

A_PROCEDURE(A68_BOOL ,A68t170,(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ),(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ,void *));
typedef struct A68t170  A68_170 ;    /* PROC(MODE26,MODE26,MODE26,REF REF MODE26,BOOL) BOOL */
struct A68t172 ;
struct A68t173 ;

A_PROCEDURE(A68_VOID ,A68t171,(A68_VC ,struct A68t161 ,struct A68t172 ,struct A68t173 ),(A68_VC ,struct A68t161 ,struct A68t172 ,struct A68t173 ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(MODE26,MODE161,MODE172,MODE173) VOID */

A_PROCEDURE(A68_BOOL ,A68t172,(A68_VC ,struct A68t155 ),(A68_VC ,struct A68t155 ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE26,MODE155) BOOL */

A_PROCEDURE(A68_BOOL ,A68t173,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t174,(struct A68t108 ),(struct A68t108 ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t175,(struct A68t174 ,struct A68t108 ),(struct A68t174 ,struct A68t108 ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(MODE174,MODE108) VOID */
struct A68t176{
struct A68t177 * Database;
A68_VC  Description;
};
typedef struct A68t176  A68_176 ;    /* STRUCT(REF MODE177,REF MODE26)  */
struct A68t177{
A68_VC  Logical_name;
A68_VC  Db_name;
A68_BITS * Setup;
struct A68t178 * Df;
};
typedef struct A68t177  A68_177 ;    /* STRUCT(REF MODE26,REF MODE26,REF BITS,REF MODE178)  */
A_VECTOR(struct A68t179 ,A68t180);
typedef struct A68t180  A68_180 ;    /* VECTOR [] MODE179 */
struct A68t179{
A68_BITS  Code;
A_PAD_BITS(PAD_37)
A68_INT  First_block;
A_PAD_INT(PAD_38)
A68_INT  First_offset;
A_PAD_INT(PAD_39)
A68_INT  Data_elts;
A_PAD_INT(PAD_40)
A68_INT  Dp_elts;
A_PAD_INT(PAD_41)
A68_INT  Version;
A_PAD_INT(PAD_42)
A68_BITS  Sumcheck;
A_PAD_BITS(PAD_43)
};
typedef struct A68t179  A68_179 ;    /* STRUCT(BITS,INT,INT,INT,INT,INT,BITS)  */
A_VECTOR(struct A68t185 ,A68t184);
typedef struct A68t184  A68_184 ;    /* VECTOR [] MODE185 */
struct A68t186{
A68_INT  Block_num;
A_PAD_INT(PAD_44)
A68_INT  Offset;
A_PAD_INT(PAD_45)
};
typedef struct A68t186  A68_186 ;    /* STRUCT(INT,INT)  */
struct A68t185{
A68_BOOL  Shaky;
A_PAD_BOOL(PAD_46)
struct A68t186  Address;
A68_INT  Data_elts;
A_PAD_INT(PAD_47)
A68_INT  Dp_elts;
A_PAD_INT(PAD_48)
A68_INT  Code;
A_PAD_INT(PAD_49)
A68_INT  Version;
A_PAD_INT(PAD_50)
A68_INT  Read_size;
A_PAD_INT(PAD_51)
};
typedef struct A68t185  A68_185 ;    /* STRUCT(BOOL,MODE186,INT,INT,INT,INT,INT)  */
struct A68t178{
struct A68t179 * Root;
struct A68t179 * Indirs_dp;
struct A68t179 * Freelist_dp;
struct A68t179 * Pagetable_dp;
struct A68t179 * Append_dp;
struct A68t180  Free_block_dps;
struct A68t180  Pagetable_dps;
struct A68t132 ** File;
struct A68t132 ** Test_file;
struct A68t181 * Write_buffer;
A68_VC  Name;
A68_VC  Block_buffer;
A68_INT * Generation;
A68_INT * File_size;
A68_INT * Old_file_size;
A68_INT * Freelist_index;
A68_INT * Current_free;
A68_INT * First_free;
A68_INT * Last_free;
A68_INT * Cbufpos;
A68_INT * Freeblock_ptr;
A68_INT * Freelist_ext_ptr;
A68_INT * Initial_free_block_dps;
A68_INT * Size_of_free_space;
A68_INT * Unusable_bytes;
A68_INT * Appended_data;
A68_INT * Read_transfers;
A68_INT * Write_transfers;
struct A68t32  Freelist;
struct A68t32  Freelist_ext;
struct A68t32  Pagetable_ext;
struct A68t182 * Gc_ptrs;
struct A68t183 * Instore_vars;
struct A68t184  Indirections;
A68_BOOL * Writeable;
A68_BOOL * Last_update_failed;
A68_BOOL * Appending;
A68_BOOL * Collectable;
};
typedef struct A68t178  A68_178 ;    /* STRUCT(REF MODE179,REF MODE179,REF MODE179,REF MODE179,REF MODE179,REF MODE180,REF MODE180,REF REF MODE132,REF REF MODE132,REF MODE181,REF MODE26,REF MODE26,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF MODE32,REF MODE32,REF MODE32,REF MODE182,REF MODE183,REF MODE184,REF BOOL,REF BOOL,REF BOOL,REF BOOL)  */
struct A68t181{
A68_VC  Buffer;
struct A68t187 * List;
A68_INT * Buffer_ptr;
A68_INT * Upb;
A68_INT * Generation;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(REF MODE26,REF MODE187,REF INT,REF INT,REF INT)  */
struct A68t182{
struct A68t186  Old;
struct A68t186  New;
struct A68t182 * Rest;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(MODE186,MODE186,REF MODE182)  */
struct A68t183{
A68_INT  Indirection;
A_PAD_INT(PAD_52)
struct A68t183 * Rest;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(INT,REF MODE183)  */
struct A68t187{
A68_INT  Lwb;
A_PAD_INT(PAD_53)
A68_INT  Upb;
A_PAD_INT(PAD_54)
struct A68t187 * Rest;
};
typedef struct A68t187  A68_187 ;    /* STRUCT(INT,INT,REF MODE187)  */

A_PROCEDURE(A68_BOOL ,A68t188,(struct A68t177 *,struct A68t179 ,struct A68t179 ),(struct A68t177 *,struct A68t179 ,struct A68t179 ,void *));
typedef struct A68t188  A68_188 ;    /* PROC(REF MODE177,MODE179,MODE179) BOOL */

A_PROCEDURE(A68_INT ,A68t189,(struct A68t177 *,struct A68t179 ),(struct A68t177 *,struct A68t179 ,void *));
typedef struct A68t189  A68_189 ;    /* PROC(REF MODE177,MODE179) INT */

A_PROCEDURE(A68_VOID ,A68t190,(struct A68t177 *,struct A68t179 *),(struct A68t177 *,struct A68t179 *,void *));
typedef struct A68t190  A68_190 ;    /* PROC(REF MODE177) MODE179 */

A_PROCEDURE(struct A68t132 *,A68t191,(A68_VC ,A68_INT ,struct A68t108 ),(A68_VC ,A68_INT ,struct A68t108 ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(MODE26,INT,MODE108) REF MODE132 */

A_PROCEDURE(A68_VOID ,A68t192,(struct A68t132 *,A68_BOOL ,struct A68t177 *),(struct A68t132 *,A68_BOOL ,struct A68t177 *,void *));
typedef struct A68t192  A68_192 ;    /* PROC(REF MODE132,BOOL) MODE177 */

A_PROCEDURE(A68_BOOL ,A68t193,(struct A68t177 *),(struct A68t177 *,void *));
typedef struct A68t193  A68_193 ;    /* PROC(REF MODE177) BOOL */

A_PROCEDURE(A68_VOID ,A68t194,(struct A68t177 *,struct A68t179 ),(struct A68t177 *,struct A68t179 ,void *));
typedef struct A68t194  A68_194 ;    /* PROC(REF MODE177,MODE179) VOID */

A_PROCEDURE(A68_VOID ,A68t195,(struct A68t177 *,struct A68t179 ,struct A68t108 ),(struct A68t177 *,struct A68t179 ,struct A68t108 ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(REF MODE177,MODE179,MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t196,(struct A68t177 *,struct A68t108 ),(struct A68t177 *,struct A68t108 ,void *));
typedef struct A68t196  A68_196 ;    /* PROC(REF MODE177,MODE108) VOID */

A_PROCEDURE(A68_BOOL ,A68t197,(struct A68t177 *,A68_INT ),(struct A68t177 *,A68_INT ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(REF MODE177,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t198,(struct A68t177 *,A68_INT ,struct A68t108 ),(struct A68t177 *,A68_INT ,struct A68t108 ,void *));
typedef struct A68t198  A68_198 ;    /* PROC(REF MODE177,INT,MODE108) VOID */

A_PROCEDURE(struct A68t132 *,A68t199,(struct A68t177 *),(struct A68t177 *,void *));
typedef struct A68t199  A68_199 ;    /* PROC(REF MODE177) REF MODE132 */

A_PROCEDURE(A68_INT ,A68t200,(struct A68t177 *),(struct A68t177 *,void *));
typedef struct A68t200  A68_200 ;    /* PROC(REF MODE177) INT */

A_PROCEDURE(A68_VOID ,A68t201,(struct A68t177 *),(struct A68t177 *,void *));
typedef struct A68t201  A68_201 ;    /* PROC(REF MODE177) VOID */

A_PROCEDURE(A68_VOID ,A68t202,(struct A68t132 *,struct A68t132 *,struct A68t108 ),(struct A68t132 *,struct A68t132 *,struct A68t108 ,void *));
typedef struct A68t202  A68_202 ;    /* PROC(REF MODE132,REF MODE132,MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t203,(A68_INT ,struct A68t109 *),(A68_INT ,struct A68t109 *,void *));
typedef struct A68t203  A68_203 ;    /* PROC(INT) MODE109 */

A_PROCEDURE(A68_BOOL ,A68t204,(struct A68t176 *,struct A68t179 ),(struct A68t176 *,struct A68t179 ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(REF MODE176,MODE179) BOOL */
struct A68t205{
A68_VC  Rvc;
struct A68t205 * Rest;
};
typedef struct A68t205  A68_205 ;    /* STRUCT(REF MODE26,REF MODE205)  */
struct A68t206{
struct A68t176  Df;
struct A68t205  Head;
struct A68t205 * Current;
A68_INT  Index;
A_PAD_INT(PAD_55)
A68_INT  Type;
A_PAD_INT(PAD_56)
A68_VC  Ident;
A68_INT  Int;
A_PAD_INT(PAD_57)
};
typedef struct A68t206  A68_206 ;    /* STRUCT(MODE176,MODE205,REF MODE205,INT,INT,REF MODE26,INT)  */

A_PROCEDURE(struct A68t206 *,A68t207,(struct A68t176 *,struct A68t87 ,A68_INT ),(struct A68t176 *,struct A68t87 ,A68_INT ,void *));
typedef struct A68t207  A68_207 ;    /* PROC(REF MODE176,MODE87,INT) REF MODE206 */

A_PROCEDURE(A68_VOID ,A68t208,(struct A68t206 *),(struct A68t206 *,void *));
typedef struct A68t208  A68_208 ;    /* PROC(REF MODE206) VOID */

A_PROCEDURE(struct A68t206 *,A68t209,(struct A68t176 *,struct A68t179 ),(struct A68t176 *,struct A68t179 ,void *));
typedef struct A68t209  A68_209 ;    /* PROC(REF MODE176,MODE179) REF MODE206 */

A_PROCEDURE(A68_CHAR ,A68t210,(struct A68t206 *),(struct A68t206 *,void *));
typedef struct A68t210  A68_210 ;    /* PROC(REF MODE206) CHAR */

A_PROCEDURE(A68_VOID ,A68t211,(struct A68t206 *,A68_VC ),(struct A68t206 *,A68_VC ,void *));
typedef struct A68t211  A68_211 ;    /* PROC(REF MODE206,REF MODE26) VOID */

A_PROCEDURE(A68_BOOL ,A68t212,(struct A68t206 *),(struct A68t206 *,void *));
typedef struct A68t212  A68_212 ;    /* PROC(REF MODE206) BOOL */

A_PROCEDURE(A68_INT ,A68t213,(struct A68t206 *),(struct A68t206 *,void *));
typedef struct A68t213  A68_213 ;    /* PROC(REF MODE206) INT */

A_PROCEDURE(A68_VOID ,A68t214,(struct A68t206 *,A68_VC *),(struct A68t206 *,A68_VC *,void *));
typedef struct A68t214  A68_214 ;    /* PROC(REF MODE206) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t215,(struct A68t176 *,struct A68t108 ),(struct A68t176 *,struct A68t108 ,void *));
typedef struct A68t215  A68_215 ;    /* PROC(REF MODE176,MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t216,(struct A68t176 *,A68_VC ,struct A68t108 ,struct A68t179 *),(struct A68t176 *,A68_VC ,struct A68t108 ,struct A68t179 *,void *));
typedef struct A68t216  A68_216 ;    /* PROC(REF MODE176,MODE26,MODE108) MODE179 */

A_PROCEDURE(A68_VOID ,A68t217,(struct A68t176 *,struct A68t180 ,struct A68t108 ,struct A68t179 *),(struct A68t176 *,struct A68t180 ,struct A68t108 ,struct A68t179 *,void *));
typedef struct A68t217  A68_217 ;    /* PROC(REF MODE176,MODE180,MODE108) MODE179 */

A_PROCEDURE(A68_INT ,A68t218,(struct A68t176 *,struct A68t179 ,struct A68t108 ),(struct A68t176 *,struct A68t179 ,struct A68t108 ,void *));
typedef struct A68t218  A68_218 ;    /* PROC(REF MODE176,MODE179,MODE108) INT */

A_PROCEDURE(A68_VOID ,A68t219,(struct A68t176 *,A68_VC ,struct A68t179 ,struct A68t108 ),(struct A68t176 *,A68_VC ,struct A68t179 ,struct A68t108 ,void *));
typedef struct A68t219  A68_219 ;    /* PROC(REF MODE176,REF MODE26,MODE179,MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t220,(struct A68t176 *,struct A68t180 ,struct A68t179 ,struct A68t108 ),(struct A68t176 *,struct A68t180 ,struct A68t179 ,struct A68t108 ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(REF MODE176,REF MODE180,MODE179,MODE108) VOID */

A_PROCEDURE(struct A68t206 *,A68t221,(struct A68t176 *,struct A68t87 ),(struct A68t176 *,struct A68t87 ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(REF MODE176,MODE87) REF MODE206 */

A_PROCEDURE(A68_VOID ,A68t222,(struct A68t206 *,struct A68t108 ),(struct A68t206 *,struct A68t108 ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(REF MODE206,MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t223,(struct A68t206 *,struct A68t108 ,struct A68t179 *),(struct A68t206 *,struct A68t108 ,struct A68t179 *,void *));
typedef struct A68t223  A68_223 ;    /* PROC(REF MODE206,MODE108) MODE179 */

A_PROCEDURE(A68_INT ,A68t224,(A68_CHAR ,struct A68t206 *,struct A68t108 ),(A68_CHAR ,struct A68t206 *,struct A68t108 ,void *));
typedef struct A68t224  A68_224 ;    /* PROC(CHAR,REF MODE206,MODE108) INT */

A_PROCEDURE(A68_INT ,A68t225,(A68_VC ,struct A68t206 *,struct A68t108 ),(A68_VC ,struct A68t206 *,struct A68t108 ,void *));
typedef struct A68t225  A68_225 ;    /* PROC(MODE26,REF MODE206,MODE108) INT */

A_PROCEDURE(A68_INT ,A68t226,(A68_INT ,struct A68t206 *,struct A68t108 ),(A68_INT ,struct A68t206 *,struct A68t108 ,void *));
typedef struct A68t226  A68_226 ;    /* PROC(INT,REF MODE206,MODE108) INT */

A_PROCEDURE(A68_INT ,A68t227,(A68_VC ,struct A68t206 *,struct A68t108 ),(A68_VC ,struct A68t206 *,struct A68t108 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(REF MODE26,REF MODE206,MODE108) INT */

A_PROCEDURE(A68_INT ,A68t228,(A68_BOOL ,struct A68t206 *,struct A68t108 ),(A68_BOOL ,struct A68t206 *,struct A68t108 ,void *));
typedef struct A68t228  A68_228 ;    /* PROC(BOOL,REF MODE206,MODE108) INT */

A_PROCEDURE(A68_VOID ,A68t229,(struct A68t161 ),(struct A68t161 ,void *));
typedef struct A68t229  A68_229 ;    /* PROC(MODE161) VOID */

A_PROCEDURE(A68_VOID ,A68t230,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t230  A68_230 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,55,A68t231);
typedef struct A68t231  A68_231 ;    /* STRUCT 55 CHAR */
struct A68t232{
A68_VC  Name;
A68_VC  Password;
A68_INT  Key;
A_PAD_INT(PAD_58)
A68_BOOL  Login;
A_PAD_BOOL(PAD_59)
struct A68t232 * Rest;
};
typedef struct A68t232  A68_232 ;    /* STRUCT(REF MODE26,REF MODE26,INT,BOOL,REF MODE232)  */
struct A68t233{
A68_INT  Key;
A_PAD_INT(PAD_60)
A68_BOOL  Changed;
A_PAD_BOOL(PAD_61)
struct A68t32  Version;
struct A68t180  Data;
struct A68t233 * Rest;
};
typedef struct A68t233  A68_233 ;    /* STRUCT(INT,BOOL,REF MODE32,REF MODE180,REF MODE233)  */
struct A68t234{
A68_VC  Name;
A68_INT  Date;
A_PAD_INT(PAD_62)
};
typedef struct A68t234  A68_234 ;    /* STRUCT(REF MODE26,INT)  */
struct A68t235{
A68_INT  Sort;
A_PAD_INT(PAD_63)
A68_VC  Name;
A68_INT  Version;
A_PAD_INT(PAD_64)
struct A68t235 * Rest;
};
typedef struct A68t235  A68_235 ;    /* STRUCT(INT,REF MODE26,INT,REF MODE235)  */
struct A68t236{
A68_INT  Sort;
A_PAD_INT(PAD_65)
A68_VC  Name;
A68_BOOL  Export;
A_PAD_BOOL(PAD_66)
A68_BOOL  Import;
A_PAD_BOOL(PAD_67)
struct A68t54  Assemble;
A68_INT  Status;
A_PAD_INT(PAD_68)
A68_INT  Version;
A_PAD_INT(PAD_69)
A68_VC  Il;
struct A68t235 * Uses;
};
typedef struct A68t236  A68_236 ;    /* STRUCT(INT,REF MODE26,BOOL,BOOL,REF MODE54,INT,INT,REF MODE26,REF MODE235)  */
struct A68t237{
struct A68t92  Ctn;
A68_VC  Name;
A68_VC  Rename;
A68_INT  Sort;
A_PAD_INT(PAD_70)
struct A68t179  Info;
};
typedef struct A68t237  A68_237 ;    /* STRUCT(MODE92,REF MODE26,REF MODE26,INT,MODE179)  */
struct A68t238{
struct A68t237  Binding;
struct A68t238 * Rest;
};
typedef struct A68t238  A68_238 ;    /* STRUCT(MODE237,REF MODE238)  */
struct A68t239{
A68_VC  Name;
A68_INT  Ctno;
A_PAD_INT(PAD_71)
struct A68t238 * Imports;
};
typedef struct A68t239  A68_239 ;    /* STRUCT(REF MODE26,INT,REF MODE238)  */
struct A68t240{
struct A68t239  Region;
struct A68t240 * Rest;
};
typedef struct A68t240  A68_240 ;    /* STRUCT(MODE239,REF MODE240)  */
A_VECTOR(struct A68t236 ,A68t242);
typedef struct A68t242  A68_242 ;    /* VECTOR [] MODE236 */
struct A68t241{
A68_VC  Name;
struct A68t179  Val;
A68_BOOL  Loadable;
A_PAD_BOOL(PAD_72)
A68_BOOL  Changed;
A_PAD_BOOL(PAD_73)
struct A68t242  Decls;
struct A68t233 * Declattributes;
struct A68t240 * Regions;
};
typedef struct A68t241  A68_241 ;    /* STRUCT(REF MODE26,MODE179,BOOL,BOOL,REF MODE242,REF MODE233,REF MODE240)  */
struct A68t243{
struct A68t241  Context;
struct A68t243 * Rest;
};
typedef struct A68t243  A68_243 ;    /* STRUCT(MODE241,REF MODE243)  */
struct A68t244{
A68_VC  Name;
struct A68t132 * File;
struct A68t176 * Discfile;
struct A68t92  Currentct;
A68_VC  Libprompt;
A68_BOOL  Libchanged;
A_PAD_BOOL(PAD_74)
struct A68t180  Rootptrs;
A68_INT  Version;
A_PAD_INT(PAD_75)
A68_VC  Datecleared;
A68_VC  Timecleared;
A68_VC  Datelastwritten;
A68_VC  Timelastwritten;
struct A68t32  Keys;
struct A68t232 * Classes;
struct A68t243 * Contexts;
};
typedef struct A68t244  A68_244 ;    /* STRUCT(REF MODE26,REF MODE132,REF MODE176,MODE92,REF MODE26,BOOL,MODE180,INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,MODE32,REF MODE232,REF MODE243)  */

A_PROCEDURE(A68_VOID ,A68t245,(A68_BOOL ,struct A68t244 *),(A68_BOOL ,struct A68t244 *,void *));
typedef struct A68t245  A68_245 ;    /* PROC(BOOL) MODE244 */

A_PROCEDURE(A68_VOID ,A68t246,(A68_BOOL ,struct A68t180 *),(A68_BOOL ,struct A68t180 *,void *));
typedef struct A68t246  A68_246 ;    /* PROC(BOOL) MODE180 */
#define A68_247  A68_180 
#define A68t247 A68t180            /* FLEX VECTOR [] MODE179 */
#define A68_248  A68_32 
#define A68t248 A68t32            /* FLEX VECTOR [] INT */
#define A68_249  A68_244 
#define A68t249 A68t244            /* STRUCT(REF MODE26,REF MODE132,REF MODE176,MODE92,REF MODE26,BOOL,MODE247,INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,MODE248,REF MODE232,REF MODE243)  */

A_PROCEDURE(A68_VOID ,A68t250,(A68_BOOL ,struct A68t242 *),(A68_BOOL ,struct A68t242 *,void *));
typedef struct A68t250  A68_250 ;    /* PROC(BOOL) MODE242 */
struct A68t251{
struct A68t241 * Context;
struct A68t239 * Region;
};
typedef struct A68t251  A68_251 ;    /* STRUCT(REF MODE241,REF MODE239)  */
A_ISTRUCT(A68_CHAR ,3,A68t252);
typedef struct A68t252  A68_252 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t253);
typedef struct A68t253  A68_253 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t254);
typedef struct A68t254  A68_254 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t255);
typedef struct A68t255  A68_255 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(struct A68t179 ,6,A68t256);
typedef struct A68t256  A68_256 ;    /* STRUCT 6 MODE179 */
A_ISTRUCT(A68_INT ,3,A68t257);
typedef struct A68t257  A68_257 ;    /* STRUCT 3 INT */

A_PROCEDURE(struct A68t244 *,A68t258,(struct A68t244 *,struct A68t244 ),(struct A68t244 *,struct A68t244 ,void *));
typedef struct A68t258  A68_258 ;    /* PROC(REF MODE244,MODE244) REF MODE244 */

A_PROCEDURE(A68_BOOL ,A68t259,(struct A68t92 ,struct A68t92 ),(struct A68t92 ,struct A68t92 ,void *));
typedef struct A68t259  A68_259 ;    /* PROC(MODE92,MODE92) BOOL */

A_PROCEDURE(A68_BOOL ,A68t260,(struct A68t251 ,struct A68t251 ),(struct A68t251 ,struct A68t251 ,void *));
typedef struct A68t260  A68_260 ;    /* PROC(MODE251,MODE251) BOOL */

A_PROCEDURE(A68_VOID ,A68t261,(struct A68t92 ,A68_VC *),(struct A68t92 ,A68_VC *,void *));
typedef struct A68t261  A68_261 ;    /* PROC(MODE92) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t262,(struct A68t251 ,A68_VC *),(struct A68t251 ,A68_VC *,void *));
typedef struct A68t262  A68_262 ;    /* PROC(MODE251) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t263,(struct A68t251 ,struct A68t92 *),(struct A68t251 ,struct A68t92 *,void *));
typedef struct A68t263  A68_263 ;    /* PROC(MODE251) MODE92 */

A_PROCEDURE(A68_BOOL ,A68t264,(struct A68t241 *,struct A68t108 ),(struct A68t241 *,struct A68t108 ,void *));
typedef struct A68t264  A68_264 ;    /* PROC(REF MODE241,MODE108) BOOL */
A_ISTRUCT(A68_VC ,4,A68t265);
typedef struct A68t265  A68_265 ;    /* STRUCT 4 MODE26 */

A_PROCEDURE(A68_VOID ,A68t266,(A68_VC *,A68_VC *),(A68_VC *,A68_VC *,void *));
typedef struct A68t266  A68_266 ;    /* PROC(REF REF MODE26,REF REF MODE26) VOID */

A_PROCEDURE(struct A68t244 *,A68t267,(void),(void *));
typedef struct A68t267  A68_267 ;    /* PROC REF MODE244 */

A_PROCEDURE(struct A68t241 *,A68t268,(A68_VC ),(A68_VC ,void *));
typedef struct A68t268  A68_268 ;    /* PROC(REF MODE26) REF MODE241 */

A_PROCEDURE(A68_VOID ,A68t269,(struct A68t241 *,A68_VC ,struct A68t251 *),(struct A68t241 *,A68_VC ,struct A68t251 *,void *));
typedef struct A68t269  A68_269 ;    /* PROC(REF MODE241,REF MODE26) MODE251 */

A_PROCEDURE(struct A68t238 *,A68t270,(struct A68t251 ),(struct A68t251 ,void *));
typedef struct A68t270  A68_270 ;    /* PROC(MODE251) REF MODE238 */

A_PROCEDURE(struct A68t237 *,A68t271,(struct A68t251 ,A68_VC ),(struct A68t251 ,A68_VC ,void *));
typedef struct A68t271  A68_271 ;    /* PROC(MODE251,REF MODE26) REF MODE237 */

A_PROCEDURE(struct A68t241 *,A68t272,(A68_VC ,struct A68t108 ),(A68_VC ,struct A68t108 ,void *));
typedef struct A68t272  A68_272 ;    /* PROC(REF MODE26,MODE108) REF MODE241 */

A_PROCEDURE(A68_VOID ,A68t273,(struct A68t241 *,A68_VC ,struct A68t108 ,struct A68t251 *),(struct A68t241 *,A68_VC ,struct A68t108 ,struct A68t251 *,void *));
typedef struct A68t273  A68_273 ;    /* PROC(REF MODE241,REF MODE26,MODE108) MODE251 */
A_ISTRUCT(A68_VC ,2,A68t274);
typedef struct A68t274  A68_274 ;    /* STRUCT 2 MODE26 */

A_PROCEDURE(A68_VOID ,A68t275,(struct A68t92 ,struct A68t108 ,struct A68t251 *),(struct A68t92 ,struct A68t108 ,struct A68t251 *,void *));
typedef struct A68t275  A68_275 ;    /* PROC(MODE92,MODE108) MODE251 */

A_PROCEDURE(struct A68t237 *,A68t276,(struct A68t251 ,A68_VC ,struct A68t108 ),(struct A68t251 ,A68_VC ,struct A68t108 ,void *));
typedef struct A68t276  A68_276 ;    /* PROC(MODE251,REF MODE26,MODE108) REF MODE237 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from databasebuffers --- */
extern A68_179  UACAELA_nilptr;
extern A68_INT  BLEAELA_discfile_size(struct A68t177 *);
extern A68_INT  ELEAELA_size_of_free_space(struct A68t177 *);
extern A68_VOID  LIBAELA_lib_msg(A68_INT ,A68_109 *);
extern A68_BOOL  UXIAELA_isnilptr(struct A68t176 *,struct A68t179 );
extern A68_INT  PEJAELA_nchars(struct A68t176 *,struct A68t179 ,struct A68t108 );
extern A68_INT  UEJAELA_ndiscptrs(struct A68t176 *,struct A68t179 ,struct A68t108 );
extern A68_VOID  FFJAELA_myreaddiscptrs(struct A68t176 *,struct A68t180 ,struct A68t179 ,struct A68t108 );
/* --- End of imports from databasebuffers --- */


/* --- Imports from osinterface --- */
extern A68_135  BOBAOSI_update_access;
extern A68_135  FOBAOSI_update_truncate_access;
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
/* --- End of imports from osinterface --- */


/* --- Imports from testmode --- */
extern A68_VOID  JIBAOST_version_str(A68_INT ,A68_VC *);
/* --- End of imports from testmode --- */


/* --- Imports from messageproc --- */
extern A68_46  VJAAOSI_nullmsg;
/* --- End of imports from messageproc --- */


/* --- Imports from basics --- */
extern A68_VOID  RSCAOST_makeid(A68_VC ,A68_VC *);
extern A68_VC  TTCAOST_nullid;
extern A68_INT  DZCAOST_seconds(void);
extern A68_VOID  EADAOST_time(A68_INT ,A68_VC *);
extern A68_VOID  FDDAOST_date(A68_INT ,A68_VC *);
/* --- End of imports from basics --- */


/* --- Imports from putstrings --- */
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void NWIAELA(void);   /* databasebuffers */
extern void PCAAOST(void);   /* osinterface */
extern void QFBAOST(void);   /* testmode */
extern void JFAAOSI(void);   /* messageproc */
extern void JSCAOST(void);   /* basics */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_231   ITJAELA = {"$Id: libmodes.a68,v 34.2 1995/03/29 13:03:29 ella Exp $"}; 
A_GISVEC(A68_VC ,JTJAELA,ITJAELA,55)
A68_232 * KTJAELA_nilclasses;
A68_233 * LTJAELA_nildeclattributes;
A68_245  MTJAELA_anonymous;
A68_234 * EUJAELA_nilsource;
A68_237 * FUJAELA_nilbinding;
A68_238 * GUJAELA_nilimports;
A68_235 * HUJAELA_niluses;
A68_236  MUJAELA_nulldecl;
A68_242  RUJAELA_nodecls;
A68_242  UUJAELA_nildecls;
A68_VC  ZUJAELA_nospecs;
A68_239 * BVJAELA_nilregion;
A68_240 * CVJAELA_nilregions;
A68_241 * DVJAELA_nilcontxt;
A68_243 * EVJAELA_nilcontexts;
#define FVJAELA_new_mask 0X1U
#define GVJAELA_body_mask 0X2U
#define HVJAELA_spec_mask 0X4U
#define IVJAELA_imports_mask 0X8U
#define JVJAELA_ktype 65
#define KVJAELA_kint 66
#define LVJAELA_kfn 67
#define MVJAELA_kconst 68
#define NVJAELA_kattr 69
#define OVJAELA_kmac 70
static A68_136   RVJAELA = {"TYPE"}; 
A_GISVEC(A68_VC ,TVJAELA,RVJAELA,4)
static A68_252   UVJAELA = {"INT"}; 
A_GISVEC(A68_VC ,VVJAELA,UVJAELA,3)
static A68_253   WVJAELA = {"FN"}; 
A_GISVEC(A68_VC ,XVJAELA,WVJAELA,2)
static A68_254   YVJAELA = {"CONST"}; 
A_GISVEC(A68_VC ,ZVJAELA,YVJAELA,5)
static A68_136   AWJAELA = {"ATTR"}; 
A_GISVEC(A68_VC ,BWJAELA,AWJAELA,4)
static A68_252   CWJAELA = {"MAC"}; 
A_GISVEC(A68_VC ,DWJAELA,CWJAELA,3)
#define FWJAELA_identification 18882
#define GWJAELA_markno 12
static A68_136   MWJAELA = {"ella"}; 
A_GISVEC(A68_VC ,OWJAELA,MWJAELA,4)
A68_92  VWJAELA_defaultct;
static A68_VC  AXJAELA_us;
static A68_254   CXJAELA = {"unset"}; 
A_GISVEC(A68_VC ,DXJAELA,CXJAELA,5)
A68_244 * HXJAELA_library;
static A68_255   OXJAELA = {"Library"}; 
A_GISVEC(A68_VC ,QXJAELA,OXJAELA,7)
A68_VC * SYJAELA_libprompt;
A68_176 * TYJAELA_discfile;
A68_180  UYJAELA_rootptrs;
A68_179 * WYJAELA_ptrlibinfo;
A68_179 * YYJAELA_ptrcontexts;
A68_179 * AZJAELA_ptrimpinfo;
A68_179 * CZJAELA_ptrctvalues;
A68_179 * EZJAELA_ptrattinfo;
A68_179 * GZJAELA_ptrattributes;
A68_INT * JZJAELA_body_key;
A68_INT * MZJAELA_info_key;
A68_INT * PZJAELA_spacemap_key;
static A68_136   RCKAELA = {"****"}; 
A_GISVEC(A68_VC ,SCKAELA,RCKAELA,4)
static A68_136   UCKAELA = {"****"}; 
A_GISVEC(A68_VC ,VCKAELA,UCKAELA,4)
typedef struct   /* env of non-global proc */
{
A68_VC  CAKAELA_a;
A68_VC  DAKAELA_b;
} HAKAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  VAKAELA_a;
A68_VC  WAKAELA_b;
} ABKAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  DCKAELA_array_size;
A_PAD_INT(PAD_76)
} HCKAELA_generator;

A_STATIC A68_VOID  OTJAELA_generator(A68_BOOL  NTJAELA_anonymous, A68_244  *ReturnedValue);

A_STATIC A68_VOID  QTJAELA_generator(A68_BOOL  PTJAELA_anonymous, A68_180  *ReturnedValue);

A_STATIC A68_VOID  UTJAELA_generator(A68_BOOL  TTJAELA_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_VOID  OUJAELA_generator(A68_BOOL  NUJAELA_anonymous, A68_242  *ReturnedValue);

A_STATIC A68_VOID  WUJAELA_generator(A68_BOOL  VUJAELA_anonymous, A68_VC  *ReturnedValue);

A68_VOID  QVJAELA_sort_id(A68_INT  Sort, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  JWJAELA_generator(A68_BOOL  IWJAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  RWJAELA_generator(A68_BOOL  QWJAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  XWJAELA_generator(A68_BOOL  WWJAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  LXJAELA_generator(A68_BOOL  KXJAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_244 * ZXJAELA_assignment(A68_244 * XXJAELA_anonymous, A68_244  YXJAELA_anonymous);

A68_BOOL  SZJAELA_(A68_92  P1, A68_92  P2);

A68_BOOL  XZJAELA_(A68_251  Cr1, A68_251  Cr2);

A68_VOID  BAKAELA_ctos(A68_92  Ctn, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  GAKAELA_generator(A68_BOOL  EAKAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  UAKAELA_ctos(A68_251  Cr, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  ZAKAELA_generator(A68_BOOL  XAKAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  NBKAELA_ctn(A68_251  Cr, A68_92  *ReturnedValue);

A68_INT  QBKAELA_lib_size(void);

A68_INT  SBKAELA_lib_free(void);

A68_INT  UBKAELA_lib_version(void);

A68_BOOL  ZBKAELA_no_text(A68_241 * Ct, A68_108  Msg);

A_STATIC A68_VOID  GCKAELA_generator(A68_BOOL  ECKAELA_anonymous, A68_180  *ReturnedValue, void *NonLocals);

A68_VOID  OCKAELA_printversion(A68_108  Msg);

A68_VOID  ZCKAELA_resetlibchanged(A68_108  Msg);

A68_VOID  GDKAELA_settimedate(A68_VC * Timeid, A68_VC * Dateid);

A68_VOID  MDKAELA_setlibchanged(A68_108  Msg);

A68_244 * RDKAELA_get_library(void);

A68_241 * UDKAELA_get_context(A68_VC  Name);

A68_VOID  AEKAELA_get_region(A68_241 * Ct, A68_VC  Region, A68_251  *ReturnedValue);

A68_238 * HEKAELA_get_imports(A68_251  Cr);

A68_237 * LEKAELA_get_binding(A68_251  Cr, A68_VC  Rename);

A68_BOOL  REKAELA_check_text(A68_241 * Ct, A68_108  Msg);

A68_241 * XEKAELA_check_context(A68_VC  Name, A68_108  Msg);

A68_VOID  FFKAELA_check_region(A68_241 * Ct, A68_VC  Region, A68_108  Msg, A68_251  *ReturnedValue);

A68_VOID  OFKAELA_check_selected(A68_92  Ctname, A68_108  Msg, A68_251  *ReturnedValue);

A68_237 * BGKAELA_check_binding(A68_251  Cr, A68_VC  Rename, A68_108  Msg);

A_STATIC A68_VOID  QTJAELA_generator(A68_BOOL  PTJAELA_anonymous, A68_180  *ReturnedValue)
{ 
A68_180  RTJAELA;  /* clause result */
A68_180  STJAELA;  /* OPERATORS - dynamic generator */
{ 
 /* line 99: */
STJAELA.upb = 6 ;
( PTJAELA_anonymous? A_VLOC(A68_179 ,STJAELA): A_VHEAP(A68_179 ,STJAELA) );
RTJAELA = STJAELA;
} 
*ReturnedValue = (RTJAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  UTJAELA_generator(A68_BOOL  TTJAELA_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  VTJAELA;  /* clause result */
A68_32  WTJAELA;  /* OPERATORS - dynamic generator */
{ 
 /* line 100: */
WTJAELA.upb = 3 ;
( TTJAELA_anonymous? A_VLOC(A68_INT ,WTJAELA): A_VHEAP(A68_INT ,WTJAELA) );
VTJAELA = WTJAELA;
} 
*ReturnedValue = (VTJAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  GAKAELA_generator(A68_BOOL  EAKAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((HAKAELA_generator *)NonLocals)->x)
{ 
A68_VC  IAKAELA;  /* clause result */
A68_VC  JAKAELA;  /* OPERATORS - dynamic generator */
{ 
JAKAELA.upb = ((NL(CAKAELA_a).upb+NL(DAKAELA_b).upb)+1) ;
( EAKAELA_anonymous? A_VLOC(A68_CHAR ,JAKAELA): A_VHEAP(A68_CHAR ,JAKAELA) );
IAKAELA = JAKAELA;
} 
*ReturnedValue = (IAKAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  ZAKAELA_generator(A68_BOOL  XAKAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ABKAELA_generator *)NonLocals)->x)
{ 
A68_VC  BBKAELA;  /* clause result */
A68_VC  CBKAELA;  /* OPERATORS - dynamic generator */
{ 
CBKAELA.upb = ((NL(VAKAELA_a).upb+NL(WAKAELA_b).upb)+1) ;
( XAKAELA_anonymous? A_VLOC(A68_CHAR ,CBKAELA): A_VHEAP(A68_CHAR ,CBKAELA) );
BBKAELA = CBKAELA;
} 
*ReturnedValue = (BBKAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  GCKAELA_generator(A68_BOOL  ECKAELA_anonymous, A68_180  *ReturnedValue, void *NonLocals)
#define NL(x) (((HCKAELA_generator *)NonLocals)->x)
{ 
A68_180  ICKAELA;  /* clause result */
A68_180  JCKAELA;  /* OPERATORS - dynamic generator */
{ 
JCKAELA.upb = NL(DCKAELA_array_size) ;
( ECKAELA_anonymous? A_VLOC(A68_179 ,JCKAELA): A_VHEAP(A68_179 ,JCKAELA) );
ICKAELA = JCKAELA;
} 
*ReturnedValue = (ICKAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  OTJAELA_generator(A68_BOOL  NTJAELA_anonymous, A68_244  *ReturnedValue)
{ 
A68_249  XTJAELA_anonymous;
A68_180  YTJAELA;  /* avoid structure result */
A68_247 * ZTJAELA;  /* YIELD */
A68_32  AUJAELA;  /* avoid structure result */
A68_248 * BUJAELA;  /* YIELD */
A68_244  CUJAELA;  /* clause result */
{ 
QTJAELA_generator( NTJAELA_anonymous, &YTJAELA );
ZTJAELA = (&((&XTJAELA_anonymous)->Rootptrs)) ;
(*ZTJAELA) = YTJAELA;
UTJAELA_generator( NTJAELA_anonymous, &AUJAELA );
BUJAELA = (&((&XTJAELA_anonymous)->Keys)) ;
(*BUJAELA) = AUJAELA;
CUJAELA = XTJAELA_anonymous;
} 
*ReturnedValue = (CUJAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  OUJAELA_generator(A68_BOOL  NUJAELA_anonymous, A68_242  *ReturnedValue)
{ 
A68_242  PUJAELA;  /* clause result */
A68_242  QUJAELA;  /* OPERATORS - dynamic generator */
{ 
QUJAELA.upb = 0 ;
( NUJAELA_anonymous? A_VLOC(A68_236 ,QUJAELA): A_VHEAP(A68_236 ,QUJAELA) );
PUJAELA = QUJAELA;
} 
*ReturnedValue = (PUJAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  WUJAELA_generator(A68_BOOL  VUJAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  XUJAELA;  /* clause result */
A68_VC  YUJAELA;  /* OPERATORS - dynamic generator */
{ 
YUJAELA.upb = 0 ;
( VUJAELA_anonymous? A_VLOC(A68_CHAR ,YUJAELA): A_VHEAP(A68_CHAR ,YUJAELA) );
XUJAELA = YUJAELA;
} 
*ReturnedValue = (XUJAELA);
return;
} 
#undef NL

A68_VOID  QVJAELA_sort_id(A68_INT  Sort, A68_VC  *ReturnedValue)
{ 
A68_VC  SVJAELA;  /* clause result */
A68_VC  EWJAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(sort_id);
 /* line 127: */
switch ( (Sort-64) )
{ 
case 1: 
SVJAELA = TVJAELA;
break;
case 2: 
SVJAELA = VVJAELA;
break;
case 3: 
SVJAELA = XVJAELA;
break;
case 4: 
SVJAELA = ZVJAELA;
break;
case 5: 
SVJAELA = BWJAELA;
break;
case 6: 
SVJAELA = DWJAELA;
break;
default: 
SVJAELA = A_HVEC(EWJAELA,'?',A68_CHAR );
break;
} 
A_PROC_EXIT(sort_id);
*ReturnedValue = (SVJAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  JWJAELA_generator(A68_BOOL  IWJAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  KWJAELA;  /* clause result */
A68_VC  LWJAELA;  /* OPERATORS - dynamic generator */
{ 
LWJAELA.upb = 4 ;
( IWJAELA_anonymous? A_VLOC(A68_CHAR ,LWJAELA): A_VHEAP(A68_CHAR ,LWJAELA) );
KWJAELA = LWJAELA;
} 
*ReturnedValue = (KWJAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  RWJAELA_generator(A68_BOOL  QWJAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  SWJAELA;  /* clause result */
A68_VC  TWJAELA;  /* OPERATORS - dynamic generator */
{ 
TWJAELA.upb = 0 ;
( QWJAELA_anonymous? A_VLOC(A68_CHAR ,TWJAELA): A_VHEAP(A68_CHAR ,TWJAELA) );
SWJAELA = TWJAELA;
} 
*ReturnedValue = (SWJAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  XWJAELA_generator(A68_BOOL  WWJAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  YWJAELA;  /* clause result */
A68_VC  ZWJAELA;  /* OPERATORS - dynamic generator */
{ 
ZWJAELA.upb = 5 ;
( WWJAELA_anonymous? A_VLOC(A68_CHAR ,ZWJAELA): A_VHEAP(A68_CHAR ,ZWJAELA) );
YWJAELA = ZWJAELA;
} 
*ReturnedValue = (YWJAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  LXJAELA_generator(A68_BOOL  KXJAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  MXJAELA;  /* clause result */
A68_VC  NXJAELA;  /* OPERATORS - dynamic generator */
{ 
NXJAELA.upb = 7 ;
( KXJAELA_anonymous? A_VLOC(A68_CHAR ,NXJAELA): A_VHEAP(A68_CHAR ,NXJAELA) );
MXJAELA = NXJAELA;
} 
*ReturnedValue = (MXJAELA);
return;
} 
#undef NL

A_STATIC A68_244 * ZXJAELA_assignment(A68_244 * XXJAELA_anonymous, A68_244  YXJAELA_anonymous)
{ 
A68_VC * AYJAELA;  /* YIELD */
A68_132 ** BYJAELA;  /* YIELD */
A68_176 ** CYJAELA;  /* YIELD */
A68_92 * DYJAELA;  /* YIELD */
A68_VC * EYJAELA;  /* YIELD */
A68_BOOL * FYJAELA;  /* YIELD */
A68_180  GYJAELA;  /* YIELD */
A68_180  HYJAELA;  /* OPERATORS - assign op */
A68_INT * IYJAELA;  /* YIELD */
A68_VC * JYJAELA;  /* YIELD */
A68_VC * KYJAELA;  /* YIELD */
A68_VC * LYJAELA;  /* YIELD */
A68_VC * MYJAELA;  /* YIELD */
A68_32  NYJAELA;  /* YIELD */
A68_32  OYJAELA;  /* OPERATORS - assign op */
A68_232 ** PYJAELA;  /* YIELD */
A68_243 ** QYJAELA;  /* YIELD */
A68_244 * RYJAELA;  /* clause result */
{ 
AYJAELA = (&(XXJAELA_anonymous->Name)) ;
(*AYJAELA) = YXJAELA_anonymous.Name;
BYJAELA = (&(XXJAELA_anonymous->File)) ;
(*BYJAELA) = YXJAELA_anonymous.File;
CYJAELA = (&(XXJAELA_anonymous->Discfile)) ;
(*CYJAELA) = YXJAELA_anonymous.Discfile;
DYJAELA = (&(XXJAELA_anonymous->Currentct)) ;
(*DYJAELA) = YXJAELA_anonymous.Currentct;
EYJAELA = (&(XXJAELA_anonymous->Libprompt)) ;
(*EYJAELA) = YXJAELA_anonymous.Libprompt;
FYJAELA = (&(XXJAELA_anonymous->Libchanged)) ;
(*FYJAELA) = YXJAELA_anonymous.Libchanged;
GYJAELA = (XXJAELA_anonymous->Rootptrs) ;
HYJAELA = YXJAELA_anonymous.Rootptrs ;
A_VASSIGN2(HYJAELA,GYJAELA,A68_179 );
IYJAELA = (&(XXJAELA_anonymous->Version)) ;
(*IYJAELA) = YXJAELA_anonymous.Version;
JYJAELA = (&(XXJAELA_anonymous->Datecleared)) ;
(*JYJAELA) = YXJAELA_anonymous.Datecleared;
KYJAELA = (&(XXJAELA_anonymous->Timecleared)) ;
(*KYJAELA) = YXJAELA_anonymous.Timecleared;
LYJAELA = (&(XXJAELA_anonymous->Datelastwritten)) ;
(*LYJAELA) = YXJAELA_anonymous.Datelastwritten;
MYJAELA = (&(XXJAELA_anonymous->Timelastwritten)) ;
(*MYJAELA) = YXJAELA_anonymous.Timelastwritten;
NYJAELA = (XXJAELA_anonymous->Keys) ;
OYJAELA = YXJAELA_anonymous.Keys ;
A_VASSIGN2(OYJAELA,NYJAELA,A68_INT );
PYJAELA = (&(XXJAELA_anonymous->Classes)) ;
(*PYJAELA) = YXJAELA_anonymous.Classes;
QYJAELA = (&(XXJAELA_anonymous->Contexts)) ;
(*QYJAELA) = YXJAELA_anonymous.Contexts;
RYJAELA = XXJAELA_anonymous;
} 
return( RYJAELA );
} 
#undef NL

A68_BOOL  SZJAELA_(A68_92  P1, A68_92  P2)
{ 
A68_BOOL  TZJAELA;  /* optbool result */
A68_BOOL  UZJAELA;  /* clause result */
A_PROC_ENTRY(=);
 /* line 161: */
TZJAELA = A_VC_EQ(P1.Context,P2.Context);
if ( TZJAELA )
{TZJAELA = A_VC_EQ(P1.Import,P2.Import);
}
UZJAELA = TZJAELA;
A_PROC_EXIT(=);
return( UZJAELA );
} 
#undef NL

A68_BOOL  XZJAELA_(A68_251  Cr1, A68_251  Cr2)
{ 
A68_BOOL  YZJAELA;  /* optbool result */
A68_BOOL  ZZJAELA;  /* clause result */
A_PROC_ENTRY(=);
 /* line 164: */
 /* line 166: */
YZJAELA = A_VC_EQ((*(&(Cr1.Context->Name))),(*(&(Cr2.Context->Name))));
if ( YZJAELA )
{YZJAELA = A_VC_EQ((*(&(Cr1.Region->Name))),(*(&(Cr2.Region->Name))));
}
ZZJAELA = YZJAELA;
A_PROC_EXIT(=);
return( ZZJAELA );
} 
#undef NL

A68_VOID  BAKAELA_ctos(A68_92  Ctn, A68_VC  *ReturnedValue)
{ 
A68_VC  CAKAELA_a;
A68_VC  DAKAELA_b;
A68_31  FAKAELA_generator;   /* proc value of non-global proc */
A68_VC  KAKAELA;  /* avoid structure result */
A68_VC  LAKAELA_s;
A68_VC  MAKAELA;  /* clause result */
A68_VC  NAKAELA;  /* OPERATORS - trim index */
A68_VC  OAKAELA;  /* YIELD */
A68_INT  PAKAELA;  /* YIELD */
A68_CHAR * QAKAELA;  /* YIELD */
A68_VC  RAKAELA;  /* OPERATORS - trim index */
A68_VC  SAKAELA;  /* YIELD */
A_PROC_ENTRY(ctos);
 /* line 170: */
 /* line 171: */
{ 
CAKAELA_a = Ctn.Context;
DAKAELA_b = Ctn.Import;
 /* line 172: */
A_CLOSURE( FAKAELA_generator, GAKAELA_generator, HAKAELA_generator );
(( HAKAELA_generator * ) ( FAKAELA_generator.nonlocals )) -> CAKAELA_a = CAKAELA_a;
(( HAKAELA_generator * ) ( FAKAELA_generator.nonlocals )) -> DAKAELA_b = DAKAELA_b;
A_CALLPROC(FAKAELA_generator,(A68_FALSE, &KAKAELA),(A68_FALSE, &KAKAELA,(FAKAELA_generator).nonlocals));
LAKAELA_s = KAKAELA;
 /* line 173: */
 /* line 174: */
 /* line 175: */
if ( A_VC_EQ(DAKAELA_b,TTCAOST_nullid) )
{ 
MAKAELA = CAKAELA_a;
} 
else
{ 
OAKAELA = A_VTRIM(NAKAELA,(LAKAELA_s),A_VTSCRIPT(&(NAKAELA.upb),(LAKAELA_s).upb,1,CAKAELA_a.upb)) ;
A_VASSIGN2(CAKAELA_a,OAKAELA,A68_CHAR );
PAKAELA = (CAKAELA_a.upb+1) ;
QAKAELA = (&A_VINDEX(LAKAELA_s,PAKAELA)) ;
(*QAKAELA) = '/';
SAKAELA = A_VTRIM(RAKAELA,(LAKAELA_s),A_VTSCRIPT(&(RAKAELA.upb),(LAKAELA_s).upb,(CAKAELA_a.upb+2),LAKAELA_s.upb)) ;
A_VASSIGN2(DAKAELA_b,SAKAELA,A68_CHAR );
 /* line 176: */
 /* line 177: */
MAKAELA = LAKAELA_s;
} 
} 
A_PROC_EXIT(ctos);
*ReturnedValue = (MAKAELA);
return;
} 
#undef NL

A68_VOID  UAKAELA_ctos(A68_251  Cr, A68_VC  *ReturnedValue)
{ 
A68_VC  VAKAELA_a;
A68_VC  WAKAELA_b;
A68_31  YAKAELA_generator;   /* proc value of non-global proc */
A68_VC  DBKAELA;  /* avoid structure result */
A68_VC  EBKAELA_s;
A68_VC  FBKAELA;  /* clause result */
A68_VC  GBKAELA;  /* OPERATORS - trim index */
A68_VC  HBKAELA;  /* YIELD */
A68_INT  IBKAELA;  /* YIELD */
A68_CHAR * JBKAELA;  /* YIELD */
A68_VC  KBKAELA;  /* OPERATORS - trim index */
A68_VC  LBKAELA;  /* YIELD */
A_PROC_ENTRY(ctos);
 /* line 180: */
 /* line 181: */
{ 
VAKAELA_a = (*(&(Cr.Context->Name)));
WAKAELA_b = (*(&(Cr.Region->Name)));
 /* line 182: */
A_CLOSURE( YAKAELA_generator, ZAKAELA_generator, ABKAELA_generator );
(( ABKAELA_generator * ) ( YAKAELA_generator.nonlocals )) -> VAKAELA_a = VAKAELA_a;
(( ABKAELA_generator * ) ( YAKAELA_generator.nonlocals )) -> WAKAELA_b = WAKAELA_b;
A_CALLPROC(YAKAELA_generator,(A68_FALSE, &DBKAELA),(A68_FALSE, &DBKAELA,(YAKAELA_generator).nonlocals));
EBKAELA_s = DBKAELA;
 /* line 183: */
 /* line 184: */
 /* line 185: */
if ( A_VC_EQ(WAKAELA_b,TTCAOST_nullid) )
{ 
FBKAELA = VAKAELA_a;
} 
else
{ 
HBKAELA = A_VTRIM(GBKAELA,(EBKAELA_s),A_VTSCRIPT(&(GBKAELA.upb),(EBKAELA_s).upb,1,VAKAELA_a.upb)) ;
A_VASSIGN2(VAKAELA_a,HBKAELA,A68_CHAR );
IBKAELA = (VAKAELA_a.upb+1) ;
JBKAELA = (&A_VINDEX(EBKAELA_s,IBKAELA)) ;
(*JBKAELA) = '/';
LBKAELA = A_VTRIM(KBKAELA,(EBKAELA_s),A_VTSCRIPT(&(KBKAELA.upb),(EBKAELA_s).upb,(VAKAELA_a.upb+2),EBKAELA_s.upb)) ;
A_VASSIGN2(WAKAELA_b,LBKAELA,A68_CHAR );
 /* line 186: */
 /* line 187: */
FBKAELA = EBKAELA_s;
} 
} 
A_PROC_EXIT(ctos);
*ReturnedValue = (FBKAELA);
return;
} 
#undef NL

A68_VOID  NBKAELA_ctn(A68_251  Cr, A68_92  *ReturnedValue)
{ 
A68_92  OBKAELA;  /* collateral clause result */
A68_92  PBKAELA;  /* clause result */
A_PROC_ENTRY(ctn);
OBKAELA.Context = (*(&(Cr.Context->Name)));
OBKAELA.Import = (*(&(Cr.Region->Name)));
PBKAELA = OBKAELA;
A_PROC_EXIT(ctn);
*ReturnedValue = (PBKAELA);
return;
} 
#undef NL

A68_INT  QBKAELA_lib_size(void)
{ 
A68_INT  RBKAELA;  /* clause result */
A_PROC_ENTRY(lib_size);
RBKAELA = BLEAELA_discfile_size((*(&(TYJAELA_discfile->Database))));
A_PROC_EXIT(lib_size);
return( RBKAELA );
} 
#undef NL

A68_INT  SBKAELA_lib_free(void)
{ 
A68_INT  TBKAELA;  /* clause result */
A_PROC_ENTRY(lib_free);
TBKAELA = ELEAELA_size_of_free_space((*(&(TYJAELA_discfile->Database))));
A_PROC_EXIT(lib_free);
return( TBKAELA );
} 
#undef NL

A68_INT  UBKAELA_lib_version(void)
{ 
A68_INT  VBKAELA;  /* clause result */
A68_INT  WBKAELA;  /* clause result */
A_PROC_ENTRY(lib_version);
if ( (*(&(HXJAELA_library->Libchanged))) )
{ 
VBKAELA = 1;
} 
else
{ 
VBKAELA = 0;
} 
WBKAELA = ((*(&(HXJAELA_library->Version)))+VBKAELA);
A_PROC_EXIT(lib_version);
return( WBKAELA );
} 
#undef NL

A68_BOOL  ZBKAELA_no_text(A68_241 * Ct, A68_108  Msg)
{ 
A68_179  ACKAELA_dp;
A68_242  BCKAELA;  /* != */
A68_BOOL  CCKAELA;  /* clause result */
A68_INT  DCKAELA_array_size;
A68_246  FCKAELA_generator;   /* proc value of non-global proc */
A68_180  LCKAELA;  /* avoid structure result */
A68_180  KCKAELA_dps;
A68_INT  MCKAELA;  /* YIELD */
A_PROC_ENTRY(no_text);
 /* line 200: */
 /* line 201: */
{ 
ACKAELA_dp = (*(&(Ct->Val)));
 /* line 202: */
 /* line 203: */
BCKAELA = (*(&(Ct->Decls))) ;
if ( ! A_VSTRUCTCOMP(BCKAELA,UUJAELA_nildecls) )
{ 
 /* line 204: */
CCKAELA = ((*(&(Ct->Decls))).upb==0);
} 
else
{ 
 /* line 205: */
if ( UXIAELA_isnilptr(TYJAELA_discfile, ACKAELA_dp) )
{ 
 /* line 206: */
CCKAELA = A68_TRUE;
} 
else
{ 
DCKAELA_array_size = UEJAELA_ndiscptrs(TYJAELA_discfile, ACKAELA_dp, Msg);
 /* line 207: */
A_CLOSURE( FCKAELA_generator, GCKAELA_generator, HCKAELA_generator );
(( HCKAELA_generator * ) ( FCKAELA_generator.nonlocals )) -> DCKAELA_array_size = DCKAELA_array_size;
A_CALLPROC(FCKAELA_generator,(A68_TRUE, &LCKAELA),(A68_TRUE, &LCKAELA,(FCKAELA_generator).nonlocals));
KCKAELA_dps = LCKAELA;
 /* line 208: */
FFJAELA_myreaddiscptrs(TYJAELA_discfile, KCKAELA_dps, ACKAELA_dp, Msg);
 /* line 209: */
 /* line 210: */
 /* line 211: */
MCKAELA = 1 ;
CCKAELA = (PEJAELA_nchars(TYJAELA_discfile, (*(&A_VINDEX(KCKAELA_dps,MCKAELA))), Msg)==1);
} 
} 
} 
A_PROC_EXIT(no_text);
return( CCKAELA );
} 
#undef NL

A68_VOID  OCKAELA_printversion(A68_108  Msg)
{ 
A68_109  PCKAELA;  /* avoid structure result */
A68_265  QCKAELA;  /* collateral clause result */
A68_VC  TCKAELA;  /* avoid structure result */
A68_46  WCKAELA;  /* OPERATORS - istruct -> vector */
A68_109  XCKAELA;  /* avoid structure result */
A_PROC_ENTRY(printversion);
 /* line 218: */
 /* line 219: */
{ 
LIBAELA_lib_msg( 2, &PCKAELA );
A_CALLPROC(Msg,(PCKAELA, VJAAOSI_nullmsg),(PCKAELA, VJAAOSI_nullmsg,(Msg).nonlocals));
 /* line 220: */
 /* line 221: */
QCKAELA.data[0] = SCKAELA;
QCKAELA.data[1] = (*(&(HXJAELA_library->Name)));
JIBAOST_version_str( UBKAELA_lib_version(), &TCKAELA );
QCKAELA.data[2] = TCKAELA;
QCKAELA.data[3] = VCKAELA;
 /* line 222: */
LIBAELA_lib_msg( 30, &XCKAELA );
A_CALLPROC(Msg,(XCKAELA, A_HISVEC(WCKAELA,QCKAELA,4,A68_VC )),(XCKAELA, A_HISVEC(WCKAELA,QCKAELA,4,A68_VC ),(Msg).nonlocals));
} 
A_PROC_EXIT(printversion);
return;
} 
#undef NL

A68_VOID  ZCKAELA_resetlibchanged(A68_108  Msg)
{ 
A68_BOOL * ADKAELA;  /* YIELD */
A68_VC  BDKAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  CDKAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_109  DDKAELA;  /* avoid structure result */
A_PROC_ENTRY(resetlibchanged);
 /* line 225: */
 /* line 226: */
{ 
ADKAELA = (&(HXJAELA_library->Libchanged)) ;
(*ADKAELA) = A68_FALSE;
 /* line 227: */
LIBAELA_lib_msg( 25, &DDKAELA );
A_CALLPROC(Msg,(DDKAELA, A_HVEC(CDKAELA,A_HVEC(BDKAELA,'F',A68_CHAR ),A68_VC )),(DDKAELA, A_HVEC(CDKAELA,A_HVEC(BDKAELA,'F',A68_CHAR ),A68_VC ),(Msg).nonlocals));
 /* line 228: */
 /* line 229: */
OCKAELA_printversion(Msg);
} 
A_PROC_EXIT(resetlibchanged);
return;
} 
#undef NL

A68_VOID  GDKAELA_settimedate(A68_VC * Timeid, A68_VC * Dateid)
{ 
A68_VC  HDKAELA;  /* avoid structure result */
A68_VC  IDKAELA;  /* avoid structure result */
A68_VC  JDKAELA;  /* avoid structure result */
A68_VC  KDKAELA;  /* avoid structure result */
A_PROC_ENTRY(settimedate);
 /* line 232: */
 /* line 233: */
{ 
FDDAOST_date( DZCAOST_seconds(), &HDKAELA );
RSCAOST_makeid( HDKAELA, &IDKAELA );
(*Dateid) = IDKAELA;
 /* line 234: */
 /* line 235: */
EADAOST_time( DZCAOST_seconds(), &JDKAELA );
RSCAOST_makeid( JDKAELA, &KDKAELA );
(*Timeid) = KDKAELA;
} 
A_PROC_EXIT(settimedate);
return;
} 
#undef NL

A68_VOID  MDKAELA_setlibchanged(A68_108  Msg)
{ 
A68_BOOL * NDKAELA;  /* YIELD */
A68_VC  ODKAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  PDKAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_109  QDKAELA;  /* avoid structure result */
A_PROC_ENTRY(setlibchanged);
 /* line 238: */
 /* line 239: */
{ 
NDKAELA = (&(HXJAELA_library->Libchanged)) ;
(*NDKAELA) = A68_TRUE;
 /* line 240: */
LIBAELA_lib_msg( 25, &QDKAELA );
A_CALLPROC(Msg,(QDKAELA, A_HVEC(PDKAELA,A_HVEC(ODKAELA,'T',A68_CHAR ),A68_VC )),(QDKAELA, A_HVEC(PDKAELA,A_HVEC(ODKAELA,'T',A68_CHAR ),A68_VC ),(Msg).nonlocals));
 /* line 241: */
 /* line 242: */
GDKAELA_settimedate((&(HXJAELA_library->Timelastwritten)), (&(HXJAELA_library->Datelastwritten)));
} 
A_PROC_EXIT(setlibchanged);
return;
} 
#undef NL

A68_244 * RDKAELA_get_library(void)
{ 
A68_244 * SDKAELA;  /* clause result */
A_PROC_ENTRY(get_library);
SDKAELA = HXJAELA_library;
A_PROC_EXIT(get_library);
return( SDKAELA );
} 
#undef NL

A68_241 * UDKAELA_get_context(A68_VC  Name)
{ 
A68_243 * VDKAELA_c;
A68_BOOL  WDKAELA;  /* optbool result */
A68_241 * XDKAELA;  /* clause result */
A_PROC_ENTRY(get_context);
 /* line 252: */
 /* line 253: */
{ 
VDKAELA_c = (*(&(HXJAELA_library->Contexts)));
 /* line 254: */
for ( ;; )
{ 
WDKAELA = (VDKAELA_c!=EVJAELA_nilcontexts);
if ( WDKAELA )
{ /* line 255: */
WDKAELA = !A_VC_EQ((*(&((&(VDKAELA_c->Context))->Name))),Name);
}
if ( !(WDKAELA) ) break;
VDKAELA_c = (*(&(VDKAELA_c->Rest)));
}
 /* line 256: */
if ( (VDKAELA_c==EVJAELA_nilcontexts) )
{ 
XDKAELA = DVJAELA_nilcontxt;
} 
else
{ 
 /* line 257: */
XDKAELA = (&(VDKAELA_c->Context));
} 
} 
A_PROC_EXIT(get_context);
return( XDKAELA );
} 
#undef NL

A68_VOID  AEKAELA_get_region(A68_241 * Ct, A68_VC  Region, A68_251  *ReturnedValue)
{ 
A68_251  BEKAELA;  /* collateral clause result */
A68_251  CEKAELA;  /* clause result */
A68_240 * DEKAELA_r;
A68_BOOL  EEKAELA;  /* optbool result */
A68_251  FEKAELA;  /* collateral clause result */
A_PROC_ENTRY(get_region);
 /* line 260: */
 /* line 261: */
{ 
 /* line 262: */
if ( (Ct==DVJAELA_nilcontxt) )
{ 
BEKAELA.Context = DVJAELA_nilcontxt;
 /* line 263: */
BEKAELA.Region = BVJAELA_nilregion;
CEKAELA = BEKAELA;
} 
else
{ 
DEKAELA_r = (*(&(Ct->Regions)));
 /* line 264: */
for ( ;; )
{ 
EEKAELA = (DEKAELA_r!=CVJAELA_nilregions);
if ( EEKAELA )
{ /* line 265: */
EEKAELA = !A_VC_EQ((*(&((&(DEKAELA_r->Region))->Name))),Region);
}
if ( !(EEKAELA) ) break;
DEKAELA_r = (*(&(DEKAELA_r->Rest)));
}
 /* line 266: */
FEKAELA.Context = Ct;
if ( (DEKAELA_r==CVJAELA_nilregions) )
{ 
FEKAELA.Region = BVJAELA_nilregion;
} 
else
{ 
 /* line 267: */
 /* line 268: */
FEKAELA.Region = (&(DEKAELA_r->Region));
} 
CEKAELA = FEKAELA;
} 
} 
A_PROC_EXIT(get_region);
*ReturnedValue = (CEKAELA);
return;
} 
#undef NL

A68_238 * HEKAELA_get_imports(A68_251  Cr)
{ 
A68_238 * IEKAELA;  /* clause result */
A_PROC_ENTRY(get_imports);
 /* line 271: */
 /* line 272: */
{ 
if ( (Cr.Region==BVJAELA_nilregion) )
{ 
IEKAELA = GUJAELA_nilimports;
} 
else
{ 
 /* line 273: */
IEKAELA = (*(&(Cr.Region->Imports)));
} 
} 
A_PROC_EXIT(get_imports);
return( IEKAELA );
} 
#undef NL

A68_237 * LEKAELA_get_binding(A68_251  Cr, A68_VC  Rename)
{ 
A68_238 * MEKAELA_i;
A68_BOOL  NEKAELA;  /* optbool result */
A68_237 * OEKAELA;  /* clause result */
A_PROC_ENTRY(get_binding);
 /* line 276: */
 /* line 277: */
{ 
MEKAELA_i = HEKAELA_get_imports(Cr);
 /* line 278: */
for ( ;; )
{ 
NEKAELA = (MEKAELA_i!=GUJAELA_nilimports);
if ( NEKAELA )
{ /* line 279: */
NEKAELA = A_VC_NE((*(&((&(MEKAELA_i->Binding))->Rename))),Rename);
}
if ( !(NEKAELA) ) break;
MEKAELA_i = (*(&(MEKAELA_i->Rest)));
}
 /* line 280: */
if ( (MEKAELA_i==GUJAELA_nilimports) )
{ 
OEKAELA = FUJAELA_nilbinding;
} 
else
{ 
 /* line 281: */
OEKAELA = (&(MEKAELA_i->Binding));
} 
} 
A_PROC_EXIT(get_binding);
return( OEKAELA );
} 
#undef NL

A68_BOOL  REKAELA_check_text(A68_241 * Ct, A68_108  Msg)
{ 
A68_46  SEKAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_109  TEKAELA;  /* avoid structure result */
A68_BOOL  UEKAELA;  /* clause result */
A_PROC_ENTRY(check_text);
 /* line 288: */
 /* line 289: */
{ 
 /* line 290: */
if ( ZBKAELA_no_text(Ct, Msg) )
{ 
LIBAELA_lib_msg( 14, &TEKAELA );
A_CALLPROC(Msg,(TEKAELA, A_HVEC(SEKAELA,(*(&(Ct->Name))),A68_VC )),(TEKAELA, A_HVEC(SEKAELA,(*(&(Ct->Name))),A68_VC ),(Msg).nonlocals));
 /* line 291: */
UEKAELA = A68_FALSE;
} 
else
{ 
 /* line 292: */
 /* line 293: */
UEKAELA = A68_TRUE;
} 
} 
A_PROC_EXIT(check_text);
return( UEKAELA );
} 
#undef NL

A68_241 * XEKAELA_check_context(A68_VC  Name, A68_108  Msg)
{ 
A68_241 * YEKAELA_ct;
A68_46  ZEKAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_109  AFKAELA;  /* avoid structure result */
A68_241 * BFKAELA;  /* clause result */
A_PROC_ENTRY(check_context);
 /* line 296: */
 /* line 297: */
{ 
YEKAELA_ct = UDKAELA_get_context(Name);
 /* line 298: */
 /* line 299: */
if ( (YEKAELA_ct==DVJAELA_nilcontxt) )
{ 
 /* line 300: */
LIBAELA_lib_msg( 15, &AFKAELA );
A_CALLPROC(Msg,(AFKAELA, A_HVEC(ZEKAELA,Name,A68_VC )),(AFKAELA, A_HVEC(ZEKAELA,Name,A68_VC ),(Msg).nonlocals));
} 
 /* line 301: */
 /* line 302: */
BFKAELA = YEKAELA_ct;
} 
A_PROC_EXIT(check_context);
return( BFKAELA );
} 
#undef NL

A68_VOID  FFKAELA_check_region(A68_241 * Ct, A68_VC  Region, A68_108  Msg, A68_251  *ReturnedValue)
{ 
A68_251  GFKAELA;  /* avoid structure result */
A68_251  HFKAELA_cr;
A68_274  IFKAELA;  /* collateral clause result */
A68_46  JFKAELA;  /* OPERATORS - istruct -> vector */
A68_109  KFKAELA;  /* avoid structure result */
A68_251  LFKAELA;  /* clause result */
A_PROC_ENTRY(check_region);
 /* line 305: */
 /* line 306: */
{ 
AEKAELA_get_region( Ct, Region, &GFKAELA );
HFKAELA_cr = GFKAELA;
 /* line 307: */
 /* line 308: */
if ( (HFKAELA_cr.Region==BVJAELA_nilregion) )
{ 
 /* line 309: */
IFKAELA.data[0] = Region;
IFKAELA.data[1] = (*(&(Ct->Name)));
 /* line 310: */
LIBAELA_lib_msg( 16, &KFKAELA );
A_CALLPROC(Msg,(KFKAELA, A_HISVEC(JFKAELA,IFKAELA,2,A68_VC )),(KFKAELA, A_HISVEC(JFKAELA,IFKAELA,2,A68_VC ),(Msg).nonlocals));
} 
 /* line 311: */
 /* line 312: */
LFKAELA = HFKAELA_cr;
} 
A_PROC_EXIT(check_region);
*ReturnedValue = (LFKAELA);
return;
} 
#undef NL

A68_VOID  OFKAELA_check_selected(A68_92  Ctname, A68_108  Msg, A68_251  *ReturnedValue)
{ 
A68_241 * PFKAELA_ct;
A68_251  QFKAELA;  /* avoid structure result */
A68_251  RFKAELA_cr;
A68_46  SFKAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_109  TFKAELA;  /* avoid structure result */
A68_274  UFKAELA;  /* collateral clause result */
A68_46  VFKAELA;  /* OPERATORS - istruct -> vector */
A68_109  WFKAELA;  /* avoid structure result */
A68_251  XFKAELA;  /* clause result */
A_PROC_ENTRY(check_selected);
 /* line 315: */
 /* line 316: */
{ 
PFKAELA_ct = XEKAELA_check_context(Ctname.Context, Msg);
 /* line 317: */
AEKAELA_get_region( PFKAELA_ct, Ctname.Import, &QFKAELA );
RFKAELA_cr = QFKAELA;
 /* line 318: */
 /* line 319: */
if ( (RFKAELA_cr.Region==BVJAELA_nilregion) )
{ 
 /* line 320: */
if ( A_VC_EQ(Ctname.Import,TTCAOST_nullid) )
{ 
 /* line 321: */
 /* line 322: */
LIBAELA_lib_msg( 17, &TFKAELA );
A_CALLPROC(Msg,(TFKAELA, A_HVEC(SFKAELA,Ctname.Context,A68_VC )),(TFKAELA, A_HVEC(SFKAELA,Ctname.Context,A68_VC ),(Msg).nonlocals));
} 
else
{ 
 /* line 323: */
UFKAELA.data[0] = Ctname.Import;
UFKAELA.data[1] = Ctname.Context;
 /* line 324: */
 /* line 325: */
LIBAELA_lib_msg( 16, &WFKAELA );
A_CALLPROC(Msg,(WFKAELA, A_HISVEC(VFKAELA,UFKAELA,2,A68_VC )),(WFKAELA, A_HISVEC(VFKAELA,UFKAELA,2,A68_VC ),(Msg).nonlocals));
} 
} 
 /* line 326: */
 /* line 327: */
XFKAELA = RFKAELA_cr;
} 
A_PROC_EXIT(check_selected);
*ReturnedValue = (XFKAELA);
return;
} 
#undef NL

A68_237 * BGKAELA_check_binding(A68_251  Cr, A68_VC  Rename, A68_108  Msg)
{ 
A68_237 * CGKAELA_b;
A68_46  DGKAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_109  EGKAELA;  /* avoid structure result */
A68_237 * FGKAELA;  /* clause result */
A_PROC_ENTRY(check_binding);
 /* line 331: */
 /* line 332: */
{ 
CGKAELA_b = LEKAELA_get_binding(Cr, Rename);
 /* line 333: */
 /* line 334: */
if ( (CGKAELA_b==FUJAELA_nilbinding) )
{ 
 /* line 335: */
LIBAELA_lib_msg( 19, &EGKAELA );
A_CALLPROC(Msg,(EGKAELA, A_HVEC(DGKAELA,Rename,A68_VC )),(EGKAELA, A_HVEC(DGKAELA,Rename,A68_VC ),(Msg).nonlocals));
} 
 /* line 336: */
 /* line 337: */
FGKAELA = CGKAELA_b;
} 
A_PROC_EXIT(check_binding);
return( FGKAELA );
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void FTJAELA(void)   /* initialise DECS libmodes */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/libmodes.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/databasebuffers.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/ostools/assoc/mfiles/testmode.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_245  DUJAELA;  /* procedure value */
A68_236  IUJAELA;  /* collateral clause result */
A68_VC  JUJAELA;  /* OPERATORS - nil -> mode */
A68_54  KUJAELA;  /* OPERATORS - nil -> mode */
A68_VC  LUJAELA;  /* OPERATORS - nil -> mode */
A68_242  SUJAELA;  /* avoid structure result */
A68_242  TUJAELA;  /* OPERATORS - nil -> mode */
A68_VC  AVJAELA;  /* avoid structure result */
A68_92  HWJAELA;  /* collateral clause result */
A68_VC  NWJAELA;  /* avoid structure result */
A68_VC  PWJAELA;  /* OPERATORS - assign op */
A68_VC  UWJAELA;  /* avoid structure result */
A68_VC  BXJAELA;  /* avoid structure result */
A68_VC  EXJAELA;  /* OPERATORS - assign op */
A68_244  FXJAELA;  /* avoid structure result */
A68_244 * GXJAELA;  /* staticpart generator */
A68_244  IXJAELA;  /* collateral clause result */
A68_176  JXJAELA;  /* collateral clause result */
A68_VC  PXJAELA;  /* avoid structure result */
A68_VC  RXJAELA;  /* OPERATORS - assign op */
A68_176 * SXJAELA;  /* YIELD */
A68_256  TXJAELA;  /* collateral clause result */
A68_180  UXJAELA;  /* OPERATORS - istruct -> vector */
A68_257  VXJAELA;  /* collateral clause result */
A68_32  WXJAELA;  /* OPERATORS - istruct -> vector */
A68_INT  VYJAELA;  /* YIELD */
A68_INT  XYJAELA;  /* YIELD */
A68_INT  ZYJAELA;  /* YIELD */
A68_INT  BZJAELA;  /* YIELD */
A68_INT  DZJAELA;  /* YIELD */
A68_INT  FZJAELA;  /* YIELD */
A68_32  HZJAELA;  /* OPERATORS - simple index */
A68_INT  IZJAELA;  /* YIELD */
A68_32  KZJAELA;  /* OPERATORS - simple index */
A68_INT  LZJAELA;  /* YIELD */
A68_32  NZJAELA;  /* OPERATORS - simple index */
A68_INT  OZJAELA;  /* YIELD */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
NWIAELA();   /* USE databasebuffers */
PCAAOST();   /* USE osinterface */
QFBAOST();   /* USE testmode */
JFAAOSI();   /* USE messageproc */
JSCAOST();   /* USE basics */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ella/assoc/./a68files/libmodes.a68";
A_config.translation_time = "Tue Apr  4 10:34:17 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "ETJAELA (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:34:17 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS libmodes);
UEAALIB_a68config(LGAALIB_configinfo, JTJAELA);
 /* line 58: */
 /* line 59: */
 /* line 61: */
KTJAELA_nilclasses = (A68_232 *)A68_NIL;
 /* line 66: */
 /* line 69: */
 /* line 71: */
LTJAELA_nildeclattributes = (A68_233 *)A68_NIL;
 /* line 74: */
 /* line 96: */
DUJAELA.fn.fn_global = OTJAELA_generator;
DUJAELA.nonlocals = A68_NIL;
MTJAELA_anonymous = DUJAELA;
 /* line 103: */
EUJAELA_nilsource = (A68_234 *)A68_NIL;
 /* line 104: */
FUJAELA_nilbinding = (A68_237 *)A68_NIL;
 /* line 105: */
GUJAELA_nilimports = (A68_238 *)A68_NIL;
 /* line 106: */
HUJAELA_niluses = (A68_235 *)A68_NIL;
 /* line 107: */
IUJAELA.Sort = 0;
IUJAELA.Name = A_VVAC(JUJAELA);
IUJAELA.Export = A68_FALSE;
IUJAELA.Import = A68_FALSE;
IUJAELA.Assemble = A_VVAC(KUJAELA);
IUJAELA.Status = 0;
IUJAELA.Version = 0;
IUJAELA.Il = A_VVAC(LUJAELA);
IUJAELA.Uses = HUJAELA_niluses;
MUJAELA_nulldecl = IUJAELA;
 /* line 108: */
OUJAELA_generator( A68_TRUE, &SUJAELA );
RUJAELA_nodecls = SUJAELA;
 /* line 109: */
UUJAELA_nildecls = (A_VVAC(TUJAELA));
 /* line 110: */
WUJAELA_generator( A68_TRUE, &AVJAELA );
ZUJAELA_nospecs = AVJAELA;
 /* line 111: */
BVJAELA_nilregion = (A68_239 *)A68_NIL;
 /* line 112: */
CVJAELA_nilregions = (A68_240 *)A68_NIL;
 /* line 113: */
DVJAELA_nilcontxt = (A68_241 *)A68_NIL;
 /* line 114: */
EVJAELA_nilcontexts = (A68_243 *)A68_NIL;
 /* line 116: */
 /* line 120: */
 /* line 124: */
 /* line 126: */
 /* line 130: */
 /* line 134: */
JWJAELA_generator( A68_FALSE, &NWJAELA );
PWJAELA = OWJAELA ;
A_VASSIGN2(PWJAELA,NWJAELA,A68_CHAR ) ;
HWJAELA.Context = NWJAELA;
RWJAELA_generator( A68_FALSE, &UWJAELA );
HWJAELA.Import = UWJAELA;
VWJAELA_defaultct = HWJAELA;
 /* line 136: */
XWJAELA_generator( A68_TRUE, &BXJAELA );
AXJAELA_us = BXJAELA;
EXJAELA = DXJAELA ;
A_VASSIGN2(EXJAELA,AXJAELA_us,A68_CHAR );
 /* line 138: */
A_CALLPROC(MTJAELA_anonymous,(A68_FALSE, &FXJAELA),(A68_FALSE, &FXJAELA,(MTJAELA_anonymous).nonlocals));
HXJAELA_library = A_HEAP_STATIC(A68_244 ,GXJAELA,FXJAELA);
 /* line 139: */
IXJAELA.Name = AXJAELA_us;
IXJAELA.File = (A68_132 *)A68_NIL;
JXJAELA.Database = (A68_177 *)A68_NIL;
LXJAELA_generator( A68_FALSE, &PXJAELA );
RXJAELA = QXJAELA ;
A_VASSIGN2(RXJAELA,PXJAELA,A68_CHAR ) ;
JXJAELA.Description = PXJAELA;
 /* line 140: */
SXJAELA = A_HEAP(A68_176 ) ;
(*SXJAELA) = JXJAELA ;
IXJAELA.Discfile = SXJAELA;
IXJAELA.Currentct = VWJAELA_defaultct;
IXJAELA.Libprompt = AXJAELA_us;
IXJAELA.Libchanged = A68_FALSE;
TXJAELA.data[0] = UACAELA_nilptr;
TXJAELA.data[1] = UACAELA_nilptr;
TXJAELA.data[2] = UACAELA_nilptr;
TXJAELA.data[3] = UACAELA_nilptr;
TXJAELA.data[4] = UACAELA_nilptr;
 /* line 141: */
TXJAELA.data[5] = UACAELA_nilptr;
IXJAELA.Rootptrs = A_HISVEC(UXJAELA,TXJAELA,6,A68_179 );
IXJAELA.Version = (-1);
IXJAELA.Datecleared = AXJAELA_us;
IXJAELA.Timecleared = AXJAELA_us;
IXJAELA.Datelastwritten = AXJAELA_us;
IXJAELA.Timelastwritten = AXJAELA_us;
VXJAELA.data[0] = (-1);
VXJAELA.data[1] = (-1);
VXJAELA.data[2] = (-1);
IXJAELA.Keys = A_HISVEC(WXJAELA,VXJAELA,3,A68_INT );
IXJAELA.Classes = KTJAELA_nilclasses;
IXJAELA.Contexts = EVJAELA_nilcontexts;
ZXJAELA_assignment(HXJAELA_library, IXJAELA);
 /* line 143: */
SYJAELA_libprompt = (&(HXJAELA_library->Libprompt));
 /* line 144: */
TYJAELA_discfile = (*(&(HXJAELA_library->Discfile)));
 /* line 146: */
UYJAELA_rootptrs = (HXJAELA_library->Rootptrs);
 /* line 147: */
VYJAELA = 1 ;
WYJAELA_ptrlibinfo = (&A_VINDEX(UYJAELA_rootptrs,VYJAELA));
XYJAELA = 2 ;
YYJAELA_ptrcontexts = (&A_VINDEX(UYJAELA_rootptrs,XYJAELA));
 /* line 148: */
ZYJAELA = 3 ;
AZJAELA_ptrimpinfo = (&A_VINDEX(UYJAELA_rootptrs,ZYJAELA));
BZJAELA = 4 ;
CZJAELA_ptrctvalues = (&A_VINDEX(UYJAELA_rootptrs,BZJAELA));
 /* line 149: */
DZJAELA = 5 ;
EZJAELA_ptrattinfo = (&A_VINDEX(UYJAELA_rootptrs,DZJAELA));
FZJAELA = 6 ;
GZJAELA_ptrattributes = (&A_VINDEX(UYJAELA_rootptrs,FZJAELA));
 /* line 153: */
HZJAELA = (HXJAELA_library->Keys) ;
IZJAELA = 1 ;
JZJAELA_body_key = (&A_VINDEX(HZJAELA,IZJAELA));
 /* line 154: */
KZJAELA = (HXJAELA_library->Keys) ;
LZJAELA = 2 ;
MZJAELA_info_key = (&A_VINDEX(KZJAELA,LZJAELA));
 /* line 155: */
NZJAELA = (HXJAELA_library->Keys) ;
OZJAELA = 3 ;
PZJAELA_spacemap_key = (&A_VINDEX(NZJAELA,OZJAELA));
 /* line 160: */
 /* line 163: */
 /* line 169: */
 /* line 179: */
 /* line 189: */
 /* line 192: */
 /* line 194: */
 /* line 196: */
 /* line 197: */
 /* line 199: */
 /* line 217: */
 /* line 224: */
 /* line 231: */
 /* line 237: */
 /* line 249: */
 /* line 251: */
 /* line 259: */
 /* line 270: */
 /* line 275: */
 /* line 287: */
 /* line 295: */
 /* line 304: */
 /* line 314: */
 /* line 330: */
 /* line 340: */
 /* line 341: */
 /* line 362: */
/*SKIP*/;
A_PROC_EXIT(DECS libmodes);
} 
#undef NL
/* end of translation of ./a68files/libmodes.a68 */
