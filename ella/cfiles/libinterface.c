
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
/* UNAME:ROABELA */
#include "Asupport.h"
A_VECTOR(A68_VC ,A68t31);
typedef struct A68t31  A68_31 ;    /* VECTOR [] MODE26 */
struct A68t32{
A68_BITS  Options;
A_PAD_BITS(PAD_1)
};
typedef struct A68t32  A68_32 ;    /* STRUCT(BITS)  */
struct A68t34 ;

A_PROCEDURE(A68_VOID ,A68t33,(struct A68t34 ),(struct A68t34 ,void *));
typedef struct A68t33  A68_33 ;    /* PROC(MODE34) VOID */
struct A68t34 { A68_INT mode; union {
A68_BOOL  mode1;
struct A68t32  mode2;
A68_VC  mode3;
} data; };
typedef struct A68t34  A68_34 ;    /* UNION(BOOL,MODE32,MODE26)  */

A_PROCEDURE(A68_BOOL ,A68t35,(void),(void *));
typedef struct A68t35  A68_35 ;    /* PROC BOOL */

A_PROCEDURE(A68_VOID ,A68t36,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t36  A68_36 ;    /* PROC(INT) MODE26 */
struct A68t38 ;

A_PROCEDURE(A68_VOID ,A68t37,(struct A68t38 *,A68_VC *),(struct A68t38 *,A68_VC *,void *));
typedef struct A68t37  A68_37 ;    /* PROC(REF MODE38) MODE26 */
struct A68t38{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t38  A68_38 ;    /* STRUCT(REF MODE26,REF BITS)  */

A_PROCEDURE(A68_INT ,A68t39,(A68_INT ),(A68_INT ,void *));
typedef struct A68t39  A68_39 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t40,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t40  A68_40 ;    /* PROC(MODE26) MODE26 */
struct A68t41{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t41  A68_41 ;    /* STRUCT(REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t42,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t42  A68_42 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t43,(A68_CHAR ,A68_VC *),(A68_CHAR ,A68_VC *,void *));
typedef struct A68t43  A68_43 ;    /* PROC(CHAR) REF MODE26 */
struct A68t45 ;

A_PROCEDURE(A68_VOID ,A68t44,(struct A68t45 ),(struct A68t45 ,void *));
typedef struct A68t44  A68_44 ;    /* PROC(MODE45) VOID */
A_VECTOR(A68_INT ,A68t46);
typedef struct A68t46  A68_46 ;    /* VECTOR [] INT */
A_VECTOR(A68_BOOL ,A68t47);
typedef struct A68t47  A68_47 ;    /* VECTOR [] BOOL */
A_VECTOR(A68_BITS ,A68t48);
typedef struct A68t48  A68_48 ;    /* VECTOR [] BITS */
struct A68t45 { A68_INT mode; union {
A68_VC  mode1;
struct A68t46  mode2;
struct A68t47  mode3;
struct A68t48  mode4;
} data; };
typedef struct A68t45  A68_45 ;    /* UNION(REF MODE26,REF MODE46,REF MODE47,REF MODE48)  */

A_PROCEDURE(A68_VOID ,A68t49,(A68_VC ),(A68_VC ,void *));
typedef struct A68t49  A68_49 ;    /* PROC(REF MODE26) VOID */

A_PROCEDURE(A68_INT ,A68t50,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t50  A68_50 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t51,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t51  A68_51 ;    /* PROC(BITS,BITS) BITS */
struct A68t53 ;

A_PROCEDURE(A68_VOID ,A68t52,(struct A68t53 ,A68_INT ),(struct A68t53 ,A68_INT ,void *));
typedef struct A68t52  A68_52 ;    /* PROC(MODE53,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t53,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t53  A68_53 ;    /* PROC(CHAR) VOID */
struct A68t55 ;

A_PROCEDURE(A68_INT ,A68t54,(struct A68t55 ),(struct A68t55 ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(MODE55) INT */

A_PROCEDURE(A68_CHAR ,A68t55,(void),(void *));
typedef struct A68t55  A68_55 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t56,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t56  A68_56 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t57,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t57  A68_57 ;    /* PROC(MODE26,INT) MODE26 */

A_PROCEDURE(A68_INT ,A68t58,(void),(void *));
typedef struct A68t58  A68_58 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t59,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t59  A68_59 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t60,(A68_VC *),(A68_VC *,void *));
typedef struct A68t60  A68_60 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_INT ,A68t61,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t61  A68_61 ;    /* PROC(INT,INT,REF BOOL) INT */
struct A68t63 ;

A_PROCEDURE(A68_BOOL ,A68t62,(A68_VC ,A68_INT *,struct A68t63 ),(A68_VC ,A68_INT *,struct A68t63 ,void *));
typedef struct A68t62  A68_62 ;    /* PROC(MODE26,REF INT,MODE63) BOOL */
struct A68t64 ;

A_PROCEDURE(A68_VOID ,A68t63,(struct A68t64 ,struct A68t31 ),(struct A68t64 ,struct A68t31 ,void *));
typedef struct A68t63  A68_63 ;    /* PROC(MODE64,MODE31) VOID */
struct A68t64{
A68_INT  Number;
A_PAD_INT(PAD_2)
struct A68t65 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_3)
};
typedef struct A68t64  A68_64 ;    /* STRUCT(INT,REF MODE65,BITS)  */
A_VECTOR(struct A68t67 ,A68t66);
typedef struct A68t66  A68_66 ;    /* VECTOR [] MODE67 */
struct A68t67{
struct A68t64  Msgno;
A68_VC  Text;
};
typedef struct A68t67  A68_67 ;    /* STRUCT(MODE64,REF MODE26)  */
struct A68t65{
A68_VC  Name;
struct A68t66  Messages;
};
typedef struct A68t65  A68_65 ;    /* STRUCT(REF MODE26,REF MODE66)  */

A_PROCEDURE(A68_VOID ,A68t68,(A68_VC ),(A68_VC ,void *));
typedef struct A68t68  A68_68 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t69,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t69  A68_69 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t70,(A68_BOOL ,struct A68t46 *),(A68_BOOL ,struct A68t46 *,void *));
typedef struct A68t70  A68_70 ;    /* PROC(BOOL) MODE46 */
struct A68t72{
A68_INT  Status;
A_PAD_INT(PAD_4)
};
typedef struct A68t72  A68_72 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_VOID ,A68t73,(A68_VC ,A68_INT *,struct A68t72 *),(A68_VC ,A68_INT *,struct A68t72 *,void *));
typedef struct A68t73  A68_73 ;    /* PROC(REF MODE26,REF INT) MODE72 */
struct A68t71{
A68_INT  Charnumber;
A_PAD_INT(PAD_5)
A68_INT  Linenumber;
A_PAD_INT(PAD_6)
A68_INT  Indent;
A_PAD_INT(PAD_7)
A68_INT  Width;
A_PAD_INT(PAD_8)
A68_INT  Sizeincr;
A_PAD_INT(PAD_9)
struct A68t72  Status;
A68_VC  Buffer;
A68_BOOL  Buffered;
A_PAD_BOOL(PAD_10)
A68_BOOL  Separate;
A_PAD_BOOL(PAD_11)
A68_BOOL  Input;
A_PAD_BOOL(PAD_12)
struct A68t68  Putbuffer;
struct A68t73  Getbuffer;
};
typedef struct A68t71  A68_71 ;    /* STRUCT(INT,INT,INT,INT,INT,MODE72,REF MODE26,BOOL,BOOL,BOOL,MODE68,MODE73)  */

A_PROCEDURE(A68_VOID ,A68t74,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t74  A68_74 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t75,(struct A68t46 ,struct A68t46 *),(struct A68t46 ,struct A68t46 *,void *));
typedef struct A68t75  A68_75 ;    /* PROC(MODE46) REF MODE46 */

A_PROCEDURE(A68_VOID ,A68t76,(A68_INT ,struct A68t46 *),(A68_INT ,struct A68t46 *,void *));
typedef struct A68t76  A68_76 ;    /* PROC(INT) REF MODE46 */

A_PROCEDURE(A68_VOID ,A68t77,(struct A68t46 ),(struct A68t46 ,void *));
typedef struct A68t77  A68_77 ;    /* PROC(REF MODE46) VOID */

A_PROCEDURE(A68_VOID ,A68t78,(struct A68t31 ,A68_VC *),(struct A68t31 ,A68_VC *,void *));
typedef struct A68t78  A68_78 ;    /* PROC(MODE31) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t79,(A68_CHAR ,A68_INT ,A68_VC *),(A68_CHAR ,A68_INT ,A68_VC *,void *));
typedef struct A68t79  A68_79 ;    /* PROC(CHAR,INT) MODE26 */
struct A68t81 ;

A_PROCEDURE(A68_VOID ,A68t80,(struct A68t81 ,A68_VC *),(struct A68t81 ,A68_VC *,void *));
typedef struct A68t80  A68_80 ;    /* PROC(MODE81) MODE26 */
struct A68t81 { A68_INT mode; union {
A68_BITS  mode1;
A68_INT  mode2;
A68_SBITS  mode3;
A68_SINT  mode4;
A68_CHAR  mode5;
} data; };
typedef struct A68t81  A68_81 ;    /* UNION(BITS,INT,SHORT BITS,SHORT INT,CHAR)  */
A_VECTOR(A68_REAL ,A68t83);
typedef struct A68t83  A68_83 ;    /* VECTOR [] REAL */

A_PROCEDURE(A68_VOID ,A68t84,(struct A68t71 *),(struct A68t71 *,void *));
typedef struct A68t84  A68_84 ;    /* PROC(REF MODE71) VOID */
struct A68t85{
A68_INT  Int;
A_PAD_INT(PAD_13)
A68_INT  Width;
A_PAD_INT(PAD_14)
};
typedef struct A68t85  A68_85 ;    /* STRUCT(INT,INT)  */
struct A68t86{
A68_VC  Str;
A68_INT  Width;
A_PAD_INT(PAD_15)
};
typedef struct A68t86  A68_86 ;    /* STRUCT(MODE26,INT)  */
struct A68t87{
A68_VC  Str;
A68_INT  Justify;
A_PAD_INT(PAD_16)
};
typedef struct A68t87  A68_87 ;    /* STRUCT(MODE26,INT)  */
struct A68t88{
A68_INT  Tab;
A_PAD_INT(PAD_17)
};
typedef struct A68t88  A68_88 ;    /* STRUCT(INT)  */
struct A68t89{
A68_INT  Pos;
A_PAD_INT(PAD_18)
};
typedef struct A68t89  A68_89 ;    /* STRUCT(INT)  */
struct A68t90{
A68_INT  After;
A_PAD_INT(PAD_19)
};
typedef struct A68t90  A68_90 ;    /* STRUCT(INT)  */
struct A68t91{
A68_INT  Spaces;
A_PAD_INT(PAD_20)
};
typedef struct A68t91  A68_91 ;    /* STRUCT(INT)  */
struct A68t92{
A68_INT  Lines;
A_PAD_INT(PAD_21)
};
typedef struct A68t92  A68_92 ;    /* STRUCT(INT)  */
struct A68t93{
A68_INT  Indent;
A_PAD_INT(PAD_22)
};
typedef struct A68t93  A68_93 ;    /* STRUCT(INT)  */
A_STRAIGHT(A68_VOID,A68t94);
typedef struct A68t94  A68_94 ;    /* STRAIGHT MODE82 */
struct A68t82 { A68_INT mode; union {
A68_INT  mode1;
struct A68t46  mode2;
A68_BITS  mode3;
struct A68t48  mode4;
A68_SBITS  mode5;
A68_CHAR  mode6;
A68_VC  mode7;
A68_BOOL  mode8;
struct A68t47  mode9;
A68_REAL  mode10;
struct A68t83  mode11;
struct A68t84  mode12;
struct A68t85  mode13;
struct A68t86  mode14;
struct A68t87  mode15;
struct A68t88  mode16;
struct A68t89  mode17;
struct A68t90  mode18;
struct A68t91  mode19;
struct A68t92  mode20;
struct A68t93  mode21;
struct A68t94  mode22;
} data; };
typedef struct A68t82  A68_82 ;    /* UNION(INT,MODE46,BITS,MODE48,SHORT BITS,CHAR,MODE26,BOOL,MODE47,REAL,MODE83,MODE84,MODE85,MODE86,MODE87,MODE88,MODE89,MODE90,MODE91,MODE92,MODE93,MODE94)  */

A_PROCEDURE(A68_VOID ,A68t95,(A68_BOOL ,struct A68t86 *),(A68_BOOL ,struct A68t86 *,void *));
typedef struct A68t95  A68_95 ;    /* PROC(BOOL) MODE86 */

A_PROCEDURE(A68_VOID ,A68t96,(A68_BOOL ,struct A68t87 *),(A68_BOOL ,struct A68t87 *,void *));
typedef struct A68t96  A68_96 ;    /* PROC(BOOL) MODE87 */

A_PROCEDURE(A68_INT ,A68t97,(struct A68t71 *),(struct A68t71 *,void *));
typedef struct A68t97  A68_97 ;    /* PROC(REF MODE71) INT */

A_PROCEDURE(A68_INT ,A68t98,(struct A68t71 *,A68_INT ),(struct A68t71 *,A68_INT ,void *));
typedef struct A68t98  A68_98 ;    /* PROC(REF MODE71,INT) INT */

A_PROCEDURE(A68_VOID ,A68t99,(A68_INT ,A68_INT ,struct A68t85 *),(A68_INT ,A68_INT ,struct A68t85 *,void *));
typedef struct A68t99  A68_99 ;    /* PROC(INT,INT) MODE85 */

A_PROCEDURE(A68_VOID ,A68t100,(A68_VC ,A68_INT ,struct A68t86 *),(A68_VC ,A68_INT ,struct A68t86 *,void *));
typedef struct A68t100  A68_100 ;    /* PROC(MODE26,INT) MODE86 */

A_PROCEDURE(A68_VOID ,A68t101,(A68_VC ,A68_INT ,struct A68t87 *),(A68_VC ,A68_INT ,struct A68t87 *,void *));
typedef struct A68t101  A68_101 ;    /* PROC(MODE26,INT) MODE87 */

A_PROCEDURE(A68_VOID ,A68t102,(A68_INT ,struct A68t88 *),(A68_INT ,struct A68t88 *,void *));
typedef struct A68t102  A68_102 ;    /* PROC(INT) MODE88 */

A_PROCEDURE(A68_VOID ,A68t103,(A68_INT ,struct A68t89 *),(A68_INT ,struct A68t89 *,void *));
typedef struct A68t103  A68_103 ;    /* PROC(INT) MODE89 */

A_PROCEDURE(A68_VOID ,A68t104,(A68_INT ,struct A68t90 *),(A68_INT ,struct A68t90 *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(INT) MODE90 */

A_PROCEDURE(A68_VOID ,A68t105,(A68_INT ,struct A68t91 *),(A68_INT ,struct A68t91 *,void *));
typedef struct A68t105  A68_105 ;    /* PROC(INT) MODE91 */

A_PROCEDURE(A68_VOID ,A68t106,(A68_INT ,struct A68t92 *),(A68_INT ,struct A68t92 *,void *));
typedef struct A68t106  A68_106 ;    /* PROC(INT) MODE92 */

A_PROCEDURE(A68_VOID ,A68t107,(A68_INT ,struct A68t93 *),(A68_INT ,struct A68t93 *,void *));
typedef struct A68t107  A68_107 ;    /* PROC(INT) MODE93 */

A_PROCEDURE(A68_VOID ,A68t108,(struct A68t71 *,A68_VC ),(struct A68t71 *,A68_VC ,void *));
typedef struct A68t108  A68_108 ;    /* PROC(REF MODE71,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t109,(struct A68t71 *,A68_INT ,A68_INT ),(struct A68t71 *,A68_INT ,A68_INT ,void *));
typedef struct A68t109  A68_109 ;    /* PROC(REF MODE71,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t110,(struct A68t71 *,A68_BITS ,A68_INT ),(struct A68t71 *,A68_BITS ,A68_INT ,void *));
typedef struct A68t110  A68_110 ;    /* PROC(REF MODE71,BITS,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t111,(struct A68t71 *,A68_REAL ,A68_INT ,A68_INT ),(struct A68t71 *,A68_REAL ,A68_INT ,A68_INT ,void *));
typedef struct A68t111  A68_111 ;    /* PROC(REF MODE71,REAL,INT,INT) VOID */
struct A68t113 ;

A_PROCEDURE(A68_VOID ,A68t112,(struct A68t71 *,struct A68t113 ),(struct A68t71 *,struct A68t113 ,void *));
typedef struct A68t112  A68_112 ;    /* PROC(REF MODE71,MODE113) VOID */
A_VECTOR(struct A68t82 ,A68t113);
typedef struct A68t113  A68_113 ;    /* VECTOR [] MODE82 */
struct A68t115 ;
struct A68t116 ;

A_PROCEDURE(struct A68t71 *,A68t114,(struct A68t115 ,struct A68t116 ),(struct A68t115 ,struct A68t116 ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(MODE115,MODE116) REF MODE71 */
struct A68t115 { A68_INT mode; union {
A68_INT  mode1;
A68_VC  mode2;
} data; };
typedef struct A68t115  A68_115 ;    /* UNION(INT,REF MODE26)  */
struct A68t116 { A68_INT mode; union {
struct A68t68  mode1;
struct A68t73  mode2;
} data; };
typedef struct A68t116  A68_116 ;    /* UNION(MODE68,MODE73)  */

A_PROCEDURE(A68_VOID ,A68t117,(A68_VC ,struct A68t113 ,A68_VC *),(A68_VC ,struct A68t113 ,A68_VC *,void *));
typedef struct A68t117  A68_117 ;    /* PROC(REF MODE26,MODE113) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t118,(struct A68t71 *,A68_VC *),(struct A68t71 *,A68_VC *,void *));
typedef struct A68t118  A68_118 ;    /* PROC(REF MODE71) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t119,(struct A68t113 ,A68_VC *),(struct A68t113 ,A68_VC *,void *));
typedef struct A68t119  A68_119 ;    /* PROC(MODE113) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t120,(A68_BOOL ,struct A68t31 *),(A68_BOOL ,struct A68t31 *,void *));
typedef struct A68t120  A68_120 ;    /* PROC(BOOL) MODE31 */
A_VECTOR(struct A68t123 ,A68t122);
typedef struct A68t122  A68_122 ;    /* VECTOR [] MODE123 */
struct A68t123{
A68_INT  Number;
A_PAD_INT(PAD_23)
A68_BITS  Class;
A_PAD_BITS(PAD_24)
A68_VC  Text;
};
typedef struct A68t123  A68_123 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t121{
A68_VC  Name;
struct A68t66  Messages;
A68_BOOL * Initialised;
struct A68t122  Setup;
};
typedef struct A68t121  A68_121 ;    /* STRUCT(MODE26,REF MODE66,REF BOOL,MODE122)  */

A_PROCEDURE(A68_VOID ,A68t124,(A68_BOOL ,struct A68t121 *),(A68_BOOL ,struct A68t121 *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(BOOL) MODE121 */
A_VECTOR(A68_VC ,A68t125);
typedef struct A68t125  A68_125 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t126,(struct A68t31 ,struct A68t125 *),(struct A68t31 ,struct A68t125 *,void *));
typedef struct A68t126  A68_126 ;    /* PROC(MODE31) MODE125 */

A_PROCEDURE(A68_VOID ,A68t127,(struct A68t125 ,struct A68t31 *),(struct A68t125 ,struct A68t31 *,void *));
typedef struct A68t127  A68_127 ;    /* PROC(MODE125) MODE31 */
struct A68t129 ;

A_PROCEDURE(A68_BOOL ,A68t128,(struct A68t129 ),(struct A68t129 ,void *));
typedef struct A68t128  A68_128 ;    /* PROC(MODE129) BOOL */
struct A68t129 { A68_INT mode; union {
struct A68t64  mode1;
struct A68t67  mode2;
} data; };
typedef struct A68t129  A68_129 ;    /* UNION(MODE64,MODE67)  */

A_PROCEDURE(A68_INT ,A68t130,(struct A68t64 ),(struct A68t64 ,void *));
typedef struct A68t130  A68_130 ;    /* PROC(MODE64) INT */

A_PROCEDURE(A68_VOID ,A68t131,(A68_INT ,struct A68t121 ,struct A68t64 *),(A68_INT ,struct A68t121 ,struct A68t64 *,void *));
typedef struct A68t131  A68_131 ;    /* PROC(INT,MODE121) MODE64 */

A_PROCEDURE(A68_BOOL ,A68t132,(struct A68t64 ,struct A68t121 ),(struct A68t64 ,struct A68t121 ,void *));
typedef struct A68t132  A68_132 ;    /* PROC(MODE64,MODE121) BOOL */

A_PROCEDURE(A68_VOID ,A68t133,(struct A68t64 ,struct A68t31 ,struct A68t67 *),(struct A68t64 ,struct A68t31 ,struct A68t67 *,void *));
typedef struct A68t133  A68_133 ;    /* PROC(MODE64,MODE31) MODE67 */

A_PROCEDURE(A68_BOOL ,A68t134,(struct A68t72 ,struct A68t72 ),(struct A68t72 ,struct A68t72 ,void *));
typedef struct A68t134  A68_134 ;    /* PROC(MODE72,MODE72) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t136);
typedef struct A68t136  A68_136 ;    /* STRUCT 4 CHAR */
struct A68t135{
struct A68t136  Access;
A_PAD_ISTRUCT(A68_136 ,PAD_25)
};
typedef struct A68t135  A68_135 ;    /* STRUCT(MODE136)  */

A_PROCEDURE(struct A68t38 *,A68t137,(A68_VC ,struct A68t135 ,struct A68t63 ),(A68_VC ,struct A68t135 ,struct A68t63 ,void *));
typedef struct A68t137  A68_137 ;    /* PROC(MODE26,MODE135,MODE63) REF MODE38 */

A_PROCEDURE(A68_VOID ,A68t138,(struct A68t38 *,struct A68t63 ),(struct A68t38 *,struct A68t63 ,void *));
typedef struct A68t138  A68_138 ;    /* PROC(REF MODE38,MODE63) VOID */

A_PROCEDURE(A68_VOID ,A68t139,(struct A68t38 *,A68_VC ,A68_INT *,struct A68t63 ,struct A68t72 *),(struct A68t38 *,A68_VC ,A68_INT *,struct A68t63 ,struct A68t72 *,void *));
typedef struct A68t139  A68_139 ;    /* PROC(REF MODE38,REF MODE26,REF INT,MODE63) MODE72 */

A_PROCEDURE(A68_VOID ,A68t140,(struct A68t38 *,A68_VC ,struct A68t63 ,struct A68t72 *),(struct A68t38 *,A68_VC ,struct A68t63 ,struct A68t72 *,void *));
typedef struct A68t140  A68_140 ;    /* PROC(REF MODE38,MODE26,MODE63) MODE72 */
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

A_PROCEDURE(struct A68t141 *,A68t142,(struct A68t143 ,struct A68t63 ),(struct A68t143 ,struct A68t63 ,void *));
typedef struct A68t142  A68_142 ;    /* PROC(MODE143,MODE63) REF MODE141 */
struct A68t143 { A68_INT mode; union {
struct A68t38 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t143  A68_143 ;    /* UNION(REF MODE38,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t144,(struct A68t38 *,A68_LINT *,struct A68t63 ,struct A68t72 *),(struct A68t38 *,A68_LINT *,struct A68t63 ,struct A68t72 *,void *));
typedef struct A68t144  A68_144 ;    /* PROC(REF MODE38,REF LONG INT,MODE63) MODE72 */

A_PROCEDURE(A68_VOID ,A68t145,(struct A68t38 *,A68_LINT ,struct A68t63 ,struct A68t72 *),(struct A68t38 *,A68_LINT ,struct A68t63 ,struct A68t72 *,void *));
typedef struct A68t145  A68_145 ;    /* PROC(REF MODE38,LONG INT,MODE63) MODE72 */

A_PROCEDURE(A68_VOID ,A68t146,(struct A68t38 *,struct A68t63 ,struct A68t72 *),(struct A68t38 *,struct A68t63 ,struct A68t72 *,void *));
typedef struct A68t146  A68_146 ;    /* PROC(REF MODE38,MODE63) MODE72 */

A_PROCEDURE(A68_VOID ,A68t147,(A68_VC ,struct A68t63 ,struct A68t72 *),(A68_VC ,struct A68t63 ,struct A68t72 *,void *));
typedef struct A68t147  A68_147 ;    /* PROC(MODE26,MODE63) MODE72 */

A_PROCEDURE(A68_VOID ,A68t148,(A68_INT ),(A68_INT ,void *));
typedef struct A68t148  A68_148 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_LINT ,A68t149,(void),(void *));
typedef struct A68t149  A68_149 ;    /* PROC LONG INT */

A_PROCEDURE(A68_INT ,A68t150,(A68_VC ,struct A68t63 ),(A68_VC ,struct A68t63 ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(MODE26,MODE63) INT */

A_PROCEDURE(A68_VOID ,A68t151,(A68_VC ,A68_VC ,struct A68t63 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t63 ,A68_VC *,void *));
typedef struct A68t151  A68_151 ;    /* PROC(MODE26,MODE26,MODE63) MODE26 */

A_PROCEDURE(A68_VOID ,A68t152,(A68_VC ,A68_VC ,struct A68t63 ,struct A68t72 *),(A68_VC ,A68_VC ,struct A68t63 ,struct A68t72 *,void *));
typedef struct A68t152  A68_152 ;    /* PROC(MODE26,MODE26,MODE63) MODE72 */
struct A68t153{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t153  A68_153 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t154,(A68_VC ,A68_VC ,struct A68t63 ,struct A68t153 *),(A68_VC ,A68_VC ,struct A68t63 ,struct A68t153 *,void *));
typedef struct A68t154  A68_154 ;    /* PROC(MODE26,MODE26,MODE63) MODE153 */

A_PROCEDURE(A68_VOID ,A68t155,(A68_VC *),(A68_VC *,void *));
typedef struct A68t155  A68_155 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t156,(struct A68t31 *),(struct A68t31 *,void *));
typedef struct A68t156  A68_156 ;    /* PROC MODE31 */

A_PROCEDURE(A68_VOID ,A68t157,(A68_VC ,struct A68t63 ,struct A68t31 *),(A68_VC ,struct A68t63 ,struct A68t31 *,void *));
typedef struct A68t157  A68_157 ;    /* PROC(MODE26,MODE63) MODE31 */
struct A68t159 ;

A_PROCEDURE(A68_VOID ,A68t158,(struct A68t159 ,struct A68t63 ),(struct A68t159 ,struct A68t63 ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(MODE159,MODE63) VOID */
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

A_PROCEDURE(A68_VOID ,A68t163,(struct A68t68 ),(struct A68t68 ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(MODE68) VOID */

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

A_PROCEDURE(A68_VOID ,A68t174,(struct A68t63 ),(struct A68t63 ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE63) VOID */

A_PROCEDURE(A68_VOID ,A68t175,(struct A68t174 ,struct A68t63 ),(struct A68t174 ,struct A68t63 ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(MODE174,MODE63) VOID */
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
struct A68t38 ** File;
struct A68t38 ** Test_file;
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
struct A68t46  Freelist;
struct A68t46  Freelist_ext;
struct A68t46  Pagetable_ext;
struct A68t182 * Gc_ptrs;
struct A68t183 * Instore_vars;
struct A68t184  Indirections;
A68_BOOL * Writeable;
A68_BOOL * Last_update_failed;
A68_BOOL * Appending;
A68_BOOL * Collectable;
};
typedef struct A68t178  A68_178 ;    /* STRUCT(REF MODE179,REF MODE179,REF MODE179,REF MODE179,REF MODE179,REF MODE180,REF MODE180,REF REF MODE38,REF REF MODE38,REF MODE181,REF MODE26,REF MODE26,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF MODE46,REF MODE46,REF MODE46,REF MODE182,REF MODE183,REF MODE184,REF BOOL,REF BOOL,REF BOOL,REF BOOL)  */
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

A_PROCEDURE(struct A68t38 *,A68t191,(A68_VC ,A68_INT ,struct A68t63 ),(A68_VC ,A68_INT ,struct A68t63 ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(MODE26,INT,MODE63) REF MODE38 */

A_PROCEDURE(A68_VOID ,A68t192,(struct A68t38 *,A68_BOOL ,struct A68t177 *),(struct A68t38 *,A68_BOOL ,struct A68t177 *,void *));
typedef struct A68t192  A68_192 ;    /* PROC(REF MODE38,BOOL) MODE177 */

A_PROCEDURE(A68_BOOL ,A68t193,(struct A68t177 *),(struct A68t177 *,void *));
typedef struct A68t193  A68_193 ;    /* PROC(REF MODE177) BOOL */

A_PROCEDURE(A68_VOID ,A68t194,(struct A68t177 *,struct A68t179 ),(struct A68t177 *,struct A68t179 ,void *));
typedef struct A68t194  A68_194 ;    /* PROC(REF MODE177,MODE179) VOID */

A_PROCEDURE(A68_VOID ,A68t195,(struct A68t177 *,struct A68t179 ,struct A68t63 ),(struct A68t177 *,struct A68t179 ,struct A68t63 ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(REF MODE177,MODE179,MODE63) VOID */

A_PROCEDURE(A68_VOID ,A68t196,(struct A68t177 *,struct A68t63 ),(struct A68t177 *,struct A68t63 ,void *));
typedef struct A68t196  A68_196 ;    /* PROC(REF MODE177,MODE63) VOID */

A_PROCEDURE(A68_BOOL ,A68t197,(struct A68t177 *,A68_INT ),(struct A68t177 *,A68_INT ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(REF MODE177,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t198,(struct A68t177 *,A68_INT ,struct A68t63 ),(struct A68t177 *,A68_INT ,struct A68t63 ,void *));
typedef struct A68t198  A68_198 ;    /* PROC(REF MODE177,INT,MODE63) VOID */

A_PROCEDURE(struct A68t38 *,A68t199,(struct A68t177 *),(struct A68t177 *,void *));
typedef struct A68t199  A68_199 ;    /* PROC(REF MODE177) REF MODE38 */

A_PROCEDURE(A68_INT ,A68t200,(struct A68t177 *),(struct A68t177 *,void *));
typedef struct A68t200  A68_200 ;    /* PROC(REF MODE177) INT */

A_PROCEDURE(A68_VOID ,A68t201,(struct A68t177 *),(struct A68t177 *,void *));
typedef struct A68t201  A68_201 ;    /* PROC(REF MODE177) VOID */

A_PROCEDURE(A68_VOID ,A68t202,(struct A68t38 *,struct A68t38 *,struct A68t63 ),(struct A68t38 *,struct A68t38 *,struct A68t63 ,void *));
typedef struct A68t202  A68_202 ;    /* PROC(REF MODE38,REF MODE38,MODE63) VOID */

A_PROCEDURE(A68_VOID ,A68t203,(A68_INT ,struct A68t64 *),(A68_INT ,struct A68t64 *,void *));
typedef struct A68t203  A68_203 ;    /* PROC(INT) MODE64 */

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

A_PROCEDURE(struct A68t206 *,A68t207,(struct A68t176 *,struct A68t115 ,A68_INT ),(struct A68t176 *,struct A68t115 ,A68_INT ,void *));
typedef struct A68t207  A68_207 ;    /* PROC(REF MODE176,MODE115,INT) REF MODE206 */

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

A_PROCEDURE(A68_VOID ,A68t215,(struct A68t176 *,struct A68t63 ),(struct A68t176 *,struct A68t63 ,void *));
typedef struct A68t215  A68_215 ;    /* PROC(REF MODE176,MODE63) VOID */

A_PROCEDURE(A68_VOID ,A68t216,(struct A68t176 *,A68_VC ,struct A68t63 ,struct A68t179 *),(struct A68t176 *,A68_VC ,struct A68t63 ,struct A68t179 *,void *));
typedef struct A68t216  A68_216 ;    /* PROC(REF MODE176,MODE26,MODE63) MODE179 */

A_PROCEDURE(A68_VOID ,A68t217,(struct A68t176 *,struct A68t180 ,struct A68t63 ,struct A68t179 *),(struct A68t176 *,struct A68t180 ,struct A68t63 ,struct A68t179 *,void *));
typedef struct A68t217  A68_217 ;    /* PROC(REF MODE176,MODE180,MODE63) MODE179 */

A_PROCEDURE(A68_INT ,A68t218,(struct A68t176 *,struct A68t179 ,struct A68t63 ),(struct A68t176 *,struct A68t179 ,struct A68t63 ,void *));
typedef struct A68t218  A68_218 ;    /* PROC(REF MODE176,MODE179,MODE63) INT */

A_PROCEDURE(A68_VOID ,A68t219,(struct A68t176 *,A68_VC ,struct A68t179 ,struct A68t63 ),(struct A68t176 *,A68_VC ,struct A68t179 ,struct A68t63 ,void *));
typedef struct A68t219  A68_219 ;    /* PROC(REF MODE176,REF MODE26,MODE179,MODE63) VOID */

A_PROCEDURE(A68_VOID ,A68t220,(struct A68t176 *,struct A68t180 ,struct A68t179 ,struct A68t63 ),(struct A68t176 *,struct A68t180 ,struct A68t179 ,struct A68t63 ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(REF MODE176,REF MODE180,MODE179,MODE63) VOID */

A_PROCEDURE(struct A68t206 *,A68t221,(struct A68t176 *,struct A68t115 ),(struct A68t176 *,struct A68t115 ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(REF MODE176,MODE115) REF MODE206 */

A_PROCEDURE(A68_VOID ,A68t222,(struct A68t206 *,struct A68t63 ),(struct A68t206 *,struct A68t63 ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(REF MODE206,MODE63) VOID */

A_PROCEDURE(A68_VOID ,A68t223,(struct A68t206 *,struct A68t63 ,struct A68t179 *),(struct A68t206 *,struct A68t63 ,struct A68t179 *,void *));
typedef struct A68t223  A68_223 ;    /* PROC(REF MODE206,MODE63) MODE179 */

A_PROCEDURE(A68_INT ,A68t224,(A68_CHAR ,struct A68t206 *,struct A68t63 ),(A68_CHAR ,struct A68t206 *,struct A68t63 ,void *));
typedef struct A68t224  A68_224 ;    /* PROC(CHAR,REF MODE206,MODE63) INT */

A_PROCEDURE(A68_INT ,A68t225,(A68_VC ,struct A68t206 *,struct A68t63 ),(A68_VC ,struct A68t206 *,struct A68t63 ,void *));
typedef struct A68t225  A68_225 ;    /* PROC(MODE26,REF MODE206,MODE63) INT */

A_PROCEDURE(A68_INT ,A68t226,(A68_INT ,struct A68t206 *,struct A68t63 ),(A68_INT ,struct A68t206 *,struct A68t63 ,void *));
typedef struct A68t226  A68_226 ;    /* PROC(INT,REF MODE206,MODE63) INT */

A_PROCEDURE(A68_INT ,A68t227,(A68_VC ,struct A68t206 *,struct A68t63 ),(A68_VC ,struct A68t206 *,struct A68t63 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(REF MODE26,REF MODE206,MODE63) INT */

A_PROCEDURE(A68_INT ,A68t228,(A68_BOOL ,struct A68t206 *,struct A68t63 ),(A68_BOOL ,struct A68t206 *,struct A68t63 ,void *));
typedef struct A68t228  A68_228 ;    /* PROC(BOOL,REF MODE206,MODE63) INT */
struct A68t229{
A68_VC  Name;
A68_VC  Password;
A68_INT  Key;
A_PAD_INT(PAD_58)
A68_BOOL  Login;
A_PAD_BOOL(PAD_59)
struct A68t229 * Rest;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(REF MODE26,REF MODE26,INT,BOOL,REF MODE229)  */
struct A68t230{
A68_INT  Key;
A_PAD_INT(PAD_60)
A68_BOOL  Changed;
A_PAD_BOOL(PAD_61)
struct A68t46  Version;
struct A68t180  Data;
struct A68t230 * Rest;
};
typedef struct A68t230  A68_230 ;    /* STRUCT(INT,BOOL,REF MODE46,REF MODE180,REF MODE230)  */
struct A68t231{
A68_INT  Sort;
A_PAD_INT(PAD_62)
A68_VC  Name;
A68_INT  Version;
A_PAD_INT(PAD_63)
struct A68t231 * Rest;
};
typedef struct A68t231  A68_231 ;    /* STRUCT(INT,REF MODE26,INT,REF MODE231)  */
struct A68t232{
A68_INT  Sort;
A_PAD_INT(PAD_64)
A68_VC  Name;
A68_BOOL  Export;
A_PAD_BOOL(PAD_65)
A68_BOOL  Import;
A_PAD_BOOL(PAD_66)
struct A68t47  Assemble;
A68_INT  Status;
A_PAD_INT(PAD_67)
A68_INT  Version;
A_PAD_INT(PAD_68)
A68_VC  Il;
struct A68t231 * Uses;
};
typedef struct A68t232  A68_232 ;    /* STRUCT(INT,REF MODE26,BOOL,BOOL,REF MODE47,INT,INT,REF MODE26,REF MODE231)  */
struct A68t233{
struct A68t41  Ctn;
A68_VC  Name;
A68_VC  Rename;
A68_INT  Sort;
A_PAD_INT(PAD_69)
struct A68t179  Info;
};
typedef struct A68t233  A68_233 ;    /* STRUCT(MODE41,REF MODE26,REF MODE26,INT,MODE179)  */
struct A68t234{
struct A68t233  Binding;
struct A68t234 * Rest;
};
typedef struct A68t234  A68_234 ;    /* STRUCT(MODE233,REF MODE234)  */
struct A68t235{
A68_VC  Name;
A68_INT  Ctno;
A_PAD_INT(PAD_70)
struct A68t234 * Imports;
};
typedef struct A68t235  A68_235 ;    /* STRUCT(REF MODE26,INT,REF MODE234)  */
struct A68t236{
struct A68t235  Region;
struct A68t236 * Rest;
};
typedef struct A68t236  A68_236 ;    /* STRUCT(MODE235,REF MODE236)  */
A_VECTOR(struct A68t232 ,A68t238);
typedef struct A68t238  A68_238 ;    /* VECTOR [] MODE232 */
struct A68t237{
A68_VC  Name;
struct A68t179  Val;
A68_BOOL  Loadable;
A_PAD_BOOL(PAD_71)
A68_BOOL  Changed;
A_PAD_BOOL(PAD_72)
struct A68t238  Decls;
struct A68t230 * Declattributes;
struct A68t236 * Regions;
};
typedef struct A68t237  A68_237 ;    /* STRUCT(REF MODE26,MODE179,BOOL,BOOL,REF MODE238,REF MODE230,REF MODE236)  */
struct A68t239{
struct A68t237  Context;
struct A68t239 * Rest;
};
typedef struct A68t239  A68_239 ;    /* STRUCT(MODE237,REF MODE239)  */
struct A68t240{
A68_VC  Name;
struct A68t38 * File;
struct A68t176 * Discfile;
struct A68t41  Currentct;
A68_VC  Libprompt;
A68_BOOL  Libchanged;
A_PAD_BOOL(PAD_73)
struct A68t180  Rootptrs;
A68_INT  Version;
A_PAD_INT(PAD_74)
A68_VC  Datecleared;
A68_VC  Timecleared;
A68_VC  Datelastwritten;
A68_VC  Timelastwritten;
struct A68t46  Keys;
struct A68t229 * Classes;
struct A68t239 * Contexts;
};
typedef struct A68t240  A68_240 ;    /* STRUCT(REF MODE26,REF MODE38,REF MODE176,MODE41,REF MODE26,BOOL,MODE180,INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,MODE46,REF MODE229,REF MODE239)  */

A_PROCEDURE(A68_VOID ,A68t241,(A68_BOOL ,struct A68t240 *),(A68_BOOL ,struct A68t240 *,void *));
typedef struct A68t241  A68_241 ;    /* PROC(BOOL) MODE240 */
struct A68t242{
struct A68t237 * Context;
struct A68t235 * Region;
};
typedef struct A68t242  A68_242 ;    /* STRUCT(REF MODE237,REF MODE235)  */
struct A68t243{
A68_VC  Name;
A68_INT  Date;
A_PAD_INT(PAD_75)
};
typedef struct A68t243  A68_243 ;    /* STRUCT(REF MODE26,INT)  */

A_PROCEDURE(A68_BOOL ,A68t244,(struct A68t41 ,struct A68t41 ),(struct A68t41 ,struct A68t41 ,void *));
typedef struct A68t244  A68_244 ;    /* PROC(MODE41,MODE41) BOOL */

A_PROCEDURE(A68_BOOL ,A68t245,(struct A68t242 ,struct A68t242 ),(struct A68t242 ,struct A68t242 ,void *));
typedef struct A68t245  A68_245 ;    /* PROC(MODE242,MODE242) BOOL */

A_PROCEDURE(A68_VOID ,A68t246,(struct A68t41 ,A68_VC *),(struct A68t41 ,A68_VC *,void *));
typedef struct A68t246  A68_246 ;    /* PROC(MODE41) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t247,(struct A68t242 ,A68_VC *),(struct A68t242 ,A68_VC *,void *));
typedef struct A68t247  A68_247 ;    /* PROC(MODE242) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t248,(struct A68t242 ,struct A68t41 *),(struct A68t242 ,struct A68t41 *,void *));
typedef struct A68t248  A68_248 ;    /* PROC(MODE242) MODE41 */

A_PROCEDURE(A68_BOOL ,A68t249,(struct A68t237 *,struct A68t63 ),(struct A68t237 *,struct A68t63 ,void *));
typedef struct A68t249  A68_249 ;    /* PROC(REF MODE237,MODE63) BOOL */

A_PROCEDURE(A68_VOID ,A68t250,(A68_VC *,A68_VC *),(A68_VC *,A68_VC *,void *));
typedef struct A68t250  A68_250 ;    /* PROC(REF REF MODE26,REF REF MODE26) VOID */

A_PROCEDURE(struct A68t240 *,A68t251,(void),(void *));
typedef struct A68t251  A68_251 ;    /* PROC REF MODE240 */

A_PROCEDURE(struct A68t237 *,A68t252,(A68_VC ),(A68_VC ,void *));
typedef struct A68t252  A68_252 ;    /* PROC(REF MODE26) REF MODE237 */

A_PROCEDURE(A68_VOID ,A68t253,(struct A68t237 *,A68_VC ,struct A68t242 *),(struct A68t237 *,A68_VC ,struct A68t242 *,void *));
typedef struct A68t253  A68_253 ;    /* PROC(REF MODE237,REF MODE26) MODE242 */

A_PROCEDURE(struct A68t234 *,A68t254,(struct A68t242 ),(struct A68t242 ,void *));
typedef struct A68t254  A68_254 ;    /* PROC(MODE242) REF MODE234 */

A_PROCEDURE(struct A68t233 *,A68t255,(struct A68t242 ,A68_VC ),(struct A68t242 ,A68_VC ,void *));
typedef struct A68t255  A68_255 ;    /* PROC(MODE242,REF MODE26) REF MODE233 */

A_PROCEDURE(struct A68t237 *,A68t256,(A68_VC ,struct A68t63 ),(A68_VC ,struct A68t63 ,void *));
typedef struct A68t256  A68_256 ;    /* PROC(REF MODE26,MODE63) REF MODE237 */

A_PROCEDURE(A68_VOID ,A68t257,(struct A68t237 *,A68_VC ,struct A68t63 ,struct A68t242 *),(struct A68t237 *,A68_VC ,struct A68t63 ,struct A68t242 *,void *));
typedef struct A68t257  A68_257 ;    /* PROC(REF MODE237,REF MODE26,MODE63) MODE242 */

A_PROCEDURE(A68_VOID ,A68t258,(struct A68t41 ,struct A68t63 ,struct A68t242 *),(struct A68t41 ,struct A68t63 ,struct A68t242 *,void *));
typedef struct A68t258  A68_258 ;    /* PROC(MODE41,MODE63) MODE242 */

A_PROCEDURE(struct A68t233 *,A68t259,(struct A68t242 ,A68_VC ,struct A68t63 ),(struct A68t242 ,A68_VC ,struct A68t63 ,void *));
typedef struct A68t259  A68_259 ;    /* PROC(MODE242,REF MODE26,MODE63) REF MODE233 */

A_PROCEDURE(A68_VOID ,A68t260,(A68_VC ,A68_VC ,A68_INT ,A68_INT ,struct A68t63 ),(A68_VC ,A68_VC ,A68_INT ,A68_INT ,struct A68t63 ,void *));
typedef struct A68t260  A68_260 ;    /* PROC(MODE26,MODE26,INT,INT,MODE63) VOID */

A_PROCEDURE(struct A68t229 *,A68t261,(A68_INT ),(A68_INT ,void *));
typedef struct A68t261  A68_261 ;    /* PROC(INT) REF MODE229 */

A_PROCEDURE(A68_VOID ,A68t262,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t262  A68_262 ;    /* PROC(BOOL) VOID */
struct A68t264 ;

A_PROCEDURE(A68_BOOL ,A68t263,(struct A68t264 ),(struct A68t264 ,void *));
typedef struct A68t263  A68_263 ;    /* PROC(MODE264) BOOL */

A_PROCEDURE(A68_BOOL ,A68t264,(A68_VC ,A68_INT ,A68_BOOL ,A68_BOOL ),(A68_VC ,A68_INT ,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t264  A68_264 ;    /* PROC(MODE26,INT,BOOL,BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t265,(A68_VC ,A68_VC ,struct A68t63 ),(A68_VC ,A68_VC ,struct A68t63 ,void *));
typedef struct A68t265  A68_265 ;    /* PROC(MODE26,MODE26,MODE63) VOID */

A_PROCEDURE(A68_VOID ,A68t266,(A68_INT ,struct A68t63 ),(A68_INT ,struct A68t63 ,void *));
typedef struct A68t266  A68_266 ;    /* PROC(INT,MODE63) VOID */

A_PROCEDURE(A68_INT ,A68t267,(A68_INT ,A68_VC ,struct A68t63 ),(A68_INT ,A68_VC ,struct A68t63 ,void *));
typedef struct A68t267  A68_267 ;    /* PROC(INT,MODE26,MODE63) INT */

A_PROCEDURE(A68_INT ,A68t268,(A68_VC ,A68_VC ,struct A68t63 ),(A68_VC ,A68_VC ,struct A68t63 ,void *));
typedef struct A68t268  A68_268 ;    /* PROC(MODE26,MODE26,MODE63) INT */

A_PROCEDURE(A68_VOID ,A68t269,(A68_VC ,struct A68t179 ,A68_INT ,struct A68t63 ),(A68_VC ,struct A68t179 ,A68_INT ,struct A68t63 ,void *));
typedef struct A68t269  A68_269 ;    /* PROC(MODE26,MODE179,INT,MODE63) VOID */

A_PROCEDURE(A68_VOID ,A68t270,(A68_VC ,A68_INT ,struct A68t63 ,struct A68t179 *),(A68_VC ,A68_INT ,struct A68t63 ,struct A68t179 *,void *));
typedef struct A68t270  A68_270 ;    /* PROC(MODE26,INT,MODE63) MODE179 */

A_PROCEDURE(A68_BOOL ,A68t271,(A68_INT ,struct A68t63 ,struct A68t63 ),(A68_INT ,struct A68t63 ,struct A68t63 ,void *));
typedef struct A68t271  A68_271 ;    /* PROC(INT,MODE63,MODE63) BOOL */
struct A68t272{
A68_INT  Version;
A_PAD_INT(PAD_76)
struct A68t179  Data;
};
typedef struct A68t272  A68_272 ;    /* STRUCT(INT,MODE179)  */

A_PROCEDURE(A68_VOID ,A68t273,(A68_VC ,A68_VC ,A68_INT ,struct A68t63 ),(A68_VC ,A68_VC ,A68_INT ,struct A68t63 ,void *));
typedef struct A68t273  A68_273 ;    /* PROC(MODE26,MODE26,INT,MODE63) VOID */

A_PROCEDURE(A68_BOOL ,A68t274,(A68_INT ),(A68_INT ,void *));
typedef struct A68t274  A68_274 ;    /* PROC(INT) BOOL */

A_PROCEDURE(struct A68t230 *,A68t275,(struct A68t237 *,A68_INT ,struct A68t63 ),(struct A68t237 *,A68_INT ,struct A68t63 ,void *));
typedef struct A68t275  A68_275 ;    /* PROC(REF MODE237,INT,MODE63) REF MODE230 */

A_PROCEDURE(A68_VOID ,A68t276,(struct A68t237 *,struct A68t63 ),(struct A68t237 *,struct A68t63 ,void *));
typedef struct A68t276  A68_276 ;    /* PROC(REF MODE237,MODE63) VOID */

A_PROCEDURE(A68_VOID ,A68t277,(struct A68t237 *,struct A68t46 ,struct A68t63 ),(struct A68t237 *,struct A68t46 ,struct A68t63 ,void *));
typedef struct A68t277  A68_277 ;    /* PROC(REF MODE237,MODE46,MODE63) VOID */
struct A68t279 ;

A_PROCEDURE(A68_BOOL ,A68t278,(struct A68t237 *,struct A68t279 ,struct A68t63 ),(struct A68t237 *,struct A68t279 ,struct A68t63 ,void *));
typedef struct A68t278  A68_278 ;    /* PROC(REF MODE237,MODE279,MODE63) BOOL */

A_PROCEDURE(A68_BOOL ,A68t279,(struct A68t230 *,struct A68t63 ),(struct A68t230 *,struct A68t63 ,void *));
typedef struct A68t279  A68_279 ;    /* PROC(REF MODE230,MODE63) BOOL */

A_PROCEDURE(A68_VOID ,A68t280,(struct A68t237 *,A68_INT ,struct A68t46 ,A68_INT ,struct A68t180 ,struct A68t63 ),(struct A68t237 *,A68_INT ,struct A68t46 ,A68_INT ,struct A68t180 ,struct A68t63 ,void *));
typedef struct A68t280  A68_280 ;    /* PROC(REF MODE237,INT,REF MODE46,INT,REF MODE180,MODE63) VOID */

A_PROCEDURE(A68_VOID ,A68t281,(struct A68t230 *,A68_INT ,struct A68t272 ,struct A68t63 ),(struct A68t230 *,A68_INT ,struct A68t272 ,struct A68t63 ,void *));
typedef struct A68t281  A68_281 ;    /* PROC(REF MODE230,INT,MODE272,MODE63) VOID */

A_PROCEDURE(A68_VOID ,A68t282,(struct A68t230 *,A68_INT ,struct A68t63 ,struct A68t272 *),(struct A68t230 *,A68_INT ,struct A68t63 ,struct A68t272 *,void *));
typedef struct A68t282  A68_282 ;    /* PROC(REF MODE230,INT,MODE63) MODE272 */

A_PROCEDURE(A68_VOID ,A68t283,(struct A68t230 *,A68_INT ,struct A68t63 ),(struct A68t230 *,A68_INT ,struct A68t63 ,void *));
typedef struct A68t283  A68_283 ;    /* PROC(REF MODE230,INT,MODE63) VOID */

A_PROCEDURE(A68_VOID ,A68t284,(struct A68t237 *,A68_INT ,struct A68t63 ),(struct A68t237 *,A68_INT ,struct A68t63 ,void *));
typedef struct A68t284  A68_284 ;    /* PROC(REF MODE237,INT,MODE63) VOID */

A_PROCEDURE(A68_VOID ,A68t285,(struct A68t161 ),(struct A68t161 ,void *));
typedef struct A68t285  A68_285 ;    /* PROC(MODE161) VOID */

A_PROCEDURE(A68_VOID ,A68t286,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t286  A68_286 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,59,A68t287);
typedef struct A68t287  A68_287 ;    /* STRUCT 59 CHAR */

A_PROCEDURE(A68_VOID ,A68t288,(struct A68t41 ),(struct A68t41 ,void *));
typedef struct A68t288  A68_288 ;    /* PROC(MODE41) VOID */

A_PROCEDURE(A68_VOID ,A68t289,(struct A68t238 ,struct A68t63 ,struct A68t179 *),(struct A68t238 ,struct A68t63 ,struct A68t179 *,void *));
typedef struct A68t289  A68_289 ;    /* PROC(REF MODE238,MODE63) MODE179 */

A_PROCEDURE(A68_VOID ,A68t290,(struct A68t237 *,struct A68t63 ,struct A68t179 *),(struct A68t237 *,struct A68t63 ,struct A68t179 *,void *));
typedef struct A68t290  A68_290 ;    /* PROC(REF MODE237,MODE63) MODE179 */

A_PROCEDURE(A68_VOID ,A68t291,(A68_BOOL ,struct A68t180 *),(A68_BOOL ,struct A68t180 *,void *));
typedef struct A68t291  A68_291 ;    /* PROC(BOOL) MODE180 */
A_ISTRUCT(A68_INT ,3,A68t292);
typedef struct A68t292  A68_292 ;    /* STRUCT 3 INT */

A_PROCEDURE(A68_VOID ,A68t293,(struct A68t179 *,struct A68t179 *,struct A68t179 *,struct A68t63 ),(struct A68t179 *,struct A68t179 *,struct A68t179 *,struct A68t63 ,void *));
typedef struct A68t293  A68_293 ;    /* PROC(REF MODE179,REF MODE179,REF MODE179,MODE63) VOID */

A_PROCEDURE(A68_VOID ,A68t294,(struct A68t179 ),(struct A68t179 ,void *));
typedef struct A68t294  A68_294 ;    /* PROC(MODE179) VOID */

A_PROCEDURE(A68_VOID ,A68t295,(struct A68t237 ,struct A68t294 ,struct A68t206 *,struct A68t63 ),(struct A68t237 ,struct A68t294 ,struct A68t206 *,struct A68t63 ,void *));
typedef struct A68t295  A68_295 ;    /* PROC(MODE237,MODE294,REF MODE206,MODE63) VOID */

A_PROCEDURE(struct A68t239 *,A68t296,(struct A68t63 ),(struct A68t63 ,void *));
typedef struct A68t296  A68_296 ;    /* PROC(MODE63) REF MODE239 */

A_PROCEDURE(struct A68t234 *,A68t297,(struct A68t206 *),(struct A68t206 *,void *));
typedef struct A68t297  A68_297 ;    /* PROC(REF MODE206) REF MODE234 */

A_PROCEDURE(struct A68t236 *,A68t298,(struct A68t206 *),(struct A68t206 *,void *));
typedef struct A68t298  A68_298 ;    /* PROC(REF MODE206) REF MODE236 */

A_PROCEDURE(struct A68t239 *,A68t299,(struct A68t206 *),(struct A68t206 *,void *));
typedef struct A68t299  A68_299 ;    /* PROC(REF MODE206) REF MODE239 */
A_ISTRUCT(A68_CHAR ,17,A68t300);
typedef struct A68t300  A68_300 ;    /* STRUCT 17 CHAR */

A_PROCEDURE(A68_VOID ,A68t301,(struct A68t206 *,A68_INT *,A68_VC *),(struct A68t206 *,A68_INT *,A68_VC *,void *));
typedef struct A68t301  A68_301 ;    /* PROC(REF MODE206,REF INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t302,(struct A68t238 ),(struct A68t238 ,void *));
typedef struct A68t302  A68_302 ;    /* PROC(REF MODE238) VOID */

A_PROCEDURE(struct A68t231 *,A68t303,(struct A68t206 *,A68_INT ,struct A68t231 *),(struct A68t206 *,A68_INT ,struct A68t231 *,void *));
typedef struct A68t303  A68_303 ;    /* PROC(REF MODE206,INT,REF MODE231) REF MODE231 */

A_PROCEDURE(A68_VOID ,A68t304,(struct A68t237 *,struct A68t63 ,struct A68t238 *),(struct A68t237 *,struct A68t63 ,struct A68t238 *,void *));
typedef struct A68t304  A68_304 ;    /* PROC(REF MODE237,MODE63) REF MODE238 */

A_PROCEDURE(A68_VOID ,A68t305,(A68_BOOL ,struct A68t238 *),(A68_BOOL ,struct A68t238 *,void *));
typedef struct A68t305  A68_305 ;    /* PROC(BOOL) MODE238 */

A_PROCEDURE(A68_INT ,A68t306,(struct A68t237 *,A68_VC ,struct A68t63 ),(struct A68t237 *,A68_VC ,struct A68t63 ,void *));
typedef struct A68t306  A68_306 ;    /* PROC(REF MODE237,REF MODE26,MODE63) INT */

A_PROCEDURE(struct A68t243 *,A68t307,(struct A68t237 *,A68_INT ),(struct A68t237 *,A68_INT ,void *));
typedef struct A68t307  A68_307 ;    /* PROC(REF MODE237,INT) REF MODE243 */

A_PROCEDURE(struct A68t243 *,A68t308,(struct A68t242 ,A68_VC ),(struct A68t242 ,A68_VC ,void *));
typedef struct A68t308  A68_308 ;    /* PROC(MODE242,REF MODE26) REF MODE243 */

A_PROCEDURE(A68_VOID ,A68t309,(A68_BOOL ,struct A68t63 ),(A68_BOOL ,struct A68t63 ,void *));
typedef struct A68t309  A68_309 ;    /* PROC(BOOL,MODE63) VOID */

A_PROCEDURE(A68_VOID ,A68t310,(A68_INT ,A68_INT ,struct A68t63 ),(A68_INT ,A68_INT ,struct A68t63 ,void *));
typedef struct A68t310  A68_310 ;    /* PROC(INT,INT,MODE63) VOID */

A_PROCEDURE(A68_VOID ,A68t311,(struct A68t176 *,struct A68t310 ,struct A68t63 ),(struct A68t176 *,struct A68t310 ,struct A68t63 ,void *));
typedef struct A68t311  A68_311 ;    /* PROC(REF MODE176,MODE310,MODE63) VOID */
A_ISTRUCT(A68_VC ,2,A68t312);
typedef struct A68t312  A68_312 ;    /* STRUCT 2 MODE26 */

A_PROCEDURE(A68_VOID ,A68t313,(A68_VC ,struct A68t310 ,struct A68t63 ),(A68_VC ,struct A68t310 ,struct A68t63 ,void *));
typedef struct A68t313  A68_313 ;    /* PROC(MODE26,MODE310,MODE63) VOID */
A_ISTRUCT(A68_CHAR ,5,A68t314);
typedef struct A68t314  A68_314 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t315);
typedef struct A68t315  A68_315 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t316);
typedef struct A68t316  A68_316 ;    /* STRUCT 13 CHAR */

A_PROCEDURE(A68_BOOL ,A68t317,(struct A68t63 ),(struct A68t63 ,void *));
typedef struct A68t317  A68_317 ;    /* PROC(MODE63) BOOL */

A_PROCEDURE(A68_INT ,A68t318,(A68_VC ,struct A68t238 ),(A68_VC ,struct A68t238 ,void *));
typedef struct A68t318  A68_318 ;    /* PROC(REF MODE26,REF MODE238) INT */

A_PROCEDURE(A68_BOOL ,A68t319,(struct A68t237 *,struct A68t238 ,A68_INT ,struct A68t63 ),(struct A68t237 *,struct A68t238 ,A68_INT ,struct A68t63 ,void *));
typedef struct A68t319  A68_319 ;    /* PROC(REF MODE237,REF MODE238,INT,MODE63) BOOL */
A_ISTRUCT(A68_VC ,4,A68t320);
typedef struct A68t320  A68_320 ;    /* STRUCT 4 MODE26 */

A_PROCEDURE(A68_VOID ,A68t321,(A68_INT ,struct A68t242 *),(A68_INT ,struct A68t242 *,void *));
typedef struct A68t321  A68_321 ;    /* PROC(INT) MODE242 */

A_PROCEDURE(A68_INT ,A68t322,(struct A68t242 ),(struct A68t242 ,void *));
typedef struct A68t322  A68_322 ;    /* PROC(MODE242) INT */

A_PROCEDURE(A68_VOID ,A68t323,(struct A68t242 ),(struct A68t242 ,void *));
typedef struct A68t323  A68_323 ;    /* PROC(MODE242) VOID */

A_PROCEDURE(A68_BOOL ,A68t324,(struct A68t242 ,A68_BOOL ,struct A68t63 ),(struct A68t242 ,A68_BOOL ,struct A68t63 ,void *));
typedef struct A68t324  A68_324 ;    /* PROC(MODE242,BOOL,MODE63) BOOL */

A_PROCEDURE(A68_INT ,A68t325,(struct A68t242 ,A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t63 ),(struct A68t242 ,A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t63 ,void *));
typedef struct A68t325  A68_325 ;    /* PROC(MODE242,BOOL,BOOL,BOOL,MODE63) INT */

A_PROCEDURE(A68_VOID ,A68t326,(struct A68t63 ,struct A68t179 *),(struct A68t63 ,struct A68t179 *,void *));
typedef struct A68t326  A68_326 ;    /* PROC(MODE63) MODE179 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from attrdecls --- */
extern A68_230 * TBWAELA_get_declattribute(struct A68t237 *,A68_INT ,struct A68t63 );
extern A68_VOID  RCWAELA_write_declattributes(struct A68t237 *,struct A68t46 ,struct A68t63 );
/* --- End of imports from attrdecls --- */


/* --- Imports from attrlevel1 --- */
extern A68_VOID  XYOAELA_get_classes(A68_BOOL );
extern A68_VOID  HAPAELA_put_classes(struct A68t63 );
extern A68_INT  LCPAELA_login_class(A68_VC ,A68_VC ,struct A68t63 );
/* --- End of imports from attrlevel1 --- */


/* --- Imports from libmodes --- */
extern A68_179  UACAELA_nilptr;
extern A68_BOOL  UXIAELA_isnilptr(struct A68t176 *,struct A68t179 );
extern A68_VOID  LIBAELA_lib_msg(A68_INT ,A68_64 *);
extern A68_230 * LTJAELA_nildeclattributes;
extern A68_243 * EUJAELA_nilsource;
extern A68_233 * FUJAELA_nilbinding;
extern A68_234 * GUJAELA_nilimports;
extern A68_231 * HUJAELA_niluses;
extern A68_238  RUJAELA_nodecls;
extern A68_238  UUJAELA_nildecls;
extern A68_VC  ZUJAELA_nospecs;
extern A68_235 * BVJAELA_nilregion;
extern A68_236 * CVJAELA_nilregions;
extern A68_237 * DVJAELA_nilcontxt;
extern A68_239 * EVJAELA_nilcontexts;
#define JVJAELA_ktype 65
#define KVJAELA_kint 66
#define LVJAELA_kfn 67
#define OVJAELA_kmac 70
#define MVJAELA_kconst 68
#define NVJAELA_kattr 69
extern A68_VOID  QVJAELA_sort_id(A68_INT ,A68_VC *);
extern A68_240 * HXJAELA_library;
extern A68_VC * SYJAELA_libprompt;
extern A68_INT * JZJAELA_body_key;
extern A68_INT * MZJAELA_info_key;
extern A68_INT * PZJAELA_spacemap_key;
extern A68_176 * TYJAELA_discfile;
#define FWJAELA_identification 18882
#define GWJAELA_markno 12
extern A68_179 * WYJAELA_ptrlibinfo;
extern A68_179 * YYJAELA_ptrcontexts;
extern A68_179 * AZJAELA_ptrimpinfo;
extern A68_179 * CZJAELA_ptrctvalues;
extern A68_179 * GZJAELA_ptrattributes;
extern A68_VOID  BAKAELA_ctos(struct A68t41 ,A68_VC *);
extern A68_VOID  UAKAELA_ctos(struct A68t242 ,A68_VC *);
extern A68_VOID  NBKAELA_ctn(struct A68t242 ,A68_41 *);
extern A68_BOOL  ZBKAELA_no_text(struct A68t237 *,struct A68t63 );
extern A68_VOID  ZCKAELA_resetlibchanged(struct A68t63 );
extern A68_VOID  GDKAELA_settimedate(A68_VC *,A68_VC *);
extern A68_237 * UDKAELA_get_context(A68_VC );
extern A68_VOID  AEKAELA_get_region(struct A68t237 *,A68_VC ,A68_242 *);
extern A68_234 * HEKAELA_get_imports(struct A68t242 );
extern A68_233 * LEKAELA_get_binding(struct A68t242 ,A68_VC );
extern A68_BOOL  REKAELA_check_text(struct A68t237 *,struct A68t63 );
/* --- End of imports from libmodes --- */


/* --- Imports from databasebuffers --- */
extern A68_INT  GKEAELA_discptr_data(struct A68t177 *,struct A68t179 );
extern A68_VOID  KVIAELA_get_root(struct A68t177 *,A68_179 *);
extern A68_VOID  KXHAELA_open_db(struct A68t38 *,A68_BOOL ,A68_177 *);
extern A68_BOOL  BGGAELA_can_finish(struct A68t177 *);
extern A68_VOID  WVIAELA_finish(struct A68t177 *,struct A68t179 );
extern A68_VOID  EWIAELA_finish_and_close(struct A68t177 *,struct A68t179 ,struct A68t63 );
extern A68_VOID  SVIAELA_quit(struct A68t177 *,struct A68t63 );
#define SNBAELA_block_size 512
extern A68_199  DJJAELA_database_file;
extern A68_VOID  VUGAELA_noncompacting_garbage_collect(struct A68t177 *);
#define RXIAELA_validwrite 2
extern A68_206 * ZXIAELA_makebuffer(struct A68t176 *,struct A68t115 ,A68_INT );
extern A68_206 * WYIAELA_readbuffer(struct A68t176 *,struct A68t179 );
extern A68_VOID  PBJAELA_readchars(struct A68t206 *,A68_VC );
extern A68_BOOL  JCJAELA_readbool(struct A68t206 *);
extern A68_INT  YBJAELA_in2(struct A68t206 *);
extern A68_VOID  CCJAELA_inid2(struct A68t206 *,A68_VC *);
extern A68_VOID  QCJAELA_increase_library(struct A68t176 *,struct A68t63 );
extern A68_VOID  TDJAELA_mywritechars(struct A68t176 *,A68_VC ,struct A68t63 ,A68_179 *);
extern A68_VOID  AEJAELA_mywritediscptrs(struct A68t176 *,struct A68t180 ,struct A68t63 ,A68_179 *);
extern A68_INT  UEJAELA_ndiscptrs(struct A68t176 *,struct A68t179 ,struct A68t63 );
extern A68_VOID  FFJAELA_myreaddiscptrs(struct A68t176 *,struct A68t180 ,struct A68t179 ,struct A68t63 );
extern A68_206 * IFJAELA_startwrite(struct A68t176 *,struct A68t115 );
extern A68_VOID  CGJAELA_endwrite(struct A68t206 *,struct A68t63 ,A68_179 *);
extern A68_INT  LHJAELA_outchars(A68_VC ,struct A68t206 *,struct A68t63 );
extern A68_INT  YHJAELA_outint2(A68_INT ,struct A68t206 *,struct A68t63 );
extern A68_INT  UIJAELA_outid2(A68_VC ,struct A68t206 *,struct A68t63 );
extern A68_INT  AJJAELA_outbool(A68_BOOL ,struct A68t206 *,struct A68t63 );
/* --- End of imports from databasebuffers --- */


/* --- Imports from osinterface --- */
extern A68_135  BOBAOSI_update_access;
extern A68_135  FOBAOSI_update_truncate_access;
#define HDAAOST_block_update_access BOBAOSI_update_access
#define IDAAOST_block_update_truncate_access FOBAOSI_update_truncate_access
extern A68_38 * FQBAOSI_open_file(A68_VC ,struct A68t135 ,struct A68t63 );
#include <stdlib.h>
#define EXIT(status) exit(A_INT_int(status))

#define BZBAOSI_exit EXIT
extern A68_VOID  TNCAOSI_parse_filename(A68_VC ,A68_VC ,struct A68t63 ,A68_153 *);
extern int A_argc;
extern char **A_argv;
#define A_prelude(argc,argv) A_argc=argc; A_argv = argv

#define VPCAOSI_prelude A_prelude
#include "Alibrary.h"

#define PBCAOSI_garbage_collect Agc_collect
#include <math.h>

#define GQAAOST_sqrt sqrt
/* --- End of imports from osinterface --- */


/* --- Imports from messageproc --- */
extern A68_31  VJAAOSI_nullmsg;
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VOID  FCAAOSI_intchars(A68_INT ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- Imports from basics --- */
extern A68_VOID  BTCAOST_makeid(A68_CHAR ,A68_VC *);
extern A68_VC  TTCAOST_nullid;
extern A68_VOID  NKDAOST_sysfault(A68_VC );
extern A68_VC  UKDAOST_library_type;
/* --- End of imports from basics --- */


/* --- Imports from testmode --- */
extern A68_VOID  JIBAOST_version_str(A68_INT ,A68_VC *);
/* --- End of imports from testmode --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void DZVAELA(void);   /* attrdecls */
extern void MPOAELA(void);   /* attrlevel1 */
extern void FTJAELA(void);   /* libmodes */
extern void NWIAELA(void);   /* databasebuffers */
extern void PCAAOST(void);   /* osinterface */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
extern void JSCAOST(void);   /* basics */
extern void QFBAOST(void);   /* testmode */
/* --- end of DECS initialisation functions --- */
static A68_287   VOABELA = {"$Id: libinterface.a68,v 34.2 1995/03/29 13:03:28 ella Exp $"}; 
A_GISVEC(A68_VC ,WOABELA,VOABELA,59)
#define CSABELA_end 0
#define DSABELA_more 1
#define ESABELA_notownval 2
#define FSABELA_moreclosure 3
static A68_300   AYABELA = {"incorrect refresh"}; 
A_GISVEC(A68_VC ,BYABELA,AYABELA,17)
#define CYABELA_idef 122
#define DYABELA_ibracket 84
#define EYABELA_tbracket 85
#define FYABELA_tstring 138
#define GYABELA_typename 48
#define HYABELA_pidalts 50
#define IYABELA_prange 51
#define JYABELA_pstring 128
#define KYABELA_attrname 151
#define LYABELA_intname 121
#define MYABELA_constname 140
#define NYABELA_fnstart 43
#define OYABELA_end_tok 42
#define PYABELA_attid 152
#define QYABELA_attdata 153
#define RYABELA_attbracket 154
#define SYABELA_attstr 155
#define TYABELA_zero 0
static A68_208  CABBELA_skipmacspec;
static A68_314   RIBBELA = {"_body"}; 
static A68_315   SIBBELA = {"_RSREbody"}; 
A_GISVEC(A68_VC ,TIBBELA,SIBBELA,9)
A_GISVEC(A68_VC ,UIBBELA,RIBBELA,5)
static A68_314   VIBBELA = {"_info"}; 
static A68_315   WIBBELA = {"_RSREinfo"}; 
A_GISVEC(A68_VC ,XIBBELA,WIBBELA,9)
A_GISVEC(A68_VC ,YIBBELA,VIBBELA,5)
static A68_315   ZIBBELA = {"_spacemap"}; 
static A68_316   AJBBELA = {"_RSREspacemap"}; 
A_GISVEC(A68_VC ,BJBBELA,AJBBELA,13)
A_GISVEC(A68_VC ,CJBBELA,ZIBBELA,9)
typedef struct   /* env of non-global proc */
{
int dummy;
} PPABELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} WQABELA_generator;
typedef struct   /* env of non-global proc */
{
A68_237 * Ct;
A68_63  Msg;
} PRABELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} YSABELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * GTABELA_nocts;
} NTABELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * HTABELA_noimps;
} WTABELA_generator;
typedef struct   /* env of non-global proc */
{
A68_180  ZTABELA_info;
A68_INT * BUABELA_infoind;
} FUABELA_next_info;
typedef struct   /* env of non-global proc */
{
A68_63  Msg;
} WUABELA_generator;
typedef struct   /* env of non-global proc */
{
A68_63  Msg;
} GVABELA_generator;
typedef struct   /* env of non-global proc */
{
A68_180  ZUABELA_infoptrs;
A68_INT * BVABELA_ind;
A68_297  LVABELA_imports;
} NVABELA_imports;
typedef struct   /* env of non-global proc */
{
A68_297  LVABELA_imports;
A68_298  CWABELA_regions;
} EWABELA_regions;
typedef struct   /* env of non-global proc */
{
A68_298  CWABELA_regions;
A68_180 * RUABELA_vals;
A68_INT * SUABELA_valsind;
A68_299  MWABELA_contexts;
} OWABELA_contexts;
typedef struct   /* env of non-global proc */
{
A68_63  Msg;
} CXABELA_generator;
typedef struct   /* env of non-global proc */
{
A68_63  Msg;
} LXABELA_generator;
typedef struct   /* env of non-global proc */
{
A68_303  CBBBELA_inuses;
} EBBBELA_inuses;
typedef struct   /* env of non-global proc */
{
A68_232 * PBBBELA_decl;
} UBBBELA_generator;
typedef struct   /* env of non-global proc */
{
A68_237 * Ct;
A68_63  Msg;
} IDBBELA_generator;
typedef struct   /* env of non-global proc */
{
A68_206 ** NDBBELA_buffer;
} SDBBELA_generator;
typedef struct   /* env of non-global proc */
{
A68_206 ** NDBBELA_buffer;
} DEBBELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  XGBBELA_rootsize;
A_PAD_INT(PAD_77)
} EHBBELA_generator;
typedef struct   /* env of non-global proc */
{
A68_323  JMBBELA_close1;
A68_INT * FMBBELA_closureno;
} LMBBELA_close1;
typedef struct   /* env of non-global proc */
{
A68_INT  WOBBELA_no_atts;
A_PAD_INT(PAD_78)
} APBBELA_generator;

A68_VOID  YOABELA_changecurrentct(A68_41  Ctn);

A68_VOID  EPABELA_makeprompt(A68_242  Cr, A68_41  *ReturnedValue);

A68_VOID  LPABELA_putlibinfo(A68_INT  Version, A68_63  Msg);

A_STATIC A68_VOID  OPABELA_generator(A68_BOOL  MPABELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  ZPABELA_getlibinfo(void);

A68_VOID  SQABELA_writedecls(A68_238  Decls, A68_63  Msg, A68_179  *ReturnedValue);

A_STATIC A68_VOID  VQABELA_generator(A68_BOOL  TQABELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JRABELA_putcontext(A68_237 * Ct, A68_63  Msg, A68_179  *ReturnedValue);

A_STATIC A68_VOID  ORABELA_generator(A68_BOOL  MRABELA_anonymous, A68_180  *ReturnedValue, void *NonLocals);

A68_VOID  KSABELA_putcontexts(A68_179 * Pcts, A68_179 * Pvals, A68_179 * Pinfo, A68_63  Msg);

A_STATIC A68_VOID  QSABELA_outct(A68_237  Ct, A68_294  Next_info, A68_206 * Buffer, A68_63  Msg);

A_STATIC A68_VOID  XSABELA_generator(A68_BOOL  VSABELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MTABELA_generator(A68_BOOL  KTABELA_anonymous, A68_180  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VTABELA_generator(A68_BOOL  TTABELA_anonymous, A68_180  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  EUABELA_next_info(A68_179  Dp, void *NonLocals);

A68_239 * PUABELA_getcontexts(A68_63  Msg);

A_STATIC A68_VOID  VUABELA_generator(A68_BOOL  TUABELA_anonymous, A68_180  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FVABELA_generator(A68_BOOL  DVABELA_anonymous, A68_180  *ReturnedValue, void *NonLocals);

A_STATIC A68_234 * MVABELA_imports(A68_206 * Buffer, void *NonLocals);

A_STATIC A68_236 * DWABELA_regions(A68_206 * Buffer, void *NonLocals);

A_STATIC A68_239 * NWABELA_contexts(A68_206 * Buffer, void *NonLocals);

A_STATIC A68_VOID  YWABELA_refreshcontexts(A68_63  Msg);

A_STATIC A68_VOID  BXABELA_generator(A68_BOOL  ZWABELA_anonymous, A68_180  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KXABELA_generator(A68_BOOL  IXABELA_anonymous, A68_180  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VYABELA_integer(A68_206 * Buffer);

A_STATIC A68_BOOL  AZABELA_type(A68_206 * Buffer);

A_STATIC A68_VOID  QZABELA_skipattrs(A68_206 * Buffer);

A_STATIC A68_VOID  TZABELA_skipdata(A68_206 * Buffer);

A_STATIC A68_VOID  FABBELA_fnspec(A68_206 * Buffer, A68_INT * Sort, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  MABBELA_anonymous(A68_206 * Buffer);

A68_VOID  XABBELA_indecls(A68_238  Decls);

A_STATIC A68_231 * DBBBELA_inuses(A68_206 * Buffer, A68_INT  S, A68_231 * U, void *NonLocals);

A_STATIC A68_VOID  TBBBELA_generator(A68_BOOL  RBBBELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  DDBBELA_readdecls(A68_237 * Ct, A68_63  Msg, A68_238  *ReturnedValue);

A_STATIC A68_VOID  HDBBELA_generator(A68_BOOL  FDBBELA_anonymous, A68_180  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RDBBELA_generator(A68_BOOL  PDBBELA_anonymous, A68_238  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CEBBELA_generator(A68_BOOL  AEBBELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  LEBBELA_get_decls(A68_237 * Ct, A68_63  Msg, A68_238  *ReturnedValue);

A68_INT  TEBBELA_get_decl(A68_237 * Ct, A68_VC  Declname, A68_63  Msg);

A68_243 * CFBBELA_get_decl_source(A68_237 * Ct, A68_INT  Declno);

A_STATIC A68_VOID  GFBBELA_msg(A68_64  No, A68_31  Params);

A68_243 * VFBBELA_get_binding_source(A68_242  Cr, A68_VC  Rename);

A68_INT  IGBBELA_check_decl(A68_237 * Ct, A68_VC  Declname, A68_63  Msg);

A68_VOID  PGBBELA_readrootptrs(A68_BOOL  Refresh, A68_63  Msg);

A68_VOID  WGBBELA_check_ella_library(A68_176 * Df, A68_310  Updater, A68_63  Msg);

A_STATIC A68_VOID  DHBBELA_generator(A68_BOOL  BHBBELA_anonymous, A68_180  *ReturnedValue, void *NonLocals);

A68_VOID  CIBBELA_nullupdater(A68_INT  Old, A68_INT  New, A68_63  Msg);

A68_VOID  HIBBELA_open_library(A68_VC  Db_filename, A68_310  Updater, A68_63  Msg);

A68_VOID  EJBBELA_reopen_library(A68_63  Msg);

A68_VOID  IJBBELA_savelib(A68_BOOL  Close, A68_63  Msg);

A68_VOID  OJBBELA_finish_library(A68_63  Msg);

A68_BOOL  QJBBELA_save_library(A68_63  Msg);

A68_INT  UJBBELA_finddecl(A68_VC  Id, A68_238  Decls);

A68_BOOL  DKBBELA_loadable(A68_237 * Ct, A68_238  Decls, A68_INT  Explain, A68_63  Msg);

A68_INT  LLBBELA_find_maxctno(void);

A68_VOID  RLBBELA_ctno_region(A68_INT  Ctno, A68_242  *ReturnedValue);

A68_VOID  ZLBBELA_zero_ctnos(void);

A_STATIC A68_INT  EMBBELA_add_close(A68_242  Crg);

A_STATIC A68_VOID  KMBBELA_close1(A68_242  Cr, void *NonLocals);

A68_INT  TMBBELA_close(A68_242  Crg);

A_STATIC A68_BOOL  YMBBELA_checkimports(A68_242  Cr, A68_BOOL  Explain, A68_63  Msg);

A68_INT  ONBBELA_next_closure_details(A68_242  Crg, A68_BOOL  Recompile, A68_BOOL  Importing, A68_BOOL  Explain, A68_63  Msg);

A68_INT  SOBBELA_closure_details(A68_242  Crg, A68_BOOL  Recompile, A68_BOOL  Importing, A68_BOOL  Explain, A68_63  Msg);

A68_VOID  VOBBELA_newcontextptr(A68_63  Msg, A68_179  *ReturnedValue);

A_STATIC A68_VOID  ZOBBELA_generator(A68_BOOL  XOBBELA_anonymous, A68_180  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OPABELA_generator(A68_BOOL  MPABELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((PPABELA_generator *)NonLocals)->x)
{ 
A68_VC  QPABELA;  /* clause result */
A68_VC  RPABELA;  /* OPERATORS - dynamic generator */
{ 
RPABELA.upb = SNBAELA_block_size ;
( MPABELA_anonymous? A_VLOC(A68_CHAR ,RPABELA): A_VHEAP(A68_CHAR ,RPABELA) );
QPABELA = RPABELA;
} 
*ReturnedValue = (QPABELA);
return;
} 
#undef NL

A_STATIC A68_VOID  VQABELA_generator(A68_BOOL  TQABELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((WQABELA_generator *)NonLocals)->x)
{ 
A68_VC  XQABELA;  /* clause result */
A68_VC  YQABELA;  /* OPERATORS - dynamic generator */
{ 
YQABELA.upb = SNBAELA_block_size ;
( TQABELA_anonymous? A_VLOC(A68_CHAR ,YQABELA): A_VHEAP(A68_CHAR ,YQABELA) );
XQABELA = YQABELA;
} 
*ReturnedValue = (XQABELA);
return;
} 
#undef NL

A_STATIC A68_VOID  ORABELA_generator(A68_BOOL  MRABELA_anonymous, A68_180  *ReturnedValue, void *NonLocals)
#define NL(x) (((PRABELA_generator *)NonLocals)->x)
{ 
A68_180  QRABELA;  /* clause result */
A68_180  RRABELA;  /* OPERATORS - dynamic generator */
{ 
RRABELA.upb = UEJAELA_ndiscptrs(TYJAELA_discfile, (*(&(NL(Ct)->Val))), NL(Msg)) ;
( MRABELA_anonymous? A_VLOC(A68_179 ,RRABELA): A_VHEAP(A68_179 ,RRABELA) );
QRABELA = RRABELA;
} 
*ReturnedValue = (QRABELA);
return;
} 
#undef NL
 /* line 204: */

A_STATIC A68_VOID  QSABELA_outct(A68_237  Ct, A68_294  Next_info, A68_206 * Buffer, A68_63  Msg)
{ 
A68_INT  RSABELA;  /* clause result */
A68_236 * SSABELA_r;
A68_234 * TSABELA_ips;
A68_233 * USABELA_b;
A_PROC_ENTRY(outct);
 /* line 205: */
{ 
YHJAELA_outint2(DSABELA_more, Buffer, Msg);
 /* line 206: */
UIJAELA_outid2(Ct.Name, Buffer, Msg);
 /* line 207: */
if ( Ct.Loadable )
{ 
RSABELA = 1;
} 
else
{ 
RSABELA = 0;
} 
YHJAELA_outint2(RSABELA, Buffer, Msg);
 /* line 208: */
SSABELA_r = Ct.Regions;
 /* line 209: */
for ( ;; )
{ 
 /* line 210: */
if ( !((SSABELA_r!=CVJAELA_nilregions)) ) break;
YHJAELA_outint2(DSABELA_more, Buffer, Msg);
 /* line 211: */
UIJAELA_outid2((*(&((&(SSABELA_r->Region))->Name))), Buffer, Msg);
 /* line 212: */
TSABELA_ips = (*(&((&(SSABELA_r->Region))->Imports)));
 /* line 213: */
for ( ;; )
{ 
 /* line 214: */
if ( !((TSABELA_ips!=GUJAELA_nilimports)) ) break;
USABELA_b = (&(TSABELA_ips->Binding));
 /* line 215: */
YHJAELA_outint2(((*(&(USABELA_b->Sort)))-60), Buffer, Msg);
 /* line 216: */
UIJAELA_outid2((*(&((&(USABELA_b->Ctn))->Context))), Buffer, Msg);
 /* line 217: */
UIJAELA_outid2((*(&((&(USABELA_b->Ctn))->Import))), Buffer, Msg);
 /* line 218: */
UIJAELA_outid2((*(&(USABELA_b->Name))), Buffer, Msg);
 /* line 219: */
UIJAELA_outid2((*(&(USABELA_b->Rename))), Buffer, Msg);
 /* line 220: */
A_CALLPROC(Next_info,((*(&(USABELA_b->Info)))),((*(&(USABELA_b->Info))),(Next_info).nonlocals));
 /* line 221: */
 /* line 222: */
TSABELA_ips = (*(&(TSABELA_ips->Rest)));
}
 /* line 223: */
YHJAELA_outint2(CSABELA_end, Buffer, Msg);
 /* line 224: */
 /* line 225: */
SSABELA_r = (*(&(SSABELA_r->Rest)));
}
 /* line 226: */
 /* line 227: */
YHJAELA_outint2(CSABELA_end, Buffer, Msg);
} 
A_PROC_EXIT(outct);
return;
} 
#undef NL

A_STATIC A68_VOID  XSABELA_generator(A68_BOOL  VSABELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((YSABELA_generator *)NonLocals)->x)
{ 
A68_VC  ZSABELA;  /* clause result */
A68_VC  ATABELA;  /* OPERATORS - dynamic generator */
{ 
ATABELA.upb = SNBAELA_block_size ;
( VSABELA_anonymous? A_VLOC(A68_CHAR ,ATABELA): A_VHEAP(A68_CHAR ,ATABELA) );
ZSABELA = ATABELA;
} 
*ReturnedValue = (ZSABELA);
return;
} 
#undef NL

A_STATIC A68_VOID  MTABELA_generator(A68_BOOL  KTABELA_anonymous, A68_180  *ReturnedValue, void *NonLocals)
#define NL(x) (((NTABELA_generator *)NonLocals)->x)
{ 
A68_180  OTABELA;  /* clause result */
A68_180  PTABELA;  /* OPERATORS - dynamic generator */
{ 
PTABELA.upb = (*NL(GTABELA_nocts)) ;
( KTABELA_anonymous? A_VLOC(A68_179 ,PTABELA): A_VHEAP(A68_179 ,PTABELA) );
OTABELA = PTABELA;
} 
*ReturnedValue = (OTABELA);
return;
} 
#undef NL

A_STATIC A68_VOID  VTABELA_generator(A68_BOOL  TTABELA_anonymous, A68_180  *ReturnedValue, void *NonLocals)
#define NL(x) (((WTABELA_generator *)NonLocals)->x)
{ 
A68_180  XTABELA;  /* clause result */
A68_180  YTABELA;  /* OPERATORS - dynamic generator */
{ 
YTABELA.upb = (*NL(HTABELA_noimps)) ;
( TTABELA_anonymous? A_VLOC(A68_179 ,YTABELA): A_VHEAP(A68_179 ,YTABELA) );
XTABELA = YTABELA;
} 
*ReturnedValue = (XTABELA);
return;
} 
#undef NL

A_STATIC A68_VOID  EUABELA_next_info(A68_179  Dp, void *NonLocals)
#define NL(x) (((FUABELA_next_info *)NonLocals)->x)
{ 
A68_INT  GUABELA;  /* YIELD */
A68_179 * HUABELA;  /* YIELD */
A_PROC_ENTRY(next_info);
GUABELA = (*NL(BUABELA_infoind))+=1 ;
HUABELA = (&A_VINDEX(NL(ZTABELA_info),GUABELA)) ;
(*HUABELA) = Dp;
A_PROC_EXIT(next_info);
return;
} 
#undef NL

A_STATIC A68_VOID  VUABELA_generator(A68_BOOL  TUABELA_anonymous, A68_180  *ReturnedValue, void *NonLocals)
#define NL(x) (((WUABELA_generator *)NonLocals)->x)
{ 
A68_180  XUABELA;  /* clause result */
A68_180  YUABELA;  /* OPERATORS - dynamic generator */
{ 
YUABELA.upb = UEJAELA_ndiscptrs(TYJAELA_discfile, (*AZJAELA_ptrimpinfo), NL(Msg)) ;
( TUABELA_anonymous? A_VLOC(A68_179 ,YUABELA): A_VHEAP(A68_179 ,YUABELA) );
XUABELA = YUABELA;
} 
*ReturnedValue = (XUABELA);
return;
} 
#undef NL

A_STATIC A68_VOID  FVABELA_generator(A68_BOOL  DVABELA_anonymous, A68_180  *ReturnedValue, void *NonLocals)
#define NL(x) (((GVABELA_generator *)NonLocals)->x)
{ 
A68_180  HVABELA;  /* clause result */
A68_180  IVABELA;  /* OPERATORS - dynamic generator */
{ 
IVABELA.upb = UEJAELA_ndiscptrs(TYJAELA_discfile, (*CZJAELA_ptrctvalues), NL(Msg)) ;
( DVABELA_anonymous? A_VLOC(A68_179 ,IVABELA): A_VHEAP(A68_179 ,IVABELA) );
HVABELA = IVABELA;
} 
*ReturnedValue = (HVABELA);
return;
} 
#undef NL

A_STATIC A68_234 * MVABELA_imports(A68_206 * Buffer, void *NonLocals)
#define NL(x) (((NVABELA_imports *)NonLocals)->x)
{ 
A68_INT  OVABELA_c;
A68_234 * PVABELA;  /* clause result */
A68_VC  QVABELA;  /* avoid structure result */
A68_VC  RVABELA_ctn;
A68_VC  SVABELA;  /* avoid structure result */
A68_VC  TVABELA_imp;
A68_VC  UVABELA;  /* avoid structure result */
A68_VC  VVABELA_name;
A68_VC  WVABELA;  /* avoid structure result */
A68_VC  XVABELA_rename;
A68_234  YVABELA;  /* collateral clause result */
A68_INT  ZVABELA;  /* YIELD */
A68_234 * AWABELA;  /* YIELD */
A_PROC_ENTRY(imports);
 /* line 279: */
{ 
OVABELA_c = YBJAELA_in2(Buffer);
 /* line 280: */
 /* line 281: */
 /* line 282: */
if ( (OVABELA_c==CSABELA_end) )
{ 
PVABELA = GUJAELA_nilimports;
} 
else
{ 
CCJAELA_inid2( Buffer, &QVABELA );
RVABELA_ctn = QVABELA;
CCJAELA_inid2( Buffer, &SVABELA );
TVABELA_imp = SVABELA;
 /* line 283: */
CCJAELA_inid2( Buffer, &UVABELA );
VVABELA_name = UVABELA;
CCJAELA_inid2( Buffer, &WVABELA );
XVABELA_rename = WVABELA;
 /* line 284: */
YVABELA.Binding.Ctn.Context = RVABELA_ctn;
YVABELA.Binding.Ctn.Import = TVABELA_imp;
YVABELA.Binding.Name = VVABELA_name;
YVABELA.Binding.Rename = XVABELA_rename;
 /* line 285: */
YVABELA.Binding.Sort = (OVABELA_c+60);
 /* line 286: */
ZVABELA = (*NL(BVABELA_ind))+=1 ;
YVABELA.Binding.Info = (*(&A_VINDEX(NL(ZUABELA_infoptrs),ZVABELA)));
 /* line 287: */
YVABELA.Rest = A_CALLPROC(NL(LVABELA_imports),(Buffer),(Buffer,(NL(LVABELA_imports)).nonlocals));
 /* line 288: */
AWABELA = A_HEAP(A68_234 ) ;
(*AWABELA) = YVABELA ;
PVABELA = AWABELA;
} 
} 
A_PROC_EXIT(imports);
return( PVABELA );
} 
#undef NL

A_STATIC A68_236 * DWABELA_regions(A68_206 * Buffer, void *NonLocals)
#define NL(x) (((EWABELA_regions *)NonLocals)->x)
{ 
A68_236 * FWABELA;  /* clause result */
A68_VC  GWABELA;  /* avoid structure result */
A68_VC  HWABELA_name;
A68_234 * IWABELA_import;
A68_236  JWABELA;  /* collateral clause result */
A68_236 * KWABELA;  /* YIELD */
A_PROC_ENTRY(regions);
 /* line 291: */
{ 
 /* line 292: */
 /* line 293: */
if ( (YBJAELA_in2(Buffer)==CSABELA_end) )
{ 
FWABELA = CVJAELA_nilregions;
} 
else
{ 
CCJAELA_inid2( Buffer, &GWABELA );
HWABELA_name = GWABELA;
 /* line 294: */
IWABELA_import = A_CALLPROC(NL(LVABELA_imports),(Buffer),(Buffer,(NL(LVABELA_imports)).nonlocals));
 /* line 295: */
JWABELA.Region.Name = HWABELA_name;
JWABELA.Region.Ctno = 0;
JWABELA.Region.Imports = IWABELA_import;
 /* line 296: */
JWABELA.Rest = A_CALLPROC(NL(CWABELA_regions),(Buffer),(Buffer,(NL(CWABELA_regions)).nonlocals));
 /* line 297: */
KWABELA = A_HEAP(A68_236 ) ;
(*KWABELA) = JWABELA ;
FWABELA = KWABELA;
} 
} 
A_PROC_EXIT(regions);
return( FWABELA );
} 
#undef NL

A_STATIC A68_239 * NWABELA_contexts(A68_206 * Buffer, void *NonLocals)
#define NL(x) (((OWABELA_contexts *)NonLocals)->x)
{ 
A68_239 * PWABELA;  /* clause result */
A68_VC  QWABELA;  /* avoid structure result */
A68_VC  RWABELA_name;
A68_BOOL  SWABELA_loadable;
A68_236 * TWABELA_region;
A68_239  UWABELA;  /* collateral clause result */
A68_INT  VWABELA;  /* YIELD */
A68_239 * WWABELA;  /* YIELD */
A_PROC_ENTRY(contexts);
 /* line 300: */
{ 
 /* line 301: */
 /* line 302: */
if ( (YBJAELA_in2(Buffer)==CSABELA_end) )
{ 
PWABELA = EVJAELA_nilcontexts;
} 
else
{ 
CCJAELA_inid2( Buffer, &QWABELA );
RWABELA_name = QWABELA;
 /* line 303: */
SWABELA_loadable = (YBJAELA_in2(Buffer)==1);
 /* line 304: */
TWABELA_region = A_CALLPROC(NL(CWABELA_regions),(Buffer),(Buffer,(NL(CWABELA_regions)).nonlocals));
 /* line 305: */
 /* line 306: */
UWABELA.Context.Name = RWABELA_name;
VWABELA = (*NL(SUABELA_valsind))+=1 ;
UWABELA.Context.Val = (*(&A_VINDEX((*NL(RUABELA_vals)),VWABELA)));
 /* line 307: */
UWABELA.Context.Loadable = SWABELA_loadable;
UWABELA.Context.Changed = A68_FALSE;
UWABELA.Context.Decls = UUJAELA_nildecls;
UWABELA.Context.Declattributes = LTJAELA_nildeclattributes;
 /* line 308: */
UWABELA.Context.Regions = TWABELA_region;
 /* line 309: */
UWABELA.Rest = A_CALLPROC(NL(MWABELA_contexts),(Buffer),(Buffer,(NL(MWABELA_contexts)).nonlocals));
 /* line 310: */
WWABELA = A_HEAP(A68_239 ) ;
(*WWABELA) = UWABELA ;
PWABELA = WWABELA;
} 
} 
A_PROC_EXIT(contexts);
return( PWABELA );
} 
#undef NL

A_STATIC A68_VOID  BXABELA_generator(A68_BOOL  ZWABELA_anonymous, A68_180  *ReturnedValue, void *NonLocals)
#define NL(x) (((CXABELA_generator *)NonLocals)->x)
{ 
A68_180  DXABELA;  /* clause result */
A68_180  EXABELA;  /* OPERATORS - dynamic generator */
{ 
EXABELA.upb = UEJAELA_ndiscptrs(TYJAELA_discfile, (*CZJAELA_ptrctvalues), NL(Msg)) ;
( ZWABELA_anonymous? A_VLOC(A68_179 ,EXABELA): A_VHEAP(A68_179 ,EXABELA) );
DXABELA = EXABELA;
} 
*ReturnedValue = (DXABELA);
return;
} 
#undef NL

A_STATIC A68_VOID  KXABELA_generator(A68_BOOL  IXABELA_anonymous, A68_180  *ReturnedValue, void *NonLocals)
#define NL(x) (((LXABELA_generator *)NonLocals)->x)
{ 
A68_180  MXABELA;  /* clause result */
A68_180  NXABELA;  /* OPERATORS - dynamic generator */
{ 
NXABELA.upb = UEJAELA_ndiscptrs(TYJAELA_discfile, (*AZJAELA_ptrimpinfo), NL(Msg)) ;
( IXABELA_anonymous? A_VLOC(A68_179 ,NXABELA): A_VHEAP(A68_179 ,NXABELA) );
MXABELA = NXABELA;
} 
*ReturnedValue = (MXABELA);
return;
} 
#undef NL

A_STATIC A68_VOID  TZABELA_skipdata(A68_206 * Buffer)
{ 
A68_VC  UZABELA;  /* avoid structure result */
A68_INT  VZABELA_nostrings;
A68_INT  WZABELA;  /* to part of loop */
A68_INT  XZABELA;  /* loop control */
A68_VC  YZABELA;  /* avoid structure result */
A_PROC_ENTRY(skipdata);
 /* line 419: */
{ 
CCJAELA_inid2( Buffer, &UZABELA );
UZABELA;
 /* line 420: */
VZABELA_nostrings = YBJAELA_in2(Buffer);
 /* line 421: */
WZABELA = VZABELA_nostrings;
for ( XZABELA = 1;
XZABELA <= WZABELA;
XZABELA += 1 )
{ 
CCJAELA_inid2( Buffer, &YZABELA );
YZABELA;
}
 /* line 422: */
} 
A_PROC_EXIT(skipdata);
return;
} 
#undef NL

A_STATIC A68_231 * DBBBELA_inuses(A68_206 * Buffer, A68_INT  S, A68_231 * U, void *NonLocals)
#define NL(x) (((EBBBELA_inuses *)NonLocals)->x)
{ 
A68_INT  FBBBELA_sort;
A68_INT  GBBBELA_v;
A68_VC  HBBBELA_id;
A68_VC  IBBBELA;  /* avoid structure result */
A68_231 * JBBBELA;  /* clause result */
A68_231  KBBBELA;  /* collateral clause result */
A68_231 * LBBBELA;  /* YIELD */
A68_VC  MBBBELA;  /* avoid structure result */
A68_231  NBBBELA;  /* collateral clause result */
A68_231 * OBBBELA;  /* YIELD */
A_PROC_ENTRY(inuses);
 /* line 479: */
{ 
FBBBELA_sort = S;
 /* line 480: */
 /* line 481: */
 /* line 482: */
if ( (FBBBELA_sort!=LVJAELA_kfn) )
{ 
CCJAELA_inid2( Buffer, &IBBBELA );
HBBBELA_id = IBBBELA;
 /* line 483: */
 /* line 484: */
 /* line 485: */
if ( A_VC_EQ(HBBBELA_id,TTCAOST_nullid) )
{ 
JBBBELA = U;
} 
else
{ 
YBJAELA_in2(Buffer);
 /* line 486: */
GBBBELA_v = YBJAELA_in2(Buffer);
 /* line 487: */
 /* line 488: */
if ( (FBBBELA_sort==JVJAELA_ktype) )
{ 
AZABELA_type(Buffer);
 /* line 489: */
 /* line 490: */
YBJAELA_in2(Buffer);
} 
 /* line 491: */
KBBBELA.Sort = FBBBELA_sort;
KBBBELA.Name = HBBBELA_id;
KBBBELA.Version = GBBBELA_v;
 /* line 492: */
KBBBELA.Rest = A_CALLPROC(NL(CBBBELA_inuses),(Buffer, S, U),(Buffer, S, U,(NL(CBBBELA_inuses)).nonlocals));
 /* line 493: */
LBBBELA = A_HEAP(A68_231 ) ;
(*LBBBELA) = KBBBELA ;
JBBBELA = LBBBELA;
} 
} 
else
{ 
 /* line 494: */
 /* line 495: */
if ( (YBJAELA_in2(Buffer)==TYABELA_zero) )
{ 
JBBBELA = U;
} 
else
{ 
YBJAELA_in2(Buffer);
 /* line 496: */
FABBELA_fnspec( Buffer, (&FBBBELA_sort), &MBBBELA );
HBBBELA_id = MBBBELA;
 /* line 497: */
YBJAELA_in2(Buffer);
GBBBELA_v = YBJAELA_in2(Buffer);
YBJAELA_in2(Buffer);
 /* line 498: */
NBBBELA.Sort = FBBBELA_sort;
NBBBELA.Name = HBBBELA_id;
NBBBELA.Version = GBBBELA_v;
 /* line 499: */
NBBBELA.Rest = A_CALLPROC(NL(CBBBELA_inuses),(Buffer, S, U),(Buffer, S, U,(NL(CBBBELA_inuses)).nonlocals));
 /* line 500: */
 /* line 501: */
OBBBELA = A_HEAP(A68_231 ) ;
(*OBBBELA) = NBBBELA ;
JBBBELA = OBBBELA;
} 
} 
} 
A_PROC_EXIT(inuses);
return( JBBBELA );
} 
#undef NL

A_STATIC A68_VOID  TBBBELA_generator(A68_BOOL  RBBBELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((UBBBELA_generator *)NonLocals)->x)
{ 
A68_VC  VBBBELA;  /* clause result */
A68_VC  WBBBELA;  /* OPERATORS - dynamic generator */
{ 
WBBBELA.upb = (*(&(NL(PBBBELA_decl)->Il))).upb ;
( RBBBELA_anonymous? A_VLOC(A68_CHAR ,WBBBELA): A_VHEAP(A68_CHAR ,WBBBELA) );
VBBBELA = WBBBELA;
} 
*ReturnedValue = (VBBBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  HDBBELA_generator(A68_BOOL  FDBBELA_anonymous, A68_180  *ReturnedValue, void *NonLocals)
#define NL(x) (((IDBBELA_generator *)NonLocals)->x)
{ 
A68_180  JDBBELA;  /* clause result */
A68_180  KDBBELA;  /* OPERATORS - dynamic generator */
{ 
KDBBELA.upb = UEJAELA_ndiscptrs(TYJAELA_discfile, (*(&(NL(Ct)->Val))), NL(Msg)) ;
( FDBBELA_anonymous? A_VLOC(A68_179 ,KDBBELA): A_VHEAP(A68_179 ,KDBBELA) );
JDBBELA = KDBBELA;
} 
*ReturnedValue = (JDBBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  RDBBELA_generator(A68_BOOL  PDBBELA_anonymous, A68_238  *ReturnedValue, void *NonLocals)
#define NL(x) (((SDBBELA_generator *)NonLocals)->x)
{ 
A68_238  TDBBELA;  /* clause result */
A68_238  UDBBELA;  /* OPERATORS - dynamic generator */
{ 
UDBBELA.upb = YBJAELA_in2((*NL(NDBBELA_buffer))) ;
( PDBBELA_anonymous? A_VLOC(A68_232 ,UDBBELA): A_VHEAP(A68_232 ,UDBBELA) );
TDBBELA = UDBBELA;
} 
*ReturnedValue = (TDBBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  CEBBELA_generator(A68_BOOL  AEBBELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((DEBBELA_generator *)NonLocals)->x)
{ 
A68_VC  EEBBELA;  /* clause result */
A68_VC  FEBBELA;  /* OPERATORS - dynamic generator */
{ 
FEBBELA.upb = YBJAELA_in2((*NL(NDBBELA_buffer))) ;
( AEBBELA_anonymous? A_VLOC(A68_CHAR ,FEBBELA): A_VHEAP(A68_CHAR ,FEBBELA) );
EEBBELA = FEBBELA;
} 
*ReturnedValue = (EEBBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  GFBBELA_msg(A68_64  No, A68_31  Params)
{ 
A68_INT  HFBBELA;  /* YIELD */
A_PROC_ENTRY(msg);
HFBBELA = 1 ;
NKDAOST_sysfault(A_VINDEX(Params,HFBBELA));
A_PROC_EXIT(msg);
return;
} 
#undef NL

A_STATIC A68_VOID  DHBBELA_generator(A68_BOOL  BHBBELA_anonymous, A68_180  *ReturnedValue, void *NonLocals)
#define NL(x) (((EHBBELA_generator *)NonLocals)->x)
{ 
A68_180  FHBBELA;  /* clause result */
A68_180  GHBBELA;  /* OPERATORS - dynamic generator */
{ 
GHBBELA.upb = NL(XGBBELA_rootsize) ;
( BHBBELA_anonymous? A_VLOC(A68_179 ,GHBBELA): A_VHEAP(A68_179 ,GHBBELA) );
FHBBELA = GHBBELA;
} 
*ReturnedValue = (FHBBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  KMBBELA_close1(A68_242  Cr, void *NonLocals)
#define NL(x) (((LMBBELA_close1 *)NonLocals)->x)
{ 
A68_234 * MMBBELA_is;
A68_41  NMBBELA_ctn;
A68_237 * OMBBELA_ct;
A68_242  PMBBELA;  /* avoid structure result */
A68_INT * QMBBELA;  /* YIELD */
A_PROC_ENTRY(close1);
 /* line 877: */
 /* line 878: */
{ 
 /* line 879: */
if ( (Cr.Region!=BVJAELA_nilregion) )
{ 
 /* line 880: */
if ( ((*(&(Cr.Region->Ctno)))==0) )
{ 
MMBBELA_is = HEKAELA_get_imports(Cr);
 /* line 881: */
 /* line 882: */
for ( ;; )
{ 
 /* line 883: */
if ( !((MMBBELA_is!=GUJAELA_nilimports)) ) break;
NMBBELA_ctn = (*(&((&(MMBBELA_is->Binding))->Ctn)));
 /* line 884: */
OMBBELA_ct = UDKAELA_get_context((*(&((&NMBBELA_ctn)->Context))));
 /* line 885: */
AEKAELA_get_region( OMBBELA_ct, (*(&((&NMBBELA_ctn)->Import))), &PMBBELA );
A_CALLPROC(NL(JMBBELA_close1),(PMBBELA),(PMBBELA,(NL(JMBBELA_close1)).nonlocals));
 /* line 886: */
 /* line 887: */
MMBBELA_is = (*(&(MMBBELA_is->Rest)));
}
 /* line 888: */
 /* line 889: */
 /* line 890: */
 /* line 891: */
QMBBELA = (&(Cr.Region->Ctno)) ;
(*QMBBELA) = (*NL(FMBBELA_closureno))+=1;
} 
} 
} 
A_PROC_EXIT(close1);
return;
} 
#undef NL

A_STATIC A68_VOID  ZOBBELA_generator(A68_BOOL  XOBBELA_anonymous, A68_180  *ReturnedValue, void *NonLocals)
#define NL(x) (((APBBELA_generator *)NonLocals)->x)
{ 
A68_180  BPBBELA;  /* clause result */
A68_180  CPBBELA;  /* OPERATORS - dynamic generator */
{ 
CPBBELA.upb = (NL(WOBBELA_no_atts)+2) ;
( XOBBELA_anonymous? A_VLOC(A68_179 ,CPBBELA): A_VHEAP(A68_179 ,CPBBELA) );
BPBBELA = CPBBELA;
} 
*ReturnedValue = (BPBBELA);
return;
} 
#undef NL

A68_VOID  YOABELA_changecurrentct(A68_41  Ctn)
{ 
A68_41 * ZOABELA;  /* YIELD */
A68_VC  APABELA;  /* avoid structure result */
A68_VC  BPABELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC * CPABELA;  /* YIELD */
A_PROC_ENTRY(changecurrentct);
 /* line 118: */
 /* line 119: */
{ 
ZOABELA = (&(HXJAELA_library->Currentct)) ;
BAKAELA_ctos( (*ZOABELA) = Ctn, &APABELA );
(*SYJAELA_libprompt) = APABELA;
 /* line 120: */
if ( A_VC_EQ(Ctn.Import,A_HVEC(BPABELA,'?',A68_CHAR )) )
{ 
 /* line 121: */
CPABELA = (&((&(HXJAELA_library->Currentct))->Import)) ;
(*CPABELA) = TTCAOST_nullid;
} 
} 
A_PROC_EXIT(changecurrentct);
return;
} 
#undef NL

A68_VOID  EPABELA_makeprompt(A68_242  Cr, A68_41  *ReturnedValue)
{ 
A68_41  FPABELA;  /* collateral clause result */
A68_VC  GPABELA;  /* avoid structure result */
A68_41  HPABELA;  /* clause result */
A68_41  IPABELA;  /* avoid structure result */
A_PROC_ENTRY(makeprompt);
 /* line 124: */
 /* line 125: */
{ 
 /* line 126: */
if ( (Cr.Region==BVJAELA_nilregion) )
{ 
FPABELA.Context = (*(&(Cr.Context->Name)));
 /* line 127: */
 /* line 128: */
BTCAOST_makeid( '?', &GPABELA );
FPABELA.Import = GPABELA;
HPABELA = FPABELA;
} 
else
{ 
 /* line 129: */
NBKAELA_ctn( Cr, &IPABELA );
HPABELA = IPABELA;
} 
} 
A_PROC_EXIT(makeprompt);
*ReturnedValue = (HPABELA);
return;
} 
#undef NL

A68_VOID  LPABELA_putlibinfo(A68_INT  Version, A68_63  Msg)
{ 
A68_69  NPABELA_generator;   /* proc value of non-global proc */
A68_VC  TPABELA;  /* avoid structure result */
A68_VC  SPABELA_discbuff;
A68_115  VPABELA;  /* OPERATORS - mode -> union mode */
A68_206 * UPABELA_buffer;
A68_INT  WPABELA;  /* YIELD */
A68_VC  XPABELA;  /* avoid structure result */
A68_179  YPABELA;  /* avoid structure result */
A_PROC_ENTRY(putlibinfo);
 /* line 137: */
 /* line 138: */
{ 
A_CLOSURE( NPABELA_generator, OPABELA_generator, PPABELA_generator );
A_CALLPROC(NPABELA_generator,(A68_TRUE, &TPABELA),(A68_TRUE, &TPABELA,(NPABELA_generator).nonlocals));
SPABELA_discbuff = TPABELA;
 /* line 139: */
UPABELA_buffer = IFJAELA_startwrite(TYJAELA_discfile, A_UNITE(VPABELA,mode2,2,SPABELA_discbuff));
 /* line 140: */
YHJAELA_outint2(((FWJAELA_identification*100)+GWJAELA_markno), UPABELA_buffer, Msg);
 /* line 141: */
YHJAELA_outint2(Version, UPABELA_buffer, Msg);
 /* line 142: */
UIJAELA_outid2((*(&(HXJAELA_library->Datecleared))), UPABELA_buffer, Msg);
 /* line 143: */
UIJAELA_outid2((*(&(HXJAELA_library->Timecleared))), UPABELA_buffer, Msg);
 /* line 144: */
UIJAELA_outid2((*(&(HXJAELA_library->Datelastwritten))), UPABELA_buffer, Msg);
 /* line 145: */
UIJAELA_outid2((*(&(HXJAELA_library->Timelastwritten))), UPABELA_buffer, Msg);
 /* line 146: */
UIJAELA_outid2((*(&((&(HXJAELA_library->Currentct))->Context))), UPABELA_buffer, Msg);
 /* line 147: */
 /* line 148: */
WPABELA = (*SYJAELA_libprompt).upb ;
if ( ((*(&A_VINDEX((*SYJAELA_libprompt),WPABELA)))=='?') )
{ 
 /* line 149: */
BTCAOST_makeid( '?', &XPABELA );
UIJAELA_outid2(XPABELA, UPABELA_buffer, Msg);
} 
else
{ 
 /* line 150: */
UIJAELA_outid2((*(&((&(HXJAELA_library->Currentct))->Import))), UPABELA_buffer, Msg);
} 
 /* line 151: */
 /* line 152: */
CGJAELA_endwrite( UPABELA_buffer, Msg, &YPABELA );
(*WYJAELA_ptrlibinfo) = YPABELA;
} 
A_PROC_EXIT(putlibinfo);
return;
} 
#undef NL

A68_VOID  ZPABELA_getlibinfo(void)
{ 
A68_206 * AQABELA_buffer;
A68_INT  BQABELA_mark;
A68_INT * CQABELA;  /* YIELD */
A68_VC  DQABELA;  /* avoid structure result */
A68_VC * EQABELA;  /* YIELD */
A68_VC  FQABELA;  /* avoid structure result */
A68_VC * GQABELA;  /* YIELD */
A68_VC  HQABELA;  /* avoid structure result */
A68_VC * IQABELA;  /* YIELD */
A68_VC  JQABELA;  /* avoid structure result */
A68_VC * KQABELA;  /* YIELD */
A68_VC  LQABELA;  /* avoid structure result */
A68_VC * MQABELA;  /* YIELD */
A68_VC  NQABELA;  /* avoid structure result */
A68_VC * OQABELA;  /* YIELD */
A68_BOOL * PQABELA;  /* YIELD */
A_PROC_ENTRY(getlibinfo);
{ 
AQABELA_buffer = WYIAELA_readbuffer(TYJAELA_discfile, (*WYJAELA_ptrlibinfo));
 /* line 157: */
BQABELA_mark = YBJAELA_in2(AQABELA_buffer);
 /* line 158: */
CQABELA = (&(HXJAELA_library->Version)) ;
(*CQABELA) = YBJAELA_in2(AQABELA_buffer);
 /* line 159: */
CCJAELA_inid2( AQABELA_buffer, &DQABELA );
EQABELA = (&(HXJAELA_library->Datecleared)) ;
(*EQABELA) = DQABELA;
 /* line 160: */
CCJAELA_inid2( AQABELA_buffer, &FQABELA );
GQABELA = (&(HXJAELA_library->Timecleared)) ;
(*GQABELA) = FQABELA;
 /* line 161: */
CCJAELA_inid2( AQABELA_buffer, &HQABELA );
IQABELA = (&(HXJAELA_library->Datelastwritten)) ;
(*IQABELA) = HQABELA;
 /* line 162: */
CCJAELA_inid2( AQABELA_buffer, &JQABELA );
KQABELA = (&(HXJAELA_library->Timelastwritten)) ;
(*KQABELA) = JQABELA;
 /* line 163: */
CCJAELA_inid2( AQABELA_buffer, &LQABELA );
MQABELA = (&((&(HXJAELA_library->Currentct))->Context)) ;
(*MQABELA) = LQABELA;
 /* line 164: */
CCJAELA_inid2( AQABELA_buffer, &NQABELA );
OQABELA = (&((&(HXJAELA_library->Currentct))->Import)) ;
(*OQABELA) = NQABELA;
 /* line 165: */
PQABELA = (&(HXJAELA_library->Libchanged)) ;
(*PQABELA) = A68_FALSE;
 /* line 166: */
 /* line 167: */
YOABELA_changecurrentct((*(&(HXJAELA_library->Currentct))));
} 
A_PROC_EXIT(getlibinfo);
return;
} 
#undef NL

A68_VOID  SQABELA_writedecls(A68_238  Decls, A68_63  Msg, A68_179  *ReturnedValue)
{ 
A68_69  UQABELA_generator;   /* proc value of non-global proc */
A68_VC  ARABELA;  /* avoid structure result */
A68_VC  ZQABELA_discbuff;
A68_115  CRABELA;  /* OPERATORS - mode -> union mode */
A68_206 * BRABELA_buffer;
A68_232 * DRABELA_decl;
A68_INT  ERABELA;  /* forall loop counter */
A68_179  FRABELA;  /* clause result */
A68_179  GRABELA;  /* avoid structure result */
A_PROC_ENTRY(writedecls);
 /* line 171: */
 /* line 172: */
{ 
A_CLOSURE( UQABELA_generator, VQABELA_generator, WQABELA_generator );
A_CALLPROC(UQABELA_generator,(A68_TRUE, &ARABELA),(A68_TRUE, &ARABELA,(UQABELA_generator).nonlocals));
ZQABELA_discbuff = ARABELA;
 /* line 173: */
BRABELA_buffer = IFJAELA_startwrite(TYJAELA_discfile, A_UNITE(CRABELA,mode2,2,ZQABELA_discbuff));
 /* line 174: */
YHJAELA_outint2(Decls.upb, BRABELA_buffer, Msg);
 /* line 175: */
 /* line 176: */
ERABELA = Decls.upb -1;
DRABELA_decl = Decls.data;
for (;ERABELA-- >= 0;
(DRABELA_decl++
) )
{
AJJAELA_outbool((*(&(DRABELA_decl->Export))), BRABELA_buffer, Msg);
 /* line 177: */
YHJAELA_outint2((*(&(DRABELA_decl->Il))).upb, BRABELA_buffer, Msg);
 /* line 178: */
 /* line 179: */
LHJAELA_outchars((*(&(DRABELA_decl->Il))), BRABELA_buffer, Msg);
}
 /* line 180: */
 /* line 181: */
CGJAELA_endwrite( BRABELA_buffer, Msg, &GRABELA );
FRABELA = GRABELA;
} 
A_PROC_EXIT(writedecls);
*ReturnedValue = (FRABELA);
return;
} 
#undef NL

A_STATIC A68_VOID  JRABELA_putcontext(A68_237 * Ct, A68_63  Msg, A68_179  *ReturnedValue)
{ 
A68_238  KRABELA_decls;
A68_BOOL  LRABELA;  /* optbool result */
A68_291  NRABELA_generator;   /* proc value of non-global proc */
A68_180  TRABELA;  /* avoid structure result */
A68_180  SRABELA_dps;
A68_INT  URABELA;  /* YIELD */
A68_179  VRABELA;  /* avoid structure result */
A68_179 * WRABELA;  /* YIELD */
A68_179  XRABELA;  /* avoid structure result */
A68_179 * YRABELA;  /* YIELD */
A68_292  ZRABELA;  /* collateral clause result */
A68_46  ASABELA;  /* OPERATORS - istruct -> vector */
A68_179  BSABELA;  /* clause result */
A_PROC_ENTRY(putcontext);
 /* line 184: */
 /* line 186: */
{ 
KRABELA_decls = (*(&(Ct->Decls)));
 /* line 187: */
LRABELA = (*(&(Ct->Changed)));
if ( LRABELA )
{ /* line 188: */
LRABELA = ! A_VSTRUCTCOMP(KRABELA_decls,UUJAELA_nildecls);
}
if ( LRABELA )
{ 
A_CLOSURE( NRABELA_generator, ORABELA_generator, PRABELA_generator );
(( PRABELA_generator * ) ( NRABELA_generator.nonlocals )) -> Ct = Ct;
(( PRABELA_generator * ) ( NRABELA_generator.nonlocals )) -> Msg = Msg;
A_CALLPROC(NRABELA_generator,(A68_TRUE, &TRABELA),(A68_TRUE, &TRABELA,(NRABELA_generator).nonlocals));
SRABELA_dps = TRABELA;
 /* line 189: */
FFJAELA_myreaddiscptrs(TYJAELA_discfile, SRABELA_dps, (*(&(Ct->Val))), Msg);
 /* line 190: */
URABELA = 1 ;
SQABELA_writedecls( KRABELA_decls, Msg, &VRABELA );
WRABELA = (&A_VINDEX(SRABELA_dps,URABELA)) ;
(*WRABELA) = VRABELA;
 /* line 191: */
AEJAELA_mywritediscptrs( TYJAELA_discfile, SRABELA_dps, Msg, &XRABELA );
YRABELA = (&(Ct->Val)) ;
(*YRABELA) = XRABELA;
 /* line 192: */
ZRABELA.data[0] = (*JZJAELA_body_key);
ZRABELA.data[1] = (*MZJAELA_info_key);
ZRABELA.data[2] = (*PZJAELA_spacemap_key);
 /* line 194: */
RCWAELA_write_declattributes(Ct, A_HISVEC(ASABELA,ZRABELA,3,A68_INT ), Msg);
} 
 /* line 195: */
 /* line 196: */
BSABELA = (*(&(Ct->Val)));
} 
A_PROC_EXIT(putcontext);
*ReturnedValue = (BSABELA);
return;
} 
#undef NL

A68_VOID  KSABELA_putcontexts(A68_179 * Pcts, A68_179 * Pvals, A68_179 * Pinfo, A68_63  Msg)
{ 
A68_69  WSABELA_generator;   /* proc value of non-global proc */
A68_VC  CTABELA;  /* avoid structure result */
A68_VC  BTABELA_discbuff;
A68_115  ETABELA;  /* OPERATORS - mode -> union mode */
A68_206 * DTABELA_buffer;
A68_239 * FTABELA_c;
A68_INT  GTABELA_nocts;
A68_INT  HTABELA_noimps;
A68_236 * ITABELA_rs;
A68_234 * JTABELA_p;
A68_291  LTABELA_generator;   /* proc value of non-global proc */
A68_180  RTABELA;  /* avoid structure result */
A68_180  QTABELA_dps;
A68_INT  STABELA_dpsind;
A68_291  UTABELA_generator;   /* proc value of non-global proc */
A68_180  AUABELA;  /* avoid structure result */
A68_180  ZTABELA_info;
A68_INT  BUABELA_infoind;
A68_294  DUABELA_next_info;   /* proc value of non-global proc */
A68_INT  IUABELA;  /* YIELD */
A68_179  JUABELA;  /* avoid structure result */
A68_179 * KUABELA;  /* YIELD */
A68_179  LUABELA;  /* avoid structure result */
A68_179  MUABELA;  /* avoid structure result */
A68_179  NUABELA;  /* avoid structure result */
A_PROC_ENTRY(putcontexts);
 /* line 202: */
 /* line 203: */
{ 
 /* line 229: */
A_CLOSURE( WSABELA_generator, XSABELA_generator, YSABELA_generator );
A_CALLPROC(WSABELA_generator,(A68_TRUE, &CTABELA),(A68_TRUE, &CTABELA,(WSABELA_generator).nonlocals));
BTABELA_discbuff = CTABELA;
 /* line 230: */
DTABELA_buffer = IFJAELA_startwrite(TYJAELA_discfile, A_UNITE(ETABELA,mode2,2,BTABELA_discbuff));
 /* line 231: */
 /* line 232: */
if ( ((*(&(HXJAELA_library->Contexts)))==EVJAELA_nilcontexts) )
{ 
 /* line 233: */
(*Pcts) = (*Pvals) = UACAELA_nilptr;
} 
else
{ 
FTABELA_c = (*(&(HXJAELA_library->Contexts)));
 /* line 234: */
GTABELA_nocts = 0;
HTABELA_noimps = 0;
 /* line 235: */
for ( ;; )
{ 
 /* line 236: */
if ( !((FTABELA_c!=EVJAELA_nilcontexts)) ) break;
ITABELA_rs = (*(&((&(FTABELA_c->Context))->Regions)));
 /* line 237: */
for ( ;; )
{ 
 /* line 238: */
if ( !((ITABELA_rs!=CVJAELA_nilregions)) ) break;
JTABELA_p = (*(&((&(ITABELA_rs->Region))->Imports)));
 /* line 239: */
for ( ;; )
{ 
 /* line 240: */
if ( !((JTABELA_p!=GUJAELA_nilimports)) ) break;
HTABELA_noimps+=1;
JTABELA_p = (*(&(JTABELA_p->Rest)));
}
 /* line 241: */
 /* line 242: */
ITABELA_rs = (*(&(ITABELA_rs->Rest)));
}
 /* line 243: */
GTABELA_nocts+=1;
 /* line 244: */
FTABELA_c = (*(&(FTABELA_c->Rest)));
}
 /* line 245: */
A_CLOSURE( LTABELA_generator, MTABELA_generator, NTABELA_generator );
(( NTABELA_generator * ) ( LTABELA_generator.nonlocals )) -> GTABELA_nocts = (&GTABELA_nocts);
A_CALLPROC(LTABELA_generator,(A68_TRUE, &RTABELA),(A68_TRUE, &RTABELA,(LTABELA_generator).nonlocals));
QTABELA_dps = RTABELA;
STABELA_dpsind = 0;
 /* line 246: */
A_CLOSURE( UTABELA_generator, VTABELA_generator, WTABELA_generator );
(( WTABELA_generator * ) ( UTABELA_generator.nonlocals )) -> HTABELA_noimps = (&HTABELA_noimps);
A_CALLPROC(UTABELA_generator,(A68_TRUE, &AUABELA),(A68_TRUE, &AUABELA,(UTABELA_generator).nonlocals));
ZTABELA_info = AUABELA;
BUABELA_infoind = 0;
 /* line 247: */
A_CLOSURE( DUABELA_next_info, EUABELA_next_info, FUABELA_next_info );
(( FUABELA_next_info * ) ( DUABELA_next_info.nonlocals )) -> ZTABELA_info = ZTABELA_info;
(( FUABELA_next_info * ) ( DUABELA_next_info.nonlocals )) -> BUABELA_infoind = (&BUABELA_infoind);
 /* line 248: */
FTABELA_c = (*(&(HXJAELA_library->Contexts)));
 /* line 249: */
for ( ;; )
{ 
 /* line 250: */
if ( !((FTABELA_c!=EVJAELA_nilcontexts)) ) break;
IUABELA = STABELA_dpsind+=1 ;
JRABELA_putcontext( (&(FTABELA_c->Context)), Msg, &JUABELA );
KUABELA = (&A_VINDEX(QTABELA_dps,IUABELA)) ;
(*KUABELA) = JUABELA;
 /* line 251: */
QSABELA_outct((*(&(FTABELA_c->Context))), DUABELA_next_info, DTABELA_buffer, Msg);
 /* line 252: */
 /* line 253: */
FTABELA_c = (*(&(FTABELA_c->Rest)));
}
 /* line 254: */
AEJAELA_mywritediscptrs( TYJAELA_discfile, QTABELA_dps, Msg, &LUABELA );
(*Pvals) = LUABELA;
 /* line 255: */
YHJAELA_outint2(CSABELA_end, DTABELA_buffer, Msg);
 /* line 256: */
CGJAELA_endwrite( DTABELA_buffer, Msg, &MUABELA );
(*Pcts) = MUABELA;
 /* line 257: */
 /* line 258: */
 /* line 259: */
AEJAELA_mywritediscptrs( TYJAELA_discfile, ZTABELA_info, Msg, &NUABELA );
(*Pinfo) = NUABELA;
} 
} 
A_PROC_EXIT(putcontexts);
return;
} 
#undef NL

A68_239 * PUABELA_getcontexts(A68_63  Msg)
{ 
A68_239 * QUABELA;  /* clause result */
A68_180  RUABELA_vals;
A68_INT  SUABELA_valsind;
A68_291  UUABELA_generator;   /* proc value of non-global proc */
A68_180  AVABELA;  /* avoid structure result */
A68_180  ZUABELA_infoptrs;
A68_INT  BVABELA_ind;
A68_206 * CVABELA_ctinfo;
A68_291  EVABELA_generator;   /* proc value of non-global proc */
A68_180  JVABELA;  /* avoid structure result */
A68_297  LVABELA_imports;   /* proc value of non-global proc */
A68_298  CWABELA_regions;   /* proc value of non-global proc */
A68_299  MWABELA_contexts;   /* proc value of non-global proc */
A_PROC_ENTRY(getcontexts);
 /* line 262: */
 /* line 263: */
{ 
 /* line 264: */
 /* line 265: */
if ( UXIAELA_isnilptr(TYJAELA_discfile, (*YYJAELA_ptrcontexts)) )
{ 
 /* line 266: */
QUABELA = EVJAELA_nilcontexts;
} 
else
{ 
 /* line 267: */
A_CLOSURE( UUABELA_generator, VUABELA_generator, WUABELA_generator );
(( WUABELA_generator * ) ( UUABELA_generator.nonlocals )) -> Msg = Msg;
A_CALLPROC(UUABELA_generator,(A68_TRUE, &AVABELA),(A68_TRUE, &AVABELA,(UUABELA_generator).nonlocals));
ZUABELA_infoptrs = AVABELA;
 /* line 268: */
FFJAELA_myreaddiscptrs(TYJAELA_discfile, ZUABELA_infoptrs, (*AZJAELA_ptrimpinfo), Msg);
 /* line 269: */
BVABELA_ind = 0;
 /* line 270: */
CVABELA_ctinfo = WYIAELA_readbuffer(TYJAELA_discfile, (*YYJAELA_ptrcontexts));
 /* line 271: */
 /* line 272: */
if ( !UXIAELA_isnilptr(TYJAELA_discfile, (*CZJAELA_ptrctvalues)) )
{ 
 /* line 273: */
A_CLOSURE( EVABELA_generator, FVABELA_generator, GVABELA_generator );
(( GVABELA_generator * ) ( EVABELA_generator.nonlocals )) -> Msg = Msg;
A_CALLPROC(EVABELA_generator,(A68_FALSE, &JVABELA),(A68_FALSE, &JVABELA,(EVABELA_generator).nonlocals));
RUABELA_vals = JVABELA;
 /* line 274: */
SUABELA_valsind = 0;
 /* line 275: */
 /* line 276: */
FFJAELA_myreaddiscptrs(TYJAELA_discfile, RUABELA_vals, (*CZJAELA_ptrctvalues), Msg);
} 
 /* line 278: */
A_CLOSURE( LVABELA_imports, MVABELA_imports, NVABELA_imports );
(( NVABELA_imports * ) ( LVABELA_imports.nonlocals )) -> ZUABELA_infoptrs = ZUABELA_infoptrs;
(( NVABELA_imports * ) ( LVABELA_imports.nonlocals )) -> BVABELA_ind = (&BVABELA_ind);
(( NVABELA_imports * ) ( LVABELA_imports.nonlocals )) -> LVABELA_imports = LVABELA_imports;
 /* line 290: */
A_CLOSURE( CWABELA_regions, DWABELA_regions, EWABELA_regions );
(( EWABELA_regions * ) ( CWABELA_regions.nonlocals )) -> LVABELA_imports = LVABELA_imports;
(( EWABELA_regions * ) ( CWABELA_regions.nonlocals )) -> CWABELA_regions = CWABELA_regions;
 /* line 299: */
A_CLOSURE( MWABELA_contexts, NWABELA_contexts, OWABELA_contexts );
(( OWABELA_contexts * ) ( MWABELA_contexts.nonlocals )) -> CWABELA_regions = CWABELA_regions;
(( OWABELA_contexts * ) ( MWABELA_contexts.nonlocals )) -> RUABELA_vals = (&RUABELA_vals);
(( OWABELA_contexts * ) ( MWABELA_contexts.nonlocals )) -> SUABELA_valsind = (&SUABELA_valsind);
(( OWABELA_contexts * ) ( MWABELA_contexts.nonlocals )) -> MWABELA_contexts = MWABELA_contexts;
 /* line 312: */
 /* line 313: */
 /* line 314: */
QUABELA = A_CALLPROC(MWABELA_contexts,(CVABELA_ctinfo),(CVABELA_ctinfo,(MWABELA_contexts).nonlocals));
} 
} 
A_PROC_EXIT(getcontexts);
return( QUABELA );
} 
#undef NL

A_STATIC A68_VOID  YWABELA_refreshcontexts(A68_63  Msg)
{ 
A68_291  AXABELA_generator;   /* proc value of non-global proc */
A68_180  GXABELA;  /* avoid structure result */
A68_180  FXABELA_vals;
A68_INT  HXABELA_valsind;
A68_291  JXABELA_generator;   /* proc value of non-global proc */
A68_180  PXABELA;  /* avoid structure result */
A68_180  OXABELA_infoptrs;
A68_INT  QXABELA_ind;
A68_236 * RXABELA_r;
A68_234 * SXABELA_i;
A68_239 * TXABELA_c;
A68_INT  UXABELA;  /* YIELD */
A68_179 * VXABELA;  /* YIELD */
A68_238 * WXABELA;  /* YIELD */
A68_INT  XXABELA;  /* YIELD */
A68_179 * YXABELA;  /* YIELD */
A68_BOOL  ZXABELA;  /* optbool result */
A_PROC_ENTRY(refreshcontexts);
 /* line 317: */
 /* line 318: */
{ 
A_CLOSURE( AXABELA_generator, BXABELA_generator, CXABELA_generator );
(( CXABELA_generator * ) ( AXABELA_generator.nonlocals )) -> Msg = Msg;
A_CALLPROC(AXABELA_generator,(A68_TRUE, &GXABELA),(A68_TRUE, &GXABELA,(AXABELA_generator).nonlocals));
FXABELA_vals = GXABELA;
 /* line 319: */
FFJAELA_myreaddiscptrs(TYJAELA_discfile, FXABELA_vals, (*CZJAELA_ptrctvalues), Msg);
 /* line 320: */
HXABELA_valsind = 0;
 /* line 321: */
A_CLOSURE( JXABELA_generator, KXABELA_generator, LXABELA_generator );
(( LXABELA_generator * ) ( JXABELA_generator.nonlocals )) -> Msg = Msg;
A_CALLPROC(JXABELA_generator,(A68_TRUE, &PXABELA),(A68_TRUE, &PXABELA,(JXABELA_generator).nonlocals));
OXABELA_infoptrs = PXABELA;
 /* line 322: */
FFJAELA_myreaddiscptrs(TYJAELA_discfile, OXABELA_infoptrs, (*AZJAELA_ptrimpinfo), Msg);
 /* line 323: */
QXABELA_ind = 0;
 /* line 324: */
 /* line 325: */
TXABELA_c = (*(&(HXJAELA_library->Contexts)));
 /* line 326: */
for ( ;; )
{ 
 /* line 327: */
if ( !((TXABELA_c!=EVJAELA_nilcontexts)) ) break;
UXABELA = HXABELA_valsind+=1 ;
VXABELA = (&((&(TXABELA_c->Context))->Val)) ;
(*VXABELA) = (*(&A_VINDEX(FXABELA_vals,UXABELA)));
 /* line 328: */
WXABELA = (&((&(TXABELA_c->Context))->Decls)) ;
(*WXABELA) = UUJAELA_nildecls;
 /* line 329: */
RXABELA_r = (*(&((&(TXABELA_c->Context))->Regions)));
 /* line 330: */
for ( ;; )
{ 
 /* line 331: */
if ( !((RXABELA_r!=CVJAELA_nilregions)) ) break;
SXABELA_i = (*(&((&(RXABELA_r->Region))->Imports)));
 /* line 332: */
for ( ;; )
{ 
 /* line 333: */
if ( !((SXABELA_i!=GUJAELA_nilimports)) ) break;
XXABELA = QXABELA_ind+=1 ;
YXABELA = (&((&(SXABELA_i->Binding))->Info)) ;
(*YXABELA) = (*(&A_VINDEX(OXABELA_infoptrs,XXABELA)));
 /* line 334: */
 /* line 335: */
SXABELA_i = (*(&(SXABELA_i->Rest)));
}
 /* line 336: */
 /* line 337: */
RXABELA_r = (*(&(RXABELA_r->Rest)));
}
 /* line 338: */
 /* line 339: */
TXABELA_c = (*(&(TXABELA_c->Rest)));
}
 /* line 340: */
ZXABELA = (QXABELA_ind!=OXABELA_infoptrs.upb);
if ( ! ZXABELA )
{ /* line 341: */
ZXABELA = (HXABELA_valsind!=FXABELA_vals.upb);
}
if ( ZXABELA )
{ 
 /* line 342: */
 /* line 343: */
NKDAOST_sysfault(BYABELA);
} 
} 
A_PROC_EXIT(refreshcontexts);
return;
} 
#undef NL

A_STATIC A68_VOID  VYABELA_integer(A68_206 * Buffer)
{ 
A68_INT  WYABELA_ii;
A68_INT  XYABELA;  /* clause result */
A68_VC  YYABELA;  /* avoid structure result */
A_PROC_ENTRY(integer);
 /* line 354: */
{ 
WYABELA_ii = YBJAELA_in2(Buffer);
 /* line 355: */
XYABELA = WYABELA_ii;
switch ( XYABELA )
{ 
case 1: 
 /* line 356: */
YBJAELA_in2(Buffer);
break;
case 2: 
 /* line 357: */
YBJAELA_in2(Buffer);
break;
case 3: 
{ 
YBJAELA_in2(Buffer);
VYABELA_integer(Buffer);
 /* line 358: */
VYABELA_integer(Buffer);
} 
break;
case 4: 
{ 
YBJAELA_in2(Buffer);
 /* line 359: */
VYABELA_integer(Buffer);
} 
break;
case 5: 
{ 
VYABELA_integer(Buffer);
VYABELA_integer(Buffer);
 /* line 360: */
VYABELA_integer(Buffer);
} 
break;
case 6: 
 /* line 361: */
YBJAELA_in2(Buffer);
break;
case 7: 
 /* line 362: */
YBJAELA_in2(Buffer);
break;
case 8: 
{ 
YBJAELA_in2(Buffer);
VYABELA_integer(Buffer);
 /* line 363: */
VYABELA_integer(Buffer);
} 
break;
case 9: 
{ 
YBJAELA_in2(Buffer);
 /* line 364: */
CCJAELA_inid2( Buffer, &YYABELA );
YYABELA;
} 
break;
default: 
 /* line 365: */
if ( (WYABELA_ii==CYABELA_idef) )
{ 
 /* line 366: */
YBJAELA_in2(Buffer);
} 
else
{ 
 /* line 367: */
if ( (WYABELA_ii==DYABELA_ibracket) )
{ 
 /* line 368: */
 /* line 369: */
VYABELA_integer(Buffer);
} 
else
{ 
 /* line 370: */
/*SKIP*/;
} 
} 
break;
} 
} 
A_PROC_EXIT(integer);
return;
} 
#undef NL

A_STATIC A68_BOOL  AZABELA_type(A68_206 * Buffer)
{ 
A68_BOOL  BZABELA_endfound;
A68_INT  CZABELA_ii;
A68_INT  DZABELA;  /* clause result */
A68_BOOL  EZABELA_stop;
A68_BOOL  FZABELA_stop;
A68_VC  GZABELA;  /* avoid structure result */
A68_VC  HZABELA;  /* avoid structure result */
A68_VC  IZABELA;  /* avoid structure result */
A68_BOOL  JZABELA_stop;
A68_INT  KZABELA_charsort;
A68_VC  LZABELA;  /* avoid structure result */
A68_VC  MZABELA;  /* avoid structure result */
A68_VC  NZABELA;  /* avoid structure result */
A68_BOOL  OZABELA;  /* clause result */
A_PROC_ENTRY(type);
 /* line 375: */
 /* line 376: */
{ 
BZABELA_endfound = A68_FALSE;
 /* line 377: */
{ 
CZABELA_ii = YBJAELA_in2(Buffer);
 /* line 378: */
DZABELA = (CZABELA_ii-9);
switch ( DZABELA )
{ 
case 1: 
 /* line 379: */
/*SKIP*/;
break;
case 2: 
 /* line 380: */
YBJAELA_in2(Buffer);
break;
case 3: 
{ 
VYABELA_integer(Buffer);
 /* line 381: */
AZABELA_type(Buffer);
} 
break;
case 4: 
{ 
EZABELA_stop = A68_FALSE;
 /* line 382: */
for ( ;; )
{ 
if ( !(!EZABELA_stop) ) break;
EZABELA_stop = AZABELA_type(Buffer);
}
 /* line 383: */
} 
break;
case 5: 
 /* line 384: */
YBJAELA_in2(Buffer);
break;
case 6: 
{ 
AZABELA_type(Buffer);
 /* line 385: */
AZABELA_type(Buffer);
} 
break;
default: 
 /* line 386: */
if ( (CZABELA_ii==EYABELA_tbracket) )
{ 
 /* line 387: */
AZABELA_type(Buffer);
} 
else
{ 
 /* line 388: */
if ( (CZABELA_ii==FYABELA_tstring) )
{ 
VYABELA_integer(Buffer);
 /* line 389: */
AZABELA_type(Buffer);
} 
else
{ 
 /* line 390: */
if ( (CZABELA_ii==HYABELA_pidalts) )
{ 
FZABELA_stop = A68_FALSE;
 /* line 391: */
for ( ;; )
{ 
 /* line 392: */
if ( !(!FZABELA_stop) ) break;
FZABELA_stop = AZABELA_type(Buffer);
 /* line 393: */
if ( !FZABELA_stop )
{ 
 /* line 394: */
CCJAELA_inid2( Buffer, &GZABELA );
GZABELA;
} 
}
 /* line 395: */
} 
else
{ 
 /* line 396: */
if ( (CZABELA_ii==IYABELA_prange) )
{ 
CCJAELA_inid2( Buffer, &HZABELA );
HZABELA;
VYABELA_integer(Buffer);
 /* line 397: */
VYABELA_integer(Buffer);
} 
else
{ 
 /* line 398: */
if ( (CZABELA_ii==JYABELA_pstring) )
{ 
CCJAELA_inid2( Buffer, &IZABELA );
IZABELA;
YBJAELA_in2(Buffer);
 /* line 399: */
JZABELA_stop = A68_FALSE;
 /* line 400: */
for ( ;; )
{ 
 /* line 401: */
if ( !(!JZABELA_stop) ) break;
KZABELA_charsort = YBJAELA_in2(Buffer);
 /* line 402: */
 /* line 403: */
switch ( (KZABELA_charsort-JYABELA_pstring) )
{ 
case 1: 
 /* line 404: */
CCJAELA_inid2( Buffer, &LZABELA );
LZABELA;
break;
case 2: 
{ 
CCJAELA_inid2( Buffer, &MZABELA );
MZABELA;
 /* line 405: */
CCJAELA_inid2( Buffer, &NZABELA );
NZABELA;
} 
break;
default: 
 /* line 406: */
 /* line 407: */
JZABELA_stop = A68_TRUE;
break;
} 
}
 /* line 408: */
} 
else
{ 
 /* line 409: */
if ( (CZABELA_ii==OYABELA_end_tok) )
{ 
 /* line 410: */
 /* line 411: */
BZABELA_endfound = A68_TRUE;
} 
else
{ 
 /* line 412: */
/*SKIP*/;
} 
} 
} 
} 
} 
} 
break;
} 
} 
 /* line 413: */
 /* line 414: */
OZABELA = BZABELA_endfound;
} 
A_PROC_EXIT(type);
return( OZABELA );
} 
#undef NL

A_STATIC A68_VOID  QZABELA_skipattrs(A68_206 * Buffer)
{ 
A68_INT  ZZABELA_attsort;
A68_INT  AABBELA_sort;
A68_BOOL  BABBELA;  /* clause result */
A_PROC_ENTRY(skipattrs);
 /* line 417: */
 /* line 418: */
{ 
 /* line 423: */
ZZABELA_attsort = YBJAELA_in2(Buffer);
 /* line 424: */
 /* line 425: */
if ( (ZZABELA_attsort==PYABELA_attid) )
{ 
 /* line 426: */
YBJAELA_in2(Buffer);
} 
else
{ 
 /* line 427: */
if ( (ZZABELA_attsort==QYABELA_attdata) )
{ 
 /* line 428: */
TZABELA_skipdata(Buffer);
} 
else
{ 
 /* line 429: */
if ( (ZZABELA_attsort==RYABELA_attbracket) )
{ 
 /* line 430: */
QZABELA_skipattrs(Buffer);
} 
else
{ 
 /* line 431: */
if ( (ZZABELA_attsort==SYABELA_attstr) )
{ 
for ( ;; )
{ 
AABBELA_sort = YBJAELA_in2(Buffer);
BABBELA = (AABBELA_sort!=TYABELA_zero);
if ( !BABBELA ) break;
QZABELA_skipattrs(Buffer);
}
 /* line 432: */
 /* line 433: */
} 
else
{ 
 /* line 434: */
/*SKIP*/;
} 
} 
} 
} 
} 
A_PROC_EXIT(skipattrs);
return;
} 
#undef NL

A_STATIC A68_VOID  FABBELA_fnspec(A68_206 * Buffer, A68_INT * Sort, A68_VC  *ReturnedValue)
{ 
A68_VC  GABBELA;  /* avoid structure result */
A68_VC  HABBELA_id;
A68_VC  IABBELA;  /* avoid structure result */
A68_VC  JABBELA;  /* avoid structure result */
A68_VC  KABBELA;  /* clause result */
A_PROC_ENTRY(fnspec);
 /* line 439: */
 /* line 440: */
{ 
CCJAELA_inid2( Buffer, &GABBELA );
HABBELA_id = GABBELA;
 /* line 441: */
YBJAELA_in2(Buffer);
 /* line 442: */
if ( (YBJAELA_in2(Buffer)==1) )
{ 
(*Sort) = OVJAELA_kmac;
} 
 /* line 443: */
A_CALLPROC(CABBELA_skipmacspec,(Buffer),(Buffer,(CABBELA_skipmacspec).nonlocals));
 /* line 444: */
QZABELA_skipattrs(Buffer);
 /* line 445: */
YBJAELA_in2(Buffer);
 /* line 446: */
for ( ;; )
{ 
 /* line 447: */
if ( !(!AZABELA_type(Buffer)) ) break;
for ( ;; )
{ 
if ( !((YBJAELA_in2(Buffer)!=TYABELA_zero)) ) break;
CCJAELA_inid2( Buffer, &IABBELA );
IABBELA;
}
}
 /* line 448: */
for ( ;; )
{ 
 /* line 449: */
if ( !(!AZABELA_type(Buffer)) ) break;
for ( ;; )
{ 
if ( !((YBJAELA_in2(Buffer)!=TYABELA_zero)) ) break;
CCJAELA_inid2( Buffer, &JABBELA );
JABBELA;
}
}
 /* line 450: */
 /* line 451: */
KABBELA = HABBELA_id;
} 
A_PROC_EXIT(fnspec);
*ReturnedValue = (KABBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  MABBELA_anonymous(A68_206 * Buffer)
{ 
A68_INT  NABBELA;  /* to part of loop */
A68_INT  OABBELA;  /* loop control */
A68_INT  PABBELA_macsort;
A68_VC  QABBELA;  /* avoid structure result */
A68_VC  RABBELA;  /* avoid structure result */
A68_VC  SABBELA;  /* avoid structure result */
A68_VC  TABBELA;  /* avoid structure result */
A68_VC  UABBELA;  /* avoid structure result */
 /* line 454: */
 /* line 455: */
 /* line 456: */
NABBELA = YBJAELA_in2(Buffer);
for ( OABBELA = 1;
OABBELA <= NABBELA;
OABBELA += 1 )
{ 
YBJAELA_in2(Buffer);
 /* line 457: */
PABBELA_macsort = YBJAELA_in2(Buffer);
 /* line 458: */
 /* line 459: */
if ( (PABBELA_macsort==KYABELA_attrname) )
{ 
CCJAELA_inid2( Buffer, &QABBELA );
QABBELA;
YBJAELA_in2(Buffer);
 /* line 460: */
YBJAELA_in2(Buffer);
} 
else
{ 
 /* line 461: */
if ( (PABBELA_macsort==LYABELA_intname) )
{ 
CCJAELA_inid2( Buffer, &RABBELA );
RABBELA;
YBJAELA_in2(Buffer);
YBJAELA_in2(Buffer);
 /* line 462: */
YBJAELA_in2(Buffer);
} 
else
{ 
 /* line 463: */
if ( (PABBELA_macsort==GYABELA_typename) )
{ 
CCJAELA_inid2( Buffer, &SABBELA );
SABBELA;
YBJAELA_in2(Buffer);
YBJAELA_in2(Buffer);
 /* line 464: */
AZABELA_type(Buffer);
} 
else
{ 
 /* line 465: */
if ( (PABBELA_macsort==MYABELA_constname) )
{ 
CCJAELA_inid2( Buffer, &TABBELA );
TABBELA;
YBJAELA_in2(Buffer);
YBJAELA_in2(Buffer);
 /* line 466: */
YBJAELA_in2(Buffer);
 /* line 467: */
AZABELA_type(Buffer);
} 
else
{ 
 /* line 468: */
if ( (PABBELA_macsort==NYABELA_fnstart) )
{ 
YBJAELA_in2(Buffer);
FABBELA_fnspec( Buffer, (&PABBELA_macsort), &UABBELA );
UABBELA;
 /* line 469: */
 /* line 470: */
YBJAELA_in2(Buffer);
} 
} 
} 
} 
} 
}
 /* line 471: */
return;
} 
#undef NL

A68_VOID  XABBELA_indecls(A68_238  Decls)
{ 
A68_231 * YABBELA_u;
A68_303  CBBBELA_inuses;   /* proc value of non-global proc */
A68_232 * PBBBELA_decl;
A68_INT  QBBBELA;  /* forall loop counter */
A68_69  SBBBELA_generator;   /* proc value of non-global proc */
A68_VC  YBBBELA;  /* avoid structure result */
A68_VC  XBBBELA_discbuff;
A68_VC  ZBBBELA;  /* OPERATORS - assign op */
A68_115  BCBBELA;  /* OPERATORS - mode -> union mode */
A68_206 * ACBBELA_buffer;
A68_INT * CCBBELA;  /* YIELD */
A68_BOOL * DCBBELA;  /* YIELD */
A68_47  ECBBELA;  /* OPERATORS - nil -> mode */
A68_47 * FCBBELA;  /* YIELD */
A68_INT * GCBBELA;  /* YIELD */
A68_VC  HCBBELA;  /* avoid structure result */
A68_VC * ICBBELA;  /* YIELD */
A68_INT * JCBBELA;  /* YIELD */
A68_231 * KCBBELA;  /* clause result */
A68_VC  LCBBELA;  /* avoid structure result */
A68_VC * MCBBELA;  /* YIELD */
A68_INT * NCBBELA;  /* YIELD */
A68_INT  OCBBELA;  /* to part of loop */
A68_INT  PCBBELA;  /* loop control */
A68_VC  QCBBELA;  /* avoid structure result */
A68_VC * RCBBELA;  /* YIELD */
A68_INT * SCBBELA;  /* YIELD */
A68_BOOL * TCBBELA;  /* YIELD */
A68_VC  UCBBELA;  /* avoid structure result */
A68_VC * VCBBELA;  /* YIELD */
A68_INT * WCBBELA;  /* YIELD */
A68_VC  XCBBELA;  /* avoid structure result */
A68_VC * YCBBELA;  /* YIELD */
A68_INT * ZCBBELA;  /* YIELD */
A68_231 ** ADBBELA;  /* YIELD */
A_PROC_ENTRY(indecls);
 /* line 475: */
 /* line 476: */
{ 
 /* line 478: */
A_CLOSURE( CBBBELA_inuses, DBBBELA_inuses, EBBBELA_inuses );
(( EBBBELA_inuses * ) ( CBBBELA_inuses.nonlocals )) -> CBBBELA_inuses = CBBBELA_inuses;
 /* line 503: */
 /* line 504: */
QBBBELA = Decls.upb -1;
PBBBELA_decl = Decls.data;
for (;QBBBELA-- >= 0;
(PBBBELA_decl++
) )
{
A_CLOSURE( SBBBELA_generator, TBBBELA_generator, UBBBELA_generator );
(( UBBBELA_generator * ) ( SBBBELA_generator.nonlocals )) -> PBBBELA_decl = PBBBELA_decl;
A_CALLPROC(SBBBELA_generator,(A68_TRUE, &YBBBELA),(A68_TRUE, &YBBBELA,(SBBBELA_generator).nonlocals));
XBBBELA_discbuff = YBBBELA;
 /* line 505: */
ZBBBELA = (*(&(PBBBELA_decl->Il))) ;
A_VASSIGN2(ZBBBELA,XBBBELA_discbuff,A68_CHAR );
 /* line 506: */
ACBBELA_buffer = IFJAELA_startwrite(TYJAELA_discfile, A_UNITE(BCBBELA,mode2,2,XBBBELA_discbuff));
 /* line 507: */
CCBBELA = (&(PBBBELA_decl->Sort)) ;
(*CCBBELA) = YBJAELA_in2(ACBBELA_buffer);
 /* line 508: */
DCBBELA = (&(PBBBELA_decl->Import)) ;
(*DCBBELA) = A68_FALSE;
FCBBELA = (&(PBBBELA_decl->Assemble)) ;
(*FCBBELA) = A_VVAC(ECBBELA);
 /* line 509: */
GCBBELA = (&(PBBBELA_decl->Status)) ;
(*GCBBELA) = 0;
 /* line 511: */
 /* line 512: */
 /* line 514: */
switch ( ((*(&(PBBBELA_decl->Sort)))-64) )
{ 
case 1: 
{ 
CCJAELA_inid2( ACBBELA_buffer, &HCBBELA );
ICBBELA = (&(PBBBELA_decl->Name)) ;
(*ICBBELA) = HCBBELA;
 /* line 515: */
JCBBELA = (&(PBBBELA_decl->Version)) ;
(*JCBBELA) = YBJAELA_in2(ACBBELA_buffer);
 /* line 516: */
YBJAELA_in2(ACBBELA_buffer);
YBJAELA_in2(ACBBELA_buffer);
YBJAELA_in2(ACBBELA_buffer);
 /* line 517: */
YABBELA_u = A_CALLPROC(CBBBELA_inuses,(ACBBELA_buffer, NVJAELA_kattr, (A68_231 *)A68_NIL),(ACBBELA_buffer, NVJAELA_kattr, (A68_231 *)A68_NIL,(CBBBELA_inuses).nonlocals));
 /* line 518: */
YABBELA_u = A_CALLPROC(CBBBELA_inuses,(ACBBELA_buffer, KVJAELA_kint, YABBELA_u),(ACBBELA_buffer, KVJAELA_kint, YABBELA_u,(CBBBELA_inuses).nonlocals));
 /* line 519: */
 /* line 520: */
 /* line 522: */
KCBBELA = A_CALLPROC(CBBBELA_inuses,(ACBBELA_buffer, JVJAELA_ktype, YABBELA_u),(ACBBELA_buffer, JVJAELA_ktype, YABBELA_u,(CBBBELA_inuses).nonlocals));
} 
break;
case 2: 
{ 
CCJAELA_inid2( ACBBELA_buffer, &LCBBELA );
MCBBELA = (&(PBBBELA_decl->Name)) ;
(*MCBBELA) = LCBBELA;
 /* line 523: */
NCBBELA = (&(PBBBELA_decl->Version)) ;
(*NCBBELA) = YBJAELA_in2(ACBBELA_buffer);
 /* line 524: */
YBJAELA_in2(ACBBELA_buffer);
YBJAELA_in2(ACBBELA_buffer);
 /* line 525: */
YABBELA_u = A_CALLPROC(CBBBELA_inuses,(ACBBELA_buffer, NVJAELA_kattr, (A68_231 *)A68_NIL),(ACBBELA_buffer, NVJAELA_kattr, (A68_231 *)A68_NIL,(CBBBELA_inuses).nonlocals));
 /* line 526: */
 /* line 527: */
 /* line 529: */
KCBBELA = A_CALLPROC(CBBBELA_inuses,(ACBBELA_buffer, KVJAELA_kint, YABBELA_u),(ACBBELA_buffer, KVJAELA_kint, YABBELA_u,(CBBBELA_inuses).nonlocals));
} 
break;
case 3: 
{ 
OCBBELA = (YBJAELA_in2(ACBBELA_buffer)*3);
for ( PCBBELA = 1;
PCBBELA <= OCBBELA;
PCBBELA += 1 )
{ 
YBJAELA_in2(ACBBELA_buffer);
}
 /* line 530: */
YBJAELA_in2(ACBBELA_buffer);
 /* line 531: */
YBJAELA_in2(ACBBELA_buffer);
YBJAELA_in2(ACBBELA_buffer);
YBJAELA_in2(ACBBELA_buffer);
YBJAELA_in2(ACBBELA_buffer);
 /* line 532: */
YABBELA_u = A_CALLPROC(CBBBELA_inuses,(ACBBELA_buffer, NVJAELA_kattr, (A68_231 *)A68_NIL),(ACBBELA_buffer, NVJAELA_kattr, (A68_231 *)A68_NIL,(CBBBELA_inuses).nonlocals));
 /* line 533: */
YABBELA_u = A_CALLPROC(CBBBELA_inuses,(ACBBELA_buffer, KVJAELA_kint, YABBELA_u),(ACBBELA_buffer, KVJAELA_kint, YABBELA_u,(CBBBELA_inuses).nonlocals));
 /* line 534: */
YABBELA_u = A_CALLPROC(CBBBELA_inuses,(ACBBELA_buffer, JVJAELA_ktype, YABBELA_u),(ACBBELA_buffer, JVJAELA_ktype, YABBELA_u,(CBBBELA_inuses).nonlocals));
 /* line 535: */
YABBELA_u = A_CALLPROC(CBBBELA_inuses,(ACBBELA_buffer, MVJAELA_kconst, YABBELA_u),(ACBBELA_buffer, MVJAELA_kconst, YABBELA_u,(CBBBELA_inuses).nonlocals));
 /* line 536: */
YABBELA_u = A_CALLPROC(CBBBELA_inuses,(ACBBELA_buffer, LVJAELA_kfn, YABBELA_u),(ACBBELA_buffer, LVJAELA_kfn, YABBELA_u,(CBBBELA_inuses).nonlocals));
 /* line 537: */
FABBELA_fnspec( ACBBELA_buffer, (&(PBBBELA_decl->Sort)), &QCBBELA );
RCBBELA = (&(PBBBELA_decl->Name)) ;
(*RCBBELA) = QCBBELA;
 /* line 538: */
SCBBELA = (&(PBBBELA_decl->Version)) ;
(*SCBBELA) = YBJAELA_in2(ACBBELA_buffer);
 /* line 539: */
TCBBELA = (&(PBBBELA_decl->Import)) ;
(*TCBBELA) = (YBJAELA_in2(ACBBELA_buffer)==1);
 /* line 540: */
 /* line 541: */
 /* line 543: */
KCBBELA = YABBELA_u;
} 
break;
case 4: 
{ 
CCJAELA_inid2( ACBBELA_buffer, &UCBBELA );
VCBBELA = (&(PBBBELA_decl->Name)) ;
(*VCBBELA) = UCBBELA;
 /* line 544: */
WCBBELA = (&(PBBBELA_decl->Version)) ;
(*WCBBELA) = YBJAELA_in2(ACBBELA_buffer);
 /* line 545: */
YBJAELA_in2(ACBBELA_buffer);
YBJAELA_in2(ACBBELA_buffer);
YBJAELA_in2(ACBBELA_buffer);
YBJAELA_in2(ACBBELA_buffer);
 /* line 546: */
YABBELA_u = A_CALLPROC(CBBBELA_inuses,(ACBBELA_buffer, NVJAELA_kattr, (A68_231 *)A68_NIL),(ACBBELA_buffer, NVJAELA_kattr, (A68_231 *)A68_NIL,(CBBBELA_inuses).nonlocals));
 /* line 547: */
YABBELA_u = A_CALLPROC(CBBBELA_inuses,(ACBBELA_buffer, KVJAELA_kint, YABBELA_u),(ACBBELA_buffer, KVJAELA_kint, YABBELA_u,(CBBBELA_inuses).nonlocals));
 /* line 548: */
YABBELA_u = A_CALLPROC(CBBBELA_inuses,(ACBBELA_buffer, JVJAELA_ktype, YABBELA_u),(ACBBELA_buffer, JVJAELA_ktype, YABBELA_u,(CBBBELA_inuses).nonlocals));
 /* line 549: */
 /* line 550: */
 /* line 552: */
KCBBELA = A_CALLPROC(CBBBELA_inuses,(ACBBELA_buffer, MVJAELA_kconst, YABBELA_u),(ACBBELA_buffer, MVJAELA_kconst, YABBELA_u,(CBBBELA_inuses).nonlocals));
} 
break;
case 5: 
{ 
CCJAELA_inid2( ACBBELA_buffer, &XCBBELA );
YCBBELA = (&(PBBBELA_decl->Name)) ;
(*YCBBELA) = XCBBELA;
 /* line 553: */
ZCBBELA = (&(PBBBELA_decl->Version)) ;
(*ZCBBELA) = YBJAELA_in2(ACBBELA_buffer);
 /* line 554: */
YBJAELA_in2(ACBBELA_buffer);
 /* line 555: */
 /* line 556: */
 /* line 557: */
 /* line 558: */
KCBBELA = A_CALLPROC(CBBBELA_inuses,(ACBBELA_buffer, NVJAELA_kattr, (A68_231 *)A68_NIL),(ACBBELA_buffer, NVJAELA_kattr, (A68_231 *)A68_NIL,(CBBBELA_inuses).nonlocals));
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
ADBBELA = (&(PBBBELA_decl->Uses)) ;
(*ADBBELA) = KCBBELA;
}
 /* line 559: */
} 
A_PROC_EXIT(indecls);
return;
} 
#undef NL

A68_VOID  DDBBELA_readdecls(A68_237 * Ct, A68_63  Msg, A68_238  *ReturnedValue)
{ 
A68_238  EDBBELA;  /* clause result */
A68_291  GDBBELA_generator;   /* proc value of non-global proc */
A68_180  MDBBELA;  /* avoid structure result */
A68_180  LDBBELA_dps;
A68_INT  ODBBELA;  /* YIELD */
A68_206 * NDBBELA_buffer;
A68_305  QDBBELA_generator;   /* proc value of non-global proc */
A68_238  VDBBELA;  /* avoid structure result */
A68_238  WDBBELA_decls;
A68_232 * XDBBELA_decl;
A68_INT  YDBBELA;  /* forall loop counter */
A68_BOOL * ZDBBELA;  /* YIELD */
A68_69  BEBBELA_generator;   /* proc value of non-global proc */
A68_VC  GEBBELA;  /* avoid structure result */
A68_VC  HEBBELA_il;
A68_VC * IEBBELA;  /* YIELD */
A_PROC_ENTRY(readdecls);
 /* line 562: */
 /* line 563: */
 /* line 564: */
if ( ZBKAELA_no_text(Ct, Msg) )
{ 
EDBBELA = RUJAELA_nodecls;
} 
else
{ 
A_CLOSURE( GDBBELA_generator, HDBBELA_generator, IDBBELA_generator );
(( IDBBELA_generator * ) ( GDBBELA_generator.nonlocals )) -> Ct = Ct;
(( IDBBELA_generator * ) ( GDBBELA_generator.nonlocals )) -> Msg = Msg;
A_CALLPROC(GDBBELA_generator,(A68_TRUE, &MDBBELA),(A68_TRUE, &MDBBELA,(GDBBELA_generator).nonlocals));
LDBBELA_dps = MDBBELA;
 /* line 565: */
FFJAELA_myreaddiscptrs(TYJAELA_discfile, LDBBELA_dps, (*(&(Ct->Val))), Msg);
 /* line 567: */
ODBBELA = 1 ;
NDBBELA_buffer = WYIAELA_readbuffer(TYJAELA_discfile, (*(&A_VINDEX(LDBBELA_dps,ODBBELA))));
 /* line 568: */
A_CLOSURE( QDBBELA_generator, RDBBELA_generator, SDBBELA_generator );
(( SDBBELA_generator * ) ( QDBBELA_generator.nonlocals )) -> NDBBELA_buffer = (&NDBBELA_buffer);
A_CALLPROC(QDBBELA_generator,(A68_FALSE, &VDBBELA),(A68_FALSE, &VDBBELA,(QDBBELA_generator).nonlocals));
WDBBELA_decls = VDBBELA;
 /* line 570: */
 /* line 571: */
YDBBELA = WDBBELA_decls.upb -1;
XDBBELA_decl = WDBBELA_decls.data;
for (;YDBBELA-- >= 0;
(XDBBELA_decl++
) )
{
ZDBBELA = (&(XDBBELA_decl->Export)) ;
(*ZDBBELA) = JCJAELA_readbool(NDBBELA_buffer);
 /* line 572: */
A_CLOSURE( BEBBELA_generator, CEBBELA_generator, DEBBELA_generator );
(( DEBBELA_generator * ) ( BEBBELA_generator.nonlocals )) -> NDBBELA_buffer = (&NDBBELA_buffer);
A_CALLPROC(BEBBELA_generator,(A68_FALSE, &GEBBELA),(A68_FALSE, &GEBBELA,(BEBBELA_generator).nonlocals));
HEBBELA_il = GEBBELA;
 /* line 573: */
PBJAELA_readchars(NDBBELA_buffer, HEBBELA_il);
 /* line 574: */
 /* line 575: */
IEBBELA = (&(XDBBELA_decl->Il)) ;
(*IEBBELA) = HEBBELA_il;
}
 /* line 576: */
XABBELA_indecls(WDBBELA_decls);
 /* line 577: */
 /* line 578: */
EDBBELA = WDBBELA_decls;
} 
A_PROC_EXIT(readdecls);
*ReturnedValue = (EDBBELA);
return;
} 
#undef NL

A68_VOID  LEBBELA_get_decls(A68_237 * Ct, A68_63  Msg, A68_238  *ReturnedValue)
{ 
A68_238  MEBBELA;  /* == */
A68_238  NEBBELA;  /* avoid structure result */
A68_238 * OEBBELA;  /* YIELD */
A68_238  PEBBELA;  /* clause result */
A_PROC_ENTRY(get_decls);
 /* line 585: */
 /* line 586: */
{ 
 /* line 587: */
MEBBELA = (*(&(Ct->Decls))) ;
if ( A_VSTRUCTCOMP(MEBBELA,UUJAELA_nildecls) )
{ 
 /* line 588: */
DDBBELA_readdecls( Ct, Msg, &NEBBELA );
OEBBELA = (&(Ct->Decls)) ;
(*OEBBELA) = NEBBELA;
} 
 /* line 589: */
 /* line 590: */
PEBBELA = (*(&(Ct->Decls)));
} 
A_PROC_EXIT(get_decls);
*ReturnedValue = (PEBBELA);
return;
} 
#undef NL

A68_INT  TEBBELA_get_decl(A68_237 * Ct, A68_VC  Declname, A68_63  Msg)
{ 
A68_238  UEBBELA;  /* avoid structure result */
A68_238  VEBBELA_decls;
A68_INT  WEBBELA_ans;
A68_INT  XEBBELA_i;
A68_INT  YEBBELA;  /* to part of loop */
A68_INT  ZEBBELA;  /* clause result */
A_PROC_ENTRY(get_decl);
 /* line 593: */
 /* line 594: */
{ 
LEBBELA_get_decls( Ct, Msg, &UEBBELA );
VEBBELA_decls = UEBBELA;
 /* line 595: */
WEBBELA_ans = 0;
 /* line 596: */
YEBBELA = VEBBELA_decls.upb;
for ( XEBBELA_i = 1;
XEBBELA_i <= YEBBELA;
XEBBELA_i += 1 )
{ 
 /* line 597: */
if ( !((WEBBELA_ans==0)) ) break;
if ( A_VC_EQ((*(&((&A_VINDEX(VEBBELA_decls,XEBBELA_i))->Name))),Declname) )
{ 
WEBBELA_ans = XEBBELA_i;
} 
}
 /* line 598: */
 /* line 599: */
ZEBBELA = WEBBELA_ans;
} 
A_PROC_EXIT(get_decl);
return( ZEBBELA );
} 
#undef NL

A68_243 * CFBBELA_get_decl_source(A68_237 * Ct, A68_INT  Declno)
{ 
A68_63  JFBBELA;  /* procedure value */
A68_230 * IFBBELA_infoset;
A68_180  KFBBELA;  /* OPERATORS - simple index */
A68_179  LFBBELA_infoptr;
A68_206 * MFBBELA_buffer;
A68_INT  NFBBELA_ella_date;
A68_VC  OFBBELA;  /* avoid structure result */
A68_VC  PFBBELA_name;
A68_243  QFBBELA;  /* collateral clause result */
A68_243 * RFBBELA;  /* clause result */
A68_243 * SFBBELA;  /* YIELD */
A_PROC_ENTRY(get_decl_source);
 /* line 602: */
 /* line 603: */
{ 
 /* line 604: */
JFBBELA.fn.fn_global = GFBBELA_msg;
JFBBELA.nonlocals = A68_NIL;
IFBBELA_infoset = TBWAELA_get_declattribute(Ct, (*MZJAELA_info_key), JFBBELA);
 /* line 605: */
KFBBELA = (*(&(IFBBELA_infoset->Data))) ;
LFBBELA_infoptr = (*(&A_VINDEX(KFBBELA,Declno)));
 /* line 606: */
MFBBELA_buffer = WYIAELA_readbuffer(TYJAELA_discfile, LFBBELA_infoptr);
 /* line 607: */
NFBBELA_ella_date = YBJAELA_in2(MFBBELA_buffer);
 /* line 608: */
CCJAELA_inid2( MFBBELA_buffer, &OFBBELA );
PFBBELA_name = OFBBELA;
 /* line 609: */
QFBBELA.Name = PFBBELA_name;
 /* line 610: */
QFBBELA.Date = NFBBELA_ella_date;
SFBBELA = A_HEAP(A68_243 ) ;
(*SFBBELA) = QFBBELA ;
RFBBELA = SFBBELA;
} 
A_PROC_EXIT(get_decl_source);
return( RFBBELA );
} 
#undef NL

A68_243 * VFBBELA_get_binding_source(A68_242  Cr, A68_VC  Rename)
{ 
A68_233 * WFBBELA_b;
A68_243 * XFBBELA;  /* clause result */
A68_179  YFBBELA_infoptr;
A68_206 * ZFBBELA_buffer;
A68_INT  AGBBELA_ella_date;
A68_VC  BGBBELA;  /* avoid structure result */
A68_VC  CGBBELA_name;
A68_243  DGBBELA;  /* collateral clause result */
A68_243 * EGBBELA;  /* YIELD */
A_PROC_ENTRY(get_binding_source);
 /* line 613: */
 /* line 614: */
{ 
WFBBELA_b = LEKAELA_get_binding(Cr, Rename);
 /* line 615: */
 /* line 616: */
 /* line 617: */
if ( (WFBBELA_b==FUJAELA_nilbinding) )
{ 
XFBBELA = EUJAELA_nilsource;
} 
else
{ 
YFBBELA_infoptr = (*(&(WFBBELA_b->Info)));
 /* line 618: */
ZFBBELA_buffer = WYIAELA_readbuffer(TYJAELA_discfile, YFBBELA_infoptr);
 /* line 619: */
AGBBELA_ella_date = YBJAELA_in2(ZFBBELA_buffer);
 /* line 620: */
CCJAELA_inid2( ZFBBELA_buffer, &BGBBELA );
CGBBELA_name = BGBBELA;
 /* line 621: */
DGBBELA.Name = CGBBELA_name;
 /* line 622: */
DGBBELA.Date = AGBBELA_ella_date;
 /* line 623: */
EGBBELA = A_HEAP(A68_243 ) ;
(*EGBBELA) = DGBBELA ;
XFBBELA = EGBBELA;
} 
} 
A_PROC_EXIT(get_binding_source);
return( XFBBELA );
} 
#undef NL

A68_INT  IGBBELA_check_decl(A68_237 * Ct, A68_VC  Declname, A68_63  Msg)
{ 
A68_INT  JGBBELA_declno;
A68_31  KGBBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_64  LGBBELA;  /* avoid structure result */
A68_INT  MGBBELA;  /* clause result */
A_PROC_ENTRY(check_decl);
 /* line 626: */
 /* line 627: */
{ 
 /* line 628: */
if ( REKAELA_check_text(Ct, Msg) )
{ 
JGBBELA_declno = TEBBELA_get_decl(Ct, Declname, Msg);
 /* line 629: */
 /* line 630: */
if ( (JGBBELA_declno==0) )
{ 
LIBAELA_lib_msg( 18, &LGBBELA );
A_CALLPROC(Msg,(LGBBELA, A_HVEC(KGBBELA,Declname,A68_VC )),(LGBBELA, A_HVEC(KGBBELA,Declname,A68_VC ),(Msg).nonlocals));
 /* line 631: */
 /* line 632: */
MGBBELA = 0;
} 
else
{ 
 /* line 633: */
 /* line 634: */
MGBBELA = JGBBELA_declno;
} 
} 
else
{ 
 /* line 635: */
MGBBELA = 0;
} 
} 
A_PROC_EXIT(check_decl);
return( MGBBELA );
} 
#undef NL

A68_VOID  PGBBELA_readrootptrs(A68_BOOL  Refresh, A68_63  Msg)
{ 
A68_179  QGBBELA;  /* avoid structure result */
A68_179  RGBBELA_root;
A68_239 ** SGBBELA;  /* YIELD */
A_PROC_ENTRY(readrootptrs);
 /* line 642: */
 /* line 643: */
{ 
VUGAELA_noncompacting_garbage_collect((*(&(TYJAELA_discfile->Database))));
 /* line 644: */
KVIAELA_get_root( (*(&(TYJAELA_discfile->Database))), &QGBBELA );
RGBBELA_root = QGBBELA;
 /* line 645: */
FFJAELA_myreaddiscptrs(TYJAELA_discfile, (HXJAELA_library->Rootptrs), RGBBELA_root, Msg);
 /* line 646: */
 /* line 647: */
if ( Refresh )
{ 
 /* line 648: */
YWABELA_refreshcontexts(Msg);
} 
else
{ 
SGBBELA = (&(HXJAELA_library->Contexts)) ;
(*SGBBELA) = PUABELA_getcontexts(Msg);
 /* line 649: */
 /* line 650: */
 /* line 651: */
ZPABELA_getlibinfo();
} 
} 
A_PROC_EXIT(readrootptrs);
return;
} 
#undef NL
 /* line 655: */
 /* line 656: */

A68_VOID  WGBBELA_check_ella_library(A68_176 * Df, A68_310  Updater, A68_63  Msg)
{ 
A68_INT  XGBBELA_rootsize;
A68_179  YGBBELA;  /* avoid structure result */
A68_179  ZGBBELA_root;
A68_BOOL  AHBBELA;  /* optbool result */
A68_291  CHBBELA_generator;   /* proc value of non-global proc */
A68_180  IHBBELA;  /* avoid structure result */
A68_180  HHBBELA_ptrs;
A68_INT  JHBBELA;  /* YIELD */
A68_INT  LHBBELA;  /* YIELD */
A68_206 * KHBBELA_buffer;
A68_INT  MHBBELA_name;
A68_INT  NHBBELA_ident;
A68_INT  OHBBELA;  /* ADICOPS - MOD */
A68_INT  PHBBELA;  /* ADICOPS - MOD */
A68_INT  QHBBELA_mark;
A68_64  RHBBELA;  /* avoid structure result */
A68_312  SHBBELA;  /* collateral clause result */
A68_VC  THBBELA;  /* avoid structure result */
A68_VC  UHBBELA;  /* avoid structure result */
A68_31  VHBBELA;  /* OPERATORS - istruct -> vector */
A68_64  WHBBELA;  /* avoid structure result */
A68_64  XHBBELA;  /* avoid structure result */
A68_64  YHBBELA;  /* avoid structure result */
A_PROC_ENTRY(check_ella_library);
 /* line 657: */
 /* line 658: */
{ 
XGBBELA_rootsize = (HXJAELA_library->Rootptrs).upb;
 /* line 659: */
KVIAELA_get_root( (*(&(Df->Database))), &YGBBELA );
ZGBBELA_root = YGBBELA;
 /* line 660: */
 /* line 661: */
AHBBELA = (GKEAELA_discptr_data((*(&(Df->Database))), ZGBBELA_root)==6);
if ( AHBBELA )
{ /* line 662: */
AHBBELA = (UEJAELA_ndiscptrs(Df, ZGBBELA_root, Msg)==XGBBELA_rootsize);
}
if ( AHBBELA )
{ 
A_CLOSURE( CHBBELA_generator, DHBBELA_generator, EHBBELA_generator );
(( EHBBELA_generator * ) ( CHBBELA_generator.nonlocals )) -> XGBBELA_rootsize = XGBBELA_rootsize;
A_CALLPROC(CHBBELA_generator,(A68_TRUE, &IHBBELA),(A68_TRUE, &IHBBELA,(CHBBELA_generator).nonlocals));
HHBBELA_ptrs = IHBBELA;
 /* line 663: */
FFJAELA_myreaddiscptrs(Df, HHBBELA_ptrs, ZGBBELA_root, Msg);
 /* line 664: */
 /* line 665: */
JHBBELA = 1 ;
if ( (GKEAELA_discptr_data((*(&(Df->Database))), (*(&A_VINDEX(HHBBELA_ptrs,JHBBELA))))==3) )
{ 
LHBBELA = 1 ;
KHBBELA_buffer = WYIAELA_readbuffer(Df, (*(&A_VINDEX(HHBBELA_ptrs,LHBBELA))));
 /* line 666: */
MHBBELA_name = YBJAELA_in2(KHBBELA_buffer);
 /* line 667: */
NHBBELA_ident = (MHBBELA_name/100);
 /* line 668: */
PHBBELA = 100 ;
QHBBELA_mark = A_MOD(MHBBELA_name,PHBBELA,OHBBELA);
 /* line 669: */
 /* line 670: */
if ( (NHBBELA_ident!=FWJAELA_identification) )
{ 
 /* line 671: */
LIBAELA_lib_msg( 33, &RHBBELA );
A_CALLPROC(Msg,(RHBBELA, VJAAOSI_nullmsg),(RHBBELA, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
else
{ 
 /* line 672: */
if ( (QHBBELA_mark!=GWJAELA_markno) )
{ 
FCAAOSI_intchars( GWJAELA_markno, &THBBELA );
SHBBELA.data[0] = THBBELA;
FCAAOSI_intchars( QHBBELA_mark, &UHBBELA );
SHBBELA.data[1] = UHBBELA;
LIBAELA_lib_msg( 34, &WHBBELA );
A_CALLPROC(Msg,(WHBBELA, A_HISVEC(VHBBELA,SHBBELA,2,A68_VC )),(WHBBELA, A_HISVEC(VHBBELA,SHBBELA,2,A68_VC ),(Msg).nonlocals));
 /* line 674: */
 /* line 675: */
 /* line 676: */
A_CALLPROC(Updater,(QHBBELA_mark, GWJAELA_markno, Msg),(QHBBELA_mark, GWJAELA_markno, Msg,(Updater).nonlocals));
} 
} 
} 
else
{ 
 /* line 677: */
 /* line 678: */
LIBAELA_lib_msg( 33, &XHBBELA );
A_CALLPROC(Msg,(XHBBELA, VJAAOSI_nullmsg),(XHBBELA, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
} 
else
{ 
 /* line 679: */
 /* line 680: */
LIBAELA_lib_msg( 33, &YHBBELA );
A_CALLPROC(Msg,(YHBBELA, VJAAOSI_nullmsg),(YHBBELA, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
} 
A_PROC_EXIT(check_ella_library);
return;
} 
#undef NL

A68_VOID  CIBBELA_nullupdater(A68_INT  Old, A68_INT  New, A68_63  Msg)
{ 
A68_64  DIBBELA;  /* avoid structure result */
A_PROC_ENTRY(nullupdater);
 /* line 685: */
LIBAELA_lib_msg( 31, &DIBBELA );
A_CALLPROC(Msg,(DIBBELA, VJAAOSI_nullmsg),(DIBBELA, VJAAOSI_nullmsg,(Msg).nonlocals));
A_PROC_EXIT(nullupdater);
return;
} 
#undef NL
 /* line 688: */
 /* line 690: */

A68_VOID  HIBBELA_open_library(A68_VC  Db_filename, A68_310  Updater, A68_63  Msg)
{ 
A68_153  IIBBELA;  /* avoid structure result */
A68_153  JIBBELA_libname;
A68_38 * KIBBELA_db_file;
A68_177  LIBBELA;  /* avoid structure result */
A68_177 * MIBBELA;  /* YIELD */
A68_177 ** NIBBELA;  /* YIELD */
A68_38 * OIBBELA_file;
A68_38 ** PIBBELA;  /* YIELD */
A68_VC * QIBBELA;  /* YIELD */
A_PROC_ENTRY(open_library);
 /* line 691: */
 /* line 692: */
{ 
TNCAOSI_parse_filename( Db_filename, UKDAOST_library_type, Msg, &IIBBELA );
JIBBELA_libname = IIBBELA;
 /* line 693: */
KIBBELA_db_file = FQBAOSI_open_file(JIBBELA_libname.Filename, HDAAOST_block_update_access, Msg);
 /* line 694: */
KXHAELA_open_db( KIBBELA_db_file, A68_TRUE, &LIBBELA );
MIBBELA = A_HEAP(A68_177 ) ;
(*MIBBELA) = LIBBELA ;
NIBBELA = (&(TYJAELA_discfile->Database)) ;
(*NIBBELA) = MIBBELA;
 /* line 695: */
WGBBELA_check_ella_library(TYJAELA_discfile, Updater, Msg);
 /* line 696: */
OIBBELA_file = A_CALLPROC(DJJAELA_database_file,((*(&(TYJAELA_discfile->Database)))),((*(&(TYJAELA_discfile->Database))),(DJJAELA_database_file).nonlocals));
 /* line 697: */
PIBBELA = (&(HXJAELA_library->File)) ;
(*PIBBELA) = OIBBELA_file;
 /* line 698: */
QIBBELA = (&(HXJAELA_library->Name)) ;
(*QIBBELA) = JIBBELA_libname.Name;
 /* line 699: */
PGBBELA_readrootptrs(A68_FALSE, Msg);
 /* line 700: */
XYOAELA_get_classes(A68_FALSE);
 /* line 701: */
(*JZJAELA_body_key) = LCPAELA_login_class(UIBBELA, TIBBELA, Msg);
 /* line 702: */
(*MZJAELA_info_key) = LCPAELA_login_class(YIBBELA, XIBBELA, Msg);
 /* line 703: */
 /* line 704: */
(*PZJAELA_spacemap_key) = LCPAELA_login_class(CJBBELA, BJBBELA, Msg);
} 
A_PROC_EXIT(open_library);
return;
} 
#undef NL

A68_VOID  EJBBELA_reopen_library(A68_63  Msg)
{ 
A68_179  FJBBELA;  /* avoid structure result */
A_PROC_ENTRY(reopen_library);
 /* line 707: */
 /* line 711: */
{ 
for ( ;; )
{ 
 /* line 712: */
if ( !(!BGGAELA_can_finish((*(&(TYJAELA_discfile->Database))))) ) break;
QCJAELA_increase_library(TYJAELA_discfile, Msg);
}
 /* line 713: */
KVIAELA_get_root( (*(&(TYJAELA_discfile->Database))), &FJBBELA );
WVIAELA_finish((*(&(TYJAELA_discfile->Database))), FJBBELA);
 /* line 715: */
 /* line 716: */
PGBBELA_readrootptrs(A68_TRUE, Msg);
} 
A_PROC_EXIT(reopen_library);
return;
} 
#undef NL

A68_VOID  IJBBELA_savelib(A68_BOOL  Close, A68_63  Msg)
{ 
A68_179  JJBBELA_discptr;
A68_BOOL * KJBBELA;  /* YIELD */
A68_179  LJBBELA;  /* avoid structure result */
A68_INT * MJBBELA;  /* YIELD */
A_PROC_ENTRY(savelib);
 /* line 720: */
 /* line 721: */
{ 
 /* line 722: */
KJBBELA = (&(HXJAELA_library->Libchanged)) ;
(*KJBBELA) = A68_TRUE;
 /* line 723: */
GDKAELA_settimedate((&(HXJAELA_library->Timelastwritten)), (&(HXJAELA_library->Datelastwritten)));
 /* line 724: */
KSABELA_putcontexts(YYJAELA_ptrcontexts, CZJAELA_ptrctvalues, AZJAELA_ptrimpinfo, Msg);
 /* line 725: */
LPABELA_putlibinfo(((*(&(HXJAELA_library->Version)))+1), Msg);
 /* line 726: */
HAPAELA_put_classes(Msg);
 /* line 727: */
AEJAELA_mywritediscptrs( TYJAELA_discfile, (HXJAELA_library->Rootptrs), Msg, &LJBBELA );
JJBBELA_discptr = LJBBELA;
 /* line 728: */
for ( ;; )
{ 
 /* line 729: */
if ( !(!BGGAELA_can_finish((*(&(TYJAELA_discfile->Database))))) ) break;
QCJAELA_increase_library(TYJAELA_discfile, Msg);
}
 /* line 730: */
 /* line 731: */
if ( Close )
{ 
 /* line 732: */
EWIAELA_finish_and_close((*(&(TYJAELA_discfile->Database))), JJBBELA_discptr, Msg);
} 
else
{ 
 /* line 733: */
WVIAELA_finish((*(&(TYJAELA_discfile->Database))), JJBBELA_discptr);
} 
 /* line 734: */
 /* line 735: */
MJBBELA = (&(HXJAELA_library->Version)) ;
(*MJBBELA)+=1;
} 
A_PROC_EXIT(savelib);
return;
} 
#undef NL

A68_VOID  OJBBELA_finish_library(A68_63  Msg)
{ 
A_PROC_ENTRY(finish_library);
 /* line 738: */
 /* line 739: */
if ( (*(&(HXJAELA_library->Libchanged))) )
{ 
IJBBELA_savelib(A68_TRUE, Msg);
 /* line 740: */
 /* line 741: */
ZCKAELA_resetlibchanged(Msg);
} 
else
{ 
 /* line 742: */
SVIAELA_quit((*(&((*(&(HXJAELA_library->Discfile)))->Database))), Msg);
} 
A_PROC_EXIT(finish_library);
return;
} 
#undef NL

A68_BOOL  QJBBELA_save_library(A68_63  Msg)
{ 
A68_BOOL  RJBBELA;  /* clause result */
A_PROC_ENTRY(save_library);
 /* line 745: */
 /* line 746: */
{ 
 /* line 747: */
if ( (*(&(HXJAELA_library->Libchanged))) )
{ 
IJBBELA_savelib(A68_FALSE, Msg);
 /* line 748: */
PGBBELA_readrootptrs(A68_TRUE, Msg);
 /* line 749: */
ZCKAELA_resetlibchanged(Msg);
 /* line 750: */
 /* line 751: */
RJBBELA = A68_TRUE;
} 
else
{ 
 /* line 752: */
 /* line 753: */
RJBBELA = A68_FALSE;
} 
} 
A_PROC_EXIT(save_library);
return( RJBBELA );
} 
#undef NL

A68_INT  UJBBELA_finddecl(A68_VC  Id, A68_238  Decls)
{ 
A68_INT  VJBBELA_ans;
A68_INT  WJBBELA_i;
A68_INT  XJBBELA;  /* to part of loop */
A68_INT  YJBBELA;  /* clause result */
A_PROC_ENTRY(finddecl);
 /* line 759: */
 /* line 760: */
{ 
VJBBELA_ans = 0;
 /* line 761: */
XJBBELA = Decls.upb;
for ( WJBBELA_i = 1;
WJBBELA_i <= XJBBELA;
WJBBELA_i += 1 )
{ 
 /* line 762: */
if ( !((VJBBELA_ans==0)) ) break;
if ( A_VC_EQ((*(&((&A_VINDEX(Decls,WJBBELA_i))->Name))),Id) )
{ 
VJBBELA_ans = WJBBELA_i;
} 
}
 /* line 763: */
 /* line 764: */
YJBBELA = VJBBELA_ans;
} 
A_PROC_EXIT(finddecl);
return( YJBBELA );
} 
#undef NL
 /* line 767: */

A68_BOOL  DKBBELA_loadable(A68_237 * Ct, A68_238  Decls, A68_INT  Explain, A68_63  Msg)
{ 
A68_BOOL  EKBBELA_ans;
A68_BOOL  FKBBELA_first;
A68_BOOL  GKBBELA_continue;
A68_231 * HKBBELA_u;
A68_INT  IKBBELA_v;
A68_INT  JKBBELA_index;
A68_INT  KKBBELA_i;
A68_INT  LKBBELA;  /* to part of loop */
A68_BOOL  MKBBELA;  /* optbool result */
A68_238  NKBBELA;  /* OPERATORS - trim index */
A68_64  OKBBELA;  /* avoid structure result */
A68_64  PKBBELA;  /* avoid structure result */
A68_31  QKBBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_64  RKBBELA;  /* avoid structure result */
A68_VC  SKBBELA;  /* avoid structure result */
A68_31  TKBBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_64  UKBBELA;  /* avoid structure result */
A68_312  VKBBELA;  /* collateral clause result */
A68_VC  WKBBELA;  /* avoid structure result */
A68_31  XKBBELA;  /* OPERATORS - istruct -> vector */
A68_64  YKBBELA;  /* avoid structure result */
A68_31  ZKBBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_64  ALBBELA;  /* avoid structure result */
A68_VC  BLBBELA;  /* avoid structure result */
A68_31  CLBBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_64  DLBBELA;  /* avoid structure result */
A68_320  ELBBELA;  /* collateral clause result */
A68_VC  FLBBELA;  /* avoid structure result */
A68_VC  GLBBELA;  /* avoid structure result */
A68_31  HLBBELA;  /* OPERATORS - istruct -> vector */
A68_64  ILBBELA;  /* avoid structure result */
A68_64  JLBBELA;  /* avoid structure result */
A68_BOOL  KLBBELA;  /* clause result */
A_PROC_ENTRY(loadable);
 /* line 768: */
 /* line 769: */
{ 
EKBBELA_ans = A68_TRUE;
FKBBELA_first = A68_TRUE;
GKBBELA_continue = A68_TRUE;
 /* line 770: */
 /* line 772: */
LKBBELA = Decls.upb;
for ( KKBBELA_i = 1;
KKBBELA_i <= LKBBELA;
KKBBELA_i += 1 )
{ 
 /* line 773: */
if ( !(GKBBELA_continue) ) break;
HKBBELA_u = (*(&((&A_VINDEX(Decls,KKBBELA_i))->Uses)));
 /* line 774: */
for ( ;; )
{ 
 /* line 775: */
MKBBELA = (HKBBELA_u!=HUJAELA_niluses);
if ( MKBBELA )
{MKBBELA = GKBBELA_continue;
}
if ( !(MKBBELA) ) break;
JKBBELA_index = UJBBELA_finddecl((*(&(HKBBELA_u->Name))), A_VTRIM(NKBBELA,(Decls),A_VTSCRIPT(&(NKBBELA.upb),(Decls).upb,1,(KKBBELA_i-1))));
 /* line 776: */
IKBBELA_v = (*(&((&A_VINDEX(Decls,JKBBELA_index))->Version)));
 /* line 777: */
 /* line 778: */
if ( (IKBBELA_v!=(*(&(HKBBELA_u->Version)))) )
{ 
EKBBELA_ans = A68_FALSE;
 /* line 779: */
 /* line 780: */
switch ( Explain )
{ 
case 1: 
 /* line 782: */
GKBBELA_continue = A68_FALSE;
break;
case 2: 
{ 
 /* line 783: */
if ( FKBBELA_first )
{ 
FKBBELA_first = A68_FALSE;
 /* line 784: */
 /* line 785: */
LIBAELA_lib_msg( 57, &OKBBELA );
A_CALLPROC(Msg,(OKBBELA, VJAAOSI_nullmsg),(OKBBELA, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
else
{ 
 /* line 786: */
LIBAELA_lib_msg( 1, &PKBBELA );
A_CALLPROC(Msg,(PKBBELA, VJAAOSI_nullmsg),(PKBBELA, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
 /* line 787: */
LIBAELA_lib_msg( 23, &RKBBELA );
A_CALLPROC(Msg,(RKBBELA, A_HVEC(QKBBELA,(*(&(Ct->Name))),A68_VC )),(RKBBELA, A_HVEC(QKBBELA,(*(&(Ct->Name))),A68_VC ),(Msg).nonlocals));
 /* line 788: */
 /* line 789: */
JIBAOST_version_str( (*(&((&A_VINDEX(Decls,KKBBELA_i))->Version))), &SKBBELA );
LIBAELA_lib_msg( 24, &UKBBELA );
A_CALLPROC(Msg,(UKBBELA, A_HVEC(TKBBELA,SKBBELA,A68_VC )),(UKBBELA, A_HVEC(TKBBELA,SKBBELA,A68_VC ),(Msg).nonlocals));
 /* line 790: */
 /* line 791: */
QVJAELA_sort_id( (*(&((&A_VINDEX(Decls,KKBBELA_i))->Sort))), &WKBBELA );
VKBBELA.data[0] = WKBBELA;
VKBBELA.data[1] = (*(&((&A_VINDEX(Decls,KKBBELA_i))->Name)));
LIBAELA_lib_msg( 58, &YKBBELA );
A_CALLPROC(Msg,(YKBBELA, A_HISVEC(XKBBELA,VKBBELA,2,A68_VC )),(YKBBELA, A_HISVEC(XKBBELA,VKBBELA,2,A68_VC ),(Msg).nonlocals));
 /* line 792: */
 /* line 793: */
 /* line 795: */
GKBBELA_continue = A68_FALSE;
} 
break;
case 3: 
{ 
LIBAELA_lib_msg( 23, &ALBBELA );
A_CALLPROC(Msg,(ALBBELA, A_HVEC(ZKBBELA,(*(&(Ct->Name))),A68_VC )),(ALBBELA, A_HVEC(ZKBBELA,(*(&(Ct->Name))),A68_VC ),(Msg).nonlocals));
 /* line 796: */
 /* line 797: */
JIBAOST_version_str( (*(&((&A_VINDEX(Decls,KKBBELA_i))->Version))), &BLBBELA );
LIBAELA_lib_msg( 24, &DLBBELA );
A_CALLPROC(Msg,(DLBBELA, A_HVEC(CLBBELA,BLBBELA,A68_VC )),(DLBBELA, A_HVEC(CLBBELA,BLBBELA,A68_VC ),(Msg).nonlocals));
 /* line 798: */
 /* line 799: */
QVJAELA_sort_id( (*(&((&A_VINDEX(Decls,KKBBELA_i))->Sort))), &FLBBELA );
ELBBELA.data[0] = FLBBELA;
 /* line 800: */
ELBBELA.data[1] = (*(&((&A_VINDEX(Decls,KKBBELA_i))->Name)));
QVJAELA_sort_id( (*(&(HKBBELA_u->Sort))), &GLBBELA );
ELBBELA.data[2] = GLBBELA;
ELBBELA.data[3] = (*(&(HKBBELA_u->Name)));
 /* line 801: */
 /* line 802: */
 /* line 803: */
LIBAELA_lib_msg( 59, &ILBBELA );
A_CALLPROC(Msg,(ILBBELA, A_HISVEC(HLBBELA,ELBBELA,4,A68_VC )),(ILBBELA, A_HISVEC(HLBBELA,ELBBELA,4,A68_VC ),(Msg).nonlocals));
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
 /* line 804: */
 /* line 805: */
HKBBELA_u = (*(&(HKBBELA_u->Rest)));
}
 /* line 806: */
if ( (Explain==2) )
{ 
 /* line 807: */
GKBBELA_continue = A68_TRUE;
} 
}
 /* line 808: */
if ( (Explain==2) )
{ 
LIBAELA_lib_msg( 2, &JLBBELA );
A_CALLPROC(Msg,(JLBBELA, VJAAOSI_nullmsg),(JLBBELA, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
 /* line 809: */
 /* line 810: */
KLBBELA = EKBBELA_ans;
} 
A_PROC_EXIT(loadable);
return( KLBBELA );
} 
#undef NL

A68_INT  LLBBELA_find_maxctno(void)
{ 
A68_INT  MLBBELA_maxctno;
A68_239 * NLBBELA_c;
A68_236 * OLBBELA_r;
A68_INT  PLBBELA;  /* clause result */
A_PROC_ENTRY(find_maxctno);
{ 
MLBBELA_maxctno = 0;
 /* line 815: */
NLBBELA_c = (*(&(HXJAELA_library->Contexts)));
 /* line 816: */
for ( ;; )
{ 
 /* line 817: */
if ( !((NLBBELA_c!=EVJAELA_nilcontexts)) ) break;
OLBBELA_r = (*(&((&(NLBBELA_c->Context))->Regions)));
 /* line 818: */
for ( ;; )
{ 
 /* line 819: */
if ( !((OLBBELA_r!=CVJAELA_nilregions)) ) break;
 /* line 820: */
if ( ((*(&((&(OLBBELA_r->Region))->Ctno)))>MLBBELA_maxctno) )
{ 
 /* line 821: */
MLBBELA_maxctno = (*(&((&(OLBBELA_r->Region))->Ctno)));
} 
 /* line 822: */
 /* line 823: */
OLBBELA_r = (*(&(OLBBELA_r->Rest)));
}
 /* line 824: */
 /* line 825: */
NLBBELA_c = (*(&(NLBBELA_c->Rest)));
}
 /* line 826: */
 /* line 827: */
PLBBELA = MLBBELA_maxctno;
} 
A_PROC_EXIT(find_maxctno);
return( PLBBELA );
} 
#undef NL

A68_VOID  RLBBELA_ctno_region(A68_INT  Ctno, A68_242  *ReturnedValue)
{ 
A68_239 * SLBBELA_c;
A68_236 * TLBBELA_r;
A68_BOOL  ULBBELA_continue;
A68_BOOL  VLBBELA;  /* optbool result */
A68_BOOL  WLBBELA;  /* optbool result */
A68_242  XLBBELA;  /* collateral clause result */
A68_242  YLBBELA;  /* clause result */
A_PROC_ENTRY(ctno_region);
 /* line 831: */
 /* line 832: */
{ 
SLBBELA_c = (*(&(HXJAELA_library->Contexts)));
 /* line 833: */
 /* line 834: */
ULBBELA_continue = A68_TRUE;
 /* line 835: */
for ( ;; )
{ 
 /* line 836: */
VLBBELA = (SLBBELA_c!=EVJAELA_nilcontexts);
if ( VLBBELA )
{VLBBELA = ULBBELA_continue;
}
if ( !(VLBBELA) ) break;
TLBBELA_r = (*(&((&(SLBBELA_c->Context))->Regions)));
 /* line 837: */
for ( ;; )
{ 
 /* line 838: */
WLBBELA = (TLBBELA_r!=CVJAELA_nilregions);
if ( WLBBELA )
{WLBBELA = ULBBELA_continue;
}
if ( !(WLBBELA) ) break;
if ( ((*(&((&(TLBBELA_r->Region))->Ctno)))==Ctno) )
{ 
 /* line 839: */
ULBBELA_continue = A68_FALSE;
} 
else
{ 
 /* line 840: */
 /* line 841: */
TLBBELA_r = (*(&(TLBBELA_r->Rest)));
} 
}
 /* line 842: */
if ( ULBBELA_continue )
{ 
 /* line 843: */
SLBBELA_c = (*(&(SLBBELA_c->Rest)));
} 
}
 /* line 844: */
if ( (SLBBELA_c!=EVJAELA_nilcontexts) )
{ 
XLBBELA.Context = (&(SLBBELA_c->Context));
} 
else
{ 
 /* line 845: */
XLBBELA.Context = DVJAELA_nilcontxt;
} 
if ( (TLBBELA_r!=CVJAELA_nilregions) )
{ 
XLBBELA.Region = (&(TLBBELA_r->Region));
} 
else
{ 
 /* line 846: */
XLBBELA.Region = BVJAELA_nilregion;
} 
YLBBELA = XLBBELA;
} 
A_PROC_EXIT(ctno_region);
*ReturnedValue = (YLBBELA);
return;
} 
#undef NL

A68_VOID  ZLBBELA_zero_ctnos(void)
{ 
A68_239 * AMBBELA_c;
A68_236 * BMBBELA_r;
A68_INT * CMBBELA;  /* YIELD */
A_PROC_ENTRY(zero_ctnos);
{ 
AMBBELA_c = (*(&(HXJAELA_library->Contexts)));
 /* line 852: */
for ( ;; )
{ 
 /* line 853: */
if ( !((AMBBELA_c!=EVJAELA_nilcontexts)) ) break;
BMBBELA_r = (*(&((&(AMBBELA_c->Context))->Regions)));
 /* line 854: */
for ( ;; )
{ 
if ( !((BMBBELA_r!=CVJAELA_nilregions)) ) break;
CMBBELA = (&((&(BMBBELA_r->Region))->Ctno)) ;
(*CMBBELA) = 0;
BMBBELA_r = (*(&(BMBBELA_r->Rest)));
}
 /* line 855: */
 /* line 856: */
AMBBELA_c = (*(&(AMBBELA_c->Rest)));
}
 /* line 857: */
} 
A_PROC_EXIT(zero_ctnos);
return;
} 
#undef NL

A_STATIC A68_INT  EMBBELA_add_close(A68_242  Crg)
{ 
A68_INT  FMBBELA_closureno;
A68_239 * GMBBELA_c;
A68_236 * HMBBELA_r;
A68_323  JMBBELA_close1;   /* proc value of non-global proc */
A68_INT  RMBBELA;  /* clause result */
A_PROC_ENTRY(add_close);
 /* line 860: */
 /* line 863: */
{ 
FMBBELA_closureno = 0;
 /* line 864: */
GMBBELA_c = (*(&(HXJAELA_library->Contexts)));
 /* line 865: */
for ( ;; )
{ 
 /* line 866: */
if ( !((GMBBELA_c!=EVJAELA_nilcontexts)) ) break;
HMBBELA_r = (*(&((&(GMBBELA_c->Context))->Regions)));
 /* line 867: */
for ( ;; )
{ 
 /* line 868: */
if ( !((HMBBELA_r!=CVJAELA_nilregions)) ) break;
 /* line 869: */
if ( ((*(&((&(HMBBELA_r->Region))->Ctno)))>FMBBELA_closureno) )
{ 
 /* line 870: */
FMBBELA_closureno = (*(&((&(HMBBELA_r->Region))->Ctno)));
} 
 /* line 871: */
 /* line 872: */
HMBBELA_r = (*(&(HMBBELA_r->Rest)));
}
 /* line 873: */
 /* line 874: */
GMBBELA_c = (*(&(GMBBELA_c->Rest)));
}
 /* line 876: */
A_CLOSURE( JMBBELA_close1, KMBBELA_close1, LMBBELA_close1 );
(( LMBBELA_close1 * ) ( JMBBELA_close1.nonlocals )) -> JMBBELA_close1 = JMBBELA_close1;
(( LMBBELA_close1 * ) ( JMBBELA_close1.nonlocals )) -> FMBBELA_closureno = (&FMBBELA_closureno);
 /* line 893: */
A_CALLPROC(JMBBELA_close1,(Crg),(Crg,(JMBBELA_close1).nonlocals));
 /* line 894: */
RMBBELA = FMBBELA_closureno;
} 
A_PROC_EXIT(add_close);
return( RMBBELA );
} 
#undef NL

A68_INT  TMBBELA_close(A68_242  Crg)
{ 
A68_INT  UMBBELA;  /* clause result */
A_PROC_ENTRY(close);
 /* line 897: */
 /* line 898: */
{ 
ZLBBELA_zero_ctnos();
 /* line 899: */
 /* line 900: */
UMBBELA = EMBBELA_add_close(Crg);
} 
A_PROC_EXIT(close);
return( UMBBELA );
} 
#undef NL

A_STATIC A68_BOOL  YMBBELA_checkimports(A68_242  Cr, A68_BOOL  Explain, A68_63  Msg)
{ 
A68_234 * ZMBBELA_i;
A68_BOOL  ANBBELA_ans;
A68_VC  BNBBELA;  /* avoid structure result */
A68_31  CNBBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_64  DNBBELA;  /* avoid structure result */
A68_312  ENBBELA;  /* collateral clause result */
A68_VC  FNBBELA;  /* avoid structure result */
A68_31  GNBBELA;  /* OPERATORS - istruct -> vector */
A68_64  HNBBELA;  /* avoid structure result */
A68_BOOL  INBBELA;  /* clause result */
A_PROC_ENTRY(checkimports);
 /* line 904: */
 /* line 905: */
{ 
ZMBBELA_i = HEKAELA_get_imports(Cr);
 /* line 906: */
ANBBELA_ans = A68_TRUE;
 /* line 907: */
for ( ;; )
{ 
 /* line 908: */
if ( !((ZMBBELA_i!=GUJAELA_nilimports)) ) break;
 /* line 909: */
if ( A_VC_EQ((*(&((&(ZMBBELA_i->Binding))->Name))),TTCAOST_nullid) )
{ 
ANBBELA_ans = A68_FALSE;
 /* line 910: */
 /* line 911: */
if ( Explain )
{ 
UAKAELA_ctos( Cr, &BNBBELA );
LIBAELA_lib_msg( 23, &DNBBELA );
A_CALLPROC(Msg,(DNBBELA, A_HVEC(CNBBELA,BNBBELA,A68_VC )),(DNBBELA, A_HVEC(CNBBELA,BNBBELA,A68_VC ),(Msg).nonlocals));
 /* line 912: */
 /* line 913: */
QVJAELA_sort_id( (*(&((&(ZMBBELA_i->Binding))->Sort))), &FNBBELA );
ENBBELA.data[0] = FNBBELA;
ENBBELA.data[1] = (*(&((&(ZMBBELA_i->Binding))->Rename)));
 /* line 914: */
 /* line 915: */
LIBAELA_lib_msg( 129, &HNBBELA );
A_CALLPROC(Msg,(HNBBELA, A_HISVEC(GNBBELA,ENBBELA,2,A68_VC )),(HNBBELA, A_HISVEC(GNBBELA,ENBBELA,2,A68_VC ),(Msg).nonlocals));
} 
} 
 /* line 916: */
 /* line 917: */
ZMBBELA_i = (*(&(ZMBBELA_i->Rest)));
}
 /* line 918: */
 /* line 919: */
INBBELA = ANBBELA_ans;
} 
A_PROC_EXIT(checkimports);
return( INBBELA );
} 
#undef NL
 /* line 923: */

A68_INT  ONBBELA_next_closure_details(A68_242  Crg, A68_BOOL  Recompile, A68_BOOL  Importing, A68_BOOL  Explain, A68_63  Msg)
{ 
A68_242  PNBBELA_cr;
A68_237  QNBBELA_ct;
A68_INT  RNBBELA_closureno;
A68_BOOL  SNBBELA_ok;
A68_BOOL  TNBBELA_ans;
A68_VC  UNBBELA;  /* avoid structure result */
A68_31  VNBBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_64  WNBBELA;  /* avoid structure result */
A68_INT  XNBBELA_i;
A68_INT  YNBBELA;  /* by part of loop */
A68_242  ZNBBELA;  /* avoid structure result */
A68_VC  AOBBELA;  /* avoid structure result */
A68_31  BOBBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_64  COBBELA;  /* avoid structure result */
A68_64  DOBBELA;  /* avoid structure result */
A68_BOOL  EOBBELA;  /* optbool result */
A68_INT  FOBBELA;  /* clause result */
A68_238  GOBBELA;  /* avoid structure result */
A68_BOOL  HOBBELA;  /* optbool result */
A68_BOOL  IOBBELA;  /* optbool result */
A68_64  JOBBELA;  /* avoid structure result */
A68_64  KOBBELA;  /* avoid structure result */
A68_64  LOBBELA;  /* avoid structure result */
A68_INT  MOBBELA;  /* clause result */
A_PROC_ENTRY(next_closure_details);
 /* line 924: */
 /* line 930: */
{ 
 /* line 931: */
RNBBELA_closureno = EMBBELA_add_close(Crg);
 /* line 932: */
TNBBELA_ans = A68_TRUE;
 /* line 933: */
 /* line 934: */
if ( Explain )
{ 
 /* line 935: */
UAKAELA_ctos( Crg, &UNBBELA );
LIBAELA_lib_msg( 130, &WNBBELA );
A_CALLPROC(Msg,(WNBBELA, A_HVEC(VNBBELA,UNBBELA,A68_VC )),(WNBBELA, A_HVEC(VNBBELA,UNBBELA,A68_VC ),(Msg).nonlocals));
} 
 /* line 936: */
 /* line 937: */
YNBBELA = (-1);
for ( XNBBELA_i = RNBBELA_closureno;
( YNBBELA > 0 && XNBBELA_i <= 1) ||
( YNBBELA < 0 && XNBBELA_i >= 1) ||
( YNBBELA == 0 ) ;
XNBBELA_i += YNBBELA )
{ 
RLBBELA_ctno_region( XNBBELA_i, &ZNBBELA );
PNBBELA_cr = ZNBBELA;
SNBBELA_ok = A68_TRUE;
 /* line 938: */
QNBBELA_ct = (*(*(&((&PNBBELA_cr)->Context))));
 /* line 939: */
 /* line 940: */
if ( Explain )
{ 
 /* line 941: */
UAKAELA_ctos( PNBBELA_cr, &AOBBELA );
LIBAELA_lib_msg( 131, &COBBELA );
A_CALLPROC(Msg,(COBBELA, A_HVEC(BOBBELA,AOBBELA,A68_VC )),(COBBELA, A_HVEC(BOBBELA,AOBBELA,A68_VC ),(Msg).nonlocals));
} 
 /* line 942: */
 /* line 943: */
if ( ZBKAELA_no_text((&QNBBELA_ct), Msg) )
{ 
if ( Explain )
{ 
LIBAELA_lib_msg( 132, &DOBBELA );
A_CALLPROC(Msg,(DOBBELA, VJAAOSI_nullmsg),(DOBBELA, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
 /* line 944: */
 /* line 945: */
 /* line 946: */
SNBBELA_ok = TNBBELA_ans = A68_FALSE;
} 
else
{ 
if ( !(*(&((&QNBBELA_ct)->Loadable))) )
{ 
EOBBELA = Recompile;
if ( ! EOBBELA )
{EOBBELA = Explain;
}
if ( EOBBELA )
{ 
FOBBELA = 3;
} 
else
{ 
FOBBELA = 1;
} 
 /* line 947: */
LEBBELA_get_decls( (&QNBBELA_ct), Msg, &GOBBELA );
DKBBELA_loadable((&QNBBELA_ct), GOBBELA, FOBBELA, Msg);
 /* line 948: */
 /* line 949: */
SNBBELA_ok = TNBBELA_ans = A68_FALSE;
} 
} 
 /* line 950: */
HOBBELA = Importing;
if ( ! HOBBELA )
{HOBBELA = Explain;
}
 /* line 951: */
if ( !YMBBELA_checkimports(PNBBELA_cr, HOBBELA, Msg) )
{ 
 /* line 952: */
SNBBELA_ok = TNBBELA_ans = A68_FALSE;
} 
 /* line 953: */
IOBBELA = SNBBELA_ok;
if ( IOBBELA )
{IOBBELA = Explain;
}
if ( IOBBELA )
{ 
 /* line 954: */
LIBAELA_lib_msg( 133, &JOBBELA );
A_CALLPROC(Msg,(JOBBELA, VJAAOSI_nullmsg),(JOBBELA, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
}
 /* line 955: */
 /* line 956: */
if ( Explain )
{ 
LIBAELA_lib_msg( 134, &KOBBELA );
A_CALLPROC(Msg,(KOBBELA, VJAAOSI_nullmsg),(KOBBELA, VJAAOSI_nullmsg,(Msg).nonlocals));
 /* line 957: */
 /* line 958: */
LIBAELA_lib_msg( 2, &LOBBELA );
A_CALLPROC(Msg,(LOBBELA, VJAAOSI_nullmsg),(LOBBELA, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
 /* line 959: */
if ( TNBBELA_ans )
{ 
MOBBELA = RNBBELA_closureno;
} 
else
{ 
 /* line 960: */
MOBBELA = (-RNBBELA_closureno);
} 
} 
A_PROC_EXIT(next_closure_details);
return( MOBBELA );
} 
#undef NL
 /* line 963: */

A68_INT  SOBBELA_closure_details(A68_242  Crg, A68_BOOL  Recompile, A68_BOOL  Importing, A68_BOOL  Explain, A68_63  Msg)
{ 
A68_INT  TOBBELA;  /* clause result */
A_PROC_ENTRY(closure_details);
 /* line 964: */
 /* line 965: */
{ 
ZLBBELA_zero_ctnos();
 /* line 966: */
 /* line 967: */
TOBBELA = ONBBELA_next_closure_details(Crg, Recompile, Importing, Explain, Msg);
} 
A_PROC_EXIT(closure_details);
return( TOBBELA );
} 
#undef NL

A68_VOID  VOBBELA_newcontextptr(A68_63  Msg, A68_179  *ReturnedValue)
{ 
A68_INT  WOBBELA_no_atts;
A68_291  YOBBELA_generator;   /* proc value of non-global proc */
A68_180  EPBBELA;  /* avoid structure result */
A68_180  DPBBELA_contextptrs;
A68_115  FPBBELA;  /* OPERATORS - mode -> union mode */
A68_206 * GPBBELA_buffer;
A68_INT  HPBBELA;  /* to part of loop */
A68_INT  IPBBELA;  /* loop control */
A68_INT  JPBBELA;  /* YIELD */
A68_179  KPBBELA;  /* avoid structure result */
A68_179 * LPBBELA;  /* YIELD */
A68_INT  MPBBELA;  /* YIELD */
A68_179  NPBBELA;  /* avoid structure result */
A68_179 * OPBBELA;  /* YIELD */
A68_179 * PPBBELA_dps;
A68_180  QPBBELA;  /* OPERATORS - trim index */
A68_180  RPBBELA;  /* forall yield */
A68_INT  SPBBELA;  /* forall loop counter */
A68_179  TPBBELA;  /* clause result */
A68_179  UPBBELA;  /* avoid structure result */
A_PROC_ENTRY(newcontextptr);
 /* line 971: */
 /* line 972: */
{ 
 /* line 973: */
if ( !UXIAELA_isnilptr(TYJAELA_discfile, (*GZJAELA_ptrattributes)) )
{ 
WOBBELA_no_atts = (UEJAELA_ndiscptrs(TYJAELA_discfile, (*GZJAELA_ptrattributes), Msg)-1);
 /* line 974: */
A_CLOSURE( YOBBELA_generator, ZOBBELA_generator, APBBELA_generator );
(( APBBELA_generator * ) ( YOBBELA_generator.nonlocals )) -> WOBBELA_no_atts = WOBBELA_no_atts;
A_CALLPROC(YOBBELA_generator,(A68_TRUE, &EPBBELA),(A68_TRUE, &EPBBELA,(YOBBELA_generator).nonlocals));
DPBBELA_contextptrs = EPBBELA;
 /* line 975: */
GPBBELA_buffer = ZXIAELA_makebuffer(TYJAELA_discfile, A_UNITE(FPBBELA,mode1,1,SNBAELA_block_size), RXIAELA_validwrite);
 /* line 976: */
HPBBELA = WOBBELA_no_atts;
for ( IPBBELA = 1;
IPBBELA <= HPBBELA;
IPBBELA += 1 )
{ 
YHJAELA_outint2((*(&(HXJAELA_library->Version))), GPBBELA_buffer, Msg);
}
 /* line 977: */
JPBBELA = 1 ;
TDJAELA_mywritechars( TYJAELA_discfile, ZUJAELA_nospecs, Msg, &KPBBELA );
LPBBELA = (&A_VINDEX(DPBBELA_contextptrs,JPBBELA)) ;
(*LPBBELA) = KPBBELA;
 /* line 978: */
MPBBELA = 2 ;
CGJAELA_endwrite( GPBBELA_buffer, Msg, &NPBBELA );
OPBBELA = (&A_VINDEX(DPBBELA_contextptrs,MPBBELA)) ;
(*OPBBELA) = NPBBELA;
 /* line 979: */
 /* line 980: */
if ( (WOBBELA_no_atts>0) )
{ 
RPBBELA = A_VTRIM(QPBBELA,(DPBBELA_contextptrs),A_VTSCRIPT(&(QPBBELA.upb),(DPBBELA_contextptrs).upb,3,(DPBBELA_contextptrs).upb)) ;
SPBBELA = RPBBELA.upb -1;
PPBBELA_dps = RPBBELA.data;
for (;SPBBELA-- >= 0;
(PPBBELA_dps++
) )
{
(*PPBBELA_dps) = UACAELA_nilptr;
}
 /* line 981: */
} 
 /* line 982: */
 /* line 983: */
 /* line 984: */
AEJAELA_mywritediscptrs( TYJAELA_discfile, DPBBELA_contextptrs, Msg, &UPBBELA );
TPBBELA = UPBBELA;
} 
else
{ 
 /* line 985: */
TPBBELA = UACAELA_nilptr;
} 
} 
A_PROC_EXIT(newcontextptr);
*ReturnedValue = (TPBBELA);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 6: */
void SOABELA(void)   /* initialise DECS libinterface */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/libinterface.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/attrdecls.m","./mfiles/attrlevel1.m","./mfiles/libmodes.m","./mfiles/databasebuffers.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/ostools/assoc/mfiles/testmode.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_208  VABBELA;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
DZVAELA();   /* USE attrdecls */
MPOAELA();   /* USE attrlevel1 */
FTJAELA();   /* USE libmodes */
NWIAELA();   /* USE databasebuffers */
PCAAOST();   /* USE osinterface */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
JSCAOST();   /* USE basics */
QFBAOST();   /* USE testmode */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ella/assoc/./a68files/libinterface.a68";
A_config.translation_time = "Tue Apr  4 10:39:07 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "ROABELA (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:39:07 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS libinterface);
UEAALIB_a68config(LGAALIB_configinfo, WOABELA);
 /* line 117: */
 /* line 123: */
 /* line 136: */
 /* line 154: */
 /* line 155: */
 /* line 156: */
 /* line 170: */
 /* line 183: */
 /* line 199: */
 /* line 201: */
 /* line 261: */
 /* line 316: */
 /* line 347: */
 /* line 348: */
 /* line 349: */
 /* line 350: */
 /* line 351: */
 /* line 353: */
 /* line 374: */
 /* line 416: */
 /* line 436: */
 /* line 438: */
 /* line 453: */
VABBELA.fn.fn_global = MABBELA_anonymous;
VABBELA.nonlocals = A68_NIL;
CABBELA_skipmacspec = VABBELA;
 /* line 474: */
 /* line 561: */
 /* line 584: */
 /* line 592: */
 /* line 601: */
 /* line 612: */
 /* line 625: */
 /* line 641: */
 /* line 654: */
 /* line 684: */
 /* line 687: */
 /* line 706: */
 /* line 719: */
 /* line 737: */
 /* line 744: */
 /* line 758: */
 /* line 766: */
 /* line 812: */
 /* line 813: */
 /* line 814: */
 /* line 830: */
 /* line 849: */
 /* line 850: */
 /* line 851: */
 /* line 859: */
 /* line 896: */
 /* line 903: */
 /* line 922: */
 /* line 962: */
 /* line 970: */
 /* line 987: */
 /* line 988: */
 /* line 1000: */
/*SKIP*/;
A_PROC_EXIT(DECS libinterface);
} 
#undef NL
/* end of translation of ./a68files/libinterface.a68 */
