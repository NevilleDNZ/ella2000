
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
/* UNAME:NTBBCTR */
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
struct A68t55 ;

A_PROCEDURE(A68_VOID ,A68t54,(struct A68t55 ,struct A68t36 ),(struct A68t55 ,struct A68t36 ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(MODE55,MODE36) VOID */
struct A68t55{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t56 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t55  A68_55 ;    /* STRUCT(INT,REF MODE56,BITS)  */
A_VECTOR(struct A68t58 ,A68t57);
typedef struct A68t57  A68_57 ;    /* VECTOR [] MODE58 */
struct A68t58{
struct A68t55  Msgno;
A68_VC  Text;
};
typedef struct A68t58  A68_58 ;    /* STRUCT(MODE55,REF MODE26)  */
struct A68t56{
A68_VC  Name;
struct A68t57  Messages;
};
typedef struct A68t56  A68_56 ;    /* STRUCT(REF MODE26,REF MODE57)  */
struct A68t59{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t59  A68_59 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t60{
A68_INT  Status;
A_PAD_INT(PAD_3)
};
typedef struct A68t60  A68_60 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_BOOL ,A68t61,(struct A68t60 ,struct A68t60 ),(struct A68t60 ,struct A68t60 ,void *));
typedef struct A68t61  A68_61 ;    /* PROC(MODE60,MODE60) BOOL */
struct A68t62{
struct A68t40  Access;
A_PAD_ISTRUCT(A68_40 ,PAD_4)
};
typedef struct A68t62  A68_62 ;    /* STRUCT(MODE40)  */

A_PROCEDURE(A68_VOID ,A68t63,(struct A68t59 *,A68_VC *),(struct A68t59 *,A68_VC *,void *));
typedef struct A68t63  A68_63 ;    /* PROC(REF MODE59) MODE26 */

A_PROCEDURE(struct A68t59 *,A68t64,(A68_VC ,struct A68t62 ,struct A68t54 ),(A68_VC ,struct A68t62 ,struct A68t54 ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(MODE26,MODE62,MODE54) REF MODE59 */

A_PROCEDURE(A68_VOID ,A68t65,(struct A68t59 *,struct A68t54 ),(struct A68t59 *,struct A68t54 ,void *));
typedef struct A68t65  A68_65 ;    /* PROC(REF MODE59,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t66,(struct A68t59 *,A68_VC ,A68_INT *,struct A68t54 ,struct A68t60 *),(struct A68t59 *,A68_VC ,A68_INT *,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t66  A68_66 ;    /* PROC(REF MODE59,REF MODE26,REF INT,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t67,(struct A68t59 *,A68_VC ,struct A68t54 ,struct A68t60 *),(struct A68t59 *,A68_VC ,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t67  A68_67 ;    /* PROC(REF MODE59,MODE26,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t68,(struct A68t59 *,A68_LINT ,struct A68t54 ,struct A68t60 *),(struct A68t59 *,A68_LINT ,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t68  A68_68 ;    /* PROC(REF MODE59,LONG INT,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t69,(struct A68t59 *,A68_LINT *,struct A68t54 ,struct A68t60 *),(struct A68t59 *,A68_LINT *,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t69  A68_69 ;    /* PROC(REF MODE59,REF LONG INT,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t70,(struct A68t59 *,struct A68t54 ,struct A68t60 *),(struct A68t59 *,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t70  A68_70 ;    /* PROC(REF MODE59,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t71,(A68_VC ,struct A68t54 ,struct A68t60 *),(A68_VC ,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t71  A68_71 ;    /* PROC(MODE26,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t72,(A68_VC ,A68_VC ,struct A68t54 ,struct A68t60 *),(A68_VC ,A68_VC ,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t72  A68_72 ;    /* PROC(MODE26,MODE26,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t73,(A68_VC ,A68_VC ,struct A68t54 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t54 ,A68_VC *,void *));
typedef struct A68t73  A68_73 ;    /* PROC(MODE26,MODE26,MODE54) MODE26 */
struct A68t74{
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
typedef struct A68t74  A68_74 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t76 ;

A_PROCEDURE(struct A68t74 *,A68t75,(struct A68t76 ,struct A68t54 ),(struct A68t76 ,struct A68t54 ,void *));
typedef struct A68t75  A68_75 ;    /* PROC(MODE76,MODE54) REF MODE74 */
struct A68t76 { A68_INT mode; union {
struct A68t59 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t76  A68_76 ;    /* UNION(REF MODE59,MODE26)  */

A_PROCEDURE(A68_BOOL ,A68t77,(struct A68t59 *),(struct A68t59 *,void *));
typedef struct A68t77  A68_77 ;    /* PROC(REF MODE59) BOOL */

A_PROCEDURE(A68_BITS *,A68t78,(A68_VC ,struct A68t54 ),(A68_VC ,struct A68t54 ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(MODE26,MODE54) REF BITS */

A_PROCEDURE(A68_VOID ,A68t79,(A68_BITS *,struct A68t54 ),(A68_BITS *,struct A68t54 ,void *));
typedef struct A68t79  A68_79 ;    /* PROC(REF BITS,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t80,(A68_BITS *,struct A68t54 ,A68_VC *),(A68_BITS *,struct A68t54 ,A68_VC *,void *));
typedef struct A68t80  A68_80 ;    /* PROC(REF BITS,MODE54) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t81,(A68_VC *),(A68_VC *,void *));
typedef struct A68t81  A68_81 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t82,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t82  A68_82 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_LINT ,A68t83,(void),(void *));
typedef struct A68t83  A68_83 ;    /* PROC LONG INT */

A_PROCEDURE(A68_VOID ,A68t84,(A68_LINT ,A68_VC *),(A68_LINT ,A68_VC *,void *));
typedef struct A68t84  A68_84 ;    /* PROC(LONG INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t85,(A68_INT ),(A68_INT ,void *));
typedef struct A68t85  A68_85 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_INT ,A68t86,(A68_VC ,struct A68t54 ),(A68_VC ,struct A68t54 ,void *));
typedef struct A68t86  A68_86 ;    /* PROC(MODE26,MODE54) INT */

A_PROCEDURE(A68_INT ,A68t87,(void),(void *));
typedef struct A68t87  A68_87 ;    /* PROC INT */
struct A68t88{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t88  A68_88 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t89,(A68_VC ,A68_VC ,struct A68t54 ,struct A68t88 *),(A68_VC ,A68_VC ,struct A68t54 ,struct A68t88 *,void *));
typedef struct A68t89  A68_89 ;    /* PROC(MODE26,MODE26,MODE54) MODE88 */

A_PROCEDURE(A68_VOID ,A68t90,(struct A68t36 *),(struct A68t36 *,void *));
typedef struct A68t90  A68_90 ;    /* PROC MODE36 */

A_PROCEDURE(A68_VOID ,A68t91,(A68_VC ,struct A68t54 ,struct A68t36 *),(A68_VC ,struct A68t54 ,struct A68t36 *,void *));
typedef struct A68t91  A68_91 ;    /* PROC(MODE26,MODE54) MODE36 */
struct A68t93 ;

A_PROCEDURE(A68_VOID ,A68t92,(struct A68t93 ,struct A68t54 ,struct A68t54 ),(struct A68t93 ,struct A68t54 ,struct A68t54 ,void *));
typedef struct A68t92  A68_92 ;    /* PROC(MODE93,MODE54,MODE54) VOID */
A_VECTOR(A68_INT ,A68t93);
typedef struct A68t93  A68_93 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t94,(struct A68t93 ,struct A68t54 ),(struct A68t93 ,struct A68t54 ,void *));
typedef struct A68t94  A68_94 ;    /* PROC(MODE93,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t95,(A68_INT ,struct A68t54 ,struct A68t54 *),(A68_INT ,struct A68t54 ,struct A68t54 *,void *));
typedef struct A68t95  A68_95 ;    /* PROC(INT,MODE54) MODE54 */

A_PROCEDURE(A68_VOID ,A68t96,(void),(void *));
typedef struct A68t96  A68_96 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t97,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(BITS) VOID */
struct A68t99 ;

A_PROCEDURE(A68_VOID ,A68t98,(struct A68t99 ),(struct A68t99 ,void *));
typedef struct A68t98  A68_98 ;    /* PROC(MODE99) VOID */

A_PROCEDURE(A68_VOID ,A68t99,(A68_VC ),(A68_VC ,void *));
typedef struct A68t99  A68_99 ;    /* PROC(MODE26) VOID */
struct A68t100{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_15)
};
typedef struct A68t100  A68_100 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t101,(A68_BOOL ,struct A68t100 *),(A68_BOOL ,struct A68t100 *,void *));
typedef struct A68t101  A68_101 ;    /* PROC(BOOL) MODE100 */
struct A68t103 ;

A_PROCEDURE(A68_VOID ,A68t102,(struct A68t103 ,struct A68t54 ),(struct A68t103 ,struct A68t54 ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(MODE103,MODE54) VOID */
A_VECTOR(struct A68t100 ,A68t103);
typedef struct A68t103  A68_103 ;    /* VECTOR [] MODE100 */

A_PROCEDURE(A68_VOID ,A68t104,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(BOOL) MODE26 */
A_ISTRUCT(A68_CHAR ,7,A68t106);
typedef struct A68t106  A68_106 ;    /* STRUCT 7 CHAR */
struct A68t105{
struct A68t106  Name;
A_PAD_ISTRUCT(A68_106 ,PAD_16)
A68_BOOL  Set;
A_PAD_BOOL(PAD_17)
};
typedef struct A68t105  A68_105 ;    /* STRUCT(MODE106,BOOL)  */
struct A68t107{
A68_INT  Labno;
A_PAD_INT(PAD_18)
};
typedef struct A68t107  A68_107 ;    /* STRUCT(INT)  */
A_ISTRUCT(A68_CHAR ,32,A68t108);
typedef struct A68t108  A68_108 ;    /* STRUCT 32 CHAR */
struct A68t109{
A68_INT  Mode;
A_PAD_INT(PAD_19)
struct A68t109 * Rest;
};
typedef struct A68t109  A68_109 ;    /* STRUCT(INT,REF MODE109)  */
struct A68t110{
A68_INT  Deproc;
A_PAD_INT(PAD_20)
};
typedef struct A68t110  A68_110 ;    /* STRUCT(INT)  */
struct A68t111{
A68_INT  Rdenno;
A_PAD_INT(PAD_21)
struct A68t109 * Modelist;
};
typedef struct A68t111  A68_111 ;    /* STRUCT(INT,REF MODE109)  */
struct A68t112{
A68_INT  Deproc;
A_PAD_INT(PAD_22)
struct A68t109 * Pars;
};
typedef struct A68t112  A68_112 ;    /* STRUCT(INT,REF MODE109)  */
struct A68t113{
A68_INT  Mode;
A_PAD_INT(PAD_23)
A68_INT  Fieldno;
A_PAD_INT(PAD_24)
struct A68t108  Name;
A_PAD_ISTRUCT(A68_108 ,PAD_25)
struct A68t113 * Rest;
};
typedef struct A68t113  A68_113 ;    /* STRUCT(INT,INT,MODE108,REF MODE113)  */
struct A68t114{
A68_INT  Rdenno;
A_PAD_INT(PAD_26)
A68_INT  Deflex;
A_PAD_INT(PAD_27)
struct A68t113 * Sels;
};
typedef struct A68t114  A68_114 ;    /* STRUCT(INT,INT,REF MODE113)  */
struct A68t115{
A68_INT  Rdenno;
A_PAD_INT(PAD_28)
A68_INT  Imode;
A_PAD_INT(PAD_29)
A68_INT  Length;
A_PAD_INT(PAD_30)
A68_INT  Deflex;
A_PAD_INT(PAD_31)
};
typedef struct A68t115  A68_115 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t116{
A68_INT  Rdenno;
A_PAD_INT(PAD_32)
A68_INT  Vecmode;
A_PAD_INT(PAD_33)
A68_INT  Deflex;
A_PAD_INT(PAD_34)
};
typedef struct A68t116  A68_116 ;    /* STRUCT(INT,INT,INT)  */
struct A68t117{
A68_INT  Rdenno;
A_PAD_INT(PAD_35)
A68_INT  Mode;
A_PAD_INT(PAD_36)
A68_INT  Nods;
A_PAD_INT(PAD_37)
A68_INT  Deflex;
A_PAD_INT(PAD_38)
};
typedef struct A68t117  A68_117 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t118{
A68_INT  Mode;
A_PAD_INT(PAD_39)
struct A68t119 * Stenlist;
};
typedef struct A68t118  A68_118 ;    /* STRUCT(INT,REF MODE119)  */
struct A68t119{
A68_INT  Mode;
A_PAD_INT(PAD_40)
A68_INT  Rdenno;
A_PAD_INT(PAD_41)
struct A68t119 * Rest;
};
typedef struct A68t119  A68_119 ;    /* STRUCT(INT,INT,REF MODE119)  */
struct A68t120{
A68_INT  Mode;
A_PAD_INT(PAD_42)
};
typedef struct A68t120  A68_120 ;    /* STRUCT(INT)  */
struct A68t121 { A68_INT mode; union {
A68_INT  mode1;
struct A68t111 * mode2;
struct A68t112 * mode3;
struct A68t114 * mode4;
struct A68t115 * mode5;
struct A68t110 * mode6;
struct A68t116 * mode7;
struct A68t117 * mode8;
struct A68t118 * mode9;
struct A68t122 * mode10;
struct A68t120  mode11;
} data; };
typedef struct A68t121  A68_121 ;    /* UNION(INT,REF MODE111,REF MODE112,REF MODE114,REF MODE115,REF MODE110,REF MODE116,REF MODE117,REF MODE118,REF MODE122,MODE120)  */
struct A68t122{
A68_INT  Mode;
A_PAD_INT(PAD_43)
A68_INT  Modeproc;
A_PAD_INT(PAD_44)
struct A68t123 * El;
};
typedef struct A68t122  A68_122 ;    /* STRUCT(INT,INT,REF MODE123)  */
struct A68t123{
struct A68t122 * Am;
struct A68t123 * Rest;
};
typedef struct A68t123  A68_123 ;    /* STRUCT(REF MODE122,REF MODE123)  */
struct A68t124{
struct A68t108  Name;
A_PAD_ISTRUCT(A68_108 ,PAD_45)
A68_INT  Decno;
A_PAD_INT(PAD_46)
A68_INT  Level;
A_PAD_INT(PAD_47)
A68_INT  Mode;
A_PAD_INT(PAD_48)
A68_INT  Scope;
A_PAD_INT(PAD_49)
struct A68t124 * Rest;
};
typedef struct A68t124  A68_124 ;    /* STRUCT(MODE108,INT,INT,INT,INT,REF MODE124)  */
struct A68t125{
struct A68t108  Name;
A_PAD_ISTRUCT(A68_108 ,PAD_50)
A68_BITS  Props;
A_PAD_BITS(PAD_51)
A68_INT  Mode;
A_PAD_INT(PAD_52)
A68_INT  Rdenno;
A_PAD_INT(PAD_53)
A68_INT  Maxname;
A_PAD_INT(PAD_54)
A68_INT  Level;
A_PAD_INT(PAD_55)
struct A68t125 * Rest;
};
typedef struct A68t125  A68_125 ;    /* STRUCT(MODE108,BITS,INT,INT,INT,INT,REF MODE125)  */
struct A68t126{
struct A68t108  Name;
A_PAD_ISTRUCT(A68_108 ,PAD_56)
A68_INT  Labno;
A_PAD_INT(PAD_57)
A68_INT  Status;
A_PAD_INT(PAD_58)
struct A68t126 * Rest;
};
typedef struct A68t126  A68_126 ;    /* STRUCT(MODE108,INT,INT,REF MODE126)  */
A_VECTOR(struct A68t129 ,A68t128);
typedef struct A68t128  A68_128 ;    /* VECTOR [] MODE129 */
A_VECTOR(struct A68t136 ,A68t135);
typedef struct A68t135  A68_135 ;    /* VECTOR [] MODE136 */
struct A68t136{
struct A68t108  N;
A_PAD_ISTRUCT(A68_108 ,PAD_59)
struct A68t108  F;
A_PAD_ISTRUCT(A68_108 ,PAD_60)
A68_INT  Level;
A_PAD_INT(PAD_61)
};
typedef struct A68t136  A68_136 ;    /* STRUCT(MODE108,MODE108,INT)  */
struct A68t134 { A68_INT mode; union {
A68_VC  mode1;
struct A68t135  mode2;
} data; };
typedef struct A68t134  A68_134 ;    /* UNION(REF MODE26,REF MODE135)  */
struct A68t130{
struct A68t108  F;
A_PAD_ISTRUCT(A68_108 ,PAD_62)
A68_INT  No;
A_PAD_INT(PAD_63)
A68_INT  Nl;
A_PAD_INT(PAD_64)
A68_INT  Ng;
A_PAD_INT(PAD_65)
struct A68t134  U;
};
typedef struct A68t130  A68_130 ;    /* STRUCT(MODE108,INT,INT,INT,MODE134)  */
A_VECTOR(struct A68t133 ,A68t131);
typedef struct A68t131  A68_131 ;    /* VECTOR [] MODE133 */
struct A68t133{
struct A68t106  Prefix;
A_PAD_ISTRUCT(A68_106 ,PAD_66)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_67)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_68)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_69)
A68_BOOL  Keptgenproc;
A_PAD_BOOL(PAD_70)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_71)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t133  A68_133 ;    /* STRUCT(MODE106,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26)  */
A_VECTOR(struct A68t106 ,A68t132);
typedef struct A68t132  A68_132 ;    /* VECTOR [] MODE106 */
struct A68t129{
struct A68t130  Xs;
struct A68t106  Ys;
A_PAD_ISTRUCT(A68_106 ,PAD_72)
A68_LINT  Timeoflastchange;
A_PAD_LINT(PAD_73)
struct A68t131  Keptinfo;
struct A68t132  Cnames;
};
typedef struct A68t129  A68_129 ;    /* STRUCT(MODE130,MODE106,LONG INT,REF MODE131,REF MODE132)  */
struct A68t127{
struct A68t106  Uname;
A_PAD_ISTRUCT(A68_106 ,PAD_74)
struct A68t106  Lname;
A_PAD_ISTRUCT(A68_106 ,PAD_75)
struct A68t106  Gname;
A_PAD_ISTRUCT(A68_106 ,PAD_76)
struct A68t128  Specs;
};
typedef struct A68t127  A68_127 ;    /* STRUCT(MODE106,MODE106,MODE106,REF MODE128)  */
struct A68t137{
A68_INT  I;
A_PAD_INT(PAD_77)
A68_INT  J;
A_PAD_INT(PAD_78)
};
typedef struct A68t137  A68_137 ;    /* STRUCT(INT,INT)  */
struct A68t138{
A68_INT  I;
A_PAD_INT(PAD_79)
A68_INT  J;
A_PAD_INT(PAD_80)
A68_INT  K;
A_PAD_INT(PAD_81)
};
typedef struct A68t138  A68_138 ;    /* STRUCT(INT,INT,INT)  */
struct A68t139{
A68_INT  Mode;
A_PAD_INT(PAD_82)
A68_BOOL  Loc;
A_PAD_BOOL(PAD_83)
};
typedef struct A68t139  A68_139 ;    /* STRUCT(INT,BOOL)  */
struct A68t140{
A68_INT  Mode;
A_PAD_INT(PAD_84)
A68_INT  Nopars;
A_PAD_INT(PAD_85)
};
typedef struct A68t140  A68_140 ;    /* STRUCT(INT,INT)  */
struct A68t141{
A68_INT  Mode;
A_PAD_INT(PAD_86)
A68_VC  Nu;
};
typedef struct A68t141  A68_141 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t142{
A68_INT  Almode;
A_PAD_INT(PAD_87)
};
typedef struct A68t142  A68_142 ;    /* STRUCT(INT)  */
struct A68t143{
A68_INT  Nochars;
A_PAD_INT(PAD_88)
A68_INT  Base;
A_PAD_INT(PAD_89)
A68_VC  Chars;
};
typedef struct A68t143  A68_143 ;    /* STRUCT(INT,INT,REF MODE26)  */
struct A68t144{
A68_INT  Strmode;
A_PAD_INT(PAD_90)
};
typedef struct A68t144  A68_144 ;    /* STRUCT(INT)  */
struct A68t145{
A68_INT  Nochars;
A_PAD_INT(PAD_91)
A68_INT  Nocases;
A_PAD_INT(PAD_92)
A68_INT  W;
A_PAD_INT(PAD_93)
};
typedef struct A68t145  A68_145 ;    /* STRUCT(INT,INT,INT)  */
struct A68t147{
A68_INT  Nse;
A_PAD_INT(PAD_94)
};
typedef struct A68t147  A68_147 ;    /* STRUCT(INT)  */
struct A68t146 { A68_INT mode; union {
A68_BOOL  mode1;
A68_INT  mode2;
struct A68t126 * mode3;
struct A68t147  mode4;
struct A68t139  mode5;
struct A68t144  mode6;
struct A68t145  mode7;
struct A68t141  mode8;
struct A68t142  mode9;
struct A68t140  mode10;
} data; };
typedef struct A68t146  A68_146 ;    /* UNION(BOOL,INT,REF MODE126,MODE147,MODE139,MODE144,MODE145,MODE141,MODE142,MODE140)  */
struct A68t148{
A68_INT  Type;
A_PAD_INT(PAD_95)
struct A68t124 * Iddec;
};
typedef struct A68t148  A68_148 ;    /* STRUCT(INT,REF MODE124)  */
struct A68t149{
struct A68t126 * Lab;
A68_BOOL  Notsetting;
A_PAD_BOOL(PAD_96)
};
typedef struct A68t149  A68_149 ;    /* STRUCT(REF MODE126,BOOL)  */
struct A68t150 { A68_INT mode; union {
struct A68t148  mode1;
struct A68t149  mode2;
} data; };
typedef struct A68t150  A68_150 ;    /* UNION(MODE148,MODE149)  */
struct A68t151{
A68_BOOL  Up;
A_PAD_BOOL(PAD_97)
};
typedef struct A68t151  A68_151 ;    /* STRUCT(BOOL)  */
struct A68t152{
A68_INT  Fn;
A_PAD_INT(PAD_98)
A68_INT  M;
A_PAD_INT(PAD_99)
A68_INT  Param;
A_PAD_INT(PAD_100)
};
typedef struct A68t152  A68_152 ;    /* STRUCT(INT,INT,INT)  */
struct A68t153{
A68_INT  Charpos;
A_PAD_INT(PAD_101)
};
typedef struct A68t153  A68_153 ;    /* STRUCT(INT)  */
struct A68t154{
A68_BOOL  All;
A_PAD_BOOL(PAD_102)
A68_VC  Pr;
};
typedef struct A68t154  A68_154 ;    /* STRUCT(BOOL,REF MODE26)  */
struct A68t155{
A68_INT  W;
A_PAD_INT(PAD_103)
};
typedef struct A68t155  A68_155 ;    /* STRUCT(INT)  */
struct A68t156{
A68_INT  Fn;
A_PAD_INT(PAD_104)
A68_INT  M;
A_PAD_INT(PAD_105)
A68_BITS  Props;
A_PAD_BITS(PAD_106)
A68_INT  Param;
A_PAD_INT(PAD_107)
};
typedef struct A68t156  A68_156 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t157{
A68_INT  Norden;
A_PAD_INT(PAD_108)
A68_INT  Nomodes;
A_PAD_INT(PAD_109)
A68_INT  Nolabs;
A_PAD_INT(PAD_110)
A68_INT  Nodecnos;
A_PAD_INT(PAD_111)
A68_INT  Nomodules;
A_PAD_INT(PAD_112)
A68_INT  Nolibinds;
A_PAD_INT(PAD_113)
};
typedef struct A68t157  A68_157 ;    /* STRUCT(INT,INT,INT,INT,INT,INT)  */
struct A68t158{
struct A68t108  Name;
A_PAD_ISTRUCT(A68_108 ,PAD_114)
struct A68t136  L;
struct A68t136  G;
A68_INT  Type;
A_PAD_INT(PAD_115)
};
typedef struct A68t158  A68_158 ;    /* STRUCT(MODE108,MODE136,MODE136,INT)  */
struct A68t159{
struct A68t158  Xmi;
struct A68t127  Ym;
};
typedef struct A68t159  A68_159 ;    /* STRUCT(MODE158,MODE127)  */
struct A68t160{
struct A68t130  Xs;
struct A68t106  Ys;
A_PAD_ISTRUCT(A68_106 ,PAD_116)
};
typedef struct A68t160  A68_160 ;    /* STRUCT(MODE130,MODE106)  */
struct A68t161{
struct A68t108  Name;
A_PAD_ISTRUCT(A68_108 ,PAD_117)
A68_INT  Maxlevel;
A_PAD_INT(PAD_118)
A68_INT  Nof;
A_PAD_INT(PAD_119)
A68_INT  Moduleno;
A_PAD_INT(PAD_120)
};
typedef struct A68t161  A68_161 ;    /* STRUCT(MODE108,INT,INT,INT)  */
struct A68t162{
A68_INT  Moduleno;
A_PAD_INT(PAD_121)
A68_INT  Nof;
A_PAD_INT(PAD_122)
};
typedef struct A68t162  A68_162 ;    /* STRUCT(INT,INT)  */
struct A68t163{
A68_INT  Type;
A_PAD_INT(PAD_123)
A68_INT  Moduleno;
A_PAD_INT(PAD_124)
struct A68t108  Name;
A_PAD_ISTRUCT(A68_108 ,PAD_125)
struct A68t127  Ym;
};
typedef struct A68t163  A68_163 ;    /* STRUCT(INT,INT,MODE108,MODE127)  */
struct A68t164{
A68_BOOL  Bu;
A_PAD_BOOL(PAD_126)
A68_INT  Level;
A_PAD_INT(PAD_127)
struct A68t124 * Id;
};
typedef struct A68t164  A68_164 ;    /* STRUCT(BOOL,INT,REF MODE124)  */
A_VECTOR(struct A68t138 ,A68t166);
typedef struct A68t166  A68_166 ;    /* VECTOR [] MODE138 */
struct A68t165{
struct A68t137  Body;
struct A68t166  Kset;
struct A68t93  Keeps;
A68_INT  Last;
A_PAD_INT(PAD_128)
};
typedef struct A68t165  A68_165 ;    /* STRUCT(MODE137,REF MODE166,REF MODE93,INT)  */
struct A68t167{
A68_INT  Body;
A_PAD_INT(PAD_129)
struct A68t93  Actuals;
A68_INT  Moduleno;
A_PAD_INT(PAD_130)
};
typedef struct A68t167  A68_167 ;    /* STRUCT(INT,REF MODE93,INT)  */
struct A68t168{
struct A68t108  Name;
A_PAD_ISTRUCT(A68_108 ,PAD_131)
struct A68t127  Ym;
struct A68t108  Formal;
A_PAD_ISTRUCT(A68_108 ,PAD_132)
struct A68t106  Ys;
A_PAD_ISTRUCT(A68_106 ,PAD_133)
A68_INT  Level;
A_PAD_INT(PAD_134)
A68_INT  Ownlevel;
A_PAD_INT(PAD_135)
};
typedef struct A68t168  A68_168 ;    /* STRUCT(MODE108,MODE127,MODE108,MODE106,INT,INT)  */
struct A68t169{
A68_INT  Moduleno;
A_PAD_INT(PAD_136)
A68_INT  Type;
A_PAD_INT(PAD_137)
};
typedef struct A68t169  A68_169 ;    /* STRUCT(INT,INT)  */
struct A68t170{
struct A68t93  Decnos;
struct A68t93  Modes;
};
typedef struct A68t170  A68_170 ;    /* STRUCT(REF MODE93,REF MODE93)  */
struct A68t171{
A68_INT  Moduleno;
A_PAD_INT(PAD_138)
A68_INT  Type;
A_PAD_INT(PAD_139)
A68_INT  Maxmodule;
A_PAD_INT(PAD_140)
};
typedef struct A68t171  A68_171 ;    /* STRUCT(INT,INT,INT)  */
A_VECTOR(struct A68t121 ,A68t173);
typedef struct A68t173  A68_173 ;    /* VECTOR [] MODE121 */
struct A68t172 { A68_INT mode; union {
struct A68t151  mode1;
A68_BOOL  mode2;
A68_INT  mode3;
struct A68t126 * mode4;
struct A68t147  mode5;
struct A68t139  mode6;
struct A68t144  mode7;
struct A68t145  mode8;
struct A68t141  mode9;
struct A68t142  mode10;
struct A68t140  mode11;
struct A68t148  mode12;
struct A68t149  mode13;
struct A68t152  mode14;
struct A68t153  mode15;
struct A68t155  mode16;
struct A68t156  mode17;
struct A68t157  mode18;
struct A68t173  mode19;
struct A68t154  mode20;
struct A68t158  mode21;
struct A68t130  mode22;
struct A68t161  mode23;
struct A68t162  mode24;
struct A68t163  mode25;
struct A68t164  mode26;
struct A68t165  mode27;
struct A68t167  mode28;
struct A68t168  mode29;
struct A68t93  mode30;
struct A68t169  mode31;
struct A68t170  mode32;
struct A68t171  mode33;
struct A68t125 * mode34;
struct A68t143  mode35;
} data; };
typedef struct A68t172  A68_172 ;    /* UNION(MODE151,BOOL,INT,REF MODE126,MODE147,MODE139,MODE144,MODE145,MODE141,MODE142,MODE140,MODE148,MODE149,MODE152,MODE153,MODE155,MODE156,MODE157,REF MODE173,MODE154,MODE158,MODE130,MODE161,MODE162,MODE163,MODE164,MODE165,MODE167,MODE168,REF MODE93,MODE169,MODE170,MODE171,REF MODE125,MODE143)  */
struct A68t175 ;
struct A68t176 ;
struct A68t177 ;
struct A68t178 ;
struct A68t179 ;
struct A68t180 ;
struct A68t181 ;
struct A68t182 ;

A_PROCEDURE(A68_BOOL ,A68t174,(struct A68t175 ,struct A68t176 ,struct A68t177 ,struct A68t178 ,struct A68t179 ,struct A68t180 ,struct A68t181 ,struct A68t182 ),(struct A68t175 ,struct A68t176 ,struct A68t177 ,struct A68t178 ,struct A68t179 ,struct A68t180 ,struct A68t181 ,struct A68t182 ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE175,MODE176,MODE177,MODE178,MODE179,MODE180,MODE181,REF MODE182) BOOL */

A_PROCEDURE(A68_BOOL ,A68t175,(A68_VC ,A68_INT *),(A68_VC ,A68_INT *,void *));
typedef struct A68t175  A68_175 ;    /* PROC(REF MODE26,REF INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t176,(struct A68t172 ,A68_INT ),(struct A68t172 ,A68_INT ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(MODE172,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t177,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t178,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t178  A68_178 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t179,(struct A68t108 ,A68_INT ,A68_BOOL ,struct A68t159 *),(struct A68t108 ,A68_INT ,A68_BOOL ,struct A68t159 *,void *));
typedef struct A68t179  A68_179 ;    /* PROC(MODE108,INT,BOOL) MODE159 */

A_PROCEDURE(A68_VOID ,A68t180,(struct A68t108 ,struct A68t108 ,struct A68t127 ,struct A68t160 *),(struct A68t108 ,struct A68t108 ,struct A68t127 ,struct A68t160 *,void *));
typedef struct A68t180  A68_180 ;    /* PROC(MODE108,MODE108,MODE127) MODE160 */

A_PROCEDURE(A68_INT ,A68t181,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(REF MODE26,BOOL) INT */
A_ROW(struct A68t183 ,A68t182,1);
typedef struct A68t182  A68_182 ;    /* [] MODE183 */
struct A68t183{
A68_INT  Type;
A_PAD_INT(PAD_141)
A68_INT  Value;
A_PAD_INT(PAD_142)
};
typedef struct A68t183  A68_183 ;    /* STRUCT(INT,INT)  */
struct A68t185 ;
struct A68t186 ;

A_PROCEDURE(A68_VOID ,A68t184,(struct A68t185 ,struct A68t157 *,struct A68t186 ),(struct A68t185 ,struct A68t157 *,struct A68t186 ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(MODE185,REF MODE157,REF MODE186) VOID */
struct A68t187 ;

A_PROCEDURE(A68_VOID ,A68t185,(struct A68t187 *),(struct A68t187 *,void *));
typedef struct A68t185  A68_185 ;    /* PROC MODE187 */
A_ROW(A68_INT ,A68t186,1);
typedef struct A68t186  A68_186 ;    /* [] INT */
struct A68t188{
A68_VC  Representation;
};
typedef struct A68t188  A68_188 ;    /* STRUCT(REF MODE26)  */
struct A68t189{
A68_INT  Mode;
A_PAD_INT(PAD_143)
A68_VC  String;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t190{
A68_INT  Mode;
A_PAD_INT(PAD_144)
A68_LBITS  Denotation;
A_PAD_LBITS(PAD_145)
};
typedef struct A68t190  A68_190 ;    /* STRUCT(INT,LONG BITS)  */
struct A68t191{
A68_INT  Mode;
A_PAD_INT(PAD_146)
A68_VC  Denotation;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t192{
A68_INT  Fn;
A_PAD_INT(PAD_147)
A68_INT  Mode;
A_PAD_INT(PAD_148)
A68_INT  Param;
A_PAD_INT(PAD_149)
};
typedef struct A68t192  A68_192 ;    /* STRUCT(INT,INT,INT)  */
struct A68t193{
A68_INT  Type;
A_PAD_INT(PAD_150)
A68_VC  Name;
A68_INT  Mode;
A_PAD_INT(PAD_151)
A68_INT  Decno;
A_PAD_INT(PAD_152)
};
typedef struct A68t193  A68_193 ;    /* STRUCT(INT,REF MODE26,INT,INT)  */
struct A68t194{
A68_VC  Name;
A68_BITS  Props;
A_PAD_BITS(PAD_153)
A68_INT  Mode;
A_PAD_INT(PAD_154)
A68_INT  Rdenno;
A_PAD_INT(PAD_155)
A68_INT  Maxname;
A_PAD_INT(PAD_156)
};
typedef struct A68t194  A68_194 ;    /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
struct A68t195{
A68_VC  Name;
A68_INT  Labno;
A_PAD_INT(PAD_157)
A68_INT  Status;
A_PAD_INT(PAD_158)
A68_BOOL  Notsetting;
A_PAD_BOOL(PAD_159)
};
typedef struct A68t195  A68_195 ;    /* STRUCT(REF MODE26,INT,INT,BOOL)  */
struct A68t196{
A68_INT  Mode;
A_PAD_INT(PAD_160)
A68_BITS  Props;
A_PAD_BITS(PAD_161)
A68_INT  Param;
A_PAD_INT(PAD_162)
};
typedef struct A68t196  A68_196 ;    /* STRUCT(INT,BITS,INT)  */
struct A68t197{
A68_INT  I;
A_PAD_INT(PAD_163)
};
typedef struct A68t197  A68_197 ;    /* STRUCT(INT)  */
struct A68t198{
A68_BOOL  Start;
A_PAD_BOOL(PAD_164)
};
typedef struct A68t198  A68_198 ;    /* STRUCT(BOOL)  */
struct A68t199{
struct A68t145  Info;
A68_VC  Text;
};
typedef struct A68t199  A68_199 ;    /* STRUCT(MODE145,REF MODE26)  */
struct A68t200{
A68_INT  Mode;
A_PAD_INT(PAD_165)
A68_INT  Number;
A_PAD_INT(PAD_166)
A68_VC  Insert;
};
typedef struct A68t200  A68_200 ;    /* STRUCT(INT,INT,REF MODE26)  */
struct A68t201{
A68_INT  Fn;
A_PAD_INT(PAD_167)
A68_INT  Mode;
A_PAD_INT(PAD_168)
A68_BITS  Props;
A_PAD_BITS(PAD_169)
A68_INT  Param;
A_PAD_INT(PAD_170)
};
typedef struct A68t201  A68_201 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t202{
A68_INT  Fn;
A_PAD_INT(PAD_171)
A68_INT  Mode;
A_PAD_INT(PAD_172)
A68_BITS  Props;
A_PAD_BITS(PAD_173)
A68_INT  Resultmode;
A_PAD_INT(PAD_174)
};
typedef struct A68t202  A68_202 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t203{
A68_INT  Fn;
A_PAD_INT(PAD_175)
A68_BITS  Props;
A_PAD_BITS(PAD_176)
};
typedef struct A68t203  A68_203 ;    /* STRUCT(INT,BITS)  */
struct A68t204{
A68_INT  Body;
A_PAD_INT(PAD_177)
A68_INT  Moduleno;
A_PAD_INT(PAD_178)
struct A68t186  Actuals;
};
typedef struct A68t204  A68_204 ;    /* STRUCT(INT,INT,REF MODE186)  */
struct A68t205{
A68_INT  Moduleno;
A_PAD_INT(PAD_179)
A68_INT  I;
A_PAD_INT(PAD_180)
A68_INT  J;
A_PAD_INT(PAD_181)
};
typedef struct A68t205  A68_205 ;    /* STRUCT(INT,INT,INT)  */
A_ROW(A68_VC ,A68t207,1);
typedef struct A68t207  A68_207 ;    /* [] REF MODE26 */
struct A68t206{
A68_INT  Moduleno;
A_PAD_INT(PAD_182)
A68_VC  Name;
A68_VC  Uname;
A68_VC  Lname;
A68_VC  Gname;
struct A68t207  Ysnames;
};
typedef struct A68t206  A68_206 ;    /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE207)  */
struct A68t187 { A68_INT mode; union {
struct A68t147  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t188  mode4;
struct A68t107  mode5;
struct A68t141  mode6;
struct A68t189  mode7;
struct A68t190  mode8;
struct A68t191  mode9;
struct A68t192  mode10;
struct A68t193  mode11;
struct A68t194  mode12;
struct A68t155  mode13;
struct A68t195  mode14;
struct A68t196  mode15;
struct A68t197  mode16;
struct A68t198  mode17;
struct A68t199  mode18;
struct A68t200  mode19;
struct A68t201  mode20;
struct A68t202  mode21;
struct A68t203  mode22;
struct A68t204  mode23;
struct A68t205  mode24;
struct A68t206  mode25;
} data; };
typedef struct A68t187  A68_187 ;    /* UNION(MODE147,INT,BOOL,MODE188,MODE107,MODE141,MODE189,MODE190,MODE191,MODE192,MODE193,MODE194,MODE155,MODE195,MODE196,MODE197,MODE198,MODE199,MODE200,MODE201,MODE202,MODE203,MODE204,MODE205,MODE206,VOID)  */
struct A68t209 ;

A_PROCEDURE(A68_VOID ,A68t208,(struct A68t209 ),(struct A68t209 ,void *));
typedef struct A68t208  A68_208 ;    /* PROC(MODE209) VOID */
A_VECTOR(struct A68t210 ,A68t209);
typedef struct A68t209  A68_209 ;    /* VECTOR [] MODE210 */
struct A68t210 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_SINT  mode3;
} data; };
typedef struct A68t210  A68_210 ;    /* UNION(CHAR,MODE26,SHORT INT)  */
struct A68t212 ;

A_PROCEDURE(A68_VOID ,A68t211,(struct A68t212 ,A68_INT ),(struct A68t212 ,A68_INT ,void *));
typedef struct A68t211  A68_211 ;    /* PROC(MODE212,INT) VOID */
A_VECTOR(struct A68t213 ,A68t212);
typedef struct A68t212  A68_212 ;    /* VECTOR [] MODE213 */
struct A68t213 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_INT  mode3;
A68_SINT  mode4;
} data; };
typedef struct A68t213  A68_213 ;    /* UNION(CHAR,MODE26,INT,SHORT INT)  */

A_PROCEDURE(A68_VOID ,A68t214,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t214  A68_214 ;    /* PROC(REF MODE26,INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t215,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t215  A68_215 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t216,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t216  A68_216 ;    /* PROC(REF MODE26) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t217,(A68_INT ),(A68_INT ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t218,(A68_INT ),(A68_INT ,void *));
typedef struct A68t218  A68_218 ;    /* PROC(INT) BOOL */
struct A68t219{
A68_INT  Level;
A_PAD_INT(PAD_183)
A68_INT  Block;
A_PAD_INT(PAD_184)
};
typedef struct A68t219  A68_219 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t220,(struct A68t219 *),(struct A68t219 *,void *));
typedef struct A68t220  A68_220 ;    /* PROC MODE219 */

A_PROCEDURE(A68_BOOL ,A68t221,(void),(void *));
typedef struct A68t221  A68_221 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t222,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t223,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t224,(struct A68t219 ,struct A68t219 ),(struct A68t219 ,struct A68t219 ,void *));
typedef struct A68t224  A68_224 ;    /* PROC(MODE219,MODE219) BOOL */

A_PROCEDURE(A68_BOOL ,A68t225,(struct A68t219 ),(struct A68t219 ,void *));
typedef struct A68t225  A68_225 ;    /* PROC(MODE219) BOOL */

A_PROCEDURE(A68_VOID ,A68t226,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t226  A68_226 ;    /* PROC(MODE26,BOOL) VOID */
struct A68t228 ;

A_PROCEDURE(A68_VOID ,A68t227,(A68_INT ,struct A68t228 ),(A68_INT ,struct A68t228 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(INT,MODE228) VOID */
A_ROW(A68_VC ,A68t228,1);
typedef struct A68t228  A68_228 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t229,(void),(void *));
typedef struct A68t229  A68_229 ;    /* PROC BITS */
struct A68t230{
A68_INT  Cfile;
A_PAD_INT(PAD_185)
};
typedef struct A68t230  A68_230 ;    /* STRUCT(INT)  */
struct A68t231{
A68_INT  Seedfile;
A_PAD_INT(PAD_186)
};
typedef struct A68t231  A68_231 ;    /* STRUCT(INT)  */
struct A68t232 { A68_INT mode; union {
struct A68t230  mode1;
struct A68t231  mode2;
struct A68t106  mode3;
} data; };
typedef struct A68t232  A68_232 ;    /* UNION(MODE230,MODE231,MODE106,VOID)  */
A_ROW(A68_BOOL ,A68t233,1);
typedef struct A68t233  A68_233 ;    /* [] BOOL */
struct A68t234{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_187)
A68_VC  Sourcefile;
struct A68t106  Nameseed;
A_PAD_ISTRUCT(A68_106 ,PAD_188)
struct A68t232  Nameseedorigin;
struct A68t235 * Used_modules;
A68_VC  Commandline;
struct A68t236 * Environment;
};
typedef struct A68t234  A68_234 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE106,MODE232,REF MODE235,REF MODE26,REF MODE236)  */
struct A68t235{
A68_VC  Modinfo_file;
struct A68t235 * Next;
};
typedef struct A68t235  A68_235 ;    /* STRUCT(REF MODE26,REF MODE235)  */
struct A68t236{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t236 * Next;
};
typedef struct A68t236  A68_236 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE236)  */
struct A68t238 ;

A_PROCEDURE(struct A68t59 *,A68t237,(A68_VC ,struct A68t238 *,A68_VC *),(A68_VC ,struct A68t238 *,A68_VC *,void *));
typedef struct A68t237  A68_237 ;    /* PROC(MODE26,REF MODE238,REF REF MODE26) REF MODE59 */
struct A68t238{
A68_VC  Dir;
struct A68t238 * Next;
};
typedef struct A68t238  A68_238 ;    /* STRUCT(REF MODE26,REF MODE238)  */
struct A68t239 { A68_INT mode; union {
struct A68t204  mode1;
struct A68t205  mode2;
struct A68t206  mode3;
} data; };
typedef struct A68t239  A68_239 ;    /* UNION(MODE204,MODE205,MODE206)  */
struct A68t240 { A68_INT mode; union {
struct A68t147  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t188  mode4;
struct A68t107  mode5;
struct A68t141  mode6;
struct A68t189  mode7;
struct A68t190  mode8;
struct A68t191  mode9;
} data; };
typedef struct A68t240  A68_240 ;    /* UNION(MODE147,INT,BOOL,MODE188,MODE107,MODE141,MODE189,MODE190,MODE191)  */
struct A68t241 { A68_INT mode; union {
struct A68t147  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t188  mode4;
struct A68t107  mode5;
struct A68t141  mode6;
struct A68t189  mode7;
struct A68t190  mode8;
struct A68t191  mode9;
struct A68t192  mode10;
struct A68t193  mode11;
struct A68t194  mode12;
struct A68t155  mode13;
struct A68t195  mode14;
struct A68t196  mode15;
struct A68t197  mode16;
struct A68t198  mode17;
struct A68t199  mode18;
struct A68t200  mode19;
} data; };
typedef struct A68t241  A68_241 ;    /* UNION(MODE147,INT,BOOL,MODE188,MODE107,MODE141,MODE189,MODE190,MODE191,MODE192,MODE193,MODE194,MODE155,MODE195,MODE196,MODE197,MODE198,MODE199,MODE200)  */

A_PROCEDURE(A68_VOID ,A68t242,(struct A68t187 ,A68_VC *),(struct A68t187 ,A68_VC *,void *));
typedef struct A68t242  A68_242 ;    /* PROC(MODE187) MODE26 */
struct A68t243{
A68_INT  Parameters;
A_PAD_INT(PAD_189)
A68_INT  Result;
A_PAD_INT(PAD_190)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_191)
};
typedef struct A68t243  A68_243 ;    /* STRUCT(INT,INT,BOOL)  */
struct A68t244{
A68_INT  Mode;
A_PAD_INT(PAD_192)
A68_INT  Offset;
A_PAD_INT(PAD_193)
struct A68t108  Name;
A_PAD_ISTRUCT(A68_108 ,PAD_194)
};
typedef struct A68t244  A68_244 ;    /* STRUCT(INT,INT,MODE108)  */

A_PROCEDURE(A68_VOID ,A68t245,(A68_INT ,struct A68t93 *),(A68_INT ,struct A68t93 *,void *));
typedef struct A68t245  A68_245 ;    /* PROC(INT) REF MODE93 */

A_PROCEDURE(A68_VOID ,A68t246,(struct A68t244 *,A68_VC *),(struct A68t244 *,A68_VC *,void *));
typedef struct A68t246  A68_246 ;    /* PROC(REF MODE244) MODE26 */
struct A68t248 ;

A_PROCEDURE(A68_VOID ,A68t247,(A68_INT ,A68_VC ,struct A68t248 *),(A68_INT ,A68_VC ,struct A68t248 *,void *));
typedef struct A68t247  A68_247 ;    /* PROC(INT,MODE26) MODE248 */
struct A68t248{
struct A68t106  Name;
A_PAD_ISTRUCT(A68_106 ,PAD_195)
A68_INT  Mode;
A_PAD_INT(PAD_196)
};
typedef struct A68t248  A68_248 ;    /* STRUCT(MODE106,INT)  */
struct A68t250 ;

A_PROCEDURE(A68_VOID ,A68t249,(struct A68t250 ,A68_INT ),(struct A68t250 ,A68_INT ,void *));
typedef struct A68t249  A68_249 ;    /* PROC(REF MODE250,INT) VOID */
A_ROW(struct A68t121 ,A68t250,1);
typedef struct A68t250  A68_250 ;    /* [] MODE121 */

A_PROCEDURE(A68_VOID ,A68t251,(A68_INT ,struct A68t243 *),(A68_INT ,struct A68t243 *,void *));
typedef struct A68t251  A68_251 ;    /* PROC(INT) MODE243 */
struct A68t253 ;

A_PROCEDURE(A68_VOID ,A68t252,(A68_INT ,struct A68t253 *),(A68_INT ,struct A68t253 *,void *));
typedef struct A68t252  A68_252 ;    /* PROC(INT) REF MODE253 */
A_VECTOR(struct A68t244 ,A68t253);
typedef struct A68t253  A68_253 ;    /* VECTOR [] MODE244 */

A_PROCEDURE(A68_INT ,A68t254,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t254  A68_254 ;    /* PROC(INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t255,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t255  A68_255 ;    /* PROC(INT,INT) MODE26 */
struct A68t256{
struct A68t108  Name;
A_PAD_ISTRUCT(A68_108 ,PAD_197)
struct A68t127  Ym;
struct A68t106  Ys;
A_PAD_ISTRUCT(A68_106 ,PAD_198)
A68_INT  Level;
A_PAD_INT(PAD_199)
struct A68t257 * Ids;
struct A68t258 * Uses;
struct A68t256 * Rest;
};
typedef struct A68t256  A68_256 ;    /* STRUCT(MODE108,MODE127,MODE106,INT,REF MODE257,REF MODE258,REF MODE256)  */
struct A68t257{
struct A68t108  Name;
A_PAD_ISTRUCT(A68_108 ,PAD_200)
struct A68t106  Uname;
A_PAD_ISTRUCT(A68_106 ,PAD_201)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_202)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_203)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_204)
A68_BOOL  Genproc;
A_PAD_BOOL(PAD_205)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_206)
A68_INT  Mode;
A_PAD_INT(PAD_207)
A68_INT  Decno;
A_PAD_INT(PAD_208)
A68_VC  Definition;
A68_VC  Rhs;
struct A68t257 * Rest;
};
typedef struct A68t257  A68_257 ;    /* STRUCT(MODE108,MODE106,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,REF MODE26,REF MODE26,REF MODE257)  */
struct A68t258{
struct A68t108  Name;
A_PAD_ISTRUCT(A68_108 ,PAD_209)
struct A68t106  Uname;
A_PAD_ISTRUCT(A68_106 ,PAD_210)
struct A68t257 * Ids;
struct A68t258 * Rest;
};
typedef struct A68t258  A68_258 ;    /* STRUCT(MODE108,MODE106,REF MODE257,REF MODE258)  */
struct A68t260{
struct A68t106  L;
A_PAD_ISTRUCT(A68_106 ,PAD_211)
struct A68t106  G;
A_PAD_ISTRUCT(A68_106 ,PAD_212)
};
typedef struct A68t260  A68_260 ;    /* STRUCT(MODE106,MODE106)  */
struct A68t259{
struct A68t106  Uname;
A_PAD_ISTRUCT(A68_106 ,PAD_213)
struct A68t158  Xmi;
struct A68t260  Checkinfo;
};
typedef struct A68t259  A68_259 ;    /* STRUCT(MODE106,MODE158,MODE260)  */

A_PROCEDURE(A68_VOID ,A68t261,(struct A68t168 ),(struct A68t168 ,void *));
typedef struct A68t261  A68_261 ;    /* PROC(MODE168) VOID */

A_PROCEDURE(A68_VOID ,A68t262,(struct A68t163 ,A68_INT ),(struct A68t163 ,A68_INT ,void *));
typedef struct A68t262  A68_262 ;    /* PROC(MODE163,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t263,(struct A68t124 ),(struct A68t124 ,void *));
typedef struct A68t263  A68_263 ;    /* PROC(MODE124) VOID */
A_ROW(struct A68t256 *,A68t264,1);
typedef struct A68t264  A68_264 ;    /* [] REF MODE256 */

A_PROCEDURE(A68_VOID ,A68t265,(struct A68t158 ),(struct A68t158 ,void *));
typedef struct A68t265  A68_265 ;    /* PROC(MODE158) VOID */

A_PROCEDURE(A68_VOID ,A68t266,(struct A68t130 ),(struct A68t130 ,void *));
typedef struct A68t266  A68_266 ;    /* PROC(MODE130) VOID */
A_ROW(struct A68t129 ,A68t267,1);
typedef struct A68t267  A68_267 ;    /* [] MODE129 */

A_PROCEDURE(A68_BOOL ,A68t268,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t268  A68_268 ;    /* PROC(INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t269,(struct A68t232 ),(struct A68t232 ,void *));
typedef struct A68t269  A68_269 ;    /* PROC(MODE232) VOID */

A_PROCEDURE(struct A68t106 ,A68t270,(void),(void *));
typedef struct A68t270  A68_270 ;    /* PROC MODE106 */

A_PROCEDURE(A68_VOID ,A68t271,(struct A68t106 ),(struct A68t106 ,void *));
typedef struct A68t271  A68_271 ;    /* PROC(MODE106) VOID */

A_PROCEDURE(A68_VOID ,A68t272,(struct A68t232 ,A68_VC *),(struct A68t232 ,A68_VC *,void *));
typedef struct A68t272  A68_272 ;    /* PROC(MODE232) MODE26 */

A_PROCEDURE(A68_VOID ,A68t273,(struct A68t96 ),(struct A68t96 ,void *));
typedef struct A68t273  A68_273 ;    /* PROC(MODE96) VOID */

A_PROCEDURE(A68_VOID ,A68t274,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t274  A68_274 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,53,A68t275);
typedef struct A68t275  A68_275 ;    /* STRUCT 53 CHAR */
A_VECTOR(A68_VC ,A68t277);
typedef struct A68t277  A68_277 ;    /* VECTOR [] REF MODE26 */
struct A68t276{
A68_VC  Streambuffer;
A68_INT  Streamptr;
A_PAD_INT(PAD_214)
struct A68t277  Buffers;
A68_INT  Currentbuffer;
A_PAD_INT(PAD_215)
};
typedef struct A68t276  A68_276 ;    /* STRUCT(REF MODE26,INT,REF MODE277,INT)  */

A_PROCEDURE(A68_VOID ,A68t278,(A68_BOOL ,struct A68t277 *),(A68_BOOL ,struct A68t277 *,void *));
typedef struct A68t278  A68_278 ;    /* PROC(BOOL) MODE277 */
A_ISTRUCT(struct A68t276 ,20,A68t279);
typedef struct A68t279  A68_279 ;    /* STRUCT 20 MODE276 */
A_ROW(struct A68t276 ,A68t280,1);
typedef struct A68t280  A68_280 ;    /* [] MODE276 */
A_VECTOR(struct A68t276 ,A68t281);
typedef struct A68t281  A68_281 ;    /* VECTOR [] MODE276 */
A_ISTRUCT(A68_CHAR ,11,A68t282);
typedef struct A68t282  A68_282 ;    /* STRUCT 11 CHAR */
#define A68_283  A68_VC 
#define A68t283 A68t26            /* FLEX VECTOR [] CHAR */

A_PROCEDURE(A68_VOID ,A68t284,(A68_BOOL ,struct A68t182 *),(A68_BOOL ,struct A68t182 *,void *));
typedef struct A68t284  A68_284 ;    /* PROC(BOOL) MODE182 */
A_ISTRUCT(struct A68t183 ,128,A68t285);
typedef struct A68t285  A68_285 ;    /* STRUCT 128 MODE183 */
A_ISTRUCT(A68_CHAR ,31,A68t286);
typedef struct A68t286  A68_286 ;    /* STRUCT 31 CHAR */

A_PROCEDURE(A68_VOID ,A68t287,(A68_VC ),(A68_VC ,void *));
typedef struct A68t287  A68_287 ;    /* PROC(REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t288,(A68_INT ,struct A68t186 ),(A68_INT ,struct A68t186 ,void *));
typedef struct A68t288  A68_288 ;    /* PROC(INT,MODE186) VOID */
A_ISTRUCT(A68_INT ,3,A68t289);
typedef struct A68t289  A68_289 ;    /* STRUCT 3 INT */

A_PROCEDURE(A68_VOID ,A68t290,(A68_BOOL ,struct A68t280 *),(A68_BOOL ,struct A68t280 *,void *));
typedef struct A68t290  A68_290 ;    /* PROC(BOOL) MODE280 */
A_ISTRUCT(A68_INT ,2,A68t291);
typedef struct A68t291  A68_291 ;    /* STRUCT 2 INT */
A_ISTRUCT(A68_INT ,4,A68t292);
typedef struct A68t292  A68_292 ;    /* STRUCT 4 INT */

A_PROCEDURE(A68_VOID ,A68t293,(A68_BOOL ,struct A68t186 *),(A68_BOOL ,struct A68t186 *,void *));
typedef struct A68t293  A68_293 ;    /* PROC(BOOL) MODE186 */
A_ISTRUCT(A68_CHAR ,160,A68t294);
typedef struct A68t294  A68_294 ;    /* STRUCT 160 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t295);
typedef struct A68t295  A68_295 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t296);
typedef struct A68t296  A68_296 ;    /* STRUCT 24 CHAR */

A_PROCEDURE(A68_VOID ,A68t297,(A68_VC *),(A68_VC *,void *));
typedef struct A68t297  A68_297 ;    /* PROC REF MODE26 */
A_ISTRUCT(A68_CHAR ,5,A68t298);
typedef struct A68t298  A68_298 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t299);
typedef struct A68t299  A68_299 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t300);
typedef struct A68t300  A68_300 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t301);
typedef struct A68t301  A68_301 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(struct A68t213 ,4,A68t302);
typedef struct A68t302  A68_302 ;    /* STRUCT 4 MODE213 */
A_ISTRUCT(A68_CHAR ,21,A68t303);
typedef struct A68t303  A68_303 ;    /* STRUCT 21 CHAR */

A_PROCEDURE(A68_VOID ,A68t304,(A68_BOOL ,struct A68t207 *),(A68_BOOL ,struct A68t207 *,void *));
typedef struct A68t304  A68_304 ;    /* PROC(BOOL) MODE207 */
A_ISTRUCT(struct A68t213 ,2,A68t305);
typedef struct A68t305  A68_305 ;    /* STRUCT 2 MODE213 */
A_ISTRUCT(A68_CHAR ,25,A68t306);
typedef struct A68t306  A68_306 ;    /* STRUCT 25 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from uniquenameserver --- */
extern A68_269  SKMACTR_initialiseuniquenameserver;
extern A68_VOID  SMMACTR_closedownuniquenameserver(void);
extern A68_VOID  GKMACTR_write_cfile_uname(struct A68t106 );
/* --- End of imports from uniquenameserver --- */


/* --- Imports from moduletracer --- */
extern A68_INT  ZCHACTR_tracelevel(A68_VC );
/* --- End of imports from moduletracer --- */


/* --- Imports from modules --- */
extern A68_VOID  VCPACTR_adddecsmodule(struct A68t163 ,A68_INT );
extern A68_VOID  AEPACTR_addexternalid(struct A68t124 );
extern A68_BOOL  WMOACTR_composition;
extern A68_VOID  HRPACTR_declareusedids(void);
extern A68_VOID  ZZOACTR_givemoduledetails(struct A68t108 ,A68_INT ,A68_BOOL ,A68_159 *);
extern A68_VOID  ENOACTR_givespec(struct A68t108 ,struct A68t108 ,struct A68t127 ,A68_160 *);
extern A68_VOID  FBPACTR_initialisecurrentmodule(struct A68t158 );
extern A68_VOID  NCPACTR_initialisespec(struct A68t130 );
extern A68_186  UAPACTR_keptdecnos;
/* --- End of imports from modules --- */


/* --- Imports from modes --- */
extern A68_VOID  SCOACTR_initialisemodetable(struct A68t250 ,A68_INT );
/* --- End of imports from modes --- */


/* --- Imports from mnemonics --- */
extern A68_VOID  JAXACTR_imperativemnemonic(struct A68t187 ,A68_VC *);
/* --- End of imports from mnemonics --- */


/* --- Imports from lookup --- */
extern A68_INT  SOKACTR_lookup(A68_VC ,A68_BOOL );
extern A68_INT  HPKACTR_optboollookup(A68_VC ,A68_BOOL );
/* --- End of imports from lookup --- */


/* --- Imports from incoperfn --- */
#define LGAACTR_voidfn 19
#define PGAACTR_generatorfn 50
/* --- End of imports from incoperfn --- */


/* --- Imports from incmode --- */
#define UEAACTR_voidmode 5
/* --- End of imports from incmode --- */


/* --- Imports from incinstallation --- */
/* --- End of imports from incinstallation --- */


/* --- Imports from incimperatives --- */
#define ZAAACTR_emptyfn 1
#define BBAACTR_nilfn 3
#define ICAACTR_optboolfn 9
#define WBAACTR_semifn 11
#define ABAACTR_skipfn 2
/* --- End of imports from incimperatives --- */


/* --- Imports from incid --- */
#define HAAACTR_minidno 3
/* --- End of imports from incid --- */


/* --- Imports from environment --- */
extern A68_VOID  WXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_VOID  NTIACTR_abort(void);
extern A68_VC  YQIACTR_basenamesourcefile;
extern A68_BOOL  CQIACTR_dotoption;
extern A68_VOID  PXIACTR_error(A68_INT );
extern A68_VOID  EXIACTR_fault(A68_VC ,A68_INT );
extern A68_VOID  RSIACTR_finishmessage(void);
extern A68_INT  DSIACTR_greatestseverity;
extern A68_INT  XRIACTR_linenumber;
extern A68_VOID  KDHACTR_message(A68_INT ,A68_VC *);
extern A68_BOOL  BQIACTR_lineoption;
extern A68_BOOL  IQIACTR_optbooloption;
extern A68_BOOL  DQIACTR_quoteoption;
extern A68_VOID  JYIACTR_setparams(void);
extern A68_VC  XQIACTR_sourcefilename;
extern A68_BOOL  GQIACTR_streamoption;
extern A68_BOOL  HQIACTR_streamoutoption;
extern A68_VOID  SXIACTR_terminalerror(A68_INT );
extern A68_BOOL  FQIACTR_tildeoption;
extern A68_232  QRIACTR_uname_option;
extern A68_99  MSIACTR_list;
extern A68_VOID  ISIACTR_typelineonterminal(A68_VC );
extern A68_233  KRIACTR_stars;
extern A68_234  IYIACTR_config_info;
/* --- End of imports from environment --- */


/* --- Imports from environ --- */
#define ESLACTR_preamblestream 0
#define GSLACTR_importsstream 2
#define FSLACTR_modesstream 1
#define HSLACTR_externstream 3
extern A68_INT  KSLACTR_nonlocdecstream(A68_INT );
extern A68_INT  NSLACTR_codestream(A68_INT );
extern A68_INT  VRLACTR_currentlevel(void);
extern A68_INT  PPLACTR_highestlevel;
/* --- End of imports from environ --- */


/* --- Imports from denotations --- */
extern A68_VOID  GNJACTR_convertradixstring(A68_VC ,A68_INT ,A68_VC *);
extern A68_VOID  DRJACTR_replacecontrolchars(A68_VC ,A68_VC *);
/* --- End of imports from denotations --- */


/* --- Imports from coutput --- */
extern A68_VOID  NULACTR_initcoutput(A68_VC );
extern A68_VOID  SDMACTR_closecoutput(void);
extern A68_VOID  MDMACTR_writecstream(struct A68t212 ,A68_INT );
extern A68_96  GULACTR_purgeoutputfiles;
/* --- End of imports from coutput --- */


/* --- Imports from compiler --- */
extern A68_VOID  VYABCTR_translator(struct A68t185 ,struct A68t157 *,struct A68t186 );
/* --- End of imports from compiler --- */


/* --- Imports from rscompiler --- */
extern A68_BOOL  URAACTR_compile(struct A68t175 ,struct A68t176 ,struct A68t177 ,struct A68t178 ,struct A68t179 ,struct A68t180 ,struct A68t181 ,struct A68t182 );
/* --- End of imports from rscompiler --- */


/* --- Imports from centities --- */
extern A68_SINT  EIAACTR_cnewline;
/* --- End of imports from centities --- */


/* --- Imports from osif --- */
#include <errno.h>

#define XFBAOSI_errno errno
extern A68_54  XLBAOSI_ignore_msg;
#define VPBAOSI_newline_char '\012'
extern A68_BOOL  PPBAOSI_(struct A68t60 ,struct A68t60 );
extern A68_60  GPBAOSI_io_eof;
extern A68_60  JPBAOSI_io_error;
extern A68_60  MPBAOSI_io_no_newline;
extern A68_59 * FQBAOSI_open_file(A68_VC ,struct A68t62 ,struct A68t54 );
extern A68_VOID  XQBAOSI_close_file(struct A68t59 *,struct A68t54 );
extern A68_VOID  SRBAOSI_read_line(struct A68t59 *,A68_VC ,A68_INT *,struct A68t54 ,A68_60 *);
extern A68_62  PNBAOSI_read_access;
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


/* --- Imports from usefulops --- */
extern A68_INT  DRAAOSI_max(A68_INT ,A68_INT );
extern A68_INT  UTAAOSI_stringvalue(A68_VC );
extern A68_INT  YRAAOSI_truncate(A68_CHAR ,A68_VC );
extern A68_VOID  FUAAOSI_whole(A68_INT ,A68_INT ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void RHMACTR(void);   /* uniquenameserver */
extern void BCHACTR(void);   /* moduletracer */
extern void MLOACTR(void);   /* modules */
extern void DNMACTR(void);   /* modes */
extern void HWWACTR(void);   /* mnemonics */
extern void TTJACTR(void);   /* lookup */
extern void XFAACTR(void);   /* incoperfn */
extern void ZDAACTR(void);   /* incmode */
extern void ODAACTR(void);   /* incinstallation */
extern void UAAACTR(void);   /* incimperatives */
extern void BAAACTR(void);   /* incid */
extern void HPIACTR(void);   /* environment */
extern void BPLACTR(void);   /* environ */
extern void LLJACTR(void);   /* denotations */
extern void PTLACTR(void);   /* coutput */
extern void NYABCTR(void);   /* compiler */
extern void ZJAACTR(void);   /* rscompiler */
extern void THAACTR(void);   /* centities */
extern void VSCAOSI(void);   /* osif */
extern void WPAAOSI(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_275   QTBBCTR = {"$Id: a68toc.a68,v 34.4 1995/03/29 13:01:47 ella Exp $"}; 
A_GISVEC(A68_VC ,RTBBCTR,QTBBCTR,53)
static A68_157  TTBBCTR_xsizes;
static A68_276  BUBBCTR_unsetstream;
static A68_279  CUBBCTR_streams_area;
static A68_280  DUBBCTR_streams;
static A68_276  HUBBCTR_current;
#define IUBBCTR_fixedstreams 1
static A68_276 * JUBBCTR_stream;
static A68_276 * AVBBCTR_stream;
static A68_VC * EVBBCTR_streambuffer;
static A68_INT * FVBBCTR_strptr;
static A68_INT * GVBBCTR_currentbuffer;
static A68_277 * HVBBCTR_buffers;
static A68_276 * IVBBCTR_curstradd;
#define IWBBCTR_separatorbase 16
#define JWBBCTR_terminatorbase 32
#define KWBBCTR_semibase 48
#define LWBBCTR_loadbase 64
#define MWBBCTR_idbase 80
#define NWBBCTR_numberbase 90
#define OWBBCTR_operbase 128
#define PWBBCTR_miscellaneousbase 192
#define QWBBCTR_warnbase 208
#define RWBBCTR_iddecbase 224
#define SWBBCTR_starterbase 240
#define TWBBCTR_rangesize 64
#define UWBBCTR_subrangesize 16
#define VWBBCTR_linetype 10
#define WWBBCTR_maptype 11
#define XWBBCTR_notlastxcharstype 112
#define YWBBCTR_lastxcharstype 113
#define ZWBBCTR_xcallmoduletype 200
#define AXBBCTR_xclosuretype 203
#define BXBBCTR_xtmoduletype 204
static A68_59 * CXBBCTR_inputfile;
static A68_INT  DXBBCTR_line_start;
static A68_INT  EXBBCTR_line_length;
static A68_BOOL  FXBBCTR_line_pending;
static A68_283  KXBBCTR_flexinputline;
static A68_182  GYBBCTR_charset;
static A68_183 * PYBBCTR_c;
static A68_INT  DZBBCTR_i;
static A68_286   KZBBCTR = {"\0\361\362\363\364\021\022\023\024\025\026\027\030\031!\"#$\365\032\366\035%\367&\033\0'\301\034("}; 
A_GISVEC(A68_VC ,LZBBCTR,KZBBCTR,31)
static A68_VC  MZBBCTR_contval;
static A68_BOOL  NZBBCTR_upped;
static A68_163  OZBBCTR_lastxtmodule;
static A68_BOOL  PZBBCTR_xtmodulepending;
static A68_BOOL  QZBBCTR_timeschecked;
static A68_INT  RZBBCTR_syntheticmoduleno;
static A68_294  BHCBCTR_wasteline;
static A68_INT  CHCBCTR_wastesize;
static A68_BOOL  FHCBCTR_printstream;
static A68_INT  GHCBCTR_level;
static A68_INT  HHCBCTR_s;
static A68_276 * IHCBCTR_stream;
static A68_INT * NHCBCTR_streamptr;
static A68_INT * OHCBCTR_currentbuffer;
static A68_VC * PHCBCTR_streambuffer;
static A68_277 * QHCBCTR_buffers;
static A68_INT  UHCBCTR_bytesused;
static A68_VC * VHCBCTR_b;
static A68_295   XHCBCTR = {" bytes used in stream "}; 
A_GISVEC(A68_VC ,ZHCBCTR,XHCBCTR,22)
static A68_INT  CICBCTR_upbstring;
static A68_VC  DICBCTR_string;
static A68_296   FICBCTR = {"SHELL: incomplete stream"}; 
A_GISVEC(A68_VC ,GICBCTR,FICBCTR,24)
static A68_87  QICBCTR_next;
static A68_INT  WICBCTR_line_start;
static A68_INT  XICBCTR_line_length;
static A68_INT  YICBCTR_statement_number;
static A68_INT  ZICBCTR_hundred_counter;
static A68_298   GJCBCTR = {"shell"}; 
A_GISVEC(A68_VC ,HJCBCTR,GJCBCTR,5)
static A68_299   JJCBCTR = {"At line "}; 
static A68_300   KJCBCTR = {"..."}; 
A_GISVEC(A68_VC ,LJCBCTR,JJCBCTR,8)
A_GISVEC(A68_VC ,NJCBCTR,KJCBCTR,3)
static A68_301   RJCBCTR = {" /* line "}; 
A_GISVEC(A68_VC ,SJCBCTR,RJCBCTR,9)
static A68_40   XJCBCTR = {": */"}; 
A_GISVEC(A68_VC ,YJCBCTR,XJCBCTR,4)
static A68_296   HKCBCTR = {"invalid stream directive"}; 
A_GISVEC(A68_VC ,IKCBCTR,HKCBCTR,24)
static A68_303   BMCBCTR = {"SHELL: no last xchars"}; 
A_GISVEC(A68_VC ,CMCBCTR,BMCBCTR,21)
static A68_298   HMCBCTR = {"]    "}; 
A_GISVEC(A68_VC ,KMCBCTR,HMCBCTR,5)
static A68_108   WQCBCTR = {"chars should be absorbed by load"}; 
A_GISVEC(A68_VC ,XQCBCTR,WQCBCTR,32)
static A68_303   YTCBCTR = {"#include \"Asupport.h\""}; 
A_GISVEC(A68_VC ,ZTCBCTR,YTCBCTR,21)
static A68_306   FUCBCTR = {"/* end of translation of "}; 
A_GISVEC(A68_VC ,GUCBCTR,FUCBCTR,25)
static A68_300   KUCBCTR = {" */"}; 
A_GISVEC(A68_VC ,LUCBCTR,KUCBCTR,3)
static A68_INT  CVCBCTR_level;
typedef struct   /* env of non-global proc */
{
A68_INT  NVBBCTR_upbbuffers;
A_PAD_INT(PAD_216)
} RVBBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  MVBBCTR_size;
A_PAD_INT(PAD_217)
} BWBBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  Ll;
A_PAD_INT(PAD_218)
} EACBCTR_outprep;
typedef struct   /* env of non-global proc */
{
A68_223  CACBCTR_outprep;
} VACBCTR_putints;
typedef struct   /* env of non-global proc */
{
A68_223  CACBCTR_outprep;
} LBCBCTR_putint;
typedef struct   /* env of non-global proc */
{
A68_223  CACBCTR_outprep;
} XBCBCTR_putchars;
typedef struct   /* env of non-global proc */
{
A68_223  CACBCTR_outprep;
} ECCBCTR_puttruncatedchars;
typedef struct   /* env of non-global proc */
{
A68_INT  PCCBCTR_upbstreams;
A_PAD_INT(PAD_219)
} TCCBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_170  GGCBCTR_xbu;
} KGCBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * PKCBCTR_resultsize;
} TKCBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  LLCBCTR_newresultsize;
A_PAD_INT(PAD_220)
} PLCBCTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} TRCBCTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} HSCBCTR_generator;

A_STATIC A68_VOID  XTBBCTR_generator(A68_BOOL  WTBBCTR_anonymous, A68_277  *ReturnedValue);

A_STATIC A68_VOID  OUBBCTR_generator(A68_BOOL  NUBBCTR_anonymous, A68_277  *ReturnedValue);

A_STATIC A68_VOID  KVBBCTR_extendcurrent(void);

A_STATIC A68_VOID  QVBBCTR_generator(A68_BOOL  OVBBCTR_anonymous, A68_277  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  AWBBCTR_generator(A68_BOOL  YVBBCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HXBBCTR_generator(A68_BOOL  GXBBCTR_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_BOOL  OXBBCTR_input(A68_VC  Line, A68_INT * Size);

A_STATIC A68_VOID  DYBBCTR_generator(A68_BOOL  CYBBCTR_anonymous, A68_182  *ReturnedValue);

A_STATIC A68_VOID  UZBBCTR_output(A68_172  Op, A68_INT  Ll);

A_STATIC A68_VOID  XZBBCTR_invert(A68_VC  String);

A_STATIC A68_VOID  DACBCTR_outprep(A68_INT  Size, A68_INT  Type, void *NonLocals);

A_STATIC A68_VOID  UACBCTR_putints(A68_INT  K, A68_186  A, void *NonLocals);

A_STATIC A68_VOID  KBCBCTR_putint(A68_INT  Type, A68_INT  I, void *NonLocals);

A_STATIC A68_VOID  WBCBCTR_putchars(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  DCCBCTR_puttruncatedchars(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  SCCBCTR_generator(A68_BOOL  QCCBCTR_anonymous, A68_280  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JGCBCTR_generator(A68_BOOL  HGCBCTR_anonymous, A68_186  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  EICBCTR_positioncurrent(void);

A_STATIC A68_INT  HICBCTR_nextbyte(void);

A_STATIC A68_INT  KICBCTR_nextint(void);

A_STATIC A68_VOID  SICBCTR_nextstring(A68_VC  *ReturnedValue);

A_STATIC A68_INT  AJCBCTR_nexttype(void);

A_STATIC A68_VOID  MKCBCTR_nextxchars(A68_INT  Suggestedsize, A68_INT  Insertion, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  SKCBCTR_generator(A68_BOOL  QKCBCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OLCBCTR_generator(A68_BOOL  MLCBCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FMCBCTR_nextstreamimperative(A68_187  *ReturnedValue);

A_STATIC A68_VOID  SRCBCTR_generator(A68_BOOL  QRCBCTR_anonymous, A68_186  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GSCBCTR_generator(A68_BOOL  ESCBCTR_anonymous, A68_207  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QVBBCTR_generator(A68_BOOL  OVBBCTR_anonymous, A68_277  *ReturnedValue, void *NonLocals)
#define NL(x) (((RVBBCTR_generator *)NonLocals)->x)
{ 
A68_277  SVBBCTR;  /* clause result */
A68_277  TVBBCTR;  /* OPERATORS - dynamic generator */
{ 
TVBBCTR.upb = (NL(NVBBCTR_upbbuffers)+1) ;
( OVBBCTR_anonymous? A_VLOC(A68_VC ,TVBBCTR): A_VHEAP(A68_VC ,TVBBCTR) );
SVBBCTR = TVBBCTR;
} 
*ReturnedValue = (SVBBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  AWBBCTR_generator(A68_BOOL  YVBBCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((BWBBCTR_generator *)NonLocals)->x)
{ 
A68_VC  CWBBCTR;  /* clause result */
A68_VC  DWBBCTR;  /* OPERATORS - dynamic generator */
{ 
DWBBCTR.upb = NL(MVBBCTR_size) ;
( YVBBCTR_anonymous? A_VLOC(A68_CHAR ,DWBBCTR): A_VHEAP(A68_CHAR ,DWBBCTR) );
CWBBCTR = DWBBCTR;
} 
*ReturnedValue = (CWBBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  XZBBCTR_invert(A68_VC  String)
{ 
A68_CHAR * YZBBCTR_c;
A68_INT  ZZBBCTR;  /* forall loop counter */
A_PROC_ENTRY(invert);
 /* line 269: */
 /* line 270: */
ZZBBCTR = String.upb -1;
YZBBCTR_c = String.data;
for (;ZZBBCTR-- >= 0;
(YZBBCTR_c++
) )
{
 /* line 271: */
 /* line 272: */
if ( (((*YZBBCTR_c)>='a')&((*YZBBCTR_c)<='z')) )
{ 
 /* line 273: */
(*YZBBCTR_c) = (A68_CHAR)(((A68_INT)(unsigned char)(*YZBBCTR_c)-(A68_INT)(unsigned char)'a')+(A68_INT)(unsigned char)'A');
} 
else
{ 
 /* line 274: */
if ( (((*YZBBCTR_c)>='A')&((*YZBBCTR_c)<='Z')) )
{ 
 /* line 275: */
 /* line 276: */
(*YZBBCTR_c) = (A68_CHAR)(((A68_INT)(unsigned char)(*YZBBCTR_c)-(A68_INT)(unsigned char)'A')+(A68_INT)(unsigned char)'a');
} 
} 
}
A_PROC_EXIT(invert);
return;
} 
#undef NL

A_STATIC A68_VOID  DACBCTR_outprep(A68_INT  Size, A68_INT  Type, void *NonLocals)
#define NL(x) (((EACBCTR_outprep *)NonLocals)->x)
{ 
A68_VC  FACBCTR;  /* OPERATORS - nil -> mode */
A68_VC  GACBCTR;  /* == */
A68_VC  HACBCTR;  /* OPERATORS - trim index */
A68_VC  IACBCTR;  /* OPERATORS - trim index */
A68_VC * JACBCTR;  /* YIELD */
A68_VC  KACBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  LACBCTR;  /* avoid structure result */
A68_VC  MACBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  NACBCTR;  /* avoid structure result */
A68_VC  OACBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  PACBCTR;  /* YIELD */
A68_CHAR * QACBCTR;  /* YIELD */
A_PROC_ENTRY(outprep);
 /* line 287: */
 /* line 288: */
{ 
 /* line 289: */
 /* line 291: */
GACBCTR = A_VVAC(FACBCTR) ;
if ( A_VSTRUCTCOMP((*EVBBCTR_streambuffer),GACBCTR) )
{ 
KVBBCTR_extendcurrent();
} 
else
{ 
 /* line 292: */
 /* line 293: */
if ( ((Size+(*FVBBCTR_strptr))>(*EVBBCTR_streambuffer).upb) )
{ 
 /* line 294: */
HACBCTR = (*(&A_VINDEX((*HVBBCTR_buffers),(*GVBBCTR_currentbuffer)))) ;
JACBCTR = (&A_VINDEX((*HVBBCTR_buffers),(*GVBBCTR_currentbuffer))) ;
(*JACBCTR) = A_VTRIM(IACBCTR,(HACBCTR),A_VTSCRIPT(&(IACBCTR.upb),(HACBCTR).upb,1,(*FVBBCTR_strptr)));
 /* line 295: */
 /* line 296: */
KVBBCTR_extendcurrent();
} 
} 
 /* line 298: */
 /* line 299: */
 /* line 300: */
if ( HQIACTR_streamoutoption )
{ 
 /* line 301: */
FUAAOSI_whole( Type, 0, &LACBCTR );
FUAAOSI_whole( NL(Ll), 0, &NACBCTR );
A_CALLPROC(MSIACTR_list,(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_HVEC(KACBCTR,'%',A68_CHAR ),LACBCTR),A_HVEC(MACBCTR,'(',A68_CHAR )),NACBCTR),A_HVEC(OACBCTR,')',A68_CHAR ))),(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_HVEC(KACBCTR,'%',A68_CHAR ),LACBCTR),A_HVEC(MACBCTR,'(',A68_CHAR )),NACBCTR),A_HVEC(OACBCTR,')',A68_CHAR )),(MSIACTR_list).nonlocals));
} 
 /* line 303: */
 /* line 304: */
PACBCTR = (*FVBBCTR_strptr)+=1 ;
QACBCTR = (&A_VINDEX((*EVBBCTR_streambuffer),PACBCTR)) ;
(*QACBCTR) = (A68_CHAR)Type;
} 
A_PROC_EXIT(outprep);
return;
} 
#undef NL

A_STATIC A68_VOID  UACBCTR_putints(A68_INT  K, A68_186  A, void *NonLocals)
#define NL(x) (((VACBCTR_putints *)NonLocals)->x)
{ 
A68_INT  WACBCTR_v;
A68_INT * XACBCTR;  /* forall control - []x */
A68_INT  YACBCTR;  /* forall loop counter */
A68_VC  ZACBCTR;  /* OPERATORS - trim index */
A68_VC  ABCBCTR;  /* OPERATORS - trim index */
A68_VC  BBCBCTR;  /* OPERATORS - trim index */
union {  /* BIOP 99 */
A68_INT   source;
A68_40   destination;
} CBCBCTR; 
A68_VC  DBCBCTR;  /* OPERATORS - istruct -> vector */
A68_40  EBCBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  FBCBCTR;  /* YIELD */
A68_VC  GBCBCTR;  /* OPERATORS - assign op */
A_PROC_ENTRY(putints);
 /* line 320: */
 /* line 321: */
{ 
A_CALLPROC(NL(CACBCTR_outprep),(((4*A.dim[0].upb)+1), K),(((4*A.dim[0].upb)+1), K,(NL(CACBCTR_outprep)).nonlocals));
 /* line 322: */
 /* line 323: */
YACBCTR = A.dim[0].upb - A.dim[0].lwb;
XACBCTR = A.data;
for (;YACBCTR-- >= 0;
(XACBCTR += A.dim[0].stride
) )
{
WACBCTR_v = *XACBCTR;
ABCBCTR = A_VTRIM(ZACBCTR,((*EVBBCTR_streambuffer)),A_VTSCRIPT(&(ZACBCTR.upb),((*EVBBCTR_streambuffer)).upb,((*FVBBCTR_strptr)+1),((*EVBBCTR_streambuffer)).upb)) ;
CBCBCTR.source = WACBCTR_v ;
EBCBCTR = (CBCBCTR.destination) ;
FBCBCTR = A_VTRIM(BBCBCTR,(ABCBCTR),A_VTSCRIPT(&(BBCBCTR.upb),(ABCBCTR).upb,1,4)) ;
GBCBCTR = A_HISVEC(DBCBCTR,EBCBCTR,4,A68_CHAR ) ;
A_VASSIGN2(GBCBCTR,FBCBCTR,A68_CHAR );
 /* line 324: */
 /* line 325: */
(*FVBBCTR_strptr)+=4;
}
 /* line 326: */
} 
A_PROC_EXIT(putints);
return;
} 
#undef NL

A_STATIC A68_VOID  KBCBCTR_putint(A68_INT  Type, A68_INT  I, void *NonLocals)
#define NL(x) (((LBCBCTR_putint *)NonLocals)->x)
{ 
A68_VC  MBCBCTR;  /* OPERATORS - trim index */
A68_VC  NBCBCTR;  /* OPERATORS - trim index */
A68_VC  OBCBCTR;  /* OPERATORS - trim index */
union {  /* BIOP 99 */
A68_INT   source;
A68_40   destination;
} PBCBCTR; 
A68_VC  QBCBCTR;  /* OPERATORS - istruct -> vector */
A68_40  RBCBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  SBCBCTR;  /* YIELD */
A68_VC  TBCBCTR;  /* OPERATORS - assign op */
A_PROC_ENTRY(putint);
 /* line 329: */
 /* line 330: */
{ 
A_CALLPROC(NL(CACBCTR_outprep),(5, Type),(5, Type,(NL(CACBCTR_outprep)).nonlocals));
 /* line 331: */
NBCBCTR = A_VTRIM(MBCBCTR,((*EVBBCTR_streambuffer)),A_VTSCRIPT(&(MBCBCTR.upb),((*EVBBCTR_streambuffer)).upb,((*FVBBCTR_strptr)+1),((*EVBBCTR_streambuffer)).upb)) ;
PBCBCTR.source = I ;
RBCBCTR = (PBCBCTR.destination) ;
SBCBCTR = A_VTRIM(OBCBCTR,(NBCBCTR),A_VTSCRIPT(&(OBCBCTR.upb),(NBCBCTR).upb,1,4)) ;
TBCBCTR = A_HISVEC(QBCBCTR,RBCBCTR,4,A68_CHAR ) ;
A_VASSIGN2(TBCBCTR,SBCBCTR,A68_CHAR );
 /* line 332: */
 /* line 333: */
(*FVBBCTR_strptr)+=4;
} 
A_PROC_EXIT(putint);
return;
} 
#undef NL

A_STATIC A68_VOID  WBCBCTR_putchars(A68_VC  S, void *NonLocals)
#define NL(x) (((XBCBCTR_putchars *)NonLocals)->x)
{ 
A68_INT  YBCBCTR_up;
A68_VC  ZBCBCTR;  /* OPERATORS - trim index */
A68_VC  ACCBCTR;  /* YIELD */
A_PROC_ENTRY(putchars);
 /* line 336: */
{ 
YBCBCTR_up = S.upb;
 /* line 337: */
A_CALLPROC(NL(CACBCTR_outprep),((YBCBCTR_up+1), YBCBCTR_up),((YBCBCTR_up+1), YBCBCTR_up,(NL(CACBCTR_outprep)).nonlocals));
 /* line 338: */
ACCBCTR = A_VTRIM(ZBCBCTR,((*EVBBCTR_streambuffer)),A_VTSCRIPT(&(ZBCBCTR.upb),((*EVBBCTR_streambuffer)).upb,((*FVBBCTR_strptr)+1),((*FVBBCTR_strptr)+YBCBCTR_up))) ;
A_VASSIGN2(S,ACCBCTR,A68_CHAR );
 /* line 339: */
 /* line 340: */
(*FVBBCTR_strptr)+=YBCBCTR_up;
} 
A_PROC_EXIT(putchars);
return;
} 
#undef NL

A_STATIC A68_VOID  DCCBCTR_puttruncatedchars(A68_VC  S, void *NonLocals)
#define NL(x) (((ECCBCTR_puttruncatedchars *)NonLocals)->x)
{ 
A68_INT  FCCBCTR_up;
A68_VC  GCCBCTR;  /* OPERATORS - trim index */
A68_VC  HCCBCTR;  /* OPERATORS - trim index */
A68_VC  ICCBCTR;  /* YIELD */
A68_VC  JCCBCTR;  /* OPERATORS - assign op */
A_PROC_ENTRY(puttruncatedchars);
 /* line 343: */
{ 
FCCBCTR_up = YRAAOSI_truncate(' ', S);
 /* line 344: */
A_CALLPROC(NL(CACBCTR_outprep),((FCCBCTR_up+1), FCCBCTR_up),((FCCBCTR_up+1), FCCBCTR_up,(NL(CACBCTR_outprep)).nonlocals));
 /* line 345: */
ICCBCTR = A_VTRIM(GCCBCTR,((*EVBBCTR_streambuffer)),A_VTSCRIPT(&(GCCBCTR.upb),((*EVBBCTR_streambuffer)).upb,((*FVBBCTR_strptr)+1),((*FVBBCTR_strptr)+FCCBCTR_up))) ;
JCCBCTR = A_VTRIM(HCCBCTR,(S),A_VTSCRIPT(&(HCCBCTR.upb),(S).upb,1,FCCBCTR_up)) ;
A_VASSIGN2(JCCBCTR,ICCBCTR,A68_CHAR );
 /* line 346: */
 /* line 347: */
(*FVBBCTR_strptr)+=FCCBCTR_up;
} 
A_PROC_EXIT(puttruncatedchars);
return;
} 
#undef NL

A_STATIC A68_VOID  SCCBCTR_generator(A68_BOOL  QCCBCTR_anonymous, A68_280  *ReturnedValue, void *NonLocals)
#define NL(x) (((TCCBCTR_generator *)NonLocals)->x)
{ 
A68_280  UCCBCTR;  /* clause result */
A68_280  VCCBCTR;  /* OPERATORS - dynamic generator */
{ 
VCCBCTR.dim[0].upb = (NL(PCCBCTR_upbstreams)+NL(PCCBCTR_upbstreams)) ;
VCCBCTR.dim[0].lwb = 0 ;
A_1INITSTRIDES(VCCBCTR) ;
( QCCBCTR_anonymous? A_R1LOC(A68_276 ,VCCBCTR): A_R1HEAP(A68_276 ,VCCBCTR) );
UCCBCTR = VCCBCTR;
} 
*ReturnedValue = (UCCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  JGCBCTR_generator(A68_BOOL  HGCBCTR_anonymous, A68_186  *ReturnedValue, void *NonLocals)
#define NL(x) (((KGCBCTR_generator *)NonLocals)->x)
{ 
A68_186  LGCBCTR;  /* clause result */
A68_186  MGCBCTR;  /* OPERATORS - dynamic generator */
{ 
MGCBCTR.dim[0].upb = NL(GGCBCTR_xbu).Decnos.upb ;
MGCBCTR.dim[0].lwb = 1 ;
A_1INITSTRIDES(MGCBCTR) ;
( HGCBCTR_anonymous? A_R1LOC(A68_INT ,MGCBCTR): A_R1HEAP(A68_INT ,MGCBCTR) );
LGCBCTR = MGCBCTR;
} 
*ReturnedValue = (LGCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  SKCBCTR_generator(A68_BOOL  QKCBCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((TKCBCTR_generator *)NonLocals)->x)
{ 
A68_VC  UKCBCTR;  /* clause result */
A68_VC  VKCBCTR;  /* OPERATORS - dynamic generator */
{ 
VKCBCTR.upb = (*NL(PKCBCTR_resultsize)) ;
( QKCBCTR_anonymous? A_VLOC(A68_CHAR ,VKCBCTR): A_VHEAP(A68_CHAR ,VKCBCTR) );
UKCBCTR = VKCBCTR;
} 
*ReturnedValue = (UKCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  OLCBCTR_generator(A68_BOOL  MLCBCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((PLCBCTR_generator *)NonLocals)->x)
{ 
A68_VC  QLCBCTR;  /* clause result */
A68_VC  RLCBCTR;  /* OPERATORS - dynamic generator */
{ 
RLCBCTR.upb = NL(LLCBCTR_newresultsize) ;
( MLCBCTR_anonymous? A_VLOC(A68_CHAR ,RLCBCTR): A_VHEAP(A68_CHAR ,RLCBCTR) );
QLCBCTR = RLCBCTR;
} 
*ReturnedValue = (QLCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  SRCBCTR_generator(A68_BOOL  QRCBCTR_anonymous, A68_186  *ReturnedValue, void *NonLocals)
#define NL(x) (((TRCBCTR_generator *)NonLocals)->x)
{ 
A68_186  URCBCTR;  /* clause result */
A68_186  VRCBCTR;  /* OPERATORS - dynamic generator */
{ 
VRCBCTR.dim[0].upb = A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals)) ;
VRCBCTR.dim[0].lwb = 1 ;
A_1INITSTRIDES(VRCBCTR) ;
( QRCBCTR_anonymous? A_R1LOC(A68_INT ,VRCBCTR): A_R1HEAP(A68_INT ,VRCBCTR) );
URCBCTR = VRCBCTR;
} 
*ReturnedValue = (URCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  GSCBCTR_generator(A68_BOOL  ESCBCTR_anonymous, A68_207  *ReturnedValue, void *NonLocals)
#define NL(x) (((HSCBCTR_generator *)NonLocals)->x)
{ 
A68_207  ISCBCTR;  /* clause result */
A68_207  JSCBCTR;  /* OPERATORS - dynamic generator */
{ 
JSCBCTR.dim[0].upb = A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals)) ;
JSCBCTR.dim[0].lwb = 1 ;
A_1INITSTRIDES(JSCBCTR) ;
( ESCBCTR_anonymous? A_R1LOC(A68_VC ,JSCBCTR): A_R1HEAP(A68_VC ,JSCBCTR) );
ISCBCTR = JSCBCTR;
} 
*ReturnedValue = (ISCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  XTBBCTR_generator(A68_BOOL  WTBBCTR_anonymous, A68_277  *ReturnedValue)
{ 
A68_277  YTBBCTR;  /* clause result */
A68_277  ZTBBCTR;  /* OPERATORS - dynamic generator */
{ 
ZTBBCTR.upb = 0 ;
( WTBBCTR_anonymous? A_VLOC(A68_VC ,ZTBBCTR): A_VHEAP(A68_VC ,ZTBBCTR) );
YTBBCTR = ZTBBCTR;
} 
*ReturnedValue = (YTBBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  OUBBCTR_generator(A68_BOOL  NUBBCTR_anonymous, A68_277  *ReturnedValue)
{ 
A68_277  PUBBCTR;  /* clause result */
A68_277  QUBBCTR;  /* OPERATORS - dynamic generator */
{ 
QUBBCTR.upb = 1 ;
( NUBBCTR_anonymous? A_VLOC(A68_VC ,QUBBCTR): A_VHEAP(A68_VC ,QUBBCTR) );
PUBBCTR = QUBBCTR;
} 
*ReturnedValue = (PUBBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  KVBBCTR_extendcurrent(void)
{ 
A68_INT  LVBBCTR;  /* clause result */
A68_INT  MVBBCTR_size;
A68_INT  NVBBCTR_upbbuffers;
A68_278  PVBBCTR_generator;   /* proc value of non-global proc */
A68_277  UVBBCTR;  /* avoid structure result */
A68_277  VVBBCTR_new;
A68_277  WVBBCTR;  /* OPERATORS - trim index */
A68_277  XVBBCTR;  /* YIELD */
A68_104  ZVBBCTR_generator;   /* proc value of non-global proc */
A68_INT  EWBBCTR;  /* YIELD */
A68_VC  FWBBCTR;  /* avoid structure result */
A68_VC * GWBBCTR;  /* YIELD */
A68_277  HWBBCTR;  /* clause result */
A_PROC_ENTRY(extendcurrent);
{ 
if ( ((*GVBBCTR_currentbuffer)==0) )
{ 
LVBBCTR = 1000;
} 
else
{ 
LVBBCTR = 10000;
} 
MVBBCTR_size = LVBBCTR;
 /* line 100: */
 /* line 101: */
{ 
NVBBCTR_upbbuffers = (*HVBBCTR_buffers).upb;
 /* line 102: */
A_CLOSURE( PVBBCTR_generator, QVBBCTR_generator, RVBBCTR_generator );
(( RVBBCTR_generator * ) ( PVBBCTR_generator.nonlocals )) -> NVBBCTR_upbbuffers = NVBBCTR_upbbuffers;
A_CALLPROC(PVBBCTR_generator,(A68_FALSE, &UVBBCTR),(A68_FALSE, &UVBBCTR,(PVBBCTR_generator).nonlocals));
VVBBCTR_new = UVBBCTR;
 /* line 103: */
XVBBCTR = A_VTRIM(WVBBCTR,(VVBBCTR_new),A_VTSCRIPT(&(WVBBCTR.upb),(VVBBCTR_new).upb,1,NVBBCTR_upbbuffers)) ;
A_VASSIGN2((*HVBBCTR_buffers),XVBBCTR,A68_VC );
 /* line 104: */
 /* line 105: */
 /* line 106: */
A_CLOSURE( ZVBBCTR_generator, AWBBCTR_generator, BWBBCTR_generator );
(( BWBBCTR_generator * ) ( ZVBBCTR_generator.nonlocals )) -> MVBBCTR_size = MVBBCTR_size;
EWBBCTR = (*GVBBCTR_currentbuffer) = (NVBBCTR_upbbuffers+1) ;
A_CALLPROC(ZVBBCTR_generator,(A68_FALSE, &FWBBCTR),(A68_FALSE, &FWBBCTR,(ZVBBCTR_generator).nonlocals));
GWBBCTR = (&A_VINDEX(VVBBCTR_new,EWBBCTR)) ;
(*EVBBCTR_streambuffer) = (*GWBBCTR) = FWBBCTR;
 /* line 107: */
(*FVBBCTR_strptr) = 0;
 /* line 108: */
 /* line 109: */
 /* line 110: */
HWBBCTR = VVBBCTR_new;
} 
(*HVBBCTR_buffers) = HWBBCTR;
} 
A_PROC_EXIT(extendcurrent);
return;
} 
#undef NL

A_STATIC A68_VOID  HXBBCTR_generator(A68_BOOL  GXBBCTR_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  IXBBCTR;  /* clause result */
A68_VC  JXBBCTR;  /* OPERATORS - dynamic generator */
{ 
JXBBCTR.upb = 0 ;
( GXBBCTR_anonymous? A_VLOC(A68_CHAR ,JXBBCTR): A_VHEAP(A68_CHAR ,JXBBCTR) );
IXBBCTR = JXBBCTR;
} 
*ReturnedValue = (IXBBCTR);
return;
} 
#undef NL

A_STATIC A68_BOOL  OXBBCTR_input(A68_VC  Line, A68_INT * Size)
{ 
A68_60  PXBBCTR;  /* avoid structure result */
A68_60  QXBBCTR_read_status;
A68_BOOL  RXBBCTR;  /* optbool result */
A68_BOOL  SXBBCTR;  /* clause result */
A68_BOOL  TXBBCTR;  /* clause result */
A68_INT  UXBBCTR;  /* YIELD */
A68_CHAR * VXBBCTR_first;
A68_BOOL  WXBBCTR;  /* optbool result */
A68_BOOL  XXBBCTR;  /* clause result */
A68_INT  YXBBCTR;  /* YIELD */
A68_CHAR * ZXBBCTR_second;
A68_BOOL  AYBBCTR;  /* clause result */
A68_INT  BYBBCTR;  /* YIELD */
A_PROC_ENTRY(input);
 /* line 158: */
 /* line 159: */
{ 
SRBAOSI_read_line( CXBBCTR_inputfile, Line, Size, XLBAOSI_ignore_msg, &PXBBCTR );
QXBBCTR_read_status = PXBBCTR;
 /* line 160: */
RXBBCTR = PPBAOSI_(QXBBCTR_read_status, JPBAOSI_io_error);
if ( ! RXBBCTR )
{ /* line 161: */
RXBBCTR = PPBAOSI_(QXBBCTR_read_status, GPBAOSI_io_eof);
}
 /* line 162: */
SXBBCTR = RXBBCTR;
if ( SXBBCTR )
{ 
 /* line 163: */
 /* line 164: */
TXBBCTR = A68_FALSE;
} 
else
{ 
XRIACTR_linenumber+=1;
 /* line 165: */
 /* line 166: */
 /* line 167: */
 /* line 168: */
if ( PPBAOSI_(QXBBCTR_read_status, MPBAOSI_io_no_newline) )
{ 
 /* line 169: */
PXIACTR_error(253);
} 
 /* line 171: */
FXBBCTR_line_pending = A68_TRUE;
 /* line 175: */
 /* line 176: */
 /* line 178: */
if ( ((*Size)<2) )
{ 
 /* line 179: */
/*SKIP*/;
} 
else
{ 
{ 
UXBBCTR = 1 ;
VXBBCTR_first = (&A_VINDEX(Line,UXBBCTR));
 /* line 180: */
WXBBCTR = ((*VXBBCTR_first)!='*');
if ( WXBBCTR )
{ /* line 181: */
WXBBCTR = ((*VXBBCTR_first)!='%');
}
 /* line 183: */
XXBBCTR = WXBBCTR;
if ( XXBBCTR )
{ 
 /* line 190: */
/*SKIP*/;
} 
else
{ 
{ 
YXBBCTR = 2 ;
ZXBBCTR_second = (&A_VINDEX(Line,YXBBCTR));
 /* line 191: */
 /* line 192: */
 /* line 193: */
BYBBCTR = (A68_INT)(unsigned char)(*ZXBBCTR_second) ;
AYBBCTR = ((*(&A_R1INDEX(KRIACTR_stars,BYBBCTR)))==((*VXBBCTR_first)=='*'));
if ( AYBBCTR )
{ 
 /* line 194: */
 /* line 195: */
(*VXBBCTR_first) = (*ZXBBCTR_second) = ' ';
} 
else
{ 
 /* line 196: */
(*Size) = 0;
} 
} 
} 
} 
} 
 /* line 198: */
 /* line 199: */
TXBBCTR = A68_TRUE;
} 
} 
A_PROC_EXIT(input);
return( TXBBCTR );
} 
#undef NL

A_STATIC A68_VOID  DYBBCTR_generator(A68_BOOL  CYBBCTR_anonymous, A68_182  *ReturnedValue)
{ 
A68_182  EYBBCTR;  /* clause result */
A68_182  FYBBCTR;  /* OPERATORS - dynamic generator */
{ 
FYBBCTR.dim[0].upb = 511 ;
FYBBCTR.dim[0].lwb = 0 ;
A_1INITSTRIDES(FYBBCTR) ;
( CYBBCTR_anonymous? A_R1LOC(A68_183 ,FYBBCTR): A_R1HEAP(A68_183 ,FYBBCTR) );
EYBBCTR = FYBBCTR;
} 
*ReturnedValue = (EYBBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  UZBBCTR_output(A68_172  Op, A68_INT  Ll)
{ 
A68_223  CACBCTR_outprep;   /* proc value of non-global proc */
A68_288  TACBCTR_putints;   /* proc value of non-global proc */
A68_223  JBCBCTR_putint;   /* proc value of non-global proc */
A68_99  VBCBCTR_putchars;   /* proc value of non-global proc */
A68_99  CCCBCTR_puttruncatedchars;   /* proc value of non-global proc */
A68_172  KCCBCTR;  /* united object - for case conformity */
A68_156  LCCBCTR_c;
A68_BOOL  MCCBCTR;  /* clause result */
A68_289  NCCBCTR;  /* collateral clause result */
A68_186  OCCBCTR;  /* OPERATORS - istruct to row */
A68_INT  PCCBCTR_upbstreams;
A68_290  RCCBCTR_generator;   /* proc value of non-global proc */
A68_280  WCCBCTR;  /* avoid structure result */
A68_280  XCCBCTR_newstreams;
A68_276 * YCCBCTR_stream;
A68_280  ZCCBCTR;  /* OPERATORS - trim index */
A68_280  ADCBCTR;  /* forall yield */
A68_INT  BDCBCTR;  /* forall loop counter */
A68_280  CDCBCTR;  /* OPERATORS - trim index */
A68_280  DDCBCTR;  /* YIELD */
A68_172  EDCBCTR;  /* united object - for case conformity */
A68_151  FDCBCTR_e;
A68_152  GDCBCTR_xop;
A68_291  HDCBCTR;  /* collateral clause result */
A68_186  IDCBCTR;  /* OPERATORS - istruct to row */
A68_156  JDCBCTR_c;
A68_289  KDCBCTR;  /* collateral clause result */
A68_186  LDCBCTR;  /* OPERATORS - istruct to row */
A68_INT  MDCBCTR;  /* YIELD */
A68_INT  NDCBCTR_fnval;
A68_289  ODCBCTR;  /* collateral clause result */
A68_186  PDCBCTR;  /* OPERATORS - istruct to row */
A68_INT  QDCBCTR_id;
A68_141  RDCBCTR_number;
A68_INT  SDCBCTR_type;
A68_INT  TDCBCTR_exp;
A68_CHAR * UDCBCTR_c;
A68_VC  VDCBCTR;  /* forall yield */
A68_INT  WDCBCTR;  /* forall loop counter */
A68_BOOL  XDCBCTR;  /* optbool result */
A68_VC  YDCBCTR;  /* OPERATORS - trim index */
A68_VC  ZDCBCTR;  /* OPERATORS - trim index */
A68_VC  AECBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  BECBCTR;  /* OPERATORS - trim index */
A68_VC  CECBCTR;  /* OPERATORS - trim index */
A68_155  DECBCTR_xw;
A68_148  EECBCTR_idd;
A68_291  FECBCTR;  /* collateral clause result */
A68_186  GECBCTR;  /* OPERATORS - istruct to row */
A68_VC  HECBCTR;  /* OPERATORS - istruct -> vector */
A68_108  IECBCTR;  /* OPERATORS - istruct -> vector */
A68_143  JECBCTR_chars;
A68_INT  KECBCTR;  /* clause result */
A68_VC  LECBCTR;  /* clause result */
A68_VC  MECBCTR;  /* avoid structure result */
A68_VC  NECBCTR_string;
A68_144  OECBCTR_str;
A68_125 * PECBCTR_rd;
A68_292  QECBCTR;  /* collateral clause result */
A68_186  RECBCTR;  /* OPERATORS - istruct to row */
A68_VC  SECBCTR;  /* OPERATORS - istruct -> vector */
A68_108  TECBCTR;  /* OPERATORS - istruct -> vector */
A68_147  UECBCTR_nse;
A68_BOOL  VECBCTR_b;
A68_139  WECBCTR_generator;
A68_291  XECBCTR;  /* collateral clause result */
A68_186  YECBCTR;  /* OPERATORS - istruct to row */
A68_142  ZECBCTR_al;
A68_140  AFCBCTR_c;
A68_291  BFCBCTR;  /* collateral clause result */
A68_186  CFCBCTR;  /* OPERATORS - istruct to row */
A68_149  DFCBCTR_xl;
A68_126 * EFCBCTR_rl;
A68_VC  FFCBCTR;  /* OPERATORS - istruct -> vector */
A68_108  GFCBCTR;  /* OPERATORS - istruct -> vector */
A68_291  HFCBCTR;  /* collateral clause result */
A68_186  IFCBCTR;  /* OPERATORS - istruct to row */
A68_126 * JFCBCTR_lb;
A68_157  KFCBCTR_xs;
A68_173  LFCBCTR_mdes;
A68_250  MFCBCTR;  /* OPERATORS - vector -> row */
A68_164  NFCBCTR_xtd;
A68_163  OFCBCTR_xtm;
A68_291  PFCBCTR;  /* collateral clause result */
A68_186  QFCBCTR;  /* OPERATORS - istruct to row */
A68_VC  RFCBCTR;  /* OPERATORS - istruct -> vector */
A68_108  SFCBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  TFCBCTR;  /* OPERATORS - istruct -> vector */
A68_106  UFCBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  VFCBCTR;  /* OPERATORS - istruct -> vector */
A68_106  WFCBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  XFCBCTR;  /* OPERATORS - istruct -> vector */
A68_106  YFCBCTR;  /* OPERATORS - istruct -> vector */
A68_129 * ZFCBCTR_spec;
A68_128  AGCBCTR;  /* forall yield */
A68_INT  BGCBCTR;  /* forall loop counter */
A68_VC  CGCBCTR;  /* OPERATORS - istruct -> vector */
A68_106  DGCBCTR;  /* OPERATORS - istruct -> vector */
A68_161  EGCBCTR_open;
A68_158  FGCBCTR_xm;
A68_170  GGCBCTR_xbu;
A68_293  IGCBCTR_generator;   /* proc value of non-global proc */
A68_186  NGCBCTR;  /* avoid structure result */
A68_93  OGCBCTR;  /* YIELD */
A68_186  PGCBCTR;  /* OPERATORS - vector -> row */
A68_186  QGCBCTR;  /* OPERATORS - assign op */
A68_130  RGCBCTR_s;
A_PROC_ENTRY(output);
 /* line 262: */
 /* line 263: */
 /* line 265: */
if ( (DSIACTR_greatestseverity<=2) )
{ 
 /* line 278: */
A_CLOSURE( CACBCTR_outprep, DACBCTR_outprep, EACBCTR_outprep );
(( EACBCTR_outprep * ) ( CACBCTR_outprep.nonlocals )) -> Ll = Ll;
 /* line 319: */
A_CLOSURE( TACBCTR_putints, UACBCTR_putints, VACBCTR_putints );
(( VACBCTR_putints * ) ( TACBCTR_putints.nonlocals )) -> CACBCTR_outprep = CACBCTR_outprep;
 /* line 328: */
A_CLOSURE( JBCBCTR_putint, KBCBCTR_putint, LBCBCTR_putint );
(( LBCBCTR_putint * ) ( JBCBCTR_putint.nonlocals )) -> CACBCTR_outprep = CACBCTR_outprep;
 /* line 335: */
A_CLOSURE( VBCBCTR_putchars, WBCBCTR_putchars, XBCBCTR_putchars );
(( XBCBCTR_putchars * ) ( VBCBCTR_putchars.nonlocals )) -> CACBCTR_outprep = CACBCTR_outprep;
 /* line 342: */
A_CLOSURE( CCCBCTR_puttruncatedchars, DCCBCTR_puttruncatedchars, ECCBCTR_puttruncatedchars );
(( ECCBCTR_puttruncatedchars * ) ( CCCBCTR_puttruncatedchars.nonlocals )) -> CACBCTR_outprep = CACBCTR_outprep;
 /* line 351: */
 /* line 352: */
 /* line 353: */
if ( FXBBCTR_line_pending )
{ 
 /* line 354: */
KCCBCTR = Op ;
switch ( KCCBCTR.mode )
{ 
case 17: /* STRUCT(INT,INT,BITS,INT)  */
LCCBCTR_c = (KCCBCTR.data.mode17);
 /* line 355: */
MCCBCTR = (LCCBCTR_c.Fn!=25);
break;
default: 
 /* line 356: */
 /* line 357: */
 /* line 359: */
MCCBCTR = A68_TRUE;
break;
} 
if ( MCCBCTR )
{ 
 /* line 360: */
NCCBCTR.data[0] = XRIACTR_linenumber;
NCCBCTR.data[1] = DXBBCTR_line_start;
 /* line 361: */
NCCBCTR.data[2] = EXBBCTR_line_length;
A_CALLPROC(TACBCTR_putints,(VWBBCTR_linetype, A_HIS1ARR(OCCBCTR,NCCBCTR,A68_INT ,3)),(VWBBCTR_linetype, A_HIS1ARR(OCCBCTR,NCCBCTR,A68_INT ,3),(TACBCTR_putints).nonlocals));
 /* line 362: */
 /* line 363: */
 /* line 364: */
FXBBCTR_line_pending = A68_FALSE;
} 
} 
 /* line 366: */
 /* line 367: */
if ( NZBBCTR_upped )
{ 
A_CALLPROC(CACBCTR_outprep,(1, 2),(1, 2,(CACBCTR_outprep).nonlocals));
 /* line 368: */
 /* line 369: */
NZBBCTR_upped = A68_FALSE;
} 
 /* line 371: */
(*IVBBCTR_curstradd) = HUBBCTR_current;
 /* line 373: */
for ( ;; )
{ 
 /* line 374: */
if ( !((Ll>DUBBCTR_streams.dim[0].upb)) ) break;
PCCBCTR_upbstreams = DUBBCTR_streams.dim[0].upb;
 /* line 375: */
A_CLOSURE( RCCBCTR_generator, SCCBCTR_generator, TCCBCTR_generator );
(( TCCBCTR_generator * ) ( RCCBCTR_generator.nonlocals )) -> PCCBCTR_upbstreams = PCCBCTR_upbstreams;
A_CALLPROC(RCCBCTR_generator,(A68_FALSE, &WCCBCTR),(A68_FALSE, &WCCBCTR,(RCCBCTR_generator).nonlocals));
XCCBCTR_newstreams = WCCBCTR;
 /* line 376: */
 /* line 377: */
ADCBCTR = A_R1TRIM(ZCCBCTR,(XCCBCTR_newstreams),A_RTSCRIPT(&(ZCCBCTR.dim[0]),&((XCCBCTR_newstreams).dim[0]),(PCCBCTR_upbstreams+1),(XCCBCTR_newstreams).dim[0].upb,1)) ;
BDCBCTR = ADCBCTR.dim[0].upb - ADCBCTR.dim[0].lwb;
YCCBCTR_stream = ADCBCTR.data;
for (;BDCBCTR-- >= 0;
(YCCBCTR_stream += ADCBCTR.dim[0].stride
) )
{
 /* line 378: */
(*YCCBCTR_stream) = BUBBCTR_unsetstream;
}
 /* line 379: */
DDCBCTR = A_R1TRIM(CDCBCTR,(XCCBCTR_newstreams),A_RTSCRIPT(&(CDCBCTR.dim[0]),&((XCCBCTR_newstreams).dim[0]),(XCCBCTR_newstreams).dim[0].lwb,PCCBCTR_upbstreams,0)) ;
A_R1ASSIGN2(DUBBCTR_streams,DDCBCTR,A68_276 );
 /* line 380: */
 /* line 381: */
DUBBCTR_streams = XCCBCTR_newstreams;
}
 /* line 382: */
HUBBCTR_current = (*(IVBBCTR_curstradd = (&A_R1INDEX(DUBBCTR_streams,Ll))));
 /* line 384: */
 /* line 385: */
EDCBCTR = Op ;
switch ( EDCBCTR.mode )
{ 
case 1: /* STRUCT(BOOL)  */
FDCBCTR_e = (EDCBCTR.data.mode1);
 /* line 386: */
 /* line 387: */
if ( !(NZBBCTR_upped = FDCBCTR_e.Up) )
{ 
 /* line 388: */
 /* line 389: */
A_CALLPROC(CACBCTR_outprep,(1, 1),(1, 1,(CACBCTR_outprep).nonlocals));
} 
break;
case 14: /* STRUCT(INT,INT,INT)  */
GDCBCTR_xop = (EDCBCTR.data.mode14);
 /* line 390: */
 /* line 391: */
if ( (GDCBCTR_xop.Fn==LGAACTR_voidfn) )
{ 
 /* line 392: */
A_CALLPROC(CACBCTR_outprep,(1, 202),(1, 202,(CACBCTR_outprep).nonlocals));
} 
else
{ 
HDCBCTR.data[0] = GDCBCTR_xop.M;
HDCBCTR.data[1] = GDCBCTR_xop.Param;
 /* line 393: */
 /* line 394: */
A_CALLPROC(TACBCTR_putints,((128+GDCBCTR_xop.Fn), A_HIS1ARR(IDCBCTR,HDCBCTR,A68_INT ,2)),((128+GDCBCTR_xop.Fn), A_HIS1ARR(IDCBCTR,HDCBCTR,A68_INT ,2),(TACBCTR_putints).nonlocals));
} 
break;
case 17: /* STRUCT(INT,INT,BITS,INT)  */
JDCBCTR_c = (EDCBCTR.data.mode17);
 /* line 395: */
{ 
 /* line 396: */
if ( (JDCBCTR_c.Fn==25) )
{ 
A_CALLPROC(CACBCTR_outprep,(1, (48+((A68_INT )JDCBCTR_c.Props/2048))),(1, (48+((A68_INT )JDCBCTR_c.Props/2048)),(CACBCTR_outprep).nonlocals));
 /* line 397: */
 /* line 398: */
 /* line 399: */
if ( FXBBCTR_line_pending )
{ 
 /* line 400: */
KDCBCTR.data[0] = XRIACTR_linenumber;
KDCBCTR.data[1] = DXBBCTR_line_start;
 /* line 401: */
KDCBCTR.data[2] = EXBBCTR_line_length;
A_CALLPROC(TACBCTR_putints,(VWBBCTR_linetype, A_HIS1ARR(LDCBCTR,KDCBCTR,A68_INT ,3)),(VWBBCTR_linetype, A_HIS1ARR(LDCBCTR,KDCBCTR,A68_INT ,3),(TACBCTR_putints).nonlocals));
 /* line 402: */
 /* line 403: */
 /* line 404: */
 /* line 405: */
FXBBCTR_line_pending = A68_FALSE;
} 
} 
else
{ 
MDCBCTR = (JDCBCTR_c.Fn+1) ;
NDCBCTR_fnval = (A68_INT)(unsigned char)A_VINDEX(MZBBCTR_contval,MDCBCTR);
 /* line 406: */
ODCBCTR.data[0] = JDCBCTR_c.M;
ODCBCTR.data[1] = (A68_INT )JDCBCTR_c.Props;
ODCBCTR.data[2] = JDCBCTR_c.Param;
 /* line 407: */
 /* line 408: */
 /* line 409: */
A_CALLPROC(TACBCTR_putints,(NDCBCTR_fnval, A_HIS1ARR(PDCBCTR,ODCBCTR,A68_INT ,3)),(NDCBCTR_fnval, A_HIS1ARR(PDCBCTR,ODCBCTR,A68_INT ,3),(TACBCTR_putints).nonlocals));
} 
} 
break;
case 3: /* INT */
QDCBCTR_id = (EDCBCTR.data.mode3);
 /* line 410: */
 /* line 411: */
if ( (QDCBCTR_id<0) )
{ 
 /* line 412: */
A_CALLPROC(JBCBCTR_putint,(78, QDCBCTR_id),(78, QDCBCTR_id,(JBCBCTR_putint).nonlocals));
} 
else
{ 
 /* line 413: */
 /* line 414: */
A_CALLPROC(JBCBCTR_putint,(80, QDCBCTR_id),(80, QDCBCTR_id,(JBCBCTR_putint).nonlocals));
} 
break;
case 9: /* STRUCT(INT,REF MODE26)  */
RDCBCTR_number = (EDCBCTR.data.mode9);
 /* line 415: */
 /* line 416: */
{ 
SDCBCTR_type = (RDCBCTR_number.Mode+NWBBCTR_numberbase);
 /* line 417: */
A_CALLPROC(CACBCTR_outprep,(1, SDCBCTR_type),(1, SDCBCTR_type,(CACBCTR_outprep).nonlocals));
 /* line 422: */
TDCBCTR_exp = (-1);
 /* line 423: */
VDCBCTR = RDCBCTR_number.Nu ;
WDCBCTR = VDCBCTR.upb -1;
UDCBCTR_c = VDCBCTR.data;
for (;WDCBCTR-- >= 0;
(UDCBCTR_c++
) )
{
 /* line 424: */
if ( !(((TDCBCTR_exp-=1)<0)) ) break;
XDCBCTR = ((*UDCBCTR_c)=='+');
if ( ! XDCBCTR )
{XDCBCTR = ((*UDCBCTR_c)=='-');
}
if ( XDCBCTR )
{ 
TDCBCTR_exp = (-TDCBCTR_exp);
} 
}
 /* line 425: */
 /* line 426: */
 /* line 427: */
if ( (TDCBCTR_exp<0) )
{ 
 /* line 428: */
 /* line 429: */
A_CALLPROC(VBCBCTR_putchars,(RDCBCTR_number.Nu),(RDCBCTR_number.Nu,(VBCBCTR_putchars).nonlocals));
} 
else
{ 
 /* line 430: */
 /* line 431: */
 /* line 432: */
 /* line 433: */
YDCBCTR = RDCBCTR_number.Nu ;
BECBCTR = RDCBCTR_number.Nu ;
A_CALLPROC(VBCBCTR_putchars,(A_VC_PLUS(A_VC_PLUS(A_VTRIM(ZDCBCTR,(YDCBCTR),A_VTSCRIPT(&(ZDCBCTR.upb),(YDCBCTR).upb,1,(TDCBCTR_exp-1))),A_HVEC(AECBCTR,'e',A68_CHAR )),A_VTRIM(CECBCTR,(BECBCTR),A_VTSCRIPT(&(CECBCTR.upb),(BECBCTR).upb,TDCBCTR_exp,(BECBCTR).upb)))),(A_VC_PLUS(A_VC_PLUS(A_VTRIM(ZDCBCTR,(YDCBCTR),A_VTSCRIPT(&(ZDCBCTR.upb),(YDCBCTR).upb,1,(TDCBCTR_exp-1))),A_HVEC(AECBCTR,'e',A68_CHAR )),A_VTRIM(CECBCTR,(BECBCTR),A_VTSCRIPT(&(CECBCTR.upb),(BECBCTR).upb,TDCBCTR_exp,(BECBCTR).upb))),(VBCBCTR_putchars).nonlocals));
} 
} 
break;
case 16: /* STRUCT(INT)  */
DECBCTR_xw = (EDCBCTR.data.mode16);
 /* line 434: */
 /* line 435: */
if ( (DECBCTR_xw.W<=3) )
{ 
 /* line 436: */
 /* line 437: */
A_CALLPROC(CACBCTR_outprep,(1, (208+DECBCTR_xw.W)),(1, (208+DECBCTR_xw.W),(CACBCTR_outprep).nonlocals));
} 
break;
case 12: /* STRUCT(INT,REF MODE124)  */
EECBCTR_idd = (EDCBCTR.data.mode12);
 /* line 438: */
 /* line 440: */
{ 
 /* line 441: */
FECBCTR.data[0] = (*(&(EECBCTR_idd.Iddec->Mode)));
 /* line 442: */
FECBCTR.data[1] = (*(&(EECBCTR_idd.Iddec->Decno)));
A_CALLPROC(TACBCTR_putints,((RWBBCTR_iddecbase+EECBCTR_idd.Type), A_HIS1ARR(GECBCTR,FECBCTR,A68_INT ,2)),((RWBBCTR_iddecbase+EECBCTR_idd.Type), A_HIS1ARR(GECBCTR,FECBCTR,A68_INT ,2),(TACBCTR_putints).nonlocals));
 /* line 443: */
 /* line 444: */
 /* line 445: */
IECBCTR = (*(&(EECBCTR_idd.Iddec->Name))) ;
A_CALLPROC(CCCBCTR_puttruncatedchars,(A_HISVEC(HECBCTR,IECBCTR,32,A68_CHAR )),(A_HISVEC(HECBCTR,IECBCTR,32,A68_CHAR ),(CCCBCTR_puttruncatedchars).nonlocals));
} 
break;
case 35: /* STRUCT(INT,INT,REF MODE26)  */
JECBCTR_chars = (EDCBCTR.data.mode35);
 /* line 446: */
 /* line 448: */
{ 
 /* line 449: */
 /* line 450: */
 /* line 451: */
if ( (JECBCTR_chars.Nochars<0) )
{ 
 /* line 452: */
KECBCTR = XWBBCTR_notlastxcharstype;
} 
else
{ 
 /* line 453: */
KECBCTR = YWBBCTR_lastxcharstype;
} 
A_CALLPROC(CACBCTR_outprep,(1, KECBCTR),(1, KECBCTR,(CACBCTR_outprep).nonlocals));
 /* line 454: */
 /* line 455: */
 /* line 456: */
if ( (JECBCTR_chars.Base!=0) )
{ 
 /* line 457: */
 /* line 458: */
GNJACTR_convertradixstring( JECBCTR_chars.Chars, JECBCTR_chars.Base, &MECBCTR );
LECBCTR = MECBCTR;
} 
else
{ 
LECBCTR = JECBCTR_chars.Chars;
} 
NECBCTR_string = LECBCTR;
 /* line 459: */
 /* line 460: */
 /* line 461: */
A_CALLPROC(VBCBCTR_putchars,(NECBCTR_string),(NECBCTR_string,(VBCBCTR_putchars).nonlocals));
} 
break;
case 7: /* STRUCT(INT)  */
OECBCTR_str = (EDCBCTR.data.mode7);
 /* line 462: */
 /* line 463: */
if ( (OECBCTR_str.Strmode==8) )
{ 
 /* line 464: */
A_CALLPROC(CACBCTR_outprep,(1, 76),(1, 76,(CACBCTR_outprep).nonlocals));
} 
else
{ 
 /* line 465: */
 /* line 467: */
A_CALLPROC(JBCBCTR_putint,(77, OECBCTR_str.Strmode),(77, OECBCTR_str.Strmode,(JBCBCTR_putint).nonlocals));
} 
break;
case 34: /* REF STRUCT(MODE108,BITS,INT,INT,INT,INT,REF MODE125)  */
PECBCTR_rd = (EDCBCTR.data.mode34);
 /* line 468: */
 /* line 469: */
{ 
 /* line 470: */
 /* line 471: */
QECBCTR.data[0] = (*(&(PECBCTR_rd->Rdenno)));
 /* line 472: */
QECBCTR.data[1] = (*(&(PECBCTR_rd->Mode)));
 /* line 473: */
QECBCTR.data[2] = (A68_INT )(*(&(PECBCTR_rd->Props)));
 /* line 474: */
 /* line 475: */
QECBCTR.data[3] = DRAAOSI_max((*(&(PECBCTR_rd->Maxname))), HAAACTR_minidno);
A_CALLPROC(TACBCTR_putints,(197, A_HIS1ARR(RECBCTR,QECBCTR,A68_INT ,4)),(197, A_HIS1ARR(RECBCTR,QECBCTR,A68_INT ,4),(TACBCTR_putints).nonlocals));
 /* line 476: */
 /* line 477: */
 /* line 479: */
TECBCTR = (*(&(PECBCTR_rd->Name))) ;
A_CALLPROC(CCCBCTR_puttruncatedchars,(A_HISVEC(SECBCTR,TECBCTR,32,A68_CHAR )),(A_HISVEC(SECBCTR,TECBCTR,32,A68_CHAR ),(CCCBCTR_puttruncatedchars).nonlocals));
} 
break;
case 5: /* STRUCT(INT)  */
UECBCTR_nse = (EDCBCTR.data.mode5);
 /* line 480: */
 /* line 481: */
A_CALLPROC(CACBCTR_outprep,(1, (66+UECBCTR_nse.Nse)),(1, (66+UECBCTR_nse.Nse),(CACBCTR_outprep).nonlocals));
break;
case 2: /* BOOL */
VECBCTR_b = (EDCBCTR.data.mode2);
 /* line 482: */
 /* line 483: */
A_CALLPROC(CACBCTR_outprep,(1, (65+(VECBCTR_b))),(1, (65+(VECBCTR_b)),(CACBCTR_outprep).nonlocals));
break;
case 6: /* STRUCT(INT,BOOL)  */
WECBCTR_generator = (EDCBCTR.data.mode6);
 /* line 484: */
 /* line 487: */
 /* line 488: */
XECBCTR.data[0] = WECBCTR_generator.Mode;
 /* line 489: */
XECBCTR.data[1] = (WECBCTR_generator.Loc);
 /* line 490: */
 /* line 491: */
A_CALLPROC(TACBCTR_putints,((128+PGAACTR_generatorfn), A_HIS1ARR(YECBCTR,XECBCTR,A68_INT ,2)),((128+PGAACTR_generatorfn), A_HIS1ARR(YECBCTR,XECBCTR,A68_INT ,2),(TACBCTR_putints).nonlocals));
break;
case 8: /* STRUCT(INT,INT,INT)  */
 /* line 492: */
 /* line 493: */
PXIACTR_error(808);
break;
case 10: /* STRUCT(INT)  */
ZECBCTR_al = (EDCBCTR.data.mode10);
 /* line 494: */
 /* line 495: */
A_CALLPROC(JBCBCTR_putint,(75, ZECBCTR_al.Almode),(75, ZECBCTR_al.Almode,(JBCBCTR_putint).nonlocals));
break;
case 11: /* STRUCT(INT,INT)  */
AFCBCTR_c = (EDCBCTR.data.mode11);
 /* line 497: */
BFCBCTR.data[0] = AFCBCTR_c.Mode;
BFCBCTR.data[1] = AFCBCTR_c.Nopars;
 /* line 498: */
A_CALLPROC(TACBCTR_putints,(70, A_HIS1ARR(CFCBCTR,BFCBCTR,A68_INT ,2)),(70, A_HIS1ARR(CFCBCTR,BFCBCTR,A68_INT ,2),(TACBCTR_putints).nonlocals));
break;
case 13: /* STRUCT(REF MODE126,BOOL)  */
DFCBCTR_xl = (EDCBCTR.data.mode13);
 /* line 499: */
 /* line 500: */
if ( DFCBCTR_xl.Notsetting )
{ 
EFCBCTR_rl = DFCBCTR_xl.Lab;
 /* line 501: */
 /* line 502: */
if ( ((*(&(EFCBCTR_rl->Status)))==0) )
{ 
A_CALLPROC(JBCBCTR_putint,(194, (*(&(EFCBCTR_rl->Labno)))),(194, (*(&(EFCBCTR_rl->Labno))),(JBCBCTR_putint).nonlocals));
 /* line 503: */
 /* line 504: */
GFCBCTR = (*(&(EFCBCTR_rl->Name))) ;
A_CALLPROC(CCCBCTR_puttruncatedchars,(A_HISVEC(FFCBCTR,GFCBCTR,32,A68_CHAR )),(A_HISVEC(FFCBCTR,GFCBCTR,32,A68_CHAR ),(CCCBCTR_puttruncatedchars).nonlocals));
} 
else
{ 
HFCBCTR.data[0] = (*(&(EFCBCTR_rl->Labno)));
HFCBCTR.data[1] = (*(&(EFCBCTR_rl->Status)));
 /* line 505: */
 /* line 506: */
A_CALLPROC(TACBCTR_putints,(195, A_HIS1ARR(IFCBCTR,HFCBCTR,A68_INT ,2)),(195, A_HIS1ARR(IFCBCTR,HFCBCTR,A68_INT ,2),(TACBCTR_putints).nonlocals));
} 
} 
else
{ 
 /* line 507: */
 /* line 508: */
A_CALLPROC(JBCBCTR_putint,(196, (*(&(DFCBCTR_xl.Lab->Labno)))),(196, (*(&(DFCBCTR_xl.Lab->Labno))),(JBCBCTR_putint).nonlocals));
} 
break;
case 4: /* REF STRUCT(MODE108,INT,INT,REF MODE126)  */
JFCBCTR_lb = (EDCBCTR.data.mode4);
 /* line 509: */
A_CALLPROC(JBCBCTR_putint,(74, (*(&(JFCBCTR_lb->Labno)))),(74, (*(&(JFCBCTR_lb->Labno))),(JBCBCTR_putint).nonlocals));
break;
case 18: /* STRUCT(INT,INT,INT,INT,INT,INT)  */
KFCBCTR_xs = (EDCBCTR.data.mode18);
 /* line 511: */
TTBBCTR_xsizes = KFCBCTR_xs;
break;
case 19: /* REF VECTOR [] MODE121 */
LFCBCTR_mdes = (EDCBCTR.data.mode19);
 /* line 512: */
{ 
A_CALLPROC(SKMACTR_initialiseuniquenameserver,(QRIACTR_uname_option),(QRIACTR_uname_option,(SKMACTR_initialiseuniquenameserver).nonlocals));
 /* line 513: */
 /* line 514: */
 /* line 516: */
SCOACTR_initialisemodetable(A_VECARR(LFCBCTR_mdes,MFCBCTR), (*(&((&TTBBCTR_xsizes)->Nomodes))));
} 
break;
case 26: /* STRUCT(BOOL,INT,REF MODE124)  */
NFCBCTR_xtd = (EDCBCTR.data.mode26);
 /* line 517: */
{ 
 /* line 518: */
if ( PZBBCTR_xtmodulepending )
{ 
PZBBCTR_xtmodulepending = A68_FALSE;
 /* line 519: */
 /* line 520: */
VCPACTR_adddecsmodule(OZBBCTR_lastxtmodule, NFCBCTR_xtd.Level);
} 
 /* line 521: */
 /* line 522: */
 /* line 523: */
AEPACTR_addexternalid((*NFCBCTR_xtd.Id));
} 
break;
case 25: /* STRUCT(INT,INT,MODE108,MODE127)  */
OFCBCTR_xtm = (EDCBCTR.data.mode25);
 /* line 524: */
 /* line 525: */
if ( (OFCBCTR_xtm.Type<0) )
{ 
OZBBCTR_lastxtmodule = OFCBCTR_xtm;
 /* line 526: */
 /* line 528: */
PZBBCTR_xtmodulepending = A68_TRUE;
} 
else
{ 
 /* line 529: */
PFCBCTR.data[0] = OFCBCTR_xtm.Moduleno;
 /* line 530: */
PFCBCTR.data[1] = OFCBCTR_xtm.Ym.Specs.upb;
A_CALLPROC(TACBCTR_putints,(BXBBCTR_xtmoduletype, A_HIS1ARR(QFCBCTR,PFCBCTR,A68_INT ,2)),(BXBBCTR_xtmoduletype, A_HIS1ARR(QFCBCTR,PFCBCTR,A68_INT ,2),(TACBCTR_putints).nonlocals));
 /* line 531: */
SFCBCTR = OFCBCTR_xtm.Name ;
A_CALLPROC(CCCBCTR_puttruncatedchars,(A_HISVEC(RFCBCTR,SFCBCTR,32,A68_CHAR )),(A_HISVEC(RFCBCTR,SFCBCTR,32,A68_CHAR ),(CCCBCTR_puttruncatedchars).nonlocals));
 /* line 532: */
UFCBCTR = OFCBCTR_xtm.Ym.Uname ;
A_CALLPROC(VBCBCTR_putchars,(A_HISVEC(TFCBCTR,UFCBCTR,7,A68_CHAR )),(A_HISVEC(TFCBCTR,UFCBCTR,7,A68_CHAR ),(VBCBCTR_putchars).nonlocals));
 /* line 533: */
WFCBCTR = OFCBCTR_xtm.Ym.Lname ;
A_CALLPROC(VBCBCTR_putchars,(A_HISVEC(VFCBCTR,WFCBCTR,7,A68_CHAR )),(A_HISVEC(VFCBCTR,WFCBCTR,7,A68_CHAR ),(VBCBCTR_putchars).nonlocals));
 /* line 534: */
YFCBCTR = OFCBCTR_xtm.Ym.Gname ;
A_CALLPROC(VBCBCTR_putchars,(A_HISVEC(XFCBCTR,YFCBCTR,7,A68_CHAR )),(A_HISVEC(XFCBCTR,YFCBCTR,7,A68_CHAR ),(VBCBCTR_putchars).nonlocals));
 /* line 535: */
 /* line 536: */
AGCBCTR = OFCBCTR_xtm.Ym.Specs ;
BGCBCTR = AGCBCTR.upb -1;
ZFCBCTR_spec = AGCBCTR.data;
for (;BGCBCTR-- >= 0;
(ZFCBCTR_spec++
) )
{
 /* line 537: */
DGCBCTR = (*(&(ZFCBCTR_spec->Ys))) ;
A_CALLPROC(VBCBCTR_putchars,(A_HISVEC(CGCBCTR,DGCBCTR,7,A68_CHAR )),(A_HISVEC(CGCBCTR,DGCBCTR,7,A68_CHAR ),(VBCBCTR_putchars).nonlocals));
}
 /* line 538: */
 /* line 539: */
} 
break;
case 29: /* STRUCT(MODE108,MODE127,MODE108,MODE106,INT,INT)  */
 /* line 540: */
 /* line 541: */
PXIACTR_error(804);
break;
case 28: /* STRUCT(INT,REF MODE93,INT)  */
 /* line 542: */
 /* line 543: */
PXIACTR_error(805);
break;
case 23: /* STRUCT(MODE108,INT,INT,INT)  */
EGCBCTR_open = (EDCBCTR.data.mode23);
 /* line 544: */
 /* line 545: */
RZBBCTR_syntheticmoduleno = EGCBCTR_open.Moduleno;
break;
case 33: /* STRUCT(INT,INT,INT)  */
 /* line 546: */
 /* line 547: */
PXIACTR_error(806);
break;
case 27: /* STRUCT(MODE137,REF MODE166,REF MODE93,INT)  */
 /* line 548: */
 /* line 549: */
PXIACTR_error(807);
break;
case 21: /* STRUCT(MODE108,MODE136,MODE136,INT)  */
FGCBCTR_xm = (EDCBCTR.data.mode21);
 /* line 550: */
 /* line 551: */
FBPACTR_initialisecurrentmodule(FGCBCTR_xm);
break;
case 32: /* STRUCT(REF MODE93,REF MODE93)  */
GGCBCTR_xbu = (EDCBCTR.data.mode32);
 /* line 552: */
A_CLOSURE( IGCBCTR_generator, JGCBCTR_generator, KGCBCTR_generator );
(( KGCBCTR_generator * ) ( IGCBCTR_generator.nonlocals )) -> GGCBCTR_xbu = GGCBCTR_xbu;
 /* line 553: */
A_CALLPROC(IGCBCTR_generator,(A68_FALSE, &NGCBCTR),(A68_FALSE, &NGCBCTR,(IGCBCTR_generator).nonlocals));
OGCBCTR = GGCBCTR_xbu.Decnos ;
QGCBCTR = A_VECARR(OGCBCTR,PGCBCTR) ;
A_R1ASSIGN2(QGCBCTR,NGCBCTR,A68_INT ) ;
UAPACTR_keptdecnos = NGCBCTR;
break;
case 22: /* STRUCT(MODE108,INT,INT,INT,MODE134)  */
RGCBCTR_s = (EDCBCTR.data.mode22);
 /* line 554: */
 /* line 555: */
 /* line 556: */
NCPACTR_initialisespec(RGCBCTR_s);
break;
default: 
 /* line 557: */
 /* line 563: */
/*SKIP*/;
break;
} 
} 
else
{ 
/*SKIP*/;
} 
A_PROC_EXIT(output);
return;
} 
#undef NL

A_STATIC A68_VOID  EICBCTR_positioncurrent(void)
{ 
A_PROC_ENTRY(positioncurrent);
 /* line 634: */
 /* line 636: */
if ( ((*FVBBCTR_strptr)<(*EVBBCTR_streambuffer).upb) )
{ 
 /* line 637: */
/*SKIP*/;
} 
else
{ 
 /* line 638: */
 /* line 639: */
if ( (((*GVBBCTR_currentbuffer)+=1)>(*HVBBCTR_buffers).upb) )
{ 
 /* line 640: */
 /* line 641: */
WXIACTR_assert(GICBCTR, A68_FALSE);
} 
else
{ 
(*EVBBCTR_streambuffer) = (*(&A_VINDEX((*HVBBCTR_buffers),(*GVBBCTR_currentbuffer))));
 /* line 642: */
 /* line 643: */
(*FVBBCTR_strptr) = 0;
} 
} 
A_PROC_EXIT(positioncurrent);
return;
} 
#undef NL

A_STATIC A68_INT  HICBCTR_nextbyte(void)
{ 
A68_INT  IICBCTR;  /* clause result */
A68_INT  JICBCTR;  /* YIELD */
A_PROC_ENTRY(nextbyte);
{ 
EICBCTR_positioncurrent();
JICBCTR = (*FVBBCTR_strptr)+=1 ;
IICBCTR = (A68_INT)(unsigned char)(*(&A_VINDEX((*EVBBCTR_streambuffer),JICBCTR)));
} 
A_PROC_EXIT(nextbyte);
return( IICBCTR );
} 
#undef NL

A_STATIC A68_INT  KICBCTR_nextint(void)
{ 
A68_VC  MICBCTR;  /* OPERATORS - trim index */
A68_VC  NICBCTR;  /* OPERATORS - trim index */
A68_VC  OICBCTR;  /* OPERATORS - trim index */
A68_INT  LICBCTR_nexti;
A68_INT  PICBCTR;  /* clause result */
A_PROC_ENTRY(nextint);
{ 
EICBCTR_positioncurrent();
 /* line 652: */
NICBCTR = A_VTRIM(MICBCTR,((*EVBBCTR_streambuffer)),A_VTSCRIPT(&(MICBCTR.upb),((*EVBBCTR_streambuffer)).upb,((*FVBBCTR_strptr)+1),((*EVBBCTR_streambuffer)).upb)) ;
LICBCTR_nexti = UTAAOSI_stringvalue(A_VTRIM(OICBCTR,(NICBCTR),A_VTSCRIPT(&(OICBCTR.upb),(NICBCTR).upb,1,4)));
 /* line 653: */
(*FVBBCTR_strptr)+=4;
 /* line 654: */
 /* line 655: */
PICBCTR = LICBCTR_nexti;
} 
A_PROC_EXIT(nextint);
return( PICBCTR );
} 
#undef NL

A_STATIC A68_VOID  SICBCTR_nextstring(A68_VC  *ReturnedValue)
{ 
A68_INT  TICBCTR;  /* YIELD */
A68_VC  UICBCTR;  /* OPERATORS - trim index */
A68_VC  VICBCTR;  /* clause result */
A_PROC_ENTRY(nextstring);
{ 
EICBCTR_positioncurrent();
 /* line 663: */
TICBCTR = (*FVBBCTR_strptr)+=1 ;
CICBCTR_upbstring = (A68_INT)(unsigned char)(*(&A_VINDEX((*EVBBCTR_streambuffer),TICBCTR)));
 /* line 664: */
DICBCTR_string = A_VTRIM(UICBCTR,((*EVBBCTR_streambuffer)),A_VTSCRIPT(&(UICBCTR.upb),((*EVBBCTR_streambuffer)).upb,((*FVBBCTR_strptr)+1),((*FVBBCTR_strptr)+CICBCTR_upbstring)));
 /* line 665: */
(*FVBBCTR_strptr)+=CICBCTR_upbstring;
 /* line 666: */
 /* line 667: */
VICBCTR = DICBCTR_string;
} 
A_PROC_EXIT(nextstring);
*ReturnedValue = (VICBCTR);
return;
} 
#undef NL

A_STATIC A68_INT  AJCBCTR_nexttype(void)
{ 
A68_INT  BJCBCTR_t;
A68_INT  CJCBCTR;  /* YIELD */
A68_BOOL  DJCBCTR;  /* clause result */
A68_276 * EJCBCTR;  /* YIELD */
A68_INT  FJCBCTR;  /* YIELD */
A68_BOOL  IJCBCTR;  /* optbool result */
A68_VC  MJCBCTR;  /* avoid structure result */
A68_213  OJCBCTR;  /* OPERATORS - mode -> union mode */
A68_212  PJCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_302  QJCBCTR;  /* collateral clause result */
A68_213  TJCBCTR;  /* OPERATORS - mode -> union mode */
A68_VC  UJCBCTR;  /* YIELD */
A68_VC  VJCBCTR;  /* avoid structure result */
A68_213  WJCBCTR;  /* OPERATORS - mode -> union mode */
A68_213  ZJCBCTR;  /* OPERATORS - mode -> union mode */
A68_VC  AKCBCTR;  /* YIELD */
A68_213  BKCBCTR;  /* OPERATORS - mode -> union mode */
A68_212  CKCBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  DKCBCTR;  /* avoid structure result */
A68_VC  EKCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  FKCBCTR;  /* avoid structure result */
A68_VC  GKCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  JKCBCTR;  /* clause result */
A_PROC_ENTRY(nexttype);
{ 
 /* line 678: */
for ( ;; )
{ 
 /* line 679: */
EICBCTR_positioncurrent();
 /* line 680: */
CJCBCTR = (*FVBBCTR_strptr)+=1 ;
BJCBCTR_t = (A68_INT)(unsigned char)(*(&A_VINDEX((*EVBBCTR_streambuffer),CJCBCTR)));
 /* line 681: */
 /* line 682: */
DJCBCTR = (BJCBCTR_t<IWBBCTR_separatorbase);
if ( !DJCBCTR ) break;
 /* line 683: */
if ( (BJCBCTR_t<3) )
{ 
EJCBCTR = (&A_R1INDEX(DUBBCTR_streams,GHCBCTR_level)) ;
(*EJCBCTR) = HUBBCTR_current;
 /* line 684: */
 /* line 686: */
FJCBCTR = GHCBCTR_level+=((3-BJCBCTR_t)-BJCBCTR_t) ;
HUBBCTR_current = (*(&A_R1INDEX(DUBBCTR_streams,FJCBCTR)));
} 
else
{ 
 /* line 687: */
 /* line 688: */
if ( (BJCBCTR_t==VWBBCTR_linetype) )
{ 
XRIACTR_linenumber = A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
 /* line 689: */
WICBCTR_line_start = A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
 /* line 690: */
XICBCTR_line_length = A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
 /* line 691: */
YICBCTR_statement_number = 0;
 /* line 693: */
 /* line 694: */
IJCBCTR = (ZCHACTR_tracelevel(HJCBCTR)!=0);
if ( IJCBCTR )
{ /* line 695: */
IJCBCTR = ((XRIACTR_linenumber/100)>ZICBCTR_hundred_counter);
}
if ( IJCBCTR )
{ 
ZICBCTR_hundred_counter = (XRIACTR_linenumber/100);
 /* line 696: */
 /* line 697: */
 /* line 698: */
FUAAOSI_whole( XRIACTR_linenumber, 0, &MJCBCTR );
ISIACTR_typelineonterminal(A_VC_PLUS(A_VC_PLUS(LJCBCTR,MJCBCTR),NJCBCTR));
} 
 /* line 700: */
 /* line 701: */
 /* line 703: */
if ( BQIACTR_lineoption )
{ 
 /* line 704: */
 /* line 705: */
 /* line 706: */
 /* line 708: */
MDMACTR_writecstream(A_HVEC(PJCBCTR,A_UNITE(OJCBCTR,mode4,4,EIAACTR_cnewline),A68_213 ), NSLACTR_codestream(VRLACTR_currentlevel()));
} 
else
{ 
 /* line 709: */
 /* line 710: */
UJCBCTR = SJCBCTR ;
QJCBCTR.data[0] = A_UNITE(TJCBCTR,mode2,2,UJCBCTR);
 /* line 711: */
FUAAOSI_whole( XRIACTR_linenumber, 0, &VJCBCTR );
QJCBCTR.data[1] = A_UNITE(WJCBCTR,mode2,2,VJCBCTR);
 /* line 712: */
AKCBCTR = YJCBCTR ;
QJCBCTR.data[2] = A_UNITE(ZJCBCTR,mode2,2,AKCBCTR);
QJCBCTR.data[3] = A_UNITE(BKCBCTR,mode4,4,EIAACTR_cnewline);
 /* line 713: */
 /* line 714: */
MDMACTR_writecstream(A_HISVEC(CKCBCTR,QJCBCTR,4,A68_213 ), NSLACTR_codestream(VRLACTR_currentlevel()));
} 
 /* line 716: */
 /* line 717: */
if ( FHCBCTR_printstream )
{ 
 /* line 718: */
 /* line 719: */
FUAAOSI_whole( XRIACTR_linenumber, 0, &DKCBCTR );
A_CALLPROC(MSIACTR_list,(A_VC_PLUS(DKCBCTR,A_HVEC(EKCBCTR,':',A68_CHAR ))),(A_VC_PLUS(DKCBCTR,A_HVEC(EKCBCTR,':',A68_CHAR )),(MSIACTR_list).nonlocals));
} 
} 
else
{ 
 /* line 720: */
 /* line 721: */
if ( (BJCBCTR_t==WWBBCTR_maptype) )
{ 
YICBCTR_statement_number+=1;
 /* line 722: */
 /* line 723: */
if ( FHCBCTR_printstream )
{ 
 /* line 724: */
 /* line 725: */
FUAAOSI_whole( XRIACTR_linenumber, 0, &FKCBCTR );
A_CALLPROC(MSIACTR_list,(A_VC_PLUS(FKCBCTR,A_HVEC(GKCBCTR,':',A68_CHAR ))),(A_VC_PLUS(FKCBCTR,A_HVEC(GKCBCTR,':',A68_CHAR )),(MSIACTR_list).nonlocals));
} 
} 
else
{ 
 /* line 726: */
 /* line 727: */
WXIACTR_assert(IKCBCTR, A68_FALSE);
} 
} 
} 
}
 /* line 728: */
 /* line 729: */
JKCBCTR = BJCBCTR_t;
} 
A_PROC_EXIT(nexttype);
return( JKCBCTR );
} 
#undef NL

A_STATIC A68_VOID  MKCBCTR_nextxchars(A68_INT  Suggestedsize, A68_INT  Insertion, A68_VC  *ReturnedValue)
{ 
A68_INT  NKCBCTR_type;
A68_INT  OKCBCTR_used;
A68_INT  PKCBCTR_resultsize;
A68_104  RKCBCTR_generator;   /* proc value of non-global proc */
A68_VC  XKCBCTR;  /* avoid structure result */
A68_VC  WKCBCTR_result;
A68_VC  YKCBCTR;  /* clause result */
A68_VC  ZKCBCTR;  /* avoid structure result */
A68_VC  ALCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  BLCBCTR;  /* avoid structure result */
A68_VC  CLCBCTR;  /* avoid structure result */
A68_VC  DLCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ELCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  FLCBCTR;  /* avoid structure result */
A68_VC  GLCBCTR;  /* avoid structure result */
A68_VC  HLCBCTR;  /* avoid structure result */
A68_VC  ILCBCTR_string;
A68_INT  JLCBCTR_size;
A68_INT  KLCBCTR_newused;
A68_INT  LLCBCTR_newresultsize;
A68_104  NLCBCTR_generator;   /* proc value of non-global proc */
A68_VC  SLCBCTR;  /* avoid structure result */
A68_VC  TLCBCTR_newresult;
A68_VC  ULCBCTR;  /* OPERATORS - trim index */
A68_VC  VLCBCTR;  /* OPERATORS - trim index */
A68_VC  WLCBCTR;  /* YIELD */
A68_VC  XLCBCTR;  /* OPERATORS - assign op */
A68_VC  YLCBCTR;  /* OPERATORS - trim index */
A68_VC  ZLCBCTR;  /* YIELD */
A68_BOOL  AMCBCTR;  /* clause result */
A68_VC  DMCBCTR;  /* clause result */
A68_VC  EMCBCTR;  /* OPERATORS - trim index */
A_PROC_ENTRY(nextxchars);
 /* line 745: */
 /* line 746: */
{ 
NKCBCTR_type = AJCBCTR_nexttype();
 /* line 747: */
OKCBCTR_used = 0;
PKCBCTR_resultsize = Suggestedsize;
 /* line 748: */
A_CLOSURE( RKCBCTR_generator, SKCBCTR_generator, TKCBCTR_generator );
(( TKCBCTR_generator * ) ( RKCBCTR_generator.nonlocals )) -> PKCBCTR_resultsize = (&PKCBCTR_resultsize);
A_CALLPROC(RKCBCTR_generator,(A68_FALSE, &XKCBCTR),(A68_FALSE, &XKCBCTR,(RKCBCTR_generator).nonlocals));
WKCBCTR_result = XKCBCTR;
 /* line 750: */
for ( ;; )
{ 
 /* line 752: */
 /* line 753: */
switch ( Insertion )
{ 
case 1: 
 /* line 754: */
SICBCTR_nextstring(  &ZKCBCTR );
YKCBCTR = A_VC_PLUS(ZKCBCTR,A_HVEC(ALCBCTR,VPBAOSI_newline_char,A68_CHAR ));
break;
case 2: 
 /* line 755: */
SICBCTR_nextstring(  &BLCBCTR );
DRJACTR_replacecontrolchars( BLCBCTR, &CLCBCTR );
YKCBCTR = A_VC_PLUS(A_VC_PLUS(CLCBCTR,A_HVEC(DLCBCTR,'\\',A68_CHAR )),A_HVEC(ELCBCTR,VPBAOSI_newline_char,A68_CHAR ));
break;
case 3: 
 /* line 756: */
 /* line 757: */
SICBCTR_nextstring(  &FLCBCTR );
DRJACTR_replacecontrolchars( FLCBCTR, &GLCBCTR );
YKCBCTR = GLCBCTR;
break;
default: 
SICBCTR_nextstring(  &HLCBCTR );
YKCBCTR = HLCBCTR;
break;
} 
ILCBCTR_string = YKCBCTR;
 /* line 758: */
JLCBCTR_size = ILCBCTR_string.upb;
 /* line 759: */
KLCBCTR_newused = (OKCBCTR_used+JLCBCTR_size);
 /* line 761: */
 /* line 762: */
 /* line 763: */
if ( (KLCBCTR_newused>PKCBCTR_resultsize) )
{ 
LLCBCTR_newresultsize = (2*DRAAOSI_max(KLCBCTR_newused, PKCBCTR_resultsize));
 /* line 764: */
A_CLOSURE( NLCBCTR_generator, OLCBCTR_generator, PLCBCTR_generator );
(( PLCBCTR_generator * ) ( NLCBCTR_generator.nonlocals )) -> LLCBCTR_newresultsize = LLCBCTR_newresultsize;
A_CALLPROC(NLCBCTR_generator,(A68_FALSE, &SLCBCTR),(A68_FALSE, &SLCBCTR,(NLCBCTR_generator).nonlocals));
TLCBCTR_newresult = SLCBCTR;
 /* line 765: */
WLCBCTR = A_VTRIM(ULCBCTR,(TLCBCTR_newresult),A_VTSCRIPT(&(ULCBCTR.upb),(TLCBCTR_newresult).upb,1,OKCBCTR_used)) ;
XLCBCTR = A_VTRIM(VLCBCTR,(WKCBCTR_result),A_VTSCRIPT(&(VLCBCTR.upb),(WKCBCTR_result).upb,1,OKCBCTR_used)) ;
A_VASSIGN2(XLCBCTR,WLCBCTR,A68_CHAR );
 /* line 766: */
WKCBCTR_result = TLCBCTR_newresult;
 /* line 767: */
 /* line 768: */
PKCBCTR_resultsize = LLCBCTR_newresultsize;
} 
 /* line 769: */
ZLCBCTR = A_VTRIM(YLCBCTR,(WKCBCTR_result),A_VTSCRIPT(&(YLCBCTR.upb),(WKCBCTR_result).upb,(OKCBCTR_used+1),KLCBCTR_newused)) ;
A_VASSIGN2(ILCBCTR_string,ZLCBCTR,A68_CHAR );
 /* line 770: */
OKCBCTR_used = KLCBCTR_newused;
 /* line 771: */
 /* line 772: */
 /* line 773: */
AMCBCTR = (NKCBCTR_type==XWBBCTR_notlastxcharstype);
if ( !AMCBCTR ) break;
 /* line 774: */
NKCBCTR_type = AJCBCTR_nexttype();
}
 /* line 775: */
WXIACTR_assert(CMCBCTR, (NKCBCTR_type==YWBBCTR_lastxcharstype));
 /* line 776: */
 /* line 777: */
DMCBCTR = A_VTRIM(EMCBCTR,(WKCBCTR_result),A_VTSCRIPT(&(EMCBCTR.upb),(WKCBCTR_result).upb,1,OKCBCTR_used));
} 
A_PROC_EXIT(nextxchars);
*ReturnedValue = (DMCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  FMCBCTR_nextstreamimperative(A68_187  *ReturnedValue)
{ 
A68_INT  GMCBCTR_type;
A68_VC  IMCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  JMCBCTR;  /* avoid structure result */
A68_201  LMCBCTR_s;
A68_INT * MMCBCTR;  /* YIELD */
A68_INT * NMCBCTR;  /* YIELD */
A68_BITS * OMCBCTR;  /* YIELD */
A68_INT * PMCBCTR;  /* YIELD */
A68_187  QMCBCTR;  /* clause result */
A68_187  RMCBCTR;  /* OPERATORS - mode -> union mode */
A68_203  SMCBCTR_t;
A68_INT * TMCBCTR;  /* YIELD */
A68_BITS * UMCBCTR;  /* YIELD */
A68_187  VMCBCTR;  /* OPERATORS - mode -> union mode */
A68_201  WMCBCTR_semi;
A68_INT * XMCBCTR;  /* YIELD */
A68_BITS * YMCBCTR;  /* YIELD */
A68_187  ZMCBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  ANCBCTR_loadtype;
A68_INT  BNCBCTR;  /* clause result */
A68_187  CNCBCTR;  /* OPERATORS - mode -> union mode */
A68_BOOL  DNCBCTR;  /* YIELD */
A68_187  ENCBCTR;  /* OPERATORS - mode -> union mode */
A68_BOOL  FNCBCTR;  /* YIELD */
A68_147  GNCBCTR_e;
A68_INT * HNCBCTR;  /* YIELD */
A68_187  INCBCTR;  /* OPERATORS - mode -> union mode */
A68_147  JNCBCTR_s;
A68_INT * KNCBCTR;  /* YIELD */
A68_187  LNCBCTR;  /* OPERATORS - mode -> union mode */
A68_147  MNCBCTR_n;
A68_INT * NNCBCTR;  /* YIELD */
A68_187  ONCBCTR;  /* OPERATORS - mode -> union mode */
A68_200  PNCBCTR_c;
A68_INT * QNCBCTR;  /* YIELD */
A68_INT * RNCBCTR;  /* YIELD */
A68_VC  SNCBCTR;  /* avoid structure result */
A68_VC * TNCBCTR;  /* YIELD */
A68_187  UNCBCTR;  /* OPERATORS - mode -> union mode */
A68_187  VNCBCTR;  /* OPERATORS - mode -> union mode */
A68_187  WNCBCTR;  /* OPERATORS - mode -> union mode */
A68_187  XNCBCTR;  /* OPERATORS - mode -> union mode */
A68_107  YNCBCTR_l;
A68_INT * ZNCBCTR;  /* YIELD */
A68_187  AOCBCTR;  /* OPERATORS - mode -> union mode */
A68_189  BOCBCTR_a;
A68_INT * COCBCTR;  /* YIELD */
A68_VC  DOCBCTR;  /* avoid structure result */
A68_VC * EOCBCTR;  /* YIELD */
A68_187  FOCBCTR;  /* OPERATORS - mode -> union mode */
A68_188  GOCBCTR_c;
A68_VC  HOCBCTR;  /* avoid structure result */
A68_VC * IOCBCTR;  /* YIELD */
A68_187  JOCBCTR;  /* OPERATORS - mode -> union mode */
A68_191  KOCBCTR_s;
A68_INT * LOCBCTR;  /* YIELD */
A68_VC  MOCBCTR;  /* avoid structure result */
A68_VC * NOCBCTR;  /* YIELD */
A68_187  OOCBCTR;  /* OPERATORS - mode -> union mode */
A68_187  POCBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  QOCBCTR;  /* YIELD */
A68_187  ROCBCTR;  /* OPERATORS - mode -> union mode */
A68_187  SOCBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  TOCBCTR;  /* YIELD */
A68_187  UOCBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  VOCBCTR_mode;
A68_141  WOCBCTR;  /* collateral clause result */
A68_VC  XOCBCTR;  /* avoid structure result */
A68_187  YOCBCTR;  /* OPERATORS - mode -> union mode */
A68_192  ZOCBCTR_o;
A68_INT * APCBCTR;  /* YIELD */
A68_INT * BPCBCTR;  /* YIELD */
A68_INT * CPCBCTR;  /* YIELD */
A68_INT  DPCBCTR_n;
A68_BOOL  EPCBCTR;  /* clause result */
A68_BOOL  FPCBCTR;  /* clause result */
A68_INT  GPCBCTR;  /* ADICOPS - MOD */
A68_INT  HPCBCTR;  /* ADICOPS - MOD */
A68_INT  IPCBCTR;  /* ADICOPS - MOD */
A68_203  JPCBCTR;  /* collateral clause result */
A68_187  KPCBCTR;  /* OPERATORS - mode -> union mode */
A68_187  LPCBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  MPCBCTR_miscellaneoustype;
A68_INT  NPCBCTR;  /* clause result */
A68_196  OPCBCTR_u;
A68_INT * PPCBCTR;  /* YIELD */
A68_BITS * QPCBCTR;  /* YIELD */
A68_INT * RPCBCTR;  /* YIELD */
A68_187  SPCBCTR;  /* OPERATORS - mode -> union mode */
A68_195  TPCBCTR_s;
A68_INT * UPCBCTR;  /* YIELD */
A68_VC  VPCBCTR;  /* avoid structure result */
A68_VC * WPCBCTR;  /* YIELD */
A68_INT * XPCBCTR;  /* YIELD */
A68_BOOL * YPCBCTR;  /* YIELD */
A68_187  ZPCBCTR;  /* OPERATORS - mode -> union mode */
A68_195  AQCBCTR_e;
A68_INT * BQCBCTR;  /* YIELD */
A68_VC  CQCBCTR;  /* OPERATORS - nil -> mode */
A68_VC * DQCBCTR;  /* YIELD */
A68_INT * EQCBCTR;  /* YIELD */
A68_BOOL * FQCBCTR;  /* YIELD */
A68_187  GQCBCTR;  /* OPERATORS - mode -> union mode */
A68_195  HQCBCTR_d;
A68_INT * IQCBCTR;  /* YIELD */
A68_VC  JQCBCTR;  /* OPERATORS - nil -> mode */
A68_VC * KQCBCTR;  /* YIELD */
A68_INT * LQCBCTR;  /* YIELD */
A68_BOOL * MQCBCTR;  /* YIELD */
A68_187  NQCBCTR;  /* OPERATORS - mode -> union mode */
A68_194  OQCBCTR_r;
A68_INT * PQCBCTR;  /* YIELD */
A68_INT * QQCBCTR;  /* YIELD */
A68_BITS * RQCBCTR;  /* YIELD */
A68_INT * SQCBCTR;  /* YIELD */
A68_VC  TQCBCTR;  /* avoid structure result */
A68_VC * UQCBCTR;  /* YIELD */
A68_187  VQCBCTR;  /* OPERATORS - mode -> union mode */
A68_187  YQCBCTR;  /* OPERATORS - mode -> union mode */
A68_187  ZQCBCTR;  /* OPERATORS - mode -> union mode */
A68_205  ARCBCTR_s;
A68_INT * BRCBCTR;  /* YIELD */
A68_INT * CRCBCTR;  /* YIELD */
A68_INT * DRCBCTR;  /* YIELD */
A68_187  ERCBCTR;  /* OPERATORS - mode -> union mode */
A68_197  FRCBCTR_c;
A68_INT * GRCBCTR;  /* YIELD */
A68_187  HRCBCTR;  /* OPERATORS - mode -> union mode */
A68_187  IRCBCTR;  /* OPERATORS - mode -> union mode */
A68_192  JRCBCTR_v;
A68_INT * KRCBCTR;  /* YIELD */
A68_INT * LRCBCTR;  /* YIELD */
A68_187  MRCBCTR;  /* OPERATORS - mode -> union mode */
A68_204  NRCBCTR_cl;
A68_INT * ORCBCTR;  /* YIELD */
A68_INT * PRCBCTR;  /* YIELD */
A68_293  RRCBCTR_generator;   /* proc value of non-global proc */
A68_186  WRCBCTR;  /* avoid structure result */
A68_186 * XRCBCTR;  /* YIELD */
A68_INT * YRCBCTR_actual;
A68_186  ZRCBCTR;  /* forall yield */
A68_INT  ASCBCTR;  /* forall loop counter */
A68_187  BSCBCTR;  /* OPERATORS - mode -> union mode */
A68_206  CSCBCTR_x;
A68_INT * DSCBCTR;  /* YIELD */
A68_304  FSCBCTR_generator;   /* proc value of non-global proc */
A68_207  KSCBCTR;  /* avoid structure result */
A68_207 * LSCBCTR;  /* YIELD */
A68_VC  MSCBCTR;  /* avoid structure result */
A68_VC * NSCBCTR;  /* YIELD */
A68_VC  OSCBCTR;  /* avoid structure result */
A68_VC * PSCBCTR;  /* YIELD */
A68_VC  QSCBCTR;  /* avoid structure result */
A68_VC * RSCBCTR;  /* YIELD */
A68_VC  SSCBCTR;  /* avoid structure result */
A68_VC * TSCBCTR;  /* YIELD */
A68_VC * USCBCTR_ysname;
A68_207  VSCBCTR;  /* forall yield */
A68_INT  WSCBCTR;  /* forall loop counter */
A68_VC  XSCBCTR;  /* avoid structure result */
A68_187  YSCBCTR;  /* OPERATORS - mode -> union mode */
A68_187  ZSCBCTR;  /* OPERATORS - mode -> union mode */
A68_155  ATCBCTR_w;
A68_INT * BTCBCTR;  /* YIELD */
A68_187  CTCBCTR;  /* OPERATORS - mode -> union mode */
A68_193  DTCBCTR_i;
A68_INT * ETCBCTR;  /* YIELD */
A68_INT * FTCBCTR;  /* YIELD */
A68_INT * GTCBCTR;  /* YIELD */
A68_VC  HTCBCTR;  /* avoid structure result */
A68_VC * ITCBCTR;  /* YIELD */
A68_187  JTCBCTR;  /* OPERATORS - mode -> union mode */
A68_202  KTCBCTR_s;
A68_INT * LTCBCTR;  /* YIELD */
A68_INT * MTCBCTR;  /* YIELD */
A68_BITS * NTCBCTR;  /* YIELD */
A68_INT * OTCBCTR;  /* YIELD */
A68_187  PTCBCTR;  /* OPERATORS - mode -> union mode */
A68_187  QTCBCTR_imperative;
A68_VC  RTCBCTR;  /* avoid structure result */
A68_VC  STCBCTR_string;
A68_VC  TTCBCTR;  /* OPERATORS - trim index */
A68_VC  UTCBCTR;  /* OPERATORS - trim index */
A68_187  VTCBCTR;  /* clause result */
A_PROC_ENTRY(nextstreamimperative);
{ 
GMCBCTR_type = AJCBCTR_nexttype();
 /* line 786: */
 /* line 787: */
if ( FHCBCTR_printstream )
{ 
 /* line 788: */
FUAAOSI_whole( GMCBCTR_type, (-3), &JMCBCTR );
A_CALLPROC(MSIACTR_list,(A_VC_PLUS(A_VC_PLUS(A_HVEC(IMCBCTR,'[',A68_CHAR ),JMCBCTR),KMCBCTR)),(A_VC_PLUS(A_VC_PLUS(A_HVEC(IMCBCTR,'[',A68_CHAR ),JMCBCTR),KMCBCTR),(MSIACTR_list).nonlocals));
} 
 /* line 790: */
 /* line 792: */
 /* line 793: */
 /* line 795: */
switch ( ((GMCBCTR_type/TWBBCTR_rangesize)+1) )
{ 
case 1: 
 /* line 796: */
 /* line 799: */
switch ( (GMCBCTR_type/UWBBCTR_subrangesize) )
{ 
case 1: 
{ 
MMCBCTR = (&((&LMCBCTR_s)->Fn)) ;
(*MMCBCTR) = (GMCBCTR_type-IWBBCTR_separatorbase);
 /* line 800: */
NMCBCTR = (&((&LMCBCTR_s)->Mode)) ;
(*NMCBCTR) = A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
OMCBCTR = (&((&LMCBCTR_s)->Props)) ;
(*OMCBCTR) = (A68_BITS )A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
 /* line 801: */
PMCBCTR = (&((&LMCBCTR_s)->Param)) ;
(*PMCBCTR) = A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
 /* line 802: */
 /* line 803: */
 /* line 806: */
QMCBCTR = A_UNITE(RMCBCTR,mode20,20,LMCBCTR_s);
} 
break;
case 2: 
{ 
TMCBCTR = (&((&SMCBCTR_t)->Fn)) ;
(*TMCBCTR) = (GMCBCTR_type-JWBBCTR_terminatorbase);
 /* line 807: */
A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
UMCBCTR = (&((&SMCBCTR_t)->Props)) ;
(*UMCBCTR) = (A68_BITS )A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
 /* line 808: */
 /* line 809: */
 /* line 812: */
QMCBCTR = A_UNITE(VMCBCTR,mode22,22,SMCBCTR_t);
} 
break;
case 3: 
{ 
XMCBCTR = (&((&WMCBCTR_semi)->Fn)) ;
(*XMCBCTR) = WBAACTR_semifn;
 /* line 813: */
YMCBCTR = (&((&WMCBCTR_semi)->Props)) ;
(*YMCBCTR) = (A68_BITS )((GMCBCTR_type-KWBBCTR_semibase)*2048);
 /* line 814: */
 /* line 815: */
 /* line 816: */
 /* line 819: */
QMCBCTR = A_UNITE(ZMCBCTR,mode20,20,WMCBCTR_semi);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
case 2: 
 /* line 820: */
{ 
ANCBCTR_loadtype = (GMCBCTR_type-LWBBCTR_loadbase);
 /* line 821: */
 /* line 822: */
 /* line 824: */
BNCBCTR = ((ANCBCTR_loadtype/UWBBCTR_subrangesize)+1);
switch ( BNCBCTR )
{ 
case 1: 
 /* line 825: */
 /* line 826: */
switch ( ANCBCTR_loadtype )
{ 
case 1: 
 /* line 828: */
DNCBCTR = A68_FALSE ;
QMCBCTR = A_UNITE(CNCBCTR,mode3,3,DNCBCTR);
break;
case 2: 
 /* line 830: */
FNCBCTR = A68_TRUE ;
QMCBCTR = A_UNITE(ENCBCTR,mode3,3,FNCBCTR);
break;
case 3: 
{ 
HNCBCTR = (&((&GNCBCTR_e)->Nse)) ;
(*HNCBCTR) = ZAAACTR_emptyfn;
 /* line 832: */
QMCBCTR = A_UNITE(INCBCTR,mode1,1,GNCBCTR_e);
} 
break;
case 4: 
{ 
KNCBCTR = (&((&JNCBCTR_s)->Nse)) ;
(*KNCBCTR) = ABAACTR_skipfn;
 /* line 834: */
QMCBCTR = A_UNITE(LNCBCTR,mode1,1,JNCBCTR_s);
} 
break;
case 5: 
{ 
NNCBCTR = (&((&MNCBCTR_n)->Nse)) ;
(*NNCBCTR) = BBAACTR_nilfn;
 /* line 836: */
QMCBCTR = A_UNITE(ONCBCTR,mode1,1,MNCBCTR_n);
} 
break;
case 6: 
{ 
QNCBCTR = (&((&PNCBCTR_c)->Mode)) ;
(*QNCBCTR) = A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
RNCBCTR = (&((&PNCBCTR_c)->Number)) ;
(*RNCBCTR) = A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
MKCBCTR_nextxchars( 128, 1, &SNCBCTR );
TNCBCTR = (&((&PNCBCTR_c)->Insert)) ;
(*TNCBCTR) = SNCBCTR;
 /* line 838: */
QMCBCTR = A_UNITE(UNCBCTR,mode19,19,PNCBCTR_c);
} 
break;
case 7: 
 /* line 840: */
SXIACTR_terminalerror(600) ;
QMCBCTR = A_EMPTY(VNCBCTR,26);
break;
case 8: 
 /* line 842: */
SXIACTR_terminalerror(600) ;
QMCBCTR = A_EMPTY(WNCBCTR,26);
break;
case 9: 
 /* line 844: */
SXIACTR_terminalerror(600) ;
QMCBCTR = A_EMPTY(XNCBCTR,26);
break;
case 10: 
{ 
ZNCBCTR = (&((&YNCBCTR_l)->Labno)) ;
(*ZNCBCTR) = A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
 /* line 846: */
QMCBCTR = A_UNITE(AOCBCTR,mode5,5,YNCBCTR_l);
} 
break;
case 11: 
{ 
COCBCTR = (&((&BOCBCTR_a)->Mode)) ;
(*COCBCTR) = A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
MKCBCTR_nextxchars( 400, 1, &DOCBCTR );
EOCBCTR = (&((&BOCBCTR_a)->String)) ;
(*EOCBCTR) = DOCBCTR;
 /* line 848: */
QMCBCTR = A_UNITE(FOCBCTR,mode7,7,BOCBCTR_a);
} 
break;
case 12: 
{ 
MKCBCTR_nextxchars( 1, 3, &HOCBCTR );
IOCBCTR = (&((&GOCBCTR_c)->Representation)) ;
(*IOCBCTR) = HOCBCTR;
 /* line 850: */
QMCBCTR = A_UNITE(JOCBCTR,mode4,4,GOCBCTR_c);
} 
break;
case 13: 
{ 
LOCBCTR = (&((&KOCBCTR_s)->Mode)) ;
(*LOCBCTR) = A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
MKCBCTR_nextxchars( 160, 0, &MOCBCTR );
NOCBCTR = (&((&KOCBCTR_s)->Denotation)) ;
(*NOCBCTR) = MOCBCTR;
 /* line 853: */
QMCBCTR = A_UNITE(OOCBCTR,mode9,9,KOCBCTR_s);
} 
break;
case 14: 
 /* line 855: */
QOCBCTR = A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals)) ;
QMCBCTR = A_UNITE(POCBCTR,mode2,2,QOCBCTR);
break;
case 15: 
 /* line 856: */
 /* line 859: */
SXIACTR_terminalerror(600) ;
QMCBCTR = A_EMPTY(ROCBCTR,26);
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
case 2: 
 /* line 860: */
 /* line 861: */
 /* line 862: */
if ( (GMCBCTR_type==80) )
{ 
 /* line 863: */
TOCBCTR = A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals)) ;
QMCBCTR = A_UNITE(SOCBCTR,mode2,2,TOCBCTR);
} 
else
{ 
 /* line 864: */
 /* line 867: */
SXIACTR_terminalerror(600) ;
QMCBCTR = A_EMPTY(UOCBCTR,26);
} 
break;
case 3: 
{ 
VOCBCTR_mode = (GMCBCTR_type-NWBBCTR_numberbase);
WOCBCTR.Mode = VOCBCTR_mode;
SICBCTR_nextstring(  &XOCBCTR );
WOCBCTR.Nu = XOCBCTR;
 /* line 868: */
 /* line 871: */
QMCBCTR = A_UNITE(YOCBCTR,mode6,6,WOCBCTR);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
break;
case 3: 
 /* line 872: */
{ 
 /* line 873: */
APCBCTR = (&((&ZOCBCTR_o)->Fn)) ;
(*APCBCTR) = (GMCBCTR_type-OWBBCTR_operbase);
 /* line 874: */
BPCBCTR = (&((&ZOCBCTR_o)->Mode)) ;
(*BPCBCTR) = A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
 /* line 875: */
CPCBCTR = (&((&ZOCBCTR_o)->Param)) ;
(*CPCBCTR) = A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
 /* line 876: */
 /* line 877: */
{ 
DPCBCTR_n = ((*(&((&ZOCBCTR_o)->Param)))/16);
 /* line 878: */
EPCBCTR = ((DPCBCTR_n==4)|(DPCBCTR_n==5));
} 
 /* line 879: */
HPCBCTR = (*(&((&ZOCBCTR_o)->Param))) ;
IPCBCTR = 16 ;
FPCBCTR = ((((*(&((&ZOCBCTR_o)->Fn)))==10)&EPCBCTR)&(A_MOD(HPCBCTR,IPCBCTR,GPCBCTR)==1));
if ( FPCBCTR )
{ 
JPCBCTR.Fn = ICAACTR_optboolfn;
 /* line 880: */
JPCBCTR.Props = 0X0U;
 /* line 881: */
QMCBCTR = A_UNITE(KPCBCTR,mode22,22,JPCBCTR);
} 
else
{ 
 /* line 884: */
QMCBCTR = A_UNITE(LPCBCTR,mode10,10,ZOCBCTR_o);
} 
} 
break;
case 4: 
 /* line 885: */
{ 
MPCBCTR_miscellaneoustype = (GMCBCTR_type-PWBBCTR_miscellaneousbase);
 /* line 886: */
 /* line 887: */
 /* line 889: */
NPCBCTR = ((MPCBCTR_miscellaneoustype/UWBBCTR_subrangesize)+1);
switch ( NPCBCTR )
{ 
case 1: 
 /* line 890: */
 /* line 892: */
switch ( MPCBCTR_miscellaneoustype )
{ 
case 1: 
{ 
PPCBCTR = (&((&OPCBCTR_u)->Mode)) ;
(*PPCBCTR) = A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
QPCBCTR = (&((&OPCBCTR_u)->Props)) ;
(*QPCBCTR) = (A68_BITS )A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
RPCBCTR = (&((&OPCBCTR_u)->Param)) ;
(*RPCBCTR) = A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
 /* line 895: */
QMCBCTR = A_UNITE(SPCBCTR,mode15,15,OPCBCTR_u);
} 
break;
case 2: 
{ 
UPCBCTR = (&((&TPCBCTR_s)->Labno)) ;
(*UPCBCTR) = A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
SICBCTR_nextstring(  &VPCBCTR );
WPCBCTR = (&((&TPCBCTR_s)->Name)) ;
(*WPCBCTR) = VPCBCTR;
 /* line 896: */
XPCBCTR = (&((&TPCBCTR_s)->Status)) ;
(*XPCBCTR) = 0;
YPCBCTR = (&((&TPCBCTR_s)->Notsetting)) ;
(*YPCBCTR) = A68_TRUE;
 /* line 897: */
 /* line 898: */
 /* line 901: */
QMCBCTR = A_UNITE(ZPCBCTR,mode14,14,TPCBCTR_s);
} 
break;
case 3: 
{ 
BQCBCTR = (&((&AQCBCTR_e)->Labno)) ;
(*BQCBCTR) = A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
DQCBCTR = (&((&AQCBCTR_e)->Name)) ;
(*DQCBCTR) = A_VVAC(CQCBCTR);
 /* line 902: */
EQCBCTR = (&((&AQCBCTR_e)->Status)) ;
(*EQCBCTR) = A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
FQCBCTR = (&((&AQCBCTR_e)->Notsetting)) ;
(*FQCBCTR) = A68_TRUE;
 /* line 903: */
 /* line 904: */
 /* line 907: */
QMCBCTR = A_UNITE(GQCBCTR,mode14,14,AQCBCTR_e);
} 
break;
case 4: 
{ 
IQCBCTR = (&((&HQCBCTR_d)->Labno)) ;
(*IQCBCTR) = A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
KQCBCTR = (&((&HQCBCTR_d)->Name)) ;
(*KQCBCTR) = A_VVAC(JQCBCTR);
 /* line 908: */
LQCBCTR = (&((&HQCBCTR_d)->Status)) ;
(*LQCBCTR) = 0;
MQCBCTR = (&((&HQCBCTR_d)->Notsetting)) ;
(*MQCBCTR) = A68_FALSE;
 /* line 909: */
 /* line 910: */
 /* line 913: */
QMCBCTR = A_UNITE(NQCBCTR,mode14,14,HQCBCTR_d);
} 
break;
case 5: 
{ 
PQCBCTR = (&((&OQCBCTR_r)->Rdenno)) ;
(*PQCBCTR) = A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
QQCBCTR = (&((&OQCBCTR_r)->Mode)) ;
(*QQCBCTR) = A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
RQCBCTR = (&((&OQCBCTR_r)->Props)) ;
(*RQCBCTR) = (A68_BITS )A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
 /* line 914: */
SQCBCTR = (&((&OQCBCTR_r)->Maxname)) ;
(*SQCBCTR) = A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
SICBCTR_nextstring(  &TQCBCTR );
UQCBCTR = (&((&OQCBCTR_r)->Name)) ;
(*UQCBCTR) = TQCBCTR;
 /* line 915: */
 /* line 916: */
 /* line 918: */
QMCBCTR = A_UNITE(VQCBCTR,mode12,12,OQCBCTR_r);
} 
break;
case 6: 
 /* line 920: */
WXIACTR_assert(XQCBCTR, A68_FALSE) ;
QMCBCTR = A_EMPTY(YQCBCTR,26);
break;
case 7: 
 /* line 923: */
SXIACTR_terminalerror(600) ;
QMCBCTR = A_EMPTY(ZQCBCTR,26);
break;
case 8: 
 /* line 924: */
if ( WMOACTR_composition )
{ 
BRCBCTR = (&((&ARCBCTR_s)->Moduleno)) ;
(*BRCBCTR) = A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
CRCBCTR = (&((&ARCBCTR_s)->I)) ;
(*CRCBCTR) = A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
DRCBCTR = (&((&ARCBCTR_s)->J)) ;
(*DRCBCTR) = A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
 /* line 925: */
QMCBCTR = A_UNITE(ERCBCTR,mode24,24,ARCBCTR_s);
} 
else
{ 
A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
GRCBCTR = (&((&FRCBCTR_c)->I)) ;
(*GRCBCTR) = A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
 /* line 926: */
 /* line 928: */
QMCBCTR = A_UNITE(HRCBCTR,mode16,16,FRCBCTR_c);
} 
break;
case 9: 
 /* line 930: */
SXIACTR_terminalerror(600) ;
QMCBCTR = A_EMPTY(IRCBCTR,26);
break;
case 10: 
{ 
KRCBCTR = (&((&JRCBCTR_v)->Fn)) ;
(*KRCBCTR) = LGAACTR_voidfn;
LRCBCTR = (&((&JRCBCTR_v)->Mode)) ;
(*LRCBCTR) = UEAACTR_voidmode;
 /* line 933: */
QMCBCTR = A_UNITE(MRCBCTR,mode10,10,JRCBCTR_v);
} 
break;
case 11: 
{ 
ORCBCTR = (&((&NRCBCTR_cl)->Body)) ;
(*ORCBCTR) = A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
PRCBCTR = (&((&NRCBCTR_cl)->Moduleno)) ;
(*PRCBCTR) = A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
 /* line 934: */
A_CLOSURE( RRCBCTR_generator, SRCBCTR_generator, TRCBCTR_generator );
A_CALLPROC(RRCBCTR_generator,(A68_FALSE, &WRCBCTR),(A68_FALSE, &WRCBCTR,(RRCBCTR_generator).nonlocals));
XRCBCTR = (&((&NRCBCTR_cl)->Actuals)) ;
(*XRCBCTR) = WRCBCTR;
AJCBCTR_nexttype();
 /* line 935: */
ZRCBCTR = (*(&((&NRCBCTR_cl)->Actuals))) ;
ASCBCTR = ZRCBCTR.dim[0].upb - ZRCBCTR.dim[0].lwb;
YRCBCTR_actual = ZRCBCTR.data;
for (;ASCBCTR-- >= 0;
(YRCBCTR_actual += ZRCBCTR.dim[0].stride
) )
{
(*YRCBCTR_actual) = A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
}
 /* line 936: */
 /* line 937: */
 /* line 940: */
QMCBCTR = A_UNITE(BSCBCTR,mode23,23,NRCBCTR_cl);
} 
break;
case 12: 
{ 
DSCBCTR = (&((&CSCBCTR_x)->Moduleno)) ;
(*DSCBCTR) = A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
 /* line 941: */
A_CLOSURE( FSCBCTR_generator, GSCBCTR_generator, HSCBCTR_generator );
A_CALLPROC(FSCBCTR_generator,(A68_FALSE, &KSCBCTR),(A68_FALSE, &KSCBCTR,(FSCBCTR_generator).nonlocals));
LSCBCTR = (&((&CSCBCTR_x)->Ysnames)) ;
(*LSCBCTR) = KSCBCTR;
SICBCTR_nextstring(  &MSCBCTR );
NSCBCTR = (&((&CSCBCTR_x)->Name)) ;
(*NSCBCTR) = MSCBCTR;
 /* line 942: */
SICBCTR_nextstring(  &OSCBCTR );
PSCBCTR = (&((&CSCBCTR_x)->Uname)) ;
(*PSCBCTR) = OSCBCTR;
SICBCTR_nextstring(  &QSCBCTR );
RSCBCTR = (&((&CSCBCTR_x)->Lname)) ;
(*RSCBCTR) = QSCBCTR;
 /* line 943: */
SICBCTR_nextstring(  &SSCBCTR );
TSCBCTR = (&((&CSCBCTR_x)->Gname)) ;
(*TSCBCTR) = SSCBCTR;
 /* line 944: */
VSCBCTR = (*(&((&CSCBCTR_x)->Ysnames))) ;
WSCBCTR = VSCBCTR.dim[0].upb - VSCBCTR.dim[0].lwb;
USCBCTR_ysname = VSCBCTR.data;
for (;WSCBCTR-- >= 0;
(USCBCTR_ysname += VSCBCTR.dim[0].stride
) )
{
SICBCTR_nextstring(  &XSCBCTR );
(*USCBCTR_ysname) = XSCBCTR;
}
 /* line 945: */
 /* line 946: */
 /* line 947: */
 /* line 948: */
QMCBCTR = A_UNITE(YSCBCTR,mode25,25,CSCBCTR_x);
} 
break;
default: 
 /* line 949: */
 /* line 952: */
SXIACTR_terminalerror(601) ;
QMCBCTR = A_EMPTY(ZSCBCTR,26);
break;
} 
break;
case 2: 
{ 
BTCBCTR = (&((&ATCBCTR_w)->W)) ;
(*BTCBCTR) = (GMCBCTR_type-QWBBCTR_warnbase);
 /* line 955: */
QMCBCTR = A_UNITE(CTCBCTR,mode13,13,ATCBCTR_w);
} 
break;
case 3: 
{ 
ETCBCTR = (&((&DTCBCTR_i)->Type)) ;
(*ETCBCTR) = (GMCBCTR_type-RWBBCTR_iddecbase);
 /* line 956: */
FTCBCTR = (&((&DTCBCTR_i)->Mode)) ;
(*FTCBCTR) = A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
GTCBCTR = (&((&DTCBCTR_i)->Decno)) ;
(*GTCBCTR) = A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
 /* line 957: */
SICBCTR_nextstring(  &HTCBCTR );
ITCBCTR = (&((&DTCBCTR_i)->Name)) ;
(*ITCBCTR) = HTCBCTR;
 /* line 958: */
 /* line 959: */
 /* line 962: */
QMCBCTR = A_UNITE(JTCBCTR,mode11,11,DTCBCTR_i);
} 
break;
case 4: 
{ 
LTCBCTR = (&((&KTCBCTR_s)->Fn)) ;
(*LTCBCTR) = (GMCBCTR_type-SWBBCTR_starterbase);
 /* line 963: */
MTCBCTR = (&((&KTCBCTR_s)->Mode)) ;
(*MTCBCTR) = A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
NTCBCTR = (&((&KTCBCTR_s)->Props)) ;
(*NTCBCTR) = (A68_BITS )A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
 /* line 964: */
OTCBCTR = (&((&KTCBCTR_s)->Resultmode)) ;
(*OTCBCTR) = A_CALLPROC(QICBCTR_next,(),((QICBCTR_next).nonlocals));
 /* line 965: */
 /* line 966: */
 /* line 967: */
QMCBCTR = A_UNITE(PTCBCTR,mode21,21,KTCBCTR_s);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
QTCBCTR_imperative = QMCBCTR;
 /* line 970: */
 /* line 971: */
 /* line 972: */
if ( FHCBCTR_printstream )
{ 
JAXACTR_imperativemnemonic( QTCBCTR_imperative, &RTCBCTR );
STCBCTR_string = RTCBCTR;
 /* line 974: */
 /* line 968: */
 /* line 975: */
if ( (STCBCTR_string.upb<120) )
{ 
 /* line 976: */
 /* line 977: */
A_CALLPROC(MSIACTR_list,(STCBCTR_string),(STCBCTR_string,(MSIACTR_list).nonlocals));
} 
else
{ 
A_CALLPROC(MSIACTR_list,(A_VTRIM(TTCBCTR,(STCBCTR_string),A_VTSCRIPT(&(TTCBCTR.upb),(STCBCTR_string).upb,1,120))),(A_VTRIM(TTCBCTR,(STCBCTR_string),A_VTSCRIPT(&(TTCBCTR.upb),(STCBCTR_string).upb,1,120)),(MSIACTR_list).nonlocals));
 /* line 978: */
 /* line 979: */
 /* line 980: */
A_CALLPROC(MSIACTR_list,(A_VC_PLUS(A_C_TIMES(' ',35),A_VTRIM(UTCBCTR,(STCBCTR_string),A_VTSCRIPT(&(UTCBCTR.upb),(STCBCTR_string).upb,121,(STCBCTR_string).upb)))),(A_VC_PLUS(A_C_TIMES(' ',35),A_VTRIM(UTCBCTR,(STCBCTR_string),A_VTSCRIPT(&(UTCBCTR.upb),(STCBCTR_string).upb,121,(STCBCTR_string).upb))),(MSIACTR_list).nonlocals));
} 
} 
 /* line 981: */
 /* line 982: */
VTCBCTR = QTCBCTR_imperative;
} 
A_PROC_EXIT(nextstreamimperative);
*ReturnedValue = (VTCBCTR);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 5: */
 /* line 6: */
 /* line 7: */
 /* line 8: */
 /* line 10: */
int main (int argc, char **argv)
{ 

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","./mfiles","-staredit","59LR","./a68files/a68toc.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/uniquenameserver.m","./mfiles/moduletracer.m","./mfiles/modules.m","./mfiles/modes.m","./mfiles/mnemonics.m","./mfiles/lookup.m","./mfiles/incoperfn.m","./mfiles/incmode.m","./mfiles/incinstallation.m","./mfiles/incimperatives.m","./mfiles/incid.m","./mfiles/environment.m","./mfiles/environ.m","./mfiles/denotations.m","./mfiles/coutput.m","./mfiles/compiler.m","./mfiles/rscompiler.m","./mfiles/centities.m","/u/model/ella/osif/assoc/mfiles/osif.m","/u/model/ella/osif/assoc/mfiles/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_157  STBBCTR;  /* collateral clause result */
A68_276  UTBBCTR;  /* collateral clause result */
A68_VC  VTBBCTR;  /* OPERATORS - nil -> mode */
A68_277  AUBBCTR;  /* avoid structure result */
A68_281  EUBBCTR;  /* OPERATORS - istruct -> vector */
A68_281  FUBBCTR;  /* OPERATORS - trim index */
A68_280  GUBBCTR;  /* OPERATORS - trim index */
A68_280  KUBBCTR;  /* OPERATORS - trim index */
A68_280  LUBBCTR;  /* forall yield */
A68_INT  MUBBCTR;  /* forall loop counter */
A68_277  RUBBCTR;  /* avoid structure result */
A68_277 * SUBBCTR;  /* YIELD */
A68_277  TUBBCTR;  /* OPERATORS - simple index */
A68_INT * UUBBCTR;  /* YIELD */
A68_INT  VUBBCTR;  /* YIELD */
A68_VC  WUBBCTR;  /* OPERATORS - istruct -> vector */
A68_282 * XUBBCTR;  /* OPERATORS - istruct -> vector */
A68_VC * YUBBCTR;  /* YIELD */
A68_VC * ZUBBCTR;  /* YIELD */
A68_280  BVBBCTR;  /* OPERATORS - trim index */
A68_280  CVBBCTR;  /* forall yield */
A68_INT  DVBBCTR;  /* forall loop counter */
A68_INT  JVBBCTR;  /* YIELD */
A68_283  LXBBCTR;  /* avoid structure result */
A68_182  HYBBCTR;  /* avoid structure result */
A68_285  IYBBCTR;  /* collateral clause result */
A68_182  JYBBCTR;  /* OPERATORS - trim index */
A68_182  KYBBCTR;  /* OPERATORS - istruct to row */
A68_182  LYBBCTR;  /* OPERATORS - trim index */
A68_182  MYBBCTR;  /* OPERATORS - trim index */
A68_182  NYBBCTR;  /* YIELD */
A68_182  OYBBCTR;  /* OPERATORS - assign op */
A68_182  QYBBCTR;  /* OPERATORS - trim index */
A68_182  RYBBCTR;  /* forall yield */
A68_INT  SYBBCTR;  /* forall loop counter */
A68_183  TYBBCTR;  /* collateral clause result */
A68_183  UYBBCTR;  /* collateral clause result */
A68_INT  VYBBCTR;  /* YIELD */
A68_183 * WYBBCTR;  /* YIELD */
A68_BOOL  XYBBCTR;  /* clause result */
A68_183  YYBBCTR;  /* collateral clause result */
A68_INT  ZYBBCTR;  /* YIELD */
A68_183 * AZBBCTR;  /* YIELD */
A68_BOOL  BZBBCTR;  /* clause result */
A68_BOOL  CZBBCTR;  /* clause result */
A68_INT  EZBBCTR;  /* to part of loop */
A68_183  FZBBCTR;  /* collateral clause result */
A68_183 * GZBBCTR;  /* YIELD */
A68_183  HZBBCTR;  /* collateral clause result */
A68_INT  IZBBCTR;  /* YIELD */
A68_183 * JZBBCTR;  /* YIELD */
A68_181  SGCBCTR;  /* clause result */
A68_181  TGCBCTR;  /* procedure value */
A68_181  UGCBCTR;  /* procedure value */
A68_175  VGCBCTR;  /* procedure value */
A68_176  WGCBCTR;  /* procedure value */
A68_177  XGCBCTR;  /* procedure value */
A68_178  YGCBCTR;  /* procedure value */
A68_179  ZGCBCTR;  /* procedure value */
A68_180  AHCBCTR;  /* procedure value */
A68_VC  DHCBCTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  EHCBCTR;  /* clause result */
A68_INT  JHCBCTR;  /* forall loop counter */
A68_VC  KHCBCTR;  /* OPERATORS - nil -> mode */
A68_VC  LHCBCTR;  /* != */
A68_VC  MHCBCTR;  /* != */
A68_VC  RHCBCTR;  /* OPERATORS - trim index */
A68_VC  SHCBCTR;  /* OPERATORS - trim index */
A68_VC * THCBCTR;  /* YIELD */
A68_INT  WHCBCTR;  /* forall loop counter */
A68_VC  YHCBCTR;  /* avoid structure result */
A68_VC  AICBCTR;  /* avoid structure result */
A68_INT  BICBCTR;  /* YIELD */
A68_87  RICBCTR;  /* procedure value */
A68_185  WTCBCTR;  /* procedure value */
A68_305  XTCBCTR;  /* collateral clause result */
A68_213  AUCBCTR;  /* OPERATORS - mode -> union mode */
A68_VC  BUCBCTR;  /* YIELD */
A68_213  CUCBCTR;  /* OPERATORS - mode -> union mode */
A68_212  DUCBCTR;  /* OPERATORS - istruct -> vector */
A68_302  EUCBCTR;  /* collateral clause result */
A68_213  HUCBCTR;  /* OPERATORS - mode -> union mode */
A68_VC  IUCBCTR;  /* YIELD */
A68_213  JUCBCTR;  /* OPERATORS - mode -> union mode */
A68_213  MUCBCTR;  /* OPERATORS - mode -> union mode */
A68_VC  NUCBCTR;  /* YIELD */
A68_213  OUCBCTR;  /* OPERATORS - mode -> union mode */
A68_212  PUCBCTR;  /* OPERATORS - istruct -> vector */
A68_213  QUCBCTR;  /* OPERATORS - mode -> union mode */
A68_212  RUCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_213  SUCBCTR;  /* OPERATORS - mode -> union mode */
A68_212  TUCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_213  UUCBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  VUCBCTR;  /* YIELD */
A68_212  WUCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_213  XUCBCTR;  /* OPERATORS - mode -> union mode */
A68_212  YUCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_213  ZUCBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  AVCBCTR;  /* YIELD */
A68_212  BVCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  DVCBCTR;  /* to part of loop */
A68_213  EVCBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  FVCBCTR;  /* YIELD */
A68_212  GVCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_213  HVCBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  IVCBCTR;  /* YIELD */
A68_212  JVCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_GC_STARTUP(argc);
BAAALIB();   /* USE a68config */
RHMACTR();   /* USE uniquenameserver */
BCHACTR();   /* USE moduletracer */
MLOACTR();   /* USE modules */
DNMACTR();   /* USE modes */
HWWACTR();   /* USE mnemonics */
TTJACTR();   /* USE lookup */
XFAACTR();   /* USE incoperfn */
ZDAACTR();   /* USE incmode */
ODAACTR();   /* USE incinstallation */
UAAACTR();   /* USE incimperatives */
BAAACTR();   /* USE incid */
HPIACTR();   /* USE environment */
BPLACTR();   /* USE environ */
LLJACTR();   /* USE denotations */
PTLACTR();   /* USE coutput */
NYABCTR();   /* USE compiler */
ZJAACTR();   /* USE rscompiler */
THAACTR();   /* USE centities */
VSCAOSI();   /* USE osif */
WPAAOSI();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ctrans/assoc/./a68files/a68toc.a68";
A_config.translation_time = "Tue Apr  4 09:33:08 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "NTBBCTR (from seed file) ";
A_config.spec_change_time = "no spec";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
#ifdef A_prelude
A_prelude(argc,argv);
#endif
A_PROC_ENTRY(MAIN);
{ 
UEAALIB_a68config(LGAALIB_configinfo, RTBBCTR);
 /* line 52: */
STBBCTR.Norden = 0;
STBBCTR.Nomodes = 0;
STBBCTR.Nolabs = 0;
STBBCTR.Nodecnos = HAAACTR_minidno;
STBBCTR.Nomodules = 0;
STBBCTR.Nolibinds = 0;
TTBBCTR_xsizes = STBBCTR;
 /* line 59: */
 /* line 64: */
 /* line 66: */
UTBBCTR.Streambuffer = A_VVAC(VTBBCTR);
UTBBCTR.Streamptr = 0;
XTBBCTR_generator( A68_FALSE, &AUBBCTR );
UTBBCTR.Buffers = AUBBCTR;
UTBBCTR.Currentbuffer = 0;
BUBBCTR_unsetstream = UTBBCTR;
 /* line 68: */
 /* line 69: */
FUBBCTR = A_ISVEC(EUBBCTR,(&CUBBCTR_streams_area),20,A68_276 ) ;
DUBBCTR_streams = A_VTRIM(GUBBCTR,(FUBBCTR),A_VRTSCRIPT(&(GUBBCTR.dim[0]),(FUBBCTR).upb,1,(FUBBCTR).upb,0));
 /* line 71: */
 /* line 73: */
 /* line 75: */
 /* line 76: */
LUBBCTR = A_R1TRIM(KUBBCTR,(DUBBCTR_streams),A_RTSCRIPT(&(KUBBCTR.dim[0]),&((DUBBCTR_streams).dim[0]),(DUBBCTR_streams).dim[0].lwb,IUBBCTR_fixedstreams,1)) ;
MUBBCTR = LUBBCTR.dim[0].upb - LUBBCTR.dim[0].lwb;
JUBBCTR_stream = LUBBCTR.data;
for (;MUBBCTR-- >= 0;
(JUBBCTR_stream += LUBBCTR.dim[0].stride
) )
{
 /* line 77: */
 /* line 78: */
 /* line 81: */
OUBBCTR_generator( A68_FALSE, &RUBBCTR );
SUBBCTR = (&(JUBBCTR_stream->Buffers)) ;
TUBBCTR = (*SUBBCTR) = RUBBCTR ;
UUBBCTR = (&(JUBBCTR_stream->Currentbuffer)) ;
VUBBCTR = (*UUBBCTR) = 1 ;
XUBBCTR = A_LOC(A68_282 ) ;
YUBBCTR = (&A_VINDEX(TUBBCTR,VUBBCTR)) ;
ZUBBCTR = (&(JUBBCTR_stream->Streambuffer)) ;
(*ZUBBCTR) = (*YUBBCTR) = A_ISVEC(WUBBCTR,XUBBCTR,11,A68_CHAR );
}
 /* line 83: */
CVBBCTR = A_R1TRIM(BVBBCTR,(DUBBCTR_streams),A_RTSCRIPT(&(BVBBCTR.dim[0]),&((DUBBCTR_streams).dim[0]),(IUBBCTR_fixedstreams+1),(DUBBCTR_streams).dim[0].upb,1)) ;
DVBBCTR = CVBBCTR.dim[0].upb - CVBBCTR.dim[0].lwb;
AVBBCTR_stream = CVBBCTR.data;
for (;DVBBCTR-- >= 0;
(AVBBCTR_stream += CVBBCTR.dim[0].stride
) )
{
(*AVBBCTR_stream) = BUBBCTR_unsetstream;
}
 /* line 84: */
HUBBCTR_current = BUBBCTR_unsetstream;
 /* line 86: */
EVBBCTR_streambuffer = (&((&HUBBCTR_current)->Streambuffer));
 /* line 87: */
FVBBCTR_strptr = (&((&HUBBCTR_current)->Streamptr));
 /* line 88: */
GVBBCTR_currentbuffer = (&((&HUBBCTR_current)->Currentbuffer));
 /* line 89: */
HVBBCTR_buffers = (&((&HUBBCTR_current)->Buffers));
 /* line 91: */
JVBBCTR = 0 ;
IVBBCTR_curstradd = (&A_R1INDEX(DUBBCTR_streams,JVBBCTR));
 /* line 93: */
 /* line 97: */
 /* line 98: */
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
 /* line 137: */
 /* line 138: */
 /* line 142: */
{ 
JYIACTR_setparams();
 /* line 144: */
CXBBCTR_inputfile = FQBAOSI_open_file(XQIACTR_sourcefilename, PNBAOSI_read_access, XLBAOSI_ignore_msg);
 /* line 146: */
if ( (CXBBCTR_inputfile==(A68_59 *)A68_NIL) )
{ 
SXIACTR_terminalerror(250);
} 
 /* line 148: */
DXBBCTR_line_start = 1;
 /* line 149: */
EXBBCTR_line_length = 0;
 /* line 151: */
FXBBCTR_line_pending = A68_FALSE;
 /* line 153: */
XRIACTR_linenumber = 0;
 /* line 155: */
HXBBCTR_generator( A68_TRUE, &LXBBCTR );
KXBBCTR_flexinputline = LXBBCTR;
 /* line 157: */
 /* line 211: */
DYBBCTR_generator( A68_TRUE, &HYBBCTR );
GYBBCTR_charset = HYBBCTR;
 /* line 212: */
 /* line 214: */
IYBBCTR.data[0].Type = 2;
IYBBCTR.data[0].Value = 37;
IYBBCTR.data[1].Type = 1;
IYBBCTR.data[1].Value = 100;
IYBBCTR.data[2].Type = 1;
IYBBCTR.data[2].Value = 100;
IYBBCTR.data[3].Type = 1;
IYBBCTR.data[3].Value = 100;
IYBBCTR.data[4].Type = 1;
IYBBCTR.data[4].Value = 100;
IYBBCTR.data[5].Type = 1;
IYBBCTR.data[5].Value = 100;
IYBBCTR.data[6].Type = 1;
IYBBCTR.data[6].Value = 100;
IYBBCTR.data[7].Type = 1;
 /* line 215: */
IYBBCTR.data[7].Value = 100;
IYBBCTR.data[8].Type = 1;
IYBBCTR.data[8].Value = 100;
IYBBCTR.data[9].Type = 2;
IYBBCTR.data[9].Value = 37;
IYBBCTR.data[10].Type = 2;
IYBBCTR.data[10].Value = 37;
IYBBCTR.data[11].Type = 2;
IYBBCTR.data[11].Value = 37;
IYBBCTR.data[12].Type = 2;
IYBBCTR.data[12].Value = 37;
IYBBCTR.data[13].Type = 1;
IYBBCTR.data[13].Value = 100;
IYBBCTR.data[14].Type = 1;
IYBBCTR.data[14].Value = 100;
IYBBCTR.data[15].Type = 1;
 /* line 216: */
IYBBCTR.data[15].Value = 100;
IYBBCTR.data[16].Type = 1;
IYBBCTR.data[16].Value = 100;
IYBBCTR.data[17].Type = 1;
IYBBCTR.data[17].Value = 100;
IYBBCTR.data[18].Type = 1;
IYBBCTR.data[18].Value = 100;
IYBBCTR.data[19].Type = 1;
IYBBCTR.data[19].Value = 100;
IYBBCTR.data[20].Type = 1;
IYBBCTR.data[20].Value = 100;
IYBBCTR.data[21].Type = 1;
IYBBCTR.data[21].Value = 100;
IYBBCTR.data[22].Type = 1;
IYBBCTR.data[22].Value = 100;
IYBBCTR.data[23].Type = 1;
 /* line 217: */
IYBBCTR.data[23].Value = 100;
IYBBCTR.data[24].Type = 1;
IYBBCTR.data[24].Value = 100;
IYBBCTR.data[25].Type = 1;
IYBBCTR.data[25].Value = 100;
IYBBCTR.data[26].Type = 1;
IYBBCTR.data[26].Value = 100;
IYBBCTR.data[27].Type = 1;
IYBBCTR.data[27].Value = 100;
IYBBCTR.data[28].Type = 1;
IYBBCTR.data[28].Value = 100;
IYBBCTR.data[29].Type = 1;
IYBBCTR.data[29].Value = 100;
IYBBCTR.data[30].Type = 1;
IYBBCTR.data[30].Value = 100;
IYBBCTR.data[31].Type = 1;
 /* line 218: */
IYBBCTR.data[31].Value = 100;
IYBBCTR.data[32].Type = 2;
IYBBCTR.data[32].Value = 37;
IYBBCTR.data[33].Type = 20;
IYBBCTR.data[33].Value = 45;
IYBBCTR.data[34].Type = 5;
IYBBCTR.data[34].Value = 100;
IYBBCTR.data[35].Type = 20;
IYBBCTR.data[35].Value = 62;
IYBBCTR.data[36].Type = 20;
IYBBCTR.data[36].Value = 160;
IYBBCTR.data[37].Type = 21;
IYBBCTR.data[37].Value = 214;
IYBBCTR.data[38].Type = 21;
IYBBCTR.data[38].Value = 229;
IYBBCTR.data[39].Type = 1;
 /* line 219: */
IYBBCTR.data[39].Value = 100;
IYBBCTR.data[40].Type = 20;
IYBBCTR.data[40].Value = 50;
IYBBCTR.data[41].Type = 20;
IYBBCTR.data[41].Value = 54;
IYBBCTR.data[42].Type = 22;
IYBBCTR.data[42].Value = 212;
IYBBCTR.data[43].Type = 21;
IYBBCTR.data[43].Value = 200;
IYBBCTR.data[44].Type = 20;
IYBBCTR.data[44].Value = 128;
IYBBCTR.data[45].Type = 21;
IYBBCTR.data[45].Value = 201;
IYBBCTR.data[46].Type = 20;
IYBBCTR.data[46].Value = 130;
IYBBCTR.data[47].Type = 22;
 /* line 220: */
IYBBCTR.data[47].Value = 213;
IYBBCTR.data[48].Type = 4;
IYBBCTR.data[48].Value = 0;
IYBBCTR.data[49].Type = 4;
IYBBCTR.data[49].Value = 1;
IYBBCTR.data[50].Type = 4;
IYBBCTR.data[50].Value = 2;
IYBBCTR.data[51].Type = 4;
IYBBCTR.data[51].Value = 3;
IYBBCTR.data[52].Type = 4;
IYBBCTR.data[52].Value = 4;
IYBBCTR.data[53].Type = 4;
IYBBCTR.data[53].Value = 5;
IYBBCTR.data[54].Type = 4;
IYBBCTR.data[54].Value = 6;
IYBBCTR.data[55].Type = 4;
 /* line 221: */
IYBBCTR.data[55].Value = 7;
IYBBCTR.data[56].Type = 4;
IYBBCTR.data[56].Value = 8;
IYBBCTR.data[57].Type = 4;
IYBBCTR.data[57].Value = 9;
IYBBCTR.data[58].Type = 22;
IYBBCTR.data[58].Value = 84;
IYBBCTR.data[59].Type = 20;
IYBBCTR.data[59].Value = 111;
IYBBCTR.data[60].Type = 22;
IYBBCTR.data[60].Value = 206;
IYBBCTR.data[61].Type = 22;
IYBBCTR.data[61].Value = 210;
IYBBCTR.data[62].Type = 22;
IYBBCTR.data[62].Value = 207;
IYBBCTR.data[63].Type = 21;
 /* line 222: */
IYBBCTR.data[63].Value = 217;
IYBBCTR.data[64].Type = 20;
IYBBCTR.data[64].Value = 154;
IYBBCTR.data[65].Type = 6;
IYBBCTR.data[65].Value = (-98);
IYBBCTR.data[66].Type = 6;
IYBBCTR.data[66].Value = (-99);
IYBBCTR.data[67].Type = 6;
IYBBCTR.data[67].Value = (-100);
IYBBCTR.data[68].Type = 6;
IYBBCTR.data[68].Value = (-101);
IYBBCTR.data[69].Type = 6;
IYBBCTR.data[69].Value = (-102);
IYBBCTR.data[70].Type = 6;
IYBBCTR.data[70].Value = (-103);
IYBBCTR.data[71].Type = 6;
 /* line 223: */
IYBBCTR.data[71].Value = (-104);
IYBBCTR.data[72].Type = 6;
IYBBCTR.data[72].Value = (-105);
IYBBCTR.data[73].Type = 6;
IYBBCTR.data[73].Value = (-106);
IYBBCTR.data[74].Type = 6;
IYBBCTR.data[74].Value = (-107);
IYBBCTR.data[75].Type = 6;
IYBBCTR.data[75].Value = (-108);
IYBBCTR.data[76].Type = 6;
IYBBCTR.data[76].Value = (-109);
IYBBCTR.data[77].Type = 6;
IYBBCTR.data[77].Value = (-110);
IYBBCTR.data[78].Type = 6;
IYBBCTR.data[78].Value = (-111);
IYBBCTR.data[79].Type = 6;
 /* line 224: */
IYBBCTR.data[79].Value = (-112);
IYBBCTR.data[80].Type = 6;
IYBBCTR.data[80].Value = (-113);
IYBBCTR.data[81].Type = 6;
IYBBCTR.data[81].Value = (-114);
IYBBCTR.data[82].Type = 6;
IYBBCTR.data[82].Value = (-115);
IYBBCTR.data[83].Type = 6;
IYBBCTR.data[83].Value = (-116);
IYBBCTR.data[84].Type = 6;
IYBBCTR.data[84].Value = (-117);
IYBBCTR.data[85].Type = 6;
IYBBCTR.data[85].Value = (-118);
IYBBCTR.data[86].Type = 6;
IYBBCTR.data[86].Value = (-119);
IYBBCTR.data[87].Type = 6;
 /* line 225: */
IYBBCTR.data[87].Value = (-120);
IYBBCTR.data[88].Type = 6;
IYBBCTR.data[88].Value = (-121);
IYBBCTR.data[89].Type = 6;
IYBBCTR.data[89].Value = (-122);
IYBBCTR.data[90].Type = 6;
IYBBCTR.data[90].Value = (-123);
IYBBCTR.data[91].Type = 20;
IYBBCTR.data[91].Value = 159;
IYBBCTR.data[92].Type = 20;
IYBBCTR.data[92].Value = 175;
IYBBCTR.data[93].Type = 20;
IYBBCTR.data[93].Value = 161;
IYBBCTR.data[94].Type = 20;
IYBBCTR.data[94].Value = 233;
IYBBCTR.data[95].Type = 3;
 /* line 226: */
IYBBCTR.data[95].Value = 36;
IYBBCTR.data[96].Type = 1;
IYBBCTR.data[96].Value = 100;
IYBBCTR.data[97].Type = 3;
IYBBCTR.data[97].Value = 10;
IYBBCTR.data[98].Type = 3;
IYBBCTR.data[98].Value = 11;
IYBBCTR.data[99].Type = 3;
IYBBCTR.data[99].Value = 12;
IYBBCTR.data[100].Type = 3;
IYBBCTR.data[100].Value = 13;
IYBBCTR.data[101].Type = 3;
IYBBCTR.data[101].Value = 14;
IYBBCTR.data[102].Type = 3;
IYBBCTR.data[102].Value = 15;
IYBBCTR.data[103].Type = 3;
 /* line 227: */
IYBBCTR.data[103].Value = 16;
IYBBCTR.data[104].Type = 3;
IYBBCTR.data[104].Value = 17;
IYBBCTR.data[105].Type = 3;
IYBBCTR.data[105].Value = 18;
IYBBCTR.data[106].Type = 3;
IYBBCTR.data[106].Value = 19;
IYBBCTR.data[107].Type = 3;
IYBBCTR.data[107].Value = 20;
IYBBCTR.data[108].Type = 3;
IYBBCTR.data[108].Value = 21;
IYBBCTR.data[109].Type = 3;
IYBBCTR.data[109].Value = 22;
IYBBCTR.data[110].Type = 3;
IYBBCTR.data[110].Value = 23;
IYBBCTR.data[111].Type = 3;
 /* line 228: */
IYBBCTR.data[111].Value = 24;
IYBBCTR.data[112].Type = 3;
IYBBCTR.data[112].Value = 25;
IYBBCTR.data[113].Type = 3;
IYBBCTR.data[113].Value = 26;
IYBBCTR.data[114].Type = 3;
IYBBCTR.data[114].Value = 27;
IYBBCTR.data[115].Type = 3;
IYBBCTR.data[115].Value = 28;
IYBBCTR.data[116].Type = 3;
IYBBCTR.data[116].Value = 29;
IYBBCTR.data[117].Type = 3;
IYBBCTR.data[117].Value = 30;
IYBBCTR.data[118].Type = 3;
IYBBCTR.data[118].Value = 31;
IYBBCTR.data[119].Type = 3;
 /* line 229: */
IYBBCTR.data[119].Value = 32;
IYBBCTR.data[120].Type = 3;
IYBBCTR.data[120].Value = 33;
IYBBCTR.data[121].Type = 3;
IYBBCTR.data[121].Value = 34;
IYBBCTR.data[122].Type = 3;
IYBBCTR.data[122].Value = 35;
IYBBCTR.data[123].Type = 20;
IYBBCTR.data[123].Value = 67;
IYBBCTR.data[124].Type = 20;
IYBBCTR.data[124].Value = 45;
IYBBCTR.data[125].Type = 20;
IYBBCTR.data[125].Value = 68;
IYBBCTR.data[126].Type = 1;
IYBBCTR.data[126].Value = 100;
IYBBCTR.data[127].Type = 1;
IYBBCTR.data[127].Value = 100;
LYBBCTR = A_HIS1ARR(KYBBCTR,IYBBCTR,A68_183 ,128) ;
NYBBCTR = A_R1TRIM(JYBBCTR,(GYBBCTR_charset),A_RTSCRIPT(&(JYBBCTR.dim[0]),&((GYBBCTR_charset).dim[0]),(GYBBCTR_charset).dim[0].lwb,127,0)) ;
OYBBCTR = A_R1TRIM(MYBBCTR,(LYBBCTR),A_RTSCRIPT(&(MYBBCTR.dim[0]),&((LYBBCTR).dim[0]),(LYBBCTR).dim[0].lwb,(LYBBCTR).dim[0].upb,0)) ;
A_R1ASSIGN2(OYBBCTR,NYBBCTR,A68_183 );
 /* line 231: */
 /* line 232: */
RYBBCTR = A_R1TRIM(QYBBCTR,(GYBBCTR_charset),A_RTSCRIPT(&(QYBBCTR.dim[0]),&((GYBBCTR_charset).dim[0]),128,(GYBBCTR_charset).dim[0].upb,1)) ;
SYBBCTR = RYBBCTR.dim[0].upb - RYBBCTR.dim[0].lwb;
PYBBCTR_c = RYBBCTR.data;
for (;SYBBCTR-- >= 0;
(PYBBCTR_c += RYBBCTR.dim[0].stride
) )
{
 /* line 233: */
TYBBCTR.Type = 1;
 /* line 234: */
TYBBCTR.Value = 100;
(*PYBBCTR_c) = TYBBCTR;
}
 /* line 236: */
if ( CQIACTR_dotoption )
{ 
UYBBCTR.Type = 7;
UYBBCTR.Value = 130;
VYBBCTR = (A68_INT)(unsigned char)'.' ;
WYBBCTR = (&A_R1INDEX(GYBBCTR_charset,VYBBCTR)) ;
(*WYBBCTR) = UYBBCTR;
XYBBCTR = A68_TRUE;
} 
else
{ 
XYBBCTR = A68_FALSE;
} 
if ( DQIACTR_quoteoption )
{ 
YYBBCTR.Type = 8;
YYBBCTR.Value = 100;
ZYBBCTR = (A68_INT)(unsigned char)'\'' ;
AZBBCTR = (&A_R1INDEX(GYBBCTR_charset,ZYBBCTR)) ;
(*AZBBCTR) = YYBBCTR;
BZBBCTR = A68_TRUE;
} 
else
{ 
BZBBCTR = A68_FALSE;
} 
 /* line 237: */
CZBBCTR = (XYBBCTR|BZBBCTR);
if ( CZBBCTR )
{ 
EZBBCTR = (A68_INT)(unsigned char)'Z';
for ( DZBBCTR_i = (A68_INT)(unsigned char)'A';
DZBBCTR_i <= EZBBCTR;
DZBBCTR_i += 1 )
{ 
 /* line 238: */
FZBBCTR.Type = 1;
FZBBCTR.Value = 100;
GZBBCTR = (&A_R1INDEX(GYBBCTR_charset,DZBBCTR_i)) ;
(*GZBBCTR) = FZBBCTR;
}
 /* line 239: */
} 
 /* line 240: */
if ( FQIACTR_tildeoption )
{ 
HZBBCTR.Type = 3;
HZBBCTR.Value = 36;
IZBBCTR = (A68_INT)(unsigned char)'~' ;
JZBBCTR = (&A_R1INDEX(GYBBCTR_charset,IZBBCTR)) ;
(*JZBBCTR) = HZBBCTR;
} 
 /* line 249: */
MZBBCTR_contval = LZBBCTR;
 /* line 251: */
NZBBCTR_upped = A68_FALSE;
 /* line 253: */
 /* line 254: */
PZBBCTR_xtmodulepending = A68_FALSE;
 /* line 256: */
QZBBCTR_timeschecked = A68_FALSE;
 /* line 258: */
 /* line 261: */
 /* line 567: */
NULACTR_initcoutput(YQIACTR_basenamesourcefile);
 /* line 570: */
 /* line 571: */
if ( IQIACTR_optbooloption )
{ 
TGCBCTR.fn.fn_global = HPKACTR_optboollookup;
TGCBCTR.nonlocals = A68_NIL;
SGCBCTR = TGCBCTR;
} 
else
{ 
UGCBCTR.fn.fn_global = SOKACTR_lookup;
UGCBCTR.nonlocals = A68_NIL;
SGCBCTR = UGCBCTR;
} 
VGCBCTR.fn.fn_global = OXBBCTR_input;
VGCBCTR.nonlocals = A68_NIL;
WGCBCTR.fn.fn_global = UZBBCTR_output;
WGCBCTR.nonlocals = A68_NIL;
XGCBCTR.fn.fn_global = EXIACTR_fault;
XGCBCTR.nonlocals = A68_NIL;
YGCBCTR.fn.fn_global = KDHACTR_message;
YGCBCTR.nonlocals = A68_NIL;
ZGCBCTR.fn.fn_global = ZZOACTR_givemoduledetails;
ZGCBCTR.nonlocals = A68_NIL;
AHCBCTR.fn.fn_global = ENOACTR_givespec;
AHCBCTR.nonlocals = A68_NIL;
URAACTR_compile(VGCBCTR, WGCBCTR, XGCBCTR, YGCBCTR, ZGCBCTR, AHCBCTR, SGCBCTR, GYBBCTR_charset);
 /* line 573: */
 /* line 574: */
{ 
 /* line 575: */
 /* line 576: */
 /* line 577: */
OXBBCTR_input(A_ISVEC(DHCBCTR,(&BHCBCTR_wasteline),160,A68_CHAR ), (&CHCBCTR_wastesize));
} 
 /* line 579: */
XQBAOSI_close_file(CXBBCTR_inputfile, XLBAOSI_ignore_msg);
 /* line 581: */
 /* line 582: */
 /* line 583: */
 /* line 587: */
EHCBCTR = (DSIACTR_greatestseverity<=2);
} 
if ( EHCBCTR )
{ 
XRIACTR_linenumber = 1;
 /* line 589: */
FHCBCTR_printstream = GQIACTR_streamoption;
 /* line 595: */
(*IVBBCTR_curstradd) = HUBBCTR_current;
 /* line 597: */
GHCBCTR_level = 0;
 /* line 598: */
HHCBCTR_s = 0;
 /* line 600: */
 /* line 601: */
JHCBCTR = DUBBCTR_streams.dim[0].upb - DUBBCTR_streams.dim[0].lwb;
IHCBCTR_stream = DUBBCTR_streams.data;
for (;JHCBCTR-- >= 0;
(IHCBCTR_stream += DUBBCTR_streams.dim[0].stride
) )
{
 /* line 602: */
 /* line 603: */
LHCBCTR = (*(&(IHCBCTR_stream->Streambuffer))) ;
MHCBCTR = A_VVAC(KHCBCTR) ;
if ( !(! A_VSTRUCTCOMP(LHCBCTR,MHCBCTR)) ) break;
NHCBCTR_streamptr = (&(IHCBCTR_stream->Streamptr));
 /* line 604: */
OHCBCTR_currentbuffer = (&(IHCBCTR_stream->Currentbuffer));
 /* line 605: */
PHCBCTR_streambuffer = (&(IHCBCTR_stream->Streambuffer));
 /* line 606: */
QHCBCTR_buffers = (&(IHCBCTR_stream->Buffers));
 /* line 608: */
RHCBCTR = (*(&A_VINDEX((*QHCBCTR_buffers),(*OHCBCTR_currentbuffer)))) ;
THCBCTR = (&A_VINDEX((*QHCBCTR_buffers),(*OHCBCTR_currentbuffer))) ;
(*THCBCTR) = A_VTRIM(SHCBCTR,(RHCBCTR),A_VTSCRIPT(&(SHCBCTR.upb),(RHCBCTR).upb,1,(*NHCBCTR_streamptr)));
 /* line 610: */
 /* line 611: */
 /* line 612: */
if ( FHCBCTR_printstream )
{ 
UHCBCTR_bytesused = 0;
 /* line 613: */
WHCBCTR = (*QHCBCTR_buffers).upb -1;
VHCBCTR_b = (*QHCBCTR_buffers).data;
for (;WHCBCTR-- >= 0;
(VHCBCTR_b++
) )
{
UHCBCTR_bytesused+=(*VHCBCTR_b).upb;
}
 /* line 614: */
 /* line 615: */
 /* line 616: */
FUAAOSI_whole( UHCBCTR_bytesused, (-7), &YHCBCTR );
FUAAOSI_whole( HHCBCTR_s, 0, &AICBCTR );
A_CALLPROC(MSIACTR_list,(A_VC_PLUS(A_VC_PLUS(YHCBCTR,ZHCBCTR),AICBCTR)),(A_VC_PLUS(A_VC_PLUS(YHCBCTR,ZHCBCTR),AICBCTR),(MSIACTR_list).nonlocals));
} 
 /* line 617: */
BICBCTR = (*OHCBCTR_currentbuffer) = 1 ;
(*PHCBCTR_streambuffer) = (*(&A_VINDEX((*QHCBCTR_buffers),BICBCTR)));
 /* line 618: */
(*NHCBCTR_streamptr) = 0;
 /* line 619: */
 /* line 620: */
HHCBCTR_s+=1;
}
 /* line 622: */
HUBBCTR_current = (*(&A_R1INDEX(DUBBCTR_streams,GHCBCTR_level)));
 /* line 624: */
 /* line 628: */
 /* line 632: */
 /* line 633: */
 /* line 645: */
 /* line 648: */
 /* line 650: */
 /* line 651: */
 /* line 658: */
RICBCTR.fn.fn_global = KICBCTR_nextint;
RICBCTR.nonlocals = A68_NIL;
QICBCTR_next = (RICBCTR);
 /* line 660: */
 /* line 661: */
 /* line 662: */
 /* line 669: */
WICBCTR_line_start = 0;
 /* line 670: */
XICBCTR_line_length = 0;
 /* line 671: */
YICBCTR_statement_number = 0;
 /* line 673: */
ZICBCTR_hundred_counter = (-1);
 /* line 675: */
 /* line 676: */
 /* line 677: */
 /* line 731: */
 /* line 779: */
 /* line 783: */
 /* line 784: */
 /* line 984: */
 /* line 985: */
 /* line 987: */
if ( (DSIACTR_greatestseverity<=2) )
{ 
 /* line 989: */
WTCBCTR.fn.fn_global = FMCBCTR_nextstreamimperative;
WTCBCTR.nonlocals = A68_NIL;
VYABCTR_translator(WTCBCTR, (&TTBBCTR_xsizes), UAPACTR_keptdecnos);
} 
 /* line 991: */
 /* line 992: */
 /* line 995: */
if ( (DSIACTR_greatestseverity<=2) )
{ 
GKMACTR_write_cfile_uname((*(&((&IYIACTR_config_info)->Nameseed))));
 /* line 997: */
BUCBCTR = ZTCBCTR ;
XTCBCTR.data[0] = A_UNITE(AUCBCTR,mode2,2,BUCBCTR);
XTCBCTR.data[1] = A_UNITE(CUCBCTR,mode4,4,EIAACTR_cnewline);
MDMACTR_writecstream(A_HISVEC(DUCBCTR,XTCBCTR,2,A68_213 ), ESLACTR_preamblestream);
 /* line 1000: */
HRPACTR_declareusedids();
 /* line 1030: */
IUCBCTR = GUCBCTR ;
EUCBCTR.data[0] = A_UNITE(HUCBCTR,mode2,2,IUCBCTR);
 /* line 1031: */
EUCBCTR.data[1] = A_UNITE(JUCBCTR,mode2,2,XQIACTR_sourcefilename);
NUCBCTR = LUCBCTR ;
EUCBCTR.data[2] = A_UNITE(MUCBCTR,mode2,2,NUCBCTR);
EUCBCTR.data[3] = A_UNITE(OUCBCTR,mode4,4,EIAACTR_cnewline);
MDMACTR_writecstream(A_HISVEC(PUCBCTR,EUCBCTR,4,A68_213 ), NSLACTR_codestream(0));
 /* line 1033: */
MDMACTR_writecstream(A_HVEC(RUCBCTR,A_UNITE(QUCBCTR,mode3,3,FSLACTR_modesstream),A68_213 ), ESLACTR_preamblestream);
 /* line 1034: */
MDMACTR_writecstream(A_HVEC(TUCBCTR,A_UNITE(SUCBCTR,mode3,3,GSLACTR_importsstream),A68_213 ), FSLACTR_modesstream);
 /* line 1035: */
VUCBCTR = KSLACTR_nonlocdecstream(0) ;
MDMACTR_writecstream(A_HVEC(WUCBCTR,A_UNITE(UUCBCTR,mode3,3,VUCBCTR),A68_213 ), GSLACTR_importsstream);
 /* line 1036: */
MDMACTR_writecstream(A_HVEC(YUCBCTR,A_UNITE(XUCBCTR,mode3,3,HSLACTR_externstream),A68_213 ), KSLACTR_nonlocdecstream(PPLACTR_highestlevel));
 /* line 1037: */
AVCBCTR = NSLACTR_codestream(PPLACTR_highestlevel) ;
MDMACTR_writecstream(A_HVEC(BVCBCTR,A_UNITE(ZUCBCTR,mode3,3,AVCBCTR),A68_213 ), HSLACTR_externstream);
 /* line 1039: */
 /* line 1040: */
 /* line 1041: */
if ( (PPLACTR_highestlevel>0) )
{ 
 /* line 1042: */
DVCBCTR = (PPLACTR_highestlevel-1);
for ( CVCBCTR_level = 0;
CVCBCTR_level <= DVCBCTR;
CVCBCTR_level += 1 )
{ 
 /* line 1043: */
FVCBCTR = KSLACTR_nonlocdecstream((CVCBCTR_level+1)) ;
MDMACTR_writecstream(A_HVEC(GVCBCTR,A_UNITE(EVCBCTR,mode3,3,FVCBCTR),A68_213 ), KSLACTR_nonlocdecstream(CVCBCTR_level));
 /* line 1044: */
 /* line 1045: */
IVCBCTR = NSLACTR_codestream(CVCBCTR_level) ;
MDMACTR_writecstream(A_HVEC(JVCBCTR,A_UNITE(HVCBCTR,mode3,3,IVCBCTR),A68_213 ), NSLACTR_codestream((CVCBCTR_level+1)));
}
 /* line 1046: */
} 
 /* line 1048: */
SDMACTR_closecoutput();
 /* line 1050: */
 /* line 1051: */
 /* line 1052: */
SMMACTR_closedownuniquenameserver();
} 
else
{ 
 /* line 1053: */
A_CALLPROC(GULACTR_purgeoutputfiles,(),((GULACTR_purgeoutputfiles).nonlocals));
} 
} 
 /* line 1055: */
RSIACTR_finishmessage();
 /* line 1057: */
 /* line 1058: */
 /* line 1059: */
if ( (DSIACTR_greatestseverity>2) )
{ 
 /* line 1061: */
 /* line 1062: */
NTIACTR_abort();
} 
} 
A_PROC_EXIT(MAIN);
#ifdef A_postlude
A_postlude;
#endif
return(0);
} 
#undef NL
/* end of translation of ./a68files/a68toc.a68 */
