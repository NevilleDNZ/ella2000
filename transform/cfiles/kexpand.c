
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
/* UNAME:JHLBTRN */
#include "Asupport.h"
struct A68t31{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t31  A68_31 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t32{
A68_INT  Status;
A_PAD_INT(PAD_1)
};
typedef struct A68t32  A68_32 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_BOOL ,A68t33,(struct A68t32 ,struct A68t32 ),(struct A68t32 ,struct A68t32 ,void *));
typedef struct A68t33  A68_33 ;    /* PROC(MODE32,MODE32) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t35);
typedef struct A68t35  A68_35 ;    /* STRUCT 4 CHAR */
struct A68t34{
struct A68t35  Access;
A_PAD_ISTRUCT(A68_35 ,PAD_2)
};
typedef struct A68t34  A68_34 ;    /* STRUCT(MODE35)  */
struct A68t37 ;

A_PROCEDURE(struct A68t31 *,A68t36,(A68_VC ,struct A68t34 ,struct A68t37 ),(A68_VC ,struct A68t34 ,struct A68t37 ,void *));
typedef struct A68t36  A68_36 ;    /* PROC(MODE26,MODE34,MODE37) REF MODE31 */
struct A68t38 ;
struct A68t39 ;

A_PROCEDURE(A68_VOID ,A68t37,(struct A68t38 ,struct A68t39 ),(struct A68t38 ,struct A68t39 ,void *));
typedef struct A68t37  A68_37 ;    /* PROC(MODE38,MODE39) VOID */
struct A68t38{
A68_INT  Number;
A_PAD_INT(PAD_3)
struct A68t40 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_4)
};
typedef struct A68t38  A68_38 ;    /* STRUCT(INT,REF MODE40,BITS)  */
A_VECTOR(A68_VC ,A68t39);
typedef struct A68t39  A68_39 ;    /* VECTOR [] MODE26 */
A_VECTOR(struct A68t42 ,A68t41);
typedef struct A68t41  A68_41 ;    /* VECTOR [] MODE42 */
struct A68t42{
struct A68t38  Msgno;
A68_VC  Text;
};
typedef struct A68t42  A68_42 ;    /* STRUCT(MODE38,REF MODE26)  */
struct A68t40{
A68_VC  Name;
struct A68t41  Messages;
};
typedef struct A68t40  A68_40 ;    /* STRUCT(REF MODE26,REF MODE41)  */

A_PROCEDURE(A68_VOID ,A68t43,(struct A68t31 *,struct A68t37 ),(struct A68t31 *,struct A68t37 ,void *));
typedef struct A68t43  A68_43 ;    /* PROC(REF MODE31,MODE37) VOID */

A_PROCEDURE(A68_VOID ,A68t44,(struct A68t31 *,A68_VC *),(struct A68t31 *,A68_VC *,void *));
typedef struct A68t44  A68_44 ;    /* PROC(REF MODE31) MODE26 */

A_PROCEDURE(A68_VOID ,A68t45,(struct A68t31 *,A68_VC ,A68_INT *,struct A68t37 ,struct A68t32 *),(struct A68t31 *,A68_VC ,A68_INT *,struct A68t37 ,struct A68t32 *,void *));
typedef struct A68t45  A68_45 ;    /* PROC(REF MODE31,REF MODE26,REF INT,MODE37) MODE32 */

A_PROCEDURE(A68_VOID ,A68t46,(struct A68t31 *,A68_VC ,struct A68t37 ,struct A68t32 *),(struct A68t31 *,A68_VC ,struct A68t37 ,struct A68t32 *,void *));
typedef struct A68t46  A68_46 ;    /* PROC(REF MODE31,MODE26,MODE37) MODE32 */
struct A68t47{
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
typedef struct A68t47  A68_47 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t49 ;

A_PROCEDURE(struct A68t47 *,A68t48,(struct A68t49 ,struct A68t37 ),(struct A68t49 ,struct A68t37 ,void *));
typedef struct A68t48  A68_48 ;    /* PROC(MODE49,MODE37) REF MODE47 */
struct A68t49 { A68_INT mode; union {
struct A68t31 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t49  A68_49 ;    /* UNION(REF MODE31,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t50,(struct A68t31 *,A68_LINT *,struct A68t37 ,struct A68t32 *),(struct A68t31 *,A68_LINT *,struct A68t37 ,struct A68t32 *,void *));
typedef struct A68t50  A68_50 ;    /* PROC(REF MODE31,REF LONG INT,MODE37) MODE32 */

A_PROCEDURE(A68_VOID ,A68t51,(struct A68t31 *,A68_LINT ,struct A68t37 ,struct A68t32 *),(struct A68t31 *,A68_LINT ,struct A68t37 ,struct A68t32 *,void *));
typedef struct A68t51  A68_51 ;    /* PROC(REF MODE31,LONG INT,MODE37) MODE32 */

A_PROCEDURE(A68_VOID ,A68t52,(struct A68t31 *,struct A68t37 ,struct A68t32 *),(struct A68t31 *,struct A68t37 ,struct A68t32 *,void *));
typedef struct A68t52  A68_52 ;    /* PROC(REF MODE31,MODE37) MODE32 */

A_PROCEDURE(A68_VOID ,A68t53,(A68_VC ,struct A68t37 ,struct A68t32 *),(A68_VC ,struct A68t37 ,struct A68t32 *,void *));
typedef struct A68t53  A68_53 ;    /* PROC(MODE26,MODE37) MODE32 */

A_PROCEDURE(A68_VOID ,A68t54,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t54  A68_54 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t55,(A68_INT ),(A68_INT ,void *));
typedef struct A68t55  A68_55 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_LINT ,A68t56,(void),(void *));
typedef struct A68t56  A68_56 ;    /* PROC LONG INT */

A_PROCEDURE(A68_INT ,A68t57,(A68_VC ,struct A68t37 ),(A68_VC ,struct A68t37 ,void *));
typedef struct A68t57  A68_57 ;    /* PROC(MODE26,MODE37) INT */

A_PROCEDURE(A68_INT ,A68t58,(void),(void *));
typedef struct A68t58  A68_58 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t59,(A68_VC ,A68_VC ,struct A68t37 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t37 ,A68_VC *,void *));
typedef struct A68t59  A68_59 ;    /* PROC(MODE26,MODE26,MODE37) MODE26 */

A_PROCEDURE(A68_VOID ,A68t60,(A68_VC ,A68_VC ,struct A68t37 ,struct A68t32 *),(A68_VC ,A68_VC ,struct A68t37 ,struct A68t32 *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(MODE26,MODE26,MODE37) MODE32 */
struct A68t61{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t61  A68_61 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t62,(A68_VC ,A68_VC ,struct A68t37 ,struct A68t61 *),(A68_VC ,A68_VC ,struct A68t37 ,struct A68t61 *,void *));
typedef struct A68t62  A68_62 ;    /* PROC(MODE26,MODE26,MODE37) MODE61 */

A_PROCEDURE(A68_VOID ,A68t63,(A68_VC *),(A68_VC *,void *));
typedef struct A68t63  A68_63 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t64,(struct A68t39 *),(struct A68t39 *,void *));
typedef struct A68t64  A68_64 ;    /* PROC MODE39 */

A_PROCEDURE(A68_VOID ,A68t65,(A68_VC ,struct A68t37 ,struct A68t39 *),(A68_VC ,struct A68t37 ,struct A68t39 *,void *));
typedef struct A68t65  A68_65 ;    /* PROC(MODE26,MODE37) MODE39 */

A_PROCEDURE(A68_BOOL ,A68t66,(void),(void *));
typedef struct A68t66  A68_66 ;    /* PROC BOOL */
struct A68t68 ;

A_PROCEDURE(A68_VOID ,A68t67,(struct A68t68 ,struct A68t37 ),(struct A68t68 ,struct A68t37 ,void *));
typedef struct A68t67  A68_67 ;    /* PROC(MODE68,MODE37) VOID */
A_VECTOR(struct A68t69 ,A68t68);
typedef struct A68t68  A68_68 ;    /* VECTOR [] MODE69 */
struct A68t69{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_15)
};
typedef struct A68t69  A68_69 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t70,(void),(void *));
typedef struct A68t70  A68_70 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t71,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t71  A68_71 ;    /* PROC(BITS) VOID */
struct A68t73 ;

A_PROCEDURE(A68_VOID ,A68t72,(struct A68t73 ),(struct A68t73 ,void *));
typedef struct A68t72  A68_72 ;    /* PROC(MODE73) VOID */

A_PROCEDURE(A68_VOID ,A68t73,(A68_VC ),(A68_VC ,void *));
typedef struct A68t73  A68_73 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t74,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t74  A68_74 ;    /* PROC(REF MODE26) REF MODE26 */

A_PROCEDURE(A68_REAL ,A68t75,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t75  A68_75 ;    /* PROC(REAL) REAL */
struct A68t76{
A68_VC  Name;
A68_VC  Version;
A68_VC  Date;
A68_VC  Msg;
A68_VC  Sys_fault;
};
typedef struct A68t76  A68_76 ;    /* STRUCT(MODE26,MODE26,MODE26,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t77,(A68_BOOL ,struct A68t76 *),(A68_BOOL ,struct A68t76 *,void *));
typedef struct A68t77  A68_77 ;    /* PROC(BOOL) MODE76 */

A_PROCEDURE(A68_VOID ,A68t78,(struct A68t76 ,A68_BOOL ),(struct A68t76 ,A68_BOOL ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(MODE76,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t79,(struct A68t76 *),(struct A68t76 *,void *));
typedef struct A68t79  A68_79 ;    /* PROC MODE76 */

A_PROCEDURE(A68_VOID ,A68t81,(A68_VC ,A68_INT *,struct A68t32 *),(A68_VC ,A68_INT *,struct A68t32 *,void *));
typedef struct A68t81  A68_81 ;    /* PROC(REF MODE26,REF INT) MODE32 */
struct A68t80{
A68_INT  Charnumber;
A_PAD_INT(PAD_16)
A68_INT  Linenumber;
A_PAD_INT(PAD_17)
A68_INT  Indent;
A_PAD_INT(PAD_18)
A68_INT  Width;
A_PAD_INT(PAD_19)
A68_INT  Sizeincr;
A_PAD_INT(PAD_20)
struct A68t32  Status;
A68_VC  Buffer;
A68_BOOL  Buffered;
A_PAD_BOOL(PAD_21)
A68_BOOL  Separate;
A_PAD_BOOL(PAD_22)
A68_BOOL  Input;
A_PAD_BOOL(PAD_23)
struct A68t73  Putbuffer;
struct A68t81  Getbuffer;
};
typedef struct A68t80  A68_80 ;    /* STRUCT(INT,INT,INT,INT,INT,MODE32,REF MODE26,BOOL,BOOL,BOOL,MODE73,MODE81)  */

A_PROCEDURE(A68_VOID ,A68t82,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t82  A68_82 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t83,(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ),(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ,void *));
typedef struct A68t83  A68_83 ;    /* PROC(MODE26,MODE26,MODE26,REF REF MODE26,BOOL) BOOL */
struct A68t85 ;
struct A68t86 ;

A_PROCEDURE(A68_VOID ,A68t84,(A68_VC ,struct A68t70 ,struct A68t85 ,struct A68t86 ),(A68_VC ,struct A68t70 ,struct A68t85 ,struct A68t86 ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(MODE26,MODE70,MODE85,MODE86) VOID */

A_PROCEDURE(A68_BOOL ,A68t85,(A68_VC ,struct A68t63 ),(A68_VC ,struct A68t63 ,void *));
typedef struct A68t85  A68_85 ;    /* PROC(MODE26,MODE63) BOOL */

A_PROCEDURE(A68_BOOL ,A68t86,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t86  A68_86 ;    /* PROC(BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t87,(struct A68t37 ),(struct A68t37 ,void *));
typedef struct A68t87  A68_87 ;    /* PROC(MODE37) VOID */

A_PROCEDURE(A68_VOID ,A68t88,(struct A68t87 ,struct A68t37 ),(struct A68t87 ,struct A68t37 ,void *));
typedef struct A68t88  A68_88 ;    /* PROC(MODE87,MODE37) VOID */
struct A68t89{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t89  A68_89 ;    /* STRUCT(REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t90,(A68_CHAR ,A68_VC *),(A68_CHAR ,A68_VC *,void *));
typedef struct A68t90  A68_90 ;    /* PROC(CHAR) REF MODE26 */
struct A68t92 ;

A_PROCEDURE(A68_VOID ,A68t91,(struct A68t92 ),(struct A68t92 ,void *));
typedef struct A68t91  A68_91 ;    /* PROC(MODE92) VOID */
A_VECTOR(A68_INT ,A68t93);
typedef struct A68t93  A68_93 ;    /* VECTOR [] INT */
A_VECTOR(A68_BOOL ,A68t94);
typedef struct A68t94  A68_94 ;    /* VECTOR [] BOOL */
A_VECTOR(A68_BITS ,A68t95);
typedef struct A68t95  A68_95 ;    /* VECTOR [] BITS */
struct A68t92 { A68_INT mode; union {
A68_VC  mode1;
struct A68t93  mode2;
struct A68t94  mode3;
struct A68t95  mode4;
} data; };
typedef struct A68t92  A68_92 ;    /* UNION(REF MODE26,REF MODE93,REF MODE94,REF MODE95)  */

A_PROCEDURE(A68_VOID ,A68t96,(A68_VC ),(A68_VC ,void *));
typedef struct A68t96  A68_96 ;    /* PROC(REF MODE26) VOID */

A_PROCEDURE(A68_INT ,A68t97,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t98,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t98  A68_98 ;    /* PROC(BITS,BITS) BITS */
struct A68t100 ;

A_PROCEDURE(A68_VOID ,A68t99,(struct A68t100 ,A68_INT ),(struct A68t100 ,A68_INT ,void *));
typedef struct A68t99  A68_99 ;    /* PROC(MODE100,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t100,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t100  A68_100 ;    /* PROC(CHAR) VOID */
struct A68t102 ;

A_PROCEDURE(A68_INT ,A68t101,(struct A68t102 ),(struct A68t102 ,void *));
typedef struct A68t101  A68_101 ;    /* PROC(MODE102) INT */

A_PROCEDURE(A68_CHAR ,A68t102,(void),(void *));
typedef struct A68t102  A68_102 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t103,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t103  A68_103 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t104,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(MODE26,INT) MODE26 */

A_PROCEDURE(A68_INT ,A68t105,(A68_INT ),(A68_INT ,void *));
typedef struct A68t105  A68_105 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t106,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t106  A68_106 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t107,(A68_VC *),(A68_VC *,void *));
typedef struct A68t107  A68_107 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_INT ,A68t108,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t108  A68_108 ;    /* PROC(INT,INT,REF BOOL) INT */

A_PROCEDURE(A68_BOOL ,A68t109,(A68_VC ,A68_INT *,struct A68t37 ),(A68_VC ,A68_INT *,struct A68t37 ,void *));
typedef struct A68t109  A68_109 ;    /* PROC(MODE26,REF INT,MODE37) BOOL */

A_PROCEDURE(A68_VOID ,A68t110,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t111,(A68_BOOL ,struct A68t93 *),(A68_BOOL ,struct A68t93 *,void *));
typedef struct A68t111  A68_111 ;    /* PROC(BOOL) MODE93 */

A_PROCEDURE(A68_VOID ,A68t112,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t112  A68_112 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t113,(struct A68t93 ,struct A68t93 *),(struct A68t93 ,struct A68t93 *,void *));
typedef struct A68t113  A68_113 ;    /* PROC(MODE93) REF MODE93 */

A_PROCEDURE(A68_VOID ,A68t114,(A68_INT ,struct A68t93 *),(A68_INT ,struct A68t93 *,void *));
typedef struct A68t114  A68_114 ;    /* PROC(INT) REF MODE93 */

A_PROCEDURE(A68_VOID ,A68t115,(struct A68t93 ),(struct A68t93 ,void *));
typedef struct A68t115  A68_115 ;    /* PROC(REF MODE93) VOID */

A_PROCEDURE(A68_VOID ,A68t116,(struct A68t39 ,A68_VC *),(struct A68t39 ,A68_VC *,void *));
typedef struct A68t116  A68_116 ;    /* PROC(MODE39) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t117,(A68_CHAR ,A68_INT ,A68_VC *),(A68_CHAR ,A68_INT ,A68_VC *,void *));
typedef struct A68t117  A68_117 ;    /* PROC(CHAR,INT) MODE26 */
struct A68t119 ;

A_PROCEDURE(A68_VOID ,A68t118,(struct A68t119 ,A68_VC *),(struct A68t119 ,A68_VC *,void *));
typedef struct A68t118  A68_118 ;    /* PROC(MODE119) MODE26 */
struct A68t119 { A68_INT mode; union {
A68_BITS  mode1;
A68_INT  mode2;
A68_SBITS  mode3;
A68_SINT  mode4;
A68_CHAR  mode5;
} data; };
typedef struct A68t119  A68_119 ;    /* UNION(BITS,INT,SHORT BITS,SHORT INT,CHAR)  */

A_PROCEDURE(A68_VOID ,A68t120,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t120  A68_120 ;    /* PROC(INT) MODE26 */
A_VECTOR(A68_REAL ,A68t122);
typedef struct A68t122  A68_122 ;    /* VECTOR [] REAL */

A_PROCEDURE(A68_VOID ,A68t123,(struct A68t80 *),(struct A68t80 *,void *));
typedef struct A68t123  A68_123 ;    /* PROC(REF MODE80) VOID */
struct A68t124{
A68_INT  Int;
A_PAD_INT(PAD_24)
A68_INT  Width;
A_PAD_INT(PAD_25)
};
typedef struct A68t124  A68_124 ;    /* STRUCT(INT,INT)  */
struct A68t125{
A68_VC  Str;
A68_INT  Width;
A_PAD_INT(PAD_26)
};
typedef struct A68t125  A68_125 ;    /* STRUCT(MODE26,INT)  */
struct A68t126{
A68_VC  Str;
A68_INT  Justify;
A_PAD_INT(PAD_27)
};
typedef struct A68t126  A68_126 ;    /* STRUCT(MODE26,INT)  */
struct A68t127{
A68_INT  Tab;
A_PAD_INT(PAD_28)
};
typedef struct A68t127  A68_127 ;    /* STRUCT(INT)  */
struct A68t128{
A68_INT  Pos;
A_PAD_INT(PAD_29)
};
typedef struct A68t128  A68_128 ;    /* STRUCT(INT)  */
struct A68t129{
A68_INT  After;
A_PAD_INT(PAD_30)
};
typedef struct A68t129  A68_129 ;    /* STRUCT(INT)  */
struct A68t130{
A68_INT  Spaces;
A_PAD_INT(PAD_31)
};
typedef struct A68t130  A68_130 ;    /* STRUCT(INT)  */
struct A68t131{
A68_INT  Lines;
A_PAD_INT(PAD_32)
};
typedef struct A68t131  A68_131 ;    /* STRUCT(INT)  */
struct A68t132{
A68_INT  Indent;
A_PAD_INT(PAD_33)
};
typedef struct A68t132  A68_132 ;    /* STRUCT(INT)  */
A_STRAIGHT(A68_VOID,A68t133);
typedef struct A68t133  A68_133 ;    /* STRAIGHT MODE121 */
struct A68t121 { A68_INT mode; union {
A68_INT  mode1;
struct A68t93  mode2;
A68_BITS  mode3;
struct A68t95  mode4;
A68_SBITS  mode5;
A68_CHAR  mode6;
A68_VC  mode7;
A68_BOOL  mode8;
struct A68t94  mode9;
A68_REAL  mode10;
struct A68t122  mode11;
struct A68t123  mode12;
struct A68t124  mode13;
struct A68t125  mode14;
struct A68t126  mode15;
struct A68t127  mode16;
struct A68t128  mode17;
struct A68t129  mode18;
struct A68t130  mode19;
struct A68t131  mode20;
struct A68t132  mode21;
struct A68t133  mode22;
} data; };
typedef struct A68t121  A68_121 ;    /* UNION(INT,MODE93,BITS,MODE95,SHORT BITS,CHAR,MODE26,BOOL,MODE94,REAL,MODE122,MODE123,MODE124,MODE125,MODE126,MODE127,MODE128,MODE129,MODE130,MODE131,MODE132,MODE133)  */

A_PROCEDURE(A68_VOID ,A68t134,(A68_BOOL ,struct A68t125 *),(A68_BOOL ,struct A68t125 *,void *));
typedef struct A68t134  A68_134 ;    /* PROC(BOOL) MODE125 */

A_PROCEDURE(A68_VOID ,A68t135,(A68_BOOL ,struct A68t126 *),(A68_BOOL ,struct A68t126 *,void *));
typedef struct A68t135  A68_135 ;    /* PROC(BOOL) MODE126 */

A_PROCEDURE(A68_INT ,A68t136,(struct A68t80 *),(struct A68t80 *,void *));
typedef struct A68t136  A68_136 ;    /* PROC(REF MODE80) INT */

A_PROCEDURE(A68_INT ,A68t137,(struct A68t80 *,A68_INT ),(struct A68t80 *,A68_INT ,void *));
typedef struct A68t137  A68_137 ;    /* PROC(REF MODE80,INT) INT */

A_PROCEDURE(A68_VOID ,A68t138,(A68_INT ,A68_INT ,struct A68t124 *),(A68_INT ,A68_INT ,struct A68t124 *,void *));
typedef struct A68t138  A68_138 ;    /* PROC(INT,INT) MODE124 */

A_PROCEDURE(A68_VOID ,A68t139,(A68_VC ,A68_INT ,struct A68t125 *),(A68_VC ,A68_INT ,struct A68t125 *,void *));
typedef struct A68t139  A68_139 ;    /* PROC(MODE26,INT) MODE125 */

A_PROCEDURE(A68_VOID ,A68t140,(A68_VC ,A68_INT ,struct A68t126 *),(A68_VC ,A68_INT ,struct A68t126 *,void *));
typedef struct A68t140  A68_140 ;    /* PROC(MODE26,INT) MODE126 */

A_PROCEDURE(A68_VOID ,A68t141,(A68_INT ,struct A68t127 *),(A68_INT ,struct A68t127 *,void *));
typedef struct A68t141  A68_141 ;    /* PROC(INT) MODE127 */

A_PROCEDURE(A68_VOID ,A68t142,(A68_INT ,struct A68t128 *),(A68_INT ,struct A68t128 *,void *));
typedef struct A68t142  A68_142 ;    /* PROC(INT) MODE128 */

A_PROCEDURE(A68_VOID ,A68t143,(A68_INT ,struct A68t129 *),(A68_INT ,struct A68t129 *,void *));
typedef struct A68t143  A68_143 ;    /* PROC(INT) MODE129 */

A_PROCEDURE(A68_VOID ,A68t144,(A68_INT ,struct A68t130 *),(A68_INT ,struct A68t130 *,void *));
typedef struct A68t144  A68_144 ;    /* PROC(INT) MODE130 */

A_PROCEDURE(A68_VOID ,A68t145,(A68_INT ,struct A68t131 *),(A68_INT ,struct A68t131 *,void *));
typedef struct A68t145  A68_145 ;    /* PROC(INT) MODE131 */

A_PROCEDURE(A68_VOID ,A68t146,(A68_INT ,struct A68t132 *),(A68_INT ,struct A68t132 *,void *));
typedef struct A68t146  A68_146 ;    /* PROC(INT) MODE132 */

A_PROCEDURE(A68_VOID ,A68t147,(struct A68t80 *,A68_VC ),(struct A68t80 *,A68_VC ,void *));
typedef struct A68t147  A68_147 ;    /* PROC(REF MODE80,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t148,(struct A68t80 *,A68_INT ,A68_INT ),(struct A68t80 *,A68_INT ,A68_INT ,void *));
typedef struct A68t148  A68_148 ;    /* PROC(REF MODE80,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t149,(struct A68t80 *,A68_BITS ,A68_INT ),(struct A68t80 *,A68_BITS ,A68_INT ,void *));
typedef struct A68t149  A68_149 ;    /* PROC(REF MODE80,BITS,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t150,(struct A68t80 *,A68_REAL ,A68_INT ,A68_INT ),(struct A68t80 *,A68_REAL ,A68_INT ,A68_INT ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(REF MODE80,REAL,INT,INT) VOID */
struct A68t152 ;

A_PROCEDURE(A68_VOID ,A68t151,(struct A68t80 *,struct A68t152 ),(struct A68t80 *,struct A68t152 ,void *));
typedef struct A68t151  A68_151 ;    /* PROC(REF MODE80,MODE152) VOID */
A_VECTOR(struct A68t121 ,A68t152);
typedef struct A68t152  A68_152 ;    /* VECTOR [] MODE121 */
struct A68t154 ;
struct A68t155 ;

A_PROCEDURE(struct A68t80 *,A68t153,(struct A68t154 ,struct A68t155 ),(struct A68t154 ,struct A68t155 ,void *));
typedef struct A68t153  A68_153 ;    /* PROC(MODE154,MODE155) REF MODE80 */
struct A68t154 { A68_INT mode; union {
A68_INT  mode1;
A68_VC  mode2;
} data; };
typedef struct A68t154  A68_154 ;    /* UNION(INT,REF MODE26)  */
struct A68t155 { A68_INT mode; union {
struct A68t73  mode1;
struct A68t81  mode2;
} data; };
typedef struct A68t155  A68_155 ;    /* UNION(MODE73,MODE81)  */

A_PROCEDURE(A68_VOID ,A68t156,(A68_VC ,struct A68t152 ,A68_VC *),(A68_VC ,struct A68t152 ,A68_VC *,void *));
typedef struct A68t156  A68_156 ;    /* PROC(REF MODE26,MODE152) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t157,(struct A68t80 *,A68_VC *),(struct A68t80 *,A68_VC *,void *));
typedef struct A68t157  A68_157 ;    /* PROC(REF MODE80) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t158,(struct A68t152 ,A68_VC *),(struct A68t152 ,A68_VC *,void *));
typedef struct A68t158  A68_158 ;    /* PROC(MODE152) REF MODE26 */
struct A68t159{
A68_VC  Id;
struct A68t159 * Rest;
};
typedef struct A68t159  A68_159 ;    /* STRUCT(REF MODE26,REF MODE159)  */
struct A68t160{
A68_INT  Int;
A_PAD_INT(PAD_34)
struct A68t160 * Rest;
};
typedef struct A68t160  A68_160 ;    /* STRUCT(INT,REF MODE160)  */
struct A68t161 { A68_INT mode; union {
struct A68t162 * mode1;
struct A68t163 * mode2;
struct A68t164 * mode3;
struct A68t165 * mode4;
struct A68t166 * mode5;
} data; };
typedef struct A68t161  A68_161 ;    /* UNION(REF MODE162,REF MODE163,REF MODE164,REF MODE165,REF MODE166)  */
struct A68t162{
A68_INT  Attrno;
A_PAD_INT(PAD_35)
};
typedef struct A68t162  A68_162 ;    /* STRUCT(INT)  */
struct A68t163{
A68_VC  Classname;
struct A68t159 * Strings;
};
typedef struct A68t163  A68_163 ;    /* STRUCT(REF MODE26,REF MODE159)  */
struct A68t164{
struct A68t161  Elem;
struct A68t164 * Rest;
};
typedef struct A68t164  A68_164 ;    /* STRUCT(MODE161,REF MODE164)  */
struct A68t165{
struct A68t161  Attr;
};
typedef struct A68t165  A68_165 ;    /* STRUCT(MODE161)  */
struct A68t166{
A68_INT  Attrnull;
A_PAD_INT(PAD_36)
};
typedef struct A68t166  A68_166 ;    /* STRUCT(INT)  */
struct A68t167{
A68_INT  Sort;
A_PAD_INT(PAD_37)
A68_VC  Attrname;
struct A68t161  Value;
struct A68t168 * Usage;
};
typedef struct A68t167  A68_167 ;    /* STRUCT(INT,REF MODE26,MODE161,REF MODE168)  */
struct A68t168{
A68_INT  Contextno;
A_PAD_INT(PAD_38)
A68_INT  Closureno;
A_PAD_INT(PAD_39)
A68_INT  Libv_spec;
A_PAD_INT(PAD_40)
A68_INT  Libv_body;
A_PAD_INT(PAD_41)
A68_BOOL  Import;
A_PAD_BOOL(PAD_42)
A68_BOOL  Export;
A_PAD_BOOL(PAD_43)
};
typedef struct A68t168  A68_168 ;    /* STRUCT(INT,INT,INT,INT,BOOL,BOOL)  */
struct A68t169{
struct A68t161  Tag;
};
typedef struct A68t169  A68_169 ;    /* STRUCT(MODE161)  */
struct A68t170 { A68_INT mode; union {
struct A68t171 * mode1;
struct A68t172 * mode2;
struct A68t173 * mode3;
struct A68t174 * mode4;
struct A68t175 * mode5;
struct A68t176 * mode6;
struct A68t177 * mode7;
struct A68t178 * mode8;
struct A68t179 * mode9;
struct A68t180 * mode10;
} data; };
typedef struct A68t170  A68_170 ;    /* UNION(REF MODE171,REF MODE172,REF MODE173,REF MODE174,REF MODE175,REF MODE176,REF MODE177,REF MODE178,REF MODE179,REF MODE180)  */
struct A68t171{
A68_INT  Int;
A_PAD_INT(PAD_44)
A68_VC  Text;
};
typedef struct A68t171  A68_171 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t172{
A68_INT  Sort;
A_PAD_INT(PAD_45)
struct A68t170  Test;
struct A68t170  Standard;
};
typedef struct A68t172  A68_172 ;    /* STRUCT(INT,MODE170,MODE170)  */
struct A68t173{
A68_INT  Nameno;
A_PAD_INT(PAD_46)
};
typedef struct A68t173  A68_173 ;    /* STRUCT(INT)  */
struct A68t174{
A68_INT  Intno;
A_PAD_INT(PAD_47)
};
typedef struct A68t174  A68_174 ;    /* STRUCT(INT)  */
struct A68t175{
struct A68t170  Left;
A68_INT  Sort;
A_PAD_INT(PAD_48)
struct A68t170  Right;
};
typedef struct A68t175  A68_175 ;    /* STRUCT(MODE170,INT,MODE170)  */
struct A68t176{
A68_INT  Sort;
A_PAD_INT(PAD_49)
struct A68t170  Right;
};
typedef struct A68t176  A68_176 ;    /* STRUCT(INT,MODE170)  */
struct A68t177{
struct A68t170  Cond;
struct A68t170  True;
struct A68t170  False;
};
typedef struct A68t177  A68_177 ;    /* STRUCT(MODE170,MODE170,MODE170)  */
struct A68t178{
struct A68t170  Formula;
};
typedef struct A68t178  A68_178 ;    /* STRUCT(MODE170)  */
struct A68t179{
A68_INT  Macparno;
A_PAD_INT(PAD_50)
};
typedef struct A68t179  A68_179 ;    /* STRUCT(INT)  */
struct A68t180{
A68_INT  Fnull;
A_PAD_INT(PAD_51)
};
typedef struct A68t180  A68_180 ;    /* STRUCT(INT)  */
struct A68t181{
struct A68t170  Tag;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(MODE170)  */
struct A68t182{
struct A68t170  Formula;
struct A68t182 * Rest;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(MODE170,REF MODE182)  */
struct A68t185{
struct A68t170  Lwb;
struct A68t170  Upb;
};
typedef struct A68t185  A68_185 ;    /* STRUCT(MODE170,MODE170)  */
struct A68t184 { A68_INT mode; union {
struct A68t171 * mode1;
struct A68t172 * mode2;
struct A68t173 * mode3;
struct A68t174 * mode4;
struct A68t175 * mode5;
struct A68t176 * mode6;
struct A68t177 * mode7;
struct A68t178 * mode8;
struct A68t179 * mode9;
struct A68t180 * mode10;
struct A68t185  mode11;
} data; };
typedef struct A68t184  A68_184 ;    /* UNION(REF MODE171,REF MODE172,REF MODE173,REF MODE174,REF MODE175,REF MODE176,REF MODE177,REF MODE178,REF MODE179,REF MODE180,MODE185)  */
struct A68t183{
A68_INT  Sort;
A_PAD_INT(PAD_52)
A68_VC  Intname;
struct A68t161  Attr;
struct A68t184  Value;
struct A68t168 * Usage;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(INT,REF MODE26,MODE161,MODE184,REF MODE168)  */
struct A68t186 { A68_INT mode; union {
struct A68t187 * mode1;
struct A68t188 * mode2;
struct A68t189 * mode3;
struct A68t190 * mode4;
struct A68t191 * mode5;
struct A68t192 * mode6;
struct A68t193 * mode7;
struct A68t179 * mode8;
struct A68t194 * mode9;
} data; };
typedef struct A68t186  A68_186 ;    /* UNION(REF MODE187,REF MODE188,REF MODE189,REF MODE190,REF MODE191,REF MODE192,REF MODE193,REF MODE179,REF MODE194)  */
struct A68t187{
A68_INT  Typeno;
A_PAD_INT(PAD_53)
};
typedef struct A68t187  A68_187 ;    /* STRUCT(INT)  */
struct A68t188{
struct A68t170  Size;
struct A68t186  Elem;
};
typedef struct A68t188  A68_188 ;    /* STRUCT(MODE170,MODE186)  */
struct A68t189{
struct A68t186  Elem;
struct A68t189 * Rest;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(MODE186,REF MODE189)  */
struct A68t190{
struct A68t186  From;
struct A68t186  To;
};
typedef struct A68t190  A68_190 ;    /* STRUCT(MODE186,MODE186)  */
struct A68t191{
struct A68t186  Type;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(MODE186)  */
struct A68t192{
struct A68t170  Size;
struct A68t186  Char;
};
typedef struct A68t192  A68_192 ;    /* STRUCT(MODE170,MODE186)  */
struct A68t193{
A68_INT  Tvoid;
A_PAD_INT(PAD_54)
};
typedef struct A68t193  A68_193 ;    /* STRUCT(INT)  */
struct A68t194{
A68_INT  Tnull;
A_PAD_INT(PAD_55)
};
typedef struct A68t194  A68_194 ;    /* STRUCT(INT)  */
struct A68t195{
struct A68t186  Tag;
};
typedef struct A68t195  A68_195 ;    /* STRUCT(MODE186)  */
struct A68t196{
A68_VC  Tagname;
A68_VC  Chars;
};
typedef struct A68t196  A68_196 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t197{
A68_VC  Altname;
struct A68t186  Assoc;
};
typedef struct A68t197  A68_197 ;    /* STRUCT(REF MODE26,MODE186)  */
struct A68t198{
A68_VC  Tagname;
struct A68t185  Range;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(REF MODE26,MODE185)  */
A_VECTOR(struct A68t197 ,A68t200);
typedef struct A68t200  A68_200 ;    /* VECTOR [] MODE197 */
struct A68t199 { A68_INT mode; union {
struct A68t200  mode1;
struct A68t198 * mode2;
struct A68t195 * mode3;
struct A68t196 * mode4;
} data; };
typedef struct A68t199  A68_199 ;    /* UNION(REF MODE200,REF MODE198,REF MODE195,REF MODE196)  */
struct A68t201{
A68_INT  Sort;
A_PAD_INT(PAD_56)
A68_VC  Typename;
struct A68t161  Attr;
struct A68t199  Body;
struct A68t168 * Usage;
};
typedef struct A68t201  A68_201 ;    /* STRUCT(INT,REF MODE26,MODE161,MODE199,REF MODE168)  */
struct A68t202{
A68_INT  Constno;
A_PAD_INT(PAD_57)
};
typedef struct A68t202  A68_202 ;    /* STRUCT(INT)  */
struct A68t203{
A68_INT  Typeno;
A_PAD_INT(PAD_58)
A68_INT  Primno;
A_PAD_INT(PAD_59)
};
typedef struct A68t203  A68_203 ;    /* STRUCT(INT,INT)  */
struct A68t204{
A68_INT  Typeno;
A_PAD_INT(PAD_60)
struct A68t170  Index;
};
typedef struct A68t204  A68_204 ;    /* STRUCT(INT,MODE170)  */
struct A68t205{
A68_INT  Typeno;
A_PAD_INT(PAD_61)
struct A68t185  Range;
};
typedef struct A68t205  A68_205 ;    /* STRUCT(INT,MODE185)  */
struct A68t206{
struct A68t186  Querytype;
};
typedef struct A68t206  A68_206 ;    /* STRUCT(MODE186)  */
struct A68t208 { A68_INT mode; union {
struct A68t202 * mode1;
struct A68t203 * mode2;
struct A68t204 * mode3;
struct A68t206 * mode4;
struct A68t209 * mode5;
struct A68t210 * mode6;
struct A68t191 * mode7;
struct A68t205 * mode8;
struct A68t211 * mode9;
struct A68t212 * mode10;
struct A68t213 * mode11;
struct A68t214 * mode12;
struct A68t215 * mode13;
struct A68t216 * mode14;
struct A68t217 * mode15;
struct A68t218 * mode16;
struct A68t219 * mode17;
struct A68t220 * mode18;
struct A68t221 * mode19;
struct A68t222 * mode20;
struct A68t223 * mode21;
struct A68t224 * mode22;
struct A68t225 * mode23;
struct A68t226 * mode24;
struct A68t227 * mode25;
struct A68t228 * mode26;
struct A68t229 * mode27;
struct A68t230 * mode28;
struct A68t231 * mode29;
struct A68t232 * mode30;
struct A68t233 * mode31;
struct A68t234 * mode32;
struct A68t235 * mode33;
struct A68t236 * mode34;
} data; };
typedef struct A68t208  A68_208 ;    /* UNION(REF MODE202,REF MODE203,REF MODE204,REF MODE206,REF MODE209,REF MODE210,REF MODE191,REF MODE205,REF MODE211,REF MODE212,REF MODE213,REF MODE214,REF MODE215,REF MODE216,REF MODE217,REF MODE218,REF MODE219,REF MODE220,REF MODE221,REF MODE222,REF MODE223,REF MODE224,REF MODE225,REF MODE226,REF MODE227,REF MODE228,REF MODE229,REF MODE230,REF MODE231,REF MODE232,REF MODE233,REF MODE234,REF MODE235,REF MODE236)  */
struct A68t207{
A68_INT  Sort;
A_PAD_INT(PAD_62)
A68_VC  Constname;
struct A68t161  Attr;
struct A68t208  Value;
struct A68t168 * Usage;
};
typedef struct A68t207  A68_207 ;    /* STRUCT(INT,REF MODE26,MODE161,MODE208,REF MODE168)  */
struct A68t209{
A68_INT  Typeno;
A_PAD_INT(PAD_63)
struct A68t93  String;
};
typedef struct A68t209  A68_209 ;    /* STRUCT(INT,REF MODE93)  */
struct A68t210{
A68_INT  Cvoid;
A_PAD_INT(PAD_64)
};
typedef struct A68t210  A68_210 ;    /* STRUCT(INT)  */
struct A68t211{
A68_INT  Typeno;
A_PAD_INT(PAD_65)
A68_INT  Firstno;
A_PAD_INT(PAD_66)
A68_INT  Lastno;
A_PAD_INT(PAD_67)
};
typedef struct A68t211  A68_211 ;    /* STRUCT(INT,INT,INT)  */
struct A68t212{
struct A68t208  Alt;
struct A68t212 * Rest;
};
typedef struct A68t212  A68_212 ;    /* STRUCT(MODE208,REF MODE212)  */
struct A68t213{
A68_INT  Sort;
A_PAD_INT(PAD_68)
A68_INT  Nameno;
A_PAD_INT(PAD_69)
};
typedef struct A68t213  A68_213 ;    /* STRUCT(INT,INT)  */
struct A68t214{
struct A68t208  Sink;
struct A68t208  Source;
};
typedef struct A68t214  A68_214 ;    /* STRUCT(MODE208,MODE208)  */
struct A68t215{
A68_INT  Typeno;
A_PAD_INT(PAD_70)
A68_INT  Altno;
A_PAD_INT(PAD_71)
struct A68t208  Assoc;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(INT,INT,MODE208)  */
struct A68t216{
struct A68t208  Extract;
A68_INT  Typeno;
A_PAD_INT(PAD_72)
A68_INT  Altno;
A_PAD_INT(PAD_73)
};
typedef struct A68t216  A68_216 ;    /* STRUCT(MODE208,INT,INT)  */
struct A68t217{
struct A68t208  Unit;
A68_INT  Fnno;
A_PAD_INT(PAD_74)
A68_INT  Nameno;
A_PAD_INT(PAD_75)
};
typedef struct A68t217  A68_217 ;    /* STRUCT(MODE208,INT,INT)  */
struct A68t218{
struct A68t208  Unit;
struct A68t170  Index;
};
typedef struct A68t218  A68_218 ;    /* STRUCT(MODE208,MODE170)  */
struct A68t219{
struct A68t208  Unit;
struct A68t185  Range;
};
typedef struct A68t219  A68_219 ;    /* STRUCT(MODE208,MODE185)  */
struct A68t220{
struct A68t208  Unit;
struct A68t208  Index;
};
typedef struct A68t220  A68_220 ;    /* STRUCT(MODE208,MODE208)  */
struct A68t221{
struct A68t208  Unit;
struct A68t208  Index;
struct A68t208  From;
};
typedef struct A68t221  A68_221 ;    /* STRUCT(MODE208,MODE208,MODE208)  */
struct A68t222{
struct A68t170  Size;
struct A68t208  Elem;
};
typedef struct A68t222  A68_222 ;    /* STRUCT(MODE170,MODE208)  */
struct A68t223{
struct A68t208  Elem;
struct A68t223 * Rest;
};
typedef struct A68t223  A68_223 ;    /* STRUCT(MODE208,REF MODE223)  */
struct A68t224{
A68_BOOL  String;
A_PAD_BOOL(PAD_76)
A68_INT  Sort;
A_PAD_INT(PAD_77)
struct A68t208  Left;
struct A68t208  Right;
};
typedef struct A68t224  A68_224 ;    /* STRUCT(BOOL,INT,MODE208,MODE208)  */
A_VECTOR(struct A68t251 ,A68t250);
typedef struct A68t250  A68_250 ;    /* VECTOR [] MODE251 */
struct A68t253{
struct A68t208  Tag;
};
typedef struct A68t253  A68_253 ;    /* STRUCT(MODE208)  */
struct A68t248{
A68_INT  Fnno;
A_PAD_INT(PAD_78)
struct A68t250  Macparams;
struct A68t161  Attr;
};
typedef struct A68t248  A68_248 ;    /* STRUCT(INT,REF MODE250,MODE161)  */
struct A68t252 { A68_INT mode; union {
struct A68t169  mode1;
struct A68t181  mode2;
struct A68t195  mode3;
struct A68t253  mode4;
struct A68t248  mode5;
} data; };
typedef struct A68t252  A68_252 ;    /* UNION(MODE169,MODE181,MODE195,MODE253,MODE248)  */
struct A68t251{
A68_INT  Sort;
A_PAD_INT(PAD_79)
struct A68t252  Param;
};
typedef struct A68t251  A68_251 ;    /* STRUCT(INT,MODE252)  */
struct A68t225{
struct A68t248  Inst;
struct A68t208  Right;
};
typedef struct A68t225  A68_225 ;    /* STRUCT(MODE248,MODE208)  */
struct A68t226{
struct A68t208  Left;
struct A68t248  Inst;
struct A68t208  Right;
};
typedef struct A68t226  A68_226 ;    /* STRUCT(MODE208,MODE248,MODE208)  */
struct A68t227{
struct A68t208  Input;
struct A68t268 * Choices;
};
typedef struct A68t227  A68_227 ;    /* STRUCT(MODE208,REF MODE268)  */
struct A68t228{
struct A68t170  Cond;
struct A68t208  True;
struct A68t208  False;
};
typedef struct A68t228  A68_228 ;    /* STRUCT(MODE170,MODE208,MODE208)  */
struct A68t229{
struct A68t170  Repl;
struct A68t208  Body;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(MODE170,MODE208)  */
struct A68t230{
struct A68t256 * Body;
struct A68t208  Output;
};
typedef struct A68t230  A68_230 ;    /* STRUCT(REF MODE256,MODE208)  */
struct A68t231{
struct A68t237 * Body;
struct A68t208  Output;
};
typedef struct A68t231  A68_231 ;    /* STRUCT(REF MODE237,MODE208)  */
struct A68t232{
struct A68t208  Unit;
struct A68t161  Attr;
};
typedef struct A68t232  A68_232 ;    /* STRUCT(MODE208,MODE161)  */
struct A68t233{
struct A68t208  Unit;
struct A68t172  Check;
};
typedef struct A68t233  A68_233 ;    /* STRUCT(MODE208,MODE172)  */
struct A68t234{
struct A68t208  Unit;
};
typedef struct A68t234  A68_234 ;    /* STRUCT(MODE208)  */
struct A68t235{
struct A68t170  Size;
struct A68t208  Char;
};
typedef struct A68t235  A68_235 ;    /* STRUCT(MODE170,MODE208)  */
struct A68t236{
A68_INT  Unull;
A_PAD_INT(PAD_80)
};
typedef struct A68t236  A68_236 ;    /* STRUCT(INT)  */
struct A68t239{
A68_INT  Fnno;
A_PAD_INT(PAD_81)
};
typedef struct A68t239  A68_239 ;    /* STRUCT(INT)  */
struct A68t238 { A68_INT mode; union {
struct A68t162  mode1;
struct A68t174  mode2;
struct A68t187  mode3;
struct A68t202  mode4;
struct A68t239  mode5;
struct A68t240 * mode6;
struct A68t241 * mode7;
struct A68t242 * mode8;
struct A68t243 * mode9;
struct A68t244 * mode10;
struct A68t245 * mode11;
struct A68t246 * mode12;
} data; };
typedef struct A68t238  A68_238 ;    /* UNION(MODE162,MODE174,MODE187,MODE202,MODE239,REF MODE240,REF MODE241,REF MODE242,REF MODE243,REF MODE244,REF MODE245,REF MODE246)  */
struct A68t237{
struct A68t238  Step;
struct A68t237 * Rest;
};
typedef struct A68t237  A68_237 ;    /* STRUCT(MODE238,REF MODE237)  */
struct A68t240{
struct A68t170  Cond;
struct A68t254 * Print;
};
typedef struct A68t240  A68_240 ;    /* STRUCT(MODE170,REF MODE254)  */
struct A68t241{
struct A68t170  Cond;
struct A68t254 * Fault;
};
typedef struct A68t241  A68_241 ;    /* STRUCT(MODE170,REF MODE254)  */
struct A68t242{
struct A68t249 * Letnames;
struct A68t208  Unit;
};
typedef struct A68t242  A68_242 ;    /* STRUCT(REF MODE249,MODE208)  */
struct A68t243{
struct A68t182 * Sizes;
struct A68t248  Inst;
struct A68t249 * Makenames;
};
typedef struct A68t243  A68_243 ;    /* STRUCT(REF MODE182,MODE248,REF MODE249)  */
struct A68t244{
struct A68t208  From;
struct A68t208  To;
};
typedef struct A68t244  A68_244 ;    /* STRUCT(MODE208,MODE208)  */
struct A68t245{
struct A68t182 * Repls;
struct A68t247 * Joins;
};
typedef struct A68t245  A68_245 ;    /* STRUCT(REF MODE182,REF MODE247)  */
struct A68t246{
A68_INT  Stepnull;
A_PAD_INT(PAD_82)
};
typedef struct A68t246  A68_246 ;    /* STRUCT(INT)  */
struct A68t247{
struct A68t244  Join;
struct A68t247 * Rest;
};
typedef struct A68t247  A68_247 ;    /* STRUCT(MODE244,REF MODE247)  */
struct A68t249{
A68_INT  Nameno;
A_PAD_INT(PAD_83)
struct A68t249 * Rest;
};
typedef struct A68t249  A68_249 ;    /* STRUCT(INT,REF MODE249)  */
struct A68t255 { A68_INT mode; union {
A68_VC  mode1;
struct A68t181 * mode2;
} data; };
typedef struct A68t255  A68_255 ;    /* UNION(REF MODE26,REF MODE181)  */
struct A68t254{
struct A68t255  Item;
struct A68t254 * Rest;
};
typedef struct A68t254  A68_254 ;    /* STRUCT(MODE255,REF MODE254)  */
struct A68t257 { A68_INT mode; union {
struct A68t162  mode1;
struct A68t174  mode2;
struct A68t187  mode3;
struct A68t202  mode4;
struct A68t239  mode5;
struct A68t240 * mode6;
struct A68t241 * mode7;
struct A68t258 * mode8;
struct A68t259 * mode9;
struct A68t260 * mode10;
struct A68t261 * mode11;
struct A68t262 * mode12;
struct A68t263 * mode13;
struct A68t264 * mode14;
struct A68t265 * mode15;
struct A68t256 * mode16;
struct A68t266 * mode17;
} data; };
typedef struct A68t257  A68_257 ;    /* UNION(MODE162,MODE174,MODE187,MODE202,MODE239,REF MODE240,REF MODE241,REF MODE258,REF MODE259,REF MODE260,REF MODE261,REF MODE262,REF MODE263,REF MODE264,REF MODE265,REF MODE256,REF MODE266)  */
struct A68t256{
struct A68t257  Step;
struct A68t256 * Rest;
};
typedef struct A68t256  A68_256 ;    /* STRUCT(MODE257,REF MODE256)  */
struct A68t258{
struct A68t242  Seqlet;
};
typedef struct A68t258  A68_258 ;    /* STRUCT(MODE242)  */
struct A68t259{
struct A68t242  Seqvar;
};
typedef struct A68t259  A68_259 ;    /* STRUCT(MODE242)  */
struct A68t260{
struct A68t249 * Pvarnames;
struct A68t208  Init;
};
typedef struct A68t260  A68_260 ;    /* STRUCT(REF MODE249,MODE208)  */
struct A68t261{
struct A68t208  To;
struct A68t208  From;
};
typedef struct A68t261  A68_261 ;    /* STRUCT(MODE208,MODE208)  */
struct A68t262{
struct A68t208  Input;
struct A68t267 * Choices;
};
typedef struct A68t262  A68_262 ;    /* STRUCT(MODE208,REF MODE267)  */
struct A68t263{
struct A68t170  Cond;
struct A68t257  True;
struct A68t257  False;
};
typedef struct A68t263  A68_263 ;    /* STRUCT(MODE170,MODE257,MODE257)  */
struct A68t264{
struct A68t170  Repl;
struct A68t257  Body;
};
typedef struct A68t264  A68_264 ;    /* STRUCT(MODE170,MODE257)  */
struct A68t265{
A68_INT  Seqnull;
A_PAD_INT(PAD_84)
};
typedef struct A68t265  A68_265 ;    /* STRUCT(INT)  */
struct A68t266{
struct A68t170  Size;
struct A68t257  Elem;
};
typedef struct A68t266  A68_266 ;    /* STRUCT(MODE170,MODE257)  */
struct A68t267{
A68_BOOL  Check;
A_PAD_BOOL(PAD_85)
A68_INT  Sort;
A_PAD_INT(PAD_86)
struct A68t208  Test;
struct A68t257  Output;
struct A68t267 * Rest;
};
typedef struct A68t267  A68_267 ;    /* STRUCT(BOOL,INT,MODE208,MODE257,REF MODE267)  */
struct A68t268{
A68_BOOL  Check;
A_PAD_BOOL(PAD_87)
A68_INT  Sort;
A_PAD_INT(PAD_88)
struct A68t208  Test;
struct A68t208  Output;
struct A68t268 * Rest;
};
typedef struct A68t268  A68_268 ;    /* STRUCT(BOOL,INT,MODE208,MODE208,REF MODE268)  */
struct A68t269 { A68_INT mode; union {
struct A68t162  mode1;
struct A68t174  mode2;
struct A68t187  mode3;
struct A68t202  mode4;
struct A68t239  mode5;
} data; };
typedef struct A68t269  A68_269 ;    /* UNION(MODE162,MODE174,MODE187,MODE202,MODE239)  */
struct A68t270{
A68_BOOL  Biop;
A_PAD_BOOL(PAD_89)
A68_VC  Name;
struct A68t250  Macparams;
};
typedef struct A68t270  A68_270 ;    /* STRUCT(BOOL,REF MODE26,REF MODE250)  */
struct A68t271{
struct A68t170  Output;
};
typedef struct A68t271  A68_271 ;    /* STRUCT(MODE170)  */
struct A68t272{
A68_INT  Reform;
A_PAD_INT(PAD_90)
};
typedef struct A68t272  A68_272 ;    /* STRUCT(INT)  */
struct A68t273{
A68_VC  Name;
A68_INT  Contextno;
A_PAD_INT(PAD_91)
struct A68t89  Ctname;
};
typedef struct A68t273  A68_273 ;    /* STRUCT(REF MODE26,INT,MODE89)  */
struct A68t274{
A68_INT  Sort;
A_PAD_INT(PAD_92)
struct A68t208  Init;
struct A68t170  Ambigtime;
struct A68t208  Ambig;
struct A68t170  Delaytime;
};
typedef struct A68t274  A68_274 ;    /* STRUCT(INT,MODE208,MODE170,MODE208,MODE170)  */
struct A68t275{
struct A68t208  Init;
struct A68t170  Delaytime;
};
typedef struct A68t275  A68_275 ;    /* STRUCT(MODE208,MODE170)  */
struct A68t276{
struct A68t208  Init;
};
typedef struct A68t276  A68_276 ;    /* STRUCT(MODE208)  */
struct A68t277{
A68_INT  Sort;
A_PAD_INT(PAD_93)
struct A68t170  Interval;
struct A68t208  Init;
struct A68t170  Skew;
};
typedef struct A68t277  A68_277 ;    /* STRUCT(INT,MODE170,MODE208,MODE170)  */
struct A68t278{
A68_BOOL  Faster;
A_PAD_BOOL(PAD_94)
A68_INT  Sort;
A_PAD_INT(PAD_95)
struct A68t248  Inst;
struct A68t170  Scale;
struct A68t208  Init;
struct A68t170  Skew;
};
typedef struct A68t278  A68_278 ;    /* STRUCT(BOOL,INT,MODE248,MODE170,MODE208,MODE170)  */
struct A68t280 { A68_INT mode; union {
struct A68t253 * mode1;
struct A68t270 * mode2;
struct A68t271 * mode3;
struct A68t272 * mode4;
struct A68t273 * mode5;
struct A68t274 * mode6;
struct A68t275 * mode7;
struct A68t276 * mode8;
struct A68t277 * mode9;
struct A68t278 * mode10;
struct A68t279 * mode11;
struct A68t281 * mode12;
} data; };
typedef struct A68t280  A68_280 ;    /* UNION(REF MODE253,REF MODE270,REF MODE271,REF MODE272,REF MODE273,REF MODE274,REF MODE275,REF MODE276,REF MODE277,REF MODE278,REF MODE279,REF MODE281)  */
struct A68t279{
struct A68t160 * Joincheck;
A68_BOOL  Check;
A_PAD_BOOL(PAD_96)
struct A68t280  Fnbody;
};
typedef struct A68t279  A68_279 ;    /* STRUCT(REF MODE160,BOOL,MODE280)  */
struct A68t281{
A68_INT  Bodynull;
A_PAD_INT(PAD_97)
};
typedef struct A68t281  A68_281 ;    /* STRUCT(INT)  */
struct A68t282{
A68_INT  Sort;
A_PAD_INT(PAD_98)
struct A68t269  Spec;
};
typedef struct A68t282  A68_282 ;    /* STRUCT(INT,MODE269)  */
struct A68t283{
A68_VC  Name;
struct A68t186  Type;
struct A68t161  Attr;
};
typedef struct A68t283  A68_283 ;    /* STRUCT(REF MODE26,MODE186,MODE161)  */
A_VECTOR(struct A68t282 ,A68t285);
typedef struct A68t285  A68_285 ;    /* VECTOR [] MODE282 */
A_VECTOR(struct A68t283 ,A68t286);
typedef struct A68t286  A68_286 ;    /* VECTOR [] MODE283 */
struct A68t284{
A68_INT  Sort;
A_PAD_INT(PAD_99)
A68_BOOL  Macro;
A_PAD_BOOL(PAD_100)
A68_VC  Fnname;
struct A68t285  Macspecs;
struct A68t161  Attr;
struct A68t249 * Inputs;
struct A68t249 * Outputs;
struct A68t286  Nametypes;
struct A68t280  Fnbody;
struct A68t168 * Usage;
};
typedef struct A68t284  A68_284 ;    /* STRUCT(INT,BOOL,REF MODE26,REF MODE285,MODE161,REF MODE249,REF MODE249,REF MODE286,MODE280,REF MODE168)  */
A_VECTOR(struct A68t167 *,A68t288);
typedef struct A68t288  A68_288 ;    /* VECTOR [] REF MODE167 */
A_VECTOR(struct A68t183 *,A68t289);
typedef struct A68t289  A68_289 ;    /* VECTOR [] REF MODE183 */
A_VECTOR(struct A68t201 *,A68t290);
typedef struct A68t290  A68_290 ;    /* VECTOR [] REF MODE201 */
A_VECTOR(struct A68t207 *,A68t291);
typedef struct A68t291  A68_291 ;    /* VECTOR [] REF MODE207 */
A_VECTOR(struct A68t284 *,A68t292);
typedef struct A68t292  A68_292 ;    /* VECTOR [] REF MODE284 */
struct A68t287{
struct A68t288  Attrs;
struct A68t289  Ints;
struct A68t290  Types;
struct A68t291  Consts;
struct A68t292  Fns;
};
typedef struct A68t287  A68_287 ;    /* STRUCT(REF MODE288,REF MODE289,REF MODE290,REF MODE291,REF MODE292)  */
struct A68t293{
A68_INT  Closureno;
A_PAD_INT(PAD_101)
A68_INT  Sort;
A_PAD_INT(PAD_102)
struct A68t287 * Environ;
};
typedef struct A68t293  A68_293 ;    /* STRUCT(INT,INT,REF MODE287)  */
struct A68t294{
struct A68t293  Outer;
struct A68t294 * Rest;
};
typedef struct A68t294  A68_294 ;    /* STRUCT(MODE293,REF MODE294)  */
A_VECTOR(struct A68t294 ,A68t296);
typedef struct A68t296  A68_296 ;    /* VECTOR [] MODE294 */
struct A68t295{
struct A68t296  Outers;
struct A68t295 * Rest;
};
typedef struct A68t295  A68_295 ;    /* STRUCT(REF MODE296,REF MODE295)  */
struct A68t297{
A68_INT  Max_closureno;
A_PAD_INT(PAD_103)
struct A68t294 * Outers;
struct A68t294 * Freelist;
struct A68t295 * Outerslist;
};
typedef struct A68t297  A68_297 ;    /* STRUCT(INT,REF MODE294,REF MODE294,REF MODE295)  */
A_VECTOR(A68_VC ,A68t298);
typedef struct A68t298  A68_298 ;    /* VECTOR [] REF MODE26 */
A_VECTOR(struct A68t294 *,A68t299);
typedef struct A68t299  A68_299 ;    /* VECTOR [] REF MODE294 */

A_PROCEDURE(struct A68t173 *,A68t300,(A68_INT ),(A68_INT ,void *));
typedef struct A68t300  A68_300 ;    /* PROC(INT) REF MODE173 */

A_PROCEDURE(struct A68t174 *,A68t301,(A68_INT ),(A68_INT ,void *));
typedef struct A68t301  A68_301 ;    /* PROC(INT) REF MODE174 */

A_PROCEDURE(struct A68t178 *,A68t302,(struct A68t170 ),(struct A68t170 ,void *));
typedef struct A68t302  A68_302 ;    /* PROC(MODE170) REF MODE178 */

A_PROCEDURE(struct A68t181 *,A68t303,(struct A68t170 ),(struct A68t170 ,void *));
typedef struct A68t303  A68_303 ;    /* PROC(MODE170) REF MODE181 */

A_PROCEDURE(struct A68t187 *,A68t304,(A68_INT ),(A68_INT ,void *));
typedef struct A68t304  A68_304 ;    /* PROC(INT) REF MODE187 */

A_PROCEDURE(struct A68t191 *,A68t305,(struct A68t186 ),(struct A68t186 ,void *));
typedef struct A68t305  A68_305 ;    /* PROC(MODE186) REF MODE191 */

A_PROCEDURE(struct A68t195 *,A68t306,(struct A68t186 ),(struct A68t186 ,void *));
typedef struct A68t306  A68_306 ;    /* PROC(MODE186) REF MODE195 */

A_PROCEDURE(struct A68t202 *,A68t307,(A68_INT ),(A68_INT ,void *));
typedef struct A68t307  A68_307 ;    /* PROC(INT) REF MODE202 */

A_PROCEDURE(struct A68t206 *,A68t308,(struct A68t186 ),(struct A68t186 ,void *));
typedef struct A68t308  A68_308 ;    /* PROC(MODE186) REF MODE206 */

A_PROCEDURE(struct A68t258 *,A68t309,(struct A68t242 ),(struct A68t242 ,void *));
typedef struct A68t309  A68_309 ;    /* PROC(MODE242) REF MODE258 */

A_PROCEDURE(struct A68t259 *,A68t310,(struct A68t242 ),(struct A68t242 ,void *));
typedef struct A68t310  A68_310 ;    /* PROC(MODE242) REF MODE259 */

A_PROCEDURE(struct A68t234 *,A68t311,(struct A68t208 ),(struct A68t208 ,void *));
typedef struct A68t311  A68_311 ;    /* PROC(MODE208) REF MODE234 */

A_PROCEDURE(struct A68t253 *,A68t312,(struct A68t208 ),(struct A68t208 ,void *));
typedef struct A68t312  A68_312 ;    /* PROC(MODE208) REF MODE253 */

A_PROCEDURE(struct A68t239 *,A68t313,(A68_INT ),(A68_INT ,void *));
typedef struct A68t313  A68_313 ;    /* PROC(INT) REF MODE239 */

A_PROCEDURE(struct A68t271 *,A68t314,(struct A68t170 ),(struct A68t170 ,void *));
typedef struct A68t314  A68_314 ;    /* PROC(MODE170) REF MODE271 */

A_PROCEDURE(struct A68t276 *,A68t315,(struct A68t208 ),(struct A68t208 ,void *));
typedef struct A68t315  A68_315 ;    /* PROC(MODE208) REF MODE276 */

A_PROCEDURE(struct A68t179 *,A68t316,(A68_INT ),(A68_INT ,void *));
typedef struct A68t316  A68_316 ;    /* PROC(INT) REF MODE179 */

A_PROCEDURE(struct A68t162 *,A68t317,(A68_INT ),(A68_INT ,void *));
typedef struct A68t317  A68_317 ;    /* PROC(INT) REF MODE162 */

A_PROCEDURE(struct A68t169 *,A68t318,(struct A68t161 ),(struct A68t161 ,void *));
typedef struct A68t318  A68_318 ;    /* PROC(MODE161) REF MODE169 */

A_PROCEDURE(struct A68t165 *,A68t319,(struct A68t161 ),(struct A68t161 ,void *));
typedef struct A68t319  A68_319 ;    /* PROC(MODE161) REF MODE165 */
A_VECTOR(struct A68t159 *,A68t320);
typedef struct A68t320  A68_320 ;    /* VECTOR [] REF MODE159 */

A_PROCEDURE(struct A68t171 *,A68t321,(A68_INT ),(A68_INT ,void *));
typedef struct A68t321  A68_321 ;    /* PROC(INT) REF MODE171 */

A_PROCEDURE(A68_INT ,A68t322,(struct A68t170 ,struct A68t37 ),(struct A68t170 ,struct A68t37 ,void *));
typedef struct A68t322  A68_322 ;    /* PROC(MODE170,MODE37) INT */

A_PROCEDURE(A68_INT ,A68t323,(struct A68t170 ),(struct A68t170 ,void *));
typedef struct A68t323  A68_323 ;    /* PROC(MODE170) INT */

A_PROCEDURE(A68_VOID ,A68t324,(struct A68t170 ,struct A68t170 *),(struct A68t170 ,struct A68t170 *,void *));
typedef struct A68t324  A68_324 ;    /* PROC(MODE170) MODE170 */

A_PROCEDURE(struct A68t167 *,A68t325,(struct A68t293 ),(struct A68t293 ,void *));
typedef struct A68t325  A68_325 ;    /* PROC(MODE293) REF MODE167 */

A_PROCEDURE(struct A68t183 *,A68t326,(struct A68t293 ),(struct A68t293 ,void *));
typedef struct A68t326  A68_326 ;    /* PROC(MODE293) REF MODE183 */

A_PROCEDURE(struct A68t201 *,A68t327,(struct A68t293 ),(struct A68t293 ,void *));
typedef struct A68t327  A68_327 ;    /* PROC(MODE293) REF MODE201 */

A_PROCEDURE(struct A68t207 *,A68t328,(struct A68t293 ),(struct A68t293 ,void *));
typedef struct A68t328  A68_328 ;    /* PROC(MODE293) REF MODE207 */

A_PROCEDURE(struct A68t284 *,A68t329,(struct A68t293 ),(struct A68t293 ,void *));
typedef struct A68t329  A68_329 ;    /* PROC(MODE293) REF MODE284 */

A_PROCEDURE(A68_INT ,A68t330,(struct A68t168 *,struct A68t288 ),(struct A68t168 *,struct A68t288 ,void *));
typedef struct A68t330  A68_330 ;    /* PROC(REF MODE168,REF MODE288) INT */

A_PROCEDURE(A68_INT ,A68t331,(struct A68t168 *,struct A68t289 ),(struct A68t168 *,struct A68t289 ,void *));
typedef struct A68t331  A68_331 ;    /* PROC(REF MODE168,REF MODE289) INT */

A_PROCEDURE(A68_INT ,A68t332,(struct A68t168 *,struct A68t290 ),(struct A68t168 *,struct A68t290 ,void *));
typedef struct A68t332  A68_332 ;    /* PROC(REF MODE168,REF MODE290) INT */

A_PROCEDURE(A68_INT ,A68t333,(struct A68t168 *,struct A68t291 ),(struct A68t168 *,struct A68t291 ,void *));
typedef struct A68t333  A68_333 ;    /* PROC(REF MODE168,REF MODE291) INT */

A_PROCEDURE(A68_INT ,A68t334,(struct A68t168 *,struct A68t292 ),(struct A68t168 *,struct A68t292 ,void *));
typedef struct A68t334  A68_334 ;    /* PROC(REF MODE168,REF MODE292) INT */

A_PROCEDURE(struct A68t167 *,A68t335,(struct A68t162 ,struct A68t297 *,struct A68t287 *),(struct A68t162 ,struct A68t297 *,struct A68t287 *,void *));
typedef struct A68t335  A68_335 ;    /* PROC(MODE162,REF MODE297,REF MODE287) REF MODE167 */

A_PROCEDURE(struct A68t183 *,A68t336,(struct A68t174 ,struct A68t297 *,struct A68t287 *),(struct A68t174 ,struct A68t297 *,struct A68t287 *,void *));
typedef struct A68t336  A68_336 ;    /* PROC(MODE174,REF MODE297,REF MODE287) REF MODE183 */

A_PROCEDURE(struct A68t201 *,A68t337,(struct A68t187 ,struct A68t297 *,struct A68t287 *),(struct A68t187 ,struct A68t297 *,struct A68t287 *,void *));
typedef struct A68t337  A68_337 ;    /* PROC(MODE187,REF MODE297,REF MODE287) REF MODE201 */

A_PROCEDURE(struct A68t207 *,A68t338,(struct A68t202 ,struct A68t297 *,struct A68t287 *),(struct A68t202 ,struct A68t297 *,struct A68t287 *,void *));
typedef struct A68t338  A68_338 ;    /* PROC(MODE202,REF MODE297,REF MODE287) REF MODE207 */

A_PROCEDURE(struct A68t284 *,A68t339,(struct A68t239 ,struct A68t297 *,struct A68t287 *),(struct A68t239 ,struct A68t297 *,struct A68t287 *,void *));
typedef struct A68t339  A68_339 ;    /* PROC(MODE239,REF MODE297,REF MODE287) REF MODE284 */

A_PROCEDURE(struct A68t190 *,A68t340,(struct A68t284 *),(struct A68t284 *,void *));
typedef struct A68t340  A68_340 ;    /* PROC(REF MODE284) REF MODE190 */

A_PROCEDURE(A68_VOID ,A68t341,(struct A68t189 *,struct A68t170 *),(struct A68t189 *,struct A68t170 *,void *));
typedef struct A68t341  A68_341 ;    /* PROC(REF MODE189) MODE170 */

A_PROCEDURE(A68_VOID ,A68t342,(struct A68t186 ,struct A68t287 *,struct A68t170 *),(struct A68t186 ,struct A68t287 *,struct A68t170 *,void *));
typedef struct A68t342  A68_342 ;    /* PROC(MODE186,REF MODE287) MODE170 */

A_PROCEDURE(struct A68t284 *,A68t343,(struct A68t284 *,struct A68t287 *,struct A68t287 *),(struct A68t284 *,struct A68t287 *,struct A68t287 *,void *));
typedef struct A68t343  A68_343 ;    /* PROC(REF MODE284,REF MODE287,REF MODE287) REF MODE284 */

A_PROCEDURE(A68_VOID ,A68t344,(struct A68t249 *,struct A68t284 *,struct A68t186 *),(struct A68t249 *,struct A68t284 *,struct A68t186 *,void *));
typedef struct A68t344  A68_344 ;    /* PROC(REF MODE249,REF MODE284) MODE186 */

A_PROCEDURE(A68_INT ,A68t345,(struct A68t249 *),(struct A68t249 *,void *));
typedef struct A68t345  A68_345 ;    /* PROC(REF MODE249) INT */

A_PROCEDURE(A68_INT ,A68t346,(struct A68t249 *,A68_INT ),(struct A68t249 *,A68_INT ,void *));
typedef struct A68t346  A68_346 ;    /* PROC(REF MODE249,INT) INT */

A_PROCEDURE(A68_VOID ,A68t347,(struct A68t208 ,struct A68t284 *,struct A68t287 *,struct A68t186 *),(struct A68t208 ,struct A68t284 *,struct A68t287 *,struct A68t186 *,void *));
typedef struct A68t347  A68_347 ;    /* PROC(MODE208,REF MODE284,REF MODE287) MODE186 */

A_PROCEDURE(A68_VOID ,A68t348,(struct A68t186 ,struct A68t287 *,struct A68t186 *),(struct A68t186 ,struct A68t287 *,struct A68t186 *,void *));
typedef struct A68t348  A68_348 ;    /* PROC(MODE186,REF MODE287) MODE186 */

A_PROCEDURE(A68_BOOL ,A68t349,(struct A68t186 ,struct A68t186 ,struct A68t287 *,struct A68t287 *,A68_BOOL ),(struct A68t186 ,struct A68t186 ,struct A68t287 *,struct A68t287 *,A68_BOOL ,void *));
typedef struct A68t349  A68_349 ;    /* PROC(MODE186,MODE186,REF MODE287,REF MODE287,BOOL) BOOL */

A_PROCEDURE(A68_INT ,A68t350,(struct A68t217 *,struct A68t287 *),(struct A68t217 *,struct A68t287 *,void *));
typedef struct A68t350  A68_350 ;    /* PROC(REF MODE217,REF MODE287) INT */

A_PROCEDURE(A68_VOID ,A68t351,(struct A68t70 ),(struct A68t70 ,void *));
typedef struct A68t351  A68_351 ;    /* PROC(MODE70) VOID */

A_PROCEDURE(A68_VOID ,A68t352,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t352  A68_352 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,54,A68t353);
typedef struct A68t353  A68_353 ;    /* STRUCT 54 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t354);
typedef struct A68t354  A68_354 ;    /* STRUCT 2 CHAR */

A_PROCEDURE(struct A68t231 *,A68t355,(struct A68t284 *,struct A68t287 *),(struct A68t284 *,struct A68t287 *,void *));
typedef struct A68t355  A68_355 ;    /* PROC(REF MODE284,REF MODE287) REF MODE231 */

A_PROCEDURE(A68_VOID ,A68t356,(struct A68t223 **,struct A68t223 *),(struct A68t223 **,struct A68t223 *,void *));
typedef struct A68t356  A68_356 ;    /* PROC(REF REF MODE223,REF MODE223) VOID */

A_PROCEDURE(struct A68t223 *,A68t357,(struct A68t208 *,struct A68t186 ,struct A68t287 *),(struct A68t208 *,struct A68t186 ,struct A68t287 *,void *));
typedef struct A68t357  A68_357 ;    /* PROC(REF MODE208,MODE186,REF MODE287) REF MODE223 */
A_ISTRUCT(A68_CHAR ,32,A68t358);
typedef struct A68t358  A68_358 ;    /* STRUCT 32 CHAR */

A_PROCEDURE(A68_VOID ,A68t359,(struct A68t223 **,struct A68t186 ,struct A68t287 *,struct A68t208 *),(struct A68t223 **,struct A68t186 ,struct A68t287 *,struct A68t208 *,void *));
typedef struct A68t359  A68_359 ;    /* PROC(REF REF MODE223,MODE186,REF MODE287) MODE208 */

A_PROCEDURE(A68_BOOL ,A68t360,(struct A68t186 ,struct A68t287 *),(struct A68t186 ,struct A68t287 *,void *));
typedef struct A68t360  A68_360 ;    /* PROC(MODE186,REF MODE287) BOOL */

A_PROCEDURE(A68_VOID ,A68t361,(struct A68t280 ,struct A68t208 *),(struct A68t280 ,struct A68t208 *,void *));
typedef struct A68t361  A68_361 ;    /* PROC(MODE280) MODE208 */
A_ISTRUCT(A68_CHAR ,36,A68t362);
typedef struct A68t362  A68_362 ;    /* STRUCT 36 CHAR */
A_ISTRUCT(A68_CHAR ,49,A68t363);
typedef struct A68t363  A68_363 ;    /* STRUCT 49 CHAR */

A_PROCEDURE(A68_INT ,A68t364,(struct A68t284 *,struct A68t287 *),(struct A68t284 *,struct A68t287 *,void *));
typedef struct A68t364  A68_364 ;    /* PROC(REF MODE284,REF MODE287) INT */

A_PROCEDURE(A68_VOID ,A68t365,(A68_BOOL ,struct A68t292 *),(A68_BOOL ,struct A68t292 *,void *));
typedef struct A68t365  A68_365 ;    /* PROC(BOOL) MODE292 */

A_PROCEDURE(struct A68t237 *,A68t366,(struct A68t237 *,struct A68t237 *),(struct A68t237 *,struct A68t237 *,void *));
typedef struct A68t366  A68_366 ;    /* PROC(REF MODE237,REF MODE237) REF MODE237 */

A_PROCEDURE(struct A68t237 *,A68t367,(struct A68t237 *,struct A68t237 *,struct A68t237 *),(struct A68t237 *,struct A68t237 *,struct A68t237 *,void *));
typedef struct A68t367  A68_367 ;    /* PROC(REF MODE237,REF MODE237,REF MODE237) REF MODE237 */

A_PROCEDURE(A68_BOOL ,A68t368,(struct A68t208 ,A68_BOOL ,A68_BOOL ),(struct A68t208 ,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t368  A68_368 ;    /* PROC(MODE208,BOOL,BOOL) BOOL */
struct A68t369 { A68_INT mode; union {
struct A68t202 * mode1;
struct A68t203 * mode2;
struct A68t204 * mode3;
struct A68t206 * mode4;
struct A68t209 * mode5;
} data; };
typedef struct A68t369  A68_369 ;    /* UNION(REF MODE202,REF MODE203,REF MODE204,REF MODE206,REF MODE209)  */
A_VECTOR(struct A68t208 *,A68t370);
typedef struct A68t370  A68_370 ;    /* VECTOR [] REF MODE208 */

A_PROCEDURE(A68_VOID ,A68t371,(struct A68t208 *,A68_BOOL ,struct A68t370 *),(struct A68t208 *,A68_BOOL ,struct A68t370 *,void *));
typedef struct A68t371  A68_371 ;    /* PROC(REF MODE208,BOOL) REF MODE370 */

A_PROCEDURE(A68_VOID ,A68t372,(A68_BOOL ,struct A68t370 *),(A68_BOOL ,struct A68t370 *,void *));
typedef struct A68t372  A68_372 ;    /* PROC(BOOL) MODE370 */
A_ISTRUCT(struct A68t208 *,2,A68t373);
typedef struct A68t373  A68_373 ;    /* STRUCT 2 REF MODE208 */
A_ISTRUCT(struct A68t208 *,3,A68t374);
typedef struct A68t374  A68_374 ;    /* STRUCT 3 REF MODE208 */
A_ISTRUCT(A68_CHAR ,50,A68t375);
typedef struct A68t375  A68_375 ;    /* STRUCT 50 CHAR */

A_PROCEDURE(A68_VOID ,A68t376,(struct A68t284 *,struct A68t287 *),(struct A68t284 *,struct A68t287 *,void *));
typedef struct A68t376  A68_376 ;    /* PROC(REF MODE284,REF MODE287) VOID */

A_PROCEDURE(A68_VOID ,A68t377,(A68_BOOL ,struct A68t286 *),(A68_BOOL ,struct A68t286 *,void *));
typedef struct A68t377  A68_377 ;    /* PROC(BOOL) MODE286 */
struct A68t378{
struct A68t237 * Lets;
struct A68t223 * Actuals;
struct A68t286  Nametypes;
};
typedef struct A68t378  A68_378 ;    /* STRUCT(REF MODE237,REF MODE223,REF MODE286)  */

A_PROCEDURE(A68_VOID ,A68t379,(struct A68t370 ,struct A68t378 *),(struct A68t370 ,struct A68t378 *,void *));
typedef struct A68t379  A68_379 ;    /* PROC(MODE370) MODE378 */

A_PROCEDURE(A68_VOID ,A68t380,(struct A68t208 ,struct A68t286 ,struct A68t186 ,struct A68t223 *,A68_INT ,struct A68t231 *),(struct A68t208 ,struct A68t286 ,struct A68t186 ,struct A68t223 *,A68_INT ,struct A68t231 *,void *));
typedef struct A68t380  A68_380 ;    /* PROC(MODE208,REF MODE286,MODE186,REF MODE223,INT) MODE231 */

A_PROCEDURE(struct A68t237 *,A68t381,(struct A68t208 *,A68_BOOL ),(struct A68t208 *,A68_BOOL ,void *));
typedef struct A68t381  A68_381 ;    /* PROC(REF MODE208,BOOL) REF MODE237 */

A_PROCEDURE(A68_VOID ,A68t382,(struct A68t231 *,A68_BOOL ),(struct A68t231 *,A68_BOOL ,void *));
typedef struct A68t382  A68_382 ;    /* PROC(REF MODE231,BOOL) VOID */

A_PROCEDURE(struct A68t237 *,A68t383,(struct A68t208 *),(struct A68t208 *,void *));
typedef struct A68t383  A68_383 ;    /* PROC(REF MODE208) REF MODE237 */

A_PROCEDURE(struct A68t237 *,A68t384,(struct A68t239 ),(struct A68t239 ,void *));
typedef struct A68t384  A68_384 ;    /* PROC(MODE239) REF MODE237 */
A_ISTRUCT(A68_CHAR ,48,A68t385);
typedef struct A68t385  A68_385 ;    /* STRUCT 48 CHAR */

A_PROCEDURE(struct A68t237 *,A68t386,(struct A68t223 *),(struct A68t223 *,void *));
typedef struct A68t386  A68_386 ;    /* PROC(REF MODE223) REF MODE237 */
struct A68t387 { A68_INT mode; union {
struct A68t202 * mode1;
struct A68t203 * mode2;
struct A68t204 * mode3;
struct A68t206 * mode4;
struct A68t209 * mode5;
struct A68t210 * mode6;
} data; };
typedef struct A68t387  A68_387 ;    /* UNION(REF MODE202,REF MODE203,REF MODE204,REF MODE206,REF MODE209,REF MODE210)  */
struct A68t388 { A68_INT mode; union {
struct A68t227 * mode1;
struct A68t216 * mode2;
struct A68t215 * mode3;
struct A68t220 * mode4;
struct A68t221 * mode5;
struct A68t235 * mode6;
} data; };
typedef struct A68t388  A68_388 ;    /* UNION(REF MODE227,REF MODE216,REF MODE215,REF MODE220,REF MODE221,REF MODE235)  */
struct A68t389 { A68_INT mode; union {
struct A68t225 * mode1;
struct A68t226 * mode2;
} data; };
typedef struct A68t389  A68_389 ;    /* UNION(REF MODE225,REF MODE226)  */
A_ISTRUCT(A68_CHAR ,26,A68t390);
typedef struct A68t390  A68_390 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t391);
typedef struct A68t391  A68_391 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t392);
typedef struct A68t392  A68_392 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_CHAR ,37,A68t393);
typedef struct A68t393  A68_393 ;    /* STRUCT 37 CHAR */

A_PROCEDURE(struct A68t293 *,A68t394,(struct A68t293 *),(struct A68t293 *,void *));
typedef struct A68t394  A68_394 ;    /* PROC(REF MODE293) REF MODE293 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from modeprocs --- */
extern A68_171 * NNMATRN_makefint(A68_INT );
extern A68_INT  XOMATRN_int(struct A68t170 );
extern A68_284 * CQMATRN_get_outerfn(struct A68t293 );
extern A68_190 * MUNATRN_fndec_tfn(struct A68t284 *);
extern A68_INT  DTNATRN_names_size(struct A68t249 *);
extern A68_VOID  VUNATRN_unit_type(struct A68t208 ,struct A68t284 *,struct A68t287 *,A68_186 *);
/* --- End of imports from modeprocs --- */


/* --- Imports from assmodes --- */
extern A68_VC  TTCAOST_nullid;
extern A68_189 * GAAATRN_niltstr;
extern A68_223 * IAAATRN_nilustr;
extern A68_268 * JAAATRN_niluchoices;
extern A68_249 * NAAATRN_nilnames;
extern A68_237 * SAAATRN_nilseries;
extern A68_182 * BBAATRN_nilformulas;
extern A68_168 * CBAATRN_nilusage;
extern A68_285  FBAATRN_nilmacspecs;
extern A68_250  ACAATRN_nullmacparams;
extern A68_253 * WGAATRN_makeunittag(struct A68t208 );
extern A68_166  ZHAATRN_attrnull;
#define VIAATRN_flattenboth 3
#define KKAATRN_usource 1
#define LKAATRN_usink 2
#define PKAATRN_localdec 2
extern A68_82  ZLAATRN_makeid;
/* --- End of imports from assmodes --- */


/* --- Imports from putstrings --- */
extern A68_VOID  FCAAOSI_intchars(A68_INT ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- Imports from basics --- */
extern A68_VOID  NKDAOST_sysfault(A68_VC );
/* --- End of imports from basics --- */


/* --- Imports from osinterface --- */
extern A68_34  BOBAOSI_update_access;
extern A68_34  FOBAOSI_update_truncate_access;
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
/* --- End of imports from osinterface --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void HNMATRN(void);   /* modeprocs */
extern void BAAATRN(void);   /* assmodes */
extern void MTAAOSL(void);   /* putstrings */
extern void JSCAOST(void);   /* basics */
extern void PCAAOST(void);   /* osinterface */
/* --- end of DECS initialisation functions --- */
static A68_353   NHLBTRN = {"$Id: kexpand.a68,v 34.2 1995/03/29 13:02:55 ella Exp $"}; 
A_GISVEC(A68_VC ,OHLBTRN,NHLBTRN,54)
static A68_INT  PHLBTRN_seed;
static A68_354   RHLBTRN = {"__"}; 
A_GISVEC(A68_VC ,THLBTRN,RHLBTRN,2)
static A68_358   VJLBTRN = {"Unexpected input type for reform"}; 
A_GISVEC(A68_VC ,WJLBTRN,VJLBTRN,32)
static A68_358   ZLLBTRN = {"Unexpected output type in reform"}; 
A_GISVEC(A68_VC ,AMLBTRN,ZLLBTRN,32)
static A68_362   VNLBTRN = {"unit function: non-empty series body"}; 
A_GISVEC(A68_VC ,WNLBTRN,VNLBTRN,36)
static A68_363   YNLBTRN = {"unit function: unexpected primitive function body"}; 
A_GISVEC(A68_VC ,ZNLBTRN,YNLBTRN,49)
static A68_375   UULBTRN = {"kexpand: cannot find subunits of this type of unit"}; 
A_GISVEC(A68_VC ,VULBTRN,UULBTRN,50)
static A68_362   WDMBTRN = {"kexpand: multiple joins not expanded"}; 
A_GISVEC(A68_VC ,XDMBTRN,WDMBTRN,36)
static A68_385   ZDMBTRN = {"kexpand: unexpected series step (PRINT or FAULT)"}; 
A_GISVEC(A68_VC ,AEMBTRN,ZDMBTRN,48)
static A68_358   GFMBTRN = {"kexpand: replicator not expanded"}; 
A_GISVEC(A68_VC ,HFMBTRN,GFMBTRN,32)
static A68_390   IFMBTRN = {"kexpand: UNULL encountered"}; 
A_GISVEC(A68_VC ,JFMBTRN,IFMBTRN,26)
static A68_391   KFMBTRN = {"kexpand: UFN encountered"}; 
A_GISVEC(A68_VC ,LFMBTRN,KFMBTRN,24)
static A68_392   MFMBTRN = {"kexpand: IF not transformed out"}; 
A_GISVEC(A68_VC ,NFMBTRN,MFMBTRN,31)
static A68_393   OFMBTRN = {"kexpand: sequence not transformed out"}; 
A_GISVEC(A68_VC ,PFMBTRN,OFMBTRN,37)
typedef struct   /* env of non-global proc */
{
A68_357  JILBTRN_flattenassemtype;
} LILBTRN_flattenassemtype;
typedef struct   /* env of non-global proc */
{
A68_359  AKLBTRN_buildassemtype;
} CKLBTRN_buildassemtype;
typedef struct   /* env of non-global proc */
{
A68_INT  FOLBTRN_new;
A_PAD_INT(PAD_104)
} JOLBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * EQLBTRN_index;
} LQLBTRN_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} YQLBTRN_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} IRLBTRN_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} SRLBTRN_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} DSLBTRN_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} OSLBTRN_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} YSLBTRN_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} JTLBTRN_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} TTLBTRN_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} DULBTRN_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} OULBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_284 * Fndec;
A68_286 * BVLBTRN_outernametypes;
} FVLBTRN_addnametypes;
typedef struct   /* env of non-global proc */
{
A68_284 * Fndec;
A68_287 * Environ;
A68_55  DVLBTRN_addnametypes;
} XVLBTRN_makelets;
typedef struct   /* env of non-global proc */
{
A68_287 * Environ;
A68_284 * Fndec;
A68_55  DVLBTRN_addnametypes;
} TXLBTRN_makenewfunction;
typedef struct   /* env of non-global proc */
{
A68_BOOL * TVLBTRN_atomic;
A68_284 * Fndec;
A68_287 * Environ;
A68_381 * OAMBTRN_walk;
A68_379  VVLBTRN_makelets;
A68_380  RXLBTRN_makenewfunction;
} UAMBTRN_isolate;
typedef struct   /* env of non-global proc */
{
A68_284 * Fndec;
A68_287 * Environ;
A68_381 * OAMBTRN_walk;
A68_BOOL * TVLBTRN_atomic;
A68_379  VVLBTRN_makelets;
A68_55  DVLBTRN_addnametypes;
} KBMBTRN_expandimplicitinstance;
typedef struct   /* env of non-global proc */
{
A68_287 * Environ;
} FDMBTRN_walkfnname;
typedef struct   /* env of non-global proc */
{
A68_BOOL * TVLBTRN_atomic;
A68_381 * OAMBTRN_walk;
A68_384  DDMBTRN_walkfnname;
} NDMBTRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_381 * OAMBTRN_walk;
} GEMBTRN_walkstr;
typedef struct   /* env of non-global proc */
{
A68_BOOL * TVLBTRN_atomic;
A68_381 * OAMBTRN_walk;
A68_386  EEMBTRN_walkstr;
A68_284 * Fndec;
A68_287 * Environ;
A68_381  SAMBTRN_isolate;
A68_383  IBMBTRN_expandimplicitinstance;
A68_382 * PAMBTRN_walkseries;
} PEMBTRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_INT  N;
A_PAD_INT(PAD_105)
A68_284 * Fndec;
} JVLBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_370  Units;
} EWLBTRN_generator;
typedef struct   /* env of non-global proc */
{
A68_286  Nametypes;
} IYLBTRN_generator;

A_STATIC A68_VOID  QHLBTRN_simnullid(A68_VC  *ReturnedValue);

A_STATIC A68_VOID  WHLBTRN_reseedsimnullid(void);

A_STATIC A68_231 * ZHLBTRN_transformreform(A68_284 * Fndec, A68_287 * E);

A_STATIC A68_VOID  DILBTRN_append(A68_223 ** A, A68_223 * B);

A_STATIC A68_223 * KILBTRN_flattenassemtype(A68_208 * Thisunit, A68_186  Inputtype, A68_287 * E, void *NonLocals);

A_STATIC A68_VOID  BKLBTRN_buildassemtype(A68_223 ** Unitlist, A68_186  Outputtype, A68_287 * E, A68_208  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  ANLBTRN_isstringtype(A68_186  T, A68_287 * E);

A_STATIC A68_VOID  KNLBTRN_unitfunction(A68_280  Fnbody, A68_208  *ReturnedValue);

A_STATIC A68_INT  DOLBTRN_addnewfn(A68_284 * Newdec, A68_287 * Environ);

A_STATIC A68_VOID  IOLBTRN_generator(A68_BOOL  GOLBTRN_anonymous, A68_292  *ReturnedValue, void *NonLocals);

A_STATIC A68_237 * WOLBTRN_append(A68_237 * Left, A68_237 * Right);

A_STATIC A68_237 * DPLBTRN_addsteps(A68_237 * Outer, A68_237 * Before, A68_237 * New);

A_STATIC A68_BOOL  LPLBTRN_casetranslatable(A68_208  Unit, A68_BOOL  Output, A68_BOOL  Nameallowed);

A_STATIC A68_VOID  YPLBTRN_subunits(A68_208 * Unit, A68_BOOL  Wholebody, A68_370  *ReturnedValue);

A_STATIC A68_VOID  KQLBTRN_generator(A68_BOOL  IQLBTRN_anonymous, A68_370  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XQLBTRN_generator(A68_BOOL  VQLBTRN_anonymous, A68_370  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HRLBTRN_generator(A68_BOOL  FRLBTRN_anonymous, A68_370  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RRLBTRN_generator(A68_BOOL  PRLBTRN_anonymous, A68_370  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CSLBTRN_generator(A68_BOOL  ASLBTRN_anonymous, A68_370  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NSLBTRN_generator(A68_BOOL  LSLBTRN_anonymous, A68_370  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XSLBTRN_generator(A68_BOOL  VSLBTRN_anonymous, A68_370  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ITLBTRN_generator(A68_BOOL  GTLBTRN_anonymous, A68_370  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  STLBTRN_generator(A68_BOOL  QTLBTRN_anonymous, A68_370  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CULBTRN_generator(A68_BOOL  AULBTRN_anonymous, A68_370  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NULBTRN_generator(A68_BOOL  LULBTRN_anonymous, A68_370  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZULBTRN_expandbody(A68_284 * Fndec, A68_287 * Environ);

A_STATIC A68_VOID  EVLBTRN_addnametypes(A68_INT  N, void *NonLocals);

A_STATIC A68_VOID  IVLBTRN_generator(A68_BOOL  GVLBTRN_anonymous, A68_286  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WVLBTRN_makelets(A68_370  Units, A68_378  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DWLBTRN_generator(A68_BOOL  BWLBTRN_anonymous, A68_286  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SXLBTRN_makenewfunction(A68_208  Body, A68_286  Nametypes, A68_186  Outputtype, A68_223 * Actuals, A68_INT  Numlocals, A68_231  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HYLBTRN_generator(A68_BOOL  FYLBTRN_anonymous, A68_286  *ReturnedValue, void *NonLocals);

A_STATIC A68_237 * TAMBTRN_isolate(A68_208 * Unit, A68_BOOL  Top, void *NonLocals);

A_STATIC A68_237 * JBMBTRN_expandimplicitinstance(A68_208 * Unit, void *NonLocals);

A_STATIC A68_237 * EDMBTRN_walkfnname(A68_239  Step, void *NonLocals);

A_STATIC A68_VOID  MDMBTRN_anonymous(A68_231 * Series, A68_BOOL  Top, void *NonLocals);

A_STATIC A68_237 * FEMBTRN_walkstr(A68_223 * Str, void *NonLocals);

A_STATIC A68_237 * OEMBTRN_anonymous(A68_208 * Unit, A68_BOOL  Top, void *NonLocals);

A68_293 * GGMBTRN_expandtoatomic(A68_293 * F);

A_STATIC A68_VOID  IVLBTRN_generator(A68_BOOL  GVLBTRN_anonymous, A68_286  *ReturnedValue, void *NonLocals)
#define NL(x) (((JVLBTRN_generator *)NonLocals)->x)
{ 
A68_286  KVLBTRN;  /* clause result */
A68_286  LVLBTRN;  /* OPERATORS - dynamic generator */
{ 
LVLBTRN.upb = (2*(NL(N)+(*(&(NL(Fndec)->Nametypes))).upb)) ;
( GVLBTRN_anonymous? A_VLOC(A68_283 ,LVLBTRN): A_VHEAP(A68_283 ,LVLBTRN) );
KVLBTRN = LVLBTRN;
} 
*ReturnedValue = (KVLBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  DWLBTRN_generator(A68_BOOL  BWLBTRN_anonymous, A68_286  *ReturnedValue, void *NonLocals)
#define NL(x) (((EWLBTRN_generator *)NonLocals)->x)
{ 
A68_286  FWLBTRN;  /* clause result */
A68_286  GWLBTRN;  /* OPERATORS - dynamic generator */
{ 
GWLBTRN.upb = NL(Units).upb ;
( BWLBTRN_anonymous? A_VLOC(A68_283 ,GWLBTRN): A_VHEAP(A68_283 ,GWLBTRN) );
FWLBTRN = GWLBTRN;
} 
*ReturnedValue = (FWLBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  HYLBTRN_generator(A68_BOOL  FYLBTRN_anonymous, A68_286  *ReturnedValue, void *NonLocals)
#define NL(x) (((IYLBTRN_generator *)NonLocals)->x)
{ 
A68_286  JYLBTRN;  /* clause result */
A68_286  KYLBTRN;  /* OPERATORS - dynamic generator */
{ 
KYLBTRN.upb = (NL(Nametypes).upb+1) ;
( FYLBTRN_anonymous? A_VLOC(A68_283 ,KYLBTRN): A_VHEAP(A68_283 ,KYLBTRN) );
JYLBTRN = KYLBTRN;
} 
*ReturnedValue = (JYLBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  DILBTRN_append(A68_223 ** A, A68_223 * B)
{ 
A68_223 * EILBTRN_thisunit;
A68_223 ** FILBTRN;  /* YIELD */
A_PROC_ENTRY(append);
 /* line 139: */
 /* line 140: */
if ( ((*A)==IAAATRN_nilustr) )
{ 
 /* line 141: */
 /* line 142: */
(*A) = B;
} 
else
{ 
EILBTRN_thisunit = (*A);
 /* line 143: */
for ( ;; )
{ 
 /* line 144: */
if ( !(((*(&(EILBTRN_thisunit->Rest)))!=IAAATRN_nilustr)) ) break;
 /* line 145: */
EILBTRN_thisunit = (*(&(EILBTRN_thisunit->Rest)));
}
 /* line 146: */
 /* line 147: */
FILBTRN = (&(EILBTRN_thisunit->Rest)) ;
(*FILBTRN) = B;
} 
A_PROC_EXIT(append);
return;
} 
#undef NL

A_STATIC A68_223 * KILBTRN_flattenassemtype(A68_208 * Thisunit, A68_186  Inputtype, A68_287 * E, void *NonLocals)
#define NL(x) (((LILBTRN_flattenassemtype *)NonLocals)->x)
{ 
A68_186  MILBTRN;  /* united object - for case conformity */
A68_187 * NILBTRN_tname;
A68_290  OILBTRN;  /* OPERATORS - simple index */
A68_INT  PILBTRN;  /* YIELD */
A68_201 * QILBTRN_typedec;
A68_199  RILBTRN;  /* united object - for case conformity */
A68_195 * SILBTRN_typetag;
A68_223 * TILBTRN;  /* clause result */
A68_223  UILBTRN;  /* collateral clause result */
A68_223 * VILBTRN;  /* YIELD */
A68_188 * WILBTRN_trow;
A68_INT  XILBTRN_size;
A68_223 * YILBTRN_unitlist;
A68_INT  ZILBTRN_i;
A68_INT  AJLBTRN;  /* to part of loop */
A68_208 * BJLBTRN_newunit;
A68_218  CJLBTRN;  /* collateral clause result */
A68_170  DJLBTRN;  /* OPERATORS - mode -> union mode */
A68_171 * EJLBTRN;  /* YIELD */
A68_218 * FJLBTRN;  /* YIELD */
A68_208  GJLBTRN;  /* OPERATORS - mode -> union mode */
A68_189 * HJLBTRN_tstr;
A68_223 * IJLBTRN_unitlist;
A68_189 * JJLBTRN_thisstr;
A68_INT  KJLBTRN_i;
A68_208 * LJLBTRN_newunit;
A68_218  MJLBTRN;  /* collateral clause result */
A68_170  NJLBTRN;  /* OPERATORS - mode -> union mode */
A68_171 * OJLBTRN;  /* YIELD */
A68_218 * PJLBTRN;  /* YIELD */
A68_208  QJLBTRN;  /* OPERATORS - mode -> union mode */
A68_191 * RJLBTRN_tbracket;
A68_192 * SJLBTRN_tstring;
A68_223  TJLBTRN;  /* collateral clause result */
A68_223 * UJLBTRN;  /* YIELD */
A_PROC_ENTRY(flattenassemtype);
 /* line 154: */
 /* line 155: */
{ 
 /* line 156: */
MILBTRN = Inputtype ;
switch ( MILBTRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
NILBTRN_tname = (MILBTRN.data.mode1);
 /* line 157: */
 /* line 158: */
{ 
OILBTRN = (*(&(E->Types))) ;
PILBTRN = (*(&(NILBTRN_tname->Typeno))) ;
QILBTRN_typedec = (*(&A_VINDEX(OILBTRN,PILBTRN)));
 /* line 159: */
 /* line 160: */
RILBTRN = (*(&(QILBTRN_typedec->Body))) ;
switch ( RILBTRN.mode )
{ 
case 3: /* REF STRUCT(MODE186)  */
SILBTRN_typetag = (RILBTRN.data.mode3);
 /* line 161: */
 /* line 162: */
 /* line 163: */
TILBTRN = A_CALLPROC(NL(JILBTRN_flattenassemtype),(Thisunit, (*(&(SILBTRN_typetag->Tag))), E),(Thisunit, (*(&(SILBTRN_typetag->Tag))), E,(NL(JILBTRN_flattenassemtype)).nonlocals));
break;
default: 
UILBTRN.Elem = (*Thisunit);
 /* line 164: */
UILBTRN.Rest = IAAATRN_nilustr;
 /* line 165: */
 /* line 166: */
VILBTRN = A_HEAP(A68_223 ) ;
(*VILBTRN) = UILBTRN ;
TILBTRN = VILBTRN;
break;
} 
} 
break;
case 2: /* REF STRUCT(MODE170,MODE186)  */
WILBTRN_trow = (MILBTRN.data.mode2);
 /* line 167: */
 /* line 168: */
{ 
XILBTRN_size = XOMATRN_int((*(&(WILBTRN_trow->Size))));
 /* line 169: */
YILBTRN_unitlist = IAAATRN_nilustr;
 /* line 170: */
AJLBTRN = XILBTRN_size;
for ( ZILBTRN_i = 1;
ZILBTRN_i <= AJLBTRN;
ZILBTRN_i += 1 )
{ 
 /* line 171: */
BJLBTRN_newunit = (A_HEAP(A68_208 ));
CJLBTRN.Unit = (*Thisunit);
EJLBTRN = NNMATRN_makefint(ZILBTRN_i) ;
CJLBTRN.Index = A_UNITE(DJLBTRN,mode1,1,EJLBTRN);
FJLBTRN = A_HEAP(A68_218 ) ;
(*FJLBTRN) = CJLBTRN ;
(*BJLBTRN_newunit) = A_UNITE(GJLBTRN,mode16,16,FJLBTRN);
 /* line 172: */
 /* line 173: */
DILBTRN_append((&YILBTRN_unitlist), A_CALLPROC(NL(JILBTRN_flattenassemtype),(BJLBTRN_newunit, (*(&(WILBTRN_trow->Elem))), E),(BJLBTRN_newunit, (*(&(WILBTRN_trow->Elem))), E,(NL(JILBTRN_flattenassemtype)).nonlocals)));
}
 /* line 174: */
 /* line 175: */
 /* line 176: */
TILBTRN = YILBTRN_unitlist;
} 
break;
case 3: /* REF STRUCT(MODE186,REF MODE189)  */
HJLBTRN_tstr = (MILBTRN.data.mode3);
 /* line 177: */
 /* line 178: */
{ 
IJLBTRN_unitlist = IAAATRN_nilustr;
 /* line 179: */
JJLBTRN_thisstr = HJLBTRN_tstr;
 /* line 180: */
KJLBTRN_i = 0;
 /* line 181: */
for ( ;; )
{ 
 /* line 182: */
if ( !((JJLBTRN_thisstr!=GAAATRN_niltstr)) ) break;
LJLBTRN_newunit = (A_HEAP(A68_208 ));
 /* line 183: */
MJLBTRN.Unit = (*Thisunit);
OJLBTRN = NNMATRN_makefint(KJLBTRN_i+=1) ;
MJLBTRN.Index = A_UNITE(NJLBTRN,mode1,1,OJLBTRN);
PJLBTRN = A_HEAP(A68_218 ) ;
(*PJLBTRN) = MJLBTRN ;
(*LJLBTRN_newunit) = A_UNITE(QJLBTRN,mode16,16,PJLBTRN);
 /* line 184: */
 /* line 185: */
DILBTRN_append((&IJLBTRN_unitlist), A_CALLPROC(NL(JILBTRN_flattenassemtype),(LJLBTRN_newunit, (*(&(JJLBTRN_thisstr->Elem))), E),(LJLBTRN_newunit, (*(&(JJLBTRN_thisstr->Elem))), E,(NL(JILBTRN_flattenassemtype)).nonlocals)));
 /* line 186: */
 /* line 187: */
JJLBTRN_thisstr = (*(&(JJLBTRN_thisstr->Rest)));
}
 /* line 188: */
 /* line 189: */
 /* line 190: */
TILBTRN = IJLBTRN_unitlist;
} 
break;
case 5: /* REF STRUCT(MODE186)  */
RJLBTRN_tbracket = (MILBTRN.data.mode5);
 /* line 191: */
 /* line 192: */
TILBTRN = A_CALLPROC(NL(JILBTRN_flattenassemtype),(Thisunit, (*(&(RJLBTRN_tbracket->Type))), E),(Thisunit, (*(&(RJLBTRN_tbracket->Type))), E,(NL(JILBTRN_flattenassemtype)).nonlocals));
break;
case 6: /* REF STRUCT(MODE170,MODE186)  */
SJLBTRN_tstring = (MILBTRN.data.mode6);
 /* line 193: */
TJLBTRN.Elem = (*Thisunit);
 /* line 194: */
TJLBTRN.Rest = IAAATRN_nilustr;
UJLBTRN = A_HEAP(A68_223 ) ;
(*UJLBTRN) = TJLBTRN ;
TILBTRN = UJLBTRN;
break;
default: 
NKDAOST_sysfault(WJLBTRN);
 /* line 195: */
 /* line 196: */
 /* line 197: */
TILBTRN = IAAATRN_nilustr;
break;
} 
} 
A_PROC_EXIT(flattenassemtype);
return( TILBTRN );
} 
#undef NL
 /* line 204: */

A_STATIC A68_VOID  BKLBTRN_buildassemtype(A68_223 ** Unitlist, A68_186  Outputtype, A68_287 * E, A68_208  *ReturnedValue, void *NonLocals)
#define NL(x) (((CKLBTRN_buildassemtype *)NonLocals)->x)
{ 
A68_186  DKLBTRN;  /* united object - for case conformity */
A68_187 * EKLBTRN_tname;
A68_290  FKLBTRN;  /* OPERATORS - simple index */
A68_INT  GKLBTRN;  /* YIELD */
A68_201 * HKLBTRN_typedec;
A68_199  IKLBTRN;  /* united object - for case conformity */
A68_195 * JKLBTRN_typetag;
A68_208  KKLBTRN;  /* clause result */
A68_208  LKLBTRN;  /* avoid structure result */
A68_208 * MKLBTRN_result;
A68_188 * NKLBTRN_trow;
A68_INT  OKLBTRN_size;
A68_208 * PKLBTRN_leftunit;
A68_222  QKLBTRN;  /* collateral clause result */
A68_170  RKLBTRN;  /* OPERATORS - mode -> union mode */
A68_171 * SKLBTRN;  /* YIELD */
A68_208  TKLBTRN;  /* avoid structure result */
A68_222 * UKLBTRN;  /* YIELD */
A68_208  VKLBTRN;  /* OPERATORS - mode -> union mode */
A68_INT  WKLBTRN_i;
A68_INT  XKLBTRN;  /* to part of loop */
A68_208 * YKLBTRN_rightunit;
A68_222  ZKLBTRN;  /* collateral clause result */
A68_170  ALLBTRN;  /* OPERATORS - mode -> union mode */
A68_171 * BLLBTRN;  /* YIELD */
A68_208  CLLBTRN;  /* avoid structure result */
A68_222 * DLLBTRN;  /* YIELD */
A68_208  ELLBTRN;  /* OPERATORS - mode -> union mode */
A68_224  FLLBTRN;  /* collateral clause result */
A68_208 * GLLBTRN;  /* YIELD */
A68_224 * HLLBTRN;  /* YIELD */
A68_208  ILLBTRN;  /* OPERATORS - mode -> union mode */
A68_189 * JLLBTRN_tstr;
A68_223  KLLBTRN;  /* collateral clause result */
A68_208  LLLBTRN;  /* avoid structure result */
A68_223 * NLLBTRN;  /* YIELD */
A68_223 * MLLBTRN_thisunit;
A68_208 * OLLBTRN_newunit;
A68_208  PLLBTRN;  /* OPERATORS - mode -> union mode */
A68_189 * QLLBTRN_thisstr;
A68_223  RLLBTRN;  /* collateral clause result */
A68_208  SLLBTRN;  /* avoid structure result */
A68_223 * TLLBTRN;  /* YIELD */
A68_223 ** ULLBTRN;  /* YIELD */
A68_191 * VLLBTRN_tbracket;
A68_208  WLLBTRN;  /* avoid structure result */
A68_192 * XLLBTRN_tstrg;
A68_208 * YLLBTRN_result;
A68_208  BMLBTRN;  /* OPERATORS - mode -> union mode */
A68_236 * CMLBTRN;  /* YIELD */
A_PROC_ENTRY(buildassemtype);
 /* line 205: */
 /* line 206: */
{ 
 /* line 207: */
DKLBTRN = Outputtype ;
switch ( DKLBTRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
EKLBTRN_tname = (DKLBTRN.data.mode1);
 /* line 208: */
 /* line 209: */
{ 
FKLBTRN = (*(&(E->Types))) ;
GKLBTRN = (*(&(EKLBTRN_tname->Typeno))) ;
HKLBTRN_typedec = (*(&A_VINDEX(FKLBTRN,GKLBTRN)));
 /* line 210: */
 /* line 211: */
IKLBTRN = (*(&(HKLBTRN_typedec->Body))) ;
switch ( IKLBTRN.mode )
{ 
case 3: /* REF STRUCT(MODE186)  */
JKLBTRN_typetag = (IKLBTRN.data.mode3);
 /* line 212: */
 /* line 213: */
 /* line 214: */
A_CALLPROC(NL(AKLBTRN_buildassemtype),(Unitlist, (*(&(JKLBTRN_typetag->Tag))), E, &LKLBTRN),(Unitlist, (*(&(JKLBTRN_typetag->Tag))), E, &LKLBTRN,(NL(AKLBTRN_buildassemtype)).nonlocals));
KKLBTRN = LKLBTRN;
break;
default: 
MKLBTRN_result = (A_HEAP(A68_208 ));
(*MKLBTRN_result) = (*(&((*Unitlist)->Elem)));
 /* line 215: */
(*Unitlist) = (*(&((*Unitlist)->Rest)));
 /* line 216: */
 /* line 217: */
 /* line 218: */
 /* line 219: */
KKLBTRN = (*MKLBTRN_result);
break;
} 
} 
break;
case 2: /* REF STRUCT(MODE170,MODE186)  */
NKLBTRN_trow = (DKLBTRN.data.mode2);
 /* line 220: */
 /* line 221: */
{ 
OKLBTRN_size = XOMATRN_int((*(&(NKLBTRN_trow->Size))));
 /* line 222: */
PKLBTRN_leftunit = (A_HEAP(A68_208 ));
 /* line 223: */
SKLBTRN = NNMATRN_makefint(1) ;
QKLBTRN.Size = A_UNITE(RKLBTRN,mode1,1,SKLBTRN);
A_CALLPROC(NL(AKLBTRN_buildassemtype),(Unitlist, (*(&(NKLBTRN_trow->Elem))), E, &TKLBTRN),(Unitlist, (*(&(NKLBTRN_trow->Elem))), E, &TKLBTRN,(NL(AKLBTRN_buildassemtype)).nonlocals));
QKLBTRN.Elem = TKLBTRN;
UKLBTRN = A_HEAP(A68_222 ) ;
(*UKLBTRN) = QKLBTRN ;
(*PKLBTRN_leftunit) = A_UNITE(VKLBTRN,mode20,20,UKLBTRN);
 /* line 225: */
XKLBTRN = OKLBTRN_size;
for ( WKLBTRN_i = 2;
WKLBTRN_i <= XKLBTRN;
WKLBTRN_i += 1 )
{ 
 /* line 226: */
YKLBTRN_rightunit = (A_HEAP(A68_208 ));
 /* line 227: */
BLLBTRN = NNMATRN_makefint(1) ;
ZKLBTRN.Size = A_UNITE(ALLBTRN,mode1,1,BLLBTRN);
A_CALLPROC(NL(AKLBTRN_buildassemtype),(Unitlist, (*(&(NKLBTRN_trow->Elem))), E, &CLLBTRN),(Unitlist, (*(&(NKLBTRN_trow->Elem))), E, &CLLBTRN,(NL(AKLBTRN_buildassemtype)).nonlocals));
ZKLBTRN.Elem = CLLBTRN;
DLLBTRN = A_HEAP(A68_222 ) ;
(*DLLBTRN) = ZKLBTRN ;
(*YKLBTRN_rightunit) = A_UNITE(ELLBTRN,mode20,20,DLLBTRN);
 /* line 228: */
FLLBTRN.String = A68_FALSE;
 /* line 229: */
FLLBTRN.Sort = VIAATRN_flattenboth;
 /* line 230: */
GLLBTRN = A_HEAP(A68_208 ) ;
FLLBTRN.Left = (*GLLBTRN) = (*PKLBTRN_leftunit);
 /* line 231: */
FLLBTRN.Right = (*YKLBTRN_rightunit);
HLLBTRN = A_HEAP(A68_224 ) ;
(*HLLBTRN) = FLLBTRN ;
(*PKLBTRN_leftunit) = A_UNITE(ILLBTRN,mode22,22,HLLBTRN);
}
 /* line 232: */
 /* line 233: */
 /* line 234: */
KKLBTRN = (*PKLBTRN_leftunit);
} 
break;
case 3: /* REF STRUCT(MODE186,REF MODE189)  */
JLLBTRN_tstr = (DKLBTRN.data.mode3);
 /* line 235: */
 /* line 236: */
{ 
 /* line 237: */
A_CALLPROC(NL(AKLBTRN_buildassemtype),(Unitlist, (*(&(JLLBTRN_tstr->Elem))), E, &LLLBTRN),(Unitlist, (*(&(JLLBTRN_tstr->Elem))), E, &LLLBTRN,(NL(AKLBTRN_buildassemtype)).nonlocals));
KLLBTRN.Elem = LLLBTRN;
KLLBTRN.Rest = IAAATRN_nilustr;
NLLBTRN = A_HEAP(A68_223 ) ;
(*NLLBTRN) = KLLBTRN ;
MLLBTRN_thisunit = NLLBTRN;
 /* line 238: */
OLLBTRN_newunit = (A_HEAP(A68_208 ));
(*OLLBTRN_newunit) = A_UNITE(PLLBTRN,mode21,21,MLLBTRN_thisunit);
 /* line 240: */
QLLBTRN_thisstr = (*(&(JLLBTRN_tstr->Rest)));
 /* line 241: */
for ( ;; )
{ 
 /* line 242: */
if ( !((QLLBTRN_thisstr!=GAAATRN_niltstr)) ) break;
 /* line 243: */
A_CALLPROC(NL(AKLBTRN_buildassemtype),(Unitlist, (*(&(QLLBTRN_thisstr->Elem))), E, &SLLBTRN),(Unitlist, (*(&(QLLBTRN_thisstr->Elem))), E, &SLLBTRN,(NL(AKLBTRN_buildassemtype)).nonlocals));
RLLBTRN.Elem = SLLBTRN;
RLLBTRN.Rest = IAAATRN_nilustr;
TLLBTRN = A_HEAP(A68_223 ) ;
(*TLLBTRN) = RLLBTRN ;
ULLBTRN = (&(MLLBTRN_thisunit->Rest)) ;
(*ULLBTRN) = TLLBTRN;
 /* line 244: */
MLLBTRN_thisunit = (*(&(MLLBTRN_thisunit->Rest)));
 /* line 245: */
 /* line 246: */
QLLBTRN_thisstr = (*(&(QLLBTRN_thisstr->Rest)));
}
 /* line 247: */
 /* line 248: */
 /* line 249: */
KKLBTRN = (*OLLBTRN_newunit);
} 
break;
case 5: /* REF STRUCT(MODE186)  */
VLLBTRN_tbracket = (DKLBTRN.data.mode5);
 /* line 250: */
 /* line 251: */
A_CALLPROC(NL(AKLBTRN_buildassemtype),(Unitlist, (*(&(VLLBTRN_tbracket->Type))), E, &WLLBTRN),(Unitlist, (*(&(VLLBTRN_tbracket->Type))), E, &WLLBTRN,(NL(AKLBTRN_buildassemtype)).nonlocals));
KKLBTRN = WLLBTRN;
break;
case 6: /* REF STRUCT(MODE170,MODE186)  */
XLLBTRN_tstrg = (DKLBTRN.data.mode6);
 /* line 252: */
 /* line 253: */
{ 
YLLBTRN_result = (A_HEAP(A68_208 ));
(*YLLBTRN_result) = (*(&((*Unitlist)->Elem)));
 /* line 254: */
(*Unitlist) = (*(&((*Unitlist)->Rest)));
 /* line 255: */
 /* line 256: */
 /* line 257: */
KKLBTRN = (*YLLBTRN_result);
} 
break;
default: 
NKDAOST_sysfault(AMLBTRN);
 /* line 258: */
 /* line 259: */
 /* line 260: */
CMLBTRN = A_HEAP(A68_236 ) ;
KKLBTRN = A_UNITE(BMLBTRN,mode34,34,CMLBTRN);
break;
} 
} 
A_PROC_EXIT(buildassemtype);
*ReturnedValue = (KKLBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  IOLBTRN_generator(A68_BOOL  GOLBTRN_anonymous, A68_292  *ReturnedValue, void *NonLocals)
#define NL(x) (((JOLBTRN_generator *)NonLocals)->x)
{ 
A68_292  KOLBTRN;  /* clause result */
A68_292  LOLBTRN;  /* OPERATORS - dynamic generator */
{ 
LOLBTRN.upb = NL(FOLBTRN_new) ;
( GOLBTRN_anonymous? A_VLOC(A68_284 *,LOLBTRN): A_VHEAP(A68_284 *,LOLBTRN) );
KOLBTRN = LOLBTRN;
} 
*ReturnedValue = (KOLBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  KQLBTRN_generator(A68_BOOL  IQLBTRN_anonymous, A68_370  *ReturnedValue, void *NonLocals)
#define NL(x) (((LQLBTRN_generator *)NonLocals)->x)
{ 
A68_370  MQLBTRN;  /* clause result */
A68_370  NQLBTRN;  /* OPERATORS - dynamic generator */
{ 
NQLBTRN.upb = (*NL(EQLBTRN_index)) ;
( IQLBTRN_anonymous? A_VLOC(A68_208 *,NQLBTRN): A_VHEAP(A68_208 *,NQLBTRN) );
MQLBTRN = NQLBTRN;
} 
*ReturnedValue = (MQLBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  XQLBTRN_generator(A68_BOOL  VQLBTRN_anonymous, A68_370  *ReturnedValue, void *NonLocals)
#define NL(x) (((YQLBTRN_generator *)NonLocals)->x)
{ 
A68_370  ZQLBTRN;  /* clause result */
A68_370  ARLBTRN;  /* OPERATORS - dynamic generator */
{ 
ARLBTRN.upb = 1 ;
( VQLBTRN_anonymous? A_VLOC(A68_208 *,ARLBTRN): A_VHEAP(A68_208 *,ARLBTRN) );
ZQLBTRN = ARLBTRN;
} 
*ReturnedValue = (ZQLBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  HRLBTRN_generator(A68_BOOL  FRLBTRN_anonymous, A68_370  *ReturnedValue, void *NonLocals)
#define NL(x) (((IRLBTRN_generator *)NonLocals)->x)
{ 
A68_370  JRLBTRN;  /* clause result */
A68_370  KRLBTRN;  /* OPERATORS - dynamic generator */
{ 
KRLBTRN.upb = 1 ;
( FRLBTRN_anonymous? A_VLOC(A68_208 *,KRLBTRN): A_VHEAP(A68_208 *,KRLBTRN) );
JRLBTRN = KRLBTRN;
} 
*ReturnedValue = (JRLBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  RRLBTRN_generator(A68_BOOL  PRLBTRN_anonymous, A68_370  *ReturnedValue, void *NonLocals)
#define NL(x) (((SRLBTRN_generator *)NonLocals)->x)
{ 
A68_370  TRLBTRN;  /* clause result */
A68_370  URLBTRN;  /* OPERATORS - dynamic generator */
{ 
URLBTRN.upb = 2 ;
( PRLBTRN_anonymous? A_VLOC(A68_208 *,URLBTRN): A_VHEAP(A68_208 *,URLBTRN) );
TRLBTRN = URLBTRN;
} 
*ReturnedValue = (TRLBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  CSLBTRN_generator(A68_BOOL  ASLBTRN_anonymous, A68_370  *ReturnedValue, void *NonLocals)
#define NL(x) (((DSLBTRN_generator *)NonLocals)->x)
{ 
A68_370  ESLBTRN;  /* clause result */
A68_370  FSLBTRN;  /* OPERATORS - dynamic generator */
{ 
FSLBTRN.upb = 3 ;
( ASLBTRN_anonymous? A_VLOC(A68_208 *,FSLBTRN): A_VHEAP(A68_208 *,FSLBTRN) );
ESLBTRN = FSLBTRN;
} 
*ReturnedValue = (ESLBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  NSLBTRN_generator(A68_BOOL  LSLBTRN_anonymous, A68_370  *ReturnedValue, void *NonLocals)
#define NL(x) (((OSLBTRN_generator *)NonLocals)->x)
{ 
A68_370  PSLBTRN;  /* clause result */
A68_370  QSLBTRN;  /* OPERATORS - dynamic generator */
{ 
QSLBTRN.upb = 1 ;
( LSLBTRN_anonymous? A_VLOC(A68_208 *,QSLBTRN): A_VHEAP(A68_208 *,QSLBTRN) );
PSLBTRN = QSLBTRN;
} 
*ReturnedValue = (PSLBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  XSLBTRN_generator(A68_BOOL  VSLBTRN_anonymous, A68_370  *ReturnedValue, void *NonLocals)
#define NL(x) (((YSLBTRN_generator *)NonLocals)->x)
{ 
A68_370  ZSLBTRN;  /* clause result */
A68_370  ATLBTRN;  /* OPERATORS - dynamic generator */
{ 
ATLBTRN.upb = 2 ;
( VSLBTRN_anonymous? A_VLOC(A68_208 *,ATLBTRN): A_VHEAP(A68_208 *,ATLBTRN) );
ZSLBTRN = ATLBTRN;
} 
*ReturnedValue = (ZSLBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ITLBTRN_generator(A68_BOOL  GTLBTRN_anonymous, A68_370  *ReturnedValue, void *NonLocals)
#define NL(x) (((JTLBTRN_generator *)NonLocals)->x)
{ 
A68_370  KTLBTRN;  /* clause result */
A68_370  LTLBTRN;  /* OPERATORS - dynamic generator */
{ 
LTLBTRN.upb = 1 ;
( GTLBTRN_anonymous? A_VLOC(A68_208 *,LTLBTRN): A_VHEAP(A68_208 *,LTLBTRN) );
KTLBTRN = LTLBTRN;
} 
*ReturnedValue = (KTLBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  STLBTRN_generator(A68_BOOL  QTLBTRN_anonymous, A68_370  *ReturnedValue, void *NonLocals)
#define NL(x) (((TTLBTRN_generator *)NonLocals)->x)
{ 
A68_370  UTLBTRN;  /* clause result */
A68_370  VTLBTRN;  /* OPERATORS - dynamic generator */
{ 
VTLBTRN.upb = 1 ;
( QTLBTRN_anonymous? A_VLOC(A68_208 *,VTLBTRN): A_VHEAP(A68_208 *,VTLBTRN) );
UTLBTRN = VTLBTRN;
} 
*ReturnedValue = (UTLBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  CULBTRN_generator(A68_BOOL  AULBTRN_anonymous, A68_370  *ReturnedValue, void *NonLocals)
#define NL(x) (((DULBTRN_generator *)NonLocals)->x)
{ 
A68_370  EULBTRN;  /* clause result */
A68_370  FULBTRN;  /* OPERATORS - dynamic generator */
{ 
FULBTRN.upb = 2 ;
( AULBTRN_anonymous? A_VLOC(A68_208 *,FULBTRN): A_VHEAP(A68_208 *,FULBTRN) );
EULBTRN = FULBTRN;
} 
*ReturnedValue = (EULBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  NULBTRN_generator(A68_BOOL  LULBTRN_anonymous, A68_370  *ReturnedValue, void *NonLocals)
#define NL(x) (((OULBTRN_generator *)NonLocals)->x)
{ 
A68_370  PULBTRN;  /* clause result */
A68_370  QULBTRN;  /* OPERATORS - dynamic generator */
{ 
QULBTRN.upb = 1 ;
( LULBTRN_anonymous? A_VLOC(A68_208 *,QULBTRN): A_VHEAP(A68_208 *,QULBTRN) );
PULBTRN = QULBTRN;
} 
*ReturnedValue = (PULBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  EVLBTRN_addnametypes(A68_INT  N, void *NonLocals)
#define NL(x) (((FVLBTRN_addnametypes *)NonLocals)->x)
{ 
A68_377  HVLBTRN_generator;   /* proc value of non-global proc */
A68_286  MVLBTRN;  /* avoid structure result */
A68_286  NVLBTRN_new;
A68_286  OVLBTRN;  /* OPERATORS - trim index */
A68_286  PVLBTRN;  /* YIELD */
A68_286  QVLBTRN;  /* OPERATORS - assign op */
A68_286  RVLBTRN;  /* OPERATORS - trim index */
A68_286 * SVLBTRN;  /* YIELD */
A_PROC_ENTRY(addnametypes);
 /* line 572: */
 /* line 573: */
{ 
 /* line 574: */
if ( ((N+(*(&(NL(Fndec)->Nametypes))).upb)>(*NL(BVLBTRN_outernametypes)).upb) )
{ 
A_CLOSURE( HVLBTRN_generator, IVLBTRN_generator, JVLBTRN_generator );
(( JVLBTRN_generator * ) ( HVLBTRN_generator.nonlocals )) -> N = N;
(( JVLBTRN_generator * ) ( HVLBTRN_generator.nonlocals )) -> Fndec = NL(Fndec);
A_CALLPROC(HVLBTRN_generator,(A68_FALSE, &MVLBTRN),(A68_FALSE, &MVLBTRN,(HVLBTRN_generator).nonlocals));
NVLBTRN_new = MVLBTRN;
 /* line 575: */
PVLBTRN = A_VTRIM(OVLBTRN,(NVLBTRN_new),A_VTSCRIPT(&(OVLBTRN.upb),(NVLBTRN_new).upb,1,(*(&(NL(Fndec)->Nametypes))).upb)) ;
QVLBTRN = (*(&(NL(Fndec)->Nametypes))) ;
A_VASSIGN2(QVLBTRN,PVLBTRN,A68_283 );
 /* line 576: */
 /* line 577: */
(*NL(BVLBTRN_outernametypes)) = NVLBTRN_new;
} 
 /* line 578: */
 /* line 579: */
SVLBTRN = (&(NL(Fndec)->Nametypes)) ;
(*SVLBTRN) = A_VTRIM(RVLBTRN,((*NL(BVLBTRN_outernametypes))),A_VTSCRIPT(&(RVLBTRN.upb),((*NL(BVLBTRN_outernametypes))).upb,1,((*(&(NL(Fndec)->Nametypes))).upb+N)));
} 
A_PROC_EXIT(addnametypes);
return;
} 
#undef NL

A_STATIC A68_VOID  WVLBTRN_makelets(A68_370  Units, A68_378  *ReturnedValue, void *NonLocals)
#define NL(x) (((XVLBTRN_makelets *)NonLocals)->x)
{ 
A68_237 * YVLBTRN_newlets;
A68_223 * ZVLBTRN_actuals;
A68_INT  AWLBTRN_numnames;
A68_377  CWLBTRN_generator;   /* proc value of non-global proc */
A68_286  HWLBTRN;  /* avoid structure result */
A68_286  IWLBTRN_nametypes;
A68_INT  JWLBTRN_i;
A68_INT  KWLBTRN;  /* by part of loop */
A68_249 * LWLBTRN_names;
A68_249  MWLBTRN;  /* collateral clause result */
A68_242 * NWLBTRN_let;
A68_242  OWLBTRN;  /* collateral clause result */
A68_237  PWLBTRN;  /* collateral clause result */
A68_238  QWLBTRN;  /* OPERATORS - mode -> union mode */
A68_237 * RWLBTRN;  /* YIELD */
A68_283  SWLBTRN;  /* collateral clause result */
A68_VC  TWLBTRN;  /* avoid structure result */
A68_186  UWLBTRN;  /* avoid structure result */
A68_161  VWLBTRN;  /* OPERATORS - mode -> union mode */
A68_283 * WWLBTRN;  /* YIELD */
A68_213 * XWLBTRN_u1;
A68_213  YWLBTRN;  /* collateral clause result */
A68_208  ZWLBTRN;  /* OPERATORS - mode -> union mode */
A68_208 * AXLBTRN;  /* YIELD */
A68_213 * BXLBTRN_u2;
A68_213  CXLBTRN;  /* collateral clause result */
A68_223  DXLBTRN;  /* collateral clause result */
A68_208  EXLBTRN;  /* OPERATORS - mode -> union mode */
A68_223 * FXLBTRN;  /* YIELD */
A68_INT  GXLBTRN_oldupb;
A68_286  HXLBTRN;  /* OPERATORS - trim index */
A68_286  IXLBTRN;  /* OPERATORS - trim index */
A68_286  JXLBTRN;  /* YIELD */
A68_378  KXLBTRN;  /* collateral clause result */
A68_378  LXLBTRN;  /* clause result */
A_PROC_ENTRY(makelets);
 /* line 603: */
 /* line 604: */
{ 
YVLBTRN_newlets = SAAATRN_nilseries;
 /* line 605: */
ZVLBTRN_actuals = IAAATRN_nilustr;
 /* line 607: */
AWLBTRN_numnames = (*(&(NL(Fndec)->Nametypes))).upb;
 /* line 608: */
A_CLOSURE( CWLBTRN_generator, DWLBTRN_generator, EWLBTRN_generator );
(( EWLBTRN_generator * ) ( CWLBTRN_generator.nonlocals )) -> Units = Units;
A_CALLPROC(CWLBTRN_generator,(A68_FALSE, &HWLBTRN),(A68_FALSE, &HWLBTRN,(CWLBTRN_generator).nonlocals));
IWLBTRN_nametypes = HWLBTRN;
 /* line 610: */
KWLBTRN = (-1);
for ( JWLBTRN_i = Units.upb;
( KWLBTRN > 0 && JWLBTRN_i <= 1) ||
( KWLBTRN < 0 && JWLBTRN_i >= 1) ||
( KWLBTRN == 0 ) ;
JWLBTRN_i += KWLBTRN )
{ 
 /* line 611: */
AWLBTRN_numnames+=1;
 /* line 612: */
LWLBTRN_names = (A_HEAP(A68_249 ));
MWLBTRN.Nameno = AWLBTRN_numnames;
MWLBTRN.Rest = NAAATRN_nilnames;
(*LWLBTRN_names) = MWLBTRN;
 /* line 613: */
NWLBTRN_let = (A_HEAP(A68_242 ));
OWLBTRN.Letnames = LWLBTRN_names;
OWLBTRN.Unit = (*A_VINDEX(Units,JWLBTRN_i));
(*NWLBTRN_let) = OWLBTRN;
 /* line 614: */
PWLBTRN.Step = A_UNITE(QWLBTRN,mode8,8,NWLBTRN_let);
PWLBTRN.Rest = YVLBTRN_newlets;
RWLBTRN = A_HEAP(A68_237 ) ;
(*RWLBTRN) = PWLBTRN ;
YVLBTRN_newlets = RWLBTRN;
 /* line 616: */
 /* line 617: */
QHLBTRN_simnullid(  &TWLBTRN );
SWLBTRN.Name = TWLBTRN;
VUNATRN_unit_type( (*A_VINDEX(Units,JWLBTRN_i)), NL(Fndec), NL(Environ), &UWLBTRN );
SWLBTRN.Type = UWLBTRN;
SWLBTRN.Attr = A_UNITE(VWLBTRN,mode5,5,(&ZHAATRN_attrnull));
WWLBTRN = (&A_VINDEX(IWLBTRN_nametypes,JWLBTRN_i)) ;
(*WWLBTRN) = SWLBTRN;
 /* line 619: */
XWLBTRN_u1 = (A_HEAP(A68_213 ));
YWLBTRN.Sort = KKAATRN_usource;
YWLBTRN.Nameno = JWLBTRN_i;
(*XWLBTRN_u1) = YWLBTRN;
 /* line 620: */
AXLBTRN = A_VINDEX(Units,JWLBTRN_i) ;
(*AXLBTRN) = A_UNITE(ZWLBTRN,mode11,11,XWLBTRN_u1);
 /* line 622: */
BXLBTRN_u2 = (A_HEAP(A68_213 ));
CXLBTRN.Sort = KKAATRN_usource;
CXLBTRN.Nameno = AWLBTRN_numnames;
(*BXLBTRN_u2) = CXLBTRN;
 /* line 623: */
DXLBTRN.Elem = A_UNITE(EXLBTRN,mode11,11,BXLBTRN_u2);
 /* line 624: */
DXLBTRN.Rest = ZVLBTRN_actuals;
FXLBTRN = A_HEAP(A68_223 ) ;
(*FXLBTRN) = DXLBTRN ;
ZVLBTRN_actuals = FXLBTRN;
}
 /* line 626: */
GXLBTRN_oldupb = (*(&(NL(Fndec)->Nametypes))).upb;
 /* line 627: */
A_CALLPROC(NL(DVLBTRN_addnametypes),(IWLBTRN_nametypes.upb),(IWLBTRN_nametypes.upb,(NL(DVLBTRN_addnametypes)).nonlocals));
 /* line 628: */
HXLBTRN = (*(&(NL(Fndec)->Nametypes))) ;
JXLBTRN = A_VTRIM(IXLBTRN,(HXLBTRN),A_VTSCRIPT(&(IXLBTRN.upb),(HXLBTRN).upb,(GXLBTRN_oldupb+1),(HXLBTRN).upb)) ;
A_VASSIGN2(IWLBTRN_nametypes,JXLBTRN,A68_283 );
 /* line 630: */
KXLBTRN.Lets = YVLBTRN_newlets;
KXLBTRN.Actuals = ZVLBTRN_actuals;
 /* line 631: */
KXLBTRN.Nametypes = IWLBTRN_nametypes;
LXLBTRN = KXLBTRN;
} 
A_PROC_EXIT(makelets);
*ReturnedValue = (LXLBTRN);
return;
} 
#undef NL
 /* line 643: */
 /* line 644: */
 /* line 645: */
 /* line 646: */

A_STATIC A68_VOID  SXLBTRN_makenewfunction(A68_208  Body, A68_286  Nametypes, A68_186  Outputtype, A68_223 * Actuals, A68_INT  Numlocals, A68_231  *ReturnedValue, void *NonLocals)
#define NL(x) (((TXLBTRN_makenewfunction *)NonLocals)->x)
{ 
A68_280  UXLBTRN;  /* OPERATORS - mode -> union mode */
A68_253 * VXLBTRN;  /* YIELD */
A68_280  WXLBTRN_fbody;
A68_249 * XXLBTRN_inputs;
A68_249 ** YXLBTRN_ptr;
A68_INT  ZXLBTRN_i;
A68_INT  AYLBTRN;  /* to part of loop */
A68_249  BYLBTRN;  /* collateral clause result */
A68_249 * CYLBTRN;  /* YIELD */
A68_249 * DYLBTRN_outputs;
A68_249  EYLBTRN;  /* collateral clause result */
A68_377  GYLBTRN_generator;   /* proc value of non-global proc */
A68_286  LYLBTRN;  /* avoid structure result */
A68_286  MYLBTRN_newnametypes;
A68_283 * NYLBTRN_old;
A68_283 * OYLBTRN_new;
A68_286  PYLBTRN;  /* OPERATORS - trim index */
A68_286  QYLBTRN;  /* forall yield */
A68_INT  RYLBTRN;  /* forall loop counter */
A68_283  SYLBTRN;  /* collateral clause result */
A68_VC  TYLBTRN;  /* avoid structure result */
A68_161  UYLBTRN;  /* OPERATORS - mode -> union mode */
A68_283  VYLBTRN;  /* collateral clause result */
A68_VC  WYLBTRN;  /* avoid structure result */
A68_161  XYLBTRN;  /* OPERATORS - mode -> union mode */
A68_INT  YYLBTRN;  /* YIELD */
A68_283 * ZYLBTRN;  /* YIELD */
A68_284 * AZLBTRN_newdec;
A68_284  BZLBTRN;  /* collateral clause result */
A68_VC  CZLBTRN;  /* avoid structure result */
A68_161  DZLBTRN;  /* OPERATORS - mode -> union mode */
A68_INT  EZLBTRN_fnno;
A68_239 * FZLBTRN_fndecstep;
A68_INT * GZLBTRN;  /* YIELD */
A68_INT  HZLBTRN_upb;
A68_243 * IZLBTRN_makestep;
A68_243  JZLBTRN;  /* collateral clause result */
A68_248  KZLBTRN;  /* collateral clause result */
A68_161  LZLBTRN;  /* OPERATORS - mode -> union mode */
A68_248 * MZLBTRN;  /* YIELD */
A68_249  NZLBTRN;  /* collateral clause result */
A68_249 * OZLBTRN;  /* YIELD */
A68_283  PZLBTRN;  /* collateral clause result */
A68_VC  QZLBTRN;  /* avoid structure result */
A68_161  RZLBTRN;  /* OPERATORS - mode -> union mode */
A68_286  SZLBTRN;  /* OPERATORS - simple index */
A68_283 * TZLBTRN;  /* YIELD */
A68_213 * UZLBTRN_joinrhs;
A68_213  VZLBTRN;  /* collateral clause result */
A68_244 * WZLBTRN_joinstep;
A68_244  XZLBTRN;  /* collateral clause result */
A68_208  YZLBTRN;  /* OPERATORS - mode -> union mode */
A68_208  ZZLBTRN;  /* OPERATORS - mode -> union mode */
A68_213 * AAMBTRN_result;
A68_213  BAMBTRN;  /* collateral clause result */
A68_231  CAMBTRN;  /* collateral clause result */
A68_237  DAMBTRN;  /* collateral clause result */
A68_238  EAMBTRN;  /* OPERATORS - mode -> union mode */
A68_237  FAMBTRN;  /* collateral clause result */
A68_238  GAMBTRN;  /* OPERATORS - mode -> union mode */
A68_237  HAMBTRN;  /* collateral clause result */
A68_238  IAMBTRN;  /* OPERATORS - mode -> union mode */
A68_237 * JAMBTRN;  /* YIELD */
A68_237 * KAMBTRN;  /* YIELD */
A68_237 * LAMBTRN;  /* YIELD */
A68_208  MAMBTRN;  /* OPERATORS - mode -> union mode */
A68_231  NAMBTRN;  /* clause result */
A_PROC_ENTRY(makenewfunction);
 /* line 647: */
 /* line 649: */
{ 
VXLBTRN = WGAATRN_makeunittag(Body) ;
WXLBTRN_fbody = A_UNITE(UXLBTRN,mode1,1,VXLBTRN);
 /* line 652: */
XXLBTRN_inputs = NAAATRN_nilnames;
 /* line 653: */
YXLBTRN_ptr = (&XXLBTRN_inputs);
 /* line 654: */
 /* line 655: */
AYLBTRN = Nametypes.upb;
for ( ZXLBTRN_i = 1;
ZXLBTRN_i <= AYLBTRN;
ZXLBTRN_i += 1 )
{ 
BYLBTRN.Nameno = ZXLBTRN_i;
BYLBTRN.Rest = NAAATRN_nilnames;
CYLBTRN = A_HEAP(A68_249 ) ;
(*CYLBTRN) = BYLBTRN ;
(*YXLBTRN_ptr) = CYLBTRN;
 /* line 656: */
 /* line 657: */
YXLBTRN_ptr = (&((*YXLBTRN_ptr)->Rest));
}
 /* line 658: */
DYLBTRN_outputs = (A_HEAP(A68_249 ));
EYLBTRN.Nameno = (Nametypes.upb+1);
EYLBTRN.Rest = NAAATRN_nilnames;
(*DYLBTRN_outputs) = EYLBTRN;
 /* line 660: */
A_CLOSURE( GYLBTRN_generator, HYLBTRN_generator, IYLBTRN_generator );
(( IYLBTRN_generator * ) ( GYLBTRN_generator.nonlocals )) -> Nametypes = Nametypes;
A_CALLPROC(GYLBTRN_generator,(A68_FALSE, &LYLBTRN),(A68_FALSE, &LYLBTRN,(GYLBTRN_generator).nonlocals));
MYLBTRN_newnametypes = LYLBTRN;
 /* line 661: */
 /* line 662: */
QYLBTRN = A_VTRIM(PYLBTRN,(MYLBTRN_newnametypes),A_VTSCRIPT(&(PYLBTRN.upb),(MYLBTRN_newnametypes).upb,1,Nametypes.upb)) ;
RYLBTRN = Nametypes.upb -1;
if ( RYLBTRN != QYLBTRN.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
NYLBTRN_old = Nametypes.data;
OYLBTRN_new = QYLBTRN.data;
for (;RYLBTRN-- >= 0;
(NYLBTRN_old++
,OYLBTRN_new++
) )
{
QHLBTRN_simnullid(  &TYLBTRN );
SYLBTRN.Name = TYLBTRN;
SYLBTRN.Type = (*(&(NYLBTRN_old->Type)));
SYLBTRN.Attr = A_UNITE(UYLBTRN,mode5,5,(&ZHAATRN_attrnull));
(*OYLBTRN_new) = SYLBTRN;
}
 /* line 663: */
QHLBTRN_simnullid(  &WYLBTRN );
VYLBTRN.Name = WYLBTRN;
VYLBTRN.Type = Outputtype;
VYLBTRN.Attr = A_UNITE(XYLBTRN,mode5,5,(&ZHAATRN_attrnull));
YYLBTRN = MYLBTRN_newnametypes.upb ;
ZYLBTRN = (&A_VINDEX(MYLBTRN_newnametypes,YYLBTRN)) ;
(*ZYLBTRN) = VYLBTRN;
 /* line 666: */
AZLBTRN_newdec = (A_HEAP(A68_284 ));
 /* line 667: */
 /* line 668: */
BZLBTRN.Sort = PKAATRN_localdec;
 /* line 669: */
BZLBTRN.Macro = A68_FALSE;
 /* line 670: */
QHLBTRN_simnullid(  &CZLBTRN );
BZLBTRN.Fnname = CZLBTRN;
 /* line 671: */
BZLBTRN.Macspecs = FBAATRN_nilmacspecs;
 /* line 672: */
BZLBTRN.Attr = A_UNITE(DZLBTRN,mode5,5,(&ZHAATRN_attrnull));
 /* line 673: */
BZLBTRN.Inputs = XXLBTRN_inputs;
 /* line 674: */
BZLBTRN.Outputs = DYLBTRN_outputs;
 /* line 675: */
BZLBTRN.Nametypes = MYLBTRN_newnametypes;
 /* line 676: */
BZLBTRN.Fnbody = WXLBTRN_fbody;
BZLBTRN.Usage = CBAATRN_nilusage;
(*AZLBTRN_newdec) = BZLBTRN;
 /* line 680: */
EZLBTRN_fnno = DOLBTRN_addnewfn(AZLBTRN_newdec, NL(Environ));
 /* line 682: */
FZLBTRN_fndecstep = (A_HEAP(A68_239 ));
 /* line 683: */
GZLBTRN = (&(FZLBTRN_fndecstep->Fnno)) ;
(*GZLBTRN) = EZLBTRN_fnno;
 /* line 685: */
HZLBTRN_upb = ((*(&(NL(Fndec)->Nametypes))).upb+1);
 /* line 686: */
IZLBTRN_makestep = (A_HEAP(A68_243 ));
 /* line 687: */
 /* line 688: */
JZLBTRN.Sizes = BBAATRN_nilformulas;
KZLBTRN.Fnno = EZLBTRN_fnno;
KZLBTRN.Macparams = ACAATRN_nullmacparams;
KZLBTRN.Attr = A_UNITE(LZLBTRN,mode5,5,(&ZHAATRN_attrnull));
 /* line 689: */
MZLBTRN = A_HEAP(A68_248 ) ;
JZLBTRN.Inst = (*MZLBTRN) = KZLBTRN;
NZLBTRN.Nameno = HZLBTRN_upb;
 /* line 690: */
NZLBTRN.Rest = NAAATRN_nilnames;
OZLBTRN = A_HEAP(A68_249 ) ;
(*OZLBTRN) = NZLBTRN ;
JZLBTRN.Makenames = OZLBTRN;
(*IZLBTRN_makestep) = JZLBTRN;
 /* line 691: */
A_CALLPROC(NL(DVLBTRN_addnametypes),(1),(1,(NL(DVLBTRN_addnametypes)).nonlocals));
 /* line 692: */
QHLBTRN_simnullid(  &QZLBTRN );
PZLBTRN.Name = QZLBTRN;
PZLBTRN.Type = Outputtype;
PZLBTRN.Attr = A_UNITE(RZLBTRN,mode5,5,(&ZHAATRN_attrnull));
SZLBTRN = (*(&(NL(Fndec)->Nametypes))) ;
TZLBTRN = (&A_VINDEX(SZLBTRN,HZLBTRN_upb)) ;
(*TZLBTRN) = PZLBTRN;
 /* line 694: */
UZLBTRN_joinrhs = (A_HEAP(A68_213 ));
VZLBTRN.Sort = LKAATRN_usink;
VZLBTRN.Nameno = HZLBTRN_upb;
(*UZLBTRN_joinrhs) = VZLBTRN;
 /* line 695: */
WZLBTRN_joinstep = (A_HEAP(A68_244 ));
XZLBTRN.From = A_UNITE(YZLBTRN,mode21,21,Actuals);
XZLBTRN.To = A_UNITE(ZZLBTRN,mode11,11,UZLBTRN_joinrhs);
(*WZLBTRN_joinstep) = XZLBTRN;
 /* line 697: */
AAMBTRN_result = (A_HEAP(A68_213 ));
BAMBTRN.Sort = KKAATRN_usource;
BAMBTRN.Nameno = HZLBTRN_upb;
(*AAMBTRN_result) = BAMBTRN;
 /* line 699: */
 /* line 700: */
DAMBTRN.Step = A_UNITE(EAMBTRN,mode5,5,(*FZLBTRN_fndecstep));
 /* line 701: */
FAMBTRN.Step = A_UNITE(GAMBTRN,mode9,9,IZLBTRN_makestep);
 /* line 702: */
HAMBTRN.Step = A_UNITE(IAMBTRN,mode10,10,WZLBTRN_joinstep);
HAMBTRN.Rest = SAAATRN_nilseries;
JAMBTRN = A_HEAP(A68_237 ) ;
(*JAMBTRN) = HAMBTRN ;
FAMBTRN.Rest = JAMBTRN;
KAMBTRN = A_HEAP(A68_237 ) ;
(*KAMBTRN) = FAMBTRN ;
DAMBTRN.Rest = KAMBTRN;
 /* line 703: */
LAMBTRN = A_HEAP(A68_237 ) ;
(*LAMBTRN) = DAMBTRN ;
CAMBTRN.Body = LAMBTRN;
 /* line 704: */
CAMBTRN.Output = A_UNITE(MAMBTRN,mode11,11,AAMBTRN_result);
NAMBTRN = CAMBTRN;
} 
A_PROC_EXIT(makenewfunction);
*ReturnedValue = (NAMBTRN);
return;
} 
#undef NL

A_STATIC A68_237 * TAMBTRN_isolate(A68_208 * Unit, A68_BOOL  Top, void *NonLocals)
#define NL(x) (((UAMBTRN_isolate *)NonLocals)->x)
{ 
A68_370  VAMBTRN;  /* avoid structure result */
A68_370  WAMBTRN_parts;
A68_237 * XAMBTRN;  /* clause result */
A68_186  YAMBTRN;  /* avoid structure result */
A68_186  ZAMBTRN_type;
A68_237 * ABMBTRN_prefix;
A68_INT  BBMBTRN_i;
A68_INT  CBMBTRN;  /* to part of loop */
A68_378  DBMBTRN;  /* avoid structure result */
A68_378  EBMBTRN_new;
A68_231 * FBMBTRN_result;
A68_231  GBMBTRN;  /* avoid structure result */
A_PROC_ENTRY(isolate);
 /* line 747: */
 /* line 748: */
{ 
YPLBTRN_subunits( Unit, (Top&(*NL(TVLBTRN_atomic))), &VAMBTRN );
WAMBTRN_parts = VAMBTRN;
 /* line 749: */
 /* line 751: */
if ( (WAMBTRN_parts.upb==0) )
{ 
 /* line 752: */
XAMBTRN = SAAATRN_nilseries;
} 
else
{ 
VUNATRN_unit_type( (*Unit), NL(Fndec), NL(Environ), &YAMBTRN );
ZAMBTRN_type = YAMBTRN;
 /* line 753: */
ABMBTRN_prefix = SAAATRN_nilseries;
 /* line 754: */
CBMBTRN = WAMBTRN_parts.upb;
for ( BBMBTRN_i = 1;
BBMBTRN_i <= CBMBTRN;
BBMBTRN_i += 1 )
{ 
 /* line 755: */
 /* line 756: */
ABMBTRN_prefix = WOLBTRN_append(ABMBTRN_prefix, A_CALLPROC((*NL(OAMBTRN_walk)),((*(&A_VINDEX(WAMBTRN_parts,BBMBTRN_i))), A68_FALSE),((*(&A_VINDEX(WAMBTRN_parts,BBMBTRN_i))), A68_FALSE,((*NL(OAMBTRN_walk))).nonlocals)));
}
 /* line 757: */
(*NL(TVLBTRN_atomic)) = A68_FALSE;
 /* line 758: */
 /* line 760: */
A_CALLPROC(NL(VVLBTRN_makelets),(WAMBTRN_parts, &DBMBTRN),(WAMBTRN_parts, &DBMBTRN,(NL(VVLBTRN_makelets)).nonlocals));
EBMBTRN_new = DBMBTRN;
 /* line 761: */
FBMBTRN_result = (A_HEAP(A68_231 ));
 /* line 762: */
 /* line 763: */
A_CALLPROC(NL(RXLBTRN_makenewfunction),((*Unit), EBMBTRN_new.Nametypes, ZAMBTRN_type, EBMBTRN_new.Actuals, WAMBTRN_parts.upb, &GBMBTRN),((*Unit), EBMBTRN_new.Nametypes, ZAMBTRN_type, EBMBTRN_new.Actuals, WAMBTRN_parts.upb, &GBMBTRN,(NL(RXLBTRN_makenewfunction)).nonlocals));
(*FBMBTRN_result) = GBMBTRN;
 /* line 764: */
(*Unit) = (*(&(FBMBTRN_result->Output)));
 /* line 765: */
 /* line 766: */
 /* line 767: */
XAMBTRN = WOLBTRN_append(WOLBTRN_append(ABMBTRN_prefix, EBMBTRN_new.Lets), (*(&(FBMBTRN_result->Body))));
} 
} 
A_PROC_EXIT(isolate);
return( XAMBTRN );
} 
#undef NL

A_STATIC A68_237 * JBMBTRN_expandimplicitinstance(A68_208 * Unit, void *NonLocals)
#define NL(x) (((KBMBTRN_expandimplicitinstance *)NonLocals)->x)
{ 
A68_237 * LBMBTRN_prefix;
A68_186  MBMBTRN;  /* avoid structure result */
A68_186  NBMBTRN_outputtype;
A68_370  OBMBTRN;  /* avoid structure result */
A68_370  PBMBTRN_parts;
A68_INT  QBMBTRN_i;
A68_INT  RBMBTRN;  /* to part of loop */
A68_378  SBMBTRN;  /* avoid structure result */
A68_378  TBMBTRN_new;
A68_208  UBMBTRN;  /* united object - for case conformity */
A68_225 * VBMBTRN_m;
A68_INT  WBMBTRN;  /* clause result */
A68_226 * XBMBTRN_d;
A68_INT  YBMBTRN_fnno;
A68_243 * ZBMBTRN_makestep;
A68_243  ACMBTRN;  /* collateral clause result */
A68_248  BCMBTRN;  /* collateral clause result */
A68_161  CCMBTRN;  /* OPERATORS - mode -> union mode */
A68_248 * DCMBTRN;  /* YIELD */
A68_249  ECMBTRN;  /* collateral clause result */
A68_249 * FCMBTRN;  /* YIELD */
A68_283  GCMBTRN;  /* collateral clause result */
A68_161  HCMBTRN;  /* OPERATORS - mode -> union mode */
A68_286  ICMBTRN;  /* OPERATORS - simple index */
A68_INT  JCMBTRN;  /* YIELD */
A68_283 * KCMBTRN;  /* YIELD */
A68_213 * LCMBTRN_joinrhs;
A68_213  MCMBTRN;  /* collateral clause result */
A68_244 * NCMBTRN_joinstep;
A68_244  OCMBTRN;  /* collateral clause result */
A68_208  PCMBTRN;  /* OPERATORS - mode -> union mode */
A68_223 * QCMBTRN;  /* YIELD */
A68_208  RCMBTRN;  /* OPERATORS - mode -> union mode */
A68_213 * SCMBTRN_output;
A68_213  TCMBTRN;  /* collateral clause result */
A68_208  UCMBTRN;  /* OPERATORS - mode -> union mode */
A68_237  VCMBTRN;  /* collateral clause result */
A68_238  WCMBTRN;  /* OPERATORS - mode -> union mode */
A68_237  XCMBTRN;  /* collateral clause result */
A68_238  YCMBTRN;  /* OPERATORS - mode -> union mode */
A68_237 * ZCMBTRN;  /* YIELD */
A68_237 * ADMBTRN;  /* clause result */
A68_237 * BDMBTRN;  /* YIELD */
A_PROC_ENTRY(expandimplicitinstance);
 /* line 776: */
 /* line 777: */
{ 
LBMBTRN_prefix = SAAATRN_nilseries;
 /* line 778: */
VUNATRN_unit_type( (*Unit), NL(Fndec), NL(Environ), &MBMBTRN );
NBMBTRN_outputtype = MBMBTRN;
 /* line 779: */
YPLBTRN_subunits( Unit, A68_FALSE, &OBMBTRN );
PBMBTRN_parts = OBMBTRN;
 /* line 780: */
RBMBTRN = PBMBTRN_parts.upb;
for ( QBMBTRN_i = 1;
QBMBTRN_i <= RBMBTRN;
QBMBTRN_i += 1 )
{ 
 /* line 781: */
 /* line 782: */
LBMBTRN_prefix = WOLBTRN_append(LBMBTRN_prefix, A_CALLPROC((*NL(OAMBTRN_walk)),((*(&A_VINDEX(PBMBTRN_parts,QBMBTRN_i))), A68_FALSE),((*(&A_VINDEX(PBMBTRN_parts,QBMBTRN_i))), A68_FALSE,((*NL(OAMBTRN_walk))).nonlocals)));
}
 /* line 783: */
(*NL(TVLBTRN_atomic)) = A68_FALSE;
 /* line 784: */
 /* line 786: */
A_CALLPROC(NL(VVLBTRN_makelets),(PBMBTRN_parts, &SBMBTRN),(PBMBTRN_parts, &SBMBTRN,(NL(VVLBTRN_makelets)).nonlocals));
TBMBTRN_new = SBMBTRN;
 /* line 787: */
 /* line 788: */
 /* line 789: */
UBMBTRN = (*Unit) ;
switch ( UBMBTRN.mode )
{ 
case 23: /* REF STRUCT(MODE248,MODE208)  */
VBMBTRN_m = (UBMBTRN.data.mode23);
 /* line 790: */
WBMBTRN = (*(&((&(VBMBTRN_m->Inst))->Fnno)));
break;
case 24: /* REF STRUCT(MODE208,MODE248,MODE208)  */
XBMBTRN_d = (UBMBTRN.data.mode24);
 /* line 791: */
WBMBTRN = (*(&((&(XBMBTRN_d->Inst))->Fnno)));
break;
default: 
A_IMP_SKIP ;
break;
} 
YBMBTRN_fnno = WBMBTRN;
 /* line 792: */
ZBMBTRN_makestep = (A_HEAP(A68_243 ));
 /* line 793: */
 /* line 794: */
ACMBTRN.Sizes = BBAATRN_nilformulas;
BCMBTRN.Fnno = YBMBTRN_fnno;
BCMBTRN.Macparams = ACAATRN_nullmacparams;
BCMBTRN.Attr = A_UNITE(CCMBTRN,mode5,5,(&ZHAATRN_attrnull));
 /* line 795: */
DCMBTRN = A_HEAP(A68_248 ) ;
ACMBTRN.Inst = (*DCMBTRN) = BCMBTRN;
ECMBTRN.Nameno = ((*(&(NL(Fndec)->Nametypes))).upb+1);
ECMBTRN.Rest = NAAATRN_nilnames;
FCMBTRN = A_HEAP(A68_249 ) ;
(*FCMBTRN) = ECMBTRN ;
ACMBTRN.Makenames = FCMBTRN;
(*ZBMBTRN_makestep) = ACMBTRN;
 /* line 796: */
A_CALLPROC(NL(DVLBTRN_addnametypes),(1),(1,(NL(DVLBTRN_addnametypes)).nonlocals));
 /* line 797: */
 /* line 798: */
GCMBTRN.Name = TTCAOST_nullid;
GCMBTRN.Type = NBMBTRN_outputtype;
GCMBTRN.Attr = A_UNITE(HCMBTRN,mode5,5,(&ZHAATRN_attrnull));
ICMBTRN = (*(&(NL(Fndec)->Nametypes))) ;
JCMBTRN = (*(&(NL(Fndec)->Nametypes))).upb ;
KCMBTRN = (&A_VINDEX(ICMBTRN,JCMBTRN)) ;
(*KCMBTRN) = GCMBTRN;
 /* line 799: */
LCMBTRN_joinrhs = (A_HEAP(A68_213 ));
MCMBTRN.Sort = LKAATRN_usink;
MCMBTRN.Nameno = (*(&(NL(Fndec)->Nametypes))).upb;
(*LCMBTRN_joinrhs) = MCMBTRN;
 /* line 800: */
NCMBTRN_joinstep = (A_HEAP(A68_244 ));
QCMBTRN = TBMBTRN_new.Actuals ;
OCMBTRN.From = A_UNITE(PCMBTRN,mode21,21,QCMBTRN);
OCMBTRN.To = A_UNITE(RCMBTRN,mode11,11,LCMBTRN_joinrhs);
(*NCMBTRN_joinstep) = OCMBTRN;
 /* line 801: */
SCMBTRN_output = (A_HEAP(A68_213 ));
TCMBTRN.Sort = KKAATRN_usource;
TCMBTRN.Nameno = (*(&(NL(Fndec)->Nametypes))).upb;
(*SCMBTRN_output) = TCMBTRN;
 /* line 802: */
(*Unit) = A_UNITE(UCMBTRN,mode11,11,SCMBTRN_output);
 /* line 803: */
 /* line 804: */
 /* line 805: */
VCMBTRN.Step = A_UNITE(WCMBTRN,mode9,9,ZBMBTRN_makestep);
XCMBTRN.Step = A_UNITE(YCMBTRN,mode10,10,NCMBTRN_joinstep);
XCMBTRN.Rest = SAAATRN_nilseries;
ZCMBTRN = A_HEAP(A68_237 ) ;
(*ZCMBTRN) = XCMBTRN ;
VCMBTRN.Rest = ZCMBTRN;
 /* line 806: */
BDMBTRN = A_HEAP(A68_237 ) ;
(*BDMBTRN) = VCMBTRN ;
ADMBTRN = WOLBTRN_append(WOLBTRN_append(LBMBTRN_prefix, TBMBTRN_new.Lets), BDMBTRN);
} 
A_PROC_EXIT(expandimplicitinstance);
return( ADMBTRN );
} 
#undef NL

A_STATIC A68_237 * EDMBTRN_walkfnname(A68_239  Step, void *NonLocals)
#define NL(x) (((FDMBTRN_walkfnname *)NonLocals)->x)
{ 
A68_292  GDMBTRN;  /* OPERATORS - simple index */
A68_INT  HDMBTRN;  /* YIELD */
A68_237 * IDMBTRN;  /* clause result */
A_PROC_ENTRY(walkfnname);
 /* line 813: */
 /* line 814: */
{ 
GDMBTRN = (*(&(NL(Environ)->Fns))) ;
HDMBTRN = Step.Fnno ;
ZULBTRN_expandbody((*(&A_VINDEX(GDMBTRN,HDMBTRN))), NL(Environ));
 /* line 815: */
 /* line 816: */
IDMBTRN = SAAATRN_nilseries;
} 
A_PROC_EXIT(walkfnname);
return( IDMBTRN );
} 
#undef NL

A_STATIC A68_VOID  MDMBTRN_anonymous(A68_231 * Series, A68_BOOL  Top, void *NonLocals)
#define NL(x) (((NDMBTRN_anonymous *)NonLocals)->x)
{ 
A68_237 * ODMBTRN_steps;
A68_208 * PDMBTRN_output;
A68_237 * QDMBTRN_new;
A68_238 * RDMBTRN_step;
A68_238  SDMBTRN;  /* united object - for case conformity */
A68_242 * TDMBTRN_let;
A68_244 * UDMBTRN_join;
A68_245 * VDMBTRN_rjoin;
A68_239  YDMBTRN_fnname;
A68_237 ** BEMBTRN;  /* YIELD */
A68_237 ** CEMBTRN;  /* YIELD */
 /* line 827: */
 /* line 828: */
{ 
ODMBTRN_steps = (*(&(Series->Body)));
 /* line 829: */
PDMBTRN_output = (&(Series->Output));
 /* line 830: */
QDMBTRN_new = SAAATRN_nilseries;
 /* line 832: */
for ( ;; )
{ 
 /* line 833: */
if ( !((ODMBTRN_steps!=SAAATRN_nilseries)) ) break;
(*NL(TVLBTRN_atomic)) = A68_FALSE;
 /* line 834: */
RDMBTRN_step = (&(ODMBTRN_steps->Step));
 /* line 836: */
 /* line 837: */
SDMBTRN = (*RDMBTRN_step) ;
switch ( SDMBTRN.mode )
{ 
case 8: /* REF STRUCT(REF MODE249,MODE208)  */
TDMBTRN_let = (SDMBTRN.data.mode8);
 /* line 838: */
QDMBTRN_new = A_CALLPROC((*NL(OAMBTRN_walk)),((&(TDMBTRN_let->Unit)), A68_FALSE),((&(TDMBTRN_let->Unit)), A68_FALSE,((*NL(OAMBTRN_walk))).nonlocals));
break;
case 10: /* REF STRUCT(MODE208,MODE208)  */
UDMBTRN_join = (SDMBTRN.data.mode10);
 /* line 839: */
QDMBTRN_new = A_CALLPROC((*NL(OAMBTRN_walk)),((&(UDMBTRN_join->From)), A68_FALSE),((&(UDMBTRN_join->From)), A68_FALSE,((*NL(OAMBTRN_walk))).nonlocals));
break;
case 11: /* REF STRUCT(REF MODE182,REF MODE247)  */
VDMBTRN_rjoin = (SDMBTRN.data.mode11);
 /* line 840: */
 /* line 841: */
NKDAOST_sysfault(XDMBTRN);
break;
case 5: /* STRUCT(INT)  */
YDMBTRN_fnname = (SDMBTRN.data.mode5);
 /* line 842: */
QDMBTRN_new = A_CALLPROC(NL(DDMBTRN_walkfnname),(YDMBTRN_fnname),(YDMBTRN_fnname,(NL(DDMBTRN_walkfnname)).nonlocals));
break;
case 3: /* STRUCT(INT)  */
 /* line 843: */
QDMBTRN_new = SAAATRN_nilseries;
break;
case 1: /* STRUCT(INT)  */
 /* line 844: */
QDMBTRN_new = SAAATRN_nilseries;
break;
case 2: /* STRUCT(INT)  */
 /* line 845: */
QDMBTRN_new = SAAATRN_nilseries;
break;
case 4: /* STRUCT(INT)  */
 /* line 846: */
QDMBTRN_new = SAAATRN_nilseries;
break;
case 9: /* REF STRUCT(REF MODE182,MODE248,REF MODE249)  */
 /* line 847: */
 /* line 848: */
QDMBTRN_new = SAAATRN_nilseries;
break;
default: 
 /* line 849: */
NKDAOST_sysfault(AEMBTRN);
break;
} 
 /* line 851: */
BEMBTRN = (&(Series->Body)) ;
(*BEMBTRN) = DPLBTRN_addsteps((*(&(Series->Body))), ODMBTRN_steps, QDMBTRN_new);
 /* line 853: */
 /* line 854: */
ODMBTRN_steps = (*(&(ODMBTRN_steps->Rest)));
}
 /* line 856: */
QDMBTRN_new = A_CALLPROC((*NL(OAMBTRN_walk)),(PDMBTRN_output, Top),(PDMBTRN_output, Top,((*NL(OAMBTRN_walk))).nonlocals));
 /* line 857: */
 /* line 859: */
CEMBTRN = (&(Series->Body)) ;
(*CEMBTRN) = DPLBTRN_addsteps((*(&(Series->Body))), ODMBTRN_steps, QDMBTRN_new);
} 
return;
} 
#undef NL

A_STATIC A68_237 * FEMBTRN_walkstr(A68_223 * Str, void *NonLocals)
#define NL(x) (((GEMBTRN_walkstr *)NonLocals)->x)
{ 
A68_223 * HEMBTRN_scan;
A68_237 * IEMBTRN_new;
A68_208 * JEMBTRN_element;
A68_237 * KEMBTRN;  /* clause result */
A_PROC_ENTRY(walkstr);
 /* line 865: */
 /* line 866: */
{ 
HEMBTRN_scan = Str;
 /* line 867: */
IEMBTRN_new = SAAATRN_nilseries;
 /* line 868: */
for ( ;; )
{ 
 /* line 869: */
if ( !((HEMBTRN_scan!=IAAATRN_nilustr)) ) break;
JEMBTRN_element = (&(HEMBTRN_scan->Elem));
 /* line 870: */
HEMBTRN_scan = (*(&(HEMBTRN_scan->Rest)));
 /* line 871: */
 /* line 872: */
IEMBTRN_new = WOLBTRN_append(IEMBTRN_new, A_CALLPROC((*NL(OAMBTRN_walk)),(JEMBTRN_element, A68_FALSE),(JEMBTRN_element, A68_FALSE,((*NL(OAMBTRN_walk))).nonlocals)));
}
 /* line 873: */
 /* line 874: */
KEMBTRN = IEMBTRN_new;
} 
A_PROC_EXIT(walkstr);
return( KEMBTRN );
} 
#undef NL

A_STATIC A68_237 * OEMBTRN_anonymous(A68_208 * Unit, A68_BOOL  Top, void *NonLocals)
#define NL(x) (((PEMBTRN_anonymous *)NonLocals)->x)
{ 
A68_208  QEMBTRN;  /* united object - for case conformity */
A68_237 * REMBTRN;  /* clause result */
A68_232 * SEMBTRN_attr;
A68_233 * TEMBTRN_check;
A68_234 * UEMBTRN_bracket;
A68_222 * VEMBTRN_row;
A68_223 * WEMBTRN_str;
A68_218 * XEMBTRN_index;
A68_186  YEMBTRN;  /* avoid structure result */
A68_219 * ZEMBTRN_trim;
A68_186  AFMBTRN;  /* avoid structure result */
A68_224 * BFMBTRN_conc;
A68_186  CFMBTRN;  /* avoid structure result */
A68_237 * DFMBTRN_lseries;
A68_231 * EFMBTRN_series;
A68_229 * FFMBTRN_repl;
 /* line 895: */
 /* line 898: */
QEMBTRN = (*Unit) ;
switch ( QEMBTRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
case 2: /* REF STRUCT(INT,INT)  */
case 3: /* REF STRUCT(INT,MODE170)  */
case 4: /* REF STRUCT(MODE186)  */
case 5: /* REF STRUCT(INT,REF MODE93)  */
case 6: /* REF STRUCT(INT)  */
 /* line 899: */
{ 
(*NL(TVLBTRN_atomic)) = A68_FALSE;
 /* line 901: */
REMBTRN = SAAATRN_nilseries;
} 
break;
case 11: /* REF STRUCT(INT,INT)  */
 /* line 902: */
{ 
if ( Top )
{ 
(*NL(TVLBTRN_atomic)) = A68_FALSE;
} 
 /* line 905: */
REMBTRN = SAAATRN_nilseries;
} 
break;
case 30: /* REF STRUCT(MODE208,MODE161)  */
SEMBTRN_attr = (QEMBTRN.data.mode30);
 /* line 906: */
{ 
(*Unit) = (*(&(SEMBTRN_attr->Unit)));
 /* line 907: */
REMBTRN = A_CALLPROC((*NL(OAMBTRN_walk)),(Unit, Top),(Unit, Top,((*NL(OAMBTRN_walk))).nonlocals));
} 
break;
case 31: /* REF STRUCT(MODE208,MODE172)  */
TEMBTRN_check = (QEMBTRN.data.mode31);
 /* line 908: */
{ 
(*Unit) = (*(&(TEMBTRN_check->Unit)));
 /* line 909: */
REMBTRN = A_CALLPROC((*NL(OAMBTRN_walk)),(Unit, Top),(Unit, Top,((*NL(OAMBTRN_walk))).nonlocals));
} 
break;
case 32: /* REF STRUCT(MODE208)  */
UEMBTRN_bracket = (QEMBTRN.data.mode32);
 /* line 910: */
{ 
(*Unit) = (*(&(UEMBTRN_bracket->Unit)));
 /* line 913: */
REMBTRN = A_CALLPROC((*NL(OAMBTRN_walk)),(Unit, Top),(Unit, Top,((*NL(OAMBTRN_walk))).nonlocals));
} 
break;
case 20: /* REF STRUCT(MODE170,MODE208)  */
VEMBTRN_row = (QEMBTRN.data.mode20);
{ 
(*NL(TVLBTRN_atomic)) = A68_FALSE;
 /* line 914: */
REMBTRN = A_CALLPROC((*NL(OAMBTRN_walk)),((&(VEMBTRN_row->Elem)), Top),((&(VEMBTRN_row->Elem)), Top,((*NL(OAMBTRN_walk))).nonlocals));
} 
break;
case 21: /* REF STRUCT(MODE208,REF MODE223)  */
WEMBTRN_str = (QEMBTRN.data.mode21);
{ 
(*NL(TVLBTRN_atomic)) = A68_FALSE;
 /* line 917: */
REMBTRN = A_CALLPROC(NL(EEMBTRN_walkstr),(WEMBTRN_str),(WEMBTRN_str,(NL(EEMBTRN_walkstr)).nonlocals));
} 
break;
case 16: /* REF STRUCT(MODE208,MODE170)  */
XEMBTRN_index = (QEMBTRN.data.mode16);
 /* line 918: */
 /* line 919: */
VUNATRN_unit_type( (*(&(XEMBTRN_index->Unit))), NL(Fndec), NL(Environ), &YEMBTRN );
if ( ANLBTRN_isstringtype(YEMBTRN, NL(Environ)) )
{ 
 /* line 920: */
REMBTRN = A_CALLPROC(NL(SAMBTRN_isolate),(Unit, Top),(Unit, Top,(NL(SAMBTRN_isolate)).nonlocals));
} 
else
{ 
(*NL(TVLBTRN_atomic)) = A68_FALSE;
 /* line 921: */
 /* line 922: */
REMBTRN = A_CALLPROC((*NL(OAMBTRN_walk)),((&(XEMBTRN_index->Unit)), Top),((&(XEMBTRN_index->Unit)), Top,((*NL(OAMBTRN_walk))).nonlocals));
} 
break;
case 17: /* REF STRUCT(MODE208,MODE185)  */
ZEMBTRN_trim = (QEMBTRN.data.mode17);
 /* line 923: */
 /* line 924: */
VUNATRN_unit_type( (*(&(ZEMBTRN_trim->Unit))), NL(Fndec), NL(Environ), &AFMBTRN );
if ( ANLBTRN_isstringtype(AFMBTRN, NL(Environ)) )
{ 
 /* line 925: */
REMBTRN = A_CALLPROC(NL(SAMBTRN_isolate),(Unit, Top),(Unit, Top,(NL(SAMBTRN_isolate)).nonlocals));
} 
else
{ 
(*NL(TVLBTRN_atomic)) = A68_FALSE;
 /* line 926: */
 /* line 927: */
REMBTRN = A_CALLPROC((*NL(OAMBTRN_walk)),((&(ZEMBTRN_trim->Unit)), Top),((&(ZEMBTRN_trim->Unit)), Top,((*NL(OAMBTRN_walk))).nonlocals));
} 
break;
case 22: /* REF STRUCT(BOOL,INT,MODE208,MODE208)  */
BFMBTRN_conc = (QEMBTRN.data.mode22);
 /* line 928: */
 /* line 929: */
VUNATRN_unit_type( (*Unit), NL(Fndec), NL(Environ), &CFMBTRN );
if ( ANLBTRN_isstringtype(CFMBTRN, NL(Environ)) )
{ 
 /* line 930: */
 /* line 931: */
REMBTRN = A_CALLPROC(NL(SAMBTRN_isolate),(Unit, Top),(Unit, Top,(NL(SAMBTRN_isolate)).nonlocals));
} 
else
{ 
(*NL(TVLBTRN_atomic)) = A68_FALSE;
 /* line 932: */
DFMBTRN_lseries = A_CALLPROC((*NL(OAMBTRN_walk)),((&(BFMBTRN_conc->Left)), A68_FALSE),((&(BFMBTRN_conc->Left)), A68_FALSE,((*NL(OAMBTRN_walk))).nonlocals));
 /* line 933: */
 /* line 934: */
 /* line 937: */
REMBTRN = WOLBTRN_append(DFMBTRN_lseries, A_CALLPROC((*NL(OAMBTRN_walk)),((&(BFMBTRN_conc->Right)), Top),((&(BFMBTRN_conc->Right)), Top,((*NL(OAMBTRN_walk))).nonlocals)));
} 
break;
case 13: /* REF STRUCT(INT,INT,MODE208)  */
case 14: /* REF STRUCT(MODE208,INT,INT)  */
case 18: /* REF STRUCT(MODE208,MODE208)  */
case 19: /* REF STRUCT(MODE208,MODE208,MODE208)  */
case 25: /* REF STRUCT(MODE208,REF MODE268)  */
case 33: /* REF STRUCT(MODE170,MODE208)  */
 /* line 938: */
 /* line 941: */
REMBTRN = A_CALLPROC(NL(SAMBTRN_isolate),(Unit, Top),(Unit, Top,(NL(SAMBTRN_isolate)).nonlocals));
break;
case 23: /* REF STRUCT(MODE248,MODE208)  */
case 24: /* REF STRUCT(MODE208,MODE248,MODE208)  */
 /* line 942: */
 /* line 945: */
REMBTRN = A_CALLPROC(NL(IBMBTRN_expandimplicitinstance),(Unit),(Unit,(NL(IBMBTRN_expandimplicitinstance)).nonlocals));
break;
case 29: /* REF STRUCT(REF MODE237,MODE208)  */
EFMBTRN_series = (QEMBTRN.data.mode29);
{ 
A_CALLPROC((*NL(PAMBTRN_walkseries)),(EFMBTRN_series, Top),(EFMBTRN_series, Top,((*NL(PAMBTRN_walkseries))).nonlocals));
 /* line 947: */
REMBTRN = SAAATRN_nilseries;
} 
break;
case 27: /* REF STRUCT(MODE170,MODE208)  */
FFMBTRN_repl = (QEMBTRN.data.mode27);
 /* line 948: */
{ 
NKDAOST_sysfault(HFMBTRN);
 /* line 949: */
REMBTRN = SAAATRN_nilseries;
} 
break;
case 34: /* REF STRUCT(INT)  */
 /* line 950: */
{ 
NKDAOST_sysfault(JFMBTRN);
 /* line 951: */
REMBTRN = SAAATRN_nilseries;
} 
break;
case 12: /* REF STRUCT(MODE208,MODE208)  */
 /* line 952: */
{ 
NKDAOST_sysfault(LFMBTRN);
 /* line 953: */
REMBTRN = SAAATRN_nilseries;
} 
break;
case 26: /* REF STRUCT(MODE170,MODE208,MODE208)  */
 /* line 954: */
{ 
NKDAOST_sysfault(NFMBTRN);
 /* line 955: */
REMBTRN = SAAATRN_nilseries;
} 
break;
case 28: /* REF STRUCT(REF MODE256,MODE208)  */
 /* line 956: */
{ 
NKDAOST_sysfault(PFMBTRN);
 /* line 958: */
REMBTRN = SAAATRN_nilseries;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
return( REMBTRN );
} 
#undef NL

A_STATIC A68_VOID  QHLBTRN_simnullid(A68_VC  *ReturnedValue)
{ 
A68_VC  SHLBTRN;  /* clause result */
A68_VC  UHLBTRN;  /* avoid structure result */
A68_VC  VHLBTRN;  /* avoid structure result */
A_PROC_ENTRY(simnullid);
FCAAOSI_intchars( PHLBTRN_seed+=1, &UHLBTRN );
A_CALLPROC(ZLAATRN_makeid,(A_VC_PLUS(THLBTRN,UHLBTRN), &VHLBTRN),(A_VC_PLUS(THLBTRN,UHLBTRN), &VHLBTRN,(ZLAATRN_makeid).nonlocals));
SHLBTRN = VHLBTRN;
A_PROC_EXIT(simnullid);
*ReturnedValue = (SHLBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  WHLBTRN_reseedsimnullid(void)
{ 
A_PROC_ENTRY(reseedsimnullid);
PHLBTRN_seed = 0;
A_PROC_EXIT(reseedsimnullid);
return;
} 
#undef NL

A_STATIC A68_231 * ZHLBTRN_transformreform(A68_284 * Fndec, A68_287 * E)
{ 
A68_357  JILBTRN_flattenassemtype;   /* proc value of non-global proc */
A68_359  AKLBTRN_buildassemtype;   /* proc value of non-global proc */
A68_190 * DMLBTRN_tfn;
A68_INT  EMLBTRN_no_inputs;
A68_208 * FMLBTRN_inputunit;
A68_213  GMLBTRN;  /* collateral clause result */
A68_208  HMLBTRN;  /* clause result */
A68_213 * IMLBTRN;  /* YIELD */
A68_208  JMLBTRN;  /* OPERATORS - mode -> union mode */
A68_223 * KMLBTRN_inputstr;
A68_INT  LMLBTRN_i;
A68_INT  MMLBTRN;  /* to part of loop */
A68_213 * NMLBTRN_uname;
A68_213  OMLBTRN;  /* collateral clause result */
A68_223  PMLBTRN;  /* collateral clause result */
A68_208  QMLBTRN;  /* OPERATORS - mode -> union mode */
A68_223 * RMLBTRN;  /* YIELD */
A68_208  SMLBTRN;  /* OPERATORS - mode -> union mode */
A68_223 * TMLBTRN_unitlist;
A68_231  UMLBTRN;  /* collateral clause result */
A68_208  VMLBTRN;  /* avoid structure result */
A68_231 * WMLBTRN;  /* clause result */
A68_231 * XMLBTRN;  /* YIELD */
A_PROC_ENTRY(transformreform);
 /* line 136: */
 /* line 138: */
{ 
 /* line 152: */
 /* line 153: */
A_CLOSURE( JILBTRN_flattenassemtype, KILBTRN_flattenassemtype, LILBTRN_flattenassemtype );
(( LILBTRN_flattenassemtype * ) ( JILBTRN_flattenassemtype.nonlocals )) -> JILBTRN_flattenassemtype = JILBTRN_flattenassemtype;
 /* line 203: */
A_CLOSURE( AKLBTRN_buildassemtype, BKLBTRN_buildassemtype, CKLBTRN_buildassemtype );
(( CKLBTRN_buildassemtype * ) ( AKLBTRN_buildassemtype.nonlocals )) -> AKLBTRN_buildassemtype = AKLBTRN_buildassemtype;
 /* line 264: */
DMLBTRN_tfn = MUNATRN_fndec_tfn(Fndec);
 /* line 267: */
EMLBTRN_no_inputs = DTNATRN_names_size((*(&(Fndec->Inputs))));
 /* line 268: */
FMLBTRN_inputunit = (A_HEAP(A68_208 ));
 /* line 269: */
 /* line 270: */
if ( (EMLBTRN_no_inputs==1) )
{ 
GMLBTRN.Sort = KKAATRN_usource;
 /* line 271: */
GMLBTRN.Nameno = 1;
 /* line 272: */
IMLBTRN = A_HEAP(A68_213 ) ;
(*IMLBTRN) = GMLBTRN ;
HMLBTRN = A_UNITE(JMLBTRN,mode11,11,IMLBTRN);
} 
else
{ 
KMLBTRN_inputstr = IAAATRN_nilustr;
 /* line 273: */
MMLBTRN = EMLBTRN_no_inputs;
for ( LMLBTRN_i = 1;
LMLBTRN_i <= MMLBTRN;
LMLBTRN_i += 1 )
{ 
 /* line 274: */
NMLBTRN_uname = (A_HEAP(A68_213 ));
OMLBTRN.Sort = KKAATRN_usource;
OMLBTRN.Nameno = LMLBTRN_i;
(*NMLBTRN_uname) = OMLBTRN;
 /* line 275: */
PMLBTRN.Elem = A_UNITE(QMLBTRN,mode11,11,NMLBTRN_uname);
PMLBTRN.Rest = IAAATRN_nilustr;
 /* line 276: */
RMLBTRN = A_HEAP(A68_223 ) ;
(*RMLBTRN) = PMLBTRN ;
DILBTRN_append((&KMLBTRN_inputstr), RMLBTRN);
}
 /* line 277: */
 /* line 278: */
HMLBTRN = A_UNITE(SMLBTRN,mode21,21,KMLBTRN_inputstr);
} 
(*FMLBTRN_inputunit) = HMLBTRN;
 /* line 280: */
TMLBTRN_unitlist = A_CALLPROC(JILBTRN_flattenassemtype,(FMLBTRN_inputunit, (*(&(DMLBTRN_tfn->From))), E),(FMLBTRN_inputunit, (*(&(DMLBTRN_tfn->From))), E,(JILBTRN_flattenassemtype).nonlocals));
 /* line 282: */
 /* line 283: */
UMLBTRN.Body = SAAATRN_nilseries;
 /* line 284: */
A_CALLPROC(AKLBTRN_buildassemtype,((&TMLBTRN_unitlist), (*(&(DMLBTRN_tfn->To))), E, &VMLBTRN),((&TMLBTRN_unitlist), (*(&(DMLBTRN_tfn->To))), E, &VMLBTRN,(AKLBTRN_buildassemtype).nonlocals));
UMLBTRN.Output = VMLBTRN;
XMLBTRN = A_HEAP(A68_231 ) ;
(*XMLBTRN) = UMLBTRN ;
WMLBTRN = XMLBTRN;
} 
A_PROC_EXIT(transformreform);
return( WMLBTRN );
} 
#undef NL

A_STATIC A68_BOOL  ANLBTRN_isstringtype(A68_186  T, A68_287 * E)
{ 
A68_186  BNLBTRN;  /* united object - for case conformity */
A68_BOOL  CNLBTRN;  /* clause result */
A68_187 * DNLBTRN_tn;
A68_290  ENLBTRN;  /* OPERATORS - simple index */
A68_INT  FNLBTRN;  /* YIELD */
A68_201  GNLBTRN_td;
A68_199  HNLBTRN;  /* united object - for case conformity */
A68_195 * INLBTRN_tt;
A_PROC_ENTRY(isstringtype);
 /* line 291: */
 /* line 292: */
BNLBTRN = T ;
switch ( BNLBTRN.mode )
{ 
case 6: /* REF STRUCT(MODE170,MODE186)  */
 /* line 293: */
CNLBTRN = A68_TRUE;
break;
case 1: /* REF STRUCT(INT)  */
DNLBTRN_tn = (BNLBTRN.data.mode1);
 /* line 294: */
 /* line 295: */
{ 
ENLBTRN = (*(&(E->Types))) ;
FNLBTRN = (*(&(DNLBTRN_tn->Typeno))) ;
GNLBTRN_td = (*(*(&A_VINDEX(ENLBTRN,FNLBTRN))));
 /* line 296: */
 /* line 297: */
HNLBTRN = GNLBTRN_td.Body ;
switch ( HNLBTRN.mode )
{ 
case 3: /* REF STRUCT(MODE186)  */
INLBTRN_tt = (HNLBTRN.data.mode3);
 /* line 298: */
 /* line 299: */
CNLBTRN = ANLBTRN_isstringtype((*(&(INLBTRN_tt->Tag))), E);
break;
default: 
 /* line 300: */
 /* line 301: */
 /* line 302: */
 /* line 303: */
CNLBTRN = A68_FALSE;
break;
} 
} 
break;
default: 
 /* line 304: */
CNLBTRN = A68_FALSE;
break;
} 
A_PROC_EXIT(isstringtype);
return( CNLBTRN );
} 
#undef NL

A_STATIC A68_VOID  KNLBTRN_unitfunction(A68_280  Fnbody, A68_208  *ReturnedValue)
{ 
A68_280  LNLBTRN;  /* united object - for case conformity */
A68_253 * MNLBTRN_u;
A68_208  NNLBTRN;  /* united object - for case conformity */
A68_231 * ONLBTRN_us;
A68_253 * PNLBTRN_t;
A68_208 * QNLBTRN;  /* YIELD */
A68_280  RNLBTRN;  /* clause result */
A68_280  SNLBTRN;  /* OPERATORS - mode -> union mode */
A68_208  TNLBTRN;  /* clause result */
A68_208  UNLBTRN;  /* avoid structure result */
A68_208  XNLBTRN;  /* OPERATORS - skip to mode */
A68_208  AOLBTRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(unitfunction);
 /* line 313: */
 /* line 314: */
LNLBTRN = Fnbody ;
switch ( LNLBTRN.mode )
{ 
case 1: /* REF STRUCT(MODE208)  */
MNLBTRN_u = (LNLBTRN.data.mode1);
 /* line 315: */
 /* line 316: */
NNLBTRN = (*(&(MNLBTRN_u->Tag))) ;
switch ( NNLBTRN.mode )
{ 
case 29: /* REF STRUCT(REF MODE237,MODE208)  */
ONLBTRN_us = (NNLBTRN.data.mode29);
 /* line 317: */
 /* line 318: */
if ( ((*(&(ONLBTRN_us->Body)))==SAAATRN_nilseries) )
{ 
{ 
PNLBTRN_t = (A_HEAP(A68_253 ));
QNLBTRN = (&(PNLBTRN_t->Tag)) ;
(*QNLBTRN) = (*(&(ONLBTRN_us->Output)));
RNLBTRN = A_UNITE(SNLBTRN,mode1,1,PNLBTRN_t);
} 
 /* line 319: */
 /* line 320: */
KNLBTRN_unitfunction( RNLBTRN, &UNLBTRN );
TNLBTRN = UNLBTRN;
} 
else
{ 
NKDAOST_sysfault(WNLBTRN);
 /* line 321: */
 /* line 322: */
 /* line 324: */
TNLBTRN = XNLBTRN;
} 
break;
default: 
 /* line 325: */
 /* line 326: */
TNLBTRN = (*(&(MNLBTRN_u->Tag)));
break;
} 
break;
default: 
NKDAOST_sysfault(ZNLBTRN);
 /* line 327: */
TNLBTRN = AOLBTRN;
break;
} 
A_PROC_EXIT(unitfunction);
*ReturnedValue = (TNLBTRN);
return;
} 
#undef NL

A_STATIC A68_INT  DOLBTRN_addnewfn(A68_284 * Newdec, A68_287 * Environ)
{ 
A68_INT  EOLBTRN_upb;
A68_INT  FOLBTRN_new;
A68_365  HOLBTRN_generator;   /* proc value of non-global proc */
A68_292  MOLBTRN;  /* avoid structure result */
A68_292  NOLBTRN_newfns;
A68_292  OOLBTRN;  /* OPERATORS - trim index */
A68_292  POLBTRN;  /* YIELD */
A68_292  QOLBTRN;  /* OPERATORS - assign op */
A68_284 ** ROLBTRN;  /* YIELD */
A68_292 * SOLBTRN;  /* YIELD */
A68_INT  TOLBTRN;  /* clause result */
A_PROC_ENTRY(addnewfn);
 /* line 337: */
 /* line 338: */
{ 
EOLBTRN_upb = (*(&(Environ->Fns))).upb;
 /* line 339: */
FOLBTRN_new = (EOLBTRN_upb+1);
 /* line 340: */
A_CLOSURE( HOLBTRN_generator, IOLBTRN_generator, JOLBTRN_generator );
(( JOLBTRN_generator * ) ( HOLBTRN_generator.nonlocals )) -> FOLBTRN_new = FOLBTRN_new;
A_CALLPROC(HOLBTRN_generator,(A68_FALSE, &MOLBTRN),(A68_FALSE, &MOLBTRN,(HOLBTRN_generator).nonlocals));
NOLBTRN_newfns = MOLBTRN;
 /* line 341: */
POLBTRN = A_VTRIM(OOLBTRN,(NOLBTRN_newfns),A_VTSCRIPT(&(OOLBTRN.upb),(NOLBTRN_newfns).upb,1,EOLBTRN_upb)) ;
QOLBTRN = (*(&(Environ->Fns))) ;
A_VASSIGN2(QOLBTRN,POLBTRN,A68_284 *);
 /* line 342: */
ROLBTRN = (&A_VINDEX(NOLBTRN_newfns,FOLBTRN_new)) ;
(*ROLBTRN) = Newdec;
 /* line 343: */
SOLBTRN = (&(Environ->Fns)) ;
(*SOLBTRN) = NOLBTRN_newfns;
 /* line 344: */
 /* line 345: */
TOLBTRN = FOLBTRN_new;
} 
A_PROC_EXIT(addnewfn);
return( TOLBTRN );
} 
#undef NL

A_STATIC A68_237 * WOLBTRN_append(A68_237 * Left, A68_237 * Right)
{ 
A68_237 * XOLBTRN;  /* clause result */
A68_237 * YOLBTRN_scan;
A68_237 ** ZOLBTRN;  /* YIELD */
A_PROC_ENTRY(append);
 /* line 354: */
 /* line 355: */
if ( (Left==SAAATRN_nilseries) )
{ 
XOLBTRN = Right;
} 
else
{ 
 /* line 356: */
if ( (Right==SAAATRN_nilseries) )
{ 
 /* line 357: */
XOLBTRN = Left;
} 
else
{ 
YOLBTRN_scan = Left;
 /* line 358: */
for ( ;; )
{ 
 /* line 359: */
if ( !(((*(&(YOLBTRN_scan->Rest)))!=SAAATRN_nilseries)) ) break;
 /* line 360: */
YOLBTRN_scan = (*(&(YOLBTRN_scan->Rest)));
}
 /* line 361: */
ZOLBTRN = (&(YOLBTRN_scan->Rest)) ;
(*ZOLBTRN) = Right;
 /* line 362: */
 /* line 363: */
XOLBTRN = Left;
} 
} 
A_PROC_EXIT(append);
return( XOLBTRN );
} 
#undef NL

A_STATIC A68_237 * DPLBTRN_addsteps(A68_237 * Outer, A68_237 * Before, A68_237 * New)
{ 
A68_237 * EPLBTRN;  /* clause result */
A68_237 * FPLBTRN_tail;
A68_237 * GPLBTRN_after;
A68_237 ** HPLBTRN;  /* YIELD */
A_PROC_ENTRY(addsteps);
 /* line 377: */
 /* line 378: */
if ( (Outer==SAAATRN_nilseries) )
{ 
EPLBTRN = New;
} 
else
{ 
 /* line 379: */
if ( (Outer==Before) )
{ 
 /* line 380: */
 /* line 381: */
EPLBTRN = WOLBTRN_append(New, Outer);
} 
else
{ 
FPLBTRN_tail = WOLBTRN_append(New, Before);
 /* line 382: */
GPLBTRN_after = Outer;
 /* line 383: */
for ( ;; )
{ 
 /* line 384: */
if ( !(((*(&(GPLBTRN_after->Rest)))!=Before)) ) break;
 /* line 385: */
GPLBTRN_after = (*(&(GPLBTRN_after->Rest)));
}
 /* line 386: */
HPLBTRN = (&(GPLBTRN_after->Rest)) ;
(*HPLBTRN) = FPLBTRN_tail;
 /* line 387: */
 /* line 388: */
EPLBTRN = Outer;
} 
} 
A_PROC_EXIT(addsteps);
return( EPLBTRN );
} 
#undef NL

A_STATIC A68_BOOL  LPLBTRN_casetranslatable(A68_208  Unit, A68_BOOL  Output, A68_BOOL  Nameallowed)
{ 
A68_208  MPLBTRN;  /* united object - for case conformity */
A68_BOOL  NPLBTRN;  /* clause result */
A68_223 * OPLBTRN_str;
A68_BOOL  PPLBTRN;  /* optbool result */
A68_208  QPLBTRN;  /* OPERATORS - mode -> union mode */
A68_223 * RPLBTRN;  /* YIELD */
A68_208  SPLBTRN;  /* united object - for case conformity */
A68_222 * TPLBTRN_row;
A68_215 * UPLBTRN_ass;
A68_235 * VPLBTRN_string;
A_PROC_ENTRY(casetranslatable);
 /* line 402: */
 /* line 403: */
MPLBTRN = Unit ;
switch ( MPLBTRN.mode )
{ 
case 11: /* REF STRUCT(INT,INT)  */
 /* line 404: */
NPLBTRN = Nameallowed;
break;
case 21: /* REF STRUCT(MODE208,REF MODE223)  */
OPLBTRN_str = (MPLBTRN.data.mode21);
 /* line 405: */
if ( (OPLBTRN_str==IAAATRN_nilustr) )
{ 
 /* line 406: */
 /* line 407: */
NPLBTRN = A68_TRUE;
} 
else
{ 
 /* line 408: */
PPLBTRN = LPLBTRN_casetranslatable((*(&(OPLBTRN_str->Elem))), Output, Nameallowed);
if ( PPLBTRN )
{ /* line 409: */
RPLBTRN = (*(&(OPLBTRN_str->Rest))) ;
PPLBTRN = LPLBTRN_casetranslatable(A_UNITE(QPLBTRN,mode21,21,RPLBTRN), Output, Nameallowed);
}
 /* line 410: */
 /* line 411: */
NPLBTRN = PPLBTRN;
} 
break;
default: 
 /* line 412: */
if ( Output )
{ 
 /* line 414: */
SPLBTRN = Unit ;
switch ( SPLBTRN.mode )
{ 
case 1: /* REF STRUCT(INT)  */
case 2: /* REF STRUCT(INT,INT)  */
case 3: /* REF STRUCT(INT,MODE170)  */
case 4: /* REF STRUCT(MODE186)  */
case 5: /* REF STRUCT(INT,REF MODE93)  */
 /* line 415: */
NPLBTRN = A68_TRUE;
break;
case 20: /* REF STRUCT(MODE170,MODE208)  */
TPLBTRN_row = (SPLBTRN.data.mode20);
 /* line 416: */
 /* line 417: */
NPLBTRN = LPLBTRN_casetranslatable((*(&(TPLBTRN_row->Elem))), Output, Nameallowed);
break;
case 13: /* REF STRUCT(INT,INT,MODE208)  */
UPLBTRN_ass = (SPLBTRN.data.mode13);
 /* line 418: */
 /* line 419: */
NPLBTRN = LPLBTRN_casetranslatable((*(&(UPLBTRN_ass->Assoc))), Output, A68_FALSE);
break;
case 33: /* REF STRUCT(MODE170,MODE208)  */
VPLBTRN_string = (SPLBTRN.data.mode33);
 /* line 420: */
 /* line 421: */
 /* line 422: */
NPLBTRN = LPLBTRN_casetranslatable((*(&(VPLBTRN_string->Char))), Output, A68_FALSE);
break;
default: 
 /* line 423: */
 /* line 424: */
 /* line 425: */
NPLBTRN = A68_FALSE;
break;
} 
} 
else
{ 
 /* line 426: */
 /* line 427: */
NPLBTRN = A68_FALSE;
} 
break;
} 
A_PROC_EXIT(casetranslatable);
return( NPLBTRN );
} 
#undef NL

A_STATIC A68_VOID  YPLBTRN_subunits(A68_208 * Unit, A68_BOOL  Wholebody, A68_370  *ReturnedValue)
{ 
A68_370  AQLBTRN;  /* OPERATORS - nil -> mode */
A68_370  ZPLBTRN_parts;
A68_208  BQLBTRN;  /* united object - for case conformity */
A68_227 * CQLBTRN_case;
A68_268 * DQLBTRN_choices;
A68_INT  EQLBTRN_index;
A68_BOOL  FQLBTRN;  /* optbool result */
A68_BOOL  GQLBTRN_whole;
A68_BOOL  HQLBTRN;  /* optbool result */
A68_372  JQLBTRN_generator;   /* proc value of non-global proc */
A68_370  OQLBTRN;  /* avoid structure result */
A68_INT  PQLBTRN;  /* YIELD */
A68_208 ** QQLBTRN;  /* YIELD */
A68_INT  RQLBTRN;  /* YIELD */
A68_208 ** SQLBTRN;  /* YIELD */
A68_370  TQLBTRN;  /* OPERATORS - trim index */
A68_216 * UQLBTRN_ext;
A68_372  WQLBTRN_generator;   /* proc value of non-global proc */
A68_370  BRLBTRN;  /* avoid structure result */
A68_INT  CRLBTRN;  /* YIELD */
A68_208 ** DRLBTRN;  /* YIELD */
A68_215 * ERLBTRN_ass;
A68_372  GRLBTRN_generator;   /* proc value of non-global proc */
A68_370  LRLBTRN;  /* avoid structure result */
A68_INT  MRLBTRN;  /* YIELD */
A68_208 ** NRLBTRN;  /* YIELD */
A68_220 * ORLBTRN_dind;
A68_372  QRLBTRN_generator;   /* proc value of non-global proc */
A68_373  VRLBTRN;  /* collateral clause result */
A68_370  WRLBTRN;  /* avoid structure result */
A68_370  XRLBTRN;  /* OPERATORS - istruct -> vector */
A68_370  YRLBTRN;  /* OPERATORS - assign op */
A68_221 * ZRLBTRN_rep;
A68_372  BSLBTRN_generator;   /* proc value of non-global proc */
A68_374  GSLBTRN;  /* collateral clause result */
A68_370  HSLBTRN;  /* avoid structure result */
A68_370  ISLBTRN;  /* OPERATORS - istruct -> vector */
A68_370  JSLBTRN;  /* OPERATORS - assign op */
A68_225 * KSLBTRN_minst;
A68_372  MSLBTRN_generator;   /* proc value of non-global proc */
A68_370  RSLBTRN;  /* avoid structure result */
A68_INT  SSLBTRN;  /* YIELD */
A68_208 ** TSLBTRN;  /* YIELD */
A68_226 * USLBTRN_dinst;
A68_372  WSLBTRN_generator;   /* proc value of non-global proc */
A68_373  BTLBTRN;  /* collateral clause result */
A68_370  CTLBTRN;  /* avoid structure result */
A68_370  DTLBTRN;  /* OPERATORS - istruct -> vector */
A68_370  ETLBTRN;  /* OPERATORS - assign op */
A68_218 * FTLBTRN_ind;
A68_372  HTLBTRN_generator;   /* proc value of non-global proc */
A68_370  MTLBTRN;  /* avoid structure result */
A68_INT  NTLBTRN;  /* YIELD */
A68_208 ** OTLBTRN;  /* YIELD */
A68_219 * PTLBTRN_trim;
A68_372  RTLBTRN_generator;   /* proc value of non-global proc */
A68_370  WTLBTRN;  /* avoid structure result */
A68_INT  XTLBTRN;  /* YIELD */
A68_208 ** YTLBTRN;  /* YIELD */
A68_224 * ZTLBTRN_conc;
A68_372  BULBTRN_generator;   /* proc value of non-global proc */
A68_373  GULBTRN;  /* collateral clause result */
A68_370  HULBTRN;  /* avoid structure result */
A68_370  IULBTRN;  /* OPERATORS - istruct -> vector */
A68_370  JULBTRN;  /* OPERATORS - assign op */
A68_235 * KULBTRN_string;
A68_372  MULBTRN_generator;   /* proc value of non-global proc */
A68_370  RULBTRN;  /* avoid structure result */
A68_INT  SULBTRN;  /* YIELD */
A68_208 ** TULBTRN;  /* YIELD */
A68_370  WULBTRN;  /* clause result */
A_PROC_ENTRY(subunits);
 /* line 453: */
 /* line 454: */
{ 
ZPLBTRN_parts = (A_VVAC(AQLBTRN));
 /* line 456: */
 /* line 457: */
BQLBTRN = (*Unit) ;
switch ( BQLBTRN.mode )
{ 
case 25: /* REF STRUCT(MODE208,REF MODE268)  */
CQLBTRN_case = (BQLBTRN.data.mode25);
 /* line 458: */
 /* line 459: */
{ 
DQLBTRN_choices = (*(&(CQLBTRN_case->Choices)));
 /* line 460: */
EQLBTRN_index = 1;
 /* line 461: */
 /* line 462: */
FQLBTRN = Wholebody;
if ( FQLBTRN )
{ /* line 463: */
FQLBTRN = LPLBTRN_casetranslatable((*(&(CQLBTRN_case->Input))), A68_FALSE, Wholebody);
}
GQLBTRN_whole = FQLBTRN;
 /* line 464: */
for ( ;; )
{ 
 /* line 465: */
if ( !((DQLBTRN_choices!=JAAATRN_niluchoices)) ) break;
EQLBTRN_index+=1;
 /* line 466: */
HQLBTRN = GQLBTRN_whole;
if ( HQLBTRN )
{ /* line 467: */
HQLBTRN = LPLBTRN_casetranslatable((*(&(DQLBTRN_choices->Output))), A68_TRUE, GQLBTRN_whole);
}
GQLBTRN_whole = HQLBTRN;
 /* line 468: */
 /* line 469: */
DQLBTRN_choices = (*(&(DQLBTRN_choices->Rest)));
}
 /* line 470: */
A_CLOSURE( JQLBTRN_generator, KQLBTRN_generator, LQLBTRN_generator );
(( LQLBTRN_generator * ) ( JQLBTRN_generator.nonlocals )) -> EQLBTRN_index = (&EQLBTRN_index);
A_CALLPROC(JQLBTRN_generator,(A68_FALSE, &OQLBTRN),(A68_FALSE, &OQLBTRN,(JQLBTRN_generator).nonlocals));
ZPLBTRN_parts = OQLBTRN;
 /* line 472: */
EQLBTRN_index = 0;
 /* line 473: */
 /* line 474: */
if ( !LPLBTRN_casetranslatable((*(&(CQLBTRN_case->Input))), A68_FALSE, GQLBTRN_whole) )
{ 
 /* line 475: */
PQLBTRN = EQLBTRN_index+=1 ;
QQLBTRN = (&A_VINDEX(ZPLBTRN_parts,PQLBTRN)) ;
(*QQLBTRN) = (&(CQLBTRN_case->Input));
} 
 /* line 476: */
DQLBTRN_choices = (*(&(CQLBTRN_case->Choices)));
 /* line 477: */
for ( ;; )
{ 
 /* line 478: */
if ( !((DQLBTRN_choices!=JAAATRN_niluchoices)) ) break;
 /* line 479: */
if ( !LPLBTRN_casetranslatable((*(&(DQLBTRN_choices->Output))), A68_TRUE, GQLBTRN_whole) )
{ 
 /* line 480: */
RQLBTRN = EQLBTRN_index+=1 ;
SQLBTRN = (&A_VINDEX(ZPLBTRN_parts,RQLBTRN)) ;
(*SQLBTRN) = (&(DQLBTRN_choices->Output));
} 
 /* line 481: */
 /* line 482: */
DQLBTRN_choices = (*(&(DQLBTRN_choices->Rest)));
}
 /* line 483: */
 /* line 484: */
 /* line 486: */
ZPLBTRN_parts = A_VTRIM(TQLBTRN,(ZPLBTRN_parts),A_VTSCRIPT(&(TQLBTRN.upb),(ZPLBTRN_parts).upb,1,EQLBTRN_index));
} 
break;
case 14: /* REF STRUCT(MODE208,INT,INT)  */
UQLBTRN_ext = (BQLBTRN.data.mode14);
 /* line 487: */
 /* line 488: */
{ 
A_CLOSURE( WQLBTRN_generator, XQLBTRN_generator, YQLBTRN_generator );
A_CALLPROC(WQLBTRN_generator,(A68_FALSE, &BRLBTRN),(A68_FALSE, &BRLBTRN,(WQLBTRN_generator).nonlocals));
ZPLBTRN_parts = BRLBTRN;
 /* line 489: */
 /* line 490: */
 /* line 492: */
CRLBTRN = 1 ;
DRLBTRN = (&A_VINDEX(ZPLBTRN_parts,CRLBTRN)) ;
(*DRLBTRN) = (&(UQLBTRN_ext->Extract));
} 
break;
case 13: /* REF STRUCT(INT,INT,MODE208)  */
ERLBTRN_ass = (BQLBTRN.data.mode13);
 /* line 493: */
 /* line 494: */
{ 
A_CLOSURE( GRLBTRN_generator, HRLBTRN_generator, IRLBTRN_generator );
A_CALLPROC(GRLBTRN_generator,(A68_FALSE, &LRLBTRN),(A68_FALSE, &LRLBTRN,(GRLBTRN_generator).nonlocals));
ZPLBTRN_parts = LRLBTRN;
 /* line 495: */
 /* line 496: */
 /* line 498: */
MRLBTRN = 1 ;
NRLBTRN = (&A_VINDEX(ZPLBTRN_parts,MRLBTRN)) ;
(*NRLBTRN) = (&(ERLBTRN_ass->Assoc));
} 
break;
case 18: /* REF STRUCT(MODE208,MODE208)  */
ORLBTRN_dind = (BQLBTRN.data.mode18);
 /* line 499: */
A_CLOSURE( QRLBTRN_generator, RRLBTRN_generator, SRLBTRN_generator );
 /* line 500: */
VRLBTRN.data[0] = (&(ORLBTRN_dind->Unit));
VRLBTRN.data[1] = (&(ORLBTRN_dind->Index));
 /* line 502: */
A_CALLPROC(QRLBTRN_generator,(A68_FALSE, &WRLBTRN),(A68_FALSE, &WRLBTRN,(QRLBTRN_generator).nonlocals));
YRLBTRN = A_HISVEC(XRLBTRN,VRLBTRN,2,A68_208 *) ;
A_VASSIGN2(YRLBTRN,WRLBTRN,A68_208 *) ;
ZPLBTRN_parts = WRLBTRN;
break;
case 19: /* REF STRUCT(MODE208,MODE208,MODE208)  */
ZRLBTRN_rep = (BQLBTRN.data.mode19);
 /* line 503: */
A_CLOSURE( BSLBTRN_generator, CSLBTRN_generator, DSLBTRN_generator );
 /* line 504: */
GSLBTRN.data[0] = (&(ZRLBTRN_rep->Unit));
GSLBTRN.data[1] = (&(ZRLBTRN_rep->Index));
GSLBTRN.data[2] = (&(ZRLBTRN_rep->From));
 /* line 505: */
A_CALLPROC(BSLBTRN_generator,(A68_FALSE, &HSLBTRN),(A68_FALSE, &HSLBTRN,(BSLBTRN_generator).nonlocals));
JSLBTRN = A_HISVEC(ISLBTRN,GSLBTRN,3,A68_208 *) ;
A_VASSIGN2(JSLBTRN,HSLBTRN,A68_208 *) ;
ZPLBTRN_parts = HSLBTRN;
break;
case 23: /* REF STRUCT(MODE248,MODE208)  */
KSLBTRN_minst = (BQLBTRN.data.mode23);
 /* line 506: */
 /* line 507: */
{ 
A_CLOSURE( MSLBTRN_generator, NSLBTRN_generator, OSLBTRN_generator );
A_CALLPROC(MSLBTRN_generator,(A68_FALSE, &RSLBTRN),(A68_FALSE, &RSLBTRN,(MSLBTRN_generator).nonlocals));
ZPLBTRN_parts = RSLBTRN;
 /* line 508: */
 /* line 509: */
 /* line 511: */
SSLBTRN = 1 ;
TSLBTRN = (&A_VINDEX(ZPLBTRN_parts,SSLBTRN)) ;
(*TSLBTRN) = (&(KSLBTRN_minst->Right));
} 
break;
case 24: /* REF STRUCT(MODE208,MODE248,MODE208)  */
USLBTRN_dinst = (BQLBTRN.data.mode24);
 /* line 512: */
A_CLOSURE( WSLBTRN_generator, XSLBTRN_generator, YSLBTRN_generator );
 /* line 513: */
BTLBTRN.data[0] = (&(USLBTRN_dinst->Left));
BTLBTRN.data[1] = (&(USLBTRN_dinst->Right));
 /* line 515: */
A_CALLPROC(WSLBTRN_generator,(A68_FALSE, &CTLBTRN),(A68_FALSE, &CTLBTRN,(WSLBTRN_generator).nonlocals));
ETLBTRN = A_HISVEC(DTLBTRN,BTLBTRN,2,A68_208 *) ;
A_VASSIGN2(ETLBTRN,CTLBTRN,A68_208 *) ;
ZPLBTRN_parts = CTLBTRN;
break;
case 16: /* REF STRUCT(MODE208,MODE170)  */
FTLBTRN_ind = (BQLBTRN.data.mode16);
 /* line 516: */
 /* line 517: */
{ 
A_CLOSURE( HTLBTRN_generator, ITLBTRN_generator, JTLBTRN_generator );
A_CALLPROC(HTLBTRN_generator,(A68_FALSE, &MTLBTRN),(A68_FALSE, &MTLBTRN,(HTLBTRN_generator).nonlocals));
ZPLBTRN_parts = MTLBTRN;
 /* line 518: */
 /* line 519: */
 /* line 521: */
NTLBTRN = 1 ;
OTLBTRN = (&A_VINDEX(ZPLBTRN_parts,NTLBTRN)) ;
(*OTLBTRN) = (&(FTLBTRN_ind->Unit));
} 
break;
case 17: /* REF STRUCT(MODE208,MODE185)  */
PTLBTRN_trim = (BQLBTRN.data.mode17);
 /* line 522: */
 /* line 523: */
{ 
A_CLOSURE( RTLBTRN_generator, STLBTRN_generator, TTLBTRN_generator );
A_CALLPROC(RTLBTRN_generator,(A68_FALSE, &WTLBTRN),(A68_FALSE, &WTLBTRN,(RTLBTRN_generator).nonlocals));
ZPLBTRN_parts = WTLBTRN;
 /* line 524: */
 /* line 525: */
 /* line 527: */
XTLBTRN = 1 ;
YTLBTRN = (&A_VINDEX(ZPLBTRN_parts,XTLBTRN)) ;
(*YTLBTRN) = (&(PTLBTRN_trim->Unit));
} 
break;
case 22: /* REF STRUCT(BOOL,INT,MODE208,MODE208)  */
ZTLBTRN_conc = (BQLBTRN.data.mode22);
 /* line 528: */
A_CLOSURE( BULBTRN_generator, CULBTRN_generator, DULBTRN_generator );
 /* line 529: */
GULBTRN.data[0] = (&(ZTLBTRN_conc->Left));
GULBTRN.data[1] = (&(ZTLBTRN_conc->Right));
 /* line 531: */
A_CALLPROC(BULBTRN_generator,(A68_FALSE, &HULBTRN),(A68_FALSE, &HULBTRN,(BULBTRN_generator).nonlocals));
JULBTRN = A_HISVEC(IULBTRN,GULBTRN,2,A68_208 *) ;
A_VASSIGN2(JULBTRN,HULBTRN,A68_208 *) ;
ZPLBTRN_parts = HULBTRN;
break;
case 33: /* REF STRUCT(MODE170,MODE208)  */
KULBTRN_string = (BQLBTRN.data.mode33);
 /* line 532: */
 /* line 533: */
{ 
A_CLOSURE( MULBTRN_generator, NULBTRN_generator, OULBTRN_generator );
A_CALLPROC(MULBTRN_generator,(A68_FALSE, &RULBTRN),(A68_FALSE, &RULBTRN,(MULBTRN_generator).nonlocals));
ZPLBTRN_parts = RULBTRN;
 /* line 534: */
 /* line 535: */
 /* line 537: */
 /* line 538: */
SULBTRN = 1 ;
TULBTRN = (&A_VINDEX(ZPLBTRN_parts,SULBTRN)) ;
(*TULBTRN) = (&(KULBTRN_string->Char));
} 
break;
default: 
 /* line 539: */
NKDAOST_sysfault(VULBTRN);
break;
} 
 /* line 540: */
 /* line 541: */
WULBTRN = ZPLBTRN_parts;
} 
A_PROC_EXIT(subunits);
*ReturnedValue = (WULBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ZULBTRN_expandbody(A68_284 * Fndec, A68_287 * Environ)
{ 
A68_280 * AVLBTRN_fnbody;
A68_286  BVLBTRN_outernametypes;
A68_55  DVLBTRN_addnametypes;   /* proc value of non-global proc */
A68_BOOL  TVLBTRN_atomic;
A68_379  VVLBTRN_makelets;   /* proc value of non-global proc */
A68_380  RXLBTRN_makenewfunction;   /* proc value of non-global proc */
A68_381  OAMBTRN_walk;
A68_382  PAMBTRN_walkseries;
A68_381  SAMBTRN_isolate;   /* proc value of non-global proc */
A68_383  IBMBTRN_expandimplicitinstance;   /* proc value of non-global proc */
A68_384  DDMBTRN_walkfnname;   /* proc value of non-global proc */
A68_382  LDMBTRN_anonymous;   /* proc value of non-global proc */
A68_386  EEMBTRN_walkstr;   /* proc value of non-global proc */
A68_381  NEMBTRN_anonymous;   /* proc value of non-global proc */
A68_280  QFMBTRN;  /* united object - for case conformity */
A68_253 * RFMBTRN_u;
A68_231 * SFMBTRN_enclosed;
A68_231  TFMBTRN;  /* collateral clause result */
A68_208  UFMBTRN;  /* OPERATORS - mode -> union mode */
A68_208 * VFMBTRN;  /* YIELD */
A68_280  WFMBTRN;  /* OPERATORS - mode -> union mode */
A68_208  XFMBTRN;  /* avoid structure result */
A68_208 * YFMBTRN;  /* YIELD */
A68_272 * ZFMBTRN_r;
A68_231 * AGMBTRN_reform;
A68_253 * BGMBTRN_unittag;
A68_208  CGMBTRN;  /* OPERATORS - mode -> union mode */
A68_208 * DGMBTRN;  /* YIELD */
A68_280  EGMBTRN;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(expandbody);
 /* line 552: */
 /* line 556: */
{ 
AVLBTRN_fnbody = (&(Fndec->Fnbody));
 /* line 567: */
BVLBTRN_outernametypes = (*(&(Fndec->Nametypes)));
 /* line 570: */
A_CLOSURE( DVLBTRN_addnametypes, EVLBTRN_addnametypes, FVLBTRN_addnametypes );
(( FVLBTRN_addnametypes * ) ( DVLBTRN_addnametypes.nonlocals )) -> Fndec = Fndec;
(( FVLBTRN_addnametypes * ) ( DVLBTRN_addnametypes.nonlocals )) -> BVLBTRN_outernametypes = (&BVLBTRN_outernametypes);
 /* line 584: */
TVLBTRN_atomic = A68_TRUE;
 /* line 599: */
A_CLOSURE( VVLBTRN_makelets, WVLBTRN_makelets, XVLBTRN_makelets );
(( XVLBTRN_makelets * ) ( VVLBTRN_makelets.nonlocals )) -> Fndec = Fndec;
(( XVLBTRN_makelets * ) ( VVLBTRN_makelets.nonlocals )) -> Environ = Environ;
(( XVLBTRN_makelets * ) ( VVLBTRN_makelets.nonlocals )) -> DVLBTRN_addnametypes = DVLBTRN_addnametypes;
 /* line 642: */
A_CLOSURE( RXLBTRN_makenewfunction, SXLBTRN_makenewfunction, TXLBTRN_makenewfunction );
(( TXLBTRN_makenewfunction * ) ( RXLBTRN_makenewfunction.nonlocals )) -> Environ = Environ;
(( TXLBTRN_makenewfunction * ) ( RXLBTRN_makenewfunction.nonlocals )) -> Fndec = Fndec;
(( TXLBTRN_makenewfunction * ) ( RXLBTRN_makenewfunction.nonlocals )) -> DVLBTRN_addnametypes = DVLBTRN_addnametypes;
 /* line 713: */
 /* line 714: */
 /* line 746: */
A_CLOSURE( SAMBTRN_isolate, TAMBTRN_isolate, UAMBTRN_isolate );
(( UAMBTRN_isolate * ) ( SAMBTRN_isolate.nonlocals )) -> TVLBTRN_atomic = (&TVLBTRN_atomic);
(( UAMBTRN_isolate * ) ( SAMBTRN_isolate.nonlocals )) -> Fndec = Fndec;
(( UAMBTRN_isolate * ) ( SAMBTRN_isolate.nonlocals )) -> Environ = Environ;
(( UAMBTRN_isolate * ) ( SAMBTRN_isolate.nonlocals )) -> OAMBTRN_walk = (&OAMBTRN_walk);
(( UAMBTRN_isolate * ) ( SAMBTRN_isolate.nonlocals )) -> VVLBTRN_makelets = VVLBTRN_makelets;
(( UAMBTRN_isolate * ) ( SAMBTRN_isolate.nonlocals )) -> RXLBTRN_makenewfunction = RXLBTRN_makenewfunction;
 /* line 775: */
A_CLOSURE( IBMBTRN_expandimplicitinstance, JBMBTRN_expandimplicitinstance, KBMBTRN_expandimplicitinstance );
(( KBMBTRN_expandimplicitinstance * ) ( IBMBTRN_expandimplicitinstance.nonlocals )) -> Fndec = Fndec;
(( KBMBTRN_expandimplicitinstance * ) ( IBMBTRN_expandimplicitinstance.nonlocals )) -> Environ = Environ;
(( KBMBTRN_expandimplicitinstance * ) ( IBMBTRN_expandimplicitinstance.nonlocals )) -> OAMBTRN_walk = (&OAMBTRN_walk);
(( KBMBTRN_expandimplicitinstance * ) ( IBMBTRN_expandimplicitinstance.nonlocals )) -> TVLBTRN_atomic = (&TVLBTRN_atomic);
(( KBMBTRN_expandimplicitinstance * ) ( IBMBTRN_expandimplicitinstance.nonlocals )) -> VVLBTRN_makelets = VVLBTRN_makelets;
(( KBMBTRN_expandimplicitinstance * ) ( IBMBTRN_expandimplicitinstance.nonlocals )) -> DVLBTRN_addnametypes = DVLBTRN_addnametypes;
 /* line 812: */
A_CLOSURE( DDMBTRN_walkfnname, EDMBTRN_walkfnname, FDMBTRN_walkfnname );
(( FDMBTRN_walkfnname * ) ( DDMBTRN_walkfnname.nonlocals )) -> Environ = Environ;
 /* line 826: */
A_CLOSURE( LDMBTRN_anonymous, MDMBTRN_anonymous, NDMBTRN_anonymous );
(( NDMBTRN_anonymous * ) ( LDMBTRN_anonymous.nonlocals )) -> TVLBTRN_atomic = (&TVLBTRN_atomic);
(( NDMBTRN_anonymous * ) ( LDMBTRN_anonymous.nonlocals )) -> OAMBTRN_walk = (&OAMBTRN_walk);
(( NDMBTRN_anonymous * ) ( LDMBTRN_anonymous.nonlocals )) -> DDMBTRN_walkfnname = DDMBTRN_walkfnname;
PAMBTRN_walkseries = LDMBTRN_anonymous;
 /* line 864: */
A_CLOSURE( EEMBTRN_walkstr, FEMBTRN_walkstr, GEMBTRN_walkstr );
(( GEMBTRN_walkstr * ) ( EEMBTRN_walkstr.nonlocals )) -> OAMBTRN_walk = (&OAMBTRN_walk);
 /* line 894: */
A_CLOSURE( NEMBTRN_anonymous, OEMBTRN_anonymous, PEMBTRN_anonymous );
(( PEMBTRN_anonymous * ) ( NEMBTRN_anonymous.nonlocals )) -> TVLBTRN_atomic = (&TVLBTRN_atomic);
(( PEMBTRN_anonymous * ) ( NEMBTRN_anonymous.nonlocals )) -> OAMBTRN_walk = (&OAMBTRN_walk);
(( PEMBTRN_anonymous * ) ( NEMBTRN_anonymous.nonlocals )) -> EEMBTRN_walkstr = EEMBTRN_walkstr;
(( PEMBTRN_anonymous * ) ( NEMBTRN_anonymous.nonlocals )) -> Fndec = Fndec;
(( PEMBTRN_anonymous * ) ( NEMBTRN_anonymous.nonlocals )) -> Environ = Environ;
(( PEMBTRN_anonymous * ) ( NEMBTRN_anonymous.nonlocals )) -> SAMBTRN_isolate = SAMBTRN_isolate;
(( PEMBTRN_anonymous * ) ( NEMBTRN_anonymous.nonlocals )) -> IBMBTRN_expandimplicitinstance = IBMBTRN_expandimplicitinstance;
(( PEMBTRN_anonymous * ) ( NEMBTRN_anonymous.nonlocals )) -> PAMBTRN_walkseries = (&PAMBTRN_walkseries);
OAMBTRN_walk = NEMBTRN_anonymous;
 /* line 961: */
 /* line 962: */
QFMBTRN = (*AVLBTRN_fnbody) ;
switch ( QFMBTRN.mode )
{ 
case 1: /* REF STRUCT(MODE208)  */
RFMBTRN_u = (QFMBTRN.data.mode1);
 /* line 963: */
 /* line 967: */
{ 
SFMBTRN_enclosed = (A_HEAP(A68_231 ));
TFMBTRN.Body = SAAATRN_nilseries;
TFMBTRN.Output = (*(&(RFMBTRN_u->Tag)));
(*SFMBTRN_enclosed) = TFMBTRN;
 /* line 968: */
A_CALLPROC(PAMBTRN_walkseries,(SFMBTRN_enclosed, A68_TRUE),(SFMBTRN_enclosed, A68_TRUE,(PAMBTRN_walkseries).nonlocals));
 /* line 969: */
VFMBTRN = (&(RFMBTRN_u->Tag)) ;
(*VFMBTRN) = A_UNITE(UFMBTRN,mode29,29,SFMBTRN_enclosed);
 /* line 970: */
if ( TVLBTRN_atomic )
{ 
 /* line 971: */
 /* line 972: */
KNLBTRN_unitfunction( A_UNITE(WFMBTRN,mode1,1,RFMBTRN_u), &XFMBTRN );
YFMBTRN = (&(RFMBTRN_u->Tag)) ;
(*YFMBTRN) = XFMBTRN;
} 
} 
break;
case 4: /* REF STRUCT(INT)  */
ZFMBTRN_r = (QFMBTRN.data.mode4);
 /* line 973: */
 /* line 974: */
{ 
AGMBTRN_reform = ZHLBTRN_transformreform(Fndec, Environ);
 /* line 975: */
A_CALLPROC(PAMBTRN_walkseries,(AGMBTRN_reform, A68_TRUE),(AGMBTRN_reform, A68_TRUE,(PAMBTRN_walkseries).nonlocals));
 /* line 976: */
BGMBTRN_unittag = (A_HEAP(A68_253 ));
 /* line 977: */
DGMBTRN = (&(BGMBTRN_unittag->Tag)) ;
(*DGMBTRN) = A_UNITE(CGMBTRN,mode29,29,AGMBTRN_reform);
 /* line 978: */
 /* line 979: */
 /* line 980: */
 /* line 982: */
(*AVLBTRN_fnbody) = A_UNITE(EGMBTRN,mode1,1,BGMBTRN_unittag);
} 
break;
default: 
 /* line 984: */
/*SKIP*/;
break;
} 
} 
A_PROC_EXIT(expandbody);
return;
} 
#undef NL

A68_293 * GGMBTRN_expandtoatomic(A68_293 * F)
{ 
A68_284 * HGMBTRN_fn;
A68_287 * IGMBTRN_environ;
A68_293 * JGMBTRN;  /* clause result */
A_PROC_ENTRY(expandtoatomic);
 /* line 1013: */
 /* line 1015: */
{ 
HGMBTRN_fn = CQMATRN_get_outerfn((*F));
 /* line 1016: */
IGMBTRN_environ = (*(&(F->Environ)));
 /* line 1018: */
WHLBTRN_reseedsimnullid();
 /* line 1019: */
ZULBTRN_expandbody(HGMBTRN_fn, IGMBTRN_environ);
 /* line 1021: */
 /* line 1022: */
 /* line 1025: */
JGMBTRN = F;
} 
A_PROC_EXIT(expandtoatomic);
return( JGMBTRN );
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void KHLBTRN(void)   /* initialise DECS kexpand */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/kexpand.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/modeprocs.m","./mfiles/assmodes.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
HNMATRN();   /* USE modeprocs */
BAAATRN();   /* USE assmodes */
MTAAOSL();   /* USE putstrings */
JSCAOST();   /* USE basics */
PCAAOST();   /* USE osinterface */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/transform/assoc/./a68files/kexpand.a68";
A_config.translation_time = "Tue Apr  4 10:08:59 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "JHLBTRN (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:08:59 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS kexpand);
UEAALIB_a68config(LGAALIB_configinfo, OHLBTRN);
 /* line 124: */
 /* line 126: */
 /* line 128: */
 /* line 135: */
 /* line 290: */
 /* line 312: */
 /* line 336: */
 /* line 352: */
 /* line 353: */
 /* line 376: */
 /* line 401: */
 /* line 452: */
 /* line 551: */
 /* line 1012: */
 /* line 1027: */
A_PROC_EXIT(DECS kexpand);
} 
#undef NL
/* end of translation of ./a68files/kexpand.a68 */
