
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
/* UNAME:FEJBELA */
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
A68_BITS  Options;
A_PAD_BITS(PAD_36)
};
typedef struct A68t173  A68_173 ;    /* STRUCT(BITS)  */
struct A68t175 ;

A_PROCEDURE(A68_VOID ,A68t174,(struct A68t175 ),(struct A68t175 ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE175) VOID */
struct A68t175 { A68_INT mode; union {
A68_BOOL  mode1;
struct A68t173  mode2;
A68_VC  mode3;
} data; };
typedef struct A68t175  A68_175 ;    /* UNION(BOOL,MODE173,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t176,(struct A68t173 ,struct A68t173 ,struct A68t173 *),(struct A68t173 ,struct A68t173 ,struct A68t173 *,void *));
typedef struct A68t176  A68_176 ;    /* PROC(MODE173,MODE173) MODE173 */

A_PROCEDURE(struct A68t173 *,A68t177,(struct A68t173 *,struct A68t173 ),(struct A68t173 *,struct A68t173 ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(REF MODE173,MODE173) REF MODE173 */

A_PROCEDURE(A68_BOOL ,A68t178,(struct A68t173 ,struct A68t173 ),(struct A68t173 ,struct A68t173 ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(MODE173,MODE173) BOOL */

A_PROCEDURE(A68_BOOL ,A68t179,(struct A68t173 ,A68_INT ),(struct A68t173 ,A68_INT ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(MODE173,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t180,(A68_INT ,struct A68t173 *),(A68_INT ,struct A68t173 *,void *));
typedef struct A68t180  A68_180 ;    /* PROC(INT) MODE173 */
struct A68t181{
A68_BOOL  Logging;
A_PAD_BOOL(PAD_37)
A68_BOOL  Outputing;
A_PAD_BOOL(PAD_38)
A68_BOOL  Seeing_in;
A_PAD_BOOL(PAD_39)
A68_BOOL  Seeing_out;
A_PAD_BOOL(PAD_40)
A68_BOOL  Paging;
A_PAD_BOOL(PAD_41)
A68_BOOL  Clock;
A_PAD_BOOL(PAD_42)
A68_BOOL  Screen_output;
A_PAD_BOOL(PAD_43)
A68_INT  Width;
A_PAD_INT(PAD_44)
A68_INT  Page_count;
A_PAD_INT(PAD_45)
A68_INT  Page_length;
A_PAD_INT(PAD_46)
A68_INT  Eof_count;
A_PAD_INT(PAD_47)
struct A68t182 * Standard_reader;
struct A68t183 * Infile;
struct A68t124  Prompt;
struct A68t127 * Logfile;
struct A68t127 * Outfile;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,INT,INT,REF MODE182,REF MODE183,MODE124,REF MODE127,REF MODE127)  */

A_PROCEDURE(A68_INT ,A68t184,(A68_VC *,struct A68t97 ),(A68_VC *,struct A68t97 ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(REF REF MODE26,MODE97) INT */
struct A68t182{
A68_VC  Rdbuffer;
struct A68t184  Rdline;
A68_INT  Rdcharend;
A_PAD_INT(PAD_48)
A68_INT  Rdcharno;
A_PAD_INT(PAD_49)
A68_INT  Start_of_word;
A_PAD_INT(PAD_50)
struct A68t185 * Stack;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(REF MODE26,MODE184,INT,INT,INT,REF MODE185)  */
struct A68t183{
struct A68t127 * File;
A68_BOOL  Suspended;
A_PAD_BOOL(PAD_51)
A68_INT  Number;
A_PAD_INT(PAD_52)
A68_VC  Name;
struct A68t182 * Reader;
struct A68t183 * Previous;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(REF MODE127,BOOL,INT,REF MODE26,REF MODE182,REF MODE183)  */
struct A68t185{
A68_VC  Line;
struct A68t185 * Rest;
};
typedef struct A68t185  A68_185 ;    /* STRUCT(REF MODE26,REF MODE185)  */

A_PROCEDURE(struct A68t181 *,A68t186,(void),(void *));
typedef struct A68t186  A68_186 ;    /* PROC REF MODE181 */

A_PROCEDURE(A68_VOID ,A68t187,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t187  A68_187 ;    /* PROC(REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t188,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t188  A68_188 ;    /* PROC(MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t189,(A68_INT ,struct A68t97 ),(A68_INT ,struct A68t97 ,void *));
typedef struct A68t189  A68_189 ;    /* PROC(INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t190,(struct A68t124 ),(struct A68t124 ,void *));
typedef struct A68t190  A68_190 ;    /* PROC(MODE124) VOID */
struct A68t191{
struct A68t192 * Database;
A68_VC  Description;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(REF MODE192,REF MODE26)  */
struct A68t192{
A68_VC  Logical_name;
A68_VC  Db_name;
A68_BITS * Setup;
struct A68t193 * Df;
};
typedef struct A68t192  A68_192 ;    /* STRUCT(REF MODE26,REF MODE26,REF BITS,REF MODE193)  */
A_VECTOR(struct A68t194 ,A68t195);
typedef struct A68t195  A68_195 ;    /* VECTOR [] MODE194 */
struct A68t194{
A68_BITS  Code;
A_PAD_BITS(PAD_53)
A68_INT  First_block;
A_PAD_INT(PAD_54)
A68_INT  First_offset;
A_PAD_INT(PAD_55)
A68_INT  Data_elts;
A_PAD_INT(PAD_56)
A68_INT  Dp_elts;
A_PAD_INT(PAD_57)
A68_INT  Version;
A_PAD_INT(PAD_58)
A68_BITS  Sumcheck;
A_PAD_BITS(PAD_59)
};
typedef struct A68t194  A68_194 ;    /* STRUCT(BITS,INT,INT,INT,INT,INT,BITS)  */
A_VECTOR(struct A68t200 ,A68t199);
typedef struct A68t199  A68_199 ;    /* VECTOR [] MODE200 */
struct A68t201{
A68_INT  Block_num;
A_PAD_INT(PAD_60)
A68_INT  Offset;
A_PAD_INT(PAD_61)
};
typedef struct A68t201  A68_201 ;    /* STRUCT(INT,INT)  */
struct A68t200{
A68_BOOL  Shaky;
A_PAD_BOOL(PAD_62)
struct A68t201  Address;
A68_INT  Data_elts;
A_PAD_INT(PAD_63)
A68_INT  Dp_elts;
A_PAD_INT(PAD_64)
A68_INT  Code;
A_PAD_INT(PAD_65)
A68_INT  Version;
A_PAD_INT(PAD_66)
A68_INT  Read_size;
A_PAD_INT(PAD_67)
};
typedef struct A68t200  A68_200 ;    /* STRUCT(BOOL,MODE201,INT,INT,INT,INT,INT)  */
struct A68t193{
struct A68t194 * Root;
struct A68t194 * Indirs_dp;
struct A68t194 * Freelist_dp;
struct A68t194 * Pagetable_dp;
struct A68t194 * Append_dp;
struct A68t195  Free_block_dps;
struct A68t195  Pagetable_dps;
struct A68t127 ** File;
struct A68t127 ** Test_file;
struct A68t196 * Write_buffer;
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
struct A68t197 * Gc_ptrs;
struct A68t198 * Instore_vars;
struct A68t199  Indirections;
A68_BOOL * Writeable;
A68_BOOL * Last_update_failed;
A68_BOOL * Appending;
A68_BOOL * Collectable;
};
typedef struct A68t193  A68_193 ;    /* STRUCT(REF MODE194,REF MODE194,REF MODE194,REF MODE194,REF MODE194,REF MODE195,REF MODE195,REF REF MODE127,REF REF MODE127,REF MODE196,REF MODE26,REF MODE26,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF MODE32,REF MODE32,REF MODE32,REF MODE197,REF MODE198,REF MODE199,REF BOOL,REF BOOL,REF BOOL,REF BOOL)  */
struct A68t196{
A68_VC  Buffer;
struct A68t202 * List;
A68_INT * Buffer_ptr;
A68_INT * Upb;
A68_INT * Generation;
};
typedef struct A68t196  A68_196 ;    /* STRUCT(REF MODE26,REF MODE202,REF INT,REF INT,REF INT)  */
struct A68t197{
struct A68t201  Old;
struct A68t201  New;
struct A68t197 * Rest;
};
typedef struct A68t197  A68_197 ;    /* STRUCT(MODE201,MODE201,REF MODE197)  */
struct A68t198{
A68_INT  Indirection;
A_PAD_INT(PAD_68)
struct A68t198 * Rest;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(INT,REF MODE198)  */
struct A68t202{
A68_INT  Lwb;
A_PAD_INT(PAD_69)
A68_INT  Upb;
A_PAD_INT(PAD_70)
struct A68t202 * Rest;
};
typedef struct A68t202  A68_202 ;    /* STRUCT(INT,INT,REF MODE202)  */

A_PROCEDURE(A68_BOOL ,A68t203,(struct A68t191 *,struct A68t194 ),(struct A68t191 *,struct A68t194 ,void *));
typedef struct A68t203  A68_203 ;    /* PROC(REF MODE191,MODE194) BOOL */

A_PROCEDURE(A68_VOID ,A68t204,(A68_INT ,struct A68t92 *),(A68_INT ,struct A68t92 *,void *));
typedef struct A68t204  A68_204 ;    /* PROC(INT) MODE92 */
struct A68t205{
A68_VC  Name;
A68_VC  Password;
A68_INT  Key;
A_PAD_INT(PAD_71)
A68_BOOL  Login;
A_PAD_BOOL(PAD_72)
struct A68t205 * Rest;
};
typedef struct A68t205  A68_205 ;    /* STRUCT(REF MODE26,REF MODE26,INT,BOOL,REF MODE205)  */
struct A68t206{
A68_INT  Key;
A_PAD_INT(PAD_73)
A68_BOOL  Changed;
A_PAD_BOOL(PAD_74)
struct A68t32  Version;
struct A68t195  Data;
struct A68t206 * Rest;
};
typedef struct A68t206  A68_206 ;    /* STRUCT(INT,BOOL,REF MODE32,REF MODE195,REF MODE206)  */
struct A68t207{
A68_INT  Sort;
A_PAD_INT(PAD_75)
A68_VC  Name;
A68_INT  Version;
A_PAD_INT(PAD_76)
struct A68t207 * Rest;
};
typedef struct A68t207  A68_207 ;    /* STRUCT(INT,REF MODE26,INT,REF MODE207)  */
struct A68t208{
A68_INT  Sort;
A_PAD_INT(PAD_77)
A68_VC  Name;
A68_BOOL  Export;
A_PAD_BOOL(PAD_78)
A68_BOOL  Import;
A_PAD_BOOL(PAD_79)
struct A68t54  Assemble;
A68_INT  Status;
A_PAD_INT(PAD_80)
A68_INT  Version;
A_PAD_INT(PAD_81)
A68_VC  Il;
struct A68t207 * Uses;
};
typedef struct A68t208  A68_208 ;    /* STRUCT(INT,REF MODE26,BOOL,BOOL,REF MODE54,INT,INT,REF MODE26,REF MODE207)  */
struct A68t209{
struct A68t111  Ctn;
A68_VC  Name;
A68_VC  Rename;
A68_INT  Sort;
A_PAD_INT(PAD_82)
struct A68t194  Info;
};
typedef struct A68t209  A68_209 ;    /* STRUCT(MODE111,REF MODE26,REF MODE26,INT,MODE194)  */
struct A68t210{
struct A68t209  Binding;
struct A68t210 * Rest;
};
typedef struct A68t210  A68_210 ;    /* STRUCT(MODE209,REF MODE210)  */
struct A68t211{
A68_VC  Name;
A68_INT  Ctno;
A_PAD_INT(PAD_83)
struct A68t210 * Imports;
};
typedef struct A68t211  A68_211 ;    /* STRUCT(REF MODE26,INT,REF MODE210)  */
struct A68t212{
struct A68t211  Region;
struct A68t212 * Rest;
};
typedef struct A68t212  A68_212 ;    /* STRUCT(MODE211,REF MODE212)  */
A_VECTOR(struct A68t208 ,A68t214);
typedef struct A68t214  A68_214 ;    /* VECTOR [] MODE208 */
struct A68t213{
A68_VC  Name;
struct A68t194  Val;
A68_BOOL  Loadable;
A_PAD_BOOL(PAD_84)
A68_BOOL  Changed;
A_PAD_BOOL(PAD_85)
struct A68t214  Decls;
struct A68t206 * Declattributes;
struct A68t212 * Regions;
};
typedef struct A68t213  A68_213 ;    /* STRUCT(REF MODE26,MODE194,BOOL,BOOL,REF MODE214,REF MODE206,REF MODE212)  */
struct A68t215{
struct A68t213  Context;
struct A68t215 * Rest;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(MODE213,REF MODE215)  */
struct A68t216{
A68_VC  Name;
struct A68t127 * File;
struct A68t191 * Discfile;
struct A68t111  Currentct;
A68_VC  Libprompt;
A68_BOOL  Libchanged;
A_PAD_BOOL(PAD_86)
struct A68t195  Rootptrs;
A68_INT  Version;
A_PAD_INT(PAD_87)
A68_VC  Datecleared;
A68_VC  Timecleared;
A68_VC  Datelastwritten;
A68_VC  Timelastwritten;
struct A68t32  Keys;
struct A68t205 * Classes;
struct A68t215 * Contexts;
};
typedef struct A68t216  A68_216 ;    /* STRUCT(REF MODE26,REF MODE127,REF MODE191,MODE111,REF MODE26,BOOL,MODE195,INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,MODE32,REF MODE205,REF MODE215)  */

A_PROCEDURE(A68_VOID ,A68t217,(A68_BOOL ,struct A68t216 *),(A68_BOOL ,struct A68t216 *,void *));
typedef struct A68t217  A68_217 ;    /* PROC(BOOL) MODE216 */
struct A68t218{
struct A68t213 * Context;
struct A68t211 * Region;
};
typedef struct A68t218  A68_218 ;    /* STRUCT(REF MODE213,REF MODE211)  */
struct A68t219{
A68_VC  Name;
A68_INT  Date;
A_PAD_INT(PAD_88)
};
typedef struct A68t219  A68_219 ;    /* STRUCT(REF MODE26,INT)  */

A_PROCEDURE(A68_BOOL ,A68t220,(struct A68t111 ,struct A68t111 ),(struct A68t111 ,struct A68t111 ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(MODE111,MODE111) BOOL */

A_PROCEDURE(A68_BOOL ,A68t221,(struct A68t218 ,struct A68t218 ),(struct A68t218 ,struct A68t218 ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(MODE218,MODE218) BOOL */

A_PROCEDURE(A68_VOID ,A68t222,(struct A68t111 ,A68_VC *),(struct A68t111 ,A68_VC *,void *));
typedef struct A68t222  A68_222 ;    /* PROC(MODE111) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t223,(struct A68t218 ,A68_VC *),(struct A68t218 ,A68_VC *,void *));
typedef struct A68t223  A68_223 ;    /* PROC(MODE218) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t224,(struct A68t218 ,struct A68t111 *),(struct A68t218 ,struct A68t111 *,void *));
typedef struct A68t224  A68_224 ;    /* PROC(MODE218) MODE111 */

A_PROCEDURE(A68_BOOL ,A68t225,(struct A68t213 *,struct A68t97 ),(struct A68t213 *,struct A68t97 ,void *));
typedef struct A68t225  A68_225 ;    /* PROC(REF MODE213,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t226,(A68_VC *,A68_VC *),(A68_VC *,A68_VC *,void *));
typedef struct A68t226  A68_226 ;    /* PROC(REF REF MODE26,REF REF MODE26) VOID */

A_PROCEDURE(struct A68t216 *,A68t227,(void),(void *));
typedef struct A68t227  A68_227 ;    /* PROC REF MODE216 */

A_PROCEDURE(struct A68t213 *,A68t228,(A68_VC ),(A68_VC ,void *));
typedef struct A68t228  A68_228 ;    /* PROC(REF MODE26) REF MODE213 */

A_PROCEDURE(A68_VOID ,A68t229,(struct A68t213 *,A68_VC ,struct A68t218 *),(struct A68t213 *,A68_VC ,struct A68t218 *,void *));
typedef struct A68t229  A68_229 ;    /* PROC(REF MODE213,REF MODE26) MODE218 */

A_PROCEDURE(struct A68t210 *,A68t230,(struct A68t218 ),(struct A68t218 ,void *));
typedef struct A68t230  A68_230 ;    /* PROC(MODE218) REF MODE210 */

A_PROCEDURE(struct A68t209 *,A68t231,(struct A68t218 ,A68_VC ),(struct A68t218 ,A68_VC ,void *));
typedef struct A68t231  A68_231 ;    /* PROC(MODE218,REF MODE26) REF MODE209 */

A_PROCEDURE(struct A68t213 *,A68t232,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t232  A68_232 ;    /* PROC(REF MODE26,MODE97) REF MODE213 */

A_PROCEDURE(A68_VOID ,A68t233,(struct A68t213 *,A68_VC ,struct A68t97 ,struct A68t218 *),(struct A68t213 *,A68_VC ,struct A68t97 ,struct A68t218 *,void *));
typedef struct A68t233  A68_233 ;    /* PROC(REF MODE213,REF MODE26,MODE97) MODE218 */

A_PROCEDURE(A68_VOID ,A68t234,(struct A68t111 ,struct A68t97 ,struct A68t218 *),(struct A68t111 ,struct A68t97 ,struct A68t218 *,void *));
typedef struct A68t234  A68_234 ;    /* PROC(MODE111,MODE97) MODE218 */

A_PROCEDURE(struct A68t209 *,A68t235,(struct A68t218 ,A68_VC ,struct A68t97 ),(struct A68t218 ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t235  A68_235 ;    /* PROC(MODE218,REF MODE26,MODE97) REF MODE209 */

A_PROCEDURE(A68_VOID ,A68t236,(struct A68t111 ),(struct A68t111 ,void *));
typedef struct A68t236  A68_236 ;    /* PROC(MODE111) VOID */

A_PROCEDURE(A68_VOID ,A68t237,(struct A68t194 *,struct A68t194 *,struct A68t194 *,struct A68t97 ),(struct A68t194 *,struct A68t194 *,struct A68t194 *,struct A68t97 ,void *));
typedef struct A68t237  A68_237 ;    /* PROC(REF MODE194,REF MODE194,REF MODE194,MODE97) VOID */

A_PROCEDURE(struct A68t215 *,A68t238,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t238  A68_238 ;    /* PROC(MODE97) REF MODE215 */

A_PROCEDURE(A68_VOID ,A68t239,(struct A68t214 ,struct A68t97 ,struct A68t194 *),(struct A68t214 ,struct A68t97 ,struct A68t194 *,void *));
typedef struct A68t239  A68_239 ;    /* PROC(REF MODE214,MODE97) MODE194 */

A_PROCEDURE(A68_VOID ,A68t240,(struct A68t213 *,struct A68t97 ,struct A68t214 *),(struct A68t213 *,struct A68t97 ,struct A68t214 *,void *));
typedef struct A68t240  A68_240 ;    /* PROC(REF MODE213,MODE97) REF MODE214 */

A_PROCEDURE(A68_VOID ,A68t241,(struct A68t214 ),(struct A68t214 ,void *));
typedef struct A68t241  A68_241 ;    /* PROC(REF MODE214) VOID */

A_PROCEDURE(A68_INT ,A68t242,(struct A68t213 *,A68_VC ,struct A68t97 ),(struct A68t213 *,A68_VC ,struct A68t97 ,void *));
typedef struct A68t242  A68_242 ;    /* PROC(REF MODE213,REF MODE26,MODE97) INT */

A_PROCEDURE(struct A68t219 *,A68t243,(struct A68t213 *,A68_INT ),(struct A68t213 *,A68_INT ,void *));
typedef struct A68t243  A68_243 ;    /* PROC(REF MODE213,INT) REF MODE219 */

A_PROCEDURE(struct A68t219 *,A68t244,(struct A68t218 ,A68_VC ),(struct A68t218 ,A68_VC ,void *));
typedef struct A68t244  A68_244 ;    /* PROC(MODE218,REF MODE26) REF MODE219 */

A_PROCEDURE(A68_VOID ,A68t245,(A68_INT ,A68_INT ,struct A68t97 ),(A68_INT ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t245  A68_245 ;    /* PROC(INT,INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t246,(A68_BOOL ,struct A68t97 ),(A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t246  A68_246 ;    /* PROC(BOOL,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t247,(struct A68t191 *,struct A68t245 ,struct A68t97 ),(struct A68t191 *,struct A68t245 ,struct A68t97 ,void *));
typedef struct A68t247  A68_247 ;    /* PROC(REF MODE191,MODE245,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t248,(A68_VC ,struct A68t245 ,struct A68t97 ),(A68_VC ,struct A68t245 ,struct A68t97 ,void *));
typedef struct A68t248  A68_248 ;    /* PROC(MODE26,MODE245,MODE97) VOID */

A_PROCEDURE(A68_BOOL ,A68t249,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t249  A68_249 ;    /* PROC(MODE97) BOOL */

A_PROCEDURE(A68_INT ,A68t250,(A68_VC ,struct A68t214 ),(A68_VC ,struct A68t214 ,void *));
typedef struct A68t250  A68_250 ;    /* PROC(REF MODE26,REF MODE214) INT */

A_PROCEDURE(A68_BOOL ,A68t251,(struct A68t213 *,struct A68t214 ,A68_INT ,struct A68t97 ),(struct A68t213 *,struct A68t214 ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t251  A68_251 ;    /* PROC(REF MODE213,REF MODE214,INT,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t252,(A68_INT ,struct A68t218 *),(A68_INT ,struct A68t218 *,void *));
typedef struct A68t252  A68_252 ;    /* PROC(INT) MODE218 */

A_PROCEDURE(A68_INT ,A68t253,(struct A68t218 ),(struct A68t218 ,void *));
typedef struct A68t253  A68_253 ;    /* PROC(MODE218) INT */

A_PROCEDURE(A68_INT ,A68t254,(struct A68t218 ,A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t97 ),(struct A68t218 ,A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t254  A68_254 ;    /* PROC(MODE218,BOOL,BOOL,BOOL,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t255,(struct A68t97 ,struct A68t194 *),(struct A68t97 ,struct A68t194 *,void *));
typedef struct A68t255  A68_255 ;    /* PROC(MODE97) MODE194 */
struct A68t256{
A68_VC  Id;
struct A68t256 * Rest;
};
typedef struct A68t256  A68_256 ;    /* STRUCT(REF MODE26,REF MODE256)  */
struct A68t257{
A68_INT  Int;
A_PAD_INT(PAD_89)
struct A68t257 * Rest;
};
typedef struct A68t257  A68_257 ;    /* STRUCT(INT,REF MODE257)  */
struct A68t258 { A68_INT mode; union {
struct A68t259 * mode1;
struct A68t260 * mode2;
struct A68t261 * mode3;
struct A68t262 * mode4;
struct A68t263 * mode5;
} data; };
typedef struct A68t258  A68_258 ;    /* UNION(REF MODE259,REF MODE260,REF MODE261,REF MODE262,REF MODE263)  */
struct A68t259{
A68_INT  Attrno;
A_PAD_INT(PAD_90)
};
typedef struct A68t259  A68_259 ;    /* STRUCT(INT)  */
struct A68t260{
A68_VC  Classname;
struct A68t256 * Strings;
};
typedef struct A68t260  A68_260 ;    /* STRUCT(REF MODE26,REF MODE256)  */
struct A68t261{
struct A68t258  Elem;
struct A68t261 * Rest;
};
typedef struct A68t261  A68_261 ;    /* STRUCT(MODE258,REF MODE261)  */
struct A68t262{
struct A68t258  Attr;
};
typedef struct A68t262  A68_262 ;    /* STRUCT(MODE258)  */
struct A68t263{
A68_INT  Attrnull;
A_PAD_INT(PAD_91)
};
typedef struct A68t263  A68_263 ;    /* STRUCT(INT)  */
struct A68t264{
A68_INT  Sort;
A_PAD_INT(PAD_92)
A68_VC  Attrname;
struct A68t258  Value;
struct A68t265 * Usage;
};
typedef struct A68t264  A68_264 ;    /* STRUCT(INT,REF MODE26,MODE258,REF MODE265)  */
struct A68t265{
A68_INT  Contextno;
A_PAD_INT(PAD_93)
A68_INT  Closureno;
A_PAD_INT(PAD_94)
A68_INT  Libv_spec;
A_PAD_INT(PAD_95)
A68_INT  Libv_body;
A_PAD_INT(PAD_96)
A68_BOOL  Import;
A_PAD_BOOL(PAD_97)
A68_BOOL  Export;
A_PAD_BOOL(PAD_98)
};
typedef struct A68t265  A68_265 ;    /* STRUCT(INT,INT,INT,INT,BOOL,BOOL)  */
struct A68t266{
struct A68t258  Tag;
};
typedef struct A68t266  A68_266 ;    /* STRUCT(MODE258)  */
struct A68t267 { A68_INT mode; union {
struct A68t268 * mode1;
struct A68t269 * mode2;
struct A68t270 * mode3;
struct A68t271 * mode4;
struct A68t272 * mode5;
struct A68t273 * mode6;
struct A68t274 * mode7;
struct A68t275 * mode8;
struct A68t276 * mode9;
struct A68t277 * mode10;
} data; };
typedef struct A68t267  A68_267 ;    /* UNION(REF MODE268,REF MODE269,REF MODE270,REF MODE271,REF MODE272,REF MODE273,REF MODE274,REF MODE275,REF MODE276,REF MODE277)  */
struct A68t268{
A68_INT  Int;
A_PAD_INT(PAD_99)
A68_VC  Text;
};
typedef struct A68t268  A68_268 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t269{
A68_INT  Sort;
A_PAD_INT(PAD_100)
struct A68t267  Test;
struct A68t267  Standard;
};
typedef struct A68t269  A68_269 ;    /* STRUCT(INT,MODE267,MODE267)  */
struct A68t270{
A68_INT  Nameno;
A_PAD_INT(PAD_101)
};
typedef struct A68t270  A68_270 ;    /* STRUCT(INT)  */
struct A68t271{
A68_INT  Intno;
A_PAD_INT(PAD_102)
};
typedef struct A68t271  A68_271 ;    /* STRUCT(INT)  */
struct A68t272{
struct A68t267  Left;
A68_INT  Sort;
A_PAD_INT(PAD_103)
struct A68t267  Right;
};
typedef struct A68t272  A68_272 ;    /* STRUCT(MODE267,INT,MODE267)  */
struct A68t273{
A68_INT  Sort;
A_PAD_INT(PAD_104)
struct A68t267  Right;
};
typedef struct A68t273  A68_273 ;    /* STRUCT(INT,MODE267)  */
struct A68t274{
struct A68t267  Cond;
struct A68t267  True;
struct A68t267  False;
};
typedef struct A68t274  A68_274 ;    /* STRUCT(MODE267,MODE267,MODE267)  */
struct A68t275{
struct A68t267  Formula;
};
typedef struct A68t275  A68_275 ;    /* STRUCT(MODE267)  */
struct A68t276{
A68_INT  Macparno;
A_PAD_INT(PAD_105)
};
typedef struct A68t276  A68_276 ;    /* STRUCT(INT)  */
struct A68t277{
A68_INT  Fnull;
A_PAD_INT(PAD_106)
};
typedef struct A68t277  A68_277 ;    /* STRUCT(INT)  */
struct A68t278{
struct A68t267  Tag;
};
typedef struct A68t278  A68_278 ;    /* STRUCT(MODE267)  */
struct A68t279{
struct A68t267  Formula;
struct A68t279 * Rest;
};
typedef struct A68t279  A68_279 ;    /* STRUCT(MODE267,REF MODE279)  */
struct A68t282{
struct A68t267  Lwb;
struct A68t267  Upb;
};
typedef struct A68t282  A68_282 ;    /* STRUCT(MODE267,MODE267)  */
struct A68t281 { A68_INT mode; union {
struct A68t268 * mode1;
struct A68t269 * mode2;
struct A68t270 * mode3;
struct A68t271 * mode4;
struct A68t272 * mode5;
struct A68t273 * mode6;
struct A68t274 * mode7;
struct A68t275 * mode8;
struct A68t276 * mode9;
struct A68t277 * mode10;
struct A68t282  mode11;
} data; };
typedef struct A68t281  A68_281 ;    /* UNION(REF MODE268,REF MODE269,REF MODE270,REF MODE271,REF MODE272,REF MODE273,REF MODE274,REF MODE275,REF MODE276,REF MODE277,MODE282)  */
struct A68t280{
A68_INT  Sort;
A_PAD_INT(PAD_107)
A68_VC  Intname;
struct A68t258  Attr;
struct A68t281  Value;
struct A68t265 * Usage;
};
typedef struct A68t280  A68_280 ;    /* STRUCT(INT,REF MODE26,MODE258,MODE281,REF MODE265)  */
struct A68t283 { A68_INT mode; union {
struct A68t284 * mode1;
struct A68t285 * mode2;
struct A68t286 * mode3;
struct A68t287 * mode4;
struct A68t288 * mode5;
struct A68t289 * mode6;
struct A68t290 * mode7;
struct A68t276 * mode8;
struct A68t291 * mode9;
} data; };
typedef struct A68t283  A68_283 ;    /* UNION(REF MODE284,REF MODE285,REF MODE286,REF MODE287,REF MODE288,REF MODE289,REF MODE290,REF MODE276,REF MODE291)  */
struct A68t284{
A68_INT  Typeno;
A_PAD_INT(PAD_108)
};
typedef struct A68t284  A68_284 ;    /* STRUCT(INT)  */
struct A68t285{
struct A68t267  Size;
struct A68t283  Elem;
};
typedef struct A68t285  A68_285 ;    /* STRUCT(MODE267,MODE283)  */
struct A68t286{
struct A68t283  Elem;
struct A68t286 * Rest;
};
typedef struct A68t286  A68_286 ;    /* STRUCT(MODE283,REF MODE286)  */
struct A68t287{
struct A68t283  From;
struct A68t283  To;
};
typedef struct A68t287  A68_287 ;    /* STRUCT(MODE283,MODE283)  */
struct A68t288{
struct A68t283  Type;
};
typedef struct A68t288  A68_288 ;    /* STRUCT(MODE283)  */
struct A68t289{
struct A68t267  Size;
struct A68t283  Char;
};
typedef struct A68t289  A68_289 ;    /* STRUCT(MODE267,MODE283)  */
struct A68t290{
A68_INT  Tvoid;
A_PAD_INT(PAD_109)
};
typedef struct A68t290  A68_290 ;    /* STRUCT(INT)  */
struct A68t291{
A68_INT  Tnull;
A_PAD_INT(PAD_110)
};
typedef struct A68t291  A68_291 ;    /* STRUCT(INT)  */
struct A68t292{
struct A68t283  Tag;
};
typedef struct A68t292  A68_292 ;    /* STRUCT(MODE283)  */
struct A68t293{
A68_VC  Tagname;
A68_VC  Chars;
};
typedef struct A68t293  A68_293 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t294{
A68_VC  Altname;
struct A68t283  Assoc;
};
typedef struct A68t294  A68_294 ;    /* STRUCT(REF MODE26,MODE283)  */
struct A68t295{
A68_VC  Tagname;
struct A68t282  Range;
};
typedef struct A68t295  A68_295 ;    /* STRUCT(REF MODE26,MODE282)  */
A_VECTOR(struct A68t294 ,A68t297);
typedef struct A68t297  A68_297 ;    /* VECTOR [] MODE294 */
struct A68t296 { A68_INT mode; union {
struct A68t297  mode1;
struct A68t295 * mode2;
struct A68t292 * mode3;
struct A68t293 * mode4;
} data; };
typedef struct A68t296  A68_296 ;    /* UNION(REF MODE297,REF MODE295,REF MODE292,REF MODE293)  */
struct A68t298{
A68_INT  Sort;
A_PAD_INT(PAD_111)
A68_VC  Typename;
struct A68t258  Attr;
struct A68t296  Body;
struct A68t265 * Usage;
};
typedef struct A68t298  A68_298 ;    /* STRUCT(INT,REF MODE26,MODE258,MODE296,REF MODE265)  */
struct A68t299{
A68_INT  Constno;
A_PAD_INT(PAD_112)
};
typedef struct A68t299  A68_299 ;    /* STRUCT(INT)  */
struct A68t300{
A68_INT  Typeno;
A_PAD_INT(PAD_113)
A68_INT  Primno;
A_PAD_INT(PAD_114)
};
typedef struct A68t300  A68_300 ;    /* STRUCT(INT,INT)  */
struct A68t301{
A68_INT  Typeno;
A_PAD_INT(PAD_115)
struct A68t267  Index;
};
typedef struct A68t301  A68_301 ;    /* STRUCT(INT,MODE267)  */
struct A68t302{
A68_INT  Typeno;
A_PAD_INT(PAD_116)
struct A68t282  Range;
};
typedef struct A68t302  A68_302 ;    /* STRUCT(INT,MODE282)  */
struct A68t303{
struct A68t283  Querytype;
};
typedef struct A68t303  A68_303 ;    /* STRUCT(MODE283)  */
struct A68t305 { A68_INT mode; union {
struct A68t299 * mode1;
struct A68t300 * mode2;
struct A68t301 * mode3;
struct A68t303 * mode4;
struct A68t306 * mode5;
struct A68t307 * mode6;
struct A68t288 * mode7;
struct A68t302 * mode8;
struct A68t308 * mode9;
struct A68t309 * mode10;
struct A68t310 * mode11;
struct A68t311 * mode12;
struct A68t312 * mode13;
struct A68t313 * mode14;
struct A68t314 * mode15;
struct A68t315 * mode16;
struct A68t316 * mode17;
struct A68t317 * mode18;
struct A68t318 * mode19;
struct A68t319 * mode20;
struct A68t320 * mode21;
struct A68t321 * mode22;
struct A68t322 * mode23;
struct A68t323 * mode24;
struct A68t324 * mode25;
struct A68t325 * mode26;
struct A68t326 * mode27;
struct A68t327 * mode28;
struct A68t328 * mode29;
struct A68t329 * mode30;
struct A68t330 * mode31;
struct A68t331 * mode32;
struct A68t332 * mode33;
struct A68t333 * mode34;
} data; };
typedef struct A68t305  A68_305 ;    /* UNION(REF MODE299,REF MODE300,REF MODE301,REF MODE303,REF MODE306,REF MODE307,REF MODE288,REF MODE302,REF MODE308,REF MODE309,REF MODE310,REF MODE311,REF MODE312,REF MODE313,REF MODE314,REF MODE315,REF MODE316,REF MODE317,REF MODE318,REF MODE319,REF MODE320,REF MODE321,REF MODE322,REF MODE323,REF MODE324,REF MODE325,REF MODE326,REF MODE327,REF MODE328,REF MODE329,REF MODE330,REF MODE331,REF MODE332,REF MODE333)  */
struct A68t304{
A68_INT  Sort;
A_PAD_INT(PAD_117)
A68_VC  Constname;
struct A68t258  Attr;
struct A68t305  Value;
struct A68t265 * Usage;
};
typedef struct A68t304  A68_304 ;    /* STRUCT(INT,REF MODE26,MODE258,MODE305,REF MODE265)  */
struct A68t306{
A68_INT  Typeno;
A_PAD_INT(PAD_118)
struct A68t32  String;
};
typedef struct A68t306  A68_306 ;    /* STRUCT(INT,REF MODE32)  */
struct A68t307{
A68_INT  Cvoid;
A_PAD_INT(PAD_119)
};
typedef struct A68t307  A68_307 ;    /* STRUCT(INT)  */
struct A68t308{
A68_INT  Typeno;
A_PAD_INT(PAD_120)
A68_INT  Firstno;
A_PAD_INT(PAD_121)
A68_INT  Lastno;
A_PAD_INT(PAD_122)
};
typedef struct A68t308  A68_308 ;    /* STRUCT(INT,INT,INT)  */
struct A68t309{
struct A68t305  Alt;
struct A68t309 * Rest;
};
typedef struct A68t309  A68_309 ;    /* STRUCT(MODE305,REF MODE309)  */
struct A68t310{
A68_INT  Sort;
A_PAD_INT(PAD_123)
A68_INT  Nameno;
A_PAD_INT(PAD_124)
};
typedef struct A68t310  A68_310 ;    /* STRUCT(INT,INT)  */
struct A68t311{
struct A68t305  Sink;
struct A68t305  Source;
};
typedef struct A68t311  A68_311 ;    /* STRUCT(MODE305,MODE305)  */
struct A68t312{
A68_INT  Typeno;
A_PAD_INT(PAD_125)
A68_INT  Altno;
A_PAD_INT(PAD_126)
struct A68t305  Assoc;
};
typedef struct A68t312  A68_312 ;    /* STRUCT(INT,INT,MODE305)  */
struct A68t313{
struct A68t305  Extract;
A68_INT  Typeno;
A_PAD_INT(PAD_127)
A68_INT  Altno;
A_PAD_INT(PAD_128)
};
typedef struct A68t313  A68_313 ;    /* STRUCT(MODE305,INT,INT)  */
struct A68t314{
struct A68t305  Unit;
A68_INT  Fnno;
A_PAD_INT(PAD_129)
A68_INT  Nameno;
A_PAD_INT(PAD_130)
};
typedef struct A68t314  A68_314 ;    /* STRUCT(MODE305,INT,INT)  */
struct A68t315{
struct A68t305  Unit;
struct A68t267  Index;
};
typedef struct A68t315  A68_315 ;    /* STRUCT(MODE305,MODE267)  */
struct A68t316{
struct A68t305  Unit;
struct A68t282  Range;
};
typedef struct A68t316  A68_316 ;    /* STRUCT(MODE305,MODE282)  */
struct A68t317{
struct A68t305  Unit;
struct A68t305  Index;
};
typedef struct A68t317  A68_317 ;    /* STRUCT(MODE305,MODE305)  */
struct A68t318{
struct A68t305  Unit;
struct A68t305  Index;
struct A68t305  From;
};
typedef struct A68t318  A68_318 ;    /* STRUCT(MODE305,MODE305,MODE305)  */
struct A68t319{
struct A68t267  Size;
struct A68t305  Elem;
};
typedef struct A68t319  A68_319 ;    /* STRUCT(MODE267,MODE305)  */
struct A68t320{
struct A68t305  Elem;
struct A68t320 * Rest;
};
typedef struct A68t320  A68_320 ;    /* STRUCT(MODE305,REF MODE320)  */
struct A68t321{
A68_BOOL  String;
A_PAD_BOOL(PAD_131)
A68_INT  Sort;
A_PAD_INT(PAD_132)
struct A68t305  Left;
struct A68t305  Right;
};
typedef struct A68t321  A68_321 ;    /* STRUCT(BOOL,INT,MODE305,MODE305)  */
A_VECTOR(struct A68t348 ,A68t347);
typedef struct A68t347  A68_347 ;    /* VECTOR [] MODE348 */
struct A68t350{
struct A68t305  Tag;
};
typedef struct A68t350  A68_350 ;    /* STRUCT(MODE305)  */
struct A68t345{
A68_INT  Fnno;
A_PAD_INT(PAD_133)
struct A68t347  Macparams;
struct A68t258  Attr;
};
typedef struct A68t345  A68_345 ;    /* STRUCT(INT,REF MODE347,MODE258)  */
struct A68t349 { A68_INT mode; union {
struct A68t266  mode1;
struct A68t278  mode2;
struct A68t292  mode3;
struct A68t350  mode4;
struct A68t345  mode5;
} data; };
typedef struct A68t349  A68_349 ;    /* UNION(MODE266,MODE278,MODE292,MODE350,MODE345)  */
struct A68t348{
A68_INT  Sort;
A_PAD_INT(PAD_134)
struct A68t349  Param;
};
typedef struct A68t348  A68_348 ;    /* STRUCT(INT,MODE349)  */
struct A68t322{
struct A68t345  Inst;
struct A68t305  Right;
};
typedef struct A68t322  A68_322 ;    /* STRUCT(MODE345,MODE305)  */
struct A68t323{
struct A68t305  Left;
struct A68t345  Inst;
struct A68t305  Right;
};
typedef struct A68t323  A68_323 ;    /* STRUCT(MODE305,MODE345,MODE305)  */
struct A68t324{
struct A68t305  Input;
struct A68t365 * Choices;
};
typedef struct A68t324  A68_324 ;    /* STRUCT(MODE305,REF MODE365)  */
struct A68t325{
struct A68t267  Cond;
struct A68t305  True;
struct A68t305  False;
};
typedef struct A68t325  A68_325 ;    /* STRUCT(MODE267,MODE305,MODE305)  */
struct A68t326{
struct A68t267  Repl;
struct A68t305  Body;
};
typedef struct A68t326  A68_326 ;    /* STRUCT(MODE267,MODE305)  */
struct A68t327{
struct A68t353 * Body;
struct A68t305  Output;
};
typedef struct A68t327  A68_327 ;    /* STRUCT(REF MODE353,MODE305)  */
struct A68t328{
struct A68t334 * Body;
struct A68t305  Output;
};
typedef struct A68t328  A68_328 ;    /* STRUCT(REF MODE334,MODE305)  */
struct A68t329{
struct A68t305  Unit;
struct A68t258  Attr;
};
typedef struct A68t329  A68_329 ;    /* STRUCT(MODE305,MODE258)  */
struct A68t330{
struct A68t305  Unit;
struct A68t269  Check;
};
typedef struct A68t330  A68_330 ;    /* STRUCT(MODE305,MODE269)  */
struct A68t331{
struct A68t305  Unit;
};
typedef struct A68t331  A68_331 ;    /* STRUCT(MODE305)  */
struct A68t332{
struct A68t267  Size;
struct A68t305  Char;
};
typedef struct A68t332  A68_332 ;    /* STRUCT(MODE267,MODE305)  */
struct A68t333{
A68_INT  Unull;
A_PAD_INT(PAD_135)
};
typedef struct A68t333  A68_333 ;    /* STRUCT(INT)  */
struct A68t336{
A68_INT  Fnno;
A_PAD_INT(PAD_136)
};
typedef struct A68t336  A68_336 ;    /* STRUCT(INT)  */
struct A68t335 { A68_INT mode; union {
struct A68t259  mode1;
struct A68t271  mode2;
struct A68t284  mode3;
struct A68t299  mode4;
struct A68t336  mode5;
struct A68t337 * mode6;
struct A68t338 * mode7;
struct A68t339 * mode8;
struct A68t340 * mode9;
struct A68t341 * mode10;
struct A68t342 * mode11;
struct A68t343 * mode12;
} data; };
typedef struct A68t335  A68_335 ;    /* UNION(MODE259,MODE271,MODE284,MODE299,MODE336,REF MODE337,REF MODE338,REF MODE339,REF MODE340,REF MODE341,REF MODE342,REF MODE343)  */
struct A68t334{
struct A68t335  Step;
struct A68t334 * Rest;
};
typedef struct A68t334  A68_334 ;    /* STRUCT(MODE335,REF MODE334)  */
struct A68t337{
struct A68t267  Cond;
struct A68t351 * Print;
};
typedef struct A68t337  A68_337 ;    /* STRUCT(MODE267,REF MODE351)  */
struct A68t338{
struct A68t267  Cond;
struct A68t351 * Fault;
};
typedef struct A68t338  A68_338 ;    /* STRUCT(MODE267,REF MODE351)  */
struct A68t339{
struct A68t346 * Letnames;
struct A68t305  Unit;
};
typedef struct A68t339  A68_339 ;    /* STRUCT(REF MODE346,MODE305)  */
struct A68t340{
struct A68t279 * Sizes;
struct A68t345  Inst;
struct A68t346 * Makenames;
};
typedef struct A68t340  A68_340 ;    /* STRUCT(REF MODE279,MODE345,REF MODE346)  */
struct A68t341{
struct A68t305  From;
struct A68t305  To;
};
typedef struct A68t341  A68_341 ;    /* STRUCT(MODE305,MODE305)  */
struct A68t342{
struct A68t279 * Repls;
struct A68t344 * Joins;
};
typedef struct A68t342  A68_342 ;    /* STRUCT(REF MODE279,REF MODE344)  */
struct A68t343{
A68_INT  Stepnull;
A_PAD_INT(PAD_137)
};
typedef struct A68t343  A68_343 ;    /* STRUCT(INT)  */
struct A68t344{
struct A68t341  Join;
struct A68t344 * Rest;
};
typedef struct A68t344  A68_344 ;    /* STRUCT(MODE341,REF MODE344)  */
struct A68t346{
A68_INT  Nameno;
A_PAD_INT(PAD_138)
struct A68t346 * Rest;
};
typedef struct A68t346  A68_346 ;    /* STRUCT(INT,REF MODE346)  */
struct A68t352 { A68_INT mode; union {
A68_VC  mode1;
struct A68t278 * mode2;
} data; };
typedef struct A68t352  A68_352 ;    /* UNION(REF MODE26,REF MODE278)  */
struct A68t351{
struct A68t352  Item;
struct A68t351 * Rest;
};
typedef struct A68t351  A68_351 ;    /* STRUCT(MODE352,REF MODE351)  */
struct A68t354 { A68_INT mode; union {
struct A68t259  mode1;
struct A68t271  mode2;
struct A68t284  mode3;
struct A68t299  mode4;
struct A68t336  mode5;
struct A68t337 * mode6;
struct A68t338 * mode7;
struct A68t355 * mode8;
struct A68t356 * mode9;
struct A68t357 * mode10;
struct A68t358 * mode11;
struct A68t359 * mode12;
struct A68t360 * mode13;
struct A68t361 * mode14;
struct A68t362 * mode15;
struct A68t353 * mode16;
struct A68t363 * mode17;
} data; };
typedef struct A68t354  A68_354 ;    /* UNION(MODE259,MODE271,MODE284,MODE299,MODE336,REF MODE337,REF MODE338,REF MODE355,REF MODE356,REF MODE357,REF MODE358,REF MODE359,REF MODE360,REF MODE361,REF MODE362,REF MODE353,REF MODE363)  */
struct A68t353{
struct A68t354  Step;
struct A68t353 * Rest;
};
typedef struct A68t353  A68_353 ;    /* STRUCT(MODE354,REF MODE353)  */
struct A68t355{
struct A68t339  Seqlet;
};
typedef struct A68t355  A68_355 ;    /* STRUCT(MODE339)  */
struct A68t356{
struct A68t339  Seqvar;
};
typedef struct A68t356  A68_356 ;    /* STRUCT(MODE339)  */
struct A68t357{
struct A68t346 * Pvarnames;
struct A68t305  Init;
};
typedef struct A68t357  A68_357 ;    /* STRUCT(REF MODE346,MODE305)  */
struct A68t358{
struct A68t305  To;
struct A68t305  From;
};
typedef struct A68t358  A68_358 ;    /* STRUCT(MODE305,MODE305)  */
struct A68t359{
struct A68t305  Input;
struct A68t364 * Choices;
};
typedef struct A68t359  A68_359 ;    /* STRUCT(MODE305,REF MODE364)  */
struct A68t360{
struct A68t267  Cond;
struct A68t354  True;
struct A68t354  False;
};
typedef struct A68t360  A68_360 ;    /* STRUCT(MODE267,MODE354,MODE354)  */
struct A68t361{
struct A68t267  Repl;
struct A68t354  Body;
};
typedef struct A68t361  A68_361 ;    /* STRUCT(MODE267,MODE354)  */
struct A68t362{
A68_INT  Seqnull;
A_PAD_INT(PAD_139)
};
typedef struct A68t362  A68_362 ;    /* STRUCT(INT)  */
struct A68t363{
struct A68t267  Size;
struct A68t354  Elem;
};
typedef struct A68t363  A68_363 ;    /* STRUCT(MODE267,MODE354)  */
struct A68t364{
A68_BOOL  Check;
A_PAD_BOOL(PAD_140)
A68_INT  Sort;
A_PAD_INT(PAD_141)
struct A68t305  Test;
struct A68t354  Output;
struct A68t364 * Rest;
};
typedef struct A68t364  A68_364 ;    /* STRUCT(BOOL,INT,MODE305,MODE354,REF MODE364)  */
struct A68t365{
A68_BOOL  Check;
A_PAD_BOOL(PAD_142)
A68_INT  Sort;
A_PAD_INT(PAD_143)
struct A68t305  Test;
struct A68t305  Output;
struct A68t365 * Rest;
};
typedef struct A68t365  A68_365 ;    /* STRUCT(BOOL,INT,MODE305,MODE305,REF MODE365)  */
struct A68t366 { A68_INT mode; union {
struct A68t259  mode1;
struct A68t271  mode2;
struct A68t284  mode3;
struct A68t299  mode4;
struct A68t336  mode5;
} data; };
typedef struct A68t366  A68_366 ;    /* UNION(MODE259,MODE271,MODE284,MODE299,MODE336)  */
struct A68t367{
A68_BOOL  Biop;
A_PAD_BOOL(PAD_144)
A68_VC  Name;
struct A68t347  Macparams;
};
typedef struct A68t367  A68_367 ;    /* STRUCT(BOOL,REF MODE26,REF MODE347)  */
struct A68t368{
struct A68t267  Output;
};
typedef struct A68t368  A68_368 ;    /* STRUCT(MODE267)  */
struct A68t369{
A68_INT  Reform;
A_PAD_INT(PAD_145)
};
typedef struct A68t369  A68_369 ;    /* STRUCT(INT)  */
struct A68t370{
A68_VC  Name;
A68_INT  Contextno;
A_PAD_INT(PAD_146)
struct A68t111  Ctname;
};
typedef struct A68t370  A68_370 ;    /* STRUCT(REF MODE26,INT,MODE111)  */
struct A68t371{
A68_INT  Sort;
A_PAD_INT(PAD_147)
struct A68t305  Init;
struct A68t267  Ambigtime;
struct A68t305  Ambig;
struct A68t267  Delaytime;
};
typedef struct A68t371  A68_371 ;    /* STRUCT(INT,MODE305,MODE267,MODE305,MODE267)  */
struct A68t372{
struct A68t305  Init;
struct A68t267  Delaytime;
};
typedef struct A68t372  A68_372 ;    /* STRUCT(MODE305,MODE267)  */
struct A68t373{
struct A68t305  Init;
};
typedef struct A68t373  A68_373 ;    /* STRUCT(MODE305)  */
struct A68t374{
A68_INT  Sort;
A_PAD_INT(PAD_148)
struct A68t267  Interval;
struct A68t305  Init;
struct A68t267  Skew;
};
typedef struct A68t374  A68_374 ;    /* STRUCT(INT,MODE267,MODE305,MODE267)  */
struct A68t375{
A68_BOOL  Faster;
A_PAD_BOOL(PAD_149)
A68_INT  Sort;
A_PAD_INT(PAD_150)
struct A68t345  Inst;
struct A68t267  Scale;
struct A68t305  Init;
struct A68t267  Skew;
};
typedef struct A68t375  A68_375 ;    /* STRUCT(BOOL,INT,MODE345,MODE267,MODE305,MODE267)  */
struct A68t377 { A68_INT mode; union {
struct A68t350 * mode1;
struct A68t367 * mode2;
struct A68t368 * mode3;
struct A68t369 * mode4;
struct A68t370 * mode5;
struct A68t371 * mode6;
struct A68t372 * mode7;
struct A68t373 * mode8;
struct A68t374 * mode9;
struct A68t375 * mode10;
struct A68t376 * mode11;
struct A68t378 * mode12;
} data; };
typedef struct A68t377  A68_377 ;    /* UNION(REF MODE350,REF MODE367,REF MODE368,REF MODE369,REF MODE370,REF MODE371,REF MODE372,REF MODE373,REF MODE374,REF MODE375,REF MODE376,REF MODE378)  */
struct A68t376{
struct A68t257 * Joincheck;
A68_BOOL  Check;
A_PAD_BOOL(PAD_151)
struct A68t377  Fnbody;
};
typedef struct A68t376  A68_376 ;    /* STRUCT(REF MODE257,BOOL,MODE377)  */
struct A68t378{
A68_INT  Bodynull;
A_PAD_INT(PAD_152)
};
typedef struct A68t378  A68_378 ;    /* STRUCT(INT)  */
struct A68t379{
A68_INT  Sort;
A_PAD_INT(PAD_153)
struct A68t366  Spec;
};
typedef struct A68t379  A68_379 ;    /* STRUCT(INT,MODE366)  */
struct A68t380{
A68_VC  Name;
struct A68t283  Type;
struct A68t258  Attr;
};
typedef struct A68t380  A68_380 ;    /* STRUCT(REF MODE26,MODE283,MODE258)  */
A_VECTOR(struct A68t379 ,A68t382);
typedef struct A68t382  A68_382 ;    /* VECTOR [] MODE379 */
A_VECTOR(struct A68t380 ,A68t383);
typedef struct A68t383  A68_383 ;    /* VECTOR [] MODE380 */
struct A68t381{
A68_INT  Sort;
A_PAD_INT(PAD_154)
A68_BOOL  Macro;
A_PAD_BOOL(PAD_155)
A68_VC  Fnname;
struct A68t382  Macspecs;
struct A68t258  Attr;
struct A68t346 * Inputs;
struct A68t346 * Outputs;
struct A68t383  Nametypes;
struct A68t377  Fnbody;
struct A68t265 * Usage;
};
typedef struct A68t381  A68_381 ;    /* STRUCT(INT,BOOL,REF MODE26,REF MODE382,MODE258,REF MODE346,REF MODE346,REF MODE383,MODE377,REF MODE265)  */
A_VECTOR(struct A68t264 *,A68t385);
typedef struct A68t385  A68_385 ;    /* VECTOR [] REF MODE264 */
A_VECTOR(struct A68t280 *,A68t386);
typedef struct A68t386  A68_386 ;    /* VECTOR [] REF MODE280 */
A_VECTOR(struct A68t298 *,A68t387);
typedef struct A68t387  A68_387 ;    /* VECTOR [] REF MODE298 */
A_VECTOR(struct A68t304 *,A68t388);
typedef struct A68t388  A68_388 ;    /* VECTOR [] REF MODE304 */
A_VECTOR(struct A68t381 *,A68t389);
typedef struct A68t389  A68_389 ;    /* VECTOR [] REF MODE381 */
struct A68t384{
struct A68t385  Attrs;
struct A68t386  Ints;
struct A68t387  Types;
struct A68t388  Consts;
struct A68t389  Fns;
};
typedef struct A68t384  A68_384 ;    /* STRUCT(REF MODE385,REF MODE386,REF MODE387,REF MODE388,REF MODE389)  */
struct A68t390{
A68_INT  Closureno;
A_PAD_INT(PAD_156)
A68_INT  Sort;
A_PAD_INT(PAD_157)
struct A68t384 * Environ;
};
typedef struct A68t390  A68_390 ;    /* STRUCT(INT,INT,REF MODE384)  */
struct A68t391{
struct A68t390  Outer;
struct A68t391 * Rest;
};
typedef struct A68t391  A68_391 ;    /* STRUCT(MODE390,REF MODE391)  */
A_VECTOR(struct A68t391 ,A68t393);
typedef struct A68t393  A68_393 ;    /* VECTOR [] MODE391 */
struct A68t392{
struct A68t393  Outers;
struct A68t392 * Rest;
};
typedef struct A68t392  A68_392 ;    /* STRUCT(REF MODE393,REF MODE392)  */
struct A68t394{
A68_INT  Max_closureno;
A_PAD_INT(PAD_158)
struct A68t391 * Outers;
struct A68t391 * Freelist;
struct A68t392 * Outerslist;
};
typedef struct A68t394  A68_394 ;    /* STRUCT(INT,REF MODE391,REF MODE391,REF MODE392)  */
A_VECTOR(struct A68t391 *,A68t395);
typedef struct A68t395  A68_395 ;    /* VECTOR [] REF MODE391 */

A_PROCEDURE(struct A68t270 *,A68t396,(A68_INT ),(A68_INT ,void *));
typedef struct A68t396  A68_396 ;    /* PROC(INT) REF MODE270 */

A_PROCEDURE(struct A68t271 *,A68t397,(A68_INT ),(A68_INT ,void *));
typedef struct A68t397  A68_397 ;    /* PROC(INT) REF MODE271 */

A_PROCEDURE(struct A68t275 *,A68t398,(struct A68t267 ),(struct A68t267 ,void *));
typedef struct A68t398  A68_398 ;    /* PROC(MODE267) REF MODE275 */

A_PROCEDURE(struct A68t278 *,A68t399,(struct A68t267 ),(struct A68t267 ,void *));
typedef struct A68t399  A68_399 ;    /* PROC(MODE267) REF MODE278 */

A_PROCEDURE(struct A68t284 *,A68t400,(A68_INT ),(A68_INT ,void *));
typedef struct A68t400  A68_400 ;    /* PROC(INT) REF MODE284 */

A_PROCEDURE(struct A68t288 *,A68t401,(struct A68t283 ),(struct A68t283 ,void *));
typedef struct A68t401  A68_401 ;    /* PROC(MODE283) REF MODE288 */

A_PROCEDURE(struct A68t292 *,A68t402,(struct A68t283 ),(struct A68t283 ,void *));
typedef struct A68t402  A68_402 ;    /* PROC(MODE283) REF MODE292 */

A_PROCEDURE(struct A68t299 *,A68t403,(A68_INT ),(A68_INT ,void *));
typedef struct A68t403  A68_403 ;    /* PROC(INT) REF MODE299 */

A_PROCEDURE(struct A68t303 *,A68t404,(struct A68t283 ),(struct A68t283 ,void *));
typedef struct A68t404  A68_404 ;    /* PROC(MODE283) REF MODE303 */

A_PROCEDURE(struct A68t355 *,A68t405,(struct A68t339 ),(struct A68t339 ,void *));
typedef struct A68t405  A68_405 ;    /* PROC(MODE339) REF MODE355 */

A_PROCEDURE(struct A68t356 *,A68t406,(struct A68t339 ),(struct A68t339 ,void *));
typedef struct A68t406  A68_406 ;    /* PROC(MODE339) REF MODE356 */

A_PROCEDURE(struct A68t331 *,A68t407,(struct A68t305 ),(struct A68t305 ,void *));
typedef struct A68t407  A68_407 ;    /* PROC(MODE305) REF MODE331 */

A_PROCEDURE(struct A68t350 *,A68t408,(struct A68t305 ),(struct A68t305 ,void *));
typedef struct A68t408  A68_408 ;    /* PROC(MODE305) REF MODE350 */

A_PROCEDURE(struct A68t336 *,A68t409,(A68_INT ),(A68_INT ,void *));
typedef struct A68t409  A68_409 ;    /* PROC(INT) REF MODE336 */

A_PROCEDURE(struct A68t368 *,A68t410,(struct A68t267 ),(struct A68t267 ,void *));
typedef struct A68t410  A68_410 ;    /* PROC(MODE267) REF MODE368 */

A_PROCEDURE(struct A68t373 *,A68t411,(struct A68t305 ),(struct A68t305 ,void *));
typedef struct A68t411  A68_411 ;    /* PROC(MODE305) REF MODE373 */

A_PROCEDURE(struct A68t276 *,A68t412,(A68_INT ),(A68_INT ,void *));
typedef struct A68t412  A68_412 ;    /* PROC(INT) REF MODE276 */

A_PROCEDURE(struct A68t259 *,A68t413,(A68_INT ),(A68_INT ,void *));
typedef struct A68t413  A68_413 ;    /* PROC(INT) REF MODE259 */

A_PROCEDURE(struct A68t266 *,A68t414,(struct A68t258 ),(struct A68t258 ,void *));
typedef struct A68t414  A68_414 ;    /* PROC(MODE258) REF MODE266 */

A_PROCEDURE(struct A68t262 *,A68t415,(struct A68t258 ),(struct A68t258 ,void *));
typedef struct A68t415  A68_415 ;    /* PROC(MODE258) REF MODE262 */
A_VECTOR(struct A68t256 *,A68t416);
typedef struct A68t416  A68_416 ;    /* VECTOR [] REF MODE256 */

A_PROCEDURE(A68_INT ,A68t417,(struct A68t218 ,struct A68t97 ),(struct A68t218 ,struct A68t97 ,void *));
typedef struct A68t417  A68_417 ;    /* PROC(MODE218,MODE97) INT */
struct A68t419 ;

A_PROCEDURE(struct A68t394 *,A68t418,(struct A68t419 *,A68_BOOL ,struct A68t97 ),(struct A68t419 *,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t418  A68_418 ;    /* PROC(REF MODE419,BOOL,MODE97) REF MODE394 */
struct A68t419{
struct A68t218  Cregion;
A68_VC  Fnname;
struct A68t419 * Rest;
};
typedef struct A68t419  A68_419 ;    /* STRUCT(MODE218,REF MODE26,REF MODE419)  */

A_PROCEDURE(struct A68t394 *,A68t420,(struct A68t218 ,A68_VC ,A68_BOOL ,struct A68t97 ),(struct A68t218 ,A68_VC ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t420  A68_420 ;    /* PROC(MODE218,REF MODE26,BOOL,MODE97) REF MODE394 */

A_PROCEDURE(struct A68t394 *,A68t421,(struct A68t218 ,A68_BOOL ,struct A68t97 ),(struct A68t218 ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t421  A68_421 ;    /* PROC(MODE218,BOOL,MODE97) REF MODE394 */

A_PROCEDURE(struct A68t394 *,A68t422,(struct A68t213 *,A68_BOOL ,struct A68t97 ),(struct A68t213 *,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t422  A68_422 ;    /* PROC(REF MODE213,BOOL,MODE97) REF MODE394 */

A_PROCEDURE(A68_VOID ,A68t423,(struct A68t213 *,A68_VC ,A68_BOOL ,struct A68t97 ,struct A68t390 *),(struct A68t213 *,A68_VC ,A68_BOOL ,struct A68t97 ,struct A68t390 *,void *));
typedef struct A68t423  A68_423 ;    /* PROC(REF MODE213,REF MODE26,BOOL,MODE97) MODE390 */

A_PROCEDURE(A68_VOID ,A68t424,(struct A68t390 ,struct A68t97 ),(struct A68t390 ,struct A68t97 ,void *));
typedef struct A68t424  A68_424 ;    /* PROC(MODE390,MODE97) VOID */

A_PROCEDURE(struct A68t394 *,A68t425,(struct A68t394 *,struct A68t97 ),(struct A68t394 *,struct A68t97 ,void *));
typedef struct A68t425  A68_425 ;    /* PROC(REF MODE394,MODE97) REF MODE394 */

A_PROCEDURE(struct A68t370 *,A68t426,(A68_INT ,A68_VC ,struct A68t97 ),(A68_INT ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t426  A68_426 ;    /* PROC(INT,REF MODE26,MODE97) REF MODE370 */
struct A68t428 ;

A_PROCEDURE(A68_VOID ,A68t427,(struct A68t419 *,struct A68t428 ,struct A68t97 ),(struct A68t419 *,struct A68t428 ,struct A68t97 ,void *));
typedef struct A68t427  A68_427 ;    /* PROC(REF MODE419,MODE428,MODE97) VOID */
struct A68t430 ;

A_PROCEDURE(A68_VOID ,A68t429,(struct A68t430 ,struct A68t36 ,struct A68t97 ),(struct A68t430 ,struct A68t36 ,struct A68t97 ,void *));
typedef struct A68t429  A68_429 ;    /* PROC(MODE430,MODE36,MODE97) VOID */
struct A68t428{
struct A68t36  Putstring;
struct A68t429  Outitem;
A68_BOOL  Write_idstable;
A_PAD_BOOL(PAD_159)
};
typedef struct A68t428  A68_428 ;    /* STRUCT(MODE36,MODE429,BOOL)  */
struct A68t431{
A68_INT  Token;
A_PAD_INT(PAD_160)
A68_BOOL  Nil;
A_PAD_BOOL(PAD_161)
};
typedef struct A68t431  A68_431 ;    /* STRUCT(INT,BOOL)  */
struct A68t432{
A68_INT  Index;
A_PAD_INT(PAD_162)
A68_INT  Count;
A_PAD_INT(PAD_163)
};
typedef struct A68t432  A68_432 ;    /* STRUCT(INT,INT)  */
struct A68t430 { A68_INT mode; union {
A68_INT  mode1;
A68_VC  mode2;
struct A68t431  mode3;
struct A68t432  mode4;
} data; };
typedef struct A68t430  A68_430 ;    /* UNION(INT,MODE26,MODE431,MODE432)  */

A_PROCEDURE(A68_BOOL ,A68t433,(struct A68t54 ),(struct A68t54 ,void *));
typedef struct A68t433  A68_433 ;    /* PROC(REF MODE54) BOOL */
A_VECTOR(struct A68t436 ,A68t435);
typedef struct A68t435  A68_435 ;    /* VECTOR [] MODE436 */
struct A68t434{
A68_BITS  Type;
A_PAD_BITS(PAD_164)
struct A68t435  Elements;
};
typedef struct A68t434  A68_434 ;    /* STRUCT(BITS,REF MODE435)  */
struct A68t436 { A68_INT mode; union {
A68_INT * mode1;
struct A68t434  mode2;
} data; };
typedef struct A68t436  A68_436 ;    /* UNION(REF INT,MODE434)  */
struct A68t437{
A68_INT  Sort;
A_PAD_INT(PAD_165)
A68_VC  Value;
};
typedef struct A68t437  A68_437 ;    /* STRUCT(INT,REF MODE26)  */
A_VECTOR(struct A68t437 ,A68t438);
typedef struct A68t438  A68_438 ;    /* VECTOR [] MODE437 */
A_VECTOR(struct A68t439 ,A68t441);
typedef struct A68t441  A68_441 ;    /* VECTOR [] MODE439 */
struct A68t440{
A68_INT  Choice;
A_PAD_INT(PAD_166)
struct A68t441  Params;
};
typedef struct A68t440  A68_440 ;    /* STRUCT(INT,REF MODE441)  */
struct A68t439 { A68_INT mode; union {
struct A68t440  mode1;
struct A68t437  mode2;
} data; };
typedef struct A68t439  A68_439 ;    /* UNION(MODE440,MODE437)  */

A_PROCEDURE(A68_VOID ,A68t443,(struct A68t97 ,A68_VC *),(struct A68t97 ,A68_VC *,void *));
typedef struct A68t443  A68_443 ;    /* PROC(MODE97) REF MODE26 */
struct A68t442 { A68_INT mode; union {
struct A68t443  mode1;
A68_INT * mode2;
struct A68t434  mode3;
} data; };
typedef struct A68t442  A68_442 ;    /* UNION(MODE443,REF INT,MODE434)  */
struct A68t444{
A68_INT * Sort;
struct A68t442  Reader;
A68_VC  Description;
A68_VC  Help;
};
typedef struct A68t444  A68_444 ;    /* STRUCT(REF INT,MODE442,REF MODE26,REF MODE26)  */
struct A68t445{
struct A68t444  Rule;
struct A68t445 * Rest;
};
typedef struct A68t445  A68_445 ;    /* STRUCT(MODE444,REF MODE445)  */

A_PROCEDURE(A68_BOOL ,A68t446,(struct A68t434 ),(struct A68t434 ,void *));
typedef struct A68t446  A68_446 ;    /* PROC(MODE434) BOOL */

A_PROCEDURE(A68_VOID ,A68t447,(struct A68t435 ,struct A68t434 *),(struct A68t435 ,struct A68t434 *,void *));
typedef struct A68t447  A68_447 ;    /* PROC(MODE435) MODE434 */

A_PROCEDURE(A68_VOID ,A68t448,(struct A68t436 ,struct A68t434 *),(struct A68t436 ,struct A68t434 *,void *));
typedef struct A68t448  A68_448 ;    /* PROC(MODE436) MODE434 */
struct A68t450 ;

A_PROCEDURE(A68_VOID ,A68t449,(struct A68t436 ,struct A68t450 ,A68_VC *),(struct A68t436 ,struct A68t450 ,A68_VC *,void *));
typedef struct A68t449  A68_449 ;    /* PROC(MODE436,REF MODE450) REF MODE26 */
A_VECTOR(struct A68t444 ,A68t450);
typedef struct A68t450  A68_450 ;    /* VECTOR [] MODE444 */

A_PROCEDURE(A68_VOID ,A68t451,(struct A68t34 *,struct A68t450 ),(struct A68t34 *,struct A68t450 ,void *));
typedef struct A68t451  A68_451 ;    /* PROC(REF MODE34,REF MODE450) VOID */
struct A68t453 ;

A_PROCEDURE(struct A68t445 *,A68t452,(struct A68t445 *,struct A68t453 ),(struct A68t445 *,struct A68t453 ,void *));
typedef struct A68t452  A68_452 ;    /* PROC(REF MODE445,MODE453) REF MODE445 */
A_VECTOR(struct A68t454 ,A68t453);
typedef struct A68t453  A68_453 ;    /* VECTOR [] MODE454 */
struct A68t454{
A68_INT * No;
struct A68t442  New;
A68_VC  Name;
A68_VC  Help;
};
typedef struct A68t454  A68_454 ;    /* STRUCT(REF INT,MODE442,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t455,(struct A68t439 ,struct A68t438 *),(struct A68t439 ,struct A68t438 *,void *));
typedef struct A68t455  A68_455 ;    /* PROC(MODE439) REF MODE438 */
struct A68t456{
A68_INT  C;
A_PAD_INT(PAD_167)
};
typedef struct A68t456  A68_456 ;    /* STRUCT(INT)  */
struct A68t457{
A68_BITS  A;
A_PAD_BITS(PAD_168)
};
typedef struct A68t457  A68_457 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t459,(A68_VC ,struct A68t439 ,struct A68t97 ),(A68_VC ,struct A68t439 ,struct A68t97 ,void *));
typedef struct A68t459  A68_459 ;    /* PROC(REF MODE26,MODE439,MODE97) VOID */
struct A68t458{
A68_VC  Parameter;
struct A68t459  Proc;
};
typedef struct A68t458  A68_458 ;    /* STRUCT(REF MODE26,MODE459)  */

A_PROCEDURE(A68_VOID ,A68t461,(struct A68t439 ,struct A68t97 ),(struct A68t439 ,struct A68t97 ,void *));
typedef struct A68t461  A68_461 ;    /* PROC(MODE439,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t462,(struct A68t438 ,struct A68t97 ),(struct A68t438 ,struct A68t97 ,void *));
typedef struct A68t462  A68_462 ;    /* PROC(REF MODE438,MODE97) VOID */
struct A68t460 { A68_INT mode; union {
struct A68t458  mode1;
struct A68t461  mode2;
struct A68t462  mode3;
} data; };
typedef struct A68t460  A68_460 ;    /* UNION(MODE458,MODE461,MODE462)  */
struct A68t463 { A68_INT mode; union {
struct A68t464 * mode1;
struct A68t465 * mode2;
struct A68t466 * mode3;
} data; };
typedef struct A68t463  A68_463 ;    /* UNION(REF MODE464,REF MODE465,REF MODE466)  */
struct A68t464 ;

A_PROCEDURE(A68_VOID ,A68t469,(struct A68t464 *,struct A68t34 *),(struct A68t464 *,struct A68t34 *,void *));
typedef struct A68t469  A68_469 ;    /* PROC(REF MODE464,REF MODE34) VOID */
struct A68t468 { A68_INT mode; union {
A68_VC  mode1;
struct A68t102  mode2;
struct A68t469  mode3;
} data; };
typedef struct A68t468  A68_468 ;    /* UNION(REF MODE26,REF MODE102,MODE469)  */
struct A68t464{
A68_VC  Name;
A68_VC  Abreviation;
struct A68t436  Parameter;
struct A68t457  Access;
struct A68t456  Continuation;
struct A68t468  Help;
struct A68t460  Command;
};
typedef struct A68t464  A68_464 ;    /* STRUCT(REF MODE26,REF MODE26,MODE436,MODE457,MODE456,MODE468,MODE460)  */
A_VECTOR(struct A68t463 ,A68t467);
typedef struct A68t467  A68_467 ;    /* VECTOR [] MODE463 */
struct A68t465{
struct A68t464 * Group;
struct A68t467  Commands;
};
typedef struct A68t465  A68_465 ;    /* STRUCT(REF MODE464,REF MODE467)  */
struct A68t466{
struct A68t464 * Prelude;
A68_VC  Context;
A68_VC * Prompt;
struct A68t467  Locals;
struct A68t467  Globals;
struct A68t464 * Postlude;
};
typedef struct A68t466  A68_466 ;    /* STRUCT(REF MODE464,REF MODE26,REF REF MODE26,REF MODE467,REF MODE467,REF MODE464)  */
struct A68t470{
struct A68t466 * Current_context;
A68_INT  Depth;
A_PAD_INT(PAD_169)
struct A68t102  Input_lines;
struct A68t470 * Caller;
};
typedef struct A68t470  A68_470 ;    /* STRUCT(REF MODE466,INT,REF MODE102,REF MODE470)  */
struct A68t471 ;

A_PROCEDURE(A68_VOID ,A68t472,(struct A68t471 *,struct A68t464 *,struct A68t439 ,struct A68t97 ,struct A68t456 *),(struct A68t471 *,struct A68t464 *,struct A68t439 ,struct A68t97 ,struct A68t456 *,void *));
typedef struct A68t472  A68_472 ;    /* PROC(REF MODE471,REF MODE464,MODE439,MODE97) MODE456 */

A_PROCEDURE(A68_VOID ,A68t473,(struct A68t102 ),(struct A68t102 ,void *));
typedef struct A68t473  A68_473 ;    /* PROC(REF MODE102) VOID */
struct A68t475 ;

A_PROCEDURE(A68_VOID ,A68t474,(struct A68t475 ),(struct A68t475 ,void *));
typedef struct A68t474  A68_474 ;    /* PROC(MODE475) VOID */
struct A68t471{
struct A68t470 * Stack;
struct A68t450  Analysers;
A68_BOOL  Hidden;
A_PAD_BOOL(PAD_170)
A68_BOOL  Private;
A_PAD_BOOL(PAD_171)
A68_BOOL  Secret;
A_PAD_BOOL(PAD_172)
struct A68t472  Caller;
struct A68t473  Report_error;
struct A68t474  Set_default_msg;
struct A68t97  Abort;
};
typedef struct A68t471  A68_471 ;    /* STRUCT(REF MODE470,REF MODE450,BOOL,BOOL,BOOL,MODE472,MODE473,MODE474,MODE97)  */
struct A68t475 { A68_INT mode; union {
struct A68t97  mode1;
} data; };
typedef struct A68t475  A68_475 ;    /* UNION(MODE97,VOID)  */

A_PROCEDURE(A68_BOOL ,A68t476,(struct A68t456 ,struct A68t456 ),(struct A68t456 ,struct A68t456 ,void *));
typedef struct A68t476  A68_476 ;    /* PROC(MODE456,MODE456) BOOL */

A_PROCEDURE(A68_VOID ,A68t477,(struct A68t467 ,struct A68t467 ,struct A68t467 *),(struct A68t467 ,struct A68t467 ,struct A68t467 *,void *));
typedef struct A68t477  A68_477 ;    /* PROC(MODE467,MODE467) REF MODE467 */

A_PROCEDURE(A68_VOID ,A68t478,(struct A68t467 ,struct A68t463 ,struct A68t467 *),(struct A68t467 ,struct A68t463 ,struct A68t467 *,void *));
typedef struct A68t478  A68_478 ;    /* PROC(MODE467,MODE463) REF MODE467 */

A_PROCEDURE(A68_VOID ,A68t479,(struct A68t467 *,struct A68t467 ,struct A68t467 *),(struct A68t467 *,struct A68t467 ,struct A68t467 *,void *));
typedef struct A68t479  A68_479 ;    /* PROC(REF REF MODE467,MODE467) REF MODE467 */

A_PROCEDURE(A68_VOID ,A68t480,(struct A68t467 *,struct A68t463 ,struct A68t467 *),(struct A68t467 *,struct A68t463 ,struct A68t467 *,void *));
typedef struct A68t480  A68_480 ;    /* PROC(REF REF MODE467,MODE463) REF MODE467 */

A_PROCEDURE(A68_VOID ,A68t481,(struct A68t467 ,struct A68t467 *),(struct A68t467 ,struct A68t467 *,void *));
typedef struct A68t481  A68_481 ;    /* PROC(MODE467) REF MODE467 */

A_PROCEDURE(A68_VOID ,A68t482,(struct A68t463 ,struct A68t467 *),(struct A68t463 ,struct A68t467 *,void *));
typedef struct A68t482  A68_482 ;    /* PROC(MODE463) REF MODE467 */

A_PROCEDURE(struct A68t465 *,A68t483,(A68_VC ,A68_VC ,struct A68t457 ,struct A68t467 ),(A68_VC ,A68_VC ,struct A68t457 ,struct A68t467 ,void *));
typedef struct A68t483  A68_483 ;    /* PROC(MODE26,MODE26,MODE457,MODE467) REF MODE465 */

A_PROCEDURE(struct A68t466 *,A68t484,(struct A68t464 *,A68_VC ,A68_VC *,struct A68t467 ,struct A68t467 ,struct A68t460 ),(struct A68t464 *,A68_VC ,A68_VC *,struct A68t467 ,struct A68t467 ,struct A68t460 ,void *));
typedef struct A68t484  A68_484 ;    /* PROC(REF MODE464,MODE26,REF REF MODE26,REF MODE467,REF MODE467,MODE460) REF MODE466 */

A_PROCEDURE(A68_VOID ,A68t485,(struct A68t471 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ),(struct A68t471 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t485  A68_485 ;    /* PROC(REF MODE471,REF MODE34,REF MODE26,BOOL,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t486,(struct A68t471 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ),(struct A68t471 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t486  A68_486 ;    /* PROC(REF MODE471,REF MODE34,BOOL,BOOL,MODE97) VOID */

A_PROCEDURE(struct A68t471 *,A68t487,(struct A68t473 ,struct A68t474 ,struct A68t97 ,struct A68t472 ,struct A68t445 *,struct A68t466 *,struct A68t439 ),(struct A68t473 ,struct A68t474 ,struct A68t97 ,struct A68t472 ,struct A68t445 *,struct A68t466 *,struct A68t439 ,void *));
typedef struct A68t487  A68_487 ;    /* PROC(MODE473,MODE474,MODE97,MODE472,REF MODE445,REF MODE466,MODE439) REF MODE471 */

A_PROCEDURE(A68_VOID ,A68t488,(struct A68t471 *,struct A68t456 *),(struct A68t471 *,struct A68t456 *,void *));
typedef struct A68t488  A68_488 ;    /* PROC(REF MODE471) MODE456 */

A_PROCEDURE(A68_BOOL ,A68t489,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t489  A68_489 ;    /* PROC(CHAR) BOOL */

A_PROCEDURE(A68_VOID ,A68t490,(A68_INT ,A68_VC ,struct A68t97 ),(A68_INT ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t490  A68_490 ;    /* PROC(INT,MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t491,(A68_VC ,A68_VC ,struct A68t489 ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t489 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t491  A68_491 ;    /* PROC(REF MODE26,MODE26,MODE489,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t492,(A68_VC ),(A68_VC ,void *));
typedef struct A68t492  A68_492 ;    /* PROC(REF MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t493,(A68_INT *,struct A68t97 ),(A68_INT *,struct A68t97 ,void *));
typedef struct A68t493  A68_493 ;    /* PROC(REF INT,MODE97) BOOL */
struct A68t495 ;

A_PROCEDURE(A68_VOID ,A68t494,(struct A68t495 ,struct A68t97 ,A68_VC *),(struct A68t495 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t494  A68_494 ;    /* PROC(MODE495,MODE97) REF MODE26 */
struct A68t495{
A68_BOOL  Get_first;
A_PAD_BOOL(PAD_173)
A68_BOOL  Check;
A_PAD_BOOL(PAD_174)
};
typedef struct A68t495  A68_495 ;    /* STRUCT(BOOL,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t496,(struct A68t495 ,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t495 ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t496  A68_496 ;    /* PROC(MODE495,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t497,(A68_BOOL ,struct A68t97 ,A68_VC *),(A68_BOOL ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t497  A68_497 ;    /* PROC(BOOL,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t498,(struct A68t437 ),(struct A68t437 ,void *));
typedef struct A68t498  A68_498 ;    /* PROC(MODE437) BOOL */

A_PROCEDURE(A68_INT ,A68t499,(struct A68t437 ,struct A68t97 ),(struct A68t437 ,struct A68t97 ,void *));
typedef struct A68t499  A68_499 ;    /* PROC(MODE437,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t500,(struct A68t437 ,struct A68t97 ,A68_VC *),(struct A68t437 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t500  A68_500 ;    /* PROC(MODE437,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t501,(struct A68t437 ,A68_VC ,struct A68t97 ,struct A68t149 *),(struct A68t437 ,A68_VC ,struct A68t97 ,struct A68t149 *,void *));
typedef struct A68t501  A68_501 ;    /* PROC(MODE437,MODE26,MODE97) MODE149 */

A_PROCEDURE(A68_VOID ,A68t502,(struct A68t438 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t111 *),(struct A68t438 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t111 *,void *));
typedef struct A68t502  A68_502 ;    /* PROC(REF MODE438,REF INT,REF MODE26,MODE97) MODE111 */

A_PROCEDURE(A68_VOID ,A68t503,(struct A68t437 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t437 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t503  A68_503 ;    /* PROC(MODE437,REF BOOL,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t504,(struct A68t437 ,struct A68t97 ,struct A68t46 ),(struct A68t437 ,struct A68t97 ,struct A68t46 ,void *));
typedef struct A68t504  A68_504 ;    /* PROC(MODE437,MODE97,MODE46) INT */
struct A68t505{
A68_INT  Lwb;
A_PAD_INT(PAD_175)
A68_INT  Upb;
A_PAD_INT(PAD_176)
};
typedef struct A68t505  A68_505 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t506,(struct A68t437 ,struct A68t505 ,struct A68t97 ,struct A68t505 *),(struct A68t437 ,struct A68t505 ,struct A68t97 ,struct A68t505 *,void *));
typedef struct A68t506  A68_506 ;    /* PROC(MODE437,MODE505,MODE97) MODE505 */

A_PROCEDURE(A68_VOID ,A68t507,(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *),(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t507  A68_507 ;    /* PROC(CHAR,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_CHAR ,A68t508,(struct A68t437 ,struct A68t97 ),(struct A68t437 ,struct A68t97 ,void *));
typedef struct A68t508  A68_508 ;    /* PROC(MODE437,MODE97) CHAR */

A_PROCEDURE(struct A68t445 *,A68t509,(void),(void *));
typedef struct A68t509  A68_509 ;    /* PROC REF MODE445 */

A_PROCEDURE(A68_INT ,A68t510,(struct A68t394 *),(struct A68t394 *,void *));
typedef struct A68t510  A68_510 ;    /* PROC(REF MODE394) INT */

A_PROCEDURE(struct A68t391 *,A68t511,(A68_INT ,struct A68t394 *,struct A68t97 ),(A68_INT ,struct A68t394 *,struct A68t97 ,void *));
typedef struct A68t511  A68_511 ;    /* PROC(INT,REF MODE394,MODE97) REF MODE391 */

A_PROCEDURE(struct A68t391 *,A68t512,(struct A68t394 *),(struct A68t394 *,void *));
typedef struct A68t512  A68_512 ;    /* PROC(REF MODE394) REF MODE391 */

A_PROCEDURE(struct A68t391 **,A68t513,(struct A68t390 ,struct A68t391 **,struct A68t394 *,struct A68t97 ),(struct A68t390 ,struct A68t391 **,struct A68t394 *,struct A68t97 ,void *));
typedef struct A68t513  A68_513 ;    /* PROC(MODE390,REF REF MODE391,REF MODE394,MODE97) REF REF MODE391 */

A_PROCEDURE(A68_VOID ,A68t514,(struct A68t391 **,struct A68t394 *,struct A68t97 ),(struct A68t391 **,struct A68t394 *,struct A68t97 ,void *));
typedef struct A68t514  A68_514 ;    /* PROC(REF REF MODE391,REF MODE394,MODE97) VOID */

A_PROCEDURE(struct A68t394 *,A68t515,(void),(void *));
typedef struct A68t515  A68_515 ;    /* PROC REF MODE394 */

A_PROCEDURE(A68_INT ,A68t516,(struct A68t394 *,struct A68t97 ),(struct A68t394 *,struct A68t97 ,void *));
typedef struct A68t516  A68_516 ;    /* PROC(REF MODE394,MODE97) INT */
struct A68t517{
struct A68t258  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_177)
};
typedef struct A68t517  A68_517 ;    /* STRUCT(MODE258,BOOL)  */
struct A68t518{
struct A68t261 * A;
A68_BOOL  C;
A_PAD_BOOL(PAD_178)
};
typedef struct A68t518  A68_518 ;    /* STRUCT(REF MODE261,BOOL)  */
struct A68t519{
struct A68t264 * A;
A68_BOOL  C;
A_PAD_BOOL(PAD_179)
};
typedef struct A68t519  A68_519 ;    /* STRUCT(REF MODE264,BOOL)  */
struct A68t520{
struct A68t267  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_180)
};
typedef struct A68t520  A68_520 ;    /* STRUCT(MODE267,BOOL)  */
struct A68t521{
struct A68t279 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_181)
};
typedef struct A68t521  A68_521 ;    /* STRUCT(REF MODE279,BOOL)  */
struct A68t522{
struct A68t280 * I;
A68_BOOL  C;
A_PAD_BOOL(PAD_182)
};
typedef struct A68t522  A68_522 ;    /* STRUCT(REF MODE280,BOOL)  */
struct A68t523{
struct A68t282  R;
A68_BOOL  C;
A_PAD_BOOL(PAD_183)
};
typedef struct A68t523  A68_523 ;    /* STRUCT(MODE282,BOOL)  */
struct A68t524{
struct A68t281  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_184)
};
typedef struct A68t524  A68_524 ;    /* STRUCT(MODE281,BOOL)  */
struct A68t525{
struct A68t286 * T;
A68_BOOL  C;
A_PAD_BOOL(PAD_185)
};
typedef struct A68t525  A68_525 ;    /* STRUCT(REF MODE286,BOOL)  */
struct A68t526{
struct A68t283  T;
A68_BOOL  C;
A_PAD_BOOL(PAD_186)
};
typedef struct A68t526  A68_526 ;    /* STRUCT(MODE283,BOOL)  */
struct A68t527{
struct A68t294  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_187)
};
typedef struct A68t527  A68_527 ;    /* STRUCT(MODE294,BOOL)  */
struct A68t528{
struct A68t297  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_188)
};
typedef struct A68t528  A68_528 ;    /* STRUCT(REF MODE297,BOOL)  */
struct A68t529{
struct A68t296  T;
A68_BOOL  C;
A_PAD_BOOL(PAD_189)
};
typedef struct A68t529  A68_529 ;    /* STRUCT(MODE296,BOOL)  */
struct A68t530{
struct A68t298 * T;
A68_BOOL  C;
A_PAD_BOOL(PAD_190)
};
typedef struct A68t530  A68_530 ;    /* STRUCT(REF MODE298,BOOL)  */
struct A68t531{
struct A68t304 * Co;
A68_BOOL  C;
A_PAD_BOOL(PAD_191)
};
typedef struct A68t531  A68_531 ;    /* STRUCT(REF MODE304,BOOL)  */
struct A68t532{
struct A68t309 * Ua;
A68_BOOL  C;
A_PAD_BOOL(PAD_192)
};
typedef struct A68t532  A68_532 ;    /* STRUCT(REF MODE309,BOOL)  */
struct A68t533{
struct A68t320 * U;
A68_BOOL  C;
A_PAD_BOOL(PAD_193)
};
typedef struct A68t533  A68_533 ;    /* STRUCT(REF MODE320,BOOL)  */
struct A68t534{
struct A68t365 * U;
A68_BOOL  C;
A_PAD_BOOL(PAD_194)
};
typedef struct A68t534  A68_534 ;    /* STRUCT(REF MODE365,BOOL)  */
struct A68t535{
struct A68t305  U;
A68_BOOL  C;
A_PAD_BOOL(PAD_195)
};
typedef struct A68t535  A68_535 ;    /* STRUCT(MODE305,BOOL)  */
struct A68t536{
struct A68t349  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_196)
};
typedef struct A68t536  A68_536 ;    /* STRUCT(MODE349,BOOL)  */
struct A68t537{
struct A68t347  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_197)
};
typedef struct A68t537  A68_537 ;    /* STRUCT(REF MODE347,BOOL)  */
struct A68t538{
struct A68t345  I;
A68_BOOL  C;
A_PAD_BOOL(PAD_198)
};
typedef struct A68t538  A68_538 ;    /* STRUCT(MODE345,BOOL)  */
struct A68t539{
struct A68t366  D;
A68_BOOL  C;
A_PAD_BOOL(PAD_199)
};
typedef struct A68t539  A68_539 ;    /* STRUCT(MODE366,BOOL)  */
struct A68t540{
struct A68t351 * P;
A68_BOOL  C;
A_PAD_BOOL(PAD_200)
};
typedef struct A68t540  A68_540 ;    /* STRUCT(REF MODE351,BOOL)  */
struct A68t541{
struct A68t337 * P;
A68_BOOL  C;
A_PAD_BOOL(PAD_201)
};
typedef struct A68t541  A68_541 ;    /* STRUCT(REF MODE337,BOOL)  */
struct A68t542{
struct A68t338 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_202)
};
typedef struct A68t542  A68_542 ;    /* STRUCT(REF MODE338,BOOL)  */
struct A68t543{
struct A68t346 * N;
A68_BOOL  C;
A_PAD_BOOL(PAD_203)
};
typedef struct A68t543  A68_543 ;    /* STRUCT(REF MODE346,BOOL)  */
struct A68t544{
struct A68t339 * L;
A68_BOOL  C;
A_PAD_BOOL(PAD_204)
};
typedef struct A68t544  A68_544 ;    /* STRUCT(REF MODE339,BOOL)  */
struct A68t545{
struct A68t364 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_205)
};
typedef struct A68t545  A68_545 ;    /* STRUCT(REF MODE364,BOOL)  */
struct A68t546{
struct A68t354  S;
A68_BOOL  C;
A_PAD_BOOL(PAD_206)
};
typedef struct A68t546  A68_546 ;    /* STRUCT(MODE354,BOOL)  */
struct A68t547{
struct A68t353 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_207)
};
typedef struct A68t547  A68_547 ;    /* STRUCT(REF MODE353,BOOL)  */
struct A68t548{
struct A68t340 * M;
A68_BOOL  C;
A_PAD_BOOL(PAD_208)
};
typedef struct A68t548  A68_548 ;    /* STRUCT(REF MODE340,BOOL)  */
struct A68t549{
struct A68t341 * J;
A68_BOOL  C;
A_PAD_BOOL(PAD_209)
};
typedef struct A68t549  A68_549 ;    /* STRUCT(REF MODE341,BOOL)  */
struct A68t550{
struct A68t344 * J;
A68_BOOL  C;
A_PAD_BOOL(PAD_210)
};
typedef struct A68t550  A68_550 ;    /* STRUCT(REF MODE344,BOOL)  */
struct A68t551{
struct A68t335  S;
A68_BOOL  C;
A_PAD_BOOL(PAD_211)
};
typedef struct A68t551  A68_551 ;    /* STRUCT(MODE335,BOOL)  */
struct A68t552{
struct A68t334 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_212)
};
typedef struct A68t552  A68_552 ;    /* STRUCT(REF MODE334,BOOL)  */
struct A68t553{
struct A68t377  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_213)
};
typedef struct A68t553  A68_553 ;    /* STRUCT(MODE377,BOOL)  */
struct A68t554{
struct A68t379  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_214)
};
typedef struct A68t554  A68_554 ;    /* STRUCT(MODE379,BOOL)  */
struct A68t555{
struct A68t382  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_215)
};
typedef struct A68t555  A68_555 ;    /* STRUCT(REF MODE382,BOOL)  */
struct A68t556{
struct A68t381 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_216)
};
typedef struct A68t556  A68_556 ;    /* STRUCT(REF MODE381,BOOL)  */
struct A68t557{
struct A68t390  O;
A68_BOOL  C;
A_PAD_BOOL(PAD_217)
};
typedef struct A68t557  A68_557 ;    /* STRUCT(MODE390,BOOL)  */
struct A68t558{
struct A68t394 * Cl;
A68_BOOL  C;
A_PAD_BOOL(PAD_218)
};
typedef struct A68t558  A68_558 ;    /* STRUCT(REF MODE394,BOOL)  */
struct A68t559 ;

A_PROCEDURE(A68_VOID ,A68t560,(struct A68t258 ,struct A68t559 *,struct A68t517 *),(struct A68t258 ,struct A68t559 *,struct A68t517 *,void *));
typedef struct A68t560  A68_560 ;    /* PROC(MODE258,REF MODE559) MODE517 */

A_PROCEDURE(A68_VOID ,A68t561,(struct A68t261 *,struct A68t559 *,struct A68t518 *),(struct A68t261 *,struct A68t559 *,struct A68t518 *,void *));
typedef struct A68t561  A68_561 ;    /* PROC(REF MODE261,REF MODE559) MODE518 */

A_PROCEDURE(A68_VOID ,A68t562,(struct A68t264 *,struct A68t559 *,struct A68t519 *),(struct A68t264 *,struct A68t559 *,struct A68t519 *,void *));
typedef struct A68t562  A68_562 ;    /* PROC(REF MODE264,REF MODE559) MODE519 */

A_PROCEDURE(A68_VOID ,A68t563,(struct A68t267 ,struct A68t559 *,struct A68t520 *),(struct A68t267 ,struct A68t559 *,struct A68t520 *,void *));
typedef struct A68t563  A68_563 ;    /* PROC(MODE267,REF MODE559) MODE520 */

A_PROCEDURE(A68_VOID ,A68t564,(struct A68t279 *,struct A68t559 *,struct A68t521 *),(struct A68t279 *,struct A68t559 *,struct A68t521 *,void *));
typedef struct A68t564  A68_564 ;    /* PROC(REF MODE279,REF MODE559) MODE521 */

A_PROCEDURE(A68_VOID ,A68t565,(struct A68t280 *,struct A68t559 *,struct A68t522 *),(struct A68t280 *,struct A68t559 *,struct A68t522 *,void *));
typedef struct A68t565  A68_565 ;    /* PROC(REF MODE280,REF MODE559) MODE522 */

A_PROCEDURE(A68_VOID ,A68t566,(struct A68t282 ,struct A68t559 *,struct A68t523 *),(struct A68t282 ,struct A68t559 *,struct A68t523 *,void *));
typedef struct A68t566  A68_566 ;    /* PROC(MODE282,REF MODE559) MODE523 */

A_PROCEDURE(A68_VOID ,A68t567,(struct A68t281 ,struct A68t559 *,struct A68t524 *),(struct A68t281 ,struct A68t559 *,struct A68t524 *,void *));
typedef struct A68t567  A68_567 ;    /* PROC(MODE281,REF MODE559) MODE524 */

A_PROCEDURE(A68_VOID ,A68t568,(struct A68t286 *,struct A68t559 *,struct A68t525 *),(struct A68t286 *,struct A68t559 *,struct A68t525 *,void *));
typedef struct A68t568  A68_568 ;    /* PROC(REF MODE286,REF MODE559) MODE525 */

A_PROCEDURE(A68_VOID ,A68t569,(struct A68t283 ,struct A68t559 *,struct A68t526 *),(struct A68t283 ,struct A68t559 *,struct A68t526 *,void *));
typedef struct A68t569  A68_569 ;    /* PROC(MODE283,REF MODE559) MODE526 */

A_PROCEDURE(A68_VOID ,A68t570,(struct A68t294 ,struct A68t559 *,struct A68t527 *),(struct A68t294 ,struct A68t559 *,struct A68t527 *,void *));
typedef struct A68t570  A68_570 ;    /* PROC(MODE294,REF MODE559) MODE527 */

A_PROCEDURE(A68_VOID ,A68t571,(struct A68t297 ,struct A68t559 *,struct A68t528 *),(struct A68t297 ,struct A68t559 *,struct A68t528 *,void *));
typedef struct A68t571  A68_571 ;    /* PROC(REF MODE297,REF MODE559) MODE528 */

A_PROCEDURE(A68_VOID ,A68t572,(struct A68t296 ,struct A68t559 *,struct A68t529 *),(struct A68t296 ,struct A68t559 *,struct A68t529 *,void *));
typedef struct A68t572  A68_572 ;    /* PROC(MODE296,REF MODE559) MODE529 */

A_PROCEDURE(A68_VOID ,A68t573,(struct A68t298 *,struct A68t559 *,struct A68t530 *),(struct A68t298 *,struct A68t559 *,struct A68t530 *,void *));
typedef struct A68t573  A68_573 ;    /* PROC(REF MODE298,REF MODE559) MODE530 */

A_PROCEDURE(A68_VOID ,A68t574,(struct A68t304 *,struct A68t559 *,struct A68t531 *),(struct A68t304 *,struct A68t559 *,struct A68t531 *,void *));
typedef struct A68t574  A68_574 ;    /* PROC(REF MODE304,REF MODE559) MODE531 */

A_PROCEDURE(A68_VOID ,A68t575,(struct A68t309 *,struct A68t559 *,struct A68t532 *),(struct A68t309 *,struct A68t559 *,struct A68t532 *,void *));
typedef struct A68t575  A68_575 ;    /* PROC(REF MODE309,REF MODE559) MODE532 */

A_PROCEDURE(A68_VOID ,A68t576,(struct A68t320 *,struct A68t559 *,struct A68t533 *),(struct A68t320 *,struct A68t559 *,struct A68t533 *,void *));
typedef struct A68t576  A68_576 ;    /* PROC(REF MODE320,REF MODE559) MODE533 */

A_PROCEDURE(A68_VOID ,A68t577,(struct A68t365 *,struct A68t559 *,struct A68t534 *),(struct A68t365 *,struct A68t559 *,struct A68t534 *,void *));
typedef struct A68t577  A68_577 ;    /* PROC(REF MODE365,REF MODE559) MODE534 */

A_PROCEDURE(A68_VOID ,A68t578,(struct A68t305 ,struct A68t559 *,struct A68t535 *),(struct A68t305 ,struct A68t559 *,struct A68t535 *,void *));
typedef struct A68t578  A68_578 ;    /* PROC(MODE305,REF MODE559) MODE535 */

A_PROCEDURE(A68_VOID ,A68t579,(struct A68t349 ,struct A68t559 *,struct A68t536 *),(struct A68t349 ,struct A68t559 *,struct A68t536 *,void *));
typedef struct A68t579  A68_579 ;    /* PROC(MODE349,REF MODE559) MODE536 */

A_PROCEDURE(A68_VOID ,A68t580,(struct A68t347 ,struct A68t559 *,struct A68t537 *),(struct A68t347 ,struct A68t559 *,struct A68t537 *,void *));
typedef struct A68t580  A68_580 ;    /* PROC(REF MODE347,REF MODE559) MODE537 */

A_PROCEDURE(A68_VOID ,A68t581,(struct A68t345 ,struct A68t559 *,struct A68t538 *),(struct A68t345 ,struct A68t559 *,struct A68t538 *,void *));
typedef struct A68t581  A68_581 ;    /* PROC(MODE345,REF MODE559) MODE538 */

A_PROCEDURE(A68_VOID ,A68t582,(struct A68t366 ,struct A68t559 *,struct A68t539 *),(struct A68t366 ,struct A68t559 *,struct A68t539 *,void *));
typedef struct A68t582  A68_582 ;    /* PROC(MODE366,REF MODE559) MODE539 */

A_PROCEDURE(A68_VOID ,A68t583,(struct A68t351 *,struct A68t559 *,struct A68t540 *),(struct A68t351 *,struct A68t559 *,struct A68t540 *,void *));
typedef struct A68t583  A68_583 ;    /* PROC(REF MODE351,REF MODE559) MODE540 */

A_PROCEDURE(A68_VOID ,A68t584,(struct A68t337 *,struct A68t559 *,struct A68t541 *),(struct A68t337 *,struct A68t559 *,struct A68t541 *,void *));
typedef struct A68t584  A68_584 ;    /* PROC(REF MODE337,REF MODE559) MODE541 */

A_PROCEDURE(A68_VOID ,A68t585,(struct A68t338 *,struct A68t559 *,struct A68t542 *),(struct A68t338 *,struct A68t559 *,struct A68t542 *,void *));
typedef struct A68t585  A68_585 ;    /* PROC(REF MODE338,REF MODE559) MODE542 */

A_PROCEDURE(A68_VOID ,A68t586,(struct A68t346 *,struct A68t559 *,struct A68t543 *),(struct A68t346 *,struct A68t559 *,struct A68t543 *,void *));
typedef struct A68t586  A68_586 ;    /* PROC(REF MODE346,REF MODE559) MODE543 */

A_PROCEDURE(A68_VOID ,A68t587,(struct A68t339 *,struct A68t559 *,struct A68t544 *),(struct A68t339 *,struct A68t559 *,struct A68t544 *,void *));
typedef struct A68t587  A68_587 ;    /* PROC(REF MODE339,REF MODE559) MODE544 */

A_PROCEDURE(A68_VOID ,A68t588,(struct A68t364 *,struct A68t559 *,struct A68t545 *),(struct A68t364 *,struct A68t559 *,struct A68t545 *,void *));
typedef struct A68t588  A68_588 ;    /* PROC(REF MODE364,REF MODE559) MODE545 */

A_PROCEDURE(A68_VOID ,A68t589,(struct A68t354 ,struct A68t559 *,struct A68t546 *),(struct A68t354 ,struct A68t559 *,struct A68t546 *,void *));
typedef struct A68t589  A68_589 ;    /* PROC(MODE354,REF MODE559) MODE546 */

A_PROCEDURE(A68_VOID ,A68t590,(struct A68t353 *,struct A68t559 *,struct A68t547 *),(struct A68t353 *,struct A68t559 *,struct A68t547 *,void *));
typedef struct A68t590  A68_590 ;    /* PROC(REF MODE353,REF MODE559) MODE547 */

A_PROCEDURE(A68_VOID ,A68t591,(struct A68t340 *,struct A68t559 *,struct A68t548 *),(struct A68t340 *,struct A68t559 *,struct A68t548 *,void *));
typedef struct A68t591  A68_591 ;    /* PROC(REF MODE340,REF MODE559) MODE548 */

A_PROCEDURE(A68_VOID ,A68t592,(struct A68t341 *,struct A68t559 *,struct A68t549 *),(struct A68t341 *,struct A68t559 *,struct A68t549 *,void *));
typedef struct A68t592  A68_592 ;    /* PROC(REF MODE341,REF MODE559) MODE549 */

A_PROCEDURE(A68_VOID ,A68t593,(struct A68t344 *,struct A68t559 *,struct A68t550 *),(struct A68t344 *,struct A68t559 *,struct A68t550 *,void *));
typedef struct A68t593  A68_593 ;    /* PROC(REF MODE344,REF MODE559) MODE550 */

A_PROCEDURE(A68_VOID ,A68t594,(struct A68t335 ,struct A68t559 *,struct A68t551 *),(struct A68t335 ,struct A68t559 *,struct A68t551 *,void *));
typedef struct A68t594  A68_594 ;    /* PROC(MODE335,REF MODE559) MODE551 */

A_PROCEDURE(A68_VOID ,A68t595,(struct A68t334 *,struct A68t559 *,struct A68t552 *),(struct A68t334 *,struct A68t559 *,struct A68t552 *,void *));
typedef struct A68t595  A68_595 ;    /* PROC(REF MODE334,REF MODE559) MODE552 */

A_PROCEDURE(A68_VOID ,A68t596,(struct A68t377 ,struct A68t559 *,struct A68t553 *),(struct A68t377 ,struct A68t559 *,struct A68t553 *,void *));
typedef struct A68t596  A68_596 ;    /* PROC(MODE377,REF MODE559) MODE553 */

A_PROCEDURE(A68_VOID ,A68t597,(struct A68t379 ,struct A68t559 *,struct A68t554 *),(struct A68t379 ,struct A68t559 *,struct A68t554 *,void *));
typedef struct A68t597  A68_597 ;    /* PROC(MODE379,REF MODE559) MODE554 */

A_PROCEDURE(A68_VOID ,A68t598,(struct A68t382 ,struct A68t559 *,struct A68t555 *),(struct A68t382 ,struct A68t559 *,struct A68t555 *,void *));
typedef struct A68t598  A68_598 ;    /* PROC(REF MODE382,REF MODE559) MODE555 */

A_PROCEDURE(A68_VOID ,A68t599,(struct A68t381 *,struct A68t559 *,struct A68t556 *),(struct A68t381 *,struct A68t559 *,struct A68t556 *,void *));
typedef struct A68t599  A68_599 ;    /* PROC(REF MODE381,REF MODE559) MODE556 */

A_PROCEDURE(A68_VOID ,A68t600,(struct A68t390 ,struct A68t559 *,struct A68t557 *),(struct A68t390 ,struct A68t559 *,struct A68t557 *,void *));
typedef struct A68t600  A68_600 ;    /* PROC(MODE390,REF MODE559) MODE557 */

A_PROCEDURE(A68_VOID ,A68t601,(struct A68t394 *,struct A68t559 *,struct A68t97 ,struct A68t558 *),(struct A68t394 *,struct A68t559 *,struct A68t97 ,struct A68t558 *,void *));
typedef struct A68t601  A68_601 ;    /* PROC(REF MODE394,REF MODE559,MODE97) MODE558 */
struct A68t559{
struct A68t560  Attr;
struct A68t561  Attrstr;
struct A68t562  Attrdec;
struct A68t563  Formula;
struct A68t564  Formulas;
struct A68t565  Intdec;
struct A68t566  Range;
struct A68t567  Formularange;
struct A68t568  Tstr;
struct A68t569  Type;
struct A68t570  Alternative;
struct A68t571  Alternatives;
struct A68t572  Typebody;
struct A68t573  Typedec;
struct A68t574  Constdec;
struct A68t575  Ualts;
struct A68t576  Ustr;
struct A68t577  Uchoices;
struct A68t578  Unit;
struct A68t579  Mparam;
struct A68t580  Macparams;
struct A68t581  Instance;
struct A68t582  Declaration;
struct A68t583  Printitems;
struct A68t584  Print;
struct A68t585  Fault;
struct A68t586  Names;
struct A68t587  Let;
struct A68t588  Seqchoices;
struct A68t589  Seqstep;
struct A68t590  Sequence;
struct A68t591  Make;
struct A68t592  Join;
struct A68t593  Joins;
struct A68t594  Step;
struct A68t595  Series;
struct A68t596  Fnbody;
struct A68t597  Macspec;
struct A68t598  Macspecs;
struct A68t599  Fndec;
struct A68t600  Outer;
struct A68t601  Closure;
struct A68t559 * Rest;
};
typedef struct A68t559  A68_559 ;    /* STRUCT(MODE560,MODE561,MODE562,MODE563,MODE564,MODE565,MODE566,MODE567,MODE568,MODE569,MODE570,MODE571,MODE572,MODE573,MODE574,MODE575,MODE576,MODE577,MODE578,MODE579,MODE580,MODE581,MODE582,MODE583,MODE584,MODE585,MODE586,MODE587,MODE588,MODE589,MODE590,MODE591,MODE592,MODE593,MODE594,MODE595,MODE596,MODE597,MODE598,MODE599,MODE600,MODE601,REF MODE559)  */
struct A68t603 ;

A_PROCEDURE(struct A68t559 *,A68t602,(struct A68t559 *,struct A68t603 ),(struct A68t559 *,struct A68t603 ,void *));
typedef struct A68t602  A68_602 ;    /* PROC(REF MODE559,MODE603) REF MODE559 */
A_VECTOR(struct A68t604 ,A68t603);
typedef struct A68t603  A68_603 ;    /* VECTOR [] MODE604 */
struct A68t604 { A68_INT mode; union {
struct A68t560  mode1;
struct A68t561  mode2;
struct A68t562  mode3;
struct A68t563  mode4;
struct A68t564  mode5;
struct A68t565  mode6;
struct A68t566  mode7;
struct A68t567  mode8;
struct A68t568  mode9;
struct A68t569  mode10;
struct A68t570  mode11;
struct A68t571  mode12;
struct A68t572  mode13;
struct A68t573  mode14;
struct A68t574  mode15;
struct A68t575  mode16;
struct A68t576  mode17;
struct A68t577  mode18;
struct A68t578  mode19;
struct A68t579  mode20;
struct A68t580  mode21;
struct A68t581  mode22;
struct A68t582  mode23;
struct A68t583  mode24;
struct A68t584  mode25;
struct A68t585  mode26;
struct A68t586  mode27;
struct A68t587  mode28;
struct A68t588  mode29;
struct A68t589  mode30;
struct A68t590  mode31;
struct A68t591  mode32;
struct A68t592  mode33;
struct A68t593  mode34;
struct A68t594  mode35;
struct A68t595  mode36;
struct A68t596  mode37;
struct A68t597  mode38;
struct A68t598  mode39;
struct A68t599  mode40;
struct A68t600  mode41;
struct A68t601  mode42;
} data; };
typedef struct A68t604  A68_604 ;    /* UNION(MODE560,MODE561,MODE562,MODE563,MODE564,MODE565,MODE566,MODE567,MODE568,MODE569,MODE570,MODE571,MODE572,MODE573,MODE574,MODE575,MODE576,MODE577,MODE578,MODE579,MODE580,MODE581,MODE582,MODE583,MODE584,MODE585,MODE586,MODE587,MODE588,MODE589,MODE590,MODE591,MODE592,MODE593,MODE594,MODE595,MODE596,MODE597,MODE598,MODE599,MODE600,MODE601)  */

A_PROCEDURE(A68_VOID ,A68t605,(struct A68t559 *),(struct A68t559 *,void *));
typedef struct A68t605  A68_605 ;    /* PROC(REF MODE559) VOID */

A_PROCEDURE(A68_VOID ,A68t606,(struct A68t394 *,struct A68t97 ,struct A68t558 *),(struct A68t394 *,struct A68t97 ,struct A68t558 *,void *));
typedef struct A68t606  A68_606 ;    /* PROC(REF MODE394,MODE97) MODE558 */

A_PROCEDURE(A68_VOID ,A68t607,(struct A68t394 *,struct A68t256 *,A68_BOOL ,struct A68t97 ,struct A68t558 *),(struct A68t394 *,struct A68t256 *,A68_BOOL ,struct A68t97 ,struct A68t558 *,void *));
typedef struct A68t607  A68_607 ;    /* PROC(REF MODE394,REF MODE256,BOOL,MODE97) MODE558 */

A_PROCEDURE(A68_VOID ,A68t608,(struct A68t394 *,struct A68t173 ,struct A68t97 ,struct A68t558 *),(struct A68t394 *,struct A68t173 ,struct A68t97 ,struct A68t558 *,void *));
typedef struct A68t608  A68_608 ;    /* PROC(REF MODE394,MODE173,MODE97) MODE558 */

A_PROCEDURE(A68_VOID ,A68t609,(struct A68t173 *),(struct A68t173 *,void *));
typedef struct A68t609  A68_609 ;    /* PROC MODE173 */

A_PROCEDURE(A68_VOID ,A68t610,(struct A68t390 ,struct A68t394 *,struct A68t173 ,struct A68t97 ,struct A68t557 *),(struct A68t390 ,struct A68t394 *,struct A68t173 ,struct A68t97 ,struct A68t557 *,void *));
typedef struct A68t610  A68_610 ;    /* PROC(MODE390,REF MODE394,MODE173,MODE97) MODE557 */
struct A68t611{
struct A68t394 * Closure;
struct A68t102  Head_data;
};
typedef struct A68t611  A68_611 ;    /* STRUCT(REF MODE394,REF MODE102)  */

A_PROCEDURE(A68_VOID ,A68t613,(struct A68t119 ,struct A68t97 ,struct A68t430 *),(struct A68t119 ,struct A68t97 ,struct A68t430 *,void *));
typedef struct A68t613  A68_613 ;    /* PROC(MODE119,MODE97) MODE430 */
struct A68t612{
struct A68t119  Getchar;
struct A68t613  Initem;
struct A68t614 * Ids_lookup;
};
typedef struct A68t612  A68_612 ;    /* STRUCT(MODE119,MODE613,REF REF MODE614)  */
A_VECTOR(struct A68t102 ,A68t614);
typedef struct A68t614  A68_614 ;    /* VECTOR [] REF MODE102 */

A_PROCEDURE(A68_INT ,A68t615,(struct A68t612 ,struct A68t97 ),(struct A68t612 ,struct A68t97 ,void *));
typedef struct A68t615  A68_615 ;    /* PROC(MODE612,MODE97) INT */

A_PROCEDURE(A68_BOOL ,A68t616,(struct A68t612 ,struct A68t97 ),(struct A68t612 ,struct A68t97 ,void *));
typedef struct A68t616  A68_616 ;    /* PROC(MODE612,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t617,(struct A68t612 ,struct A68t97 ,struct A68t431 *),(struct A68t612 ,struct A68t97 ,struct A68t431 *,void *));
typedef struct A68t617  A68_617 ;    /* PROC(MODE612,MODE97) MODE431 */

A_PROCEDURE(A68_VOID ,A68t618,(struct A68t612 ,struct A68t97 ,A68_VC *),(struct A68t612 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t618  A68_618 ;    /* PROC(MODE612,MODE97) MODE26 */

A_PROCEDURE(A68_CHAR ,A68t619,(struct A68t612 ,struct A68t97 ),(struct A68t612 ,struct A68t97 ,void *));
typedef struct A68t619  A68_619 ;    /* PROC(MODE612,MODE97) CHAR */

A_PROCEDURE(A68_VOID ,A68t620,(struct A68t612 ,struct A68t97 ,A68_VC *),(struct A68t612 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t620  A68_620 ;    /* PROC(MODE612,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t621,(A68_CHAR ,struct A68t428 ,struct A68t97 ),(A68_CHAR ,struct A68t428 ,struct A68t97 ,void *));
typedef struct A68t621  A68_621 ;    /* PROC(CHAR,MODE428,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t622,(A68_INT ,struct A68t428 ,struct A68t97 ),(A68_INT ,struct A68t428 ,struct A68t97 ,void *));
typedef struct A68t622  A68_622 ;    /* PROC(INT,MODE428,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t623,(A68_VC ,struct A68t428 ,struct A68t97 ),(A68_VC ,struct A68t428 ,struct A68t97 ,void *));
typedef struct A68t623  A68_623 ;    /* PROC(REF MODE26,MODE428,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t624,(A68_INT ,A68_BOOL ,struct A68t428 ,struct A68t97 ),(A68_INT ,A68_BOOL ,struct A68t428 ,struct A68t97 ,void *));
typedef struct A68t624  A68_624 ;    /* PROC(INT,BOOL,MODE428,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t625,(A68_BOOL ,struct A68t428 ,struct A68t97 ),(A68_BOOL ,struct A68t428 ,struct A68t97 ,void *));
typedef struct A68t625  A68_625 ;    /* PROC(BOOL,MODE428,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t626,(struct A68t119 ,struct A68t97 ,struct A68t612 *),(struct A68t119 ,struct A68t97 ,struct A68t612 *,void *));
typedef struct A68t626  A68_626 ;    /* PROC(MODE119,MODE97) MODE612 */

A_PROCEDURE(A68_VOID ,A68t627,(struct A68t612 ,struct A68t97 ,struct A68t611 *),(struct A68t612 ,struct A68t97 ,struct A68t611 *,void *));
typedef struct A68t627  A68_627 ;    /* PROC(MODE612,MODE97) MODE611 */

A_PROCEDURE(A68_VOID ,A68t628,(struct A68t36 ,A68_BOOL ,A68_BOOL ,struct A68t97 ,struct A68t428 *),(struct A68t36 ,A68_BOOL ,A68_BOOL ,struct A68t97 ,struct A68t428 *,void *));
typedef struct A68t628  A68_628 ;    /* PROC(MODE36,BOOL,BOOL,MODE97) MODE428 */

A_PROCEDURE(A68_VOID ,A68t629,(struct A68t611 ,struct A68t428 ,struct A68t97 ),(struct A68t611 ,struct A68t428 ,struct A68t97 ,void *));
typedef struct A68t629  A68_629 ;    /* PROC(MODE611,MODE428,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t630,(struct A68t428 ,struct A68t97 ),(struct A68t428 ,struct A68t97 ,void *));
typedef struct A68t630  A68_630 ;    /* PROC(MODE428,MODE97) VOID */
struct A68t631 ;

A_PROCEDURE(A68_VOID ,A68t632,(struct A68t631 ,A68_BOOL ,struct A68t97 ),(struct A68t631 ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t632  A68_632 ;    /* PROC(MODE631,BOOL,MODE97) VOID */
struct A68t631{
A68_VC  Name;
A68_VC  Default;
A68_VC  Value;
A68_INT  Sort;
A_PAD_INT(PAD_219)
struct A68t632  Set;
};
typedef struct A68t631  A68_631 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,INT,MODE632)  */

A_PROCEDURE(A68_VOID ,A68t633,(A68_VC ,A68_VC ,A68_INT ,struct A68t632 ),(A68_VC ,A68_VC ,A68_INT ,struct A68t632 ,void *));
typedef struct A68t633  A68_633 ;    /* PROC(MODE26,MODE26,INT,MODE632) VOID */

A_PROCEDURE(A68_BOOL ,A68t634,(A68_VC ),(A68_VC ,void *));
typedef struct A68t634  A68_634 ;    /* PROC(MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t635,(A68_VC ,A68_VC ,struct A68t97 ),(A68_VC ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t635  A68_635 ;    /* PROC(MODE26,MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t636,(struct A68t467 ,A68_BOOL ,struct A68t462 ,struct A68t462 ,struct A68t467 *),(struct A68t467 ,A68_BOOL ,struct A68t462 ,struct A68t462 ,struct A68t467 *,void *));
typedef struct A68t636  A68_636 ;    /* PROC(REF MODE467,BOOL,MODE462,MODE462) REF MODE467 */
struct A68t638 ;
struct A68t639 ;

A_PROCEDURE(A68_VOID ,A68t637,(struct A68t438 ,A68_BOOL ,A68_VC ,A68_VC ,struct A68t638 ,struct A68t630 ,struct A68t158 ,struct A68t639 ,struct A68t97 ),(struct A68t438 ,A68_BOOL ,A68_VC ,A68_VC ,struct A68t638 ,struct A68t630 ,struct A68t158 ,struct A68t639 ,struct A68t97 ,void *));
typedef struct A68t637  A68_637 ;    /* PROC(REF MODE438,BOOL,REF MODE26,REF MODE26,MODE638,MODE630,MODE158,MODE639,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t638,(struct A68t438 ,struct A68t97 ,struct A68t611 *),(struct A68t438 ,struct A68t97 ,struct A68t611 *,void *));
typedef struct A68t638  A68_638 ;    /* PROC(REF MODE438,MODE97) MODE611 */

A_PROCEDURE(A68_BOOL ,A68t639,(struct A68t394 *,struct A68t97 ),(struct A68t394 *,struct A68t97 ,void *));
typedef struct A68t639  A68_639 ;    /* PROC(REF MODE394,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t640,(struct A68t158 ),(struct A68t158 ,void *));
typedef struct A68t640  A68_640 ;    /* PROC(MODE158) VOID */

A_PROCEDURE(A68_VOID ,A68t641,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t641  A68_641 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,58,A68t642);
typedef struct A68t642  A68_642 ;    /* STRUCT 58 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t643);
typedef struct A68t643  A68_643 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t644);
typedef struct A68t644  A68_644 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t645);
typedef struct A68t645  A68_645 ;    /* STRUCT 5 CHAR */

A_PROCEDURE(A68_VOID ,A68t646,(struct A68t419 *,struct A68t127 *,A68_VC ,struct A68t97 ),(struct A68t419 *,struct A68t127 *,A68_VC ,struct A68t97 ,void *));
typedef struct A68t646  A68_646 ;    /* PROC(REF MODE419,REF MODE127,MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t647,(struct A68t438 ,A68_BOOL ,struct A68t97 ),(struct A68t438 ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t647  A68_647 ;    /* PROC(REF MODE438,BOOL,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,8,A68t648);
typedef struct A68t648  A68_648 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,42,A68t649);
typedef struct A68t649  A68_649 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(A68_VC ,3,A68t650);
typedef struct A68t650  A68_650 ;    /* STRUCT 3 MODE26 */
A_ISTRUCT(A68_CHAR ,13,A68t651);
typedef struct A68t651  A68_651 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t652);
typedef struct A68t652  A68_652 ;    /* STRUCT 3 MODE52 */
A_ISTRUCT(A68_CHAR ,14,A68t653);
typedef struct A68t653  A68_653 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_VC ,4,A68t654);
typedef struct A68t654  A68_654 ;    /* STRUCT 4 MODE26 */
A_ISTRUCT(A68_CHAR ,19,A68t655);
typedef struct A68t655  A68_655 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_VC ,2,A68t656);
typedef struct A68t656  A68_656 ;    /* STRUCT 2 MODE26 */
A_ISTRUCT(A68_CHAR ,3,A68t657);
typedef struct A68t657  A68_657 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(struct A68t52 ,6,A68t658);
typedef struct A68t658  A68_658 ;    /* STRUCT 6 MODE52 */

A_PROCEDURE(A68_BOOL ,A68t659,(struct A68t558 ,A68_VC ,A68_VC ),(struct A68t558 ,A68_VC ,A68_VC ,void *));
typedef struct A68t659  A68_659 ;    /* PROC(MODE558,MODE26,MODE26) BOOL */
A_ISTRUCT(struct A68t52 ,5,A68t660);
typedef struct A68t660  A68_660 ;    /* STRUCT 5 MODE52 */
A_ISTRUCT(A68_CHAR ,21,A68t661);
typedef struct A68t661  A68_661 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t662);
typedef struct A68t662  A68_662 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t663);
typedef struct A68t663  A68_663 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t664);
typedef struct A68t664  A68_664 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t665);
typedef struct A68t665  A68_665 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,32,A68t666);
typedef struct A68t666  A68_666 ;    /* STRUCT 32 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t667);
typedef struct A68t667  A68_667 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,25,A68t668);
typedef struct A68t668  A68_668 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t669);
typedef struct A68t669  A68_669 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t670);
typedef struct A68t670  A68_670 ;    /* STRUCT 4 MODE52 */
A_ISTRUCT(A68_CHAR ,2,A68t671);
typedef struct A68t671  A68_671 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_VC ,7,A68t672);
typedef struct A68t672  A68_672 ;    /* STRUCT 7 MODE26 */

A_PROCEDURE(A68_VOID ,A68t673,(A68_BOOL ,struct A68t102 *),(A68_BOOL ,struct A68t102 *,void *));
typedef struct A68t673  A68_673 ;    /* PROC(BOOL) MODE102 */
A_ISTRUCT(A68_VC ,2,A68t674);
typedef struct A68t674  A68_674 ;    /* STRUCT 2 REF MODE26 */
A_ISTRUCT(A68_CHAR ,54,A68t675);
typedef struct A68t675  A68_675 ;    /* STRUCT 54 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t676);
typedef struct A68t676  A68_676 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,36,A68t677);
typedef struct A68t677  A68_677 ;    /* STRUCT 36 CHAR */
A_ISTRUCT(A68_CHAR ,26,A68t678);
typedef struct A68t678  A68_678 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t679);
typedef struct A68t679  A68_679 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t680);
typedef struct A68t680  A68_680 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t681);
typedef struct A68t681  A68_681 ;    /* STRUCT 2 MODE52 */

A_PROCEDURE(A68_VOID ,A68t682,(struct A68t467 ,struct A68t467 *),(struct A68t467 ,struct A68t467 *,void *));
typedef struct A68t682  A68_682 ;    /* PROC(REF MODE467) REF MODE467 */
A_ISTRUCT(struct A68t436 ,2,A68t683);
typedef struct A68t683  A68_683 ;    /* STRUCT 2 MODE436 */
A_ISTRUCT(A68_CHAR ,338,A68t684);
typedef struct A68t684  A68_684 ;    /* STRUCT 338 CHAR */
A_ISTRUCT(A68_CHAR ,305,A68t685);
typedef struct A68t685  A68_685 ;    /* STRUCT 305 CHAR */
A_ISTRUCT(A68_CHAR ,64,A68t686);
typedef struct A68t686  A68_686 ;    /* STRUCT 64 CHAR */
A_ISTRUCT(A68_CHAR ,33,A68t687);
typedef struct A68t687  A68_687 ;    /* STRUCT 33 CHAR */
A_ISTRUCT(A68_CHAR ,161,A68t688);
typedef struct A68t688  A68_688 ;    /* STRUCT 161 CHAR */
A_ISTRUCT(struct A68t463 ,5,A68t689);
typedef struct A68t689  A68_689 ;    /* STRUCT 5 MODE463 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from checksim --- */
extern A68_BOOL  DJBAELA_check_sim_closure(struct A68t394 *,struct A68t97 );
/* --- End of imports from checksim --- */


/* --- Imports from asscommands --- */
extern A68_VOID  HVTBTRN_make_asscommands(struct A68t467 ,A68_BOOL ,struct A68t462 ,struct A68t462 ,A68_467 *);
extern A68_VOID  LKVBTRN_transform_prelude(struct A68t438 ,A68_BOOL ,A68_VC ,A68_VC ,struct A68t638 ,struct A68t630 ,struct A68t158 ,struct A68t639 ,struct A68t97 );
/* --- End of imports from asscommands --- */


/* --- Imports from variables --- */
#define YKCAOST_env_var 1
#define ALCAOST_bool_var 3
extern A68_VC  GLCAOST_true_var;
extern A68_VC  JLCAOST_false_var;
extern A68_VOID  QLCAOST_add_var(A68_VC ,A68_VC ,A68_INT ,struct A68t632 );
extern A68_VOID  LMCAOST_default_set_var(struct A68t631 ,A68_BOOL ,struct A68t97 );
extern A68_VOID  FNCAOST_get_var(A68_VC ,A68_VC *);
extern A68_BOOL  SNCAOST_var_unset(A68_VC );
extern A68_VOID  TOCAOST_set_var(A68_VC ,A68_VC ,struct A68t97 );
/* --- End of imports from variables --- */


/* --- Imports from openinterface --- */
#define CQCATRN_packed_format A68_TRUE
extern A68_VOID  FBGATRN_write_signature(struct A68t36 ,A68_BOOL ,A68_BOOL ,struct A68t97 ,A68_428 *);
extern A68_VOID  RLFATRN_write_closure(struct A68t611 ,struct A68t428 ,struct A68t97 );
extern A68_VOID  KCGATRN_finish_write_closure(struct A68t428 ,struct A68t97 );
/* --- End of imports from openinterface --- */


/* --- Imports from reform --- */
/* --- End of imports from reform --- */


/* --- Imports from multilets --- */
/* --- End of imports from multilets --- */


/* --- Imports from multimakes --- */
extern A68_VOID  YTEBTRN_transform_multimakes(struct A68t394 *,struct A68t173 ,struct A68t97 ,A68_558 *);
/* --- End of imports from multimakes --- */


/* --- Imports from portname --- */
extern A68_VOID  EWCBTRN_transform_portnames(struct A68t394 *,struct A68t97 ,A68_558 *);
/* --- End of imports from portname --- */


/* --- Imports from joins --- */
extern A68_VOID  FVCBTRN_transform_joins(struct A68t394 *,struct A68t173 ,struct A68t97 ,A68_558 *);
/* --- End of imports from joins --- */


/* --- Imports from timescale --- */
extern A68_VOID  NQBBTRN_transform_timescale(struct A68t394 *,struct A68t97 ,A68_558 *);
/* --- End of imports from timescale --- */


/* --- Imports from sequence --- */
extern A68_VOID  AUYATRN_transform_sequences(struct A68t394 *,struct A68t97 ,A68_558 *);
/* --- End of imports from sequence --- */


/* --- Imports from fntype --- */
extern A68_VOID  HVVATRN_transform_fntypes(struct A68t394 *,struct A68t173 ,struct A68t97 ,A68_558 *);
/* --- End of imports from fntype --- */


/* --- Imports from macro --- */
extern A68_VOID  CXQATRN_expand(struct A68t394 *,struct A68t256 *,A68_BOOL ,struct A68t97 ,A68_558 *);
/* --- End of imports from macro --- */


/* --- Imports from import --- */
extern A68_VOID  MIOATRN_transform_imports(struct A68t394 *,struct A68t97 ,A68_558 *);
/* --- End of imports from import --- */


/* --- Imports from transformprocs --- */
/* --- End of imports from transformprocs --- */


/* --- Imports from closureprocs --- */
/* --- End of imports from closureprocs --- */


/* --- Imports from kernelreader --- */
extern A68_BOOL  ZCFAOST_is_openrnd(struct A68t437 );
extern A68_436  CJFAOST_fnname_syntax;
extern A68_BOOL  HKFAOST_is_fnname(struct A68t437 );
extern A68_VOID  LKFAOST_get_fnname(struct A68t437 ,struct A68t97 ,A68_VC *);
extern A68_436  HNFAOST_filename_syntax;
extern A68_BOOL  SNFAOST_is_filename(struct A68t437 );
extern A68_VOID  XNFAOST_get_filename(struct A68t437 ,A68_VC ,struct A68t97 ,A68_149 *);
extern A68_BOOL  FRFAOST_is_ctname(struct A68t437 );
extern A68_VOID  URFAOST_get_ctname(struct A68t438 ,A68_INT *,A68_VC ,struct A68t97 ,A68_111 *);
/* --- End of imports from kernelreader --- */


/* --- Imports from command --- */
extern A68_457  XMDAOST_normalaccess;
extern A68_457  BNDAOST_hiddenaccess;
extern A68_456  ZNDAOST_continue;
extern A68_477  GQDAOST_add;
extern A68_VOID  ARDAOST_makecommands(struct A68t467 ,A68_467 *);
extern A68_465 * NSDAOST_make_group(A68_VC ,A68_VC ,struct A68t457 ,struct A68t467 );
/* --- End of imports from command --- */


/* --- Imports from commandsyntax --- */
extern A68_436  SRAAOST_noparameters;
extern A68_VOID  ATAAOST_prod(struct A68t435 ,A68_434 *);
extern A68_VOID  LTAAOST_opt(struct A68t436 ,A68_434 *);
/* --- End of imports from commandsyntax --- */


/* --- Imports from assclosure --- */
extern A68_VOID  UQDBELA_title(A68_VC *);
extern A68_INT  SSDBELA_create_closure(struct A68t218 ,struct A68t97 );
extern A68_394 * FWDBELA_generate_closure(struct A68t419 *,A68_BOOL ,struct A68t97 );
extern A68_394 * MBEBELA_get_allimports(struct A68t394 *,struct A68t97 );
extern A68_419 * BWDBELA_nilclosureseed;
extern A68_VOID  WBEBELA_write_closureseeds(struct A68t419 *,struct A68t428 ,struct A68t97 );
/* --- End of imports from assclosure --- */


/* --- Imports from assmodes --- */
extern A68_VC  TTCAOST_nullid;
extern A68_256 * LAAATRN_nilids;
/* --- End of imports from assmodes --- */


/* --- Imports from libinterface --- */
extern A68_VOID  CIBBELA_nullupdater(A68_INT ,A68_INT ,struct A68t97 );
extern A68_VOID  HIBBELA_open_library(A68_VC ,struct A68t245 ,struct A68t97 );
extern A68_VOID  OJBBELA_finish_library(struct A68t97 );
extern A68_BOOL  QJBBELA_save_library(struct A68t97 );
extern A68_VOID  ZLBBELA_zero_ctnos(void);
extern A68_INT  SOBBELA_closure_details(struct A68t218 ,A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t97 );
/* --- End of imports from libinterface --- */


/* --- Imports from libmodes --- */
extern A68_216 * HXJAELA_library;
extern A68_VOID  UAKAELA_ctos(struct A68t218 ,A68_VC *);
extern A68_VOID  OFKAELA_check_selected(struct A68t111 ,struct A68t97 ,A68_218 *);
/* --- End of imports from libmodes --- */


/* --- Imports from ioprocs --- */
extern A68_VOID  SNGAOST_banner(A68_VC );
/* --- End of imports from ioprocs --- */


/* --- Imports from options --- */
extern A68_BOOL  EBAAOST_(struct A68t173 ,struct A68t173 );
extern A68_173  OCAAOST_null_options;
/* --- End of imports from options --- */


/* --- Imports from testmode --- */
extern A68_173  OHBAOST_testmode;
extern A68_VOID  JIBAOST_version_str(A68_INT ,A68_VC *);
extern A68_INT  PIBAOST_testmode_seconds(A68_INT );
/* --- End of imports from testmode --- */


/* --- Imports from osinterface --- */
extern A68_129  TNBAOSI_write_access;
extern A68_129  BOBAOSI_update_access;
extern A68_129  FOBAOSI_update_truncate_access;
#define HDAAOST_block_update_access BOBAOSI_update_access
#define IDAAOST_block_update_truncate_access FOBAOSI_update_truncate_access
extern A68_127 * FQBAOSI_open_file(A68_VC ,struct A68t129 ,struct A68t97 );
extern A68_VOID  XQBAOSI_close_file(struct A68t127 *,struct A68t97 );
extern A68_VOID  YPBAOSI_file_name(struct A68t127 *,A68_VC *);
extern A68_VOID  JSBAOSI_write_buffer(struct A68t127 *,A68_VC ,struct A68t97 ,A68_35 *);
#include <stdlib.h>
#define EXIT(status) exit(A_INT_int(status))

#define BZBAOSI_exit EXIT
extern A68_INT  IACAOSI_execute_os_command(A68_VC ,struct A68t97 );
extern A68_INT  ZACAOSI_get_cpu_time(void);
extern A68_VOID  TNCAOSI_parse_filename(A68_VC ,A68_VC ,struct A68t97 ,A68_149 *);
extern int A_argc;
extern char **A_argv;
#define A_prelude(argc,argv) A_argc=argc; A_argv = argv

#define VPCAOSI_prelude A_prelude
#include "Alibrary.h"

#define PBCAOSI_garbage_collect Agc_collect
#include <math.h>

#define GQAAOST_sqrt sqrt
extern A68_34 * KEAAOST_screen;
extern A68_VOID  SOAAOST_flt_if_interrupted(struct A68t97 );
/* --- End of imports from osinterface --- */


/* --- Imports from basics --- */
extern A68_INT  DZCAOST_seconds(void);
extern A68_VOID  QDDAOST_date_time(A68_INT ,A68_VC *);
extern A68_VC  YLDAOST_assfile_type;
/* --- End of imports from basics --- */


/* --- Imports from messageproc --- */
extern A68_VOID  ZAAAOSI_makervc(A68_VC ,A68_VC *);
extern A68_92  WHAAOSI_user;
extern A68_92  CIAAOSI_log;
extern A68_BOOL  TKAAOSI_error_msg(struct A68t106 );
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VC  EOAAOSL_nullstr;
extern A68_VOID  JBAAOSI_concat(struct A68t46 ,A68_VC *);
extern A68_VOID  ZXAAOSL_intwidth(A68_INT ,A68_INT ,A68_57 *);
extern A68_VOID  XYAAOSL_after(A68_INT ,A68_62 *);
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void WIBAELA(void);   /* checksim */
extern void ZHRBTRN(void);   /* asscommands */
extern void TKCAOST(void);   /* variables */
extern void TPCATRN(void);   /* openinterface */
extern void LHFBTRN(void);   /* reform */
extern void XUEBTRN(void);   /* multilets */
extern void YJEBTRN(void);   /* multimakes */
extern void XVCBTRN(void);   /* portname */
extern void NTBBTRN(void);   /* joins */
extern void CPABTRN(void);   /* timescale */
extern void TTYATRN(void);   /* sequence */
extern void SUVATRN(void);   /* fntype */
extern void QSOATRN(void);   /* macro */
extern void FIOATRN(void);   /* import */
extern void IHJATRN(void);   /* transformprocs */
extern void SKCATRN(void);   /* closureprocs */
extern void TXEAOST(void);   /* kernelreader */
extern void FMDAOST(void);   /* command */
extern void LRAAOST(void);   /* commandsyntax */
extern void MQDBELA(void);   /* assclosure */
extern void BAAATRN(void);   /* assmodes */
extern void SOABELA(void);   /* libinterface */
extern void FTJAELA(void);   /* libmodes */
extern void TIGAOST(void);   /* ioprocs */
extern void BAAAOST(void);   /* options */
extern void QFBAOST(void);   /* testmode */
extern void PCAAOST(void);   /* osinterface */
extern void JSCAOST(void);   /* basics */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_642   JEJBELA = {"$Id: simcommands.a68,v 34.4 1995/04/03 15:36:46 ella Exp $"}; 
A_GISVEC(A68_VC ,KEJBELA,JEJBELA,58)
static A68_643   LEJBELA = {"ELLASIM"}; 
A_GISVEC(A68_VC ,MEJBELA,LEJBELA,7)
static A68_VC  NEJBELA_sim_var;
static A68_643   OEJBELA = {"ELLANET"}; 
A_GISVEC(A68_VC ,PEJBELA,OEJBELA,7)
static A68_VC  QEJBELA_ellanet_var;
static A68_644   REJBELA = {"ELLA Library"}; 
A_GISVEC(A68_VC ,SEJBELA,REJBELA,12)
static A68_VC  TEJBELA_ellalib;
static A68_645   UEJBELA = {"trace"}; 
A_GISVEC(A68_VC ,VEJBELA,UEJBELA,5)
static A68_VC  WEJBELA_trace_var;
static A68_419 * XEJBELA_seeds;
static A68_648   CGJBELA = {"Context "}; 
A_GISVEC(A68_VC ,DGJBELA,CGJBELA,8)
static A68_649   FGJBELA = {" can not be simulated - see \"checkclosure\""}; 
A_GISVEC(A68_VC ,GGJBELA,FGJBELA,42)
static A68_651   JHJBELA = {"Closing file "}; 
A_GISVEC(A68_VC ,KHJBELA,JHJBELA,13)
static A68_653   SHJBELA = {"Closure of FN "}; 
A_GISVEC(A68_VC ,THJBELA,SHJBELA,14)
static A68_653   UHJBELA = {" from context "}; 
A_GISVEC(A68_VC ,VHJBELA,UHJBELA,14)
static A68_655   BIJBELA = {"Closure of context "}; 
A_GISVEC(A68_VC ,CIJBELA,BIJBELA,19)
static A68_653   IIJBELA = {" with context "}; 
A_GISVEC(A68_VC ,JIJBELA,IIJBELA,14)
static A68_657   VIJBELA = {" cS"}; 
A_GISVEC(A68_VC ,WIJBELA,VIJBELA,3)
static A68_657   TJJBELA = {" cS"}; 
A_GISVEC(A68_VC ,UJJBELA,TJJBELA,3)
static A68_648   BKJBELA = {"portname"}; 
static A68_661   CKJBELA = {"Portnames substituted"}; 
A_GISVEC(A68_VC ,DKJBELA,CKJBELA,21)
A_GISVEC(A68_VC ,EKJBELA,BKJBELA,8)
static A68_662   GKJBELA = {"import"}; 
static A68_655   HKJBELA = {"IMPORTs substituted"}; 
A_GISVEC(A68_VC ,IKJBELA,HKJBELA,19)
A_GISVEC(A68_VC ,JKJBELA,GKJBELA,6)
static A68_645   LKJBELA = {"macro"}; 
static A68_663   MKJBELA = {"MACros expanded"}; 
A_GISVEC(A68_VC ,NKJBELA,MKJBELA,15)
A_GISVEC(A68_VC ,OKJBELA,LKJBELA,5)
static A68_648   RKJBELA = {"sequence"}; 
static A68_664   SKJBELA = {"SEQences removed"}; 
A_GISVEC(A68_VC ,TKJBELA,SKJBELA,16)
A_GISVEC(A68_VC ,UKJBELA,RKJBELA,8)
static A68_665   WKJBELA = {"timescale"}; 
static A68_661   XKJBELA = {"Time scaling expanded"}; 
A_GISVEC(A68_VC ,YKJBELA,XKJBELA,21)
A_GISVEC(A68_VC ,ZKJBELA,WKJBELA,9)
static A68_645   BLJBELA = {"macro"}; 
static A68_663   CLJBELA = {"MACros expanded"}; 
A_GISVEC(A68_VC ,DLJBELA,CLJBELA,15)
A_GISVEC(A68_VC ,ELJBELA,BLJBELA,5)
static A68_130   GLJBELA = {"make"}; 
static A68_666   HLJBELA = {"Multi-dimensional MAKEs expanded"}; 
A_GISVEC(A68_VC ,ILJBELA,HLJBELA,32)
A_GISVEC(A68_VC ,JLJBELA,GLJBELA,4)
static A68_662   LLJBELA = {"fntype"}; 
static A68_667   MLJBELA = {"Fntype signals expanded"}; 
A_GISVEC(A68_VC ,NLJBELA,MLJBELA,23)
A_GISVEC(A68_VC ,OLJBELA,LLJBELA,6)
static A68_130   QLJBELA = {"join"}; 
static A68_668   RLJBELA = {"Complex JOIN's simplified"}; 
A_GISVEC(A68_VC ,SLJBELA,RLJBELA,25)
A_GISVEC(A68_VC ,TLJBELA,QLJBELA,4)
static A68_669   DMJBELA = {"Writing open interface file  "}; 
A_GISVEC(A68_VC ,EMJBELA,DMJBELA,29)
static A68_653   NMJBELA = {" from library "}; 
A_GISVEC(A68_VC ,OMJBELA,NMJBELA,14)
static A68_671   PMJBELA = {" ("}; 
A_GISVEC(A68_VC ,QMJBELA,PMJBELA,2)
static A68_671   SMJBELA = {") "}; 
A_GISVEC(A68_VC ,TMJBELA,SMJBELA,2)
static A68_644   PNJBELA = {"Transforms: "}; 
A_GISVEC(A68_VC ,QNJBELA,PNJBELA,12)
static A68_665   BOJBELA = {"command \""}; 
A_GISVEC(A68_VC ,COJBELA,BOJBELA,9)
static A68_675   DOJBELA = {"\" not defined - invoke simulator manually on the file "}; 
A_GISVEC(A68_VC ,EOJBELA,DOJBELA,54)
static A68_130   LOJBELA = {" -s "}; 
A_GISVEC(A68_VC ,MOJBELA,LOJBELA,4)
static A68_643   ROJBELA = {" -t -s "}; 
A_GISVEC(A68_VC ,SOJBELA,ROJBELA,7)
static A68_665   XOJBELA = {"Calling \""}; 
A_GISVEC(A68_VC ,YOJBELA,XOJBELA,9)
static A68_676   CPJBELA = {"\" on file "}; 
A_GISVEC(A68_VC ,DPJBELA,CPJBELA,10)
static A68_649   LPJBELA = {"Now invoke the ELLA simulator on the file "}; 
A_GISVEC(A68_VC ,MPJBELA,LPJBELA,42)
static A68_677   QPJBELA = {" in another window or by using the \""}; 
A_GISVEC(A68_VC ,RPJBELA,QPJBELA,36)
static A68_655   UPJBELA = {"obey\" (\"!\") command"}; 
A_GISVEC(A68_VC ,VPJBELA,UPJBELA,19)
static A68_665   FQJBELA = {"command \""}; 
A_GISVEC(A68_VC ,GQJBELA,FQJBELA,9)
static A68_675   HQJBELA = {"\" not defined - leave ELLA and invoke ELLANET manually"}; 
A_GISVEC(A68_VC ,IQJBELA,HQJBELA,54)
static A68_678   WQJBELA = {"Closing down library file "}; 
A_GISVEC(A68_VC ,XQJBELA,WQJBELA,26)
static A68_679   BRJBELA = {" and calling ELLANET"}; 
A_GISVEC(A68_VC ,CRJBELA,BRJBELA,20)
static A68_680   JRJBELA = {"Reopening ELLA library"}; 
A_GISVEC(A68_VC ,KRJBELA,JRJBELA,22)
static A68_663   WRJBELA = {"MAC tracing is "}; 
A_GISVEC(A68_VC ,XRJBELA,WRJBELA,15)
static A68_643   YRJBELA = {"enabled"}; 
A_GISVEC(A68_VC ,ZRJBELA,YRJBELA,7)
static A68_648   ASJBELA = {"disabled"}; 
A_GISVEC(A68_VC ,BSJBELA,ASJBELA,8)
static A68_648   JUJBELA = {"SIMULATE"}; 
A_GISVEC(A68_VC ,KUJBELA,JUJBELA,8)
static A68_657   MUJBELA = {"SIM"}; 
A_GISVEC(A68_VC ,NUJBELA,MUJBELA,3)
static A68_684   XUJBELA = 
{  'S', 't', 'a', 'r', 't', 's', ' ', 'a',
   ' ', 's', 'i', 'm', 'u', 'l', 'a', 't',
   'i', 'o', 'n', ' ', 'f', 'r', 'o', 'm',
   ' ', 't', 'h', 'e', ' ', 'c', 'u', 'r',
   'r', 'e', 'n', 't', 'l', 'y', ' ', 's',
   'e', 'l', 'e', 'c', 't', 'e', 'd', ' ',
   'i', 'm', 'p', 'o', 'r', 't', 's', ' ',
   'r', 'e', 'g', 'i', 'o', 'n', '.', ' ',
   ' ', 'G', 'i', 'v', 'e', 'n', ' ', 'w',
   'i', 't', 'h', ' ', 'a', ' ', 'f', 'u',
   'n', 'c', 't', 'i', 'o', 'n', ' ', 'n',
   'a', 'm', 'e', ',', ' ', 'a', 's', 's',
   'e', 'm', 'b', 'l', 'e', 's', ' ', 't',
   'h', 'e', ' ', 'c', 'l', 'o', 's', 'u',
   'r', 'e', ' ', 'o', 'f', ' ', 't', 'h',
   'a', 't', ' ', 'f', 'u', 'n', 'c', 't',
   'i', 'o', 'n', ',', ' ', ' ', 'o', 't',
   'h', 'e', 'r', 'w', 'i', 's', 'e', ' ',
   'a', 's', 's', 'e', 'm', 'b', 'l', 'e',
   's', ' ', 't', 'h', 'e', ' ', 'c', 'l',
   'o', 's', 'u', 'r', 'e', ' ', 'o', 'f',
   ' ', 't', 'h', 'e', ' ', 'c', 'o', 'n',
   't', 'e', 'x', 't', '.', ' ', ' ', 'A',
   ' ', 'o', 'p', 'e', 'n', ' ', 'i', 'n',
   't', 'e', 'r', 'f', 'a', 'c', 'e', ' ',
   'f', 'i', 'l', 'e', ' ', 'i', 's', ' ',
   'u', 's', 'e', 'd', ' ', 't', 'o', ' ',
   'e', 'x', 'p', 'o', 'r', 't', ' ', 't',
   'h', 'e', ' ', 'E', 'L', 'L', 'A', ' ',
   'c', 'i', 'r', 'c', 'u', 'i', 't', ' ',
   't', 'o', ' ', 't', 'h', 'e', ' ', 's',
   'i', 'm', 'u', 'l', 'a', 't', 'o', 'r',
   '.', ' ', ' ', 'W', 'h', 'e', 'n', ' ',
   'a', ' ', 'f', 'i', 'l', 'e', ' ', 'n',
   'a', 'm', 'e', ' ', 'i', 's', ' ', 'n',
   'o', 't', ' ', 's', 'p', 'e', 'c', 'i',
   'f', 'i', 'e', 'd', ' ', 't', 'h', 'e',
   ' ', 'n', 'a', 'm', 'e', ' ', 'o', 'f',
   ' ', 't', 'h', 'e', ' ', 'c', 'u', 'r',
   'r', 'e', 'n', 't', ' ', 'c', 'o', 'n',
   't', 'e', 'x', 't', ' ', 'w', 'i', 'l',
   'l', ' ', 'b', 'e', ' ', 'u', 's', 'e',
   'd', '.' 
} ; 
A_GISVEC(A68_VC ,YUJBELA,XUJBELA,338)
static A68_648   KVJBELA = {"SIMWRITE"}; 
A_GISVEC(A68_VC ,LVJBELA,KVJBELA,8)
static A68_685   VVJBELA = 
{  'C', 'r', 'e', 'a', 't', 'e', 's', ' ',
   'a', ' ', 'o', 'p', 'e', 'n', ' ', 'i',
   'n', 't', 'e', 'r', 'f', 'a', 'c', 'e',
   ' ', 'f', 'i', 'l', 'e', ' ', 's', 'u',
   'i', 't', 'a', 'b', 'l', 'e', ' ', 'f',
   'o', 'r', ' ', 'a', 'n', ' ', 'E', 'L',
   'L', 'A', ' ', 's', 'i', 'm', 'u', 'l',
   'a', 't', 'i', 'o', 'n', ' ', 'f', 'r',
   'o', 'm', ' ', 't', 'h', 'e', ' ', 'c',
   'u', 'r', 'r', 'e', 'n', 't', 'l', 'y',
   ' ', 's', 'e', 'l', 'e', 'c', 't', 'e',
   'd', ' ', 'i', 'm', 'p', 'o', 'r', 't',
   's', ' ', 'r', 'e', 'g', 'i', 'o', 'n',
   '.', ' ', ' ', 'G', 'i', 'v', 'e', 'n',
   ' ', 'w', 'i', 't', 'h', ' ', 'a', ' ',
   'f', 'u', 'n', 'c', 't', 'i', 'o', 'n',
   ' ', 'n', 'a', 'm', 'e', ',', ' ', 'a',
   's', 's', 'e', 'm', 'b', 'l', 'e', 's',
   ' ', 't', 'h', 'e', ' ', 'c', 'l', 'o',
   's', 'u', 'r', 'e', ' ', 'o', 'f', ' ',
   't', 'h', 'a', 't', ' ', 'f', 'u', 'n',
   'c', 't', 'i', 'o', 'n', ',', ' ', ' ',
   'o', 't', 'h', 'e', 'r', 'w', 'i', 's',
   'e', ' ', 'a', 's', 's', 'e', 'm', 'b',
   'l', 'e', 's', ' ', 't', 'h', 'e', ' ',
   'c', 'l', 'o', 's', 'u', 'r', 'e', ' ',
   'o', 'f', ' ', 't', 'h', 'e', ' ', 'c',
   'o', 'n', 't', 'e', 'x', 't', '.', ' ',
   ' ', 'W', 'h', 'e', 'n', ' ', 'i', 's',
   ' ', 'f', 'i', 'l', 'e', ' ', 'n', 'a',
   'm', 'e', ' ', 'i', 's', ' ', 'n', 'o',
   't', ' ', 's', 'p', 'e', 'c', 'i', 'f',
   'i', 'e', 'd', ' ', 't', 'h', 'e', ' ',
   'n', 'a', 'm', 'e', ' ', 'o', 'f', ' ',
   't', 'h', 'e', ' ', 'c', 'u', 'r', 'r',
   'e', 'n', 't', ' ', 'c', 'o', 'n', 't',
   'e', 'x', 't', ' ', 'w', 'i', 'l', 'l',
   ' ', 'b', 'e', ' ', 'u', 's', 'e', 'd',
   '.' 
} ; 
A_GISVEC(A68_VC ,WVJBELA,VVJBELA,305)
static A68_645   IWJBELA = {"TRACE"}; 
A_GISVEC(A68_VC ,JWJBELA,IWJBELA,5)
static A68_686   LWJBELA = {"Switches on diagnostic messages during the transformation phase."}; 
A_GISVEC(A68_VC ,MWJBELA,LWJBELA,64)
static A68_130   XWJBELA = {"DONT"}; 
static A68_645   ZWJBELA = {"TRACE"}; 
A_GISVEC(A68_VC ,AXJBELA,ZWJBELA,5)
static A68_687   CXJBELA = {"Switches off the diagnostic trace"}; 
A_GISVEC(A68_VC ,DXJBELA,CXJBELA,33)
A_GISVEC(A68_VC ,QXJBELA,XWJBELA,4)
static A68_643   UXJBELA = {"ELLANET"}; 
A_GISVEC(A68_VC ,VXJBELA,UXJBELA,7)
static A68_688   XXJBELA = {"Enters the ELLANET environment where ELLANET dump files may be extracted and the attributes editor may be used.  Any changes to the ELLA library are first saved."}; 
A_GISVEC(A68_VC ,YXJBELA,XXJBELA,161)
typedef struct   /* env of non-global proc */
{
A68_INT * RGJBELA_lasttime;
} UGJBELA_time;
typedef struct   /* env of non-global proc */
{
A68_VC  BHJBELA_sim_file_name;
A68_127 * ZGJBELA_file;
A68_97  Msg;
} GHJBELA_flt;
typedef struct   /* env of non-global proc */
{
A68_VC * CJJBELA_tlist;
A68_121  SGJBELA_time;
A68_394 ** YGJBELA_closure;
} IJJBELA_assign;
typedef struct   /* env of non-global proc */
{
A68_127 * ZGJBELA_file;
A68_97  EHJBELA_flt;
} YLJBELA_out_str;
typedef struct   /* env of non-global proc */
{
int dummy;
} ANJBELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} KNJBELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} ETJBELA_generator;

A_STATIC A68_VOID  CFJBELA_write_sim_file(A68_419 * Seeds, A68_127 * File, A68_VC  Closure_details, A68_97  Msg);

A_STATIC A68_VOID  GFJBELA_sim_command(A68_438  Params, A68_BOOL  Call_sim, A68_97  Msg);

A_STATIC A68_INT  TGJBELA_time(void *NonLocals);

A_STATIC A68_VOID  FHJBELA_flt(A68_92  Msgno, A68_46  Params, void *NonLocals);

A_STATIC A68_BOOL  HJJBELA_assign(A68_558  Cl, A68_VC  Name, A68_VC  Message, void *NonLocals);

A_STATIC A68_VOID  XLJBELA_out_str(A68_VC  Str, void *NonLocals);

A_STATIC A68_VOID  ZMJBELA_generator(A68_BOOL  XMJBELA_anonymous, A68_102  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JNJBELA_generator(A68_BOOL  HNJBELA_anonymous, A68_102  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DQJBELA_ellanet_command(A68_438  Params, A68_97  Msg);

A_STATIC A68_VOID  URJBELA_set_trace(A68_631  Var, A68_BOOL  Changed, A68_97  Msg);

A_STATIC A68_VOID  HSJBELA_get_assclosure(A68_438  Names, A68_97  Msg, A68_611  *ReturnedValue);

A_STATIC A68_VOID  DTJBELA_generator(A68_BOOL  BTJBELA_anonymous, A68_102  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OTJBELA_write_cs(A68_428  Writer, A68_97  Msg);

A_STATIC A68_VOID  RTJBELA_assemble_prelude(A68_438  Names, A68_97  Msg);

A_STATIC A68_VOID  YTJBELA_assemblefile_prelude(A68_438  Names, A68_97  Msg);

A68_VOID  EUJBELA_make_simcommands(A68_467  Globals, A68_467  *ReturnedValue);

A_STATIC A68_VOID  DVJBELA_anonymous(A68_438  Params, A68_97  Msg);

A_STATIC A68_VOID  BWJBELA_anonymous(A68_438  Params, A68_97  Msg);

A_STATIC A68_VOID  RWJBELA_anonymous(A68_438  Params, A68_97  Msg);

A_STATIC A68_VOID  IXJBELA_anonymous(A68_438  Params, A68_97  Msg);

A_STATIC A68_INT  TGJBELA_time(void *NonLocals)
#define NL(x) (((UGJBELA_time *)NonLocals)->x)
{ 
A68_INT  VGJBELA_newtime;
A68_INT  WGJBELA_diff;
A68_INT  XGJBELA;  /* clause result */
A_PROC_ENTRY(time);
{ 
VGJBELA_newtime = ZACAOSI_get_cpu_time();
 /* line 120: */
WGJBELA_diff = (VGJBELA_newtime-(*NL(RGJBELA_lasttime)));
 /* line 121: */
(*NL(RGJBELA_lasttime)) = VGJBELA_newtime;
 /* line 122: */
 /* line 123: */
XGJBELA = PIBAOST_testmode_seconds(WGJBELA_diff);
} 
A_PROC_EXIT(time);
return( XGJBELA );
} 
#undef NL

A_STATIC A68_VOID  FHJBELA_flt(A68_92  Msgno, A68_46  Params, void *NonLocals)
#define NL(x) (((GHJBELA_flt *)NonLocals)->x)
{ 
A68_106  HHJBELA;  /* OPERATORS - mode -> union mode */
A68_652  IHJBELA;  /* collateral clause result */
A68_52  LHJBELA;  /* OPERATORS - mode -> union mode */
A68_VC  MHJBELA;  /* YIELD */
A68_52  NHJBELA;  /* OPERATORS - mode -> union mode */
A68_52  OHJBELA;  /* OPERATORS - mode -> union mode */
A68_56  PHJBELA;  /* procedure value */
A68_85  QHJBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(flt);
 /* line 134: */
 /* line 135: */
{ 
 /* line 136: */
if ( TKAAOSI_error_msg(A_UNITE(HHJBELA,mode1,1,Msgno)) )
{ 
MHJBELA = KHJBELA ;
IHJBELA.data[0] = A_UNITE(LHJBELA,mode7,7,MHJBELA);
IHJBELA.data[1] = A_UNITE(NHJBELA,mode7,7,NL(BHJBELA_sim_file_name));
PHJBELA.fn.fn_global = LRAAOSL_newline;
PHJBELA.nonlocals = A68_NIL;
IHJBELA.data[2] = A_UNITE(OHJBELA,mode12,12,PHJBELA);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(QHJBELA,IHJBELA,3,A68_52 ));
 /* line 137: */
 /* line 138: */
XQBAOSI_close_file(NL(ZGJBELA_file), NL(Msg));
} 
 /* line 139: */
 /* line 140: */
A_CALLPROC(NL(Msg),(Msgno, Params),(Msgno, Params,(NL(Msg)).nonlocals));
} 
A_PROC_EXIT(flt);
return;
} 
#undef NL

A_STATIC A68_BOOL  HJJBELA_assign(A68_558  Cl, A68_VC  Name, A68_VC  Message, void *NonLocals)
#define NL(x) (((IJJBELA_assign *)NonLocals)->x)
{ 
A68_650  JJJBELA;  /* collateral clause result */
A68_VC  KJJBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  LJJBELA;  /* OPERATORS - istruct -> vector */
A68_VC  MJJBELA;  /* avoid structure result */
A68_660  NJJBELA;  /* collateral clause result */
A68_52  OJJBELA;  /* OPERATORS - mode -> union mode */
A68_62  PJJBELA;  /* avoid structure result */
A68_52  QJJBELA;  /* OPERATORS - mode -> union mode */
A68_57  RJJBELA;  /* avoid structure result */
A68_52  SJJBELA;  /* OPERATORS - mode -> union mode */
A68_52  VJJBELA;  /* OPERATORS - mode -> union mode */
A68_VC  WJJBELA;  /* YIELD */
A68_52  XJJBELA;  /* OPERATORS - mode -> union mode */
A68_56  YJJBELA;  /* procedure value */
A68_85  ZJJBELA;  /* OPERATORS - istruct -> vector */
A68_BOOL  AKJBELA;  /* clause result */
A_PROC_ENTRY(assign);
 /* line 159: */
 /* line 160: */
{ 
 /* line 161: */
if ( Cl.C )
{ 
JJJBELA.data[0] = (*NL(CJJBELA_tlist));
JJJBELA.data[1] = A_HVEC(KJJBELA,' ',A68_CHAR );
JJJBELA.data[2] = Name;
JBAAOSI_concat( A_HISVEC(LJJBELA,JJJBELA,3,A68_VC ), &MJJBELA );
(*NL(CJJBELA_tlist)) = MJJBELA;
 /* line 162: */
NJJBELA.data[0] = A_UNITE(OJJBELA,mode7,7,Message);
XYAAOSL_after( 25, &PJJBELA );
NJJBELA.data[1] = A_UNITE(QJJBELA,mode18,18,PJJBELA);
 /* line 163: */
ZXAAOSL_intwidth( A_CALLPROC(NL(SGJBELA_time),(),((NL(SGJBELA_time)).nonlocals)), 5, &RJJBELA );
NJJBELA.data[2] = A_UNITE(SJJBELA,mode13,13,RJJBELA);
WJJBELA = UJJBELA ;
NJJBELA.data[3] = A_UNITE(VJJBELA,mode7,7,WJJBELA);
YJJBELA.fn.fn_global = LRAAOSL_newline;
YJJBELA.nonlocals = A68_NIL;
NJJBELA.data[4] = A_UNITE(XJJBELA,mode12,12,YJJBELA);
 /* line 164: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(ZJJBELA,NJJBELA,5,A68_52 ));
} 
 /* line 165: */
(*NL(YGJBELA_closure)) = Cl.Cl;
 /* line 166: */
 /* line 167: */
AKJBELA = Cl.C;
} 
A_PROC_EXIT(assign);
return( AKJBELA );
} 
#undef NL

A_STATIC A68_VOID  XLJBELA_out_str(A68_VC  Str, void *NonLocals)
#define NL(x) (((YLJBELA_out_str *)NonLocals)->x)
{ 
A68_35  ZLJBELA;  /* avoid structure result */
A_PROC_ENTRY(out_str);
 /* line 212: */
JSBAOSI_write_buffer( NL(ZGJBELA_file), Str, NL(EHJBELA_flt), &ZLJBELA );
ZLJBELA;
A_PROC_EXIT(out_str);
return;
} 
#undef NL

A_STATIC A68_VOID  ZMJBELA_generator(A68_BOOL  XMJBELA_anonymous, A68_102  *ReturnedValue, void *NonLocals)
#define NL(x) (((ANJBELA_generator *)NonLocals)->x)
{ 
A68_102  BNJBELA;  /* clause result */
A68_102  CNJBELA;  /* OPERATORS - dynamic generator */
{ 
CNJBELA.upb = 1 ;
( XMJBELA_anonymous? A_VLOC(A68_VC ,CNJBELA): A_VHEAP(A68_VC ,CNJBELA) );
BNJBELA = CNJBELA;
} 
*ReturnedValue = (BNJBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  JNJBELA_generator(A68_BOOL  HNJBELA_anonymous, A68_102  *ReturnedValue, void *NonLocals)
#define NL(x) (((KNJBELA_generator *)NonLocals)->x)
{ 
A68_102  LNJBELA;  /* clause result */
A68_102  MNJBELA;  /* OPERATORS - dynamic generator */
{ 
MNJBELA.upb = 2 ;
( HNJBELA_anonymous? A_VLOC(A68_VC ,MNJBELA): A_VHEAP(A68_VC ,MNJBELA) );
LNJBELA = MNJBELA;
} 
*ReturnedValue = (LNJBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  DTJBELA_generator(A68_BOOL  BTJBELA_anonymous, A68_102  *ReturnedValue, void *NonLocals)
#define NL(x) (((ETJBELA_generator *)NonLocals)->x)
{ 
A68_102  FTJBELA;  /* clause result */
A68_102  GTJBELA;  /* OPERATORS - dynamic generator */
{ 
GTJBELA.upb = 1 ;
( BTJBELA_anonymous? A_VLOC(A68_VC ,GTJBELA): A_VHEAP(A68_VC ,GTJBELA) );
FTJBELA = GTJBELA;
} 
*ReturnedValue = (FTJBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  DVJBELA_anonymous(A68_438  Params, A68_97  Msg)
{ 
 /* line 358: */
 /* line 359: */
GFJBELA_sim_command(Params, A68_TRUE, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  BWJBELA_anonymous(A68_438  Params, A68_97  Msg)
{ 
 /* line 375: */
 /* line 376: */
GFJBELA_sim_command(Params, A68_FALSE, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  RWJBELA_anonymous(A68_438  Params, A68_97  Msg)
{ 
 /* line 383: */
 /* line 384: */
TOCAOST_set_var(WEJBELA_trace_var, GLCAOST_true_var, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  IXJBELA_anonymous(A68_438  Params, A68_97  Msg)
{ 
 /* line 391: */
 /* line 392: */
TOCAOST_set_var(WEJBELA_trace_var, JLCAOST_false_var, Msg);
return;
} 
#undef NL
 /* line 69: */

A_STATIC A68_VOID  CFJBELA_write_sim_file(A68_419 * Seeds, A68_127 * File, A68_VC  Closure_details, A68_97  Msg)
{ 
A_PROC_ENTRY(write_sim_file);
 /* line 70: */
 /* line 72: */
/*SKIP*/;
A_PROC_EXIT(write_sim_file);
return;
} 
#undef NL

A_STATIC A68_VOID  GFJBELA_sim_command(A68_438  Params, A68_BOOL  Call_sim, A68_97  Msg)
{ 
A68_INT  HFJBELA_index;
A68_BOOL  IFJBELA;  /* optbool result */
A68_INT  JFJBELA;  /* YIELD */
A68_VC  KFJBELA;  /* clause result */
A68_INT  LFJBELA;  /* YIELD */
A68_VC  MFJBELA;  /* avoid structure result */
A68_VC  NFJBELA_fn;
A68_BOOL  OFJBELA;  /* optbool result */
A68_INT  PFJBELA;  /* YIELD */
A68_111  QFJBELA;  /* avoid structure result */
A68_111  RFJBELA_probecontext;
A68_419  SFJBELA;  /* collateral clause result */
A68_218  TFJBELA;  /* avoid structure result */
A68_419 * UFJBELA;  /* clause result */
A68_419 * VFJBELA;  /* YIELD */
A68_419 * WFJBELA_probeseed;
A68_218  XFJBELA;  /* avoid structure result */
A68_218  YFJBELA_cr;
A68_419 * ZFJBELA_seeds;
A68_419  AGJBELA;  /* collateral clause result */
A68_650  BGJBELA;  /* collateral clause result */
A68_VC  EGJBELA;  /* avoid structure result */
A68_46  HGJBELA;  /* OPERATORS - istruct -> vector */
A68_VC  IGJBELA;  /* avoid structure result */
A68_46  JGJBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  KGJBELA;  /* optbool result */
A68_INT  LGJBELA;  /* YIELD */
A68_149  MGJBELA;  /* clause result */
A68_INT  NGJBELA;  /* YIELD */
A68_149  OGJBELA;  /* avoid structure result */
A68_149  PGJBELA;  /* avoid structure result */
A68_149  QGJBELA_fname;
A68_INT  RGJBELA_lasttime;
A68_121  SGJBELA_time;   /* proc value of non-global proc */
A68_394 * YGJBELA_closure;
A68_127 * ZGJBELA_file;
A68_VC  AHJBELA;  /* avoid structure result */
A68_VC  BHJBELA_sim_file_name;
A68_97  EHJBELA_flt;   /* proc value of non-global proc */
A68_654  RHJBELA;  /* collateral clause result */
A68_VC  WHJBELA;  /* avoid structure result */
A68_VC  XHJBELA;  /* clause result */
A68_46  YHJBELA;  /* OPERATORS - istruct -> vector */
A68_VC  ZHJBELA;  /* avoid structure result */
A68_656  AIJBELA;  /* collateral clause result */
A68_VC  DIJBELA;  /* avoid structure result */
A68_46  EIJBELA;  /* OPERATORS - istruct -> vector */
A68_VC  FIJBELA;  /* avoid structure result */
A68_VC  GIJBELA_title;
A68_650  HIJBELA;  /* collateral clause result */
A68_VC  KIJBELA;  /* avoid structure result */
A68_46  LIJBELA;  /* OPERATORS - istruct -> vector */
A68_VC  MIJBELA;  /* avoid structure result */
A68_658  NIJBELA;  /* collateral clause result */
A68_52  OIJBELA;  /* OPERATORS - mode -> union mode */
A68_56  PIJBELA;  /* procedure value */
A68_52  QIJBELA;  /* OPERATORS - mode -> union mode */
A68_62  RIJBELA;  /* avoid structure result */
A68_52  SIJBELA;  /* OPERATORS - mode -> union mode */
A68_57  TIJBELA;  /* avoid structure result */
A68_52  UIJBELA;  /* OPERATORS - mode -> union mode */
A68_52  XIJBELA;  /* OPERATORS - mode -> union mode */
A68_VC  YIJBELA;  /* YIELD */
A68_52  ZIJBELA;  /* OPERATORS - mode -> union mode */
A68_56  AJJBELA;  /* procedure value */
A68_85  BJJBELA;  /* OPERATORS - istruct -> vector */
A68_VC  CJJBELA_tlist;
A68_659  GJJBELA_assign;   /* proc value of non-global proc */
A68_558  FKJBELA;  /* avoid structure result */
A68_558  KKJBELA;  /* avoid structure result */
A68_VC  PKJBELA;  /* avoid structure result */
A68_558  QKJBELA;  /* avoid structure result */
A68_558  VKJBELA;  /* avoid structure result */
A68_558  ALJBELA;  /* avoid structure result */
A68_558  FLJBELA;  /* avoid structure result */
A68_558  KLJBELA;  /* avoid structure result */
A68_558  PLJBELA;  /* avoid structure result */
A68_558  ULJBELA;  /* avoid structure result */
A68_36  WLJBELA_out_str;   /* proc value of non-global proc */
A68_670  AMJBELA;  /* collateral clause result */
A68_52  BMJBELA;  /* OPERATORS - mode -> union mode */
A68_56  CMJBELA;  /* procedure value */
A68_52  FMJBELA;  /* OPERATORS - mode -> union mode */
A68_VC  GMJBELA;  /* YIELD */
A68_VC  HMJBELA;  /* avoid structure result */
A68_52  IMJBELA;  /* OPERATORS - mode -> union mode */
A68_52  JMJBELA;  /* OPERATORS - mode -> union mode */
A68_56  KMJBELA;  /* procedure value */
A68_85  LMJBELA;  /* OPERATORS - istruct -> vector */
A68_672  MMJBELA;  /* collateral clause result */
A68_VC  RMJBELA;  /* avoid structure result */
A68_VC  UMJBELA;  /* avoid structure result */
A68_46  VMJBELA;  /* OPERATORS - istruct -> vector */
A68_VC  WMJBELA;  /* avoid structure result */
A68_673  YMJBELA_generator;   /* proc value of non-global proc */
A68_102  DNJBELA;  /* clause result */
A68_102  ENJBELA;  /* avoid structure result */
A68_102  FNJBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_102  GNJBELA;  /* OPERATORS - assign op */
A68_673  INJBELA_generator;   /* proc value of non-global proc */
A68_674  NNJBELA;  /* collateral clause result */
A68_656  ONJBELA;  /* collateral clause result */
A68_46  RNJBELA;  /* OPERATORS - istruct -> vector */
A68_VC  SNJBELA;  /* avoid structure result */
A68_102  TNJBELA;  /* avoid structure result */
A68_102  UNJBELA;  /* OPERATORS - istruct -> vector */
A68_102  VNJBELA;  /* OPERATORS - assign op */
A68_102  WNJBELA_header;
A68_428  XNJBELA;  /* avoid structure result */
A68_428  YNJBELA_writer;
A68_611  ZNJBELA;  /* collateral clause result */
A68_654  AOJBELA;  /* collateral clause result */
A68_46  FOJBELA;  /* OPERATORS - istruct -> vector */
A68_VC  GOJBELA;  /* avoid structure result */
A68_46  HOJBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  IOJBELA;  /* avoid structure result */
A68_VC  JOJBELA_simcmd;
A68_650  KOJBELA;  /* collateral clause result */
A68_VC  NOJBELA;  /* clause result */
A68_46  OOJBELA;  /* OPERATORS - istruct -> vector */
A68_VC  POJBELA;  /* avoid structure result */
A68_650  QOJBELA;  /* collateral clause result */
A68_46  TOJBELA;  /* OPERATORS - istruct -> vector */
A68_VC  UOJBELA;  /* avoid structure result */
A68_VC  VOJBELA_command;
A68_660  WOJBELA;  /* collateral clause result */
A68_52  ZOJBELA;  /* OPERATORS - mode -> union mode */
A68_VC  APJBELA;  /* YIELD */
A68_52  BPJBELA;  /* OPERATORS - mode -> union mode */
A68_52  EPJBELA;  /* OPERATORS - mode -> union mode */
A68_VC  FPJBELA;  /* YIELD */
A68_52  GPJBELA;  /* OPERATORS - mode -> union mode */
A68_52  HPJBELA;  /* OPERATORS - mode -> union mode */
A68_56  IPJBELA;  /* procedure value */
A68_85  JPJBELA;  /* OPERATORS - istruct -> vector */
A68_660  KPJBELA;  /* collateral clause result */
A68_52  NPJBELA;  /* OPERATORS - mode -> union mode */
A68_VC  OPJBELA;  /* YIELD */
A68_52  PPJBELA;  /* OPERATORS - mode -> union mode */
A68_52  SPJBELA;  /* OPERATORS - mode -> union mode */
A68_VC  TPJBELA;  /* YIELD */
A68_52  WPJBELA;  /* OPERATORS - mode -> union mode */
A68_VC  XPJBELA;  /* YIELD */
A68_52  YPJBELA;  /* OPERATORS - mode -> union mode */
A68_56  ZPJBELA;  /* procedure value */
A68_85  AQJBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(sim_command);
 /* line 77: */
 /* line 80: */
{ 
HFJBELA_index = 0;
 /* line 84: */
IFJBELA = (Params.upb>HFJBELA_index);
if ( IFJBELA )
{ /* line 85: */
JFJBELA = (HFJBELA_index+1) ;
IFJBELA = HKFAOST_is_fnname((*(&A_VINDEX(Params,JFJBELA))));
}
if ( IFJBELA )
{ 
 /* line 86: */
 /* line 87: */
LFJBELA = HFJBELA_index+=1 ;
LKFAOST_get_fnname( (*(&A_VINDEX(Params,LFJBELA))), Msg, &MFJBELA );
KFJBELA = MFJBELA;
} 
else
{ 
KFJBELA = EOAAOSL_nullstr;
} 
NFJBELA_fn = KFJBELA;
 /* line 89: */
 /* line 90: */
OFJBELA = (Params.upb>HFJBELA_index);
if ( OFJBELA )
{ /* line 91: */
PFJBELA = (HFJBELA_index+1) ;
OFJBELA = ZCFAOST_is_openrnd((*(&A_VINDEX(Params,PFJBELA))));
}
if ( OFJBELA )
{ 
 /* line 92: */
HFJBELA_index+=1 ;
URFAOST_get_ctname( Params, (&HFJBELA_index), EOAAOSL_nullstr, Msg, &QFJBELA );
RFJBELA_probecontext = QFJBELA;
 /* line 93: */
HFJBELA_index+=1;
 /* line 94: */
 /* line 95: */
OFKAELA_check_selected( RFJBELA_probecontext, Msg, &TFJBELA );
SFJBELA.Cregion = TFJBELA;
SFJBELA.Fnname = TTCAOST_nullid;
 /* line 96: */
SFJBELA.Rest = BWDBELA_nilclosureseed;
 /* line 97: */
VFJBELA = A_HEAP(A68_419 ) ;
(*VFJBELA) = SFJBELA ;
UFJBELA = VFJBELA;
} 
else
{ 
UFJBELA = BWDBELA_nilclosureseed;
} 
WFJBELA_probeseed = UFJBELA;
 /* line 99: */
OFKAELA_check_selected( (*(&(HXJAELA_library->Currentct))), Msg, &XFJBELA );
YFJBELA_cr = XFJBELA;
 /* line 100: */
ZFJBELA_seeds = (A_HEAP(A68_419 ));
AGJBELA.Cregion = YFJBELA_cr;
AGJBELA.Fnname = NFJBELA_fn;
AGJBELA.Rest = WFJBELA_probeseed;
(*ZFJBELA_seeds) = AGJBELA;
 /* line 102: */
 /* line 103: */
if ( (SOBBELA_closure_details(YFJBELA_cr, A68_FALSE, A68_FALSE, A68_FALSE, Msg)<0) )
{ 
BGJBELA.data[0] = DGJBELA;
 /* line 104: */
UAKAELA_ctos( YFJBELA_cr, &EGJBELA );
BGJBELA.data[1] = EGJBELA;
BGJBELA.data[2] = GGJBELA;
 /* line 105: */
JBAAOSI_concat( A_HISVEC(HGJBELA,BGJBELA,3,A68_VC ), &IGJBELA );
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(JGJBELA,IGJBELA,A68_VC )),(WHAAOSI_user, A_HVEC(JGJBELA,IGJBELA,A68_VC ),(Msg).nonlocals));
} 
 /* line 107: */
 /* line 108: */
KGJBELA = (Params.upb>HFJBELA_index);
if ( KGJBELA )
{ /* line 109: */
LGJBELA = (HFJBELA_index+1) ;
KGJBELA = SNFAOST_is_filename((*(&A_VINDEX(Params,LGJBELA))));
}
if ( KGJBELA )
{ 
 /* line 110: */
NGJBELA = HFJBELA_index+=1 ;
XNFAOST_get_filename( (*(&A_VINDEX(Params,NGJBELA))), YLDAOST_assfile_type, Msg, &OGJBELA );
MGJBELA = OGJBELA;
} 
else
{ 
 /* line 111: */
TNCAOSI_parse_filename( (*(&(YFJBELA_cr.Context->Name))), YLDAOST_assfile_type, Msg, &PGJBELA );
MGJBELA = PGJBELA;
} 
QGJBELA_fname = MGJBELA;
 /* line 115: */
RGJBELA_lasttime = ZACAOSI_get_cpu_time();
 /* line 117: */
 /* line 118: */
 /* line 119: */
A_CLOSURE( SGJBELA_time, TGJBELA_time, UGJBELA_time );
(( UGJBELA_time * ) ( SGJBELA_time.nonlocals )) -> RGJBELA_lasttime = (&RGJBELA_lasttime);
 /* line 127: */
 /* line 128: */
YGJBELA_closure = MBEBELA_get_allimports(FWDBELA_generate_closure(ZFJBELA_seeds, A68_TRUE, Msg), Msg);
 /* line 130: */
ZGJBELA_file = FQBAOSI_open_file(QGJBELA_fname.Filename, TNBAOSI_write_access, Msg);
 /* line 131: */
YPBAOSI_file_name( ZGJBELA_file, &AHJBELA );
BHJBELA_sim_file_name = AHJBELA;
 /* line 133: */
A_CLOSURE( EHJBELA_flt, FHJBELA_flt, GHJBELA_flt );
(( GHJBELA_flt * ) ( EHJBELA_flt.nonlocals )) -> BHJBELA_sim_file_name = BHJBELA_sim_file_name;
(( GHJBELA_flt * ) ( EHJBELA_flt.nonlocals )) -> ZGJBELA_file = ZGJBELA_file;
(( GHJBELA_flt * ) ( EHJBELA_flt.nonlocals )) -> Msg = Msg;
 /* line 144: */
 /* line 145: */
if ( (NFJBELA_fn.upb>0) )
{ 
RHJBELA.data[0] = THJBELA;
RHJBELA.data[1] = NFJBELA_fn;
RHJBELA.data[2] = VHJBELA;
UAKAELA_ctos( YFJBELA_cr, &WHJBELA );
RHJBELA.data[3] = WHJBELA;
 /* line 146: */
JBAAOSI_concat( A_HISVEC(YHJBELA,RHJBELA,4,A68_VC ), &ZHJBELA );
XHJBELA = ZHJBELA;
} 
else
{ 
AIJBELA.data[0] = CIJBELA;
UAKAELA_ctos( YFJBELA_cr, &DIJBELA );
AIJBELA.data[1] = DIJBELA;
 /* line 147: */
JBAAOSI_concat( A_HISVEC(EIJBELA,AIJBELA,2,A68_VC ), &FIJBELA );
XHJBELA = FIJBELA;
} 
GIJBELA_title = XHJBELA;
 /* line 148: */
 /* line 149: */
if ( (WFJBELA_probeseed!=BWDBELA_nilclosureseed) )
{ 
HIJBELA.data[0] = GIJBELA_title;
HIJBELA.data[1] = JIJBELA;
UAKAELA_ctos( (*(&(WFJBELA_probeseed->Cregion))), &KIJBELA );
HIJBELA.data[2] = KIJBELA;
 /* line 150: */
JBAAOSI_concat( A_HISVEC(LIJBELA,HIJBELA,3,A68_VC ), &MIJBELA );
GIJBELA_title = MIJBELA;
} 
 /* line 152: */
PIJBELA.fn.fn_global = LRAAOSL_newline;
PIJBELA.nonlocals = A68_NIL;
NIJBELA.data[0] = A_UNITE(OIJBELA,mode12,12,PIJBELA);
NIJBELA.data[1] = A_UNITE(QIJBELA,mode7,7,GIJBELA_title);
XYAAOSL_after( 25, &RIJBELA );
NIJBELA.data[2] = A_UNITE(SIJBELA,mode18,18,RIJBELA);
ZXAAOSL_intwidth( A_CALLPROC(SGJBELA_time,(),((SGJBELA_time).nonlocals)), 5, &TIJBELA );
NIJBELA.data[3] = A_UNITE(UIJBELA,mode13,13,TIJBELA);
YIJBELA = WIJBELA ;
NIJBELA.data[4] = A_UNITE(XIJBELA,mode7,7,YIJBELA);
AJJBELA.fn.fn_global = LRAAOSL_newline;
AJJBELA.nonlocals = A68_NIL;
NIJBELA.data[5] = A_UNITE(ZIJBELA,mode12,12,AJJBELA);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(BJJBELA,NIJBELA,6,A68_52 ));
 /* line 156: */
CJJBELA_tlist = EOAAOSL_nullstr;
 /* line 158: */
A_CLOSURE( GJJBELA_assign, HJJBELA_assign, IJJBELA_assign );
(( IJJBELA_assign * ) ( GJJBELA_assign.nonlocals )) -> CJJBELA_tlist = (&CJJBELA_tlist);
(( IJJBELA_assign * ) ( GJJBELA_assign.nonlocals )) -> SGJBELA_time = SGJBELA_time;
(( IJJBELA_assign * ) ( GJJBELA_assign.nonlocals )) -> YGJBELA_closure = (&YGJBELA_closure);
 /* line 170: */
 /* line 171: */
EWCBTRN_transform_portnames( YGJBELA_closure, EHJBELA_flt, &FKJBELA );
A_CALLPROC(GJJBELA_assign,(FKJBELA, EKJBELA, DKJBELA),(FKJBELA, EKJBELA, DKJBELA,(GJJBELA_assign).nonlocals));
 /* line 172: */
 /* line 173: */
MIOATRN_transform_imports( YGJBELA_closure, EHJBELA_flt, &KKJBELA );
A_CALLPROC(GJJBELA_assign,(KKJBELA, JKJBELA, IKJBELA),(KKJBELA, JKJBELA, IKJBELA,(GJJBELA_assign).nonlocals));
 /* line 174: */
 /* line 175: */
FNCAOST_get_var( WEJBELA_trace_var, &PKJBELA );
CXQATRN_expand( YGJBELA_closure, LAAATRN_nilids, A_VC_EQ(PKJBELA,GLCAOST_true_var), EHJBELA_flt, &QKJBELA );
A_CALLPROC(GJJBELA_assign,(QKJBELA, OKJBELA, NKJBELA),(QKJBELA, OKJBELA, NKJBELA,(GJJBELA_assign).nonlocals));
 /* line 176: */
 /* line 177: */
AUYATRN_transform_sequences( YGJBELA_closure, EHJBELA_flt, &VKJBELA );
A_CALLPROC(GJJBELA_assign,(VKJBELA, UKJBELA, TKJBELA),(VKJBELA, UKJBELA, TKJBELA,(GJJBELA_assign).nonlocals));
 /* line 178: */
 /* line 179: */
NQBBTRN_transform_timescale( YGJBELA_closure, EHJBELA_flt, &ALJBELA );
A_CALLPROC(GJJBELA_assign,(ALJBELA, ZKJBELA, YKJBELA),(ALJBELA, ZKJBELA, YKJBELA,(GJJBELA_assign).nonlocals));
 /* line 180: */
 /* line 181: */
CXQATRN_expand( YGJBELA_closure, LAAATRN_nilids, A68_FALSE, EHJBELA_flt, &FLJBELA );
A_CALLPROC(GJJBELA_assign,(FLJBELA, ELJBELA, DLJBELA),(FLJBELA, ELJBELA, DLJBELA,(GJJBELA_assign).nonlocals));
 /* line 182: */
 /* line 183: */
YTEBTRN_transform_multimakes( YGJBELA_closure, OCAAOST_null_options, EHJBELA_flt, &KLJBELA );
A_CALLPROC(GJJBELA_assign,(KLJBELA, JLJBELA, ILJBELA),(KLJBELA, JLJBELA, ILJBELA,(GJJBELA_assign).nonlocals));
 /* line 184: */
 /* line 185: */
HVVATRN_transform_fntypes( YGJBELA_closure, OCAAOST_null_options, EHJBELA_flt, &PLJBELA );
A_CALLPROC(GJJBELA_assign,(PLJBELA, OLJBELA, NLJBELA),(PLJBELA, OLJBELA, NLJBELA,(GJJBELA_assign).nonlocals));
 /* line 186: */
 /* line 187: */
FVCBTRN_transform_joins( YGJBELA_closure, OCAAOST_null_options, EHJBELA_flt, &ULJBELA );
A_CALLPROC(GJJBELA_assign,(ULJBELA, TLJBELA, SLJBELA),(ULJBELA, TLJBELA, SLJBELA,(GJJBELA_assign).nonlocals));
 /* line 201: */
A_CLOSURE( WLJBELA_out_str, XLJBELA_out_str, YLJBELA_out_str );
(( YLJBELA_out_str * ) ( WLJBELA_out_str.nonlocals )) -> ZGJBELA_file = ZGJBELA_file;
(( YLJBELA_out_str * ) ( WLJBELA_out_str.nonlocals )) -> EHJBELA_flt = EHJBELA_flt;
 /* line 214: */
CMJBELA.fn.fn_global = LRAAOSL_newline;
CMJBELA.nonlocals = A68_NIL;
AMJBELA.data[0] = A_UNITE(BMJBELA,mode12,12,CMJBELA);
 /* line 215: */
GMJBELA = EMJBELA ;
AMJBELA.data[1] = A_UNITE(FMJBELA,mode7,7,GMJBELA);
YPBAOSI_file_name( ZGJBELA_file, &HMJBELA );
AMJBELA.data[2] = A_UNITE(IMJBELA,mode7,7,HMJBELA);
KMJBELA.fn.fn_global = LRAAOSL_newline;
KMJBELA.nonlocals = A68_NIL;
AMJBELA.data[3] = A_UNITE(JMJBELA,mode12,12,KMJBELA);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(LMJBELA,AMJBELA,4,A68_52 ));
 /* line 217: */
MMJBELA.data[0] = GIJBELA_title;
MMJBELA.data[1] = OMJBELA;
MMJBELA.data[2] = (*(&(HXJAELA_library->Name)));
 /* line 218: */
MMJBELA.data[3] = QMJBELA;
JIBAOST_version_str( (*(&(HXJAELA_library->Version))), &RMJBELA );
MMJBELA.data[4] = RMJBELA;
 /* line 219: */
MMJBELA.data[5] = TMJBELA;
QDDAOST_date_time( DZCAOST_seconds(), &UMJBELA );
MMJBELA.data[6] = UMJBELA;
JBAAOSI_concat( A_HISVEC(VMJBELA,MMJBELA,7,A68_VC ), &WMJBELA );
GIJBELA_title = WMJBELA;
 /* line 221: */
 /* line 222: */
 /* line 223: */
if ( (CJJBELA_tlist.upb==0) )
{ 
A_CLOSURE( YMJBELA_generator, ZMJBELA_generator, ANJBELA_generator );
 /* line 224: */
A_CALLPROC(YMJBELA_generator,(A68_TRUE, &ENJBELA),(A68_TRUE, &ENJBELA,(YMJBELA_generator).nonlocals));
GNJBELA = A_HVEC(FNJBELA,GIJBELA_title,A68_VC ) ;
A_VASSIGN2(GNJBELA,ENJBELA,A68_VC ) ;
DNJBELA = ENJBELA;
} 
else
{ 
A_CLOSURE( INJBELA_generator, JNJBELA_generator, KNJBELA_generator );
NNJBELA.data[0] = GIJBELA_title;
ONJBELA.data[0] = QNJBELA;
ONJBELA.data[1] = CJJBELA_tlist;
 /* line 225: */
JBAAOSI_concat( A_HISVEC(RNJBELA,ONJBELA,2,A68_VC ), &SNJBELA );
NNJBELA.data[1] = SNJBELA;
A_CALLPROC(INJBELA_generator,(A68_TRUE, &TNJBELA),(A68_TRUE, &TNJBELA,(INJBELA_generator).nonlocals));
VNJBELA = A_HISVEC(UNJBELA,NNJBELA,2,A68_VC ) ;
A_VASSIGN2(VNJBELA,TNJBELA,A68_VC ) ;
DNJBELA = TNJBELA;
} 
WNJBELA_header = DNJBELA;
 /* line 226: */
FBGATRN_write_signature( WLJBELA_out_str, CQCATRN_packed_format, A68_TRUE, EHJBELA_flt, &XNJBELA );
YNJBELA_writer = XNJBELA;
 /* line 227: */
ZNJBELA.Closure = YGJBELA_closure;
ZNJBELA.Head_data = WNJBELA_header;
RLFATRN_write_closure(ZNJBELA, YNJBELA_writer, EHJBELA_flt);
 /* line 228: */
WBEBELA_write_closureseeds(ZFJBELA_seeds, YNJBELA_writer, EHJBELA_flt);
 /* line 229: */
KCGATRN_finish_write_closure(YNJBELA_writer, EHJBELA_flt);
 /* line 234: */
XQBAOSI_close_file(ZGJBELA_file, Msg);
 /* line 238: */
 /* line 239: */
if ( Call_sim )
{ 
 /* line 240: */
if ( SNCAOST_var_unset(NEJBELA_sim_var) )
{ 
AOJBELA.data[0] = COJBELA;
 /* line 241: */
AOJBELA.data[1] = NEJBELA_sim_var;
 /* line 242: */
AOJBELA.data[2] = EOJBELA;
AOJBELA.data[3] = BHJBELA_sim_file_name;
 /* line 243: */
JBAAOSI_concat( A_HISVEC(FOJBELA,AOJBELA,4,A68_VC ), &GOJBELA );
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(HOJBELA,GOJBELA,A68_VC )),(WHAAOSI_user, A_HVEC(HOJBELA,GOJBELA,A68_VC ),(Msg).nonlocals));
} 
else
{ 
FNCAOST_get_var( NEJBELA_sim_var, &IOJBELA );
JOJBELA_simcmd = IOJBELA;
 /* line 244: */
 /* line 245: */
if ( EBAAOST_(OHBAOST_testmode, OCAAOST_null_options) )
{ 
KOJBELA.data[0] = JOJBELA_simcmd;
KOJBELA.data[1] = MOJBELA;
KOJBELA.data[2] = BHJBELA_sim_file_name;
 /* line 246: */
JBAAOSI_concat( A_HISVEC(OOJBELA,KOJBELA,3,A68_VC ), &POJBELA );
NOJBELA = POJBELA;
} 
else
{ 
QOJBELA.data[0] = JOJBELA_simcmd;
QOJBELA.data[1] = SOJBELA;
QOJBELA.data[2] = BHJBELA_sim_file_name;
 /* line 247: */
JBAAOSI_concat( A_HISVEC(TOJBELA,QOJBELA,3,A68_VC ), &UOJBELA );
NOJBELA = UOJBELA;
} 
VOJBELA_command = NOJBELA;
 /* line 249: */
APJBELA = YOJBELA ;
WOJBELA.data[0] = A_UNITE(ZOJBELA,mode7,7,APJBELA);
WOJBELA.data[1] = A_UNITE(BPJBELA,mode7,7,JOJBELA_simcmd);
 /* line 250: */
FPJBELA = DPJBELA ;
WOJBELA.data[2] = A_UNITE(EPJBELA,mode7,7,FPJBELA);
WOJBELA.data[3] = A_UNITE(GPJBELA,mode7,7,BHJBELA_sim_file_name);
IPJBELA.fn.fn_global = LRAAOSL_newline;
IPJBELA.nonlocals = A68_NIL;
WOJBELA.data[4] = A_UNITE(HPJBELA,mode12,12,IPJBELA);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(JPJBELA,WOJBELA,5,A68_52 ));
 /* line 251: */
IACAOSI_execute_os_command(VOJBELA_command, Msg);
 /* line 252: */
 /* line 253: */
 /* line 254: */
SNGAOST_banner(TEJBELA_ellalib);
} 
} 
else
{ 
 /* line 255: */
OPJBELA = MPJBELA ;
KPJBELA.data[0] = A_UNITE(NPJBELA,mode7,7,OPJBELA);
KPJBELA.data[1] = A_UNITE(PPJBELA,mode7,7,BHJBELA_sim_file_name);
 /* line 256: */
TPJBELA = RPJBELA ;
KPJBELA.data[2] = A_UNITE(SPJBELA,mode7,7,TPJBELA);
XPJBELA = VPJBELA ;
KPJBELA.data[3] = A_UNITE(WPJBELA,mode7,7,XPJBELA);
ZPJBELA.fn.fn_global = LRAAOSL_newline;
ZPJBELA.nonlocals = A68_NIL;
KPJBELA.data[4] = A_UNITE(YPJBELA,mode12,12,ZPJBELA);
 /* line 257: */
 /* line 258: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(AQJBELA,KPJBELA,5,A68_52 ));
} 
} 
A_PROC_EXIT(sim_command);
return;
} 
#undef NL

A_STATIC A68_VOID  DQJBELA_ellanet_command(A68_438  Params, A68_97  Msg)
{ 
A68_650  EQJBELA;  /* collateral clause result */
A68_46  JQJBELA;  /* OPERATORS - istruct -> vector */
A68_VC  KQJBELA;  /* avoid structure result */
A68_46  LQJBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  MQJBELA;  /* avoid structure result */
A68_VC  NQJBELA_libname;
A68_VC  OQJBELA;  /* avoid structure result */
A68_VC  PQJBELA_cmd;
A68_650  QQJBELA;  /* collateral clause result */
A68_VC  RQJBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  SQJBELA;  /* OPERATORS - istruct -> vector */
A68_VC  TQJBELA;  /* avoid structure result */
A68_VC  UQJBELA_command;
A68_670  VQJBELA;  /* collateral clause result */
A68_52  YQJBELA;  /* OPERATORS - mode -> union mode */
A68_VC  ZQJBELA;  /* YIELD */
A68_52  ARJBELA;  /* OPERATORS - mode -> union mode */
A68_52  DRJBELA;  /* OPERATORS - mode -> union mode */
A68_VC  ERJBELA;  /* YIELD */
A68_52  FRJBELA;  /* OPERATORS - mode -> union mode */
A68_56  GRJBELA;  /* procedure value */
A68_85  HRJBELA;  /* OPERATORS - istruct -> vector */
A68_681  IRJBELA;  /* collateral clause result */
A68_52  LRJBELA;  /* OPERATORS - mode -> union mode */
A68_VC  MRJBELA;  /* YIELD */
A68_52  NRJBELA;  /* OPERATORS - mode -> union mode */
A68_56  ORJBELA;  /* procedure value */
A68_85  PRJBELA;  /* OPERATORS - istruct -> vector */
A68_245  QRJBELA;  /* procedure value */
A_PROC_ENTRY(ellanet_command);
 /* line 262: */
 /* line 263: */
if ( SNCAOST_var_unset(QEJBELA_ellanet_var) )
{ 
EQJBELA.data[0] = GQJBELA;
 /* line 264: */
EQJBELA.data[1] = QEJBELA_ellanet_var;
EQJBELA.data[2] = IQJBELA;
 /* line 265: */
JBAAOSI_concat( A_HISVEC(JQJBELA,EQJBELA,3,A68_VC ), &KQJBELA );
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(LQJBELA,KQJBELA,A68_VC )),(WHAAOSI_user, A_HVEC(LQJBELA,KQJBELA,A68_VC ),(Msg).nonlocals));
} 
else
{ 
YPBAOSI_file_name( (*(&(HXJAELA_library->File))), &MQJBELA );
NQJBELA_libname = MQJBELA;
 /* line 266: */
FNCAOST_get_var( QEJBELA_ellanet_var, &OQJBELA );
PQJBELA_cmd = OQJBELA;
 /* line 267: */
QQJBELA.data[0] = PQJBELA_cmd;
QQJBELA.data[1] = A_HVEC(RQJBELA,' ',A68_CHAR );
QQJBELA.data[2] = NQJBELA_libname;
JBAAOSI_concat( A_HISVEC(SQJBELA,QQJBELA,3,A68_VC ), &TQJBELA );
UQJBELA_command = TQJBELA;
 /* line 268: */
ZQJBELA = XQJBELA ;
VQJBELA.data[0] = A_UNITE(YQJBELA,mode7,7,ZQJBELA);
 /* line 269: */
VQJBELA.data[1] = A_UNITE(ARJBELA,mode7,7,NQJBELA_libname);
ERJBELA = CRJBELA ;
VQJBELA.data[2] = A_UNITE(DRJBELA,mode7,7,ERJBELA);
GRJBELA.fn.fn_global = LRAAOSL_newline;
GRJBELA.nonlocals = A68_NIL;
VQJBELA.data[3] = A_UNITE(FRJBELA,mode12,12,GRJBELA);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(HRJBELA,VQJBELA,4,A68_52 ));
 /* line 270: */
OJBBELA_finish_library(Msg);
 /* line 271: */
IACAOSI_execute_os_command(UQJBELA_command, Msg);
 /* line 272: */
MRJBELA = KRJBELA ;
IRJBELA.data[0] = A_UNITE(LRJBELA,mode7,7,MRJBELA);
ORJBELA.fn.fn_global = LRAAOSL_newline;
ORJBELA.nonlocals = A68_NIL;
IRJBELA.data[1] = A_UNITE(NRJBELA,mode12,12,ORJBELA);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(PRJBELA,IRJBELA,2,A68_52 ));
 /* line 273: */
SNGAOST_banner(TEJBELA_ellalib);
 /* line 274: */
 /* line 275: */
QRJBELA.fn.fn_global = CIBBELA_nullupdater;
QRJBELA.nonlocals = A68_NIL;
HIBBELA_open_library(NQJBELA_libname, QRJBELA, Msg);
} 
A_PROC_EXIT(ellanet_command);
return;
} 
#undef NL

A_STATIC A68_VOID  URJBELA_set_trace(A68_631  Var, A68_BOOL  Changed, A68_97  Msg)
{ 
A68_656  VRJBELA;  /* collateral clause result */
A68_46  CSJBELA;  /* OPERATORS - istruct -> vector */
A68_VC  DSJBELA;  /* avoid structure result */
A68_46  ESJBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(set_trace);
 /* line 278: */
 /* line 279: */
VRJBELA.data[0] = XRJBELA;
 /* line 280: */
if ( A_VC_EQ(Var.Value,GLCAOST_true_var) )
{ 
 /* line 281: */
VRJBELA.data[1] = ZRJBELA;
} 
else
{ 
VRJBELA.data[1] = BSJBELA;
} 
JBAAOSI_concat( A_HISVEC(CSJBELA,VRJBELA,2,A68_VC ), &DSJBELA );
A_CALLPROC(Msg,(CIAAOSI_log, A_HVEC(ESJBELA,DSJBELA,A68_VC )),(CIAAOSI_log, A_HVEC(ESJBELA,DSJBELA,A68_VC ),(Msg).nonlocals));
A_PROC_EXIT(set_trace);
return;
} 
#undef NL

A_STATIC A68_VOID  HSJBELA_get_assclosure(A68_438  Names, A68_97  Msg, A68_611  *ReturnedValue)
{ 
A68_218  ISJBELA;  /* avoid structure result */
A68_218  JSJBELA_cr;
A68_INT  KSJBELA_index;
A68_INT  LSJBELA;  /* YIELD */
A68_VC  MSJBELA;  /* clause result */
A68_INT  NSJBELA;  /* YIELD */
A68_VC  OSJBELA;  /* avoid structure result */
A68_VC  PSJBELA_fnname;
A68_419  QSJBELA;  /* collateral clause result */
A68_419 * RSJBELA;  /* YIELD */
A68_419 ** SSJBELA_nextseed;
A68_INT  TSJBELA;  /* YIELD */
A68_111  USJBELA;  /* avoid structure result */
A68_111  VSJBELA_ctn;
A68_419  WSJBELA;  /* collateral clause result */
A68_218  XSJBELA;  /* avoid structure result */
A68_419 * YSJBELA;  /* YIELD */
A68_394 * ZSJBELA_assclosure;
A68_611  ATJBELA;  /* collateral clause result */
A68_673  CTJBELA_generator;   /* proc value of non-global proc */
A68_102  HTJBELA;  /* avoid structure result */
A68_VC  ITJBELA;  /* avoid structure result */
A68_102  JTJBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_102  KTJBELA;  /* OPERATORS - assign op */
A68_611  LTJBELA;  /* clause result */
A_PROC_ENTRY(get_assclosure);
 /* line 284: */
 /* line 285: */
{ 
OFKAELA_check_selected( (*(&(HXJAELA_library->Currentct))), Msg, &ISJBELA );
JSJBELA_cr = ISJBELA;
 /* line 286: */
SSDBELA_create_closure(JSJBELA_cr, Msg);
 /* line 288: */
KSJBELA_index = 0;
 /* line 289: */
 /* line 290: */
LSJBELA = 1 ;
if ( HKFAOST_is_fnname((*(&A_VINDEX(Names,LSJBELA)))) )
{ 
 /* line 291: */
 /* line 292: */
NSJBELA = KSJBELA_index+=1 ;
LKFAOST_get_fnname( (*(&A_VINDEX(Names,NSJBELA))), Msg, &OSJBELA );
MSJBELA = OSJBELA;
} 
else
{ 
MSJBELA = EOAAOSL_nullstr;
} 
PSJBELA_fnname = MSJBELA;
 /* line 293: */
QSJBELA.Cregion = JSJBELA_cr;
QSJBELA.Fnname = PSJBELA_fnname;
QSJBELA.Rest = BWDBELA_nilclosureseed;
RSJBELA = A_HEAP(A68_419 ) ;
(*RSJBELA) = QSJBELA ;
XEJBELA_seeds = RSJBELA;
 /* line 294: */
SSJBELA_nextseed = (&(XEJBELA_seeds->Rest));
 /* line 296: */
for ( ;; )
{ 
 /* line 297: */
if ( !((KSJBELA_index<Names.upb)) ) break;
SOAAOST_flt_if_interrupted(Msg);
 /* line 298: */
 /* line 299: */
 /* line 300: */
TSJBELA = (KSJBELA_index+1) ;
if ( FRFAOST_is_ctname((*(&A_VINDEX(Names,TSJBELA)))) )
{ 
URFAOST_get_ctname( Names, (&KSJBELA_index), (*(&((&(HXJAELA_library->Currentct))->Context))), Msg, &USJBELA );
VSJBELA_ctn = USJBELA;
 /* line 301: */
 /* line 302: */
OFKAELA_check_selected( VSJBELA_ctn, Msg, &XSJBELA );
WSJBELA.Cregion = XSJBELA;
WSJBELA.Fnname = EOAAOSL_nullstr;
WSJBELA.Rest = BWDBELA_nilclosureseed;
YSJBELA = A_HEAP(A68_419 ) ;
(*YSJBELA) = WSJBELA ;
(*SSJBELA_nextseed) = YSJBELA;
 /* line 303: */
 /* line 304: */
SSJBELA_nextseed = (&((*SSJBELA_nextseed)->Rest));
} 
else
{ 
 /* line 305: */
 /* line 306: */
KSJBELA_index+=1;
} 
}
 /* line 308: */
ZSJBELA_assclosure = FWDBELA_generate_closure(XEJBELA_seeds, A68_TRUE, Msg);
 /* line 309: */
ZSJBELA_assclosure = MBEBELA_get_allimports(ZSJBELA_assclosure, Msg);
 /* line 310: */
ATJBELA.Closure = ZSJBELA_assclosure;
A_CLOSURE( CTJBELA_generator, DTJBELA_generator, ETJBELA_generator );
 /* line 311: */
A_CALLPROC(CTJBELA_generator,(A68_FALSE, &HTJBELA),(A68_FALSE, &HTJBELA,(CTJBELA_generator).nonlocals));
UQDBELA_title(  &ITJBELA );
KTJBELA = A_HVEC(JTJBELA,ITJBELA,A68_VC ) ;
A_VASSIGN2(KTJBELA,HTJBELA,A68_VC ) ;
ATJBELA.Head_data = HTJBELA;
LTJBELA = ATJBELA;
} 
A_PROC_EXIT(get_assclosure);
*ReturnedValue = (LTJBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  OTJBELA_write_cs(A68_428  Writer, A68_97  Msg)
{ 
A_PROC_ENTRY(write_cs);
 /* line 314: */
WBEBELA_write_closureseeds(XEJBELA_seeds, Writer, Msg);
A_PROC_EXIT(write_cs);
return;
} 
#undef NL

A_STATIC A68_VOID  RTJBELA_assemble_prelude(A68_438  Names, A68_97  Msg)
{ 
A68_638  STJBELA;  /* procedure value */
A68_630  TTJBELA;  /* procedure value */
A68_158  UTJBELA;  /* procedure value */
A68_639  VTJBELA;  /* procedure value */
A_PROC_ENTRY(assemble_prelude);
 /* line 317: */
 /* line 318: */
{ 
XEJBELA_seeds = (A68_419 *)A68_NIL;
 /* line 319: */
QJBBELA_save_library(Msg);
 /* line 320: */
 /* line 321: */
 /* line 322: */
 /* line 323: */
 /* line 324: */
STJBELA.fn.fn_global = HSJBELA_get_assclosure;
STJBELA.nonlocals = A68_NIL;
TTJBELA.fn.fn_global = OTJBELA_write_cs;
TTJBELA.nonlocals = A68_NIL;
UTJBELA.fn.fn_global = ZLBBELA_zero_ctnos;
UTJBELA.nonlocals = A68_NIL;
VTJBELA.fn.fn_global = DJBAELA_check_sim_closure;
VTJBELA.nonlocals = A68_NIL;
LKVBTRN_transform_prelude(Names, A68_FALSE, (*(&(HXJAELA_library->Name))), (*(&((&(HXJAELA_library->Currentct))->Context))), STJBELA, TTJBELA, UTJBELA, VTJBELA, Msg);
} 
A_PROC_EXIT(assemble_prelude);
return;
} 
#undef NL

A_STATIC A68_VOID  YTJBELA_assemblefile_prelude(A68_438  Names, A68_97  Msg)
{ 
A68_638  ZTJBELA;  /* procedure value */
A68_630  AUJBELA;  /* procedure value */
A68_158  BUJBELA;  /* procedure value */
A68_639  CUJBELA;  /* procedure value */
A_PROC_ENTRY(assemblefile_prelude);
 /* line 327: */
 /* line 328: */
{ 
XEJBELA_seeds = (A68_419 *)A68_NIL;
 /* line 329: */
QJBBELA_save_library(Msg);
 /* line 330: */
 /* line 331: */
 /* line 332: */
 /* line 333: */
 /* line 334: */
ZTJBELA.fn.fn_global = HSJBELA_get_assclosure;
ZTJBELA.nonlocals = A68_NIL;
AUJBELA.fn.fn_global = OTJBELA_write_cs;
AUJBELA.nonlocals = A68_NIL;
BUJBELA.fn.fn_global = ZLBBELA_zero_ctnos;
BUJBELA.nonlocals = A68_NIL;
CUJBELA.fn.fn_global = DJBAELA_check_sim_closure;
CUJBELA.nonlocals = A68_NIL;
LKVBTRN_transform_prelude(Names, A68_TRUE, (*(&(HXJAELA_library->Name))), (*(&((&(HXJAELA_library->Currentct))->Context))), ZTJBELA, AUJBELA, BUJBELA, CUJBELA, Msg);
} 
A_PROC_EXIT(assemblefile_prelude);
return;
} 
#undef NL

A68_VOID  EUJBELA_make_simcommands(A68_467  Globals, A68_467  *ReturnedValue)
{ 
A68_632  FUJBELA;  /* procedure value */
A68_632  GUJBELA;  /* procedure value */
A68_689  HUJBELA;  /* collateral clause result */
A68_464  IUJBELA;  /* collateral clause result */
A68_VC  LUJBELA;  /* avoid structure result */
A68_VC  OUJBELA;  /* avoid structure result */
A68_683  PUJBELA;  /* collateral clause result */
A68_434  QUJBELA;  /* avoid structure result */
A68_436  RUJBELA;  /* OPERATORS - mode -> union mode */
A68_434  SUJBELA;  /* avoid structure result */
A68_436  TUJBELA;  /* OPERATORS - mode -> union mode */
A68_435  UUJBELA;  /* OPERATORS - istruct -> vector */
A68_434  VUJBELA;  /* avoid structure result */
A68_436  WUJBELA;  /* OPERATORS - mode -> union mode */
A68_VC  ZUJBELA;  /* avoid structure result */
A68_468  AVJBELA;  /* OPERATORS - mode -> union mode */
A68_460  EVJBELA;  /* OPERATORS - mode -> union mode */
A68_462  FVJBELA;  /* YIELD */
A68_462  GVJBELA;  /* procedure value */
A68_464 * HVJBELA;  /* YIELD */
A68_463  IVJBELA;  /* OPERATORS - mode -> union mode */
A68_464  JVJBELA;  /* collateral clause result */
A68_VC  MVJBELA;  /* avoid structure result */
A68_683  NVJBELA;  /* collateral clause result */
A68_434  OVJBELA;  /* avoid structure result */
A68_436  PVJBELA;  /* OPERATORS - mode -> union mode */
A68_434  QVJBELA;  /* avoid structure result */
A68_436  RVJBELA;  /* OPERATORS - mode -> union mode */
A68_435  SVJBELA;  /* OPERATORS - istruct -> vector */
A68_434  TVJBELA;  /* avoid structure result */
A68_436  UVJBELA;  /* OPERATORS - mode -> union mode */
A68_VC  XVJBELA;  /* avoid structure result */
A68_468  YVJBELA;  /* OPERATORS - mode -> union mode */
A68_460  CWJBELA;  /* OPERATORS - mode -> union mode */
A68_462  DWJBELA;  /* YIELD */
A68_462  EWJBELA;  /* procedure value */
A68_464 * FWJBELA;  /* YIELD */
A68_463  GWJBELA;  /* OPERATORS - mode -> union mode */
A68_464  HWJBELA;  /* collateral clause result */
A68_VC  KWJBELA;  /* avoid structure result */
A68_VC  NWJBELA;  /* avoid structure result */
A68_468  OWJBELA;  /* OPERATORS - mode -> union mode */
A68_460  SWJBELA;  /* OPERATORS - mode -> union mode */
A68_462  TWJBELA;  /* YIELD */
A68_462  UWJBELA;  /* procedure value */
A68_464 * VWJBELA;  /* YIELD */
A68_463  WWJBELA;  /* OPERATORS - mode -> union mode */
A68_464  YWJBELA;  /* collateral clause result */
A68_VC  BXJBELA;  /* avoid structure result */
A68_VC  EXJBELA;  /* avoid structure result */
A68_468  FXJBELA;  /* OPERATORS - mode -> union mode */
A68_460  JXJBELA;  /* OPERATORS - mode -> union mode */
A68_462  KXJBELA;  /* YIELD */
A68_462  LXJBELA;  /* procedure value */
A68_464 * MXJBELA;  /* YIELD */
A68_463  NXJBELA;  /* OPERATORS - mode -> union mode */
A68_467  OXJBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  PXJBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_463  RXJBELA;  /* OPERATORS - mode -> union mode */
A68_465 * SXJBELA;  /* YIELD */
A68_464  TXJBELA;  /* collateral clause result */
A68_VC  WXJBELA;  /* avoid structure result */
A68_VC  ZXJBELA;  /* avoid structure result */
A68_468  AYJBELA;  /* OPERATORS - mode -> union mode */
A68_460  BYJBELA;  /* OPERATORS - mode -> union mode */
A68_462  CYJBELA;  /* YIELD */
A68_462  DYJBELA;  /* procedure value */
A68_464 * EYJBELA;  /* YIELD */
A68_463  FYJBELA;  /* OPERATORS - mode -> union mode */
A68_467  GYJBELA;  /* OPERATORS - istruct -> vector */
A68_467  HYJBELA;  /* avoid structure result */
A68_467  IYJBELA_simcommands;
A68_467  JYJBELA;  /* clause result */
A68_462  KYJBELA;  /* procedure value */
A68_462  LYJBELA;  /* procedure value */
A68_467  MYJBELA;  /* avoid structure result */
A68_467  NYJBELA;  /* avoid structure result */
A_PROC_ENTRY(make_simcommands);
 /* line 337: */
 /* line 338: */
{ 
FUJBELA.fn.fn_global = LMCAOST_default_set_var;
FUJBELA.nonlocals = A68_NIL;
QLCAOST_add_var(NEJBELA_sim_var, NEJBELA_sim_var, YKCAOST_env_var, FUJBELA);
 /* line 340: */
GUJBELA.fn.fn_global = URJBELA_set_trace;
GUJBELA.nonlocals = A68_NIL;
QLCAOST_add_var(WEJBELA_trace_var, JLCAOST_false_var, ALCAOST_bool_var, GUJBELA);
 /* line 342: */
 /* line 344: */
 /* line 345: */
ZAAAOSI_makervc( KUJBELA, &LUJBELA );
IUJBELA.Name = LUJBELA;
 /* line 346: */
ZAAAOSI_makervc( NUJBELA, &OUJBELA );
IUJBELA.Abreviation = OUJBELA;
 /* line 349: */
LTAAOST_opt( CJFAOST_fnname_syntax, &QUJBELA );
PUJBELA.data[0] = A_UNITE(RUJBELA,mode2,2,QUJBELA);
LTAAOST_opt( HNFAOST_filename_syntax, &SUJBELA );
PUJBELA.data[1] = A_UNITE(TUJBELA,mode2,2,SUJBELA);
 /* line 350: */
ATAAOST_prod( A_HISVEC(UUJBELA,PUJBELA,2,A68_436 ), &VUJBELA );
IUJBELA.Parameter = A_UNITE(WUJBELA,mode2,2,VUJBELA);
IUJBELA.Access = XMDAOST_normalaccess;
 /* line 352: */
IUJBELA.Continuation = ZNDAOST_continue;
 /* line 353: */
 /* line 354: */
 /* line 355: */
 /* line 356: */
 /* line 357: */
ZAAAOSI_makervc( YUJBELA, &ZUJBELA );
IUJBELA.Help = A_UNITE(AVJBELA,mode1,1,ZUJBELA);
GVJBELA.fn.fn_global = DVJBELA_anonymous;
GVJBELA.nonlocals = A68_NIL;
FVJBELA = GVJBELA ;
IUJBELA.Command = A_UNITE(EVJBELA,mode3,3,FVJBELA);
 /* line 361: */
HVJBELA = A_HEAP(A68_464 ) ;
(*HVJBELA) = IUJBELA ;
HUJBELA.data[0] = A_UNITE(IVJBELA,mode1,1,HVJBELA);
 /* line 362: */
ZAAAOSI_makervc( LVJBELA, &MVJBELA );
JVJBELA.Name = MVJBELA;
 /* line 363: */
JVJBELA.Abreviation = EOAAOSL_nullstr;
 /* line 366: */
LTAAOST_opt( CJFAOST_fnname_syntax, &OVJBELA );
NVJBELA.data[0] = A_UNITE(PVJBELA,mode2,2,OVJBELA);
LTAAOST_opt( HNFAOST_filename_syntax, &QVJBELA );
NVJBELA.data[1] = A_UNITE(RVJBELA,mode2,2,QVJBELA);
 /* line 367: */
ATAAOST_prod( A_HISVEC(SVJBELA,NVJBELA,2,A68_436 ), &TVJBELA );
JVJBELA.Parameter = A_UNITE(UVJBELA,mode2,2,TVJBELA);
JVJBELA.Access = XMDAOST_normalaccess;
 /* line 369: */
JVJBELA.Continuation = ZNDAOST_continue;
 /* line 370: */
 /* line 371: */
 /* line 372: */
 /* line 373: */
 /* line 374: */
ZAAAOSI_makervc( WVJBELA, &XVJBELA );
JVJBELA.Help = A_UNITE(YVJBELA,mode1,1,XVJBELA);
EWJBELA.fn.fn_global = BWJBELA_anonymous;
EWJBELA.nonlocals = A68_NIL;
DWJBELA = EWJBELA ;
JVJBELA.Command = A_UNITE(CWJBELA,mode3,3,DWJBELA);
 /* line 378: */
FWJBELA = A_HEAP(A68_464 ) ;
(*FWJBELA) = JVJBELA ;
HUJBELA.data[1] = A_UNITE(GWJBELA,mode1,1,FWJBELA);
 /* line 379: */
ZAAAOSI_makervc( JWJBELA, &KWJBELA );
HWJBELA.Name = KWJBELA;
HWJBELA.Abreviation = EOAAOSL_nullstr;
HWJBELA.Parameter = SRAAOST_noparameters;
HWJBELA.Access = XMDAOST_normalaccess;
 /* line 381: */
HWJBELA.Continuation = ZNDAOST_continue;
 /* line 382: */
ZAAAOSI_makervc( MWJBELA, &NWJBELA );
HWJBELA.Help = A_UNITE(OWJBELA,mode1,1,NWJBELA);
UWJBELA.fn.fn_global = RWJBELA_anonymous;
UWJBELA.nonlocals = A68_NIL;
TWJBELA = UWJBELA ;
HWJBELA.Command = A_UNITE(SWJBELA,mode3,3,TWJBELA);
 /* line 386: */
VWJBELA = A_HEAP(A68_464 ) ;
(*VWJBELA) = HWJBELA ;
HUJBELA.data[2] = A_UNITE(WWJBELA,mode1,1,VWJBELA);
 /* line 387: */
 /* line 388: */
ZAAAOSI_makervc( AXJBELA, &BXJBELA );
YWJBELA.Name = BXJBELA;
YWJBELA.Abreviation = EOAAOSL_nullstr;
YWJBELA.Parameter = SRAAOST_noparameters;
 /* line 389: */
YWJBELA.Access = XMDAOST_normalaccess;
YWJBELA.Continuation = ZNDAOST_continue;
 /* line 390: */
ZAAAOSI_makervc( DXJBELA, &EXJBELA );
YWJBELA.Help = A_UNITE(FXJBELA,mode1,1,EXJBELA);
 /* line 393: */
LXJBELA.fn.fn_global = IXJBELA_anonymous;
LXJBELA.nonlocals = A68_NIL;
KXJBELA = LXJBELA ;
YWJBELA.Command = A_UNITE(JXJBELA,mode3,3,KXJBELA);
 /* line 395: */
MXJBELA = A_HEAP(A68_464 ) ;
(*MXJBELA) = YWJBELA ;
SXJBELA = NSDAOST_make_group(QXJBELA, A_HVEC(PXJBELA,'D',A68_CHAR ), XMDAOST_normalaccess, A_HVEC(OXJBELA,A_UNITE(NXJBELA,mode1,1,MXJBELA),A68_463 )) ;
HUJBELA.data[3] = A_UNITE(RXJBELA,mode2,2,SXJBELA);
 /* line 396: */
ZAAAOSI_makervc( VXJBELA, &WXJBELA );
TXJBELA.Name = WXJBELA;
TXJBELA.Abreviation = EOAAOSL_nullstr;
TXJBELA.Parameter = SRAAOST_noparameters;
TXJBELA.Access = BNDAOST_hiddenaccess;
 /* line 398: */
TXJBELA.Continuation = ZNDAOST_continue;
 /* line 399: */
 /* line 401: */
ZAAAOSI_makervc( YXJBELA, &ZXJBELA );
TXJBELA.Help = A_UNITE(AYJBELA,mode1,1,ZXJBELA);
 /* line 402: */
DYJBELA.fn.fn_global = DQJBELA_ellanet_command;
DYJBELA.nonlocals = A68_NIL;
CYJBELA = DYJBELA ;
TXJBELA.Command = A_UNITE(BYJBELA,mode3,3,CYJBELA);
EYJBELA = A_HEAP(A68_464 ) ;
(*EYJBELA) = TXJBELA ;
HUJBELA.data[4] = A_UNITE(FYJBELA,mode1,1,EYJBELA);
ARDAOST_makecommands( A_HISVEC(GYJBELA,HUJBELA,5,A68_463 ), &HYJBELA );
IYJBELA_simcommands = HYJBELA;
 /* line 404: */
 /* line 405: */
 /* line 406: */
 /* line 409: */
KYJBELA.fn.fn_global = RTJBELA_assemble_prelude;
KYJBELA.nonlocals = A68_NIL;
LYJBELA.fn.fn_global = YTJBELA_assemblefile_prelude;
LYJBELA.nonlocals = A68_NIL;
HVTBTRN_make_asscommands( Globals, A68_TRUE, KYJBELA, LYJBELA, &MYJBELA );
A_CALLPROC(GQDAOST_add,(IYJBELA_simcommands, MYJBELA, &NYJBELA),(IYJBELA_simcommands, MYJBELA, &NYJBELA,(GQDAOST_add).nonlocals));
JYJBELA = NYJBELA;
} 
A_PROC_EXIT(make_simcommands);
*ReturnedValue = (JYJBELA);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 5: */
 /* line 6: */
 /* line 9: */
void GEJBELA(void)   /* initialise DECS simcommands */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/simcommands.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/checksim.m","/u/model/ella/transform/assoc/mfiles/asscommands.m","/u/model/ella/ostools/assoc/mfiles/variables.m","/u/model/ella/transform/assoc/mfiles/openinterface.m","/u/model/ella/transform/assoc/mfiles/reform.m","/u/model/ella/transform/assoc/mfiles/multilets.m","/u/model/ella/transform/assoc/mfiles/multimakes.m","/u/model/ella/transform/assoc/mfiles/portname.m","/u/model/ella/transform/assoc/mfiles/joins.m","/u/model/ella/transform/assoc/mfiles/timescale.m","/u/model/ella/transform/assoc/mfiles/sequence.m","/u/model/ella/transform/assoc/mfiles/fntype.m","/u/model/ella/transform/assoc/mfiles/macro.m","/u/model/ella/transform/assoc/mfiles/import.m","/u/model/ella/transform/assoc/mfiles/transformprocs.m","/u/model/ella/transform/assoc/mfiles/closureprocs.m","/u/model/ella/ostools/assoc/mfiles/kernelreader.m","/u/model/ella/ostools/assoc/mfiles/command.m","/u/model/ella/ostools/assoc/mfiles/commandsyntax.m","./mfiles/assclosure.m","/u/model/ella/transform/assoc/mfiles/assmodes.m","./mfiles/libinterface.m","./mfiles/libmodes.m","/u/model/ella/ostools/assoc/mfiles/ioprocs.m","/u/model/ella/ostools/assoc/mfiles/options.m","/u/model/ella/ostools/assoc/mfiles/testmode.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
WIBAELA();   /* USE checksim */
ZHRBTRN();   /* USE asscommands */
TKCAOST();   /* USE variables */
TPCATRN();   /* USE openinterface */
LHFBTRN();   /* USE reform */
XUEBTRN();   /* USE multilets */
YJEBTRN();   /* USE multimakes */
XVCBTRN();   /* USE portname */
NTBBTRN();   /* USE joins */
CPABTRN();   /* USE timescale */
TTYATRN();   /* USE sequence */
SUVATRN();   /* USE fntype */
QSOATRN();   /* USE macro */
FIOATRN();   /* USE import */
IHJATRN();   /* USE transformprocs */
SKCATRN();   /* USE closureprocs */
TXEAOST();   /* USE kernelreader */
FMDAOST();   /* USE command */
LRAAOST();   /* USE commandsyntax */
MQDBELA();   /* USE assclosure */
BAAATRN();   /* USE assmodes */
SOABELA();   /* USE libinterface */
FTJAELA();   /* USE libmodes */
TIGAOST();   /* USE ioprocs */
BAAAOST();   /* USE options */
QFBAOST();   /* USE testmode */
PCAAOST();   /* USE osinterface */
JSCAOST();   /* USE basics */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ella/assoc/./a68files/simcommands.a68";
A_config.translation_time = "Tue Apr  4 10:41:58 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "FEJBELA (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:41:58 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS simcommands);
UEAALIB_a68config(LGAALIB_configinfo, KEJBELA);
 /* line 63: */
NEJBELA_sim_var = MEJBELA;
QEJBELA_ellanet_var = PEJBELA;
TEJBELA_ellalib = SEJBELA;
 /* line 64: */
WEJBELA_trace_var = VEJBELA;
 /* line 65: */
 /* line 68: */
 /* line 76: */
 /* line 261: */
 /* line 277: */
 /* line 283: */
 /* line 313: */
 /* line 316: */
 /* line 326: */
 /* line 336: */
 /* line 410: */
A_PROC_EXIT(DECS simcommands);
} 
#undef NL
/* end of translation of ./a68files/simcommands.a68 */
