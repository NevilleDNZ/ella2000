
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
/* UNAME:BMCAOSI */
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

A_PROCEDURE(A68_VOID ,A68t46,(A68_VC *),(A68_VC *,void *));
typedef struct A68t46  A68_46 ;    /* PROC REF MODE26 */
struct A68t48 ;
struct A68t49 ;

A_PROCEDURE(A68_VOID ,A68t47,(A68_INT ,struct A68t48 ,struct A68t49 ),(A68_INT ,struct A68t48 ,struct A68t49 ,void *));
typedef struct A68t47  A68_47 ;    /* PROC(INT,MODE48,MODE49) VOID */
A_VECTOR(A68_VC ,A68t48);
typedef struct A68t48  A68_48 ;    /* VECTOR [] MODE26 */
struct A68t50 ;

A_PROCEDURE(A68_VOID ,A68t49,(struct A68t50 ,struct A68t48 ),(struct A68t50 ,struct A68t48 ,void *));
typedef struct A68t49  A68_49 ;    /* PROC(MODE50,MODE48) VOID */
struct A68t50{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t51 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t50  A68_50 ;    /* STRUCT(INT,REF MODE51,BITS)  */
A_VECTOR(struct A68t53 ,A68t52);
typedef struct A68t52  A68_52 ;    /* VECTOR [] MODE53 */
struct A68t53{
struct A68t50  Msgno;
A68_VC  Text;
};
typedef struct A68t53  A68_53 ;    /* STRUCT(MODE50,REF MODE26)  */
struct A68t51{
A68_VC  Name;
struct A68t52  Messages;
};
typedef struct A68t51  A68_51 ;    /* STRUCT(REF MODE26,REF MODE52)  */

A_PROCEDURE(A68_VOID ,A68t54,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t54  A68_54 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t55,(A68_BOOL ,struct A68t48 *),(A68_BOOL ,struct A68t48 *,void *));
typedef struct A68t55  A68_55 ;    /* PROC(BOOL) MODE48 */
A_VECTOR(struct A68t58 ,A68t57);
typedef struct A68t57  A68_57 ;    /* VECTOR [] MODE58 */
struct A68t58{
A68_INT  Number;
A_PAD_INT(PAD_3)
A68_BITS  Class;
A_PAD_BITS(PAD_4)
A68_VC  Text;
};
typedef struct A68t58  A68_58 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t56{
A68_VC  Name;
struct A68t52  Messages;
A68_BOOL * Initialised;
struct A68t57  Setup;
};
typedef struct A68t56  A68_56 ;    /* STRUCT(MODE26,REF MODE52,REF BOOL,MODE57)  */

A_PROCEDURE(A68_VOID ,A68t59,(A68_BOOL ,struct A68t56 *),(A68_BOOL ,struct A68t56 *,void *));
typedef struct A68t59  A68_59 ;    /* PROC(BOOL) MODE56 */

A_PROCEDURE(A68_VOID ,A68t60,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(MODE26) REF MODE26 */
A_VECTOR(A68_VC ,A68t61);
typedef struct A68t61  A68_61 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t62,(struct A68t48 ,struct A68t61 *),(struct A68t48 ,struct A68t61 *,void *));
typedef struct A68t62  A68_62 ;    /* PROC(MODE48) MODE61 */

A_PROCEDURE(A68_VOID ,A68t63,(struct A68t61 ,struct A68t48 *),(struct A68t61 ,struct A68t48 *,void *));
typedef struct A68t63  A68_63 ;    /* PROC(MODE61) MODE48 */
struct A68t65 ;

A_PROCEDURE(A68_BOOL ,A68t64,(struct A68t65 ),(struct A68t65 ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(MODE65) BOOL */
struct A68t65 { A68_INT mode; union {
struct A68t50  mode1;
struct A68t53  mode2;
} data; };
typedef struct A68t65  A68_65 ;    /* UNION(MODE50,MODE53)  */

A_PROCEDURE(A68_INT ,A68t66,(struct A68t50 ),(struct A68t50 ,void *));
typedef struct A68t66  A68_66 ;    /* PROC(MODE50) INT */

A_PROCEDURE(A68_VOID ,A68t67,(A68_INT ,struct A68t56 ,struct A68t50 *),(A68_INT ,struct A68t56 ,struct A68t50 *,void *));
typedef struct A68t67  A68_67 ;    /* PROC(INT,MODE56) MODE50 */

A_PROCEDURE(A68_BOOL ,A68t68,(struct A68t50 ,struct A68t56 ),(struct A68t50 ,struct A68t56 ,void *));
typedef struct A68t68  A68_68 ;    /* PROC(MODE50,MODE56) BOOL */

A_PROCEDURE(A68_VOID ,A68t69,(struct A68t50 ,struct A68t48 ,struct A68t53 *),(struct A68t50 ,struct A68t48 ,struct A68t53 *,void *));
typedef struct A68t69  A68_69 ;    /* PROC(MODE50,MODE48) MODE53 */

A_PROCEDURE(A68_INT *,A68t70,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t70  A68_70 ;    /* PROC(REF INT,MODE26) REF INT */

A_PROCEDURE(A68_VOID ,A68t71,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t71  A68_71 ;    /* PROC(REF MODE26,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t72,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t72  A68_72 ;    /* PROC(REF MODE26,CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t73,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t73  A68_73 ;    /* PROC(MODE26,CHAR) MODE26 */

A_PROCEDURE(A68_VOID ,A68t74,(struct A68t48 ,A68_VC *),(struct A68t48 ,A68_VC *,void *));
typedef struct A68t74  A68_74 ;    /* PROC(MODE48) REF MODE26 */

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
struct A68t91{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t91  A68_91 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t92{
A68_INT  Status;
A_PAD_INT(PAD_5)
};
typedef struct A68t92  A68_92 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_BOOL ,A68t93,(struct A68t92 ,struct A68t92 ),(struct A68t92 ,struct A68t92 ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(MODE92,MODE92) BOOL */
struct A68t94{
struct A68t77  Access;
A_PAD_ISTRUCT(A68_77 ,PAD_6)
};
typedef struct A68t94  A68_94 ;    /* STRUCT(MODE77)  */

A_PROCEDURE(A68_VOID ,A68t95,(struct A68t91 *,A68_VC *),(struct A68t91 *,A68_VC *,void *));
typedef struct A68t95  A68_95 ;    /* PROC(REF MODE91) MODE26 */

A_PROCEDURE(struct A68t91 *,A68t96,(A68_VC ,struct A68t94 ,struct A68t49 ),(A68_VC ,struct A68t94 ,struct A68t49 ,void *));
typedef struct A68t96  A68_96 ;    /* PROC(MODE26,MODE94,MODE49) REF MODE91 */

A_PROCEDURE(A68_VOID ,A68t97,(struct A68t91 *,struct A68t49 ),(struct A68t91 *,struct A68t49 ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(REF MODE91,MODE49) VOID */

A_PROCEDURE(A68_VOID ,A68t98,(struct A68t91 *,A68_VC ,A68_INT *,struct A68t49 ,struct A68t92 *),(struct A68t91 *,A68_VC ,A68_INT *,struct A68t49 ,struct A68t92 *,void *));
typedef struct A68t98  A68_98 ;    /* PROC(REF MODE91,REF MODE26,REF INT,MODE49) MODE92 */

A_PROCEDURE(A68_VOID ,A68t99,(struct A68t91 *,A68_VC ,struct A68t49 ,struct A68t92 *),(struct A68t91 *,A68_VC ,struct A68t49 ,struct A68t92 *,void *));
typedef struct A68t99  A68_99 ;    /* PROC(REF MODE91,MODE26,MODE49) MODE92 */

A_PROCEDURE(A68_VOID ,A68t100,(struct A68t91 *,A68_LINT ,struct A68t49 ,struct A68t92 *),(struct A68t91 *,A68_LINT ,struct A68t49 ,struct A68t92 *,void *));
typedef struct A68t100  A68_100 ;    /* PROC(REF MODE91,LONG INT,MODE49) MODE92 */

A_PROCEDURE(A68_VOID ,A68t101,(struct A68t91 *,A68_LINT *,struct A68t49 ,struct A68t92 *),(struct A68t91 *,A68_LINT *,struct A68t49 ,struct A68t92 *,void *));
typedef struct A68t101  A68_101 ;    /* PROC(REF MODE91,REF LONG INT,MODE49) MODE92 */

A_PROCEDURE(A68_VOID ,A68t102,(struct A68t91 *,struct A68t49 ,struct A68t92 *),(struct A68t91 *,struct A68t49 ,struct A68t92 *,void *));
typedef struct A68t102  A68_102 ;    /* PROC(REF MODE91,MODE49) MODE92 */

A_PROCEDURE(A68_VOID ,A68t103,(A68_VC ,struct A68t49 ,struct A68t92 *),(A68_VC ,struct A68t49 ,struct A68t92 *,void *));
typedef struct A68t103  A68_103 ;    /* PROC(MODE26,MODE49) MODE92 */

A_PROCEDURE(A68_VOID ,A68t104,(A68_VC ,A68_VC ,struct A68t49 ,struct A68t92 *),(A68_VC ,A68_VC ,struct A68t49 ,struct A68t92 *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(MODE26,MODE26,MODE49) MODE92 */

A_PROCEDURE(A68_VOID ,A68t105,(A68_VC ,A68_VC ,struct A68t49 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t49 ,A68_VC *,void *));
typedef struct A68t105  A68_105 ;    /* PROC(MODE26,MODE26,MODE49) MODE26 */
struct A68t106{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_7)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_8)
A68_SINT  Device;
A_PAD_SINT(PAD_9)
A68_SINT  Links;
A_PAD_SINT(PAD_10)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_11)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_12)
A68_LINT  Size;
A_PAD_LINT(PAD_13)
A68_LINT  Accessed;
A_PAD_LINT(PAD_14)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_15)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_16)
};
typedef struct A68t106  A68_106 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t108 ;

A_PROCEDURE(struct A68t106 *,A68t107,(struct A68t108 ,struct A68t49 ),(struct A68t108 ,struct A68t49 ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(MODE108,MODE49) REF MODE106 */
struct A68t108 { A68_INT mode; union {
struct A68t91 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t108  A68_108 ;    /* UNION(REF MODE91,MODE26)  */

A_PROCEDURE(A68_BOOL ,A68t109,(struct A68t91 *),(struct A68t91 *,void *));
typedef struct A68t109  A68_109 ;    /* PROC(REF MODE91) BOOL */

A_PROCEDURE(A68_BITS *,A68t110,(A68_VC ,struct A68t49 ),(A68_VC ,struct A68t49 ,void *));
typedef struct A68t110  A68_110 ;    /* PROC(MODE26,MODE49) REF BITS */

A_PROCEDURE(A68_VOID ,A68t111,(A68_BITS *,struct A68t49 ),(A68_BITS *,struct A68t49 ,void *));
typedef struct A68t111  A68_111 ;    /* PROC(REF BITS,MODE49) VOID */

A_PROCEDURE(A68_VOID ,A68t112,(A68_BITS *,struct A68t49 ,A68_VC *),(A68_BITS *,struct A68t49 ,A68_VC *,void *));
typedef struct A68t112  A68_112 ;    /* PROC(REF BITS,MODE49) REF MODE26 */
struct A68t113{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t113  A68_113 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t114,(A68_VC ,struct A68t113 *),(A68_VC ,struct A68t113 *,void *));
typedef struct A68t114  A68_114 ;    /* PROC(REF MODE26) MODE113 */

A_PROCEDURE(A68_VOID ,A68t115,(A68_VC ,A68_VC ,struct A68t113 *),(A68_VC ,A68_VC ,struct A68t113 *,void *));
typedef struct A68t115  A68_115 ;    /* PROC(REF MODE26,REF MODE26) MODE113 */

A_PROCEDURE(A68_VOID ,A68t116,(A68_VC ,A68_VC ,struct A68t61 *),(A68_VC ,A68_VC ,struct A68t61 *,void *));
typedef struct A68t116  A68_116 ;    /* PROC(REF MODE26,REF MODE26) REF MODE61 */

A_PROCEDURE(A68_VOID ,A68t117,(struct A68t39 ),(struct A68t39 ,void *));
typedef struct A68t117  A68_117 ;    /* PROC(MODE39) VOID */

A_PROCEDURE(A68_VOID ,A68t118,(A68_VC ),(A68_VC ,void *));
typedef struct A68t118  A68_118 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t119,(struct A68t118 ),(struct A68t118 ,void *));
typedef struct A68t119  A68_119 ;    /* PROC(MODE118) VOID */

A_PROCEDURE(A68_VOID ,A68t120,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t120  A68_120 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,54,A68t121);
typedef struct A68t121  A68_121 ;    /* STRUCT 54 CHAR */

A_PROCEDURE(A68_INT ,A68t122,(A68_VC ,struct A68t31 **),(A68_VC ,struct A68t31 **,void *));
typedef struct A68t122  A68_122 ;    /* PROC(MODE26,REF REF MODE31) INT */

A_PROCEDURE(A68_INT ,A68t123,(A68_VC ,A68_VC *,struct A68t49 ),(A68_VC ,A68_VC *,struct A68t49 ,void *));
typedef struct A68t123  A68_123 ;    /* PROC(MODE26,REF REF MODE26,MODE49) INT */
A_ISTRUCT(A68_CHAR ,36,A68t124);
typedef struct A68t124  A68_124 ;    /* STRUCT 36 CHAR */
A_ISTRUCT(A68_VC ,3,A68t125);
typedef struct A68t125  A68_125 ;    /* STRUCT 3 MODE26 */
A_ISTRUCT(A68_CHAR ,29,A68t126);
typedef struct A68t126  A68_126 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(A68_CHAR ,34,A68t127);
typedef struct A68t127  A68_127 ;    /* STRUCT 34 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t128);
typedef struct A68t128  A68_128 ;    /* STRUCT 30 CHAR */

A_PROCEDURE(A68_VOID ,A68t129,(A68_VC ,A68_VC ,struct A68t49 ,struct A68t113 *),(A68_VC ,A68_VC ,struct A68t49 ,struct A68t113 *,void *));
typedef struct A68t129  A68_129 ;    /* PROC(MODE26,MODE26,MODE49) MODE113 */

A_PROCEDURE(A68_VOID ,A68t130,(A68_VC ,A68_BOOL ,struct A68t113 *),(A68_VC ,A68_BOOL ,struct A68t113 *,void *));
typedef struct A68t130  A68_130 ;    /* PROC(MODE26,BOOL) MODE113 */
A_ISTRUCT(A68_CHAR ,23,A68t131);
typedef struct A68t131  A68_131 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t132);
typedef struct A68t132  A68_132 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t133);
typedef struct A68t133  A68_133 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t134);
typedef struct A68t134  A68_134 ;    /* STRUCT 16 CHAR */

A_PROCEDURE(A68_VOID ,A68t135,(A68_BOOL ,struct A68t61 *),(A68_BOOL ,struct A68t61 *,void *));
typedef struct A68t135  A68_135 ;    /* PROC(BOOL) MODE61 */

A_PROCEDURE(A68_VOID ,A68t136,(struct A68t48 *),(struct A68t48 *,void *));
typedef struct A68t136  A68_136 ;    /* PROC MODE48 */
A_ISTRUCT(A68_CHAR ,102,A68t137);
typedef struct A68t137  A68_137 ;    /* STRUCT 102 CHAR */
A_VECTOR(struct A68t31 *,A68t138);
typedef struct A68t138  A68_138 ;    /* VECTOR [] REF MODE31 */
A_ISTRUCT(A68_VC ,2,A68t139);
typedef struct A68t139  A68_139 ;    /* STRUCT 2 MODE26 */

A_PROCEDURE(A68_VOID ,A68t140,(A68_VC ,struct A68t49 ,struct A68t48 *),(A68_VC ,struct A68t49 ,struct A68t48 *,void *));
typedef struct A68t140  A68_140 ;    /* PROC(MODE26,MODE49) MODE48 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from oscommon --- */
extern A68_113  BYAAOSI_nullfilename;
extern A68_VOID  AZAAOSI_parse_default(A68_VC ,A68_VC ,A68_113 *);
extern A68_VOID  UZAAOSI_parse_prompt(A68_VC ,A68_VC ,A68_61 *);
/* --- End of imports from oscommon --- */


/* --- Imports from osfiles --- */
extern A68_91 * INBAOSI_stdin;
extern A68_91 * JNBAOSI_stdout;
extern A68_BOOL  PPBAOSI_(struct A68t92 ,struct A68t92 );
extern A68_92  MPBAOSI_io_no_newline;
extern A68_VOID  SRBAOSI_read_line(struct A68t91 *,A68_VC ,A68_INT *,struct A68t49 ,A68_92 *);
extern A68_VOID  JSBAOSI_write_buffer(struct A68t91 *,A68_VC ,struct A68t49 ,A68_92 *);
/* --- End of imports from osfiles --- */


/* --- Imports from usefulops --- */
extern A68_VOID  JBAAOSI_concat(struct A68t48 ,A68_VC *);
extern A68_VOID  ZAAAOSI_makervc(A68_VC ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- Imports from messageproc --- */
extern A68_50  SHAAOSI_system;
extern A68_50  WHAAOSI_user;
extern A68_50  YHAAOSI_error;
/* --- End of imports from messageproc --- */


/* --- Imports from oserrors --- */
#include <errno.h>

#define XFBAOSI_errno errno
extern A68_49  ZLBAOSI_global_msg;
/* --- End of imports from oserrors --- */


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
extern void NXAAOSI(void);   /* oscommon */
extern void AMBAOSI(void);   /* osfiles */
extern void WPAAOSI(void);   /* usefulops */
extern void JFAAOSI(void);   /* messageproc */
extern void SFBAOSI(void);   /* oserrors */
extern void JDAAOSI(void);   /* cif */
/* --- end of DECS initialisation functions --- */
static A68_121   FMCAOSI = {"$Id: osshell.a68,v 34.2 1995/03/29 13:01:37 ella Exp $"}; 
A_GISVEC(A68_VC ,GMCAOSI,FMCAOSI,54)
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
       /* default if environ variable SHELL not set */
#define SHELL           "/bin/sh"
       /* limit on filename size (input and output) */
#define EXPAND_BUFSIZ   5000
#define NOSTR           NULL
   /* Are any of the characters in the two strings the same? */
int anyof(char *s1, char *s2)
{
        int c;
        while (c = *s1++)
                if (strchr(s2, c))
                        return(1);
        return(0);
}
/*
        Takes a file name, possibly with shell meta characters
        in it and expands it by using "sh -c echo filename",
        a pointer to the result is written into 'newname'.
        Returns status as follows:
        0 = success
        1 = not expanded
        2 = no match
        3 = Ambiguous (more than one match)
        4 = Expand buffer too small
        5 = 'pipe' failed
        6 = 'fork' failed
        7 = 'read' failed
        8 = 'echo' failed
*/
int expand(char *name, char **newname)
{
        static char xname[EXPAND_BUFSIZ];
        char *xlast = xname + EXPAND_BUFSIZ;
        char *xp = xname;
        char cmdbuf[EXPAND_BUFSIZ];
        register int pid, l;
        register char *cp, *Shell;
        int s, pivec[2];
        struct stat sbuf;
        if (!anyof(name, "~{[*?$`'\"\\")) {
                *newname = name;
                return(1);
        }
        if (pipe(pivec) < 0) {
                return(5);      /* pipe(2) failed */
        }
        sprintf(cmdbuf, "echo %s", name);
        if ((pid = fork()) == 0) {
                Shell = getenv("SHELL");
                if (Shell == NOSTR || *Shell=='\0')
                        Shell = SHELL;
                close(pivec[0]);
                close(1);
                dup(pivec[1]);
                close(pivec[1]);
                close(2);
                execlp(Shell, Shell, "-c", cmdbuf, 0);
                _exit(1);
        }
        if (pid == -1) {
                close(pivec[0]);
                close(pivec[1]);
                return(6);      /* fork(2) failed */
        }
        close(pivec[1]);
        do {
          l = read(pivec[0], xp, xlast-xp);
          if (l < 0) {
                return(7);      /* read(2) failed */
          }
          xp += l;
        } while(l>0);
        close(pivec[0]);
        while (wait(&s) != pid);
                ;
        s &= 0377;
        if (s != 0 && s != SIGPIPE) {
                return(8);      /* echo failed */
        }
        if (xp == xname) {
                return(2);      /* no match */
        }
        if (xp == xlast) {
                return(4);      /* expand buffer overflow */
        }
        *xp = 0;
        for (cp = xp-1; *cp == '\n' && cp > xname; cp--)
                ;
        *++cp = '\0';
        *newname = xname;
        if (strchr(xname, ' ') != NOSTR && stat(xname, &sbuf) < 0) {
                return(3);      /* ambiguous filename */
        }
        return(0);
}
#define EXPAND(name,newname) \
             A_int_INT(expand(A_VC_charptr(name),((void *)newname)))

#define HMCAOSI_cexpand EXPAND
static A68_124   QMCAOSI = {"shell expand - no match for string \""}; 
A_GISVEC(A68_VC ,RMCAOSI,QMCAOSI,36)
static A68_126   WMCAOSI = {"shell expand buffer too small"}; 
A_GISVEC(A68_VC ,XMCAOSI,WMCAOSI,29)
static A68_127   ZMCAOSI = {"shell expand call of 'pipe' failed"}; 
A_GISVEC(A68_VC ,ANCAOSI,ZMCAOSI,34)
static A68_127   CNCAOSI = {"shell expand call of 'fork' failed"}; 
A_GISVEC(A68_VC ,DNCAOSI,CNCAOSI,34)
static A68_127   FNCAOSI = {"shell expand call of 'read' failed"}; 
A_GISVEC(A68_VC ,GNCAOSI,FNCAOSI,34)
static A68_127   INCAOSI = {"shell expand call of 'echo' failed"}; 
A_GISVEC(A68_VC ,JNCAOSI,INCAOSI,34)
static A68_128   LNCAOSI = {"shell expand unexpected return"}; 
A_GISVEC(A68_VC ,MNCAOSI,LNCAOSI,30)
static A68_131   WOCAOSI = {"No match to file name \""}; 
A_GISVEC(A68_VC ,XOCAOSI,WOCAOSI,23)
static A68_132   YOCAOSI = {"\" found"}; 
A_GISVEC(A68_VC ,ZOCAOSI,YOCAOSI,7)
static A68_133   EPCAOSI = {"Multiple matches to file name \""}; 
A_GISVEC(A68_VC ,FPCAOSI,EPCAOSI,31)
static A68_132   GPCAOSI = {"\" found"}; 
A_GISVEC(A68_VC ,HPCAOSI,GPCAOSI,7)
static A68_134   OPCAOSI = {"Null file name \""}; 
A_GISVEC(A68_VC ,PPCAOSI,OPCAOSI,16)
extern int A_argc;
extern char **A_argv;
#define A_prelude(argc,argv) A_argc=argc; A_argv = argv

#define VPCAOSI_prelude A_prelude
int A_argc = 0;
char **A_argv = NULL;

#define WPCAOSI_define_argc_argv dummy
static A68_BOOL  XPCAOSI_args_initialised;
static A68_77   CQCAOSI = {"Anon"}; 
static A68_61  DQCAOSI_arguments;
static A68_137   MQCAOSI = {"get_args:  'argc' not initialised - has the correct prelude module been included in the main PROGRAM ?"}; 
A_GISVEC(A68_VC ,NQCAOSI,MQCAOSI,102)
typedef struct   /* env of non-global proc */
{
A68_49  Msg;
A68_VC  Default;
A68_130  XNCAOSI_call_expand;
} ZNCAOSI_call_expand;
typedef struct   /* env of non-global proc */
{
A68_INT  LQCAOSI_upb;
A_PAD_INT(PAD_17)
} SQCAOSI_generator;
typedef struct   /* env of non-global proc */
{
A68_46  MRCAOSI_read;
} ORCAOSI_read;
typedef struct   /* env of non-global proc */
{
int dummy;
} DOCAOSI_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} SRCAOSI_generator;

A_STATIC A68_INT  LMCAOSI_expand(A68_VC  Str, A68_VC * Ans, A68_49  Msg);

A68_VOID  TNCAOSI_parse_filename(A68_VC  Name, A68_VC  Default, A68_49  Msg, A68_113  *ReturnedValue);

A_STATIC A68_VOID  YNCAOSI_call_expand(A68_VC  Name, A68_BOOL  First_try, A68_113  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  COCAOSI_generator(A68_BOOL  AOCAOSI_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZPCAOSI_generator(A68_BOOL  YPCAOSI_anonymous, A68_61  *ReturnedValue);

A68_VOID  JQCAOSI_get_args(A68_48  *ReturnedValue);

A_STATIC A68_VOID  RQCAOSI_generator(A68_BOOL  PQCAOSI_anonymous, A68_61  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KRCAOSI_read_prompt(A68_VC  Prompt, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  NRCAOSI_read(A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RRCAOSI_generator(A68_BOOL  PRCAOSI_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  LSCAOSI_prompt_args(A68_VC  Prompt, A68_49  Msg, A68_48  *ReturnedValue);

A_STATIC A68_VOID  COCAOSI_generator(A68_BOOL  AOCAOSI_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((DOCAOSI_generator *)NonLocals)->x)
{ 
A68_VC  EOCAOSI;  /* clause result */
A68_VC  FOCAOSI;  /* OPERATORS - dynamic generator */
{ 
FOCAOSI.upb = 0 ;
( AOCAOSI_anonymous? A_VLOC(A68_CHAR ,FOCAOSI): A_VHEAP(A68_CHAR ,FOCAOSI) );
EOCAOSI = FOCAOSI;
} 
*ReturnedValue = (EOCAOSI);
return;
} 
#undef NL

A_STATIC A68_VOID  RRCAOSI_generator(A68_BOOL  PRCAOSI_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((SRCAOSI_generator *)NonLocals)->x)
{ 
A68_VC  TRCAOSI;  /* clause result */
A68_VC  URCAOSI;  /* OPERATORS - dynamic generator */
{ 
URCAOSI.upb = 512 ;
( PRCAOSI_anonymous? A_VLOC(A68_CHAR ,URCAOSI): A_VHEAP(A68_CHAR ,URCAOSI) );
TRCAOSI = URCAOSI;
} 
*ReturnedValue = (TRCAOSI);
return;
} 
#undef NL

A_STATIC A68_VOID  YNCAOSI_call_expand(A68_VC  Name, A68_BOOL  First_try, A68_113  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZNCAOSI_call_expand *)NonLocals)->x)
{ 
A68_54  BOCAOSI_generator;   /* proc value of non-global proc */
A68_VC  HOCAOSI;  /* avoid structure result */
A68_VC  GOCAOSI_expanded;
A68_INT  IOCAOSI_status;
A68_113  JOCAOSI;  /* clause result */
A68_VC  KOCAOSI;  /* avoid structure result */
A68_VC  LOCAOSI;  /* avoid structure result */
A68_113  MOCAOSI;  /* avoid structure result */
A68_VC  NOCAOSI;  /* avoid structure result */
A68_VC  OOCAOSI;  /* avoid structure result */
A68_113  POCAOSI;  /* avoid structure result */
A68_VC  QOCAOSI;  /* avoid structure result */
A68_VC  ROCAOSI;  /* avoid structure result */
A68_113  SOCAOSI;  /* avoid structure result */
A68_113  TOCAOSI_parsed;
A68_113  UOCAOSI;  /* avoid structure result */
A68_125  VOCAOSI;  /* collateral clause result */
A68_48  APCAOSI;  /* OPERATORS - istruct -> vector */
A68_VC  BPCAOSI;  /* avoid structure result */
A68_48  CPCAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_125  DPCAOSI;  /* collateral clause result */
A68_48  IPCAOSI;  /* OPERATORS - istruct -> vector */
A68_VC  JPCAOSI;  /* avoid structure result */
A68_48  KPCAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(call_expand);
 /* line 204: */
 /* line 206: */
{ 
A_CLOSURE( BOCAOSI_generator, COCAOSI_generator, DOCAOSI_generator );
A_CALLPROC(BOCAOSI_generator,(A68_FALSE, &HOCAOSI),(A68_FALSE, &HOCAOSI,(BOCAOSI_generator).nonlocals));
GOCAOSI_expanded = HOCAOSI;
 /* line 208: */
IOCAOSI_status = LMCAOSI_expand(Name, (&GOCAOSI_expanded), NL(Msg));
 /* line 209: */
 /* line 211: */
switch ( (IOCAOSI_status+1) )
{ 
case 1: 
 /* line 213: */
ZAAAOSI_makervc( NL(Default), &KOCAOSI );
ZAAAOSI_makervc( GOCAOSI_expanded, &LOCAOSI );
AZAAOSI_parse_default( LOCAOSI, KOCAOSI, &MOCAOSI );
JOCAOSI = MOCAOSI;
break;
case 2: 
 /* line 215: */
ZAAAOSI_makervc( NL(Default), &NOCAOSI );
ZAAAOSI_makervc( Name, &OOCAOSI );
AZAAOSI_parse_default( OOCAOSI, NOCAOSI, &POCAOSI );
JOCAOSI = POCAOSI;
break;
case 3: 
 /* line 216: */
if ( First_try )
{ 
ZAAAOSI_makervc( NL(Default), &QOCAOSI );
ZAAAOSI_makervc( Name, &ROCAOSI );
AZAAOSI_parse_default( ROCAOSI, QOCAOSI, &SOCAOSI );
TOCAOSI_parsed = SOCAOSI;
 /* line 217: */
 /* line 218: */
A_CALLPROC(NL(XNCAOSI_call_expand),(TOCAOSI_parsed.Filename, A68_FALSE, &UOCAOSI),(TOCAOSI_parsed.Filename, A68_FALSE, &UOCAOSI,(NL(XNCAOSI_call_expand)).nonlocals));
JOCAOSI = UOCAOSI;
} 
else
{ 
 /* line 219: */
VOCAOSI.data[0] = XOCAOSI;
VOCAOSI.data[1] = Name;
VOCAOSI.data[2] = ZOCAOSI;
JBAAOSI_concat( A_HISVEC(APCAOSI,VOCAOSI,3,A68_VC ), &BPCAOSI );
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(CPCAOSI,BPCAOSI,A68_VC )),(WHAAOSI_user, A_HVEC(CPCAOSI,BPCAOSI,A68_VC ),(NL(Msg)).nonlocals));
 /* line 220: */
 /* line 221: */
 /* line 223: */
JOCAOSI = BYAAOSI_nullfilename;
} 
break;
case 4: 
{ 
 /* line 224: */
DPCAOSI.data[0] = FPCAOSI;
DPCAOSI.data[1] = Name;
DPCAOSI.data[2] = HPCAOSI;
JBAAOSI_concat( A_HISVEC(IPCAOSI,DPCAOSI,3,A68_VC ), &JPCAOSI );
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(KPCAOSI,JPCAOSI,A68_VC )),(WHAAOSI_user, A_HVEC(KPCAOSI,JPCAOSI,A68_VC ),(NL(Msg)).nonlocals));
 /* line 225: */
 /* line 226: */
 /* line 227: */
 /* line 228: */
JOCAOSI = BYAAOSI_nullfilename;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(call_expand);
*ReturnedValue = (JOCAOSI);
return;
} 
#undef NL

A_STATIC A68_VOID  RQCAOSI_generator(A68_BOOL  PQCAOSI_anonymous, A68_61  *ReturnedValue, void *NonLocals)
#define NL(x) (((SQCAOSI_generator *)NonLocals)->x)
{ 
A68_61  TQCAOSI;  /* clause result */
A68_61  UQCAOSI;  /* OPERATORS - dynamic generator */
{ 
UQCAOSI.upb = NL(LQCAOSI_upb) ;
( PQCAOSI_anonymous? A_VLOC(A68_VC ,UQCAOSI): A_VHEAP(A68_VC ,UQCAOSI) );
TQCAOSI = UQCAOSI;
} 
*ReturnedValue = (TQCAOSI);
return;
} 
#undef NL

A_STATIC A68_VOID  NRCAOSI_read(A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ORCAOSI_read *)NonLocals)->x)
{ 
A68_54  QRCAOSI_generator;   /* proc value of non-global proc */
A68_VC  VRCAOSI;  /* avoid structure result */
A68_VC  WRCAOSI_ans;
A68_INT  XRCAOSI_l;
A68_92  YRCAOSI;  /* avoid structure result */
A68_139  ZRCAOSI;  /* collateral clause result */
A68_VC  ASCAOSI;  /* OPERATORS - trim index */
A68_VC  BSCAOSI;  /* avoid structure result */
A68_VC  CSCAOSI;  /* clause result */
A68_48  DSCAOSI;  /* OPERATORS - istruct -> vector */
A68_VC  ESCAOSI;  /* avoid structure result */
A68_VC  FSCAOSI;  /* OPERATORS - trim index */
A_PROC_ENTRY(read);
{ 
A_CLOSURE( QRCAOSI_generator, RRCAOSI_generator, SRCAOSI_generator );
A_CALLPROC(QRCAOSI_generator,(A68_FALSE, &VRCAOSI),(A68_FALSE, &VRCAOSI,(QRCAOSI_generator).nonlocals));
WRCAOSI_ans = VRCAOSI;
 /* line 292: */
XRCAOSI_l = 0;
 /* line 293: */
 /* line 294: */
SRBAOSI_read_line( INBAOSI_stdin, WRCAOSI_ans, (&XRCAOSI_l), ZLBAOSI_global_msg, &YRCAOSI );
if ( PPBAOSI_(YRCAOSI, MPBAOSI_io_no_newline) )
{ 
ZRCAOSI.data[0] = A_VTRIM(ASCAOSI,(WRCAOSI_ans),A_VTSCRIPT(&(ASCAOSI.upb),(WRCAOSI_ans).upb,1,XRCAOSI_l));
A_CALLPROC(NL(MRCAOSI_read),( &BSCAOSI),( &BSCAOSI,(NL(MRCAOSI_read)).nonlocals));
ZRCAOSI.data[1] = BSCAOSI;
 /* line 295: */
JBAAOSI_concat( A_HISVEC(DSCAOSI,ZRCAOSI,2,A68_VC ), &ESCAOSI );
CSCAOSI = ESCAOSI;
} 
else
{ 
 /* line 296: */
 /* line 297: */
CSCAOSI = A_VTRIM(FSCAOSI,(WRCAOSI_ans),A_VTSCRIPT(&(FSCAOSI.upb),(WRCAOSI_ans).upb,1,XRCAOSI_l));
} 
} 
A_PROC_EXIT(read);
*ReturnedValue = (CSCAOSI);
return;
} 
#undef NL

A_STATIC A68_INT  LMCAOSI_expand(A68_VC  Str, A68_VC * Ans, A68_49  Msg)
{ 
A68_31 * MMCAOSI_xname;
A68_VC  NMCAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  OMCAOSI_status;
A68_125  PMCAOSI;  /* collateral clause result */
A68_VC  SMCAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_48  TMCAOSI;  /* OPERATORS - istruct -> vector */
A68_VC  UMCAOSI;  /* avoid structure result */
A68_48  VMCAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_48  YMCAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_48  BNCAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_48  ENCAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_48  HNCAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_48  KNCAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_48  NNCAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ONCAOSI;  /* avoid structure result */
A68_INT  PNCAOSI;  /* clause result */
A_PROC_ENTRY(expand);
 /* line 174: */
 /* line 176: */
{ 
MMCAOSI_xname = (A68_31 *)A68_NIL;
 /* line 177: */
OMCAOSI_status = HMCAOSI_cexpand(A_VC_PLUS(Str,A_HVEC(NMCAOSI,(A68_CHAR)0,A68_CHAR )), (&MMCAOSI_xname));
 /* line 178: */
 /* line 179: */
switch ( OMCAOSI_status )
{ 
case 1: 
 /* line 180: */
/*SKIP*/;
break;
case 2: 
PMCAOSI.data[0] = RMCAOSI;
PMCAOSI.data[1] = Str;
PMCAOSI.data[2] = A_HVEC(SMCAOSI,'\"',A68_CHAR );
 /* line 181: */
JBAAOSI_concat( A_HISVEC(TMCAOSI,PMCAOSI,3,A68_VC ), &UMCAOSI );
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(VMCAOSI,UMCAOSI,A68_VC )),(WHAAOSI_user, A_HVEC(VMCAOSI,UMCAOSI,A68_VC ),(Msg).nonlocals));
break;
case 3: 
 /* line 182: */
/*SKIP*/;
break;
case 4: 
 /* line 183: */
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(YMCAOSI,XMCAOSI,A68_VC )),(WHAAOSI_user, A_HVEC(YMCAOSI,XMCAOSI,A68_VC ),(Msg).nonlocals));
break;
case 5: 
 /* line 184: */
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(BNCAOSI,ANCAOSI,A68_VC )),(WHAAOSI_user, A_HVEC(BNCAOSI,ANCAOSI,A68_VC ),(Msg).nonlocals));
break;
case 6: 
 /* line 185: */
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(ENCAOSI,DNCAOSI,A68_VC )),(WHAAOSI_user, A_HVEC(ENCAOSI,DNCAOSI,A68_VC ),(Msg).nonlocals));
break;
case 7: 
 /* line 186: */
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(HNCAOSI,GNCAOSI,A68_VC )),(WHAAOSI_user, A_HVEC(HNCAOSI,GNCAOSI,A68_VC ),(Msg).nonlocals));
break;
case 8: 
 /* line 187: */
 /* line 188: */
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(KNCAOSI,JNCAOSI,A68_VC )),(WHAAOSI_user, A_HVEC(KNCAOSI,JNCAOSI,A68_VC ),(Msg).nonlocals));
break;
default: 
if ( (OMCAOSI_status!=0) )
{ 
 /* line 189: */
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(NNCAOSI,MNCAOSI,A68_VC )),(SHAAOSI_system, A_HVEC(NNCAOSI,MNCAOSI,A68_VC ),(Msg).nonlocals));
} 
break;
} 
 /* line 190: */
UDAAOSI_cstringtorvc( MMCAOSI_xname, &ONCAOSI );
(*Ans) = ONCAOSI;
 /* line 191: */
 /* line 192: */
PNCAOSI = OMCAOSI_status;
} 
A_PROC_EXIT(expand);
return( PNCAOSI );
} 
#undef NL

A68_VOID  TNCAOSI_parse_filename(A68_VC  Name, A68_VC  Default, A68_49  Msg, A68_113  *ReturnedValue)
{ 
A68_130  XNCAOSI_call_expand;   /* proc value of non-global proc */
A68_113  LPCAOSI;  /* avoid structure result */
A68_113  MPCAOSI_ans;
A68_125  NPCAOSI;  /* collateral clause result */
A68_VC  QPCAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_48  RPCAOSI;  /* OPERATORS - istruct -> vector */
A68_VC  SPCAOSI;  /* avoid structure result */
A68_48  TPCAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_113  UPCAOSI;  /* clause result */
A_PROC_ENTRY(parse_filename);
 /* line 200: */
 /* line 203: */
{ 
A_CLOSURE( XNCAOSI_call_expand, YNCAOSI_call_expand, ZNCAOSI_call_expand );
(( ZNCAOSI_call_expand * ) ( XNCAOSI_call_expand.nonlocals )) -> Msg = Msg;
(( ZNCAOSI_call_expand * ) ( XNCAOSI_call_expand.nonlocals )) -> Default = Default;
(( ZNCAOSI_call_expand * ) ( XNCAOSI_call_expand.nonlocals )) -> XNCAOSI_call_expand = XNCAOSI_call_expand;
 /* line 230: */
A_CALLPROC(XNCAOSI_call_expand,(Name, A68_TRUE, &LPCAOSI),(Name, A68_TRUE, &LPCAOSI,(XNCAOSI_call_expand).nonlocals));
MPCAOSI_ans = LPCAOSI;
 /* line 232: */
 /* line 233: */
 /* line 234: */
if ( (MPCAOSI_ans.Name.upb==0) )
{ 
NPCAOSI.data[0] = PPCAOSI;
NPCAOSI.data[1] = MPCAOSI_ans.Filename;
NPCAOSI.data[2] = A_HVEC(QPCAOSI,'\"',A68_CHAR );
 /* line 235: */
JBAAOSI_concat( A_HISVEC(RPCAOSI,NPCAOSI,3,A68_VC ), &SPCAOSI );
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(TPCAOSI,SPCAOSI,A68_VC )),(WHAAOSI_user, A_HVEC(TPCAOSI,SPCAOSI,A68_VC ),(Msg).nonlocals));
} 
 /* line 237: */
 /* line 238: */
UPCAOSI = MPCAOSI_ans;
} 
A_PROC_EXIT(parse_filename);
*ReturnedValue = (UPCAOSI);
return;
} 
#undef NL

A_STATIC A68_VOID  ZPCAOSI_generator(A68_BOOL  YPCAOSI_anonymous, A68_61  *ReturnedValue)
{ 
A68_61  AQCAOSI;  /* clause result */
A68_61  BQCAOSI;  /* OPERATORS - dynamic generator */
{ 
BQCAOSI.upb = 1 ;
( YPCAOSI_anonymous? A_VLOC(A68_VC ,BQCAOSI): A_VHEAP(A68_VC ,BQCAOSI) );
AQCAOSI = BQCAOSI;
} 
*ReturnedValue = (AQCAOSI);
return;
} 
#undef NL

A68_VOID  JQCAOSI_get_args(A68_48  *ReturnedValue)
{ 
A68_INT  KQCAOSI;  /* yeild of code insert */
A68_INT  LQCAOSI_upb;
A68_48  OQCAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_135  QQCAOSI_generator;   /* proc value of non-global proc */
A68_61  VQCAOSI;  /* avoid structure result */
A68_32 * WQCAOSI;  /* yeild of code insert */
A68_32 * XQCAOSI_myargv;
A68_31 ** YQCAOSI_new;
A68_VC * ZQCAOSI_arg;
A68_138  ARCAOSI;  /* OPERATORS - istruct -> vector */
A68_138  BRCAOSI;  /* OPERATORS - trim index */
A68_138  CRCAOSI;  /* OPERATORS - trim index */
A68_138  DRCAOSI;  /* forall yield */
A68_INT  ERCAOSI;  /* forall loop counter */
A68_VC  FRCAOSI;  /* avoid structure result */
A68_VC  GRCAOSI;  /* avoid structure result */
A68_48  HRCAOSI;  /* clause result */
union {  /* BIOP 99 */
A68_61   source;
A68_48   destination;
} IRCAOSI; 
A_PROC_ENTRY(get_args);
{ 
 /* line 268: */
 /* line 269: */
if ( !XPCAOSI_args_initialised )
{ 
#define RESULT KQCAOSI
{RESULT=A_argc;
}
#undef RESULT
LQCAOSI_upb = KQCAOSI;
 /* line 271: */
 /* line 272: */
if ( (LQCAOSI_upb==0) )
{ 
 /* line 273: */
 /* line 274: */
A_CALLPROC(ZLBAOSI_global_msg,(YHAAOSI_error, A_HVEC(OQCAOSI,NQCAOSI,A68_VC )),(YHAAOSI_error, A_HVEC(OQCAOSI,NQCAOSI,A68_VC ),(ZLBAOSI_global_msg).nonlocals));
} 
else
{ 
A_CLOSURE( QQCAOSI_generator, RQCAOSI_generator, SQCAOSI_generator );
(( SQCAOSI_generator * ) ( QQCAOSI_generator.nonlocals )) -> LQCAOSI_upb = LQCAOSI_upb;
A_CALLPROC(QQCAOSI_generator,(A68_FALSE, &VQCAOSI),(A68_FALSE, &VQCAOSI,(QQCAOSI_generator).nonlocals));
DQCAOSI_arguments = VQCAOSI;
 /* line 276: */
#define RESULT WQCAOSI
{RESULT = (void *)A_argv;
}
#undef RESULT
XQCAOSI_myargv = WQCAOSI;
 /* line 278: */
 /* line 279: */
BRCAOSI = A_ISVEC(ARCAOSI,XQCAOSI_myargv,16000000,A68_31 *) ;
DRCAOSI = A_VTRIM(CRCAOSI,(BRCAOSI),A_VTSCRIPT(&(CRCAOSI.upb),(BRCAOSI).upb,1,LQCAOSI_upb)) ;
ERCAOSI = DRCAOSI.upb -1;
if ( ERCAOSI != DQCAOSI_arguments.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
YQCAOSI_new = DRCAOSI.data;
ZQCAOSI_arg = DQCAOSI_arguments.data;
for (;ERCAOSI-- >= 0;
(YQCAOSI_new++
,ZQCAOSI_arg++
) )
{
UDAAOSI_cstringtorvc( (*YQCAOSI_new), &FRCAOSI );
ZAAAOSI_makervc( FRCAOSI, &GRCAOSI );
(*ZQCAOSI_arg) = GRCAOSI;
}
 /* line 280: */
} 
 /* line 281: */
 /* line 282: */
XPCAOSI_args_initialised = A68_TRUE;
} 
 /* line 284: */
 /* line 285: */
IRCAOSI.source = DQCAOSI_arguments ;
HRCAOSI = (IRCAOSI.destination);
} 
A_PROC_EXIT(get_args);
*ReturnedValue = (HRCAOSI);
return;
} 
#undef NL

A_STATIC A68_VOID  KRCAOSI_read_prompt(A68_VC  Prompt, A68_VC  *ReturnedValue)
{ 
A68_46  MRCAOSI_read;   /* proc value of non-global proc */
A68_92  GSCAOSI;  /* avoid structure result */
A68_VC  HSCAOSI;  /* clause result */
A68_VC  ISCAOSI;  /* avoid structure result */
A_PROC_ENTRY(read_prompt);
 /* line 288: */
 /* line 289: */
{ 
 /* line 290: */
 /* line 291: */
A_CLOSURE( MRCAOSI_read, NRCAOSI_read, ORCAOSI_read );
(( ORCAOSI_read * ) ( MRCAOSI_read.nonlocals )) -> MRCAOSI_read = MRCAOSI_read;
 /* line 298: */
JSBAOSI_write_buffer( JNBAOSI_stdout, Prompt, ZLBAOSI_global_msg, &GSCAOSI );
GSCAOSI;
 /* line 299: */
 /* line 300: */
A_CALLPROC(MRCAOSI_read,( &ISCAOSI),( &ISCAOSI,(MRCAOSI_read).nonlocals));
HSCAOSI = ISCAOSI;
} 
A_PROC_EXIT(read_prompt);
*ReturnedValue = (HSCAOSI);
return;
} 
#undef NL

A68_VOID  LSCAOSI_prompt_args(A68_VC  Prompt, A68_49  Msg, A68_48  *ReturnedValue)
{ 
A68_48  MSCAOSI;  /* avoid structure result */
A68_VC  NSCAOSI;  /* avoid structure result */
A68_VC  OSCAOSI_buffer;
A68_VC  QSCAOSI;  /* OPERATORS - nil -> mode */
A68_VC  PSCAOSI_expanded;
A68_INT  RSCAOSI;  /* YIELD */
A68_61  SSCAOSI;  /* avoid structure result */
A68_48  TSCAOSI;  /* clause result */
union {  /* BIOP 99 */
A68_61   source;
A68_48   destination;
} USCAOSI; 
A_PROC_ENTRY(prompt_args);
 /* line 313: */
 /* line 314: */
{ 
if ( !XPCAOSI_args_initialised )
{ 
JQCAOSI_get_args(  &MSCAOSI );
MSCAOSI;
} 
 /* line 315: */
KRCAOSI_read_prompt( Prompt, &NSCAOSI );
OSCAOSI_buffer = NSCAOSI;
 /* line 316: */
PSCAOSI_expanded = (A_VVAC(QSCAOSI));
 /* line 317: */
LMCAOSI_expand(OSCAOSI_buffer, (&PSCAOSI_expanded), Msg);
 /* line 318: */
RSCAOSI = 1 ;
UZAAOSI_parse_prompt( (*(&A_VINDEX(DQCAOSI_arguments,RSCAOSI))), PSCAOSI_expanded, &SSCAOSI );
DQCAOSI_arguments = SSCAOSI;
 /* line 319: */
 /* line 320: */
 /* line 323: */
USCAOSI.source = DQCAOSI_arguments ;
TSCAOSI = (USCAOSI.destination);
} 
A_PROC_EXIT(prompt_args);
*ReturnedValue = (TSCAOSI);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 6: */
void CMCAOSI(void)   /* initialise DECS osshell */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","./mfiles","-staredit","259","./a68files/osshell.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/oscommon.m","./mfiles/osfiles.m","./mfiles/usefulops.m","./mfiles/messageproc.m","./mfiles/oserrors.m","./mfiles/cif.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_61  EQCAOSI;  /* avoid structure result */
A68_77 * FQCAOSI;  /* YIELD */
A68_VC  GQCAOSI;  /* OPERATORS - istruct -> vector */
A68_61  HQCAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_61  IQCAOSI;  /* OPERATORS - assign op */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
NXAAOSI();   /* USE oscommon */
AMBAOSI();   /* USE osfiles */
WPAAOSI();   /* USE usefulops */
JFAAOSI();   /* USE messageproc */
SFBAOSI();   /* USE oserrors */
JDAAOSI();   /* USE cif */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/osif/assoc/./a68files/osshell.a68";
A_config.translation_time = "Tue Apr  4 09:24:50 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "BMCAOSI (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:24:50 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS osshell);
UEAALIB_a68config(LGAALIB_configinfo, GMCAOSI);
 /* line 61: */
 /* line 62: */
 /* line 63: */
 /* line 64: */
 /* line 65: */
 /* line 66: */
 /* line 67: */
 /* line 68: */
 /* line 69: */
 /* line 70: */
 /* line 71: */
 /* line 72: */
 /* line 73: */
 /* line 75: */
 /* line 76: */
 /* line 77: */
 /* line 78: */
 /* line 80: */
 /* line 81: */
 /* line 82: */
 /* line 83: */
 /* line 84: */
 /* line 86: */
 /* line 87: */
 /* line 88: */
 /* line 89: */
 /* line 90: */
 /* line 91: */
 /* line 92: */
 /* line 93: */
 /* line 94: */
 /* line 95: */
 /* line 96: */
 /* line 97: */
 /* line 98: */
 /* line 99: */
 /* line 100: */
 /* line 102: */
 /* line 103: */
 /* line 104: */
 /* line 105: */
 /* line 106: */
 /* line 107: */
 /* line 108: */
 /* line 109: */
 /* line 110: */
 /* line 111: */
 /* line 113: */
 /* line 114: */
 /* line 115: */
 /* line 116: */
 /* line 117: */
 /* line 118: */
 /* line 119: */
 /* line 120: */
 /* line 121: */
 /* line 122: */
 /* line 123: */
 /* line 124: */
 /* line 125: */
 /* line 126: */
 /* line 127: */
 /* line 128: */
 /* line 129: */
 /* line 130: */
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
 /* line 173: */
 /* line 199: */
 /* line 247: */
 /* line 248: */
 /* line 249: */
 /* line 250: */
 /* line 251: */
 /* line 254: */
 /* line 255: */
 /* line 256: */
 /* line 257: */
 /* line 259: */
XPCAOSI_args_initialised = A68_FALSE;
 /* line 260: */
ZPCAOSI_generator( A68_TRUE, &EQCAOSI );
FQCAOSI = A_LOC(A68_77 ) ;
(*FQCAOSI) = CQCAOSI ;
IQCAOSI = A_HVEC(HQCAOSI,A_ISVEC(GQCAOSI,FQCAOSI,4,A68_CHAR ),A68_VC ) ;
A_VASSIGN2(IQCAOSI,EQCAOSI,A68_VC ) ;
DQCAOSI_arguments = EQCAOSI;
 /* line 262: */
 /* line 266: */
 /* line 267: */
 /* line 287: */
 /* line 303: */
 /* line 324: */
A_PROC_EXIT(DECS osshell);
} 
#undef NL
/* end of translation of ./a68files/osshell.a68 */
