
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
/* UNAME:ZLBAOSI */
#include "Asupport.h"
A_ISTRUCT(A68_CHAR ,16000000,A68t31);
typedef struct A68t31  A68_31 ;    /* STRUCT 16000000 CHAR */
A_ISTRUCT(struct A68t31 *,16000000,A68t32);
typedef struct A68t32  A68_32 ;    /* STRUCT 16000000 REF MODE31 */

A_PROCEDURE(A68_VOID ,A68t33,(struct A68t31 *,A68_VC *),(struct A68t31 *,A68_VC *,void *));
typedef struct A68t33  A68_33 ;    /* PROC(REF MODE31) REF MODE26 */

A_PROCEDURE(A68_CHAR *,A68t34,(A68_VC ),(A68_VC ,void *));
typedef struct A68t34  A68_34 ;    /* PROC(MODE26) REF CHAR */
A_VECTOR(A68_INT ,A68t35);
typedef struct A68t35  A68_35 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_INT *,A68t36,(struct A68t35 ),(struct A68t35 ,void *));
typedef struct A68t36  A68_36 ;    /* PROC(MODE35) REF INT */

A_PROCEDURE(A68_CHAR *,A68t37,(struct A68t31 *),(struct A68t31 *,void *));
typedef struct A68t37  A68_37 ;    /* PROC(REF MODE31) REF CHAR */

A_PROCEDURE(struct A68t31 *,A68t38,(A68_CHAR *),(A68_CHAR *,void *));
typedef struct A68t38  A68_38 ;    /* PROC(REF CHAR) REF MODE31 */

A_PROCEDURE(A68_VOID ,A68t39,(void),(void *));
typedef struct A68t39  A68_39 ;    /* PROC VOID */
struct A68t40{
A68_BITS * Cp;
struct A68t31 * Env;
};
typedef struct A68t40  A68_40 ;    /* STRUCT(REF BITS,REF MODE31)  */

A_PROCEDURE(struct A68t40 *,A68t41,(struct A68t39 *),(struct A68t39 *,void *));
typedef struct A68t41  A68_41 ;    /* PROC(REF MODE39) REF MODE40 */

A_PROCEDURE(A68_VOID ,A68t42,(struct A68t39 ,struct A68t40 *),(struct A68t39 ,struct A68t40 *,void *));
typedef struct A68t42  A68_42 ;    /* PROC(MODE39) MODE40 */

A_PROCEDURE(A68_VOID ,A68t43,(A68_INT ),(A68_INT ,void *));
typedef struct A68t43  A68_43 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t44,(struct A68t43 ,struct A68t40 *),(struct A68t43 ,struct A68t40 *,void *));
typedef struct A68t44  A68_44 ;    /* PROC(MODE43) MODE40 */

A_PROCEDURE(A68_VOID ,A68t45,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t45  A68_45 ;    /* PROC(MODE26) MODE26 */
struct A68t46{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t47 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t46  A68_46 ;    /* STRUCT(INT,REF MODE47,BITS)  */
A_VECTOR(struct A68t49 ,A68t48);
typedef struct A68t48  A68_48 ;    /* VECTOR [] MODE49 */
struct A68t49{
struct A68t46  Msgno;
A68_VC  Text;
};
typedef struct A68t49  A68_49 ;    /* STRUCT(MODE46,REF MODE26)  */
struct A68t47{
A68_VC  Name;
struct A68t48  Messages;
};
typedef struct A68t47  A68_47 ;    /* STRUCT(REF MODE26,REF MODE48)  */

A_PROCEDURE(A68_VOID ,A68t50,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t50  A68_50 ;    /* PROC(BOOL) MODE26 */
A_VECTOR(A68_VC ,A68t51);
typedef struct A68t51  A68_51 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_VOID ,A68t52,(A68_BOOL ,struct A68t51 *),(A68_BOOL ,struct A68t51 *,void *));
typedef struct A68t52  A68_52 ;    /* PROC(BOOL) MODE51 */

A_PROCEDURE(A68_VOID ,A68t53,(struct A68t46 ,struct A68t51 ),(struct A68t46 ,struct A68t51 ,void *));
typedef struct A68t53  A68_53 ;    /* PROC(MODE46,MODE51) VOID */
A_VECTOR(struct A68t56 ,A68t55);
typedef struct A68t55  A68_55 ;    /* VECTOR [] MODE56 */
struct A68t56{
A68_INT  Number;
A_PAD_INT(PAD_3)
A68_BITS  Class;
A_PAD_BITS(PAD_4)
A68_VC  Text;
};
typedef struct A68t56  A68_56 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t54{
A68_VC  Name;
struct A68t48  Messages;
A68_BOOL * Initialised;
struct A68t55  Setup;
};
typedef struct A68t54  A68_54 ;    /* STRUCT(MODE26,REF MODE48,REF BOOL,MODE55)  */

A_PROCEDURE(A68_VOID ,A68t57,(A68_BOOL ,struct A68t54 *),(A68_BOOL ,struct A68t54 *,void *));
typedef struct A68t57  A68_57 ;    /* PROC(BOOL) MODE54 */

A_PROCEDURE(A68_VOID ,A68t58,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t58  A68_58 ;    /* PROC(MODE26) REF MODE26 */
A_VECTOR(A68_VC ,A68t59);
typedef struct A68t59  A68_59 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t60,(struct A68t51 ,struct A68t59 *),(struct A68t51 ,struct A68t59 *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(MODE51) MODE59 */

A_PROCEDURE(A68_VOID ,A68t61,(struct A68t59 ,struct A68t51 *),(struct A68t59 ,struct A68t51 *,void *));
typedef struct A68t61  A68_61 ;    /* PROC(MODE59) MODE51 */
struct A68t63 ;

A_PROCEDURE(A68_BOOL ,A68t62,(struct A68t63 ),(struct A68t63 ,void *));
typedef struct A68t62  A68_62 ;    /* PROC(MODE63) BOOL */
struct A68t63 { A68_INT mode; union {
struct A68t46  mode1;
struct A68t49  mode2;
} data; };
typedef struct A68t63  A68_63 ;    /* UNION(MODE46,MODE49)  */

A_PROCEDURE(A68_INT ,A68t64,(struct A68t46 ),(struct A68t46 ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(MODE46) INT */

A_PROCEDURE(A68_VOID ,A68t65,(A68_INT ,struct A68t54 ,struct A68t46 *),(A68_INT ,struct A68t54 ,struct A68t46 *,void *));
typedef struct A68t65  A68_65 ;    /* PROC(INT,MODE54) MODE46 */

A_PROCEDURE(A68_BOOL ,A68t66,(struct A68t46 ,struct A68t54 ),(struct A68t46 ,struct A68t54 ,void *));
typedef struct A68t66  A68_66 ;    /* PROC(MODE46,MODE54) BOOL */

A_PROCEDURE(A68_VOID ,A68t67,(struct A68t46 ,struct A68t51 ,struct A68t49 *),(struct A68t46 ,struct A68t51 ,struct A68t49 *,void *));
typedef struct A68t67  A68_67 ;    /* PROC(MODE46,MODE51) MODE49 */

A_PROCEDURE(A68_VOID ,A68t68,(A68_VC *),(A68_VC *,void *));
typedef struct A68t68  A68_68 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t69,(A68_INT ,struct A68t51 ,struct A68t53 ),(A68_INT ,struct A68t51 ,struct A68t53 ,void *));
typedef struct A68t69  A68_69 ;    /* PROC(INT,MODE51,MODE53) VOID */

A_PROCEDURE(A68_INT *,A68t70,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t70  A68_70 ;    /* PROC(REF INT,MODE26) REF INT */

A_PROCEDURE(A68_VOID ,A68t71,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t71  A68_71 ;    /* PROC(REF MODE26,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t72,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t72  A68_72 ;    /* PROC(REF MODE26,CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t73,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t73  A68_73 ;    /* PROC(MODE26,CHAR) MODE26 */

A_PROCEDURE(A68_VOID ,A68t74,(struct A68t51 ,A68_VC *),(struct A68t51 ,A68_VC *,void *));
typedef struct A68t74  A68_74 ;    /* PROC(MODE51) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t75,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t75  A68_75 ;    /* PROC(CHAR,MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t76,(A68_VC ,A68_CHAR ),(A68_VC ,A68_CHAR ,void *));
typedef struct A68t76  A68_76 ;    /* PROC(REF MODE26,CHAR) VOID */
A_ISTRUCT(A68_CHAR ,4,A68t77);
typedef struct A68t77  A68_77 ;    /* STRUCT 4 CHAR */

A_PROCEDURE(struct A68t77 ,A68t78,(A68_INT ),(A68_INT ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(INT) MODE77 */

A_PROCEDURE(A68_INT ,A68t79,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t79  A68_79 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_VOID ,A68t80,(A68_CHAR ,A68_VC ,A68_VC *),(A68_CHAR ,A68_VC ,A68_VC *,void *));
typedef struct A68t80  A68_80 ;    /* PROC(CHAR,REF MODE26) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t81,(A68_VC ),(A68_VC ,void *));
typedef struct A68t81  A68_81 ;    /* PROC(MODE26) INT */

A_PROCEDURE(A68_BITS ,A68t82,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t82  A68_82 ;    /* PROC(BITS,BITS) BITS */

A_PROCEDURE(A68_LBITS ,A68t83,(A68_LBITS ,A68_LBITS ),(A68_LBITS ,A68_LBITS ,void *));
typedef struct A68t83  A68_83 ;    /* PROC(LONG BITS,LONG BITS) LONG BITS */

A_PROCEDURE(A68_BITS *,A68t84,(A68_BITS *,A68_BITS ),(A68_BITS *,A68_BITS ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(REF BITS,BITS) REF BITS */

A_PROCEDURE(A68_VOID ,A68t85,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t85  A68_85 ;    /* PROC(INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t86,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t86  A68_86 ;    /* PROC(INT,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t87,(A68_LINT ,A68_INT ,A68_VC *),(A68_LINT ,A68_INT ,A68_VC *,void *));
typedef struct A68t87  A68_87 ;    /* PROC(LONG INT,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t88,(A68_CHAR ,A68_INT *,A68_VC ),(A68_CHAR ,A68_INT *,A68_VC ,void *));
typedef struct A68t88  A68_88 ;    /* PROC(CHAR,REF INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t89,(A68_LBITS ,A68_INT ,A68_VC *),(A68_LBITS ,A68_INT ,A68_VC *,void *));
typedef struct A68t89  A68_89 ;    /* PROC(LONG BITS,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t90,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t90  A68_90 ;    /* PROC(REF INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t91,(struct A68t39 ),(struct A68t39 ,void *));
typedef struct A68t91  A68_91 ;    /* PROC(MODE39) VOID */

A_PROCEDURE(A68_VOID ,A68t92,(A68_VC ),(A68_VC ,void *));
typedef struct A68t92  A68_92 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t93,(struct A68t92 ),(struct A68t92 ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(MODE92) VOID */

A_PROCEDURE(A68_VOID ,A68t94,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t94  A68_94 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,54,A68t95);
typedef struct A68t95  A68_95 ;    /* STRUCT 54 CHAR */

A_PROCEDURE(A68_BITS *,A68t96,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t96  A68_96 ;    /* PROC(MODE26,MODE26) REF BITS */

A_PROCEDURE(A68_INT ,A68t97,(A68_BITS *),(A68_BITS *,void *));
typedef struct A68t97  A68_97 ;    /* PROC(REF BITS) INT */

A_PROCEDURE(A68_INT ,A68t98,(A68_VC ,A68_INT ,A68_INT ,A68_BITS *),(A68_VC ,A68_INT ,A68_INT ,A68_BITS *,void *));
typedef struct A68t98  A68_98 ;    /* PROC(REF MODE26,INT,INT,REF BITS) INT */

A_PROCEDURE(struct A68t31 *,A68t99,(A68_VC ,A68_INT ,A68_BITS *),(A68_VC ,A68_INT ,A68_BITS *,void *));
typedef struct A68t99  A68_99 ;    /* PROC(MODE26,INT,REF BITS) REF MODE31 */

A_PROCEDURE(A68_INT ,A68t100,(A68_VC ,A68_INT ,A68_INT ,A68_BITS *),(A68_VC ,A68_INT ,A68_INT ,A68_BITS *,void *));
typedef struct A68t100  A68_100 ;    /* PROC(MODE26,INT,INT,REF BITS) INT */

A_PROCEDURE(A68_INT ,A68t101,(A68_BITS *,A68_LINT ,A68_INT ),(A68_BITS *,A68_LINT ,A68_INT ,void *));
typedef struct A68t101  A68_101 ;    /* PROC(REF BITS,LONG INT,INT) INT */

A_PROCEDURE(A68_LINT ,A68t102,(A68_BITS *),(A68_BITS *,void *));
typedef struct A68t102  A68_102 ;    /* PROC(REF BITS) LONG INT */

A_PROCEDURE(A68_INT ,A68t103,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t103  A68_103 ;    /* PROC(MODE26,MODE26) INT */

A_PROCEDURE(struct A68t31 *,A68t104,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t104  A68_104 ;    /* PROC(MODE26,MODE26) REF MODE31 */

A_PROCEDURE(A68_VOID ,A68t105,(struct A68t31 *),(struct A68t31 *,void *));
typedef struct A68t105  A68_105 ;    /* PROC(REF MODE31) VOID */
struct A68t106{
A68_INT  Stat;
A_PAD_INT(PAD_5)
};
typedef struct A68t106  A68_106 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_INT ,A68t107,(A68_INT ,struct A68t106 *),(A68_INT ,struct A68t106 *,void *));
typedef struct A68t107  A68_107 ;    /* PROC(INT,REF MODE106) INT */

A_PROCEDURE(A68_INT ,A68t108,(A68_VC ,struct A68t106 *),(A68_VC ,struct A68t106 *,void *));
typedef struct A68t108  A68_108 ;    /* PROC(MODE26,REF MODE106) INT */

A_PROCEDURE(A68_BITS *,A68t109,(A68_VC ),(A68_VC ,void *));
typedef struct A68t109  A68_109 ;    /* PROC(MODE26) REF BITS */

A_PROCEDURE(struct A68t31 *,A68t110,(A68_BITS *),(A68_BITS *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(REF BITS) REF MODE31 */

A_PROCEDURE(struct A68t31 *,A68t111,(A68_INT ),(A68_INT ,void *));
typedef struct A68t111  A68_111 ;    /* PROC(INT) REF MODE31 */
struct A68t112{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t112  A68_112 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t113{
struct A68t77  Access;
A_PAD_ISTRUCT(A68_77 ,PAD_6)
};
typedef struct A68t113  A68_113 ;    /* STRUCT(MODE77)  */

A_PROCEDURE(A68_BOOL ,A68t114,(struct A68t113 ,struct A68t113 ),(struct A68t113 ,struct A68t113 ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(MODE113,MODE113) BOOL */
struct A68t115{
A68_INT  Status;
A_PAD_INT(PAD_7)
};
typedef struct A68t115  A68_115 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_BOOL ,A68t116,(struct A68t115 ,struct A68t115 ),(struct A68t115 ,struct A68t115 ,void *));
typedef struct A68t116  A68_116 ;    /* PROC(MODE115,MODE115) BOOL */

A_PROCEDURE(A68_VOID ,A68t117,(struct A68t112 *,A68_VC *),(struct A68t112 *,A68_VC *,void *));
typedef struct A68t117  A68_117 ;    /* PROC(REF MODE112) MODE26 */
A_ISTRUCT(A68_CHAR ,1,A68t118);
typedef struct A68t118  A68_118 ;    /* STRUCT 0 CHAR */

A_PROCEDURE(struct A68t112 *,A68t119,(A68_VC ,struct A68t113 ,struct A68t53 ),(A68_VC ,struct A68t113 ,struct A68t53 ,void *));
typedef struct A68t119  A68_119 ;    /* PROC(MODE26,MODE113,MODE53) REF MODE112 */
A_ISTRUCT(A68_VC ,2,A68t120);
typedef struct A68t120  A68_120 ;    /* STRUCT 2 MODE26 */

A_PROCEDURE(A68_VOID ,A68t121,(struct A68t112 *,struct A68t53 ),(struct A68t112 *,struct A68t53 ,void *));
typedef struct A68t121  A68_121 ;    /* PROC(REF MODE112,MODE53) VOID */

A_PROCEDURE(A68_VOID ,A68t122,(struct A68t112 *,A68_VC ,A68_INT *,struct A68t53 ,struct A68t115 *),(struct A68t112 *,A68_VC ,A68_INT *,struct A68t53 ,struct A68t115 *,void *));
typedef struct A68t122  A68_122 ;    /* PROC(REF MODE112,REF MODE26,REF INT,MODE53) MODE115 */

A_PROCEDURE(A68_VOID ,A68t123,(struct A68t112 *,A68_VC ,struct A68t53 ,struct A68t115 *),(struct A68t112 *,A68_VC ,struct A68t53 ,struct A68t115 *,void *));
typedef struct A68t123  A68_123 ;    /* PROC(REF MODE112,MODE26,MODE53) MODE115 */

A_PROCEDURE(A68_VOID ,A68t124,(struct A68t112 *,A68_LINT ,struct A68t53 ,struct A68t115 *),(struct A68t112 *,A68_LINT ,struct A68t53 ,struct A68t115 *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(REF MODE112,LONG INT,MODE53) MODE115 */

A_PROCEDURE(A68_VOID ,A68t125,(struct A68t112 *,A68_LINT *,struct A68t53 ,struct A68t115 *),(struct A68t112 *,A68_LINT *,struct A68t53 ,struct A68t115 *,void *));
typedef struct A68t125  A68_125 ;    /* PROC(REF MODE112,REF LONG INT,MODE53) MODE115 */
A_ISTRUCT(A68_CHAR ,17,A68t126);
typedef struct A68t126  A68_126 ;    /* STRUCT 17 CHAR */

A_PROCEDURE(A68_VOID ,A68t127,(struct A68t112 *,struct A68t53 ,struct A68t115 *),(struct A68t112 *,struct A68t53 ,struct A68t115 *,void *));
typedef struct A68t127  A68_127 ;    /* PROC(REF MODE112,MODE53) MODE115 */

A_PROCEDURE(A68_VOID ,A68t128,(A68_VC ,struct A68t53 ,struct A68t115 *),(A68_VC ,struct A68t53 ,struct A68t115 *,void *));
typedef struct A68t128  A68_128 ;    /* PROC(MODE26,MODE53) MODE115 */

A_PROCEDURE(A68_VOID ,A68t129,(A68_VC ,A68_VC ,struct A68t53 ,struct A68t115 *),(A68_VC ,A68_VC ,struct A68t53 ,struct A68t115 *,void *));
typedef struct A68t129  A68_129 ;    /* PROC(MODE26,MODE26,MODE53) MODE115 */
A_ISTRUCT(A68_CHAR ,11,A68t130);
typedef struct A68t130  A68_130 ;    /* STRUCT 11 CHAR */

A_PROCEDURE(A68_VOID ,A68t131,(A68_VC ,A68_VC ,struct A68t53 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t53 ,A68_VC *,void *));
typedef struct A68t131  A68_131 ;    /* PROC(MODE26,MODE26,MODE53) MODE26 */
A_ISTRUCT(A68_CHAR ,18,A68t132);
typedef struct A68t132  A68_132 ;    /* STRUCT 18 CHAR */
struct A68t133{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_8)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_9)
A68_SINT  Device;
A_PAD_SINT(PAD_10)
A68_SINT  Links;
A_PAD_SINT(PAD_11)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_12)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_13)
A68_LINT  Size;
A_PAD_LINT(PAD_14)
A68_LINT  Accessed;
A_PAD_LINT(PAD_15)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_16)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_17)
};
typedef struct A68t133  A68_133 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */

A_PROCEDURE(struct A68t133 *,A68t134,(struct A68t133 *),(struct A68t133 *,void *));
typedef struct A68t134  A68_134 ;    /* PROC(REF MODE133) REF MODE133 */
struct A68t135 { A68_INT mode; union {
struct A68t112 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t135  A68_135 ;    /* UNION(REF MODE112,MODE26)  */

A_PROCEDURE(struct A68t133 *,A68t136,(struct A68t135 ,struct A68t53 ),(struct A68t135 ,struct A68t53 ,void *));
typedef struct A68t136  A68_136 ;    /* PROC(MODE135,MODE53) REF MODE133 */
A_ISTRUCT(A68_CHAR ,51,A68t137);
typedef struct A68t137  A68_137 ;    /* STRUCT 51 CHAR */
A_ISTRUCT(A68_CHAR ,61,A68t138);
typedef struct A68t138  A68_138 ;    /* STRUCT 61 CHAR */
A_ISTRUCT(A68_VC ,3,A68t139);
typedef struct A68t139  A68_139 ;    /* STRUCT 3 MODE26 */
A_ISTRUCT(A68_CHAR ,37,A68t140);
typedef struct A68t140  A68_140 ;    /* STRUCT 37 CHAR */

A_PROCEDURE(A68_BOOL ,A68t141,(struct A68t112 *),(struct A68t112 *,void *));
typedef struct A68t141  A68_141 ;    /* PROC(REF MODE112) BOOL */

A_PROCEDURE(A68_BITS *,A68t142,(A68_VC ,struct A68t53 ),(A68_VC ,struct A68t53 ,void *));
typedef struct A68t142  A68_142 ;    /* PROC(MODE26,MODE53) REF BITS */

A_PROCEDURE(A68_VOID ,A68t143,(A68_BITS *,struct A68t53 ),(A68_BITS *,struct A68t53 ,void *));
typedef struct A68t143  A68_143 ;    /* PROC(REF BITS,MODE53) VOID */

A_PROCEDURE(A68_VOID ,A68t144,(A68_BITS *,struct A68t53 ,A68_VC *),(A68_BITS *,struct A68t53 ,A68_VC *,void *));
typedef struct A68t144  A68_144 ;    /* PROC(REF BITS,MODE53) REF MODE26 */
A_ISTRUCT(A68_CHAR ,7,A68t145);
typedef struct A68t145  A68_145 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t146);
typedef struct A68t146  A68_146 ;    /* STRUCT 8 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  ABAALIB_a68init(struct A68t39 );
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from usefulops --- */
extern A68_VOID  JBAAOSI_concat(struct A68t51 ,A68_VC *);
extern A68_VOID  ZAAAOSI_makervc(A68_VC ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- Imports from oserrors --- */
#include <errno.h>

#define XFBAOSI_errno errno
extern A68_VOID  BLBAOSI_errnotext(A68_VC *);
extern A68_VOID  YHBAOSI_osifmessage(A68_INT ,struct A68t51 ,struct A68t53 );
/* --- End of imports from oserrors --- */


/* --- Imports from messageproc --- */
extern A68_46  SHAAOSI_system;
extern A68_46  WHAAOSI_user;
/* --- End of imports from messageproc --- */


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
extern A68_VOID  UDAAOSI_cstringtorvc(struct A68t31 *,A68_VC *);
/* --- End of imports from cif --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void WPAAOSI(void);   /* usefulops */
extern void SFBAOSI(void);   /* oserrors */
extern void JFAAOSI(void);   /* messageproc */
extern void JDAAOSI(void);   /* cif */
/* --- end of DECS initialisation functions --- */
static A68_95   DMBAOSI = {"$Id: osfiles.a68,v 34.3 1995/03/29 13:01:35 ella Exp $"}; 
A_GISVEC(A68_VC ,EMBAOSI,DMBAOSI,54)
A68_BITS * FMBAOSI_null_cfileptr;
A68_BITS * GMBAOSI_null_dirptr;
#define HMBAOSI_null_ccharptr (A68_CHAR *)A68_NIL
#include <stdio.h>
#define FOPEN(filename,mode) A_fileptr_FILEPTR(fopen(A_VC_charptr(filename),A_VC_charptr(mode)))

#define IMBAOSI_fopen FOPEN
extern int fclose(); /* #include <stdio.h> */
#define FCLOSE(stream) A_int_INT(fclose(A_FILEPTR_fileptr(stream)))

#define JMBAOSI_fclose FCLOSE
#ifdef sunosgcc
   #include <sys/stdtypes.h>
#else
   #include <sys/types.h>
#endif
extern size_t fread(); /* #include <stdio.h>*/ 
#define FREAD(ptr,size,nmemb,stream) \
  A_size_t_INT(fread(A_VC_charptr(ptr),A_INT_size_t(size),A_INT_size_t(nmemb),A_FILEPTR_fileptr(stream)))

#define KMBAOSI_fread FREAD
#include <stdio.h>
#define FERROR(stream) A_int_INT(ferror(A_FILEPTR_fileptr(stream)))

#define LMBAOSI_ferror FERROR
#include <stdio.h>
#define FEOF(stream) A_int_INT(feof(A_FILEPTR_fileptr(stream)))

#define MMBAOSI_feof FEOF
#include <stdio.h>
#define FGETS(s,n,stream) (void *)(fgets(A_VC_charptr(s),A_INT_int(n),A_FILEPTR_fileptr(stream)))

#define NMBAOSI_fgets FGETS
#ifdef sunosgcc
   #include <sys/stdtypes.h>
#else
   #include <sys/types.h>
#endif
extern size_t fwrite(); /* #include <stdio.h> */
#define FWRITE(ptr,size,nmemb,stream) \
  A_size_t_INT(fwrite(A_VC_charptr(ptr),A_INT_size_t(size),A_INT_size_t(nmemb),A_FILEPTR_fileptr(stream)))

#define OMBAOSI_fwrite FWRITE
extern int fseek(); /* #include <stdio.h> */
#define FSEEK(stream,offset,whence) \
  A_int_INT(fseek(A_FILEPTR_fileptr(stream),A_LINT_long(offset),A_INT_int(whence)))

#define PMBAOSI_fseek FSEEK
#include <stdio.h>
#define FTELL(stream) A_long_LINT(ftell(A_FILEPTR_fileptr(stream)))

#define QMBAOSI_ftell FTELL
#include <stdio.h>

#define RMBAOSI_seek_set A_int_INT(SEEK_SET)
extern int fflush(); /* #include <stdio.h> */
#define FFLUSH(stream) A_int_INT(fflush(A_FILEPTR_fileptr(stream)))

#define SMBAOSI_fflush FFLUSH
#include <unistd.h>
#define UNLINK(path) A_int_INT(unlink(A_VC_charptr(path)))

#define TMBAOSI_unlink UNLINK
#include <stdio.h>
#define RENAME(old,new) A_int_INT(rename(A_VC_charptr(old),A_VC_charptr(new)))

#define UMBAOSI_rename RENAME
#include <stdio.h>
#define TEMPNAM(dir,pfx) (void *)(tempnam(A_VC_charptr(dir),A_VC_charptr(pfx)))

#define VMBAOSI_tempnam TEMPNAM
#include <stdlib.h>

#define WMBAOSI_free free
#include <stdio.h>
#define FILENO(stream) A_int_INT(fileno(A_FILEPTR_fileptr(stream)))

#define XMBAOSI_fileno FILENO
#include <sys/stat.h>
#define FSTAT(fildes,buf) A_int_INT(fstat(A_INT_int(fildes),(buf)))

#define YMBAOSI_fstat FSTAT
#include <sys/stat.h>
#define STAT(path,buf) A_int_INT(stat(A_VC_charptr(path),(buf)))

#define ZMBAOSI_stat STAT
#include <sys/types.h>
#include <dirent.h>
#define OPENDIR(dirname) A_dirptr_DIRPTR(opendir(A_VC_charptr(dirname)))

#define ANBAOSI_opendir OPENDIR
#include <sys/types.h>
#include <dirent.h>
#define CLOSEDIR(dirp) A_int_INT(closedir(A_DIRPTR_dirptr(dirp)))

#define BNBAOSI_closedir CLOSEDIR
#include <sys/types.h>
#include <dirent.h>
A_STATIC char * A_readdir(dir) DIR *dir;
{ struct dirent *d =  readdir(dir);
  if( d == (struct dirent *)NULL ) return (char *)NULL;
  return d->d_name;
}
#define READDIR(dirp) (void *)(A_readdir(A_DIRPTR_dirptr(dirp)))

#define CNBAOSI_readdir READDIR
#include <unistd.h>
#define TTYNAME(fildes) ((void *)ttyname(A_INT_int(fildes)))

#define DNBAOSI_ttyname TTYNAME
#include <errno.h>

#define ENBAOSI_eacces EACCES
#include <errno.h>

#define FNBAOSI_enoent ENOENT
#include <errno.h>

#define GNBAOSI_enotdir ENOTDIR
A68_112 * HNBAOSI_nil_file;
A68_112 * INBAOSI_stdin;
A68_112 * JNBAOSI_stdout;
A68_112 * KNBAOSI_stderr;
static A68_113  LNBAOSI_aa;
static A68_77   MNBAOSI = {"r\0\0\000"}; 
A68_113  PNBAOSI_read_access;
static A68_77   QNBAOSI = {"w\0\0\000"}; 
A68_113  TNBAOSI_write_access;
static A68_77   UNBAOSI = {"a\0\0\000"}; 
A68_113  XNBAOSI_append_access;
static A68_77   YNBAOSI = {"r+\0\000"}; 
A68_113  BOBAOSI_update_access;
static A68_77   COBAOSI = {"w+\0\000"}; 
A68_113  FOBAOSI_update_truncate_access;
static A68_77   GOBAOSI = {"a+\0\000"}; 
A68_113  JOBAOSI_update_append_access;
static A68_115  APBAOSI_tt;
A68_115  DPBAOSI_io_ok;
A68_115  GPBAOSI_io_eof;
A68_115  JPBAOSI_io_error;
A68_115  MPBAOSI_io_no_newline;
#define VPBAOSI_newline_char '\012'
#define WPBAOSI_null_char '\000'
static A68_118   ZPBAOSI = {""}; 
A_GISVEC(A68_VC ,BQBAOSI,ZPBAOSI,0)
static A68_126   DTBAOSI = {"get_file_position"}; 
A_GISVEC(A68_VC ,ETBAOSI,DTBAOSI,17)
static A68_126   ITBAOSI = {"get_file_position"}; 
A_GISVEC(A68_VC ,JTBAOSI,ITBAOSI,17)
static A68_130   JUBAOSI = {"rename_file"}; 
A_GISVEC(A68_VC ,KUBAOSI,JUBAOSI,11)
static A68_132   WUBAOSI = {"make_temp_filename"}; 
A_GISVEC(A68_VC ,XUBAOSI,WUBAOSI,18)
static A68_118   AVBAOSI = {""}; 
A_GISVEC(A68_VC ,CVBAOSI,AVBAOSI,0)
A68_133 * GVBAOSI_nil_file_details;
A_STATIC struct stat statbuffer;

#define HVBAOSI_statbuf statbuffer
static A68_137   SVBAOSI = {"get_file_details:  'fstat' failed on file parameter"}; 
A_GISVEC(A68_VC ,TVBAOSI,SVBAOSI,51)
static A68_138   AWBAOSI = {"get_file_details:  search permission is denied for filename \""}; 
A_GISVEC(A68_VC ,BWBAOSI,AWBAOSI,61)
static A68_140   IWBAOSI = {"get_file_details:  'stat' failed on \""}; 
A_GISVEC(A68_VC ,JWBAOSI,IWBAOSI,37)
#include <stdio.h>
#define STDIN (*(A_fileptr_FILEPTR(stdin)))

#define ZXBAOSI_stdiostdin STDIN
#include <stdio.h>
#define STDOUT (*(A_fileptr_FILEPTR(stdout)))

#define AYBAOSI_stdiostdout STDOUT
#include <stdio.h>
#define STDERR (*(A_fileptr_FILEPTR(stderr)))

#define BYBAOSI_stdiostderr STDERR
static A68_145   DYBAOSI = {"<stdin>"}; 
A_GISVEC(A68_VC ,EYBAOSI,DYBAOSI,7)
static A68_146   IYBAOSI = {"<stdout>"}; 
A_GISVEC(A68_VC ,JYBAOSI,IYBAOSI,8)
static A68_146   NYBAOSI = {"<stderr>"}; 
A_GISVEC(A68_VC ,OYBAOSI,NYBAOSI,8)

A_STATIC A68_BOOL  MOBAOSI_(A68_113  A, A68_113  B);

A_STATIC A68_BOOL  UOBAOSI_(A68_113  A, A68_113  B);

A68_BOOL  PPBAOSI_(A68_115  A, A68_115  B);

A68_BOOL  TPBAOSI_(A68_115  A, A68_115  B);

A68_VOID  YPBAOSI_file_name(A68_112 * File, A68_VC  *ReturnedValue);

A68_112 * FQBAOSI_open_file(A68_VC  Name, A68_113  Access, A68_53  Msg);

A68_VOID  XQBAOSI_close_file(A68_112 * File, A68_53  Msg);

A68_VOID  HRBAOSI_read_buffer(A68_112 * File, A68_VC  Buffer, A68_INT * Charsread, A68_53  Msg, A68_115  *ReturnedValue);

A68_VOID  SRBAOSI_read_line(A68_112 * File, A68_VC  Buffer, A68_INT * Charsread, A68_53  Msg, A68_115  *ReturnedValue);

A68_VOID  JSBAOSI_write_buffer(A68_112 * File, A68_VC  Buffer, A68_53  Msg, A68_115  *ReturnedValue);

A68_VOID  TSBAOSI_set_file_position(A68_112 * File, A68_LINT  Byteoffset, A68_53  Msg, A68_115  *ReturnedValue);

A68_VOID  CTBAOSI_get_file_position(A68_112 * File, A68_LINT * Byteoffset, A68_53  Msg, A68_115  *ReturnedValue);

A68_VOID  NTBAOSI_update_disk(A68_112 * File, A68_53  Msg, A68_115  *ReturnedValue);

A68_VOID  VTBAOSI_delete_file(A68_VC  Filename, A68_53  Msg, A68_115  *ReturnedValue);

A68_VOID  EUBAOSI_rename_file(A68_VC  Oldname, A68_VC  Newname, A68_53  Msg, A68_115  *ReturnedValue);

A68_VOID  QUBAOSI_make_temp_filename(A68_VC  Directory, A68_VC  File_prefix, A68_53  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_133 * JVBAOSI_(A68_133 * F);

A68_133 * NVBAOSI_get_file_details(A68_135  File, A68_53  Msg);

A68_BOOL  RWBAOSI_is_terminal(A68_112 * F);

A68_BITS * VWBAOSI_open_directory(A68_VC  Name, A68_53  Msg);

A68_VOID  EXBAOSI_close_directory(A68_BITS * D, A68_53  Msg);

A68_VOID  KXBAOSI_get_next_dir_entry(A68_BITS * D, A68_53  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  YXBAOSI_init_osfiles(void);

A_STATIC A68_BOOL  MOBAOSI_(A68_113  A, A68_113  B)
{ 
A68_BOOL  NOBAOSI;  /* clause result */
A68_VC  OOBAOSI;  /* OPERATORS - istruct -> vector */
A68_77  POBAOSI;  /* OPERATORS - istruct -> vector */
A68_VC  QOBAOSI;  /* OPERATORS - istruct -> vector */
A68_77  ROBAOSI;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(=);
POBAOSI = A.Access ;
ROBAOSI = B.Access ;
NOBAOSI = A_VC_EQ(A_HISVEC(OOBAOSI,POBAOSI,4,A68_CHAR ),A_HISVEC(QOBAOSI,ROBAOSI,4,A68_CHAR ));
A_PROC_EXIT(=);
return( NOBAOSI );
} 
#undef NL

A_STATIC A68_BOOL  UOBAOSI_(A68_113  A, A68_113  B)
{ 
A68_BOOL  VOBAOSI;  /* clause result */
A68_VC  WOBAOSI;  /* OPERATORS - istruct -> vector */
A68_77  XOBAOSI;  /* OPERATORS - istruct -> vector */
A68_VC  YOBAOSI;  /* OPERATORS - istruct -> vector */
A68_77  ZOBAOSI;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(/=);
XOBAOSI = A.Access ;
ZOBAOSI = B.Access ;
VOBAOSI = A_VC_EQ(A_HISVEC(WOBAOSI,XOBAOSI,4,A68_CHAR ),A_HISVEC(YOBAOSI,ZOBAOSI,4,A68_CHAR ));
A_PROC_EXIT(/=);
return( VOBAOSI );
} 
#undef NL

A68_BOOL  PPBAOSI_(A68_115  A, A68_115  B)
{ 
A68_BOOL  QPBAOSI;  /* clause result */
A_PROC_ENTRY(=);
QPBAOSI = (A.Status==B.Status);
A_PROC_EXIT(=);
return( QPBAOSI );
} 
#undef NL

A68_BOOL  TPBAOSI_(A68_115  A, A68_115  B)
{ 
A68_BOOL  UPBAOSI;  /* clause result */
A_PROC_ENTRY(/=);
UPBAOSI = (A.Status!=B.Status);
A_PROC_EXIT(/=);
return( UPBAOSI );
} 
#undef NL

A68_VOID  YPBAOSI_file_name(A68_112 * File, A68_VC  *ReturnedValue)
{ 
A68_VC  AQBAOSI;  /* clause result */
A_PROC_ENTRY(file_name);
 /* line 265: */
if ( (File==HNBAOSI_nil_file) )
{ 
AQBAOSI = BQBAOSI;
} 
else
{ 
AQBAOSI = (*(&(File->Name)));
} 
A_PROC_EXIT(file_name);
*ReturnedValue = (AQBAOSI);
return;
} 
#undef NL
 /* line 273: */
 /* line 274: */

A68_112 * FQBAOSI_open_file(A68_VC  Name, A68_113  Access, A68_53  Msg)
{ 
A68_BITS * JQBAOSI;  /* clause result */
A68_VC  KQBAOSI;  /* OPERATORS - istruct -> vector */
A68_77  LQBAOSI;  /* OPERATORS - istruct -> vector */
A68_VC  MQBAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BITS * NQBAOSI_stdiofile;
A68_120  OQBAOSI;  /* collateral clause result */
A68_VC  PQBAOSI;  /* avoid structure result */
A68_51  QQBAOSI;  /* OPERATORS - istruct -> vector */
A68_112  RQBAOSI;  /* collateral clause result */
A68_VC  SQBAOSI;  /* avoid structure result */
A68_112 * TQBAOSI;  /* clause result */
A68_112 * UQBAOSI;  /* YIELD */
A_PROC_ENTRY(open_file);
 /* line 275: */
 /* line 276: */
{ 
{ 
XFBAOSI_errno = 0;
LQBAOSI = Access.Access ;
JQBAOSI = IMBAOSI_fopen(A_VC_PLUS(Name,A_HVEC(MQBAOSI,'\000',A68_CHAR )), A_HISVEC(KQBAOSI,LQBAOSI,4,A68_CHAR ));
} 
NQBAOSI_stdiofile = JQBAOSI;
 /* line 278: */
 /* line 279: */
 /* line 280: */
 /* line 281: */
if ( (NQBAOSI_stdiofile==FMBAOSI_null_cfileptr) )
{ 
OQBAOSI.data[0] = Name;
BLBAOSI_errnotext(  &PQBAOSI );
OQBAOSI.data[1] = PQBAOSI;
YHBAOSI_osifmessage(2, A_HISVEC(QQBAOSI,OQBAOSI,2,A68_VC ), Msg);
 /* line 282: */
 /* line 283: */
goto IQBAOSI_fault;
} 
 /* line 285: */
ZAAAOSI_makervc( Name, &SQBAOSI );
RQBAOSI.Name = SQBAOSI;
 /* line 286: */
RQBAOSI.Stdiofile = NQBAOSI_stdiofile;
 /* line 287: */
UQBAOSI = A_HEAP(A68_112 ) ;
(*UQBAOSI) = RQBAOSI ;
TQBAOSI = UQBAOSI;
goto GQBAOSI;
IQBAOSI_fault:
 /* line 289: */
TQBAOSI = HNBAOSI_nil_file;
GQBAOSI: ;
} 
A_PROC_EXIT(open_file);
return( TQBAOSI );
} 
#undef NL
 /* line 298: */

A68_VOID  XQBAOSI_close_file(A68_112 * File, A68_53  Msg)
{ 
A68_51  YQBAOSI;  /* OPERATORS - vacuum */
A68_BOOL  ZQBAOSI;  /* clause result */
A68_120  ARBAOSI;  /* collateral clause result */
A68_VC  BRBAOSI;  /* avoid structure result */
A68_51  CRBAOSI;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(close_file);
 /* line 299: */
 /* line 300: */
 /* line 301: */
 /* line 302: */
if ( (File==HNBAOSI_nil_file) )
{ 
 /* line 303: */
 /* line 304: */
YHBAOSI_osifmessage(12, A_VVAC(YQBAOSI), Msg);
} 
else
{ 
XFBAOSI_errno = 0;
 /* line 305: */
 /* line 306: */
 /* line 307: */
ZQBAOSI = (JMBAOSI_fclose((*(&(File->Stdiofile))))!=0);
if ( ZQBAOSI )
{ 
ARBAOSI.data[0] = (*(&(File->Name)));
BLBAOSI_errnotext(  &BRBAOSI );
ARBAOSI.data[1] = BRBAOSI;
 /* line 308: */
YHBAOSI_osifmessage(11, A_HISVEC(CRBAOSI,ARBAOSI,2,A68_VC ), Msg);
} 
} 
A_PROC_EXIT(close_file);
return;
} 
#undef NL
 /* line 320: */
 /* line 321: */
 /* line 323: */

A68_VOID  HRBAOSI_read_buffer(A68_112 * File, A68_VC  Buffer, A68_INT * Charsread, A68_53  Msg, A68_115  *ReturnedValue)
{ 
A68_51  IRBAOSI;  /* OPERATORS - vacuum */
A68_115  JRBAOSI;  /* clause result */
A68_BOOL  KRBAOSI;  /* clause result */
A68_120  LRBAOSI;  /* collateral clause result */
A68_VC  MRBAOSI;  /* avoid structure result */
A68_51  NRBAOSI;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(read_buffer);
 /* line 324: */
 /* line 325: */
 /* line 326: */
 /* line 327: */
if ( (File==HNBAOSI_nil_file) )
{ 
YHBAOSI_osifmessage(22, A_VVAC(IRBAOSI), Msg);
 /* line 328: */
 /* line 329: */
 /* line 330: */
JRBAOSI = JPBAOSI_io_error;
} 
else
{ 
XFBAOSI_errno = 0;
 /* line 331: */
(*Charsread) = KMBAOSI_fread(Buffer, 1, Buffer.upb, (*(&(File->Stdiofile))));
 /* line 332: */
 /* line 333: */
 /* line 335: */
KRBAOSI = ((*Charsread)==Buffer.upb);
if ( KRBAOSI )
{ 
 /* line 336: */
JRBAOSI = DPBAOSI_io_ok;
} 
else
{ 
 /* line 337: */
 /* line 339: */
if ( (LMBAOSI_ferror((*(&(File->Stdiofile))))==0) )
{ 
 /* line 340: */
JRBAOSI = GPBAOSI_io_eof;
} 
else
{ 
LRBAOSI.data[0] = (*(&(File->Name)));
BLBAOSI_errnotext(  &MRBAOSI );
LRBAOSI.data[1] = MRBAOSI;
YHBAOSI_osifmessage(21, A_HISVEC(NRBAOSI,LRBAOSI,2,A68_VC ), Msg);
 /* line 341: */
 /* line 342: */
JRBAOSI = JPBAOSI_io_error;
} 
} 
} 
A_PROC_EXIT(read_buffer);
*ReturnedValue = (JRBAOSI);
return;
} 
#undef NL
 /* line 356: */
 /* line 357: */
 /* line 359: */

A68_VOID  SRBAOSI_read_line(A68_112 * File, A68_VC  Buffer, A68_INT * Charsread, A68_53  Msg, A68_115  *ReturnedValue)
{ 
A68_51  TRBAOSI;  /* OPERATORS - vacuum */
A68_115  URBAOSI;  /* clause result */
A68_31 * VRBAOSI_fgetsresult;
A68_BOOL  WRBAOSI;  /* clause result */
A68_120  XRBAOSI;  /* collateral clause result */
A68_VC  YRBAOSI;  /* avoid structure result */
A68_51  ZRBAOSI;  /* OPERATORS - istruct -> vector */
A68_INT  ASBAOSI_ind;
A68_CHAR * BSBAOSI_c;
A68_INT  CSBAOSI;  /* forall loop counter */
A68_INT  DSBAOSI_ind;
A68_CHAR * ESBAOSI_c;
A68_INT  FSBAOSI;  /* forall loop counter */
A_PROC_ENTRY(read_line);
 /* line 360: */
 /* line 361: */
 /* line 362: */
 /* line 363: */
if ( (File==HNBAOSI_nil_file) )
{ 
YHBAOSI_osifmessage(32, A_VVAC(TRBAOSI), Msg);
 /* line 364: */
 /* line 365: */
 /* line 366: */
URBAOSI = JPBAOSI_io_error;
} 
else
{ 
{ 
XFBAOSI_errno = 0;
 /* line 367: */
VRBAOSI_fgetsresult = NMBAOSI_fgets(Buffer, Buffer.upb, (*(&(File->Stdiofile))));
 /* line 368: */
 /* line 369: */
 /* line 370: */
WRBAOSI = (LMBAOSI_ferror((*(&(File->Stdiofile))))!=0);
if ( WRBAOSI )
{ 
XRBAOSI.data[0] = (*(&(File->Name)));
BLBAOSI_errnotext(  &YRBAOSI );
XRBAOSI.data[1] = YRBAOSI;
YHBAOSI_osifmessage(31, A_HISVEC(ZRBAOSI,XRBAOSI,2,A68_VC ), Msg);
 /* line 371: */
 /* line 372: */
 /* line 373: */
URBAOSI = JPBAOSI_io_error;
} 
else
{ 
 /* line 374: */
 /* line 375: */
if ( (VRBAOSI_fgetsresult==(A68_31 *)A68_NIL) )
{ 
(*Charsread) = 0;
 /* line 376: */
 /* line 377: */
 /* line 378: */
URBAOSI = GPBAOSI_io_eof;
} 
else
{ 
 /* line 379: */
 /* line 381: */
if ( (MMBAOSI_feof((*(&(File->Stdiofile))))!=0) )
{ 
ASBAOSI_ind = 0;
 /* line 382: */
CSBAOSI = Buffer.upb -1;
BSBAOSI_c = Buffer.data;
for (;CSBAOSI-- >= 0;
(BSBAOSI_c++
) )
{
if ( !(((*BSBAOSI_c)!=WPBAOSI_null_char)) ) break;
ASBAOSI_ind+=1;
}
 /* line 383: */
(*Charsread) = ASBAOSI_ind;
 /* line 384: */
 /* line 385: */
 /* line 387: */
URBAOSI = DPBAOSI_io_ok;
} 
else
{ 
DSBAOSI_ind = 0;
 /* line 388: */
FSBAOSI = Buffer.upb -1;
ESBAOSI_c = Buffer.data;
for (;FSBAOSI-- >= 0;
(ESBAOSI_c++
) )
{
if ( !(((*ESBAOSI_c)!=VPBAOSI_newline_char)) ) break;
DSBAOSI_ind+=1;
}
 /* line 389: */
 /* line 390: */
if ( (DSBAOSI_ind==Buffer.upb) )
{ 
(*Charsread) = (DSBAOSI_ind-1);
 /* line 391: */
 /* line 392: */
URBAOSI = MPBAOSI_io_no_newline;
} 
else
{ 
(*Charsread) = DSBAOSI_ind;
 /* line 393: */
 /* line 394: */
 /* line 395: */
URBAOSI = DPBAOSI_io_ok;
} 
} 
} 
} 
} 
} 
A_PROC_EXIT(read_line);
*ReturnedValue = (URBAOSI);
return;
} 
#undef NL
 /* line 404: */
 /* line 406: */

A68_VOID  JSBAOSI_write_buffer(A68_112 * File, A68_VC  Buffer, A68_53  Msg, A68_115  *ReturnedValue)
{ 
A68_51  KSBAOSI;  /* OPERATORS - vacuum */
A68_115  LSBAOSI;  /* clause result */
A68_BOOL  MSBAOSI;  /* clause result */
A68_120  NSBAOSI;  /* collateral clause result */
A68_VC  OSBAOSI;  /* avoid structure result */
A68_51  PSBAOSI;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(write_buffer);
 /* line 407: */
 /* line 408: */
 /* line 409: */
 /* line 410: */
if ( (File==HNBAOSI_nil_file) )
{ 
YHBAOSI_osifmessage(42, A_VVAC(KSBAOSI), Msg);
 /* line 411: */
 /* line 412: */
 /* line 413: */
LSBAOSI = JPBAOSI_io_error;
} 
else
{ 
 /* line 414: */
 /* line 416: */
if ( (Buffer.upb==0) )
{ 
 /* line 417: */
LSBAOSI = DPBAOSI_io_ok;
} 
else
{ 
XFBAOSI_errno = 0;
 /* line 418: */
 /* line 419: */
 /* line 421: */
MSBAOSI = (OMBAOSI_fwrite(Buffer, 1, Buffer.upb, (*(&(File->Stdiofile))))==Buffer.upb);
if ( MSBAOSI )
{ 
 /* line 422: */
LSBAOSI = DPBAOSI_io_ok;
} 
else
{ 
NSBAOSI.data[0] = (*(&(File->Name)));
BLBAOSI_errnotext(  &OSBAOSI );
NSBAOSI.data[1] = OSBAOSI;
YHBAOSI_osifmessage(41, A_HISVEC(PSBAOSI,NSBAOSI,2,A68_VC ), Msg);
 /* line 423: */
 /* line 424: */
LSBAOSI = JPBAOSI_io_error;
} 
} 
} 
A_PROC_EXIT(write_buffer);
*ReturnedValue = (LSBAOSI);
return;
} 
#undef NL
 /* line 433: */
 /* line 435: */

A68_VOID  TSBAOSI_set_file_position(A68_112 * File, A68_LINT  Byteoffset, A68_53  Msg, A68_115  *ReturnedValue)
{ 
A68_51  USBAOSI;  /* OPERATORS - vacuum */
A68_115  VSBAOSI;  /* clause result */
A68_120  WSBAOSI;  /* collateral clause result */
A68_VC  XSBAOSI;  /* avoid structure result */
A68_51  YSBAOSI;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(set_file_position);
 /* line 436: */
 /* line 437: */
 /* line 438: */
 /* line 439: */
if ( (File==HNBAOSI_nil_file) )
{ 
YHBAOSI_osifmessage(52, A_VVAC(USBAOSI), Msg);
 /* line 440: */
 /* line 441: */
 /* line 442: */
VSBAOSI = JPBAOSI_io_error;
} 
else
{ 
 /* line 443: */
 /* line 445: */
if ( (PMBAOSI_fseek((*(&(File->Stdiofile))), Byteoffset, RMBAOSI_seek_set)==0) )
{ 
 /* line 446: */
VSBAOSI = DPBAOSI_io_ok;
} 
else
{ 
WSBAOSI.data[0] = (*(&(File->Name)));
BLBAOSI_errnotext(  &XSBAOSI );
WSBAOSI.data[1] = XSBAOSI;
YHBAOSI_osifmessage(51, A_HISVEC(YSBAOSI,WSBAOSI,2,A68_VC ), Msg);
 /* line 447: */
 /* line 448: */
VSBAOSI = JPBAOSI_io_error;
} 
} 
A_PROC_EXIT(set_file_position);
*ReturnedValue = (VSBAOSI);
return;
} 
#undef NL
 /* line 452: */
 /* line 454: */

A68_VOID  CTBAOSI_get_file_position(A68_112 * File, A68_LINT * Byteoffset, A68_53  Msg, A68_115  *ReturnedValue)
{ 
A68_51  FTBAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_115  GTBAOSI;  /* clause result */
A68_BOOL  HTBAOSI;  /* clause result */
A68_51  KTBAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(get_file_position);
 /* line 455: */
 /* line 456: */
 /* line 457: */
 /* line 458: */
if ( (File==HNBAOSI_nil_file) )
{ 
YHBAOSI_osifmessage(99, A_HVEC(FTBAOSI,ETBAOSI,A68_VC ), Msg);
 /* line 459: */
 /* line 460: */
 /* line 461: */
GTBAOSI = JPBAOSI_io_error;
} 
else
{ 
(*Byteoffset) = QMBAOSI_ftell((*(&(File->Stdiofile))));
 /* line 462: */
 /* line 463: */
 /* line 465: */
HTBAOSI = ((*Byteoffset)!=(A68_LINT )(-1));
if ( HTBAOSI )
{ 
 /* line 466: */
GTBAOSI = DPBAOSI_io_ok;
} 
else
{ 
YHBAOSI_osifmessage(99, A_HVEC(KTBAOSI,JTBAOSI,A68_VC ), Msg);
 /* line 467: */
 /* line 468: */
GTBAOSI = JPBAOSI_io_error;
} 
} 
A_PROC_EXIT(get_file_position);
*ReturnedValue = (GTBAOSI);
return;
} 
#undef NL
 /* line 478: */

A68_VOID  NTBAOSI_update_disk(A68_112 * File, A68_53  Msg, A68_115  *ReturnedValue)
{ 
A68_51  OTBAOSI;  /* OPERATORS - vacuum */
A68_115  PTBAOSI;  /* clause result */
A68_120  QTBAOSI;  /* collateral clause result */
A68_VC  RTBAOSI;  /* avoid structure result */
A68_51  STBAOSI;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(update_disk);
 /* line 479: */
 /* line 480: */
 /* line 481: */
 /* line 482: */
if ( (File==HNBAOSI_nil_file) )
{ 
YHBAOSI_osifmessage(62, A_VVAC(OTBAOSI), Msg);
 /* line 483: */
 /* line 484: */
 /* line 485: */
PTBAOSI = JPBAOSI_io_error;
} 
else
{ 
 /* line 486: */
 /* line 488: */
if ( (SMBAOSI_fflush((*(&(File->Stdiofile))))==0) )
{ 
 /* line 489: */
PTBAOSI = DPBAOSI_io_ok;
} 
else
{ 
QTBAOSI.data[0] = (*(&(File->Name)));
BLBAOSI_errnotext(  &RTBAOSI );
QTBAOSI.data[1] = RTBAOSI;
YHBAOSI_osifmessage(61, A_HISVEC(STBAOSI,QTBAOSI,2,A68_VC ), Msg);
 /* line 490: */
 /* line 491: */
PTBAOSI = JPBAOSI_io_error;
} 
} 
A_PROC_EXIT(update_disk);
*ReturnedValue = (PTBAOSI);
return;
} 
#undef NL
 /* line 500: */

A68_VOID  VTBAOSI_delete_file(A68_VC  Filename, A68_53  Msg, A68_115  *ReturnedValue)
{ 
A68_VC  WTBAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_115  XTBAOSI;  /* clause result */
A68_120  YTBAOSI;  /* collateral clause result */
A68_VC  ZTBAOSI;  /* avoid structure result */
A68_51  AUBAOSI;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(delete_file);
 /* line 501: */
 /* line 502: */
 /* line 503: */
 /* line 505: */
if ( (TMBAOSI_unlink(A_VC_PLUS(Filename,A_HVEC(WTBAOSI,'\000',A68_CHAR )))==0) )
{ 
 /* line 506: */
XTBAOSI = DPBAOSI_io_ok;
} 
else
{ 
YTBAOSI.data[0] = Filename;
BLBAOSI_errnotext(  &ZTBAOSI );
YTBAOSI.data[1] = ZTBAOSI;
YHBAOSI_osifmessage(71, A_HISVEC(AUBAOSI,YTBAOSI,2,A68_VC ), Msg);
 /* line 507: */
 /* line 508: */
XTBAOSI = JPBAOSI_io_error;
} 
A_PROC_EXIT(delete_file);
*ReturnedValue = (XTBAOSI);
return;
} 
#undef NL
 /* line 516: */
 /* line 518: */

A68_VOID  EUBAOSI_rename_file(A68_VC  Oldname, A68_VC  Newname, A68_53  Msg, A68_115  *ReturnedValue)
{ 
A68_VC  FUBAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  GUBAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_115  HUBAOSI;  /* clause result */
A68_120  IUBAOSI;  /* collateral clause result */
A68_VC  LUBAOSI;  /* avoid structure result */
A68_51  MUBAOSI;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(rename_file);
 /* line 519: */
 /* line 520: */
 /* line 521: */
 /* line 523: */
if ( (UMBAOSI_rename(A_VC_PLUS(Oldname,A_HVEC(GUBAOSI,'\000',A68_CHAR )), A_VC_PLUS(Newname,A_HVEC(FUBAOSI,'\000',A68_CHAR )))==0) )
{ 
 /* line 524: */
HUBAOSI = DPBAOSI_io_ok;
} 
else
{ 
IUBAOSI.data[0] = KUBAOSI;
BLBAOSI_errnotext(  &LUBAOSI );
IUBAOSI.data[1] = LUBAOSI;
YHBAOSI_osifmessage(99, A_HISVEC(MUBAOSI,IUBAOSI,2,A68_VC ), Msg);
 /* line 525: */
 /* line 526: */
HUBAOSI = JPBAOSI_io_error;
} 
A_PROC_EXIT(rename_file);
*ReturnedValue = (HUBAOSI);
return;
} 
#undef NL
 /* line 534: */
 /* line 536: */

A68_VOID  QUBAOSI_make_temp_filename(A68_VC  Directory, A68_VC  File_prefix, A68_53  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  RUBAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  SUBAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_31 * TUBAOSI_temp;
A68_BOOL  UUBAOSI;  /* clause result */
A68_120  VUBAOSI;  /* collateral clause result */
A68_VC  YUBAOSI;  /* avoid structure result */
A68_51  ZUBAOSI;  /* OPERATORS - istruct -> vector */
A68_VC  BVBAOSI;  /* clause result */
A68_VC  DVBAOSI;  /* avoid structure result */
A68_VC  EVBAOSI;  /* avoid structure result */
A68_VC  FVBAOSI_result;
A_PROC_ENTRY(make_temp_filename);
 /* line 537: */
 /* line 538: */
{ 
TUBAOSI_temp = VMBAOSI_tempnam(A_VC_PLUS(Directory,A_HVEC(SUBAOSI,'\000',A68_CHAR )), A_VC_PLUS(File_prefix,A_HVEC(RUBAOSI,'\000',A68_CHAR )));
 /* line 539: */
 /* line 540: */
 /* line 541: */
UUBAOSI = (TUBAOSI_temp==(A68_31 *)A68_NIL);
if ( UUBAOSI )
{ 
VUBAOSI.data[0] = XUBAOSI;
BLBAOSI_errnotext(  &YUBAOSI );
VUBAOSI.data[1] = YUBAOSI;
YHBAOSI_osifmessage(99, A_HISVEC(ZUBAOSI,VUBAOSI,2,A68_VC ), Msg);
 /* line 542: */
 /* line 543: */
 /* line 544: */
BVBAOSI = CVBAOSI;
} 
else
{ 
UDAAOSI_cstringtorvc( TUBAOSI_temp, &DVBAOSI );
ZAAAOSI_makervc( DVBAOSI, &EVBAOSI );
FVBAOSI_result = EVBAOSI;
 /* line 545: */
WMBAOSI_free(TUBAOSI_temp);
 /* line 546: */
 /* line 547: */
BVBAOSI = FVBAOSI_result;
} 
} 
A_PROC_EXIT(make_temp_filename);
*ReturnedValue = (BVBAOSI);
return;
} 
#undef NL

A_STATIC A68_133 * JVBAOSI_(A68_133 * F)
{ 
A68_133 * KVBAOSI;  /* clause result */
A_PROC_ENTRY(<<<);
 /* line 579: */
 /* line 580: */
{ 
 /* line 581: */
 /* line 582: */
 /* line 583: */
 /* line 584: */
 /* line 585: */
 /* line 586: */
 /* line 587: */
 /* line 588: */
 /* line 589: */
 /* line 590: */
#define f F
#define statbuf HVBAOSI_statbuf
{f->Permissions = A_mode_t_SBITS(statbuf.st_mode);
f->Inode = A_ino_t_LBITS(statbuf.st_ino);
f->Device = A_dev_t_SINT(statbuf.st_dev);
f->Links = A_nlink_t_SINT(statbuf.st_nlink);
f->Owning_user = A_uid_t_SBITS(statbuf.st_uid);
f->Owning_group = A_gid_t_SBITS(statbuf.st_gid);
f->Size = A_off_t_LINT(statbuf.st_size);
f->Accessed = A_time_t_LINT(statbuf.st_atime);
f->Data_modified = A_time_t_LINT(statbuf.st_mtime);
f->Status_modified = A_time_t_LINT(statbuf.st_ctime);
}
#undef statbuf
#undef f
 /* line 591: */
 /* line 592: */
KVBAOSI = F;
} 
A_PROC_EXIT(<<<);
return( KVBAOSI );
} 
#undef NL
 /* line 595: */

A68_133 * NVBAOSI_get_file_details(A68_135  File, A68_53  Msg)
{ 
A68_135  OVBAOSI;  /* united object - for case conformity */
A68_112 * PVBAOSI_f;
A68_133  QVBAOSI_details;
A68_BOOL  RVBAOSI;  /* clause result */
A68_51  UVBAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_133 * VVBAOSI;  /* clause result */
A68_VC  WVBAOSI_filename;
A68_133  XVBAOSI_details;
A68_BOOL  YVBAOSI;  /* clause result */
A68_139  ZVBAOSI;  /* collateral clause result */
A68_VC  CWBAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_51  DWBAOSI;  /* OPERATORS - istruct -> vector */
A68_VC  EWBAOSI;  /* avoid structure result */
A68_51  FWBAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  GWBAOSI;  /* optbool result */
A68_139  HWBAOSI;  /* collateral clause result */
A68_VC  KWBAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_51  LWBAOSI;  /* OPERATORS - istruct -> vector */
A68_VC  MWBAOSI;  /* avoid structure result */
A68_51  NWBAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_51  OWBAOSI;  /* OPERATORS - vacuum */
A68_133 * PWBAOSI;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(get_file_details);
 /* line 596: */
 /* line 597: */
OVBAOSI = File ;
switch ( OVBAOSI.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,REF BITS)  */
PVBAOSI_f = (OVBAOSI.data.mode1);
 /* line 598: */
 /* line 599: */
{ 
 /* line 600: */
 /* line 601: */
 /* line 602: */
RVBAOSI = (YMBAOSI_fstat(XMBAOSI_fileno((*(&(PVBAOSI_f->Stdiofile)))), (&HVBAOSI_statbuf))!=0);
if ( RVBAOSI )
{ 
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(UVBAOSI,TVBAOSI,A68_VC )),(SHAAOSI_system, A_HVEC(UVBAOSI,TVBAOSI,A68_VC ),(Msg).nonlocals));
 /* line 603: */
 /* line 604: */
 /* line 606: */
VVBAOSI = GVBAOSI_nil_file_details;
} 
else
{ 
 /* line 607: */
VVBAOSI = JVBAOSI_((&QVBAOSI_details));
} 
} 
break;
case 2: /* VECTOR [] CHAR */
WVBAOSI_filename = (OVBAOSI.data.mode2);
 /* line 608: */
 /* line 609: */
{ 
 /* line 610: */
 /* line 611: */
 /* line 612: */
YVBAOSI = (ZMBAOSI_stat(WVBAOSI_filename, (&HVBAOSI_statbuf))!=0);
if ( YVBAOSI )
{ 
 /* line 613: */
if ( (XFBAOSI_errno==ENBAOSI_eacces) )
{ 
 /* line 614: */
ZVBAOSI.data[0] = BWBAOSI;
ZVBAOSI.data[1] = WVBAOSI_filename;
ZVBAOSI.data[2] = A_HVEC(CWBAOSI,'\"',A68_CHAR );
 /* line 615: */
JBAAOSI_concat( A_HISVEC(DWBAOSI,ZVBAOSI,3,A68_VC ), &EWBAOSI );
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(FWBAOSI,EWBAOSI,A68_VC )),(WHAAOSI_user, A_HVEC(FWBAOSI,EWBAOSI,A68_VC ),(Msg).nonlocals));
} 
else
{ 
GWBAOSI = (XFBAOSI_errno==FNBAOSI_enoent);
if ( ! GWBAOSI )
{ /* line 616: */
GWBAOSI = (XFBAOSI_errno==GNBAOSI_enotdir);
}
 /* line 617: */
if ( GWBAOSI )
{ 
/*SKIP*/;
} 
else
{ 
 /* line 618: */
HWBAOSI.data[0] = JWBAOSI;
HWBAOSI.data[1] = WVBAOSI_filename;
HWBAOSI.data[2] = A_HVEC(KWBAOSI,'\"',A68_CHAR );
 /* line 619: */
JBAAOSI_concat( A_HISVEC(LWBAOSI,HWBAOSI,3,A68_VC ), &MWBAOSI );
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(NWBAOSI,MWBAOSI,A68_VC )),(SHAAOSI_system, A_HVEC(NWBAOSI,MWBAOSI,A68_VC ),(Msg).nonlocals));
} 
} 
 /* line 620: */
 /* line 621: */
 /* line 623: */
VVBAOSI = GVBAOSI_nil_file_details;
} 
else
{ 
 /* line 625: */
VVBAOSI = JVBAOSI_((&XVBAOSI_details));
} 
} 
break;
default: 
YHBAOSI_osifmessage(0, A_VVAC(OWBAOSI), Msg);
 /* line 626: */
 /* line 627: */
VVBAOSI = PWBAOSI;
break;
} 
A_PROC_EXIT(get_file_details);
return( VVBAOSI );
} 
#undef NL

A68_BOOL  RWBAOSI_is_terminal(A68_112 * F)
{ 
A68_BOOL  SWBAOSI;  /* clause result */
A_PROC_ENTRY(is_terminal);
 /* line 636: */
 /* line 624: */
SWBAOSI = (DNBAOSI_ttyname(XMBAOSI_fileno((*(&(F->Stdiofile)))))!=(A68_31 *)A68_NIL);
A_PROC_EXIT(is_terminal);
return( SWBAOSI );
} 
#undef NL

A68_BITS * VWBAOSI_open_directory(A68_VC  Name, A68_53  Msg)
{ 
A68_VC  WWBAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BITS * XWBAOSI_dir;
A68_120  YWBAOSI;  /* collateral clause result */
A68_VC  ZWBAOSI;  /* avoid structure result */
A68_51  AXBAOSI;  /* OPERATORS - istruct -> vector */
A68_BITS * BXBAOSI;  /* clause result */
A_PROC_ENTRY(open_directory);
 /* line 649: */
 /* line 650: */
{ 
XWBAOSI_dir = ANBAOSI_opendir(A_VC_PLUS(Name,A_HVEC(WWBAOSI,'\000',A68_CHAR )));
 /* line 651: */
 /* line 652: */
 /* line 653: */
 /* line 654: */
if ( (XWBAOSI_dir==GMBAOSI_null_dirptr) )
{ 
YWBAOSI.data[0] = Name;
BLBAOSI_errnotext(  &ZWBAOSI );
YWBAOSI.data[1] = ZWBAOSI;
 /* line 655: */
YHBAOSI_osifmessage(100, A_HISVEC(AXBAOSI,YWBAOSI,2,A68_VC ), Msg);
} 
 /* line 656: */
 /* line 657: */
BXBAOSI = XWBAOSI_dir;
} 
A_PROC_EXIT(open_directory);
return( BXBAOSI );
} 
#undef NL

A68_VOID  EXBAOSI_close_directory(A68_BITS * D, A68_53  Msg)
{ 
A68_51  FXBAOSI;  /* OPERATORS - vacuum */
A68_VC  GXBAOSI;  /* avoid structure result */
A68_51  HXBAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(close_directory);
 /* line 660: */
 /* line 661: */
 /* line 662: */
 /* line 663: */
if ( (D==GMBAOSI_null_dirptr) )
{ 
 /* line 664: */
 /* line 665: */
YHBAOSI_osifmessage(100, A_VVAC(FXBAOSI), Msg);
} 
else
{ 
 /* line 666: */
 /* line 667: */
if ( (BNBAOSI_closedir(D)!=0) )
{ 
 /* line 668: */
BLBAOSI_errnotext(  &GXBAOSI );
YHBAOSI_osifmessage(100, A_HVEC(HXBAOSI,GXBAOSI,A68_VC ), Msg);
} 
} 
A_PROC_EXIT(close_directory);
return;
} 
#undef NL

A68_VOID  KXBAOSI_get_next_dir_entry(A68_BITS * D, A68_53  Msg, A68_VC  *ReturnedValue)
{ 
A68_51  LXBAOSI;  /* OPERATORS - vacuum */
A68_VC  MXBAOSI;  /* clause result */
A68_VC  NXBAOSI;  /* OPERATORS - nil -> mode */
A68_VC  OXBAOSI;  /* avoid structure result */
A68_VC  PXBAOSI_entry;
A68_VC  QXBAOSI;  /* OPERATORS - nil -> mode */
A68_VC  RXBAOSI;  /* == */
A68_BOOL  SXBAOSI;  /* optbool result */
A68_BOOL  TXBAOSI;  /* clause result */
A68_VC  UXBAOSI;  /* avoid structure result */
A68_51  VXBAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  WXBAOSI;  /* OPERATORS - nil -> mode */
A68_VC  XXBAOSI;  /* avoid structure result */
A_PROC_ENTRY(get_next_dir_entry);
 /* line 671: */
 /* line 672: */
 /* line 673: */
if ( (D==GMBAOSI_null_dirptr) )
{ 
YHBAOSI_osifmessage(100, A_VVAC(LXBAOSI), Msg);
 /* line 674: */
 /* line 675: */
 /* line 676: */
MXBAOSI = A_VVAC(NXBAOSI);
} 
else
{ 
{ 
UDAAOSI_cstringtorvc( CNBAOSI_readdir(D), &OXBAOSI );
PXBAOSI_entry = OXBAOSI;
 /* line 677: */
RXBAOSI = A_VVAC(QXBAOSI) ;
SXBAOSI = A_VSTRUCTCOMP(PXBAOSI_entry,RXBAOSI);
if ( ! SXBAOSI )
{ /* line 678: */
SXBAOSI = (PXBAOSI_entry.upb==0);
}
 /* line 679: */
TXBAOSI = SXBAOSI;
if ( TXBAOSI )
{ 
BLBAOSI_errnotext(  &UXBAOSI );
YHBAOSI_osifmessage(100, A_HVEC(VXBAOSI,UXBAOSI,A68_VC ), Msg);
 /* line 680: */
 /* line 681: */
 /* line 683: */
MXBAOSI = A_VVAC(WXBAOSI);
} 
else
{ 
ZAAAOSI_makervc( PXBAOSI_entry, &XXBAOSI );
MXBAOSI = XXBAOSI;
} 
} 
} 
A_PROC_EXIT(get_next_dir_entry);
*ReturnedValue = (MXBAOSI);
return;
} 
#undef NL

A_STATIC A68_VOID  YXBAOSI_init_osfiles(void)
{ 
A68_112  CYBAOSI;  /* collateral clause result */
A68_VC  FYBAOSI;  /* avoid structure result */
A68_112 * GYBAOSI;  /* YIELD */
A68_112  HYBAOSI;  /* collateral clause result */
A68_VC  KYBAOSI;  /* avoid structure result */
A68_112 * LYBAOSI;  /* YIELD */
A68_112  MYBAOSI;  /* collateral clause result */
A68_VC  PYBAOSI;  /* avoid structure result */
A68_112 * QYBAOSI;  /* YIELD */
A_PROC_ENTRY(init_osfiles);
{ 
 /* line 697: */
 /* line 698: */
 /* line 700: */
 /* line 701: */
 /* line 702: */
 /* line 703: */
 /* line 705: */
 /* line 706: */
 /* line 707: */
 /* line 708: */
 /* line 710: */
ZAAAOSI_makervc( EYBAOSI, &FYBAOSI );
CYBAOSI.Name = FYBAOSI;
CYBAOSI.Stdiofile = (&ZXBAOSI_stdiostdin);
GYBAOSI = A_HEAP(A68_112 ) ;
(*GYBAOSI) = CYBAOSI ;
INBAOSI_stdin = GYBAOSI;
 /* line 711: */
ZAAAOSI_makervc( JYBAOSI, &KYBAOSI );
HYBAOSI.Name = KYBAOSI;
HYBAOSI.Stdiofile = (&AYBAOSI_stdiostdout);
LYBAOSI = A_HEAP(A68_112 ) ;
(*LYBAOSI) = HYBAOSI ;
JNBAOSI_stdout = LYBAOSI;
 /* line 712: */
ZAAAOSI_makervc( OYBAOSI, &PYBAOSI );
MYBAOSI.Name = PYBAOSI;
 /* line 713: */
MYBAOSI.Stdiofile = (&BYBAOSI_stdiostderr);
QYBAOSI = A_HEAP(A68_112 ) ;
(*QYBAOSI) = MYBAOSI ;
KNBAOSI_stderr = QYBAOSI;
} 
A_PROC_EXIT(init_osfiles);
return;
} 
#undef NL
 /* line 1: */
 /* line 5: */
void AMBAOSI(void)   /* initialise DECS osfiles */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","./mfiles","-staredit","259","./a68files/osfiles.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/usefulops.m","./mfiles/oserrors.m","./mfiles/messageproc.m","./mfiles/cif.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_77 * NNBAOSI;  /* YIELD */
A68_113  ONBAOSI;  /* clause result */
A68_77 * RNBAOSI;  /* YIELD */
A68_113  SNBAOSI;  /* clause result */
A68_77 * VNBAOSI;  /* YIELD */
A68_113  WNBAOSI;  /* clause result */
A68_77 * ZNBAOSI;  /* YIELD */
A68_113  AOBAOSI;  /* clause result */
A68_77 * DOBAOSI;  /* YIELD */
A68_113  EOBAOSI;  /* clause result */
A68_77 * HOBAOSI;  /* YIELD */
A68_113  IOBAOSI;  /* clause result */
A68_INT * BPBAOSI;  /* YIELD */
A68_115  CPBAOSI;  /* clause result */
A68_INT * EPBAOSI;  /* YIELD */
A68_115  FPBAOSI;  /* clause result */
A68_INT * HPBAOSI;  /* YIELD */
A68_115  IPBAOSI;  /* clause result */
A68_INT * KPBAOSI;  /* YIELD */
A68_115  LPBAOSI;  /* clause result */
A68_39  RYBAOSI;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
WPAAOSI();   /* USE usefulops */
SFBAOSI();   /* USE oserrors */
JFAAOSI();   /* USE messageproc */
JDAAOSI();   /* USE cif */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/osif/assoc/./a68files/osfiles.a68";
A_config.translation_time = "Tue Apr  4 09:24:39 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "ZLBAOSI (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:24:39 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS osfiles);
UEAALIB_a68config(LGAALIB_configinfo, EMBAOSI);
 /* line 63: */
 /* line 65: */
FMBAOSI_null_cfileptr = (A68_BITS *)A68_NIL;
 /* line 66: */
GMBAOSI_null_dirptr = (A68_BITS *)A68_NIL;
 /* line 67: */
 /* line 69: */
 /* line 70: */
 /* line 71: */
 /* line 72: */
 /* line 74: */
 /* line 75: */
 /* line 76: */
 /* line 77: */
 /* line 79: */
 /* line 80: */
 /* line 81: */
 /* line 82: */
 /* line 83: */
 /* line 84: */
 /* line 85: */
 /* line 86: */
 /* line 87: */
 /* line 88: */
 /* line 90: */
 /* line 91: */
 /* line 92: */
 /* line 93: */
 /* line 95: */
 /* line 96: */
 /* line 97: */
 /* line 98: */
 /* line 100: */
 /* line 101: */
 /* line 102: */
 /* line 103: */
 /* line 105: */
 /* line 106: */
 /* line 107: */
 /* line 108: */
 /* line 109: */
 /* line 110: */
 /* line 111: */
 /* line 112: */
 /* line 113: */
 /* line 114: */
 /* line 116: */
 /* line 117: */
 /* line 118: */
 /* line 119: */
 /* line 120: */
 /* line 122: */
 /* line 123: */
 /* line 124: */
 /* line 125: */
 /* line 127: */
 /* line 128: */
 /* line 129: */
 /* line 131: */
 /* line 132: */
 /* line 133: */
 /* line 134: */
 /* line 136: */
 /* line 137: */
 /* line 138: */
 /* line 139: */
 /* line 141: */
 /* line 142: */
 /* line 143: */
 /* line 144: */
 /* line 146: */
 /* line 147: */
 /* line 148: */
 /* line 149: */
 /* line 151: */
 /* line 152: */
 /* line 153: */
 /* line 155: */
 /* line 156: */
 /* line 157: */
 /* line 158: */
 /* line 160: */
 /* line 161: */
 /* line 162: */
 /* line 163: */
 /* line 164: */
 /* line 166: */
 /* line 167: */
 /* line 168: */
 /* line 169: */
 /* line 171: */
 /* line 172: */
 /* line 173: */
 /* line 174: */
 /* line 175: */
 /* line 177: */
 /* line 178: */
 /* line 179: */
 /* line 180: */
 /* line 181: */
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
 /* line 194: */
 /* line 195: */
 /* line 196: */
 /* line 197: */
 /* line 199: */
 /* line 200: */
 /* line 201: */
 /* line 206: */
 /* line 211: */
 /* line 217: */
HNBAOSI_nil_file = (A68_112 *)A68_NIL;
 /* line 218: */
INBAOSI_stdin = HNBAOSI_nil_file;
JNBAOSI_stdout = HNBAOSI_nil_file;
KNBAOSI_stderr = HNBAOSI_nil_file;
 /* line 226: */
 /* line 227: */
 /* line 229: */
 /* line 230: */
{ 
NNBAOSI = (&((&LNBAOSI_aa)->Access)) ;
(*NNBAOSI) = MNBAOSI;
ONBAOSI = LNBAOSI_aa;
} 
PNBAOSI_read_access = ONBAOSI;
 /* line 231: */
{ 
RNBAOSI = (&((&LNBAOSI_aa)->Access)) ;
(*RNBAOSI) = QNBAOSI;
SNBAOSI = LNBAOSI_aa;
} 
TNBAOSI_write_access = SNBAOSI;
 /* line 232: */
{ 
VNBAOSI = (&((&LNBAOSI_aa)->Access)) ;
(*VNBAOSI) = UNBAOSI;
WNBAOSI = LNBAOSI_aa;
} 
XNBAOSI_append_access = WNBAOSI;
 /* line 233: */
{ 
ZNBAOSI = (&((&LNBAOSI_aa)->Access)) ;
(*ZNBAOSI) = YNBAOSI;
AOBAOSI = LNBAOSI_aa;
} 
BOBAOSI_update_access = AOBAOSI;
 /* line 234: */
{ 
DOBAOSI = (&((&LNBAOSI_aa)->Access)) ;
(*DOBAOSI) = COBAOSI;
EOBAOSI = LNBAOSI_aa;
} 
FOBAOSI_update_truncate_access = EOBAOSI;
 /* line 235: */
{ 
HOBAOSI = (&((&LNBAOSI_aa)->Access)) ;
(*HOBAOSI) = GOBAOSI;
IOBAOSI = LNBAOSI_aa;
} 
JOBAOSI_update_append_access = IOBAOSI;
 /* line 237: */
 /* line 238: */
 /* line 242: */
 /* line 243: */
 /* line 246: */
 /* line 247: */
{ 
BPBAOSI = (&((&APBAOSI_tt)->Status)) ;
(*BPBAOSI) = 1;
CPBAOSI = APBAOSI_tt;
} 
DPBAOSI_io_ok = CPBAOSI;
 /* line 248: */
{ 
EPBAOSI = (&((&APBAOSI_tt)->Status)) ;
(*EPBAOSI) = 2;
FPBAOSI = APBAOSI_tt;
} 
GPBAOSI_io_eof = FPBAOSI;
 /* line 249: */
{ 
HPBAOSI = (&((&APBAOSI_tt)->Status)) ;
(*HPBAOSI) = 3;
IPBAOSI = APBAOSI_tt;
} 
JPBAOSI_io_error = IPBAOSI;
 /* line 250: */
{ 
KPBAOSI = (&((&APBAOSI_tt)->Status)) ;
(*KPBAOSI) = 4;
LPBAOSI = APBAOSI_tt;
} 
MPBAOSI_io_no_newline = LPBAOSI;
 /* line 252: */
 /* line 253: */
 /* line 257: */
 /* line 264: */
 /* line 271: */
 /* line 272: */
 /* line 295: */
 /* line 296: */
 /* line 318: */
 /* line 319: */
 /* line 354: */
 /* line 355: */
 /* line 402: */
 /* line 403: */
 /* line 431: */
 /* line 432: */
 /* line 450: */
 /* line 451: */
 /* line 475: */
 /* line 476: */
 /* line 497: */
 /* line 498: */
 /* line 514: */
 /* line 515: */
 /* line 532: */
 /* line 533: */
 /* line 559: */
 /* line 570: */
 /* line 572: */
GVBAOSI_nil_file_details = (A68_133 *)A68_NIL;
 /* line 574: */
 /* line 575: */
 /* line 576: */
 /* line 578: */
 /* line 594: */
 /* line 635: */
 /* line 648: */
 /* line 659: */
 /* line 670: */
 /* line 686: */
 /* line 687: */
 /* line 696: */
 /* line 715: */
 /* line 717: */
 /* line 735: */
RYBAOSI.fn.fn_global = YXBAOSI_init_osfiles;
RYBAOSI.nonlocals = A68_NIL;
ABAALIB_a68init(RYBAOSI);
A_PROC_EXIT(DECS osfiles);
} 
#undef NL
/* end of translation of ./a68files/osfiles.a68 */
