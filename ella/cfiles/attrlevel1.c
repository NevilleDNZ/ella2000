
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
/* UNAME:LPOAELA */
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
A68_INT  Number;
A_PAD_INT(PAD_20)
struct A68t93 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_21)
};
typedef struct A68t92  A68_92 ;    /* STRUCT(INT,REF MODE93,BITS)  */
A_VECTOR(struct A68t95 ,A68t94);
typedef struct A68t94  A68_94 ;    /* VECTOR [] MODE95 */
struct A68t95{
struct A68t92  Msgno;
A68_VC  Text;
};
typedef struct A68t95  A68_95 ;    /* STRUCT(MODE92,REF MODE26)  */
struct A68t93{
A68_VC  Name;
struct A68t94  Messages;
};
typedef struct A68t93  A68_93 ;    /* STRUCT(REF MODE26,REF MODE94)  */

A_PROCEDURE(A68_VOID ,A68t96,(A68_BOOL ,struct A68t46 *),(A68_BOOL ,struct A68t46 *,void *));
typedef struct A68t96  A68_96 ;    /* PROC(BOOL) MODE46 */

A_PROCEDURE(A68_VOID ,A68t97,(struct A68t92 ,struct A68t46 ),(struct A68t92 ,struct A68t46 ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(MODE92,MODE46) VOID */
A_VECTOR(struct A68t100 ,A68t99);
typedef struct A68t99  A68_99 ;    /* VECTOR [] MODE100 */
struct A68t100{
A68_INT  Number;
A_PAD_INT(PAD_22)
A68_BITS  Class;
A_PAD_BITS(PAD_23)
A68_VC  Text;
};
typedef struct A68t100  A68_100 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t98{
A68_VC  Name;
struct A68t94  Messages;
A68_BOOL * Initialised;
struct A68t99  Setup;
};
typedef struct A68t98  A68_98 ;    /* STRUCT(MODE26,REF MODE94,REF BOOL,MODE99)  */

A_PROCEDURE(A68_VOID ,A68t101,(A68_BOOL ,struct A68t98 *),(A68_BOOL ,struct A68t98 *,void *));
typedef struct A68t101  A68_101 ;    /* PROC(BOOL) MODE98 */
A_VECTOR(A68_VC ,A68t102);
typedef struct A68t102  A68_102 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t103,(struct A68t46 ,struct A68t102 *),(struct A68t46 ,struct A68t102 *,void *));
typedef struct A68t103  A68_103 ;    /* PROC(MODE46) MODE102 */

A_PROCEDURE(A68_VOID ,A68t104,(struct A68t102 ,struct A68t46 *),(struct A68t102 ,struct A68t46 *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(MODE102) MODE46 */
struct A68t106 ;

A_PROCEDURE(A68_BOOL ,A68t105,(struct A68t106 ),(struct A68t106 ,void *));
typedef struct A68t105  A68_105 ;    /* PROC(MODE106) BOOL */
struct A68t106 { A68_INT mode; union {
struct A68t92  mode1;
struct A68t95  mode2;
} data; };
typedef struct A68t106  A68_106 ;    /* UNION(MODE92,MODE95)  */

A_PROCEDURE(A68_INT ,A68t107,(struct A68t92 ),(struct A68t92 ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(MODE92) INT */

A_PROCEDURE(A68_VOID ,A68t108,(A68_INT ,struct A68t98 ,struct A68t92 *),(A68_INT ,struct A68t98 ,struct A68t92 *,void *));
typedef struct A68t108  A68_108 ;    /* PROC(INT,MODE98) MODE92 */

A_PROCEDURE(A68_BOOL ,A68t109,(struct A68t92 ,struct A68t98 ),(struct A68t92 ,struct A68t98 ,void *));
typedef struct A68t109  A68_109 ;    /* PROC(MODE92,MODE98) BOOL */

A_PROCEDURE(A68_VOID ,A68t110,(struct A68t92 ,struct A68t46 ,struct A68t95 *),(struct A68t92 ,struct A68t46 ,struct A68t95 *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(MODE92,MODE46) MODE95 */
struct A68t111{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t111  A68_111 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t113 ;

A_PROCEDURE(A68_VOID ,A68t112,(struct A68t113 ),(struct A68t113 ,void *));
typedef struct A68t112  A68_112 ;    /* PROC(MODE113) VOID */
struct A68t113 { A68_INT mode; union {
A68_VC  mode1;
struct A68t32  mode2;
struct A68t54  mode3;
struct A68t53  mode4;
} data; };
typedef struct A68t113  A68_113 ;    /* UNION(REF MODE26,REF MODE32,REF MODE54,REF MODE53)  */

A_PROCEDURE(A68_INT ,A68t114,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t115,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t115  A68_115 ;    /* PROC(BITS,BITS) BITS */
struct A68t117 ;

A_PROCEDURE(A68_VOID ,A68t116,(struct A68t117 ,A68_INT ),(struct A68t117 ,A68_INT ,void *));
typedef struct A68t116  A68_116 ;    /* PROC(MODE117,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t117,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t117  A68_117 ;    /* PROC(CHAR) VOID */
struct A68t119 ;

A_PROCEDURE(A68_INT ,A68t118,(struct A68t119 ),(struct A68t119 ,void *));
typedef struct A68t118  A68_118 ;    /* PROC(MODE119) INT */

A_PROCEDURE(A68_CHAR ,A68t119,(void),(void *));
typedef struct A68t119  A68_119 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t120,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t120  A68_120 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_INT ,A68t121,(void),(void *));
typedef struct A68t121  A68_121 ;    /* PROC INT */

A_PROCEDURE(A68_INT ,A68t122,(A68_INT ),(A68_INT ,void *));
typedef struct A68t122  A68_122 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t123,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t123  A68_123 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t124,(A68_VC *),(A68_VC *,void *));
typedef struct A68t124  A68_124 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_INT ,A68t125,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t125  A68_125 ;    /* PROC(INT,INT,REF BOOL) INT */

A_PROCEDURE(A68_BOOL ,A68t126,(A68_VC ,A68_INT *,struct A68t97 ),(A68_VC ,A68_INT *,struct A68t97 ,void *));
typedef struct A68t126  A68_126 ;    /* PROC(MODE26,REF INT,MODE97) BOOL */
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

A_PROCEDURE(struct A68t127 *,A68t131,(A68_VC ,struct A68t129 ,struct A68t97 ),(A68_VC ,struct A68t129 ,struct A68t97 ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(MODE26,MODE129,MODE97) REF MODE127 */

A_PROCEDURE(A68_VOID ,A68t132,(struct A68t127 *,struct A68t97 ),(struct A68t127 *,struct A68t97 ,void *));
typedef struct A68t132  A68_132 ;    /* PROC(REF MODE127,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t133,(struct A68t127 *,A68_VC *),(struct A68t127 *,A68_VC *,void *));
typedef struct A68t133  A68_133 ;    /* PROC(REF MODE127) MODE26 */

A_PROCEDURE(A68_VOID ,A68t134,(struct A68t127 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *),(struct A68t127 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t134  A68_134 ;    /* PROC(REF MODE127,REF MODE26,REF INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t135,(struct A68t127 *,A68_VC ,struct A68t97 ,struct A68t35 *),(struct A68t127 *,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t135  A68_135 ;    /* PROC(REF MODE127,MODE26,MODE97) MODE35 */
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

A_PROCEDURE(struct A68t136 *,A68t137,(struct A68t138 ,struct A68t97 ),(struct A68t138 ,struct A68t97 ,void *));
typedef struct A68t137  A68_137 ;    /* PROC(MODE138,MODE97) REF MODE136 */
struct A68t138 { A68_INT mode; union {
struct A68t127 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t138  A68_138 ;    /* UNION(REF MODE127,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t139,(struct A68t127 *,A68_LINT *,struct A68t97 ,struct A68t35 *),(struct A68t127 *,A68_LINT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t139  A68_139 ;    /* PROC(REF MODE127,REF LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t140,(struct A68t127 *,A68_LINT ,struct A68t97 ,struct A68t35 *),(struct A68t127 *,A68_LINT ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t140  A68_140 ;    /* PROC(REF MODE127,LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t141,(struct A68t127 *,struct A68t97 ,struct A68t35 *),(struct A68t127 *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t141  A68_141 ;    /* PROC(REF MODE127,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t142,(A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t142  A68_142 ;    /* PROC(MODE26,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t143,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t143  A68_143 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t144,(A68_INT ),(A68_INT ,void *));
typedef struct A68t144  A68_144 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_LINT ,A68t145,(void),(void *));
typedef struct A68t145  A68_145 ;    /* PROC LONG INT */

A_PROCEDURE(A68_INT ,A68t146,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t146  A68_146 ;    /* PROC(MODE26,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t147,(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t147  A68_147 ;    /* PROC(MODE26,MODE26,MODE97) MODE26 */

A_PROCEDURE(A68_VOID ,A68t148,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t148  A68_148 ;    /* PROC(MODE26,MODE26,MODE97) MODE35 */
struct A68t149{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t149  A68_149 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t150,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t149 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t149 *,void *));
typedef struct A68t150  A68_150 ;    /* PROC(MODE26,MODE26,MODE97) MODE149 */

A_PROCEDURE(A68_VOID ,A68t151,(A68_VC *),(A68_VC *,void *));
typedef struct A68t151  A68_151 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t152,(struct A68t46 *),(struct A68t46 *,void *));
typedef struct A68t152  A68_152 ;    /* PROC MODE46 */

A_PROCEDURE(A68_VOID ,A68t153,(A68_VC ,struct A68t97 ,struct A68t46 *),(A68_VC ,struct A68t97 ,struct A68t46 *,void *));
typedef struct A68t153  A68_153 ;    /* PROC(MODE26,MODE97) MODE46 */

A_PROCEDURE(A68_BOOL ,A68t154,(void),(void *));
typedef struct A68t154  A68_154 ;    /* PROC BOOL */
struct A68t156 ;

A_PROCEDURE(A68_VOID ,A68t155,(struct A68t156 ,struct A68t97 ),(struct A68t156 ,struct A68t97 ,void *));
typedef struct A68t155  A68_155 ;    /* PROC(MODE156,MODE97) VOID */
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

A_PROCEDURE(A68_VOID ,A68t171,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t172,(struct A68t171 ,struct A68t97 ),(struct A68t171 ,struct A68t97 ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE171,MODE97) VOID */
struct A68t173{
struct A68t174 * Database;
A68_VC  Description;
};
typedef struct A68t173  A68_173 ;    /* STRUCT(REF MODE174,REF MODE26)  */
struct A68t174{
A68_VC  Logical_name;
A68_VC  Db_name;
A68_BITS * Setup;
struct A68t175 * Df;
};
typedef struct A68t174  A68_174 ;    /* STRUCT(REF MODE26,REF MODE26,REF BITS,REF MODE175)  */
A_VECTOR(struct A68t176 ,A68t177);
typedef struct A68t177  A68_177 ;    /* VECTOR [] MODE176 */
struct A68t176{
A68_BITS  Code;
A_PAD_BITS(PAD_36)
A68_INT  First_block;
A_PAD_INT(PAD_37)
A68_INT  First_offset;
A_PAD_INT(PAD_38)
A68_INT  Data_elts;
A_PAD_INT(PAD_39)
A68_INT  Dp_elts;
A_PAD_INT(PAD_40)
A68_INT  Version;
A_PAD_INT(PAD_41)
A68_BITS  Sumcheck;
A_PAD_BITS(PAD_42)
};
typedef struct A68t176  A68_176 ;    /* STRUCT(BITS,INT,INT,INT,INT,INT,BITS)  */
A_VECTOR(struct A68t182 ,A68t181);
typedef struct A68t181  A68_181 ;    /* VECTOR [] MODE182 */
struct A68t183{
A68_INT  Block_num;
A_PAD_INT(PAD_43)
A68_INT  Offset;
A_PAD_INT(PAD_44)
};
typedef struct A68t183  A68_183 ;    /* STRUCT(INT,INT)  */
struct A68t182{
A68_BOOL  Shaky;
A_PAD_BOOL(PAD_45)
struct A68t183  Address;
A68_INT  Data_elts;
A_PAD_INT(PAD_46)
A68_INT  Dp_elts;
A_PAD_INT(PAD_47)
A68_INT  Code;
A_PAD_INT(PAD_48)
A68_INT  Version;
A_PAD_INT(PAD_49)
A68_INT  Read_size;
A_PAD_INT(PAD_50)
};
typedef struct A68t182  A68_182 ;    /* STRUCT(BOOL,MODE183,INT,INT,INT,INT,INT)  */
struct A68t175{
struct A68t176 * Root;
struct A68t176 * Indirs_dp;
struct A68t176 * Freelist_dp;
struct A68t176 * Pagetable_dp;
struct A68t176 * Append_dp;
struct A68t177  Free_block_dps;
struct A68t177  Pagetable_dps;
struct A68t127 ** File;
struct A68t127 ** Test_file;
struct A68t178 * Write_buffer;
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
struct A68t179 * Gc_ptrs;
struct A68t180 * Instore_vars;
struct A68t181  Indirections;
A68_BOOL * Writeable;
A68_BOOL * Last_update_failed;
A68_BOOL * Appending;
A68_BOOL * Collectable;
};
typedef struct A68t175  A68_175 ;    /* STRUCT(REF MODE176,REF MODE176,REF MODE176,REF MODE176,REF MODE176,REF MODE177,REF MODE177,REF REF MODE127,REF REF MODE127,REF MODE178,REF MODE26,REF MODE26,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF MODE32,REF MODE32,REF MODE32,REF MODE179,REF MODE180,REF MODE181,REF BOOL,REF BOOL,REF BOOL,REF BOOL)  */
struct A68t178{
A68_VC  Buffer;
struct A68t184 * List;
A68_INT * Buffer_ptr;
A68_INT * Upb;
A68_INT * Generation;
};
typedef struct A68t178  A68_178 ;    /* STRUCT(REF MODE26,REF MODE184,REF INT,REF INT,REF INT)  */
struct A68t179{
struct A68t183  Old;
struct A68t183  New;
struct A68t179 * Rest;
};
typedef struct A68t179  A68_179 ;    /* STRUCT(MODE183,MODE183,REF MODE179)  */
struct A68t180{
A68_INT  Indirection;
A_PAD_INT(PAD_51)
struct A68t180 * Rest;
};
typedef struct A68t180  A68_180 ;    /* STRUCT(INT,REF MODE180)  */
struct A68t184{
A68_INT  Lwb;
A_PAD_INT(PAD_52)
A68_INT  Upb;
A_PAD_INT(PAD_53)
struct A68t184 * Rest;
};
typedef struct A68t184  A68_184 ;    /* STRUCT(INT,INT,REF MODE184)  */

A_PROCEDURE(A68_BOOL ,A68t185,(struct A68t174 *,struct A68t176 ,struct A68t176 ),(struct A68t174 *,struct A68t176 ,struct A68t176 ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(REF MODE174,MODE176,MODE176) BOOL */

A_PROCEDURE(A68_INT ,A68t186,(struct A68t174 *,struct A68t176 ),(struct A68t174 *,struct A68t176 ,void *));
typedef struct A68t186  A68_186 ;    /* PROC(REF MODE174,MODE176) INT */

A_PROCEDURE(A68_VOID ,A68t187,(struct A68t174 *,struct A68t176 *),(struct A68t174 *,struct A68t176 *,void *));
typedef struct A68t187  A68_187 ;    /* PROC(REF MODE174) MODE176 */

A_PROCEDURE(struct A68t127 *,A68t188,(A68_VC ,A68_INT ,struct A68t97 ),(A68_VC ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t188  A68_188 ;    /* PROC(MODE26,INT,MODE97) REF MODE127 */

A_PROCEDURE(A68_VOID ,A68t189,(struct A68t127 *,A68_BOOL ,struct A68t174 *),(struct A68t127 *,A68_BOOL ,struct A68t174 *,void *));
typedef struct A68t189  A68_189 ;    /* PROC(REF MODE127,BOOL) MODE174 */

A_PROCEDURE(A68_BOOL ,A68t190,(struct A68t174 *),(struct A68t174 *,void *));
typedef struct A68t190  A68_190 ;    /* PROC(REF MODE174) BOOL */

A_PROCEDURE(A68_VOID ,A68t191,(struct A68t174 *,struct A68t176 ),(struct A68t174 *,struct A68t176 ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(REF MODE174,MODE176) VOID */

A_PROCEDURE(A68_VOID ,A68t192,(struct A68t174 *,struct A68t176 ,struct A68t97 ),(struct A68t174 *,struct A68t176 ,struct A68t97 ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(REF MODE174,MODE176,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t193,(struct A68t174 *,struct A68t97 ),(struct A68t174 *,struct A68t97 ,void *));
typedef struct A68t193  A68_193 ;    /* PROC(REF MODE174,MODE97) VOID */

A_PROCEDURE(A68_BOOL ,A68t194,(struct A68t174 *,A68_INT ),(struct A68t174 *,A68_INT ,void *));
typedef struct A68t194  A68_194 ;    /* PROC(REF MODE174,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t195,(struct A68t174 *,A68_INT ,struct A68t97 ),(struct A68t174 *,A68_INT ,struct A68t97 ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(REF MODE174,INT,MODE97) VOID */

A_PROCEDURE(struct A68t127 *,A68t196,(struct A68t174 *),(struct A68t174 *,void *));
typedef struct A68t196  A68_196 ;    /* PROC(REF MODE174) REF MODE127 */

A_PROCEDURE(A68_INT ,A68t197,(struct A68t174 *),(struct A68t174 *,void *));
typedef struct A68t197  A68_197 ;    /* PROC(REF MODE174) INT */

A_PROCEDURE(A68_VOID ,A68t198,(struct A68t174 *),(struct A68t174 *,void *));
typedef struct A68t198  A68_198 ;    /* PROC(REF MODE174) VOID */

A_PROCEDURE(A68_VOID ,A68t199,(struct A68t127 *,struct A68t127 *,struct A68t97 ),(struct A68t127 *,struct A68t127 *,struct A68t97 ,void *));
typedef struct A68t199  A68_199 ;    /* PROC(REF MODE127,REF MODE127,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t200,(A68_INT ,struct A68t92 *),(A68_INT ,struct A68t92 *,void *));
typedef struct A68t200  A68_200 ;    /* PROC(INT) MODE92 */

A_PROCEDURE(A68_BOOL ,A68t201,(struct A68t173 *,struct A68t176 ),(struct A68t173 *,struct A68t176 ,void *));
typedef struct A68t201  A68_201 ;    /* PROC(REF MODE173,MODE176) BOOL */
struct A68t202{
A68_VC  Rvc;
struct A68t202 * Rest;
};
typedef struct A68t202  A68_202 ;    /* STRUCT(REF MODE26,REF MODE202)  */
struct A68t203{
struct A68t173  Df;
struct A68t202  Head;
struct A68t202 * Current;
A68_INT  Index;
A_PAD_INT(PAD_54)
A68_INT  Type;
A_PAD_INT(PAD_55)
A68_VC  Ident;
A68_INT  Int;
A_PAD_INT(PAD_56)
};
typedef struct A68t203  A68_203 ;    /* STRUCT(MODE173,MODE202,REF MODE202,INT,INT,REF MODE26,INT)  */

A_PROCEDURE(struct A68t203 *,A68t204,(struct A68t173 *,struct A68t87 ,A68_INT ),(struct A68t173 *,struct A68t87 ,A68_INT ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(REF MODE173,MODE87,INT) REF MODE203 */

A_PROCEDURE(A68_VOID ,A68t205,(struct A68t203 *),(struct A68t203 *,void *));
typedef struct A68t205  A68_205 ;    /* PROC(REF MODE203) VOID */

A_PROCEDURE(struct A68t203 *,A68t206,(struct A68t173 *,struct A68t176 ),(struct A68t173 *,struct A68t176 ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(REF MODE173,MODE176) REF MODE203 */

A_PROCEDURE(A68_CHAR ,A68t207,(struct A68t203 *),(struct A68t203 *,void *));
typedef struct A68t207  A68_207 ;    /* PROC(REF MODE203) CHAR */

A_PROCEDURE(A68_VOID ,A68t208,(struct A68t203 *,A68_VC ),(struct A68t203 *,A68_VC ,void *));
typedef struct A68t208  A68_208 ;    /* PROC(REF MODE203,REF MODE26) VOID */

A_PROCEDURE(A68_BOOL ,A68t209,(struct A68t203 *),(struct A68t203 *,void *));
typedef struct A68t209  A68_209 ;    /* PROC(REF MODE203) BOOL */

A_PROCEDURE(A68_INT ,A68t210,(struct A68t203 *),(struct A68t203 *,void *));
typedef struct A68t210  A68_210 ;    /* PROC(REF MODE203) INT */

A_PROCEDURE(A68_VOID ,A68t211,(struct A68t203 *,A68_VC *),(struct A68t203 *,A68_VC *,void *));
typedef struct A68t211  A68_211 ;    /* PROC(REF MODE203) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t212,(struct A68t173 *,struct A68t97 ),(struct A68t173 *,struct A68t97 ,void *));
typedef struct A68t212  A68_212 ;    /* PROC(REF MODE173,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t213,(struct A68t173 *,A68_VC ,struct A68t97 ,struct A68t176 *),(struct A68t173 *,A68_VC ,struct A68t97 ,struct A68t176 *,void *));
typedef struct A68t213  A68_213 ;    /* PROC(REF MODE173,MODE26,MODE97) MODE176 */

A_PROCEDURE(A68_VOID ,A68t214,(struct A68t173 *,struct A68t177 ,struct A68t97 ,struct A68t176 *),(struct A68t173 *,struct A68t177 ,struct A68t97 ,struct A68t176 *,void *));
typedef struct A68t214  A68_214 ;    /* PROC(REF MODE173,MODE177,MODE97) MODE176 */

A_PROCEDURE(A68_INT ,A68t215,(struct A68t173 *,struct A68t176 ,struct A68t97 ),(struct A68t173 *,struct A68t176 ,struct A68t97 ,void *));
typedef struct A68t215  A68_215 ;    /* PROC(REF MODE173,MODE176,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t216,(struct A68t173 *,A68_VC ,struct A68t176 ,struct A68t97 ),(struct A68t173 *,A68_VC ,struct A68t176 ,struct A68t97 ,void *));
typedef struct A68t216  A68_216 ;    /* PROC(REF MODE173,REF MODE26,MODE176,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t217,(struct A68t173 *,struct A68t177 ,struct A68t176 ,struct A68t97 ),(struct A68t173 *,struct A68t177 ,struct A68t176 ,struct A68t97 ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(REF MODE173,REF MODE177,MODE176,MODE97) VOID */

A_PROCEDURE(struct A68t203 *,A68t218,(struct A68t173 *,struct A68t87 ),(struct A68t173 *,struct A68t87 ,void *));
typedef struct A68t218  A68_218 ;    /* PROC(REF MODE173,MODE87) REF MODE203 */

A_PROCEDURE(A68_VOID ,A68t219,(struct A68t203 *,struct A68t97 ),(struct A68t203 *,struct A68t97 ,void *));
typedef struct A68t219  A68_219 ;    /* PROC(REF MODE203,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t220,(struct A68t203 *,struct A68t97 ,struct A68t176 *),(struct A68t203 *,struct A68t97 ,struct A68t176 *,void *));
typedef struct A68t220  A68_220 ;    /* PROC(REF MODE203,MODE97) MODE176 */

A_PROCEDURE(A68_INT ,A68t221,(A68_CHAR ,struct A68t203 *,struct A68t97 ),(A68_CHAR ,struct A68t203 *,struct A68t97 ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(CHAR,REF MODE203,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t222,(A68_VC ,struct A68t203 *,struct A68t97 ),(A68_VC ,struct A68t203 *,struct A68t97 ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(MODE26,REF MODE203,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t223,(A68_INT ,struct A68t203 *,struct A68t97 ),(A68_INT ,struct A68t203 *,struct A68t97 ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(INT,REF MODE203,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t224,(A68_VC ,struct A68t203 *,struct A68t97 ),(A68_VC ,struct A68t203 *,struct A68t97 ,void *));
typedef struct A68t224  A68_224 ;    /* PROC(REF MODE26,REF MODE203,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t225,(A68_BOOL ,struct A68t203 *,struct A68t97 ),(A68_BOOL ,struct A68t203 *,struct A68t97 ,void *));
typedef struct A68t225  A68_225 ;    /* PROC(BOOL,REF MODE203,MODE97) INT */
struct A68t226{
A68_VC  Name;
A68_VC  Password;
A68_INT  Key;
A_PAD_INT(PAD_57)
A68_BOOL  Login;
A_PAD_BOOL(PAD_58)
struct A68t226 * Rest;
};
typedef struct A68t226  A68_226 ;    /* STRUCT(REF MODE26,REF MODE26,INT,BOOL,REF MODE226)  */
struct A68t227{
A68_INT  Key;
A_PAD_INT(PAD_59)
A68_BOOL  Changed;
A_PAD_BOOL(PAD_60)
struct A68t32  Version;
struct A68t177  Data;
struct A68t227 * Rest;
};
typedef struct A68t227  A68_227 ;    /* STRUCT(INT,BOOL,REF MODE32,REF MODE177,REF MODE227)  */
struct A68t228{
A68_INT  Sort;
A_PAD_INT(PAD_61)
A68_VC  Name;
A68_INT  Version;
A_PAD_INT(PAD_62)
struct A68t228 * Rest;
};
typedef struct A68t228  A68_228 ;    /* STRUCT(INT,REF MODE26,INT,REF MODE228)  */
struct A68t229{
A68_INT  Sort;
A_PAD_INT(PAD_63)
A68_VC  Name;
A68_BOOL  Export;
A_PAD_BOOL(PAD_64)
A68_BOOL  Import;
A_PAD_BOOL(PAD_65)
struct A68t54  Assemble;
A68_INT  Status;
A_PAD_INT(PAD_66)
A68_INT  Version;
A_PAD_INT(PAD_67)
A68_VC  Il;
struct A68t228 * Uses;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(INT,REF MODE26,BOOL,BOOL,REF MODE54,INT,INT,REF MODE26,REF MODE228)  */
struct A68t230{
struct A68t111  Ctn;
A68_VC  Name;
A68_VC  Rename;
A68_INT  Sort;
A_PAD_INT(PAD_68)
struct A68t176  Info;
};
typedef struct A68t230  A68_230 ;    /* STRUCT(MODE111,REF MODE26,REF MODE26,INT,MODE176)  */
struct A68t231{
struct A68t230  Binding;
struct A68t231 * Rest;
};
typedef struct A68t231  A68_231 ;    /* STRUCT(MODE230,REF MODE231)  */
struct A68t232{
A68_VC  Name;
A68_INT  Ctno;
A_PAD_INT(PAD_69)
struct A68t231 * Imports;
};
typedef struct A68t232  A68_232 ;    /* STRUCT(REF MODE26,INT,REF MODE231)  */
struct A68t233{
struct A68t232  Region;
struct A68t233 * Rest;
};
typedef struct A68t233  A68_233 ;    /* STRUCT(MODE232,REF MODE233)  */
A_VECTOR(struct A68t229 ,A68t235);
typedef struct A68t235  A68_235 ;    /* VECTOR [] MODE229 */
struct A68t234{
A68_VC  Name;
struct A68t176  Val;
A68_BOOL  Loadable;
A_PAD_BOOL(PAD_70)
A68_BOOL  Changed;
A_PAD_BOOL(PAD_71)
struct A68t235  Decls;
struct A68t227 * Declattributes;
struct A68t233 * Regions;
};
typedef struct A68t234  A68_234 ;    /* STRUCT(REF MODE26,MODE176,BOOL,BOOL,REF MODE235,REF MODE227,REF MODE233)  */
struct A68t236{
struct A68t234  Context;
struct A68t236 * Rest;
};
typedef struct A68t236  A68_236 ;    /* STRUCT(MODE234,REF MODE236)  */
struct A68t237{
A68_VC  Name;
struct A68t127 * File;
struct A68t173 * Discfile;
struct A68t111  Currentct;
A68_VC  Libprompt;
A68_BOOL  Libchanged;
A_PAD_BOOL(PAD_72)
struct A68t177  Rootptrs;
A68_INT  Version;
A_PAD_INT(PAD_73)
A68_VC  Datecleared;
A68_VC  Timecleared;
A68_VC  Datelastwritten;
A68_VC  Timelastwritten;
struct A68t32  Keys;
struct A68t226 * Classes;
struct A68t236 * Contexts;
};
typedef struct A68t237  A68_237 ;    /* STRUCT(REF MODE26,REF MODE127,REF MODE173,MODE111,REF MODE26,BOOL,MODE177,INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,MODE32,REF MODE226,REF MODE236)  */

A_PROCEDURE(A68_VOID ,A68t238,(A68_BOOL ,struct A68t237 *),(A68_BOOL ,struct A68t237 *,void *));
typedef struct A68t238  A68_238 ;    /* PROC(BOOL) MODE237 */
struct A68t239{
struct A68t234 * Context;
struct A68t232 * Region;
};
typedef struct A68t239  A68_239 ;    /* STRUCT(REF MODE234,REF MODE232)  */
struct A68t240{
A68_VC  Name;
A68_INT  Date;
A_PAD_INT(PAD_74)
};
typedef struct A68t240  A68_240 ;    /* STRUCT(REF MODE26,INT)  */

A_PROCEDURE(A68_BOOL ,A68t241,(struct A68t111 ,struct A68t111 ),(struct A68t111 ,struct A68t111 ,void *));
typedef struct A68t241  A68_241 ;    /* PROC(MODE111,MODE111) BOOL */

A_PROCEDURE(A68_BOOL ,A68t242,(struct A68t239 ,struct A68t239 ),(struct A68t239 ,struct A68t239 ,void *));
typedef struct A68t242  A68_242 ;    /* PROC(MODE239,MODE239) BOOL */

A_PROCEDURE(A68_VOID ,A68t243,(struct A68t111 ,A68_VC *),(struct A68t111 ,A68_VC *,void *));
typedef struct A68t243  A68_243 ;    /* PROC(MODE111) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t244,(struct A68t239 ,A68_VC *),(struct A68t239 ,A68_VC *,void *));
typedef struct A68t244  A68_244 ;    /* PROC(MODE239) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t245,(struct A68t239 ,struct A68t111 *),(struct A68t239 ,struct A68t111 *,void *));
typedef struct A68t245  A68_245 ;    /* PROC(MODE239) MODE111 */

A_PROCEDURE(A68_BOOL ,A68t246,(struct A68t234 *,struct A68t97 ),(struct A68t234 *,struct A68t97 ,void *));
typedef struct A68t246  A68_246 ;    /* PROC(REF MODE234,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t247,(A68_VC *,A68_VC *),(A68_VC *,A68_VC *,void *));
typedef struct A68t247  A68_247 ;    /* PROC(REF REF MODE26,REF REF MODE26) VOID */

A_PROCEDURE(struct A68t237 *,A68t248,(void),(void *));
typedef struct A68t248  A68_248 ;    /* PROC REF MODE237 */

A_PROCEDURE(struct A68t234 *,A68t249,(A68_VC ),(A68_VC ,void *));
typedef struct A68t249  A68_249 ;    /* PROC(REF MODE26) REF MODE234 */

A_PROCEDURE(A68_VOID ,A68t250,(struct A68t234 *,A68_VC ,struct A68t239 *),(struct A68t234 *,A68_VC ,struct A68t239 *,void *));
typedef struct A68t250  A68_250 ;    /* PROC(REF MODE234,REF MODE26) MODE239 */

A_PROCEDURE(struct A68t231 *,A68t251,(struct A68t239 ),(struct A68t239 ,void *));
typedef struct A68t251  A68_251 ;    /* PROC(MODE239) REF MODE231 */

A_PROCEDURE(struct A68t230 *,A68t252,(struct A68t239 ,A68_VC ),(struct A68t239 ,A68_VC ,void *));
typedef struct A68t252  A68_252 ;    /* PROC(MODE239,REF MODE26) REF MODE230 */

A_PROCEDURE(struct A68t234 *,A68t253,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t253  A68_253 ;    /* PROC(REF MODE26,MODE97) REF MODE234 */

A_PROCEDURE(A68_VOID ,A68t254,(struct A68t234 *,A68_VC ,struct A68t97 ,struct A68t239 *),(struct A68t234 *,A68_VC ,struct A68t97 ,struct A68t239 *,void *));
typedef struct A68t254  A68_254 ;    /* PROC(REF MODE234,REF MODE26,MODE97) MODE239 */

A_PROCEDURE(A68_VOID ,A68t255,(struct A68t111 ,struct A68t97 ,struct A68t239 *),(struct A68t111 ,struct A68t97 ,struct A68t239 *,void *));
typedef struct A68t255  A68_255 ;    /* PROC(MODE111,MODE97) MODE239 */

A_PROCEDURE(struct A68t230 *,A68t256,(struct A68t239 ,A68_VC ,struct A68t97 ),(struct A68t239 ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t256  A68_256 ;    /* PROC(MODE239,REF MODE26,MODE97) REF MODE230 */

A_PROCEDURE(A68_VOID ,A68t257,(struct A68t158 ),(struct A68t158 ,void *));
typedef struct A68t257  A68_257 ;    /* PROC(MODE158) VOID */

A_PROCEDURE(A68_VOID ,A68t258,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t258  A68_258 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,57,A68t259);
typedef struct A68t259  A68_259 ;    /* STRUCT 57 CHAR */
struct A68t260{
struct A68t234 * Ct;
A68_INT  Offset;
A_PAD_INT(PAD_75)
struct A68t177  Attdps;
struct A68t32  Attinfo;
};
typedef struct A68t260  A68_260 ;    /* STRUCT(REF MODE234,INT,REF MODE177,REF MODE32)  */

A_PROCEDURE(A68_VOID ,A68t261,(struct A68t234 *,struct A68t97 ,struct A68t177 *),(struct A68t234 *,struct A68t97 ,struct A68t177 *,void *));
typedef struct A68t261  A68_261 ;    /* PROC(REF MODE234,MODE97) REF MODE177 */

A_PROCEDURE(A68_VOID ,A68t262,(A68_BOOL ,struct A68t177 *),(A68_BOOL ,struct A68t177 *,void *));
typedef struct A68t262  A68_262 ;    /* PROC(BOOL) MODE177 */

A_PROCEDURE(A68_VOID ,A68t263,(A68_VC ,A68_BOOL ,struct A68t97 ,struct A68t260 *),(A68_VC ,A68_BOOL ,struct A68t97 ,struct A68t260 *,void *));
typedef struct A68t263  A68_263 ;    /* PROC(REF MODE26,BOOL,MODE97) MODE260 */

A_PROCEDURE(A68_VOID ,A68t264,(struct A68t260 ,struct A68t97 ),(struct A68t260 ,struct A68t97 ,void *));
typedef struct A68t264  A68_264 ;    /* PROC(MODE260,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t265,(A68_INT ,struct A68t97 ),(A68_INT ,struct A68t97 ,void *));
typedef struct A68t265  A68_265 ;    /* PROC(INT,MODE97) VOID */

A_PROCEDURE(struct A68t226 *,A68t266,(A68_VC ),(A68_VC ,void *));
typedef struct A68t266  A68_266 ;    /* PROC(MODE26) REF MODE226 */

A_PROCEDURE(struct A68t226 *,A68t267,(A68_INT ),(A68_INT ,void *));
typedef struct A68t267  A68_267 ;    /* PROC(INT) REF MODE226 */

A_PROCEDURE(A68_VOID ,A68t268,(struct A68t226 *,A68_INT ,struct A68t97 ),(struct A68t226 *,A68_INT ,struct A68t97 ,void *));
typedef struct A68t268  A68_268 ;    /* PROC(REF MODE226,INT,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,45,A68t269);
typedef struct A68t269  A68_269 ;    /* STRUCT 45 CHAR */
A_ISTRUCT(A68_CHAR ,41,A68t270);
typedef struct A68t270  A68_270 ;    /* STRUCT 41 CHAR */

A_PROCEDURE(struct A68t226 *,A68t271,(A68_INT ,struct A68t97 ),(A68_INT ,struct A68t97 ,void *));
typedef struct A68t271  A68_271 ;    /* PROC(INT,MODE97) REF MODE226 */

A_PROCEDURE(A68_INT ,A68t272,(A68_INT ,struct A68t97 ),(A68_INT ,struct A68t97 ,void *));
typedef struct A68t272  A68_272 ;    /* PROC(INT,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t273,(A68_VC ,A68_VC ,A68_INT ,A68_INT ,struct A68t97 ),(A68_VC ,A68_VC ,A68_INT ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t273  A68_273 ;    /* PROC(MODE26,MODE26,INT,INT,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,16,A68t274);
typedef struct A68t274  A68_274 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t275);
typedef struct A68t275  A68_275 ;    /* STRUCT 19 CHAR */

A_PROCEDURE(A68_VOID ,A68t276,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t276  A68_276 ;    /* PROC(BOOL) VOID */

A_PROCEDURE(struct A68t226 *,A68t277,(struct A68t203 *),(struct A68t203 *,void *));
typedef struct A68t277  A68_277 ;    /* PROC(REF MODE203) REF MODE226 */

A_PROCEDURE(A68_BOOL ,A68t278,(A68_VC ,A68_INT ,A68_BOOL ,A68_BOOL ),(A68_VC ,A68_INT ,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t278  A68_278 ;    /* PROC(MODE26,INT,BOOL,BOOL) BOOL */

A_PROCEDURE(A68_BOOL ,A68t279,(struct A68t278 ),(struct A68t278 ,void *));
typedef struct A68t279  A68_279 ;    /* PROC(MODE278) BOOL */

A_PROCEDURE(A68_VOID ,A68t280,(A68_VC ,A68_VC ,struct A68t97 ),(A68_VC ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t280  A68_280 ;    /* PROC(MODE26,MODE26,MODE97) VOID */

A_PROCEDURE(A68_INT ,A68t281,(A68_INT ,A68_VC ,struct A68t97 ),(A68_INT ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t281  A68_281 ;    /* PROC(INT,MODE26,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t282,(A68_VC ,A68_VC ,struct A68t97 ),(A68_VC ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t282  A68_282 ;    /* PROC(MODE26,MODE26,MODE97) INT */
A_ISTRUCT(A68_CHAR ,39,A68t283);
typedef struct A68t283  A68_283 ;    /* STRUCT 39 CHAR */
A_ISTRUCT(A68_CHAR ,33,A68t284);
typedef struct A68t284  A68_284 ;    /* STRUCT 33 CHAR */

A_PROCEDURE(A68_VOID ,A68t285,(A68_VC ,struct A68t176 ,A68_INT ,struct A68t97 ),(A68_VC ,struct A68t176 ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t285  A68_285 ;    /* PROC(MODE26,MODE176,INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t286,(A68_VC ,A68_INT ,struct A68t97 ,struct A68t176 *),(A68_VC ,A68_INT ,struct A68t97 ,struct A68t176 *,void *));
typedef struct A68t286  A68_286 ;    /* PROC(MODE26,INT,MODE97) MODE176 */

A_PROCEDURE(A68_BOOL ,A68t287,(A68_INT ,struct A68t97 ,struct A68t97 ),(A68_INT ,struct A68t97 ,struct A68t97 ,void *));
typedef struct A68t287  A68_287 ;    /* PROC(INT,MODE97,MODE97) BOOL */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from libmodes --- */
extern A68_176  UACAELA_nilptr;
extern A68_BOOL  UXIAELA_isnilptr(struct A68t173 *,struct A68t176 );
extern A68_226 * KTJAELA_nilclasses;
extern A68_234 * DVJAELA_nilcontxt;
extern A68_236 * EVJAELA_nilcontexts;
extern A68_237 * HXJAELA_library;
extern A68_173 * TYJAELA_discfile;
extern A68_176 * EZJAELA_ptrattinfo;
extern A68_176 * GZJAELA_ptrattributes;
extern A68_VOID  MDKAELA_setlibchanged(struct A68t97 );
extern A68_234 * XEKAELA_check_context(A68_VC ,struct A68t97 );
/* --- End of imports from libmodes --- */


/* --- Imports from databasebuffers --- */
#define SNBAELA_block_size 512
#define RXIAELA_validwrite 2
extern A68_203 * ZXIAELA_makebuffer(struct A68t173 *,struct A68t87 ,A68_INT );
extern A68_203 * WYIAELA_readbuffer(struct A68t173 *,struct A68t176 );
extern A68_INT  YBJAELA_in2(struct A68t203 *);
extern A68_VOID  CCJAELA_inid2(struct A68t203 *,A68_VC *);
extern A68_VOID  AEJAELA_mywritediscptrs(struct A68t173 *,struct A68t177 ,struct A68t97 ,A68_176 *);
extern A68_INT  UEJAELA_ndiscptrs(struct A68t173 *,struct A68t176 ,struct A68t97 );
extern A68_VOID  FFJAELA_myreaddiscptrs(struct A68t173 *,struct A68t177 ,struct A68t176 ,struct A68t97 );
extern A68_203 * IFJAELA_startwrite(struct A68t173 *,struct A68t87 );
extern A68_VOID  CGJAELA_endwrite(struct A68t203 *,struct A68t97 ,A68_176 *);
extern A68_INT  YHJAELA_outint2(A68_INT ,struct A68t203 *,struct A68t97 );
extern A68_INT  UIJAELA_outid2(A68_VC ,struct A68t203 *,struct A68t97 );
/* --- End of imports from databasebuffers --- */


/* --- Imports from osinterface --- */
extern A68_129  BOBAOSI_update_access;
extern A68_129  FOBAOSI_update_truncate_access;
#define HDAAOST_block_update_access BOBAOSI_update_access
#define IDAAOST_block_update_truncate_access FOBAOSI_update_truncate_access
#include <stdlib.h>
#define EXIT(status) exit(A_INT_int(status))

#define BZBAOSI_exit EXIT
extern A68_INT  ZACAOSI_get_cpu_time(void);
extern int A_argc;
extern char **A_argv;
#define A_prelude(argc,argv) A_argc=argc; A_argv = argv

#define VPCAOSI_prelude A_prelude
#include "Alibrary.h"

#define PBCAOSI_garbage_collect Agc_collect
#include <math.h>

#define GQAAOST_sqrt sqrt
/* --- End of imports from osinterface --- */


/* --- Imports from basics --- */
extern A68_VOID  RSCAOST_makeid(A68_VC ,A68_VC *);
extern A68_VC  NTCAOST_nilid;
extern A68_VC  TTCAOST_nullid;
/* --- End of imports from basics --- */


/* --- Imports from messageproc --- */
extern A68_92  WHAAOSI_user;
extern A68_92  CIAAOSI_log;
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VOID  FCAAOSI_intchars(A68_INT ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void FTJAELA(void);   /* libmodes */
extern void NWIAELA(void);   /* databasebuffers */
extern void PCAAOST(void);   /* osinterface */
extern void JSCAOST(void);   /* basics */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_259   PPOAELA = {"$Id: attrlevel1.a68,v 34.2 1995/03/29 13:03:16 ella Exp $"}; 
A_GISVEC(A68_VC ,QPOAELA,PPOAELA,57)
static A68_269   XVOAELA = {"I can't find an attribute class with the key "}; 
A_GISVEC(A68_VC ,YVOAELA,XVOAELA,45)
static A68_270   BWOAELA = {"You have not logged into attribute class "}; 
A_GISVEC(A68_VC ,CWOAELA,BWOAELA,41)
#define QWOAELA_normal_class 1
#define RWOAELA_declaration_class 2
#define VWOAELA_perm_life 0
#define WWOAELA_decl_life 1
#define XWOAELA_spec_life 2
#define YWOAELA_body_life 3
#define LXOAELA_range 100000
static A68_274   JYOAELA = {"Attribute class "}; 
static A68_275   KYOAELA = {" already in library"}; 
A_GISVEC(A68_VC ,LYOAELA,JYOAELA,16)
A_GISVEC(A68_VC ,MYOAELA,KYOAELA,19)
static A68_283   NCPAELA = {"I can't find an attribute class called "}; 
A_GISVEC(A68_VC ,OCPAELA,NCPAELA,39)
static A68_284   RCPAELA = {" is not the correct password for "}; 
A_GISVEC(A68_VC ,SCPAELA,RCPAELA,33)
typedef struct   /* env of non-global proc */
{
A68_INT * VPOAELA_offset;
} BQOAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_176  XPOAELA_dp;
A68_97  Msg;
} KQOAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_177 * XQOAELA_dps;
A68_INT  WQOAELA_offset;
A_PAD_INT(PAD_76)
} CROAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  MSOAELA_number;
A_PAD_INT(PAD_77)
} QSOAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  MSOAELA_number;
A_PAD_INT(PAD_78)
A68_INT * KSOAELA_offset;
} YSOAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  BUOAELA_number;
A_PAD_INT(PAD_79)
} FUOAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_177 * YTOAELA_dps;
} NUOAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Restart;
A_PAD_BOOL(PAD_80)
A68_277  AZOAELA_makeclasses;
} CZOAELA_makeclasses;
typedef struct   /* env of non-global proc */
{
A68_277  SZOAELA_makeclasses;
} UZOAELA_makeclasses;
typedef struct   /* env of non-global proc */
{
int dummy;
} LAPAELA_generator;

A_STATIC A68_VOID  TPOAELA_ct_to_dps(A68_234 * Ct, A68_97  Msg, A68_177  *ReturnedValue);

A_STATIC A68_VOID  AQOAELA_generator(A68_BOOL  YPOAELA_anonymous, A68_177  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JQOAELA_generator(A68_BOOL  HQOAELA_anonymous, A68_177  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SQOAELA_readattpointers(A68_VC  Ctn, A68_BOOL  Info, A68_97  Msg, A68_260  *ReturnedValue);

A_STATIC A68_VOID  BROAELA_generator(A68_BOOL  ZQOAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QROAELA_writeattpointers(A68_260  Attp, A68_97  Msg);

A_STATIC A68_VOID  FSOAELA_addclass(A68_97  Msg);

A_STATIC A68_VOID  PSOAELA_generator(A68_BOOL  NSOAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XSOAELA_generator(A68_BOOL  VSOAELA_anonymous, A68_177  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VTOAELA_subtractclass(A68_INT  Index, A68_97  Msg);

A_STATIC A68_VOID  EUOAELA_generator(A68_BOOL  CUOAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MUOAELA_generator(A68_BOOL  KUOAELA_anonymous, A68_177  *ReturnedValue, void *NonLocals);

A_STATIC A68_226 * KVOAELA_qfindname(A68_VC  Name);

A68_226 * PVOAELA_qfindclass(A68_INT  Key);

A_STATIC A68_VOID  WVOAELA_attcheck(A68_226 * Att, A68_INT  Key, A68_97  Msg);

A_STATIC A68_226 * GWOAELA_findclass(A68_INT  Key, A68_97  Msg);

A_STATIC A68_INT  LWOAELA_findindex(A68_INT  Key, A68_97  Msg);

A68_INT  TWOAELA_class_sort(A68_INT  Key);

A68_INT  AXOAELA_class_lifetime(A68_INT  Key);

A_STATIC A68_INT  GXOAELA_makekey(A68_INT  Classsort, A68_INT  Lifetime);

A68_VOID  DYOAELA_intro_class(A68_VC  N, A68_VC  P, A68_INT  Classsort, A68_INT  Lifetime, A68_97  Msg);

A68_VOID  XYOAELA_get_classes(A68_BOOL  Restart);

A_STATIC A68_226 * BZOAELA_makeclasses(A68_203 * Buff, void *NonLocals);

A68_VOID  PZOAELA_open_allclasses(void);

A_STATIC A68_226 * TZOAELA_makeclasses(A68_203 * Buff, void *NonLocals);

A68_VOID  HAPAELA_put_classes(A68_97  Msg);

A_STATIC A68_VOID  KAPAELA_generator(A68_BOOL  IAPAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_BOOL  VAPAELA_scan_classes(A68_278  Action);

A68_VOID  EBPAELA_introduce_class(A68_VC  N, A68_VC  P, A68_97  Msg);

A68_VOID  HBPAELA_remove_class(A68_INT  Key, A68_97  Msg);

A68_INT  PBPAELA_rename_password(A68_INT  Key, A68_VC  New_password, A68_97  Msg);

A68_INT  ACPAELA_rename_class(A68_INT  Key, A68_VC  Newname, A68_97  Msg);

A68_INT  LCPAELA_login_class(A68_VC  Name, A68_VC  Password, A68_97  Msg);

A68_VOID  XCPAELA_logout_class(A68_INT  Key, A68_97  Msg);

A68_VOID  EDPAELA_write_class(A68_VC  Ctn, A68_176  Attptr, A68_INT  Key, A68_97  Msg);

A68_VOID  RDPAELA_read_class(A68_VC  Ctn, A68_INT  Key, A68_97  Msg, A68_176  *ReturnedValue);

A68_BOOL  CEPAELA_can_remove_class(A68_INT  Key, A68_97  Print, A68_97  Msg);

A_STATIC A68_VOID  AQOAELA_generator(A68_BOOL  YPOAELA_anonymous, A68_177  *ReturnedValue, void *NonLocals)
#define NL(x) (((BQOAELA_generator *)NonLocals)->x)
{ 
A68_177  CQOAELA;  /* clause result */
A68_177  DQOAELA;  /* OPERATORS - dynamic generator */
{ 
DQOAELA.upb = (1+(*NL(VPOAELA_offset))) ;
( YPOAELA_anonymous? A_VLOC(A68_176 ,DQOAELA): A_VHEAP(A68_176 ,DQOAELA) );
CQOAELA = DQOAELA;
} 
*ReturnedValue = (CQOAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  JQOAELA_generator(A68_BOOL  HQOAELA_anonymous, A68_177  *ReturnedValue, void *NonLocals)
#define NL(x) (((KQOAELA_generator *)NonLocals)->x)
{ 
A68_177  LQOAELA;  /* clause result */
A68_177  MQOAELA;  /* OPERATORS - dynamic generator */
{ 
MQOAELA.upb = UEJAELA_ndiscptrs(TYJAELA_discfile, NL(XPOAELA_dp), NL(Msg)) ;
( HQOAELA_anonymous? A_VLOC(A68_176 ,MQOAELA): A_VHEAP(A68_176 ,MQOAELA) );
LQOAELA = MQOAELA;
} 
*ReturnedValue = (LQOAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  BROAELA_generator(A68_BOOL  ZQOAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((CROAELA_generator *)NonLocals)->x)
{ 
A68_32  DROAELA;  /* clause result */
A68_32  EROAELA;  /* OPERATORS - dynamic generator */
{ 
EROAELA.upb = ((*NL(XQOAELA_dps)).upb-NL(WQOAELA_offset)) ;
( ZQOAELA_anonymous? A_VLOC(A68_INT ,EROAELA): A_VHEAP(A68_INT ,EROAELA) );
DROAELA = EROAELA;
} 
*ReturnedValue = (DROAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  PSOAELA_generator(A68_BOOL  NSOAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((QSOAELA_generator *)NonLocals)->x)
{ 
A68_32  RSOAELA;  /* clause result */
A68_32  SSOAELA;  /* OPERATORS - dynamic generator */
{ 
SSOAELA.upb = NL(MSOAELA_number) ;
( NSOAELA_anonymous? A_VLOC(A68_INT ,SSOAELA): A_VHEAP(A68_INT ,SSOAELA) );
RSOAELA = SSOAELA;
} 
*ReturnedValue = (RSOAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  XSOAELA_generator(A68_BOOL  VSOAELA_anonymous, A68_177  *ReturnedValue, void *NonLocals)
#define NL(x) (((YSOAELA_generator *)NonLocals)->x)
{ 
A68_177  ZSOAELA;  /* clause result */
A68_177  ATOAELA;  /* OPERATORS - dynamic generator */
{ 
ATOAELA.upb = (NL(MSOAELA_number)+(*NL(KSOAELA_offset))) ;
( VSOAELA_anonymous? A_VLOC(A68_176 ,ATOAELA): A_VHEAP(A68_176 ,ATOAELA) );
ZSOAELA = ATOAELA;
} 
*ReturnedValue = (ZSOAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  EUOAELA_generator(A68_BOOL  CUOAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((FUOAELA_generator *)NonLocals)->x)
{ 
A68_32  GUOAELA;  /* clause result */
A68_32  HUOAELA;  /* OPERATORS - dynamic generator */
{ 
HUOAELA.upb = NL(BUOAELA_number) ;
( CUOAELA_anonymous? A_VLOC(A68_INT ,HUOAELA): A_VHEAP(A68_INT ,HUOAELA) );
GUOAELA = HUOAELA;
} 
*ReturnedValue = (GUOAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  MUOAELA_generator(A68_BOOL  KUOAELA_anonymous, A68_177  *ReturnedValue, void *NonLocals)
#define NL(x) (((NUOAELA_generator *)NonLocals)->x)
{ 
A68_177  OUOAELA;  /* clause result */
A68_177  PUOAELA;  /* OPERATORS - dynamic generator */
{ 
PUOAELA.upb = (*NL(YTOAELA_dps)).upb ;
( KUOAELA_anonymous? A_VLOC(A68_176 ,PUOAELA): A_VHEAP(A68_176 ,PUOAELA) );
OUOAELA = PUOAELA;
} 
*ReturnedValue = (OUOAELA);
return;
} 
#undef NL

A_STATIC A68_226 * BZOAELA_makeclasses(A68_203 * Buff, void *NonLocals)
#define NL(x) (((CZOAELA_makeclasses *)NonLocals)->x)
{ 
A68_VC  DZOAELA;  /* avoid structure result */
A68_VC  EZOAELA_name;
A68_VC  FZOAELA;  /* avoid structure result */
A68_VC  GZOAELA_pword;
A68_INT  HZOAELA_key;
A68_BOOL  IZOAELA_login;
A68_226  JZOAELA;  /* collateral clause result */
A68_226 * KZOAELA;  /* clause result */
A68_226 * LZOAELA;  /* YIELD */
A_PROC_ENTRY(makeclasses);
 /* line 327: */
{ 
 /* line 328: */
if ( ((*(&(Buff->Index)))<(*(&((*(&(Buff->Current)))->Rvc))).upb) )
{ 
CCJAELA_inid2( Buff, &DZOAELA );
EZOAELA_name = DZOAELA;
 /* line 329: */
CCJAELA_inid2( Buff, &FZOAELA );
GZOAELA_pword = FZOAELA;
 /* line 330: */
HZOAELA_key = YBJAELA_in2(Buff);
 /* line 331: */
IZOAELA_login = (YBJAELA_in2(Buff)==1);
 /* line 332: */
 /* line 333: */
JZOAELA.Name = EZOAELA_name;
JZOAELA.Password = GZOAELA_pword;
JZOAELA.Key = HZOAELA_key;
if ( NL(Restart) )
{ 
JZOAELA.Login = IZOAELA_login;
} 
else
{ 
JZOAELA.Login = A68_FALSE;
} 
 /* line 334: */
JZOAELA.Rest = A_CALLPROC(NL(AZOAELA_makeclasses),(Buff),(Buff,(NL(AZOAELA_makeclasses)).nonlocals));
 /* line 335: */
LZOAELA = A_HEAP(A68_226 ) ;
(*LZOAELA) = JZOAELA ;
KZOAELA = LZOAELA;
} 
else
{ 
 /* line 336: */
KZOAELA = KTJAELA_nilclasses;
} 
} 
A_PROC_EXIT(makeclasses);
return( KZOAELA );
} 
#undef NL

A_STATIC A68_226 * TZOAELA_makeclasses(A68_203 * Buff, void *NonLocals)
#define NL(x) (((UZOAELA_makeclasses *)NonLocals)->x)
{ 
A68_VC  VZOAELA;  /* avoid structure result */
A68_VC  WZOAELA_name;
A68_VC  XZOAELA;  /* avoid structure result */
A68_VC  YZOAELA_pword;
A68_INT  ZZOAELA_key;
A68_226  AAPAELA;  /* collateral clause result */
A68_226 * BAPAELA;  /* clause result */
A68_226 * CAPAELA;  /* YIELD */
A_PROC_ENTRY(makeclasses);
 /* line 351: */
{ 
 /* line 352: */
if ( ((*(&(Buff->Index)))<(*(&((*(&(Buff->Current)))->Rvc))).upb) )
{ 
CCJAELA_inid2( Buff, &VZOAELA );
WZOAELA_name = VZOAELA;
 /* line 353: */
CCJAELA_inid2( Buff, &XZOAELA );
YZOAELA_pword = XZOAELA;
 /* line 354: */
ZZOAELA_key = YBJAELA_in2(Buff);
 /* line 355: */
YBJAELA_in2(Buff);
 /* line 356: */
AAPAELA.Name = WZOAELA_name;
AAPAELA.Password = YZOAELA_pword;
AAPAELA.Key = ZZOAELA_key;
AAPAELA.Login = A68_TRUE;
 /* line 357: */
AAPAELA.Rest = A_CALLPROC(NL(SZOAELA_makeclasses),(Buff),(Buff,(NL(SZOAELA_makeclasses)).nonlocals));
 /* line 358: */
CAPAELA = A_HEAP(A68_226 ) ;
(*CAPAELA) = AAPAELA ;
BAPAELA = CAPAELA;
} 
else
{ 
 /* line 359: */
BAPAELA = KTJAELA_nilclasses;
} 
} 
A_PROC_EXIT(makeclasses);
return( BAPAELA );
} 
#undef NL

A_STATIC A68_VOID  KAPAELA_generator(A68_BOOL  IAPAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((LAPAELA_generator *)NonLocals)->x)
{ 
A68_VC  MAPAELA;  /* clause result */
A68_VC  NAPAELA;  /* OPERATORS - dynamic generator */
{ 
NAPAELA.upb = SNBAELA_block_size ;
( IAPAELA_anonymous? A_VLOC(A68_CHAR ,NAPAELA): A_VHEAP(A68_CHAR ,NAPAELA) );
MAPAELA = NAPAELA;
} 
*ReturnedValue = (MAPAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  TPOAELA_ct_to_dps(A68_234 * Ct, A68_97  Msg, A68_177  *ReturnedValue)
{ 
A68_177  UPOAELA_dps;
A68_INT  VPOAELA_offset;
A68_176  WPOAELA;  /* clause result */
A68_176  XPOAELA_dp;
A68_262  ZPOAELA_generator;   /* proc value of non-global proc */
A68_177  EQOAELA;  /* avoid structure result */
A68_176 * FQOAELA_d;
A68_INT  GQOAELA;  /* forall loop counter */
A68_262  IQOAELA_generator;   /* proc value of non-global proc */
A68_177  NQOAELA;  /* avoid structure result */
A68_177  OQOAELA;  /* clause result */
A_PROC_ENTRY(ct_to_dps);
 /* line 112: */
 /* line 113: */
{ 
 /* line 114: */
VPOAELA_offset = 0;
 /* line 115: */
 /* line 116: */
 /* line 117: */
if ( (Ct==DVJAELA_nilcontxt) )
{ 
WPOAELA = (*GZJAELA_ptrattributes);
} 
else
{ 
VPOAELA_offset = 1;
 /* line 118: */
WPOAELA = (*(&(Ct->Val)));
} 
XPOAELA_dp = WPOAELA;
 /* line 119: */
 /* line 120: */
if ( UXIAELA_isnilptr(TYJAELA_discfile, XPOAELA_dp) )
{ 
A_CLOSURE( ZPOAELA_generator, AQOAELA_generator, BQOAELA_generator );
(( BQOAELA_generator * ) ( ZPOAELA_generator.nonlocals )) -> VPOAELA_offset = (&VPOAELA_offset);
A_CALLPROC(ZPOAELA_generator,(A68_FALSE, &EQOAELA),(A68_FALSE, &EQOAELA,(ZPOAELA_generator).nonlocals));
UPOAELA_dps = EQOAELA;
 /* line 121: */
GQOAELA = UPOAELA_dps.upb -1;
FQOAELA_d = UPOAELA_dps.data;
for (;GQOAELA-- >= 0;
(FQOAELA_d++
) )
{
(*FQOAELA_d) = UACAELA_nilptr;
}
 /* line 122: */
} 
else
{ 
A_CLOSURE( IQOAELA_generator, JQOAELA_generator, KQOAELA_generator );
(( KQOAELA_generator * ) ( IQOAELA_generator.nonlocals )) -> XPOAELA_dp = XPOAELA_dp;
(( KQOAELA_generator * ) ( IQOAELA_generator.nonlocals )) -> Msg = Msg;
A_CALLPROC(IQOAELA_generator,(A68_FALSE, &NQOAELA),(A68_FALSE, &NQOAELA,(IQOAELA_generator).nonlocals));
UPOAELA_dps = NQOAELA;
 /* line 123: */
 /* line 124: */
FFJAELA_myreaddiscptrs(TYJAELA_discfile, UPOAELA_dps, XPOAELA_dp, Msg);
} 
 /* line 125: */
 /* line 126: */
OQOAELA = UPOAELA_dps;
} 
A_PROC_EXIT(ct_to_dps);
*ReturnedValue = (OQOAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  SQOAELA_readattpointers(A68_VC  Ctn, A68_BOOL  Info, A68_97  Msg, A68_260  *ReturnedValue)
{ 
A68_234 * TQOAELA;  /* clause result */
A68_234 * UQOAELA_ct;
A68_INT  VQOAELA;  /* clause result */
A68_INT  WQOAELA_offset;
A68_177  YQOAELA;  /* avoid structure result */
A68_177  XQOAELA_dps;
A68_33  AROAELA_generator;   /* proc value of non-global proc */
A68_32  FROAELA;  /* avoid structure result */
A68_32  GROAELA_attinfo;
A68_203 * HROAELA_buffer;
A68_INT * IROAELA_int;
A68_INT  JROAELA;  /* forall loop counter */
A68_INT * KROAELA_int;
A68_INT  LROAELA;  /* forall loop counter */
A68_260  MROAELA;  /* collateral clause result */
A68_260  NROAELA;  /* clause result */
A_PROC_ENTRY(readattpointers);
 /* line 129: */
 /* line 131: */
{ 
if ( A_VC_EQ(Ctn,TTCAOST_nullid) )
{ 
TQOAELA = DVJAELA_nilcontxt;
} 
else
{ 
TQOAELA = XEKAELA_check_context(Ctn, Msg);
} 
UQOAELA_ct = TQOAELA;
 /* line 132: */
if ( A_VC_EQ(Ctn,TTCAOST_nullid) )
{ 
VQOAELA = 1;
} 
else
{ 
VQOAELA = 2;
} 
WQOAELA_offset = VQOAELA;
 /* line 133: */
TPOAELA_ct_to_dps( UQOAELA_ct, Msg, &YQOAELA );
XQOAELA_dps = YQOAELA;
 /* line 134: */
A_CLOSURE( AROAELA_generator, BROAELA_generator, CROAELA_generator );
(( CROAELA_generator * ) ( AROAELA_generator.nonlocals )) -> XQOAELA_dps = (&XQOAELA_dps);
(( CROAELA_generator * ) ( AROAELA_generator.nonlocals )) -> WQOAELA_offset = WQOAELA_offset;
A_CALLPROC(AROAELA_generator,(A68_FALSE, &FROAELA),(A68_FALSE, &FROAELA,(AROAELA_generator).nonlocals));
GROAELA_attinfo = FROAELA;
 /* line 135: */
 /* line 136: */
if ( Info )
{ 
HROAELA_buffer = WYIAELA_readbuffer(TYJAELA_discfile, (*(&A_VINDEX(XQOAELA_dps,WQOAELA_offset))));
 /* line 137: */
JROAELA = GROAELA_attinfo.upb -1;
IROAELA_int = GROAELA_attinfo.data;
for (;JROAELA-- >= 0;
(IROAELA_int++
) )
{
(*IROAELA_int) = YBJAELA_in2(HROAELA_buffer);
}
 /* line 138: */
} 
else
{ 
LROAELA = GROAELA_attinfo.upb -1;
KROAELA_int = GROAELA_attinfo.data;
for (;LROAELA-- >= 0;
(KROAELA_int++
) )
{
(*KROAELA_int) = (-1);
}
 /* line 139: */
} 
 /* line 140: */
MROAELA.Ct = UQOAELA_ct;
MROAELA.Offset = WQOAELA_offset;
MROAELA.Attdps = XQOAELA_dps;
 /* line 141: */
MROAELA.Attinfo = GROAELA_attinfo;
NROAELA = MROAELA;
} 
A_PROC_EXIT(readattpointers);
*ReturnedValue = (NROAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  QROAELA_writeattpointers(A68_260  Attp, A68_97  Msg)
{ 
A68_176  RROAELA;  /* clause result */
A68_87  SROAELA;  /* OPERATORS - mode -> union mode */
A68_203 * TROAELA_buffer;
A68_INT * UROAELA_int;
A68_32  VROAELA;  /* forall yield */
A68_INT  WROAELA;  /* forall loop counter */
A68_176  XROAELA;  /* avoid structure result */
A68_177  YROAELA;  /* OPERATORS - simple index */
A68_INT  ZROAELA;  /* YIELD */
A68_176 * ASOAELA;  /* YIELD */
A68_176  BSOAELA;  /* avoid structure result */
A68_176  CSOAELA;  /* avoid structure result */
A68_176 * DSOAELA;  /* YIELD */
A_PROC_ENTRY(writeattpointers);
 /* line 144: */
 /* line 145: */
{ 
 /* line 146: */
 /* line 147: */
 /* line 148: */
if ( (Attp.Attinfo.upb==0) )
{ 
RROAELA = UACAELA_nilptr;
} 
else
{ 
TROAELA_buffer = ZXIAELA_makebuffer(TYJAELA_discfile, A_UNITE(SROAELA,mode1,1,SNBAELA_block_size), RXIAELA_validwrite);
 /* line 149: */
VROAELA = Attp.Attinfo ;
WROAELA = VROAELA.upb -1;
UROAELA_int = VROAELA.data;
for (;WROAELA-- >= 0;
(UROAELA_int++
) )
{
YHJAELA_outint2((*UROAELA_int), TROAELA_buffer, Msg);
}
 /* line 150: */
 /* line 151: */
CGJAELA_endwrite( TROAELA_buffer, Msg, &XROAELA );
RROAELA = XROAELA;
} 
YROAELA = Attp.Attdps ;
ZROAELA = Attp.Offset ;
ASOAELA = (&A_VINDEX(YROAELA,ZROAELA)) ;
(*ASOAELA) = RROAELA;
 /* line 152: */
 /* line 153: */
if ( (Attp.Ct==DVJAELA_nilcontxt) )
{ 
 /* line 154: */
AEJAELA_mywritediscptrs( TYJAELA_discfile, Attp.Attdps, Msg, &BSOAELA );
(*GZJAELA_ptrattributes) = BSOAELA;
} 
else
{ 
 /* line 156: */
AEJAELA_mywritediscptrs( TYJAELA_discfile, Attp.Attdps, Msg, &CSOAELA );
DSOAELA = (&(Attp.Ct->Val)) ;
(*DSOAELA) = CSOAELA;
} 
 /* line 157: */
 /* line 158: */
MDKAELA_setlibchanged(Msg);
} 
A_PROC_EXIT(writeattpointers);
return;
} 
#undef NL

A_STATIC A68_VOID  FSOAELA_addclass(A68_97  Msg)
{ 
A68_236 * GSOAELA_c;
A68_234 * HSOAELA_ct;
A68_177  JSOAELA;  /* avoid structure result */
A68_177  ISOAELA_dps;
A68_INT  KSOAELA_offset;
A68_INT  LSOAELA_oldnumber;
A68_INT  MSOAELA_number;
A68_33  OSOAELA_generator;   /* proc value of non-global proc */
A68_32  USOAELA;  /* avoid structure result */
A68_32  TSOAELA_attinfo;
A68_262  WSOAELA_generator;   /* proc value of non-global proc */
A68_177  CTOAELA;  /* avoid structure result */
A68_177  BTOAELA_attdps;
A68_176 * DTOAELA_dp;
A68_INT  ETOAELA;  /* forall loop counter */
A68_203 * FTOAELA_buffer;
A68_INT * GTOAELA_int;
A68_32  HTOAELA;  /* OPERATORS - trim index */
A68_32  ITOAELA;  /* forall yield */
A68_INT  JTOAELA;  /* forall loop counter */
A68_177  KTOAELA;  /* OPERATORS - trim index */
A68_177  LTOAELA;  /* YIELD */
A68_INT * MTOAELA;  /* YIELD */
A68_INT  NTOAELA;  /* YIELD */
A68_176 * OTOAELA;  /* YIELD */
A68_260  PTOAELA;  /* collateral clause result */
A68_177  QTOAELA;  /* OPERATORS - trim index */
A68_BOOL  RTOAELA;  /* clause result */
A68_177  STOAELA;  /* avoid structure result */
A_PROC_ENTRY(addclass);
 /* line 162: */
 /* line 163: */
{ 
GSOAELA_c = (*(&(HXJAELA_library->Contexts)));
 /* line 164: */
HSOAELA_ct = (&(GSOAELA_c->Context));
 /* line 165: */
TPOAELA_ct_to_dps( HSOAELA_ct, Msg, &JSOAELA );
ISOAELA_dps = JSOAELA;
 /* line 166: */
KSOAELA_offset = 2;
 /* line 167: */
LSOAELA_oldnumber = (ISOAELA_dps.upb-KSOAELA_offset);
 /* line 168: */
MSOAELA_number = (LSOAELA_oldnumber+1);
 /* line 169: */
A_CLOSURE( OSOAELA_generator, PSOAELA_generator, QSOAELA_generator );
(( QSOAELA_generator * ) ( OSOAELA_generator.nonlocals )) -> MSOAELA_number = MSOAELA_number;
A_CALLPROC(OSOAELA_generator,(A68_TRUE, &USOAELA),(A68_TRUE, &USOAELA,(OSOAELA_generator).nonlocals));
TSOAELA_attinfo = USOAELA;
 /* line 170: */
A_CLOSURE( WSOAELA_generator, XSOAELA_generator, YSOAELA_generator );
(( YSOAELA_generator * ) ( WSOAELA_generator.nonlocals )) -> MSOAELA_number = MSOAELA_number;
(( YSOAELA_generator * ) ( WSOAELA_generator.nonlocals )) -> KSOAELA_offset = (&KSOAELA_offset);
A_CALLPROC(WSOAELA_generator,(A68_TRUE, &CTOAELA),(A68_TRUE, &CTOAELA,(WSOAELA_generator).nonlocals));
BTOAELA_attdps = CTOAELA;
 /* line 171: */
ETOAELA = BTOAELA_attdps.upb -1;
DTOAELA_dp = BTOAELA_attdps.data;
for (;ETOAELA-- >= 0;
(DTOAELA_dp++
) )
{
(*DTOAELA_dp) = UACAELA_nilptr;
}
 /* line 172: */
for ( ;; )
{ 
 /* line 173: */
if ( (MSOAELA_number>1) )
{ 
FTOAELA_buffer = WYIAELA_readbuffer(TYJAELA_discfile, (*(&A_VINDEX(ISOAELA_dps,KSOAELA_offset))));
 /* line 174: */
ITOAELA = A_VTRIM(HTOAELA,(TSOAELA_attinfo),A_VTSCRIPT(&(HTOAELA.upb),(TSOAELA_attinfo).upb,1,LSOAELA_oldnumber)) ;
JTOAELA = ITOAELA.upb -1;
GTOAELA_int = ITOAELA.data;
for (;JTOAELA-- >= 0;
(GTOAELA_int++
) )
{
(*GTOAELA_int) = YBJAELA_in2(FTOAELA_buffer);
}
 /* line 175: */
 /* line 176: */
LTOAELA = A_VTRIM(KTOAELA,(BTOAELA_attdps),A_VTSCRIPT(&(KTOAELA.upb),(BTOAELA_attdps).upb,1,(LSOAELA_oldnumber+KSOAELA_offset))) ;
A_VASSIGN2(ISOAELA_dps,LTOAELA,A68_176 );
} 
 /* line 177: */
MTOAELA = (&A_VINDEX(TSOAELA_attinfo,MSOAELA_number)) ;
(*MTOAELA) = (*(&(HXJAELA_library->Version)));
 /* line 178: */
NTOAELA = (MSOAELA_number+KSOAELA_offset) ;
OTOAELA = (&A_VINDEX(BTOAELA_attdps,NTOAELA)) ;
(*OTOAELA) = UACAELA_nilptr;
 /* line 179: */
PTOAELA.Ct = HSOAELA_ct;
PTOAELA.Offset = KSOAELA_offset;
PTOAELA.Attdps = A_VTRIM(QTOAELA,(BTOAELA_attdps),A_VTSCRIPT(&(QTOAELA.upb),(BTOAELA_attdps).upb,1,(MSOAELA_number+KSOAELA_offset)));
PTOAELA.Attinfo = TSOAELA_attinfo;
QROAELA_writeattpointers(PTOAELA, Msg);
 /* line 180: */
 /* line 181: */
RTOAELA = (GSOAELA_c!=EVJAELA_nilcontexts);
if ( !RTOAELA ) break;
GSOAELA_c = (*(&(GSOAELA_c->Rest)));
 /* line 182: */
 /* line 183: */
if ( (GSOAELA_c==EVJAELA_nilcontexts) )
{ 
KSOAELA_offset = 1;
 /* line 184: */
HSOAELA_ct = DVJAELA_nilcontxt;
} 
else
{ 
KSOAELA_offset = 2;
 /* line 185: */
HSOAELA_ct = (&(GSOAELA_c->Context));
} 
 /* line 186: */
 /* line 187: */
TPOAELA_ct_to_dps( HSOAELA_ct, Msg, &STOAELA );
ISOAELA_dps = STOAELA;
}
 /* line 188: */
} 
A_PROC_EXIT(addclass);
return;
} 
#undef NL

A_STATIC A68_VOID  VTOAELA_subtractclass(A68_INT  Index, A68_97  Msg)
{ 
A68_236 * WTOAELA_c;
A68_234 * XTOAELA_ct;
A68_177  ZTOAELA;  /* avoid structure result */
A68_177  YTOAELA_dps;
A68_INT  AUOAELA_offset;
A68_INT  BUOAELA_number;
A68_33  DUOAELA_generator;   /* proc value of non-global proc */
A68_32  JUOAELA;  /* avoid structure result */
A68_32  IUOAELA_attinfo;
A68_262  LUOAELA_generator;   /* proc value of non-global proc */
A68_177  RUOAELA;  /* avoid structure result */
A68_177  QUOAELA_attdps;
A68_INT  SUOAELA;  /* YIELD */
A68_203 * TUOAELA_buffer;
A68_INT * UUOAELA_int;
A68_INT  VUOAELA;  /* forall loop counter */
A68_32  WUOAELA;  /* OPERATORS - trim index */
A68_32  XUOAELA;  /* OPERATORS - trim index */
A68_32  YUOAELA;  /* YIELD */
A68_32  ZUOAELA;  /* OPERATORS - assign op */
A68_177  AVOAELA;  /* OPERATORS - trim index */
A68_177  BVOAELA;  /* OPERATORS - trim index */
A68_177  CVOAELA;  /* YIELD */
A68_177  DVOAELA;  /* OPERATORS - assign op */
A68_260  EVOAELA;  /* collateral clause result */
A68_177  FVOAELA;  /* OPERATORS - trim index */
A68_32  GVOAELA;  /* OPERATORS - trim index */
A68_BOOL  HVOAELA;  /* clause result */
A68_177  IVOAELA;  /* avoid structure result */
A_PROC_ENTRY(subtractclass);
 /* line 191: */
 /* line 192: */
{ 
WTOAELA_c = (*(&(HXJAELA_library->Contexts)));
 /* line 193: */
XTOAELA_ct = (&(WTOAELA_c->Context));
 /* line 194: */
TPOAELA_ct_to_dps( XTOAELA_ct, Msg, &ZTOAELA );
YTOAELA_dps = ZTOAELA;
 /* line 195: */
AUOAELA_offset = 2;
 /* line 196: */
BUOAELA_number = (YTOAELA_dps.upb-AUOAELA_offset);
 /* line 197: */
A_CLOSURE( DUOAELA_generator, EUOAELA_generator, FUOAELA_generator );
(( FUOAELA_generator * ) ( DUOAELA_generator.nonlocals )) -> BUOAELA_number = BUOAELA_number;
A_CALLPROC(DUOAELA_generator,(A68_TRUE, &JUOAELA),(A68_TRUE, &JUOAELA,(DUOAELA_generator).nonlocals));
IUOAELA_attinfo = JUOAELA;
 /* line 198: */
A_CLOSURE( LUOAELA_generator, MUOAELA_generator, NUOAELA_generator );
(( NUOAELA_generator * ) ( LUOAELA_generator.nonlocals )) -> YTOAELA_dps = (&YTOAELA_dps);
A_CALLPROC(LUOAELA_generator,(A68_TRUE, &RUOAELA),(A68_TRUE, &RUOAELA,(LUOAELA_generator).nonlocals));
QUOAELA_attdps = RUOAELA;
 /* line 199: */
for ( ;; )
{ 
SUOAELA = (1+AUOAELA_offset) ;
TUOAELA_buffer = WYIAELA_readbuffer(TYJAELA_discfile, (*(&A_VINDEX(YTOAELA_dps,SUOAELA))));
 /* line 200: */
VUOAELA = IUOAELA_attinfo.upb -1;
UUOAELA_int = IUOAELA_attinfo.data;
for (;VUOAELA-- >= 0;
(UUOAELA_int++
) )
{
(*UUOAELA_int) = YBJAELA_in2(TUOAELA_buffer);
}
 /* line 201: */
A_VASSIGN2(YTOAELA_dps,QUOAELA_attdps,A68_176 );
 /* line 202: */
 /* line 203: */
if ( (Index!=BUOAELA_number) )
{ 
YUOAELA = A_VTRIM(WUOAELA,(IUOAELA_attinfo),A_VTSCRIPT(&(WUOAELA.upb),(IUOAELA_attinfo).upb,Index,(BUOAELA_number-1))) ;
ZUOAELA = A_VTRIM(XUOAELA,(IUOAELA_attinfo),A_VTSCRIPT(&(XUOAELA.upb),(IUOAELA_attinfo).upb,(Index+1),(IUOAELA_attinfo).upb)) ;
A_VASSIGN2(ZUOAELA,YUOAELA,A68_INT );
 /* line 204: */
 /* line 205: */
CVOAELA = A_VTRIM(AVOAELA,(QUOAELA_attdps),A_VTSCRIPT(&(AVOAELA.upb),(QUOAELA_attdps).upb,(Index+AUOAELA_offset),(QUOAELA_attdps.upb-1))) ;
DVOAELA = A_VTRIM(BVOAELA,(QUOAELA_attdps),A_VTSCRIPT(&(BVOAELA.upb),(QUOAELA_attdps).upb,((Index+AUOAELA_offset)+1),(QUOAELA_attdps).upb)) ;
A_VASSIGN2(DVOAELA,CVOAELA,A68_176 );
} 
 /* line 206: */
EVOAELA.Ct = XTOAELA_ct;
EVOAELA.Offset = AUOAELA_offset;
 /* line 207: */
EVOAELA.Attdps = A_VTRIM(FVOAELA,(QUOAELA_attdps),A_VTSCRIPT(&(FVOAELA.upb),(QUOAELA_attdps).upb,1,((BUOAELA_number+AUOAELA_offset)-1)));
EVOAELA.Attinfo = A_VTRIM(GVOAELA,(IUOAELA_attinfo),A_VTSCRIPT(&(GVOAELA.upb),(IUOAELA_attinfo).upb,1,(BUOAELA_number-1)));
QROAELA_writeattpointers(EVOAELA, Msg);
 /* line 208: */
 /* line 209: */
HVOAELA = (WTOAELA_c!=EVJAELA_nilcontexts);
if ( !HVOAELA ) break;
WTOAELA_c = (*(&(WTOAELA_c->Rest)));
 /* line 210: */
 /* line 211: */
if ( (WTOAELA_c==EVJAELA_nilcontexts) )
{ 
AUOAELA_offset = 1;
 /* line 212: */
XTOAELA_ct = DVJAELA_nilcontxt;
} 
else
{ 
AUOAELA_offset = 2;
 /* line 213: */
XTOAELA_ct = (&(WTOAELA_c->Context));
} 
 /* line 214: */
 /* line 215: */
TPOAELA_ct_to_dps( XTOAELA_ct, Msg, &IVOAELA );
YTOAELA_dps = IVOAELA;
}
 /* line 216: */
} 
A_PROC_EXIT(subtractclass);
return;
} 
#undef NL

A_STATIC A68_226 * KVOAELA_qfindname(A68_VC  Name)
{ 
A68_226 * LVOAELA_att;
A68_BOOL  MVOAELA;  /* optbool result */
A68_226 * NVOAELA;  /* clause result */
A_PROC_ENTRY(qfindname);
 /* line 222: */
 /* line 223: */
{ 
LVOAELA_att = (*(&(HXJAELA_library->Classes)));
 /* line 224: */
for ( ;; )
{ 
MVOAELA = (LVOAELA_att!=KTJAELA_nilclasses);
if ( MVOAELA )
{ /* line 225: */
MVOAELA = !A_VC_EQ((*(&(LVOAELA_att->Name))),Name);
}
if ( !(MVOAELA) ) break;
LVOAELA_att = (*(&(LVOAELA_att->Rest)));
}
 /* line 226: */
 /* line 227: */
NVOAELA = LVOAELA_att;
} 
A_PROC_EXIT(qfindname);
return( NVOAELA );
} 
#undef NL

A68_226 * PVOAELA_qfindclass(A68_INT  Key)
{ 
A68_226 * QVOAELA_att;
A68_BOOL  RVOAELA;  /* optbool result */
A68_226 * SVOAELA;  /* clause result */
A_PROC_ENTRY(qfindclass);
 /* line 230: */
 /* line 231: */
{ 
QVOAELA_att = (*(&(HXJAELA_library->Classes)));
 /* line 232: */
for ( ;; )
{ 
RVOAELA = (QVOAELA_att!=KTJAELA_nilclasses);
if ( RVOAELA )
{ /* line 233: */
RVOAELA = !((*(&(QVOAELA_att->Key)))==Key);
}
if ( !(RVOAELA) ) break;
QVOAELA_att = (*(&(QVOAELA_att->Rest)));
}
 /* line 234: */
 /* line 235: */
SVOAELA = QVOAELA_att;
} 
A_PROC_EXIT(qfindclass);
return( SVOAELA );
} 
#undef NL

A_STATIC A68_VOID  WVOAELA_attcheck(A68_226 * Att, A68_INT  Key, A68_97  Msg)
{ 
A68_VC  ZVOAELA;  /* avoid structure result */
A68_46  AWOAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  DWOAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(attcheck);
 /* line 238: */
 /* line 239: */
{ 
 /* line 240: */
if ( (Att==KTJAELA_nilclasses) )
{ 
 /* line 241: */
 /* line 242: */
FCAAOSI_intchars( Key, &ZVOAELA );
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(AWOAELA,A_VC_PLUS(YVOAELA,ZVOAELA),A68_VC )),(WHAAOSI_user, A_HVEC(AWOAELA,A_VC_PLUS(YVOAELA,ZVOAELA),A68_VC ),(Msg).nonlocals));
} 
else
{ 
 /* line 243: */
if ( !(*(&(Att->Login))) )
{ 
 /* line 244: */
 /* line 245: */
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(DWOAELA,A_VC_PLUS(CWOAELA,(*(&(Att->Name)))),A68_VC )),(WHAAOSI_user, A_HVEC(DWOAELA,A_VC_PLUS(CWOAELA,(*(&(Att->Name)))),A68_VC ),(Msg).nonlocals));
} 
} 
} 
A_PROC_EXIT(attcheck);
return;
} 
#undef NL

A_STATIC A68_226 * GWOAELA_findclass(A68_INT  Key, A68_97  Msg)
{ 
A68_226 * HWOAELA_att;
A68_226 * IWOAELA;  /* clause result */
A_PROC_ENTRY(findclass);
 /* line 248: */
 /* line 249: */
{ 
HWOAELA_att = PVOAELA_qfindclass(Key);
 /* line 250: */
WVOAELA_attcheck(HWOAELA_att, Key, Msg);
 /* line 251: */
 /* line 252: */
IWOAELA = HWOAELA_att;
} 
A_PROC_EXIT(findclass);
return( IWOAELA );
} 
#undef NL

A_STATIC A68_INT  LWOAELA_findindex(A68_INT  Key, A68_97  Msg)
{ 
A68_INT  MWOAELA_index;
A68_226 * NWOAELA_att;
A68_BOOL  OWOAELA;  /* optbool result */
A68_INT  PWOAELA;  /* clause result */
A_PROC_ENTRY(findindex);
 /* line 255: */
 /* line 256: */
{ 
MWOAELA_index = 1;
 /* line 257: */
NWOAELA_att = (*(&(HXJAELA_library->Classes)));
 /* line 258: */
for ( ;; )
{ 
OWOAELA = (NWOAELA_att!=KTJAELA_nilclasses);
if ( OWOAELA )
{ /* line 259: */
OWOAELA = !((*(&(NWOAELA_att->Key)))==Key);
}
if ( !(OWOAELA) ) break;
MWOAELA_index+=1;
NWOAELA_att = (*(&(NWOAELA_att->Rest)));
}
 /* line 260: */
WVOAELA_attcheck(NWOAELA_att, Key, Msg);
 /* line 261: */
 /* line 262: */
PWOAELA = MWOAELA_index;
} 
A_PROC_EXIT(findindex);
return( PWOAELA );
} 
#undef NL

A68_INT  TWOAELA_class_sort(A68_INT  Key)
{ 
A68_INT  UWOAELA;  /* clause result */
A_PROC_ENTRY(class_sort);
UWOAELA = (A68_INT )(A68_BITS )((A68_BITS )Key&0X7U);
A_PROC_EXIT(class_sort);
return( UWOAELA );
} 
#undef NL

A68_INT  AXOAELA_class_lifetime(A68_INT  Key)
{ 
A68_INT  BXOAELA;  /* clause result */
A68_BITS  CXOAELA;  /* SHR */
A68_INT  DXOAELA;  /* SHR */
A_PROC_ENTRY(class_lifetime);
CXOAELA = (A68_BITS )((A68_BITS )Key&0X38U) ;
DXOAELA = 3 ;
BXOAELA = (A68_INT )A_SHR(CXOAELA,DXOAELA);
A_PROC_EXIT(class_lifetime);
return( BXOAELA );
} 
#undef NL

A_STATIC A68_INT  GXOAELA_makekey(A68_INT  Classsort, A68_INT  Lifetime)
{ 
A68_BITS  HXOAELA_sort;
A68_BITS  IXOAELA;  /* SHL */
A68_INT  JXOAELA;  /* SHL */
A68_BITS  KXOAELA_life;
A68_INT  NXOAELA;  /* ADICOPS - MOD */
A68_INT  OXOAELA;  /* ADICOPS - MOD */
A68_INT  MXOAELA_key;
A68_BITS  QXOAELA;  /* SHL */
A68_INT  RXOAELA;  /* SHL */
A68_BITS  PXOAELA_bkey;
A68_226 * SXOAELA_atts;
A68_INT  TXOAELA;  /* ADICOPS - MOD */
A68_INT  UXOAELA;  /* ADICOPS - MOD */
A68_BITS  VXOAELA;  /* SHL */
A68_INT  WXOAELA;  /* SHL */
A68_INT  XXOAELA;  /* clause result */
A_PROC_ENTRY(makekey);
 /* line 280: */
 /* line 281: */
{ 
HXOAELA_sort = (A68_BITS )Classsort;
 /* line 282: */
IXOAELA = (A68_BITS )Lifetime ;
JXOAELA = 3 ;
KXOAELA_life = A_SHL(IXOAELA,JXOAELA);
 /* line 283: */
 /* line 284: */
OXOAELA = ZACAOSI_get_cpu_time() ;
MXOAELA_key = A_MOD(OXOAELA,LXOAELA_range,NXOAELA);
 /* line 285: */
QXOAELA = (A68_BITS )MXOAELA_key ;
RXOAELA = 6 ;
PXOAELA_bkey = (A68_BITS )((A68_BITS )(A_SHL(QXOAELA,RXOAELA)|HXOAELA_sort)|KXOAELA_life);
 /* line 286: */
MXOAELA_key = (A68_INT )PXOAELA_bkey;
 /* line 287: */
SXOAELA_atts = (*(&(HXJAELA_library->Classes)));
 /* line 288: */
for ( ;; )
{ 
 /* line 289: */
if ( !((SXOAELA_atts!=KTJAELA_nilclasses)) ) break;
 /* line 290: */
if ( ((*(&(SXOAELA_atts->Key)))==MXOAELA_key) )
{ 
UXOAELA = (MXOAELA_key+1) ;
MXOAELA_key = A_MOD(UXOAELA,LXOAELA_range,TXOAELA);
 /* line 291: */
VXOAELA = (A68_BITS )MXOAELA_key ;
WXOAELA = 6 ;
PXOAELA_bkey = (A68_BITS )((A68_BITS )(A_SHL(VXOAELA,WXOAELA)|HXOAELA_sort)|KXOAELA_life);
 /* line 292: */
MXOAELA_key = (A68_INT )PXOAELA_bkey;
 /* line 293: */
 /* line 294: */
SXOAELA_atts = (*(&(HXJAELA_library->Classes)));
} 
else
{ 
 /* line 295: */
 /* line 296: */
SXOAELA_atts = (*(&(SXOAELA_atts->Rest)));
} 
}
 /* line 297: */
 /* line 298: */
XXOAELA = MXOAELA_key;
} 
A_PROC_EXIT(makekey);
return( XXOAELA );
} 
#undef NL

A68_VOID  DYOAELA_intro_class(A68_VC  N, A68_VC  P, A68_INT  Classsort, A68_INT  Lifetime, A68_97  Msg)
{ 
A68_VC  FYOAELA;  /* avoid structure result */
A68_VC  EYOAELA_name;
A68_VC  HYOAELA;  /* avoid structure result */
A68_VC  GYOAELA_password;
A68_226 * IYOAELA_att;
A68_46  NYOAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  OYOAELA_key;
A68_226  PYOAELA;  /* collateral clause result */
A68_226 * QYOAELA;  /* YIELD */
A68_226 ** RYOAELA;  /* YIELD */
A68_226 * SYOAELA_atts;
A68_226  TYOAELA;  /* collateral clause result */
A68_226 * UYOAELA;  /* YIELD */
A68_226 ** VYOAELA;  /* YIELD */
A_PROC_ENTRY(intro_class);
 /* line 302: */
 /* line 303: */
{ 
RSCAOST_makeid( N, &FYOAELA );
EYOAELA_name = FYOAELA;
RSCAOST_makeid( P, &HYOAELA );
GYOAELA_password = HYOAELA;
 /* line 304: */
IYOAELA_att = KVOAELA_qfindname(EYOAELA_name);
 /* line 305: */
 /* line 306: */
if ( (IYOAELA_att!=KTJAELA_nilclasses) )
{ 
 /* line 307: */
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(NYOAELA,A_VC_PLUS(A_VC_PLUS(LYOAELA,EYOAELA_name),MYOAELA),A68_VC )),(WHAAOSI_user, A_HVEC(NYOAELA,A_VC_PLUS(A_VC_PLUS(LYOAELA,EYOAELA_name),MYOAELA),A68_VC ),(Msg).nonlocals));
} 
else
{ 
FSOAELA_addclass(Msg);
 /* line 308: */
OYOAELA_key = GXOAELA_makekey(Classsort, Lifetime);
 /* line 309: */
 /* line 310: */
if ( ((*(&(HXJAELA_library->Classes)))==KTJAELA_nilclasses) )
{ 
 /* line 311: */
PYOAELA.Name = EYOAELA_name;
PYOAELA.Password = GYOAELA_password;
PYOAELA.Key = OYOAELA_key;
PYOAELA.Login = A68_FALSE;
 /* line 312: */
PYOAELA.Rest = KTJAELA_nilclasses;
QYOAELA = A_HEAP(A68_226 ) ;
(*QYOAELA) = PYOAELA ;
RYOAELA = (&(HXJAELA_library->Classes)) ;
(*RYOAELA) = QYOAELA;
} 
else
{ 
SYOAELA_atts = (*(&(HXJAELA_library->Classes)));
 /* line 313: */
for ( ;; )
{ 
if ( !(((*(&(SYOAELA_atts->Rest)))!=KTJAELA_nilclasses)) ) break;
SYOAELA_atts = (*(&(SYOAELA_atts->Rest)));
}
 /* line 314: */
 /* line 315: */
TYOAELA.Name = EYOAELA_name;
TYOAELA.Password = GYOAELA_password;
TYOAELA.Key = OYOAELA_key;
TYOAELA.Login = A68_FALSE;
 /* line 316: */
TYOAELA.Rest = KTJAELA_nilclasses;
 /* line 317: */
 /* line 318: */
UYOAELA = A_HEAP(A68_226 ) ;
(*UYOAELA) = TYOAELA ;
VYOAELA = (&(SYOAELA_atts->Rest)) ;
(*VYOAELA) = UYOAELA;
} 
} 
} 
A_PROC_EXIT(intro_class);
return;
} 
#undef NL

A68_VOID  XYOAELA_get_classes(A68_BOOL  Restart)
{ 
A68_277  AZOAELA_makeclasses;   /* proc value of non-global proc */
A68_226 ** MZOAELA;  /* YIELD */
A68_203 * NZOAELA_attbuffer;
A68_226 ** OZOAELA;  /* YIELD */
A_PROC_ENTRY(get_classes);
 /* line 325: */
 /* line 326: */
{ 
A_CLOSURE( AZOAELA_makeclasses, BZOAELA_makeclasses, CZOAELA_makeclasses );
(( CZOAELA_makeclasses * ) ( AZOAELA_makeclasses.nonlocals )) -> Restart = Restart;
(( CZOAELA_makeclasses * ) ( AZOAELA_makeclasses.nonlocals )) -> AZOAELA_makeclasses = AZOAELA_makeclasses;
 /* line 338: */
 /* line 339: */
if ( UXIAELA_isnilptr(TYJAELA_discfile, (*EZJAELA_ptrattinfo)) )
{ 
 /* line 340: */
MZOAELA = (&(HXJAELA_library->Classes)) ;
(*MZOAELA) = KTJAELA_nilclasses;
} 
else
{ 
NZOAELA_attbuffer = WYIAELA_readbuffer(TYJAELA_discfile, (*EZJAELA_ptrattinfo));
 /* line 341: */
 /* line 342: */
 /* line 343: */
OZOAELA = (&(HXJAELA_library->Classes)) ;
(*OZOAELA) = A_CALLPROC(AZOAELA_makeclasses,(NZOAELA_attbuffer),(NZOAELA_attbuffer,(AZOAELA_makeclasses).nonlocals));
} 
} 
A_PROC_EXIT(get_classes);
return;
} 
#undef NL

A68_VOID  PZOAELA_open_allclasses(void)
{ 
A68_277  SZOAELA_makeclasses;   /* proc value of non-global proc */
A68_226 ** DAPAELA;  /* YIELD */
A68_203 * EAPAELA_attbuffer;
A68_226 ** FAPAELA;  /* YIELD */
A_PROC_ENTRY(open_allclasses);
{ 
A_CLOSURE( SZOAELA_makeclasses, TZOAELA_makeclasses, UZOAELA_makeclasses );
(( UZOAELA_makeclasses * ) ( SZOAELA_makeclasses.nonlocals )) -> SZOAELA_makeclasses = SZOAELA_makeclasses;
 /* line 361: */
 /* line 362: */
if ( UXIAELA_isnilptr(TYJAELA_discfile, (*EZJAELA_ptrattinfo)) )
{ 
 /* line 363: */
DAPAELA = (&(HXJAELA_library->Classes)) ;
(*DAPAELA) = KTJAELA_nilclasses;
} 
else
{ 
EAPAELA_attbuffer = WYIAELA_readbuffer(TYJAELA_discfile, (*EZJAELA_ptrattinfo));
 /* line 364: */
 /* line 365: */
 /* line 366: */
FAPAELA = (&(HXJAELA_library->Classes)) ;
(*FAPAELA) = A_CALLPROC(SZOAELA_makeclasses,(EAPAELA_attbuffer),(EAPAELA_attbuffer,(SZOAELA_makeclasses).nonlocals));
} 
} 
A_PROC_EXIT(open_allclasses);
return;
} 
#undef NL

A68_VOID  HAPAELA_put_classes(A68_97  Msg)
{ 
A68_31  JAPAELA_generator;   /* proc value of non-global proc */
A68_VC  PAPAELA;  /* avoid structure result */
A68_VC  OAPAELA_buffer;
A68_87  RAPAELA;  /* OPERATORS - mode -> union mode */
A68_203 * QAPAELA_attbuff;
A68_226 * SAPAELA_atts;
A68_176  TAPAELA;  /* avoid structure result */
A_PROC_ENTRY(put_classes);
 /* line 371: */
 /* line 372: */
{ 
A_CLOSURE( JAPAELA_generator, KAPAELA_generator, LAPAELA_generator );
A_CALLPROC(JAPAELA_generator,(A68_TRUE, &PAPAELA),(A68_TRUE, &PAPAELA,(JAPAELA_generator).nonlocals));
OAPAELA_buffer = PAPAELA;
 /* line 373: */
QAPAELA_attbuff = IFJAELA_startwrite(TYJAELA_discfile, A_UNITE(RAPAELA,mode2,2,OAPAELA_buffer));
 /* line 374: */
SAPAELA_atts = (*(&(HXJAELA_library->Classes)));
 /* line 375: */
for ( ;; )
{ 
 /* line 376: */
if ( !((SAPAELA_atts!=KTJAELA_nilclasses)) ) break;
UIJAELA_outid2((*(&(SAPAELA_atts->Name))), QAPAELA_attbuff, Msg);
 /* line 377: */
UIJAELA_outid2((*(&(SAPAELA_atts->Password))), QAPAELA_attbuff, Msg);
 /* line 378: */
YHJAELA_outint2((*(&(SAPAELA_atts->Key))), QAPAELA_attbuff, Msg);
 /* line 379: */
YHJAELA_outint2(((*(&(SAPAELA_atts->Login)))), QAPAELA_attbuff, Msg);
 /* line 380: */
 /* line 381: */
SAPAELA_atts = (*(&(SAPAELA_atts->Rest)));
}
 /* line 382: */
CGJAELA_endwrite( QAPAELA_attbuff, Msg, &TAPAELA );
(*EZJAELA_ptrattinfo) = TAPAELA;
 /* line 383: */
 /* line 384: */
MDKAELA_setlibchanged(Msg);
} 
A_PROC_EXIT(put_classes);
return;
} 
#undef NL

A68_BOOL  VAPAELA_scan_classes(A68_278  Action)
{ 
A68_226 * WAPAELA_attr;
A68_BOOL  XAPAELA;  /* optbool result */
A68_VC  YAPAELA;  /* != */
A68_BOOL  ZAPAELA;  /* optbool result */
A68_BOOL  ABPAELA;  /* clause result */
A_PROC_ENTRY(scan_classes);
 /* line 391: */
 /* line 392: */
{ 
WAPAELA_attr = (*(&(HXJAELA_library->Classes)));
 /* line 394: */
for ( ;; )
{ 
 /* line 395: */
XAPAELA = (WAPAELA_attr!=KTJAELA_nilclasses);
if ( XAPAELA )
{ /* line 396: */
 /* line 397: */
 /* line 398: */
 /* line 399: */
YAPAELA = (*(&(WAPAELA_attr->Password))) ;
ZAPAELA = ! A_VSTRUCTCOMP(YAPAELA,NTCAOST_nilid);
if ( ZAPAELA )
{ZAPAELA = ((*(&(WAPAELA_attr->Password))).upb>0);
}
 /* line 400: */
XAPAELA = A_CALLPROC(Action,((*(&(WAPAELA_attr->Name))), (*(&(WAPAELA_attr->Key))), (*(&(WAPAELA_attr->Login))), ZAPAELA),((*(&(WAPAELA_attr->Name))), (*(&(WAPAELA_attr->Key))), (*(&(WAPAELA_attr->Login))), ZAPAELA,(Action).nonlocals));
}
if ( !(XAPAELA) ) break;
WAPAELA_attr = (*(&(WAPAELA_attr->Rest)));
}
 /* line 401: */
 /* line 402: */
ABPAELA = (WAPAELA_attr!=KTJAELA_nilclasses);
} 
A_PROC_EXIT(scan_classes);
return( ABPAELA );
} 
#undef NL

A68_VOID  EBPAELA_introduce_class(A68_VC  N, A68_VC  P, A68_97  Msg)
{ 
A_PROC_ENTRY(introduce_class);
 /* line 409: */
DYOAELA_intro_class(N, P, QWOAELA_normal_class, VWOAELA_perm_life, Msg);
A_PROC_EXIT(introduce_class);
return;
} 
#undef NL

A68_VOID  HBPAELA_remove_class(A68_INT  Key, A68_97  Msg)
{ 
A68_INT  IBPAELA_index;
A68_226 ** JBPAELA;  /* YIELD */
A68_226 ** KBPAELA_atts;
A68_BOOL  LBPAELA;  /* optbool result */
A_PROC_ENTRY(remove_class);
 /* line 412: */
 /* line 413: */
{ 
IBPAELA_index = LWOAELA_findindex(Key, Msg);
 /* line 414: */
VTOAELA_subtractclass(IBPAELA_index, Msg);
 /* line 415: */
 /* line 416: */
if ( ((*(&((*(&(HXJAELA_library->Classes)))->Key)))==Key) )
{ 
 /* line 417: */
JBPAELA = (&(HXJAELA_library->Classes)) ;
(*JBPAELA) = (*(&((*(&(HXJAELA_library->Classes)))->Rest)));
} 
else
{ 
KBPAELA_atts = (&(HXJAELA_library->Classes));
 /* line 418: */
for ( ;; )
{ 
LBPAELA = ((*KBPAELA_atts)!=KTJAELA_nilclasses);
if ( LBPAELA )
{ /* line 419: */
LBPAELA = ((*(&((*KBPAELA_atts)->Key)))!=Key);
}
if ( !(LBPAELA) ) break;
KBPAELA_atts = (&((*KBPAELA_atts)->Rest));
}
 /* line 420: */
 /* line 421: */
 /* line 422: */
(*KBPAELA_atts) = (*(&((*KBPAELA_atts)->Rest)));
} 
} 
A_PROC_EXIT(remove_class);
return;
} 
#undef NL

A68_INT  PBPAELA_rename_password(A68_INT  Key, A68_VC  New_password, A68_97  Msg)
{ 
A68_226 * QBPAELA_att;
A68_VC  RBPAELA;  /* avoid structure result */
A68_VC * SBPAELA;  /* YIELD */
A68_INT  TBPAELA_sort;
A68_INT  UBPAELA_lifetime;
A68_INT  VBPAELA;  /* clause result */
A68_INT * WBPAELA;  /* YIELD */
A_PROC_ENTRY(rename_password);
 /* line 425: */
 /* line 426: */
{ 
QBPAELA_att = GWOAELA_findclass(Key, Msg);
 /* line 427: */
RSCAOST_makeid( New_password, &RBPAELA );
SBPAELA = (&(QBPAELA_att->Password)) ;
(*SBPAELA) = RBPAELA;
 /* line 428: */
TBPAELA_sort = TWOAELA_class_sort(Key);
 /* line 429: */
UBPAELA_lifetime = AXOAELA_class_lifetime(Key);
 /* line 430: */
 /* line 431: */
WBPAELA = (&(QBPAELA_att->Key)) ;
VBPAELA = (*WBPAELA) = GXOAELA_makekey(TBPAELA_sort, UBPAELA_lifetime);
} 
A_PROC_EXIT(rename_password);
return( VBPAELA );
} 
#undef NL

A68_INT  ACPAELA_rename_class(A68_INT  Key, A68_VC  Newname, A68_97  Msg)
{ 
A68_226 * BCPAELA_att;
A68_VC  CCPAELA;  /* avoid structure result */
A68_VC * DCPAELA;  /* YIELD */
A68_INT  ECPAELA_sort;
A68_INT  FCPAELA_lifetime;
A68_INT  GCPAELA;  /* clause result */
A68_INT * HCPAELA;  /* YIELD */
A_PROC_ENTRY(rename_class);
 /* line 434: */
 /* line 435: */
{ 
BCPAELA_att = GWOAELA_findclass(Key, Msg);
 /* line 436: */
RSCAOST_makeid( Newname, &CCPAELA );
DCPAELA = (&(BCPAELA_att->Name)) ;
(*DCPAELA) = CCPAELA;
 /* line 437: */
ECPAELA_sort = TWOAELA_class_sort(Key);
 /* line 438: */
FCPAELA_lifetime = AXOAELA_class_lifetime(Key);
 /* line 439: */
 /* line 440: */
HCPAELA = (&(BCPAELA_att->Key)) ;
GCPAELA = (*HCPAELA) = GXOAELA_makekey(ECPAELA_sort, FCPAELA_lifetime);
} 
A_PROC_EXIT(rename_class);
return( GCPAELA );
} 
#undef NL

A68_INT  LCPAELA_login_class(A68_VC  Name, A68_VC  Password, A68_97  Msg)
{ 
A68_226 * MCPAELA_att;
A68_46  PCPAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  QCPAELA;  /* clause result */
A68_46  TCPAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL * UCPAELA;  /* YIELD */
A_PROC_ENTRY(login_class);
 /* line 443: */
 /* line 444: */
{ 
MCPAELA_att = KVOAELA_qfindname(Name);
 /* line 445: */
 /* line 446: */
if ( (MCPAELA_att==KTJAELA_nilclasses) )
{ 
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(PCPAELA,A_VC_PLUS(OCPAELA,Name),A68_VC )),(WHAAOSI_user, A_HVEC(PCPAELA,A_VC_PLUS(OCPAELA,Name),A68_VC ),(Msg).nonlocals));
 /* line 447: */
QCPAELA = 0;
} 
else
{ 
 /* line 448: */
if ( A_VC_NE(Password,(*(&(MCPAELA_att->Password)))) )
{ 
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(TCPAELA,A_VC_PLUS(A_VC_PLUS(Password,SCPAELA),Name),A68_VC )),(WHAAOSI_user, A_HVEC(TCPAELA,A_VC_PLUS(A_VC_PLUS(Password,SCPAELA),Name),A68_VC ),(Msg).nonlocals));
 /* line 449: */
QCPAELA = 0;
} 
else
{ 
UCPAELA = (&(MCPAELA_att->Login)) ;
(*UCPAELA) = A68_TRUE;
 /* line 450: */
 /* line 451: */
 /* line 452: */
QCPAELA = (*(&(MCPAELA_att->Key)));
} 
} 
} 
A_PROC_EXIT(login_class);
return( QCPAELA );
} 
#undef NL

A68_VOID  XCPAELA_logout_class(A68_INT  Key, A68_97  Msg)
{ 
A68_226 * YCPAELA_att;
A68_BOOL * ZCPAELA;  /* YIELD */
A_PROC_ENTRY(logout_class);
 /* line 455: */
 /* line 456: */
{ 
YCPAELA_att = GWOAELA_findclass(Key, Msg);
 /* line 457: */
 /* line 458: */
ZCPAELA = (&(YCPAELA_att->Login)) ;
(*ZCPAELA) = A68_FALSE;
} 
A_PROC_EXIT(logout_class);
return;
} 
#undef NL

A68_VOID  EDPAELA_write_class(A68_VC  Ctn, A68_176  Attptr, A68_INT  Key, A68_97  Msg)
{ 
A68_INT  FDPAELA_index;
A68_VC  HDPAELA;  /* avoid structure result */
A68_260  IDPAELA;  /* avoid structure result */
A68_260  GDPAELA_attp;
A68_32  JDPAELA;  /* OPERATORS - simple index */
A68_INT * KDPAELA;  /* YIELD */
A68_177  LDPAELA;  /* OPERATORS - simple index */
A68_INT  MDPAELA;  /* YIELD */
A68_176 * NDPAELA;  /* YIELD */
A_PROC_ENTRY(write_class);
 /* line 463: */
 /* line 464: */
{ 
FDPAELA_index = LWOAELA_findindex(Key, Msg);
 /* line 465: */
RSCAOST_makeid( Ctn, &HDPAELA );
SQOAELA_readattpointers( HDPAELA, A68_TRUE, Msg, &IDPAELA );
GDPAELA_attp = IDPAELA;
 /* line 466: */
JDPAELA = (*(&((&GDPAELA_attp)->Attinfo))) ;
KDPAELA = (&A_VINDEX(JDPAELA,FDPAELA_index)) ;
(*KDPAELA) = (*(&(HXJAELA_library->Version)));
 /* line 467: */
LDPAELA = (*(&((&GDPAELA_attp)->Attdps))) ;
MDPAELA = (FDPAELA_index+(*(&((&GDPAELA_attp)->Offset)))) ;
NDPAELA = (&A_VINDEX(LDPAELA,MDPAELA)) ;
(*NDPAELA) = Attptr;
 /* line 468: */
 /* line 469: */
QROAELA_writeattpointers(GDPAELA_attp, Msg);
} 
A_PROC_EXIT(write_class);
return;
} 
#undef NL

A68_VOID  RDPAELA_read_class(A68_VC  Ctn, A68_INT  Key, A68_97  Msg, A68_176  *ReturnedValue)
{ 
A68_INT  SDPAELA_index;
A68_VC  TDPAELA;  /* avoid structure result */
A68_260  UDPAELA;  /* avoid structure result */
A68_260  VDPAELA_attp;
A68_176  WDPAELA;  /* clause result */
A68_177  XDPAELA;  /* OPERATORS - simple index */
A68_INT  YDPAELA;  /* YIELD */
A_PROC_ENTRY(read_class);
 /* line 472: */
 /* line 473: */
{ 
SDPAELA_index = LWOAELA_findindex(Key, Msg);
 /* line 474: */
RSCAOST_makeid( Ctn, &TDPAELA );
SQOAELA_readattpointers( TDPAELA, A68_TRUE, Msg, &UDPAELA );
VDPAELA_attp = UDPAELA;
 /* line 475: */
 /* line 476: */
XDPAELA = VDPAELA_attp.Attdps ;
YDPAELA = (SDPAELA_index+VDPAELA_attp.Offset) ;
WDPAELA = (*(&A_VINDEX(XDPAELA,YDPAELA)));
} 
A_PROC_EXIT(read_class);
*ReturnedValue = (WDPAELA);
return;
} 
#undef NL

A68_BOOL  CEPAELA_can_remove_class(A68_INT  Key, A68_97  Print, A68_97  Msg)
{ 
A68_236 * DEPAELA_cts;
A68_VC  EEPAELA_ctn;
A68_BOOL  FEPAELA_no_msg;
A68_VC  GEPAELA;  /* clause result */
A68_176  HEPAELA;  /* avoid structure result */
A68_46  IEPAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  JEPAELA;  /* clause result */
A68_BOOL  KEPAELA;  /* clause result */
A_PROC_ENTRY(can_remove_class);
 /* line 479: */
 /* line 480: */
{ 
DEPAELA_cts = (*(&(HXJAELA_library->Contexts)));
 /* line 481: */
 /* line 482: */
FEPAELA_no_msg = A68_TRUE;
 /* line 483: */
for ( ;; )
{ 
 /* line 484: */
if ( (DEPAELA_cts==EVJAELA_nilcontexts) )
{ 
GEPAELA = TTCAOST_nullid;
} 
else
{ 
GEPAELA = (*(&((&(DEPAELA_cts->Context))->Name)));
} 
EEPAELA_ctn = GEPAELA;
 /* line 485: */
 /* line 486: */
RDPAELA_read_class( EEPAELA_ctn, Key, Msg, &HEPAELA );
if ( !UXIAELA_isnilptr(TYJAELA_discfile, HEPAELA) )
{ 
FEPAELA_no_msg = A68_FALSE;
 /* line 487: */
 /* line 488: */
A_CALLPROC(Print,(CIAAOSI_log, A_HVEC(IEPAELA,EEPAELA_ctn,A68_VC )),(CIAAOSI_log, A_HVEC(IEPAELA,EEPAELA_ctn,A68_VC ),(Print).nonlocals));
} 
 /* line 489: */
 /* line 490: */
JEPAELA = (DEPAELA_cts!=EVJAELA_nilcontexts);
if ( !JEPAELA ) break;
DEPAELA_cts = (*(&(DEPAELA_cts->Rest)));
}
 /* line 491: */
 /* line 492: */
KEPAELA = FEPAELA_no_msg;
} 
A_PROC_EXIT(can_remove_class);
return( KEPAELA );
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void MPOAELA(void)   /* initialise DECS attrlevel1 */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/attrlevel1.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/libmodes.m","./mfiles/databasebuffers.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
FTJAELA();   /* USE libmodes */
NWIAELA();   /* USE databasebuffers */
PCAAOST();   /* USE osinterface */
JSCAOST();   /* USE basics */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ella/assoc/./a68files/attrlevel1.a68";
A_config.translation_time = "Tue Apr  4 10:35:29 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "LPOAELA (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:35:29 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS attrlevel1);
UEAALIB_a68config(LGAALIB_configinfo, QPOAELA);
 /* line 107: */
 /* line 109: */
 /* line 111: */
 /* line 128: */
 /* line 143: */
 /* line 161: */
 /* line 190: */
 /* line 221: */
 /* line 229: */
 /* line 237: */
 /* line 247: */
 /* line 254: */
 /* line 266: */
 /* line 268: */
 /* line 270: */
 /* line 272: */
 /* line 279: */
 /* line 300: */
 /* line 324: */
 /* line 348: */
 /* line 349: */
 /* line 350: */
 /* line 370: */
 /* line 387: */
 /* line 390: */
 /* line 408: */
 /* line 411: */
 /* line 424: */
 /* line 433: */
 /* line 442: */
 /* line 454: */
 /* line 461: */
 /* line 471: */
 /* line 478: */
 /* line 496: */
 /* line 497: */
 /* line 508: */
/*SKIP*/;
A_PROC_EXIT(DECS attrlevel1);
} 
#undef NL
/* end of translation of ./a68files/attrlevel1.a68 */
