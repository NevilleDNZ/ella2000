
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
/* UNAME:SEMASIM */
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
A_ISTRUCT(A68_CHAR ,16000000,A68t61);
typedef struct A68t61  A68_61 ;    /* STRUCT 16000000 CHAR */
A_ISTRUCT(struct A68t61 *,16000000,A68t62);
typedef struct A68t62  A68_62 ;    /* STRUCT 16000000 REF MODE61 */

A_PROCEDURE(A68_VOID ,A68t63,(struct A68t61 *,A68_VC *),(struct A68t61 *,A68_VC *,void *));
typedef struct A68t63  A68_63 ;    /* PROC(REF MODE61) REF MODE26 */

A_PROCEDURE(A68_CHAR *,A68t64,(A68_VC ),(A68_VC ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(MODE26) REF CHAR */

A_PROCEDURE(A68_INT *,A68t65,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t65  A68_65 ;    /* PROC(MODE36) REF INT */

A_PROCEDURE(A68_CHAR *,A68t66,(struct A68t61 *),(struct A68t61 *,void *));
typedef struct A68t66  A68_66 ;    /* PROC(REF MODE61) REF CHAR */

A_PROCEDURE(struct A68t61 *,A68t67,(A68_CHAR *),(A68_CHAR *,void *));
typedef struct A68t67  A68_67 ;    /* PROC(REF CHAR) REF MODE61 */

A_PROCEDURE(A68_VOID ,A68t68,(void),(void *));
typedef struct A68t68  A68_68 ;    /* PROC VOID */
struct A68t69{
A68_BITS * Cp;
struct A68t61 * Env;
};
typedef struct A68t69  A68_69 ;    /* STRUCT(REF BITS,REF MODE61)  */

A_PROCEDURE(struct A68t69 *,A68t70,(struct A68t68 *),(struct A68t68 *,void *));
typedef struct A68t70  A68_70 ;    /* PROC(REF MODE68) REF MODE69 */

A_PROCEDURE(A68_VOID ,A68t71,(struct A68t68 ,struct A68t69 *),(struct A68t68 ,struct A68t69 *,void *));
typedef struct A68t71  A68_71 ;    /* PROC(MODE68) MODE69 */

A_PROCEDURE(A68_VOID ,A68t72,(A68_INT ),(A68_INT ,void *));
typedef struct A68t72  A68_72 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t73,(struct A68t72 ,struct A68t69 *),(struct A68t72 ,struct A68t69 *,void *));
typedef struct A68t73  A68_73 ;    /* PROC(MODE72) MODE69 */

A_PROCEDURE(A68_VOID ,A68t74,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t74  A68_74 ;    /* PROC(MODE26) MODE26 */
struct A68t75{
A68_INT  Ws;
A_PAD_INT(PAD_3)
A68_BOOL  Up;
A_PAD_BOOL(PAD_4)
A68_INT  Sizeunit;
A_PAD_INT(PAD_5)
struct A68t36  Al;
};
typedef struct A68t75  A68_75 ;    /* STRUCT(INT,BOOL,INT,REF MODE36)  */

A_PROCEDURE(A68_VOID ,A68t77,(A68_VC ,struct A68t60 ),(A68_VC ,struct A68t60 ,void *));
typedef struct A68t77  A68_77 ;    /* PROC(REF MODE26,MODE60) VOID */
struct A68t76{
struct A68t77  Ferryout;
struct A68t60  Flt;
};
typedef struct A68t76  A68_76 ;    /* STRUCT(MODE77,MODE60)  */

A_PROCEDURE(A68_VOID ,A68t78,(struct A68t77 ,struct A68t60 ,struct A68t76 *),(struct A68t77 ,struct A68t60 ,struct A68t76 *,void *));
typedef struct A68t78  A68_78 ;    /* PROC(MODE77,MODE60) MODE76 */
struct A68t79{
struct A68t77  Ferryin;
struct A68t60  Flt;
};
typedef struct A68t79  A68_79 ;    /* STRUCT(MODE77,MODE60)  */

A_PROCEDURE(A68_VOID ,A68t80,(struct A68t77 ,struct A68t60 ,struct A68t79 *),(struct A68t77 ,struct A68t60 ,struct A68t79 *,void *));
typedef struct A68t80  A68_80 ;    /* PROC(MODE77,MODE60) MODE79 */

A_PROCEDURE(A68_VOID ,A68t81,(A68_BOOL ,A68_VC ),(A68_BOOL ,A68_VC ,void *));
typedef struct A68t81  A68_81 ;    /* PROC(BOOL,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t82,(A68_BOOL ,struct A68t76 ),(A68_BOOL ,struct A68t76 ,void *));
typedef struct A68t82  A68_82 ;    /* PROC(BOOL,MODE76) VOID */

A_PROCEDURE(A68_VOID ,A68t83,(A68_BOOL *,struct A68t79 ),(A68_BOOL *,struct A68t79 ,void *));
typedef struct A68t83  A68_83 ;    /* PROC(REF BOOL,MODE79) VOID */

A_PROCEDURE(A68_VOID ,A68t84,(A68_INT ,struct A68t76 ),(A68_INT ,struct A68t76 ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(INT,MODE76) VOID */

A_PROCEDURE(A68_VOID ,A68t85,(A68_INT *,struct A68t79 ),(A68_INT *,struct A68t79 ,void *));
typedef struct A68t85  A68_85 ;    /* PROC(REF INT,MODE79) VOID */

A_PROCEDURE(A68_VOID ,A68t86,(A68_VC ,struct A68t76 ),(A68_VC ,struct A68t76 ,void *));
typedef struct A68t86  A68_86 ;    /* PROC(REF MODE26,MODE76) VOID */

A_PROCEDURE(A68_VOID ,A68t87,(A68_VC *,struct A68t79 ),(A68_VC *,struct A68t79 ,void *));
typedef struct A68t87  A68_87 ;    /* PROC(REF REF MODE26,MODE79) VOID */

A_PROCEDURE(A68_VOID ,A68t88,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t88  A68_88 ;    /* PROC(REF MODE26) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t89,(A68_VC ),(A68_VC ,void *));
typedef struct A68t89  A68_89 ;    /* PROC(REF MODE26) INT */
struct A68t90{
A68_INT  Machine_offset;
A_PAD_INT(PAD_6)
struct A68t90 * Rest;
};
typedef struct A68t90  A68_90 ;    /* STRUCT(INT,REF MODE90)  */

A_PROCEDURE(A68_VOID ,A68t91,(struct A68t90 *,A68_VC ),(struct A68t90 *,A68_VC ,void *));
typedef struct A68t91  A68_91 ;    /* PROC(REF MODE90,MODE26) VOID */

A_PROCEDURE(A68_INT ,A68t92,(struct A68t90 **),(struct A68t90 **,void *));
typedef struct A68t92  A68_92 ;    /* PROC(REF REF MODE90) INT */

A_PROCEDURE(A68_VOID ,A68t93,(struct A68t90 **,A68_INT ),(struct A68t90 **,A68_INT ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(REF REF MODE90,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t94,(struct A68t90 *),(struct A68t90 *,void *));
typedef struct A68t94  A68_94 ;    /* PROC(REF MODE90) BOOL */
struct A68t95{
A68_VC  Mem;
};
typedef struct A68t95  A68_95 ;    /* STRUCT(REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t96,(struct A68t95 *),(struct A68t95 *,void *));
typedef struct A68t96  A68_96 ;    /* PROC MODE95 */

A_PROCEDURE(A68_VOID ,A68t97,(struct A68t95 *,A68_INT ),(struct A68t95 *,A68_INT ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(REF MODE95,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t98,(struct A68t95 *),(struct A68t95 *,void *));
typedef struct A68t98  A68_98 ;    /* PROC(REF MODE95) VOID */

A_PROCEDURE(A68_VOID ,A68t99,(struct A68t95 ,A68_VC ),(struct A68t95 ,A68_VC ,void *));
typedef struct A68t99  A68_99 ;    /* PROC(MODE95,MODE26) VOID */

A_PROCEDURE(A68_INT ,A68t100,(struct A68t95 *),(struct A68t95 *,void *));
typedef struct A68t100  A68_100 ;    /* PROC(REF MODE95) INT */

A_PROCEDURE(A68_VOID ,A68t101,(struct A68t95 *,struct A68t76 ),(struct A68t95 *,struct A68t76 ,void *));
typedef struct A68t101  A68_101 ;    /* PROC(REF MODE95,MODE76) VOID */

A_PROCEDURE(A68_VOID ,A68t102,(struct A68t95 *,struct A68t79 ),(struct A68t95 *,struct A68t79 ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(REF MODE95,MODE79) VOID */
struct A68t103{
A68_INT  Off;
A_PAD_INT(PAD_7)
A68_INT  Len;
A_PAD_INT(PAD_8)
};
typedef struct A68t103  A68_103 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t104,(A68_INT ,A68_INT ,struct A68t103 *),(A68_INT ,A68_INT ,struct A68t103 *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(INT,INT) MODE103 */

A_PROCEDURE(A68_VOID ,A68t105,(struct A68t95 *,struct A68t103 ,A68_VC *),(struct A68t95 *,struct A68t103 ,A68_VC *,void *));
typedef struct A68t105  A68_105 ;    /* PROC(REF MODE95,MODE103) REF MODE26 */
struct A68t106{
A68_VC  W;
A68_INT  O;
A_PAD_INT(PAD_9)
};
typedef struct A68t106  A68_106 ;    /* STRUCT(REF MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t107,(A68_VC ,A68_INT ,struct A68t106 *),(A68_VC ,A68_INT ,struct A68t106 *,void *));
typedef struct A68t107  A68_107 ;    /* PROC(REF MODE26,INT) MODE106 */

A_PROCEDURE(A68_VOID ,A68t108,(struct A68t95 *,struct A68t106 ),(struct A68t95 *,struct A68t106 ,void *));
typedef struct A68t108  A68_108 ;    /* PROC(REF MODE95,MODE106) VOID */
struct A68t109{
A68_INT  Lab;
A_PAD_INT(PAD_10)
A68_VC  Tag;
};
typedef struct A68t109  A68_109 ;    /* STRUCT(INT,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t110,(A68_VC ,struct A68t109 *),(A68_VC ,struct A68t109 *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(MODE26) MODE109 */

A_PROCEDURE(A68_VOID ,A68t111,(struct A68t109 ,A68_VC ),(struct A68t109 ,A68_VC ,void *));
typedef struct A68t111  A68_111 ;    /* PROC(MODE109,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t112,(struct A68t109 *,struct A68t76 ),(struct A68t109 *,struct A68t76 ,void *));
typedef struct A68t112  A68_112 ;    /* PROC(REF MODE109,MODE76) VOID */

A_PROCEDURE(A68_VOID ,A68t113,(struct A68t109 *,struct A68t79 ),(struct A68t109 *,struct A68t79 ,void *));
typedef struct A68t113  A68_113 ;    /* PROC(REF MODE109,MODE79) VOID */

A_PROCEDURE(A68_BOOL ,A68t114,(struct A68t109 *,struct A68t109 ),(struct A68t109 *,struct A68t109 ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(REF MODE109,MODE109) BOOL */
struct A68t115 { A68_INT mode; union {
A68_INT  mode1;
struct A68t109  mode2;
} data; };
typedef struct A68t115  A68_115 ;    /* UNION(INT,MODE109,VOID)  */

A_PROCEDURE(A68_VOID ,A68t116,(struct A68t115 ,A68_VC ),(struct A68t115 ,A68_VC ,void *));
typedef struct A68t116  A68_116 ;    /* PROC(MODE115,MODE26) VOID */
struct A68t117{
struct A68t109  Label;
A68_INT  Machine_offset;
A_PAD_INT(PAD_11)
};
typedef struct A68t117  A68_117 ;    /* STRUCT(MODE109,INT)  */

A_PROCEDURE(A68_VOID ,A68t118,(struct A68t109 ,A68_INT ,struct A68t117 *),(struct A68t109 ,A68_INT ,struct A68t117 *,void *));
typedef struct A68t118  A68_118 ;    /* PROC(MODE109,INT) MODE117 */

A_PROCEDURE(A68_VOID ,A68t119,(struct A68t117 ,A68_VC ),(struct A68t117 ,A68_VC ,void *));
typedef struct A68t119  A68_119 ;    /* PROC(MODE117,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t120,(struct A68t117 *,struct A68t76 ),(struct A68t117 *,struct A68t76 ,void *));
typedef struct A68t120  A68_120 ;    /* PROC(REF MODE117,MODE76) VOID */

A_PROCEDURE(A68_VOID ,A68t121,(struct A68t117 *,struct A68t79 ),(struct A68t117 *,struct A68t79 ,void *));
typedef struct A68t121  A68_121 ;    /* PROC(REF MODE117,MODE79) VOID */
struct A68t122{
struct A68t117  Labeled_offset;
struct A68t122 * Rest;
};
typedef struct A68t122  A68_122 ;    /* STRUCT(MODE117,REF MODE122)  */

A_PROCEDURE(A68_VOID ,A68t123,(struct A68t122 *,A68_VC ),(struct A68t122 *,A68_VC ,void *));
typedef struct A68t123  A68_123 ;    /* PROC(REF MODE122,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t124,(struct A68t122 *,struct A68t76 ),(struct A68t122 *,struct A68t76 ,void *));
typedef struct A68t124  A68_124 ;    /* PROC(REF MODE122,MODE76) VOID */

A_PROCEDURE(A68_VOID ,A68t125,(struct A68t122 **,struct A68t79 ),(struct A68t122 **,struct A68t79 ,void *));
typedef struct A68t125  A68_125 ;    /* PROC(REF REF MODE122,MODE79) VOID */

A_PROCEDURE(A68_INT ,A68t126,(struct A68t122 *,struct A68t109 ),(struct A68t122 *,struct A68t109 ,void *));
typedef struct A68t126  A68_126 ;    /* PROC(REF MODE122,MODE109) INT */

A_PROCEDURE(A68_VOID ,A68t127,(struct A68t122 **,struct A68t117 ),(struct A68t122 **,struct A68t117 ,void *));
typedef struct A68t127  A68_127 ;    /* PROC(REF REF MODE122,MODE117) VOID */

A_PROCEDURE(A68_VOID ,A68t128,(struct A68t122 **),(struct A68t122 **,void *));
typedef struct A68t128  A68_128 ;    /* PROC(REF REF MODE122) VOID */

A_PROCEDURE(A68_BOOL ,A68t129,(struct A68t122 *),(struct A68t122 *,void *));
typedef struct A68t129  A68_129 ;    /* PROC(REF MODE122) BOOL */
struct A68t131{
A68_INT  Location;
A_PAD_INT(PAD_12)
A68_INT  Size;
A_PAD_INT(PAD_13)
A68_BOOL  Canoptimise;
A_PAD_BOOL(PAD_14)
};
typedef struct A68t131  A68_131 ;    /* STRUCT(INT,INT,BOOL)  */
struct A68t130{
struct A68t131  Machine_label;
struct A68t130 * Rest;
};
typedef struct A68t130  A68_130 ;    /* STRUCT(MODE131,REF MODE130)  */

A_PROCEDURE(A68_VOID ,A68t132,(struct A68t130 *,A68_VC ),(struct A68t130 *,A68_VC ,void *));
typedef struct A68t132  A68_132 ;    /* PROC(REF MODE130,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t133,(struct A68t130 **,struct A68t131 *),(struct A68t130 **,struct A68t131 *,void *));
typedef struct A68t133  A68_133 ;    /* PROC(REF REF MODE130) MODE131 */

A_PROCEDURE(A68_VOID ,A68t134,(struct A68t130 **,struct A68t131 ),(struct A68t130 **,struct A68t131 ,void *));
typedef struct A68t134  A68_134 ;    /* PROC(REF REF MODE130,MODE131) VOID */

A_PROCEDURE(A68_BOOL ,A68t135,(struct A68t130 *),(struct A68t130 *,void *));
typedef struct A68t135  A68_135 ;    /* PROC(REF MODE130) BOOL */
struct A68t136{
struct A68t109  Label;
struct A68t130 * Machine_label_stack;
};
typedef struct A68t136  A68_136 ;    /* STRUCT(MODE109,REF MODE130)  */

A_PROCEDURE(A68_VOID ,A68t137,(struct A68t109 ,struct A68t130 *,struct A68t136 *),(struct A68t109 ,struct A68t130 *,struct A68t136 *,void *));
typedef struct A68t137  A68_137 ;    /* PROC(MODE109,REF MODE130) MODE136 */

A_PROCEDURE(A68_VOID ,A68t138,(struct A68t136 ,A68_VC ),(struct A68t136 ,A68_VC ,void *));
typedef struct A68t138  A68_138 ;    /* PROC(MODE136,MODE26) VOID */
struct A68t139{
struct A68t136  Back_patch;
struct A68t139 * Rest;
};
typedef struct A68t139  A68_139 ;    /* STRUCT(MODE136,REF MODE139)  */

A_PROCEDURE(A68_VOID ,A68t140,(struct A68t139 *,A68_VC ),(struct A68t139 *,A68_VC ,void *));
typedef struct A68t140  A68_140 ;    /* PROC(REF MODE139,MODE26) VOID */

A_PROCEDURE(A68_BOOL ,A68t141,(struct A68t139 *),(struct A68t139 *,void *));
typedef struct A68t141  A68_141 ;    /* PROC(REF MODE139) BOOL */

A_PROCEDURE(struct A68t130 *,A68t142,(struct A68t139 **,struct A68t109 ),(struct A68t139 **,struct A68t109 ,void *));
typedef struct A68t142  A68_142 ;    /* PROC(REF REF MODE139,MODE109) REF MODE130 */
struct A68t143{
struct A68t131  Ml;
struct A68t109  Lab;
};
typedef struct A68t143  A68_143 ;    /* STRUCT(MODE131,MODE109)  */

A_PROCEDURE(A68_VOID ,A68t144,(struct A68t131 ,struct A68t109 ,struct A68t143 *),(struct A68t131 ,struct A68t109 ,struct A68t143 *,void *));
typedef struct A68t144  A68_144 ;    /* PROC(MODE131,MODE109) MODE143 */

A_PROCEDURE(A68_VOID ,A68t145,(struct A68t139 **,struct A68t143 ),(struct A68t139 **,struct A68t143 ,void *));
typedef struct A68t145  A68_145 ;    /* PROC(REF REF MODE139,MODE143) VOID */
struct A68t146{
A68_INT  Sort;
A_PAD_INT(PAD_15)
A68_INT  Size;
A_PAD_INT(PAD_16)
};
typedef struct A68t146  A68_146 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t147,(struct A68t146 ,A68_VC ),(struct A68t146 ,A68_VC ,void *));
typedef struct A68t147  A68_147 ;    /* PROC(MODE146,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t148,(struct A68t146 *,struct A68t76 ),(struct A68t146 *,struct A68t76 ,void *));
typedef struct A68t148  A68_148 ;    /* PROC(REF MODE146,MODE76) VOID */

A_PROCEDURE(A68_VOID ,A68t149,(struct A68t146 *,struct A68t79 ),(struct A68t146 *,struct A68t79 ,void *));
typedef struct A68t149  A68_149 ;    /* PROC(REF MODE146,MODE79) VOID */
struct A68t150{
struct A68t146  Head;
struct A68t150 * Tail;
};
typedef struct A68t150  A68_150 ;    /* STRUCT(MODE146,REF MODE150)  */

A_PROCEDURE(A68_VOID ,A68t151,(struct A68t150 *,A68_VC ),(struct A68t150 *,A68_VC ,void *));
typedef struct A68t151  A68_151 ;    /* PROC(REF MODE150,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t152,(struct A68t150 *,struct A68t76 ),(struct A68t150 *,struct A68t76 ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(REF MODE150,MODE76) VOID */

A_PROCEDURE(A68_VOID ,A68t153,(struct A68t150 **,struct A68t79 ),(struct A68t150 **,struct A68t79 ,void *));
typedef struct A68t153  A68_153 ;    /* PROC(REF REF MODE150,MODE79) VOID */

A_PROCEDURE(A68_INT ,A68t154,(struct A68t150 *),(struct A68t150 *,void *));
typedef struct A68t154  A68_154 ;    /* PROC(REF MODE150) INT */
struct A68t155{
struct A68t109  Label;
struct A68t150 * Input_params;
struct A68t150 * Output_params;
};
typedef struct A68t155  A68_155 ;    /* STRUCT(MODE109,REF MODE150,REF MODE150)  */

A_PROCEDURE(A68_VOID ,A68t156,(struct A68t109 ,struct A68t150 *,struct A68t150 *,struct A68t155 *),(struct A68t109 ,struct A68t150 *,struct A68t150 *,struct A68t155 *,void *));
typedef struct A68t156  A68_156 ;    /* PROC(MODE109,REF MODE150,REF MODE150) MODE155 */

A_PROCEDURE(A68_VOID ,A68t157,(struct A68t155 ,A68_VC ),(struct A68t155 ,A68_VC ,void *));
typedef struct A68t157  A68_157 ;    /* PROC(MODE155,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t158,(struct A68t155 *,struct A68t76 ),(struct A68t155 *,struct A68t76 ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(REF MODE155,MODE76) VOID */

A_PROCEDURE(A68_VOID ,A68t159,(struct A68t155 *,struct A68t79 ),(struct A68t155 *,struct A68t79 ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(REF MODE155,MODE79) VOID */
struct A68t160{
struct A68t109  Label;
struct A68t150 * Spec;
};
typedef struct A68t160  A68_160 ;    /* STRUCT(MODE109,REF MODE150)  */

A_PROCEDURE(A68_VOID ,A68t161,(struct A68t109 ,struct A68t150 *,struct A68t160 *),(struct A68t109 ,struct A68t150 *,struct A68t160 *,void *));
typedef struct A68t161  A68_161 ;    /* PROC(MODE109,REF MODE150) MODE160 */

A_PROCEDURE(A68_VOID ,A68t162,(struct A68t160 ,A68_VC ),(struct A68t160 ,A68_VC ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(MODE160,MODE26) VOID */
struct A68t163{
struct A68t160  Labeled_spec;
struct A68t163 * Rest;
};
typedef struct A68t163  A68_163 ;    /* STRUCT(MODE160,REF MODE163)  */

A_PROCEDURE(A68_VOID ,A68t164,(struct A68t163 *,A68_VC ),(struct A68t163 *,A68_VC ,void *));
typedef struct A68t164  A68_164 ;    /* PROC(REF MODE163,MODE26) VOID */

A_PROCEDURE(struct A68t150 *,A68t165,(struct A68t163 **,struct A68t109 ),(struct A68t163 **,struct A68t109 ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(REF REF MODE163,MODE109) REF MODE150 */

A_PROCEDURE(A68_BOOL ,A68t166,(struct A68t163 *,struct A68t109 ),(struct A68t163 *,struct A68t109 ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(REF MODE163,MODE109) BOOL */

A_PROCEDURE(A68_VOID ,A68t167,(struct A68t163 **,struct A68t160 ),(struct A68t163 **,struct A68t160 ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(REF REF MODE163,MODE160) VOID */
struct A68t168{
struct A68t155  Labeled_params;
struct A68t168 * Rest;
};
typedef struct A68t168  A68_168 ;    /* STRUCT(MODE155,REF MODE168)  */

A_PROCEDURE(A68_VOID ,A68t169,(struct A68t168 *,A68_VC ),(struct A68t168 *,A68_VC ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(REF MODE168,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t170,(struct A68t168 *,struct A68t76 ),(struct A68t168 *,struct A68t76 ,void *));
typedef struct A68t170  A68_170 ;    /* PROC(REF MODE168,MODE76) VOID */

A_PROCEDURE(A68_VOID ,A68t171,(struct A68t168 **,struct A68t79 ),(struct A68t168 **,struct A68t79 ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(REF REF MODE168,MODE79) VOID */
A_ROW(struct A68t150 *,A68t172,1);
typedef struct A68t172  A68_172 ;    /* [] REF MODE150 */

A_PROCEDURE(A68_VOID ,A68t173,(struct A68t168 *,struct A68t109 ,struct A68t172 *),(struct A68t168 *,struct A68t109 ,struct A68t172 *,void *));
typedef struct A68t173  A68_173 ;    /* PROC(REF MODE168,MODE109) MODE172 */

A_PROCEDURE(A68_VOID ,A68t174,(struct A68t168 **,struct A68t155 ),(struct A68t168 **,struct A68t155 ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(REF REF MODE168,MODE155) VOID */

A_PROCEDURE(A68_VOID ,A68t175,(struct A68t168 **),(struct A68t168 **,void *));
typedef struct A68t175  A68_175 ;    /* PROC(REF REF MODE168) VOID */
struct A68t176{
A68_INT  Current_size;
A_PAD_INT(PAD_17)
A68_INT  Max_size;
A_PAD_INT(PAD_18)
};
typedef struct A68t176  A68_176 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t177,(struct A68t176 *),(struct A68t176 *,void *));
typedef struct A68t177  A68_177 ;    /* PROC MODE176 */

A_PROCEDURE(A68_VOID ,A68t178,(struct A68t176 ,A68_VC ),(struct A68t176 ,A68_VC ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(MODE176,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t179,(struct A68t176 *,struct A68t76 ),(struct A68t176 *,struct A68t76 ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(REF MODE176,MODE76) VOID */

A_PROCEDURE(A68_VOID ,A68t180,(struct A68t176 *,struct A68t79 ),(struct A68t176 *,struct A68t79 ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(REF MODE176,MODE79) VOID */

A_PROCEDURE(A68_VOID ,A68t181,(struct A68t176 *),(struct A68t176 *,void *));
typedef struct A68t181  A68_181 ;    /* PROC(REF MODE176) VOID */

A_PROCEDURE(A68_INT ,A68t182,(struct A68t176 *),(struct A68t176 *,void *));
typedef struct A68t182  A68_182 ;    /* PROC(REF MODE176) INT */

A_PROCEDURE(A68_VOID ,A68t183,(struct A68t176 *,A68_INT ),(struct A68t176 *,A68_INT ,void *));
typedef struct A68t183  A68_183 ;    /* PROC(REF MODE176,INT) VOID */
struct A68t184{
A68_INT  Window_offset;
A_PAD_INT(PAD_19)
A68_INT  Register_ind;
A_PAD_INT(PAD_20)
A68_INT  Memory_offset;
A_PAD_INT(PAD_21)
A68_INT  Max_offset;
A_PAD_INT(PAD_22)
};
typedef struct A68t184  A68_184 ;    /* STRUCT(INT,INT,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t185,(struct A68t184 *),(struct A68t184 *,void *));
typedef struct A68t185  A68_185 ;    /* PROC MODE184 */

A_PROCEDURE(A68_VOID ,A68t186,(struct A68t184 ,A68_VC ),(struct A68t184 ,A68_VC ,void *));
typedef struct A68t186  A68_186 ;    /* PROC(MODE184,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t187,(struct A68t184 *,struct A68t76 ),(struct A68t184 *,struct A68t76 ,void *));
typedef struct A68t187  A68_187 ;    /* PROC(REF MODE184,MODE76) VOID */

A_PROCEDURE(A68_VOID ,A68t188,(struct A68t184 *,struct A68t79 ),(struct A68t184 *,struct A68t79 ,void *));
typedef struct A68t188  A68_188 ;    /* PROC(REF MODE184,MODE79) VOID */

A_PROCEDURE(A68_VOID ,A68t189,(struct A68t184 *),(struct A68t184 *,void *));
typedef struct A68t189  A68_189 ;    /* PROC(REF MODE184) VOID */

A_PROCEDURE(A68_BOOL ,A68t190,(struct A68t184 *),(struct A68t184 *,void *));
typedef struct A68t190  A68_190 ;    /* PROC(REF MODE184) BOOL */

A_PROCEDURE(A68_INT ,A68t191,(struct A68t184 *),(struct A68t184 *,void *));
typedef struct A68t191  A68_191 ;    /* PROC(REF MODE184) INT */
struct A68t192{
A68_BOOL  Ircallinst_flag;
A_PAD_BOOL(PAD_23)
};
typedef struct A68t192  A68_192 ;    /* STRUCT(BOOL)  */

A_PROCEDURE(A68_VOID ,A68t193,(A68_BOOL ,struct A68t192 *),(A68_BOOL ,struct A68t192 *,void *));
typedef struct A68t193  A68_193 ;    /* PROC(BOOL) MODE192 */

A_PROCEDURE(A68_VOID ,A68t194,(struct A68t192 ,A68_VC ),(struct A68t192 ,A68_VC ,void *));
typedef struct A68t194  A68_194 ;    /* PROC(MODE192,MODE26) VOID */
struct A68t195{
A68_INT  Copy_stack_number;
A_PAD_INT(PAD_24)
A68_BOOL  Register_flag;
A_PAD_BOOL(PAD_25)
};
typedef struct A68t195  A68_195 ;    /* STRUCT(INT,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t196,(A68_INT ,A68_BOOL ,struct A68t195 *),(A68_INT ,A68_BOOL ,struct A68t195 *,void *));
typedef struct A68t196  A68_196 ;    /* PROC(INT,BOOL) MODE195 */

A_PROCEDURE(A68_VOID ,A68t197,(struct A68t195 ,A68_VC ),(struct A68t195 ,A68_VC ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(MODE195,MODE26) VOID */
struct A68t198{
A68_VC  Constant;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t199,(A68_VC ,struct A68t198 *),(A68_VC ,struct A68t198 *,void *));
typedef struct A68t199  A68_199 ;    /* PROC(REF MODE26) MODE198 */

A_PROCEDURE(A68_VOID ,A68t200,(struct A68t198 ,A68_VC ),(struct A68t198 ,A68_VC ,void *));
typedef struct A68t200  A68_200 ;    /* PROC(MODE198,MODE26) VOID */
struct A68t201{
A68_INT  Sumconstant;
A_PAD_INT(PAD_26)
A68_BOOL  Callinst_flag;
A_PAD_BOOL(PAD_27)
};
typedef struct A68t201  A68_201 ;    /* STRUCT(INT,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t202,(A68_INT ,A68_BOOL ,struct A68t201 *),(A68_INT ,A68_BOOL ,struct A68t201 *,void *));
typedef struct A68t202  A68_202 ;    /* PROC(INT,BOOL) MODE201 */

A_PROCEDURE(A68_VOID ,A68t203,(struct A68t201 ,A68_VC ),(struct A68t201 ,A68_VC ,void *));
typedef struct A68t203  A68_203 ;    /* PROC(MODE201,MODE26) VOID */
struct A68t204{
A68_BOOL  Indcallinst_flag;
A_PAD_BOOL(PAD_28)
};
typedef struct A68t204  A68_204 ;    /* STRUCT(BOOL)  */

A_PROCEDURE(A68_VOID ,A68t205,(A68_BOOL ,struct A68t204 *),(A68_BOOL ,struct A68t204 *,void *));
typedef struct A68t205  A68_205 ;    /* PROC(BOOL) MODE204 */

A_PROCEDURE(A68_VOID ,A68t206,(struct A68t204 ,A68_VC ),(struct A68t204 ,A68_VC ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(MODE204,MODE26) VOID */
struct A68t207{
A68_BITS  Condition;
A_PAD_BITS(PAD_29)
};
typedef struct A68t207  A68_207 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t208,(A68_BITS ,struct A68t207 *),(A68_BITS ,struct A68t207 *,void *));
typedef struct A68t208  A68_208 ;    /* PROC(BITS) MODE207 */

A_PROCEDURE(A68_VOID ,A68t209,(struct A68t207 ,A68_VC ),(struct A68t207 ,A68_VC ,void *));
typedef struct A68t209  A68_209 ;    /* PROC(MODE207,MODE26) VOID */
struct A68t210 { A68_INT mode; union {
struct A68t192  mode1;
struct A68t195  mode2;
struct A68t198  mode3;
struct A68t201  mode4;
struct A68t204  mode5;
struct A68t207  mode6;
} data; };
typedef struct A68t210  A68_210 ;    /* UNION(MODE192,MODE195,MODE198,MODE201,MODE204,MODE207,VOID)  */

A_PROCEDURE(A68_VOID ,A68t211,(struct A68t210 ,A68_VC ),(struct A68t210 ,A68_VC ,void *));
typedef struct A68t211  A68_211 ;    /* PROC(MODE210,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t212,(struct A68t210 ,struct A68t210 ,struct A68t210 *),(struct A68t210 ,struct A68t210 ,struct A68t210 *,void *));
typedef struct A68t212  A68_212 ;    /* PROC(MODE210,MODE210) MODE210 */

A_PROCEDURE(A68_BOOL ,A68t213,(struct A68t210 ),(struct A68t210 ,void *));
typedef struct A68t213  A68_213 ;    /* PROC(MODE210) BOOL */

A_PROCEDURE(A68_VOID ,A68t214,(struct A68t210 ,struct A68t210 *),(struct A68t210 ,struct A68t210 *,void *));
typedef struct A68t214  A68_214 ;    /* PROC(MODE210) MODE210 */
struct A68t215 { A68_INT mode; union {
A68_BOOL  mode1;
A68_INT  mode2;
A68_CHAR  mode3;
} data; };
typedef struct A68t215  A68_215 ;    /* UNION(BOOL,INT,CHAR)  */
struct A68t216{
struct A68t215  Location_type;
struct A68t210  Symbolic_state;
A68_INT  Alloc_register;
A_PAD_INT(PAD_30)
A68_INT  Bit_length;
A_PAD_INT(PAD_31)
};
typedef struct A68t216  A68_216 ;    /* STRUCT(MODE215,MODE210,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t217,(struct A68t216 ,A68_VC ),(struct A68t216 ,A68_VC ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(MODE216,MODE26) VOID */
A_VECTOR(struct A68t216 ,A68t219);
typedef struct A68t219  A68_219 ;    /* VECTOR [] MODE216 */
struct A68t218{
struct A68t219  Stack_locations;
A68_INT  Top;
A_PAD_INT(PAD_32)
};
typedef struct A68t218  A68_218 ;    /* STRUCT(REF MODE219,INT)  */

A_PROCEDURE(A68_VOID ,A68t220,(struct A68t218 *),(struct A68t218 *,void *));
typedef struct A68t220  A68_220 ;    /* PROC MODE218 */

A_PROCEDURE(A68_VOID ,A68t221,(struct A68t218 ,A68_VC ),(struct A68t218 ,A68_VC ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(MODE218,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t222,(struct A68t218 *,struct A68t218 *),(struct A68t218 *,struct A68t218 *,void *));
typedef struct A68t222  A68_222 ;    /* PROC(REF MODE218) MODE218 */

A_PROCEDURE(A68_VOID ,A68t223,(struct A68t218 *),(struct A68t218 *,void *));
typedef struct A68t223  A68_223 ;    /* PROC(REF MODE218) VOID */

A_PROCEDURE(A68_INT ,A68t224,(struct A68t218 *),(struct A68t218 *,void *));
typedef struct A68t224  A68_224 ;    /* PROC(REF MODE218) INT */

A_PROCEDURE(A68_VOID ,A68t225,(struct A68t218 *,struct A68t216 *),(struct A68t218 *,struct A68t216 *,void *));
typedef struct A68t225  A68_225 ;    /* PROC(REF MODE218) MODE216 */

A_PROCEDURE(A68_VOID ,A68t226,(struct A68t218 *,struct A68t216 ),(struct A68t218 *,struct A68t216 ,void *));
typedef struct A68t226  A68_226 ;    /* PROC(REF MODE218,MODE216) VOID */

A_PROCEDURE(A68_VOID ,A68t227,(struct A68t218 *,A68_INT ,struct A68t216 *),(struct A68t218 *,A68_INT ,struct A68t216 *,void *));
typedef struct A68t227  A68_227 ;    /* PROC(REF MODE218,INT) MODE216 */
struct A68t228{
struct A68t216  Loc;
A68_INT  O;
A_PAD_INT(PAD_33)
};
typedef struct A68t228  A68_228 ;    /* STRUCT(MODE216,INT)  */

A_PROCEDURE(A68_VOID ,A68t229,(struct A68t216 ,A68_INT ,struct A68t228 *),(struct A68t216 ,A68_INT ,struct A68t228 *,void *));
typedef struct A68t229  A68_229 ;    /* PROC(MODE216,INT) MODE228 */

A_PROCEDURE(A68_VOID ,A68t230,(struct A68t218 *,struct A68t228 ),(struct A68t218 *,struct A68t228 ,void *));
typedef struct A68t230  A68_230 ;    /* PROC(REF MODE218,MODE228) VOID */

A_PROCEDURE(A68_BOOL ,A68t231,(struct A68t218 *),(struct A68t218 *,void *));
typedef struct A68t231  A68_231 ;    /* PROC(REF MODE218) BOOL */

A_PROCEDURE(A68_VOID ,A68t232,(struct A68t218 *,A68_INT ,struct A68t215 *),(struct A68t218 *,A68_INT ,struct A68t215 *,void *));
typedef struct A68t232  A68_232 ;    /* PROC(REF MODE218,INT) MODE215 */

A_PROCEDURE(A68_VOID ,A68t233,(struct A68t218 *,A68_INT ,struct A68t210 *),(struct A68t218 *,A68_INT ,struct A68t210 *,void *));
typedef struct A68t233  A68_233 ;    /* PROC(REF MODE218,INT) MODE210 */

A_PROCEDURE(A68_INT ,A68t234,(struct A68t218 *,A68_INT ),(struct A68t218 *,A68_INT ,void *));
typedef struct A68t234  A68_234 ;    /* PROC(REF MODE218,INT) INT */
struct A68t235{
A68_INT  O;
A_PAD_INT(PAD_34)
struct A68t210  Ss;
};
typedef struct A68t235  A68_235 ;    /* STRUCT(INT,MODE210)  */

A_PROCEDURE(A68_VOID ,A68t236,(A68_INT ,struct A68t210 ,struct A68t235 *),(A68_INT ,struct A68t210 ,struct A68t235 *,void *));
typedef struct A68t236  A68_236 ;    /* PROC(INT,MODE210) MODE235 */

A_PROCEDURE(A68_VOID ,A68t237,(struct A68t218 *,struct A68t235 ),(struct A68t218 *,struct A68t235 ,void *));
typedef struct A68t237  A68_237 ;    /* PROC(REF MODE218,MODE235) VOID */
struct A68t238{
A68_INT  O;
A_PAD_INT(PAD_35)
A68_INT  Bl;
A_PAD_INT(PAD_36)
};
typedef struct A68t238  A68_238 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t239,(A68_INT ,A68_INT ,struct A68t238 *),(A68_INT ,A68_INT ,struct A68t238 *,void *));
typedef struct A68t239  A68_239 ;    /* PROC(INT,INT) MODE238 */

A_PROCEDURE(A68_VOID ,A68t240,(struct A68t218 *,struct A68t238 ),(struct A68t218 *,struct A68t238 ,void *));
typedef struct A68t240  A68_240 ;    /* PROC(REF MODE218,MODE238) VOID */
struct A68t241{
A68_INT  O;
A_PAD_INT(PAD_37)
A68_INT  R;
A_PAD_INT(PAD_38)
};
typedef struct A68t241  A68_241 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t242,(A68_INT ,A68_INT ,struct A68t241 *),(A68_INT ,A68_INT ,struct A68t241 *,void *));
typedef struct A68t242  A68_242 ;    /* PROC(INT,INT) MODE241 */

A_PROCEDURE(A68_VOID ,A68t243,(struct A68t218 *,struct A68t241 ),(struct A68t218 *,struct A68t241 ,void *));
typedef struct A68t243  A68_243 ;    /* PROC(REF MODE218,MODE241) VOID */
struct A68t244{
struct A68t218  Location_stack;
struct A68t184  Rm_allocator;
struct A68t176  Size_recorder;
};
typedef struct A68t244  A68_244 ;    /* STRUCT(MODE218,MODE184,MODE176)  */

A_PROCEDURE(A68_VOID ,A68t245,(struct A68t244 *),(struct A68t244 *,void *));
typedef struct A68t245  A68_245 ;    /* PROC MODE244 */

A_PROCEDURE(struct A68t244 *,A68t246,(struct A68t244 *),(struct A68t244 *,void *));
typedef struct A68t246  A68_246 ;    /* PROC(REF MODE244) REF MODE244 */

A_PROCEDURE(A68_VOID ,A68t247,(struct A68t244 ,A68_VC ),(struct A68t244 ,A68_VC ,void *));
typedef struct A68t247  A68_247 ;    /* PROC(MODE244,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t248,(struct A68t244 *,struct A68t76 ),(struct A68t244 *,struct A68t76 ,void *));
typedef struct A68t248  A68_248 ;    /* PROC(REF MODE244,MODE76) VOID */

A_PROCEDURE(A68_VOID ,A68t249,(struct A68t244 *,struct A68t79 ),(struct A68t244 *,struct A68t79 ,void *));
typedef struct A68t249  A68_249 ;    /* PROC(REF MODE244,MODE79) VOID */

A_PROCEDURE(A68_VOID ,A68t250,(struct A68t244 *),(struct A68t244 *,void *));
typedef struct A68t250  A68_250 ;    /* PROC(REF MODE244) VOID */

A_PROCEDURE(A68_INT ,A68t251,(struct A68t244 *),(struct A68t244 *,void *));
typedef struct A68t251  A68_251 ;    /* PROC(REF MODE244) INT */

A_PROCEDURE(A68_BOOL ,A68t252,(struct A68t244 *),(struct A68t244 *,void *));
typedef struct A68t252  A68_252 ;    /* PROC(REF MODE244) BOOL */

A_PROCEDURE(A68_INT ,A68t253,(struct A68t244 *,A68_INT ),(struct A68t244 *,A68_INT ,void *));
typedef struct A68t253  A68_253 ;    /* PROC(REF MODE244,INT) INT */

A_PROCEDURE(A68_BITS ,A68t254,(struct A68t244 *,A68_INT ),(struct A68t244 *,A68_INT ,void *));
typedef struct A68t254  A68_254 ;    /* PROC(REF MODE244,INT) BITS */
struct A68t255 { A68_INT mode; union {
A68_BITS  mode1;
A68_INT  mode2;
} data; };
typedef struct A68t255  A68_255 ;    /* UNION(BITS,INT)  */

A_PROCEDURE(A68_VOID ,A68t256,(struct A68t244 *,A68_INT ,struct A68t255 *),(struct A68t244 *,A68_INT ,struct A68t255 *,void *));
typedef struct A68t256  A68_256 ;    /* PROC(REF MODE244,INT) MODE255 */
struct A68t258{
A68_BITS  Rs1;
A_PAD_BITS(PAD_39)
A68_BITS  Rs2;
A_PAD_BITS(PAD_40)
A68_BITS  Rd;
A_PAD_BITS(PAD_41)
};
typedef struct A68t258  A68_258 ;    /* STRUCT(BITS,BITS,BITS)  */
struct A68t259{
A68_BITS  Rs1;
A_PAD_BITS(PAD_42)
A68_INT  Imm;
A_PAD_INT(PAD_43)
A68_BITS  Rd;
A_PAD_BITS(PAD_44)
};
typedef struct A68t259  A68_259 ;    /* STRUCT(BITS,INT,BITS)  */
struct A68t257 { A68_INT mode; union {
struct A68t258  mode1;
struct A68t259  mode2;
} data; };
typedef struct A68t257  A68_257 ;    /* UNION(MODE258,MODE259)  */

A_PROCEDURE(A68_VOID ,A68t260,(struct A68t244 *,A68_INT ,struct A68t257 *),(struct A68t244 *,A68_INT ,struct A68t257 *,void *));
typedef struct A68t260  A68_260 ;    /* PROC(REF MODE244,INT) MODE257 */

A_PROCEDURE(A68_VOID ,A68t261,(struct A68t244 *,A68_INT ,struct A68t258 *),(struct A68t244 *,A68_INT ,struct A68t258 *,void *));
typedef struct A68t261  A68_261 ;    /* PROC(REF MODE244,INT) MODE258 */

A_PROCEDURE(A68_VOID ,A68t262,(struct A68t244 *,A68_INT ),(struct A68t244 *,A68_INT ,void *));
typedef struct A68t262  A68_262 ;    /* PROC(REF MODE244,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t263,(struct A68t244 *,struct A68t257 *),(struct A68t244 *,struct A68t257 *,void *));
typedef struct A68t263  A68_263 ;    /* PROC(REF MODE244) MODE257 */

A_PROCEDURE(A68_BOOL ,A68t264,(struct A68t244 *,A68_INT ),(struct A68t244 *,A68_INT ,void *));
typedef struct A68t264  A68_264 ;    /* PROC(REF MODE244,INT) BOOL */

A_PROCEDURE(A68_INT ,A68t265,(struct A68t244 *,struct A68t150 *),(struct A68t244 *,struct A68t150 *,void *));
typedef struct A68t265  A68_265 ;    /* PROC(REF MODE244,REF MODE150) INT */

A_PROCEDURE(A68_VOID ,A68t266,(struct A68t244 *,struct A68t172 ),(struct A68t244 *,struct A68t172 ,void *));
typedef struct A68t266  A68_266 ;    /* PROC(REF MODE244,MODE172) VOID */

A_PROCEDURE(A68_VOID ,A68t267,(struct A68t244 *,struct A68t150 *),(struct A68t244 *,struct A68t150 *,void *));
typedef struct A68t267  A68_267 ;    /* PROC(REF MODE244,REF MODE150) VOID */

A_PROCEDURE(struct A68t150 *,A68t268,(struct A68t244 *),(struct A68t244 *,void *));
typedef struct A68t268  A68_268 ;    /* PROC(REF MODE244) REF MODE150 */
struct A68t269{
A68_INT  W;
A_PAD_INT(PAD_45)
A68_INT  V;
A_PAD_INT(PAD_46)
A68_INT  A;
A_PAD_INT(PAD_47)
};
typedef struct A68t269  A68_269 ;    /* STRUCT(INT,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t270,(struct A68t103 ,A68_INT ,struct A68t269 *),(struct A68t103 ,A68_INT ,struct A68t269 *,void *));
typedef struct A68t270  A68_270 ;    /* PROC(MODE103,INT) MODE269 */

A_PROCEDURE(A68_VOID ,A68t271,(struct A68t244 *,struct A68t269 ),(struct A68t244 *,struct A68t269 ,void *));
typedef struct A68t271  A68_271 ;    /* PROC(REF MODE244,MODE269) VOID */

A_PROCEDURE(A68_VOID ,A68t272,(struct A68t244 *,A68_BITS ),(struct A68t244 *,A68_BITS ,void *));
typedef struct A68t272  A68_272 ;    /* PROC(REF MODE244,BITS) VOID */
struct A68t273{
A68_VC  Wo;
A68_INT  Len;
A_PAD_INT(PAD_48)
};
typedef struct A68t273  A68_273 ;    /* STRUCT(REF MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t274,(A68_VC ,A68_INT ,struct A68t273 *),(A68_VC ,A68_INT ,struct A68t273 *,void *));
typedef struct A68t274  A68_274 ;    /* PROC(REF MODE26,INT) MODE273 */

A_PROCEDURE(A68_VOID ,A68t275,(struct A68t244 *,struct A68t273 ),(struct A68t244 *,struct A68t273 ,void *));
typedef struct A68t275  A68_275 ;    /* PROC(REF MODE244,MODE273) VOID */

A_PROCEDURE(A68_VOID ,A68t276,(struct A68t244 *,struct A68t238 ),(struct A68t244 *,struct A68t238 ,void *));
typedef struct A68t276  A68_276 ;    /* PROC(REF MODE244,MODE238) VOID */

A_PROCEDURE(A68_VOID ,A68t277,(A68_VC *),(A68_VC *,void *));
typedef struct A68t277  A68_277 ;    /* PROC(REF REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t278,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t278  A68_278 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_CHAR *,A68t279,(A68_INT ),(A68_INT ,void *));
typedef struct A68t279  A68_279 ;    /* PROC(INT) REF CHAR */

A_PROCEDURE(A68_VOID ,A68t280,(struct A68t60 ),(struct A68t60 ,void *));
typedef struct A68t280  A68_280 ;    /* PROC(MODE60) VOID */

A_PROCEDURE(A68_VOID ,A68t281,(struct A68t77 ),(struct A68t77 ,void *));
typedef struct A68t281  A68_281 ;    /* PROC(MODE77) VOID */

A_PROCEDURE(A68_BOOL ,A68t282,(struct A68t131 ,struct A68t131 ),(struct A68t131 ,struct A68t131 ,void *));
typedef struct A68t282  A68_282 ;    /* PROC(MODE131,MODE131) BOOL */
struct A68t283{
A68_BITS  Rs1;
A_PAD_BITS(PAD_49)
A68_BITS  Rs2;
A_PAD_BITS(PAD_50)
};
typedef struct A68t283  A68_283 ;    /* STRUCT(BITS,BITS)  */
struct A68t284{
A68_BITS  Rs1;
A_PAD_BITS(PAD_51)
A68_INT  Imm;
A_PAD_INT(PAD_52)
};
typedef struct A68t284  A68_284 ;    /* STRUCT(BITS,INT)  */
struct A68t285{
A68_INT  Imm;
A_PAD_INT(PAD_53)
A68_BITS  Rd;
A_PAD_BITS(PAD_54)
};
typedef struct A68t285  A68_285 ;    /* STRUCT(INT,BITS)  */
struct A68t286 { A68_INT mode; union {
struct A68t283  mode1;
struct A68t284  mode2;
} data; };
typedef struct A68t286  A68_286 ;    /* UNION(MODE283,MODE284)  */
struct A68t287{
A68_BITS  Mask;
A_PAD_BITS(PAD_55)
A68_RC  M1a;
};
typedef struct A68t287  A68_287 ;    /* STRUCT(BITS,MODE27)  */
struct A68t288{
A68_BITS  Mask;
A_PAD_BITS(PAD_56)
A68_RC  M1b;
};
typedef struct A68t288  A68_288 ;    /* STRUCT(BITS,MODE27)  */
struct A68t289{
A68_BITS  Mask;
A_PAD_BITS(PAD_57)
A68_RC  M2a;
};
typedef struct A68t289  A68_289 ;    /* STRUCT(BITS,MODE27)  */
struct A68t290{
A68_BITS  Mask;
A_PAD_BITS(PAD_58)
A68_RC  M2b;
};
typedef struct A68t290  A68_290 ;    /* STRUCT(BITS,MODE27)  */
struct A68t291{
A68_BITS  Mask;
A_PAD_BITS(PAD_59)
A68_RC  M2c;
};
typedef struct A68t291  A68_291 ;    /* STRUCT(BITS,MODE27)  */
struct A68t292{
A68_BITS  Mask;
A_PAD_BITS(PAD_60)
A68_RC  M2d;
};
typedef struct A68t292  A68_292 ;    /* STRUCT(BITS,MODE27)  */
struct A68t293{
A68_BITS  Mask;
A_PAD_BITS(PAD_61)
A68_RC  M3a;
};
typedef struct A68t293  A68_293 ;    /* STRUCT(BITS,MODE27)  */
struct A68t294{
A68_BITS  Mask;
A_PAD_BITS(PAD_62)
A68_RC  M3c;
};
typedef struct A68t294  A68_294 ;    /* STRUCT(BITS,MODE27)  */
struct A68t295{
A68_BITS  Mask;
A_PAD_BITS(PAD_63)
A68_RC  M3d;
};
typedef struct A68t295  A68_295 ;    /* STRUCT(BITS,MODE27)  */
struct A68t296{
A68_BITS  Mask;
A_PAD_BITS(PAD_64)
A68_RC  M3e;
};
typedef struct A68t296  A68_296 ;    /* STRUCT(BITS,MODE27)  */
struct A68t297{
A68_BITS  Mask;
A_PAD_BITS(PAD_65)
A68_RC  M3b;
};
typedef struct A68t297  A68_297 ;    /* STRUCT(BITS,MODE27)  */

A_PROCEDURE(A68_BITS ,A68t298,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t298  A68_298 ;    /* PROC(BITS) BITS */

A_PROCEDURE(A68_VOID ,A68t299,(struct A68t287 ,A68_INT ),(struct A68t287 ,A68_INT ,void *));
typedef struct A68t299  A68_299 ;    /* PROC(MODE287,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t300,(struct A68t288 ,A68_INT ),(struct A68t288 ,A68_INT ,void *));
typedef struct A68t300  A68_300 ;    /* PROC(MODE288,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t301,(struct A68t289 ,A68_INT ),(struct A68t289 ,A68_INT ,void *));
typedef struct A68t301  A68_301 ;    /* PROC(MODE289,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t302,(struct A68t290 ,struct A68t285 ),(struct A68t290 ,struct A68t285 ,void *));
typedef struct A68t302  A68_302 ;    /* PROC(MODE290,MODE285) VOID */
struct A68t303{
struct A68t291  M;
A68_BITS  Cond;
A_PAD_BITS(PAD_66)
};
typedef struct A68t303  A68_303 ;    /* STRUCT(MODE291,BITS)  */

A_PROCEDURE(A68_VOID ,A68t304,(struct A68t303 ,A68_INT ),(struct A68t303 ,A68_INT ,void *));
typedef struct A68t304  A68_304 ;    /* PROC(MODE303,INT) VOID */
struct A68t305{
struct A68t292  M;
A68_BITS  Cond;
A_PAD_BITS(PAD_67)
};
typedef struct A68t305  A68_305 ;    /* STRUCT(MODE292,BITS)  */

A_PROCEDURE(A68_VOID ,A68t306,(struct A68t305 ,A68_INT ),(struct A68t305 ,A68_INT ,void *));
typedef struct A68t306  A68_306 ;    /* PROC(MODE305,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t307,(struct A68t293 ,struct A68t257 ),(struct A68t293 ,struct A68t257 ,void *));
typedef struct A68t307  A68_307 ;    /* PROC(MODE293,MODE257) VOID */
struct A68t308{
struct A68t297  M;
A68_BITS  Cond;
A_PAD_BITS(PAD_68)
};
typedef struct A68t308  A68_308 ;    /* STRUCT(MODE297,BITS)  */

A_PROCEDURE(A68_VOID ,A68t309,(struct A68t308 ,struct A68t286 ),(struct A68t308 ,struct A68t286 ,void *));
typedef struct A68t309  A68_309 ;    /* PROC(MODE308,MODE286) VOID */

A_PROCEDURE(A68_VOID ,A68t310,(struct A68t294 ,A68_BITS ),(struct A68t294 ,A68_BITS ,void *));
typedef struct A68t310  A68_310 ;    /* PROC(MODE294,BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t311,(struct A68t295 ,struct A68t286 ),(struct A68t295 ,struct A68t286 ,void *));
typedef struct A68t311  A68_311 ;    /* PROC(MODE295,MODE286) VOID */

A_PROCEDURE(A68_VOID ,A68t312,(struct A68t296 ,struct A68t257 ),(struct A68t296 ,struct A68t257 ,void *));
typedef struct A68t312  A68_312 ;    /* PROC(MODE296,MODE257) VOID */

A_PROCEDURE(A68_VOID ,A68t313,(struct A68t287 ,struct A68t131 *),(struct A68t287 ,struct A68t131 *,void *));
typedef struct A68t313  A68_313 ;    /* PROC(MODE287,REF MODE131) VOID */

A_PROCEDURE(A68_VOID ,A68t314,(struct A68t288 ,struct A68t131 *),(struct A68t288 ,struct A68t131 *,void *));
typedef struct A68t314  A68_314 ;    /* PROC(MODE288,REF MODE131) VOID */

A_PROCEDURE(A68_VOID ,A68t315,(struct A68t303 ,struct A68t131 *),(struct A68t303 ,struct A68t131 *,void *));
typedef struct A68t315  A68_315 ;    /* PROC(MODE303,REF MODE131) VOID */

A_PROCEDURE(A68_VOID ,A68t316,(struct A68t305 ,struct A68t131 *),(struct A68t305 ,struct A68t131 *,void *));
typedef struct A68t316  A68_316 ;    /* PROC(MODE305,REF MODE131) VOID */

A_PROCEDURE(A68_VOID ,A68t317,(struct A68t291 ,A68_BITS ,struct A68t303 *),(struct A68t291 ,A68_BITS ,struct A68t303 *,void *));
typedef struct A68t317  A68_317 ;    /* PROC(MODE291,BITS) MODE303 */

A_PROCEDURE(A68_VOID ,A68t318,(struct A68t292 ,A68_BITS ,struct A68t305 *),(struct A68t292 ,A68_BITS ,struct A68t305 *,void *));
typedef struct A68t318  A68_318 ;    /* PROC(MODE292,BITS) MODE305 */

A_PROCEDURE(A68_VOID ,A68t319,(struct A68t297 ,A68_BITS ,struct A68t308 *),(struct A68t297 ,A68_BITS ,struct A68t308 *,void *));
typedef struct A68t319  A68_319 ;    /* PROC(MODE297,BITS) MODE308 */

A_PROCEDURE(A68_VOID ,A68t320,(struct A68t131 ),(struct A68t131 ,void *));
typedef struct A68t320  A68_320 ;    /* PROC(MODE131) VOID */

A_PROCEDURE(A68_VOID ,A68t321,(A68_BITS ,A68_INT ,A68_BITS ,A68_BITS ),(A68_BITS ,A68_INT ,A68_BITS ,A68_BITS ,void *));
typedef struct A68t321  A68_321 ;    /* PROC(BITS,INT,BITS,BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t322,(A68_INT ,A68_BITS ),(A68_INT ,A68_BITS ,void *));
typedef struct A68t322  A68_322 ;    /* PROC(INT,BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t323,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t323  A68_323 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t324,(struct A68t68 ),(struct A68t68 ,void *));
typedef struct A68t324  A68_324 ;    /* PROC(MODE68) VOID */

A_PROCEDURE(A68_VOID ,A68t325,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t325  A68_325 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,68,A68t326);
typedef struct A68t326  A68_326 ;    /* STRUCT 68 CHAR */
struct A68t327{
struct A68t109  Labelint;
struct A68t109  Labelcallinst;
A68_INT  Workspacesize;
A_PAD_INT(PAD_69)
A68_INT  Evalfn;
A_PAD_INT(PAD_70)
A68_INT  History;
A_PAD_INT(PAD_71)
A68_INT  Declid;
A_PAD_INT(PAD_72)
};
typedef struct A68t327  A68_327 ;    /* STRUCT(MODE109,MODE109,INT,INT,INT,INT)  */
struct A68t328{
struct A68t327 * Info;
struct A68t328 * Next;
};
typedef struct A68t328  A68_328 ;    /* STRUCT(REF MODE327,REF MODE328)  */

A_PROCEDURE(A68_VOID ,A68t329,(struct A68t327 *),(struct A68t327 *,void *));
typedef struct A68t329  A68_329 ;    /* PROC(REF MODE327) VOID */

A_PROCEDURE(struct A68t327 *,A68t330,(struct A68t109 ),(struct A68t109 ,void *));
typedef struct A68t330  A68_330 ;    /* PROC(MODE109) REF MODE327 */

A_PROCEDURE(struct A68t327 *,A68t331,(A68_VC ,struct A68t36 ,A68_INT ,struct A68t36 ,struct A68t60 ),(A68_VC ,struct A68t36 ,A68_INT ,struct A68t36 ,struct A68t60 ,void *));
typedef struct A68t331  A68_331 ;    /* PROC(MODE26,MODE36,INT,MODE36,MODE60) REF MODE327 */

A_PROCEDURE(A68_INT ,A68t332,(A68_CHAR *,A68_INT ,A68_INT *,A68_INT ,A68_INT ,A68_INT *,A68_INT ,A68_INT *,A68_INT *,A68_INT *),(A68_CHAR *,A68_INT ,A68_INT *,A68_INT ,A68_INT ,A68_INT *,A68_INT ,A68_INT *,A68_INT *,A68_INT *,void *));
typedef struct A68t332  A68_332 ;    /* PROC(REF CHAR,INT,REF INT,INT,INT,REF INT,INT,REF INT,REF INT,REF INT) INT */
A_ISTRUCT(A68_CHAR ,36,A68t333);
typedef struct A68t333  A68_333 ;    /* STRUCT 36 CHAR */

A_PROCEDURE(A68_BOOL ,A68t334,(struct A68t244 *,struct A68t109 ),(struct A68t244 *,struct A68t109 ,void *));
typedef struct A68t334  A68_334 ;    /* PROC(REF MODE244,MODE109) BOOL */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from kemassemsparc --- */
extern A68_290  BZDASIM_nop;
extern A68_293  DAEASIM_add;
extern A68_293  LAEASIM_or;
extern A68_293  TAEASIM_sub;
extern A68_296  BPEASIM_jmpl;
extern A68_293  TEEASIM_ld;
extern A68_293  JFEASIM_st;
#define YVDASIM_eq 0X1U
#define ZVDASIM_z YVDASIM_eq
#define DWDASIM_lu 0X5U
#define EWDASIM_cs DWDASIM_lu
#define IWDASIM_ne 0X9U
#define JWDASIM_nz IWDASIM_ne
#define NWDASIM_geu 0XdU
#define OWDASIM_cc NWDASIM_geu
#define SWDASIM_eq_a 0X11U
#define TWDASIM_z_a SWDASIM_eq_a
#define XWDASIM_lu_a 0X15U
#define YWDASIM_cs_a XWDASIM_lu_a
#define CXDASIM_ne_a 0X19U
#define DXDASIM_nz_a CXDASIM_ne_a
#define HXDASIM_geu_a 0X1dU
#define IXDASIM_cc_a HXDASIM_geu_a
#define EVEASIM_r0 0X0U
#define FVEASIM_g0 EVEASIM_r0
#define GVEASIM_r1 0X1U
#define HVEASIM_g1 GVEASIM_r1
#define IVEASIM_r2 0X2U
#define JVEASIM_g2 IVEASIM_r2
#define KVEASIM_r3 0X3U
#define LVEASIM_g3 KVEASIM_r3
#define MVEASIM_r4 0X4U
#define NVEASIM_g4 MVEASIM_r4
#define OVEASIM_r5 0X5U
#define PVEASIM_g5 OVEASIM_r5
#define QVEASIM_r6 0X6U
#define RVEASIM_g6 QVEASIM_r6
#define SVEASIM_r7 0X7U
#define TVEASIM_g7 SVEASIM_r7
#define UVEASIM_r8 0X8U
#define VVEASIM_o0 UVEASIM_r8
#define WVEASIM_r9 0X9U
#define XVEASIM_o1 WVEASIM_r9
#define YVEASIM_r10 0XaU
#define ZVEASIM_o2 YVEASIM_r10
#define AWEASIM_r11 0XbU
#define BWEASIM_o3 AWEASIM_r11
#define CWEASIM_r12 0XcU
#define DWEASIM_o4 CWEASIM_r12
#define EWEASIM_r13 0XdU
#define FWEASIM_o5 EWEASIM_r13
#define GWEASIM_r14 0XeU
#define HWEASIM_o6 GWEASIM_r14
#define JWEASIM_r15 0XfU
#define KWEASIM_o7 JWEASIM_r15
#define LWEASIM_r16 0X10U
#define MWEASIM_l0 LWEASIM_r16
#define NWEASIM_r17 0X11U
#define OWEASIM_l1 NWEASIM_r17
#define PWEASIM_r18 0X12U
#define QWEASIM_l2 PWEASIM_r18
#define RWEASIM_r19 0X13U
#define SWEASIM_l3 RWEASIM_r19
#define TWEASIM_r20 0X14U
#define UWEASIM_l4 TWEASIM_r20
#define VWEASIM_r21 0X15U
#define WWEASIM_l5 VWEASIM_r21
#define XWEASIM_r22 0X16U
#define YWEASIM_l6 XWEASIM_r22
#define ZWEASIM_r23 0X17U
#define AXEASIM_l7 ZWEASIM_r23
#define BXEASIM_r24 0X18U
#define CXEASIM_i0 BXEASIM_r24
#define DXEASIM_r25 0X19U
#define EXEASIM_i1 DXEASIM_r25
#define FXEASIM_r26 0X1aU
#define GXEASIM_i2 FXEASIM_r26
#define HXEASIM_r27 0X1bU
#define IXEASIM_i3 HXEASIM_r27
#define JXEASIM_r28 0X1cU
#define KXEASIM_i4 JXEASIM_r28
#define LXEASIM_r29 0X1dU
#define MXEASIM_i5 LXEASIM_r29
#define NXEASIM_r30 0X1eU
#define OXEASIM_i6 NXEASIM_r30
#define QXEASIM_r31 0X1fU
#define RXEASIM_i7 QXEASIM_r31
#define IWEASIM_sp HWEASIM_o6
#define PXEASIM_fp OXEASIM_i6
extern A68_VOID  QQEASIM_using(struct A68t290 ,struct A68t285 );
extern A68_VOID  ISEASIM_using(struct A68t293 ,struct A68t257 );
extern A68_VOID  PUEASIM_using(struct A68t296 ,struct A68t257 );
extern A68_VOID  CZEASIM_mamovir(A68_INT ,A68_BITS );
/* --- End of imports from kemassemsparc --- */


/* --- Imports from kecodegenstacksparc --- */
#define EZGASIM_tos 0
#define FZGASIM_tos1 1
extern A68_BITS  KBHASIM_rsource(struct A68t244 *,A68_INT );
/* --- End of imports from kecodegenstacksparc --- */


/* --- Imports from kecodegenserversparc --- */
extern A68_BITS  TEGASIM_globalpointer;
extern A68_BITS  REGASIM_callinstpointer;
extern A68_BITS  NEGASIM_tempreg1;
/* --- End of imports from kecodegenserversparc --- */


/* --- Imports from cif --- */
#include <stdio.h>

#define QDAAOSI_nullccharptr NULL
/**/

#define DFAAOSI_shortshortmaxint (A68_SSINT)A68_MAX_SSINT
/**/

#define EFAAOSI_shortmaxint (A68_SINT)A68_MAX_SINT
/**/

#define FFAAOSI_maxint (A68_INT)A68_MAX_INT
/**/

#define GFAAOSI_longmaxint (A68_LINT)A68_MAX_LINT
/**/

#define HFAAOSI_maxabschar (A68_INT)A68_MAX_CHAR
/**/

#define IFAAOSI_bitswidth A_SZ_BITS
extern A68_CHAR * CEAAOSI_vctocharptr(A68_VC );
extern A68_INT * GEAAOSI_vitointptr(struct A68t36 );
/* --- End of imports from cif --- */


/* --- Imports from basics --- */
/* --- End of imports from basics --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void KIDASIM(void);   /* kemassemsparc */
extern void ZYGASIM(void);   /* kecodegenstacksparc */
extern void AAFASIM(void);   /* kecodegenserversparc */
extern void JDAAOSI(void);   /* cif */
extern void JSCAOST(void);   /* basics */
/* --- end of DECS initialisation functions --- */
static A68_326   WEMASIM = {"$Id: kecodegenalienifsparc.a68,v 34.2 1995/03/29 13:04:43 ella Exp $"}; 
A_GISVEC(A68_VC ,XEMASIM,WEMASIM,68)
#define YEMASIM_nilalienevalfn 0
A68_327 * ZEMASIM_nilalieninfo;
#define AFMASIM_nilalienlist (A68_328 *)A68_NIL
#define BFMASIM_initialiseaction 1
#define CFMASIM_reinitialiseaction 2
#define DFMASIM_evaluateaction 3
#define EFMASIM_saveaction 4
#define FFMASIM_restoreaction 5
#define GFMASIM_terminateaction 6
static A68_328 * HFMASIM_aliens;
extern A68_INT built_in_finder();

#define ZFMASIM_finder built_in_finder
static A68_333   GGMASIM = {"Can't find the alien function named "}; 
A_GISVEC(A68_VC ,HGMASIM,GGMASIM,36)
#define OGMASIM_ms_tos 92

A_STATIC A68_VOID  JFMASIM_rememberalien(A68_327 * Newalien);

A_STATIC A68_327 * NFMASIM_lookupalien(A68_109  L);

A68_327 * YFMASIM_alienfinder(A68_VC  Name, A68_36  Inputtypes, A68_INT  Outputtype, A68_36  Macparams, A68_60  Flt);

A68_BOOL  LGMASIM_generatecallalien(A68_244 * S, A68_109  L);

A_STATIC A68_VOID  JFMASIM_rememberalien(A68_327 * Newalien)
{ 
A68_328  KFMASIM;  /* collateral clause result */
A68_328 * LFMASIM;  /* YIELD */
A_PROC_ENTRY(rememberalien);
 /* line 95: */
 /* line 96: */
KFMASIM.Info = Newalien;
 /* line 97: */
KFMASIM.Next = HFMASIM_aliens;
LFMASIM = A_HEAP(A68_328 ) ;
(*LFMASIM) = KFMASIM ;
HFMASIM_aliens = LFMASIM;
A_PROC_EXIT(rememberalien);
return;
} 
#undef NL

A_STATIC A68_327 * NFMASIM_lookupalien(A68_109  L)
{ 
A68_328 * OFMASIM_thisalien;
A68_BOOL  PFMASIM;  /* optbool result */
A68_BOOL  QFMASIM;  /* optbool result */
A68_BOOL  RFMASIM;  /* optbool result */
A68_327 * SFMASIM;  /* clause result */
A_PROC_ENTRY(lookupalien);
 /* line 100: */
 /* line 101: */
{ 
OFMASIM_thisalien = HFMASIM_aliens;
 /* line 102: */
for ( ;; )
{ 
 /* line 104: */
PFMASIM = (OFMASIM_thisalien!=AFMASIM_nilalienlist);
if ( PFMASIM )
{ /* line 105: */
QFMASIM = (L.Lab!=(*(&((&((*(&(OFMASIM_thisalien->Info)))->Labelint))->Lab))));
if ( ! QFMASIM )
{QFMASIM = A_VC_NE(L.Tag,(*(&((&((*(&(OFMASIM_thisalien->Info)))->Labelint))->Tag))));
}
 /* line 106: */
PFMASIM = QFMASIM;
}
 /* line 107: */
if ( PFMASIM )
{ /* line 108: */
RFMASIM = (L.Lab!=(*(&((&((*(&(OFMASIM_thisalien->Info)))->Labelcallinst))->Lab))));
if ( ! RFMASIM )
{RFMASIM = A_VC_NE(L.Tag,(*(&((&((*(&(OFMASIM_thisalien->Info)))->Labelcallinst))->Tag))));
}
 /* line 109: */
PFMASIM = RFMASIM;
}
 /* line 110: */
if ( !(PFMASIM) ) break;
 /* line 111: */
OFMASIM_thisalien = (*(&(OFMASIM_thisalien->Next)));
}
 /* line 112: */
if ( (OFMASIM_thisalien!=AFMASIM_nilalienlist) )
{ 
SFMASIM = (*(&(OFMASIM_thisalien->Info)));
} 
else
{ 
 /* line 113: */
SFMASIM = ZEMASIM_nilalieninfo;
} 
} 
A_PROC_EXIT(lookupalien);
return( SFMASIM );
} 
#undef NL
 /* line 124: */
 /* line 125: */
 /* line 126: */
 /* line 128: */

A68_327 * YFMASIM_alienfinder(A68_VC  Name, A68_36  Inputtypes, A68_INT  Outputtype, A68_36  Macparams, A68_60  Flt)
{ 
A68_327 * AGMASIM_alieninfo;
A68_INT * BGMASIM;  /* YIELD */
A68_INT * CGMASIM;  /* YIELD */
A68_BOOL  DGMASIM;  /* clause result */
A68_VC  EGMASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT * FGMASIM;  /* YIELD */
A68_327 * IGMASIM;  /* clause result */
A_PROC_ENTRY(alienfinder);
 /* line 129: */
 /* line 141: */
{ 
 /* line 142: */
 /* line 143: */
AGMASIM_alieninfo = (A_HEAP(A68_327 ));
 /* line 144: */
BGMASIM = (&(AGMASIM_alieninfo->Workspacesize)) ;
(*BGMASIM) = 0;
 /* line 145: */
CGMASIM = (&(AGMASIM_alieninfo->History)) ;
(*CGMASIM) = 0;
 /* line 146: */
 /* line 147: */
 /* line 148: */
 /* line 149: */
 /* line 150: */
 /* line 151: */
 /* line 152: */
 /* line 153: */
 /* line 155: */
 /* line 156: */
 /* line 157: */
FGMASIM = (&(AGMASIM_alieninfo->Evalfn)) ;
DGMASIM = (((*FGMASIM) = ZFMASIM_finder(CEAAOSI_vctocharptr(A_VC_PLUS(Name,A_HVEC(EGMASIM,'\000',A68_CHAR ))), Name.upb, GEAAOSI_vitointptr(Inputtypes), Inputtypes.upb, Outputtype, GEAAOSI_vitointptr(Macparams), Macparams.upb, (&(AGMASIM_alieninfo->Workspacesize)), (&(AGMASIM_alieninfo->History)), (&(AGMASIM_alieninfo->Declid))))==YEMASIM_nilalienevalfn);
if ( DGMASIM )
{ 
A_CALLPROC(Flt,(A_VC_PLUS(HGMASIM,Name)),(A_VC_PLUS(HGMASIM,Name),(Flt).nonlocals));
 /* line 158: */
 /* line 159: */
 /* line 160: */
IGMASIM = ZEMASIM_nilalieninfo;
} 
else
{ 
JFMASIM_rememberalien(AGMASIM_alieninfo);
 /* line 161: */
 /* line 162: */
IGMASIM = AGMASIM_alieninfo;
} 
} 
A_PROC_EXIT(alienfinder);
return( IGMASIM );
} 
#undef NL

A68_BOOL  LGMASIM_generatecallalien(A68_244 * S, A68_109  L)
{ 
A68_327 * MGMASIM_alien;
A68_BOOL  NGMASIM;  /* clause result */
A68_258  PGMASIM;  /* collateral clause result */
A68_257  QGMASIM;  /* OPERATORS - mode -> union mode */
A68_259  RGMASIM;  /* collateral clause result */
A68_257  SGMASIM;  /* OPERATORS - mode -> union mode */
A68_259  TGMASIM;  /* collateral clause result */
A68_257  UGMASIM;  /* OPERATORS - mode -> union mode */
A68_259  VGMASIM;  /* collateral clause result */
A68_257  WGMASIM;  /* OPERATORS - mode -> union mode */
A68_259  XGMASIM;  /* collateral clause result */
A68_257  YGMASIM;  /* OPERATORS - mode -> union mode */
A68_259  ZGMASIM;  /* collateral clause result */
A68_257  AHMASIM;  /* OPERATORS - mode -> union mode */
A68_258  BHMASIM;  /* collateral clause result */
A68_257  CHMASIM;  /* OPERATORS - mode -> union mode */
A68_258  DHMASIM;  /* collateral clause result */
A68_257  EHMASIM;  /* OPERATORS - mode -> union mode */
A68_258  FHMASIM;  /* collateral clause result */
A68_257  GHMASIM;  /* OPERATORS - mode -> union mode */
A68_258  HHMASIM;  /* collateral clause result */
A68_257  IHMASIM;  /* OPERATORS - mode -> union mode */
A68_285  JHMASIM;  /* collateral clause result */
A68_259  KHMASIM;  /* collateral clause result */
A68_257  LHMASIM;  /* OPERATORS - mode -> union mode */
A68_259  MHMASIM;  /* collateral clause result */
A68_257  NHMASIM;  /* OPERATORS - mode -> union mode */
A68_259  OHMASIM;  /* collateral clause result */
A68_257  PHMASIM;  /* OPERATORS - mode -> union mode */
A68_259  QHMASIM;  /* collateral clause result */
A68_257  RHMASIM;  /* OPERATORS - mode -> union mode */
A68_BOOL  SHMASIM;  /* clause result */
A_PROC_ENTRY(generatecallalien);
 /* line 165: */
 /* line 166: */
{ 
MGMASIM_alien = NFMASIM_lookupalien(L);
 /* line 167: */
 /* line 168: */
 /* line 174: */
NGMASIM = (MGMASIM_alien!=ZEMASIM_nilalieninfo);
if ( NGMASIM )
{ 
 /* line 176: */
PGMASIM.Rs1 = IWEASIM_sp;
PGMASIM.Rs2 = FVEASIM_g0;
PGMASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(LAEASIM_or, A_UNITE(QGMASIM,mode1,1,PGMASIM));
 /* line 177: */
RGMASIM.Rs1 = IWEASIM_sp;
RGMASIM.Imm = ((-OGMASIM_ms_tos)-(5*4));
RGMASIM.Rd = IWEASIM_sp;
ISEASIM_using(DAEASIM_add, A_UNITE(SGMASIM,mode2,2,RGMASIM));
 /* line 178: */
TGMASIM.Rs1 = PXEASIM_fp;
TGMASIM.Imm = (-8);
TGMASIM.Rd = NEGASIM_tempreg1;
ISEASIM_using(JFEASIM_st, A_UNITE(UGMASIM,mode2,2,TGMASIM));
 /* line 179: */
VGMASIM.Rs1 = PXEASIM_fp;
VGMASIM.Imm = (-12);
VGMASIM.Rd = HVEASIM_g1;
ISEASIM_using(JFEASIM_st, A_UNITE(WGMASIM,mode2,2,VGMASIM));
 /* line 180: */
XGMASIM.Rs1 = PXEASIM_fp;
XGMASIM.Imm = (-16);
XGMASIM.Rd = JVEASIM_g2;
ISEASIM_using(JFEASIM_st, A_UNITE(YGMASIM,mode2,2,XGMASIM));
 /* line 181: */
ZGMASIM.Rs1 = PXEASIM_fp;
ZGMASIM.Imm = (-20);
ZGMASIM.Rd = LVEASIM_g3;
ISEASIM_using(JFEASIM_st, A_UNITE(AHMASIM,mode2,2,ZGMASIM));
 /* line 184: */
BHMASIM.Rs1 = KBHASIM_rsource(S, EZGASIM_tos);
BHMASIM.Rs2 = FVEASIM_g0;
BHMASIM.Rd = VVEASIM_o0;
ISEASIM_using(LAEASIM_or, A_UNITE(CHMASIM,mode1,1,BHMASIM));
 /* line 186: */
 /* line 187: */
 /* line 189: */
if ( (L.Lab==(*(&((&(MGMASIM_alien->Labelcallinst))->Lab)))) )
{ 
DHMASIM.Rs1 = REGASIM_callinstpointer;
DHMASIM.Rs2 = TEGASIM_globalpointer;
 /* line 190: */
DHMASIM.Rd = XVEASIM_o1;
 /* line 192: */
ISEASIM_using(TAEASIM_sub, A_UNITE(EHMASIM,mode1,1,DHMASIM));
} 
else
{ 
FHMASIM.Rs1 = KBHASIM_rsource(S, FZGASIM_tos1);
FHMASIM.Rs2 = FVEASIM_g0;
 /* line 193: */
FHMASIM.Rd = XVEASIM_o1;
ISEASIM_using(LAEASIM_or, A_UNITE(GHMASIM,mode1,1,FHMASIM));
} 
 /* line 196: */
CZEASIM_mamovir((*(&(MGMASIM_alien->Evalfn))), JWEASIM_r15);
 /* line 197: */
HHMASIM.Rs1 = JWEASIM_r15;
HHMASIM.Rs2 = EVEASIM_r0;
HHMASIM.Rd = JWEASIM_r15;
PUEASIM_using(BPEASIM_jmpl, A_UNITE(IHMASIM,mode1,1,HHMASIM));
 /* line 198: */
JHMASIM.Imm = 0;
JHMASIM.Rd = FVEASIM_g0;
QQEASIM_using(BZDASIM_nop, JHMASIM);
 /* line 201: */
KHMASIM.Rs1 = PXEASIM_fp;
KHMASIM.Imm = (-20);
KHMASIM.Rd = LVEASIM_g3;
ISEASIM_using(TEEASIM_ld, A_UNITE(LHMASIM,mode2,2,KHMASIM));
 /* line 202: */
MHMASIM.Rs1 = PXEASIM_fp;
MHMASIM.Imm = (-16);
MHMASIM.Rd = JVEASIM_g2;
ISEASIM_using(TEEASIM_ld, A_UNITE(NHMASIM,mode2,2,MHMASIM));
 /* line 203: */
OHMASIM.Rs1 = PXEASIM_fp;
OHMASIM.Imm = (-12);
OHMASIM.Rd = HVEASIM_g1;
ISEASIM_using(TEEASIM_ld, A_UNITE(PHMASIM,mode2,2,OHMASIM));
 /* line 206: */
QHMASIM.Rs1 = PXEASIM_fp;
QHMASIM.Imm = (-8);
QHMASIM.Rd = IWEASIM_sp;
ISEASIM_using(TEEASIM_ld, A_UNITE(RHMASIM,mode2,2,QHMASIM));
 /* line 208: */
 /* line 209: */
 /* line 210: */
SHMASIM = A68_TRUE;
} 
else
{ 
 /* line 211: */
SHMASIM = A68_FALSE;
} 
} 
A_PROC_EXIT(generatecallalien);
return( SHMASIM );
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void TEMASIM(void)   /* initialise DECS kecodegenalienifsparc */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/kecodegenalienifsparc.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/kemassemsparc.m","./mfiles/kecodegenstacksparc.m","./mfiles/kecodegenserversparc.m","/u/model/ella/osif/assoc/mfiles/cif.m","/u/model/ella/ostools/assoc/mfiles/basics.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
KIDASIM();   /* USE kemassemsparc */
ZYGASIM();   /* USE kecodegenstacksparc */
AAFASIM();   /* USE kecodegenserversparc */
JDAAOSI();   /* USE cif */
JSCAOST();   /* USE basics */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/kecodegenalienifsparc.a68";
A_config.translation_time = "Tue Apr  4 11:08:08 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "SEMASIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:08:08 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS kecodegenalienifsparc);
UEAALIB_a68config(LGAALIB_configinfo, XEMASIM);
 /* line 53: */
 /* line 65: */
 /* line 68: */
 /* line 69: */
ZEMASIM_nilalieninfo = (A68_327 *)A68_NIL;
 /* line 70: */
 /* line 79: */
 /* line 80: */
 /* line 81: */
 /* line 82: */
 /* line 83: */
 /* line 84: */
 /* line 85: */
 /* line 91: */
HFMASIM_aliens = AFMASIM_nilalienlist;
 /* line 93: */
 /* line 99: */
 /* line 122: */
 /* line 123: */
 /* line 164: */
 /* line 224: */
A_PROC_EXIT(DECS kecodegenalienifsparc);
} 
#undef NL
/* end of translation of ./a68files/kecodegenalienifsparc.a68 */
