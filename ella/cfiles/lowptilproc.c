
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
/* UNAME:RCEBELA */
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

A_PROCEDURE(A68_VOID ,A68t257,(struct A68t111 ),(struct A68t111 ,void *));
typedef struct A68t257  A68_257 ;    /* PROC(MODE111) VOID */

A_PROCEDURE(A68_VOID ,A68t258,(A68_INT ,struct A68t97 ),(A68_INT ,struct A68t97 ,void *));
typedef struct A68t258  A68_258 ;    /* PROC(INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t259,(struct A68t176 *,struct A68t176 *,struct A68t176 *,struct A68t97 ),(struct A68t176 *,struct A68t176 *,struct A68t176 *,struct A68t97 ,void *));
typedef struct A68t259  A68_259 ;    /* PROC(REF MODE176,REF MODE176,REF MODE176,MODE97) VOID */

A_PROCEDURE(struct A68t236 *,A68t260,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t260  A68_260 ;    /* PROC(MODE97) REF MODE236 */

A_PROCEDURE(A68_VOID ,A68t261,(struct A68t235 ,struct A68t97 ,struct A68t176 *),(struct A68t235 ,struct A68t97 ,struct A68t176 *,void *));
typedef struct A68t261  A68_261 ;    /* PROC(REF MODE235,MODE97) MODE176 */

A_PROCEDURE(A68_VOID ,A68t262,(struct A68t234 *,struct A68t97 ,struct A68t235 *),(struct A68t234 *,struct A68t97 ,struct A68t235 *,void *));
typedef struct A68t262  A68_262 ;    /* PROC(REF MODE234,MODE97) REF MODE235 */

A_PROCEDURE(A68_VOID ,A68t263,(struct A68t235 ),(struct A68t235 ,void *));
typedef struct A68t263  A68_263 ;    /* PROC(REF MODE235) VOID */

A_PROCEDURE(A68_INT ,A68t264,(struct A68t234 *,A68_VC ,struct A68t97 ),(struct A68t234 *,A68_VC ,struct A68t97 ,void *));
typedef struct A68t264  A68_264 ;    /* PROC(REF MODE234,REF MODE26,MODE97) INT */

A_PROCEDURE(struct A68t240 *,A68t265,(struct A68t234 *,A68_INT ),(struct A68t234 *,A68_INT ,void *));
typedef struct A68t265  A68_265 ;    /* PROC(REF MODE234,INT) REF MODE240 */

A_PROCEDURE(struct A68t240 *,A68t266,(struct A68t239 ,A68_VC ),(struct A68t239 ,A68_VC ,void *));
typedef struct A68t266  A68_266 ;    /* PROC(MODE239,REF MODE26) REF MODE240 */

A_PROCEDURE(A68_VOID ,A68t267,(A68_INT ,A68_INT ,struct A68t97 ),(A68_INT ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t267  A68_267 ;    /* PROC(INT,INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t268,(A68_BOOL ,struct A68t97 ),(A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t268  A68_268 ;    /* PROC(BOOL,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t269,(struct A68t173 *,struct A68t267 ,struct A68t97 ),(struct A68t173 *,struct A68t267 ,struct A68t97 ,void *));
typedef struct A68t269  A68_269 ;    /* PROC(REF MODE173,MODE267,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t270,(A68_VC ,struct A68t267 ,struct A68t97 ),(A68_VC ,struct A68t267 ,struct A68t97 ,void *));
typedef struct A68t270  A68_270 ;    /* PROC(MODE26,MODE267,MODE97) VOID */

A_PROCEDURE(A68_BOOL ,A68t271,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t271  A68_271 ;    /* PROC(MODE97) BOOL */

A_PROCEDURE(A68_INT ,A68t272,(A68_VC ,struct A68t235 ),(A68_VC ,struct A68t235 ,void *));
typedef struct A68t272  A68_272 ;    /* PROC(REF MODE26,REF MODE235) INT */

A_PROCEDURE(A68_BOOL ,A68t273,(struct A68t234 *,struct A68t235 ,A68_INT ,struct A68t97 ),(struct A68t234 *,struct A68t235 ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t273  A68_273 ;    /* PROC(REF MODE234,REF MODE235,INT,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t274,(A68_INT ,struct A68t239 *),(A68_INT ,struct A68t239 *,void *));
typedef struct A68t274  A68_274 ;    /* PROC(INT) MODE239 */

A_PROCEDURE(A68_INT ,A68t275,(struct A68t239 ),(struct A68t239 ,void *));
typedef struct A68t275  A68_275 ;    /* PROC(MODE239) INT */

A_PROCEDURE(A68_INT ,A68t276,(struct A68t239 ,A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t97 ),(struct A68t239 ,A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t276  A68_276 ;    /* PROC(MODE239,BOOL,BOOL,BOOL,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t277,(struct A68t97 ,struct A68t176 *),(struct A68t97 ,struct A68t176 *,void *));
typedef struct A68t277  A68_277 ;    /* PROC(MODE97) MODE176 */
struct A68t278{
A68_INT  Version;
A_PAD_INT(PAD_75)
struct A68t176  Data;
};
typedef struct A68t278  A68_278 ;    /* STRUCT(INT,MODE176)  */

A_PROCEDURE(A68_VOID ,A68t279,(A68_VC ,A68_VC ,A68_INT ,struct A68t97 ),(A68_VC ,A68_VC ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t279  A68_279 ;    /* PROC(MODE26,MODE26,INT,MODE97) VOID */

A_PROCEDURE(A68_BOOL ,A68t280,(A68_INT ),(A68_INT ,void *));
typedef struct A68t280  A68_280 ;    /* PROC(INT) BOOL */

A_PROCEDURE(struct A68t227 *,A68t281,(struct A68t234 *,A68_INT ,struct A68t97 ),(struct A68t234 *,A68_INT ,struct A68t97 ,void *));
typedef struct A68t281  A68_281 ;    /* PROC(REF MODE234,INT,MODE97) REF MODE227 */

A_PROCEDURE(A68_VOID ,A68t282,(struct A68t234 *,struct A68t97 ),(struct A68t234 *,struct A68t97 ,void *));
typedef struct A68t282  A68_282 ;    /* PROC(REF MODE234,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t283,(struct A68t234 *,struct A68t32 ,struct A68t97 ),(struct A68t234 *,struct A68t32 ,struct A68t97 ,void *));
typedef struct A68t283  A68_283 ;    /* PROC(REF MODE234,MODE32,MODE97) VOID */
struct A68t285 ;

A_PROCEDURE(A68_BOOL ,A68t284,(struct A68t234 *,struct A68t285 ,struct A68t97 ),(struct A68t234 *,struct A68t285 ,struct A68t97 ,void *));
typedef struct A68t284  A68_284 ;    /* PROC(REF MODE234,MODE285,MODE97) BOOL */

A_PROCEDURE(A68_BOOL ,A68t285,(struct A68t227 *,struct A68t97 ),(struct A68t227 *,struct A68t97 ,void *));
typedef struct A68t285  A68_285 ;    /* PROC(REF MODE227,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t286,(struct A68t234 *,A68_INT ,struct A68t32 ,A68_INT ,struct A68t177 ,struct A68t97 ),(struct A68t234 *,A68_INT ,struct A68t32 ,A68_INT ,struct A68t177 ,struct A68t97 ,void *));
typedef struct A68t286  A68_286 ;    /* PROC(REF MODE234,INT,REF MODE32,INT,REF MODE177,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t287,(struct A68t227 *,A68_INT ,struct A68t278 ,struct A68t97 ),(struct A68t227 *,A68_INT ,struct A68t278 ,struct A68t97 ,void *));
typedef struct A68t287  A68_287 ;    /* PROC(REF MODE227,INT,MODE278,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t288,(struct A68t227 *,A68_INT ,struct A68t97 ,struct A68t278 *),(struct A68t227 *,A68_INT ,struct A68t97 ,struct A68t278 *,void *));
typedef struct A68t288  A68_288 ;    /* PROC(REF MODE227,INT,MODE97) MODE278 */

A_PROCEDURE(A68_VOID ,A68t289,(struct A68t227 *,A68_INT ,struct A68t97 ),(struct A68t227 *,A68_INT ,struct A68t97 ,void *));
typedef struct A68t289  A68_289 ;    /* PROC(REF MODE227,INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t290,(struct A68t234 *,A68_INT ,struct A68t97 ),(struct A68t234 *,A68_INT ,struct A68t97 ,void *));
typedef struct A68t290  A68_290 ;    /* PROC(REF MODE234,INT,MODE97) VOID */
struct A68t291{
A68_BOOL  Logging;
A_PAD_BOOL(PAD_76)
A68_BOOL  Outputing;
A_PAD_BOOL(PAD_77)
A68_BOOL  Seeing_in;
A_PAD_BOOL(PAD_78)
A68_BOOL  Seeing_out;
A_PAD_BOOL(PAD_79)
A68_BOOL  Paging;
A_PAD_BOOL(PAD_80)
A68_BOOL  Clock;
A_PAD_BOOL(PAD_81)
A68_BOOL  Screen_output;
A_PAD_BOOL(PAD_82)
A68_INT  Width;
A_PAD_INT(PAD_83)
A68_INT  Page_count;
A_PAD_INT(PAD_84)
A68_INT  Page_length;
A_PAD_INT(PAD_85)
A68_INT  Eof_count;
A_PAD_INT(PAD_86)
struct A68t292 * Standard_reader;
struct A68t293 * Infile;
struct A68t124  Prompt;
struct A68t127 * Logfile;
struct A68t127 * Outfile;
};
typedef struct A68t291  A68_291 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,INT,INT,REF MODE292,REF MODE293,MODE124,REF MODE127,REF MODE127)  */

A_PROCEDURE(A68_INT ,A68t294,(A68_VC *,struct A68t97 ),(A68_VC *,struct A68t97 ,void *));
typedef struct A68t294  A68_294 ;    /* PROC(REF REF MODE26,MODE97) INT */
struct A68t292{
A68_VC  Rdbuffer;
struct A68t294  Rdline;
A68_INT  Rdcharend;
A_PAD_INT(PAD_87)
A68_INT  Rdcharno;
A_PAD_INT(PAD_88)
A68_INT  Start_of_word;
A_PAD_INT(PAD_89)
struct A68t295 * Stack;
};
typedef struct A68t292  A68_292 ;    /* STRUCT(REF MODE26,MODE294,INT,INT,INT,REF MODE295)  */
struct A68t293{
struct A68t127 * File;
A68_BOOL  Suspended;
A_PAD_BOOL(PAD_90)
A68_INT  Number;
A_PAD_INT(PAD_91)
A68_VC  Name;
struct A68t292 * Reader;
struct A68t293 * Previous;
};
typedef struct A68t293  A68_293 ;    /* STRUCT(REF MODE127,BOOL,INT,REF MODE26,REF MODE292,REF MODE293)  */
struct A68t295{
A68_VC  Line;
struct A68t295 * Rest;
};
typedef struct A68t295  A68_295 ;    /* STRUCT(REF MODE26,REF MODE295)  */

A_PROCEDURE(struct A68t291 *,A68t296,(void),(void *));
typedef struct A68t296  A68_296 ;    /* PROC REF MODE291 */

A_PROCEDURE(A68_VOID ,A68t297,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t297  A68_297 ;    /* PROC(REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t298,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t298  A68_298 ;    /* PROC(MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t299,(struct A68t124 ),(struct A68t124 ,void *));
typedef struct A68t299  A68_299 ;    /* PROC(MODE124) VOID */
struct A68t301 { A68_INT mode; union {
A68_INT  mode1;
} data; };
typedef struct A68t301  A68_301 ;    /* UNION(INT,VOID)  */
struct A68t300{
A68_INT  Type;
A_PAD_INT(PAD_92)
struct A68t301  Val;
};
typedef struct A68t300  A68_300 ;    /* STRUCT(INT,MODE301)  */
A_VECTOR(A68_SBITS ,A68t303);
typedef struct A68t303  A68_303 ;    /* VECTOR [] SHORT BITS */
struct A68t302{
A68_INT  Test_index;
A_PAD_INT(PAD_93)
struct A68t303  Sid_code;
A68_INT * Index;
A68_INT * Stind;
struct A68t300 * Lex;
struct A68t32 * Sidstack;
struct A68t53  Sid_blwds;
A68_INT  Sid_mult;
A_PAD_INT(PAD_94)
};
typedef struct A68t302  A68_302 ;    /* STRUCT(INT,MODE303,REF INT,REF INT,REF MODE300,REF REF MODE32,MODE53,INT)  */

A_PROCEDURE(A68_VOID ,A68t304,(A68_BOOL ,struct A68t302 *),(A68_BOOL ,struct A68t302 *,void *));
typedef struct A68t304  A68_304 ;    /* PROC(BOOL) MODE302 */
struct A68t306 ;
struct A68t307 ;
struct A68t308 ;
struct A68t309 ;
struct A68t310 ;

A_PROCEDURE(A68_VOID ,A68t305,(A68_INT ,struct A68t303 ,struct A68t53 ,struct A68t158 ,struct A68t307 ,struct A68t308 ,struct A68t309 ,struct A68t310 ,struct A68t306 *),(A68_INT ,struct A68t303 ,struct A68t53 ,struct A68t158 ,struct A68t307 ,struct A68t308 ,struct A68t309 ,struct A68t310 ,struct A68t306 *,void *));
typedef struct A68t305  A68_305 ;    /* PROC(INT,MODE303,MODE53,MODE158,MODE307,MODE308,MODE309,MODE310) MODE306 */
struct A68t306 { A68_INT mode; union {
A68_INT  mode2;
} data; };
typedef struct A68t306  A68_306 ;    /* UNION(VOID,INT)  */

A_PROCEDURE(A68_VOID ,A68t307,(struct A68t300 *),(struct A68t300 *,void *));
typedef struct A68t307  A68_307 ;    /* PROC MODE300 */

A_PROCEDURE(A68_VOID ,A68t308,(struct A68t302 ),(struct A68t302 ,void *));
typedef struct A68t308  A68_308 ;    /* PROC(MODE302) VOID */

A_PROCEDURE(A68_VOID ,A68t309,(A68_INT ,A68_INT ,struct A68t301 ,A68_INT ),(A68_INT ,A68_INT ,struct A68t301 ,A68_INT ,void *));
typedef struct A68t309  A68_309 ;    /* PROC(INT,INT,MODE301,INT) VOID */

A_PROCEDURE(A68_INT ,A68t310,(A68_INT ,A68_INT ,struct A68t301 ,A68_INT ),(A68_INT ,A68_INT ,struct A68t301 ,A68_INT ,void *));
typedef struct A68t310  A68_310 ;    /* PROC(INT,INT,MODE301,INT) INT */

A_PROCEDURE(A68_BOOL ,A68t311,(A68_INT ,struct A68t302 ),(A68_INT ,struct A68t302 ,void *));
typedef struct A68t311  A68_311 ;    /* PROC(INT,MODE302) BOOL */

A_PROCEDURE(A68_VOID ,A68t312,(struct A68t158 ),(struct A68t158 ,void *));
typedef struct A68t312  A68_312 ;    /* PROC(MODE158) VOID */

A_PROCEDURE(A68_VOID ,A68t313,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t313  A68_313 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,58,A68t314);
typedef struct A68t314  A68_314 ;    /* STRUCT 58 CHAR */

A_PROCEDURE(A68_VOID ,A68t315,(struct A68t85 ),(struct A68t85 ,void *));
typedef struct A68t315  A68_315 ;    /* PROC(MODE85) VOID */

A_PROCEDURE(A68_VOID ,A68t316,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t316  A68_316 ;    /* PROC(INT,INT) VOID */
A_ISTRUCT(A68_CHAR ,15,A68t317);
typedef struct A68t317  A68_317 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t318);
typedef struct A68t318  A68_318 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t319);
typedef struct A68t319  A68_319 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(struct A68t52 ,6,A68t320);
typedef struct A68t320  A68_320 ;    /* STRUCT 6 MODE52 */

A_PROCEDURE(A68_VOID ,A68t321,(struct A68t176 ,struct A68t97 ),(struct A68t176 ,struct A68t97 ,void *));
typedef struct A68t321  A68_321 ;    /* PROC(MODE176,MODE97) VOID */
A_ISTRUCT(struct A68t52 ,2,A68t322);
typedef struct A68t322  A68_322 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(A68_CHAR ,7,A68t323);
typedef struct A68t323  A68_323 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t324);
typedef struct A68t324  A68_324 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t325);
typedef struct A68t325  A68_325 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t326);
typedef struct A68t326  A68_326 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t327);
typedef struct A68t327  A68_327 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t328);
typedef struct A68t328  A68_328 ;    /* STRUCT 3 MODE52 */
A_ISTRUCT(A68_CHAR ,10,A68t329);
typedef struct A68t329  A68_329 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t330);
typedef struct A68t330  A68_330 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t331);
typedef struct A68t331  A68_331 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t332);
typedef struct A68t332  A68_332 ;    /* STRUCT 14 CHAR */

A_PROCEDURE(A68_VOID ,A68t333,(struct A68t234 *,A68_VC ,struct A68t176 ,struct A68t97 ),(struct A68t234 *,A68_VC ,struct A68t176 ,struct A68t97 ,void *));
typedef struct A68t333  A68_333 ;    /* PROC(REF MODE234,REF MODE26,MODE176,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t334,(A68_BOOL ,struct A68t177 *),(A68_BOOL ,struct A68t177 *,void *));
typedef struct A68t334  A68_334 ;    /* PROC(BOOL) MODE177 */
A_ISTRUCT(A68_CHAR ,34,A68t335);
typedef struct A68t335  A68_335 ;    /* STRUCT 34 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t336);
typedef struct A68t336  A68_336 ;    /* STRUCT 4 MODE52 */
A_ISTRUCT(A68_CHAR ,20,A68t337);
typedef struct A68t337  A68_337 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t338);
typedef struct A68t338  A68_338 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(struct A68t52 ,5,A68t339);
typedef struct A68t339  A68_339 ;    /* STRUCT 5 MODE52 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from sidanalyser --- */
/* --- End of imports from sidanalyser --- */


/* --- Imports from ioprocs --- */
/* --- End of imports from ioprocs --- */


/* --- Imports from attrdecls --- */
extern A68_227 * TBWAELA_get_declattribute(struct A68t234 *,A68_INT ,struct A68t97 );
/* --- End of imports from attrdecls --- */


/* --- Imports from libinterface --- */
extern A68_VOID  LEBBELA_get_decls(struct A68t234 *,struct A68t97 ,A68_235 *);
extern A68_BOOL  QJBBELA_save_library(struct A68t97 );
/* --- End of imports from libinterface --- */


/* --- Imports from libmodes --- */
extern A68_BOOL  UXIAELA_isnilptr(struct A68t173 *,struct A68t176 );
extern A68_237 * HXJAELA_library;
extern A68_INT * JZJAELA_body_key;
extern A68_173 * TYJAELA_discfile;
extern A68_BOOL  REKAELA_check_text(struct A68t234 *,struct A68t97 );
/* --- End of imports from libmodes --- */


/* --- Imports from databasebuffers --- */
extern A68_203 * WYIAELA_readbuffer(struct A68t173 *,struct A68t176 );
extern A68_CHAR  GBJAELA_readchar(struct A68t203 *);
extern A68_INT  PEJAELA_nchars(struct A68t173 *,struct A68t176 ,struct A68t97 );
extern A68_INT  UEJAELA_ndiscptrs(struct A68t173 *,struct A68t176 ,struct A68t97 );
extern A68_VOID  FFJAELA_myreaddiscptrs(struct A68t173 *,struct A68t177 ,struct A68t176 ,struct A68t97 );
extern A68_203 * IFJAELA_startwrite(struct A68t173 *,struct A68t87 );
extern A68_INT  PZIAELA_readiltok(struct A68t203 *);
/* --- End of imports from databasebuffers --- */


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


/* --- Imports from basics --- */
/* --- End of imports from basics --- */


/* --- Imports from messageproc --- */
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void BAAAELA(void);   /* sidanalyser */
extern void TIGAOST(void);   /* ioprocs */
extern void DZVAELA(void);   /* attrdecls */
extern void SOABELA(void);   /* libinterface */
extern void FTJAELA(void);   /* libmodes */
extern void NWIAELA(void);   /* databasebuffers */
extern void PCAAOST(void);   /* osinterface */
extern void JSCAOST(void);   /* basics */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_314   VCEBELA = {"$Id: lowptilproc.a68,v 34.2 1995/03/29 13:03:30 ella Exp $"}; 
A_GISVEC(A68_VC ,WCEBELA,VCEBELA,58)
A68_177  XCEBELA_ptrs;
A68_INT  YCEBELA_ptrcount;
#define ZCEBELA_eoflib 125
static A68_INT  ADEBELA_integer1;
static A68_VC  BDEBELA_identifier1;
static A68_BOOL  CDEBELA_monitor;
A68_BOOL  DDEBELA_exit;
static A68_317   MDEBELA = {"failure ... i= "}; 
A_GISVEC(A68_VC ,NDEBELA,MDEBELA,15)
static A68_318   RDEBELA = {"    t1= "}; 
A_GISVEC(A68_VC ,SDEBELA,RDEBELA,8)
static A68_319   WDEBELA = {"   "}; 
A_GISVEC(A68_VC ,XDEBELA,WDEBELA,3)
static A68_203 * HEEBELA_buffer;
static A68_INT  IEEBELA_t1;
static A68_323   MFEBELA = {"iconst "}; 
A_GISVEC(A68_VC ,NFEBELA,MFEBELA,7)
static A68_324   SFEBELA = {"iconsttext "}; 
A_GISVEC(A68_VC ,TFEBELA,SFEBELA,11)
static A68_325   YFEBELA = {"iname "}; 
A_GISVEC(A68_VC ,ZFEBELA,YFEBELA,6)
static A68_326   EGEBELA = {"idop "}; 
A_GISVEC(A68_VC ,FGEBELA,EGEBELA,5)
static A68_326   KGEBELA = {"imop "}; 
A_GISVEC(A68_VC ,LGEBELA,KGEBELA,5)
static A68_325   QGEBELA = {"icond "}; 
A_GISVEC(A68_VC ,RGEBELA,QGEBELA,6)
static A68_323   WGEBELA = {"iparam "}; 
A_GISVEC(A68_VC ,XGEBELA,WGEBELA,7)
static A68_327   CHEBELA = {"ivarmult "}; 
A_GISVEC(A68_VC ,DHEBELA,CHEBELA,9)
static A68_323   IHEBELA = {"icheck "}; 
A_GISVEC(A68_VC ,JHEBELA,IHEBELA,7)
static A68_326   PHEBELA = {"idef "}; 
A_GISVEC(A68_VC ,QHEBELA,PHEBELA,5)
static A68_327   YHEBELA = {"ibracket "}; 
A_GISVEC(A68_VC ,ZHEBELA,YHEBELA,9)
static A68_325   EIEBELA = {"inull "}; 
A_GISVEC(A68_VC ,FIEBELA,EIEBELA,6)
static A68_325   KIEBELA = {"tnull "}; 
A_GISVEC(A68_VC ,LIEBELA,KIEBELA,6)
static A68_325   QIEBELA = {"tvoid "}; 
A_GISVEC(A68_VC ,RIEBELA,QIEBELA,6)
static A68_323   WIEBELA = {"tnamed "}; 
A_GISVEC(A68_VC ,XIEBELA,WIEBELA,7)
static A68_326   CJEBELA = {"trow "}; 
A_GISVEC(A68_VC ,DJEBELA,CJEBELA,5)
static A68_130   IJEBELA = {"tst "}; 
A_GISVEC(A68_VC ,JJEBELA,IJEBELA,4)
static A68_323   OJEBELA = {"tparam "}; 
A_GISVEC(A68_VC ,PJEBELA,OJEBELA,7)
static A68_327   UJEBELA = {"tbracket "}; 
A_GISVEC(A68_VC ,VJEBELA,UJEBELA,9)
static A68_130   AKEBELA = {"tfn "}; 
A_GISVEC(A68_VC ,BKEBELA,AKEBELA,4)
static A68_323   GKEBELA = {"cnamed "}; 
A_GISVEC(A68_VC ,HKEBELA,GKEBELA,7)
static A68_325   MKEBELA = {"cprim "}; 
A_GISVEC(A68_VC ,NKEBELA,MKEBELA,6)
static A68_323   SKEBELA = {"cprimi "}; 
A_GISVEC(A68_VC ,TKEBELA,SKEBELA,7)
static A68_323   YKEBELA = {"cprimr "}; 
A_GISVEC(A68_VC ,ZKEBELA,YKEBELA,7)
static A68_323   ELEBELA = {"cprimu "}; 
A_GISVEC(A68_VC ,FLEBELA,ELEBELA,7)
static A68_130   KLEBELA = {"cst "}; 
A_GISVEC(A68_VC ,LLEBELA,KLEBELA,4)
static A68_326   QLEBELA = {"crow "}; 
A_GISVEC(A68_VC ,RLEBELA,QLEBELA,5)
static A68_325   WLEBELA = {"cnull "}; 
A_GISVEC(A68_VC ,XLEBELA,WLEBELA,6)
static A68_325   CMEBELA = {"ctype "}; 
A_GISVEC(A68_VC ,DMEBELA,CMEBELA,6)
static A68_323   IMEBELA = {"cquery "}; 
A_GISVEC(A68_VC ,JMEBELA,IMEBELA,7)
static A68_327   OMEBELA = {"cbracket "}; 
A_GISVEC(A68_VC ,PMEBELA,OMEBELA,9)
static A68_326   UMEBELA = {"calt "}; 
A_GISVEC(A68_VC ,VMEBELA,UMEBELA,5)
static A68_323   BNEBELA = {"cparam "}; 
A_GISVEC(A68_VC ,CNEBELA,BNEBELA,7)
static A68_325   KNEBELA = {"cvoid "}; 
A_GISVEC(A68_VC ,LNEBELA,KNEBELA,6)
static A68_323   QNEBELA = {"cindex "}; 
A_GISVEC(A68_VC ,RNEBELA,QNEBELA,7)
static A68_325   WNEBELA = {"ctrim "}; 
A_GISVEC(A68_VC ,XNEBELA,WNEBELA,6)
static A68_325   DOEBELA = {"crepl "}; 
A_GISVEC(A68_VC ,EOEBELA,DOEBELA,6)
static A68_325   MOEBELA = {"ccond "}; 
A_GISVEC(A68_VC ,NOEBELA,MOEBELA,6)
static A68_325   TOEBELA = {"cconc "}; 
A_GISVEC(A68_VC ,UOEBELA,TOEBELA,6)
static A68_325   CPEBELA = {"cattr "}; 
A_GISVEC(A68_VC ,DPEBELA,CPEBELA,6)
static A68_318   IPEBELA = {"pidalts "}; 
A_GISVEC(A68_VC ,JPEBELA,IPEBELA,8)
static A68_323   OPEBELA = {"prange "}; 
A_GISVEC(A68_VC ,PPEBELA,OPEBELA,7)
static A68_318   UPEBELA = {"pstring "}; 
A_GISVEC(A68_VC ,VPEBELA,UPEBELA,8)
static A68_325   BQEBELA = {"pchar "}; 
A_GISVEC(A68_VC ,CQEBELA,BQEBELA,6)
static A68_329   LQEBELA = {"pcharange "}; 
A_GISVEC(A68_VC ,MQEBELA,LQEBELA,10)
static A68_326   UQEBELA = {"zero "}; 
A_GISVEC(A68_VC ,VQEBELA,UQEBELA,5)
static A68_130   AREBELA = {"end "}; 
A_GISVEC(A68_VC ,BREBELA,AREBELA,4)
static A68_318   GREBELA = {"fnstart "}; 
A_GISVEC(A68_VC ,HREBELA,GREBELA,8)
static A68_327   MREBELA = {"macparam "}; 
A_GISVEC(A68_VC ,NREBELA,MREBELA,9)
static A68_326   SREBELA = {"inst "}; 
A_GISVEC(A68_VC ,TREBELA,SREBELA,5)
static A68_323   YREBELA = {"normal "}; 
A_GISVEC(A68_VC ,ZREBELA,YREBELA,7)
static A68_325   ESEBELA = {"brief "}; 
A_GISVEC(A68_VC ,FSEBELA,ESEBELA,6)
static A68_325   KSEBELA = {"fnend "}; 
A_GISVEC(A68_VC ,LSEBELA,KSEBELA,6)
static A68_326   RSEBELA = {"biop "}; 
A_GISVEC(A68_VC ,SSEBELA,RSEBELA,5)
static A68_325   BTEBELA = {"alien "}; 
A_GISVEC(A68_VC ,CTEBELA,BTEBELA,6)
static A68_323   LTEBELA = {"idelay "}; 
A_GISVEC(A68_VC ,MTEBELA,LTEBELA,7)
static A68_323   VTEBELA = {"adelay "}; 
A_GISVEC(A68_VC ,WTEBELA,VTEBELA,7)
static A68_323   FUEBELA = {"sample "}; 
A_GISVEC(A68_VC ,GUEBELA,FUEBELA,7)
static A68_323   OUEBELA = {"faster "}; 
A_GISVEC(A68_VC ,PUEBELA,OUEBELA,7)
static A68_323   UUEBELA = {"slower "}; 
A_GISVEC(A68_VC ,VUEBELA,UUEBELA,7)
static A68_130   BVEBELA = {"ram "}; 
A_GISVEC(A68_VC ,CVEBELA,BVEBELA,4)
static A68_323   KVEBELA = {"reform "}; 
A_GISVEC(A68_VC ,LVEBELA,KVEBELA,7)
static A68_323   QVEBELA = {"import "}; 
A_GISVEC(A68_VC ,RVEBELA,QVEBELA,7)
static A68_325   WVEBELA = {"vconc "}; 
A_GISVEC(A68_VC ,XVEBELA,WVEBELA,6)
static A68_323   CWEBELA = {"vconst "}; 
A_GISVEC(A68_VC ,DWEBELA,CWEBELA,7)
static A68_325   IWEBELA = {"vprim "}; 
A_GISVEC(A68_VC ,JWEBELA,IWEBELA,6)
static A68_323   OWEBELA = {"vprimi "}; 
A_GISVEC(A68_VC ,PWEBELA,OWEBELA,7)
static A68_323   UWEBELA = {"vprimc "}; 
A_GISVEC(A68_VC ,VWEBELA,UWEBELA,7)
static A68_325   AXEBELA = {"vname "}; 
A_GISVEC(A68_VC ,BXEBELA,AXEBELA,6)
static A68_325   GXEBELA = {"vtrim "}; 
A_GISVEC(A68_VC ,HXEBELA,GXEBELA,6)
static A68_323   MXEBELA = {"vindex "}; 
A_GISVEC(A68_VC ,NXEBELA,MXEBELA,7)
static A68_324   SXEBELA = {"vtermindex "}; 
A_GISVEC(A68_VC ,TXEBELA,SXEBELA,11)
static A68_323   YXEBELA = {"vcallm "}; 
A_GISVEC(A68_VC ,ZXEBELA,YXEBELA,7)
static A68_323   EYEBELA = {"vcalld "}; 
A_GISVEC(A68_VC ,FYEBELA,EYEBELA,7)
static A68_326   KYEBELA = {"vunn "}; 
A_GISVEC(A68_VC ,LYEBELA,KYEBELA,5)
static A68_323   QYEBELA = {"vsharp "}; 
A_GISVEC(A68_VC ,RYEBELA,QYEBELA,7)
static A68_326   WYEBELA = {"vrow "}; 
A_GISVEC(A68_VC ,XYEBELA,WYEBELA,5)
static A68_325   CZEBELA = {"vcase "}; 
A_GISVEC(A68_VC ,DZEBELA,CZEBELA,6)
static A68_327   IZEBELA = {"vcaseend "}; 
A_GISVEC(A68_VC ,JZEBELA,IZEBELA,9)
static A68_323   OZEBELA = {"vquery "}; 
A_GISVEC(A68_VC ,PZEBELA,OZEBELA,7)
static A68_325   UZEBELA = {"vcoll "}; 
A_GISVEC(A68_VC ,VZEBELA,UZEBELA,6)
static A68_130   AAFBELA = {"vif "}; 
A_GISVEC(A68_VC ,BAFBELA,AAFBELA,4)
static A68_325   GAFBELA = {"vthen "}; 
A_GISVEC(A68_VC ,HAFBELA,GAFBELA,6)
static A68_325   MAFBELA = {"velse "}; 
A_GISVEC(A68_VC ,NAFBELA,MAFBELA,6)
static A68_130   SAFBELA = {"vfi "}; 
A_GISVEC(A68_VC ,TAFBELA,SAFBELA,4)
static A68_327   YAFBELA = {"vvarmult "}; 
A_GISVEC(A68_VC ,ZAFBELA,YAFBELA,9)
static A68_330   EBFBELA = {"vvarmultend "}; 
A_GISVEC(A68_VC ,FBFBELA,EBFBELA,12)
static A68_326   KBFBELA = {"vseq "}; 
A_GISVEC(A68_VC ,LBFBELA,KBFBELA,5)
static A68_326   QBFBELA = {"vpar "}; 
A_GISVEC(A68_VC ,RBFBELA,QBFBELA,5)
static A68_329   WBFBELA = {"vdynindex "}; 
A_GISVEC(A68_VC ,XBFBELA,WBFBELA,10)
static A68_318   CCFBELA = {"vdynend "}; 
A_GISVEC(A68_VC ,DCFBELA,CCFBELA,8)
static A68_324   ICFBELA = {"vdynassign "}; 
A_GISVEC(A68_VC ,JCFBELA,ICFBELA,11)
static A68_327   OCFBELA = {"vbracket "}; 
A_GISVEC(A68_VC ,PCFBELA,OCFBELA,9)
static A68_325   UCFBELA = {"vnull "}; 
A_GISVEC(A68_VC ,VCFBELA,UCFBELA,6)
static A68_325   ADFBELA = {"vvoid "}; 
A_GISVEC(A68_VC ,BDFBELA,ADFBELA,6)
static A68_327   GDFBELA = {"vreplace "}; 
A_GISVEC(A68_VC ,HDFBELA,GDFBELA,9)
static A68_325   MDFBELA = {"attid "}; 
A_GISVEC(A68_VC ,NDFBELA,MDFBELA,6)
static A68_318   SDFBELA = {"attdata "}; 
A_GISVEC(A68_VC ,TDFBELA,SDFBELA,8)
static A68_325   YDFBELA = {"kattr "}; 
A_GISVEC(A68_VC ,ZDFBELA,YDFBELA,6)
static A68_324   EEFBELA = {"attbracket "}; 
A_GISVEC(A68_VC ,FEFBELA,EEFBELA,11)
static A68_323   KEFBELA = {"attstr "}; 
A_GISVEC(A68_VC ,LEFBELA,KEFBELA,7)
static A68_318   QEFBELA = {"attnull "}; 
A_GISVEC(A68_VC ,REFBELA,QEFBELA,8)
static A68_327   WEFBELA = {"attrname "}; 
A_GISVEC(A68_VC ,XEFBELA,WEFBELA,9)
static A68_318   CFFBELA = {"vnormal "}; 
A_GISVEC(A68_VC ,DFFBELA,CFFBELA,8)
static A68_318   IFFBELA = {"vnoelse "}; 
A_GISVEC(A68_VC ,JFFBELA,IFFBELA,8)
static A68_318   OFFBELA = {"velseof "}; 
A_GISVEC(A68_VC ,PFFBELA,OFFBELA,8)
static A68_323   UFFBELA = {"seqend "}; 
A_GISVEC(A68_VC ,VFFBELA,UFFBELA,7)
static A68_318   AGFBELA = {"seqnull "}; 
A_GISVEC(A68_VC ,BGFBELA,AGFBELA,8)
static A68_318   GGFBELA = {"seqvoid "}; 
A_GISVEC(A68_VC ,HGFBELA,GGFBELA,8)
static A68_323   MGFBELA = {"seqlet "}; 
A_GISVEC(A68_VC ,NGFBELA,MGFBELA,7)
static A68_323   SGFBELA = {"seqvar "}; 
A_GISVEC(A68_VC ,TGFBELA,SGFBELA,7)
static A68_323   YGFBELA = {"seqper "}; 
A_GISVEC(A68_VC ,ZGFBELA,YGFBELA,7)
static A68_329   EHFBELA = {"seqassign "}; 
A_GISVEC(A68_VC ,FHFBELA,EHFBELA,10)
static A68_324   KHFBELA = {"seqbecomes "}; 
A_GISVEC(A68_VC ,LHFBELA,KHFBELA,11)
static A68_331   QHFBELA = {"seqassignend "}; 
A_GISVEC(A68_VC ,RHFBELA,QHFBELA,13)
static A68_318   WHFBELA = {"seqcase "}; 
A_GISVEC(A68_VC ,XHFBELA,WHFBELA,8)
static A68_325   CIFBELA = {"seqif "}; 
A_GISVEC(A68_VC ,DIFBELA,CIFBELA,6)
static A68_318   IIFBELA = {"seqthen "}; 
A_GISVEC(A68_VC ,JIFBELA,IIFBELA,8)
static A68_318   OIFBELA = {"seqelse "}; 
A_GISVEC(A68_VC ,PIFBELA,OIFBELA,8)
static A68_325   UIFBELA = {"seqfi "}; 
A_GISVEC(A68_VC ,VIFBELA,UIFBELA,6)
static A68_323   AJFBELA = {"seqrow "}; 
A_GISVEC(A68_VC ,BJFBELA,AJFBELA,7)
static A68_324   GJFBELA = {"seqvarmult "}; 
A_GISVEC(A68_VC ,HJFBELA,GJFBELA,11)
static A68_332   MJFBELA = {"seqvarmultend "}; 
A_GISVEC(A68_VC ,NJFBELA,MJFBELA,14)
static A68_327   SJFBELA = {"typename "}; 
A_GISVEC(A68_VC ,TJFBELA,SJFBELA,9)
static A68_318   YJFBELA = {"intname "}; 
A_GISVEC(A68_VC ,ZJFBELA,YJFBELA,8)
static A68_329   EKFBELA = {"constname "}; 
A_GISVEC(A68_VC ,FKFBELA,EKFBELA,10)
static A68_329   KKFBELA = {"unchecked "}; 
A_GISVEC(A68_VC ,LKFBELA,KKFBELA,10)
static A68_323   QKFBELA = {"parend "}; 
A_GISVEC(A68_VC ,RKFBELA,QKFBELA,7)
static A68_325   WKFBELA = {"bmake "}; 
A_GISVEC(A68_VC ,XKFBELA,WKFBELA,6)
static A68_327   CLFBELA = {"bmakeend "}; 
A_GISVEC(A68_VC ,DLFBELA,CLFBELA,9)
static A68_327   ILFBELA = {"bjoinend "}; 
A_GISVEC(A68_VC ,JLFBELA,ILFBELA,9)
static A68_325   OLFBELA = {"bjoin "}; 
A_GISVEC(A68_VC ,PLFBELA,OLFBELA,6)
static A68_326   ULFBELA = {"bfor "}; 
A_GISVEC(A68_VC ,VLFBELA,ULFBELA,5)
static A68_327   AMFBELA = {"multjoin "}; 
A_GISVEC(A68_VC ,BMFBELA,AMFBELA,9)
static A68_326   GMFBELA = {"bend "}; 
A_GISVEC(A68_VC ,HMFBELA,GMFBELA,5)
static A68_329   MMFBELA = {"ptypename "}; 
A_GISVEC(A68_VC ,NMFBELA,MMFBELA,10)
static A68_327   SMFBELA = {"pintname "}; 
A_GISVEC(A68_VC ,TMFBELA,SMFBELA,9)
static A68_324   YMFBELA = {"pconstname "}; 
A_GISVEC(A68_VC ,ZMFBELA,YMFBELA,11)
static A68_318   ENFBELA = {"biddec2 "}; 
A_GISVEC(A68_VC ,FNFBELA,ENFBELA,8)
static A68_327   KNFBELA = {"pidalts2 "}; 
A_GISVEC(A68_VC ,LNFBELA,KNFBELA,9)
static A68_318   QNFBELA = {"prange2 "}; 
A_GISVEC(A68_VC ,RNFBELA,QNFBELA,8)
static A68_318   WNFBELA = {"idelay2 "}; 
A_GISVEC(A68_VC ,XNFBELA,WNFBELA,8)
static A68_318   COFBELA = {"adelay2 "}; 
A_GISVEC(A68_VC ,DOFBELA,COFBELA,8)
static A68_319   IOFBELA = {"pt "}; 
A_GISVEC(A68_VC ,JOFBELA,IOFBELA,3)
static A68_325   OOFBELA = {"ptend "}; 
A_GISVEC(A68_VC ,POFBELA,OOFBELA,6)
static A68_325   UOFBELA = {"ptflt "}; 
A_GISVEC(A68_VC ,VOFBELA,UOFBELA,6)
static A68_327   APFBELA = {"ptfltend "}; 
A_GISVEC(A68_VC ,BPFBELA,APFBELA,9)
static A68_329   GPFBELA = {"bvvarmult "}; 
A_GISVEC(A68_VC ,HPFBELA,GPFBELA,10)
static A68_330   MPFBELA = {"bjoinsbjoin "}; 
A_GISVEC(A68_VC ,NPFBELA,MPFBELA,12)
static A68_331   SPFBELA = {"bvvarmultend "}; 
A_GISVEC(A68_VC ,TPFBELA,SPFBELA,13)
static A68_130   YPFBELA = {"str "}; 
A_GISVEC(A68_VC ,ZPFBELA,YPFBELA,4)
static A68_323   FQFBELA = {"kilend "}; 
A_GISVEC(A68_VC ,GQFBELA,FQFBELA,7)
static A68_325   NQFBELA = {"ktype "}; 
A_GISVEC(A68_VC ,OQFBELA,NQFBELA,6)
static A68_326   TQFBELA = {"kint "}; 
A_GISVEC(A68_VC ,UQFBELA,TQFBELA,5)
static A68_323   ARFBELA = {"kconst "}; 
A_GISVEC(A68_VC ,BRFBELA,ARFBELA,7)
static A68_130   JRFBELA = {"kfn "}; 
A_GISVEC(A68_VC ,KRFBELA,JRFBELA,4)
static A68_326   PRFBELA = {"kend "}; 
A_GISVEC(A68_VC ,QRFBELA,PRFBELA,5)
static A68_319   YRFBELA = {"fn "}; 
A_GISVEC(A68_VC ,ZRFBELA,YRFBELA,3)
static A68_324   GSFBELA = {"NIL pointer"}; 
A_GISVEC(A68_VC ,HSFBELA,GSFBELA,11)
static A68_330   USFBELA = {"End of keeps"}; 
A_GISVEC(A68_VC ,VSFBELA,USFBELA,12)
static A68_324   DTFBELA = {"NIL pointer"}; 
A_GISVEC(A68_VC ,ETFBELA,DTFBELA,11)
static A68_318   MTFBELA = {"vstring "}; 
A_GISVEC(A68_VC ,NTFBELA,MTFBELA,8)
static A68_318   TTFBELA = {"vprimch "}; 
A_GISVEC(A68_VC ,UTFBELA,TTFBELA,8)
static A68_318   DUFBELA = {"vprimst "}; 
A_GISVEC(A68_VC ,EUFBELA,DUFBELA,8)
static A68_318   MUFBELA = {"cstring "}; 
A_GISVEC(A68_VC ,NUFBELA,MUFBELA,8)
static A68_318   TUFBELA = {"cprimch "}; 
A_GISVEC(A68_VC ,UUFBELA,TUFBELA,8)
static A68_318   DVFBELA = {"cprimst "}; 
A_GISVEC(A68_VC ,EVFBELA,DVFBELA,8)
static A68_327   NVFBELA = {"cprimchr "}; 
A_GISVEC(A68_VC ,OVFBELA,NVFBELA,9)
static A68_318   WVFBELA = {"tstring "}; 
A_GISVEC(A68_VC ,XVFBELA,WVFBELA,8)
static A68_335   GXFBELA = {"Intermediate Language in context \""}; 
A_GISVEC(A68_VC ,HXFBELA,GXFBELA,34)
static A68_332   OXFBELA = {"\" of library \""}; 
A_GISVEC(A68_VC ,PXFBELA,OXFBELA,14)
static A68_337   RYFBELA = {"Function block sizes"}; 
A_GISVEC(A68_VC ,SYFBELA,RYFBELA,20)
static A68_319   HZFBELA = {" = "}; 
A_GISVEC(A68_VC ,IZFBELA,HZFBELA,3)
static A68_324   QZFBELA = {"spec size ="}; 
A_GISVEC(A68_VC ,RZFBELA,QZFBELA,11)
static A68_338   VZFBELA = {",    total bodies size ="}; 
A_GISVEC(A68_VC ,WZFBELA,VZFBELA,24)
typedef struct   /* env of non-global proc */
{
int dummy;
} JWFBELA_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  Spec;
} SWFBELA_generator;
typedef struct   /* env of non-global proc */
{
A68_234 * Ct;
A68_97  Msg;
} CYFBELA_generator;

A68_VOID  FDEBELA_print(A68_85  Line);

A_STATIC A68_VOID  IDEBELA_fault(A68_INT  I, A68_INT  T1);

A_STATIC A68_CHAR  CEEBELA_readmonitorchar(A68_203 * Buffer);

A_STATIC A68_VOID  LEEBELA_displacements(A68_176  Dp, A68_97  Msg);

A68_VOID  MEEBELA_reader(A68_300  *ReturnedValue);

A68_VOID  TEEBELA_failure(A68_302  Errorpos);

A68_VOID  VEEBELA_fail(A68_85  Line);

A68_INT  WEEBELA_return(void);

A68_VOID  ZEEBELA_identifier(void);

A68_VOID  FFEBELA_integer(void);

A68_VOID  LFEBELA_iconst(void);

A68_VOID  RFEBELA_iconsttext(void);

A68_VOID  XFEBELA_iname(void);

A68_VOID  DGEBELA_idop(void);

A68_VOID  JGEBELA_imop(void);

A68_VOID  PGEBELA_icond(void);

A68_VOID  VGEBELA_iparam(void);

A68_VOID  BHEBELA_ivarmult(void);

A68_VOID  HHEBELA_icheck(void);

A68_VOID  NHEBELA_idef(void);

A68_VOID  XHEBELA_ibracket(void);

A68_VOID  DIEBELA_inull(void);

A68_VOID  JIEBELA_tnull(void);

A68_VOID  PIEBELA_tvoid(void);

A68_VOID  VIEBELA_tnamed(void);

A68_VOID  BJEBELA_trow(void);

A68_VOID  HJEBELA_tst(void);

A68_VOID  NJEBELA_tparam(void);

A68_VOID  TJEBELA_tbracket(void);

A68_VOID  ZJEBELA_tfn(void);

A68_VOID  FKEBELA_cnamed(void);

A68_VOID  LKEBELA_cprim(void);

A68_VOID  RKEBELA_cprimi(void);

A68_VOID  XKEBELA_cprimr(void);

A68_VOID  DLEBELA_cprimu(void);

A68_VOID  JLEBELA_cst(void);

A68_VOID  PLEBELA_crow(void);

A68_VOID  VLEBELA_cnull(void);

A68_VOID  BMEBELA_cttype(void);

A68_VOID  HMEBELA_cquery(void);

A68_VOID  NMEBELA_cbracket(void);

A68_VOID  TMEBELA_calt(void);

A68_VOID  ZMEBELA_cparam(void);

A68_VOID  JNEBELA_cvoid(void);

A68_VOID  PNEBELA_cindex(void);

A68_VOID  VNEBELA_ctrim(void);

A68_VOID  BOEBELA_crepl(void);

A68_VOID  LOEBELA_ccond(void);

A68_VOID  ROEBELA_cconc(void);

A68_VOID  BPEBELA_cattr(void);

A68_VOID  HPEBELA_pidalts(void);

A68_VOID  NPEBELA_prange(void);

A68_VOID  TPEBELA_pstring(void);

A68_VOID  ZPEBELA_pchar(void);

A68_VOID  JQEBELA_pcharange(void);

A68_VOID  TQEBELA_zero(void);

A68_VOID  ZQEBELA_end(void);

A68_VOID  FREBELA_fnstart(void);

A68_VOID  LREBELA_macparam(void);

A68_VOID  RREBELA_inst(void);

A68_VOID  XREBELA_normal(void);

A68_VOID  DSEBELA_brief(void);

A68_VOID  JSEBELA_fnend(void);

A68_VOID  PSEBELA_biop(void);

A68_VOID  ZSEBELA_alien(void);

A68_VOID  JTEBELA_idelay(void);

A68_VOID  TTEBELA_adelay(void);

A68_VOID  DUEBELA_sample(void);

A68_VOID  NUEBELA_faster(void);

A68_VOID  TUEBELA_slower(void);

A68_VOID  ZUEBELA_ram(void);

A68_VOID  JVEBELA_reform(void);

A68_VOID  PVEBELA_imported(void);

A68_VOID  VVEBELA_vconc(void);

A68_VOID  BWEBELA_vconst(void);

A68_VOID  HWEBELA_vprim(void);

A68_VOID  NWEBELA_vprimi(void);

A68_VOID  TWEBELA_vprimc(void);

A68_VOID  ZWEBELA_vname(void);

A68_VOID  FXEBELA_vtrim(void);

A68_VOID  LXEBELA_vindex(void);

A68_VOID  RXEBELA_vtermindex(void);

A68_VOID  XXEBELA_vcallm(void);

A68_VOID  DYEBELA_vcalld(void);

A68_VOID  JYEBELA_vunn(void);

A68_VOID  PYEBELA_vsharp(void);

A68_VOID  VYEBELA_vrow(void);

A68_VOID  BZEBELA_vcase(void);

A68_VOID  HZEBELA_vcaseend(void);

A68_VOID  NZEBELA_vquery(void);

A68_VOID  TZEBELA_vcoll(void);

A68_VOID  ZZEBELA_vif(void);

A68_VOID  FAFBELA_vthen(void);

A68_VOID  LAFBELA_velse(void);

A68_VOID  RAFBELA_vfi(void);

A68_VOID  XAFBELA_vvarmult(void);

A68_VOID  DBFBELA_vvarmultend(void);

A68_VOID  JBFBELA_vseq(void);

A68_VOID  PBFBELA_vpar(void);

A68_VOID  VBFBELA_vdynindex(void);

A68_VOID  BCFBELA_vdynend(void);

A68_VOID  HCFBELA_vdynassign(void);

A68_VOID  NCFBELA_vbracket(void);

A68_VOID  TCFBELA_vnull(void);

A68_VOID  ZCFBELA_vvoid(void);

A68_VOID  FDFBELA_vreplace(void);

A68_VOID  LDFBELA_attid(void);

A68_VOID  RDFBELA_attdata(void);

A68_VOID  XDFBELA_kattr(void);

A68_VOID  DEFBELA_attbracket(void);

A68_VOID  JEFBELA_attstr(void);

A68_VOID  PEFBELA_attnull(void);

A68_VOID  VEFBELA_attrname(void);

A68_VOID  BFFBELA_vnormal(void);

A68_VOID  HFFBELA_vnoelse(void);

A68_VOID  NFFBELA_velseof(void);

A68_VOID  TFFBELA_seqend(void);

A68_VOID  ZFFBELA_seqnull(void);

A68_VOID  FGFBELA_seqvoid(void);

A68_VOID  LGFBELA_seqlet(void);

A68_VOID  RGFBELA_seqvar(void);

A68_VOID  XGFBELA_seqper(void);

A68_VOID  DHFBELA_seqassign(void);

A68_VOID  JHFBELA_seqbecomes(void);

A68_VOID  PHFBELA_seqassignend(void);

A68_VOID  VHFBELA_seqcase(void);

A68_VOID  BIFBELA_seqif(void);

A68_VOID  HIFBELA_seqthen(void);

A68_VOID  NIFBELA_seqelse(void);

A68_VOID  TIFBELA_seqfi(void);

A68_VOID  ZIFBELA_seqrow(void);

A68_VOID  FJFBELA_seqvarmult(void);

A68_VOID  LJFBELA_seqvarmultend(void);

A68_VOID  RJFBELA_typename(void);

A68_VOID  XJFBELA_intname(void);

A68_VOID  DKFBELA_constname(void);

A68_VOID  JKFBELA_unchecked(void);

A68_VOID  PKFBELA_parend(void);

A68_VOID  VKFBELA_bmake(void);

A68_VOID  BLFBELA_bmakeend(void);

A68_VOID  HLFBELA_bjoinend(void);

A68_VOID  NLFBELA_bjoin(void);

A68_VOID  TLFBELA_bfor(void);

A68_VOID  ZLFBELA_multjoin(void);

A68_VOID  FMFBELA_bend(void);

A68_VOID  LMFBELA_ptypename(void);

A68_VOID  RMFBELA_pintname(void);

A68_VOID  XMFBELA_pconstname(void);

A68_VOID  DNFBELA_biddec2(void);

A68_VOID  JNFBELA_pidalts2(void);

A68_VOID  PNFBELA_prange2(void);

A68_VOID  VNFBELA_idelay2(void);

A68_VOID  BOFBELA_adelay2(void);

A68_VOID  HOFBELA_pt(void);

A68_VOID  NOFBELA_ptend(void);

A68_VOID  TOFBELA_ptflt(void);

A68_VOID  ZOFBELA_ptfltend(void);

A68_VOID  FPFBELA_bvvarmult(void);

A68_VOID  LPFBELA_bjoinsbjoin(void);

A68_VOID  RPFBELA_bvvarmultend(void);

A68_VOID  XPFBELA_str(void);

A68_VOID  DQFBELA_kilend(void);

A68_VOID  MQFBELA_ktype(void);

A68_VOID  SQFBELA_kint(void);

A68_VOID  YQFBELA_kint2(void);

A68_VOID  ZQFBELA_kconst(void);

A68_VOID  FRFBELA_kfn(void);

A68_VOID  ORFBELA_kend(void);

A68_VOID  URFBELA_fn(void);

A68_VOID  DSFBELA_fncall(void);

A68_VOID  OSFBELA_start(void);

A68_VOID  PSFBELA_keep(void);

A68_VOID  QSFBELA_endofkeep(void);

A68_VOID  LTFBELA_vstring(void);

A68_VOID  RTFBELA_vprimch(void);

A68_VOID  BUFBELA_vprimst(void);

A68_VOID  LUFBELA_cstring(void);

A68_VOID  RUFBELA_cprimch(void);

A68_VOID  BVFBELA_cprimst(void);

A68_VOID  LVFBELA_cprimchr(void);

A68_VOID  VVFBELA_tstring(void);

A68_VOID  FWFBELA_fnptilstart(A68_234 * Ct, A68_VC  Spec, A68_176  Dp, A68_97  Msg);

A_STATIC A68_VOID  IWFBELA_generator(A68_BOOL  GWFBELA_anonymous, A68_177  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RWFBELA_generator(A68_BOOL  PWFBELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  EXFBELA_lowptilstart(A68_234 * Ct, A68_97  Msg);

A_STATIC A68_VOID  BYFBELA_generator(A68_BOOL  ZXFBELA_anonymous, A68_177  *ReturnedValue, void *NonLocals);

A68_VOID  KYFBELA_ptsize(A68_234 * Ct, A68_97  Msg);

A_STATIC A68_VOID  IWFBELA_generator(A68_BOOL  GWFBELA_anonymous, A68_177  *ReturnedValue, void *NonLocals)
#define NL(x) (((JWFBELA_generator *)NonLocals)->x)
{ 
A68_177  KWFBELA;  /* clause result */
A68_177  LWFBELA;  /* OPERATORS - dynamic generator */
{ 
LWFBELA.upb = 1 ;
( GWFBELA_anonymous? A_VLOC(A68_176 ,LWFBELA): A_VHEAP(A68_176 ,LWFBELA) );
KWFBELA = LWFBELA;
} 
*ReturnedValue = (KWFBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  RWFBELA_generator(A68_BOOL  PWFBELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((SWFBELA_generator *)NonLocals)->x)
{ 
A68_VC  TWFBELA;  /* clause result */
A68_VC  UWFBELA;  /* OPERATORS - dynamic generator */
{ 
UWFBELA.upb = (NL(Spec).upb+1) ;
( PWFBELA_anonymous? A_VLOC(A68_CHAR ,UWFBELA): A_VHEAP(A68_CHAR ,UWFBELA) );
TWFBELA = UWFBELA;
} 
*ReturnedValue = (TWFBELA);
return;
} 
#undef NL

A_STATIC A68_VOID  BYFBELA_generator(A68_BOOL  ZXFBELA_anonymous, A68_177  *ReturnedValue, void *NonLocals)
#define NL(x) (((CYFBELA_generator *)NonLocals)->x)
{ 
A68_177  DYFBELA;  /* clause result */
A68_177  EYFBELA;  /* OPERATORS - dynamic generator */
{ 
EYFBELA.upb = UEJAELA_ndiscptrs(TYJAELA_discfile, (*(&(NL(Ct)->Val))), NL(Msg)) ;
( ZXFBELA_anonymous? A_VLOC(A68_176 ,EYFBELA): A_VHEAP(A68_176 ,EYFBELA) );
DYFBELA = EYFBELA;
} 
*ReturnedValue = (DYFBELA);
return;
} 
#undef NL

A68_VOID  FDEBELA_print(A68_85  Line)
{ 
A_PROC_ENTRY(print);
GFBAOSL_put(LEAAOST_out, Line);
A_PROC_EXIT(print);
return;
} 
#undef NL

A_STATIC A68_VOID  IDEBELA_fault(A68_INT  I, A68_INT  T1)
{ 
A68_320  JDEBELA;  /* collateral clause result */
A68_52  KDEBELA;  /* OPERATORS - mode -> union mode */
A68_56  LDEBELA;  /* procedure value */
A68_52  ODEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  PDEBELA;  /* YIELD */
A68_52  QDEBELA;  /* OPERATORS - mode -> union mode */
A68_52  TDEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  UDEBELA;  /* YIELD */
A68_52  VDEBELA;  /* OPERATORS - mode -> union mode */
A68_52  YDEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  ZDEBELA;  /* YIELD */
A68_85  AEEBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(fault);
 /* line 83: */
{ 
LDEBELA.fn.fn_global = LRAAOSL_newline;
LDEBELA.nonlocals = A68_NIL;
JDEBELA.data[0] = A_UNITE(KDEBELA,mode12,12,LDEBELA);
PDEBELA = NDEBELA ;
JDEBELA.data[1] = A_UNITE(ODEBELA,mode7,7,PDEBELA);
JDEBELA.data[2] = A_UNITE(QDEBELA,mode1,1,I);
UDEBELA = SDEBELA ;
JDEBELA.data[3] = A_UNITE(TDEBELA,mode7,7,UDEBELA);
JDEBELA.data[4] = A_UNITE(VDEBELA,mode1,1,T1);
ZDEBELA = XDEBELA ;
JDEBELA.data[5] = A_UNITE(YDEBELA,mode7,7,ZDEBELA);
FDEBELA_print(A_HISVEC(AEEBELA,JDEBELA,6,A68_52 ));
 /* line 84: */
 /* line 85: */
DDEBELA_exit = A68_TRUE;
} 
A_PROC_EXIT(fault);
return;
} 
#undef NL

A_STATIC A68_CHAR  CEEBELA_readmonitorchar(A68_203 * Buffer)
{ 
A68_CHAR  DEEBELA_c;
A68_52  EEEBELA;  /* OPERATORS - mode -> union mode */
A68_85  FEEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_CHAR  GEEBELA;  /* clause result */
A_PROC_ENTRY(readmonitorchar);
 /* line 88: */
{ 
DEEBELA_c = GBJAELA_readchar(Buffer);
 /* line 89: */
if ( CDEBELA_monitor )
{ 
FDEBELA_print(A_HVEC(FEEBELA,A_UNITE(EEEBELA,mode6,6,DEEBELA_c),A68_52 ));
} 
 /* line 90: */
 /* line 91: */
GEEBELA = DEEBELA_c;
} 
A_PROC_EXIT(readmonitorchar);
return( GEEBELA );
} 
#undef NL

A_STATIC A68_VOID  LEEBELA_displacements(A68_176  Dp, A68_97  Msg)
{ 
A_PROC_ENTRY(displacements);
/*SKIP*/;
A_PROC_EXIT(displacements);
return;
} 
#undef NL

A68_VOID  MEEBELA_reader(A68_300  *ReturnedValue)
{ 
A68_300  NEEBELA;  /* collateral clause result */
A68_301  OEEBELA;  /* OPERATORS - mode -> union mode */
A68_300  PEEBELA;  /* clause result */
A68_300  QEEBELA;  /* collateral clause result */
A68_301  REEBELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(reader);
if ( DDEBELA_exit )
{ 
NEEBELA.Type = ZCEBELA_eoflib;
 /* line 115: */
NEEBELA.Val = A_EMPTY(OEEBELA,2);
PEEBELA = NEEBELA;
} 
else
{ 
IEEBELA_t1 = PZIAELA_readiltok(HEEBELA_buffer);
 /* line 116: */
ADEBELA_integer1 = (*(&(HEEBELA_buffer->Int)));
 /* line 117: */
BDEBELA_identifier1 = (*(&(HEEBELA_buffer->Ident)));
 /* line 118: */
QEEBELA.Type = IEEBELA_t1;
 /* line 119: */
QEEBELA.Val = A_EMPTY(REEBELA,2);
PEEBELA = QEEBELA;
} 
A_PROC_EXIT(reader);
*ReturnedValue = (PEEBELA);
return;
} 
#undef NL

A68_VOID  TEEBELA_failure(A68_302  Errorpos)
{ 
A_PROC_ENTRY(failure);
 /* line 122: */
IDEBELA_fault((*(&(Errorpos.Lex->Type))), (*Errorpos.Stind));
A_PROC_EXIT(failure);
return;
} 
#undef NL

A68_VOID  VEEBELA_fail(A68_85  Line)
{ 
A_PROC_ENTRY(fail);
GFBAOSL_put(LEAAOST_out, Line);
A_PROC_EXIT(fail);
return;
} 
#undef NL

A68_INT  WEEBELA_return(void)
{ 
A68_INT  XEEBELA;  /* clause result */
A68_INT * YEEBELA;  /* YIELD */
A_PROC_ENTRY(return);
{ 
DDEBELA_exit = A68_TRUE;
YEEBELA = A_HEAP(A68_INT ) ;
XEEBELA = (*YEEBELA) = (DDEBELA_exit);
} 
A_PROC_EXIT(return);
return( XEEBELA );
} 
#undef NL

A68_VOID  ZEEBELA_identifier(void)
{ 
A68_322  AFEBELA;  /* collateral clause result */
A68_52  BFEBELA;  /* OPERATORS - mode -> union mode */
A68_52  CFEBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  DFEBELA;  /* YIELD */
A68_85  EFEBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(identifier);
AFEBELA.data[0] = A_UNITE(BFEBELA,mode7,7,BDEBELA_identifier1);
DFEBELA = ' ' ;
AFEBELA.data[1] = A_UNITE(CFEBELA,mode6,6,DFEBELA);
FDEBELA_print(A_HISVEC(EFEBELA,AFEBELA,2,A68_52 ));
A_PROC_EXIT(identifier);
return;
} 
#undef NL

A68_VOID  FFEBELA_integer(void)
{ 
A68_322  GFEBELA;  /* collateral clause result */
A68_52  HFEBELA;  /* OPERATORS - mode -> union mode */
A68_52  IFEBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  JFEBELA;  /* YIELD */
A68_85  KFEBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(integer);
GFEBELA.data[0] = A_UNITE(HFEBELA,mode1,1,ADEBELA_integer1);
JFEBELA = ' ' ;
GFEBELA.data[1] = A_UNITE(IFEBELA,mode6,6,JFEBELA);
FDEBELA_print(A_HISVEC(KFEBELA,GFEBELA,2,A68_52 ));
A_PROC_EXIT(integer);
return;
} 
#undef NL

A68_VOID  LFEBELA_iconst(void)
{ 
A68_52  OFEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  PFEBELA;  /* YIELD */
A68_85  QFEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(iconst);
PFEBELA = NFEBELA ;
FDEBELA_print(A_HVEC(QFEBELA,A_UNITE(OFEBELA,mode7,7,PFEBELA),A68_52 ));
A_PROC_EXIT(iconst);
return;
} 
#undef NL

A68_VOID  RFEBELA_iconsttext(void)
{ 
A68_52  UFEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  VFEBELA;  /* YIELD */
A68_85  WFEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(iconsttext);
VFEBELA = TFEBELA ;
FDEBELA_print(A_HVEC(WFEBELA,A_UNITE(UFEBELA,mode7,7,VFEBELA),A68_52 ));
A_PROC_EXIT(iconsttext);
return;
} 
#undef NL

A68_VOID  XFEBELA_iname(void)
{ 
A68_52  AGEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  BGEBELA;  /* YIELD */
A68_85  CGEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(iname);
BGEBELA = ZFEBELA ;
FDEBELA_print(A_HVEC(CGEBELA,A_UNITE(AGEBELA,mode7,7,BGEBELA),A68_52 ));
A_PROC_EXIT(iname);
return;
} 
#undef NL

A68_VOID  DGEBELA_idop(void)
{ 
A68_52  GGEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  HGEBELA;  /* YIELD */
A68_85  IGEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(idop);
HGEBELA = FGEBELA ;
FDEBELA_print(A_HVEC(IGEBELA,A_UNITE(GGEBELA,mode7,7,HGEBELA),A68_52 ));
A_PROC_EXIT(idop);
return;
} 
#undef NL

A68_VOID  JGEBELA_imop(void)
{ 
A68_52  MGEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  NGEBELA;  /* YIELD */
A68_85  OGEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(imop);
NGEBELA = LGEBELA ;
FDEBELA_print(A_HVEC(OGEBELA,A_UNITE(MGEBELA,mode7,7,NGEBELA),A68_52 ));
A_PROC_EXIT(imop);
return;
} 
#undef NL

A68_VOID  PGEBELA_icond(void)
{ 
A68_52  SGEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  TGEBELA;  /* YIELD */
A68_85  UGEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(icond);
TGEBELA = RGEBELA ;
FDEBELA_print(A_HVEC(UGEBELA,A_UNITE(SGEBELA,mode7,7,TGEBELA),A68_52 ));
A_PROC_EXIT(icond);
return;
} 
#undef NL

A68_VOID  VGEBELA_iparam(void)
{ 
A68_52  YGEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  ZGEBELA;  /* YIELD */
A68_85  AHEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(iparam);
ZGEBELA = XGEBELA ;
FDEBELA_print(A_HVEC(AHEBELA,A_UNITE(YGEBELA,mode7,7,ZGEBELA),A68_52 ));
A_PROC_EXIT(iparam);
return;
} 
#undef NL

A68_VOID  BHEBELA_ivarmult(void)
{ 
A68_52  EHEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  FHEBELA;  /* YIELD */
A68_85  GHEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(ivarmult);
FHEBELA = DHEBELA ;
FDEBELA_print(A_HVEC(GHEBELA,A_UNITE(EHEBELA,mode7,7,FHEBELA),A68_52 ));
A_PROC_EXIT(ivarmult);
return;
} 
#undef NL

A68_VOID  HHEBELA_icheck(void)
{ 
A68_52  KHEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  LHEBELA;  /* YIELD */
A68_85  MHEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(icheck);
LHEBELA = JHEBELA ;
FDEBELA_print(A_HVEC(MHEBELA,A_UNITE(KHEBELA,mode7,7,LHEBELA),A68_52 ));
A_PROC_EXIT(icheck);
return;
} 
#undef NL

A68_VOID  NHEBELA_idef(void)
{ 
A68_328  OHEBELA;  /* collateral clause result */
A68_52  RHEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  SHEBELA;  /* YIELD */
A68_52  THEBELA;  /* OPERATORS - mode -> union mode */
A68_52  UHEBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  VHEBELA;  /* YIELD */
A68_85  WHEBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(idef);
SHEBELA = QHEBELA ;
OHEBELA.data[0] = A_UNITE(RHEBELA,mode7,7,SHEBELA);
OHEBELA.data[1] = A_UNITE(THEBELA,mode1,1,ADEBELA_integer1);
VHEBELA = ' ' ;
OHEBELA.data[2] = A_UNITE(UHEBELA,mode6,6,VHEBELA);
FDEBELA_print(A_HISVEC(WHEBELA,OHEBELA,3,A68_52 ));
A_PROC_EXIT(idef);
return;
} 
#undef NL

A68_VOID  XHEBELA_ibracket(void)
{ 
A68_52  AIEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  BIEBELA;  /* YIELD */
A68_85  CIEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(ibracket);
BIEBELA = ZHEBELA ;
FDEBELA_print(A_HVEC(CIEBELA,A_UNITE(AIEBELA,mode7,7,BIEBELA),A68_52 ));
A_PROC_EXIT(ibracket);
return;
} 
#undef NL

A68_VOID  DIEBELA_inull(void)
{ 
A68_52  GIEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  HIEBELA;  /* YIELD */
A68_85  IIEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(inull);
HIEBELA = FIEBELA ;
FDEBELA_print(A_HVEC(IIEBELA,A_UNITE(GIEBELA,mode7,7,HIEBELA),A68_52 ));
A_PROC_EXIT(inull);
return;
} 
#undef NL

A68_VOID  JIEBELA_tnull(void)
{ 
A68_52  MIEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  NIEBELA;  /* YIELD */
A68_85  OIEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(tnull);
NIEBELA = LIEBELA ;
FDEBELA_print(A_HVEC(OIEBELA,A_UNITE(MIEBELA,mode7,7,NIEBELA),A68_52 ));
A_PROC_EXIT(tnull);
return;
} 
#undef NL

A68_VOID  PIEBELA_tvoid(void)
{ 
A68_52  SIEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  TIEBELA;  /* YIELD */
A68_85  UIEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(tvoid);
TIEBELA = RIEBELA ;
FDEBELA_print(A_HVEC(UIEBELA,A_UNITE(SIEBELA,mode7,7,TIEBELA),A68_52 ));
A_PROC_EXIT(tvoid);
return;
} 
#undef NL

A68_VOID  VIEBELA_tnamed(void)
{ 
A68_52  YIEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  ZIEBELA;  /* YIELD */
A68_85  AJEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(tnamed);
ZIEBELA = XIEBELA ;
FDEBELA_print(A_HVEC(AJEBELA,A_UNITE(YIEBELA,mode7,7,ZIEBELA),A68_52 ));
A_PROC_EXIT(tnamed);
return;
} 
#undef NL

A68_VOID  BJEBELA_trow(void)
{ 
A68_52  EJEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  FJEBELA;  /* YIELD */
A68_85  GJEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(trow);
FJEBELA = DJEBELA ;
FDEBELA_print(A_HVEC(GJEBELA,A_UNITE(EJEBELA,mode7,7,FJEBELA),A68_52 ));
A_PROC_EXIT(trow);
return;
} 
#undef NL

A68_VOID  HJEBELA_tst(void)
{ 
A68_52  KJEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  LJEBELA;  /* YIELD */
A68_85  MJEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(tst);
LJEBELA = JJEBELA ;
FDEBELA_print(A_HVEC(MJEBELA,A_UNITE(KJEBELA,mode7,7,LJEBELA),A68_52 ));
A_PROC_EXIT(tst);
return;
} 
#undef NL

A68_VOID  NJEBELA_tparam(void)
{ 
A68_52  QJEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  RJEBELA;  /* YIELD */
A68_85  SJEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(tparam);
RJEBELA = PJEBELA ;
FDEBELA_print(A_HVEC(SJEBELA,A_UNITE(QJEBELA,mode7,7,RJEBELA),A68_52 ));
A_PROC_EXIT(tparam);
return;
} 
#undef NL

A68_VOID  TJEBELA_tbracket(void)
{ 
A68_52  WJEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  XJEBELA;  /* YIELD */
A68_85  YJEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(tbracket);
XJEBELA = VJEBELA ;
FDEBELA_print(A_HVEC(YJEBELA,A_UNITE(WJEBELA,mode7,7,XJEBELA),A68_52 ));
A_PROC_EXIT(tbracket);
return;
} 
#undef NL

A68_VOID  ZJEBELA_tfn(void)
{ 
A68_52  CKEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  DKEBELA;  /* YIELD */
A68_85  EKEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(tfn);
DKEBELA = BKEBELA ;
FDEBELA_print(A_HVEC(EKEBELA,A_UNITE(CKEBELA,mode7,7,DKEBELA),A68_52 ));
A_PROC_EXIT(tfn);
return;
} 
#undef NL

A68_VOID  FKEBELA_cnamed(void)
{ 
A68_52  IKEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  JKEBELA;  /* YIELD */
A68_85  KKEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(cnamed);
JKEBELA = HKEBELA ;
FDEBELA_print(A_HVEC(KKEBELA,A_UNITE(IKEBELA,mode7,7,JKEBELA),A68_52 ));
A_PROC_EXIT(cnamed);
return;
} 
#undef NL

A68_VOID  LKEBELA_cprim(void)
{ 
A68_52  OKEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  PKEBELA;  /* YIELD */
A68_85  QKEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(cprim);
PKEBELA = NKEBELA ;
FDEBELA_print(A_HVEC(QKEBELA,A_UNITE(OKEBELA,mode7,7,PKEBELA),A68_52 ));
A_PROC_EXIT(cprim);
return;
} 
#undef NL

A68_VOID  RKEBELA_cprimi(void)
{ 
A68_52  UKEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  VKEBELA;  /* YIELD */
A68_85  WKEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(cprimi);
VKEBELA = TKEBELA ;
FDEBELA_print(A_HVEC(WKEBELA,A_UNITE(UKEBELA,mode7,7,VKEBELA),A68_52 ));
A_PROC_EXIT(cprimi);
return;
} 
#undef NL

A68_VOID  XKEBELA_cprimr(void)
{ 
A68_52  ALEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  BLEBELA;  /* YIELD */
A68_85  CLEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(cprimr);
BLEBELA = ZKEBELA ;
FDEBELA_print(A_HVEC(CLEBELA,A_UNITE(ALEBELA,mode7,7,BLEBELA),A68_52 ));
A_PROC_EXIT(cprimr);
return;
} 
#undef NL

A68_VOID  DLEBELA_cprimu(void)
{ 
A68_52  GLEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  HLEBELA;  /* YIELD */
A68_85  ILEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(cprimu);
HLEBELA = FLEBELA ;
FDEBELA_print(A_HVEC(ILEBELA,A_UNITE(GLEBELA,mode7,7,HLEBELA),A68_52 ));
A_PROC_EXIT(cprimu);
return;
} 
#undef NL

A68_VOID  JLEBELA_cst(void)
{ 
A68_52  MLEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  NLEBELA;  /* YIELD */
A68_85  OLEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(cst);
NLEBELA = LLEBELA ;
FDEBELA_print(A_HVEC(OLEBELA,A_UNITE(MLEBELA,mode7,7,NLEBELA),A68_52 ));
A_PROC_EXIT(cst);
return;
} 
#undef NL

A68_VOID  PLEBELA_crow(void)
{ 
A68_52  SLEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  TLEBELA;  /* YIELD */
A68_85  ULEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(crow);
TLEBELA = RLEBELA ;
FDEBELA_print(A_HVEC(ULEBELA,A_UNITE(SLEBELA,mode7,7,TLEBELA),A68_52 ));
A_PROC_EXIT(crow);
return;
} 
#undef NL

A68_VOID  VLEBELA_cnull(void)
{ 
A68_52  YLEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  ZLEBELA;  /* YIELD */
A68_85  AMEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(cnull);
ZLEBELA = XLEBELA ;
FDEBELA_print(A_HVEC(AMEBELA,A_UNITE(YLEBELA,mode7,7,ZLEBELA),A68_52 ));
A_PROC_EXIT(cnull);
return;
} 
#undef NL

A68_VOID  BMEBELA_cttype(void)
{ 
A68_52  EMEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  FMEBELA;  /* YIELD */
A68_85  GMEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(cttype);
FMEBELA = DMEBELA ;
FDEBELA_print(A_HVEC(GMEBELA,A_UNITE(EMEBELA,mode7,7,FMEBELA),A68_52 ));
A_PROC_EXIT(cttype);
return;
} 
#undef NL

A68_VOID  HMEBELA_cquery(void)
{ 
A68_52  KMEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  LMEBELA;  /* YIELD */
A68_85  MMEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(cquery);
LMEBELA = JMEBELA ;
FDEBELA_print(A_HVEC(MMEBELA,A_UNITE(KMEBELA,mode7,7,LMEBELA),A68_52 ));
A_PROC_EXIT(cquery);
return;
} 
#undef NL

A68_VOID  NMEBELA_cbracket(void)
{ 
A68_52  QMEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  RMEBELA;  /* YIELD */
A68_85  SMEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(cbracket);
RMEBELA = PMEBELA ;
FDEBELA_print(A_HVEC(SMEBELA,A_UNITE(QMEBELA,mode7,7,RMEBELA),A68_52 ));
A_PROC_EXIT(cbracket);
return;
} 
#undef NL

A68_VOID  TMEBELA_calt(void)
{ 
A68_52  WMEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  XMEBELA;  /* YIELD */
A68_85  YMEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(calt);
XMEBELA = VMEBELA ;
FDEBELA_print(A_HVEC(YMEBELA,A_UNITE(WMEBELA,mode7,7,XMEBELA),A68_52 ));
A_PROC_EXIT(calt);
return;
} 
#undef NL

A68_VOID  ZMEBELA_cparam(void)
{ 
A68_328  ANEBELA;  /* collateral clause result */
A68_52  DNEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  ENEBELA;  /* YIELD */
A68_52  FNEBELA;  /* OPERATORS - mode -> union mode */
A68_52  GNEBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  HNEBELA;  /* YIELD */
A68_85  INEBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(cparam);
ENEBELA = CNEBELA ;
ANEBELA.data[0] = A_UNITE(DNEBELA,mode7,7,ENEBELA);
ANEBELA.data[1] = A_UNITE(FNEBELA,mode1,1,ADEBELA_integer1);
HNEBELA = ' ' ;
ANEBELA.data[2] = A_UNITE(GNEBELA,mode6,6,HNEBELA);
FDEBELA_print(A_HISVEC(INEBELA,ANEBELA,3,A68_52 ));
A_PROC_EXIT(cparam);
return;
} 
#undef NL

A68_VOID  JNEBELA_cvoid(void)
{ 
A68_52  MNEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  NNEBELA;  /* YIELD */
A68_85  ONEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(cvoid);
NNEBELA = LNEBELA ;
FDEBELA_print(A_HVEC(ONEBELA,A_UNITE(MNEBELA,mode7,7,NNEBELA),A68_52 ));
A_PROC_EXIT(cvoid);
return;
} 
#undef NL

A68_VOID  PNEBELA_cindex(void)
{ 
A68_52  SNEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  TNEBELA;  /* YIELD */
A68_85  UNEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(cindex);
TNEBELA = RNEBELA ;
FDEBELA_print(A_HVEC(UNEBELA,A_UNITE(SNEBELA,mode7,7,TNEBELA),A68_52 ));
A_PROC_EXIT(cindex);
return;
} 
#undef NL

A68_VOID  VNEBELA_ctrim(void)
{ 
A68_52  YNEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  ZNEBELA;  /* YIELD */
A68_85  AOEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(ctrim);
ZNEBELA = XNEBELA ;
FDEBELA_print(A_HVEC(AOEBELA,A_UNITE(YNEBELA,mode7,7,ZNEBELA),A68_52 ));
A_PROC_EXIT(ctrim);
return;
} 
#undef NL

A68_VOID  BOEBELA_crepl(void)
{ 
A68_328  COEBELA;  /* collateral clause result */
A68_52  FOEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  GOEBELA;  /* YIELD */
A68_52  HOEBELA;  /* OPERATORS - mode -> union mode */
A68_52  IOEBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  JOEBELA;  /* YIELD */
A68_85  KOEBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(crepl);
GOEBELA = EOEBELA ;
COEBELA.data[0] = A_UNITE(FOEBELA,mode7,7,GOEBELA);
COEBELA.data[1] = A_UNITE(HOEBELA,mode1,1,ADEBELA_integer1);
JOEBELA = ' ' ;
COEBELA.data[2] = A_UNITE(IOEBELA,mode6,6,JOEBELA);
FDEBELA_print(A_HISVEC(KOEBELA,COEBELA,3,A68_52 ));
A_PROC_EXIT(crepl);
return;
} 
#undef NL

A68_VOID  LOEBELA_ccond(void)
{ 
A68_52  OOEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  POEBELA;  /* YIELD */
A68_85  QOEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(ccond);
POEBELA = NOEBELA ;
FDEBELA_print(A_HVEC(QOEBELA,A_UNITE(OOEBELA,mode7,7,POEBELA),A68_52 ));
A_PROC_EXIT(ccond);
return;
} 
#undef NL

A68_VOID  ROEBELA_cconc(void)
{ 
A68_328  SOEBELA;  /* collateral clause result */
A68_52  VOEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  WOEBELA;  /* YIELD */
A68_52  XOEBELA;  /* OPERATORS - mode -> union mode */
A68_52  YOEBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  ZOEBELA;  /* YIELD */
A68_85  APEBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(cconc);
WOEBELA = UOEBELA ;
SOEBELA.data[0] = A_UNITE(VOEBELA,mode7,7,WOEBELA);
SOEBELA.data[1] = A_UNITE(XOEBELA,mode1,1,ADEBELA_integer1);
ZOEBELA = ' ' ;
SOEBELA.data[2] = A_UNITE(YOEBELA,mode6,6,ZOEBELA);
FDEBELA_print(A_HISVEC(APEBELA,SOEBELA,3,A68_52 ));
A_PROC_EXIT(cconc);
return;
} 
#undef NL

A68_VOID  BPEBELA_cattr(void)
{ 
A68_52  EPEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  FPEBELA;  /* YIELD */
A68_85  GPEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(cattr);
FPEBELA = DPEBELA ;
FDEBELA_print(A_HVEC(GPEBELA,A_UNITE(EPEBELA,mode7,7,FPEBELA),A68_52 ));
A_PROC_EXIT(cattr);
return;
} 
#undef NL

A68_VOID  HPEBELA_pidalts(void)
{ 
A68_52  KPEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  LPEBELA;  /* YIELD */
A68_85  MPEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(pidalts);
LPEBELA = JPEBELA ;
FDEBELA_print(A_HVEC(MPEBELA,A_UNITE(KPEBELA,mode7,7,LPEBELA),A68_52 ));
A_PROC_EXIT(pidalts);
return;
} 
#undef NL

A68_VOID  NPEBELA_prange(void)
{ 
A68_52  QPEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  RPEBELA;  /* YIELD */
A68_85  SPEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(prange);
RPEBELA = PPEBELA ;
FDEBELA_print(A_HVEC(SPEBELA,A_UNITE(QPEBELA,mode7,7,RPEBELA),A68_52 ));
A_PROC_EXIT(prange);
return;
} 
#undef NL

A68_VOID  TPEBELA_pstring(void)
{ 
A68_52  WPEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  XPEBELA;  /* YIELD */
A68_85  YPEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(pstring);
XPEBELA = VPEBELA ;
FDEBELA_print(A_HVEC(YPEBELA,A_UNITE(WPEBELA,mode7,7,XPEBELA),A68_52 ));
A_PROC_EXIT(pstring);
return;
} 
#undef NL

A68_VOID  ZPEBELA_pchar(void)
{ 
A68_328  AQEBELA;  /* collateral clause result */
A68_52  DQEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  EQEBELA;  /* YIELD */
A68_52  FQEBELA;  /* OPERATORS - mode -> union mode */
A68_52  GQEBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  HQEBELA;  /* YIELD */
A68_85  IQEBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(pchar);
EQEBELA = CQEBELA ;
AQEBELA.data[0] = A_UNITE(DQEBELA,mode7,7,EQEBELA);
AQEBELA.data[1] = A_UNITE(FQEBELA,mode7,7,BDEBELA_identifier1);
HQEBELA = ' ' ;
AQEBELA.data[2] = A_UNITE(GQEBELA,mode6,6,HQEBELA);
FDEBELA_print(A_HISVEC(IQEBELA,AQEBELA,3,A68_52 ));
A_PROC_EXIT(pchar);
return;
} 
#undef NL

A68_VOID  JQEBELA_pcharange(void)
{ 
A68_328  KQEBELA;  /* collateral clause result */
A68_52  NQEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  OQEBELA;  /* YIELD */
A68_52  PQEBELA;  /* OPERATORS - mode -> union mode */
A68_52  QQEBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  RQEBELA;  /* YIELD */
A68_85  SQEBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(pcharange);
OQEBELA = MQEBELA ;
KQEBELA.data[0] = A_UNITE(NQEBELA,mode7,7,OQEBELA);
KQEBELA.data[1] = A_UNITE(PQEBELA,mode7,7,BDEBELA_identifier1);
RQEBELA = ' ' ;
KQEBELA.data[2] = A_UNITE(QQEBELA,mode6,6,RQEBELA);
FDEBELA_print(A_HISVEC(SQEBELA,KQEBELA,3,A68_52 ));
A_PROC_EXIT(pcharange);
return;
} 
#undef NL

A68_VOID  TQEBELA_zero(void)
{ 
A68_52  WQEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  XQEBELA;  /* YIELD */
A68_85  YQEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(zero);
XQEBELA = VQEBELA ;
FDEBELA_print(A_HVEC(YQEBELA,A_UNITE(WQEBELA,mode7,7,XQEBELA),A68_52 ));
A_PROC_EXIT(zero);
return;
} 
#undef NL

A68_VOID  ZQEBELA_end(void)
{ 
A68_52  CREBELA;  /* OPERATORS - mode -> union mode */
A68_VC  DREBELA;  /* YIELD */
A68_85  EREBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(end);
DREBELA = BREBELA ;
FDEBELA_print(A_HVEC(EREBELA,A_UNITE(CREBELA,mode7,7,DREBELA),A68_52 ));
A_PROC_EXIT(end);
return;
} 
#undef NL

A68_VOID  FREBELA_fnstart(void)
{ 
A68_52  IREBELA;  /* OPERATORS - mode -> union mode */
A68_VC  JREBELA;  /* YIELD */
A68_85  KREBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(fnstart);
JREBELA = HREBELA ;
FDEBELA_print(A_HVEC(KREBELA,A_UNITE(IREBELA,mode7,7,JREBELA),A68_52 ));
A_PROC_EXIT(fnstart);
return;
} 
#undef NL

A68_VOID  LREBELA_macparam(void)
{ 
A68_52  OREBELA;  /* OPERATORS - mode -> union mode */
A68_VC  PREBELA;  /* YIELD */
A68_85  QREBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(macparam);
PREBELA = NREBELA ;
FDEBELA_print(A_HVEC(QREBELA,A_UNITE(OREBELA,mode7,7,PREBELA),A68_52 ));
A_PROC_EXIT(macparam);
return;
} 
#undef NL

A68_VOID  RREBELA_inst(void)
{ 
A68_52  UREBELA;  /* OPERATORS - mode -> union mode */
A68_VC  VREBELA;  /* YIELD */
A68_85  WREBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(inst);
VREBELA = TREBELA ;
FDEBELA_print(A_HVEC(WREBELA,A_UNITE(UREBELA,mode7,7,VREBELA),A68_52 ));
A_PROC_EXIT(inst);
return;
} 
#undef NL

A68_VOID  XREBELA_normal(void)
{ 
A68_52  ASEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  BSEBELA;  /* YIELD */
A68_85  CSEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(normal);
BSEBELA = ZREBELA ;
FDEBELA_print(A_HVEC(CSEBELA,A_UNITE(ASEBELA,mode7,7,BSEBELA),A68_52 ));
A_PROC_EXIT(normal);
return;
} 
#undef NL

A68_VOID  DSEBELA_brief(void)
{ 
A68_52  GSEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  HSEBELA;  /* YIELD */
A68_85  ISEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(brief);
HSEBELA = FSEBELA ;
FDEBELA_print(A_HVEC(ISEBELA,A_UNITE(GSEBELA,mode7,7,HSEBELA),A68_52 ));
A_PROC_EXIT(brief);
return;
} 
#undef NL

A68_VOID  JSEBELA_fnend(void)
{ 
A68_52  MSEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  NSEBELA;  /* YIELD */
A68_85  OSEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(fnend);
NSEBELA = LSEBELA ;
FDEBELA_print(A_HVEC(OSEBELA,A_UNITE(MSEBELA,mode7,7,NSEBELA),A68_52 ));
A_PROC_EXIT(fnend);
return;
} 
#undef NL

A68_VOID  PSEBELA_biop(void)
{ 
A68_328  QSEBELA;  /* collateral clause result */
A68_52  TSEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  USEBELA;  /* YIELD */
A68_52  VSEBELA;  /* OPERATORS - mode -> union mode */
A68_52  WSEBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  XSEBELA;  /* YIELD */
A68_85  YSEBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(biop);
USEBELA = SSEBELA ;
QSEBELA.data[0] = A_UNITE(TSEBELA,mode7,7,USEBELA);
QSEBELA.data[1] = A_UNITE(VSEBELA,mode7,7,BDEBELA_identifier1);
XSEBELA = ' ' ;
QSEBELA.data[2] = A_UNITE(WSEBELA,mode6,6,XSEBELA);
FDEBELA_print(A_HISVEC(YSEBELA,QSEBELA,3,A68_52 ));
A_PROC_EXIT(biop);
return;
} 
#undef NL

A68_VOID  ZSEBELA_alien(void)
{ 
A68_328  ATEBELA;  /* collateral clause result */
A68_52  DTEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  ETEBELA;  /* YIELD */
A68_52  FTEBELA;  /* OPERATORS - mode -> union mode */
A68_52  GTEBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  HTEBELA;  /* YIELD */
A68_85  ITEBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(alien);
ETEBELA = CTEBELA ;
ATEBELA.data[0] = A_UNITE(DTEBELA,mode7,7,ETEBELA);
ATEBELA.data[1] = A_UNITE(FTEBELA,mode7,7,BDEBELA_identifier1);
HTEBELA = ' ' ;
ATEBELA.data[2] = A_UNITE(GTEBELA,mode6,6,HTEBELA);
FDEBELA_print(A_HISVEC(ITEBELA,ATEBELA,3,A68_52 ));
A_PROC_EXIT(alien);
return;
} 
#undef NL

A68_VOID  JTEBELA_idelay(void)
{ 
A68_328  KTEBELA;  /* collateral clause result */
A68_52  NTEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  OTEBELA;  /* YIELD */
A68_52  PTEBELA;  /* OPERATORS - mode -> union mode */
A68_52  QTEBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  RTEBELA;  /* YIELD */
A68_85  STEBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(idelay);
OTEBELA = MTEBELA ;
KTEBELA.data[0] = A_UNITE(NTEBELA,mode7,7,OTEBELA);
KTEBELA.data[1] = A_UNITE(PTEBELA,mode1,1,ADEBELA_integer1);
RTEBELA = ' ' ;
KTEBELA.data[2] = A_UNITE(QTEBELA,mode6,6,RTEBELA);
FDEBELA_print(A_HISVEC(STEBELA,KTEBELA,3,A68_52 ));
A_PROC_EXIT(idelay);
return;
} 
#undef NL

A68_VOID  TTEBELA_adelay(void)
{ 
A68_328  UTEBELA;  /* collateral clause result */
A68_52  XTEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  YTEBELA;  /* YIELD */
A68_52  ZTEBELA;  /* OPERATORS - mode -> union mode */
A68_52  AUEBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  BUEBELA;  /* YIELD */
A68_85  CUEBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(adelay);
YTEBELA = WTEBELA ;
UTEBELA.data[0] = A_UNITE(XTEBELA,mode7,7,YTEBELA);
UTEBELA.data[1] = A_UNITE(ZTEBELA,mode1,1,ADEBELA_integer1);
BUEBELA = ' ' ;
UTEBELA.data[2] = A_UNITE(AUEBELA,mode6,6,BUEBELA);
FDEBELA_print(A_HISVEC(CUEBELA,UTEBELA,3,A68_52 ));
A_PROC_EXIT(adelay);
return;
} 
#undef NL

A68_VOID  DUEBELA_sample(void)
{ 
A68_328  EUEBELA;  /* collateral clause result */
A68_52  HUEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  IUEBELA;  /* YIELD */
A68_52  JUEBELA;  /* OPERATORS - mode -> union mode */
A68_52  KUEBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  LUEBELA;  /* YIELD */
A68_85  MUEBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(sample);
IUEBELA = GUEBELA ;
EUEBELA.data[0] = A_UNITE(HUEBELA,mode7,7,IUEBELA);
EUEBELA.data[1] = A_UNITE(JUEBELA,mode1,1,ADEBELA_integer1);
LUEBELA = ' ' ;
EUEBELA.data[2] = A_UNITE(KUEBELA,mode6,6,LUEBELA);
FDEBELA_print(A_HISVEC(MUEBELA,EUEBELA,3,A68_52 ));
A_PROC_EXIT(sample);
return;
} 
#undef NL

A68_VOID  NUEBELA_faster(void)
{ 
A68_52  QUEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  RUEBELA;  /* YIELD */
A68_85  SUEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(faster);
RUEBELA = PUEBELA ;
FDEBELA_print(A_HVEC(SUEBELA,A_UNITE(QUEBELA,mode7,7,RUEBELA),A68_52 ));
A_PROC_EXIT(faster);
return;
} 
#undef NL

A68_VOID  TUEBELA_slower(void)
{ 
A68_52  WUEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  XUEBELA;  /* YIELD */
A68_85  YUEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(slower);
XUEBELA = VUEBELA ;
FDEBELA_print(A_HVEC(YUEBELA,A_UNITE(WUEBELA,mode7,7,XUEBELA),A68_52 ));
A_PROC_EXIT(slower);
return;
} 
#undef NL

A68_VOID  ZUEBELA_ram(void)
{ 
A68_328  AVEBELA;  /* collateral clause result */
A68_52  DVEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  EVEBELA;  /* YIELD */
A68_52  FVEBELA;  /* OPERATORS - mode -> union mode */
A68_52  GVEBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  HVEBELA;  /* YIELD */
A68_85  IVEBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(ram);
EVEBELA = CVEBELA ;
AVEBELA.data[0] = A_UNITE(DVEBELA,mode7,7,EVEBELA);
AVEBELA.data[1] = A_UNITE(FVEBELA,mode1,1,ADEBELA_integer1);
HVEBELA = ' ' ;
AVEBELA.data[2] = A_UNITE(GVEBELA,mode6,6,HVEBELA);
FDEBELA_print(A_HISVEC(IVEBELA,AVEBELA,3,A68_52 ));
A_PROC_EXIT(ram);
return;
} 
#undef NL

A68_VOID  JVEBELA_reform(void)
{ 
A68_52  MVEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  NVEBELA;  /* YIELD */
A68_85  OVEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(reform);
NVEBELA = LVEBELA ;
FDEBELA_print(A_HVEC(OVEBELA,A_UNITE(MVEBELA,mode7,7,NVEBELA),A68_52 ));
A_PROC_EXIT(reform);
return;
} 
#undef NL

A68_VOID  PVEBELA_imported(void)
{ 
A68_52  SVEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  TVEBELA;  /* YIELD */
A68_85  UVEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(imported);
TVEBELA = RVEBELA ;
FDEBELA_print(A_HVEC(UVEBELA,A_UNITE(SVEBELA,mode7,7,TVEBELA),A68_52 ));
A_PROC_EXIT(imported);
return;
} 
#undef NL

A68_VOID  VVEBELA_vconc(void)
{ 
A68_52  YVEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  ZVEBELA;  /* YIELD */
A68_85  AWEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vconc);
ZVEBELA = XVEBELA ;
FDEBELA_print(A_HVEC(AWEBELA,A_UNITE(YVEBELA,mode7,7,ZVEBELA),A68_52 ));
A_PROC_EXIT(vconc);
return;
} 
#undef NL

A68_VOID  BWEBELA_vconst(void)
{ 
A68_52  EWEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  FWEBELA;  /* YIELD */
A68_85  GWEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vconst);
FWEBELA = DWEBELA ;
FDEBELA_print(A_HVEC(GWEBELA,A_UNITE(EWEBELA,mode7,7,FWEBELA),A68_52 ));
A_PROC_EXIT(vconst);
return;
} 
#undef NL

A68_VOID  HWEBELA_vprim(void)
{ 
A68_52  KWEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  LWEBELA;  /* YIELD */
A68_85  MWEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vprim);
LWEBELA = JWEBELA ;
FDEBELA_print(A_HVEC(MWEBELA,A_UNITE(KWEBELA,mode7,7,LWEBELA),A68_52 ));
A_PROC_EXIT(vprim);
return;
} 
#undef NL

A68_VOID  NWEBELA_vprimi(void)
{ 
A68_52  QWEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  RWEBELA;  /* YIELD */
A68_85  SWEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vprimi);
RWEBELA = PWEBELA ;
FDEBELA_print(A_HVEC(SWEBELA,A_UNITE(QWEBELA,mode7,7,RWEBELA),A68_52 ));
A_PROC_EXIT(vprimi);
return;
} 
#undef NL

A68_VOID  TWEBELA_vprimc(void)
{ 
A68_52  WWEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  XWEBELA;  /* YIELD */
A68_85  YWEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vprimc);
XWEBELA = VWEBELA ;
FDEBELA_print(A_HVEC(YWEBELA,A_UNITE(WWEBELA,mode7,7,XWEBELA),A68_52 ));
A_PROC_EXIT(vprimc);
return;
} 
#undef NL

A68_VOID  ZWEBELA_vname(void)
{ 
A68_52  CXEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  DXEBELA;  /* YIELD */
A68_85  EXEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vname);
DXEBELA = BXEBELA ;
FDEBELA_print(A_HVEC(EXEBELA,A_UNITE(CXEBELA,mode7,7,DXEBELA),A68_52 ));
A_PROC_EXIT(vname);
return;
} 
#undef NL

A68_VOID  FXEBELA_vtrim(void)
{ 
A68_52  IXEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  JXEBELA;  /* YIELD */
A68_85  KXEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vtrim);
JXEBELA = HXEBELA ;
FDEBELA_print(A_HVEC(KXEBELA,A_UNITE(IXEBELA,mode7,7,JXEBELA),A68_52 ));
A_PROC_EXIT(vtrim);
return;
} 
#undef NL

A68_VOID  LXEBELA_vindex(void)
{ 
A68_52  OXEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  PXEBELA;  /* YIELD */
A68_85  QXEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vindex);
PXEBELA = NXEBELA ;
FDEBELA_print(A_HVEC(QXEBELA,A_UNITE(OXEBELA,mode7,7,PXEBELA),A68_52 ));
A_PROC_EXIT(vindex);
return;
} 
#undef NL

A68_VOID  RXEBELA_vtermindex(void)
{ 
A68_52  UXEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  VXEBELA;  /* YIELD */
A68_85  WXEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vtermindex);
VXEBELA = TXEBELA ;
FDEBELA_print(A_HVEC(WXEBELA,A_UNITE(UXEBELA,mode7,7,VXEBELA),A68_52 ));
A_PROC_EXIT(vtermindex);
return;
} 
#undef NL

A68_VOID  XXEBELA_vcallm(void)
{ 
A68_52  AYEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  BYEBELA;  /* YIELD */
A68_85  CYEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vcallm);
BYEBELA = ZXEBELA ;
FDEBELA_print(A_HVEC(CYEBELA,A_UNITE(AYEBELA,mode7,7,BYEBELA),A68_52 ));
A_PROC_EXIT(vcallm);
return;
} 
#undef NL

A68_VOID  DYEBELA_vcalld(void)
{ 
A68_52  GYEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  HYEBELA;  /* YIELD */
A68_85  IYEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vcalld);
HYEBELA = FYEBELA ;
FDEBELA_print(A_HVEC(IYEBELA,A_UNITE(GYEBELA,mode7,7,HYEBELA),A68_52 ));
A_PROC_EXIT(vcalld);
return;
} 
#undef NL

A68_VOID  JYEBELA_vunn(void)
{ 
A68_52  MYEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  NYEBELA;  /* YIELD */
A68_85  OYEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vunn);
NYEBELA = LYEBELA ;
FDEBELA_print(A_HVEC(OYEBELA,A_UNITE(MYEBELA,mode7,7,NYEBELA),A68_52 ));
A_PROC_EXIT(vunn);
return;
} 
#undef NL

A68_VOID  PYEBELA_vsharp(void)
{ 
A68_52  SYEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  TYEBELA;  /* YIELD */
A68_85  UYEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vsharp);
TYEBELA = RYEBELA ;
FDEBELA_print(A_HVEC(UYEBELA,A_UNITE(SYEBELA,mode7,7,TYEBELA),A68_52 ));
A_PROC_EXIT(vsharp);
return;
} 
#undef NL

A68_VOID  VYEBELA_vrow(void)
{ 
A68_52  YYEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  ZYEBELA;  /* YIELD */
A68_85  AZEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vrow);
ZYEBELA = XYEBELA ;
FDEBELA_print(A_HVEC(AZEBELA,A_UNITE(YYEBELA,mode7,7,ZYEBELA),A68_52 ));
A_PROC_EXIT(vrow);
return;
} 
#undef NL

A68_VOID  BZEBELA_vcase(void)
{ 
A68_52  EZEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  FZEBELA;  /* YIELD */
A68_85  GZEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vcase);
FZEBELA = DZEBELA ;
FDEBELA_print(A_HVEC(GZEBELA,A_UNITE(EZEBELA,mode7,7,FZEBELA),A68_52 ));
A_PROC_EXIT(vcase);
return;
} 
#undef NL

A68_VOID  HZEBELA_vcaseend(void)
{ 
A68_52  KZEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  LZEBELA;  /* YIELD */
A68_85  MZEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vcaseend);
LZEBELA = JZEBELA ;
FDEBELA_print(A_HVEC(MZEBELA,A_UNITE(KZEBELA,mode7,7,LZEBELA),A68_52 ));
A_PROC_EXIT(vcaseend);
return;
} 
#undef NL

A68_VOID  NZEBELA_vquery(void)
{ 
A68_52  QZEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  RZEBELA;  /* YIELD */
A68_85  SZEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vquery);
RZEBELA = PZEBELA ;
FDEBELA_print(A_HVEC(SZEBELA,A_UNITE(QZEBELA,mode7,7,RZEBELA),A68_52 ));
A_PROC_EXIT(vquery);
return;
} 
#undef NL

A68_VOID  TZEBELA_vcoll(void)
{ 
A68_52  WZEBELA;  /* OPERATORS - mode -> union mode */
A68_VC  XZEBELA;  /* YIELD */
A68_85  YZEBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vcoll);
XZEBELA = VZEBELA ;
FDEBELA_print(A_HVEC(YZEBELA,A_UNITE(WZEBELA,mode7,7,XZEBELA),A68_52 ));
A_PROC_EXIT(vcoll);
return;
} 
#undef NL

A68_VOID  ZZEBELA_vif(void)
{ 
A68_52  CAFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  DAFBELA;  /* YIELD */
A68_85  EAFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vif);
DAFBELA = BAFBELA ;
FDEBELA_print(A_HVEC(EAFBELA,A_UNITE(CAFBELA,mode7,7,DAFBELA),A68_52 ));
A_PROC_EXIT(vif);
return;
} 
#undef NL

A68_VOID  FAFBELA_vthen(void)
{ 
A68_52  IAFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  JAFBELA;  /* YIELD */
A68_85  KAFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vthen);
JAFBELA = HAFBELA ;
FDEBELA_print(A_HVEC(KAFBELA,A_UNITE(IAFBELA,mode7,7,JAFBELA),A68_52 ));
A_PROC_EXIT(vthen);
return;
} 
#undef NL

A68_VOID  LAFBELA_velse(void)
{ 
A68_52  OAFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  PAFBELA;  /* YIELD */
A68_85  QAFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(velse);
PAFBELA = NAFBELA ;
FDEBELA_print(A_HVEC(QAFBELA,A_UNITE(OAFBELA,mode7,7,PAFBELA),A68_52 ));
A_PROC_EXIT(velse);
return;
} 
#undef NL

A68_VOID  RAFBELA_vfi(void)
{ 
A68_52  UAFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  VAFBELA;  /* YIELD */
A68_85  WAFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vfi);
VAFBELA = TAFBELA ;
FDEBELA_print(A_HVEC(WAFBELA,A_UNITE(UAFBELA,mode7,7,VAFBELA),A68_52 ));
A_PROC_EXIT(vfi);
return;
} 
#undef NL

A68_VOID  XAFBELA_vvarmult(void)
{ 
A68_52  ABFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  BBFBELA;  /* YIELD */
A68_85  CBFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vvarmult);
BBFBELA = ZAFBELA ;
FDEBELA_print(A_HVEC(CBFBELA,A_UNITE(ABFBELA,mode7,7,BBFBELA),A68_52 ));
A_PROC_EXIT(vvarmult);
return;
} 
#undef NL

A68_VOID  DBFBELA_vvarmultend(void)
{ 
A68_52  GBFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  HBFBELA;  /* YIELD */
A68_85  IBFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vvarmultend);
HBFBELA = FBFBELA ;
FDEBELA_print(A_HVEC(IBFBELA,A_UNITE(GBFBELA,mode7,7,HBFBELA),A68_52 ));
A_PROC_EXIT(vvarmultend);
return;
} 
#undef NL

A68_VOID  JBFBELA_vseq(void)
{ 
A68_52  MBFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  NBFBELA;  /* YIELD */
A68_85  OBFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vseq);
NBFBELA = LBFBELA ;
FDEBELA_print(A_HVEC(OBFBELA,A_UNITE(MBFBELA,mode7,7,NBFBELA),A68_52 ));
A_PROC_EXIT(vseq);
return;
} 
#undef NL

A68_VOID  PBFBELA_vpar(void)
{ 
A68_52  SBFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  TBFBELA;  /* YIELD */
A68_85  UBFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vpar);
TBFBELA = RBFBELA ;
FDEBELA_print(A_HVEC(UBFBELA,A_UNITE(SBFBELA,mode7,7,TBFBELA),A68_52 ));
A_PROC_EXIT(vpar);
return;
} 
#undef NL

A68_VOID  VBFBELA_vdynindex(void)
{ 
A68_52  YBFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  ZBFBELA;  /* YIELD */
A68_85  ACFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vdynindex);
ZBFBELA = XBFBELA ;
FDEBELA_print(A_HVEC(ACFBELA,A_UNITE(YBFBELA,mode7,7,ZBFBELA),A68_52 ));
A_PROC_EXIT(vdynindex);
return;
} 
#undef NL

A68_VOID  BCFBELA_vdynend(void)
{ 
A68_52  ECFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  FCFBELA;  /* YIELD */
A68_85  GCFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vdynend);
FCFBELA = DCFBELA ;
FDEBELA_print(A_HVEC(GCFBELA,A_UNITE(ECFBELA,mode7,7,FCFBELA),A68_52 ));
A_PROC_EXIT(vdynend);
return;
} 
#undef NL

A68_VOID  HCFBELA_vdynassign(void)
{ 
A68_52  KCFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  LCFBELA;  /* YIELD */
A68_85  MCFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vdynassign);
LCFBELA = JCFBELA ;
FDEBELA_print(A_HVEC(MCFBELA,A_UNITE(KCFBELA,mode7,7,LCFBELA),A68_52 ));
A_PROC_EXIT(vdynassign);
return;
} 
#undef NL

A68_VOID  NCFBELA_vbracket(void)
{ 
A68_52  QCFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  RCFBELA;  /* YIELD */
A68_85  SCFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vbracket);
RCFBELA = PCFBELA ;
FDEBELA_print(A_HVEC(SCFBELA,A_UNITE(QCFBELA,mode7,7,RCFBELA),A68_52 ));
A_PROC_EXIT(vbracket);
return;
} 
#undef NL

A68_VOID  TCFBELA_vnull(void)
{ 
A68_52  WCFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  XCFBELA;  /* YIELD */
A68_85  YCFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vnull);
XCFBELA = VCFBELA ;
FDEBELA_print(A_HVEC(YCFBELA,A_UNITE(WCFBELA,mode7,7,XCFBELA),A68_52 ));
A_PROC_EXIT(vnull);
return;
} 
#undef NL

A68_VOID  ZCFBELA_vvoid(void)
{ 
A68_52  CDFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  DDFBELA;  /* YIELD */
A68_85  EDFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vvoid);
DDFBELA = BDFBELA ;
FDEBELA_print(A_HVEC(EDFBELA,A_UNITE(CDFBELA,mode7,7,DDFBELA),A68_52 ));
A_PROC_EXIT(vvoid);
return;
} 
#undef NL

A68_VOID  FDFBELA_vreplace(void)
{ 
A68_52  IDFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  JDFBELA;  /* YIELD */
A68_85  KDFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vreplace);
JDFBELA = HDFBELA ;
FDEBELA_print(A_HVEC(KDFBELA,A_UNITE(IDFBELA,mode7,7,JDFBELA),A68_52 ));
A_PROC_EXIT(vreplace);
return;
} 
#undef NL

A68_VOID  LDFBELA_attid(void)
{ 
A68_52  ODFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  PDFBELA;  /* YIELD */
A68_85  QDFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(attid);
PDFBELA = NDFBELA ;
FDEBELA_print(A_HVEC(QDFBELA,A_UNITE(ODFBELA,mode7,7,PDFBELA),A68_52 ));
A_PROC_EXIT(attid);
return;
} 
#undef NL

A68_VOID  RDFBELA_attdata(void)
{ 
A68_52  UDFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  VDFBELA;  /* YIELD */
A68_85  WDFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(attdata);
VDFBELA = TDFBELA ;
FDEBELA_print(A_HVEC(WDFBELA,A_UNITE(UDFBELA,mode7,7,VDFBELA),A68_52 ));
A_PROC_EXIT(attdata);
return;
} 
#undef NL

A68_VOID  XDFBELA_kattr(void)
{ 
A68_52  AEFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  BEFBELA;  /* YIELD */
A68_85  CEFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(kattr);
BEFBELA = ZDFBELA ;
FDEBELA_print(A_HVEC(CEFBELA,A_UNITE(AEFBELA,mode7,7,BEFBELA),A68_52 ));
A_PROC_EXIT(kattr);
return;
} 
#undef NL

A68_VOID  DEFBELA_attbracket(void)
{ 
A68_52  GEFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  HEFBELA;  /* YIELD */
A68_85  IEFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(attbracket);
HEFBELA = FEFBELA ;
FDEBELA_print(A_HVEC(IEFBELA,A_UNITE(GEFBELA,mode7,7,HEFBELA),A68_52 ));
A_PROC_EXIT(attbracket);
return;
} 
#undef NL

A68_VOID  JEFBELA_attstr(void)
{ 
A68_52  MEFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  NEFBELA;  /* YIELD */
A68_85  OEFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(attstr);
NEFBELA = LEFBELA ;
FDEBELA_print(A_HVEC(OEFBELA,A_UNITE(MEFBELA,mode7,7,NEFBELA),A68_52 ));
A_PROC_EXIT(attstr);
return;
} 
#undef NL

A68_VOID  PEFBELA_attnull(void)
{ 
A68_52  SEFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  TEFBELA;  /* YIELD */
A68_85  UEFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(attnull);
TEFBELA = REFBELA ;
FDEBELA_print(A_HVEC(UEFBELA,A_UNITE(SEFBELA,mode7,7,TEFBELA),A68_52 ));
A_PROC_EXIT(attnull);
return;
} 
#undef NL

A68_VOID  VEFBELA_attrname(void)
{ 
A68_52  YEFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  ZEFBELA;  /* YIELD */
A68_85  AFFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(attrname);
ZEFBELA = XEFBELA ;
FDEBELA_print(A_HVEC(AFFBELA,A_UNITE(YEFBELA,mode7,7,ZEFBELA),A68_52 ));
A_PROC_EXIT(attrname);
return;
} 
#undef NL

A68_VOID  BFFBELA_vnormal(void)
{ 
A68_52  EFFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  FFFBELA;  /* YIELD */
A68_85  GFFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vnormal);
FFFBELA = DFFBELA ;
FDEBELA_print(A_HVEC(GFFBELA,A_UNITE(EFFBELA,mode7,7,FFFBELA),A68_52 ));
A_PROC_EXIT(vnormal);
return;
} 
#undef NL

A68_VOID  HFFBELA_vnoelse(void)
{ 
A68_52  KFFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  LFFBELA;  /* YIELD */
A68_85  MFFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vnoelse);
LFFBELA = JFFBELA ;
FDEBELA_print(A_HVEC(MFFBELA,A_UNITE(KFFBELA,mode7,7,LFFBELA),A68_52 ));
A_PROC_EXIT(vnoelse);
return;
} 
#undef NL

A68_VOID  NFFBELA_velseof(void)
{ 
A68_52  QFFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  RFFBELA;  /* YIELD */
A68_85  SFFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(velseof);
RFFBELA = PFFBELA ;
FDEBELA_print(A_HVEC(SFFBELA,A_UNITE(QFFBELA,mode7,7,RFFBELA),A68_52 ));
A_PROC_EXIT(velseof);
return;
} 
#undef NL

A68_VOID  TFFBELA_seqend(void)
{ 
A68_52  WFFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  XFFBELA;  /* YIELD */
A68_85  YFFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(seqend);
XFFBELA = VFFBELA ;
FDEBELA_print(A_HVEC(YFFBELA,A_UNITE(WFFBELA,mode7,7,XFFBELA),A68_52 ));
A_PROC_EXIT(seqend);
return;
} 
#undef NL

A68_VOID  ZFFBELA_seqnull(void)
{ 
A68_52  CGFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  DGFBELA;  /* YIELD */
A68_85  EGFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(seqnull);
DGFBELA = BGFBELA ;
FDEBELA_print(A_HVEC(EGFBELA,A_UNITE(CGFBELA,mode7,7,DGFBELA),A68_52 ));
A_PROC_EXIT(seqnull);
return;
} 
#undef NL

A68_VOID  FGFBELA_seqvoid(void)
{ 
A68_52  IGFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  JGFBELA;  /* YIELD */
A68_85  KGFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(seqvoid);
JGFBELA = HGFBELA ;
FDEBELA_print(A_HVEC(KGFBELA,A_UNITE(IGFBELA,mode7,7,JGFBELA),A68_52 ));
A_PROC_EXIT(seqvoid);
return;
} 
#undef NL

A68_VOID  LGFBELA_seqlet(void)
{ 
A68_52  OGFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  PGFBELA;  /* YIELD */
A68_85  QGFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(seqlet);
PGFBELA = NGFBELA ;
FDEBELA_print(A_HVEC(QGFBELA,A_UNITE(OGFBELA,mode7,7,PGFBELA),A68_52 ));
A_PROC_EXIT(seqlet);
return;
} 
#undef NL

A68_VOID  RGFBELA_seqvar(void)
{ 
A68_52  UGFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  VGFBELA;  /* YIELD */
A68_85  WGFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(seqvar);
VGFBELA = TGFBELA ;
FDEBELA_print(A_HVEC(WGFBELA,A_UNITE(UGFBELA,mode7,7,VGFBELA),A68_52 ));
A_PROC_EXIT(seqvar);
return;
} 
#undef NL

A68_VOID  XGFBELA_seqper(void)
{ 
A68_52  AHFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  BHFBELA;  /* YIELD */
A68_85  CHFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(seqper);
BHFBELA = ZGFBELA ;
FDEBELA_print(A_HVEC(CHFBELA,A_UNITE(AHFBELA,mode7,7,BHFBELA),A68_52 ));
A_PROC_EXIT(seqper);
return;
} 
#undef NL

A68_VOID  DHFBELA_seqassign(void)
{ 
A68_52  GHFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  HHFBELA;  /* YIELD */
A68_85  IHFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(seqassign);
HHFBELA = FHFBELA ;
FDEBELA_print(A_HVEC(IHFBELA,A_UNITE(GHFBELA,mode7,7,HHFBELA),A68_52 ));
A_PROC_EXIT(seqassign);
return;
} 
#undef NL

A68_VOID  JHFBELA_seqbecomes(void)
{ 
A68_52  MHFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  NHFBELA;  /* YIELD */
A68_85  OHFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(seqbecomes);
NHFBELA = LHFBELA ;
FDEBELA_print(A_HVEC(OHFBELA,A_UNITE(MHFBELA,mode7,7,NHFBELA),A68_52 ));
A_PROC_EXIT(seqbecomes);
return;
} 
#undef NL

A68_VOID  PHFBELA_seqassignend(void)
{ 
A68_52  SHFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  THFBELA;  /* YIELD */
A68_85  UHFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(seqassignend);
THFBELA = RHFBELA ;
FDEBELA_print(A_HVEC(UHFBELA,A_UNITE(SHFBELA,mode7,7,THFBELA),A68_52 ));
A_PROC_EXIT(seqassignend);
return;
} 
#undef NL

A68_VOID  VHFBELA_seqcase(void)
{ 
A68_52  YHFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  ZHFBELA;  /* YIELD */
A68_85  AIFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(seqcase);
ZHFBELA = XHFBELA ;
FDEBELA_print(A_HVEC(AIFBELA,A_UNITE(YHFBELA,mode7,7,ZHFBELA),A68_52 ));
A_PROC_EXIT(seqcase);
return;
} 
#undef NL

A68_VOID  BIFBELA_seqif(void)
{ 
A68_52  EIFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  FIFBELA;  /* YIELD */
A68_85  GIFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(seqif);
FIFBELA = DIFBELA ;
FDEBELA_print(A_HVEC(GIFBELA,A_UNITE(EIFBELA,mode7,7,FIFBELA),A68_52 ));
A_PROC_EXIT(seqif);
return;
} 
#undef NL

A68_VOID  HIFBELA_seqthen(void)
{ 
A68_52  KIFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  LIFBELA;  /* YIELD */
A68_85  MIFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(seqthen);
LIFBELA = JIFBELA ;
FDEBELA_print(A_HVEC(MIFBELA,A_UNITE(KIFBELA,mode7,7,LIFBELA),A68_52 ));
A_PROC_EXIT(seqthen);
return;
} 
#undef NL

A68_VOID  NIFBELA_seqelse(void)
{ 
A68_52  QIFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  RIFBELA;  /* YIELD */
A68_85  SIFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(seqelse);
RIFBELA = PIFBELA ;
FDEBELA_print(A_HVEC(SIFBELA,A_UNITE(QIFBELA,mode7,7,RIFBELA),A68_52 ));
A_PROC_EXIT(seqelse);
return;
} 
#undef NL

A68_VOID  TIFBELA_seqfi(void)
{ 
A68_52  WIFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  XIFBELA;  /* YIELD */
A68_85  YIFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(seqfi);
XIFBELA = VIFBELA ;
FDEBELA_print(A_HVEC(YIFBELA,A_UNITE(WIFBELA,mode7,7,XIFBELA),A68_52 ));
A_PROC_EXIT(seqfi);
return;
} 
#undef NL

A68_VOID  ZIFBELA_seqrow(void)
{ 
A68_52  CJFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  DJFBELA;  /* YIELD */
A68_85  EJFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(seqrow);
DJFBELA = BJFBELA ;
FDEBELA_print(A_HVEC(EJFBELA,A_UNITE(CJFBELA,mode7,7,DJFBELA),A68_52 ));
A_PROC_EXIT(seqrow);
return;
} 
#undef NL

A68_VOID  FJFBELA_seqvarmult(void)
{ 
A68_52  IJFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  JJFBELA;  /* YIELD */
A68_85  KJFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(seqvarmult);
JJFBELA = HJFBELA ;
FDEBELA_print(A_HVEC(KJFBELA,A_UNITE(IJFBELA,mode7,7,JJFBELA),A68_52 ));
A_PROC_EXIT(seqvarmult);
return;
} 
#undef NL

A68_VOID  LJFBELA_seqvarmultend(void)
{ 
A68_52  OJFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  PJFBELA;  /* YIELD */
A68_85  QJFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(seqvarmultend);
PJFBELA = NJFBELA ;
FDEBELA_print(A_HVEC(QJFBELA,A_UNITE(OJFBELA,mode7,7,PJFBELA),A68_52 ));
A_PROC_EXIT(seqvarmultend);
return;
} 
#undef NL

A68_VOID  RJFBELA_typename(void)
{ 
A68_52  UJFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  VJFBELA;  /* YIELD */
A68_85  WJFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(typename);
VJFBELA = TJFBELA ;
FDEBELA_print(A_HVEC(WJFBELA,A_UNITE(UJFBELA,mode7,7,VJFBELA),A68_52 ));
A_PROC_EXIT(typename);
return;
} 
#undef NL

A68_VOID  XJFBELA_intname(void)
{ 
A68_52  AKFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  BKFBELA;  /* YIELD */
A68_85  CKFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(intname);
BKFBELA = ZJFBELA ;
FDEBELA_print(A_HVEC(CKFBELA,A_UNITE(AKFBELA,mode7,7,BKFBELA),A68_52 ));
A_PROC_EXIT(intname);
return;
} 
#undef NL

A68_VOID  DKFBELA_constname(void)
{ 
A68_52  GKFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  HKFBELA;  /* YIELD */
A68_85  IKFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(constname);
HKFBELA = FKFBELA ;
FDEBELA_print(A_HVEC(IKFBELA,A_UNITE(GKFBELA,mode7,7,HKFBELA),A68_52 ));
A_PROC_EXIT(constname);
return;
} 
#undef NL

A68_VOID  JKFBELA_unchecked(void)
{ 
A68_52  MKFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  NKFBELA;  /* YIELD */
A68_85  OKFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(unchecked);
NKFBELA = LKFBELA ;
FDEBELA_print(A_HVEC(OKFBELA,A_UNITE(MKFBELA,mode7,7,NKFBELA),A68_52 ));
A_PROC_EXIT(unchecked);
return;
} 
#undef NL

A68_VOID  PKFBELA_parend(void)
{ 
A68_52  SKFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  TKFBELA;  /* YIELD */
A68_85  UKFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(parend);
TKFBELA = RKFBELA ;
FDEBELA_print(A_HVEC(UKFBELA,A_UNITE(SKFBELA,mode7,7,TKFBELA),A68_52 ));
A_PROC_EXIT(parend);
return;
} 
#undef NL

A68_VOID  VKFBELA_bmake(void)
{ 
A68_52  YKFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  ZKFBELA;  /* YIELD */
A68_85  ALFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(bmake);
ZKFBELA = XKFBELA ;
FDEBELA_print(A_HVEC(ALFBELA,A_UNITE(YKFBELA,mode7,7,ZKFBELA),A68_52 ));
A_PROC_EXIT(bmake);
return;
} 
#undef NL

A68_VOID  BLFBELA_bmakeend(void)
{ 
A68_52  ELFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  FLFBELA;  /* YIELD */
A68_85  GLFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(bmakeend);
FLFBELA = DLFBELA ;
FDEBELA_print(A_HVEC(GLFBELA,A_UNITE(ELFBELA,mode7,7,FLFBELA),A68_52 ));
A_PROC_EXIT(bmakeend);
return;
} 
#undef NL

A68_VOID  HLFBELA_bjoinend(void)
{ 
A68_52  KLFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  LLFBELA;  /* YIELD */
A68_85  MLFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(bjoinend);
LLFBELA = JLFBELA ;
FDEBELA_print(A_HVEC(MLFBELA,A_UNITE(KLFBELA,mode7,7,LLFBELA),A68_52 ));
A_PROC_EXIT(bjoinend);
return;
} 
#undef NL

A68_VOID  NLFBELA_bjoin(void)
{ 
A68_52  QLFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  RLFBELA;  /* YIELD */
A68_85  SLFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(bjoin);
RLFBELA = PLFBELA ;
FDEBELA_print(A_HVEC(SLFBELA,A_UNITE(QLFBELA,mode7,7,RLFBELA),A68_52 ));
A_PROC_EXIT(bjoin);
return;
} 
#undef NL

A68_VOID  TLFBELA_bfor(void)
{ 
A68_52  WLFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  XLFBELA;  /* YIELD */
A68_85  YLFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(bfor);
XLFBELA = VLFBELA ;
FDEBELA_print(A_HVEC(YLFBELA,A_UNITE(WLFBELA,mode7,7,XLFBELA),A68_52 ));
A_PROC_EXIT(bfor);
return;
} 
#undef NL

A68_VOID  ZLFBELA_multjoin(void)
{ 
A68_52  CMFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  DMFBELA;  /* YIELD */
A68_85  EMFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(multjoin);
DMFBELA = BMFBELA ;
FDEBELA_print(A_HVEC(EMFBELA,A_UNITE(CMFBELA,mode7,7,DMFBELA),A68_52 ));
A_PROC_EXIT(multjoin);
return;
} 
#undef NL

A68_VOID  FMFBELA_bend(void)
{ 
A68_52  IMFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  JMFBELA;  /* YIELD */
A68_85  KMFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(bend);
JMFBELA = HMFBELA ;
FDEBELA_print(A_HVEC(KMFBELA,A_UNITE(IMFBELA,mode7,7,JMFBELA),A68_52 ));
A_PROC_EXIT(bend);
return;
} 
#undef NL

A68_VOID  LMFBELA_ptypename(void)
{ 
A68_52  OMFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  PMFBELA;  /* YIELD */
A68_85  QMFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(ptypename);
PMFBELA = NMFBELA ;
FDEBELA_print(A_HVEC(QMFBELA,A_UNITE(OMFBELA,mode7,7,PMFBELA),A68_52 ));
A_PROC_EXIT(ptypename);
return;
} 
#undef NL

A68_VOID  RMFBELA_pintname(void)
{ 
A68_52  UMFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  VMFBELA;  /* YIELD */
A68_85  WMFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(pintname);
VMFBELA = TMFBELA ;
FDEBELA_print(A_HVEC(WMFBELA,A_UNITE(UMFBELA,mode7,7,VMFBELA),A68_52 ));
A_PROC_EXIT(pintname);
return;
} 
#undef NL

A68_VOID  XMFBELA_pconstname(void)
{ 
A68_52  ANFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  BNFBELA;  /* YIELD */
A68_85  CNFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(pconstname);
BNFBELA = ZMFBELA ;
FDEBELA_print(A_HVEC(CNFBELA,A_UNITE(ANFBELA,mode7,7,BNFBELA),A68_52 ));
A_PROC_EXIT(pconstname);
return;
} 
#undef NL

A68_VOID  DNFBELA_biddec2(void)
{ 
A68_52  GNFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  HNFBELA;  /* YIELD */
A68_85  INFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(biddec2);
HNFBELA = FNFBELA ;
FDEBELA_print(A_HVEC(INFBELA,A_UNITE(GNFBELA,mode7,7,HNFBELA),A68_52 ));
A_PROC_EXIT(biddec2);
return;
} 
#undef NL

A68_VOID  JNFBELA_pidalts2(void)
{ 
A68_52  MNFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  NNFBELA;  /* YIELD */
A68_85  ONFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(pidalts2);
NNFBELA = LNFBELA ;
FDEBELA_print(A_HVEC(ONFBELA,A_UNITE(MNFBELA,mode7,7,NNFBELA),A68_52 ));
A_PROC_EXIT(pidalts2);
return;
} 
#undef NL

A68_VOID  PNFBELA_prange2(void)
{ 
A68_52  SNFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  TNFBELA;  /* YIELD */
A68_85  UNFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(prange2);
TNFBELA = RNFBELA ;
FDEBELA_print(A_HVEC(UNFBELA,A_UNITE(SNFBELA,mode7,7,TNFBELA),A68_52 ));
A_PROC_EXIT(prange2);
return;
} 
#undef NL

A68_VOID  VNFBELA_idelay2(void)
{ 
A68_52  YNFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  ZNFBELA;  /* YIELD */
A68_85  AOFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(idelay2);
ZNFBELA = XNFBELA ;
FDEBELA_print(A_HVEC(AOFBELA,A_UNITE(YNFBELA,mode7,7,ZNFBELA),A68_52 ));
A_PROC_EXIT(idelay2);
return;
} 
#undef NL

A68_VOID  BOFBELA_adelay2(void)
{ 
A68_52  EOFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  FOFBELA;  /* YIELD */
A68_85  GOFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(adelay2);
FOFBELA = DOFBELA ;
FDEBELA_print(A_HVEC(GOFBELA,A_UNITE(EOFBELA,mode7,7,FOFBELA),A68_52 ));
A_PROC_EXIT(adelay2);
return;
} 
#undef NL

A68_VOID  HOFBELA_pt(void)
{ 
A68_52  KOFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  LOFBELA;  /* YIELD */
A68_85  MOFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(pt);
LOFBELA = JOFBELA ;
FDEBELA_print(A_HVEC(MOFBELA,A_UNITE(KOFBELA,mode7,7,LOFBELA),A68_52 ));
A_PROC_EXIT(pt);
return;
} 
#undef NL

A68_VOID  NOFBELA_ptend(void)
{ 
A68_52  QOFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  ROFBELA;  /* YIELD */
A68_85  SOFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(ptend);
ROFBELA = POFBELA ;
FDEBELA_print(A_HVEC(SOFBELA,A_UNITE(QOFBELA,mode7,7,ROFBELA),A68_52 ));
A_PROC_EXIT(ptend);
return;
} 
#undef NL

A68_VOID  TOFBELA_ptflt(void)
{ 
A68_52  WOFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  XOFBELA;  /* YIELD */
A68_85  YOFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(ptflt);
XOFBELA = VOFBELA ;
FDEBELA_print(A_HVEC(YOFBELA,A_UNITE(WOFBELA,mode7,7,XOFBELA),A68_52 ));
A_PROC_EXIT(ptflt);
return;
} 
#undef NL

A68_VOID  ZOFBELA_ptfltend(void)
{ 
A68_52  CPFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  DPFBELA;  /* YIELD */
A68_85  EPFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(ptfltend);
DPFBELA = BPFBELA ;
FDEBELA_print(A_HVEC(EPFBELA,A_UNITE(CPFBELA,mode7,7,DPFBELA),A68_52 ));
A_PROC_EXIT(ptfltend);
return;
} 
#undef NL

A68_VOID  FPFBELA_bvvarmult(void)
{ 
A68_52  IPFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  JPFBELA;  /* YIELD */
A68_85  KPFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(bvvarmult);
JPFBELA = HPFBELA ;
FDEBELA_print(A_HVEC(KPFBELA,A_UNITE(IPFBELA,mode7,7,JPFBELA),A68_52 ));
A_PROC_EXIT(bvvarmult);
return;
} 
#undef NL

A68_VOID  LPFBELA_bjoinsbjoin(void)
{ 
A68_52  OPFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  PPFBELA;  /* YIELD */
A68_85  QPFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(bjoinsbjoin);
PPFBELA = NPFBELA ;
FDEBELA_print(A_HVEC(QPFBELA,A_UNITE(OPFBELA,mode7,7,PPFBELA),A68_52 ));
A_PROC_EXIT(bjoinsbjoin);
return;
} 
#undef NL

A68_VOID  RPFBELA_bvvarmultend(void)
{ 
A68_52  UPFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  VPFBELA;  /* YIELD */
A68_85  WPFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(bvvarmultend);
VPFBELA = TPFBELA ;
FDEBELA_print(A_HVEC(WPFBELA,A_UNITE(UPFBELA,mode7,7,VPFBELA),A68_52 ));
A_PROC_EXIT(bvvarmultend);
return;
} 
#undef NL

A68_VOID  XPFBELA_str(void)
{ 
A68_52  AQFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  BQFBELA;  /* YIELD */
A68_85  CQFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(str);
BQFBELA = ZPFBELA ;
FDEBELA_print(A_HVEC(CQFBELA,A_UNITE(AQFBELA,mode7,7,BQFBELA),A68_52 ));
A_PROC_EXIT(str);
return;
} 
#undef NL

A68_VOID  DQFBELA_kilend(void)
{ 
A68_322  EQFBELA;  /* collateral clause result */
A68_52  HQFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  IQFBELA;  /* YIELD */
A68_52  JQFBELA;  /* OPERATORS - mode -> union mode */
A68_56  KQFBELA;  /* procedure value */
A68_85  LQFBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(kilend);
IQFBELA = GQFBELA ;
EQFBELA.data[0] = A_UNITE(HQFBELA,mode7,7,IQFBELA);
KQFBELA.fn.fn_global = LRAAOSL_newline;
KQFBELA.nonlocals = A68_NIL;
EQFBELA.data[1] = A_UNITE(JQFBELA,mode12,12,KQFBELA);
FDEBELA_print(A_HISVEC(LQFBELA,EQFBELA,2,A68_52 ));
A_PROC_EXIT(kilend);
return;
} 
#undef NL

A68_VOID  MQFBELA_ktype(void)
{ 
A68_52  PQFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  QQFBELA;  /* YIELD */
A68_85  RQFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(ktype);
QQFBELA = OQFBELA ;
FDEBELA_print(A_HVEC(RQFBELA,A_UNITE(PQFBELA,mode7,7,QQFBELA),A68_52 ));
A_PROC_EXIT(ktype);
return;
} 
#undef NL

A68_VOID  SQFBELA_kint(void)
{ 
A68_52  VQFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  WQFBELA;  /* YIELD */
A68_85  XQFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(kint);
WQFBELA = UQFBELA ;
FDEBELA_print(A_HVEC(XQFBELA,A_UNITE(VQFBELA,mode7,7,WQFBELA),A68_52 ));
A_PROC_EXIT(kint);
return;
} 
#undef NL

A68_VOID  YQFBELA_kint2(void)
{ 
A_PROC_ENTRY(kint2);
/*SKIP*/;
A_PROC_EXIT(kint2);
return;
} 
#undef NL

A68_VOID  ZQFBELA_kconst(void)
{ 
A68_52  CRFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  DRFBELA;  /* YIELD */
A68_85  ERFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(kconst);
DRFBELA = BRFBELA ;
FDEBELA_print(A_HVEC(ERFBELA,A_UNITE(CRFBELA,mode7,7,DRFBELA),A68_52 ));
A_PROC_EXIT(kconst);
return;
} 
#undef NL

A68_VOID  FRFBELA_kfn(void)
{ 
A68_322  GRFBELA;  /* collateral clause result */
A68_52  HRFBELA;  /* OPERATORS - mode -> union mode */
A68_56  IRFBELA;  /* procedure value */
A68_52  LRFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  MRFBELA;  /* YIELD */
A68_85  NRFBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(kfn);
IRFBELA.fn.fn_global = LRAAOSL_newline;
IRFBELA.nonlocals = A68_NIL;
GRFBELA.data[0] = A_UNITE(HRFBELA,mode12,12,IRFBELA);
MRFBELA = KRFBELA ;
GRFBELA.data[1] = A_UNITE(LRFBELA,mode7,7,MRFBELA);
FDEBELA_print(A_HISVEC(NRFBELA,GRFBELA,2,A68_52 ));
A_PROC_EXIT(kfn);
return;
} 
#undef NL

A68_VOID  ORFBELA_kend(void)
{ 
A68_52  RRFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  SRFBELA;  /* YIELD */
A68_85  TRFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(kend);
SRFBELA = QRFBELA ;
FDEBELA_print(A_HVEC(TRFBELA,A_UNITE(RRFBELA,mode7,7,SRFBELA),A68_52 ));
A_PROC_EXIT(kend);
return;
} 
#undef NL

A68_VOID  URFBELA_fn(void)
{ 
A68_322  VRFBELA;  /* collateral clause result */
A68_52  WRFBELA;  /* OPERATORS - mode -> union mode */
A68_56  XRFBELA;  /* procedure value */
A68_52  ASFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  BSFBELA;  /* YIELD */
A68_85  CSFBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(fn);
XRFBELA.fn.fn_global = LRAAOSL_newline;
XRFBELA.nonlocals = A68_NIL;
VRFBELA.data[0] = A_UNITE(WRFBELA,mode12,12,XRFBELA);
BSFBELA = ZRFBELA ;
VRFBELA.data[1] = A_UNITE(ASFBELA,mode7,7,BSFBELA);
FDEBELA_print(A_HISVEC(CSFBELA,VRFBELA,2,A68_52 ));
A_PROC_EXIT(fn);
return;
} 
#undef NL

A68_VOID  DSFBELA_fncall(void)
{ 
A68_BOOL  ESFBELA;  /* optbool result */
A68_322  FSFBELA;  /* collateral clause result */
A68_52  ISFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  JSFBELA;  /* YIELD */
A68_52  KSFBELA;  /* OPERATORS - mode -> union mode */
A68_56  LSFBELA;  /* procedure value */
A68_85  MSFBELA;  /* OPERATORS - istruct -> vector */
A68_BOOL  NSFBELA;  /* optbool result */
A_PROC_ENTRY(fncall);
{ 
if ( (YCEBELA_ptrcount==XCEBELA_ptrs.upb) )
{ 
DDEBELA_exit = A68_TRUE;
} 
 /* line 291: */
YCEBELA_ptrcount+=1;
 /* line 292: */
for ( ;; )
{ 
ESFBELA = !DDEBELA_exit;
if ( ESFBELA )
{ /* line 293: */
ESFBELA = UXIAELA_isnilptr(TYJAELA_discfile, (*(&A_VINDEX(XCEBELA_ptrs,YCEBELA_ptrcount))));
}
if ( !(ESFBELA) ) break;
JSFBELA = HSFBELA ;
FSFBELA.data[0] = A_UNITE(ISFBELA,mode7,7,JSFBELA);
LSFBELA.fn.fn_global = LRAAOSL_newline;
LSFBELA.nonlocals = A68_NIL;
FSFBELA.data[1] = A_UNITE(KSFBELA,mode12,12,LSFBELA);
FDEBELA_print(A_HISVEC(MSFBELA,FSFBELA,2,A68_52 ));
 /* line 294: */
YCEBELA_ptrcount+=1;
 /* line 295: */
if ( (YCEBELA_ptrcount>XCEBELA_ptrs.upb) )
{ 
 /* line 296: */
DDEBELA_exit = A68_TRUE;
} 
}
 /* line 297: */
 /* line 298: */
NSFBELA = (YCEBELA_ptrcount<=XCEBELA_ptrs.upb);
if ( NSFBELA )
{NSFBELA = !DDEBELA_exit;
}
if ( NSFBELA )
{ 
 /* line 299: */
HEEBELA_buffer = WYIAELA_readbuffer(TYJAELA_discfile, (*(&A_VINDEX(XCEBELA_ptrs,YCEBELA_ptrcount))));
} 
else
{ 
 /* line 300: */
 /* line 301: */
DDEBELA_exit = A68_TRUE;
} 
} 
A_PROC_EXIT(fncall);
return;
} 
#undef NL

A68_VOID  OSFBELA_start(void)
{ 
A_PROC_ENTRY(start);
/*SKIP*/;
A_PROC_EXIT(start);
return;
} 
#undef NL

A68_VOID  PSFBELA_keep(void)
{ 
A_PROC_ENTRY(keep);
/*SKIP*/;
A_PROC_EXIT(keep);
return;
} 
#undef NL

A68_VOID  QSFBELA_endofkeep(void)
{ 
A68_328  RSFBELA;  /* collateral clause result */
A68_52  SSFBELA;  /* OPERATORS - mode -> union mode */
A68_56  TSFBELA;  /* procedure value */
A68_52  WSFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  XSFBELA;  /* YIELD */
A68_52  YSFBELA;  /* OPERATORS - mode -> union mode */
A68_56  ZSFBELA;  /* procedure value */
A68_85  ATFBELA;  /* OPERATORS - istruct -> vector */
A68_BOOL  BTFBELA;  /* optbool result */
A68_322  CTFBELA;  /* collateral clause result */
A68_52  FTFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  GTFBELA;  /* YIELD */
A68_52  HTFBELA;  /* OPERATORS - mode -> union mode */
A68_56  ITFBELA;  /* procedure value */
A68_85  JTFBELA;  /* OPERATORS - istruct -> vector */
A68_BOOL  KTFBELA;  /* optbool result */
A_PROC_ENTRY(endofkeep);
{ 
TSFBELA.fn.fn_global = LRAAOSL_newline;
TSFBELA.nonlocals = A68_NIL;
RSFBELA.data[0] = A_UNITE(SSFBELA,mode12,12,TSFBELA);
XSFBELA = VSFBELA ;
RSFBELA.data[1] = A_UNITE(WSFBELA,mode7,7,XSFBELA);
ZSFBELA.fn.fn_global = LRAAOSL_newline;
ZSFBELA.nonlocals = A68_NIL;
RSFBELA.data[2] = A_UNITE(YSFBELA,mode12,12,ZSFBELA);
FDEBELA_print(A_HISVEC(ATFBELA,RSFBELA,3,A68_52 ));
 /* line 306: */
for ( ;; )
{ 
 /* line 307: */
BTFBELA = (YCEBELA_ptrcount<=XCEBELA_ptrs.upb);
if ( BTFBELA )
{BTFBELA = !DDEBELA_exit;
}
if ( BTFBELA )
{ /* line 308: */
BTFBELA = UXIAELA_isnilptr(TYJAELA_discfile, (*(&A_VINDEX(XCEBELA_ptrs,YCEBELA_ptrcount))));
}
if ( !(BTFBELA) ) break;
GTFBELA = ETFBELA ;
CTFBELA.data[0] = A_UNITE(FTFBELA,mode7,7,GTFBELA);
ITFBELA.fn.fn_global = LRAAOSL_newline;
ITFBELA.nonlocals = A68_NIL;
CTFBELA.data[1] = A_UNITE(HTFBELA,mode12,12,ITFBELA);
FDEBELA_print(A_HISVEC(JTFBELA,CTFBELA,2,A68_52 ));
YCEBELA_ptrcount+=1;
 /* line 309: */
if ( (YCEBELA_ptrcount>XCEBELA_ptrs.upb) )
{ 
 /* line 310: */
DDEBELA_exit = A68_TRUE;
} 
}
 /* line 311: */
 /* line 312: */
KTFBELA = (YCEBELA_ptrcount<=XCEBELA_ptrs.upb);
if ( KTFBELA )
{KTFBELA = !DDEBELA_exit;
}
if ( KTFBELA )
{ 
 /* line 313: */
HEEBELA_buffer = WYIAELA_readbuffer(TYJAELA_discfile, (*(&A_VINDEX(XCEBELA_ptrs,YCEBELA_ptrcount))));
} 
else
{ 
 /* line 314: */
 /* line 315: */
DDEBELA_exit = A68_TRUE;
} 
} 
A_PROC_EXIT(endofkeep);
return;
} 
#undef NL

A68_VOID  LTFBELA_vstring(void)
{ 
A68_52  OTFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  PTFBELA;  /* YIELD */
A68_85  QTFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(vstring);
PTFBELA = NTFBELA ;
FDEBELA_print(A_HVEC(QTFBELA,A_UNITE(OTFBELA,mode7,7,PTFBELA),A68_52 ));
A_PROC_EXIT(vstring);
return;
} 
#undef NL

A68_VOID  RTFBELA_vprimch(void)
{ 
A68_328  STFBELA;  /* collateral clause result */
A68_52  VTFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  WTFBELA;  /* YIELD */
A68_52  XTFBELA;  /* OPERATORS - mode -> union mode */
A68_52  YTFBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  ZTFBELA;  /* YIELD */
A68_85  AUFBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(vprimch);
WTFBELA = UTFBELA ;
STFBELA.data[0] = A_UNITE(VTFBELA,mode7,7,WTFBELA);
STFBELA.data[1] = A_UNITE(XTFBELA,mode1,1,ADEBELA_integer1);
ZTFBELA = ' ' ;
STFBELA.data[2] = A_UNITE(YTFBELA,mode6,6,ZTFBELA);
FDEBELA_print(A_HISVEC(AUFBELA,STFBELA,3,A68_52 ));
A_PROC_EXIT(vprimch);
return;
} 
#undef NL

A68_VOID  BUFBELA_vprimst(void)
{ 
A68_328  CUFBELA;  /* collateral clause result */
A68_52  FUFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  GUFBELA;  /* YIELD */
A68_52  HUFBELA;  /* OPERATORS - mode -> union mode */
A68_52  IUFBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  JUFBELA;  /* YIELD */
A68_85  KUFBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(vprimst);
GUFBELA = EUFBELA ;
CUFBELA.data[0] = A_UNITE(FUFBELA,mode7,7,GUFBELA);
CUFBELA.data[1] = A_UNITE(HUFBELA,mode1,1,ADEBELA_integer1);
JUFBELA = ' ' ;
CUFBELA.data[2] = A_UNITE(IUFBELA,mode6,6,JUFBELA);
FDEBELA_print(A_HISVEC(KUFBELA,CUFBELA,3,A68_52 ));
A_PROC_EXIT(vprimst);
return;
} 
#undef NL

A68_VOID  LUFBELA_cstring(void)
{ 
A68_52  OUFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  PUFBELA;  /* YIELD */
A68_85  QUFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(cstring);
PUFBELA = NUFBELA ;
FDEBELA_print(A_HVEC(QUFBELA,A_UNITE(OUFBELA,mode7,7,PUFBELA),A68_52 ));
A_PROC_EXIT(cstring);
return;
} 
#undef NL

A68_VOID  RUFBELA_cprimch(void)
{ 
A68_328  SUFBELA;  /* collateral clause result */
A68_52  VUFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  WUFBELA;  /* YIELD */
A68_52  XUFBELA;  /* OPERATORS - mode -> union mode */
A68_52  YUFBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  ZUFBELA;  /* YIELD */
A68_85  AVFBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(cprimch);
WUFBELA = UUFBELA ;
SUFBELA.data[0] = A_UNITE(VUFBELA,mode7,7,WUFBELA);
SUFBELA.data[1] = A_UNITE(XUFBELA,mode1,1,ADEBELA_integer1);
ZUFBELA = ' ' ;
SUFBELA.data[2] = A_UNITE(YUFBELA,mode6,6,ZUFBELA);
FDEBELA_print(A_HISVEC(AVFBELA,SUFBELA,3,A68_52 ));
A_PROC_EXIT(cprimch);
return;
} 
#undef NL

A68_VOID  BVFBELA_cprimst(void)
{ 
A68_328  CVFBELA;  /* collateral clause result */
A68_52  FVFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  GVFBELA;  /* YIELD */
A68_52  HVFBELA;  /* OPERATORS - mode -> union mode */
A68_52  IVFBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  JVFBELA;  /* YIELD */
A68_85  KVFBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(cprimst);
GVFBELA = EVFBELA ;
CVFBELA.data[0] = A_UNITE(FVFBELA,mode7,7,GVFBELA);
CVFBELA.data[1] = A_UNITE(HVFBELA,mode1,1,ADEBELA_integer1);
JVFBELA = ' ' ;
CVFBELA.data[2] = A_UNITE(IVFBELA,mode6,6,JVFBELA);
FDEBELA_print(A_HISVEC(KVFBELA,CVFBELA,3,A68_52 ));
A_PROC_EXIT(cprimst);
return;
} 
#undef NL

A68_VOID  LVFBELA_cprimchr(void)
{ 
A68_328  MVFBELA;  /* collateral clause result */
A68_52  PVFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  QVFBELA;  /* YIELD */
A68_52  RVFBELA;  /* OPERATORS - mode -> union mode */
A68_52  SVFBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  TVFBELA;  /* YIELD */
A68_85  UVFBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(cprimchr);
QVFBELA = OVFBELA ;
MVFBELA.data[0] = A_UNITE(PVFBELA,mode7,7,QVFBELA);
MVFBELA.data[1] = A_UNITE(RVFBELA,mode1,1,ADEBELA_integer1);
TVFBELA = ' ' ;
MVFBELA.data[2] = A_UNITE(SVFBELA,mode6,6,TVFBELA);
FDEBELA_print(A_HISVEC(UVFBELA,MVFBELA,3,A68_52 ));
A_PROC_EXIT(cprimchr);
return;
} 
#undef NL

A68_VOID  VVFBELA_tstring(void)
{ 
A68_52  YVFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  ZVFBELA;  /* YIELD */
A68_85  AWFBELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(tstring);
ZVFBELA = XVFBELA ;
FDEBELA_print(A_HVEC(AWFBELA,A_UNITE(YVFBELA,mode7,7,ZVFBELA),A68_52 ));
A_PROC_EXIT(tstring);
return;
} 
#undef NL
 /* line 326: */

A68_VOID  FWFBELA_fnptilstart(A68_234 * Ct, A68_VC  Spec, A68_176  Dp, A68_97  Msg)
{ 
A68_334  HWFBELA_generator;   /* proc value of non-global proc */
A68_177  MWFBELA;  /* avoid structure result */
A68_INT  NWFBELA;  /* YIELD */
A68_176 * OWFBELA;  /* YIELD */
A68_31  QWFBELA_generator;   /* proc value of non-global proc */
A68_VC  VWFBELA;  /* avoid structure result */
A68_VC  WWFBELA_newspec;
A68_VC  XWFBELA;  /* OPERATORS - trim index */
A68_VC  YWFBELA;  /* YIELD */
A68_INT  ZWFBELA;  /* YIELD */
A68_CHAR * AXFBELA;  /* YIELD */
A68_87  BXFBELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(fnptilstart);
 /* line 327: */
 /* line 328: */
{ 
DDEBELA_exit = A68_FALSE;
 /* line 329: */
QJBBELA_save_library(Msg);
 /* line 330: */
 /* line 331: */
if ( !REKAELA_check_text(Ct, Msg) )
{ 
 /* line 332: */
DDEBELA_exit = A68_TRUE;
} 
else
{ 
A_CLOSURE( HWFBELA_generator, IWFBELA_generator, JWFBELA_generator );
A_CALLPROC(HWFBELA_generator,(A68_FALSE, &MWFBELA),(A68_FALSE, &MWFBELA,(HWFBELA_generator).nonlocals));
XCEBELA_ptrs = MWFBELA;
 /* line 333: */
NWFBELA = 1 ;
OWFBELA = (&A_VINDEX(XCEBELA_ptrs,NWFBELA)) ;
(*OWFBELA) = Dp;
 /* line 334: */
YCEBELA_ptrcount = 1;
 /* line 335: */
A_CLOSURE( QWFBELA_generator, RWFBELA_generator, SWFBELA_generator );
(( SWFBELA_generator * ) ( QWFBELA_generator.nonlocals )) -> Spec = Spec;
A_CALLPROC(QWFBELA_generator,(A68_FALSE, &VWFBELA),(A68_FALSE, &VWFBELA,(QWFBELA_generator).nonlocals));
WWFBELA_newspec = VWFBELA;
 /* line 336: */
YWFBELA = A_VTRIM(XWFBELA,(WWFBELA_newspec),A_VTSCRIPT(&(XWFBELA.upb),(WWFBELA_newspec).upb,1,Spec.upb)) ;
A_VASSIGN2(Spec,YWFBELA,A68_CHAR );
 /* line 337: */
ZWFBELA = WWFBELA_newspec.upb ;
AXFBELA = (&A_VINDEX(WWFBELA_newspec,ZWFBELA)) ;
(*AXFBELA) = (A68_CHAR)0;
 /* line 338: */
 /* line 340: */
 /* line 341: */
HEEBELA_buffer = IFJAELA_startwrite(TYJAELA_discfile, A_UNITE(BXFBELA,mode2,2,WWFBELA_newspec));
} 
} 
A_PROC_EXIT(fnptilstart);
return;
} 
#undef NL

A68_VOID  EXFBELA_lowptilstart(A68_234 * Ct, A68_97  Msg)
{ 
A68_322  FXFBELA;  /* collateral clause result */
A68_52  IXFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  JXFBELA;  /* YIELD */
A68_52  KXFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  LXFBELA;  /* YIELD */
A68_85  MXFBELA;  /* OPERATORS - istruct -> vector */
A68_336  NXFBELA;  /* collateral clause result */
A68_52  QXFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  RXFBELA;  /* YIELD */
A68_52  SXFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  TXFBELA;  /* YIELD */
A68_52  UXFBELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  VXFBELA;  /* YIELD */
A68_52  WXFBELA;  /* OPERATORS - mode -> union mode */
A68_56  XXFBELA;  /* procedure value */
A68_85  YXFBELA;  /* OPERATORS - istruct -> vector */
A68_334  AYFBELA_generator;   /* proc value of non-global proc */
A68_177  FYFBELA;  /* avoid structure result */
A68_INT  GYFBELA;  /* YIELD */
A68_INT  HYFBELA;  /* YIELD */
A_PROC_ENTRY(lowptilstart);
 /* line 344: */
 /* line 345: */
{ 
DDEBELA_exit = A68_FALSE;
 /* line 347: */
QJBBELA_save_library(Msg);
 /* line 348: */
 /* line 349: */
if ( !REKAELA_check_text(Ct, Msg) )
{ 
 /* line 350: */
DDEBELA_exit = A68_TRUE;
} 
else
{ 
JXFBELA = HXFBELA ;
FXFBELA.data[0] = A_UNITE(IXFBELA,mode7,7,JXFBELA);
LXFBELA = (*(&(Ct->Name))) ;
FXFBELA.data[1] = A_UNITE(KXFBELA,mode7,7,LXFBELA);
FDEBELA_print(A_HISVEC(MXFBELA,FXFBELA,2,A68_52 ));
 /* line 351: */
RXFBELA = PXFBELA ;
NXFBELA.data[0] = A_UNITE(QXFBELA,mode7,7,RXFBELA);
TXFBELA = (*(&(HXJAELA_library->Name))) ;
NXFBELA.data[1] = A_UNITE(SXFBELA,mode7,7,TXFBELA);
VXFBELA = '\"' ;
NXFBELA.data[2] = A_UNITE(UXFBELA,mode6,6,VXFBELA);
XXFBELA.fn.fn_global = LRAAOSL_newline;
XXFBELA.nonlocals = A68_NIL;
NXFBELA.data[3] = A_UNITE(WXFBELA,mode12,12,XXFBELA);
FDEBELA_print(A_HISVEC(YXFBELA,NXFBELA,4,A68_52 ));
 /* line 352: */
A_CLOSURE( AYFBELA_generator, BYFBELA_generator, CYFBELA_generator );
(( CYFBELA_generator * ) ( AYFBELA_generator.nonlocals )) -> Ct = Ct;
(( CYFBELA_generator * ) ( AYFBELA_generator.nonlocals )) -> Msg = Msg;
A_CALLPROC(AYFBELA_generator,(A68_FALSE, &FYFBELA),(A68_FALSE, &FYFBELA,(AYFBELA_generator).nonlocals));
XCEBELA_ptrs = FYFBELA;
 /* line 353: */
FFJAELA_myreaddiscptrs(TYJAELA_discfile, XCEBELA_ptrs, (*(&(Ct->Val))), Msg);
 /* line 354: */
GYFBELA = 3 ;
LEEBELA_displacements((*(&A_VINDEX(XCEBELA_ptrs,GYFBELA))), Msg);
 /* line 355: */
YCEBELA_ptrcount = 6;
 /* line 356: */
 /* line 357: */
 /* line 358: */
HYFBELA = 4 ;
HEEBELA_buffer = WYIAELA_readbuffer(TYJAELA_discfile, (*(&A_VINDEX(XCEBELA_ptrs,HYFBELA))));
} 
} 
A_PROC_EXIT(lowptilstart);
return;
} 
#undef NL

A68_VOID  KYFBELA_ptsize(A68_234 * Ct, A68_97  Msg)
{ 
A68_INT  LYFBELA_sz;
A68_INT  MYFBELA_s;
A68_INT  NYFBELA_specsize;
A68_235  OYFBELA;  /* avoid structure result */
A68_235  PYFBELA_decls;
A68_322  QYFBELA;  /* collateral clause result */
A68_52  TYFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  UYFBELA;  /* YIELD */
A68_52  VYFBELA;  /* OPERATORS - mode -> union mode */
A68_56  WYFBELA;  /* procedure value */
A68_85  XYFBELA;  /* OPERATORS - istruct -> vector */
A68_227 * YYFBELA_set;
A68_176 * ZYFBELA_body;
A68_229 * AZFBELA_decl;
A68_177  BZFBELA;  /* forall yield */
A68_INT  CZFBELA;  /* forall loop counter */
A68_INT  DZFBELA;  /* clause result */
A68_336  EZFBELA;  /* collateral clause result */
A68_52  FZFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  GZFBELA;  /* YIELD */
A68_52  JZFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  KZFBELA;  /* YIELD */
A68_52  LZFBELA;  /* OPERATORS - mode -> union mode */
A68_52  MZFBELA;  /* OPERATORS - mode -> union mode */
A68_56  NZFBELA;  /* procedure value */
A68_85  OZFBELA;  /* OPERATORS - istruct -> vector */
A68_339  PZFBELA;  /* collateral clause result */
A68_52  SZFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  TZFBELA;  /* YIELD */
A68_52  UZFBELA;  /* OPERATORS - mode -> union mode */
A68_52  XZFBELA;  /* OPERATORS - mode -> union mode */
A68_VC  YZFBELA;  /* YIELD */
A68_52  ZZFBELA;  /* OPERATORS - mode -> union mode */
A68_52  AAGBELA;  /* OPERATORS - mode -> union mode */
A68_56  BAGBELA;  /* procedure value */
A68_85  CAGBELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(ptsize);
 /* line 362: */
 /* line 363: */
{ 
 /* line 364: */
if ( REKAELA_check_text(Ct, Msg) )
{ 
LYFBELA_sz = 0;
MYFBELA_s = 0;
NYFBELA_specsize = 0;
 /* line 365: */
LEBBELA_get_decls( Ct, Msg, &OYFBELA );
PYFBELA_decls = OYFBELA;
 /* line 367: */
UYFBELA = SYFBELA ;
QYFBELA.data[0] = A_UNITE(TYFBELA,mode7,7,UYFBELA);
WYFBELA.fn.fn_global = LRAAOSL_newline;
WYFBELA.nonlocals = A68_NIL;
QYFBELA.data[1] = A_UNITE(VYFBELA,mode12,12,WYFBELA);
GFBAOSL_put(LEAAOST_out, A_HISVEC(XYFBELA,QYFBELA,2,A68_52 ));
 /* line 368: */
YYFBELA_set = TBWAELA_get_declattribute(Ct, (*JZJAELA_body_key), Msg);
 /* line 369: */
 /* line 370: */
BZFBELA = (*(&(YYFBELA_set->Data))) ;
CZFBELA = BZFBELA.upb -1;
if ( CZFBELA != PYFBELA_decls.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
ZYFBELA_body = BZFBELA.data;
AZFBELA_decl = PYFBELA_decls.data;
for (;CZFBELA-- >= 0;
(ZYFBELA_body++
,AZFBELA_decl++
) )
{
NYFBELA_specsize+=(*(&(AZFBELA_decl->Il))).upb;
 /* line 371: */
 /* line 372: */
 /* line 373: */
if ( UXIAELA_isnilptr(TYJAELA_discfile, (*ZYFBELA_body)) )
{ 
DZFBELA = 0;
} 
else
{ 
 /* line 374: */
DZFBELA = PEJAELA_nchars(TYJAELA_discfile, (*ZYFBELA_body), Msg);
} 
MYFBELA_s = DZFBELA;
 /* line 375: */
GZFBELA = (*(&(AZFBELA_decl->Name))) ;
EZFBELA.data[0] = A_UNITE(FZFBELA,mode7,7,GZFBELA);
KZFBELA = IZFBELA ;
EZFBELA.data[1] = A_UNITE(JZFBELA,mode7,7,KZFBELA);
EZFBELA.data[2] = A_UNITE(LZFBELA,mode1,1,MYFBELA_s);
NZFBELA.fn.fn_global = LRAAOSL_newline;
NZFBELA.nonlocals = A68_NIL;
EZFBELA.data[3] = A_UNITE(MZFBELA,mode12,12,NZFBELA);
GFBAOSL_put(LEAAOST_out, A_HISVEC(OZFBELA,EZFBELA,4,A68_52 ));
 /* line 376: */
 /* line 377: */
LYFBELA_sz+=MYFBELA_s;
}
 /* line 379: */
TZFBELA = RZFBELA ;
PZFBELA.data[0] = A_UNITE(SZFBELA,mode7,7,TZFBELA);
PZFBELA.data[1] = A_UNITE(UZFBELA,mode1,1,NYFBELA_specsize);
YZFBELA = WZFBELA ;
PZFBELA.data[2] = A_UNITE(XZFBELA,mode7,7,YZFBELA);
 /* line 380: */
PZFBELA.data[3] = A_UNITE(ZZFBELA,mode1,1,LYFBELA_sz);
BAGBELA.fn.fn_global = LRAAOSL_newline;
BAGBELA.nonlocals = A68_NIL;
PZFBELA.data[4] = A_UNITE(AAGBELA,mode12,12,BAGBELA);
 /* line 381: */
 /* line 382: */
 /* line 385: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(CAGBELA,PZFBELA,5,A68_52 ));
} 
} 
A_PROC_EXIT(ptsize);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 6: */
void SCEBELA(void)   /* initialise DECS lowptilproc */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/lowptilproc.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/sidanalyser.m","/u/model/ella/ostools/assoc/mfiles/ioprocs.m","./mfiles/attrdecls.m","./mfiles/libinterface.m","./mfiles/libmodes.m","./mfiles/databasebuffers.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
BAAAELA();   /* USE sidanalyser */
TIGAOST();   /* USE ioprocs */
DZVAELA();   /* USE attrdecls */
SOABELA();   /* USE libinterface */
FTJAELA();   /* USE libmodes */
NWIAELA();   /* USE databasebuffers */
PCAAOST();   /* USE osinterface */
JSCAOST();   /* USE basics */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ella/assoc/./a68files/lowptilproc.a68";
A_config.translation_time = "Tue Apr  4 10:40:41 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "RCEBELA (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:40:41 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS lowptilproc);
UEAALIB_a68config(LGAALIB_configinfo, WCEBELA);
 /* line 70: */
 /* line 71: */
YCEBELA_ptrcount = 0;
 /* line 73: */
 /* line 75: */
 /* line 76: */
 /* line 78: */
CDEBELA_monitor = A68_FALSE;
DDEBELA_exit = A68_FALSE;
 /* line 80: */
 /* line 82: */
 /* line 87: */
 /* line 93: */
 /* line 95: */
IEEBELA_t1 = 0;
 /* line 97: */
 /* line 112: */
 /* line 113: */
 /* line 114: */
 /* line 121: */
 /* line 124: */
 /* line 126: */
 /* line 128: */
 /* line 129: */
 /* line 131: */
 /* line 132: */
 /* line 133: */
 /* line 134: */
 /* line 135: */
 /* line 136: */
 /* line 137: */
 /* line 138: */
 /* line 139: */
 /* line 140: */
 /* line 141: */
 /* line 142: */
 /* line 143: */
 /* line 144: */
 /* line 145: */
 /* line 146: */
 /* line 147: */
 /* line 148: */
 /* line 149: */
 /* line 150: */
 /* line 151: */
 /* line 152: */
 /* line 153: */
 /* line 154: */
 /* line 155: */
 /* line 156: */
 /* line 157: */
 /* line 158: */
 /* line 159: */
 /* line 160: */
 /* line 161: */
 /* line 162: */
 /* line 163: */
 /* line 164: */
 /* line 165: */
 /* line 166: */
 /* line 167: */
 /* line 168: */
 /* line 169: */
 /* line 170: */
 /* line 171: */
 /* line 172: */
 /* line 173: */
 /* line 174: */
 /* line 175: */
 /* line 176: */
 /* line 177: */
 /* line 178: */
 /* line 179: */
 /* line 180: */
 /* line 181: */
 /* line 182: */
 /* line 183: */
 /* line 184: */
 /* line 185: */
 /* line 186: */
 /* line 187: */
 /* line 188: */
 /* line 189: */
 /* line 190: */
 /* line 191: */
 /* line 192: */
 /* line 193: */
 /* line 194: */
 /* line 195: */
 /* line 196: */
 /* line 197: */
 /* line 198: */
 /* line 199: */
 /* line 200: */
 /* line 201: */
 /* line 202: */
 /* line 203: */
 /* line 204: */
 /* line 205: */
 /* line 206: */
 /* line 207: */
 /* line 208: */
 /* line 209: */
 /* line 210: */
 /* line 211: */
 /* line 212: */
 /* line 213: */
 /* line 214: */
 /* line 215: */
 /* line 216: */
 /* line 217: */
 /* line 218: */
 /* line 219: */
 /* line 220: */
 /* line 221: */
 /* line 222: */
 /* line 223: */
 /* line 224: */
 /* line 225: */
 /* line 226: */
 /* line 227: */
 /* line 228: */
 /* line 229: */
 /* line 230: */
 /* line 231: */
 /* line 232: */
 /* line 233: */
 /* line 234: */
 /* line 235: */
 /* line 236: */
 /* line 237: */
 /* line 238: */
 /* line 239: */
 /* line 240: */
 /* line 241: */
 /* line 242: */
 /* line 243: */
 /* line 244: */
 /* line 245: */
 /* line 246: */
 /* line 247: */
 /* line 248: */
 /* line 249: */
 /* line 250: */
 /* line 251: */
 /* line 252: */
 /* line 253: */
 /* line 254: */
 /* line 255: */
 /* line 256: */
 /* line 257: */
 /* line 258: */
 /* line 259: */
 /* line 260: */
 /* line 261: */
 /* line 262: */
 /* line 263: */
 /* line 264: */
 /* line 265: */
 /* line 266: */
 /* line 267: */
 /* line 268: */
 /* line 269: */
 /* line 270: */
 /* line 271: */
 /* line 272: */
 /* line 273: */
 /* line 274: */
 /* line 275: */
 /* line 276: */
 /* line 277: */
 /* line 278: */
 /* line 279: */
 /* line 280: */
 /* line 281: */
 /* line 282: */
 /* line 283: */
 /* line 284: */
 /* line 285: */
 /* line 286: */
 /* line 287: */
 /* line 288: */
 /* line 289: */
 /* line 290: */
 /* line 302: */
 /* line 303: */
 /* line 304: */
 /* line 305: */
 /* line 316: */
 /* line 317: */
 /* line 318: */
 /* line 319: */
 /* line 320: */
 /* line 321: */
 /* line 322: */
 /* line 323: */
 /* line 325: */
 /* line 343: */
 /* line 361: */
 /* line 416: */
A_PROC_EXIT(DECS lowptilproc);
} 
#undef NL
/* end of translation of ./a68files/lowptilproc.a68 */
