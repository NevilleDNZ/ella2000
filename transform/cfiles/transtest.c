
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
/* UNAME:GLVBTRN */
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
A68_BITS  Options;
A_PAD_BITS(PAD_24)
};
typedef struct A68t111  A68_111 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t112,(struct A68t111 ,struct A68t111 ,struct A68t111 *),(struct A68t111 ,struct A68t111 ,struct A68t111 *,void *));
typedef struct A68t112  A68_112 ;    /* PROC(MODE111,MODE111) MODE111 */

A_PROCEDURE(struct A68t111 *,A68t113,(struct A68t111 *,struct A68t111 ),(struct A68t111 *,struct A68t111 ,void *));
typedef struct A68t113  A68_113 ;    /* PROC(REF MODE111,MODE111) REF MODE111 */

A_PROCEDURE(A68_BOOL ,A68t114,(struct A68t111 ,struct A68t111 ),(struct A68t111 ,struct A68t111 ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(MODE111,MODE111) BOOL */

A_PROCEDURE(A68_BOOL ,A68t115,(struct A68t111 ,A68_INT ),(struct A68t111 ,A68_INT ,void *));
typedef struct A68t115  A68_115 ;    /* PROC(MODE111,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t116,(A68_INT ,struct A68t111 *),(A68_INT ,struct A68t111 *,void *));
typedef struct A68t116  A68_116 ;    /* PROC(INT) MODE111 */
struct A68t118 ;

A_PROCEDURE(A68_VOID ,A68t117,(struct A68t118 ),(struct A68t118 ,void *));
typedef struct A68t117  A68_117 ;    /* PROC(MODE118) VOID */
struct A68t118 { A68_INT mode; union {
A68_BOOL  mode1;
struct A68t111  mode2;
A68_VC  mode3;
} data; };
typedef struct A68t118  A68_118 ;    /* UNION(BOOL,MODE111,MODE26)  */

A_PROCEDURE(A68_BOOL ,A68t119,(void),(void *));
typedef struct A68t119  A68_119 ;    /* PROC BOOL */
struct A68t121 ;

A_PROCEDURE(A68_VOID ,A68t120,(struct A68t121 *,A68_VC *),(struct A68t121 *,A68_VC *,void *));
typedef struct A68t120  A68_120 ;    /* PROC(REF MODE121) MODE26 */
struct A68t121{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t121  A68_121 ;    /* STRUCT(REF MODE26,REF BITS)  */

A_PROCEDURE(A68_INT ,A68t122,(A68_INT ),(A68_INT ,void *));
typedef struct A68t122  A68_122 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t123,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t123  A68_123 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_BOOL ,A68t124,(struct A68t35 ,struct A68t35 ),(struct A68t35 ,struct A68t35 ,void *));
typedef struct A68t124  A68_124 ;    /* PROC(MODE35,MODE35) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t126);
typedef struct A68t126  A68_126 ;    /* STRUCT 4 CHAR */
struct A68t125{
struct A68t126  Access;
A_PAD_ISTRUCT(A68_126 ,PAD_25)
};
typedef struct A68t125  A68_125 ;    /* STRUCT(MODE126)  */

A_PROCEDURE(struct A68t121 *,A68t127,(A68_VC ,struct A68t125 ,struct A68t97 ),(A68_VC ,struct A68t125 ,struct A68t97 ,void *));
typedef struct A68t127  A68_127 ;    /* PROC(MODE26,MODE125,MODE97) REF MODE121 */

A_PROCEDURE(A68_VOID ,A68t128,(struct A68t121 *,struct A68t97 ),(struct A68t121 *,struct A68t97 ,void *));
typedef struct A68t128  A68_128 ;    /* PROC(REF MODE121,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t129,(struct A68t121 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *),(struct A68t121 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t129  A68_129 ;    /* PROC(REF MODE121,REF MODE26,REF INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t130,(struct A68t121 *,A68_VC ,struct A68t97 ,struct A68t35 *),(struct A68t121 *,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t130  A68_130 ;    /* PROC(REF MODE121,MODE26,MODE97) MODE35 */
struct A68t131{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_26)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_27)
A68_SINT  Device;
A_PAD_SINT(PAD_28)
A68_SINT  Links;
A_PAD_SINT(PAD_29)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_30)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_31)
A68_LINT  Size;
A_PAD_LINT(PAD_32)
A68_LINT  Accessed;
A_PAD_LINT(PAD_33)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_34)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_35)
};
typedef struct A68t131  A68_131 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t133 ;

A_PROCEDURE(struct A68t131 *,A68t132,(struct A68t133 ,struct A68t97 ),(struct A68t133 ,struct A68t97 ,void *));
typedef struct A68t132  A68_132 ;    /* PROC(MODE133,MODE97) REF MODE131 */
struct A68t133 { A68_INT mode; union {
struct A68t121 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t133  A68_133 ;    /* UNION(REF MODE121,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t134,(struct A68t121 *,A68_LINT *,struct A68t97 ,struct A68t35 *),(struct A68t121 *,A68_LINT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t134  A68_134 ;    /* PROC(REF MODE121,REF LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t135,(struct A68t121 *,A68_LINT ,struct A68t97 ,struct A68t35 *),(struct A68t121 *,A68_LINT ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t135  A68_135 ;    /* PROC(REF MODE121,LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t136,(struct A68t121 *,struct A68t97 ,struct A68t35 *),(struct A68t121 *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t136  A68_136 ;    /* PROC(REF MODE121,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t137,(A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t137  A68_137 ;    /* PROC(MODE26,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t138,(A68_INT ),(A68_INT ,void *));
typedef struct A68t138  A68_138 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_LINT ,A68t139,(void),(void *));
typedef struct A68t139  A68_139 ;    /* PROC LONG INT */

A_PROCEDURE(A68_INT ,A68t140,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t140  A68_140 ;    /* PROC(MODE26,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t141,(void),(void *));
typedef struct A68t141  A68_141 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t142,(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t142  A68_142 ;    /* PROC(MODE26,MODE26,MODE97) MODE26 */

A_PROCEDURE(A68_VOID ,A68t143,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t143  A68_143 ;    /* PROC(MODE26,MODE26,MODE97) MODE35 */
struct A68t144{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t144  A68_144 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t145,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t144 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t144 *,void *));
typedef struct A68t145  A68_145 ;    /* PROC(MODE26,MODE26,MODE97) MODE144 */

A_PROCEDURE(A68_VOID ,A68t146,(A68_VC *),(A68_VC *,void *));
typedef struct A68t146  A68_146 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t147,(struct A68t46 *),(struct A68t46 *,void *));
typedef struct A68t147  A68_147 ;    /* PROC MODE46 */

A_PROCEDURE(A68_VOID ,A68t148,(A68_VC ,struct A68t97 ,struct A68t46 *),(A68_VC ,struct A68t97 ,struct A68t46 *,void *));
typedef struct A68t148  A68_148 ;    /* PROC(MODE26,MODE97) MODE46 */
struct A68t150 ;

A_PROCEDURE(A68_VOID ,A68t149,(struct A68t150 ,struct A68t97 ),(struct A68t150 ,struct A68t97 ,void *));
typedef struct A68t149  A68_149 ;    /* PROC(MODE150,MODE97) VOID */
A_VECTOR(struct A68t151 ,A68t150);
typedef struct A68t150  A68_150 ;    /* VECTOR [] MODE151 */
struct A68t151{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_36)
};
typedef struct A68t151  A68_151 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t152,(void),(void *));
typedef struct A68t152  A68_152 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t153,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t153  A68_153 ;    /* PROC(BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t154,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t155,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t155  A68_155 ;    /* PROC(REF MODE26) REF MODE26 */

A_PROCEDURE(A68_REAL ,A68t156,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(REAL) REAL */
struct A68t157{
A68_VC  Name;
A68_VC  Version;
A68_VC  Date;
A68_VC  Msg;
A68_VC  Sys_fault;
};
typedef struct A68t157  A68_157 ;    /* STRUCT(MODE26,MODE26,MODE26,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t158,(A68_BOOL ,struct A68t157 *),(A68_BOOL ,struct A68t157 *,void *));
typedef struct A68t158  A68_158 ;    /* PROC(BOOL) MODE157 */

A_PROCEDURE(A68_VOID ,A68t159,(struct A68t157 ,A68_BOOL ),(struct A68t157 ,A68_BOOL ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(MODE157,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t160,(struct A68t157 *),(struct A68t157 *,void *));
typedef struct A68t160  A68_160 ;    /* PROC MODE157 */

A_PROCEDURE(A68_BOOL ,A68t161,(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ),(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(MODE26,MODE26,MODE26,REF REF MODE26,BOOL) BOOL */
struct A68t163 ;
struct A68t164 ;

A_PROCEDURE(A68_VOID ,A68t162,(A68_VC ,struct A68t152 ,struct A68t163 ,struct A68t164 ),(A68_VC ,struct A68t152 ,struct A68t163 ,struct A68t164 ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(MODE26,MODE152,MODE163,MODE164) VOID */

A_PROCEDURE(A68_BOOL ,A68t163,(A68_VC ,struct A68t146 ),(A68_VC ,struct A68t146 ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(MODE26,MODE146) BOOL */

A_PROCEDURE(A68_BOOL ,A68t164,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t164  A68_164 ;    /* PROC(BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t165,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t166,(struct A68t165 ,struct A68t97 ),(struct A68t165 ,struct A68t97 ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(MODE165,MODE97) VOID */
struct A68t167{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t167  A68_167 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t169 ;

A_PROCEDURE(A68_VOID ,A68t168,(struct A68t169 ),(struct A68t169 ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(MODE169) VOID */
struct A68t169 { A68_INT mode; union {
A68_VC  mode1;
struct A68t32  mode2;
struct A68t54  mode3;
struct A68t53  mode4;
} data; };
typedef struct A68t169  A68_169 ;    /* UNION(REF MODE26,REF MODE32,REF MODE54,REF MODE53)  */

A_PROCEDURE(A68_INT ,A68t170,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t170  A68_170 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t171,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(BITS,BITS) BITS */
struct A68t173 ;

A_PROCEDURE(A68_VOID ,A68t172,(struct A68t173 ,A68_INT ),(struct A68t173 ,A68_INT ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE173,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t173,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(CHAR) VOID */
struct A68t175 ;

A_PROCEDURE(A68_INT ,A68t174,(struct A68t175 ),(struct A68t175 ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE175) INT */

A_PROCEDURE(A68_CHAR ,A68t175,(void),(void *));
typedef struct A68t175  A68_175 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t176,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t176  A68_176 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t177,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t177  A68_177 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t178,(A68_VC *),(A68_VC *,void *));
typedef struct A68t178  A68_178 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_INT ,A68t179,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t179  A68_179 ;    /* PROC(INT,INT,REF BOOL) INT */

A_PROCEDURE(A68_BOOL ,A68t180,(A68_VC ,A68_INT *,struct A68t97 ),(A68_VC ,A68_INT *,struct A68t97 ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(MODE26,REF INT,MODE97) BOOL */
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
struct A68t178  Prompt;
struct A68t121 * Logfile;
struct A68t121 * Outfile;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,INT,INT,REF MODE182,REF MODE183,MODE178,REF MODE121,REF MODE121)  */

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
struct A68t121 * File;
A68_BOOL  Suspended;
A_PAD_BOOL(PAD_51)
A68_INT  Number;
A_PAD_INT(PAD_52)
A68_VC  Name;
struct A68t182 * Reader;
struct A68t183 * Previous;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(REF MODE121,BOOL,INT,REF MODE26,REF MODE182,REF MODE183)  */
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

A_PROCEDURE(A68_VOID ,A68t190,(struct A68t178 ),(struct A68t178 ,void *));
typedef struct A68t190  A68_190 ;    /* PROC(MODE178) VOID */
struct A68t191 ;

A_PROCEDURE(A68_VOID ,A68t192,(struct A68t191 ,A68_BOOL ,struct A68t97 ),(struct A68t191 ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(MODE191,BOOL,MODE97) VOID */
struct A68t191{
A68_VC  Name;
A68_VC  Default;
A68_VC  Value;
A68_INT  Sort;
A_PAD_INT(PAD_53)
struct A68t192  Set;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,INT,MODE192)  */

A_PROCEDURE(A68_VOID ,A68t193,(A68_VC ,A68_VC ,A68_INT ,struct A68t192 ),(A68_VC ,A68_VC ,A68_INT ,struct A68t192 ,void *));
typedef struct A68t193  A68_193 ;    /* PROC(MODE26,MODE26,INT,MODE192) VOID */

A_PROCEDURE(A68_BOOL ,A68t194,(A68_VC ),(A68_VC ,void *));
typedef struct A68t194  A68_194 ;    /* PROC(MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t195,(A68_VC ,A68_VC ,struct A68t97 ),(A68_VC ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(MODE26,MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t196,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t196  A68_196 ;    /* PROC(BOOL) VOID */
struct A68t197{
A68_VC  Id;
struct A68t197 * Rest;
};
typedef struct A68t197  A68_197 ;    /* STRUCT(REF MODE26,REF MODE197)  */
struct A68t198{
A68_INT  Int;
A_PAD_INT(PAD_54)
struct A68t198 * Rest;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(INT,REF MODE198)  */
struct A68t199 { A68_INT mode; union {
struct A68t200 * mode1;
struct A68t201 * mode2;
struct A68t202 * mode3;
struct A68t203 * mode4;
struct A68t204 * mode5;
} data; };
typedef struct A68t199  A68_199 ;    /* UNION(REF MODE200,REF MODE201,REF MODE202,REF MODE203,REF MODE204)  */
struct A68t200{
A68_INT  Attrno;
A_PAD_INT(PAD_55)
};
typedef struct A68t200  A68_200 ;    /* STRUCT(INT)  */
struct A68t201{
A68_VC  Classname;
struct A68t197 * Strings;
};
typedef struct A68t201  A68_201 ;    /* STRUCT(REF MODE26,REF MODE197)  */
struct A68t202{
struct A68t199  Elem;
struct A68t202 * Rest;
};
typedef struct A68t202  A68_202 ;    /* STRUCT(MODE199,REF MODE202)  */
struct A68t203{
struct A68t199  Attr;
};
typedef struct A68t203  A68_203 ;    /* STRUCT(MODE199)  */
struct A68t204{
A68_INT  Attrnull;
A_PAD_INT(PAD_56)
};
typedef struct A68t204  A68_204 ;    /* STRUCT(INT)  */
struct A68t205{
A68_INT  Sort;
A_PAD_INT(PAD_57)
A68_VC  Attrname;
struct A68t199  Value;
struct A68t206 * Usage;
};
typedef struct A68t205  A68_205 ;    /* STRUCT(INT,REF MODE26,MODE199,REF MODE206)  */
struct A68t206{
A68_INT  Contextno;
A_PAD_INT(PAD_58)
A68_INT  Closureno;
A_PAD_INT(PAD_59)
A68_INT  Libv_spec;
A_PAD_INT(PAD_60)
A68_INT  Libv_body;
A_PAD_INT(PAD_61)
A68_BOOL  Import;
A_PAD_BOOL(PAD_62)
A68_BOOL  Export;
A_PAD_BOOL(PAD_63)
};
typedef struct A68t206  A68_206 ;    /* STRUCT(INT,INT,INT,INT,BOOL,BOOL)  */
struct A68t207{
struct A68t199  Tag;
};
typedef struct A68t207  A68_207 ;    /* STRUCT(MODE199)  */
struct A68t208 { A68_INT mode; union {
struct A68t209 * mode1;
struct A68t210 * mode2;
struct A68t211 * mode3;
struct A68t212 * mode4;
struct A68t213 * mode5;
struct A68t214 * mode6;
struct A68t215 * mode7;
struct A68t216 * mode8;
struct A68t217 * mode9;
struct A68t218 * mode10;
} data; };
typedef struct A68t208  A68_208 ;    /* UNION(REF MODE209,REF MODE210,REF MODE211,REF MODE212,REF MODE213,REF MODE214,REF MODE215,REF MODE216,REF MODE217,REF MODE218)  */
struct A68t209{
A68_INT  Int;
A_PAD_INT(PAD_64)
A68_VC  Text;
};
typedef struct A68t209  A68_209 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t210{
A68_INT  Sort;
A_PAD_INT(PAD_65)
struct A68t208  Test;
struct A68t208  Standard;
};
typedef struct A68t210  A68_210 ;    /* STRUCT(INT,MODE208,MODE208)  */
struct A68t211{
A68_INT  Nameno;
A_PAD_INT(PAD_66)
};
typedef struct A68t211  A68_211 ;    /* STRUCT(INT)  */
struct A68t212{
A68_INT  Intno;
A_PAD_INT(PAD_67)
};
typedef struct A68t212  A68_212 ;    /* STRUCT(INT)  */
struct A68t213{
struct A68t208  Left;
A68_INT  Sort;
A_PAD_INT(PAD_68)
struct A68t208  Right;
};
typedef struct A68t213  A68_213 ;    /* STRUCT(MODE208,INT,MODE208)  */
struct A68t214{
A68_INT  Sort;
A_PAD_INT(PAD_69)
struct A68t208  Right;
};
typedef struct A68t214  A68_214 ;    /* STRUCT(INT,MODE208)  */
struct A68t215{
struct A68t208  Cond;
struct A68t208  True;
struct A68t208  False;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(MODE208,MODE208,MODE208)  */
struct A68t216{
struct A68t208  Formula;
};
typedef struct A68t216  A68_216 ;    /* STRUCT(MODE208)  */
struct A68t217{
A68_INT  Macparno;
A_PAD_INT(PAD_70)
};
typedef struct A68t217  A68_217 ;    /* STRUCT(INT)  */
struct A68t218{
A68_INT  Fnull;
A_PAD_INT(PAD_71)
};
typedef struct A68t218  A68_218 ;    /* STRUCT(INT)  */
struct A68t219{
struct A68t208  Tag;
};
typedef struct A68t219  A68_219 ;    /* STRUCT(MODE208)  */
struct A68t220{
struct A68t208  Formula;
struct A68t220 * Rest;
};
typedef struct A68t220  A68_220 ;    /* STRUCT(MODE208,REF MODE220)  */
struct A68t223{
struct A68t208  Lwb;
struct A68t208  Upb;
};
typedef struct A68t223  A68_223 ;    /* STRUCT(MODE208,MODE208)  */
struct A68t222 { A68_INT mode; union {
struct A68t209 * mode1;
struct A68t210 * mode2;
struct A68t211 * mode3;
struct A68t212 * mode4;
struct A68t213 * mode5;
struct A68t214 * mode6;
struct A68t215 * mode7;
struct A68t216 * mode8;
struct A68t217 * mode9;
struct A68t218 * mode10;
struct A68t223  mode11;
} data; };
typedef struct A68t222  A68_222 ;    /* UNION(REF MODE209,REF MODE210,REF MODE211,REF MODE212,REF MODE213,REF MODE214,REF MODE215,REF MODE216,REF MODE217,REF MODE218,MODE223)  */
struct A68t221{
A68_INT  Sort;
A_PAD_INT(PAD_72)
A68_VC  Intname;
struct A68t199  Attr;
struct A68t222  Value;
struct A68t206 * Usage;
};
typedef struct A68t221  A68_221 ;    /* STRUCT(INT,REF MODE26,MODE199,MODE222,REF MODE206)  */
struct A68t224 { A68_INT mode; union {
struct A68t225 * mode1;
struct A68t226 * mode2;
struct A68t227 * mode3;
struct A68t228 * mode4;
struct A68t229 * mode5;
struct A68t230 * mode6;
struct A68t231 * mode7;
struct A68t217 * mode8;
struct A68t232 * mode9;
} data; };
typedef struct A68t224  A68_224 ;    /* UNION(REF MODE225,REF MODE226,REF MODE227,REF MODE228,REF MODE229,REF MODE230,REF MODE231,REF MODE217,REF MODE232)  */
struct A68t225{
A68_INT  Typeno;
A_PAD_INT(PAD_73)
};
typedef struct A68t225  A68_225 ;    /* STRUCT(INT)  */
struct A68t226{
struct A68t208  Size;
struct A68t224  Elem;
};
typedef struct A68t226  A68_226 ;    /* STRUCT(MODE208,MODE224)  */
struct A68t227{
struct A68t224  Elem;
struct A68t227 * Rest;
};
typedef struct A68t227  A68_227 ;    /* STRUCT(MODE224,REF MODE227)  */
struct A68t228{
struct A68t224  From;
struct A68t224  To;
};
typedef struct A68t228  A68_228 ;    /* STRUCT(MODE224,MODE224)  */
struct A68t229{
struct A68t224  Type;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(MODE224)  */
struct A68t230{
struct A68t208  Size;
struct A68t224  Char;
};
typedef struct A68t230  A68_230 ;    /* STRUCT(MODE208,MODE224)  */
struct A68t231{
A68_INT  Tvoid;
A_PAD_INT(PAD_74)
};
typedef struct A68t231  A68_231 ;    /* STRUCT(INT)  */
struct A68t232{
A68_INT  Tnull;
A_PAD_INT(PAD_75)
};
typedef struct A68t232  A68_232 ;    /* STRUCT(INT)  */
struct A68t233{
struct A68t224  Tag;
};
typedef struct A68t233  A68_233 ;    /* STRUCT(MODE224)  */
struct A68t234{
A68_VC  Tagname;
A68_VC  Chars;
};
typedef struct A68t234  A68_234 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t235{
A68_VC  Altname;
struct A68t224  Assoc;
};
typedef struct A68t235  A68_235 ;    /* STRUCT(REF MODE26,MODE224)  */
struct A68t236{
A68_VC  Tagname;
struct A68t223  Range;
};
typedef struct A68t236  A68_236 ;    /* STRUCT(REF MODE26,MODE223)  */
A_VECTOR(struct A68t235 ,A68t238);
typedef struct A68t238  A68_238 ;    /* VECTOR [] MODE235 */
struct A68t237 { A68_INT mode; union {
struct A68t238  mode1;
struct A68t236 * mode2;
struct A68t233 * mode3;
struct A68t234 * mode4;
} data; };
typedef struct A68t237  A68_237 ;    /* UNION(REF MODE238,REF MODE236,REF MODE233,REF MODE234)  */
struct A68t239{
A68_INT  Sort;
A_PAD_INT(PAD_76)
A68_VC  Typename;
struct A68t199  Attr;
struct A68t237  Body;
struct A68t206 * Usage;
};
typedef struct A68t239  A68_239 ;    /* STRUCT(INT,REF MODE26,MODE199,MODE237,REF MODE206)  */
struct A68t240{
A68_INT  Constno;
A_PAD_INT(PAD_77)
};
typedef struct A68t240  A68_240 ;    /* STRUCT(INT)  */
struct A68t241{
A68_INT  Typeno;
A_PAD_INT(PAD_78)
A68_INT  Primno;
A_PAD_INT(PAD_79)
};
typedef struct A68t241  A68_241 ;    /* STRUCT(INT,INT)  */
struct A68t242{
A68_INT  Typeno;
A_PAD_INT(PAD_80)
struct A68t208  Index;
};
typedef struct A68t242  A68_242 ;    /* STRUCT(INT,MODE208)  */
struct A68t243{
A68_INT  Typeno;
A_PAD_INT(PAD_81)
struct A68t223  Range;
};
typedef struct A68t243  A68_243 ;    /* STRUCT(INT,MODE223)  */
struct A68t244{
struct A68t224  Querytype;
};
typedef struct A68t244  A68_244 ;    /* STRUCT(MODE224)  */
struct A68t246 { A68_INT mode; union {
struct A68t240 * mode1;
struct A68t241 * mode2;
struct A68t242 * mode3;
struct A68t244 * mode4;
struct A68t247 * mode5;
struct A68t248 * mode6;
struct A68t229 * mode7;
struct A68t243 * mode8;
struct A68t249 * mode9;
struct A68t250 * mode10;
struct A68t251 * mode11;
struct A68t252 * mode12;
struct A68t253 * mode13;
struct A68t254 * mode14;
struct A68t255 * mode15;
struct A68t256 * mode16;
struct A68t257 * mode17;
struct A68t258 * mode18;
struct A68t259 * mode19;
struct A68t260 * mode20;
struct A68t261 * mode21;
struct A68t262 * mode22;
struct A68t263 * mode23;
struct A68t264 * mode24;
struct A68t265 * mode25;
struct A68t266 * mode26;
struct A68t267 * mode27;
struct A68t268 * mode28;
struct A68t269 * mode29;
struct A68t270 * mode30;
struct A68t271 * mode31;
struct A68t272 * mode32;
struct A68t273 * mode33;
struct A68t274 * mode34;
} data; };
typedef struct A68t246  A68_246 ;    /* UNION(REF MODE240,REF MODE241,REF MODE242,REF MODE244,REF MODE247,REF MODE248,REF MODE229,REF MODE243,REF MODE249,REF MODE250,REF MODE251,REF MODE252,REF MODE253,REF MODE254,REF MODE255,REF MODE256,REF MODE257,REF MODE258,REF MODE259,REF MODE260,REF MODE261,REF MODE262,REF MODE263,REF MODE264,REF MODE265,REF MODE266,REF MODE267,REF MODE268,REF MODE269,REF MODE270,REF MODE271,REF MODE272,REF MODE273,REF MODE274)  */
struct A68t245{
A68_INT  Sort;
A_PAD_INT(PAD_82)
A68_VC  Constname;
struct A68t199  Attr;
struct A68t246  Value;
struct A68t206 * Usage;
};
typedef struct A68t245  A68_245 ;    /* STRUCT(INT,REF MODE26,MODE199,MODE246,REF MODE206)  */
struct A68t247{
A68_INT  Typeno;
A_PAD_INT(PAD_83)
struct A68t32  String;
};
typedef struct A68t247  A68_247 ;    /* STRUCT(INT,REF MODE32)  */
struct A68t248{
A68_INT  Cvoid;
A_PAD_INT(PAD_84)
};
typedef struct A68t248  A68_248 ;    /* STRUCT(INT)  */
struct A68t249{
A68_INT  Typeno;
A_PAD_INT(PAD_85)
A68_INT  Firstno;
A_PAD_INT(PAD_86)
A68_INT  Lastno;
A_PAD_INT(PAD_87)
};
typedef struct A68t249  A68_249 ;    /* STRUCT(INT,INT,INT)  */
struct A68t250{
struct A68t246  Alt;
struct A68t250 * Rest;
};
typedef struct A68t250  A68_250 ;    /* STRUCT(MODE246,REF MODE250)  */
struct A68t251{
A68_INT  Sort;
A_PAD_INT(PAD_88)
A68_INT  Nameno;
A_PAD_INT(PAD_89)
};
typedef struct A68t251  A68_251 ;    /* STRUCT(INT,INT)  */
struct A68t252{
struct A68t246  Sink;
struct A68t246  Source;
};
typedef struct A68t252  A68_252 ;    /* STRUCT(MODE246,MODE246)  */
struct A68t253{
A68_INT  Typeno;
A_PAD_INT(PAD_90)
A68_INT  Altno;
A_PAD_INT(PAD_91)
struct A68t246  Assoc;
};
typedef struct A68t253  A68_253 ;    /* STRUCT(INT,INT,MODE246)  */
struct A68t254{
struct A68t246  Extract;
A68_INT  Typeno;
A_PAD_INT(PAD_92)
A68_INT  Altno;
A_PAD_INT(PAD_93)
};
typedef struct A68t254  A68_254 ;    /* STRUCT(MODE246,INT,INT)  */
struct A68t255{
struct A68t246  Unit;
A68_INT  Fnno;
A_PAD_INT(PAD_94)
A68_INT  Nameno;
A_PAD_INT(PAD_95)
};
typedef struct A68t255  A68_255 ;    /* STRUCT(MODE246,INT,INT)  */
struct A68t256{
struct A68t246  Unit;
struct A68t208  Index;
};
typedef struct A68t256  A68_256 ;    /* STRUCT(MODE246,MODE208)  */
struct A68t257{
struct A68t246  Unit;
struct A68t223  Range;
};
typedef struct A68t257  A68_257 ;    /* STRUCT(MODE246,MODE223)  */
struct A68t258{
struct A68t246  Unit;
struct A68t246  Index;
};
typedef struct A68t258  A68_258 ;    /* STRUCT(MODE246,MODE246)  */
struct A68t259{
struct A68t246  Unit;
struct A68t246  Index;
struct A68t246  From;
};
typedef struct A68t259  A68_259 ;    /* STRUCT(MODE246,MODE246,MODE246)  */
struct A68t260{
struct A68t208  Size;
struct A68t246  Elem;
};
typedef struct A68t260  A68_260 ;    /* STRUCT(MODE208,MODE246)  */
struct A68t261{
struct A68t246  Elem;
struct A68t261 * Rest;
};
typedef struct A68t261  A68_261 ;    /* STRUCT(MODE246,REF MODE261)  */
struct A68t262{
A68_BOOL  String;
A_PAD_BOOL(PAD_96)
A68_INT  Sort;
A_PAD_INT(PAD_97)
struct A68t246  Left;
struct A68t246  Right;
};
typedef struct A68t262  A68_262 ;    /* STRUCT(BOOL,INT,MODE246,MODE246)  */
A_VECTOR(struct A68t289 ,A68t288);
typedef struct A68t288  A68_288 ;    /* VECTOR [] MODE289 */
struct A68t291{
struct A68t246  Tag;
};
typedef struct A68t291  A68_291 ;    /* STRUCT(MODE246)  */
struct A68t286{
A68_INT  Fnno;
A_PAD_INT(PAD_98)
struct A68t288  Macparams;
struct A68t199  Attr;
};
typedef struct A68t286  A68_286 ;    /* STRUCT(INT,REF MODE288,MODE199)  */
struct A68t290 { A68_INT mode; union {
struct A68t207  mode1;
struct A68t219  mode2;
struct A68t233  mode3;
struct A68t291  mode4;
struct A68t286  mode5;
} data; };
typedef struct A68t290  A68_290 ;    /* UNION(MODE207,MODE219,MODE233,MODE291,MODE286)  */
struct A68t289{
A68_INT  Sort;
A_PAD_INT(PAD_99)
struct A68t290  Param;
};
typedef struct A68t289  A68_289 ;    /* STRUCT(INT,MODE290)  */
struct A68t263{
struct A68t286  Inst;
struct A68t246  Right;
};
typedef struct A68t263  A68_263 ;    /* STRUCT(MODE286,MODE246)  */
struct A68t264{
struct A68t246  Left;
struct A68t286  Inst;
struct A68t246  Right;
};
typedef struct A68t264  A68_264 ;    /* STRUCT(MODE246,MODE286,MODE246)  */
struct A68t265{
struct A68t246  Input;
struct A68t306 * Choices;
};
typedef struct A68t265  A68_265 ;    /* STRUCT(MODE246,REF MODE306)  */
struct A68t266{
struct A68t208  Cond;
struct A68t246  True;
struct A68t246  False;
};
typedef struct A68t266  A68_266 ;    /* STRUCT(MODE208,MODE246,MODE246)  */
struct A68t267{
struct A68t208  Repl;
struct A68t246  Body;
};
typedef struct A68t267  A68_267 ;    /* STRUCT(MODE208,MODE246)  */
struct A68t268{
struct A68t294 * Body;
struct A68t246  Output;
};
typedef struct A68t268  A68_268 ;    /* STRUCT(REF MODE294,MODE246)  */
struct A68t269{
struct A68t275 * Body;
struct A68t246  Output;
};
typedef struct A68t269  A68_269 ;    /* STRUCT(REF MODE275,MODE246)  */
struct A68t270{
struct A68t246  Unit;
struct A68t199  Attr;
};
typedef struct A68t270  A68_270 ;    /* STRUCT(MODE246,MODE199)  */
struct A68t271{
struct A68t246  Unit;
struct A68t210  Check;
};
typedef struct A68t271  A68_271 ;    /* STRUCT(MODE246,MODE210)  */
struct A68t272{
struct A68t246  Unit;
};
typedef struct A68t272  A68_272 ;    /* STRUCT(MODE246)  */
struct A68t273{
struct A68t208  Size;
struct A68t246  Char;
};
typedef struct A68t273  A68_273 ;    /* STRUCT(MODE208,MODE246)  */
struct A68t274{
A68_INT  Unull;
A_PAD_INT(PAD_100)
};
typedef struct A68t274  A68_274 ;    /* STRUCT(INT)  */
struct A68t277{
A68_INT  Fnno;
A_PAD_INT(PAD_101)
};
typedef struct A68t277  A68_277 ;    /* STRUCT(INT)  */
struct A68t276 { A68_INT mode; union {
struct A68t200  mode1;
struct A68t212  mode2;
struct A68t225  mode3;
struct A68t240  mode4;
struct A68t277  mode5;
struct A68t278 * mode6;
struct A68t279 * mode7;
struct A68t280 * mode8;
struct A68t281 * mode9;
struct A68t282 * mode10;
struct A68t283 * mode11;
struct A68t284 * mode12;
} data; };
typedef struct A68t276  A68_276 ;    /* UNION(MODE200,MODE212,MODE225,MODE240,MODE277,REF MODE278,REF MODE279,REF MODE280,REF MODE281,REF MODE282,REF MODE283,REF MODE284)  */
struct A68t275{
struct A68t276  Step;
struct A68t275 * Rest;
};
typedef struct A68t275  A68_275 ;    /* STRUCT(MODE276,REF MODE275)  */
struct A68t278{
struct A68t208  Cond;
struct A68t292 * Print;
};
typedef struct A68t278  A68_278 ;    /* STRUCT(MODE208,REF MODE292)  */
struct A68t279{
struct A68t208  Cond;
struct A68t292 * Fault;
};
typedef struct A68t279  A68_279 ;    /* STRUCT(MODE208,REF MODE292)  */
struct A68t280{
struct A68t287 * Letnames;
struct A68t246  Unit;
};
typedef struct A68t280  A68_280 ;    /* STRUCT(REF MODE287,MODE246)  */
struct A68t281{
struct A68t220 * Sizes;
struct A68t286  Inst;
struct A68t287 * Makenames;
};
typedef struct A68t281  A68_281 ;    /* STRUCT(REF MODE220,MODE286,REF MODE287)  */
struct A68t282{
struct A68t246  From;
struct A68t246  To;
};
typedef struct A68t282  A68_282 ;    /* STRUCT(MODE246,MODE246)  */
struct A68t283{
struct A68t220 * Repls;
struct A68t285 * Joins;
};
typedef struct A68t283  A68_283 ;    /* STRUCT(REF MODE220,REF MODE285)  */
struct A68t284{
A68_INT  Stepnull;
A_PAD_INT(PAD_102)
};
typedef struct A68t284  A68_284 ;    /* STRUCT(INT)  */
struct A68t285{
struct A68t282  Join;
struct A68t285 * Rest;
};
typedef struct A68t285  A68_285 ;    /* STRUCT(MODE282,REF MODE285)  */
struct A68t287{
A68_INT  Nameno;
A_PAD_INT(PAD_103)
struct A68t287 * Rest;
};
typedef struct A68t287  A68_287 ;    /* STRUCT(INT,REF MODE287)  */
struct A68t293 { A68_INT mode; union {
A68_VC  mode1;
struct A68t219 * mode2;
} data; };
typedef struct A68t293  A68_293 ;    /* UNION(REF MODE26,REF MODE219)  */
struct A68t292{
struct A68t293  Item;
struct A68t292 * Rest;
};
typedef struct A68t292  A68_292 ;    /* STRUCT(MODE293,REF MODE292)  */
struct A68t295 { A68_INT mode; union {
struct A68t200  mode1;
struct A68t212  mode2;
struct A68t225  mode3;
struct A68t240  mode4;
struct A68t277  mode5;
struct A68t278 * mode6;
struct A68t279 * mode7;
struct A68t296 * mode8;
struct A68t297 * mode9;
struct A68t298 * mode10;
struct A68t299 * mode11;
struct A68t300 * mode12;
struct A68t301 * mode13;
struct A68t302 * mode14;
struct A68t303 * mode15;
struct A68t294 * mode16;
struct A68t304 * mode17;
} data; };
typedef struct A68t295  A68_295 ;    /* UNION(MODE200,MODE212,MODE225,MODE240,MODE277,REF MODE278,REF MODE279,REF MODE296,REF MODE297,REF MODE298,REF MODE299,REF MODE300,REF MODE301,REF MODE302,REF MODE303,REF MODE294,REF MODE304)  */
struct A68t294{
struct A68t295  Step;
struct A68t294 * Rest;
};
typedef struct A68t294  A68_294 ;    /* STRUCT(MODE295,REF MODE294)  */
struct A68t296{
struct A68t280  Seqlet;
};
typedef struct A68t296  A68_296 ;    /* STRUCT(MODE280)  */
struct A68t297{
struct A68t280  Seqvar;
};
typedef struct A68t297  A68_297 ;    /* STRUCT(MODE280)  */
struct A68t298{
struct A68t287 * Pvarnames;
struct A68t246  Init;
};
typedef struct A68t298  A68_298 ;    /* STRUCT(REF MODE287,MODE246)  */
struct A68t299{
struct A68t246  To;
struct A68t246  From;
};
typedef struct A68t299  A68_299 ;    /* STRUCT(MODE246,MODE246)  */
struct A68t300{
struct A68t246  Input;
struct A68t305 * Choices;
};
typedef struct A68t300  A68_300 ;    /* STRUCT(MODE246,REF MODE305)  */
struct A68t301{
struct A68t208  Cond;
struct A68t295  True;
struct A68t295  False;
};
typedef struct A68t301  A68_301 ;    /* STRUCT(MODE208,MODE295,MODE295)  */
struct A68t302{
struct A68t208  Repl;
struct A68t295  Body;
};
typedef struct A68t302  A68_302 ;    /* STRUCT(MODE208,MODE295)  */
struct A68t303{
A68_INT  Seqnull;
A_PAD_INT(PAD_104)
};
typedef struct A68t303  A68_303 ;    /* STRUCT(INT)  */
struct A68t304{
struct A68t208  Size;
struct A68t295  Elem;
};
typedef struct A68t304  A68_304 ;    /* STRUCT(MODE208,MODE295)  */
struct A68t305{
A68_BOOL  Check;
A_PAD_BOOL(PAD_105)
A68_INT  Sort;
A_PAD_INT(PAD_106)
struct A68t246  Test;
struct A68t295  Output;
struct A68t305 * Rest;
};
typedef struct A68t305  A68_305 ;    /* STRUCT(BOOL,INT,MODE246,MODE295,REF MODE305)  */
struct A68t306{
A68_BOOL  Check;
A_PAD_BOOL(PAD_107)
A68_INT  Sort;
A_PAD_INT(PAD_108)
struct A68t246  Test;
struct A68t246  Output;
struct A68t306 * Rest;
};
typedef struct A68t306  A68_306 ;    /* STRUCT(BOOL,INT,MODE246,MODE246,REF MODE306)  */
struct A68t307 { A68_INT mode; union {
struct A68t200  mode1;
struct A68t212  mode2;
struct A68t225  mode3;
struct A68t240  mode4;
struct A68t277  mode5;
} data; };
typedef struct A68t307  A68_307 ;    /* UNION(MODE200,MODE212,MODE225,MODE240,MODE277)  */
struct A68t308{
A68_BOOL  Biop;
A_PAD_BOOL(PAD_109)
A68_VC  Name;
struct A68t288  Macparams;
};
typedef struct A68t308  A68_308 ;    /* STRUCT(BOOL,REF MODE26,REF MODE288)  */
struct A68t309{
struct A68t208  Output;
};
typedef struct A68t309  A68_309 ;    /* STRUCT(MODE208)  */
struct A68t310{
A68_INT  Reform;
A_PAD_INT(PAD_110)
};
typedef struct A68t310  A68_310 ;    /* STRUCT(INT)  */
struct A68t311{
A68_VC  Name;
A68_INT  Contextno;
A_PAD_INT(PAD_111)
struct A68t167  Ctname;
};
typedef struct A68t311  A68_311 ;    /* STRUCT(REF MODE26,INT,MODE167)  */
struct A68t312{
A68_INT  Sort;
A_PAD_INT(PAD_112)
struct A68t246  Init;
struct A68t208  Ambigtime;
struct A68t246  Ambig;
struct A68t208  Delaytime;
};
typedef struct A68t312  A68_312 ;    /* STRUCT(INT,MODE246,MODE208,MODE246,MODE208)  */
struct A68t313{
struct A68t246  Init;
struct A68t208  Delaytime;
};
typedef struct A68t313  A68_313 ;    /* STRUCT(MODE246,MODE208)  */
struct A68t314{
struct A68t246  Init;
};
typedef struct A68t314  A68_314 ;    /* STRUCT(MODE246)  */
struct A68t315{
A68_INT  Sort;
A_PAD_INT(PAD_113)
struct A68t208  Interval;
struct A68t246  Init;
struct A68t208  Skew;
};
typedef struct A68t315  A68_315 ;    /* STRUCT(INT,MODE208,MODE246,MODE208)  */
struct A68t316{
A68_BOOL  Faster;
A_PAD_BOOL(PAD_114)
A68_INT  Sort;
A_PAD_INT(PAD_115)
struct A68t286  Inst;
struct A68t208  Scale;
struct A68t246  Init;
struct A68t208  Skew;
};
typedef struct A68t316  A68_316 ;    /* STRUCT(BOOL,INT,MODE286,MODE208,MODE246,MODE208)  */
struct A68t318 { A68_INT mode; union {
struct A68t291 * mode1;
struct A68t308 * mode2;
struct A68t309 * mode3;
struct A68t310 * mode4;
struct A68t311 * mode5;
struct A68t312 * mode6;
struct A68t313 * mode7;
struct A68t314 * mode8;
struct A68t315 * mode9;
struct A68t316 * mode10;
struct A68t317 * mode11;
struct A68t319 * mode12;
} data; };
typedef struct A68t318  A68_318 ;    /* UNION(REF MODE291,REF MODE308,REF MODE309,REF MODE310,REF MODE311,REF MODE312,REF MODE313,REF MODE314,REF MODE315,REF MODE316,REF MODE317,REF MODE319)  */
struct A68t317{
struct A68t198 * Joincheck;
A68_BOOL  Check;
A_PAD_BOOL(PAD_116)
struct A68t318  Fnbody;
};
typedef struct A68t317  A68_317 ;    /* STRUCT(REF MODE198,BOOL,MODE318)  */
struct A68t319{
A68_INT  Bodynull;
A_PAD_INT(PAD_117)
};
typedef struct A68t319  A68_319 ;    /* STRUCT(INT)  */
struct A68t320{
A68_INT  Sort;
A_PAD_INT(PAD_118)
struct A68t307  Spec;
};
typedef struct A68t320  A68_320 ;    /* STRUCT(INT,MODE307)  */
struct A68t321{
A68_VC  Name;
struct A68t224  Type;
struct A68t199  Attr;
};
typedef struct A68t321  A68_321 ;    /* STRUCT(REF MODE26,MODE224,MODE199)  */
A_VECTOR(struct A68t320 ,A68t323);
typedef struct A68t323  A68_323 ;    /* VECTOR [] MODE320 */
A_VECTOR(struct A68t321 ,A68t324);
typedef struct A68t324  A68_324 ;    /* VECTOR [] MODE321 */
struct A68t322{
A68_INT  Sort;
A_PAD_INT(PAD_119)
A68_BOOL  Macro;
A_PAD_BOOL(PAD_120)
A68_VC  Fnname;
struct A68t323  Macspecs;
struct A68t199  Attr;
struct A68t287 * Inputs;
struct A68t287 * Outputs;
struct A68t324  Nametypes;
struct A68t318  Fnbody;
struct A68t206 * Usage;
};
typedef struct A68t322  A68_322 ;    /* STRUCT(INT,BOOL,REF MODE26,REF MODE323,MODE199,REF MODE287,REF MODE287,REF MODE324,MODE318,REF MODE206)  */
A_VECTOR(struct A68t205 *,A68t326);
typedef struct A68t326  A68_326 ;    /* VECTOR [] REF MODE205 */
A_VECTOR(struct A68t221 *,A68t327);
typedef struct A68t327  A68_327 ;    /* VECTOR [] REF MODE221 */
A_VECTOR(struct A68t239 *,A68t328);
typedef struct A68t328  A68_328 ;    /* VECTOR [] REF MODE239 */
A_VECTOR(struct A68t245 *,A68t329);
typedef struct A68t329  A68_329 ;    /* VECTOR [] REF MODE245 */
A_VECTOR(struct A68t322 *,A68t330);
typedef struct A68t330  A68_330 ;    /* VECTOR [] REF MODE322 */
struct A68t325{
struct A68t326  Attrs;
struct A68t327  Ints;
struct A68t328  Types;
struct A68t329  Consts;
struct A68t330  Fns;
};
typedef struct A68t325  A68_325 ;    /* STRUCT(REF MODE326,REF MODE327,REF MODE328,REF MODE329,REF MODE330)  */
struct A68t331{
A68_INT  Closureno;
A_PAD_INT(PAD_121)
A68_INT  Sort;
A_PAD_INT(PAD_122)
struct A68t325 * Environ;
};
typedef struct A68t331  A68_331 ;    /* STRUCT(INT,INT,REF MODE325)  */
struct A68t332{
struct A68t331  Outer;
struct A68t332 * Rest;
};
typedef struct A68t332  A68_332 ;    /* STRUCT(MODE331,REF MODE332)  */
A_VECTOR(struct A68t332 ,A68t334);
typedef struct A68t334  A68_334 ;    /* VECTOR [] MODE332 */
struct A68t333{
struct A68t334  Outers;
struct A68t333 * Rest;
};
typedef struct A68t333  A68_333 ;    /* STRUCT(REF MODE334,REF MODE333)  */
struct A68t335{
A68_INT  Max_closureno;
A_PAD_INT(PAD_123)
struct A68t332 * Outers;
struct A68t332 * Freelist;
struct A68t333 * Outerslist;
};
typedef struct A68t335  A68_335 ;    /* STRUCT(INT,REF MODE332,REF MODE332,REF MODE333)  */
A_VECTOR(struct A68t332 *,A68t336);
typedef struct A68t336  A68_336 ;    /* VECTOR [] REF MODE332 */

A_PROCEDURE(struct A68t211 *,A68t337,(A68_INT ),(A68_INT ,void *));
typedef struct A68t337  A68_337 ;    /* PROC(INT) REF MODE211 */

A_PROCEDURE(struct A68t212 *,A68t338,(A68_INT ),(A68_INT ,void *));
typedef struct A68t338  A68_338 ;    /* PROC(INT) REF MODE212 */

A_PROCEDURE(struct A68t216 *,A68t339,(struct A68t208 ),(struct A68t208 ,void *));
typedef struct A68t339  A68_339 ;    /* PROC(MODE208) REF MODE216 */

A_PROCEDURE(struct A68t219 *,A68t340,(struct A68t208 ),(struct A68t208 ,void *));
typedef struct A68t340  A68_340 ;    /* PROC(MODE208) REF MODE219 */

A_PROCEDURE(struct A68t225 *,A68t341,(A68_INT ),(A68_INT ,void *));
typedef struct A68t341  A68_341 ;    /* PROC(INT) REF MODE225 */

A_PROCEDURE(struct A68t229 *,A68t342,(struct A68t224 ),(struct A68t224 ,void *));
typedef struct A68t342  A68_342 ;    /* PROC(MODE224) REF MODE229 */

A_PROCEDURE(struct A68t233 *,A68t343,(struct A68t224 ),(struct A68t224 ,void *));
typedef struct A68t343  A68_343 ;    /* PROC(MODE224) REF MODE233 */

A_PROCEDURE(struct A68t240 *,A68t344,(A68_INT ),(A68_INT ,void *));
typedef struct A68t344  A68_344 ;    /* PROC(INT) REF MODE240 */

A_PROCEDURE(struct A68t244 *,A68t345,(struct A68t224 ),(struct A68t224 ,void *));
typedef struct A68t345  A68_345 ;    /* PROC(MODE224) REF MODE244 */

A_PROCEDURE(struct A68t296 *,A68t346,(struct A68t280 ),(struct A68t280 ,void *));
typedef struct A68t346  A68_346 ;    /* PROC(MODE280) REF MODE296 */

A_PROCEDURE(struct A68t297 *,A68t347,(struct A68t280 ),(struct A68t280 ,void *));
typedef struct A68t347  A68_347 ;    /* PROC(MODE280) REF MODE297 */

A_PROCEDURE(struct A68t272 *,A68t348,(struct A68t246 ),(struct A68t246 ,void *));
typedef struct A68t348  A68_348 ;    /* PROC(MODE246) REF MODE272 */

A_PROCEDURE(struct A68t291 *,A68t349,(struct A68t246 ),(struct A68t246 ,void *));
typedef struct A68t349  A68_349 ;    /* PROC(MODE246) REF MODE291 */

A_PROCEDURE(struct A68t277 *,A68t350,(A68_INT ),(A68_INT ,void *));
typedef struct A68t350  A68_350 ;    /* PROC(INT) REF MODE277 */

A_PROCEDURE(struct A68t309 *,A68t351,(struct A68t208 ),(struct A68t208 ,void *));
typedef struct A68t351  A68_351 ;    /* PROC(MODE208) REF MODE309 */

A_PROCEDURE(struct A68t314 *,A68t352,(struct A68t246 ),(struct A68t246 ,void *));
typedef struct A68t352  A68_352 ;    /* PROC(MODE246) REF MODE314 */

A_PROCEDURE(struct A68t217 *,A68t353,(A68_INT ),(A68_INT ,void *));
typedef struct A68t353  A68_353 ;    /* PROC(INT) REF MODE217 */

A_PROCEDURE(struct A68t200 *,A68t354,(A68_INT ),(A68_INT ,void *));
typedef struct A68t354  A68_354 ;    /* PROC(INT) REF MODE200 */

A_PROCEDURE(struct A68t207 *,A68t355,(struct A68t199 ),(struct A68t199 ,void *));
typedef struct A68t355  A68_355 ;    /* PROC(MODE199) REF MODE207 */

A_PROCEDURE(struct A68t203 *,A68t356,(struct A68t199 ),(struct A68t199 ,void *));
typedef struct A68t356  A68_356 ;    /* PROC(MODE199) REF MODE203 */
A_VECTOR(struct A68t197 *,A68t357);
typedef struct A68t357  A68_357 ;    /* VECTOR [] REF MODE197 */
A_VECTOR(struct A68t360 ,A68t359);
typedef struct A68t359  A68_359 ;    /* VECTOR [] MODE360 */
struct A68t358{
A68_BITS  Type;
A_PAD_BITS(PAD_124)
struct A68t359  Elements;
};
typedef struct A68t358  A68_358 ;    /* STRUCT(BITS,REF MODE359)  */
struct A68t360 { A68_INT mode; union {
A68_INT * mode1;
struct A68t358  mode2;
} data; };
typedef struct A68t360  A68_360 ;    /* UNION(REF INT,MODE358)  */
struct A68t361{
A68_INT  Sort;
A_PAD_INT(PAD_125)
A68_VC  Value;
};
typedef struct A68t361  A68_361 ;    /* STRUCT(INT,REF MODE26)  */
A_VECTOR(struct A68t361 ,A68t362);
typedef struct A68t362  A68_362 ;    /* VECTOR [] MODE361 */
A_VECTOR(struct A68t363 ,A68t365);
typedef struct A68t365  A68_365 ;    /* VECTOR [] MODE363 */
struct A68t364{
A68_INT  Choice;
A_PAD_INT(PAD_126)
struct A68t365  Params;
};
typedef struct A68t364  A68_364 ;    /* STRUCT(INT,REF MODE365)  */
struct A68t363 { A68_INT mode; union {
struct A68t364  mode1;
struct A68t361  mode2;
} data; };
typedef struct A68t363  A68_363 ;    /* UNION(MODE364,MODE361)  */

A_PROCEDURE(A68_VOID ,A68t367,(struct A68t97 ,A68_VC *),(struct A68t97 ,A68_VC *,void *));
typedef struct A68t367  A68_367 ;    /* PROC(MODE97) REF MODE26 */
struct A68t366 { A68_INT mode; union {
struct A68t367  mode1;
A68_INT * mode2;
struct A68t358  mode3;
} data; };
typedef struct A68t366  A68_366 ;    /* UNION(MODE367,REF INT,MODE358)  */
struct A68t368{
A68_INT * Sort;
struct A68t366  Reader;
A68_VC  Description;
A68_VC  Help;
};
typedef struct A68t368  A68_368 ;    /* STRUCT(REF INT,MODE366,REF MODE26,REF MODE26)  */
struct A68t369{
struct A68t368  Rule;
struct A68t369 * Rest;
};
typedef struct A68t369  A68_369 ;    /* STRUCT(MODE368,REF MODE369)  */

A_PROCEDURE(A68_BOOL ,A68t370,(struct A68t358 ),(struct A68t358 ,void *));
typedef struct A68t370  A68_370 ;    /* PROC(MODE358) BOOL */

A_PROCEDURE(A68_VOID ,A68t371,(struct A68t359 ,struct A68t358 *),(struct A68t359 ,struct A68t358 *,void *));
typedef struct A68t371  A68_371 ;    /* PROC(MODE359) MODE358 */

A_PROCEDURE(A68_VOID ,A68t372,(struct A68t360 ,struct A68t358 *),(struct A68t360 ,struct A68t358 *,void *));
typedef struct A68t372  A68_372 ;    /* PROC(MODE360) MODE358 */
struct A68t374 ;

A_PROCEDURE(A68_VOID ,A68t373,(struct A68t360 ,struct A68t374 ,A68_VC *),(struct A68t360 ,struct A68t374 ,A68_VC *,void *));
typedef struct A68t373  A68_373 ;    /* PROC(MODE360,REF MODE374) REF MODE26 */
A_VECTOR(struct A68t368 ,A68t374);
typedef struct A68t374  A68_374 ;    /* VECTOR [] MODE368 */

A_PROCEDURE(A68_VOID ,A68t375,(struct A68t34 *,struct A68t374 ),(struct A68t34 *,struct A68t374 ,void *));
typedef struct A68t375  A68_375 ;    /* PROC(REF MODE34,REF MODE374) VOID */
struct A68t377 ;

A_PROCEDURE(struct A68t369 *,A68t376,(struct A68t369 *,struct A68t377 ),(struct A68t369 *,struct A68t377 ,void *));
typedef struct A68t376  A68_376 ;    /* PROC(REF MODE369,MODE377) REF MODE369 */
A_VECTOR(struct A68t378 ,A68t377);
typedef struct A68t377  A68_377 ;    /* VECTOR [] MODE378 */
struct A68t378{
A68_INT * No;
struct A68t366  New;
A68_VC  Name;
A68_VC  Help;
};
typedef struct A68t378  A68_378 ;    /* STRUCT(REF INT,MODE366,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t379,(struct A68t363 ,struct A68t362 *),(struct A68t363 ,struct A68t362 *,void *));
typedef struct A68t379  A68_379 ;    /* PROC(MODE363) REF MODE362 */

A_PROCEDURE(A68_BOOL ,A68t380,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t380  A68_380 ;    /* PROC(CHAR,MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t381,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t381  A68_381 ;    /* PROC(CHAR) BOOL */

A_PROCEDURE(A68_CHAR ,A68t382,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t382  A68_382 ;    /* PROC(CHAR) CHAR */

A_PROCEDURE(struct A68t182 *,A68t383,(A68_VC ,struct A68t184 ),(A68_VC ,struct A68t184 ,void *));
typedef struct A68t383  A68_383 ;    /* PROC(REF MODE26,MODE184) REF MODE182 */

A_PROCEDURE(A68_VOID ,A68t384,(struct A68t182 ),(struct A68t182 ,void *));
typedef struct A68t384  A68_384 ;    /* PROC(MODE182) VOID */

A_PROCEDURE(A68_VOID ,A68t385,(struct A68t102 *),(struct A68t102 *,void *));
typedef struct A68t385  A68_385 ;    /* PROC REF MODE102 */

A_PROCEDURE(A68_BOOL ,A68t386,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t386  A68_386 ;    /* PROC(MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t387,(struct A68t374 ,struct A68t360 ,struct A68t97 ,struct A68t363 *),(struct A68t374 ,struct A68t360 ,struct A68t97 ,struct A68t363 *,void *));
typedef struct A68t387  A68_387 ;    /* PROC(REF MODE374,MODE360,MODE97) MODE363 */

A_PROCEDURE(A68_CHAR ,A68t388,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t388  A68_388 ;    /* PROC(MODE97) CHAR */

A_PROCEDURE(A68_VOID ,A68t389,(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t389  A68_389 ;    /* PROC(REF MODE26,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t390,(struct A68t361 ,A68_INT ,struct A68t97 ),(struct A68t361 ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t390  A68_390 ;    /* PROC(MODE361,INT,MODE97) VOID */
struct A68t391{
A68_BOOL  Get_first;
A_PAD_BOOL(PAD_127)
A68_BOOL  Check;
A_PAD_BOOL(PAD_128)
};
typedef struct A68t391  A68_391 ;    /* STRUCT(BOOL,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t392,(struct A68t391 ,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t391 ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t392  A68_392 ;    /* PROC(MODE391,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t393,(A68_CHAR ,struct A68t97 ,A68_VC *),(A68_CHAR ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t393  A68_393 ;    /* PROC(CHAR,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t394,(struct A68t361 ),(struct A68t361 ,void *));
typedef struct A68t394  A68_394 ;    /* PROC(MODE361) BOOL */

A_PROCEDURE(A68_VOID ,A68t395,(struct A68t361 ,struct A68t97 ,A68_VC *),(struct A68t361 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t395  A68_395 ;    /* PROC(MODE361,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t396,(struct A68t102 ),(struct A68t102 ,void *));
typedef struct A68t396  A68_396 ;    /* PROC(REF MODE102) VOID */
struct A68t398 ;

A_PROCEDURE(A68_VOID ,A68t397,(struct A68t398 ),(struct A68t398 ,void *));
typedef struct A68t397  A68_397 ;    /* PROC(MODE398) VOID */
struct A68t398 { A68_INT mode; union {
struct A68t97  mode1;
} data; };
typedef struct A68t398  A68_398 ;    /* UNION(MODE97,VOID)  */
struct A68t400 ;
struct A68t401 ;
struct A68t402 ;

A_PROCEDURE(A68_VOID ,A68t399,(struct A68t401 *,struct A68t402 *,struct A68t363 ,struct A68t97 ,struct A68t400 *),(struct A68t401 *,struct A68t402 *,struct A68t363 ,struct A68t97 ,struct A68t400 *,void *));
typedef struct A68t399  A68_399 ;    /* PROC(REF MODE401,REF MODE402,MODE363,MODE97) MODE400 */
struct A68t400{
A68_INT  C;
A_PAD_INT(PAD_129)
};
typedef struct A68t400  A68_400 ;    /* STRUCT(INT)  */
struct A68t401{
struct A68t411 * Stack;
struct A68t374  Analysers;
A68_BOOL  Hidden;
A_PAD_BOOL(PAD_130)
A68_BOOL  Private;
A_PAD_BOOL(PAD_131)
A68_BOOL  Secret;
A_PAD_BOOL(PAD_132)
struct A68t399  Caller;
struct A68t396  Report_error;
struct A68t397  Set_default_msg;
struct A68t97  Abort;
};
typedef struct A68t401  A68_401 ;    /* STRUCT(REF MODE411,REF MODE374,BOOL,BOOL,BOOL,MODE399,MODE396,MODE397,MODE97)  */
struct A68t403{
A68_BITS  A;
A_PAD_BITS(PAD_133)
};
typedef struct A68t403  A68_403 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t410,(struct A68t402 *,struct A68t34 *),(struct A68t402 *,struct A68t34 *,void *));
typedef struct A68t410  A68_410 ;    /* PROC(REF MODE402,REF MODE34) VOID */
struct A68t404 { A68_INT mode; union {
A68_VC  mode1;
struct A68t102  mode2;
struct A68t410  mode3;
} data; };
typedef struct A68t404  A68_404 ;    /* UNION(REF MODE26,REF MODE102,MODE410)  */

A_PROCEDURE(A68_VOID ,A68t409,(A68_VC ,struct A68t363 ,struct A68t97 ),(A68_VC ,struct A68t363 ,struct A68t97 ,void *));
typedef struct A68t409  A68_409 ;    /* PROC(REF MODE26,MODE363,MODE97) VOID */
struct A68t406{
A68_VC  Parameter;
struct A68t409  Proc;
};
typedef struct A68t406  A68_406 ;    /* STRUCT(REF MODE26,MODE409)  */

A_PROCEDURE(A68_VOID ,A68t407,(struct A68t363 ,struct A68t97 ),(struct A68t363 ,struct A68t97 ,void *));
typedef struct A68t407  A68_407 ;    /* PROC(MODE363,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t408,(struct A68t362 ,struct A68t97 ),(struct A68t362 ,struct A68t97 ,void *));
typedef struct A68t408  A68_408 ;    /* PROC(REF MODE362,MODE97) VOID */
struct A68t405 { A68_INT mode; union {
struct A68t406  mode1;
struct A68t407  mode2;
struct A68t408  mode3;
} data; };
typedef struct A68t405  A68_405 ;    /* UNION(MODE406,MODE407,MODE408)  */
struct A68t402{
A68_VC  Name;
A68_VC  Abreviation;
struct A68t360  Parameter;
struct A68t403  Access;
struct A68t400  Continuation;
struct A68t404  Help;
struct A68t405  Command;
};
typedef struct A68t402  A68_402 ;    /* STRUCT(REF MODE26,REF MODE26,MODE360,MODE403,MODE400,MODE404,MODE405)  */
struct A68t411{
struct A68t412 * Current_context;
A68_INT  Depth;
A_PAD_INT(PAD_134)
struct A68t102  Input_lines;
struct A68t411 * Caller;
};
typedef struct A68t411  A68_411 ;    /* STRUCT(REF MODE412,INT,REF MODE102,REF MODE411)  */
A_VECTOR(struct A68t414 ,A68t413);
typedef struct A68t413  A68_413 ;    /* VECTOR [] MODE414 */
struct A68t414 { A68_INT mode; union {
struct A68t402 * mode1;
struct A68t415 * mode2;
struct A68t412 * mode3;
} data; };
typedef struct A68t414  A68_414 ;    /* UNION(REF MODE402,REF MODE415,REF MODE412)  */
struct A68t412{
struct A68t402 * Prelude;
A68_VC  Context;
A68_VC * Prompt;
struct A68t413  Locals;
struct A68t413  Globals;
struct A68t402 * Postlude;
};
typedef struct A68t412  A68_412 ;    /* STRUCT(REF MODE402,REF MODE26,REF REF MODE26,REF MODE413,REF MODE413,REF MODE402)  */
struct A68t415{
struct A68t402 * Group;
struct A68t413  Commands;
};
typedef struct A68t415  A68_415 ;    /* STRUCT(REF MODE402,REF MODE413)  */

A_PROCEDURE(A68_VOID ,A68t416,(struct A68t413 ,struct A68t413 ),(struct A68t413 ,struct A68t413 ,void *));
typedef struct A68t416  A68_416 ;    /* PROC(REF MODE413,REF MODE413) VOID */

A_PROCEDURE(A68_INT ,A68t417,(A68_VC ,A68_VC ,struct A68t413 ),(A68_VC ,A68_VC ,struct A68t413 ,void *));
typedef struct A68t417  A68_417 ;    /* PROC(MODE26,MODE26,REF MODE413) INT */

A_PROCEDURE(struct A68t402 *,A68t418,(A68_VC ,A68_VC ,A68_VC ),(A68_VC ,A68_VC ,A68_VC ,void *));
typedef struct A68t418  A68_418 ;    /* PROC(MODE26,MODE26,MODE26) REF MODE402 */
struct A68t420 ;

A_PROCEDURE(A68_VOID ,A68t419,(A68_VC ,A68_VC ,struct A68t152 ,struct A68t420 ,struct A68t413 *),(A68_VC ,A68_VC ,struct A68t152 ,struct A68t420 ,struct A68t413 *,void *));
typedef struct A68t419  A68_419 ;    /* PROC(MODE26,MODE26,MODE152,MODE420) REF MODE413 */

A_PROCEDURE(struct A68t401 **,A68t420,(void),(void *));
typedef struct A68t420  A68_420 ;    /* PROC REF REF MODE401 */

A_PROCEDURE(A68_BOOL ,A68t421,(struct A68t400 ,struct A68t400 ),(struct A68t400 ,struct A68t400 ,void *));
typedef struct A68t421  A68_421 ;    /* PROC(MODE400,MODE400) BOOL */

A_PROCEDURE(A68_VOID ,A68t422,(struct A68t413 ,struct A68t413 ,struct A68t413 *),(struct A68t413 ,struct A68t413 ,struct A68t413 *,void *));
typedef struct A68t422  A68_422 ;    /* PROC(MODE413,MODE413) REF MODE413 */

A_PROCEDURE(A68_VOID ,A68t423,(struct A68t413 ,struct A68t414 ,struct A68t413 *),(struct A68t413 ,struct A68t414 ,struct A68t413 *,void *));
typedef struct A68t423  A68_423 ;    /* PROC(MODE413,MODE414) REF MODE413 */

A_PROCEDURE(A68_VOID ,A68t424,(struct A68t413 *,struct A68t413 ,struct A68t413 *),(struct A68t413 *,struct A68t413 ,struct A68t413 *,void *));
typedef struct A68t424  A68_424 ;    /* PROC(REF REF MODE413,MODE413) REF MODE413 */

A_PROCEDURE(A68_VOID ,A68t425,(struct A68t413 *,struct A68t414 ,struct A68t413 *),(struct A68t413 *,struct A68t414 ,struct A68t413 *,void *));
typedef struct A68t425  A68_425 ;    /* PROC(REF REF MODE413,MODE414) REF MODE413 */

A_PROCEDURE(A68_VOID ,A68t426,(struct A68t413 ,struct A68t413 *),(struct A68t413 ,struct A68t413 *,void *));
typedef struct A68t426  A68_426 ;    /* PROC(MODE413) REF MODE413 */

A_PROCEDURE(A68_VOID ,A68t427,(struct A68t414 ,struct A68t413 *),(struct A68t414 ,struct A68t413 *,void *));
typedef struct A68t427  A68_427 ;    /* PROC(MODE414) REF MODE413 */

A_PROCEDURE(struct A68t415 *,A68t428,(A68_VC ,A68_VC ,struct A68t403 ,struct A68t413 ),(A68_VC ,A68_VC ,struct A68t403 ,struct A68t413 ,void *));
typedef struct A68t428  A68_428 ;    /* PROC(MODE26,MODE26,MODE403,MODE413) REF MODE415 */

A_PROCEDURE(struct A68t412 *,A68t429,(struct A68t402 *,A68_VC ,A68_VC *,struct A68t413 ,struct A68t413 ,struct A68t405 ),(struct A68t402 *,A68_VC ,A68_VC *,struct A68t413 ,struct A68t413 ,struct A68t405 ,void *));
typedef struct A68t429  A68_429 ;    /* PROC(REF MODE402,MODE26,REF REF MODE26,REF MODE413,REF MODE413,MODE405) REF MODE412 */

A_PROCEDURE(A68_VOID ,A68t430,(struct A68t401 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ),(struct A68t401 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t430  A68_430 ;    /* PROC(REF MODE401,REF MODE34,REF MODE26,BOOL,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t431,(struct A68t401 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ),(struct A68t401 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t431  A68_431 ;    /* PROC(REF MODE401,REF MODE34,BOOL,BOOL,MODE97) VOID */

A_PROCEDURE(struct A68t401 *,A68t432,(struct A68t396 ,struct A68t397 ,struct A68t97 ,struct A68t399 ,struct A68t369 *,struct A68t412 *,struct A68t363 ),(struct A68t396 ,struct A68t397 ,struct A68t97 ,struct A68t399 ,struct A68t369 *,struct A68t412 *,struct A68t363 ,void *));
typedef struct A68t432  A68_432 ;    /* PROC(MODE396,MODE397,MODE97,MODE399,REF MODE369,REF MODE412,MODE363) REF MODE401 */

A_PROCEDURE(A68_VOID ,A68t433,(struct A68t401 *,struct A68t400 *),(struct A68t401 *,struct A68t400 *,void *));
typedef struct A68t433  A68_433 ;    /* PROC(REF MODE401) MODE400 */

A_PROCEDURE(A68_VOID ,A68t434,(A68_INT ,A68_VC ,struct A68t97 ),(A68_INT ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t434  A68_434 ;    /* PROC(INT,MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t435,(A68_VC ,A68_VC ,struct A68t381 ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t381 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t435  A68_435 ;    /* PROC(REF MODE26,MODE26,MODE381,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t436,(A68_VC ),(A68_VC ,void *));
typedef struct A68t436  A68_436 ;    /* PROC(REF MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t437,(A68_INT *,struct A68t97 ),(A68_INT *,struct A68t97 ,void *));
typedef struct A68t437  A68_437 ;    /* PROC(REF INT,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t438,(struct A68t391 ,struct A68t97 ,A68_VC *),(struct A68t391 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t438  A68_438 ;    /* PROC(MODE391,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t439,(A68_BOOL ,struct A68t97 ,A68_VC *),(A68_BOOL ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t439  A68_439 ;    /* PROC(BOOL,MODE97) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t440,(struct A68t361 ,struct A68t97 ),(struct A68t361 ,struct A68t97 ,void *));
typedef struct A68t440  A68_440 ;    /* PROC(MODE361,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t441,(struct A68t361 ,A68_VC ,struct A68t97 ,struct A68t144 *),(struct A68t361 ,A68_VC ,struct A68t97 ,struct A68t144 *,void *));
typedef struct A68t441  A68_441 ;    /* PROC(MODE361,MODE26,MODE97) MODE144 */

A_PROCEDURE(A68_VOID ,A68t442,(struct A68t362 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t167 *),(struct A68t362 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t167 *,void *));
typedef struct A68t442  A68_442 ;    /* PROC(REF MODE362,REF INT,REF MODE26,MODE97) MODE167 */

A_PROCEDURE(A68_VOID ,A68t443,(struct A68t361 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t361 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t443  A68_443 ;    /* PROC(MODE361,REF BOOL,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t444,(struct A68t361 ,struct A68t97 ,struct A68t46 ),(struct A68t361 ,struct A68t97 ,struct A68t46 ,void *));
typedef struct A68t444  A68_444 ;    /* PROC(MODE361,MODE97,MODE46) INT */
struct A68t445{
A68_INT  Lwb;
A_PAD_INT(PAD_135)
A68_INT  Upb;
A_PAD_INT(PAD_136)
};
typedef struct A68t445  A68_445 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t446,(struct A68t361 ,struct A68t445 ,struct A68t97 ,struct A68t445 *),(struct A68t361 ,struct A68t445 ,struct A68t97 ,struct A68t445 *,void *));
typedef struct A68t446  A68_446 ;    /* PROC(MODE361,MODE445,MODE97) MODE445 */

A_PROCEDURE(A68_VOID ,A68t447,(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *),(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t447  A68_447 ;    /* PROC(CHAR,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_CHAR ,A68t448,(struct A68t361 ,struct A68t97 ),(struct A68t361 ,struct A68t97 ,void *));
typedef struct A68t448  A68_448 ;    /* PROC(MODE361,MODE97) CHAR */

A_PROCEDURE(struct A68t369 *,A68t449,(void),(void *));
typedef struct A68t449  A68_449 ;    /* PROC REF MODE369 */
struct A68t450{
A68_INT  Token;
A_PAD_INT(PAD_137)
A68_BOOL  Nil;
A_PAD_BOOL(PAD_138)
};
typedef struct A68t450  A68_450 ;    /* STRUCT(INT,BOOL)  */
struct A68t452{
A68_INT  Index;
A_PAD_INT(PAD_139)
A68_INT  Count;
A_PAD_INT(PAD_140)
};
typedef struct A68t452  A68_452 ;    /* STRUCT(INT,INT)  */
struct A68t451 { A68_INT mode; union {
A68_INT  mode1;
A68_VC  mode2;
struct A68t450  mode3;
struct A68t452  mode4;
} data; };
typedef struct A68t451  A68_451 ;    /* UNION(INT,MODE26,MODE450,MODE452)  */
struct A68t453{
struct A68t335 * Closure;
struct A68t102  Head_data;
};
typedef struct A68t453  A68_453 ;    /* STRUCT(REF MODE335,REF MODE102)  */

A_PROCEDURE(A68_VOID ,A68t455,(struct A68t175 ,struct A68t97 ,struct A68t451 *),(struct A68t175 ,struct A68t97 ,struct A68t451 *,void *));
typedef struct A68t455  A68_455 ;    /* PROC(MODE175,MODE97) MODE451 */
struct A68t454{
struct A68t175  Getchar;
struct A68t455  Initem;
struct A68t456 * Ids_lookup;
};
typedef struct A68t454  A68_454 ;    /* STRUCT(MODE175,MODE455,REF REF MODE456)  */
A_VECTOR(struct A68t102 ,A68t456);
typedef struct A68t456  A68_456 ;    /* VECTOR [] REF MODE102 */

A_PROCEDURE(A68_VOID ,A68t458,(struct A68t451 ,struct A68t36 ,struct A68t97 ),(struct A68t451 ,struct A68t36 ,struct A68t97 ,void *));
typedef struct A68t458  A68_458 ;    /* PROC(MODE451,MODE36,MODE97) VOID */
struct A68t457{
struct A68t36  Putstring;
struct A68t458  Outitem;
A68_BOOL  Write_idstable;
A_PAD_BOOL(PAD_141)
};
typedef struct A68t457  A68_457 ;    /* STRUCT(MODE36,MODE458,BOOL)  */

A_PROCEDURE(A68_INT ,A68t459,(struct A68t454 ,struct A68t97 ),(struct A68t454 ,struct A68t97 ,void *));
typedef struct A68t459  A68_459 ;    /* PROC(MODE454,MODE97) INT */

A_PROCEDURE(A68_BOOL ,A68t460,(struct A68t454 ,struct A68t97 ),(struct A68t454 ,struct A68t97 ,void *));
typedef struct A68t460  A68_460 ;    /* PROC(MODE454,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t461,(struct A68t454 ,struct A68t97 ,struct A68t450 *),(struct A68t454 ,struct A68t97 ,struct A68t450 *,void *));
typedef struct A68t461  A68_461 ;    /* PROC(MODE454,MODE97) MODE450 */

A_PROCEDURE(A68_VOID ,A68t462,(struct A68t454 ,struct A68t97 ,A68_VC *),(struct A68t454 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t462  A68_462 ;    /* PROC(MODE454,MODE97) MODE26 */

A_PROCEDURE(A68_CHAR ,A68t463,(struct A68t454 ,struct A68t97 ),(struct A68t454 ,struct A68t97 ,void *));
typedef struct A68t463  A68_463 ;    /* PROC(MODE454,MODE97) CHAR */

A_PROCEDURE(A68_VOID ,A68t464,(struct A68t454 ,struct A68t97 ,A68_VC *),(struct A68t454 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t464  A68_464 ;    /* PROC(MODE454,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t465,(A68_CHAR ,struct A68t457 ,struct A68t97 ),(A68_CHAR ,struct A68t457 ,struct A68t97 ,void *));
typedef struct A68t465  A68_465 ;    /* PROC(CHAR,MODE457,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t466,(A68_INT ,struct A68t457 ,struct A68t97 ),(A68_INT ,struct A68t457 ,struct A68t97 ,void *));
typedef struct A68t466  A68_466 ;    /* PROC(INT,MODE457,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t467,(A68_VC ,struct A68t457 ,struct A68t97 ),(A68_VC ,struct A68t457 ,struct A68t97 ,void *));
typedef struct A68t467  A68_467 ;    /* PROC(REF MODE26,MODE457,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t468,(A68_INT ,A68_BOOL ,struct A68t457 ,struct A68t97 ),(A68_INT ,A68_BOOL ,struct A68t457 ,struct A68t97 ,void *));
typedef struct A68t468  A68_468 ;    /* PROC(INT,BOOL,MODE457,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t469,(A68_BOOL ,struct A68t457 ,struct A68t97 ),(A68_BOOL ,struct A68t457 ,struct A68t97 ,void *));
typedef struct A68t469  A68_469 ;    /* PROC(BOOL,MODE457,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t470,(struct A68t175 ,struct A68t97 ,struct A68t454 *),(struct A68t175 ,struct A68t97 ,struct A68t454 *,void *));
typedef struct A68t470  A68_470 ;    /* PROC(MODE175,MODE97) MODE454 */

A_PROCEDURE(A68_VOID ,A68t471,(struct A68t454 ,struct A68t97 ,struct A68t453 *),(struct A68t454 ,struct A68t97 ,struct A68t453 *,void *));
typedef struct A68t471  A68_471 ;    /* PROC(MODE454,MODE97) MODE453 */

A_PROCEDURE(A68_VOID ,A68t472,(struct A68t36 ,A68_BOOL ,A68_BOOL ,struct A68t97 ,struct A68t457 *),(struct A68t36 ,A68_BOOL ,A68_BOOL ,struct A68t97 ,struct A68t457 *,void *));
typedef struct A68t472  A68_472 ;    /* PROC(MODE36,BOOL,BOOL,MODE97) MODE457 */

A_PROCEDURE(A68_VOID ,A68t473,(struct A68t453 ,struct A68t457 ,struct A68t97 ),(struct A68t453 ,struct A68t457 ,struct A68t97 ,void *));
typedef struct A68t473  A68_473 ;    /* PROC(MODE453,MODE457,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t474,(struct A68t457 ,struct A68t97 ),(struct A68t457 ,struct A68t97 ,void *));
typedef struct A68t474  A68_474 ;    /* PROC(MODE457,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t475,(struct A68t413 ,A68_BOOL ,struct A68t408 ,struct A68t408 ,struct A68t413 *),(struct A68t413 ,A68_BOOL ,struct A68t408 ,struct A68t408 ,struct A68t413 *,void *));
typedef struct A68t475  A68_475 ;    /* PROC(REF MODE413,BOOL,MODE408,MODE408) REF MODE413 */
struct A68t477 ;
struct A68t478 ;

A_PROCEDURE(A68_VOID ,A68t476,(struct A68t362 ,A68_BOOL ,A68_VC ,A68_VC ,struct A68t477 ,struct A68t474 ,struct A68t152 ,struct A68t478 ,struct A68t97 ),(struct A68t362 ,A68_BOOL ,A68_VC ,A68_VC ,struct A68t477 ,struct A68t474 ,struct A68t152 ,struct A68t478 ,struct A68t97 ,void *));
typedef struct A68t476  A68_476 ;    /* PROC(REF MODE362,BOOL,REF MODE26,REF MODE26,MODE477,MODE474,MODE152,MODE478,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t477,(struct A68t362 ,struct A68t97 ,struct A68t453 *),(struct A68t362 ,struct A68t97 ,struct A68t453 *,void *));
typedef struct A68t477  A68_477 ;    /* PROC(REF MODE362,MODE97) MODE453 */

A_PROCEDURE(A68_BOOL ,A68t478,(struct A68t335 *,struct A68t97 ),(struct A68t335 *,struct A68t97 ,void *));
typedef struct A68t478  A68_478 ;    /* PROC(REF MODE335,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t479,(struct A68t152 ),(struct A68t152 ,void *));
typedef struct A68t479  A68_479 ;    /* PROC(MODE152) VOID */

A_PROCEDURE(A68_VOID ,A68t480,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t480  A68_480 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,55,A68t481);
typedef struct A68t481  A68_481 ;    /* STRUCT 55 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t482);
typedef struct A68t482  A68_482 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t483);
typedef struct A68t483  A68_483 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t484);
typedef struct A68t484  A68_484 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t485);
typedef struct A68t485  A68_485 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t486);
typedef struct A68t486  A68_486 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t487);
typedef struct A68t487  A68_487 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(A68_CHAR ,36,A68t488);
typedef struct A68t488  A68_488 ;    /* STRUCT 36 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t489);
typedef struct A68t489  A68_489 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t490);
typedef struct A68t490  A68_490 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t491);
typedef struct A68t491  A68_491 ;    /* STRUCT 4 MODE52 */
A_ISTRUCT(A68_CHAR ,16,A68t492);
typedef struct A68t492  A68_492 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,41,A68t493);
typedef struct A68t493  A68_493 ;    /* STRUCT 41 CHAR */
A_ISTRUCT(A68_CHAR ,52,A68t494);
typedef struct A68t494  A68_494 ;    /* STRUCT 52 CHAR */
A_ISTRUCT(struct A68t52 ,5,A68t495);
typedef struct A68t495  A68_495 ;    /* STRUCT 5 MODE52 */
A_ISTRUCT(A68_CHAR ,57,A68t496);
typedef struct A68t496  A68_496 ;    /* STRUCT 57 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t497);
typedef struct A68t497  A68_497 ;    /* STRUCT 24 CHAR */

A_PROCEDURE(A68_VOID ,A68t498,(A68_BOOL ,struct A68t362 *),(A68_BOOL ,struct A68t362 *,void *));
typedef struct A68t498  A68_498 ;    /* PROC(BOOL) MODE362 */
A_ISTRUCT(struct A68t52 ,3,A68t499);
typedef struct A68t499  A68_499 ;    /* STRUCT 3 MODE52 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from asscommands --- */
extern A68_VOID  HVTBTRN_make_asscommands(struct A68t413 ,A68_BOOL ,struct A68t408 ,struct A68t408 ,A68_413 *);
extern A68_VOID  LKVBTRN_transform_prelude(struct A68t362 ,A68_BOOL ,A68_VC ,A68_VC ,struct A68t477 ,struct A68t474 ,struct A68t152 ,struct A68t478 ,struct A68t97 );
/* --- End of imports from asscommands --- */


/* --- Imports from openinterface --- */
extern A68_VOID  AKFATRN_outassemint(A68_INT ,struct A68t457 ,struct A68t97 );
/* --- End of imports from openinterface --- */


/* --- Imports from kernelreader --- */
extern A68_360  HNFAOST_filename_syntax;
extern A68_369 * UFGAOST_make_kernel_readers(void);
/* --- End of imports from kernelreader --- */


/* --- Imports from command --- */
extern A68_VOID  MMDAOST_nullcommand(struct A68t363 ,struct A68t97 );
extern A68_403  XMDAOST_normalaccess;
extern A68_400  HODAOST_finish;
extern A68_412 * GTDAOST_make_compound(struct A68t402 *,A68_VC ,A68_VC *,struct A68t413 ,struct A68t413 ,struct A68t405 );
extern A68_401 * DPEAOST_initialise_commands(struct A68t396 ,struct A68t397 ,struct A68t97 ,struct A68t399 ,struct A68t369 *,struct A68t412 *,struct A68t363 );
extern A68_VOID  FSEAOST_interpret_commands(struct A68t401 *,A68_400 *);
/* --- End of imports from command --- */


/* --- Imports from globalcommands --- */
extern A68_VOID  OJHAOST_make_globalcommands(A68_VC ,A68_VC ,struct A68t152 ,struct A68t420 ,A68_413 *);
/* --- End of imports from globalcommands --- */


/* --- Imports from commandcaller --- */
extern A68_VOID  IYGAOST_report_error(struct A68t102 );
extern A68_VOID  YYGAOST_set_default_msg(struct A68t398 );
extern A68_VOID  HZGAOST_call_command(struct A68t401 *,struct A68t402 *,struct A68t363 ,struct A68t97 ,A68_400 *);
/* --- End of imports from commandcaller --- */


/* --- Imports from commandreader --- */
/* --- End of imports from commandreader --- */


/* --- Imports from commandsyntax --- */
extern A68_360  SRAAOST_noparameters;
extern A68_363  ASAAOST_no_parameters;
/* --- End of imports from commandsyntax --- */


/* --- Imports from assmodes --- */
/* --- End of imports from assmodes --- */


/* --- Imports from printissue --- */
extern A68_VOID  QKCAOST_print_title(A68_BOOL );
extern A68_VOID  SKCAOST_print_issue(void);
/* --- End of imports from printissue --- */


/* --- Imports from variables --- */
/* --- End of imports from variables --- */


/* --- Imports from ioprocs --- */
extern A68_VOID  CQGAOST_io_input(A68_VC ,struct A68t97 );
extern A68_VOID  FXGAOST_initialise_ioprocs(struct A68t178 );
/* --- End of imports from ioprocs --- */


/* --- Imports from basics --- */
extern A68_VC  PLDAOST_infile_type;
extern A68_VC  YLDAOST_assfile_type;
/* --- End of imports from basics --- */


/* --- Imports from osinterface --- */
extern A68_125  BOBAOSI_update_access;
extern A68_125  FOBAOSI_update_truncate_access;
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
extern A68_159  TEAAOST_initialise_osinterface;
extern A68_97  ZLBAOSI_global_msg;
extern A68_34 * KEAAOST_screen;
extern A68_34 * MEAAOST_err;
extern A68_BOOL  LJAAOST_filename_arg(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL );
extern A68_VOID  OMAAOST_parse_arguments(A68_VC ,struct A68t152 ,struct A68t163 ,struct A68t164 );
/* --- End of imports from osinterface --- */


/* --- Imports from testmode --- */
extern A68_VOID  UHBAOST_set_testmode(struct A68t118 );
/* --- End of imports from testmode --- */


/* --- Imports from options --- */
/* --- End of imports from options --- */


/* --- Imports from messageproc --- */
extern A68_VOID  ZAAAOSI_makervc(A68_VC ,A68_VC *);
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VC  EOAAOSL_nullstr;
extern A68_VOID  HZAAOSL_lines(A68_INT ,A68_64 *);
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void ZHRBTRN(void);   /* asscommands */
extern void TPCATRN(void);   /* openinterface */
extern void TXEAOST(void);   /* kernelreader */
extern void FMDAOST(void);   /* command */
extern void DBHAOST(void);   /* globalcommands */
extern void AYGAOST(void);   /* commandcaller */
extern void YIBAOST(void);   /* commandreader */
extern void LRAAOST(void);   /* commandsyntax */
extern void BAAATRN(void);   /* assmodes */
extern void EGCAOST(void);   /* printissue */
extern void TKCAOST(void);   /* variables */
extern void TIGAOST(void);   /* ioprocs */
extern void JSCAOST(void);   /* basics */
extern void PCAAOST(void);   /* osinterface */
extern void QFBAOST(void);   /* testmode */
extern void BAAAOST(void);   /* options */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_481   JLVBTRN = {"$Id: transtest.a68,v 33.1 1994/06/94 08:30:00 snell Exp"}; 
A_GISVEC(A68_VC ,KLVBTRN,JLVBTRN,55)
static A68_482   LLVBTRN = {"TRANSFORM TEST"}; 
A_GISVEC(A68_VC ,MLVBTRN,LLVBTRN,14)
static A68_VC  NLVBTRN_name;
static A68_483   OLVBTRN = {"ELLSYSDIR"}; 
A_GISVEC(A68_VC ,PLVBTRN,OLVBTRN,9)
static A68_VC  QLVBTRN_ellasysdir;
static A68_VC  KMVBTRN_lbn;
static A68_484   MMVBTRN = {"No_library"}; 
A_GISVEC(A68_VC ,NMVBTRN,MMVBTRN,10)
static A68_VC  PMVBTRN_ctn;
static A68_484   RMVBTRN = {"No_context"}; 
A_GISVEC(A68_VC ,SMVBTRN,RMVBTRN,10)
static A68_485   VMVBTRN = {"32.03"}; 
A_GISVEC(A68_VC ,WMVBTRN,VMVBTRN,5)
static A68_486   XMVBTRN = {"17:03:94"}; 
A_GISVEC(A68_VC ,YMVBTRN,XMVBTRN,8)
static A68_487   ZMVBTRN = {""}; 
A_GISVEC(A68_VC ,ANVBTRN,ZMVBTRN,0)
static A68_488   BNVBTRN = {"Sorry, its failed - Er Er Er Er....."}; 
A_GISVEC(A68_VC ,CNVBTRN,BNVBTRN,36)
static A68_401 * DNVBTRN_env;
static A68_BOOL  VNVBTRN_silent;
static A68_BOOL  WNVBTRN_testmode;
static A68_VC  XNVBTRN_ass_fname;
static A68_VC  YNVBTRN_in_fname;
static A68_489   DOVBTRN = {"-t"}; 
A_GISVEC(A68_VC ,EOVBTRN,DOVBTRN,2)
static A68_489   GOVBTRN = {"-s"}; 
A_GISVEC(A68_VC ,HOVBTRN,GOVBTRN,2)
static A68_489   IOVBTRN = {"-i"}; 
A_GISVEC(A68_VC ,JOVBTRN,IOVBTRN,2)
static A68_485   KOVBTRN = {"Input"}; 
A_GISVEC(A68_VC ,LOVBTRN,KOVBTRN,5)
static A68_490   QOVBTRN = {"Unexpected option \""}; 
A_GISVEC(A68_VC ,ROVBTRN,QOVBTRN,19)
static A68_492   BPVBTRN = {"Extra argument \""}; 
A_GISVEC(A68_VC ,CPVBTRN,BPVBTRN,16)
static A68_482   LPVBTRN = {"Open interface"}; 
A_GISVEC(A68_VC ,MPVBTRN,LPVBTRN,14)
static A68_493   UPVBTRN = {"   <file> = open interface file from ELLA"}; 
A_GISVEC(A68_VC ,VPVBTRN,UPVBTRN,41)
static A68_494   AQVBTRN = {"-i <file> = start reading input commands from <file>"}; 
A_GISVEC(A68_VC ,BQVBTRN,AQVBTRN,52)
static A68_496   HQVBTRN = {"Give ELLA open interface file name ([-i <file>] <file>): "}; 
A_GISVEC(A68_VC ,IQVBTRN,HQVBTRN,57)
static A68_126   NQVBTRN = {".lis"}; 
A_GISVEC(A68_VC ,QQVBTRN,NQVBTRN,4)
static A68_413  UQVBTRN_globals;
static A68_485   WQVBTRN = {"OUTER"}; 
A_GISVEC(A68_VC ,XQVBTRN,WQVBTRN,5)
static A68_497   ZQVBTRN = {"Transform test programme"}; 
A_GISVEC(A68_VC ,ARVBTRN,ZQVBTRN,24)
static A68_482   FRVBTRN = {"Transform Test"}; 
static A68_483   GRVBTRN = {"Transtest"}; 
A_GISVEC(A68_VC ,MRVBTRN,GRVBTRN,9)
A_GISVEC(A68_VC ,PRVBTRN,FRVBTRN,14)
static A68_412 * RRVBTRN_outer_command;
static A68_INT * TRVBTRN_i;
static A68_INT  VRVBTRN_filename_no;
static A68_362  ASVBTRN_values;
static A68_483   MSVBTRN = {" finished"}; 
A_GISVEC(A68_VC ,NSVBTRN,MSVBTRN,9)

A_STATIC A68_VOID  TLVBTRN_get_assclosure(A68_362  Names, A68_97  Msg, A68_453  *ReturnedValue);

A_STATIC A68_VOID  ZLVBTRN_write_closureseeds(A68_457  W, A68_97  Msg);

A_STATIC A68_VOID  AMVBTRN_zero_ctnos(void);

A_STATIC A68_BOOL  DMVBTRN_check_sim_closure(A68_335 * Assclosure, A68_97  Msg);

A_STATIC A68_VOID  HMVBTRN_generator(A68_BOOL  GMVBTRN_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  ENVBTRN_get_prompt(A68_VC  *ReturnedValue);

A_STATIC A68_VOID  INVBTRN_assemble_prelude(A68_362  Names, A68_97  Msg);

A_STATIC A68_VOID  PNVBTRN_assemblefile_prelude(A68_362  Names, A68_97  Msg);

A_STATIC A68_VOID  ZNVBTRN_reset(void);

A_STATIC A68_BOOL  COVBTRN_check_arg(A68_VC  Arg, A68_146  Next);

A_STATIC A68_BOOL  OPVBTRN_no_more(A68_BOOL  Ok);

A_STATIC A68_401 ** OQVBTRN_anonymous(void);

A_STATIC A68_VOID  XRVBTRN_generator(A68_BOOL  WRVBTRN_anonymous, A68_362  *ReturnedValue);

A_STATIC A68_VOID  TLVBTRN_get_assclosure(A68_362  Names, A68_97  Msg, A68_453  *ReturnedValue)
{ 
A68_453  ULVBTRN;  /* collateral clause result */
A68_102  VLVBTRN;  /* OPERATORS - nil -> mode */
A68_453  WLVBTRN;  /* clause result */
A_PROC_ENTRY(get_assclosure);
 /* line 52: */
ULVBTRN.Closure = (A68_335 *)A68_NIL;
ULVBTRN.Head_data = A_VVAC(VLVBTRN);
WLVBTRN = ULVBTRN;
A_PROC_EXIT(get_assclosure);
*ReturnedValue = (WLVBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ZLVBTRN_write_closureseeds(A68_457  W, A68_97  Msg)
{ 
A_PROC_ENTRY(write_closureseeds);
 /* line 54: */
AKFATRN_outassemint(0, W, Msg);
A_PROC_EXIT(write_closureseeds);
return;
} 
#undef NL

A_STATIC A68_VOID  AMVBTRN_zero_ctnos(void)
{ 
A_PROC_ENTRY(zero_ctnos);
/*SKIP*/;
A_PROC_EXIT(zero_ctnos);
return;
} 
#undef NL

A_STATIC A68_BOOL  DMVBTRN_check_sim_closure(A68_335 * Assclosure, A68_97  Msg)
{ 
A68_BOOL  EMVBTRN;  /* clause result */
A68_BOOL  FMVBTRN;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(check_sim_closure);
EMVBTRN = FMVBTRN;
A_PROC_EXIT(check_sim_closure);
return( EMVBTRN );
} 
#undef NL

A_STATIC A68_VOID  HMVBTRN_generator(A68_BOOL  GMVBTRN_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  IMVBTRN;  /* clause result */
A68_VC  JMVBTRN;  /* OPERATORS - dynamic generator */
{ 
JMVBTRN.upb = 10 ;
( GMVBTRN_anonymous? A_VLOC(A68_CHAR ,JMVBTRN): A_VHEAP(A68_CHAR ,JMVBTRN) );
IMVBTRN = JMVBTRN;
} 
*ReturnedValue = (IMVBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ENVBTRN_get_prompt(A68_VC  *ReturnedValue)
{ 
A68_VC  FNVBTRN;  /* clause result */
A_PROC_ENTRY(get_prompt);
FNVBTRN = (*(*(&((*(&((*(&(DNVBTRN_env->Stack)))->Current_context)))->Prompt))));
A_PROC_EXIT(get_prompt);
*ReturnedValue = (FNVBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  INVBTRN_assemble_prelude(A68_362  Names, A68_97  Msg)
{ 
A68_477  JNVBTRN;  /* procedure value */
A68_474  KNVBTRN;  /* procedure value */
A68_152  LNVBTRN;  /* procedure value */
A68_478  MNVBTRN;  /* procedure value */
A_PROC_ENTRY(assemble_prelude);
 /* line 68: */
 /* line 69: */
 /* line 70: */
JNVBTRN.fn.fn_global = TLVBTRN_get_assclosure;
JNVBTRN.nonlocals = A68_NIL;
KNVBTRN.fn.fn_global = ZLVBTRN_write_closureseeds;
KNVBTRN.nonlocals = A68_NIL;
LNVBTRN.fn.fn_global = AMVBTRN_zero_ctnos;
LNVBTRN.nonlocals = A68_NIL;
MNVBTRN.fn.fn_global = DMVBTRN_check_sim_closure;
MNVBTRN.nonlocals = A68_NIL;
LKVBTRN_transform_prelude(Names, A68_FALSE, KMVBTRN_lbn, PMVBTRN_ctn, JNVBTRN, KNVBTRN, LNVBTRN, MNVBTRN, Msg);
A_PROC_EXIT(assemble_prelude);
return;
} 
#undef NL

A_STATIC A68_VOID  PNVBTRN_assemblefile_prelude(A68_362  Names, A68_97  Msg)
{ 
A68_477  QNVBTRN;  /* procedure value */
A68_474  RNVBTRN;  /* procedure value */
A68_152  SNVBTRN;  /* procedure value */
A68_478  TNVBTRN;  /* procedure value */
A_PROC_ENTRY(assemblefile_prelude);
 /* line 73: */
 /* line 74: */
 /* line 75: */
QNVBTRN.fn.fn_global = TLVBTRN_get_assclosure;
QNVBTRN.nonlocals = A68_NIL;
RNVBTRN.fn.fn_global = ZLVBTRN_write_closureseeds;
RNVBTRN.nonlocals = A68_NIL;
SNVBTRN.fn.fn_global = AMVBTRN_zero_ctnos;
SNVBTRN.nonlocals = A68_NIL;
TNVBTRN.fn.fn_global = DMVBTRN_check_sim_closure;
TNVBTRN.nonlocals = A68_NIL;
LKVBTRN_transform_prelude(Names, A68_TRUE, KMVBTRN_lbn, PMVBTRN_ctn, QNVBTRN, RNVBTRN, SNVBTRN, TNVBTRN, Msg);
A_PROC_EXIT(assemblefile_prelude);
return;
} 
#undef NL

A_STATIC A68_VOID  ZNVBTRN_reset(void)
{ 
A_PROC_ENTRY(reset);
{ 
XNVBTRN_ass_fname = YNVBTRN_in_fname = EOAAOSL_nullstr;
 /* line 85: */
 /* line 86: */
VNVBTRN_silent = WNVBTRN_testmode = A68_FALSE;
} 
A_PROC_EXIT(reset);
return;
} 
#undef NL

A_STATIC A68_BOOL  COVBTRN_check_arg(A68_VC  Arg, A68_146  Next)
{ 
A68_BOOL  FOVBTRN;  /* clause result */
A68_VC  MOVBTRN;  /* avoid structure result */
A68_BOOL  NOVBTRN;  /* optbool result */
A68_INT  OOVBTRN;  /* YIELD */
A68_491  POVBTRN;  /* collateral clause result */
A68_52  SOVBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  TOVBTRN;  /* YIELD */
A68_52  UOVBTRN;  /* OPERATORS - mode -> union mode */
A68_52  VOVBTRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  WOVBTRN;  /* YIELD */
A68_52  XOVBTRN;  /* OPERATORS - mode -> union mode */
A68_56  YOVBTRN;  /* procedure value */
A68_85  ZOVBTRN;  /* OPERATORS - istruct -> vector */
A68_491  APVBTRN;  /* collateral clause result */
A68_52  DPVBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  EPVBTRN;  /* YIELD */
A68_52  FPVBTRN;  /* OPERATORS - mode -> union mode */
A68_52  GPVBTRN;  /* OPERATORS - mode -> union mode */
A68_CHAR  HPVBTRN;  /* YIELD */
A68_52  IPVBTRN;  /* OPERATORS - mode -> union mode */
A68_56  JPVBTRN;  /* procedure value */
A68_85  KPVBTRN;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(check_arg);
 /* line 89: */
if ( A_VC_EQ(Arg,EOVBTRN) )
{ 
 /* line 90: */
FOVBTRN = WNVBTRN_testmode = A68_TRUE;
} 
else
{ 
if ( A_VC_EQ(Arg,HOVBTRN) )
{ 
 /* line 91: */
FOVBTRN = VNVBTRN_silent = A68_TRUE;
} 
else
{ 
 /* line 92: */
if ( A_VC_EQ(Arg,JOVBTRN) )
{ 
 /* line 93: */
A_CALLPROC(Next,( &MOVBTRN),( &MOVBTRN,(Next).nonlocals));
FOVBTRN = LJAAOST_filename_arg(MOVBTRN, LOVBTRN, PLDAOST_infile_type, (&YNVBTRN_in_fname), A68_TRUE);
} 
else
{ 
NOVBTRN = (Arg.upb>=1);
if ( NOVBTRN )
{ /* line 94: */
OOVBTRN = 1 ;
NOVBTRN = (A_VINDEX(Arg,OOVBTRN)=='-');
}
if ( NOVBTRN )
{ 
TOVBTRN = ROVBTRN ;
POVBTRN.data[0] = A_UNITE(SOVBTRN,mode7,7,TOVBTRN);
POVBTRN.data[1] = A_UNITE(UOVBTRN,mode7,7,Arg);
WOVBTRN = '\"' ;
POVBTRN.data[2] = A_UNITE(VOVBTRN,mode6,6,WOVBTRN);
YOVBTRN.fn.fn_global = LRAAOSL_newline;
YOVBTRN.nonlocals = A68_NIL;
POVBTRN.data[3] = A_UNITE(XOVBTRN,mode12,12,YOVBTRN);
GFBAOSL_put(MEAAOST_err, A_HISVEC(ZOVBTRN,POVBTRN,4,A68_52 ));
 /* line 95: */
FOVBTRN = A68_FALSE;
} 
else
{ 
 /* line 96: */
if ( (XNVBTRN_ass_fname.upb>0) )
{ 
EPVBTRN = CPVBTRN ;
APVBTRN.data[0] = A_UNITE(DPVBTRN,mode7,7,EPVBTRN);
APVBTRN.data[1] = A_UNITE(FPVBTRN,mode7,7,Arg);
HPVBTRN = '\"' ;
APVBTRN.data[2] = A_UNITE(GPVBTRN,mode6,6,HPVBTRN);
JPVBTRN.fn.fn_global = LRAAOSL_newline;
JPVBTRN.nonlocals = A68_NIL;
APVBTRN.data[3] = A_UNITE(IPVBTRN,mode12,12,JPVBTRN);
GFBAOSL_put(MEAAOST_err, A_HISVEC(KPVBTRN,APVBTRN,4,A68_52 ));
 /* line 97: */
FOVBTRN = A68_FALSE;
} 
else
{ 
 /* line 98: */
FOVBTRN = LJAAOST_filename_arg(Arg, MPVBTRN, YLDAOST_assfile_type, (&XNVBTRN_ass_fname), A68_TRUE);
} 
} 
} 
} 
} 
A_PROC_EXIT(check_arg);
return( FOVBTRN );
} 
#undef NL

A_STATIC A68_BOOL  OPVBTRN_no_more(A68_BOOL  Ok)
{ 
A68_BOOL  PPVBTRN;  /* optbool result */
A68_BOOL  QPVBTRN;  /* clause result */
A68_495  RPVBTRN;  /* collateral clause result */
A68_52  SPVBTRN;  /* OPERATORS - mode -> union mode */
A68_56  TPVBTRN;  /* procedure value */
A68_52  WPVBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  XPVBTRN;  /* YIELD */
A68_52  YPVBTRN;  /* OPERATORS - mode -> union mode */
A68_56  ZPVBTRN;  /* procedure value */
A68_52  CQVBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  DQVBTRN;  /* YIELD */
A68_64  EQVBTRN;  /* avoid structure result */
A68_52  FQVBTRN;  /* OPERATORS - mode -> union mode */
A68_85  GQVBTRN;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(no_more);
 /* line 102: */
PPVBTRN = Ok;
if ( PPVBTRN )
{ /* line 103: */
PPVBTRN = (XNVBTRN_ass_fname.upb>0);
}
if ( PPVBTRN )
{ 
 /* line 104: */
QPVBTRN = A68_TRUE;
} 
else
{ 
TPVBTRN.fn.fn_global = LRAAOSL_newline;
TPVBTRN.nonlocals = A68_NIL;
RPVBTRN.data[0] = A_UNITE(SPVBTRN,mode12,12,TPVBTRN);
 /* line 105: */
XPVBTRN = VPVBTRN ;
RPVBTRN.data[1] = A_UNITE(WPVBTRN,mode7,7,XPVBTRN);
 /* line 106: */
ZPVBTRN.fn.fn_global = LRAAOSL_newline;
ZPVBTRN.nonlocals = A68_NIL;
RPVBTRN.data[2] = A_UNITE(YPVBTRN,mode12,12,ZPVBTRN);
DQVBTRN = BQVBTRN ;
RPVBTRN.data[3] = A_UNITE(CQVBTRN,mode7,7,DQVBTRN);
HZAAOSL_lines( 2, &EQVBTRN );
RPVBTRN.data[4] = A_UNITE(FQVBTRN,mode20,20,EQVBTRN);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(GQVBTRN,RPVBTRN,5,A68_52 ));
 /* line 107: */
 /* line 108: */
QPVBTRN = A68_FALSE;
} 
A_PROC_EXIT(no_more);
return( QPVBTRN );
} 
#undef NL

A_STATIC A68_401 ** OQVBTRN_anonymous(void)
{ 
A68_401 ** PQVBTRN;  /* clause result */
PQVBTRN = (&DNVBTRN_env);
return( PQVBTRN );
} 
#undef NL

A_STATIC A68_VOID  XRVBTRN_generator(A68_BOOL  WRVBTRN_anonymous, A68_362  *ReturnedValue)
{ 
A68_362  YRVBTRN;  /* clause result */
A68_362  ZRVBTRN;  /* OPERATORS - dynamic generator */
{ 
ZRVBTRN.upb = 1 ;
( WRVBTRN_anonymous? A_VLOC(A68_361 ,ZRVBTRN): A_VHEAP(A68_361 ,ZRVBTRN) );
YRVBTRN = ZRVBTRN;
} 
*ReturnedValue = (YRVBTRN);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 5: */
 /* line 7: */
int main (int argc, char **argv)
{ 

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/transtest.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/asscommands.m","./mfiles/openinterface.m","/u/model/ella/ostools/assoc/mfiles/kernelreader.m","/u/model/ella/ostools/assoc/mfiles/command.m","/u/model/ella/ostools/assoc/mfiles/globalcommands.m","/u/model/ella/ostools/assoc/mfiles/commandcaller.m","/u/model/ella/ostools/assoc/mfiles/commandreader.m","/u/model/ella/ostools/assoc/mfiles/commandsyntax.m","./mfiles/assmodes.m","/u/model/ella/ostools/assoc/mfiles/printissue.m","/u/model/ella/ostools/assoc/mfiles/variables.m","/u/model/ella/ostools/assoc/mfiles/ioprocs.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/ostools/assoc/mfiles/testmode.m","/u/model/ella/ostools/assoc/mfiles/options.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_VC  LMVBTRN;  /* avoid structure result */
A68_VC  OMVBTRN;  /* OPERATORS - assign op */
A68_VC  QMVBTRN;  /* avoid structure result */
A68_VC  TMVBTRN;  /* OPERATORS - assign op */
A68_157  UMVBTRN;  /* collateral clause result */
A68_178  UNVBTRN;  /* procedure value */
A68_152  JQVBTRN;  /* procedure value */
A68_163  KQVBTRN;  /* procedure value */
A68_164  LQVBTRN;  /* procedure value */
A68_118  MQVBTRN;  /* OPERATORS - mode -> union mode */
A68_152  RQVBTRN;  /* procedure value */
A68_420  SQVBTRN;  /* procedure value */
A68_413  TQVBTRN;  /* avoid structure result */
A68_402  VQVBTRN;  /* collateral clause result */
A68_VC  YQVBTRN;  /* avoid structure result */
A68_VC  BRVBTRN;  /* avoid structure result */
A68_404  CRVBTRN;  /* OPERATORS - mode -> union mode */
A68_405  DRVBTRN;  /* OPERATORS - mode -> union mode */
A68_407  ERVBTRN;  /* procedure value */
A68_405  HRVBTRN;  /* OPERATORS - mode -> union mode */
A68_407  IRVBTRN;  /* procedure value */
A68_408  JRVBTRN;  /* procedure value */
A68_408  KRVBTRN;  /* procedure value */
A68_413  LRVBTRN;  /* avoid structure result */
A68_VC  NRVBTRN;  /* avoid structure result */
A68_VC * ORVBTRN;  /* YIELD */
A68_402 * QRVBTRN;  /* YIELD */
A68_360  SRVBTRN;  /* united object - for case conformity */
A68_INT  URVBTRN;  /* clause result */
A68_362  BSVBTRN;  /* avoid structure result */
A68_361  CSVBTRN;  /* collateral clause result */
A68_362  DSVBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_362  ESVBTRN;  /* OPERATORS - assign op */
A68_396  FSVBTRN;  /* procedure value */
A68_397  GSVBTRN;  /* procedure value */
A68_399  HSVBTRN;  /* procedure value */
A68_BOOL * ISVBTRN;  /* YIELD */
A68_400  JSVBTRN;  /* avoid structure result */
A68_499  KSVBTRN;  /* collateral clause result */
A68_52  LSVBTRN;  /* OPERATORS - mode -> union mode */
A68_52  OSVBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  PSVBTRN;  /* YIELD */
A68_52  QSVBTRN;  /* OPERATORS - mode -> union mode */
A68_56  RSVBTRN;  /* procedure value */
A68_85  SSVBTRN;  /* OPERATORS - istruct -> vector */
A_GC_STARTUP(argc);
BAAALIB();   /* USE a68config */
ZHRBTRN();   /* USE asscommands */
TPCATRN();   /* USE openinterface */
TXEAOST();   /* USE kernelreader */
FMDAOST();   /* USE command */
DBHAOST();   /* USE globalcommands */
AYGAOST();   /* USE commandcaller */
YIBAOST();   /* USE commandreader */
LRAAOST();   /* USE commandsyntax */
BAAATRN();   /* USE assmodes */
EGCAOST();   /* USE printissue */
TKCAOST();   /* USE variables */
TIGAOST();   /* USE ioprocs */
JSCAOST();   /* USE basics */
PCAAOST();   /* USE osinterface */
QFBAOST();   /* USE testmode */
BAAAOST();   /* USE options */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/transform/assoc/./a68files/transtest.a68";
A_config.translation_time = "Tue Apr  4 10:12:23 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "GLVBTRN (from seed file) ";
A_config.spec_change_time = "no spec";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
#ifdef A_prelude
A_prelude(argc,argv);
#endif
A_PROC_ENTRY(MAIN);
{ 
UEAALIB_a68config(LGAALIB_configinfo, KLVBTRN);
 /* line 50: */
NLVBTRN_name = MLVBTRN;
QLVBTRN_ellasysdir = PLVBTRN;
 /* line 51: */
 /* line 53: */
 /* line 55: */
 /* line 56: */
 /* line 57: */
HMVBTRN_generator( A68_TRUE, &LMVBTRN );
KMVBTRN_lbn = LMVBTRN;
OMVBTRN = NMVBTRN ;
A_VASSIGN2(OMVBTRN,KMVBTRN_lbn,A68_CHAR );
 /* line 58: */
HMVBTRN_generator( A68_TRUE, &QMVBTRN );
PMVBTRN_ctn = QMVBTRN;
TMVBTRN = SMVBTRN ;
A_VASSIGN2(TMVBTRN,PMVBTRN_ctn,A68_CHAR );
 /* line 60: */
 /* line 61: */
UMVBTRN.Name = NLVBTRN_name;
UMVBTRN.Version = WMVBTRN;
UMVBTRN.Date = YMVBTRN;
 /* line 62: */
UMVBTRN.Msg = ANVBTRN;
UMVBTRN.Sys_fault = CNVBTRN;
A_CALLPROC(TEAAOST_initialise_osinterface,(UMVBTRN, A68_TRUE),(UMVBTRN, A68_TRUE,(TEAAOST_initialise_osinterface).nonlocals));
 /* line 64: */
 /* line 65: */
 /* line 67: */
 /* line 72: */
 /* line 77: */
UNVBTRN.fn.fn_global = ENVBTRN_get_prompt;
UNVBTRN.nonlocals = A68_NIL;
FXGAOST_initialise_ioprocs(UNVBTRN);
 /* line 79: */
 /* line 80: */
XNVBTRN_ass_fname = EOAAOSL_nullstr;
YNVBTRN_in_fname = EOAAOSL_nullstr;
 /* line 82: */
 /* line 83: */
 /* line 84: */
 /* line 88: */
 /* line 101: */
 /* line 111: */
 /* line 112: */
JQVBTRN.fn.fn_global = ZNVBTRN_reset;
JQVBTRN.nonlocals = A68_NIL;
KQVBTRN.fn.fn_global = COVBTRN_check_arg;
KQVBTRN.nonlocals = A68_NIL;
LQVBTRN.fn.fn_global = OPVBTRN_no_more;
LQVBTRN.nonlocals = A68_NIL;
OMAAOST_parse_arguments(IQVBTRN, JQVBTRN, KQVBTRN, LQVBTRN);
 /* line 114: */
QKCAOST_print_title(VNVBTRN_silent);
 /* line 115: */
UHBAOST_set_testmode(A_UNITE(MQVBTRN,mode1,1,WNVBTRN_testmode));
 /* line 119: */
if ( (YNVBTRN_in_fname.upb>0) )
{ 
CQGAOST_io_input(YNVBTRN_in_fname, ZLBAOSI_global_msg);
} 
 /* line 122: */
 /* line 123: */
RQVBTRN.fn.fn_global = SKCAOST_print_issue;
RQVBTRN.nonlocals = A68_NIL;
SQVBTRN.fn.fn_global = OQVBTRN_anonymous;
SQVBTRN.nonlocals = A68_NIL;
OJHAOST_make_globalcommands( QLVBTRN_ellasysdir, QQVBTRN, RQVBTRN, SQVBTRN, &TQVBTRN );
UQVBTRN_globals = TQVBTRN;
 /* line 125: */
 /* line 127: */
ZAAAOSI_makervc( XQVBTRN, &YQVBTRN );
VQVBTRN.Name = YQVBTRN;
VQVBTRN.Abreviation = EOAAOSL_nullstr;
 /* line 128: */
VQVBTRN.Parameter = SRAAOST_noparameters;
VQVBTRN.Access = XMDAOST_normalaccess;
 /* line 129: */
VQVBTRN.Continuation = HODAOST_finish;
ZAAAOSI_makervc( ARVBTRN, &BRVBTRN );
VQVBTRN.Help = A_UNITE(CRVBTRN,mode1,1,BRVBTRN);
ERVBTRN.fn.fn_global = MMDAOST_nullcommand;
ERVBTRN.nonlocals = A68_NIL;
VQVBTRN.Command = A_UNITE(DRVBTRN,mode2,2,ERVBTRN);
 /* line 130: */
 /* line 131: */
 /* line 132: */
 /* line 133: */
 /* line 134: */
 /* line 136: */
IRVBTRN.fn.fn_global = MMDAOST_nullcommand;
IRVBTRN.nonlocals = A68_NIL;
JRVBTRN.fn.fn_global = INVBTRN_assemble_prelude;
JRVBTRN.nonlocals = A68_NIL;
KRVBTRN.fn.fn_global = PNVBTRN_assemblefile_prelude;
KRVBTRN.nonlocals = A68_NIL;
HVTBTRN_make_asscommands( UQVBTRN_globals, A68_FALSE, JRVBTRN, KRVBTRN, &LRVBTRN );
ZAAAOSI_makervc( MRVBTRN, &NRVBTRN );
ORVBTRN = A_HEAP(A68_VC ) ;
(*ORVBTRN) = NRVBTRN ;
QRVBTRN = A_HEAP(A68_402 ) ;
(*QRVBTRN) = VQVBTRN ;
RRVBTRN_outer_command = GTDAOST_make_compound(QRVBTRN, PRVBTRN, ORVBTRN, LRVBTRN, UQVBTRN_globals, A_UNITE(HRVBTRN,mode2,2,IRVBTRN));
 /* line 138: */
SRVBTRN = HNFAOST_filename_syntax ;
switch ( SRVBTRN.mode )
{ 
case 1: /* REF INT */
TRVBTRN_i = (SRVBTRN.data.mode1);
URVBTRN = (*TRVBTRN_i);
break;
default: 
A_IMP_SKIP ;
break;
} 
VRVBTRN_filename_no = URVBTRN;
 /* line 139: */
XRVBTRN_generator( A68_TRUE, &BSVBTRN );
ASVBTRN_values = BSVBTRN;
CSVBTRN.Sort = VRVBTRN_filename_no;
CSVBTRN.Value = XNVBTRN_ass_fname;
ESVBTRN = A_HVEC(DSVBTRN,CSVBTRN,A68_361 ) ;
A_VASSIGN2(ESVBTRN,ASVBTRN_values,A68_361 );
 /* line 141: */
PNVBTRN_assemblefile_prelude(ASVBTRN_values, ZLBAOSI_global_msg);
 /* line 143: */
 /* line 144: */
 /* line 145: */
FSVBTRN.fn.fn_global = IYGAOST_report_error;
FSVBTRN.nonlocals = A68_NIL;
GSVBTRN.fn.fn_global = YYGAOST_set_default_msg;
GSVBTRN.nonlocals = A68_NIL;
HSVBTRN.fn.fn_global = HZGAOST_call_command;
HSVBTRN.nonlocals = A68_NIL;
DNVBTRN_env = DPEAOST_initialise_commands(FSVBTRN, GSVBTRN, ZLBAOSI_global_msg, HSVBTRN, UFGAOST_make_kernel_readers(), RRVBTRN_outer_command, ASAAOST_no_parameters);
 /* line 147: */
ISVBTRN = (&(DNVBTRN_env->Private)) ;
(*ISVBTRN) = A68_TRUE;
 /* line 148: */
FSEAOST_interpret_commands( DNVBTRN_env, &JSVBTRN );
JSVBTRN;
 /* line 149: */
KSVBTRN.data[0] = A_UNITE(LSVBTRN,mode7,7,NLVBTRN_name);
PSVBTRN = NSVBTRN ;
KSVBTRN.data[1] = A_UNITE(OSVBTRN,mode7,7,PSVBTRN);
RSVBTRN.fn.fn_global = LRAAOSL_newline;
RSVBTRN.nonlocals = A68_NIL;
KSVBTRN.data[2] = A_UNITE(QSVBTRN,mode12,12,RSVBTRN);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(SSVBTRN,KSVBTRN,3,A68_52 ));
 /* line 151: */
 /* line 152: */
 /* line 153: */
/*SKIP*/;
} 
A_PROC_EXIT(MAIN);
#ifdef A_postlude
A_postlude;
#endif
return(0);
} 
#undef NL
/* end of translation of ./a68files/transtest.a68 */
