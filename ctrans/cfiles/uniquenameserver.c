
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
/* UNAME:QHMACTR */
#include "Asupport.h"

A_PROCEDURE(A68_INT *,A68t31,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t31  A68_31 ;    /* PROC(REF INT,MODE26) REF INT */

A_PROCEDURE(A68_VOID ,A68t32,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t32  A68_32 ;    /* PROC(REF MODE26,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t33,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t33  A68_33 ;    /* PROC(REF MODE26,CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t34,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t34  A68_34 ;    /* PROC(MODE26,CHAR) MODE26 */
struct A68t36 ;

A_PROCEDURE(A68_VOID ,A68t35,(struct A68t36 ,A68_VC *),(struct A68t36 ,A68_VC *,void *));
typedef struct A68t35  A68_35 ;    /* PROC(MODE36) REF MODE26 */
A_VECTOR(A68_VC ,A68t36);
typedef struct A68t36  A68_36 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_INT ,A68t37,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t37  A68_37 ;    /* PROC(CHAR,MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t38,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t38  A68_38 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t39,(A68_VC ,A68_CHAR ),(A68_VC ,A68_CHAR ,void *));
typedef struct A68t39  A68_39 ;    /* PROC(REF MODE26,CHAR) VOID */
A_ISTRUCT(A68_CHAR ,4,A68t40);
typedef struct A68t40  A68_40 ;    /* STRUCT 4 CHAR */

A_PROCEDURE(struct A68t40 ,A68t41,(A68_INT ),(A68_INT ,void *));
typedef struct A68t41  A68_41 ;    /* PROC(INT) MODE40 */

A_PROCEDURE(A68_INT ,A68t42,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t42  A68_42 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_VOID ,A68t43,(A68_CHAR ,A68_VC ,A68_VC *),(A68_CHAR ,A68_VC ,A68_VC *,void *));
typedef struct A68t43  A68_43 ;    /* PROC(CHAR,REF MODE26) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t44,(A68_VC ),(A68_VC ,void *));
typedef struct A68t44  A68_44 ;    /* PROC(MODE26) INT */

A_PROCEDURE(A68_BITS ,A68t45,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t45  A68_45 ;    /* PROC(BITS,BITS) BITS */

A_PROCEDURE(A68_LBITS ,A68t46,(A68_LBITS ,A68_LBITS ),(A68_LBITS ,A68_LBITS ,void *));
typedef struct A68t46  A68_46 ;    /* PROC(LONG BITS,LONG BITS) LONG BITS */

A_PROCEDURE(A68_BITS *,A68t47,(A68_BITS *,A68_BITS ),(A68_BITS *,A68_BITS ,void *));
typedef struct A68t47  A68_47 ;    /* PROC(REF BITS,BITS) REF BITS */

A_PROCEDURE(A68_VOID ,A68t48,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t49,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t49  A68_49 ;    /* PROC(INT,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t50,(A68_LINT ,A68_INT ,A68_VC *),(A68_LINT ,A68_INT ,A68_VC *,void *));
typedef struct A68t50  A68_50 ;    /* PROC(LONG INT,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t51,(A68_CHAR ,A68_INT *,A68_VC ),(A68_CHAR ,A68_INT *,A68_VC ,void *));
typedef struct A68t51  A68_51 ;    /* PROC(CHAR,REF INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t52,(A68_LBITS ,A68_INT ,A68_VC *),(A68_LBITS ,A68_INT ,A68_VC *,void *));
typedef struct A68t52  A68_52 ;    /* PROC(LONG BITS,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t53,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t53  A68_53 ;    /* PROC(REF INT,MODE26) BOOL */
A_ISTRUCT(A68_CHAR ,16000000,A68t54);
typedef struct A68t54  A68_54 ;    /* STRUCT 16000000 CHAR */
A_ISTRUCT(struct A68t54 *,16000000,A68t55);
typedef struct A68t55  A68_55 ;    /* STRUCT 16000000 REF MODE54 */

A_PROCEDURE(A68_VOID ,A68t56,(struct A68t54 *,A68_VC *),(struct A68t54 *,A68_VC *,void *));
typedef struct A68t56  A68_56 ;    /* PROC(REF MODE54) REF MODE26 */

A_PROCEDURE(A68_CHAR *,A68t57,(A68_VC ),(A68_VC ,void *));
typedef struct A68t57  A68_57 ;    /* PROC(MODE26) REF CHAR */
A_VECTOR(A68_INT ,A68t58);
typedef struct A68t58  A68_58 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_INT *,A68t59,(struct A68t58 ),(struct A68t58 ,void *));
typedef struct A68t59  A68_59 ;    /* PROC(MODE58) REF INT */

A_PROCEDURE(A68_CHAR *,A68t60,(struct A68t54 *),(struct A68t54 *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(REF MODE54) REF CHAR */

A_PROCEDURE(struct A68t54 *,A68t61,(A68_CHAR *),(A68_CHAR *,void *));
typedef struct A68t61  A68_61 ;    /* PROC(REF CHAR) REF MODE54 */

A_PROCEDURE(A68_VOID ,A68t62,(void),(void *));
typedef struct A68t62  A68_62 ;    /* PROC VOID */
struct A68t63{
A68_BITS * Cp;
struct A68t54 * Env;
};
typedef struct A68t63  A68_63 ;    /* STRUCT(REF BITS,REF MODE54)  */

A_PROCEDURE(struct A68t63 *,A68t64,(struct A68t62 *),(struct A68t62 *,void *));
typedef struct A68t64  A68_64 ;    /* PROC(REF MODE62) REF MODE63 */

A_PROCEDURE(A68_VOID ,A68t65,(struct A68t62 ,struct A68t63 *),(struct A68t62 ,struct A68t63 *,void *));
typedef struct A68t65  A68_65 ;    /* PROC(MODE62) MODE63 */

A_PROCEDURE(A68_VOID ,A68t66,(A68_INT ),(A68_INT ,void *));
typedef struct A68t66  A68_66 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t67,(struct A68t66 ,struct A68t63 *),(struct A68t66 ,struct A68t63 *,void *));
typedef struct A68t67  A68_67 ;    /* PROC(MODE66) MODE63 */

A_PROCEDURE(A68_VOID ,A68t68,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t68  A68_68 ;    /* PROC(MODE26) MODE26 */
struct A68t70 ;

A_PROCEDURE(A68_VOID ,A68t69,(struct A68t70 ,struct A68t36 ),(struct A68t70 ,struct A68t36 ,void *));
typedef struct A68t69  A68_69 ;    /* PROC(MODE70,MODE36) VOID */
struct A68t70{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t71 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t70  A68_70 ;    /* STRUCT(INT,REF MODE71,BITS)  */
A_VECTOR(struct A68t73 ,A68t72);
typedef struct A68t72  A68_72 ;    /* VECTOR [] MODE73 */
struct A68t73{
struct A68t70  Msgno;
A68_VC  Text;
};
typedef struct A68t73  A68_73 ;    /* STRUCT(MODE70,REF MODE26)  */
struct A68t71{
A68_VC  Name;
struct A68t72  Messages;
};
typedef struct A68t71  A68_71 ;    /* STRUCT(REF MODE26,REF MODE72)  */
struct A68t74{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t74  A68_74 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t75{
A68_INT  Status;
A_PAD_INT(PAD_3)
};
typedef struct A68t75  A68_75 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_BOOL ,A68t76,(struct A68t75 ,struct A68t75 ),(struct A68t75 ,struct A68t75 ,void *));
typedef struct A68t76  A68_76 ;    /* PROC(MODE75,MODE75) BOOL */
struct A68t77{
struct A68t40  Access;
A_PAD_ISTRUCT(A68_40 ,PAD_4)
};
typedef struct A68t77  A68_77 ;    /* STRUCT(MODE40)  */

A_PROCEDURE(A68_VOID ,A68t78,(struct A68t74 *,A68_VC *),(struct A68t74 *,A68_VC *,void *));
typedef struct A68t78  A68_78 ;    /* PROC(REF MODE74) MODE26 */

A_PROCEDURE(struct A68t74 *,A68t79,(A68_VC ,struct A68t77 ,struct A68t69 ),(A68_VC ,struct A68t77 ,struct A68t69 ,void *));
typedef struct A68t79  A68_79 ;    /* PROC(MODE26,MODE77,MODE69) REF MODE74 */

A_PROCEDURE(A68_VOID ,A68t80,(struct A68t74 *,struct A68t69 ),(struct A68t74 *,struct A68t69 ,void *));
typedef struct A68t80  A68_80 ;    /* PROC(REF MODE74,MODE69) VOID */

A_PROCEDURE(A68_VOID ,A68t81,(struct A68t74 *,A68_VC ,A68_INT *,struct A68t69 ,struct A68t75 *),(struct A68t74 *,A68_VC ,A68_INT *,struct A68t69 ,struct A68t75 *,void *));
typedef struct A68t81  A68_81 ;    /* PROC(REF MODE74,REF MODE26,REF INT,MODE69) MODE75 */

A_PROCEDURE(A68_VOID ,A68t82,(struct A68t74 *,A68_VC ,struct A68t69 ,struct A68t75 *),(struct A68t74 *,A68_VC ,struct A68t69 ,struct A68t75 *,void *));
typedef struct A68t82  A68_82 ;    /* PROC(REF MODE74,MODE26,MODE69) MODE75 */

A_PROCEDURE(A68_VOID ,A68t83,(struct A68t74 *,A68_LINT ,struct A68t69 ,struct A68t75 *),(struct A68t74 *,A68_LINT ,struct A68t69 ,struct A68t75 *,void *));
typedef struct A68t83  A68_83 ;    /* PROC(REF MODE74,LONG INT,MODE69) MODE75 */

A_PROCEDURE(A68_VOID ,A68t84,(struct A68t74 *,A68_LINT *,struct A68t69 ,struct A68t75 *),(struct A68t74 *,A68_LINT *,struct A68t69 ,struct A68t75 *,void *));
typedef struct A68t84  A68_84 ;    /* PROC(REF MODE74,REF LONG INT,MODE69) MODE75 */

A_PROCEDURE(A68_VOID ,A68t85,(struct A68t74 *,struct A68t69 ,struct A68t75 *),(struct A68t74 *,struct A68t69 ,struct A68t75 *,void *));
typedef struct A68t85  A68_85 ;    /* PROC(REF MODE74,MODE69) MODE75 */

A_PROCEDURE(A68_VOID ,A68t86,(A68_VC ,struct A68t69 ,struct A68t75 *),(A68_VC ,struct A68t69 ,struct A68t75 *,void *));
typedef struct A68t86  A68_86 ;    /* PROC(MODE26,MODE69) MODE75 */

A_PROCEDURE(A68_VOID ,A68t87,(A68_VC ,A68_VC ,struct A68t69 ,struct A68t75 *),(A68_VC ,A68_VC ,struct A68t69 ,struct A68t75 *,void *));
typedef struct A68t87  A68_87 ;    /* PROC(MODE26,MODE26,MODE69) MODE75 */

A_PROCEDURE(A68_VOID ,A68t88,(A68_VC ,A68_VC ,struct A68t69 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t69 ,A68_VC *,void *));
typedef struct A68t88  A68_88 ;    /* PROC(MODE26,MODE26,MODE69) MODE26 */
struct A68t89{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_5)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_6)
A68_SINT  Device;
A_PAD_SINT(PAD_7)
A68_SINT  Links;
A_PAD_SINT(PAD_8)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_9)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_10)
A68_LINT  Size;
A_PAD_LINT(PAD_11)
A68_LINT  Accessed;
A_PAD_LINT(PAD_12)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_13)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_14)
};
typedef struct A68t89  A68_89 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t91 ;

A_PROCEDURE(struct A68t89 *,A68t90,(struct A68t91 ,struct A68t69 ),(struct A68t91 ,struct A68t69 ,void *));
typedef struct A68t90  A68_90 ;    /* PROC(MODE91,MODE69) REF MODE89 */
struct A68t91 { A68_INT mode; union {
struct A68t74 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t91  A68_91 ;    /* UNION(REF MODE74,MODE26)  */

A_PROCEDURE(A68_BOOL ,A68t92,(struct A68t74 *),(struct A68t74 *,void *));
typedef struct A68t92  A68_92 ;    /* PROC(REF MODE74) BOOL */

A_PROCEDURE(A68_BITS *,A68t93,(A68_VC ,struct A68t69 ),(A68_VC ,struct A68t69 ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(MODE26,MODE69) REF BITS */

A_PROCEDURE(A68_VOID ,A68t94,(A68_BITS *,struct A68t69 ),(A68_BITS *,struct A68t69 ,void *));
typedef struct A68t94  A68_94 ;    /* PROC(REF BITS,MODE69) VOID */

A_PROCEDURE(A68_VOID ,A68t95,(A68_BITS *,struct A68t69 ,A68_VC *),(A68_BITS *,struct A68t69 ,A68_VC *,void *));
typedef struct A68t95  A68_95 ;    /* PROC(REF BITS,MODE69) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t96,(A68_VC *),(A68_VC *,void *));
typedef struct A68t96  A68_96 ;    /* PROC MODE26 */

A_PROCEDURE(A68_LINT ,A68t97,(void),(void *));
typedef struct A68t97  A68_97 ;    /* PROC LONG INT */

A_PROCEDURE(A68_VOID ,A68t98,(A68_LINT ,A68_VC *),(A68_LINT ,A68_VC *,void *));
typedef struct A68t98  A68_98 ;    /* PROC(LONG INT) MODE26 */

A_PROCEDURE(A68_INT ,A68t99,(A68_VC ,struct A68t69 ),(A68_VC ,struct A68t69 ,void *));
typedef struct A68t99  A68_99 ;    /* PROC(MODE26,MODE69) INT */

A_PROCEDURE(A68_INT ,A68t100,(void),(void *));
typedef struct A68t100  A68_100 ;    /* PROC INT */
struct A68t101{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t101  A68_101 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t102,(A68_VC ,A68_VC ,struct A68t69 ,struct A68t101 *),(A68_VC ,A68_VC ,struct A68t69 ,struct A68t101 *,void *));
typedef struct A68t102  A68_102 ;    /* PROC(MODE26,MODE26,MODE69) MODE101 */

A_PROCEDURE(A68_VOID ,A68t103,(struct A68t36 *),(struct A68t36 *,void *));
typedef struct A68t103  A68_103 ;    /* PROC MODE36 */

A_PROCEDURE(A68_VOID ,A68t104,(A68_VC ,struct A68t69 ,struct A68t36 *),(A68_VC ,struct A68t69 ,struct A68t36 *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(MODE26,MODE69) MODE36 */

A_PROCEDURE(A68_VOID ,A68t105,(struct A68t58 ,struct A68t69 ,struct A68t69 ),(struct A68t58 ,struct A68t69 ,struct A68t69 ,void *));
typedef struct A68t105  A68_105 ;    /* PROC(MODE58,MODE69,MODE69) VOID */

A_PROCEDURE(A68_VOID ,A68t106,(struct A68t58 ,struct A68t69 ),(struct A68t58 ,struct A68t69 ,void *));
typedef struct A68t106  A68_106 ;    /* PROC(MODE58,MODE69) VOID */

A_PROCEDURE(A68_VOID ,A68t107,(A68_INT ,struct A68t69 ,struct A68t69 *),(A68_INT ,struct A68t69 ,struct A68t69 *,void *));
typedef struct A68t107  A68_107 ;    /* PROC(INT,MODE69) MODE69 */

A_PROCEDURE(A68_VOID ,A68t108,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t108  A68_108 ;    /* PROC(BITS) VOID */
struct A68t110 ;

A_PROCEDURE(A68_VOID ,A68t109,(struct A68t110 ),(struct A68t110 ,void *));
typedef struct A68t109  A68_109 ;    /* PROC(MODE110) VOID */

A_PROCEDURE(A68_VOID ,A68t110,(A68_VC ),(A68_VC ,void *));
typedef struct A68t110  A68_110 ;    /* PROC(MODE26) VOID */
struct A68t111{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_15)
};
typedef struct A68t111  A68_111 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t112,(A68_BOOL ,struct A68t111 *),(A68_BOOL ,struct A68t111 *,void *));
typedef struct A68t112  A68_112 ;    /* PROC(BOOL) MODE111 */
struct A68t114 ;

A_PROCEDURE(A68_VOID ,A68t113,(struct A68t114 ,struct A68t69 ),(struct A68t114 ,struct A68t69 ,void *));
typedef struct A68t113  A68_113 ;    /* PROC(MODE114,MODE69) VOID */
A_VECTOR(struct A68t111 ,A68t114);
typedef struct A68t114  A68_114 ;    /* VECTOR [] MODE111 */

A_PROCEDURE(A68_VOID ,A68t115,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t115  A68_115 ;    /* PROC(BOOL) MODE26 */
A_ISTRUCT(A68_CHAR ,7,A68t117);
typedef struct A68t117  A68_117 ;    /* STRUCT 7 CHAR */
struct A68t116{
struct A68t117  Name;
A_PAD_ISTRUCT(A68_117 ,PAD_16)
A68_BOOL  Set;
A_PAD_BOOL(PAD_17)
};
typedef struct A68t116  A68_116 ;    /* STRUCT(MODE117,BOOL)  */
struct A68t118{
A68_INT  Labno;
A_PAD_INT(PAD_18)
};
typedef struct A68t118  A68_118 ;    /* STRUCT(INT)  */
struct A68t120 ;

A_PROCEDURE(A68_VOID ,A68t119,(struct A68t120 ),(struct A68t120 ,void *));
typedef struct A68t119  A68_119 ;    /* PROC(MODE120) VOID */
A_VECTOR(struct A68t121 ,A68t120);
typedef struct A68t120  A68_120 ;    /* VECTOR [] MODE121 */
struct A68t121 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_SINT  mode3;
} data; };
typedef struct A68t121  A68_121 ;    /* UNION(CHAR,MODE26,SHORT INT)  */
struct A68t123 ;

A_PROCEDURE(A68_VOID ,A68t122,(struct A68t123 ,A68_INT ),(struct A68t123 ,A68_INT ,void *));
typedef struct A68t122  A68_122 ;    /* PROC(MODE123,INT) VOID */
A_VECTOR(struct A68t124 ,A68t123);
typedef struct A68t123  A68_123 ;    /* VECTOR [] MODE124 */
struct A68t124 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_INT  mode3;
A68_SINT  mode4;
} data; };
typedef struct A68t124  A68_124 ;    /* UNION(CHAR,MODE26,INT,SHORT INT)  */

A_PROCEDURE(A68_INT ,A68t125,(A68_INT ),(A68_INT ,void *));
typedef struct A68t125  A68_125 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t126,(A68_INT ),(A68_INT ,void *));
typedef struct A68t126  A68_126 ;    /* PROC(INT) BOOL */
struct A68t127{
A68_INT  Level;
A_PAD_INT(PAD_19)
A68_INT  Block;
A_PAD_INT(PAD_20)
};
typedef struct A68t127  A68_127 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t128,(struct A68t127 *),(struct A68t127 *,void *));
typedef struct A68t128  A68_128 ;    /* PROC MODE127 */

A_PROCEDURE(A68_BOOL ,A68t129,(void),(void *));
typedef struct A68t129  A68_129 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t130,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t130  A68_130 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t131,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t132,(struct A68t127 ,struct A68t127 ),(struct A68t127 ,struct A68t127 ,void *));
typedef struct A68t132  A68_132 ;    /* PROC(MODE127,MODE127) BOOL */

A_PROCEDURE(A68_BOOL ,A68t133,(struct A68t127 ),(struct A68t127 ,void *));
typedef struct A68t133  A68_133 ;    /* PROC(MODE127) BOOL */
A_ISTRUCT(A68_CHAR ,32,A68t134);
typedef struct A68t134  A68_134 ;    /* STRUCT 32 CHAR */
struct A68t135{
struct A68t117  Prefix;
A_PAD_ISTRUCT(A68_117 ,PAD_21)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_22)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_23)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_24)
A68_BOOL  Keptgenproc;
A_PAD_BOOL(PAD_25)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_26)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t135  A68_135 ;    /* STRUCT(MODE117,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26)  */
A_VECTOR(struct A68t138 ,A68t137);
typedef struct A68t137  A68_137 ;    /* VECTOR [] MODE138 */
A_VECTOR(struct A68t144 ,A68t143);
typedef struct A68t143  A68_143 ;    /* VECTOR [] MODE144 */
struct A68t144{
struct A68t134  N;
A_PAD_ISTRUCT(A68_134 ,PAD_27)
struct A68t134  F;
A_PAD_ISTRUCT(A68_134 ,PAD_28)
A68_INT  Level;
A_PAD_INT(PAD_29)
};
typedef struct A68t144  A68_144 ;    /* STRUCT(MODE134,MODE134,INT)  */
struct A68t142 { A68_INT mode; union {
A68_VC  mode1;
struct A68t143  mode2;
} data; };
typedef struct A68t142  A68_142 ;    /* UNION(REF MODE26,REF MODE143)  */
struct A68t139{
struct A68t134  F;
A_PAD_ISTRUCT(A68_134 ,PAD_30)
A68_INT  No;
A_PAD_INT(PAD_31)
A68_INT  Nl;
A_PAD_INT(PAD_32)
A68_INT  Ng;
A_PAD_INT(PAD_33)
struct A68t142  U;
};
typedef struct A68t139  A68_139 ;    /* STRUCT(MODE134,INT,INT,INT,MODE142)  */
A_VECTOR(struct A68t135 ,A68t140);
typedef struct A68t140  A68_140 ;    /* VECTOR [] MODE135 */
A_VECTOR(struct A68t117 ,A68t141);
typedef struct A68t141  A68_141 ;    /* VECTOR [] MODE117 */
struct A68t138{
struct A68t139  Xs;
struct A68t117  Ys;
A_PAD_ISTRUCT(A68_117 ,PAD_34)
A68_LINT  Timeoflastchange;
A_PAD_LINT(PAD_35)
struct A68t140  Keptinfo;
struct A68t141  Cnames;
};
typedef struct A68t138  A68_138 ;    /* STRUCT(MODE139,MODE117,LONG INT,REF MODE140,REF MODE141)  */
struct A68t136{
struct A68t117  Uname;
A_PAD_ISTRUCT(A68_117 ,PAD_36)
struct A68t117  Lname;
A_PAD_ISTRUCT(A68_117 ,PAD_37)
struct A68t117  Gname;
A_PAD_ISTRUCT(A68_117 ,PAD_38)
struct A68t137  Specs;
};
typedef struct A68t136  A68_136 ;    /* STRUCT(MODE117,MODE117,MODE117,REF MODE137)  */

A_PROCEDURE(A68_VOID ,A68t145,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t145  A68_145 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t146,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t146  A68_146 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t147,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t147  A68_147 ;    /* PROC(INT) REF MODE26 */
struct A68t149 ;

A_PROCEDURE(A68_VOID ,A68t148,(A68_INT ,struct A68t149 ),(A68_INT ,struct A68t149 ,void *));
typedef struct A68t148  A68_148 ;    /* PROC(INT,MODE149) VOID */
A_ROW(A68_VC ,A68t149,1);
typedef struct A68t149  A68_149 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t150,(void),(void *));
typedef struct A68t150  A68_150 ;    /* PROC BITS */
struct A68t151{
A68_INT  Cfile;
A_PAD_INT(PAD_39)
};
typedef struct A68t151  A68_151 ;    /* STRUCT(INT)  */
struct A68t152{
A68_INT  Seedfile;
A_PAD_INT(PAD_40)
};
typedef struct A68t152  A68_152 ;    /* STRUCT(INT)  */
struct A68t153 { A68_INT mode; union {
struct A68t151  mode1;
struct A68t152  mode2;
struct A68t117  mode3;
} data; };
typedef struct A68t153  A68_153 ;    /* UNION(MODE151,MODE152,MODE117,VOID)  */
A_ROW(A68_BOOL ,A68t154,1);
typedef struct A68t154  A68_154 ;    /* [] BOOL */
struct A68t155{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_41)
A68_VC  Sourcefile;
struct A68t117  Nameseed;
A_PAD_ISTRUCT(A68_117 ,PAD_42)
struct A68t153  Nameseedorigin;
struct A68t156 * Used_modules;
A68_VC  Commandline;
struct A68t157 * Environment;
};
typedef struct A68t155  A68_155 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE117,MODE153,REF MODE156,REF MODE26,REF MODE157)  */
struct A68t156{
A68_VC  Modinfo_file;
struct A68t156 * Next;
};
typedef struct A68t156  A68_156 ;    /* STRUCT(REF MODE26,REF MODE156)  */
struct A68t157{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t157 * Next;
};
typedef struct A68t157  A68_157 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE157)  */
struct A68t159 ;

A_PROCEDURE(struct A68t74 *,A68t158,(A68_VC ,struct A68t159 *,A68_VC *),(A68_VC ,struct A68t159 *,A68_VC *,void *));
typedef struct A68t158  A68_158 ;    /* PROC(MODE26,REF MODE159,REF REF MODE26) REF MODE74 */
struct A68t159{
A68_VC  Dir;
struct A68t159 * Next;
};
typedef struct A68t159  A68_159 ;    /* STRUCT(REF MODE26,REF MODE159)  */

A_PROCEDURE(A68_VOID ,A68t160,(struct A68t62 ),(struct A68t62 ,void *));
typedef struct A68t160  A68_160 ;    /* PROC(MODE62) VOID */

A_PROCEDURE(A68_VOID ,A68t161,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,63,A68t162);
typedef struct A68t162  A68_162 ;    /* STRUCT 63 CHAR */

A_PROCEDURE(A68_VOID ,A68t163,(A68_BOOL ,struct A68t58 *),(A68_BOOL ,struct A68t58 *,void *));
typedef struct A68t163  A68_163 ;    /* PROC(BOOL) MODE58 */
A_ISTRUCT(A68_CHAR ,26,A68t164);
typedef struct A68t164  A68_164 ;    /* STRUCT 26 CHAR */

A_PROCEDURE(struct A68t117 ,A68t165,(void),(void *));
typedef struct A68t165  A68_165 ;    /* PROC MODE117 */
A_ISTRUCT(A68_CHAR ,9,A68t166);
typedef struct A68t166  A68_166 ;    /* STRUCT 9 CHAR */

A_PROCEDURE(A68_BOOL ,A68t167,(struct A68t117 *),(struct A68t117 *,void *));
typedef struct A68t167  A68_167 ;    /* PROC(REF MODE117) BOOL */
A_ISTRUCT(A68_CHAR ,2,A68t168);
typedef struct A68t168  A68_168 ;    /* STRUCT 2 CHAR */

A_PROCEDURE(A68_VOID ,A68t169,(struct A68t117 ),(struct A68t117 ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(MODE117) VOID */
A_ISTRUCT(A68_CHAR ,3,A68t170);
typedef struct A68t170  A68_170 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(struct A68t124 ,4,A68t171);
typedef struct A68t171  A68_171 ;    /* STRUCT 4 MODE124 */

A_PROCEDURE(A68_VOID ,A68t172,(struct A68t153 ),(struct A68t153 ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE153) VOID */
A_ISTRUCT(A68_CHAR ,24,A68t173);
typedef struct A68t173  A68_173 ;    /* STRUCT 24 CHAR */

A_PROCEDURE(A68_VOID ,A68t174,(struct A68t153 ,A68_VC *),(struct A68t153 ,A68_VC *,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE153) MODE26 */
A_ISTRUCT(A68_CHAR ,23,A68t175);
typedef struct A68t175  A68_175 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t176);
typedef struct A68t176  A68_176 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t177);
typedef struct A68t177  A68_177 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_CHAR ,34,A68t178);
typedef struct A68t178  A68_178 ;    /* STRUCT 34 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from environment --- */
extern A68_VOID  WXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_VC  YQIACTR_basenamesourcefile;
extern A68_VOID  JXIACTR_warning(A68_INT );
extern A68_VC  ARIACTR_seedfilename;
extern A68_155  IYIACTR_config_info;
extern A68_74 * BJJACTR_find_and_open_file(A68_VC ,struct A68t159 *,A68_VC *);
extern A68_159 * ERIACTR_cfile_dirlist;
/* --- End of imports from environment --- */


/* --- Imports from incinstallation --- */
#define WDAACTR_maxuname 7
/* --- End of imports from incinstallation --- */


/* --- Imports from environ --- */
#define ESLACTR_preamblestream 0
/* --- End of imports from environ --- */


/* --- Imports from coutput --- */
extern A68_VOID  MDMACTR_writecstream(struct A68t123 ,A68_INT );
/* --- End of imports from coutput --- */


/* --- Imports from centities --- */
extern A68_SINT  EIAACTR_cnewline;
/* --- End of imports from centities --- */


/* --- Imports from osif --- */
#include <errno.h>

#define XFBAOSI_errno errno
extern A68_69  XLBAOSI_ignore_msg;
extern A68_74 * HNBAOSI_nil_file;
extern A68_74 * FQBAOSI_open_file(A68_VC ,struct A68t77 ,struct A68t69 );
extern A68_VOID  XQBAOSI_close_file(struct A68t74 *,struct A68t69 );
extern A68_VOID  HRBAOSI_read_buffer(struct A68t74 *,A68_VC ,A68_INT *,struct A68t69 ,A68_75 *);
extern A68_VOID  JSBAOSI_write_buffer(struct A68t74 *,A68_VC ,struct A68t69 ,A68_75 *);
extern A68_77  PNBAOSI_read_access;
extern A68_77  TNBAOSI_write_access;
#include <stdlib.h>
#define EXIT(status) exit(A_INT_int(status))

#define BZBAOSI_exit EXIT
extern int A_argc;
extern char **A_argv;
#define A_prelude(argc,argv) A_argc=argc; A_argv = argv

#define VPCAOSI_prelude A_prelude
#include <signal.h>

#define TECAOSI_sighup SIGHUP
#include <signal.h>

#define UECAOSI_sigint SIGINT
#include <signal.h>

#define VECAOSI_sigquit SIGQUIT
#include <signal.h>

#define WECAOSI_sigill SIGILL
#include <signal.h>

#define XECAOSI_sigtrap 5
#include <signal.h>

#define YECAOSI_sigabrt SIGABRT
#include <signal.h>

#define ZECAOSI_sigemt 7
#include <signal.h>

#define AFCAOSI_sigfpe SIGFPE
#include <signal.h>

#define BFCAOSI_sigkill SIGKILL
#include <signal.h>

#define CFCAOSI_sigbus 10
#include <signal.h>

#define DFCAOSI_sigsegv SIGSEGV
#include <signal.h>

#define EFCAOSI_sigsys 12
#include <signal.h>

#define FFCAOSI_sigpipe SIGPIPE
#include <signal.h>

#define GFCAOSI_sigalrm SIGALRM
#include <signal.h>

#define HFCAOSI_sigterm SIGTERM
#include <signal.h>

#define IFCAOSI_sigurg 16
#include <signal.h>

#define JFCAOSI_sigstop SIGSTOP
#include <signal.h>

#define KFCAOSI_sigtstp SIGTSTP
#include <signal.h>

#define LFCAOSI_sigcont SIGCONT
#include <signal.h>

#define MFCAOSI_sigchld SIGCHLD
#include <signal.h>

#define NFCAOSI_sigttin SIGTTIN
#include <signal.h>

#define OFCAOSI_sigttou SIGTTOU
#include <signal.h>

#define PFCAOSI_sigio 23
#include <signal.h>

#define QFCAOSI_sigxcpu 24
#include <signal.h>

#define RFCAOSI_sigxfsz 25
#include <signal.h>

#define SFCAOSI_sigvtalrm 26
#include <signal.h>

#define TFCAOSI_sigprof 27
#include <signal.h>

#define UFCAOSI_sigwinch 28
#include <signal.h>

#define VFCAOSI_siglost 29
#include <signal.h>

#define WFCAOSI_sigusr1 SIGUSR1
#include <signal.h>

#define XFCAOSI_sigusr2 SIGUSR2
#include "Alibrary.h"

#define PBCAOSI_garbage_collect Agc_collect
#include "Alibrary.h"

#define KDCAOSI_alwayscollect A_ALWAYS_COLLECT
#include "Alibrary.h"

#define LDCAOSI_alwaysgrowheap A_ALWAYS_GROW_HEAP
#include "Alibrary.h"

#define MDCAOSI_defaultpolicy A_DEFAULT_POLICY
/* --- End of imports from osif --- */


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
/* --- End of imports from cif --- */


/* --- Imports from usefulops --- */
extern A68_BOOL  EXAAOSI_charinstring(A68_CHAR ,A68_INT *,A68_VC );
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void HPIACTR(void);   /* environment */
extern void ODAACTR(void);   /* incinstallation */
extern void BPLACTR(void);   /* environ */
extern void PTLACTR(void);   /* coutput */
extern void THAACTR(void);   /* centities */
extern void VSCAOSI(void);   /* osif */
extern void JDAAOSI(void);   /* cif */
extern void WPAAOSI(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_162   UHMACTR = {"$Id: uniquenameserver.a68,v 34.2 1995/03/29 13:02:09 ella Exp $"}; 
A_GISVEC(A68_VC ,VHMACTR,UHMACTR,63)
static A68_58  AIMACTR_num;
static A68_164   CIMACTR = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"}; 
A_GISVEC(A68_VC ,DIMACTR,CIMACTR,26)
static A68_VC  EIMACTR_idchars;
static A68_INT  FIMACTR_upbidchars;
static A68_INT  GIMACTR_upbnum;
static A68_166   ZIMACTR = {"/* UNAME:"}; 
A_GISVEC(A68_VC ,AJMACTR,ZIMACTR,9)
static A68_VC  BJMACTR_c_prologue;
static A68_168   FJMACTR = {".c"}; 
A_GISVEC(A68_VC ,GJMACTR,FJMACTR,2)
static A68_170   MKMACTR = {" */"}; 
A_GISVEC(A68_VC ,NKMACTR,MKMACTR,3)
A68_172  SKMACTR_initialiseuniquenameserver;
static A68_117   ZLMACTR = {"AAAAAAA"}; 
static A68_173   AMMACTR = {"invalid name seed origin"}; 
A_GISVEC(A68_VC ,BMMACTR,AMMACTR,24)
static A68_175   GMMACTR = {" ( from -uname option )"}; 
A_GISVEC(A68_VC ,IMMACTR,GMMACTR,23)
static A68_176   JMMACTR = {" (from seed file) "}; 
A_GISVEC(A68_VC ,KMMACTR,JMMACTR,18)
static A68_177   LMMACTR = {" (from previously generated C) "}; 
A_GISVEC(A68_VC ,MMMACTR,LMMACTR,31)
static A68_178   NMMACTR = {" (other name seeds not available) "}; 
A_GISVEC(A68_VC ,OMMACTR,NMMACTR,34)
static A68_173   PMMACTR = {"invalid name seed origin"}; 
A_GISVEC(A68_VC ,QMMACTR,PMMACTR,24)
typedef struct   /* env of non-global proc */
{
int dummy;
} NJMACTR_generator;

A_STATIC A68_VOID  XHMACTR_generator(A68_BOOL  WHMACTR_anonymous, A68_58  *ReturnedValue);

A_STATIC A68_VOID  HIMACTR_incrementnum(void);

A68_117  QIMACTR_newuniquename(void);

A_STATIC A68_BOOL  DJMACTR_read_cfile_uname(A68_117 * Uname);

A_STATIC A68_VOID  MJMACTR_generator(A68_BOOL  KJMACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  GKMACTR_write_cfile_uname(A68_117  Uname);

A_STATIC A68_VOID  UKMACTR_initnum(A68_117  Uname);

A_STATIC A68_VOID  FLMACTR_anonymous(A68_153  Origin);

A68_VOID  EMMACTR_nameseedoriginstring(A68_153  Nameseed, A68_VC  *ReturnedValue);

A68_VOID  SMMACTR_closedownuniquenameserver(void);

A_STATIC A68_VOID  MJMACTR_generator(A68_BOOL  KJMACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((NJMACTR_generator *)NonLocals)->x)
{ 
A68_VC  OJMACTR;  /* clause result */
A68_VC  PJMACTR;  /* OPERATORS - dynamic generator */
{ 
PJMACTR.upb = 19 ;
( KJMACTR_anonymous? A_VLOC(A68_CHAR ,PJMACTR): A_VHEAP(A68_CHAR ,PJMACTR) );
OJMACTR = PJMACTR;
} 
*ReturnedValue = (OJMACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  XHMACTR_generator(A68_BOOL  WHMACTR_anonymous, A68_58  *ReturnedValue)
{ 
A68_58  YHMACTR;  /* clause result */
A68_58  ZHMACTR;  /* OPERATORS - dynamic generator */
{ 
ZHMACTR.upb = WDAACTR_maxuname ;
( WHMACTR_anonymous? A_VLOC(A68_INT ,ZHMACTR): A_VHEAP(A68_INT ,ZHMACTR) );
YHMACTR = ZHMACTR;
} 
*ReturnedValue = (YHMACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HIMACTR_incrementnum(void)
{ 
A68_INT  IIMACTR;  /* YIELD */
A68_INT * JIMACTR;  /* YIELD */
A68_INT  KIMACTR_i;
A68_INT  LIMACTR;  /* to part of loop */
A68_INT  MIMACTR;  /* YIELD */
A68_INT * NIMACTR;  /* YIELD */
A68_INT * OIMACTR;  /* YIELD */
A68_INT * PIMACTR;  /* YIELD */
A_PROC_ENTRY(incrementnum);
{ 
IIMACTR = 1 ;
JIMACTR = (&A_VINDEX(AIMACTR_num,IIMACTR)) ;
(*JIMACTR)+=1;
 /* line 62: */
 /* line 63: */
LIMACTR = (GIMACTR_upbnum-1);
for ( KIMACTR_i = 1;
KIMACTR_i <= LIMACTR;
KIMACTR_i += 1 )
{ 
 /* line 64: */
 /* line 65: */
 /* line 66: */
 /* line 67: */
if ( ((*(&A_VINDEX(AIMACTR_num,KIMACTR_i)))>FIMACTR_upbidchars) )
{ 
MIMACTR = (KIMACTR_i+1) ;
NIMACTR = (&A_VINDEX(AIMACTR_num,MIMACTR)) ;
(*NIMACTR)+=1;
 /* line 68: */
 /* line 69: */
 /* line 70: */
OIMACTR = (&A_VINDEX(AIMACTR_num,KIMACTR_i)) ;
(*OIMACTR) = 1;
} 
}
 /* line 72: */
 /* line 73: */
 /* line 74: */
 /* line 75: */
if ( ((*(&A_VINDEX(AIMACTR_num,GIMACTR_upbnum)))>FIMACTR_upbidchars) )
{ 
JXIACTR_warning(800);
 /* line 76: */
 /* line 77: */
 /* line 78: */
PIMACTR = (&A_VINDEX(AIMACTR_num,GIMACTR_upbnum)) ;
(*PIMACTR) = 1;
} 
} 
A_PROC_EXIT(incrementnum);
return;
} 
#undef NL

A68_117  QIMACTR_newuniquename(void)
{ 
A68_117  RIMACTR_result;
A68_INT  SIMACTR_i;
A68_INT  TIMACTR;  /* to part of loop */
A68_VC  UIMACTR;  /* OPERATORS - istruct -> vector */
A68_VC  VIMACTR;  /* OPERATORS - simple index */
A68_INT  WIMACTR;  /* YIELD */
A68_CHAR * XIMACTR;  /* YIELD */
A68_117  YIMACTR;  /* clause result */
A_PROC_ENTRY(newuniquename);
{ 
 /* line 86: */
HIMACTR_incrementnum();
 /* line 87: */
 /* line 88: */
TIMACTR = WDAACTR_maxuname;
for ( SIMACTR_i = 1;
SIMACTR_i <= TIMACTR;
SIMACTR_i += 1 )
{ 
 /* line 89: */
 /* line 90: */
VIMACTR = A_ISVEC(UIMACTR,(&RIMACTR_result),7,A68_CHAR ) ;
WIMACTR = (*(&A_VINDEX(AIMACTR_num,SIMACTR_i))) ;
XIMACTR = (&A_VINDEX(VIMACTR,SIMACTR_i)) ;
(*XIMACTR) = A_VINDEX(EIMACTR_idchars,WIMACTR);
}
 /* line 91: */
 /* line 92: */
YIMACTR = RIMACTR_result;
} 
A_PROC_EXIT(newuniquename);
return( YIMACTR );
} 
#undef NL

A_STATIC A68_BOOL  DJMACTR_read_cfile_uname(A68_117 * Uname)
{ 
A68_VC  EJMACTR_full_filename;
A68_74 * HJMACTR_cfile;
A68_BOOL  IJMACTR;  /* clause result */
A68_BOOL  JJMACTR;  /* clause result */
A68_115  LJMACTR_generator;   /* proc value of non-global proc */
A68_VC  RJMACTR;  /* avoid structure result */
A68_VC  QJMACTR_buffer;
A68_INT  SJMACTR_charsread;
A68_75  TJMACTR;  /* avoid structure result */
A68_BOOL  UJMACTR;  /* optbool result */
A68_VC  VJMACTR;  /* OPERATORS - trim index */
A68_BOOL  WJMACTR;  /* clause result */
A68_VC  XJMACTR;  /* OPERATORS - istruct -> vector */
A68_VC  YJMACTR;  /* OPERATORS - trim index */
A68_VC  ZJMACTR;  /* OPERATORS - trim index */
A68_VC  AKMACTR;  /* OPERATORS - trim index */
A68_VC  BKMACTR;  /* OPERATORS - trim index */
A68_VC  CKMACTR;  /* OPERATORS - trim index */
A68_VC  DKMACTR;  /* YIELD */
A68_VC  EKMACTR;  /* OPERATORS - assign op */
A_PROC_ENTRY(read_cfile_uname);
 /* line 98: */
 /* line 99: */
{ 
 /* line 100: */
HJMACTR_cfile = BJJACTR_find_and_open_file(A_VC_PLUS(YQIACTR_basenamesourcefile,GJMACTR), ERIACTR_cfile_dirlist, (&EJMACTR_full_filename));
 /* line 101: */
 /* line 102: */
 /* line 103: */
IJMACTR = (HJMACTR_cfile==HNBAOSI_nil_file);
if ( IJMACTR )
{ 
JXIACTR_warning(812);
 /* line 104: */
 /* line 105: */
 /* line 106: */
JJMACTR = A68_FALSE;
} 
else
{ 
{ 
A_CLOSURE( LJMACTR_generator, MJMACTR_generator, NJMACTR_generator );
A_CALLPROC(LJMACTR_generator,(A68_TRUE, &RJMACTR),(A68_TRUE, &RJMACTR,(LJMACTR_generator).nonlocals));
QJMACTR_buffer = RJMACTR;
 /* line 107: */
 /* line 108: */
HRBAOSI_read_buffer( HJMACTR_cfile, QJMACTR_buffer, (&SJMACTR_charsread), XLBAOSI_ignore_msg, &TJMACTR );
TJMACTR;
 /* line 109: */
XQBAOSI_close_file(HJMACTR_cfile, XLBAOSI_ignore_msg);
 /* line 110: */
UJMACTR = (SJMACTR_charsread!=QJMACTR_buffer.upb);
if ( ! UJMACTR )
{ /* line 111: */
UJMACTR = A_VC_NE(A_VTRIM(VJMACTR,(QJMACTR_buffer),A_VTSCRIPT(&(VJMACTR.upb),(QJMACTR_buffer).upb,1,BJMACTR_c_prologue.upb)),BJMACTR_c_prologue);
}
 /* line 112: */
WJMACTR = UJMACTR;
if ( WJMACTR )
{ 
JXIACTR_warning(815);
 /* line 113: */
 /* line 114: */
 /* line 115: */
JJMACTR = A68_FALSE;
} 
else
{ 
YJMACTR = A_ISVEC(XJMACTR,Uname,7,A68_CHAR ) ;
BKMACTR = A_VTRIM(AKMACTR,(QJMACTR_buffer),A_VTSCRIPT(&(AKMACTR.upb),(QJMACTR_buffer).upb,(BJMACTR_c_prologue.upb+1),(QJMACTR_buffer).upb)) ;
DKMACTR = A_VTRIM(ZJMACTR,(YJMACTR),A_VTSCRIPT(&(ZJMACTR.upb),(YJMACTR).upb,1,WDAACTR_maxuname)) ;
EKMACTR = A_VTRIM(CKMACTR,(BKMACTR),A_VTSCRIPT(&(CKMACTR.upb),(BKMACTR).upb,1,WDAACTR_maxuname)) ;
A_VASSIGN2(EKMACTR,DKMACTR,A68_CHAR );
 /* line 116: */
 /* line 117: */
JJMACTR = A68_TRUE;
} 
} 
} 
} 
A_PROC_EXIT(read_cfile_uname);
return( JJMACTR );
} 
#undef NL

A68_VOID  GKMACTR_write_cfile_uname(A68_117  Uname)
{ 
A68_171  HKMACTR;  /* collateral clause result */
A68_124  IKMACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JKMACTR;  /* OPERATORS - istruct -> vector */
A68_124  KKMACTR;  /* OPERATORS - mode -> union mode */
A68_VC  LKMACTR;  /* YIELD */
A68_124  OKMACTR;  /* OPERATORS - mode -> union mode */
A68_VC  PKMACTR;  /* YIELD */
A68_124  QKMACTR;  /* OPERATORS - mode -> union mode */
A68_123  RKMACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(write_cfile_uname);
 /* line 120: */
 /* line 121: */
HKMACTR.data[0] = A_UNITE(IKMACTR,mode2,2,BJMACTR_c_prologue);
LKMACTR = A_HISVEC(JKMACTR,Uname,7,A68_CHAR ) ;
HKMACTR.data[1] = A_UNITE(KKMACTR,mode2,2,LKMACTR);
 /* line 122: */
PKMACTR = NKMACTR ;
HKMACTR.data[2] = A_UNITE(OKMACTR,mode2,2,PKMACTR);
HKMACTR.data[3] = A_UNITE(QKMACTR,mode4,4,EIAACTR_cnewline);
MDMACTR_writecstream(A_HISVEC(RKMACTR,HKMACTR,4,A68_124 ), ESLACTR_preamblestream);
A_PROC_EXIT(write_cfile_uname);
return;
} 
#undef NL

A_STATIC A68_VOID  UKMACTR_initnum(A68_117  Uname)
{ 
A68_BOOL  VKMACTR_ok;
A68_INT * WKMACTR_i;
A68_CHAR  XKMACTR_c;
A68_VC  YKMACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ZKMACTR;  /* forall yield */
A68_CHAR * ALMACTR;  /* forall control - []x */
A68_INT  BLMACTR;  /* forall loop counter */
A68_153  CLMACTR;  /* OPERATORS - mode -> union mode */
A68_117 * DLMACTR;  /* YIELD */
A_PROC_ENTRY(initnum);
 /* line 128: */
 /* line 129: */
{ 
VKMACTR_ok = A68_TRUE;
 /* line 131: */
 /* line 132: */
ZKMACTR = A_HISVEC(YKMACTR,Uname,7,A68_CHAR ) ;
BLMACTR = AIMACTR_num.upb -1;
if ( BLMACTR != ZKMACTR.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
WKMACTR_i = AIMACTR_num.data;
ALMACTR = ZKMACTR.data;
for (;BLMACTR-- >= 0;
(WKMACTR_i++
,ALMACTR++
) )
{
XKMACTR_c = *ALMACTR;
 /* line 133: */
 /* line 134: */
if ( !(VKMACTR_ok) ) break;
 /* line 135: */
VKMACTR_ok = EXAAOSI_charinstring(XKMACTR_c, WKMACTR_i, EIMACTR_idchars);
}
 /* line 137: */
 /* line 138: */
 /* line 139: */
if ( !VKMACTR_ok )
{ 
JXIACTR_warning(803);
 /* line 140: */
 /* line 141: */
 /* line 142: */
A_CALLPROC(SKMACTR_initialiseuniquenameserver,(A_EMPTY(CLMACTR,4)),(A_EMPTY(CLMACTR,4),(SKMACTR_initialiseuniquenameserver).nonlocals));
} 
else
{ 
 /* line 143: */
 /* line 144: */
DLMACTR = (&((&IYIACTR_config_info)->Nameseed)) ;
(*DLMACTR) = Uname;
} 
} 
A_PROC_EXIT(initnum);
return;
} 
#undef NL

A_STATIC A68_VOID  FLMACTR_anonymous(A68_153  Origin)
{ 
A68_153 * GLMACTR;  /* YIELD */
A68_153  HLMACTR;  /* united object - for case conformity */
A68_117  ILMACTR_uname;
A68_74 * JLMACTR_ufile;
A68_117  KLMACTR_init;
A68_INT  LLMACTR_charsread;
A68_VC  MLMACTR;  /* OPERATORS - nil -> mode */
A68_VC  NLMACTR;  /* == */
A68_BOOL  OLMACTR;  /* optbool result */
A68_BOOL  PLMACTR;  /* clause result */
A68_153  QLMACTR;  /* OPERATORS - mode -> union mode */
A68_VC  RLMACTR;  /* OPERATORS - istruct -> vector */
A68_75  SLMACTR;  /* avoid structure result */
A68_BOOL  TLMACTR;  /* clause result */
A68_VC  ULMACTR;  /* OPERATORS - istruct -> vector */
A68_153  VLMACTR;  /* OPERATORS - mode -> union mode */
A68_117  WLMACTR_init;
A68_BOOL  XLMACTR;  /* clause result */
A68_153  YLMACTR;  /* OPERATORS - mode -> union mode */
 /* line 153: */
 /* line 154: */
GLMACTR = (&((&IYIACTR_config_info)->Nameseedorigin)) ;
HLMACTR = (*GLMACTR) = Origin ;
switch ( HLMACTR.mode )
{ 
case 3: /* STRUCT 7 CHAR */
ILMACTR_uname = (HLMACTR.data.mode3);
 /* line 155: */
 /* line 157: */
UKMACTR_initnum(ILMACTR_uname);
break;
case 2: /* STRUCT(INT)  */
 /* line 158: */
 /* line 159: */
{ 
 /* line 161: */
 /* line 163: */
NLMACTR = A_VVAC(MLMACTR) ;
OLMACTR = A_VSTRUCTCOMP(ARIACTR_seedfilename,NLMACTR);
if ( ! OLMACTR )
{ /* line 164: */
OLMACTR = ((JLMACTR_ufile = FQBAOSI_open_file(ARIACTR_seedfilename, PNBAOSI_read_access, XLBAOSI_ignore_msg))==HNBAOSI_nil_file);
}
 /* line 165: */
PLMACTR = OLMACTR;
if ( PLMACTR )
{ 
JXIACTR_warning(801);
 /* line 166: */
 /* line 167: */
 /* line 168: */
A_CALLPROC(SKMACTR_initialiseuniquenameserver,(A_EMPTY(QLMACTR,4)),(A_EMPTY(QLMACTR,4),(SKMACTR_initialiseuniquenameserver).nonlocals));
} 
else
{ 
HRBAOSI_read_buffer( JLMACTR_ufile, A_ISVEC(RLMACTR,(&KLMACTR_init),7,A68_CHAR ), (&LLMACTR_charsread), XLBAOSI_ignore_msg, &SLMACTR );
SLMACTR;
 /* line 169: */
XQBAOSI_close_file(JLMACTR_ufile, XLBAOSI_ignore_msg);
 /* line 170: */
 /* line 171: */
 /* line 172: */
TLMACTR = (LLMACTR_charsread!=A_HISVEC(ULMACTR,KLMACTR_init,7,A68_CHAR ).upb);
if ( TLMACTR )
{ 
JXIACTR_warning(814);
 /* line 173: */
 /* line 174: */
 /* line 175: */
A_CALLPROC(SKMACTR_initialiseuniquenameserver,(A_EMPTY(VLMACTR,4)),(A_EMPTY(VLMACTR,4),(SKMACTR_initialiseuniquenameserver).nonlocals));
} 
else
{ 
 /* line 176: */
 /* line 179: */
UKMACTR_initnum(KLMACTR_init);
} 
} 
} 
break;
case 1: /* STRUCT(INT)  */
 /* line 180: */
 /* line 181: */
{ 
 /* line 182: */
 /* line 183: */
 /* line 184: */
XLMACTR = DJMACTR_read_cfile_uname((&WLMACTR_init));
if ( XLMACTR )
{ 
 /* line 185: */
 /* line 186: */
UKMACTR_initnum(WLMACTR_init);
} 
else
{ 
 /* line 187: */
 /* line 189: */
A_CALLPROC(SKMACTR_initialiseuniquenameserver,(A_EMPTY(YLMACTR,4)),(A_EMPTY(YLMACTR,4),(SKMACTR_initialiseuniquenameserver).nonlocals));
} 
} 
break;
case 4: /* VOID */
 /* line 190: */
{ 
JXIACTR_warning(813);
 /* line 191: */
 /* line 192: */
 /* line 193: */
 /* line 194: */
UKMACTR_initnum(ZLMACTR);
} 
break;
default: 
 /* line 195: */
WXIACTR_assert(BMMACTR, A68_FALSE);
break;
} 
return;
} 
#undef NL

A68_VOID  EMMACTR_nameseedoriginstring(A68_153  Nameseed, A68_VC  *ReturnedValue)
{ 
A68_153  FMMACTR;  /* united object - for case conformity */
A68_VC  HMMACTR;  /* clause result */
A68_VC  RMMACTR;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(nameseedoriginstring);
 /* line 198: */
 /* line 199: */
FMMACTR = Nameseed ;
switch ( FMMACTR.mode )
{ 
case 3: /* STRUCT 7 CHAR */
 /* line 200: */
HMMACTR = IMMACTR;
break;
case 2: /* STRUCT(INT)  */
 /* line 201: */
HMMACTR = KMMACTR;
break;
case 1: /* STRUCT(INT)  */
 /* line 202: */
HMMACTR = MMMACTR;
break;
case 4: /* VOID */
 /* line 203: */
 /* line 204: */
HMMACTR = OMMACTR;
break;
default: 
WXIACTR_assert(QMMACTR, A68_FALSE);
 /* line 205: */
HMMACTR = RMMACTR;
break;
} 
A_PROC_EXIT(nameseedoriginstring);
*ReturnedValue = (HMMACTR);
return;
} 
#undef NL

A68_VOID  SMMACTR_closedownuniquenameserver(void)
{ 
A68_153  TMMACTR;  /* united object - for case conformity */
A68_74 * UMMACTR_ufile;
A68_VC  VMMACTR;  /* OPERATORS - nil -> mode */
A68_VC  WMMACTR;  /* == */
A68_BOOL  XMMACTR;  /* optbool result */
A68_BOOL  YMMACTR;  /* clause result */
A68_INT * ZMMACTR_i;
A68_INT  ANMACTR;  /* forall loop counter */
A68_VC  BNMACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_75  CNMACTR;  /* avoid structure result */
A_PROC_ENTRY(closedownuniquenameserver);
 /* line 213: */
TMMACTR = (*(&((&IYIACTR_config_info)->Nameseedorigin))) ;
switch ( TMMACTR.mode )
{ 
case 2: /* STRUCT(INT)  */
 /* line 214: */
 /* line 215: */
{ 
 /* line 216: */
 /* line 217: */
WMMACTR = A_VVAC(VMMACTR) ;
XMMACTR = A_VSTRUCTCOMP(ARIACTR_seedfilename,WMMACTR);
if ( ! XMMACTR )
{ /* line 218: */
UMMACTR_ufile = FQBAOSI_open_file(ARIACTR_seedfilename, TNBAOSI_write_access, XLBAOSI_ignore_msg) ;
XMMACTR = ((&UMMACTR_ufile)==(A68_74 **)A68_NIL);
}
 /* line 219: */
YMMACTR = XMMACTR;
if ( YMMACTR )
{ 
 /* line 220: */
 /* line 221: */
JXIACTR_warning(802);
} 
else
{ 
 /* line 222: */
ANMACTR = AIMACTR_num.upb -1;
ZMMACTR_i = AIMACTR_num.data;
for (;ANMACTR-- >= 0;
(ZMMACTR_i++
) )
{
 /* line 223: */
 /* line 224: */
JSBAOSI_write_buffer( UMMACTR_ufile, A_HVEC(BNMACTR,A_VINDEX(EIMACTR_idchars,(*ZMMACTR_i)),A68_CHAR ), XLBAOSI_ignore_msg, &CNMACTR );
CNMACTR;
}
 /* line 225: */
 /* line 226: */
 /* line 229: */
XQBAOSI_close_file(UMMACTR_ufile, XLBAOSI_ignore_msg);
} 
} 
break;
default: 
/*SKIP*/;
break;
} 
A_PROC_EXIT(closedownuniquenameserver);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 5: */
void RHMACTR(void)   /* initialise DECS uniquenameserver */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","./mfiles","-staredit","59LR","./a68files/uniquenameserver.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/environment.m","./mfiles/incinstallation.m","./mfiles/environ.m","./mfiles/coutput.m","./mfiles/centities.m","/u/model/ella/osif/assoc/mfiles/osif.m","/u/model/ella/osif/assoc/mfiles/cif.m","/u/model/ella/osif/assoc/mfiles/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_58  BIMACTR;  /* avoid structure result */
A68_172  CMMACTR;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
HPIACTR();   /* USE environment */
ODAACTR();   /* USE incinstallation */
BPLACTR();   /* USE environ */
PTLACTR();   /* USE coutput */
THAACTR();   /* USE centities */
VSCAOSI();   /* USE osif */
JDAAOSI();   /* USE cif */
WPAAOSI();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ctrans/assoc/./a68files/uniquenameserver.a68";
A_config.translation_time = "Tue Apr  4 09:30:22 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "QHMACTR (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:30:22 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS uniquenameserver);
UEAALIB_a68config(LGAALIB_configinfo, VHMACTR);
 /* line 45: */
XHMACTR_generator( A68_TRUE, &BIMACTR );
AIMACTR_num = BIMACTR;
 /* line 48: */
EIMACTR_idchars = DIMACTR;
 /* line 50: */
FIMACTR_upbidchars = EIMACTR_idchars.upb;
 /* line 51: */
GIMACTR_upbnum = AIMACTR_num.upb;
 /* line 53: */
 /* line 59: */
 /* line 60: */
 /* line 80: */
 /* line 84: */
 /* line 85: */
 /* line 95: */
BJMACTR_c_prologue = AJMACTR;
 /* line 97: */
 /* line 119: */
 /* line 125: */
 /* line 127: */
 /* line 146: */
CMMACTR.fn.fn_global = FLMACTR_anonymous;
CMMACTR.nonlocals = A68_NIL;
SKMACTR_initialiseuniquenameserver = CMMACTR;
 /* line 197: */
 /* line 207: */
 /* line 212: */
 /* line 231: */
 /* line 233: */
 /* line 239: */
/*SKIP*/;
A_PROC_EXIT(DECS uniquenameserver);
} 
#undef NL
/* end of translation of ./a68files/uniquenameserver.a68 */
