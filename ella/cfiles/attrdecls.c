
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
/* UNAME:CZVAELA */
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
struct A68t128 * Database;
A68_VC  Description;
};
typedef struct A68t127  A68_127 ;    /* STRUCT(REF MODE128,REF MODE26)  */
struct A68t128{
A68_VC  Logical_name;
A68_VC  Db_name;
A68_BITS * Setup;
struct A68t129 * Df;
};
typedef struct A68t128  A68_128 ;    /* STRUCT(REF MODE26,REF MODE26,REF BITS,REF MODE129)  */
A_VECTOR(struct A68t130 ,A68t131);
typedef struct A68t131  A68_131 ;    /* VECTOR [] MODE130 */
struct A68t130{
A68_BITS  Code;
A_PAD_BITS(PAD_24)
A68_INT  First_block;
A_PAD_INT(PAD_25)
A68_INT  First_offset;
A_PAD_INT(PAD_26)
A68_INT  Data_elts;
A_PAD_INT(PAD_27)
A68_INT  Dp_elts;
A_PAD_INT(PAD_28)
A68_INT  Version;
A_PAD_INT(PAD_29)
A68_BITS  Sumcheck;
A_PAD_BITS(PAD_30)
};
typedef struct A68t130  A68_130 ;    /* STRUCT(BITS,INT,INT,INT,INT,INT,BITS)  */
A_VECTOR(struct A68t137 ,A68t136);
typedef struct A68t136  A68_136 ;    /* VECTOR [] MODE137 */
struct A68t138{
A68_INT  Block_num;
A_PAD_INT(PAD_31)
A68_INT  Offset;
A_PAD_INT(PAD_32)
};
typedef struct A68t138  A68_138 ;    /* STRUCT(INT,INT)  */
struct A68t137{
A68_BOOL  Shaky;
A_PAD_BOOL(PAD_33)
struct A68t138  Address;
A68_INT  Data_elts;
A_PAD_INT(PAD_34)
A68_INT  Dp_elts;
A_PAD_INT(PAD_35)
A68_INT  Code;
A_PAD_INT(PAD_36)
A68_INT  Version;
A_PAD_INT(PAD_37)
A68_INT  Read_size;
A_PAD_INT(PAD_38)
};
typedef struct A68t137  A68_137 ;    /* STRUCT(BOOL,MODE138,INT,INT,INT,INT,INT)  */
struct A68t129{
struct A68t130 * Root;
struct A68t130 * Indirs_dp;
struct A68t130 * Freelist_dp;
struct A68t130 * Pagetable_dp;
struct A68t130 * Append_dp;
struct A68t131  Free_block_dps;
struct A68t131  Pagetable_dps;
struct A68t132 ** File;
struct A68t132 ** Test_file;
struct A68t133 * Write_buffer;
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
struct A68t134 * Gc_ptrs;
struct A68t135 * Instore_vars;
struct A68t136  Indirections;
A68_BOOL * Writeable;
A68_BOOL * Last_update_failed;
A68_BOOL * Appending;
A68_BOOL * Collectable;
};
typedef struct A68t129  A68_129 ;    /* STRUCT(REF MODE130,REF MODE130,REF MODE130,REF MODE130,REF MODE130,REF MODE131,REF MODE131,REF REF MODE132,REF REF MODE132,REF MODE133,REF MODE26,REF MODE26,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF MODE32,REF MODE32,REF MODE32,REF MODE134,REF MODE135,REF MODE136,REF BOOL,REF BOOL,REF BOOL,REF BOOL)  */
struct A68t132{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t132  A68_132 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t133{
A68_VC  Buffer;
struct A68t139 * List;
A68_INT * Buffer_ptr;
A68_INT * Upb;
A68_INT * Generation;
};
typedef struct A68t133  A68_133 ;    /* STRUCT(REF MODE26,REF MODE139,REF INT,REF INT,REF INT)  */
struct A68t134{
struct A68t138  Old;
struct A68t138  New;
struct A68t134 * Rest;
};
typedef struct A68t134  A68_134 ;    /* STRUCT(MODE138,MODE138,REF MODE134)  */
struct A68t135{
A68_INT  Indirection;
A_PAD_INT(PAD_39)
struct A68t135 * Rest;
};
typedef struct A68t135  A68_135 ;    /* STRUCT(INT,REF MODE135)  */
struct A68t139{
A68_INT  Lwb;
A_PAD_INT(PAD_40)
A68_INT  Upb;
A_PAD_INT(PAD_41)
struct A68t139 * Rest;
};
typedef struct A68t139  A68_139 ;    /* STRUCT(INT,INT,REF MODE139)  */

A_PROCEDURE(A68_BOOL ,A68t140,(struct A68t128 *,struct A68t130 ,struct A68t130 ),(struct A68t128 *,struct A68t130 ,struct A68t130 ,void *));
typedef struct A68t140  A68_140 ;    /* PROC(REF MODE128,MODE130,MODE130) BOOL */

A_PROCEDURE(A68_INT ,A68t141,(struct A68t128 *,struct A68t130 ),(struct A68t128 *,struct A68t130 ,void *));
typedef struct A68t141  A68_141 ;    /* PROC(REF MODE128,MODE130) INT */

A_PROCEDURE(A68_VOID ,A68t142,(struct A68t128 *,struct A68t130 *),(struct A68t128 *,struct A68t130 *,void *));
typedef struct A68t142  A68_142 ;    /* PROC(REF MODE128) MODE130 */

A_PROCEDURE(struct A68t132 *,A68t143,(A68_VC ,A68_INT ,struct A68t108 ),(A68_VC ,A68_INT ,struct A68t108 ,void *));
typedef struct A68t143  A68_143 ;    /* PROC(MODE26,INT,MODE108) REF MODE132 */

A_PROCEDURE(A68_VOID ,A68t144,(struct A68t132 *,A68_BOOL ,struct A68t128 *),(struct A68t132 *,A68_BOOL ,struct A68t128 *,void *));
typedef struct A68t144  A68_144 ;    /* PROC(REF MODE132,BOOL) MODE128 */

A_PROCEDURE(A68_BOOL ,A68t145,(struct A68t128 *),(struct A68t128 *,void *));
typedef struct A68t145  A68_145 ;    /* PROC(REF MODE128) BOOL */

A_PROCEDURE(A68_VOID ,A68t146,(struct A68t128 *,struct A68t130 ),(struct A68t128 *,struct A68t130 ,void *));
typedef struct A68t146  A68_146 ;    /* PROC(REF MODE128,MODE130) VOID */

A_PROCEDURE(A68_VOID ,A68t147,(struct A68t128 *,struct A68t130 ,struct A68t108 ),(struct A68t128 *,struct A68t130 ,struct A68t108 ,void *));
typedef struct A68t147  A68_147 ;    /* PROC(REF MODE128,MODE130,MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t148,(struct A68t128 *,struct A68t108 ),(struct A68t128 *,struct A68t108 ,void *));
typedef struct A68t148  A68_148 ;    /* PROC(REF MODE128,MODE108) VOID */

A_PROCEDURE(A68_BOOL ,A68t149,(struct A68t128 *,A68_INT ),(struct A68t128 *,A68_INT ,void *));
typedef struct A68t149  A68_149 ;    /* PROC(REF MODE128,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t150,(struct A68t128 *,A68_INT ,struct A68t108 ),(struct A68t128 *,A68_INT ,struct A68t108 ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(REF MODE128,INT,MODE108) VOID */

A_PROCEDURE(struct A68t132 *,A68t151,(struct A68t128 *),(struct A68t128 *,void *));
typedef struct A68t151  A68_151 ;    /* PROC(REF MODE128) REF MODE132 */

A_PROCEDURE(A68_INT ,A68t152,(struct A68t128 *),(struct A68t128 *,void *));
typedef struct A68t152  A68_152 ;    /* PROC(REF MODE128) INT */

A_PROCEDURE(A68_VOID ,A68t153,(struct A68t128 *),(struct A68t128 *,void *));
typedef struct A68t153  A68_153 ;    /* PROC(REF MODE128) VOID */

A_PROCEDURE(A68_VOID ,A68t154,(struct A68t132 *,struct A68t132 *,struct A68t108 ),(struct A68t132 *,struct A68t132 *,struct A68t108 ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(REF MODE132,REF MODE132,MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t155,(A68_INT ,struct A68t109 *),(A68_INT ,struct A68t109 *,void *));
typedef struct A68t155  A68_155 ;    /* PROC(INT) MODE109 */

A_PROCEDURE(A68_BOOL ,A68t156,(struct A68t127 *,struct A68t130 ),(struct A68t127 *,struct A68t130 ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(REF MODE127,MODE130) BOOL */
struct A68t157{
A68_VC  Rvc;
struct A68t157 * Rest;
};
typedef struct A68t157  A68_157 ;    /* STRUCT(REF MODE26,REF MODE157)  */
struct A68t158{
struct A68t127  Df;
struct A68t157  Head;
struct A68t157 * Current;
A68_INT  Index;
A_PAD_INT(PAD_42)
A68_INT  Type;
A_PAD_INT(PAD_43)
A68_VC  Ident;
A68_INT  Int;
A_PAD_INT(PAD_44)
};
typedef struct A68t158  A68_158 ;    /* STRUCT(MODE127,MODE157,REF MODE157,INT,INT,REF MODE26,INT)  */

A_PROCEDURE(struct A68t158 *,A68t159,(struct A68t127 *,struct A68t87 ,A68_INT ),(struct A68t127 *,struct A68t87 ,A68_INT ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(REF MODE127,MODE87,INT) REF MODE158 */

A_PROCEDURE(A68_VOID ,A68t160,(struct A68t158 *),(struct A68t158 *,void *));
typedef struct A68t160  A68_160 ;    /* PROC(REF MODE158) VOID */

A_PROCEDURE(struct A68t158 *,A68t161,(struct A68t127 *,struct A68t130 ),(struct A68t127 *,struct A68t130 ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(REF MODE127,MODE130) REF MODE158 */

A_PROCEDURE(A68_CHAR ,A68t162,(struct A68t158 *),(struct A68t158 *,void *));
typedef struct A68t162  A68_162 ;    /* PROC(REF MODE158) CHAR */

A_PROCEDURE(A68_VOID ,A68t163,(struct A68t158 *,A68_VC ),(struct A68t158 *,A68_VC ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(REF MODE158,REF MODE26) VOID */

A_PROCEDURE(A68_BOOL ,A68t164,(struct A68t158 *),(struct A68t158 *,void *));
typedef struct A68t164  A68_164 ;    /* PROC(REF MODE158) BOOL */

A_PROCEDURE(A68_INT ,A68t165,(struct A68t158 *),(struct A68t158 *,void *));
typedef struct A68t165  A68_165 ;    /* PROC(REF MODE158) INT */

A_PROCEDURE(A68_VOID ,A68t166,(struct A68t158 *,A68_VC *),(struct A68t158 *,A68_VC *,void *));
typedef struct A68t166  A68_166 ;    /* PROC(REF MODE158) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t167,(struct A68t127 *,struct A68t108 ),(struct A68t127 *,struct A68t108 ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(REF MODE127,MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t168,(struct A68t127 *,A68_VC ,struct A68t108 ,struct A68t130 *),(struct A68t127 *,A68_VC ,struct A68t108 ,struct A68t130 *,void *));
typedef struct A68t168  A68_168 ;    /* PROC(REF MODE127,MODE26,MODE108) MODE130 */

A_PROCEDURE(A68_VOID ,A68t169,(struct A68t127 *,struct A68t131 ,struct A68t108 ,struct A68t130 *),(struct A68t127 *,struct A68t131 ,struct A68t108 ,struct A68t130 *,void *));
typedef struct A68t169  A68_169 ;    /* PROC(REF MODE127,MODE131,MODE108) MODE130 */

A_PROCEDURE(A68_INT ,A68t170,(struct A68t127 *,struct A68t130 ,struct A68t108 ),(struct A68t127 *,struct A68t130 ,struct A68t108 ,void *));
typedef struct A68t170  A68_170 ;    /* PROC(REF MODE127,MODE130,MODE108) INT */

A_PROCEDURE(A68_VOID ,A68t171,(struct A68t127 *,A68_VC ,struct A68t130 ,struct A68t108 ),(struct A68t127 *,A68_VC ,struct A68t130 ,struct A68t108 ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(REF MODE127,REF MODE26,MODE130,MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t172,(struct A68t127 *,struct A68t131 ,struct A68t130 ,struct A68t108 ),(struct A68t127 *,struct A68t131 ,struct A68t130 ,struct A68t108 ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(REF MODE127,REF MODE131,MODE130,MODE108) VOID */

A_PROCEDURE(struct A68t158 *,A68t173,(struct A68t127 *,struct A68t87 ),(struct A68t127 *,struct A68t87 ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(REF MODE127,MODE87) REF MODE158 */

A_PROCEDURE(A68_VOID ,A68t174,(struct A68t158 *,struct A68t108 ),(struct A68t158 *,struct A68t108 ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(REF MODE158,MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t175,(struct A68t158 *,struct A68t108 ,struct A68t130 *),(struct A68t158 *,struct A68t108 ,struct A68t130 *,void *));
typedef struct A68t175  A68_175 ;    /* PROC(REF MODE158,MODE108) MODE130 */

A_PROCEDURE(A68_INT ,A68t176,(A68_CHAR ,struct A68t158 *,struct A68t108 ),(A68_CHAR ,struct A68t158 *,struct A68t108 ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(CHAR,REF MODE158,MODE108) INT */

A_PROCEDURE(A68_INT ,A68t177,(A68_VC ,struct A68t158 *,struct A68t108 ),(A68_VC ,struct A68t158 *,struct A68t108 ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(MODE26,REF MODE158,MODE108) INT */

A_PROCEDURE(A68_INT ,A68t178,(A68_INT ,struct A68t158 *,struct A68t108 ),(A68_INT ,struct A68t158 *,struct A68t108 ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(INT,REF MODE158,MODE108) INT */

A_PROCEDURE(A68_INT ,A68t179,(A68_VC ,struct A68t158 *,struct A68t108 ),(A68_VC ,struct A68t158 *,struct A68t108 ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(REF MODE26,REF MODE158,MODE108) INT */

A_PROCEDURE(A68_INT ,A68t180,(A68_BOOL ,struct A68t158 *,struct A68t108 ),(A68_BOOL ,struct A68t158 *,struct A68t108 ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(BOOL,REF MODE158,MODE108) INT */
struct A68t181{
A68_VC  Name;
A68_VC  Password;
A68_INT  Key;
A_PAD_INT(PAD_45)
A68_BOOL  Login;
A_PAD_BOOL(PAD_46)
struct A68t181 * Rest;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(REF MODE26,REF MODE26,INT,BOOL,REF MODE181)  */
struct A68t182{
A68_INT  Key;
A_PAD_INT(PAD_47)
A68_BOOL  Changed;
A_PAD_BOOL(PAD_48)
struct A68t32  Version;
struct A68t131  Data;
struct A68t182 * Rest;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(INT,BOOL,REF MODE32,REF MODE131,REF MODE182)  */
struct A68t183{
A68_INT  Sort;
A_PAD_INT(PAD_49)
A68_VC  Name;
A68_INT  Version;
A_PAD_INT(PAD_50)
struct A68t183 * Rest;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(INT,REF MODE26,INT,REF MODE183)  */
struct A68t184{
A68_INT  Sort;
A_PAD_INT(PAD_51)
A68_VC  Name;
A68_BOOL  Export;
A_PAD_BOOL(PAD_52)
A68_BOOL  Import;
A_PAD_BOOL(PAD_53)
struct A68t54  Assemble;
A68_INT  Status;
A_PAD_INT(PAD_54)
A68_INT  Version;
A_PAD_INT(PAD_55)
A68_VC  Il;
struct A68t183 * Uses;
};
typedef struct A68t184  A68_184 ;    /* STRUCT(INT,REF MODE26,BOOL,BOOL,REF MODE54,INT,INT,REF MODE26,REF MODE183)  */
struct A68t185{
struct A68t92  Ctn;
A68_VC  Name;
A68_VC  Rename;
A68_INT  Sort;
A_PAD_INT(PAD_56)
struct A68t130  Info;
};
typedef struct A68t185  A68_185 ;    /* STRUCT(MODE92,REF MODE26,REF MODE26,INT,MODE130)  */
struct A68t186{
struct A68t185  Binding;
struct A68t186 * Rest;
};
typedef struct A68t186  A68_186 ;    /* STRUCT(MODE185,REF MODE186)  */
struct A68t187{
A68_VC  Name;
A68_INT  Ctno;
A_PAD_INT(PAD_57)
struct A68t186 * Imports;
};
typedef struct A68t187  A68_187 ;    /* STRUCT(REF MODE26,INT,REF MODE186)  */
struct A68t188{
struct A68t187  Region;
struct A68t188 * Rest;
};
typedef struct A68t188  A68_188 ;    /* STRUCT(MODE187,REF MODE188)  */
A_VECTOR(struct A68t184 ,A68t190);
typedef struct A68t190  A68_190 ;    /* VECTOR [] MODE184 */
struct A68t189{
A68_VC  Name;
struct A68t130  Val;
A68_BOOL  Loadable;
A_PAD_BOOL(PAD_58)
A68_BOOL  Changed;
A_PAD_BOOL(PAD_59)
struct A68t190  Decls;
struct A68t182 * Declattributes;
struct A68t188 * Regions;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(REF MODE26,MODE130,BOOL,BOOL,REF MODE190,REF MODE182,REF MODE188)  */
struct A68t191{
struct A68t189  Context;
struct A68t191 * Rest;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(MODE189,REF MODE191)  */
struct A68t192{
A68_VC  Name;
struct A68t132 * File;
struct A68t127 * Discfile;
struct A68t92  Currentct;
A68_VC  Libprompt;
A68_BOOL  Libchanged;
A_PAD_BOOL(PAD_60)
struct A68t131  Rootptrs;
A68_INT  Version;
A_PAD_INT(PAD_61)
A68_VC  Datecleared;
A68_VC  Timecleared;
A68_VC  Datelastwritten;
A68_VC  Timelastwritten;
struct A68t32  Keys;
struct A68t181 * Classes;
struct A68t191 * Contexts;
};
typedef struct A68t192  A68_192 ;    /* STRUCT(REF MODE26,REF MODE132,REF MODE127,MODE92,REF MODE26,BOOL,MODE131,INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,MODE32,REF MODE181,REF MODE191)  */

A_PROCEDURE(A68_VOID ,A68t193,(A68_BOOL ,struct A68t192 *),(A68_BOOL ,struct A68t192 *,void *));
typedef struct A68t193  A68_193 ;    /* PROC(BOOL) MODE192 */
struct A68t194{
struct A68t189 * Context;
struct A68t187 * Region;
};
typedef struct A68t194  A68_194 ;    /* STRUCT(REF MODE189,REF MODE187)  */
struct A68t195{
A68_VC  Name;
A68_INT  Date;
A_PAD_INT(PAD_62)
};
typedef struct A68t195  A68_195 ;    /* STRUCT(REF MODE26,INT)  */

A_PROCEDURE(A68_BOOL ,A68t196,(struct A68t92 ,struct A68t92 ),(struct A68t92 ,struct A68t92 ,void *));
typedef struct A68t196  A68_196 ;    /* PROC(MODE92,MODE92) BOOL */

A_PROCEDURE(A68_BOOL ,A68t197,(struct A68t194 ,struct A68t194 ),(struct A68t194 ,struct A68t194 ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(MODE194,MODE194) BOOL */

A_PROCEDURE(A68_VOID ,A68t198,(struct A68t92 ,A68_VC *),(struct A68t92 ,A68_VC *,void *));
typedef struct A68t198  A68_198 ;    /* PROC(MODE92) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t199,(struct A68t194 ,A68_VC *),(struct A68t194 ,A68_VC *,void *));
typedef struct A68t199  A68_199 ;    /* PROC(MODE194) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t200,(struct A68t194 ,struct A68t92 *),(struct A68t194 ,struct A68t92 *,void *));
typedef struct A68t200  A68_200 ;    /* PROC(MODE194) MODE92 */

A_PROCEDURE(A68_BOOL ,A68t201,(struct A68t189 *,struct A68t108 ),(struct A68t189 *,struct A68t108 ,void *));
typedef struct A68t201  A68_201 ;    /* PROC(REF MODE189,MODE108) BOOL */

A_PROCEDURE(A68_VOID ,A68t202,(struct A68t108 ),(struct A68t108 ,void *));
typedef struct A68t202  A68_202 ;    /* PROC(MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t203,(A68_VC *,A68_VC *),(A68_VC *,A68_VC *,void *));
typedef struct A68t203  A68_203 ;    /* PROC(REF REF MODE26,REF REF MODE26) VOID */

A_PROCEDURE(struct A68t192 *,A68t204,(void),(void *));
typedef struct A68t204  A68_204 ;    /* PROC REF MODE192 */

A_PROCEDURE(struct A68t189 *,A68t205,(A68_VC ),(A68_VC ,void *));
typedef struct A68t205  A68_205 ;    /* PROC(REF MODE26) REF MODE189 */

A_PROCEDURE(A68_VOID ,A68t206,(struct A68t189 *,A68_VC ,struct A68t194 *),(struct A68t189 *,A68_VC ,struct A68t194 *,void *));
typedef struct A68t206  A68_206 ;    /* PROC(REF MODE189,REF MODE26) MODE194 */

A_PROCEDURE(struct A68t186 *,A68t207,(struct A68t194 ),(struct A68t194 ,void *));
typedef struct A68t207  A68_207 ;    /* PROC(MODE194) REF MODE186 */

A_PROCEDURE(struct A68t185 *,A68t208,(struct A68t194 ,A68_VC ),(struct A68t194 ,A68_VC ,void *));
typedef struct A68t208  A68_208 ;    /* PROC(MODE194,REF MODE26) REF MODE185 */

A_PROCEDURE(struct A68t189 *,A68t209,(A68_VC ,struct A68t108 ),(A68_VC ,struct A68t108 ,void *));
typedef struct A68t209  A68_209 ;    /* PROC(REF MODE26,MODE108) REF MODE189 */

A_PROCEDURE(A68_VOID ,A68t210,(struct A68t189 *,A68_VC ,struct A68t108 ,struct A68t194 *),(struct A68t189 *,A68_VC ,struct A68t108 ,struct A68t194 *,void *));
typedef struct A68t210  A68_210 ;    /* PROC(REF MODE189,REF MODE26,MODE108) MODE194 */

A_PROCEDURE(A68_VOID ,A68t211,(struct A68t92 ,struct A68t108 ,struct A68t194 *),(struct A68t92 ,struct A68t108 ,struct A68t194 *,void *));
typedef struct A68t211  A68_211 ;    /* PROC(MODE92,MODE108) MODE194 */

A_PROCEDURE(struct A68t185 *,A68t212,(struct A68t194 ,A68_VC ,struct A68t108 ),(struct A68t194 ,A68_VC ,struct A68t108 ,void *));
typedef struct A68t212  A68_212 ;    /* PROC(MODE194,REF MODE26,MODE108) REF MODE185 */

A_PROCEDURE(A68_VOID ,A68t213,(A68_VC ,A68_VC ,A68_INT ,A68_INT ,struct A68t108 ),(A68_VC ,A68_VC ,A68_INT ,A68_INT ,struct A68t108 ,void *));
typedef struct A68t213  A68_213 ;    /* PROC(MODE26,MODE26,INT,INT,MODE108) VOID */

A_PROCEDURE(struct A68t181 *,A68t214,(A68_INT ),(A68_INT ,void *));
typedef struct A68t214  A68_214 ;    /* PROC(INT) REF MODE181 */

A_PROCEDURE(A68_VOID ,A68t215,(void),(void *));
typedef struct A68t215  A68_215 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t216,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t216  A68_216 ;    /* PROC(BOOL) VOID */
struct A68t218 ;

A_PROCEDURE(A68_BOOL ,A68t217,(struct A68t218 ),(struct A68t218 ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(MODE218) BOOL */

A_PROCEDURE(A68_BOOL ,A68t218,(A68_VC ,A68_INT ,A68_BOOL ,A68_BOOL ),(A68_VC ,A68_INT ,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t218  A68_218 ;    /* PROC(MODE26,INT,BOOL,BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t219,(A68_VC ,A68_VC ,struct A68t108 ),(A68_VC ,A68_VC ,struct A68t108 ,void *));
typedef struct A68t219  A68_219 ;    /* PROC(MODE26,MODE26,MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t220,(A68_INT ,struct A68t108 ),(A68_INT ,struct A68t108 ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(INT,MODE108) VOID */

A_PROCEDURE(A68_INT ,A68t221,(A68_INT ,A68_VC ,struct A68t108 ),(A68_INT ,A68_VC ,struct A68t108 ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(INT,MODE26,MODE108) INT */

A_PROCEDURE(A68_INT ,A68t222,(A68_VC ,A68_VC ,struct A68t108 ),(A68_VC ,A68_VC ,struct A68t108 ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(MODE26,MODE26,MODE108) INT */

A_PROCEDURE(A68_VOID ,A68t223,(A68_VC ,struct A68t130 ,A68_INT ,struct A68t108 ),(A68_VC ,struct A68t130 ,A68_INT ,struct A68t108 ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(MODE26,MODE130,INT,MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t224,(A68_VC ,A68_INT ,struct A68t108 ,struct A68t130 *),(A68_VC ,A68_INT ,struct A68t108 ,struct A68t130 *,void *));
typedef struct A68t224  A68_224 ;    /* PROC(MODE26,INT,MODE108) MODE130 */

A_PROCEDURE(A68_BOOL ,A68t225,(A68_INT ,struct A68t108 ,struct A68t108 ),(A68_INT ,struct A68t108 ,struct A68t108 ,void *));
typedef struct A68t225  A68_225 ;    /* PROC(INT,MODE108,MODE108) BOOL */

A_PROCEDURE(A68_VOID ,A68t226,(struct A68t215 ),(struct A68t215 ,void *));
typedef struct A68t226  A68_226 ;    /* PROC(MODE215) VOID */

A_PROCEDURE(A68_VOID ,A68t227,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t228,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t228  A68_228 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,56,A68t229);
typedef struct A68t229  A68_229 ;    /* STRUCT 56 CHAR */

A_PROCEDURE(A68_VOID ,A68t230,(A68_VC ,A68_VC ,A68_INT ,struct A68t108 ),(A68_VC ,A68_VC ,A68_INT ,struct A68t108 ,void *));
typedef struct A68t230  A68_230 ;    /* PROC(MODE26,MODE26,INT,MODE108) VOID */

A_PROCEDURE(A68_BOOL ,A68t231,(A68_INT ),(A68_INT ,void *));
typedef struct A68t231  A68_231 ;    /* PROC(INT) BOOL */
A_ISTRUCT(A68_CHAR ,43,A68t232);
typedef struct A68t232  A68_232 ;    /* STRUCT 43 CHAR */

A_PROCEDURE(struct A68t182 *,A68t233,(struct A68t189 *,A68_INT ,struct A68t108 ),(struct A68t189 *,A68_INT ,struct A68t108 ,void *));
typedef struct A68t233  A68_233 ;    /* PROC(REF MODE189,INT,MODE108) REF MODE182 */

A_PROCEDURE(A68_VOID ,A68t234,(A68_BOOL ,struct A68t131 *),(A68_BOOL ,struct A68t131 *,void *));
typedef struct A68t234  A68_234 ;    /* PROC(BOOL) MODE131 */

A_PROCEDURE(A68_VOID ,A68t235,(struct A68t189 *,struct A68t108 ),(struct A68t189 *,struct A68t108 ,void *));
typedef struct A68t235  A68_235 ;    /* PROC(REF MODE189,MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t236,(struct A68t189 *,struct A68t32 ,struct A68t108 ),(struct A68t189 *,struct A68t32 ,struct A68t108 ,void *));
typedef struct A68t236  A68_236 ;    /* PROC(REF MODE189,MODE32,MODE108) VOID */

A_PROCEDURE(A68_BOOL ,A68t237,(struct A68t182 *,struct A68t108 ),(struct A68t182 *,struct A68t108 ,void *));
typedef struct A68t237  A68_237 ;    /* PROC(REF MODE182,MODE108) BOOL */

A_PROCEDURE(A68_BOOL ,A68t238,(struct A68t189 *,struct A68t237 ,struct A68t108 ),(struct A68t189 *,struct A68t237 ,struct A68t108 ,void *));
typedef struct A68t238  A68_238 ;    /* PROC(REF MODE189,MODE237,MODE108) BOOL */

A_PROCEDURE(A68_VOID ,A68t239,(struct A68t189 *,A68_INT ,struct A68t32 ,A68_INT ,struct A68t131 ,struct A68t108 ),(struct A68t189 *,A68_INT ,struct A68t32 ,A68_INT ,struct A68t131 ,struct A68t108 ,void *));
typedef struct A68t239  A68_239 ;    /* PROC(REF MODE189,INT,REF MODE32,INT,REF MODE131,MODE108) VOID */
struct A68t240{
A68_INT  Version;
A_PAD_INT(PAD_63)
struct A68t130  Data;
};
typedef struct A68t240  A68_240 ;    /* STRUCT(INT,MODE130)  */

A_PROCEDURE(A68_VOID ,A68t241,(struct A68t182 *,A68_INT ,struct A68t240 ,struct A68t108 ),(struct A68t182 *,A68_INT ,struct A68t240 ,struct A68t108 ,void *));
typedef struct A68t241  A68_241 ;    /* PROC(REF MODE182,INT,MODE240,MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t242,(struct A68t182 *,A68_INT ,struct A68t108 ,struct A68t240 *),(struct A68t182 *,A68_INT ,struct A68t108 ,struct A68t240 *,void *));
typedef struct A68t242  A68_242 ;    /* PROC(REF MODE182,INT,MODE108) MODE240 */

A_PROCEDURE(A68_VOID ,A68t243,(struct A68t182 *,A68_INT ,struct A68t108 ),(struct A68t182 *,A68_INT ,struct A68t108 ,void *));
typedef struct A68t243  A68_243 ;    /* PROC(REF MODE182,INT,MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t244,(struct A68t189 *,A68_INT ,struct A68t108 ),(struct A68t189 *,A68_INT ,struct A68t108 ,void *));
typedef struct A68t244  A68_244 ;    /* PROC(REF MODE189,INT,MODE108) VOID */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from attrlevel1 --- */
#define RWOAELA_declaration_class 2
#define VWOAELA_perm_life 0
#define WWOAELA_decl_life 1
#define XWOAELA_spec_life 2
#define YWOAELA_body_life 3
extern A68_INT  TWOAELA_class_sort(A68_INT );
extern A68_INT  AXOAELA_class_lifetime(A68_INT );
extern A68_VOID  DYOAELA_intro_class(A68_VC ,A68_VC ,A68_INT ,A68_INT ,struct A68t108 );
extern A68_181 * PVOAELA_qfindclass(A68_INT );
extern A68_BOOL  VAPAELA_scan_classes(struct A68t218 );
extern A68_INT  LCPAELA_login_class(A68_VC ,A68_VC ,struct A68t108 );
extern A68_VOID  XCPAELA_logout_class(A68_INT ,struct A68t108 );
extern A68_VOID  EDPAELA_write_class(A68_VC ,struct A68t130 ,A68_INT ,struct A68t108 );
extern A68_VOID  RDPAELA_read_class(A68_VC ,A68_INT ,struct A68t108 ,A68_130 *);
/* --- End of imports from attrlevel1 --- */


/* --- Imports from libmodes --- */
extern A68_130  UACAELA_nilptr;
extern A68_BOOL  UXIAELA_isnilptr(struct A68t127 *,struct A68t130 );
extern A68_182 * LTJAELA_nildeclattributes;
#define GVJAELA_body_mask 0X2U
#define HVJAELA_spec_mask 0X4U
extern A68_192 * HXJAELA_library;
extern A68_127 * TYJAELA_discfile;
/* --- End of imports from libmodes --- */


/* --- Imports from databasebuffers --- */
#define SNBAELA_block_size 512
#define RXIAELA_validwrite 2
extern A68_158 * ZXIAELA_makebuffer(struct A68t127 *,struct A68t87 ,A68_INT );
extern A68_158 * WYIAELA_readbuffer(struct A68t127 *,struct A68t130 );
extern A68_INT  YBJAELA_in2(struct A68t158 *);
extern A68_VOID  AEJAELA_mywritediscptrs(struct A68t127 *,struct A68t131 ,struct A68t108 ,A68_130 *);
extern A68_INT  UEJAELA_ndiscptrs(struct A68t127 *,struct A68t130 ,struct A68t108 );
extern A68_VOID  FFJAELA_myreaddiscptrs(struct A68t127 *,struct A68t131 ,struct A68t130 ,struct A68t108 );
extern A68_VOID  CGJAELA_endwrite(struct A68t158 *,struct A68t108 ,A68_130 *);
extern A68_INT  YHJAELA_outint2(A68_INT ,struct A68t158 *,struct A68t108 );
/* --- End of imports from databasebuffers --- */


/* --- Imports from messageproc --- */
extern A68_109  WHAAOSI_user;
/* --- End of imports from messageproc --- */


/* --- Imports from basics --- */
extern A68_VC  TTCAOST_nullid;
/* --- End of imports from basics --- */


/* --- Imports from putstrings --- */
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void MPOAELA(void);   /* attrlevel1 */
extern void FTJAELA(void);   /* libmodes */
extern void NWIAELA(void);   /* databasebuffers */
extern void JFAAOSI(void);   /* messageproc */
extern void JSCAOST(void);   /* basics */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_229   GZVAELA = {"$Id: attrdecls.a68,v 34.2 1995/03/29 13:03:16 ella Exp $"}; 
A_GISVEC(A68_VC ,HZVAELA,GZVAELA,56)
static A68_232   TZVAELA = {"You need a declaration attribute class here"}; 
A_GISVEC(A68_VC ,UZVAELA,TZVAELA,43)
typedef struct   /* env of non-global proc */
{
int dummy;
} GAWAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} NAWAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_130  BAWAELA_class;
A68_108  Msg;
} WAWAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_158 * CBWAELA_buffer;
} GBWAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_108  Msg;
A68_189 * Ct;
} KCWAELA_action;
typedef struct   /* env of non-global proc */
{
A68_182 ** VCWAELA_set;
} CDWAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  LEWAELA_upb;
A_PAD_INT(PAD_64)
} REWAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  LEWAELA_upb;
A_PAD_INT(PAD_65)
} BFWAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  LHWAELA_upb;
A_PAD_INT(PAD_66)
} PHWAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  LHWAELA_upb;
A_PAD_INT(PAD_67)
} XHWAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} MJWAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} TJWAELA_generator;

A68_VOID  MZVAELA_introduce_decl_class(A68_VC  N, A68_VC  P, A68_INT  Lifetime, A68_108  Msg);

A68_BOOL  OZVAELA_is_decl_class(A68_INT  Key);

A68_VOID  SZVAELA_check_decl_class(A68_INT  Key, A68_108  Msg);

A_STATIC A68_182 * ZZVAELA_readdeclattributes(A68_189 * Ct, A68_INT  Key, A68_108  Msg);

A_STATIC A68_VOID  FAWAELA_generator(A68_BOOL  DAWAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MAWAELA_generator(A68_BOOL  KAWAELA_anonymous, A68_131  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VAWAELA_generator(A68_BOOL  TAWAELA_anonymous, A68_131  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FBWAELA_generator(A68_BOOL  DBWAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A68_182 * TBWAELA_get_declattribute(A68_189 * Ct, A68_INT  Key, A68_108  Msg);

A68_VOID  CCWAELA_get_all_declattributes(A68_189 * Ct, A68_108  Msg);

A_STATIC A68_BOOL  JCWAELA_action(A68_VC  Class, A68_INT  Key, A68_BOOL  Login, A68_BOOL  Needspass, void *NonLocals);

A68_VOID  RCWAELA_write_declattributes(A68_189 * Ct, A68_32  Keys, A68_108  Msg);

A_STATIC A68_VOID  BDWAELA_generator(A68_BOOL  ZCWAELA_anonymous, A68_131  *ReturnedValue, void *NonLocals);

A68_BOOL  XDWAELA_scan_declattributes(A68_189 * Ct, A68_237  Action, A68_108  Msg);

A_STATIC A68_BOOL  EEWAELA_scan_all_declattributes(A68_189 * Ct, A68_237  Action, A68_108  Msg);

A68_VOID  JEWAELA_update_declattributes(A68_189 * Ct, A68_32  Table, A68_108  Msg);

A_STATIC A68_VOID  QEWAELA_generator(A68_BOOL  OEWAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  AFWAELA_generator(A68_BOOL  YEWAELA_anonymous, A68_131  *ReturnedValue, void *NonLocals);

A68_VOID  FGWAELA_merge_declattribute(A68_189 * Ct, A68_INT  Key, A68_32  Declnos, A68_INT  Newversion, A68_131  Newdata, A68_108  Msg);

A68_VOID  TGWAELA_write_decldata(A68_182 * Set, A68_INT  Declno, A68_240  Data, A68_108  Msg);

A68_VOID  CHWAELA_read_decldata(A68_182 * Set, A68_INT  Declno, A68_108  Msg, A68_240  *ReturnedValue);

A68_VOID  KHWAELA_erase_decldata(A68_182 * Set, A68_INT  Declno, A68_108  Msg);

A_STATIC A68_VOID  OHWAELA_generator(A68_BOOL  MHWAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WHWAELA_generator(A68_BOOL  UHWAELA_anonymous, A68_131  *ReturnedValue, void *NonLocals);

A68_VOID  CJWAELA_erase_declattributes(A68_189 * Ct, A68_INT  Declno, A68_108  Msg);

A68_VOID  GJWAELA_clear_declattributes(A68_189 * Ct, A68_108  Msg);

A_STATIC A68_VOID  LJWAELA_generator(A68_BOOL  JJWAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SJWAELA_generator(A68_BOOL  QJWAELA_anonymous, A68_131  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FAWAELA_generator(A68_BOOL  DAWAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((GAWAELA_generator *)NonLocals)->x)
{ 
A68_32  HAWAELA;  /* clause result */
A68_32  IAWAELA;  /* OPERATORS - dynamic generator */
{ 
IAWAELA.upb = 0 ;
( DAWAELA_anonymous? A_VLOC(A68_INT ,IAWAELA): A_VHEAP(A68_INT ,IAWAELA) );
HAWAELA = IAWAELA;
} 
*ReturnedValue = (HAWAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  MAWAELA_generator(A68_BOOL  KAWAELA_anonymous, A68_131  *ReturnedValue, void *NonLocals)
#define NL(x) (((NAWAELA_generator *)NonLocals)->x)
{ 
A68_131  OAWAELA;  /* clause result */
A68_131  PAWAELA;  /* OPERATORS - dynamic generator */
{ 
PAWAELA.upb = 0 ;
( KAWAELA_anonymous? A_VLOC(A68_130 ,PAWAELA): A_VHEAP(A68_130 ,PAWAELA) );
OAWAELA = PAWAELA;
} 
*ReturnedValue = (OAWAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  VAWAELA_generator(A68_BOOL  TAWAELA_anonymous, A68_131  *ReturnedValue, void *NonLocals)
#define NL(x) (((WAWAELA_generator *)NonLocals)->x)
{ 
A68_131  XAWAELA;  /* clause result */
A68_131  YAWAELA;  /* OPERATORS - dynamic generator */
{ 
YAWAELA.upb = UEJAELA_ndiscptrs(TYJAELA_discfile, NL(BAWAELA_class), NL(Msg)) ;
( TAWAELA_anonymous? A_VLOC(A68_130 ,YAWAELA): A_VHEAP(A68_130 ,YAWAELA) );
XAWAELA = YAWAELA;
} 
*ReturnedValue = (XAWAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  FBWAELA_generator(A68_BOOL  DBWAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((GBWAELA_generator *)NonLocals)->x)
{ 
A68_32  HBWAELA;  /* clause result */
A68_32  IBWAELA;  /* OPERATORS - dynamic generator */
{ 
IBWAELA.upb = YBJAELA_in2(NL(CBWAELA_buffer)) ;
( DBWAELA_anonymous? A_VLOC(A68_INT ,IBWAELA): A_VHEAP(A68_INT ,IBWAELA) );
HBWAELA = IBWAELA;
} 
*ReturnedValue = (HBWAELA);
return;
} 
#undef NL

A_STATIC A68_BOOL  JCWAELA_action(A68_VC  Class, A68_INT  Key, A68_BOOL  Login, A68_BOOL  Needspass, void *NonLocals)
#define NL(x) (((KCWAELA_action *)NonLocals)->x)
{ 
A68_VC  LCWAELA;  /* clause result */
A68_VC  MCWAELA_pass;
A68_BOOL  NCWAELA;  /* clause result */
A_PROC_ENTRY(action);
 /* line 123: */
 /* line 124: */
{ 
 /* line 125: */
if ( OZVAELA_is_decl_class(Key) )
{ 
 /* line 126: */
 /* line 127: */
if ( !Login )
{ 
if ( Needspass )
{ 
LCWAELA = (*(&(PVOAELA_qfindclass(Key)->Password)));
} 
else
{ 
LCWAELA = TTCAOST_nullid;
} 
MCWAELA_pass = LCWAELA;
 /* line 128: */
 /* line 129: */
LCPAELA_login_class(Class, MCWAELA_pass, NL(Msg));
} 
 /* line 130: */
TBWAELA_get_declattribute(NL(Ct), Key, NL(Msg));
 /* line 131: */
 /* line 132: */
if ( !Login )
{ 
 /* line 133: */
 /* line 134: */
XCPAELA_logout_class(Key, NL(Msg));
} 
} 
 /* line 135: */
 /* line 136: */
NCWAELA = A68_TRUE;
} 
A_PROC_EXIT(action);
return( NCWAELA );
} 
#undef NL

A_STATIC A68_VOID  BDWAELA_generator(A68_BOOL  ZCWAELA_anonymous, A68_131  *ReturnedValue, void *NonLocals)
#define NL(x) (((CDWAELA_generator *)NonLocals)->x)
{ 
A68_131  DDWAELA;  /* clause result */
A68_131  EDWAELA;  /* OPERATORS - dynamic generator */
{ 
EDWAELA.upb = ((*(&((*NL(VCWAELA_set))->Data))).upb+1) ;
( ZCWAELA_anonymous? A_VLOC(A68_130 ,EDWAELA): A_VHEAP(A68_130 ,EDWAELA) );
DDWAELA = EDWAELA;
} 
*ReturnedValue = (DDWAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  QEWAELA_generator(A68_BOOL  OEWAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((REWAELA_generator *)NonLocals)->x)
{ 
A68_32  SEWAELA;  /* clause result */
A68_32  TEWAELA;  /* OPERATORS - dynamic generator */
{ 
TEWAELA.upb = NL(LEWAELA_upb) ;
( OEWAELA_anonymous? A_VLOC(A68_INT ,TEWAELA): A_VHEAP(A68_INT ,TEWAELA) );
SEWAELA = TEWAELA;
} 
*ReturnedValue = (SEWAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  AFWAELA_generator(A68_BOOL  YEWAELA_anonymous, A68_131  *ReturnedValue, void *NonLocals)
#define NL(x) (((BFWAELA_generator *)NonLocals)->x)
{ 
A68_131  CFWAELA;  /* clause result */
A68_131  DFWAELA;  /* OPERATORS - dynamic generator */
{ 
DFWAELA.upb = NL(LEWAELA_upb) ;
( YEWAELA_anonymous? A_VLOC(A68_130 ,DFWAELA): A_VHEAP(A68_130 ,DFWAELA) );
CFWAELA = DFWAELA;
} 
*ReturnedValue = (CFWAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  OHWAELA_generator(A68_BOOL  MHWAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((PHWAELA_generator *)NonLocals)->x)
{ 
A68_32  QHWAELA;  /* clause result */
A68_32  RHWAELA;  /* OPERATORS - dynamic generator */
{ 
RHWAELA.upb = (NL(LHWAELA_upb)-1) ;
( MHWAELA_anonymous? A_VLOC(A68_INT ,RHWAELA): A_VHEAP(A68_INT ,RHWAELA) );
QHWAELA = RHWAELA;
} 
*ReturnedValue = (QHWAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  WHWAELA_generator(A68_BOOL  UHWAELA_anonymous, A68_131  *ReturnedValue, void *NonLocals)
#define NL(x) (((XHWAELA_generator *)NonLocals)->x)
{ 
A68_131  YHWAELA;  /* clause result */
A68_131  ZHWAELA;  /* OPERATORS - dynamic generator */
{ 
ZHWAELA.upb = (NL(LHWAELA_upb)-1) ;
( UHWAELA_anonymous? A_VLOC(A68_130 ,ZHWAELA): A_VHEAP(A68_130 ,ZHWAELA) );
YHWAELA = ZHWAELA;
} 
*ReturnedValue = (YHWAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  LJWAELA_generator(A68_BOOL  JJWAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((MJWAELA_generator *)NonLocals)->x)
{ 
A68_32  NJWAELA;  /* clause result */
A68_32  OJWAELA;  /* OPERATORS - dynamic generator */
{ 
OJWAELA.upb = 0 ;
( JJWAELA_anonymous? A_VLOC(A68_INT ,OJWAELA): A_VHEAP(A68_INT ,OJWAELA) );
NJWAELA = OJWAELA;
} 
*ReturnedValue = (NJWAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  SJWAELA_generator(A68_BOOL  QJWAELA_anonymous, A68_131  *ReturnedValue, void *NonLocals)
#define NL(x) (((TJWAELA_generator *)NonLocals)->x)
{ 
A68_131  UJWAELA;  /* clause result */
A68_131  VJWAELA;  /* OPERATORS - dynamic generator */
{ 
VJWAELA.upb = 0 ;
( QJWAELA_anonymous? A_VLOC(A68_130 ,VJWAELA): A_VHEAP(A68_130 ,VJWAELA) );
UJWAELA = VJWAELA;
} 
*ReturnedValue = (UJWAELA);
return;
} 
#undef NL

A68_VOID  MZVAELA_introduce_decl_class(A68_VC  N, A68_VC  P, A68_INT  Lifetime, A68_108  Msg)
{ 
A_PROC_ENTRY(introduce_decl_class);
 /* line 69: */
 /* line 70: */
 /* line 71: */
DYOAELA_intro_class(N, P, RWOAELA_declaration_class, Lifetime, Msg);
A_PROC_EXIT(introduce_decl_class);
return;
} 
#undef NL

A68_BOOL  OZVAELA_is_decl_class(A68_INT  Key)
{ 
A68_BOOL  PZVAELA;  /* clause result */
A_PROC_ENTRY(is_decl_class);
PZVAELA = (TWOAELA_class_sort(Key)==RWOAELA_declaration_class);
A_PROC_EXIT(is_decl_class);
return( PZVAELA );
} 
#undef NL

A68_VOID  SZVAELA_check_decl_class(A68_INT  Key, A68_108  Msg)
{ 
A68_46  VZVAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(check_decl_class);
 /* line 76: */
 /* line 77: */
{ 
 /* line 78: */
if ( (TWOAELA_class_sort(Key)!=RWOAELA_declaration_class) )
{ 
 /* line 79: */
 /* line 80: */
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(VZVAELA,UZVAELA,A68_VC )),(WHAAOSI_user, A_HVEC(VZVAELA,UZVAELA,A68_VC ),(Msg).nonlocals));
} 
} 
A_PROC_EXIT(check_decl_class);
return;
} 
#undef NL

A_STATIC A68_182 * ZZVAELA_readdeclattributes(A68_189 * Ct, A68_INT  Key, A68_108  Msg)
{ 
A68_130  AAWAELA;  /* avoid structure result */
A68_130  BAWAELA_class;
A68_182  CAWAELA;  /* collateral clause result */
A68_33  EAWAELA_generator;   /* proc value of non-global proc */
A68_32  JAWAELA;  /* avoid structure result */
A68_234  LAWAELA_generator;   /* proc value of non-global proc */
A68_131  QAWAELA;  /* avoid structure result */
A68_182 * RAWAELA;  /* clause result */
A68_182 * SAWAELA;  /* YIELD */
A68_234  UAWAELA_generator;   /* proc value of non-global proc */
A68_131  ZAWAELA;  /* avoid structure result */
A68_131  ABWAELA_pointers;
A68_INT  BBWAELA;  /* YIELD */
A68_158 * CBWAELA_buffer;
A68_33  EBWAELA_generator;   /* proc value of non-global proc */
A68_32  JBWAELA;  /* avoid structure result */
A68_32  KBWAELA_version;
A68_INT * LBWAELA_int;
A68_INT  MBWAELA;  /* forall loop counter */
A68_182  NBWAELA;  /* collateral clause result */
A68_131  OBWAELA;  /* OPERATORS - trim index */
A68_182 * PBWAELA;  /* YIELD */
A_PROC_ENTRY(readdeclattributes);
 /* line 86: */
 /* line 87: */
{ 
SZVAELA_check_decl_class(Key, Msg);
 /* line 88: */
RDPAELA_read_class( (*(&(Ct->Name))), Key, Msg, &AAWAELA );
BAWAELA_class = AAWAELA;
 /* line 89: */
 /* line 90: */
if ( UXIAELA_isnilptr(TYJAELA_discfile, BAWAELA_class) )
{ 
CAWAELA.Key = Key;
CAWAELA.Changed = A68_FALSE;
A_CLOSURE( EAWAELA_generator, FAWAELA_generator, GAWAELA_generator );
 /* line 91: */
A_CALLPROC(EAWAELA_generator,(A68_FALSE, &JAWAELA),(A68_FALSE, &JAWAELA,(EAWAELA_generator).nonlocals));
CAWAELA.Version = JAWAELA;
A_CLOSURE( LAWAELA_generator, MAWAELA_generator, NAWAELA_generator );
A_CALLPROC(LAWAELA_generator,(A68_FALSE, &QAWAELA),(A68_FALSE, &QAWAELA,(LAWAELA_generator).nonlocals));
CAWAELA.Data = QAWAELA;
 /* line 92: */
CAWAELA.Rest = LTJAELA_nildeclattributes;
SAWAELA = A_HEAP(A68_182 ) ;
(*SAWAELA) = CAWAELA ;
RAWAELA = SAWAELA;
} 
else
{ 
A_CLOSURE( UAWAELA_generator, VAWAELA_generator, WAWAELA_generator );
(( WAWAELA_generator * ) ( UAWAELA_generator.nonlocals )) -> BAWAELA_class = BAWAELA_class;
(( WAWAELA_generator * ) ( UAWAELA_generator.nonlocals )) -> Msg = Msg;
A_CALLPROC(UAWAELA_generator,(A68_FALSE, &ZAWAELA),(A68_FALSE, &ZAWAELA,(UAWAELA_generator).nonlocals));
ABWAELA_pointers = ZAWAELA;
 /* line 93: */
FFJAELA_myreaddiscptrs(TYJAELA_discfile, ABWAELA_pointers, BAWAELA_class, Msg);
 /* line 94: */
BBWAELA = 1 ;
CBWAELA_buffer = WYIAELA_readbuffer(TYJAELA_discfile, (*(&A_VINDEX(ABWAELA_pointers,BBWAELA))));
 /* line 95: */
A_CLOSURE( EBWAELA_generator, FBWAELA_generator, GBWAELA_generator );
(( GBWAELA_generator * ) ( EBWAELA_generator.nonlocals )) -> CBWAELA_buffer = CBWAELA_buffer;
A_CALLPROC(EBWAELA_generator,(A68_FALSE, &JBWAELA),(A68_FALSE, &JBWAELA,(EBWAELA_generator).nonlocals));
KBWAELA_version = JBWAELA;
 /* line 96: */
MBWAELA = KBWAELA_version.upb -1;
LBWAELA_int = KBWAELA_version.data;
for (;MBWAELA-- >= 0;
(LBWAELA_int++
) )
{
(*LBWAELA_int) = YBJAELA_in2(CBWAELA_buffer);
}
 /* line 97: */
 /* line 98: */
NBWAELA.Key = Key;
NBWAELA.Changed = A68_FALSE;
NBWAELA.Version = KBWAELA_version;
NBWAELA.Data = A_VTRIM(OBWAELA,(ABWAELA_pointers),A_VTSCRIPT(&(OBWAELA.upb),(ABWAELA_pointers).upb,2,(ABWAELA_pointers).upb));
 /* line 99: */
NBWAELA.Rest = LTJAELA_nildeclattributes;
 /* line 100: */
PBWAELA = A_HEAP(A68_182 ) ;
(*PBWAELA) = NBWAELA ;
RAWAELA = PBWAELA;
} 
} 
A_PROC_EXIT(readdeclattributes);
return( RAWAELA );
} 
#undef NL

A68_182 * TBWAELA_get_declattribute(A68_189 * Ct, A68_INT  Key, A68_108  Msg)
{ 
A68_182 * UBWAELA_set;
A68_BOOL  VBWAELA;  /* optbool result */
A68_182 * WBWAELA_da;
A68_182 ** XBWAELA;  /* YIELD */
A68_182 ** YBWAELA;  /* YIELD */
A68_182 * ZBWAELA;  /* clause result */
A_PROC_ENTRY(get_declattribute);
 /* line 104: */
 /* line 105: */
{ 
UBWAELA_set = (*(&(Ct->Declattributes)));
 /* line 106: */
for ( ;; )
{ 
VBWAELA = (UBWAELA_set!=LTJAELA_nildeclattributes);
if ( VBWAELA )
{ /* line 107: */
VBWAELA = (Key!=(*(&(UBWAELA_set->Key))));
}
if ( !(VBWAELA) ) break;
UBWAELA_set = (*(&(UBWAELA_set->Rest)));
}
 /* line 108: */
 /* line 109: */
if ( (UBWAELA_set==LTJAELA_nildeclattributes) )
{ 
WBWAELA_da = ZZVAELA_readdeclattributes(Ct, Key, Msg);
 /* line 110: */
XBWAELA = (&(WBWAELA_da->Rest)) ;
(*XBWAELA) = (*(&(Ct->Declattributes)));
 /* line 111: */
YBWAELA = (&(Ct->Declattributes)) ;
(*YBWAELA) = WBWAELA_da;
 /* line 112: */
 /* line 113: */
UBWAELA_set = (*(&(Ct->Declattributes)));
} 
 /* line 114: */
 /* line 115: */
ZBWAELA = UBWAELA_set;
} 
A_PROC_EXIT(get_declattribute);
return( ZBWAELA );
} 
#undef NL

A68_VOID  CCWAELA_get_all_declattributes(A68_189 * Ct, A68_108  Msg)
{ 
A68_218  ICWAELA_action;   /* proc value of non-global proc */
A_PROC_ENTRY(get_all_declattributes);
 /* line 118: */
 /* line 122: */
{ 
A_CLOSURE( ICWAELA_action, JCWAELA_action, KCWAELA_action );
(( KCWAELA_action * ) ( ICWAELA_action.nonlocals )) -> Msg = Msg;
(( KCWAELA_action * ) ( ICWAELA_action.nonlocals )) -> Ct = Ct;
 /* line 137: */
 /* line 138: */
VAPAELA_scan_classes(ICWAELA_action);
} 
A_PROC_EXIT(get_all_declattributes);
return;
} 
#undef NL
 /* line 142: */

A68_VOID  RCWAELA_write_declattributes(A68_189 * Ct, A68_32  Keys, A68_108  Msg)
{ 
A68_INT  SCWAELA_key;
A68_INT * TCWAELA;  /* forall control - []x */
A68_INT  UCWAELA;  /* forall loop counter */
A68_182 * VCWAELA_set;
A68_BOOL  WCWAELA;  /* optbool result */
A68_BOOL  XCWAELA;  /* optbool result */
A68_130  YCWAELA;  /* clause result */
A68_234  ADWAELA_generator;   /* proc value of non-global proc */
A68_131  GDWAELA;  /* avoid structure result */
A68_131  FDWAELA_pointers;
A68_87  HDWAELA;  /* OPERATORS - mode -> union mode */
A68_158 * IDWAELA_buffer;
A68_INT * JDWAELA_int;
A68_32  KDWAELA;  /* forall yield */
A68_INT  LDWAELA;  /* forall loop counter */
A68_INT  MDWAELA;  /* YIELD */
A68_130  NDWAELA;  /* avoid structure result */
A68_130 * ODWAELA;  /* YIELD */
A68_131  PDWAELA;  /* OPERATORS - trim index */
A68_131  QDWAELA;  /* YIELD */
A68_131  RDWAELA;  /* OPERATORS - assign op */
A68_130  SDWAELA;  /* avoid structure result */
A68_130  TDWAELA_dp;
A_PROC_ENTRY(write_declattributes);
 /* line 143: */
 /* line 144: */
 /* line 145: */
UCWAELA = Keys.upb -1;
TCWAELA = Keys.data;
for (;UCWAELA-- >= 0;
(TCWAELA++
) )
{
SCWAELA_key = *TCWAELA;
VCWAELA_set = (*(&(Ct->Declattributes)));
 /* line 146: */
for ( ;; )
{ 
WCWAELA = (VCWAELA_set!=LTJAELA_nildeclattributes);
if ( WCWAELA )
{ /* line 147: */
WCWAELA = (SCWAELA_key!=(*(&(VCWAELA_set->Key))));
}
if ( !(WCWAELA) ) break;
VCWAELA_set = (*(&(VCWAELA_set->Rest)));
}
 /* line 148: */
 /* line 149: */
XCWAELA = (VCWAELA_set!=LTJAELA_nildeclattributes);
if ( XCWAELA )
{XCWAELA = (*(&(VCWAELA_set->Changed)));
}
 /* line 150: */
if ( XCWAELA )
{ 
 /* line 151: */
 /* line 152: */
if ( ((*(&(VCWAELA_set->Data))).upb==0) )
{ 
YCWAELA = UACAELA_nilptr;
} 
else
{ 
A_CLOSURE( ADWAELA_generator, BDWAELA_generator, CDWAELA_generator );
(( CDWAELA_generator * ) ( ADWAELA_generator.nonlocals )) -> VCWAELA_set = (&VCWAELA_set);
A_CALLPROC(ADWAELA_generator,(A68_TRUE, &GDWAELA),(A68_TRUE, &GDWAELA,(ADWAELA_generator).nonlocals));
FDWAELA_pointers = GDWAELA;
 /* line 153: */
 /* line 154: */
IDWAELA_buffer = ZXIAELA_makebuffer(TYJAELA_discfile, A_UNITE(HDWAELA,mode1,1,SNBAELA_block_size), RXIAELA_validwrite);
 /* line 155: */
YHJAELA_outint2((*(&(VCWAELA_set->Version))).upb, IDWAELA_buffer, Msg);
 /* line 156: */
 /* line 157: */
KDWAELA = (*(&(VCWAELA_set->Version))) ;
LDWAELA = KDWAELA.upb -1;
JDWAELA_int = KDWAELA.data;
for (;LDWAELA-- >= 0;
(JDWAELA_int++
) )
{
YHJAELA_outint2((*JDWAELA_int), IDWAELA_buffer, Msg);
}
 /* line 158: */
MDWAELA = 1 ;
CGJAELA_endwrite( IDWAELA_buffer, Msg, &NDWAELA );
ODWAELA = (&A_VINDEX(FDWAELA_pointers,MDWAELA)) ;
(*ODWAELA) = NDWAELA;
 /* line 159: */
QDWAELA = A_VTRIM(PDWAELA,(FDWAELA_pointers),A_VTSCRIPT(&(PDWAELA.upb),(FDWAELA_pointers).upb,2,(FDWAELA_pointers).upb)) ;
RDWAELA = (*(&(VCWAELA_set->Data))) ;
A_VASSIGN2(RDWAELA,QDWAELA,A68_130 );
 /* line 160: */
 /* line 161: */
AEJAELA_mywritediscptrs( TYJAELA_discfile, FDWAELA_pointers, Msg, &SDWAELA );
YCWAELA = SDWAELA;
} 
TDWAELA_dp = YCWAELA;
 /* line 162: */
 /* line 163: */
 /* line 164: */
EDPAELA_write_class((*(&(Ct->Name))), TDWAELA_dp, SCWAELA_key, Msg);
} 
}
 /* line 165: */
A_PROC_EXIT(write_declattributes);
return;
} 
#undef NL
 /* line 169: */
 /* line 170: */

A68_BOOL  XDWAELA_scan_declattributes(A68_189 * Ct, A68_237  Action, A68_108  Msg)
{ 
A68_182 * YDWAELA_set;
A68_BOOL  ZDWAELA;  /* optbool result */
A68_BOOL  AEWAELA;  /* clause result */
A_PROC_ENTRY(scan_declattributes);
 /* line 171: */
 /* line 172: */
{ 
YDWAELA_set = (*(&(Ct->Declattributes)));
 /* line 173: */
for ( ;; )
{ 
ZDWAELA = (YDWAELA_set!=LTJAELA_nildeclattributes);
if ( ZDWAELA )
{ /* line 174: */
ZDWAELA = A_CALLPROC(Action,(YDWAELA_set, Msg),(YDWAELA_set, Msg,(Action).nonlocals));
}
if ( !(ZDWAELA) ) break;
YDWAELA_set = (*(&(YDWAELA_set->Rest)));
}
 /* line 175: */
 /* line 176: */
AEWAELA = (YDWAELA_set!=LTJAELA_nildeclattributes);
} 
A_PROC_EXIT(scan_declattributes);
return( AEWAELA );
} 
#undef NL
 /* line 179: */
 /* line 180: */

A_STATIC A68_BOOL  EEWAELA_scan_all_declattributes(A68_189 * Ct, A68_237  Action, A68_108  Msg)
{ 
A68_BOOL  FEWAELA;  /* clause result */
A_PROC_ENTRY(scan_all_declattributes);
 /* line 181: */
 /* line 182: */
{ 
CCWAELA_get_all_declattributes(Ct, Msg);
 /* line 183: */
 /* line 184: */
FEWAELA = XDWAELA_scan_declattributes(Ct, Action, Msg);
} 
A_PROC_EXIT(scan_all_declattributes);
return( FEWAELA );
} 
#undef NL
 /* line 189: */

A68_VOID  JEWAELA_update_declattributes(A68_189 * Ct, A68_32  Table, A68_108  Msg)
{ 
A68_190  KEWAELA_decls;
A68_INT  LEWAELA_upb;
A68_182 * MEWAELA_set;
A68_INT  NEWAELA_lifetime;
A68_33  PEWAELA_generator;   /* proc value of non-global proc */
A68_32  UEWAELA;  /* avoid structure result */
A68_32  VEWAELA_newversions;
A68_INT * WEWAELA_nv;
A68_INT  XEWAELA;  /* forall loop counter */
A68_234  ZEWAELA_generator;   /* proc value of non-global proc */
A68_131  EFWAELA;  /* avoid structure result */
A68_131  FFWAELA_newdata;
A68_130 * GFWAELA_nd;
A68_INT  HFWAELA;  /* forall loop counter */
A68_INT  IFWAELA_oldindex;
A68_130 * JFWAELA_d;
A68_INT * KFWAELA_v;
A68_131  LFWAELA;  /* forall yield */
A68_32  MFWAELA;  /* forall yield */
A68_INT  NFWAELA;  /* forall loop counter */
A68_INT  OFWAELA;  /* YIELD */
A68_INT  PFWAELA_newindex;
A68_INT  QFWAELA_status;
A68_BOOL  RFWAELA;  /* optbool result */
A68_BOOL  SFWAELA;  /* optbool result */
A68_BOOL  TFWAELA;  /* optbool result */
A68_INT * UFWAELA;  /* YIELD */
A68_130 * VFWAELA;  /* YIELD */
A68_BOOL * WFWAELA;  /* YIELD */
A68_32 * XFWAELA;  /* YIELD */
A68_131 * YFWAELA;  /* YIELD */
A_PROC_ENTRY(update_declattributes);
 /* line 190: */
 /* line 191: */
{ 
CCWAELA_get_all_declattributes(Ct, Msg);
 /* line 192: */
KEWAELA_decls = (*(&(Ct->Decls)));
 /* line 193: */
LEWAELA_upb = KEWAELA_decls.upb;
 /* line 195: */
MEWAELA_set = (*(&(Ct->Declattributes)));
 /* line 196: */
for ( ;; )
{ 
 /* line 197: */
if ( !((MEWAELA_set!=LTJAELA_nildeclattributes)) ) break;
NEWAELA_lifetime = AXOAELA_class_lifetime((*(&(MEWAELA_set->Key))));
 /* line 198: */
A_CLOSURE( PEWAELA_generator, QEWAELA_generator, REWAELA_generator );
(( REWAELA_generator * ) ( PEWAELA_generator.nonlocals )) -> LEWAELA_upb = LEWAELA_upb;
A_CALLPROC(PEWAELA_generator,(A68_FALSE, &UEWAELA),(A68_FALSE, &UEWAELA,(PEWAELA_generator).nonlocals));
VEWAELA_newversions = UEWAELA;
 /* line 199: */
XEWAELA = VEWAELA_newversions.upb -1;
WEWAELA_nv = VEWAELA_newversions.data;
for (;XEWAELA-- >= 0;
(WEWAELA_nv++
) )
{
(*WEWAELA_nv) = (*(&(HXJAELA_library->Version)));
}
 /* line 200: */
A_CLOSURE( ZEWAELA_generator, AFWAELA_generator, BFWAELA_generator );
(( BFWAELA_generator * ) ( ZEWAELA_generator.nonlocals )) -> LEWAELA_upb = LEWAELA_upb;
A_CALLPROC(ZEWAELA_generator,(A68_FALSE, &EFWAELA),(A68_FALSE, &EFWAELA,(ZEWAELA_generator).nonlocals));
FFWAELA_newdata = EFWAELA;
 /* line 201: */
HFWAELA = FFWAELA_newdata.upb -1;
GFWAELA_nd = FFWAELA_newdata.data;
for (;HFWAELA-- >= 0;
(GFWAELA_nd++
) )
{
(*GFWAELA_nd) = UACAELA_nilptr;
}
 /* line 203: */
IFWAELA_oldindex = 0;
 /* line 204: */
 /* line 205: */
LFWAELA = (*(&(MEWAELA_set->Data))) ;
MFWAELA = (*(&(MEWAELA_set->Version))) ;
NFWAELA = LFWAELA.upb -1;
if ( NFWAELA != MFWAELA.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
JFWAELA_d = LFWAELA.data;
KFWAELA_v = MFWAELA.data;
for (;NFWAELA-- >= 0;
(JFWAELA_d++
,KFWAELA_v++
) )
{
OFWAELA = IFWAELA_oldindex+=1 ;
PFWAELA_newindex = A_VINDEX(Table,OFWAELA);
 /* line 206: */
QFWAELA_status = (*(&((&A_VINDEX(KEWAELA_decls,PFWAELA_newindex))->Status)));
 /* line 207: */
RFWAELA = (NEWAELA_lifetime==VWOAELA_perm_life);
if ( ! RFWAELA )
{RFWAELA = (NEWAELA_lifetime==WWOAELA_decl_life);
}
 /* line 208: */
if ( ! RFWAELA )
{SFWAELA = (NEWAELA_lifetime==YWOAELA_body_life);
if ( SFWAELA )
{SFWAELA = ((A68_BITS )((A68_BITS )QFWAELA_status&GVJAELA_body_mask)!=GVJAELA_body_mask);
}
 /* line 209: */
RFWAELA = SFWAELA;
}
 /* line 210: */
if ( ! RFWAELA )
{TFWAELA = (NEWAELA_lifetime==XWOAELA_spec_life);
if ( TFWAELA )
{TFWAELA = ((A68_BITS )((A68_BITS )QFWAELA_status&HVJAELA_spec_mask)!=HVJAELA_spec_mask);
}
 /* line 211: */
RFWAELA = TFWAELA;
}
 /* line 212: */
if ( RFWAELA )
{ 
UFWAELA = (&A_VINDEX(VEWAELA_newversions,PFWAELA_newindex)) ;
(*UFWAELA) = (*KFWAELA_v);
 /* line 213: */
 /* line 214: */
 /* line 215: */
VFWAELA = (&A_VINDEX(FFWAELA_newdata,PFWAELA_newindex)) ;
(*VFWAELA) = (*JFWAELA_d);
} 
}
 /* line 216: */
WFWAELA = (&(MEWAELA_set->Changed)) ;
(*WFWAELA) = A68_TRUE;
 /* line 217: */
XFWAELA = (&(MEWAELA_set->Version)) ;
(*XFWAELA) = VEWAELA_newversions;
 /* line 218: */
YFWAELA = (&(MEWAELA_set->Data)) ;
(*YFWAELA) = FFWAELA_newdata;
 /* line 219: */
 /* line 220: */
MEWAELA_set = (*(&(MEWAELA_set->Rest)));
}
 /* line 221: */
} 
A_PROC_EXIT(update_declattributes);
return;
} 
#undef NL
 /* line 224: */
 /* line 225: */

A68_VOID  FGWAELA_merge_declattribute(A68_189 * Ct, A68_INT  Key, A68_32  Declnos, A68_INT  Newversion, A68_131  Newdata, A68_108  Msg)
{ 
A68_182 * GGWAELA_set;
A68_INT * HGWAELA_declno;
A68_130 * IGWAELA_data;
A68_INT  JGWAELA;  /* forall loop counter */
A68_32  KGWAELA;  /* OPERATORS - simple index */
A68_INT * LGWAELA;  /* YIELD */
A68_131  MGWAELA;  /* OPERATORS - simple index */
A68_130 * NGWAELA;  /* YIELD */
A68_BOOL * OGWAELA;  /* YIELD */
A_PROC_ENTRY(merge_declattribute);
 /* line 226: */
 /* line 227: */
{ 
GGWAELA_set = TBWAELA_get_declattribute(Ct, Key, Msg);
 /* line 228: */
 /* line 229: */
JGWAELA = Declnos.upb -1;
if ( JGWAELA != Newdata.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
HGWAELA_declno = Declnos.data;
IGWAELA_data = Newdata.data;
for (;JGWAELA-- >= 0;
(HGWAELA_declno++
,IGWAELA_data++
) )
{
KGWAELA = (*(&(GGWAELA_set->Version))) ;
LGWAELA = (&A_VINDEX(KGWAELA,(*HGWAELA_declno))) ;
(*LGWAELA) = Newversion;
 /* line 230: */
MGWAELA = (*(&(GGWAELA_set->Data))) ;
NGWAELA = (&A_VINDEX(MGWAELA,(*HGWAELA_declno))) ;
(*NGWAELA) = (*IGWAELA_data);
 /* line 231: */
 /* line 232: */
OGWAELA = (&(GGWAELA_set->Changed)) ;
(*OGWAELA) = A68_TRUE;
}
 /* line 233: */
} 
A_PROC_EXIT(merge_declattribute);
return;
} 
#undef NL
 /* line 241: */

A68_VOID  TGWAELA_write_decldata(A68_182 * Set, A68_INT  Declno, A68_240  Data, A68_108  Msg)
{ 
A68_131  UGWAELA;  /* OPERATORS - simple index */
A68_130 * VGWAELA;  /* YIELD */
A68_32  WGWAELA;  /* OPERATORS - simple index */
A68_INT * XGWAELA;  /* YIELD */
A68_BOOL * YGWAELA;  /* YIELD */
A_PROC_ENTRY(write_decldata);
 /* line 242: */
 /* line 243: */
{ 
UGWAELA = (*(&(Set->Data))) ;
VGWAELA = (&A_VINDEX(UGWAELA,Declno)) ;
(*VGWAELA) = Data.Data;
 /* line 244: */
WGWAELA = (*(&(Set->Version))) ;
XGWAELA = (&A_VINDEX(WGWAELA,Declno)) ;
(*XGWAELA) = Data.Version;
 /* line 245: */
 /* line 246: */
YGWAELA = (&(Set->Changed)) ;
(*YGWAELA) = A68_TRUE;
} 
A_PROC_EXIT(write_decldata);
return;
} 
#undef NL

A68_VOID  CHWAELA_read_decldata(A68_182 * Set, A68_INT  Declno, A68_108  Msg, A68_240  *ReturnedValue)
{ 
A68_240  DHWAELA;  /* collateral clause result */
A68_32  EHWAELA;  /* OPERATORS - simple index */
A68_131  FHWAELA;  /* OPERATORS - simple index */
A68_240  GHWAELA;  /* clause result */
A_PROC_ENTRY(read_decldata);
 /* line 251: */
 /* line 252: */
{ 
EHWAELA = (*(&(Set->Version))) ;
DHWAELA.Version = (*(&A_VINDEX(EHWAELA,Declno)));
 /* line 253: */
FHWAELA = (*(&(Set->Data))) ;
DHWAELA.Data = (*(&A_VINDEX(FHWAELA,Declno)));
GHWAELA = DHWAELA;
} 
A_PROC_EXIT(read_decldata);
*ReturnedValue = (GHWAELA);
return;
} 
#undef NL

A68_VOID  KHWAELA_erase_decldata(A68_182 * Set, A68_INT  Declno, A68_108  Msg)
{ 
A68_INT  LHWAELA_upb;
A68_33  NHWAELA_generator;   /* proc value of non-global proc */
A68_32  SHWAELA;  /* avoid structure result */
A68_32  THWAELA_newversion;
A68_234  VHWAELA_generator;   /* proc value of non-global proc */
A68_131  AIWAELA;  /* avoid structure result */
A68_131  BIWAELA_newdata;
A68_32  CIWAELA;  /* OPERATORS - trim index */
A68_32  DIWAELA;  /* OPERATORS - trim index */
A68_32  EIWAELA;  /* OPERATORS - trim index */
A68_32  FIWAELA;  /* YIELD */
A68_32  GIWAELA;  /* OPERATORS - assign op */
A68_131  HIWAELA;  /* OPERATORS - trim index */
A68_131  IIWAELA;  /* OPERATORS - trim index */
A68_131  JIWAELA;  /* OPERATORS - trim index */
A68_131  KIWAELA;  /* YIELD */
A68_131  LIWAELA;  /* OPERATORS - assign op */
A68_32  MIWAELA;  /* OPERATORS - trim index */
A68_32  NIWAELA;  /* OPERATORS - trim index */
A68_32  OIWAELA;  /* OPERATORS - trim index */
A68_32  PIWAELA;  /* YIELD */
A68_32  QIWAELA;  /* OPERATORS - assign op */
A68_131  RIWAELA;  /* OPERATORS - trim index */
A68_131  SIWAELA;  /* OPERATORS - trim index */
A68_131  TIWAELA;  /* OPERATORS - trim index */
A68_131  UIWAELA;  /* YIELD */
A68_131  VIWAELA;  /* OPERATORS - assign op */
A68_32 * WIWAELA;  /* YIELD */
A68_131 * XIWAELA;  /* YIELD */
A68_BOOL * YIWAELA;  /* YIELD */
A_PROC_ENTRY(erase_decldata);
 /* line 256: */
 /* line 257: */
{ 
LHWAELA_upb = (*(&(Set->Version))).upb;
 /* line 259: */
A_CLOSURE( NHWAELA_generator, OHWAELA_generator, PHWAELA_generator );
(( PHWAELA_generator * ) ( NHWAELA_generator.nonlocals )) -> LHWAELA_upb = LHWAELA_upb;
A_CALLPROC(NHWAELA_generator,(A68_FALSE, &SHWAELA),(A68_FALSE, &SHWAELA,(NHWAELA_generator).nonlocals));
THWAELA_newversion = SHWAELA;
 /* line 260: */
A_CLOSURE( VHWAELA_generator, WHWAELA_generator, XHWAELA_generator );
(( XHWAELA_generator * ) ( VHWAELA_generator.nonlocals )) -> LHWAELA_upb = LHWAELA_upb;
A_CALLPROC(VHWAELA_generator,(A68_FALSE, &AIWAELA),(A68_FALSE, &AIWAELA,(VHWAELA_generator).nonlocals));
BIWAELA_newdata = AIWAELA;
 /* line 261: */
 /* line 262: */
if ( (Declno>1) )
{ 
DIWAELA = (*(&(Set->Version))) ;
FIWAELA = A_VTRIM(CIWAELA,(THWAELA_newversion),A_VTSCRIPT(&(CIWAELA.upb),(THWAELA_newversion).upb,1,(Declno-1))) ;
GIWAELA = A_VTRIM(EIWAELA,(DIWAELA),A_VTSCRIPT(&(EIWAELA.upb),(DIWAELA).upb,1,(Declno-1))) ;
A_VASSIGN2(GIWAELA,FIWAELA,A68_INT );
 /* line 263: */
 /* line 264: */
IIWAELA = (*(&(Set->Data))) ;
KIWAELA = A_VTRIM(HIWAELA,(BIWAELA_newdata),A_VTSCRIPT(&(HIWAELA.upb),(BIWAELA_newdata).upb,1,(Declno-1))) ;
LIWAELA = A_VTRIM(JIWAELA,(IIWAELA),A_VTSCRIPT(&(JIWAELA.upb),(IIWAELA).upb,1,(Declno-1))) ;
A_VASSIGN2(LIWAELA,KIWAELA,A68_130 );
} 
 /* line 265: */
 /* line 266: */
if ( (Declno<LHWAELA_upb) )
{ 
NIWAELA = (*(&(Set->Version))) ;
PIWAELA = A_VTRIM(MIWAELA,(THWAELA_newversion),A_VTSCRIPT(&(MIWAELA.upb),(THWAELA_newversion).upb,Declno,(THWAELA_newversion).upb)) ;
QIWAELA = A_VTRIM(OIWAELA,(NIWAELA),A_VTSCRIPT(&(OIWAELA.upb),(NIWAELA).upb,(Declno+1),(NIWAELA).upb)) ;
A_VASSIGN2(QIWAELA,PIWAELA,A68_INT );
 /* line 267: */
 /* line 268: */
SIWAELA = (*(&(Set->Data))) ;
UIWAELA = A_VTRIM(RIWAELA,(BIWAELA_newdata),A_VTSCRIPT(&(RIWAELA.upb),(BIWAELA_newdata).upb,Declno,(BIWAELA_newdata).upb)) ;
VIWAELA = A_VTRIM(TIWAELA,(SIWAELA),A_VTSCRIPT(&(TIWAELA.upb),(SIWAELA).upb,(Declno+1),(SIWAELA).upb)) ;
A_VASSIGN2(VIWAELA,UIWAELA,A68_130 );
} 
 /* line 269: */
WIWAELA = (&(Set->Version)) ;
(*WIWAELA) = THWAELA_newversion;
 /* line 270: */
XIWAELA = (&(Set->Data)) ;
(*XIWAELA) = BIWAELA_newdata;
 /* line 271: */
 /* line 272: */
YIWAELA = (&(Set->Changed)) ;
(*YIWAELA) = A68_TRUE;
} 
A_PROC_EXIT(erase_decldata);
return;
} 
#undef NL

A68_VOID  CJWAELA_erase_declattributes(A68_189 * Ct, A68_INT  Declno, A68_108  Msg)
{ 
A68_182 * DJWAELA_set;
A_PROC_ENTRY(erase_declattributes);
 /* line 275: */
 /* line 276: */
{ 
CCWAELA_get_all_declattributes(Ct, Msg);
 /* line 277: */
DJWAELA_set = (*(&(Ct->Declattributes)));
 /* line 278: */
for ( ;; )
{ 
 /* line 279: */
if ( !((DJWAELA_set!=LTJAELA_nildeclattributes)) ) break;
KHWAELA_erase_decldata(DJWAELA_set, Declno, Msg);
 /* line 280: */
 /* line 281: */
DJWAELA_set = (*(&(DJWAELA_set->Rest)));
}
 /* line 282: */
} 
A_PROC_EXIT(erase_declattributes);
return;
} 
#undef NL

A68_VOID  GJWAELA_clear_declattributes(A68_189 * Ct, A68_108  Msg)
{ 
A68_182 * HJWAELA_set;
A68_182  IJWAELA;  /* collateral clause result */
A68_33  KJWAELA_generator;   /* proc value of non-global proc */
A68_32  PJWAELA;  /* avoid structure result */
A68_234  RJWAELA_generator;   /* proc value of non-global proc */
A68_131  WJWAELA;  /* avoid structure result */
A_PROC_ENTRY(clear_declattributes);
 /* line 285: */
 /* line 286: */
{ 
CCWAELA_get_all_declattributes(Ct, Msg);
 /* line 287: */
HJWAELA_set = (*(&(Ct->Declattributes)));
 /* line 288: */
for ( ;; )
{ 
 /* line 289: */
if ( !((HJWAELA_set!=LTJAELA_nildeclattributes)) ) break;
 /* line 290: */
IJWAELA.Key = (*(&(HJWAELA_set->Key)));
IJWAELA.Changed = A68_TRUE;
A_CLOSURE( KJWAELA_generator, LJWAELA_generator, MJWAELA_generator );
 /* line 291: */
A_CALLPROC(KJWAELA_generator,(A68_FALSE, &PJWAELA),(A68_FALSE, &PJWAELA,(KJWAELA_generator).nonlocals));
IJWAELA.Version = PJWAELA;
A_CLOSURE( RJWAELA_generator, SJWAELA_generator, TJWAELA_generator );
A_CALLPROC(RJWAELA_generator,(A68_FALSE, &WJWAELA),(A68_FALSE, &WJWAELA,(RJWAELA_generator).nonlocals));
IJWAELA.Data = WJWAELA;
IJWAELA.Rest = (*(&(HJWAELA_set->Rest)));
 /* line 292: */
(*HJWAELA_set) = IJWAELA ;
HJWAELA_set = (*(&(HJWAELA_set->Rest)));
}
 /* line 293: */
 /* line 296: */
} 
A_PROC_EXIT(clear_declattributes);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void DZVAELA(void)   /* initialise DECS attrdecls */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/attrdecls.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/attrlevel1.m","./mfiles/libmodes.m","./mfiles/databasebuffers.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
MPOAELA();   /* USE attrlevel1 */
FTJAELA();   /* USE libmodes */
NWIAELA();   /* USE databasebuffers */
JFAAOSI();   /* USE messageproc */
JSCAOST();   /* USE basics */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ella/assoc/./a68files/attrdecls.a68";
A_config.translation_time = "Tue Apr  4 10:37:45 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "CZVAELA (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:37:45 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS attrdecls);
UEAALIB_a68config(LGAALIB_configinfo, HZVAELA);
 /* line 67: */
 /* line 73: */
 /* line 75: */
 /* line 84: */
 /* line 102: */
 /* line 117: */
 /* line 141: */
 /* line 168: */
 /* line 178: */
 /* line 188: */
 /* line 223: */
 /* line 238: */
 /* line 240: */
 /* line 249: */
 /* line 255: */
 /* line 274: */
 /* line 284: */
 /* line 303: */
A_PROC_EXIT(DECS attrdecls);
} 
#undef NL
/* end of translation of ./a68files/attrdecls.a68 */
