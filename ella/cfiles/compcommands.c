
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
/* UNAME:YYHBELA */
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

A_PROCEDURE(A68_VOID ,A68t257,(struct A68t111 ,struct A68t97 ),(struct A68t111 ,struct A68t97 ,void *));
typedef struct A68t257  A68_257 ;    /* PROC(MODE111,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t258,(struct A68t239 ,A68_INT ,struct A68t97 ),(struct A68t239 ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t258  A68_258 ;    /* PROC(MODE239,INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t259,(struct A68t239 ,struct A68t97 ),(struct A68t239 ,struct A68t97 ,void *));
typedef struct A68t259  A68_259 ;    /* PROC(MODE239,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t260,(struct A68t234 *,A68_VC ,struct A68t97 ),(struct A68t234 *,A68_VC ,struct A68t97 ,void *));
typedef struct A68t260  A68_260 ;    /* PROC(REF MODE234,REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t261,(struct A68t239 ,A68_VC ,struct A68t97 ),(struct A68t239 ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t261  A68_261 ;    /* PROC(MODE239,REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t262,(struct A68t234 *,struct A68t97 ),(struct A68t234 *,struct A68t97 ,void *));
typedef struct A68t262  A68_262 ;    /* PROC(REF MODE234,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t263,(A68_INT ,struct A68t97 ),(A68_INT ,struct A68t97 ,void *));
typedef struct A68t263  A68_263 ;    /* PROC(INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t264,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t264  A68_264 ;    /* PROC(MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t265,(struct A68t234 *,A68_INT ,struct A68t97 ),(struct A68t234 *,A68_INT ,struct A68t97 ,void *));
typedef struct A68t265  A68_265 ;    /* PROC(REF MODE234,INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t266,(struct A68t239 ,struct A68t176 ,struct A68t97 ),(struct A68t239 ,struct A68t176 ,struct A68t97 ,void *));
typedef struct A68t266  A68_266 ;    /* PROC(MODE239,MODE176,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t267,(struct A68t234 *,A68_INT ,A68_BOOL ,A68_BOOL ,struct A68t97 ),(struct A68t234 *,A68_INT ,A68_BOOL ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t267  A68_267 ;    /* PROC(REF MODE234,INT,BOOL,BOOL,MODE97) VOID */
struct A68t269 ;
struct A68t270 ;
struct A68t271 ;

A_PROCEDURE(A68_VOID ,A68t268,(A68_BOOL ,struct A68t239 ,struct A68t269 ,struct A68t270 ,struct A68t43 ,struct A68t43 ,struct A68t271 ,struct A68t43 ,A68_BOOL *,struct A68t97 ),(A68_BOOL ,struct A68t239 ,struct A68t269 ,struct A68t270 ,struct A68t43 ,struct A68t43 ,struct A68t271 ,struct A68t43 ,A68_BOOL *,struct A68t97 ,void *));
typedef struct A68t268  A68_268 ;    /* PROC(BOOL,MODE239,MODE269,MODE270,MODE43,MODE43,MODE271,MODE43,REF BOOL,MODE97) VOID */

A_PROCEDURE(A68_BOOL ,A68t272,(A68_VC *,A68_INT *,struct A68t97 ),(A68_VC *,A68_INT *,struct A68t97 ,void *));
typedef struct A68t272  A68_272 ;    /* PROC(REF REF MODE26,REF INT,MODE97) BOOL */
struct A68t269 { A68_INT mode; union {
struct A68t127 * mode1;
struct A68t272  mode2;
} data; };
typedef struct A68t269  A68_269 ;    /* UNION(REF MODE127,MODE272)  */

A_PROCEDURE(A68_VOID ,A68t270,(struct A68t32 ),(struct A68t32 ,void *));
typedef struct A68t270  A68_270 ;    /* PROC(MODE32) VOID */

A_PROCEDURE(A68_VOID ,A68t271,(A68_VC ,A68_VC ,struct A68t111 ),(A68_VC ,A68_VC ,struct A68t111 ,void *));
typedef struct A68t271  A68_271 ;    /* PROC(REF MODE26,REF MODE26,MODE111) VOID */

A_PROCEDURE(A68_VOID ,A68t273,(A68_BOOL ,struct A68t239 ,struct A68t269 ,struct A68t97 ,struct A68t176 *),(A68_BOOL ,struct A68t239 ,struct A68t269 ,struct A68t97 ,struct A68t176 *,void *));
typedef struct A68t273  A68_273 ;    /* PROC(BOOL,MODE239,MODE269,MODE97) MODE176 */
struct A68t274{
A68_BOOL  Logging;
A_PAD_BOOL(PAD_75)
A68_BOOL  Outputing;
A_PAD_BOOL(PAD_76)
A68_BOOL  Seeing_in;
A_PAD_BOOL(PAD_77)
A68_BOOL  Seeing_out;
A_PAD_BOOL(PAD_78)
A68_BOOL  Paging;
A_PAD_BOOL(PAD_79)
A68_BOOL  Clock;
A_PAD_BOOL(PAD_80)
A68_BOOL  Screen_output;
A_PAD_BOOL(PAD_81)
A68_INT  Width;
A_PAD_INT(PAD_82)
A68_INT  Page_count;
A_PAD_INT(PAD_83)
A68_INT  Page_length;
A_PAD_INT(PAD_84)
A68_INT  Eof_count;
A_PAD_INT(PAD_85)
struct A68t275 * Standard_reader;
struct A68t276 * Infile;
struct A68t124  Prompt;
struct A68t127 * Logfile;
struct A68t127 * Outfile;
};
typedef struct A68t274  A68_274 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,INT,INT,REF MODE275,REF MODE276,MODE124,REF MODE127,REF MODE127)  */

A_PROCEDURE(A68_INT ,A68t277,(A68_VC *,struct A68t97 ),(A68_VC *,struct A68t97 ,void *));
typedef struct A68t277  A68_277 ;    /* PROC(REF REF MODE26,MODE97) INT */
struct A68t275{
A68_VC  Rdbuffer;
struct A68t277  Rdline;
A68_INT  Rdcharend;
A_PAD_INT(PAD_86)
A68_INT  Rdcharno;
A_PAD_INT(PAD_87)
A68_INT  Start_of_word;
A_PAD_INT(PAD_88)
struct A68t278 * Stack;
};
typedef struct A68t275  A68_275 ;    /* STRUCT(REF MODE26,MODE277,INT,INT,INT,REF MODE278)  */
struct A68t276{
struct A68t127 * File;
A68_BOOL  Suspended;
A_PAD_BOOL(PAD_89)
A68_INT  Number;
A_PAD_INT(PAD_90)
A68_VC  Name;
struct A68t275 * Reader;
struct A68t276 * Previous;
};
typedef struct A68t276  A68_276 ;    /* STRUCT(REF MODE127,BOOL,INT,REF MODE26,REF MODE275,REF MODE276)  */
struct A68t278{
A68_VC  Line;
struct A68t278 * Rest;
};
typedef struct A68t278  A68_278 ;    /* STRUCT(REF MODE26,REF MODE278)  */

A_PROCEDURE(struct A68t274 *,A68t279,(void),(void *));
typedef struct A68t279  A68_279 ;    /* PROC REF MODE274 */

A_PROCEDURE(A68_VOID ,A68t280,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t280  A68_280 ;    /* PROC(REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t281,(struct A68t124 ),(struct A68t124 ,void *));
typedef struct A68t281  A68_281 ;    /* PROC(MODE124) VOID */
A_VECTOR(struct A68t284 ,A68t283);
typedef struct A68t283  A68_283 ;    /* VECTOR [] MODE284 */
struct A68t282{
A68_BITS  Type;
A_PAD_BITS(PAD_91)
struct A68t283  Elements;
};
typedef struct A68t282  A68_282 ;    /* STRUCT(BITS,REF MODE283)  */
struct A68t284 { A68_INT mode; union {
A68_INT * mode1;
struct A68t282  mode2;
} data; };
typedef struct A68t284  A68_284 ;    /* UNION(REF INT,MODE282)  */
struct A68t285{
A68_INT  Sort;
A_PAD_INT(PAD_92)
A68_VC  Value;
};
typedef struct A68t285  A68_285 ;    /* STRUCT(INT,REF MODE26)  */
A_VECTOR(struct A68t285 ,A68t286);
typedef struct A68t286  A68_286 ;    /* VECTOR [] MODE285 */
A_VECTOR(struct A68t287 ,A68t289);
typedef struct A68t289  A68_289 ;    /* VECTOR [] MODE287 */
struct A68t288{
A68_INT  Choice;
A_PAD_INT(PAD_93)
struct A68t289  Params;
};
typedef struct A68t288  A68_288 ;    /* STRUCT(INT,REF MODE289)  */
struct A68t287 { A68_INT mode; union {
struct A68t288  mode1;
struct A68t285  mode2;
} data; };
typedef struct A68t287  A68_287 ;    /* UNION(MODE288,MODE285)  */

A_PROCEDURE(A68_VOID ,A68t291,(struct A68t97 ,A68_VC *),(struct A68t97 ,A68_VC *,void *));
typedef struct A68t291  A68_291 ;    /* PROC(MODE97) REF MODE26 */
struct A68t290 { A68_INT mode; union {
struct A68t291  mode1;
A68_INT * mode2;
struct A68t282  mode3;
} data; };
typedef struct A68t290  A68_290 ;    /* UNION(MODE291,REF INT,MODE282)  */
struct A68t292{
A68_INT * Sort;
struct A68t290  Reader;
A68_VC  Description;
A68_VC  Help;
};
typedef struct A68t292  A68_292 ;    /* STRUCT(REF INT,MODE290,REF MODE26,REF MODE26)  */
struct A68t293{
struct A68t292  Rule;
struct A68t293 * Rest;
};
typedef struct A68t293  A68_293 ;    /* STRUCT(MODE292,REF MODE293)  */

A_PROCEDURE(A68_BOOL ,A68t294,(struct A68t282 ),(struct A68t282 ,void *));
typedef struct A68t294  A68_294 ;    /* PROC(MODE282) BOOL */

A_PROCEDURE(A68_VOID ,A68t295,(struct A68t283 ,struct A68t282 *),(struct A68t283 ,struct A68t282 *,void *));
typedef struct A68t295  A68_295 ;    /* PROC(MODE283) MODE282 */

A_PROCEDURE(A68_VOID ,A68t296,(struct A68t284 ,struct A68t282 *),(struct A68t284 ,struct A68t282 *,void *));
typedef struct A68t296  A68_296 ;    /* PROC(MODE284) MODE282 */
struct A68t298 ;

A_PROCEDURE(A68_VOID ,A68t297,(struct A68t284 ,struct A68t298 ,A68_VC *),(struct A68t284 ,struct A68t298 ,A68_VC *,void *));
typedef struct A68t297  A68_297 ;    /* PROC(MODE284,REF MODE298) REF MODE26 */
A_VECTOR(struct A68t292 ,A68t298);
typedef struct A68t298  A68_298 ;    /* VECTOR [] MODE292 */

A_PROCEDURE(A68_VOID ,A68t299,(struct A68t34 *,struct A68t298 ),(struct A68t34 *,struct A68t298 ,void *));
typedef struct A68t299  A68_299 ;    /* PROC(REF MODE34,REF MODE298) VOID */
struct A68t301 ;

A_PROCEDURE(struct A68t293 *,A68t300,(struct A68t293 *,struct A68t301 ),(struct A68t293 *,struct A68t301 ,void *));
typedef struct A68t300  A68_300 ;    /* PROC(REF MODE293,MODE301) REF MODE293 */
A_VECTOR(struct A68t302 ,A68t301);
typedef struct A68t301  A68_301 ;    /* VECTOR [] MODE302 */
struct A68t302{
A68_INT * No;
struct A68t290  New;
A68_VC  Name;
A68_VC  Help;
};
typedef struct A68t302  A68_302 ;    /* STRUCT(REF INT,MODE290,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t303,(struct A68t287 ,struct A68t286 *),(struct A68t287 ,struct A68t286 *,void *));
typedef struct A68t303  A68_303 ;    /* PROC(MODE287) REF MODE286 */
struct A68t304{
A68_INT  C;
A_PAD_INT(PAD_94)
};
typedef struct A68t304  A68_304 ;    /* STRUCT(INT)  */
struct A68t305{
A68_BITS  A;
A_PAD_BITS(PAD_95)
};
typedef struct A68t305  A68_305 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t307,(A68_VC ,struct A68t287 ,struct A68t97 ),(A68_VC ,struct A68t287 ,struct A68t97 ,void *));
typedef struct A68t307  A68_307 ;    /* PROC(REF MODE26,MODE287,MODE97) VOID */
struct A68t306{
A68_VC  Parameter;
struct A68t307  Proc;
};
typedef struct A68t306  A68_306 ;    /* STRUCT(REF MODE26,MODE307)  */

A_PROCEDURE(A68_VOID ,A68t309,(struct A68t287 ,struct A68t97 ),(struct A68t287 ,struct A68t97 ,void *));
typedef struct A68t309  A68_309 ;    /* PROC(MODE287,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t310,(struct A68t286 ,struct A68t97 ),(struct A68t286 ,struct A68t97 ,void *));
typedef struct A68t310  A68_310 ;    /* PROC(REF MODE286,MODE97) VOID */
struct A68t308 { A68_INT mode; union {
struct A68t306  mode1;
struct A68t309  mode2;
struct A68t310  mode3;
} data; };
typedef struct A68t308  A68_308 ;    /* UNION(MODE306,MODE309,MODE310)  */
struct A68t311 { A68_INT mode; union {
struct A68t312 * mode1;
struct A68t313 * mode2;
struct A68t314 * mode3;
} data; };
typedef struct A68t311  A68_311 ;    /* UNION(REF MODE312,REF MODE313,REF MODE314)  */
struct A68t312 ;

A_PROCEDURE(A68_VOID ,A68t317,(struct A68t312 *,struct A68t34 *),(struct A68t312 *,struct A68t34 *,void *));
typedef struct A68t317  A68_317 ;    /* PROC(REF MODE312,REF MODE34) VOID */
struct A68t316 { A68_INT mode; union {
A68_VC  mode1;
struct A68t102  mode2;
struct A68t317  mode3;
} data; };
typedef struct A68t316  A68_316 ;    /* UNION(REF MODE26,REF MODE102,MODE317)  */
struct A68t312{
A68_VC  Name;
A68_VC  Abreviation;
struct A68t284  Parameter;
struct A68t305  Access;
struct A68t304  Continuation;
struct A68t316  Help;
struct A68t308  Command;
};
typedef struct A68t312  A68_312 ;    /* STRUCT(REF MODE26,REF MODE26,MODE284,MODE305,MODE304,MODE316,MODE308)  */
A_VECTOR(struct A68t311 ,A68t315);
typedef struct A68t315  A68_315 ;    /* VECTOR [] MODE311 */
struct A68t313{
struct A68t312 * Group;
struct A68t315  Commands;
};
typedef struct A68t313  A68_313 ;    /* STRUCT(REF MODE312,REF MODE315)  */
struct A68t314{
struct A68t312 * Prelude;
A68_VC  Context;
A68_VC * Prompt;
struct A68t315  Locals;
struct A68t315  Globals;
struct A68t312 * Postlude;
};
typedef struct A68t314  A68_314 ;    /* STRUCT(REF MODE312,REF MODE26,REF REF MODE26,REF MODE315,REF MODE315,REF MODE312)  */
struct A68t318{
struct A68t314 * Current_context;
A68_INT  Depth;
A_PAD_INT(PAD_96)
struct A68t102  Input_lines;
struct A68t318 * Caller;
};
typedef struct A68t318  A68_318 ;    /* STRUCT(REF MODE314,INT,REF MODE102,REF MODE318)  */
struct A68t319 ;

A_PROCEDURE(A68_VOID ,A68t320,(struct A68t319 *,struct A68t312 *,struct A68t287 ,struct A68t97 ,struct A68t304 *),(struct A68t319 *,struct A68t312 *,struct A68t287 ,struct A68t97 ,struct A68t304 *,void *));
typedef struct A68t320  A68_320 ;    /* PROC(REF MODE319,REF MODE312,MODE287,MODE97) MODE304 */

A_PROCEDURE(A68_VOID ,A68t321,(struct A68t102 ),(struct A68t102 ,void *));
typedef struct A68t321  A68_321 ;    /* PROC(REF MODE102) VOID */
struct A68t323 ;

A_PROCEDURE(A68_VOID ,A68t322,(struct A68t323 ),(struct A68t323 ,void *));
typedef struct A68t322  A68_322 ;    /* PROC(MODE323) VOID */
struct A68t319{
struct A68t318 * Stack;
struct A68t298  Analysers;
A68_BOOL  Hidden;
A_PAD_BOOL(PAD_97)
A68_BOOL  Private;
A_PAD_BOOL(PAD_98)
A68_BOOL  Secret;
A_PAD_BOOL(PAD_99)
struct A68t320  Caller;
struct A68t321  Report_error;
struct A68t322  Set_default_msg;
struct A68t97  Abort;
};
typedef struct A68t319  A68_319 ;    /* STRUCT(REF MODE318,REF MODE298,BOOL,BOOL,BOOL,MODE320,MODE321,MODE322,MODE97)  */
struct A68t323 { A68_INT mode; union {
struct A68t97  mode1;
} data; };
typedef struct A68t323  A68_323 ;    /* UNION(MODE97,VOID)  */

A_PROCEDURE(A68_BOOL ,A68t324,(struct A68t304 ,struct A68t304 ),(struct A68t304 ,struct A68t304 ,void *));
typedef struct A68t324  A68_324 ;    /* PROC(MODE304,MODE304) BOOL */

A_PROCEDURE(A68_VOID ,A68t325,(struct A68t315 ,struct A68t315 ,struct A68t315 *),(struct A68t315 ,struct A68t315 ,struct A68t315 *,void *));
typedef struct A68t325  A68_325 ;    /* PROC(MODE315,MODE315) REF MODE315 */

A_PROCEDURE(A68_VOID ,A68t326,(struct A68t315 ,struct A68t311 ,struct A68t315 *),(struct A68t315 ,struct A68t311 ,struct A68t315 *,void *));
typedef struct A68t326  A68_326 ;    /* PROC(MODE315,MODE311) REF MODE315 */

A_PROCEDURE(A68_VOID ,A68t327,(struct A68t315 *,struct A68t315 ,struct A68t315 *),(struct A68t315 *,struct A68t315 ,struct A68t315 *,void *));
typedef struct A68t327  A68_327 ;    /* PROC(REF REF MODE315,MODE315) REF MODE315 */

A_PROCEDURE(A68_VOID ,A68t328,(struct A68t315 *,struct A68t311 ,struct A68t315 *),(struct A68t315 *,struct A68t311 ,struct A68t315 *,void *));
typedef struct A68t328  A68_328 ;    /* PROC(REF REF MODE315,MODE311) REF MODE315 */

A_PROCEDURE(A68_VOID ,A68t329,(struct A68t315 ,struct A68t315 *),(struct A68t315 ,struct A68t315 *,void *));
typedef struct A68t329  A68_329 ;    /* PROC(MODE315) REF MODE315 */

A_PROCEDURE(A68_VOID ,A68t330,(struct A68t311 ,struct A68t315 *),(struct A68t311 ,struct A68t315 *,void *));
typedef struct A68t330  A68_330 ;    /* PROC(MODE311) REF MODE315 */

A_PROCEDURE(struct A68t313 *,A68t331,(A68_VC ,A68_VC ,struct A68t305 ,struct A68t315 ),(A68_VC ,A68_VC ,struct A68t305 ,struct A68t315 ,void *));
typedef struct A68t331  A68_331 ;    /* PROC(MODE26,MODE26,MODE305,MODE315) REF MODE313 */

A_PROCEDURE(struct A68t314 *,A68t332,(struct A68t312 *,A68_VC ,A68_VC *,struct A68t315 ,struct A68t315 ,struct A68t308 ),(struct A68t312 *,A68_VC ,A68_VC *,struct A68t315 ,struct A68t315 ,struct A68t308 ,void *));
typedef struct A68t332  A68_332 ;    /* PROC(REF MODE312,MODE26,REF REF MODE26,REF MODE315,REF MODE315,MODE308) REF MODE314 */

A_PROCEDURE(A68_VOID ,A68t333,(struct A68t319 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ),(struct A68t319 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t333  A68_333 ;    /* PROC(REF MODE319,REF MODE34,REF MODE26,BOOL,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t334,(struct A68t319 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ),(struct A68t319 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t334  A68_334 ;    /* PROC(REF MODE319,REF MODE34,BOOL,BOOL,MODE97) VOID */

A_PROCEDURE(struct A68t319 *,A68t335,(struct A68t321 ,struct A68t322 ,struct A68t97 ,struct A68t320 ,struct A68t293 *,struct A68t314 *,struct A68t287 ),(struct A68t321 ,struct A68t322 ,struct A68t97 ,struct A68t320 ,struct A68t293 *,struct A68t314 *,struct A68t287 ,void *));
typedef struct A68t335  A68_335 ;    /* PROC(MODE321,MODE322,MODE97,MODE320,REF MODE293,REF MODE314,MODE287) REF MODE319 */

A_PROCEDURE(A68_VOID ,A68t336,(struct A68t319 *,struct A68t304 *),(struct A68t319 *,struct A68t304 *,void *));
typedef struct A68t336  A68_336 ;    /* PROC(REF MODE319) MODE304 */

A_PROCEDURE(A68_BOOL ,A68t337,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t337  A68_337 ;    /* PROC(CHAR) BOOL */

A_PROCEDURE(A68_VOID ,A68t338,(A68_INT ,A68_VC ,struct A68t97 ),(A68_INT ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t338  A68_338 ;    /* PROC(INT,MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t339,(A68_VC ,A68_VC ,struct A68t337 ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t337 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t339  A68_339 ;    /* PROC(REF MODE26,MODE26,MODE337,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t340,(A68_VC ),(A68_VC ,void *));
typedef struct A68t340  A68_340 ;    /* PROC(REF MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t341,(A68_INT *,struct A68t97 ),(A68_INT *,struct A68t97 ,void *));
typedef struct A68t341  A68_341 ;    /* PROC(REF INT,MODE97) BOOL */
struct A68t343 ;

A_PROCEDURE(A68_VOID ,A68t342,(struct A68t343 ,struct A68t97 ,A68_VC *),(struct A68t343 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t342  A68_342 ;    /* PROC(MODE343,MODE97) REF MODE26 */
struct A68t343{
A68_BOOL  Get_first;
A_PAD_BOOL(PAD_100)
A68_BOOL  Check;
A_PAD_BOOL(PAD_101)
};
typedef struct A68t343  A68_343 ;    /* STRUCT(BOOL,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t344,(struct A68t343 ,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t343 ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t344  A68_344 ;    /* PROC(MODE343,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t345,(A68_BOOL ,struct A68t97 ,A68_VC *),(A68_BOOL ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t345  A68_345 ;    /* PROC(BOOL,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t346,(struct A68t285 ),(struct A68t285 ,void *));
typedef struct A68t346  A68_346 ;    /* PROC(MODE285) BOOL */

A_PROCEDURE(A68_INT ,A68t347,(struct A68t285 ,struct A68t97 ),(struct A68t285 ,struct A68t97 ,void *));
typedef struct A68t347  A68_347 ;    /* PROC(MODE285,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t348,(struct A68t285 ,struct A68t97 ,A68_VC *),(struct A68t285 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t348  A68_348 ;    /* PROC(MODE285,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t349,(struct A68t285 ,A68_VC ,struct A68t97 ,struct A68t149 *),(struct A68t285 ,A68_VC ,struct A68t97 ,struct A68t149 *,void *));
typedef struct A68t349  A68_349 ;    /* PROC(MODE285,MODE26,MODE97) MODE149 */

A_PROCEDURE(A68_VOID ,A68t350,(struct A68t286 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t111 *),(struct A68t286 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t111 *,void *));
typedef struct A68t350  A68_350 ;    /* PROC(REF MODE286,REF INT,REF MODE26,MODE97) MODE111 */

A_PROCEDURE(A68_VOID ,A68t351,(struct A68t285 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t285 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t351  A68_351 ;    /* PROC(MODE285,REF BOOL,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t352,(struct A68t285 ,struct A68t97 ,struct A68t46 ),(struct A68t285 ,struct A68t97 ,struct A68t46 ,void *));
typedef struct A68t352  A68_352 ;    /* PROC(MODE285,MODE97,MODE46) INT */
struct A68t353{
A68_INT  Lwb;
A_PAD_INT(PAD_102)
A68_INT  Upb;
A_PAD_INT(PAD_103)
};
typedef struct A68t353  A68_353 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t354,(struct A68t285 ,struct A68t353 ,struct A68t97 ,struct A68t353 *),(struct A68t285 ,struct A68t353 ,struct A68t97 ,struct A68t353 *,void *));
typedef struct A68t354  A68_354 ;    /* PROC(MODE285,MODE353,MODE97) MODE353 */

A_PROCEDURE(A68_VOID ,A68t355,(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *),(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t355  A68_355 ;    /* PROC(CHAR,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_CHAR ,A68t356,(struct A68t285 ,struct A68t97 ),(struct A68t285 ,struct A68t97 ,void *));
typedef struct A68t356  A68_356 ;    /* PROC(MODE285,MODE97) CHAR */

A_PROCEDURE(struct A68t293 *,A68t357,(void),(void *));
typedef struct A68t357  A68_357 ;    /* PROC REF MODE293 */

A_PROCEDURE(A68_BOOL ,A68t358,(struct A68t92 ),(struct A68t92 ,void *));
typedef struct A68t358  A68_358 ;    /* PROC(MODE92) BOOL */
struct A68t359{
A68_BITS  Options;
A_PAD_BITS(PAD_104)
};
typedef struct A68t359  A68_359 ;    /* STRUCT(BITS)  */
struct A68t361 ;

A_PROCEDURE(A68_VOID ,A68t360,(struct A68t361 ),(struct A68t361 ,void *));
typedef struct A68t360  A68_360 ;    /* PROC(MODE361) VOID */
struct A68t361 { A68_INT mode; union {
A68_BOOL  mode1;
struct A68t359  mode2;
A68_VC  mode3;
} data; };
typedef struct A68t361  A68_361 ;    /* UNION(BOOL,MODE359,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t362,(struct A68t158 ),(struct A68t158 ,void *));
typedef struct A68t362  A68_362 ;    /* PROC(MODE158) VOID */

A_PROCEDURE(A68_VOID ,A68t363,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t363  A68_363 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,59,A68t364);
typedef struct A68t364  A68_364 ;    /* STRUCT 59 CHAR */

A_PROCEDURE(A68_VOID ,A68t365,(A68_VC ,A68_BOOL ,struct A68t97 ),(A68_VC ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t365  A68_365 ;    /* PROC(MODE26,BOOL,MODE97) VOID */
A_ISTRUCT(A68_VC ,3,A68t366);
typedef struct A68t366  A68_366 ;    /* STRUCT 3 MODE26 */
A_ISTRUCT(A68_CHAR ,13,A68t367);
typedef struct A68t367  A68_367 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t368);
typedef struct A68t368  A68_368 ;    /* STRUCT 3 MODE52 */

A_PROCEDURE(A68_VOID ,A68t369,(A68_BOOL ,struct A68t102 *),(A68_BOOL ,struct A68t102 *,void *));
typedef struct A68t369  A68_369 ;    /* PROC(BOOL) MODE102 */
A_ISTRUCT(A68_CHAR ,3,A68t370);
typedef struct A68t370  A68_370 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_VC ,4,A68t371);
typedef struct A68t371  A68_371 ;    /* STRUCT 4 MODE26 */
A_ISTRUCT(A68_CHAR ,8,A68t372);
typedef struct A68t372  A68_372 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t373);
typedef struct A68t373  A68_373 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t374);
typedef struct A68t374  A68_374 ;    /* STRUCT 2 MODE52 */

A_PROCEDURE(A68_VOID ,A68t375,(struct A68t315 *),(struct A68t315 *,void *));
typedef struct A68t375  A68_375 ;    /* PROC REF MODE315 */
A_ISTRUCT(A68_CHAR ,11,A68t376);
typedef struct A68t376  A68_376 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t377);
typedef struct A68t377  A68_377 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,175,A68t378);
typedef struct A68t378  A68_378 ;    /* STRUCT 175 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t379);
typedef struct A68t379  A68_379 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,64,A68t380);
typedef struct A68t380  A68_380 ;    /* STRUCT 64 CHAR */
A_ISTRUCT(A68_CHAR ,82,A68t381);
typedef struct A68t381  A68_381 ;    /* STRUCT 82 CHAR */
A_ISTRUCT(A68_CHAR ,170,A68t382);
typedef struct A68t382  A68_382 ;    /* STRUCT 170 CHAR */
A_ISTRUCT(struct A68t311 ,4,A68t383);
typedef struct A68t383  A68_383 ;    /* STRUCT 4 MODE311 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from testmode --- */
extern A68_VOID  SIBAOST_testmode_file_name(struct A68t127 *,A68_VC *);
/* --- End of imports from testmode --- */


/* --- Imports from libmessages --- */
/* --- End of imports from libmessages --- */


/* --- Imports from compmessages --- */
extern A68_BOOL  BZAAELA_is_comp_msg(struct A68t92 );
/* --- End of imports from compmessages --- */


/* --- Imports from kernelreader --- */
extern A68_284  HNFAOST_filename_syntax;
extern A68_VOID  XNFAOST_get_filename(struct A68t285 ,A68_VC ,struct A68t97 ,A68_149 *);
extern A68_284  IOFAOST_text_syntax;
extern A68_VOID  FPFAOST_get_text(struct A68t285 ,struct A68t97 ,A68_VC *);
/* --- End of imports from kernelreader --- */


/* --- Imports from command --- */
extern A68_305  XMDAOST_normalaccess;
extern A68_305  BNDAOST_hiddenaccess;
extern A68_304  ZNDAOST_continue;
extern A68_VOID  ARDAOST_makecommands(struct A68t315 ,A68_315 *);
/* --- End of imports from command --- */


/* --- Imports from commandsyntax --- */
extern A68_284  SRAAOST_noparameters;
/* --- End of imports from commandsyntax --- */


/* --- Imports from ioprocs --- */
/* --- End of imports from ioprocs --- */


/* --- Imports from compshell --- */
extern A68_VOID  NLDBELA_ella_shell(A68_BOOL ,struct A68t239 ,struct A68t269 ,struct A68t97 ,A68_176 *);
/* --- End of imports from compshell --- */


/* --- Imports from libprocs --- */
extern A68_VOID  KOCBELA_merge_compiled(struct A68t239 ,struct A68t176 ,struct A68t97 );
extern A68_VOID  TPCBELA_merge_imports(struct A68t239 ,struct A68t176 ,struct A68t97 );
/* --- End of imports from libprocs --- */


/* --- Imports from libmodes --- */
extern A68_237 * HXJAELA_library;
extern A68_234 * UDKAELA_get_context(A68_VC );
extern A68_VOID  AEKAELA_get_region(struct A68t234 *,A68_VC ,A68_239 *);
/* --- End of imports from libmodes --- */


/* --- Imports from databasebuffers --- */
/* --- End of imports from databasebuffers --- */


/* --- Imports from osinterface --- */
extern A68_BOOL  PPBAOSI_(struct A68t35 ,struct A68t35 );
extern A68_35  GPBAOSI_io_eof;
extern A68_35  GDAAOST_io_partline;
extern A68_127 * INBAOSI_stdin;
extern A68_127 * JNBAOSI_stdout;
extern A68_129  PNBAOSI_read_access;
extern A68_129  BOBAOSI_update_access;
extern A68_129  FOBAOSI_update_truncate_access;
#define HDAAOST_block_update_access BOBAOSI_update_access
#define IDAAOST_block_update_truncate_access FOBAOSI_update_truncate_access
extern A68_127 * FQBAOSI_open_file(A68_VC ,struct A68t129 ,struct A68t97 );
extern A68_VOID  XQBAOSI_close_file(struct A68t127 *,struct A68t97 );
extern A68_VOID  SRBAOSI_read_line(struct A68t127 *,A68_VC ,A68_INT *,struct A68t97 ,A68_35 *);
extern A68_VOID  JSBAOSI_write_buffer(struct A68t127 *,A68_VC ,struct A68t97 ,A68_35 *);
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
extern A68_34 * KEAAOST_screen;
/* --- End of imports from osinterface --- */


/* --- Imports from basics --- */
extern A68_VC  DLDAOST_source_type;
/* --- End of imports from basics --- */


/* --- Imports from messageproc --- */
extern A68_VOID  ZAAAOSI_makervc(A68_VC ,A68_VC *);
extern A68_BOOL  TKAAOSI_error_msg(struct A68t106 );
extern A68_BOOL  ZKAAOSI_abort_msg(struct A68t106 );
extern A68_BOOL  ELAAOSI_cli_msg(struct A68t106 );
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VC  EOAAOSL_nullstr;
extern A68_VOID  NAAAOSI_makervc(A68_CHAR ,A68_VC *);
extern A68_VOID  JBAAOSI_concat(struct A68t46 ,A68_VC *);
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void QFBAOST(void);   /* testmode */
extern void IZAAELA(void);   /* libmessages */
extern void CFAAELA(void);   /* compmessages */
extern void TXEAOST(void);   /* kernelreader */
extern void FMDAOST(void);   /* command */
extern void LRAAOST(void);   /* commandsyntax */
extern void TIGAOST(void);   /* ioprocs */
extern void MDDBELA(void);   /* compshell */
extern void ZSBBELA(void);   /* libprocs */
extern void FTJAELA(void);   /* libmodes */
extern void NWIAELA(void);   /* databasebuffers */
extern void PCAAOST(void);   /* osinterface */
extern void JSCAOST(void);   /* basics */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_364   CZHBELA = {"$Id: compcommands.a68,v 34.2 1995/03/29 13:03:19 ella Exp $"}; 
A_GISVEC(A68_VC ,DZHBELA,CZHBELA,59)
static A68_367   DAIBELA = {"Closing file "}; 
A_GISVEC(A68_VC ,EAIBELA,DAIBELA,13)
static A68_370   BBIBELA = {": ("}; 
A_GISVEC(A68_VC ,CBIBELA,BBIBELA,3)
static A68_372   WBIBELA = {"IMPORTS "}; 
A_GISVEC(A68_VC ,XBIBELA,WBIBELA,8)
static A68_372   HDIBELA = {"Text <- "}; 
A_GISVEC(A68_VC ,IDIBELA,HDIBELA,8)
static A68_373   YDIBELA = {"FINISH"}; 
A_GISVEC(A68_VC ,AEIBELA,YDIBELA,6)
static A68_364   DEIBELA = {"Supply lines of text terminating with \"FINISH\" on a newline"}; 
A_GISVEC(A68_VC ,EEIBELA,DEIBELA,59)
static A68_376   UEIBELA = {"INTERACTIVE"}; 
A_GISVEC(A68_VC ,VEIBELA,UEIBELA,11)
static A68_377   XEIBELA = {"IV"}; 
A_GISVEC(A68_VC ,YEIBELA,XEIBELA,2)
static A68_378   AFIBELA = {"Compiles lines of ELLA text into the declarations region of the selected context.  This command takes input directly from \"stdin\", bypassing the normal EASE reading mechanism."}; 
A_GISVEC(A68_VC ,BFIBELA,AFIBELA,175)
static A68_379   NFIBELA = {"IMPORTS"}; 
A_GISVEC(A68_VC ,OFIBELA,NFIBELA,7)
static A68_380   QFIBELA = {"Compiles the IMPORTS statement provided into the current context"}; 
A_GISVEC(A68_VC ,RFIBELA,QFIBELA,64)
static A68_379   FGIBELA = {"COMPILE"}; 
A_GISVEC(A68_VC ,GGIBELA,FGIBELA,7)
static A68_381   JGIBELA = {"Compiles a file of ELLA text into the declarations region of the selected context."}; 
A_GISVEC(A68_VC ,KGIBELA,JGIBELA,82)
static A68_372   YGIBELA = {"ECOMPILE"}; 
A_GISVEC(A68_VC ,ZGIBELA,YGIBELA,8)
static A68_382   BHIBELA = {"Compiles a file of ELLA text into the declarations region of the selected context.  Error messages are generated in a standardised form to assist editing the source file."}; 
A_GISVEC(A68_VC ,CHIBELA,BHIBELA,170)
typedef struct   /* env of non-global proc */
{
A68_VC  NZHBELA_fname;
A68_127 * LZHBELA_comp_file;
A68_97  Msg;
A68_BOOL  Print_text;
A_PAD_BOOL(PAD_105)
A68_VC  TZHBELA_qname;
} YZHBELA_flt;
typedef struct   /* env of non-global proc */
{
A68_VC  Line;
A68_VC  YBIBELA_imp;
A68_BOOL * VBIBELA_first_call;
} ECIBELA_reader;
typedef struct   /* env of non-global proc */
{
A68_BOOL * YCIBELA_more_input;
} EDIBELA_reader;
typedef struct   /* env of non-global proc */
{
A68_46  Params;
} QAIBELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  FCIBELA_l;
A_PAD_INT(PAD_106)
} JCIBELA_generator;
typedef struct   /* env of non-global proc */
{
A68_VC * Buffer;
} QDIBELA_generator;

A68_VOID  HZHBELA_compile(A68_VC  Filename, A68_BOOL  Print_text, A68_97  Msg);

A_STATIC A68_VOID  XZHBELA_flt(A68_92  No, A68_46  Params, void *NonLocals);

A_STATIC A68_VOID  PAIBELA_generator(A68_BOOL  NAIBELA_anonymous, A68_102  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RBIBELA_imports(A68_VC  Line, A68_97  Msg);

A_STATIC A68_BOOL  DCIBELA_reader(A68_VC * Buffer, A68_INT * Tend, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  ICIBELA_generator(A68_BOOL  GCIBELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XCIBELA_interactive(A68_97  Msg);

A_STATIC A68_BOOL  DDIBELA_reader(A68_VC * Buffer, A68_INT * Tend, A68_97  Msg, void *NonLocals);

A_STATIC A68_VOID  PDIBELA_generator(A68_BOOL  NDIBELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  REIBELA_make_compcommands(A68_315  *ReturnedValue);

A_STATIC A68_VOID  GFIBELA_anonymous(A68_286  Params, A68_97  Msg);

A_STATIC A68_VOID  WFIBELA_anonymous(A68_286  Params, A68_97  Msg);

A_STATIC A68_VOID  PGIBELA_anonymous(A68_286  Params, A68_97  Msg);

A_STATIC A68_VOID  HHIBELA_anonymous(A68_286  Params, A68_97  Msg);

A_STATIC A68_VOID  PAIBELA_generator(A68_BOOL  NAIBELA_anonymous, A68_102  *ReturnedValue, void *NonLocals)
#define NL(x) (((QAIBELA_generator *)NonLocals)->x)
{ 
A68_102  RAIBELA;  /* clause result */
A68_102  SAIBELA;  /* OPERATORS - dynamic generator */
{ 
SAIBELA.upb = NL(Params).upb ;
( NAIBELA_anonymous? A_VLOC(A68_VC ,SAIBELA): A_VHEAP(A68_VC ,SAIBELA) );
RAIBELA = SAIBELA;
} 
*ReturnedValue = (RAIBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  ICIBELA_generator(A68_BOOL  GCIBELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((JCIBELA_generator *)NonLocals)->x)
{ 
A68_VC  KCIBELA;  /* clause result */
A68_VC  LCIBELA;  /* OPERATORS - dynamic generator */
{ 
 /* line 106: */
LCIBELA.upb = NL(FCIBELA_l) ;
( GCIBELA_anonymous? A_VLOC(A68_CHAR ,LCIBELA): A_VHEAP(A68_CHAR ,LCIBELA) );
KCIBELA = LCIBELA;
} 
*ReturnedValue = (KCIBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  PDIBELA_generator(A68_BOOL  NDIBELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((QDIBELA_generator *)NonLocals)->x)
{ 
A68_VC  RDIBELA;  /* clause result */
A68_VC  SDIBELA;  /* OPERATORS - dynamic generator */
{ 
SDIBELA.upb = ((*NL(Buffer)).upb+512) ;
( NDIBELA_anonymous? A_VLOC(A68_CHAR ,SDIBELA): A_VHEAP(A68_CHAR ,SDIBELA) );
RDIBELA = SDIBELA;
} 
*ReturnedValue = (RDIBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  XZHBELA_flt(A68_92  No, A68_46  Params, void *NonLocals)
#define NL(x) (((YZHBELA_flt *)NonLocals)->x)
{ 
A68_106  ZZHBELA;  /* OPERATORS - mode -> union mode */
A68_BOOL  AAIBELA;  /* optbool result */
A68_106  BAIBELA;  /* OPERATORS - mode -> union mode */
A68_368  CAIBELA;  /* collateral clause result */
A68_52  FAIBELA;  /* OPERATORS - mode -> union mode */
A68_VC  GAIBELA;  /* YIELD */
A68_52  HAIBELA;  /* OPERATORS - mode -> union mode */
A68_52  IAIBELA;  /* OPERATORS - mode -> union mode */
A68_56  JAIBELA;  /* procedure value */
A68_85  KAIBELA;  /* OPERATORS - istruct -> vector */
A68_BOOL  LAIBELA;  /* optbool result */
A68_106  MAIBELA;  /* OPERATORS - mode -> union mode */
A68_369  OAIBELA_generator;   /* proc value of non-global proc */
A68_102  UAIBELA;  /* avoid structure result */
A68_102  TAIBELA_allp;
union {  /* BIOP 99 */
A68_46   source;
A68_102   destination;
} VAIBELA; 
A68_102  WAIBELA;  /* OPERATORS - assign op */
A68_INT  XAIBELA;  /* YIELD */
A68_VC * YAIBELA;  /* YIELD */
A68_371  ZAIBELA;  /* collateral clause result */
A68_INT  ABIBELA;  /* YIELD */
A68_INT  DBIBELA;  /* YIELD */
A68_VC  EBIBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  FBIBELA;  /* YIELD */
A68_46  GBIBELA;  /* OPERATORS - istruct -> vector */
A68_VC  HBIBELA;  /* avoid structure result */
A68_VC * IBIBELA;  /* YIELD */
A68_INT  JBIBELA;  /* YIELD */
A68_VC * KBIBELA;  /* YIELD */
union {  /* BIOP 99 */
A68_102   source;
A68_46   destination;
} LBIBELA; 
A_PROC_ENTRY(flt);
 /* line 72: */
AAIBELA = ELAAOSI_cli_msg(A_UNITE(ZZHBELA,mode1,1,No));
if ( ! AAIBELA )
{ /* line 73: */
AAIBELA = ZKAAOSI_abort_msg(A_UNITE(BAIBELA,mode1,1,No));
}
if ( AAIBELA )
{ 
GAIBELA = EAIBELA ;
CAIBELA.data[0] = A_UNITE(FAIBELA,mode7,7,GAIBELA);
CAIBELA.data[1] = A_UNITE(HAIBELA,mode7,7,NL(NZHBELA_fname));
JAIBELA.fn.fn_global = LRAAOSL_newline;
JAIBELA.nonlocals = A68_NIL;
CAIBELA.data[2] = A_UNITE(IAIBELA,mode12,12,JAIBELA);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(KAIBELA,CAIBELA,3,A68_52 ));
 /* line 74: */
XQBAOSI_close_file(NL(LZHBELA_comp_file), NL(Msg));
 /* line 75: */
 /* line 76: */
A_CALLPROC(NL(Msg),(No, Params),(No, Params,(NL(Msg)).nonlocals));
} 
else
{ 
LAIBELA = !NL(Print_text);
if ( LAIBELA )
{LAIBELA = (Params.upb>=3);
}
 /* line 77: */
if ( LAIBELA )
{LAIBELA = TKAAOSI_error_msg(A_UNITE(MAIBELA,mode1,1,No));
}
if ( LAIBELA )
{ /* line 78: */
LAIBELA = BZAAELA_is_comp_msg(No);
}
 /* line 79: */
if ( LAIBELA )
{ 
A_CLOSURE( OAIBELA_generator, PAIBELA_generator, QAIBELA_generator );
(( QAIBELA_generator * ) ( OAIBELA_generator.nonlocals )) -> Params = Params;
A_CALLPROC(OAIBELA_generator,(A68_TRUE, &UAIBELA),(A68_TRUE, &UAIBELA,(OAIBELA_generator).nonlocals));
TAIBELA_allp = UAIBELA;
VAIBELA.source = Params ;
WAIBELA = (VAIBELA.destination) ;
A_VASSIGN2(WAIBELA,TAIBELA_allp,A68_VC );
 /* line 80: */
XAIBELA = 1 ;
YAIBELA = (&A_VINDEX(TAIBELA_allp,XAIBELA)) ;
(*YAIBELA) = NL(TZHBELA_qname);
 /* line 81: */
ABIBELA = 1 ;
ZAIBELA.data[0] = A_VINDEX(Params,ABIBELA);
ZAIBELA.data[1] = CBIBELA;
DBIBELA = 2 ;
ZAIBELA.data[2] = A_VINDEX(Params,DBIBELA);
ZAIBELA.data[3] = A_HVEC(EBIBELA,')',A68_CHAR );
FBIBELA = 2 ;
JBAAOSI_concat( A_HISVEC(GBIBELA,ZAIBELA,4,A68_VC ), &HBIBELA );
IBIBELA = (&A_VINDEX(TAIBELA_allp,FBIBELA)) ;
(*IBIBELA) = HBIBELA;
 /* line 82: */
JBIBELA = 3 ;
KBIBELA = (&A_VINDEX(TAIBELA_allp,JBIBELA)) ;
(*KBIBELA) = EOAAOSL_nullstr;
 /* line 83: */
 /* line 84: */
LBIBELA.source = TAIBELA_allp ;
A_CALLPROC(NL(Msg),(No, (LBIBELA.destination)),(No, (LBIBELA.destination),(NL(Msg)).nonlocals));
} 
else
{ 
 /* line 85: */
A_CALLPROC(NL(Msg),(No, Params),(No, Params,(NL(Msg)).nonlocals));
} 
} 
A_PROC_EXIT(flt);
return;
} 
#undef NL

A_STATIC A68_BOOL  DCIBELA_reader(A68_VC * Buffer, A68_INT * Tend, A68_97  Msg, void *NonLocals)
#define NL(x) (((ECIBELA_reader *)NonLocals)->x)
{ 
A68_INT  FCIBELA_l;
A68_31  HCIBELA_generator;   /* proc value of non-global proc */
A68_VC  MCIBELA;  /* avoid structure result */
A68_VC  NCIBELA;  /* OPERATORS - trim index */
A68_VC  OCIBELA;  /* YIELD */
A68_VC  PCIBELA;  /* OPERATORS - trim index */
A68_VC  QCIBELA;  /* YIELD */
A68_BOOL  RCIBELA;  /* clause result */
A_PROC_ENTRY(reader);
 /* line 102: */
 /* line 103: */
{ 
FCIBELA_l = ((NL(Line).upb+NL(YBIBELA_imp).upb)+1);
 /* line 104: */
 /* line 105: */
if ( ((*Buffer).upb<FCIBELA_l) )
{ 
A_CLOSURE( HCIBELA_generator, ICIBELA_generator, JCIBELA_generator );
(( JCIBELA_generator * ) ( HCIBELA_generator.nonlocals )) -> FCIBELA_l = FCIBELA_l;
A_CALLPROC(HCIBELA_generator,(A68_FALSE, &MCIBELA),(A68_FALSE, &MCIBELA,(HCIBELA_generator).nonlocals));
(*Buffer) = MCIBELA;
} 
 /* line 107: */
OCIBELA = A_VTRIM(NCIBELA,((*Buffer)),A_VTSCRIPT(&(NCIBELA.upb),((*Buffer)).upb,1,NL(YBIBELA_imp).upb)) ;
A_VASSIGN2(NL(YBIBELA_imp),OCIBELA,A68_CHAR );
 /* line 108: */
QCIBELA = A_VTRIM(PCIBELA,((*Buffer)),A_VTSCRIPT(&(PCIBELA.upb),((*Buffer)).upb,(NL(YBIBELA_imp).upb+1),((*Tend) = (NL(Line).upb+NL(YBIBELA_imp).upb)))) ;
A_VASSIGN2(NL(Line),QCIBELA,A68_CHAR );
 /* line 109: */
if ( (*NL(VBIBELA_first_call)) )
{ 
(*NL(VBIBELA_first_call)) = A68_FALSE;
RCIBELA = A68_TRUE;
} 
else
{ 
 /* line 110: */
RCIBELA = A68_FALSE;
} 
} 
A_PROC_EXIT(reader);
return( RCIBELA );
} 
#undef NL

A_STATIC A68_BOOL  DDIBELA_reader(A68_VC * Buffer, A68_INT * Tend, A68_97  Msg, void *NonLocals)
#define NL(x) (((EDIBELA_reader *)NonLocals)->x)
{ 
A68_INT  FDIBELA_leng;
A68_35  GDIBELA_reply;
A68_35  JDIBELA;  /* avoid structure result */
A68_VC  KDIBELA;  /* OPERATORS - trim index */
A68_35  LDIBELA;  /* avoid structure result */
A68_BOOL  MDIBELA;  /* clause result */
A68_31  ODIBELA_generator;   /* proc value of non-global proc */
A68_VC  TDIBELA;  /* avoid structure result */
A68_VC  UDIBELA_new;
A68_VC  VDIBELA;  /* OPERATORS - trim index */
A68_VC  WDIBELA;  /* YIELD */
A68_BOOL  XDIBELA;  /* optbool result */
A68_VC  ZDIBELA;  /* OPERATORS - trim index */
A68_BOOL  BEIBELA;  /* clause result */
A_PROC_ENTRY(reader);
 /* line 122: */
 /* line 123: */
{ 
FDIBELA_leng = 0;
 /* line 124: */
(*Tend) = 0;
 /* line 125: */
 /* line 126: */
if ( (*NL(YCIBELA_more_input)) )
{ 
JSBAOSI_write_buffer( JNBAOSI_stdout, IDIBELA, Msg, &JDIBELA );
JDIBELA;
 /* line 127: */
for ( ;; )
{ 
 /* line 128: */
SRBAOSI_read_line( INBAOSI_stdin, A_VTRIM(KDIBELA,((*Buffer)),A_VTSCRIPT(&(KDIBELA.upb),((*Buffer)).upb,((*Tend)+1),((*Buffer)).upb)), (&FDIBELA_leng), Msg, &LDIBELA );
GDIBELA_reply = LDIBELA;
 /* line 129: */
(*Tend)+=FDIBELA_leng;
 /* line 130: */
 /* line 131: */
MDIBELA = PPBAOSI_(GDIBELA_reply, GDAAOST_io_partline);
if ( !MDIBELA ) break;
A_CLOSURE( ODIBELA_generator, PDIBELA_generator, QDIBELA_generator );
(( QDIBELA_generator * ) ( ODIBELA_generator.nonlocals )) -> Buffer = Buffer;
A_CALLPROC(ODIBELA_generator,(A68_FALSE, &TDIBELA),(A68_FALSE, &TDIBELA,(ODIBELA_generator).nonlocals));
UDIBELA_new = TDIBELA;
 /* line 132: */
WDIBELA = A_VTRIM(VDIBELA,(UDIBELA_new),A_VTSCRIPT(&(VDIBELA.upb),(UDIBELA_new).upb,1,(*Buffer).upb)) ;
A_VASSIGN2((*Buffer),WDIBELA,A68_CHAR );
 /* line 133: */
 /* line 134: */
(*Buffer) = UDIBELA_new;
}
 /* line 140: */
XDIBELA = PPBAOSI_(GDIBELA_reply, GPBAOSI_io_eof);
if ( XDIBELA )
{XDIBELA = (FDIBELA_leng==0);
}
 /* line 141: */
if ( ! XDIBELA )
{ /* line 142: */
XDIBELA = A_VC_EQ(A_VTRIM(ZDIBELA,((*Buffer)),A_VTSCRIPT(&(ZDIBELA.upb),((*Buffer)).upb,1,(*Tend))),AEIBELA);
}
if ( XDIBELA )
{ 
 /* line 143: */
 /* line 144: */
(*NL(YCIBELA_more_input)) = A68_FALSE;
} 
} 
 /* line 145: */
 /* line 146: */
BEIBELA = (*NL(YCIBELA_more_input));
} 
A_PROC_EXIT(reader);
return( BEIBELA );
} 
#undef NL

A_STATIC A68_VOID  GFIBELA_anonymous(A68_286  Params, A68_97  Msg)
{ 
 /* line 167: */
XCIBELA_interactive(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  WFIBELA_anonymous(A68_286  Params, A68_97  Msg)
{ 
A68_INT  XFIBELA;  /* YIELD */
A68_VC  YFIBELA;  /* avoid structure result */
 /* line 173: */
 /* line 174: */
XFIBELA = 1 ;
FPFAOST_get_text( (*(&A_VINDEX(Params,XFIBELA))), Msg, &YFIBELA );
RBIBELA_imports(YFIBELA, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  PGIBELA_anonymous(A68_286  Params, A68_97  Msg)
{ 
A68_INT  QGIBELA;  /* YIELD */
A68_149  RGIBELA;  /* avoid structure result */
 /* line 181: */
 /* line 182: */
 /* line 183: */
QGIBELA = 1 ;
XNFAOST_get_filename( (*(&A_VINDEX(Params,QGIBELA))), DLDAOST_source_type, Msg, &RGIBELA );
HZHBELA_compile(RGIBELA.Filename, A68_TRUE, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  HHIBELA_anonymous(A68_286  Params, A68_97  Msg)
{ 
A68_INT  IHIBELA;  /* YIELD */
A68_149  JHIBELA;  /* avoid structure result */
 /* line 191: */
 /* line 192: */
 /* line 193: */
IHIBELA = 1 ;
XNFAOST_get_filename( (*(&A_VINDEX(Params,IHIBELA))), DLDAOST_source_type, Msg, &JHIBELA );
HZHBELA_compile(JHIBELA.Filename, A68_FALSE, Msg);
return;
} 
#undef NL

A68_VOID  HZHBELA_compile(A68_VC  Filename, A68_BOOL  Print_text, A68_97  Msg)
{ 
A68_234 * IZHBELA_ct;
A68_239  JZHBELA;  /* avoid structure result */
A68_239  KZHBELA_cr;
A68_127 * LZHBELA_comp_file;
A68_VC  MZHBELA;  /* avoid structure result */
A68_VC  NZHBELA_fname;
A68_366  OZHBELA;  /* collateral clause result */
A68_VC  PZHBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  QZHBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  RZHBELA;  /* OPERATORS - istruct -> vector */
A68_VC  SZHBELA;  /* avoid structure result */
A68_VC  TZHBELA_qname;
A68_97  WZHBELA_flt;   /* proc value of non-global proc */
A68_269  MBIBELA;  /* OPERATORS - mode -> union mode */
A68_176  NBIBELA;  /* avoid structure result */
A68_176  OBIBELA_ptrlastcomp;
A_PROC_ENTRY(compile);
 /* line 63: */
 /* line 64: */
{ 
IZHBELA_ct = UDKAELA_get_context((*(&((&(HXJAELA_library->Currentct))->Context))));
 /* line 65: */
AEKAELA_get_region( IZHBELA_ct, (*(&((&(HXJAELA_library->Currentct))->Import))), &JZHBELA );
KZHBELA_cr = JZHBELA;
 /* line 67: */
LZHBELA_comp_file = FQBAOSI_open_file(Filename, PNBAOSI_read_access, Msg);
 /* line 68: */
SIBAOST_testmode_file_name( LZHBELA_comp_file, &MZHBELA );
NZHBELA_fname = MZHBELA;
 /* line 69: */
OZHBELA.data[0] = A_HVEC(PZHBELA,'\"',A68_CHAR );
OZHBELA.data[1] = (*(&(LZHBELA_comp_file->Name)));
OZHBELA.data[2] = A_HVEC(QZHBELA,'\"',A68_CHAR );
JBAAOSI_concat( A_HISVEC(RZHBELA,OZHBELA,3,A68_VC ), &SZHBELA );
TZHBELA_qname = SZHBELA;
 /* line 71: */
A_CLOSURE( WZHBELA_flt, XZHBELA_flt, YZHBELA_flt );
(( YZHBELA_flt * ) ( WZHBELA_flt.nonlocals )) -> NZHBELA_fname = NZHBELA_fname;
(( YZHBELA_flt * ) ( WZHBELA_flt.nonlocals )) -> LZHBELA_comp_file = LZHBELA_comp_file;
(( YZHBELA_flt * ) ( WZHBELA_flt.nonlocals )) -> Msg = Msg;
(( YZHBELA_flt * ) ( WZHBELA_flt.nonlocals )) -> Print_text = Print_text;
(( YZHBELA_flt * ) ( WZHBELA_flt.nonlocals )) -> TZHBELA_qname = TZHBELA_qname;
 /* line 87: */
NLDBELA_ella_shell( Print_text, KZHBELA_cr, A_UNITE(MBIBELA,mode1,1,LZHBELA_comp_file), WZHBELA_flt, &NBIBELA );
OBIBELA_ptrlastcomp = NBIBELA;
 /* line 88: */
KOCBELA_merge_compiled(KZHBELA_cr, OBIBELA_ptrlastcomp, WZHBELA_flt);
 /* line 89: */
 /* line 90: */
XQBAOSI_close_file(LZHBELA_comp_file, Msg);
} 
A_PROC_EXIT(compile);
return;
} 
#undef NL

A_STATIC A68_VOID  RBIBELA_imports(A68_VC  Line, A68_97  Msg)
{ 
A68_234 * SBIBELA_ct;
A68_239  TBIBELA;  /* avoid structure result */
A68_239  UBIBELA_cr;
A68_BOOL  VBIBELA_first_call;
A68_VC  YBIBELA_imp;
A68_272  CCIBELA_reader;   /* proc value of non-global proc */
A68_269  SCIBELA;  /* OPERATORS - mode -> union mode */
A68_272  TCIBELA;  /* YIELD */
A68_176  UCIBELA;  /* avoid structure result */
A68_176  VCIBELA_ptrlastcomp;
A_PROC_ENTRY(imports);
 /* line 94: */
 /* line 95: */
{ 
SBIBELA_ct = UDKAELA_get_context((*(&((&(HXJAELA_library->Currentct))->Context))));
 /* line 96: */
AEKAELA_get_region( SBIBELA_ct, (*(&((&(HXJAELA_library->Currentct))->Import))), &TBIBELA );
UBIBELA_cr = TBIBELA;
 /* line 98: */
VBIBELA_first_call = A68_TRUE;
 /* line 99: */
YBIBELA_imp = XBIBELA;
 /* line 101: */
A_CLOSURE( CCIBELA_reader, DCIBELA_reader, ECIBELA_reader );
(( ECIBELA_reader * ) ( CCIBELA_reader.nonlocals )) -> Line = Line;
(( ECIBELA_reader * ) ( CCIBELA_reader.nonlocals )) -> YBIBELA_imp = YBIBELA_imp;
(( ECIBELA_reader * ) ( CCIBELA_reader.nonlocals )) -> VBIBELA_first_call = (&VBIBELA_first_call);
 /* line 112: */
TCIBELA = CCIBELA_reader ;
NLDBELA_ella_shell( A68_TRUE, UBIBELA_cr, A_UNITE(SCIBELA,mode2,2,TCIBELA), Msg, &UCIBELA );
VCIBELA_ptrlastcomp = UCIBELA;
 /* line 113: */
 /* line 114: */
TPCBELA_merge_imports(UBIBELA_cr, VCIBELA_ptrlastcomp, Msg);
} 
A_PROC_EXIT(imports);
return;
} 
#undef NL

A_STATIC A68_VOID  XCIBELA_interactive(A68_97  Msg)
{ 
A68_BOOL  YCIBELA_more_input;
A68_272  CDIBELA_reader;   /* proc value of non-global proc */
A68_374  CEIBELA;  /* collateral clause result */
A68_52  FEIBELA;  /* OPERATORS - mode -> union mode */
A68_VC  GEIBELA;  /* YIELD */
A68_52  HEIBELA;  /* OPERATORS - mode -> union mode */
A68_56  IEIBELA;  /* procedure value */
A68_85  JEIBELA;  /* OPERATORS - istruct -> vector */
A68_234 * KEIBELA_ct;
A68_239  LEIBELA;  /* avoid structure result */
A68_239  MEIBELA_cr;
A68_269  NEIBELA;  /* OPERATORS - mode -> union mode */
A68_272  OEIBELA;  /* YIELD */
A68_176  PEIBELA;  /* avoid structure result */
A68_176  QEIBELA_ptrlastcomp;
A_PROC_ENTRY(interactive);
 /* line 118: */
 /* line 119: */
{ 
YCIBELA_more_input = A68_TRUE;
 /* line 121: */
A_CLOSURE( CDIBELA_reader, DDIBELA_reader, EDIBELA_reader );
(( EDIBELA_reader * ) ( CDIBELA_reader.nonlocals )) -> YCIBELA_more_input = (&YCIBELA_more_input);
 /* line 148: */
 /* line 149: */
GEIBELA = EEIBELA ;
CEIBELA.data[0] = A_UNITE(FEIBELA,mode7,7,GEIBELA);
IEIBELA.fn.fn_global = LRAAOSL_newline;
IEIBELA.nonlocals = A68_NIL;
CEIBELA.data[1] = A_UNITE(HEIBELA,mode12,12,IEIBELA);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(JEIBELA,CEIBELA,2,A68_52 ));
 /* line 150: */
KEIBELA_ct = UDKAELA_get_context((*(&((&(HXJAELA_library->Currentct))->Context))));
 /* line 151: */
AEKAELA_get_region( KEIBELA_ct, (*(&((&(HXJAELA_library->Currentct))->Import))), &LEIBELA );
MEIBELA_cr = LEIBELA;
 /* line 152: */
OEIBELA = CDIBELA_reader ;
NLDBELA_ella_shell( A68_TRUE, MEIBELA_cr, A_UNITE(NEIBELA,mode2,2,OEIBELA), Msg, &PEIBELA );
QEIBELA_ptrlastcomp = PEIBELA;
 /* line 153: */
 /* line 154: */
KOCBELA_merge_compiled(MEIBELA_cr, QEIBELA_ptrlastcomp, Msg);
} 
A_PROC_EXIT(interactive);
return;
} 
#undef NL

A68_VOID  REIBELA_make_compcommands(A68_315  *ReturnedValue)
{ 
A68_383  SEIBELA;  /* collateral clause result */
A68_312  TEIBELA;  /* collateral clause result */
A68_VC  WEIBELA;  /* avoid structure result */
A68_VC  ZEIBELA;  /* avoid structure result */
A68_VC  CFIBELA;  /* avoid structure result */
A68_316  DFIBELA;  /* OPERATORS - mode -> union mode */
A68_308  HFIBELA;  /* OPERATORS - mode -> union mode */
A68_310  IFIBELA;  /* YIELD */
A68_310  JFIBELA;  /* procedure value */
A68_312 * KFIBELA;  /* YIELD */
A68_311  LFIBELA;  /* OPERATORS - mode -> union mode */
A68_312  MFIBELA;  /* collateral clause result */
A68_VC  PFIBELA;  /* avoid structure result */
A68_VC  SFIBELA;  /* avoid structure result */
A68_316  TFIBELA;  /* OPERATORS - mode -> union mode */
A68_308  ZFIBELA;  /* OPERATORS - mode -> union mode */
A68_310  AGIBELA;  /* YIELD */
A68_310  BGIBELA;  /* procedure value */
A68_312 * CGIBELA;  /* YIELD */
A68_311  DGIBELA;  /* OPERATORS - mode -> union mode */
A68_312  EGIBELA;  /* collateral clause result */
A68_VC  HGIBELA;  /* avoid structure result */
A68_VC  IGIBELA;  /* avoid structure result */
A68_VC  LGIBELA;  /* avoid structure result */
A68_316  MGIBELA;  /* OPERATORS - mode -> union mode */
A68_308  SGIBELA;  /* OPERATORS - mode -> union mode */
A68_310  TGIBELA;  /* YIELD */
A68_310  UGIBELA;  /* procedure value */
A68_312 * VGIBELA;  /* YIELD */
A68_311  WGIBELA;  /* OPERATORS - mode -> union mode */
A68_312  XGIBELA;  /* collateral clause result */
A68_VC  AHIBELA;  /* avoid structure result */
A68_VC  DHIBELA;  /* avoid structure result */
A68_316  EHIBELA;  /* OPERATORS - mode -> union mode */
A68_308  KHIBELA;  /* OPERATORS - mode -> union mode */
A68_310  LHIBELA;  /* YIELD */
A68_310  MHIBELA;  /* procedure value */
A68_312 * NHIBELA;  /* YIELD */
A68_311  OHIBELA;  /* OPERATORS - mode -> union mode */
A68_315  PHIBELA;  /* clause result */
A68_315  QHIBELA;  /* OPERATORS - istruct -> vector */
A68_315  RHIBELA;  /* avoid structure result */
A_PROC_ENTRY(make_compcommands);
 /* line 161: */
ZAAAOSI_makervc( VEIBELA, &WEIBELA );
TEIBELA.Name = WEIBELA;
 /* line 162: */
ZAAAOSI_makervc( YEIBELA, &ZEIBELA );
TEIBELA.Abreviation = ZEIBELA;
TEIBELA.Parameter = SRAAOST_noparameters;
TEIBELA.Access = XMDAOST_normalaccess;
 /* line 164: */
TEIBELA.Continuation = ZNDAOST_continue;
 /* line 165: */
 /* line 166: */
ZAAAOSI_makervc( BFIBELA, &CFIBELA );
TEIBELA.Help = A_UNITE(DFIBELA,mode1,1,CFIBELA);
JFIBELA.fn.fn_global = GFIBELA_anonymous;
JFIBELA.nonlocals = A68_NIL;
IFIBELA = JFIBELA ;
TEIBELA.Command = A_UNITE(HFIBELA,mode3,3,IFIBELA);
 /* line 169: */
KFIBELA = A_HEAP(A68_312 ) ;
(*KFIBELA) = TEIBELA ;
SEIBELA.data[0] = A_UNITE(LFIBELA,mode1,1,KFIBELA);
 /* line 170: */
ZAAAOSI_makervc( OFIBELA, &PFIBELA );
MFIBELA.Name = PFIBELA;
MFIBELA.Abreviation = EOAAOSL_nullstr;
MFIBELA.Parameter = IOFAOST_text_syntax;
MFIBELA.Access = XMDAOST_normalaccess;
 /* line 171: */
MFIBELA.Continuation = ZNDAOST_continue;
 /* line 172: */
ZAAAOSI_makervc( RFIBELA, &SFIBELA );
MFIBELA.Help = A_UNITE(TFIBELA,mode1,1,SFIBELA);
BGIBELA.fn.fn_global = WFIBELA_anonymous;
BGIBELA.nonlocals = A68_NIL;
AGIBELA = BGIBELA ;
MFIBELA.Command = A_UNITE(ZFIBELA,mode3,3,AGIBELA);
 /* line 176: */
CGIBELA = A_HEAP(A68_312 ) ;
(*CGIBELA) = MFIBELA ;
SEIBELA.data[1] = A_UNITE(DGIBELA,mode1,1,CGIBELA);
 /* line 177: */
ZAAAOSI_makervc( GGIBELA, &HGIBELA );
EGIBELA.Name = HGIBELA;
NAAAOSI_makervc( 'C', &IGIBELA );
EGIBELA.Abreviation = IGIBELA;
EGIBELA.Parameter = HNFAOST_filename_syntax;
EGIBELA.Access = XMDAOST_normalaccess;
 /* line 179: */
EGIBELA.Continuation = ZNDAOST_continue;
 /* line 180: */
ZAAAOSI_makervc( KGIBELA, &LGIBELA );
EGIBELA.Help = A_UNITE(MGIBELA,mode1,1,LGIBELA);
UGIBELA.fn.fn_global = PGIBELA_anonymous;
UGIBELA.nonlocals = A68_NIL;
TGIBELA = UGIBELA ;
EGIBELA.Command = A_UNITE(SGIBELA,mode3,3,TGIBELA);
 /* line 185: */
VGIBELA = A_HEAP(A68_312 ) ;
(*VGIBELA) = EGIBELA ;
SEIBELA.data[2] = A_UNITE(WGIBELA,mode1,1,VGIBELA);
 /* line 186: */
ZAAAOSI_makervc( ZGIBELA, &AHIBELA );
XGIBELA.Name = AHIBELA;
XGIBELA.Abreviation = EOAAOSL_nullstr;
XGIBELA.Parameter = HNFAOST_filename_syntax;
XGIBELA.Access = BNDAOST_hiddenaccess;
 /* line 188: */
XGIBELA.Continuation = ZNDAOST_continue;
 /* line 189: */
 /* line 190: */
ZAAAOSI_makervc( CHIBELA, &DHIBELA );
XGIBELA.Help = A_UNITE(EHIBELA,mode1,1,DHIBELA);
 /* line 194: */
MHIBELA.fn.fn_global = HHIBELA_anonymous;
MHIBELA.nonlocals = A68_NIL;
LHIBELA = MHIBELA ;
XGIBELA.Command = A_UNITE(KHIBELA,mode3,3,LHIBELA);
 /* line 197: */
NHIBELA = A_HEAP(A68_312 ) ;
(*NHIBELA) = XGIBELA ;
SEIBELA.data[3] = A_UNITE(OHIBELA,mode1,1,NHIBELA);
ARDAOST_makecommands( A_HISVEC(QHIBELA,SEIBELA,4,A68_311 ), &RHIBELA );
PHIBELA = RHIBELA;
A_PROC_EXIT(make_compcommands);
*ReturnedValue = (PHIBELA);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 7: */
void ZYHBELA(void)   /* initialise DECS compcommands */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/compcommands.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/ostools/assoc/mfiles/testmode.m","./mfiles/libmessages.m","./mfiles/compmessages.m","/u/model/ella/ostools/assoc/mfiles/kernelreader.m","/u/model/ella/ostools/assoc/mfiles/command.m","/u/model/ella/ostools/assoc/mfiles/commandsyntax.m","/u/model/ella/ostools/assoc/mfiles/ioprocs.m","./mfiles/compshell.m","./mfiles/libprocs.m","./mfiles/libmodes.m","./mfiles/databasebuffers.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
QFBAOST();   /* USE testmode */
IZAAELA();   /* USE libmessages */
CFAAELA();   /* USE compmessages */
TXEAOST();   /* USE kernelreader */
FMDAOST();   /* USE command */
LRAAOST();   /* USE commandsyntax */
TIGAOST();   /* USE ioprocs */
MDDBELA();   /* USE compshell */
ZSBBELA();   /* USE libprocs */
FTJAELA();   /* USE libmodes */
NWIAELA();   /* USE databasebuffers */
PCAAOST();   /* USE osinterface */
JSCAOST();   /* USE basics */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ella/assoc/./a68files/compcommands.a68";
A_config.translation_time = "Tue Apr  4 10:41:16 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "YYHBELA (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:41:16 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS compcommands);
UEAALIB_a68config(LGAALIB_configinfo, DZHBELA);
 /* line 62: */
 /* line 93: */
 /* line 117: */
 /* line 158: */
 /* line 160: */
 /* line 198: */
A_PROC_EXIT(DECS compcommands);
} 
#undef NL
/* end of translation of ./a68files/compcommands.a68 */
