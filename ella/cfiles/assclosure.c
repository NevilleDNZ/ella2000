
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
/* UNAME:LQDBELA */
#include "Asupport.h"
struct A68t31{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t31  A68_31 ;    /* STRUCT(REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t32,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t32  A68_32 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t33,(A68_CHAR ,A68_VC *),(A68_CHAR ,A68_VC *,void *));
typedef struct A68t33  A68_33 ;    /* PROC(CHAR) REF MODE26 */
struct A68t35 ;

A_PROCEDURE(A68_VOID ,A68t34,(struct A68t35 ),(struct A68t35 ,void *));
typedef struct A68t34  A68_34 ;    /* PROC(MODE35) VOID */
A_VECTOR(A68_INT ,A68t36);
typedef struct A68t36  A68_36 ;    /* VECTOR [] INT */
A_VECTOR(A68_BOOL ,A68t37);
typedef struct A68t37  A68_37 ;    /* VECTOR [] BOOL */
A_VECTOR(A68_BITS ,A68t38);
typedef struct A68t38  A68_38 ;    /* VECTOR [] BITS */
struct A68t35 { A68_INT mode; union {
A68_VC  mode1;
struct A68t36  mode2;
struct A68t37  mode3;
struct A68t38  mode4;
} data; };
typedef struct A68t35  A68_35 ;    /* UNION(REF MODE26,REF MODE36,REF MODE37,REF MODE38)  */

A_PROCEDURE(A68_VOID ,A68t39,(A68_VC ),(A68_VC ,void *));
typedef struct A68t39  A68_39 ;    /* PROC(REF MODE26) VOID */

A_PROCEDURE(A68_INT ,A68t40,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t40  A68_40 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t41,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t41  A68_41 ;    /* PROC(BITS,BITS) BITS */
struct A68t43 ;

A_PROCEDURE(A68_VOID ,A68t42,(struct A68t43 ,A68_INT ),(struct A68t43 ,A68_INT ,void *));
typedef struct A68t42  A68_42 ;    /* PROC(MODE43,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t43,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t43  A68_43 ;    /* PROC(CHAR) VOID */
struct A68t45 ;

A_PROCEDURE(A68_INT ,A68t44,(struct A68t45 ),(struct A68t45 ,void *));
typedef struct A68t44  A68_44 ;    /* PROC(MODE45) INT */

A_PROCEDURE(A68_CHAR ,A68t45,(void),(void *));
typedef struct A68t45  A68_45 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t46,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t46  A68_46 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t47,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t47  A68_47 ;    /* PROC(MODE26,INT) MODE26 */

A_PROCEDURE(A68_INT ,A68t48,(void),(void *));
typedef struct A68t48  A68_48 ;    /* PROC INT */

A_PROCEDURE(A68_INT ,A68t49,(A68_INT ),(A68_INT ,void *));
typedef struct A68t49  A68_49 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t50,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t50  A68_50 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t51,(A68_VC *),(A68_VC *,void *));
typedef struct A68t51  A68_51 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_INT ,A68t52,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t52  A68_52 ;    /* PROC(INT,INT,REF BOOL) INT */
struct A68t54 ;

A_PROCEDURE(A68_BOOL ,A68t53,(A68_VC ,A68_INT *,struct A68t54 ),(A68_VC ,A68_INT *,struct A68t54 ,void *));
typedef struct A68t53  A68_53 ;    /* PROC(MODE26,REF INT,MODE54) BOOL */
struct A68t55 ;
struct A68t56 ;

A_PROCEDURE(A68_VOID ,A68t54,(struct A68t55 ,struct A68t56 ),(struct A68t55 ,struct A68t56 ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(MODE55,MODE56) VOID */
struct A68t55{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t57 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t55  A68_55 ;    /* STRUCT(INT,REF MODE57,BITS)  */
A_VECTOR(A68_VC ,A68t56);
typedef struct A68t56  A68_56 ;    /* VECTOR [] MODE26 */
A_VECTOR(struct A68t59 ,A68t58);
typedef struct A68t58  A68_58 ;    /* VECTOR [] MODE59 */
struct A68t59{
struct A68t55  Msgno;
A68_VC  Text;
};
typedef struct A68t59  A68_59 ;    /* STRUCT(MODE55,REF MODE26)  */
struct A68t57{
A68_VC  Name;
struct A68t58  Messages;
};
typedef struct A68t57  A68_57 ;    /* STRUCT(REF MODE26,REF MODE58)  */

A_PROCEDURE(A68_VOID ,A68t60,(A68_VC ),(A68_VC ,void *));
typedef struct A68t60  A68_60 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t61,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t61  A68_61 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t62,(A68_BOOL ,struct A68t36 *),(A68_BOOL ,struct A68t36 *,void *));
typedef struct A68t62  A68_62 ;    /* PROC(BOOL) MODE36 */
struct A68t64{
A68_INT  Status;
A_PAD_INT(PAD_3)
};
typedef struct A68t64  A68_64 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_VOID ,A68t65,(A68_VC ,A68_INT *,struct A68t64 *),(A68_VC ,A68_INT *,struct A68t64 *,void *));
typedef struct A68t65  A68_65 ;    /* PROC(REF MODE26,REF INT) MODE64 */
struct A68t63{
A68_INT  Charnumber;
A_PAD_INT(PAD_4)
A68_INT  Linenumber;
A_PAD_INT(PAD_5)
A68_INT  Indent;
A_PAD_INT(PAD_6)
A68_INT  Width;
A_PAD_INT(PAD_7)
A68_INT  Sizeincr;
A_PAD_INT(PAD_8)
struct A68t64  Status;
A68_VC  Buffer;
A68_BOOL  Buffered;
A_PAD_BOOL(PAD_9)
A68_BOOL  Separate;
A_PAD_BOOL(PAD_10)
A68_BOOL  Input;
A_PAD_BOOL(PAD_11)
struct A68t60  Putbuffer;
struct A68t65  Getbuffer;
};
typedef struct A68t63  A68_63 ;    /* STRUCT(INT,INT,INT,INT,INT,MODE64,REF MODE26,BOOL,BOOL,BOOL,MODE60,MODE65)  */

A_PROCEDURE(A68_VOID ,A68t66,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t66  A68_66 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t67,(struct A68t36 ,struct A68t36 *),(struct A68t36 ,struct A68t36 *,void *));
typedef struct A68t67  A68_67 ;    /* PROC(MODE36) REF MODE36 */

A_PROCEDURE(A68_VOID ,A68t68,(A68_INT ,struct A68t36 *),(A68_INT ,struct A68t36 *,void *));
typedef struct A68t68  A68_68 ;    /* PROC(INT) REF MODE36 */

A_PROCEDURE(A68_VOID ,A68t69,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t69  A68_69 ;    /* PROC(REF MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t70,(struct A68t56 ,A68_VC *),(struct A68t56 ,A68_VC *,void *));
typedef struct A68t70  A68_70 ;    /* PROC(MODE56) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t71,(A68_CHAR ,A68_INT ,A68_VC *),(A68_CHAR ,A68_INT ,A68_VC *,void *));
typedef struct A68t71  A68_71 ;    /* PROC(CHAR,INT) MODE26 */
struct A68t73 ;

A_PROCEDURE(A68_VOID ,A68t72,(struct A68t73 ,A68_VC *),(struct A68t73 ,A68_VC *,void *));
typedef struct A68t72  A68_72 ;    /* PROC(MODE73) MODE26 */
struct A68t73 { A68_INT mode; union {
A68_BITS  mode1;
A68_INT  mode2;
A68_SBITS  mode3;
A68_SINT  mode4;
A68_CHAR  mode5;
} data; };
typedef struct A68t73  A68_73 ;    /* UNION(BITS,INT,SHORT BITS,SHORT INT,CHAR)  */

A_PROCEDURE(A68_VOID ,A68t74,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t74  A68_74 ;    /* PROC(INT) MODE26 */
A_VECTOR(A68_REAL ,A68t76);
typedef struct A68t76  A68_76 ;    /* VECTOR [] REAL */

A_PROCEDURE(A68_VOID ,A68t77,(struct A68t63 *),(struct A68t63 *,void *));
typedef struct A68t77  A68_77 ;    /* PROC(REF MODE63) VOID */
struct A68t78{
A68_INT  Int;
A_PAD_INT(PAD_12)
A68_INT  Width;
A_PAD_INT(PAD_13)
};
typedef struct A68t78  A68_78 ;    /* STRUCT(INT,INT)  */
struct A68t79{
A68_VC  Str;
A68_INT  Width;
A_PAD_INT(PAD_14)
};
typedef struct A68t79  A68_79 ;    /* STRUCT(MODE26,INT)  */
struct A68t80{
A68_VC  Str;
A68_INT  Justify;
A_PAD_INT(PAD_15)
};
typedef struct A68t80  A68_80 ;    /* STRUCT(MODE26,INT)  */
struct A68t81{
A68_INT  Tab;
A_PAD_INT(PAD_16)
};
typedef struct A68t81  A68_81 ;    /* STRUCT(INT)  */
struct A68t82{
A68_INT  Pos;
A_PAD_INT(PAD_17)
};
typedef struct A68t82  A68_82 ;    /* STRUCT(INT)  */
struct A68t83{
A68_INT  After;
A_PAD_INT(PAD_18)
};
typedef struct A68t83  A68_83 ;    /* STRUCT(INT)  */
struct A68t84{
A68_INT  Spaces;
A_PAD_INT(PAD_19)
};
typedef struct A68t84  A68_84 ;    /* STRUCT(INT)  */
struct A68t85{
A68_INT  Lines;
A_PAD_INT(PAD_20)
};
typedef struct A68t85  A68_85 ;    /* STRUCT(INT)  */
struct A68t86{
A68_INT  Indent;
A_PAD_INT(PAD_21)
};
typedef struct A68t86  A68_86 ;    /* STRUCT(INT)  */
A_STRAIGHT(A68_VOID,A68t87);
typedef struct A68t87  A68_87 ;    /* STRAIGHT MODE75 */
struct A68t75 { A68_INT mode; union {
A68_INT  mode1;
struct A68t36  mode2;
A68_BITS  mode3;
struct A68t38  mode4;
A68_SBITS  mode5;
A68_CHAR  mode6;
A68_VC  mode7;
A68_BOOL  mode8;
struct A68t37  mode9;
A68_REAL  mode10;
struct A68t76  mode11;
struct A68t77  mode12;
struct A68t78  mode13;
struct A68t79  mode14;
struct A68t80  mode15;
struct A68t81  mode16;
struct A68t82  mode17;
struct A68t83  mode18;
struct A68t84  mode19;
struct A68t85  mode20;
struct A68t86  mode21;
struct A68t87  mode22;
} data; };
typedef struct A68t75  A68_75 ;    /* UNION(INT,MODE36,BITS,MODE38,SHORT BITS,CHAR,MODE26,BOOL,MODE37,REAL,MODE76,MODE77,MODE78,MODE79,MODE80,MODE81,MODE82,MODE83,MODE84,MODE85,MODE86,MODE87)  */

A_PROCEDURE(A68_VOID ,A68t88,(A68_BOOL ,struct A68t79 *),(A68_BOOL ,struct A68t79 *,void *));
typedef struct A68t88  A68_88 ;    /* PROC(BOOL) MODE79 */

A_PROCEDURE(A68_VOID ,A68t89,(A68_BOOL ,struct A68t80 *),(A68_BOOL ,struct A68t80 *,void *));
typedef struct A68t89  A68_89 ;    /* PROC(BOOL) MODE80 */

A_PROCEDURE(A68_INT ,A68t90,(struct A68t63 *),(struct A68t63 *,void *));
typedef struct A68t90  A68_90 ;    /* PROC(REF MODE63) INT */

A_PROCEDURE(A68_INT ,A68t91,(struct A68t63 *,A68_INT ),(struct A68t63 *,A68_INT ,void *));
typedef struct A68t91  A68_91 ;    /* PROC(REF MODE63,INT) INT */

A_PROCEDURE(A68_VOID ,A68t92,(A68_INT ,A68_INT ,struct A68t78 *),(A68_INT ,A68_INT ,struct A68t78 *,void *));
typedef struct A68t92  A68_92 ;    /* PROC(INT,INT) MODE78 */

A_PROCEDURE(A68_VOID ,A68t93,(A68_VC ,A68_INT ,struct A68t79 *),(A68_VC ,A68_INT ,struct A68t79 *,void *));
typedef struct A68t93  A68_93 ;    /* PROC(MODE26,INT) MODE79 */

A_PROCEDURE(A68_VOID ,A68t94,(A68_VC ,A68_INT ,struct A68t80 *),(A68_VC ,A68_INT ,struct A68t80 *,void *));
typedef struct A68t94  A68_94 ;    /* PROC(MODE26,INT) MODE80 */

A_PROCEDURE(A68_VOID ,A68t95,(A68_INT ,struct A68t81 *),(A68_INT ,struct A68t81 *,void *));
typedef struct A68t95  A68_95 ;    /* PROC(INT) MODE81 */

A_PROCEDURE(A68_VOID ,A68t96,(A68_INT ,struct A68t82 *),(A68_INT ,struct A68t82 *,void *));
typedef struct A68t96  A68_96 ;    /* PROC(INT) MODE82 */

A_PROCEDURE(A68_VOID ,A68t97,(A68_INT ,struct A68t83 *),(A68_INT ,struct A68t83 *,void *));
typedef struct A68t97  A68_97 ;    /* PROC(INT) MODE83 */

A_PROCEDURE(A68_VOID ,A68t98,(A68_INT ,struct A68t84 *),(A68_INT ,struct A68t84 *,void *));
typedef struct A68t98  A68_98 ;    /* PROC(INT) MODE84 */

A_PROCEDURE(A68_VOID ,A68t99,(A68_INT ,struct A68t85 *),(A68_INT ,struct A68t85 *,void *));
typedef struct A68t99  A68_99 ;    /* PROC(INT) MODE85 */

A_PROCEDURE(A68_VOID ,A68t100,(A68_INT ,struct A68t86 *),(A68_INT ,struct A68t86 *,void *));
typedef struct A68t100  A68_100 ;    /* PROC(INT) MODE86 */

A_PROCEDURE(A68_VOID ,A68t101,(struct A68t63 *,A68_VC ),(struct A68t63 *,A68_VC ,void *));
typedef struct A68t101  A68_101 ;    /* PROC(REF MODE63,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t102,(struct A68t63 *,A68_INT ,A68_INT ),(struct A68t63 *,A68_INT ,A68_INT ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(REF MODE63,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t103,(struct A68t63 *,A68_BITS ,A68_INT ),(struct A68t63 *,A68_BITS ,A68_INT ,void *));
typedef struct A68t103  A68_103 ;    /* PROC(REF MODE63,BITS,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t104,(struct A68t63 *,A68_REAL ,A68_INT ,A68_INT ),(struct A68t63 *,A68_REAL ,A68_INT ,A68_INT ,void *));
typedef struct A68t104  A68_104 ;    /* PROC(REF MODE63,REAL,INT,INT) VOID */
struct A68t106 ;

A_PROCEDURE(A68_VOID ,A68t105,(struct A68t63 *,struct A68t106 ),(struct A68t63 *,struct A68t106 ,void *));
typedef struct A68t105  A68_105 ;    /* PROC(REF MODE63,MODE106) VOID */
A_VECTOR(struct A68t75 ,A68t106);
typedef struct A68t106  A68_106 ;    /* VECTOR [] MODE75 */
struct A68t108 ;
struct A68t109 ;

A_PROCEDURE(struct A68t63 *,A68t107,(struct A68t108 ,struct A68t109 ),(struct A68t108 ,struct A68t109 ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(MODE108,MODE109) REF MODE63 */
struct A68t108 { A68_INT mode; union {
A68_INT  mode1;
A68_VC  mode2;
} data; };
typedef struct A68t108  A68_108 ;    /* UNION(INT,REF MODE26)  */
struct A68t109 { A68_INT mode; union {
struct A68t60  mode1;
struct A68t65  mode2;
} data; };
typedef struct A68t109  A68_109 ;    /* UNION(MODE60,MODE65)  */

A_PROCEDURE(A68_VOID ,A68t110,(A68_VC ,struct A68t106 ,A68_VC *),(A68_VC ,struct A68t106 ,A68_VC *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(REF MODE26,MODE106) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t111,(struct A68t63 *,A68_VC *),(struct A68t63 *,A68_VC *,void *));
typedef struct A68t111  A68_111 ;    /* PROC(REF MODE63) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t112,(struct A68t106 ,A68_VC *),(struct A68t106 ,A68_VC *,void *));
typedef struct A68t112  A68_112 ;    /* PROC(MODE106) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t113,(A68_BOOL ,struct A68t56 *),(A68_BOOL ,struct A68t56 *,void *));
typedef struct A68t113  A68_113 ;    /* PROC(BOOL) MODE56 */
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
struct A68t58  Messages;
A68_BOOL * Initialised;
struct A68t115  Setup;
};
typedef struct A68t114  A68_114 ;    /* STRUCT(MODE26,REF MODE58,REF BOOL,MODE115)  */

A_PROCEDURE(A68_VOID ,A68t117,(A68_BOOL ,struct A68t114 *),(A68_BOOL ,struct A68t114 *,void *));
typedef struct A68t117  A68_117 ;    /* PROC(BOOL) MODE114 */
A_VECTOR(A68_VC ,A68t118);
typedef struct A68t118  A68_118 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t119,(struct A68t56 ,struct A68t118 *),(struct A68t56 ,struct A68t118 *,void *));
typedef struct A68t119  A68_119 ;    /* PROC(MODE56) MODE118 */

A_PROCEDURE(A68_VOID ,A68t120,(struct A68t118 ,struct A68t56 *),(struct A68t118 ,struct A68t56 *,void *));
typedef struct A68t120  A68_120 ;    /* PROC(MODE118) MODE56 */
struct A68t122 ;

A_PROCEDURE(A68_BOOL ,A68t121,(struct A68t122 ),(struct A68t122 ,void *));
typedef struct A68t121  A68_121 ;    /* PROC(MODE122) BOOL */
struct A68t122 { A68_INT mode; union {
struct A68t55  mode1;
struct A68t59  mode2;
} data; };
typedef struct A68t122  A68_122 ;    /* UNION(MODE55,MODE59)  */

A_PROCEDURE(A68_INT ,A68t123,(struct A68t55 ),(struct A68t55 ,void *));
typedef struct A68t123  A68_123 ;    /* PROC(MODE55) INT */

A_PROCEDURE(A68_VOID ,A68t124,(A68_INT ,struct A68t114 ,struct A68t55 *),(A68_INT ,struct A68t114 ,struct A68t55 *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(INT,MODE114) MODE55 */

A_PROCEDURE(A68_BOOL ,A68t125,(struct A68t55 ,struct A68t114 ),(struct A68t55 ,struct A68t114 ,void *));
typedef struct A68t125  A68_125 ;    /* PROC(MODE55,MODE114) BOOL */

A_PROCEDURE(A68_VOID ,A68t126,(struct A68t55 ,struct A68t56 ,struct A68t59 *),(struct A68t55 ,struct A68t56 ,struct A68t59 *,void *));
typedef struct A68t126  A68_126 ;    /* PROC(MODE55,MODE56) MODE59 */
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
struct A68t36  Freelist;
struct A68t36  Freelist_ext;
struct A68t36  Pagetable_ext;
struct A68t134 * Gc_ptrs;
struct A68t135 * Instore_vars;
struct A68t136  Indirections;
A68_BOOL * Writeable;
A68_BOOL * Last_update_failed;
A68_BOOL * Appending;
A68_BOOL * Collectable;
};
typedef struct A68t129  A68_129 ;    /* STRUCT(REF MODE130,REF MODE130,REF MODE130,REF MODE130,REF MODE130,REF MODE131,REF MODE131,REF REF MODE132,REF REF MODE132,REF MODE133,REF MODE26,REF MODE26,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF MODE36,REF MODE36,REF MODE36,REF MODE134,REF MODE135,REF MODE136,REF BOOL,REF BOOL,REF BOOL,REF BOOL)  */
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

A_PROCEDURE(struct A68t132 *,A68t143,(A68_VC ,A68_INT ,struct A68t54 ),(A68_VC ,A68_INT ,struct A68t54 ,void *));
typedef struct A68t143  A68_143 ;    /* PROC(MODE26,INT,MODE54) REF MODE132 */

A_PROCEDURE(A68_VOID ,A68t144,(struct A68t132 *,A68_BOOL ,struct A68t128 *),(struct A68t132 *,A68_BOOL ,struct A68t128 *,void *));
typedef struct A68t144  A68_144 ;    /* PROC(REF MODE132,BOOL) MODE128 */

A_PROCEDURE(A68_BOOL ,A68t145,(struct A68t128 *),(struct A68t128 *,void *));
typedef struct A68t145  A68_145 ;    /* PROC(REF MODE128) BOOL */

A_PROCEDURE(A68_VOID ,A68t146,(struct A68t128 *,struct A68t130 ),(struct A68t128 *,struct A68t130 ,void *));
typedef struct A68t146  A68_146 ;    /* PROC(REF MODE128,MODE130) VOID */

A_PROCEDURE(A68_VOID ,A68t147,(struct A68t128 *,struct A68t130 ,struct A68t54 ),(struct A68t128 *,struct A68t130 ,struct A68t54 ,void *));
typedef struct A68t147  A68_147 ;    /* PROC(REF MODE128,MODE130,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t148,(struct A68t128 *,struct A68t54 ),(struct A68t128 *,struct A68t54 ,void *));
typedef struct A68t148  A68_148 ;    /* PROC(REF MODE128,MODE54) VOID */

A_PROCEDURE(A68_BOOL ,A68t149,(struct A68t128 *,A68_INT ),(struct A68t128 *,A68_INT ,void *));
typedef struct A68t149  A68_149 ;    /* PROC(REF MODE128,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t150,(struct A68t128 *,A68_INT ,struct A68t54 ),(struct A68t128 *,A68_INT ,struct A68t54 ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(REF MODE128,INT,MODE54) VOID */

A_PROCEDURE(struct A68t132 *,A68t151,(struct A68t128 *),(struct A68t128 *,void *));
typedef struct A68t151  A68_151 ;    /* PROC(REF MODE128) REF MODE132 */

A_PROCEDURE(A68_INT ,A68t152,(struct A68t128 *),(struct A68t128 *,void *));
typedef struct A68t152  A68_152 ;    /* PROC(REF MODE128) INT */

A_PROCEDURE(A68_VOID ,A68t153,(struct A68t128 *),(struct A68t128 *,void *));
typedef struct A68t153  A68_153 ;    /* PROC(REF MODE128) VOID */

A_PROCEDURE(A68_VOID ,A68t154,(struct A68t132 *,struct A68t132 *,struct A68t54 ),(struct A68t132 *,struct A68t132 *,struct A68t54 ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(REF MODE132,REF MODE132,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t155,(A68_INT ,struct A68t55 *),(A68_INT ,struct A68t55 *,void *));
typedef struct A68t155  A68_155 ;    /* PROC(INT) MODE55 */

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

A_PROCEDURE(struct A68t158 *,A68t159,(struct A68t127 *,struct A68t108 ,A68_INT ),(struct A68t127 *,struct A68t108 ,A68_INT ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(REF MODE127,MODE108,INT) REF MODE158 */

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

A_PROCEDURE(A68_VOID ,A68t167,(struct A68t127 *,struct A68t54 ),(struct A68t127 *,struct A68t54 ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(REF MODE127,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t168,(struct A68t127 *,A68_VC ,struct A68t54 ,struct A68t130 *),(struct A68t127 *,A68_VC ,struct A68t54 ,struct A68t130 *,void *));
typedef struct A68t168  A68_168 ;    /* PROC(REF MODE127,MODE26,MODE54) MODE130 */

A_PROCEDURE(A68_VOID ,A68t169,(struct A68t127 *,struct A68t131 ,struct A68t54 ,struct A68t130 *),(struct A68t127 *,struct A68t131 ,struct A68t54 ,struct A68t130 *,void *));
typedef struct A68t169  A68_169 ;    /* PROC(REF MODE127,MODE131,MODE54) MODE130 */

A_PROCEDURE(A68_INT ,A68t170,(struct A68t127 *,struct A68t130 ,struct A68t54 ),(struct A68t127 *,struct A68t130 ,struct A68t54 ,void *));
typedef struct A68t170  A68_170 ;    /* PROC(REF MODE127,MODE130,MODE54) INT */

A_PROCEDURE(A68_VOID ,A68t171,(struct A68t127 *,A68_VC ,struct A68t130 ,struct A68t54 ),(struct A68t127 *,A68_VC ,struct A68t130 ,struct A68t54 ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(REF MODE127,REF MODE26,MODE130,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t172,(struct A68t127 *,struct A68t131 ,struct A68t130 ,struct A68t54 ),(struct A68t127 *,struct A68t131 ,struct A68t130 ,struct A68t54 ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(REF MODE127,REF MODE131,MODE130,MODE54) VOID */

A_PROCEDURE(struct A68t158 *,A68t173,(struct A68t127 *,struct A68t108 ),(struct A68t127 *,struct A68t108 ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(REF MODE127,MODE108) REF MODE158 */

A_PROCEDURE(A68_VOID ,A68t174,(struct A68t158 *,struct A68t54 ),(struct A68t158 *,struct A68t54 ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(REF MODE158,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t175,(struct A68t158 *,struct A68t54 ,struct A68t130 *),(struct A68t158 *,struct A68t54 ,struct A68t130 *,void *));
typedef struct A68t175  A68_175 ;    /* PROC(REF MODE158,MODE54) MODE130 */

A_PROCEDURE(A68_INT ,A68t176,(A68_CHAR ,struct A68t158 *,struct A68t54 ),(A68_CHAR ,struct A68t158 *,struct A68t54 ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(CHAR,REF MODE158,MODE54) INT */

A_PROCEDURE(A68_INT ,A68t177,(A68_VC ,struct A68t158 *,struct A68t54 ),(A68_VC ,struct A68t158 *,struct A68t54 ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(MODE26,REF MODE158,MODE54) INT */

A_PROCEDURE(A68_INT ,A68t178,(A68_INT ,struct A68t158 *,struct A68t54 ),(A68_INT ,struct A68t158 *,struct A68t54 ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(INT,REF MODE158,MODE54) INT */

A_PROCEDURE(A68_INT ,A68t179,(A68_VC ,struct A68t158 *,struct A68t54 ),(A68_VC ,struct A68t158 *,struct A68t54 ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(REF MODE26,REF MODE158,MODE54) INT */

A_PROCEDURE(A68_INT ,A68t180,(A68_BOOL ,struct A68t158 *,struct A68t54 ),(A68_BOOL ,struct A68t158 *,struct A68t54 ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(BOOL,REF MODE158,MODE54) INT */
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
struct A68t36  Version;
struct A68t131  Data;
struct A68t182 * Rest;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(INT,BOOL,REF MODE36,REF MODE131,REF MODE182)  */
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
struct A68t37  Assemble;
A68_INT  Status;
A_PAD_INT(PAD_54)
A68_INT  Version;
A_PAD_INT(PAD_55)
A68_VC  Il;
struct A68t183 * Uses;
};
typedef struct A68t184  A68_184 ;    /* STRUCT(INT,REF MODE26,BOOL,BOOL,REF MODE37,INT,INT,REF MODE26,REF MODE183)  */
struct A68t185{
struct A68t31  Ctn;
A68_VC  Name;
A68_VC  Rename;
A68_INT  Sort;
A_PAD_INT(PAD_56)
struct A68t130  Info;
};
typedef struct A68t185  A68_185 ;    /* STRUCT(MODE31,REF MODE26,REF MODE26,INT,MODE130)  */
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
struct A68t31  Currentct;
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
struct A68t36  Keys;
struct A68t181 * Classes;
struct A68t191 * Contexts;
};
typedef struct A68t192  A68_192 ;    /* STRUCT(REF MODE26,REF MODE132,REF MODE127,MODE31,REF MODE26,BOOL,MODE131,INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,MODE36,REF MODE181,REF MODE191)  */

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

A_PROCEDURE(A68_BOOL ,A68t196,(struct A68t31 ,struct A68t31 ),(struct A68t31 ,struct A68t31 ,void *));
typedef struct A68t196  A68_196 ;    /* PROC(MODE31,MODE31) BOOL */

A_PROCEDURE(A68_BOOL ,A68t197,(struct A68t194 ,struct A68t194 ),(struct A68t194 ,struct A68t194 ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(MODE194,MODE194) BOOL */

A_PROCEDURE(A68_VOID ,A68t198,(struct A68t31 ,A68_VC *),(struct A68t31 ,A68_VC *,void *));
typedef struct A68t198  A68_198 ;    /* PROC(MODE31) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t199,(struct A68t194 ,A68_VC *),(struct A68t194 ,A68_VC *,void *));
typedef struct A68t199  A68_199 ;    /* PROC(MODE194) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t200,(struct A68t194 ,struct A68t31 *),(struct A68t194 ,struct A68t31 *,void *));
typedef struct A68t200  A68_200 ;    /* PROC(MODE194) MODE31 */

A_PROCEDURE(A68_BOOL ,A68t201,(struct A68t189 *,struct A68t54 ),(struct A68t189 *,struct A68t54 ,void *));
typedef struct A68t201  A68_201 ;    /* PROC(REF MODE189,MODE54) BOOL */

A_PROCEDURE(A68_VOID ,A68t202,(struct A68t54 ),(struct A68t54 ,void *));
typedef struct A68t202  A68_202 ;    /* PROC(MODE54) VOID */

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

A_PROCEDURE(struct A68t189 *,A68t209,(A68_VC ,struct A68t54 ),(A68_VC ,struct A68t54 ,void *));
typedef struct A68t209  A68_209 ;    /* PROC(REF MODE26,MODE54) REF MODE189 */

A_PROCEDURE(A68_VOID ,A68t210,(struct A68t189 *,A68_VC ,struct A68t54 ,struct A68t194 *),(struct A68t189 *,A68_VC ,struct A68t54 ,struct A68t194 *,void *));
typedef struct A68t210  A68_210 ;    /* PROC(REF MODE189,REF MODE26,MODE54) MODE194 */

A_PROCEDURE(A68_VOID ,A68t211,(struct A68t31 ,struct A68t54 ,struct A68t194 *),(struct A68t31 ,struct A68t54 ,struct A68t194 *,void *));
typedef struct A68t211  A68_211 ;    /* PROC(MODE31,MODE54) MODE194 */

A_PROCEDURE(struct A68t185 *,A68t212,(struct A68t194 ,A68_VC ,struct A68t54 ),(struct A68t194 ,A68_VC ,struct A68t54 ,void *));
typedef struct A68t212  A68_212 ;    /* PROC(MODE194,REF MODE26,MODE54) REF MODE185 */

A_PROCEDURE(A68_VOID ,A68t213,(struct A68t31 ),(struct A68t31 ,void *));
typedef struct A68t213  A68_213 ;    /* PROC(MODE31) VOID */

A_PROCEDURE(A68_VOID ,A68t214,(A68_INT ,struct A68t54 ),(A68_INT ,struct A68t54 ,void *));
typedef struct A68t214  A68_214 ;    /* PROC(INT,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t215,(void),(void *));
typedef struct A68t215  A68_215 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t216,(struct A68t130 *,struct A68t130 *,struct A68t130 *,struct A68t54 ),(struct A68t130 *,struct A68t130 *,struct A68t130 *,struct A68t54 ,void *));
typedef struct A68t216  A68_216 ;    /* PROC(REF MODE130,REF MODE130,REF MODE130,MODE54) VOID */

A_PROCEDURE(struct A68t191 *,A68t217,(struct A68t54 ),(struct A68t54 ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(MODE54) REF MODE191 */

A_PROCEDURE(A68_VOID ,A68t218,(struct A68t190 ,struct A68t54 ,struct A68t130 *),(struct A68t190 ,struct A68t54 ,struct A68t130 *,void *));
typedef struct A68t218  A68_218 ;    /* PROC(REF MODE190,MODE54) MODE130 */

A_PROCEDURE(A68_VOID ,A68t219,(struct A68t189 *,struct A68t54 ,struct A68t190 *),(struct A68t189 *,struct A68t54 ,struct A68t190 *,void *));
typedef struct A68t219  A68_219 ;    /* PROC(REF MODE189,MODE54) REF MODE190 */

A_PROCEDURE(A68_VOID ,A68t220,(struct A68t190 ),(struct A68t190 ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(REF MODE190) VOID */

A_PROCEDURE(A68_INT ,A68t221,(struct A68t189 *,A68_VC ,struct A68t54 ),(struct A68t189 *,A68_VC ,struct A68t54 ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(REF MODE189,REF MODE26,MODE54) INT */

A_PROCEDURE(struct A68t195 *,A68t222,(struct A68t189 *,A68_INT ),(struct A68t189 *,A68_INT ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(REF MODE189,INT) REF MODE195 */

A_PROCEDURE(struct A68t195 *,A68t223,(struct A68t194 ,A68_VC ),(struct A68t194 ,A68_VC ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(MODE194,REF MODE26) REF MODE195 */

A_PROCEDURE(A68_VOID ,A68t224,(A68_INT ,A68_INT ,struct A68t54 ),(A68_INT ,A68_INT ,struct A68t54 ,void *));
typedef struct A68t224  A68_224 ;    /* PROC(INT,INT,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t225,(A68_BOOL ,struct A68t54 ),(A68_BOOL ,struct A68t54 ,void *));
typedef struct A68t225  A68_225 ;    /* PROC(BOOL,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t226,(struct A68t127 *,struct A68t224 ,struct A68t54 ),(struct A68t127 *,struct A68t224 ,struct A68t54 ,void *));
typedef struct A68t226  A68_226 ;    /* PROC(REF MODE127,MODE224,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t227,(A68_VC ,struct A68t224 ,struct A68t54 ),(A68_VC ,struct A68t224 ,struct A68t54 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(MODE26,MODE224,MODE54) VOID */

A_PROCEDURE(A68_BOOL ,A68t228,(struct A68t54 ),(struct A68t54 ,void *));
typedef struct A68t228  A68_228 ;    /* PROC(MODE54) BOOL */

A_PROCEDURE(A68_INT ,A68t229,(A68_VC ,struct A68t190 ),(A68_VC ,struct A68t190 ,void *));
typedef struct A68t229  A68_229 ;    /* PROC(REF MODE26,REF MODE190) INT */

A_PROCEDURE(A68_BOOL ,A68t230,(struct A68t189 *,struct A68t190 ,A68_INT ,struct A68t54 ),(struct A68t189 *,struct A68t190 ,A68_INT ,struct A68t54 ,void *));
typedef struct A68t230  A68_230 ;    /* PROC(REF MODE189,REF MODE190,INT,MODE54) BOOL */

A_PROCEDURE(A68_VOID ,A68t231,(A68_INT ,struct A68t194 *),(A68_INT ,struct A68t194 *,void *));
typedef struct A68t231  A68_231 ;    /* PROC(INT) MODE194 */

A_PROCEDURE(A68_INT ,A68t232,(struct A68t194 ),(struct A68t194 ,void *));
typedef struct A68t232  A68_232 ;    /* PROC(MODE194) INT */

A_PROCEDURE(A68_INT ,A68t233,(struct A68t194 ,A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t54 ),(struct A68t194 ,A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t54 ,void *));
typedef struct A68t233  A68_233 ;    /* PROC(MODE194,BOOL,BOOL,BOOL,MODE54) INT */

A_PROCEDURE(A68_VOID ,A68t234,(struct A68t54 ,struct A68t130 *),(struct A68t54 ,struct A68t130 *,void *));
typedef struct A68t234  A68_234 ;    /* PROC(MODE54) MODE130 */
struct A68t235{
A68_INT  Version;
A_PAD_INT(PAD_63)
struct A68t130  Data;
};
typedef struct A68t235  A68_235 ;    /* STRUCT(INT,MODE130)  */

A_PROCEDURE(A68_VOID ,A68t236,(A68_VC ,A68_VC ,A68_INT ,struct A68t54 ),(A68_VC ,A68_VC ,A68_INT ,struct A68t54 ,void *));
typedef struct A68t236  A68_236 ;    /* PROC(MODE26,MODE26,INT,MODE54) VOID */

A_PROCEDURE(A68_BOOL ,A68t237,(A68_INT ),(A68_INT ,void *));
typedef struct A68t237  A68_237 ;    /* PROC(INT) BOOL */

A_PROCEDURE(struct A68t182 *,A68t238,(struct A68t189 *,A68_INT ,struct A68t54 ),(struct A68t189 *,A68_INT ,struct A68t54 ,void *));
typedef struct A68t238  A68_238 ;    /* PROC(REF MODE189,INT,MODE54) REF MODE182 */

A_PROCEDURE(A68_VOID ,A68t239,(struct A68t189 *,struct A68t54 ),(struct A68t189 *,struct A68t54 ,void *));
typedef struct A68t239  A68_239 ;    /* PROC(REF MODE189,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t240,(struct A68t189 *,struct A68t36 ,struct A68t54 ),(struct A68t189 *,struct A68t36 ,struct A68t54 ,void *));
typedef struct A68t240  A68_240 ;    /* PROC(REF MODE189,MODE36,MODE54) VOID */
struct A68t242 ;

A_PROCEDURE(A68_BOOL ,A68t241,(struct A68t189 *,struct A68t242 ,struct A68t54 ),(struct A68t189 *,struct A68t242 ,struct A68t54 ,void *));
typedef struct A68t241  A68_241 ;    /* PROC(REF MODE189,MODE242,MODE54) BOOL */

A_PROCEDURE(A68_BOOL ,A68t242,(struct A68t182 *,struct A68t54 ),(struct A68t182 *,struct A68t54 ,void *));
typedef struct A68t242  A68_242 ;    /* PROC(REF MODE182,MODE54) BOOL */

A_PROCEDURE(A68_VOID ,A68t243,(struct A68t189 *,A68_INT ,struct A68t36 ,A68_INT ,struct A68t131 ,struct A68t54 ),(struct A68t189 *,A68_INT ,struct A68t36 ,A68_INT ,struct A68t131 ,struct A68t54 ,void *));
typedef struct A68t243  A68_243 ;    /* PROC(REF MODE189,INT,REF MODE36,INT,REF MODE131,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t244,(struct A68t182 *,A68_INT ,struct A68t235 ,struct A68t54 ),(struct A68t182 *,A68_INT ,struct A68t235 ,struct A68t54 ,void *));
typedef struct A68t244  A68_244 ;    /* PROC(REF MODE182,INT,MODE235,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t245,(struct A68t182 *,A68_INT ,struct A68t54 ,struct A68t235 *),(struct A68t182 *,A68_INT ,struct A68t54 ,struct A68t235 *,void *));
typedef struct A68t245  A68_245 ;    /* PROC(REF MODE182,INT,MODE54) MODE235 */

A_PROCEDURE(A68_VOID ,A68t246,(struct A68t182 *,A68_INT ,struct A68t54 ),(struct A68t182 *,A68_INT ,struct A68t54 ,void *));
typedef struct A68t246  A68_246 ;    /* PROC(REF MODE182,INT,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t247,(struct A68t189 *,A68_INT ,struct A68t54 ),(struct A68t189 *,A68_INT ,struct A68t54 ,void *));
typedef struct A68t247  A68_247 ;    /* PROC(REF MODE189,INT,MODE54) VOID */
struct A68t248{
A68_VC  Id;
struct A68t248 * Rest;
};
typedef struct A68t248  A68_248 ;    /* STRUCT(REF MODE26,REF MODE248)  */
struct A68t249{
A68_INT  Int;
A_PAD_INT(PAD_64)
struct A68t249 * Rest;
};
typedef struct A68t249  A68_249 ;    /* STRUCT(INT,REF MODE249)  */
struct A68t250 { A68_INT mode; union {
struct A68t251 * mode1;
struct A68t252 * mode2;
struct A68t253 * mode3;
struct A68t254 * mode4;
struct A68t255 * mode5;
} data; };
typedef struct A68t250  A68_250 ;    /* UNION(REF MODE251,REF MODE252,REF MODE253,REF MODE254,REF MODE255)  */
struct A68t251{
A68_INT  Attrno;
A_PAD_INT(PAD_65)
};
typedef struct A68t251  A68_251 ;    /* STRUCT(INT)  */
struct A68t252{
A68_VC  Classname;
struct A68t248 * Strings;
};
typedef struct A68t252  A68_252 ;    /* STRUCT(REF MODE26,REF MODE248)  */
struct A68t253{
struct A68t250  Elem;
struct A68t253 * Rest;
};
typedef struct A68t253  A68_253 ;    /* STRUCT(MODE250,REF MODE253)  */
struct A68t254{
struct A68t250  Attr;
};
typedef struct A68t254  A68_254 ;    /* STRUCT(MODE250)  */
struct A68t255{
A68_INT  Attrnull;
A_PAD_INT(PAD_66)
};
typedef struct A68t255  A68_255 ;    /* STRUCT(INT)  */
struct A68t256{
A68_INT  Sort;
A_PAD_INT(PAD_67)
A68_VC  Attrname;
struct A68t250  Value;
struct A68t257 * Usage;
};
typedef struct A68t256  A68_256 ;    /* STRUCT(INT,REF MODE26,MODE250,REF MODE257)  */
struct A68t257{
A68_INT  Contextno;
A_PAD_INT(PAD_68)
A68_INT  Closureno;
A_PAD_INT(PAD_69)
A68_INT  Libv_spec;
A_PAD_INT(PAD_70)
A68_INT  Libv_body;
A_PAD_INT(PAD_71)
A68_BOOL  Import;
A_PAD_BOOL(PAD_72)
A68_BOOL  Export;
A_PAD_BOOL(PAD_73)
};
typedef struct A68t257  A68_257 ;    /* STRUCT(INT,INT,INT,INT,BOOL,BOOL)  */
struct A68t258{
struct A68t250  Tag;
};
typedef struct A68t258  A68_258 ;    /* STRUCT(MODE250)  */
struct A68t259 { A68_INT mode; union {
struct A68t260 * mode1;
struct A68t261 * mode2;
struct A68t262 * mode3;
struct A68t263 * mode4;
struct A68t264 * mode5;
struct A68t265 * mode6;
struct A68t266 * mode7;
struct A68t267 * mode8;
struct A68t268 * mode9;
struct A68t269 * mode10;
} data; };
typedef struct A68t259  A68_259 ;    /* UNION(REF MODE260,REF MODE261,REF MODE262,REF MODE263,REF MODE264,REF MODE265,REF MODE266,REF MODE267,REF MODE268,REF MODE269)  */
struct A68t260{
A68_INT  Int;
A_PAD_INT(PAD_74)
A68_VC  Text;
};
typedef struct A68t260  A68_260 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t261{
A68_INT  Sort;
A_PAD_INT(PAD_75)
struct A68t259  Test;
struct A68t259  Standard;
};
typedef struct A68t261  A68_261 ;    /* STRUCT(INT,MODE259,MODE259)  */
struct A68t262{
A68_INT  Nameno;
A_PAD_INT(PAD_76)
};
typedef struct A68t262  A68_262 ;    /* STRUCT(INT)  */
struct A68t263{
A68_INT  Intno;
A_PAD_INT(PAD_77)
};
typedef struct A68t263  A68_263 ;    /* STRUCT(INT)  */
struct A68t264{
struct A68t259  Left;
A68_INT  Sort;
A_PAD_INT(PAD_78)
struct A68t259  Right;
};
typedef struct A68t264  A68_264 ;    /* STRUCT(MODE259,INT,MODE259)  */
struct A68t265{
A68_INT  Sort;
A_PAD_INT(PAD_79)
struct A68t259  Right;
};
typedef struct A68t265  A68_265 ;    /* STRUCT(INT,MODE259)  */
struct A68t266{
struct A68t259  Cond;
struct A68t259  True;
struct A68t259  False;
};
typedef struct A68t266  A68_266 ;    /* STRUCT(MODE259,MODE259,MODE259)  */
struct A68t267{
struct A68t259  Formula;
};
typedef struct A68t267  A68_267 ;    /* STRUCT(MODE259)  */
struct A68t268{
A68_INT  Macparno;
A_PAD_INT(PAD_80)
};
typedef struct A68t268  A68_268 ;    /* STRUCT(INT)  */
struct A68t269{
A68_INT  Fnull;
A_PAD_INT(PAD_81)
};
typedef struct A68t269  A68_269 ;    /* STRUCT(INT)  */
struct A68t270{
struct A68t259  Tag;
};
typedef struct A68t270  A68_270 ;    /* STRUCT(MODE259)  */
struct A68t271{
struct A68t259  Formula;
struct A68t271 * Rest;
};
typedef struct A68t271  A68_271 ;    /* STRUCT(MODE259,REF MODE271)  */
struct A68t274{
struct A68t259  Lwb;
struct A68t259  Upb;
};
typedef struct A68t274  A68_274 ;    /* STRUCT(MODE259,MODE259)  */
struct A68t273 { A68_INT mode; union {
struct A68t260 * mode1;
struct A68t261 * mode2;
struct A68t262 * mode3;
struct A68t263 * mode4;
struct A68t264 * mode5;
struct A68t265 * mode6;
struct A68t266 * mode7;
struct A68t267 * mode8;
struct A68t268 * mode9;
struct A68t269 * mode10;
struct A68t274  mode11;
} data; };
typedef struct A68t273  A68_273 ;    /* UNION(REF MODE260,REF MODE261,REF MODE262,REF MODE263,REF MODE264,REF MODE265,REF MODE266,REF MODE267,REF MODE268,REF MODE269,MODE274)  */
struct A68t272{
A68_INT  Sort;
A_PAD_INT(PAD_82)
A68_VC  Intname;
struct A68t250  Attr;
struct A68t273  Value;
struct A68t257 * Usage;
};
typedef struct A68t272  A68_272 ;    /* STRUCT(INT,REF MODE26,MODE250,MODE273,REF MODE257)  */
struct A68t275 { A68_INT mode; union {
struct A68t276 * mode1;
struct A68t277 * mode2;
struct A68t278 * mode3;
struct A68t279 * mode4;
struct A68t280 * mode5;
struct A68t281 * mode6;
struct A68t282 * mode7;
struct A68t268 * mode8;
struct A68t283 * mode9;
} data; };
typedef struct A68t275  A68_275 ;    /* UNION(REF MODE276,REF MODE277,REF MODE278,REF MODE279,REF MODE280,REF MODE281,REF MODE282,REF MODE268,REF MODE283)  */
struct A68t276{
A68_INT  Typeno;
A_PAD_INT(PAD_83)
};
typedef struct A68t276  A68_276 ;    /* STRUCT(INT)  */
struct A68t277{
struct A68t259  Size;
struct A68t275  Elem;
};
typedef struct A68t277  A68_277 ;    /* STRUCT(MODE259,MODE275)  */
struct A68t278{
struct A68t275  Elem;
struct A68t278 * Rest;
};
typedef struct A68t278  A68_278 ;    /* STRUCT(MODE275,REF MODE278)  */
struct A68t279{
struct A68t275  From;
struct A68t275  To;
};
typedef struct A68t279  A68_279 ;    /* STRUCT(MODE275,MODE275)  */
struct A68t280{
struct A68t275  Type;
};
typedef struct A68t280  A68_280 ;    /* STRUCT(MODE275)  */
struct A68t281{
struct A68t259  Size;
struct A68t275  Char;
};
typedef struct A68t281  A68_281 ;    /* STRUCT(MODE259,MODE275)  */
struct A68t282{
A68_INT  Tvoid;
A_PAD_INT(PAD_84)
};
typedef struct A68t282  A68_282 ;    /* STRUCT(INT)  */
struct A68t283{
A68_INT  Tnull;
A_PAD_INT(PAD_85)
};
typedef struct A68t283  A68_283 ;    /* STRUCT(INT)  */
struct A68t284{
struct A68t275  Tag;
};
typedef struct A68t284  A68_284 ;    /* STRUCT(MODE275)  */
struct A68t285{
A68_VC  Tagname;
A68_VC  Chars;
};
typedef struct A68t285  A68_285 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t286{
A68_VC  Altname;
struct A68t275  Assoc;
};
typedef struct A68t286  A68_286 ;    /* STRUCT(REF MODE26,MODE275)  */
struct A68t287{
A68_VC  Tagname;
struct A68t274  Range;
};
typedef struct A68t287  A68_287 ;    /* STRUCT(REF MODE26,MODE274)  */
A_VECTOR(struct A68t286 ,A68t289);
typedef struct A68t289  A68_289 ;    /* VECTOR [] MODE286 */
struct A68t288 { A68_INT mode; union {
struct A68t289  mode1;
struct A68t287 * mode2;
struct A68t284 * mode3;
struct A68t285 * mode4;
} data; };
typedef struct A68t288  A68_288 ;    /* UNION(REF MODE289,REF MODE287,REF MODE284,REF MODE285)  */
struct A68t290{
A68_INT  Sort;
A_PAD_INT(PAD_86)
A68_VC  Typename;
struct A68t250  Attr;
struct A68t288  Body;
struct A68t257 * Usage;
};
typedef struct A68t290  A68_290 ;    /* STRUCT(INT,REF MODE26,MODE250,MODE288,REF MODE257)  */
struct A68t291{
A68_INT  Constno;
A_PAD_INT(PAD_87)
};
typedef struct A68t291  A68_291 ;    /* STRUCT(INT)  */
struct A68t292{
A68_INT  Typeno;
A_PAD_INT(PAD_88)
A68_INT  Primno;
A_PAD_INT(PAD_89)
};
typedef struct A68t292  A68_292 ;    /* STRUCT(INT,INT)  */
struct A68t293{
A68_INT  Typeno;
A_PAD_INT(PAD_90)
struct A68t259  Index;
};
typedef struct A68t293  A68_293 ;    /* STRUCT(INT,MODE259)  */
struct A68t294{
A68_INT  Typeno;
A_PAD_INT(PAD_91)
struct A68t274  Range;
};
typedef struct A68t294  A68_294 ;    /* STRUCT(INT,MODE274)  */
struct A68t295{
struct A68t275  Querytype;
};
typedef struct A68t295  A68_295 ;    /* STRUCT(MODE275)  */
struct A68t297 { A68_INT mode; union {
struct A68t291 * mode1;
struct A68t292 * mode2;
struct A68t293 * mode3;
struct A68t295 * mode4;
struct A68t298 * mode5;
struct A68t299 * mode6;
struct A68t280 * mode7;
struct A68t294 * mode8;
struct A68t300 * mode9;
struct A68t301 * mode10;
struct A68t302 * mode11;
struct A68t303 * mode12;
struct A68t304 * mode13;
struct A68t305 * mode14;
struct A68t306 * mode15;
struct A68t307 * mode16;
struct A68t308 * mode17;
struct A68t309 * mode18;
struct A68t310 * mode19;
struct A68t311 * mode20;
struct A68t312 * mode21;
struct A68t313 * mode22;
struct A68t314 * mode23;
struct A68t315 * mode24;
struct A68t316 * mode25;
struct A68t317 * mode26;
struct A68t318 * mode27;
struct A68t319 * mode28;
struct A68t320 * mode29;
struct A68t321 * mode30;
struct A68t322 * mode31;
struct A68t323 * mode32;
struct A68t324 * mode33;
struct A68t325 * mode34;
} data; };
typedef struct A68t297  A68_297 ;    /* UNION(REF MODE291,REF MODE292,REF MODE293,REF MODE295,REF MODE298,REF MODE299,REF MODE280,REF MODE294,REF MODE300,REF MODE301,REF MODE302,REF MODE303,REF MODE304,REF MODE305,REF MODE306,REF MODE307,REF MODE308,REF MODE309,REF MODE310,REF MODE311,REF MODE312,REF MODE313,REF MODE314,REF MODE315,REF MODE316,REF MODE317,REF MODE318,REF MODE319,REF MODE320,REF MODE321,REF MODE322,REF MODE323,REF MODE324,REF MODE325)  */
struct A68t296{
A68_INT  Sort;
A_PAD_INT(PAD_92)
A68_VC  Constname;
struct A68t250  Attr;
struct A68t297  Value;
struct A68t257 * Usage;
};
typedef struct A68t296  A68_296 ;    /* STRUCT(INT,REF MODE26,MODE250,MODE297,REF MODE257)  */
struct A68t298{
A68_INT  Typeno;
A_PAD_INT(PAD_93)
struct A68t36  String;
};
typedef struct A68t298  A68_298 ;    /* STRUCT(INT,REF MODE36)  */
struct A68t299{
A68_INT  Cvoid;
A_PAD_INT(PAD_94)
};
typedef struct A68t299  A68_299 ;    /* STRUCT(INT)  */
struct A68t300{
A68_INT  Typeno;
A_PAD_INT(PAD_95)
A68_INT  Firstno;
A_PAD_INT(PAD_96)
A68_INT  Lastno;
A_PAD_INT(PAD_97)
};
typedef struct A68t300  A68_300 ;    /* STRUCT(INT,INT,INT)  */
struct A68t301{
struct A68t297  Alt;
struct A68t301 * Rest;
};
typedef struct A68t301  A68_301 ;    /* STRUCT(MODE297,REF MODE301)  */
struct A68t302{
A68_INT  Sort;
A_PAD_INT(PAD_98)
A68_INT  Nameno;
A_PAD_INT(PAD_99)
};
typedef struct A68t302  A68_302 ;    /* STRUCT(INT,INT)  */
struct A68t303{
struct A68t297  Sink;
struct A68t297  Source;
};
typedef struct A68t303  A68_303 ;    /* STRUCT(MODE297,MODE297)  */
struct A68t304{
A68_INT  Typeno;
A_PAD_INT(PAD_100)
A68_INT  Altno;
A_PAD_INT(PAD_101)
struct A68t297  Assoc;
};
typedef struct A68t304  A68_304 ;    /* STRUCT(INT,INT,MODE297)  */
struct A68t305{
struct A68t297  Extract;
A68_INT  Typeno;
A_PAD_INT(PAD_102)
A68_INT  Altno;
A_PAD_INT(PAD_103)
};
typedef struct A68t305  A68_305 ;    /* STRUCT(MODE297,INT,INT)  */
struct A68t306{
struct A68t297  Unit;
A68_INT  Fnno;
A_PAD_INT(PAD_104)
A68_INT  Nameno;
A_PAD_INT(PAD_105)
};
typedef struct A68t306  A68_306 ;    /* STRUCT(MODE297,INT,INT)  */
struct A68t307{
struct A68t297  Unit;
struct A68t259  Index;
};
typedef struct A68t307  A68_307 ;    /* STRUCT(MODE297,MODE259)  */
struct A68t308{
struct A68t297  Unit;
struct A68t274  Range;
};
typedef struct A68t308  A68_308 ;    /* STRUCT(MODE297,MODE274)  */
struct A68t309{
struct A68t297  Unit;
struct A68t297  Index;
};
typedef struct A68t309  A68_309 ;    /* STRUCT(MODE297,MODE297)  */
struct A68t310{
struct A68t297  Unit;
struct A68t297  Index;
struct A68t297  From;
};
typedef struct A68t310  A68_310 ;    /* STRUCT(MODE297,MODE297,MODE297)  */
struct A68t311{
struct A68t259  Size;
struct A68t297  Elem;
};
typedef struct A68t311  A68_311 ;    /* STRUCT(MODE259,MODE297)  */
struct A68t312{
struct A68t297  Elem;
struct A68t312 * Rest;
};
typedef struct A68t312  A68_312 ;    /* STRUCT(MODE297,REF MODE312)  */
struct A68t313{
A68_BOOL  String;
A_PAD_BOOL(PAD_106)
A68_INT  Sort;
A_PAD_INT(PAD_107)
struct A68t297  Left;
struct A68t297  Right;
};
typedef struct A68t313  A68_313 ;    /* STRUCT(BOOL,INT,MODE297,MODE297)  */
A_VECTOR(struct A68t340 ,A68t339);
typedef struct A68t339  A68_339 ;    /* VECTOR [] MODE340 */
struct A68t342{
struct A68t297  Tag;
};
typedef struct A68t342  A68_342 ;    /* STRUCT(MODE297)  */
struct A68t337{
A68_INT  Fnno;
A_PAD_INT(PAD_108)
struct A68t339  Macparams;
struct A68t250  Attr;
};
typedef struct A68t337  A68_337 ;    /* STRUCT(INT,REF MODE339,MODE250)  */
struct A68t341 { A68_INT mode; union {
struct A68t258  mode1;
struct A68t270  mode2;
struct A68t284  mode3;
struct A68t342  mode4;
struct A68t337  mode5;
} data; };
typedef struct A68t341  A68_341 ;    /* UNION(MODE258,MODE270,MODE284,MODE342,MODE337)  */
struct A68t340{
A68_INT  Sort;
A_PAD_INT(PAD_109)
struct A68t341  Param;
};
typedef struct A68t340  A68_340 ;    /* STRUCT(INT,MODE341)  */
struct A68t314{
struct A68t337  Inst;
struct A68t297  Right;
};
typedef struct A68t314  A68_314 ;    /* STRUCT(MODE337,MODE297)  */
struct A68t315{
struct A68t297  Left;
struct A68t337  Inst;
struct A68t297  Right;
};
typedef struct A68t315  A68_315 ;    /* STRUCT(MODE297,MODE337,MODE297)  */
struct A68t316{
struct A68t297  Input;
struct A68t357 * Choices;
};
typedef struct A68t316  A68_316 ;    /* STRUCT(MODE297,REF MODE357)  */
struct A68t317{
struct A68t259  Cond;
struct A68t297  True;
struct A68t297  False;
};
typedef struct A68t317  A68_317 ;    /* STRUCT(MODE259,MODE297,MODE297)  */
struct A68t318{
struct A68t259  Repl;
struct A68t297  Body;
};
typedef struct A68t318  A68_318 ;    /* STRUCT(MODE259,MODE297)  */
struct A68t319{
struct A68t345 * Body;
struct A68t297  Output;
};
typedef struct A68t319  A68_319 ;    /* STRUCT(REF MODE345,MODE297)  */
struct A68t320{
struct A68t326 * Body;
struct A68t297  Output;
};
typedef struct A68t320  A68_320 ;    /* STRUCT(REF MODE326,MODE297)  */
struct A68t321{
struct A68t297  Unit;
struct A68t250  Attr;
};
typedef struct A68t321  A68_321 ;    /* STRUCT(MODE297,MODE250)  */
struct A68t322{
struct A68t297  Unit;
struct A68t261  Check;
};
typedef struct A68t322  A68_322 ;    /* STRUCT(MODE297,MODE261)  */
struct A68t323{
struct A68t297  Unit;
};
typedef struct A68t323  A68_323 ;    /* STRUCT(MODE297)  */
struct A68t324{
struct A68t259  Size;
struct A68t297  Char;
};
typedef struct A68t324  A68_324 ;    /* STRUCT(MODE259,MODE297)  */
struct A68t325{
A68_INT  Unull;
A_PAD_INT(PAD_110)
};
typedef struct A68t325  A68_325 ;    /* STRUCT(INT)  */
struct A68t328{
A68_INT  Fnno;
A_PAD_INT(PAD_111)
};
typedef struct A68t328  A68_328 ;    /* STRUCT(INT)  */
struct A68t327 { A68_INT mode; union {
struct A68t251  mode1;
struct A68t263  mode2;
struct A68t276  mode3;
struct A68t291  mode4;
struct A68t328  mode5;
struct A68t329 * mode6;
struct A68t330 * mode7;
struct A68t331 * mode8;
struct A68t332 * mode9;
struct A68t333 * mode10;
struct A68t334 * mode11;
struct A68t335 * mode12;
} data; };
typedef struct A68t327  A68_327 ;    /* UNION(MODE251,MODE263,MODE276,MODE291,MODE328,REF MODE329,REF MODE330,REF MODE331,REF MODE332,REF MODE333,REF MODE334,REF MODE335)  */
struct A68t326{
struct A68t327  Step;
struct A68t326 * Rest;
};
typedef struct A68t326  A68_326 ;    /* STRUCT(MODE327,REF MODE326)  */
struct A68t329{
struct A68t259  Cond;
struct A68t343 * Print;
};
typedef struct A68t329  A68_329 ;    /* STRUCT(MODE259,REF MODE343)  */
struct A68t330{
struct A68t259  Cond;
struct A68t343 * Fault;
};
typedef struct A68t330  A68_330 ;    /* STRUCT(MODE259,REF MODE343)  */
struct A68t331{
struct A68t338 * Letnames;
struct A68t297  Unit;
};
typedef struct A68t331  A68_331 ;    /* STRUCT(REF MODE338,MODE297)  */
struct A68t332{
struct A68t271 * Sizes;
struct A68t337  Inst;
struct A68t338 * Makenames;
};
typedef struct A68t332  A68_332 ;    /* STRUCT(REF MODE271,MODE337,REF MODE338)  */
struct A68t333{
struct A68t297  From;
struct A68t297  To;
};
typedef struct A68t333  A68_333 ;    /* STRUCT(MODE297,MODE297)  */
struct A68t334{
struct A68t271 * Repls;
struct A68t336 * Joins;
};
typedef struct A68t334  A68_334 ;    /* STRUCT(REF MODE271,REF MODE336)  */
struct A68t335{
A68_INT  Stepnull;
A_PAD_INT(PAD_112)
};
typedef struct A68t335  A68_335 ;    /* STRUCT(INT)  */
struct A68t336{
struct A68t333  Join;
struct A68t336 * Rest;
};
typedef struct A68t336  A68_336 ;    /* STRUCT(MODE333,REF MODE336)  */
struct A68t338{
A68_INT  Nameno;
A_PAD_INT(PAD_113)
struct A68t338 * Rest;
};
typedef struct A68t338  A68_338 ;    /* STRUCT(INT,REF MODE338)  */
struct A68t344 { A68_INT mode; union {
A68_VC  mode1;
struct A68t270 * mode2;
} data; };
typedef struct A68t344  A68_344 ;    /* UNION(REF MODE26,REF MODE270)  */
struct A68t343{
struct A68t344  Item;
struct A68t343 * Rest;
};
typedef struct A68t343  A68_343 ;    /* STRUCT(MODE344,REF MODE343)  */
struct A68t346 { A68_INT mode; union {
struct A68t251  mode1;
struct A68t263  mode2;
struct A68t276  mode3;
struct A68t291  mode4;
struct A68t328  mode5;
struct A68t329 * mode6;
struct A68t330 * mode7;
struct A68t347 * mode8;
struct A68t348 * mode9;
struct A68t349 * mode10;
struct A68t350 * mode11;
struct A68t351 * mode12;
struct A68t352 * mode13;
struct A68t353 * mode14;
struct A68t354 * mode15;
struct A68t345 * mode16;
struct A68t355 * mode17;
} data; };
typedef struct A68t346  A68_346 ;    /* UNION(MODE251,MODE263,MODE276,MODE291,MODE328,REF MODE329,REF MODE330,REF MODE347,REF MODE348,REF MODE349,REF MODE350,REF MODE351,REF MODE352,REF MODE353,REF MODE354,REF MODE345,REF MODE355)  */
struct A68t345{
struct A68t346  Step;
struct A68t345 * Rest;
};
typedef struct A68t345  A68_345 ;    /* STRUCT(MODE346,REF MODE345)  */
struct A68t347{
struct A68t331  Seqlet;
};
typedef struct A68t347  A68_347 ;    /* STRUCT(MODE331)  */
struct A68t348{
struct A68t331  Seqvar;
};
typedef struct A68t348  A68_348 ;    /* STRUCT(MODE331)  */
struct A68t349{
struct A68t338 * Pvarnames;
struct A68t297  Init;
};
typedef struct A68t349  A68_349 ;    /* STRUCT(REF MODE338,MODE297)  */
struct A68t350{
struct A68t297  To;
struct A68t297  From;
};
typedef struct A68t350  A68_350 ;    /* STRUCT(MODE297,MODE297)  */
struct A68t351{
struct A68t297  Input;
struct A68t356 * Choices;
};
typedef struct A68t351  A68_351 ;    /* STRUCT(MODE297,REF MODE356)  */
struct A68t352{
struct A68t259  Cond;
struct A68t346  True;
struct A68t346  False;
};
typedef struct A68t352  A68_352 ;    /* STRUCT(MODE259,MODE346,MODE346)  */
struct A68t353{
struct A68t259  Repl;
struct A68t346  Body;
};
typedef struct A68t353  A68_353 ;    /* STRUCT(MODE259,MODE346)  */
struct A68t354{
A68_INT  Seqnull;
A_PAD_INT(PAD_114)
};
typedef struct A68t354  A68_354 ;    /* STRUCT(INT)  */
struct A68t355{
struct A68t259  Size;
struct A68t346  Elem;
};
typedef struct A68t355  A68_355 ;    /* STRUCT(MODE259,MODE346)  */
struct A68t356{
A68_BOOL  Check;
A_PAD_BOOL(PAD_115)
A68_INT  Sort;
A_PAD_INT(PAD_116)
struct A68t297  Test;
struct A68t346  Output;
struct A68t356 * Rest;
};
typedef struct A68t356  A68_356 ;    /* STRUCT(BOOL,INT,MODE297,MODE346,REF MODE356)  */
struct A68t357{
A68_BOOL  Check;
A_PAD_BOOL(PAD_117)
A68_INT  Sort;
A_PAD_INT(PAD_118)
struct A68t297  Test;
struct A68t297  Output;
struct A68t357 * Rest;
};
typedef struct A68t357  A68_357 ;    /* STRUCT(BOOL,INT,MODE297,MODE297,REF MODE357)  */
struct A68t358 { A68_INT mode; union {
struct A68t251  mode1;
struct A68t263  mode2;
struct A68t276  mode3;
struct A68t291  mode4;
struct A68t328  mode5;
} data; };
typedef struct A68t358  A68_358 ;    /* UNION(MODE251,MODE263,MODE276,MODE291,MODE328)  */
struct A68t359{
A68_BOOL  Biop;
A_PAD_BOOL(PAD_119)
A68_VC  Name;
struct A68t339  Macparams;
};
typedef struct A68t359  A68_359 ;    /* STRUCT(BOOL,REF MODE26,REF MODE339)  */
struct A68t360{
struct A68t259  Output;
};
typedef struct A68t360  A68_360 ;    /* STRUCT(MODE259)  */
struct A68t361{
A68_INT  Reform;
A_PAD_INT(PAD_120)
};
typedef struct A68t361  A68_361 ;    /* STRUCT(INT)  */
struct A68t362{
A68_VC  Name;
A68_INT  Contextno;
A_PAD_INT(PAD_121)
struct A68t31  Ctname;
};
typedef struct A68t362  A68_362 ;    /* STRUCT(REF MODE26,INT,MODE31)  */
struct A68t363{
A68_INT  Sort;
A_PAD_INT(PAD_122)
struct A68t297  Init;
struct A68t259  Ambigtime;
struct A68t297  Ambig;
struct A68t259  Delaytime;
};
typedef struct A68t363  A68_363 ;    /* STRUCT(INT,MODE297,MODE259,MODE297,MODE259)  */
struct A68t364{
struct A68t297  Init;
struct A68t259  Delaytime;
};
typedef struct A68t364  A68_364 ;    /* STRUCT(MODE297,MODE259)  */
struct A68t365{
struct A68t297  Init;
};
typedef struct A68t365  A68_365 ;    /* STRUCT(MODE297)  */
struct A68t366{
A68_INT  Sort;
A_PAD_INT(PAD_123)
struct A68t259  Interval;
struct A68t297  Init;
struct A68t259  Skew;
};
typedef struct A68t366  A68_366 ;    /* STRUCT(INT,MODE259,MODE297,MODE259)  */
struct A68t367{
A68_BOOL  Faster;
A_PAD_BOOL(PAD_124)
A68_INT  Sort;
A_PAD_INT(PAD_125)
struct A68t337  Inst;
struct A68t259  Scale;
struct A68t297  Init;
struct A68t259  Skew;
};
typedef struct A68t367  A68_367 ;    /* STRUCT(BOOL,INT,MODE337,MODE259,MODE297,MODE259)  */
struct A68t369 { A68_INT mode; union {
struct A68t342 * mode1;
struct A68t359 * mode2;
struct A68t360 * mode3;
struct A68t361 * mode4;
struct A68t362 * mode5;
struct A68t363 * mode6;
struct A68t364 * mode7;
struct A68t365 * mode8;
struct A68t366 * mode9;
struct A68t367 * mode10;
struct A68t368 * mode11;
struct A68t370 * mode12;
} data; };
typedef struct A68t369  A68_369 ;    /* UNION(REF MODE342,REF MODE359,REF MODE360,REF MODE361,REF MODE362,REF MODE363,REF MODE364,REF MODE365,REF MODE366,REF MODE367,REF MODE368,REF MODE370)  */
struct A68t368{
struct A68t249 * Joincheck;
A68_BOOL  Check;
A_PAD_BOOL(PAD_126)
struct A68t369  Fnbody;
};
typedef struct A68t368  A68_368 ;    /* STRUCT(REF MODE249,BOOL,MODE369)  */
struct A68t370{
A68_INT  Bodynull;
A_PAD_INT(PAD_127)
};
typedef struct A68t370  A68_370 ;    /* STRUCT(INT)  */
struct A68t371{
A68_INT  Sort;
A_PAD_INT(PAD_128)
struct A68t358  Spec;
};
typedef struct A68t371  A68_371 ;    /* STRUCT(INT,MODE358)  */
struct A68t372{
A68_VC  Name;
struct A68t275  Type;
struct A68t250  Attr;
};
typedef struct A68t372  A68_372 ;    /* STRUCT(REF MODE26,MODE275,MODE250)  */
A_VECTOR(struct A68t371 ,A68t374);
typedef struct A68t374  A68_374 ;    /* VECTOR [] MODE371 */
A_VECTOR(struct A68t372 ,A68t375);
typedef struct A68t375  A68_375 ;    /* VECTOR [] MODE372 */
struct A68t373{
A68_INT  Sort;
A_PAD_INT(PAD_129)
A68_BOOL  Macro;
A_PAD_BOOL(PAD_130)
A68_VC  Fnname;
struct A68t374  Macspecs;
struct A68t250  Attr;
struct A68t338 * Inputs;
struct A68t338 * Outputs;
struct A68t375  Nametypes;
struct A68t369  Fnbody;
struct A68t257 * Usage;
};
typedef struct A68t373  A68_373 ;    /* STRUCT(INT,BOOL,REF MODE26,REF MODE374,MODE250,REF MODE338,REF MODE338,REF MODE375,MODE369,REF MODE257)  */
A_VECTOR(struct A68t256 *,A68t377);
typedef struct A68t377  A68_377 ;    /* VECTOR [] REF MODE256 */
A_VECTOR(struct A68t272 *,A68t378);
typedef struct A68t378  A68_378 ;    /* VECTOR [] REF MODE272 */
A_VECTOR(struct A68t290 *,A68t379);
typedef struct A68t379  A68_379 ;    /* VECTOR [] REF MODE290 */
A_VECTOR(struct A68t296 *,A68t380);
typedef struct A68t380  A68_380 ;    /* VECTOR [] REF MODE296 */
A_VECTOR(struct A68t373 *,A68t381);
typedef struct A68t381  A68_381 ;    /* VECTOR [] REF MODE373 */
struct A68t376{
struct A68t377  Attrs;
struct A68t378  Ints;
struct A68t379  Types;
struct A68t380  Consts;
struct A68t381  Fns;
};
typedef struct A68t376  A68_376 ;    /* STRUCT(REF MODE377,REF MODE378,REF MODE379,REF MODE380,REF MODE381)  */
struct A68t382{
A68_INT  Closureno;
A_PAD_INT(PAD_131)
A68_INT  Sort;
A_PAD_INT(PAD_132)
struct A68t376 * Environ;
};
typedef struct A68t382  A68_382 ;    /* STRUCT(INT,INT,REF MODE376)  */
struct A68t383{
struct A68t382  Outer;
struct A68t383 * Rest;
};
typedef struct A68t383  A68_383 ;    /* STRUCT(MODE382,REF MODE383)  */
A_VECTOR(struct A68t383 ,A68t385);
typedef struct A68t385  A68_385 ;    /* VECTOR [] MODE383 */
struct A68t384{
struct A68t385  Outers;
struct A68t384 * Rest;
};
typedef struct A68t384  A68_384 ;    /* STRUCT(REF MODE385,REF MODE384)  */
struct A68t386{
A68_INT  Max_closureno;
A_PAD_INT(PAD_133)
struct A68t383 * Outers;
struct A68t383 * Freelist;
struct A68t384 * Outerslist;
};
typedef struct A68t386  A68_386 ;    /* STRUCT(INT,REF MODE383,REF MODE383,REF MODE384)  */
A_VECTOR(struct A68t383 *,A68t387);
typedef struct A68t387  A68_387 ;    /* VECTOR [] REF MODE383 */

A_PROCEDURE(struct A68t262 *,A68t388,(A68_INT ),(A68_INT ,void *));
typedef struct A68t388  A68_388 ;    /* PROC(INT) REF MODE262 */

A_PROCEDURE(struct A68t263 *,A68t389,(A68_INT ),(A68_INT ,void *));
typedef struct A68t389  A68_389 ;    /* PROC(INT) REF MODE263 */

A_PROCEDURE(struct A68t267 *,A68t390,(struct A68t259 ),(struct A68t259 ,void *));
typedef struct A68t390  A68_390 ;    /* PROC(MODE259) REF MODE267 */

A_PROCEDURE(struct A68t270 *,A68t391,(struct A68t259 ),(struct A68t259 ,void *));
typedef struct A68t391  A68_391 ;    /* PROC(MODE259) REF MODE270 */

A_PROCEDURE(struct A68t276 *,A68t392,(A68_INT ),(A68_INT ,void *));
typedef struct A68t392  A68_392 ;    /* PROC(INT) REF MODE276 */

A_PROCEDURE(struct A68t280 *,A68t393,(struct A68t275 ),(struct A68t275 ,void *));
typedef struct A68t393  A68_393 ;    /* PROC(MODE275) REF MODE280 */

A_PROCEDURE(struct A68t284 *,A68t394,(struct A68t275 ),(struct A68t275 ,void *));
typedef struct A68t394  A68_394 ;    /* PROC(MODE275) REF MODE284 */

A_PROCEDURE(struct A68t291 *,A68t395,(A68_INT ),(A68_INT ,void *));
typedef struct A68t395  A68_395 ;    /* PROC(INT) REF MODE291 */

A_PROCEDURE(struct A68t295 *,A68t396,(struct A68t275 ),(struct A68t275 ,void *));
typedef struct A68t396  A68_396 ;    /* PROC(MODE275) REF MODE295 */

A_PROCEDURE(struct A68t347 *,A68t397,(struct A68t331 ),(struct A68t331 ,void *));
typedef struct A68t397  A68_397 ;    /* PROC(MODE331) REF MODE347 */

A_PROCEDURE(struct A68t348 *,A68t398,(struct A68t331 ),(struct A68t331 ,void *));
typedef struct A68t398  A68_398 ;    /* PROC(MODE331) REF MODE348 */

A_PROCEDURE(struct A68t323 *,A68t399,(struct A68t297 ),(struct A68t297 ,void *));
typedef struct A68t399  A68_399 ;    /* PROC(MODE297) REF MODE323 */

A_PROCEDURE(struct A68t342 *,A68t400,(struct A68t297 ),(struct A68t297 ,void *));
typedef struct A68t400  A68_400 ;    /* PROC(MODE297) REF MODE342 */

A_PROCEDURE(struct A68t328 *,A68t401,(A68_INT ),(A68_INT ,void *));
typedef struct A68t401  A68_401 ;    /* PROC(INT) REF MODE328 */

A_PROCEDURE(struct A68t360 *,A68t402,(struct A68t259 ),(struct A68t259 ,void *));
typedef struct A68t402  A68_402 ;    /* PROC(MODE259) REF MODE360 */

A_PROCEDURE(struct A68t365 *,A68t403,(struct A68t297 ),(struct A68t297 ,void *));
typedef struct A68t403  A68_403 ;    /* PROC(MODE297) REF MODE365 */

A_PROCEDURE(struct A68t268 *,A68t404,(A68_INT ),(A68_INT ,void *));
typedef struct A68t404  A68_404 ;    /* PROC(INT) REF MODE268 */

A_PROCEDURE(struct A68t251 *,A68t405,(A68_INT ),(A68_INT ,void *));
typedef struct A68t405  A68_405 ;    /* PROC(INT) REF MODE251 */

A_PROCEDURE(struct A68t258 *,A68t406,(struct A68t250 ),(struct A68t250 ,void *));
typedef struct A68t406  A68_406 ;    /* PROC(MODE250) REF MODE258 */

A_PROCEDURE(struct A68t254 *,A68t407,(struct A68t250 ),(struct A68t250 ,void *));
typedef struct A68t407  A68_407 ;    /* PROC(MODE250) REF MODE254 */
A_VECTOR(struct A68t248 *,A68t408);
typedef struct A68t408  A68_408 ;    /* VECTOR [] REF MODE248 */

A_PROCEDURE(A68_VOID ,A68t409,(A68_INT ,A68_INT ,A68_BOOL ,struct A68t158 *,struct A68t158 *,struct A68t54 ,struct A68t382 *),(A68_INT ,A68_INT ,A68_BOOL ,struct A68t158 *,struct A68t158 *,struct A68t54 ,struct A68t382 *,void *));
typedef struct A68t409  A68_409 ;    /* PROC(INT,INT,BOOL,REF MODE158,REF MODE158,MODE54) MODE382 */

A_PROCEDURE(A68_INT ,A68t410,(struct A68t386 *),(struct A68t386 *,void *));
typedef struct A68t410  A68_410 ;    /* PROC(REF MODE386) INT */

A_PROCEDURE(struct A68t383 *,A68t411,(A68_INT ,struct A68t386 *,struct A68t54 ),(A68_INT ,struct A68t386 *,struct A68t54 ,void *));
typedef struct A68t411  A68_411 ;    /* PROC(INT,REF MODE386,MODE54) REF MODE383 */

A_PROCEDURE(struct A68t383 *,A68t412,(struct A68t386 *),(struct A68t386 *,void *));
typedef struct A68t412  A68_412 ;    /* PROC(REF MODE386) REF MODE383 */

A_PROCEDURE(struct A68t383 **,A68t413,(struct A68t382 ,struct A68t383 **,struct A68t386 *,struct A68t54 ),(struct A68t382 ,struct A68t383 **,struct A68t386 *,struct A68t54 ,void *));
typedef struct A68t413  A68_413 ;    /* PROC(MODE382,REF REF MODE383,REF MODE386,MODE54) REF REF MODE383 */

A_PROCEDURE(A68_VOID ,A68t414,(struct A68t383 **,struct A68t386 *,struct A68t54 ),(struct A68t383 **,struct A68t386 *,struct A68t54 ,void *));
typedef struct A68t414  A68_414 ;    /* PROC(REF REF MODE383,REF MODE386,MODE54) VOID */

A_PROCEDURE(struct A68t386 *,A68t415,(void),(void *));
typedef struct A68t415  A68_415 ;    /* PROC REF MODE386 */

A_PROCEDURE(A68_INT ,A68t416,(struct A68t386 *,struct A68t54 ),(struct A68t386 *,struct A68t54 ,void *));
typedef struct A68t416  A68_416 ;    /* PROC(REF MODE386,MODE54) INT */

A_PROCEDURE(struct A68t386 *,A68t417,(struct A68t386 *,struct A68t54 ),(struct A68t386 *,struct A68t54 ,void *));
typedef struct A68t417  A68_417 ;    /* PROC(REF MODE386,MODE54) REF MODE386 */
struct A68t418{
A68_BITS  Options;
A_PAD_BITS(PAD_134)
};
typedef struct A68t418  A68_418 ;    /* STRUCT(BITS)  */
struct A68t420 ;

A_PROCEDURE(A68_VOID ,A68t419,(struct A68t420 ),(struct A68t420 ,void *));
typedef struct A68t419  A68_419 ;    /* PROC(MODE420) VOID */
struct A68t420 { A68_INT mode; union {
A68_BOOL  mode1;
struct A68t418  mode2;
A68_VC  mode3;
} data; };
typedef struct A68t420  A68_420 ;    /* UNION(BOOL,MODE418,MODE26)  */

A_PROCEDURE(A68_BOOL ,A68t421,(void),(void *));
typedef struct A68t421  A68_421 ;    /* PROC BOOL */

A_PROCEDURE(A68_VOID ,A68t422,(struct A68t132 *,A68_VC *),(struct A68t132 *,A68_VC *,void *));
typedef struct A68t422  A68_422 ;    /* PROC(REF MODE132) MODE26 */

A_PROCEDURE(A68_VOID ,A68t423,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t423  A68_423 ;    /* PROC(MODE26) MODE26 */
struct A68t424{
A68_INT  Token;
A_PAD_INT(PAD_135)
A68_BOOL  Nil;
A_PAD_BOOL(PAD_136)
};
typedef struct A68t424  A68_424 ;    /* STRUCT(INT,BOOL)  */
struct A68t426{
A68_INT  Index;
A_PAD_INT(PAD_137)
A68_INT  Count;
A_PAD_INT(PAD_138)
};
typedef struct A68t426  A68_426 ;    /* STRUCT(INT,INT)  */
struct A68t425 { A68_INT mode; union {
A68_INT  mode1;
A68_VC  mode2;
struct A68t424  mode3;
struct A68t426  mode4;
} data; };
typedef struct A68t425  A68_425 ;    /* UNION(INT,MODE26,MODE424,MODE426)  */
struct A68t427{
struct A68t386 * Closure;
struct A68t118  Head_data;
};
typedef struct A68t427  A68_427 ;    /* STRUCT(REF MODE386,REF MODE118)  */

A_PROCEDURE(A68_VOID ,A68t429,(struct A68t45 ,struct A68t54 ,struct A68t425 *),(struct A68t45 ,struct A68t54 ,struct A68t425 *,void *));
typedef struct A68t429  A68_429 ;    /* PROC(MODE45,MODE54) MODE425 */
struct A68t428{
struct A68t45  Getchar;
struct A68t429  Initem;
struct A68t430 * Ids_lookup;
};
typedef struct A68t428  A68_428 ;    /* STRUCT(MODE45,MODE429,REF REF MODE430)  */
A_VECTOR(struct A68t118 ,A68t430);
typedef struct A68t430  A68_430 ;    /* VECTOR [] REF MODE118 */

A_PROCEDURE(A68_VOID ,A68t432,(struct A68t425 ,struct A68t60 ,struct A68t54 ),(struct A68t425 ,struct A68t60 ,struct A68t54 ,void *));
typedef struct A68t432  A68_432 ;    /* PROC(MODE425,MODE60,MODE54) VOID */
struct A68t431{
struct A68t60  Putstring;
struct A68t432  Outitem;
A68_BOOL  Write_idstable;
A_PAD_BOOL(PAD_139)
};
typedef struct A68t431  A68_431 ;    /* STRUCT(MODE60,MODE432,BOOL)  */

A_PROCEDURE(A68_INT ,A68t433,(struct A68t428 ,struct A68t54 ),(struct A68t428 ,struct A68t54 ,void *));
typedef struct A68t433  A68_433 ;    /* PROC(MODE428,MODE54) INT */

A_PROCEDURE(A68_BOOL ,A68t434,(struct A68t428 ,struct A68t54 ),(struct A68t428 ,struct A68t54 ,void *));
typedef struct A68t434  A68_434 ;    /* PROC(MODE428,MODE54) BOOL */

A_PROCEDURE(A68_VOID ,A68t435,(struct A68t428 ,struct A68t54 ,struct A68t424 *),(struct A68t428 ,struct A68t54 ,struct A68t424 *,void *));
typedef struct A68t435  A68_435 ;    /* PROC(MODE428,MODE54) MODE424 */

A_PROCEDURE(A68_VOID ,A68t436,(struct A68t428 ,struct A68t54 ,A68_VC *),(struct A68t428 ,struct A68t54 ,A68_VC *,void *));
typedef struct A68t436  A68_436 ;    /* PROC(MODE428,MODE54) MODE26 */

A_PROCEDURE(A68_CHAR ,A68t437,(struct A68t428 ,struct A68t54 ),(struct A68t428 ,struct A68t54 ,void *));
typedef struct A68t437  A68_437 ;    /* PROC(MODE428,MODE54) CHAR */

A_PROCEDURE(A68_VOID ,A68t438,(struct A68t428 ,struct A68t54 ,A68_VC *),(struct A68t428 ,struct A68t54 ,A68_VC *,void *));
typedef struct A68t438  A68_438 ;    /* PROC(MODE428,MODE54) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t439,(A68_CHAR ,struct A68t431 ,struct A68t54 ),(A68_CHAR ,struct A68t431 ,struct A68t54 ,void *));
typedef struct A68t439  A68_439 ;    /* PROC(CHAR,MODE431,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t440,(A68_INT ,struct A68t431 ,struct A68t54 ),(A68_INT ,struct A68t431 ,struct A68t54 ,void *));
typedef struct A68t440  A68_440 ;    /* PROC(INT,MODE431,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t441,(A68_VC ,struct A68t431 ,struct A68t54 ),(A68_VC ,struct A68t431 ,struct A68t54 ,void *));
typedef struct A68t441  A68_441 ;    /* PROC(REF MODE26,MODE431,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t442,(A68_INT ,A68_BOOL ,struct A68t431 ,struct A68t54 ),(A68_INT ,A68_BOOL ,struct A68t431 ,struct A68t54 ,void *));
typedef struct A68t442  A68_442 ;    /* PROC(INT,BOOL,MODE431,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t443,(A68_BOOL ,struct A68t431 ,struct A68t54 ),(A68_BOOL ,struct A68t431 ,struct A68t54 ,void *));
typedef struct A68t443  A68_443 ;    /* PROC(BOOL,MODE431,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t444,(struct A68t45 ,struct A68t54 ,struct A68t428 *),(struct A68t45 ,struct A68t54 ,struct A68t428 *,void *));
typedef struct A68t444  A68_444 ;    /* PROC(MODE45,MODE54) MODE428 */

A_PROCEDURE(A68_VOID ,A68t445,(struct A68t428 ,struct A68t54 ,struct A68t427 *),(struct A68t428 ,struct A68t54 ,struct A68t427 *,void *));
typedef struct A68t445  A68_445 ;    /* PROC(MODE428,MODE54) MODE427 */

A_PROCEDURE(A68_VOID ,A68t446,(struct A68t60 ,A68_BOOL ,A68_BOOL ,struct A68t54 ,struct A68t431 *),(struct A68t60 ,A68_BOOL ,A68_BOOL ,struct A68t54 ,struct A68t431 *,void *));
typedef struct A68t446  A68_446 ;    /* PROC(MODE60,BOOL,BOOL,MODE54) MODE431 */

A_PROCEDURE(A68_VOID ,A68t447,(struct A68t427 ,struct A68t431 ,struct A68t54 ),(struct A68t427 ,struct A68t431 ,struct A68t54 ,void *));
typedef struct A68t447  A68_447 ;    /* PROC(MODE427,MODE431,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t448,(struct A68t431 ,struct A68t54 ),(struct A68t431 ,struct A68t54 ,void *));
typedef struct A68t448  A68_448 ;    /* PROC(MODE431,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t449,(struct A68t215 ),(struct A68t215 ,void *));
typedef struct A68t449  A68_449 ;    /* PROC(MODE215) VOID */

A_PROCEDURE(A68_VOID ,A68t450,(struct A68t60 ),(struct A68t60 ,void *));
typedef struct A68t450  A68_450 ;    /* PROC(MODE60) VOID */

A_PROCEDURE(A68_VOID ,A68t451,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t451  A68_451 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,57,A68t452);
typedef struct A68t452  A68_452 ;    /* STRUCT 57 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t453);
typedef struct A68t453  A68_453 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,25,A68t454);
typedef struct A68t454  A68_454 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t455);
typedef struct A68t455  A68_455 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t456);
typedef struct A68t456  A68_456 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(struct A68t75 ,8,A68t457);
typedef struct A68t457  A68_457 ;    /* STRUCT 8 MODE75 */

A_PROCEDURE(A68_INT ,A68t458,(struct A68t194 ,struct A68t54 ),(struct A68t194 ,struct A68t54 ,void *));
typedef struct A68t458  A68_458 ;    /* PROC(MODE194,MODE54) INT */

A_PROCEDURE(A68_VOID ,A68t459,(A68_BOOL ,struct A68t408 *),(A68_BOOL ,struct A68t408 *,void *));
typedef struct A68t459  A68_459 ;    /* PROC(BOOL) MODE408 */
struct A68t460{
struct A68t31  Ctn;
A68_VC  Id;
A68_INT  Seedno;
A_PAD_INT(PAD_140)
struct A68t460 * Rest;
};
typedef struct A68t460  A68_460 ;    /* STRUCT(MODE31,REF MODE26,INT,REF MODE460)  */

A_PROCEDURE(A68_VOID ,A68t461,(struct A68t194 ,A68_VC ,A68_INT ,struct A68t460 **,struct A68t54 ),(struct A68t194 ,A68_VC ,A68_INT ,struct A68t460 **,struct A68t54 ,void *));
typedef struct A68t461  A68_461 ;    /* PROC(MODE194,REF MODE26,INT,REF REF MODE460,MODE54) VOID */

A_PROCEDURE(A68_INT ,A68t462,(A68_VC ,A68_INT ,A68_INT ,struct A68t386 *),(A68_VC ,A68_INT ,A68_INT ,struct A68t386 *,void *));
typedef struct A68t462  A68_462 ;    /* PROC(REF MODE26,INT,INT,REF MODE386) INT */

A_PROCEDURE(A68_VOID ,A68t463,(struct A68t376 *,struct A68t386 *),(struct A68t376 *,struct A68t386 *,void *));
typedef struct A68t463  A68_463 ;    /* PROC(REF MODE376,REF MODE386) VOID */

A_PROCEDURE(A68_VOID ,A68t464,(struct A68t386 *),(struct A68t386 *,void *));
typedef struct A68t464  A68_464 ;    /* PROC(REF MODE386) VOID */

A_PROCEDURE(A68_BOOL ,A68t465,(struct A68t37 ),(struct A68t37 ,void *));
typedef struct A68t465  A68_465 ;    /* PROC(REF MODE37) BOOL */
struct A68t466{
struct A68t194  Cregion;
A68_VC  Fnname;
struct A68t466 * Rest;
};
typedef struct A68t466  A68_466 ;    /* STRUCT(MODE194,REF MODE26,REF MODE466)  */

A_PROCEDURE(struct A68t386 *,A68t467,(struct A68t466 *,A68_BOOL ,struct A68t54 ),(struct A68t466 *,A68_BOOL ,struct A68t54 ,void *));
typedef struct A68t467  A68_467 ;    /* PROC(REF MODE466,BOOL,MODE54) REF MODE386 */

A_PROCEDURE(A68_VOID ,A68t468,(A68_BOOL ,struct A68t37 *),(A68_BOOL ,struct A68t37 *,void *));
typedef struct A68t468  A68_468 ;    /* PROC(BOOL) MODE37 */

A_PROCEDURE(struct A68t386 *,A68t469,(struct A68t194 ,A68_VC ,A68_BOOL ,struct A68t54 ),(struct A68t194 ,A68_VC ,A68_BOOL ,struct A68t54 ,void *));
typedef struct A68t469  A68_469 ;    /* PROC(MODE194,REF MODE26,BOOL,MODE54) REF MODE386 */

A_PROCEDURE(struct A68t386 *,A68t470,(struct A68t194 ,A68_BOOL ,struct A68t54 ),(struct A68t194 ,A68_BOOL ,struct A68t54 ,void *));
typedef struct A68t470  A68_470 ;    /* PROC(MODE194,BOOL,MODE54) REF MODE386 */

A_PROCEDURE(struct A68t386 *,A68t471,(struct A68t189 *,A68_BOOL ,struct A68t54 ),(struct A68t189 *,A68_BOOL ,struct A68t54 ,void *));
typedef struct A68t471  A68_471 ;    /* PROC(REF MODE189,BOOL,MODE54) REF MODE386 */

A_PROCEDURE(A68_VOID ,A68t472,(struct A68t189 *,A68_VC ,A68_BOOL ,struct A68t54 ,struct A68t382 *),(struct A68t189 *,A68_VC ,A68_BOOL ,struct A68t54 ,struct A68t382 *,void *));
typedef struct A68t472  A68_472 ;    /* PROC(REF MODE189,REF MODE26,BOOL,MODE54) MODE382 */

A_PROCEDURE(struct A68t362 *,A68t473,(A68_INT ,A68_VC ,struct A68t54 ),(A68_INT ,A68_VC ,struct A68t54 ,void *));
typedef struct A68t473  A68_473 ;    /* PROC(INT,REF MODE26,MODE54) REF MODE362 */

A_PROCEDURE(A68_VOID ,A68t474,(struct A68t382 ,struct A68t54 ),(struct A68t382 ,struct A68t54 ,void *));
typedef struct A68t474  A68_474 ;    /* PROC(MODE382,MODE54) VOID */
A_ISTRUCT(A68_CHAR ,10,A68t475);
typedef struct A68t475  A68_475 ;    /* STRUCT 10 CHAR */

A_PROCEDURE(A68_VOID ,A68t476,(struct A68t466 *,struct A68t431 ,struct A68t54 ),(struct A68t466 *,struct A68t431 ,struct A68t54 ,void *));
typedef struct A68t476  A68_476 ;    /* PROC(REF MODE466,MODE431,MODE54) VOID */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from openinterface --- */
extern A68_VOID  AKFATRN_outassemint(A68_INT ,struct A68t431 ,struct A68t54 );
extern A68_VOID  GKFATRN_outassemstr(A68_VC ,struct A68t431 ,struct A68t54 );
extern A68_VOID  VKFATRN_outassembool(A68_BOOL ,struct A68t431 ,struct A68t54 );
extern A68_VOID  CLFATRN_outassemid(A68_VC ,struct A68t431 ,struct A68t54 );
/* --- End of imports from openinterface --- */


/* --- Imports from testmode --- */
extern A68_VOID  JIBAOST_version_str(A68_INT ,A68_VC *);
/* --- End of imports from testmode --- */


/* --- Imports from closureprocs --- */
extern A68_INT  ENCATRN_reserve_next_closureno(struct A68t386 *);
extern A68_383 ** KNCATRN_insert_outer(struct A68t382 ,struct A68t383 **,struct A68t386 *,struct A68t54 );
extern A68_386 * AOCATRN_make_closure(void);
/* --- End of imports from closureprocs --- */


/* --- Imports from assemble --- */
extern A68_VOID  UGPAELA_assemble(A68_INT ,A68_INT ,A68_BOOL ,struct A68t158 *,struct A68t158 *,struct A68t54 ,A68_382 *);
/* --- End of imports from assemble --- */


/* --- Imports from assmodes --- */
extern A68_248 * LAAATRN_nilids;
extern A68_362 * TAAATRN_nilimport;
extern A68_256 * UAAATRN_nilattrdec;
extern A68_272 * VAAATRN_nilintdec;
extern A68_290 * WAAATRN_niltypedec;
extern A68_296 * XAAATRN_nilconstdec;
extern A68_373 * YAAATRN_nilfndec;
extern A68_257 * CBAATRN_nilusage;
extern A68_383 * HBAATRN_nilouters;
#define RKAATRN_outerattr 1
#define SKAATRN_outerint 2
#define TKAATRN_outertype 3
#define UKAATRN_outerconst 4
#define VKAATRN_outerfn 5
extern A68_408  BLAATRN_idstable;
extern A68_INT  DLAATRN_assembler_libno;
#define ELAATRN_ids_hash_size 32
/* --- End of imports from assmodes --- */


/* --- Imports from attrdecls --- */
extern A68_182 * TBWAELA_get_declattribute(struct A68t189 *,A68_INT ,struct A68t54 );
/* --- End of imports from attrdecls --- */


/* --- Imports from libinterface --- */
extern A68_VOID  LEBBELA_get_decls(struct A68t189 *,struct A68t54 ,A68_190 *);
extern A68_INT  IGBBELA_check_decl(struct A68t189 *,A68_VC ,struct A68t54 );
extern A68_BOOL  QJBBELA_save_library(struct A68t54 );
extern A68_VOID  RLBBELA_ctno_region(A68_INT ,A68_194 *);
extern A68_INT  LLBBELA_find_maxctno(void);
extern A68_VOID  ZLBBELA_zero_ctnos(void);
extern A68_INT  ONBBELA_next_closure_details(struct A68t194 ,A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t54 );
/* --- End of imports from libinterface --- */


/* --- Imports from libmodes --- */
extern A68_130  UACAELA_nilptr;
extern A68_128 * PUDAELA_nildb;
extern A68_VOID  LIBAELA_lib_msg(A68_INT ,A68_55 *);
extern A68_183 * HUJAELA_niluses;
extern A68_189 * DVJAELA_nilcontxt;
#define LVJAELA_kfn 67
extern A68_192 * HXJAELA_library;
extern A68_INT * JZJAELA_body_key;
extern A68_127 * TYJAELA_discfile;
extern A68_BOOL  SZJAELA_(struct A68t31 ,struct A68t31 );
extern A68_BOOL  XZJAELA_(struct A68t194 ,struct A68t194 );
extern A68_VOID  BAKAELA_ctos(struct A68t31 ,A68_VC *);
extern A68_VOID  UAKAELA_ctos(struct A68t194 ,A68_VC *);
extern A68_VOID  NBKAELA_ctn(struct A68t194 ,A68_31 *);
extern A68_189 * UDKAELA_get_context(A68_VC );
extern A68_VOID  AEKAELA_get_region(struct A68t189 *,A68_VC ,A68_194 *);
extern A68_186 * HEKAELA_get_imports(struct A68t194 );
extern A68_BOOL  REKAELA_check_text(struct A68t189 *,struct A68t54 );
extern A68_185 * BGKAELA_check_binding(struct A68t194 ,A68_VC ,struct A68t54 );
/* --- End of imports from libmodes --- */


/* --- Imports from databasebuffers --- */
extern A68_158 * OXIAELA_nilbuffer;
#define QXIAELA_validread 0
extern A68_158 * ZXIAELA_makebuffer(struct A68t127 *,struct A68t108 ,A68_INT );
extern A68_158 * WYIAELA_readbuffer(struct A68t127 *,struct A68t130 );
/* --- End of imports from databasebuffers --- */


/* --- Imports from messageproc --- */
extern A68_55  SHAAOSI_system;
extern A68_56  VJAAOSI_nullmsg;
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VC  EOAAOSL_nullstr;
extern A68_VOID  UJBAOSL_oneline(struct A68t106 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- Imports from basics --- */
extern A68_VC  NTCAOST_nilid;
extern A68_INT  DZCAOST_seconds(void);
extern A68_VOID  QDDAOST_date_time(A68_INT ,A68_VC *);
/* --- End of imports from basics --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void TPCATRN(void);   /* openinterface */
extern void QFBAOST(void);   /* testmode */
extern void SKCATRN(void);   /* closureprocs */
extern void LEPAELA(void);   /* assemble */
extern void BAAATRN(void);   /* assmodes */
extern void DZVAELA(void);   /* attrdecls */
extern void SOABELA(void);   /* libinterface */
extern void FTJAELA(void);   /* libmodes */
extern void NWIAELA(void);   /* databasebuffers */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
extern void JSCAOST(void);   /* basics */
/* --- end of DECS initialisation functions --- */
static A68_452   PQDBELA = {"$Id: assclosure.a68,v 34.3 1995/03/29 13:03:13 ella Exp $"}; 
A_GISVEC(A68_VC ,QQDBELA,PQDBELA,57)
static A68_453   WQDBELA = {"Context  "}; 
A_GISVEC(A68_VC ,XQDBELA,WQDBELA,9)
static A68_454   CRDBELA = {" assembled from library  "}; 
A_GISVEC(A68_VC ,DRDBELA,CRDBELA,25)
static A68_455   IRDBELA = {" ("}; 
A_GISVEC(A68_VC ,JRDBELA,IRDBELA,2)
static A68_456   ORDBELA = {")  "}; 
A_GISVEC(A68_VC ,PRDBELA,ORDBELA,3)
#define USDBELA_nilsearch (A68_460 *)A68_NIL
A68_466 * BWDBELA_nilclosureseed;
static A68_475   HBEBELA = {"add_import"}; 
A_GISVEC(A68_VC ,IBEBELA,HBEBELA,10)
typedef struct   /* env of non-global proc */
{
int dummy;
} JSDBELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * OWDBELA_maxseedno;
} AXDBELA_generator;

A68_VOID  SQDBELA_check_library_open(A68_54  Msg);

A68_VOID  UQDBELA_title(A68_VC  *ReturnedValue);

A_STATIC A68_INT  ZRDBELA_create_next_closure(A68_194  Cr, A68_54  Msg);

A_STATIC A68_VOID  ISDBELA_generator(A68_BOOL  GSDBELA_anonymous, A68_408  *ReturnedValue, void *NonLocals);

A68_INT  SSDBELA_create_closure(A68_194  Cr, A68_54  Msg);

A_STATIC A68_VOID  ATDBELA_expand_uses(A68_194  Cr, A68_VC  Name, A68_INT  Seedno, A68_460 ** Searchlist, A68_54  Msg);

A_STATIC A68_INT  QTDBELA_find_closureno(A68_VC  Name, A68_INT  Contextno, A68_INT  Sort, A68_386 * Closure);

A_STATIC A68_VOID  RUDBELA_environ_closurenos(A68_376 * Env, A68_386 * Closure);

A_STATIC A68_VOID  TVDBELA_add_closurenos(A68_386 * Closure);

A68_BOOL  WVDBELA_is_assembled(A68_37  Seeds);

A68_386 * FWDBELA_generate_closure(A68_466 * Seeds, A68_BOOL  With_body, A68_54  Msg);

A_STATIC A68_VOID  ZWDBELA_generator(A68_BOOL  XWDBELA_anonymous, A68_37  *ReturnedValue, void *NonLocals);

A68_386 * JYDBELA_declaration_closure(A68_194  Cr, A68_VC  Declname, A68_BOOL  With_body, A68_54  Msg);

A68_386 * QYDBELA_context_closure(A68_194  Cr, A68_BOOL  With_bodies, A68_54  Msg);

A68_386 * XYDBELA_context_specs(A68_189 * Ct, A68_BOOL  With_bodies, A68_54  Msg);

A68_VOID  VZDBELA_declaration_spec(A68_189 * Ct, A68_VC  Declname, A68_BOOL  With_body, A68_54  Msg, A68_382  *ReturnedValue);

A68_362 * NAEBELA_find_import(A68_INT  Ctno, A68_VC  Rename, A68_54  Msg);

A68_VOID  ABEBELA_add_import(A68_382  Outer, A68_54  Msg);

A68_386 * MBEBELA_get_allimports(A68_386 * Closure, A68_54  Msg);

A68_VOID  WBEBELA_write_closureseeds(A68_466 * Seeds, A68_431  Writer, A68_54  Msg);

A_STATIC A68_VOID  ISDBELA_generator(A68_BOOL  GSDBELA_anonymous, A68_408  *ReturnedValue, void *NonLocals)
#define NL(x) (((JSDBELA_generator *)NonLocals)->x)
{ 
A68_408  KSDBELA;  /* clause result */
A68_408  LSDBELA;  /* OPERATORS - dynamic generator */
{ 
LSDBELA.upb = ELAATRN_ids_hash_size ;
( GSDBELA_anonymous? A_VLOC(A68_248 *,LSDBELA): A_VHEAP(A68_248 *,LSDBELA) );
KSDBELA = LSDBELA;
} 
*ReturnedValue = (KSDBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  ZWDBELA_generator(A68_BOOL  XWDBELA_anonymous, A68_37  *ReturnedValue, void *NonLocals)
#define NL(x) (((AXDBELA_generator *)NonLocals)->x)
{ 
A68_37  BXDBELA;  /* clause result */
A68_37  CXDBELA;  /* OPERATORS - dynamic generator */
{ 
CXDBELA.upb = (*NL(OWDBELA_maxseedno)) ;
( XWDBELA_anonymous? A_VLOC(A68_BOOL ,CXDBELA): A_VHEAP(A68_BOOL ,CXDBELA) );
BXDBELA = CXDBELA;
} 
*ReturnedValue = (BXDBELA);
return;
} 
#undef NL

A68_VOID  SQDBELA_check_library_open(A68_54  Msg)
{ 
A68_55  TQDBELA;  /* avoid structure result */
A_PROC_ENTRY(check_library_open);
 /* line 64: */
 /* line 65: */
if ( ((*(&(TYJAELA_discfile->Database)))==PUDAELA_nildb) )
{ 
 /* line 66: */
LIBAELA_lib_msg( 28, &TQDBELA );
A_CALLPROC(Msg,(TQDBELA, VJAAOSI_nullmsg),(TQDBELA, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
A_PROC_EXIT(check_library_open);
return;
} 
#undef NL

A68_VOID  UQDBELA_title(A68_VC  *ReturnedValue)
{ 
A68_457  VQDBELA;  /* collateral clause result */
A68_75  YQDBELA;  /* OPERATORS - mode -> union mode */
A68_VC  ZQDBELA;  /* YIELD */
A68_VC  ARDBELA;  /* avoid structure result */
A68_75  BRDBELA;  /* OPERATORS - mode -> union mode */
A68_75  ERDBELA;  /* OPERATORS - mode -> union mode */
A68_VC  FRDBELA;  /* YIELD */
A68_75  GRDBELA;  /* OPERATORS - mode -> union mode */
A68_VC  HRDBELA;  /* YIELD */
A68_75  KRDBELA;  /* OPERATORS - mode -> union mode */
A68_VC  LRDBELA;  /* YIELD */
A68_VC  MRDBELA;  /* avoid structure result */
A68_75  NRDBELA;  /* OPERATORS - mode -> union mode */
A68_75  QRDBELA;  /* OPERATORS - mode -> union mode */
A68_VC  RRDBELA;  /* YIELD */
A68_VC  SRDBELA;  /* avoid structure result */
A68_75  TRDBELA;  /* OPERATORS - mode -> union mode */
A68_VC  URDBELA;  /* clause result */
A68_106  VRDBELA;  /* OPERATORS - istruct -> vector */
A68_VC  WRDBELA;  /* avoid structure result */
A_PROC_ENTRY(title);
ZQDBELA = XQDBELA ;
VQDBELA.data[0] = A_UNITE(YQDBELA,mode7,7,ZQDBELA);
BAKAELA_ctos( (*(&(HXJAELA_library->Currentct))), &ARDBELA );
VQDBELA.data[1] = A_UNITE(BRDBELA,mode7,7,ARDBELA);
 /* line 70: */
FRDBELA = DRDBELA ;
VQDBELA.data[2] = A_UNITE(ERDBELA,mode7,7,FRDBELA);
HRDBELA = (*(&(HXJAELA_library->Name))) ;
VQDBELA.data[3] = A_UNITE(GRDBELA,mode7,7,HRDBELA);
LRDBELA = JRDBELA ;
VQDBELA.data[4] = A_UNITE(KRDBELA,mode7,7,LRDBELA);
JIBAOST_version_str( (*(&(HXJAELA_library->Version))), &MRDBELA );
VQDBELA.data[5] = A_UNITE(NRDBELA,mode7,7,MRDBELA);
 /* line 71: */
RRDBELA = PRDBELA ;
VQDBELA.data[6] = A_UNITE(QRDBELA,mode7,7,RRDBELA);
QDDAOST_date_time( DZCAOST_seconds(), &SRDBELA );
VQDBELA.data[7] = A_UNITE(TRDBELA,mode7,7,SRDBELA);
UJBAOSL_oneline( A_HISVEC(VRDBELA,VQDBELA,8,A68_75 ), &WRDBELA );
URDBELA = WRDBELA;
A_PROC_EXIT(title);
*ReturnedValue = (URDBELA);
return;
} 
#undef NL

A_STATIC A68_INT  ZRDBELA_create_next_closure(A68_194  Cr, A68_54  Msg)
{ 
A68_INT  ASDBELA_closureno;
A68_BOOL  BSDBELA;  /* optbool result */
A68_BOOL  CSDBELA;  /* clause result */
A68_VC  DSDBELA;  /* avoid structure result */
A68_56  ESDBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_55  FSDBELA;  /* avoid structure result */
A68_459  HSDBELA_generator;   /* proc value of non-global proc */
A68_408  MSDBELA;  /* avoid structure result */
A68_248 ** NSDBELA_ids;
A68_INT  OSDBELA;  /* forall loop counter */
A68_INT  PSDBELA;  /* clause result */
A_PROC_ENTRY(create_next_closure);
 /* line 75: */
 /* line 76: */
{ 
ASDBELA_closureno = 0;
 /* line 77: */
 /* line 78: */
BSDBELA = REKAELA_check_text(Cr.Context, Msg);
if ( BSDBELA )
{{ 
ASDBELA_closureno = ONBBELA_next_closure_details(Cr, A68_TRUE, A68_TRUE, A68_FALSE, Msg);
 /* line 79: */
 /* line 80: */
CSDBELA = (ASDBELA_closureno<0);
} 
BSDBELA = CSDBELA;
}
if ( BSDBELA )
{ 
 /* line 81: */
 /* line 82: */
UAKAELA_ctos( Cr, &DSDBELA );
LIBAELA_lib_msg( 128, &FSDBELA );
A_CALLPROC(Msg,(FSDBELA, A_HVEC(ESDBELA,DSDBELA,A68_VC )),(FSDBELA, A_HVEC(ESDBELA,DSDBELA,A68_VC ),(Msg).nonlocals));
} 
else
{ 
QJBBELA_save_library(Msg);
 /* line 84: */
 /* line 85: */
if ( (DLAATRN_assembler_libno<(*(&(HXJAELA_library->Version)))) )
{ 
A_CLOSURE( HSDBELA_generator, ISDBELA_generator, JSDBELA_generator );
A_CALLPROC(HSDBELA_generator,(A68_FALSE, &MSDBELA),(A68_FALSE, &MSDBELA,(HSDBELA_generator).nonlocals));
BLAATRN_idstable = MSDBELA;
 /* line 86: */
OSDBELA = BLAATRN_idstable.upb -1;
NSDBELA_ids = BLAATRN_idstable.data;
for (;OSDBELA-- >= 0;
(NSDBELA_ids++
) )
{
(*NSDBELA_ids) = LAAATRN_nilids;
}
 /* line 87: */
 /* line 88: */
 /* line 89: */
DLAATRN_assembler_libno = (*(&(HXJAELA_library->Version)));
} 
} 
 /* line 90: */
 /* line 91: */
PSDBELA = ASDBELA_closureno;
} 
A_PROC_EXIT(create_next_closure);
return( PSDBELA );
} 
#undef NL

A68_INT  SSDBELA_create_closure(A68_194  Cr, A68_54  Msg)
{ 
A68_INT  TSDBELA;  /* clause result */
A_PROC_ENTRY(create_closure);
 /* line 94: */
 /* line 95: */
{ 
ZLBBELA_zero_ctnos();
 /* line 96: */
 /* line 97: */
TSDBELA = ZRDBELA_create_next_closure(Cr, Msg);
} 
A_PROC_EXIT(create_closure);
return( TSDBELA );
} 
#undef NL
 /* line 103: */

A_STATIC A68_VOID  ATDBELA_expand_uses(A68_194  Cr, A68_VC  Name, A68_INT  Seedno, A68_460 ** Searchlist, A68_54  Msg)
{ 
A68_183 * BTDBELA_uses;
A68_186 * CTDBELA_i;
A68_190  DTDBELA;  /* avoid structure result */
A68_190  ETDBELA_decls;
A68_INT  FTDBELA_index;
A68_184  GTDBELA_decl;
A68_37  HTDBELA;  /* OPERATORS - simple index */
A68_460  ITDBELA;  /* collateral clause result */
A68_460 * JTDBELA;  /* YIELD */
A68_37  KTDBELA;  /* OPERATORS - simple index */
A68_BOOL * LTDBELA;  /* YIELD */
A_PROC_ENTRY(expand_uses);
 /* line 104: */
 /* line 105: */
{ 
 /* line 106: */
CTDBELA_i = HEKAELA_get_imports(Cr);
 /* line 107: */
LEBBELA_get_decls( Cr.Context, Msg, &DTDBELA );
ETDBELA_decls = DTDBELA;
 /* line 108: */
FTDBELA_index = IGBBELA_check_decl(Cr.Context, Name, Msg);
 /* line 109: */
GTDBELA_decl = (*(&A_VINDEX(ETDBELA_decls,FTDBELA_index)));
 /* line 110: */
 /* line 111: */
HTDBELA = GTDBELA_decl.Assemble ;
if ( !(*(&A_VINDEX(HTDBELA,Seedno))) )
{ 
 /* line 112: */
if ( GTDBELA_decl.Import )
{ 
for ( ;; )
{ 
if ( !(A_VC_NE((*(&((&(CTDBELA_i->Binding))->Rename))),Name)) ) break;
CTDBELA_i = (*(&(CTDBELA_i->Rest)));
}
 /* line 113: */
 /* line 114: */
ITDBELA.Ctn = (*(&((&(CTDBELA_i->Binding))->Ctn)));
ITDBELA.Id = (*(&((&(CTDBELA_i->Binding))->Name)));
ITDBELA.Seedno = Seedno;
 /* line 115: */
ITDBELA.Rest = (*Searchlist);
JTDBELA = A_HEAP(A68_460 ) ;
(*JTDBELA) = ITDBELA ;
(*Searchlist) = JTDBELA;
} 
 /* line 116: */
BTDBELA_uses = GTDBELA_decl.Uses;
 /* line 117: */
for ( ;; )
{ 
 /* line 118: */
if ( !((BTDBELA_uses!=HUJAELA_niluses)) ) break;
ATDBELA_expand_uses(Cr, (*(&(BTDBELA_uses->Name))), Seedno, Searchlist, Msg);
 /* line 119: */
 /* line 120: */
BTDBELA_uses = (*(&(BTDBELA_uses->Rest)));
}
 /* line 121: */
 /* line 122: */
 /* line 123: */
KTDBELA = (*(&((&A_VINDEX(ETDBELA_decls,FTDBELA_index))->Assemble))) ;
LTDBELA = (&A_VINDEX(KTDBELA,Seedno)) ;
(*LTDBELA) = A68_TRUE;
} 
} 
A_PROC_EXIT(expand_uses);
return;
} 
#undef NL

A_STATIC A68_INT  QTDBELA_find_closureno(A68_VC  Name, A68_INT  Contextno, A68_INT  Sort, A68_386 * Closure)
{ 
A68_383 * RTDBELA_os;
A68_INT  STDBELA_closureno;
A68_BOOL  TTDBELA;  /* optbool result */
A68_377  UTDBELA;  /* OPERATORS - simple index */
A68_INT  VTDBELA;  /* YIELD */
A68_256 * WTDBELA_adec;
A68_BOOL  XTDBELA;  /* optbool result */
A68_378  YTDBELA;  /* OPERATORS - simple index */
A68_INT  ZTDBELA;  /* YIELD */
A68_272 * AUDBELA_idec;
A68_BOOL  BUDBELA;  /* optbool result */
A68_379  CUDBELA;  /* OPERATORS - simple index */
A68_INT  DUDBELA;  /* YIELD */
A68_290 * EUDBELA_tdec;
A68_BOOL  FUDBELA;  /* optbool result */
A68_380  GUDBELA;  /* OPERATORS - simple index */
A68_INT  HUDBELA;  /* YIELD */
A68_296 * IUDBELA_cdec;
A68_BOOL  JUDBELA;  /* optbool result */
A68_381  KUDBELA;  /* OPERATORS - simple index */
A68_INT  LUDBELA;  /* YIELD */
A68_373 * MUDBELA_fdec;
A68_BOOL  NUDBELA;  /* optbool result */
A68_INT  OUDBELA;  /* clause result */
A_PROC_ENTRY(find_closureno);
 /* line 126: */
 /* line 127: */
{ 
RTDBELA_os = (*(&(Closure->Outers)));
 /* line 128: */
STDBELA_closureno = (-1);
 /* line 129: */
for ( ;; )
{ 
TTDBELA = (STDBELA_closureno==(-1));
if ( TTDBELA )
{ /* line 130: */
TTDBELA = (RTDBELA_os!=HBAATRN_nilouters);
}
if ( !(TTDBELA) ) break;
 /* line 131: */
if ( ((*(&((&(RTDBELA_os->Outer))->Sort)))==Sort) )
{ 
 /* line 133: */
switch ( Sort )
{ 
case 1: 
{ 
UTDBELA = (*(&((*(&((&(RTDBELA_os->Outer))->Environ)))->Attrs))) ;
VTDBELA = 1 ;
WTDBELA_adec = (*(&A_VINDEX(UTDBELA,VTDBELA)));
 /* line 134: */
 /* line 135: */
XTDBELA = A_VC_EQ((*(&(WTDBELA_adec->Attrname))),Name);
if ( XTDBELA )
{ /* line 136: */
XTDBELA = ((*(&((*(&(WTDBELA_adec->Usage)))->Contextno)))==Contextno);
}
if ( XTDBELA )
{ 
 /* line 137: */
 /* line 138: */
 /* line 140: */
STDBELA_closureno = (*(&((*(&(WTDBELA_adec->Usage)))->Closureno)));
} 
} 
break;
case 2: 
{ 
YTDBELA = (*(&((*(&((&(RTDBELA_os->Outer))->Environ)))->Ints))) ;
ZTDBELA = 1 ;
AUDBELA_idec = (*(&A_VINDEX(YTDBELA,ZTDBELA)));
 /* line 141: */
 /* line 142: */
BUDBELA = A_VC_EQ((*(&(AUDBELA_idec->Intname))),Name);
if ( BUDBELA )
{ /* line 143: */
BUDBELA = ((*(&((*(&(AUDBELA_idec->Usage)))->Contextno)))==Contextno);
}
if ( BUDBELA )
{ 
 /* line 144: */
 /* line 145: */
 /* line 147: */
STDBELA_closureno = (*(&((*(&(AUDBELA_idec->Usage)))->Closureno)));
} 
} 
break;
case 3: 
{ 
CUDBELA = (*(&((*(&((&(RTDBELA_os->Outer))->Environ)))->Types))) ;
DUDBELA = 1 ;
EUDBELA_tdec = (*(&A_VINDEX(CUDBELA,DUDBELA)));
 /* line 148: */
 /* line 149: */
FUDBELA = A_VC_EQ((*(&(EUDBELA_tdec->Typename))),Name);
if ( FUDBELA )
{ /* line 150: */
FUDBELA = ((*(&((*(&(EUDBELA_tdec->Usage)))->Contextno)))==Contextno);
}
if ( FUDBELA )
{ 
 /* line 151: */
 /* line 152: */
 /* line 154: */
STDBELA_closureno = (*(&((*(&(EUDBELA_tdec->Usage)))->Closureno)));
} 
} 
break;
case 4: 
{ 
GUDBELA = (*(&((*(&((&(RTDBELA_os->Outer))->Environ)))->Consts))) ;
HUDBELA = 1 ;
IUDBELA_cdec = (*(&A_VINDEX(GUDBELA,HUDBELA)));
 /* line 155: */
 /* line 156: */
JUDBELA = A_VC_EQ((*(&(IUDBELA_cdec->Constname))),Name);
if ( JUDBELA )
{ /* line 157: */
JUDBELA = ((*(&((*(&(IUDBELA_cdec->Usage)))->Contextno)))==Contextno);
}
if ( JUDBELA )
{ 
 /* line 158: */
 /* line 159: */
 /* line 161: */
STDBELA_closureno = (*(&((*(&(IUDBELA_cdec->Usage)))->Closureno)));
} 
} 
break;
case 5: 
{ 
KUDBELA = (*(&((*(&((&(RTDBELA_os->Outer))->Environ)))->Fns))) ;
LUDBELA = 1 ;
MUDBELA_fdec = (*(&A_VINDEX(KUDBELA,LUDBELA)));
 /* line 162: */
 /* line 163: */
NUDBELA = A_VC_EQ((*(&(MUDBELA_fdec->Fnname))),Name);
if ( NUDBELA )
{ /* line 164: */
NUDBELA = ((*(&((*(&(MUDBELA_fdec->Usage)))->Contextno)))==Contextno);
}
if ( NUDBELA )
{ 
 /* line 165: */
 /* line 166: */
 /* line 167: */
 /* line 168: */
STDBELA_closureno = (*(&((*(&(MUDBELA_fdec->Usage)))->Closureno)));
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
 /* line 169: */
 /* line 170: */
RTDBELA_os = (*(&(RTDBELA_os->Rest)));
}
 /* line 171: */
 /* line 172: */
OUDBELA = STDBELA_closureno;
} 
A_PROC_EXIT(find_closureno);
return( OUDBELA );
} 
#undef NL

A_STATIC A68_VOID  RUDBELA_environ_closurenos(A68_376 * Env, A68_386 * Closure)
{ 
A68_257 * SUDBELA_us;
A68_256 ** TUDBELA_attr;
A68_377  UUDBELA;  /* forall yield */
A68_INT  VUDBELA;  /* forall loop counter */
A68_BOOL  WUDBELA;  /* optbool result */
A68_INT * XUDBELA;  /* YIELD */
A68_272 ** YUDBELA_int;
A68_378  ZUDBELA;  /* forall yield */
A68_INT  AVDBELA;  /* forall loop counter */
A68_BOOL  BVDBELA;  /* optbool result */
A68_INT * CVDBELA;  /* YIELD */
A68_290 ** DVDBELA_type;
A68_379  EVDBELA;  /* forall yield */
A68_INT  FVDBELA;  /* forall loop counter */
A68_BOOL  GVDBELA;  /* optbool result */
A68_INT * HVDBELA;  /* YIELD */
A68_296 ** IVDBELA_const;
A68_380  JVDBELA;  /* forall yield */
A68_INT  KVDBELA;  /* forall loop counter */
A68_BOOL  LVDBELA;  /* optbool result */
A68_INT * MVDBELA;  /* YIELD */
A68_373 ** NVDBELA_fn;
A68_381  OVDBELA;  /* forall yield */
A68_INT  PVDBELA;  /* forall loop counter */
A68_BOOL  QVDBELA;  /* optbool result */
A68_INT * RVDBELA;  /* YIELD */
A_PROC_ENTRY(environ_closurenos);
 /* line 175: */
 /* line 177: */
{ 
 /* line 178: */
 /* line 179: */
UUDBELA = (*(&(Env->Attrs))) ;
VUDBELA = UUDBELA.upb -1;
TUDBELA_attr = UUDBELA.data;
for (;VUDBELA-- >= 0;
(TUDBELA_attr++
) )
{
 /* line 180: */
if ( ((*TUDBELA_attr)!=UAAATRN_nilattrdec) )
{ 
SUDBELA_us = (*(&((*TUDBELA_attr)->Usage)));
 /* line 181: */
WUDBELA = (SUDBELA_us!=CBAATRN_nilusage);
if ( WUDBELA )
{ /* line 182: */
WUDBELA = ((*(&(SUDBELA_us->Closureno)))==0);
}
if ( WUDBELA )
{ 
 /* line 183: */
 /* line 184: */
 /* line 185: */
 /* line 186: */
XUDBELA = (&(SUDBELA_us->Closureno)) ;
(*XUDBELA) = QTDBELA_find_closureno((*(&((*TUDBELA_attr)->Attrname))), (*(&(SUDBELA_us->Contextno))), RKAATRN_outerattr, Closure);
} 
} 
}
 /* line 187: */
 /* line 188: */
ZUDBELA = (*(&(Env->Ints))) ;
AVDBELA = ZUDBELA.upb -1;
YUDBELA_int = ZUDBELA.data;
for (;AVDBELA-- >= 0;
(YUDBELA_int++
) )
{
 /* line 189: */
if ( ((*YUDBELA_int)!=VAAATRN_nilintdec) )
{ 
SUDBELA_us = (*(&((*YUDBELA_int)->Usage)));
 /* line 190: */
BVDBELA = (SUDBELA_us!=CBAATRN_nilusage);
if ( BVDBELA )
{ /* line 191: */
BVDBELA = ((*(&(SUDBELA_us->Closureno)))==0);
}
if ( BVDBELA )
{ 
 /* line 192: */
 /* line 193: */
 /* line 194: */
 /* line 195: */
CVDBELA = (&(SUDBELA_us->Closureno)) ;
(*CVDBELA) = QTDBELA_find_closureno((*(&((*YUDBELA_int)->Intname))), (*(&(SUDBELA_us->Contextno))), SKAATRN_outerint, Closure);
} 
} 
}
 /* line 196: */
 /* line 197: */
EVDBELA = (*(&(Env->Types))) ;
FVDBELA = EVDBELA.upb -1;
DVDBELA_type = EVDBELA.data;
for (;FVDBELA-- >= 0;
(DVDBELA_type++
) )
{
 /* line 198: */
if ( ((*DVDBELA_type)!=WAAATRN_niltypedec) )
{ 
SUDBELA_us = (*(&((*DVDBELA_type)->Usage)));
 /* line 199: */
GVDBELA = (SUDBELA_us!=CBAATRN_nilusage);
if ( GVDBELA )
{ /* line 200: */
GVDBELA = ((*(&(SUDBELA_us->Closureno)))==0);
}
if ( GVDBELA )
{ 
 /* line 201: */
 /* line 202: */
 /* line 203: */
 /* line 204: */
HVDBELA = (&(SUDBELA_us->Closureno)) ;
(*HVDBELA) = QTDBELA_find_closureno((*(&((*DVDBELA_type)->Typename))), (*(&(SUDBELA_us->Contextno))), TKAATRN_outertype, Closure);
} 
} 
}
 /* line 205: */
 /* line 206: */
JVDBELA = (*(&(Env->Consts))) ;
KVDBELA = JVDBELA.upb -1;
IVDBELA_const = JVDBELA.data;
for (;KVDBELA-- >= 0;
(IVDBELA_const++
) )
{
 /* line 207: */
if ( ((*IVDBELA_const)!=XAAATRN_nilconstdec) )
{ 
SUDBELA_us = (*(&((*IVDBELA_const)->Usage)));
 /* line 208: */
LVDBELA = (SUDBELA_us!=CBAATRN_nilusage);
if ( LVDBELA )
{ /* line 209: */
LVDBELA = ((*(&(SUDBELA_us->Closureno)))==0);
}
if ( LVDBELA )
{ 
 /* line 210: */
 /* line 211: */
 /* line 212: */
 /* line 213: */
MVDBELA = (&(SUDBELA_us->Closureno)) ;
(*MVDBELA) = QTDBELA_find_closureno((*(&((*IVDBELA_const)->Constname))), (*(&(SUDBELA_us->Contextno))), UKAATRN_outerconst, Closure);
} 
} 
}
 /* line 214: */
 /* line 215: */
OVDBELA = (*(&(Env->Fns))) ;
PVDBELA = OVDBELA.upb -1;
NVDBELA_fn = OVDBELA.data;
for (;PVDBELA-- >= 0;
(NVDBELA_fn++
) )
{
 /* line 216: */
if ( ((*NVDBELA_fn)!=YAAATRN_nilfndec) )
{ 
SUDBELA_us = (*(&((*NVDBELA_fn)->Usage)));
 /* line 217: */
QVDBELA = (SUDBELA_us!=CBAATRN_nilusage);
if ( QVDBELA )
{ /* line 218: */
QVDBELA = ((*(&(SUDBELA_us->Closureno)))==0);
}
if ( QVDBELA )
{ 
 /* line 219: */
 /* line 220: */
 /* line 221: */
 /* line 222: */
RVDBELA = (&(SUDBELA_us->Closureno)) ;
(*RVDBELA) = QTDBELA_find_closureno((*(&((*NVDBELA_fn)->Fnname))), (*(&(SUDBELA_us->Contextno))), VKAATRN_outerfn, Closure);
} 
} 
}
 /* line 223: */
} 
A_PROC_EXIT(environ_closurenos);
return;
} 
#undef NL

A_STATIC A68_VOID  TVDBELA_add_closurenos(A68_386 * Closure)
{ 
A68_383 * UVDBELA_os;
A_PROC_ENTRY(add_closurenos);
 /* line 226: */
 /* line 227: */
{ 
UVDBELA_os = (*(&(Closure->Outers)));
 /* line 228: */
for ( ;; )
{ 
 /* line 229: */
if ( !((UVDBELA_os!=HBAATRN_nilouters)) ) break;
RUDBELA_environ_closurenos((*(&((&(UVDBELA_os->Outer))->Environ))), Closure);
 /* line 230: */
 /* line 231: */
UVDBELA_os = (*(&(UVDBELA_os->Rest)));
}
 /* line 232: */
} 
A_PROC_EXIT(add_closurenos);
return;
} 
#undef NL

A68_BOOL  WVDBELA_is_assembled(A68_37  Seeds)
{ 
A68_BOOL  XVDBELA_assembled;
A68_BOOL * YVDBELA_s;
A68_INT  ZVDBELA;  /* forall loop counter */
A68_BOOL  AWDBELA;  /* clause result */
A_PROC_ENTRY(is_assembled);
 /* line 236: */
 /* line 237: */
{ 
XVDBELA_assembled = A68_FALSE;
 /* line 238: */
ZVDBELA = Seeds.upb -1;
YVDBELA_s = Seeds.data;
for (;ZVDBELA-- >= 0;
(YVDBELA_s++
) )
{
if ( !(!XVDBELA_assembled) ) break;
XVDBELA_assembled = (*YVDBELA_s);
}
 /* line 239: */
 /* line 240: */
AWDBELA = XVDBELA_assembled;
} 
A_PROC_EXIT(is_assembled);
return( AWDBELA );
} 
#undef NL
 /* line 246: */

A68_386 * FWDBELA_generate_closure(A68_466 * Seeds, A68_BOOL  With_body, A68_54  Msg)
{ 
A68_460 * GWDBELA_searchlist;
A68_190  HWDBELA_decls;
A68_131  IWDBELA_bodies;
A68_194  JWDBELA_cr;
A68_460 * KWDBELA_slist;
A68_386 * LWDBELA_closure;
A68_383 ** MWDBELA_nextouter;
A68_INT  NWDBELA_contextno;
A68_INT  OWDBELA_maxseedno;
A68_466 * PWDBELA_ss;
A68_194  QWDBELA_crg;
A68_INT  RWDBELA_ctno;
A68_INT  SWDBELA;  /* by part of loop */
A68_194  TWDBELA;  /* avoid structure result */
A68_190  UWDBELA;  /* avoid structure result */
A68_184 * VWDBELA_d;
A68_INT  WWDBELA;  /* forall loop counter */
A68_468  YWDBELA_generator;   /* proc value of non-global proc */
A68_37  DXDBELA;  /* avoid structure result */
A68_37  EXDBELA_assinfo;
A68_BOOL * FXDBELA_a;
A68_INT  GXDBELA;  /* forall loop counter */
A68_37 * HXDBELA;  /* YIELD */
A68_INT  IXDBELA_seedno;
A68_VC  JXDBELA;  /* == */
A68_BOOL  KXDBELA;  /* optbool result */
A68_184 * LXDBELA_dc;
A68_INT  MXDBELA;  /* forall loop counter */
A68_BOOL  NXDBELA;  /* optbool result */
A68_31  OXDBELA;  /* avoid structure result */
A68_INT  PXDBELA_cno;
A68_INT  QXDBELA;  /* to part of loop */
A68_194  RXDBELA;  /* avoid structure result */
A68_190  SXDBELA;  /* avoid structure result */
A68_INT  TXDBELA_i;
A68_INT  UXDBELA;  /* to part of loop */
A68_184  VXDBELA_decl;
A68_108  WXDBELA;  /* OPERATORS - mode -> union mode */
A68_VC  XXDBELA;  /* YIELD */
A68_158 * YXDBELA_specbuff;
A68_158 * ZXDBELA;  /* clause result */
A68_158 * AYDBELA_bodybuff;
A68_INT  BYDBELA_closureno;
A68_382  CYDBELA;  /* avoid structure result */
A68_382  DYDBELA_outer;
A68_386 * EYDBELA;  /* clause result */
A_PROC_ENTRY(generate_closure);
 /* line 247: */
 /* line 248: */
{ 
GWDBELA_searchlist = USDBELA_nilsearch;
 /* line 249: */
 /* line 250: */
 /* line 251: */
 /* line 252: */
 /* line 253: */
LWDBELA_closure = AOCATRN_make_closure();
 /* line 254: */
MWDBELA_nextouter = (&(LWDBELA_closure->Outers));
 /* line 256: */
NWDBELA_contextno = 0;
 /* line 257: */
OWDBELA_maxseedno = 0;
 /* line 259: */
ZLBBELA_zero_ctnos();
 /* line 260: */
PWDBELA_ss = Seeds;
 /* line 261: */
for ( ;; )
{ 
 /* line 262: */
if ( !((PWDBELA_ss!=BWDBELA_nilclosureseed)) ) break;
OWDBELA_maxseedno+=1;
 /* line 263: */
QWDBELA_crg = (*(&(PWDBELA_ss->Cregion)));
 /* line 264: */
NWDBELA_contextno = ZRDBELA_create_next_closure(QWDBELA_crg, Msg);
 /* line 265: */
 /* line 266: */
PWDBELA_ss = (*(&(PWDBELA_ss->Rest)));
}
 /* line 268: */
 /* line 269: */
SWDBELA = (-1);
for ( RWDBELA_ctno = NWDBELA_contextno;
( SWDBELA > 0 && RWDBELA_ctno <= 1) ||
( SWDBELA < 0 && RWDBELA_ctno >= 1) ||
( SWDBELA == 0 ) ;
RWDBELA_ctno += SWDBELA )
{ 
RLBBELA_ctno_region( RWDBELA_ctno, &TWDBELA );
JWDBELA_cr = TWDBELA;
 /* line 270: */
LEBBELA_get_decls( (*(&((&JWDBELA_cr)->Context))), Msg, &UWDBELA );
HWDBELA_decls = UWDBELA;
 /* line 271: */
 /* line 272: */
WWDBELA = HWDBELA_decls.upb -1;
VWDBELA_d = HWDBELA_decls.data;
for (;WWDBELA-- >= 0;
(VWDBELA_d++
) )
{
A_CLOSURE( YWDBELA_generator, ZWDBELA_generator, AXDBELA_generator );
(( AXDBELA_generator * ) ( YWDBELA_generator.nonlocals )) -> OWDBELA_maxseedno = (&OWDBELA_maxseedno);
A_CALLPROC(YWDBELA_generator,(A68_FALSE, &DXDBELA),(A68_FALSE, &DXDBELA,(YWDBELA_generator).nonlocals));
EXDBELA_assinfo = DXDBELA;
 /* line 273: */
GXDBELA = EXDBELA_assinfo.upb -1;
FXDBELA_a = EXDBELA_assinfo.data;
for (;GXDBELA-- >= 0;
(FXDBELA_a++
) )
{
(*FXDBELA_a) = A68_FALSE;
}
 /* line 274: */
 /* line 275: */
HXDBELA = (&(VWDBELA_d->Assemble)) ;
(*HXDBELA) = EXDBELA_assinfo;
}
 /* line 277: */
PWDBELA_ss = Seeds;
 /* line 278: */
for ( IXDBELA_seedno = 1;;
IXDBELA_seedno += 1 ) 
{ 
 /* line 279: */
if ( !((PWDBELA_ss!=BWDBELA_nilclosureseed)) ) break;
 /* line 280: */
if ( XZJAELA_(JWDBELA_cr, (*(&(PWDBELA_ss->Cregion)))) )
{ 
JXDBELA = (*(&(PWDBELA_ss->Fnname))) ;
KXDBELA = A_VSTRUCTCOMP(JXDBELA,NTCAOST_nilid);
if ( ! KXDBELA )
{ /* line 281: */
KXDBELA = ((*(&(PWDBELA_ss->Fnname))).upb==0);
}
if ( KXDBELA )
{ 
 /* line 282: */
MXDBELA = HWDBELA_decls.upb -1;
LXDBELA_dc = HWDBELA_decls.data;
for (;MXDBELA-- >= 0;
(LXDBELA_dc++
) )
{
NXDBELA = !(*(&(LXDBELA_dc->Import)));
if ( NXDBELA )
{ /* line 283: */
NXDBELA = ((*(&(LXDBELA_dc->Sort)))==LVJAELA_kfn);
}
if ( NXDBELA )
{ 
 /* line 284: */
 /* line 285: */
ATDBELA_expand_uses(JWDBELA_cr, (*(&(LXDBELA_dc->Name))), IXDBELA_seedno, (&GWDBELA_searchlist), Msg);
} 
}
 /* line 286: */
} 
else
{ 
 /* line 287: */
 /* line 288: */
ATDBELA_expand_uses(JWDBELA_cr, (*(&(PWDBELA_ss->Fnname))), IXDBELA_seedno, (&GWDBELA_searchlist), Msg);
} 
} 
 /* line 289: */
 /* line 290: */
PWDBELA_ss = (*(&(PWDBELA_ss->Rest)));
}
 /* line 292: */
KWDBELA_slist = GWDBELA_searchlist;
 /* line 293: */
for ( ;; )
{ 
 /* line 294: */
if ( !((KWDBELA_slist!=USDBELA_nilsearch)) ) break;
 /* line 295: */
NBKAELA_ctn( JWDBELA_cr, &OXDBELA );
if ( SZJAELA_((*(&(KWDBELA_slist->Ctn))), OXDBELA) )
{ 
 /* line 296: */
ATDBELA_expand_uses(JWDBELA_cr, (*(&(KWDBELA_slist->Id))), (*(&(KWDBELA_slist->Seedno))), (&GWDBELA_searchlist), Msg);
} 
 /* line 297: */
 /* line 298: */
KWDBELA_slist = (*(&(KWDBELA_slist->Rest)));
}
 /* line 299: */
}
 /* line 301: */
 /* line 302: */
QXDBELA = NWDBELA_contextno;
for ( PXDBELA_cno = 1;
PXDBELA_cno <= QXDBELA;
PXDBELA_cno += 1 )
{ 
RLBBELA_ctno_region( PXDBELA_cno, &RXDBELA );
JWDBELA_cr = RXDBELA;
 /* line 303: */
LEBBELA_get_decls( (*(&((&JWDBELA_cr)->Context))), Msg, &SXDBELA );
HWDBELA_decls = SXDBELA;
 /* line 304: */
 /* line 305: */
if ( With_body )
{ 
 /* line 306: */
IWDBELA_bodies = (*(&(TBWAELA_get_declattribute((*(&((&JWDBELA_cr)->Context))), (*JZJAELA_body_key), Msg)->Data)));
} 
 /* line 307: */
 /* line 308: */
UXDBELA = HWDBELA_decls.upb;
for ( TXDBELA_i = 1;
TXDBELA_i <= UXDBELA;
TXDBELA_i += 1 )
{ 
VXDBELA_decl = (*(&A_VINDEX(HWDBELA_decls,TXDBELA_i)));
 /* line 309: */
 /* line 310: */
if ( WVDBELA_is_assembled(VXDBELA_decl.Assemble) )
{ 
XXDBELA = VXDBELA_decl.Il ;
YXDBELA_specbuff = ZXIAELA_makebuffer(TYJAELA_discfile, A_UNITE(WXDBELA,mode2,2,XXDBELA), QXIAELA_validread);
 /* line 311: */
 /* line 312: */
if ( With_body )
{ 
 /* line 313: */
 /* line 314: */
ZXDBELA = WYIAELA_readbuffer(TYJAELA_discfile, (*(&A_VINDEX(IWDBELA_bodies,TXDBELA_i))));
} 
else
{ 
ZXDBELA = OXIAELA_nilbuffer;
} 
AYDBELA_bodybuff = ZXDBELA;
 /* line 315: */
BYDBELA_closureno = ENCATRN_reserve_next_closureno(LWDBELA_closure);
 /* line 316: */
 /* line 317: */
UGPAELA_assemble( PXDBELA_cno, BYDBELA_closureno, VXDBELA_decl.Export, YXDBELA_specbuff, AYDBELA_bodybuff, Msg, &CYDBELA );
DYDBELA_outer = CYDBELA;
 /* line 318: */
 /* line 319: */
 /* line 320: */
MWDBELA_nextouter = KNCATRN_insert_outer(DYDBELA_outer, MWDBELA_nextouter, LWDBELA_closure, Msg);
} 
}
 /* line 321: */
}
 /* line 322: */
TVDBELA_add_closurenos(LWDBELA_closure);
 /* line 323: */
 /* line 324: */
EYDBELA = LWDBELA_closure;
} 
A_PROC_EXIT(generate_closure);
return( EYDBELA );
} 
#undef NL
 /* line 327: */

A68_386 * JYDBELA_declaration_closure(A68_194  Cr, A68_VC  Declname, A68_BOOL  With_body, A68_54  Msg)
{ 
A68_466  KYDBELA;  /* collateral clause result */
A68_386 * LYDBELA;  /* clause result */
A68_466 * MYDBELA;  /* YIELD */
A_PROC_ENTRY(declaration_closure);
 /* line 328: */
KYDBELA.Cregion = Cr;
KYDBELA.Fnname = Declname;
KYDBELA.Rest = BWDBELA_nilclosureseed;
 /* line 329: */
MYDBELA = A_HEAP(A68_466 ) ;
(*MYDBELA) = KYDBELA ;
LYDBELA = FWDBELA_generate_closure(MYDBELA, With_body, Msg);
A_PROC_EXIT(declaration_closure);
return( LYDBELA );
} 
#undef NL

A68_386 * QYDBELA_context_closure(A68_194  Cr, A68_BOOL  With_bodies, A68_54  Msg)
{ 
A68_466  RYDBELA;  /* collateral clause result */
A68_386 * SYDBELA;  /* clause result */
A68_466 * TYDBELA;  /* YIELD */
A_PROC_ENTRY(context_closure);
 /* line 332: */
RYDBELA.Cregion = Cr;
RYDBELA.Fnname = EOAAOSL_nullstr;
RYDBELA.Rest = BWDBELA_nilclosureseed;
 /* line 333: */
TYDBELA = A_HEAP(A68_466 ) ;
(*TYDBELA) = RYDBELA ;
SYDBELA = FWDBELA_generate_closure(TYDBELA, With_bodies, Msg);
A_PROC_EXIT(context_closure);
return( SYDBELA );
} 
#undef NL

A68_386 * XYDBELA_context_specs(A68_189 * Ct, A68_BOOL  With_bodies, A68_54  Msg)
{ 
A68_386 * YYDBELA_closure;
A68_383 ** ZYDBELA_nextouter;
A68_190  AZDBELA;  /* avoid structure result */
A68_190  BZDBELA_decls;
A68_131  CZDBELA;  /* clause result */
A68_131  DZDBELA;  /* OPERATORS - nil -> mode */
A68_131  EZDBELA_bodies;
A68_INT  FZDBELA_i;
A68_INT  GZDBELA;  /* to part of loop */
A68_184  HZDBELA_decl;
A68_108  IZDBELA;  /* OPERATORS - mode -> union mode */
A68_VC  JZDBELA;  /* YIELD */
A68_158 * KZDBELA_specbuff;
A68_158 * LZDBELA;  /* clause result */
A68_158 * MZDBELA_bodybuff;
A68_INT  NZDBELA_closureno;
A68_382  OZDBELA;  /* avoid structure result */
A68_382  PZDBELA_outer;
A68_386 * QZDBELA;  /* clause result */
A_PROC_ENTRY(context_specs);
 /* line 336: */
 /* line 337: */
{ 
YYDBELA_closure = AOCATRN_make_closure();
 /* line 338: */
ZYDBELA_nextouter = (&(YYDBELA_closure->Outers));
 /* line 339: */
 /* line 340: */
if ( REKAELA_check_text(Ct, Msg) )
{ 
LEBBELA_get_decls( Ct, Msg, &AZDBELA );
BZDBELA_decls = AZDBELA;
 /* line 341: */
 /* line 342: */
 /* line 343: */
if ( With_bodies )
{ 
 /* line 344: */
 /* line 345: */
CZDBELA = (*(&(TBWAELA_get_declattribute(Ct, (*JZJAELA_body_key), Msg)->Data)));
} 
else
{ 
CZDBELA = A_VVAC(DZDBELA);
} 
EZDBELA_bodies = CZDBELA;
 /* line 346: */
 /* line 347: */
GZDBELA = BZDBELA_decls.upb;
for ( FZDBELA_i = 1;
FZDBELA_i <= GZDBELA;
FZDBELA_i += 1 )
{ 
HZDBELA_decl = (*(&A_VINDEX(BZDBELA_decls,FZDBELA_i)));
 /* line 348: */
JZDBELA = HZDBELA_decl.Il ;
KZDBELA_specbuff = ZXIAELA_makebuffer(TYJAELA_discfile, A_UNITE(IZDBELA,mode2,2,JZDBELA), QXIAELA_validread);
 /* line 349: */
 /* line 350: */
if ( With_bodies )
{ 
 /* line 351: */
 /* line 352: */
LZDBELA = WYIAELA_readbuffer(TYJAELA_discfile, (*(&A_VINDEX(EZDBELA_bodies,FZDBELA_i))));
} 
else
{ 
LZDBELA = OXIAELA_nilbuffer;
} 
MZDBELA_bodybuff = LZDBELA;
 /* line 353: */
NZDBELA_closureno = ENCATRN_reserve_next_closureno(YYDBELA_closure);
 /* line 354: */
 /* line 355: */
UGPAELA_assemble( 1, NZDBELA_closureno, HZDBELA_decl.Export, KZDBELA_specbuff, MZDBELA_bodybuff, Msg, &OZDBELA );
PZDBELA_outer = OZDBELA;
 /* line 356: */
 /* line 357: */
ZYDBELA_nextouter = KNCATRN_insert_outer(PZDBELA_outer, ZYDBELA_nextouter, YYDBELA_closure, Msg);
}
 /* line 358: */
} 
 /* line 359: */
TVDBELA_add_closurenos(YYDBELA_closure);
 /* line 360: */
 /* line 361: */
QZDBELA = YYDBELA_closure;
} 
A_PROC_EXIT(context_specs);
return( QZDBELA );
} 
#undef NL
 /* line 364: */

A68_VOID  VZDBELA_declaration_spec(A68_189 * Ct, A68_VC  Declname, A68_BOOL  With_body, A68_54  Msg, A68_382  *ReturnedValue)
{ 
A68_INT  WZDBELA_declno;
A68_190  XZDBELA;  /* avoid structure result */
A68_184  YZDBELA_decl;
A68_130  ZZDBELA;  /* clause result */
A68_131  AAEBELA;  /* OPERATORS - simple index */
A68_130  BAEBELA_body;
A68_108  CAEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  DAEBELA;  /* YIELD */
A68_158 * EAEBELA_specbuff;
A68_158 * FAEBELA;  /* clause result */
A68_158 * GAEBELA_bodybuff;
A68_382  HAEBELA;  /* clause result */
A68_382  IAEBELA;  /* avoid structure result */
A68_382  JAEBELA;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(declaration_spec);
 /* line 365: */
 /* line 366: */
{ 
 /* line 367: */
if ( REKAELA_check_text(Ct, Msg) )
{ 
WZDBELA_declno = IGBBELA_check_decl(Ct, Declname, Msg);
 /* line 368: */
LEBBELA_get_decls( Ct, Msg, &XZDBELA );
YZDBELA_decl = (*(&A_VINDEX(XZDBELA,WZDBELA_declno)));
 /* line 369: */
 /* line 370: */
 /* line 371: */
if ( With_body )
{ 
 /* line 372: */
 /* line 373: */
AAEBELA = (*(&(TBWAELA_get_declattribute(Ct, (*JZJAELA_body_key), Msg)->Data))) ;
ZZDBELA = (*(&A_VINDEX(AAEBELA,WZDBELA_declno)));
} 
else
{ 
ZZDBELA = UACAELA_nilptr;
} 
BAEBELA_body = ZZDBELA;
 /* line 374: */
DAEBELA = YZDBELA_decl.Il ;
EAEBELA_specbuff = ZXIAELA_makebuffer(TYJAELA_discfile, A_UNITE(CAEBELA,mode2,2,DAEBELA), QXIAELA_validread);
 /* line 375: */
 /* line 376: */
if ( With_body )
{ 
 /* line 377: */
 /* line 378: */
FAEBELA = WYIAELA_readbuffer(TYJAELA_discfile, BAEBELA_body);
} 
else
{ 
FAEBELA = OXIAELA_nilbuffer;
} 
GAEBELA_bodybuff = FAEBELA;
 /* line 379: */
 /* line 380: */
 /* line 381: */
UGPAELA_assemble( 1, 1, YZDBELA_decl.Export, EAEBELA_specbuff, GAEBELA_bodybuff, Msg, &IAEBELA );
HAEBELA = IAEBELA;
} 
else
{ 
 /* line 382: */
HAEBELA = JAEBELA;
} 
} 
A_PROC_EXIT(declaration_spec);
*ReturnedValue = (HAEBELA);
return;
} 
#undef NL

A68_362 * NAEBELA_find_import(A68_INT  Ctno, A68_VC  Rename, A68_54  Msg)
{ 
A68_194  OAEBELA;  /* avoid structure result */
A68_194  PAEBELA_cr;
A68_185 * QAEBELA_binding;
A68_362 * RAEBELA;  /* clause result */
A68_31  SAEBELA_ctn;
A68_189 * TAEBELA_ct;
A68_194  UAEBELA;  /* avoid structure result */
A68_194  VAEBELA_icr;
A68_362  WAEBELA;  /* collateral clause result */
A68_362 * XAEBELA;  /* YIELD */
A_PROC_ENTRY(find_import);
 /* line 386: */
 /* line 387: */
{ 
RLBBELA_ctno_region( Ctno, &OAEBELA );
PAEBELA_cr = OAEBELA;
 /* line 388: */
QAEBELA_binding = BGKAELA_check_binding(PAEBELA_cr, Rename, Msg);
 /* line 389: */
 /* line 390: */
 /* line 391: */
if ( A_VC_EQ((*(&(QAEBELA_binding->Name))),EOAAOSL_nullstr) )
{ 
RAEBELA = TAAATRN_nilimport;
} 
else
{ 
SAEBELA_ctn = (*(&(QAEBELA_binding->Ctn)));
 /* line 392: */
TAEBELA_ct = UDKAELA_get_context(SAEBELA_ctn.Context);
 /* line 393: */
AEKAELA_get_region( TAEBELA_ct, SAEBELA_ctn.Import, &UAEBELA );
VAEBELA_icr = UAEBELA;
 /* line 394: */
WAEBELA.Name = (*(&(QAEBELA_binding->Name)));
WAEBELA.Contextno = (*(&(VAEBELA_icr.Region->Ctno)));
 /* line 395: */
WAEBELA.Ctname = SAEBELA_ctn;
 /* line 396: */
XAEBELA = A_HEAP(A68_362 ) ;
(*XAEBELA) = WAEBELA ;
RAEBELA = XAEBELA;
} 
} 
A_PROC_EXIT(find_import);
return( RAEBELA );
} 
#undef NL

A68_VOID  ABEBELA_add_import(A68_382  Outer, A68_54  Msg)
{ 
A68_381  BBEBELA;  /* OPERATORS - simple index */
A68_INT  CBEBELA;  /* YIELD */
A68_373 * DBEBELA_fdec;
A68_362 * EBEBELA_imp;
A68_369  FBEBELA;  /* OPERATORS - mode -> union mode */
A68_369 * GBEBELA;  /* YIELD */
A68_56  JBEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(add_import);
 /* line 399: */
 /* line 400: */
{ 
 /* line 401: */
if ( (Outer.Sort==VKAATRN_outerfn) )
{ 
BBEBELA = (*(&(Outer.Environ->Fns))) ;
CBEBELA = 1 ;
DBEBELA_fdec = (*(&A_VINDEX(BBEBELA,CBEBELA)));
 /* line 402: */
 /* line 403: */
 /* line 404: */
if ( (*(&((*(&(DBEBELA_fdec->Usage)))->Import))) )
{ 
EBEBELA_imp = NAEBELA_find_import((*(&((*(&(DBEBELA_fdec->Usage)))->Contextno))), (*(&(DBEBELA_fdec->Fnname))), Msg);
 /* line 405: */
 /* line 406: */
 /* line 407: */
GBEBELA = (&(DBEBELA_fdec->Fnbody)) ;
(*GBEBELA) = A_UNITE(FBEBELA,mode5,5,EBEBELA_imp);
} 
} 
else
{ 
 /* line 408: */
 /* line 409: */
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(JBEBELA,IBEBELA,A68_VC )),(SHAAOSI_system, A_HVEC(JBEBELA,IBEBELA,A68_VC ),(Msg).nonlocals));
} 
} 
A_PROC_EXIT(add_import);
return;
} 
#undef NL

A68_386 * MBEBELA_get_allimports(A68_386 * Closure, A68_54  Msg)
{ 
A68_383 * NBEBELA_outers;
A68_382  OBEBELA_o;
A68_381  PBEBELA;  /* OPERATORS - simple index */
A68_INT  QBEBELA;  /* YIELD */
A68_373 * RBEBELA_fdec;
A68_386 * SBEBELA;  /* clause result */
A_PROC_ENTRY(get_allimports);
 /* line 414: */
 /* line 416: */
{ 
NBEBELA_outers = (*(&(Closure->Outers)));
 /* line 417: */
for ( ;; )
{ 
 /* line 418: */
if ( !((NBEBELA_outers!=HBAATRN_nilouters)) ) break;
OBEBELA_o = (*(&(NBEBELA_outers->Outer)));
 /* line 419: */
 /* line 420: */
if ( (OBEBELA_o.Sort==VKAATRN_outerfn) )
{ 
PBEBELA = (*(&(OBEBELA_o.Environ->Fns))) ;
QBEBELA = 1 ;
RBEBELA_fdec = (*(&A_VINDEX(PBEBELA,QBEBELA)));
 /* line 421: */
 /* line 422: */
if ( (*(&((*(&(RBEBELA_fdec->Usage)))->Import))) )
{ 
 /* line 423: */
 /* line 424: */
ABEBELA_add_import(OBEBELA_o, Msg);
} 
} 
 /* line 425: */
 /* line 426: */
NBEBELA_outers = (*(&(NBEBELA_outers->Rest)));
}
 /* line 427: */
 /* line 428: */
SBEBELA = Closure;
} 
A_PROC_EXIT(get_allimports);
return( SBEBELA );
} 
#undef NL
 /* line 431: */
 /* line 432: */

A68_VOID  WBEBELA_write_closureseeds(A68_466 * Seeds, A68_431  Writer, A68_54  Msg)
{ 
A68_441  XBEBELA;  /* clause result */
A68_441  YBEBELA;  /* procedure value */
A68_441  ZBEBELA;  /* procedure value */
A68_441  ACEBELA_outid;
A68_INT  BCEBELA_maxseedno;
A68_466 * CCEBELA_s;
A68_INT  DCEBELA_maxctno;
A68_INT  ECEBELA_ctno;
A68_INT  FCEBELA;  /* to part of loop */
A68_194  GCEBELA;  /* avoid structure result */
A68_194  HCEBELA_cr;
A68_190  ICEBELA;  /* avoid structure result */
A68_190  JCEBELA_decls;
A68_INT  KCEBELA_number;
A68_184 * LCEBELA_decl;
A68_INT  MCEBELA;  /* forall loop counter */
A68_184 * NCEBELA_decl;
A68_INT  OCEBELA;  /* forall loop counter */
A68_BOOL * PCEBELA_b;
A68_37  QCEBELA;  /* forall yield */
A68_INT  RCEBELA;  /* forall loop counter */
A_PROC_ENTRY(write_closureseeds);
 /* line 433: */
 /* line 436: */
{ 
if ( Writer.Write_idstable )
{ 
YBEBELA.fn.fn_global = CLFATRN_outassemid;
YBEBELA.nonlocals = A68_NIL;
XBEBELA = YBEBELA;
} 
else
{ 
ZBEBELA.fn.fn_global = GKFATRN_outassemstr;
ZBEBELA.nonlocals = A68_NIL;
XBEBELA = ZBEBELA;
} 
ACEBELA_outid = XBEBELA;
 /* line 438: */
BCEBELA_maxseedno = 0;
 /* line 439: */
CCEBELA_s = Seeds;
 /* line 440: */
for ( ;; )
{ 
if ( !((CCEBELA_s!=BWDBELA_nilclosureseed)) ) break;
CCEBELA_s = (*(&(CCEBELA_s->Rest)));
BCEBELA_maxseedno+=1;
}
 /* line 441: */
CCEBELA_s = Seeds;
 /* line 442: */
AKFATRN_outassemint(BCEBELA_maxseedno, Writer, Msg);
 /* line 443: */
for ( ;; )
{ 
 /* line 444: */
if ( !((CCEBELA_s!=BWDBELA_nilclosureseed)) ) break;
AKFATRN_outassemint((*(&((*(&((&(CCEBELA_s->Cregion))->Region)))->Ctno))), Writer, Msg);
 /* line 445: */
A_CALLPROC(ACEBELA_outid,((*(&(CCEBELA_s->Fnname))), Writer, Msg),((*(&(CCEBELA_s->Fnname))), Writer, Msg,(ACEBELA_outid).nonlocals));
 /* line 446: */
 /* line 447: */
CCEBELA_s = (*(&(CCEBELA_s->Rest)));
}
 /* line 449: */
DCEBELA_maxctno = LLBBELA_find_maxctno();
 /* line 450: */
AKFATRN_outassemint(DCEBELA_maxctno, Writer, Msg);
 /* line 451: */
 /* line 452: */
FCEBELA = DCEBELA_maxctno;
for ( ECEBELA_ctno = 1;
ECEBELA_ctno <= FCEBELA;
ECEBELA_ctno += 1 )
{ 
RLBBELA_ctno_region( ECEBELA_ctno, &GCEBELA );
HCEBELA_cr = GCEBELA;
 /* line 453: */
 /* line 454: */
if ( (HCEBELA_cr.Context!=DVJAELA_nilcontxt) )
{ 
LEBBELA_get_decls( HCEBELA_cr.Context, Msg, &ICEBELA );
JCEBELA_decls = ICEBELA;
 /* line 455: */
KCEBELA_number = 0;
 /* line 456: */
 /* line 457: */
MCEBELA = JCEBELA_decls.upb -1;
LCEBELA_decl = JCEBELA_decls.data;
for (;MCEBELA-- >= 0;
(LCEBELA_decl++
) )
{
if ( WVDBELA_is_assembled((*(&(LCEBELA_decl->Assemble)))) )
{ 
KCEBELA_number+=1;
} 
}
 /* line 458: */
AKFATRN_outassemint(KCEBELA_number, Writer, Msg);
 /* line 459: */
 /* line 460: */
OCEBELA = JCEBELA_decls.upb -1;
NCEBELA_decl = JCEBELA_decls.data;
for (;OCEBELA-- >= 0;
(NCEBELA_decl++
) )
{
 /* line 461: */
if ( WVDBELA_is_assembled((*(&(NCEBELA_decl->Assemble)))) )
{ 
A_CALLPROC(ACEBELA_outid,((*(&(NCEBELA_decl->Name))), Writer, Msg),((*(&(NCEBELA_decl->Name))), Writer, Msg,(ACEBELA_outid).nonlocals));
 /* line 462: */
 /* line 463: */
QCEBELA = (*(&(NCEBELA_decl->Assemble))) ;
RCEBELA = QCEBELA.upb -1;
PCEBELA_b = QCEBELA.data;
for (;RCEBELA-- >= 0;
(PCEBELA_b++
) )
{
VKFATRN_outassembool((*PCEBELA_b), Writer, Msg);
}
 /* line 464: */
 /* line 465: */
} 
}
 /* line 466: */
} 
else
{ 
 /* line 467: */
 /* line 468: */
AKFATRN_outassemint(0, Writer, Msg);
} 
}
 /* line 469: */
} 
A_PROC_EXIT(write_closureseeds);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 6: */
void MQDBELA(void)   /* initialise DECS assclosure */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/assclosure.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/transform/assoc/mfiles/openinterface.m","/u/model/ella/ostools/assoc/mfiles/testmode.m","/u/model/ella/transform/assoc/mfiles/closureprocs.m","./mfiles/assemble.m","/u/model/ella/transform/assoc/mfiles/assmodes.m","./mfiles/attrdecls.m","./mfiles/libinterface.m","./mfiles/libmodes.m","./mfiles/databasebuffers.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m","/u/model/ella/ostools/assoc/mfiles/basics.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
TPCATRN();   /* USE openinterface */
QFBAOST();   /* USE testmode */
SKCATRN();   /* USE closureprocs */
LEPAELA();   /* USE assemble */
BAAATRN();   /* USE assmodes */
DZVAELA();   /* USE attrdecls */
SOABELA();   /* USE libinterface */
FTJAELA();   /* USE libmodes */
NWIAELA();   /* USE databasebuffers */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
JSCAOST();   /* USE basics */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ella/assoc/./a68files/assclosure.a68";
A_config.translation_time = "Tue Apr  4 10:40:26 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "LQDBELA (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:40:26 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS assclosure);
UEAALIB_a68config(LGAALIB_configinfo, QQDBELA);
 /* line 62: */
 /* line 68: */
 /* line 69: */
 /* line 74: */
 /* line 93: */
 /* line 99: */
 /* line 100: */
 /* line 102: */
 /* line 125: */
 /* line 174: */
 /* line 225: */
 /* line 235: */
 /* line 242: */
 /* line 243: */
BWDBELA_nilclosureseed = (A68_466 *)A68_NIL;
 /* line 245: */
 /* line 326: */
 /* line 331: */
 /* line 335: */
 /* line 363: */
 /* line 385: */
 /* line 398: */
 /* line 413: */
 /* line 430: */
 /* line 472: */
 /* line 473: */
 /* line 480: */
/*SKIP*/;
A_PROC_EXIT(DECS assclosure);
} 
#undef NL
/* end of translation of ./a68files/assclosure.a68 */
